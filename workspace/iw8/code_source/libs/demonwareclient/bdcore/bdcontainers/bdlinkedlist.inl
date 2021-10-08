/*
==============
bdLinkedList<bdLobbyConnectionMigrationHeldBackTask>::~bdLinkedList<bdLobbyConnectionMigrationHeldBackTask>
==============
*/

void __fastcall bdLinkedList<bdLobbyConnectionMigrationHeldBackTask>::~bdLinkedList<bdLobbyConnectionMigrationHeldBackTask>(bdLinkedList<bdLobbyConnectionMigrationHeldBackTask> *this)
{
  ??1?$bdLinkedList@VbdLobbyConnectionMigrationHeldBackTask@@@@QEAA@XZ(this);
}

/*
==============
bdLinkedList<bdDataChannelBase::bdDataChannelPacket>::insertAfter
==============
*/

void __fastcall bdLinkedList<bdDataChannelBase::bdDataChannelPacket>::insertAfter(bdLinkedList<bdDataChannelBase::bdDataChannelPacket> *this, void *const position, const bdDataChannelBase::bdDataChannelPacket *value)
{
  ?insertAfter@?$bdLinkedList@VbdDataChannelPacket@bdDataChannelBase@@@@QEAAXQEAXAEBVbdDataChannelPacket@bdDataChannelBase@@@Z(this, position, value);
}

/*
==============
bdLinkedList<bdUnicastConnection::bdControlChunkStore>::~bdLinkedList<bdUnicastConnection::bdControlChunkStore>
==============
*/

void __fastcall bdLinkedList<bdUnicastConnection::bdControlChunkStore>::~bdLinkedList<bdUnicastConnection::bdControlChunkStore>(bdLinkedList<bdUnicastConnection::bdControlChunkStore> *this)
{
  ??1?$bdLinkedList@VbdControlChunkStore@bdUnicastConnection@@@@QEAA@XZ(this);
}

/*
==============
bdLinkedList<bdPendingBufferTransfer>::~bdLinkedList<bdPendingBufferTransfer>
==============
*/

void __fastcall bdLinkedList<bdPendingBufferTransfer>::~bdLinkedList<bdPendingBufferTransfer>(bdLinkedList<bdPendingBufferTransfer> *this)
{
  ??1?$bdLinkedList@VbdPendingBufferTransfer@@@@QEAA@XZ(this);
}

/*
==============
bdLinkedList<bdSAckChunk::bdGapAckBlock>::addTail
==============
*/

void __fastcall bdLinkedList<bdSAckChunk::bdGapAckBlock>::addTail(bdLinkedList<bdSAckChunk::bdGapAckBlock> *this, const bdSAckChunk::bdGapAckBlock *value)
{
  ?addTail@?$bdLinkedList@VbdGapAckBlock@bdSAckChunk@@@@QEAAXAEBVbdGapAckBlock@bdSAckChunk@@@Z(this, value);
}

