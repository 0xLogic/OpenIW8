/*
==============
BG_Demeanor_GetMaxReEnterTime
==============
*/

void __fastcall BG_Demeanor_GetMaxReEnterTime(const DemeanorStateType state, unsigned int *minTime, unsigned int *maxTime)
{
  ?BG_Demeanor_GetMaxReEnterTime@@YAXW4DemeanorStateType@@PEAI1@Z(state, minTime, maxTime);
}

/*
==============
BG_Demeanor_IsFireRequested
==============
*/

bool __fastcall BG_Demeanor_IsFireRequested(const playerState_s *ps)
{
  return ?BG_Demeanor_IsFireRequested@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_Demeanor_SetState
==============
*/

bool __fastcall BG_Demeanor_SetState(playerState_s *ps, scr_string_t stateName, unsigned int gestureIndex, int gameTime)
{
  return ?BG_Demeanor_SetState@@YA_NPEAUplayerState_s@@W4scr_string_t@@IH@Z(ps, stateName, gestureIndex, gameTime);
}

/*
==============
PM_Demeanor_PlayGesture
==============
*/

void __fastcall PM_Demeanor_PlayGesture(const BgWeaponMap *weaponMap, playerState_s *ps, const BgHandler *pmHandler, int gameTime, bool useStartTime, bool betweenDemeanors, const bool blendToDemeanorLoop)
{
  ?PM_Demeanor_PlayGesture@@YAXPEBVBgWeaponMap@@PEAUplayerState_s@@PEBVBgHandler@@H_N3_N@Z(weaponMap, ps, pmHandler, gameTime, useStartTime, betweenDemeanors, blendToDemeanorLoop);
}

/*
==============
BG_Demeanor_GetStateType
==============
*/

DemeanorStateType __fastcall BG_Demeanor_GetStateType(scr_string_t stateName)
{
  return ?BG_Demeanor_GetStateType@@YA?AW4DemeanorStateType@@W4scr_string_t@@@Z(stateName);
}

/*
==============
PM_Demeanor_CanADS
==============
*/

bool __fastcall PM_Demeanor_CanADS(const playerState_s *ps)
{
  return ?PM_Demeanor_CanADS@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_Demeanor_ShouldEnableBlendToLoop
==============
*/

bool __fastcall BG_Demeanor_ShouldEnableBlendToLoop(const playerState_s *ps, const unsigned int index)
{
  return ?BG_Demeanor_ShouldEnableBlendToLoop@@YA_NPEBUplayerState_s@@I@Z(ps, index);
}

/*
==============
BG_Demeanor_GetCurrentSlot
==============
*/

unsigned int __fastcall BG_Demeanor_GetCurrentSlot(const playerState_s *ps)
{
  return ?BG_Demeanor_GetCurrentSlot@@YAIPEBUplayerState_s@@@Z(ps);
}

/*
==============
PM_Demeanor_CanReload
==============
*/

bool __fastcall PM_Demeanor_CanReload(const playerState_s *ps)
{
  return ?PM_Demeanor_CanReload@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_Demeanor_GetStateName
==============
*/

scr_string_t __fastcall BG_Demeanor_GetStateName(const DemeanorStateType state)
{
  return ?BG_Demeanor_GetStateName@@YA?AW4scr_string_t@@W4DemeanorStateType@@@Z(state);
}

/*
==============
PM_Demeanor_CanFire
==============
*/

bool __fastcall PM_Demeanor_CanFire(const playerState_s *ps)
{
  return ?PM_Demeanor_CanFire@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_Demeanor_ShouldPlayWeaponCheck
==============
*/

bool __fastcall BG_Demeanor_ShouldPlayWeaponCheck(const playerState_s *ps)
{
  return ?BG_Demeanor_ShouldPlayWeaponCheck@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_Demeanor_GetTargetState
==============
*/

DemeanorStateType __fastcall BG_Demeanor_GetTargetState(const playerState_s *ps)
{
  return ?BG_Demeanor_GetTargetState@@YA?AW4DemeanorStateType@@PEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_Demeanor_IsStateAllowed
==============
*/

bool __fastcall BG_Demeanor_IsStateAllowed(const playerState_s *ps, const GestureWeaponState weaponState)
{
  return ?BG_Demeanor_IsStateAllowed@@YA_NPEBUplayerState_s@@W4GestureWeaponState@@@Z(ps, weaponState);
}

/*
==============
PM_Demeanor_CanFire
==============
*/

bool __fastcall PM_Demeanor_CanFire(playerState_s *ps, const PlayerHandIndex hand, int startFiring)
{
  return ?PM_Demeanor_CanFire@@YA_NPEAUplayerState_s@@W4PlayerHandIndex@@H@Z(ps, hand, startFiring);
}

/*
==============
BG_Demeanor_GetDefaultGesture
==============
*/

scr_string_t __fastcall BG_Demeanor_GetDefaultGesture(scr_string_t stateName)
{
  return ?BG_Demeanor_GetDefaultGesture@@YA?AW4scr_string_t@@W41@@Z(stateName);
}

/*
==============
BG_Demeanor_GetStartTime
==============
*/

int __fastcall BG_Demeanor_GetStartTime(const playerState_s *ps, const unsigned int gestureIndex, const DemeanorStateType state, const bool betweenDemeanors, const bool blendToDemeanorLoop)
{
  return ?BG_Demeanor_GetStartTime@@YAHPEBUplayerState_s@@IW4DemeanorStateType@@_N2@Z(ps, gestureIndex, state, betweenDemeanors, blendToDemeanorLoop);
}

/*
==============
BG_Demeanor_GetInterruptFactor
==============
*/

double __fastcall BG_Demeanor_GetInterruptFactor(const DemeanorStateType state)
{
  double result; 

  *(float *)&result = ?BG_Demeanor_GetInterruptFactor@@YAMW4DemeanorStateType@@@Z(state);
  return result;
}

/*
==============
BG_Demeanor_IsPlaying
==============
*/

bool __fastcall BG_Demeanor_IsPlaying(const playerState_s *ps)
{
  return ?BG_Demeanor_IsPlaying@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
PM_Demeanor_CalcSetEnterTime
==============
*/

void __fastcall PM_Demeanor_CalcSetEnterTime(playerState_s *ps, bool enterImmediately, int gameTime)
{
  ?PM_Demeanor_CalcSetEnterTime@@YAXPEAUplayerState_s@@_NH@Z(ps, enterImmediately, gameTime);
}

/*
==============
PM_Demeanor_ShouldTryEntering
==============
*/

void __fastcall PM_Demeanor_ShouldTryEntering(pmove_t *pm, int gameTime, bool *outShouldEnter, bool *outEnterImmediately, bool *outStopCurrent, bool *outUseStartTime, bool *outBlendToDemeanorLoop)
{
  ?PM_Demeanor_ShouldTryEntering@@YAXPEAVpmove_t@@HPEA_N1111@Z(pm, gameTime, outShouldEnter, outEnterImmediately, outStopCurrent, outUseStartTime, outBlendToDemeanorLoop);
}

/*
==============
PM_Demeanor_CanSprint
==============
*/

bool __fastcall PM_Demeanor_CanSprint(pmove_t *pm)
{
  return ?PM_Demeanor_CanSprint@@YA_NPEAVpmove_t@@@Z(pm);
}

/*
==============
PM_Demeanor_ProcessState
==============
*/

void __fastcall PM_Demeanor_ProcessState(pmove_t *pm)
{
  ?PM_Demeanor_ProcessState@@YAXPEAVpmove_t@@@Z(pm);
}

/*
==============
BG_Demeanor_GetCurrentSlot
==============
*/
__int64 BG_Demeanor_GetCurrentSlot(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_demeanor.cpp", 581, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( ps->demeanorState.currentState && BG_Gesture_IsPlayingByIndex(ps, ps->demeanorState.gestureIndex, NULL) )
    return ps->demeanorState.gestureSlot;
  else
    return 2i64;
}

/*
==============
BG_Demeanor_GetDefaultGesture
==============
*/
__int64 BG_Demeanor_GetDefaultGesture(scr_string_t stateName)
{
  __int64 result; 

  if ( stateName == scr_const.demeanor_state_relaxed )
    return (unsigned int)scr_const.demeanor_relaxed_default;
  result = 0i64;
  if ( stateName == scr_const.demeanor_state_safe )
    return (unsigned int)scr_const.demeanor_safe_default;
  return result;
}

/*
==============
BG_Demeanor_GetInterruptFactor
==============
*/
float BG_Demeanor_GetInterruptFactor(const DemeanorStateType state)
{
  const dvar_t *v1; 

  if ( state == DEMEANOR_STATE_SAFE )
  {
    v1 = DCONST_DVARFLT_demeanor_safe_blend_in_factor;
    if ( !DCONST_DVARFLT_demeanor_safe_blend_in_factor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "demeanor_safe_blend_in_factor") )
      __debugbreak();
LABEL_5:
    Dvar_CheckFrontendServerThread(v1);
    return v1->current.value;
  }
  if ( state == DEMEANOR_STATE_RELAXED )
  {
    v1 = DCONST_DVARFLT_demeanor_relaxed_blend_in_factor;
    if ( !DCONST_DVARFLT_demeanor_relaxed_blend_in_factor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "demeanor_relaxed_blend_in_factor") )
      __debugbreak();
    goto LABEL_5;
  }
  return 0.0;
}

/*
==============
BG_Demeanor_GetMaxReEnterTime
==============
*/
void BG_Demeanor_GetMaxReEnterTime(const DemeanorStateType state, unsigned int *minTime, unsigned int *maxTime)
{
  const dvar_t *v5; 
  unsigned int unsignedInt; 
  const dvar_t *v7; 
  const char *v8; 
  const dvar_t *v9; 

  if ( state == DEMEANOR_STATE_SAFE )
  {
    v5 = DCONST_DVARINT_demeanor_safe_max_time;
    if ( !DCONST_DVARINT_demeanor_safe_max_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "demeanor_safe_max_time") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    unsignedInt = v5->current.unsignedInt;
    v7 = DCONST_DVARINT_demeanor_safe_min_time;
    if ( DCONST_DVARINT_demeanor_safe_min_time )
      goto LABEL_9;
    v8 = "demeanor_safe_min_time";
LABEL_7:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v8) )
      __debugbreak();
LABEL_9:
    Dvar_CheckFrontendServerThread(v7);
    *minTime = v7->current.unsignedInt;
    *maxTime = unsignedInt;
    return;
  }
  if ( state == DEMEANOR_STATE_RELAXED )
  {
    v9 = DCONST_DVARINT_demeanor_relaxed_max_time;
    if ( !DCONST_DVARINT_demeanor_relaxed_max_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "demeanor_relaxed_max_time") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    unsignedInt = v9->current.unsignedInt;
    v7 = DCONST_DVARINT_demeanor_relaxed_min_time;
    if ( DCONST_DVARINT_demeanor_relaxed_min_time )
      goto LABEL_9;
    v8 = "demeanor_relaxed_min_time";
    goto LABEL_7;
  }
  *minTime = 0;
  *maxTime = 0;
}

/*
==============
BG_Demeanor_GetStartTime
==============
*/
int BG_Demeanor_GetStartTime(const playerState_s *ps, const unsigned int gestureIndex, const DemeanorStateType state, const bool betweenDemeanors, const bool blendToDemeanorLoop)
{
  const dvar_t *v9; 
  const dvar_t *v11; 
  __int64 v12; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_demeanor.cpp", 125, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( gestureIndex >= 0x100 )
  {
    LODWORD(v12) = gestureIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_demeanor.cpp", 126, ASSERT_TYPE_ASSERT, "(unsigned)( gestureIndex ) < (unsigned)( (1<<8) )", "gestureIndex doesn't index MAX_GESTURE_DEFS\n\t%i not in [0, %i)", v12, 256) )
      __debugbreak();
  }
  if ( betweenDemeanors )
  {
    if ( state == DEMEANOR_STATE_SAFE )
    {
      v9 = DCONST_DVARINT_demeanor_safe_start_time_gesture;
      if ( !DCONST_DVARINT_demeanor_safe_start_time_gesture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "demeanor_safe_start_time_gesture") )
        __debugbreak();
LABEL_28:
      Dvar_CheckFrontendServerThread(v9);
      return v9->current.integer;
    }
    if ( state == DEMEANOR_STATE_RELAXED )
    {
      v9 = DCONST_DVARINT_demeanor_relaxed_start_time_gesture;
      if ( !DCONST_DVARINT_demeanor_relaxed_start_time_gesture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "demeanor_relaxed_start_time_gesture") )
        __debugbreak();
      goto LABEL_28;
    }
    return 0;
  }
  if ( blendToDemeanorLoop )
    return BG_Gesture_GetSectionStartTime(gestureIndex, GESTURE_SECTION_LOOP);
  if ( state != DEMEANOR_STATE_SAFE )
  {
    if ( state == DEMEANOR_STATE_RELAXED )
      return Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_demeanor_relaxed_start_time_weapon, "demeanor_relaxed_start_time_weapon");
    return 0;
  }
  v11 = DCONST_DVARINT_demeanor_safe_start_time_weapon;
  if ( !DCONST_DVARINT_demeanor_safe_start_time_weapon && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "demeanor_safe_start_time_weapon") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( (unsigned int)(ps->weapState[0].weaponState - 1) <= 4 )
  {
    v9 = DCONST_DVARINT_demeanor_safe_start_time_raise;
    if ( !DCONST_DVARINT_demeanor_safe_start_time_raise && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "demeanor_safe_start_time_raise") )
      __debugbreak();
    goto LABEL_28;
  }
  return v11->current.integer;
}

