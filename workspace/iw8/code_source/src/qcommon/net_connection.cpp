/*
==============
NetConnection::CompareAddr
==============
*/

bool __fastcall NetConnection::CompareAddr(NetConnection *this, const NetConnection *connection)
{
  return ?CompareAddr@NetConnection@@QEBA_NAEBV1@@Z(this, connection);
}

/*
==============
NetConnection::GetSecurityInfo
==============
*/

const XSECURITY_INFO *__fastcall NetConnection::GetSecurityInfo(NetConnection *this)
{
  return ?GetSecurityInfo@NetConnection@@QEBAAEBVXSECURITY_INFO@@XZ(this);
}

/*
==============
NetConnection::OnSend
==============
*/

void __fastcall NetConnection::OnSend(NetConnection *this, unsigned int sendFlags)
{
  ?OnSend@NetConnection@@AEBAXI@Z(this, sendFlags);
}

/*
==============
NetConnection::CloseInternal
==============
*/

void __fastcall NetConnection::CloseInternal(NetConnection *this, NetCloseStyle closeStyle)
{
  ?CloseInternal@NetConnection@@AEAAXW4NetCloseStyle@@@Z(this, closeStyle);
}

/*
==============
NetConnection::GetSessionInfo
==============
*/

bool __fastcall NetConnection::GetSessionInfo(NetConnection *this, XSESSION_INFO *outSession)
{
  return ?GetSessionInfo@NetConnection@@QEBA_NAEAVXSESSION_INFO@@@Z(this, outSession);
}

/*
==============
NetConnection::GetXnaddr
==============
*/

bool __fastcall NetConnection::GetXnaddr(NetConnection *this, XNADDR *outAddr)
{
  return ?GetXnaddr@NetConnection@@QEBA_NAEAUXNADDR@@@Z(this, outAddr);
}

/*
==============
NetConnection::Close
==============
*/

void __fastcall NetConnection::Close(NetConnection *this, const NetCloseStyle closeStyle)
{
  ?Close@NetConnection@@QEAAXW4NetCloseStyle@@@Z(this, closeStyle);
}

/*
==============
NetConnection::Update
==============
*/

void __fastcall NetConnection::Update(NetConnection *this, NetEndpoint *endpoint, netsrc_t localId, netsrc_t remoteId, NetConnection::Type type)
{
  ?Update@NetConnection@@AEAAXPEAVNetEndpoint@@W4netsrc_t@@1W4Type@1@@Z(this, endpoint, localId, remoteId, type);
}

/*
==============
NetConnection::IsSplitscreen
==============
*/

bool __fastcall NetConnection::IsSplitscreen(NetConnection *this)
{
  return ?IsSplitscreen@NetConnection@@QEBA_NXZ(this);
}

/*
==============
NetConnection::Reconnect
==============
*/

bool __fastcall NetConnection::Reconnect(NetConnection *this)
{
  return ?Reconnect@NetConnection@@QEAA_NXZ(this);
}

/*
==============
NetConnection::GetEndpoint
==============
*/

NetEndpoint *__fastcall NetConnection::GetEndpoint(NetConnection *this)
{
  return ?GetEndpoint@NetConnection@@QEAAPEAVNetEndpoint@@XZ(this);
}

/*
==============
NetConnection::operator==
==============
*/

bool __fastcall NetConnection::operator==(NetConnection *this, const netadr_t *addr)
{
  return ??8NetConnection@@QEBA_NAEBUnetadr_t@@@Z(this, addr);
}

/*
==============
NetConnection::GetTypeString
==============
*/

const char *__fastcall NetConnection::GetTypeString(NetConnection *this)
{
  return ?GetTypeString@NetConnection@@QEBAPEBDXZ(this);
}

/*
==============
NetConnection::GetEndpoint
==============
*/

const NetEndpoint *__fastcall NetConnection::GetEndpoint(NetConnection *this)
{
  return ?GetEndpoint@NetConnection@@QEBAPEBVNetEndpoint@@XZ(this);
}

/*
==============
NetConnection::Init
==============
*/

void __fastcall NetConnection::Init(NetConnection *this, NetEndpoint *endpoint, netsrc_t localId, netsrc_t remoteId, NetConnection::Type type)
{
  ?Init@NetConnection@@AEAAXPEAVNetEndpoint@@W4netsrc_t@@1W4Type@1@@Z(this, endpoint, localId, remoteId, type);
}

/*
==============
NetConnection::Set
==============
*/

void __fastcall NetConnection::Set(NetConnection *this, const netsrc_t localId, const netsrc_t remoteId, const NetConnection::Type type)
{
  ?Set@NetConnection@@QEAAXW4netsrc_t@@0W4Type@1@@Z(this, localId, remoteId, type);
}

/*
==============
NetConnection::SendReliable
==============
*/

bool __fastcall NetConnection::SendReliable(NetConnection *this, const char *string)
{
  return ?SendReliable@NetConnection@@QEBA_NPEBD@Z(this, string);
}

/*
==============
NetConnection::IsRemote
==============
*/

bool __fastcall NetConnection::IsRemote(NetConnection *this)
{
  return ?IsRemote@NetConnection@@QEBA_NXZ(this);
}

/*
==============
NetConnection::IsBot
==============
*/

bool __fastcall NetConnection::IsBot(NetConnection *this)
{
  return ?IsBot@NetConnection@@QEBA_NXZ(this);
}

/*
==============
NetConnection::GetLocalClient
==============
*/

LocalClientNum_t __fastcall NetConnection::GetLocalClient(NetConnection *this)
{
  return ?GetLocalClient@NetConnection@@QEBA?AW4LocalClientNum_t@@XZ(this);
}

/*
==============
NetConnection::Accept
==============
*/

bool __fastcall NetConnection::Accept(NetConnection *this, const netadr_t *addr, const NetConnection::Type type, const NetConnection::AcceptStyle acceptStyle)
{
  return ?Accept@NetConnection@@QEAA_NAEBUnetadr_t@@W4Type@1@W4AcceptStyle@1@@Z(this, addr, type, acceptStyle);
}

/*
==============
NetConnection::IsDedicated
==============
*/

bool __fastcall NetConnection::IsDedicated(NetConnection *this)
{
  return ?IsDedicated@NetConnection@@QEBA_NXZ(this);
}

/*
==============
NetConnection::SendUnreliable
==============
*/

int __fastcall NetConnection::SendUnreliable(NetConnection *this, const unsigned __int8 *data, const int length)
{
  return ?SendUnreliable@NetConnection@@QEBAHPEBEH@Z(this, data, length);
}

/*
==============
NetConnection::SendP2P
==============
*/

int __fastcall NetConnection::SendP2P(NetConnection *this, const netsrc_t localId, const char *string)
{
  return ?SendP2P@NetConnection@@QEBAHW4netsrc_t@@PEBD@Z(this, localId, string);
}

/*
==============
NetConnection::IsRelay
==============
*/

bool __fastcall NetConnection::IsRelay(NetConnection *this)
{
  return ?IsRelay@NetConnection@@QEBA_NXZ(this);
}

/*
==============
NetConnection::operator=
==============
*/

NetConnection *__fastcall NetConnection::operator=(NetConnection *this, NetEndpoint *endpoint)
{
  return ??4NetConnection@@QEAAAEAV0@PEAVNetEndpoint@@@Z(this, endpoint);
}

/*
==============
NetConnection::NetConnection
==============
*/

void __fastcall NetConnection::NetConnection(NetConnection *this)
{
  ??0NetConnection@@QEAA@XZ(this);
}

/*
==============
NetConnection::operator==
==============
*/

bool __fastcall NetConnection::operator==(NetConnection *this, const NetConnection *other)
{
  return ??8NetConnection@@QEBA_NAEBV0@@Z(this, other);
}

/*
==============
NetConnection::GetCommonAddr
==============
*/

const bdReference<bdCommonAddr> *__fastcall NetConnection::GetCommonAddr(NetConnection *this)
{
  return ?GetCommonAddr@NetConnection@@AEBAAEBV?$bdReference@VbdCommonAddr@@@@XZ(this);
}

/*
==============
NetConnection::SendReliable
==============
*/

bool __fastcall NetConnection::SendReliable(NetConnection *this, msg_t *msg, unsigned int sendFlags)
{
  return ?SendReliable@NetConnection@@QEBA_NPEAUmsg_t@@I@Z(this, msg, sendFlags);
}

/*
==============
NetConnection::SendP2P
==============
*/

int __fastcall NetConnection::SendP2P(NetConnection *this, const netsrc_t localId, const unsigned __int8 *data, const int length)
{
  return ?SendP2P@NetConnection@@QEBAHW4netsrc_t@@PEBEH@Z(this, localId, data, length);
}

/*
==============
NetConnection::Migrate
==============
*/

void __fastcall NetConnection::Migrate(NetConnection *this, const netsrc_t localId, const netsrc_t remoteId)
{
  ?Migrate@NetConnection@@QEAAXW4netsrc_t@@0@Z(this, localId, remoteId);
}

/*
==============
NetConnection::GetNetadr
==============
*/

netadr_t *__fastcall NetConnection::GetNetadr(NetConnection *this, netadr_t *result)
{
  return ?GetNetadr@NetConnection@@QEBA?AUnetadr_t@@XZ(this, result);
}

/*
==============
NetConnection::DropReliable
==============
*/

void __fastcall NetConnection::DropReliable(NetConnection *this)
{
  ?DropReliable@NetConnection@@QEBAXXZ(this);
}

/*
==============
NetConnection::IsOpened
==============
*/

bool __fastcall NetConnection::IsOpened(NetConnection *this)
{
  return ?IsOpened@NetConnection@@QEBA_NXZ(this);
}

/*
==============
NetConnection::operator=
==============
*/

NetConnection *__fastcall NetConnection::operator=(NetConnection *this, const NetConnection *other)
{
  return ??4NetConnection@@QEAAAEAV0@AEBV0@@Z(this, other);
}

/*
==============
NetConnection::Migrate
==============
*/

bool __fastcall NetConnection::Migrate(NetConnection *this, const XNADDR *addr)
{
  return ?Migrate@NetConnection@@QEAA_NAEBUXNADDR@@@Z(this, addr);
}

/*
==============
NetConnection::IsConnected
==============
*/

bool __fastcall NetConnection::IsConnected(NetConnection *this)
{
  return ?IsConnected@NetConnection@@QEBA_NXZ(this);
}

/*
==============
NetConnection::GetAddress
==============
*/

const NetAddress *__fastcall NetConnection::GetAddress(NetConnection *this)
{
  return ?GetAddress@NetConnection@@QEBAAEBVNetAddress@@XZ(this);
}

/*
==============
NetConnection::GetNetId
==============
*/

netsrc_t __fastcall NetConnection::GetNetId(NetConnection *this)
{
  return ?GetNetId@NetConnection@@QEBA?AW4netsrc_t@@XZ(this);
}

/*
==============
NetConnection::GetLastRecv
==============
*/

int __fastcall NetConnection::GetLastRecv(NetConnection *this)
{
  return ?GetLastRecv@NetConnection@@QEBAHXZ(this);
}

/*
==============
NetConnection::SendReliable
==============
*/

bool __fastcall NetConnection::SendReliable(NetConnection *this, msg_t *msg, unsigned int sendFlags, unsigned int *outHandle)
{
  return ?SendReliable@NetConnection@@QEBA_NPEAUmsg_t@@IPEAI@Z(this, msg, sendFlags, outHandle);
}

/*
==============
NetConnection::GetTelemetry
==============
*/

bool __fastcall NetConnection::GetTelemetry(NetConnection *this, DLogContext *context, const char *prefix, bool includeAddrs)
{
  return ?GetTelemetry@NetConnection@@QEAA_NPEAUDLogContext@@PEBD_N@Z(this, context, prefix, includeAddrs);
}

