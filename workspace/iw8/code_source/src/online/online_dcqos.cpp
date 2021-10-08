/*
==============
Online_DcQos_IsResultValid
==============
*/

bool __fastcall Online_DcQos_IsResultValid(DcQosResult resultType)
{
  return ?Online_DcQos_IsResultValid@@YA_NW4DcQosResult@@@Z(resultType);
}

/*
==============
Online_DcQos_GetBuildName
==============
*/

const char *__fastcall Online_DcQos_GetBuildName()
{
  return ?Online_DcQos_GetBuildName@@YAPEBDXZ();
}

/*
==============
Online_DcQos_GetRetailDebug
==============
*/

void __fastcall Online_DcQos_GetRetailDebug(char *destString, const int maxLength)
{
  ?Online_DcQos_GetRetailDebug@@YAXPEADH@Z(destString, maxLength);
}

/*
==============
Online_DcQos_IsComplete
==============
*/

bool __fastcall Online_DcQos_IsComplete()
{
  return ?Online_DcQos_IsComplete@@YA_NXZ();
}

/*
==============
Online_DcQos_GetBestDatacenterName
==============
*/

bool __fastcall Online_DcQos_GetBestDatacenterName(char *destString, const int maxLength)
{
  return ?Online_DcQos_GetBestDatacenterName@@YA_NPEADH@Z(destString, maxLength);
}

/*
==============
Online_DcQos_Request
==============
*/

void __fastcall Online_DcQos_Request(unsigned int resultsMask, const bool reqos)
{
  ?Online_DcQos_Request@@YAXI_N@Z(resultsMask, reqos);
}

/*
==============
Online_DcQos_IsResultRequested
==============
*/

bool __fastcall Online_DcQos_IsResultRequested(DcQosResult resultType)
{
  return ?Online_DcQos_IsResultRequested@@YA_NW4DcQosResult@@@Z(resultType);
}

/*
==============
Online_DcQos_Start
==============
*/

void __fastcall Online_DcQos_Start(int controllerIndex)
{
  ?Online_DcQos_Start@@YAXH@Z(controllerIndex);
}

/*
==============
Online_DcQos_IsFailed
==============
*/

bool __fastcall Online_DcQos_IsFailed()
{
  return ?Online_DcQos_IsFailed@@YA_NXZ();
}

/*
==============
Online_DcQos_Init
==============
*/

void Online_DcQos_Init(void)
{
  ?Online_DcQos_Init@@YAXXZ();
}

/*
==============
Online_DcQos_IsInProgress
==============
*/

bool __fastcall Online_DcQos_IsInProgress()
{
  return ?Online_DcQos_IsInProgress@@YA_NXZ();
}

/*
==============
Online_DcQos_GetDatacenterCount
==============
*/

int __fastcall Online_DcQos_GetDatacenterCount()
{
  return ?Online_DcQos_GetDatacenterCount@@YAHXZ();
}

/*
==============
Online_DcQos_GetRelayDatacenterBase64
==============
*/

const char *__fastcall Online_DcQos_GetRelayDatacenterBase64()
{
  return ?Online_DcQos_GetRelayDatacenterBase64@@YAPEBDXZ();
}

/*
==============
Online_DcQos_IsResultReady
==============
*/

bool __fastcall Online_DcQos_IsResultReady(DcQosResult resultType)
{
  return ?Online_DcQos_IsResultReady@@YA_NW4DcQosResult@@@Z(resultType);
}

/*
==============
Online_DcQos_GetRelayName
==============
*/

const char *__fastcall Online_DcQos_GetRelayName()
{
  return ?Online_DcQos_GetRelayName@@YAPEBDXZ();
}

/*
==============
Online_DcQos_IsRequested
==============
*/

bool __fastcall Online_DcQos_IsRequested()
{
  return ?Online_DcQos_IsRequested@@YA_NXZ();
}

/*
==============
Online_DcQos_GetRelayAuthToken
==============
*/

const bdRelayAuthToken *__fastcall Online_DcQos_GetRelayAuthToken()
{
  return ?Online_DcQos_GetRelayAuthToken@@YAAEBVbdRelayAuthToken@@XZ();
}

/*
==============
Online_DcQos_Frame
==============
*/

void Online_DcQos_Frame(void)
{
  ?Online_DcQos_Frame@@YAXXZ();
}

/*
==============
Online_DcQos_GetBuildContext
==============
*/

const char *__fastcall Online_DcQos_GetBuildContext()
{
  return ?Online_DcQos_GetBuildContext@@YAPEBDXZ();
}