/*
==============
BG_Demeanor_GetStateName
==============
*/
__int64 BG_Demeanor_GetStateName(const DemeanorStateType state)
{
  __int64 result; 

  if ( state == DEMEANOR_STATE_RELAXED )
    return (unsigned int)scr_const.demeanor_state_relaxed;
  result = (unsigned int)scr_const.demeanor_state_normal;
  if ( state == DEMEANOR_STATE_SAFE )
    return (unsigned int)scr_const.demeanor_state_safe;
  return result;
}

/*
==============
BG_Demeanor_GetStateType
==============
*/
__int64 BG_Demeanor_GetStateType(scr_string_t stateName)
{
  if ( stateName == scr_const.demeanor_state_normal )
    return 0i64;
  if ( stateName == scr_const.demeanor_state_relaxed )
    return 1i64;
  return (unsigned int)(stateName != scr_const.demeanor_state_safe) + 2;
}

/*
==============
BG_Demeanor_GetTargetState
==============
*/
__int64 BG_Demeanor_GetTargetState(const playerState_s *ps)
{
  if ( ps )
    return (unsigned int)ps->demeanorState.targetState;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_demeanor.cpp", 228, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return MEMORY[0x464];
}

/*
==============
BG_Demeanor_IsFireRequested
==============
*/
bool BG_Demeanor_IsFireRequested(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_demeanor.cpp", 568, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return ps->demeanorState.targetState == DEMEANOR_STATE_RELAXED && ps->demeanorState.fireRequested != 0;
}

