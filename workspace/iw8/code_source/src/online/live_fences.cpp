/*
==============
Live_SyncOnlineDataFence_Frame
==============
*/

void __fastcall Live_SyncOnlineDataFence_Frame(const int controllerIndex, const int gameMode)
{
  ?Live_SyncOnlineDataFence_Frame@@YAXHH@Z(controllerIndex, gameMode);
}

/*
==============
Live_OnlineServicesFence_Frame
==============
*/

void __fastcall Live_OnlineServicesFence_Frame(const int controllerIndex)
{
  ?Live_OnlineServicesFence_Frame@@YAXH@Z(controllerIndex);
}

/*
==============
Live_SyncOnlineDataFence_GetState
==============
*/

ODSFState __fastcall Live_SyncOnlineDataFence_GetState(const int controllerIndex, const int gameMode)
{
  return ?Live_SyncOnlineDataFence_GetState@@YA?AW4ODSFState@@HH@Z(controllerIndex, gameMode);
}

/*
==============
Live_ShouldFenceSignInShowMessage
==============
*/

bool __fastcall Live_ShouldFenceSignInShowMessage()
{
  return ?Live_ShouldFenceSignInShowMessage@@YA_NXZ();
}

/*
==============
Live_OnlineServicesFence_Activate
==============
*/

void __fastcall Live_OnlineServicesFence_Activate(const int controllerIndex)
{
  ?Live_OnlineServicesFence_Activate@@YAXH@Z(controllerIndex);
}

/*
==============
Live_SyncOnlineDataFence_PrintSyncFlags
==============
*/

void __fastcall Live_SyncOnlineDataFence_PrintSyncFlags(const unsigned int flags)
{
  ?Live_SyncOnlineDataFence_PrintSyncFlags@@YAXI@Z(flags);
}

/*
==============
Live_SyncOnlineDataFence_GetErrorCode
==============
*/

int __fastcall Live_SyncOnlineDataFence_GetErrorCode(const int controllerIndex, const int gameMode)
{
  return ?Live_SyncOnlineDataFence_GetErrorCode@@YAHHH@Z(controllerIndex, gameMode);
}

/*
==============
Live_OnlineServicesFence_Fail
==============
*/

void __fastcall Live_OnlineServicesFence_Fail(const int controllerIndex, const OnlinePlayFailureReason reason)
{
  ?Live_OnlineServicesFence_Fail@@YAXHW4OnlinePlayFailureReason@@@Z(controllerIndex, reason);
}

/*
==============
SyncFlagTimes::SyncFlagTimes
==============
*/

void __fastcall SyncFlagTimes::SyncFlagTimes(SyncFlagTimes *this)
{
  ??0SyncFlagTimes@@QEAA@XZ(this);
}

/*
==============
Live_OwnershipStatusFenceStart
==============
*/

void Live_OwnershipStatusFenceStart(void)
{
  ?Live_OwnershipStatusFenceStart@@YAXXZ();
}

/*
==============
Live_OnlineServicesFence_Request
==============
*/

void __fastcall Live_OnlineServicesFence_Request(const int controllerIndex)
{
  ?Live_OnlineServicesFence_Request@@YAXH@Z(controllerIndex);
}

/*
==============
Live_PatchFence_ResetState
==============
*/

void __fastcall Live_PatchFence_ResetState(const CCSPatchType *patchType)
{
  ?Live_PatchFence_ResetState@@YAXAEBW4CCSPatchType@@@Z(patchType);
}

/*
==============
Live_PatchFence_GetProgress
==============
*/

double __fastcall Live_PatchFence_GetProgress(const CCSPatchType *patchType)
{
  double result; 

  *(float *)&result = ?Live_PatchFence_GetProgress@@YAMAEBW4CCSPatchType@@@Z(patchType);
  return result;
}

/*
==============
Live_OnlineServicesFence_ResetState
==============
*/

void __fastcall Live_OnlineServicesFence_ResetState(const int controllerIndex)
{
  ?Live_OnlineServicesFence_ResetState@@YAXH@Z(controllerIndex);
}

/*
==============
Live_SyncOnlineDataFence_Request
==============
*/

void __fastcall Live_SyncOnlineDataFence_Request(const int controllerIndex, const int gameMode, const bool shouldCacheFenceStatus)
{
  ?Live_SyncOnlineDataFence_Request@@YAXHH_N@Z(controllerIndex, gameMode, shouldCacheFenceStatus);
}

/*
==============
Live_OnlineServicesFence_GetState
==============
*/

OCDSState __fastcall Live_OnlineServicesFence_GetState(const int controllerIndex)
{
  return ?Live_OnlineServicesFence_GetState@@YA?AW4OCDSState@@H@Z(controllerIndex);
}

/*
==============
Live_PatchFence_Frame
==============
*/

void Live_PatchFence_Frame(void)
{
  ?Live_PatchFence_Frame@@YAXXZ();
}

/*
==============
Live_SyncOnlineDataFence_ResetStateForAllGameModes
==============
*/

void __fastcall Live_SyncOnlineDataFence_ResetStateForAllGameModes(const int controllerIndex)
{
  ?Live_SyncOnlineDataFence_ResetStateForAllGameModes@@YAXH@Z(controllerIndex);
}

/*
==============
Live_SyncOnlineDataFence_ResetState
==============
*/

void __fastcall Live_SyncOnlineDataFence_ResetState(const int controllerIndex, const int gameMode)
{
  ?Live_SyncOnlineDataFence_ResetState@@YAXHH@Z(controllerIndex, gameMode);
}

/*
==============
Live_OnlineServicesFence_GetStartTime
==============
*/

int __fastcall Live_OnlineServicesFence_GetStartTime(const int controllerIndex)
{
  return ?Live_OnlineServicesFence_GetStartTime@@YAHH@Z(controllerIndex);
}

/*
==============
Live_PatchFence_GetErrorCode
==============
*/

int __fastcall Live_PatchFence_GetErrorCode(const CCSPatchType *patchType)
{
  return ?Live_PatchFence_GetErrorCode@@YAHAEBW4CCSPatchType@@@Z(patchType);
}

/*
==============
Live_PatchFence_GetState
==============
*/

PatchFenceState __fastcall Live_PatchFence_GetState(const CCSPatchType *patchType)
{
  return ?Live_PatchFence_GetState@@YA?AW4PatchFenceState@@AEBW4CCSPatchType@@@Z(patchType);
}