/*
==============
Online_DcQos_CanQos
==============
*/
bool Online_DcQos_CanQos()
{
  const PartyData *PartyData; 
  const dvar_t *v1; 
  bool enabled; 
  const PartyData *v3; 
  bool v4; 

  if ( !Com_FrontEnd_IsInFrontEnd() )
    return 0;
  if ( g_partyData.inParty )
  {
    if ( !Party_AreWeHost(&g_partyData) && Lobby_IsInLobby() )
    {
      PartyData = Lobby_GetPartyData();
      if ( !Party_IsPrivateOrSystemlinkGame(PartyData) )
        return 0;
    }
  }
  if ( OnlineMatchmakerOmniscient::IsMatchmaking(&OnlineMatchmakerOmniscient::ms_instance) )
    return 0;
  v1 = DVARBOOL_online_qos_allow_in_private_match_lobby;
  if ( !DVARBOOL_online_qos_allow_in_private_match_lobby && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_qos_allow_in_private_match_lobby") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  enabled = v1->current.enabled;
  v4 = 0;
  if ( Lobby_IsInLobby() )
  {
    v3 = Lobby_GetPartyData();
    if ( Party_IsPrivateOrSystemlinkGame(v3) )
      v4 = 1;
  }
  return (enabled || !v4) && !OnlineTournament_IsActive();
}

/*
==============
Online_DcQos_CanStart
==============
*/
bool Online_DcQos_CanStart()
{
  unsigned int resultRequests; 
  DcQosResultState *resultStates; 
  signed int v2; 
  const PartyData *v3; 
  const dvar_t *v4; 
  bool enabled; 
  const PartyData *PartyData; 
  bool v7; 

  if ( s_dcqos.state != INITIALIZING )
  {
    resultRequests = s_dcqos.resultRequests;
    resultStates = s_dcqos.resultStates;
    v2 = 0;
    while ( !_bittest((const int *)&resultRequests, v2) || *resultStates != HALF_HALF )
    {
      ++v2;
      ++resultStates;
      if ( v2 >= 2 )
      {
        if ( !s_dcqos.qosRequested )
          return 1;
        if ( Com_FrontEnd_IsInFrontEnd() )
        {
          if ( !g_partyData.inParty || Party_AreWeHost(&g_partyData) || !Lobby_IsInLobby() || (v3 = Lobby_GetPartyData(), Party_IsPrivateOrSystemlinkGame(v3)) )
          {
            if ( !OnlineMatchmakerOmniscient::IsMatchmaking(&OnlineMatchmakerOmniscient::ms_instance) )
            {
              v4 = DVARBOOL_online_qos_allow_in_private_match_lobby;
              if ( !DVARBOOL_online_qos_allow_in_private_match_lobby && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_qos_allow_in_private_match_lobby") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v4);
              enabled = v4->current.enabled;
              v7 = 0;
              if ( Lobby_IsInLobby() )
              {
                PartyData = Lobby_GetPartyData();
                if ( Party_IsPrivateOrSystemlinkGame(PartyData) )
                  v7 = 1;
              }
              if ( enabled || !v7 )
                return !OnlineTournament_IsActive();
            }
          }
        }
        return 0;
      }
    }
  }
  return 0;
}

/*
==============
Online_DcQos_Fail
==============
*/
void Online_DcQos_Fail(const char *message, const char *counterName, const bdReference<bdRemoteTask> *remoteTask)
{
  bdRemoteTask *m_ptr; 
  bdLobbyErrorCode ErrorCode; 
  unsigned __int64 TransactionID; 
  OnlineTimeSeriesLog *v9; 
  int v10; 
  __int64 buffer[8]; 

  m_ptr = remoteTask->m_ptr;
  if ( remoteTask->m_ptr )
  {
    memset(buffer, 0, sizeof(buffer));
    ErrorCode = bdRemoteTask::getErrorCode(m_ptr);
    dwLobbyErrorCodeToString(ErrorCode, (char *const)buffer, 0x40u);
    TransactionID = bdRemoteTask::getTransactionID(remoteTask->m_ptr);
    Com_PrintError(25, "[NET] Datacenter qos failed with: %s (error %s, transaction %zu)\n", message, (const char *)buffer, TransactionID);
  }
  else
  {
    Com_PrintError(25, "[NET] Datacenter qos failed with error: %s\n", message);
  }
  s_dcqos.state = QOSING;
  s_dcqos.duration = (Sys_Milliseconds() - s_dcqos.startTime) / 1000;
  Online_DcQos_SetResultState(DCQOS_RESULT_RELAY, LONG_LONG);
  Online_DcQos_SetResultState(DCQOS_RESULT_DATACENTERS, LONG_LONG);
  v9 = OnlineTimeSeriesLog::Get();
  OnlineTimeSeriesLog::WriteEventCounter(v9, counterName, 1u);
  v10 = Sys_Milliseconds();
  Online_Backoff::ReportFailure(&s_dcqos.backoff, v10);
}

/*
==============
Online_DcQos_FenceDependenciesUpdated
==============
*/
void Online_DcQos_FenceDependenciesUpdated(int controllerIndex, bool value)
{
  TaskManager *Instance; 
  int ControllerFromClient; 

  if ( !value && s_dcqos.state && s_dcqos.controllerIndex == controllerIndex )
  {
    Com_Printf(25, "[NET] Datacenter qos canceled\n");
    if ( s_dcqos.state == INITIALIZING )
    {
      Instance = TaskManager::GetInstance();
      TaskManager::CancelTaskById(Instance, s_dcqos.taskId);
      Qos::CancelProbes(&s_dcqos.qos);
    }
    s_dcqos.state = IDLE;
    *(_QWORD *)s_dcqos.resultStates = 0i64;
    s_dcqos.requested = 0;
    Online_Backoff::Reset(&s_dcqos.backoff);
    ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
    if ( ControllerFromClient != controllerIndex && FenceManager_AreDependenciesMet(ControllerFromClient, FENCE_DCQOS) )
    {
      *(_WORD *)&s_dcqos.requested = 257;
      s_dcqos.resultRequests = 2;
    }
  }
}

/*
==============
Online_DcQos_FetchDatacenters
==============
*/
__int64 Online_DcQos_FetchDatacenters()
{
  XUID *Xuid; 
  DWServicesAccess *Instance; 
  DWAsyncMatchMaking *AsyncMatchmaking; 
  TaskCreateRequest *DataCenterPreferences; 
  bdRemoteTask *v4; 
  TaskManager *v5; 
  DcQosResultState v6; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  __int64 m_ptr; 
  signed __int32 v9; 
  TaskCreateRequest pTaskCreateRequest; 
  bdReference<bdRemoteTask> v11; 
  TaskCreateResult pTaskCreateResult; 
  __int64 v13; 
  XUID result; 
  unsigned __int64 userIDs[200]; 

  v13 = -2i64;
  pTaskCreateRequest.m_appTaskType = -1;
  memset(&pTaskCreateRequest.m_appData, 0, 32);
  pTaskCreateRequest.m_onUpdateCallback = NULL;
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  Xuid = Live_GetXuid(&result, s_dcqos.controllerIndex);
  userIDs[0] = XUID::GetUniversalId(Xuid);
  pTaskCreateRequest.m_onCompletionCallback = Online_DcQos_FetchDatacentersComplete;
  pTaskCreateRequest.m_controllerIndex = s_dcqos.controllerIndex;
  Instance = DWServicesAccess::GetInstance();
  AsyncMatchmaking = DWServicesAccess::GetAsyncMatchmaking(Instance, s_dcqos.controllerIndex);
  DataCenterPreferences = (TaskCreateRequest *)DWAsyncMatchMaking::getDataCenterPreferences(AsyncMatchmaking, &v11, userIDs, 1u, &s_dcqos.m_datacenters);
  if ( DataCenterPreferences != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    v4 = *(bdRemoteTask **)&DataCenterPreferences->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v4;
    if ( v4 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 1u);
  }
  if ( v11.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v11.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v11.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))v11.m_ptr->~bdReferencable)(v11.m_ptr, 1i64);
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v5 = TaskManager::GetInstance(), TaskManager::CreateTask(v5, &pTaskCreateRequest, &pTaskCreateResult)) )
  {
    Com_Printf(25, "[NET] Fetching datacenters\n");
    v6 = HALF_HALF;
  }
  else
  {
    Com_PrintError(25, "[NET] Failed to start fetch datacenters task\n");
    v6 = LONG_LONG;
  }
  Online_DcQos_SetResultState(DCQOS_RESULT_DATACENTERS, v6);
  s_dcqos.taskId = pTaskCreateResult.m_localTaskId;
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
  m_ptr = (__int64)pTaskCreateRequest.m_remoteDemonwareTask.m_ptr;
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
  {
    v9 = _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF);
    m_ptr = (unsigned int)(v9 - 1);
    if ( v9 == 1 )
    {
      if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
        m_ptr = ((__int64 (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
      pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = NULL;
    }
    m_asyncInfo = pTaskCreateRequest.m_asyncInfo;
  }
  if ( m_asyncInfo )
    return ((__int64 (__fastcall *)(Windows::Foundation::IAsyncInfo *))m_asyncInfo->__abi_Release)(m_asyncInfo);
  return m_ptr;
}

/*
==============
Online_DcQos_FetchDatacentersComplete
==============
*/
void Online_DcQos_FetchDatacentersComplete(GenericTask *task, eTaskManagerTaskState state)
{
  unsigned __int64 TransactionID; 

  if ( state )
  {
    Com_PrintError(25, "[NET] Failed to fetch datacenter prefs, will retry with backoff\n");
    Online_DcQos_SetResultState(DCQOS_RESULT_DATACENTERS, LONG_LONG);
  }
  else
  {
    TransactionID = bdRemoteTask::getTransactionID(task->m_remoteDemonwareTask.m_ptr);
    Com_Printf(25, "[NET] Fetch datacenters complete (transaction %zu)\n", TransactionID);
    if ( s_dcqos.m_datacenters.m_numDataCenterPreferences || !s_dcqos.qosProbeInfo.m_size )
    {
      Online_DcQos_SetResultState(DCQOS_RESULT_DATACENTERS, LONG);
    }
    else
    {
      Com_Printf(25, "[NET] Fetched zero datacenters (requested to probe %i) will consider this a failure and retry with backoff\n", s_dcqos.qosProbeInfo.m_size);
      Online_DcQos_SetResultState(DCQOS_RESULT_DATACENTERS, LONG_LONG);
    }
  }
  Online_DcQos_TryFinalizeResults();
}

/*
==============
Online_DcQos_FetchRelayServer
==============
*/
__int64 Online_DcQos_FetchRelayServer()
{
  const dvar_t *v0; 
  const char *string; 
  const dvar_t *v2; 
  const char *v3; 
  DWServicesAccess *Instance; 
  const char *EnvironmentString; 
  char v6; 
  char *v7; 
  signed __int64 v8; 
  char v9; 
  const char *v10; 
  DWServicesAccess *v11; 
  DWAsyncMatchMaking *AsyncMatchmaking; 
  TaskCreateRequest *PreferredServerDetails; 
  bdRemoteTask *v14; 
  TaskManager *v15; 
  DcQosResultState v16; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  __int64 m_ptr; 
  signed __int32 v19; 
  TaskCreateRequest pTaskCreateRequest; 
  bdReference<bdRemoteTask> result; 
  TaskCreateResult pTaskCreateResult; 
  __int64 v23; 
  char v24[1024]; 

  v23 = -2i64;
  *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
  memset(&pTaskCreateRequest.m_appData, 0, 48);
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  v0 = DVARSTR_dedi_relay_build_config;
  if ( !DVARSTR_dedi_relay_build_config && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dedi_relay_build_config") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  string = v0->current.string;
  v2 = DVARSTR_dedi_relay_build_version;
  if ( !DVARSTR_dedi_relay_build_version && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dedi_relay_build_version") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  v3 = v2->current.string;
  Instance = DWServicesAccess::GetInstance();
  EnvironmentString = DWServicesAccess::GetEnvironmentString(Instance);
  v6 = *EnvironmentString;
  v24[0] = *EnvironmentString + ((unsigned int)(*EnvironmentString - 65) < 0x1A ? 0x20 : 0);
  if ( v6 )
  {
    v7 = v24;
    v8 = EnvironmentString - v24;
    do
    {
      ++v7;
      v9 = v7[v8];
      *v7 = v9 + ((unsigned int)(v9 - 65) < 0x1A ? 0x20 : 0);
    }
    while ( v9 );
  }
  v10 = j_va("iw8_udprelay-all-%s-%s-%s", string, v24, v3);
  pTaskCreateRequest.m_onCompletionCallback = Online_DcQos_FetchRelayServerComplete;
  pTaskCreateRequest.m_controllerIndex = s_dcqos.controllerIndex;
  v11 = DWServicesAccess::GetInstance();
  AsyncMatchmaking = DWServicesAccess::GetAsyncMatchmaking(v11, s_dcqos.controllerIndex);
  PreferredServerDetails = (TaskCreateRequest *)DWAsyncMatchMaking::getPreferredServerDetails(AsyncMatchmaking, &result, v10, "udprelay", &s_dcqos.result);
  if ( PreferredServerDetails != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
    v14 = *(bdRemoteTask **)&PreferredServerDetails->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v14;
    if ( v14 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v14->m_refCount, 1u);
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v15 = TaskManager::GetInstance(), TaskManager::CreateTask(v15, &pTaskCreateRequest, &pTaskCreateResult)) )
  {
    Com_Printf(25, "[NET] Fetching relay servers for build %s\n", v10);
    v16 = HALF_HALF;
  }
  else
  {
    Com_PrintError(25, "[NET] Failed to start fetch relay server task\n");
    v16 = LONG_LONG;
  }
  Online_DcQos_SetResultState(DCQOS_RESULT_RELAY, v16);
  s_dcqos.taskId = pTaskCreateResult.m_localTaskId;
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
  m_ptr = (__int64)pTaskCreateRequest.m_remoteDemonwareTask.m_ptr;
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
  {
    v19 = _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF);
    m_ptr = (unsigned int)(v19 - 1);
    if ( v19 == 1 )
    {
      if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
        m_ptr = ((__int64 (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
      pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = NULL;
    }
    m_asyncInfo = pTaskCreateRequest.m_asyncInfo;
  }
  if ( m_asyncInfo )
    return ((__int64 (__fastcall *)(Windows::Foundation::IAsyncInfo *))m_asyncInfo->__abi_Release)(m_asyncInfo);
  return m_ptr;
}

/*
==============
Online_DcQos_FetchRelayServerComplete
==============
*/
void Online_DcQos_FetchRelayServerComplete(GenericTask *task, eTaskManagerTaskState state)
{
  char v4; 
  unsigned __int64 TransactionID; 
  __int64 v6; 
  unsigned __int64 v7; 
  unsigned int newOffset; 
  bdJSONDeserializer v9; 
  __int64 v10; 
  bdJSONDeserializer v11; 
  char src[128]; 
  unsigned __int8 dest[96]; 
  char value[1024]; 

  v10 = -2i64;
  v4 = 0;
  TransactionID = bdRemoteTask::getTransactionID(task->m_remoteDemonwareTask.m_ptr);
  Com_Printf(25, "[NET] Fetch relay server complete (transaction %zu)\n", TransactionID);
  if ( state )
    goto LABEL_13;
  bdJSONDeserializer::bdJSONDeserializer(&v9);
  if ( bdJSONDeserializer::parse(&v9, s_dcqos.buffer) )
  {
    if ( bdJSONDeserializer::getString(&v9, "server_info", value, 0x400u) )
    {
      bdJSONDeserializer::bdJSONDeserializer(&v11);
      if ( bdJSONDeserializer::parse(&v11, value) && bdJSONDeserializer::getString(&v11, "relay_auth_token", src, 0x71u) )
      {
        v6 = -1i64;
        do
          ++v6;
        while ( src[v6] );
        bdBase64::decode(src, v6, dest, 0x53u);
        newOffset = 0;
        bdRelayAuthToken::deserialize(&s_dcqos.relayAuthToken, dest, 0x53u, 0, &newOffset);
        v4 = 1;
      }
      bdJSONDeserializer::~bdJSONDeserializer(&v11);
    }
    v4 |= bdJSONDeserializer::getString(&v9, "datacenter", s_dcqos.relayDatacenterBase64, 0x59u);
  }
  bdJSONDeserializer::~bdJSONDeserializer(&v9);
  if ( !v4 )
  {
LABEL_13:
    Online_DcQos_SetResultState(DCQOS_RESULT_RELAY, LONG_LONG);
    v7 = bdRemoteTask::getTransactionID(task->m_remoteDemonwareTask.m_ptr);
    Com_PrintError(25, "[NET] Failed to fetch relay server details (transaction %zu)\n", v7);
  }
  else
  {
    Online_DcQos_SetResultState(DCQOS_RESULT_RELAY, LONG);
  }
  Online_DcQos_TryFinalizeResults();
}

/*
==============
Online_DcQos_Frame
==============
*/
void Online_DcQos_Frame(void)
{
  int ControllerFromClient; 
  int v1; 
  int v2; 

  if ( s_dcqos.state == IDLE && CL_Mgr_IsClientActive(LOCAL_CLIENT_0) )
  {
    ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
    if ( FenceManager_AreDependenciesMet(ControllerFromClient, FENCE_DCQOS) )
    {
      *(_WORD *)&s_dcqos.requested = 257;
      s_dcqos.resultRequests = 2;
    }
  }
  if ( (unsigned int)(s_dcqos.state - 2) <= 1 && (unsigned int)(Online_DcQos_GetResultState(DCQOS_RESULT_DATACENTERS) - 3) <= 1 && Online_DcQos_CanQos() && (v1 = Sys_Milliseconds(), Online_Backoff::CanProceed(&s_dcqos.backoff, v1)) )
  {
    *(_WORD *)&s_dcqos.requested = 257;
    s_dcqos.resultRequests = 2;
  }
  else if ( !s_dcqos.requested )
  {
    goto LABEL_14;
  }
  if ( Online_DcQos_CanStart() && CL_Mgr_IsClientActive(LOCAL_CLIENT_0) )
  {
    v2 = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
    Online_DcQos_Start(v2);
  }
LABEL_14:
  Qos::Pump(&s_dcqos.qos);
}

/*
==============
Online_DcQos_GetBestDatacenterName
==============
*/
char Online_DcQos_GetBestDatacenterName(char *destString, const int maxLength)
{
  unsigned __int64 v2; 

  v2 = maxLength;
  if ( maxLength <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_dcqos.cpp", 327, ASSERT_TYPE_ASSERT, "(maxLength > 0)", (const char *)&queryFormat, "maxLength > 0") )
    __debugbreak();
  *destString = 0;
  if ( s_dcqos.state == QOSING || !s_dcqos.m_datacenters.m_numDataCenterPreferences )
    return 0;
  Core_strcpy(destString, v2, s_dcqos.m_datacenters._bytes_20);
  return 1;
}

/*
==============
Online_DcQos_GetBuildContext
==============
*/
const char *Online_DcQos_GetBuildContext()
{
  const dvar_t *v0; 

  v0 = DVARSTR_dedi_qos_buildname_context;
  if ( !DVARSTR_dedi_qos_buildname_context && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dedi_qos_buildname_context") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.string;
}

/*
==============
Online_DcQos_GetBuildName
==============
*/
const char *Online_DcQos_GetBuildName()
{
  const dvar_t *v0; 
  __int64 integer64; 
  const dvar_t *v2; 
  __int64 v3; 

  v0 = DVARSTR_dedi_qos_buildname;
  if ( !DVARSTR_dedi_qos_buildname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dedi_qos_buildname") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  integer64 = v0->current.integer64;
  v2 = DVARSTR_dedi_qos_buildname_override;
  if ( !DVARSTR_dedi_qos_buildname_override && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dedi_qos_buildname_override") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  v3 = -1i64;
  do
    ++v3;
  while ( *(_BYTE *)(v2->current.integer64 + v3) );
  if ( (_DWORD)v3 )
    return v2->current.string;
  return (const char *)integer64;
}

/*
==============
Online_DcQos_GetDatacenterCount
==============
*/
__int64 Online_DcQos_GetDatacenterCount()
{
  if ( Online_DcQos_GetResultState(DCQOS_RESULT_DATACENTERS) != LONG && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_dcqos.cpp", 268, ASSERT_TYPE_ASSERT, "(Online_DcQos_IsResultValid( DCQOS_RESULT_DATACENTERS ))", (const char *)&queryFormat, "Online_DcQos_IsResultValid( DCQOS_RESULT_DATACENTERS )") )
    __debugbreak();
  return s_dcqos.m_datacenters.m_numDataCenterPreferences;
}

/*
==============
Online_DcQos_GetRelayAuthToken
==============
*/
bdRelayAuthToken *Online_DcQos_GetRelayAuthToken()
{
  if ( Online_DcQos_GetResultState(DCQOS_RESULT_RELAY) != LONG && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_dcqos.cpp", 275, ASSERT_TYPE_ASSERT, "(Online_DcQos_IsResultValid( DCQOS_RESULT_RELAY ))", (const char *)&queryFormat, "Online_DcQos_IsResultValid( DCQOS_RESULT_RELAY )") )
    __debugbreak();
  return &s_dcqos.relayAuthToken;
}

/*
==============
Online_DcQos_GetRelayDatacenterBase64
==============
*/
char *Online_DcQos_GetRelayDatacenterBase64()
{
  return s_dcqos.relayDatacenterBase64;
}

/*
==============
Online_DcQos_GetRelayName
==============
*/
char *Online_DcQos_GetRelayName()
{
  const dvar_t *v0; 
  const char *string; 
  const dvar_t *v2; 
  const char *v3; 
  DWServicesAccess *Instance; 
  const char *EnvironmentString; 
  char v6; 
  signed __int64 v7; 
  char *v8; 
  int v9; 
  char v11[1024]; 

  v0 = DVARSTR_dedi_relay_build_config;
  if ( !DVARSTR_dedi_relay_build_config && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dedi_relay_build_config") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  string = v0->current.string;
  v2 = DVARSTR_dedi_relay_build_version;
  if ( !DVARSTR_dedi_relay_build_version && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dedi_relay_build_version") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  v3 = v2->current.string;
  Instance = DWServicesAccess::GetInstance();
  EnvironmentString = DWServicesAccess::GetEnvironmentString(Instance);
  v6 = *EnvironmentString;
  v11[0] = *EnvironmentString + ((unsigned int)(*EnvironmentString - 65) < 0x1A ? 0x20 : 0);
  if ( v6 )
  {
    v7 = EnvironmentString - v11;
    v8 = v11;
    do
    {
      v9 = (v8++)[v7 + 1];
      *v8 = v9 + ((unsigned int)(v9 - 65) < 0x1A ? 0x20 : 0);
    }
    while ( (_BYTE)v9 );
  }
  return j_va("iw8_udprelay-all-%s-%s-%s", string, v11, v3);
}

/*
==============
Online_DcQos_GetResultState
==============
*/
__int64 Online_DcQos_GetResultState(DcQosResult result)
{
  unsigned int v1; 
  __int64 v3; 
  __int64 v5; 

  v1 = __lzcnt(result) ^ 0x1F;
  if ( (~(1 << v1) & result) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 563, ASSERT_TYPE_ASSERT, "( ( v & ~( 1 << ret ) ) == 0 )", "iLog2: %u, 0x%x is not power of 2", result, result) )
    __debugbreak();
  if ( v1 >= 2 )
  {
    LODWORD(v5) = 2;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_dcqos.cpp", 290, ASSERT_TYPE_ASSERT, "(unsigned)( resultIndex ) < (unsigned)( ( sizeof( *array_counter( s_dcqos.resultStates ) ) + 0 ) )", "resultIndex doesn't index ARRAY_COUNT( s_dcqos.resultStates )\n\t%i not in [0, %i)", v3, v5) )
      __debugbreak();
  }
  return (unsigned int)s_dcqos.resultStates[v1];
}

/*
==============
Online_DcQos_GetRetailDebug
==============
*/

void __fastcall Online_DcQos_GetRetailDebug(char *destString, const int maxLength, __int64 a3, double _XMM3_8)
{
  unsigned __int64 v7; 
  unsigned __int64 v9; 
  const char *v10; 
  int v11; 
  int v12; 
  const char *v13; 
  bdAddr *RelayAddr; 
  __int64 v15; 
  unsigned __int64 RelayID; 
  unsigned __int64 v17; 
  int v18; 
  const char *v19; 
  const char *v20; 
  int v21; 
  const char *v28; 
  unsigned int v29; 
  bool v31; 
  bdQoSProbeInfo *v32; 
  unsigned int m_hash; 
  bdHashMap<unsigned int,bdString,bdHashingClass> *datacenterHash; 
  bdHashMap<unsigned int,bdString,bdHashingClass>::Node *v35; 
  char v36; 
  unsigned __int64 Length; 
  const char *Buffer; 
  char *v40; 
  bdAddr *PublicAddr; 
  const char *v43; 
  __int64 m_numProbesExpected; 
  __int64 m_numProbesReceived; 
  const char *v46; 
  __int64 m_failureReason; 
  const char *v48; 
  const char *v49; 
  int v50; 
  int v51; 
  __int64 m_numDataCenterPreferences; 
  const char *v53; 
  const char *bytes_20; 
  const char *v55; 
  bdString v57; 
  __int64 v58; 
  __int64 v59; 
  char dest[8]; 
  __int64 v61; 
  __int64 v62; 
  __int64 v63; 
  __int64 v64; 
  __int64 v65; 
  __int64 v66; 
  __int64 v67; 
  char v68[8]; 
  __int64 v69; 
  __int64 v70; 
  __int64 v71; 
  __int64 v72; 
  __int64 v73; 
  __int64 v74; 
  __int64 v75; 
  char str[24]; 
  char v77[24]; 
  void *retaddr; 

  _RAX = &retaddr;
  v59 = -2i64;
  __asm { vmovaps xmmword ptr [rax-48h], xmm6 }
  v7 = maxLength;
  if ( !Com_FrontEnd_IsInFrontEnd() )
    goto LABEL_51;
  if ( s_dcqos.state == QOSING )
  {
    v9 = v7;
    v10 = "\nDC QoS FAILED!";
LABEL_50:
    I_strcat_truncate(destString, v9, v10);
    goto LABEL_51;
  }
  if ( s_dcqos.state == IDLE )
    goto LABEL_51;
  v11 = Online_DcQos_GetResultState(DCQOS_RESULT_RELAY) - 2;
  if ( !v11 )
  {
    v13 = "\nUDP Relay FETCHING\n";
    goto LABEL_13;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    *(_QWORD *)dest = 0i64;
    v61 = 0i64;
    v62 = 0i64;
    v63 = 0i64;
    v64 = 0i64;
    v65 = 0i64;
    v66 = 0i64;
    v67 = 0i64;
    RelayAddr = (bdAddr *)bdRelayAuthToken::getRelayAddr(&s_dcqos.relayAuthToken);
    bdAddr::toString(RelayAddr, str, 0x16ui64);
    v15 = -1i64;
    do
      ++v15;
    while ( s_dcqos.relayDatacenterBase64[v15] );
    bdBase64::decode(s_dcqos.relayDatacenterBase64, v15, dest, 0x40u);
    RelayID = bdRelayAuthToken::getRelayID(&s_dcqos.relayAuthToken);
    v13 = j_va("\nUDP Relay Fetch Success: %s %s %zu\n", dest, str, RelayID);
    goto LABEL_13;
  }
  if ( v12 == 1 )
  {
    v13 = "\nUDP Relay Fetch FAILED\n";
LABEL_13:
    I_strcat_truncate(destString, v7, v13);
  }
  v17 = v7;
  if ( s_dcqos.state == INITIALIZING )
  {
    v18 = Sys_Milliseconds();
    v19 = j_va("\nDC QoS In Progress: %i secs", (unsigned int)((v18 - s_dcqos.startTime) / 1000));
    I_strcat_truncate(destString, v7, v19);
  }
  else
  {
    v20 = j_va("\nDC QoS Complete: %i secs\n", (unsigned int)s_dcqos.duration);
    I_strcat_truncate(destString, v7, v20);
    v21 = Sys_Milliseconds();
    Online_Backoff::GetTimeRemaining(&s_dcqos.backoff, v21);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, cs:__real@3a83126f
      vxorps  xmm3, xmm3, xmm3
      vroundss xmm3, xmm3, xmm1, 2
      vcvttss2si r8d, xmm3
    }
    v28 = j_va("Refreshing in %i:%i\n", (unsigned int)(_ER8 / 60), (unsigned int)(_ER8 % 60));
    I_strcat_truncate(destString, v7, v28);
    v29 = 0;
    if ( s_dcqos.qosProbeInfo.m_size )
    {
      __asm { vmovss  xmm6, cs:__real@447a0000 }
      v31 = s_dcqos.qosProbeInfo.m_size != 0;
      do
      {
        bdHandleAssert(v31, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdQoSProbeInfo>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
        v32 = &s_dcqos.qosProbeInfo.m_data[v29];
        bdString::bdString(&v57);
        m_hash = v32->m_addr.m_ptr->m_hash;
        LODWORD(v58) = m_hash;
        datacenterHash = s_dcqos.datacenterHash;
        if ( s_dcqos.datacenterHash->m_size && (v35 = s_dcqos.datacenterHash->m_map[(s_dcqos.datacenterHash->m_capacity - 1) & (HIBYTE(m_hash) ^ (16777619 * (BYTE2(m_hash) ^ (16777619 * (BYTE1(m_hash) ^ (16777619 * (unsigned __int8)m_hash))))))]) != NULL )
        {
          while ( m_hash != v35->m_key )
          {
            v35 = v35->m_next;
            if ( !v35 )
              goto LABEL_22;
          }
          _InterlockedExchangeAdd((volatile signed __int32 *)&s_dcqos.datacenterHash->m_numIterators, 1u);
          bdString::operator=(&v57, &v35->m_data);
          bdHandleAssert(datacenterHash->m_numIterators.m_value._My_val != 0, "m_numIterators != 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdhashmap.inl", "bdHashMap<unsigned int,class bdString,class bdHashingClass>::releaseIterator", 0x18Au, "bdHashMap::releaseIterator Iterator count reached 0, can't release iterator");
          _InterlockedExchangeAdd((volatile signed __int32 *)&datacenterHash->m_numIterators, 0xFFFFFFFF);
          v36 = 1;
        }
        else
        {
LABEL_22:
          v36 = 0;
        }
        if ( v36 )
        {
          *(_QWORD *)v68 = 0i64;
          v69 = 0i64;
          v70 = 0i64;
          v71 = 0i64;
          v72 = 0i64;
          v73 = 0i64;
          v74 = 0i64;
          v75 = 0i64;
          Length = bdString::getLength(&v57);
          if ( Length > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)Length, "unsigned", Length) )
            __debugbreak();
          Buffer = bdString::getBuffer(&v57);
          bdBase64::decode(Buffer, Length, v68, 0x40u);
          v40 = v68;
        }
        else
        {
          PublicAddr = (bdAddr *)bdCommonAddr::getPublicAddr(v32->m_addr.m_ptr);
          bdAddr::toString(PublicAddr, v77, 0x16ui64);
          v40 = v77;
        }
        __asm
        {
          vmulss  xmm1, xmm6, dword ptr [rsi+0A0h]
          vcvttss2si r8d, xmm1
        }
        v43 = j_va("%s %ims ", v40, _R8);
        I_strcat_truncate(destString, v17, v43);
        m_numProbesExpected = v32->m_numProbesExpected;
        m_numProbesReceived = v32->m_numProbesReceived;
        if ( (_DWORD)m_numProbesExpected != (_DWORD)m_numProbesReceived )
        {
          v46 = j_va("(%i,%i) ", m_numProbesReceived, m_numProbesExpected);
          I_strcat_truncate(destString, v17, v46);
        }
        m_failureReason = (unsigned int)v32->m_failureReason;
        if ( (_DWORD)m_failureReason )
        {
          v48 = j_va("%i", m_failureReason);
          I_strcat_truncate(destString, v17, v48);
        }
        v49 = ",\t";
        if ( (v29 & 1) != 0 )
          v49 = "\n";
        I_strcat_truncate(destString, v17, v49);
        bdString::~bdString(&v57);
        v31 = ++v29 < s_dcqos.qosProbeInfo.m_size;
      }
      while ( v29 < s_dcqos.qosProbeInfo.m_size );
    }
  }
  v50 = Online_DcQos_GetResultState(DCQOS_RESULT_DATACENTERS) - 2;
  if ( !v50 )
  {
    v10 = "\n\nDatacenter Preferences FETCHING\n";
    goto LABEL_49;
  }
  v51 = v50 - 1;
  if ( !v51 )
  {
    if ( (unsigned int)Online_DcQos_GetResultState(DCQOS_RESULT_DATACENTERS) != 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_dcqos.cpp", 268, ASSERT_TYPE_ASSERT, "(Online_DcQos_IsResultValid( DCQOS_RESULT_DATACENTERS ))", (const char *)&queryFormat, "Online_DcQos_IsResultValid( DCQOS_RESULT_DATACENTERS )") )
      __debugbreak();
    m_numDataCenterPreferences = s_dcqos.m_datacenters.m_numDataCenterPreferences;
    v53 = j_va("\n\nDatacenter Preferences: %i\n", s_dcqos.m_datacenters.m_numDataCenterPreferences);
    I_strcat_truncate(destString, v17, v53);
    if ( (int)m_numDataCenterPreferences > 0 )
    {
      bytes_20 = s_dcqos.m_datacenters._bytes_20;
      do
      {
        v55 = j_va("%s, ", bytes_20);
        I_strcat_truncate(destString, v17, v55);
        bytes_20 += 64;
        --m_numDataCenterPreferences;
      }
      while ( m_numDataCenterPreferences );
    }
    v10 = "\n";
    goto LABEL_49;
  }
  if ( v51 == 1 )
  {
    v10 = "\n\nDatacenter Preferences FAILED\n";
LABEL_49:
    v9 = v17;
    goto LABEL_50;
  }
LABEL_51:
  __asm { vmovaps xmm6, xmmword ptr [rsp+170h+var_48+8] }
}

/*
==============
Online_DcQos_Init
==============
*/
void Online_DcQos_Init()
{
  const bdRelayAuthToken *v2; 
  const dvar_t *v3; 
  int successDelay; 
  const dvar_t *v5; 
  bool enabled; 
  const dvar_t *v9; 
  int integer; 
  const dvar_t *v11; 
  PublisherVariableManager *Instance; 
  bdRelayAuthToken v16; 
  char v17; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-28h], xmm6 }
  *(_QWORD *)s_dcqos.result._bytes_20 = s_dcqos.buffer;
  *(_DWORD *)&s_dcqos.result._bytes_20[8] = 0x4000;
  bdRelayAuthToken::bdRelayAuthToken(&v16);
  s_dcqos.relayAuthToken.operator=(&s_dcqos.relayAuthToken, v2);
  bdRelayAuthToken::~bdRelayAuthToken(&v16);
  s_dcqos.state = IDLE;
  *(_WORD *)&s_dcqos.requested = 0;
  s_dcqos.resultRequests = 0;
  v3 = DVARINT_online_qos_backoff_success_delay;
  if ( !DVARINT_online_qos_backoff_success_delay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_qos_backoff_success_delay") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  successDelay = v3->current.integer;
  v5 = DVARBOOL_online_qos_backoff_stop_at_max_attempts;
  if ( !DVARBOOL_online_qos_backoff_stop_at_max_attempts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_qos_backoff_stop_at_max_attempts") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  enabled = v5->current.enabled;
  _RBX = DVARFLT_online_qos_backoff_factor;
  if ( !DVARFLT_online_qos_backoff_factor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_qos_backoff_factor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm6, dword ptr [rbx+28h] }
  v9 = DVARINT_online_qos_backoff_max_attempts;
  if ( !DVARINT_online_qos_backoff_max_attempts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_qos_backoff_max_attempts") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  integer = v9->current.integer;
  v11 = DVARINT_online_qos_backoff_fail_delay;
  if ( !DVARINT_online_qos_backoff_fail_delay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_qos_backoff_fail_delay") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  __asm { vmovaps xmm3, xmm6; factor }
  Online_Backoff::Init(&s_dcqos.backoff, v11->current.integer, integer, *(float *)&_XMM3, enabled, successDelay);
  *(_QWORD *)s_dcqos.resultStates = 0i64;
  FenceManager_RegisterForFenceDependenciesUpdatesForAllControllers(FENCE_DCQOS, Online_DcQos_FenceDependenciesUpdated);
  Instance = PublisherVariableManager::GetInstance();
  PublisherVariableManager::AddRetrievedCallback(Instance, Online_DcQos_PublisherVariablesFetched);
  _R11 = &v17;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

/*
==============
Online_DcQos_Initiate
==============
*/
void Online_DcQos_Initiate()
{
  bool v0; 
  const dvar_t *v1; 
  const dvar_t *v2; 
  const char *string; 
  const dvar_t *v4; 
  const char *v5; 
  __int64 v6; 
  const dvar_t *v7; 
  const char *v8; 
  __int64 v9; 
  const char *v10; 
  char *v11; 
  char v12; 
  char v13; 
  DWServicesAccess *Instance; 
  DWAsyncMatchMaking *AsyncMatchmaking; 
  TaskCreateRequest *v17; 
  bdRemoteTask *v18; 
  TaskManager *v19; 
  bool v20; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  OnlineTimeSeriesLog *v22; 
  char *fmt; 
  bdReference<bdRemoteTask> remoteTask; 
  TaskCreateRequest pTaskCreateRequest; 
  bdReference<bdRemoteTask> result; 
  TaskCreateResult pTaskCreateResult; 
  __int64 v28; 
  bdJSONSerializer v29; 

  v28 = -2i64;
  bdJSONSerializer::bdJSONSerializer(&v29);
  bdJSONSerializer::setBuffer(&v29, s_dcqos.buffer, 0x4000u);
  v0 = bdJSONSerializer::writeBeginObject(&v29);
  if ( v0 )
  {
    v1 = DVARBOOL_dedi_qos_use_ping_servers;
    if ( !DVARBOOL_dedi_qos_use_ping_servers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dedi_qos_use_ping_servers") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v1);
    if ( v1->current.enabled )
    {
      v2 = DVARSTR_dedi_qos_buildname;
      if ( !DVARSTR_dedi_qos_buildname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dedi_qos_buildname") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v2);
      string = v2->current.string;
      v4 = DVARSTR_dedi_qos_buildname_override;
      if ( !DVARSTR_dedi_qos_buildname_override && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dedi_qos_buildname_override") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v4);
      v5 = v4->current.string;
      v6 = -1i64;
      do
        ++v6;
      while ( v5[v6] );
      if ( !(_DWORD)v6 )
        v5 = string;
      v7 = DVARSTR_dedi_qos_buildname_context;
      if ( !DVARSTR_dedi_qos_buildname_context && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dedi_qos_buildname_context") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v7);
      v8 = v7->current.string;
      LODWORD(fmt) = s_dcqos.controllerIndex;
      Com_Printf(25, "[NET] Requesting DC qos (buildname %s, context %s) for controller %i\n", v5, v8, fmt);
      v0 = bdJSONSerializer::writeString(&v29, "qos_build_name_context", v8);
      v9 = 0x7FFFFFFFi64;
      v10 = v5;
      v11 = (char *)&queryFormat.fmt + 3;
      if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      do
      {
        v12 = *v11++;
        v13 = *v10++;
        if ( !v9-- )
          break;
        if ( v12 != v13 )
        {
          if ( v0 && bdJSONSerializer::writeString(&v29, "qos_build_name", v5) )
            goto LABEL_26;
          goto LABEL_39;
        }
      }
      while ( v12 );
    }
    if ( v0 )
    {
LABEL_26:
      if ( bdJSONSerializer::writeEndObject(&v29) )
      {
        pTaskCreateRequest.m_appTaskType = -1;
        memset(&pTaskCreateRequest.m_appData, 0, 32);
        pTaskCreateRequest.m_onUpdateCallback = NULL;
        pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
        pTaskCreateRequest.m_timeoutInSeconds = 0;
        pTaskCreateResult.m_localTaskId = 0;
        pTaskCreateResult.m_task = NULL;
        pTaskCreateRequest.m_onCompletionCallback = Online_DcQos_InitiateComplete;
        pTaskCreateRequest.m_controllerIndex = s_dcqos.controllerIndex;
        Instance = DWServicesAccess::GetInstance();
        AsyncMatchmaking = DWServicesAccess::GetAsyncMatchmaking(Instance, s_dcqos.controllerIndex);
        v17 = (TaskCreateRequest *)DWAsyncMatchMaking::initiateDCQoS(AsyncMatchmaking, &result, s_dcqos.buffer, &s_dcqos.result);
        if ( v17 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
        {
          v18 = *(bdRemoteTask **)&v17->m_controllerIndex;
          pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v18;
          if ( v18 )
            _InterlockedExchangeAdd((volatile signed __int32 *)&v18->m_refCount, 1u);
        }
        if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
          ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
        v20 = 0;
        if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
        {
          v19 = TaskManager::GetInstance();
          if ( TaskManager::CreateTask(v19, &pTaskCreateRequest, &pTaskCreateResult) )
            v20 = 1;
        }
        s_dcqos.taskId = pTaskCreateResult.m_localTaskId;
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
        if ( v20 )
        {
          v22 = OnlineTimeSeriesLog::Get();
          OnlineTimeSeriesLog::WriteEventCounter(v22, "mming.initdcqos.initiate.count", 1u);
          goto LABEL_42;
        }
      }
    }
  }
LABEL_39:
  remoteTask.m_ptr = NULL;
  Online_DcQos_Fail("couldn't start initiate qos task", "mming.initdcqos.failure.count", &remoteTask);
  if ( remoteTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&remoteTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdRemoteTask *, __int64))remoteTask.m_ptr->~bdReferencable)(remoteTask.m_ptr, 1i64);
LABEL_42:
  bdJSONSerializer::~bdJSONSerializer(&v29);
}

/*
==============
Online_DcQos_InitiateComplete
==============
*/
void Online_DcQos_InitiateComplete(GenericTask *task, eTaskManagerTaskState state)
{
  GenericTask *v2; 
  unsigned __int64 v3; 
  bool v4; 
  bool v5; 
  bool v6; 
  unsigned int m_count; 
  __int64 v8; 
  bdQoSRemoteAddr *m_data; 
  unsigned int m_capacity; 
  unsigned int v11; 
  unsigned int v12; 
  bool v13; 
  bdQoSRemoteAddr *v14; 
  bool v15; 
  __int64 v16; 
  bool v17; 
  __int64 v18; 
  bool v19; 
  __int64 v20; 
  bdCommonAddr *v21; 
  bdCommonAddr *v22; 
  bdCommonAddr *m_ptr; 
  bdCommonAddr *v24; 
  __int64 v25; 
  bdAddr *PublicAddr; 
  const bdString *v27; 
  __int64 m_size; 
  unsigned __int16 value[4]; 
  bdArray<bdQoSRemoteAddr> qosHosts; 
  GenericTask *v31; 
  unsigned int key[2]; 
  bdReference<bdCommonAddr> me; 
  bdString v34; 
  unsigned __int64 transactionId[2]; 
  void *v36; 
  bdJSONDeserializer v37; 
  bdJSONDeserializer v38; 
  bdJSONDeserializer v39; 
  __int64 v40; 
  bdCommonAddr *v41; 
  bdSecurityID other; 
  bdSecurityKey v43; 
  unsigned __int8 v44[8]; 
  __int64 v45; 
  __int64 v46; 
  __int64 v47; 
  __int64 v48; 
  __int64 v49; 
  __int64 v50; 
  __int64 v51; 
  char src[128]; 
  char str[96]; 
  unsigned __int8 dest[96]; 

  v40 = -2i64;
  v2 = task;
  v31 = task;
  if ( state )
    goto LABEL_52;
  v3 = bdRemoteTask::getTransactionID(task->m_remoteDemonwareTask.m_ptr);
  Com_Printf(25, "[NET] Datacenter QoS initiate complete (transaction %zu)\n", v3);
  bdJSONDeserializer::bdJSONDeserializer(&v38);
  v4 = bdJSONDeserializer::parse(&v38, s_dcqos.buffer);
  if ( v4 )
  {
    bdJSONDeserializer::bdJSONDeserializer(&v39);
    v5 = bdJSONDeserializer::getUInt16(&v38, "num_probes", value) && v4;
    v6 = bdJSONDeserializer::getUInt64(&v38, "transaction_id", transactionId) && v5;
    v4 = bdJSONDeserializer::getArray(&v38, "hosts", &v39) && v6;
    if ( v4 )
    {
      m_count = v39.m_count;
      v8 = 0i64;
      v41 = NULL;
      bdSecurityID::bdSecurityID(&other);
      bdSecurityKey::bdSecurityKey(&v43);
      m_data = NULL;
      qosHosts.m_data = NULL;
      qosHosts.m_capacity = m_count;
      qosHosts.m_size = m_count;
      if ( m_count )
      {
        m_data = (bdQoSRemoteAddr *)bdMemory::allocate(32i64 * m_count);
        qosHosts.m_data = m_data;
        m_capacity = qosHosts.m_capacity;
        transactionId[1] = (unsigned __int64)m_data;
        v11 = 0;
        key[0] = 0;
        if ( qosHosts.m_capacity )
        {
          do
          {
            v36 = m_data;
            if ( m_data )
            {
              m_data->m_addr.m_ptr = v41;
              if ( v41 )
                _InterlockedExchangeAdd((volatile signed __int32 *)&v41->m_refCount, 1u);
              bdSecurityID::bdSecurityID(&m_data->m_id, &other);
              bdSecurityKey::bdSecurityKey(&m_data->m_key, &v43);
            }
            key[0] = ++v11;
            ++m_data;
          }
          while ( v11 < m_capacity );
          m_data = qosHosts.m_data;
        }
      }
      v12 = 0;
      if ( m_count )
      {
        do
        {
          memset_0(src, 0, 0x71ui64);
          bdJSONDeserializer::bdJSONDeserializer(&v37);
          v13 = bdJSONDeserializer::getObject(&v39, v12, &v37) && v4;
          bdHandleAssert(v12 < qosHosts.m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdQoSRemoteAddr>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
          v14 = &qosHosts.m_data[v8];
          v15 = bdJSONDeserializer::getString(&v37, "security_id", src, 0x71u) && v13;
          v16 = -1i64;
          do
            ++v16;
          while ( src[v16] );
          bdBase64::decode(src, v16, (char *)&v14->m_id, 8u);
          v17 = bdJSONDeserializer::getString(&v37, "security_key", src, 0x71u) && v15;
          v18 = -1i64;
          do
            ++v18;
          while ( src[v18] );
          bdBase64::decode(src, v18, (char *)&v14->m_key, 0x10u);
          v19 = bdJSONDeserializer::getString(&v37, "address", src, 0x71u) && v17;
          v20 = -1i64;
          do
            ++v20;
          while ( src[v20] );
          bdBase64::decode(src, v20, dest, 0x54u);
          v21 = (bdCommonAddr *)bdMemory::allocate(0x4E0ui64);
          v36 = v21;
          if ( v21 )
          {
            bdCommonAddr::bdCommonAddr(v21);
            m_ptr = v22;
          }
          else
          {
            m_ptr = NULL;
          }
          if ( v14->m_addr.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v14->m_addr.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v14->m_addr.m_ptr )
            ((void (__fastcall *)(bdCommonAddr *, __int64))v14->m_addr.m_ptr->~bdReferencable)(v14->m_addr.m_ptr, 1i64);
          v14->m_addr.m_ptr = m_ptr;
          if ( m_ptr )
          {
            _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
            m_ptr = v14->m_addr.m_ptr;
          }
          v24 = NET_GetLocalCommonAddr()->m_ptr;
          me.m_ptr = v24;
          if ( v24 )
            _InterlockedExchangeAdd((volatile signed __int32 *)&v24->m_refCount, 1u);
          v4 = bdCommonAddr::deserialize(m_ptr, (bdReference<bdCommonAddr>)&me, dest) && v19;
          memset_0(str, 0, 0x59ui64);
          bdJSONDeserializer::getString(&v37, "datacenter", str, 0x59u);
          *(_QWORD *)v44 = 0i64;
          v45 = 0i64;
          v46 = 0i64;
          v47 = 0i64;
          v48 = 0i64;
          v49 = 0i64;
          v50 = 0i64;
          v51 = 0i64;
          v25 = -1i64;
          do
            ++v25;
          while ( str[v25] );
          bdBase64::decode(str, v25, v44, 0x40u);
          PublicAddr = (bdAddr *)bdCommonAddr::getPublicAddr(v14->m_addr.m_ptr);
          bdAddr::toString(PublicAddr, src, 0x40ui64);
          Com_Printf(25, "[NET] Datacenter QoS endpoint: %s %s\n", (const char *)v44, src);
          bdString::bdString(&v34, str);
          key[1] = v14->m_addr.m_ptr->m_hash;
          bdHashMap<unsigned int,bdString,bdHashingClass>::put(s_dcqos.datacenterHash, &key[1], v27);
          bdString::~bdString(&v34);
          bdJSONDeserializer::~bdJSONDeserializer(&v37);
          ++v12;
          ++v8;
        }
        while ( v12 < m_count );
        m_data = qosHosts.m_data;
      }
      if ( v4 )
      {
        Qos::Probe(&s_dcqos.qos, transactionId[0], &qosHosts, value[0], Online_DcQos_ProbeComplete, NULL);
        m_data = qosHosts.m_data;
      }
      if ( qosHosts.m_size )
      {
        m_size = qosHosts.m_size;
        do
        {
          bdSecurityKey::~bdSecurityKey(&m_data->m_key);
          bdSecurityID::~bdSecurityID(&m_data->m_id);
          if ( m_data->m_addr.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_data->m_addr.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
          {
            if ( m_data->m_addr.m_ptr )
              ((void (__fastcall *)(bdCommonAddr *, __int64))m_data->m_addr.m_ptr->~bdReferencable)(m_data->m_addr.m_ptr, 1i64);
            m_data->m_addr.m_ptr = NULL;
          }
          ++m_data;
          --m_size;
        }
        while ( m_size );
        m_data = qosHosts.m_data;
      }
      bdMemory::deallocate(m_data);
      qosHosts.m_data = NULL;
      *(_QWORD *)&qosHosts.m_capacity = 0i64;
      bdSecurityKey::~bdSecurityKey(&v43);
      bdSecurityID::~bdSecurityID(&other);
      if ( v41 && _InterlockedExchangeAdd((volatile signed __int32 *)&v41->m_refCount, 0xFFFFFFFF) == 1 )
      {
        if ( v41 )
          ((void (__fastcall *)(bdCommonAddr *, __int64))v41->~bdReferencable)(v41, 1i64);
      }
      v2 = v31;
    }
    bdJSONDeserializer::~bdJSONDeserializer(&v39);
  }
  bdJSONDeserializer::~bdJSONDeserializer(&v38);
  if ( !v4 )
LABEL_52:
    Online_DcQos_Fail("DC initiate task failed", "mming.initiatedcqos.failure.count", &v2->m_remoteDemonwareTask);
}

/*
==============
Online_DcQos_IsComplete
==============
*/
bool Online_DcQos_IsComplete()
{
  return (unsigned int)(s_dcqos.state - 2) <= 1 && (unsigned int)Online_DcQos_GetResultState(DCQOS_RESULT_DATACENTERS) - 3 <= 1;
}

/*
==============
Online_DcQos_IsFailed
==============
*/
bool Online_DcQos_IsFailed()
{
  return s_dcqos.state == QOSING;
}

/*
==============
Online_DcQos_IsInProgress
==============
*/
bool Online_DcQos_IsInProgress()
{
  return s_dcqos.state == INITIALIZING;
}

/*
==============
Online_DcQos_IsRequested
==============
*/
_BOOL8 Online_DcQos_IsRequested()
{
  return s_dcqos.requested;
}

/*
==============
Online_DcQos_IsResultReady
==============
*/
bool Online_DcQos_IsResultReady(DcQosResult resultType)
{
  return (unsigned int)Online_DcQos_GetResultState(resultType) - 3 <= 1;
}

/*
==============
Online_DcQos_IsResultRequested
==============
*/
bool Online_DcQos_IsResultRequested(DcQosResult resultType)
{
  return (resultType & s_dcqos.resultRequests) != 0;
}

/*
==============
Online_DcQos_IsResultValid
==============
*/
bool Online_DcQos_IsResultValid(DcQosResult resultType)
{
  return (unsigned int)Online_DcQos_GetResultState(resultType) == 3;
}

/*
==============
Online_DcQos_ProbeComplete
==============
*/
void Online_DcQos_ProbeComplete(const tQosEntry *result, void *data)
{
  OnlineTimeSeriesLog *v3; 
  ntl::internal::list_node_base *mp_next; 
  ntl::internal::list_head_base<ntl::internal::list_node<QosDestinationEndpoint> > *p_m_listHead; 
  const bdQoSProbeInfo *p_mp_next; 
  unsigned int m_capacity; 
  bdQoSProbeInfo *v8; 
  unsigned int v9; 
  bdQoSProbeInfo *v10; 
  __int64 v13; 
  __int64 v14; 
  bdQoSProbeInfo *m_data; 
  __int64 v18; 
  __int64 m_size; 
  bool v20; 
  bdQoSProbeInfo *v21; 
  DWServicesAccess *Instance; 
  DWAsyncMatchMaking *AsyncMatchmaking; 
  TaskCreateRequest *v24; 
  bdRemoteTask *v25; 
  TaskManager *v26; 
  OnlineTimeSeriesLog *v27; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateRequest pTaskCreateRequest; 
  ntl::internal::list_head_base<ntl::internal::list_node<QosDestinationEndpoint> > *v30; 
  bdQoSProbeInfo *v31; 
  TaskCreateResult pTaskCreateResult; 
  __int64 v33; 
  char *v34; 
  bdQoSProbeInfo *v35; 
  bdReference<bdRemoteTask> remoteTask; 
  bdReference<bdRemoteTask> resulta; 

  v33 = -2i64;
  Com_Printf(25, "[NET] Datacenter QoS probe complete\n");
  v3 = OnlineTimeSeriesLog::Get();
  OnlineTimeSeriesLog::WriteEventCounter(v3, "event.qoshosts.completed.count", 1u);
  mp_next = result->m_addressesToQos.m_listHead.m_sentinel.mp_next;
  p_m_listHead = &result->m_addressesToQos.m_listHead;
  v30 = p_m_listHead;
  if ( mp_next != (ntl::internal::list_node_base *)p_m_listHead )
  {
    while ( 1 )
    {
      if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      p_mp_next = (const bdQoSProbeInfo *)&mp_next[3].mp_next;
      if ( s_dcqos.qosProbeInfo.m_size != s_dcqos.qosProbeInfo.m_capacity )
        goto LABEL_25;
      m_capacity = s_dcqos.qosProbeInfo.m_capacity;
      if ( !s_dcqos.qosProbeInfo.m_capacity )
        m_capacity = 1;
      v8 = NULL;
      v9 = s_dcqos.qosProbeInfo.m_capacity + m_capacity;
      if ( !v9 )
        goto LABEL_16;
      v10 = (bdQoSProbeInfo *)bdMemory::allocate(280i64 * v9);
      v8 = v10;
      if ( s_dcqos.qosProbeInfo.m_size )
        break;
LABEL_24:
      bdMemory::deallocate(s_dcqos.qosProbeInfo.m_data);
      s_dcqos.qosProbeInfo.m_data = v8;
      s_dcqos.qosProbeInfo.m_capacity = v9;
      p_mp_next = (const bdQoSProbeInfo *)&mp_next[3].mp_next;
      p_m_listHead = v30;
LABEL_25:
      m_size = s_dcqos.qosProbeInfo.m_size;
      v20 = &s_dcqos.qosProbeInfo.m_data[m_size] == NULL;
      v21 = &s_dcqos.qosProbeInfo.m_data[m_size];
      v35 = v21;
      v31 = v21;
      if ( !v20 )
        bdQoSProbeInfo::bdQoSProbeInfo(v21, p_mp_next);
      ++s_dcqos.qosProbeInfo.m_size;
      if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 109, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      mp_next = mp_next->mp_next;
      if ( mp_next == (ntl::internal::list_node_base *)p_m_listHead )
        goto LABEL_31;
    }
    _RDI = (char *)&v10->m_latency;
    _RSI = &s_dcqos.qosProbeInfo.m_data->m_latency;
    v13 = s_dcqos.qosProbeInfo.m_size;
    do
    {
      v34 = _RDI - 160;
      v31 = (bdQoSProbeInfo *)(_RDI - 160);
      if ( _RDI != (char *)160 )
      {
        v14 = *((_QWORD *)_RSI - 20);
        *((_QWORD *)_RDI - 20) = v14;
        if ( v14 )
          _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 8), 1u);
        bdAddr::bdAddr((bdAddr *)_RDI - 1, (const bdAddr *)_RSI - 1);
        *(float *)_RDI = *_RSI;
        *((_QWORD *)_RDI + 1) = *((_QWORD *)_RSI + 1);
        *((float *)_RDI + 4) = _RSI[4];
        _RDI[20] = *((_BYTE *)_RSI + 20);
        *((float *)_RDI + 6) = _RSI[6];
        *((float *)_RDI + 7) = _RSI[7];
        *((float *)_RDI + 8) = _RSI[8];
        *((float *)_RDI + 9) = _RSI[9];
        __asm
        {
          vmovups ymm0, ymmword ptr [rsi+28h]
          vmovups ymmword ptr [rdi+28h], ymm0
          vmovups ymm1, ymmword ptr [rsi+48h]
          vmovups ymmword ptr [rdi+48h], ymm1
        }
        *((float *)_RDI + 26) = _RSI[26];
        *((float *)_RDI + 27) = _RSI[27];
        *((float *)_RDI + 28) = _RSI[28];
        *((float *)_RDI + 29) = _RSI[29];
      }
      _RDI += 280;
      _RSI += 70;
      --v13;
    }
    while ( v13 );
LABEL_16:
    if ( s_dcqos.qosProbeInfo.m_size )
    {
      m_data = s_dcqos.qosProbeInfo.m_data;
      v18 = s_dcqos.qosProbeInfo.m_size;
      do
      {
        if ( m_data->m_addr.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_data->m_addr.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
        {
          if ( m_data->m_addr.m_ptr )
            ((void (__fastcall *)(bdCommonAddr *, __int64))m_data->m_addr.m_ptr->~bdReferencable)(m_data->m_addr.m_ptr, 1i64);
          m_data->m_addr.m_ptr = NULL;
        }
        ++m_data;
        --v18;
      }
      while ( v18 );
    }
    goto LABEL_24;
  }
LABEL_31:
  pTaskCreateRequest.m_appTaskType = -1;
  memset(&pTaskCreateRequest.m_appData, 0, 32);
  pTaskCreateRequest.m_onUpdateCallback = NULL;
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  pTaskCreateRequest.m_onCompletionCallback = Online_DcQos_ReplyComplete;
  pTaskCreateRequest.m_controllerIndex = s_dcqos.controllerIndex;
  Instance = DWServicesAccess::GetInstance();
  AsyncMatchmaking = DWServicesAccess::GetAsyncMatchmaking(Instance, s_dcqos.controllerIndex);
  v24 = (TaskCreateRequest *)DWAsyncMatchMaking::qosHostsReply(AsyncMatchmaking, &resulta, result->m_DWQosTransactionId, &s_dcqos.qosProbeInfo);
  if ( v24 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    v25 = *(bdRemoteTask **)&v24->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v25;
    if ( v25 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v25->m_refCount, 1u);
  }
  if ( resulta.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&resulta.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && resulta.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))resulta.m_ptr->~bdReferencable)(resulta.m_ptr, 1i64);
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v26 = TaskManager::GetInstance(), TaskManager::CreateTask(v26, &pTaskCreateRequest, &pTaskCreateResult)) )
  {
    v27 = OnlineTimeSeriesLog::Get();
    OnlineTimeSeriesLog::WriteEventCounter(v27, "mming.qoshostsreply.initiate.count", 1u);
  }
  else
  {
    remoteTask.m_ptr = NULL;
    Online_DcQos_Fail("couldn't create qos hosts reply task", "mming.qoshostsreply.failed.count", &remoteTask);
    if ( remoteTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&remoteTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
      ((void (__fastcall *)(bdRemoteTask *, __int64))remoteTask.m_ptr->~bdReferencable)(remoteTask.m_ptr, 1i64);
  }
  s_dcqos.taskId = pTaskCreateResult.m_localTaskId;
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
Online_DcQos_PublisherVariablesFetched
==============
*/
void Online_DcQos_PublisherVariablesFetched()
{
  const dvar_t *v0; 
  const dvar_t *v1; 
  const dvar_t *v2; 

  v0 = DVARINT_online_qos_backoff_success_delay;
  if ( !DVARINT_online_qos_backoff_success_delay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_qos_backoff_success_delay") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  Online_Backoff::UpdateSuccessDelay(&s_dcqos.backoff, v0->current.integer);
  v1 = DVARINT_online_qos_backoff_fail_delay;
  if ( !DVARINT_online_qos_backoff_fail_delay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_qos_backoff_fail_delay") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  Online_Backoff::UpdateFailureDelay(&s_dcqos.backoff, v1->current.integer);
  v2 = DVARBOOL_online_qos_backoff_stop_at_max_attempts;
  if ( !DVARBOOL_online_qos_backoff_stop_at_max_attempts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_qos_backoff_stop_at_max_attempts") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  Online_Backoff::UpdateStopAtMax(&s_dcqos.backoff, v2->current.enabled);
}

/*
==============
Online_DcQos_ReplyComplete
==============
*/
void Online_DcQos_ReplyComplete(GenericTask *task, eTaskManagerTaskState state)
{
  unsigned __int64 TransactionID; 
  OnlineTimeSeriesLog *v3; 

  if ( state )
  {
    Online_DcQos_Fail("qos hosts reply task failed", "mming.qoshostsreply.failure.count", &task->m_remoteDemonwareTask);
  }
  else
  {
    TransactionID = bdRemoteTask::getTransactionID(task->m_remoteDemonwareTask.m_ptr);
    Com_Printf(25, "[NET] Datacenter QoS reply complete (transaction %zu)\n", TransactionID);
    v3 = OnlineTimeSeriesLog::Get();
    OnlineTimeSeriesLog::WriteEventCounter(v3, "mming.qoshostsreply.success.count", 1u);
    s_dcqos.state = SEARCHING;
    if ( (unsigned int)Online_DcQos_GetResultState(DCQOS_RESULT_RELAY) == 1 )
      Online_DcQos_FetchRelayServer();
    if ( (unsigned int)Online_DcQos_GetResultState(DCQOS_RESULT_DATACENTERS) == 1 )
      Online_DcQos_FetchDatacenters();
  }
  bdTelemetry::record();
}

/*
==============
Online_DcQos_Request
==============
*/
void Online_DcQos_Request(unsigned int resultsMask, const bool reqos)
{
  s_dcqos.requested = 1;
  s_dcqos.qosRequested = reqos;
  s_dcqos.resultRequests = resultsMask;
}

/*
==============
Online_DcQos_SetResultState
==============
*/
void Online_DcQos_SetResultState(DcQosResult result, DcQosResultState state)
{
  unsigned int v2; 
  __int64 v4; 
  __int64 v6; 

  v2 = __lzcnt(result) ^ 0x1F;
  if ( (~(1 << v2) & result) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 563, ASSERT_TYPE_ASSERT, "( ( v & ~( 1 << ret ) ) == 0 )", "iLog2: %u, 0x%x is not power of 2", result, result) )
    __debugbreak();
  if ( v2 >= 2 )
  {
    LODWORD(v6) = 2;
    LODWORD(v4) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_dcqos.cpp", 299, ASSERT_TYPE_ASSERT, "(unsigned)( resultIndex ) < (unsigned)( ( sizeof( *array_counter( s_dcqos.resultStates ) ) + 0 ) )", "resultIndex doesn't index ARRAY_COUNT( s_dcqos.resultStates )\n\t%i not in [0, %i)", v4, v6) )
      __debugbreak();
  }
  s_dcqos.resultStates[v2] = state;
}

/*
==============
Online_DcQos_Start
==============
*/
void Online_DcQos_Start(int controllerIndex)
{
  DcQosResultState v3; 
  DcQosResultState v4; 
  bdHashMap<unsigned int,bdString,bdHashingClass> *datacenterHash; 
  _DWORD *v6; 
  _DWORD *v7; 
  unsigned int PowerOf2; 
  void *v13; 
  unsigned int i; 
  bdHashMap<unsigned int,bdString,bdHashingClass>::Node **m_map; 
  bdString *p_m_data; 
  bdString *v17; 
  bdQoSProbeInfo *m_data; 
  __int64 m_size; 

  if ( !Online_DcQos_CanStart() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_dcqos.cpp", 151, ASSERT_TYPE_ASSERT, "(Online_DcQos_CanStart())", (const char *)&queryFormat, "Online_DcQos_CanStart()", -2i64) )
    __debugbreak();
  v3 = s_dcqos.resultStates[0];
  if ( (s_dcqos.resultRequests & 1) != 0 )
    v3 = HALF;
  s_dcqos.resultStates[0] = v3;
  v4 = s_dcqos.resultStates[1];
  if ( (s_dcqos.resultRequests & 2) != 0 )
    v4 = HALF;
  s_dcqos.resultStates[1] = v4;
  s_dcqos.controllerIndex = controllerIndex;
  s_dcqos.requested = 0;
  if ( s_dcqos.qosRequested )
  {
    datacenterHash = s_dcqos.datacenterHash;
    if ( s_dcqos.datacenterHash )
    {
      bdHandleAssert(s_dcqos.datacenterHash->m_numIterators.m_value._My_val == 0, "(m_numIterators == 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdhashmap.inl", "bdHashMap<unsigned int,class bdString,class bdHashingClass>::clear", 0x3Au, "bdHashMap::clear, another iterator is being held while clearing the hashmap");
      for ( i = 0; i < datacenterHash->m_capacity; ++i )
      {
        m_map = datacenterHash->m_map;
        p_m_data = &m_map[i]->m_data;
        if ( p_m_data )
        {
          do
          {
            v17 = p_m_data;
            p_m_data = (bdString *)p_m_data[2].m_string;
            bdString::~bdString(v17);
            bdMemory::deallocate(v17);
          }
          while ( p_m_data );
          m_map = datacenterHash->m_map;
        }
        m_map[i] = NULL;
      }
      datacenterHash->m_size = 0;
    }
    else
    {
      v6 = bdMemory::allocate((unsigned int)(LODWORD(s_dcqos.datacenterHash) + 32));
      v7 = v6;
      if ( v6 )
      {
        v6[7] = 0;
        *v6 = 0;
        PowerOf2 = bdBitOperations::nextPowerOf2((_DWORD)datacenterHash + 4);
        v7[1] = PowerOf2;
        v7[2] = 1061158912;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rcx
          vmulss  xmm1, xmm0, cs:__real@3f400000
          vcvttss2si rcx, xmm1
        }
        v7[3] = _RCX;
        v13 = bdMemory::allocate(8i64 * PowerOf2);
        *((_QWORD *)v7 + 2) = v13;
        memset_0(v13, 0, 8i64 * (unsigned int)v7[1]);
      }
      else
      {
        v7 = NULL;
      }
      s_dcqos.datacenterHash = (bdHashMap<unsigned int,bdString,bdHashingClass> *)v7;
    }
    if ( s_dcqos.qosProbeInfo.m_size )
    {
      m_data = s_dcqos.qosProbeInfo.m_data;
      m_size = s_dcqos.qosProbeInfo.m_size;
      do
      {
        if ( m_data->m_addr.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_data->m_addr.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
        {
          if ( m_data->m_addr.m_ptr )
            ((void (__fastcall *)(bdCommonAddr *, __int64))m_data->m_addr.m_ptr->~bdReferencable)(m_data->m_addr.m_ptr, 1i64);
          m_data->m_addr.m_ptr = NULL;
        }
        ++m_data;
        --m_size;
      }
      while ( m_size );
    }
    bdMemory::deallocate(s_dcqos.qosProbeInfo.m_data);
    s_dcqos.qosProbeInfo.m_data = NULL;
    *(_QWORD *)&s_dcqos.qosProbeInfo.m_capacity = 0i64;
    s_dcqos.state = INITIALIZING;
    s_dcqos.startTime = Sys_Milliseconds();
    s_dcqos.qosRequested = 0;
    Online_DcQos_Initiate();
  }
  else
  {
    if ( (unsigned int)Online_DcQos_GetResultState(DCQOS_RESULT_RELAY) == 1 )
      Online_DcQos_FetchRelayServer();
    if ( (unsigned int)Online_DcQos_GetResultState(DCQOS_RESULT_DATACENTERS) == 1 )
      Online_DcQos_FetchDatacenters();
  }
}

/*
==============
Online_DcQos_TryFinalizeResults
==============
*/
void Online_DcQos_TryFinalizeResults()
{
  int ResultState; 
  int v1; 

  if ( (unsigned int)(s_dcqos.state - 2) <= 1 && (unsigned int)Online_DcQos_GetResultState(DCQOS_RESULT_DATACENTERS) - 3 <= 1 )
  {
    s_dcqos.duration = (Sys_Milliseconds() - s_dcqos.startTime) / 1000;
    ResultState = Online_DcQos_GetResultState(DCQOS_RESULT_DATACENTERS);
    v1 = Sys_Milliseconds();
    if ( ResultState == 3 )
    {
      Online_Backoff::ReportSuccess(&s_dcqos.backoff, v1);
      Com_Printf(25, "[NET] Dc Qos results finalized with success\n");
    }
    else
    {
      Online_Backoff::ReportFailure(&s_dcqos.backoff, v1);
      Com_Printf(25, "[NET] Dc Qos results finalized with error, will retry with backoff\n");
    }
  }
}