/*
==============
BG_Demeanor_IsPlaying
==============
*/
bool BG_Demeanor_IsPlaying(const playerState_s *ps)
{
  unsigned int gestureSlot; 

  if ( !ps )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_demeanor.cpp", 670, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_demeanor.cpp", 581, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
  }
  gestureSlot = 2;
  if ( ps->demeanorState.currentState && BG_Gesture_IsPlayingByIndex(ps, ps->demeanorState.gestureIndex, NULL) )
    gestureSlot = ps->demeanorState.gestureSlot;
  return gestureSlot != 2;
}

/*
==============
BG_Demeanor_IsStateAllowed
==============
*/
char BG_Demeanor_IsStateAllowed(const playerState_s *ps, const GestureWeaponState weaponState)
{
  DemeanorStateType TargetState; 
  int v5; 
  const DemeanorStateWeapon *i; 
  __int64 v8; 

  if ( !ps )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_demeanor.cpp", 598, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_demeanor.cpp", 228, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
  }
  if ( ps->demeanorState.targetState == DEMEANOR_STATE_NORMAL )
    return 1;
  if ( ps->demeanorState.gestureSlot >= 2 )
  {
    LODWORD(v8) = ps->demeanorState.gestureSlot;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_demeanor.cpp", 602, ASSERT_TYPE_ASSERT, "(unsigned)( ps->demeanorState.gestureSlot ) < (unsigned)( 2 )", "ps->demeanorState.gestureSlot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", v8, 2) )
      __debugbreak();
  }
  if ( !BG_Gesture_GetCurrentAsset(ps, ps->demeanorState.gestureSlot) )
    return 1;
  TargetState = BG_Demeanor_GetTargetState(ps);
  v5 = 0;
  for ( i = s_disabledStates; TargetState != i->demeanorState || weaponState != i->weaponState; ++i )
  {
    if ( (unsigned int)++v5 >= 2 )
      return 1;
  }
  return 0;
}

