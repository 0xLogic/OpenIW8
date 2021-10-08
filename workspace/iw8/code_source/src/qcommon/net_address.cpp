/*
==============
NetAddress::IsBacklog
==============
*/

bool __fastcall NetAddress::IsBacklog(NetAddress *this)
{
  return ?IsBacklog@NetAddress@@QEBA_NXZ(this);
}

/*
==============
NetAddress::GetIndex
==============
*/

int __fastcall NetAddress::GetIndex(NetAddress *this)
{
  return ?GetIndex@NetAddress@@QEBAHXZ(this);
}

/*
==============
NetAddress::GetCommonAddr
==============
*/

const bdReference<bdCommonAddr> *__fastcall NetAddress::GetCommonAddr(NetAddress *this)
{
  return ?GetCommonAddr@NetAddress@@QEBAAEBV?$bdReference@VbdCommonAddr@@@@XZ(this);
}

/*
==============
NetAddress::IsActive
==============
*/

bool __fastcall NetAddress::IsActive(NetAddress *this)
{
  return ?IsActive@NetAddress@@QEBA_NXZ(this);
}

/*
==============
NetAddress::IsConnected
==============
*/

bool __fastcall NetAddress::IsConnected(NetAddress *this)
{
  return ?IsConnected@NetAddress@@QEBA_NXZ(this);
}

/*
==============
NetAddress::GetXnaddr
==============
*/

void __fastcall NetAddress::GetXnaddr(NetAddress *this, XNADDR *outAddr)
{
  ?GetXnaddr@NetAddress@@QEBAXAEAUXNADDR@@@Z(this, outAddr);
}

/*
==============
NetAddress::GetHandle
==============
*/

const bdReference<bdAddrHandle> *__fastcall NetAddress::GetHandle(NetAddress *this)
{
  return ?GetHandle@NetAddress@@QEBAAEBV?$bdReference@VbdAddrHandle@@@@XZ(this);
}

/*
==============
NetAddress::IsNull
==============
*/

bool __fastcall NetAddress::IsNull(NetAddress *this)
{
  return ?IsNull@NetAddress@@QEBA_NXZ(this);
}

/*
==============
NetAddress::GetStateString
==============
*/

const char *__fastcall NetAddress::GetStateString(NetAddress *this)
{
  return ?GetStateString@NetAddress@@QEBAPEBDXZ(this);
}

/*
==============
NetAddress::IsLoopback
==============
*/

bool __fastcall NetAddress::IsLoopback(NetAddress *this)
{
  return ?IsLoopback@NetAddress@@QEBA_NXZ(this);
}

/*
==============
NetAddress::GetString
==============
*/

const char *__fastcall NetAddress::GetString(NetAddress *this, bool includeIndex)
{
  return ?GetString@NetAddress@@QEBAPEBD_N@Z(this, includeIndex);
}

/*
==============
NetAddress::NetAddress
==============
*/

void __fastcall NetAddress::NetAddress(NetAddress *this)
{
  ??0NetAddress@@QEAA@XZ(this);
}

/*
==============
NetAddress::Clear
==============
*/

void __fastcall NetAddress::Clear(NetAddress *this)
{
  ?Clear@NetAddress@@QEAAXXZ(this);
}

/*
==============
NetAddress::IsResolved
==============
*/

bool __fastcall NetAddress::IsResolved(NetAddress *this)
{
  return ?IsResolved@NetAddress@@QEBA_NXZ(this);
}

/*
==============
NetAddress::GetString
==============
*/

const char *__fastcall NetAddress::GetString(NetAddress *this)
{
  return ?GetString@NetAddress@@QEBAPEBDXZ(this);
}

/*
==============
NetAddress::Update
==============
*/

void __fastcall NetAddress::Update(NetAddress *this, const bdReference<bdAddrHandle> *addrHandle)
{
  ?Update@NetAddress@@QEAAXAEBV?$bdReference@VbdAddrHandle@@@@@Z(this, addrHandle);
}

/*
==============
NetAddress::GetNetadr
==============
*/

void __fastcall NetAddress::GetNetadr(NetAddress *this, netadr_t *outAddr)
{
  ?GetNetadr@NetAddress@@QEBAXAEAUnetadr_t@@@Z(this, outAddr);
}

/*
==============
NetAddress::GetHandle
==============
*/

bdReference<bdAddrHandle> *__fastcall NetAddress::GetHandle(NetAddress *this)
{
  return ?GetHandle@NetAddress@@QEAAAEAV?$bdReference@VbdAddrHandle@@@@XZ(this);
}

/*
==============
NetAddress::Init
==============
*/