/*
==============
NetConnection::SendUnreliable
==============
*/

int __fastcall NetConnection::SendUnreliable(NetConnection *this, const unsigned __int8 *data, const int length, const unsigned int sendFlags)
{
  return ?SendUnreliable@NetConnection@@QEBAHPEBEHI@Z(this, data, length, sendFlags);
}

/*
==============
NetConnection::CompareSession
==============
*/

bool __fastcall NetConnection::CompareSession(NetConnection *this, const XSESSION_INFO *other)
{
  return ?CompareSession@NetConnection@@QEBA_NAEBVXSESSION_INFO@@@Z(this, other);
}

/*
==============
NetConnection::Open
==============
*/

bool __fastcall NetConnection::Open(NetConnection *this, const netsrc_t localNetId, const XSESSION_INFO *sessionInfo, const XNADDR *addr, const netsrc_t netId, const NetConnection::Type type)
{
  return ?Open@NetConnection@@QEAA_NW4netsrc_t@@AEBVXSESSION_INFO@@AEBUXNADDR@@0W4Type@1@@Z(this, localNetId, sessionInfo, addr, netId, type);
}

/*
==============
NetConnection::AcceptInternal
==============
*/

bool __fastcall NetConnection::AcceptInternal(NetConnection *this, const netsrc_t localId, const netadr_t *addr, const NetConnection::Type type)
{
  return ?AcceptInternal@NetConnection@@AEAA_NW4netsrc_t@@AEBUnetadr_t@@W4Type@1@@Z(this, localId, addr, type);
}

/*
==============
NetConnection::operator!=
==============
*/

bool __fastcall NetConnection::operator!=(NetConnection *this, const netadr_t *other)
{
  return ??9NetConnection@@QEBA_NAEBUnetadr_t@@@Z(this, other);
}

/*
==============
NetConnection::SendReliable
==============
*/

bool __fastcall NetConnection::SendReliable(NetConnection *this, msg_t *msg)
{
  return ?SendReliable@NetConnection@@QEBA_NPEAUmsg_t@@@Z(this, msg);
}

/*
==============
NetConnection::IsThrottled
==============
*/

bool __fastcall NetConnection::IsThrottled(NetConnection *this)
{
  return ?IsThrottled@NetConnection@@QEBA_NXZ(this);
}

/*
==============
NetConnection::GetLastSent
==============
*/

int __fastcall NetConnection::GetLastSent(NetConnection *this)
{
  return ?GetLastSent@NetConnection@@QEBAHXZ(this);
}

/*
==============
NetConnection::SendP2P
==============
*/

int __fastcall NetConnection::SendP2P(NetConnection *this, const netsrc_t localId, const unsigned __int8 *data, const int length, const unsigned int sendFlags)
{
  return ?SendP2P@NetConnection@@QEBAHW4netsrc_t@@PEBEHI@Z(this, localId, data, length, sendFlags);
}

/*
==============
NetConnection::GetLocalId
==============
*/

netsrc_t __fastcall NetConnection::GetLocalId(NetConnection *this)
{
  return ?GetLocalId@NetConnection@@QEBA?AW4netsrc_t@@XZ(this);
}

/*
==============
NetConnection::IsLocal
==============
*/

bool __fastcall NetConnection::IsLocal(NetConnection *this)
{
  return ?IsLocal@NetConnection@@QEBA_NXZ(this);
}

/*
==============
NetConnection::GetString
==============
*/

const char *__fastcall NetConnection::GetString(NetConnection *this)
{
  return ?GetString@NetConnection@@QEBAPEBDXZ(this);
}

/*
==============
NetConnection::GetDtlsStateString
==============
*/

const char *__fastcall NetConnection::GetDtlsStateString(NetConnection *this)
{
  return ?GetDtlsStateString@NetConnection@@QEBAPEBDXZ(this);
}

/*
==============
NetConnection::GetSecurityId
==============
*/

const bdSecurityID *__fastcall NetConnection::GetSecurityId(NetConnection *this)
{
  return ?GetSecurityId@NetConnection@@QEBAAEBVbdSecurityID@@XZ(this);
}

/*
==============
NetConnection::operator=
==============
*/

NetConnection *__fastcall NetConnection::operator=(NetConnection *this, const netadr_t *addr)
{
  return ??4NetConnection@@QEAAAEAV0@AEBUnetadr_t@@@Z(this, addr);
}

/*
==============
NetConnection::GetCloseStyleString
==============
*/

const char *__fastcall NetConnection::GetCloseStyleString(NetConnection *this, NetCloseStyle closeStyle)
{
  return ?GetCloseStyleString@NetConnection@@AEAAPEBDW4NetCloseStyle@@@Z(this, closeStyle);
}

/*
==============
NetConnection::CompareAddr
==============
*/

bool __fastcall NetConnection::CompareAddr(NetConnection *this, const XNADDR *xnaddr)
{
  return ?CompareAddr@NetConnection@@QEBA_NAEBUXNADDR@@@Z(this, xnaddr);
}

/*
==============
NetConnection::CompareAddr
==============
*/

bool __fastcall NetConnection::CompareAddr(NetConnection *this, const netadr_t *addr)
{
  return ?CompareAddr@NetConnection@@QEBA_NAEBUnetadr_t@@@Z(this, addr);
}

/*
==============
NetConnection::GetNetIdString
==============
*/

const char *__fastcall NetConnection::GetNetIdString(NetConnection *this)
{
  return ?GetNetIdString@NetConnection@@QEBAPEBDXZ(this);
}

/*
==============
NetConnection::IsActive
==============
*/

bool __fastcall NetConnection::IsActive(NetConnection *this)
{
  return ?IsActive@NetConnection@@QEBA_NXZ(this);
}

/*
==============
NetConnection::SendReliable
==============
*/

bool __fastcall NetConnection::SendReliable(NetConnection *this, const char *string, unsigned int sendFlags)
{
  return ?SendReliable@NetConnection@@QEBA_NPEBDI@Z(this, string, sendFlags);
}

/*
==============
NetConnection::IsP2P
==============
*/

bool __fastcall NetConnection::IsP2P(NetConnection *this)
{
  return ?IsP2P@NetConnection@@QEBA_NXZ(this);
}

/*
==============
NetConnection::GetType
==============
*/

NetConnection::Type __fastcall NetConnection::GetType(NetConnection *this)
{
  return ?GetType@NetConnection@@QEBA?AW4Type@1@XZ(this);
}

/*
==============
NetConnection::IsServer
==============
*/

bool __fastcall NetConnection::IsServer(NetConnection *this)
{
  return ?IsServer@NetConnection@@QEBA_NXZ(this);
}

/*
==============
NetConnection::SendUnreliable
==============
*/

int __fastcall NetConnection::SendUnreliable(NetConnection *this, const char *string)
{
  return ?SendUnreliable@NetConnection@@QEBAHPEBD@Z(this, string);
}

/*
==============
NetConnection::GetStateString
==============
*/

const char *__fastcall NetConnection::GetStateString(NetConnection *this)
{
  return ?GetStateString@NetConnection@@QEBAPEBDXZ(this);
}

/*
==============
NetConnection::GetState
==============
*/

NetConnection::State __fastcall NetConnection::GetState(NetConnection *this)
{
  return ?GetState@NetConnection@@QEBA?AW4State@1@XZ(this);
}

/*
==============
NetConnection::IsLoopback
==============
*/

bool __fastcall NetConnection::IsLoopback(NetConnection *this)
{
  return ?IsLoopback@NetConnection@@QEBA_NXZ(this);
}

/*
==============
NetConnection::NetConnection
==============
*/
void NetConnection::NetConnection(NetConnection *this)
{
  this->m_localId = NS_INVALID_NETSRC;
  this->m_endpoint = NULL;
  this->m_channel = NULL;
  *(_QWORD *)&this->m_remoteId = 10004i64;
}

/*
==============
NetConnection::operator=
==============
*/
NetConnection *NetConnection::operator=(NetConnection *this, const netadr_t *addr)
{
  NetEndpoint *m_endpoint; 
  NetConnection::Type m_type; 
  netsrc_t m_localId; 
  NetEndpoint *v7; 

  m_endpoint = this->m_endpoint;
  if ( !m_endpoint )
    goto LABEL_13;
  if ( !NetEndpoint::IsOpened(m_endpoint) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 318, ASSERT_TYPE_ASSERT, "(m_endpoint == 0 || m_endpoint->IsOpened())", "%s\n\tEndpoint should always be open when referenced by a connection", "m_endpoint == NULL || m_endpoint->IsOpened()") )
    __debugbreak();
  if ( !this->m_endpoint )
  {
LABEL_13:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 54, ASSERT_TYPE_ASSERT, "(IsOpened())", "%s\n\tCannot switch addresses unless previously opened", "IsOpened()") )
      __debugbreak();
  }
  m_type = this->m_type;
  m_localId = this->m_localId;
  v7 = NET_AcceptConnection(this, addr->addrHandleIndex);
  if ( v7 )
    NetConnection::Update(this, v7, m_localId, addr->localNetID, m_type);
  return this;
}

/*
==============
NetConnection::operator=
==============
*/
NetConnection *NetConnection::operator=(NetConnection *this, const NetConnection *other)
{
  NetConnection::Update(this, other->m_endpoint, other->m_localId, other->m_remoteId, other->m_type);
  return this;
}

/*
==============
NetConnection::operator=
==============
*/
NetConnection *NetConnection::operator=(NetConnection *this, NetEndpoint *endpoint)
{
  NetConnection::Update(this, endpoint, this->m_localId, this->m_remoteId, this->m_type);
  return this;
}

/*
==============
NetConnection::operator==
==============
*/
bool NetConnection::operator==(NetConnection *this, const netadr_t *addr)
{
  NetEndpoint *m_endpoint; 
  NetAddress *Address; 

  m_endpoint = this->m_endpoint;
  if ( !m_endpoint )
    goto LABEL_14;
  if ( !NetEndpoint::IsOpened(m_endpoint) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 318, ASSERT_TYPE_ASSERT, "(m_endpoint == 0 || m_endpoint->IsOpened())", "%s\n\tEndpoint should always be open when referenced by a connection", "m_endpoint == NULL || m_endpoint->IsOpened()") )
    __debugbreak();
  if ( !this->m_endpoint )
  {
LABEL_14:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 433, ASSERT_TYPE_ASSERT, "(IsOpened())", (const char *)&queryFormat, "IsOpened()") )
      __debugbreak();
  }
  Address = NetEndpoint::GetAddress(this->m_endpoint);
  return NetAddress::GetIndex(Address) == addr->addrHandleIndex && addr->localNetID == this->m_remoteId;
}

/*
==============
NetConnection::operator==
==============
*/
bool NetConnection::operator==(NetConnection *this, const NetConnection *other)
{
  NetEndpoint *m_endpoint; 
  NetAddress *Address; 
  int Index; 
  NetAddress *v7; 

  m_endpoint = this->m_endpoint;
  if ( !m_endpoint )
    goto LABEL_21;
  if ( !NetEndpoint::IsOpened(m_endpoint) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 318, ASSERT_TYPE_ASSERT, "(m_endpoint == 0 || m_endpoint->IsOpened())", "%s\n\tEndpoint should always be open when referenced by a connection", "m_endpoint == NULL || m_endpoint->IsOpened()") )
    __debugbreak();
  if ( !this->m_endpoint )
  {
LABEL_21:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 448, ASSERT_TYPE_ASSERT, "(IsOpened())", (const char *)&queryFormat, "IsOpened()") )
      __debugbreak();
  }
  if ( !other->m_endpoint )
    goto LABEL_22;
  if ( !NetEndpoint::IsOpened(other->m_endpoint) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 318, ASSERT_TYPE_ASSERT, "(m_endpoint == 0 || m_endpoint->IsOpened())", "%s\n\tEndpoint should always be open when referenced by a connection", "m_endpoint == NULL || m_endpoint->IsOpened()") )
    __debugbreak();
  if ( !other->m_endpoint )
  {
LABEL_22:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 449, ASSERT_TYPE_ASSERT, "(connection.IsOpened())", (const char *)&queryFormat, "connection.IsOpened()") )
      __debugbreak();
  }
  Address = NetEndpoint::GetAddress(this->m_endpoint);
  Index = NetAddress::GetIndex(Address);
  v7 = NetEndpoint::GetAddress(other->m_endpoint);
  return Index == NetAddress::GetIndex(v7) && other->m_remoteId == this->m_remoteId;
}