/*
==============
BG_Demeanor_SetState
==============
*/
bool BG_Demeanor_SetState(playerState_s *ps, scr_string_t stateName, unsigned int gestureIndex, int gameTime)
{
  const dvar_t *v8; 
  bool result; 
  DemeanorStateType v10; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_demeanor.cpp", 208, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v8 = DCONST_DVARBOOL_viewmodelDemeanors;
  if ( !DCONST_DVARBOOL_viewmodelDemeanors && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "viewmodelDemeanors") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( !v8->current.enabled )
    return 0;
  ps->demeanorState.gestureIndex = gestureIndex;
  if ( stateName == scr_const.demeanor_state_normal )
  {
    v10 = DEMEANOR_STATE_NORMAL;
  }
  else if ( stateName == scr_const.demeanor_state_relaxed )
  {
    v10 = DEMEANOR_STATE_RELAXED;
  }
  else
  {
    v10 = (stateName != scr_const.demeanor_state_safe) + 2;
  }
  ps->demeanorState.targetState = v10;
  result = 1;
  ps->demeanorState.reEnterTime = gameTime;
  return result;
}

/*
==============
BG_Demeanor_ShouldEnableBlendToLoop
==============
*/
bool BG_Demeanor_ShouldEnableBlendToLoop(const playerState_s *ps, const unsigned int index)
{
  __int64 v5; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_demeanor.cpp", 660, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( index >= 0x100 )
  {
    LODWORD(v5) = index;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_demeanor.cpp", 661, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( (1<<8) )", "index doesn't index MAX_GESTURE_DEFS\n\t%i not in [0, %i)", v5, 256) )
      __debugbreak();
  }
  return BG_Gesture_IsBlendToDemeanorLoop(index) && BG_Demeanor_GetTargetState(ps);
}

