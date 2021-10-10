/*
==============
dwRelayStop
==============
*/

bool __fastcall dwRelayStop()
{
  return ?dwRelayStop@@YA_NXZ();
}

/*
==============
dwNetPump
==============
*/

void dwNetPump(void)
{
  ?dwNetPump@@YAXXZ();
}

/*
==============
dwRelayDisconnectExcess
==============
*/

void dwRelayDisconnectExcess(void)
{
  ?dwRelayDisconnectExcess@@YAXXZ();
}

/*
==============
dwGetRetailDebug
==============
*/

void __fastcall dwGetRetailDebug(char *destString, const int maxLength)
{
  ?dwGetRetailDebug@@YAXPEADH@Z(destString, maxLength);
}

/*
==============
dwRegisterSession
==============
*/

void __fastcall dwRegisterSession(const XSECURITY_INFO *security)
{
  ?dwRegisterSession@@YAXAEBVXSECURITY_INFO@@@Z(security);
}

/*
==============
dwRelaySetError
==============
*/

void __fastcall dwRelaySetError(DWNetError error)
{
  ?dwRelaySetError@@YAXW4DWNetError@@@Z(error);
}

/*
==============
dwRegisterAddress
==============
*/

bool __fastcall dwRegisterAddress(const bdSecurityID *secId, const bdReference<bdCommonAddr> *commonAddr, bdReference<bdAddrHandle> *outAddrHandle)
{
  return ?dwRegisterAddress@@YA_NAEBVbdSecurityID@@AEBV?$bdReference@VbdCommonAddr@@@@AEAV?$bdReference@VbdAddrHandle@@@@@Z(secId, commonAddr, outAddrHandle);
}

/*
==============
dwUnregisterAddr
==============
*/

void __fastcall dwUnregisterAddr(const bdReference<bdAddrHandle> *addr)
{
  ?dwUnregisterAddr@@YAXAEBV?$bdReference@VbdAddrHandle@@@@@Z(addr);
}

/*
==============
dwNetStart
==============
*/

void __fastcall dwNetStart(const NetMode mode, bdSocketRouterListener *routerListener, bdSocketRouterRelayManager *relayOverride, bool (__fastcall *callback)(bool, NetMode, NetMode *))
{
  ?dwNetStart@@YAXW4NetMode@@PEAVbdSocketRouterListener@@PEAVbdSocketRouterRelayManager@@P6A_N_NW41@AEAW41@@Z@Z(mode, routerListener, relayOverride, callback);
}

/*
==============
dwAddrToString
==============
*/

const char *__fastcall dwAddrToString(const bdAddr *addr)
{
  return ?dwAddrToString@@YAPEBDAEBVbdAddr@@@Z(addr);
}

/*
==============
dwRelayStart
==============
*/

bool __fastcall dwRelayStart(const bdRelayAuthToken *relayAuthToken, dwNetRelayListener *listener)
{
  return ?dwRelayStart@@YA_NAEBVbdRelayAuthToken@@PEAVdwNetRelayListener@@@Z(relayAuthToken, listener);
}

/*
==============
dwNetIsOnline
==============
*/

bool __fastcall dwNetIsOnline()
{
  return ?dwNetIsOnline@@YA_NXZ();
}

/*
==============
dwNetIsOffline
==============
*/

bool __fastcall dwNetIsOffline()
{
  return ?dwNetIsOffline@@YA_NXZ();
}

/*
==============
dwGetSocketRouter
==============
*/

bdSocketRouter *__fastcall dwGetSocketRouter()
{
  return ?dwGetSocketRouter@@YAPEAVbdSocketRouter@@XZ();
}

/*
==============
dwNetIsStarting
==============
*/

bool __fastcall dwNetIsStarting()
{
  return ?dwNetIsStarting@@YA_NXZ();
}

/*
==============
dwRecvFrom
==============
*/

int __fastcall dwRecvFrom(bdReference<bdAddrHandle> *outFrom, void *const data, const unsigned int size)
{
  return ?dwRecvFrom@@YAHAEAV?$bdReference@VbdAddrHandle@@@@QEAXI@Z(outFrom, data, size);
}

/*
==============
dwNetStop
==============
*/

void dwNetStop(void)
{
  ?dwNetStop@@YAXXZ();
}

/*
==============
dwPrepareSendTo
==============
*/

int __fastcall dwPrepareSendTo(const unsigned int length, const void *data, NetPacket *packet)
{
  return ?dwPrepareSendTo@@YAHIPEBXPEAUNetPacket@@@Z(length, data, packet);
}

/*
==============
dwSecurityIdToString
==============
*/

const char *__fastcall dwSecurityIdToString(const bdSecurityID *securityId)
{
  return ?dwSecurityIdToString@@YAPEBDAEBVbdSecurityID@@@Z(securityId);
}

/*
==============
dwCloseConnection
==============
*/

void __fastcall dwCloseConnection(bdReference<bdAddrHandle> *addrHandle)
{
  ?dwCloseConnection@@YAXAEAV?$bdReference@VbdAddrHandle@@@@@Z(addrHandle);
}

/*
==============
dwRelayIsStarted
==============
*/

bool __fastcall dwRelayIsStarted()
{
  return ?dwRelayIsStarted@@YA_NXZ();
}

/*
==============
dwNetIsStartFailed
==============
*/

bool __fastcall dwNetIsStartFailed()
{
  return ?dwNetIsStartFailed@@YA_NXZ();
}

/*
==============
dwCreateSession
==============
*/

void __fastcall dwCreateSession(XSECURITY_INFO *outSecurity)
{
  ?dwCreateSession@@YAXAEAVXSECURITY_INFO@@@Z(outSecurity);
}

/*
==============
dwGetQoSProber
==============
*/

bdQoSProbe *__fastcall dwGetQoSProber()
{
  return ?dwGetQoSProber@@YAPEAVbdQoSProbe@@XZ();
}

/*
==============
dwSendTo
==============
*/

int __fastcall dwSendTo(NetPacket **packets, const int packetCount)
{
  return ?dwSendTo@@YAHQEAPEAUNetPacket@@H@Z(packets, packetCount);
}

/*
==============
dwGetNet
==============
*/

bdNetImpl *__fastcall dwGetNet()
{
  return ?dwGetNet@@YAPEAVbdNetImpl@@XZ();
}

/*
==============
dwCommonAddrToString
==============
*/

const char *__fastcall dwCommonAddrToString(const bdReference<bdCommonAddr> *commonAddr)
{
  return ?dwCommonAddrToString@@YAPEBDAEBV?$bdReference@VbdCommonAddr@@@@@Z(commonAddr);
}

/*
==============
dwAddrHandleToString
==============
*/

const char *__fastcall dwAddrHandleToString(const bdReference<bdAddrHandle> *addrHandle)
{
  return ?dwAddrHandleToString@@YAPEBDAEBV?$bdReference@VbdAddrHandle@@@@@Z(addrHandle);
}

/*
==============
dwOpenConnection
==============
*/

bool __fastcall dwOpenConnection(const bdSecurityID *secId, bdReference<bdAddrHandle> *addrHandle, const unsigned int openFlags)
{
  return ?dwOpenConnection@@YA_NAEBVbdSecurityID@@AEAV?$bdReference@VbdAddrHandle@@@@I@Z(secId, addrHandle, openFlags);
}

/*
==============
dwMigrateConnection
==============
*/

