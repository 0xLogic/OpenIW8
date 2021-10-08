/*
==============
gameLobbySessionHSM_base::HSM_OnEvent
==============
*/

void __fastcall gameLobbySessionHSM_base::HSM_OnEvent(gameLobbySessionHSM_base *this, gameLobbySessionHSM_base::eHSMEvents event)
{
  ?HSM_OnEvent@gameLobbySessionHSM_base@@AEAAXW4eHSMEvents@1@@Z(this, event);
}

/*
==============
gameLobbySessionHSM_base::HSM_StateFunction_st_inactive
==============
*/

gameLobbySessionHSM_base::eHSMStates __fastcall gameLobbySessionHSM_base::HSM_StateFunction_st_inactive(gameLobbySessionHSM_base *this, gameLobbySessionHSM_base::eHSMEvents event)
{
  return ?HSM_StateFunction_st_inactive@gameLobbySessionHSM_base@@AEAA?AW4eHSMStates@1@W4eHSMEvents@1@@Z(this, event);
}

/*
==============
gameLobbySessionHSM_base::HSM_StateFunction_st_creating_session
==============
*/

gameLobbySessionHSM_base::eHSMStates __fastcall gameLobbySessionHSM_base::HSM_StateFunction_st_creating_session(gameLobbySessionHSM_base *this, gameLobbySessionHSM_base::eHSMEvents event)
{
  return ?HSM_StateFunction_st_creating_session@gameLobbySessionHSM_base@@AEAA?AW4eHSMStates@1@W4eHSMEvents@1@@Z(this, event);
}

/*
==============
gameLobbySessionHSM_base::HSM_StateFunction_st_joining_session
==============
*/

gameLobbySessionHSM_base::eHSMStates __fastcall gameLobbySessionHSM_base::HSM_StateFunction_st_joining_session(gameLobbySessionHSM_base *this, gameLobbySessionHSM_base::eHSMEvents event)
{
  return ?HSM_StateFunction_st_joining_session@gameLobbySessionHSM_base@@AEAA?AW4eHSMStates@1@W4eHSMEvents@1@@Z(this, event);
}

/*
==============
gameLobbySessionHSM_base::HSM_GetCurrentState
==============
*/

gameLobbySessionHSM_base::eHSMStates __fastcall gameLobbySessionHSM_base::HSM_GetCurrentState(gameLobbySessionHSM_base *this)
{
  return ?HSM_GetCurrentState@gameLobbySessionHSM_base@@QEAA?AW4eHSMStates@1@XZ(this);
}

/*
==============
gameLobbySessionHSM_base::HSM_CallStateFunction
==============
*/

gameLobbySessionHSM_base::eHSMStates __fastcall gameLobbySessionHSM_base::HSM_CallStateFunction(gameLobbySessionHSM_base *this, gameLobbySessionHSM_base::eHSMStates state, gameLobbySessionHSM_base::eHSMEvents event)
{
  return ?HSM_CallStateFunction@gameLobbySessionHSM_base@@AEAA?AW4eHSMStates@1@W421@W4eHSMEvents@1@@Z(this, state, event);
}

/*
==============
gameLobbySessionHSM_base::HSM_OnTransition
==============
*/

void __fastcall gameLobbySessionHSM_base::HSM_OnTransition(gameLobbySessionHSM_base *this, gameLobbySessionHSM_base::eHSMStates state)
{
  ?HSM_OnTransition@gameLobbySessionHSM_base@@AEAAXW4eHSMStates@1@@Z(this, state);
}

/*
==============
gameLobbySessionHSM_base::HSM_Update
==============
*/

void __fastcall gameLobbySessionHSM_base::HSM_Update(gameLobbySessionHSM_base *this, int dt)
{
  ?HSM_Update@gameLobbySessionHSM_base@@IEAAXH@Z(this, dt);
}

/*
==============
gameLobbySessionHSM_base::HSM_IsActive
==============
*/

bool __fastcall gameLobbySessionHSM_base::HSM_IsActive(gameLobbySessionHSM_base *this)
{
  return ?HSM_IsActive@gameLobbySessionHSM_base@@IEAA_NXZ(this);
}

/*
==============
gameLobbySessionHSM_base::HSM_ProcessEvents
==============
*/

void __fastcall gameLobbySessionHSM_base::HSM_ProcessEvents(gameLobbySessionHSM_base *this)
{
  ?HSM_ProcessEvents@gameLobbySessionHSM_base@@AEAAXXZ(this);
}

/*
==============
gameLobbySessionHSM_base::HSM_StateFunction_st_updating_session_info
==============
*/

gameLobbySessionHSM_base::eHSMStates __fastcall gameLobbySessionHSM_base::HSM_StateFunction_st_updating_session_info(gameLobbySessionHSM_base *this, gameLobbySessionHSM_base::eHSMEvents event)
{
  return ?HSM_StateFunction_st_updating_session_info@gameLobbySessionHSM_base@@AEAA?AW4eHSMStates@1@W4eHSMEvents@1@@Z(this, event);
}

/*
==============
gameLobbySessionHSM_base::HSM_StopTimer
==============
*/

void __fastcall gameLobbySessionHSM_base::HSM_StopTimer(gameLobbySessionHSM_base *this, gameLobbySessionHSM_base::eHSMEvents timerId)
{
  ?HSM_StopTimer@gameLobbySessionHSM_base@@AEAAXW4eHSMEvents@1@@Z(this, timerId);
}

/*
==============
gameLobbySessionHSM_base::HSM_OnExitState
==============
*/

void __fastcall gameLobbySessionHSM_base::HSM_OnExitState(gameLobbySessionHSM_base *this)
{
  ?HSM_OnExitState@gameLobbySessionHSM_base@@AEAAXXZ(this);
}

/*
==============
gameLobbySessionHSM_base::HSM_StartTimer
==============
*/

void __fastcall gameLobbySessionHSM_base::HSM_StartTimer(gameLobbySessionHSM_base *this, gameLobbySessionHSM_base::eHSMEvents timerId, int expirationTime)
{
  ?HSM_StartTimer@gameLobbySessionHSM_base@@AEAAXW4eHSMEvents@1@H@Z(this, timerId, expirationTime);
}

/*
==============
gameLobbySessionHSM_base::HSM_StateFunction_gameLobbySessionHSM
==============
*/

gameLobbySessionHSM_base::eHSMStates __fastcall gameLobbySessionHSM_base::HSM_StateFunction_gameLobbySessionHSM(gameLobbySessionHSM_base *this, gameLobbySessionHSM_base::eHSMEvents event)
{
  return ?HSM_StateFunction_gameLobbySessionHSM@gameLobbySessionHSM_base@@AEAA?AW4eHSMStates@1@W4eHSMEvents@1@@Z(this, event);
}

/*
==============
gameLobbySessionHSM_base::HSM_StateFunction_st_client
==============
*/

gameLobbySessionHSM_base::eHSMStates __fastcall gameLobbySessionHSM_base::HSM_StateFunction_st_client(gameLobbySessionHSM_base *this, gameLobbySessionHSM_base::eHSMEvents event)
{
  return ?HSM_StateFunction_st_client@gameLobbySessionHSM_base@@AEAA?AW4eHSMStates@1@W4eHSMEvents@1@@Z(this, event);
}

/*
==============
gameLobbySessionHSM_base::HSM_StateFunction_st_removing_splitscreen_user_from_session_as_host
==============
*/

gameLobbySessionHSM_base::eHSMStates __fastcall gameLobbySessionHSM_base::HSM_StateFunction_st_removing_splitscreen_user_from_session_as_host(gameLobbySessionHSM_base *this, gameLobbySessionHSM_base::eHSMEvents event)
{
  return ?HSM_StateFunction_st_removing_splitscreen_user_from_session_as_host@gameLobbySessionHSM_base@@AEAA?AW4eHSMStates@1@W4eHSMEvents@1@@Z(this, event);
}

/*
==============
gameLobbySessionHSM_base::HSM_GetParentState
==============
*/

gameLobbySessionHSM_base::eHSMStates __fastcall gameLobbySessionHSM_base::HSM_GetParentState(gameLobbySessionHSM_base *this, gameLobbySessionHSM_base::eHSMStates state)
{
  return ?HSM_GetParentState@gameLobbySessionHSM_base@@AEAA?AW4eHSMStates@1@W421@@Z(this, state);
}

/*
==============
gameLobbySessionHSM_base::gameLobbySessionHSM_base
==============
*/

void __fastcall gameLobbySessionHSM_base::gameLobbySessionHSM_base(gameLobbySessionHSM_base *this)
{
  ??0gameLobbySessionHSM_base@@QEAA@XZ(this);
}

/*
==============
gameLobbySessionHSM_base::HSM_StateFunction_st_generic_com_error_handling
==============
*/

gameLobbySessionHSM_base::eHSMStates __fastcall gameLobbySessionHSM_base::HSM_StateFunction_st_generic_com_error_handling(gameLobbySessionHSM_base *this, gameLobbySessionHSM_base::eHSMEvents event)
{
  return ?HSM_StateFunction_st_generic_com_error_handling@gameLobbySessionHSM_base@@AEAA?AW4eHSMStates@1@W4eHSMEvents@1@@Z(this, event);
}

/*
==============
gameLobbySessionHSM_base::HSM_FindDivergentNodeIndexInPaths
==============
*/

int __fastcall gameLobbySessionHSM_base::HSM_FindDivergentNodeIndexInPaths(gameLobbySessionHSM_base *this, gameLobbySessionHSM_base::eHSMStates *pathA, gameLobbySessionHSM_base::eHSMStates *pathB)
{
  return ?HSM_FindDivergentNodeIndexInPaths@gameLobbySessionHSM_base@@AEAAHPEAW4eHSMStates@1@0@Z(this, pathA, pathB);
}

