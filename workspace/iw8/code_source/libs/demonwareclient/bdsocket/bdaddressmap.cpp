/*
==============
bdAddressMap::findAddrHandle
==============
*/

bool __fastcall bdAddressMap::findAddrHandle(bdAddressMap *this, const bdReference<bdCommonAddr> ca, const bdSecurityID *id, bdReference<bdAddrHandle> *addrHandle)
{
  return ?findAddrHandle@bdAddressMap@@QEBA_NV?$bdReference@VbdCommonAddr@@@@AEBVbdSecurityID@@AEAV?$bdReference@VbdAddrHandle@@@@@Z(this, ca, id, addrHandle);
}

/*
==============
bdAddressMap::clear
==============
*/

void __fastcall bdAddressMap::clear(bdAddressMap *this)
{
  ?clear@bdAddressMap@@QEAAXXZ(this);
}

/*
==============
bdAddressMap::unregisterRealAddr
==============
*/

bool __fastcall bdAddressMap::unregisterRealAddr(bdAddressMap *this, const bdAddr *realAddr)
{
  return ?unregisterRealAddr@bdAddressMap@@IEAA_NAEBVbdAddr@@@Z(this, realAddr);
}

/*
==============
bdAddressMap::findAddrHandleInternal
==============
*/

bool __fastcall bdAddressMap::findAddrHandleInternal(bdAddressMap *this, const bdReference<bdCommonAddr> *ca, const bdSecurityID *id, bdReference<bdAddrHandle> *addrHandle)
{
  return ?findAddrHandleInternal@bdAddressMap@@IEBA_NAEBV?$bdReference@VbdCommonAddr@@@@AEBVbdSecurityID@@AEAV?$bdReference@VbdAddrHandle@@@@@Z(this, ca, id, addrHandle);
}

/*
==============
bdAddressMap::bdAddressMap
==============
*/

void __fastcall bdAddressMap::bdAddressMap(bdAddressMap *this)
{
  ??0bdAddressMap@@QEAA@XZ(this);
}

/*
==============
bdAddressMap::addrToCommonAddr
==============
*/

bool __fastcall bdAddressMap::addrToCommonAddr(bdAddressMap *this, const bdReference<bdAddrHandle> *addrHandle, bdReference<bdCommonAddr> *ca, bdSecurityID *id)
{
  return ?addrToCommonAddr@bdAddressMap@@QEBA_NAEBV?$bdReference@VbdAddrHandle@@@@AEAV?$bdReference@VbdCommonAddr@@@@AEAVbdSecurityID@@@Z(this, addrHandle, ca, id);
}

/*
==============
bdAddressMap::addrToString
==============
*/

unsigned __int64 __fastcall bdAddressMap::addrToString(const bdReference<bdAddrHandle> *addrHandle, char *const str, const unsigned __int64 size)
{
  return ?addrToString@bdAddressMap@@SA_KAEBV?$bdReference@VbdAddrHandle@@@@QEAD_K@Z(addrHandle, str, size);
}

/*
==============
bdAddressMap::unregisterAddr
==============
*/

bool __fastcall bdAddressMap::unregisterAddr(bdAddressMap *this, const bdReference<bdAddrHandle> *addrHandle)
{
  return ?unregisterAddr@bdAddressMap@@QEAA_NAEBV?$bdReference@VbdAddrHandle@@@@@Z(this, addrHandle);
}

/*
==============
bdAddressMap::commonAddrToAddr
==============
*/

bool __fastcall bdAddressMap::commonAddrToAddr(bdAddressMap *this, const bdReference<bdCommonAddr> ca, const bdSecurityID *id, bdReference<bdAddrHandle> *addrHandle)
{
  return ?commonAddrToAddr@bdAddressMap@@QEAA_NV?$bdReference@VbdCommonAddr@@@@AEBVbdSecurityID@@AEAV?$bdReference@VbdAddrHandle@@@@@Z(this, ca, id, addrHandle);
}

