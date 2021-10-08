/*
==============
NetRelay::Frame
==============
*/

void __fastcall NetRelay::Frame(NetRelay *this)
{
  ?Frame@NetRelay@@QEAAXXZ(this);
}

/*
==============
NetRelay::FenceCallback
==============
*/

void __fastcall NetRelay::FenceCallback(int controllerIndex, bool value)
{
  ?FenceCallback@NetRelay@@CAXH_N@Z(controllerIndex, value);
}

/*
==============
NetRelay::IsAuthTokenReady
==============
*/

bool __fastcall NetRelay::IsAuthTokenReady(NetRelay *this)
{
  return ?IsAuthTokenReady@NetRelay@@AEBA_NXZ(this);
}

/*
==============
NetRelayOverride::shouldUseRelay
==============
*/

bool __fastcall NetRelayOverride::shouldUseRelay(NetRelayOverride *this, bdReference<bdCommonAddr> local, bdReference<bdCommonAddr> remote, bool initialResult)
{
  return ?shouldUseRelay@NetRelayOverride@@UEAA_NV?$bdReference@VbdCommonAddr@@@@0_N@Z(this, local, remote, initialResult);
}

/*
==============
NetRelay::Start
==============
*/

void __fastcall NetRelay::Start(NetRelay *this)
{
  ?Start@NetRelay@@QEAAXXZ(this);
}

/*
==============
NetRelay::NetRelay
==============
*/

void __fastcall NetRelay::NetRelay(NetRelay *this, NetInit *init)
{
  ??0NetRelay@@QEAA@PEAVNetInit@@@Z(this, init);
}

/*
==============
NetRelay::IsEnabled
==============
*/

bool __fastcall NetRelay::IsEnabled(NetRelay *this)
{
  return ?IsEnabled@NetRelay@@QEBA_NXZ(this);
}

/*
==============
NetRelay::Retry
==============
*/

void __fastcall NetRelay::Retry(NetRelay *this)
{
  ?Retry@NetRelay@@AEAAXXZ(this);
}

/*
==============
NetRelay::FetchAuthTokenCompleted
==============
*/

void __fastcall NetRelay::FetchAuthTokenCompleted(NetRelay *this, GenericTask *task, eTaskManagerTaskState state)
{
  ?FetchAuthTokenCompleted@NetRelay@@AEAAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(this, task, state);
}

/*
==============
NetRelay::IsQosReady
==============
*/

bool __fastcall NetRelay::IsQosReady(NetRelay *this)
{
  return ?IsQosReady@NetRelay@@AEBA_NXZ(this);
}

/*
==============
NetRelayOverride::onRelayAssociationError
==============
*/

void __fastcall NetRelayOverride::onRelayAssociationError(NetRelayOverride *this)
{
  ?onRelayAssociationError@NetRelayOverride@@UEAAXXZ(this);
}

/*
==============
NetRelay::AuthTokenFetchedCallback
==============
*/

void __fastcall NetRelay::AuthTokenFetchedCallback(GenericTask *task, eTaskManagerTaskState state)
{
  ?AuthTokenFetchedCallback@NetRelay@@CAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(task, state);
}

/*
==============
NetRelay::ShouldFetchAuthToken
==============
*/

bool __fastcall NetRelay::ShouldFetchAuthToken(NetRelay *this)
{
  return ?ShouldFetchAuthToken@NetRelay@@AEBA_NXZ(this);
}

/*
==============
NetRelayOverride::handleMigrate
==============
*/

void __fastcall NetRelayOverride::handleMigrate(NetRelayOverride *this, const bdAddr *relayAddr)
{
  ?handleMigrate@NetRelayOverride@@UEAAXAEBVbdAddr@@@Z(this, relayAddr);
}

/*
==============
NetRelay::IsIdle
==============
*/

bool __fastcall NetRelay::IsIdle(NetRelay *this)
{
  return ?IsIdle@NetRelay@@QEBA_NXZ(this);
}

/*
==============
NetRelay::CanStart
==============
*/

bool __fastcall NetRelay::CanStart(NetRelay *this)
{
  return ?CanStart@NetRelay@@AEBA_NXZ(this);
}

/*
==============
NetRelay::ShouldShutdownMatchmaking
==============
*/

bool __fastcall NetRelay::ShouldShutdownMatchmaking(NetRelay *this)
{
  return ?ShouldShutdownMatchmaking@NetRelay@@AEBA_NXZ(this);
}

/*
==============
NetRelay::Stop
==============
*/

void __fastcall NetRelay::Stop(NetRelay *this)
{
  ?Stop@NetRelay@@QEAAXXZ(this);
}

/*
==============
NetRelay::Reset
==============
*/

void __fastcall NetRelay::Reset(NetRelay *this, const NetConfig *config)
{
  ?Reset@NetRelay@@QEAAXPEBUNetConfig@@@Z(this, config);
}

/*
==============
NetRelay::RelayDisconnected
==============
*/