/*
==============
NetConnection::operator!=
==============
*/
bool NetConnection::operator!=(NetConnection *this, const netadr_t *other)
{
  NetEndpoint *m_endpoint; 
  NetAddress *Address; 

  m_endpoint = this->m_endpoint;
  if ( !m_endpoint )
    goto LABEL_14;
  if ( !NetEndpoint::IsOpened(m_endpoint) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 318, ASSERT_TYPE_ASSERT, "(m_endpoint == 0 || m_endpoint->IsOpened())", "%s\n\tEndpoint should always be open when referenced by a connection", "m_endpoint == NULL || m_endpoint->IsOpened()") )
    __debugbreak();
  if ( !this->m_endpoint )
  {
LABEL_14:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 433, ASSERT_TYPE_ASSERT, "(IsOpened())", (const char *)&queryFormat, "IsOpened()") )
      __debugbreak();
  }
  Address = NetEndpoint::GetAddress(this->m_endpoint);
  return NetAddress::GetIndex(Address) != other->addrHandleIndex || other->localNetID != this->m_remoteId;
}

/*
==============
NetConnection::Accept
==============
*/
char NetConnection::Accept(NetConnection *this, const netadr_t *addr, const NetConnection::Type type, const NetConnection::AcceptStyle acceptStyle)
{
  NetEndpoint *m_endpoint; 
  NetEndpoint *v9; 
  const char *String; 
  const char *v11; 
  __int128 v13; 
  const char *v14; 
  netadr_t v15; 

  m_endpoint = this->m_endpoint;
  if ( m_endpoint )
  {
    if ( !NetEndpoint::IsOpened(m_endpoint) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 318, ASSERT_TYPE_ASSERT, "(m_endpoint == 0 || m_endpoint->IsOpened())", "%s\n\tEndpoint should always be open when referenced by a connection", "m_endpoint == NULL || m_endpoint->IsOpened()") )
      __debugbreak();
    if ( this->m_endpoint && acceptStyle != ACCEPT_REPLACE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 117, ASSERT_TYPE_ASSERT, "(!IsOpened() || acceptStyle == ACCEPT_REPLACE)", "%s\n\tConnection already open - close first", "!IsOpened() || acceptStyle == ACCEPT_REPLACE") )
      __debugbreak();
  }
  v9 = NET_AcceptConnection(this, addr->addrHandleIndex);
  if ( v9 )
  {
    NetConnection::Update(this, v9, NS_MAXCLIENTS, addr->localNetID, type);
    String = NetConnection::GetString(this);
    switch ( this->m_type )
    {
      case TYPE_PARTY:
        v11 = "PARTY";
        break;
      case TYPE_LOBBY:
        v11 = "LOBBY";
        break;
      case TYPE_JOIN:
        v11 = "JOIN";
        break;
      case TYPE_FRONTEND:
        v11 = "FRONTEND";
        break;
      case TYPE_GAME:
        v11 = "GAME";
        break;
      default:
        v11 = "UNKNOWN";
        break;
    }
    Com_Printf(25, "[NET] Accepted connection %s:%s\n", v11, String);
    return 1;
  }
  else
  {
    v13 = *(_OWORD *)&addr->type;
    v15.addrHandleIndex = addr->addrHandleIndex;
    *(_OWORD *)&v15.type = v13;
    v14 = NET_AdrToString(&v15);
    Com_PrintWarning(131097, "[NET] Failed to accept connection %s\n", v14);
    return 0;
  }
}

/*
==============
NetConnection::AcceptInternal
==============
*/
bool NetConnection::AcceptInternal(NetConnection *this, const netsrc_t localId, const netadr_t *addr, const NetConnection::Type type)
{
  NetEndpoint *v8; 

  v8 = NET_AcceptConnection(this, addr->addrHandleIndex);
  if ( v8 )
  {
    NetConnection::Update(this, v8, localId, addr->localNetID, type);
    LOBYTE(v8) = 1;
  }
  return (char)v8;
}

/*
==============
NetConnection::Close
==============
*/
void NetConnection::Close(NetConnection *this, const NetCloseStyle closeStyle)
{
  NetEndpoint *m_endpoint; 
  const char *v5; 
  const char *String; 
  const char *v7; 

  m_endpoint = this->m_endpoint;
  if ( m_endpoint )
  {
    if ( !NetEndpoint::IsOpened(m_endpoint) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 318, ASSERT_TYPE_ASSERT, "(m_endpoint == 0 || m_endpoint->IsOpened())", "%s\n\tEndpoint should always be open when referenced by a connection", "m_endpoint == NULL || m_endpoint->IsOpened()") )
      __debugbreak();
    if ( this->m_endpoint )
    {
      if ( closeStyle )
      {
        if ( closeStyle == NET_CLOSE_HARD )
        {
          v5 = "HARD";
        }
        else if ( closeStyle == NET_CLOSE_DTLS )
        {
          v5 = "DTLS";
        }
        else
        {
          v5 = NULL;
        }
      }
      else
      {
        v5 = "SOFT";
      }
      String = NetConnection::GetString(this);
      switch ( this->m_type )
      {
        case TYPE_PARTY:
          v7 = "PARTY";
          break;
        case TYPE_LOBBY:
          v7 = "LOBBY";
          break;
        case TYPE_JOIN:
          v7 = "JOIN";
          break;
        case TYPE_FRONTEND:
          v7 = "FRONTEND";
          break;
        case TYPE_GAME:
          v7 = "GAME";
          break;
        default:
          v7 = "UNKNOWN";
          break;
      }
      Com_Printf(25, "[NET] Closing connection %s:%s %s\n", v7, String, v5);
      NET_CloseConnection(this, closeStyle);
      NetEndpoint::Unbind(this->m_endpoint, this);
      if ( !NetConnection::IsLoopback(this) )
        NET_CloseChannel(this->m_channel);
      NetEndpoint::RemoveReference(this->m_endpoint, 0);
      this->m_endpoint = NULL;
      this->m_channel = NULL;
      *(_QWORD *)&this->m_remoteId = 10004i64;
      this->m_localId = NS_INVALID_NETSRC;
    }
  }
}

/*
==============
NetConnection::CloseInternal
==============
*/
void NetConnection::CloseInternal(NetConnection *this, NetCloseStyle closeStyle)
{
  NET_CloseConnection(this, closeStyle);
  NetEndpoint::Unbind(this->m_endpoint, this);
  if ( !NetConnection::IsLoopback(this) )
    NET_CloseChannel(this->m_channel);
  NetEndpoint::RemoveReference(this->m_endpoint, 0);
  *(_QWORD *)&this->m_remoteId = 10004i64;
  this->m_endpoint = NULL;
  this->m_channel = NULL;
  this->m_localId = NS_INVALID_NETSRC;
}

/*
==============
NetConnection::CompareAddr
==============
*/
char NetConnection::CompareAddr(NetConnection *this, const XNADDR *xnaddr)
{
  NetEndpoint *m_endpoint; 
  NetAddress *Address; 
  const bdReference<bdAddrHandle> *Handle; 
  unsigned __int8 buffer[96]; 

  m_endpoint = this->m_endpoint;
  if ( !m_endpoint )
    return 0;
  if ( !NetEndpoint::IsOpened(m_endpoint) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 318, ASSERT_TYPE_ASSERT, "(m_endpoint == 0 || m_endpoint->IsOpened())", "%s\n\tEndpoint should always be open when referenced by a connection", "m_endpoint == NULL || m_endpoint->IsOpened()") )
    __debugbreak();
  if ( this->m_endpoint && (Address = (NetAddress *)NetConnection::GetAddress(this), Handle = NetAddress::GetHandle(Address), bdCommonAddr::serialize(Handle->m_ptr->m_endpoint.m_ca.m_ptr, buffer), !memcmp_0(xnaddr, buffer, 0x54ui64)) )
    return 1;
  else
    return 0;
}

/*
==============
NetConnection::CompareAddr
==============
*/
bool NetConnection::CompareAddr(NetConnection *this, const netadr_t *addr)
{
  NetEndpoint *m_endpoint; 
  NetAddress *Address; 

  m_endpoint = this->m_endpoint;
  if ( !m_endpoint )
    goto LABEL_11;
  if ( !NetEndpoint::IsOpened(m_endpoint) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 318, ASSERT_TYPE_ASSERT, "(m_endpoint == 0 || m_endpoint->IsOpened())", "%s\n\tEndpoint should always be open when referenced by a connection", "m_endpoint == NULL || m_endpoint->IsOpened()") )
    __debugbreak();
  if ( !this->m_endpoint )
  {
LABEL_11:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 433, ASSERT_TYPE_ASSERT, "(IsOpened())", (const char *)&queryFormat, "IsOpened()") )
      __debugbreak();
  }
  Address = NetEndpoint::GetAddress(this->m_endpoint);
  return NetAddress::GetIndex(Address) == addr->addrHandleIndex;
}

/*
==============
NetConnection::CompareAddr
==============
*/
bool NetConnection::CompareAddr(NetConnection *this, const NetConnection *connection)
{
  NetEndpoint *m_endpoint; 
  NetAddress *Address; 
  int Index; 
  NetAddress *v7; 

  m_endpoint = this->m_endpoint;
  if ( !m_endpoint )
    goto LABEL_18;
  if ( !NetEndpoint::IsOpened(m_endpoint) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 318, ASSERT_TYPE_ASSERT, "(m_endpoint == 0 || m_endpoint->IsOpened())", "%s\n\tEndpoint should always be open when referenced by a connection", "m_endpoint == NULL || m_endpoint->IsOpened()") )
    __debugbreak();
  if ( !this->m_endpoint )
  {
LABEL_18:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 448, ASSERT_TYPE_ASSERT, "(IsOpened())", (const char *)&queryFormat, "IsOpened()") )
      __debugbreak();
  }
  if ( !connection->m_endpoint )
    goto LABEL_19;
  if ( !NetEndpoint::IsOpened(connection->m_endpoint) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 318, ASSERT_TYPE_ASSERT, "(m_endpoint == 0 || m_endpoint->IsOpened())", "%s\n\tEndpoint should always be open when referenced by a connection", "m_endpoint == NULL || m_endpoint->IsOpened()") )
    __debugbreak();
  if ( !connection->m_endpoint )
  {
LABEL_19:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 449, ASSERT_TYPE_ASSERT, "(connection.IsOpened())", (const char *)&queryFormat, "connection.IsOpened()") )
      __debugbreak();
  }
  Address = NetEndpoint::GetAddress(this->m_endpoint);
  Index = NetAddress::GetIndex(Address);
  v7 = NetEndpoint::GetAddress(connection->m_endpoint);
  return Index == NetAddress::GetIndex(v7);
}

