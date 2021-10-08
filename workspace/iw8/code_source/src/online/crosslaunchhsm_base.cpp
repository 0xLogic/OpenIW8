/*
==============
CrosslaunchHSM_base::HSM_OnEnterState
==============
*/

void __fastcall CrosslaunchHSM_base::HSM_OnEnterState(CrosslaunchHSM_base *this, CrosslaunchHSM_base::eHSMStates newState)
{
  ?HSM_OnEnterState@CrosslaunchHSM_base@@AEAAXW4eHSMStates@1@@Z(this, newState);
}

/*
==============
CrosslaunchHSM_base::HSM_Shutdown
==============
*/

void __fastcall CrosslaunchHSM_base::HSM_Shutdown(CrosslaunchHSM_base *this)
{
  ?HSM_Shutdown@CrosslaunchHSM_base@@IEAAXXZ(this);
}

/*
==============
CrosslaunchHSM_base::HSM_StateFunction_st_crosslaunch_cancelled_by_user
==============
*/

CrosslaunchHSM_base::eHSMStates __fastcall CrosslaunchHSM_base::HSM_StateFunction_st_crosslaunch_cancelled_by_user(CrosslaunchHSM_base *this, CrosslaunchHSM_base::eHSMEvents event)
{
  return ?HSM_StateFunction_st_crosslaunch_cancelled_by_user@CrosslaunchHSM_base@@AEAA?AW4eHSMStates@1@W4eHSMEvents@1@@Z(this, event);
}

/*
==============
CrosslaunchHSM_base::HSM_OnExitState
==============
*/

void __fastcall CrosslaunchHSM_base::HSM_OnExitState(CrosslaunchHSM_base *this)
{
  ?HSM_OnExitState@CrosslaunchHSM_base@@AEAAXXZ(this);
}

/*
==============
CrosslaunchHSM_base::~CrosslaunchHSM_base
==============
*/

void __fastcall CrosslaunchHSM_base::~CrosslaunchHSM_base(CrosslaunchHSM_base *this)
{
  ??1CrosslaunchHSM_base@@UEAA@XZ(this);
}

/*
==============
CrosslaunchHSM_base::HSM_CallStateFunction
==============
*/

CrosslaunchHSM_base::eHSMStates __fastcall CrosslaunchHSM_base::HSM_CallStateFunction(CrosslaunchHSM_base *this, CrosslaunchHSM_base::eHSMStates state, CrosslaunchHSM_base::eHSMEvents event)
{
  return ?HSM_CallStateFunction@CrosslaunchHSM_base@@AEAA?AW4eHSMStates@1@W421@W4eHSMEvents@1@@Z(this, state, event);
}

/*
==============
CrosslaunchHSM_base::HSM_StateFunction_st_activate_controller_timeout
==============
*/

CrosslaunchHSM_base::eHSMStates __fastcall CrosslaunchHSM_base::HSM_StateFunction_st_activate_controller_timeout(CrosslaunchHSM_base *this, CrosslaunchHSM_base::eHSMEvents event)
{
  return ?HSM_StateFunction_st_activate_controller_timeout@CrosslaunchHSM_base@@AEAA?AW4eHSMStates@1@W4eHSMEvents@1@@Z(this, event);
}

/*
==============
CrosslaunchHSM_base::ConvertStateToString
==============
*/

const char *__fastcall CrosslaunchHSM_base::ConvertStateToString(CrosslaunchHSM_base *this, CrosslaunchHSM_base::eHSMStates state)
{
  return ?ConvertStateToString@CrosslaunchHSM_base@@IEAAPEBDW4eHSMStates@1@@Z(this, state);
}

/*
==============
CrosslaunchHSM_base::HSM_StateFunction_st_moving_to_target_menu
==============
*/

CrosslaunchHSM_base::eHSMStates __fastcall CrosslaunchHSM_base::HSM_StateFunction_st_moving_to_target_menu(CrosslaunchHSM_base *this, CrosslaunchHSM_base::eHSMEvents event)
{
  return ?HSM_StateFunction_st_moving_to_target_menu@CrosslaunchHSM_base@@AEAA?AW4eHSMStates@1@W4eHSMEvents@1@@Z(this, event);
}

/*
==============
CrosslaunchHSM_base::HSM_GetCurrentState
==============
*/

CrosslaunchHSM_base::eHSMStates __fastcall CrosslaunchHSM_base::HSM_GetCurrentState(CrosslaunchHSM_base *this)
{
  return ?HSM_GetCurrentState@CrosslaunchHSM_base@@QEAA?AW4eHSMStates@1@XZ(this);
}

/*
==============
CrosslaunchHSM_base::CrosslaunchHSM_base
==============
*/

void __fastcall CrosslaunchHSM_base::CrosslaunchHSM_base(CrosslaunchHSM_base *this)
{
  ??0CrosslaunchHSM_base@@QEAA@XZ(this);
}

/*
==============
CrosslaunchHSM_base::HSM_GetParentState
==============
*/

CrosslaunchHSM_base::eHSMStates __fastcall CrosslaunchHSM_base::HSM_GetParentState(CrosslaunchHSM_base *this, CrosslaunchHSM_base::eHSMStates state)
{
  return ?HSM_GetParentState@CrosslaunchHSM_base@@AEAA?AW4eHSMStates@1@W421@@Z(this, state);
}

/*
==============
CrosslaunchHSM_base::HSM_StateFunction_st_crosslaunch_none
==============
*/

CrosslaunchHSM_base::eHSMStates __fastcall CrosslaunchHSM_base::HSM_StateFunction_st_crosslaunch_none(CrosslaunchHSM_base *this, CrosslaunchHSM_base::eHSMEvents event)
{
  return ?HSM_StateFunction_st_crosslaunch_none@CrosslaunchHSM_base@@AEAA?AW4eHSMStates@1@W4eHSMEvents@1@@Z(this, event);
}

/*
==============
CrosslaunchHSM_base::HSM_TriggerEvent
==============
*/

void __fastcall CrosslaunchHSM_base::HSM_TriggerEvent(CrosslaunchHSM_base *this, CrosslaunchHSM_base::eHSMEvents event)
{
  ?HSM_TriggerEvent@CrosslaunchHSM_base@@QEAAXW4eHSMEvents@1@@Z(this, event);
}

/*
==============
CrosslaunchHSM_base::HSM_StateFunction_st_generic_com_error_next_frame_with_msg
==============
*/

CrosslaunchHSM_base::eHSMStates __fastcall CrosslaunchHSM_base::HSM_StateFunction_st_generic_com_error_next_frame_with_msg(CrosslaunchHSM_base *this, CrosslaunchHSM_base::eHSMEvents event)
{
  return ?HSM_StateFunction_st_generic_com_error_next_frame_with_msg@CrosslaunchHSM_base@@AEAA?AW4eHSMStates@1@W4eHSMEvents@1@@Z(this, event);
}

/*
==============
CrosslaunchHSM_base::HSM_Init
==============
*/

void __fastcall CrosslaunchHSM_base::HSM_Init(CrosslaunchHSM_base *this)
{
  ?HSM_Init@CrosslaunchHSM_base@@IEAAXXZ(this);
}

/*
==============
CrosslaunchHSM_base::HSM_StopTimer
==============
*/

void __fastcall CrosslaunchHSM_base::HSM_StopTimer(CrosslaunchHSM_base *this, CrosslaunchHSM_base::eHSMEvents timerId)
{
  ?HSM_StopTimer@CrosslaunchHSM_base@@AEAAXW4eHSMEvents@1@@Z(this, timerId);
}

/*
==============
CrosslaunchHSM_base::HSM_ProcessEvents
==============
*/

void __fastcall CrosslaunchHSM_base::HSM_ProcessEvents(CrosslaunchHSM_base *this)
{
  ?HSM_ProcessEvents@CrosslaunchHSM_base@@AEAAXXZ(this);
}

/*
==============
CrosslaunchHSM_base::HSM_IsInState
==============
*/