void __fastcall NetRelay::RelayDisconnected(NetRelay *this, DWNetError error)
{
  ?RelayDisconnected@NetRelay@@EEAAXW4DWNetError@@@Z(this, error);
}

/*
==============
NetRelayOverride::shouldUseRelayIfNatTravFails
==============
*/

bool __fastcall NetRelayOverride::shouldUseRelayIfNatTravFails(NetRelayOverride *this, bdReference<bdCommonAddr> local, bdReference<bdCommonAddr> remote, bool initialResult)
{
  return ?shouldUseRelayIfNatTravFails@NetRelayOverride@@UEAA_NV?$bdReference@VbdCommonAddr@@@@0_N@Z(this, local, remote, initialResult);
}

/*
==============
NetRelayOverride::onRelayUpgradeSuccess
==============
*/

void __fastcall NetRelayOverride::onRelayUpgradeSuccess(NetRelayOverride *this)
{
  ?onRelayUpgradeSuccess@NetRelayOverride@@UEAAXXZ(this);
}

/*
==============
NetRelay::Request
==============
*/

void __fastcall NetRelay::Request(NetRelay *this)
{
  ?Request@NetRelay@@QEAAXXZ(this);
}

/*
==============
NetRelay::GetDatacenter
==============
*/

const char *__fastcall NetRelay::GetDatacenter(NetRelay *this)
{
  return ?GetDatacenter@NetRelay@@QEBAPEBDXZ(this);
}

/*
==============
NetRelayOverride::NetRelayOverride
==============
*/

void __fastcall NetRelayOverride::NetRelayOverride(NetRelayOverride *this, NetRelay *relay)
{
  ??0NetRelayOverride@@QEAA@PEAVNetRelay@@@Z(this, relay);
}

/*
==============
NetRelay::GetRetailDebug
==============
*/

void __fastcall NetRelay::GetRetailDebug(NetRelay *this, char *destString, const int maxLength)
{
  ?GetRetailDebug@NetRelay@@QEAAXPEADH@Z(this, destString, maxLength);
}

/*
==============
NetRelay::IsStarted
==============
*/

bool __fastcall NetRelay::IsStarted(NetRelay *this)
{
  return ?IsStarted@NetRelay@@QEBA_NXZ(this);
}

/*
==============
NetRelayOverride::onRelayUpgradeFailure
==============
*/

void __fastcall NetRelayOverride::onRelayUpgradeFailure(NetRelayOverride *this)
{
  ?onRelayUpgradeFailure@NetRelayOverride@@UEAAXXZ(this);
}

/*
==============
NetRelay::RelayConnected
==============
*/

void __fastcall NetRelay::RelayConnected(NetRelay *this)
{
  ?RelayConnected@NetRelay@@EEAAXXZ(this);
}

/*
==============
NetRelay::FetchAuthToken
==============
*/

void __fastcall NetRelay::FetchAuthToken(NetRelay *this, int controllerIndex)
{
  ?FetchAuthToken@NetRelay@@AEAAXH@Z(this, controllerIndex);
}

/*
==============
NetRelay::NetRelay
==============
*/
void NetRelay::NetRelay(NetRelay *this, NetInit *init)
{
  this->m_init = init;
  this->__vftable = (NetRelay_vtbl *)&NetRelay::`vftable';
  this->m_registered = 0;
  this->m_connectState = IDLE;
  RetryTimer::RetryTimer(&this->m_retryTimer);
  memset_0(this->m_datacenter, 0, sizeof(this->m_datacenter));
  this->m_id = 0i64;
  bdClientAuthTokenResult::bdClientAuthTokenResult(&this->m_authToken);
  *(_QWORD *)&this->m_authTokenState = 0i64;
  s_instance_1 = this;
}

/*
==============
NetRelayOverride::NetRelayOverride
==============
*/
void NetRelayOverride::NetRelayOverride(NetRelayOverride *this, NetRelay *relay)
{
  this->m_relay = relay;
  this->__vftable = (NetRelayOverride_vtbl *)&NetRelayOverride::`vftable';
}

