/*
==============
NetEndpoint::Disconnect
==============
*/

void __fastcall NetEndpoint::Disconnect(NetEndpoint *this)
{
  ?Disconnect@NetEndpoint@@QEAAXXZ(this);
}

/*
==============
NetEndpoint::GetConnectionCount
==============
*/

int __fastcall NetEndpoint::GetConnectionCount(NetEndpoint *this)
{
  return ?GetConnectionCount@NetEndpoint@@QEBAHXZ(this);
}

/*
==============
NetEndpoint::Graveyard
==============
*/

void __fastcall NetEndpoint::Graveyard(NetEndpoint *this, bool graveyarded)
{
  ?Graveyard@NetEndpoint@@QEAAX_N@Z(this, graveyarded);
}

/*
==============
NetEndpoint::GetString
==============
*/

const char *__fastcall NetEndpoint::GetString(NetEndpoint *this)
{
  return ?GetString@NetEndpoint@@QEBAPEBDXZ(this);
}

/*
==============
NetEndpoint::OnRecv
==============
*/

void __fastcall NetEndpoint::OnRecv(NetEndpoint *this)
{
  ?OnRecv@NetEndpoint@@QEAAXXZ(this);
}

/*
==============
NetEndpoint::IsBound
==============
*/

bool __fastcall NetEndpoint::IsBound(NetEndpoint *this)
{
  return ?IsBound@NetEndpoint@@QEBA_NXZ(this);
}

/*
==============
NetEndpoint::Unbind
==============
*/

void __fastcall NetEndpoint::Unbind(NetEndpoint *this, NetConnection *connection)
{
  ?Unbind@NetEndpoint@@QEAAXPEAVNetConnection@@@Z(this, connection);
}

/*
==============
NetEndpoint::AddReference
==============
*/

void __fastcall NetEndpoint::AddReference(NetEndpoint *this)
{
  ?AddReference@NetEndpoint@@QEAAXXZ(this);
}

/*
==============
NetEndpoint::IsActive
==============
*/

bool __fastcall NetEndpoint::IsActive(NetEndpoint *this)
{
  return ?IsActive@NetEndpoint@@QEBA_NXZ(this);
}

/*
==============
NetEndpoint::Open
==============
*/

void __fastcall NetEndpoint::Open(NetEndpoint *this, const bdReference<bdAddrHandle> *addrHandle, NetSession *session)
{
  ?Open@NetEndpoint@@QEAAXAEBV?$bdReference@VbdAddrHandle@@@@PEAVNetSession@@@Z(this, addrHandle, session);
}

/*
==============
NetEndpoint::Close
==============
*/

void __fastcall NetEndpoint::Close(NetEndpoint *this)
{
  ?Close@NetEndpoint@@QEAAXXZ(this);
}

/*
==============
NetEndpoint::Connect
==============
*/

void __fastcall NetEndpoint::Connect(NetEndpoint *this)
{
  ?Connect@NetEndpoint@@QEAAXXZ(this);
}

/*
==============
NetEndpoint::GetSecurityId
==============
*/

const bdSecurityID *__fastcall NetEndpoint::GetSecurityId(NetEndpoint *this)
{
  return ?GetSecurityId@NetEndpoint@@QEBAAEBVbdSecurityID@@XZ(this);
}

/*
==============
NetEndpoint::OnClose
==============
*/

void __fastcall NetEndpoint::OnClose(NetEndpoint *this, const bdReference<bdDTLSAssociation> *dtls)
{
  ?OnClose@NetEndpoint@@QEAAXAEBV?$bdReference@VbdDTLSAssociation@@@@@Z(this, dtls);
}

/*
==============
NetEndpoint::GetCommonAddr
==============
*/

const bdReference<bdCommonAddr> *__fastcall NetEndpoint::GetCommonAddr(NetEndpoint *this)
{
  return ?GetCommonAddr@NetEndpoint@@QEBAAEBV?$bdReference@VbdCommonAddr@@@@XZ(this);
}

/*
==============
NetEndpoint::GetSession
==============
*/

