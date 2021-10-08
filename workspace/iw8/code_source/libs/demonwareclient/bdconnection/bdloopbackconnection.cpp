/*
==============
bdLoopbackConnection::updateStatus
==============
*/

void __fastcall bdLoopbackConnection::updateStatus(bdLoopbackConnection *this)
{
  ?updateStatus@bdLoopbackConnection@@IEAAXXZ(this);
}

/*
==============
bdLoopbackConnection::getMessageToDispatch
==============
*/

bool __fastcall bdLoopbackConnection::getMessageToDispatch(bdLoopbackConnection *this, bdReference<bdMessage> *message)
{
  return ?getMessageToDispatch@bdLoopbackConnection@@UEAA_NAEAV?$bdReference@VbdMessage@@@@@Z(this, message);
}

/*
==============
bdLoopbackConnection::send
==============
*/

bool __fastcall bdLoopbackConnection::send(bdLoopbackConnection *this, const bdReference<bdMessage> message, const bool __formal)
{
  return ?send@bdLoopbackConnection@@UEAA_NV?$bdReference@VbdMessage@@@@_N@Z(this, message, __formal);
}

/*
==============
bdLoopbackConnection::~bdLoopbackConnection
==============
*/

void __fastcall bdLoopbackConnection::~bdLoopbackConnection(bdLoopbackConnection *this)
{
  ??1bdLoopbackConnection@@UEAA@XZ(this);
}

/*
==============
bdLoopbackConnection::receive
==============
*/

bool __fastcall bdLoopbackConnection::receive(bdLoopbackConnection *this, const unsigned __int8 *__formal, const unsigned int a3)
{
  return ?receive@bdLoopbackConnection@@UEAA_NPEBEI@Z(this, __formal, a3);
}

/*
==============
bdLoopbackConnection::getDataToSend
==============
*/

unsigned int __fastcall bdLoopbackConnection::getDataToSend(bdLoopbackConnection *this, unsigned __int8 *const __formal, const unsigned int a3)
{
  return ?getDataToSend@bdLoopbackConnection@@MEAAIQEAEI@Z(this, __formal, a3);
}

/*
==============
bdLoopbackConnection::bdLoopbackConnection
==============
*/

void __fastcall bdLoopbackConnection::bdLoopbackConnection(bdLoopbackConnection *this, bdReference<bdCommonAddr> addr)
{
  ??0bdLoopbackConnection@@IEAA@V?$bdReference@VbdCommonAddr@@@@@Z(this, addr);
}

/*
==============
bdLoopbackConnection::getOutOfOrderMessageToDispatch
==============
*/

bool __fastcall bdLoopbackConnection::getOutOfOrderMessageToDispatch(bdLoopbackConnection *this, bdReference<bdMessage> *__formal)
{
  return ?getOutOfOrderMessageToDispatch@bdLoopbackConnection@@UEAA_NAEAV?$bdReference@VbdMessage@@@@@Z(this, __formal);
}

/*
==============
bdLoopbackConnection::bdLoopbackConnection
==============
*/
void bdLoopbackConnection::bdLoopbackConnection(bdLoopbackConnection *this, bdReference<bdCommonAddr> addr)
{
  bdCommonAddr *v4; 
  bdReference<bdCommonAddr> addra; 
  bdCommonAddr *m_ptr; 

  m_ptr = addr.m_ptr;
  addra.m_ptr = (bdCommonAddr *)this;
  v4 = (bdCommonAddr *)addr.m_ptr->__vftable;
  addra.m_ptr = v4;
  if ( v4 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 1u);
  bdConnection::bdConnection(this, (bdReference<bdCommonAddr>)&addra);
  this->__vftable = (bdLoopbackConnection_vtbl *)&bdLoopbackConnection::`vftable';
  this->m_messages.m_list.m_head = NULL;
  this->m_messages.m_list.m_tail = NULL;
  this->m_messages.m_list.m_size = 0;
  if ( addr.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&addr.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( addr.m_ptr->__vftable )
      (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))addr.m_ptr->~bdReferencable)(addr.m_ptr->__vftable, 1i64);
    addr.m_ptr->__vftable = NULL;
  }
}

/*
==============
bdLoopbackConnection::~bdLoopbackConnection
==============
*/
void bdLoopbackConnection::~bdLoopbackConnection(bdLoopbackConnection *this)
{
  this->__vftable = (bdLoopbackConnection_vtbl *)&bdLoopbackConnection::`vftable';
  bdLinkedList<bdReference<bdMessage>>::~bdLinkedList<bdReference<bdMessage>>(&this->m_messages.m_list);
  bdConnection::~bdConnection(this);
}

