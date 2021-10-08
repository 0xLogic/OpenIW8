/*
==============
NET_Frame
==============
*/

void NET_Frame(void)
{
  ?NET_Frame@@YAXXZ();
}

/*
==============
NET_IsRemoteXnaddr
==============
*/

bool __fastcall NET_IsRemoteXnaddr(const XNADDR *xnaddr, const netadr_t *remoteAddr)
{
  return ?NET_IsRemoteXnaddr@@YA_NAEBUXNADDR@@AEBUnetadr_t@@@Z(xnaddr, remoteAddr);
}

/*
==============
NET_GetConnectionCount
==============
*/

int __fastcall NET_GetConnectionCount()
{
  return ?NET_GetConnectionCount@@YAHXZ();
}

/*
==============
NET_SetDemoSession
==============
*/

void __fastcall NET_SetDemoSession(const XSESSION_INFO *sessionInfo)
{
  ?NET_SetDemoSession@@YAXAEBVXSESSION_INFO@@@Z(sessionInfo);
}

/*
==============
NET_Flush
==============
*/

void NET_Flush(void)
{
  ?NET_Flush@@YAXXZ();
}

/*
==============
NET_DlogTelemetry
==============
*/

bool __fastcall NET_DlogTelemetry(DLogContext *context, const char *name)
{
  return ?NET_DlogTelemetry@@YA_NPEAUDLogContext@@PEBD@Z(context, name);
}

/*
==============
NET_ExitCriticalSection
==============
*/

void NET_ExitCriticalSection(void)
{
  ?NET_ExitCriticalSection@@YAXXZ();
}

/*
==============
NET_GetNatType
==============
*/

int __fastcall NET_GetNatType()
{
  return ?NET_GetNatType@@YAHXZ();
}

/*
==============
NET_PrintTelemetry
==============
*/

void __fastcall NET_PrintTelemetry(unsigned int *percentiles, int percentileCount, const char *name)
{
  ?NET_PrintTelemetry@@YAXPEAIHPEBD@Z(percentiles, percentileCount, name);
}

/*
==============
NET_GetPublicPort
==============
*/

unsigned __int16 __fastcall NET_GetPublicPort()
{
  return ?NET_GetPublicPort@@YAGXZ();
}

/*
==============
NET_Start
==============
*/

void __fastcall NET_Start(const NetConfig *config, NetEventListener *listener)
{
  ?NET_Start@@YAXAEBUNetConfig@@PEAVNetEventListener@@@Z(config, listener);
}

/*
==============
NET_Configure
==============
*/

void __fastcall NET_Configure(const NetConfig *config)
{
  ?NET_Configure@@YAXAEBUNetConfig@@@Z(config);
}

/*
==============
NET_DemonwareConnect
==============
*/

bool __fastcall NET_DemonwareConnect(const bdSecurityID *securityId, const bdReference<bdCommonAddr> *addr, bdReference<bdAddrHandle> *outAddrHandle)
{
  return ?NET_DemonwareConnect@@YA_NAEBVbdSecurityID@@AEBV?$bdReference@VbdCommonAddr@@@@AEAV?$bdReference@VbdAddrHandle@@@@@Z(securityId, addr, outAddrHandle);
}

/*
==============
NET_IsLocalXnaddr
==============
*/

bool __fastcall NET_IsLocalXnaddr(const XNADDR *addr)
{
  return ?NET_IsLocalXnaddr@@YA_NAEBUXNADDR@@@Z(addr);
}

/*
==============
NET_OpenConnection
==============
*/

bool __fastcall NET_OpenConnection(const XSESSION_INFO *sessionInfo, const XNADDR *addr, const netsrc_t netId, netadr_t *outAddr)
{
  return ?NET_OpenConnection@@YA_NAEBVXSESSION_INFO@@AEBUXNADDR@@W4netsrc_t@@AEAUnetadr_t@@@Z(sessionInfo, addr, netId, outAddr);
}

/*
==============
NET_IsRelayStarted
==============
*/

bool __fastcall NET_IsRelayStarted()
{
  return ?NET_IsRelayStarted@@YA_NXZ();
}

/*
==============
NET_GetLocalCommonAddr
==============
*/

const bdReference<bdCommonAddr> *__fastcall NET_GetLocalCommonAddr()
{
  return ?NET_GetLocalCommonAddr@@YAAEBV?$bdReference@VbdCommonAddr@@@@XZ();
}

/*
==============
NET_SetNatType
==============
*/

void __fastcall NET_SetNatType(int natType)
{
  ?NET_SetNatType@@YAXH@Z(natType);
}

/*
==============
NetSocketRouterListener::onDtlsClose
==============
*/

void __fastcall NetSocketRouterListener::onDtlsClose(NetSocketRouterListener *this, const bdReference<bdDTLSAssociation> *dtls)
{
  ?onDtlsClose@NetSocketRouterListener@@UEAAXAEBV?$bdReference@VbdDTLSAssociation@@@@@Z(this, dtls);
}

/*
==============
NET_IsRelayFailed
==============
*/

bool __fastcall NET_IsRelayFailed()
{
  return ?NET_IsRelayFailed@@YA_NXZ();
}

/*
==============
NET_SendTo
==============
*/

int __fastcall NET_SendTo(const void *data, const int length, const netadr_t *to, const unsigned int flags, NetPingInfo *info)
{
  return ?NET_SendTo@@YAHPEBXHAEBUnetadr_t@@IAEAUNetPingInfo@@@Z(data, length, to, flags, info);
}

/*
==============
NET_FlushLoopback
==============
*/

void __fastcall NET_FlushLoopback(netsrc_t sock)
{
  ?NET_FlushLoopback@@YAXW4netsrc_t@@@Z(sock);
}

/*
==============
NET_RegisterConnection
==============
*/

void __fastcall NET_RegisterConnection(NetConnection *connection)
{
  ?NET_RegisterConnection@@YAXPEAVNetConnection@@@Z(connection);
}

/*
==============
NET_CreateSession
==============
*/

void __fastcall NET_CreateSession(XSESSION_INFO *outSessionInfo)
{
  ?NET_CreateSession@@YAXAEAVXSESSION_INFO@@@Z(outSessionInfo);
}

/*
==============
NET_Reset
==============
*/

void NET_Reset(void)
{
  ?NET_Reset@@YAXXZ();
}

/*
==============
NET_IsStarting
==============
*/

bool __fastcall NET_IsStarting()
{
  return ?NET_IsStarting@@YA_NXZ();
}

/*
==============
NET_Stop
==============
*/

void NET_Stop(void)
{
  ?NET_Stop@@YAXXZ();
}

/*
==============
NET_OnlineTransition
==============
*/

void NET_OnlineTransition(void)
{
  ?NET_OnlineTransition@@YAXXZ();
}

/*
==============
NET_ResetTelemetry
==============
*/

