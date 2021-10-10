/*
==============
NetInit::OnlineTransition
==============
*/

void __fastcall NetInit::OnlineTransition(NetInit *this)
{
  ?OnlineTransition@NetInit@@QEAAXXZ(this);
}

/*
==============
NetInit::GetRelay
==============
*/

NetRelay *__fastcall NetInit::GetRelay(NetInit *this)
{
  return ?GetRelay@NetInit@@QEAAAEAVNetRelay@@XZ(this);
}

/*
==============
NetInit::InitLocalAddr
==============
*/

void __fastcall NetInit::InitLocalAddr(NetInit *this)
{
  ?InitLocalAddr@NetInit@@AEAAXXZ(this);
}

/*
==============
NetInit::DemonwareStop
==============
*/

void __fastcall NetInit::DemonwareStop(NetInit *this)
{
  ?DemonwareStop@NetInit@@AEAAXXZ(this);
}

/*
==============
NetInit::Reset
==============
*/

void __fastcall NetInit::Reset(NetInit *this, NetConfig *config, NetThread *thread, NetLoopback *loopback)
{
  ?Reset@NetInit@@QEAAXPEAUNetConfig@@PEAVNetThread@@PEAVNetLoopback@@@Z(this, config, thread, loopback);
}

/*
==============
NetInit::Start
==============
*/

void __fastcall NetInit::Start(NetInit *this, NetEventListener *listener, bdSocketRouterListener *routerListener)
{
  ?Start@NetInit@@QEAAXPEAVNetEventListener@@PEAVbdSocketRouterListener@@@Z(this, listener, routerListener);
}

/*
==============
NetInit::NetInit
==============
*/

void __fastcall NetInit::NetInit(NetInit *this)
{
  ??0NetInit@@QEAA@XZ(this);
}

/*
==============
NetInit::IsLocalAddressUpdating
==============
*/

bool __fastcall NetInit::IsLocalAddressUpdating(NetInit *this)
{
  return ?IsLocalAddressUpdating@NetInit@@QEBA_NXZ(this);
}

/*
==============
NetInit::OfflineTransition
==============
*/

void __fastcall NetInit::OfflineTransition(NetInit *this)
{
  ?OfflineTransition@NetInit@@QEAAXXZ(this);
}

/*
==============
NetInit::SimulatePortRemapping
==============
*/

void __fastcall NetInit::SimulatePortRemapping(NetInit *this, bdReference<bdCommonAddr> *localAddr)
{
  ?SimulatePortRemapping@NetInit@@AEAAXAEAV?$bdReference@VbdCommonAddr@@@@@Z(this, localAddr);
}

/*
==============
NetInit::DemonwareCallback
==============
*/

bool __fastcall NetInit::DemonwareCallback(bool success, NetMode mode, NetMode *nextMode)
{
  return ?DemonwareCallback@NetInit@@CA_N_NW4NetMode@@AEAW42@@Z(success, mode, nextMode);
}

/*
==============
NetInit::Stop
==============
*/

void __fastcall NetInit::Stop(NetInit *this)
{
  ?Stop@NetInit@@QEAAXXZ(this);
}

/*
==============
NetInit::GetLocalAddr
==============
*/

const bdReference<bdCommonAddr> *__fastcall NetInit::GetLocalAddr(NetInit *this)
{
  return ?GetLocalAddr@NetInit@@QEBAAEBV?$bdReference@VbdCommonAddr@@@@XZ(this);
}

/*
==============
NetInit::DemonwareStart
==============
*/

void __fastcall NetInit::DemonwareStart(NetInit *this, NetMode mode)
{
  ?DemonwareStart@NetInit@@AEAAXW4NetMode@@@Z(this, mode);
}

/*
==============
NetInit::InitMode
==============
*/

void __fastcall NetInit::InitMode(NetInit *this, NetMode mode)
{
  ?InitMode@NetInit@@AEAAXW4NetMode@@@Z(this, mode);
}

/*
==============
NetInit::ProcessOffline
==============
*/

void __fastcall NetInit::ProcessOffline(NetInit *this)
{
  ?ProcessOffline@NetInit@@AEAAXXZ(this);
}

/*
==============
NetInit::IsLocalAddressResolved
==============
*/

bool __fastcall NetInit::IsLocalAddressResolved(NetInit *this)
{
  return ?IsLocalAddressResolved@NetInit@@QEBA_NXZ(this);
}

/*
==============
NetInit::CanStop
==============
*/

bool __fastcall NetInit::CanStop(NetInit *this)
{
  return ?CanStop@NetInit@@QEBA_NXZ(this);
}

/*
==============
NetInit::Frame
==============
*/

void __fastcall NetInit::Frame(NetInit *this)
{
  ?Frame@NetInit@@QEAAXXZ(this);
}

/*
==============
NetInit::RelayDisconnected
==============
*/