/*
==============
bdLinkedList<bdDataChannelBase::bdDataChannelPacket>::insertAfter
==============
*/
void bdLinkedList<bdDataChannelBase::bdDataChannelPacket>::insertAfter(bdLinkedList<bdDataChannelBase::bdDataChannelPacket> *this, void *const position, const bdDataChannelBase::bdDataChannelPacket *value)
{
  _QWORD *v6; 
  _QWORD *v7; 
  bdDataChannelTask *m_ptr; 
  _QWORD *v9; 
  unsigned int DataSize; 
  size_t v11; 
  unsigned __int8 *m_data; 
  void *v13; 
  __int64 v14; 
  bdLinkedList<bdDataChannelBase::bdDataChannelPacket>::Node *m_tail; 

  v6 = bdMemory::allocate(0x68ui64);
  v7 = v6;
  if ( v6 )
  {
    *v6 = &bdDataChannelBase::bdDataChannelPacket::`vftable';
    m_ptr = value->m_task.m_ptr;
    v6[1] = m_ptr;
    if ( m_ptr )
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    v9 = v6 + 2;
    DataSize = bdByteBuffer::getDataSize(&value->m_data);
    v11 = DataSize;
    m_data = value->m_data.m_data;
    *((_DWORD *)v7 + 6) = 0;
    v7[2] = &bdByteBuffer::`vftable';
    *((_DWORD *)v7 + 8) = DataSize;
    v7[5] = 0i64;
    *((_WORD *)v7 + 32) = 0;
    *((_BYTE *)v7 + 66) = 0;
    if ( m_data )
    {
      bdHandleAssert(1, "m_data == BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.inl", "bdByteBuffer::init", 0x31u, "Buffer already allocated. init() called twice?", -2i64);
      *((_DWORD *)v7 + 8) = v11;
      if ( (_DWORD)v11 )
        (*(void (__fastcall **)(_QWORD *))(*v9 + 8i64))(v7 + 2);
      v13 = (void *)v7[5];
      v7[7] = v13;
      v7[6] = v13;
      memcpy_0(v13, m_data, v11);
    }
    else
    {
      bdHandleAssert(0, "bytesToCopy != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.inl", "bdByteBuffer::init", 0x41u, "Buffer bytestToCopy should not be null", -2i64);
    }
    *((_WORD *)v7 + 36) = value->m_retries;
    v7[10] = value->m_nextRetryTime;
  }
  else
  {
    v7 = NULL;
  }
  if ( position )
  {
    v7[11] = *((_QWORD *)position + 11);
    v7[12] = position;
    v14 = *((_QWORD *)position + 11);
    if ( v14 )
    {
      *(_QWORD *)(v14 + 96) = v7;
    }
    else
    {
      bdHandleAssert(position == this->m_tail, "node == m_tail", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdlinkedlist.inl", "bdLinkedList<class bdDataChannelBase::bdDataChannelPacket>::insertAfter", 0x176u, "bdLinkedList::insertAfter, node has no next entry, but is not the tail.");
      this->m_tail = (bdLinkedList<bdDataChannelBase::bdDataChannelPacket>::Node *)v7;
    }
    *((_QWORD *)position + 11) = v7;
  }
  else
  {
    v7[11] = 0i64;
    v7[12] = this->m_tail;
    m_tail = this->m_tail;
    if ( m_tail )
      m_tail->m_next = (bdLinkedList<bdDataChannelBase::bdDataChannelPacket>::Node *)v7;
    else
      this->m_head = (bdLinkedList<bdDataChannelBase::bdDataChannelPacket>::Node *)v7;
    this->m_tail = (bdLinkedList<bdDataChannelBase::bdDataChannelPacket>::Node *)v7;
  }
  ++this->m_size;
}

/*
==============
bdLinkedList<bdLobbyConnectionMigrationHeldBackTask>::~bdLinkedList<bdLobbyConnectionMigrationHeldBackTask>
==============
*/
void bdLinkedList<bdLobbyConnectionMigrationHeldBackTask>::~bdLinkedList<bdLobbyConnectionMigrationHeldBackTask>(bdLinkedList<bdLobbyConnectionMigrationHeldBackTask> *this)
{
  bdLinkedList<bdLobbyConnectionMigrationHeldBackTask>::Node *m_head; 
  bdLinkedList<bdLobbyConnectionMigrationHeldBackTask>::Node *m_next; 

  m_head = this->m_head;
  if ( this->m_head )
  {
    do
    {
      m_next = m_head->m_next;
      if ( m_head->m_data.m_task.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_head->m_data.m_task.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
      {
        if ( m_head->m_data.m_task.m_ptr )
          ((void (__fastcall *)(bdTaskByteBuffer *, __int64))m_head->m_data.m_task.m_ptr->~bdReferencable)(m_head->m_data.m_task.m_ptr, 1i64);
        m_head->m_data.m_task.m_ptr = NULL;
      }
      bdMemory::deallocate(m_head);
      this->m_head = m_next;
      m_head = m_next;
    }
    while ( m_next );
    this->m_tail = NULL;
    this->m_size = 0;
  }
  else
  {
    this->m_tail = NULL;
    this->m_size = 0;
  }
}

/*
==============
bdLinkedList<bdPendingBufferTransfer>::~bdLinkedList<bdPendingBufferTransfer>
==============
*/
void bdLinkedList<bdPendingBufferTransfer>::~bdLinkedList<bdPendingBufferTransfer>(bdLinkedList<bdPendingBufferTransfer> *this)
{
  bdLinkedList<bdPendingBufferTransfer>::Node *m_head; 
  bdLinkedList<bdPendingBufferTransfer>::Node *m_next; 
  bdByteBuffer *m_ptr; 
  bdByteBuffer *v5; 

  m_head = this->m_head;
  if ( this->m_head )
  {
    do
    {
      m_next = m_head->m_next;
      m_head->m_data.__vftable = (bdPendingBufferTransfer_vtbl *)&bdPendingBufferTransfer::`vftable';
      m_ptr = m_head->m_data.m_buffer.m_ptr;
      if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
      {
        v5 = m_head->m_data.m_buffer.m_ptr;
        if ( v5 )
          ((void (__fastcall *)(bdByteBuffer *, __int64))v5->~bdReferencable)(v5, 1i64);
        m_head->m_data.m_buffer.m_ptr = NULL;
      }
      bdReferencable::~bdReferencable(&m_head->m_data);
      bdMemory::deallocate(m_head);
      this->m_head = m_next;
      m_head = m_next;
    }
    while ( m_next );
    this->m_tail = NULL;
    this->m_size = 0;
  }
  else
  {
    this->m_tail = NULL;
    this->m_size = 0;
  }
}

/*
==============
bdLinkedList<bdUnicastConnection::bdControlChunkStore>::~bdLinkedList<bdUnicastConnection::bdControlChunkStore>
==============
*/
void bdLinkedList<bdUnicastConnection::bdControlChunkStore>::~bdLinkedList<bdUnicastConnection::bdControlChunkStore>(bdLinkedList<bdUnicastConnection::bdControlChunkStore> *this)
{
  bdLinkedList<bdUnicastConnection::bdControlChunkStore>::Node *m_head; 
  bdLinkedList<bdUnicastConnection::bdControlChunkStore>::Node *m_next; 

  m_head = this->m_head;
  if ( this->m_head )
  {
    do
    {
      m_next = m_head->m_next;
      if ( m_head->m_data.m_chunk.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_head->m_data.m_chunk.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
      {
        if ( m_head->m_data.m_chunk.m_ptr )
          ((void (__fastcall *)(bdChunk *, __int64))m_head->m_data.m_chunk.m_ptr->~bdReferencable)(m_head->m_data.m_chunk.m_ptr, 1i64);
        m_head->m_data.m_chunk.m_ptr = NULL;
      }
      bdMemory::deallocate(m_head);
      this->m_head = m_next;
      m_head = m_next;
    }
    while ( m_next );
    this->m_tail = NULL;
    this->m_size = 0;
  }
  else
  {
    this->m_tail = NULL;
    this->m_size = 0;
  }
}

/*
==============
bdLinkedList<bdSAckChunk::bdGapAckBlock>::addTail
==============
*/
void bdLinkedList<bdSAckChunk::bdGapAckBlock>::addTail(bdLinkedList<bdSAckChunk::bdGapAckBlock> *this, const bdSAckChunk::bdGapAckBlock *value)
{
  bdLinkedList<bdSAckChunk::bdGapAckBlock>::Node *m_tail; 
  bdSAckChunk::bdGapAckBlock *v5; 
  bdLinkedList<bdSAckChunk::bdGapAckBlock>::Node *v6; 
  bdLinkedList<bdSAckChunk::bdGapAckBlock>::Node *m_next; 
  bdLinkedList<bdSAckChunk::bdGapAckBlock>::Node *v8; 

  m_tail = this->m_tail;
  v5 = (bdSAckChunk::bdGapAckBlock *)bdMemory::allocate(0x18ui64);
  v6 = (bdLinkedList<bdSAckChunk::bdGapAckBlock>::Node *)v5;
  if ( v5 )
    *v5 = *value;
  else
    v6 = NULL;
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
      bdHandleAssert(m_tail == this->m_tail, "node == m_tail", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdlinkedlist.inl", "bdLinkedList<class bdSAckChunk::bdGapAckBlock>::insertAfter", 0x176u, "bdLinkedList::insertAfter, node has no next entry, but is not the tail.");
      this->m_tail = v6;
    }
    m_tail->m_next = v6;
  }
  else
  {
    v6->m_next = NULL;
    v6->m_prev = this->m_tail;
    v8 = this->m_tail;
    if ( v8 )
      v8->m_next = v6;
    else
      this->m_head = v6;
    this->m_tail = v6;
  }
  ++this->m_size;
}

