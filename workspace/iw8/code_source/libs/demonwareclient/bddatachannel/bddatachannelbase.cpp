/*
==============
bdDataChannelBase::setState
==============
*/

void __fastcall bdDataChannelBase::setState(bdDataChannelBase *this, bdDataChannelBase::bdDataChannelState state)
{
  ?setState@bdDataChannelBase@@QEAAXW4bdDataChannelState@1@@Z(this, state);
}

/*
==============
bdDataChannelBase::bdDataChannelBase
==============
*/

void __fastcall bdDataChannelBase::bdDataChannelBase(bdDataChannelBase *this, bdDataChannelManagerBase *manager)
{
  ??0bdDataChannelBase@@QEAA@PEAVbdDataChannelManagerBase@@@Z(this, manager);
}

/*
==============
bdDataChannelBase::rotateQueue
==============
*/

void __fastcall bdDataChannelBase::rotateQueue(bdDataChannelBase *this)
{
  ?rotateQueue@bdDataChannelBase@@QEAAXXZ(this);
}

/*
==============
bdDataChannelBase::setStatusContext
==============
*/

void __fastcall bdDataChannelBase::setStatusContext(bdDataChannelBase *this, const char *context)
{
  ?setStatusContext@bdDataChannelBase@@QEAAXPEBD@Z(this, context);
}

/*
==============
bdDataChannelBase::peekQueuedData
==============
*/

bdDataChannelBase::bdDataChannelPacket *__fastcall bdDataChannelBase::peekQueuedData(bdDataChannelBase *this)
{
  return ?peekQueuedData@bdDataChannelBase@@QEAAPEAVbdDataChannelPacket@1@XZ(this);
}

/*
==============
bdDataChannelBase::getState
==============
*/

bdDataChannelBase::bdDataChannelState __fastcall bdDataChannelBase::getState(bdDataChannelBase *this)
{
  return ?getState@bdDataChannelBase@@QEBA?AW4bdDataChannelState@1@XZ(this);
}

/*
==============
bdDataChannelBase::bdDataChannelPacket::getData
==============
*/

const unsigned __int8 *__fastcall bdDataChannelBase::bdDataChannelPacket::getData(bdDataChannelBase::bdDataChannelPacket *this)
{
  return ?getData@bdDataChannelPacket@bdDataChannelBase@@QEBAPEBEXZ(this);
}

/*
==============
bdDataChannelBase::peekQueuedData
==============
*/

bool __fastcall bdDataChannelBase::peekQueuedData(bdDataChannelBase *this, const unsigned __int8 **data, unsigned int *size)
{
  return ?peekQueuedData@bdDataChannelBase@@QEAA_NPEAPEBEAEAI@Z(this, data, size);
}

/*
==============
bdDataChannelBase::bdDataChannelPacket::getRetries
==============
*/

unsigned __int16 __fastcall bdDataChannelBase::bdDataChannelPacket::getRetries(bdDataChannelBase::bdDataChannelPacket *this)
{
  return ?getRetries@bdDataChannelPacket@bdDataChannelBase@@QEBAGXZ(this);
}

/*
==============
bdDataChannelBase::bdDataChannelPacket::setNextRetryTime
==============
*/

void __fastcall bdDataChannelBase::bdDataChannelPacket::setNextRetryTime(bdDataChannelBase::bdDataChannelPacket *this, unsigned __int64 nextRetryTime)
{
  ?setNextRetryTime@bdDataChannelPacket@bdDataChannelBase@@QEAAX_K@Z(this, nextRetryTime);
}

/*
==============
bdDataChannelBase::dequeData
==============
*/

bool __fastcall bdDataChannelBase::dequeData(bdDataChannelBase *this, bool flagAsSent)
{
  return ?dequeData@bdDataChannelBase@@QEAA_N_N@Z(this, flagAsSent);
}

/*
==============
bdDataChannelBase::pruneFailed
==============
*/

unsigned int __fastcall bdDataChannelBase::pruneFailed(bdDataChannelBase *this, bdQueue<bdDataChannelBase::bdDataChannelPacket> *result)
{
  return ?pruneFailed@bdDataChannelBase@@QEAAIPEAV?$bdQueue@VbdDataChannelPacket@bdDataChannelBase@@@@@Z(this, result);
}