/*
==============
Live_SyncOnlineDataFence_GetRootFenceNotPassing
==============
*/

int __fastcall Live_SyncOnlineDataFence_GetRootFenceNotPassing(const int controllerIndex, const int gameMode)
{
  return ?Live_SyncOnlineDataFence_GetRootFenceNotPassing@@YAHHH@Z(controllerIndex, gameMode);
}

/*
==============
Live_HasOwnershipStatusFenceTimedOut
==============
*/

bool __fastcall Live_HasOwnershipStatusFenceTimedOut()
{
  return ?Live_HasOwnershipStatusFenceTimedOut@@YA_NXZ();
}

/*
==============
Live_OnlineServicesFence_GetErrorCode
==============
*/

OnlinePlayFailureReason __fastcall Live_OnlineServicesFence_GetErrorCode(const int controllerIndex)
{
  return ?Live_OnlineServicesFence_GetErrorCode@@YA?AW4OnlinePlayFailureReason@@H@Z(controllerIndex);
}

/*
==============
GetSyncFlagString
==============
*/

const char *__fastcall GetSyncFlagString(const unsigned int value)
{
  return ?GetSyncFlagString@@YAPEBDI@Z(value);
}

/*
==============
Live_SyncOnlineDataFence_ResetStateForAllControllers
==============
*/

void Live_SyncOnlineDataFence_ResetStateForAllControllers(void)
{
  ?Live_SyncOnlineDataFence_ResetStateForAllControllers@@YAXXZ();
}

/*
==============
Debug_TimeSyncFlags
==============
*/

void __fastcall Debug_TimeSyncFlags(const unsigned int syncFlags)
{
  ?Debug_TimeSyncFlags@@YAXI@Z(syncFlags);
}

/*
==============
DumpTimeSyncData
==============
*/

void __fastcall DumpTimeSyncData(const unsigned int startTime, const unsigned int endTime)
{
  ?DumpTimeSyncData@@YAXII@Z(startTime, endTime);
}

/*
==============
SyncFlagTimes::SyncFlagTimes
==============
*/
void SyncFlagTimes::SyncFlagTimes(SyncFlagTimes *this)
{
  *this = 0i64;
}

/*
==============
Debug_TimeSyncFlags
==============
*/
void Debug_TimeSyncFlags(const unsigned int syncFlags)
{
  int v1; 
  SyncFlagTimes *v2; 
  __int64 v4; 
  unsigned int startTime; 

  v1 = 1;
  v2 = s_syncFlagTimes;
  v4 = 32i64;
  do
  {
    startTime = v2->startTime;
    if ( (v1 & syncFlags) != 0 )
    {
      if ( !startTime )
        v2->startTime = Sys_Milliseconds();
    }
    else if ( startTime && !v2->endTime )
    {
      v2->endTime = Sys_Milliseconds();
    }
    v1 = __ROL4__(v1, 1);
    ++v2;
    --v4;
  }
  while ( v4 );
}

/*
==============
DumpTimeSyncData
==============
*/
void DumpTimeSyncData(const unsigned int startTime, const unsigned int endTime)
{
  unsigned int *p_endTime; 
  unsigned int v3; 
  unsigned int v4; 
  unsigned int v5; 
  __int64 v6; 
  unsigned int v7; 
  unsigned int v8; 
  const char *v9; 
  bool v10; 
  unsigned int v11; 
  bool v12; 
  DLogContext context; 
  char buffer[4096]; 

  if ( !bOnce )
    return;
  p_endTime = &s_syncFlagTimes[0].endTime;
  v3 = 0;
  v4 = -1;
  v5 = 1;
  v6 = 32i64;
  do
  {
    v7 = *(p_endTime - 1);
    if ( !v7 )
      goto LABEL_43;
    v8 = *p_endTime;
    if ( v5 <= 0x80 )
    {
      if ( v5 == 128 )
      {
        v9 = "ODSF_CHALLENGES";
      }
      else
      {
        switch ( v5 )
        {
          case 0u:
            v9 = "ODSF_NONE";
            break;
          case 1u:
            v9 = "ODSF_NOT_SIGNED_IN";
            break;
          case 2u:
            v9 = "ODSF_ONLINESERVICES";
            break;
          case 4u:
            v9 = "ODSF_PLAYLISTS";
            break;
          case 0x10u:
            v9 = "ODSF_TIME";
            break;
          case 0x20u:
            v9 = "ODSF_MP_STATS";
            break;
          case 0x40u:
            v9 = "ODSF_MOTD";
            break;
          default:
            goto LABEL_27;
        }
      }
      goto LABEL_31;
    }
    if ( v5 <= 0x1000 )
    {
      switch ( v5 )
      {
        case 0x1000u:
          v9 = "ODSF_COD_CONTENT_ENUMERATION";
          goto LABEL_31;
        case 0x100u:
          v9 = "ODSF_PUBLISHER_VARS";
          goto LABEL_31;
        case 0x200u:
          v9 = "ODSF_REGIONINFO";
          goto LABEL_31;
        case 0x400u:
          v9 = "ODSF_MATCH_RULES";
          goto LABEL_31;
      }
LABEL_27:
      v9 = "None";
      goto LABEL_31;
    }
    switch ( v5 )
    {
      case 0x10000u:
        v9 = "ODSF_PS_MANIFEST";
        break;
      case 0x20000u:
        v9 = "ODSF_INVENTORY";
        break;
      case 0x40000u:
        v9 = "ODSF_PROFILE";
        break;
      default:
        goto LABEL_27;
    }
LABEL_31:
    if ( DLog_IsActive() && DLog_CreateContext(&context, 0i64, buffer, 4096) && DLog_IsActive() )
    {
      v10 = DLog_BeginEvent(&context, "online_fence_timing");
      context.autoEndEvent = 1;
      if ( v10 && DLog_String(&context, "key_value", v9, 0) && DLog_UInt32(&context, "starttime_ms", v7) && DLog_UInt32(&context, "endtime_ms", v8) )
        DLog_RecordContext(&context);
    }
    v11 = *(p_endTime - 1);
    if ( v4 <= v11 )
      v11 = v4;
    v4 = v11;
    if ( v3 < *p_endTime )
      v3 = *p_endTime;
LABEL_43:
    v5 = __ROL4__(v5, 1);
    p_endTime += 2;
    --v6;
  }
  while ( v6 );
  if ( DLog_IsActive() && DLog_CreateContext(&context, 0i64, buffer, 4096) && DLog_IsActive() )
  {
    v12 = DLog_BeginEvent(&context, "online_fence_timing");
    context.autoEndEvent = 1;
    if ( v12 && DLog_String(&context, "key_value", "overall", 0) && DLog_UInt32(&context, "starttime_ms", startTime) && DLog_UInt32(&context, "endtime_ms", endTime) )
      DLog_RecordContext(&context);
  }
  bOnce = 0;
}