/*
==============
gameLobbySessionHSM_base::HSM_StateFunction_st_adding_splitscreen_user_to_session_as_host
==============
*/

gameLobbySessionHSM_base::eHSMStates __fastcall gameLobbySessionHSM_base::HSM_StateFunction_st_adding_splitscreen_user_to_session_as_host(gameLobbySessionHSM_base *this, gameLobbySessionHSM_base::eHSMEvents event)
{
  return ?HSM_StateFunction_st_adding_splitscreen_user_to_session_as_host@gameLobbySessionHSM_base@@AEAA?AW4eHSMStates@1@W4eHSMEvents@1@@Z(this, event);
}

/*
==============
gameLobbySessionHSM_base::HSM_UpdateTimers
==============
*/

void __fastcall gameLobbySessionHSM_base::HSM_UpdateTimers(gameLobbySessionHSM_base *this, int dt)
{
  ?HSM_UpdateTimers@gameLobbySessionHSM_base@@AEAAXH@Z(this, dt);
}

/*
==============
gameLobbySessionHSM_base::HSM_StateFunction_st_leaving_session
==============
*/

gameLobbySessionHSM_base::eHSMStates __fastcall gameLobbySessionHSM_base::HSM_StateFunction_st_leaving_session(gameLobbySessionHSM_base *this, gameLobbySessionHSM_base::eHSMEvents event)
{
  return ?HSM_StateFunction_st_leaving_session@gameLobbySessionHSM_base@@AEAA?AW4eHSMStates@1@W4eHSMEvents@1@@Z(this, event);
}

/*
==============
gameLobbySessionHSM_base::HSM_StateFunction_st_host
==============
*/

gameLobbySessionHSM_base::eHSMStates __fastcall gameLobbySessionHSM_base::HSM_StateFunction_st_host(gameLobbySessionHSM_base *this, gameLobbySessionHSM_base::eHSMEvents event)
{
  return ?HSM_StateFunction_st_host@gameLobbySessionHSM_base@@AEAA?AW4eHSMStates@1@W4eHSMEvents@1@@Z(this, event);
}

/*
==============
gameLobbySessionHSM_base::HSM_StateFunction_st_removing_splitscreen_user_from_session_as_client
==============
*/

gameLobbySessionHSM_base::eHSMStates __fastcall gameLobbySessionHSM_base::HSM_StateFunction_st_removing_splitscreen_user_from_session_as_client(gameLobbySessionHSM_base *this, gameLobbySessionHSM_base::eHSMEvents event)
{
  return ?HSM_StateFunction_st_removing_splitscreen_user_from_session_as_client@gameLobbySessionHSM_base@@AEAA?AW4eHSMStates@1@W4eHSMEvents@1@@Z(this, event);
}

/*
==============
gameLobbySessionHSM_base::ConvertEventToString
==============
*/

const char *__fastcall gameLobbySessionHSM_base::ConvertEventToString(gameLobbySessionHSM_base *this, gameLobbySessionHSM_base::eHSMEvents event)
{
  return ?ConvertEventToString@gameLobbySessionHSM_base@@IEAAPEBDW4eHSMEvents@1@@Z(this, event);
}

/*
==============
gameLobbySessionHSM_base::HSM_OnEnterState
==============
*/

void __fastcall gameLobbySessionHSM_base::HSM_OnEnterState(gameLobbySessionHSM_base *this, gameLobbySessionHSM_base::eHSMStates newState)
{
  ?HSM_OnEnterState@gameLobbySessionHSM_base@@AEAAXW4eHSMStates@1@@Z(this, newState);
}

/*
==============
gameLobbySessionHSM_base::~gameLobbySessionHSM_base
==============
*/

void __fastcall gameLobbySessionHSM_base::~gameLobbySessionHSM_base(gameLobbySessionHSM_base *this)
{
  ??1gameLobbySessionHSM_base@@UEAA@XZ(this);
}

/*
==============
gameLobbySessionHSM_base::HSM_Shutdown
==============
*/

void __fastcall gameLobbySessionHSM_base::HSM_Shutdown(gameLobbySessionHSM_base *this)
{
  ?HSM_Shutdown@gameLobbySessionHSM_base@@IEAAXXZ(this);
}

/*
==============
gameLobbySessionHSM_base::HSM_StateFunction_st_removing_splitscreen_user_from_session_for_leaving
==============
*/

gameLobbySessionHSM_base::eHSMStates __fastcall gameLobbySessionHSM_base::HSM_StateFunction_st_removing_splitscreen_user_from_session_for_leaving(gameLobbySessionHSM_base *this, gameLobbySessionHSM_base::eHSMEvents event)
{
  return ?HSM_StateFunction_st_removing_splitscreen_user_from_session_for_leaving@gameLobbySessionHSM_base@@AEAA?AW4eHSMStates@1@W4eHSMEvents@1@@Z(this, event);
}

/*
==============
gameLobbySessionHSM_base::HSM_GetPathToState
==============
*/

int __fastcall gameLobbySessionHSM_base::HSM_GetPathToState(gameLobbySessionHSM_base *this, gameLobbySessionHSM_base::eHSMStates newHSMState, gameLobbySessionHSM_base::eHSMStates *statePathOut)
{
  return ?HSM_GetPathToState@gameLobbySessionHSM_base@@AEAAHW4eHSMStates@1@PEAW421@@Z(this, newHSMState, statePathOut);
}

/*
==============
gameLobbySessionHSM_base::HSM_TriggerEvent
==============
*/

void __fastcall gameLobbySessionHSM_base::HSM_TriggerEvent(gameLobbySessionHSM_base *this, gameLobbySessionHSM_base::eHSMEvents event)
{
  ?HSM_TriggerEvent@gameLobbySessionHSM_base@@QEAAXW4eHSMEvents@1@@Z(this, event);
}

/*
==============
gameLobbySessionHSM_base::ConvertStateToString
==============
*/

const char *__fastcall gameLobbySessionHSM_base::ConvertStateToString(gameLobbySessionHSM_base *this, gameLobbySessionHSM_base::eHSMStates state)
{
  return ?ConvertStateToString@gameLobbySessionHSM_base@@IEAAPEBDW4eHSMStates@1@@Z(this, state);
}

/*
==============
gameLobbySessionHSM_base::HSM_IsInState
==============
*/

bool __fastcall gameLobbySessionHSM_base::HSM_IsInState(gameLobbySessionHSM_base *this, gameLobbySessionHSM_base::eHSMStates state)
{
  return ?HSM_IsInState@gameLobbySessionHSM_base@@QEAA_NW4eHSMStates@1@@Z(this, state);
}

/*
==============
gameLobbySessionHSM_base::HSM_StateFunction_st_following_private_party_host_to_game_lobby
==============
*/

gameLobbySessionHSM_base::eHSMStates __fastcall gameLobbySessionHSM_base::HSM_StateFunction_st_following_private_party_host_to_game_lobby(gameLobbySessionHSM_base *this, gameLobbySessionHSM_base::eHSMEvents event)
{
  return ?HSM_StateFunction_st_following_private_party_host_to_game_lobby@gameLobbySessionHSM_base@@AEAA?AW4eHSMStates@1@W4eHSMEvents@1@@Z(this, event);
}

/*
==============
gameLobbySessionHSM_base::HSM_StateFunction_st_adding_splitscreen_user_to_session_as_client
==============
*/

gameLobbySessionHSM_base::eHSMStates __fastcall gameLobbySessionHSM_base::HSM_StateFunction_st_adding_splitscreen_user_to_session_as_client(gameLobbySessionHSM_base *this, gameLobbySessionHSM_base::eHSMEvents event)
{
  return ?HSM_StateFunction_st_adding_splitscreen_user_to_session_as_client@gameLobbySessionHSM_base@@AEAA?AW4eHSMStates@1@W4eHSMEvents@1@@Z(this, event);
}

/*
==============
gameLobbySessionHSM_base::HSM_StateFunction_st_updating_session_data
==============
*/

gameLobbySessionHSM_base::eHSMStates __fastcall gameLobbySessionHSM_base::HSM_StateFunction_st_updating_session_data(gameLobbySessionHSM_base *this, gameLobbySessionHSM_base::eHSMEvents event)
{
  return ?HSM_StateFunction_st_updating_session_data@gameLobbySessionHSM_base@@AEAA?AW4eHSMStates@1@W4eHSMEvents@1@@Z(this, event);
}

/*
==============
gameLobbySessionHSM_base::HSM_Init
==============
*/

void __fastcall gameLobbySessionHSM_base::HSM_Init(gameLobbySessionHSM_base *this)
{
  ?HSM_Init@gameLobbySessionHSM_base@@IEAAXXZ(this);
}

/*
==============
gameLobbySessionHSM_base::HSM_StateFunction_gameLobbySessionHSM
==============
*/
__int64 gameLobbySessionHSM_base::HSM_StateFunction_gameLobbySessionHSM(gameLobbySessionHSM_base *this, gameLobbySessionHSM_base::eHSMEvents event)
{
  __int32 v2; 
  __int32 v3; 
  __int32 v4; 

  if ( event )
  {
    v2 = event - 29;
    if ( !v2 )
    {
      gameLobbySessionHSM_base::HSM_OnEnterState(this, __HSM_ROOT_STATE__);
      return 0xFFFFFFFFi64;
    }
    v3 = v2 - 1;
    if ( !v3 )
    {
      gameLobbySessionHSM_base::HSM_OnExitState(this);
      return 0xFFFFFFFFi64;
    }
    v4 = v3 - 1;
    if ( v4 && v4 != 5 )
      return 4294967294i64;
  }
  else
  {
    gameLobbySessionHSM_base::HSM_OnTransition(this, st_handle_error);
  }
  return 0xFFFFFFFFi64;
}

