/*
==============
privatePartySessionHSM_base::HSM_StateFunction_st_generic_com_error_handling
==============
*/

privatePartySessionHSM_base::eHSMStates __fastcall privatePartySessionHSM_base::HSM_StateFunction_st_generic_com_error_handling(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMEvents event)
{
  return ?HSM_StateFunction_st_generic_com_error_handling@privatePartySessionHSM_base@@AEAA?AW4eHSMStates@1@W4eHSMEvents@1@@Z(this, event);
}

/*
==============
privatePartySessionHSM_base::HSM_CallStateFunction
==============
*/

privatePartySessionHSM_base::eHSMStates __fastcall privatePartySessionHSM_base::HSM_CallStateFunction(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMStates state, privatePartySessionHSM_base::eHSMEvents event)
{
  return ?HSM_CallStateFunction@privatePartySessionHSM_base@@AEAA?AW4eHSMStates@1@W421@W4eHSMEvents@1@@Z(this, state, event);
}

/*
==============
privatePartySessionHSM_base::HSM_StateFunction_st_cleanup_sessions
==============
*/

privatePartySessionHSM_base::eHSMStates __fastcall privatePartySessionHSM_base::HSM_StateFunction_st_cleanup_sessions(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMEvents event)
{
  return ?HSM_StateFunction_st_cleanup_sessions@privatePartySessionHSM_base@@AEAA?AW4eHSMStates@1@W4eHSMEvents@1@@Z(this, event);
}

/*
==============
privatePartySessionHSM_base::HSM_GetCurrentState
==============
*/

privatePartySessionHSM_base::eHSMStates __fastcall privatePartySessionHSM_base::HSM_GetCurrentState(privatePartySessionHSM_base *this)
{
  return ?HSM_GetCurrentState@privatePartySessionHSM_base@@QEAA?AW4eHSMStates@1@XZ(this);
}

/*
==============
privatePartySessionHSM_base::HSM_UpdateTimers
==============
*/

void __fastcall privatePartySessionHSM_base::HSM_UpdateTimers(privatePartySessionHSM_base *this, int dt)
{
  ?HSM_UpdateTimers@privatePartySessionHSM_base@@AEAAXH@Z(this, dt);
}

/*
==============
privatePartySessionHSM_base::HSM_StateFunction_st_removing_splitscreen_user_from_session_for_leaving
==============
*/

privatePartySessionHSM_base::eHSMStates __fastcall privatePartySessionHSM_base::HSM_StateFunction_st_removing_splitscreen_user_from_session_for_leaving(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMEvents event)
{
  return ?HSM_StateFunction_st_removing_splitscreen_user_from_session_for_leaving@privatePartySessionHSM_base@@AEAA?AW4eHSMStates@1@W4eHSMEvents@1@@Z(this, event);
}

/*
==============
privatePartySessionHSM_base::HSM_ProcessEvents
==============
*/

void __fastcall privatePartySessionHSM_base::HSM_ProcessEvents(privatePartySessionHSM_base *this)
{
  ?HSM_ProcessEvents@privatePartySessionHSM_base@@AEAAXXZ(this);
}

/*
==============
privatePartySessionHSM_base::HSM_GetParentState
==============
*/

privatePartySessionHSM_base::eHSMStates __fastcall privatePartySessionHSM_base::HSM_GetParentState(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMStates state)
{
  return ?HSM_GetParentState@privatePartySessionHSM_base@@AEAA?AW4eHSMStates@1@W421@@Z(this, state);
}

/*
==============
privatePartySessionHSM_base::HSM_OnTransition
==============
*/

void __fastcall privatePartySessionHSM_base::HSM_OnTransition(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMStates state)
{
  ?HSM_OnTransition@privatePartySessionHSM_base@@AEAAXW4eHSMStates@1@@Z(this, state);
}

/*
==============
privatePartySessionHSM_base::HSM_GetPathToState
==============
*/

int __fastcall privatePartySessionHSM_base::HSM_GetPathToState(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMStates newHSMState, privatePartySessionHSM_base::eHSMStates *statePathOut)
{
  return ?HSM_GetPathToState@privatePartySessionHSM_base@@AEAAHW4eHSMStates@1@PEAW421@@Z(this, newHSMState, statePathOut);
}

/*
==============
privatePartySessionHSM_base::HSM_StartTimer
==============
*/

void __fastcall privatePartySessionHSM_base::HSM_StartTimer(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMEvents timerId, int expirationTime)
{
  ?HSM_StartTimer@privatePartySessionHSM_base@@AEAAXW4eHSMEvents@1@H@Z(this, timerId, expirationTime);
}

/*
==============
privatePartySessionHSM_base::ConvertEventToString
==============
*/

const char *__fastcall privatePartySessionHSM_base::ConvertEventToString(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMEvents event)
{
  return ?ConvertEventToString@privatePartySessionHSM_base@@IEAAPEBDW4eHSMEvents@1@@Z(this, event);
}

/*
==============
privatePartySessionHSM_base::HSM_Shutdown
==============
*/

void __fastcall privatePartySessionHSM_base::HSM_Shutdown(privatePartySessionHSM_base *this)
{
  ?HSM_Shutdown@privatePartySessionHSM_base@@IEAAXXZ(this);
}

/*
==============
privatePartySessionHSM_base::~privatePartySessionHSM_base
==============
*/

void __fastcall privatePartySessionHSM_base::~privatePartySessionHSM_base(privatePartySessionHSM_base *this)
{
  ??1privatePartySessionHSM_base@@UEAA@XZ(this);
}

/*
==============
privatePartySessionHSM_base::HSM_StateFunction_st_client_awaking_session
==============
*/

privatePartySessionHSM_base::eHSMStates __fastcall privatePartySessionHSM_base::HSM_StateFunction_st_client_awaking_session(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMEvents event)
{
  return ?HSM_StateFunction_st_client_awaking_session@privatePartySessionHSM_base@@AEAA?AW4eHSMStates@1@W4eHSMEvents@1@@Z(this, event);
}

/*
==============
privatePartySessionHSM_base::HSM_StateFunction_st_host_sleep
==============
*/

privatePartySessionHSM_base::eHSMStates __fastcall privatePartySessionHSM_base::HSM_StateFunction_st_host_sleep(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMEvents event)
{
  return ?HSM_StateFunction_st_host_sleep@privatePartySessionHSM_base@@AEAA?AW4eHSMStates@1@W4eHSMEvents@1@@Z(this, event);
}

/*
==============
privatePartySessionHSM_base::ConvertStateToString
==============
*/

const char *__fastcall privatePartySessionHSM_base::ConvertStateToString(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMStates state)
{
  return ?ConvertStateToString@privatePartySessionHSM_base@@IEAAPEBDW4eHSMStates@1@@Z(this, state);
}

/*
==============
privatePartySessionHSM_base::HSM_OnEvent
==============
*/

void __fastcall privatePartySessionHSM_base::HSM_OnEvent(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMEvents event)
{
  ?HSM_OnEvent@privatePartySessionHSM_base@@AEAAXW4eHSMEvents@1@@Z(this, event);
}

/*
==============
privatePartySessionHSM_base::HSM_Update
==============
*/

void __fastcall privatePartySessionHSM_base::HSM_Update(privatePartySessionHSM_base *this, int dt)
{
  ?HSM_Update@privatePartySessionHSM_base@@IEAAXH@Z(this, dt);
}

/*
==============
privatePartySessionHSM_base::HSM_StateFunction_st_updating_session_info
==============
*/

privatePartySessionHSM_base::eHSMStates __fastcall privatePartySessionHSM_base::HSM_StateFunction_st_updating_session_info(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMEvents event)
{
  return ?HSM_StateFunction_st_updating_session_info@privatePartySessionHSM_base@@AEAA?AW4eHSMStates@1@W4eHSMEvents@1@@Z(this, event);
}

/*
==============
privatePartySessionHSM_base::HSM_OnExitState
==============
*/

void __fastcall privatePartySessionHSM_base::HSM_OnExitState(privatePartySessionHSM_base *this)
{
  ?HSM_OnExitState@privatePartySessionHSM_base@@AEAAXXZ(this);
}

/*
==============
privatePartySessionHSM_base::HSM_StateFunction_st_client_sleep
==============
*/

privatePartySessionHSM_base::eHSMStates __fastcall privatePartySessionHSM_base::HSM_StateFunction_st_client_sleep(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMEvents event)
{
  return ?HSM_StateFunction_st_client_sleep@privatePartySessionHSM_base@@AEAA?AW4eHSMStates@1@W4eHSMEvents@1@@Z(this, event);
}

/*
==============
privatePartySessionHSM_base::HSM_StateFunction_st_host
==============
*/

privatePartySessionHSM_base::eHSMStates __fastcall privatePartySessionHSM_base::HSM_StateFunction_st_host(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMEvents event)
{
  return ?HSM_StateFunction_st_host@privatePartySessionHSM_base@@AEAA?AW4eHSMStates@1@W4eHSMEvents@1@@Z(this, event);
}

/*
==============
privatePartySessionHSM_base::HSM_StateFunction_st_updating_session_data
==============
*/

privatePartySessionHSM_base::eHSMStates __fastcall privatePartySessionHSM_base::HSM_StateFunction_st_updating_session_data(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMEvents event)
{
  return ?HSM_StateFunction_st_updating_session_data@privatePartySessionHSM_base@@AEAA?AW4eHSMStates@1@W4eHSMEvents@1@@Z(this, event);
}

/*
==============
privatePartySessionHSM_base::HSM_StateFunction_st_client
==============
*/

privatePartySessionHSM_base::eHSMStates __fastcall privatePartySessionHSM_base::HSM_StateFunction_st_client(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMEvents event)
{
  return ?HSM_StateFunction_st_client@privatePartySessionHSM_base@@AEAA?AW4eHSMStates@1@W4eHSMEvents@1@@Z(this, event);
}

/*
==============
privatePartySessionHSM_base::HSM_StateFunction_privatePartySessionHSM
==============
*/

privatePartySessionHSM_base::eHSMStates __fastcall privatePartySessionHSM_base::HSM_StateFunction_privatePartySessionHSM(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMEvents event)
{
  return ?HSM_StateFunction_privatePartySessionHSM@privatePartySessionHSM_base@@AEAA?AW4eHSMStates@1@W4eHSMEvents@1@@Z(this, event);
}

