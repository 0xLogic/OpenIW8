/*
==============
bdConnectionStore::getStatus
==============
*/

bdConnectionStore::bdConnectionStoreStatus __fastcall bdConnectionStore::getStatus(bdConnectionStore *this)
{
  return ?getStatus@bdConnectionStore@@QEBA?AW4bdConnectionStoreStatus@1@XZ(this);
}

/*
==============
bdConnectionStore::getConfig
==============
*/

void __fastcall bdConnectionStore::getConfig(bdConnectionStore *this, bdConnectionStoreConfig *config)
{
  ?getConfig@bdConnectionStore@@QEBAXAEAVbdConnectionStoreConfig@@@Z(this, config);
}

/*
==============
bdConnectionStore::~bdConnectionStore
==============
*/

void __fastcall bdConnectionStore::~bdConnectionStore(bdConnectionStore *this)
{
  ??1bdConnectionStore@@QEAA@XZ(this);
}

/*
==============
bdConnectionStore::flush
==============
*/

unsigned int __fastcall bdConnectionStore::flush(bdConnectionStore *this, bdConnection *connection)
{
  return ?flush@bdConnectionStore@@IEAAIAEAVbdConnection@@@Z(this, connection);
}

/*
==============
bdConnectionStore::flushAll
==============
*/

bool __fastcall bdConnectionStore::flushAll(bdConnectionStore *this)
{
  return ?flushAll@bdConnectionStore@@QEAA_NXZ(this);
}

/*
==============
bdConnectionStore::setConfig
==============
*/

void __fastcall bdConnectionStore::setConfig(bdConnectionStore *this, bdConnectionStoreConfig *config)
{
  ?setConfig@bdConnectionStore@@QEAAXAEAVbdConnectionStoreConfig@@@Z(this, config);
}

/*
==============
bdConnectionStore::unregisterDispatchInterceptor
==============
*/

void __fastcall bdConnectionStore::unregisterDispatchInterceptor(bdConnectionStore *this, bdDispatchInterceptor *const interceptor)
{
  ?unregisterDispatchInterceptor@bdConnectionStore@@QEAAXQEAVbdDispatchInterceptor@@@Z(this, interceptor);
}

/*
==============
bdConnectionStore::flushPrepared
==============
*/

unsigned int __fastcall bdConnectionStore::flushPrepared(bdConnectionStore *this, bdConnection *connection, bdSocketRouterData *headers, const unsigned int numHeaders)
{
  return ?flushPrepared@bdConnectionStore@@IEAAIAEAVbdConnection@@PEAVbdSocketRouterData@@I@Z(this, connection, headers, numHeaders);
}

/*
==============
bdConnectionStore::prepareFlush
==============
*/

unsigned int __fastcall bdConnectionStore::prepareFlush(bdConnectionStore *this, bdConnection *connection, unsigned __int8 *outData, bdSocketRouterData *header)
{
  return ?prepareFlush@bdConnectionStore@@IEAAIAEAVbdConnection@@QEAEAEAVbdSocketRouterData@@@Z(this, connection, outData, header);
}

/*
==============
bdConnectionStore::create
==============
*/

bdReference<bdConnection> *__fastcall bdConnectionStore::create(bdConnectionStore *this, bdReference<bdConnection> *result, bdReference<bdCommonAddr> addr, const bdSecurityID *secID)
{
  return ?create@bdConnectionStore@@QEAA?AV?$bdReference@VbdConnection@@@@V?$bdReference@VbdCommonAddr@@@@AEBVbdSecurityID@@@Z(this, result, addr, secID);
}

/*
==============
bdConnectionStore::bdConnectionStore
==============
*/

void __fastcall bdConnectionStore::bdConnectionStore(bdConnectionStore *this)
{
  ??0bdConnectionStore@@QEAA@XZ(this);
}

/*
==============
bdConnectionStore::receiveAll
==============
*/

bool __fastcall bdConnectionStore::receiveAll(bdConnectionStore *this)
{
  return ?receiveAll@bdConnectionStore@@QEAA_NXZ(this);
}

/*
==============
bdConnectionStore::startShutdown
==============
*/

bool __fastcall bdConnectionStore::startShutdown(bdConnectionStore *this, const bdConnectionStore::bdConnectionStoreShutdownType shutdownType)
{
  return ?startShutdown@bdConnectionStore@@QEAA_NW4bdConnectionStoreShutdownType@1@@Z(this, shutdownType);
}

/*
==============
bdConnectionStore::registerDispatchInterceptor
==============
*/

void __fastcall bdConnectionStore::registerDispatchInterceptor(bdConnectionStore *this, bdDispatchInterceptor *const interceptor)
{
  ?registerDispatchInterceptor@bdConnectionStore@@QEAAXQEAVbdDispatchInterceptor@@@Z(this, interceptor);
}

/*
==============
bdConnectionStore::init
==============
*/

bool __fastcall bdConnectionStore::init(bdConnectionStore *this, bdSocketRouter *socket, const bdConnectionStoreConfig *config)
{
  return ?init@bdConnectionStore@@QEAA_NPEAVbdSocketRouter@@AEBVbdConnectionStoreConfig@@@Z(this, socket, config);
}

/*
==============
bdConnectionStore::dispatchAll
==============
*/

void __fastcall bdConnectionStore::dispatchAll(bdConnectionStore *this)
{
  ?dispatchAll@bdConnectionStore@@QEAAXXZ(this);
}

/*
==============
bdConnectionStore::bdConnectionStore
==============
*/
void bdConnectionStore::bdConnectionStore(bdConnectionStore *this)
{
  bdHashMap<bdAddrHandleRefWrapper,bdReference<bdConnection>,bdAddrHandleRefWrapper> *p_m_connectionMap; 
  unsigned int PowerOf2; 
  bdHashMap<bdAddrHandleRefWrapper,bdReference<bdConnection>,bdAddrHandleRefWrapper>::Node **v9; 

  this->m_socket = NULL;
  p_m_connectionMap = &this->m_connectionMap;
  bdAddrHandleRefWrapper::bdAddrHandleRefWrapper(&this->m_connectionMap.m_hashClass);
  p_m_connectionMap->m_numIterators.m_value._My_val = 0;
  p_m_connectionMap->m_size = 0;
  PowerOf2 = bdBitOperations::nextPowerOf2(4u);
  p_m_connectionMap->m_capacity = PowerOf2;
  p_m_connectionMap->m_loadFactor = 0.75;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rcx
    vmulss  xmm1, xmm0, cs:__real@3f400000
    vcvttss2si rcx, xmm1
  }
  p_m_connectionMap->m_threshold = _RCX;
  v9 = (bdHashMap<bdAddrHandleRefWrapper,bdReference<bdConnection>,bdAddrHandleRefWrapper>::Node **)bdMemory::allocate(8i64 * PowerOf2);
  p_m_connectionMap->m_map = v9;
  memset_0(v9, 0, 8i64 * p_m_connectionMap->m_capacity);
  this->m_status = BD_CONNECTION_STORE_UNINITIALIZED;
  bdDispatcher::bdDispatcher(&this->m_dispatcher);
  bdStopwatch::bdStopwatch(&this->m_shutdownTimer);
  this->m_addrMap = NULL;
  bdConnectionStoreConfig::bdConnectionStoreConfig(&this->m_config);
  bdMutex::bdMutex(&this->m_mutex);
}

/*
==============
bdConnectionStore::~bdConnectionStore
==============
*/
void bdConnectionStore::~bdConnectionStore(bdConnectionStore *this)
{
  bdAddrHandle *m_ptr; 
  bdAddrHandle *v3; 

  bdMutex::lock(&this->m_mutex);
  bdHashMap<bdAddrHandleRefWrapper,bdReference<bdConnection>,bdAddrHandleRefWrapper>::clear(&this->m_connectionMap);
  bdDispatcher::reset(&this->m_dispatcher);
  bdMutex::unlock(&this->m_mutex);
  bdMutex::~bdMutex(&this->m_mutex);
  bdMemory::deallocate(this->m_dispatcher.m_interceptors.m_data);
  this->m_dispatcher.m_interceptors.m_data = NULL;
  *(_QWORD *)&this->m_dispatcher.m_interceptors.m_capacity = 0i64;
  bdHashMap<bdAddrHandleRefWrapper,bdReference<bdConnection>,bdAddrHandleRefWrapper>::clear(&this->m_connectionMap);
  bdMemory::deallocate(this->m_connectionMap.m_map);
  m_ptr = this->m_connectionMap.m_hashClass.m_handle.m_ptr;
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    v3 = this->m_connectionMap.m_hashClass.m_handle.m_ptr;
    if ( v3 )
      ((void (__fastcall *)(bdAddrHandle *, __int64))v3->~bdReferencable)(v3, 1i64);
    this->m_connectionMap.m_hashClass.m_handle.m_ptr = NULL;
  }
}