NetSession *__fastcall NetEndpoint::GetSession(NetEndpoint *this)
{
  return ?GetSession@NetEndpoint@@QEAAPEAVNetSession@@XZ(this);
}

/*
==============
NetEndpoint::GetAddress
==============
*/

const NetAddress *__fastcall NetEndpoint::GetAddress(NetEndpoint *this)
{
  return ?GetAddress@NetEndpoint@@QEBAAEBVNetAddress@@XZ(this);
}

/*
==============
NetEndpoint::GetAddress
==============
*/

NetAddress *__fastcall NetEndpoint::GetAddress(NetEndpoint *this)
{
  return ?GetAddress@NetEndpoint@@QEAAAEAVNetAddress@@XZ(this);
}

/*
==============
NetEndpoint::OnSend
==============
*/

void __fastcall NetEndpoint::OnSend(NetEndpoint *this)
{
  ?OnSend@NetEndpoint@@QEAAXXZ(this);
}

/*
==============
NetEndpoint::Update
==============
*/

void __fastcall NetEndpoint::Update(NetEndpoint *this, const bdReference<bdAddrHandle> *addrHandle)
{
  ?Update@NetEndpoint@@QEAAXAEBV?$bdReference@VbdAddrHandle@@@@@Z(this, addrHandle);
}

/*
==============
NetEndpoint::IsConnected
==============
*/

bool __fastcall NetEndpoint::IsConnected(NetEndpoint *this)
{
  return ?IsConnected@NetEndpoint@@QEBA_NXZ(this);
}

/*
==============
NetEndpoint::GetLastRecv
==============
*/

int __fastcall NetEndpoint::GetLastRecv(NetEndpoint *this)
{
  return ?GetLastRecv@NetEndpoint@@QEBAHXZ(this);
}

/*
==============
NetEndpoint::GetConnectionType
==============
*/

int __fastcall NetEndpoint::GetConnectionType(NetEndpoint *this, NetConnection *connection)
{
  return ?GetConnectionType@NetEndpoint@@AEAAHPEAVNetConnection@@@Z(this, connection);
}

/*
==============
NetEndpoint::GetString
==============
*/

const char *__fastcall NetEndpoint::GetString(NetEndpoint *this, bool includeIndex)
{
  return ?GetString@NetEndpoint@@QEBAPEBD_N@Z(this, includeIndex);
}

/*
==============
NetEndpoint::IsOpened
==============
*/

bool __fastcall NetEndpoint::IsOpened(NetEndpoint *this)
{
  return ?IsOpened@NetEndpoint@@QEBA_NXZ(this);
}

/*
==============
NetEndpoint::NetEndpoint
==============
*/

void __fastcall NetEndpoint::NetEndpoint(NetEndpoint *this)
{
  ??0NetEndpoint@@QEAA@XZ(this);
}

/*
==============
NetEndpoint::GetLastSent
==============
*/

int __fastcall NetEndpoint::GetLastSent(NetEndpoint *this)
{
  return ?GetLastSent@NetEndpoint@@QEBAHXZ(this);
}

/*
==============
NetEndpoint::GetTelemetry
==============
*/

const bdDTLSAssociationTelemetry *__fastcall NetEndpoint::GetTelemetry(NetEndpoint *this)
{
  return ?GetTelemetry@NetEndpoint@@QEAAAEBVbdDTLSAssociationTelemetry@@XZ(this);
}

/*
==============
NetEndpoint::GetConnectionSlot
==============
*/

NetConnection **__fastcall NetEndpoint::GetConnectionSlot(NetEndpoint *this, NetConnection *connection)
{
  return ?GetConnectionSlot@NetEndpoint@@AEAAPEAPEAVNetConnection@@PEAV2@@Z(this, connection);
}

/*
==============
NetEndpoint::Bind
==============
*/

void __fastcall NetEndpoint::Bind(NetEndpoint *this, NetConnection *connection)
{
  ?Bind@NetEndpoint@@QEAAXPEAVNetConnection@@@Z(this, connection);
}

