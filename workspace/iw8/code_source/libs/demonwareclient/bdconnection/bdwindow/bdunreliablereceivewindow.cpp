/*
==============
bdUnreliableReceiveWindow::add
==============
*/

bool __fastcall bdUnreliableReceiveWindow::add(bdUnreliableReceiveWindow *this, bdReference<bdDataChunk> chunk, bool acceptOutOfOrder)
{
  return ?add@bdUnreliableReceiveWindow@@QEAA_NV?$bdReference@VbdDataChunk@@@@_N@Z(this, chunk, acceptOutOfOrder);
}

/*
==============
bdUnreliableReceiveWindow::bdUnreliableReceiveWindow
==============
*/

void __fastcall bdUnreliableReceiveWindow::bdUnreliableReceiveWindow(bdUnreliableReceiveWindow *this)
{
  ??0bdUnreliableReceiveWindow@@QEAA@XZ(this);
}

/*
==============
bdUnreliableReceiveWindow::~bdUnreliableReceiveWindow
==============
*/

void __fastcall bdUnreliableReceiveWindow::~bdUnreliableReceiveWindow(bdUnreliableReceiveWindow *this)
{
  ??1bdUnreliableReceiveWindow@@UEAA@XZ(this);
}

/*
==============
bdUnreliableReceiveWindow::getNextToRead
==============
*/

bdReference<bdDataChunk> *__fastcall bdUnreliableReceiveWindow::getNextToRead(bdUnreliableReceiveWindow *this, bdReference<bdDataChunk> *result)
{
  return ?getNextToRead@bdUnreliableReceiveWindow@@QEAA?AV?$bdReference@VbdDataChunk@@@@XZ(this, result);
}

/*
==============
bdUnreliableReceiveWindow::getNextOutOfOrderToRead
==============
*/

bdReference<bdDataChunk> *__fastcall bdUnreliableReceiveWindow::getNextOutOfOrderToRead(bdUnreliableReceiveWindow *this, bdReference<bdDataChunk> *result)
{
  return ?getNextOutOfOrderToRead@bdUnreliableReceiveWindow@@QEAA?AV?$bdReference@VbdDataChunk@@@@XZ(this, result);
}

/*
==============
bdUnreliableReceiveWindow::reset
==============
*/

void __fastcall bdUnreliableReceiveWindow::reset(bdUnreliableReceiveWindow *this)
{
  ?reset@bdUnreliableReceiveWindow@@QEAAXXZ(this);
}

/*
==============
bdUnreliableReceiveWindow::bdUnreliableReceiveWindow
==============
*/
void bdUnreliableReceiveWindow::bdUnreliableReceiveWindow(bdUnreliableReceiveWindow *this)
{
  this->__vftable = (bdUnreliableReceiveWindow_vtbl *)&bdUnreliableReceiveWindow::`vftable';
  bdSequenceNumber::bdSequenceNumber(&this->m_seqNumber, -1);
  this->m_recvQueue.m_list.m_head = NULL;
  this->m_recvQueue.m_list.m_tail = NULL;
  this->m_recvQueue.m_list.m_size = 0;
  this->m_recvOutOfOrderQueue.m_list.m_head = NULL;
  this->m_recvOutOfOrderQueue.m_list.m_tail = NULL;
  this->m_recvOutOfOrderQueue.m_list.m_size = 0;
}

/*
==============
bdUnreliableReceiveWindow::~bdUnreliableReceiveWindow
==============
*/
void bdUnreliableReceiveWindow::~bdUnreliableReceiveWindow(bdUnreliableReceiveWindow *this)
{
  this->__vftable = (bdUnreliableReceiveWindow_vtbl *)&bdUnreliableReceiveWindow::`vftable';
  bdLinkedList<bdReference<bdDataChunk>>::~bdLinkedList<bdReference<bdDataChunk>>(&this->m_recvOutOfOrderQueue.m_list);
  bdLinkedList<bdReference<bdDataChunk>>::~bdLinkedList<bdReference<bdDataChunk>>(&this->m_recvQueue.m_list);
}

/*
==============
bdUnreliableReceiveWindow::add
==============
*/
char bdUnreliableReceiveWindow::add(bdUnreliableReceiveWindow *this, bdReference<bdDataChunk> chunk, bool acceptOutOfOrder)
{
  unsigned __int16 SequenceNumber; 
  bdSequenceNumber v8; 
  bdDataChunk *m_ptr; 

  m_ptr = chunk.m_ptr;
  SequenceNumber = bdDataChunk::getSequenceNumber((bdDataChunk *)chunk.m_ptr->__vftable);
  bdSequenceNumber::bdSequenceNumber(&v8, &this->m_seqNumber, SequenceNumber, 0x10u);
  if ( bdSequenceNumber::operator>(&v8, &this->m_seqNumber) )
  {
    bdQueue<bdReference<bdDataChunk>>::enqueue(&this->m_recvQueue, (const bdReference<bdDataChunk> *)chunk.m_ptr);
    this->m_seqNumber = v8;
  }
  else if ( acceptOutOfOrder )
  {
    bdQueue<bdReference<bdDataChunk>>::enqueue(&this->m_recvOutOfOrderQueue, (const bdReference<bdDataChunk> *)chunk.m_ptr);
  }
  if ( chunk.m_ptr->__vftable && !_InterlockedDecrement((volatile signed __int32 *)&chunk.m_ptr->getType) )
  {
    if ( chunk.m_ptr->__vftable )
      (*(void (__fastcall **)(bdDataChunk_vtbl *, __int64))chunk.m_ptr->~bdReferencable)(chunk.m_ptr->__vftable, 1i64);
    chunk.m_ptr->__vftable = NULL;
  }
  return 1;
}