bool __fastcall dwMigrateConnection(const bdReference<bdAddrHandle> *addrHandle, const bdReference<bdCommonAddr> *commonAddr)
{
  return ?dwMigrateConnection@@YA_NAEBV?$bdReference@VbdAddrHandle@@@@AEBV?$bdReference@VbdCommonAddr@@@@@Z(addrHandle, commonAddr);
}

/*
==============
dwAddrHandleToNetadr
==============
*/

void __fastcall dwAddrHandleToNetadr(const bdReference<bdAddrHandle> *addrHandle, netadr_t *outAddr)
{
  ?dwAddrHandleToNetadr@@YAXAEBV?$bdReference@VbdAddrHandle@@@@AEAUnetadr_t@@@Z(addrHandle, outAddr);
}

/*
==============
dwNetIsStarted
==============
*/

bool __fastcall dwNetIsStarted()
{
  return ?dwNetIsStarted@@YA_NXZ();
}

/*
==============
dwUnregisterSession
==============
*/

void __fastcall dwUnregisterSession(const bdSecurityID *id)
{
  ?dwUnregisterSession@@YAXAEBVbdSecurityID@@@Z(id);
}

/*
==============
dwRelayIsFailed
==============
*/

bool __fastcall dwRelayIsFailed()
{
  return ?dwRelayIsFailed@@YA_NXZ();
}

/*
==============
dwGetGameSocket
==============
*/

unsigned __int64 __fastcall dwGetGameSocket()
{
  return ?dwGetGameSocket@@YA_KXZ();
}

/*
==============
dwRelayIsStarting
==============
*/

bool __fastcall dwRelayIsStarting()
{
  return ?dwRelayIsStarting@@YA_NXZ();
}

/*
==============
PacketSummaryString
==============
*/
char *PacketSummaryString(const void *dataVoid, int length)
{
  int v2; 
  signed __int64 v3; 
  _BYTE *v4; 
  __int64 i; 
  char v6; 
  char v7; 
  char v8; 
  char v9; 
  __int64 v10; 
  int v11; 
  __int64 v12; 
  __int64 v13; 
  int v15; 
  int v16; 

  v2 = 0;
  v3 = (_BYTE *)dataVoid - summary;
  v4 = dataVoid;
  for ( i = 0i64; i < 16; i += 4i64 )
  {
    if ( i >= length )
      break;
    dataVoid = &summary[i];
    v6 = summary[i + v3];
    if ( (v6 & 0xDF) == 0 )
      break;
    *(_BYTE *)dataVoid = v6;
    if ( i + 1 >= length || (v7 = v4[i + 1]) == 0 || v7 == 32 )
    {
      ++v2;
      break;
    }
    *((_BYTE *)dataVoid + 1) = v7;
    if ( i + 2 >= length || (v8 = v4[i + 2]) == 0 || v8 == 32 )
    {
      v2 += 2;
      break;
    }
    *((_BYTE *)dataVoid + 2) = v8;
    if ( i + 3 >= length || (v9 = v4[i + 3]) == 0 || v9 == 32 )
    {
      v2 += 3;
      break;
    }
    *((_BYTE *)dataVoid + 3) = v9;
    v2 += 4;
  }
  if ( v2 < length )
  {
    v10 = v2;
    v11 = v2 + 1;
    summary[v10] = 46;
    v12 = v11++;
    summary[v12] = 46;
    v13 = v11;
    v2 = v11 + 1;
    summary[v13] = 46;
  }
  if ( (unsigned int)v2 >= 0x20 )
  {
    v16 = 32;
    v15 = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwnet.cpp", 786, ASSERT_TYPE_ASSERT, "(unsigned)( i ) < (unsigned)( sizeof( summary ) )", "i doesn't index sizeof( summary )\n\t%i not in [0, %i)", v15, v16) )
      __debugbreak();
  }
  if ( (unsigned __int64)v2 >= 0x20 )
  {
    j___report_rangecheckfailure(dataVoid);
    JUMPOUT(0x141994A87i64);
  }
  summary[v2] = 0;
  return summary;
}