/*
==============
NetEndpoint::GetReferenceCount
==============
*/

int __fastcall NetEndpoint::GetReferenceCount(NetEndpoint *this)
{
  return ?GetReferenceCount@NetEndpoint@@QEBAHXZ(this);
}

/*
==============
NetEndpoint::IsLoopback
==============
*/

bool __fastcall NetEndpoint::IsLoopback(NetEndpoint *this)
{
  return ?IsLoopback@NetEndpoint@@QEBA_NXZ(this);
}

/*
==============
NetEndpoint::RemoveReference
==============
*/

void __fastcall NetEndpoint::RemoveReference(NetEndpoint *this, bool keepOpen)
{
  ?RemoveReference@NetEndpoint@@QEAAX_N@Z(this, keepOpen);
}

/*
==============
NetEndpoint::NetEndpoint
==============
*/
void NetEndpoint::NetEndpoint(NetEndpoint *this)
{
  NetAddress::NetAddress(&this->m_address);
  memset_0(this->m_connections, 0, sizeof(this->m_connections));
  this->m_session = NULL;
  this->m_referenceCount = 0;
  this->m_connectionCount = 0;
  *(_QWORD *)&this->m_lastRecv = 0i64;
  this->m_graveyarded = 0;
  bdDTLSAssociationTelemetry::bdDTLSAssociationTelemetry(&this->m_telemetry);
}

/*
==============
NetEndpoint::AddReference
==============
*/
void NetEndpoint::AddReference(NetEndpoint *this)
{
  volatile int *p_m_referenceCount; 

  if ( NetAddress::IsNull(&this->m_address) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_endpoint.cpp", 169, ASSERT_TYPE_ASSERT, "(IsOpened())", (const char *)&queryFormat, "IsOpened()") )
    __debugbreak();
  p_m_referenceCount = &this->m_referenceCount;
  if ( ((unsigned __int8)p_m_referenceCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)p_m_referenceCount) )
    __debugbreak();
  _InterlockedIncrement(p_m_referenceCount);
}

/*
==============
NetEndpoint::Bind
==============
*/
void NetEndpoint::Bind(NetEndpoint *this, NetConnection *connection)
{
  if ( !NetConnection::IsLocal(connection) )
    *NetEndpoint::GetConnectionSlot(this, connection) = connection;
  if ( (((_BYTE)this - 84) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &this->m_connectionCount) )
    __debugbreak();
  if ( _InterlockedIncrement(&this->m_connectionCount) == 1 )
    NetEndpoint::Connect(this);
}