bool __fastcall CrosslaunchHSM_base::HSM_IsInState(CrosslaunchHSM_base *this, CrosslaunchHSM_base::eHSMStates state)
{
  return ?HSM_IsInState@CrosslaunchHSM_base@@QEAA_NW4eHSMStates@1@@Z(this, state);
}

/*
==============
CrosslaunchHSM_base::HSM_OnEvent
==============
*/

void __fastcall CrosslaunchHSM_base::HSM_OnEvent(CrosslaunchHSM_base *this, CrosslaunchHSM_base::eHSMEvents event)
{
  ?HSM_OnEvent@CrosslaunchHSM_base@@AEAAXW4eHSMEvents@1@@Z(this, event);
}

/*
==============
CrosslaunchHSM_base::HSM_UpdateTimers
==============
*/

void __fastcall CrosslaunchHSM_base::HSM_UpdateTimers(CrosslaunchHSM_base *this, int dt)
{
  ?HSM_UpdateTimers@CrosslaunchHSM_base@@AEAAXH@Z(this, dt);
}

/*
==============
CrosslaunchHSM_base::HSM_StartTimer
==============
*/

void __fastcall CrosslaunchHSM_base::HSM_StartTimer(CrosslaunchHSM_base *this, CrosslaunchHSM_base::eHSMEvents timerId, int expirationTime)
{
  ?HSM_StartTimer@CrosslaunchHSM_base@@AEAAXW4eHSMEvents@1@H@Z(this, timerId, expirationTime);
}

/*
==============
CrosslaunchHSM_base::HSM_StateFunction_st_activate_controller
==============
*/

CrosslaunchHSM_base::eHSMStates __fastcall CrosslaunchHSM_base::HSM_StateFunction_st_activate_controller(CrosslaunchHSM_base *this, CrosslaunchHSM_base::eHSMEvents event)
{
  return ?HSM_StateFunction_st_activate_controller@CrosslaunchHSM_base@@AEAA?AW4eHSMStates@1@W4eHSMEvents@1@@Z(this, event);
}

/*
==============
CrosslaunchHSM_base::HSM_StateFunction_st_determining_controller_timeout
==============
*/

CrosslaunchHSM_base::eHSMStates __fastcall CrosslaunchHSM_base::HSM_StateFunction_st_determining_controller_timeout(CrosslaunchHSM_base *this, CrosslaunchHSM_base::eHSMEvents event)
{
  return ?HSM_StateFunction_st_determining_controller_timeout@CrosslaunchHSM_base@@AEAA?AW4eHSMStates@1@W4eHSMEvents@1@@Z(this, event);
}

/*
==============
CrosslaunchHSM_base::HSM_StateFunction_st_crosslaunch_error_no_msg
==============
*/

CrosslaunchHSM_base::eHSMStates __fastcall CrosslaunchHSM_base::HSM_StateFunction_st_crosslaunch_error_no_msg(CrosslaunchHSM_base *this, CrosslaunchHSM_base::eHSMEvents event)
{
  return ?HSM_StateFunction_st_crosslaunch_error_no_msg@CrosslaunchHSM_base@@AEAA?AW4eHSMStates@1@W4eHSMEvents@1@@Z(this, event);
}

/*
==============
CrosslaunchHSM_base::HSM_StateFunction_st_handle_error
==============
*/

CrosslaunchHSM_base::eHSMStates __fastcall CrosslaunchHSM_base::HSM_StateFunction_st_handle_error(CrosslaunchHSM_base *this, CrosslaunchHSM_base::eHSMEvents event)
{
  return ?HSM_StateFunction_st_handle_error@CrosslaunchHSM_base@@AEAA?AW4eHSMStates@1@W4eHSMEvents@1@@Z(this, event);
}

/*
==============
CrosslaunchHSM_base::HSM_IsActive
==============
*/

bool __fastcall CrosslaunchHSM_base::HSM_IsActive(CrosslaunchHSM_base *this)
{
  return ?HSM_IsActive@CrosslaunchHSM_base@@IEAA_NXZ(this);
}

/*
==============
CrosslaunchHSM_base::HSM_Update
==============
*/

void __fastcall CrosslaunchHSM_base::HSM_Update(CrosslaunchHSM_base *this, int dt)
{
  ?HSM_Update@CrosslaunchHSM_base@@IEAAXH@Z(this, dt);
}

/*
==============
CrosslaunchHSM_base::HSM_StateFunction_st_preparing_users_for_processing_crosslaunch
==============
*/

CrosslaunchHSM_base::eHSMStates __fastcall CrosslaunchHSM_base::HSM_StateFunction_st_preparing_users_for_processing_crosslaunch(CrosslaunchHSM_base *this, CrosslaunchHSM_base::eHSMEvents event)
{
  return ?HSM_StateFunction_st_preparing_users_for_processing_crosslaunch@CrosslaunchHSM_base@@AEAA?AW4eHSMStates@1@W4eHSMEvents@1@@Z(this, event);
}

/*
==============
CrosslaunchHSM_base::HSM_FindDivergentNodeIndexInPaths
==============
*/

int __fastcall CrosslaunchHSM_base::HSM_FindDivergentNodeIndexInPaths(CrosslaunchHSM_base *this, CrosslaunchHSM_base::eHSMStates *pathA, CrosslaunchHSM_base::eHSMStates *pathB)
{
  return ?HSM_FindDivergentNodeIndexInPaths@CrosslaunchHSM_base@@AEAAHPEAW4eHSMStates@1@0@Z(this, pathA, pathB);
}

/*
==============
CrosslaunchHSM_base::HSM_StateFunction_CrosslaunchHSM
==============
*/

CrosslaunchHSM_base::eHSMStates __fastcall CrosslaunchHSM_base::HSM_StateFunction_CrosslaunchHSM(CrosslaunchHSM_base *this, CrosslaunchHSM_base::eHSMEvents event)
{
  return ?HSM_StateFunction_CrosslaunchHSM@CrosslaunchHSM_base@@AEAA?AW4eHSMStates@1@W4eHSMEvents@1@@Z(this, event);
}

/*
==============
CrosslaunchHSM_base::HSM_StateFunction_st_processing_crosslaunch
==============
*/

CrosslaunchHSM_base::eHSMStates __fastcall CrosslaunchHSM_base::HSM_StateFunction_st_processing_crosslaunch(CrosslaunchHSM_base *this, CrosslaunchHSM_base::eHSMEvents event)
{
  return ?HSM_StateFunction_st_processing_crosslaunch@CrosslaunchHSM_base@@AEAA?AW4eHSMStates@1@W4eHSMEvents@1@@Z(this, event);
}

/*
==============
CrosslaunchHSM_base::HSM_StateFunction_st_moving_to_target_menu_timeout
==============
*/

CrosslaunchHSM_base::eHSMStates __fastcall CrosslaunchHSM_base::HSM_StateFunction_st_moving_to_target_menu_timeout(CrosslaunchHSM_base *this, CrosslaunchHSM_base::eHSMEvents event)
{
  return ?HSM_StateFunction_st_moving_to_target_menu_timeout@CrosslaunchHSM_base@@AEAA?AW4eHSMStates@1@W4eHSMEvents@1@@Z(this, event);
}

/*
==============
CrosslaunchHSM_base::HSM_OnTransition
==============
*/

void __fastcall CrosslaunchHSM_base::HSM_OnTransition(CrosslaunchHSM_base *this, CrosslaunchHSM_base::eHSMStates state)
{
  ?HSM_OnTransition@CrosslaunchHSM_base@@AEAAXW4eHSMStates@1@@Z(this, state);
}

/*
==============
CrosslaunchHSM_base::ConvertEventToString
==============
*/

const char *__fastcall CrosslaunchHSM_base::ConvertEventToString(CrosslaunchHSM_base *this, CrosslaunchHSM_base::eHSMEvents event)
{
  return ?ConvertEventToString@CrosslaunchHSM_base@@IEAAPEBDW4eHSMEvents@1@@Z(this, event);
}

/*
==============
CrosslaunchHSM_base::HSM_GetPathToState
==============
*/