void __fastcall NetAddress::Init(NetAddress *this, const bdReference<bdAddrHandle> *addrHandle)
{
  ?Init@NetAddress@@QEAAXAEBV?$bdReference@VbdAddrHandle@@@@@Z(this, addrHandle);
}

/*
==============
NetAddress::NetAddress
==============
*/
void NetAddress::NetAddress(NetAddress *this)
{
  this->m_index = -1;
  this->m_handle.m_ptr = NULL;
}

/*
==============
NetAddress::Clear
==============
*/
void NetAddress::Clear(NetAddress *this)
{
  bdAddrHandle *m_ptr; 
  bdAddrHandle *v3; 

  m_ptr = this->m_handle.m_ptr;
  if ( m_ptr )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      v3 = this->m_handle.m_ptr;
      if ( v3 )
        ((void (__fastcall *)(bdAddrHandle *, __int64))v3->~bdReferencable)(v3, 1i64);
    }
  }
  this->m_handle.m_ptr = NULL;
}

/*
==============
NetAddress::GetCommonAddr
==============
*/
bdEndpoint *NetAddress::GetCommonAddr(NetAddress *this)
{
  if ( !this->m_handle.m_ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_address.cpp", 117, ASSERT_TYPE_ASSERT, "(!IsNull())", (const char *)&queryFormat, "!IsNull()") )
    __debugbreak();
  return &this->m_handle.m_ptr->m_endpoint;
}

/*
==============
NetAddress::GetHandle
==============
*/
bdReference<bdAddrHandle> *NetAddress::GetHandle(NetAddress *this)
{
  return &this->m_handle;
}

/*
==============
NetAddress::GetHandle
==============
*/
bdReference<bdAddrHandle> *NetAddress::GetHandle(NetAddress *this)
{
  return &this->m_handle;
}

/*
==============
NetAddress::GetIndex
==============
*/
__int64 NetAddress::GetIndex(NetAddress *this)
{
  return (unsigned int)this->m_index;
}

/*
==============
NetAddress::GetNetadr
==============
*/
void NetAddress::GetNetadr(NetAddress *this, netadr_t *outAddr)
{
  if ( !this->m_handle.m_ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_address.cpp", 124, ASSERT_TYPE_ASSERT, "(!IsNull())", (const char *)&queryFormat, "!IsNull()") )
    __debugbreak();
  dwAddrHandleToNetadr(&this->m_handle, outAddr);
  outAddr->addrHandleIndex = this->m_index;
}

/*
==============
NetAddress::GetStateString
==============
*/
const char *NetAddress::GetStateString(NetAddress *this)
{
  bdAddrHandle *m_ptr; 
  const char *result; 

  m_ptr = this->m_handle.m_ptr;
  if ( !m_ptr )
    return "NULL";
  switch ( m_ptr->m_status )
  {
    case BD_ADDR_NOT_CONSTRUCTED:
      result = "BD_ADDR_NOT_CONSTRUCTED";
      break;
    case BD_ADDR_NOT_RESOLVED:
      result = "BD_ADDR_NOT_RESOLVED";
      break;
    case BD_ADDR_ERROR:
      result = "BD_ADDR_ERROR";
      break;
    case BD_ADDR_RESOLVING:
      result = "BD_ADDR_RESOLVING";
      break;
    case BD_ADDR_RESOLVED:
      result = "BD_ADDR_RESOLVED";
      break;
    case BD_ADDR_CONNECTED:
      result = "BD_ADDR_CONNECTED";
      break;
    case BD_ADDR_UNRESOLVED:
      result = "BD_ADDR_UNRESOLVED";
      break;
    default:
      result = "UNKNOWN";
      break;
  }
  return result;
}

/*
==============
NetAddress::GetString
==============
*/
char *NetAddress::GetString(NetAddress *this)
{
  bdReference<bdAddrHandle> *p_m_handle; 
  const char *v3; 
  char dest[64]; 

  p_m_handle = &this->m_handle;
  if ( p_m_handle->m_ptr )
    v3 = dwAddrHandleToString(p_m_handle);
  else
    v3 = "null";
  Core_strcpy(dest, 0x40ui64, v3);
  return j_va("%s (%d)", dest, (unsigned int)this->m_index);
}

/*
==============
NetAddress::GetString
==============
*/
char *NetAddress::GetString(NetAddress *this, bool includeIndex)
{
  bdReference<bdAddrHandle> *p_m_handle; 
  const char *v5; 
  char dest[64]; 

  p_m_handle = &this->m_handle;
  if ( p_m_handle->m_ptr )
    v5 = dwAddrHandleToString(p_m_handle);
  else
    v5 = "null";
  Core_strcpy(dest, 0x40ui64, v5);
  if ( includeIndex )
    return j_va("%s (%d)", dest, (unsigned int)this->m_index);
  else
    return j_va((const char *)&queryFormat, dest);
}

/*
==============
NetAddress::GetXnaddr
==============
*/
void NetAddress::GetXnaddr(NetAddress *this, XNADDR *outAddr)
{
  if ( !this->m_handle.m_ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_address.cpp", 132, ASSERT_TYPE_ASSERT, "(!IsNull())", (const char *)&queryFormat, "!IsNull()") )
    __debugbreak();
  bdCommonAddr::serialize(this->m_handle.m_ptr->m_endpoint.m_ca.m_ptr, outAddr->addrBuff);
}

/*
==============
NetAddress::Init
==============
*/
void NetAddress::Init(NetAddress *this, const bdReference<bdAddrHandle> *addrHandle)
{
  bdReference<bdAddrHandle> *p_m_handle; 

  p_m_handle = &this->m_handle;
  if ( this->m_handle.m_ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_address.cpp", 21, ASSERT_TYPE_ASSERT, "(IsNull())", (const char *)&queryFormat, "IsNull()") )
    __debugbreak();
  bdReference<bdAddrHandle>::operator=(p_m_handle, addrHandle);
}

/*
==============
NetAddress::IsActive
==============
*/
bool NetAddress::IsActive(NetAddress *this)
{
  bdAddrHandle *m_ptr; 
  bool v2; 

  m_ptr = this->m_handle.m_ptr;
  if ( !m_ptr )
    return 0;
  _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  v2 = (unsigned int)(m_ptr->m_status - 3) <= 2;
  if ( !_InterlockedDecrement((volatile signed __int32 *)&m_ptr->m_refCount) )
    ((void (__fastcall *)(bdAddrHandle *, __int64))m_ptr->~bdReferencable)(m_ptr, 1i64);
  return v2;
}

/*
==============
NetAddress::IsBacklog
==============
*/
bool NetAddress::IsBacklog(NetAddress *this)
{
  return this->m_index < 256;
}

/*
==============
NetAddress::IsConnected
==============
*/
_BOOL8 NetAddress::IsConnected(NetAddress *this)
{
  bdAddrHandle *m_ptr; 
  bool v2; 

  m_ptr = this->m_handle.m_ptr;
  v2 = 0;
  if ( m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    if ( m_ptr->m_status == BD_ADDR_CONNECTED )
      v2 = 1;
  }
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdAddrHandle *, __int64))m_ptr->~bdReferencable)(m_ptr, 1i64);
  return v2;
}

/*
==============
NetAddress::IsLoopback
==============
*/
_BOOL8 NetAddress::IsLoopback(NetAddress *this)
{
  bdAddrHandle *m_ptr; 
  bool v2; 

  m_ptr = this->m_handle.m_ptr;
  v2 = 0;
  if ( m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    if ( m_ptr->m_endpoint.m_ca.m_ptr->m_isLoopback )
      v2 = 1;
  }
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdAddrHandle *, __int64))m_ptr->~bdReferencable)(m_ptr, 1i64);
  return v2;
}