/*
==============
NetConnection::CompareSession
==============
*/
_BOOL8 NetConnection::CompareSession(NetConnection *this, const XSESSION_INFO *other)
{
  NetAddress *Address; 
  const bdReference<bdAddrHandle> *Handle; 
  NetSession *Session; 
  const XSECURITY_INFO *SecurityInfo; 
  bool v8; 
  XSESSION_INFO v10; 
  XNADDR buffer; 

  bdSecurityID::bdSecurityID(&v10.m_security.m_id);
  bdSecurityKey::bdSecurityKey(&v10.m_security.m_key);
  if ( this->m_endpoint )
  {
    if ( !NetEndpoint::IsOpened(this->m_endpoint) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 318, ASSERT_TYPE_ASSERT, "(m_endpoint == 0 || m_endpoint->IsOpened())", "%s\n\tEndpoint should always be open when referenced by a connection", "m_endpoint == NULL || m_endpoint->IsOpened()") )
      __debugbreak();
    if ( this->m_endpoint )
    {
      if ( !NetEndpoint::IsOpened(this->m_endpoint) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 318, ASSERT_TYPE_ASSERT, "(m_endpoint == 0 || m_endpoint->IsOpened())", "%s\n\tEndpoint should always be open when referenced by a connection", "m_endpoint == NULL || m_endpoint->IsOpened()") )
        __debugbreak();
      if ( this->m_endpoint )
      {
        Address = (NetAddress *)NetConnection::GetAddress(this);
        Handle = NetAddress::GetHandle(Address);
        bdCommonAddr::serialize(Handle->m_ptr->m_endpoint.m_ca.m_ptr, buffer.addrBuff);
        if ( this->m_endpoint )
        {
          if ( !NetEndpoint::IsOpened(this->m_endpoint) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 318, ASSERT_TYPE_ASSERT, "(m_endpoint == 0 || m_endpoint->IsOpened())", "%s\n\tEndpoint should always be open when referenced by a connection", "m_endpoint == NULL || m_endpoint->IsOpened()") )
            __debugbreak();
        }
      }
      if ( !this->m_endpoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 528, ASSERT_TYPE_ASSERT, "(IsOpened())", (const char *)&queryFormat, "IsOpened()", -2i64, &v10.m_security) )
        __debugbreak();
      Session = NetEndpoint::GetSession(this->m_endpoint);
      SecurityInfo = NetSession::GetSecurityInfo(Session);
      XSESSION_INFO::Set(&v10, SecurityInfo, &buffer);
    }
  }
  v8 = XSESSION_INFO::operator==(&v10, other);
  bdSecurityKey::~bdSecurityKey(&v10.m_security.m_key);
  bdSecurityID::~bdSecurityID(&v10.m_security.m_id);
  return v8;
}

/*
==============
NetConnection::DropReliable
==============
*/
void NetConnection::DropReliable(NetConnection *this)
{
  NetEndpoint *m_endpoint; 
  netadr_t result; 

  m_endpoint = this->m_endpoint;
  if ( m_endpoint )
  {
    if ( !NetEndpoint::IsOpened(m_endpoint) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 318, ASSERT_TYPE_ASSERT, "(m_endpoint == 0 || m_endpoint->IsOpened())", "%s\n\tEndpoint should always be open when referenced by a connection", "m_endpoint == NULL || m_endpoint->IsOpened()") )
      __debugbreak();
    if ( this->m_endpoint )
    {
      NetConnection::GetNetadr(this, &result);
      RMsg_DropAddr(&result, 0);
    }
  }
}

/*
==============
NetConnection::GetAddress
==============
*/
NetAddress *NetConnection::GetAddress(NetConnection *this)
{
  NetEndpoint *m_endpoint; 

  m_endpoint = this->m_endpoint;
  if ( !m_endpoint )
    goto LABEL_11;
  if ( !NetEndpoint::IsOpened(m_endpoint) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 318, ASSERT_TYPE_ASSERT, "(m_endpoint == 0 || m_endpoint->IsOpened())", "%s\n\tEndpoint should always be open when referenced by a connection", "m_endpoint == NULL || m_endpoint->IsOpened()") )
    __debugbreak();
  if ( !this->m_endpoint )
  {
LABEL_11:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 476, ASSERT_TYPE_ASSERT, "(IsOpened())", (const char *)&queryFormat, "IsOpened()") )
      __debugbreak();
  }
  return NetEndpoint::GetAddress(this->m_endpoint);
}

/*
==============
NetConnection::GetCloseStyleString
==============
*/
const char *NetConnection::GetCloseStyleString(NetConnection *this, NetCloseStyle closeStyle)
{
  __int32 v2; 

  if ( closeStyle == NET_CLOSE_SOFT )
    return "SOFT";
  v2 = closeStyle - 1;
  if ( !v2 )
    return "HARD";
  if ( v2 == 1 )
    return "DTLS";
  return 0i64;
}

/*
==============
NetConnection::GetCommonAddr
==============
*/
const bdReference<bdCommonAddr> *NetConnection::GetCommonAddr(NetConnection *this)
{
  NetEndpoint *m_endpoint; 

  m_endpoint = this->m_endpoint;
  if ( !m_endpoint )
    goto LABEL_11;
  if ( !NetEndpoint::IsOpened(m_endpoint) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 318, ASSERT_TYPE_ASSERT, "(m_endpoint == 0 || m_endpoint->IsOpened())", "%s\n\tEndpoint should always be open when referenced by a connection", "m_endpoint == NULL || m_endpoint->IsOpened()") )
    __debugbreak();
  if ( !this->m_endpoint )
  {
LABEL_11:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 890, ASSERT_TYPE_ASSERT, "(IsOpened())", (const char *)&queryFormat, "IsOpened()") )
      __debugbreak();
  }
  return NetEndpoint::GetCommonAddr(this->m_endpoint);
}

/*
==============
NetConnection::GetDtlsStateString
==============
*/
const char *NetConnection::GetDtlsStateString(NetConnection *this)
{
  NetAddress *Address; 
  const bdReference<bdAddrHandle> *Handle; 
  bdSocketRouter *SocketRouter; 
  __int64 m_ptr; 
  bdSocketRouter_vtbl *v6; 
  bdDTLSAssociationStatus (__fastcall *getStatus)(bdSocketRouter *, const bdReference<bdAddrHandle>); 
  int v8; 
  int v9; 
  int v10; 
  __int64 v12; 

  if ( NetConnection::IsLoopback(this) )
    return "BD_SOCKET_CONNECTED";
  Address = (NetAddress *)NetConnection::GetAddress(this);
  Handle = NetAddress::GetHandle(Address);
  SocketRouter = dwGetSocketRouter();
  NET_EnterCriticalSection();
  m_ptr = (__int64)Handle->m_ptr;
  v6 = SocketRouter->bdNATTravListener::__vftable;
  v12 = m_ptr;
  getStatus = v6->getStatus;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)(m_ptr + 8), 1u);
  v8 = ((__int64 (__fastcall *)(bdSocketRouter *, __int64 *))getStatus)(SocketRouter, &v12);
  NET_ExitCriticalSection();
  if ( !v8 )
    return "BD_SOCKET_IDLE";
  v9 = v8 - 1;
  if ( !v9 )
    return "BD_SOCKET_PENDING";
  v10 = v9 - 1;
  if ( !v10 )
    return "BD_SOCKET_CONNECTED";
  if ( v10 == 1 )
    return "BD_SOCKET_LOST";
  return "UNKNOWN";
}

/*
==============
NetConnection::GetEndpoint
==============
*/
NetEndpoint *NetConnection::GetEndpoint(NetConnection *this)
{
  return this->m_endpoint;
}

/*
==============
NetConnection::GetEndpoint
==============
*/
NetEndpoint *NetConnection::GetEndpoint(NetConnection *this)
{
  return this->m_endpoint;
}

/*
==============
NetConnection::GetLastRecv
==============
*/
int NetConnection::GetLastRecv(NetConnection *this)
{
  NetEndpoint *m_endpoint; 

  m_endpoint = this->m_endpoint;
  if ( !m_endpoint )
    return 0;
  if ( !NetEndpoint::IsOpened(m_endpoint) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 318, ASSERT_TYPE_ASSERT, "(m_endpoint == 0 || m_endpoint->IsOpened())", "%s\n\tEndpoint should always be open when referenced by a connection", "m_endpoint == NULL || m_endpoint->IsOpened()") )
    __debugbreak();
  if ( this->m_endpoint )
    return NetEndpoint::GetLastRecv(this->m_endpoint);
  else
    return 0;
}

/*
==============
NetConnection::GetLastSent
==============
*/
int NetConnection::GetLastSent(NetConnection *this)
{
  NetEndpoint *m_endpoint; 

  m_endpoint = this->m_endpoint;
  if ( !m_endpoint )
    return 0;
  if ( !NetEndpoint::IsOpened(m_endpoint) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 318, ASSERT_TYPE_ASSERT, "(m_endpoint == 0 || m_endpoint->IsOpened())", "%s\n\tEndpoint should always be open when referenced by a connection", "m_endpoint == NULL || m_endpoint->IsOpened()") )
    __debugbreak();
  if ( this->m_endpoint )
    return NetEndpoint::GetLastSent(this->m_endpoint);
  else
    return 0;
}

/*
==============
NetConnection::GetLocalClient
==============
*/
__int64 NetConnection::GetLocalClient(NetConnection *this)
{
  return (unsigned int)this->m_localId;
}

/*
==============
NetConnection::GetLocalId
==============
*/
__int64 NetConnection::GetLocalId(NetConnection *this)
{
  return (unsigned int)this->m_localId;
}

/*
==============
NetConnection::GetNetId
==============
*/
__int64 NetConnection::GetNetId(NetConnection *this)
{
  return (unsigned int)this->m_remoteId;
}

/*
==============
NetConnection::GetNetIdString
==============
*/
const char *NetConnection::GetNetIdString(NetConnection *this)
{
  netsrc_t m_remoteId; 

  m_remoteId = this->m_remoteId;
  switch ( m_remoteId )
  {
    case NS_CLIENT1:
      return "CLIENT1";
    case NS_CLIENT2:
      return "CLIENT2";
    case NS_MAXCLIENTS:
      return "SERVER";
  }
  if ( (unsigned int)(m_remoteId - 4) > 0x270F )
    return "INVALID";
  return j_va("BOT%d", (unsigned int)(m_remoteId - 3));
}

/*
==============
NetConnection::GetNetadr
==============
*/
netadr_t *NetConnection::GetNetadr(NetConnection *this, netadr_t *result)
{
  NetEndpoint *m_endpoint; 
  NetAddress *Address; 

  m_endpoint = this->m_endpoint;
  if ( !m_endpoint )
    goto LABEL_11;
  if ( !NetEndpoint::IsOpened(m_endpoint) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 318, ASSERT_TYPE_ASSERT, "(m_endpoint == 0 || m_endpoint->IsOpened())", "%s\n\tEndpoint should always be open when referenced by a connection", "m_endpoint == NULL || m_endpoint->IsOpened()") )
    __debugbreak();
  if ( !this->m_endpoint )
  {
LABEL_11:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 483, ASSERT_TYPE_ASSERT, "(IsOpened())", (const char *)&queryFormat, "IsOpened()") )
      __debugbreak();
  }
  Address = (NetAddress *)NetConnection::GetAddress(this);
  NetAddress::GetNetadr(Address, result);
  result->localNetID = this->m_remoteId;
  return result;
}

/*
==============
NetConnection::GetSecurityId
==============
*/
const bdSecurityID *NetConnection::GetSecurityId(NetConnection *this)
{
  NetEndpoint *m_endpoint; 

  m_endpoint = this->m_endpoint;
  if ( !m_endpoint )
    goto LABEL_11;
  if ( !NetEndpoint::IsOpened(m_endpoint) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 318, ASSERT_TYPE_ASSERT, "(m_endpoint == 0 || m_endpoint->IsOpened())", "%s\n\tEndpoint should always be open when referenced by a connection", "m_endpoint == NULL || m_endpoint->IsOpened()") )
    __debugbreak();
  if ( !this->m_endpoint )
  {
LABEL_11:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 537, ASSERT_TYPE_ASSERT, "(IsOpened())", (const char *)&queryFormat, "IsOpened()") )
      __debugbreak();
  }
  return NetEndpoint::GetSecurityId(this->m_endpoint);
}