/*
==============
GetSyncFlagString
==============
*/
const char *GetSyncFlagString(const unsigned int value)
{
  const char *result; 

  if ( value > 0x80 )
  {
    if ( value > 0x1000 )
    {
      switch ( value )
      {
        case 0x10000u:
          return "ODSF_PS_MANIFEST";
        case 0x20000u:
          return "ODSF_INVENTORY";
        case 0x40000u:
          return "ODSF_PROFILE";
      }
    }
    else
    {
      switch ( value )
      {
        case 0x1000u:
          return "ODSF_COD_CONTENT_ENUMERATION";
        case 0x100u:
          return "ODSF_PUBLISHER_VARS";
        case 0x200u:
          return "ODSF_REGIONINFO";
        case 0x400u:
          return "ODSF_MATCH_RULES";
      }
    }
    return "None";
  }
  if ( value == 128 )
    return "ODSF_CHALLENGES";
  switch ( value )
  {
    case 0u:
      result = "ODSF_NONE";
      break;
    case 1u:
      result = "ODSF_NOT_SIGNED_IN";
      break;
    case 2u:
      result = "ODSF_ONLINESERVICES";
      break;
    case 4u:
      result = "ODSF_PLAYLISTS";
      break;
    case 0x10u:
      result = "ODSF_TIME";
      break;
    case 0x20u:
      result = "ODSF_MP_STATS";
      break;
    case 0x40u:
      result = "ODSF_MOTD";
      break;
    default:
      return "None";
  }
  return result;
}