/*
==============
bdConnectionStore::create
==============
*/
bdReference<bdConnection> *bdConnectionStore::create(bdConnectionStore *this, bdReference<bdConnection> *result, bdReference<bdCommonAddr> addr, const bdSecurityID *secID)
{
  bdCommonAddr *v8; 
  bdAddressMap *m_addrMap; 
  bdHashMap<bdAddrHandleRefWrapper,bdReference<bdConnection>,bdAddrHandleRefWrapper> *p_m_connectionMap; 
  bool v11; 
  bdLoopbackConnection *v12; 
  bdCommonAddr *v13; 
  bdConnection *v14; 
  bool v15; 
  bdUnicastConnection *v16; 
  bool m_acceptOutOfOrder; 
  bdAddressMap *v18; 
  bdCommonAddr *v19; 
  bdConnection *v20; 
  char v21; 
  char v22; 
  bdAddrHandleRefWrapper key; 
  bdAddrHandleRefWrapper v25; 
  bdAddrHandleRefWrapper v26; 
  bdReference<bdAddrHandle> handle; 
  bdReference<bdCommonAddr> addra; 
  bdReference<bdCommonAddr> dest; 
  bdReference<bdAddrHandle> v30; 
  void *v31; 
  bdReference<bdCommonAddr> ca; 
  bdReference<bdAddrHandle> v33; 
  bdMutex *p_m_mutex; 
  __int64 v35; 
  bdReference<bdAddrHandle> addrHandle; 
  bdReference<bdConnection> *v37; 
  bdCommonAddr *m_ptr; 

  m_ptr = addr.m_ptr;
  v37 = result;
  v35 = -2i64;
  p_m_mutex = &this->m_mutex;
  bdMutex::lock(&this->m_mutex);
  result->m_ptr = NULL;
  if ( this->m_status != BD_CONNECTION_STORE_INITIALIZED )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdConnection/connectionstore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdconnectionstore.cpp", "bdConnectionStore::create", 0x23Fu, "Cannot create a connection when store is not initialized.");
    goto LABEL_59;
  }
  v8 = (bdCommonAddr *)addr.m_ptr->__vftable;
  if ( !addr.m_ptr->__vftable )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdConnection/connectionstore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdconnectionstore.cpp", "bdConnectionStore::create", 0x201u, "An invalid common addr ref used to create connection.");
    goto LABEL_59;
  }
  addrHandle.m_ptr = NULL;
  m_addrMap = this->m_addrMap;
  if ( !m_addrMap )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdConnection/connectionstore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdconnectionstore.cpp", "bdConnectionStore::create", 0x239u, "Addr map pointer not initialized.");
    goto LABEL_54;
  }
  ca.m_ptr = v8;
  _InterlockedExchangeAdd((volatile signed __int32 *)&v8->m_refCount, 1u);
  if ( !bdAddressMap::getAddrHandle(m_addrMap, (const bdReference<bdCommonAddr>)&ca, secID, &addrHandle) )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdConnection/connectionstore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdconnectionstore.cpp", "bdConnectionStore::create", 0x233u, "Failed to create connection as addr handle retrieval failed.");
LABEL_48:
    if ( result->m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result->m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result->m_ptr )
      ((void (__fastcall *)(bdConnection *, __int64))result->m_ptr->~bdReferencable)(result->m_ptr, 1i64);
    result->m_ptr = NULL;
    goto LABEL_54;
  }
  p_m_connectionMap = &this->m_connectionMap;
  handle.m_ptr = addrHandle.m_ptr;
  if ( addrHandle.m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&addrHandle.m_ptr->m_refCount, 1u);
  bdAddrHandleRefWrapper::bdAddrHandleRefWrapper(&key, (bdReference<bdAddrHandle>)&handle);
  v11 = bdHashMap<bdAddrHandleRefWrapper,bdReference<bdConnection>,bdAddrHandleRefWrapper>::get(&this->m_connectionMap, &key, result);
  if ( key.m_handle.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&key.m_handle.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && key.m_handle.m_ptr )
    ((void (__fastcall *)(bdAddrHandle *, __int64))key.m_handle.m_ptr->~bdReferencable)(key.m_handle.m_ptr, 1i64);
  if ( !v11 )
  {
    if ( LOBYTE(addr.m_ptr->__vftable[118].~bdReferencable) )
    {
      bdLogMessage(BD_LOG_INFO, "info/", "bdConnection/connectionstore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdconnectionstore.cpp", "bdConnectionStore::create", 0x215u, "Creating new loopback connection.");
      v12 = (bdLoopbackConnection *)bdMemory::allocate(0x50ui64);
      v31 = v12;
      if ( v12 )
      {
        v13 = (bdCommonAddr *)addr.m_ptr->__vftable;
        addra.m_ptr = v13;
        if ( v13 )
          _InterlockedExchangeAdd((volatile signed __int32 *)&v13->m_refCount, 1u);
        bdLoopbackConnection::bdLoopbackConnection(v12, (bdReference<bdCommonAddr>)&addra);
      }
      else
      {
        v14 = NULL;
      }
      bdReference<bdConnection>::operator=(result, v14);
      bdConnection::setAddressHandle(result->m_ptr, &addrHandle);
      v33.m_ptr = addrHandle.m_ptr;
      if ( addrHandle.m_ptr )
        _InterlockedExchangeAdd((volatile signed __int32 *)&addrHandle.m_ptr->m_refCount, 1u);
      bdAddrHandleRefWrapper::bdAddrHandleRefWrapper(&v25, (bdReference<bdAddrHandle>)&v33);
      v15 = !bdHashMap<bdAddrHandleRefWrapper,bdReference<bdConnection>,bdAddrHandleRefWrapper>::put(&this->m_connectionMap, &v25, result);
      if ( v25.m_handle.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v25.m_handle.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v25.m_handle.m_ptr )
        ((void (__fastcall *)(bdAddrHandle *, __int64))v25.m_handle.m_ptr->~bdReferencable)(v25.m_handle.m_ptr, 1i64);
      if ( !v15 )
        goto LABEL_54;
      goto LABEL_48;
    }
    bdLogMessage(BD_LOG_INFO, "info/", "bdConnection/connectionstore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdconnectionstore.cpp", "bdConnectionStore::create", 0x220u, "Creating new unicast connection.");
    v16 = (bdUnicastConnection *)bdMemory::allocate(0x180ui64);
    v31 = v16;
    if ( v16 )
    {
      m_acceptOutOfOrder = this->m_config.m_acceptOutOfOrder;
      v18 = this->m_addrMap;
      v19 = (bdCommonAddr *)addr.m_ptr->__vftable;
      dest.m_ptr = v19;
      if ( v19 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v19->m_refCount, 1u);
      bdUnicastConnection::bdUnicastConnection(v16, (bdReference<bdCommonAddr>)&dest, v18, m_acceptOutOfOrder);
    }
    else
    {
      v20 = NULL;
    }
    bdReference<bdConnection>::operator=(result, v20);
    bdConnection::setAddressHandle(result->m_ptr, &addrHandle);
    if ( this->m_socket->connect(this->m_socket, &addrHandle) )
    {
      v30.m_ptr = addrHandle.m_ptr;
      if ( addrHandle.m_ptr )
        _InterlockedExchangeAdd((volatile signed __int32 *)&addrHandle.m_ptr->m_refCount, 1u);
      bdAddrHandleRefWrapper::bdAddrHandleRefWrapper(&v26, (bdReference<bdAddrHandle>)&v30);
      v21 = 3;
      if ( bdHashMap<bdAddrHandleRefWrapper,bdReference<bdConnection>,bdAddrHandleRefWrapper>::put(p_m_connectionMap, &v26, result) )
      {
        v22 = 1;
        goto LABEL_40;
      }
    }
    else
    {
      v21 = 1;
    }
    v22 = 0;
LABEL_40:
    if ( (v21 & 2) != 0 && v26.m_handle.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v26.m_handle.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v26.m_handle.m_ptr )
      ((void (__fastcall *)(bdAddrHandle *, __int64))v26.m_handle.m_ptr->~bdReferencable)(v26.m_handle.m_ptr, 1i64);
    if ( v22 )
      goto LABEL_54;
    result->m_ptr->disconnect(result->m_ptr);
    result->m_ptr->close(result->m_ptr);
    goto LABEL_48;
  }
  bdLogMessage(BD_LOG_INFO, "info/", "bdConnection/connectionstore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdconnectionstore.cpp", "bdConnectionStore::create", 0x20Fu, "a connection already exists to host.");