/*
==============
bdAddressMap::getAddrHandle
==============
*/

bool __fastcall bdAddressMap::getAddrHandle(bdAddressMap *this, const bdReference<bdCommonAddr> ca, const bdSecurityID *id, bdReference<bdAddrHandle> *addrHandle)
{
  return ?getAddrHandle@bdAddressMap@@QEAA_NV?$bdReference@VbdCommonAddr@@@@AEBVbdSecurityID@@AEAV?$bdReference@VbdAddrHandle@@@@@Z(this, ca, id, addrHandle);
}

/*
==============
bdAddressMap::bdAddressMap
==============
*/
void bdAddressMap::bdAddressMap(bdAddressMap *this)
{
  this->m_addrHandles.m_data = NULL;
  *(_QWORD *)&this->m_addrHandles.m_capacity = 0i64;
  bdSharedMutex::bdSharedMutex(&this->m_mutex);
}

/*
==============
bdAddressMap::addrToCommonAddr
==============
*/
char bdAddressMap::addrToCommonAddr(bdAddressMap *this, const bdReference<bdAddrHandle> *addrHandle, bdReference<bdCommonAddr> *ca, bdSecurityID *id)
{
  bdCommonAddr *m_ptr; 
  bdCommonAddr *v9; 
  bdCommonAddr *v10; 

  if ( !addrHandle->m_ptr )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket/bdAddressMap", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdaddressmap.cpp", "bdAddressMap::addrToCommonAddr", 0x95u, "A invalid addr handle ref cannot be used.");
    return 0;
  }
  m_ptr = addrHandle->m_ptr->m_endpoint.m_ca.m_ptr;
  v10 = m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  if ( &v10 != (bdCommonAddr **)ca )
  {
    if ( ca->m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&ca->m_ptr->m_refCount, 0xFFFFFFFF) == 1 && ca->m_ptr )
      ((void (__fastcall *)(bdCommonAddr *, __int64))ca->m_ptr->~bdReferencable)(ca->m_ptr, 1i64);
    v9 = v10;
    ca->m_ptr = v10;
    if ( !v9 )
      goto LABEL_15;
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  }
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdCommonAddr *, __int64))m_ptr->~bdReferencable)(m_ptr, 1i64);
LABEL_15:
  *id = addrHandle->m_ptr->m_endpoint.m_secID;
  if ( !ca->m_ptr )
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/bdAddressMap", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdaddressmap.cpp", "bdAddressMap::addrToCommonAddr", 0x9Fu, "Addr handle ref has invalid common addr.");
  return 1;
}

/*
==============
bdAddressMap::addrToString
==============
*/
unsigned __int64 bdAddressMap::addrToString(const bdReference<bdAddrHandle> *addrHandle, char *const str, const unsigned __int64 size)
{
  bdAddrHandle *m_ptr; 
  bool isResolved; 
  bdAddrHandle *v9; 
  bdAddr *RealAddr; 
  bdCommonAddr *v11; 
  char v12; 
  bdCommonAddr *v13; 
  char v14; 
  const char *v15; 
  bdCommonAddr *v16; 
  bdCommonAddr *v17; 
  bdAddr result; 

  LODWORD(v16) = 0;
  m_ptr = addrHandle->m_ptr;
  if ( !m_ptr )
  {
    bdStrlcpy(str, "Null addr handle ref", size);
    bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    return 20i64;
  }
  isResolved = bdAddrHandle::isResolved(m_ptr);
  v9 = addrHandle->m_ptr;
  if ( isResolved )
  {
    RealAddr = (bdAddr *)bdAddrHandle::getRealAddr(v9, &result);
    return bdAddr::toString(RealAddr, str, size);
  }
  v11 = v9->m_endpoint.m_ca.m_ptr;
  v17 = v11;
  if ( v11 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v11->m_refCount, 1u);
  v12 = 1;
  if ( v11 )
  {
    v13 = addrHandle->m_ptr->m_endpoint.m_ca.m_ptr;
    v16 = v13;
    if ( v13 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v13->m_refCount, 1u);
    v12 = 3;
    if ( v13->m_isLoopback )
    {
      v14 = 1;
      goto LABEL_14;
    }
  }
  else
  {
    v13 = v16;
  }
  v14 = 0;
LABEL_14:
  if ( (v12 & 2) != 0 && v13 && _InterlockedExchangeAdd((volatile signed __int32 *)&v13->m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdCommonAddr *, __int64))v16->~bdReferencable)(v16, 1i64);
  if ( v17 && _InterlockedExchangeAdd((volatile signed __int32 *)&v17->m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdCommonAddr *, __int64))v17->~bdReferencable)(v17, 1i64);
  if ( v14 )
  {
    bdStrlcpy(str, "loopback", size);
    v15 = "loopback";
  }
  else
  {
    bdStrlcpy(str, "not resolved", size);
    v15 = "not resolved";
  }
  return bdStrlen(v15);
}