/*
==============
Live_GetRequiredFlags
==============
*/
__int64 Live_GetRequiredFlags(const int gameMode)
{
  BOOL HasAcceptedInvite; 
  unsigned int v4; 
  unsigned int v5; 

  HasAcceptedInvite = Live_Invitation_HasAcceptedInvite();
  if ( !Party_PartiesAcrossGamemodesFeatureEnabled() && HasAcceptedInvite )
    return 465716i64;
  v4 = 465712;
  if ( (unsigned int)gameMode >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_fences.cpp", 422, ASSERT_TYPE_ASSERT, "(unsigned)( gameMode ) < (unsigned)( static_cast<int>( GameModeType::COUNT ) )", "gameMode doesn't index static_cast<int>( GameModeType::COUNT )\n\t%i not in [0, %i)", gameMode, 4) )
    __debugbreak();
  if ( gameMode && gameMode != 1 )
  {
    if ( BG_GameInterface_GameModeIsMP((GameModeType)(unsigned __int8)gameMode) )
      return 474996i64;
    v5 = 465712;
    if ( gameMode == 3 )
      return 474996;
    return v5;
  }
  return v4;
}

/*
==============
Live_HasOwnershipStatusFenceTimedOut
==============
*/
bool Live_HasOwnershipStatusFenceTimedOut()
{
  const dvar_t *v0; 
  int integer; 

  v0 = DVARINT_online_ownership_status_fence_timeout_ms;
  integer = 30000;
  if ( DVARINT_online_ownership_status_fence_timeout_ms )
  {
    Dvar_CheckFrontendServerThread(DVARINT_online_ownership_status_fence_timeout_ms);
    integer = v0->current.integer;
  }
  return Sys_Milliseconds() - s_ownershipStatusFenceStartTime > integer;
}

/*
==============
Live_OnlineServicesFence_Activate
==============
*/
void Live_OnlineServicesFence_Activate(const int controllerIndex)
{
  __int64 v2; 

  v2 = controllerIndex;
  s_OnlineServicesFenceData[v2].state[0] = 2;
  s_OnlineServicesFenceData[v2].startTime = Sys_Milliseconds();
  NET_OnlineTransition();
  DW_OnlineTransition(controllerIndex);
  Plat_OnlineServicesFence_Activate(controllerIndex);
}

/*
==============
Live_OnlineServicesFence_Fail
==============
*/
void Live_OnlineServicesFence_Fail(const int controllerIndex, const OnlinePlayFailureReason reason)
{
  __int64 v3; 

  v3 = controllerIndex;
  s_OnlineServicesFenceData[v3].state[0] = 4;
  s_OnlineServicesFenceData[v3].errorCode = reason;
  if ( reason != OPFR_PLATFORM_PSPLUS_REQUIRED )
  {
    DW_DisableLogon(controllerIndex);
    Live_DemonwareDisconnectCleanup(controllerIndex);
  }
}

/*
==============
Live_OnlineServicesFence_Frame
==============
*/
void Live_OnlineServicesFence_Frame(const int controllerIndex)
{
  __int64 v1; 
  Online_AccountRegistration *v2; 
  Online_AccountRegistration *v3; 
  DWServicesAccess *v4; 
  DWLogin *Login; 
  bdLoginFailure *Failure; 
  bdLoginResult *Result; 
  bdLobbyErrorCode TaskErrorCode; 
  bool HasNetConnection; 
  int v10; 
  bool IsFenceFailed; 
  int ErrorCode; 
  OnlinePlayFailureReason v13; 
  OnlinePlayFailureReason v14; 
  BanType PlayerBannedType; 
  PublisherVariableManager *v16; 
  OnlinePlayFailureReason v17; 
  __int64 v18; 
  PublisherVariableManager *Instance; 
  OnlinePlayFailureReason failureReason; 

  v1 = controllerIndex;
  if ( Com_FrontEnd_IsInFrontEnd() )
  {
    switch ( s_OnlineServicesFenceData[v1].state[0] )
    {
      case 0:
      case 4:
        return;
      case 1:
        Live_OnlineServicesFence_Activate(v1);
        goto $LN21_25;
      case 2:
        goto $LN26_23;
      case 3:
        if ( !Live_CanUserPlayOnline(v1, &failureReason) && (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
        {
          v18 = (unsigned int)failureReason;
          if ( failureReason == OPFR_CONNECTING )
          {
            s_OnlineServicesFenceData[v1].state[0] = 1;
          }
          else
          {
            s_OnlineServicesFenceData[v1].state[0] = 4;
            s_OnlineServicesFenceData[v1].errorCode = v18;
            Com_Printf(25, "Live_OnlineServicesFence_Frame setting error code %d from state OCDSState::SUCCESS\n", v18);
          }
        }
        if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_online_anticheat_should_main_menu_fence_fail_if_mp_banned, "online_anticheat_should_main_menu_fence_fail_if_mp_banned") && LiveStorage_IsTimeSynced() && Dvar_GetBool_Internal_DebugName(DVARBOOL_onlinegame, "onlinegame") )
        {
          Instance = PublisherVariableManager::GetInstance();
          if ( PublisherVariableManager::HasRetrievedVariables(Instance) && LiveAntiCheat_FeatureIsBanned(v1, 1) )
          {
            s_OnlineServicesFenceData[v1].state[0] = 4;
            s_OnlineServicesFenceData[v1].errorCode = OPFR_ACCOUNT_IS_MP_OR_CP_FEATURE_BANNED;
            DW_DisableLogon(v1);
            Live_DemonwareDisconnectCleanup(v1);
          }
        }
        return;
      case 5:
        goto $LN22_22;
      case 6:
$LN21_25:
        v2 = Online_AccountRegistration::GetInstance();
        if ( !Online_AccountRegistration::IsRegistering(v2) )
          Live_OnlineServicesFence_Activate(v1);
$LN22_22:
        if ( !Live_IsInQueue(v1) )
          Live_OnlineServicesFence_Activate(v1);
        goto $LN24_25;
      case 7:
$LN24_25:
        if ( Sys_Milliseconds() >= s_nextQueuedRetry )
        {
          DW_EnableLogon(v1);
          Live_OnlineServicesFence_Activate(v1);
        }
$LN26_23:
        v3 = Online_AccountRegistration::GetInstance();
        if ( Online_AccountRegistration::IsRegistering(v3) )
        {
          s_OnlineServicesFenceData[v1].state[0] = 6;
          return;
        }
        if ( Live_IsInQueue(v1) )
        {
          s_OnlineServicesFenceData[v1].state[0] = 5;
        }
        else
        {
          v4 = DWServicesAccess::GetInstance();
          Login = DWServicesAccess::GetLogin(v4, v1);
          if ( DWLogin::failed(Login) )
          {
            Failure = (bdLoginFailure *)DWLogin::getFailure(Login);
            if ( bdLoginFailure::getLoginFailureCode(Failure) == LOGINQUEUE_ERROR )
            {
              Result = (bdLoginResult *)DWLogin::getResult(Login);
              TaskErrorCode = bdLoginResult::getTaskErrorCode(Result);
              if ( TaskErrorCode == BD_LOGIN_QUEUE_CLOSED_QUEUE )
              {
                s_OnlineServicesFenceData[v1].state[0] = 4;
                s_OnlineServicesFenceData[v1].errorCode = OPFR_LOGIN_QUEUE_CLOSED;
                DW_DisableLogon(v1);
                Live_DemonwareDisconnectCleanup(v1);
              }
              else if ( (unsigned int)(TaskErrorCode - 8912) <= 0x257 )
              {
                s_nextQueuedRetry = Sys_Milliseconds() - (int)(float)((float)(TaskErrorCode - 8912) * -1000.0);
                DW_DisableLogon(v1);
                s_OnlineServicesFenceData[v1].state[0] = 7;
              }
            }
          }
        }
        HasNetConnection = Live_HasNetConnection();
        v10 = v1;
        if ( !HasNetConnection )
        {
          s_OnlineServicesFenceData[v1].state[0] = 4;
          s_OnlineServicesFenceData[v1].errorCode = OPFR_NETWORK_CONNECTION;
LABEL_31:
          DW_DisableLogon(v10);
          Live_DemonwareDisconnectCleanup(v1);
          return;
        }
        IsFenceFailed = FenceManager_IsFenceFailed(v1, FENCE_SIGNED_IN_TO_LIVE);
        v10 = v1;
        if ( IsFenceFailed )
        {
          s_OnlineServicesFenceData[v1].state[0] = 4;
          s_OnlineServicesFenceData[v1].errorCode = OPFR_XBOXLIVE_SIGNEDOUTOFLIVE;
          goto LABEL_31;
        }
        if ( FenceManager_IsFenceFailed(v1, FENCE_ONLINE_PERMISSIONS) && (ErrorCode = FenceManager_GetErrorCode(v1, FENCE_ONLINE_PERMISSIONS), (v13 = ErrorCode) != OPFR_NONE) )
        {
          if ( ErrorCode == 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_fences.cpp", 213, ASSERT_TYPE_ASSERT, "(failureReason != OPFR_CONNECTING)", (const char *)&queryFormat, "failureReason != OPFR_CONNECTING") )
            __debugbreak();
          s_OnlineServicesFenceData[v1].state[0] = 4;
          s_OnlineServicesFenceData[v1].errorCode = v13;
          if ( v13 != OPFR_PLATFORM_PSPLUS_REQUIRED )
            goto LABEL_30;
        }
        else if ( FenceManager_IsFenceComplete(v1, FENCE_ONLINE) )
        {
          if ( FenceManager_IsFenceFailed(v1, FENCE_ONLINE) )
          {
            v14 = OPFR_ONLINE_SERVICES_ERROR;
            PlayerBannedType = dwGetPlayerBannedType(v1);
            if ( PlayerBannedType == BanType_TemporaryRepBan )
            {
              v14 = OPFR_ACCOUNT_IS_TEMP_BANNED;
            }
            else if ( PlayerBannedType == BanType_MaintenanceRepBan )
            {
              v14 = OPFR_ACCOUNT_IS_IN_MAINTENANCE;
            }
            else if ( (unsigned int)(PlayerBannedType - 3) <= 1 )
            {
              v14 = OPFR_ACCOUNT_IS_BANNED;
            }
            s_OnlineServicesFenceData[v1].state[0] = 4;
            s_OnlineServicesFenceData[v1].errorCode = v14;
            goto LABEL_30;
          }
          if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_online_anticheat_should_main_menu_fence_fail_if_mp_banned, "online_anticheat_should_main_menu_fence_fail_if_mp_banned") && LiveStorage_IsTimeSynced() && Dvar_GetBool_Internal_DebugName(DVARBOOL_onlinegame, "onlinegame") )
          {
            v16 = PublisherVariableManager::GetInstance();
            if ( PublisherVariableManager::HasRetrievedVariables(v16) && LiveAntiCheat_FeatureIsBanned(v1, 1) )
            {
              s_OnlineServicesFenceData[v1].state[0] = 4;
              s_OnlineServicesFenceData[v1].errorCode = OPFR_ACCOUNT_IS_MP_OR_CP_FEATURE_BANNED;
LABEL_30:
              v10 = v1;
              goto LABEL_31;
            }
          }
          if ( Live_CanUserPlayOnline(v1, &failureReason) || (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF )
          {
            s_OnlineServicesFenceData[v1].state[0] = 3;
          }
          else
          {
            v17 = failureReason;
            if ( failureReason == OPFR_CONNECTING )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_fences.cpp", 269, ASSERT_TYPE_ASSERT, "(failureReason != OPFR_CONNECTING)", (const char *)&queryFormat, "failureReason != OPFR_CONNECTING") )
                __debugbreak();
              v17 = failureReason;
            }
            s_OnlineServicesFenceData[v1].state[0] = 4;
            s_OnlineServicesFenceData[v1].errorCode = v17;
            if ( v17 != OPFR_PLATFORM_PSPLUS_REQUIRED )
            {
              DW_DisableLogon(v1);
              Live_DemonwareDisconnectCleanup(v1);
            }
            if ( !Live_IsUserSignedInToLive(v1) )
              Live_ForcePlatformSignInStateRefresh();
          }
        }
        break;
      default:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_fences.cpp", 325, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unexpected OCDS state") )
          __debugbreak();
        return;
    }
  }
}