/*
==============
gameLobbySessionHSM_base::HSM_StateFunction_st_inactive
==============
*/
__int64 gameLobbySessionHSM_base::HSM_StateFunction_st_inactive(gameLobbySessionHSM_base *this, gameLobbySessionHSM_base::eHSMEvents event)
{
  __int64 result; 

  switch ( event )
  {
    case INVITE_GENERIC_ERROR_NO_MSG:
      gameLobbySessionHSM_base::HSM_OnTransition(this, st_generic_com_error_next_frame_with_msg);
      result = 0xFFFFFFFFi64;
      break;
    case INVITE_RECEIVED:
      gameLobbySessionHSM_base::HSM_OnTransition(this, st_invalid_controller_pairing);
      result = 0xFFFFFFFFi64;
      break;
    case START_JOINING_USER_WITH_PLATFORM_ID:
      gameLobbySessionHSM_base::HSM_OnTransition(this, st_invitee_permissions_timeout);
      result = 0xFFFFFFFFi64;
      break;
    case START_JOINING_USER_WITH_XUID:
      gameLobbySessionHSM_base::HSM_OnTransition(this, st_invite_error_no_msg);
      result = 0xFFFFFFFFi64;
      break;
    case INVITE_AUTHENTICATED:
      gameLobbySessionHSM_base::HSM_OnEnterState(this, st_invite_none);
      result = 0xFFFFFFFFi64;
      break;
    case JOINER_UNIVERSAL_ID_RESOLVED:
      gameLobbySessionHSM_base::HSM_OnExitState(this);
      result = 0xFFFFFFFFi64;
      break;
    case GETTING_SENDER_XUID_TIMEDOUT:
      this->HandleHSMCallback_InactiveFrame(this);
      result = 0xFFFFFFFFi64;
      break;
    case INVITE_RESOLVE_INVITER_UNIVERSAL_ID_FAILED:
      result = 0i64;
      break;
    default:
      result = 4294967294i64;
      break;
  }
  return result;
}

/*
==============
gameLobbySessionHSM_base::HSM_StateFunction_st_generic_com_error_handling
==============
*/
__int64 gameLobbySessionHSM_base::HSM_StateFunction_st_generic_com_error_handling(gameLobbySessionHSM_base *this, gameLobbySessionHSM_base::eHSMEvents event)
{
  __int32 v3; 
  __int32 v4; 
  __int32 v5; 
  __int32 v6; 

  v3 = event - 5;
  if ( !v3 )
  {
    gameLobbySessionHSM_base::HSM_OnTransition(this, st_invite_none);
    return 0xFFFFFFFFi64;
  }
  v4 = v3 - 24;
  if ( !v4 )
  {
    gameLobbySessionHSM_base::HSM_OnEnterState(this, st_handle_error);
    this->HandleHSMCallback_ComErrorEntered(this);
    return 0xFFFFFFFFi64;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    gameLobbySessionHSM_base::HSM_OnExitState(this);
    return 0xFFFFFFFFi64;
  }
  v6 = v5 - 1;
  if ( !v6 )
    return 0xFFFFFFFFi64;
  if ( v6 == 5 )
    return 1i64;
  else
    return 4294967294i64;
}

/*
==============
gameLobbySessionHSM_base::HSM_StateFunction_st_following_private_party_host_to_game_lobby
==============
*/
__int64 gameLobbySessionHSM_base::HSM_StateFunction_st_following_private_party_host_to_game_lobby(gameLobbySessionHSM_base *this, gameLobbySessionHSM_base::eHSMEvents event)
{
  __int64 result; 

  switch ( event )
  {
    case COM_ERROR_TRIGGERED:
      gameLobbySessionHSM_base::HSM_OnTransition(this, st_eula_declined);
      result = 0xFFFFFFFFi64;
      break;
    case INVITE_CANT_DETERMINE_CONTROLLER_PAIRING:
      this->HandleHSMCallback_JoinSession_Failed(this);
      result = 0xFFFFFFFFi64;
      break;
    case INVITE_AUTHENTICATED:
      gameLobbySessionHSM_base::HSM_OnEnterState(this, st_invite_error_no_msg);
      this->HandleHSMCallback_FollowPrivatePartyHostToGameLobby(this);
      goto $LN6_54;
    case JOINER_UNIVERSAL_ID_RESOLVED:
      gameLobbySessionHSM_base::HSM_OnExitState(this);
      result = 0xFFFFFFFFi64;
      break;
    case GETTING_SENDER_XUID_TIMEDOUT:
$LN6_54:
      result = 0xFFFFFFFFi64;
      break;
    case INVITE_RESOLVE_INVITER_UNIVERSAL_ID_FAILED:
      result = 0i64;
      break;
    default:
      result = 4294967294i64;
      break;
  }
  return result;
}

/*
==============
gameLobbySessionHSM_base::HSM_StateFunction_st_creating_session
==============
*/
__int64 gameLobbySessionHSM_base::HSM_StateFunction_st_creating_session(gameLobbySessionHSM_base *this, gameLobbySessionHSM_base::eHSMEvents event)
{
  __int64 result; 

  switch ( event )
  {
    case INVITE_CHECK_PERMISSIONS:
      gameLobbySessionHSM_base::HSM_OnTransition(this, st_mp_permission_error_with_msg);
      result = 0xFFFFFFFFi64;
      break;
    case EULA_VERIFIED:
      this->HandleHSMCallback_CreateSession_Failed(this);
      result = 0xFFFFFFFFi64;
      break;
    case CHECK_IF_EXE_IS_READY_TO_PROCESS_INVITE_JOIN:
      this->HandleHSMCallback_CreateSession_Failed_NoComError(this);
      gameLobbySessionHSM_base::HSM_OnTransition(this, st_invite_none);
      result = 0xFFFFFFFFi64;
      break;
    case INVITE_AUTHENTICATED:
      gameLobbySessionHSM_base::HSM_OnEnterState(this, st_generic_com_error_next_frame_with_msg);
      this->HandleHSMCallback_CreateSession(this);
      goto $LN6_55;
    case JOINER_UNIVERSAL_ID_RESOLVED:
      gameLobbySessionHSM_base::HSM_OnExitState(this);
      result = 0xFFFFFFFFi64;
      break;
    case GETTING_SENDER_XUID_TIMEDOUT:
$LN6_55:
      result = 0xFFFFFFFFi64;
      break;
    case INVITE_RESOLVE_INVITER_UNIVERSAL_ID_FAILED:
      result = 0i64;
      break;
    default:
      result = 4294967294i64;
      break;
  }
  return result;
}

/*
==============
gameLobbySessionHSM_base::HSM_StateFunction_st_leaving_session
==============
*/
__int64 gameLobbySessionHSM_base::HSM_StateFunction_st_leaving_session(gameLobbySessionHSM_base *this, gameLobbySessionHSM_base::eHSMEvents event)
{
  __int64 result; 

  switch ( event )
  {
    case INVITE_WAIT_FOR_USER_AUTH:
      goto $LN8_65;
    case USER_CANCEL_INVITATION:
      this->HandleHSMCallback_LeaveSession_Failed(this);
$LN8_65:
      gameLobbySessionHSM_base::HSM_OnTransition(this, st_invite_none);
      return 0xFFFFFFFFi64;
    case USER_DECLINE_INVITATION:
      gameLobbySessionHSM_base::HSM_OnTransition(this, st_tu_required_error_with_msg);
      return 0xFFFFFFFFi64;
    case INVITE_AUTHENTICATED:
      gameLobbySessionHSM_base::HSM_OnEnterState(this, st_invitee_permissions_timeout);
      this->HandleHSMCallback_LeaveSession(this);
      goto $LN6_56;
    case JOINER_UNIVERSAL_ID_RESOLVED:
      gameLobbySessionHSM_base::HSM_OnExitState(this);
      return 0xFFFFFFFFi64;
    case GETTING_SENDER_XUID_TIMEDOUT:
$LN6_56:
      result = 0xFFFFFFFFi64;
      break;
    case INVITE_RESOLVE_INVITER_UNIVERSAL_ID_FAILED:
      result = 0i64;
      break;
    default:
      result = 4294967294i64;
      break;
  }
  return result;
}

/*
==============
gameLobbySessionHSM_base::HSM_StateFunction_st_removing_splitscreen_user_from_session_for_leaving
==============
*/
__int64 gameLobbySessionHSM_base::HSM_StateFunction_st_removing_splitscreen_user_from_session_for_leaving(gameLobbySessionHSM_base *this, gameLobbySessionHSM_base::eHSMEvents event)
{
  __int64 result; 

  switch ( event )
  {
    case INVITE_ERROR_SUBSCRIPTION_REQUIRED:
      goto $LN8_66;
    case INVITE_TU_REQUIRED:
      this->HandleHSMCallback_RemoveSplitscreenUserFromSession_Failed(this);
$LN8_66:
      gameLobbySessionHSM_base::HSM_OnTransition(this, st_invite_none);
      return 0xFFFFFFFFi64;
    case INVITE_AUTHENTICATED:
      gameLobbySessionHSM_base::HSM_OnEnterState(this, st_tu_required_error_with_msg);
      this->HandleHSMCallback_RemoveSplitscreenUserFromSession(this);
      goto $LN6_57;
    case JOINER_UNIVERSAL_ID_RESOLVED:
      gameLobbySessionHSM_base::HSM_OnExitState(this);
      return 0xFFFFFFFFi64;
    case GETTING_SENDER_XUID_TIMEDOUT:
$LN6_57:
      result = 0xFFFFFFFFi64;
      break;
    case INVITE_RESOLVE_INVITER_UNIVERSAL_ID_FAILED:
      result = 5i64;
      break;
    default:
      result = 4294967294i64;
      break;
  }
  return result;
}

