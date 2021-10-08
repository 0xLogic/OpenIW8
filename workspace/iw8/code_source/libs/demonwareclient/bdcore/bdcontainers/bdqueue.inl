/*
==============
bdQueue<bdUnicastConnection::bdControlChunkStore>::dequeue
==============
*/

void __fastcall bdQueue<bdUnicastConnection::bdControlChunkStore>::dequeue(bdQueue<bdUnicastConnection::bdControlChunkStore> *this)
{
  ?dequeue@?$bdQueue@VbdControlChunkStore@bdUnicastConnection@@@@QEAAXXZ(this);
}

/*
==============
bdQueue<bdPendingBufferTransfer>::enqueue
==============
*/

void __fastcall bdQueue<bdPendingBufferTransfer>::enqueue(bdQueue<bdPendingBufferTransfer> *this, const bdPendingBufferTransfer *item)
{
  ?enqueue@?$bdQueue@VbdPendingBufferTransfer@@@@QEAAXAEBVbdPendingBufferTransfer@@@Z(this, item);
}

/*
==============
bdQueue<bdUnicastConnection::bdControlChunkStore>::enqueue
==============
*/

void __fastcall bdQueue<bdUnicastConnection::bdControlChunkStore>::enqueue(bdQueue<bdUnicastConnection::bdControlChunkStore> *this, const bdUnicastConnection::bdControlChunkStore *item)
{
  ?enqueue@?$bdQueue@VbdControlChunkStore@bdUnicastConnection@@@@QEAAXAEBVbdControlChunkStore@bdUnicastConnection@@@Z(this, item);
}

/*
==============
bdQueue<bdPendingBufferTransfer>::enqueue
==============
*/
void bdQueue<bdPendingBufferTransfer>::enqueue(bdQueue<bdPendingBufferTransfer> *this, const bdPendingBufferTransfer *item)
{
  bdLinkedList<bdPendingBufferTransfer>::Node *m_tail; 
  bdLinkedList<bdPendingBufferTransfer>::Node *v5; 
  bdLinkedList<bdPendingBufferTransfer>::Node *v6; 
  bdByteBuffer *m_ptr; 
  bdLinkedList<bdPendingBufferTransfer>::Node *m_next; 
  bdLinkedList<bdPendingBufferTransfer>::Node *v9; 

  m_tail = this->m_list.m_tail;
  v5 = (bdLinkedList<bdPendingBufferTransfer>::Node *)bdMemory::allocate(0x38ui64);
  v6 = v5;
  if ( v5 )
  {
    v5->m_data.m_refCount.m_value._My_val = 0;
    v5->m_data.__vftable = (bdPendingBufferTransfer_vtbl *)&bdPendingBufferTransfer::`vftable';
    m_ptr = item->m_buffer.m_ptr;
    v5->m_data.m_buffer.m_ptr = m_ptr;
    if ( m_ptr )
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    v5->m_data.m_txPtr = item->m_txPtr;
    v5->m_data.m_txAvail = item->m_txAvail;
    v5->m_data.m_isThrottled = item->m_isThrottled;
  }
  else
  {
    v6 = NULL;
  }
  if ( m_tail )
  {
    v6->m_next = m_tail->m_next;
    v6->m_prev = m_tail;
    m_next = m_tail->m_next;
    if ( m_next )
    {
      m_next->m_prev = v6;
    }
    else
    {
      bdHandleAssert(m_tail == this->m_list.m_tail, "node == m_tail", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdlinkedlist.inl", "bdLinkedList<class bdPendingBufferTransfer>::insertAfter", 0x176u, "bdLinkedList::insertAfter, node has no next entry, but is not the tail.");
      this->m_list.m_tail = v6;
    }
    m_tail->m_next = v6;
  }
  else
  {
    v6->m_next = NULL;
    v6->m_prev = this->m_list.m_tail;
    v9 = this->m_list.m_tail;
    if ( v9 )
      v9->m_next = v6;
    else
      this->m_list.m_head = v6;
    this->m_list.m_tail = v6;
  }
  ++this->m_list.m_size;
}

/*
==============
bdQueue<bdUnicastConnection::bdControlChunkStore>::dequeue
==============
*/
void bdQueue<bdUnicastConnection::bdControlChunkStore>::dequeue(bdQueue<bdUnicastConnection::bdControlChunkStore> *this)
{
  bdLinkedList<bdUnicastConnection::bdControlChunkStore>::Node *m_head; 
  bdLinkedList<bdUnicastConnection::bdControlChunkStore>::Node *m_prev; 

  bdHandleAssert(this->m_list.m_size != 0, "getSize() > 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdqueue.inl", "bdQueue<class bdUnicastConnection::bdControlChunkStore>::dequeue", 0x12u, "bdQueue::dequeue, queue empty, can't dequeue.", -2i64);
  m_head = this->m_list.m_head;
  if ( this->m_list.m_head )
  {
    this->m_list.m_head = m_head->m_next;
    m_prev = m_head->m_prev;
    if ( m_head == this->m_list.m_tail )
      this->m_list.m_tail = m_prev;
    else
      m_head->m_next->m_prev = m_prev;
    if ( m_head->m_data.m_chunk.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_head->m_data.m_chunk.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( m_head->m_data.m_chunk.m_ptr )
        ((void (__fastcall *)(bdChunk *, __int64))m_head->m_data.m_chunk.m_ptr->~bdReferencable)(m_head->m_data.m_chunk.m_ptr, 1i64);
      m_head->m_data.m_chunk.m_ptr = NULL;
    }
    bdMemory::deallocate(m_head);
    --this->m_list.m_size;
  }
}

/*
==============
bdQueue<bdUnicastConnection::bdControlChunkStore>::enqueue
==============
*/
void bdQueue<bdUnicastConnection::bdControlChunkStore>::enqueue(bdQueue<bdUnicastConnection::bdControlChunkStore> *this, const bdUnicastConnection::bdControlChunkStore *item)
{
  bdLinkedList<bdUnicastConnection::bdControlChunkStore>::Node *m_tail; 
  bdLinkedList<bdUnicastConnection::bdControlChunkStore>::Node *v5; 
  bdChunk *m_ptr; 
  bdLinkedList<bdUnicastConnection::bdControlChunkStore>::Node *m_next; 
  bdLinkedList<bdUnicastConnection::bdControlChunkStore>::Node *v8; 

  m_tail = this->m_list.m_tail;
  v5 = (bdLinkedList<bdUnicastConnection::bdControlChunkStore>::Node *)bdMemory::allocate(0x20ui64);
  if ( v5 )
  {
    m_ptr = item->m_chunk.m_ptr;
    v5->m_data.m_chunk.m_ptr = item->m_chunk.m_ptr;
    if ( m_ptr )
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    v5->m_data.m_lone = item->m_lone;
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
      bdHandleAssert(m_tail == this->m_list.m_tail, "node == m_tail", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdlinkedlist.inl", "bdLinkedList<class bdUnicastConnection::bdControlChunkStore>::insertAfter", 0x176u, "bdLinkedList::insertAfter, node has no next entry, but is not the tail.");
      this->m_list.m_tail = v5;
    }
    m_tail->m_next = v5;
  }
  else
  {
    v5->m_next = NULL;
    v5->m_prev = this->m_list.m_tail;
    v8 = this->m_list.m_tail;
    if ( v8 )
      v8->m_next = v5;
    else
      this->m_list.m_head = v5;
    this->m_list.m_tail = v5;
  }
  ++this->m_list.m_size;
}