/*
==============
dwAddrHandleToNetadr
==============
*/
void dwAddrHandleToNetadr(const bdReference<bdAddrHandle> *addrHandle, netadr_t *outAddr)
{
  bdAddrHandle *m_ptr; 
  bdCommonAddr *v5; 
  netadrtype_t v6; 
  bdAddr *LocalAddrByIndex; 
  bool isResolved; 
  bdAddrHandle *v9; 
  bdAddr v10; 
  bdAddr result; 

  if ( !addrHandle->m_ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwnet.cpp", 954, ASSERT_TYPE_ASSERT, "(addrHandle.notNull())", (const char *)&queryFormat, "addrHandle.notNull()") )
    __debugbreak();
  m_ptr = addrHandle->m_ptr;
  if ( addrHandle->m_ptr )
  {
    bdAddr::bdAddr(&v10);
    v5 = m_ptr->m_endpoint.m_ca.m_ptr;
    if ( v5->m_isLoopback )
    {
      v6 = NA_LOOPBACK;
      LocalAddrByIndex = (bdAddr *)bdCommonAddr::getLocalAddrByIndex(v5, 0);
    }
    else
    {
      v6 = NA_IP;
      isResolved = bdAddrHandle::isResolved(addrHandle->m_ptr);
      v9 = addrHandle->m_ptr;
      if ( isResolved )
        LocalAddrByIndex = (bdAddr *)bdAddrHandle::getRealAddr(v9, &result);
      else
        LocalAddrByIndex = (bdAddr *)bdCommonAddr::getPublicAddr(v9->m_endpoint.m_ca.m_ptr);
    }
    v10 = *LocalAddrByIndex;
    *(in_addr *)outAddr->ip = *bdSockAddr::getIn4Addr(&v10.m_address);
    outAddr->port = bdSockAddr::getPort(&v10.m_address);
    outAddr->flags = 0;
    outAddr->type = v6;
  }
}

/*
==============
dwAddrHandleToString
==============
*/
char *dwAddrHandleToString(const bdReference<bdAddrHandle> *addrHandle)
{
  bdAddrHandle *m_ptr; 
  const char *v2; 
  bdAddr *RealAddr; 
  const bdFixedArray<bdAddr,5> *LocalAddrs; 
  bdCommonAddr *v6; 
  const bdFixedArray<bdAddr,5> *v7; 
  bdAddr *PublicAddr; 
  bdAddr result; 
  char dest[24]; 

  m_ptr = addrHandle->m_ptr;
  v2 = (char *)&queryFormat.fmt + 3;
  if ( addrHandle->m_ptr->m_endpoint.m_ca.m_ptr->m_isLoopback )
  {
    Core_strcpy(dest, 0x16ui64, "loopback");
  }
  else if ( bdAddrHandle::isResolved(addrHandle->m_ptr) )
  {
    RealAddr = (bdAddr *)bdAddrHandle::getRealAddr(addrHandle->m_ptr, &result);
    bdAddr::toString(RealAddr, dest, 0x16ui64);
    v2 = "R ";
    if ( bdAddrHandle::getRealAddr(addrHandle->m_ptr, &result)->m_type != BD_ADDR_RELAYED )
      v2 = (char *)&queryFormat.fmt + 3;
  }
  else
  {
    LocalAddrs = bdCommonAddr::getLocalAddrs(m_ptr->m_endpoint.m_ca.m_ptr);
    v6 = m_ptr->m_endpoint.m_ca.m_ptr;
    if ( LocalAddrs->m_size )
    {
      v2 = "L ";
      v7 = bdCommonAddr::getLocalAddrs(v6);
      bdHandleAssert(v7->m_size != 0, "rangeCheck(index)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfixedarray.inl", "bdFixedArray<class bdAddr,5>::operator []", 0x4Du, "bdFixedArray<T,MAX_SIZE>::operator[], rangeCheck() failed");
      PublicAddr = (bdAddr *)v7;
    }
    else
    {
      v2 = "P ";
      PublicAddr = (bdAddr *)bdCommonAddr::getPublicAddr(v6);
    }
    bdAddr::toString(PublicAddr, dest, 0x16ui64);
  }
  return j_va("%s%s", v2, dest);
}

/*
==============
dwAddrToString
==============
*/
char *dwAddrToString(const bdAddr *addr)
{
  char str[24]; 

  bdAddr::toString((bdAddr *)addr, str, 0x16ui64);
  return j_va((const char *)&queryFormat, str);
}

/*
==============
dwCloseConnection
==============
*/
void dwCloseConnection(bdReference<bdAddrHandle> *addrHandle)
{
  bdSocketRouter *SocketRouter; 

  if ( !addrHandle->m_ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwnet.cpp", 992, ASSERT_TYPE_ASSERT, "(addrHandle.notNull())", (const char *)&queryFormat, "addrHandle.notNull()") )
    __debugbreak();
  SocketRouter = dwGetSocketRouter();
  SocketRouter->disconnect(SocketRouter, addrHandle);
}

/*
==============
dwCommonAddrToString
==============
*/
char *dwCommonAddrToString(const bdReference<bdCommonAddr> *commonAddr)
{
  bdCommonAddr *m_ptr; 
  bdAddr *RelayAddr; 
  bdReference<bdCommonAddr> addr; 
  char str[40]; 
  char buf[1024]; 

  m_ptr = commonAddr->m_ptr;
  addr.m_ptr = m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  bdCommonAddrInfo::getInfo((const bdReference<bdCommonAddr>)&addr, buf, 0x400u);
  RelayAddr = (bdAddr *)bdRelayJoinData::getRelayAddr(&commonAddr->m_ptr->m_joinData);
  bdAddr::toString(RelayAddr, str, 0x20ui64);
  return j_va("%sRelay :\t%s", buf, str);
}

/*
==============
dwCreateSession
==============
*/
void dwCreateSession(XSECURITY_INFO *outSecurity)
{
  bdSocketRouter *SocketRouter; 
  bdSecurityKey *Key; 
  bdSecurityID *Id; 

  SocketRouter = dwGetSocketRouter();
  bdSocketRouter::getKeyMap(SocketRouter);
  Key = XSECURITY_INFO::GetKey(outSecurity);
  Id = XSECURITY_INFO::GetId(outSecurity);
  bdSecurityKeyMap::initKey(Id, Key);
}

/*
==============
dwGetGameSocket
==============
*/
unsigned __int64 dwGetGameSocket()
{
  return s_gameSocket;
}

/*
==============
dwGetNet
==============
*/
bdNetImpl *dwGetNet()
{
  bdNetImpl *v0; 
  bdSingletonRegistryImpl *Instance; 
  bdNetImpl *v2; 

  if ( !bdSingleton<bdNetImpl>::m_instance )
  {
    v0 = (bdNetImpl *)bdMemory::allocate(0x6020ui64);
    if ( v0 )
      bdNetImpl::bdNetImpl(v0);
    bdSingleton<bdNetImpl>::m_instance = v0;
    if ( v0 )
    {
      Instance = bdSingleton<bdSingletonRegistryImpl>::getInstance();
      if ( bdSingletonRegistryImpl::add(Instance, bdSingleton<bdNetImpl>::destroyInstance) )
        goto LABEL_10;
      if ( bdSingleton<bdNetImpl>::m_instance )
        ((void (__fastcall *)(bdNetImpl *, __int64))bdSingleton<bdNetImpl>::m_instance->~bdNetImpl)(bdSingleton<bdNetImpl>::m_instance, 1i64);
      bdSingleton<bdNetImpl>::m_instance = NULL;
    }
    DebugBreak();
  }
LABEL_10:
  v2 = bdSingleton<bdNetImpl>::m_instance;
  if ( !bdSingleton<bdNetImpl>::m_instance )
    Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_1441BBA08, 1082i64);
  return v2;
}

/*
==============
dwGetQoSProber
==============
*/
bdQoSProbe *dwGetQoSProber()
{
  bdSocketRouter *SocketRouter; 

  SocketRouter = dwGetSocketRouter();
  return bdSocketRouter::getQoSProber(SocketRouter);
}

/*
==============
dwGetRetailDebug
==============
*/
void dwGetRetailDebug(char *destString, const int maxLength)
{
  unsigned __int64 v3; 
  const char *StatusString; 
  const char *v5; 
  const char *ErrorString; 
  const char *v7; 
  const char *v8; 
  const char *v9; 

  v3 = maxLength;
  StatusString = dwNetGetStatusString(g_dwNetStatus);
  v5 = j_va("\nDWNet: %s", StatusString);
  I_strcat_truncate(destString, v3, v5);
  if ( g_dwNetError )
  {
    ErrorString = dwNetGetErrorString(g_dwNetError);
    v7 = j_va(", NetErr: %s", ErrorString);
    I_strcat_truncate(destString, v3, v7);
  }
  if ( g_dwRelayError )
  {
    v8 = dwNetGetErrorString(g_dwRelayError);
    v9 = j_va(", RelayErr: %s", v8);
    I_strcat_truncate(destString, v3, v9);
  }
}

/*
==============
dwGetSocketRouter
==============
*/
bdSocketRouter *dwGetSocketRouter()
{
  bdNetImpl *Net; 
  bdSocketRouter *SocketRouter; 

  Net = dwGetNet();
  SocketRouter = bdNetImpl::getSocketRouter(Net);
  if ( g_dwNetStatus < DW_NET_STARTING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwnet.cpp", 211, ASSERT_TYPE_ASSERT, "(g_dwNetStatus >= DW_NET_STARTING)", "%s\n\tSocket router should be accessed only after net start is called", "g_dwNetStatus >= DW_NET_STARTING") )
    __debugbreak();
  if ( !SocketRouter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwnet.cpp", 212, ASSERT_TYPE_ASSERT, "(socketRouter != 0)", "%s\n\tSocket router nulled after start!", "socketRouter != NULL") )
    __debugbreak();
  return SocketRouter;
}

/*
==============
dwMigrateConnection
==============
*/
bool dwMigrateConnection(const bdReference<bdAddrHandle> *addrHandle, const bdReference<bdCommonAddr> *commonAddr)
{
  bdSocketRouter *SocketRouter; 
  bdCommonAddr *m_ptr; 
  bdSocketRouter *v6; 
  bdAddrHandle *v7; 
  bdReference<bdCommonAddr> newCommonAddr; 
  bdReference<bdAddrHandle> addrHandlea; 

  if ( !addrHandle->m_ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwnet.cpp", 1001, ASSERT_TYPE_ASSERT, "(addrHandle.notNull())", (const char *)&queryFormat, "addrHandle.notNull()") )
    __debugbreak();
  if ( !commonAddr->m_ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwnet.cpp", 1002, ASSERT_TYPE_ASSERT, "(commonAddr.notNull())", (const char *)&queryFormat, "commonAddr.notNull()") )
    __debugbreak();
  SocketRouter = dwGetSocketRouter();
  m_ptr = commonAddr->m_ptr;
  v6 = SocketRouter;
  newCommonAddr.m_ptr = m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  v7 = addrHandle->m_ptr;
  addrHandlea.m_ptr = v7;
  if ( v7 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 1u);
  return bdSocketRouter::updateAddrHandle(v6, (bdReference<bdAddrHandle>)&addrHandlea, (bdReference<bdCommonAddr>)&newCommonAddr);
}

/*
==============
dwNetGetErrorString
==============
*/
const char *dwNetGetErrorString(const DWNetError error)
{
  const char *result; 

  switch ( error )
  {
    case DW_NET_ERROR_NONE:
      result = "DW_NET_ERROR_NONE";
      break;
    case DW_NET_ERROR_START_FAILED:
      result = "DW_NET_ERROR_START_FAILED";
      break;
    case DW_NET_ERROR_NO_LOCAL_IP:
      result = "DW_NET_ERROR_NO_LOCAL_IP";
      break;
    case DW_NET_ERROR_NO_MORE_RETRIES:
      result = "DW_NET_ERROR_NO_MORE_RETRIES";
      break;
    case DW_NET_ERROR_NO_RELAY_SERVER:
      result = "DW_NET_ERROR_NO_RELAY_SERVER";
      break;
    case DW_NET_ERROR_RELAY_DISCONNECTED:
      result = "DW_NET_ERROR_RELAY_DISCONNECTED";
      break;
    default:
      result = "UNKNOWN";
      break;
  }
  return result;
}

/*
==============
dwNetGetStatusString
==============
*/
const char *dwNetGetStatusString(const DWNetStatus status)
{
  const char *result; 

  switch ( status )
  {
    case DW_NET_NOT_STARTED:
      result = "DW_NET_NOT_STARTED";
      break;
    case DW_NET_STARTING:
      result = "DW_NET_STARTING";
      break;
    case DW_NET_STARTED:
      result = "DW_NET_STARTED";
      break;
    case DW_NET_RELAY_STARTING:
      result = "DW_NET_RELAY_STARTING";
      break;
    case DW_NET_RELAY_STARTED:
      result = "DW_NET_RELAY_STARTED";
      break;
    case DW_NET_ERROR:
      result = "DW_NET_ERROR";
      break;
    default:
      result = "UNKNOWN";
      break;
  }
  return result;
}

/*
==============
dwNetIsOffline
==============
*/
bool dwNetIsOffline()
{
  return g_dwNetMode == NET_MODE_OFFLINE;
}

/*
==============
dwNetIsOnline
==============
*/
bool dwNetIsOnline()
{
  return g_dwNetMode == NET_MODE_ONLINE;
}

/*
==============
dwNetIsStartFailed
==============
*/
bool dwNetIsStartFailed()
{
  return g_dwNetStatus == DW_NET_ERROR && g_dwNetError == DW_NET_ERROR_NO_MORE_RETRIES;
}

/*
==============
dwNetIsStarted
==============
*/
bool dwNetIsStarted()
{
  return (unsigned int)(g_dwNetStatus - 2) <= 2;
}

/*
==============
dwNetIsStarting
==============
*/
bool dwNetIsStarting()
{
  return g_dwNetStatus == DW_NET_STARTING;
}

/*
==============
dwNetPump
==============
*/
void dwNetPump(void)
{
  char *Value; 
  int *v1; 
  _QWORD *v2; 
  char *v3; 
  int *v4; 
  unsigned __int64 v5; 
  ThreadContext CurrentThreadContext; 
  NetMode v7; 
  bdSocketRouter *v8; 
  bdSocketRouter *v9; 
  bdRelayAssociationStatus v10; 
  int integer; 
  bdSocketRouter *v12; 
  bdRelayAssociationStatus v13; 
  bdSocketRouter *SocketRouter; 
  bdNetImpl *Net; 
  bdNetImpl::bdNetStatus Status; 
  __int32 v17; 
  __int64 v18; 
  int v19; 
  __int64 v20; 
  int v21; 
  NetMode mode; 

  Value = (char *)Sys_GetValue(0);
  v1 = (int *)(Value + 17696);
  if ( (unsigned int)(*((_DWORD *)Value + 4424) + 1) >= 3 )
  {
    v21 = 3;
    v19 = *((_DWORD *)Value + 4424) + 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v19, v21) )
      __debugbreak();
  }
  if ( (unsigned int)++*v1 >= 3 )
  {
    LODWORD(v20) = 3;
    LODWORD(v18) = *v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v18, v20) )
      __debugbreak();
  }
  v2 = Value + 2088;
  v3 = Value + 40;
  if ( *v2 < (unsigned __int64)v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  *v2 += 8i64;
  if ( *v2 >= (unsigned __int64)v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
    __debugbreak();
  *(_QWORD *)*v2 = v1;
  if ( *v2 <= (unsigned __int64)v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
    __debugbreak();
  v4 = &v1[*v1 + 2];
  v5 = __rdtsc();
  *v4 = v5;
  if ( Sys_HasValidCurrentThreadContext() )
    CurrentThreadContext = Sys_GetCurrentThreadContext();
  else
    CurrentThreadContext = THREAD_CONTEXT_COUNT;
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 390, NULL, 0);
  switch ( g_dwNetStatus )
  {
    case DW_NET_STARTING:
      Net = dwGetNet();
      bdNetImpl::pump(Net);
      Status = bdNetImpl::getStatus(Net);
      if ( Status )
      {
        v17 = Status - 1;
        if ( v17 )
        {
          if ( v17 != 1 )
          {
            dwNetSetError(DW_NET_ERROR_START_FAILED);
            v7 = g_dwNetMode;
            goto LABEL_46;
          }
          dwNetSetStatus(DW_NET_STARTED);
          if ( g_dwNetStartCallback )
          {
            mode = NET_MODE_NONE;
            g_dwNetStartCallback(1, g_dwNetMode, &mode);
            v7 = mode;
            if ( mode )
              goto LABEL_46;
          }
        }
      }
      break;
    case DW_NET_STARTED:
      SocketRouter = dwGetSocketRouter();
      SocketRouter->pump(SocketRouter);
      break;
    case DW_NET_RELAY_STARTING:
      v12 = dwGetSocketRouter();
      v12->pump(v12);
      v13 = v12->getRelayStatus(v12);
      if ( v13 )
      {
        if ( v13 == BD_RELAY_STATUS_CONNECTED )
        {
          dwNetSetStatus(DW_NET_RELAY_STARTED);
          if ( g_dwRelayListener )
            g_dwRelayListener->RelayConnected(g_dwRelayListener);
        }
      }
      else
      {
        dwRelayDisconnected(DW_NET_ERROR_START_FAILED);
      }
      break;
    case DW_NET_RELAY_STARTED:
      v8 = dwGetSocketRouter();
      v9 = dwGetSocketRouter();
      v9->pump(v9);
      v10 = v8->getRelayStatus(v8);
      if ( v10 )
      {
        if ( (unsigned int)(v10 - 1) <= 1 )
        {
          integer = net_relay_simulate_disconnect->current.integer;
          if ( integer >= 0 )
          {
            if ( dword_1500D4B24 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
            {
              j__Init_thread_header(&dword_1500D4B24);
              if ( dword_1500D4B24 == -1 )
              {
                dword_1500D4B20 = Sys_Milliseconds();
                j__Init_thread_footer(&dword_1500D4B24);
              }
            }
            if ( !byte_1500D4B28 && Sys_Milliseconds() - dword_1500D4B20 > integer )
            {
              dwRelayDisconnected(DW_NET_ERROR_RELAY_DISCONNECTED);
              byte_1500D4B28 = 1;
            }
          }
        }
      }
      else
      {
        dwRelayDisconnected(DW_NET_ERROR_RELAY_DISCONNECTED);
      }
      break;
    default:
      if ( g_dwNetStatus == DW_NET_ERROR && g_dwNetError != DW_NET_ERROR_NO_MORE_RETRIES )
      {
        v7 = g_dwNetMode;
LABEL_46:
        dwNetRestart(v7);
      }
      break;
  }
  Profile_EndInternal(NULL);
}

/*
==============
dwNetRestart
==============
*/
void dwNetRestart(const NetMode mode)
{
  int v2; 
  bdNetImpl *Net; 
  NetMode modea; 

  if ( g_dwNetStatus == DW_NET_ERROR )
  {
    if ( mode == g_dwNetMode )
      goto LABEL_7;
    goto LABEL_6;
  }
  if ( mode != g_dwNetMode )
  {
LABEL_6:
    g_dwNetStartCount = 0;
    goto LABEL_7;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwnet.cpp", 486, ASSERT_TYPE_ASSERT, "(g_dwNetStatus == DW_NET_ERROR || modeSwitch)", (const char *)&queryFormat, "g_dwNetStatus == DW_NET_ERROR || modeSwitch") )
    __debugbreak();
LABEL_7:
  v2 = 3;
  if ( Live_IsDevmapping() )
    v2 = 1;
  if ( g_dwNetStartCount >= v2 * Sys_GetNumLocalIP() )
  {
    dwNetSetError(DW_NET_ERROR_NO_MORE_RETRIES);
    if ( g_dwNetStartCallback )
    {
      modea = NET_MODE_NONE;
      g_dwNetStartCallback(0, g_dwNetMode, &modea);
      if ( modea )
        dwNetRestart(modea);
    }
  }
  else
  {
    ++s_AddressIterator;
    Net = dwGetNet();
    bdNetImpl::stop(Net);
    dwNetSetStatus(DW_NET_NOT_STARTED);
    dwNetStart(mode, g_dwNetRouterListener, g_dwNetRelayOverride, g_dwNetStartCallback);
  }
}

/*
==============
dwNetSetError
==============
*/
void dwNetSetError(DWNetError error)
{
  const char *v2; 
  const char *StatusString; 
  const char *v4; 
  const char *ErrorString; 

  v2 = "offline";
  if ( g_dwNetStatus != DW_NET_ERROR )
  {
    StatusString = dwNetGetStatusString(g_dwNetStatus);
    Com_Printf(131097, "[NET] Net status changed %s -> %s (%s mode)\n", StatusString, "DW_NET_ERROR", v4);
    g_dwNetStatus = DW_NET_ERROR;
  }
  if ( g_dwNetMode == NET_MODE_ONLINE )
    v2 = "online";
  ErrorString = dwNetGetErrorString(error);
  Com_Printf(131097, "[NET] Net error %s (%s mode)\n", ErrorString, v2);
  g_dwNetError = error;
}

/*
==============
dwNetSetStatus
==============
*/
void dwNetSetStatus(const DWNetStatus status)
{
  DWNetStatus v2; 
  const char *StatusString; 
  const char *v4; 
  const char *v5; 

  if ( g_dwNetStatus != status )
  {
    dwNetGetStatusString(status);
    StatusString = dwNetGetStatusString(v2);
    Com_Printf(131097, "[NET] Net status changed %s -> %s (%s mode)\n", StatusString, v4, v5);
    g_dwNetStatus = status;
  }
}

/*
==============
dwNetStart
==============
*/
void dwNetStart(const NetMode mode, bdSocketRouterListener *routerListener, bdSocketRouterRelayManager *relayOverride, bool (*callback)(bool, NetMode, NetMode *))
{
  bdNetImpl *Net; 
  int NumLocalIP; 
  int m_string; 
  int v11; 
  unsigned int *LocalIP; 
  const bdSockAddr *v13; 
  const bdSockAddr *v14; 
  unsigned int m_size; 
  unsigned int m_capacity; 
  bdSockAddr *v17; 
  unsigned int v18; 
  bdSockAddr *m_data; 
  bdSockAddr *v20; 
  __int64 v21; 
  unsigned __int64 v22; 
  bool v23; 
  bdSockAddr *v24; 
  bdString *v25; 
  __int64 v26; 
  HMODULE LibraryW; 
  FARPROC ProcAddress; 
  const char *v29; 
  const char *StatusString; 
  const bdNetStartParams *v31; 
  const bdNetStartParams *v32; 
  const bdNetStartParams *v33; 
  DWServicesAccess *Instance; 
  const char *v35; 
  const char *v36; 
  const char *v37; 
  bdString *v38; 
  __int64 v39; 
  bdString value; 
  bdNetImpl *v41; 
  bdSockAddr *v42; 
  __int64 v43; 
  bdSockAddr *v44; 
  bdSockAddr *v45; 
  bdNetStartParams params; 
  bdSockAddr v47; 

  v43 = -2i64;
  if ( g_dwNetStatus && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwnet.cpp", 233, ASSERT_TYPE_ASSERT, "(g_dwNetStatus == DW_NET_NOT_STARTED)", (const char *)&queryFormat, "g_dwNetStatus == DW_NET_NOT_STARTED") )
    __debugbreak();
  Net = dwGetNet();
  v41 = Net;
  g_dwNetMode = mode;
  g_dwNetStartCallback = callback;
  ++g_dwNetStartCount;
  g_dwNetRelayOverride = relayOverride;
  g_dwNetRouterListener = routerListener;
  s_gameSocket = -1i64;
  Com_Printf(25, "[NET] Starting networking, attempt %d\n", (unsigned int)g_dwNetStartCount);
  bdNetStartParams::bdNetStartParams(&params);
  params.m_threadStackSize = 0x8000;
  params.m_socketRouterConfig.m_listener = routerListener;
  params.m_socketRouterConfig.m_relayManager = relayOverride;
  NumLocalIP = Sys_GetNumLocalIP();
  m_string = 5;
  if ( NumLocalIP < 5 )
    m_string = NumLocalIP;
  LODWORD(value.m_string) = m_string;
  v11 = 0;
  if ( m_string > 0 )
  {
    do
    {
      LocalIP = (unsigned int *)Sys_GetLocalIP(v11);
      bdSockAddr::bdSockAddr(&v47, *LocalIP);
      v14 = v13;
      m_size = params.m_localAddresses.m_size;
      if ( params.m_localAddresses.m_size == params.m_localAddresses.m_capacity )
      {
        m_capacity = params.m_localAddresses.m_capacity;
        if ( !params.m_localAddresses.m_capacity )
          m_capacity = 1;
        v17 = NULL;
        v18 = params.m_localAddresses.m_capacity + m_capacity;
        if ( v18 )
        {
          v17 = (bdSockAddr *)bdMemory::allocate((unsigned __int64)v18 << 7);
          if ( params.m_localAddresses.m_size )
          {
            m_data = params.m_localAddresses.m_data;
            v20 = v17;
            v21 = params.m_localAddresses.m_size;
            do
            {
              v44 = v20;
              v42 = v20;
              if ( v20 )
                bdSockAddr::bdSockAddr(v20, m_data);
              ++v20;
              ++m_data;
              --v21;
            }
            while ( v21 );
            m_string = (int)value.m_string;
          }
        }
        bdMemory::deallocate(params.m_localAddresses.m_data);
        params.m_localAddresses.m_data = v17;
        params.m_localAddresses.m_capacity = v18;
        m_size = params.m_localAddresses.m_size;
      }
      else
      {
        v17 = params.m_localAddresses.m_data;
      }
      v22 = (unsigned __int64)m_size << 7;
      v23 = (bdSockAddr *)((char *)v17 + v22) == NULL;
      v24 = (bdSockAddr *)((char *)v17 + v22);
      v45 = v24;
      v42 = v24;
      if ( !v23 )
      {
        bdSockAddr::bdSockAddr(v24, v14);
        m_size = params.m_localAddresses.m_size;
      }
      params.m_localAddresses.m_size = m_size + 1;
      ++v11;
    }
    while ( v11 < m_string );
    Net = v41;
  }
  if ( params.m_natTravHosts.m_size )
  {
    v25 = params.m_natTravHosts.m_data;
    v26 = params.m_natTravHosts.m_size;
    do
    {
      bdString::~bdString(v25++);
      --v26;
    }
    while ( v26 );
  }
  bdMemory::deallocate(params.m_natTravHosts.m_data);
  params.m_natTravHosts.m_data = NULL;
  *(_QWORD *)&params.m_natTravHosts.m_capacity = 0i64;
  bdString::bdString(&value, "genesis.stun.us.demonware.net");
  bdArray<bdString>::pushBack(&params.m_natTravHosts, &value);
  bdString::~bdString(&value);
  bdString::bdString(&value, "genesis.stun.eu.demonware.net");
  bdArray<bdString>::pushBack(&params.m_natTravHosts, &value);
  bdString::~bdString(&value);
  params.m_onlineGame = g_dwNetMode == NET_MODE_ONLINE;
  params.m_UPnPConfig.m_disabled = !net_upnp_enabled->current.enabled;
  LibraryW = LoadLibraryW(L"GetGatewayAddress.dll");
  if ( LibraryW )
  {
    ProcAddress = GetProcAddress(LibraryW, "GetIpv4GatewayAddress");
    if ( ProcAddress )
    {
      if ( !((unsigned int (__fastcall *)(bdString *))ProcAddress)(&value) )
        bdSockAddr::set(&params.m_UPnPConfig.m_gatewayAddr, (unsigned __int8)value.m_string, BYTE1(value.m_string), BYTE2(value.m_string), BYTE3(value.m_string));
    }
    else
    {
      Com_PrintWarning(25, "GetGatewayAddress.dll missing function GetIpv4GatewayAddress\n");
    }
  }
  else
  {
    Com_PrintWarning(25, "Missing GetGatewayAddress.dll needed for uPnP to operate correctly\n");
  }
  if ( bdNetImpl::start(Net, &params) )
  {
    if ( g_dwNetStatus != DW_NET_STARTING )
    {
      v29 = "offline";
      if ( g_dwNetMode == NET_MODE_ONLINE )
        v29 = "online";
      StatusString = dwNetGetStatusString(g_dwNetStatus);
      Com_Printf(131097, "[NET] Net status changed %s -> %s (%s mode)\n", StatusString, "DW_NET_STARTING", v29);
      g_dwNetStatus = DW_NET_STARTING;
    }
    v31 = bdNetImpl::getParams(Net);
    s_gameSocket = bdSocket::getHandle(v31->m_socket);
    v32 = bdNetImpl::getParams(Net);
    v32->m_socket->setSendBufferSize(v32->m_socket, 0x40000);
    v33 = bdNetImpl::getParams(Net);
    v33->m_socket->setRecvBufferSize(v33->m_socket, 0x10000);
    Instance = DWServicesAccess::GetInstance();
    DWServicesAccess::initSocketRouter(Instance);
    if ( g_dwNetMode != NET_MODE_ONLINE && bdNetImpl::getStatus(Net) != BD_NET_DONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwnet.cpp", 425, ASSERT_TYPE_ASSERT, "(dwNetIsOnline() || net->getStatus() == bdNetImpl::BD_NET_DONE)", "%s\n\tOffline mode bdNet start is assumed to be synchronous", "dwNetIsOnline() || net->getStatus() == bdNetImpl::BD_NET_DONE") )
      __debugbreak();
    dwNetPump();
  }
  else
  {
    v35 = "offline";
    if ( g_dwNetStatus != DW_NET_ERROR )
    {
      v36 = dwNetGetStatusString(g_dwNetStatus);
      Com_Printf(131097, "[NET] Net status changed %s -> %s (%s mode)\n", v36, "DW_NET_ERROR", v37);
      g_dwNetStatus = DW_NET_ERROR;
    }
    if ( g_dwNetMode == NET_MODE_ONLINE )
      v35 = "online";
    Com_Printf(131097, "[NET] Net error %s (%s mode)\n", "DW_NET_ERROR_START_FAILED", v35);
    g_dwNetError = DW_NET_ERROR_START_FAILED;
  }
  bdMemory::deallocate(params.m_localAddresses.m_data);
  params.m_localAddresses.m_data = NULL;
  *(_QWORD *)&params.m_localAddresses.m_capacity = 0i64;
  if ( params.m_natTravHosts.m_size )
  {
    v38 = params.m_natTravHosts.m_data;
    v39 = params.m_natTravHosts.m_size;
    do
    {
      bdString::~bdString(v38++);
      --v39;
    }
    while ( v39 );
  }
  bdMemory::deallocate(params.m_natTravHosts.m_data);
}

/*
==============
dwNetStop
==============
*/
void dwNetStop(void)
{
  bdNetImpl *Net; 
  bdSocketRouter *SocketRouter; 
  bdAddressMap *AddressMap; 

  if ( g_dwNetStatus )
  {
    Com_Printf(25, "[NET] Stopping networking\n");
    Net = dwGetNet();
    SocketRouter = bdNetImpl::getSocketRouter(Net);
    AddressMap = bdSocketRouter::getAddressMap(SocketRouter);
    bdAddressMap::clear(AddressMap);
    bdNetImpl::stop(Net);
    dwNetSetStatus(DW_NET_NOT_STARTED);
    g_dwNetMode = NET_MODE_NONE;
    g_dwNetStartCount = 0;
    g_dwNetStartCallback = NULL;
    s_gameSocket = -1i64;
  }
}

/*
==============
dwOpenConnection
==============
*/
char dwOpenConnection(const bdSecurityID *secId, bdReference<bdAddrHandle> *addrHandle, const unsigned int openFlags)
{
  char v3; 
  bdSocketRouter *SocketRouter; 
  bdAddrHandle *m_ptr; 
  bdSocketRouter_vtbl *v7; 
  bdDTLSAssociationStatus (__fastcall *getStatus)(bdSocketRouter *, const bdReference<bdAddrHandle>); 
  bdAddrHandle *v10; 

  v3 = openFlags;
  SocketRouter = dwGetSocketRouter();
  if ( !addrHandle->m_ptr->m_endpoint.m_ca.m_ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwnet.cpp", 932, ASSERT_TYPE_ASSERT, "(addrHandle->m_endpoint.getCommonAddrRef().notNull())", (const char *)&queryFormat, "addrHandle->m_endpoint.getCommonAddrRef().notNull()") )
    __debugbreak();
  if ( addrHandle->m_ptr->m_endpoint.m_ca.m_ptr->m_isLoopback || (v3 & 2) != 0 )
  {
    addrHandle->m_ptr->m_status = BD_ADDR_CONNECTED;
  }
  else
  {
    if ( (unsigned int)(g_dwNetStatus - 2) > 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwnet.cpp", 940, ASSERT_TYPE_ASSERT, "(dwNetIsStarted())", (const char *)&queryFormat, "dwNetIsStarted()") )
      __debugbreak();
    m_ptr = addrHandle->m_ptr;
    v7 = SocketRouter->bdNATTravListener::__vftable;
    v10 = m_ptr;
    getStatus = v7->getStatus;
    if ( m_ptr )
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    if ( ((unsigned int (__fastcall *)(bdSocketRouter *, bdAddrHandle **))getStatus)(SocketRouter, &v10) == 3 )
      return SocketRouter->connect(SocketRouter, addrHandle);
  }
  return 1;
}

/*
==============
dwPrepareSendTo
==============
*/
__int64 dwPrepareSendTo(const unsigned int length, const void *data, NetPacket *packet)
{
  size_t v5; 
  bdSocketRouter *SocketRouter; 
  bdAddrHandle *m_ptr; 
  int size; 
  bdSocketRouter_vtbl *v11; 
  int (__fastcall *prepareSendToData)(bdSocketRouter *, const bdReference<bdAddrHandle>, const void *, const unsigned int, void *, const unsigned int, bdSocketRouterData *); 
  unsigned int v13; 
  bdAddrHandle *v15; 
  __int128 v16; 
  __int64 v17; 
  int v18; 
  __int16 v19; 
  char v20[1278]; 

  v5 = length;
  Sys_ProfBeginNamedEvent(0xFF4169E1, "dwPrepareSendTo");
  if ( (unsigned int)(g_dwNetStatus - 2) > 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwnet.cpp", 797, ASSERT_TYPE_ASSERT, "(dwNetIsStarted())", (const char *)&queryFormat, "dwNetIsStarted()") )
    __debugbreak();
  if ( (unsigned int)v5 > 1270 - bdRelayData::getWrapperSize() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwnet.cpp", 798, ASSERT_TYPE_ASSERT, "(length <= ( ((1288) - (18)) ) - bdRelayData::getWrapperSize())", (const char *)&queryFormat, "length <= BD_MAX_PAYLOAD_SIZE - bdRelayData::getWrapperSize()") )
    __debugbreak();
  v19 = v5;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  v17 = 0i64;
  v18 = 0;
  v16 = _XMM0;
  memcpy_0(v20, data, v5);
  SocketRouter = dwGetSocketRouter();
  m_ptr = packet->addr.m_ptr;
  size = packet->size;
  v11 = SocketRouter->bdNATTravListener::__vftable;
  v15 = m_ptr;
  prepareSendToData = v11->prepareSendToData;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  v13 = ((__int64 (__fastcall *)(bdSocketRouter *, bdAddrHandle **, __int16 *, _QWORD, NetPacket *, int, __int128 *))prepareSendToData)(SocketRouter, &v15, &v19, (unsigned int)(v5 + 2), &packet[1], size, &v16);
  Sys_ProfEndNamedEvent();
  return v13;
}

/*
==============
dwRecvFrom
==============
*/
__int64 dwRecvFrom(bdReference<bdAddrHandle> *outFrom, void *const data, const unsigned int size)
{
  int v6; 
  bdSocketRouter *SocketRouter; 

  Sys_ProfBeginNamedEvent(0xFF556B2F, "dwRecvFrom");
  if ( (unsigned int)(g_dwNetStatus - 2) > 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwnet.cpp", 887, ASSERT_TYPE_ASSERT, "(dwNetIsStarted())", (const char *)&queryFormat, "dwNetIsStarted()") )
    __debugbreak();
  v6 = -9;
  SocketRouter = dwGetSocketRouter();
  if ( SocketRouter->getStatus(SocketRouter) == BD_SOCKET_ROUTER_INITIALIZED )
  {
    v6 = SocketRouter->receiveFrom(SocketRouter, outFrom, data, size);
    if ( v6 > 0 )
    {
      if ( outFrom->m_ptr )
      {
        v6 -= 2;
        memmove_0(data, (char *)data + 2, v6);
      }
    }
  }
  Sys_ProfEndNamedEvent();
  return (unsigned int)v6;
}

/*
==============
dwRegisterAddress
==============
*/
_BOOL8 dwRegisterAddress(const bdSecurityID *secId, const bdReference<bdCommonAddr> *commonAddr, bdReference<bdAddrHandle> *outAddrHandle)
{
  bdSocketRouter *SocketRouter; 
  bdAddressMap *AddressMap; 
  bdCommonAddr *m_ptr; 
  bool AddrHandle; 
  bdCommonAddr *v10; 
  bdAddr *RelayAddr; 
  const char *v12; 
  bdReference<bdCommonAddr> addr; 
  bdReference<bdCommonAddr> ca; 
  char str[32]; 
  char buf[1024]; 

  SocketRouter = dwGetSocketRouter();
  AddressMap = bdSocketRouter::getAddressMap(SocketRouter);
  m_ptr = commonAddr->m_ptr;
  ca.m_ptr = m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  AddrHandle = bdAddressMap::getAddrHandle(AddressMap, (const bdReference<bdCommonAddr>)&ca, secId, outAddrHandle);
  if ( !outAddrHandle->m_ptr )
  {
    v10 = commonAddr->m_ptr;
    addr.m_ptr = v10;
    if ( v10 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v10->m_refCount, 1u);
    bdCommonAddrInfo::getInfo((const bdReference<bdCommonAddr>)&addr, buf, 0x400u);
    RelayAddr = (bdAddr *)bdRelayJoinData::getRelayAddr(&commonAddr->m_ptr->m_joinData);
    bdAddr::toString(RelayAddr, str, 0x20ui64);
    v12 = j_va("%sRelay :\t%s", buf, str);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwnet.cpp", 921, ASSERT_TYPE_ASSERT, "(!outAddrHandle.isNull())", "%s\n\tFailed to bind address %s", "!outAddrHandle.isNull()", v12) )
      __debugbreak();
  }
  return AddrHandle;
}

/*
==============
dwRegisterSession
==============
*/
void dwRegisterSession(const XSECURITY_INFO *security)
{
  bdSocketRouter *SocketRouter; 
  bdSecurityKeyMap *KeyMap; 
  const bdSecurityKey *Key; 
  const bdSecurityID *Id; 

  SocketRouter = dwGetSocketRouter();
  KeyMap = bdSocketRouter::getKeyMap(SocketRouter);
  Key = XSECURITY_INFO::GetKey((XSECURITY_INFO *)security);
  Id = XSECURITY_INFO::GetId((XSECURITY_INFO *)security);
  bdSecurityKeyMap::registerKey(KeyMap, Id, Key);
}

/*
==============
dwRelayDisconnectExcess
==============
*/
void dwRelayDisconnectExcess(void)
{
  bdSocketRouter *SocketRouter; 

  SocketRouter = dwGetSocketRouter();
  bdSocketRouter::disconnectExcessRelays(SocketRouter);
}

/*
==============
dwRelayDisconnected
==============
*/
void dwRelayDisconnected(DWNetError error)
{
  const char *StatusString; 
  const char *v3; 
  const char *ErrorString; 

  if ( g_dwNetStatus != DW_NET_STARTED )
  {
    StatusString = dwNetGetStatusString(g_dwNetStatus);
    Com_Printf(131097, "[NET] Net status changed %s -> %s (%s mode)\n", StatusString, "DW_NET_STARTED", v3);
    g_dwNetStatus = DW_NET_STARTED;
  }
  if ( g_dwRelayError != error )
  {
    if ( error )
    {
      ErrorString = dwNetGetErrorString(error);
      Com_Printf(25, "[NET] Relay error %s\n", ErrorString);
    }
    g_dwRelayError = error;
  }
  if ( g_dwRelayListener )
    g_dwRelayListener->RelayDisconnected(g_dwRelayListener, error);
}

/*
==============
dwRelayIsFailed
==============
*/
bool dwRelayIsFailed()
{
  return g_dwRelayError != DW_NET_ERROR_NONE;
}

/*
==============
dwRelayIsStarted
==============
*/
bool dwRelayIsStarted()
{
  return g_dwNetStatus == DW_NET_RELAY_STARTED;
}

/*
==============
dwRelayIsStarting
==============
*/
bool dwRelayIsStarting()
{
  return g_dwNetStatus == DW_NET_RELAY_STARTING;
}

/*
==============
dwRelaySetError
==============
*/
void dwRelaySetError(DWNetError error)
{
  const char *ErrorString; 

  if ( g_dwRelayError != error )
  {
    if ( error )
    {
      ErrorString = dwNetGetErrorString(error);
      Com_Printf(25, "[NET] Relay error %s\n", ErrorString);
    }
    g_dwRelayError = error;
  }
}

/*
==============
dwRelayStart
==============
*/
bool dwRelayStart(const bdRelayAuthToken *relayAuthToken, dwNetRelayListener *listener)
{
  const char *StatusString; 
  const char *v4; 
  bdSocketRouter *SocketRouter; 

  g_dwRelayListener = listener;
  g_dwRelayError = DW_NET_ERROR_NONE;
  if ( g_dwNetStatus != DW_NET_RELAY_STARTING )
  {
    StatusString = dwNetGetStatusString(g_dwNetStatus);
    Com_Printf(131097, "[NET] Net status changed %s -> %s (%s mode)\n", StatusString, "DW_NET_RELAY_STARTING", v4);
    g_dwNetStatus = DW_NET_RELAY_STARTING;
  }
  SocketRouter = dwGetSocketRouter();
  return bdSocketRouter::bindToRelay(SocketRouter, relayAuthToken);
}

/*
==============
dwRelayStop
==============
*/
bool dwRelayStop()
{
  return 0;
}

/*
==============
dwSecurityIdToString
==============
*/
char *dwSecurityIdToString(const bdSecurityID *securityId)
{
  char buffer[24]; 

  bdSecurityInfo::toString(securityId, buffer, 0x12u);
  return j_va((const char *)&queryFormat, buffer);
}

/*
==============
dwSendTo
==============
*/
__int64 dwSendTo(NetPacket **packets, const int packetCount)
{
  __int64 v2; 
  const char *v4; 
  __int64 v5; 
  int v6; 
  unsigned int v7; 
  bdSocketRouter *SocketRouter; 
  bdSocketRouterData *v9; 
  __int64 v10; 
  bdSocketRouterData *v11; 
  NetPacket *v12; 
  int length; 
  bdSocketRouterData *v14; 
  int v15; 
  bdSocketRouter_vtbl *v16; 
  int v17; 
  int v18; 
  unsigned int m_dataLen; 
  const void *m_data; 
  const char *v21; 
  char *v22; 
  __int64 v24; 
  unsigned int v25[4]; 
  bdSocketRouterData v26[128]; 
  char str[24]; 

  v2 = packetCount;
  v4 = j_va("dwSendTo (%u)", (unsigned int)packetCount);
  Sys_ProfBeginNamedEvent(0xFF4169E1, v4);
  if ( (unsigned int)(g_dwNetStatus - 2) > 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwnet.cpp", 834, ASSERT_TYPE_ASSERT, "(dwNetIsStarted())", (const char *)&queryFormat, "dwNetIsStarted()") )
    __debugbreak();
  v5 = 128i64;
  if ( (unsigned int)v2 > 0x80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwnet.cpp", 835, ASSERT_TYPE_ASSERT, "(packetCount <= BD_SOCKET_SENDMMSG_MAX)", (const char *)&queryFormat, "packetCount <= BD_SOCKET_SENDMMSG_MAX") )
    __debugbreak();
  v6 = 0;
  v7 = 0;
  SocketRouter = dwGetSocketRouter();
  v9 = v26;
  do
  {
    bdSocketRouterData::`default constructor closure'(v9++);
    --v5;
  }
  while ( v5 );
  if ( (int)v2 > 0 )
  {
    v10 = 0i64;
    v11 = v26;
    do
    {
      v12 = packets[v10];
      length = v12->length;
      if ( length > 0 )
      {
        v14 = v11++;
        ++v6;
        v14->m_msgHdr.m_addr = &v12->addr.m_ptr->m_realAddr;
        v14->m_msgHdr.m_data = &v12[1];
        v14->m_msgHdr.m_dataLen = length;
      }
      ++v10;
    }
    while ( v10 < v2 );
  }
  v15 = 0;
  while ( v15 < v6 )
  {
    v16 = SocketRouter->bdNATTravListener::__vftable;
    v25[0] = 0;
    v17 = v16->sendPreparedData(SocketRouter, &v26[v15], v6 - v15, v25);
    v7 += v25[0];
    v18 = v17;
    v15 += v25[0];
    if ( v17 < 0 )
    {
      m_dataLen = v26[v15].m_msgHdr.m_dataLen;
      m_data = v26[v15].m_msgHdr.m_data;
      bdAddr::toString((bdAddr *)v26[v15].m_msgHdr.m_addr, str, 0x16ui64);
      v21 = j_va((const char *)&queryFormat, str);
      v22 = PacketSummaryString(m_data, m_dataLen);
      LODWORD(v24) = v18;
      Com_PrintError(131097, "DROPPING %i byte packet (\"%s\") to %s error is %i\n", m_dataLen, v22, v21, v24);
      ++v15;
    }
  }
  Sys_ProfEndNamedEvent();
  return v7;
}

/*
==============
dwUnregisterAddr
==============
*/
void dwUnregisterAddr(const bdReference<bdAddrHandle> *addr)
{
  bdSocketRouter *SocketRouter; 
  bdAddressMap *AddressMap; 

  SocketRouter = dwGetSocketRouter();
  AddressMap = bdSocketRouter::getAddressMap(SocketRouter);
  bdAddressMap::unregisterAddr(AddressMap, addr);
}

/*
==============
dwUnregisterSession
==============
*/
void dwUnregisterSession(const bdSecurityID *id)
{
  bdSocketRouter *SocketRouter; 
  bdSecurityKeyMap *KeyMap; 

  SocketRouter = dwGetSocketRouter();
  KeyMap = bdSocketRouter::getKeyMap(SocketRouter);
  bdSecurityKeyMap::unregisterKey(KeyMap, id);
}