/*
==============
gameLobbySessionHSM_base::HSM_StateFunction_st_host
==============
*/
__int64 gameLobbySessionHSM_base::HSM_StateFunction_st_host(gameLobbySessionHSM_base *this, gameLobbySessionHSM_base::eHSMEvents event)
{
  __int64 result; 

  switch ( event )
  {
    case USER_DECLINE_INVITATION:
      gameLobbySessionHSM_base::HSM_OnTransition(this, st_invite_processing_timeout);
      result = 0xFFFFFFFFi64;
      break;
    case INVITE_MP_PERM_REQUIRED:
      gameLobbySessionHSM_base::HSM_OnTransition(this, st_invitee_permissions_timeout);
      result = 0xFFFFFFFFi64;
      break;
    case INVITE_PERMISSIONS_PASSED:
      gameLobbySessionHSM_base::HSM_OnTransition(this, st_cant_join_existing_session_with_msg);
      result = 0xFFFFFFFFi64;
      break;
    case INVITE_INVITEE_PERMS_TIMEOUT_SHOULD_RETRY:
      gameLobbySessionHSM_base::HSM_OnTransition(this, st_session_search_timeout);
      result = 0xFFFFFFFFi64;
      break;
    case INVITE_INVITEE_PERMS_TIMEOUT_JOIN_FAILED:
      gameLobbySessionHSM_base::HSM_OnTransition(this, st_atomic_join_fence_timeout);
      result = 0xFFFFFFFFi64;
      break;
    case INVITE_AUTHENTICATED:
      gameLobbySessionHSM_base::HSM_OnEnterState(this, st_mp_permission_error_with_msg);
      this->HandleHSMCallback_OnEnterHostState(this);
      result = 0xFFFFFFFFi64;
      break;
    case JOINER_UNIVERSAL_ID_RESOLVED:
      this->HandleHSMCallback_OnExitHostState(this);
      gameLobbySessionHSM_base::HSM_OnExitState(this);
      result = 0xFFFFFFFFi64;
      break;
    case GETTING_SENDER_XUID_TIMEDOUT:
      this->HandleHSMCallback_HostFrame(this);
      result = 0xFFFFFFFFi64;
      break;
    case INVITE_RESOLVE_INVITER_UNIVERSAL_ID_FAILED:
      result = 0i64;
      break;
    default:
      result = 4294967294i64;
      break;
  }
  return result;
}

/*
==============
gameLobbySessionHSM_base::HSM_StateFunction_st_updating_session_data
==============
*/
__int64 gameLobbySessionHSM_base::HSM_StateFunction_st_updating_session_data(gameLobbySessionHSM_base *this, gameLobbySessionHSM_base::eHSMEvents event)
{
  __int64 result; 

  switch ( event )
  {
    case INVITE_INVITEE_PERMS_TIMEOUT:
      goto $LN9_84;
    case INVITE_PERMISSIONS_CHECK_RETRY:
      this->HandleHSMCallback_UpdateSessionData_Failed(this);
      return 0xFFFFFFFFi64;
    case UI_READY:
      this->HandleHSMCallback_UpdateSessionData_Failed_NoComError(this);
$LN9_84:
      gameLobbySessionHSM_base::HSM_OnTransition(this, st_mp_permission_error_with_msg);
      return 0xFFFFFFFFi64;
    case INVITE_AUTHENTICATED:
      gameLobbySessionHSM_base::HSM_OnEnterState(this, st_cant_join_existing_session_with_msg);
      this->HandleHSMCallback_UpdateSessionData(this);
      goto $LN6_59;
    case JOINER_UNIVERSAL_ID_RESOLVED:
      gameLobbySessionHSM_base::HSM_OnExitState(this);
      return 0xFFFFFFFFi64;
    case GETTING_SENDER_XUID_TIMEDOUT:
$LN6_59:
      result = 0xFFFFFFFFi64;
      break;
    case INVITE_RESOLVE_INVITER_UNIVERSAL_ID_FAILED:
      result = 7i64;
      break;
    default:
      result = 4294967294i64;
      break;
  }
  return result;
}

/*
==============
gameLobbySessionHSM_base::HSM_StateFunction_st_updating_session_info
==============
*/
__int64 gameLobbySessionHSM_base::HSM_StateFunction_st_updating_session_info(gameLobbySessionHSM_base *this, gameLobbySessionHSM_base::eHSMEvents event)
{
  __int64 result; 

  switch ( event )
  {
    case WAIT_FOR_EULA:
      goto $LN9_85;
    case EULA_DECLINED:
      this->HandleHSMCallback_UpdateSessionInfo_Failed(this);
      return 0xFFFFFFFFi64;
    case WAIT_FOR_ACCOUNT_REGISTRATION:
      this->HandleHSMCallback_UpdateSessionInfo_Failed_NoComError(this);
$LN9_85:
      gameLobbySessionHSM_base::HSM_OnTransition(this, st_mp_permission_error_with_msg);
      return 0xFFFFFFFFi64;
    case INVITE_AUTHENTICATED:
      gameLobbySessionHSM_base::HSM_OnEnterState(this, st_session_search_timeout);
      this->HandleHSMCallback_UpdateSessionInfo(this);
      goto $LN6_60;
    case JOINER_UNIVERSAL_ID_RESOLVED:
      gameLobbySessionHSM_base::HSM_OnExitState(this);
      return 0xFFFFFFFFi64;
    case GETTING_SENDER_XUID_TIMEDOUT:
$LN6_60:
      result = 0xFFFFFFFFi64;
      break;
    case INVITE_RESOLVE_INVITER_UNIVERSAL_ID_FAILED:
      result = 7i64;
      break;
    default:
      result = 4294967294i64;
      break;
  }
  return result;
}

/*
==============
gameLobbySessionHSM_base::HSM_StateFunction_st_adding_splitscreen_user_to_session_as_host
==============
*/
__int64 gameLobbySessionHSM_base::HSM_StateFunction_st_adding_splitscreen_user_to_session_as_host(gameLobbySessionHSM_base *this, gameLobbySessionHSM_base::eHSMEvents event)
{
  __int64 result; 

  switch ( event )
  {
    case ACCOUNT_REGISTRATION_CANCELLED:
      gameLobbySessionHSM_base::HSM_OnTransition(this, st_mp_permission_error_with_msg);
      result = 0xFFFFFFFFi64;
      break;
    case INITIAL_LOCAL_CLIENT_ACTIVE_FENCE_FAILED:
      this->HandleHSMCallback_AddSplitscreenUserToSession_Failed(this);
      result = 0xFFFFFFFFi64;
      break;
    case INVITE_AUTHENTICATED:
      gameLobbySessionHSM_base::HSM_OnEnterState(this, st_atomic_join_fence_timeout);
      this->HandleHSMCallback_AddSplitscreenUserToSession(this);
      goto $LN6_61;
    case JOINER_UNIVERSAL_ID_RESOLVED:
      gameLobbySessionHSM_base::HSM_OnExitState(this);
      result = 0xFFFFFFFFi64;
      break;
    case GETTING_SENDER_XUID_TIMEDOUT:
$LN6_61:
      result = 0xFFFFFFFFi64;
      break;
    case INVITE_RESOLVE_INVITER_UNIVERSAL_ID_FAILED:
      result = 7i64;
      break;
    default:
      result = 4294967294i64;
      break;
  }
  return result;
}

/*
==============
gameLobbySessionHSM_base::HSM_StateFunction_st_removing_splitscreen_user_from_session_as_host
==============
*/
__int64 gameLobbySessionHSM_base::HSM_StateFunction_st_removing_splitscreen_user_from_session_as_host(gameLobbySessionHSM_base *this, gameLobbySessionHSM_base::eHSMEvents event)
{
  __int64 result; 

  switch ( event )
  {
    case INVITE_ERROR_SUBSCRIPTION_REQUIRED:
      gameLobbySessionHSM_base::HSM_OnTransition(this, st_mp_permission_error_with_msg);
      result = 0xFFFFFFFFi64;
      break;
    case INVITE_TU_REQUIRED:
      this->HandleHSMCallback_RemoveSplitscreenUserFromSession_Failed_ComError(this);
      result = 0xFFFFFFFFi64;
      break;
    case INVITE_AUTHENTICATED:
      gameLobbySessionHSM_base::HSM_OnEnterState(this, st_invite_processing_timeout);
      this->HandleHSMCallback_RemoveSplitscreenUserFromSession(this);
      goto $LN6_62;
    case JOINER_UNIVERSAL_ID_RESOLVED:
      gameLobbySessionHSM_base::HSM_OnExitState(this);
      result = 0xFFFFFFFFi64;
      break;
    case GETTING_SENDER_XUID_TIMEDOUT:
$LN6_62:
      result = 0xFFFFFFFFi64;
      break;
    case INVITE_RESOLVE_INVITER_UNIVERSAL_ID_FAILED:
      result = 7i64;
      break;
    default:
      result = 4294967294i64;
      break;
  }
  return result;
}

/*
==============
gameLobbySessionHSM_base::HSM_StateFunction_st_joining_session
==============
*/
__int64 gameLobbySessionHSM_base::HSM_StateFunction_st_joining_session(gameLobbySessionHSM_base *this, gameLobbySessionHSM_base::eHSMEvents event)
{
  __int64 result; 

  switch ( event )
  {
    case COM_ERROR_TRIGGERED:
      gameLobbySessionHSM_base::HSM_OnTransition(this, st_eula_declined);
      result = 0xFFFFFFFFi64;
      break;
    case INVITE_CANT_DETERMINE_CONTROLLER_PAIRING:
      this->HandleHSMCallback_JoinSession_Failed(this);
      gameLobbySessionHSM_base::HSM_OnTransition(this, st_invite_none);
      result = 0xFFFFFFFFi64;
      break;
    case INVITE_AUTHENTICATED:
      gameLobbySessionHSM_base::HSM_OnEnterState(this, st_invalid_controller_pairing);
      this->HandleHSMCallback_JoinSession(this);
      goto $LN6_63;
    case JOINER_UNIVERSAL_ID_RESOLVED:
      gameLobbySessionHSM_base::HSM_OnExitState(this);
      result = 0xFFFFFFFFi64;
      break;
    case GETTING_SENDER_XUID_TIMEDOUT:
$LN6_63:
      result = 0xFFFFFFFFi64;
      break;
    case INVITE_RESOLVE_INVITER_UNIVERSAL_ID_FAILED:
      result = 0i64;
      break;
    default:
      result = 4294967294i64;
      break;
  }
  return result;
}