/*
==============
Live_OnlineServicesFence_GetErrorCode
==============
*/
__int64 Live_OnlineServicesFence_GetErrorCode(const int controllerIndex)
{
  return (unsigned int)s_OnlineServicesFenceData[controllerIndex].errorCode;
}

/*
==============
Live_OnlineServicesFence_GetStartTime
==============
*/
__int64 Live_OnlineServicesFence_GetStartTime(const int controllerIndex)
{
  return (unsigned int)s_OnlineServicesFenceData[controllerIndex].startTime;
}

/*
==============
Live_OnlineServicesFence_GetState
==============
*/
__int64 Live_OnlineServicesFence_GetState(const int controllerIndex)
{
  return (unsigned __int8)s_OnlineServicesFenceData[controllerIndex].state[0];
}

/*
==============
Live_OnlineServicesFence_Request
==============
*/
void Live_OnlineServicesFence_Request(const int controllerIndex)
{
  if ( s_OnlineServicesFenceData[controllerIndex].state[0] != 2 )
  {
    s_OnlineServicesFenceData[controllerIndex].state[0] = 1;
    Live_OnlineServicesFence_Frame(controllerIndex);
  }
}

/*
==============
Live_OnlineServicesFence_ResetState
==============
*/
void Live_OnlineServicesFence_ResetState(const int controllerIndex)
{
  s_OnlineServicesFenceData[controllerIndex].state[0] = 0;
}

/*
==============
Live_OwnershipStatusFenceStart
==============
*/
void Live_OwnershipStatusFenceStart(void)
{
  s_ownershipStatusFenceStartTime = Sys_Milliseconds();
}

/*
==============
Live_PatchFence_Frame
==============
*/
void Live_PatchFence_Frame(void)
{
  PatchFenceData *v0; 
  CCSPatchType i; 
  Online_PatchStreamer *Instance; 
  PSPatchingStatus PatchingStatus; 
  Online_PatchStreamer *v4; 

  if ( Com_FrontEnd_IsInFrontEnd() )
  {
    v0 = s_patchFenceData;
    for ( i = MOVEMENT; (unsigned int)i < COUNT; ++i )
    {
      if ( v0->state[0] <= 2u )
      {
        Instance = Online_PatchStreamer::GetInstance();
        PatchingStatus = Online_PatchStreamer::GetPatchingStatus(Instance, i);
        if ( PatchingStatus )
        {
          switch ( PatchingStatus )
          {
            case PS_PATCHING_COMPLETE:
              if ( v0->state[0] != 1 )
                v0->state[0] = 1;
              break;
            case PS_PATCHING_COMPLETE_RESTART:
              if ( v0->state[0] != 2 )
                v0->state[0] = 2;
              break;
            case PS_PATCHING_FAILED:
              if ( v0->state[0] != 3 )
                v0->state[0] = 3;
              v4 = Online_PatchStreamer::GetInstance();
              v0->errorCode = Online_PatchStreamer::GetPatchingErrorCode(v4, MOVEMENT);
              break;
            default:
              if ( PatchingStatus == PS_PATCHING_UPDATE_NEEDED && v0->state[0] != 4 )
                v0->state[0] = 4;
              break;
          }
        }
        else if ( v0->state[0] )
        {
          v0->state[0] = 0;
        }
      }
      ++v0;
    }
  }
}

/*
==============
Live_PatchFence_GetErrorCode
==============
*/
__int64 Live_PatchFence_GetErrorCode(const CCSPatchType *patchType)
{
  return (unsigned int)s_patchFenceData[*(unsigned int *)patchType].errorCode;
}

/*
==============
Live_PatchFence_GetProgress
==============
*/
double Live_PatchFence_GetProgress(const CCSPatchType *patchType)
{
  Online_PatchStreamer *Instance; 

  Instance = Online_PatchStreamer::GetInstance();
  return Online_PatchStreamer::GetPatchingProgress(Instance, *patchType);
}

/*
==============
Live_PatchFence_GetState
==============
*/
__int64 Live_PatchFence_GetState(const CCSPatchType *patchType)
{
  return (unsigned __int8)s_patchFenceData[*(unsigned int *)patchType].state[0];
}