void __fastcall NetInit::RelayDisconnected(NetInit *this)
{
  ?RelayDisconnected@NetInit@@QEAAXXZ(this);
}

/*
==============
NetInit::IsOnlineFlow
==============
*/

bool __fastcall NetInit::IsOnlineFlow(NetInit *this)
{
  return ?IsOnlineFlow@NetInit@@QEBA_NXZ(this);
}

/*
==============
NetInit::SetLocalAddr
==============
*/

void __fastcall NetInit::SetLocalAddr(NetInit *this, const bdCommonAddr *localAddr)
{
  ?SetLocalAddr@NetInit@@QEAAXAEBVbdCommonAddr@@@Z(this, localAddr);
}

/*
==============
NetInit::UpdateLoopbacks
==============
*/

void __fastcall NetInit::UpdateLoopbacks(NetInit *this, const bdReference<bdCommonAddr> *localAddr)
{
  ?UpdateLoopbacks@NetInit@@AEAAXAEBV?$bdReference@VbdCommonAddr@@@@@Z(this, localAddr);
}

/*
==============
NetInit::StartThread
==============
*/

void __fastcall NetInit::StartThread(NetInit *this)
{
  ?StartThread@NetInit@@AEAAXXZ(this);
}

/*
==============
NetInit::RelayConnected
==============
*/

void __fastcall NetInit::RelayConnected(NetInit *this)
{
  ?RelayConnected@NetInit@@QEAAXXZ(this);
}

/*
==============
NetInit::DemonwareCompleted
==============
*/

bool __fastcall NetInit::DemonwareCompleted(NetInit *this, bool success, NetMode mode, NetMode *nextMode)
{
  return ?DemonwareCompleted@NetInit@@AEAA_N_NW4NetMode@@AEAW42@@Z(this, success, mode, nextMode);
}

/*
==============
NetInit::NetInit
==============
*/
void NetInit::NetInit(NetInit *this)
{
  this->m_thread = NULL;
  this->m_loopback = NULL;
  NetRelay::NetRelay(&this->m_relay, this);
  NetRelayOverride::NetRelayOverride(&this->m_relayOverride, &this->m_relay);
  this->m_localAddr.m_ptr = NULL;
  Timer::Timer(&this->m_localAddrUpdateTimer);
  *(_WORD *)&this->m_offlinePending = 0;
  this->m_localAddrResolved = 0;
  this->m_config = NULL;
  this->m_listener = NULL;
  s_instance_0 = this;
}

/*
==============
NetInit::CanStop
==============
*/
bool NetInit::CanStop(NetInit *this)
{
  const dvar_t *v1; 

  v1 = DVARBOOL_onlinegame;
  if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return !v1->current.enabled && !(unsigned __int8)Com_GameMode_GetActiveGameMode() && !g_partyData.inParty && !Lobby_GetPartyData()->inParty;
}

/*
==============
NetInit::DemonwareCallback
==============
*/
char NetInit::DemonwareCallback(bool success, NetMode mode, NetMode *nextMode)
{
  NetInit *v3; 
  NetInitFlow flow; 
  __int32 v8; 
  bool v9; 
  NetEventListener *m_listener; 
  unsigned __int64 GameSocket; 

  v3 = s_instance_0;
  if ( !s_instance_0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_init.cpp", 182, ASSERT_TYPE_ASSERT, "(s_instance != 0)", (const char *)&queryFormat, "s_instance != NULL") )
      __debugbreak();
    v3 = s_instance_0;
  }
  if ( success )
  {
    flow = v3->m_config->flow;
    if ( flow )
    {
      v8 = flow - 1;
      if ( v8 )
      {
        if ( v8 == 2 && mode == NET_MODE_OFFLINE && !v3->m_onlineAttempted )
        {
          *nextMode = NET_MODE_ONLINE;
          v3->m_onlineAttempted = 1;
        }
        goto LABEL_18;
      }
      if ( mode != NET_MODE_ONLINE )
      {
        v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_init.cpp", 226, ASSERT_TYPE_ASSERT, "(mode == NET_MODE_ONLINE)", "%s\n\tExpected only online", "mode == NET_MODE_ONLINE");
        goto LABEL_16;
      }
    }
    else if ( mode != NET_MODE_OFFLINE )
    {
      v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_init.cpp", 223, ASSERT_TYPE_ASSERT, "(mode == NET_MODE_OFFLINE)", "%s\n\tExpected only offline", "mode == NET_MODE_OFFLINE");
LABEL_16:
      if ( v9 )
        __debugbreak();
    }
LABEL_18:
    NetInit::InitLocalAddr(v3);
    if ( mode == NET_MODE_ONLINE )
    {
      QosPayload::ms_qosPayload.Uninit(&QosPayload::ms_qosPayload);
      QosPayload::ms_qosPayload.Init(&QosPayload::ms_qosPayload);
    }
    goto LABEL_25;
  }
  if ( mode == NET_MODE_ONLINE && v3->m_config->flow != NET_INITFLOW_ONLINE )
  {
    *nextMode = NET_MODE_OFFLINE;
    return 1;
  }
  if ( net_require_demonware->current.enabled )
    Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_144018D48, 426i64);