/*
==============
NetEndpoint::Close
==============
*/
void NetEndpoint::Close(NetEndpoint *this)
{
  NetSession *m_session; 
  bool IsBacklog; 
  __int64 v4; 
  bdDTLSAssociationTelemetry v5; 

  if ( this->m_referenceCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_endpoint.cpp", 65, ASSERT_TYPE_ASSERT, "(m_referenceCount == 0)", (const char *)&queryFormat, "m_referenceCount == 0") )
    __debugbreak();
  if ( this->m_connectionCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_endpoint.cpp", 66, ASSERT_TYPE_ASSERT, "(m_connectionCount == 0)", (const char *)&queryFormat, "m_connectionCount == 0") )
    __debugbreak();
  m_session = this->m_session;
  if ( m_session )
  {
    IsBacklog = NetAddress::IsBacklog(&this->m_address);
    NetSession::RemoveReference(m_session, IsBacklog);
    this->m_session = NULL;
  }
  *(_QWORD *)&this->m_lastRecv = 0i64;
  this->m_graveyarded = 0;
  bdDTLSAssociationTelemetry::bdDTLSAssociationTelemetry(&v5);
  *(_OWORD *)&this->m_telemetry.m_lastState = *(_OWORD *)v4;
  *(_OWORD *)&this->m_telemetry.m_stageCookieEchoMsSinceStart = *(_OWORD *)(v4 + 16);
  *(_OWORD *)&this->m_telemetry.m_peerAddr.m_address.inUn.m_sockaddrStorage.ss_family = *(_OWORD *)(v4 + 32);
  *(in6_addr *)((char *)&this->m_telemetry.m_peerAddr.m_address.inUn.m_ipv6Sockaddr.sin6_addr + 8) = *(in6_addr *)(v4 + 48);
  *((_OWORD *)&this->m_telemetry.m_peerAddr.m_address.inUn.m_ipv6Sockaddr + 2) = *(_OWORD *)(v4 + 64);
  *((_OWORD *)&this->m_telemetry.m_peerAddr.m_address.inUn.m_ipv6Sockaddr + 3) = *(_OWORD *)(v4 + 80);
  *((_OWORD *)&this->m_telemetry.m_peerAddr.m_address.inUn.m_ipv6Sockaddr + 4) = *(_OWORD *)(v4 + 96);
  *((_OWORD *)&this->m_telemetry.m_peerAddr.m_address.inUn.m_ipv6Sockaddr + 5) = *(_OWORD *)(v4 + 112);
  *((_OWORD *)&this->m_telemetry.m_peerAddr.m_address.inUn.m_ipv6Sockaddr + 6) = *(_OWORD *)(v4 + 128);
  *((_OWORD *)&this->m_telemetry.m_peerAddr.m_address.inUn.m_ipv6Sockaddr + 7) = *(_OWORD *)(v4 + 144);
  this->m_telemetry.m_peerAddr.m_relayRoute = *(bdRelayRoute *)(v4 + 160);
  *(_OWORD *)&this->m_telemetry.m_peerAddr.m_type = *(_OWORD *)(v4 + 176);
  *(_OWORD *)&this->m_telemetry.m_recvSeqNum = *(_OWORD *)(v4 + 192);
  NetAddress::Clear(&this->m_address);
}

/*
==============
NetEndpoint::Connect
==============
*/
void NetEndpoint::Connect(NetEndpoint *this)
{
  bdReference<bdAddrHandle> *Handle; 
  bdReference<bdAddrHandle> *v3; 
  bdReference<bdAddrHandle> *v4; 

  Handle = NetAddress::GetHandle(&this->m_address);
  if ( bdAddrHandle::getUserData(Handle->m_ptr) )
  {
    v3 = NetAddress::GetHandle(&this->m_address);
    if ( bdAddrHandle::getUserData(v3->m_ptr) != this && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_endpoint.cpp", 128, ASSERT_TYPE_ASSERT, "(m_address.GetHandle()->getUserData() == 0 || m_address.GetHandle()->getUserData() == this)", (const char *)&queryFormat, "m_address.GetHandle()->getUserData() == NULL || m_address.GetHandle()->getUserData() == this") )
      __debugbreak();
  }
  if ( this->m_referenceCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_endpoint.cpp", 129, ASSERT_TYPE_ASSERT, "(m_referenceCount > 0)", (const char *)&queryFormat, "m_referenceCount > 0") )
    __debugbreak();
  v4 = NetAddress::GetHandle(&this->m_address);
  bdAddrHandle::setUserData(v4->m_ptr, this);
}

/*
==============
NetEndpoint::Disconnect
==============
*/
void NetEndpoint::Disconnect(NetEndpoint *this)
{
  bdAddrHandle *m_ptr; 
  bdAddrHandle *v3; 
  volatile signed __int32 *p_m_refCount; 
  bool v5; 
  bdReference<bdAddrHandle> *Handle; 

  m_ptr = NetAddress::GetHandle(&this->m_address)->m_ptr;
  v3 = m_ptr;
  p_m_refCount = (volatile signed __int32 *)&m_ptr->m_refCount;
  if ( m_ptr )
  {
    _InterlockedExchangeAdd(p_m_refCount, 1u);
    v3 = m_ptr;
  }
  v5 = m_ptr && bdAddrHandle::getUserData(v3) == this;
  if ( m_ptr && _InterlockedExchangeAdd(p_m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdAddrHandle *, __int64))m_ptr->~bdReferencable)(m_ptr, 1i64);
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_endpoint.cpp", 136, ASSERT_TYPE_ASSERT, "(IsBound())", (const char *)&queryFormat, "IsBound()", -2i64) )
    __debugbreak();
  if ( this->m_referenceCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_endpoint.cpp", 137, ASSERT_TYPE_ASSERT, "(m_referenceCount > 0)", (const char *)&queryFormat, "m_referenceCount > 0") )
    __debugbreak();
  Handle = NetAddress::GetHandle(&this->m_address);
  bdAddrHandle::setUserData(Handle->m_ptr, NULL);
}

/*
==============
NetEndpoint::GetAddress
==============
*/
NetEndpoint *NetEndpoint::GetAddress(NetEndpoint *this)
{
  return this;
}

/*
==============
NetEndpoint::GetAddress
==============
*/
NetEndpoint *NetEndpoint::GetAddress(NetEndpoint *this)
{
  return this;
}

/*
==============
NetEndpoint::GetCommonAddr
==============
*/
const bdReference<bdCommonAddr> *NetEndpoint::GetCommonAddr(NetEndpoint *this)
{
  if ( NetAddress::IsNull(&this->m_address) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_endpoint.cpp", 271, ASSERT_TYPE_ASSERT, "(IsOpened())", (const char *)&queryFormat, "IsOpened()") )
    __debugbreak();
  return NetAddress::GetCommonAddr(&this->m_address);
}

/*
==============
NetEndpoint::GetConnectionCount
==============
*/
__int64 NetEndpoint::GetConnectionCount(NetEndpoint *this)
{
  return (unsigned int)this->m_connectionCount;
}

/*
==============
NetEndpoint::GetConnectionSlot
==============
*/
NetConnection **NetEndpoint::GetConnectionSlot(NetEndpoint *this, NetConnection *connection)
{
  int Type; 
  __int64 v5; 
  __int64 LocalId; 
  __int64 NetId; 
  int v9; 
  int v10; 

  Type = NetConnection::GetType(connection);
  if ( Type <= 0 )
    goto LABEL_14;
  if ( Type <= 2 )
  {
LABEL_7:
    v5 = 0i64;
    goto LABEL_8;
  }
  if ( Type > 5 )
  {
LABEL_14:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_endpoint.cpp", 319, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "invalid connection id") )
      __debugbreak();
    goto LABEL_7;
  }
  v5 = 1i64;
LABEL_8:
  LocalId = NetConnection::GetLocalId(connection);
  NetId = NetConnection::GetNetId(connection);
  if ( (unsigned int)LocalId >= 3 )
  {
    v10 = 3;
    v9 = LocalId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_endpoint.cpp", 332, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( CONNECTION_ID_COUNT )", "localId doesn't index CONNECTION_ID_COUNT\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  return &this->m_connections[v5][LocalId][NetId];
}

/*
==============
NetEndpoint::GetConnectionType
==============
*/
__int64 NetEndpoint::GetConnectionType(NetEndpoint *this, NetConnection *connection)
{
  int Type; 

  Type = NetConnection::GetType(connection);
  if ( Type <= 0 )
  {
LABEL_5:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_endpoint.cpp", 319, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "invalid connection id") )
      __debugbreak();
    return 0i64;
  }
  if ( Type > 2 )
  {
    if ( Type <= 5 )
      return 1i64;
    goto LABEL_5;
  }
  return 0i64;
}

/*
==============
NetEndpoint::GetLastRecv
==============
*/
__int64 NetEndpoint::GetLastRecv(NetEndpoint *this)
{
  return (unsigned int)this->m_lastRecv;
}

/*
==============
NetEndpoint::GetLastSent
==============
*/
__int64 NetEndpoint::GetLastSent(NetEndpoint *this)
{
  return (unsigned int)this->m_lastSent;
}

/*
==============
NetEndpoint::GetReferenceCount
==============
*/
__int64 NetEndpoint::GetReferenceCount(NetEndpoint *this)
{
  return (unsigned int)this->m_referenceCount;
}

/*
==============
NetEndpoint::GetSecurityId
==============
*/
const bdSecurityID *NetEndpoint::GetSecurityId(NetEndpoint *this)
{
  if ( NetAddress::IsNull(&this->m_address) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_endpoint.cpp", 264, ASSERT_TYPE_ASSERT, "(IsOpened())", (const char *)&queryFormat, "IsOpened()") )
    __debugbreak();
  return NetSession::GetSecurityId(this->m_session);
}

/*
==============
NetEndpoint::GetSession
==============
*/
NetSession *NetEndpoint::GetSession(NetEndpoint *this)
{
  return this->m_session;
}

/*
==============
NetEndpoint::GetString
==============
*/
const char *NetEndpoint::GetString(NetEndpoint *this)
{
  return NetAddress::GetString(&this->m_address, 1);
}

/*
==============
NetEndpoint::GetString
==============
*/

const char *__fastcall NetEndpoint::GetString(NetEndpoint *this, bool includeIndex)
{
  return NetAddress::GetString(&this->m_address, includeIndex);
}

/*
==============
NetEndpoint::GetTelemetry
==============
*/
bdDTLSAssociationTelemetry *NetEndpoint::GetTelemetry(NetEndpoint *this)
{
  bdAddrHandle *m_ptr; 
  volatile signed __int32 *p_m_refCount; 
  bdSocketRouter *SocketRouter; 
  bdDTLSAssociationTelemetry *p_m_telemetry; 
  bdReference<bdAddrHandle> addrHandle; 
  __int64 v8; 
  bdDTLSAssociationTelemetry result; 

  v8 = -2i64;
  m_ptr = NetAddress::GetHandle(&this->m_address)->m_ptr;
  p_m_refCount = (volatile signed __int32 *)&m_ptr->m_refCount;
  if ( m_ptr )
    _InterlockedExchangeAdd(p_m_refCount, 1u);
  NET_EnterCriticalSection();
  if ( m_ptr && bdAddrHandle::isResolved(m_ptr) )
  {
    SocketRouter = dwGetSocketRouter();
    addrHandle.m_ptr = m_ptr;
    _InterlockedExchangeAdd(p_m_refCount, 1u);
    this->m_telemetry = *bdSocketRouter::getTelemetry(SocketRouter, &result, (const bdReference<bdAddrHandle>)&addrHandle);
  }
  NET_ExitCriticalSection();
  p_m_telemetry = &this->m_telemetry;
  if ( m_ptr && _InterlockedExchangeAdd(p_m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdAddrHandle *, __int64))m_ptr->~bdReferencable)(m_ptr, 1i64);
  return p_m_telemetry;
}

/*
==============
NetEndpoint::Graveyard
==============
*/
void NetEndpoint::Graveyard(NetEndpoint *this, bool graveyarded)
{
  this->m_graveyarded = graveyarded;
}

/*
==============
NetEndpoint::IsActive
==============
*/

bool __fastcall NetEndpoint::IsActive(NetEndpoint *this)
{
  return NetAddress::IsActive(&this->m_address);
}

/*
==============
NetEndpoint::IsBound
==============
*/
_BOOL8 NetEndpoint::IsBound(NetEndpoint *this)
{
  bdAddrHandle *m_ptr; 
  volatile signed __int32 *p_m_refCount; 
  bool v4; 

  m_ptr = NetAddress::GetHandle(&this->m_address)->m_ptr;
  p_m_refCount = (volatile signed __int32 *)&m_ptr->m_refCount;
  if ( m_ptr )
    _InterlockedExchangeAdd(p_m_refCount, 1u);
  v4 = m_ptr && bdAddrHandle::getUserData(m_ptr) == this;
  if ( m_ptr && _InterlockedExchangeAdd(p_m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdAddrHandle *, __int64))m_ptr->~bdReferencable)(m_ptr, 1i64);
  return v4;
}

/*
==============
NetEndpoint::IsConnected
==============
*/

bool __fastcall NetEndpoint::IsConnected(NetEndpoint *this)
{
  return NetAddress::IsConnected(&this->m_address);
}

/*
==============
NetEndpoint::IsLoopback
==============
*/

bool __fastcall NetEndpoint::IsLoopback(NetEndpoint *this)
{
  return NetAddress::IsLoopback(&this->m_address);
}

/*
==============
NetEndpoint::IsOpened
==============
*/
bool NetEndpoint::IsOpened(NetEndpoint *this)
{
  return !NetAddress::IsNull(&this->m_address);
}

/*
==============
NetEndpoint::OnClose
==============
*/
void NetEndpoint::OnClose(NetEndpoint *this, const bdReference<bdDTLSAssociation> *dtls)
{
  bdDTLSAssociationTelemetry result; 

  this->m_telemetry = *bdDTLSAssociation::getTelemetry(dtls->m_ptr, &result);
}

/*
==============
NetEndpoint::OnRecv
==============
*/
void NetEndpoint::OnRecv(NetEndpoint *this)
{
  this->m_lastRecv = Sys_Milliseconds();
}

/*
==============
NetEndpoint::OnSend
==============
*/
void NetEndpoint::OnSend(NetEndpoint *this)
{
  this->m_lastSent = Sys_Milliseconds();
}

/*
==============
NetEndpoint::Open
==============
*/
void NetEndpoint::Open(NetEndpoint *this, const bdReference<bdAddrHandle> *addrHandle, NetSession *session)
{
  if ( !NetAddress::IsNull(&this->m_address) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_endpoint.cpp", 35, ASSERT_TYPE_ASSERT, "(!IsOpened())", (const char *)&queryFormat, "!IsOpened()") )
    __debugbreak();
  if ( this->m_referenceCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_endpoint.cpp", 36, ASSERT_TYPE_ASSERT, "(m_referenceCount == 0)", (const char *)&queryFormat, "m_referenceCount == 0") )
    __debugbreak();
  if ( bdAddrHandle::getUserData(addrHandle->m_ptr) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_endpoint.cpp", 37, ASSERT_TYPE_ASSERT, "(addrHandle->getUserData() == 0)", (const char *)&queryFormat, "addrHandle->getUserData() == NULL") )
    __debugbreak();
  if ( !NetSession::IsValid(session) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_endpoint.cpp", 38, ASSERT_TYPE_ASSERT, "(session->IsValid())", (const char *)&queryFormat, "session->IsValid()") )
    __debugbreak();
  NetAddress::Init(&this->m_address, addrHandle);
  this->m_session = session;
  NetSession::AddReference(session);
}

/*
==============
NetEndpoint::RemoveReference
==============
*/
void NetEndpoint::RemoveReference(NetEndpoint *this, bool keepOpen)
{
  volatile int *p_m_referenceCount; 
  NetSession *m_session; 
  bool IsBacklog; 
  __int64 v7; 
  bdDTLSAssociationTelemetry v8; 

  if ( NetAddress::IsNull(&this->m_address) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_endpoint.cpp", 176, ASSERT_TYPE_ASSERT, "(IsOpened())", (const char *)&queryFormat, "IsOpened()") )
    __debugbreak();
  p_m_referenceCount = &this->m_referenceCount;
  if ( this->m_referenceCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_endpoint.cpp", 177, ASSERT_TYPE_ASSERT, "(m_referenceCount > 0)", (const char *)&queryFormat, "m_referenceCount > 0") )
    __debugbreak();
  if ( (((_BYTE)this - 88) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &this->m_referenceCount) )
    __debugbreak();
  if ( _InterlockedExchangeAdd(p_m_referenceCount, 0xFFFFFFFF) == 1 && !keepOpen )
  {
    if ( *p_m_referenceCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_endpoint.cpp", 65, ASSERT_TYPE_ASSERT, "(m_referenceCount == 0)", (const char *)&queryFormat, "m_referenceCount == 0") )
      __debugbreak();
    if ( this->m_connectionCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_endpoint.cpp", 66, ASSERT_TYPE_ASSERT, "(m_connectionCount == 0)", (const char *)&queryFormat, "m_connectionCount == 0") )
      __debugbreak();
    m_session = this->m_session;
    if ( m_session )
    {
      IsBacklog = NetAddress::IsBacklog(&this->m_address);
      NetSession::RemoveReference(m_session, IsBacklog);
      this->m_session = NULL;
    }
    *(_QWORD *)&this->m_lastRecv = 0i64;
    this->m_graveyarded = 0;
    bdDTLSAssociationTelemetry::bdDTLSAssociationTelemetry(&v8);
    *(_OWORD *)&this->m_telemetry.m_lastState = *(_OWORD *)v7;
    *(_OWORD *)&this->m_telemetry.m_stageCookieEchoMsSinceStart = *(_OWORD *)(v7 + 16);
    *(_OWORD *)&this->m_telemetry.m_peerAddr.m_address.inUn.m_sockaddrStorage.ss_family = *(_OWORD *)(v7 + 32);
    *(in6_addr *)((char *)&this->m_telemetry.m_peerAddr.m_address.inUn.m_ipv6Sockaddr.sin6_addr + 8) = *(in6_addr *)(v7 + 48);
    *((_OWORD *)&this->m_telemetry.m_peerAddr.m_address.inUn.m_ipv6Sockaddr + 2) = *(_OWORD *)(v7 + 64);
    *((_OWORD *)&this->m_telemetry.m_peerAddr.m_address.inUn.m_ipv6Sockaddr + 3) = *(_OWORD *)(v7 + 80);
    *((_OWORD *)&this->m_telemetry.m_peerAddr.m_address.inUn.m_ipv6Sockaddr + 4) = *(_OWORD *)(v7 + 96);
    *((_OWORD *)&this->m_telemetry.m_peerAddr.m_address.inUn.m_ipv6Sockaddr + 5) = *(_OWORD *)(v7 + 112);
    *((_OWORD *)&this->m_telemetry.m_peerAddr.m_address.inUn.m_ipv6Sockaddr + 6) = *(_OWORD *)(v7 + 128);
    *((_OWORD *)&this->m_telemetry.m_peerAddr.m_address.inUn.m_ipv6Sockaddr + 7) = *(_OWORD *)(v7 + 144);
    this->m_telemetry.m_peerAddr.m_relayRoute = *(bdRelayRoute *)(v7 + 160);
    *(_OWORD *)&this->m_telemetry.m_peerAddr.m_type = *(_OWORD *)(v7 + 176);
    *(_OWORD *)&this->m_telemetry.m_recvSeqNum = *(_OWORD *)(v7 + 192);
    NetAddress::Clear(&this->m_address);
  }
}

/*
==============
NetEndpoint::Unbind
==============
*/
void NetEndpoint::Unbind(NetEndpoint *this, NetConnection *connection)
{
  if ( !NetConnection::IsLocal(connection) )
    *NetEndpoint::GetConnectionSlot(this, connection) = NULL;
  if ( (((_BYTE)this - 84) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &this->m_connectionCount) )
    __debugbreak();
  if ( _InterlockedExchangeAdd(&this->m_connectionCount, 0xFFFFFFFF) == 1 && !this->m_graveyarded )
    NetEndpoint::Disconnect(this);
}

/*
==============
NetEndpoint::Update
==============
*/
void NetEndpoint::Update(NetEndpoint *this, const bdReference<bdAddrHandle> *addrHandle)
{
  if ( this->m_referenceCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_endpoint.cpp", 48, ASSERT_TYPE_ASSERT, "(m_referenceCount > 0)", (const char *)&queryFormat, "m_referenceCount > 0") )
    __debugbreak();
  if ( bdAddrHandle::getUserData(addrHandle->m_ptr) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_endpoint.cpp", 49, ASSERT_TYPE_ASSERT, "(addrHandle->getUserData() == 0)", (const char *)&queryFormat, "addrHandle->getUserData() == NULL") )
    __debugbreak();
  NetEndpoint::Disconnect(this);
  NetAddress::Update(&this->m_address, addrHandle);
  NetEndpoint::Connect(this);
}