int __fastcall CrosslaunchHSM_base::HSM_GetPathToState(CrosslaunchHSM_base *this, CrosslaunchHSM_base::eHSMStates newHSMState, CrosslaunchHSM_base::eHSMStates *statePathOut)
{
  return ?HSM_GetPathToState@CrosslaunchHSM_base@@AEAAHW4eHSMStates@1@PEAW421@@Z(this, newHSMState, statePathOut);
}

/*
==============
CrosslaunchHSM_base::HSM_StateFunction_CrosslaunchHSM
==============
*/
__int64 CrosslaunchHSM_base::HSM_StateFunction_CrosslaunchHSM(CrosslaunchHSM_base *this, CrosslaunchHSM_base::eHSMEvents event)
{
  __int32 v2; 
  __int32 v3; 
  __int32 v4; 

  if ( event )
  {
    v2 = event - 10;
    if ( !v2 )
    {
      CrosslaunchHSM_base::HSM_OnEnterState(this, __HSM_ROOT_STATE__);
      return 0xFFFFFFFFi64;
    }
    v3 = v2 - 1;
    if ( !v3 )
    {
      CrosslaunchHSM_base::HSM_OnExitState(this);
      return 0xFFFFFFFFi64;
    }
    v4 = v3 - 1;
    if ( v4 && v4 != 5 )
      return 4294967294i64;
  }
  else
  {
    CrosslaunchHSM_base::HSM_OnTransition(this, st_generic_com_error_next_frame_with_msg);
  }
  return 0xFFFFFFFFi64;
}

/*
==============
CrosslaunchHSM_base::HSM_StateFunction_st_crosslaunch_none
==============
*/
__int64 CrosslaunchHSM_base::HSM_StateFunction_st_crosslaunch_none(CrosslaunchHSM_base *this, CrosslaunchHSM_base::eHSMEvents event)
{
  __int32 v2; 
  __int32 v3; 
  __int32 v4; 
  __int32 v5; 

  v2 = event - 1;
  if ( !v2 )
  {
    CrosslaunchHSM_base::HSM_OnTransition(this, st_session_search_timeout);
    return 0xFFFFFFFFi64;
  }
  v3 = v2 - 9;
  if ( !v3 )
  {
    CrosslaunchHSM_base::HSM_OnEnterState(this, st_invite_none);
    return 0xFFFFFFFFi64;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    CrosslaunchHSM_base::HSM_OnExitState(this);
    return 0xFFFFFFFFi64;
  }
  v5 = v4 - 1;
  if ( !v5 )
    return 0xFFFFFFFFi64;
  if ( v5 == 5 )
    return 0i64;
  else
    return 4294967294i64;
}

