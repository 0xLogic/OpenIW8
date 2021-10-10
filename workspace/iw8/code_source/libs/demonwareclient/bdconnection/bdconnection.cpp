/*
==============
bdConnection::setAddressHandle
==============
*/

void __fastcall bdConnection::setAddressHandle(bdConnection *this, const bdReference<bdAddrHandle> *addr)
{
  ?setAddressHandle@bdConnection@@QEAAXAEBV?$bdReference@VbdAddrHandle@@@@@Z(this, addr);
}

/*
==============
bdConnection::getAddressHandle
==============
*/

const bdReference<bdAddrHandle> *__fastcall bdConnection::getAddressHandle(bdConnection *this)
{
  return ?getAddressHandle@bdConnection@@QEBAAEBV?$bdReference@VbdAddrHandle@@@@XZ(this);
}

/*
==============
bdConnection::close
==============
*/

void __fastcall bdConnection::close(bdConnection *this)
{
  ?close@bdConnection@@UEAAXXZ(this);
}

/*
==============
bdConnection::bdConnection
==============
*/

void __fastcall bdConnection::bdConnection(bdConnection *this, bdReference<bdCommonAddr> addr)
{
  ??0bdConnection@@IEAA@V?$bdReference@VbdCommonAddr@@@@@Z(this, addr);
}

/*
==============
bdConnection::~bdConnection
==============
*/

void __fastcall bdConnection::~bdConnection(bdConnection *this)
{
  ??1bdConnection@@UEAA@XZ(this);
}

/*
==============
bdConnection::disconnect
==============
*/

void __fastcall bdConnection::disconnect(bdConnection *this)
{
  ?disconnect@bdConnection@@UEAAXXZ(this);
}

/*
==============
bdConnection::getTransmissionRate
==============
*/

unsigned int __fastcall bdConnection::getTransmissionRate(bdConnection *this)
{
  return ?getTransmissionRate@bdConnection@@QEBAIXZ(this);
}

/*
==============
bdConnection::connect
==============
*/

bool __fastcall bdConnection::connect(bdConnection *this)
{
  return ?connect@bdConnection@@UEAA_NXZ(this);
}

/*
==============
bdConnection::setTransmissionRate
==============
*/

void __fastcall bdConnection::setTransmissionRate(bdConnection *this, const unsigned int bytesPerSecond)
{
  ?setTransmissionRate@bdConnection@@QEAAXI@Z(this, bytesPerSecond);
}

/*
==============
bdConnection::getStatus
==============
*/

bdConnection::Status __fastcall bdConnection::getStatus(bdConnection *this)
{
  return ?getStatus@bdConnection@@UEBA?AW4Status@1@XZ(this);
}

/*
==============
bdConnection::getAddress
==============
*/

bdReference<bdCommonAddr> *__fastcall bdConnection::getAddress(bdConnection *this, bdReference<bdCommonAddr> *result)
{
  return ?getAddress@bdConnection@@QEBA?AV?$bdReference@VbdCommonAddr@@@@XZ(this, result);
}

/*
==============
bdConnection::unregisterListener
==============
*/

void __fastcall bdConnection::unregisterListener(bdConnection *this, bdConnectionListener *const listener)
{
  ?unregisterListener@bdConnection@@QEAAXQEAVbdConnectionListener@@@Z(this, listener);
}

/*
==============
bdConnection::bdConnection
==============
*/

void __fastcall bdConnection::bdConnection(bdConnection *this)
{
  ??0bdConnection@@IEAA@XZ(this);
}

/*
==============
bdConnection::registerListener
==============
*/

void __fastcall bdConnection::registerListener(bdConnection *this, bdConnectionListener *const listener)
{
  ?registerListener@bdConnection@@QEAAXQEAVbdConnectionListener@@@Z(this, listener);
}