/*
==============
NetAddress::IsNull
==============
*/
bool NetAddress::IsNull(NetAddress *this)
{
  return this->m_handle.m_ptr == NULL;
}

/*
==============
NetAddress::IsResolved
==============
*/
_BOOL8 NetAddress::IsResolved(NetAddress *this)
{
  bdAddrHandle *m_ptr; 
  volatile signed __int32 *p_m_refCount; 
  bool v3; 

  m_ptr = this->m_handle.m_ptr;
  p_m_refCount = (volatile signed __int32 *)&m_ptr->m_refCount;
  if ( m_ptr )
    _InterlockedExchangeAdd(p_m_refCount, 1u);
  v3 = m_ptr && bdAddrHandle::isResolved(m_ptr);
  if ( m_ptr && _InterlockedExchangeAdd(p_m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdAddrHandle *, __int64))m_ptr->~bdReferencable)(m_ptr, 1i64);
  return v3;
}

/*
==============
NetAddress::Update
==============
*/
void NetAddress::Update(NetAddress *this, const bdReference<bdAddrHandle> *addrHandle)
{
  if ( this->m_index < 256 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_address.cpp", 28, ASSERT_TYPE_ASSERT, "(!IsBacklog())", (const char *)&queryFormat, "!IsBacklog()") )
    __debugbreak();
  bdReference<bdAddrHandle>::operator=(&this->m_handle, addrHandle);
}