/*
==============
bdAddressMap::clear
==============
*/
void bdAddressMap::clear(bdAddressMap *this)
{
  bdSharedMutex *p_m_mutex; 

  p_m_mutex = &this->m_mutex;
  bdSharedMutex::lock(&this->m_mutex);
  bdArray<bdReference<bdAddrHandle>>::clear(&this->m_addrHandles);
  bdSharedMutex::unlock(p_m_mutex);
}

/*
==============
bdAddressMap::commonAddrToAddr
==============
*/
_BOOL8 bdAddressMap::commonAddrToAddr(bdAddressMap *this, const bdReference<bdCommonAddr> ca, const bdSecurityID *id, bdReference<bdAddrHandle> *addrHandle)
{
  bdCommonAddr *v8; 
  bool v9; 
  bdReference<bdCommonAddr> caa; 
  __int64 v12; 

  v12 = -2i64;
  bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/bdAddressMap", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdaddressmap.cpp", "bdAddressMap::commonAddrToAddr", 0x125u, "This function is deprecated, use getAddrHandle instead.");
  v8 = (bdCommonAddr *)ca.m_ptr->__vftable;
  caa.m_ptr = v8;
  if ( v8 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v8->m_refCount, 1u);
  v9 = bdAddressMap::getAddrHandle(this, (const bdReference<bdCommonAddr>)&caa, id, addrHandle);
  if ( ca.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&ca.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( ca.m_ptr->__vftable )
      (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))ca.m_ptr->~bdReferencable)(ca.m_ptr->__vftable, 1i64);
    ca.m_ptr->__vftable = NULL;
  }
  return v9;
}

/*
==============
bdAddressMap::findAddrHandle
==============
*/
_BOOL8 bdAddressMap::findAddrHandle(bdAddressMap *this, const bdReference<bdCommonAddr> ca, const bdSecurityID *id, bdReference<bdAddrHandle> *addrHandle)
{
  const bdSecurityID *v8; 
  bool v9; 
  bdSharedMutex *p_m_mutex; 
  bool AddrHandleInternal; 
  bdSecurityID v14; 

  bdSecurityID::bdSecurityID(&v14);
  v9 = bdSecurityID::operator!=((bdSecurityID *)id, v8);
  bdHandleAssert(v9, "id != bdSecurityID()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdaddressmap.cpp", "bdAddressMap::findAddrHandle", 0x4Bu, "Invalid security ID", -2i64, ca.m_ptr);
  bdSecurityID::~bdSecurityID(&v14);
  p_m_mutex = &this->m_mutex;
  bdSharedMutex::lock_shared(&this->m_mutex);
  AddrHandleInternal = bdAddressMap::findAddrHandleInternal(this, (const bdReference<bdCommonAddr> *)ca.m_ptr, id, addrHandle);
  bdSharedMutex::unlock_shared(p_m_mutex);
  if ( ca.m_ptr->__vftable && !_InterlockedDecrement((volatile signed __int32 *)&ca.m_ptr->__vftable[1]) )
  {
    if ( ca.m_ptr->__vftable )
      (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))ca.m_ptr->~bdReferencable)(ca.m_ptr->__vftable, 1i64);
    ca.m_ptr->__vftable = NULL;
  }
  return AddrHandleInternal;
}

