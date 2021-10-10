/*
==============
OnlineChallengesManager::OnGetProgressionComplete
==============
*/

void __fastcall OnlineChallengesManager::OnGetProgressionComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  ?OnGetProgressionComplete@OnlineChallengesManager@@CAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(pTask, taskState);
}

/*
==============
OnlineChallengesManager::HandleChallengeExpiration
==============
*/

bool __fastcall OnlineChallengesManager::HandleChallengeExpiration(OnlineChallengesManager *this, const XUID xuid, bdJSONDeserializer *json)
{
  return ?HandleChallengeExpiration@OnlineChallengesManager@@AEAA_NUXUID@@PEAVbdJSONDeserializer@@@Z(this, xuid, json);
}

/*
==============
OnlineChallengesManager::ResetEventCache
==============
*/

void __fastcall OnlineChallengesManager::ResetEventCache(OnlineChallengesManager *this, ChallengeEventCacheType cacheType)
{
  ?ResetEventCache@OnlineChallengesManager@@AEAAXW4ChallengeEventCacheType@@@Z(this, cacheType);
}

/*
==============
CL_ChallengeEvent
==============
*/

void __fastcall CL_ChallengeEvent()
{
  ?CL_ChallengeEvent@@YAXXZ();
}

/*
==============
OnlineChallengesManager::GetInstance
==============
*/

OnlineChallengesManager *__fastcall OnlineChallengesManager::GetInstance()
{
  return ?GetInstance@OnlineChallengesManager@@SAAEAV1@XZ();
}

/*
==============
OnlineChallengesManager::HandleChallengeUpdate
==============
*/

bool __fastcall OnlineChallengesManager::HandleChallengeUpdate(OnlineChallengesManager *this, const XUID xuid, bdJSONDeserializer *json)
{
  return ?HandleChallengeUpdate@OnlineChallengesManager@@AEAA_NUXUID@@PEAVbdJSONDeserializer@@@Z(this, xuid, json);
}

/*
==============
OnlineChallengesManager::Uninit
==============
*/

void __fastcall OnlineChallengesManager::Uninit(OnlineChallengesManager *this)
{
  ?Uninit@OnlineChallengesManager@@UEAAXXZ(this);
}

/*
==============
OnlineChallengesManager::ResetUser
==============
*/

void __fastcall OnlineChallengesManager::ResetUser(OnlineChallengesManager *this, const int controllerIndex)
{
  ?ResetUser@OnlineChallengesManager@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineChallengesManager::ControllerFrame
==============
*/

void __fastcall OnlineChallengesManager::ControllerFrame(OnlineChallengesManager *this, const int controllerIndex)
{
  ?ControllerFrame@OnlineChallengesManager@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineChallengesManager::HandleChallengeCompletion
==============
*/

bool __fastcall OnlineChallengesManager::HandleChallengeCompletion(OnlineChallengesManager *this, const XUID xuid, bdJSONDeserializer *json)
{
  return ?HandleChallengeCompletion@OnlineChallengesManager@@AEAA_NUXUID@@PEAVbdJSONDeserializer@@@Z(this, xuid, json);
}

/*
==============
OnlineChallengesManager::StartMatch
==============
*/

void __fastcall OnlineChallengesManager::StartMatch(OnlineChallengesManager *this)
{
  ?StartMatch@OnlineChallengesManager@@QEAAXXZ(this);
}

/*
==============
OnlineChallengesManager::OnSignedOut
==============
*/

void __fastcall OnlineChallengesManager::OnSignedOut(OnlineChallengesManager *this, const int controllerIndex, GenericSignOutState signinState)
{
  ?OnSignedOut@OnlineChallengesManager@@UEAAXHW4GenericSignOutState@@@Z(this, controllerIndex, signinState);
}

/*
==============
OnlineChallengesManager::ReadEventParams
==============
*/

bool __fastcall OnlineChallengesManager::ReadEventParams(OnlineChallengesManager *this, char *eventParams, const unsigned int eventParamsSize, const unsigned int eventParamCount)
{
  return ?ReadEventParams@OnlineChallengesManager@@AEAA_NPEADII@Z(this, eventParams, eventParamsSize, eventParamCount);
}

/*
==============
OnlineChallengesManager::FetchProgressionState
==============
*/

void __fastcall OnlineChallengesManager::FetchProgressionState(OnlineChallengesManager *this, const int controllerIndex, const char *nextPageToken)
{
  ?FetchProgressionState@OnlineChallengesManager@@AEAAXHPEBD@Z(this, controllerIndex, nextPageToken);
}

/*
==============
OnlineChallengesManager::ChallengeProgressFetched
==============
*/

bool __fastcall OnlineChallengesManager::ChallengeProgressFetched(OnlineChallengesManager *this, const int controllerIndex)
{
  return ?ChallengeProgressFetched@OnlineChallengesManager@@QEAA_NH@Z(this, controllerIndex);
}

/*
==============
OnlineChallengesManager::FlushAllEventCaches
==============
*/

void __fastcall OnlineChallengesManager::FlushAllEventCaches(OnlineChallengesManager *this)
{
  ?FlushAllEventCaches@OnlineChallengesManager@@AEAAXXZ(this);
}

/*
==============
OnlineChallengesManager::GetInstancePtr
==============
*/

OnlineChallengesManager *__fastcall OnlineChallengesManager::GetInstancePtr()
{
  return ?GetInstancePtr@OnlineChallengesManager@@SAPEAV1@XZ();
}

/*
==============
OnlineChallengesManager::ResetXPCache
==============
*/

void __fastcall OnlineChallengesManager::ResetXPCache(OnlineChallengesManager *this)
{
  ?ResetXPCache@OnlineChallengesManager@@AEAAXXZ(this);
}

/*
==============
OnlineChallengesManager::Init
==============
*/

bool __fastcall OnlineChallengesManager::Init(OnlineChallengesManager *this)
{
  return ?Init@OnlineChallengesManager@@UEAA_NXZ(this);
}

/*
==============
OnlineChallengesManager::GetEventCacheEventName
==============
*/

const char *__fastcall OnlineChallengesManager::GetEventCacheEventName(OnlineChallengesManager *this, ChallengeEventCacheType cacheType)
{
  return ?GetEventCacheEventName@OnlineChallengesManager@@AEBAPEBDW4ChallengeEventCacheType@@@Z(this, cacheType);
}

/*
==============
OnlineChallengesManager::GetProgressionState
==============
*/

bdGetAchievementStatesResponse *__fastcall OnlineChallengesManager::GetProgressionState(OnlineChallengesManager *this, bdGetAchievementStatesResponse *result, const int controllerIndex)
{
  return ?GetProgressionState@OnlineChallengesManager@@AEAA?AVbdGetAchievementStatesResponse@@H@Z(this, result, controllerIndex);
}

/*
==============
OnlineChallengesManager::FlushXPCache
==============
*/

void __fastcall OnlineChallengesManager::FlushXPCache(OnlineChallengesManager *this)
{
  ?FlushXPCache@OnlineChallengesManager@@AEAAXXZ(this);
}

/*
==============
OnlineChallengesManager::Reset
==============
*/

void __fastcall OnlineChallengesManager::Reset(OnlineChallengesManager *this)
{
  ?Reset@OnlineChallengesManager@@QEAAXXZ(this);
}

/*
==============
OnlineChallengesManager::ParseOperators
==============
*/

unsigned __int64 __fastcall OnlineChallengesManager::ParseOperators(OnlineChallengesManager *this, char *eventType)
{
  return ?ParseOperators@OnlineChallengesManager@@QEBA_KPEAD@Z(this, eventType);
}

/*
==============
OnlineChallengesManager::ResetController
==============
*/

void __fastcall OnlineChallengesManager::ResetController(OnlineChallengesManager *this, int controllerIndex)
{
  ?ResetController@OnlineChallengesManager@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineChallengesManager::GetOperatorParamIndex
==============
*/

int __fastcall OnlineChallengesManager::GetOperatorParamIndex(OnlineChallengesManager *this, ChallengeEventCacheType cacheType)
{
  return ?GetOperatorParamIndex@OnlineChallengesManager@@AEBAHW4ChallengeEventCacheType@@@Z(this, cacheType);
}

/*
==============
OnlineChallengesManager::OnResetUserComplete
==============
*/

void __fastcall OnlineChallengesManager::OnResetUserComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  ?OnResetUserComplete@OnlineChallengesManager@@SAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(pTask, taskState);
}

/*
==============
OnlineChallengesManager::ProcessParams
==============
*/

bool __fastcall OnlineChallengesManager::ProcessParams(OnlineChallengesManager *this, const char *name, const char *params, CachedChallengeEventData *data)
{
  return ?ProcessParams@OnlineChallengesManager@@QEAA_NPEBD0PEAUCachedChallengeEventData@@@Z(this, name, params, data);
}

/*
==============
OnlineChallengesManager::OnUnregistered
==============
*/

void __fastcall OnlineChallengesManager::OnUnregistered(OnlineChallengesManager *this)
{
  ?OnUnregistered@OnlineChallengesManager@@UEAAXXZ(this);
}

/*
==============
OnlineChallengesManager::GetFirstPartyDetailsFromLobby
==============
*/

bool __fastcall OnlineChallengesManager::GetFirstPartyDetailsFromLobby(OnlineChallengesManager *this, XUID xuid, bdUserAccountID *userFirstPartyID, bdPlatformID *platform, bool *isPremium)
{
  return ?GetFirstPartyDetailsFromLobby@OnlineChallengesManager@@AEAA_NUXUID@@AEAVbdUserAccountID@@AEAW4bdPlatformID@@AEA_N@Z(this, xuid, userFirstPartyID, platform, isPremium);
}

/*
==============
OnlineChallengesManager::FenceDependeciesUpdated
==============
*/

void __fastcall OnlineChallengesManager::FenceDependeciesUpdated(const int controllerIndex, const bool value)
{
  ?FenceDependeciesUpdated@OnlineChallengesManager@@CAXH_N@Z(controllerIndex, value);
}

/*
==============
OnlineChallengesManager::OnRegistered
==============
*/

void __fastcall OnlineChallengesManager::OnRegistered(OnlineChallengesManager *this)
{
  ?OnRegistered@OnlineChallengesManager@@UEAAXXZ(this);
}

/*
==============
OnlineChallengesManager::OnSignedIn
==============
*/

void __fastcall OnlineChallengesManager::OnSignedIn(OnlineChallengesManager *this, const int controllerIndex, GenericSignInState signinState)
{
  ?OnSignedIn@OnlineChallengesManager@@UEAAXHW4GenericSignInState@@@Z(this, controllerIndex, signinState);
}

/*
==============
OnlineChallengesManager::RecordChallenges
==============
*/

void __fastcall OnlineChallengesManager::RecordChallenges(OnlineChallengesManager *this)
{
  ?RecordChallenges@OnlineChallengesManager@@AEAAXXZ(this);
}

/*
==============
OnlineChallengesManager::ResetAllEventCaches
==============
*/

void __fastcall OnlineChallengesManager::ResetAllEventCaches(OnlineChallengesManager *this)
{
  ?ResetAllEventCaches@OnlineChallengesManager@@AEAAXXZ(this);
}

/*
==============
OnlineChallengesManager::GetEventCacheFlushTime
==============
*/

int __fastcall OnlineChallengesManager::GetEventCacheFlushTime(OnlineChallengesManager *this, ChallengeEventCacheType cacheType)
{
  return ?GetEventCacheFlushTime@OnlineChallengesManager@@AEBAHW4ChallengeEventCacheType@@@Z(this, cacheType);
}

/*
==============
OnlineChallengesManager::Frame
==============
*/

void __fastcall OnlineChallengesManager::Frame(OnlineChallengesManager *this)
{
  ?Frame@OnlineChallengesManager@@UEAAXXZ(this);
}

/*
==============
OnlineChallengesManager::AchievementEvent
==============
*/

void __fastcall OnlineChallengesManager::AchievementEvent(OnlineChallengesManager *this, const bdUserAccountID *userID, const char *context, const bdRewardEventJSONV2 *rewardEvent)
{
  ?AchievementEvent@OnlineChallengesManager@@QEAAXVbdUserAccountID@@QEBDAEBVbdRewardEventJSONV2@@@Z(this, userID, context, rewardEvent);
}

/*
==============
OnlineChallengesManager::FlushEventCache
==============
*/

void __fastcall OnlineChallengesManager::FlushEventCache(OnlineChallengesManager *this, ChallengeEventCacheType cacheType)
{
  ?FlushEventCache@OnlineChallengesManager@@AEAAXW4ChallengeEventCacheType@@@Z(this, cacheType);
}

/*
==============
OnlineChallengesManager::AddGamemode
==============
*/

void __fastcall OnlineChallengesManager::AddGamemode(OnlineChallengesManager *this, bool isPaid, bdAchievementEvent *achievementEvent)
{
  ?AddGamemode@OnlineChallengesManager@@QEAAX_NAEAVbdAchievementEvent@@@Z(this, isPaid, achievementEvent);
}

/*
==============
OnlineChallengesManager::OnRegistered
==============
*/
void OnlineChallengesManager::OnRegistered(OnlineChallengesManager *this)
{
  Cmd_AddCommandInternal("ch_event", CL_ChallengeEvent, &CL_ChallengeEvent_VAR);
}

/*
==============
OnlineChallengesManager::OnUnregistered
==============
*/
void OnlineChallengesManager::OnUnregistered(OnlineChallengesManager *this)
{
  Cmd_RemoveCommand("ch_event");
}

/*
==============
OnlineChallengesManager::Init
==============
*/
char OnlineChallengesManager::Init(OnlineChallengesManager *this)
{
  __int64 v1; 
  bool v2; 

  OnlineChallengesManager::Reset(this);
  v1 = 0i64;
  v2 = 1;
  do
  {
    if ( !v2 )
    {
      j___report_rangecheckfailure(s_fenceDependenciesMet);
      JUMPOUT(0x140BACF52i64);
    }
    s_fenceDependenciesMet[v1] = 0;
    v2 = (unsigned __int64)++v1 < 8;
  }
  while ( v1 < 8 );
  FenceManager_RegisterForFenceDependenciesUpdatesForAllControllers(FENCE_ACHIEVEMENTENGINE, (void (__fastcall *)(int, bool))OnlineChallengesManager::FenceDependeciesUpdated);
  return 1;
}

/*
==============
OnlineChallengesManager::Uninit
==============
*/

void __fastcall OnlineChallengesManager::Uninit(OnlineChallengesManager *this)
{
  OnlineChallengesManager::Reset(this);
}

/*
==============
OnlineChallengesManager::Frame
==============
*/
void OnlineChallengesManager::Frame(OnlineChallengesManager *this)
{
  const dvar_t *v2; 
  int integer; 
  int v4; 
  int *p_cacheFlushTime; 
  int v6; 
  const dvar_t *v7; 
  bool v8; 
  const char *v9; 
  __int64 v10; 

  OnlineChallengesManager::RecordChallenges(this);
  if ( Sys_Milliseconds() > this->m_xpCacheFlushTime )
  {
    OnlineChallengesManager::FlushXPCache(this);
    v2 = DVARINT_online_challenge_cache_flush_time;
    if ( !DVARINT_online_challenge_cache_flush_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_challenge_cache_flush_time") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v2);
    integer = v2->current.integer;
    this->m_xpCacheFlushTime = integer + Sys_Milliseconds();
  }
  v4 = 0;
  p_cacheFlushTime = &this->m_caches[0].cacheFlushTime;
  do
  {
    if ( Sys_Milliseconds() <= *p_cacheFlushTime )
      goto LABEL_28;
    OnlineChallengesManager::FlushEventCache(this, (ChallengeEventCacheType)v4);
    switch ( v4 )
    {
      case 0:
        v7 = DVARINT_online_challenge_cache_driving_flush_time;
        if ( DVARINT_online_challenge_cache_driving_flush_time )
          goto LABEL_26;
        v9 = "online_challenge_cache_driving_flush_time";
        goto LABEL_23;
      case 1:
        v7 = DVARINT_online_challenge_cache_alive_in_gas_flush_time;
        if ( DVARINT_online_challenge_cache_alive_in_gas_flush_time )
          goto LABEL_26;
        v9 = "online_challenge_cache_alive_in_gas_flush_time";
        goto LABEL_23;
      case 2:
        v7 = DVARINT_online_challenge_cache_alive_not_downed_flush_time;
        if ( DVARINT_online_challenge_cache_alive_not_downed_flush_time )
          goto LABEL_26;
        v9 = "online_challenge_cache_alive_not_downed_flush_time";
LABEL_23:
        v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v9);
LABEL_24:
        if ( v8 )
          __debugbreak();
        goto LABEL_26;
    }
    if ( v4 != 3 )
    {
      LODWORD(v10) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_challenges.cpp", 182, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled cache type %i", v10) )
        __debugbreak();
      v6 = 120000;
      goto LABEL_27;
    }
    v7 = DVARINT_online_challenge_cache_pickup_flush_time;
    if ( !DVARINT_online_challenge_cache_pickup_flush_time )
    {
      v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_challenge_cache_pickup_flush_time");
      goto LABEL_24;
    }
LABEL_26:
    Dvar_CheckFrontendServerThread(v7);
    v6 = v7->current.integer;
LABEL_27:
    *p_cacheFlushTime = v6 + Sys_Milliseconds();
LABEL_28:
    ++v4;
    p_cacheFlushTime += 4100;
  }
  while ( v4 < 4 );
}