LABEL_54:
  if ( addrHandle.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&addrHandle.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && addrHandle.m_ptr )
    ((void (__fastcall *)(bdAddrHandle *, __int64))addrHandle.m_ptr->~bdReferencable)(addrHandle.m_ptr, 1i64);
LABEL_59:
  bdMutex::unlock(p_m_mutex);
  if ( addr.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&addr.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( addr.m_ptr->__vftable )
      (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))addr.m_ptr->~bdReferencable)(addr.m_ptr->__vftable, 1i64);
    addr.m_ptr->__vftable = NULL;
  }
  return result;
}

/*
==============
bdConnectionStore::dispatchAll
==============
*/
void bdConnectionStore::dispatchAll(bdConnectionStore *this)
{
  __int64 m_size; 
  _QWORD *v3; 
  __int64 v4; 
  __int64 v5; 
  unsigned int m_capacity; 
  bdHashMap<bdAddrHandleRefWrapper,bdReference<bdConnection>,bdAddrHandleRefWrapper>::Node **m_map; 
  bdHashMap<bdAddrHandleRefWrapper,bdReference<bdConnection>,bdAddrHandleRefWrapper>::Node *v8; 
  int v9; 
  _QWORD *v10; 
  _QWORD *v11; 
  _QWORD *v12; 
  signed __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  bdConnection **v16; 
  bdConnection *m_ptr; 
  unsigned int Hash; 
  unsigned int v19; 
  __int64 v20; 
  unsigned int v21; 
  bool v22; 
  bdConnection *v23; 
  __int64 v24; 
  _QWORD *v25; 
  int v26; 
  unsigned int v27; 
  bdReference<bdConnection> connection; 
  bdMutex *p_m_mutex; 

  v24 = -2i64;
  p_m_mutex = &this->m_mutex;
  bdMutex::lock(&this->m_mutex);
  m_size = this->m_connectionMap.m_size;
  v3 = NULL;
  v25 = NULL;
  v26 = m_size;
  v4 = 0i64;
  v27 = 0;
  if ( (_DWORD)m_size )
  {
    v3 = bdMemory::allocate(8 * m_size);
    v25 = v3;
  }
  if ( this->m_connectionMap.m_size )
  {
    v5 = 0i64;
    m_capacity = this->m_connectionMap.m_capacity;
    if ( m_capacity )
    {
      do
      {
        if ( this->m_connectionMap.m_map[v5] )
          break;
        v5 = (unsigned int)(v5 + 1);
      }
      while ( (unsigned int)v5 < m_capacity );
    }
    m_map = this->m_connectionMap.m_map;
    if ( m_map[v5] )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_connectionMap.m_numIterators, 1u);
      m_map = this->m_connectionMap.m_map;
      v4 = 0i64;
      v3 = v25;
    }
    v8 = m_map[v5];
    if ( v8 )
    {
      while ( 1 )
      {
        if ( (_DWORD)v4 != (_DWORD)m_size )
          goto LABEL_30;
        v9 = m_size;
        if ( !(_DWORD)m_size )
          v9 = 1;
        v10 = NULL;
        LODWORD(m_size) = v9 + m_size;
        if ( !(_DWORD)m_size )
          goto LABEL_21;
        v11 = bdMemory::allocate(8i64 * (unsigned int)m_size);
        v10 = v11;
        if ( (_DWORD)v4 )
          break;
LABEL_29:
        bdMemory::deallocate(v3);
        v3 = v10;
        v25 = v10;
        v26 = m_size;
LABEL_30:
        v16 = (bdConnection **)&v3[(unsigned int)v4];
        if ( v16 )
        {
          m_ptr = v8->m_data.m_ptr;
          *v16 = v8->m_data.m_ptr;
          if ( m_ptr )
          {
            _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
            LODWORD(v4) = v27;
            LODWORD(m_size) = v26;
            v3 = v25;
          }
        }
        v4 = (unsigned int)(v4 + 1);
        v27 = v4;
        if ( v8->m_next )
        {
          v8 = v8->m_next;
        }
        else
        {
          Hash = bdAddrHandleRefWrapper::getHash(&this->m_connectionMap.m_hashClass, &v8->m_key);
          v19 = this->m_connectionMap.m_capacity;
          v20 = (Hash & (v19 - 1)) + 1;
          if ( (unsigned int)v20 >= v19 )
          {
LABEL_38:
            _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_connectionMap.m_numIterators, 0xFFFFFFFF);
            v4 = (unsigned int)v4;
            v3 = v25;
            goto LABEL_39;
          }
          while ( 1 )
          {
            v8 = this->m_connectionMap.m_map[v20];
            if ( v8 )
              break;
            v20 = (unsigned int)(v20 + 1);
            if ( (unsigned int)v20 >= v19 )
              goto LABEL_38;
          }
        }
      }
      v12 = v11;
      v13 = (char *)v3 - (char *)v11;
      v14 = (unsigned int)v4;
      do
      {
        if ( v12 )
        {
          v15 = *(_QWORD *)((char *)v12 + v13);
          *v12 = v15;
          if ( v15 )
            _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 8), 1u);
        }
        ++v12;
        --v14;
      }
      while ( v14 );
      v4 = v27;
      v3 = v25;
LABEL_21:
      if ( (_DWORD)v4 )
      {
        do
        {
          if ( *v3 && _InterlockedExchangeAdd((volatile signed __int32 *)(*v3 + 8i64), 0xFFFFFFFF) == 1 )
          {
            if ( *v3 )
              (**(void (__fastcall ***)(_QWORD, __int64))*v3)(*v3, 1i64);
            *v3 = 0i64;
          }
          ++v3;
          --v4;
        }
        while ( v4 );
        LODWORD(v4) = v27;
        v3 = v25;
      }
      goto LABEL_29;
    }
LABEL_39:
    v21 = 0;
    if ( (_DWORD)v4 )
    {
      v22 = (_DWORD)v4 != 0;
      do
      {
        bdHandleAssert(v22, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdReference<class bdConnection> >::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed", v24);
        v23 = (bdConnection *)*v3;
        connection.m_ptr = v23;
        if ( v23 )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)&v23->m_refCount, 1u);
          v4 = v27;
        }
        bdDispatcher::process(&this->m_dispatcher, (bdReference<bdConnection>)&connection);
        ++v21;
        ++v3;
        v22 = v21 < (unsigned int)v4;
      }
      while ( v21 < (unsigned int)v4 );
      v3 = v25;
    }
  }
  if ( (_DWORD)v4 )
  {
    do
    {
      if ( *v3 && _InterlockedExchangeAdd((volatile signed __int32 *)(*v3 + 8i64), 0xFFFFFFFF) == 1 )
      {
        if ( *v3 )
          (**(void (__fastcall ***)(_QWORD, __int64))*v3)(*v3, 1i64);
        *v3 = 0i64;
      }
      ++v3;
      --v4;
    }
    while ( v4 );
    v3 = v25;
  }
  bdMemory::deallocate(v3);
  bdMutex::unlock(p_m_mutex);
}

