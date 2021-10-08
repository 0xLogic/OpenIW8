/*
==============
bdUnreliableSendWindow::getDataToSend
==============
*/

void __fastcall bdUnreliableSendWindow::getDataToSend(bdUnreliableSendWindow *this, bdPacket *packet)
{
  ?getDataToSend@bdUnreliableSendWindow@@QEAAXAEAVbdPacket@@@Z(this, packet);
}

/*
==============
bdUnreliableSendWindow::bdUnreliableSendWindow
==============
*/

void __fastcall bdUnreliableSendWindow::bdUnreliableSendWindow(bdUnreliableSendWindow *this)
{
  ??0bdUnreliableSendWindow@@QEAA@XZ(this);
}

/*
==============
bdUnreliableSendWindow::add
==============
*/

void __fastcall bdUnreliableSendWindow::add(bdUnreliableSendWindow *this, bdReference<bdDataChunk> chunk)
{
  ?add@bdUnreliableSendWindow@@QEAAXV?$bdReference@VbdDataChunk@@@@@Z(this, chunk);
}

/*
==============
bdUnreliableSendWindow::reset
==============
*/

void __fastcall bdUnreliableSendWindow::reset(bdUnreliableSendWindow *this)
{
  ?reset@bdUnreliableSendWindow@@QEAAXXZ(this);
}

/*
==============
bdUnreliableSendWindow::~bdUnreliableSendWindow
==============
*/

void __fastcall bdUnreliableSendWindow::~bdUnreliableSendWindow(bdUnreliableSendWindow *this)
{
  ??1bdUnreliableSendWindow@@UEAA@XZ(this);
}

/*
==============
bdUnreliableSendWindow::bdUnreliableSendWindow
==============
*/
void bdUnreliableSendWindow::bdUnreliableSendWindow(bdUnreliableSendWindow *this)
{
  this->__vftable = (bdUnreliableSendWindow_vtbl *)&bdUnreliableSendWindow::`vftable';
  this->m_seqNumber = 0;
  this->m_sendQueue.m_list.m_head = NULL;
  this->m_sendQueue.m_list.m_tail = NULL;
  this->m_sendQueue.m_list.m_size = 0;
}

/*
==============
bdUnreliableSendWindow::~bdUnreliableSendWindow
==============
*/
void bdUnreliableSendWindow::~bdUnreliableSendWindow(bdUnreliableSendWindow *this)
{
  this->__vftable = (bdUnreliableSendWindow_vtbl *)&bdUnreliableSendWindow::`vftable';
  bdLinkedList<bdReference<bdDataChunk>>::~bdLinkedList<bdReference<bdDataChunk>>(&this->m_sendQueue.m_list);
}

/*
==============
bdUnreliableSendWindow::add
==============
*/
void bdUnreliableSendWindow::add(bdUnreliableSendWindow *this, bdReference<bdDataChunk> chunk)
{
  bdLinkedList<bdReference<bdDataChunk> >::Node *m_tail; 
  bdLinkedList<bdReference<bdDataChunk> >::Node *v5; 
  bdDataChunk_vtbl *v6; 
  bdLinkedList<bdReference<bdDataChunk> >::Node *m_next; 
  bdLinkedList<bdReference<bdDataChunk> >::Node *v8; 

  bdHandleAssert(chunk.m_ptr->__vftable != NULL, "chunk.notNull()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdwindow\\bdunreliablesendwindow.cpp", "bdUnreliableSendWindow::add", 0x19u, "Chunk should never be null.", -2i64);
  m_tail = this->m_sendQueue.m_list.m_tail;
  v5 = (bdLinkedList<bdReference<bdDataChunk> >::Node *)bdMemory::allocate(0x18ui64);
  if ( v5 )
  {
    v6 = chunk.m_ptr->__vftable;
    v5->m_data.m_ptr = (bdDataChunk *)chunk.m_ptr->__vftable;
    if ( v6 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v6->getType, 1u);
  }
  else
  {
    v5 = NULL;
  }
  if ( m_tail )
  {
    v5->m_next = m_tail->m_next;
    v5->m_prev = m_tail;
    m_next = m_tail->m_next;
    if ( m_next )
    {
      m_next->m_prev = v5;
    }
    else
    {
      bdHandleAssert(m_tail == this->m_sendQueue.m_list.m_tail, "node == m_tail", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdlinkedlist.inl", "bdLinkedList<class bdReference<class bdDataChunk> >::insertAfter", 0x176u, "bdLinkedList::insertAfter, node has no next entry, but is not the tail.");
      this->m_sendQueue.m_list.m_tail = v5;
    }
    m_tail->m_next = v5;
  }
  else
  {
    v5->m_next = NULL;
    v5->m_prev = this->m_sendQueue.m_list.m_tail;
    v8 = this->m_sendQueue.m_list.m_tail;
    if ( v8 )
      v8->m_next = v5;
    else
      this->m_sendQueue.m_list.m_head = v5;
    this->m_sendQueue.m_list.m_tail = v5;
  }
  ++this->m_sendQueue.m_list.m_size;
  if ( chunk.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&chunk.m_ptr->getType, 0xFFFFFFFF) == 1 )
  {
    if ( chunk.m_ptr->__vftable )
      (*(void (__fastcall **)(bdDataChunk_vtbl *, __int64))chunk.m_ptr->~bdReferencable)(chunk.m_ptr->__vftable, 1i64);
    chunk.m_ptr->__vftable = NULL;
  }
}