/*
==============
OnlineChallengesManager::ControllerFrame
==============
*/
void OnlineChallengesManager::ControllerFrame(OnlineChallengesManager *this, const int controllerIndex)
{
  __int64 v2; 
  __int64 v4; 
  DWServicesAccess *Instance; 
  DWAchievementEngine *AchievementEngine; 
  const dvar_t *v7; 
  DWAchievementEngine *v8; 
  DWServicesAccess *v9; 
  DWAchievementEngineClient *AchievementEngineClient; 
  const dvar_t *v11; 
  DWAchievementEngineClient *v12; 
  DWServicesAccess *v13; 
  DWAchievementEngineClient *v14; 

  v2 = controllerIndex;
  if ( dwGetLogOnStatus(controllerIndex) == DW_LIVE_CONNECTED )
  {
    if ( this->m_aeFetchState[v2] == 1 && s_fenceDependenciesMet[v2] && Sys_Milliseconds() > this->m_nextGetStateTime[v2] )
    {
      v4 = v2;
      *(_QWORD *)&this->m_getStateRetry[v4].m_numRetries = 0i64;
      this->m_getStateRetry[v4].m_retrying = 0;
      Com_Printf(25, "FetchProgressionState: For controller %d.\n", (unsigned int)v2);
      this->m_aeFetchTypeState[v2] = 0;
      OnlineChallengesManager::FetchProgressionState(this, v2, (const char *)&queryFormat.fmt + 3);
    }
    if ( this->m_aeFetchState[v2] == 4 && Online_Retry::ShouldRetry(&this->m_getStateRetry[v2]) )
    {
      Com_Printf(25, "FetchProgressionState: Retry for controller %d.\n", (unsigned int)v2);
      this->m_aeFetchTypeState[v2] = 0;
      OnlineChallengesManager::FetchProgressionState(this, v2, (const char *)&queryFormat.fmt + 3);
    }
    Instance = DWServicesAccess::GetInstance();
    AchievementEngine = DWServicesAccess::GetAchievementEngine(Instance, v2);
    v7 = DVARBOOL_online_challenge_rest_request_enabled;
    v8 = AchievementEngine;
    if ( !DVARBOOL_online_challenge_rest_request_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_challenge_rest_request_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    DWAchievementEngine::setRestRequestsEnabled(v8, v7->current.enabled);
    v9 = DWServicesAccess::GetInstance();
    AchievementEngineClient = DWServicesAccess::GetAchievementEngineClient(v9, v2);
    v11 = DVARFLT_online_challenge_ae_client_flush_time;
    v12 = AchievementEngineClient;
    if ( !DVARFLT_online_challenge_ae_client_flush_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_challenge_ae_client_flush_time") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    DWAchievementEngineClient::setFlushIntervalSeconds(v12, v11->current.value);
    v13 = DWServicesAccess::GetInstance();
    v14 = DWServicesAccess::GetAchievementEngineClient(v13, v2);
    v14->pump(v14);
  }
}

/*
==============
OnlineChallengesManager::OnSignedIn
==============
*/
void OnlineChallengesManager::OnSignedIn(OnlineChallengesManager *this, const int controllerIndex, GenericSignInState signinState)
{
  ;
}

/*
==============
OnlineChallengesManager::OnSignedOut
==============
*/
void OnlineChallengesManager::OnSignedOut(OnlineChallengesManager *this, const int controllerIndex, GenericSignOutState signinState)
{
  this->m_aeFetchState[controllerIndex] = 1;
  this->m_nextGetStateTime[controllerIndex] = 0;
  this->m_aeInitialFetch[controllerIndex] = 0;
}

/*
==============
OnlineChallengesManager::AchievementEvent
==============
*/
void OnlineChallengesManager::AchievementEvent(OnlineChallengesManager *this, const bdUserAccountID *userID, const char *context, const bdRewardEventJSONV2 *rewardEvent)
{
  const char *JsonData; 
  const char *v8; 
  int v9; 
  __int64 v10; 
  __int64 v11; 
  char v12; 
  char v13; 
  bool String; 
  int v16; 
  int v17; 
  int v18; 
  const XUID *v19; 
  bool v20; 
  const XUID *v21; 
  bdJSONDeserializer json; 
  XUID v23; 
  __int64 v24; 
  XUID result; 
  const bdUserAccountID *v26; 
  char v27[8]; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  char value[512]; 

  v24 = -2i64;
  v26 = userID;
  JsonData = bdRewardEventJSONV2::getJsonData((bdRewardEventJSONV2 *)rewardEvent);
  bdJSONDeserializer::bdJSONDeserializer(&json, JsonData);
  if ( !json.m_parsed )
  {
    Com_PrintError(25, "Malformed JSON in achievement message\n");
    goto LABEL_37;
  }
  v8 = bdRewardEventJSONV2::getJsonData((bdRewardEventJSONV2 *)rewardEvent);
  Com_Printf(6, "Achievement Event: %s\n", v8);
  memset_0(value, 0, sizeof(value));
  if ( !bdJSONDeserializer::getString(&json, "type", value, 0x200u) )
  {
LABEL_36:
    Com_PrintError(25, "Achievement message has bad type value\n");
    goto LABEL_37;
  }
  v9 = 0;
  v10 = 0x7FFFFFFFi64;
  v11 = 0i64;
  do
  {
    v12 = value[v11];
    v13 = aAchievement[v11++];
    if ( !v10-- )
      break;
    if ( v12 != v13 )
      goto LABEL_36;
  }
  while ( v12 );
  if ( !bdJSONDeserializer::getString(&json, (const char *const)&stru_143C9A1A4, value, 0x200u) )
  {
    Com_PrintError(25, "Achievement message has bad name value\n");
    goto LABEL_37;
  }
  String = bdJSONDeserializer::getString(&json, "reason", value, 0x200u);
  if ( I_strcmp(value, "inProgress") )
  {
    if ( I_strcmp(value, "completed") )
    {
      if ( I_strcmp(value, "claimable") )
      {
        if ( !I_strcmp(value, "expired") )
          v9 = 4;
      }
      else
      {
        v9 = 3;
      }
    }
    else
    {
      v9 = 2;
    }
  }
  else
  {
    v9 = 1;
  }
  if ( !String || !v9 )
  {
    Com_PrintError(25, "Bad or missing reason for achievement event (%s)\n", value);
    goto LABEL_37;
  }
  v16 = v9 - 1;
  if ( !v16 )
  {
    v21 = XUID::FromUniversalId(&v23, userID->m_userID);
    v20 = OnlineChallengesManager::HandleChallengeUpdate(this, (const XUID)v21->m_id, &json);
    goto LABEL_32;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    v19 = XUID::FromUniversalId(&v23, userID->m_userID);
    v20 = OnlineChallengesManager::HandleChallengeCompletion(this, (const XUID)v19->m_id, &json);
LABEL_32:
    String = v20;
LABEL_33:
    if ( !String )
      Com_PrintError(25, "Failure to fully parse Achievement Event\n");
    goto LABEL_37;
  }
  v18 = v17 - 1;
  if ( !v18 )
    goto LABEL_33;
  if ( v18 != 1 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_challenges.cpp", 2731, ASSERT_TYPE_ASSERT, "(false)", (const char *)&queryFormat, "false") )
      __debugbreak();
    goto LABEL_33;
  }
  XUID::FromUniversalId(&result, userID->m_userID);
  *(_QWORD *)v27 = 0i64;
  v28 = 0i64;
  v29 = 0i64;
  v30 = 0i64;
  if ( bdJSONDeserializer::getString(&json, "status", v27, 0x20u) )
  {
    if ( !bdJSONDeserializer::getUInt64(&json, "expirationTimestamp", &v23.m_id) )
    {
      Com_PrintError(25, "Achievement message has bad expirationTimestamp value\n");
      Com_PrintError(25, "Failure to fully parse Achievement Event\n");
    }
  }
  else
  {
    Com_PrintError(25, "Achievement message has bad newStatus value\n");
    Com_PrintError(25, "Failure to fully parse Achievement Event\n");
  }
LABEL_37:
  bdJSONDeserializer::~bdJSONDeserializer(&json);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
}

/*
==============
OnlineChallengesManager::AddGamemode
==============
*/
void OnlineChallengesManager::AddGamemode(OnlineChallengesManager *this, bool isPaid, bdAchievementEvent *achievementEvent)
{
  char ActiveGameMode; 
  const dvar_t *v6; 
  char v7; 
  unsigned __int64 integer; 
  GHandler *Handler; 

  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  v6 = DVARINT_online_challenge_gamemode_override;
  v7 = ActiveGameMode;
  if ( !DVARINT_online_challenge_gamemode_override && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_challenge_gamemode_override") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.integer <= 0 )
  {
    switch ( v7 )
    {
      case 1:
        integer = 1i64;
        break;
      case 2:
        Handler = GHandler::getHandler();
        if ( BG_IsGameTypeQuick_BR(Handler) || BG_IsGameTypeQuick_BRTDM(Handler) )
        {
          integer = 8i64;
          if ( isPaid )
            integer = 24i64;
        }
        else
        {
          integer = 2i64;
        }
        break;
      case 3:
        integer = 4i64;
        break;
      default:
        integer = 0i64;
        break;
    }
  }
  else
  {
    integer = v6->current.integer;
  }
  bdAchievementEvent::addKeyValue(achievementEvent, "gamemode", integer);
}

/*
==============
CL_ChallengeEvent
==============
*/
void CL_ChallengeEvent(void)
{
  unsigned int v0; 
  int v1; 
  const char *v2; 
  const char *v3; 
  unsigned __int64 UTC; 
  const XUID *Xuid; 
  unsigned int timestamp; 
  int v7; 
  XUID result; 

  if ( Cmd_Argc() >= 2 )
  {
    v0 = Cmd_LocalControllerIndex();
    v1 = v0;
    if ( v0 > 8 )
    {
      v7 = 8;
      timestamp = v0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_challenges.cpp", 78, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", timestamp, 0i64, v7) )
        __debugbreak();
    }
    v2 = Cmd_Argv(1);
    v3 = Cmd_Argv(2);
    UTC = LiveStorage_GetUTC();
    Xuid = Live_GetXuid(&result, v1);
    OnlineChallengesManager::RecordEventForPlayer(&OnlineChallengesManager::s_instance, v1, (const XUID)Xuid->m_id, v2, v3, UTC);
  }
  else
  {
    Com_Printf(0, "usage: ch_event [event][params]\n");
  }
}

/*
==============
OnlineChallengesManager::ChallengeProgressFetched
==============
*/
bool OnlineChallengesManager::ChallengeProgressFetched(OnlineChallengesManager *this, const int controllerIndex)
{
  const dvar_t *v2; 
  __int64 v4; 

  v2 = DVARBOOL_online_challenge_fence_enabled;
  v4 = controllerIndex;
  if ( !DVARBOOL_online_challenge_fence_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_challenge_fence_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( !v2->current.enabled )
    return this->m_aeFetchState[v4] == 3;
  return this->m_aeInitialFetch[v4] || this->m_aeFetchState[v4] == 3;
}

/*
==============
OnlineChallengesManager::FenceDependeciesUpdated
==============
*/
void OnlineChallengesManager::FenceDependeciesUpdated(const int controllerIndex, const bool value)
{
  __int64 v2; 
  const char *v4; 

  v2 = controllerIndex;
  v4 = "false";
  if ( value )
    v4 = "true";
  Com_Printf(25, "OnlineChallengesManager::FenceDependeciesUpdated( %d, %s )\n", (unsigned int)controllerIndex, v4);
  s_fenceDependenciesMet[v2] = value;
  if ( !value && OnlineChallengesManager::s_instance.m_aeFetchState[v2] != 2 && !Live_IsAnybodySignedInToLive() )
  {
    Com_Printf(25, "OnlineChallengesManager::FenceDependeciesUpdated Reset()\n");
    OnlineChallengesManager::Reset(&OnlineChallengesManager::s_instance);
  }
}

/*
==============
OnlineChallengesManager::FetchProgressionState
==============
*/
void OnlineChallengesManager::FetchProgressionState(OnlineChallengesManager *this, const int controllerIndex, const char *nextPageToken)
{
  __int64 v4; 
  DWServicesAccess *Instance; 
  __int64 ClientFromController; 
  DWServicesAccess *v8; 
  unsigned int TitleID; 
  const char *v10; 
  char v11; 
  DWServicesAccess *v12; 
  DWAchievementEngine *AchievementEngine; 
  TaskCreateRequest *AchievementStates; 
  bdRemoteTask *v15; 
  TaskManager *v16; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateRequest pTaskCreateRequest; 
  bdReference<bdRemoteTask> result; 
  TaskCreateResult pTaskCreateResult; 
  __int64 v21; 
  bdGetAchievementStatesRequest request; 

  v21 = -2i64;
  v4 = controllerIndex;
  if ( Live_UserIsGuest(controllerIndex) )
    return;
  Instance = DWServicesAccess::GetInstance();
  if ( !DWServicesAccess::isReady(Instance, v4) )
    return;
  ClientFromController = CL_Mgr_GetClientFromController(v4);
  v8 = DWServicesAccess::GetInstance();
  TitleID = DWServicesAccess::GetTitleID(v8);
  v10 = j_va("%u", TitleID);
  bdGetAchievementStatesRequest::bdGetAchievementStatesRequest(&request, v10, 0x64u, nextPageToken);
  v11 = this->m_aeFetchTypeState[v4];
  if ( v11 )
  {
    if ( v11 == 1 )
    {
      bdGetAchievementStatesRequest::addKind(&request, 6u);
      bdGetAchievementStatesRequest::addKind(&request, 0xFu);
      bdGetAchievementStatesRequest::addKind(&request, 0x1Fu);
      bdGetAchievementStatesRequest::addStatus(&request, (bdAchievementStatus::Enum)4);
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_challenges.cpp", 896, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Illegal OnlineChallengeFetchTypeState") )
    {
      __debugbreak();
    }
  }
  else
  {
    bdGetAchievementStatesRequest::addKind(&request, 0);
    bdGetAchievementStatesRequest::addKind(&request, 5u);
    bdGetAchievementStatesRequest::addKind(&request, 6u);
    bdGetAchievementStatesRequest::addKind(&request, 8u);
    bdGetAchievementStatesRequest::addKind(&request, 0xAu);
    bdGetAchievementStatesRequest::addKind(&request, 0xBu);
    bdGetAchievementStatesRequest::addKind(&request, 0xCu);
    bdGetAchievementStatesRequest::addKind(&request, 0xDu);
    bdGetAchievementStatesRequest::addKind(&request, 0xEu);
    bdGetAchievementStatesRequest::addKind(&request, 0xFu);
    bdGetAchievementStatesRequest::addKind(&request, 0x10u);
    bdGetAchievementStatesRequest::addKind(&request, 0x14u);
    bdGetAchievementStatesRequest::addKind(&request, 0x15u);
    bdGetAchievementStatesRequest::addKind(&request, 0x19u);
    bdGetAchievementStatesRequest::addKind(&request, 0x1Bu);
    bdGetAchievementStatesRequest::addKind(&request, 0x1Au);
    bdGetAchievementStatesRequest::addKind(&request, 0x1Eu);
    bdGetAchievementStatesRequest::addKind(&request, 0x1Fu);
    bdGetAchievementStatesRequest::addKind(&request, 0x20u);
    bdGetAchievementStatesRequest::addKind(&request, 0x22u);
    bdGetAchievementStatesRequest::addStatus(&request, ACTIVE);
    bdGetAchievementStatesRequest::addStatus(&request, (bdAchievementStatus::Enum)3);
    bdGetAchievementStatesRequest::addStatus(&request, (bdAchievementStatus::Enum)5);
  }
  this->m_aeFetchState[v4] = 2;
  *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
  memset(&pTaskCreateRequest.m_appData, 0, 48);
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  bdGetAchievementStatesResponse::reset(&this->m_progressionState[ClientFromController]);
  v12 = DWServicesAccess::GetInstance();
  AchievementEngine = DWServicesAccess::GetAchievementEngine(v12, v4);
  AchievementStates = (TaskCreateRequest *)DWAchievementEngine::getAchievementStates(AchievementEngine, &result, &request, &this->m_progressionState[ClientFromController]);
  if ( AchievementStates != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    v15 = *(bdRemoteTask **)&AchievementStates->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v15;
    if ( v15 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v15->m_refCount, 1u);
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  if ( !pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
  {
    Com_PrintError(25, "getAchievementStates() -  failed for controllerIndex %d\n", (unsigned int)v4);
    goto LABEL_21;
  }
  pTaskCreateRequest.m_controllerIndex = v4;
  pTaskCreateRequest.m_onCompletionCallback = OnlineChallengesManager::OnGetProgressionComplete;
  v16 = TaskManager::GetInstance();
  if ( !TaskManager::CreateTask(v16, &pTaskCreateRequest, &pTaskCreateResult) )
  {
    Com_PrintError(25, "getAchievementStates() - CreateTask failed for controllerIndex %d!\n", (unsigned int)v4);
LABEL_21:
    this->m_aeFetchState[v4] = 4;
    Online_Retry::SetNextRetry(&this->m_getStateRetry[v4]);
    goto LABEL_22;
  }
  Com_Printf(25, "getAchievementStates() - CreateTask created task id %d controllerIndex %d!\n", pTaskCreateResult.m_localTaskId, (unsigned int)v4);
LABEL_22:
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
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)request.m_firstPartyUser.m_value._bytes_48);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)request.m_firstPartyUser.m_value.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)request.m_firstPartyUser.m_value._bytes_48);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)request.m_user.m_value._bytes_48);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)request.m_user.m_value.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)request.m_user.m_value._bytes_48);
  `eh vector destructor iterator'(&request.m_achievementNames, 0x65ui64, 3ui64, (void (__fastcall *)(void *))bdStructFixedSizeString<100>::~bdStructFixedSizeString<100>);
  bdStructFixedSizeString<1024>::~bdStructFixedSizeString<1024>(&request.m_pageToken);
  bdStructFixedSizeString<20>::~bdStructFixedSizeString<20>((bdStructFixedSizeString<20> *)(&request.__vftable + 2));
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&request.__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)(&request.m_platform + 1));
}

/*
==============
OnlineChallengesManager::FlushAllEventCaches
==============
*/
void OnlineChallengesManager::FlushAllEventCaches(OnlineChallengesManager *this)
{
  int i; 

  for ( i = 0; i < 4; ++i )
    OnlineChallengesManager::FlushEventCache(this, (ChallengeEventCacheType)i);
}

/*
==============
OnlineChallengesManager::FlushEventCache
==============
*/
void OnlineChallengesManager::FlushEventCache(OnlineChallengesManager *this, ChallengeEventCacheType cacheType)
{
  OnlineChallengesManager *v2; 
  __int64 v3; 
  ChallengeEventCache *v4; 
  const char *v5; 
  int v6; 
  bdUserAccountID *p_first_party_xuid; 
  unsigned int UTC; 
  unsigned int v9; 
  unsigned __int64 *v10; 
  char *v11; 
  const char *v12; 
  int v13; 
  DWServicesAccess *Instance; 
  int ControllerFromClient; 
  DWAchievementEngineClient *AchievementEngineClient; 
  unsigned __int64 KeyValue; 
  unsigned __int8 v18; 
  bool v19; 
  int v20; 
  unsigned __int64 value; 
  ChallengeEventCache *v23; 
  const char *v25; 
  DLogContext context; 
  bdAchievementEvent achievementEvent; 
  char *name[4]; 
  unsigned __int64 v29[10]; 
  char buffer[4096]; 

  v2 = this;
  v3 = cacheType;
  v4 = &this->m_caches[cacheType];
  v23 = v4;
  if ( v4->eventCount )
  {
    Sys_EnterCriticalSection(CRITSECT_ONLINE_CHALLENGES);
    bdAchievementEvent::bdAchievementEvent(&achievementEvent);
    name[0] = "driving";
    name[1] = "alive_in_gas";
    name[2] = "alive_not_downed";
    name[3] = "pickup";
    v5 = name[v3];
    v25 = v5;
    v6 = 0;
    v20 = 0;
    if ( v4->eventCount > 0 )
    {
      p_first_party_xuid = &v4->events[0].first_party_xuid;
      do
      {
        bdAchievementEvent::reset(&achievementEvent);
        bdAchievementEvent::setName(&achievementEvent, v5);
        bdAchievementEvent::addKeyValue(&achievementEvent, "version", 1ui64);
        OnlineChallengesManager::AddGamemode(v2, p_first_party_xuid[-2].gap38[8], &achievementEvent);
        UTC = LiveStorage_GetUTC();
        bdAchievementEvent::setTimeStamp(&achievementEvent, UTC);
        memset_0(v29, 0, sizeof(v29));
        v9 = 0;
        if ( SHIDWORD(p_first_party_xuid[1].__vftable) > 0 )
        {
          v10 = v29;
          v11 = (char *)&p_first_party_xuid[1].__vftable + 12;
          do
          {
            if ( !v11[12] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 376, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
              __debugbreak();
            LODWORD(value) = *((_DWORD *)v11 - 1) ^ ((*((_DWORD *)v11 + 1) ^ ((_DWORD)v11 - 4)) * ((*((_DWORD *)v11 + 1) ^ ((_DWORD)v11 - 4)) + 2));
            HIDWORD(value) = ((*((_DWORD *)v11 + 1) ^ (unsigned int)v11) * ((*((_DWORD *)v11 + 1) ^ (unsigned int)v11) + 2)) ^ *(_DWORD *)v11;
            v12 = j_va("Param%d", v9);
            bdAchievementEvent::addKeyValue(&achievementEvent, v12, value);
            if ( !v11[12] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 363, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
              __debugbreak();
            v13 = *((_DWORD *)v11 + 1);
            *(_DWORD *)v10 = *((_DWORD *)v11 - 1) ^ ((((_DWORD)v11 - 4) ^ v13) * ((((_DWORD)v11 - 4) ^ v13) + 2));
            *((_DWORD *)v10 + 1) = (((unsigned int)v11 ^ v13) * (((unsigned int)v11 ^ v13) + 2)) ^ *(_DWORD *)v11;
            ++v9;
            v11 += 24;
            ++v10;
          }
          while ( (signed int)v9 < SHIDWORD(p_first_party_xuid[1].__vftable) );
          v6 = v20;
          v4 = v23;
          v2 = this;
          v5 = v25;
        }
        Instance = DWServicesAccess::GetInstance();
        ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
        AchievementEngineClient = DWServicesAccess::GetAchievementEngineClient(Instance, ControllerFromClient);
        DWAchievementEngineClient::reportUserEvent(AchievementEngineClient, p_first_party_xuid - 1, p_first_party_xuid, (bdPlatformID)p_first_party_xuid[1].__vftable, &achievementEvent);
        KeyValue = bdAchievementEvent::getKeyValue(&achievementEvent, "gamemode");
        v18 = KeyValue;
        if ( KeyValue > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned __int8)KeyValue, "unsigned", KeyValue) )
          __debugbreak();
        if ( DLog_IsActive() && DLog_CreateContext(&context, 0i64, buffer, 4096) )
        {
          if ( DLog_IsActive() )
          {
            v19 = DLog_BeginEvent(&context, "dlog_event_achievement_engine_event");
            context.autoEndEvent = 1;
            if ( v19 && DLog_UInt8(&context, "game_mode", v18) && DLog_String(&context, "event_name", v5, 0) && DLog_UInt64(&context, "param0", v29[0]) && DLog_UInt64(&context, "param1", v29[1]) && DLog_UInt64(&context, "param2", v29[2]) && DLog_UInt64(&context, "param3", v29[3]) && DLog_UInt64(&context, "param4", v29[4]) && DLog_UInt64(&context, "param5", v29[5]) && DLog_UInt64(&context, "param6", v29[6]) && DLog_UInt64(&context, "param7", v29[7]) && DLog_UInt64(&context, "param8", v29[8]) && DLog_UInt64(&context, "param9", v29[9]) )
              DLog_RecordContext(&context);
          }
          else
          {
            context.error = DLOG_ERROR_NOT_ACTIVE;
          }
        }
        v20 = ++v6;
        p_first_party_xuid = (bdUserAccountID *)((char *)p_first_party_xuid + 256);
      }
      while ( v6 < v4->eventCount );
    }
    OnlineChallengesManager::ResetEventCache(v2, cacheType);
    Sys_LeaveCriticalSection(CRITSECT_ONLINE_CHALLENGES);
    `eh vector destructor iterator'(&achievementEvent.m_keyValues, 0x40ui64, 0xAui64, (void (__fastcall *)(void *))bdAchievementEventKeyValue::`vbase destructor);
    bdStructFixedSizeString<100>::~bdStructFixedSizeString<100>((bdStructFixedSizeString<100> *)(&achievementEvent.__vftable + 3));
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&achievementEvent.__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)(&achievementEvent.m_keyValues + 1));
  }
}

/*
==============
OnlineChallengesManager::FlushXPCache
==============
*/
void OnlineChallengesManager::FlushXPCache(OnlineChallengesManager *this)
{
  int v2; 
  char *v3; 
  int v4; 
  char v5; 
  int v6; 
  char *v7; 
  char *v8; 
  unsigned int UTC; 
  DWServicesAccess *Instance; 
  int ControllerFromClient; 
  DWAchievementEngineClient *AchievementEngineClient; 
  unsigned int v13; 
  DWServicesAccess *v14; 
  int v15; 
  DWAchievementEngineClient *v16; 
  int v17; 
  unsigned __int64 value; 
  unsigned __int64 v19; 
  unsigned __int64 v20; 
  unsigned __int64 v21; 
  unsigned __int64 v22; 
  bdAchievementEvent achievementEvent; 

  if ( this->m_xpCacheAmount )
  {
    Sys_EnterCriticalSection(CRITSECT_ONLINE_CHALLENGES);
    bdAchievementEvent::bdAchievementEvent(&achievementEvent);
    v2 = 0;
    v17 = 0;
    if ( this->m_xpCacheAmount > 0 )
    {
      v3 = (char *)&this->m_xpCache[0].xp_amount.data + 4;
      do
      {
        v4 = *((_DWORD *)v3 + 267);
        if ( v4 )
        {
          v5 = 1;
          v6 = 0;
          if ( v4 > 0 )
          {
            v7 = v3 + 56;
            do
            {
              bdAchievementEvent::reset(&achievementEvent);
              bdAchievementEvent::setName(&achievementEvent, "mp_addxp");
              bdAchievementEvent::addKeyValue(&achievementEvent, "version", 1ui64);
              OnlineChallengesManager::AddGamemode(this, *(v3 - 164), &achievementEvent);
              if ( v5 )
              {
                v8 = v3 - 4;
                if ( !v3[12] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 376, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
                  __debugbreak();
                LODWORD(value) = *(_DWORD *)v8 ^ (((unsigned int)v8 ^ *((_DWORD *)v8 + 2)) * (((unsigned int)v8 ^ *((_DWORD *)v8 + 2)) + 2));
                HIDWORD(value) = *(_DWORD *)v3 ^ (((unsigned int)v3 ^ *((_DWORD *)v8 + 2)) * (((unsigned int)v3 ^ *((_DWORD *)v8 + 2)) + 2));
                bdAchievementEvent::addKeyValue(&achievementEvent, "Param0", value);
                if ( !v3[36] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 376, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
                  __debugbreak();
                LODWORD(v19) = *((_DWORD *)v3 + 5) ^ ((((_DWORD)v3 + 20) ^ *((_DWORD *)v3 + 7)) * ((((_DWORD)v3 + 20) ^ *((_DWORD *)v3 + 7)) + 2));
                HIDWORD(v19) = ((((_DWORD)v3 + 24) ^ *((_DWORD *)v3 + 7)) * ((((_DWORD)v3 + 24) ^ *((_DWORD *)v3 + 7)) + 2)) ^ *((_DWORD *)v3 + 6);
                bdAchievementEvent::addKeyValue(&achievementEvent, "Param4", v19);
                v5 = 0;
              }
              else
              {
                bdAchievementEvent::addKeyValue(&achievementEvent, "Param0", 0i64);
                bdAchievementEvent::addKeyValue(&achievementEvent, "Param4", 0i64);
              }
              bdAchievementEvent::addKeyValue(&achievementEvent, "Param1", 0i64);
              bdAchievementEvent::addKeyValue(&achievementEvent, "Param2", *((int *)v7 - 3));
              if ( !v7[12] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 376, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
                __debugbreak();
              LODWORD(v20) = *((_DWORD *)v7 - 1) ^ ((((_DWORD)v7 - 4) ^ *((_DWORD *)v7 + 1)) * ((((_DWORD)v7 - 4) ^ *((_DWORD *)v7 + 1)) + 2));
              HIDWORD(v20) = (((unsigned int)v7 ^ *((_DWORD *)v7 + 1)) * (((unsigned int)v7 ^ *((_DWORD *)v7 + 1)) + 2)) ^ *(_DWORD *)v7;
              bdAchievementEvent::addKeyValue(&achievementEvent, "Param3", v20);
              UTC = LiveStorage_GetUTC();
              bdAchievementEvent::setTimeStamp(&achievementEvent, UTC);
              Instance = DWServicesAccess::GetInstance();
              ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
              AchievementEngineClient = DWServicesAccess::GetAchievementEngineClient(Instance, ControllerFromClient);
              DWAchievementEngineClient::reportUserEvent(AchievementEngineClient, (const bdUserAccountID *)(v3 - 156), (const bdUserAccountID *)(v3 - 84), *((bdPlatformID *)v3 - 3), &achievementEvent);
              ++v6;
              v7 += 32;
            }
            while ( v6 < *((_DWORD *)v3 + 267) );
            v2 = v17;
          }
        }
        else
        {
          bdAchievementEvent::reset(&achievementEvent);
          bdAchievementEvent::setName(&achievementEvent, "mp_addxp");
          bdAchievementEvent::addKeyValue(&achievementEvent, "version", 1ui64);
          OnlineChallengesManager::AddGamemode(this, *(v3 - 164), &achievementEvent);
          if ( !v3[12] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 376, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
            __debugbreak();
          LODWORD(v21) = *((_DWORD *)v3 - 1) ^ ((((_DWORD)v3 - 4) ^ *((_DWORD *)v3 + 1)) * ((((_DWORD)v3 - 4) ^ *((_DWORD *)v3 + 1)) + 2));
          HIDWORD(v21) = *(_DWORD *)v3 ^ (((unsigned int)v3 ^ *((_DWORD *)v3 + 1)) * (((unsigned int)v3 ^ *((_DWORD *)v3 + 1)) + 2));
          bdAchievementEvent::addKeyValue(&achievementEvent, "Param0", v21);
          bdAchievementEvent::addKeyValue(&achievementEvent, "Param1", 0i64);
          bdAchievementEvent::addKeyValue(&achievementEvent, "Param2", 0i64);
          bdAchievementEvent::addKeyValue(&achievementEvent, "Param3", 0i64);
          if ( !v3[36] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 376, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
            __debugbreak();
          LODWORD(v22) = *((_DWORD *)v3 + 5) ^ ((((_DWORD)v3 + 20) ^ *((_DWORD *)v3 + 7)) * ((((_DWORD)v3 + 20) ^ *((_DWORD *)v3 + 7)) + 2));
          HIDWORD(v22) = ((((_DWORD)v3 + 24) ^ *((_DWORD *)v3 + 7)) * ((((_DWORD)v3 + 24) ^ *((_DWORD *)v3 + 7)) + 2)) ^ *((_DWORD *)v3 + 6);
          bdAchievementEvent::addKeyValue(&achievementEvent, "Param4", v22);
          v13 = LiveStorage_GetUTC();
          bdAchievementEvent::setTimeStamp(&achievementEvent, v13);
          v14 = DWServicesAccess::GetInstance();
          v15 = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
          v16 = DWServicesAccess::GetAchievementEngineClient(v14, v15);
          DWAchievementEngineClient::reportUserEvent(v16, (const bdUserAccountID *)(v3 - 156), (const bdUserAccountID *)(v3 - 84), *((bdPlatformID *)v3 - 3), &achievementEvent);
        }
        v17 = ++v2;
        v3 += 1240;
      }
      while ( v2 < this->m_xpCacheAmount );
    }
    OnlineChallengesManager::ResetXPCache(this);
    this->m_xpCacheAmount = 0;
    Sys_LeaveCriticalSection(CRITSECT_ONLINE_CHALLENGES);
    `eh vector destructor iterator'(&achievementEvent.m_keyValues, 0x40ui64, 0xAui64, (void (__fastcall *)(void *))bdAchievementEventKeyValue::`vbase destructor);
    bdStructFixedSizeString<100>::~bdStructFixedSizeString<100>((bdStructFixedSizeString<100> *)(&achievementEvent.__vftable + 3));
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&achievementEvent.__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)(&achievementEvent.m_keyValues + 1));
  }
}

/*
==============
OnlineChallengesManager::GetEventCacheEventName
==============
*/
const char *OnlineChallengesManager::GetEventCacheEventName(OnlineChallengesManager *this, ChallengeEventCacheType cacheType)
{
  __int64 v3[4]; 

  v3[0] = (__int64)"driving";
  v3[1] = (__int64)"alive_in_gas";
  v3[2] = (__int64)"alive_not_downed";
  v3[3] = (__int64)"pickup";
  return (const char *)v3[cacheType];
}

/*
==============
OnlineChallengesManager::GetEventCacheFlushTime
==============
*/
__int64 OnlineChallengesManager::GetEventCacheFlushTime(OnlineChallengesManager *this, ChallengeEventCacheType cacheType)
{
  const dvar_t *v3; 
  const char *v4; 

  switch ( cacheType )
  {
    case CHALLENGE_EVENT_CACHE_DRIVING:
      v3 = DVARINT_online_challenge_cache_driving_flush_time;
      if ( DVARINT_online_challenge_cache_driving_flush_time )
        goto LABEL_18;
      v4 = "online_challenge_cache_driving_flush_time";
      goto LABEL_16;
    case CHALLENGE_EVENT_CACHE_ALIVE_IN_GAS:
      v3 = DVARINT_online_challenge_cache_alive_in_gas_flush_time;
      if ( DVARINT_online_challenge_cache_alive_in_gas_flush_time )
        goto LABEL_18;
      v4 = "online_challenge_cache_alive_in_gas_flush_time";
      goto LABEL_16;
    case CHALLENGE_EVENT_CACHE_ALIVE_NOT_DOWNED:
      v3 = DVARINT_online_challenge_cache_alive_not_downed_flush_time;
      if ( DVARINT_online_challenge_cache_alive_not_downed_flush_time )
        goto LABEL_18;
      v4 = "online_challenge_cache_alive_not_downed_flush_time";
LABEL_16:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v4) )
        __debugbreak();
      goto LABEL_18;
    case CHALLENGE_EVENT_CACHE_PICKUP:
      v3 = DVARINT_online_challenge_cache_pickup_flush_time;
      if ( !DVARINT_online_challenge_cache_pickup_flush_time )
      {
        v4 = "online_challenge_cache_pickup_flush_time";
        goto LABEL_16;
      }
LABEL_18:
      Dvar_CheckFrontendServerThread(v3);
      return v3->current.unsignedInt;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_challenges.cpp", 182, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled cache type %i", cacheType) )
    __debugbreak();
  return 120000i64;
}