LABEL_25:
  if ( *nextMode == NET_MODE_NONE )
  {
    m_listener = v3->m_listener;
    if ( m_listener )
      m_listener->NetworkStarted(m_listener, success, mode);
    if ( success && !NetThread::IsStarted(v3->m_thread) )
    {
      GameSocket = dwGetGameSocket();
      if ( GameSocket == -1i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_init.cpp", 313, ASSERT_TYPE_ASSERT, "(socket != ( ~0ULL ))", (const char *)&queryFormat, "socket != NET_INVALID_SOCKET") )
        __debugbreak();
      NetThread::Start(v3->m_thread, GameSocket, v3->m_config);
    }
  }
  return 1;
}

/*
==============
NetInit::DemonwareCompleted
==============
*/
char NetInit::DemonwareCompleted(NetInit *this, bool success, NetMode mode, NetMode *nextMode)
{
  NetInitFlow flow; 
  __int32 v9; 
  bool v10; 
  NetEventListener *m_listener; 
  unsigned __int64 GameSocket; 

  if ( success )
  {
    flow = this->m_config->flow;
    if ( flow )
    {
      v9 = flow - 1;
      if ( v9 )
      {
        if ( v9 == 2 && mode == NET_MODE_OFFLINE && !this->m_onlineAttempted )
        {
          *nextMode = NET_MODE_ONLINE;
          this->m_onlineAttempted = 1;
        }
        goto LABEL_14;
      }
      if ( mode != NET_MODE_ONLINE )
      {
        v10 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_init.cpp", 226, ASSERT_TYPE_ASSERT, "(mode == NET_MODE_ONLINE)", "%s\n\tExpected only online", "mode == NET_MODE_ONLINE");
        goto LABEL_12;
      }
    }
    else if ( mode != NET_MODE_OFFLINE )
    {
      v10 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_init.cpp", 223, ASSERT_TYPE_ASSERT, "(mode == NET_MODE_OFFLINE)", "%s\n\tExpected only offline", "mode == NET_MODE_OFFLINE");
LABEL_12:
      if ( v10 )
        __debugbreak();
    }
LABEL_14:
    NetInit::InitLocalAddr(this);
    if ( mode == NET_MODE_ONLINE )
    {
      QosPayload::ms_qosPayload.Uninit(&QosPayload::ms_qosPayload);
      QosPayload::ms_qosPayload.Init(&QosPayload::ms_qosPayload);
    }
    goto LABEL_21;
  }
  if ( mode == NET_MODE_ONLINE && this->m_config->flow != NET_INITFLOW_ONLINE )
  {
    *nextMode = NET_MODE_OFFLINE;
    return 1;
  }
  if ( net_require_demonware->current.enabled )
    Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_144018D48, 426i64);
LABEL_21:
  if ( *nextMode == NET_MODE_NONE )
  {
    m_listener = this->m_listener;
    if ( m_listener )
      m_listener->NetworkStarted(m_listener, success, mode);
    if ( success && !NetThread::IsStarted(this->m_thread) )
    {
      GameSocket = dwGetGameSocket();
      if ( GameSocket == -1i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_init.cpp", 313, ASSERT_TYPE_ASSERT, "(socket != ( ~0ULL ))", (const char *)&queryFormat, "socket != NET_INVALID_SOCKET") )
        __debugbreak();
      NetThread::Start(this->m_thread, GameSocket, this->m_config);
    }
  }
  return 1;
}

/*
==============
NetInit::DemonwareStart
==============
*/
void NetInit::DemonwareStart(NetInit *this, NetMode mode)
{
  if ( !this->m_thread && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_init.cpp", 190, ASSERT_TYPE_ASSERT, "(m_thread)", (const char *)&queryFormat, "m_thread") )
    __debugbreak();
  NetThread::Stop(this->m_thread);
  NET_EnterCriticalSection();
  dwNetStart(mode, this->m_routerListener, &this->m_relayOverride, NetInit::DemonwareCallback);
  NET_ExitCriticalSection();
}

/*
==============
NetInit::DemonwareStop
==============
*/
void NetInit::DemonwareStop(NetInit *this)
{
  NetThread *m_thread; 

  m_thread = this->m_thread;
  if ( m_thread )
    NetThread::Stop(m_thread);
  NET_EnterCriticalSection();
  dwNetStop();
  NET_ExitCriticalSection();
}

/*
==============
NetInit::Frame
==============
*/
void NetInit::Frame(NetInit *this)
{
  const dvar_t *v2; 

  if ( this->m_offlinePending )
  {
    v2 = DVARBOOL_onlinegame;
    if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v2);
    if ( !v2->current.enabled && !(unsigned __int8)Com_GameMode_GetActiveGameMode() && !g_partyData.inParty && !Lobby_GetPartyData()->inParty )
    {
      NET_Reset();
      NetInit::DemonwareStart(this, NET_MODE_OFFLINE);
    }
  }
  NetRelay::Frame(&this->m_relay);
}