/*
==============
bdLoopbackConnection::getDataToSend
==============
*/
__int64 bdLoopbackConnection::getDataToSend(bdLoopbackConnection *this, unsigned __int8 *const __formal, const unsigned int a3)
{
  return 0i64;
}

/*
==============
bdLoopbackConnection::getMessageToDispatch
==============
*/
char bdLoopbackConnection::getMessageToDispatch(bdLoopbackConnection *this, bdReference<bdMessage> *message)
{
  bdLinkedList<bdReference<bdMessage> >::Node *m_head; 
  bdMessage *m_ptr; 
  bdLinkedList<bdReference<bdMessage> >::Node *v6; 
  bdLinkedList<bdReference<bdMessage> >::Node *m_prev; 

  if ( !this->m_messages.m_list.m_size )
    return 0;
  bdHandleAssert(this->m_messages.m_list.m_size != 0, "getSize() > 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdqueue.inl", "bdQueue<class bdReference<class bdMessage> >::peek", 0x19u, "bdQueue::dequeue, queue empty, can't peek.", -2i64);
  bdHandleAssert(this->m_messages.m_list.m_head != NULL, "m_head != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdlinkedlist.inl", "bdLinkedList<class bdReference<class bdMessage> >::getHead", 0x42u, "bdLinkedList::GetHead, list is empty so has no head.");
  m_head = this->m_messages.m_list.m_head;
  if ( m_head != (bdLinkedList<bdReference<bdMessage> >::Node *)message )
  {
    if ( message->m_ptr && !_InterlockedDecrement((volatile signed __int32 *)&message->m_ptr->m_refCount) && message->m_ptr )
      ((void (__fastcall *)(bdMessage *, __int64))message->m_ptr->~bdReferencable)(message->m_ptr, 1i64);
    m_ptr = m_head->m_data.m_ptr;
    message->m_ptr = (bdMessage *)m_head->m_data;
    if ( m_ptr )
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  }
  bdHandleAssert(this->m_messages.m_list.m_size != 0, "getSize() > 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdqueue.inl", "bdQueue<class bdReference<class bdMessage> >::dequeue", 0x12u, "bdQueue::dequeue, queue empty, can't dequeue.");
  v6 = this->m_messages.m_list.m_head;
  if ( v6 )
  {
    this->m_messages.m_list.m_head = v6->m_next;
    m_prev = v6->m_prev;
    if ( v6 == this->m_messages.m_list.m_tail )
      this->m_messages.m_list.m_tail = m_prev;
    else
      v6->m_next->m_prev = m_prev;
    if ( v6->m_data.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v6->m_data.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( v6->m_data.m_ptr )
        ((void (__fastcall *)(bdMessage *, __int64))v6->m_data.m_ptr->~bdReferencable)(v6->m_data.m_ptr, 1i64);
      v6->m_data.m_ptr = NULL;
    }
    bdMemory::deallocate(v6);
    --this->m_messages.m_list.m_size;
  }
  return 1;
}

/*
==============
bdLoopbackConnection::getOutOfOrderMessageToDispatch
==============
*/
bool bdLoopbackConnection::getOutOfOrderMessageToDispatch(bdLoopbackConnection *this, bdReference<bdMessage> *__formal)
{
  return 0;
}

/*
==============
bdLoopbackConnection::receive
==============
*/
char bdLoopbackConnection::receive(bdLoopbackConnection *this, const unsigned __int8 *__formal, const unsigned int a3)
{
  return 1;
}