/*
==============
OnlineChallengesManager::GetFirstPartyDetailsFromLobby
==============
*/
char OnlineChallengesManager::GetFirstPartyDetailsFromLobby(OnlineChallengesManager *this, XUID xuid, bdUserAccountID *userFirstPartyID, bdPlatformID *platform, bool *isPremium)
{
  PartyData *ServerLobby; 
  unsigned int MemberByXUID; 
  int v10; 
  char MemberPlatform; 
  unsigned __int64 userID[2]; 
  bdUserAccountID other; 

  userID[1] = -2i64;
  ServerLobby = SV_MainMP_GetServerLobby();
  MemberByXUID = Party_FindMemberByXUID(ServerLobby, xuid);
  v10 = MemberByXUID;
  if ( MemberByXUID != -1 )
  {
    MemberPlatform = Party_GetMemberPlatform(ServerLobby, MemberByXUID);
    userID[0] = Party_GetPlatformId(ServerLobby, v10);
    bdUserAccountID::bdUserAccountID(&other, userID);
    bdUserAccountID::operator=(userFirstPartyID, &other);
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)other.gap38);
    bdReferencable::~bdReferencable((bdReferencable *)other.gap38);
    *isPremium = Party_PartyMemberIsPaid(ServerLobby, v10);
    if ( MemberPlatform > 0 )
    {
      if ( MemberPlatform <= 2 )
      {
        bdUserAccountID::setAccountType(userFirstPartyID, "bnet");
        *platform = BD_PLATFORM_ID_BATTLENET;
        return 1;
      }
      switch ( MemberPlatform )
      {
        case 3:
          bdUserAccountID::setAccountType(userFirstPartyID, "xbl");
          *platform = BD_PLATFORM_ID_XBOXONE;
          return 1;
        case 4:
          bdUserAccountID::setAccountType(userFirstPartyID, "psn");
          *platform = BD_PLATFORM_ID_PS4;
          return 1;
        case 5:
          bdUserAccountID::setAccountType(userFirstPartyID, "wecn");
          *platform = BD_PLATFORM_ID_WE_GAME;
          return 1;
      }
    }
  }
  return 0;
}

/*
==============
OnlineChallengesManager::GetInstance
==============
*/
OnlineChallengesManager *OnlineChallengesManager::GetInstance()
{
  return &OnlineChallengesManager::s_instance;
}

/*
==============
OnlineChallengesManager::GetInstancePtr
==============
*/
OnlineChallengesManager *OnlineChallengesManager::GetInstancePtr()
{
  return &OnlineChallengesManager::s_instance;
}

/*
==============
OnlineChallengesManager::GetOperatorParamIndex
==============
*/
__int64 OnlineChallengesManager::GetOperatorParamIndex(OnlineChallengesManager *this, ChallengeEventCacheType cacheType)
{
  if ( cacheType >= CHALLENGE_EVENT_CACHE_DRIVING )
  {
    if ( cacheType <= CHALLENGE_EVENT_CACHE_ALIVE_NOT_DOWNED )
      return 1i64;
    if ( cacheType == CHALLENGE_EVENT_CACHE_PICKUP )
      return 3i64;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_challenges.cpp", 201, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled cache type %i", cacheType) )
    __debugbreak();
  return 4i64;
}

/*
==============
OnlineChallengesManager::GetProgressionState
==============
*/
bdGetAchievementStatesResponse *OnlineChallengesManager::GetProgressionState(OnlineChallengesManager *this, bdGetAchievementStatesResponse *result, const int controllerIndex)
{
  unsigned int v5; 
  LocalClientNum_t ClientFromController; 
  bdGetAchievementStatesResponse *v7; 
  bdGetAchievementStatesResponse_vtbl **v8; 
  int v9; 
  __int64 v10; 
  __int64 v11; 
  bdGetAchievementStatesResponse_vtbl **v12; 
  bdStructFixedSizeString<1024> *p_m_nextPageToken; 
  bdStructFixedSizeString<1024> *v14; 
  __int64 v15; 

  v5 = 0;
  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  v7 = &this->m_progressionState[ClientFromController];
  *((_QWORD *)&result->__vftable + 1) = &bdGetAchievementStatesResponse::`vbtable';
  bdReferencable::bdReferencable((bdReferencable *)&result->gapDBB9[7], (const bdReferencable *)((char *)&v7->__vftable + *(int *)(*((_QWORD *)&this->m_progressionState[ClientFromController].__vftable + 1) + 4i64) + 8));
  bdStructBufferSerializable::bdStructBufferSerializable(result, v7);
  result->__vftable = (bdGetAchievementStatesResponse_vtbl *)&bdGetAchievementStatesResponse::`vftable'{for `bdStructBufferSerializable'};
  *(bdGetAchievementStatesResponse_vtbl **)((char *)&result->__vftable + *(int *)(*((_QWORD *)&result->__vftable + 1) + 4i64) + 8) = (bdGetAchievementStatesResponse_vtbl *)&bdGetAchievementStatesResponse::`vftable'{for `bdReferencable'};
  v8 = &result->__vftable + 2;
  `eh vector vbase constructor iterator'(&result->__vftable + 2, 0x228ui64, 0x64ui64, (void (__fastcall *)(void *))bdAchievementState::bdAchievementState, (void (__fastcall *)(void *))bdAchievementState::`vbase destructor);
  *(_DWORD *)&result->m_states[55184] = 0;
  v9 = *(_DWORD *)&v7->m_states[55184];
  *(_DWORD *)&result->m_states[55184] = v9;
  if ( v9 )
  {
    do
    {
      v10 = 69i64 * v5;
      v11 = (__int64)&v7->__vftable + v10 * 8 + 16;
      v12 = &v8[v10];
      bdReferencable::operator=((bdReferencable *)((char *)&v8[v10 + 1] + SHIDWORD(v8[v10 + 1]->serialize)), (const bdReferencable *)(SHIDWORD((*(bdGetAchievementStatesResponse_vtbl **)((char *)&v7->__vftable + v10 * 8 + 24))->serialize) + v11 + 8));
      v12[2] = *(bdGetAchievementStatesResponse_vtbl **)(v11 + 16);
      *(__m256i *)(v12 + 3) = *(__m256i *)(v11 + 24);
      *(__m256i *)(v12 + 7) = *(__m256i *)(v11 + 56);
      *(__m256i *)(v12 + 11) = *(__m256i *)(v11 + 88);
      *((_DWORD *)v12 + 30) = *(_DWORD *)(v11 + 120);
      *((_BYTE *)v12 + 124) = *(_BYTE *)(v11 + 124);
      *((_WORD *)v12 + 63) = *(_WORD *)(v11 + 126);
      *((_DWORD *)v12 + 32) = *(_DWORD *)(v11 + 128);
      *((_DWORD *)v12 + 33) = *(_DWORD *)(v11 + 132);
      *((_DWORD *)v12 + 34) = *(_DWORD *)(v11 + 136);
      v12[18] = *(bdGetAchievementStatesResponse_vtbl **)(v11 + 144);
      v12[19] = *(bdGetAchievementStatesResponse_vtbl **)(v11 + 152);
      v12[20] = *(bdGetAchievementStatesResponse_vtbl **)(v11 + 160);
      *((_DWORD *)v12 + 42) = *(_DWORD *)(v11 + 168);
      if ( v12 + 22 != (bdGetAchievementStatesResponse_vtbl **)(v11 + 176) )
        bdStructFixedSizeArray<bdAchievementProgress,4>::copy((bdStructFixedSizeArray<bdAchievementProgress,4> *)(v12 + 22), (const bdStructFixedSizeArray<bdAchievementProgress,4> *)(v11 + 176));
      ++v5;
    }
    while ( v5 < *(_DWORD *)&result->m_states[55184] );
  }
  p_m_nextPageToken = &result->m_nextPageToken;
  v14 = &v7->m_nextPageToken;
  v15 = 8i64;
  do
  {
    *(_OWORD *)p_m_nextPageToken->m_buffer = *(_OWORD *)v14->m_buffer;
    *(_OWORD *)&p_m_nextPageToken->m_buffer[16] = *(_OWORD *)&v14->m_buffer[16];
    *(_OWORD *)&p_m_nextPageToken->m_buffer[32] = *(_OWORD *)&v14->m_buffer[32];
    *(_OWORD *)&p_m_nextPageToken->m_buffer[48] = *(_OWORD *)&v14->m_buffer[48];
    *(_OWORD *)&p_m_nextPageToken->m_buffer[64] = *(_OWORD *)&v14->m_buffer[64];
    *(_OWORD *)&p_m_nextPageToken->m_buffer[80] = *(_OWORD *)&v14->m_buffer[80];
    *(_OWORD *)&p_m_nextPageToken->m_buffer[96] = *(_OWORD *)&v14->m_buffer[96];
    p_m_nextPageToken = (bdStructFixedSizeString<1024> *)((char *)p_m_nextPageToken + 128);
    *(_OWORD *)&p_m_nextPageToken[-1].m_buffer[1009] = *(_OWORD *)&v14->m_buffer[112];
    v14 = (bdStructFixedSizeString<1024> *)((char *)v14 + 128);
    --v15;
  }
  while ( v15 );
  p_m_nextPageToken->m_buffer[0] = v14->m_buffer[0];
  return result;
}