/*
==============
bdConnectionStore::flush
==============
*/
__int64 bdConnectionStore::flush(bdConnectionStore *this, bdConnection *connection)
{
  __int64 result; 
  unsigned int v5; 
  bdAddrHandle *m_ptr; 
  volatile signed __int32 *p_m_refCount; 
  bdSocketRouter *m_socket; 
  int (__fastcall *sendTo)(bdSocketRouter *, const bdReference<bdAddrHandle>, void *, const unsigned int); 
  int v10; 
  __int64 v11[3]; 
  char v12[1280]; 

  v11[1] = -2i64;
  result = ((__int64 (__fastcall *)(bdConnection *, char *, __int64))connection->getDataToSend)(connection, v12, 1270i64);
  v5 = result;
  if ( (_DWORD)result )
  {
    m_ptr = bdConnection::getAddressHandle(connection)->m_ptr;
    p_m_refCount = (volatile signed __int32 *)&m_ptr->m_refCount;
    if ( m_ptr )
      _InterlockedExchangeAdd(p_m_refCount, 1u);
    m_socket = this->m_socket;
    sendTo = this->m_socket->sendTo;
    v11[0] = (__int64)m_ptr;
    if ( m_ptr )
      _InterlockedExchangeAdd(p_m_refCount, 1u);
    v10 = ((__int64 (__fastcall *)(bdSocketRouter *, __int64 *, char *, _QWORD))sendTo)(m_socket, v11, v12, v5);
    if ( v10 < 0 )
    {
      switch ( v10 )
      {
        case -7:
          bdLogMessage(BD_LOG_INFO, "info/", "bdConnection/connectionstore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdconnectionstore.cpp", "bdConnectionStore::flush", 0x26Bu, "Invalid address. Closing connection.");
          connection->close(connection);
          break;
        case -3:
          bdLogMessage(BD_LOG_WARNING, "warn/", "bdConnection/connectionstore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdconnectionstore.cpp", "bdConnectionStore::flush", 0x266u, "net subsystem error!");
          break;
        case -2:
          bdLogMessage(BD_LOG_WARNING, "warn/", "bdConnection/connectionstore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdconnectionstore.cpp", "bdConnectionStore::flush", 0x278u, "would block.");
          break;
        case -1:
          bdLogMessage(BD_LOG_WARNING, "warn/", "bdConnection/connectionstore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdconnectionstore.cpp", "bdConnectionStore::flush", 0x272u, "unknown error.");
          break;
      }
    }
    if ( m_ptr )
    {
      if ( _InterlockedExchangeAdd(p_m_refCount, 0xFFFFFFFF) == 1 )
        ((void (__fastcall *)(bdAddrHandle *, __int64))m_ptr->~bdReferencable)(m_ptr, 1i64);
    }
    return v5;
  }
  return result;
}

/*
==============
bdConnectionStore::flushAll
==============
*/
_BOOL8 bdConnectionStore::flushAll(bdConnectionStore *this)
{
  bool started; 
  unsigned int v5; 
  unsigned int m_capacity; 
  bdHashMap<bdAddrHandleRefWrapper,bdReference<bdConnection>,bdAddrHandleRefWrapper>::Node **m_map; 
  bdHashMap<bdAddrHandleRefWrapper,bdReference<bdConnection>,bdAddrHandleRefWrapper>::Node *v8; 
  bdConnection *m_ptr; 
  bdLoopbackConnection *v10; 
  bool m_isLoopback; 
  bdSocketRouter *m_socket; 
  bdDTLSAssociationStatus (__fastcall *getStatus)(bdSocketRouter *, const bdReference<bdAddrHandle>); 
  bdAddrHandle *v14; 
  int v15; 
  unsigned int v16; 
  int v17; 
  bdAddrHandle *v18; 
  bdAddrHandle *v19; 
  bdAddrHandle *v20; 
  signed __int32 v21; 
  bdLoopbackConnection **v22; 
  bdLinkedList<bdReference<bdConnection> >::Node *v23; 
  bdLinkedList<bdReference<bdConnection> >::Node *m_tail; 
  bdLinkedList<bdReference<bdConnection> >::Node *m_next; 
  unsigned int Hash; 
  unsigned int v27; 
  __int64 v28; 
  bool v29; 
  bdLinkedList<bdReference<bdConnection> >::Node *m_head; 
  bdConnection *v31; 
  bdAddrHandle *v32; 
  bdAddrHandleRefWrapper *v33; 
  bdAddrHandleRefWrapper *v34; 
  __int64 v35; 
  bdAddrHandleRefWrapper *v36; 
  bdAddrHandleRefWrapper *v37; 
  char v38; 
  bdAddrHandle *v39; 
  bdAddrHandle *v40; 
  bdAddrHandle *v41; 
  bdLinkedList<bdReference<bdConnection> >::Node *v42; 
  bdLinkedList<bdReference<bdConnection> >::Node *v43; 
  char v44; 
  char v45; 
  char v47; 
  bdReference<bdConnection> item; 
  bdReference<bdAddrHandle> v49; 
  bdQueue<bdReference<bdConnection> > v50; 
  bdReference<bdAddrHandle> addrHandle; 
  bdReference<bdAddrHandle> v52; 
  bdReference<bdAddrHandle> v53; 
  bdConnection *v54; 
  bdReference<bdCommonAddr> result; 
  bdAddrHandleRefWrapper v56; 
  bdLoopbackConnection **v57; 
  bdAddrHandle *v58; 
  bdReference<bdAddrHandle> handle; 
  int v60; 
  bdMutex *p_m_mutex; 
  __int64 v62; 
  char str[24]; 
  char v64[24]; 
  char v65[24]; 
  char v66[24]; 
  char v67[24]; 

  v62 = -2i64;
  _R14 = this;
  p_m_mutex = &this->m_mutex;
  bdMutex::lock(&this->m_mutex);
  started = 0;
  if ( (unsigned int)(_R14->m_status - 1) > 1 )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdConnection/connectionstore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdconnectionstore.cpp", "bdConnectionStore::flushAll", 0xEAu, "Cannot call flushAll unless class is initialized.");
    goto LABEL_133;
  }
  started = 1;
  v47 = 1;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+180h+var_128.m_list.m_head], xmm0
  }
  v50.m_list.m_size = 0;
  _R14->m_socket->pump(_R14->m_socket);
  if ( !_R14->m_connectionMap.m_size )
    goto LABEL_128;
  v5 = 0;
  m_capacity = _R14->m_connectionMap.m_capacity;
  if ( m_capacity )
  {
    do
    {
      if ( _R14->m_connectionMap.m_map[v5] )
        break;
      ++v5;
    }
    while ( v5 < m_capacity );
  }
  m_map = _R14->m_connectionMap.m_map;
  if ( m_map[v5] )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&_R14->m_connectionMap.m_numIterators, 1u);
    m_map = _R14->m_connectionMap.m_map;
  }
  v8 = m_map[v5];
  if ( !v8 )
    goto LABEL_128;
  do
  {
    m_ptr = v8->m_data.m_ptr;
    v10 = (bdLoopbackConnection *)m_ptr;
    item.m_ptr = v8->m_data.m_ptr;
    if ( m_ptr )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
      v10 = (bdLoopbackConnection *)item.m_ptr;
    }
    m_isLoopback = bdConnection::getAddress(v10, &result)->m_ptr->m_isLoopback;
    if ( result.m_ptr )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
      {
        if ( result.m_ptr )
          ((void (__fastcall *)(bdCommonAddr *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
        result.m_ptr = NULL;
      }
      v10 = (bdLoopbackConnection *)item.m_ptr;
    }
    if ( m_isLoopback )
    {
      if ( m_ptr )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
        v21 = _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF);
        v10 = (bdLoopbackConnection *)item.m_ptr;
        if ( v21 == 1 )
          ((void (__fastcall *)(bdConnection *, __int64))item.m_ptr->~bdReferencable)(item.m_ptr, 1i64);
      }
      bdLoopbackConnection::updateStatus(v10);
      if ( v10->getStatus(v10) == BD_HANDLE_TASK_FAILED )
      {
        v22 = (bdLoopbackConnection **)bdMemory::allocate(0x18ui64);
        v23 = (bdLinkedList<bdReference<bdConnection> >::Node *)v22;
        v57 = v22;
        if ( v22 )
        {
          *v22 = v10;
          _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
          v10 = (bdLoopbackConnection *)item.m_ptr;
        }
        else
        {
          v23 = NULL;
        }
        m_tail = v50.m_list.m_tail;
        if ( v50.m_list.m_tail )
        {
          v23->m_next = v50.m_list.m_tail->m_next;
          v23->m_prev = m_tail;
          m_next = m_tail->m_next;
          if ( m_next )
          {
            m_next->m_prev = v23;
          }
          else
          {
            bdHandleAssert(1, "node == m_tail", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdlinkedlist.inl", "bdLinkedList<class bdReference<class bdConnection> >::insertAfter", 0x176u, "bdLinkedList::insertAfter, node has no next entry, but is not the tail.");
            v50.m_list.m_tail = v23;
          }
          m_tail->m_next = v23;
        }
        else
        {
          v23->m_next = NULL;
          v23->m_prev = NULL;
          v50.m_list.m_head = v23;
          v50.m_list.m_tail = v23;
        }
        ++v50.m_list.m_size;
      }
    }
    else
    {
      m_socket = _R14->m_socket;
      getStatus = _R14->m_socket->getStatus;
      v14 = bdConnection::getAddressHandle(v10)->m_ptr;
      v58 = v14;
      if ( v14 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)&v14->m_refCount, 1u);
        v10 = (bdLoopbackConnection *)item.m_ptr;
      }
      v15 = ((__int64 (__fastcall *)(bdSocketRouter *, bdAddrHandle **))getStatus)(m_socket, &v58);
      v60 = v15;
      v16 = 0;
      if ( !v15 )
      {
        v20 = bdConnection::getAddressHandle(v10)->m_ptr;
        v53.m_ptr = v20;
        if ( v20 )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)&v20->m_refCount, 1u);
          v10 = (bdLoopbackConnection *)item.m_ptr;
        }
        bdAddressMap::addrToString(&v53, v65, 0x16ui64);
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdConnection/connectionstore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdconnectionstore.cpp", "bdConnectionStore::flushAll", 0xA3u, "Socket router reports socket idle. Disconnecting %s.", v65);
        if ( !v53.m_ptr )
          goto LABEL_50;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v53.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
        {
          if ( v53.m_ptr )
            ((void (__fastcall *)(bdAddrHandle *, __int64))v53.m_ptr->~bdReferencable)(v53.m_ptr, 1i64);
          v53.m_ptr = NULL;
        }
        goto LABEL_49;
      }
      v17 = v15 - 2;
      if ( v17 )
      {
        if ( v17 != 1 )
          goto LABEL_65;
        v18 = bdConnection::getAddressHandle(v10)->m_ptr;
        addrHandle.m_ptr = v18;
        if ( v18 )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)&v18->m_refCount, 1u);
          v10 = (bdLoopbackConnection *)item.m_ptr;
        }
        bdAddressMap::addrToString(&addrHandle, str, 0x16ui64);
        bdLogMessage(BD_LOG_INFO, "info/", "bdConnection/connectionstore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdconnectionstore.cpp", "bdConnectionStore::flushAll", 0x97u, "Socket router reports socket lost. Disconnecting %s.", str);
        if ( !addrHandle.m_ptr )
          goto LABEL_50;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&addrHandle.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
        {
          if ( addrHandle.m_ptr )
            ((void (__fastcall *)(bdAddrHandle *, __int64))addrHandle.m_ptr->~bdReferencable)(addrHandle.m_ptr, 1i64);
          addrHandle.m_ptr = NULL;
        }
        goto LABEL_49;
      }
      if ( _R14->m_config.m_maxFlushIterations )
      {
        do
        {
          if ( !bdConnectionStore::flush(_R14, v10) )
            break;
          ++v16;
        }
        while ( v16 < _R14->m_config.m_maxFlushIterations );
      }
      if ( v10->getStatus(v10) == BD_HANDLE_TASK_FAILED )
      {
        v19 = bdConnection::getAddressHandle(v10)->m_ptr;
        v52.m_ptr = v19;
        if ( v19 )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)&v19->m_refCount, 1u);
          v10 = (bdLoopbackConnection *)item.m_ptr;
        }
        bdAddressMap::addrToString(&v52, v64, 0x16ui64);
        bdLogMessage(BD_LOG_INFO, "info/", "bdConnection/connectionstore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdconnectionstore.cpp", "bdConnectionStore::flushAll", 0x8Au, "Connection state disconnected. Disconnecting %s.", v64);
        if ( !v52.m_ptr )
          goto LABEL_50;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v52.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
        {
          if ( v52.m_ptr )
            ((void (__fastcall *)(bdAddrHandle *, __int64))v52.m_ptr->~bdReferencable)(v52.m_ptr, 1i64);
          v52.m_ptr = NULL;
        }