/*
==============
BG_Demeanor_ShouldPlayWeaponCheck
==============
*/
bool BG_Demeanor_ShouldPlayWeaponCheck(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_demeanor.cpp", 555, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return ps->demeanorState.currentState == DEMEANOR_STATE_SAFE && ps->demeanorState.fireRequested != 0;
}

/*
==============
PM_Demeanor_CalcSetEnterTime
==============
*/
void PM_Demeanor_CalcSetEnterTime(playerState_s *ps, bool enterImmediately, int gameTime)
{
  int v3; 
  DemeanorStateType targetState; 
  int integer; 
  const dvar_t *v8; 
  const dvar_t *v9; 
  const char *v10; 
  const dvar_t *v11; 
  unsigned int pHoldrand; 

  v3 = 0;
  if ( enterImmediately )
    goto LABEL_19;
  if ( ps->demeanorState.reEnterTime )
    return;
  targetState = ps->demeanorState.targetState;
  integer = 0;
  if ( targetState == DEMEANOR_STATE_SAFE )
  {
    v8 = DCONST_DVARINT_demeanor_safe_max_time;
    if ( !DCONST_DVARINT_demeanor_safe_max_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "demeanor_safe_max_time") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    integer = v8->current.integer;
    v9 = DCONST_DVARINT_demeanor_safe_min_time;
    if ( DCONST_DVARINT_demeanor_safe_min_time )
      goto LABEL_17;
    v10 = "demeanor_safe_min_time";
LABEL_15:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v10) )
      __debugbreak();
LABEL_17:
    Dvar_CheckFrontendServerThread(v9);
    v3 = v9->current.integer;
    goto LABEL_18;
  }
  if ( targetState == DEMEANOR_STATE_RELAXED )
  {
    v11 = DCONST_DVARINT_demeanor_relaxed_max_time;
    if ( !DCONST_DVARINT_demeanor_relaxed_max_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "demeanor_relaxed_max_time") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    integer = v11->current.integer;
    v9 = DCONST_DVARINT_demeanor_relaxed_min_time;
    if ( DCONST_DVARINT_demeanor_relaxed_min_time )
      goto LABEL_17;
    v10 = "demeanor_relaxed_min_time";
    goto LABEL_15;
  }
LABEL_18:
  pHoldrand = ps->serverTime;
  BG_srand(&pHoldrand);
  v3 = BG_irand(v3, integer, &pHoldrand);
LABEL_19:
  ps->demeanorState.reEnterTime = v3 + gameTime;
}

/*
==============
PM_Demeanor_CanADS
==============
*/
bool PM_Demeanor_CanADS(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_demeanor.cpp", 631, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return BG_Demeanor_IsStateAllowed(ps, GESTURE_WEAPON_STATE_ADS);
}

/*
==============
PM_Demeanor_CanFire
==============
*/
bool PM_Demeanor_CanFire(playerState_s *ps, const PlayerHandIndex hand, int startFiring)
{
  DemeanorStateType targetState; 
  int v7; 
  __int64 v9; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_demeanor.cpp", 516, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)hand >= NUM_WEAPON_HANDS )
  {
    LODWORD(v9) = hand;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_demeanor.cpp", 517, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", v9, 2) )
      __debugbreak();
  }
  targetState = ps->demeanorState.targetState;
  if ( targetState == DEMEANOR_STATE_SAFE )
  {
    v7 = 0;
    if ( ps->demeanorState.currentState == DEMEANOR_STATE_SAFE )
      v7 = startFiring;
    if ( hand )
      ps->demeanorState.fireRequested |= v7;
    else
      ps->demeanorState.fireRequested = v7;
    LOBYTE(targetState) = 0;
  }
  else if ( targetState == DEMEANOR_STATE_RELAXED )
  {
    if ( hand )
    {
      ps->demeanorState.fireRequested |= startFiring;
      LOBYTE(targetState) = 1;
    }
    else
    {
      ps->demeanorState.fireRequested = startFiring;
    }
  }
  else
  {
    LOBYTE(targetState) = 1;
    ps->demeanorState.fireRequested = 0;
  }
  return targetState;
}