/*
==============
gameLobbySessionHSM_base::HSM_StateFunction_st_client
==============
*/
__int64 gameLobbySessionHSM_base::HSM_StateFunction_st_client(gameLobbySessionHSM_base *this, gameLobbySessionHSM_base::eHSMEvents event)
{
  __int64 result; 

  switch ( event )
  {
    case USER_DECLINE_INVITATION:
      gameLobbySessionHSM_base::HSM_OnTransition(this, st_platform_subscription_required);
      result = 0xFFFFFFFFi64;
      break;
    case INVITE_MP_PERM_REQUIRED:
      gameLobbySessionHSM_base::HSM_OnTransition(this, st_invitee_permissions_timeout);
      result = 0xFFFFFFFFi64;
      break;
    case INVITE_INVITEE_PERMS_TIMEOUT_JOIN_FAILED:
      gameLobbySessionHSM_base::HSM_OnTransition(this, st_account_registration_cancelled);
      result = 0xFFFFFFFFi64;
      break;
    case WAITING_FOR_DEMONWARE_TIMEDOUT:
      gameLobbySessionHSM_base::HSM_OnTransition(this, st_mp_permission_error_with_msg);
      result = 0xFFFFFFFFi64;
      break;
    case INVITE_AUTHENTICATED:
      gameLobbySessionHSM_base::HSM_OnEnterState(this, st_eula_declined);
      this->HandleHSMCallback_OnEnterClientState(this);
      result = 0xFFFFFFFFi64;
      break;
    case JOINER_UNIVERSAL_ID_RESOLVED:
      this->HandleHSMCallback_OnExitClientState(this);
      gameLobbySessionHSM_base::HSM_OnExitState(this);
      result = 0xFFFFFFFFi64;
      break;
    case GETTING_SENDER_XUID_TIMEDOUT:
      this->HandleHSMCallback_ClientFrame(this);
      result = 0xFFFFFFFFi64;
      break;
    case INVITE_RESOLVE_INVITER_UNIVERSAL_ID_FAILED:
      result = 0i64;
      break;
    default:
      result = 4294967294i64;
      break;
  }
  return result;
}

/*
==============
gameLobbySessionHSM_base::HSM_StateFunction_st_adding_splitscreen_user_to_session_as_client
==============
*/
__int64 gameLobbySessionHSM_base::HSM_StateFunction_st_adding_splitscreen_user_to_session_as_client(gameLobbySessionHSM_base *this, gameLobbySessionHSM_base::eHSMEvents event)
{
  __int64 result; 

  switch ( event )
  {
    case ACCOUNT_REGISTRATION_CANCELLED:
      gameLobbySessionHSM_base::HSM_OnTransition(this, st_eula_declined);
      result = 0xFFFFFFFFi64;
      break;
    case INITIAL_LOCAL_CLIENT_ACTIVE_FENCE_FAILED:
      this->HandleHSMCallback_AddSplitscreenUserToSession_Failed(this);
      result = 0xFFFFFFFFi64;
      break;
    case INVITE_AUTHENTICATED:
      gameLobbySessionHSM_base::HSM_OnEnterState(this, st_account_registration_cancelled);
      this->HandleHSMCallback_AddSplitscreenUserToSession(this);
      goto $LN6_65;
    case JOINER_UNIVERSAL_ID_RESOLVED:
      gameLobbySessionHSM_base::HSM_OnExitState(this);
      result = 0xFFFFFFFFi64;
      break;
    case GETTING_SENDER_XUID_TIMEDOUT:
$LN6_65:
      result = 0xFFFFFFFFi64;
      break;
    case INVITE_RESOLVE_INVITER_UNIVERSAL_ID_FAILED:
      result = 13i64;
      break;
    default:
      result = 4294967294i64;
      break;
  }
  return result;
}

/*
==============
gameLobbySessionHSM_base::HSM_StateFunction_st_removing_splitscreen_user_from_session_as_client
==============
*/
__int64 gameLobbySessionHSM_base::HSM_StateFunction_st_removing_splitscreen_user_from_session_as_client(gameLobbySessionHSM_base *this, gameLobbySessionHSM_base::eHSMEvents event)
{
  __int64 result; 

  switch ( event )
  {
    case INVITE_ERROR_SUBSCRIPTION_REQUIRED:
      gameLobbySessionHSM_base::HSM_OnTransition(this, st_eula_declined);
      result = 0xFFFFFFFFi64;
      break;
    case INVITE_TU_REQUIRED:
      this->HandleHSMCallback_RemoveSplitscreenUserFromSession_Failed_ComError(this);
      result = 0xFFFFFFFFi64;
      break;
    case INVITE_AUTHENTICATED:
      gameLobbySessionHSM_base::HSM_OnEnterState(this, st_platform_subscription_required);
      this->HandleHSMCallback_RemoveSplitscreenUserFromSession(this);
      goto $LN6_66;
    case JOINER_UNIVERSAL_ID_RESOLVED:
      gameLobbySessionHSM_base::HSM_OnExitState(this);
      result = 0xFFFFFFFFi64;
      break;
    case GETTING_SENDER_XUID_TIMEDOUT:
$LN6_66:
      result = 0xFFFFFFFFi64;
      break;
    case INVITE_RESOLVE_INVITER_UNIVERSAL_ID_FAILED:
      result = 13i64;
      break;
    default:
      result = 4294967294i64;
      break;
  }
  return result;
}

/*
==============
gameLobbySessionHSM_base::gameLobbySessionHSM_base
==============
*/
void gameLobbySessionHSM_base::gameLobbySessionHSM_base(gameLobbySessionHSM_base *this)
{
  this->m_HSMCurrentState = __HSM_NO_STATE__;
  this->__vftable = (gameLobbySessionHSM_base_vtbl *)&gameLobbySessionHSM_base::`vftable';
  *(_QWORD *)&this->m_HSMPendingEventHeadIndex = 0i64;
  this->m_HSMPendingEventCount = 0;
  this->m_HSMVerboseDebug = 0;
}

/*
==============
gameLobbySessionHSM_base::~gameLobbySessionHSM_base
==============
*/
void gameLobbySessionHSM_base::~gameLobbySessionHSM_base(gameLobbySessionHSM_base *this)
{
  this->__vftable = (gameLobbySessionHSM_base_vtbl *)&gameLobbySessionHSM_base::`vftable';
  if ( this->m_HSMCurrentState != __HSM_NO_STATE__ )
  {
    while ( this->m_HSMStateStackSize > 0 )
      gameLobbySessionHSM_base::HSM_CallStateFunction(this, *(&this->m_HSMCurrentState + this->m_HSMStateStackSize), JOINER_UNIVERSAL_ID_RESOLVED);
    this->m_HSMCurrentState = __HSM_NO_STATE__;
  }
}

/*
==============
gameLobbySessionHSM_base::ConvertEventToString
==============
*/
const char *gameLobbySessionHSM_base::ConvertEventToString(gameLobbySessionHSM_base *this, gameLobbySessionHSM_base::eHSMEvents event)
{
  __int64 v3[38]; 

  if ( event == HSM_NO_EVENT )
    return "HSM_NO_EVENT";
  v3[0] = (__int64)"SESSIONS_GENERIC_COM_ERROR";
  v3[1] = (__int64)"CREATE_GAME_LOBBY_SESSION";
  v3[2] = (__int64)"JOIN_GAME_LOBBY_SESSION";
  v3[3] = (__int64)"LEAVE_PRIVATE_PARTY_SESSION";
  v3[4] = (__int64)"FOLLOW_PRIVATE_PARTY_HOST_TO_GAME_LOBBY";
  v3[5] = (__int64)"COM_ERROR_TRIGGERED";
  v3[6] = (__int64)"JOIN_GAME_LOBBY_SESSION_COMPLETE";
  v3[7] = (__int64)"JOIN_GAME_LOBBY_SESSION_FAILED";
  v3[8] = (__int64)"CREATE_GAME_LOBBY_SESSION_COMPLETE";
  v3[9] = (__int64)"CREATE_GAME_LOBBY_SESSION_FAILED";
  v3[10] = (__int64)"CREATE_GAME_LOBBY_SESSION_FAILED_NO_COM_ERROR";
  v3[11] = (__int64)"LEAVE_SESSION_COMPLETE";
  v3[12] = (__int64)"LEAVE_SESSION_FAILED";
  v3[13] = (__int64)"REMOVE_SPLITSCREEN_USER_FROM_SESSION";
  v3[14] = (__int64)"REMOVE_SPLITSCREEN_USER_FROM_SESSION_COMPLETE";
  v3[15] = (__int64)"REMOVE_SPLITSCREEN_USER_FROM_SESSION_FAILED";
  v3[16] = (__int64)"LEAVE_GAME_LOBBY_SESSION";
  v3[17] = (__int64)"UPDATE_SESSION_DATA";
  v3[18] = (__int64)"UPDATE_SESSION_INFO";
  v3[19] = (__int64)"ADD_SPLITSCREEN_USER_TO_SESSION";
  v3[20] = (__int64)"UPDATE_SESSION_DATA_COMPLETE";
  v3[21] = (__int64)"UPDATE_SESSION_DATA_FAILED";
  v3[22] = (__int64)"UPDATE_SESSION_DATA_FAILED_NO_COM_ERROR";
  v3[23] = (__int64)"UPDATE_SESSION_INFO_COMPLETE";
  v3[24] = (__int64)"UPDATE_SESSION_INFO_FAILED";
  v3[25] = (__int64)"UPDATE_SESSION_INFO_FAILED_NO_COM_ERROR";
  v3[26] = (__int64)"ADD_SPLITSCREEN_USER_TO_SESSION_COMPLETE";
  v3[27] = (__int64)"ADD_SPLITSCREEN_USER_TO_SESSION_FAILED";
  v3[28] = (__int64)"BECOME_HOST_AFTER_MIGRATION";
  v3[29] = (__int64)"HSM_EVENT_ON_ENTER";
  v3[30] = (__int64)"HSM_EVENT_ON_EXIT";
  v3[31] = (__int64)"HSM_EVENT_ON_UPDATE";
  v3[32] = (__int64)"HSM_EVENT_ON_TIMER_DO";
  v3[33] = (__int64)"HSM_EVENT_ON_TIMER_TRIGGER";
  v3[34] = (__int64)"HSM_EVENT_ON_TIMER_TRANSITION";
  v3[35] = (__int64)"HSM_EVENT_ON_EVENT_TRANSITION";
  v3[36] = (__int64)"HSM_EVENT_ON_RETURN_PARENT";
  return (const char *)v3[event];
}