void NET_ResetTelemetry(void)
{
  ?NET_ResetTelemetry@@YAXXZ();
}

/*
==============
NET_RecvFrom
==============
*/

int __fastcall NET_RecvFrom(void *const buffer, const int size, netadr_t *outFrom, NetPingInfo *info)
{
  return ?NET_RecvFrom@@YAHQEAXHAEAUnetadr_t@@AEAUNetPingInfo@@@Z(buffer, size, outFrom, info);
}

/*
==============
NET_CloseChannel
==============
*/

void __fastcall NET_CloseChannel(NetChannel *channel)
{
  ?NET_CloseChannel@@YAXPEAVNetChannel@@@Z(channel);
}

/*
==============
NET_GetLocalXnaddr
==============
*/

void __fastcall NET_GetLocalXnaddr(XNADDR *addr)
{
  ?NET_GetLocalXnaddr@@YAXAEAUXNADDR@@@Z(addr);
}

/*
==============
NET_CloseConnection
==============
*/

void __fastcall NET_CloseConnection(NetConnection *connection, const NetCloseStyle closeStyle)
{
  ?NET_CloseConnection@@YAXPEAVNetConnection@@W4NetCloseStyle@@@Z(connection, closeStyle);
}

/*
==============
NET_CreateChannel
==============
*/

NetChannel *__fastcall NET_CreateChannel(NetConnection *connection)
{
  return ?NET_CreateChannel@@YAPEAVNetChannel@@PEAVNetConnection@@@Z(connection);
}

/*
==============
NET_IsConnectionEstablished
==============
*/

bool __fastcall NET_IsConnectionEstablished(const netadr_t *addr)
{
  return ?NET_IsConnectionEstablished@@YA_NAEBUnetadr_t@@@Z(addr);
}

/*
==============
NET_OfflineTransition
==============
*/

void NET_OfflineTransition(void)
{
  ?NET_OfflineTransition@@YAXXZ();
}

/*
==============
NET_EnterCriticalSection
==============
*/

void NET_EnterCriticalSection(void)
{
  ?NET_EnterCriticalSection@@YAXXZ();
}

/*
==============
NET_IsOnline
==============
*/

bool __fastcall NET_IsOnline()
{
  return ?NET_IsOnline@@YA_NXZ();
}

/*
==============
NET_IsStarted
==============
*/

bool __fastcall NET_IsStarted()
{
  return ?NET_IsStarted@@YA_NXZ();
}

/*
==============
NET_OpenConnection
==============
*/

bool __fastcall NET_OpenConnection(const XSESSION_INFO *hostInfo, const netsrc_t netId, netadr_t *outAddr)
{
  return ?NET_OpenConnection@@YA_NAEBVXSESSION_INFO@@W4netsrc_t@@AEAUnetadr_t@@@Z(hostInfo, netId, outAddr);
}

/*
==============
NET_IsOffline
==============
*/

bool __fastcall NET_IsOffline()
{
  return ?NET_IsOffline@@YA_NXZ();
}

/*
==============
NET_AcceptConnection
==============
*/

NetEndpoint *__fastcall NET_AcceptConnection(NetConnection *connection, const int addrHandleIndex)
{
  return ?NET_AcceptConnection@@YAPEAVNetEndpoint@@PEAVNetConnection@@H@Z(connection, addrHandleIndex);
}

/*
==============
NET_GetSendQueueLength
==============
*/

int __fastcall NET_GetSendQueueLength()
{
  return ?NET_GetSendQueueLength@@YAHXZ();
}

/*
==============
NET_GetPublicIP
==============
*/

unsigned int __fastcall NET_GetPublicIP()
{
  return ?NET_GetPublicIP@@YAIXZ();
}

/*
==============
NET_IsConnectionActive
==============
*/

bool __fastcall NET_IsConnectionActive(const netadr_t *addr)
{
  return ?NET_IsConnectionActive@@YA_NAEBUnetadr_t@@@Z(addr);
}

/*
==============
NET_RecvLoopback
==============
*/

int __fastcall NET_RecvLoopback(netsrc_t netId, void *const buffer, const int size, netadr_t *outFrom, NetPingInfo *info)
{
  return ?NET_RecvLoopback@@YAHW4netsrc_t@@QEAXHAEAUnetadr_t@@AEAUNetPingInfo@@@Z(netId, buffer, size, outFrom, info);
}

/*
==============
NET_GetRecvQueueLength
==============
*/

int __fastcall NET_GetRecvQueueLength()
{
  return ?NET_GetRecvQueueLength@@YAHXZ();
}

/*
==============
NET_IsConnectionThread
==============
*/

bool __fastcall NET_IsConnectionThread()
{
  return ?NET_IsConnectionThread@@YA_NXZ();
}

/*
==============
NET_GetEndpoint
==============
*/

NetEndpoint *__fastcall NET_GetEndpoint(const int addrHandleIndex)
{
  return ?NET_GetEndpoint@@YAPEAVNetEndpoint@@H@Z(addrHandleIndex);
}

/*
==============
NET_IsLocalAddressResolved
==============
*/

bool __fastcall NET_IsLocalAddressResolved()
{
  return ?NET_IsLocalAddressResolved@@YA_NXZ();
}

/*
==============
NET_GetRelayDatacenter
==============
*/

const char *__fastcall NET_GetRelayDatacenter()
{
  return ?NET_GetRelayDatacenter@@YAPEBDXZ();
}

/*
==============
NET_FlushRecvQueue
==============
*/

void NET_FlushRecvQueue(void)
{
  ?NET_FlushRecvQueue@@YAXXZ();
}

/*
==============
NET_PrintConnections
==============
*/

void NET_PrintConnections(void)
{
  ?NET_PrintConnections@@YAXXZ();
}

/*
==============
NET_ReopenConnection
==============
*/

bool __fastcall NET_ReopenConnection(NetConnection *connection)
{
  return ?NET_ReopenConnection@@YA_NPEAVNetConnection@@@Z(connection);
}

/*
==============
NET_GetDemoSession
==============
*/

const XSESSION_INFO *__fastcall NET_GetDemoSession()
{
  return ?NET_GetDemoSession@@YAAEBVXSESSION_INFO@@XZ();
}

/*
==============
NET_GetRetailDebug
==============
*/

void __fastcall NET_GetRetailDebug(char *destString, const int maxLength)
{
  ?NET_GetRetailDebug@@YAXPEADH@Z(destString, maxLength);
}

/*
==============
NET_IsStartFailed
==============
*/

bool __fastcall NET_IsStartFailed()
{
  return ?NET_IsStartFailed@@YA_NXZ();
}