/*
==============
bdDataChannelBase::bdDataChannelPacket::getTask
==============
*/

bdReference<bdDataChannelTask> *__fastcall bdDataChannelBase::bdDataChannelPacket::getTask(bdDataChannelBase::bdDataChannelPacket *this, bdReference<bdDataChannelTask> *result)
{
  return ?getTask@bdDataChannelPacket@bdDataChannelBase@@QEBA?AV?$bdReference@VbdDataChannelTask@@@@XZ(this, result);
}

/*
==============
bdDataChannelBase::getThrottledRetryTime
==============
*/

__int64 __fastcall bdDataChannelBase::getThrottledRetryTime(bdDataChannelBase *this)
{
  return ?getThrottledRetryTime@bdDataChannelBase@@UEBA_JXZ(this);
}

/*
==============
bdDataChannelBase::setThrottledRetryTime
==============
*/

void __fastcall bdDataChannelBase::setThrottledRetryTime(bdDataChannelBase *this, __int64 retryTimestamp)
{
  ?setThrottledRetryTime@bdDataChannelBase@@UEAAX_J@Z(this, retryTimestamp);
}

/*
==============
bdDataChannelBase::bdDataChannelPacket::getNextRetryTime
==============
*/

unsigned __int64 __fastcall bdDataChannelBase::bdDataChannelPacket::getNextRetryTime(bdDataChannelBase::bdDataChannelPacket *this)
{
  return ?getNextRetryTime@bdDataChannelPacket@bdDataChannelBase@@QEBA_KXZ(this);
}

/*
==============
bdDataChannelBase::bdDataChannelPacket::getSize
==============
*/

unsigned int __fastcall bdDataChannelBase::bdDataChannelPacket::getSize(bdDataChannelBase::bdDataChannelPacket *this)
{
  return ?getSize@bdDataChannelPacket@bdDataChannelBase@@QEBAIXZ(this);
}

/*
==============
bdDataChannelBase::isEmpty
==============
*/

bool __fastcall bdDataChannelBase::isEmpty(bdDataChannelBase *this)
{
  return ?isEmpty@bdDataChannelBase@@QEAA_NXZ(this);
}

/*
==============
bdDataChannelBase::~bdDataChannelBase
==============
*/

void __fastcall bdDataChannelBase::~bdDataChannelBase(bdDataChannelBase *this)
{
  ??1bdDataChannelBase@@UEAA@XZ(this);
}

/*
==============
bdDataChannelBase::tryReserveMessageQueueSize
==============
*/

bool __fastcall bdDataChannelBase::tryReserveMessageQueueSize(bdDataChannelBase *this, unsigned int dataSize)
{
  return ?tryReserveMessageQueueSize@bdDataChannelBase@@IEAA_NI@Z(this, dataSize);
}

/*
==============
bdDataChannelBase::bdDataChannelPacket::setRetries
==============
*/

void __fastcall bdDataChannelBase::bdDataChannelPacket::setRetries(bdDataChannelBase::bdDataChannelPacket *this, unsigned __int16 retries)
{
  ?setRetries@bdDataChannelPacket@bdDataChannelBase@@QEAAXG@Z(this, retries);
}