/*
==============
OnlineChallengesManager::HandleChallengeCompletion
==============
*/
char OnlineChallengesManager::HandleChallengeCompletion(OnlineChallengesManager *this, const XUID xuid, bdJSONDeserializer *json)
{
  int PortForLocalXUID; 
  int v5; 
  Online_GunSmith *v6; 
  Online_Dailylogin *v7; 
  Online_DailyChurnLogin *v8; 
  OnlineOperatorChallenges *v9; 
  int v10; 
  OnlineScheduledChallenges *v11; 
  OnlineTrials *v12; 
  OnlineProgression *v13; 
  OnlineQuests *v14; 
  OnlineBattlepass *v15; 
  unsigned __int64 v16; 
  __int64 v17; 
  OnlineScheduledChallenges *v18; 
  OnlineProgression *v19; 
  OnlineStickerBookChallenges *v20; 
  OnlineMiscChallenges *v21; 
  OnlineProgression *Instance; 
  const dvar_t *v23; 
  OnlineProgression *v24; 
  Online_GunSmith *v25; 
  GunsmithWeapons *Weapons; 
  int v27; 
  GunsmithWeapons *v28; 
  unsigned __int64 *p_xp; 
  Online_GunSmith *v30; 
  Online_Loot *v31; 
  Online_AAR *v32; 
  XUID player; 
  int value; 

  player.m_id = xuid.m_id;
  if ( !json && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_challenges.cpp", 599, ASSERT_TYPE_ASSERT, "(json)", (const char *)&queryFormat, "json") )
    __debugbreak();
  if ( !XUID::IsValid(&player) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_challenges.cpp", 600, ASSERT_TYPE_ASSERT, "(xuid.IsValid())", (const char *)&queryFormat, "xuid.IsValid()") )
    __debugbreak();
  PortForLocalXUID = Live_GetPortForLocalXUID(player);
  if ( !bdJSONDeserializer::getInt32(json, "kind", &value) )
    return 0;
  if ( !value || value == 6 )
  {
    Instance = OnlineProgression::GetInstance();
    OnlineProgression::UpdateProgression(Instance, PortForLocalXUID, json, 1);
  }
  else if ( (unsigned int)value <= 0x1F && (v5 = -2113863648, _bittest(&v5, value)) )
  {
    v6 = Online_GunSmith::GetInstance();
    Online_GunSmith::UpdateWeapon(v6, PortForLocalXUID, json, value, 1);
  }
  else
  {
    switch ( value )
    {
      case 7:
        v7 = Online_Dailylogin::GetInstance();
        Online_Dailylogin::UpdateReward(v7, PortForLocalXUID, json, 0);
        break;
      case 21:
        v8 = Online_DailyChurnLogin::GetInstance();
        Online_DailyChurnLogin::UpdateReward(v8, PortForLocalXUID, json, 0);
        break;
      case 8:
        v9 = OnlineOperatorChallenges::GetInstance();
        OnlineOperatorChallenges::UpdateChallenges(v9, PortForLocalXUID, json);
        break;
      default:
        if ( (unsigned int)value <= 0x1E && (v10 = 1275074560, _bittest(&v10, value)) )
        {
          v11 = OnlineScheduledChallenges::GetInstance();
          OnlineScheduledChallenges::UpdateChallenges(v11, PortForLocalXUID, value, json, 1);
        }
        else
        {
          switch ( value )
          {
            case 13:
              v12 = OnlineTrials::GetInstance();
              OnlineTrials::HandleCompletion(v12, player, json);
              break;
            case 14:
              v13 = OnlineProgression::GetInstance();
              OnlineProgression::TokenComplete(v13, PortForLocalXUID, json);
              break;
            case 15:
              v14 = OnlineQuests::GetInstance();
              OnlineQuests::HandleCompletion(v14, player, json, 1);
              break;
            default:
              if ( value != 18 )
              {
                if ( value == 20 )
                {
                  v15 = OnlineBattlepass::GetInstance();
                  OnlineBattlepass::HandleUpdate(v15, PortForLocalXUID, json, 1);
                }
                else
                {
                  v16 = (unsigned int)(value - 1000010);
                  if ( (unsigned int)v16 <= 0x28 && (v17 = 0x12000000001i64, _bittest64(&v17, v16)) )
                  {
                    v18 = OnlineScheduledChallenges::GetInstance();
                    OnlineScheduledChallenges::TriggerNextDay(v18, PortForLocalXUID, value, json);
                    v19 = OnlineProgression::GetInstance();
                    OnlineProgression::RequestUserState(v19, PortForLocalXUID, ONLINE_USER_STATE_STAGE_NEED_DAILY_INDEX);
                  }
                  else if ( value == 32 )
                  {
                    v20 = OnlineStickerBookChallenges::GetInstance();
                    OnlineStickerBookChallenges::UpdateChallenges(v20, PortForLocalXUID, value, json, 1);
                  }
                  else if ( value == 34 )
                  {
                    v21 = OnlineMiscChallenges::GetInstance();
                    OnlineMiscChallenges::UpdateChallenges(v21, PortForLocalXUID, value, json, 1);
                  }
                }
              }
              break;
          }
        }
        break;
    }
  }
  v23 = DVARBOOL_online_challenge_update_player_data_once_when_done;
  if ( !DVARBOOL_online_challenge_update_player_data_once_when_done && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_challenge_update_player_data_once_when_done") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v23);
  if ( v23->current.enabled )
  {
    v24 = OnlineProgression::GetInstance();
    OnlineProgression::UpdatePlayerStats(v24, PortForLocalXUID);
    v25 = Online_GunSmith::GetInstance();
    Weapons = Online_GunSmith::GetWeapons(v25, PortForLocalXUID);
    v27 = 0;
    v28 = Weapons;
    if ( Weapons->total_weapons > 0 )
    {
      p_xp = &Weapons->weapons[0].xp;
      do
      {
        if ( *p_xp )
        {
          v30 = Online_GunSmith::GetInstance();
          Online_GunSmith::UpdateWeaponStats(v30, PortForLocalXUID, v27);
        }
        ++v27;
        p_xp += 4;
      }
      while ( v27 < v28->total_weapons );
    }
  }
  v31 = Online_Loot::GetInstance();
  Online_Loot::CheckChallengeAndGiveLoot(v31, PortForLocalXUID, json, value);
  v32 = Online_AAR::GetInstance();
  Online_AAR::ParseCompletion(v32, PortForLocalXUID, value, json, 1);
  return 1;
}

/*
==============
OnlineChallengesManager::HandleChallengeExpiration
==============
*/
char OnlineChallengesManager::HandleChallengeExpiration(OnlineChallengesManager *this, const XUID xuid, bdJSONDeserializer *json)
{
  unsigned __int64 v5; 
  char value[8]; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 

  if ( !json && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_challenges.cpp", 696, ASSERT_TYPE_ASSERT, "(json)", (const char *)&queryFormat, "json") )
    __debugbreak();
  *(_QWORD *)value = 0i64;
  v7 = 0i64;
  v8 = 0i64;
  v9 = 0i64;
  if ( bdJSONDeserializer::getString(json, "status", value, 0x20u) )
  {
    if ( bdJSONDeserializer::getUInt64(json, "expirationTimestamp", &v5) )
    {
      return 1;
    }
    else
    {
      Com_PrintError(25, "Achievement message has bad expirationTimestamp value\n");
      return 0;
    }
  }
  else
  {
    Com_PrintError(25, "Achievement message has bad newStatus value\n");
    return 0;
  }
}

/*
==============
OnlineChallengesManager::HandleChallengeUpdate
==============
*/
char OnlineChallengesManager::HandleChallengeUpdate(OnlineChallengesManager *this, const XUID xuid, bdJSONDeserializer *json)
{
  int PortForLocalXUID; 
  int v5; 
  Online_GunSmith *v6; 
  OnlineOperatorChallenges *v7; 
  int v8; 
  OnlineScheduledChallenges *v9; 
  OnlineQuests *v10; 
  OnlineBattlepass *v11; 
  OnlineStickerBookChallenges *v12; 
  Online_Loot *v13; 
  Online_AAR *v14; 
  OnlineMiscChallenges *v15; 
  Online_Loot *v16; 
  OnlineProgression *Instance; 
  Online_AAR *v18; 
  XUID player; 
  int value; 

  player.m_id = xuid.m_id;
  if ( !json && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_challenges.cpp", 532, ASSERT_TYPE_ASSERT, "(json)", (const char *)&queryFormat, "json") )
    __debugbreak();
  if ( !XUID::IsValid(&player) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_challenges.cpp", 533, ASSERT_TYPE_ASSERT, "(xuid.IsValid())", (const char *)&queryFormat, "xuid.IsValid()") )
    __debugbreak();
  PortForLocalXUID = Live_GetPortForLocalXUID(player);
  if ( bdJSONDeserializer::getInt32(json, "kind", &value) )
  {
    if ( !value || value == 6 )
    {
      Instance = OnlineProgression::GetInstance();
      OnlineProgression::UpdateProgression(Instance, PortForLocalXUID, json, 0);
      goto LABEL_32;
    }
    if ( (unsigned int)value <= 0x1F )
    {
      v5 = -2113863648;
      if ( _bittest(&v5, value) )
      {
        v6 = Online_GunSmith::GetInstance();
        Online_GunSmith::UpdateWeapon(v6, PortForLocalXUID, json, value, 0);
        if ( value != 5 && value != 31 )
          goto LABEL_32;
        goto LABEL_27;
      }
    }
    if ( value == 8 )
    {
      v7 = OnlineOperatorChallenges::GetInstance();
      OnlineOperatorChallenges::UpdateChallenges(v7, PortForLocalXUID, json);
    }
    else if ( (unsigned int)value <= 0x1E && (v8 = 1275074560, _bittest(&v8, value)) )
    {
      v9 = OnlineScheduledChallenges::GetInstance();
      OnlineScheduledChallenges::UpdateChallenges(v9, PortForLocalXUID, value, json, 0);
    }
    else if ( value == 15 )
    {
      v10 = OnlineQuests::GetInstance();
      OnlineQuests::HandleCompletion(v10, player, json, 0);
    }
    else
    {
      if ( value != 20 )
      {
        if ( value != 28 )
        {
          if ( value == 32 )
          {
            v12 = OnlineStickerBookChallenges::GetInstance();
            OnlineStickerBookChallenges::UpdateChallenges(v12, PortForLocalXUID, value, json, 0);
LABEL_27:
            v13 = Online_Loot::GetInstance();
            Online_Loot::CheckChallengeAndGiveLoot(v13, PortForLocalXUID, json, value);
            v14 = Online_AAR::GetInstance();
            Online_AAR::ParseCompletion(v14, PortForLocalXUID, value, json, 0);
            goto LABEL_32;
          }
          if ( value != 34 )
            goto LABEL_32;
          v15 = OnlineMiscChallenges::GetInstance();
          OnlineMiscChallenges::UpdateChallenges(v15, PortForLocalXUID, value, json, 0);
        }
        v16 = Online_Loot::GetInstance();
        Online_Loot::CheckChallengeAndGiveLoot(v16, PortForLocalXUID, json, value);
        goto LABEL_32;
      }
      v11 = OnlineBattlepass::GetInstance();
      OnlineBattlepass::HandleUpdate(v11, PortForLocalXUID, json, 0);
    }
LABEL_32:
    v18 = Online_AAR::GetInstance();
    Online_AAR::ParseUpdate(v18, PortForLocalXUID, value, json);
    return 1;
  }
  return 0;
}

/*
==============
OnlineChallengesManager::OnGetProgressionComplete
==============
*/
void OnlineChallengesManager::OnGetProgressionComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  int v4; 
  __int64 m_controllerIndex; 
  __int64 v6; 
  bdGetAchievementStatesResponse *v7; 
  unsigned int i; 
  __int64 v9; 
  __int64 v10; 
  _BYTE *v11; 
  bdStructFixedSizeString<1024> *p_m_nextPageToken; 
  bdStructFixedSizeString<1024> *v13; 
  __int64 v14; 
  int v15; 
  unsigned int v16; 
  int v17; 
  const bdAchievementState *State; 
  unsigned __int16 Kind; 
  unsigned __int16 v20; 
  Online_GunSmith *v21; 
  OnlineOperatorChallenges *v22; 
  OnlineCommunityChallenges *v23; 
  int v24; 
  OnlineScheduledChallenges *v25; 
  OnlineQuests *v26; 
  OnlineTrials *v27; 
  OnlineBattlepass *v28; 
  OnlineStickerBookChallenges *v29; 
  OnlineMiscChallenges *v30; 
  OnlineProgression *Instance; 
  const char *NextPageToken; 
  __int64 v33; 
  const char *v34; 
  OnlineQuests *v35; 
  OnlineScheduledChallenges *v36; 
  const dvar_t *v37; 
  int integer; 
  const dvar_t *v39; 
  OnlineProgression *v40; 
  Online_GunSmith *v41; 
  GunsmithWeapons *Weapons; 
  GunsmithWeapons *v43; 
  unsigned __int64 *p_xp; 
  Online_GunSmith *v45; 
  _BYTE *v46; 
  unsigned __int64 v47; 
  bdAchievementState v48; 
  bdGetAchievementStatesResponse ptr; 

  v4 = 0;
  if ( taskState == TASKSTATE_PENDING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_challenges.cpp", 725, ASSERT_TYPE_ASSERT, "(taskState != TASKSTATE_PENDING)", (const char *)&queryFormat, "taskState != TASKSTATE_PENDING") )
    __debugbreak();
  m_controllerIndex = pTask->m_controllerIndex;
  if ( taskState == TASKSTATE_SUCCESS )
  {
    v6 = m_controllerIndex;
    *(_QWORD *)&OnlineChallengesManager::s_instance.m_getStateRetry[v6].m_numRetries = 0i64;
    OnlineChallengesManager::s_instance.m_getStateRetry[v6].m_retrying = 0;
    v7 = &OnlineChallengesManager::s_instance.m_progressionState[CL_Mgr_GetClientFromController(m_controllerIndex)];
    *((_QWORD *)&ptr.__vftable + 1) = &bdGetAchievementStatesResponse::`vbtable';
    bdReferencable::bdReferencable((bdReferencable *)&ptr.gapDBB9[7], (const bdReferencable *)((char *)&v7->__vftable + *(int *)(*((_QWORD *)&v7->__vftable + 1) + 4i64) + 8));
    bdStructBufferSerializable::bdStructBufferSerializable(&ptr, v7);
    ptr.__vftable = (bdGetAchievementStatesResponse_vtbl *)&bdGetAchievementStatesResponse::`vftable'{for `bdStructBufferSerializable'};
    *(_QWORD *)&ptr.m_states[*(int *)(*((_QWORD *)&ptr.__vftable + 1) + 4i64) - 24] = &bdGetAchievementStatesResponse::`vftable'{for `bdReferencable'};
    `eh vector vbase constructor iterator'(&ptr.__vftable + 2, 0x228ui64, 0x64ui64, (void (__fastcall *)(void *))bdAchievementState::bdAchievementState, (void (__fastcall *)(void *))bdAchievementState::`vbase destructor);
    *(_DWORD *)&ptr.m_states[55184] = 0;
    *(_DWORD *)&ptr.m_states[55184] = *(_DWORD *)&v7->m_states[55184];
    for ( i = 0; i < *(_DWORD *)&ptr.m_states[55184]; ++i )
    {
      v9 = 552i64 * i;
      v10 = (__int64)&v7->__vftable + v9 + 16;
      v11 = &ptr.m_states[v9 - 16];
      bdReferencable::operator=((bdReferencable *)&v11[*(int *)(*((_QWORD *)v11 + 1) + 4i64) + 8], (const bdReferencable *)(SHIDWORD((*(bdGetAchievementStatesResponse_vtbl **)((char *)&v7->__vftable + v9 + 24))->serialize) + v10 + 8));
      *((_QWORD *)v11 + 2) = *(_QWORD *)(v10 + 16);
      *(__m256i *)(v11 + 24) = *(__m256i *)(v10 + 24);
      *(__m256i *)(v11 + 56) = *(__m256i *)(v10 + 56);
      *(__m256i *)(v11 + 88) = *(__m256i *)(v10 + 88);
      *((_DWORD *)v11 + 30) = *(_DWORD *)(v10 + 120);
      v11[124] = *(_BYTE *)(v10 + 124);
      *((_WORD *)v11 + 63) = *(_WORD *)(v10 + 126);
      *((_DWORD *)v11 + 32) = *(_DWORD *)(v10 + 128);
      *((_DWORD *)v11 + 33) = *(_DWORD *)(v10 + 132);
      *((_DWORD *)v11 + 34) = *(_DWORD *)(v10 + 136);
      *((_QWORD *)v11 + 18) = *(_QWORD *)(v10 + 144);
      *((_QWORD *)v11 + 19) = *(_QWORD *)(v10 + 152);
      *((_QWORD *)v11 + 20) = *(_QWORD *)(v10 + 160);
      *((_DWORD *)v11 + 42) = *(_DWORD *)(v10 + 168);
      if ( v11 + 176 != (_BYTE *)(v10 + 176) )
        bdStructFixedSizeArray<bdAchievementProgress,4>::copy((bdStructFixedSizeArray<bdAchievementProgress,4> *)(v11 + 176), (const bdStructFixedSizeArray<bdAchievementProgress,4> *)(v10 + 176));
    }
    p_m_nextPageToken = &v7->m_nextPageToken;
    v13 = &ptr.m_nextPageToken;
    v14 = 8i64;
    do
    {
      *(_OWORD *)v13->m_buffer = *(_OWORD *)p_m_nextPageToken->m_buffer;
      *(_OWORD *)&v13->m_buffer[16] = *(_OWORD *)&p_m_nextPageToken->m_buffer[16];
      *(_OWORD *)&v13->m_buffer[32] = *(_OWORD *)&p_m_nextPageToken->m_buffer[32];
      *(_OWORD *)&v13->m_buffer[48] = *(_OWORD *)&p_m_nextPageToken->m_buffer[48];
      *(_OWORD *)&v13->m_buffer[64] = *(_OWORD *)&p_m_nextPageToken->m_buffer[64];
      *(_OWORD *)&v13->m_buffer[80] = *(_OWORD *)&p_m_nextPageToken->m_buffer[80];
      *(_OWORD *)&v13->m_buffer[96] = *(_OWORD *)&p_m_nextPageToken->m_buffer[96];
      v13 = (bdStructFixedSizeString<1024> *)((char *)v13 + 128);
      *(_OWORD *)&v13[-1].m_buffer[1009] = *(_OWORD *)&p_m_nextPageToken->m_buffer[112];
      p_m_nextPageToken = (bdStructFixedSizeString<1024> *)((char *)p_m_nextPageToken + 128);
      --v14;
    }
    while ( v14 );
    v13->m_buffer[0] = p_m_nextPageToken->m_buffer[0];
    v15 = 3;
    Com_Printf(25, "getAchievementStates complete, updating player progression for controller %d.\n", (unsigned int)m_controllerIndex);
    v16 = 0;
    if ( bdGetAchievementStatesResponse::getNumStates(&ptr) )
    {
      v17 = -2113863648;
      do
      {
        State = bdGetAchievementStatesResponse::getState(&ptr, v16);
        *((_QWORD *)&v48.__vftable + 1) = &bdAchievementState::`vbtable';
        bdReferencable::bdReferencable((bdReferencable *)v48.gap218, (const bdReferencable *)((char *)&State->__vftable + *(int *)(*((_QWORD *)&State->__vftable + 1) + 4i64) + 8));
        v15 |= 4u;
        bdStructBufferSerializable::bdStructBufferSerializable(&v48, State);
        v48.__vftable = (bdAchievementState_vtbl *)&bdAchievementState::`vftable'{for `bdStructBufferSerializable'};
        *(_QWORD *)&v48.m_name[*(int *)(*((_QWORD *)&v48.__vftable + 1) + 4i64) - 24] = &bdAchievementState::`vftable'{for `bdReferencable'};
        *((_QWORD *)&v48.__vftable + 2) = *((_QWORD *)&State->__vftable + 2);
        *(bdStructBufferSerializable *)((char *)&v48.bdStructBufferSerializable + 24) = *(bdStructBufferSerializable *)((char *)&State->bdStructBufferSerializable + 24);
        *(__m256i *)&v48.m_name[24] = *(__m256i *)&State->m_name[24];
        *(__m256i *)&v48.m_name[56] = *(__m256i *)&State->m_name[56];
        *(_DWORD *)&v48.m_name[88] = *(_DWORD *)&State->m_name[88];
        v48.m_name[92] = State->m_name[92];
        v48.m_kind = State->m_kind;
        v48.m_progress = State->m_progress;
        v48.m_progressTarget = State->m_progressTarget;
        v48.m_status = State->m_status;
        v48.m_completionTimestamp = State->m_completionTimestamp;
        v48.m_activationTimestamp = State->m_activationTimestamp;
        v48.m_expirationTimestamp = State->m_expirationTimestamp;
        v48.m_completionCount = State->m_completionCount;
        `eh vector vbase constructor iterator'(&v48.m_multiProgress, 0x58ui64, 4ui64, (void (__fastcall *)(void *))bdAchievementProgress::bdAchievementProgress, (void (__fastcall *)(void *))bdAchievementProgress::`vbase destructor);
        v48.m_multiProgress.m_size = 0;
        bdStructFixedSizeArray<bdAchievementProgress,4>::copy(&v48.m_multiProgress, &State->m_multiProgress);
        Kind = bdAchievementState::getKind(&v48);
        v20 = Kind;
        if ( !Kind || Kind == 6 )
        {
          Instance = OnlineProgression::GetInstance();
          OnlineProgression::OnGetProgressionComplete(Instance, m_controllerIndex, &v48);
        }
        else if ( Kind <= 0x1Fu && _bittest(&v17, Kind) )
        {
          v21 = Online_GunSmith::GetInstance();
          Online_GunSmith::AddProgression(v21, m_controllerIndex, v20, &v48);
        }
        else if ( Kind == 8 )
        {
          v22 = OnlineOperatorChallenges::GetInstance();
          OnlineOperatorChallenges::AddUnlock(v22, m_controllerIndex, &v48);
        }
        else if ( Kind == 10 )
        {
          v23 = OnlineCommunityChallenges::GetInstance();
          OnlineCommunityChallenges::AddProgression(v23, m_controllerIndex, &v48);
        }
        else if ( Kind <= 0x1Eu && (v24 = 1275074560, _bittest(&v24, Kind)) )
        {
          v25 = OnlineScheduledChallenges::GetInstance();
          OnlineScheduledChallenges::AddProgression(v25, m_controllerIndex, &v48);
        }
        else
        {
          switch ( Kind )
          {
            case 0xFu:
              v26 = OnlineQuests::GetInstance();
              OnlineQuests::AddProgression(v26, m_controllerIndex, &v48);
              break;
            case 0xDu:
              v27 = OnlineTrials::GetInstance();
              OnlineTrials::AddProgression(v27, m_controllerIndex, &v48);
              break;
            case 0x14u:
              v28 = OnlineBattlepass::GetInstance();
              OnlineBattlepass::AddProgression(v28, m_controllerIndex, &v48);
              break;
            case 0x20u:
              v29 = OnlineStickerBookChallenges::GetInstance();
              OnlineStickerBookChallenges::AddProgression(v29, m_controllerIndex, &v48);
              break;
            case 0x22u:
              v30 = OnlineMiscChallenges::GetInstance();
              OnlineMiscChallenges::AddProgression(v30, m_controllerIndex, &v48);
              break;
          }
        }
        `eh vector destructor iterator'(&v48.m_multiProgress, 0x58ui64, 4ui64, (void (__fastcall *)(void *))bdAchievementProgress::`vbase destructor);
        bdStructFixedSizeString<100>::~bdStructFixedSizeString<100>((bdStructFixedSizeString<100> *)(&v48.__vftable + 3));
        bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v48.__vftable + 2));
        bdReferencable::~bdReferencable((bdReferencable *)v48.gap218);
        ++v16;
      }
      while ( v16 < bdGetAchievementStatesResponse::getNumStates(&ptr) );
    }
    if ( bdGetAchievementStatesResponse::getNumStates(&ptr) != 100 )
      goto LABEL_67;
    NextPageToken = bdGetAchievementStatesResponse::getNextPageToken(&ptr);
    v33 = -1i64;
    do
      ++v33;
    while ( NextPageToken[v33] );
    if ( (_DWORD)v33 )
    {
      v34 = bdGetAchievementStatesResponse::getNextPageToken(&ptr);
      OnlineChallengesManager::FetchProgressionState(&OnlineChallengesManager::s_instance, m_controllerIndex, v34);
    }
    else
    {
LABEL_67:
      if ( !OnlineChallengesManager::s_instance.m_aeFetchTypeState[m_controllerIndex] )
      {
        OnlineChallengesManager::s_instance.m_aeFetchTypeState[m_controllerIndex] = 1;
        OnlineChallengesManager::FetchProgressionState(&OnlineChallengesManager::s_instance, m_controllerIndex, (const char *)&queryFormat.fmt + 3);
        bdStructFixedSizeString<1024>::~bdStructFixedSizeString<1024>(&ptr.m_nextPageToken);
        `eh vector destructor iterator'(&ptr.__vftable + 2, 0x228ui64, 0x64ui64, (void (__fastcall *)(void *))bdAchievementState::`vbase destructor);
LABEL_64:
        bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&ptr.__vftable + 2));
        bdReferencable::~bdReferencable((bdReferencable *)&ptr.gapDBB9[7]);
        return;
      }
      v35 = OnlineQuests::GetInstance();
      OnlineQuests::NeedToCheckandActivate(v35, m_controllerIndex);
      v36 = OnlineScheduledChallenges::GetInstance();
      OnlineScheduledChallenges::Finalise(v36, m_controllerIndex);
      OnlineChallengesManager::s_instance.m_aeFetchState[m_controllerIndex] = 3;
      OnlineChallengesManager::s_instance.m_aeInitialFetch[m_controllerIndex] = 1;
      v37 = DVARINT_online_challenge_min_get_state_time;
      if ( !DVARINT_online_challenge_min_get_state_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_challenge_min_get_state_time") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v37);
      integer = v37->current.integer;
      OnlineChallengesManager::s_instance.m_nextGetStateTime[m_controllerIndex] = integer + Sys_Milliseconds();
      if ( LUI_BeginEvent(LOCAL_CLIENT_0, "challenges_updated", LUI_luaVM) )
      {
        LUI_SetTableBool("immediate", 1, LUI_luaVM);
        LUI_SetTableInt("controller", m_controllerIndex, LUI_luaVM);
        LUI_EndEvent(LUI_luaVM);
      }
      v39 = DVARBOOL_online_challenge_update_player_data_once_when_done;
      if ( !DVARBOOL_online_challenge_update_player_data_once_when_done && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_challenge_update_player_data_once_when_done") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v39);
      if ( v39->current.enabled )
      {
        v40 = OnlineProgression::GetInstance();
        OnlineProgression::UpdatePlayerStats(v40, m_controllerIndex);
        v41 = Online_GunSmith::GetInstance();
        Weapons = Online_GunSmith::GetWeapons(v41, m_controllerIndex);
        v43 = Weapons;
        if ( Weapons->total_weapons > 0 )
        {
          p_xp = &Weapons->weapons[0].xp;
          do
          {
            if ( *p_xp )
            {
              v45 = Online_GunSmith::GetInstance();
              Online_GunSmith::UpdateWeaponStats(v45, m_controllerIndex, v4);
            }
            ++v4;
            p_xp += 4;
          }
          while ( v4 < v43->total_weapons );
        }
      }
    }
    v46 = memchr_0(&ptr.m_nextPageToken, 0, 0x401ui64);
    if ( v46 )
      v47 = v46 - (_BYTE *)&ptr.m_nextPageToken;
    else
      v47 = 1025i64;
    bdHandleAssert(v47 < 0x401, "bdStrnlen(m_buffer, BufferSize) < BufferSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<1024>::~bdStructFixedSizeString", 0x1Fu, "Buffer overrun detected");
    `eh vector destructor iterator'(&ptr.__vftable + 2, 0x228ui64, 0x64ui64, (void (__fastcall *)(void *))bdAchievementState::`vbase destructor);
    goto LABEL_64;
  }
  if ( (unsigned int)(taskState - 1) <= 1 )
  {
    Com_PrintError(25, "getAchievementStates - Error claiming achiemvent.\n");
    OnlineChallengesManager::s_instance.m_aeFetchState[m_controllerIndex] = 4;
    Online_Retry::SetNextRetry(&OnlineChallengesManager::s_instance.m_getStateRetry[pTask->m_controllerIndex]);
  }
}

/*
==============
OnlineChallengesManager::OnResetUserComplete
==============
*/
void OnlineChallengesManager::OnResetUserComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  OnlineProgression *Instance; 
  OnlineOperatorChallenges *v5; 
  Online_GunSmith *v6; 
  unsigned __int64 timestamp; 
  const XUID *Xuid; 
  unsigned __int64 UTC; 
  const XUID *v10; 
  XUID result; 

  if ( taskState == TASKSTATE_PENDING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_challenges.cpp", 2889, ASSERT_TYPE_ASSERT, "(taskState != TASKSTATE_PENDING)", (const char *)&queryFormat, "taskState != TASKSTATE_PENDING") )
    __debugbreak();
  if ( taskState )
  {
    if ( (unsigned int)(taskState - 1) <= 1 )
      Com_PrintError(25, "deleteUser - Error reseting user.\n");
  }
  else
  {
    Instance = OnlineProgression::GetInstance();
    OnlineProgression::ResetProgression(Instance, pTask->m_controllerIndex);
    v5 = OnlineOperatorChallenges::GetInstance();
    OnlineOperatorChallenges::ResetProgression(v5, pTask->m_controllerIndex);
    v6 = Online_GunSmith::GetInstance();
    Online_GunSmith::ResetProgression(v6, pTask->m_controllerIndex);
    timestamp = LiveStorage_GetUTC();
    Xuid = Live_GetXuid(&result, pTask->m_controllerIndex);
    OnlineChallengesManager::RecordEventForPlayer(&OnlineChallengesManager::s_instance, pTask->m_controllerIndex, (const XUID)Xuid->m_id, "login_event", (const char *)&queryFormat.fmt + 3, timestamp);
    UTC = LiveStorage_GetUTC();
    v10 = Live_GetXuid(&result, pTask->m_controllerIndex);
    OnlineChallengesManager::RecordEventForPlayer(&OnlineChallengesManager::s_instance, pTask->m_controllerIndex, (const XUID)v10->m_id, "login_churn_event", (const char *)&queryFormat.fmt + 3, UTC);
  }
}

/*
==============
OnlineChallengesManager::ParseOperators
==============
*/
unsigned __int64 OnlineChallengesManager::ParseOperators(OnlineChallengesManager *this, char *eventType)
{
  char *v4; 
  int v5; 
  unsigned __int64 i; 
  const char *v7; 
  int v8; 
  unsigned __int16 v9; 
  unsigned __int64 v10; 
  StringTable *tablePtr; 

  StringTable_GetAsset("loot/operator_ids.csv", (const StringTable **)&tablePtr);
  if ( !tablePtr )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_challenges.cpp", 960, ASSERT_TYPE_ASSERT, "(operatorTable)", (const char *)&queryFormat, "operatorTable") )
      __debugbreak();
    if ( !tablePtr )
      return 0i64;
  }
  v4 = strtok(eventType, "|");
  v5 = 0;
  for ( i = 0i64; v4; ++v5 )
  {
    v7 = StringTable_Lookup(tablePtr, 1, v4, 0);
    v8 = atoi(v7);
    v9 = v8;
    if ( v8 < 0 || (unsigned int)v8 > 0xFFFF )
    {
      v10 = (unsigned __int16)v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v8, "signed", v8) )
        __debugbreak();
    }
    else
    {
      v10 = (unsigned __int16)v8;
    }
    if ( v5 )
    {
      if ( v5 == 1 )
        i |= v9 << 16;
    }
    else
    {
      i = v10;
    }
    v4 = strtok(NULL, "|");
  }
  return i;
}