LABEL_49:
        v10 = (bdLoopbackConnection *)item.m_ptr;
LABEL_50:
        bdQueue<bdReference<bdConnection>>::enqueue(&v50, &item);
      }
    }
LABEL_65:
    if ( v8->m_next )
    {
      v8 = v8->m_next;
    }
    else
    {
      Hash = bdAddrHandleRefWrapper::getHash(&_R14->m_connectionMap.m_hashClass, &v8->m_key);
      v27 = _R14->m_connectionMap.m_capacity;
      v28 = (Hash & (v27 - 1)) + 1;
      if ( (unsigned int)v28 >= v27 )
      {
LABEL_70:
        v8 = NULL;
        _InterlockedExchangeAdd((volatile signed __int32 *)&_R14->m_connectionMap.m_numIterators, 0xFFFFFFFF);
        v10 = (bdLoopbackConnection *)item.m_ptr;
      }
      else
      {
        while ( 1 )
        {
          v8 = _R14->m_connectionMap.m_map[v28];
          if ( v8 )
            break;
          v28 = (unsigned int)(v28 + 1);
          if ( (unsigned int)v28 >= v27 )
            goto LABEL_70;
        }
      }
    }
    if ( v10 && _InterlockedExchangeAdd((volatile signed __int32 *)&v10->m_refCount, 0xFFFFFFFF) == 1 )
      ((void (__fastcall *)(bdConnection *, __int64))item.m_ptr->~bdReferencable)(item.m_ptr, 1i64);
  }
  while ( v8 );
  if ( v50.m_list.m_size )
  {
    do
    {
      v29 = v50.m_list.m_size != 0;
      bdHandleAssert(v50.m_list.m_size != 0, "getSize() > 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdqueue.inl", "bdQueue<class bdReference<class bdConnection> >::peek", 0x19u, "bdQueue::dequeue, queue empty, can't peek.");
      m_head = v50.m_list.m_head;
      bdHandleAssert(v50.m_list.m_head != NULL, "m_head != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdlinkedlist.inl", "bdLinkedList<class bdReference<class bdConnection> >::getHead", 0x42u, "bdLinkedList::GetHead, list is empty so has no head.");
      v31 = m_head->m_data.m_ptr;
      v54 = v31;
      if ( v31 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)&v31->m_refCount, 1u);
        v31 = v54;
      }
      v32 = bdConnection::getAddressHandle(v31)->m_ptr;
      v49.m_ptr = v32;
      if ( v32 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)&v32->m_refCount, 1u);
        v31 = v54;
      }
      v31->close(v31);
      handle.m_ptr = v49.m_ptr;
      if ( v49.m_ptr )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v49.m_ptr->m_refCount, 1u);
      bdAddrHandleRefWrapper::bdAddrHandleRefWrapper(&v56, (bdReference<bdAddrHandle>)&handle);
      v34 = v33;
      bdHandleAssert(_R14->m_connectionMap.m_numIterators.m_value._My_val == 0, "(m_numIterators == 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdhashmap.inl", "bdHashMap<class bdAddrHandleRefWrapper,class bdReference<class bdConnection>,class bdAddrHandleRefWrapper>::remove", 0xA5u, "bdHashMap::remove, another iterator is being held while removing from hashmap");
      v35 = bdAddrHandleRefWrapper::getHash(&_R14->m_connectionMap.m_hashClass, v34) & (_R14->m_connectionMap.m_capacity - 1);
      v36 = (bdAddrHandleRefWrapper *)_R14->m_connectionMap.m_map[v35];
      v37 = NULL;
      if ( v36 )
      {
        while ( !bdAddrHandleRefWrapper::operator==(v34, v36 + 1) )
        {
          v37 = v36;
          v36 = (bdAddrHandleRefWrapper *)v36[2].m_handle.m_ptr;
          if ( !v36 )
            goto LABEL_85;
        }
        v39 = v36[2].m_handle.m_ptr;
        if ( v37 )
          v37[2].m_handle.m_ptr = v39;
        else
          _R14->m_connectionMap.m_map[v35] = (bdHashMap<bdAddrHandleRefWrapper,bdReference<bdConnection>,bdAddrHandleRefWrapper>::Node *)v39;
        v40 = v36[1].m_handle.m_ptr;
        if ( v40 && _InterlockedExchangeAdd((volatile signed __int32 *)&v40->m_refCount, 0xFFFFFFFF) == 1 )
        {
          v41 = v36[1].m_handle.m_ptr;
          if ( v41 )
            ((void (__fastcall *)(bdAddrHandle *, __int64))v41->~bdReferencable)(v41, 1i64);
          v36[1].m_handle.m_ptr = NULL;
        }
        if ( v36->m_handle.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v36->m_handle.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
        {
          if ( v36->m_handle.m_ptr )
            ((void (__fastcall *)(bdAddrHandle *, __int64))v36->m_handle.m_ptr->~bdReferencable)(v36->m_handle.m_ptr, 1i64);
          v36->m_handle.m_ptr = NULL;
        }
        bdMemory::deallocate(v36);
        --_R14->m_connectionMap.m_size;
        v38 = 1;
      }
      else
      {
LABEL_85:
        v38 = 0;
      }
      if ( v56.m_handle.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v56.m_handle.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
      {
        if ( v56.m_handle.m_ptr )
          ((void (__fastcall *)(bdAddrHandle *, __int64))v56.m_handle.m_ptr->~bdReferencable)(v56.m_handle.m_ptr, 1i64);
        v56.m_handle.m_ptr = NULL;
      }
      if ( v38 )
      {
        started = v47;
      }
      else
      {
        bdAddressMap::addrToString(&v49, v66, 0x16ui64);
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdConnection/connectionstore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdconnectionstore.cpp", "bdConnectionStore::flushAll", 0xC6u, "Failed to remove addr [%s] from connection map", v66);
        started = 0;
        v47 = 0;
      }
      if ( !_R14->m_socket->disconnect(_R14->m_socket, &v49) )
      {
        bdAddressMap::addrToString(&v49, v67, 0x16ui64);
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdConnection/connectionstore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdconnectionstore.cpp", "bdConnectionStore::flushAll", 0xD3u, "Failed to disconnect secure association for addr [%s]", v67);
        started = 0;
        v47 = 0;
      }
      bdHandleAssert(v29, "getSize() > 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdqueue.inl", "bdQueue<class bdReference<class bdConnection> >::dequeue", 0x12u, "bdQueue::dequeue, queue empty, can't dequeue.");
      v42 = v50.m_list.m_head;
      v43 = v50.m_list.m_head->m_next;
      v50.m_list.m_head = v43;
      if ( v42 == v50.m_list.m_tail )
        v50.m_list.m_tail = v42->m_prev;
      else
        v43->m_prev = v42->m_prev;
      if ( v42->m_data.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v42->m_data.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
      {
        if ( v42->m_data.m_ptr )
          ((void (__fastcall *)(bdConnection *, __int64))v42->m_data.m_ptr->~bdReferencable)(v42->m_data.m_ptr, 1i64);
        v42->m_data.m_ptr = NULL;
      }
      bdMemory::deallocate(v42);
      --v50.m_list.m_size;
      if ( v49.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v49.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
      {
        if ( v49.m_ptr )
          ((void (__fastcall *)(bdAddrHandle *, __int64))v49.m_ptr->~bdReferencable)(v49.m_ptr, 1i64);
        v49.m_ptr = NULL;
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v54->m_refCount, 0xFFFFFFFF) == 1 )
        ((void (__fastcall *)(bdConnection *, __int64))v54->~bdReferencable)(v54, 1i64);
    }
    while ( v50.m_list.m_size );
  }
  else
  {
    started = 1;
  }
LABEL_128:
  if ( _R14->m_status == BD_CONNECTION_STORE_SHUTTING_DOWN )
  {
    if ( !_R14->m_connectionMap.m_size )
      goto LABEL_131;
    *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&_R14->m_shutdownTimer);
    __asm { vcomiss xmm0, dword ptr [r14+5Ch] }
    if ( !(v44 | v45) )
LABEL_131:
      started = bdConnectionStore::startShutdown(_R14, BD_CONNECTION_STORE_SHUTDOWN_IMMEDIATE);
  }
  bdLinkedList<bdReference<bdConnection>>::~bdLinkedList<bdReference<bdConnection>>(&v50.m_list);