/*
==============
NetConnection::GetSecurityInfo
==============
*/
const XSECURITY_INFO *NetConnection::GetSecurityInfo(NetConnection *this)
{
  NetEndpoint *m_endpoint; 
  NetSession *Session; 

  m_endpoint = this->m_endpoint;
  if ( !m_endpoint )
    goto LABEL_11;
  if ( !NetEndpoint::IsOpened(m_endpoint) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 318, ASSERT_TYPE_ASSERT, "(m_endpoint == 0 || m_endpoint->IsOpened())", "%s\n\tEndpoint should always be open when referenced by a connection", "m_endpoint == NULL || m_endpoint->IsOpened()") )
    __debugbreak();
  if ( !this->m_endpoint )
  {
LABEL_11:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 528, ASSERT_TYPE_ASSERT, "(IsOpened())", (const char *)&queryFormat, "IsOpened()") )
      __debugbreak();
  }
  Session = NetEndpoint::GetSession(this->m_endpoint);
  return NetSession::GetSecurityInfo(Session);
}

/*
==============
NetConnection::GetSessionInfo
==============
*/
char NetConnection::GetSessionInfo(NetConnection *this, XSESSION_INFO *outSession)
{
  NetEndpoint *m_endpoint; 
  NetAddress *Address; 
  const bdReference<bdAddrHandle> *Handle; 
  NetSession *Session; 
  const XSECURITY_INFO *SecurityInfo; 
  XNADDR buffer; 

  m_endpoint = this->m_endpoint;
  if ( !m_endpoint )
    return 0;
  if ( !NetEndpoint::IsOpened(m_endpoint) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 318, ASSERT_TYPE_ASSERT, "(m_endpoint == 0 || m_endpoint->IsOpened())", "%s\n\tEndpoint should always be open when referenced by a connection", "m_endpoint == NULL || m_endpoint->IsOpened()") )
    __debugbreak();
  if ( !this->m_endpoint )
    return 0;
  if ( !NetEndpoint::IsOpened(this->m_endpoint) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 318, ASSERT_TYPE_ASSERT, "(m_endpoint == 0 || m_endpoint->IsOpened())", "%s\n\tEndpoint should always be open when referenced by a connection", "m_endpoint == NULL || m_endpoint->IsOpened()") )
    __debugbreak();
  if ( this->m_endpoint )
  {
    Address = (NetAddress *)NetConnection::GetAddress(this);
    Handle = NetAddress::GetHandle(Address);
    bdCommonAddr::serialize(Handle->m_ptr->m_endpoint.m_ca.m_ptr, buffer.addrBuff);
    if ( this->m_endpoint )
    {
      if ( !NetEndpoint::IsOpened(this->m_endpoint) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 318, ASSERT_TYPE_ASSERT, "(m_endpoint == 0 || m_endpoint->IsOpened())", "%s\n\tEndpoint should always be open when referenced by a connection", "m_endpoint == NULL || m_endpoint->IsOpened()") )
        __debugbreak();
    }
  }
  if ( !this->m_endpoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 528, ASSERT_TYPE_ASSERT, "(IsOpened())", (const char *)&queryFormat, "IsOpened()") )
    __debugbreak();
  Session = NetEndpoint::GetSession(this->m_endpoint);
  SecurityInfo = NetSession::GetSecurityInfo(Session);
  XSESSION_INFO::Set(outSession, SecurityInfo, &buffer);
  return 1;
}

/*
==============
NetConnection::GetState
==============
*/
__int64 NetConnection::GetState(NetConnection *this)
{
  NetEndpoint *m_endpoint; 
  NetAddress *Address; 
  __int64 result; 

  m_endpoint = this->m_endpoint;
  if ( !m_endpoint )
    return 0i64;
  if ( !NetEndpoint::IsOpened(m_endpoint) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 318, ASSERT_TYPE_ASSERT, "(m_endpoint == 0 || m_endpoint->IsOpened())", "%s\n\tEndpoint should always be open when referenced by a connection", "m_endpoint == NULL || m_endpoint->IsOpened()") )
    __debugbreak();
  if ( !this->m_endpoint )
    return 0i64;
  Address = (NetAddress *)NetConnection::GetAddress(this);
  switch ( NetAddress::GetHandle(Address)->m_ptr->m_status )
  {
    case BD_ADDR_NOT_CONSTRUCTED:
      return 0i64;
    case BD_ADDR_NOT_RESOLVED:
      result = 1i64;
      break;
    case BD_ADDR_ERROR:
    case BD_ADDR_UNRESOLVED:
      result = 4i64;
      break;
    case BD_ADDR_RESOLVING:
    case BD_ADDR_RESOLVED:
      result = 2i64;
      break;
    case BD_ADDR_CONNECTED:
      result = 3i64;
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 586, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unexpected addr handle state") )
        __debugbreak();
      return 0i64;
  }
  return result;
}

/*
==============
NetConnection::GetStateString
==============
*/
const char *NetConnection::GetStateString(NetConnection *this)
{
  NetConnection::State State; 
  __int32 v2; 
  __int32 v3; 
  __int32 v4; 

  State = NetConnection::GetState(this);
  if ( State == STATE_NONE )
    return "NONE";
  v2 = State - 1;
  if ( !v2 )
    return "IDLE";
  v3 = v2 - 1;
  if ( !v3 )
    return "PENDING";
  v4 = v3 - 1;
  if ( !v4 )
    return "CONNECTED";
  if ( v4 == 1 )
    return "LOST";
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 727, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unexpected addr handle state") )
    __debugbreak();
  return "UNKNOWN";
}

/*
==============
NetConnection::GetString
==============
*/
const char *NetConnection::GetString(NetConnection *this)
{
  NetEndpoint *m_endpoint; 
  const char *String; 
  netsrc_t m_remoteId; 
  const char *v6; 
  NetAddress *Address; 
  unsigned int Index; 
  char v9[32]; 
  char dest[64]; 

  m_endpoint = this->m_endpoint;
  if ( !m_endpoint )
    return "null";
  String = NetEndpoint::GetString(m_endpoint, 0);
  Core_strcpy(dest, 0x40ui64, String);
  m_remoteId = this->m_remoteId;
  if ( m_remoteId )
  {
    if ( m_remoteId == NS_CLIENT2 )
    {
      v6 = "CLIENT2";
    }
    else if ( m_remoteId == NS_MAXCLIENTS )
    {
      v6 = "SERVER";
    }
    else if ( (unsigned int)(m_remoteId - 4) > 0x270F )
    {
      v6 = "INVALID";
    }
    else
    {
      v6 = j_va("BOT%d", (unsigned int)(m_remoteId - 3));
    }
  }
  else
  {
    v6 = "CLIENT1";
  }
  Core_strcpy(v9, 0x20ui64, v6);
  Address = (NetAddress *)NetConnection::GetAddress(this);
  Index = NetAddress::GetIndex(Address);
  return j_va("%s:%s (%d)", dest, v9, Index);
}