/*
==============
bdAddressMap::findAddrHandleInternal
==============
*/
__int64 bdAddressMap::findAddrHandleInternal(bdAddressMap *this, const bdReference<bdCommonAddr> *ca, const bdSecurityID *id, bdReference<bdAddrHandle> *addrHandle)
{
  bdAddressMap *v5; 
  unsigned __int8 v6; 
  unsigned int v7; 
  unsigned int v8; 
  __int64 v9; 
  const bdReference<bdAddrHandle> *v10; 
  bdReference<bdAddrHandle> v11; 
  bdCommonAddr *m_ptr; 
  bdSecurityID *p_m_secID; 
  char v14; 
  unsigned int m_size; 

  v5 = this;
  v6 = 0;
  if ( !ca->m_ptr )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket/bdAddressMap", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdaddressmap.cpp", "bdAddressMap::findAddrHandleInternal", 0x5Fu, "Invalid common addr reference.");
    return v6;
  }
  v7 = 0;
  m_size = this->m_addrHandles.m_size;
  v8 = 0;
  if ( !m_size )
    return v6;
  v9 = 0i64;
  do
  {
    bdHandleAssert(v8 < v5->m_addrHandles.m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdReference<class bdAddrHandle> >::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed");
    v10 = &v5->m_addrHandles.m_data[v9];
    v11.m_ptr = v10->m_ptr;
    if ( !v10->m_ptr )
      goto LABEL_21;
    m_ptr = v11.m_ptr->m_endpoint.m_ca.m_ptr;
    if ( m_ptr )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
      v11.m_ptr = v10->m_ptr;
    }
    p_m_secID = &v11.m_ptr->m_endpoint.m_secID;
    if ( m_ptr )
    {
      if ( !ca->m_ptr || !bdCommonAddr::operator==(m_ptr, ca->m_ptr) || !bdSecurityID::operator==(p_m_secID, id) )
      {
LABEL_12:
        v14 = 0;
        goto LABEL_13;
      }
    }
    else if ( ca->m_ptr )
    {
      goto LABEL_12;
    }
    v14 = 1;
LABEL_13:
    if ( m_ptr && !_InterlockedDecrement((volatile signed __int32 *)&m_ptr->m_refCount) )
      ((void (__fastcall *)(bdCommonAddr *, __int64))m_ptr->~bdReferencable)(m_ptr, 1i64);
    if ( v14 )
    {
      if ( !v7 )
      {
        v6 = 1;
        bdReference<bdAddrHandle>::operator=(addrHandle, v10);
      }
      ++v7;
    }
    v5 = this;
LABEL_21:
    ++v8;
    ++v9;
  }
  while ( v8 < m_size );
  if ( v7 > 1 )
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/bdAddressMap", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdaddressmap.cpp", "bdAddressMap::findAddrHandleInternal", 0x87u, "Found %u matching address handles, expected 0 or 1.", v7);
  return v6;
}