/*
==============
NetRelay::AuthTokenFetchedCallback
==============
*/
void NetRelay::AuthTokenFetchedCallback(GenericTask *task, eTaskManagerTaskState state)
{
  NetRelay *v2; 
  unsigned __int64 TransactionID; 
  DWServicesAccess *Instance; 
  unsigned int TitleID; 
  unsigned int ExpiryDelta; 
  bdSocketRouter *SocketRouter; 
  unsigned __int64 UniversalId; 
  bdRemoteTask *m_ptr; 
  bdLobbyErrorCode ErrorCode; 
  XUID result; 
  char buffer[8]; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 

  v2 = s_instance_1;
  TransactionID = bdRemoteTask::getTransactionID(task->m_remoteDemonwareTask.m_ptr);
  Com_Printf(25, "[NET] Fetch relay auth token complete (transaction %zu)\n", TransactionID);
  if ( state )
  {
    m_ptr = task->m_remoteDemonwareTask.m_ptr;
    *(_QWORD *)buffer = 0i64;
    v15 = 0i64;
    v16 = 0i64;
    v17 = 0i64;
    v18 = 0i64;
    v19 = 0i64;
    v20 = 0i64;
    v21 = 0i64;
    ErrorCode = bdRemoteTask::getErrorCode(m_ptr);
    dwLobbyErrorCodeToString(ErrorCode, buffer, 0x40u);
    Com_PrintError(25, "[NET] Failed to fetch auth token: %s\n", buffer);
    v2->m_authTokenState = LONG;
  }
  else
  {
    Live_GetXuid(&result, task->m_controllerIndex);
    Instance = DWServicesAccess::GetInstance();
    TitleID = DWServicesAccess::GetTitleID(Instance);
    ExpiryDelta = bdClientAuthToken::getExpiryDelta((bdClientAuthToken *)(&v2->m_authToken.__vftable + 2));
    SocketRouter = dwGetSocketRouter();
    UniversalId = XUID::GetUniversalId(&result);
    bdSocketRouter::setClientAuthToken(SocketRouter, (const bdClientAuthToken *)(&v2->m_authToken.__vftable + 2), TitleID, UniversalId);
    v2->m_authTokenState = HALF_HALF;
    v2->m_authTokenExpiry = ExpiryDelta + Sys_Milliseconds() / 1000;
  }
}

/*
==============
NetRelay::CanStart
==============
*/
bool NetRelay::CanStart(NetRelay *this)
{
  return Com_FrontEnd_IsInFrontEnd() && !PartyAtomic_IsJoiningActive(&g_partyJoinInfo);
}

/*
==============
NetRelay::FenceCallback
==============
*/
void NetRelay::FenceCallback(int controllerIndex, bool value)
{
  if ( net_relay_enabled->current.enabled && !s_instance_1->m_config->relayDisabled && value && CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0) == controllerIndex && !dwRelayIsStarting() && !dwRelayIsStarted() )
    NetRelay::Request(s_instance_1);
}

/*
==============
NetRelay::FetchAuthToken
==============
*/
void NetRelay::FetchAuthToken(NetRelay *this, int controllerIndex)
{
  DWServicesAccess *Instance; 
  DWAsyncMatchMaking *AsyncMatchmaking; 
  TaskCreateRequest *RelayClientAuthToken; 
  bdRemoteTask *v7; 
  TaskManager *v8; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateResult pTaskCreateResult; 
  TaskCreateRequest pTaskCreateRequest; 
  bdReference<bdRemoteTask> result; 

  pTaskCreateRequest.m_appTaskType = -1;
  memset(&pTaskCreateRequest.m_appData, 0, 32);
  pTaskCreateRequest.m_onUpdateCallback = NULL;
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  Com_Printf(25, "[NET] Fetching client auth token\n");
  pTaskCreateRequest.m_onCompletionCallback = NetRelay::AuthTokenFetchedCallback;
  pTaskCreateRequest.m_controllerIndex = controllerIndex;
  Instance = DWServicesAccess::GetInstance();
  AsyncMatchmaking = DWServicesAccess::GetAsyncMatchmaking(Instance, controllerIndex);
  RelayClientAuthToken = (TaskCreateRequest *)DWAsyncMatchMaking::getRelayClientAuthToken(AsyncMatchmaking, &result, &this->m_authToken);
  if ( RelayClientAuthToken != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    v7 = *(bdRemoteTask **)&RelayClientAuthToken->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v7;
    if ( v7 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 1u);
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v8 = TaskManager::GetInstance(), TaskManager::CreateTask(v8, &pTaskCreateRequest, &pTaskCreateResult)) )
  {
    this->m_authTokenState = HALF;
  }
  else
  {
    Com_PrintError(25, "[NET] Failed to start fetch client auth token task\n");
    this->m_authTokenState = LONG;
  }
  pTaskCreateRequest.m_onCompletionCallback = NULL;
  pTaskCreateRequest.m_onUpdateCallback = NULL;
  pTaskCreateRequest.m_appSecondaryCallback = NULL;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  m_asyncInfo = pTaskCreateRequest.m_asyncInfo;
  if ( pTaskCreateRequest.m_asyncInfo )
  {
    pTaskCreateRequest.m_asyncInfo->__abi_Release(pTaskCreateRequest.m_asyncInfo);
    m_asyncInfo = NULL;
    pTaskCreateRequest.m_asyncInfo = NULL;
  }
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
      pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = NULL;
    }
    m_asyncInfo = pTaskCreateRequest.m_asyncInfo;
  }
  if ( m_asyncInfo )
    m_asyncInfo->__abi_Release(m_asyncInfo);
}