/*
==============
NetConnection::GetTelemetry
==============
*/
bool NetConnection::GetTelemetry(NetConnection *this, DLogContext *context, const char *prefix, bool includeAddrs)
{
  NetEndpoint *m_endpoint; 
  int v8; 
  const bdDTLSAssociationTelemetry *Telemetry; 
  NetAddress *Address; 
  const bdReference<bdAddrHandle> *Handle; 
  NetEndpoint *v12; 
  const bdReference<bdAddrHandle> *v13; 
  const bdReference<bdCommonAddr> *CommonAddr; 
  bdSocketRouter *SocketRouter; 
  __int64 m_ptr; 
  bdSocketRouter_vtbl *v17; 
  bdDTLSAssociationStatus (__fastcall *getStatus)(bdSocketRouter *, const bdReference<bdAddrHandle>); 
  int v19; 
  const bdAddr *PublicAddr; 
  const char *v21; 
  const bdAddr *LocalAddrByIndex; 
  const char *v23; 
  const char *v24; 
  int v25; 
  int LastSent; 
  unsigned __int8 v27; 
  const char *v28; 
  unsigned int m_establishedMsSinceStart; 
  unsigned int m_stageCookieAckMsSinceStart; 
  unsigned int m_stageInitAckMsSinceStart; 
  float m_lifetimeMs; 
  float v33; 
  int m_status; 
  int m_lastState; 
  const char *v36; 
  unsigned __int8 v38; 
  unsigned __int8 m_initResends; 
  unsigned __int8 m_cookieResends; 
  __int64 v41; 
  const char *v42; 
  const bdReference<bdAddrHandle> *v43; 
  char dest[8]; 
  __int64 v45; 
  int v46; 
  __int16 v47; 
  char value[8]; 
  __int64 v49; 
  int v50; 
  __int16 v51; 
  char v52[8]; 
  __int64 v53; 
  int v54; 
  __int16 v55; 

  v42 = prefix;
  m_endpoint = this->m_endpoint;
  if ( m_endpoint )
  {
    if ( !NetEndpoint::IsOpened(m_endpoint) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 318, ASSERT_TYPE_ASSERT, "(m_endpoint == 0 || m_endpoint->IsOpened())", "%s\n\tEndpoint should always be open when referenced by a connection", "m_endpoint == NULL || m_endpoint->IsOpened()") )
      __debugbreak();
    if ( this->m_endpoint )
    {
      v8 = Sys_Milliseconds();
      Telemetry = NetEndpoint::GetTelemetry(this->m_endpoint);
      Address = (NetAddress *)NetConnection::GetAddress(this);
      Handle = NetAddress::GetHandle(Address);
      v12 = this->m_endpoint;
      v13 = Handle;
      v43 = Handle;
      CommonAddr = NetEndpoint::GetCommonAddr(v12);
      NET_EnterCriticalSection();
      SocketRouter = dwGetSocketRouter();
      m_ptr = (__int64)v13->m_ptr;
      v17 = SocketRouter->bdNATTravListener::__vftable;
      v41 = m_ptr;
      getStatus = v17->getStatus;
      if ( m_ptr )
        _InterlockedExchangeAdd((volatile signed __int32 *)(m_ptr + 8), 1u);
      v19 = ((__int64 (__fastcall *)(bdSocketRouter *, __int64 *))getStatus)(SocketRouter, &v41);
      NET_ExitCriticalSection();
      *(_QWORD *)dest = 0i64;
      v45 = 0i64;
      v46 = 0;
      v47 = 0;
      *(_QWORD *)value = 0i64;
      v49 = 0i64;
      v50 = 0;
      v51 = 0;
      *(_QWORD *)v52 = 0i64;
      v53 = 0i64;
      v54 = 0;
      v55 = 0;
      if ( includeAddrs )
      {
        PublicAddr = bdCommonAddr::getPublicAddr(CommonAddr->m_ptr);
        v21 = dwAddrToString(PublicAddr);
        Core_strcpy(dest, 0x16ui64, v21);
        LocalAddrByIndex = bdCommonAddr::getLocalAddrByIndex(CommonAddr->m_ptr, 0);
        v23 = dwAddrToString(LocalAddrByIndex);
        Core_strcpy(value, 0x16ui64, v23);
        v24 = dwAddrToString(&Telemetry->m_peerAddr);
        Core_strcpy(v52, 0x16ui64, v24);
      }
      v25 = v8 - NetConnection::GetLastRecv(this);
      if ( !this->m_endpoint )
        goto LABEL_16;
      if ( !NetEndpoint::IsOpened(this->m_endpoint) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 318, ASSERT_TYPE_ASSERT, "(m_endpoint == 0 || m_endpoint->IsOpened())", "%s\n\tEndpoint should always be open when referenced by a connection", "m_endpoint == NULL || m_endpoint->IsOpened()") )
        __debugbreak();
      if ( this->m_endpoint )
        LastSent = NetEndpoint::GetLastSent(this->m_endpoint);
      else
LABEL_16:
        LastSent = 0;
      v38 = truncate_cast<unsigned char,enum netsrc_t>(this->m_remoteId);
      v27 = truncate_cast<unsigned char,enum netsrc_t>(this->m_localId);
      v28 = j_va("%s_connection", v42);
      if ( DLog_IsActive() )
      {
        if ( !DLog_BeginRow(context, v28) || !DLog_UInt8(context, "local_id", v27) || !DLog_UInt8(context, "remote_id", v38) || !DLog_String(context, "public_addr", dest, 0) || !DLog_String(context, "private_addr", value, 0) || !DLog_Int32(context, "last_sent", v8 - LastSent) || !DLog_Int32(context, "last_recv", v25) || !DLog_EndRow(context) )
          return 0;
        m_establishedMsSinceStart = Telemetry->m_establishedMsSinceStart;
        m_stageCookieAckMsSinceStart = Telemetry->m_stageCookieAckMsSinceStart;
        m_stageInitAckMsSinceStart = Telemetry->m_stageInitAckMsSinceStart;
        m_cookieResends = Telemetry->m_cookieResends;
        m_initResends = Telemetry->m_initResends;
        m_lifetimeMs = (float)Telemetry->m_lifetimeMs;
        v33 = m_lifetimeMs * 0.001;
        m_status = v43->m_ptr->m_status;
        if ( (m_status < 0 || (unsigned int)m_status > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,enum bdAddrHandle::bdAddrHandleStatus>(enum bdAddrHandle::bdAddrHandleStatus)", "unsigned", (unsigned __int8)m_status, "signed", m_status) )
          __debugbreak();
        m_lastState = Telemetry->m_lastState;
        if ( (Telemetry->m_lastState < BD_DTLS_CLOSED || (unsigned int)m_lastState > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,enum bdDTLSAssociationTelemetry::bdDTLSAssociationState>(enum bdDTLSAssociationTelemetry::bdDTLSAssociationState)", "unsigned", (unsigned __int8)m_lastState, "signed", m_lastState) )
          __debugbreak();
        if ( (v19 < 0 || (unsigned int)v19 > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,enum bdDTLSAssociationStatus>(enum bdDTLSAssociationStatus)", "unsigned", (unsigned __int8)v19, "signed", v19) )
          __debugbreak();
        v36 = j_va("%s_dtls", v42);
        if ( DLog_IsActive() )
          return DLog_BeginRow(context, v36) && DLog_UInt8(context, "state", v19) && DLog_UInt8(context, "error", m_lastState) && DLog_String(context, "addr", v52, 0) && DLog_UInt8(context, "addr_state", m_status) && DLog_Float32(context, "lifetime", v33) && DLog_UInt32(context, "init_ack_time", m_stageInitAckMsSinceStart) && DLog_UInt32(context, "cookie_ack_time", m_stageCookieAckMsSinceStart) && DLog_UInt32(context, "established_time", m_establishedMsSinceStart) && DLog_UInt8(context, "init_resends", m_initResends) && DLog_UInt8(context, "cookie_resends", m_cookieResends) && DLog_EndRow(context);
      }
      context->error = DLOG_ERROR_NOT_ACTIVE;
      return 0;
    }
  }
  return 0;
}

/*
==============
NetConnection::GetType
==============
*/
__int64 NetConnection::GetType(NetConnection *this)
{
  return (unsigned int)this->m_type;
}

/*
==============
NetConnection::GetTypeString
==============
*/
const char *NetConnection::GetTypeString(NetConnection *this)
{
  switch ( this->m_type )
  {
    case TYPE_PARTY:
      return "PARTY";
    case TYPE_LOBBY:
      return "LOBBY";
    case TYPE_JOIN:
      return "JOIN";
    case TYPE_FRONTEND:
      return "FRONTEND";
    case TYPE_GAME:
      return "GAME";
  }
  return "UNKNOWN";
}

/*
==============
NetConnection::GetXnaddr
==============
*/
char NetConnection::GetXnaddr(NetConnection *this, XNADDR *outAddr)
{
  NetEndpoint *m_endpoint; 
  NetAddress *Address; 
  const bdReference<bdAddrHandle> *Handle; 

  m_endpoint = this->m_endpoint;
  if ( !m_endpoint )
    return 0;
  if ( !NetEndpoint::IsOpened(m_endpoint) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 318, ASSERT_TYPE_ASSERT, "(m_endpoint == 0 || m_endpoint->IsOpened())", "%s\n\tEndpoint should always be open when referenced by a connection", "m_endpoint == NULL || m_endpoint->IsOpened()") )
    __debugbreak();
  if ( !this->m_endpoint )
    return 0;
  Address = (NetAddress *)NetConnection::GetAddress(this);
  Handle = NetAddress::GetHandle(Address);
  bdCommonAddr::serialize(Handle->m_ptr->m_endpoint.m_ca.m_ptr, outAddr->addrBuff);
  return 1;
}

/*
==============
NetConnection::Init
==============
*/
void NetConnection::Init(NetConnection *this, NetEndpoint *endpoint, netsrc_t localId, netsrc_t remoteId, NetConnection::Type type)
{
  __int64 v9; 
  __int64 v10; 

  if ( !endpoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 788, ASSERT_TYPE_ASSERT, "(endpoint != 0)", (const char *)&queryFormat, "endpoint != NULL") )
    __debugbreak();
  if ( type == TYPE_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 789, ASSERT_TYPE_ASSERT, "(type != TYPE_NONE)", (const char *)&queryFormat, "type != TYPE_NONE") )
    __debugbreak();
  if ( (unsigned int)localId >= NS_INVALID_NETSRC )
  {
    LODWORD(v9) = localId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 790, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( NS_INVALID_NETSRC )", "localId doesn't index NS_INVALID_NETSRC\n\t%i not in [0, %i)", v9, 10004) )
      __debugbreak();
  }
  if ( (unsigned int)remoteId >= NS_INVALID_NETSRC )
  {
    LODWORD(v10) = 10004;
    LODWORD(v9) = remoteId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 791, ASSERT_TYPE_ASSERT, "(unsigned)( remoteId ) < (unsigned)( NS_INVALID_NETSRC )", "remoteId doesn't index NS_INVALID_NETSRC\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  this->m_type = type;
  this->m_localId = localId;
  this->m_remoteId = remoteId;
  this->m_endpoint = endpoint;
  NetEndpoint::AddReference(endpoint);
  if ( !NetConnection::IsLoopback(this) )
    this->m_channel = NET_CreateChannel(this);
  NetEndpoint::Bind(this->m_endpoint, this);
  NET_RegisterConnection(this);
  if ( !NetEndpoint::IsOpened(this->m_endpoint) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 811, ASSERT_TYPE_ASSERT, "(m_endpoint->IsOpened())", (const char *)&queryFormat, "m_endpoint->IsOpened()") )
    __debugbreak();
  if ( !NetConnection::GetCommonAddr(this)->m_ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 812, ASSERT_TYPE_ASSERT, "(GetCommonAddr().notNull())", (const char *)&queryFormat, "GetCommonAddr().notNull()") )
    __debugbreak();
}

/*
==============
NetConnection::IsActive
==============
*/
char NetConnection::IsActive(NetConnection *this)
{
  int State; 
  NetAddress *Address; 
  int v5; 
  __int64 v6; 

  State = NetConnection::GetState(this);
  if ( State < 0 )
    goto LABEL_24;
  if ( State > 1 )
  {
    if ( State <= 3 )
      return 1;
    if ( State != 4 )
    {
      if ( !this->m_endpoint )
        goto LABEL_18;
LABEL_24:
      if ( !NetEndpoint::IsOpened(this->m_endpoint) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 318, ASSERT_TYPE_ASSERT, "(m_endpoint == 0 || m_endpoint->IsOpened())", "%s\n\tEndpoint should always be open when referenced by a connection", "m_endpoint == NULL || m_endpoint->IsOpened()") )
        __debugbreak();
      if ( this->m_endpoint )
      {
        Address = (NetAddress *)NetConnection::GetAddress(this);
        switch ( NetAddress::GetHandle(Address)->m_ptr->m_status )
        {
          case BD_ADDR_NOT_CONSTRUCTED:
            goto LABEL_18;
          case BD_ADDR_NOT_RESOLVED:
            v5 = 1;
            break;
          case BD_ADDR_ERROR:
          case BD_ADDR_UNRESOLVED:
            v5 = 4;
            break;
          case BD_ADDR_RESOLVING:
          case BD_ADDR_RESOLVED:
            v5 = 2;
            break;
          case BD_ADDR_CONNECTED:
            v5 = 3;
            break;
          default:
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 586, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unexpected addr handle state") )
              __debugbreak();
            goto LABEL_18;
        }
      }
      else
      {
LABEL_18:
        v5 = 0;
      }
      LODWORD(v6) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 337, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unhandled connection state %d", v6) )
        __debugbreak();
    }
  }
  return 0;
}

/*
==============
NetConnection::IsBot
==============
*/
bool NetConnection::IsBot(NetConnection *this)
{
  return (unsigned int)(this->m_remoteId - 4) <= 0x270F;
}

/*
==============
NetConnection::IsConnected
==============
*/
bool NetConnection::IsConnected(NetConnection *this)
{
  return NetConnection::GetState(this) == STATE_CONNECTED;
}

/*
==============
NetConnection::IsDedicated
==============
*/
bool NetConnection::IsDedicated(NetConnection *this)
{
  NetEndpoint *m_endpoint; 
  NetAddress *Address; 

  m_endpoint = this->m_endpoint;
  if ( !m_endpoint )
    return 0;
  if ( !NetEndpoint::IsOpened(m_endpoint) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 318, ASSERT_TYPE_ASSERT, "(m_endpoint == 0 || m_endpoint->IsOpened())", "%s\n\tEndpoint should always be open when referenced by a connection", "m_endpoint == NULL || m_endpoint->IsOpened()") )
    __debugbreak();
  if ( !this->m_endpoint )
    return 0;
  Address = (NetAddress *)NetConnection::GetAddress(this);
  return NetAddress::GetHandle(Address)->m_ptr->m_endpoint.m_ca.m_ptr->m_platformID == BD_PLATFORM_ID_SERVER;
}

/*
==============
NetConnection::IsLocal
==============
*/

bool __fastcall NetConnection::IsLocal(NetConnection *this)
{
  return NetConnection::IsLoopback(this);
}

/*
==============
NetConnection::IsLoopback
==============
*/
bool NetConnection::IsLoopback(NetConnection *this)
{
  NetEndpoint *m_endpoint; 

  m_endpoint = this->m_endpoint;
  if ( !m_endpoint )
    return 0;
  if ( !NetEndpoint::IsOpened(m_endpoint) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 318, ASSERT_TYPE_ASSERT, "(m_endpoint == 0 || m_endpoint->IsOpened())", "%s\n\tEndpoint should always be open when referenced by a connection", "m_endpoint == NULL || m_endpoint->IsOpened()") )
    __debugbreak();
  return this->m_endpoint && NetConnection::GetCommonAddr(this)->m_ptr->m_isLoopback;
}