/*
==============
OnlineChallengesManager::ProcessParams
==============
*/
bool OnlineChallengesManager::ProcessParams(OnlineChallengesManager *this, const char *name, const char *params, CachedChallengeEventData *data)
{
  CachedChallengeEventData *v7; 
  const dvar_t *v8; 
  __int64 v9; 
  const char *v10; 
  int v11; 
  __int64 v12; 
  int v13; 
  int v14; 
  int v15; 
  char v16; 
  char *v17; 
  int v18; 
  char *v19; 
  char *v20; 
  int i; 
  int v22; 
  char *v23; 
  const char *v24; 
  int RowCount; 
  int v26; 
  __int64 v27; 
  const char *v28; 
  const char *ColumnValueForRow; 
  signed __int64 v30; 
  char v31; 
  __int64 v32; 
  char v33; 
  const char *v34; 
  __int64 v35; 
  const char *v36; 
  const char *v37; 
  __int64 v38; 
  const char *v39; 
  __int64 v40; 
  const char *v41; 
  bool v42; 
  __int64 v43; 
  int v44; 
  const char *v45; 
  int v46; 
  char *v47; 
  int j; 
  const char *v49; 
  int v50; 
  unsigned __int8 v51; 
  int v52; 
  char *v53; 
  const char *v54; 
  __int64 v55; 
  int v56; 
  __int64 v57; 
  int v58; 
  int v59; 
  int v60; 
  const char *v61; 
  __int64 v62; 
  const char *v63; 
  __int64 v64; 
  int v65; 
  __int64 v66; 
  int v67; 
  int v68; 
  int v69; 
  const char *v70; 
  __int64 v71; 
  int v72; 
  char *v73; 
  char v74; 
  const char *v75; 
  int v76; 
  const char *v77; 
  int v78; 
  int v79; 
  const dvar_t *v80; 
  __int64 v81; 
  const char *v82; 
  int v83; 
  __int64 v84; 
  int v85; 
  int v86; 
  int v87; 
  const dvar_t *v88; 
  __int64 v89; 
  const char *v90; 
  int v91; 
  __int64 v92; 
  int v93; 
  int v94; 
  int v95; 
  char *v96; 
  int v97; 
  char *v98; 
  int v99; 
  StringTable *v100; 
  const char *v101; 
  int v102; 
  int v103; 
  __int64 v104; 
  const char *v105; 
  const char *v106; 
  signed __int64 v107; 
  char v108; 
  __int64 v109; 
  char v110; 
  const char *v111; 
  int v112; 
  const char *v113; 
  __int64 v114; 
  bool result; 
  char *v116; 
  int k; 
  int v118; 
  const dvar_t *v119; 
  __int64 v120; 
  const char *v121; 
  int v122; 
  __int64 v123; 
  int v124; 
  int v125; 
  int v126; 
  int v127; 
  char *v128; 
  char *v129; 
  StringTable *v130; 
  const char *v131; 
  int v132; 
  int v133; 
  const char *v134; 
  const char *v135; 
  const char *v136; 
  const dvar_t *v137; 
  __int64 v138; 
  const char *v139; 
  int v140; 
  __int64 v141; 
  int v142; 
  int v143; 
  int v144; 
  int v145; 
  char *v146; 
  const dvar_t *v147; 
  __int64 v148; 
  const char *v149; 
  int v150; 
  __int64 v151; 
  int v152; 
  int v153; 
  int v154; 
  int v155; 
  char *v156; 
  char *v157; 
  int v158; 
  const char *v159; 
  int v160; 
  __int64 v161; 
  const dvar_t *v162; 
  __int64 v163; 
  const char *v164; 
  int v165; 
  __int64 v166; 
  int v167; 
  int v168; 
  int v169; 
  char *v170; 
  __int64 v171; 
  const dvar_t *v172; 
  __int64 v173; 
  const char *v174; 
  int v175; 
  __int64 v176; 
  int v177; 
  int v178; 
  int v179; 
  int v180; 
  char *v181; 
  const char *v182; 
  __int64 v183; 
  const char *v184; 
  int v185; 
  __int64 v186; 
  int v187; 
  int v188; 
  int v189; 
  int v190; 
  char *v191; 
  char *v192; 
  int m; 
  const char *v194; 
  int v195; 
  const char *v196; 
  __int64 v197; 
  const char *v198; 
  int v199; 
  __int64 v200; 
  int v201; 
  int v202; 
  int v203; 
  int v204; 
  char *v205; 
  __int64 v206; 
  const char *v207; 
  int v208; 
  __int64 v209; 
  int v210; 
  int v211; 
  int v212; 
  int v213; 
  char *v214; 
  __int64 v215; 
  const char *v216; 
  int v217; 
  __int64 v218; 
  int v219; 
  int v220; 
  int v221; 
  __int64 v222; 
  const char *v223; 
  int v224; 
  __int64 v225; 
  int v226; 
  int v227; 
  int v228; 
  int v229; 
  char *v230; 
  __int64 v231; 
  const char *v232; 
  int v233; 
  __int64 v234; 
  int v235; 
  int v236; 
  int v237; 
  int v238; 
  char *v239; 
  const char *v240; 
  __int64 v241; 
  const char *v242; 
  int v243; 
  __int64 v244; 
  int v245; 
  int v246; 
  int v247; 
  char *v248; 
  __int64 v249; 
  __int64 v250; 
  const char *v251; 
  int v252; 
  __int64 v253; 
  int v254; 
  int v255; 
  int v256; 
  int v257; 
  char *v258; 
  int v259; 
  char *v260; 
  char v261; 
  const char *v262; 
  int v263; 
  __int64 v264; 
  const char *v265; 
  int v266; 
  __int64 v267; 
  int v268; 
  int v269; 
  int v270; 
  __int64 v271; 
  const char *v272; 
  int v273; 
  __int64 v274; 
  int v275; 
  int v276; 
  int v277; 
  __int64 v278; 
  const char *v279; 
  int v280; 
  __int64 v281; 
  int v282; 
  int v283; 
  int v284; 
  __int64 v285; 
  const char *v286; 
  int v287; 
  __int64 v288; 
  int v289; 
  int v290; 
  int v291; 
  __int64 v292; 
  const char *v293; 
  int v294; 
  __int64 v295; 
  int v296; 
  int v297; 
  int v298; 
  char *v299; 
  __int64 v300; 
  int v301; 
  char *v302; 
  int v303; 
  char *v304; 
  int v305; 
  char *v306; 
  const char *v307; 
  int v308; 
  char *v309; 
  int v310; 
  char *v311; 
  const char *v312; 
  const char *v313; 
  int v314; 
  char *v315; 
  int v316; 
  char *v317; 
  const char *v318; 
  int v319; 
  char *v320; 
  int v321; 
  char *v322; 
  const char *v323; 
  int v324; 
  char *v325; 
  int v326; 
  char *v327; 
  int v328; 
  char *v329; 
  int v330; 
  char *v331; 
  const char *v332; 
  int v333; 
  char *v334; 
  const char *v335; 
  char *v336; 
  int n; 
  const char *v338; 
  int v339; 
  int v340; 
  char *v341; 
  char v342; 
  const char *v343; 
  int v344; 
  int v345; 
  char *v346; 
  char v347; 
  const char *v348; 
  int v349; 
  char *v350; 
  __int64 v351; 
  StringTable *v352; 
  StringTable *v353; 
  int v354; 
  int v355; 
  StringTable *table; 
  StringTable *tablePtr; 
  StringTable *v358; 
  char *saveptrctx; 
  StringTable *v360; 
  StringTable *v361; 
  char *value; 
  StringTable *v363; 
  StringTable *v364; 
  StringTable *v365; 
  char dest[512]; 

  v7 = data;
  memset_0(data, 0, sizeof(CachedChallengeEventData));
  Core_strcpy(dest, 0x200ui64, params);
  v8 = DVARBOOL_online_challenge_upload_kill;
  if ( !DVARBOOL_online_challenge_upload_kill && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_challenge_upload_kill") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled )
  {
    v9 = 0x7FFFFFFFi64;
    v10 = name;
    if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    do
    {
      v11 = (unsigned __int8)v10["kill" - name];
      v12 = v9;
      v13 = *(unsigned __int8 *)v10++;
      --v9;
      if ( !v12 )
        break;
      if ( v11 != v13 )
      {
        v14 = v11 + 32;
        if ( (unsigned int)(v11 - 65) > 0x19 )
          v14 = v11;
        v11 = v14;
        v15 = v13 + 32;
        if ( (unsigned int)(v13 - 65) > 0x19 )
          v15 = v13;
        if ( v11 != v15 )
          goto LABEL_208;
      }
    }
    while ( v11 );
    Com_Printf(25, "%s (%s)\n", name, params);
    v16 = 0;
    saveptrctx = NULL;
    v17 = I_strtok_r(dest, ",", &saveptrctx);
    v18 = 0;
    v355 = 0;
    v7->params_amount = 7;
    while ( 2 )
    {
      v19 = v17;
      switch ( v18 )
      {
        case 0:
          v20 = strtok(v17, "|");
          for ( i = 0; v20; ++i )
          {
            v22 = atoi(v20);
            if ( i )
            {
              if ( i == 1 )
                v7->params[0] |= (__int64)v22 << 48;
            }
            else
            {
              v7->params[0] = (__int64)v22 << 16;
            }
            v20 = strtok(NULL, "|");
          }
          goto LABEL_85;
        case 1:
          StringTable_GetAsset("loot/weapon_ids.csv", (const StringTable **)&tablePtr);
          if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_challenges.cpp", 1039, ASSERT_TYPE_ASSERT, "(weaponIDTable)", (const char *)&queryFormat, "weaponIDTable") )
            __debugbreak();
          StringTable_GetAsset("mp/statstable.csv", (const StringTable **)&table);
          if ( !table && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_challenges.cpp", 1043, ASSERT_TYPE_ASSERT, "(weaponTable)", (const char *)&queryFormat, "weaponTable") )
            __debugbreak();
          value = strtok(v19, "|");
          v23 = value;
          v354 = 0;
          if ( !value )
            goto LABEL_85;
          break;
        case 2:
          v7->params[1] = atoi(v17);
          goto LABEL_85;
        case 3:
          v7->params[1] |= (__int64)atoi(v17) << 32;
          goto LABEL_85;
        case 4:
          StringTable_GetAsset("loot/operator_ids.csv", (const StringTable **)&v365);
          if ( !v365 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_challenges.cpp", 1167, ASSERT_TYPE_ASSERT, "(operatorTable)", (const char *)&queryFormat, "operatorTable") )
            __debugbreak();
          v47 = strtok(v19, "|");
          for ( j = 0; v47; ++j )
          {
            v49 = StringTable_Lookup(v365, 1, v47, 0);
            v50 = atoi(v49);
            if ( j )
            {
              if ( j == 1 )
                v7->params[2] |= (__int64)v50 << 16;
            }
            else
            {
              v7->params[2] = v50;
            }
            v47 = strtok(NULL, "|");
          }
          goto LABEL_85;
        case 5:
          v7->params[2] |= (__int64)atoi(v17) << 32;
          goto LABEL_85;
        case 6:
          StringTable_GetAsset("loot/iw8_pi_golf21_attachment_ids.csv", (const StringTable **)&v360);
          StringTable_GetAsset("mp/reticlecategorytable.csv", (const StringTable **)&v358);
          if ( !v360 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_challenges.cpp", 1202, ASSERT_TYPE_ASSERT, "(attachmentTable)", (const char *)&queryFormat, "attachmentTable") )
            __debugbreak();
          if ( !v358 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_challenges.cpp", 1203, ASSERT_TYPE_ASSERT, "(reticleTable)", (const char *)&queryFormat, "reticleTable") )
            __debugbreak();
          v51 = 0;
          v52 = 0;
          v53 = strtok(v19, "|");
          if ( !v53 )
            goto LABEL_117;
          do
          {
            v54 = "no_attachments";
            v55 = 0x7FFFFFFFi64;
            while ( 1 )
            {
              v56 = (unsigned __int8)v54[v53 - "no_attachments"];
              v57 = v55;
              v58 = *(unsigned __int8 *)v54++;
              --v55;
              if ( !v57 )
              {
LABEL_116:
                LOBYTE(v52) = -1;
                goto LABEL_117;
              }
              if ( v56 != v58 )
              {
                v59 = v56 + 32;
                if ( (unsigned int)(v56 - 65) > 0x19 )
                  v59 = v56;
                v56 = v59;
                v60 = v58 + 32;
                if ( (unsigned int)(v58 - 65) > 0x19 )
                  v60 = v58;
                if ( v56 != v60 )
                  break;
              }
              if ( !v56 )
                goto LABEL_116;
            }
            v61 = StringTable_Lookup(v360, 1, v53, 0);
            v62 = -1i64;
            do
              ++v62;
            while ( v61[v62] );
            if ( (_DWORD)v62 )
            {
              if ( v52 < 5 )
                v7->params[3] |= (__int64)(atoi(v61) % 1000 + 1) << v16;
              ++v52;
              v16 += 12;
            }
            v63 = "default_sniper_scope";
            v64 = 0x7FFFFFFFi64;
            do
            {
              v65 = (unsigned __int8)v63[v53 - "default_sniper_scope"];
              v66 = v64;
              v67 = *(unsigned __int8 *)v63++;
              --v64;
              if ( !v66 )
                break;
              if ( v65 != v67 )
              {
                v68 = v65 + 32;
                if ( (unsigned int)(v65 - 65) > 0x19 )
                  v68 = v65;
                v65 = v68;
                v69 = v67 + 32;
                if ( (unsigned int)(v67 - 65) > 0x19 )
                  v69 = v67;
                if ( v65 != v69 )
                  goto LABEL_134;
              }
            }
            while ( v65 );
            v7->params[3] |= 0x1000000000000000ui64;
LABEL_134:
            v70 = StringTable_Lookup(v358, 1, v53, 5);
            v71 = -1i64;
            do
              ++v71;
            while ( v70[v71] );
            if ( (_DWORD)v71 )
              v51 = atoi(v70);
            v53 = strtok(NULL, "|");
          }
          while ( v53 );
LABEL_117:
          v7->params[5] |= (unsigned __int8)v52;
          v7->params[6] |= v51;
          v18 = v355;
LABEL_85:
          if ( !saveptrctx )
            return 1;
          v17 = I_strtok_r(NULL, ",", &saveptrctx);
          v355 = ++v18;
          v16 = 0;
          continue;
        case 7:
          StringTable_GetAsset("mp/perktable.csv", (const StringTable **)&v353);
          if ( !v353 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_challenges.cpp", 1254, ASSERT_TYPE_ASSERT, "(perkTable)", (const char *)&queryFormat, "perkTable") )
            __debugbreak();
          v72 = 0;
          v73 = strtok(v19, "|");
          if ( v73 )
          {
            v74 = 0;
            do
            {
              v75 = StringTable_Lookup(v353, 1, v73, 0);
              v76 = atoi(v75);
              if ( v76 )
              {
                if ( v72 < 3 )
                  v7->params[4] |= (__int64)v76 << v74;
                ++v72;
                v74 += 16;
              }
              v73 = strtok(NULL, "|");
            }
            while ( v73 );
          }
          goto LABEL_85;
        case 8:
          v7->params[5] |= (__int64)atoi(v17) << 16;
          goto LABEL_85;
        case 9:
          StringTable_GetAsset("loot/super_ids.csv", (const StringTable **)&v352);
          if ( !v352 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_challenges.cpp", 1286, ASSERT_TYPE_ASSERT, "(superTable)", (const char *)&queryFormat, "superTable") )
            __debugbreak();
          v77 = StringTable_Lookup(v352, 1, v19, 0);
          v7->params[4] |= (__int64)atoi(v77) << 48;
          goto LABEL_85;
        case 10:
          v7->params[5] |= (__int64)atoi(v17) << 32;
          goto LABEL_85;
        case 11:
          if ( I_strcmp(v17, "MOD_PISTOL_BULLET") )
          {
            if ( I_strcmp(v19, "MOD_RIFLE_BULLET") )
            {
              if ( I_strcmp(v19, "MOD_EXPLOSIVE_BULLET") )
              {
                if ( I_strcmp(v19, "MOD_GRENADE") )
                {
                  if ( I_strcmp(v19, "MOD_GRENADE_SPLASH") )
                  {
                    if ( I_strcmp(v19, "MOD_PROJECTILE") )
                    {
                      if ( I_strcmp(v19, "MOD_PROJECTILE_SPLASH") )
                      {
                        if ( I_strcmp(v19, "MOD_MELEE") )
                        {
                          if ( I_strcmp(v19, "MOD_HEAD_SHOT") )
                          {
                            if ( I_strcmp(v19, "MOD_MELEE_DOG") )
                            {
                              if ( I_strcmp(v19, "MOD_MELEE_ALIEN") )
                              {
                                if ( I_strcmp(v19, "MOD_CRUSH") )
                                {
                                  if ( I_strcmp(v19, "MOD_FALLING") )
                                  {
                                    if ( I_strcmp(v19, "MOD_SUICIDE") )
                                    {
                                      if ( I_strcmp(v19, "MOD_TRIGGER_HURT") )
                                      {
                                        if ( I_strcmp(v19, "MOD_EXPLOSIVE") )
                                        {
                                          if ( I_strcmp(v19, "MOD_IMPACT") )
                                          {
                                            if ( I_strcmp(v19, "MOD_SCORESTREAK") )
                                            {
                                              if ( I_strcmp(v19, "MOD_FIRE") )
                                              {
                                                if ( I_strcmp(v19, "MOD_FIRE_BULLET") )
                                                {
                                                  if ( I_strcmp(v19, "MOD_EXECUTION") )
                                                  {
                                                    if ( I_strcmp(v19, "MOD_PENETRATION") )
                                                    {
                                                      if ( I_strcmp(v19, "MOD_DOWN") )
                                                      {
                                                        v78 = I_strcmp(v19, "MOD_TEAM_WIPED");
                                                        v79 = 0;
                                                        if ( !v78 )
                                                          v79 = 24;
                                                        v7->params[6] |= v79 << 16;
                                                      }
                                                      else
                                                      {
                                                        v7->params[6] |= 0x170000ui64;
                                                      }
                                                    }
                                                    else
                                                    {
                                                      v7->params[6] |= 0x160000ui64;
                                                    }
                                                  }
                                                  else
                                                  {
                                                    v7->params[6] |= 0x150000ui64;
                                                  }
                                                }
                                                else
                                                {
                                                  v7->params[6] |= 0x140000ui64;
                                                }
                                              }
                                              else
                                              {
                                                v7->params[6] |= 0x130000ui64;
                                              }
                                            }
                                            else
                                            {
                                              v7->params[6] |= 0x120000ui64;
                                            }
                                          }
                                          else
                                          {
                                            v7->params[6] |= 0x110000ui64;
                                          }
                                        }
                                        else
                                        {
                                          v7->params[6] |= 0x100000ui64;
                                        }
                                      }
                                      else
                                      {
                                        v7->params[6] |= 0xF0000ui64;
                                      }
                                    }
                                    else
                                    {
                                      v7->params[6] |= 0xE0000ui64;
                                    }
                                  }
                                  else
                                  {
                                    v7->params[6] |= 0xD0000ui64;
                                  }
                                }
                                else
                                {
                                  v7->params[6] |= 0xC0000ui64;
                                }
                              }
                              else
                              {
                                v7->params[6] |= 0xB0000ui64;
                              }
                            }
                            else
                            {
                              v7->params[6] |= 0xA0000ui64;
                            }
                          }
                          else
                          {
                            v7->params[6] |= 0x90000ui64;
                          }
                        }
                        else
                        {
                          v7->params[6] |= 0x80000ui64;
                        }
                      }
                      else
                      {
                        v7->params[6] |= 0x70000ui64;
                      }
                    }
                    else
                    {
                      v7->params[6] |= 0x60000ui64;
                    }
                  }
                  else
                  {
                    v7->params[6] |= 0x50000ui64;
                  }
                }
                else
                {
                  v7->params[6] |= 0x40000ui64;
                }
              }
              else
              {
                v7->params[6] |= 0x30000ui64;
              }
            }
            else
            {
              v7->params[6] |= 0x20000ui64;
            }
          }
          else
          {
            v7->params[6] |= 0x10000ui64;
          }
          goto LABEL_85;
        case 12:
          v7->params[6] |= (__int64)atoi(v17) << 32;
          goto LABEL_85;
        case 13:
          v7->params[6] |= (__int64)atoi(v17) << 48;
          goto LABEL_85;
        default:
          goto LABEL_85;
      }
      break;
    }
    while ( 1 )
    {
      v24 = StringTable_Lookup(table, 5, v23, 4);
      RowCount = StringTable_GetRowCount(tablePtr);
      v26 = 0;
      if ( RowCount > 0 )
        break;
LABEL_50:
      StringTable_GetAsset("loot/equipment_ids.csv", (const StringTable **)&v361);
      if ( !v361 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_challenges.cpp", 1104, ASSERT_TYPE_ASSERT, "(equipmentIDTable)", (const char *)&queryFormat, "equipmentIDTable") )
        __debugbreak();
      v39 = StringTable_Lookup(v361, 1, v23, 0);
      v40 = -1i64;
      do
        ++v40;
      while ( v39[v40] );
      if ( (_DWORD)v40 )
      {
        v35 = atoi(v39);
        v41 = StringTable_Lookup(v361, 1, v23, 6);
        v38 = 1024i64;
        v42 = atoi(v41) == 1;
        v43 = 3072i64;
LABEL_70:
        if ( v42 )
          v38 = v43;
LABEL_72:
        v44 = v354;
        if ( v354 )
        {
          if ( v354 == 1 )
            v7->params[0] |= v35 << 32;
        }
        else
        {
          v7->params[0] |= v35;
          v7->params[5] |= v38 << 48;
        }
        goto LABEL_83;
      }
      StringTable_GetAsset("loot/special_weapon_ids.csv", (const StringTable **)&v364);
      if ( !v364 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_challenges.cpp", 1129, ASSERT_TYPE_ASSERT, "(specialWeaponIDTable)", (const char *)&queryFormat, "specialWeaponIDTable") )
        __debugbreak();
      v45 = StringTable_Lookup(v364, 1, v23, 0);
      v46 = atoi(v45);
      v44 = v354;
      if ( v354 )
      {
        if ( v354 == 1 )
          v7->params[0] |= (__int64)v46 << 32;
      }
      else
      {
        v7->params[0] |= v46;
        v7->params[5] |= 0x1000000000000000ui64;
      }
LABEL_83:
      value = strtok(NULL, "|");
      v354 = v44 + 1;
      v23 = value;
      if ( !value )
      {
        v18 = v355;
        goto LABEL_85;
      }
    }
LABEL_33:
    v27 = 0x7FFFFFFFi64;
    v28 = v24;
    ColumnValueForRow = StringTable_GetColumnValueForRow(tablePtr, v26, 1);
    if ( !ColumnValueForRow && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v30 = ColumnValueForRow - v24;
    do
    {
      v31 = v28[v30];
      v32 = v27;
      v33 = *v28++;
      --v27;
      if ( !v32 )
        break;
      if ( v31 != v33 )
      {
        if ( ++v26 < RowCount )
          goto LABEL_33;
        v23 = value;
        goto LABEL_50;
      }
    }
    while ( v31 );
    v34 = StringTable_GetColumnValueForRow(tablePtr, v26, 0);
    v35 = atoi(v34);
    StringTable_GetAsset("mp/weaponClassTable.csv", (const StringTable **)&v363);
    if ( !v363 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_challenges.cpp", 1068, ASSERT_TYPE_ASSERT, "(weaponClassTable)", (const char *)&queryFormat, "weaponClassTable") )
      __debugbreak();
    v36 = StringTable_Lookup(table, 5, value, 1);
    v37 = StringTable_Lookup(v363, 1, v36, 6);
    if ( !I_strcmp(v37, "assault") )
    {
      v38 = 3i64;
      goto LABEL_72;
    }
    if ( !I_strcmp(v37, "smg") )
    {
      v38 = 5i64;
      goto LABEL_72;
    }
    if ( !I_strcmp(v37, "shotgun") )
    {
      v38 = 9i64;
      goto LABEL_72;
    }
    if ( !I_strcmp(v37, "lmg") )
    {
      v38 = 17i64;
      goto LABEL_72;
    }
    if ( !I_strcmp(v37, "sniper") )
    {
      v38 = 65i64;
      goto LABEL_72;
    }
    if ( !I_strcmp(v37, "pistol") )
    {
      v38 = 129i64;
      goto LABEL_72;
    }
    if ( !I_strcmp(v37, "projectile") )
    {
      v38 = 257i64;
      goto LABEL_72;
    }
    v42 = I_strcmp(v37, "melee") == 0;
    v38 = 1i64;
    v43 = 513i64;
    goto LABEL_70;
  }
LABEL_208:
  v80 = DVARBOOL_online_challenge_upload_death;
  if ( !DVARBOOL_online_challenge_upload_death && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_challenge_upload_death") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v80);
  if ( v80->current.enabled )
  {
    v81 = 0x7FFFFFFFi64;
    v82 = name;
    if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    while ( 1 )
    {
      v83 = (unsigned __int8)v82["death" - name];
      v84 = v81;
      v85 = *(unsigned __int8 *)v82++;
      --v81;
      if ( !v84 )
        goto LABEL_667;
      if ( v83 != v85 )
      {
        v86 = v83 + 32;
        if ( (unsigned int)(v83 - 65) > 0x19 )
          v86 = v83;
        v83 = v86;
        v87 = v85 + 32;
        if ( (unsigned int)(v85 - 65) > 0x19 )
          v87 = v85;
        if ( v83 != v87 )
          break;
      }
      if ( !v83 )
        goto LABEL_667;
    }
  }
  v88 = DVARBOOL_online_challenge_upload_assist;
  if ( !DVARBOOL_online_challenge_upload_assist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_challenge_upload_assist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v88);
  if ( v88->current.enabled )
  {
    v89 = 0x7FFFFFFFi64;
    v90 = name;
    if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    do
    {
      v91 = (unsigned __int8)v90["assist" - name];
      v92 = v89;
      v93 = *(unsigned __int8 *)v90++;
      --v89;
      if ( !v92 )
        break;
      if ( v91 != v93 )
      {
        v94 = v91 + 32;
        if ( (unsigned int)(v91 - 65) > 0x19 )
          v94 = v91;
        v91 = v94;
        v95 = v93 + 32;
        if ( (unsigned int)(v93 - 65) > 0x19 )
          v95 = v93;
        if ( v91 != v95 )
          goto LABEL_281;
      }
    }
    while ( v91 );
    Com_Printf(25, "%s (%s)\n", name, params);
    table = NULL;
    v96 = I_strtok_r(dest, ",", (char **)&table);
    v97 = 0;
    v7->params_amount = 2;
    v98 = v96;
    v354 = 0;
    if ( table )
    {
      while ( 1 )
      {
        if ( v97 )
        {
          if ( v97 == 1 )
          {
            StringTable_GetAsset("loot/weapon_ids.csv", (const StringTable **)&tablePtr);
            if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_challenges.cpp", 1426, ASSERT_TYPE_ASSERT, "(weaponIDTable)", (const char *)&queryFormat, "weaponIDTable") )
              __debugbreak();
            StringTable_GetAsset("mp/statstable.csv", (const StringTable **)&v352);
            if ( !v352 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_challenges.cpp", 1430, ASSERT_TYPE_ASSERT, "(weaponTable)", (const char *)&queryFormat, "weaponTable") )
              __debugbreak();
            v358 = (StringTable *)strtok(v98, "|");
            v99 = 0;
            v355 = 0;
            v100 = v358;
            if ( v358 )
            {
              while ( 1 )
              {
                v101 = StringTable_Lookup(v352, 5, (const char *)v100, 4);
                v102 = StringTable_GetRowCount(tablePtr);
                v103 = 0;
                if ( v102 > 0 )
                {
                  do
                  {
                    v104 = 0x7FFFFFFFi64;
                    v105 = v101;
                    v106 = StringTable_GetColumnValueForRow(tablePtr, v103, 1);
                    if ( !v106 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
                      __debugbreak();
                    if ( !v101 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
                      __debugbreak();
                    v107 = v106 - v101;
                    while ( 1 )
                    {
                      v108 = v105[v107];
                      v109 = v104;
                      v110 = *v105++;
                      --v104;
                      if ( !v109 )
                      {
LABEL_260:
                        v111 = StringTable_GetColumnValueForRow(tablePtr, v103, 0);
                        v112 = atoi(v111);
                        v99 = v355;
                        goto LABEL_267;
                      }
                      if ( v108 != v110 )
                        break;
                      if ( !v108 )
                        goto LABEL_260;
                    }
                    ++v103;
                  }
                  while ( v103 < v102 );
                  v99 = v355;
                  v100 = v358;
                }
                StringTable_GetAsset("loot/equipment_ids.csv", (const StringTable **)&v353);
                if ( !v353 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_challenges.cpp", 1463, ASSERT_TYPE_ASSERT, "(equipmentIDTable)", (const char *)&queryFormat, "equipmentIDTable") )
                  __debugbreak();
                v113 = StringTable_Lookup(v353, 1, (const char *)v100, 0);
                v112 = atoi(v113);
LABEL_267:
                v114 = v112;
                if ( !v99 )
                  goto LABEL_270;
                if ( v99 == 1 )
                  break;
LABEL_271:
                ++v99;
                v358 = (StringTable *)strtok(NULL, "|");
                v355 = v99;
                v100 = v358;
                if ( !v358 )
                  goto LABEL_272;
              }
              v114 = (__int64)v112 << 32;
LABEL_270:
              v7->params[0] |= v114;
              goto LABEL_271;
            }
          }
        }
        else
        {
          v116 = strtok(v98, "|");
          for ( k = 0; v116; ++k )
          {
            v118 = atoi(v116);
            if ( k )
            {
              if ( k == 1 )
                v7->params[0] |= (__int64)v118 << 48;
            }
            else
            {
              v7->params[0] = (__int64)v118 << 16;
            }
            v116 = strtok(NULL, "|");
          }
        }
LABEL_272:
        v98 = I_strtok_r(NULL, ",", (char **)&table);
        v97 = ++v354;
        if ( !table )
          return 1;
      }
    }
    return 1;
  }
LABEL_281:
  v119 = DVARBOOL_online_challenge_upload_mp_addxp;
  if ( !DVARBOOL_online_challenge_upload_mp_addxp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_challenge_upload_mp_addxp") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v119);
  if ( !v119->current.enabled )
  {
LABEL_321:
    v137 = DVARBOOL_online_challenge_upload_start_end_match;
    if ( !DVARBOOL_online_challenge_upload_start_end_match && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_challenge_upload_start_end_match") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v137);
    if ( v137->current.enabled )
    {
      v138 = 0x7FFFFFFFi64;
      v139 = name;
      if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      do
      {
        v140 = (unsigned __int8)v139["start_match" - name];
        v141 = v138;
        v142 = *(unsigned __int8 *)v139++;
        --v138;
        if ( !v141 )
          break;
        if ( v140 != v142 )
        {
          v143 = v140 + 32;
          if ( (unsigned int)(v140 - 65) > 0x19 )
            v143 = v140;
          v140 = v143;
          v144 = v142 + 32;
          if ( (unsigned int)(v142 - 65) > 0x19 )
            v144 = v142;
          if ( v140 != v144 )
            goto LABEL_341;
        }
      }
      while ( v140 );
      Com_Printf(25, "%s (%s)\n", name, params);
      v7->params_amount = 2;
      v7->params[0] = OnlineMatchId::GetMatchId();
      v145 = 0;
      v146 = strtok(dest, ",");
      if ( v146 )
      {
        do
        {
          if ( !v145 )
            v7->params[1] = atoi(v146);
          v146 = strtok(NULL, ",");
          ++v145;
        }
        while ( v146 );
        return 1;
      }
      return 1;
    }
LABEL_341:
    v147 = DVARBOOL_online_challenge_upload_start_end_match;
    if ( !DVARBOOL_online_challenge_upload_start_end_match && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_challenge_upload_start_end_match") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v147);
    if ( v147->current.enabled )
    {
      v148 = 0x7FFFFFFFi64;
      v149 = name;
      if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      do
      {
        v150 = (unsigned __int8)v149["end_match" - name];
        v151 = v148;
        v152 = *(unsigned __int8 *)v149++;
        --v148;
        if ( !v151 )
          break;
        if ( v150 != v152 )
        {
          v153 = v150 + 32;
          if ( (unsigned int)(v150 - 65) > 0x19 )
            v153 = v150;
          v150 = v153;
          v154 = v152 + 32;
          if ( (unsigned int)(v152 - 65) > 0x19 )
            v154 = v152;
          if ( v150 != v154 )
            goto LABEL_375;
        }
      }
      while ( v150 );
      Com_Printf(25, "%s (%s)\n", name, params);
      v7->params_amount = 5;
      v155 = 0;
      v156 = strtok(dest, ",");
      if ( !v156 )
        return 1;
      while ( 2 )
      {
        switch ( v155 )
        {
          case 0:
            v7->params[0] |= (unsigned int)atoi(v156);
            goto LABEL_373;
          case 1:
            v7->params[1] = atoi(v156);
            goto LABEL_373;
          case 2:
            v7->params[2] = atoi(v156);
            goto LABEL_373;
          case 3:
            v7->params[3] = atoi(v156);
            goto LABEL_373;
          case 4:
            v7->params[4] = atoi(v156);
            goto LABEL_373;
          case 5:
            StringTable_GetAsset("loot/operator_ids.csv", (const StringTable **)&v352);
            if ( !v352 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_challenges.cpp", 1618, ASSERT_TYPE_ASSERT, "(operatorTable)", (const char *)&queryFormat, "operatorTable") )
              __debugbreak();
            v157 = strtok(v156, "|");
            v158 = 0;
            if ( !v157 )
              goto LABEL_373;
            break;
          default:
LABEL_373:
            ++v155;
            v156 = strtok(NULL, ",");
            if ( v156 )
              continue;
            return 1;
        }
        break;
      }
      while ( 1 )
      {
        v159 = StringTable_Lookup(v352, 1, v157, 0);
        v160 = atoi(v159);
        if ( !v158 )
          break;
        if ( v158 == 1 )
        {
          v161 = (__int64)v160 << 48;
          goto LABEL_371;
        }
LABEL_372:
        v157 = strtok(NULL, "|");
        ++v158;
        if ( !v157 )
          goto LABEL_373;
      }
      v161 = (__int64)v160 << 32;
LABEL_371:
      v7->params[0] |= v161;
      goto LABEL_372;
    }
LABEL_375:
    v162 = DVARBOOL_online_challenge_upload_end_trial;
    if ( !DVARBOOL_online_challenge_upload_end_trial && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_challenge_upload_end_trial") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v162);
    if ( v162->current.enabled )
    {
      v163 = 0x7FFFFFFFi64;
      v164 = name;
      if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      do
      {
        v165 = (unsigned __int8)v164["end_trial" - name];
        v166 = v163;
        v167 = *(unsigned __int8 *)v164++;
        --v163;
        if ( !v166 )
          break;
        if ( v165 != v167 )
        {
          v168 = v165 + 32;
          if ( (unsigned int)(v165 - 65) > 0x19 )
            v168 = v165;
          v165 = v168;
          v169 = v167 + 32;
          if ( (unsigned int)(v167 - 65) > 0x19 )
            v169 = v167;
          if ( v165 != v169 )
            goto LABEL_396;
        }
      }
      while ( v165 );
      Com_Printf(25, "%s (%s)\n", name, params);
      v7->params_amount = 1;
      v170 = strtok(dest, ",");
      if ( v170 )
      {
        v171 = 0i64;
        do
        {
          if ( !v171 )
            v7->params[0] = atoi(v170);
          v170 = strtok(NULL, ",");
          ++v171;
        }
        while ( v170 );
        return 1;
      }
      return 1;
    }
LABEL_396:
    v172 = DVARBOOL_online_challenge_upload_killstreak_end;
    if ( !DVARBOOL_online_challenge_upload_killstreak_end && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_challenge_upload_killstreak_end") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v172);
    if ( v172->current.enabled )
    {
      v173 = 0x7FFFFFFFi64;
      v174 = name;
      if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      do
      {
        v175 = (unsigned __int8)v174["killstreak_end" - name];
        v176 = v173;
        v177 = *(unsigned __int8 *)v174++;
        --v173;
        if ( !v176 )
          break;
        if ( v175 != v177 )
        {
          v178 = v175 + 32;
          if ( (unsigned int)(v175 - 65) > 0x19 )
            v178 = v175;
          v175 = v178;
          v179 = v177 + 32;
          if ( (unsigned int)(v177 - 65) > 0x19 )
            v179 = v177;
          if ( v175 != v179 )
            goto LABEL_426;
        }
      }
      while ( v175 );
      Com_Printf(25, "%s (%s)\n", name, params);
      v7->params_amount = 8;
      v180 = 0;
      v181 = strtok(dest, ",");
      if ( v181 )
      {
        do
        {
          switch ( v180 )
          {
            case 0:
              StringTable_GetAsset("loot/killstreak_ids.csv", (const StringTable **)&v352);
              if ( !v352 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_challenges.cpp", 1687, ASSERT_TYPE_ASSERT, "(killstreakTable)", (const char *)&queryFormat, "killstreakTable") )
                __debugbreak();
              v182 = StringTable_Lookup(v352, 1, v181, 0);
              v7->params[0] = atoi(v182);
              break;
            case 1:
              v7->params[5] = atoi(v181);
              break;
            case 2:
              v7->params[6] = atoi(v181);
              break;
            case 3:
              v7->params[1] = atoi(v181);
              break;
            case 4:
              v7->params[2] = atoi(v181);
              break;
            case 5:
              v7->params[3] = atoi(v181);
              break;
            case 6:
              v7->params[4] = atoi(v181);
              break;
            case 7:
              v7->params[7] = OnlineChallengesManager::ParseOperators(this, v181);
              break;
            default:
              break;
          }
          ++v180;
          v181 = strtok(NULL, ",");
        }
        while ( v181 );
        return 1;
      }
      return 1;
    }
LABEL_426:
    if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_online_challenge_upload_field_end, "online_challenge_upload_field_end") )
    {
      v183 = 0x7FFFFFFFi64;
      v184 = name;
      if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      do
      {
        v185 = (unsigned __int8)v184["field_end" - name];
        v186 = v183;
        v187 = *(unsigned __int8 *)v184++;
        --v183;
        if ( !v186 )
          break;
        if ( v185 != v187 )
        {
          v188 = v185 + 32;
          if ( (unsigned int)(v185 - 65) > 0x19 )
            v188 = v185;
          v185 = v188;
          v189 = v187 + 32;
          if ( (unsigned int)(v187 - 65) > 0x19 )
            v189 = v187;
          if ( v185 != v189 )
            goto LABEL_459;
        }
      }
      while ( v185 );
      Com_Printf(25, "%s (%s)\n", name, params);
      v7->params_amount = 3;
      v190 = 0;
      v191 = strtok(dest, ",");
      if ( v191 )
      {
        do
        {
          if ( v190 )
          {
            if ( v190 == 1 )
            {
              v7->params[1] = atoi(v191);
            }
            else if ( v190 == 2 )
            {
              StringTable_GetAsset("loot/operator_ids.csv", (const StringTable **)&v352);
              if ( !v352 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_challenges.cpp", 1779, ASSERT_TYPE_ASSERT, "(operatorTable)", (const char *)&queryFormat, "operatorTable") )
                __debugbreak();
              v192 = strtok(v191, "|");
              for ( m = 0; v192; ++m )
              {
                v194 = StringTable_Lookup(v352, 1, v192, 0);
                v195 = atoi(v194);
                if ( m )
                {
                  if ( m == 1 )
                    v7->params[2] |= (__int64)v195 << 16;
                }
                else
                {
                  v7->params[2] = v195;
                }
                v192 = strtok(NULL, "|");
              }
            }
          }
          else
          {
            StringTable_GetAsset("loot/super_ids.csv", (const StringTable **)&v353);
            if ( !v353 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_challenges.cpp", 1761, ASSERT_TYPE_ASSERT, "(superTable)", (const char *)&queryFormat, "superTable") )
              __debugbreak();
            v196 = StringTable_Lookup(v353, 1, v191, 0);
            v7->params[0] = atoi(v196);
          }
          ++v190;
          v191 = strtok(NULL, ",");
        }
        while ( v191 );
        return 1;
      }
      return 1;
    }
LABEL_459:
    if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_online_challenge_upload_capture, "online_challenge_upload_capture") )
    {
      v197 = 0x7FFFFFFFi64;
      v198 = name;
      if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      do
      {
        v199 = (unsigned __int8)v198["capture" - name];
        v200 = v197;
        v201 = *(unsigned __int8 *)v198++;
        --v197;
        if ( !v200 )
          break;
        if ( v199 != v201 )
        {
          v202 = v199 + 32;
          if ( (unsigned int)(v199 - 65) > 0x19 )
            v202 = v199;
          v199 = v202;
          v203 = v201 + 32;
          if ( (unsigned int)(v201 - 65) > 0x19 )
            v203 = v201;
          if ( v199 != v203 )
            goto LABEL_477;
        }
      }
      while ( v199 );
      Com_Printf(25, "%s (%s)\n", name, params);
      v7->params_amount = 2;
      v204 = 0;
      v205 = strtok(dest, ",");
      if ( v205 )
      {
        do
        {
          if ( !v204 || v204 == 1 )
            v7->params[0] = atoi(v205);
          v205 = strtok(NULL, ",");
          ++v204;
          v7 = (CachedChallengeEventData *)((char *)v7 + 8);
        }
        while ( v205 );
        return 1;
      }
      return 1;
    }
LABEL_477:
    if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_online_challenge_upload_defuse, "online_challenge_upload_defuse") )
    {
      v206 = 0x7FFFFFFFi64;
      v207 = name;
      if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      do
      {
        v208 = (unsigned __int8)v207["defuse" - name];
        v209 = v206;
        v210 = *(unsigned __int8 *)v207++;
        --v206;
        if ( !v209 )
          break;
        if ( v208 != v210 )
        {
          v211 = v208 + 32;
          if ( (unsigned int)(v208 - 65) > 0x19 )
            v211 = v208;
          v208 = v211;
          v212 = v210 + 32;
          if ( (unsigned int)(v210 - 65) > 0x19 )
            v212 = v210;
          if ( v208 != v212 )
            goto LABEL_495;
        }
      }
      while ( v208 );
      Com_Printf(25, "%s (%s)\n", name, params);
      v7->params_amount = 2;
      v213 = 0;
      v214 = strtok(dest, ",");
      if ( v214 )
      {
        do
        {
          if ( !v213 || v213 == 1 )
            v7->params[0] = atoi(v214);
          v214 = strtok(NULL, ",");
          ++v213;
          v7 = (CachedChallengeEventData *)((char *)v7 + 8);
        }
        while ( v214 );
        return 1;
      }
      return 1;
    }
LABEL_495:
    if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_online_challenge_upload_plant, "online_challenge_upload_plant") )
    {
      v215 = 0x7FFFFFFFi64;
      v216 = name;
      if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      do
      {
        v217 = (unsigned __int8)v216["plant" - name];
        v218 = v215;
        v219 = *(unsigned __int8 *)v216++;
        --v215;
        if ( !v218 )
          break;
        if ( v217 != v219 )
        {
          v220 = v217 + 32;
          if ( (unsigned int)(v217 - 65) > 0x19 )
            v220 = v217;
          v217 = v220;
          v221 = v219 + 32;
          if ( (unsigned int)(v219 - 65) > 0x19 )
            v221 = v219;
          if ( v217 != v221 )
            goto LABEL_508;
        }
      }
      while ( v217 );
LABEL_520:
      Com_Printf(25, "%s (%s)\n", name, params);
      v7->params_amount = 2;
      v229 = 0;
      v230 = strtok(dest, ",");
      if ( v230 )
      {
        do
        {
          if ( !v229 || v229 == 1 )
            v7->params[0] = atoi(v230);
          v230 = strtok(NULL, ",");
          ++v229;
          v7 = (CachedChallengeEventData *)((char *)v7 + 8);
        }
        while ( v230 );
        return 1;
      }
      return 1;
    }
LABEL_508:
    if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_online_challenge_upload_games_of_summer, "online_challenge_upload_games_of_summer") )
    {
      v222 = 0x7FFFFFFFi64;
      v223 = name;
      if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      while ( 1 )
      {
        v224 = (unsigned __int8)v223["games_of_summer_complete" - name];
        v225 = v222;
        v226 = *(unsigned __int8 *)v223++;
        --v222;
        if ( !v225 )
          goto LABEL_520;
        if ( v224 != v226 )
        {
          v227 = v224 + 32;
          if ( (unsigned int)(v224 - 65) > 0x19 )
            v227 = v224;
          v224 = v227;
          v228 = v226 + 32;
          if ( (unsigned int)(v226 - 65) > 0x19 )
            v228 = v226;
          if ( v224 != v228 )
            break;
        }
        if ( !v224 )
          goto LABEL_520;
      }
    }
    if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_online_challenge_upload_stun, "online_challenge_upload_stun") )
    {
      v231 = 0x7FFFFFFFi64;
      v232 = name;
      if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      do
      {
        v233 = (unsigned __int8)v232["stun" - name];
        v234 = v231;
        v235 = *(unsigned __int8 *)v232++;
        --v231;
        if ( !v234 )
          break;
        if ( v233 != v235 )
        {
          v236 = v233 + 32;
          if ( (unsigned int)(v233 - 65) > 0x19 )
            v236 = v233;
          v233 = v236;
          v237 = v235 + 32;
          if ( (unsigned int)(v235 - 65) > 0x19 )
            v237 = v235;
          if ( v233 != v237 )
            goto LABEL_546;
        }
      }
      while ( v233 );
      Com_Printf(25, "%s (%s)\n", name, params);
      v7->params_amount = 1;
      v238 = 0;
      v239 = strtok(dest, ",");
      if ( v239 )
      {
        do
        {
          if ( !v238 )
          {
            StringTable_GetAsset("loot/equipment_ids.csv", (const StringTable **)&v352);
            if ( !v352 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_challenges.cpp", 1906, ASSERT_TYPE_ASSERT, "(equipmentIDTable)", (const char *)&queryFormat, "equipmentIDTable") )
              __debugbreak();
            v240 = StringTable_Lookup(v352, 1, v239, 0);
            v7->params[0] = atoi(v240);
          }
          ++v238;
          v239 = strtok(NULL, ",");
        }
        while ( v239 );
        return 1;
      }
      return 1;
    }
LABEL_546:
    if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_online_challenge_upload_stim, "online_challenge_upload_stim") )
    {
      v241 = 0x7FFFFFFFi64;
      v242 = name;
      if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      do
      {
        v243 = (unsigned __int8)v242["stim" - name];
        v244 = v241;
        v245 = *(unsigned __int8 *)v242++;
        --v241;
        if ( !v244 )
          break;
        if ( v243 != v245 )
        {
          v246 = v243 + 32;
          if ( (unsigned int)(v243 - 65) > 0x19 )
            v246 = v243;
          v243 = v246;
          v247 = v245 + 32;
          if ( (unsigned int)(v245 - 65) > 0x19 )
            v247 = v245;
          if ( v243 != v247 )
            goto LABEL_564;
        }
      }
      while ( v243 );
      Com_Printf(25, "%s (%s)\n", name, params);
      v7->params_amount = 1;
      v248 = strtok(dest, ",");
      if ( v248 )
      {
        v249 = 0i64;
        do
        {
          if ( !v249 )
            v7->params[0] = atoi(v248);
          v248 = strtok(NULL, ",");
          ++v249;
        }
        while ( v248 );
        return 1;
      }
      return 1;
    }
LABEL_564:
    if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_online_challenge_upload_hack, "online_challenge_upload_hack") )
    {
      v250 = 0x7FFFFFFFi64;
      v251 = name;
      if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      do
      {
        v252 = (unsigned __int8)v251["hack" - name];
        v253 = v250;
        v254 = *(unsigned __int8 *)v251++;
        --v250;
        if ( !v253 )
          break;
        if ( v252 != v254 )
        {
          v255 = v252 + 32;
          if ( (unsigned int)(v252 - 65) > 0x19 )
            v255 = v252;
          v252 = v255;
          v256 = v254 + 32;
          if ( (unsigned int)(v254 - 65) > 0x19 )
            v256 = v254;
          if ( v252 != v256 )
            goto LABEL_592;
        }
      }
      while ( v252 );
      Com_Printf(25, "%s (%s)\n", name, params);
      v7->params_amount = 2;
      v257 = 0;
      v258 = strtok(dest, ",");
      if ( v258 )
      {
        do
        {
          if ( v257 )
          {
            if ( v257 == 1 )
            {
              StringTable_GetAsset("mp/perktable.csv", (const StringTable **)&v352);
              if ( !v352 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_challenges.cpp", 1967, ASSERT_TYPE_ASSERT, "(perkTable)", (const char *)&queryFormat, "perkTable") )
                __debugbreak();
              v259 = 0;
              v260 = strtok(v258, "|");
              if ( v260 )
              {
                v261 = 0;
                do
                {
                  v262 = StringTable_Lookup(v352, 1, v260, 0);
                  v263 = atoi(v262);
                  if ( v263 )
                  {
                    if ( v259 < 3 )
                      v7->params[1] |= (__int64)v263 << v261;
                    ++v259;
                    v261 += 16;
                  }
                  v260 = strtok(NULL, "|");
                }
                while ( v260 );
              }
            }
          }
          else
          {
            v7->params[0] = atoi(v258);
          }
          ++v257;
          v258 = strtok(NULL, ",");
        }
        while ( v258 );
        return 1;
      }
      return 1;
    }
LABEL_592:
    if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_online_challenge_upload_login, "online_challenge_upload_login") )
    {
      v264 = 0x7FFFFFFFi64;
      v265 = name;
      if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      while ( 1 )
      {
        v266 = (unsigned __int8)v265["login_event" - name];
        v267 = v264;
        v268 = *(unsigned __int8 *)v265++;
        --v264;
        if ( !v267 )
          goto LABEL_667;
        if ( v266 != v268 )
        {
          v269 = v266 + 32;
          if ( (unsigned int)(v266 - 65) > 0x19 )
            v269 = v266;
          v266 = v269;
          v270 = v268 + 32;
          if ( (unsigned int)(v268 - 65) > 0x19 )
            v270 = v268;
          if ( v266 != v270 )
            break;
        }
        if ( !v266 )
          goto LABEL_667;
      }
    }
    if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_online_challenge_upload_sp_mission_complete, "online_challenge_upload_sp_mission_complete") )
    {
      v271 = 0x7FFFFFFFi64;
      v272 = name;
      if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      do
      {
        v273 = (unsigned __int8)v272["sp_mission_complete" - name];
        v274 = v271;
        v275 = *(unsigned __int8 *)v272++;
        --v271;
        if ( !v274 )
          break;
        if ( v273 != v275 )
        {
          v276 = v273 + 32;
          if ( (unsigned int)(v273 - 65) > 0x19 )
            v276 = v273;
          v273 = v276;
          v277 = v275 + 32;
          if ( (unsigned int)(v275 - 65) > 0x19 )
            v277 = v275;
          if ( v273 != v277 )
            goto LABEL_618;
        }
      }
      while ( v273 );
    }
    else
    {
LABEL_618:
      if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_online_challenge_upload_cp_complete, "online_challenge_upload_cp_complete") )
      {
        v278 = 0x7FFFFFFFi64;
        v279 = name;
        if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
          __debugbreak();
        do
        {
          v280 = (unsigned __int8)v279["cp_complete" - name];
          v281 = v278;
          v282 = *(unsigned __int8 *)v279++;
          --v278;
          if ( !v281 )
            break;
          if ( v280 != v282 )
          {
            v283 = v280 + 32;
            if ( (unsigned int)(v280 - 65) > 0x19 )
              v283 = v280;
            v280 = v283;
            v284 = v282 + 32;
            if ( (unsigned int)(v282 - 65) > 0x19 )
              v284 = v282;
            if ( v280 != v284 )
              goto LABEL_631;
          }
        }
        while ( v280 );
      }
      else
      {
LABEL_631:
        if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_online_challenge_upload_br_tutorial_complete, "online_challenge_upload_br_tutorial_complete") )
        {
          v285 = 0x7FFFFFFFi64;
          v286 = name;
          if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
            __debugbreak();
          do
          {
            v287 = (unsigned __int8)v286["br_tutorial_complete" - name];
            v288 = v285;
            v289 = *(unsigned __int8 *)v286++;
            --v285;
            if ( !v288 )
              break;
            if ( v287 != v289 )
            {
              v290 = v287 + 32;
              if ( (unsigned int)(v287 - 65) > 0x19 )
                v290 = v287;
              v287 = v290;
              v291 = v289 + 32;
              if ( (unsigned int)(v289 - 65) > 0x19 )
                v291 = v289;
              if ( v287 != v291 )
                goto LABEL_644;
            }
          }
          while ( v287 );
        }
        else
        {
LABEL_644:
          if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_online_challenge_upload_happy_hour, "online_challenge_upload_happy_hour") )
          {
LABEL_662:
            if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_online_challenge_upload_tokens, "online_challenge_upload_tokens") && (!I_strnicmp("activate_player_xp_token", name, 0x18ui64) || !I_strnicmp("activate_weapon_xp_token", name, 0x18ui64) || !I_strnicmp("activate_keys_token", name, 0x13ui64) || !I_strnicmp("activate_battle_xp_token", name, 0x18ui64)) )
            {
LABEL_667:
              Com_Printf(25, "%s (%s)\n", name, params);
              result = 1;
              v7->params_amount = 0;
              return result;
            }
            if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_online_challenge_upload_spec_ops_end, "online_challenge_upload_spec_ops_end") || I_strnicmp("spec_ops_end", name, 0x7FFFFFFFui64) )
            {
              if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_online_challenge_upload_contract_start, "online_challenge_upload_contract_start") || I_strnicmp("contract_start", name, 0x7FFFFFFFui64) )
              {
                if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_online_challenge_upload_contract_end, "online_challenge_upload_contract_end") || I_strnicmp("contract_end", name, 0x7FFFFFFFui64) )
                {
                  if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_online_challenge_upload_revive, "online_challenge_upload_revive") || I_strnicmp("revive", name, 0x7FFFFFFFui64) )
                  {
                    if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_online_challenge_upload_buy_item, "online_challenge_upload_buy_item") || I_strnicmp("buy_item", name, 0x7FFFFFFFui64) )
                    {
                      if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_online_challenge_upload_pickup, "online_challenge_upload_pickup") || I_strnicmp("pickup", name, 0x7FFFFFFFui64) )
                      {
                        if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_online_challenge_upload_use_item, "online_challenge_upload_use_item") || I_strnicmp("use_item", name, 0x7FFFFFFFui64) )
                        {
                          if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_online_challenge_upload_loadout, "online_challenge_upload_loadout") || I_strnicmp("loadout", name, 0x7FFFFFFFui64) )
                          {
                            if ( (!Dvar_GetBool_Internal_DebugName(DVARBOOL_online_challenge_upload_ping, "online_challenge_upload_ping") || I_strnicmp("ping", name, 0x7FFFFFFFui64)) && (!Dvar_GetBool_Internal_DebugName(DVARBOOL_online_challenge_upload_collect_item, "online_challenge_upload_collect_item") || I_strnicmp("collect_item", name, 0x7FFFFFFFui64)) )
                            {
                              if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_online_challenge_upload_gulag_end_match, "online_challenge_upload_gulag_end_match") || I_strnicmp("gulag_end_match", name, 0x7FFFFFFFui64) )
                              {
                                if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_online_challenge_upload_match_placement, "online_challenge_upload_match_placement") || I_strnicmp("match_placement", name, 0x7FFFFFFFui64) )
                                {
                                  if ( (!Dvar_GetBool_Internal_DebugName(DVARBOOL_online_challenge_upload_driving, "online_challenge_upload_driving") || I_strnicmp("driving", name, 0x7FFFFFFFui64)) && (!Dvar_GetBool_Internal_DebugName(DVARBOOL_online_challenge_upload_alive_in_gas, "online_challenge_upload_alive_in_gas") || I_strnicmp("alive_in_gas", name, 0x7FFFFFFFui64)) && (!Dvar_GetBool_Internal_DebugName(DVARBOOL_online_challenge_upload_alive_not_downed, "online_challenge_upload_alive_not_downed") || I_strnicmp("alive_not_downed", name, 0x7FFFFFFFui64)) )
                                  {
                                    if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_online_challenge_upload_spray, "online_challenge_upload_spray") || I_strnicmp("spray", name, 0x7FFFFFFFui64) )
                                    {
                                      if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_online_challenge_upload_killstreak_available, "online_challenge_upload_killstreak_available") || I_strnicmp("killstreak_available", name, 0x7FFFFFFFui64) )
                                      {
                                        if ( I_strnicmp("give_loot", name, 0x7FFFFFFFui64) )
                                          return 0;
                                        Com_Printf(25, "%s (%s)\n", name, params);
                                        v350 = strtok(dest, ",");
                                        v7->params_amount = 1;
                                        if ( v350 )
                                        {
                                          v351 = 0i64;
                                          do
                                          {
                                            if ( !v351 )
                                              v7->params[0] = atoi(v350);
                                            v350 = strtok(NULL, ",");
                                            ++v351;
                                          }
                                          while ( v350 );
                                        }
                                      }
                                      else
                                      {
                                        Com_Printf(25, "%s (%s)\n", name, params);
                                        saveptrctx = NULL;
                                        v332 = I_strtok_r(dest, ",", &saveptrctx);
                                        v333 = 0;
                                        v7->params_amount = 6;
                                        while ( 1 )
                                        {
                                          v334 = (char *)v332;
                                          switch ( v333 )
                                          {
                                            case 0:
                                              StringTable_GetAsset("loot/killstreak_ids.csv", (const StringTable **)&v352);
                                              if ( !v352 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_challenges.cpp", 2488, ASSERT_TYPE_ASSERT, "(killstreakTable)", (const char *)&queryFormat, "killstreakTable") )
                                                __debugbreak();
                                              v335 = StringTable_Lookup(v352, 1, v334, 0);
                                              v7->params[0] = atoi(v335);
                                              break;
                                            case 1:
                                              v7->params[1] = atoi(v332);
                                              break;
                                            case 2:
                                              v7->params[2] = atoi(v332);
                                              break;
                                            case 3:
                                              StringTable_GetAsset("loot/operator_ids.csv", (const StringTable **)&v353);
                                              if ( !v353 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_challenges.cpp", 2510, ASSERT_TYPE_ASSERT, "(operatorTable)", (const char *)&queryFormat, "operatorTable") )
                                                __debugbreak();
                                              v336 = strtok(v334, "|");
                                              for ( n = 0; v336; ++n )
                                              {
                                                v338 = StringTable_Lookup(v353, 1, v336, 0);
                                                v339 = atoi(v338);
                                                if ( n )
                                                {
                                                  if ( n == 1 )
                                                    v7->params[3] |= (__int64)v339 << 16;
                                                }
                                                else
                                                {
                                                  v7->params[3] = v339;
                                                }
                                                v336 = strtok(NULL, "|");
                                              }
                                              break;
                                            case 4:
                                              StringTable_GetAsset("mp/perktable.csv", (const StringTable **)&v358);
                                              if ( !v358 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_challenges.cpp", 2535, ASSERT_TYPE_ASSERT, "(perkTable)", (const char *)&queryFormat, "perkTable") )
                                                __debugbreak();
                                              v340 = 0;
                                              v341 = strtok(v334, "|");
                                              if ( v341 )
                                              {
                                                v342 = 0;
                                                do
                                                {
                                                  v343 = StringTable_Lookup(v358, 1, v341, 0);
                                                  v344 = atoi(v343);
                                                  if ( v344 )
                                                  {
                                                    if ( v340 < 3 )
                                                      v7->params[4] |= (__int64)v344 << v342;
                                                    ++v340;
                                                    v342 += 16;
                                                  }
                                                  v341 = strtok(NULL, "|");
                                                }
                                                while ( v341 );
                                              }
                                              goto $LN240;
                                            case 5:
$LN240:
                                              StringTable_GetAsset("mp/perktable.csv", (const StringTable **)&v360);
                                              if ( !v360 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_challenges.cpp", 2561, ASSERT_TYPE_ASSERT, "(perkTable)", (const char *)&queryFormat, "perkTable") )
                                                __debugbreak();
                                              v345 = 0;
                                              v346 = strtok(v334, "|");
                                              if ( v346 )
                                              {
                                                v347 = 0;
                                                do
                                                {
                                                  v348 = StringTable_Lookup(v360, 1, v346, 0);
                                                  v349 = atoi(v348);
                                                  if ( v349 )
                                                  {
                                                    if ( v345 < 3 )
                                                      v7->params[5] |= (__int64)v349 << v347;
                                                    ++v345;
                                                    v347 += 16;
                                                  }
                                                  v346 = strtok(NULL, "|");
                                                }
                                                while ( v346 );
                                              }
                                              break;
                                            default:
                                              break;
                                          }
                                          if ( !saveptrctx )
                                            break;
                                          v332 = I_strtok_r(NULL, ",", &saveptrctx);
                                          ++v333;
                                        }
                                      }
                                    }
                                    else
                                    {
                                      Com_Printf(25, "%s (%s)\n", name, params);
                                      v7->params_amount = 2;
                                      v330 = 0;
                                      v331 = strtok(dest, ",");
                                      if ( v331 )
                                      {
                                        do
                                        {
                                          if ( v330 )
                                          {
                                            if ( v330 == 1 )
                                              v7->params[1] = OnlineChallengesManager::ParseOperators(this, v331);
                                          }
                                          else
                                          {
                                            v7->params[0] = atoi(v331);
                                          }
                                          v331 = strtok(NULL, ",");
                                          ++v330;
                                        }
                                        while ( v331 );
                                        return 1;
                                      }
                                    }
                                  }
                                  else
                                  {
                                    Com_Printf(25, "%s (%s)\n", name, params);
                                    v7->params_amount = 2;
                                    v328 = 0;
                                    v329 = strtok(dest, ",");
                                    if ( v329 )
                                    {
                                      do
                                      {
                                        if ( v328 )
                                        {
                                          if ( v328 == 1 )
                                            v7->params[1] = OnlineChallengesManager::ParseOperators(this, v329);
                                        }
                                        else
                                        {
                                          v7->params[0] = atoi(v329);
                                        }
                                        v329 = strtok(NULL, ",");
                                        ++v328;
                                      }
                                      while ( v329 );
                                      return 1;
                                    }
                                  }
                                }
                                else
                                {
                                  Com_Printf(25, "%s (%s)\n", name, params);
                                  v7->params_amount = 3;
                                  v326 = 0;
                                  v327 = strtok(dest, ",");
                                  if ( v327 )
                                  {
                                    do
                                    {
                                      if ( v326 )
                                      {
                                        if ( v326 == 1 )
                                        {
                                          v7->params[1] = atoi(v327);
                                        }
                                        else if ( v326 == 2 )
                                        {
                                          v7->params[2] = OnlineChallengesManager::ParseOperators(this, v327);
                                        }
                                      }
                                      else
                                      {
                                        v7->params[0] = atoi(v327);
                                      }
                                      v327 = strtok(NULL, ",");
                                      ++v326;
                                    }
                                    while ( v327 );
                                    return 1;
                                  }
                                }
                              }
                              else
                              {
                                Com_Printf(25, "%s (%s)\n", name, params);
                                v7->params_amount = 2;
                                v324 = 0;
                                v325 = strtok(dest, ",");
                                if ( v325 )
                                {
                                  do
                                  {
                                    if ( v324 )
                                    {
                                      if ( v324 == 1 )
                                        v7->params[1] = OnlineChallengesManager::ParseOperators(this, v325);
                                    }
                                    else
                                    {
                                      v7->params[0] = atoi(v325);
                                    }
                                    v325 = strtok(NULL, ",");
                                    ++v324;
                                  }
                                  while ( v325 );
                                  return 1;
                                }
                              }
                            }
                            else
                            {
                              Com_Printf(25, "%s (%s)\n", name, params);
                              v7->params_amount = 2;
                              v321 = 0;
                              v322 = strtok(dest, ",");
                              if ( v322 )
                              {
                                do
                                {
                                  if ( v321 )
                                  {
                                    if ( v321 == 1 )
                                      v7->params[1] = OnlineChallengesManager::ParseOperators(this, v322);
                                  }
                                  else
                                  {
                                    StringTable_GetAsset("mp/achievementenginerefs.csv", (const StringTable **)&v352);
                                    if ( !v352 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_challenges.cpp", 2339, ASSERT_TYPE_ASSERT, "(table)", (const char *)&queryFormat, "table") )
                                      __debugbreak();
                                    v323 = StringTable_Lookup(v352, 1, v322, 0);
                                    v7->params[0] = atoi(v323);
                                  }
                                  ++v321;
                                  v322 = strtok(NULL, ",");
                                }
                                while ( v322 );
                                return 1;
                              }
                            }
                          }
                          else
                          {
                            Com_Printf(25, "%s (%s)\n", name, params);
                            v7->params_amount = 2;
                            v319 = 0;
                            v320 = strtok(dest, ",");
                            if ( v320 )
                            {
                              do
                              {
                                if ( v319 )
                                {
                                  if ( v319 == 1 )
                                    v7->params[1] = OnlineChallengesManager::ParseOperators(this, v320);
                                }
                                else
                                {
                                  v7->params[0] = atoi(v320);
                                }
                                v320 = strtok(NULL, ",");
                                ++v319;
                              }
                              while ( v320 );
                              return 1;
                            }
                          }
                        }
                        else
                        {
                          Com_Printf(25, "%s (%s)\n", name, params);
                          v7->params_amount = 2;
                          v316 = 0;
                          v317 = strtok(dest, ",");
                          if ( v317 )
                          {
                            do
                            {
                              if ( v316 )
                              {
                                if ( v316 == 1 )
                                  v7->params[1] = OnlineChallengesManager::ParseOperators(this, v317);
                              }
                              else
                              {
                                StringTable_GetAsset("mp/achievementenginerefs.csv", (const StringTable **)&v352);
                                if ( !v352 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_challenges.cpp", 2276, ASSERT_TYPE_ASSERT, "(table)", (const char *)&queryFormat, "table") )
                                  __debugbreak();
                                v318 = StringTable_Lookup(v352, 1, v317, 0);
                                v7->params[0] = atoi(v318);
                              }
                              ++v316;
                              v317 = strtok(NULL, ",");
                            }
                            while ( v317 );
                            return 1;
                          }
                        }
                      }
                      else
                      {
                        Com_Printf(25, "%s (%s)\n", name, params);
                        v7->params_amount = 4;
                        v314 = 0;
                        v315 = strtok(dest, ",");
                        if ( v315 )
                        {
                          do
                          {
                            if ( v314 )
                            {
                              switch ( v314 )
                              {
                                case 1:
                                  v7->params[1] = atoi(v315);
                                  break;
                                case 2:
                                  v7->params[2] = atoi(v315);
                                  break;
                                case 3:
                                  v7->params[3] = OnlineChallengesManager::ParseOperators(this, v315);
                                  break;
                              }
                            }
                            else
                            {
                              v7->params[0] = atoi(v315);
                            }
                            v315 = strtok(NULL, ",");
                            ++v314;
                          }
                          while ( v315 );
                          return 1;
                        }
                      }
                    }
                    else
                    {
                      Com_Printf(25, "%s (%s)\n", name, params);
                      v7->params_amount = 3;
                      v310 = 0;
                      v311 = strtok(dest, ",");
                      if ( v311 )
                      {
                        do
                        {
                          if ( v310 )
                          {
                            if ( v310 == 1 )
                            {
                              StringTable_GetAsset("mp/achievementenginerefs.csv", (const StringTable **)&v352);
                              if ( !v352 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_challenges.cpp", 2206, ASSERT_TYPE_ASSERT, "(table)", (const char *)&queryFormat, "table") )
                                __debugbreak();
                              v312 = StringTable_Lookup(v352, 1, v311, 0);
                              v7->params[1] = atoi(v312);
                            }
                            else if ( v310 == 2 )
                            {
                              v7->params[2] = OnlineChallengesManager::ParseOperators(this, v311);
                            }
                          }
                          else
                          {
                            StringTable_GetAsset("mp/achievementenginerefs.csv", (const StringTable **)&v353);
                            if ( !v353 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_challenges.cpp", 2195, ASSERT_TYPE_ASSERT, "(table)", (const char *)&queryFormat, "table") )
                              __debugbreak();
                            v313 = StringTable_Lookup(v353, 1, v311, 0);
                            v7->params[0] = atoi(v313);
                          }
                          ++v310;
                          v311 = strtok(NULL, ",");
                        }
                        while ( v311 );
                        return 1;
                      }
                    }
                  }
                  else
                  {
                    Com_Printf(25, "%s (%s)\n", name, params);
                    v7->params_amount = 3;
                    v308 = 0;
                    v309 = strtok(dest, ",");
                    if ( v309 )
                    {
                      do
                      {
                        if ( v308 )
                        {
                          if ( v308 == 1 )
                          {
                            v7->params[1] = atoi(v309);
                          }
                          else if ( v308 == 2 )
                          {
                            v7->params[2] = OnlineChallengesManager::ParseOperators(this, v309);
                          }
                        }
                        else
                        {
                          v7->params[0] = atoi(v309);
                        }
                        v309 = strtok(NULL, ",");
                        ++v308;
                      }
                      while ( v309 );
                      return 1;
                    }
                  }
                }
                else
                {
                  Com_Printf(25, "%s (%s)\n", name, params);
                  v7->params_amount = 5;
                  v305 = 0;
                  v306 = strtok(dest, ",");
                  if ( v306 )
                  {
                    do
                    {
                      if ( v305 )
                      {
                        switch ( v305 )
                        {
                          case 1:
                            v7->params[1] = atoi(v306);
                            break;
                          case 2:
                            v7->params[2] = atoi(v306);
                            break;
                          case 3:
                            v7->params[3] = atoi(v306);
                            break;
                          case 4:
                            v7->params[4] = OnlineChallengesManager::ParseOperators(this, v306);
                            break;
                        }
                      }
                      else
                      {
                        StringTable_GetAsset("mp/brmissions.csv", (const StringTable **)&v352);
                        if ( !v352 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_challenges.cpp", 2121, ASSERT_TYPE_ASSERT, "(table)", (const char *)&queryFormat, "table") )
                          __debugbreak();
                        v307 = StringTable_Lookup(v352, 1, v306, 0);
                        v7->params[0] = atoi(v307);
                      }
                      ++v305;
                      v306 = strtok(NULL, ",");
                    }
                    while ( v306 );
                    return 1;
                  }
                }
              }
              else
              {
                Com_Printf(25, "%s (%s)\n", name, params);
                v7->params_amount = 3;
                v303 = 0;
                v304 = strtok(dest, ",");
                if ( v304 )
                {
                  do
                  {
                    if ( v303 )
                    {
                      if ( v303 == 1 )
                      {
                        v7->params[1] = atoi(v304);
                      }
                      else if ( v303 == 2 )
                      {
                        v7->params[2] = OnlineChallengesManager::ParseOperators(this, v304);
                      }
                    }
                    else
                    {
                      v7->params[0] = atoi(v304);
                    }
                    v304 = strtok(NULL, ",");
                    ++v303;
                  }
                  while ( v304 );
                  return 1;
                }
              }
            }
            else
            {
              Com_Printf(25, "%s (%s)\n", name, params);
              v7->params_amount = 2;
              v301 = 0;
              v302 = strtok(dest, ",");
              if ( v302 )
              {
                do
                {
                  if ( !v301 || v301 == 1 )
                    v7->params[0] = atoi(v302);
                  v302 = strtok(NULL, ",");
                  ++v301;
                  v7 = (CachedChallengeEventData *)((char *)v7 + 8);
                }
                while ( v302 );
                return 1;
              }
            }
            return 1;
          }
          v292 = 0x7FFFFFFFi64;
          v293 = name;
          if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
            __debugbreak();
          do
          {
            v294 = (unsigned __int8)v293["happy_hour" - name];
            v295 = v292;
            v296 = *(unsigned __int8 *)v293++;
            --v292;
            if ( !v295 )
              break;
            if ( v294 != v296 )
            {
              v297 = v294 + 32;
              if ( (unsigned int)(v294 - 65) > 0x19 )
                v297 = v294;
              v294 = v297;
              v298 = v296 + 32;
              if ( (unsigned int)(v296 - 65) > 0x19 )
                v298 = v296;
              if ( v294 != v298 )
                goto LABEL_662;
            }
          }
          while ( v294 );
        }
      }
    }
    Com_Printf(25, "%s (%s)\n", name, params);
    v7->params_amount = 1;
    v299 = strtok(dest, ",");
    if ( v299 )
    {
      v300 = 0i64;
      do
      {
        if ( !v300 )
          v7->params[0] = atoi(v299);
        v299 = strtok(NULL, ",");
        ++v300;
      }
      while ( v299 );
      return 1;
    }
    return 1;
  }
  v120 = 0x7FFFFFFFi64;
  v121 = name;
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
    __debugbreak();
  do
  {
    v122 = (unsigned __int8)v121["mp_addxp" - name];
    v123 = v120;
    v124 = *(unsigned __int8 *)v121++;
    --v120;
    if ( !v123 )
      break;
    if ( v122 != v124 )
    {
      v125 = v122 + 32;
      if ( (unsigned int)(v122 - 65) > 0x19 )
        v125 = v122;
      v122 = v125;
      v126 = v124 + 32;
      if ( (unsigned int)(v124 - 65) > 0x19 )
        v126 = v124;
      if ( v122 != v126 )
        goto LABEL_321;
    }
  }
  while ( v122 );
  Com_Printf(25, "%s (%s)\n", name, params);
  v127 = 0;
  v128 = strtok(dest, ",");
  v7->params_amount = 5;
  v129 = v128;
  if ( !v128 )
    return 1;
  do
  {
    if ( v127 )
    {
      switch ( v127 )
      {
        case 1:
          StringTable_GetAsset("loot/operator_ids.csv", (const StringTable **)&v353);
          if ( !v353 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_challenges.cpp", 1509, ASSERT_TYPE_ASSERT, "(operatorTable)", (const char *)&queryFormat, "operatorTable") )
            __debugbreak();
          v136 = StringTable_Lookup(v353, 1, v129, 0);
          v7->params[1] = atoi(v136);
          break;
        case 2:
          StringTable_GetAsset("loot/weapon_ids.csv", (const StringTable **)&table);
          if ( !table && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_challenges.cpp", 1521, ASSERT_TYPE_ASSERT, "(weaponIDTable)", (const char *)&queryFormat, "weaponIDTable") )
            __debugbreak();
          StringTable_GetAsset("mp/statstable.csv", (const StringTable **)&v352);
          if ( !v352 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_challenges.cpp", 1525, ASSERT_TYPE_ASSERT, "(weaponTable)", (const char *)&queryFormat, "weaponTable") )
            __debugbreak();
          v130 = v352;
          v7->params[2] = 0i64;
          v131 = StringTable_Lookup(v130, 5, v129, 4);
          v132 = StringTable_GetRowCount(table);
          v133 = 0;
          if ( v132 > 0 )
          {
            while ( 1 )
            {
              v134 = StringTable_GetColumnValueForRow(table, v133, 1);
              if ( !I_strcmp(v134, v131) )
                break;
              if ( ++v133 >= v132 )
                goto LABEL_313;
            }
            v135 = StringTable_GetColumnValueForRow(table, v133, 0);
            v7->params[2] = atoi(v135);
          }
          break;
        case 3:
          v7->params[3] = atoi(v129);
          break;
        case 4:
          v7->params[4] = atoi(v129);
          break;
      }
    }
    else
    {
      v7->params[0] = atoi(v129);
    }
LABEL_313:
    ++v127;
    v129 = strtok(NULL, ",");
  }
  while ( v129 );
  return 1;
}

/*
==============
OnlineChallengesManager::ReadEventParams
==============
*/
char OnlineChallengesManager::ReadEventParams(OnlineChallengesManager *this, char *eventParams, const unsigned int eventParamsSize, const unsigned int eventParamCount)
{
  __int64 v4; 
  unsigned int v8; 
  __int64 v9; 
  __int64 v11; 
  __int64 v12; 
  unsigned int outParamLen; 

  LODWORD(v4) = 0;
  v8 = 0;
  if ( eventParamCount )
  {
    do
    {
      if ( !Com_Challenges_ReadParam(&eventParams[(unsigned int)v4], eventParamsSize - v4, &outParamLen) )
      {
        Com_PrintError(16, "Error reading challenge parameter %d/%d from the server\n", v8, eventParamCount);
        return 0;
      }
      v4 = outParamLen + (unsigned int)v4;
      if ( (unsigned int)v4 > eventParamsSize )
      {
        LODWORD(v12) = eventParamsSize;
        LODWORD(v11) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_challenges.cpp", 2782, ASSERT_TYPE_ASSERT, "( paramReadSize ) <= ( eventParamsSize )", "paramReadSize not in [0, eventParamsSize]\n\t%u not in [0, %u]", v11, v12) )
          __debugbreak();
      }
      v9 = (unsigned int)v4;
      if ( eventParams[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_challenges.cpp", 2783, ASSERT_TYPE_ASSERT, "(eventParams[paramReadSize] == '\\0')", (const char *)&queryFormat, "eventParams[paramReadSize] == '\\0'") )
        __debugbreak();
      if ( v8 < eventParamCount - 1 )
      {
        if ( !outParamLen )
        {
          v4 = (unsigned int)(v4 + 1);
          if ( (unsigned int)v4 > eventParamsSize )
            goto LABEL_23;
          eventParams[v9] = 32;
        }
        if ( (int)v4 + 1 > eventParamsSize )
        {
LABEL_23:
          Com_PrintError(16, "Error reading challenge parameter %d/%d from the server. Next param will not fit.\n", v8, eventParamCount);
          return 0;
        }
        eventParams[v4] = 44;
        LODWORD(v4) = v4 + 1;
      }
      ++v8;
    }
    while ( v8 < eventParamCount );
    if ( (unsigned int)v4 > eventParamsSize )
    {
      LODWORD(v12) = eventParamsSize;
      LODWORD(v11) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_challenges.cpp", 2812, ASSERT_TYPE_ASSERT, "( paramReadSize ) <= ( eventParamsSize )", "paramReadSize not in [0, eventParamsSize]\n\t%u not in [0, %u]", v11, v12) )
        __debugbreak();
    }
  }
  if ( eventParams[(unsigned int)v4] )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_challenges.cpp", 2813, ASSERT_TYPE_ASSERT, "(eventParams[paramReadSize] == '\\0')", (const char *)&queryFormat, "eventParams[paramReadSize] == '\\0'") )
      __debugbreak();
  }
  return 1;
}

/*
==============
OnlineChallengesManager::RecordChallenges
==============
*/
void OnlineChallengesManager::RecordChallenges(OnlineChallengesManager *this)
{
  unsigned int v2; 
  __int64 v3; 
  unsigned int v4; 
  char *v5; 
  const char *v6; 
  const char *v7; 
  unsigned int UTC; 
  unsigned __int64 m_id; 
  unsigned __int64 v10; 
  int ControllerFromClient; 
  unsigned __int64 timestamp; 
  __int64 v13; 
  XUID outXuid; 
  unsigned int outParamLen; 
  unsigned int outParamCount; 
  char outEventName[64]; 
  char outParam[4096]; 

  XUID::XUID(&outXuid);
  while ( Com_Challenges_BeginReadEvent(&outXuid, outEventName, 0x40u, &outParamCount) )
  {
    if ( XUID::IsValid(&outXuid) )
    {
      v2 = outParamCount;
      LODWORD(v3) = 0;
      v4 = 0;
      if ( outParamCount )
      {
        do
        {
          if ( !Com_Challenges_ReadParam(&outParam[(unsigned int)v3], 4096 - v3, &outParamLen) )
          {
            Com_PrintError(16, "Error reading challenge parameter %d/%d from the server\n", v4, v2);
            goto LABEL_29;
          }
          v3 = outParamLen + (unsigned int)v3;
          if ( (unsigned int)v3 > 0x1000 )
          {
            LODWORD(v13) = 4096;
            LODWORD(timestamp) = v3;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_challenges.cpp", 2782, ASSERT_TYPE_ASSERT, "( paramReadSize ) <= ( eventParamsSize )", "paramReadSize not in [0, eventParamsSize]\n\t%u not in [0, %u]", timestamp, v13) )
              __debugbreak();
          }
          v5 = &outParam[v3];
          if ( outParam[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_challenges.cpp", 2783, ASSERT_TYPE_ASSERT, "(eventParams[paramReadSize] == '\\0')", (const char *)&queryFormat, "eventParams[paramReadSize] == '\\0'") )
            __debugbreak();
          if ( v4 < v2 - 1 )
          {
            if ( !outParamLen )
            {
              v3 = (unsigned int)(v3 + 1);
              if ( (unsigned int)v3 > 0x1000 )
                goto LABEL_27;
              *v5 = 32;
            }
            if ( (unsigned int)(v3 + 1) > 0x1000 )
            {
LABEL_27:
              Com_PrintError(16, "Error reading challenge parameter %d/%d from the server. Next param will not fit.\n", v4, v2);
LABEL_29:
              v7 = XUID::ToDevString(&outXuid);
              Com_PrintError(16, "Error reading challenge event parameters for player %s event %s from the server.\n", v7, outEventName);
              Com_Challenges_DiscardReadEvent();
              goto LABEL_31;
            }
            outParam[v3] = 44;
            LODWORD(v3) = v3 + 1;
          }
          ++v4;
        }
        while ( v4 < v2 );
        if ( (unsigned int)v3 > 0x1000 )
        {
          LODWORD(v13) = 4096;
          LODWORD(timestamp) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_challenges.cpp", 2812, ASSERT_TYPE_ASSERT, "( paramReadSize ) <= ( eventParamsSize )", "paramReadSize not in [0, eventParamsSize]\n\t%u not in [0, %u]", timestamp, v13) )
            __debugbreak();
        }
      }
      if ( outParam[(unsigned int)v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_challenges.cpp", 2813, ASSERT_TYPE_ASSERT, "(eventParams[paramReadSize] == '\\0')", (const char *)&queryFormat, "eventParams[paramReadSize] == '\\0'") )
        __debugbreak();
      if ( Com_Challenges_EndReadEvent() )
      {
        UTC = LiveStorage_GetUTC();
        m_id = outXuid.m_id;
        v10 = UTC;
        ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
        OnlineChallengesManager::RecordEventForPlayer(this, ControllerFromClient, (const XUID)m_id, outEventName, outParam, v10);
      }
      else
      {
        v6 = XUID::ToDevString(&outXuid);
        Com_PrintError(16, "Error reading challenge event for player %s event %s from the server. Event has invalid data\n", v6, outEventName);
        Com_Challenges_DiscardReadEvent();
      }
    }
    else
    {
      Com_Challenges_DiscardReadEvent();
    }
LABEL_31:
    ;
  }
  memset(outEventName, 0, sizeof(outEventName));
  memset(outParam, 0, sizeof(outParam));
}

/*
==============
OnlineChallengesManager::Reset
==============
*/
void OnlineChallengesManager::Reset(OnlineChallengesManager *this)
{
  int v1; 

  *(_DWORD *)this->m_aeFetchState = 16843009;
  v1 = 0;
  *(_QWORD *)&this->m_aeFetchState[4] = 16843009i64;
  *(_QWORD *)&this->m_aeFetchTypeState[4] = 0i64;
  *(_QWORD *)this->m_nextGetStateTime = 0i64;
  *(_QWORD *)&this->m_nextGetStateTime[2] = 0i64;
  *(_DWORD *)&this->m_aeInitialFetch[4] = 0;
  *(_QWORD *)&this->m_nextGetStateTime[4] = 0i64;
  *(_QWORD *)&this->m_nextGetStateTime[6] = 0i64;
  *(_QWORD *)&this->m_xpCacheAmount = 0i64;
  OnlineChallengesManager::ResetXPCache(this);
  do
    OnlineChallengesManager::ResetEventCache(this, (ChallengeEventCacheType)v1++);
  while ( v1 < 4 );
}

/*
==============
OnlineChallengesManager::ResetAllEventCaches
==============
*/
void OnlineChallengesManager::ResetAllEventCaches(OnlineChallengesManager *this)
{
  int v1; 
  bdPlatformID *p_platform; 
  unsigned int v3; 
  bdPlatformID *v4; 
  unsigned int v5; 
  _DWORD *v6; 
  __int64 v7; 
  bdRandom v8; 
  _BYTE in[8]; 

  v1 = 0;
  p_platform = &this->m_caches[0].events[0].platform;
  do
  {
    v3 = 0;
    v4 = p_platform;
    do
    {
      bdUserAccountID::reset((bdUserAccountID *)v4 - 2);
      *((_BYTE *)v4 - 152) = 0;
      *v4 = BD_PLATFORM_ID_INVALID;
      v5 = 0;
      v6 = v4 + 4;
      do
      {
        bdRandom::bdRandom(&v8);
        bdRandom::nextUBytes(&v8, in, 8);
        *v6 = *(_DWORD *)in;
        v6[1] = *(_DWORD *)&in[4];
        memset(in, 0, sizeof(in));
        *((_BYTE *)v6 + 8) = 1;
        *v6 += v6[1];
        *(v6 - 2) = (((_DWORD)v6 - 8) ^ *v6) * ((((_DWORD)v6 - 8) ^ *v6) + 2);
        *(v6 - 1) = (*v6 ^ ((_DWORD)v6 - 4)) * ((*v6 ^ ((_DWORD)v6 - 4)) + 2);
        bdRandom::~bdRandom(&v8);
        ++v5;
        v6 += 6;
      }
      while ( v5 < 4 );
      ++v3;
      v4 += 64;
    }
    while ( v3 < 0x40 );
    *((_DWORD *)p_platform - 42) = 0;
    if ( v1 < 0 )
    {
      LODWORD(v7) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_challenges.cpp", 201, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled cache type %i", v7) )
        __debugbreak();
      *((_DWORD *)p_platform - 40) = 4;
    }
    else if ( v1 <= 2 )
    {
      *((_DWORD *)p_platform - 40) = 1;
    }
    else
    {
      *((_DWORD *)p_platform - 40) = 3;
    }
    ++v1;
    p_platform += 4100;
  }
  while ( v1 < 4 );
}

/*
==============
OnlineChallengesManager::ResetController
==============
*/
void OnlineChallengesManager::ResetController(OnlineChallengesManager *this, int controllerIndex)
{
  this->m_aeFetchState[controllerIndex] = 1;
  this->m_aeFetchTypeState[controllerIndex] = 0;
  this->m_nextGetStateTime[controllerIndex] = 0;
  this->m_aeInitialFetch[controllerIndex] = 0;
}

/*
==============
OnlineChallengesManager::ResetEventCache
==============
*/
void OnlineChallengesManager::ResetEventCache(OnlineChallengesManager *this, ChallengeEventCacheType cacheType)
{
  __int64 v3; 
  ChallengeEventCache *v4; 
  unsigned int v5; 
  bdPlatformID *p_platform; 
  unsigned int v7; 
  bdPlatformID *v8; 
  bdRandom v9; 
  _BYTE in[8]; 

  v3 = cacheType;
  v4 = &this->m_caches[v3];
  v5 = 0;
  p_platform = &this->m_caches[v3].events[0].platform;
  do
  {
    bdUserAccountID::reset((bdUserAccountID *)p_platform - 2);
    *((_BYTE *)p_platform - 152) = 0;
    *p_platform = BD_PLATFORM_ID_INVALID;
    v7 = 0;
    v8 = p_platform + 4;
    do
    {
      bdRandom::bdRandom(&v9);
      bdRandom::nextUBytes(&v9, in, 8);
      *v8 = *(bdPlatformID *)in;
      v8[1] = *(bdPlatformID *)&in[4];
      memset(in, 0, sizeof(in));
      *((_BYTE *)v8 + 8) = 1;
      *v8 += *((_DWORD *)v8 + 1);
      *((_DWORD *)v8 - 2) = (((_DWORD)v8 - 8) ^ *v8) * ((((_DWORD)v8 - 8) ^ *v8) + 2);
      *((_DWORD *)v8 - 1) = (*v8 ^ ((_DWORD)v8 - 4)) * ((*v8 ^ ((_DWORD)v8 - 4)) + 2);
      bdRandom::~bdRandom(&v9);
      ++v7;
      v8 += 6;
    }
    while ( v7 < 4 );
    ++v5;
    p_platform += 64;
  }
  while ( v5 < 0x40 );
  v4->eventCount = 0;
  if ( cacheType >= CHALLENGE_EVENT_CACHE_DRIVING )
  {
    if ( cacheType <= CHALLENGE_EVENT_CACHE_ALIVE_NOT_DOWNED )
    {
      v4->operatorParamIndex = 1;
      return;
    }
    if ( cacheType == CHALLENGE_EVENT_CACHE_PICKUP )
    {
      v4->operatorParamIndex = 3;
      return;
    }
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_challenges.cpp", 201, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled cache type %i", cacheType) )
    __debugbreak();
  v4->operatorParamIndex = 4;
}

/*
==============
OnlineChallengesManager::ResetUser
==============
*/
void OnlineChallengesManager::ResetUser(OnlineChallengesManager *this, const int controllerIndex)
{
  DWServicesAccess *Instance; 
  unsigned int TitleID; 
  const char *v5; 
  DWServicesAccess *v6; 
  DWAchievementEngine *AchievementEngine; 
  TaskCreateRequest *v8; 
  bdRemoteTask *v9; 
  TaskManager *v10; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateRequest pTaskCreateRequest; 
  bdReference<bdRemoteTask> result; 
  TaskCreateResult pTaskCreateResult; 
  __int64 v15; 
  bdDeleteUserRequest request; 

  v15 = -2i64;
  *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
  memset(&pTaskCreateRequest.m_appData, 0, 48);
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  Instance = DWServicesAccess::GetInstance();
  TitleID = DWServicesAccess::GetTitleID(Instance);
  v5 = j_va("%u", TitleID);
  bdDeleteUserRequest::bdDeleteUserRequest(&request, v5);
  v6 = DWServicesAccess::GetInstance();
  AchievementEngine = DWServicesAccess::GetAchievementEngine(v6, controllerIndex);
  v8 = (TaskCreateRequest *)DWAchievementEngine::deleteUser(AchievementEngine, &result, &request);
  if ( v8 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    v9 = *(bdRemoteTask **)&v8->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v9;
    if ( v9 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v9->m_refCount, 1u);
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
  {
    pTaskCreateResult.m_localTaskId = 0;
    pTaskCreateResult.m_task = NULL;
    pTaskCreateRequest.m_controllerIndex = controllerIndex;
    pTaskCreateRequest.m_onCompletionCallback = OnlineChallengesManager::OnResetUserComplete;
    v10 = TaskManager::GetInstance();
    if ( TaskManager::CreateTask(v10, &pTaskCreateRequest, &pTaskCreateResult) )
      Com_Printf(14, "%s - CreateTask created task id %d controllerIndex %d!\n", "OnlineChallengesManager::ResetUser", pTaskCreateResult.m_localTaskId, controllerIndex);
    else
      Com_PrintError(14, "%s - CreateTask failed for controllerIndex %d!\n", "OnlineChallengesManager::ResetUser", (unsigned int)controllerIndex);
  }
  else
  {
    Com_PrintError(14, "%s failed for controllerIndex %d\n", "OnlineChallengesManager::ResetUser", (unsigned int)controllerIndex);
  }
  bdStructFixedSizeString<20>::~bdStructFixedSizeString<20>((bdStructFixedSizeString<20> *)(&request.__vftable + 2));
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&request.__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)&request.gap25[3]);
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
OnlineChallengesManager::ResetXPCache
==============
*/
void OnlineChallengesManager::ResetXPCache(OnlineChallengesManager *this)
{
  unsigned int v2; 
  unsigned int *p_secureInt64_aab; 
  __int64 v4; 
  unsigned int v5; 
  unsigned int *v6; 
  unsigned __int8 in[8]; 
  unsigned __int8 v8[8]; 
  unsigned __int8 v9[8]; 
  __int64 v10; 
  bdRandom v11; 
  bdRandom v12; 
  bdRandom v13; 

  v10 = -2i64;
  v2 = 0;
  p_secureInt64_aab = &this->m_xpCache[0].battlepass_xp_amount.secureInt64_aab;
  do
  {
    v4 = (int)v2;
    bdUserAccountID::reset(&this->m_xpCache[v4].xuid);
    bdRandom::bdRandom(&v11);
    bdRandom::nextUBytes(&v11, in, 8);
    *p_secureInt64_aab = *(_DWORD *)in;
    p_secureInt64_aab[1] = *(_DWORD *)&in[4];
    memset(in, 0, sizeof(in));
    *((_BYTE *)p_secureInt64_aab + 8) = 1;
    *p_secureInt64_aab += p_secureInt64_aab[1];
    *(p_secureInt64_aab - 2) = (((_DWORD)p_secureInt64_aab - 8) ^ *p_secureInt64_aab) * ((((_DWORD)p_secureInt64_aab - 8) ^ *p_secureInt64_aab) + 2);
    *(p_secureInt64_aab - 1) = (*p_secureInt64_aab ^ ((_DWORD)p_secureInt64_aab - 4)) * ((*p_secureInt64_aab ^ ((_DWORD)p_secureInt64_aab - 4)) + 2);
    bdRandom::~bdRandom(&v11);
    bdRandom::bdRandom(&v12);
    bdRandom::nextUBytes(&v12, v8, 8);
    *(p_secureInt64_aab - 6) = *(_DWORD *)v8;
    *(p_secureInt64_aab - 5) = *(_DWORD *)&v8[4];
    memset(v8, 0, sizeof(v8));
    *((_BYTE *)p_secureInt64_aab - 16) = 1;
    *(p_secureInt64_aab - 6) += *(p_secureInt64_aab - 5);
    *(p_secureInt64_aab - 8) = (((_DWORD)p_secureInt64_aab - 32) ^ *(p_secureInt64_aab - 6)) * ((((_DWORD)p_secureInt64_aab - 32) ^ *(p_secureInt64_aab - 6)) + 2);
    *(p_secureInt64_aab - 7) = (*(p_secureInt64_aab - 6) ^ ((_DWORD)p_secureInt64_aab - 28)) * ((*(p_secureInt64_aab - 6) ^ ((_DWORD)p_secureInt64_aab - 28)) + 2);
    bdRandom::~bdRandom(&v12);
    p_secureInt64_aab[260] = 0;
    memset_0(this->m_xpCache[v4].weapon, 0, sizeof(this->m_xpCache[v4].weapon));
    v5 = 0;
    v6 = p_secureInt64_aab + 8;
    do
    {
      bdRandom::bdRandom(&v13);
      bdRandom::nextUBytes(&v13, v9, 8);
      *v6 = *(_DWORD *)v9;
      v6[1] = *(_DWORD *)&v9[4];
      memset(v9, 0, sizeof(v9));
      *((_BYTE *)v6 + 8) = 1;
      *v6 += v6[1];
      *(v6 - 2) = (((_DWORD)v6 - 8) ^ *v6) * ((((_DWORD)v6 - 8) ^ *v6) + 2);
      *(v6 - 1) = (*v6 ^ ((_DWORD)v6 - 4)) * ((*v6 ^ ((_DWORD)v6 - 4)) + 2);
      bdRandom::~bdRandom(&v13);
      ++v5;
      v6 += 8;
    }
    while ( v5 < 0x20 );
    ++v2;
    p_secureInt64_aab += 310;
  }
  while ( v2 < 0x40 );
}

/*
==============
OnlineChallengesManager::StartMatch
==============
*/
void OnlineChallengesManager::StartMatch(OnlineChallengesManager *this)
{
  int i; 
  OnlineProgression *Instance; 
  Online_GunSmith *v3; 
  GunsmithWeapons *Weapons; 
  int v5; 
  GunsmithWeapons *v6; 
  unsigned __int64 *p_xp; 
  Online_GunSmith *v8; 

  for ( i = 0; i < 8; ++i )
  {
    if ( CL_Mgr_IsControllerMappedToClient(i, NULL) )
    {
      Instance = OnlineProgression::GetInstance();
      OnlineProgression::UpdatePlayerStats(Instance, i);
      v3 = Online_GunSmith::GetInstance();
      Weapons = Online_GunSmith::GetWeapons(v3, i);
      v5 = 0;
      v6 = Weapons;
      if ( Weapons->total_weapons > 0 )
      {
        p_xp = &Weapons->weapons[0].xp;
        do
        {
          if ( *p_xp )
          {
            v8 = Online_GunSmith::GetInstance();
            Online_GunSmith::UpdateWeaponStats(v8, i, v5);
          }
          ++v5;
          p_xp += 4;
        }
        while ( v5 < v6->total_weapons );
      }
    }
  }
}