/*
==============
NetInit::GetLocalAddr
==============
*/
bdReference<bdCommonAddr> *NetInit::GetLocalAddr(NetInit *this)
{
  return &this->m_localAddr;
}

/*
==============
NetInit::GetRelay
==============
*/
NetRelay *NetInit::GetRelay(NetInit *this)
{
  return &this->m_relay;
}

/*
==============
NetInit::InitLocalAddr
==============
*/
void NetInit::InitLocalAddr(NetInit *this)
{
  bdNetImpl *Net; 
  const bdAddr *v3; 
  unsigned __int16 v4; 
  bdCommonAddr *v5; 
  bdNATType NATType; 
  const bdFixedArray<bdAddr,5> *LocalAddrs; 
  bdCommonAddr *v8; 
  bdCommonAddr *v9; 
  bdSocketRouter *SocketRouter; 
  const char *v11; 
  const char *v12; 
  bdCommonAddr *m_ptr; 
  bdCommonAddr *v14; 
  bdFixedArray<bdAddr,5> *p_m_localAddrs; 
  bdFixedArray<bdAddr,5> *v16; 
  __int64 v17; 
  NetEventListener *m_listener; 
  bdReference<bdCommonAddr> result; 
  bdReference<bdCommonAddr> newLocalCommonAddr; 
  __int64 v21; 
  bdAddr publicAddr; 
  XNADDR v23; 
  XNADDR buffer; 

  v21 = -2i64;
  Net = dwGetNet();
  bdNetImpl::getLocalCommonAddr(Net, &result);
  if ( !result.m_ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_init.cpp", 392, ASSERT_TYPE_ASSERT, "(localAddr.notNull())", (const char *)&queryFormat, "localAddr.notNull()") )
    __debugbreak();
  if ( !bdCommonAddr::operator==(this->m_localAddr.m_ptr, result.m_ptr) )
  {
    Com_Printf(25, "[NET] ========== Local common address changed =========\n");
    if ( net_simulate_port_remapping->current.enabled )
    {
      v3 = bdCommonAddr::getPublicAddr(result.m_ptr);
      bdAddr::bdAddr(&publicAddr, v3);
      v4 = s_publicPortOffset + bdSockAddr::getPort(&publicAddr.m_address);
      ++s_publicPortOffset;
      bdSockAddr::setPort(&publicAddr.m_address, v4);
      v5 = (bdCommonAddr *)bdMemory::allocate(0x4E0ui64);
      newLocalCommonAddr.m_ptr = v5;
      if ( v5 )
      {
        NATType = bdCommonAddr::getNATType(result.m_ptr);
        LocalAddrs = bdCommonAddr::getLocalAddrs(result.m_ptr);
        bdCommonAddr::bdCommonAddr(v5, LocalAddrs, &publicAddr, NATType, BD_PLATFORM_ID_XBOXONE);
        v9 = v8;
      }
      else
      {
        v9 = NULL;
      }
      if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
        ((void (__fastcall *)(bdCommonAddr *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
      result.m_ptr = v9;
      if ( v9 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v9->m_refCount, 1u);
      SocketRouter = dwGetSocketRouter();
      newLocalCommonAddr.m_ptr = result.m_ptr;
      if ( result.m_ptr )
        _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 1u);
      bdSocketRouter::updateLocalCommonAddr(SocketRouter, (const bdReference<bdCommonAddr>)&newLocalCommonAddr);
    }
    if ( this->m_localAddrResolved )
    {
      v11 = dwCommonAddrToString(&this->m_localAddr);
      Com_Printf(25, "[NET] Old address\n%s\n", v11);
    }
    v12 = dwCommonAddrToString(&result);
    Com_Printf(25, "[NET] New address\n%s\n", v12);
    bdCommonAddr::serialize(this->m_localAddr.m_ptr, buffer.addrBuff);
    bdCommonAddr::serialize(result.m_ptr, v23.addrBuff);
    m_ptr = result.m_ptr;
    v14 = this->m_localAddr.m_ptr;
    bdReferencable::operator=(v14, result.m_ptr);
    p_m_localAddrs = &v14->m_localAddrs;
    v16 = &m_ptr->m_localAddrs;
    v17 = 6i64;
    do
    {
      *(_OWORD *)&p_m_localAddrs->m_array[0].m_address.inUn.m_sockaddrStorage.ss_family = *(_OWORD *)&v16->m_array[0].m_address.inUn.m_sockaddrStorage.ss_family;
      *(in6_addr *)((char *)&p_m_localAddrs->m_array[0].m_address.inUn.m_ipv6Sockaddr.sin6_addr + 8) = *(in6_addr *)((char *)&v16->m_array[0].m_address.inUn.m_ipv6Sockaddr.sin6_addr + 8);
      *((_OWORD *)&p_m_localAddrs->m_array[0].m_address.inUn.m_ipv6Sockaddr + 2) = *((_OWORD *)&v16->m_array[0].m_address.inUn.m_ipv6Sockaddr + 2);
      *((_OWORD *)&p_m_localAddrs->m_array[0].m_address.inUn.m_ipv6Sockaddr + 3) = *((_OWORD *)&v16->m_array[0].m_address.inUn.m_ipv6Sockaddr + 3);
      *((_OWORD *)&p_m_localAddrs->m_array[0].m_address.inUn.m_ipv6Sockaddr + 4) = *((_OWORD *)&v16->m_array[0].m_address.inUn.m_ipv6Sockaddr + 4);
      *((_OWORD *)&p_m_localAddrs->m_array[0].m_address.inUn.m_ipv6Sockaddr + 5) = *((_OWORD *)&v16->m_array[0].m_address.inUn.m_ipv6Sockaddr + 5);
      *((_OWORD *)&p_m_localAddrs->m_array[0].m_address.inUn.m_ipv6Sockaddr + 6) = *((_OWORD *)&v16->m_array[0].m_address.inUn.m_ipv6Sockaddr + 6);
      p_m_localAddrs = (bdFixedArray<bdAddr,5> *)((char *)p_m_localAddrs + 128);
      *(_OWORD *)&p_m_localAddrs[-1].m_array[4].m_type = *((_OWORD *)&v16->m_array[0].m_address.inUn.m_ipv6Sockaddr + 7);
      v16 = (bdFixedArray<bdAddr,5> *)((char *)v16 + 128);
      --v17;
    }
    while ( v17 );
    *(__m256i *)&v14->m_publicAddr.m_address.inUn.m_sockaddrStorage.ss_family = *(__m256i *)&m_ptr->m_publicAddr.m_address.inUn.m_sockaddrStorage.ss_family;
    *((__m256i *)&v14->m_publicAddr.m_address.inUn.m_ipv6Sockaddr + 1) = *((__m256i *)&m_ptr->m_publicAddr.m_address.inUn.m_ipv6Sockaddr + 1);
    *((__m256i *)&v14->m_publicAddr.m_address.inUn.m_ipv6Sockaddr + 2) = *((__m256i *)&m_ptr->m_publicAddr.m_address.inUn.m_ipv6Sockaddr + 2);
    *((__m256i *)&v14->m_publicAddr.m_address.inUn.m_ipv6Sockaddr + 3) = *((__m256i *)&m_ptr->m_publicAddr.m_address.inUn.m_ipv6Sockaddr + 3);
    v14->m_publicAddr.m_relayRoute = m_ptr->m_publicAddr.m_relayRoute;
    *(double *)&v14->m_publicAddr.m_type = *(double *)&m_ptr->m_publicAddr.m_type;
    v14->m_natType = m_ptr->m_natType;
    v14->m_hash = m_ptr->m_hash;
    v14->m_isLoopback = m_ptr->m_isLoopback;
    v14->m_platformID = m_ptr->m_platformID;
    bdRelayJoinData::operator=(&v14->m_joinData, &m_ptr->m_joinData);
    this->m_localAddrResolved = 1;
    m_listener = this->m_listener;
    if ( m_listener && m_listener->LocalAddressUpdated(m_listener, &buffer, &v23) )
      Timer::Start(&this->m_localAddrUpdateTimer, net_local_addr_update_expiry->current.integer);
  }
  NetInit::UpdateLoopbacks(this, &result);
  NetLoopback::Flush(this->m_loopback);
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    if ( result.m_ptr )
      ((void (__fastcall *)(bdCommonAddr *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  }
}

/*
==============
NetInit::InitMode
==============
*/
void NetInit::InitMode(NetInit *this, NetMode mode)
{
  NetInit::InitLocalAddr(this);
  if ( mode == NET_MODE_ONLINE )
  {
    QosPayload::ms_qosPayload.Uninit(&QosPayload::ms_qosPayload);
    QosPayload::ms_qosPayload.Init(&QosPayload::ms_qosPayload);
  }
}

/*
==============
NetInit::IsLocalAddressResolved
==============
*/
_BOOL8 NetInit::IsLocalAddressResolved(NetInit *this)
{
  return this->m_localAddrResolved;
}

/*
==============
NetInit::IsLocalAddressUpdating
==============
*/
bool NetInit::IsLocalAddressUpdating(NetInit *this)
{
  NetEventListener *m_listener; 

  m_listener = this->m_listener;
  return m_listener && m_listener->IsLocalAddressUpdating(m_listener) && !Timer::IsExpired(&this->m_localAddrUpdateTimer);
}

/*
==============
NetInit::IsOnlineFlow
==============
*/
bool NetInit::IsOnlineFlow(NetInit *this)
{
  return (unsigned int)(this->m_config->flow - 1) <= 1;
}

/*
==============
NetInit::OfflineTransition
==============
*/
void NetInit::OfflineTransition(NetInit *this)
{
  if ( NET_IsOnline() )
  {
    Com_Printf(25, "[NET] Offline transition occurred\n");
    this->m_offlinePending = 1;
  }
}

/*
==============
NetInit::OnlineTransition
==============
*/
void NetInit::OnlineTransition(NetInit *this)
{
  if ( NET_IsOffline() )
  {
    Com_Printf(25, "[NET] Online transition occurred\n");
    NET_Reset();
    NetInit::DemonwareStart(this, NET_MODE_ONLINE);
    FenceManager_Frame();
  }
}

/*
==============
NetInit::ProcessOffline
==============
*/
void NetInit::ProcessOffline(NetInit *this)
{
  const dvar_t *v2; 

  if ( this->m_offlinePending )
  {
    v2 = DVARBOOL_onlinegame;
    if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v2);
    if ( !v2->current.enabled && !(unsigned __int8)Com_GameMode_GetActiveGameMode() && !g_partyData.inParty && !Lobby_GetPartyData()->inParty )
    {
      NET_Reset();
      NetInit::DemonwareStart(this, NET_MODE_OFFLINE);
    }
  }
}

/*
==============
NetInit::RelayConnected
==============
*/
void NetInit::RelayConnected(NetInit *this)
{
  NetInit::InitLocalAddr(this);
  QosPayload::ms_qosPayload.Uninit(&QosPayload::ms_qosPayload);
  QosPayload::ms_qosPayload.Init(&QosPayload::ms_qosPayload);
}

/*
==============
NetInit::RelayDisconnected
==============
*/

void __fastcall NetInit::RelayDisconnected(NetInit *this)
{
  NetInit::InitLocalAddr(this);
}

/*
==============
NetInit::Reset
==============
*/
void NetInit::Reset(NetInit *this, NetConfig *config, NetThread *thread, NetLoopback *loopback)
{
  NetThread *m_thread; 
  bdCommonAddr *v9; 
  bdCommonAddr *v10; 
  bdCommonAddr *v11; 
  bdCommonAddr *m_ptr; 
  bdCommonAddr *v13; 

  m_thread = this->m_thread;
  if ( m_thread )
    NetThread::Stop(m_thread);
  NET_EnterCriticalSection();
  dwNetStop();
  NET_ExitCriticalSection();
  NetRelay::Reset(&this->m_relay, config);
  this->m_config = config;
  this->m_thread = thread;
  this->m_loopback = loopback;
  *(_WORD *)&this->m_offlinePending = 0;
  this->m_localAddrResolved = 0;
  v9 = (bdCommonAddr *)bdMemory::allocate(0x4E0ui64);
  if ( v9 )
  {
    bdCommonAddr::bdCommonAddr(v9);
    v11 = v10;
  }
  else
  {
    v11 = NULL;
  }
  m_ptr = this->m_localAddr.m_ptr;
  if ( m_ptr )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      v13 = this->m_localAddr.m_ptr;
      if ( v13 )
        ((void (__fastcall *)(bdCommonAddr *, __int64))v13->~bdReferencable)(v13, 1i64);
    }
  }
  this->m_localAddr.m_ptr = v11;
  if ( v11 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v11->m_refCount, 1u);
  Timer::Reset(&this->m_localAddrUpdateTimer);
}

/*
==============
NetInit::SetLocalAddr
==============
*/
void NetInit::SetLocalAddr(NetInit *this, const bdCommonAddr *localAddr)
{
  bdCommonAddr *m_ptr; 
  bdFixedArray<bdAddr,5> *p_m_localAddrs; 
  __int64 v6; 
  bdFixedArray<bdAddr,5> *v7; 
  __int128 v8; 

  m_ptr = this->m_localAddr.m_ptr;
  bdReferencable::operator=(m_ptr, localAddr);
  p_m_localAddrs = &m_ptr->m_localAddrs;
  v6 = 6i64;
  v7 = &localAddr->m_localAddrs;
  do
  {
    p_m_localAddrs = (bdFixedArray<bdAddr,5> *)((char *)p_m_localAddrs + 128);
    v8 = *(_OWORD *)&v7->m_array[0].m_address.inUn.m_sockaddrStorage.ss_family;
    v7 = (bdFixedArray<bdAddr,5> *)((char *)v7 + 128);
    *((_OWORD *)&p_m_localAddrs[-1].m_array[4].m_address.inUn.m_ipv6Sockaddr + 2) = v8;
    *((_OWORD *)&p_m_localAddrs[-1].m_array[4].m_address.inUn.m_ipv6Sockaddr + 3) = *((_OWORD *)&v7[-1].m_array[4].m_address.inUn.m_ipv6Sockaddr + 3);
    *((_OWORD *)&p_m_localAddrs[-1].m_array[4].m_address.inUn.m_ipv6Sockaddr + 4) = *((_OWORD *)&v7[-1].m_array[4].m_address.inUn.m_ipv6Sockaddr + 4);
    *((_OWORD *)&p_m_localAddrs[-1].m_array[4].m_address.inUn.m_ipv6Sockaddr + 5) = *((_OWORD *)&v7[-1].m_array[4].m_address.inUn.m_ipv6Sockaddr + 5);
    *((_OWORD *)&p_m_localAddrs[-1].m_array[4].m_address.inUn.m_ipv6Sockaddr + 6) = *((_OWORD *)&v7[-1].m_array[4].m_address.inUn.m_ipv6Sockaddr + 6);
    *((_OWORD *)&p_m_localAddrs[-1].m_array[4].m_address.inUn.m_ipv6Sockaddr + 7) = *((_OWORD *)&v7[-1].m_array[4].m_address.inUn.m_ipv6Sockaddr + 7);
    p_m_localAddrs[-1].m_array[4].m_relayRoute = v7[-1].m_array[4].m_relayRoute;
    *(_OWORD *)&p_m_localAddrs[-1].m_array[4].m_type = *(_OWORD *)&v7[-1].m_array[4].m_type;
    --v6;
  }
  while ( v6 );
  *(__m256i *)&m_ptr->m_publicAddr.m_address.inUn.m_sockaddrStorage.ss_family = *(__m256i *)&localAddr->m_publicAddr.m_address.inUn.m_sockaddrStorage.ss_family;
  *((__m256i *)&m_ptr->m_publicAddr.m_address.inUn.m_ipv6Sockaddr + 1) = *((__m256i *)&localAddr->m_publicAddr.m_address.inUn.m_ipv6Sockaddr + 1);
  *((__m256i *)&m_ptr->m_publicAddr.m_address.inUn.m_ipv6Sockaddr + 2) = *((__m256i *)&localAddr->m_publicAddr.m_address.inUn.m_ipv6Sockaddr + 2);
  *((__m256i *)&m_ptr->m_publicAddr.m_address.inUn.m_ipv6Sockaddr + 3) = *((__m256i *)&localAddr->m_publicAddr.m_address.inUn.m_ipv6Sockaddr + 3);
  m_ptr->m_publicAddr.m_relayRoute = localAddr->m_publicAddr.m_relayRoute;
  *(double *)&m_ptr->m_publicAddr.m_type = *(double *)&localAddr->m_publicAddr.m_type;
  m_ptr->m_natType = localAddr->m_natType;
  m_ptr->m_hash = localAddr->m_hash;
  m_ptr->m_isLoopback = localAddr->m_isLoopback;
  m_ptr->m_platformID = localAddr->m_platformID;
  bdRelayJoinData::operator=(&m_ptr->m_joinData, &localAddr->m_joinData);
  this->m_localAddrResolved = 1;
}

/*
==============
NetInit::SimulatePortRemapping
==============
*/
void NetInit::SimulatePortRemapping(NetInit *this, bdReference<bdCommonAddr> *localAddr)
{
  const bdAddr *v3; 
  unsigned __int16 v4; 
  bdCommonAddr *v5; 
  bdNATType NATType; 
  const bdFixedArray<bdAddr,5> *LocalAddrs; 
  bdCommonAddr *v8; 
  bdCommonAddr *v9; 
  bdSocketRouter *SocketRouter; 
  bdCommonAddr *m_ptr; 
  bdReference<bdCommonAddr> newLocalCommonAddr; 
  __int64 v13; 
  bdAddr publicAddr; 

  v13 = -2i64;
  if ( net_simulate_port_remapping->current.enabled )
  {
    v3 = bdCommonAddr::getPublicAddr(localAddr->m_ptr);
    bdAddr::bdAddr(&publicAddr, v3);
    v4 = s_publicPortOffset + bdSockAddr::getPort(&publicAddr.m_address);
    ++s_publicPortOffset;
    bdSockAddr::setPort(&publicAddr.m_address, v4);
    v5 = (bdCommonAddr *)bdMemory::allocate(0x4E0ui64);
    newLocalCommonAddr.m_ptr = v5;
    if ( v5 )
    {
      NATType = bdCommonAddr::getNATType(localAddr->m_ptr);
      LocalAddrs = bdCommonAddr::getLocalAddrs(localAddr->m_ptr);
      bdCommonAddr::bdCommonAddr(v5, LocalAddrs, &publicAddr, NATType, BD_PLATFORM_ID_XBOXONE);
      v9 = v8;
    }
    else
    {
      v9 = NULL;
    }
    if ( localAddr->m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&localAddr->m_ptr->m_refCount, 0xFFFFFFFF) == 1 && localAddr->m_ptr )
      ((void (__fastcall *)(bdCommonAddr *, __int64))localAddr->m_ptr->~bdReferencable)(localAddr->m_ptr, 1i64);
    localAddr->m_ptr = v9;
    if ( v9 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v9->m_refCount, 1u);
    SocketRouter = dwGetSocketRouter();
    m_ptr = localAddr->m_ptr;
    newLocalCommonAddr.m_ptr = m_ptr;
    if ( m_ptr )
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    bdSocketRouter::updateLocalCommonAddr(SocketRouter, (const bdReference<bdCommonAddr>)&newLocalCommonAddr);
  }
}

/*
==============
NetInit::Start
==============
*/
void NetInit::Start(NetInit *this, NetEventListener *listener, bdSocketRouterListener *routerListener)
{
  const NetConfig *m_config; 
  NetMode v5; 

  m_config = this->m_config;
  this->m_routerListener = routerListener;
  v5 = NET_MODE_OFFLINE;
  this->m_listener = listener;
  if ( (unsigned int)(m_config->flow - 1) <= 1 && !Live_IsOffline() )
    v5 = NET_MODE_ONLINE;
  NetInit::DemonwareStart(this, v5);
}

/*
==============
NetInit::StartThread
==============
*/
void NetInit::StartThread(NetInit *this)
{
  unsigned __int64 GameSocket; 

  if ( !NetThread::IsStarted(this->m_thread) )
  {
    GameSocket = dwGetGameSocket();
    if ( GameSocket == -1i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_init.cpp", 313, ASSERT_TYPE_ASSERT, "(socket != ( ~0ULL ))", (const char *)&queryFormat, "socket != NET_INVALID_SOCKET") )
      __debugbreak();
    NetThread::Start(this->m_thread, GameSocket, this->m_config);
  }
}

/*
==============
NetInit::Stop
==============
*/
void NetInit::Stop(NetInit *this)
{
  NetThread *m_thread; 

  m_thread = this->m_thread;
  if ( m_thread )
    NetThread::Stop(m_thread);
  NET_EnterCriticalSection();
  dwNetStop();
  NET_ExitCriticalSection();
}

/*
==============
NetInit::UpdateLoopbacks
==============
*/
void NetInit::UpdateLoopbacks(NetInit *this, const bdReference<bdCommonAddr> *localAddr)
{
  int i; 
  NetEndpoint *Endpoint; 
  const bdSecurityID *SecurityId; 
  NetAddress *Address; 
  bdReference<bdAddrHandle> *Handle; 
  const char *String; 
  NetAddress *v9; 
  bdAddrHandle *m_ptr; 
  NetSession *Session; 
  const XSECURITY_INFO *SecurityInfo; 
  bdReference<bdAddrHandle> outAddrHandle; 
  bdReference<bdAddrHandle> addr; 

  for ( i = 256; i < 657; ++i )
  {
    Endpoint = NET_GetEndpoint(i);
    if ( NetEndpoint::IsOpened(Endpoint) && NetEndpoint::IsLoopback(Endpoint) )
    {
      outAddrHandle.m_ptr = NULL;
      SecurityId = NetEndpoint::GetSecurityId(Endpoint);
      if ( NET_DemonwareConnect(SecurityId, localAddr, &outAddrHandle) )
      {
        Address = NetEndpoint::GetAddress(Endpoint);
        Handle = NetAddress::GetHandle(Address);
        if ( outAddrHandle.m_ptr != Handle->m_ptr )
        {
          String = NetEndpoint::GetString(Endpoint);
          Com_Printf(25, "[NET] Updating local address: %s\n", String);
          v9 = NetEndpoint::GetAddress(Endpoint);
          m_ptr = NetAddress::GetHandle(v9)->m_ptr;
          addr.m_ptr = m_ptr;
          if ( m_ptr )
            _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
          NetEndpoint::Update(Endpoint, &outAddrHandle);
          if ( !NetEndpoint::IsLoopback(Endpoint) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_init.cpp", 369, ASSERT_TYPE_ASSERT, "(endpoint->IsLoopback())", "%s\n\tExpected address to remain loopback", "endpoint->IsLoopback()") )
            __debugbreak();
          dwUnregisterAddr(&addr);
          if ( addr.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&addr.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
          {
            if ( addr.m_ptr )
              ((void (__fastcall *)(bdAddrHandle *, __int64))addr.m_ptr->~bdReferencable)(addr.m_ptr, 1i64);
            addr.m_ptr = NULL;
          }
        }
        NET_EnterCriticalSection();
        Session = NetEndpoint::GetSession(Endpoint);
        SecurityInfo = NetSession::GetSecurityInfo(Session);
        dwRegisterSession(SecurityInfo);
        NET_ExitCriticalSection();
      }
      if ( outAddrHandle.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&outAddrHandle.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
      {
        if ( outAddrHandle.m_ptr )
          ((void (__fastcall *)(bdAddrHandle *, __int64))outAddrHandle.m_ptr->~bdReferencable)(outAddrHandle.m_ptr, 1i64);
      }
    }
  }
}