/*
==============
privatePartySessionHSM_base::HSM_FindDivergentNodeIndexInPaths
==============
*/

int __fastcall privatePartySessionHSM_base::HSM_FindDivergentNodeIndexInPaths(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMStates *pathA, privatePartySessionHSM_base::eHSMStates *pathB)
{
  return ?HSM_FindDivergentNodeIndexInPaths@privatePartySessionHSM_base@@AEAAHPEAW4eHSMStates@1@0@Z(this, pathA, pathB);
}

/*
==============
privatePartySessionHSM_base::HSM_StateFunction_st_host_waiting_for_game_lobby_session_to_shutdown
==============
*/

privatePartySessionHSM_base::eHSMStates __fastcall privatePartySessionHSM_base::HSM_StateFunction_st_host_waiting_for_game_lobby_session_to_shutdown(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMEvents event)
{
  return ?HSM_StateFunction_st_host_waiting_for_game_lobby_session_to_shutdown@privatePartySessionHSM_base@@AEAA?AW4eHSMStates@1@W4eHSMEvents@1@@Z(this, event);
}

/*
==============
privatePartySessionHSM_base::HSM_Init
==============
*/

void __fastcall privatePartySessionHSM_base::HSM_Init(privatePartySessionHSM_base *this)
{
  ?HSM_Init@privatePartySessionHSM_base@@IEAAXXZ(this);
}

/*
==============
privatePartySessionHSM_base::HSM_TriggerEvent
==============
*/

void __fastcall privatePartySessionHSM_base::HSM_TriggerEvent(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMEvents event)
{
  ?HSM_TriggerEvent@privatePartySessionHSM_base@@QEAAXW4eHSMEvents@1@@Z(this, event);
}

/*
==============
privatePartySessionHSM_base::HSM_OnEnterState
==============
*/

void __fastcall privatePartySessionHSM_base::HSM_OnEnterState(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMStates newState)
{
  ?HSM_OnEnterState@privatePartySessionHSM_base@@AEAAXW4eHSMStates@1@@Z(this, newState);
}

/*
==============
privatePartySessionHSM_base::HSM_IsInState
==============
*/

bool __fastcall privatePartySessionHSM_base::HSM_IsInState(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMStates state)
{
  return ?HSM_IsInState@privatePartySessionHSM_base@@QEAA_NW4eHSMStates@1@@Z(this, state);
}

/*
==============
privatePartySessionHSM_base::privatePartySessionHSM_base
==============
*/

void __fastcall privatePartySessionHSM_base::privatePartySessionHSM_base(privatePartySessionHSM_base *this)
{
  ??0privatePartySessionHSM_base@@QEAA@XZ(this);
}

/*
==============
privatePartySessionHSM_base::HSM_StateFunction_st_joining_session
==============
*/

privatePartySessionHSM_base::eHSMStates __fastcall privatePartySessionHSM_base::HSM_StateFunction_st_joining_session(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMEvents event)
{
  return ?HSM_StateFunction_st_joining_session@privatePartySessionHSM_base@@AEAA?AW4eHSMStates@1@W4eHSMEvents@1@@Z(this, event);
}

/*
==============
privatePartySessionHSM_base::HSM_StateFunction_st_inactive
==============
*/

privatePartySessionHSM_base::eHSMStates __fastcall privatePartySessionHSM_base::HSM_StateFunction_st_inactive(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMEvents event)
{
  return ?HSM_StateFunction_st_inactive@privatePartySessionHSM_base@@AEAA?AW4eHSMStates@1@W4eHSMEvents@1@@Z(this, event);
}

/*
==============
privatePartySessionHSM_base::HSM_IsActive
==============
*/

bool __fastcall privatePartySessionHSM_base::HSM_IsActive(privatePartySessionHSM_base *this)
{
  return ?HSM_IsActive@privatePartySessionHSM_base@@IEAA_NXZ(this);
}

/*
==============
privatePartySessionHSM_base::HSM_StateFunction_st_adding_splitscreen_user_to_session_as_host
==============
*/

privatePartySessionHSM_base::eHSMStates __fastcall privatePartySessionHSM_base::HSM_StateFunction_st_adding_splitscreen_user_to_session_as_host(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMEvents event)
{
  return ?HSM_StateFunction_st_adding_splitscreen_user_to_session_as_host@privatePartySessionHSM_base@@AEAA?AW4eHSMStates@1@W4eHSMEvents@1@@Z(this, event);
}

/*
==============
privatePartySessionHSM_base::HSM_StateFunction_st_adding_splitscreen_user_to_session_as_client
==============
*/

privatePartySessionHSM_base::eHSMStates __fastcall privatePartySessionHSM_base::HSM_StateFunction_st_adding_splitscreen_user_to_session_as_client(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMEvents event)
{
  return ?HSM_StateFunction_st_adding_splitscreen_user_to_session_as_client@privatePartySessionHSM_base@@AEAA?AW4eHSMStates@1@W4eHSMEvents@1@@Z(this, event);
}

/*
==============
privatePartySessionHSM_base::HSM_StateFunction_st_removing_splitscreen_user_from_session_as_client
==============
*/

privatePartySessionHSM_base::eHSMStates __fastcall privatePartySessionHSM_base::HSM_StateFunction_st_removing_splitscreen_user_from_session_as_client(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMEvents event)
{
  return ?HSM_StateFunction_st_removing_splitscreen_user_from_session_as_client@privatePartySessionHSM_base@@AEAA?AW4eHSMStates@1@W4eHSMEvents@1@@Z(this, event);
}

/*
==============
privatePartySessionHSM_base::HSM_StateFunction_st_creating_session
==============
*/

privatePartySessionHSM_base::eHSMStates __fastcall privatePartySessionHSM_base::HSM_StateFunction_st_creating_session(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMEvents event)
{
  return ?HSM_StateFunction_st_creating_session@privatePartySessionHSM_base@@AEAA?AW4eHSMStates@1@W4eHSMEvents@1@@Z(this, event);
}

/*
==============
privatePartySessionHSM_base::HSM_StateFunction_st_removing_splitscreen_user_from_session_as_host
==============
*/

privatePartySessionHSM_base::eHSMStates __fastcall privatePartySessionHSM_base::HSM_StateFunction_st_removing_splitscreen_user_from_session_as_host(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMEvents event)
{
  return ?HSM_StateFunction_st_removing_splitscreen_user_from_session_as_host@privatePartySessionHSM_base@@AEAA?AW4eHSMStates@1@W4eHSMEvents@1@@Z(this, event);
}

/*
==============
privatePartySessionHSM_base::HSM_StopTimer
==============
*/

void __fastcall privatePartySessionHSM_base::HSM_StopTimer(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMEvents timerId)
{
  ?HSM_StopTimer@privatePartySessionHSM_base@@AEAAXW4eHSMEvents@1@@Z(this, timerId);
}

/*
==============
privatePartySessionHSM_base::HSM_StateFunction_st_host_awaking_session
==============
*/

privatePartySessionHSM_base::eHSMStates __fastcall privatePartySessionHSM_base::HSM_StateFunction_st_host_awaking_session(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMEvents event)
{
  return ?HSM_StateFunction_st_host_awaking_session@privatePartySessionHSM_base@@AEAA?AW4eHSMStates@1@W4eHSMEvents@1@@Z(this, event);
}

/*
==============
privatePartySessionHSM_base::HSM_StateFunction_st_removing_splitscreen_user_from_session_for_cleanup
==============
*/

privatePartySessionHSM_base::eHSMStates __fastcall privatePartySessionHSM_base::HSM_StateFunction_st_removing_splitscreen_user_from_session_for_cleanup(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMEvents event)
{
  return ?HSM_StateFunction_st_removing_splitscreen_user_from_session_for_cleanup@privatePartySessionHSM_base@@AEAA?AW4eHSMStates@1@W4eHSMEvents@1@@Z(this, event);
}

/*
==============
privatePartySessionHSM_base::HSM_StateFunction_st_removing_user_in_graveyard
==============
*/

privatePartySessionHSM_base::eHSMStates __fastcall privatePartySessionHSM_base::HSM_StateFunction_st_removing_user_in_graveyard(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMEvents event)
{
  return ?HSM_StateFunction_st_removing_user_in_graveyard@privatePartySessionHSM_base@@AEAA?AW4eHSMStates@1@W4eHSMEvents@1@@Z(this, event);
}

/*
==============
privatePartySessionHSM_base::HSM_StateFunction_st_leaving_session
==============
*/

privatePartySessionHSM_base::eHSMStates __fastcall privatePartySessionHSM_base::HSM_StateFunction_st_leaving_session(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMEvents event)
{
  return ?HSM_StateFunction_st_leaving_session@privatePartySessionHSM_base@@AEAA?AW4eHSMStates@1@W4eHSMEvents@1@@Z(this, event);
}

/*
==============
privatePartySessionHSM_base::HSM_StateFunction_privatePartySessionHSM
==============
*/
__int64 privatePartySessionHSM_base::HSM_StateFunction_privatePartySessionHSM(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMEvents event)
{
  __int64 result; 

  switch ( event )
  {
    case INVITE_GENERIC_COM_ERROR:
      privatePartySessionHSM_base::HSM_OnTransition(this, st_handle_error);
      result = 0xFFFFFFFFi64;
      break;
    case INVITE_GENERIC_ERROR_NO_MSG:
      privatePartySessionHSM_base::HSM_OnTransition(this, st_invite_none);
      result = 0xFFFFFFFFi64;
      break;
    case INVITER_UNIVERSAL_ID_RESOLVED:
      privatePartySessionHSM_base::HSM_OnEnterState(this, __HSM_ROOT_STATE__);
      goto $LN9_92;
    case JOINABILITY_VERIFIED:
      privatePartySessionHSM_base::HSM_OnExitState(this);
      result = 0xFFFFFFFFi64;
      break;
    case WAITING_FOR_JOIN_INFO_TIMED_OUT:
    case INVITABLE_PRIVILEGE_EXISTS:
$LN9_92:
      result = 0xFFFFFFFFi64;
      break;
    default:
      result = 4294967294i64;
      break;
  }
  return result;
}