/*
==============
bdDataChannelBase::bdDataChannelBase
==============
*/
void bdDataChannelBase::bdDataChannelBase(bdDataChannelBase *this, bdDataChannelManagerBase *manager)
{
  this->m_refCount.m_value._My_val = 0;
  this->__vftable = (bdDataChannelBase_vtbl *)&bdDataChannelBase::`vftable';
  this->m_manager = manager;
  this->m_currentState = BD_DATACHANNEL_STATE_OK;
  this->m_messageQueue.m_data = NULL;
  *(_QWORD *)&this->m_messageQueue.m_capacity = 0i64;
  this->m_throttledRetryTimestamp = 0i64;
  memset_0(this->m_httpHeaderResponse, 0, sizeof(this->m_httpHeaderResponse));
}

/*
==============
bdDataChannelBase::~bdDataChannelBase
==============
*/
void bdDataChannelBase::~bdDataChannelBase(bdDataChannelBase *this)
{
  __int64 v2; 
  bool v3; 
  bdDataChannelBase::bdDataChannelPacket *v4; 
  __int64 v5; 

  v5 = -2i64;
  this->__vftable = (bdDataChannelBase_vtbl *)&bdDataChannelBase::`vftable';
  v2 = 0i64;
  if ( this->m_messageQueue.m_size )
  {
    v3 = this->m_messageQueue.m_size != 0;
    do
    {
      bdHandleAssert(v3, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<class bdDataChannelBase::bdDataChannelPacket *>::operator []", 0x50u, "bdFastArray<T>::operator[], rangecheck failed", v5);
      v4 = this->m_messageQueue.m_data[v2];
      bdHandleAssert(this->m_manager != NULL, "m_manager != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelbase.cpp", "bdDataChannelBase::~bdDataChannelBase", 0x3Du, "m_messageQueue requires m_manager");
      bdDataChannelManagerBase::decrementCurrentMessageQueueSize(this->m_manager, v4->m_data.m_size);
      ((void (__fastcall *)(bdDataChannelBase::bdDataChannelPacket *, __int64))v4->~bdDataChannelPacket)(v4, 1i64);
      v2 = (unsigned int)(v2 + 1);
      v3 = (unsigned int)v2 < this->m_messageQueue.m_size;
    }
    while ( (unsigned int)v2 < this->m_messageQueue.m_size );
  }
  bdMemory::deallocate(this->m_messageQueue.m_data);
  this->m_messageQueue.m_data = NULL;
  *(_QWORD *)&this->m_messageQueue.m_capacity = 0i64;
  bdReferencable::~bdReferencable(this);
}

/*
==============
bdDataChannelBase::dequeData
==============
*/
char bdDataChannelBase::dequeData(bdDataChannelBase *this, bool flagAsSent)
{
  bdDataChannelBase::bdDataChannelPacket *v3; 
  bdDataChannelTask *m_ptr; 
  bdDataChannelTask *v5; 

  if ( !this->m_messageQueue.m_size )
    return 0;
  v3 = *this->m_messageQueue.m_data;
  m_ptr = v3->m_task.m_ptr;
  v5 = m_ptr;
  if ( m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    v5 = m_ptr;
  }
  v5->m_status = !flagAsSent + 2;
  if ( m_ptr )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
      ((void (__fastcall *)(bdDataChannelTask *, __int64))m_ptr->~bdReferencable)(m_ptr, 1i64);
  }
  bdFastArray<bdDataChannelBase::bdDataChannelPacket *>::removeSection(&this->m_messageQueue, 0, 1u);
  bdHandleAssert(this->m_manager != NULL, "m_manager != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelbase.cpp", "bdDataChannelBase::dequeData", 0x75u, "m_messageQueue requires m_manager");
  bdDataChannelManagerBase::decrementCurrentMessageQueueSize(this->m_manager, v3->m_data.m_size);
  ((void (__fastcall *)(bdDataChannelBase::bdDataChannelPacket *, __int64))v3->~bdDataChannelPacket)(v3, 1i64);
  return 1;
}

/*
==============
bdDataChannelBase::bdDataChannelPacket::getData
==============
*/
unsigned __int8 *bdDataChannelBase::bdDataChannelPacket::getData(bdDataChannelBase::bdDataChannelPacket *this)
{
  return this->m_data.m_data;
}

/*
==============
bdDataChannelBase::bdDataChannelPacket::getNextRetryTime
==============
*/
unsigned __int64 bdDataChannelBase::bdDataChannelPacket::getNextRetryTime(bdDataChannelBase::bdDataChannelPacket *this)
{
  return this->m_nextRetryTime;
}

/*
==============
bdDataChannelBase::bdDataChannelPacket::getRetries
==============
*/
__int64 bdDataChannelBase::bdDataChannelPacket::getRetries(bdDataChannelBase::bdDataChannelPacket *this)
{
  return this->m_retries;
}

/*
==============
bdDataChannelBase::bdDataChannelPacket::getSize
==============
*/
__int64 bdDataChannelBase::bdDataChannelPacket::getSize(bdDataChannelBase::bdDataChannelPacket *this)
{
  return this->m_data.m_size;
}