LABEL_133:
  bdMutex::unlock(p_m_mutex);
  return started;
}

/*
==============
bdConnectionStore::flushPrepared
==============
*/
__int64 bdConnectionStore::flushPrepared(bdConnectionStore *this, bdConnection *connection, bdSocketRouterData *headers, const unsigned int numHeaders)
{
  bdSocketRouter *m_socket; 
  int v6; 
  unsigned int v8; 

  m_socket = this->m_socket;
  v8 = 0;
  v6 = m_socket->sendPreparedData(m_socket, headers, numHeaders, &v8);
  if ( v6 < 0 )
  {
    switch ( v6 )
    {
      case -7:
        bdLogMessage(BD_LOG_INFO, "info/", "bdConnection/connectionstore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdconnectionstore.cpp", "bdConnectionStore::flushPrepared", 0x2BEu, "Invalid address. Closing connection.");
        connection->close(connection);
        break;
      case -3:
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdConnection/connectionstore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdconnectionstore.cpp", "bdConnectionStore::flushPrepared", 0x2B9u, "net subsystem error!");
        return v8;
      case -2:
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdConnection/connectionstore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdconnectionstore.cpp", "bdConnectionStore::flushPrepared", 0x2CBu, "would block.");
        return v8;
      case -1:
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdConnection/connectionstore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdconnectionstore.cpp", "bdConnectionStore::flushPrepared", 0x2C5u, "unknown error.");
        return v8;
    }
  }
  return v8;
}

/*
==============
bdConnectionStore::getConfig
==============
*/
void bdConnectionStore::getConfig(bdConnectionStore *this, bdConnectionStoreConfig *config)
{
  __asm
  {
    vmovups xmm0, xmmword ptr [rcx+58h]
    vmovups xmmword ptr [rdx], xmm0
  }
}

/*
==============
bdConnectionStore::getStatus
==============
*/
__int64 bdConnectionStore::getStatus(bdConnectionStore *this)
{
  return (unsigned int)this->m_status;
}

/*
==============
bdConnectionStore::init
==============
*/
__int64 bdConnectionStore::init(bdConnectionStore *this, bdSocketRouter *socket, const bdConnectionStoreConfig *config)
{
  bdMutex *p_m_mutex; 
  unsigned __int8 v7; 

  _R14 = config;
  _RDI = this;
  p_m_mutex = &this->m_mutex;
  bdMutex::lock(&this->m_mutex);
  v7 = 1;
  if ( _RDI->m_status )
  {
    v7 = 0;
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdConnection/connectionstore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdconnectionstore.cpp", "bdConnectionStore::init", 0x31u, "init() called multiple times.");
  }
  else if ( socket )
  {
    _RDI->m_socket = socket;
    _RDI->m_addrMap = bdSocketRouter::getAddressMap(socket);
    __asm
    {
      vmovups xmm0, xmmword ptr [r14]
      vmovups xmmword ptr [rdi+58h], xmm0
    }
    _RDI->m_status = BD_CONNECTION_STORE_INITIALIZED;
  }
  else
  {
    v7 = 0;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdConnection/connectionstore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdconnectionstore.cpp", "bdConnectionStore::init", 0x36u, "A valid socket router pointer is required by this class");
  }
  bdMutex::unlock(p_m_mutex);
  return v7;
}