/*
==============
PM_Demeanor_CanFire
==============
*/
bool PM_Demeanor_CanFire(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_demeanor.cpp", 508, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return ps->demeanorState.targetState != DEMEANOR_STATE_SAFE;
}

/*
==============
PM_Demeanor_CanReload
==============
*/
bool PM_Demeanor_CanReload(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_demeanor.cpp", 639, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return BG_Demeanor_IsStateAllowed(ps, GESTURE_WEAPON_STATE_RELOAD);
}

/*
==============
PM_Demeanor_CanSprint
==============
*/
bool PM_Demeanor_CanSprint(pmove_t *pm)
{
  bool result; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_demeanor.cpp", 647, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  result = BG_Demeanor_IsStateAllowed(pm->ps, GESTURE_WEAPON_STATE_SPRINT);
  if ( result )
    return PM_Gesture_ShouldStartSprint(pm);
  return result;
}

/*
==============
PM_Demeanor_PlayGesture
==============
*/
void PM_Demeanor_PlayGesture(const BgWeaponMap *weaponMap, playerState_s *ps, const BgHandler *pmHandler, int gameTime, bool useStartTime, bool betweenDemeanors, const bool blendToDemeanorLoop)
{
  int StartTime; 
  bool v12; 
  GesturePlayRequest *v13; 
  double v14; 
  GesturePlayRequest request; 
  GesturePlayRequest result; 
  unsigned int outSlot; 

  StartTime = 0;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_demeanor.cpp", 411, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_demeanor.cpp", 412, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v12 = blendToDemeanorLoop;
  if ( useStartTime || blendToDemeanorLoop )
    StartTime = BG_Demeanor_GetStartTime(ps, ps->demeanorState.gestureIndex, (const DemeanorStateType)ps->demeanorState.targetState, betweenDemeanors, blendToDemeanorLoop);
  v13 = BG_GesturePriority_SetupRequest(&result, weaponMap, ps, pmHandler, ps->demeanorState.gestureIndex, gameTime);
  *(__m256i *)&request.weaponMap = *(__m256i *)&v13->weaponMap;
  *(_OWORD *)&request.startTime = *(_OWORD *)&v13->startTime;
  v14 = *(double *)&v13->cancelTransitions;
  request.startTime = StartTime;
  *(double *)&request.cancelTransitions = v14;
  if ( v12 )
  {
    *(_WORD *)&request.stopAllGestures = 257;
    request.slotBlendDuration = 50;
  }
  if ( BG_GesturePriority_TryPlay(&request, &outSlot, NULL) || BG_Gesture_IsPlayingByIndex(ps, ps->demeanorState.gestureIndex, &outSlot) && BG_Gesture_GetState(ps, outSlot) != GESTURE_STATE_STOPPING )
  {
    ps->demeanorState.currentState = ps->demeanorState.targetState;
    *(_QWORD *)&ps->demeanorState.gestureSlot = outSlot;
  }
}