/*
==============
Live_PatchFence_ResetState
==============
*/
void Live_PatchFence_ResetState(const CCSPatchType *patchType)
{
  Online_PatchStreamer *Instance; 
  __int64 v3; 
  PatchFenceData *v4; 
  CCSPatchType i; 
  Online_PatchStreamer *v6; 
  PSPatchingStatus PatchingStatus; 
  Online_PatchStreamer *v8; 

  Instance = Online_PatchStreamer::GetInstance();
  Online_PatchStreamer::OnFenceReset(Instance);
  v3 = *(int *)patchType;
  v4 = s_patchFenceData;
  if ( s_patchFenceData[v3].state[0] )
    s_patchFenceData[v3].state[0] = 0;
  if ( Com_FrontEnd_IsInFrontEnd() )
  {
    for ( i = MOVEMENT; (unsigned int)i < COUNT; ++i )
    {
      if ( v4->state[0] <= 2u )
      {
        v6 = Online_PatchStreamer::GetInstance();
        PatchingStatus = Online_PatchStreamer::GetPatchingStatus(v6, i);
        if ( PatchingStatus )
        {
          switch ( PatchingStatus )
          {
            case PS_PATCHING_COMPLETE:
              if ( v4->state[0] != 1 )
                v4->state[0] = 1;
              break;
            case PS_PATCHING_COMPLETE_RESTART:
              if ( v4->state[0] != 2 )
                v4->state[0] = 2;
              break;
            case PS_PATCHING_FAILED:
              if ( v4->state[0] != 3 )
                v4->state[0] = 3;
              v8 = Online_PatchStreamer::GetInstance();
              v4->errorCode = Online_PatchStreamer::GetPatchingErrorCode(v8, MOVEMENT);
              break;
            default:
              if ( PatchingStatus == PS_PATCHING_UPDATE_NEEDED && v4->state[0] != 4 )
                v4->state[0] = 4;
              break;
          }
        }
        else if ( v4->state[0] )
        {
          v4->state[0] = 0;
        }
      }
      ++v4;
    }
  }
}