/*
==============
gameLobbySessionHSM_base::ConvertStateToString
==============
*/
const char *gameLobbySessionHSM_base::ConvertStateToString(gameLobbySessionHSM_base *this, gameLobbySessionHSM_base::eHSMStates state)
{
  __int64 v3[16]; 

  if ( state == __HSM_EVENT_NOT_HANDLED__ )
    return "__HSM_EVENT_NOT_HANDLED__";
  if ( state == __HSM_NO_STATE__ )
    return "__HSM_NO_STATE__";
  v3[0] = (__int64)"gameLobbySessionHSM";
  v3[1] = (__int64)"st_inactive";
  v3[2] = (__int64)"st_generic_com_error_handling";
  v3[3] = (__int64)"st_following_private_party_host_to_game_lobby";
  v3[4] = (__int64)"st_creating_session";
  v3[5] = (__int64)"st_leaving_session";
  v3[6] = (__int64)"st_removing_splitscreen_user_from_session_for_leaving";
  v3[7] = (__int64)"st_host";
  v3[8] = (__int64)"st_updating_session_data";
  v3[9] = (__int64)"st_updating_session_info";
  v3[10] = (__int64)"st_adding_splitscreen_user_to_session_as_host";
  v3[11] = (__int64)"st_removing_splitscreen_user_from_session_as_host";
  v3[12] = (__int64)"st_joining_session";
  v3[13] = (__int64)"st_client";
  v3[14] = (__int64)"st_adding_splitscreen_user_to_session_as_client";
  v3[15] = (__int64)"st_removing_splitscreen_user_from_session_as_client";
  return (const char *)v3[state];
}

/*
==============
gameLobbySessionHSM_base::HSM_CallStateFunction
==============
*/
gameLobbySessionHSM_base::eHSMStates gameLobbySessionHSM_base::HSM_CallStateFunction(gameLobbySessionHSM_base *this, gameLobbySessionHSM_base::eHSMStates state, gameLobbySessionHSM_base::eHSMEvents event)
{
  __int64 v3; 
  const char *v6; 
  const char *v7; 
  char _Buffer[256]; 

  v3 = state;
  if ( (unsigned int)state > st_platform_subscription_required )
    return -1;
  if ( this->m_HSMVerboseDebug && event != GETTING_SENDER_XUID_TIMEDOUT && event != INVITE_RESOLVE_INVITER_UNIVERSAL_ID_FAILED )
  {
    v6 = gameLobbySessionHSM_base::ConvertEventToString(this, event);
    v7 = gameLobbySessionHSM_base::ConvertStateToString(this, (gameLobbySessionHSM_base::eHSMStates)v3);
    j_sprintf(_Buffer, "%s called for state %s with event %s\n", "gameLobbySessionHSM_base::HSM_CallStateFunction", v7, v6);
    this->HSM_PrintDebugInfo(this, _Buffer);
  }
  return gameLobbySessionHSM_base::m_HSMStateFunctionList[v3](this, event);
}

/*
==============
gameLobbySessionHSM_base::HSM_FindDivergentNodeIndexInPaths
==============
*/
__int64 gameLobbySessionHSM_base::HSM_FindDivergentNodeIndexInPaths(gameLobbySessionHSM_base *this, gameLobbySessionHSM_base::eHSMStates *pathA, gameLobbySessionHSM_base::eHSMStates *pathB)
{
  unsigned int v3; 
  __int64 v4; 
  signed __int64 v5; 

  v3 = 0;
  v4 = 0i64;
  v5 = (char *)pathA - (char *)pathB;
  while ( *(gameLobbySessionHSM_base::eHSMStates *)((char *)pathB + v5) == *pathB )
  {
    ++v3;
    ++v4;
    ++pathB;
    if ( v4 >= 10 )
      return 10i64;
  }
  return v3;
}

/*
==============
gameLobbySessionHSM_base::HSM_GetCurrentState
==============
*/
__int64 gameLobbySessionHSM_base::HSM_GetCurrentState(gameLobbySessionHSM_base *this)
{
  return (unsigned int)this->m_HSMCurrentState;
}

/*
==============
gameLobbySessionHSM_base::HSM_GetParentState
==============
*/
gameLobbySessionHSM_base::eHSMStates gameLobbySessionHSM_base::HSM_GetParentState(gameLobbySessionHSM_base *this, gameLobbySessionHSM_base::eHSMStates state)
{
  return gameLobbySessionHSM_base::HSM_CallStateFunction(this, state, INVITE_RESOLVE_INVITER_UNIVERSAL_ID_FAILED);
}