/*
==============
NetConnection::IsOpened
==============
*/
bool NetConnection::IsOpened(NetConnection *this)
{
  NetEndpoint *m_endpoint; 

  m_endpoint = this->m_endpoint;
  if ( m_endpoint && !NetEndpoint::IsOpened(m_endpoint) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 318, ASSERT_TYPE_ASSERT, "(m_endpoint == 0 || m_endpoint->IsOpened())", "%s\n\tEndpoint should always be open when referenced by a connection", "m_endpoint == NULL || m_endpoint->IsOpened()") )
    __debugbreak();
  return this->m_endpoint != NULL;
}

/*
==============
NetConnection::IsP2P
==============
*/
bool NetConnection::IsP2P(NetConnection *this)
{
  return this->m_localId <= (unsigned int)NS_CLIENT2 && this->m_remoteId <= (unsigned int)NS_CLIENT2;
}

/*
==============
NetConnection::IsRelay
==============
*/
bool NetConnection::IsRelay(NetConnection *this)
{
  NetEndpoint *m_endpoint; 
  NetAddress *Address; 
  const bdReference<bdAddrHandle> *Handle; 
  bdAddr result; 

  m_endpoint = this->m_endpoint;
  if ( !m_endpoint )
    return 0;
  if ( !NetEndpoint::IsOpened(m_endpoint) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 318, ASSERT_TYPE_ASSERT, "(m_endpoint == 0 || m_endpoint->IsOpened())", "%s\n\tEndpoint should always be open when referenced by a connection", "m_endpoint == NULL || m_endpoint->IsOpened()") )
    __debugbreak();
  if ( this->m_endpoint && (Address = (NetAddress *)NetConnection::GetAddress(this), Handle = NetAddress::GetHandle(Address), bdAddrHandle::isResolved(Handle->m_ptr)) )
    return bdAddrHandle::getRealAddr(Handle->m_ptr, &result)->m_type == BD_ADDR_RELAYED;
  else
    return 0;
}

/*
==============
NetConnection::IsRemote
==============
*/
bool NetConnection::IsRemote(NetConnection *this)
{
  return !NetConnection::IsLoopback(this);
}

/*
==============
NetConnection::IsServer
==============
*/
bool NetConnection::IsServer(NetConnection *this)
{
  return this->m_remoteId == NS_MAXCLIENTS;
}

/*
==============
NetConnection::IsSplitscreen
==============
*/
bool NetConnection::IsSplitscreen(NetConnection *this)
{
  return this->m_remoteId == NS_CLIENT2;
}

/*
==============
NetConnection::IsThrottled
==============
*/
bool NetConnection::IsThrottled(NetConnection *this)
{
  int integer; 
  int LastRecv; 

  integer = net_throttle_threshold->current.integer;
  LastRecv = NetConnection::GetLastRecv(this);
  return Sys_Milliseconds() - LastRecv > integer;
}

/*
==============
NetConnection::Migrate
==============
*/
void NetConnection::Migrate(NetConnection *this, const netsrc_t localId, const netsrc_t remoteId)
{
  NetEndpoint *m_endpoint; 

  m_endpoint = this->m_endpoint;
  if ( !m_endpoint )
    goto LABEL_11;
  if ( !NetEndpoint::IsOpened(m_endpoint) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 318, ASSERT_TYPE_ASSERT, "(m_endpoint == 0 || m_endpoint->IsOpened())", "%s\n\tEndpoint should always be open when referenced by a connection", "m_endpoint == NULL || m_endpoint->IsOpened()") )
    __debugbreak();
  if ( !this->m_endpoint )
  {
LABEL_11:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 147, ASSERT_TYPE_ASSERT, "(IsOpened())", "%s\n\tCan migrate only opened connections", "IsOpened()") )
      __debugbreak();
  }
  NetConnection::Update(this, this->m_endpoint, localId, remoteId, this->m_type);
}

/*
==============
NetConnection::Migrate
==============
*/
_BOOL8 NetConnection::Migrate(NetConnection *this, const XNADDR *addr)
{
  NetEndpoint *m_endpoint; 
  const bdReference<bdCommonAddr> *v5; 
  NetAddress *Address; 
  const bdReference<bdAddrHandle> *Handle; 
  bool v8; 
  bdReference<bdCommonAddr> result; 

  m_endpoint = this->m_endpoint;
  if ( !m_endpoint )
    goto LABEL_15;
  if ( !NetEndpoint::IsOpened(m_endpoint) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 318, ASSERT_TYPE_ASSERT, "(m_endpoint == 0 || m_endpoint->IsOpened())", "%s\n\tEndpoint should always be open when referenced by a connection", "m_endpoint == NULL || m_endpoint->IsOpened()") )
    __debugbreak();
  if ( !this->m_endpoint )
  {
LABEL_15:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 156, ASSERT_TYPE_ASSERT, "(IsOpened())", "%s\n\tCan migrate only opened connections", "IsOpened()") )
      __debugbreak();
  }
  v5 = XNADDR::ToCommonAddr((XNADDR *)addr, &result);
  Address = (NetAddress *)NetConnection::GetAddress(this);
  Handle = NetAddress::GetHandle(Address);
  v8 = dwMigrateConnection(Handle, v5);
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdCommonAddr *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  return v8;
}

/*
==============
NetConnection::OnSend
==============
*/
void NetConnection::OnSend(NetConnection *this, unsigned int sendFlags)
{
  char v3; 
  NetEndpoint *m_endpoint; 
  const char *String; 

  v3 = sendFlags;
  m_endpoint = this->m_endpoint;
  if ( !m_endpoint )
    goto LABEL_15;
  if ( !NetEndpoint::IsOpened(m_endpoint) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 318, ASSERT_TYPE_ASSERT, "(m_endpoint == 0 || m_endpoint->IsOpened())", "%s\n\tEndpoint should always be open when referenced by a connection", "m_endpoint == NULL || m_endpoint->IsOpened()") )
    __debugbreak();
  if ( !this->m_endpoint )
  {
LABEL_15:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 897, ASSERT_TYPE_ASSERT, "(IsOpened())", (const char *)&queryFormat, "IsOpened()") )
      __debugbreak();
  }
  if ( NetConnection::GetState(this) == STATE_LOST && (v3 & 4) == 0 )
  {
    String = NetConnection::GetString(this);
    Com_PrintWarning(25, "[NET] DTLS lost when sending via connection %s\n", String);
    if ( this->m_localId != NS_MAXCLIENTS && net_reconnect->current.enabled )
      NET_ReopenConnection(this);
  }
}

/*
==============
NetConnection::Open
==============
*/
_BOOL8 NetConnection::Open(NetConnection *this, const netsrc_t localNetId, const XSESSION_INFO *sessionInfo, const XNADDR *addr, const netsrc_t netId, const NetConnection::Type type)
{
  NetEndpoint *m_endpoint; 
  bool v11; 
  NetEndpoint *v12; 
  const char *String; 
  const char *v14; 
  const char *v15; 
  netadr_t outAddr; 

  m_endpoint = this->m_endpoint;
  if ( m_endpoint )
  {
    if ( !NetEndpoint::IsOpened(m_endpoint) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 318, ASSERT_TYPE_ASSERT, "(m_endpoint == 0 || m_endpoint->IsOpened())", "%s\n\tEndpoint should always be open when referenced by a connection", "m_endpoint == NULL || m_endpoint->IsOpened()") )
      __debugbreak();
    if ( this->m_endpoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 80, ASSERT_TYPE_ASSERT, "(!IsOpened())", "%s\n\tConnection already open - close first", "!IsOpened()") )
      __debugbreak();
  }
  if ( !XSESSION_INFO::IsValidSessionId((XSESSION_INFO *)sessionInfo) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 81, ASSERT_TYPE_ASSERT, "(sessionInfo.IsValidSessionId())", "%s\n\tSecurity id/key not initialized correctly", "sessionInfo.IsValidSessionId()") )
    __debugbreak();
  if ( XNADDR::IsNull((XNADDR *)addr) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 82, ASSERT_TYPE_ASSERT, "(!addr.IsNull())", "%s\n\tInvalid remote address", "!addr.IsNull()") )
    __debugbreak();
  if ( localNetId == NS_MAXCLIENTS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 83, ASSERT_TYPE_ASSERT, "(localNetId != NS_SERVER)", "%s\n\tHost should not initiate connections", "localNetId != NS_SERVER") )
    __debugbreak();
  v11 = NET_OpenConnection(sessionInfo, addr, netId, &outAddr);
  v12 = NET_AcceptConnection(this, outAddr.addrHandleIndex);
  if ( v12 )
  {
    NetConnection::Update(this, v12, localNetId, outAddr.localNetID, type);
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 89, ASSERT_TYPE_ASSERT, "((AcceptInternal( localNetId, netadr, type )) == (true))", (const char *)&queryFormat, "AcceptInternal( localNetId, netadr, type ) == true") )
  {
    __debugbreak();
  }
  if ( v11 )
  {
    String = NetConnection::GetString(this);
    switch ( this->m_type )
    {
      case TYPE_PARTY:
        v14 = "PARTY";
        break;
      case TYPE_LOBBY:
        v14 = "LOBBY";
        break;
      case TYPE_JOIN:
        v14 = "JOIN";
        break;
      case TYPE_FRONTEND:
        v14 = "FRONTEND";
        break;
      case TYPE_GAME:
        v14 = "GAME";
        break;
      default:
        v14 = "UNKNOWN";
        break;
    }
    Com_Printf(25, "[NET] Opening connection %s:%s\n", v14, String);
  }
  else
  {
    v15 = XNADDR::GetString((XNADDR *)addr);
    Com_PrintWarning(25, "[NET] Failed to open connection to %s\n", v15);
  }
  return v11;
}

/*
==============
NetConnection::Reconnect
==============
*/
bool NetConnection::Reconnect(NetConnection *this)
{
  return net_reconnect->current.enabled && NET_ReopenConnection(this);
}

/*
==============
NetConnection::SendP2P
==============
*/
int NetConnection::SendP2P(NetConnection *this, const netsrc_t localId, const char *string)
{
  netadr_t result; 

  if ( ((unsigned int)localId > NS_CLIENT2 || this->m_remoteId > (unsigned int)NS_CLIENT2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 306, ASSERT_TYPE_ASSERT, "(( localId == NS_CLIENT1 || localId == NS_CLIENT2 ) && ( m_remoteId == NS_CLIENT1 || m_remoteId == NS_CLIENT2 ))", "%s\n\tAttempting to send non-p2p traffic via peer-to-peer transport", "( localId == NS_CLIENT1 || localId == NS_CLIENT2 ) && ( m_remoteId == NS_CLIENT1 || m_remoteId == NS_CLIENT2 )") )
    __debugbreak();
  NetConnection::GetNetadr(this, &result);
  NetConnection::OnSend(this, 0x20u);
  return NET_OutOfBandPrint(this->m_localId, &result, string);
}

/*
==============
NetConnection::SendP2P
==============
*/
int NetConnection::SendP2P(NetConnection *this, const netsrc_t localId, const unsigned __int8 *data, const int length)
{
  netadr_t result; 

  if ( ((unsigned int)localId > NS_CLIENT2 || this->m_remoteId > (unsigned int)NS_CLIENT2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 294, ASSERT_TYPE_ASSERT, "(( localId == NS_CLIENT1 || localId == NS_CLIENT2 ) && ( m_remoteId == NS_CLIENT1 || m_remoteId == NS_CLIENT2 ))", "%s\n\tAttempting to send non-p2p traffic via peer-to-peer transport", "( localId == NS_CLIENT1 || localId == NS_CLIENT2 ) && ( m_remoteId == NS_CLIENT1 || m_remoteId == NS_CLIENT2 )") )
    __debugbreak();
  NetConnection::GetNetadr(this, &result);
  NetConnection::OnSend(this, 8u);
  return NET_OutOfBandData(this->m_localId, &result, data, length, 8u);
}