/*
==============
NetRelay::FetchAuthTokenCompleted
==============
*/
void NetRelay::FetchAuthTokenCompleted(NetRelay *this, GenericTask *task, eTaskManagerTaskState state)
{
  unsigned __int64 TransactionID; 
  DWServicesAccess *Instance; 
  unsigned int TitleID; 
  unsigned int ExpiryDelta; 
  bdSocketRouter *SocketRouter; 
  unsigned __int64 UniversalId; 
  bdRemoteTask *m_ptr; 
  bdLobbyErrorCode ErrorCode; 
  XUID result; 
  char buffer[8]; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 

  TransactionID = bdRemoteTask::getTransactionID(task->m_remoteDemonwareTask.m_ptr);
  Com_Printf(25, "[NET] Fetch relay auth token complete (transaction %zu)\n", TransactionID);
  if ( state )
  {
    m_ptr = task->m_remoteDemonwareTask.m_ptr;
    *(_QWORD *)buffer = 0i64;
    v16 = 0i64;
    v17 = 0i64;
    v18 = 0i64;
    v19 = 0i64;
    v20 = 0i64;
    v21 = 0i64;
    v22 = 0i64;
    ErrorCode = bdRemoteTask::getErrorCode(m_ptr);
    dwLobbyErrorCodeToString(ErrorCode, buffer, 0x40u);
    Com_PrintError(25, "[NET] Failed to fetch auth token: %s\n", buffer);
    this->m_authTokenState = LONG;
  }
  else
  {
    Live_GetXuid(&result, task->m_controllerIndex);
    Instance = DWServicesAccess::GetInstance();
    TitleID = DWServicesAccess::GetTitleID(Instance);
    ExpiryDelta = bdClientAuthToken::getExpiryDelta((bdClientAuthToken *)(&this->m_authToken.__vftable + 2));
    SocketRouter = dwGetSocketRouter();
    UniversalId = XUID::GetUniversalId(&result);
    bdSocketRouter::setClientAuthToken(SocketRouter, (const bdClientAuthToken *)(&this->m_authToken.__vftable + 2), TitleID, UniversalId);
    this->m_authTokenState = HALF_HALF;
    this->m_authTokenExpiry = ExpiryDelta + Sys_Milliseconds() / 1000;
  }
}