/*
==============
bdConnectionStore::prepareFlush
==============
*/
__int64 bdConnectionStore::prepareFlush(bdConnectionStore *this, bdConnection *connection, unsigned __int8 *outData, bdSocketRouterData *header)
{
  __int64 result; 
  unsigned int v9; 
  bdAddrHandle *m_ptr; 
  volatile signed __int32 *p_m_refCount; 
  bdSocketRouter *m_socket; 
  int (__fastcall *prepareSendToData)(bdSocketRouter *, const bdReference<bdAddrHandle>, const void *, const unsigned int, void *, const unsigned int, bdSocketRouterData *); 
  __int64 v14[3]; 
  char v15[1280]; 

  v14[1] = -2i64;
  result = ((__int64 (__fastcall *)(bdConnection *, char *, __int64))connection->getDataToSend)(connection, v15, 1270i64);
  v9 = result;
  if ( (_DWORD)result )
  {
    m_ptr = bdConnection::getAddressHandle(connection)->m_ptr;
    p_m_refCount = (volatile signed __int32 *)&m_ptr->m_refCount;
    if ( m_ptr )
      _InterlockedExchangeAdd(p_m_refCount, 1u);
    m_socket = this->m_socket;
    prepareSendToData = this->m_socket->prepareSendToData;
    v14[0] = (__int64)m_ptr;
    if ( m_ptr )
      _InterlockedExchangeAdd(p_m_refCount, 1u);
    if ( ((int (__fastcall *)(bdSocketRouter *, __int64 *, char *, _QWORD, unsigned __int8 *, int, bdSocketRouterData *))prepareSendToData)(m_socket, v14, v15, v9, outData, 1288, header) < 0 )
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdConnection/connectionstore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdconnectionstore.cpp", "bdConnectionStore::prepareFlush", 0x2A2u, "Failed to sendPreparedData()");
    if ( m_ptr )
    {
      if ( _InterlockedExchangeAdd(p_m_refCount, 0xFFFFFFFF) == 1 )
        ((void (__fastcall *)(bdAddrHandle *, __int64))m_ptr->~bdReferencable)(m_ptr, 1i64);
    }
    return v9;
  }
  return result;
}

/*
==============
bdConnectionStore::receiveAll
==============
*/
__int64 bdConnectionStore::receiveAll(bdConnectionStore *this)
{
  bdMutex *p_m_mutex; 
  unsigned __int8 v3; 
  unsigned int v4; 
  int v5; 
  unsigned int v6; 
  char v7; 
  bdConnection *m_ptr; 
  int v9; 
  bool v10; 
  bool v11; 
  const bdReference<bdAddrHandle> *AddressHandle; 
  bdAddr *RealAddr; 
  unsigned int v14; 
  bdUnicastConnection *v16; 
  bdConnection *v17; 
  bdConnection *v18; 
  bool v19; 
  __int64 v20; 
  bool v21; 
  unsigned int v22; 
  bdReference<bdAddrHandle> addr; 
  __int64 v24; 
  bdReference<bdConnection> value; 
  bdAddrHandleRefWrapper key; 
  bdAddrHandleRefWrapper v27; 
  bdReference<bdAddrHandle> handle; 
  bdReference<bdAddrHandle> v29; 
  bdReference<bdConnection> v30; 
  bdMutex *v31; 
  __int64 v32; 
  bdUnicastConnection *v33; 
  bdUnicastConnection v34; 
  bdAddr result; 
  unsigned __int8 buffer[1296]; 

  v32 = -2i64;
  LODWORD(v24) = 0;
  p_m_mutex = &this->m_mutex;
  v31 = &this->m_mutex;
  bdMutex::lock(&this->m_mutex);
  v3 = 1;
  if ( (unsigned int)(this->m_status - 1) <= 1 )
  {
    v4 = 0;
    v22 = 0;
    do
    {
      addr.m_ptr = NULL;
      v5 = this->m_socket->receiveFrom(this->m_socket, &addr, buffer, 1288u);
      v6 = v5;
      v21 = v5 > 0;
      if ( v5 >= 0 )
      {
        m_ptr = NULL;
        value.m_ptr = NULL;
        if ( addr.m_ptr )
        {
          handle.m_ptr = addr.m_ptr;
          _InterlockedExchangeAdd((volatile signed __int32 *)&addr.m_ptr->m_refCount, 1u);
          bdAddrHandleRefWrapper::bdAddrHandleRefWrapper(&key, (bdReference<bdAddrHandle>)&handle);
          v9 = v24 | 1;
          LODWORD(v24) = v24 | 1;
          v10 = bdHashMap<bdAddrHandleRefWrapper,bdReference<bdConnection>,bdAddrHandleRefWrapper>::get(&this->m_connectionMap, &key, &value);
          m_ptr = value.m_ptr;
          v11 = v10 && value.m_ptr && value.m_ptr->receive(value.m_ptr, buffer, v6);
          LODWORD(v24) = v9 & 0xFFFFFFFE;
          if ( key.m_handle.m_ptr )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)&key.m_handle.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
            {
              if ( key.m_handle.m_ptr )
                ((void (__fastcall *)(bdAddrHandle *, __int64))key.m_handle.m_ptr->~bdReferencable)(key.m_handle.m_ptr, 1i64);
              key.m_handle.m_ptr = NULL;
            }
            m_ptr = value.m_ptr;
          }
          if ( v11 )
          {
            AddressHandle = bdConnection::getAddressHandle(m_ptr);
            RealAddr = (bdAddr *)bdAddrHandle::getRealAddr(AddressHandle->m_ptr, &result);
            if ( !bdSockAddr::isValid(&RealAddr->m_address) )
              bdConnection::setAddressHandle(m_ptr, &addr);
          }
          else if ( this->m_status != BD_CONNECTION_STORE_SHUTTING_DOWN )
          {
            bdUnicastConnection::bdUnicastConnection(&v34, this->m_addrMap, this->m_config.m_acceptOutOfOrder);
            bdConnection::setAddressHandle(&v34, &addr);
            if ( bdUnicastConnection::receive(&v34, buffer, v6) )
            {
              if ( bdUnicastConnection::getStatus(&v34) == BD_NOT_CONNECTED )
              {
                v16 = (bdUnicastConnection *)bdMemory::allocate(0x180ui64);
                v33 = v16;
                if ( v16 )
                {
                  bdUnicastConnection::bdUnicastConnection(v16, this->m_addrMap, this->m_config.m_acceptOutOfOrder);
                  v18 = v17;
                }
                else
                {
                  v18 = NULL;
                }
                v30.m_ptr = v18;
                if ( v18 )
                  _InterlockedExchangeAdd((volatile signed __int32 *)&v18->m_refCount, 1u);
                bdConnection::setAddressHandle(v18, &addr);
                if ( v18->receive(v18, buffer, v6) && v18->getStatus(v18) == BD_NOT_CONNECTED )
                {
                  v29.m_ptr = addr.m_ptr;
                  if ( addr.m_ptr )
                    _InterlockedExchangeAdd((volatile signed __int32 *)&addr.m_ptr->m_refCount, 1u);
                  bdAddrHandleRefWrapper::bdAddrHandleRefWrapper(&v27, (bdReference<bdAddrHandle>)&v29);
                  v19 = bdHashMap<bdAddrHandleRefWrapper,bdReference<bdConnection>,bdAddrHandleRefWrapper>::put(&this->m_connectionMap, &v27, &v30);
                  if ( v27.m_handle.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v27.m_handle.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
                  {
                    if ( v27.m_handle.m_ptr )
                      ((void (__fastcall *)(bdAddrHandle *, __int64))v27.m_handle.m_ptr->~bdReferencable)(v27.m_handle.m_ptr, 1i64);
                    v27.m_handle.m_ptr = NULL;
                  }
                  if ( v19 )
                    bdLogMessage(BD_LOG_INFO, "info/", "bdConnection/connectionstore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdconnectionstore.cpp", "bdConnectionStore::receiveAll", 0x183u, "New incoming connection created.");
                }
                if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v18->m_refCount, 0xFFFFFFFF) == 1 )
                  ((void (__fastcall *)(bdConnection *, __int64))v18->~bdReferencable)(v18, 1i64);
                m_ptr = value.m_ptr;
              }
              else
              {
                bdConnectionStore::flush(this, &v34);
              }
            }
            else
            {
              v3 = 0;
            }
            bdUnicastConnection::~bdUnicastConnection(&v34);
          }
          v4 = v22;
        }
        else
        {
          bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdConnection/connectionstore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdconnectionstore.cpp", "bdConnectionStore::receiveAll", 0x195u, "Data & null addr handle ref received from socket route receiveFrom, ignoring.");
        }
        if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
          ((void (__fastcall *)(bdConnection *, __int64))value.m_ptr->~bdReferencable)(value.m_ptr, 1i64);
        v7 = v21;
      }
      else
      {
        v7 = 0;
        switch ( v5 )
        {
          case -13:
          case -12:
          case -11:
          case -10:
          case -9:
          case -8:
          case -7:
          case -6:
          case -4:
          case -3:
          case -1:
            LODWORD(v20) = v5;
            bdLogMessage(BD_LOG_WARNING, "warn/", "bdConnection/connectionstore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdconnectionstore.cpp", "bdConnectionStore::receiveAll", 0x130u, "Encountered error: %i while receiving from the socket router ", v20);
            v3 = 0;
            break;
          case -5:
            v3 = 1;
            v7 = 1;
            break;
          case -2:
            v3 = 1;
            break;
          case 0:
          case 1:
            bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdConnection/connectionstore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdconnectionstore.cpp", "bdConnectionStore::receiveAll", 0x137u, "These cannot occur");
            v3 = 0;
            break;
          default:
            break;
        }
      }
      if ( addr.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&addr.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && addr.m_ptr )
        ((void (__fastcall *)(bdAddrHandle *, __int64))addr.m_ptr->~bdReferencable)(addr.m_ptr, 1i64);
      if ( v7 != 1 )
        break;
      v14 = v4++;
      v22 = v4;
    }
    while ( v14 < this->m_config.m_maxReceiveIterations );
    p_m_mutex = v31;
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdConnection/connectionstore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdconnectionstore.cpp", "bdConnectionStore::receiveAll", 0x19Eu, "Cannot call receiveAll unless class is initialized.");
    v3 = 0;
  }
  bdMutex::unlock(p_m_mutex);
  return v3;
}