/*
==============
NetConnection::SendP2P
==============
*/
int NetConnection::SendP2P(NetConnection *this, const netsrc_t localId, const unsigned __int8 *data, const int length, const unsigned int sendFlags)
{
  netadr_t result; 

  if ( ((unsigned int)localId > NS_CLIENT2 || this->m_remoteId > (unsigned int)NS_CLIENT2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 294, ASSERT_TYPE_ASSERT, "(( localId == NS_CLIENT1 || localId == NS_CLIENT2 ) && ( m_remoteId == NS_CLIENT1 || m_remoteId == NS_CLIENT2 ))", "%s\n\tAttempting to send non-p2p traffic via peer-to-peer transport", "( localId == NS_CLIENT1 || localId == NS_CLIENT2 ) && ( m_remoteId == NS_CLIENT1 || m_remoteId == NS_CLIENT2 )") )
    __debugbreak();
  NetConnection::GetNetadr(this, &result);
  NetConnection::OnSend(this, sendFlags);
  return NET_OutOfBandData(this->m_localId, &result, data, length, sendFlags);
}

/*
==============
NetConnection::SendReliable
==============
*/
char NetConnection::SendReliable(NetConnection *this, msg_t *msg)
{
  Online_ErrorReporting *InstancePtr; 
  netadr_t result; 

  if ( NetConnection::IsP2P(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 184, ASSERT_TYPE_ASSERT, "(!IsP2P())", "%s\n\tCannot send peer-to-peer traffic reliably", "!IsP2P()") )
    __debugbreak();
  if ( NetConnection::IsOpened(this) )
  {
    NetConnection::GetNetadr(this, &result);
    NetConnection::OnSend(this, 0);
    RMsg_AddMessage(&result, msg, (const netsrc_t)this->m_localId);
    return 1;
  }
  else
  {
    InstancePtr = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_DEFAULT_t)0x20000, NULL);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 195, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Attempting to send reliable to a NetConnection that is not connected.  Please report this and generate a callstack!") )
      __debugbreak();
    return 0;
  }
}

/*
==============
NetConnection::SendReliable
==============
*/
char NetConnection::SendReliable(NetConnection *this, msg_t *msg, unsigned int sendFlags)
{
  Online_ErrorReporting *InstancePtr; 
  netadr_t result; 

  if ( NetConnection::IsP2P(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 184, ASSERT_TYPE_ASSERT, "(!IsP2P())", "%s\n\tCannot send peer-to-peer traffic reliably", "!IsP2P()") )
    __debugbreak();
  if ( (sendFlags & 4) != 0 && NetConnection::GetState(this) != STATE_CONNECTED )
    return 0;
  if ( !NetConnection::IsOpened(this) )
  {
    InstancePtr = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_DEFAULT_t)0x20000, NULL);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 195, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Attempting to send reliable to a NetConnection that is not connected.  Please report this and generate a callstack!") )
      __debugbreak();
    return 0;
  }
  NetConnection::GetNetadr(this, &result);
  NetConnection::OnSend(this, sendFlags);
  RMsg_AddMessage(&result, msg, (const netsrc_t)this->m_localId);
  if ( (sendFlags & 2) != 0 )
    RMsg_SendMessages();
  return 1;
}

/*
==============
NetConnection::SendReliable
==============
*/
char NetConnection::SendReliable(NetConnection *this, msg_t *msg, unsigned int sendFlags, unsigned int *outHandle)
{
  Online_ErrorReporting *InstancePtr; 
  netsrc_t m_localId; 
  netadr_t result; 

  if ( NetConnection::IsP2P(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 184, ASSERT_TYPE_ASSERT, "(!IsP2P())", "%s\n\tCannot send peer-to-peer traffic reliably", "!IsP2P()") )
    __debugbreak();
  if ( (sendFlags & 4) != 0 && NetConnection::GetState(this) != STATE_CONNECTED )
    return 0;
  if ( !NetConnection::IsOpened(this) )
  {
    InstancePtr = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_DEFAULT_t)0x20000, NULL);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 195, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Attempting to send reliable to a NetConnection that is not connected.  Please report this and generate a callstack!") )
      __debugbreak();
    return 0;
  }
  NetConnection::GetNetadr(this, &result);
  NetConnection::OnSend(this, sendFlags);
  m_localId = this->m_localId;
  if ( outHandle )
    RMsg_AddMessageWithHandle(&result, msg, outHandle, m_localId);
  else
    RMsg_AddMessage(&result, msg, m_localId);
  if ( (sendFlags & 2) != 0 )
    RMsg_SendMessages();
  return 1;
}

/*
==============
NetConnection::SendReliable
==============
*/
char NetConnection::SendReliable(NetConnection *this, const char *string)
{
  netadr_t result; 

  if ( NetConnection::IsP2P(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 229, ASSERT_TYPE_ASSERT, "(!IsP2P())", "%s\n\tCannot send peer-to-peer traffic reliably", "!IsP2P()") )
    __debugbreak();
  NetConnection::GetNetadr(this, &result);
  NetConnection::OnSend(this, 0x20u);
  RMsg_AddPrint(&result, string, (const netsrc_t)this->m_localId);
  return 1;
}

/*
==============
NetConnection::SendReliable
==============
*/
char NetConnection::SendReliable(NetConnection *this, const char *string, unsigned int sendFlags)
{
  netadr_t result; 

  if ( NetConnection::IsP2P(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 229, ASSERT_TYPE_ASSERT, "(!IsP2P())", "%s\n\tCannot send peer-to-peer traffic reliably", "!IsP2P()") )
    __debugbreak();
  NetConnection::GetNetadr(this, &result);
  NetConnection::OnSend(this, sendFlags);
  RMsg_AddPrint(&result, string, (const netsrc_t)this->m_localId);
  if ( (sendFlags & 2) != 0 )
    RMsg_SendMessages();
  return 1;
}

/*
==============
NetConnection::SendUnreliable
==============
*/
int NetConnection::SendUnreliable(NetConnection *this, const char *string)
{
  netadr_t result; 

  if ( NetConnection::IsP2P(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 276, ASSERT_TYPE_ASSERT, "(!IsP2P())", "%s\n\tPeer-to-peer traffic should be provided local id explicitly", "!IsP2P()") )
    __debugbreak();
  NetConnection::GetNetadr(this, &result);
  NetConnection::OnSend(this, 0x20u);
  return NET_OutOfBandPrint(this->m_localId, &result, string);
}

/*
==============
NetConnection::SendUnreliable
==============
*/
int NetConnection::SendUnreliable(NetConnection *this, const unsigned __int8 *data, const int length)
{
  netadr_t result; 

  if ( NetConnection::IsP2P(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 264, ASSERT_TYPE_ASSERT, "(!IsP2P())", "%s\n\tPeer-to-peer traffic should be provided local id explicitly", "!IsP2P()") )
    __debugbreak();
  NetConnection::GetNetadr(this, &result);
  NetConnection::OnSend(this, 8u);
  return NET_OutOfBandData(this->m_localId, &result, data, length, 8u);
}

/*
==============
NetConnection::SendUnreliable
==============
*/
int NetConnection::SendUnreliable(NetConnection *this, const unsigned __int8 *data, const int length, const unsigned int sendFlags)
{
  netadr_t result; 

  if ( NetConnection::IsP2P(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 264, ASSERT_TYPE_ASSERT, "(!IsP2P())", "%s\n\tPeer-to-peer traffic should be provided local id explicitly", "!IsP2P()") )
    __debugbreak();
  NetConnection::GetNetadr(this, &result);
  NetConnection::OnSend(this, sendFlags);
  return NET_OutOfBandData(this->m_localId, &result, data, length, sendFlags);
}

/*
==============
NetConnection::Set
==============
*/
void NetConnection::Set(NetConnection *this, const netsrc_t localId, const netsrc_t remoteId, const NetConnection::Type type)
{
  NetEndpoint *m_endpoint; 

  m_endpoint = this->m_endpoint;
  if ( m_endpoint )
  {
    if ( !NetEndpoint::IsOpened(m_endpoint) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 318, ASSERT_TYPE_ASSERT, "(m_endpoint == 0 || m_endpoint->IsOpened())", "%s\n\tEndpoint should always be open when referenced by a connection", "m_endpoint == NULL || m_endpoint->IsOpened()") )
      __debugbreak();
    if ( this->m_endpoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 163, ASSERT_TYPE_ASSERT, "(!IsOpened())", "%s\n\tCannot set after connection is opened", "!IsOpened()") )
      __debugbreak();
  }
  this->m_localId = localId;
  this->m_remoteId = remoteId;
  this->m_type = type;
}

/*
==============
NetConnection::Update
==============
*/
void NetConnection::Update(NetConnection *this, NetEndpoint *endpoint, netsrc_t localId, netsrc_t remoteId, NetConnection::Type type)
{
  NetEndpoint *m_endpoint; 
  const char *String; 
  const char *v11; 
  const char *v12; 
  NetEndpoint *v13; 
  __int64 v14; 
  char dest[64]; 

  m_endpoint = this->m_endpoint;
  if ( !m_endpoint )
    goto LABEL_25;
  if ( !NetEndpoint::IsOpened(m_endpoint) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_connection.cpp", 318, ASSERT_TYPE_ASSERT, "(m_endpoint == 0 || m_endpoint->IsOpened())", "%s\n\tEndpoint should always be open when referenced by a connection", "m_endpoint == NULL || m_endpoint->IsOpened()") )
    __debugbreak();
  if ( this->m_endpoint )
  {
    if ( this->m_endpoint != endpoint || this->m_localId != localId || this->m_remoteId != remoteId || this->m_type != type )
    {
      String = NetConnection::GetString(this);
      Core_strcpy(dest, 0x40ui64, String);
      v11 = NetEndpoint::GetString(endpoint);
      switch ( this->m_type )
      {
        case TYPE_PARTY:
          v12 = "PARTY";
          break;
        case TYPE_LOBBY:
          v12 = "LOBBY";
          break;
        case TYPE_JOIN:
          v12 = "JOIN";
          break;
        case TYPE_FRONTEND:
          v12 = "FRONTEND";
          break;
        case TYPE_GAME:
          v12 = "GAME";
          break;
        default:
          v12 = "UNKNOWN";
          break;
      }
      LODWORD(v14) = localId;
      Com_Printf(25, "[NET] Updating connection %s:%s to use endpoint %s:%d:%d\n", v12, dest, v11, v14, remoteId);
      v13 = this->m_endpoint;
      NetEndpoint::AddReference(this->m_endpoint);
      NET_CloseConnection(this, NET_CLOSE_SOFT);
      NetEndpoint::Unbind(this->m_endpoint, this);
      if ( !NetConnection::IsLoopback(this) )
        NET_CloseChannel(this->m_channel);
      NetEndpoint::RemoveReference(this->m_endpoint, 0);
      *(_QWORD *)&this->m_remoteId = 10004i64;
      this->m_endpoint = NULL;
      this->m_channel = NULL;
      this->m_localId = NS_INVALID_NETSRC;
      NetConnection::Init(this, endpoint, localId, remoteId, type);
      NetEndpoint::RemoveReference(v13, 0);
    }
  }
  else
  {
LABEL_25:
    NetConnection::Init(this, endpoint, localId, remoteId, type);
  }
}

/*
==============
SendUnreliable
==============
*/
bool SendUnreliable(const int clientNum, const unsigned __int8 *data, const int length)
{
  SvClient *CommonClient; 

  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  CommonClient = SvClient::GetCommonClient(clientNum);
  return NetConnection::SendUnreliable((NetConnection *)&CommonClient[642].lastUsercmd.sightedClientsMask.data[6], data, length) > 0;
}