/*
==============
NetRelay::Frame
==============
*/
void NetRelay::Frame(NetRelay *this)
{
  volatile NetRelay::ConnectState m_connectState; 
  __int32 v3; 
  __int32 v4; 
  __int32 v5; 
  const char *RelayDatacenterBase64; 
  bdRelayAuthToken *RelayAuthToken; 
  bdRelayAuthToken *v8; 
  PartyData *PartyData; 
  const bdRelayAuthToken *v10; 

  m_connectState = this->m_connectState;
  if ( m_connectState )
  {
    v3 = m_connectState - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        v5 = v4 - 2;
        if ( v5 )
        {
          if ( v5 == 1 && !NetInit::IsLocalAddressUpdating(this->m_init) )
          {
            NET_EnterCriticalSection();
            dwRelayDisconnectExcess();
            NET_ExitCriticalSection();
            RelayDatacenterBase64 = Online_DcQos_GetRelayDatacenterBase64();
            Core_strcpy(this->m_datacenter, 0x59ui64, RelayDatacenterBase64);
            RelayAuthToken = (bdRelayAuthToken *)Online_DcQos_GetRelayAuthToken();
            this->m_id = bdRelayAuthToken::getRelayID(RelayAuthToken);
            this->m_connectState = JOINED_LOBBY|SEARCHING;
          }
        }
        else
        {
          NetInit::RelayConnected(this->m_init);
          this->m_connectState = ERRORING;
          if ( (!Online_DcQos_IsResultReady(DCQOS_RESULT_RELAY) || Online_DcQos_IsRequested()) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_relay.cpp", 281, ASSERT_TYPE_ASSERT, "(IsQosReady())", (const char *)&queryFormat, "IsQosReady()") )
            __debugbreak();
          v8 = (bdRelayAuthToken *)Online_DcQos_GetRelayAuthToken();
          if ( this->m_id != bdRelayAuthToken::getRelayID(v8) && OnlineMatchmakerOmniscient::IsMatchmaking(&OnlineMatchmakerOmniscient::ms_instance) && !OnlineMatchmakerOmniscient::IsShuttingDown(&OnlineMatchmakerOmniscient::ms_instance) )
          {
            PartyData = Lobby_GetPartyData();
            if ( (!PartyData->inParty || !Party_IsServerDedicated(PartyData)) && !Dvar_GetBool_Internal_DebugName(DVARBOOL_online_matchmaking_dedi_required, "online_matchmaking_dedi_required") )
              OnlineMatchmakerOmniscient::Shutdown(&OnlineMatchmakerOmniscient::ms_instance);
          }
        }
      }
      else if ( Com_FrontEnd_IsInFrontEnd() && !PartyAtomic_IsJoiningActive(&g_partyJoinInfo) && Online_DcQos_IsResultReady(DCQOS_RESULT_RELAY) && !Online_DcQos_IsRequested() && (unsigned int)(this->m_authTokenState - 2) <= 1 )
      {
        if ( (!Com_FrontEnd_IsInFrontEnd() || PartyAtomic_IsJoiningActive(&g_partyJoinInfo)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_relay.cpp", 66, ASSERT_TYPE_ASSERT, "(CanStart())", (const char *)&queryFormat, "CanStart()") )
          __debugbreak();
        dwRelayStop();
        this->m_connectState = IDLE;
        if ( Online_DcQos_IsResultValid(DCQOS_RESULT_RELAY) && this->m_authTokenState == HALF_HALF )
        {
          Com_Printf(25, "[NET] Starting relay connect\n");
          this->m_connectState = QOSING;
          NET_EnterCriticalSection();
          v10 = Online_DcQos_GetRelayAuthToken();
          dwRelayStart(v10, this);
          NET_ExitCriticalSection();
        }
        else
        {
          dwRelaySetError(DW_NET_ERROR_NO_RELAY_SERVER);
          RetryTimer::Start(&this->m_retryTimer, MODE_BACKOFF);
          this->m_connectState = IDLE;
        }
      }
    }
    else
    {
      NetInit::RelayDisconnected(this->m_init);
      this->m_connectState = IDLE;
      this->m_id = 0i64;
    }
  }
  else if ( Com_FrontEnd_IsInFrontEnd() && !PartyAtomic_IsJoiningActive(&g_partyJoinInfo) && RetryTimer::IsExpired(&this->m_retryTimer) )
  {
    NetRelay::Request(this);
  }
}

/*
==============
NetRelay::GetDatacenter
==============
*/
char *NetRelay::GetDatacenter(NetRelay *this)
{
  return this->m_datacenter;
}

/*
==============
NetRelay::GetRetailDebug
==============
*/
void NetRelay::GetRetailDebug(NetRelay *this, char *destString, const int maxLength)
{
  unsigned __int64 v5; 
  int v7; 
  bdSocketRouter *SocketRouter; 
  char *m_datacenter; 
  __int64 v12; 
  bdCommonAddr *m_ptr; 
  bdAddr *RelayAddr; 
  unsigned __int64 RelayID; 
  const char *v16; 
  int v17; 
  int v18; 
  char dest[8]; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  char str[24]; 

  v5 = maxLength;
  if ( !net_relay_enabled->current.enabled || this->m_config->relayDisabled )
  {
    I_strcat_truncate(destString, maxLength, "UDP Relay Disabled\n");
  }
  else if ( NET_IsLocalAddressResolved() )
  {
    v7 = (this->m_authTokenExpiry - Sys_Milliseconds() / 1000) / 60;
    SocketRouter = dwGetSocketRouter();
    *(double *)&_XMM0 = ((double (__fastcall *)(bdSocketRouter *))SocketRouter->getRelayPing)(SocketRouter);
    m_datacenter = this->m_datacenter;
    __asm
    {
      vmulss  xmm1, xmm0, cs:__real@447a0000
      vcvttss2si r14d, xmm1
    }
    *(_QWORD *)dest = 0i64;
    v12 = -1i64;
    v20 = 0i64;
    v21 = 0i64;
    v22 = 0i64;
    v23 = 0i64;
    v24 = 0i64;
    v25 = 0i64;
    v26 = 0i64;
    do
      ++v12;
    while ( m_datacenter[v12] );
    bdBase64::decode(m_datacenter, v12, dest, 0x40u);
    m_ptr = NET_GetLocalCommonAddr()->m_ptr;
    RelayAddr = (bdAddr *)bdRelayJoinData::getRelayAddr(&m_ptr->m_joinData);
    bdAddr::toString(RelayAddr, str, 0x16ui64);
    RelayID = bdRelayJoinData::getRelayID(&m_ptr->m_joinData);
    v18 = _ER14;
    v17 = v7;
    v16 = j_va("\nUDP Relay: %s, id: %zu, %s, %imin, %ims", str, RelayID, dest, v17, v18);
    I_strcat_truncate(destString, v5, v16);
  }
}

/*
==============
NetRelay::IsAuthTokenReady
==============
*/
bool NetRelay::IsAuthTokenReady(NetRelay *this)
{
  return (unsigned int)(this->m_authTokenState - 2) <= 1;
}

/*
==============
NetRelay::IsEnabled
==============
*/
bool NetRelay::IsEnabled(NetRelay *this)
{
  return net_relay_enabled->current.enabled && !this->m_config->relayDisabled;
}

/*
==============
NetRelay::IsIdle
==============
*/
bool NetRelay::IsIdle(NetRelay *this)
{
  return !dwRelayIsStarting() && !dwRelayIsStarted();
}

/*
==============
NetRelay::IsQosReady
==============
*/
bool NetRelay::IsQosReady(NetRelay *this)
{
  return Online_DcQos_IsResultReady(DCQOS_RESULT_RELAY) && !Online_DcQos_IsRequested();
}

/*
==============
NetRelay::IsStarted
==============
*/
bool NetRelay::IsStarted(NetRelay *this)
{
  bool result; 

  if ( !net_relay_enabled->current.enabled )
    return 1;
  if ( this->m_config->relayDisabled )
    return 1;
  if ( this->m_connectState == (JOINED_LOBBY|SEARCHING) )
    return 1;
  result = dwRelayIsFailed();
  if ( result )
    return 1;
  return result;
}

/*
==============
NetRelay::RelayConnected
==============
*/
void NetRelay::RelayConnected(NetRelay *this)
{
  if ( !NetRelay::IsEnabled(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_relay.cpp", 333, ASSERT_TYPE_ASSERT, "(IsEnabled())", (const char *)&queryFormat, "IsEnabled()") )
    __debugbreak();
  RetryTimer::Reset(&this->m_retryTimer);
  this->m_connectState = JOINED_LOBBY;
}

/*
==============
NetRelay::RelayDisconnected
==============
*/
void NetRelay::RelayDisconnected(NetRelay *this, DWNetError error)
{
  if ( !NetRelay::IsEnabled(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_relay.cpp", 343, ASSERT_TYPE_ASSERT, "(IsEnabled())", (const char *)&queryFormat, "IsEnabled()") )
    __debugbreak();
  memset_0(this->m_datacenter, 0, sizeof(this->m_datacenter));
  RetryTimer::Start(&this->m_retryTimer, MODE_BACKOFF);
  this->m_connectState = IDLE;
  if ( error != DW_NET_ERROR_RELAY_DISCONNECTED || !Com_FrontEnd_IsInFrontEnd() || PartyAtomic_IsJoiningActive(&g_partyJoinInfo) )
    this->m_connectState = INITIALIZING;
}

/*
==============
NetRelay::Request
==============
*/
void NetRelay::Request(NetRelay *this)
{
  NetRelay::AuthTokenState m_authTokenState; 
  bool v3; 
  bool v4; 
  int ControllerFromClient; 

  Com_Printf(25, "[NET] Requesting relay connect\n");
  RetryTimer::Stop(&this->m_retryTimer);
  dwRelaySetError(DW_NET_ERROR_NONE);
  Online_DcQos_Request(1u, 0);
  m_authTokenState = this->m_authTokenState;
  v3 = m_authTokenState == NONE || m_authTokenState == LONG;
  v4 = m_authTokenState == HALF_HALF && Sys_Milliseconds() / 1000 - this->m_authTokenExpiry > 0;
  if ( v3 || v4 )
  {
    ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
    NetRelay::FetchAuthToken(this, ControllerFromClient);
  }
  this->m_connectState = SEARCHING;
}

/*
==============
NetRelay::Reset
==============
*/
void NetRelay::Reset(NetRelay *this, const NetConfig *config)
{
  __int64 v4; 
  __int64 v5; 
  RetryTimer::Config configa; 
  __int64 v7; 
  bdClientAuthTokenResult v8; 

  v7 = -2i64;
  if ( !this->m_registered )
  {
    FenceManager_RegisterForFenceDependenciesUpdatesForAllControllers(FENCE_RELAY, NetRelay::FenceCallback);
    this->m_registered = 1;
  }
  dwRelayStop();
  this->m_connectState = IDLE;
  this->m_datacenter[0] = 0;
  this->m_id = 0i64;
  bdClientAuthTokenResult::bdClientAuthTokenResult(&v8);
  v5 = v4;
  bdReferencable::operator=((bdReferencable *)((char *)&this->m_authToken.__vftable + *(int *)(*((_QWORD *)&this->m_authToken.__vftable + 1) + 4i64) + 8), (const bdReferencable *)(*(int *)(*(_QWORD *)(v4 + 8) + 4i64) + v4 + 8));
  (*(void (__fastcall **)(bdClientAuthTokenResult_vtbl **, __int64))(*((_QWORD *)&this->m_authToken.__vftable + 2) + 16i64))(&this->m_authToken.__vftable + 2, v5 + 16);
  bdClientAuthToken::~bdClientAuthToken((bdClientAuthToken *)(&v8.__vftable + 2));
  bdTaskResult::~bdTaskResult((bdTaskResult *)(&v8.__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)v8.gap68);
  *(_QWORD *)&this->m_authTokenState = 0i64;
  this->m_config = config;
  configa.refreshDelay = NULL;
  configa.backoffDelay = DVARINT_dedi_relay_backoff_delay;
  configa.maxBackoffDelay = DVARINT_dedi_relay_max_backoff_delay;
  *(_WORD *)&configa.initialMode = 256;
  RetryTimer::Init(&this->m_retryTimer, &configa);
}

/*
==============
NetRelay::Retry
==============
*/
void NetRelay::Retry(NetRelay *this)
{
  RetryTimer::Start(&this->m_retryTimer, MODE_BACKOFF);
  this->m_connectState = IDLE;
}

/*
==============
NetRelay::ShouldFetchAuthToken
==============
*/
bool NetRelay::ShouldFetchAuthToken(NetRelay *this)
{
  NetRelay::AuthTokenState m_authTokenState; 
  bool v2; 
  bool result; 

  m_authTokenState = this->m_authTokenState;
  v2 = m_authTokenState == NONE || m_authTokenState == LONG;
  result = m_authTokenState == HALF_HALF && Sys_Milliseconds() / 1000 - this->m_authTokenExpiry > 0;
  if ( v2 || result )
    return 1;
  return result;
}

/*
==============
NetRelay::ShouldShutdownMatchmaking
==============
*/
bool NetRelay::ShouldShutdownMatchmaking(NetRelay *this)
{
  bdRelayAuthToken *RelayAuthToken; 
  PartyData *PartyData; 
  bool result; 

  if ( (!Online_DcQos_IsResultReady(DCQOS_RESULT_RELAY) || Online_DcQos_IsRequested()) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_relay.cpp", 281, ASSERT_TYPE_ASSERT, "(IsQosReady())", (const char *)&queryFormat, "IsQosReady()") )
    __debugbreak();
  RelayAuthToken = (bdRelayAuthToken *)Online_DcQos_GetRelayAuthToken();
  result = this->m_id != bdRelayAuthToken::getRelayID(RelayAuthToken) && OnlineMatchmakerOmniscient::IsMatchmaking(&OnlineMatchmakerOmniscient::ms_instance) && !OnlineMatchmakerOmniscient::IsShuttingDown(&OnlineMatchmakerOmniscient::ms_instance) && ((PartyData = Lobby_GetPartyData(), !PartyData->inParty) || !Party_IsServerDedicated(PartyData)) && !Dvar_GetBool_Internal_DebugName(DVARBOOL_online_matchmaking_dedi_required, "online_matchmaking_dedi_required");
  return result;
}

/*
==============
NetRelay::Start
==============
*/
void NetRelay::Start(NetRelay *this)
{
  const bdRelayAuthToken *RelayAuthToken; 

  if ( (!Com_FrontEnd_IsInFrontEnd() || PartyAtomic_IsJoiningActive(&g_partyJoinInfo)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_relay.cpp", 66, ASSERT_TYPE_ASSERT, "(CanStart())", (const char *)&queryFormat, "CanStart()") )
    __debugbreak();
  dwRelayStop();
  this->m_connectState = IDLE;
  if ( Online_DcQos_IsResultValid(DCQOS_RESULT_RELAY) && this->m_authTokenState == HALF_HALF )
  {
    Com_Printf(25, "[NET] Starting relay connect\n");
    this->m_connectState = QOSING;
    NET_EnterCriticalSection();
    RelayAuthToken = Online_DcQos_GetRelayAuthToken();
    dwRelayStart(RelayAuthToken, this);
    NET_ExitCriticalSection();
  }
  else
  {
    dwRelaySetError(DW_NET_ERROR_NO_RELAY_SERVER);
    RetryTimer::Start(&this->m_retryTimer, MODE_BACKOFF);
    this->m_connectState = IDLE;
  }
}

/*
==============
NetRelay::Stop
==============
*/
void NetRelay::Stop(NetRelay *this)
{
  dwRelayStop();
  this->m_connectState = IDLE;
}

/*
==============
NetRelayOverride::handleMigrate
==============
*/
void NetRelayOverride::handleMigrate(NetRelayOverride *this, const bdAddr *relayAddr)
{
  if ( net_relay_enabled->current.enabled && !this->m_relay->m_config->relayDisabled )
  {
    Com_Printf(25, "[NET] Relay migration requested\n");
    NetRelay::Request(this->m_relay);
  }
}

/*
==============
NetRelayOverride::onRelayAssociationError
==============
*/
void NetRelayOverride::onRelayAssociationError(NetRelayOverride *this)
{
  if ( net_relay_enabled->current.enabled && !this->m_relay->m_config->relayDisabled )
    Com_Printf(25, "[NET] Bound association failed - disconnection should ensue\n");
}

/*
==============
NetRelayOverride::onRelayUpgradeFailure
==============
*/
void NetRelayOverride::onRelayUpgradeFailure(NetRelayOverride *this)
{
  if ( net_relay_enabled->current.enabled && !this->m_relay->m_config->relayDisabled )
    Com_Printf(25, "[NET] Relay upgrade failed\n");
}

/*
==============
NetRelayOverride::onRelayUpgradeSuccess
==============
*/
void NetRelayOverride::onRelayUpgradeSuccess(NetRelayOverride *this)
{
  if ( net_relay_enabled->current.enabled && !this->m_relay->m_config->relayDisabled )
  {
    Com_Printf(25, "[NET] Relay upgrade successful\n");
    if ( !dwRelayIsStarting() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\net_relay.cpp", 498, ASSERT_TYPE_ASSERT, "(dwRelayIsStarting())", "%s\n\tRelay bound occurred outside our explicit request - local common address mismatch will ensue!", "dwRelayIsStarting()") )
      __debugbreak();
  }
}

/*
==============
NetRelayOverride::shouldUseRelay
==============
*/
bool NetRelayOverride::shouldUseRelay(NetRelayOverride *this, bdReference<bdCommonAddr> local, bdReference<bdCommonAddr> remote, bool initialResult)
{
  int v7; 
  bdAddr *RelayAddr; 

  if ( net_relay_enabled->current.enabled && !this->m_relay->m_config->relayDisabled && (v7 = HIDWORD(remote.m_ptr->__vftable[118].~bdReferencable)) != 0 )
  {
    if ( v7 == 1 || initialResult && (RelayAddr = (bdAddr *)bdRelayJoinData::getRelayAddr((bdRelayJoinData *)&remote.m_ptr->__vftable[119]), !bdAddr::isValid(RelayAddr)) && net_relay_direct_fallback_enabled->current.enabled || Live_IsInSystemlinkLobby() && Dvar_GetBool_Internal_DebugName(DVARBOOL_online_lan_cross_play, "online_lan_cross_play") )
    {
      bdReference<bdCommonAddr>::~bdReference<bdCommonAddr>((bdReference<bdCommonAddr> *)local.m_ptr);
      bdReference<bdCommonAddr>::~bdReference<bdCommonAddr>((bdReference<bdCommonAddr> *)remote.m_ptr);
      return 0;
    }
    else
    {
      bdReference<bdCommonAddr>::~bdReference<bdCommonAddr>((bdReference<bdCommonAddr> *)local.m_ptr);
      bdReference<bdCommonAddr>::~bdReference<bdCommonAddr>((bdReference<bdCommonAddr> *)remote.m_ptr);
      return initialResult;
    }
  }
  else
  {
    if ( local.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&local.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
    {
      if ( local.m_ptr->__vftable )
        (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))local.m_ptr->~bdReferencable)(local.m_ptr->__vftable, 1i64);
      local.m_ptr->__vftable = NULL;
    }
    if ( remote.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&remote.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
    {
      if ( remote.m_ptr->__vftable )
        (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))remote.m_ptr->~bdReferencable)(remote.m_ptr->__vftable, 1i64);
      remote.m_ptr->__vftable = NULL;
    }
    return 0;
  }
}

/*
==============
NetRelayOverride::shouldUseRelayIfNatTravFails
==============
*/
bool NetRelayOverride::shouldUseRelayIfNatTravFails(NetRelayOverride *this, bdReference<bdCommonAddr> local, bdReference<bdCommonAddr> remote, __int64 initialResult)
{
  bool (__fastcall *shouldUseRelay)(bdSocketRouterRelayManager *, bdReference<bdCommonAddr>, bdReference<bdCommonAddr>, bool); 
  bdCommonAddr_vtbl *v8; 
  bdCommonAddr_vtbl *v9; 
  bool enabled; 
  __int64 v12[5]; 
  bdCommonAddr_vtbl *v13; 
  bdCommonAddr *v14; 
  bdCommonAddr *m_ptr; 

  m_ptr = remote.m_ptr;
  v14 = local.m_ptr;
  v12[1] = -2i64;
  shouldUseRelay = this->shouldUseRelay;
  v8 = remote.m_ptr->__vftable;
  v13 = v8;
  if ( v8 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v8[1], 1u);
  v9 = local.m_ptr->__vftable;
  v12[0] = (__int64)v9;
  if ( v9 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v9[1], 1u);
  if ( ((unsigned __int8 (__fastcall *)(NetRelayOverride *, __int64 *, bdCommonAddr_vtbl **, __int64))shouldUseRelay)(this, v12, &v13, initialResult) )
  {
    enabled = net_relay_nat_fallback_enabled->current.enabled;
    if ( local.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&local.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
    {
      if ( local.m_ptr->__vftable )
        (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))local.m_ptr->~bdReferencable)(local.m_ptr->__vftable, 1i64);
      local.m_ptr->__vftable = NULL;
    }
    if ( remote.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&remote.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
    {
      if ( remote.m_ptr->__vftable )
        (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))remote.m_ptr->~bdReferencable)(remote.m_ptr->__vftable, 1i64);
      remote.m_ptr->__vftable = NULL;
    }
    return enabled;
  }
  else
  {
    if ( local.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&local.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
    {
      if ( local.m_ptr->__vftable )
        (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))local.m_ptr->~bdReferencable)(local.m_ptr->__vftable, 1i64);
      local.m_ptr->__vftable = NULL;
    }
    if ( remote.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&remote.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
    {
      if ( remote.m_ptr->__vftable )
        (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))remote.m_ptr->~bdReferencable)(remote.m_ptr->__vftable, 1i64);
      remote.m_ptr->__vftable = NULL;
    }
    return 0;
  }
}