/*
==============
PM_Demeanor_ProcessState
==============
*/
void PM_Demeanor_ProcessState(pmove_t *pm)
{
  playerState_s *ps; 
  bool v3; 
  DemeanorStateType currentState; 
  DemeanorStateType targetState; 
  int serverTime; 
  int v7; 
  unsigned int gestureSlot; 
  bool *outUseStartTime; 
  bool *outBlendToDemeanorLoop; 
  bool v11; 
  GesturePlayRequest request; 
  GesturePlayRequest result; 
  bool outShouldEnter; 
  bool outEnterImmediately; 
  bool outStopCurrent; 
  bool v17; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_demeanor.cpp", 452, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_demeanor.cpp", 452, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  PM_Demeanor_ShouldTryEntering(pm, pm->cmd.serverTime, &outShouldEnter, &outEnterImmediately, &outStopCurrent, &v11, &v17);
  v3 = outShouldEnter;
  if ( outShouldEnter )
  {
    PM_Demeanor_CalcSetEnterTime(ps, outEnterImmediately, pm->cmd.serverTime);
    ps->demeanorState.currentState = DEMEANOR_STATE_NORMAL;
  }
  if ( outStopCurrent )
    BG_Gesture_StopByIndex(ps, ps->demeanorState.gestureIndex, pm->cmd.serverTime, 1, 0, 0);
  currentState = ps->demeanorState.currentState;
  targetState = ps->demeanorState.targetState;
  if ( currentState != targetState )
  {
    if ( currentState )
    {
      if ( (unsigned int)(currentState - 1) <= 1 )
      {
        gestureSlot = ps->demeanorState.gestureSlot;
        if ( targetState )
        {
          if ( BG_Gesture_IsPlayingBySlot(ps, gestureSlot, NULL) )
            PM_Demeanor_PlayGesture(pm->weaponMap, ps, pm->m_bgHandler, pm->cmd.serverTime, 1, 1, 0);
        }
        else
        {
          if ( gestureSlot >= 2 )
          {
            LODWORD(outBlendToDemeanorLoop) = 2;
            LODWORD(outUseStartTime) = ps->demeanorState.gestureSlot;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_demeanor.cpp", 488, ASSERT_TYPE_ASSERT, "(unsigned)( ps->demeanorState.gestureSlot ) < (unsigned)( 2 )", "ps->demeanorState.gestureSlot doesn't index GESTURE_NUM_SLOTS\n\t%i not in [0, %i)", outUseStartTime, outBlendToDemeanorLoop) )
              __debugbreak();
          }
          BG_Gesture_StopBySlot(ps, ps->demeanorState.gestureSlot, pm->cmd.serverTime, 0, 0, 0);
        }
      }
    }
    else if ( v3 )
    {
      serverTime = pm->cmd.serverTime;
      request = *BG_GesturePriority_SetupRequest(&result, pm->weaponMap, ps, pm->m_bgHandler, ps->demeanorState.gestureIndex, serverTime);
      if ( !BG_GesturePriority_CanPlay(&request) )
      {
        ps->demeanorState.reEnterTime = 0;
        PM_Demeanor_CalcSetEnterTime(ps, 0, serverTime);
      }
      v7 = pm->cmd.serverTime;
      if ( v7 >= ps->demeanorState.reEnterTime )
        PM_Demeanor_PlayGesture(pm->weaponMap, ps, pm->m_bgHandler, v7, v11, 0, v17);
    }
  }
}