/*
==============
NetSocketRouterListener::onDtlsClose
==============
*/
void NetSocketRouterListener::onDtlsClose(NetSocketRouterListener *this, const bdReference<bdDTLSAssociation> *dtls)
{
  bdReference<bdAddrHandle> *AddrHandle; 
  NetEndpoint *UserData; 
  bdReference<bdAddrHandle> result; 

  AddrHandle = bdDTLSAssociation::getAddrHandle(dtls->m_ptr, &result);
  UserData = (NetEndpoint *)bdAddrHandle::getUserData(AddrHandle->m_ptr);
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    if ( result.m_ptr )
      ((void (__fastcall *)(bdAddrHandle *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
    result.m_ptr = NULL;
  }
  if ( UserData )
    NetEndpoint::OnClose(UserData, dtls);
}

/*
==============
NET_AcceptConnection
==============
*/
NetEndpoint *NET_AcceptConnection(NetConnection *connection, const int addrHandleIndex)
{
  NetEndpoint *v3; 
  bool IsDemoPlaying; 

  if ( NetBacklog::IsBacklogIndex(addrHandleIndex) )
  {
    v3 = NetBacklog::Accept(&s_statics.backlog, addrHandleIndex);
  }
  else
  {
    v3 = NetEndpointBuffer::Get(&s_statics.endpoints, addrHandleIndex);
    NetGraveyard::Remove(&s_statics.graveyard, v3, 1);
  }
  if ( v3 )
  {
    if ( NetEndpoint::IsOpened(v3) )
      goto LABEL_9;
    v3 = NULL;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_main.cpp", 360, ASSERT_TYPE_ASSERT, "(endpoint != 0)", "%s\n\t[NET] Accepted connection at slot %d does not exist\n", "endpoint != NULL", addrHandleIndex) )
    __debugbreak();
LABEL_9:
  IsDemoPlaying = SV_IsDemoPlaying();
  if ( !Sys_IsMainThread() && !IsDemoPlaying && NetEndpoint::GetReferenceCount(v3) <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_main.cpp", 361, ASSERT_TYPE_ASSERT, "(NET_IsConnectionThread() || endpoint->GetReferenceCount() > 0)", "%s\n\tNot thread safe to register new address handles from other than client context", "NET_IsConnectionThread() || endpoint->GetReferenceCount() > 0") )
    __debugbreak();
  return v3;
}

/*
==============
NET_CloseChannel
==============
*/
void NET_CloseChannel(NetChannel *channel)
{
  NetChannelBuffer::Close(&s_statics.channels, channel);
}

/*
==============
NET_CloseConnection
==============
*/
void NET_CloseConnection(NetConnection *connection, const NetCloseStyle closeStyle)
{
  NetEndpoint *Endpoint; 
  bool IsDemoPlaying; 
  __int32 v6; 
  NetAddress *Address; 
  bdReference<bdAddrHandle> *Handle; 
  netadr_t result; 

  Endpoint = NetConnection::GetEndpoint(connection);
  NetConnection::GetNetadr(connection, &result);
  if ( NetEndpoint::GetConnectionCount(Endpoint) == 1 )
  {
    IsDemoPlaying = SV_IsDemoPlaying();
    if ( !Sys_IsMainThread() && !IsDemoPlaying && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_main.cpp", 376, ASSERT_TYPE_ASSERT, "(NET_IsConnectionThread())", "%s\n\tLast address reference should always be removed from client context", "NET_IsConnectionThread()") )
      __debugbreak();
    FakeLag_FlushPackets();
    if ( closeStyle )
    {
      v6 = closeStyle - 1;
      if ( !v6 )
      {
LABEL_12:
        RMsg_DropAddr(&result, 0);
        goto LABEL_13;
      }
      if ( v6 == 1 )
      {
        Sys_EnterCriticalSection(CRITSECT_DEMONWARE);
        Address = NetEndpoint::GetAddress(Endpoint);
        Handle = NetAddress::GetHandle(Address);
        dwCloseConnection(Handle);
        Sys_LeaveCriticalSection(CRITSECT_DEMONWARE);
        goto LABEL_12;
      }
    }
    else if ( RMsg_IsActiveAddr(&result, 0) && !NetGraveyard::Add(&s_statics.graveyard, Endpoint) )
    {
      goto LABEL_12;
    }
  }
LABEL_13:
  NetConnectionBuffer::Unregister(&s_statics.connections, connection);
}

/*
==============
NET_Configure
==============
*/
void NET_Configure(const NetConfig *config)
{
  s_statics.config = *config;
}

/*
==============
NET_CreateChannel
==============
*/
NetChannel *NET_CreateChannel(NetConnection *connection)
{
  return NetChannelBuffer::Open(&s_statics.channels, connection);
}

/*
==============
NET_CreateSession
==============
*/
void NET_CreateSession(XSESSION_INFO *outSessionInfo)
{
  XSECURITY_INFO *SecurityInfo; 
  XNADDR *Address; 

  SecurityInfo = XSESSION_INFO::GetSecurityInfo(outSessionInfo);
  dwCreateSession(SecurityInfo);
  Address = XSESSION_INFO::GetAddress(outSessionInfo);
  NET_GetLocalXnaddr(Address);
  XSESSION_INFO::operator=(&s_statics.demoSession, outSessionInfo);
}

/*
==============
NET_DemonwareConnect
==============
*/
_BOOL8 NET_DemonwareConnect(const bdSecurityID *securityId, const bdReference<bdCommonAddr> *addr, bdReference<bdAddrHandle> *outAddrHandle)
{
  unsigned int v6; 
  bool v7; 

  Sys_EnterCriticalSection(CRITSECT_DEMONWARE);
  dwRegisterAddress(securityId, addr, outAddrHandle);
  Sys_LeaveCriticalSection(CRITSECT_DEMONWARE);
  v6 = 0;
  if ( SV_IsDemoPlaying() )
    v6 = 2;
  Sys_EnterCriticalSection(CRITSECT_DEMONWARE);
  v7 = dwOpenConnection(securityId, outAddrHandle, v6);
  Sys_LeaveCriticalSection(CRITSECT_DEMONWARE);
  return v7;
}

/*
==============
NET_DlogTelemetry
==============
*/
__int64 NET_DlogTelemetry(DLogContext *context, const char *name)
{
  Sys_EnterCriticalSection(CRITSECT_DEMONWARE);
  LOBYTE(name) = NetTelemetry::Dlog(&s_statics.telemetry, context, name);
  Sys_LeaveCriticalSection(CRITSECT_DEMONWARE);
  return (unsigned __int8)name;
}

/*
==============
NET_EnterCriticalSection
==============
*/
void NET_EnterCriticalSection(void)
{
  Sys_EnterCriticalSection(CRITSECT_DEMONWARE);
}

/*
==============
NET_ExitCriticalSection
==============
*/
void NET_ExitCriticalSection(void)
{
  Sys_LeaveCriticalSection(CRITSECT_DEMONWARE);
}

/*
==============
NET_Flush
==============
*/
void NET_Flush(void)
{
  NetThread::Flush(&s_statics.thread);
}

/*
==============
NET_FlushLoopback
==============
*/
void NET_FlushLoopback(netsrc_t sock)
{
  NetLoopback::Flush(&s_statics.loopback, sock);
}

/*
==============
NET_FlushRecvQueue
==============
*/
void NET_FlushRecvQueue(void)
{
  NetBuffer<65536,0> *RecvBuffer; 
  volatile unsigned int m_writeOffset; 
  unsigned int v2; 
  __int64 v3; 
  int v4; 
  int v5; 
  volatile char *v6; 
  __int64 v7; 
  volatile char *m_readable; 
  __int64 v9; 

  RecvBuffer = NetThread::GetRecvBuffer(&s_statics.thread);
  m_writeOffset = RecvBuffer->m_stream.m_writeOffset;
  v2 = (RecvBuffer->m_stream.m_writeOffset - RecvBuffer->m_stream.m_readOffset) >> 7;
  v3 = (RecvBuffer->m_stream.m_readOffset >> 7) & 0x1FF;
  if ( v2 > 0x200 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\packet_stream.h", 71, ASSERT_TYPE_ASSERT, "(readCount <= WORD_COUNT)", (const char *)&queryFormat, "readCount <= WORD_COUNT") )
    __debugbreak();
  v4 = 512 - v3;
  if ( (int)v2 < 512 - (int)v3 )
    v4 = v2;
  v5 = v2 - v4;
  if ( v4 > 0 )
  {
    v6 = &RecvBuffer->m_stream.m_readable[v3];
    v7 = (unsigned int)v4;
    do
    {
      *v6++ = 0;
      --v7;
    }
    while ( v7 );
  }
  if ( v5 > 0 )
  {
    m_readable = RecvBuffer->m_stream.m_readable;
    v9 = (unsigned int)v5;
    do
    {
      *m_readable++ = 0;
      --v9;
    }
    while ( v9 );
  }
  RecvBuffer->m_stream.m_readOffset = m_writeOffset;
}

/*
==============
NET_Frame
==============
*/
void NET_Frame(void)
{
  RMsg_SendMessages();
  FakeLag_Frame();
  FakeBandwidth_Frame();
  NetConnectionBuffer::Frame(&s_statics.connections);
  NetGraveyard::Frame(&s_statics.graveyard);
  NetThread::Frame(&s_statics.thread);
  NetInit::Frame(&s_statics.init);
  NetTelemetry::Frame(&s_statics.telemetry);
}

/*
==============
NET_GetConnectionCount
==============
*/
int NET_GetConnectionCount()
{
  return NetConnectionBuffer::Count(&s_statics.connections);
}

/*
==============
NET_GetDemoSession
==============
*/
NetStatic *NET_GetDemoSession()
{
  return &s_statics;
}

/*
==============
NET_GetEndpoint
==============
*/
NetEndpoint *NET_GetEndpoint(const int addrHandleIndex)
{
  return NetEndpointBuffer::Get(&s_statics.endpoints, addrHandleIndex);
}

/*
==============
NET_GetLocalCommonAddr
==============
*/
const bdReference<bdCommonAddr> *NET_GetLocalCommonAddr()
{
  if ( !NetInit::IsLocalAddressResolved(&s_statics.init) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_main.cpp", 540, ASSERT_TYPE_ASSERT, "(s_statics.init.IsLocalAddressResolved())", (const char *)&queryFormat, "s_statics.init.IsLocalAddressResolved()") )
    __debugbreak();
  return NetInit::GetLocalAddr(&s_statics.init);
}

/*
==============
NET_GetLocalXnaddr
==============
*/
void NET_GetLocalXnaddr(XNADDR *addr)
{
  const bdReference<bdCommonAddr> *LocalAddr; 

  if ( !NetInit::IsLocalAddressResolved(&s_statics.init) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_main.cpp", 547, ASSERT_TYPE_ASSERT, "(s_statics.init.IsLocalAddressResolved())", (const char *)&queryFormat, "s_statics.init.IsLocalAddressResolved()") )
    __debugbreak();
  LocalAddr = NetInit::GetLocalAddr(&s_statics.init);
  bdCommonAddr::serialize(LocalAddr->m_ptr, addr->addrBuff);
}

/*
==============
NET_GetNatType
==============
*/
bdNATType NET_GetNatType()
{
  const bdReference<bdCommonAddr> *LocalAddr; 

  if ( !NetInit::IsLocalAddressResolved(&s_statics.init) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_main.cpp", 540, ASSERT_TYPE_ASSERT, "(s_statics.init.IsLocalAddressResolved())", (const char *)&queryFormat, "s_statics.init.IsLocalAddressResolved()") )
    __debugbreak();
  LocalAddr = NetInit::GetLocalAddr(&s_statics.init);
  return bdCommonAddr::getNATType(LocalAddr->m_ptr);
}

/*
==============
NET_GetPublicIP
==============
*/
unsigned int NET_GetPublicIP()
{
  const bdReference<bdCommonAddr> *LocalAddr; 
  bdAddr *PublicAddr; 

  if ( !dwNetIsStarted() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_main.cpp", 526, ASSERT_TYPE_ASSERT, "(NET_IsStarted())", (const char *)&queryFormat, "NET_IsStarted()") )
    __debugbreak();
  LocalAddr = NetInit::GetLocalAddr(&s_statics.init);
  PublicAddr = (bdAddr *)bdCommonAddr::getPublicAddr(LocalAddr->m_ptr);
  return bdSockAddr::toUInt32(&PublicAddr->m_address);
}

/*
==============
NET_GetPublicPort
==============
*/
unsigned __int16 NET_GetPublicPort()
{
  const bdReference<bdCommonAddr> *LocalAddr; 
  bdAddr *PublicAddr; 

  if ( !dwNetIsStarted() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_main.cpp", 533, ASSERT_TYPE_ASSERT, "(NET_IsStarted())", (const char *)&queryFormat, "NET_IsStarted()") )
    __debugbreak();
  LocalAddr = NetInit::GetLocalAddr(&s_statics.init);
  PublicAddr = (bdAddr *)bdCommonAddr::getPublicAddr(LocalAddr->m_ptr);
  return bdSockAddr::getPort(&PublicAddr->m_address);
}

/*
==============
NET_GetRecvQueueLength
==============
*/
__int64 NET_GetRecvQueueLength()
{
  NetBuffer<65536,0> *RecvBuffer; 

  RecvBuffer = NetThread::GetRecvBuffer(&s_statics.thread);
  return RecvBuffer->m_stream.m_writeOffset - RecvBuffer->m_stream.m_readOffset;
}

/*
==============
NET_GetRelayDatacenter
==============
*/
const char *NET_GetRelayDatacenter()
{
  NetRelay *Relay; 
  NetRelay *v1; 

  Relay = NetInit::GetRelay(&s_statics.init);
  if ( !NetRelay::IsStarted(Relay) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_main.cpp", 555, ASSERT_TYPE_ASSERT, "(NET_IsRelayStarted())", (const char *)&queryFormat, "NET_IsRelayStarted()") )
    __debugbreak();
  v1 = NetInit::GetRelay(&s_statics.init);
  return NetRelay::GetDatacenter(v1);
}

/*
==============
NET_GetRetailDebug
==============
*/
void NET_GetRetailDebug(char *destString, const int maxLength)
{
  NetRelay *Relay; 

  dwGetRetailDebug(destString, maxLength);
  Relay = NetInit::GetRelay(&s_statics.init);
  NetRelay::GetRetailDebug(Relay, destString, maxLength);
}

/*
==============
NET_GetSendQueueLength
==============
*/
__int64 NET_GetSendQueueLength()
{
  NetBuffer<262144,1> *SendBuffer; 

  SendBuffer = NetThread::GetSendBuffer(&s_statics.thread);
  return SendBuffer->m_stream.m_writeOffset - SendBuffer->m_stream.m_readOffset;
}

/*
==============
NET_IsConnectionActive
==============
*/
bool NET_IsConnectionActive(const netadr_t *addr)
{
  NetEndpoint *v1; 

  v1 = NetEndpointBuffer::Get(&s_statics.endpoints, addr->addrHandleIndex);
  return NetEndpoint::IsActive(v1);
}

/*
==============
NET_IsConnectionEstablished
==============
*/
bool NET_IsConnectionEstablished(const netadr_t *addr)
{
  NetEndpoint *v1; 

  v1 = NetEndpointBuffer::Get(&s_statics.endpoints, addr->addrHandleIndex);
  return NetEndpoint::IsConnected(v1);
}

/*
==============
NET_IsConnectionThread
==============
*/
bool NET_IsConnectionThread()
{
  bool IsDemoPlaying; 
  bool result; 

  IsDemoPlaying = SV_IsDemoPlaying();
  result = Sys_IsMainThread();
  if ( result || IsDemoPlaying )
    return 1;
  return result;
}

/*
==============
NET_IsLocalAddressResolved
==============
*/
bool NET_IsLocalAddressResolved()
{
  return NetInit::IsLocalAddressResolved(&s_statics.init);
}

/*
==============
NET_IsLocalXnaddr
==============
*/
bool NET_IsLocalXnaddr(const XNADDR *addr)
{
  const bdReference<bdCommonAddr> *LocalAddr; 
  XNADDR buffer; 

  if ( !NetInit::IsLocalAddressResolved(&s_statics.init) )
    return 0;
  if ( !NetInit::IsLocalAddressResolved(&s_statics.init) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_main.cpp", 547, ASSERT_TYPE_ASSERT, "(s_statics.init.IsLocalAddressResolved())", (const char *)&queryFormat, "s_statics.init.IsLocalAddressResolved()") )
    __debugbreak();
  LocalAddr = NetInit::GetLocalAddr(&s_statics.init);
  bdCommonAddr::serialize(LocalAddr->m_ptr, buffer.addrBuff);
  return XNADDR::operator==(&buffer, addr);
}

/*
==============
NET_IsOffline
==============
*/

bool __fastcall NET_IsOffline()
{
  return dwNetIsOffline();
}

/*
==============
NET_IsOnline
==============
*/

bool __fastcall NET_IsOnline()
{
  return dwNetIsOnline();
}

/*
==============
NET_IsRelayFailed
==============
*/

bool __fastcall NET_IsRelayFailed()
{
  return dwRelayIsFailed();
}

/*
==============
NET_IsRelayStarted
==============
*/
bool NET_IsRelayStarted()
{
  NetRelay *Relay; 

  Relay = NetInit::GetRelay(&s_statics.init);
  return NetRelay::IsStarted(Relay);
}

/*
==============
NET_IsRemoteXnaddr
==============
*/
_BOOL8 NET_IsRemoteXnaddr(const XNADDR *xnaddr, const netadr_t *remoteAddr)
{
  NetEndpoint *v3; 
  NetAddress *Address; 
  bdAddrHandle *m_ptr; 
  bdCommonAddr *v6; 
  volatile signed __int32 *p_m_refCount; 
  bool v8; 
  unsigned __int8 buffer[96]; 

  v3 = NetEndpointBuffer::Get(&s_statics.endpoints, remoteAddr->addrHandleIndex);
  Address = NetEndpoint::GetAddress(v3);
  m_ptr = NetAddress::GetHandle(Address)->m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  if ( m_ptr )
  {
    v6 = m_ptr->m_endpoint.m_ca.m_ptr;
    p_m_refCount = (volatile signed __int32 *)&v6->m_refCount;
    if ( v6 )
      _InterlockedExchangeAdd(p_m_refCount, 1u);
    bdCommonAddr::serialize(v6, buffer);
    v8 = memcmp_0(xnaddr, buffer, 0x54ui64) == 0;
    if ( v6 && !_InterlockedDecrement(p_m_refCount) )
      ((void (__fastcall *)(bdCommonAddr *, __int64))v6->~bdReferencable)(v6, 1i64);
  }
  else
  {
    v8 = 0;
  }
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdAddrHandle *, __int64))m_ptr->~bdReferencable)(m_ptr, 1i64);
  return v8;
}

/*
==============
NET_IsStartFailed
==============
*/

bool __fastcall NET_IsStartFailed()
{
  return dwNetIsStartFailed();
}

/*
==============
NET_IsStarted
==============
*/

bool __fastcall NET_IsStarted()
{
  return dwNetIsStarted();
}

/*
==============
NET_IsStarting
==============
*/
bool NET_IsStarting()
{
  bool result; 

  if ( dwNetIsStarting() )
    return 1;
  result = dwRelayIsStarting();
  if ( result )
    return 1;
  return result;
}

/*
==============
NET_OfflineTransition
==============
*/
void NET_OfflineTransition(void)
{
  NetInit::OfflineTransition(&s_statics.init);
}

/*
==============
NET_OnlineTransition
==============
*/
void NET_OnlineTransition(void)
{
  NetInit::OnlineTransition(&s_statics.init);
}

/*
==============
NET_OpenConnection
==============
*/
_BOOL8 NET_OpenConnection(const XSESSION_INFO *sessionInfo, const XNADDR *addr, const netsrc_t netId, netadr_t *outAddr)
{
  unsigned int v8; 
  const bdReference<bdCommonAddr> *v9; 
  const bdSecurityID *SecurityId; 
  const XSECURITY_INFO *SecurityInfo; 
  NetEndpoint *UserData; 
  NetSession *v13; 
  const char *v14; 
  const char *v15; 
  NetAddress *Address; 
  NetAddress *v17; 
  bdReference<bdAddrHandle> *Handle; 
  const bdSecurityID *v19; 
  bool v20; 
  bdReference<bdCommonAddr> result; 
  __int64 v23; 
  bdReference<bdAddrHandle> outAddrHandle; 

  v23 = -2i64;
  if ( !XSESSION_INFO::IsValidSessionId((XSESSION_INFO *)sessionInfo) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_main.cpp", 300, ASSERT_TYPE_ASSERT, "(sessionInfo.IsValidSessionId())", (const char *)&queryFormat, "sessionInfo.IsValidSessionId()") )
    __debugbreak();
  Sys_EnterCriticalSection(CRITSECT_DEMONWARE);
  v8 = 0;
  outAddrHandle.m_ptr = NULL;
  v9 = XNADDR::ToCommonAddr((XNADDR *)addr, &result);
  SecurityId = XSESSION_INFO::GetSecurityId((XSESSION_INFO *)sessionInfo);
  dwRegisterAddress(SecurityId, v9, &outAddrHandle);
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    if ( result.m_ptr )
      ((void (__fastcall *)(bdCommonAddr *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
    result.m_ptr = NULL;
  }
  SecurityInfo = XSESSION_INFO::GetSecurityInfo((XSESSION_INFO *)sessionInfo);
  NetSessionBuffer::Register(&s_statics.sessions, SecurityInfo);
  UserData = (NetEndpoint *)bdAddrHandle::getUserData(outAddrHandle.m_ptr);
  if ( !UserData )
  {
    v13 = NetSessionBuffer::Get(&s_statics.sessions, &outAddrHandle.m_ptr->m_endpoint.m_secID);
    if ( v13 )
    {
      UserData = NetBacklog::Add(&s_statics.backlog, &outAddrHandle, v13);
    }
    else
    {
      v14 = dwSecurityIdToString(&outAddrHandle.m_ptr->m_endpoint.m_secID);
      v15 = dwAddrHandleToString(&outAddrHandle);
      Com_PrintWarning(131097, "[NET] Attempted to resolve address %s for security id %s that is not registered\n", v15, v14);
    }
  }
  Sys_LeaveCriticalSection(CRITSECT_DEMONWARE);
  if ( outAddrHandle.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&outAddrHandle.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    if ( outAddrHandle.m_ptr )
      ((void (__fastcall *)(bdAddrHandle *, __int64))outAddrHandle.m_ptr->~bdReferencable)(outAddrHandle.m_ptr, 1i64);
    outAddrHandle.m_ptr = NULL;
  }
  Address = NetEndpoint::GetAddress(UserData);
  NetAddress::GetNetadr(Address, outAddr);
  outAddr->localNetID = netId;
  v17 = NetEndpoint::GetAddress(UserData);
  Handle = NetAddress::GetHandle(v17);
  v19 = XSESSION_INFO::GetSecurityId((XSESSION_INFO *)sessionInfo);
  if ( SV_IsDemoPlaying() )
    v8 = 2;
  Sys_EnterCriticalSection(CRITSECT_DEMONWARE);
  v20 = dwOpenConnection(v19, Handle, v8);
  Sys_LeaveCriticalSection(CRITSECT_DEMONWARE);
  return v20;
}

/*
==============
NET_OpenConnection
==============
*/
bool NET_OpenConnection(const XSESSION_INFO *hostInfo, const netsrc_t netId, netadr_t *outAddr)
{
  const XNADDR *Address; 

  Address = XSESSION_INFO::GetAddress((XSESSION_INFO *)hostInfo);
  return NET_OpenConnection(hostInfo, Address, netId, outAddr);
}

/*
==============
NET_PrintConnections
==============
*/
void NET_PrintConnections(void)
{
  NetConnectionBuffer::Print(&s_statics.connections);
}

/*
==============
NET_PrintTelemetry
==============
*/
void NET_PrintTelemetry(unsigned int *percentiles, int percentileCount, const char *name)
{
  Sys_EnterCriticalSection(CRITSECT_DEMONWARE);
  NetTelemetry::Print(&s_statics.telemetry, percentiles, percentileCount, name);
  Sys_LeaveCriticalSection(CRITSECT_DEMONWARE);
}

/*
==============
NET_RecvFrom
==============
*/
__int64 NET_RecvFrom(void *const buffer, const int size, netadr_t *outFrom, NetPingInfo *info)
{
  int v9; 
  NetEndpoint *v10; 
  NetEndpoint *v11; 
  NetAddress *Address; 
  bdReference<bdAddrHandle> outFroma; 
  __int64 v14; 

  v14 = -2i64;
  if ( !dwNetIsStarted() )
    return 4294967287i64;
  info->initialized = 1;
  info->netTicks = NetPing::Timestamp();
  outFroma.m_ptr = NULL;
  v9 = NetThread::RecvFrom(&s_statics.thread, buffer, size, &outFroma, info);
  if ( v9 > 0 )
  {
    v10 = NET_ResolveEndpoint(&outFroma);
    v11 = v10;
    if ( v10 )
    {
      if ( NetEndpoint::IsLoopback(v10) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_main.cpp", 229, ASSERT_TYPE_ASSERT, "(!endpoint->IsLoopback())", "%s\n\tLoopback packets should be received via loopback buffers", "!endpoint->IsLoopback()") )
        __debugbreak();
      NetEndpoint::OnRecv(v11);
      Address = NetEndpoint::GetAddress(v11);
      NetAddress::GetNetadr(Address, outFrom);
    }
    else
    {
      v9 = -9;
    }
    NetTelemetry::GameRecv(&s_statics.telemetry);
  }
  if ( outFroma.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&outFroma.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    if ( outFroma.m_ptr )
      ((void (__fastcall *)(bdAddrHandle *, __int64))outFroma.m_ptr->~bdReferencable)(outFroma.m_ptr, 1i64);
  }
  return (unsigned int)v9;
}

/*
==============
NET_RecvLoopback
==============
*/
__int64 NET_RecvLoopback(netsrc_t netId, void *const buffer, const int size, netadr_t *outFrom, NetPingInfo *info)
{
  int v10; 
  NetEndpoint *UserData; 
  NetEndpoint *v12; 
  NetAddress *Address; 
  NetAddress *v14; 
  bdReference<bdAddrHandle> v15; 
  __int64 v16; 

  v16 = -2i64;
  if ( !dwNetIsStarted() )
    return 4294967287i64;
  info->initialized = 1;
  info->netTicks = NetPing::Timestamp();
  v15.m_ptr = NULL;
  v10 = NetLoopback::RecvFrom(&s_statics.loopback, netId, buffer, size, &v15, info);
  if ( v10 > 0 )
  {
    UserData = (NetEndpoint *)bdAddrHandle::getUserData(v15.m_ptr);
    v12 = UserData;
    if ( UserData )
    {
      if ( !NetEndpoint::IsLoopback(UserData) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_main.cpp", 275, ASSERT_TYPE_ASSERT, "(endpoint->IsLoopback())", "%s\n\tExpected loopback address when reading from loopback buffer", "endpoint->IsLoopback()") )
        __debugbreak();
      Address = NetEndpoint::GetAddress(v12);
      if ( NetAddress::IsBacklog(Address) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_main.cpp", 276, ASSERT_TYPE_ASSERT, "(!endpoint->GetAddress().IsBacklog())", "%s\n\tLoopback connections are not expected to have join dialogue", "!endpoint->GetAddress().IsBacklog()") )
        __debugbreak();
      NetEndpoint::OnRecv(v12);
      v14 = NetEndpoint::GetAddress(v12);
      NetAddress::GetNetadr(v14, outFrom);
    }
    else
    {
      v10 = -9;
    }
  }
  if ( v15.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v15.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    if ( v15.m_ptr )
      ((void (__fastcall *)(bdAddrHandle *, __int64))v15.m_ptr->~bdReferencable)(v15.m_ptr, 1i64);
  }
  return (unsigned int)v10;
}

/*
==============
NET_RegisterConnection
==============
*/
void NET_RegisterConnection(NetConnection *connection)
{
  NetConnectionBuffer::Register(&s_statics.connections, connection);
}

/*
==============
NET_ReopenConnection
==============
*/
_BOOL8 NET_ReopenConnection(NetConnection *connection)
{
  NetEndpoint *Endpoint; 
  unsigned int v2; 
  const bdReference<bdCommonAddr> *CommonAddr; 
  const bdSecurityID *SecurityId; 
  bool v5; 
  NetAddress *Address; 
  bdReference<bdAddrHandle> *Handle; 
  bdAddrHandle *m_ptr; 
  bdReference<bdAddrHandle> outAddrHandle; 

  Endpoint = NetConnection::GetEndpoint(connection);
  v2 = 0;
  outAddrHandle.m_ptr = NULL;
  CommonAddr = NetEndpoint::GetCommonAddr(Endpoint);
  SecurityId = NetEndpoint::GetSecurityId(Endpoint);
  Sys_EnterCriticalSection(CRITSECT_DEMONWARE);
  dwRegisterAddress(SecurityId, CommonAddr, &outAddrHandle);
  Sys_LeaveCriticalSection(CRITSECT_DEMONWARE);
  if ( SV_IsDemoPlaying() )
    v2 = 2;
  Sys_EnterCriticalSection(CRITSECT_DEMONWARE);
  v5 = dwOpenConnection(SecurityId, &outAddrHandle, v2);
  Sys_LeaveCriticalSection(CRITSECT_DEMONWARE);
  if ( !v5 )
    goto LABEL_6;
  Address = NetEndpoint::GetAddress(Endpoint);
  Handle = NetAddress::GetHandle(Address);
  m_ptr = outAddrHandle.m_ptr;
  if ( outAddrHandle.m_ptr != Handle->m_ptr )
  {
    NetEndpoint::Update(Endpoint, &outAddrHandle);
LABEL_6:
    m_ptr = outAddrHandle.m_ptr;
  }
  if ( m_ptr && !_InterlockedDecrement((volatile signed __int32 *)&m_ptr->m_refCount) && outAddrHandle.m_ptr )
    ((void (__fastcall *)(bdAddrHandle *, __int64))outAddrHandle.m_ptr->~bdReferencable)(outAddrHandle.m_ptr, 1i64);
  return v5;
}

/*
==============
NET_Reset
==============
*/
void NET_Reset(void)
{
  QosPayload::ms_qosPayload.Uninit(&QosPayload::ms_qosPayload);
  NetThread::Stop(&s_statics.thread);
  NetThread::SetTelemetry(&s_statics.thread, &s_statics.telemetry);
  NetTelemetry::Reset(&s_statics.telemetry);
  NetBacklog::Reset(&s_statics.backlog, &s_statics.endpoints);
  NetGraveyard::Reset(&s_statics.graveyard);
  NetConnectionBuffer::Reset(&s_statics.connections);
  NetChannelBuffer::Reset(&s_statics.channels, &s_statics.thread);
  NetEndpointBuffer::Reset(&s_statics.endpoints);
  NetInit::Reset(&s_statics.init, &s_statics.config, &s_statics.thread, &s_statics.loopback);
}

/*
==============
NET_ResetTelemetry
==============
*/
void NET_ResetTelemetry(void)
{
  Sys_EnterCriticalSection(CRITSECT_DEMONWARE);
  NetTelemetry::Reset(&s_statics.telemetry);
  Sys_LeaveCriticalSection(CRITSECT_DEMONWARE);
}

/*
==============
NET_ResolveEndpoint
==============
*/
NetEndpoint *NET_ResolveEndpoint(const bdReference<bdAddrHandle> *addrHandle)
{
  NetEndpoint *result; 
  NetSession *v3; 
  const char *v4; 
  const char *v5; 

  result = (NetEndpoint *)bdAddrHandle::getUserData(addrHandle->m_ptr);
  if ( !result )
  {
    v3 = NetSessionBuffer::Get(&s_statics.sessions, &addrHandle->m_ptr->m_endpoint.m_secID);
    if ( v3 )
    {
      return NetBacklog::Add(&s_statics.backlog, addrHandle, v3);
    }
    else
    {
      v4 = dwSecurityIdToString(&addrHandle->m_ptr->m_endpoint.m_secID);
      v5 = dwAddrHandleToString(addrHandle);
      Com_PrintWarning(131097, "[NET] Attempted to resolve address %s for security id %s that is not registered\n", v5, v4);
      return 0i64;
    }
  }
  return result;
}

/*
==============
NET_SendTo
==============
*/
__int64 NET_SendTo(const void *data, const int length, const netadr_t *to, const unsigned int flags, NetPingInfo *info)
{
  char v5; 
  NetEndpoint *v9; 
  NetAddress *Address; 
  bdAddrHandle *m_ptr; 
  const char *v13; 
  unsigned int v14; 
  const char *v16; 
  bdCommonAddr *v17; 
  bool m_isLoopback; 
  int v19; 
  NetAddress *v20; 
  NetEndpoint *v21; 
  NetAddress *v22; 
  bdReference<bdAddrHandle> toa; 
  bdCommonAddr *v25; 
  netadr_t v26; 
  netadr_t v27; 
  __int64 v28; 
  netadr_t outAddr; 

  v28 = -2i64;
  v5 = flags;
  _RBX = to;
  v9 = NetEndpointBuffer::Get(&s_statics.endpoints, to->addrHandleIndex);
  Address = NetEndpoint::GetAddress(v9);
  m_ptr = NetAddress::GetHandle(Address)->m_ptr;
  toa.m_ptr = m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  if ( NetEndpoint::IsOpened(v9) )
  {
    if ( NetEndpoint::IsConnected(v9) )
    {
      info->initialized = 1;
      info->netTicks = NetPing::Timestamp();
      NetEndpoint::OnSend(v9);
      v17 = toa.m_ptr->m_endpoint.m_ca.m_ptr;
      v25 = v17;
      if ( v17 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v17->m_refCount, 1u);
      m_isLoopback = v17->m_isLoopback;
      if ( v17 && _InterlockedExchangeAdd((volatile signed __int32 *)&v17->m_refCount, 0xFFFFFFFF) == 1 )
      {
        ((void (__fastcall *)(bdCommonAddr *, __int64))v17->~bdReferencable)(v17, 1i64);
        v25 = NULL;
      }
      if ( m_isLoopback )
      {
        v19 = NetLoopback::SendTo(&s_statics.loopback, _RBX->localNetID, data, length, &toa, info);
      }
      else
      {
        if ( !Sys_IsMainThread() && (v5 & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_main.cpp", 199, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread() || !( flags & NET_SEND_FLAG_RELIABLE ))", "%s\n\tReliable sends should occur only from main thread", "Sys_IsMainThread() || !( flags & NET_SEND_FLAG_RELIABLE )") )
          __debugbreak();
        if ( !dwNetIsStarted() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_main.cpp", 200, ASSERT_TYPE_ASSERT, "(NET_IsStarted())", "%s\n\tCannot send network packets before networking is started", "NET_IsStarted()") )
          __debugbreak();
        v20 = NetEndpoint::GetAddress(v9);
        if ( NetAddress::IsBacklog(v20) && (v5 & 1) != 0 )
        {
          v21 = NetBacklog::Graveyard(&s_statics.backlog, _RBX->addrHandleIndex, &s_statics.graveyard);
          if ( v21 )
          {
            v22 = NetEndpoint::GetAddress(v21);
            NetAddress::GetNetadr(v22, &outAddr);
            outAddr.localNetID = _RBX->localNetID;
            RMsg_UpdateAddr(_RBX, &outAddr);
          }
          else
          {
            RMsg_DropAddr(_RBX, 0);
          }
        }
        v19 = NetThread::SendTo(&s_statics.thread, data, length, &toa, info);
      }
      v14 = v19;
    }
    else
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]
        vmovups [rsp+0E8h+var_88], xmm0
      }
      v27.addrHandleIndex = _RBX->addrHandleIndex;
      v16 = NET_AdrToString(&v27);
      Com_PrintWarning(131097, "[NET] Failed to send to '%s' - not connected\n", v16);
      v14 = -11;
    }
  }
  else
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rbx]
      vmovups [rsp+0E8h+var_A8], xmm0
    }
    v26.addrHandleIndex = _RBX->addrHandleIndex;
    v13 = NET_AdrToString(&v26);
    Com_Printf(131097, "[NET] Failed to send to '%s' - not opened\n", v13);
    v14 = -9;
  }
  if ( toa.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&toa.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && toa.m_ptr )
    ((void (__fastcall *)(bdAddrHandle *, __int64))toa.m_ptr->~bdReferencable)(toa.m_ptr, 1i64);
  return v14;
}

/*
==============
NET_SetDemoSession
==============
*/
void NET_SetDemoSession(const XSESSION_INFO *sessionInfo)
{
  bdCommonAddr *v2; 
  bdCommonAddr *v3; 
  bdCommonAddr *v4; 
  bdCommonAddr *v5; 
  volatile signed __int32 *p_m_refCount; 
  bdCommonAddr *v7; 
  bdCommonAddr *v8; 
  const XNADDR *Address; 
  bdNATType NATType; 
  const bdAddr *PublicAddr; 
  const bdFixedArray<bdAddr,5> *LocalAddrs; 
  bdReference<bdCommonAddr> me; 
  bdCommonAddr *v14; 
  __int64 v15; 
  bdCommonAddr *v16; 
  bdCommonAddr localAddr; 

  v15 = -2i64;
  v2 = (bdCommonAddr *)bdMemory::allocate(0x4E0ui64);
  me.m_ptr = v2;
  v3 = NULL;
  if ( v2 )
  {
    bdCommonAddr::bdCommonAddr(v2);
    v5 = v4;
  }
  else
  {
    v5 = NULL;
  }
  v16 = v5;
  p_m_refCount = (volatile signed __int32 *)&v5->m_refCount;
  if ( v5 )
    _InterlockedExchangeAdd(p_m_refCount, 1u);
  v7 = (bdCommonAddr *)bdMemory::allocate(0x4E0ui64);
  v14 = v7;
  if ( v7 )
  {
    bdCommonAddr::bdCommonAddr(v7);
    v3 = v8;
  }
  v14 = v3;
  if ( v3 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v3->m_refCount, 1u);
  Address = XSESSION_INFO::GetAddress((XSESSION_INFO *)sessionInfo);
  me.m_ptr = v5;
  if ( v5 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_refCount, 1u);
  if ( bdCommonAddr::deserialize(v3, (bdReference<bdCommonAddr>)&me, Address->addrBuff) )
  {
    NATType = bdCommonAddr::getNATType(v3);
    PublicAddr = bdCommonAddr::getPublicAddr(v3);
    LocalAddrs = bdCommonAddr::getLocalAddrs(v3);
    bdCommonAddr::bdCommonAddr(&localAddr, LocalAddrs, PublicAddr, NATType, BD_PLATFORM_ID_XBOXONE);
    NetInit::SetLocalAddr(&s_statics.init, &localAddr);
    bdCommonAddr::~bdCommonAddr(&localAddr);
  }
  XSESSION_INFO::operator=(&s_statics.demoSession, sessionInfo);
  if ( v3 && _InterlockedExchangeAdd((volatile signed __int32 *)&v3->m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdCommonAddr *, __int64))v3->~bdReferencable)(v3, 1i64);
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd(p_m_refCount, 0xFFFFFFFF) == 1 )
      ((void (__fastcall *)(bdCommonAddr *, __int64))v5->~bdReferencable)(v5, 1i64);
  }
}

/*
==============
NET_SetNatType
==============
*/
void NET_SetNatType(int natType)
{
  const bdReference<bdCommonAddr> *LocalAddr; 

  if ( !NetInit::IsLocalAddressResolved(&s_statics.init) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_main.cpp", 540, ASSERT_TYPE_ASSERT, "(s_statics.init.IsLocalAddressResolved())", (const char *)&queryFormat, "s_statics.init.IsLocalAddressResolved()") )
    __debugbreak();
  LocalAddr = NetInit::GetLocalAddr(&s_statics.init);
  bdCommonAddr::setNATType(LocalAddr->m_ptr, (const bdNATType)natType);
}

/*
==============
NET_Start
==============
*/
void NET_Start(const NetConfig *config, NetEventListener *listener)
{
  s_statics.config = *config;
  NetInit::Start(&s_statics.init, listener, &s_statics.routerListener);
}

/*
==============
NET_Stop
==============
*/
void NET_Stop(void)
{
  NetInit::Stop(&s_statics.init);
}