/*
==============
Live_ShouldFenceSignInShowMessage
==============
*/
bool Live_ShouldFenceSignInShowMessage()
{
  const dvar_t *v0; 

  v0 = DVARBOOL_online_check_online_data_fence_before_showing_signin_error;
  if ( !DVARBOOL_online_check_online_data_fence_before_showing_signin_error && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_check_online_data_fence_before_showing_signin_error") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return !v0->current.enabled || !onlineDataFenceFailed;
}

/*
==============
Live_SyncOnlineDataError
==============
*/
void Live_SyncOnlineDataError(const int controllerIndex, PartyDisconnectReason a2)
{
  PartyData *PartyData; 

  LOBYTE(a2) = 33;
  PartyAtomic_AbortJoinAttempt(&g_partyJoinInfo, a2);
  PartyData = Lobby_GetPartyData();
  Party_StopParty(PartyData);
  Party_StopParty(&g_partyData);
  Com_Printf(25, "Live_SyncOnlineDataError: Calling Matchmaker::Get().Uninit() due to fence error!\n");
  OnlineMatchmakerOmniscient::Uninit(&OnlineMatchmakerOmniscient::ms_instance);
}

/*
==============
Live_SyncOnlineDataFence_Frame
==============
*/
void Live_SyncOnlineDataFence_Frame(const int controllerIndex, const int gameMode)
{
  __int64 v2; 
  __int64 v3; 
  ODSFState v4; 
  ODSFData *v5; 
  unsigned int v6; 
  int RequiredFlags; 
  ODSFState v8; 
  unsigned int v9; 
  PartyDisconnectReason v10; 
  int v11; 
  int v12; 
  SyncFlagTimes *v13; 
  unsigned int v14; 
  __int64 v15; 
  unsigned int startTime; 
  int v17; 
  const dvar_t *v18; 
  int v19; 
  ODSFState v20; 
  ODSFState v21; 
  PartyDisconnectReason v22; 
  char *fmt; 
  __int64 v24; 
  __int64 v25; 

  v2 = gameMode;
  v3 = controllerIndex;
  if ( !Com_FrontEnd_IsInFrontEnd() )
    return;
  if ( (unsigned int)v3 >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_fences.cpp", 665, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v3, 8) )
    __debugbreak();
  if ( (unsigned int)v2 >= 4 )
  {
    LODWORD(v25) = 4;
    LODWORD(v24) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_fences.cpp", 666, ASSERT_TYPE_ASSERT, "(unsigned)( gameMode ) < (unsigned)( static_cast<int>( GameModeType::COUNT ) )", "gameMode doesn't index static_cast<int>( GameModeType::COUNT )\n\t%i not in [0, %i)", v24, v25) )
      __debugbreak();
  }
  v5 = &s_ODSFData[v3][v2];
  if ( v5->state[0] == 1 )
  {
    LOBYTE(v4) = 2;
    Live_SyncOnlineDataFence_SetState(v3, v2, v4);
    v5->startTime = Sys_Milliseconds();
  }
  else if ( v5->state[0] != 2 )
  {
    if ( v5->state[0] == 3 )
    {
      v6 = Sys_Milliseconds();
      DumpTimeSyncData(v5->startTime, v6);
      RequiredFlags = Live_GetRequiredFlags(v2);
      v9 = Live_SyncOnlineDataFlags(v3);
      if ( (RequiredFlags & v9) != 0 )
      {
        LOBYTE(v8) = 4;
        Live_SyncOnlineDataFence_SetState(v3, v2, v8);
        v5->errorCode = v9;
        Com_Printf(14, "\tMissing required flags:\n");
        Live_SyncOnlineDataFence_PrintSyncFlags(RequiredFlags & v9);
        onlineDataFenceFailed = 1;
        Live_SyncOnlineDataFence_UpdateFenceStatus(v3, v2);
        Live_SyncOnlineDataError(v3, v10);
      }
    }
    return;
  }
  v11 = Live_GetRequiredFlags(v2);
  v12 = 1;
  v13 = s_syncFlagTimes;
  v14 = Live_SyncOnlineDataFlags(v3);
  v15 = 32i64;
  do
  {
    startTime = v13->startTime;
    if ( (v12 & v14) != 0 )
    {
      if ( !startTime )
        v13->startTime = Sys_Milliseconds();
    }
    else if ( startTime && !v13->endTime )
    {
      v13->endTime = Sys_Milliseconds();
    }
    v12 = __ROL4__(v12, 1);
    ++v13;
    --v15;
  }
  while ( v15 );
  v17 = Sys_Milliseconds();
  v18 = DVARINT_online_data_fence_timeout_ms;
  v19 = v17 - v5->startTime;
  if ( !DVARINT_online_data_fence_timeout_ms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_data_fence_timeout_ms") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  if ( v19 > v18->current.integer && (v11 & v14) != 0 )
  {
    LODWORD(v24) = v14;
    LODWORD(fmt) = v11;
    Com_PrintWarning(14, "Live - Live_SyncOnlineDataFenceFrame - Timed out after %i ms. Started at time %i. Required flags %i, sync flags %i.\n", (unsigned int)v19, (unsigned int)v5->startTime, fmt, v24);
    Com_Printf(14, "\tMissing required flags:\n");
    Live_SyncOnlineDataFence_PrintSyncFlags(v11 & v14);
    LOBYTE(v21) = 4;
    Live_SyncOnlineDataFence_SetState(v3, v2, v21);
    v5->errorCode = v14;
    Live_SyncOnlineDataFence_UpdateFenceStatus(v3, v2);
    v5->shouldCacheFenceStatus = 0;
    Live_SyncOnlineDataError(v3, v22);
  }
  if ( (v14 & v11) == 0 )
  {
    LOBYTE(v20) = 3;
    Live_SyncOnlineDataFence_SetState(v3, v2, v20);
  }
}

/*
==============
Live_SyncOnlineDataFence_GetErrorCode
==============
*/
__int64 Live_SyncOnlineDataFence_GetErrorCode(const int controllerIndex, const int gameMode)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v5; 
  __int64 v7; 
  int v8; 

  v2 = controllerIndex;
  v3 = gameMode;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v8 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_fences.cpp", 795, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v8) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= 4 )
  {
    LODWORD(v7) = 4;
    LODWORD(v5) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_fences.cpp", 796, ASSERT_TYPE_ASSERT, "(unsigned)( gameMode ) < (unsigned)( static_cast<int>( GameModeType::COUNT ) )", "gameMode doesn't index static_cast<int>( GameModeType::COUNT )\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  return (unsigned int)s_ODSFData[v2][v3].errorCode;
}

/*
==============
Live_SyncOnlineDataFence_GetRootFenceNotPassing
==============
*/
__int64 Live_SyncOnlineDataFence_GetRootFenceNotPassing(const int controllerIndex, const int gameMode)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v4; 
  __int64 result; 
  __int64 v6; 
  __int64 v8; 
  int v9; 

  v2 = controllerIndex;
  v3 = gameMode;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v9 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_fences.cpp", 804, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v9) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= 4 )
  {
    LODWORD(v8) = 4;
    LODWORD(v6) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_fences.cpp", 805, ASSERT_TYPE_ASSERT, "(unsigned)( gameMode ) < (unsigned)( static_cast<int>(GameModeType::COUNT) )", "gameMode doesn't index static_cast<int>(GameModeType::COUNT)\n\t%i not in [0, %i)", v6, v8) )
      __debugbreak();
  }
  v4 = v3 + 4 * v2;
  result = (unsigned int)s_ODSFData[0][v4].indexOfRootFenceNotPassing;
  if ( (_DWORD)result == -1 )
  {
    Live_SyncOnlineDataFence_UpdateFenceStatus(v2, v3);
    result = (unsigned int)s_ODSFData[0][v4].indexOfRootFenceNotPassing;
  }
  s_ODSFData[0][v4].shouldCacheFenceStatus = 0;
  return result;
}

/*
==============
Live_SyncOnlineDataFence_GetState
==============
*/
__int64 Live_SyncOnlineDataFence_GetState(const int controllerIndex, const int gameMode)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v5; 
  __int64 v7; 
  int v8; 

  v2 = controllerIndex;
  v3 = gameMode;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v8 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_fences.cpp", 777, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v8) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= 4 )
  {
    LODWORD(v7) = 4;
    LODWORD(v5) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_fences.cpp", 778, ASSERT_TYPE_ASSERT, "(unsigned)( gameMode ) < (unsigned)( static_cast<int>( GameModeType::COUNT ) )", "gameMode doesn't index static_cast<int>( GameModeType::COUNT )\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  return (unsigned __int8)s_ODSFData[v2][v3].state[0];
}

/*
==============
Live_SyncOnlineDataFence_PrintSyncFlags
==============
*/
void Live_SyncOnlineDataFence_PrintSyncFlags(const unsigned int flags)
{
  unsigned int v2; 
  const char **v3; 
  int v4; 
  __int64 v5[20]; 

  v5[0] = (__int64)"ODSF_NOT_SIGNED_IN";
  v2 = 0;
  v5[1] = (__int64)"ODSF_ONLINESERVICES";
  v3 = (const char **)v5;
  v4 = 1;
  v5[2] = (__int64)"ODSF_PLAYLISTS";
  v5[3] = (__int64)"ODSF_FFOTD";
  v5[4] = (__int64)"ODSF_TIME";
  v5[5] = (__int64)"ODSF_MP_STATS";
  v5[6] = (__int64)"ODSF_MOTD";
  v5[7] = (__int64)"ODSF_CHALLENGES";
  v5[8] = (__int64)"ODSF_PUBLISHER_VARS";
  v5[9] = (__int64)"ODSF_REGIONINFO";
  v5[10] = (__int64)"ODSF_MATCH_RULES";
  v5[11] = (__int64)"ODSF_DCQOS";
  v5[12] = (__int64)"ODSF_COD_CONTENT_ENUMERATION";
  v5[14] = (__int64)"ODSF_IOTD";
  v5[16] = (__int64)"ODSF_PS_MANIFEST";
  v5[17] = (__int64)"ODSF_INVENTORY";
  v5[18] = (__int64)"ODSF_PROFILE";
  v5[19] = (__int64)"ODSF_DAILY_REWARDS";
  v5[13] = (__int64)"ODSF_UNUSED";
  v5[15] = (__int64)"ODSF_UNUSED";
  do
  {
    if ( (v4 & flags) != 0 )
      Com_Printf(14, "\t\t%s\n", *v3);
    ++v2;
    v4 = __ROL4__(v4, 1);
    ++v3;
  }
  while ( v2 < 0x14 );
}

/*
==============
Live_SyncOnlineDataFence_Request
==============
*/
void Live_SyncOnlineDataFence_Request(const int controllerIndex, const int gameMode, ODSFState shouldCacheFenceStatus)
{
  __int64 v3; 
  bool v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v8; 
  int v9; 

  v3 = controllerIndex;
  v4 = shouldCacheFenceStatus;
  v5 = gameMode;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v9 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_fences.cpp", 760, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v9) )
      __debugbreak();
  }
  if ( (unsigned int)v5 >= 4 )
  {
    LODWORD(v8) = 4;
    LODWORD(v6) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_fences.cpp", 761, ASSERT_TYPE_ASSERT, "(unsigned)( gameMode ) < (unsigned)( static_cast<int>( GameModeType::COUNT ) )", "gameMode doesn't index static_cast<int>( GameModeType::COUNT )\n\t%i not in [0, %i)", v6, v8) )
      __debugbreak();
  }
  if ( s_ODSFData[v3][v5].state[0] != 2 )
  {
    LOBYTE(shouldCacheFenceStatus) = 1;
    Live_SyncOnlineDataFence_SetState(v3, v5, shouldCacheFenceStatus);
    Live_SyncOnlineDataFence_Frame(v3, v5);
    s_ODSFData[v3][v5].shouldCacheFenceStatus = v4;
  }
}

/*
==============
Live_SyncOnlineDataFence_ResetState
==============
*/
void Live_SyncOnlineDataFence_ResetState(const int controllerIndex, const int gameMode)
{
  __int64 v4; 
  __int64 v6; 
  int v7; 

  if ( (unsigned int)controllerIndex >= 8 )
  {
    v7 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_fences.cpp", 786, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v7) )
      __debugbreak();
  }
  if ( (unsigned int)gameMode >= 4 )
  {
    LODWORD(v6) = 4;
    LODWORD(v4) = gameMode;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_fences.cpp", 787, ASSERT_TYPE_ASSERT, "(unsigned)( gameMode ) < (unsigned)( static_cast<int>( GameModeType::COUNT ) )", "gameMode doesn't index static_cast<int>( GameModeType::COUNT )\n\t%i not in [0, %i)", v4, v6) )
      __debugbreak();
  }
  Live_SyncOnlineDataFence_SetState(controllerIndex, gameMode, INACTIVE);
}

/*
==============
Live_SyncOnlineDataFence_ResetStateForAllControllers
==============
*/
void Live_SyncOnlineDataFence_ResetStateForAllControllers(void)
{
  int v0; 
  unsigned int ActiveGameMode; 
  bool v2; 
  __int64 v3; 
  __int64 v4; 

  v0 = 0;
  ActiveGameMode = (unsigned __int8)Com_GameMode_GetActiveGameMode();
  v2 = 1;
  do
  {
    if ( !v2 )
    {
      LODWORD(v4) = 8;
      LODWORD(v3) = v0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_fences.cpp", 786, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v3, v4) )
        __debugbreak();
    }
    if ( ActiveGameMode >= 4 )
    {
      LODWORD(v4) = 4;
      LODWORD(v3) = ActiveGameMode;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_fences.cpp", 787, ASSERT_TYPE_ASSERT, "(unsigned)( gameMode ) < (unsigned)( static_cast<int>( GameModeType::COUNT ) )", "gameMode doesn't index static_cast<int>( GameModeType::COUNT )\n\t%i not in [0, %i)", v3, v4) )
        __debugbreak();
    }
    Live_SyncOnlineDataFence_SetState(v0++, ActiveGameMode, INACTIVE);
    v2 = (unsigned int)v0 < 8;
  }
  while ( v0 < 8 );
}

/*
==============
Live_SyncOnlineDataFence_ResetStateForAllGameModes
==============
*/
void Live_SyncOnlineDataFence_ResetStateForAllGameModes(const int controllerIndex)
{
  int i; 
  __int64 v3; 
  __int64 v4; 

  for ( i = 0; i < 4; ++i )
  {
    if ( (unsigned int)controllerIndex >= 8 )
    {
      LODWORD(v4) = 8;
      LODWORD(v3) = controllerIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_fences.cpp", 786, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v3, v4) )
        __debugbreak();
    }
    if ( (unsigned int)i >= 4 )
    {
      LODWORD(v4) = 4;
      LODWORD(v3) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_fences.cpp", 787, ASSERT_TYPE_ASSERT, "(unsigned)( gameMode ) < (unsigned)( static_cast<int>( GameModeType::COUNT ) )", "gameMode doesn't index static_cast<int>( GameModeType::COUNT )\n\t%i not in [0, %i)", v3, v4) )
        __debugbreak();
    }
    Live_SyncOnlineDataFence_SetState(controllerIndex, i, INACTIVE);
  }
}

/*
==============
Live_SyncOnlineDataFence_SetState
==============
*/
void Live_SyncOnlineDataFence_SetState(const int controllerIndex, const int gameMode, const ODSFState state)
{
  __int64 v3; 
  char v4; 
  __int64 v5; 
  bool v6; 
  __int64 v7; 
  __int64 v8; 

  v3 = controllerIndex;
  v4 = state;
  v5 = gameMode;
  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_fences.cpp", 478, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  if ( (unsigned int)v5 >= 4 )
  {
    LODWORD(v8) = 4;
    LODWORD(v7) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_fences.cpp", 479, ASSERT_TYPE_ASSERT, "(unsigned)( gameMode ) < (unsigned)( static_cast<int>( GameModeType::COUNT ) )", "gameMode doesn't index static_cast<int>( GameModeType::COUNT )\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  s_ODSFData[v3][v5].state[0] = v4;
  v6 = onlineDataFenceFailed;
  if ( (unsigned __int8)(v4 - 1) <= 2u )
    v6 = 0;
  onlineDataFenceFailed = v6;
}

/*
==============
Live_SyncOnlineDataFence_UpdateFenceStatus
==============
*/
void Live_SyncOnlineDataFence_UpdateFenceStatus(const int controllerIndex, const int gameMode)
{
  __int64 v4; 
  const dvar_t *v5; 
  FenceType v6; 

  v4 = gameMode + 4i64 * controllerIndex;
  if ( s_ODSFData[0][v4].shouldCacheFenceStatus )
  {
    v5 = DVARBOOL_online_fences_should_show_root_fence_not_passing_in_popups;
    if ( !DVARBOOL_online_fences_should_show_root_fence_not_passing_in_popups && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_fences_should_show_root_fence_not_passing_in_popups") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( v5->current.enabled )
    {
      v6 = FENCE_MAIN_ONLINE_DATA;
      switch ( gameMode )
      {
        case 1:
          v6 = FENCE_SP_ONLINE_DATA;
          break;
        case 2:
          v6 = FENCE_MP_ONLINE_DATA;
          break;
        case 3:
          v6 = FENCE_CP_ONLINE_DATA;
          break;
      }
      s_ODSFData[0][v4].indexOfRootFenceNotPassing = FenceManager_GetRootFenceNotPassingForFenceType(controllerIndex, v6);
    }
  }
}