/*
==============
CrosslaunchHSM_base::HSM_StateFunction_st_handle_error
==============
*/
__int64 CrosslaunchHSM_base::HSM_StateFunction_st_handle_error(CrosslaunchHSM_base *this, CrosslaunchHSM_base::eHSMEvents event)
{
  __int32 v3; 
  __int32 v4; 
  __int32 v5; 

  v3 = event - 10;
  if ( !v3 )
  {
    CrosslaunchHSM_base::HSM_OnEnterState(this, st_handle_error);
    this->CleanupForCrosslaunchFailures(this);
    return 0xFFFFFFFFi64;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    CrosslaunchHSM_base::HSM_OnExitState(this);
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
CrosslaunchHSM_base::HSM_StateFunction_st_crosslaunch_error_no_msg
==============
*/
__int64 CrosslaunchHSM_base::HSM_StateFunction_st_crosslaunch_error_no_msg(CrosslaunchHSM_base *this, CrosslaunchHSM_base::eHSMEvents event)
{
  __int32 v2; 
  __int32 v3; 
  __int32 v4; 

  v2 = event - 10;
  if ( !v2 )
  {
    CrosslaunchHSM_base::HSM_OnEnterState(this, st_invite_error_no_msg);
    return 0xFFFFFFFFi64;
  }
  v3 = v2 - 1;
  if ( !v3 )
  {
    CrosslaunchHSM_base::HSM_OnExitState(this);
    return 0xFFFFFFFFi64;
  }
  v4 = v3 - 1;
  if ( !v4 )
    return 0xFFFFFFFFi64;
  if ( v4 == 5 )
    return 2i64;
  else
    return 4294967294i64;
}

/*
==============
CrosslaunchHSM_base::HSM_StateFunction_st_generic_com_error_next_frame_with_msg
==============
*/
__int64 CrosslaunchHSM_base::HSM_StateFunction_st_generic_com_error_next_frame_with_msg(CrosslaunchHSM_base *this, CrosslaunchHSM_base::eHSMEvents event)
{
  __int32 v2; 
  __int32 v3; 
  __int32 v4; 
  __int32 v5; 

  v2 = event - 2;
  if ( !v2 )
  {
    CrosslaunchHSM_base::HSM_OnTransition(this, st_invite_none);
    return 0xFFFFFFFFi64;
  }
  v3 = v2 - 8;
  if ( !v3 )
  {
    CrosslaunchHSM_base::HSM_OnEnterState(this, st_generic_com_error_next_frame_with_msg);
    return 0xFFFFFFFFi64;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    CrosslaunchHSM_base::HSM_OnExitState(this);
    return 0xFFFFFFFFi64;
  }
  v5 = v4 - 1;
  if ( !v5 )
    return 0xFFFFFFFFi64;
  if ( v5 == 5 )
    return 2i64;
  else
    return 4294967294i64;
}

/*
==============
CrosslaunchHSM_base::HSM_StateFunction_st_crosslaunch_cancelled_by_user
==============
*/
__int64 CrosslaunchHSM_base::HSM_StateFunction_st_crosslaunch_cancelled_by_user(CrosslaunchHSM_base *this, CrosslaunchHSM_base::eHSMEvents event)
{
  __int32 v3; 
  __int32 v4; 
  __int32 v5; 

  v3 = event - 10;
  if ( !v3 )
  {
    CrosslaunchHSM_base::HSM_OnEnterState(this, st_invitee_permissions_timeout);
    this->HandleHSMCallback_CrosslaunchCancelledByUser(this);
    return 0xFFFFFFFFi64;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    CrosslaunchHSM_base::HSM_OnExitState(this);
    return 0xFFFFFFFFi64;
  }
  v5 = v4 - 1;
  if ( !v5 )
    return 0xFFFFFFFFi64;
  if ( v5 == 5 )
    return 2i64;
  else
    return 4294967294i64;
}

/*
==============
CrosslaunchHSM_base::HSM_StateFunction_st_determining_controller_timeout
==============
*/
__int64 CrosslaunchHSM_base::HSM_StateFunction_st_determining_controller_timeout(CrosslaunchHSM_base *this, CrosslaunchHSM_base::eHSMEvents event)
{
  __int32 v3; 
  __int32 v4; 
  __int32 v5; 

  v3 = event - 10;
  if ( !v3 )
  {
    CrosslaunchHSM_base::HSM_OnEnterState(this, st_tu_required_error_with_msg);
    this->HandleHSMCallback_DeterminingControllerTimeout(this);
    return 0xFFFFFFFFi64;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    CrosslaunchHSM_base::HSM_OnExitState(this);
    return 0xFFFFFFFFi64;
  }
  v5 = v4 - 1;
  if ( !v5 )
    return 0xFFFFFFFFi64;
  if ( v5 == 5 )
    return 2i64;
  else
    return 4294967294i64;
}

/*
==============
CrosslaunchHSM_base::HSM_StateFunction_st_activate_controller_timeout
==============
*/
__int64 CrosslaunchHSM_base::HSM_StateFunction_st_activate_controller_timeout(CrosslaunchHSM_base *this, CrosslaunchHSM_base::eHSMEvents event)
{
  __int32 v3; 
  __int32 v4; 
  __int32 v5; 

  v3 = event - 10;
  if ( !v3 )
  {
    CrosslaunchHSM_base::HSM_OnEnterState(this, st_mp_permission_error_with_msg);
    this->HandleHSMCallback_ActivateControllerTimeout(this);
    return 0xFFFFFFFFi64;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    CrosslaunchHSM_base::HSM_OnExitState(this);
    return 0xFFFFFFFFi64;
  }
  v5 = v4 - 1;
  if ( !v5 )
    return 0xFFFFFFFFi64;
  if ( v5 == 5 )
    return 2i64;
  else
    return 4294967294i64;
}

/*
==============
CrosslaunchHSM_base::HSM_StateFunction_st_moving_to_target_menu_timeout
==============
*/
__int64 CrosslaunchHSM_base::HSM_StateFunction_st_moving_to_target_menu_timeout(CrosslaunchHSM_base *this, CrosslaunchHSM_base::eHSMEvents event)
{
  __int32 v3; 
  __int32 v4; 
  __int32 v5; 

  v3 = event - 10;
  if ( !v3 )
  {
    CrosslaunchHSM_base::HSM_OnEnterState(this, st_cant_join_existing_session_with_msg);
    this->HandleHSMCallback_MovingToTargetMenuTimeout(this);
    return 0xFFFFFFFFi64;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    CrosslaunchHSM_base::HSM_OnExitState(this);
    return 0xFFFFFFFFi64;
  }
  v5 = v4 - 1;
  if ( !v5 )
    return 0xFFFFFFFFi64;
  if ( v5 == 5 )
    return 2i64;
  else
    return 4294967294i64;
}

/*
==============
CrosslaunchHSM_base::HSM_StateFunction_st_preparing_users_for_processing_crosslaunch
==============
*/
__int64 CrosslaunchHSM_base::HSM_StateFunction_st_preparing_users_for_processing_crosslaunch(CrosslaunchHSM_base *this, CrosslaunchHSM_base::eHSMEvents event)
{
  __int64 result; 

  switch ( event )
  {
    case START_JOINING_USER_WITH_PLATFORM_ID:
      CrosslaunchHSM_base::HSM_OnTransition(this, st_tu_required_error_with_msg);
      result = 0xFFFFFFFFi64;
      break;
    case START_JOINING_USER_WITH_XUID:
      CrosslaunchHSM_base::HSM_OnTransition(this, st_invitee_permissions_timeout);
      result = 0xFFFFFFFFi64;
      break;
    case START_JOINING_LOBBY:
      CrosslaunchHSM_base::HSM_OnTransition(this, st_invite_processing_timeout);
      result = 0xFFFFFFFFi64;
      break;
    case CHECK_IF_EXE_IS_READY_TO_PROCESS_INVITE_JOIN:
      CrosslaunchHSM_base::HSM_OnEnterState(this, st_session_search_timeout);
      CrosslaunchHSM_base::HSM_StartTimer(this, INVITE_INVITEE_PERMS_TIMEOUT_SHOULD_RETRY, 60000);
      this->HandleHSMCallback_DetermineCrosslaunchControllerStart(this);
      result = 0xFFFFFFFFi64;
      break;
    case INVITE_WAIT_FOR_USER_AUTH:
      CrosslaunchHSM_base::HSM_StopTimer(this, INVITE_INVITEE_PERMS_TIMEOUT_SHOULD_RETRY);
      CrosslaunchHSM_base::HSM_OnExitState(this);
      result = 0xFFFFFFFFi64;
      break;
    case USER_CANCEL_INVITATION:
      this->HandleHSMCallback_WaitForDeterminingCrosslaunchController(this);
      result = 0xFFFFFFFFi64;
      break;
    case INVITE_PERMISSIONS_PASSED:
      result = 0i64;
      break;
    case INVITE_INVITEE_PERMS_TIMEOUT_SHOULD_RETRY:
      CrosslaunchHSM_base::HSM_TriggerEvent(this, START_JOINING_USER_WITH_PLATFORM_ID);
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
CrosslaunchHSM_base::HSM_StateFunction_st_processing_crosslaunch
==============
*/
__int64 CrosslaunchHSM_base::HSM_StateFunction_st_processing_crosslaunch(CrosslaunchHSM_base *this, CrosslaunchHSM_base::eHSMEvents event)
{
  __int32 v2; 
  __int32 v3; 
  __int32 v4; 
  __int32 v5; 

  v2 = event - 4;
  if ( !v2 )
  {
    CrosslaunchHSM_base::HSM_OnTransition(this, st_invitee_permissions_timeout);
    return 0xFFFFFFFFi64;
  }
  v3 = v2 - 6;
  if ( !v3 )
  {
    CrosslaunchHSM_base::HSM_OnEnterState(this, st_atomic_join_fence_timeout);
    return 0xFFFFFFFFi64;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    CrosslaunchHSM_base::HSM_OnExitState(this);
    return 0xFFFFFFFFi64;
  }
  v5 = v4 - 1;
  if ( !v5 )
    return 0xFFFFFFFFi64;
  if ( v5 == 5 )
    return 0i64;
  else
    return 4294967294i64;
}

/*
==============
CrosslaunchHSM_base::HSM_StateFunction_st_activate_controller
==============
*/
__int64 CrosslaunchHSM_base::HSM_StateFunction_st_activate_controller(CrosslaunchHSM_base *this, CrosslaunchHSM_base::eHSMEvents event)
{
  __int64 result; 

  switch ( event )
  {
    case COM_ERROR_TRIGGERED:
      CrosslaunchHSM_base::HSM_OnTransition(this, st_mp_permission_error_with_msg);
      result = 0xFFFFFFFFi64;
      break;
    case INVITE_CANT_DETERMINE_CONTROLLER_PAIRING:
      CrosslaunchHSM_base::HSM_OnTransition(this, st_invalid_controller_pairing);
      result = 0xFFFFFFFFi64;
      break;
    case CHECK_IF_EXE_IS_READY_TO_PROCESS_INVITE_JOIN:
      CrosslaunchHSM_base::HSM_OnEnterState(this, st_invite_processing_timeout);
      CrosslaunchHSM_base::HSM_StartTimer(this, INVITE_INVITEE_PERMS_TIMEOUT_JOIN_FAILED, 10000);
      this->HandleHSMCallback_ActivateController(this);
      result = 0xFFFFFFFFi64;
      break;
    case INVITE_WAIT_FOR_USER_AUTH:
      CrosslaunchHSM_base::HSM_StopTimer(this, INVITE_INVITEE_PERMS_TIMEOUT_JOIN_FAILED);
      CrosslaunchHSM_base::HSM_OnExitState(this);
      result = 0xFFFFFFFFi64;
      break;
    case USER_CANCEL_INVITATION:
      this->HandleHSMCallback_WaitForControllerToBeActive(this);
      result = 0xFFFFFFFFi64;
      break;
    case INVITE_PERMISSIONS_PASSED:
      result = 10i64;
      break;
    case INVITE_INVITEE_PERMS_TIMEOUT_JOIN_FAILED:
      CrosslaunchHSM_base::HSM_TriggerEvent(this, COM_ERROR_TRIGGERED);
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
CrosslaunchHSM_base::HSM_StateFunction_st_moving_to_target_menu
==============
*/
__int64 CrosslaunchHSM_base::HSM_StateFunction_st_moving_to_target_menu(CrosslaunchHSM_base *this, CrosslaunchHSM_base::eHSMEvents event)
{
  __int64 result; 

  switch ( event )
  {
    case INVITE_CHECK_PERMISSIONS:
      CrosslaunchHSM_base::HSM_OnTransition(this, st_cant_join_existing_session_with_msg);
      result = 0xFFFFFFFFi64;
      break;
    case EULA_VERIFIED:
      this->CleanupCrosslaunch(this);
      CrosslaunchHSM_base::HSM_OnTransition(this, st_invite_none);
      result = 0xFFFFFFFFi64;
      break;
    case CHECK_IF_EXE_IS_READY_TO_PROCESS_INVITE_JOIN:
      CrosslaunchHSM_base::HSM_OnEnterState(this, st_invalid_controller_pairing);
      CrosslaunchHSM_base::HSM_StartTimer(this, INVITE_INVITEE_PERMS_TIMEOUT, 150000);
      this->HandleHSMCallback_StartMovingToTargetMenu(this);
      result = 0xFFFFFFFFi64;
      break;
    case INVITE_WAIT_FOR_USER_AUTH:
      CrosslaunchHSM_base::HSM_StopTimer(this, INVITE_INVITEE_PERMS_TIMEOUT);
      CrosslaunchHSM_base::HSM_OnExitState(this);
      result = 0xFFFFFFFFi64;
      break;
    case USER_CANCEL_INVITATION:
      this->HandleHSMCallback_WaitForTargetMenu(this);
      result = 0xFFFFFFFFi64;
      break;
    case INVITE_PERMISSIONS_PASSED:
      result = 10i64;
      break;
    case INVITE_INVITEE_PERMS_TIMEOUT:
      CrosslaunchHSM_base::HSM_TriggerEvent(this, INVITE_CHECK_PERMISSIONS);
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
CrosslaunchHSM_base::CrosslaunchHSM_base
==============
*/
void CrosslaunchHSM_base::CrosslaunchHSM_base(CrosslaunchHSM_base *this)
{
  this->m_HSMCurrentState = __HSM_NO_STATE__;
  this->__vftable = (CrosslaunchHSM_base_vtbl *)&CrosslaunchHSM_base::`vftable';
  *(_QWORD *)&this->m_HSMPendingEventHeadIndex = 0i64;
  this->m_HSMPendingEventCount = 0;
  this->m_HSMVerboseDebug = 0;
}

/*
==============
CrosslaunchHSM_base::~CrosslaunchHSM_base
==============
*/
void CrosslaunchHSM_base::~CrosslaunchHSM_base(CrosslaunchHSM_base *this)
{
  this->__vftable = (CrosslaunchHSM_base_vtbl *)&CrosslaunchHSM_base::`vftable';
  if ( this->m_HSMCurrentState != __HSM_NO_STATE__ )
  {
    while ( this->m_HSMStateStackSize > 0 )
      CrosslaunchHSM_base::HSM_CallStateFunction(this, *(&this->m_HSMCurrentState + this->m_HSMStateStackSize), INVITE_WAIT_FOR_USER_AUTH);
    this->m_HSMCurrentState = __HSM_NO_STATE__;
  }
}

/*
==============
CrosslaunchHSM_base::ConvertEventToString
==============
*/
const char *CrosslaunchHSM_base::ConvertEventToString(CrosslaunchHSM_base *this, CrosslaunchHSM_base::eHSMEvents event)
{
  __int64 v3[22]; 

  if ( event == HSM_NO_EVENT )
    return "HSM_NO_EVENT";
  v3[0] = (__int64)"CROSSLAUNCH_GENERIC_COM_ERROR";
  v3[1] = (__int64)"CROSSLAUNCH_REQUEST_RECEIVED";
  v3[2] = (__int64)"COM_ERROR_TRIGGERED";
  v3[3] = (__int64)"DETERMINE_CONTROLLER_TIMEOUT";
  v3[4] = (__int64)"USER_CANCEL_CROSSLAUNCH";
  v3[5] = (__int64)"CONTROLLER_DETERMINED";
  v3[6] = (__int64)"ACTIVATE_CONTROLLER_TIMEOUT";
  v3[7] = (__int64)"CONTROLLER_ACTIVATED";
  v3[8] = (__int64)"MOVING_TO_TARGET_MENU_TIMEOUT";
  v3[9] = (__int64)"TARGET_MENU_OPENED";
  v3[10] = (__int64)"HSM_EVENT_ON_ENTER";
  v3[11] = (__int64)"HSM_EVENT_ON_EXIT";
  v3[12] = (__int64)"HSM_EVENT_ON_UPDATE";
  v3[13] = (__int64)"HSM_EVENT_ON_TIMER_DO";
  v3[14] = (__int64)"HSM_EVENT_ON_TIMER_TRIGGER";
  v3[15] = (__int64)"HSM_EVENT_ON_TIMER_TRANSITION";
  v3[16] = (__int64)"HSM_EVENT_ON_EVENT_TRANSITION";
  v3[17] = (__int64)"HSM_EVENT_ON_RETURN_PARENT";
  v3[18] = (__int64)"HSM_EVENT_TIMER0";
  v3[19] = (__int64)"HSM_EVENT_TIMER1";
  v3[20] = (__int64)"HSM_EVENT_TIMER2";
  return (const char *)v3[event];
}

/*
==============
CrosslaunchHSM_base::ConvertStateToString
==============
*/
const char *CrosslaunchHSM_base::ConvertStateToString(CrosslaunchHSM_base *this, CrosslaunchHSM_base::eHSMStates state)
{
  __int64 v3[14]; 

  if ( state == __HSM_EVENT_NOT_HANDLED__ )
    return "__HSM_EVENT_NOT_HANDLED__";
  if ( state == __HSM_NO_STATE__ )
    return "__HSM_NO_STATE__";
  v3[0] = (__int64)"CrosslaunchHSM";
  v3[1] = (__int64)"st_crosslaunch_none";
  v3[2] = (__int64)"st_handle_error";
  v3[3] = (__int64)"st_crosslaunch_error_no_msg";
  v3[4] = (__int64)"st_generic_com_error_next_frame_with_msg";
  v3[5] = (__int64)"st_crosslaunch_cancelled_by_user";
  v3[6] = (__int64)"st_determining_controller_timeout";
  v3[7] = (__int64)"st_activate_controller_timeout";
  v3[8] = (__int64)"st_moving_to_target_menu_timeout";
  v3[9] = (__int64)"st_preparing_users_for_processing_crosslaunch";
  v3[10] = (__int64)"st_processing_crosslaunch";
  v3[11] = (__int64)"st_activate_controller";
  v3[12] = (__int64)"st_moving_to_target_menu";
  return (const char *)v3[state];
}

/*
==============
CrosslaunchHSM_base::HSM_CallStateFunction
==============
*/
CrosslaunchHSM_base::eHSMStates CrosslaunchHSM_base::HSM_CallStateFunction(CrosslaunchHSM_base *this, CrosslaunchHSM_base::eHSMStates state, CrosslaunchHSM_base::eHSMEvents event)
{
  __int64 v3; 
  const char *v6; 
  const char *v7; 
  char _Buffer[256]; 

  v3 = state;
  if ( (unsigned int)state > st_invalid_controller_pairing )
    return -1;
  if ( this->m_HSMVerboseDebug && event != USER_CANCEL_INVITATION && event != INVITE_PERMISSIONS_PASSED )
  {
    v6 = CrosslaunchHSM_base::ConvertEventToString(this, event);
    v7 = CrosslaunchHSM_base::ConvertStateToString(this, (CrosslaunchHSM_base::eHSMStates)v3);
    j_sprintf(_Buffer, "%s called for state %s with event %s\n", "CrosslaunchHSM_base::HSM_CallStateFunction", v7, v6);
    this->HSM_PrintDebugInfo(this, _Buffer);
  }
  return CrosslaunchHSM_base::m_HSMStateFunctionList[v3](this, event);
}

/*
==============
CrosslaunchHSM_base::HSM_FindDivergentNodeIndexInPaths
==============
*/
__int64 CrosslaunchHSM_base::HSM_FindDivergentNodeIndexInPaths(CrosslaunchHSM_base *this, CrosslaunchHSM_base::eHSMStates *pathA, CrosslaunchHSM_base::eHSMStates *pathB)
{
  unsigned int v3; 
  __int64 v4; 
  signed __int64 v5; 

  v3 = 0;
  v4 = 0i64;
  v5 = (char *)pathA - (char *)pathB;
  while ( *(CrosslaunchHSM_base::eHSMStates *)((char *)pathB + v5) == *pathB )
  {
    ++v3;
    ++v4;
    ++pathB;
    if ( v4 >= 8 )
      return 8i64;
  }
  return v3;
}

/*
==============
CrosslaunchHSM_base::HSM_GetCurrentState
==============
*/
__int64 CrosslaunchHSM_base::HSM_GetCurrentState(CrosslaunchHSM_base *this)
{
  return (unsigned int)this->m_HSMCurrentState;
}

/*
==============
CrosslaunchHSM_base::HSM_GetParentState
==============
*/
CrosslaunchHSM_base::eHSMStates CrosslaunchHSM_base::HSM_GetParentState(CrosslaunchHSM_base *this, CrosslaunchHSM_base::eHSMStates state)
{
  return CrosslaunchHSM_base::HSM_CallStateFunction(this, state, INVITE_PERMISSIONS_PASSED);
}

/*
==============
CrosslaunchHSM_base::HSM_GetPathToState
==============
*/
__int64 CrosslaunchHSM_base::HSM_GetPathToState(CrosslaunchHSM_base *this, CrosslaunchHSM_base::eHSMStates newHSMState, CrosslaunchHSM_base::eHSMStates *statePathOut)
{
  int v3; 
  __int64 v4; 
  CrosslaunchHSM_base::eHSMStates v8; 
  unsigned int v9; 
  CrosslaunchHSM_base::eHSMStates v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  __int64 result; 
  __int64 v18[5]; 

  v3 = 0;
  v4 = 0i64;
  do
  {
    if ( v4 >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\crosslaunchhsm_base.cpp", 390, ASSERT_TYPE_ASSERT, "(currentPathDepth < __HSM_MAX_STATE_DEPTH__)", (const char *)&queryFormat, "currentPathDepth < __HSM_MAX_STATE_DEPTH__") )
      __debugbreak();
    *((_DWORD *)&v18[1] + v4) = newHSMState;
    ++v3;
    ++v4;
    v8 = __HSM_NO_STATE__;
    if ( (unsigned int)newHSMState <= st_invalid_controller_pairing )
      v8 = CrosslaunchHSM_base::m_HSMStateFunctionList[newHSMState](this, INVITE_PERMISSIONS_PASSED);
    newHSMState = v8;
  }
  while ( v8 != __HSM_NO_STATE__ );
  v9 = v3;
  if ( v3 <= 0 )
    v10 = __HSM_NO_STATE__;
  else
    v10 = *((_DWORD *)&v18[1] + --v3);
  *statePathOut = v10;
  if ( v3 <= 0 )
    v11 = -1;
  else
    v11 = *((_DWORD *)&v18[1] + --v3);
  *((_DWORD *)statePathOut + 1) = v11;
  if ( v3 <= 0 )
    v12 = -1;
  else
    v12 = *((_DWORD *)&v18[1] + --v3);
  *((_DWORD *)statePathOut + 2) = v12;
  if ( v3 <= 0 )
    v13 = -1;
  else
    v13 = *((_DWORD *)&v18[1] + --v3);
  *((_DWORD *)statePathOut + 3) = v13;
  if ( v3 <= 0 )
    v14 = -1;
  else
    v14 = *((_DWORD *)&v18[1] + --v3);
  *((_DWORD *)statePathOut + 4) = v14;
  if ( v3 <= 0 )
    v15 = -1;
  else
    v15 = *((_DWORD *)&v18[1] + --v3);
  *((_DWORD *)statePathOut + 5) = v15;
  if ( v3 <= 0 )
    v16 = -1;
  else
    v16 = *((_DWORD *)&v18[1] + --v3);
  *((_DWORD *)statePathOut + 6) = v16;
  result = v9;
  if ( v3 <= 0 )
    *((_DWORD *)statePathOut + 7) = -1;
  else
    statePathOut[7] = *((CrosslaunchHSM_base::eHSMStates *)v18 + v3 + 1);
  return result;
}

/*
==============
CrosslaunchHSM_base::HSM_Init
==============
*/
void CrosslaunchHSM_base::HSM_Init(CrosslaunchHSM_base *this)
{
  int v2; 
  const char *v3; 
  unsigned int PathToState; 
  __int64 v5; 
  unsigned int m_HSMStateStackSize; 
  __int64 v7; 
  __int64 v8; 
  CrosslaunchHSM_base::eHSMStates *v9; 
  __int64 v10; 
  CrosslaunchHSM_base::eHSMStates v11; 
  __int64 v12; 
  CrosslaunchHSM_base::eHSMStates *v13; 
  CrosslaunchHSM_base::eHSMStates v14; 
  CrosslaunchHSM_base::eHSMStates statePathOut[8]; 
  char _Buffer[256]; 

  if ( this->m_HSMCurrentState == __HSM_NO_STATE__ )
  {
    v2 = 0;
    *(_QWORD *)&this->m_HSMPendingEventCount = 0i64;
    *(_QWORD *)this->m_HSMStateStack = -1i64;
    *(_QWORD *)&this->m_HSMStateStack[2] = -1i64;
    *(_QWORD *)&this->m_HSMStateStack[4] = -1i64;
    *(_QWORD *)&this->m_HSMStateStack[6] = -1i64;
    *(_QWORD *)this->m_HSMEvents = -1i64;
    *(_QWORD *)&this->m_HSMEvents[2] = -1i64;
    *(_QWORD *)&this->m_HSMEvents[4] = -1i64;
    *(_QWORD *)&this->m_HSMEvents[6] = -1i64;
    *(_QWORD *)&this->m_HSMEvents[8] = -1i64;
    *(_QWORD *)&this->m_HSMEvents[10] = -1i64;
    *(_QWORD *)&this->m_HSMEvents[12] = -1i64;
    *(_QWORD *)&this->m_HSMEvents[14] = -1i64;
    *(_QWORD *)this->m_HSMTimers = 0i64;
    this->m_HSMTimers[2] = 0;
    if ( this->m_HSMVerboseDebug )
    {
      v3 = CrosslaunchHSM_base::ConvertStateToString(this, this->m_HSMCurrentState);
      j_sprintf(_Buffer, "%s called, going from %s to %s\n", "CrosslaunchHSM_base::HSM_OnTransition", v3, "st_crosslaunch_none");
      this->HSM_PrintDebugInfo(this, _Buffer);
    }
    PathToState = CrosslaunchHSM_base::HSM_GetPathToState(this, st_invite_none, statePathOut);
    v5 = 0i64;
    while ( *(CrosslaunchHSM_base::eHSMStates *)((char *)&statePathOut[v5 + 4] + (char *)this - (char *)statePathOut) == statePathOut[v5] )
    {
      ++v2;
      if ( ++v5 >= 8 )
      {
        v2 = 8;
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
        CrosslaunchHSM_base::HSM_CallStateFunction(this, v11, INVITE_WAIT_FOR_USER_AUTH);
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
        CrosslaunchHSM_base::HSM_CallStateFunction(this, v14, CHECK_IF_EXE_IS_READY_TO_PROCESS_INVITE_JOIN);
        --v12;
      }
      while ( v12 );
    }
  }
}

/*
==============
CrosslaunchHSM_base::HSM_IsActive
==============
*/
bool CrosslaunchHSM_base::HSM_IsActive(CrosslaunchHSM_base *this)
{
  return this->m_HSMCurrentState <= (unsigned int)st_invalid_controller_pairing;
}

/*
==============
CrosslaunchHSM_base::HSM_IsInState
==============
*/
char CrosslaunchHSM_base::HSM_IsInState(CrosslaunchHSM_base *this, CrosslaunchHSM_base::eHSMStates state)
{
  __int64 m_HSMStateStackSize; 
  __int64 v3; 
  CrosslaunchHSM_base::eHSMStates *i; 

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
CrosslaunchHSM_base::HSM_OnEnterState
==============
*/
void CrosslaunchHSM_base::HSM_OnEnterState(CrosslaunchHSM_base *this, CrosslaunchHSM_base::eHSMStates newState)
{
  bool m_HSMVerboseDebug; 
  __int64 m_HSMStateStackSize; 
  CrosslaunchHSM_base::eHSMStates v6; 
  int v7; 
  const char *v8; 
  char *fmt; 
  char _Buffer[256]; 

  if ( this->m_HSMStateStackSize > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\crosslaunchhsm_base.cpp", 220, ASSERT_TYPE_ASSERT, "(m_HSMStateStackSize <= __HSM_MAX_STATE_DEPTH__)", (const char *)&queryFormat, "m_HSMStateStackSize <= __HSM_MAX_STATE_DEPTH__") )
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
    v8 = CrosslaunchHSM_base::ConvertStateToString(this, newState);
    LODWORD(fmt) = v7;
    j_sprintf(_Buffer, "%s called for state %s new stack size %d\n", "CrosslaunchHSM_base::HSM_OnEnterState", v8, fmt);
    this->HSM_PrintDebugInfo(this, _Buffer);
  }
}

/*
==============
CrosslaunchHSM_base::HSM_OnEvent
==============
*/
void CrosslaunchHSM_base::HSM_OnEvent(CrosslaunchHSM_base *this, CrosslaunchHSM_base::eHSMEvents event)
{
  __int64 v4; 
  CrosslaunchHSM_base::eHSMStates *v5; 
  __int64 v6; 
  const char *v7; 
  const char *v8; 
  char _Buffer[256]; 

  if ( (unsigned int)event <= INVITE_INVITEE_PERMS_TIMEOUT )
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
      if ( (unsigned int)v6 > 0xC )
        break;
      if ( this->m_HSMVerboseDebug && event != USER_CANCEL_INVITATION && event != INVITE_PERMISSIONS_PASSED )
      {
        v7 = CrosslaunchHSM_base::ConvertEventToString(this, event);
        v8 = CrosslaunchHSM_base::ConvertStateToString(this, (CrosslaunchHSM_base::eHSMStates)v6);
        j_sprintf(_Buffer, "%s called for state %s with event %s\n", "CrosslaunchHSM_base::HSM_CallStateFunction", v8, v7);
        this->HSM_PrintDebugInfo(this, _Buffer);
      }
    }
    while ( CrosslaunchHSM_base::m_HSMStateFunctionList[v6](this, event) == __HSM_EVENT_NOT_HANDLED__ );
  }
}

/*
==============
CrosslaunchHSM_base::HSM_OnExitState
==============
*/
void CrosslaunchHSM_base::HSM_OnExitState(CrosslaunchHSM_base *this)
{
  int v2; 
  const char *v3; 
  __int64 m_HSMStateStackSize; 
  __int64 v5; 
  char *fmt; 
  char _Buffer[256]; 

  if ( this->m_HSMStateStackSize <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\crosslaunchhsm_base.cpp", 201, ASSERT_TYPE_ASSERT, "(m_HSMStateStackSize > 0)", (const char *)&queryFormat, "m_HSMStateStackSize > 0") )
    __debugbreak();
  if ( this->m_HSMVerboseDebug )
  {
    v2 = this->m_HSMStateStackSize - 1;
    v3 = CrosslaunchHSM_base::ConvertStateToString(this, this->m_HSMCurrentState);
    LODWORD(fmt) = v2;
    j_sprintf(_Buffer, "%s called for state %s new stack size %d\n", "CrosslaunchHSM_base::HSM_OnExitState", v3, fmt);
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
CrosslaunchHSM_base::HSM_OnTransition
==============
*/
void CrosslaunchHSM_base::HSM_OnTransition(CrosslaunchHSM_base *this, CrosslaunchHSM_base::eHSMStates state)
{
  const char *v4; 
  const char *v5; 
  int PathToState; 
  int v7; 
  unsigned int v8; 
  __int64 v9; 
  unsigned int m_HSMStateStackSize; 
  __int64 v11; 
  CrosslaunchHSM_base::eHSMStates *v12; 
  __int64 v13; 
  CrosslaunchHSM_base::eHSMStates v14; 
  __int64 v15; 
  CrosslaunchHSM_base::eHSMStates *v16; 
  CrosslaunchHSM_base::eHSMStates v17; 
  CrosslaunchHSM_base::eHSMStates statePathOut[8]; 
  char _Buffer[256]; 

  if ( this->m_HSMVerboseDebug )
  {
    v4 = CrosslaunchHSM_base::ConvertStateToString(this, state);
    v5 = CrosslaunchHSM_base::ConvertStateToString(this, this->m_HSMCurrentState);
    j_sprintf(_Buffer, "%s called, going from %s to %s\n", "CrosslaunchHSM_base::HSM_OnTransition", v5, v4);
    this->HSM_PrintDebugInfo(this, _Buffer);
  }
  PathToState = CrosslaunchHSM_base::HSM_GetPathToState(this, state, statePathOut);
  v7 = 0;
  v8 = PathToState;
  v9 = 0i64;
  while ( *(CrosslaunchHSM_base::eHSMStates *)((char *)&statePathOut[v9 + 4] + (char *)this - (char *)statePathOut) == statePathOut[v9] )
  {
    ++v7;
    if ( ++v9 >= 8 )
    {
      v7 = 8;
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
      CrosslaunchHSM_base::HSM_CallStateFunction(this, v14, INVITE_WAIT_FOR_USER_AUTH);
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
      CrosslaunchHSM_base::HSM_CallStateFunction(this, v17, CHECK_IF_EXE_IS_READY_TO_PROCESS_INVITE_JOIN);
      --v15;
    }
    while ( v15 );
  }
}

/*
==============
CrosslaunchHSM_base::HSM_ProcessEvents
==============
*/
void CrosslaunchHSM_base::HSM_ProcessEvents(CrosslaunchHSM_base *this)
{
  __int64 m_HSMPendingEventHeadIndex; 
  CrosslaunchHSM_base::eHSMEvents v3; 
  int v4; 
  __int64 v5; 
  CrosslaunchHSM_base::eHSMStates *v6; 
  CrosslaunchHSM_base::eHSMStates v7; 

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
    if ( (unsigned int)v3 <= INVITE_INVITEE_PERMS_TIMEOUT )
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
      while ( CrosslaunchHSM_base::HSM_CallStateFunction(this, v7, v3) == __HSM_EVENT_NOT_HANDLED__ );
    }
  }
}

/*
==============
CrosslaunchHSM_base::HSM_Shutdown
==============
*/
void CrosslaunchHSM_base::HSM_Shutdown(CrosslaunchHSM_base *this)
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
      if ( (unsigned int)v3 <= 0xC )
      {
        if ( this->m_HSMVerboseDebug )
        {
          v4 = CrosslaunchHSM_base::ConvertEventToString(this, INVITE_WAIT_FOR_USER_AUTH);
          v5 = CrosslaunchHSM_base::ConvertStateToString(this, (CrosslaunchHSM_base::eHSMStates)v3);
          j_sprintf(_Buffer, "%s called for state %s with event %s\n", "CrosslaunchHSM_base::HSM_CallStateFunction", v5, v4);
          this->HSM_PrintDebugInfo(this, _Buffer);
        }
        CrosslaunchHSM_base::m_HSMStateFunctionList[v3](this, INVITE_WAIT_FOR_USER_AUTH);
      }
    }
    this->m_HSMCurrentState = __HSM_NO_STATE__;
  }
}

/*
==============
CrosslaunchHSM_base::HSM_StartTimer
==============
*/
void CrosslaunchHSM_base::HSM_StartTimer(CrosslaunchHSM_base *this, CrosslaunchHSM_base::eHSMEvents timerId, int expirationTime)
{
  __int64 v4; 
  const char *v6; 
  int v7; 
  char _Buffer[256]; 

  v4 = timerId;
  if ( this->m_HSMVerboseDebug )
  {
    v6 = CrosslaunchHSM_base::ConvertEventToString(this, timerId);
    v7 = expirationTime;
    j_sprintf(_Buffer, "%s called for timer %s expirationTime %d\n", "CrosslaunchHSM_base::HSM_StartTimer", v6, v7);
    this->HSM_PrintDebugInfo(this, _Buffer);
    this->m_HSMEvents[v4 + 1] = expirationTime;
  }
  else
  {
    this->m_HSMEvents[timerId + 1] = expirationTime;
  }
}

/*
==============
CrosslaunchHSM_base::HSM_StopTimer
==============
*/
void CrosslaunchHSM_base::HSM_StopTimer(CrosslaunchHSM_base *this, CrosslaunchHSM_base::eHSMEvents timerId)
{
  __int64 v3; 
  const char *v4; 
  CrosslaunchHSM_base::eHSMEvents v5; 
  char _Buffer[256]; 

  v3 = timerId;
  if ( this->m_HSMVerboseDebug )
  {
    v4 = CrosslaunchHSM_base::ConvertEventToString(this, timerId);
    v5 = this->m_HSMEvents[v3 + 1];
    j_sprintf(_Buffer, "%s called for timer %s time left on timer %d\n", "CrosslaunchHSM_base::HSM_StopTimer", v4, v5);
    this->HSM_PrintDebugInfo(this, _Buffer);
    this->m_HSMEvents[v3 + 1] = INVITE_GENERIC_COM_ERROR;
  }
  else
  {
    this->m_HSMEvents[timerId + 1] = INVITE_GENERIC_COM_ERROR;
  }
}

/*
==============
CrosslaunchHSM_base::HSM_TriggerEvent
==============
*/
void CrosslaunchHSM_base::HSM_TriggerEvent(CrosslaunchHSM_base *this, CrosslaunchHSM_base::eHSMEvents event)
{
  const char *v4; 
  const char *v5; 
  int m_HSMPendingEventCount; 
  __int64 v7; 
  char _Buffer[256]; 

  if ( (unsigned int)event <= INVITE_INVITEE_PERMS_TIMEOUT )
  {
    if ( this->m_HSMVerboseDebug )
    {
      v4 = CrosslaunchHSM_base::ConvertStateToString(this, this->m_HSMCurrentState);
      v5 = CrosslaunchHSM_base::ConvertEventToString(this, event);
      j_sprintf(_Buffer, "%s with event %s called while in state %s\n", "CrosslaunchHSM_base::HSM_TriggerEvent", v5, v4);
      this->HSM_PrintDebugInfo(this, _Buffer);
    }
    m_HSMPendingEventCount = this->m_HSMPendingEventCount;
    v7 = (m_HSMPendingEventCount + this->m_HSMPendingEventHeadIndex) & 0x8000000F;
    if ( m_HSMPendingEventCount + this->m_HSMPendingEventHeadIndex < 0 )
      v7 = ((unsigned __int8)(((m_HSMPendingEventCount + LOBYTE(this->m_HSMPendingEventHeadIndex)) & 0xF) - 1) | 0xFFFFFFF0) + 1;
    if ( m_HSMPendingEventCount >= 16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\crosslaunchhsm_base.cpp", 271, ASSERT_TYPE_ASSERT, "(m_HSMPendingEventCount < __HSM_MAX_EVENTS_PER_FRAME__)", (const char *)&queryFormat, "m_HSMPendingEventCount < __HSM_MAX_EVENTS_PER_FRAME__") )
      __debugbreak();
    if ( this->m_HSMEvents[v7] != HSM_NO_EVENT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\crosslaunchhsm_base.cpp", 275, ASSERT_TYPE_ASSERT, "(m_HSMEvents[ nextUnusedEventIndex ] == HSM_NO_EVENT)", (const char *)&queryFormat, "m_HSMEvents[ nextUnusedEventIndex ] == HSM_NO_EVENT") )
      __debugbreak();
    this->m_HSMEvents[v7] = event;
    ++this->m_HSMPendingEventCount;
  }
}

/*
==============
CrosslaunchHSM_base::HSM_Update
==============
*/
void CrosslaunchHSM_base::HSM_Update(CrosslaunchHSM_base *this, int dt)
{
  int *m_HSMTimers; 
  int i; 
  int v6; 
  int v7; 
  __int64 m_HSMPendingEventHeadIndex; 
  CrosslaunchHSM_base::eHSMEvents v9; 
  int v10; 

  if ( this->m_HSMCurrentState == __HSM_NO_STATE__ )
    goto LABEL_13;
  m_HSMTimers = this->m_HSMTimers;
  for ( i = 0; i < 3; ++i )
  {
    v6 = *m_HSMTimers;
    if ( *m_HSMTimers <= 0 )
      goto LABEL_8;
    if ( v6 >= dt )
    {
      v7 = v6 - dt;
      *m_HSMTimers = v7;
      if ( v7 )
        goto LABEL_8;
    }
    else
    {
      *m_HSMTimers = 0;
    }
    CrosslaunchHSM_base::HSM_TriggerEvent(this, (CrosslaunchHSM_base::eHSMEvents)(i + 18));
LABEL_8:
    ++m_HSMTimers;
  }
  while ( this->m_HSMPendingEventCount > 0 )
  {
    m_HSMPendingEventHeadIndex = this->m_HSMPendingEventHeadIndex;
    v9 = this->m_HSMEvents[m_HSMPendingEventHeadIndex];
    this->m_HSMEvents[m_HSMPendingEventHeadIndex] = HSM_NO_EVENT;
    v10 = ++this->m_HSMPendingEventHeadIndex;
    --this->m_HSMPendingEventCount;
    if ( v10 >= 16 )
      v10 = 0;
    this->m_HSMPendingEventHeadIndex = v10;
    CrosslaunchHSM_base::HSM_OnEvent(this, v9);
  }
LABEL_13:
  CrosslaunchHSM_base::HSM_OnEvent(this, USER_CANCEL_INVITATION);
}

/*
==============
CrosslaunchHSM_base::HSM_UpdateTimers
==============
*/
void CrosslaunchHSM_base::HSM_UpdateTimers(CrosslaunchHSM_base *this, int dt)
{
  CrosslaunchHSM_base::eHSMEvents v2; 
  __int64 v5; 
  __int64 v6; 
  int v7; 
  int v8; 
  const char *v9; 
  const char *v10; 
  int m_HSMPendingEventCount; 
  __int64 v12; 
  char _Buffer[256]; 

  v2 = INVITE_INVITEE_PERMS_TIMEOUT_SHOULD_RETRY;
  v5 = 124i64;
  v6 = 3i64;
  do
  {
    v7 = *(_DWORD *)((char *)&this->__vftable + v5);
    if ( v7 > 0 )
    {
      v8 = 0;
      if ( v7 >= dt )
        v8 = v7 - dt;
      *(_DWORD *)((char *)&this->__vftable + v5) = v8;
      if ( !v8 && (unsigned int)v2 <= INVITE_INVITEE_PERMS_TIMEOUT )
      {
        if ( this->m_HSMVerboseDebug )
        {
          v9 = CrosslaunchHSM_base::ConvertStateToString(this, this->m_HSMCurrentState);
          v10 = CrosslaunchHSM_base::ConvertEventToString(this, v2);
          j_sprintf(_Buffer, "%s with event %s called while in state %s\n", "CrosslaunchHSM_base::HSM_TriggerEvent", v10, v9);
          this->HSM_PrintDebugInfo(this, _Buffer);
        }
        m_HSMPendingEventCount = this->m_HSMPendingEventCount;
        v12 = (m_HSMPendingEventCount + this->m_HSMPendingEventHeadIndex) & 0x8000000F;
        if ( m_HSMPendingEventCount + this->m_HSMPendingEventHeadIndex < 0 )
          v12 = ((unsigned __int8)(((m_HSMPendingEventCount + LOBYTE(this->m_HSMPendingEventHeadIndex)) & 0xF) - 1) | 0xFFFFFFF0) + 1;
        if ( m_HSMPendingEventCount >= 16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\crosslaunchhsm_base.cpp", 271, ASSERT_TYPE_ASSERT, "(m_HSMPendingEventCount < __HSM_MAX_EVENTS_PER_FRAME__)", (const char *)&queryFormat, "m_HSMPendingEventCount < __HSM_MAX_EVENTS_PER_FRAME__") )
          __debugbreak();
        if ( this->m_HSMEvents[v12] != HSM_NO_EVENT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\crosslaunchhsm_base.cpp", 275, ASSERT_TYPE_ASSERT, "(m_HSMEvents[ nextUnusedEventIndex ] == HSM_NO_EVENT)", (const char *)&queryFormat, "m_HSMEvents[ nextUnusedEventIndex ] == HSM_NO_EVENT") )
          __debugbreak();
        this->m_HSMEvents[v12] = v2;
        ++this->m_HSMPendingEventCount;
      }
    }
    ++v2;
    v5 += 4i64;
    --v6;
  }
  while ( v6 );
}