/*
==============
bdConnection::bdConnection
==============
*/
void bdConnection::bdConnection(bdConnection *this, bdReference<bdCommonAddr> addr)
{
  bdCommonAddr_vtbl *v4; 

  this->m_refCount.m_value._My_val = 0;
  this->__vftable = (bdConnection_vtbl *)&bdConnection::`vftable';
  v4 = addr.m_ptr->__vftable;
  this->m_addr.m_ptr = (bdCommonAddr *)addr.m_ptr->__vftable;
  if ( v4 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v4[1], 1u);
  this->m_addrHandle.m_ptr = NULL;
  this->m_listeners.m_data = NULL;
  *(_QWORD *)&this->m_listeners.m_capacity = 0i64;
  *(_QWORD *)&this->m_maxTransmissionRate = 0i64;
  if ( addr.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&addr.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( addr.m_ptr->__vftable )
      (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))addr.m_ptr->~bdReferencable)(addr.m_ptr->__vftable, 1i64);
    addr.m_ptr->__vftable = NULL;
  }
}

/*
==============
bdConnection::bdConnection
==============
*/
void bdConnection::bdConnection(bdConnection *this)
{
  this->m_refCount.m_value._My_val = 0;
  this->__vftable = (bdConnection_vtbl *)&bdConnection::`vftable';
  this->m_addr.m_ptr = NULL;
  this->m_addrHandle.m_ptr = NULL;
  this->m_listeners.m_data = NULL;
  *(_QWORD *)&this->m_listeners.m_capacity = 0i64;
  *(_QWORD *)&this->m_maxTransmissionRate = 0i64;
}