/*
==============
bdUnreliableSendWindow::getDataToSend
==============
*/
void bdUnreliableSendWindow::getDataToSend(bdUnreliableSendWindow *this, bdPacket *packet)
{
  bool v4; 
  bdDataChunk *v5; 
  __int64 *m_head; 
  bool v7; 
  bdLinkedList<bdReference<bdDataChunk> >::Node *v8; 
  bdLinkedList<bdReference<bdDataChunk> >::Node *m_prev; 
  __int64 v10; 
  bdDataChunk *v11; 
  bdReference<bdChunk> chunk; 

  v10 = -2i64;
  v4 = 1;
  v5 = NULL;
  v11 = NULL;
  while ( this->m_sendQueue.m_list.m_size )
  {
    if ( !v4 )
      break;
    bdHandleAssert(this->m_sendQueue.m_list.m_size != 0, "getSize() > 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdqueue.inl", "bdQueue<class bdReference<class bdDataChunk> >::peek", 0x19u, "bdQueue::dequeue, queue empty, can't peek.", v10);
    bdHandleAssert(this->m_sendQueue.m_list.m_head != NULL, "m_head != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdlinkedlist.inl", "bdLinkedList<class bdReference<class bdDataChunk> >::getHead", 0x42u, "bdLinkedList::GetHead, list is empty so has no head.");
    m_head = (__int64 *)this->m_sendQueue.m_list.m_head;
    if ( m_head != (__int64 *)&v11 )
    {
      if ( v5 && _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_refCount, 0xFFFFFFFF) == 1 )
        ((void (__fastcall *)(bdDataChunk *, __int64))v11->~bdReferencable)(v11, 1i64);
      v5 = (bdDataChunk *)*m_head;
      v11 = v5;
      v7 = v5 == NULL;
      if ( !v5 )
        goto LABEL_10;
      _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_refCount, 1u);
      v5 = v11;
    }
    v7 = v5 == NULL;
LABEL_10:
    bdHandleAssert(!v7, "chunk.notNull()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdwindow\\bdunreliablesendwindow.cpp", "bdUnreliableSendWindow::getDataToSend", 0x25u, "Chunk should never be null.");
    bdDataChunk::setSequenceNumber(v5, this->m_seqNumber);
    chunk.m_ptr = v5;
    if ( v5 )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_refCount, 1u);
      v5 = v11;
    }
    v4 = bdPacket::addChunk(packet, (bdReference<bdChunk>)&chunk);
    if ( v4 )
    {
      ++this->m_seqNumber;
      bdHandleAssert(this->m_sendQueue.m_list.m_size != 0, "getSize() > 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdqueue.inl", "bdQueue<class bdReference<class bdDataChunk> >::dequeue", 0x12u, "bdQueue::dequeue, queue empty, can't dequeue.");
      v8 = this->m_sendQueue.m_list.m_head;
      if ( v8 )
      {
        this->m_sendQueue.m_list.m_head = v8->m_next;
        m_prev = v8->m_prev;
        if ( v8 == this->m_sendQueue.m_list.m_tail )
          this->m_sendQueue.m_list.m_tail = m_prev;
        else
          v8->m_next->m_prev = m_prev;
        if ( v8->m_data.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v8->m_data.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
          {
            if ( v8->m_data.m_ptr )
              ((void (__fastcall *)(bdDataChunk *, __int64))v8->m_data.m_ptr->~bdReferencable)(v8->m_data.m_ptr, 1i64);
            v8->m_data.m_ptr = NULL;
          }
          v5 = v11;
        }
        bdMemory::deallocate(v8);
        --this->m_sendQueue.m_list.m_size;
      }
    }
  }
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_refCount, 0xFFFFFFFF) == 1 )
      ((void (__fastcall *)(bdDataChunk *, __int64))v11->~bdReferencable)(v11, 1i64);
  }
}

/*
==============
bdUnreliableSendWindow::reset
==============
*/
void bdUnreliableSendWindow::reset(bdUnreliableSendWindow *this)
{
  bool v2; 
  bdLinkedList<bdReference<bdDataChunk> >::Node *m_head; 
  bdLinkedList<bdReference<bdDataChunk> >::Node *m_prev; 
  __int64 v5; 

  v5 = -2i64;
  this->m_seqNumber = 0;
  if ( this->m_sendQueue.m_list.m_size )
  {
    v2 = this->m_sendQueue.m_list.m_size == 0;
    do
    {
      bdHandleAssert(!v2, "getSize() > 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdqueue.inl", "bdQueue<class bdReference<class bdDataChunk> >::dequeue", 0x12u, "bdQueue::dequeue, queue empty, can't dequeue.", v5);
      m_head = this->m_sendQueue.m_list.m_head;
      if ( m_head )
      {
        this->m_sendQueue.m_list.m_head = m_head->m_next;
        m_prev = m_head->m_prev;
        if ( m_head == this->m_sendQueue.m_list.m_tail )
          this->m_sendQueue.m_list.m_tail = m_prev;
        else
          m_head->m_next->m_prev = m_prev;
        if ( m_head->m_data.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_head->m_data.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
        {
          if ( m_head->m_data.m_ptr )
            ((void (__fastcall *)(bdDataChunk *, __int64))m_head->m_data.m_ptr->~bdReferencable)(m_head->m_data.m_ptr, 1i64);
          m_head->m_data.m_ptr = NULL;
        }
        bdMemory::deallocate(m_head);
        --this->m_sendQueue.m_list.m_size;
      }
      v2 = this->m_sendQueue.m_list.m_size == 0;
    }
    while ( this->m_sendQueue.m_list.m_size );
  }
}