/*
==============
bdDataChannelBase::getState
==============
*/
__int64 bdDataChannelBase::getState(bdDataChannelBase *this)
{
  return (unsigned int)this->m_currentState;
}

/*
==============
bdDataChannelBase::bdDataChannelPacket::getTask
==============
*/
bdReference<bdDataChannelTask> *bdDataChannelBase::bdDataChannelPacket::getTask(bdDataChannelBase::bdDataChannelPacket *this, bdReference<bdDataChannelTask> *result)
{
  bdDataChannelTask *m_ptr; 

  m_ptr = this->m_task.m_ptr;
  result->m_ptr = m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  return result;
}

/*
==============
bdDataChannelBase::getThrottledRetryTime
==============
*/
__int64 bdDataChannelBase::getThrottledRetryTime(bdDataChannelBase *this)
{
  return this->m_throttledRetryTimestamp;
}

/*
==============
bdDataChannelBase::isEmpty
==============
*/
bool bdDataChannelBase::isEmpty(bdDataChannelBase *this)
{
  return this->m_messageQueue.m_size == 0;
}

/*
==============
bdDataChannelBase::peekQueuedData
==============
*/
bdDataChannelBase::bdDataChannelPacket *bdDataChannelBase::peekQueuedData(bdDataChannelBase *this)
{
  if ( !this->m_messageQueue.m_size )
    return 0i64;
  bdHandleAssert(this->m_messageQueue.m_size != 0, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<class bdDataChannelBase::bdDataChannelPacket *>::operator []", 0x50u, "bdFastArray<T>::operator[], rangecheck failed");
  return *this->m_messageQueue.m_data;
}

/*
==============
bdDataChannelBase::peekQueuedData
==============
*/
char bdDataChannelBase::peekQueuedData(bdDataChannelBase *this, const unsigned __int8 **data, unsigned int *size)
{
  char result; 
  bdDataChannelBase::bdDataChannelPacket *v7; 

  result = 0;
  *data = NULL;
  *size = 0;
  if ( this->m_messageQueue.m_size )
  {
    bdHandleAssert(this->m_messageQueue.m_size != 0, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<class bdDataChannelBase::bdDataChannelPacket *>::operator []", 0x50u, "bdFastArray<T>::operator[], rangecheck failed");
    v7 = *this->m_messageQueue.m_data;
    *data = v7->m_data.m_data;
    *size = v7->m_data.m_size;
    return 1;
  }
  return result;
}

/*
==============
bdDataChannelBase::pruneFailed
==============
*/
__int64 bdDataChannelBase::pruneFailed(bdDataChannelBase *this, bdQueue<bdDataChannelBase::bdDataChannelPacket> *result)
{
  unsigned int v4; 
  unsigned int v5; 
  unsigned int m_size; 
  unsigned int v7; 
  bdDataChannelBase::bdDataChannelPacket *v8; 
  volatile signed __int32 *m_ptr; 
  bool v10; 
  unsigned int i; 
  bdDataChannelBase::bdDataChannelPacket **m_data; 
  bdDataChannelBase::bdDataChannelPacket **v13; 
  unsigned int v14; 
  unsigned int m_capacity; 
  unsigned int v16; 
  unsigned int v17; 
  bdDataChannelBase::bdDataChannelPacket **v18; 
  __int64 v20; 
  bdDataChannelBase::bdDataChannelPacket *value; 

  v20 = -2i64;
  v4 = 0;
  v5 = 0;
  m_size = this->m_messageQueue.m_size;
  v7 = 1;
  if ( m_size )
  {
    v8 = value;
    do
    {
      if ( v5 < this->m_messageQueue.m_size )
        v8 = this->m_messageQueue.m_data[v5];
      m_ptr = (volatile signed __int32 *)v8->m_task.m_ptr;
      if ( m_ptr )
        _InterlockedExchangeAdd(m_ptr + 2, 1u);
      v10 = (*(unsigned int (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)m_ptr + 8i64))(m_ptr) == 3;
      if ( m_ptr && _InterlockedExchangeAdd(m_ptr + 2, 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(volatile signed __int32 *, __int64))m_ptr)(m_ptr, 1i64);
      if ( v10 )
      {
        if ( result )
          bdLinkedList<bdDataChannelBase::bdDataChannelPacket>::insertAfter(&result->m_list, result->m_list.m_tail, v8);
        if ( v5 < this->m_messageQueue.m_size )
          this->m_messageQueue.m_data[v5] = NULL;
        bdHandleAssert(this->m_manager != NULL, "m_manager != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelbase.cpp", "bdDataChannelBase::pruneFailed", 0x8Fu, "m_messageQueue requires m_manager", v20);
        bdDataChannelManagerBase::decrementCurrentMessageQueueSize(this->m_manager, v8->m_data.m_size);
        ((void (__fastcall *)(bdDataChannelBase::bdDataChannelPacket *, __int64))v8->~bdDataChannelPacket)(v8, 1i64);
        ++v4;
      }
      ++v5;
      m_size = this->m_messageQueue.m_size;
    }
    while ( v5 < m_size );
  }
  for ( i = 0; i < m_size; m_size = this->m_messageQueue.m_size )
  {
    m_data = this->m_messageQueue.m_data;
    v13 = &m_data[i];
    if ( !*v13 )
    {
      if ( i < m_size && v7 <= m_size && i < v7 )
      {
        memmove_0(v13, &m_data[v7], 8i64 * (m_size - v7));
        v14 = this->m_messageQueue.m_size + i - v7;
        this->m_messageQueue.m_size = v14;
        m_capacity = this->m_messageQueue.m_capacity;
        if ( m_capacity > 4 * v14 )
        {
          v16 = m_capacity - v14;
          if ( m_capacity != v14 )
            v16 = 0;
          if ( v16 <= m_capacity >> 1 )
            v16 = m_capacity >> 1;
          v17 = m_capacity - v16;
          this->m_messageQueue.m_capacity = v17;
          v18 = NULL;
          if ( v17 )
            v18 = (bdDataChannelBase::bdDataChannelPacket **)bdMemory::reallocate(this->m_messageQueue.m_data, 8i64 * v17);
          this->m_messageQueue.m_data = v18;
        }
      }
      --i;
      --v7;
    }
    ++i;
    ++v7;
  }
  return v4;
}

/*
==============
bdDataChannelBase::rotateQueue
==============
*/
void bdDataChannelBase::rotateQueue(bdDataChannelBase *this)
{
  unsigned int m_size; 
  void *v3; 
  unsigned int v4; 
  unsigned int m_capacity; 
  unsigned int v6; 
  bdDataChannelBase::bdDataChannelPacket **v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  double v13; 

  if ( this->m_messageQueue.m_size )
  {
    m_size = this->m_messageQueue.m_size;
    if ( m_size )
      v13 = *(double *)this->m_messageQueue.m_data;
    v3 = NULL;
    if ( m_size )
    {
      memmove_0(this->m_messageQueue.m_data, this->m_messageQueue.m_data + 1, 8i64 * (m_size - 1));
      v4 = --this->m_messageQueue.m_size;
      m_capacity = this->m_messageQueue.m_capacity;
      if ( m_capacity > 4 * v4 )
      {
        v6 = m_capacity - v4;
        if ( m_capacity != v4 )
          v6 = 0;
        if ( v6 <= m_capacity >> 1 )
          v6 = m_capacity >> 1;
        v7 = NULL;
        v8 = m_capacity - v6;
        this->m_messageQueue.m_capacity = v8;
        if ( v8 )
          v7 = (bdDataChannelBase::bdDataChannelPacket **)bdMemory::reallocate(this->m_messageQueue.m_data, 8i64 * v8);
        this->m_messageQueue.m_data = v7;
      }
    }
    bdHandleAssert(this->m_manager != NULL, "m_manager != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelbase.cpp", "bdDataChannelBase::rotateQueue", 0xA3u, "m_messageQueue requires m_manager");
    v9 = this->m_messageQueue.m_capacity;
    if ( this->m_messageQueue.m_size == v9 )
    {
      v10 = this->m_messageQueue.m_capacity;
      if ( !v9 )
        v10 = 1;
      v11 = v9 + v10;
      if ( v11 )
      {
        v3 = bdMemory::allocate(8i64 * v11);
        v12 = this->m_messageQueue.m_size;
        if ( v12 )
          memcpy_0(v3, this->m_messageQueue.m_data, 8i64 * v12);
      }
      bdMemory::deallocate(this->m_messageQueue.m_data);
      this->m_messageQueue.m_capacity = v11;
      this->m_messageQueue.m_data = (bdDataChannelBase::bdDataChannelPacket **)v3;
    }
    *(double *)&this->m_messageQueue.m_data[this->m_messageQueue.m_size++] = v13;
  }
}

/*
==============
bdDataChannelBase::bdDataChannelPacket::setNextRetryTime
==============
*/
void bdDataChannelBase::bdDataChannelPacket::setNextRetryTime(bdDataChannelBase::bdDataChannelPacket *this, unsigned __int64 nextRetryTime)
{
  this->m_nextRetryTime = nextRetryTime;
}

/*
==============
bdDataChannelBase::bdDataChannelPacket::setRetries
==============
*/
void bdDataChannelBase::bdDataChannelPacket::setRetries(bdDataChannelBase::bdDataChannelPacket *this, unsigned __int16 retries)
{
  this->m_retries = retries;
}

/*
==============
bdDataChannelBase::setState
==============
*/
void bdDataChannelBase::setState(bdDataChannelBase *this, bdDataChannelBase::bdDataChannelState state)
{
  this->m_currentState = state;
}

/*
==============
bdDataChannelBase::setStatusContext
==============
*/
void bdDataChannelBase::setStatusContext(bdDataChannelBase *this, const char *context)
{
  bdHandleAssert(context != NULL, "context != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelbase.cpp", "bdDataChannelBase::setStatusContext", 0x45u, "The context must not be null.");
  bdStrlcpy(this->m_httpHeaderResponse, context, 0xFFui64);
}

/*
==============
bdDataChannelBase::setThrottledRetryTime
==============
*/
void bdDataChannelBase::setThrottledRetryTime(bdDataChannelBase *this, __int64 retryTimestamp)
{
  this->m_throttledRetryTimestamp = retryTimestamp;
}

/*
==============
bdDataChannelBase::tryReserveMessageQueueSize
==============
*/
char bdDataChannelBase::tryReserveMessageQueueSize(bdDataChannelBase *this, unsigned int dataSize)
{
  bdDataChannelBase::bdDataChannelState m_currentState; 
  unsigned int v8; 
  unsigned int v9; 

  m_currentState = this->m_currentState;
  if ( m_currentState == BD_DATACHANNEL_STATE_THROTTLED )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdDataChannelBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelbase.cpp", "bdDataChannelBase::tryReserveMessageQueueSize", 0xB8u, "Not queuing message of %d bytes (BD_DATACHANNEL_STATE_THROTTLED).", dataSize);
    return 0;
  }
  if ( m_currentState == BD_DATACHANNEL_STATE_ERROR )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdDataChannelBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelbase.cpp", "bdDataChannelBase::tryReserveMessageQueueSize", 0xBDu, "Not queuing message of %d bytes (BD_DATACHANNEL_STATE_ERROR).", dataSize);
    return 0;
  }
  bdHandleAssert(this->m_manager != NULL, "m_manager != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelbase.cpp", "bdDataChannelBase::tryReserveMessageQueueSize", 0xC2u, "m_messageQueue requires m_manager");
  if ( !bdDataChannelManagerBase::allowWrite(this->m_manager) )
  {
    v8 = dataSize;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdDataChannelBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelbase.cpp", "bdDataChannelBase::tryReserveMessageQueueSize", 0xC9u, "bdDataChannelManager does not allow write more data (message queues flushing may be in progress).Not queuing message of %d bytes.", v8);
    return 0;
  }
  if ( !bdDataChannelManagerBase::canIncrementCurrentMessageQueueSize(this->m_manager, dataSize) )
  {
    v9 = dataSize;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdDataChannelBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelbase.cpp", "bdDataChannelBase::tryReserveMessageQueueSize", 0xCEu, "Not queuing message of %d bytes. (max shared queue size exceeded)", v9);
    return 0;
  }
  bdDataChannelManagerBase::incrementCurrentMessageQueueSize(this->m_manager, dataSize);
  return 1;
}