/*
==============
PM_Demeanor_ShouldTryEntering
==============
*/
void PM_Demeanor_ShouldTryEntering(pmove_t *pm, int gameTime, bool *outShouldEnter, bool *outEnterImmediately, bool *outStopCurrent, bool *outUseStartTime, bool *outBlendToDemeanorLoop)
{
  bool v7; 
  playerState_s *ps; 
  bool IsPlaying; 
  DemeanorStateType targetState; 
  int v16; 
  playerState_s *v17; 
  const Weapon *ViewmodelWeapon; 
  unsigned int gestureIndex; 
  const Gesture *AssetFromIndex; 
  GestureAnimationSettings *AnimationSettings; 
  DemeanorStateType v22; 
  float value; 
  const dvar_t *v24; 
  const char *v25; 
  unsigned int BlendingOutCount; 
  unsigned int AvailableSlotCount; 
  bool v28; 
  unsigned int v29; 
  const Gesture *v30; 
  int weaponState; 
  const dvar_t *v32; 
  bool outUseStartTimea; 

  v7 = 0;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_demeanor.cpp", 303, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !outEnterImmediately && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_demeanor.cpp", 304, ASSERT_TYPE_ASSERT, "(outEnterImmediately)", (const char *)&queryFormat, "outEnterImmediately") )
    __debugbreak();
  if ( !outShouldEnter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_demeanor.cpp", 305, ASSERT_TYPE_ASSERT, "(outShouldEnter)", (const char *)&queryFormat, "outShouldEnter") )
    __debugbreak();
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_demeanor.cpp", 307, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_demeanor.cpp", 307, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  *outShouldEnter = 0;
  *outEnterImmediately = 0;
  *outUseStartTime = 0;
  *outStopCurrent = 0;
  *outBlendToDemeanorLoop = 0;
  IsPlaying = BG_Gesture_IsPlaying(ps, gameTime, 0);
  targetState = ps->demeanorState.targetState;
  outUseStartTimea = IsPlaying;
  if ( IsPlaying )
  {
    v16 = 0;
    if ( targetState == DEMEANOR_STATE_NORMAL )
      goto LABEL_45;
    if ( BG_Gesture_IsPlayingByIndex(ps, ps->demeanorState.gestureIndex, NULL) )
    {
      v17 = pm->ps;
      if ( !v17 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_demeanor.cpp", 249, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_demeanor.cpp", 251, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
          __debugbreak();
      }
      ViewmodelWeapon = BG_GetViewmodelWeapon(pm->weaponMap, v17);
      *outStopCurrent = v17->weapState[0].weaponState == 1 && BG_Gesture_IsStoppingByIndex(v17, v17->demeanorState.gestureIndex) || !ViewmodelWeapon->weaponIdx || BG_HasLadderHand(v17);
      return;
    }
    gestureIndex = ps->demeanorState.gestureIndex;
    if ( gestureIndex == 256 )
      goto LABEL_45;
    AssetFromIndex = BG_Gesture_GetAssetFromIndex(gestureIndex);
    if ( !AssetFromIndex )
      goto LABEL_45;
    AnimationSettings = BG_Gesture_GetAnimationSettings(AssetFromIndex);
    if ( !AnimationSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_demeanor.cpp", 347, ASSERT_TYPE_ASSERT, "(animSettings)", (const char *)&queryFormat, "animSettings") )
      __debugbreak();
    if ( !AnimationSettings->hasTransitions )
      goto LABEL_45;
    v22 = ps->demeanorState.targetState;
    value = 0.0;
    if ( v22 == DEMEANOR_STATE_SAFE )
    {
      v24 = DCONST_DVARFLT_demeanor_safe_blend_in_factor;
      if ( !DCONST_DVARFLT_demeanor_safe_blend_in_factor )
      {
        v25 = "demeanor_safe_blend_in_factor";
        goto LABEL_41;
      }
    }
    else
    {
      if ( v22 != DEMEANOR_STATE_RELAXED )
      {
LABEL_44:
        v16 = (int)(float)((float)AnimationSettings->inAnimLength * value);
LABEL_45:
        BlendingOutCount = BG_Gesture_GetBlendingOutCount(ps, gameTime, v16);
        AvailableSlotCount = BG_Gesture_GetAvailableSlotCount(ps);
        if ( BlendingOutCount == 1 && AvailableSlotCount == 1 )
        {
          v7 = 1;
          *outBlendToDemeanorLoop = BG_Gesture_GetBlendToDemeanorLoop(ps);
        }
        goto LABEL_48;
      }
      v24 = DCONST_DVARFLT_demeanor_relaxed_blend_in_factor;
      if ( !DCONST_DVARFLT_demeanor_relaxed_blend_in_factor )
      {
        v25 = "demeanor_relaxed_blend_in_factor";
LABEL_41:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v25) )
          __debugbreak();
      }
    }
    Dvar_CheckFrontendServerThread(v24);
    value = v24->current.value;
    goto LABEL_44;
  }
  if ( targetState == DEMEANOR_STATE_NORMAL )
    goto LABEL_48;
  v29 = ps->demeanorState.gestureIndex;
  if ( v29 == 256 )
    goto LABEL_48;
  v30 = BG_Gesture_GetAssetFromIndex(v29);
  if ( !v30 )
    goto LABEL_48;
  if ( BG_GesturePriority_GetGestureInterruptingState(pm->weaponMap, ps, pm->m_bgHandler, v30, GESTURE_HAND_CHECK_RIGHT) != GESTURE_WEAPON_STATE_NUM || BG_HasLadderHand(ps) )
    return;
  weaponState = ps->weapState[0].weaponState;
  if ( (unsigned int)(weaponState - 1) > 4 || ps->demeanorState.targetState != DEMEANOR_STATE_SAFE )
  {
    if ( (unsigned int)(weaponState - 1) <= 4 || (unsigned int)(weaponState - 34) <= 2 )
    {
LABEL_65:
      *outShouldEnter = 1;
      *outEnterImmediately = 1;
      *outUseStartTime = 1;
      return;
    }
LABEL_48:
    *outEnterImmediately = v7;
    v28 = !outUseStartTimea || v7;
    *outShouldEnter = v28;
    return;
  }
  v32 = DCONST_DVARINT_demeanor_safe_enter_delay_raise;
  if ( !DCONST_DVARINT_demeanor_safe_enter_delay_raise && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "demeanor_safe_enter_delay_raise") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v32);
  if ( ps->weapState[0].weaponTime <= v32->current.integer )
    goto LABEL_65;
}