/*
==============
bdConnectionStore::registerDispatchInterceptor
==============
*/
void bdConnectionStore::registerDispatchInterceptor(bdConnectionStore *this, bdDispatchInterceptor *const interceptor)
{
  bdDispatcher::registerInterceptor(&this->m_dispatcher, interceptor);
}

/*
==============
bdConnectionStore::setConfig
==============
*/
void bdConnectionStore::setConfig(bdConnectionStore *this, bdConnectionStoreConfig *config)
{
  __asm
  {
    vmovups xmm0, xmmword ptr [rdx]
    vmovups xmmword ptr [rcx+58h], xmm0
  }
}

/*
==============
bdConnectionStore::startShutdown
==============
*/
char bdConnectionStore::startShutdown(bdConnectionStore *this, const bdConnectionStore::bdConnectionStoreShutdownType shutdownType)
{
  bdConnectionStore::bdConnectionStoreStatus m_status; 
  bdHashMap<bdAddrHandleRefWrapper,bdReference<bdConnection>,bdAddrHandleRefWrapper>::Node *Iterator; 
  volatile signed __int32 *m_ptr; 
  unsigned int Hash; 
  unsigned int m_capacity; 
  __int64 v8; 
  bdHashMap<bdAddrHandleRefWrapper,bdReference<bdConnection>,bdAddrHandleRefWrapper>::Node *v10; 
  volatile signed __int32 *v11; 
  unsigned int v12; 
  unsigned int v13; 
  __int64 v14; 
  bdConnection *v15; 
  bdConnection *v16; 

  m_status = this->m_status;
  if ( m_status == BD_CONNECTION_STORE_UNINITIALIZED )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdConnection/connectionstore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdconnectionstore.cpp", "bdConnectionStore::startShutdown", 0x1F3u, "Class is uninitialized, nothing for shutdown to do.");
    return 0;
  }
  if ( shutdownType )
  {
    if ( shutdownType == BD_CONNECTION_STORE_SHUTDOWN_IMMEDIATE )
    {
      Iterator = (bdHashMap<bdAddrHandleRefWrapper,bdReference<bdConnection>,bdAddrHandleRefWrapper>::Node *)bdHashMap<bdAddrHandleRefWrapper,bdReference<bdConnection>,bdAddrHandleRefWrapper>::getIterator(&this->m_connectionMap);
      while ( Iterator )
      {
        m_ptr = (volatile signed __int32 *)Iterator->m_data.m_ptr;
        v15 = Iterator->m_data.m_ptr;
        if ( Iterator->m_data.m_ptr )
        {
          _InterlockedExchangeAdd(m_ptr + 2, 1u);
          m_ptr = (volatile signed __int32 *)v15;
        }
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)m_ptr + 56i64))(m_ptr);
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)m_ptr + 64i64))(m_ptr);
        if ( Iterator->m_next )
        {
          Iterator = Iterator->m_next;
        }
        else
        {
          Hash = bdAddrHandleRefWrapper::getHash(&this->m_connectionMap.m_hashClass, &Iterator->m_key);
          m_capacity = this->m_connectionMap.m_capacity;
          v8 = (Hash & (m_capacity - 1)) + 1;
          if ( (unsigned int)v8 >= m_capacity )
          {
LABEL_12:
            Iterator = NULL;
            _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_connectionMap.m_numIterators, 0xFFFFFFFF);
            m_ptr = (volatile signed __int32 *)v15;
          }
          else
          {
            while ( 1 )
            {
              Iterator = this->m_connectionMap.m_map[v8];
              if ( Iterator )
                break;
              v8 = (unsigned int)(v8 + 1);
              if ( (unsigned int)v8 >= m_capacity )
                goto LABEL_12;
            }
          }
        }
        if ( !_InterlockedDecrement(m_ptr + 2) )
          ((void (__fastcall *)(bdConnection *, __int64))v15->~bdReferencable)(v15, 1i64);
      }
      bdHashMap<bdAddrHandleRefWrapper,bdReference<bdConnection>,bdAddrHandleRefWrapper>::clear(&this->m_connectionMap);
      bdDispatcher::reset(&this->m_dispatcher);
      this->m_socket = NULL;
      this->m_status = BD_CONNECTION_STORE_UNINITIALIZED;
      bdStopwatch::reset(&this->m_shutdownTimer);
      this->m_addrMap = NULL;
      bdConnectionStoreConfig::reset(&this->m_config);
      return 1;
    }
    return 0;
  }
  if ( ((m_status - 1) & 0xFFFFFFFD) != 0 )
  {
    if ( m_status == BD_CONNECTION_STORE_SHUTTING_DOWN )
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdConnection/connectionstore", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdconnection\\bdconnectionstore.cpp", "bdConnectionStore::startShutdown", 0x1D6u, "Already shutting down; Shutdown call ignored.");
    return 0;
  }
  v10 = (bdHashMap<bdAddrHandleRefWrapper,bdReference<bdConnection>,bdAddrHandleRefWrapper>::Node *)bdHashMap<bdAddrHandleRefWrapper,bdReference<bdConnection>,bdAddrHandleRefWrapper>::getIterator(&this->m_connectionMap);
  while ( v10 )
  {
    v11 = (volatile signed __int32 *)v10->m_data.m_ptr;
    v16 = v10->m_data.m_ptr;
    if ( v10->m_data.m_ptr )
    {
      _InterlockedExchangeAdd(v11 + 2, 1u);
      v11 = (volatile signed __int32 *)v16;
    }
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 56i64))(v11);
    if ( v10->m_next )
    {
      v10 = v10->m_next;
    }
    else
    {
      v12 = bdAddrHandleRefWrapper::getHash(&this->m_connectionMap.m_hashClass, &v10->m_key);
      v13 = this->m_connectionMap.m_capacity;
      v14 = (v12 & (v13 - 1)) + 1;
      if ( (unsigned int)v14 >= v13 )
      {
LABEL_28:
        v10 = NULL;
        _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_connectionMap.m_numIterators, 0xFFFFFFFF);
        v11 = (volatile signed __int32 *)v16;
      }
      else
      {
        while ( 1 )
        {
          v10 = this->m_connectionMap.m_map[v14];
          if ( v10 )
            break;
          v14 = (unsigned int)(v14 + 1);
          if ( (unsigned int)v14 >= v13 )
            goto LABEL_28;
        }
      }
    }
    if ( !_InterlockedDecrement(v11 + 2) )
      ((void (__fastcall *)(bdConnection *, __int64))v16->~bdReferencable)(v16, 1i64);
  }
  this->m_status = BD_CONNECTION_STORE_SHUTTING_DOWN;
  bdStopwatch::start(&this->m_shutdownTimer);
  return 1;
}

/*
==============
bdConnectionStore::unregisterDispatchInterceptor
==============
*/
void bdConnectionStore::unregisterDispatchInterceptor(bdConnectionStore *this, bdDispatchInterceptor *const interceptor)
{
  bdDispatcher::unregisterInterceptor(&this->m_dispatcher, interceptor);
}