/*
==============
privatePartySessionHSM_base::HSM_StateFunction_st_inactive
==============
*/
__int64 privatePartySessionHSM_base::HSM_StateFunction_st_inactive(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMEvents event)
{
  __int64 result; 

  switch ( event )
  {
    case INVITE_RECEIVED:
      privatePartySessionHSM_base::HSM_OnTransition(this, st_tu_required_error_with_msg);
      result = 0xFFFFFFFFi64;
      break;
    case START_JOINING_USER_WITH_PLATFORM_ID:
      privatePartySessionHSM_base::HSM_OnTransition(this, st_already_in_the_game_server_session_that_is_being_joined_on);
      result = 0xFFFFFFFFi64;
      break;
    case START_JOINING_USER_WITH_XUID:
      privatePartySessionHSM_base::HSM_OnTransition(this, st_invite_error_no_msg);
      result = 0xFFFFFFFFi64;
      break;
    case START_JOINING_LOBBY:
      privatePartySessionHSM_base::HSM_OnTransition(this, st_invitee_permissions_timeout);
      result = 0xFFFFFFFFi64;
      break;
    case INVITER_UNIVERSAL_ID_RESOLVED:
      privatePartySessionHSM_base::HSM_OnEnterState(this, st_invite_none);
      result = 0xFFFFFFFFi64;
      break;
    case JOINABILITY_VERIFIED:
      privatePartySessionHSM_base::HSM_OnExitState(this);
      result = 0xFFFFFFFFi64;
      break;
    case WAITING_FOR_JOIN_INFO_TIMED_OUT:
      this->HandleHSMCallback_InactiveFrame(this);
      result = 0xFFFFFFFFi64;
      break;
    case INVITABLE_PRIVILEGE_EXISTS:
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
privatePartySessionHSM_base::HSM_StateFunction_st_generic_com_error_handling
==============
*/
__int64 privatePartySessionHSM_base::HSM_StateFunction_st_generic_com_error_handling(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMEvents event)
{
  __int32 v2; 
  __int32 v3; 
  __int32 v4; 
  __int32 v5; 

  v2 = event - 6;
  if ( !v2 )
  {
    privatePartySessionHSM_base::HSM_OnTransition(this, st_invite_none);
    return 0xFFFFFFFFi64;
  }
  v3 = v2 - 32;
  if ( !v3 )
  {
    privatePartySessionHSM_base::HSM_OnEnterState(this, st_handle_error);
    return 0xFFFFFFFFi64;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    privatePartySessionHSM_base::HSM_OnExitState(this);
    return 0xFFFFFFFFi64;
  }
  v5 = v4 - 1;
  if ( !v5 )
    return 0xFFFFFFFFi64;
  if ( v5 == 5 )
    return 1i64;
  else
    return 4294967294i64;
}

/*
==============
privatePartySessionHSM_base::HSM_StateFunction_st_cleanup_sessions
==============
*/
__int64 privatePartySessionHSM_base::HSM_StateFunction_st_cleanup_sessions(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMEvents event)
{
  __int64 result; 

  switch ( event )
  {
    case INVITE_CANT_DETERMINE_CONTROLLER_PAIRING:
    case INVITE_CHECK_PERMISSIONS:
    case EULA_VERIFIED:
      privatePartySessionHSM_base::HSM_OnTransition(this, st_invite_none);
      result = 0xFFFFFFFFi64;
      break;
    case CHECK_IF_EXE_IS_READY_TO_PROCESS_INVITE_JOIN:
      privatePartySessionHSM_base::HSM_OnTransition(this, st_generic_com_error_next_frame_with_msg);
      result = 0xFFFFFFFFi64;
      break;
    case INVITER_UNIVERSAL_ID_RESOLVED:
      privatePartySessionHSM_base::HSM_OnEnterState(this, st_invite_error_no_msg);
      this->HandleHSMCallback_CleanupSessions(this);
      goto $LN6_68;
    case JOINABILITY_VERIFIED:
      privatePartySessionHSM_base::HSM_OnExitState(this);
      result = 0xFFFFFFFFi64;
      break;
    case WAITING_FOR_JOIN_INFO_TIMED_OUT:
$LN6_68:
      result = 0xFFFFFFFFi64;
      break;
    case INVITABLE_PRIVILEGE_EXISTS:
      result = 1i64;
      break;
    default:
      result = 4294967294i64;
      break;
  }
  return result;
}

/*
==============
privatePartySessionHSM_base::HSM_StateFunction_st_removing_splitscreen_user_from_session_for_cleanup
==============
*/
__int64 privatePartySessionHSM_base::HSM_StateFunction_st_removing_splitscreen_user_from_session_for_cleanup(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMEvents event)
{
  __int64 result; 

  switch ( event )
  {
    case INVITE_WAIT_FOR_USER_AUTH:
      goto $LN8_78;
    case USER_CANCEL_INVITATION:
      this->HandleHSMCallback_RemoveSplitscreenUserFromSession_Failed(this);
$LN8_78:
      privatePartySessionHSM_base::HSM_OnTransition(this, st_invite_none);
      return 0xFFFFFFFFi64;
    case INVITER_UNIVERSAL_ID_RESOLVED:
      privatePartySessionHSM_base::HSM_OnEnterState(this, st_generic_com_error_next_frame_with_msg);
      this->HandleHSMCallback_RemoveSplitscreenUserFromSession(this);
      goto $LN6_69;
    case JOINABILITY_VERIFIED:
      privatePartySessionHSM_base::HSM_OnExitState(this);
      return 0xFFFFFFFFi64;
    case WAITING_FOR_JOIN_INFO_TIMED_OUT:
$LN6_69:
      result = 0xFFFFFFFFi64;
      break;
    case INVITABLE_PRIVILEGE_EXISTS:
      result = 3i64;
      break;
    default:
      result = 4294967294i64;
      break;
  }
  return result;
}

/*
==============
privatePartySessionHSM_base::HSM_StateFunction_st_removing_user_in_graveyard
==============
*/
__int64 privatePartySessionHSM_base::HSM_StateFunction_st_removing_user_in_graveyard(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMEvents event)
{
  __int64 result; 

  switch ( event )
  {
    case USER_DECLINE_INVITATION:
      goto $LN8_79;
    case INVITE_ERROR_SUBSCRIPTION_REQUIRED:
      this->HandleHSMCallback_RemoveFirstUserInGraveyardFromSession_Failed(this);
$LN8_79:
      privatePartySessionHSM_base::HSM_OnTransition(this, st_invite_none);
      return 0xFFFFFFFFi64;
    case INVITER_UNIVERSAL_ID_RESOLVED:
      privatePartySessionHSM_base::HSM_OnEnterState(this, st_invitee_permissions_timeout);
      this->HandleHSMCallback_RemoveFirstUserInGraveyardFromSession(this);
      goto $LN6_70;
    case JOINABILITY_VERIFIED:
      privatePartySessionHSM_base::HSM_OnExitState(this);
      return 0xFFFFFFFFi64;
    case WAITING_FOR_JOIN_INFO_TIMED_OUT:
$LN6_70:
      result = 0xFFFFFFFFi64;
      break;
    case INVITABLE_PRIVILEGE_EXISTS:
      result = 1i64;
      break;
    default:
      result = 4294967294i64;
      break;
  }
  return result;
}

/*
==============
privatePartySessionHSM_base::HSM_StateFunction_st_creating_session
==============
*/
__int64 privatePartySessionHSM_base::HSM_StateFunction_st_creating_session(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMEvents event)
{
  __int64 result; 

  switch ( event )
  {
    case INVITE_TU_REQUIRED:
      privatePartySessionHSM_base::HSM_OnTransition(this, st_session_search_timeout);
      result = 0xFFFFFFFFi64;
      break;
    case INVITE_MP_PERM_REQUIRED:
      this->HandleHSMCallback_CreateSession_Failed(this);
      result = 0xFFFFFFFFi64;
      break;
    case INVITE_PERMISSIONS_PASSED:
      this->HandleHSMCallback_CreateSession_Failed_NoComError(this);
      privatePartySessionHSM_base::HSM_OnTransition(this, st_invite_none);
      result = 0xFFFFFFFFi64;
      break;
    case INVITER_UNIVERSAL_ID_RESOLVED:
      privatePartySessionHSM_base::HSM_OnEnterState(this, st_tu_required_error_with_msg);
      this->HandleHSMCallback_CreateSession(this);
      goto $LN6_71;
    case JOINABILITY_VERIFIED:
      privatePartySessionHSM_base::HSM_OnExitState(this);
      result = 0xFFFFFFFFi64;
      break;
    case WAITING_FOR_JOIN_INFO_TIMED_OUT:
$LN6_71:
      result = 0xFFFFFFFFi64;
      break;
    case INVITABLE_PRIVILEGE_EXISTS:
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
privatePartySessionHSM_base::HSM_StateFunction_st_leaving_session
==============
*/
__int64 privatePartySessionHSM_base::HSM_StateFunction_st_leaving_session(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMEvents event)
{
  __int64 result; 

  switch ( event )
  {
    case INVITE_CANT_DETERMINE_CONTROLLER_PAIRING:
      goto $LN8_81;
    case INVITE_CHECK_PERMISSIONS:
      this->HandleHSMCallback_LeaveSession_Failed(this);
$LN8_81:
      privatePartySessionHSM_base::HSM_OnTransition(this, st_invite_none);
      return 0xFFFFFFFFi64;
    case CHECK_IF_EXE_IS_READY_TO_PROCESS_INVITE_JOIN:
      privatePartySessionHSM_base::HSM_OnTransition(this, st_cant_join_existing_session_with_msg);
      return 0xFFFFFFFFi64;
    case INVITER_UNIVERSAL_ID_RESOLVED:
      privatePartySessionHSM_base::HSM_OnEnterState(this, st_mp_permission_error_with_msg);
      this->HandleHSMCallback_LeaveSession(this);
      goto $LN6_72;
    case JOINABILITY_VERIFIED:
      privatePartySessionHSM_base::HSM_OnExitState(this);
      return 0xFFFFFFFFi64;
    case WAITING_FOR_JOIN_INFO_TIMED_OUT:
$LN6_72:
      result = 0xFFFFFFFFi64;
      break;
    case INVITABLE_PRIVILEGE_EXISTS:
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
privatePartySessionHSM_base::HSM_StateFunction_st_removing_splitscreen_user_from_session_for_leaving
==============
*/
__int64 privatePartySessionHSM_base::HSM_StateFunction_st_removing_splitscreen_user_from_session_for_leaving(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMEvents event)
{
  __int64 result; 

  switch ( event )
  {
    case INVITE_WAIT_FOR_USER_AUTH:
      goto $LN8_82;
    case USER_CANCEL_INVITATION:
      this->HandleHSMCallback_RemoveSplitscreenUserFromSession_Failed(this);
$LN8_82:
      privatePartySessionHSM_base::HSM_OnTransition(this, st_invite_none);
      return 0xFFFFFFFFi64;
    case INVITER_UNIVERSAL_ID_RESOLVED:
      privatePartySessionHSM_base::HSM_OnEnterState(this, st_cant_join_existing_session_with_msg);
      this->HandleHSMCallback_RemoveSplitscreenUserFromSession(this);
      goto $LN6_73;
    case JOINABILITY_VERIFIED:
      privatePartySessionHSM_base::HSM_OnExitState(this);
      return 0xFFFFFFFFi64;
    case WAITING_FOR_JOIN_INFO_TIMED_OUT:
$LN6_73:
      result = 0xFFFFFFFFi64;
      break;
    case INVITABLE_PRIVILEGE_EXISTS:
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
privatePartySessionHSM_base::HSM_StateFunction_st_host
==============
*/
__int64 privatePartySessionHSM_base::HSM_StateFunction_st_host(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMEvents event)
{
  __int64 result; 

  switch ( event )
  {
    case CHECK_IF_EXE_IS_READY_TO_PROCESS_INVITE_JOIN:
      privatePartySessionHSM_base::HSM_OnTransition(this, st_eula_declined);
      result = 0xFFFFFFFFi64;
      break;
    case INVITE_INVITEE_PERMS_TIMEOUT_SHOULD_RETRY:
      privatePartySessionHSM_base::HSM_OnTransition(this, st_mp_permission_error_with_msg);
      result = 0xFFFFFFFFi64;
      break;
    case INVITE_INVITEE_PERMS_TIMEOUT_JOIN_FAILED:
      privatePartySessionHSM_base::HSM_OnTransition(this, st_atomic_join_fence_timeout);
      result = 0xFFFFFFFFi64;
      break;
    case INVITE_INVITEE_PERMS_TIMEOUT:
      privatePartySessionHSM_base::HSM_OnTransition(this, st_invite_processing_timeout);
      result = 0xFFFFFFFFi64;
      break;
    case INVITE_PERMISSIONS_CHECK_RETRY:
      privatePartySessionHSM_base::HSM_OnTransition(this, st_account_registration_cancelled);
      result = 0xFFFFFFFFi64;
      break;
    case UI_READY:
      privatePartySessionHSM_base::HSM_OnTransition(this, st_invalid_controller_pairing);
      result = 0xFFFFFFFFi64;
      break;
    case INVITER_UNIVERSAL_ID_RESOLVED:
      privatePartySessionHSM_base::HSM_OnEnterState(this, st_session_search_timeout);
      this->HandleHSMCallback_OnEnterHostState(this);
      result = 0xFFFFFFFFi64;
      break;
    case JOINABILITY_VERIFIED:
      this->HandleHSMCallback_OnExitHostState(this);
      privatePartySessionHSM_base::HSM_OnExitState(this);
      result = 0xFFFFFFFFi64;
      break;
    case WAITING_FOR_JOIN_INFO_TIMED_OUT:
      this->HandleHSMCallback_HostFrame(this);
      result = 0xFFFFFFFFi64;
      break;
    case INVITABLE_PRIVILEGE_EXISTS:
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
privatePartySessionHSM_base::HSM_StateFunction_st_updating_session_data
==============
*/
__int64 privatePartySessionHSM_base::HSM_StateFunction_st_updating_session_data(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMEvents event)
{
  __int64 result; 

  switch ( event )
  {
    case WAIT_FOR_EULA:
      goto $LN9_101;
    case EULA_DECLINED:
      this->HandleHSMCallback_UpdateSessionData_Failed(this);
      return 0xFFFFFFFFi64;
    case WAIT_FOR_ACCOUNT_REGISTRATION:
      this->HandleHSMCallback_UpdateSessionData_Failed_NoComError(this);
$LN9_101:
      privatePartySessionHSM_base::HSM_OnTransition(this, st_session_search_timeout);
      return 0xFFFFFFFFi64;
    case INVITER_UNIVERSAL_ID_RESOLVED:
      privatePartySessionHSM_base::HSM_OnEnterState(this, st_atomic_join_fence_timeout);
      this->HandleHSMCallback_UpdateSessionData(this);
      goto $LN6_75;
    case JOINABILITY_VERIFIED:
      privatePartySessionHSM_base::HSM_OnExitState(this);
      return 0xFFFFFFFFi64;
    case WAITING_FOR_JOIN_INFO_TIMED_OUT:
$LN6_75:
      result = 0xFFFFFFFFi64;
      break;
    case INVITABLE_PRIVILEGE_EXISTS:
      result = 9i64;
      break;
    default:
      result = 4294967294i64;
      break;
  }
  return result;
}

/*
==============
privatePartySessionHSM_base::HSM_StateFunction_st_updating_session_info
==============
*/
__int64 privatePartySessionHSM_base::HSM_StateFunction_st_updating_session_info(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMEvents event)
{
  __int64 result; 

  switch ( event )
  {
    case ACCOUNT_REGISTRATION_CANCELLED:
      goto $LN9_102;
    case INITIAL_LOCAL_CLIENT_ACTIVE_FENCE_FAILED:
      this->HandleHSMCallback_UpdateSessionInfo_Failed(this);
      return 0xFFFFFFFFi64;
    case WAITING_FOR_DEMONWARE_TIMEDOUT:
      this->HandleHSMCallback_UpdateSessionInfo_Failed_NoComError(this);
$LN9_102:
      privatePartySessionHSM_base::HSM_OnTransition(this, st_session_search_timeout);
      return 0xFFFFFFFFi64;
    case INVITER_UNIVERSAL_ID_RESOLVED:
      privatePartySessionHSM_base::HSM_OnEnterState(this, st_invite_processing_timeout);
      this->HandleHSMCallback_UpdateSessionInfo(this);
      goto $LN6_76;
    case JOINABILITY_VERIFIED:
      privatePartySessionHSM_base::HSM_OnExitState(this);
      return 0xFFFFFFFFi64;
    case WAITING_FOR_JOIN_INFO_TIMED_OUT:
$LN6_76:
      result = 0xFFFFFFFFi64;
      break;
    case INVITABLE_PRIVILEGE_EXISTS:
      result = 9i64;
      break;
    default:
      result = 4294967294i64;
      break;
  }
  return result;
}

/*
==============
privatePartySessionHSM_base::HSM_StateFunction_st_adding_splitscreen_user_to_session_as_host
==============
*/
__int64 privatePartySessionHSM_base::HSM_StateFunction_st_adding_splitscreen_user_to_session_as_host(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMEvents event)
{
  __int64 result; 

  switch ( event )
  {
    case INVITE_AUTHENTICATED:
      privatePartySessionHSM_base::HSM_OnTransition(this, st_session_search_timeout);
      result = 0xFFFFFFFFi64;
      break;
    case JOINER_UNIVERSAL_ID_RESOLVED:
      this->HandleHSMCallback_AddSplitscreenUserToSession_Failed(this);
      result = 0xFFFFFFFFi64;
      break;
    case INVITER_UNIVERSAL_ID_RESOLVED:
      privatePartySessionHSM_base::HSM_OnEnterState(this, st_invalid_controller_pairing);
      this->HandleHSMCallback_AddSplitscreenUserToSession(this);
      goto $LN6_77;
    case JOINABILITY_VERIFIED:
      privatePartySessionHSM_base::HSM_OnExitState(this);
      result = 0xFFFFFFFFi64;
      break;
    case WAITING_FOR_JOIN_INFO_TIMED_OUT:
$LN6_77:
      result = 0xFFFFFFFFi64;
      break;
    case INVITABLE_PRIVILEGE_EXISTS:
      result = 9i64;
      break;
    default:
      result = 4294967294i64;
      break;
  }
  return result;
}

/*
==============
privatePartySessionHSM_base::HSM_StateFunction_st_removing_splitscreen_user_from_session_as_host
==============
*/
__int64 privatePartySessionHSM_base::HSM_StateFunction_st_removing_splitscreen_user_from_session_as_host(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMEvents event)
{
  __int64 result; 

  switch ( event )
  {
    case INVITE_WAIT_FOR_USER_AUTH:
      privatePartySessionHSM_base::HSM_OnTransition(this, st_session_search_timeout);
      result = 0xFFFFFFFFi64;
      break;
    case USER_CANCEL_INVITATION:
      this->HandleHSMCallback_RemoveSplitscreenUserFromSession_Failed_ComError(this);
      result = 0xFFFFFFFFi64;
      break;
    case INVITER_UNIVERSAL_ID_RESOLVED:
      privatePartySessionHSM_base::HSM_OnEnterState(this, st_eula_declined);
      this->HandleHSMCallback_RemoveSplitscreenUserFromSession(this);
      goto $LN6_78;
    case JOINABILITY_VERIFIED:
      privatePartySessionHSM_base::HSM_OnExitState(this);
      result = 0xFFFFFFFFi64;
      break;
    case WAITING_FOR_JOIN_INFO_TIMED_OUT:
$LN6_78:
      result = 0xFFFFFFFFi64;
      break;
    case INVITABLE_PRIVILEGE_EXISTS:
      result = 9i64;
      break;
    default:
      result = 4294967294i64;
      break;
  }
  return result;
}

/*
==============
privatePartySessionHSM_base::HSM_StateFunction_st_host_sleep
==============
*/
__int64 privatePartySessionHSM_base::HSM_StateFunction_st_host_sleep(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMEvents event)
{
  __int32 v3; 
  __int32 v4; 
  __int32 v5; 
  __int32 v6; 

  v3 = event - 31;
  if ( v3 )
  {
    v4 = v3 - 7;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          if ( v6 == 5 )
            return 9i64;
          else
            return 4294967294i64;
        }
        else
        {
          this->HandleHSMCallback_SleepFrame(this);
          return 0xFFFFFFFFi64;
        }
      }
      else
      {
        this->HandleHSMCallback_WakeUp(this);
        privatePartySessionHSM_base::HSM_OnExitState(this);
        return 0xFFFFFFFFi64;
      }
    }
    else
    {
      privatePartySessionHSM_base::HSM_OnEnterState(this, st_account_registration_cancelled);
      this->HandleHSMCallback_StartSleeping(this);
      return 0xFFFFFFFFi64;
    }
  }
  else
  {
    privatePartySessionHSM_base::HSM_OnTransition(this, st_invalid_platform_session_info);
    return 0xFFFFFFFFi64;
  }
}

/*
==============
privatePartySessionHSM_base::HSM_StateFunction_st_host_awaking_session
==============
*/
__int64 privatePartySessionHSM_base::HSM_StateFunction_st_host_awaking_session(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMEvents event)
{
  __int32 v2; 
  __int32 v3; 
  __int32 v4; 

  v2 = event - 38;
  if ( !v2 )
  {
    privatePartySessionHSM_base::HSM_OnEnterState(this, st_platform_subscription_required);
    return 0xFFFFFFFFi64;
  }
  v3 = v2 - 1;
  if ( !v3 )
  {
    privatePartySessionHSM_base::HSM_OnExitState(this);
    return 0xFFFFFFFFi64;
  }
  v4 = v3 - 1;
  if ( !v4 )
    return 0xFFFFFFFFi64;
  if ( v4 == 5 )
    return 14i64;
  else
    return 4294967294i64;
}

/*
==============
privatePartySessionHSM_base::HSM_StateFunction_st_host_waiting_for_game_lobby_session_to_shutdown
==============
*/
__int64 privatePartySessionHSM_base::HSM_StateFunction_st_host_waiting_for_game_lobby_session_to_shutdown(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMEvents event)
{
  __int64 result; 

  switch ( event )
  {
    case GET_JOIN_INFO_FROM_USER:
      privatePartySessionHSM_base::HSM_OnTransition(this, st_session_search_timeout);
      result = 0xFFFFFFFFi64;
      break;
    case RESOLVE_INVITER_UNIVERSAL_ID:
      privatePartySessionHSM_base::HSM_OnTransition(this, st_invite_none);
      result = 0xFFFFFFFFi64;
      break;
    case CANT_JOIN_INVALID_INVITATION:
      this->HandleHSMCallback_AwakeSession(this);
      result = 0xFFFFFFFFi64;
      break;
    case INVITER_UNIVERSAL_ID_RESOLVED:
      privatePartySessionHSM_base::HSM_OnEnterState(this, st_invalid_platform_session_info);
      result = 0xFFFFFFFFi64;
      break;
    case JOINABILITY_VERIFIED:
      privatePartySessionHSM_base::HSM_OnExitState(this);
      result = 0xFFFFFFFFi64;
      break;
    case WAITING_FOR_JOIN_INFO_TIMED_OUT:
      this->HandleHSMCallback_WaitingForGameLobbySessionShutdownFrame(this);
      result = 0xFFFFFFFFi64;
      break;
    case INVITABLE_PRIVILEGE_EXISTS:
      result = 15i64;
      break;
    default:
      result = 4294967294i64;
      break;
  }
  return result;
}

/*
==============
privatePartySessionHSM_base::HSM_StateFunction_st_joining_session
==============
*/
__int64 privatePartySessionHSM_base::HSM_StateFunction_st_joining_session(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMEvents event)
{
  __int64 result; 

  switch ( event )
  {
    case INVITE_RESOLVE_INVITER_UNIVERSAL_ID_TIMEOUT:
      privatePartySessionHSM_base::HSM_OnTransition(this, st_already_in_the_party_session_that_is_being_joined_on);
      result = 0xFFFFFFFFi64;
      break;
    case INVITE_RESOLVE_INVITER_UNIVERSAL_ID_FAILED:
      this->HandleHSMCallback_JoinSession_Failed(this);
      privatePartySessionHSM_base::HSM_OnTransition(this, st_invite_none);
      result = 0xFFFFFFFFi64;
      break;
    case INVITER_UNIVERSAL_ID_RESOLVED:
      privatePartySessionHSM_base::HSM_OnEnterState(this, st_already_in_the_game_server_session_that_is_being_joined_on);
      this->HandleHSMCallback_JoinSession(this);
      goto $LN6_80;
    case JOINABILITY_VERIFIED:
      privatePartySessionHSM_base::HSM_OnExitState(this);
      result = 0xFFFFFFFFi64;
      break;
    case WAITING_FOR_JOIN_INFO_TIMED_OUT:
$LN6_80:
      result = 0xFFFFFFFFi64;
      break;
    case INVITABLE_PRIVILEGE_EXISTS:
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
privatePartySessionHSM_base::HSM_StateFunction_st_client
==============
*/
__int64 privatePartySessionHSM_base::HSM_StateFunction_st_client(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMEvents event)
{
  __int64 result; 

  switch ( event )
  {
    case CHECK_IF_EXE_IS_READY_TO_PROCESS_INVITE_JOIN:
      privatePartySessionHSM_base::HSM_OnTransition(this, st_matchmaker_session_search_failed_due_to_backoff);
      result = 0xFFFFFFFFi64;
      break;
    case INVITE_INVITEE_PERMS_TIMEOUT_SHOULD_RETRY:
      privatePartySessionHSM_base::HSM_OnTransition(this, st_mp_permission_error_with_msg);
      result = 0xFFFFFFFFi64;
      break;
    case INVITE_PERMISSIONS_CHECK_RETRY:
      privatePartySessionHSM_base::HSM_OnTransition(this, st_resolve_inviter_universal_id_timeout);
      result = 0xFFFFFFFFi64;
      break;
    case UI_READY:
      privatePartySessionHSM_base::HSM_OnTransition(this, st_invite_cancelled_by_user);
      result = 0xFFFFFFFFi64;
      break;
    case INVITE_RESOLVE_INVITER_ID_TIMEOUT:
      privatePartySessionHSM_base::HSM_OnTransition(this, st_session_search_timeout);
      result = 0xFFFFFFFFi64;
      break;
    case INVITER_UNIVERSAL_ID_RESOLVED:
      privatePartySessionHSM_base::HSM_OnEnterState(this, st_already_in_the_party_session_that_is_being_joined_on);
      this->HandleHSMCallback_OnEnterClientState(this);
      result = 0xFFFFFFFFi64;
      break;
    case JOINABILITY_VERIFIED:
      this->HandleHSMCallback_OnExitClientState(this);
      privatePartySessionHSM_base::HSM_OnExitState(this);
      result = 0xFFFFFFFFi64;
      break;
    case WAITING_FOR_JOIN_INFO_TIMED_OUT:
      this->HandleHSMCallback_ClientFrame(this);
      result = 0xFFFFFFFFi64;
      break;
    case INVITABLE_PRIVILEGE_EXISTS:
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
privatePartySessionHSM_base::HSM_StateFunction_st_adding_splitscreen_user_to_session_as_client
==============
*/
__int64 privatePartySessionHSM_base::HSM_StateFunction_st_adding_splitscreen_user_to_session_as_client(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMEvents event)
{
  __int64 result; 

  switch ( event )
  {
    case INVITE_AUTHENTICATED:
      privatePartySessionHSM_base::HSM_OnTransition(this, st_already_in_the_party_session_that_is_being_joined_on);
      result = 0xFFFFFFFFi64;
      break;
    case JOINER_UNIVERSAL_ID_RESOLVED:
      this->HandleHSMCallback_AddSplitscreenUserToSession_Failed(this);
      result = 0xFFFFFFFFi64;
      break;
    case INVITER_UNIVERSAL_ID_RESOLVED:
      privatePartySessionHSM_base::HSM_OnEnterState(this, st_invite_cancelled_by_user);
      this->HandleHSMCallback_AddSplitscreenUserToSession(this);
      goto $LN6_82;
    case JOINABILITY_VERIFIED:
      privatePartySessionHSM_base::HSM_OnExitState(this);
      result = 0xFFFFFFFFi64;
      break;
    case WAITING_FOR_JOIN_INFO_TIMED_OUT:
$LN6_82:
      result = 0xFFFFFFFFi64;
      break;
    case INVITABLE_PRIVILEGE_EXISTS:
      result = 18i64;
      break;
    default:
      result = 4294967294i64;
      break;
  }
  return result;
}

/*
==============
privatePartySessionHSM_base::HSM_StateFunction_st_removing_splitscreen_user_from_session_as_client
==============
*/
__int64 privatePartySessionHSM_base::HSM_StateFunction_st_removing_splitscreen_user_from_session_as_client(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMEvents event)
{
  __int64 result; 

  switch ( event )
  {
    case INVITE_WAIT_FOR_USER_AUTH:
      privatePartySessionHSM_base::HSM_OnTransition(this, st_already_in_the_party_session_that_is_being_joined_on);
      result = 0xFFFFFFFFi64;
      break;
    case USER_CANCEL_INVITATION:
      this->HandleHSMCallback_RemoveSplitscreenUserFromSession_Failed_ComError(this);
      result = 0xFFFFFFFFi64;
      break;
    case INVITER_UNIVERSAL_ID_RESOLVED:
      privatePartySessionHSM_base::HSM_OnEnterState(this, st_matchmaker_session_search_failed_due_to_backoff);
      this->HandleHSMCallback_RemoveSplitscreenUserFromSession(this);
      goto $LN6_83;
    case JOINABILITY_VERIFIED:
      privatePartySessionHSM_base::HSM_OnExitState(this);
      result = 0xFFFFFFFFi64;
      break;
    case WAITING_FOR_JOIN_INFO_TIMED_OUT:
$LN6_83:
      result = 0xFFFFFFFFi64;
      break;
    case INVITABLE_PRIVILEGE_EXISTS:
      result = 18i64;
      break;
    default:
      result = 4294967294i64;
      break;
  }
  return result;
}

/*
==============
privatePartySessionHSM_base::HSM_StateFunction_st_client_sleep
==============
*/
__int64 privatePartySessionHSM_base::HSM_StateFunction_st_client_sleep(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMEvents event)
{
  __int32 v3; 
  __int32 v4; 
  __int32 v5; 
  __int32 v6; 

  v3 = event - 31;
  if ( v3 )
  {
    v4 = v3 - 7;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          if ( v6 == 5 )
            return 18i64;
          else
            return 4294967294i64;
        }
        else
        {
          this->HandleHSMCallback_SleepFrame(this);
          return 0xFFFFFFFFi64;
        }
      }
      else
      {
        this->HandleHSMCallback_WakeUp(this);
        privatePartySessionHSM_base::HSM_OnExitState(this);
        return 0xFFFFFFFFi64;
      }
    }
    else
    {
      privatePartySessionHSM_base::HSM_OnEnterState(this, st_resolve_inviter_universal_id_timeout);
      this->HandleHSMCallback_StartSleeping(this);
      return 0xFFFFFFFFi64;
    }
  }
  else
  {
    privatePartySessionHSM_base::HSM_OnTransition(this, st_resolve_inviter_universal_id_failed);
    return 0xFFFFFFFFi64;
  }
}

/*
==============
privatePartySessionHSM_base::HSM_StateFunction_st_client_awaking_session
==============
*/
__int64 privatePartySessionHSM_base::HSM_StateFunction_st_client_awaking_session(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMEvents event)
{
  __int64 result; 

  switch ( event )
  {
    case GET_JOIN_INFO_FROM_USER:
      privatePartySessionHSM_base::HSM_OnTransition(this, st_already_in_the_party_session_that_is_being_joined_on);
      result = 0xFFFFFFFFi64;
      break;
    case RESOLVE_INVITER_UNIVERSAL_ID:
      privatePartySessionHSM_base::HSM_OnTransition(this, st_invite_none);
      result = 0xFFFFFFFFi64;
      break;
    case CANT_JOIN_INVALID_INVITATION:
      this->HandleHSMCallback_AwakeSession(this);
      result = 0xFFFFFFFFi64;
      break;
    case INVITER_UNIVERSAL_ID_RESOLVED:
      privatePartySessionHSM_base::HSM_OnEnterState(this, st_resolve_inviter_universal_id_failed);
      result = 0xFFFFFFFFi64;
      break;
    case JOINABILITY_VERIFIED:
      privatePartySessionHSM_base::HSM_OnExitState(this);
      result = 0xFFFFFFFFi64;
      break;
    case WAITING_FOR_JOIN_INFO_TIMED_OUT:
      this->HandleHSMCallback_WaitingForGameLobbySessionShutdownFrame(this);
      result = 0xFFFFFFFFi64;
      break;
    case INVITABLE_PRIVILEGE_EXISTS:
      result = 21i64;
      break;
    default:
      result = 4294967294i64;
      break;
  }
  return result;
}

/*
==============
privatePartySessionHSM_base::privatePartySessionHSM_base
==============
*/
void privatePartySessionHSM_base::privatePartySessionHSM_base(privatePartySessionHSM_base *this)
{
  this->m_HSMCurrentState = __HSM_NO_STATE__;
  this->__vftable = (privatePartySessionHSM_base_vtbl *)&privatePartySessionHSM_base::`vftable';
  *(_QWORD *)&this->m_HSMPendingEventHeadIndex = 0i64;
  this->m_HSMPendingEventCount = 0;
  this->m_HSMVerboseDebug = 0;
}

/*
==============
privatePartySessionHSM_base::~privatePartySessionHSM_base
==============
*/
void privatePartySessionHSM_base::~privatePartySessionHSM_base(privatePartySessionHSM_base *this)
{
  this->__vftable = (privatePartySessionHSM_base_vtbl *)&privatePartySessionHSM_base::`vftable';
  if ( this->m_HSMCurrentState != __HSM_NO_STATE__ )
  {
    while ( this->m_HSMStateStackSize > 0 )
      privatePartySessionHSM_base::HSM_CallStateFunction(this, *(&this->m_HSMCurrentState + this->m_HSMStateStackSize), JOINABILITY_VERIFIED);
    this->m_HSMCurrentState = __HSM_NO_STATE__;
  }
}

/*
==============
privatePartySessionHSM_base::ConvertEventToString
==============
*/
const char *privatePartySessionHSM_base::ConvertEventToString(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMEvents event)
{
  __int64 v3[46]; 

  if ( event == HSM_NO_EVENT )
    return "HSM_NO_EVENT";
  v3[0] = (__int64)"GENERIC_COM_ERROR";
  v3[1] = (__int64)"GAME_LOBBY_SESSION_GENERIC_COM_ERROR";
  v3[2] = (__int64)"CREATE_PRIVATE_PARTY_SESSION";
  v3[3] = (__int64)"JOIN_PRIVATE_PARTY_SESSION";
  v3[4] = (__int64)"CLEANUP_SESSIONS";
  v3[5] = (__int64)"REMOVE_FIRST_USER_IN_GRAVEYARD_FROM_SESSION";
  v3[6] = (__int64)"COM_ERROR_TRIGGERED";
  v3[7] = (__int64)"LEAVE_PRIVATE_PARTY_SESSION_COMPLETE";
  v3[8] = (__int64)"LEAVE_PRIVATE_PARTY_SESSION_FAILED";
  v3[9] = (__int64)"CLEANUP_SESSION_FAILED";
  v3[10] = (__int64)"REMOVE_SPLITSCREEN_USER_FROM_SESSION";
  v3[11] = (__int64)"REMOVE_SPLITSCREEN_USER_FROM_SESSION_COMPLETE";
  v3[12] = (__int64)"REMOVE_SPLITSCREEN_USER_FROM_SESSION_FAILED";
  v3[13] = (__int64)"REMOVE_FIRST_USER_IN_GRAVEYARD_FROM_SESSION_COMPLETE";
  v3[14] = (__int64)"REMOVE_FIRST_USER_IN_GRAVEYARD_FROM_SESSION_FAILED";
  v3[15] = (__int64)"CREATE_PRIVATE_PARTY_SESSION_COMPLETE";
  v3[16] = (__int64)"CREATE_SESSION_FAILED";
  v3[17] = (__int64)"CREATE_SESSION_FAILED_NO_COM_ERROR";
  v3[18] = (__int64)"LEAVE_PRIVATE_PARTY_SESSION";
  v3[19] = (__int64)"UPDATE_SESSION_DATA";
  v3[20] = (__int64)"UPDATE_SESSION_INFO";
  v3[21] = (__int64)"SLEEP_PRIVATE_PARTY_SESSION";
  v3[22] = (__int64)"ADD_SPLITSCREEN_USER_TO_SESSION";
  v3[23] = (__int64)"UPDATE_SESSION_DATA_COMPLETE";
  v3[24] = (__int64)"UPDATE_SESSION_DATA_FAILED";
  v3[25] = (__int64)"UPDATE_SESSION_DATA_FAILED_NO_COM_ERROR";
  v3[26] = (__int64)"UPDATE_SESSION_INFO_COMPLETE";
  v3[27] = (__int64)"UPDATE_SESSION_INFO_FAILED";
  v3[28] = (__int64)"UPDATE_SESSION_INFO_FAILED_NO_COM_ERROR";
  v3[29] = (__int64)"ADD_SPLITSCREEN_USER_TO_SESSION_COMPLETE";
  v3[30] = (__int64)"ADD_SPLITSCREEN_USER_TO_SESSION_FAILED";
  v3[31] = (__int64)"AWAKE_PRIVATE_PARTY_SESSION";
  v3[32] = (__int64)"AWAKE_SESSION_COMPLETE";
  v3[33] = (__int64)"LEAVE_PRIVATE_PARTY_SESSION_WITHOUT_PLATFORM_CALL";
  v3[34] = (__int64)"GAME_LOBBY_SESSION_SHUTDOWN_COMPLETE";
  v3[35] = (__int64)"JOIN_SESSION_COMPLETE";
  v3[36] = (__int64)"JOIN_SESSION_FAILED";
  v3[37] = (__int64)"BECOME_HOST_AFTER_MIGRATION";
  v3[38] = (__int64)"HSM_EVENT_ON_ENTER";
  v3[39] = (__int64)"HSM_EVENT_ON_EXIT";
  v3[40] = (__int64)"HSM_EVENT_ON_UPDATE";
  v3[41] = (__int64)"HSM_EVENT_ON_TIMER_DO";
  v3[42] = (__int64)"HSM_EVENT_ON_TIMER_TRIGGER";
  v3[43] = (__int64)"HSM_EVENT_ON_TIMER_TRANSITION";
  v3[44] = (__int64)"HSM_EVENT_ON_EVENT_TRANSITION";
  v3[45] = (__int64)"HSM_EVENT_ON_RETURN_PARENT";
  return (const char *)v3[event];
}

/*
==============
privatePartySessionHSM_base::ConvertStateToString
==============
*/
const char *privatePartySessionHSM_base::ConvertStateToString(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMStates state)
{
  __int64 v3[24]; 

  if ( state == __HSM_EVENT_NOT_HANDLED__ )
    return "__HSM_EVENT_NOT_HANDLED__";
  if ( state == __HSM_NO_STATE__ )
    return "__HSM_NO_STATE__";
  v3[0] = (__int64)"privatePartySessionHSM";
  v3[1] = (__int64)"st_inactive";
  v3[2] = (__int64)"st_generic_com_error_handling";
  v3[3] = (__int64)"st_cleanup_sessions";
  v3[4] = (__int64)"st_removing_splitscreen_user_from_session_for_cleanup";
  v3[5] = (__int64)"st_removing_user_in_graveyard";
  v3[6] = (__int64)"st_creating_session";
  v3[7] = (__int64)"st_leaving_session";
  v3[8] = (__int64)"st_removing_splitscreen_user_from_session_for_leaving";
  v3[9] = (__int64)"st_host";
  v3[10] = (__int64)"st_updating_session_data";
  v3[11] = (__int64)"st_updating_session_info";
  v3[12] = (__int64)"st_adding_splitscreen_user_to_session_as_host";
  v3[13] = (__int64)"st_removing_splitscreen_user_from_session_as_host";
  v3[14] = (__int64)"st_host_sleep";
  v3[15] = (__int64)"st_host_awaking_session";
  v3[16] = (__int64)"st_host_waiting_for_game_lobby_session_to_shutdown";
  v3[17] = (__int64)"st_joining_session";
  v3[18] = (__int64)"st_client";
  v3[19] = (__int64)"st_adding_splitscreen_user_to_session_as_client";
  v3[20] = (__int64)"st_removing_splitscreen_user_from_session_as_client";
  v3[21] = (__int64)"st_client_sleep";
  v3[22] = (__int64)"st_client_awaking_session";
  return (const char *)v3[state];
}

/*
==============
privatePartySessionHSM_base::HSM_CallStateFunction
==============
*/
privatePartySessionHSM_base::eHSMStates privatePartySessionHSM_base::HSM_CallStateFunction(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMStates state, privatePartySessionHSM_base::eHSMEvents event)
{
  __int64 v3; 
  const char *v6; 
  const char *v7; 
  char _Buffer[256]; 

  v3 = state;
  if ( (unsigned int)state > st_resolve_inviter_universal_id_failed )
    return -1;
  if ( this->m_HSMVerboseDebug && event != WAITING_FOR_JOIN_INFO_TIMED_OUT && event != INVITABLE_PRIVILEGE_EXISTS )
  {
    v6 = privatePartySessionHSM_base::ConvertEventToString(this, event);
    v7 = privatePartySessionHSM_base::ConvertStateToString(this, (privatePartySessionHSM_base::eHSMStates)v3);
    j_sprintf(_Buffer, "%s called for state %s with event %s\n", "privatePartySessionHSM_base::HSM_CallStateFunction", v7, v6);
    this->HSM_PrintDebugInfo(this, _Buffer);
  }
  return privatePartySessionHSM_base::m_HSMStateFunctionList[v3](this, event);
}

/*
==============
privatePartySessionHSM_base::HSM_FindDivergentNodeIndexInPaths
==============
*/
__int64 privatePartySessionHSM_base::HSM_FindDivergentNodeIndexInPaths(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMStates *pathA, privatePartySessionHSM_base::eHSMStates *pathB)
{
  unsigned int v3; 
  __int64 v4; 
  signed __int64 v5; 

  v3 = 0;
  v4 = 0i64;
  v5 = (char *)pathA - (char *)pathB;
  while ( *(privatePartySessionHSM_base::eHSMStates *)((char *)pathB + v5) == *pathB )
  {
    ++v3;
    ++v4;
    ++pathB;
    if ( v4 >= 11 )
      return 11i64;
  }
  return v3;
}

/*
==============
privatePartySessionHSM_base::HSM_GetCurrentState
==============
*/
__int64 privatePartySessionHSM_base::HSM_GetCurrentState(privatePartySessionHSM_base *this)
{
  return (unsigned int)this->m_HSMCurrentState;
}

/*
==============
privatePartySessionHSM_base::HSM_GetParentState
==============
*/
privatePartySessionHSM_base::eHSMStates privatePartySessionHSM_base::HSM_GetParentState(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMStates state)
{
  return privatePartySessionHSM_base::HSM_CallStateFunction(this, state, INVITABLE_PRIVILEGE_EXISTS);
}

/*
==============
privatePartySessionHSM_base::HSM_GetPathToState
==============
*/
__int64 privatePartySessionHSM_base::HSM_GetPathToState(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMStates newHSMState, privatePartySessionHSM_base::eHSMStates *statePathOut)
{
  int v3; 
  __int64 v4; 
  privatePartySessionHSM_base::eHSMStates v8; 
  unsigned int v9; 
  privatePartySessionHSM_base::eHSMStates v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  __int64 result; 
  __int64 v21[7]; 

  v3 = 0;
  v4 = 0i64;
  do
  {
    if ( v4 >= 11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\privatepartysessionhsm_base.cpp", 435, ASSERT_TYPE_ASSERT, "(currentPathDepth < __HSM_MAX_STATE_DEPTH__)", (const char *)&queryFormat, "currentPathDepth < __HSM_MAX_STATE_DEPTH__") )
      __debugbreak();
    *((_DWORD *)&v21[1] + v4) = newHSMState;
    ++v3;
    ++v4;
    v8 = __HSM_NO_STATE__;
    if ( (unsigned int)newHSMState <= st_resolve_inviter_universal_id_failed )
      v8 = privatePartySessionHSM_base::m_HSMStateFunctionList[newHSMState](this, INVITABLE_PRIVILEGE_EXISTS);
    newHSMState = v8;
  }
  while ( v8 != __HSM_NO_STATE__ );
  v9 = v3;
  if ( v3 <= 0 )
    v10 = __HSM_NO_STATE__;
  else
    v10 = *((_DWORD *)&v21[1] + --v3);
  *statePathOut = v10;
  if ( v3 <= 0 )
    v11 = -1;
  else
    v11 = *((_DWORD *)&v21[1] + --v3);
  *((_DWORD *)statePathOut + 1) = v11;
  if ( v3 <= 0 )
    v12 = -1;
  else
    v12 = *((_DWORD *)&v21[1] + --v3);
  *((_DWORD *)statePathOut + 2) = v12;
  if ( v3 <= 0 )
    v13 = -1;
  else
    v13 = *((_DWORD *)&v21[1] + --v3);
  *((_DWORD *)statePathOut + 3) = v13;
  if ( v3 <= 0 )
    v14 = -1;
  else
    v14 = *((_DWORD *)&v21[1] + --v3);
  *((_DWORD *)statePathOut + 4) = v14;
  if ( v3 <= 0 )
    v15 = -1;
  else
    v15 = *((_DWORD *)&v21[1] + --v3);
  *((_DWORD *)statePathOut + 5) = v15;
  if ( v3 <= 0 )
    v16 = -1;
  else
    v16 = *((_DWORD *)&v21[1] + --v3);
  *((_DWORD *)statePathOut + 6) = v16;
  if ( v3 <= 0 )
    v17 = -1;
  else
    v17 = *((_DWORD *)&v21[1] + --v3);
  *((_DWORD *)statePathOut + 7) = v17;
  if ( v3 <= 0 )
    v18 = -1;
  else
    v18 = *((_DWORD *)&v21[1] + --v3);
  *((_DWORD *)statePathOut + 8) = v18;
  if ( v3 <= 0 )
    v19 = -1;
  else
    v19 = *((_DWORD *)&v21[1] + --v3);
  *((_DWORD *)statePathOut + 9) = v19;
  result = v9;
  if ( v3 <= 0 )
    *((_DWORD *)statePathOut + 10) = -1;
  else
    statePathOut[10] = *((privatePartySessionHSM_base::eHSMStates *)v21 + v3 + 1);
  return result;
}

/*
==============
privatePartySessionHSM_base::HSM_Init
==============
*/
void privatePartySessionHSM_base::HSM_Init(privatePartySessionHSM_base *this)
{
  int v2; 
  const char *v3; 
  const char *v4; 
  unsigned int PathToState; 
  __int64 v6; 
  unsigned int m_HSMStateStackSize; 
  __int64 v8; 
  __int64 v9; 
  privatePartySessionHSM_base::eHSMStates *v10; 
  __int64 v11; 
  privatePartySessionHSM_base::eHSMStates v12; 
  __int64 v13; 
  privatePartySessionHSM_base::eHSMStates *v14; 
  privatePartySessionHSM_base::eHSMStates v15; 
  privatePartySessionHSM_base::eHSMStates statePathOut[12]; 
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
    *(_QWORD *)&this->m_HSMStateStack[10] = -1i64;
    *(_QWORD *)&this->m_HSMEvents[1] = -1i64;
    *(_QWORD *)&this->m_HSMEvents[3] = -1i64;
    *(_QWORD *)&this->m_HSMEvents[5] = -1i64;
    *(_QWORD *)&this->m_HSMEvents[7] = -1i64;
    *(_QWORD *)&this->m_HSMEvents[9] = -1i64;
    *(_QWORD *)&this->m_HSMEvents[11] = -1i64;
    *(_QWORD *)&this->m_HSMEvents[13] = -1i64;
    this->m_HSMEvents[15] = HSM_NO_EVENT;
    if ( this->m_HSMVerboseDebug )
    {
      v3 = privatePartySessionHSM_base::ConvertStateToString(this, st_invite_none);
      v4 = privatePartySessionHSM_base::ConvertStateToString(this, this->m_HSMCurrentState);
      j_sprintf(_Buffer, "%s called, going from %s to %s\n", "privatePartySessionHSM_base::HSM_OnTransition", v4, v3);
      this->HSM_PrintDebugInfo(this, _Buffer);
    }
    PathToState = privatePartySessionHSM_base::HSM_GetPathToState(this, st_invite_none, statePathOut);
    v6 = 0i64;
    while ( *(privatePartySessionHSM_base::eHSMStates *)((char *)&statePathOut[v6 + 4] + (char *)this - (char *)statePathOut) == statePathOut[v6] )
    {
      ++v2;
      if ( ++v6 >= 11 )
      {
        v2 = 11;
        break;
      }
    }
    m_HSMStateStackSize = this->m_HSMStateStackSize;
    v8 = (int)(m_HSMStateStackSize - 1);
    v9 = v2;
    if ( v8 >= v2 )
    {
      v10 = &this->m_HSMStateStack[v8];
      v11 = v8 - v9 + 1;
      do
      {
        v12 = *v10--;
        privatePartySessionHSM_base::HSM_CallStateFunction(this, v12, JOINABILITY_VERIFIED);
        --v11;
      }
      while ( v11 );
      m_HSMStateStackSize = this->m_HSMStateStackSize;
    }
    if ( m_HSMStateStackSize < PathToState )
    {
      v13 = PathToState - m_HSMStateStackSize;
      v14 = &statePathOut[m_HSMStateStackSize];
      do
      {
        v15 = *v14++;
        privatePartySessionHSM_base::HSM_CallStateFunction(this, v15, INVITER_UNIVERSAL_ID_RESOLVED);
        --v13;
      }
      while ( v13 );
    }
  }
}

/*
==============
privatePartySessionHSM_base::HSM_IsActive
==============
*/
bool privatePartySessionHSM_base::HSM_IsActive(privatePartySessionHSM_base *this)
{
  return this->m_HSMCurrentState <= (unsigned int)st_resolve_inviter_universal_id_failed;
}

/*
==============
privatePartySessionHSM_base::HSM_IsInState
==============
*/
char privatePartySessionHSM_base::HSM_IsInState(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMStates state)
{
  __int64 m_HSMStateStackSize; 
  __int64 v3; 
  privatePartySessionHSM_base::eHSMStates *i; 

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
privatePartySessionHSM_base::HSM_OnEnterState
==============
*/
void privatePartySessionHSM_base::HSM_OnEnterState(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMStates newState)
{
  bool m_HSMVerboseDebug; 
  __int64 m_HSMStateStackSize; 
  privatePartySessionHSM_base::eHSMStates v6; 
  int v7; 
  const char *v8; 
  char *fmt; 
  char _Buffer[256]; 

  if ( this->m_HSMStateStackSize > 11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\privatepartysessionhsm_base.cpp", 265, ASSERT_TYPE_ASSERT, "(m_HSMStateStackSize <= __HSM_MAX_STATE_DEPTH__)", (const char *)&queryFormat, "m_HSMStateStackSize <= __HSM_MAX_STATE_DEPTH__") )
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
    v8 = privatePartySessionHSM_base::ConvertStateToString(this, newState);
    LODWORD(fmt) = v7;
    j_sprintf(_Buffer, "%s called for state %s new stack size %d\n", "privatePartySessionHSM_base::HSM_OnEnterState", v8, fmt);
    this->HSM_PrintDebugInfo(this, _Buffer);
  }
}

/*
==============
privatePartySessionHSM_base::HSM_OnEvent
==============
*/
void privatePartySessionHSM_base::HSM_OnEvent(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMEvents event)
{
  __int64 v4; 
  privatePartySessionHSM_base::eHSMStates *v5; 
  __int64 v6; 
  const char *v7; 
  const char *v8; 
  char _Buffer[256]; 

  if ( (unsigned int)event <= INVITABLE_PRIVILEGE_MISSING )
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
      if ( (unsigned int)v6 > 0x16 )
        break;
      if ( this->m_HSMVerboseDebug && event != WAITING_FOR_JOIN_INFO_TIMED_OUT && event != INVITABLE_PRIVILEGE_EXISTS )
      {
        v7 = privatePartySessionHSM_base::ConvertEventToString(this, event);
        v8 = privatePartySessionHSM_base::ConvertStateToString(this, (privatePartySessionHSM_base::eHSMStates)v6);
        j_sprintf(_Buffer, "%s called for state %s with event %s\n", "privatePartySessionHSM_base::HSM_CallStateFunction", v8, v7);
        this->HSM_PrintDebugInfo(this, _Buffer);
      }
    }
    while ( privatePartySessionHSM_base::m_HSMStateFunctionList[v6](this, event) == __HSM_EVENT_NOT_HANDLED__ );
  }
}

/*
==============
privatePartySessionHSM_base::HSM_OnExitState
==============
*/
void privatePartySessionHSM_base::HSM_OnExitState(privatePartySessionHSM_base *this)
{
  int v2; 
  const char *v3; 
  __int64 m_HSMStateStackSize; 
  __int64 v5; 
  char *fmt; 
  char _Buffer[256]; 

  if ( this->m_HSMStateStackSize <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\privatepartysessionhsm_base.cpp", 246, ASSERT_TYPE_ASSERT, "(m_HSMStateStackSize > 0)", (const char *)&queryFormat, "m_HSMStateStackSize > 0") )
    __debugbreak();
  if ( this->m_HSMVerboseDebug )
  {
    v2 = this->m_HSMStateStackSize - 1;
    v3 = privatePartySessionHSM_base::ConvertStateToString(this, this->m_HSMCurrentState);
    LODWORD(fmt) = v2;
    j_sprintf(_Buffer, "%s called for state %s new stack size %d\n", "privatePartySessionHSM_base::HSM_OnExitState", v3, fmt);
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
privatePartySessionHSM_base::HSM_OnTransition
==============
*/
void privatePartySessionHSM_base::HSM_OnTransition(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMStates state)
{
  const char *v4; 
  const char *v5; 
  int PathToState; 
  int v7; 
  unsigned int v8; 
  __int64 v9; 
  unsigned int m_HSMStateStackSize; 
  __int64 v11; 
  privatePartySessionHSM_base::eHSMStates *v12; 
  __int64 v13; 
  privatePartySessionHSM_base::eHSMStates v14; 
  __int64 v15; 
  privatePartySessionHSM_base::eHSMStates *v16; 
  privatePartySessionHSM_base::eHSMStates v17; 
  privatePartySessionHSM_base::eHSMStates statePathOut[12]; 
  char _Buffer[256]; 

  if ( this->m_HSMVerboseDebug )
  {
    v4 = privatePartySessionHSM_base::ConvertStateToString(this, state);
    v5 = privatePartySessionHSM_base::ConvertStateToString(this, this->m_HSMCurrentState);
    j_sprintf(_Buffer, "%s called, going from %s to %s\n", "privatePartySessionHSM_base::HSM_OnTransition", v5, v4);
    this->HSM_PrintDebugInfo(this, _Buffer);
  }
  PathToState = privatePartySessionHSM_base::HSM_GetPathToState(this, state, statePathOut);
  v7 = 0;
  v8 = PathToState;
  v9 = 0i64;
  while ( *(privatePartySessionHSM_base::eHSMStates *)((char *)&statePathOut[v9 + 4] + (char *)this - (char *)statePathOut) == statePathOut[v9] )
  {
    ++v7;
    if ( ++v9 >= 11 )
    {
      v7 = 11;
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
      privatePartySessionHSM_base::HSM_CallStateFunction(this, v14, JOINABILITY_VERIFIED);
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
      privatePartySessionHSM_base::HSM_CallStateFunction(this, v17, INVITER_UNIVERSAL_ID_RESOLVED);
      --v15;
    }
    while ( v15 );
  }
}

/*
==============
privatePartySessionHSM_base::HSM_ProcessEvents
==============
*/
void privatePartySessionHSM_base::HSM_ProcessEvents(privatePartySessionHSM_base *this)
{
  __int64 m_HSMPendingEventHeadIndex; 
  privatePartySessionHSM_base::eHSMEvents v3; 
  int v4; 
  __int64 v5; 
  privatePartySessionHSM_base::eHSMStates *v6; 
  privatePartySessionHSM_base::eHSMStates v7; 

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
    if ( (unsigned int)v3 <= INVITABLE_PRIVILEGE_MISSING )
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
      while ( privatePartySessionHSM_base::HSM_CallStateFunction(this, v7, v3) == __HSM_EVENT_NOT_HANDLED__ );
    }
  }
}

/*
==============
privatePartySessionHSM_base::HSM_Shutdown
==============
*/
void privatePartySessionHSM_base::HSM_Shutdown(privatePartySessionHSM_base *this)
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
      if ( (unsigned int)v3 <= 0x16 )
      {
        if ( this->m_HSMVerboseDebug )
        {
          v4 = privatePartySessionHSM_base::ConvertEventToString(this, JOINABILITY_VERIFIED);
          v5 = privatePartySessionHSM_base::ConvertStateToString(this, (privatePartySessionHSM_base::eHSMStates)v3);
          j_sprintf(_Buffer, "%s called for state %s with event %s\n", "privatePartySessionHSM_base::HSM_CallStateFunction", v5, v4);
          this->HSM_PrintDebugInfo(this, _Buffer);
        }
        privatePartySessionHSM_base::m_HSMStateFunctionList[v3](this, JOINABILITY_VERIFIED);
      }
    }
    this->m_HSMCurrentState = __HSM_NO_STATE__;
  }
}

/*
==============
privatePartySessionHSM_base::HSM_StartTimer
==============
*/
void privatePartySessionHSM_base::HSM_StartTimer(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMEvents timerId, int expirationTime)
{
  ;
}

/*
==============
privatePartySessionHSM_base::HSM_StopTimer
==============
*/
void privatePartySessionHSM_base::HSM_StopTimer(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMEvents timerId)
{
  ;
}

/*
==============
privatePartySessionHSM_base::HSM_TriggerEvent
==============
*/
void privatePartySessionHSM_base::HSM_TriggerEvent(privatePartySessionHSM_base *this, privatePartySessionHSM_base::eHSMEvents event)
{
  const char *v4; 
  const char *v5; 
  int m_HSMPendingEventCount; 
  __int64 v7; 
  char _Buffer[256]; 

  if ( (unsigned int)event <= INVITABLE_PRIVILEGE_MISSING )
  {
    if ( this->m_HSMVerboseDebug )
    {
      v4 = privatePartySessionHSM_base::ConvertStateToString(this, this->m_HSMCurrentState);
      v5 = privatePartySessionHSM_base::ConvertEventToString(this, event);
      j_sprintf(_Buffer, "%s with event %s called while in state %s\n", "privatePartySessionHSM_base::HSM_TriggerEvent", v5, v4);
      this->HSM_PrintDebugInfo(this, _Buffer);
    }
    m_HSMPendingEventCount = this->m_HSMPendingEventCount;
    v7 = (m_HSMPendingEventCount + this->m_HSMPendingEventHeadIndex) & 0x8000000F;
    if ( m_HSMPendingEventCount + this->m_HSMPendingEventHeadIndex < 0 )
      v7 = ((unsigned __int8)(((m_HSMPendingEventCount + LOBYTE(this->m_HSMPendingEventHeadIndex)) & 0xF) - 1) | 0xFFFFFFF0) + 1;
    if ( m_HSMPendingEventCount >= 16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\privatepartysessionhsm_base.cpp", 316, ASSERT_TYPE_ASSERT, "(m_HSMPendingEventCount < __HSM_MAX_EVENTS_PER_FRAME__)", (const char *)&queryFormat, "m_HSMPendingEventCount < __HSM_MAX_EVENTS_PER_FRAME__") )
      __debugbreak();
    if ( this->m_HSMEvents[v7] != HSM_NO_EVENT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\privatepartysessionhsm_base.cpp", 320, ASSERT_TYPE_ASSERT, "(m_HSMEvents[ nextUnusedEventIndex ] == HSM_NO_EVENT)", (const char *)&queryFormat, "m_HSMEvents[ nextUnusedEventIndex ] == HSM_NO_EVENT") )
      __debugbreak();
    this->m_HSMEvents[v7] = event;
    ++this->m_HSMPendingEventCount;
  }
}

/*
==============
privatePartySessionHSM_base::HSM_Update
==============
*/
void privatePartySessionHSM_base::HSM_Update(privatePartySessionHSM_base *this, int dt)
{
  __int64 m_HSMPendingEventHeadIndex; 
  privatePartySessionHSM_base::eHSMEvents v4; 
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
      privatePartySessionHSM_base::HSM_OnEvent(this, v4);
    }
    while ( this->m_HSMPendingEventCount > 0 );
  }
  privatePartySessionHSM_base::HSM_OnEvent(this, WAITING_FOR_JOIN_INFO_TIMED_OUT);
}

/*
==============
privatePartySessionHSM_base::HSM_UpdateTimers
==============
*/
void privatePartySessionHSM_base::HSM_UpdateTimers(privatePartySessionHSM_base *this, int dt)
{
  ;
}