/*
==============
bdConnection::~bdConnection
==============
*/
void bdConnection::~bdConnection(bdConnection *this)
{
  bdAddrHandle *m_ptr; 
  bdAddrHandle *v3; 
  bdCommonAddr *v4; 
  bdCommonAddr *v5; 

  this->__vftable = (bdConnection_vtbl *)&bdConnection::`vftable';
  bdMemory::deallocate(this->m_listeners.m_data);
  this->m_listeners.m_data = NULL;
  *(_QWORD *)&this->m_listeners.m_capacity = 0i64;
  m_ptr = this->m_addrHandle.m_ptr;
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    v3 = this->m_addrHandle.m_ptr;
    if ( v3 )
      ((void (__fastcall *)(bdAddrHandle *, __int64))v3->~bdReferencable)(v3, 1i64);
    this->m_addrHandle.m_ptr = NULL;
  }
  v4 = this->m_addr.m_ptr;
  if ( v4 && _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 0xFFFFFFFF) == 1 )
  {
    v5 = this->m_addr.m_ptr;
    if ( v5 )
      ((void (__fastcall *)(bdCommonAddr *, __int64))v5->~bdReferencable)(v5, 1i64);
    this->m_addr.m_ptr = NULL;
  }
  bdReferencable::~bdReferencable(this);
}

/*
==============
bdConnection::close
==============
*/
void bdConnection::close(bdConnection *this)
{
  this->m_status = BD_HANDLE_TASK_FAILED;
}

/*
==============
bdConnection::connect
==============
*/
char bdConnection::connect(bdConnection *this)
{
  this->m_status = BD_TOO_MANY_TASKS;
  return 1;
}

/*
==============
bdConnection::disconnect
==============
*/
void bdConnection::disconnect(bdConnection *this)
{
  this->m_status = BD_SEND_FAILED;
}

/*
==============
bdConnection::getAddress
==============
*/
bdReference<bdCommonAddr> *bdConnection::getAddress(bdConnection *this, bdReference<bdCommonAddr> *result)
{
  bdCommonAddr *m_ptr; 

  m_ptr = this->m_addr.m_ptr;
  result->m_ptr = m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  return result;
}

/*
==============
bdConnection::getAddressHandle
==============
*/
bdReference<bdAddrHandle> *bdConnection::getAddressHandle(bdConnection *this)
{
  return &this->m_addrHandle;
}

/*
==============
bdConnection::getStatus
==============
*/
__int64 bdConnection::getStatus(bdConnection *this)
{
  return (unsigned int)this->m_status;
}

/*
==============
bdConnection::getTransmissionRate
==============
*/
__int64 bdConnection::getTransmissionRate(bdConnection *this)
{
  return this->m_maxTransmissionRate;
}

/*
==============
bdConnection::registerListener
==============
*/
void bdConnection::registerListener(bdConnection *this, bdConnectionListener *const listener)
{
  bdConnectionListener **m_data; 
  unsigned int m_size; 
  int v5; 
  unsigned int m_capacity; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 

  m_data = NULL;
  m_size = this->m_listeners.m_size;
  v5 = 0;
  if ( m_size )
  {
    while ( listener != this->m_listeners.m_data[v5] )
    {
      if ( ++v5 >= m_size )
        goto LABEL_6;
    }
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdConnection/connections", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdconnection.cpp", "bdConnection::registerListener", 0x36u, "same listener registered multiple times.");
  }
LABEL_6:
  m_capacity = this->m_listeners.m_capacity;
  if ( this->m_listeners.m_size == m_capacity )
  {
    v7 = this->m_listeners.m_capacity;
    if ( !m_capacity )
      v7 = 1;
    v8 = m_capacity + v7;
    if ( m_capacity + v7 )
    {
      m_data = (bdConnectionListener **)bdMemory::allocate(8i64 * v8);
      v9 = this->m_listeners.m_size;
      if ( v9 )
        memcpy_0(m_data, this->m_listeners.m_data, 8i64 * v9);
    }
    bdMemory::deallocate(this->m_listeners.m_data);
    this->m_listeners.m_data = m_data;
    this->m_listeners.m_capacity = v8;
  }
  else
  {
    m_data = this->m_listeners.m_data;
  }
  m_data[this->m_listeners.m_size++] = listener;
}

/*
==============
bdConnection::setAddressHandle
==============
*/
void bdConnection::setAddressHandle(bdConnection *this, const bdReference<bdAddrHandle> *addr)
{
  bdReference<bdAddrHandle> *p_m_addrHandle; 
  bdAddrHandle *m_ptr; 

  p_m_addrHandle = &this->m_addrHandle;
  if ( addr != &this->m_addrHandle )
  {
    if ( p_m_addrHandle->m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&p_m_addrHandle->m_ptr->m_refCount, 0xFFFFFFFF) == 1 && p_m_addrHandle->m_ptr )
      ((void (__fastcall *)(bdAddrHandle *, __int64))p_m_addrHandle->m_ptr->~bdReferencable)(p_m_addrHandle->m_ptr, 1i64);
    m_ptr = addr->m_ptr;
    p_m_addrHandle->m_ptr = addr->m_ptr;
    if ( m_ptr )
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  }
}

/*
==============
bdConnection::setTransmissionRate
==============
*/
void bdConnection::setTransmissionRate(bdConnection *this, const unsigned int bytesPerSecond)
{
  this->m_maxTransmissionRate = bytesPerSecond;
}

/*
==============
bdConnection::unregisterListener
==============
*/
void bdConnection::unregisterListener(bdConnection *this, bdConnectionListener *const listener)
{
  unsigned int m_size; 
  unsigned int v5; 
  unsigned int v6; 
  bdConnectionListener **m_data; 
  unsigned int m_capacity; 
  unsigned int v9; 
  unsigned int v10; 
  bdConnectionListener **v11; 
  unsigned int v12; 

  m_size = this->m_listeners.m_size;
  v5 = 0;
  if ( m_size )
  {
    v6 = 1;
    do
    {
      m_data = this->m_listeners.m_data;
      if ( listener == m_data[v5] )
      {
        if ( v5 < m_size && v6 <= m_size && v5 < v6 )
        {
          memmove_0(&m_data[v5], &m_data[v6], 8i64 * (m_size - v6));
          m_capacity = this->m_listeners.m_capacity;
          v9 = v5 + this->m_listeners.m_size - v6;
          this->m_listeners.m_size = v9;
          if ( m_capacity > 4 * v9 )
          {
            v10 = m_capacity - v9;
            if ( m_capacity != v9 )
              v10 = 0;
            if ( v10 <= m_capacity >> 1 )
              v10 = m_capacity >> 1;
            v11 = NULL;
            v12 = m_capacity - v10;
            this->m_listeners.m_capacity = v12;
            if ( v12 )
              v11 = (bdConnectionListener **)bdMemory::reallocate(this->m_listeners.m_data, 8i64 * v12);
            this->m_listeners.m_data = v11;
          }
        }
        --v5;
        --v6;
      }
      m_size = this->m_listeners.m_size;
      ++v5;
      ++v6;
    }
    while ( v5 < m_size );
  }
}