/*
==============
gameLobbySessionHSM_base::HSM_GetPathToState
==============
*/
__int64 gameLobbySessionHSM_base::HSM_GetPathToState(gameLobbySessionHSM_base *this, gameLobbySessionHSM_base::eHSMStates newHSMState, gameLobbySessionHSM_base::eHSMStates *statePathOut)
{
  int v3; 
  __int64 v4; 
  gameLobbySessionHSM_base::eHSMStates v8; 
  unsigned int v9; 
  gameLobbySessionHSM_base::eHSMStates v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  __int64 result; 
  __int64 v20[6]; 

  v3 = 0;
  v4 = 0i64;
  do
  {
    if ( v4 >= 10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\gamelobbysessionhsm_base.cpp", 412, ASSERT_TYPE_ASSERT, "(currentPathDepth < __HSM_MAX_STATE_DEPTH__)", (const char *)&queryFormat, "currentPathDepth < __HSM_MAX_STATE_DEPTH__") )
      __debugbreak();
    *((_DWORD *)&v20[1] + v4) = newHSMState;
    ++v3;
    ++v4;
    v8 = __HSM_NO_STATE__;
    if ( (unsigned int)newHSMState <= st_platform_subscription_required )
      v8 = gameLobbySessionHSM_base::m_HSMStateFunctionList[newHSMState](this, INVITE_RESOLVE_INVITER_UNIVERSAL_ID_FAILED);
    newHSMState = v8;
  }
  while ( v8 != __HSM_NO_STATE__ );
  v9 = v3;
  if ( v3 <= 0 )
    v10 = __HSM_NO_STATE__;
  else
    v10 = *((_DWORD *)&v20[1] + --v3);
  *statePathOut = v10;
  if ( v3 <= 0 )
    v11 = -1;
  else
    v11 = *((_DWORD *)&v20[1] + --v3);
  *((_DWORD *)statePathOut + 1) = v11;
  if ( v3 <= 0 )
    v12 = -1;
  else
    v12 = *((_DWORD *)&v20[1] + --v3);
  *((_DWORD *)statePathOut + 2) = v12;
  if ( v3 <= 0 )
    v13 = -1;
  else
    v13 = *((_DWORD *)&v20[1] + --v3);
  *((_DWORD *)statePathOut + 3) = v13;
  if ( v3 <= 0 )
    v14 = -1;
  else
    v14 = *((_DWORD *)&v20[1] + --v3);
  *((_DWORD *)statePathOut + 4) = v14;
  if ( v3 <= 0 )
    v15 = -1;
  else
    v15 = *((_DWORD *)&v20[1] + --v3);
  *((_DWORD *)statePathOut + 5) = v15;
  if ( v3 <= 0 )
    v16 = -1;
  else
    v16 = *((_DWORD *)&v20[1] + --v3);
  *((_DWORD *)statePathOut + 6) = v16;
  if ( v3 <= 0 )
    v17 = -1;
  else
    v17 = *((_DWORD *)&v20[1] + --v3);
  *((_DWORD *)statePathOut + 7) = v17;
  if ( v3 <= 0 )
    v18 = -1;
  else
    v18 = *((_DWORD *)&v20[1] + --v3);
  *((_DWORD *)statePathOut + 8) = v18;
  result = v9;
  if ( v3 <= 0 )
    *((_DWORD *)statePathOut + 9) = -1;
  else
    statePathOut[9] = *((gameLobbySessionHSM_base::eHSMStates *)v20 + v3 + 1);
  return result;
}

/*
==============
gameLobbySessionHSM_base::HSM_Init
==============
*/
void gameLobbySessionHSM_base::HSM_Init(gameLobbySessionHSM_base *this)
{
  int v2; 
  const char *v3; 
  unsigned int PathToState; 
  __int64 v5; 
  unsigned int m_HSMStateStackSize; 
  __int64 v7; 
  __int64 v8; 
  gameLobbySessionHSM_base::eHSMStates *v9; 
  __int64 v10; 
  gameLobbySessionHSM_base::eHSMStates v11; 
  __int64 v12; 
  gameLobbySessionHSM_base::eHSMStates *v13; 
  gameLobbySessionHSM_base::eHSMStates v14; 
  gameLobbySessionHSM_base::eHSMStates statePathOut[12]; 
  char _Buffer[256]; 

  if ( this->m_HSMCurrentState == __HSM_NO_STATE__ )
  {
    v2 = 0;
    *(_QWORD *)&this->m_HSMPendingEventCount = 0i64;
    *(_QWORD *)this->m_HSMStateStack = -1i64;
    *(_QWORD *)&this->m_HSMStateStack[2] = -1i64;
    *(_QWORD *)&this->m_HSMStateStack[4] = -1i64;
    *(_QWORD *)&this->m_HSMStateStack[6] = -1i64;
    *(_QWORD *)&this->m_HSMStateStack[8] = -1i64;
    *(_QWORD *)this->m_HSMEvents = -1i64;
    *(_QWORD *)&this->m_HSMEvents[2] = -1i64;
    *(_QWORD *)&this->m_HSMEvents[4] = -1i64;
    *(_QWORD *)&this->m_HSMEvents[6] = -1i64;
    *(_QWORD *)&this->m_HSMEvents[8] = -1i64;
    *(_QWORD *)&this->m_HSMEvents[10] = -1i64;
    *(_QWORD *)&this->m_HSMEvents[12] = -1i64;
    *(_QWORD *)&this->m_HSMEvents[14] = -1i64;
    if ( this->m_HSMVerboseDebug )
    {
      v3 = gameLobbySessionHSM_base::ConvertStateToString(this, this->m_HSMCurrentState);
      j_sprintf(_Buffer, "%s called, going from %s to %s\n", "gameLobbySessionHSM_base::HSM_OnTransition", v3, "st_inactive");
      this->HSM_PrintDebugInfo(this, _Buffer);
    }
    PathToState = gameLobbySessionHSM_base::HSM_GetPathToState(this, st_invite_none, statePathOut);
    v5 = 0i64;
    while ( *(gameLobbySessionHSM_base::eHSMStates *)((char *)&statePathOut[v5 + 4] + (char *)this - (char *)statePathOut) == statePathOut[v5] )
    {
      ++v2;
      if ( ++v5 >= 10 )
      {
        v2 = 10;
        break;
      }
    }
    m_HSMStateStackSize = this->m_HSMStateStackSize;
    v7 = (int)(m_HSMStateStackSize - 1);
    v8 = v2;
    if ( v7 >= v2 )
    {
      v9 = &this->m_HSMStateStack[v7];
      v10 = v7 - v8 + 1;
      do
      {
        v11 = *v9--;
        gameLobbySessionHSM_base::HSM_CallStateFunction(this, v11, JOINER_UNIVERSAL_ID_RESOLVED);
        --v10;
      }
      while ( v10 );
      m_HSMStateStackSize = this->m_HSMStateStackSize;
    }
    if ( m_HSMStateStackSize < PathToState )
    {
      v12 = PathToState - m_HSMStateStackSize;
      v13 = &statePathOut[m_HSMStateStackSize];
      do
      {
        v14 = *v13++;
        gameLobbySessionHSM_base::HSM_CallStateFunction(this, v14, INVITE_AUTHENTICATED);
        --v12;
      }
      while ( v12 );
    }
  }
}

/*
==============
gameLobbySessionHSM_base::HSM_IsActive
==============
*/
bool gameLobbySessionHSM_base::HSM_IsActive(gameLobbySessionHSM_base *this)
{
  return this->m_HSMCurrentState <= (unsigned int)st_platform_subscription_required;
}

/*
==============
gameLobbySessionHSM_base::HSM_IsInState
==============
*/
char gameLobbySessionHSM_base::HSM_IsInState(gameLobbySessionHSM_base *this, gameLobbySessionHSM_base::eHSMStates state)
{
  __int64 m_HSMStateStackSize; 
  __int64 v3; 
  gameLobbySessionHSM_base::eHSMStates *i; 

  m_HSMStateStackSize = this->m_HSMStateStackSize;
  if ( m_HSMStateStackSize <= 0 )
    return 0;
  v3 = 0i64;
  for ( i = this->m_HSMStateStack; *i != state; ++i )
  {
    if ( ++v3 >= m_HSMStateStackSize )
      return 0;
  }
  return 1;
}

/*
==============
gameLobbySessionHSM_base::HSM_OnEnterState
==============
*/
void gameLobbySessionHSM_base::HSM_OnEnterState(gameLobbySessionHSM_base *this, gameLobbySessionHSM_base::eHSMStates newState)
{
  bool m_HSMVerboseDebug; 
  __int64 m_HSMStateStackSize; 
  gameLobbySessionHSM_base::eHSMStates v6; 
  int v7; 
  const char *v8; 
  char *fmt; 
  char _Buffer[256]; 

  if ( this->m_HSMStateStackSize > 10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\gamelobbysessionhsm_base.cpp", 242, ASSERT_TYPE_ASSERT, "(m_HSMStateStackSize <= __HSM_MAX_STATE_DEPTH__)", (const char *)&queryFormat, "m_HSMStateStackSize <= __HSM_MAX_STATE_DEPTH__") )
    __debugbreak();
  this->m_HSMStateStack[this->m_HSMStateStackSize] = newState;
  m_HSMVerboseDebug = this->m_HSMVerboseDebug;
  m_HSMStateStackSize = this->m_HSMStateStackSize;
  v6 = this->m_HSMStateStack[m_HSMStateStackSize];
  v7 = m_HSMStateStackSize + 1;
  this->m_HSMStateStackSize = m_HSMStateStackSize + 1;
  this->m_HSMCurrentState = v6;
  if ( m_HSMVerboseDebug )
  {
    v8 = gameLobbySessionHSM_base::ConvertStateToString(this, newState);
    LODWORD(fmt) = v7;
    j_sprintf(_Buffer, "%s called for state %s new stack size %d\n", "gameLobbySessionHSM_base::HSM_OnEnterState", v8, fmt);
    this->HSM_PrintDebugInfo(this, _Buffer);
  }
}

/*
==============
gameLobbySessionHSM_base::HSM_OnEvent
==============
*/
void gameLobbySessionHSM_base::HSM_OnEvent(gameLobbySessionHSM_base *this, gameLobbySessionHSM_base::eHSMEvents event)
{
  __int64 v4; 
  gameLobbySessionHSM_base::eHSMStates *v5; 
  __int64 v6; 
  const char *v7; 
  const char *v8; 
  char _Buffer[256]; 

  if ( (unsigned int)event <= INVITE_RESOLVE_INVITER_ID_TIMEOUT )
  {
    v4 = this->m_HSMStateStackSize - 1;
    v5 = &this->m_HSMStateStack[v4];
    do
    {
      if ( v4 < 0 )
        break;
      v6 = *(int *)v5;
      --v4;
      --v5;
      if ( (unsigned int)v6 > 0xF )
        break;
      if ( this->m_HSMVerboseDebug && event != GETTING_SENDER_XUID_TIMEDOUT && event != INVITE_RESOLVE_INVITER_UNIVERSAL_ID_FAILED )
      {
        v7 = gameLobbySessionHSM_base::ConvertEventToString(this, event);
        v8 = gameLobbySessionHSM_base::ConvertStateToString(this, (gameLobbySessionHSM_base::eHSMStates)v6);
        j_sprintf(_Buffer, "%s called for state %s with event %s\n", "gameLobbySessionHSM_base::HSM_CallStateFunction", v8, v7);
        this->HSM_PrintDebugInfo(this, _Buffer);
      }
    }
    while ( gameLobbySessionHSM_base::m_HSMStateFunctionList[v6](this, event) == __HSM_EVENT_NOT_HANDLED__ );
  }
}

/*
==============
gameLobbySessionHSM_base::HSM_OnExitState
==============
*/
void gameLobbySessionHSM_base::HSM_OnExitState(gameLobbySessionHSM_base *this)
{
  int v2; 
  const char *v3; 
  __int64 m_HSMStateStackSize; 
  __int64 v5; 
  char *fmt; 
  char _Buffer[256]; 

  if ( this->m_HSMStateStackSize <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\gamelobbysessionhsm_base.cpp", 223, ASSERT_TYPE_ASSERT, "(m_HSMStateStackSize > 0)", (const char *)&queryFormat, "m_HSMStateStackSize > 0") )
    __debugbreak();
  if ( this->m_HSMVerboseDebug )
  {
    v2 = this->m_HSMStateStackSize - 1;
    v3 = gameLobbySessionHSM_base::ConvertStateToString(this, this->m_HSMCurrentState);
    LODWORD(fmt) = v2;
    j_sprintf(_Buffer, "%s called for state %s new stack size %d\n", "gameLobbySessionHSM_base::HSM_OnExitState", v3, fmt);
    this->HSM_PrintDebugInfo(this, _Buffer);
  }
  m_HSMStateStackSize = this->m_HSMStateStackSize;
  this->m_HSMStateStackSize = m_HSMStateStackSize - 1;
  *((_DWORD *)&this->m_HSMCurrentState + m_HSMStateStackSize) = -1;
  v5 = this->m_HSMStateStackSize;
  if ( (int)v5 <= 0 )
    this->m_HSMCurrentState = __HSM_NO_STATE__;
  else
    this->m_HSMCurrentState = *((_DWORD *)&this->m_HSMCurrentState + v5);
}

/*
==============
gameLobbySessionHSM_base::HSM_OnTransition
==============
*/
void gameLobbySessionHSM_base::HSM_OnTransition(gameLobbySessionHSM_base *this, gameLobbySessionHSM_base::eHSMStates state)
{
  const char *v4; 
  const char *v5; 
  int PathToState; 
  int v7; 
  unsigned int v8; 
  __int64 v9; 
  unsigned int m_HSMStateStackSize; 
  __int64 v11; 
  gameLobbySessionHSM_base::eHSMStates *v12; 
  __int64 v13; 
  gameLobbySessionHSM_base::eHSMStates v14; 
  __int64 v15; 
  gameLobbySessionHSM_base::eHSMStates *v16; 
  gameLobbySessionHSM_base::eHSMStates v17; 
  gameLobbySessionHSM_base::eHSMStates statePathOut[12]; 
  char _Buffer[256]; 

  if ( this->m_HSMVerboseDebug )
  {
    v4 = gameLobbySessionHSM_base::ConvertStateToString(this, state);
    v5 = gameLobbySessionHSM_base::ConvertStateToString(this, this->m_HSMCurrentState);
    j_sprintf(_Buffer, "%s called, going from %s to %s\n", "gameLobbySessionHSM_base::HSM_OnTransition", v5, v4);
    this->HSM_PrintDebugInfo(this, _Buffer);
  }
  PathToState = gameLobbySessionHSM_base::HSM_GetPathToState(this, state, statePathOut);
  v7 = 0;
  v8 = PathToState;
  v9 = 0i64;
  while ( *(gameLobbySessionHSM_base::eHSMStates *)((char *)&statePathOut[v9 + 4] + (char *)this - (char *)statePathOut) == statePathOut[v9] )
  {
    ++v7;
    if ( ++v9 >= 10 )
    {
      v7 = 10;
      break;
    }
  }
  m_HSMStateStackSize = this->m_HSMStateStackSize;
  v11 = (int)(m_HSMStateStackSize - 1);
  if ( v11 >= v7 )
  {
    v12 = &this->m_HSMStateStack[v11];
    v13 = v11 - v7 + 1;
    do
    {
      v14 = *v12--;
      gameLobbySessionHSM_base::HSM_CallStateFunction(this, v14, JOINER_UNIVERSAL_ID_RESOLVED);
      --v13;
    }
    while ( v13 );
    m_HSMStateStackSize = this->m_HSMStateStackSize;
  }
  if ( m_HSMStateStackSize < v8 )
  {
    v15 = v8 - m_HSMStateStackSize;
    v16 = &statePathOut[m_HSMStateStackSize];
    do
    {
      v17 = *v16++;
      gameLobbySessionHSM_base::HSM_CallStateFunction(this, v17, INVITE_AUTHENTICATED);
      --v15;
    }
    while ( v15 );
  }
}

/*
==============
gameLobbySessionHSM_base::HSM_ProcessEvents
==============
*/
void gameLobbySessionHSM_base::HSM_ProcessEvents(gameLobbySessionHSM_base *this)
{
  __int64 m_HSMPendingEventHeadIndex; 
  gameLobbySessionHSM_base::eHSMEvents v3; 
  int v4; 
  __int64 v5; 
  gameLobbySessionHSM_base::eHSMStates *v6; 
  gameLobbySessionHSM_base::eHSMStates v7; 

  while ( this->m_HSMPendingEventCount > 0 )
  {
    m_HSMPendingEventHeadIndex = this->m_HSMPendingEventHeadIndex;
    v3 = this->m_HSMEvents[m_HSMPendingEventHeadIndex];
    this->m_HSMEvents[m_HSMPendingEventHeadIndex] = HSM_NO_EVENT;
    v4 = ++this->m_HSMPendingEventHeadIndex;
    --this->m_HSMPendingEventCount;
    if ( v4 >= 16 )
      v4 = 0;
    this->m_HSMPendingEventHeadIndex = v4;
    if ( (unsigned int)v3 <= INVITE_RESOLVE_INVITER_ID_TIMEOUT )
    {
      v5 = this->m_HSMStateStackSize - 1;
      v6 = &this->m_HSMStateStack[v5];
      do
      {
        if ( v5 < 0 )
          break;
        v7 = *v6--;
        --v5;
      }
      while ( gameLobbySessionHSM_base::HSM_CallStateFunction(this, v7, v3) == __HSM_EVENT_NOT_HANDLED__ );
    }
  }
}

/*
==============
gameLobbySessionHSM_base::HSM_Shutdown
==============
*/
void gameLobbySessionHSM_base::HSM_Shutdown(gameLobbySessionHSM_base *this)
{
  int i; 
  __int64 v3; 
  const char *v4; 
  const char *v5; 
  char _Buffer[256]; 

  if ( this->m_HSMCurrentState != __HSM_NO_STATE__ )
  {
    for ( i = this->m_HSMStateStackSize; i > 0; i = this->m_HSMStateStackSize )
    {
      v3 = *((int *)&this->m_HSMCurrentState + i);
      if ( (unsigned int)v3 <= 0xF )
      {
        if ( this->m_HSMVerboseDebug )
        {
          v4 = gameLobbySessionHSM_base::ConvertEventToString(this, JOINER_UNIVERSAL_ID_RESOLVED);
          v5 = gameLobbySessionHSM_base::ConvertStateToString(this, (gameLobbySessionHSM_base::eHSMStates)v3);
          j_sprintf(_Buffer, "%s called for state %s with event %s\n", "gameLobbySessionHSM_base::HSM_CallStateFunction", v5, v4);
          this->HSM_PrintDebugInfo(this, _Buffer);
        }
        gameLobbySessionHSM_base::m_HSMStateFunctionList[v3](this, JOINER_UNIVERSAL_ID_RESOLVED);
      }
    }
    this->m_HSMCurrentState = __HSM_NO_STATE__;
  }
}

/*
==============
gameLobbySessionHSM_base::HSM_StartTimer
==============
*/
void gameLobbySessionHSM_base::HSM_StartTimer(gameLobbySessionHSM_base *this, gameLobbySessionHSM_base::eHSMEvents timerId, int expirationTime)
{
  ;
}

/*
==============
gameLobbySessionHSM_base::HSM_StopTimer
==============
*/
void gameLobbySessionHSM_base::HSM_StopTimer(gameLobbySessionHSM_base *this, gameLobbySessionHSM_base::eHSMEvents timerId)
{
  ;
}

/*
==============
gameLobbySessionHSM_base::HSM_TriggerEvent
==============
*/
void gameLobbySessionHSM_base::HSM_TriggerEvent(gameLobbySessionHSM_base *this, gameLobbySessionHSM_base::eHSMEvents event)
{
  const char *v4; 
  const char *v5; 
  int m_HSMPendingEventCount; 
  __int64 v7; 
  char _Buffer[256]; 

  if ( (unsigned int)event <= INVITE_RESOLVE_INVITER_ID_TIMEOUT )
  {
    if ( this->m_HSMVerboseDebug )
    {
      v4 = gameLobbySessionHSM_base::ConvertStateToString(this, this->m_HSMCurrentState);
      v5 = gameLobbySessionHSM_base::ConvertEventToString(this, event);
      j_sprintf(_Buffer, "%s with event %s called while in state %s\n", "gameLobbySessionHSM_base::HSM_TriggerEvent", v5, v4);
      this->HSM_PrintDebugInfo(this, _Buffer);
    }
    m_HSMPendingEventCount = this->m_HSMPendingEventCount;
    v7 = (m_HSMPendingEventCount + this->m_HSMPendingEventHeadIndex) & 0x8000000F;
    if ( m_HSMPendingEventCount + this->m_HSMPendingEventHeadIndex < 0 )
      v7 = ((unsigned __int8)(((m_HSMPendingEventCount + LOBYTE(this->m_HSMPendingEventHeadIndex)) & 0xF) - 1) | 0xFFFFFFF0) + 1;
    if ( m_HSMPendingEventCount >= 16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\gamelobbysessionhsm_base.cpp", 293, ASSERT_TYPE_ASSERT, "(m_HSMPendingEventCount < __HSM_MAX_EVENTS_PER_FRAME__)", (const char *)&queryFormat, "m_HSMPendingEventCount < __HSM_MAX_EVENTS_PER_FRAME__") )
      __debugbreak();
    if ( this->m_HSMEvents[v7] != HSM_NO_EVENT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\gamelobbysessionhsm_base.cpp", 297, ASSERT_TYPE_ASSERT, "(m_HSMEvents[ nextUnusedEventIndex ] == HSM_NO_EVENT)", (const char *)&queryFormat, "m_HSMEvents[ nextUnusedEventIndex ] == HSM_NO_EVENT") )
      __debugbreak();
    this->m_HSMEvents[v7] = event;
    ++this->m_HSMPendingEventCount;
  }
}

/*
==============
gameLobbySessionHSM_base::HSM_Update
==============
*/
void gameLobbySessionHSM_base::HSM_Update(gameLobbySessionHSM_base *this, int dt)
{
  __int64 m_HSMPendingEventHeadIndex; 
  gameLobbySessionHSM_base::eHSMEvents v4; 
  int v5; 

  if ( this->m_HSMCurrentState != __HSM_NO_STATE__ && this->m_HSMPendingEventCount > 0 )
  {
    do
    {
      m_HSMPendingEventHeadIndex = this->m_HSMPendingEventHeadIndex;
      v4 = this->m_HSMEvents[m_HSMPendingEventHeadIndex];
      this->m_HSMEvents[m_HSMPendingEventHeadIndex] = HSM_NO_EVENT;
      v5 = ++this->m_HSMPendingEventHeadIndex;
      --this->m_HSMPendingEventCount;
      if ( v5 >= 16 )
        v5 = 0;
      this->m_HSMPendingEventHeadIndex = v5;
      gameLobbySessionHSM_base::HSM_OnEvent(this, v4);
    }
    while ( this->m_HSMPendingEventCount > 0 );
  }
  gameLobbySessionHSM_base::HSM_OnEvent(this, GETTING_SENDER_XUID_TIMEDOUT);
}

/*
==============
gameLobbySessionHSM_base::HSM_UpdateTimers
==============
*/
void gameLobbySessionHSM_base::HSM_UpdateTimers(gameLobbySessionHSM_base *this, int dt)
{
  ;
}