/*
==============
bdAddressMap::getAddrHandle
==============
*/
_BOOL8 bdAddressMap::getAddrHandle(bdAddressMap *this, const bdReference<bdCommonAddr> ca, const bdSecurityID *id, bdReference<bdAddrHandle> *addrHandle)
{
  bdAddr *LocalAddrByIndex; 
  bdAddr *PublicAddr; 
  const bdSecurityID *v10; 
  bool v11; 
  bool AddrHandleInternal; 
  bdAddr *v14; 
  int Port; 
  bdAddr *v16; 
  bdAddrHandle *v17; 
  bdCommonAddr *v18; 
  bdAddrHandle *v19; 
  bdAddrHandle *v20; 
  int v22; 
  bdReference<bdCommonAddr> caa; 
  __int64 v24; 
  bdSharedMutex *v25; 
  __int64 v26; 
  bdCommonAddr *m_ptr; 
  bdSharedMutex *p_m_mutex; 
  bdAddrHandle *v29; 
  bdSecurityID v30; 
  char v31[24]; 
  char str[24]; 

  v26 = -2i64;
  _R15 = (bdSecurityID *)id;
  m_ptr = ca.m_ptr;
  LocalAddrByIndex = (bdAddr *)bdCommonAddr::getLocalAddrByIndex((bdCommonAddr *)ca.m_ptr->__vftable, 0);
  bdSockAddr::toString(&LocalAddrByIndex->m_address, str, 0x16ui64);
  PublicAddr = (bdAddr *)bdCommonAddr::getPublicAddr((bdCommonAddr *)ca.m_ptr->__vftable);
  bdSockAddr::toString(&PublicAddr->m_address, v31, 0x16ui64);
  bdSecurityID::bdSecurityID(&v30);
  v11 = bdSecurityID::operator!=(_R15, v10);
  bdHandleAssert(v11, "id != bdSecurityID()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdaddressmap.cpp", "bdAddressMap::getAddrHandle", 0x21u, "Invalid security ID");
  bdSecurityID::~bdSecurityID(&v30);
  p_m_mutex = &this->m_mutex;
  bdSharedMutex::lock_shared(&this->m_mutex);
  AddrHandleInternal = bdAddressMap::findAddrHandleInternal(this, (const bdReference<bdCommonAddr> *)ca.m_ptr, _R15, addrHandle);
  bdSharedMutex::unlock_shared(&this->m_mutex);
  if ( !AddrHandleInternal )
  {
    v25 = &this->m_mutex;
    bdSharedMutex::lock(&this->m_mutex);
    AddrHandleInternal = bdAddressMap::findAddrHandleInternal(this, (const bdReference<bdCommonAddr> *)ca.m_ptr, _R15, addrHandle);
    if ( !AddrHandleInternal )
    {
      __asm
      {
        vmovsd  xmm0, qword ptr [r15]
        vmovsd  [rsp+128h+var_C0], xmm0
      }
      v14 = (bdAddr *)bdCommonAddr::getPublicAddr((bdCommonAddr *)ca.m_ptr->__vftable);
      Port = bdSockAddr::getPort(&v14->m_address);
      v16 = (bdAddr *)bdCommonAddr::getLocalAddrByIndex((bdCommonAddr *)ca.m_ptr->__vftable, 0);
      v22 = bdSockAddr::getPort(&v16->m_address);
      bdLogMessage(BD_LOG_INFO, "info/", "bdSocket/socket", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdaddressmap.cpp", "bdAddressMap::getAddrHandle", 0x39u, "getAddrHandle LocalIP: %s:%d Public IP: %s:%d id: %I64u not found - creating!", str, v22, v31, Port, v24);
      AddrHandleInternal = 1;
      v17 = (bdAddrHandle *)bdMemory::allocate(0xC8ui64);
      v29 = v17;
      if ( v17 )
      {
        v18 = (bdCommonAddr *)ca.m_ptr->__vftable;
        caa.m_ptr = v18;
        if ( v18 )
          _InterlockedExchangeAdd((volatile signed __int32 *)&v18->m_refCount, 1u);
        bdAddrHandle::bdAddrHandle(v17, (bdReference<bdCommonAddr>)&caa, _R15);
        v20 = v19;
      }
      else
      {
        v20 = NULL;
      }
      if ( addrHandle->m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&addrHandle->m_ptr->m_refCount, 0xFFFFFFFF) == 1 && addrHandle->m_ptr )
        ((void (__fastcall *)(bdAddrHandle *, __int64))addrHandle->m_ptr->~bdReferencable)(addrHandle->m_ptr, 1i64);
      addrHandle->m_ptr = v20;
      if ( v20 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v20->m_refCount, 1u);
      bdArray<bdReference<bdAddrHandle>>::pushBack(&this->m_addrHandles, addrHandle);
    }
    bdSharedMutex::unlock(v25);
  }
  if ( ca.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&ca.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( ca.m_ptr->__vftable )
      (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))ca.m_ptr->~bdReferencable)(ca.m_ptr->__vftable, 1i64);
    ca.m_ptr->__vftable = NULL;
  }
  return AddrHandleInternal;
}