/*
==============
bdUnreliableReceiveWindow::getNextOutOfOrderToRead
==============
*/
bdReference<bdDataChunk> *bdUnreliableReceiveWindow::getNextOutOfOrderToRead(bdUnreliableReceiveWindow *this, bdReference<bdDataChunk> *result)
{
  bdQueue<bdReference<bdDataChunk> > *p_m_recvOutOfOrderQueue; 
  const bdReference<bdDataChunk> *v4; 

  result->m_ptr = NULL;
  if ( this->m_recvOutOfOrderQueue.m_list.m_size )
  {
    p_m_recvOutOfOrderQueue = &this->m_recvOutOfOrderQueue;
    v4 = bdQueue<bdReference<bdDataChunk>>::peek(&this->m_recvOutOfOrderQueue);
    bdReference<bdDataChunk>::operator=(result, v4);
    bdQueue<bdReference<bdDataChunk>>::dequeue(p_m_recvOutOfOrderQueue);
  }
  return result;
}

/*
==============
bdUnreliableReceiveWindow::getNextToRead
==============
*/
bdReference<bdDataChunk> *bdUnreliableReceiveWindow::getNextToRead(bdUnreliableReceiveWindow *this, bdReference<bdDataChunk> *result)
{
  bdQueue<bdReference<bdDataChunk> > *p_m_recvQueue; 
  const bdReference<bdDataChunk> *v4; 

  result->m_ptr = NULL;
  if ( this->m_recvQueue.m_list.m_size )
  {
    p_m_recvQueue = &this->m_recvQueue;
    v4 = bdQueue<bdReference<bdDataChunk>>::peek(&this->m_recvQueue);
    bdReference<bdDataChunk>::operator=(result, v4);
    bdQueue<bdReference<bdDataChunk>>::dequeue(p_m_recvQueue);
  }
  return result;
}

/*
==============
bdUnreliableReceiveWindow::reset
==============
*/
void bdUnreliableReceiveWindow::reset(bdUnreliableReceiveWindow *this)
{
  bool v2; 
  bdLinkedList<bdReference<bdDataChunk> >::Node *m_head; 
  bdLinkedList<bdReference<bdDataChunk> >::Node *m_prev; 
  bool i; 
  bdLinkedList<bdReference<bdDataChunk> >::Node *v6; 
  bdLinkedList<bdReference<bdDataChunk> >::Node *v7; 
  __int64 v8; 
  bdSequenceNumber v9; 

  v8 = -2i64;
  bdSequenceNumber::bdSequenceNumber(&v9, -1);
  this->m_seqNumber = v9;
  if ( this->m_recvQueue.m_list.m_size )
  {
    v2 = this->m_recvQueue.m_list.m_size == 0;
    do
    {
      bdHandleAssert(!v2, "getSize() > 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdqueue.inl", "bdQueue<class bdReference<class bdDataChunk> >::dequeue", 0x12u, "bdQueue::dequeue, queue empty, can't dequeue.", v8);
      m_head = this->m_recvQueue.m_list.m_head;
      if ( m_head )
      {
        this->m_recvQueue.m_list.m_head = m_head->m_next;
        m_prev = m_head->m_prev;
        if ( m_head == this->m_recvQueue.m_list.m_tail )
          this->m_recvQueue.m_list.m_tail = m_prev;
        else
          m_head->m_next->m_prev = m_prev;
        if ( m_head->m_data.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_head->m_data.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
        {
          if ( m_head->m_data.m_ptr )
            ((void (__fastcall *)(bdDataChunk *, __int64))m_head->m_data.m_ptr->~bdReferencable)(m_head->m_data.m_ptr, 1i64);
          m_head->m_data.m_ptr = NULL;
        }
        bdMemory::deallocate(m_head);
        --this->m_recvQueue.m_list.m_size;
      }
      v2 = this->m_recvQueue.m_list.m_size == 0;
    }
    while ( this->m_recvQueue.m_list.m_size );
  }
  for ( i = this->m_recvOutOfOrderQueue.m_list.m_size == 0; this->m_recvOutOfOrderQueue.m_list.m_size; i = this->m_recvOutOfOrderQueue.m_list.m_size == 0 )
  {
    bdHandleAssert(!i, "getSize() > 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdqueue.inl", "bdQueue<class bdReference<class bdDataChunk> >::dequeue", 0x12u, "bdQueue::dequeue, queue empty, can't dequeue.");
    v6 = this->m_recvOutOfOrderQueue.m_list.m_head;
    if ( v6 )
    {
      this->m_recvOutOfOrderQueue.m_list.m_head = v6->m_next;
      v7 = v6->m_prev;
      if ( v6 == this->m_recvOutOfOrderQueue.m_list.m_tail )
        this->m_recvOutOfOrderQueue.m_list.m_tail = v7;
      else
        v6->m_next->m_prev = v7;
      if ( v6->m_data.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v6->m_data.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
      {
        if ( v6->m_data.m_ptr )
          ((void (__fastcall *)(bdDataChunk *, __int64))v6->m_data.m_ptr->~bdReferencable)(v6->m_data.m_ptr, 1i64);
        v6->m_data.m_ptr = NULL;
      }
      bdMemory::deallocate(v6);
      --this->m_recvOutOfOrderQueue.m_list.m_size;
    }
  }
}