/*
==============
bdLoopbackConnection::send
==============
*/
char bdLoopbackConnection::send(bdLoopbackConnection *this, const bdReference<bdMessage> message, const bool __formal)
{
  bdBitBuffer *v5; 
  bdLinkedList<bdReference<bdMessage> >::Node *m_tail; 
  bdLinkedList<bdReference<bdMessage> >::Node *v7; 
  bdMessage_vtbl *v8; 
  bdLinkedList<bdReference<bdMessage> >::Node *m_next; 
  bdLinkedList<bdReference<bdMessage> >::Node *v10; 
  bdLinkedList<bdReference<bdMessage> >::Node *v12; 
  bdReference<bdBitBuffer> result; 
  bdMessage *m_ptr; 
  bdReference<bdBitBuffer> v15; 

  m_ptr = message.m_ptr;
  v5 = bdMessage::getPayload((bdMessage *)message.m_ptr->__vftable, &result)->m_ptr;
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdBitBuffer *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  if ( v5 )
  {
    bdMessage::getPayload((bdMessage *)message.m_ptr->__vftable, &v15)->m_ptr->m_readPosition = 1;
    if ( v15.m_ptr )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v15.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v15.m_ptr )
        ((void (__fastcall *)(bdBitBuffer *, __int64))v15.m_ptr->~bdReferencable)(v15.m_ptr, 1i64);
    }
  }
  m_tail = this->m_messages.m_list.m_tail;
  v7 = (bdLinkedList<bdReference<bdMessage> >::Node *)bdMemory::allocate(0x18ui64);
  v12 = v7;
  if ( v7 )
  {
    v8 = message.m_ptr->__vftable;
    v7->m_data.m_ptr = (bdMessage *)message.m_ptr->__vftable;
    if ( v8 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v8[1], 1u);
  }
  else
  {
    v7 = NULL;
  }
  if ( m_tail )
  {
    v7->m_next = m_tail->m_next;
    v7->m_prev = m_tail;
    m_next = m_tail->m_next;
    if ( m_next )
    {
      m_next->m_prev = v7;
    }
    else
    {
      bdHandleAssert(m_tail == this->m_messages.m_list.m_tail, "node == m_tail", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdlinkedlist.inl", "bdLinkedList<class bdReference<class bdMessage> >::insertAfter", 0x176u, "bdLinkedList::insertAfter, node has no next entry, but is not the tail.", -2i64, v12);
      this->m_messages.m_list.m_tail = v7;
    }
    m_tail->m_next = v7;
  }
  else
  {
    v7->m_next = NULL;
    v7->m_prev = this->m_messages.m_list.m_tail;
    v10 = this->m_messages.m_list.m_tail;
    if ( v10 )
      v10->m_next = v7;
    else
      this->m_messages.m_list.m_head = v7;
    this->m_messages.m_list.m_tail = v7;
  }
  ++this->m_messages.m_list.m_size;
  if ( message.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&message.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( message.m_ptr->__vftable )
      (*(void (__fastcall **)(bdMessage_vtbl *, __int64))message.m_ptr->~bdReferencable)(message.m_ptr->__vftable, 1i64);
    message.m_ptr->__vftable = NULL;
  }
  return 1;
}

/*
==============
bdLoopbackConnection::updateStatus
==============
*/
void bdLoopbackConnection::updateStatus(bdLoopbackConnection *this)
{
  __int32 v2; 
  __int64 v3; 
  bool v4; 
  bdConnectionListener *v5; 
  bdConnectionListener_vtbl *v6; 
  void (__fastcall *onDisconnect)(bdConnectionListener *, bdReference<bdConnection>); 
  __int64 v8; 
  bool v9; 
  bdConnectionListener *v10; 
  bdConnectionListener_vtbl *v11; 
  void (__fastcall *onConnect)(bdConnectionListener *, bdReference<bdConnection>); 
  bdLoopbackConnection *v13; 
  bdLoopbackConnection *v14; 

  v2 = this->m_status - 1;
  if ( v2 )
  {
    if ( v2 == 2 )
    {
      v3 = 0i64;
      if ( this->m_listeners.m_size )
      {
        v4 = this->m_listeners.m_size != 0;
        do
        {
          bdHandleAssert(v4, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<class bdConnectionListener *>::operator []", 0x50u, "bdFastArray<T>::operator[], rangecheck failed");
          v5 = this->m_listeners.m_data[v3];
          v6 = v5->__vftable;
          v13 = this;
          onDisconnect = v6->onDisconnect;
          _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_refCount, 1u);
          ((void (__fastcall *)(bdConnectionListener *, bdLoopbackConnection **))onDisconnect)(v5, &v13);
          v3 = (unsigned int)(v3 + 1);
          v4 = (unsigned int)v3 < this->m_listeners.m_size;
        }
        while ( (unsigned int)v3 < this->m_listeners.m_size );
      }
      this->m_status = BD_HANDLE_TASK_FAILED;
    }
  }
  else
  {
    v8 = 0i64;
    if ( this->m_listeners.m_size )
    {
      v9 = this->m_listeners.m_size != 0;
      do
      {
        bdHandleAssert(v9, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<class bdConnectionListener *>::operator []", 0x50u, "bdFastArray<T>::operator[], rangecheck failed");
        v10 = this->m_listeners.m_data[v8];
        v11 = v10->__vftable;
        v14 = this;
        onConnect = v11->onConnect;
        _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_refCount, 1u);
        ((void (__fastcall *)(bdConnectionListener *, bdLoopbackConnection **))onConnect)(v10, &v14);
        v8 = (unsigned int)(v8 + 1);
        v9 = (unsigned int)v8 < this->m_listeners.m_size;
      }
      while ( (unsigned int)v8 < this->m_listeners.m_size );
    }
    this->m_status = BD_NOT_CONNECTED;
  }
}