/*
==============
bdAddressMap::unregisterAddr
==============
*/
__int64 bdAddressMap::unregisterAddr(bdAddressMap *this, const bdReference<bdAddrHandle> *addrHandle)
{
  unsigned __int8 v4; 
  bool v5; 
  unsigned int v6; 
  __int64 v7; 
  unsigned int m_size; 
  bool v9; 
  bdAddrHandle *m_ptr; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  bdReference<bdAddrHandle> *v14; 
  __int64 v15; 
  unsigned int m_capacity; 
  unsigned int v17; 
  bdReference<bdAddrHandle> *v18; 
  bdReference<bdAddrHandle> *v19; 
  bdReference<bdAddrHandle> *v20; 
  char *v21; 
  bdAddrHandle *v22; 
  unsigned int v23; 
  unsigned int v25; 
  bdSharedMutex *p_m_mutex; 

  v4 = 0;
  if ( addrHandle->m_ptr )
  {
    p_m_mutex = &this->m_mutex;
    bdSharedMutex::lock(&this->m_mutex);
    v5 = 0;
    v6 = 0;
    v7 = 0i64;
    m_size = this->m_addrHandles.m_size;
    if ( m_size )
    {
      v9 = m_size != 0;
      do
      {
        bdHandleAssert(v9, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdReference<class bdAddrHandle> >::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
        m_ptr = this->m_addrHandles.m_data[v7].m_ptr;
        if ( m_ptr )
          _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
        if ( m_ptr )
          v5 = bdAddrHandle::operator==(m_ptr, addrHandle->m_ptr);
        if ( v5 )
        {
          v11 = this->m_addrHandles.m_size;
          if ( (unsigned int)v7 < v11 )
          {
            bdReference<bdAddrHandle>::operator=(&this->m_addrHandles.m_data[v7], &this->m_addrHandles.m_data[v11 - 1]);
            v12 = this->m_addrHandles.m_size;
            if ( v12 )
            {
              v13 = v12 - 1;
              this->m_addrHandles.m_size = v13;
              v14 = &this->m_addrHandles.m_data[v13];
              if ( v14->m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v14->m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
              {
                if ( v14->m_ptr )
                  ((void (__fastcall *)(bdAddrHandle *, __int64))v14->m_ptr->~bdReferencable)(v14->m_ptr, 1i64);
                v14->m_ptr = NULL;
              }
              LODWORD(v15) = this->m_addrHandles.m_size;
              m_capacity = this->m_addrHandles.m_capacity;
              if ( m_capacity > 4 * (int)v15 )
              {
                v17 = m_capacity - (m_capacity >> 1);
                this->m_addrHandles.m_capacity = v17;
                v18 = NULL;
                if ( v17 )
                {
                  v19 = (bdReference<bdAddrHandle> *)bdMemory::allocate(8i64 * v17);
                  v18 = v19;
                  v15 = this->m_addrHandles.m_size;
                  if ( (_DWORD)v15 )
                  {
                    v20 = v19;
                    v21 = (char *)((char *)this->m_addrHandles.m_data - (char *)v19);
                    do
                    {
                      if ( v20 )
                      {
                        v22 = *(bdAddrHandle **)((char *)&v20->m_ptr + (_QWORD)v21);
                        v20->m_ptr = v22;
                        if ( v22 )
                          _InterlockedExchangeAdd((volatile signed __int32 *)&v22->m_refCount, 1u);
                      }
                      ++v20;
                      --v15;
                    }
                    while ( v15 );
                    LODWORD(v15) = this->m_addrHandles.m_size;
                  }
                }
                bdArray<bdReference<bdAddrHandle>>::destruct(&this->m_addrHandles, this->m_addrHandles.m_data, v15);
                bdMemory::deallocate(this->m_addrHandles.m_data);
                this->m_addrHandles.m_data = v18;
              }
            }
          }
          LODWORD(v7) = v7 - 1;
          ++v6;
          v4 = 1;
        }
        if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
          ((void (__fastcall *)(bdAddrHandle *, __int64))m_ptr->~bdReferencable)(m_ptr, 1i64);
        v7 = (unsigned int)(v7 + 1);
        v23 = this->m_addrHandles.m_size;
        v9 = (unsigned int)v7 < v23;
      }
      while ( (unsigned int)v7 < v23 );
      if ( v6 > 1 )
      {
        v25 = v6;
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/bdAddressMap", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdaddressmap.cpp", "bdAddressMap::unregisterAddr", 0xC7u, "Found %u matching address handles, expected 0 or 1.", v25);
LABEL_36:
        addrHandle->m_ptr->m_status = BD_ADDR_UNRESOLVED;
        bdSharedMutex::unlock(p_m_mutex);
        return v4;
      }
      if ( v6 )
        goto LABEL_36;
    }
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/bdAddressMap", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdaddressmap.cpp", "bdAddressMap::unregisterAddr", 0xCCu, "Failed to remove addr handle from address map.");
    goto LABEL_36;
  }
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSocket/bdAddressMap", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdaddressmap.cpp", "bdAddressMap::unregisterAddr", 0xABu, "A invalid addr handle ref cannot be unregistered.");
  return v4;
}

/*
==============
bdAddressMap::unregisterRealAddr
==============
*/
__int64 bdAddressMap::unregisterRealAddr(bdAddressMap *this, const bdAddr *realAddr)
{
  unsigned __int8 v4; 
  bdSharedMutex *p_m_mutex; 
  __int64 v6; 
  unsigned int m_size; 
  bool v8; 
  bdAddrHandle *m_ptr; 
  unsigned int v10; 
  bdSharedMutex *v12; 
  char str[8]; 
  __int64 v14; 
  int v15; 
  __int16 v16; 

  v4 = 0;
  p_m_mutex = &this->m_mutex;
  v12 = &this->m_mutex;
  bdSharedMutex::lock(&this->m_mutex);
  v6 = 0i64;
  m_size = this->m_addrHandles.m_size;
  if ( !m_size )
    goto LABEL_13;
  v8 = m_size != 0;
  do
  {
    bdHandleAssert(v8, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdReference<class bdAddrHandle> >::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
    m_ptr = this->m_addrHandles.m_data[v6].m_ptr;
    if ( m_ptr )
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    if ( m_ptr && bdSockAddr::compare(&m_ptr->m_realAddr.m_address, &realAddr->m_address, 1) )
    {
      m_ptr->m_status = BD_ADDR_UNRESOLVED;
      v4 = 1;
    }
    if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
      ((void (__fastcall *)(bdAddrHandle *, __int64))m_ptr->~bdReferencable)(m_ptr, 1i64);
    v6 = (unsigned int)(v6 + 1);
    v10 = this->m_addrHandles.m_size;
    v8 = (unsigned int)v6 < v10;
  }
  while ( (unsigned int)v6 < v10 );
  p_m_mutex = v12;
  if ( !v4 )
  {
LABEL_13:
    *(_QWORD *)str = 0i64;
    v14 = 0i64;
    v15 = 0;
    v16 = 0;
    bdAddr::toString((bdAddr *)realAddr, str, 0x16ui64);
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/bdAddressMap", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdaddressmap.cpp", "bdAddressMap::unregisterRealAddr", 0xEAu, "No address handles found matching the real address %s.", str);
  }
  bdSharedMutex::unlock(p_m_mutex);
  return v4;
}

