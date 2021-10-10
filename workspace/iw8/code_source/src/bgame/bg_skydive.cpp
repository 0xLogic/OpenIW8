/*
==============
PM_Skydive_PerformTrace
==============
*/

void __fastcall PM_Skydive_PerformTrace(pmove_t *pm, pml_t *pml, SkydiveTraceHeight traceHeight, const bool auxiliaryTrace)
{
  ?PM_Skydive_PerformTrace@@YAXPEAVpmove_t@@PEAUpml_t@@W4SkydiveTraceHeight@@_N@Z(pm, pml, traceHeight, auxiliaryTrace);
}

/*
==============
BG_Skydive_CanThirdPersonCam
==============
*/

bool __fastcall BG_Skydive_CanThirdPersonCam(const playerState_s *ps)
{
  return ?BG_Skydive_CanThirdPersonCam@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_Skydive_GetTrackedThrottleValue
==============
*/

double __fastcall BG_Skydive_GetTrackedThrottleValue(const playerState_s *ps)
{
  double result; 

  *(float *)&result = ?BG_Skydive_GetTrackedThrottleValue@@YAMPEBUplayerState_s@@@Z(ps);
  return result;
}

/*
==============
PM_Skydive_AltimeterTrace
==============
*/

void __fastcall PM_Skydive_AltimeterTrace(pmove_t *pm, pml_t *pml)
{
  ?PM_Skydive_AltimeterTrace@@YAXPEAVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
PM_Skydive_LandMove_MidAirDetach
==============
*/

void __fastcall PM_Skydive_LandMove_MidAirDetach(pmove_t *pm, pml_t *pml)
{
  ?PM_Skydive_LandMove_MidAirDetach@@YAXPEAVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
BG_Skydive_CalculateEffectiveVerticalDragCoefficient
==============
*/

double __fastcall BG_Skydive_CalculateEffectiveVerticalDragCoefficient(const playerState_s *ps)
{
  double result; 

  *(float *)&result = ?BG_Skydive_CalculateEffectiveVerticalDragCoefficient@@YAMPEBUplayerState_s@@@Z(ps);
  return result;
}

/*
==============
BG_SkydiveAnimStateHidesPrimaryWeapon
==============
*/

bool __fastcall BG_SkydiveAnimStateHidesPrimaryWeapon(const animScriptParachuteState_t animState)
{
  return ?BG_SkydiveAnimStateHidesPrimaryWeapon@@YA_NW4animScriptParachuteState_t@@@Z(animState);
}

/*
==============
PM_Skydive_OnCollision
==============
*/

void __fastcall PM_Skydive_OnCollision(pmove_t *pm, pml_t *pml)
{
  ?PM_Skydive_OnCollision@@YAXPEAVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
PM_Skydive_Move
==============
*/

void __fastcall PM_Skydive_Move(pmove_t *pm, pml_t *pml)
{
  ?PM_Skydive_Move@@YAXPEAVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
PM_Skydive_Move_Log
==============
*/

void __fastcall PM_Skydive_Move_Log(pmove_t *pm, pml_t *pml, const char *prefix)
{
  ?PM_Skydive_Move_Log@@YAXPEAVpmove_t@@PEAUpml_t@@PEBD@Z(pm, pml, prefix);
}

/*
==============
BG_SkydiveAllowCameraInputForAxis
==============
*/

bool __fastcall BG_SkydiveAllowCameraInputForAxis(const playerState_s *ps, int axis, float delta)
{
  return ?BG_SkydiveAllowCameraInputForAxis@@YA_NPEBUplayerState_s@@HM@Z(ps, axis, delta);
}

/*
==============
PM_Skydive_LandMove_Regular
==============
*/

void __fastcall PM_Skydive_LandMove_Regular(pmove_t *pm, pml_t *pml)
{
  ?PM_Skydive_LandMove_Regular@@YAXPEAVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
BG_Skydive_IsWeaponRaise
==============
*/

bool __fastcall BG_Skydive_IsWeaponRaise(const playerState_s *const ps)
{
  return ?BG_Skydive_IsWeaponRaise@@YA_NQEBUplayerState_s@@@Z(ps);
}

/*
==============
PM_Skydive_UpdatePostGroundTrace
==============
*/

void __fastcall PM_Skydive_UpdatePostGroundTrace(pmove_t *pm, pml_t *pml)
{
  ?PM_Skydive_UpdatePostGroundTrace@@YAXPEAVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
PM_Skydive_UpdateViewAngles
==============
*/

void __fastcall PM_Skydive_UpdateViewAngles(pmove_t *pm, pml_t *pml)
{
  ?PM_Skydive_UpdateViewAngles@@YAXPEAVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
PM_Skydive_ApplyForces
==============
*/

void __fastcall PM_Skydive_ApplyForces(pmove_t *pm, pml_t *pml)
{
  ?PM_Skydive_ApplyForces@@YAXPEAVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
PM_Skydive_Update
==============
*/

void __fastcall PM_Skydive_Update(pmove_t *pm, pml_t *pml)
{
  ?PM_Skydive_Update@@YAXPEAVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
PM_Skydive_AddLandEvent
==============
*/

void __fastcall PM_Skydive_AddLandEvent(pmove_t *pm, pml_t *pml)
{
  ?PM_Skydive_AddLandEvent@@YAXPEAVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
BG_Skydive_IsSuperDiveActive
==============
*/

bool __fastcall BG_Skydive_IsSuperDiveActive(const playerState_s *ps, char forwardMove, char rightMove)
{
  return ?BG_Skydive_IsSuperDiveActive@@YA_NPEBUplayerState_s@@CC@Z(ps, forwardMove, rightMove);
}

/*
==============
PM_Skydive_End
==============
*/

void __fastcall PM_Skydive_End(pmove_t *pm, pml_t *pml, const bool isLandingEndEvent)
{
  ?PM_Skydive_End@@YAXPEAVpmove_t@@PEAUpml_t@@_N@Z(pm, pml, isLandingEndEvent);
}

/*
==============
PM_Skydive_HandleParachuteCutActivation
==============
*/

void __fastcall PM_Skydive_HandleParachuteCutActivation(pmove_t *pm, pml_t *pml)
{
  ?PM_Skydive_HandleParachuteCutActivation@@YAXPEAVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
PM_Skydive_Chute_AutoDeployCut
==============
*/

void __fastcall PM_Skydive_Chute_AutoDeployCut(pmove_t *pm, pml_t *pml)
{
  ?PM_Skydive_Chute_AutoDeployCut@@YAXPEAVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
PM_Skydive_Chute_Cut_High_End
==============
*/

void __fastcall PM_Skydive_Chute_Cut_High_End(pmove_t *pm, pml_t *pml)
{
  ?PM_Skydive_Chute_Cut_High_End@@YAXPEAVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
BG_Skydive_CanQueueSprint
==============
*/

bool __fastcall BG_Skydive_CanQueueSprint(const playerState_s *ps)
{
  return ?BG_Skydive_CanQueueSprint@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
PM_Skydive_Freefall_Raise
==============
*/

void __fastcall PM_Skydive_Freefall_Raise(pmove_t *pm, pml_t *pml)
{
  ?PM_Skydive_Freefall_Raise@@YAXPEAVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
BG_Skydive_IsSkydiving
==============
*/

bool __fastcall BG_Skydive_IsSkydiving(const playerState_s *ps)
{
  return ?BG_Skydive_IsSkydiving@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
PM_Skydive_EndDeployParachute
==============
*/

void __fastcall PM_Skydive_EndDeployParachute(pmove_t *pm, pml_t *pml)
{
  ?PM_Skydive_EndDeployParachute@@YAXPEAVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
BG_Skydive_IsParachuting
==============
*/

bool __fastcall BG_Skydive_IsParachuting(const playerState_s *const ps)
{
  return ?BG_Skydive_IsParachuting@@YA_NQEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_SkydiveAnimStateNeedParachuteModel
==============
*/

bool __fastcall BG_SkydiveAnimStateNeedParachuteModel(const animScriptParachuteState_t animState)
{
  return ?BG_SkydiveAnimStateNeedParachuteModel@@YA_NW4animScriptParachuteState_t@@@Z(animState);
}

/*
==============
BG_Skydive_DrawLegs
==============
*/

bool __fastcall BG_Skydive_DrawLegs(const playerState_s *ps)
{
  return ?BG_Skydive_DrawLegs@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
PM_Skydive_OnJump
==============
*/

void __fastcall PM_Skydive_OnJump(pmove_t *pm, pml_t *pml)
{
  ?PM_Skydive_OnJump@@YAXPEAVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
PM_Skydive_ParachuteIdle
==============
*/

void __fastcall PM_Skydive_ParachuteIdle(pmove_t *pm, pml_t *pml)
{
  ?PM_Skydive_ParachuteIdle@@YAXPEAVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
PM_Skydive_LandMove
==============
*/

void __fastcall PM_Skydive_LandMove(pmove_t *pm, pml_t *pml)
{
  ?PM_Skydive_LandMove@@YAXPEAVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
PM_Skydive_ShouldLockViewInput
==============
*/

bool __fastcall PM_Skydive_ShouldLockViewInput(const pmove_t *pm)
{
  return ?PM_Skydive_ShouldLockViewInput@@YA_NPEBVpmove_t@@@Z(pm);
}

/*
==============
PM_Skydive_Chute_Cut
==============
*/

void __fastcall PM_Skydive_Chute_Cut(pmove_t *pm, pml_t *pml)
{
  ?PM_Skydive_Chute_Cut@@YAXPEAVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
PM_Skydive_Freefall_Idle
==============
*/

void __fastcall PM_Skydive_Freefall_Idle(pmove_t *pm, pml_t *pml)
{
  ?PM_Skydive_Freefall_Idle@@YAXPEAVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
BG_Skydive_CalculateEffectiveHorizontalDragCoefficient
==============
*/

double __fastcall BG_Skydive_CalculateEffectiveHorizontalDragCoefficient(const playerState_s *ps)
{
  double result; 

  *(float *)&result = ?BG_Skydive_CalculateEffectiveHorizontalDragCoefficient@@YAMPEBUplayerState_s@@@Z(ps);
  return result;
}

/*
==============
BG_SkydiveAllowCameraInputForAxis
==============
*/
char BG_SkydiveAllowCameraInputForAxis(const playerState_s *ps, int axis, float delta)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2846, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return 1;
}

/*
==============
BG_SkydiveAnimStateHidesPrimaryWeapon
==============
*/
bool BG_SkydiveAnimStateHidesPrimaryWeapon(const animScriptParachuteState_t animState)
{
  int v4; 

  if ( (unsigned int)animState >= NUM_ANIM_COND_PARACHUTE_STATE )
  {
    v4 = 12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2865, ASSERT_TYPE_ASSERT, "(unsigned)( animState ) < (unsigned)( NUM_ANIM_COND_PARACHUTE_STATE )", "animState doesn't index NUM_ANIM_COND_PARACHUTE_STATE\n\t%i not in [0, %i)", animState, v4) )
      __debugbreak();
  }
  return animState && animState != PARACHUTE_STATE_FREEFALL_GUNUP;
}

/*
==============
BG_SkydiveAnimStateNeedParachuteModel
==============
*/
bool BG_SkydiveAnimStateNeedParachuteModel(const animScriptParachuteState_t animState)
{
  int v4; 

  if ( (unsigned int)animState >= NUM_ANIM_COND_PARACHUTE_STATE )
  {
    v4 = 12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2854, ASSERT_TYPE_ASSERT, "(unsigned)( animState ) < (unsigned)( NUM_ANIM_COND_PARACHUTE_STATE )", "animState doesn't index NUM_ANIM_COND_PARACHUTE_STATE\n\t%i not in [0, %i)", animState, v4) )
      __debugbreak();
  }
  return (unsigned int)animState > PARACHUTE_STATE_FREEFALL && animState != PARACHUTE_STATE_FREEFALL_GUNUP;
}

/*
==============
BG_Skydive_CalculateEffectiveHorizontalDragCoefficient
==============
*/
float BG_Skydive_CalculateEffectiveHorizontalDragCoefficient(const playerState_s *ps)
{
  __int128 v1; 
  const SuitDef *SuitDef; 
  float skydive_deployHorizontalDrag; 
  float skydive_canopyLookHorizDragCoeff; 
  RumbleGraph *skydive_canopyLookHorizDragGraph; 
  float skydive_canopyStickHorizDragCoeff; 
  RumbleGraph *skydive_canopyStickHorizDragGraph; 
  float NormalizedPitch; 
  double ValueFromFraction; 
  float v12; 
  float v13; 
  __int128 v15; 
  bool v19; 
  double v23; 
  float v24; 
  __int64 v26; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 268, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  SuitDef = BG_GetSuitDef(ps->suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 271, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  switch ( ps->skydivePlayerState.state[0] )
  {
    case 1:
    case 5:
    case 6:
      goto $LN10_0;
    case 2:
      skydive_deployHorizontalDrag = SuitDef->skydive_deployHorizontalDrag;
      goto LABEL_9;
    case 3:
    case 4:
      skydive_deployHorizontalDrag = SuitDef->skydive_canopyDragCoefHoriz;
LABEL_9:
      skydive_canopyLookHorizDragCoeff = SuitDef->skydive_canopyLookHorizDragCoeff;
      skydive_canopyLookHorizDragGraph = SuitDef->skydive_canopyLookHorizDragGraph;
      skydive_canopyStickHorizDragCoeff = SuitDef->skydive_canopyStickHorizDragCoeff;
      skydive_canopyStickHorizDragGraph = SuitDef->skydive_canopyStickHorizDragGraph;
      break;
    default:
      LODWORD(v26) = (unsigned __int8)ps->skydivePlayerState.state[0];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 308, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled skydive state %d while retrieving suit field values.", v26) )
        __debugbreak();
$LN10_0:
      skydive_canopyStickHorizDragGraph = SuitDef->skydive_freefallStickHorizDragGraph;
      skydive_canopyStickHorizDragCoeff = SuitDef->skydive_freefallStickHorizDragCoeff;
      skydive_canopyLookHorizDragGraph = SuitDef->skydive_freefallLookHorizDragGraph;
      skydive_canopyLookHorizDragCoeff = SuitDef->skydive_freefallLookHorizDragCoeff;
      skydive_deployHorizontalDrag = SuitDef->skydive_freefallDragCoefHoriz;
      break;
  }
  NormalizedPitch = BG_Skydive_GetNormalizedPitch(ps);
  if ( !skydive_canopyLookHorizDragGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 319, ASSERT_TYPE_ASSERT, "( lookDragGraph )", "Suit %s does not define Look Drag Scale Graph - Horizontal. This is a required field!", SuitDef->name) )
    __debugbreak();
  ValueFromFraction = GraphGetValueFromFraction(skydive_canopyLookHorizDragGraph->knotCount, skydive_canopyLookHorizDragGraph->knots, NormalizedPitch);
  v13 = *(float *)&ValueFromFraction * skydive_canopyLookHorizDragCoeff;
  v12 = *(float *)&ValueFromFraction * skydive_canopyLookHorizDragCoeff;
  if ( (COERCE_UNSIGNED_INT(*(float *)&ValueFromFraction * skydive_canopyLookHorizDragCoeff) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 321, ASSERT_TYPE_SANITY, "( !IS_NAN( effectiveLookDragCoef ) )", (const char *)&queryFormat, "!IS_NAN( effectiveLookDragCoef )") )
    __debugbreak();
  __asm { vxorpd  xmm12, xmm12, xmm12 }
  if ( v13 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 322, ASSERT_TYPE_ASSERT, "( effectiveLookDragCoef ) >= ( 0.0f )", "%s >= %s\n\t%g, %g", "effectiveLookDragCoef", "0.0f", v13, *(double *)&_XMM12) )
    __debugbreak();
  *(double *)&v1 = BG_GetSkydiveCurrentThrottle(ps);
  v15 = v1;
  *(float *)&v15 = (float)(*(float *)&v1 * 2.0) - 1.0;
  _XMM2 = v15;
  __asm { vminss  xmm0, xmm2, xmm10 }
  _XMM13 = _XMM0 ^ _xmm;
  v19 = (unsigned __int8)(ps->skydivePlayerState.state[0] - 2) <= 2u;
  _XMM0 = v19;
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm13, xmm11, xmm2
  }
  if ( !skydive_canopyStickHorizDragGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 329, ASSERT_TYPE_ASSERT, "( stickDragGraph )", "Suit %s does not define Stick Drag Scale Graph - Horizontal. This is a required field!", SuitDef->name) )
    __debugbreak();
  v23 = GraphGetValueFromFraction(skydive_canopyStickHorizDragGraph->knotCount, skydive_canopyStickHorizDragGraph->knots, *(const float *)&_XMM0);
  v24 = *(float *)&v23 * skydive_canopyStickHorizDragCoeff;
  if ( !v19 )
    v24 = (float)(*(float *)&v23 * skydive_canopyStickHorizDragCoeff) * *(float *)&_XMM13;
  if ( (LODWORD(v24) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 332, ASSERT_TYPE_SANITY, "( !IS_NAN( effectiveStickDragCoef ) )", (const char *)&queryFormat, "!IS_NAN( effectiveStickDragCoef )") )
    __debugbreak();
  if ( v24 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 333, ASSERT_TYPE_ASSERT, "( effectiveStickDragCoef ) >= ( 0.0f )", "%s >= %s\n\t%g, %g", "effectiveStickDragCoef", "0.0f", v24, *(double *)&_XMM12) )
    __debugbreak();
  return (float)(v12 + skydive_deployHorizontalDrag) + v24;
}

/*
==============
BG_Skydive_CalculateEffectiveVerticalDragCoefficient
==============
*/
float BG_Skydive_CalculateEffectiveVerticalDragCoefficient(const playerState_s *ps)
{
  __int128 v1; 
  const SuitDef *SuitDef; 
  unsigned __int8 v4; 
  float skydive_canopyDragCoefVert; 
  float skydive_canopyLookVertDragCoeff; 
  RumbleGraph *skydive_canopyLookVertDragGraph; 
  float skydive_canopyStickVertDragIncreasePerc; 
  RumbleGraph *skydive_canopyStickVertDragIncreaseGraph; 
  float skydive_canopyStickVertDragReductionPerc; 
  RumbleGraph *skydive_canopyStickVertDragReductionGraph; 
  float v13; 
  float v14; 
  __int128 v16; 
  bool v17; 
  __int128 v22; 
  float v23; 
  float v24; 
  bool v26; 
  double ValueFromFraction; 
  float v28; 
  __int64 v29; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 413, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  SuitDef = BG_GetSuitDef(ps->suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 416, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  v4 = ps->skydivePlayerState.state[0];
  if ( v4 == 2 )
    return SuitDef->skydive_deployVerticalDrag;
  switch ( v4 )
  {
    case 1u:
    case 5u:
    case 6u:
      goto $LN10_1;
    case 2u:
    case 3u:
    case 4u:
      skydive_canopyDragCoefVert = SuitDef->skydive_canopyDragCoefVert;
      skydive_canopyLookVertDragCoeff = SuitDef->skydive_canopyLookVertDragCoeff;
      skydive_canopyLookVertDragGraph = SuitDef->skydive_canopyLookVertDragGraph;
      skydive_canopyStickVertDragIncreasePerc = SuitDef->skydive_canopyStickVertDragIncreasePerc;
      skydive_canopyStickVertDragIncreaseGraph = SuitDef->skydive_canopyStickVertDragIncreaseGraph;
      skydive_canopyStickVertDragReductionPerc = SuitDef->skydive_canopyStickVertDragReductionPerc;
      skydive_canopyStickVertDragReductionGraph = SuitDef->skydive_canopyStickVertDragReductionGraph;
      break;
    default:
      LODWORD(v29) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 461, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled skydive state %d while retrieving suit field values.", v29) )
        __debugbreak();
$LN10_1:
      skydive_canopyStickVertDragReductionGraph = SuitDef->skydive_freefallStickVertDragReductionGraph;
      skydive_canopyStickVertDragReductionPerc = SuitDef->skydive_freefallStickVertDragReductionPerc;
      skydive_canopyStickVertDragIncreaseGraph = SuitDef->skydive_freefallStickVertDragIncreaseGraph;
      skydive_canopyStickVertDragIncreasePerc = SuitDef->skydive_freefallStickVertDragIncreasePerc;
      skydive_canopyLookVertDragGraph = SuitDef->skydive_freefallLookVertDragGraph;
      skydive_canopyLookVertDragCoeff = SuitDef->skydive_freefallLookVertDragCoeff;
      skydive_canopyDragCoefVert = SuitDef->skydive_freefallDragCoefVert;
      break;
  }
  *(float *)&v1 = BG_Skydive_GetNormalizedPitch(ps);
  v13 = *(float *)&v1;
  if ( !skydive_canopyLookVertDragGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 474, ASSERT_TYPE_ASSERT, "( lookDragGraph )", "Suit %s does not define Look Drag Coefficient Graph - Vertical. This is a required field!", SuitDef->name) )
    __debugbreak();
  *(double *)&v1 = GraphGetValueFromFraction(skydive_canopyLookVertDragGraph->knotCount, skydive_canopyLookVertDragGraph->knots, *(const float *)&v1);
  v14 = *(float *)&v1 * skydive_canopyLookVertDragCoeff;
  *(double *)&v1 = BG_GetSkydiveCurrentThrottle(ps);
  v16 = v1;
  *(float *)&v16 = (float)(*(float *)&v1 * 2.0) - 1.0;
  _XMM6 = v16;
  v17 = BG_Skydive_UseParachuteModel(ps);
  if ( *(float *)&v16 <= 0.0 )
  {
    if ( v17 )
      LODWORD(v13) = v16 ^ _xmm;
    if ( !skydive_canopyStickVertDragIncreaseGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 498, ASSERT_TYPE_ASSERT, "( stickDragIncreaseGraph )", "Suit %s does not define Stick Drag Increase Graph - Vertical. This is a required field!", SuitDef->name) )
      __debugbreak();
    ValueFromFraction = GraphGetValueFromFraction(skydive_canopyStickVertDragIncreaseGraph->knotCount, skydive_canopyStickVertDragIncreaseGraph->knots, v13);
    v28 = *(float *)&ValueFromFraction * skydive_canopyStickVertDragIncreasePerc;
    if ( !v17 )
      LODWORD(v28) = COERCE_UNSIGNED_INT((float)(*(float *)&ValueFromFraction * skydive_canopyStickVertDragIncreasePerc) * *(float *)&v16) ^ _xmm;
    v23 = v28 + 1.0;
    if ( (COERCE_UNSIGNED_INT(v28 + 1.0) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 502, ASSERT_TYPE_SANITY, "( !IS_NAN( dragScale ) )", (const char *)&queryFormat, "!IS_NAN( dragScale )") )
      __debugbreak();
    if ( (float)(v28 + 1.0) >= 1.0 )
      return (float)(v14 + skydive_canopyDragCoefVert) * v23;
    v26 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 503, ASSERT_TYPE_ASSERT, "( dragScale ) >= ( 1.0f )", "%s >= %s\n\t%g, %g", "dragScale", "1.0f", v23, DOUBLE_1_0);
  }
  else
  {
    _XMM0 = v17;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm0, xmm6, xmm10, xmm2
    }
    if ( !skydive_canopyStickVertDragReductionGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 486, ASSERT_TYPE_ASSERT, "( stickDragReductionGraph )", "Suit %s does not define Stick Drag Reduction Graph - Vertical. This is a required field!", SuitDef->name) )
      __debugbreak();
    *(double *)&_XMM0 = GraphGetValueFromFraction(skydive_canopyStickVertDragReductionGraph->knotCount, skydive_canopyStickVertDragReductionGraph->knots, *(const float *)&_XMM0);
    v22 = _XMM0;
    *(float *)&v22 = *(float *)&_XMM0 * skydive_canopyStickVertDragReductionPerc;
    _XMM1 = v22;
    if ( !v17 )
    {
      *(float *)&v22 = *(float *)&v22 * *(float *)&_XMM6;
      _XMM1 = v22;
    }
    v24 = 1.0 - *(float *)&_XMM1;
    v23 = 1.0 - *(float *)&_XMM1;
    if ( (COERCE_UNSIGNED_INT(1.0 - *(float *)&_XMM1) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 491, ASSERT_TYPE_SANITY, "( !IS_NAN( dragScale ) )", (const char *)&queryFormat, "!IS_NAN( dragScale )") )
      __debugbreak();
    if ( v24 >= 0.0 && v24 <= 1.0 )
      return (float)(v14 + skydive_canopyDragCoefVert) * v23;
    __asm { vxorpd  xmm1, xmm1, xmm1 }
    v26 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 492, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( dragScale ) && ( dragScale ) <= ( 1.0f )", "dragScale not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v23, *(double *)&_XMM1, DOUBLE_1_0);
  }
  if ( v26 )
    __debugbreak();
  return (float)(v14 + skydive_canopyDragCoefVert) * v23;
}

/*
==============
BG_Skydive_CanQueueSprint
==============
*/
bool BG_Skydive_CanQueueSprint(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2817, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( ps->skydivePlayerState.state[0] == 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2818, ASSERT_TYPE_ASSERT, "( ps->skydivePlayerState.state ) != ( SkydiveState::Count )", "%s != %s\n\t%i, %i", "ps->skydivePlayerState.state", "SkydiveState::Count", 7, 7) )
    __debugbreak();
  return (unsigned __int8)(ps->skydivePlayerState.state[0] - 3) <= 1u;
}

/*
==============
BG_Skydive_CanThirdPersonCam
==============
*/
bool BG_Skydive_CanThirdPersonCam(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2809, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( ps->skydivePlayerState.state[0] == 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2810, ASSERT_TYPE_ASSERT, "( ps->skydivePlayerState.state ) != ( SkydiveState::Count )", "%s != %s\n\t%i, %i", "ps->skydivePlayerState.state", "SkydiveState::Count", 7, 7) )
    __debugbreak();
  return (unsigned __int8)(ps->skydivePlayerState.state[0] - 2) <= 1u;
}

/*
==============
BG_Skydive_DrawLegs
==============
*/
char BG_Skydive_DrawLegs(const playerState_s *ps)
{
  char v1; 
  const dvar_t *v2; 
  const char *v3; 

  v1 = ps->skydivePlayerState.state[0];
  if ( v1 && v1 != 5 )
  {
    if ( v1 == 1 )
    {
      v2 = DCONST_DVARBOOL_skydive_enable_legs_freefall;
      if ( !DCONST_DVARBOOL_skydive_enable_legs_freefall )
      {
        v3 = "skydive_enable_legs_freefall";
        goto LABEL_8;
      }
    }
    else
    {
      v2 = DVARBOOL_skydive_enable_legs_parachute;
      if ( !DVARBOOL_skydive_enable_legs_parachute )
      {
        v3 = "skydive_enable_legs_parachute";
LABEL_8:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v3) )
          __debugbreak();
      }
    }
    Dvar_CheckFrontendServerThread(v2);
    return v2->current.enabled;
  }
  return 1;
}

/*
==============
BG_Skydive_GetNormalizedPitch
==============
*/
double BG_Skydive_GetNormalizedPitch(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 69, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  _XMM0 = 0i64;
  __asm { vroundss xmm4, xmm0, xmm2, 1 }
  *(double *)&_XMM0 = I_fclamp((float)((float)(ps->viewangles.v[0] * 0.0027777778) - *(float *)&_XMM4) * 360.0, -90.0, 90.0);
  return I_fdistnormalized(-90.0, 90.0, *(float *)&_XMM0);
}

/*
==============
BG_Skydive_GetTrackedThrottleValue
==============
*/
float BG_Skydive_GetTrackedThrottleValue(const playerState_s *ps)
{
  double SkydiveCurrentThrottle; 

  SkydiveCurrentThrottle = BG_GetSkydiveCurrentThrottle(ps);
  return (float)(*(float *)&SkydiveCurrentThrottle * 2.0) - 1.0;
}

/*
==============
BG_Skydive_IsParachuting
==============
*/
bool BG_Skydive_IsParachuting(const playerState_s *const ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2788, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( ps->skydivePlayerState.state[0] == 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2789, ASSERT_TYPE_ASSERT, "( ps->skydivePlayerState.state ) != ( SkydiveState::Count )", "%s != %s\n\t%i, %i", "ps->skydivePlayerState.state", "SkydiveState::Count", 7, 7) )
    __debugbreak();
  return (unsigned __int8)(ps->skydivePlayerState.state[0] - 2) <= 1u;
}

/*
==============
BG_Skydive_IsSkydiving
==============
*/
bool BG_Skydive_IsSkydiving(const playerState_s *ps)
{
  unsigned __int8 v2; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2775, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( ps->skydivePlayerState.state[0] == 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2776, ASSERT_TYPE_ASSERT, "( ps->skydivePlayerState.state ) != ( SkydiveState::Count )", "%s != %s\n\t%i, %i", "ps->skydivePlayerState.state", "SkydiveState::Count", 7, 7) )
    __debugbreak();
  v2 = ps->skydivePlayerState.state[0];
  return (unsigned __int8)(v2 - 1) <= 3u || v2 >= 7u;
}

/*
==============
BG_Skydive_IsSuperDiveActive
==============
*/
bool BG_Skydive_IsSuperDiveActive(const playerState_s *ps, char forwardMove, char rightMove)
{
  const SuitDef *SuitDef; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2875, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( ps->skydivePlayerState.state[0] != 1 )
    return 0;
  SuitDef = BG_GetSuitDef(ps->suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2884, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  _XMM0 = 0i64;
  __asm { vroundss xmm4, xmm0, xmm2, 1 }
  if ( (float)((float)((float)(ps->viewangles.v[0] * 0.0027777778) - *(float *)&_XMM4) * 360.0) < SuitDef->skydive_freefallSuperDiveCameraPitch )
    return 0;
  return COERCE_FLOAT(HIDWORD(*(unsigned __int64 *)&BG_GetStickCartesianCoords(rightMove, forwardMove))) >= SuitDef->skydive_freefallSuperDiveStickInput;
}

/*
==============
BG_Skydive_IsWeaponRaise
==============
*/
bool BG_Skydive_IsWeaponRaise(const playerState_s *const ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2800, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( ps->skydivePlayerState.state[0] == 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2801, ASSERT_TYPE_ASSERT, "( ps->skydivePlayerState.state ) != ( SkydiveState::Count )", "%s != %s\n\t%i, %i", "ps->skydivePlayerState.state", "SkydiveState::Count", 7, 7) )
    __debugbreak();
  return ps->skydivePlayerState.state[0] == 5;
}

/*
==============
BG_Skydive_UseParachuteModel
==============
*/
bool BG_Skydive_UseParachuteModel(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 77, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return (unsigned __int8)(ps->skydivePlayerState.state[0] - 2) <= 2u;
}

/*
==============
PM_Skydive_Accelerate
==============
*/
void PM_Skydive_Accelerate(pmove_t *pm, pml_t *pml, const SuitDef *suitDef, const vec3_t *acceleration)
{
  playerState_s *ps; 
  float frametime; 
  float v10; 
  float v11; 
  float skydive_freefallTopGroundSpeed; 
  float v13; 
  float v14; 
  __int128 v15; 
  __int128 v16; 
  bool v18; 
  float v21; 
  float v22; 
  float v23; 
  const dvar_t *v24; 
  __int64 v25; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 852, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 852, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !suitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 854, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  if ( ((LODWORD(acceleration->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(acceleration->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(acceleration->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 856, ASSERT_TYPE_SANITY, "( !IS_NAN( ( acceleration )[0] ) && !IS_NAN( ( acceleration )[1] ) && !IS_NAN( ( acceleration )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( acceleration )[0] ) && !IS_NAN( ( acceleration )[1] ) && !IS_NAN( ( acceleration )[2] )") )
    __debugbreak();
  frametime = pml->frametime;
  v10 = (float)(frametime * acceleration->v[0]) + ps->velocity.v[0];
  ps->velocity.v[0] = v10;
  ps->velocity.v[1] = (float)(frametime * acceleration->v[1]) + ps->velocity.v[1];
  v11 = (float)(frametime * acceleration->v[2]) + ps->velocity.v[2];
  ps->velocity.v[2] = v11;
  if ( ((LODWORD(v10) & 0x7F800000) == 2139095040 || (LODWORD(ps->velocity.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(v11) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 861, ASSERT_TYPE_SANITY, "( !IS_NAN( ( ps->velocity )[0] ) && !IS_NAN( ( ps->velocity )[1] ) && !IS_NAN( ( ps->velocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( ps->velocity )[0] ) && !IS_NAN( ( ps->velocity )[1] ) && !IS_NAN( ( ps->velocity )[2] )") )
    __debugbreak();
  if ( ps->skydivePlayerState.state[0] == 1 )
    goto LABEL_27;
  if ( ps->skydivePlayerState.state[0] != 2 && ps->skydivePlayerState.state[0] != 3 )
  {
    if ( ps->skydivePlayerState.state[0] != 5 && ps->skydivePlayerState.state[0] != 6 )
    {
      LODWORD(v25) = (unsigned __int8)ps->skydivePlayerState.state[0];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 879, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled skydive state %d while retrieving suit field values.", v25) )
        __debugbreak();
    }
LABEL_27:
    skydive_freefallTopGroundSpeed = suitDef->skydive_freefallTopGroundSpeed;
    goto LABEL_28;
  }
  skydive_freefallTopGroundSpeed = suitDef->skydive_canopyTopGroundSpeed;
LABEL_28:
  v13 = skydive_freefallTopGroundSpeed * 39.369999;
  v14 = ps->velocity.v[0];
  v15 = LODWORD(ps->velocity.v[1]);
  v16 = v15;
  *(float *)&v16 = fsqrt((float)(*(float *)&v15 * *(float *)&v15) + (float)(v14 * v14));
  _XMM2 = v16;
  v18 = *(float *)&v16 <= (float)(skydive_freefallTopGroundSpeed * 39.369999);
  __asm
  {
    vcmpless xmm0, xmm2, cs:__real@80000000
    vblendvps xmm0, xmm2, xmm1, xmm0
  }
  v21 = 1.0 / *(float *)&_XMM0;
  v22 = v14 * (float)(1.0 / *(float *)&_XMM0);
  v23 = *(float *)&v15 * v21;
  if ( !v18 )
  {
    ps->velocity.v[0] = v22 * v13;
    ps->velocity.v[1] = v23 * v13;
    if ( ((COERCE_UNSIGNED_INT(v22 * v13) & 0x7F800000) == 2139095040 || (COERCE_UNSIGNED_INT(v23 * v13) & 0x7F800000) == 2139095040 || (LODWORD(ps->velocity.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 892, ASSERT_TYPE_SANITY, "( !IS_NAN( ( ps->velocity )[0] ) && !IS_NAN( ( ps->velocity )[1] ) && !IS_NAN( ( ps->velocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( ps->velocity )[0] ) && !IS_NAN( ( ps->velocity )[1] ) && !IS_NAN( ( ps->velocity )[2] )") )
      __debugbreak();
    *(float *)&v15 = ps->velocity.v[1];
  }
  pml->skydiveGroundSpeed = fsqrt((float)(*(float *)&v15 * *(float *)&v15) + (float)(ps->velocity.v[0] * ps->velocity.v[0]));
  pml->skydiveFallSpeed = COERCE_FLOAT(LODWORD(ps->velocity.v[2]) & _xmm);
  v24 = DVARFLT_skydive_freefall_velocity;
  if ( !DVARFLT_skydive_freefall_velocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_freefall_velocity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v24);
  if ( v24->current.value <= pml->skydiveFallSpeed && ps->skydivePlayerState.state[0] == 5 )
    PM_Skydive_Freefall_Begin(pm, pml);
}

/*
==============
PM_Skydive_AddLandEvent
==============
*/
void PM_Skydive_AddLandEvent(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  float skydiveGroundSpeed; 
  entity_event_t v6; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2356, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2356, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  skydiveGroundSpeed = pml->skydiveGroundSpeed;
  if ( skydiveGroundSpeed > 100.0 )
  {
    v6 = EV_LANDING_PAIN_EXTREME_HEIGHT;
    if ( skydiveGroundSpeed <= 200.0 )
      v6 = EV_LANDING_EXTREME_HEIGHT;
  }
  else
  {
    v6 = EV_LANDING_LOW_HEIGHT;
  }
  BG_AddPredictableEventToPlayerstate(v6, 0, pm->cmd.serverTime, pm->weaponMap, ps);
}

/*
==============
PM_Skydive_AltimeterTrace
==============
*/
void PM_Skydive_AltimeterTrace(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  const BgPlayerTraceInfo *v4; 
  const BgHandler *m_bgHandler; 
  Physics_WorldId v6; 
  float v7; 
  float v8; 
  const dvar_t *v9; 
  int contentMask; 
  BgTrace v11; 
  vec3_t end; 
  trace_t results; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2756, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2756, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v4 = pm->m_bgHandler->GetPlayerTraceInfo(pm->m_bgHandler, (unsigned int)ps->clientNum);
  BgTrace::BgTrace(&v11, v4);
  m_bgHandler = pm->m_bgHandler;
  v11.m_flags |= 0x80u;
  v6 = m_bgHandler->GetPhysicsWorldId((BgHandler *)m_bgHandler);
  v7 = ps->origin.v[1];
  v8 = ps->origin.v[2] - 32000.0;
  contentMask = pm->tracemask;
  end.v[0] = ps->origin.v[0];
  end.v[1] = v7;
  end.v[2] = v8;
  BgTrace::LegacyTraceHandler(&v11, v6, &results, &ps->origin, &end, &bounds_origin, ps->clientNum, contentMask, ps);
  v11.m_flags &= ~0x80u;
  v9 = DCONST_DVARFLT_skydive_min_deploy_altitude;
  if ( !DCONST_DVARFLT_skydive_min_deploy_altitude && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_min_deploy_altitude") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  pm->m_skydiveAutodeployOffset = (int)(float)(results.position.v[2] + v9->current.value);
  pm->m_skydiveAutodeployOffsetIsValid = 1;
}

/*
==============
PM_Skydive_ApplyForces
==============
*/
void PM_Skydive_ApplyForces(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  const SuitDef *SuitDef; 
  float skydive_canopyThrottleTrackSpeed; 
  float skydive_canopyCrossSectionalArea; 
  float v8; 
  float frametime; 
  double SkydiveCurrentThrottle; 
  double v11; 
  double NormalizedPitch; 
  playerState_s *v13; 
  vec3_t *outAcceleration; 
  vec3_t acceleration; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1154, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1154, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  SuitDef = BG_GetSuitDef(ps->suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1157, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  if ( ps->skydivePlayerState.state[0] != 1 )
  {
    if ( ps->skydivePlayerState.state[0] == 2 || ps->skydivePlayerState.state[0] == 3 )
    {
      skydive_canopyCrossSectionalArea = SuitDef->skydive_canopyCrossSectionalArea;
      skydive_canopyThrottleTrackSpeed = SuitDef->skydive_canopyThrottleTrackSpeed;
      goto LABEL_18;
    }
    if ( ps->skydivePlayerState.state[0] != 5 && ps->skydivePlayerState.state[0] != 6 )
    {
      LODWORD(outAcceleration) = (unsigned __int8)ps->skydivePlayerState.state[0];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1178, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled skydive state %d while retrieving suit field values.", outAcceleration) )
        __debugbreak();
    }
  }
  skydive_canopyThrottleTrackSpeed = SuitDef->skydive_freefallThrottleTrackSpeed;
  skydive_canopyCrossSectionalArea = SuitDef->skydive_freefallCrossSectionalArea;
LABEL_18:
  *(vec2_t *)acceleration.v = BG_GetStickCartesianCoords(pm->cmd.rightmove, pm->cmd.forwardmove);
  v8 = (float)(acceleration.v[1] + 1.0) * 0.5;
  I_fclamp(v8, 0.0, 1.0);
  frametime = pml->frametime;
  SkydiveCurrentThrottle = BG_GetSkydiveCurrentThrottle(ps);
  v11 = DiffTrack(v8, *(float *)&SkydiveCurrentThrottle, skydive_canopyThrottleTrackSpeed, frametime);
  ps->skydivePlayerState.currentThrottle = MSG_PackUnsignedFloat(*(float *)&v11, 1.0, 0xAu);
  NormalizedPitch = BG_Skydive_GetNormalizedPitch(ps);
  acceleration.v[0] = 0.0;
  acceleration.v[1] = 0.0;
  acceleration.v[2] = 0.0;
  PM_Skydive_ApplyLateralForces(pm, pml, SuitDef, skydive_canopyCrossSectionalArea, *(const float *)&NormalizedPitch, &acceleration);
  PM_Skydive_ApplyVerticalForces(pm, pml, SuitDef, skydive_canopyCrossSectionalArea, &acceleration);
  PM_Skydive_Accelerate(pm, pml, SuitDef, &acceleration);
  v13 = pm->ps;
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1127, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  switch ( v13->skydivePlayerState.state[0] )
  {
    case 1:
    case 5:
    case 6:
      PM_Skydive_UpdateAngles_Freefall(pm, pml);
      break;
    case 2:
    case 3:
      PM_Skydive_UpdateAngles_Parachute(pm, pml, &acceleration);
      break;
    default:
      PM_Skydive_UpdateAngles_BlendOut(pm, pml);
      break;
  }
}

/*
==============
PM_Skydive_ApplyGlideForces
==============
*/
void PM_Skydive_ApplyGlideForces(pmove_t *pm, pml_t *pml, const SuitDef *suitDef, const float crossSectionalArea, const float pitchNormalized, vec3_t *outAcceleration)
{
  playerState_s *ps; 
  int v9; 
  float v10; 
  float v11; 
  float v12; 
  __int128 v13; 
  RumbleGraph *skydive_canopyTurnMultiplierPitchGraph; 
  float skydive_canopyTurnMultiplierMaxScale; 
  float skydive_canopyTurnMultiplierMinScale; 
  RumbleGraph *skydive_canopyTurnMultiplierGraph; 
  float skydive_canopyMaxTurnMultiplier; 
  RumbleGraph *skydive_canopyStickHorizForceGraph; 
  RumbleGraph *skydive_canopyLookHorizForceGraph; 
  __int128 v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  double v30; 
  double ValueFromFraction; 
  float v32; 
  double v34; 
  float v35; 
  __int128 v36; 
  double v37; 
  float v38; 
  __int128 v39; 
  double v45; 
  float v46; 
  float v47; 
  float v48; 
  float v49; 
  __int128 v50; 
  float v51; 
  __int128 v52; 
  float v56; 
  float v57; 
  __int128 v58; 
  float v59; 
  float v60; 
  __int128 v61; 
  float v62; 
  float v63; 
  float v66; 
  float v67; 
  float v68; 
  __int128 v69; 
  float v70; 
  float v71; 
  float v72; 
  float v73; 
  float v74; 
  float v75; 
  __int64 v76; 
  float v77; 
  float v78; 
  float v79; 
  bool v80; 
  float v81; 
  float v82; 
  float v83; 
  float v84; 
  float v85; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 86, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 86, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !suitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 88, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 77, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v9 = (unsigned __int8)ps->skydivePlayerState.state[0];
  v80 = (unsigned __int8)(v9 - 2) <= 2u;
  if ( v9 != 1 )
  {
    if ( v9 == 2 || v9 == 3 )
    {
      v10 = FLOAT_39_369999;
      v11 = FLOAT_1_0;
      v69 = LODWORD(FLOAT_1_0);
      v68 = 1.0 / suitDef->skydive_mass;
      skydive_canopyLookHorizForceGraph = suitDef->skydive_canopyLookHorizForceGraph;
      skydive_canopyStickHorizForceGraph = suitDef->skydive_canopyStickHorizForceGraph;
      _XMM8 = LODWORD(suitDef->skydive_canopyMinTurnMultiplier);
      skydive_canopyMaxTurnMultiplier = suitDef->skydive_canopyMaxTurnMultiplier;
      skydive_canopyTurnMultiplierGraph = suitDef->skydive_canopyTurnMultiplierGraph;
      skydive_canopyTurnMultiplierMinScale = suitDef->skydive_canopyTurnMultiplierMinScale;
      skydive_canopyTurnMultiplierMaxScale = suitDef->skydive_canopyTurnMultiplierMaxScale;
      skydive_canopyTurnMultiplierPitchGraph = suitDef->skydive_canopyTurnMultiplierPitchGraph;
      *(float *)&v69 = (float)(v68 * suitDef->skydive_canopyLookHorizForceMin) * 39.369999;
      v22 = v69;
      v23 = (float)(v68 * suitDef->skydive_canopyLookHorizForceMax) * 39.369999;
      v24 = (float)(v68 * suitDef->skydive_canopyStickHorizForceMin) * 39.369999;
      v81 = (float)(v68 * suitDef->skydive_canopyStickHorizForceMax) * 39.369999;
      v25 = v68 * suitDef->skydive_canopyStickSidewaysForce;
      goto LABEL_21;
    }
    if ( v9 != 5 && v9 != 6 )
    {
      LODWORD(v76) = (unsigned __int8)ps->skydivePlayerState.state[0];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 147, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled skydive state %d while retrieving suit field values.", v76) )
        __debugbreak();
    }
  }
  v10 = FLOAT_39_369999;
  v11 = FLOAT_1_0;
  v13 = LODWORD(FLOAT_1_0);
  v12 = 1.0 / suitDef->skydive_mass;
  skydive_canopyTurnMultiplierPitchGraph = suitDef->skydive_freefallTurnMultiplierPitchGraph;
  skydive_canopyTurnMultiplierMaxScale = suitDef->skydive_freefallTurnMultiplierMaxScale;
  skydive_canopyTurnMultiplierMinScale = suitDef->skydive_freefallTurnMultiplierMinScale;
  skydive_canopyTurnMultiplierGraph = suitDef->skydive_freefallTurnMultiplierGraph;
  skydive_canopyMaxTurnMultiplier = suitDef->skydive_freefallMaxTurnMultiplier;
  _XMM8 = LODWORD(suitDef->skydive_freefallMinTurnMultiplier);
  skydive_canopyStickHorizForceGraph = suitDef->skydive_freefallStickHorizForceGraph;
  skydive_canopyLookHorizForceGraph = suitDef->skydive_freefallLookHorizForceGraph;
  *(float *)&v13 = (float)(v12 * suitDef->skydive_freefallLookHorizForceMin) * 39.369999;
  v22 = v13;
  v23 = (float)(v12 * suitDef->skydive_freefallLookHorizForceMax) * 39.369999;
  v24 = (float)(v12 * suitDef->skydive_freefallStickHorizForceMin) * 39.369999;
  v81 = (float)(v12 * suitDef->skydive_freefallStickHorizForceMax) * 39.369999;
  v25 = v12 * suitDef->skydive_freefallStickSidewaysForce;
LABEL_21:
  v82 = v25 * v10;
  v26 = atan2f_0(ps->velocity.v[1], ps->velocity.v[0]) * 0.15915494;
  _XMM4 = 0i64;
  __asm
  {
    vroundss xmm0, xmm4, xmm2, 1
    vroundss xmm4, xmm4, xmm3, 1
  }
  v77 = (float)((float)(ps->viewangles.v[1] * 0.0027777778) - *(float *)&_XMM4) * 360.0;
  *(double *)&_XMM0 = AngleDelta((float)(v26 - *(float *)&_XMM0) * 360.0, v77);
  v30 = I_fdistnormalized(0.0, 180.0, COERCE_FLOAT(_XMM0 & _xmm));
  if ( !skydive_canopyTurnMultiplierGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 169, ASSERT_TYPE_ASSERT, "( turnMultiplierGraph )", "Suit %s does not define Turn Multiplier Graph. This is a required field!", suitDef->name) )
    __debugbreak();
  if ( skydive_canopyMaxTurnMultiplier < *(float *)&_XMM8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 170, ASSERT_TYPE_ASSERT, "( maxTurnMultiplier ) >= ( minTurnMultiplier )", "%s >= %s\n\t%g, %g", "maxTurnMultiplier", "minTurnMultiplier", skydive_canopyMaxTurnMultiplier, *(float *)&_XMM8) )
    __debugbreak();
  ValueFromFraction = GraphGetValueFromFraction(skydive_canopyTurnMultiplierGraph->knotCount, skydive_canopyTurnMultiplierGraph->knots, *(const float *)&v30);
  v32 = (float)(*(float *)&ValueFromFraction * (float)(skydive_canopyMaxTurnMultiplier - *(float *)&_XMM8)) + *(float *)&_XMM8;
  v84 = v32;
  if ( (LODWORD(v32) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 172, ASSERT_TYPE_SANITY, "( !IS_NAN( turnMultiplier ) )", (const char *)&queryFormat, "!IS_NAN( turnMultiplier )") )
    __debugbreak();
  __asm { vxorpd  xmm8, xmm8, xmm8 }
  if ( v32 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 173, ASSERT_TYPE_ASSERT, "( turnMultiplier ) >= ( 0.0f )", "%s >= %s\n\t%g, %g", "turnMultiplier", "0.0f", v32, *(double *)&_XMM8) )
    __debugbreak();
  if ( !skydive_canopyTurnMultiplierPitchGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 175, ASSERT_TYPE_ASSERT, "( turnMultiplierPitchGraph )", "Suit %s does not define Turn Multiplier Pitch Scale Graph. This is a required field!", suitDef->name) )
    __debugbreak();
  if ( skydive_canopyTurnMultiplierMaxScale < skydive_canopyTurnMultiplierMinScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 176, ASSERT_TYPE_ASSERT, "( maxTurnMultiplierScale ) >= ( minTurnMultiplierScale )", "%s >= %s\n\t%g, %g", "maxTurnMultiplierScale", "minTurnMultiplierScale", skydive_canopyTurnMultiplierMaxScale, skydive_canopyTurnMultiplierMinScale) )
    __debugbreak();
  v34 = GraphGetValueFromFraction(skydive_canopyTurnMultiplierPitchGraph->knotCount, skydive_canopyTurnMultiplierPitchGraph->knots, pitchNormalized);
  v35 = (float)(*(float *)&v34 * (float)(skydive_canopyTurnMultiplierMaxScale - skydive_canopyTurnMultiplierMinScale)) + skydive_canopyTurnMultiplierMinScale;
  v83 = v35;
  if ( (LODWORD(v35) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 178, ASSERT_TYPE_SANITY, "( !IS_NAN( turnMultiplierPitchScale ) )", (const char *)&queryFormat, "!IS_NAN( turnMultiplierPitchScale )") )
    __debugbreak();
  if ( v35 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 179, ASSERT_TYPE_ASSERT, "( turnMultiplierPitchScale ) >= ( 0.0f )", "%s >= %s\n\t%g, %g", "turnMultiplierPitchScale", "0.0f", v35, *(double *)&_XMM8) )
    __debugbreak();
  v36 = LODWORD(v77);
  angles.v[1] = v77;
  angles.v[0] = 0.0;
  angles.v[2] = 0.0;
  AnglesToAxis(&angles, &axis);
  if ( !skydive_canopyLookHorizForceGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 186, ASSERT_TYPE_ASSERT, "( lookHorizAccelerationGraph )", "Suit %s does not define Horizontal Look Force Graph. This is a required field!", suitDef->name) )
    __debugbreak();
  if ( v23 < *(float *)&v22 )
  {
    *((_QWORD *)&v36 + 1) = *((_QWORD *)&v22 + 1);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 187, ASSERT_TYPE_ASSERT, "( lookHorizAccelerationMax ) >= ( lookHorizAccelerationMin )", "%s >= %s\n\t%g, %g", "lookHorizAccelerationMax", "lookHorizAccelerationMin", v23, *(float *)&v22) )
      __debugbreak();
  }
  v37 = GraphGetValueFromFraction(skydive_canopyLookHorizForceGraph->knotCount, skydive_canopyLookHorizForceGraph->knots, pitchNormalized);
  v38 = (float)(*(float *)&v37 * (float)(v23 - *(float *)&v22)) + *(float *)&v22;
  if ( (LODWORD(v38) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 189, ASSERT_TYPE_SANITY, "( !IS_NAN( lookBasedAcceleration ) )", (const char *)&queryFormat, "!IS_NAN( lookBasedAcceleration )") )
    __debugbreak();
  LODWORD(v85) = *(_QWORD *)&BG_GetStickCartesianCoords(pm->cmd.rightmove, pm->cmd.forwardmove);
  *(double *)&v36 = BG_GetSkydiveCurrentThrottle(ps);
  v39 = v36;
  *(float *)&v39 = (float)(*(float *)&v36 * 2.0) - v11;
  _XMM2 = v39;
  __asm { vmaxss  xmm7, xmm2, xmm6 }
  if ( !skydive_canopyStickHorizForceGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 198, ASSERT_TYPE_ASSERT, "( stickHorizAccelerationGraph )", "Suit %s does not define Horizontal Stick Force Graph. This is a required field!", suitDef->name) )
    __debugbreak();
  if ( v81 < v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 199, ASSERT_TYPE_ASSERT, "( stickHorizAccelerationMax ) >= ( stickHorizAccelerationMin )", "%s >= %s\n\t%g, %g", "stickHorizAccelerationMax", "stickHorizAccelerationMin", v81, v24) )
    __debugbreak();
  _XMM0 = v80;
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm7, xmm9, xmm2
  }
  v45 = GraphGetValueFromFraction(skydive_canopyStickHorizForceGraph->knotCount, skydive_canopyStickHorizForceGraph->knots, *(const float *)&_XMM0);
  v46 = (float)(*(float *)&v45 * (float)(v81 - v24)) + v24;
  if ( !v80 )
    v46 = (float)((float)(*(float *)&v45 * (float)(v81 - v24)) + v24) * *(float *)&_XMM7;
  if ( (LODWORD(v46) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 207, ASSERT_TYPE_SANITY, "( !IS_NAN( stickBasedAcceleration ) )", (const char *)&queryFormat, "!IS_NAN( stickBasedAcceleration )") )
    __debugbreak();
  v48 = v46 + v38;
  v47 = v48;
  if ( (LODWORD(v48) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 211, ASSERT_TYPE_SANITY, "( !IS_NAN( forwardAcceleration ) )", (const char *)&queryFormat, "!IS_NAN( forwardAcceleration )") )
    __debugbreak();
  if ( COERCE_FLOAT(LODWORD(v48) & _xmm) > 0.000001 )
  {
    v49 = ps->velocity.v[0];
    v50 = LODWORD(ps->velocity.v[1]);
    v51 = v48 * axis.m[0].v[2];
    v52 = v50;
    *(float *)&v52 = fsqrt((float)(*(float *)&v50 * *(float *)&v50) + (float)(v49 * v49));
    _XMM2 = v52;
    __asm
    {
      vcmpless xmm0, xmm2, cs:__real@80000000
      vblendvps xmm1, xmm2, xmm14, xmm0
    }
    v56 = v49 * (float)(v11 / *(float *)&_XMM1);
    v58 = v50;
    *(float *)&v58 = *(float *)&v50 * (float)(v11 / *(float *)&_XMM1);
    v57 = *(float *)&v58;
    v59 = axis.m[0].v[0] * v47;
    v60 = axis.m[0].v[1] * v47;
    if ( *(float *)&_XMM2 <= 0.000001 )
    {
      v71 = (float)(axis.m[0].v[1] * v47) + outAcceleration->v[1];
      v72 = v51 + outAcceleration->v[2];
      v78 = v59 + outAcceleration->v[0];
      outAcceleration->v[0] = v78;
      outAcceleration->v[1] = v71;
      outAcceleration->v[2] = v72;
      if ( ((LODWORD(v78) & 0x7F800000) == 2139095040 || (LODWORD(v71) & 0x7F800000) == 2139095040 || (LODWORD(v72) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 257, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outAcceleration )[0] ) && !IS_NAN( ( outAcceleration )[1] ) && !IS_NAN( ( outAcceleration )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outAcceleration )[0] ) && !IS_NAN( ( outAcceleration )[1] ) && !IS_NAN( ( outAcceleration )[2] )") )
        __debugbreak();
    }
    else
    {
      *(float *)&v58 = (float)(*(float *)&v58 * v60) + (float)(v56 * v59);
      v61 = v58;
      v62 = v56 * *(float *)&v58;
      v63 = *(float *)&v58 * v57;
      if ( (float)((float)(v57 * axis.m[0].v[1]) + (float)(v56 * axis.m[0].v[0])) < *(float *)&dword_14503BB74 && pm->cmd.inputFromGamepad )
      {
        _XMM3 = v61 & (unsigned int)_xmm;
        __asm { vminss  xmm0, xmm3, [rsp+198h+var_13C] }
        v66 = v56 * COERCE_FLOAT(_XMM0 ^ _xmm);
        v67 = COERCE_FLOAT(_XMM0 ^ _xmm) * v57;
      }
      else
      {
        v66 = v62;
        v67 = v63;
      }
      v70 = v67 + outAcceleration->v[1];
      outAcceleration->v[0] = (float)((float)(v59 - v62) * (float)(v83 * v84)) + (float)(v66 + outAcceleration->v[0]);
      outAcceleration->v[2] = (float)(v51 * (float)(v83 * v84)) + outAcceleration->v[2];
      outAcceleration->v[1] = (float)((float)(v60 - v63) * (float)(v83 * v84)) + v70;
    }
  }
  LODWORD(v73) = COERCE_UNSIGNED_INT(v85 * v82) ^ _xmm;
  v74 = (float)(v73 * axis.m[1].v[1]) + outAcceleration->v[1];
  v75 = (float)(v73 * axis.m[1].v[2]) + outAcceleration->v[2];
  v79 = (float)(v73 * axis.m[1].v[0]) + outAcceleration->v[0];
  outAcceleration->v[0] = v79;
  outAcceleration->v[1] = v74;
  outAcceleration->v[2] = v75;
  if ( ((LODWORD(v79) & 0x7F800000) == 2139095040 || (LODWORD(v74) & 0x7F800000) == 2139095040 || (LODWORD(v75) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 262, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outAcceleration )[0] ) && !IS_NAN( ( outAcceleration )[1] ) && !IS_NAN( ( outAcceleration )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outAcceleration )[0] ) && !IS_NAN( ( outAcceleration )[1] ) && !IS_NAN( ( outAcceleration )[2] )") )
    __debugbreak();
}

/*
==============
PM_Skydive_ApplyLateralDrag
==============
*/
void PM_Skydive_ApplyLateralDrag(pmove_t *pm, pml_t *pml, const SuitDef *suitDef, const float crossSectionalArea, vec3_t *outAcceleration)
{
  playerState_s *ps; 
  float v11; 
  __int128 v12; 
  __int128 v14; 
  float v17; 
  float v18; 
  double v19; 
  float v21; 
  float v22; 
  const dvar_t *v23; 
  float frametime; 
  float v25; 
  float v26; 
  float v27; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 341, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 341, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !suitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 343, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  v11 = ps->velocity.v[0];
  v12 = LODWORD(ps->velocity.v[1]);
  v14 = v12;
  *(float *)&v14 = fsqrt((float)(*(float *)&v12 * *(float *)&v12) + (float)(v11 * v11));
  _XMM7 = v14;
  __asm
  {
    vcmpless xmm0, xmm7, cs:__real@80000000
    vblendvps xmm0, xmm7, xmm1, xmm0
  }
  v17 = v11 * (float)(1.0 / *(float *)&_XMM0);
  v18 = *(float *)&v12 * (float)(1.0 / *(float *)&_XMM0);
  if ( *(float *)&v14 > 0.000001 )
  {
    v19 = BG_Skydive_CalculateEffectiveHorizontalDragCoefficient(ps);
    __asm { vxorpd  xmm10, xmm10, xmm10 }
    if ( *(float *)&v19 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 361, ASSERT_TYPE_ASSERT, "( effectiveDragCoef ) >= ( 0.0f )", "%s >= %s\n\t%g, %g", "effectiveDragCoef", "0.0f", *(float *)&v19, *(double *)&_XMM10) )
      __debugbreak();
    v22 = (float)((float)((float)((float)((float)(*(float *)&v19 * 0.61250001) * crossSectionalArea) * (float)(*(float *)&v14 * 0.0254)) * (float)(*(float *)&v14 * 0.0254)) / suitDef->skydive_mass) * 39.369999;
    v21 = v22;
    if ( v22 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 364, ASSERT_TYPE_ASSERT, "( dragAcceleration ) >= ( 0.0f )", "%s >= %s\n\t%g, %g", "dragAcceleration", "0.0f", v22, *(double *)&_XMM10) )
      __debugbreak();
    v23 = DVARBOOL_skydive_enable_drag_acceleration_fix;
    if ( !DVARBOOL_skydive_enable_drag_acceleration_fix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_enable_drag_acceleration_fix") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v23);
    if ( v23->current.enabled )
    {
      frametime = pml->frametime;
      if ( (float)(frametime * v22) > *(float *)&_XMM7 )
        v21 = *(float *)&_XMM7 / frametime;
    }
    v25 = (float)(v17 * COERCE_FLOAT(LODWORD(v21) ^ _xmm)) + outAcceleration->v[0];
    v26 = (float)(v18 * COERCE_FLOAT(LODWORD(v21) ^ _xmm)) + outAcceleration->v[1];
    v27 = outAcceleration->v[2];
    outAcceleration->v[0] = v25;
    outAcceleration->v[1] = v26;
    outAcceleration->v[2] = v27;
    if ( ((LODWORD(v25) & 0x7F800000) == 2139095040 || (LODWORD(v26) & 0x7F800000) == 2139095040 || (LODWORD(v27) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 378, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outAcceleration )[0] ) && !IS_NAN( ( outAcceleration )[1] ) && !IS_NAN( ( outAcceleration )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outAcceleration )[0] ) && !IS_NAN( ( outAcceleration )[1] ) && !IS_NAN( ( outAcceleration )[2] )") )
      __debugbreak();
  }
}

/*
==============
PM_Skydive_ApplyLateralForces
==============
*/
void PM_Skydive_ApplyLateralForces(pmove_t *pm, pml_t *pml, const SuitDef *suitDef, const float crossSectionalArea, const float pitchNormalized, vec3_t *outAcceleration)
{
  playerState_s *ps; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 384, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 384, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !suitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 386, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  if ( ps->skydivePlayerState.state[0] != 2 )
    PM_Skydive_ApplyGlideForces(pm, pml, suitDef, crossSectionalArea, pitchNormalized, outAcceleration);
  if ( ((LODWORD(ps->origin.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(ps->origin.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(ps->origin.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 396, ASSERT_TYPE_SANITY, "( !IS_NAN( ( ps->origin )[0] ) && !IS_NAN( ( ps->origin )[1] ) && !IS_NAN( ( ps->origin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( ps->origin )[0] ) && !IS_NAN( ( ps->origin )[1] ) && !IS_NAN( ( ps->origin )[2] )") )
    __debugbreak();
  if ( ((LODWORD(ps->velocity.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(ps->velocity.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(ps->velocity.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 397, ASSERT_TYPE_SANITY, "( !IS_NAN( ( ps->velocity )[0] ) && !IS_NAN( ( ps->velocity )[1] ) && !IS_NAN( ( ps->velocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( ps->velocity )[0] ) && !IS_NAN( ( ps->velocity )[1] ) && !IS_NAN( ( ps->velocity )[2] )") )
    __debugbreak();
  if ( ((LODWORD(outAcceleration->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(outAcceleration->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(outAcceleration->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 398, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outAcceleration )[0] ) && !IS_NAN( ( outAcceleration )[1] ) && !IS_NAN( ( outAcceleration )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outAcceleration )[0] ) && !IS_NAN( ( outAcceleration )[1] ) && !IS_NAN( ( outAcceleration )[2] )") )
    __debugbreak();
  PM_Skydive_ApplyLateralDrag(pm, pml, suitDef, crossSectionalArea, outAcceleration);
}

/*
==============
PM_Skydive_ApplyVerticalForces
==============
*/
void PM_Skydive_ApplyVerticalForces(pmove_t *pm, pml_t *pml, const SuitDef *suitDef, const float crossSectionalArea, vec3_t *outAcceleration)
{
  playerState_s *ps; 
  float v10; 
  unsigned __int128 v11; 
  unsigned __int128 v12; 
  unsigned __int128 v15; 
  unsigned __int128 v16; 
  const dvar_t *v17; 
  float frametime; 
  unsigned __int128 v19; 
  float v23; 
  float v24; 
  float v25; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 512, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 512, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !suitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 513, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  v10 = suitDef->skydive_gravitatationalAcceleration * -39.369999;
  outAcceleration->v[0] = (float)(v10 * 0.0) + outAcceleration->v[0];
  outAcceleration->v[1] = (float)(v10 * 0.0) + outAcceleration->v[1];
  outAcceleration->v[2] = (float)(v10 * 1.0) + outAcceleration->v[2];
  v11 = LODWORD(ps->velocity.v[2]) & (unsigned __int128)_xmm;
  *((_QWORD *)&v12 + 1) = *((_QWORD *)&v11 + 1);
  if ( *(float *)&v11 > 0.000001 )
  {
    *(double *)&v12 = BG_Skydive_CalculateEffectiveVerticalDragCoefficient(ps);
    _XMM9 = 0i64;
    __asm { vxorpd  xmm8, xmm8, xmm8 }
    if ( *(float *)&v12 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 528, ASSERT_TYPE_ASSERT, "( effectiveDragCoef ) >= ( 0.0f )", "%s >= %s\n\t%g, %g", "effectiveDragCoef", "0.0f", *(float *)&v12, *(double *)&_XMM8) )
      __debugbreak();
    v16 = v12;
    *(float *)&v16 = (float)((float)((float)((float)((float)(*(float *)&v12 * 0.61250001) * crossSectionalArea) * (float)(*(float *)&v11 * 0.0254)) * (float)(*(float *)&v11 * 0.0254)) / suitDef->skydive_mass) * 39.369999;
    v15 = v16;
    if ( *(float *)&v16 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 533, ASSERT_TYPE_ASSERT, "( dragAcceleration ) >= ( 0.0f )", "%s >= %s\n\t%g, %g", "dragAcceleration", "0.0f", *(float *)&v16, *(double *)&_XMM8) )
      __debugbreak();
    v17 = DVARBOOL_skydive_enable_drag_acceleration_fix;
    if ( !DVARBOOL_skydive_enable_drag_acceleration_fix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_enable_drag_acceleration_fix") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    if ( v17->current.enabled )
    {
      frametime = pml->frametime;
      if ( (float)(frametime * *(float *)&v16) > *(float *)&v11 )
      {
        v19 = v11;
        *(float *)&v19 = *(float *)&v11 / frametime;
        v15 = v19;
      }
    }
    __asm { vcmpless xmm0, xmm9, dword ptr [rbp+44h] }
    _XMM1 = v15 ^ _xmm;
    __asm { vblendvps xmm0, xmm1, xmm6, xmm0 }
    v23 = (float)(COERCE_FLOAT(_XMM0 ^ _xmm) * 0.0) + outAcceleration->v[0];
    outAcceleration->v[0] = v23;
    v24 = (float)(COERCE_FLOAT(_XMM0 ^ _xmm) * 0.0) + outAcceleration->v[1];
    outAcceleration->v[1] = v24;
    v25 = (float)(COERCE_FLOAT(_XMM0 ^ _xmm) * 1.0) + outAcceleration->v[2];
    outAcceleration->v[2] = v25;
    if ( ((LODWORD(v23) & 0x7F800000) == 2139095040 || (LODWORD(v24) & 0x7F800000) == 2139095040 || (LODWORD(v25) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 547, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outAcceleration )[0] ) && !IS_NAN( ( outAcceleration )[1] ) && !IS_NAN( ( outAcceleration )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outAcceleration )[0] ) && !IS_NAN( ( outAcceleration )[1] ) && !IS_NAN( ( outAcceleration )[2] )") )
      __debugbreak();
  }
}

/*
==============
PM_Skydive_BaseJump_Check
==============
*/
char PM_Skydive_BaseJump_Check(pmove_t *pm, pml_t *pml)
{
  __int128 v2; 
  playerState_s *ps; 
  double UpContribution; 
  const SuitDef *SuitDef; 
  float skydive_baseJumpForceFreefallHeight; 
  bool v10; 
  const dvar_t *v11; 
  Bounds *v13; 
  double CollisionStickLength; 
  float v15; 
  const BgHandler *m_bgHandler; 
  const BgPlayerTraceInfo *v17; 
  const BgHandler *v18; 
  Physics_WorldId v19; 
  __int128 fraction_low; 
  const dvar_t *v23; 
  bool enabled; 
  const dvar_t *v25; 
  char v26; 
  bool v27; 
  double Float_Internal_DebugName; 
  int contentMask; 
  BgTrace v31; 
  vec3_t vec; 
  vec3_t end; 
  vec3_t outTraceDir; 
  Bounds bounds; 
  trace_t results; 
  __int128 v37; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1801, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1801, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x13u) || (UpContribution = WorldUpReferenceFrame::GetUpContribution(&pm->refFrame, &ps->velocity), *(float *)&UpContribution < 0.0) )
  {
    SuitDef = BG_GetSuitDef(ps->suitIndex);
    if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1814, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
      __debugbreak();
    *(float *)&_XMM10 = SuitDef->skydive_baseJumpMinimumHeight;
    skydive_baseJumpForceFreefallHeight = SuitDef->skydive_baseJumpForceFreefallHeight;
    if ( skydive_baseJumpForceFreefallHeight <= *(float *)&_XMM10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1819, ASSERT_TYPE_ASSERT, "( forceFreefallHeight > baseJumpMinimumHeight )", "forceFreefallHeight must be greater than baseJumpMinimumHeight") )
      __debugbreak();
    if ( *(float *)&_XMM10 > 0.0 )
    {
      v10 = (char)ps->skydivePlayerState.flags[0] < 0;
      v37 = v2;
      if ( v10 )
      {
        v11 = DCONST_DVARFLT_skydive_min_deploy_altitude;
        if ( !DCONST_DVARFLT_skydive_min_deploy_altitude && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_min_deploy_altitude") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v11);
        _XMM0 = v11->current.unsignedInt;
        __asm { vminss  xmm10, xmm0, xmm10 }
      }
      v13 = pm->bounds;
      vec = ps->origin;
      CollisionStickLength = BG_PlayerCollision_GetCollisionStickLength(v13);
      WorldUpReferenceFrame::AddUpContribution(&pm->refFrame, *(float *)&CollisionStickLength + 0.125, &vec);
      v15 = (float)(*(float *)&CollisionStickLength + 0.125) + skydive_baseJumpForceFreefallHeight;
      PM_Skydive_GetBaseJumpTraceDir(ps, v15, &outTraceDir);
      m_bgHandler = pm->m_bgHandler;
      end.v[0] = outTraceDir.v[0] + vec.v[0];
      end.v[2] = outTraceDir.v[2] + vec.v[2];
      end.v[1] = outTraceDir.v[1] + vec.v[1];
      v17 = m_bgHandler->GetPlayerTraceInfo(m_bgHandler, ps->clientNum);
      BgTrace::BgTrace(&v31, v17);
      v18 = pm->m_bgHandler;
      v31.m_flags |= 0x80u;
      v19 = v18->GetPhysicsWorldId((BgHandler *)v18);
      BgTrace::LegacyTraceHandler(&v31, v19, &results, &vec, &end, &bounds_origin, ps->clientNum, pm->tracemask, ps);
      v31.m_flags &= ~0x80u;
      PM_Skydive_ValidateGroundTrace(pm, pml, &vec, &end, (float)(*(float *)&CollisionStickLength + 0.125) + *(float *)&_XMM10, &results);
      fraction_low = LODWORD(results.fraction);
      *(float *)&fraction_low = (float)(results.fraction * v15) - (float)(*(float *)&CollisionStickLength + 0.125);
      _XMM1 = fraction_low;
      __asm { vmaxss  xmm1, xmm1, xmm9 }
      if ( results.fraction == 1.0 )
      {
        ((void (__fastcall *)(pmove_t *))pm->SetSkydiveBasejumpGroundHeight)(pm);
        v23 = DVARBOOL_skydive_always_weapon_raise;
        if ( !DVARBOOL_skydive_always_weapon_raise && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_always_weapon_raise") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v23);
        enabled = v23->current.enabled;
        v25 = DVARFLT_skydive_freefall_velocity;
        if ( !DVARFLT_skydive_freefall_velocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_freefall_velocity") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v25);
        v26 = ps->skydivePlayerState.state[0];
        v27 = v25->current.value <= pml->skydiveFallSpeed && v26 == 5;
        if ( !enabled || v27 || v26 != 5 )
          PM_Skydive_Freefall_Begin(pm, pml);
      }
      else if ( results.startsolid || results.fraction < (float)((float)((float)(*(float *)&CollisionStickLength + 0.125) + *(float *)&_XMM10) / v15) )
      {
        ((void (__fastcall *)(pmove_t *))pm->SetSkydiveBasejumpGroundHeight)(pm);
        ps->pm_flags.m_flags[1] &= ~0x80000u;
      }
      else
      {
        ((void (__fastcall *)(pmove_t *))pm->SetSkydiveBasejumpGroundHeight)(pm);
        Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_skydive_base_jump_trace_clearance_sphere_radius, "skydive_base_jump_trace_clearance_sphere_radius");
        end = ps->origin;
        WorldUpReferenceFrame::AddUpContribution(&pm->refFrame, COERCE_FLOAT(_XMM10 ^ _xmm), &end);
        contentMask = pm->tracemask;
        v31.m_flags |= 0x80u;
        bounds.midPoint.v[0] = 0.0;
        bounds.midPoint.v[1] = 0.0;
        bounds.midPoint.v[2] = 0.0;
        bounds.halfSize.v[0] = *(float *)&Float_Internal_DebugName;
        bounds.halfSize.v[1] = *(float *)&Float_Internal_DebugName;
        bounds.halfSize.v[2] = *(float *)&Float_Internal_DebugName;
        BgTrace::LegacyTraceHandler(&v31, v19, &results, &ps->origin, &ps->origin, &bounds, ps->clientNum, contentMask, ps);
        if ( !results.startsolid && results.fraction >= 1.0 )
          return 1;
      }
    }
  }
  return 0;
}

/*
==============
PM_Skydive_BeginDeployParachute
==============
*/
void PM_Skydive_BeginDeployParachute(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 655, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 655, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( PM_Skydive_CanActivate(pm) )
  {
    ps->pm_flags.m_flags[1] &= 0xFFF2FFFF;
    if ( (unsigned __int8)(ps->skydivePlayerState.state[0] - 2) > 1u )
    {
      PM_Skydive_Initialize(pm, pml);
      PM_Skydive_OpenParachute(pm, pml, 1);
      ps->skydivePlayerState.state[0] = 2;
      ps->skydivePlayerState.animState = 2;
      BG_AddPredictableEventToPlayerstate(EV_SKYDIVE_DEPLOY_PARACHUTE, 0, pm->cmd.serverTime, pm->weaponMap, ps);
    }
  }
}

/*
==============
PM_Skydive_CanActivate
==============
*/
bool PM_Skydive_CanActivate(pmove_t *pm)
{
  playerState_s *ps; 
  bool v3; 
  bool v4; 
  int pm_type; 
  bool v6; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 591, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 591, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v3 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u);
  v4 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0xBu);
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2671, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  pm_type = ps->pm_type;
  v6 = pm_type == 1 || pm_type == 8;
  return !v3 && !v4 && !v6 && ps->grenadeTimeLeft <= 0 && ((unsigned int)(ps->weapState[0].weaponState - 26) > 6 || PM_Weapon_IsInInterruptibleState(pm->weaponMap, ps, WEAPON_HAND_DEFAULT, pm->m_bgHandler)) && (!BG_Offhand_HasActiveOffhand(ps) || BG_Offhand_ActiveOffhandIsInterruptable(pm));
}

/*
==============
PM_Skydive_Chute_AutoDeployCut
==============
*/
void PM_Skydive_Chute_AutoDeployCut(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v5; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2520, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2520, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
  v5 = BG_UsingAlternate(ps);
  ps->skydivePlayerState.animState = 10;
  ps->skydivePlayerState.flags[0] |= 0x20u;
  ps->skydivePlayerState.flagsExtra[0] |= 1u;
  ps->weapState[0].weaponState = 75;
  ps->weapState[0].weaponTime = BG_SkydiveParachuteMidAirDetachTime(ps, CurrentWeaponForPlayer, v5);
  BG_SetWeaponDelay(pm->weaponMap, ps, WEAPON_HAND_DEFAULT, 0, NULL);
  PM_StartWeaponAnim(ps, WEAP_SKYDIVE_MID_AIR_DETACH, WEAPON_HAND_DEFAULT);
}

/*
==============
PM_Skydive_Chute_Cut
==============
*/
void PM_Skydive_Chute_Cut(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v6; 
  const dvar_t *v7; 
  bool v8; 
  WeaponAnimNumber v9; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2481, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2481, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
  v6 = BG_UsingAlternate(ps);
  v7 = DVARBOOL_skydive_always_weapon_raise;
  v8 = v6;
  v9 = WEAP_SKYDIVE_DETACH;
  if ( !DVARBOOL_skydive_always_weapon_raise && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_always_weapon_raise") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled )
  {
    ps->skydivePlayerState.flagsExtra[0] |= 0x10u;
    v9 = WEAP_SKYDIVE_MID_AIR_DETACH;
    ps->weapState[0].weaponTime = BG_SkydiveParachuteMidAirDetachTime(ps, CurrentWeaponForPlayer, v8);
  }
  else
  {
    ps->weapState[0].weaponTime = BG_SkydiveParachuteDetachTime(ps, CurrentWeaponForPlayer, v8);
    ps->skydivePlayerState.state[0] = 1;
  }
  ps->skydivePlayerState.animState = 9;
  PM_Skydive_PerformTrace(pm, pml, FREEFALL_DEPLOY_MIN, 1);
  if ( pml->skydiveTrace.startsolid || 1.0 == pml->skydiveTrace.fraction )
    ps->pm_flags.m_flags[1] |= 0x40000u;
  ps->skydivePlayerState.flags[0] |= 0x20u;
  ps->skydivePlayerState.flagsExtra[0] |= 1u;
  ps->weapState[0].weaponState = 74;
  BG_SetWeaponDelay(pm->weaponMap, ps, WEAPON_HAND_DEFAULT, 0, NULL);
  PM_StartWeaponAnim(ps, v9, WEAPON_HAND_DEFAULT);
}

/*
==============
PM_Skydive_Chute_Cut_High_End
==============
*/
void PM_Skydive_Chute_Cut_High_End(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  const dvar_t *v5; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v7; 
  int v8; 
  bool v9; 
  const BgHandler *m_bgHandler; 
  playerState_s *v11; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2652, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2652, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v5 = DVARBOOL_skydive_always_weapon_raise;
  if ( !DVARBOOL_skydive_always_weapon_raise && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_always_weapon_raise") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled )
  {
    if ( ps->skydivePlayerState.state[0] != 5 )
    {
      ps->skydivePlayerState.state[0] = 5;
      ps->skydivePlayerState.flags[0] &= ~0x20u;
      ps->skydivePlayerState.animState = 11;
      ps->cameraTypeIndex = 0;
      ps->pm_flags.m_flags[0] &= ~0x10000000u;
      CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
      v7 = BG_UsingAlternate(ps);
      v8 = BG_PlayerDualWielding(ps);
      ps->weapState[0].weaponState = 73;
      ps->weapState[0].weaponTime = BG_RaiseTime(ps, CurrentWeaponForPlayer, v7, v8 == 1);
      BG_SetWeaponDelay(pm->weaponMap, ps, WEAPON_HAND_DEFAULT, 0, NULL);
      PM_StartWeaponAnim(ps, WEAP_SKYDIVE_WEAPON_RAISE, WEAPON_HAND_DEFAULT);
      BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_RAISEWEAPON, 0, 0, &pml->holdrand);
      PM_Weapon_FireAnimScriptWeaponRaiseEventForTime(pm, pml, (float)ps->weapState[0].weaponTime * 0.001);
      BG_AddPredictableEventToPlayerstate(EV_SKYDIVE_END, 0, pm->cmd.serverTime, pm->weaponMap, ps);
      v9 = PM_IsInAir(pm);
      m_bgHandler = pm->m_bgHandler;
      if ( v9 )
        BG_AnimScriptAnimation(m_bgHandler, ps, AISTATE_COMBAT, ANIM_MT_AIR, 0, 0);
      else
        BG_AnimScriptAnimation(m_bgHandler, ps, AISTATE_COMBAT, ANIM_MT_IDLE, 0, pml->turning);
    }
  }
  else if ( (ps->skydivePlayerState.flags[0] & 0x20) != 0 )
  {
    ps->pm_flags.m_flags[1] &= ~0x8000u;
    ps->skydivePlayerState.state[0] = 1;
    v11 = pm->ps;
    if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2554, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    v11->weapState[0].weaponState = 65;
    v11->weapState[0].weaponTime = 0;
    BG_SetWeaponDelay(pm->weaponMap, v11, WEAPON_HAND_DEFAULT, 0, NULL);
    PM_StartWeaponAnim(v11, WEAP_SKYDIVE_FREEFALL_IDLE, WEAPON_HAND_DEFAULT);
    ps->skydivePlayerState.animState = 1;
    ps->skydivePlayerState.flags[0] &= ~0x20u;
  }
}

/*
==============
PM_Skydive_End
==============
*/
void PM_Skydive_End(pmove_t *pm, pml_t *pml, const bool isLandingEndEvent)
{
  playerState_s *ps; 
  const dvar_t *v7; 
  char v8; 
  bool v9; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v11; 
  int v12; 
  PlayerAnimScriptMoveType v13; 
  int turning; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2565, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2565, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( ps->skydivePlayerState.state[0] != 6 )
    goto LABEL_14;
  v7 = DVARBOOL_killswitch_skydive_stuck_after_landing_fix_enabled;
  if ( !DVARBOOL_killswitch_skydive_stuck_after_landing_fix_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_skydive_stuck_after_landing_fix_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled && isLandingEndEvent && (unsigned int)(ps->pm_type - 7) > 1 )
  {
LABEL_14:
    v8 = ps->skydivePlayerState.state[0];
    if ( v8 && v8 != 5 )
    {
      v9 = (ps->skydivePlayerState.flagsExtra[0] & 0x10) == 0;
      if ( (ps->skydivePlayerState.flagsExtra[0] & 0x10) != 0 )
      {
        ps->skydivePlayerState.state[0] = 5;
        ps->skydivePlayerState.flags[0] &= ~0x20u;
      }
      else
      {
        ps->skydivePlayerState.state[0] = 0;
      }
      ps->skydivePlayerState.animState = 0;
      ps->cameraTypeIndex = 0;
      ps->pm_flags.m_flags[0] &= ~0x10000000u;
      CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
      v11 = BG_UsingAlternate(ps);
      v12 = BG_PlayerDualWielding(ps);
      ps->weapState[0].weaponState = 73;
      ps->weapState[0].weaponTime = BG_RaiseTime(ps, CurrentWeaponForPlayer, v11, v12 == 1);
      BG_SetWeaponDelay(pm->weaponMap, ps, WEAPON_HAND_DEFAULT, 0, NULL);
      PM_StartWeaponAnim(ps, WEAP_SKYDIVE_WEAPON_RAISE, WEAPON_HAND_DEFAULT);
      BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_RAISEWEAPON, 0, 0, &pml->holdrand);
      PM_Weapon_FireAnimScriptWeaponRaiseEventForTime(pm, pml, (float)ps->weapState[0].weaponTime * 0.001);
      BG_AddPredictableEventToPlayerstate(EV_SKYDIVE_END, 0, pm->cmd.serverTime, pm->weaponMap, ps);
      if ( PM_IsInAir(pm) )
      {
        v13 = ANIM_MT_AIR;
        turning = 0;
      }
      else
      {
        turning = pml->turning;
        v13 = ANIM_MT_IDLE;
      }
      BG_AnimScriptAnimation(pm->m_bgHandler, ps, AISTATE_COMBAT, v13, 0, turning);
      if ( v9 )
        ps->skydivePlayerState.flagsExtra[0] = 0;
    }
  }
}

/*
==============
PM_Skydive_EndDeployParachute
==============
*/
void PM_Skydive_EndDeployParachute(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 697, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 697, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  PM_Skydive_ParachuteIdle(pm, pml);
  ps->skydivePlayerState.state[0] = 3;
  ps->skydivePlayerState.animState = 2;
}

/*
==============
PM_Skydive_Freefall_Begin
==============
*/
void PM_Skydive_Freefall_Begin(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2459, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2459, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( PM_Skydive_CanActivate(pm) || ps->skydivePlayerState.state[0] == 5 )
  {
    PM_Skydive_Initialize(pm, pml);
    ps->pm_flags.m_flags[1] &= ~0x8000u;
    ps->skydivePlayerState.state[0] = 1;
    ps->skydivePlayerState.animState = 1;
    PM_Skydive_Freefall_WeaponDrop(pm, pml);
    BG_AddPredictableEventToPlayerstate(EV_SKYDIVE_BEGIN_FREEFALL, 0, pm->cmd.serverTime, pm->weaponMap, ps);
  }
}

/*
==============
PM_Skydive_Freefall_Idle
==============
*/
void PM_Skydive_Freefall_Idle(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2554, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2554, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  ps->weapState[0].weaponState = 65;
  ps->weapState[0].weaponTime = 0;
  BG_SetWeaponDelay(pm->weaponMap, ps, WEAPON_HAND_DEFAULT, 0, NULL);
  PM_StartWeaponAnim(ps, WEAP_SKYDIVE_FREEFALL_IDLE, WEAPON_HAND_DEFAULT);
}

/*
==============
PM_Skydive_Freefall_Raise
==============
*/
void PM_Skydive_Freefall_Raise(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v5; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2540, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2540, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
  v5 = BG_UsingAlternate(ps);
  ps->weapState[0].weaponState = 64;
  ps->weapState[0].weaponTime = BG_SkydiveFreefallRaiseTime(ps, CurrentWeaponForPlayer, v5);
  BG_SetWeaponDelay(pm->weaponMap, ps, WEAPON_HAND_DEFAULT, 0, NULL);
  PM_StartWeaponAnim(ps, WEAP_SKYDIVE_FREEFALL_RAISE, WEAPON_HAND_DEFAULT);
}

/*
==============
PM_Skydive_Freefall_WeaponDrop
==============
*/
void PM_Skydive_Freefall_WeaponDrop(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v5; 
  int v6; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2007, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2007, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
  v5 = BG_UsingAlternate(ps);
  v6 = BG_PlayerDualWielding(ps);
  ps->weapState[0].weaponState = 63;
  ps->weapState[0].weaponTime = BG_DropTime(ps, CurrentWeaponForPlayer, v5, v6 == 1);
  BG_SetWeaponDelay(pm->weaponMap, ps, WEAPON_HAND_DEFAULT, 0, NULL);
  PM_StartWeaponAnim(ps, WEAP_SKYDIVE_WEAPON_DROP, WEAPON_HAND_DEFAULT);
}

/*
==============
PM_Skydive_GetBaseJumpTraceDir
==============
*/
void PM_Skydive_GetBaseJumpTraceDir(const playerState_s *ps, const float traceLength, vec3_t *outTraceDir)
{
  const dvar_t *v6; 
  float value; 
  const dvar_t *v8; 
  float v9; 
  __int128 v10; 
  float v11; 
  __int128 v12; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  vec3_t forward; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1706, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( traceLength <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1707, ASSERT_TYPE_ASSERT, "(traceLength > 0.0f)", (const char *)&queryFormat, "traceLength > 0.0f") )
    __debugbreak();
  v6 = DCONST_DVARFLT_skydive_base_jump_trace_speed_max;
  if ( !DCONST_DVARFLT_skydive_base_jump_trace_speed_max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_base_jump_trace_speed_max") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  value = v6->current.value;
  if ( value <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1710, ASSERT_TYPE_ASSERT, "(maxSpeedForMaxAngle > 0.0f)", (const char *)&queryFormat, "maxSpeedForMaxAngle > 0.0f") )
    __debugbreak();
  v8 = DCONST_DVARFLT_skydive_base_jump_trace_angle_max;
  if ( !DCONST_DVARFLT_skydive_base_jump_trace_angle_max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_base_jump_trace_angle_max") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  v9 = v8->current.value;
  v10 = LODWORD(ps->velocity.v[1]);
  v11 = ps->velocity.v[0];
  AngleVectors(&ps->viewangles, &forward, NULL, NULL);
  v12 = v10;
  *(float *)&v12 = fsqrt((float)(*(float *)&v10 * *(float *)&v10) + (float)(v11 * v11));
  _XMM2 = v12;
  __asm { vminss  xmm3, xmm2, xmm11 }
  v15 = (float)((float)((float)((float)((float)(*(float *)&_XMM3 / value) - 1.0) * (float)((float)(*(float *)&_XMM3 / value) - 1.0)) * (float)((float)(*(float *)&_XMM3 / value) - 1.0)) + 1.0) * v9;
  if ( (float)((float)((float)(forward.v[1] * ps->velocity.v[1]) + (float)(forward.v[0] * ps->velocity.v[0])) + (float)(forward.v[2] * ps->velocity.v[2])) < 0.0 )
    v16 = v15 + 90.0;
  else
    v16 = 90.0 - v15;
  angles.v[1] = ps->viewangles.v[1];
  angles.v[0] = v16;
  angles.v[2] = 0.0;
  AnglesToAxis(&angles, &axis);
  v17 = traceLength * axis.m[0].v[1];
  v18 = traceLength * axis.m[0].v[2];
  outTraceDir->v[0] = traceLength * axis.m[0].v[0];
  outTraceDir->v[1] = v17;
  outTraceDir->v[2] = v18;
}

/*
==============
PM_Skydive_GetPitchAndRollFromInput
==============
*/
vec2_t PM_Skydive_GetPitchAndRollFromInput(const pmove_t *pm)
{
  __int64 v12; 
  vec2_t StickCartesianCoords; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 983, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  BG_GetStickCartesianCoords(pm->cmd.yawmove, pm->cmd.pitchmove);
  StickCartesianCoords = BG_GetStickCartesianCoords(pm->cmd.rightmove, pm->cmd.forwardmove);
  _XMM0 = PM_Skydive_ShouldLockViewInput(pm);
  __asm { vpcmpeqd xmm3, xmm0, xmm1 }
  _XMM4 = 0i64;
  __asm { vblendvps xmm5, xmm4, xmm2, xmm3 }
  _XMM2 = LODWORD(FLOAT_N1_0);
  __asm
  {
    vcmpless xmm0, xmm4, xmm5
    vblendvps xmm1, xmm2, xmm3, xmm0
    vcmpless xmm0, xmm4, xmm6
    vblendvps xmm0, xmm2, xmm3, xmm0
  }
  if ( COERCE_FLOAT(_XMM5 & _xmm) <= INPUT_THRESHOLD || *(float *)&_XMM1 == *(float *)&_XMM0 && *(float *)&_XMM5 <= COERCE_FLOAT(LODWORD(StickCartesianCoords.v[0]) ^ _xmm) )
    LODWORD(v12) = LODWORD(StickCartesianCoords.v[0]) ^ _xmm;
  else
    *(float *)&v12 = *(float *)&_XMM5;
  *((float *)&v12 + 1) = StickCartesianCoords.v[1];
  return (vec2_t)v12;
}

/*
==============
PM_Skydive_HandleInput
==============
*/
void PM_Skydive_HandleInput(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  char v5; 
  bool v6; 
  bool v7; 
  playerState_s *v8; 
  char v9; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 764, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 764, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( PM_Skydive_CanActivate(pm) )
  {
    v5 = ps->skydivePlayerState.flags[0];
    v6 = (v5 & 0x10) == 0;
    v7 = (v5 & 0x20) == 0;
    if ( ((ps->skydivePlayerState.state[0] - 1) & 0xFB) != 0 )
    {
      v8 = pm->ps;
      if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 722, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      v9 = v8->skydivePlayerState.flags[0];
      if ( (v9 & 8) == 0 && (v9 & 0x30) != 48 && (pm->cmd.buttons & 0x20000000) != 0 && ps->skydivePlayerState.state[0] == 3 && v7 && v6 )
        PM_Skydive_HandleParachuteCutActivation(pm, pml);
    }
    else if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x32u) && v7 && PM_Skydive_JumpButtonPressed(pm) )
    {
      PM_Skydive_BeginDeployParachute(pm, pml);
    }
  }
  if ( !ps )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2289, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2275, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
  }
  if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, GameModeFlagValues::ms_mpValue, 0x21u) && ps->pm_type != 5 )
  {
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x31u) )
    {
      ps->cameraTypeIndex = 251;
    }
    else if ( (pm->cmd.buttons & 0x100000) != 0 && BG_Skydive_CanThirdPersonCam(ps) )
    {
      ps->cameraTypeIndex = BG_Camera_GetSkydiveOrbitDefIndex();
      if ( (pm->oldcmd.buttons & 0x100000) == 0 )
        PM_Skydive_SetInCameraTransition(pm, pml, 1);
    }
    else
    {
      if ( (pm->oldcmd.buttons & 0x100000) != 0 )
        PM_Skydive_SetInCameraTransition(pm, pml, 0);
      ps->cameraTypeIndex = 0;
    }
  }
}

/*
==============
PM_Skydive_HandleParachuteCutActivation
==============
*/
void PM_Skydive_HandleParachuteCutActivation(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  char v5; 
  unsigned __int8 animState; 
  char v7; 
  playerState_s *v8; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v10; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1952, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1952, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( ps->skydivePlayerState.animState == 2 )
  {
    if ( (ps->skydivePlayerState.flagsExtra[0] & 2) != 0 )
    {
      PM_Skydive_PerformTrace(pm, pml, AUTO_DEPLOY, 0);
      if ( pml->skydiveTrace.startsolid || 1.0 == pml->skydiveTrace.fraction )
      {
        ps->skydivePlayerState.flags[0] |= 8u;
        PM_Skydive_Chute_Cut(pm, pml);
      }
    }
    else
    {
      v5 = ps->skydivePlayerState.flags[0] | 8;
      ps->skydivePlayerState.flags[0] = v5;
      animState = ps->skydivePlayerState.animState;
      PM_Skydive_PerformTrace(pm, pml, WEAPON_RAISE, 0);
      if ( pml->skydiveTrace.startsolid || 1.0 == pml->skydiveTrace.fraction )
      {
        PM_Skydive_Chute_Cut(pm, pml);
      }
      else
      {
        if ( (v5 & 0x40) == 0 && animState == 2 )
          ps->skydivePlayerState.flags[0] |= 0x40u;
        v7 = ps->skydivePlayerState.flagsExtra[0];
        if ( (v7 & 0x10) != 0 )
          ps->skydivePlayerState.flagsExtra[0] = v7 & 0xEF;
        v8 = pm->ps;
        if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2520, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
          __debugbreak();
        CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, v8);
        v10 = BG_UsingAlternate(v8);
        v8->skydivePlayerState.animState = 10;
        v8->skydivePlayerState.flags[0] |= 0x20u;
        v8->skydivePlayerState.flagsExtra[0] |= 1u;
        v8->weapState[0].weaponState = 75;
        v8->weapState[0].weaponTime = BG_SkydiveParachuteMidAirDetachTime(v8, CurrentWeaponForPlayer, v10);
        BG_SetWeaponDelay(pm->weaponMap, v8, WEAPON_HAND_DEFAULT, 0, NULL);
        PM_StartWeaponAnim(v8, WEAP_SKYDIVE_MID_AIR_DETACH, WEAPON_HAND_DEFAULT);
      }
    }
  }
}

/*
==============
PM_Skydive_Initialize
==============
*/
void PM_Skydive_Initialize(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 562, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 562, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( ps->skydivePlayerState.state[0] == 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 564, ASSERT_TYPE_ASSERT, "( ps->skydivePlayerState.state ) != ( SkydiveState::Count )", "%s != %s\n\t%i, %i", "ps->skydivePlayerState.state", "SkydiveState::Count", 7, 7) )
    __debugbreak();
  if ( !ps->skydivePlayerState.state[0] )
  {
    PM_EndSprint(ps, pm->cmd.serverTime, pm->cmd.buttons);
    PM_SetStance(pm, pml, PM_EFF_STANCE_DEFAULT);
    ps->skydivePlayerState.flags[0] &= 0x10u;
    ps->skydivePlayerState.pitch = 0.0;
    ps->skydivePlayerState.roll = 0.0;
    ps->skydivePlayerState.landingTime = 0;
  }
}

/*
==============
PM_Skydive_JumpButtonPressed
==============
*/
bool PM_Skydive_JumpButtonPressed(pmove_t *pm)
{
  playerState_s *ps; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 709, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 709, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (ps->skydivePlayerState.flags[0] & 8) != 0 )
    return 0;
  else
    return BYTE1(LODWORD(pm->cmd.buttons)) & 1;
}

/*
==============
PM_Skydive_LandMove
==============
*/
void PM_Skydive_LandMove(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  char v5; 
  playerState_s *v6; 
  float v7; 
  bool v8; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2327, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2327, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( ps->weapState[0].weaponState == 68 || ps->weapState[0].weaponState == 69 || ps->weapState[0].weaponState == 70 || ps->weapState[0].weaponState == 71 )
  {
    v6 = pm->ps;
    if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2290, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( !PM_Skydive_OnWalkableSurface(pm, pml) )
      goto LABEL_18;
    if ( v6->weapState[0].weaponState == 68 )
    {
      *(_WORD *)&pm->cmd.forwardmove = 0;
      PM_WalkMove(pm, pml);
    }
    else
    {
      v7 = MAX_RIGHT_MOVE;
      v8 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)pm->cmd.rightmove) & _xmm) <= MAX_RIGHT_MOVE;
      pm->cmd.forwardmove = 127;
      if ( !v8 )
      {
        _XMM0 = 0i64;
        __asm { vcmpless xmm3, xmm0, xmm1 }
        _XMM1 = LODWORD(FLOAT_N1_0);
        __asm { vblendvps xmm0, xmm1, xmm2, xmm3 }
        pm->cmd.rightmove = (int)(float)(*(float *)&_XMM0 * v7);
      }
      PM_WalkMove(pm, pml);
    }
  }
  else
  {
    if ( ps->weapState[0].weaponState != 72 )
      goto LABEL_16;
    ps = pm->ps;
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2273, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    PM_AirMove(pm, pml);
    if ( PM_Skydive_OnWalkableSurface(pm, pml) )
    {
LABEL_16:
      v5 = ps->skydivePlayerState.flagsExtra[0];
      if ( (v5 & 0x10) != 0 )
        ps->skydivePlayerState.flagsExtra[0] = v5 & 0xEF;
LABEL_18:
      PM_Skydive_End(pm, pml, 1);
    }
  }
}

/*
==============
PM_Skydive_LandMove_MidAirDetach
==============
*/
void PM_Skydive_LandMove_MidAirDetach(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  char v5; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2273, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2273, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  PM_AirMove(pm, pml);
  if ( PM_Skydive_OnWalkableSurface(pm, pml) )
  {
    v5 = ps->skydivePlayerState.flagsExtra[0];
    if ( (v5 & 0x10) != 0 )
      ps->skydivePlayerState.flagsExtra[0] = v5 & 0xEF;
    PM_Skydive_End(pm, pml, 1);
  }
}

/*
==============
PM_Skydive_LandMove_Regular
==============
*/
void PM_Skydive_LandMove_Regular(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  float v5; 
  bool v6; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2290, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2290, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( PM_Skydive_OnWalkableSurface(pm, pml) )
  {
    if ( ps->weapState[0].weaponState == 68 )
    {
      *(_WORD *)&pm->cmd.forwardmove = 0;
      PM_WalkMove(pm, pml);
    }
    else
    {
      v5 = MAX_RIGHT_MOVE;
      v6 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)pm->cmd.rightmove) & _xmm) <= MAX_RIGHT_MOVE;
      pm->cmd.forwardmove = 127;
      if ( !v6 )
      {
        _XMM0 = 0i64;
        __asm { vcmpless xmm3, xmm0, xmm1 }
        _XMM1 = LODWORD(FLOAT_N1_0);
        __asm { vblendvps xmm0, xmm1, xmm2, xmm3 }
        pm->cmd.rightmove = (int)(float)(*(float *)&_XMM0 * v5);
      }
      PM_WalkMove(pm, pml);
    }
  }
  else
  {
    PM_Skydive_End(pm, pml, 1);
  }
}

/*
==============
PM_Skydive_Move
==============
*/
void PM_Skydive_Move(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  playerState_s *v5; 
  char v6; 
  int v7; 
  playerState_s *v8; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2417, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2417, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  PM_Skydive_Move_Log(pm, pml, "Begin");
  pml->ranSkydiveUpdate = 1;
  if ( ps->skydivePlayerState.state[0] == 4 )
  {
    PM_Skydive_LandMove(pm, pml);
  }
  else
  {
    PM_Skydive_HandleInput(pm, pml);
    v5 = pm->ps;
    if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 826, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( v5->skydivePlayerState.state[0] == 3 && (v5->skydivePlayerState.flagsExtra[0] & 2) != 0 )
    {
      v6 = v5->skydivePlayerState.flags[0];
      if ( (v6 & 0x40) == 0 && (v6 & 0x10) == 0 && (v6 & 0x20) == 0 )
      {
        PM_Skydive_PerformTrace(pm, pml, AUTO_DEPLOY, 0);
        if ( !pml->skydiveTrace.startsolid && 1.0 != pml->skydiveTrace.fraction )
          v5->skydivePlayerState.flags[0] |= 0x20u;
      }
    }
    PM_Skydive_ApplyForces(pm, pml);
    v7 = 0;
    if ( ps->skydivePlayerState.state[0] == 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2789, ASSERT_TYPE_ASSERT, "( ps->skydivePlayerState.state ) != ( SkydiveState::Count )", "%s != %s\n\t%i, %i", "ps->skydivePlayerState.state", "SkydiveState::Count", 7, 7) )
      __debugbreak();
    if ( (unsigned __int8)(ps->skydivePlayerState.state[0] - 2) <= 1u && pm->ground->groundPlane )
      v7 = 1;
    PM_UpdatePlayerCollision(pm, pml, v7, 1, 0, 1);
    v8 = pm->ps;
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2127, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( pml->hadSlideContact || pm->ground->walking || v8->groundEntityNum != 2047 )
      PM_Skydive_OnCollision(pm, pml);
  }
  PM_Skydive_Move_Log(pm, pml, "End");
}

/*
==============
PM_Skydive_Move_Log
==============
*/
void PM_Skydive_Move_Log(pmove_t *pm, pml_t *pml, const char *prefix)
{
  playerState_s *ps; 
  const dvar_t *v7; 
  bool enabled; 
  const dvar_t *v9; 
  bool v10; 
  double SkydiveCurrentThrottle; 
  const char *v12; 
  char *fmt; 
  __int64 v14; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2376, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2376, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v7 = DCONST_DVARBOOL_skydive_log_pmove;
  if ( !DCONST_DVARBOOL_skydive_log_pmove && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_log_pmove") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  enabled = v7->current.enabled;
  v9 = DCONST_DVARBOOL_skydive_log_pmove_initialcalls;
  if ( !DCONST_DVARBOOL_skydive_log_pmove_initialcalls && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_log_pmove_initialcalls") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( enabled && (!pm->initialCall || v9->current.enabled) )
  {
    v10 = pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler);
    SkydiveCurrentThrottle = BG_GetSkydiveCurrentThrottle(ps);
    v12 = "S[%s]: svt: %d ct: %d ft: %f extrap: %d rmove: %d fmove: %d org: [%f %f %f] ang: [%f %f] vel: [%f %f %f] throttle: %f\n";
    if ( !v10 )
      v12 = "C[%s]: svt: %d ct: %d ft: %f extrap: %d rmove: %d fmove: %d org: [%f %f %f] ang: [%f %f] vel: [%f %f %f] throttle: %f\n";
    LODWORD(fmt) = pm->cmd.commandTime;
    LODWORD(v14) = pm->isExtrapolation;
    Com_Printf(15, v12, prefix, (unsigned int)pm->cmd.serverTime, fmt, pml->frametime, v14, pm->cmd.rightmove, pm->cmd.forwardmove, ps->origin.v[0], ps->origin.v[1], ps->origin.v[2], ps->viewangles.v[0], ps->viewangles.v[1], ps->velocity.v[0], ps->velocity.v[1], ps->velocity.v[2], *(float *)&SkydiveCurrentThrottle);
  }
}

/*
==============
PM_Skydive_OnCollision
==============
*/
void PM_Skydive_OnCollision(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  char v5; 
  char v6; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v8; 
  bool v9; 
  const dvar_t *v10; 
  bool v11; 
  double Float_Internal_DebugName; 
  int v13; 
  WeaponAnimNumber v14; 
  char v15; 
  int v16; 
  double v17; 
  double v18; 
  playerState_s *v19; 
  float skydiveGroundSpeed; 
  entity_event_t v21; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2164, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2164, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v5 = ps->skydivePlayerState.state[0];
  if ( v5 != 6 && v5 )
  {
    if ( v5 == 4 )
    {
      if ( ps->weapState[0].weaponState == 72 )
      {
        v6 = ps->skydivePlayerState.flagsExtra[0];
        if ( (v6 & 0x10) != 0 )
          ps->skydivePlayerState.flagsExtra[0] = v6 & 0xEF;
        PM_Skydive_End(pm, pml, 0);
      }
      return;
    }
    ps->skydivePlayerState.landingTime = pm->cmd.serverTime;
    CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
    v8 = BG_UsingAlternate(ps);
    v9 = PM_Skydive_OnWalkableSurface(pm, pml);
    v10 = DVARBOOL_skydive_can_collide_building;
    v11 = v9;
    if ( !DVARBOOL_skydive_can_collide_building && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_can_collide_building") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    if ( v10->current.enabled )
    {
      if ( !v11 )
        return;
    }
    else if ( !v11 )
    {
      v13 = 72;
      v14 = WEAP_SKYDIVE_MID_AIR_DETACH;
      v15 = 8;
      v16 = BG_SkydiveParachuteMidAirDetachTime(ps, CurrentWeaponForPlayer, v8);
LABEL_29:
      ps->weapState[0].weaponState = v13;
      ps->weapState[0].weaponTime = v16;
      BG_SetWeaponDelay(pm->weaponMap, ps, WEAPON_HAND_DEFAULT, 0, NULL);
      PM_StartWeaponAnim(ps, v14, WEAPON_HAND_DEFAULT);
      ps->skydivePlayerState.state[0] = 4;
      ps->skydivePlayerState.animState = v15;
      BG_AddPredictableEventToPlayerstate(EV_SKYDIVE_TOUCH, 0, pm->cmd.serverTime, pm->weaponMap, ps);
      v19 = pm->ps;
      if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2356, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      skydiveGroundSpeed = pml->skydiveGroundSpeed;
      if ( skydiveGroundSpeed > 100.0 )
      {
        v21 = EV_LANDING_EXTREME_HEIGHT;
        if ( skydiveGroundSpeed > 200.0 )
          v21 = EV_LANDING_PAIN_EXTREME_HEIGHT;
      }
      else
      {
        v21 = EV_LANDING_LOW_HEIGHT;
      }
      BG_AddPredictableEventToPlayerstate(v21, 0, pm->cmd.serverTime, pm->weaponMap, v19);
      return;
    }
    Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_skydive_fast_land_speed, "skydive_fast_land_speed");
    if ( *(float *)&Float_Internal_DebugName > pml->skydiveGroundSpeed )
    {
      v17 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_skydive_slow_land_speed, "skydive_slow_land_speed");
      if ( *(float *)&v17 > pml->skydiveGroundSpeed )
      {
        v13 = 68;
        v14 = WEAP_SKYDIVE_STILL_LAND;
        v15 = 4;
        v16 = BG_SkydiveParachuteStillLandingTime(ps, CurrentWeaponForPlayer, v8);
      }
      else
      {
        v18 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_skydive_hard_land_speed, "skydive_hard_land_speed");
        if ( *(float *)&v18 > pml->skydiveFallSpeed )
        {
          v13 = 69;
          v14 = WEAP_SKYDIVE_SLOW_SOFT_LAND;
          v15 = 5;
          v16 = BG_SkydiveParachuteSlowSoftLandingTime(ps, CurrentWeaponForPlayer, v8);
        }
        else
        {
          v13 = 70;
          v14 = WEAP_SKYDIVE_SLOW_HARD_LAND;
          v15 = 6;
          v16 = BG_SkydiveParachuteSlowHardLandingTime(ps, CurrentWeaponForPlayer, v8);
        }
      }
    }
    else
    {
      v13 = 71;
      v14 = WEAP_SKYDIVE_FAST_LAND;
      v15 = 7;
      v16 = BG_SkydiveParachuteFastLandingTime(ps, CurrentWeaponForPlayer, v8);
    }
    goto LABEL_29;
  }
}

/*
==============
PM_Skydive_OnJump
==============
*/
void PM_Skydive_OnJump(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1203, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1203, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  ps->skydivePlayerState.flags[0] |= 8u;
}

/*
==============
PM_Skydive_OnWalkableSurface
==============
*/
bool PM_Skydive_OnWalkableSurface(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2140, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2140, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return pm->ground->walking || ps->groundEntityNum != 2047 || pml->hadSlideContact && (float)((float)((float)(pml->slideFirstContactNormal.v[1] * pml->platformUp.v[1]) + (float)(pml->platformUp.v[0] * pml->slideFirstContactNormal.v[0])) + (float)(pml->slideFirstContactNormal.v[2] * pml->platformUp.v[2])) >= 0.69999999;
}

/*
==============
PM_Skydive_OpenParachute
==============
*/
void PM_Skydive_OpenParachute(pmove_t *pm, pml_t *pml, const bool fireWorldModelAnimEvents)
{
  playerState_s *ps; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v8; 
  bool v9; 
  PlayerAnimScriptEventType v10; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 624, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 624, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
  v8 = BG_UsingAlternate(ps);
  ps->weapState[0].weaponState = 66;
  v9 = v8;
  BG_SetWeaponDelay(pm->weaponMap, ps, WEAPON_HAND_DEFAULT, 0, NULL);
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x34u) )
  {
    ps->weapState[0].weaponTime = BG_SkydiveQuickOpenParachuteTime(ps, CurrentWeaponForPlayer, v9);
    PM_StartWeaponAnim(ps, WEAP_SKYDIVE_QUICK_OPEN_PARACHUTE, WEAPON_HAND_DEFAULT);
    if ( !fireWorldModelAnimEvents )
      return;
    v10 = ANIM_ET_SKYDIVE_QUICK_DEPLOY;
  }
  else
  {
    ps->weapState[0].weaponTime = BG_SkydiveOpenParachuteTime(ps, CurrentWeaponForPlayer, v9);
    PM_StartWeaponAnim(ps, WEAP_SKYDIVE_OPEN_PARACHUTE, WEAPON_HAND_DEFAULT);
    if ( !fireWorldModelAnimEvents )
      return;
    v10 = ANIM_ET_SKYDIVE_DEPLOY;
  }
  BG_AnimScriptEvent(pm->m_bgHandler, ps, v10, 0, 1, &pml->holdrand);
}

/*
==============
PM_Skydive_ParachuteIdle
==============
*/
void PM_Skydive_ParachuteIdle(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 686, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 686, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  ps->weapState[0].weaponState = 67;
  ps->weapState[0].weaponTime = 0;
  BG_SetWeaponDelay(pm->weaponMap, ps, WEAPON_HAND_DEFAULT, 0, NULL);
  PM_StartWeaponAnim(ps, WEAP_SKYDIVE_PARACHUTE_IDLE, WEAPON_HAND_DEFAULT);
}

/*
==============
PM_Skydive_PerformTrace
==============
*/
void PM_Skydive_PerformTrace(pmove_t *pm, pml_t *pml, SkydiveTraceHeight traceHeight, const bool auxiliaryTrace)
{
  playerState_s *ps; 
  const SuitDef *SuitDef; 
  const dvar_t *v10; 
  double v11; 
  double Float_Internal_DebugName; 
  const BgPlayerTraceInfo *v13; 
  const BgHandler *m_bgHandler; 
  Physics_WorldId v15; 
  __m256i v16; 
  __int128 v17; 
  const char *debugHitName; 
  BgTrace v19; 
  vec3_t vec; 
  trace_t results; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2704, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2704, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( auxiliaryTrace || !pml->isSkydiveTraced )
  {
    SuitDef = BG_GetSuitDef(ps->suitIndex);
    if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2712, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
      __debugbreak();
    vec = ps->origin;
    if ( traceHeight )
    {
      if ( traceHeight == AUTO_DEPLOY )
      {
        *(float *)&v11 = SuitDef->skydive_baseJumpAutoDeployHeight;
      }
      else
      {
        if ( traceHeight != FREEFALL_DEPLOY_MIN )
          goto LABEL_24;
        Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_skydive_min_deploy_altitude, "skydive_min_deploy_altitude");
        if ( *(float *)&Float_Internal_DebugName <= 0.000001 )
        {
          pml->skydiveTrace.startsolid = 0;
          pml->skydiveTrace.fraction = 1.0;
          return;
        }
        v11 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_skydive_min_deploy_altitude, "skydive_min_deploy_altitude");
      }
    }
    else
    {
      v10 = DVARFLT_skydive_weapon_raise_height;
      if ( !DVARFLT_skydive_weapon_raise_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_weapon_raise_height") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v10);
      LODWORD(v11) = v10->current.integer;
    }
    WorldUpReferenceFrame::AddUpContribution(&pm->refFrame, COERCE_FLOAT(LODWORD(v11) ^ _xmm), &vec);
LABEL_24:
    v13 = pm->m_bgHandler->GetPlayerTraceInfo(pm->m_bgHandler, (unsigned int)ps->clientNum);
    BgTrace::BgTrace(&v19, v13);
    m_bgHandler = pm->m_bgHandler;
    v19.m_flags |= 0x80u;
    v15 = m_bgHandler->GetPhysicsWorldId((BgHandler *)m_bgHandler);
    BgTrace::LegacyTraceHandler(&v19, v15, &results, &ps->origin, &vec, &bounds_origin, ps->clientNum, pm->tracemask & 0xFDFFBFFF, ps);
    v16 = *(__m256i *)&results.contents;
    *(__m256i *)&pml->skydiveTrace.fraction = *(__m256i *)&results.fraction;
    v17 = *(_OWORD *)&results.allsolid;
    *(__m256i *)&pml->skydiveTrace.contents = v16;
    debugHitName = results.debugHitName;
    *(_OWORD *)&pml->skydiveTrace.allsolid = v17;
    pml->skydiveTrace.debugHitName = debugHitName;
    if ( !auxiliaryTrace )
      pml->isSkydiveTraced = 1;
  }
}

/*
==============
PM_Skydive_SetInCameraTransition
==============
*/
void PM_Skydive_SetInCameraTransition(pmove_t *pm, pml_t *pml, bool transitionIn)
{
  playerState_s *ps; 
  int cameraTypeIndex; 
  const CameraDef *Def; 
  float time; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 741, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 741, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  cameraTypeIndex = ps->cameraTypeIndex;
  if ( cameraTypeIndex )
  {
    Def = BG_Camera_GetDef(cameraTypeIndex);
    if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 749, ASSERT_TYPE_ASSERT, "(camDef)", (const char *)&queryFormat, "camDef") )
      __debugbreak();
    if ( transitionIn )
      time = Def->transitionIn.time;
    else
      time = Def->transitionOut.time;
    ps->cameraTransitionEnd = (int)(float)((float)(time * 1000.0) + (float)pm->cmd.serverTime);
  }
}

/*
==============
PM_Skydive_ShouldLockViewInput
==============
*/
bool PM_Skydive_ShouldLockViewInput(const pmove_t *pm)
{
  playerState_s *ps; 
  bool v3; 
  bool v4; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 915, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 915, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v3 = pm->m_bgHandler->InCameraOrTransition((BgHandler *)pm->m_bgHandler, ps->clientNum);
  v4 = (pm->cmd.buttons & 0x100000) != 0 || (pm->oldcmd.buttons & 0x100000) != 0;
  return BG_Skydive_CanThirdPersonCam(ps) && (v3 || v4);
}

/*
==============
PM_Skydive_Update
==============
*/
void PM_Skydive_Update(pmove_t *pm, pml_t *pml)
{
  __int128 v2; 
  playerState_s *v5; 
  playerState_s *v6; 
  const BgPlayerTraceInfo *v7; 
  const BgHandler *m_bgHandler; 
  Physics_WorldId v9; 
  float v10; 
  float v11; 
  const dvar_t *v12; 
  char v13; 
  unsigned __int64 buttons; 
  playerState_s *v15; 
  bool v16; 
  playerState_s *v17; 
  char v18; 
  playerState_s *v19; 
  char v20; 
  char v21; 
  char v22; 
  playerState_s *v23; 
  char v24; 
  const dvar_t *v25; 
  char v26; 
  int contentMaska; 
  __int64 contentMask; 
  playerState_s *ps; 
  BgTrace v30; 
  vec3_t end; 
  trace_t results; 
  __int128 v33; 

  v33 = v2;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2022, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  v5 = pm->ps;
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2022, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !PM_IsInAir(pm) )
    v5->skydivePlayerState.flags[0] &= ~0x80u;
  ((void (__fastcall *)(pmove_t *))pm->SetSkydiveBasejumpGroundHeight)(pm);
  v6 = pm->ps;
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2756, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v7 = pm->m_bgHandler->GetPlayerTraceInfo(pm->m_bgHandler, (unsigned int)v6->clientNum);
  BgTrace::BgTrace(&v30, v7);
  m_bgHandler = pm->m_bgHandler;
  v30.m_flags |= 0x80u;
  v9 = m_bgHandler->GetPhysicsWorldId((BgHandler *)m_bgHandler);
  v10 = v6->origin.v[1];
  v11 = v6->origin.v[2] - 32000.0;
  contentMaska = pm->tracemask;
  end.v[0] = v6->origin.v[0];
  end.v[1] = v10;
  end.v[2] = v11;
  BgTrace::LegacyTraceHandler(&v30, v9, &results, &v6->origin, &end, &bounds_origin, v6->clientNum, contentMaska, v6);
  v30.m_flags &= ~0x80u;
  v12 = DCONST_DVARFLT_skydive_min_deploy_altitude;
  if ( !DCONST_DVARFLT_skydive_min_deploy_altitude && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_min_deploy_altitude") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  pm->m_skydiveAutodeployOffset = (int)(float)(results.position.v[2] + v12->current.value);
  pm->m_skydiveAutodeployOffsetIsValid = 1;
  if ( v5->pm_type || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&v5->otherFlags, ACTIVE, 0xBu) )
  {
    v13 = v5->skydivePlayerState.flagsExtra[0];
    if ( (v13 & 0x10) != 0 )
      v5->skydivePlayerState.flagsExtra[0] = v13 & 0xEF;
    PM_Skydive_End(pm, pml, 0);
  }
  buttons = pm->cmd.buttons;
  if ( (buttons & 0x100) == 0 && (buttons & 0x20000000) == 0 )
    v5->skydivePlayerState.flags[0] &= ~8u;
  v15 = pm->ps;
  if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1497, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( BG_Skydive_IsSkydiving(v15) )
    goto LABEL_35;
  if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2800, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( v15->skydivePlayerState.state[0] == 7 )
  {
    LODWORD(ps) = 7;
    LODWORD(contentMask) = 7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2801, ASSERT_TYPE_ASSERT, "( ps->skydivePlayerState.state ) != ( SkydiveState::Count )", "%s != %s\n\t%i, %i", "ps->skydivePlayerState.state", "SkydiveState::Count", contentMask, ps) )
      __debugbreak();
  }
  if ( v15->skydivePlayerState.state[0] == 5 )
LABEL_35:
    v16 = 1;
  else
    v16 = 0;
  PM_Skydive_Update_AnimEvents_SuperDive(pm, pml, v16);
  PM_Skydive_Update_AnimEvents_Throttle(pm, pml, v16);
  PM_Skydive_Update_AnimEvents_InputFeedback(pm, pml, v16);
  v17 = pm->ps;
  if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1509, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( BG_Skydive_IsSkydiving(v17) )
  {
    v18 = v17->skydivePlayerState.flagsExtra[0];
    if ( (v18 & 4) == 0 && (v18 & 8) != 0 )
    {
      PM_Skydive_PerformTrace(pm, pml, WEAPON_RAISE, 1);
      if ( !pml->skydiveTrace.startsolid && 1.0 != pml->skydiveTrace.fraction )
        v17->skydivePlayerState.flagsExtra[0] |= 4u;
    }
  }
  v19 = pm->ps;
  if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1673, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v20 = v19->skydivePlayerState.state[0];
  if ( (!v20 || v20 == 5) && PM_Skydive_CanActivate(pm) && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v19->pm_flags, ACTIVE, 0x34u) && !v19->pm_type && PM_IsInAir(pm) )
  {
    v21 = 1;
  }
  else
  {
    v5->pm_flags.m_flags[1] &= ~0x80000u;
    v21 = 0;
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v5->pm_flags, ACTIVE, 0x2Fu) )
  {
    PM_Skydive_Freefall_Begin(pm, pml);
    goto LABEL_81;
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v5->pm_flags, ACTIVE, 0x30u) && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v5->pm_flags, ACTIVE, 0x32u) )
    goto LABEL_80;
  v22 = v5->skydivePlayerState.state[0];
  if ( v22 && v22 != 5 )
  {
    if ( v22 == 1 && (v5->skydivePlayerState.flagsExtra[0] & 0x20) == 0 )
    {
      PM_Skydive_PerformTrace(pm, pml, FREEFALL_DEPLOY_MIN, 1);
      if ( pml->skydiveTrace.startsolid || 1.0 == pml->skydiveTrace.fraction )
        v5->pm_flags.m_flags[1] |= 0x40000u;
      else
        v5->pm_flags.m_flags[1] &= ~0x40000u;
    }
    PM_Skydive_Update_AutoDeploy(pm, pml);
    PM_Skydive_Update_PrepForLandingState(pm, pml);
    goto LABEL_81;
  }
  if ( v21 || v22 == 5 )
  {
    v23 = pm->ps;
    if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1929, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    v24 = v23->skydivePlayerState.state[0];
    if ( v24 && v24 != 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1931, ASSERT_TYPE_ASSERT, "(( ps->skydivePlayerState.state == SkydiveState::None ) || ( ps->skydivePlayerState.state == SkydiveState::WeaponRaise ))", (const char *)&queryFormat, "( ps->skydivePlayerState.state == SkydiveState::None ) || ( ps->skydivePlayerState.state == SkydiveState::WeaponRaise )") )
      __debugbreak();
    if ( PM_Skydive_BaseJump_Check(pm, pml) )
    {
      v23->skydivePlayerState.flags[0] |= 0x80u;
      v23->pm_flags.m_flags[1] |= 0x80000u;
      BG_AddPredictableEventToPlayerstate(EV_STANCE_FORCE_STAND, 0, pm->cmd.serverTime, pm->weaponMap, v23);
      if ( PM_Skydive_JumpButtonPressed(pm) )
LABEL_80:
        PM_Skydive_BeginDeployParachute(pm, pml);
    }
  }
LABEL_81:
  v25 = DVARBOOL_killswitch_skydive_loadout_change_fix_enabled;
  if ( !DVARBOOL_killswitch_skydive_loadout_change_fix_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_skydive_loadout_change_fix_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v25);
  if ( v25->current.enabled && !v5->weapState[0].weaponState )
  {
    v26 = v5->skydivePlayerState.state[0];
    switch ( v26 )
    {
      case 1:
        PM_Skydive_Freefall_WeaponDrop(pm, pml);
        break;
      case 2:
        PM_Skydive_OpenParachute(pm, pml, 0);
        break;
      case 3:
        PM_Skydive_ParachuteIdle(pm, pml);
        break;
    }
  }
}

/*
==============
PM_Skydive_UpdateAngles_BlendOut
==============
*/
void PM_Skydive_UpdateAngles_BlendOut(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  double v5; 
  float v6; 
  float roll; 
  double v8; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 906, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 906, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v5 = DiffTrack(0.0, ps->skydivePlayerState.pitch, BLEND_OUT_SPEED, pml->frametime);
  v6 = BLEND_OUT_SPEED;
  roll = ps->skydivePlayerState.roll;
  ps->skydivePlayerState.pitch = *(float *)&v5;
  v8 = DiffTrack(0.0, roll, v6, pml->frametime);
  ps->skydivePlayerState.roll = *(float *)&v8;
}

/*
==============
PM_Skydive_UpdateAngles_Freefall
==============
*/
void PM_Skydive_UpdateAngles_Freefall(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  const SuitDef *SuitDef; 
  float v8; 
  RumbleGraph *skydive_wmAnimFreefallRightStickXToRollGraph; 
  double v14; 
  RumbleGraph *skydive_wmAnimFreefallLeftStickXToRollGraph; 
  double ValueFromFractionUnnormalized; 
  float skydive_wmAnimFreefallRollTrackSpeed; 
  double v18; 
  float v19; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 925, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 925, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  SuitDef = BG_GetSuitDef(ps->suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 928, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  _XMM0 = 0i64;
  __asm { vroundss xmm3, xmm0, xmm4, 1 }
  v8 = (float)((float)(ps->viewangles.v[0] * 0.0027777778) - *(float *)&_XMM3) * 360.0;
  I_fclamp(v8, SuitDef->skydive_wmAnimFreefallPitchMin, SuitDef->skydive_wmAnimFreefallPitchMax);
  *(double *)&_XMM0 = I_fdistnormalized(SuitDef->skydive_wmAnimFreefallPitchMin, SuitDef->skydive_wmAnimFreefallPitchMax, v8);
  *(double *)&_XMM0 = I_fclamp((float)(*(float *)&_XMM0 * 2.0) - 1.0, -1.0, 1.0);
  *(double *)&_XMM0 = DiffTrack(*(float *)&_XMM0, ps->skydivePlayerState.pitch, SuitDef->skydive_wmAnimFreefallPitchTrackSpeed, pml->frametime);
  ps->skydivePlayerState.pitch = *(float *)&_XMM0;
  BG_GetStickCartesianCoords(pm->cmd.yawmove, pm->cmd.pitchmove);
  _XMM0 = PM_Skydive_ShouldLockViewInput(pm);
  __asm { vpcmpeqd xmm3, xmm0, xmm1 }
  _XMM1 = 0i64;
  __asm { vblendvps xmm4, xmm1, xmm2, xmm3 }
  if ( COERCE_FLOAT(_XMM4 & _xmm) <= 0.000001 )
  {
    LODWORD(v19) = *(_QWORD *)&BG_GetStickCartesianCoords(pm->cmd.rightmove, pm->cmd.forwardmove);
    skydive_wmAnimFreefallLeftStickXToRollGraph = SuitDef->skydive_wmAnimFreefallLeftStickXToRollGraph;
    if ( skydive_wmAnimFreefallLeftStickXToRollGraph )
    {
      ValueFromFractionUnnormalized = GraphGetValueFromFractionUnnormalized(skydive_wmAnimFreefallLeftStickXToRollGraph->knotCount, skydive_wmAnimFreefallLeftStickXToRollGraph->knots, v19);
      LODWORD(_XMM4) = LODWORD(ValueFromFractionUnnormalized);
    }
    else
    {
      *(float *)&_XMM4 = v19;
    }
  }
  else
  {
    skydive_wmAnimFreefallRightStickXToRollGraph = SuitDef->skydive_wmAnimFreefallRightStickXToRollGraph;
    if ( skydive_wmAnimFreefallRightStickXToRollGraph )
    {
      v14 = GraphGetValueFromFractionUnnormalized(skydive_wmAnimFreefallRightStickXToRollGraph->knotCount, skydive_wmAnimFreefallRightStickXToRollGraph->knots, *(const float *)&_XMM4);
      LODWORD(_XMM4) = LODWORD(v14);
    }
  }
  if ( COERCE_FLOAT(_XMM4 & _xmm) > 0.000001 )
    skydive_wmAnimFreefallRollTrackSpeed = SuitDef->skydive_wmAnimFreefallRollTrackSpeed;
  else
    skydive_wmAnimFreefallRollTrackSpeed = SuitDef->skydive_wmAnimFreefallRollReturnSpeed;
  v18 = DiffTrack(*(float *)&_XMM4, ps->skydivePlayerState.roll, skydive_wmAnimFreefallRollTrackSpeed, pml->frametime);
  ps->skydivePlayerState.roll = *(float *)&v18;
}

/*
==============
PM_Skydive_UpdateAngles_Parachute
==============
*/
void PM_Skydive_UpdateAngles_Parachute(pmove_t *pm, pml_t *pml, const vec3_t *acceleration)
{
  playerState_s *ps; 
  vec2_t PitchAndRollFromInput; 
  const dvar_t *v7; 
  const dvar_t *v13; 
  float value; 
  const dvar_t *v15; 
  float v16; 
  const dvar_t *v17; 
  float frametime; 
  float roll; 
  float v20; 
  const dvar_t *v21; 
  float rollVelocity; 
  float v23; 
  const dvar_t *v24; 
  float v25; 
  float v26; 
  const dvar_t *v27; 
  float v28; 
  const dvar_t *v30; 
  const dvar_t *v31; 
  const dvar_t *v32; 
  double v33; 
  float pitch; 
  const dvar_t *v35; 
  float v36; 
  const dvar_t *v37; 
  float pitchVelocity; 
  float v39; 
  const dvar_t *v40; 
  float v41; 
  float v42; 
  const dvar_t *v43; 
  const dvar_t *v44; 
  const dvar_t *v45; 
  const dvar_t *v46; 
  double v47; 
  float v48; 
  float v49; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1069, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1069, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  PitchAndRollFromInput = PM_Skydive_GetPitchAndRollFromInput(pm);
  v7 = DCONST_DVARFLT_skydive_pendulum_mass;
  v49 = PitchAndRollFromInput.v[1];
  _XMM0 = ps->skydivePlayerState.animState;
  __asm { vpcmpeqd xmm2, xmm0, xmm1 }
  _XMM0 = LODWORD(PitchAndRollFromInput.v[0]);
  __asm { vblendvps xmm1, xmm0, xmm9, xmm2 }
  if ( !DCONST_DVARFLT_skydive_pendulum_mass && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_pendulum_mass") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  _XMM10 = v7->current.unsignedInt;
  v13 = DCONST_DVARFLT_skydive_pendulum_length;
  v48 = *(float *)&_XMM10;
  if ( !DCONST_DVARFLT_skydive_pendulum_length && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_pendulum_length") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  value = v13->current.value;
  v15 = DCONST_DVARFLT_skydive_pendulum_gravity;
  if ( !DCONST_DVARFLT_skydive_pendulum_gravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_pendulum_gravity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  v16 = v15->current.value;
  v17 = DCONST_DVARFLT_skydive_pendulum_max_bank_angle;
  frametime = pml->frametime;
  roll = ps->skydivePlayerState.roll;
  if ( !DCONST_DVARFLT_skydive_pendulum_max_bank_angle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_pendulum_max_bank_angle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  v20 = roll * v17->current.value;
  v21 = DCONST_DVARFLT_skydive_pendulum_damping_constant_bank;
  rollVelocity = ps->skydivePlayerState.rollVelocity;
  if ( !DCONST_DVARFLT_skydive_pendulum_damping_constant_bank && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_pendulum_damping_constant_bank") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  v23 = v21->current.value;
  v24 = DCONST_DVARFLT_skydive_pendulum_stick_torque_bank;
  if ( !DCONST_DVARFLT_skydive_pendulum_stick_torque_bank && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_pendulum_stick_torque_bank") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v24);
  LODWORD(v25) = COERCE_UNSIGNED_INT(*(float *)&_XMM1 * v24->current.value) ^ _xmm;
  v26 = (float)((float)((float)((float)((float)(v25 - (float)((float)(rollVelocity * 0.017453292) * v23)) / (float)((float)(value * *(float *)&_XMM10) * value)) - (float)((float)(sinf_0(v20 * 0.017453292) * v16) / value)) * frametime) + (float)(rollVelocity * 0.017453292)) * 57.295776;
  ps->skydivePlayerState.rollVelocity = v26;
  v27 = DCONST_DVARFLT_skydive_pendulum_max_bank_angle;
  v28 = (float)(v26 * frametime) + v20;
  if ( !DCONST_DVARFLT_skydive_pendulum_max_bank_angle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_pendulum_max_bank_angle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v27);
  __asm { vxorpd  xmm10, xmm10, xmm10 }
  if ( v27->current.value <= 0.0 )
  {
    v30 = DCONST_DVARFLT_skydive_pendulum_max_bank_angle;
    if ( !DCONST_DVARFLT_skydive_pendulum_max_bank_angle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_pendulum_max_bank_angle") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v30);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1097, ASSERT_TYPE_ASSERT, "( Dvar_GetFloat_Internal_DebugName( DCONST_DVARFLT_skydive_pendulum_max_bank_angle, \"skydive_pendulum_max_bank_angle\" ) ) > ( 0.0f )", "%s > %s\n\t%g, %g", "Dconst_GetFloat( skydive_pendulum_max_bank_angle )", "0.0f", v30->current.value, *(double *)&_XMM10) )
      __debugbreak();
  }
  v31 = DCONST_DVARFLT_skydive_pendulum_max_bank_angle;
  if ( !DCONST_DVARFLT_skydive_pendulum_max_bank_angle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_pendulum_max_bank_angle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v31);
  ps->skydivePlayerState.roll = v28 / v31->current.value;
  v32 = DCONST_DVARFLT_skydive_pendulum_max_bank_normalized;
  if ( !DCONST_DVARFLT_skydive_pendulum_max_bank_normalized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_pendulum_max_bank_normalized") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v32);
  v33 = I_fclamp(ps->skydivePlayerState.roll, COERCE_FLOAT(v32->current.integer ^ _xmm), v32->current.value);
  pitch = ps->skydivePlayerState.pitch;
  ps->skydivePlayerState.roll = *(float *)&v33;
  v35 = DCONST_DVARFLT_skydive_pendulum_max_pitch_angle;
  if ( !DCONST_DVARFLT_skydive_pendulum_max_pitch_angle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_pendulum_max_pitch_angle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v35);
  v36 = pitch * v35->current.value;
  v37 = DCONST_DVARFLT_skydive_pendulum_damping_constant_pitch;
  pitchVelocity = ps->skydivePlayerState.pitchVelocity;
  if ( !DCONST_DVARFLT_skydive_pendulum_damping_constant_pitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_pendulum_damping_constant_pitch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v37);
  v39 = v37->current.value;
  v40 = DCONST_DVARFLT_skydive_pendulum_stick_torque_pitch;
  if ( !DCONST_DVARFLT_skydive_pendulum_stick_torque_pitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_pendulum_stick_torque_pitch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v40);
  v41 = v49 * v40->current.value;
  v42 = (float)((float)((float)((float)((float)(v41 - (float)((float)(pitchVelocity * 0.017453292) * v39)) / (float)((float)(value * v48) * value)) - (float)((float)(sinf_0(v36 * 0.017453292) * v16) / value)) * frametime) + (float)(pitchVelocity * 0.017453292)) * 57.295776;
  ps->skydivePlayerState.pitchVelocity = v42;
  v43 = DCONST_DVARFLT_skydive_pendulum_max_pitch_angle;
  if ( !DCONST_DVARFLT_skydive_pendulum_max_pitch_angle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_pendulum_max_pitch_angle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v43);
  if ( v43->current.value <= 0.0 )
  {
    v44 = DCONST_DVARFLT_skydive_pendulum_max_pitch_angle;
    if ( !DCONST_DVARFLT_skydive_pendulum_max_pitch_angle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_pendulum_max_pitch_angle") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v44);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1116, ASSERT_TYPE_ASSERT, "( Dvar_GetFloat_Internal_DebugName( DCONST_DVARFLT_skydive_pendulum_max_pitch_angle, \"skydive_pendulum_max_pitch_angle\" ) ) > ( 0.0f )", "%s > %s\n\t%g, %g", "Dconst_GetFloat( skydive_pendulum_max_pitch_angle )", "0.0f", v44->current.value, *(double *)&_XMM10) )
      __debugbreak();
  }
  v45 = DCONST_DVARFLT_skydive_pendulum_max_pitch_angle;
  if ( !DCONST_DVARFLT_skydive_pendulum_max_pitch_angle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_pendulum_max_pitch_angle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v45);
  ps->skydivePlayerState.pitch = (float)((float)(frametime * v42) + v36) / v45->current.value;
  v46 = DCONST_DVARFLT_skydive_pendulum_max_pitch_normalized;
  if ( !DCONST_DVARFLT_skydive_pendulum_max_pitch_normalized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_pendulum_max_pitch_normalized") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v46);
  v47 = I_fclamp(ps->skydivePlayerState.pitch, COERCE_FLOAT(v46->current.integer ^ _xmm), v46->current.value);
  ps->skydivePlayerState.pitch = *(float *)&v47;
}

/*
==============
PM_Skydive_UpdatePostGroundTrace
==============
*/
void PM_Skydive_UpdatePostGroundTrace(pmove_t *pm, pml_t *pml)
{
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2261, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pm->ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2261, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( PM_Skydive_OnWalkableSurface(pm, pml) )
    PM_Skydive_OnCollision(pm, pml);
}

/*
==============
PM_Skydive_UpdateViewAngles
==============
*/
void PM_Skydive_UpdateViewAngles(pmove_t *pm, pml_t *pml)
{
  __int128 v2; 
  playerState_s *ps; 
  unsigned int *SuitDef; 
  __int128 v6; 
  __int128 v7; 
  signed int v8; 
  base_vec3_t<int> *p_angles; 
  __int64 v11; 
  __int128 v14; 
  __int128 v15; 
  int v16; 
  int v20; 
  double v21; 
  __int64 v26; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1211, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1211, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  SuitDef = (unsigned int *)BG_GetSuitDef(ps->suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1214, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  if ( !PM_Skydive_ShouldLockViewInput(pm) )
  {
    switch ( ps->skydivePlayerState.state[0] )
    {
      case 1:
      case 5:
      case 6:
        goto $LN13_5;
      case 2:
      case 3:
      case 4:
        v6 = SuitDef[350];
        v7 = SuitDef[351];
        break;
      default:
        LODWORD(v26) = (unsigned __int8)ps->skydivePlayerState.state[0];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1243, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled skydive state %d while retrieving suit field values.", v26) )
          __debugbreak();
$LN13_5:
        v7 = SuitDef[267];
        v6 = SuitDef[266];
        break;
    }
    v8 = 0;
    p_angles = &pm->cmd.angles;
    _XMM7 = 0i64;
    do
    {
      v11 = v8;
      *(double *)&v2 = MSG_UnpackSignedFloat(p_angles->v[v8], 180.0, 0x14u);
      v15 = v2;
      __asm
      {
        vroundss xmm12, xmm7, xmm0, 1
        vroundss xmm2, xmm7, xmm1, 1
      }
      *(float *)&v15 = (float)((float)((float)((float)((float)(*(float *)&v2 * 0.0027777778) - *(float *)&_XMM12) * 1.0) + (float)(0.0027777778 * ps->delta_angles.v[v8])) - *(float *)&_XMM2) * 360.0;
      v14 = v15;
      if ( !v8 )
      {
        if ( *(float *)&v15 <= *(float *)&v7 )
        {
          if ( *(float *)&v15 < *(float *)&v6 )
          {
            v20 = base_vec3_t<int>::operator[](p_angles, 0);
            v21 = MSG_UnpackSignedFloat(v20, 180.0, 0x14u);
            __asm { vroundss xmm2, xmm7, xmm1, 1 }
            *vec3_t::operator[](&ps->delta_angles, 0) = *(float *)&v6 - (float)((float)((float)(*(float *)&v21 * 0.0027777778) - *(float *)&_XMM2) * 360.0);
            vec3_t::operator[](&ps->delta_angles, 0);
            __asm
            {
              vroundss xmm1, xmm7, xmm3, 1
              vroundss xmm2, xmm7, xmm1, 1
            }
            *vec3_t::operator[](&ps->delta_angles, 0) = (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned __int16)(int)*(float *)&_XMM1).m128_f32[0] * 0.000015258789) - *(float *)&_XMM2) * 360.0;
            v14 = v6;
          }
        }
        else
        {
          v16 = base_vec3_t<int>::operator[](p_angles, 0);
          MSG_UnpackSignedFloat(v16, 180.0, 0x14u);
          __asm
          {
            vroundss xmm3, xmm7, xmm0, 1
            vroundss xmm2, xmm7, xmm1, 1
            vroundss xmm3, xmm7, xmm2, 1
          }
          ps->delta_angles.v[0] = (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned __int16)(int)*(float *)&_XMM2).m128_f32[0] * 0.000015258789) - *(float *)&_XMM3) * 360.0;
          v14 = v7;
        }
      }
      __asm { vroundss xmm2, xmm7, xmm1, 1 }
      *((_QWORD *)&v2 + 1) = *((_QWORD *)&v14 + 1);
      ++v8;
      ps->viewangles.v[v11] = (float)((float)(*(float *)&v14 * 0.0027777778) - *(float *)&_XMM2) * 360.0;
    }
    while ( (unsigned int)v8 < 3 );
  }
}

/*
==============
PM_Skydive_Update_AnimEvents_InputFeedback
==============
*/
void PM_Skydive_Update_AnimEvents_InputFeedback(pmove_t *pm, pml_t *pml, const bool skydiving)
{
  playerState_s *ps; 
  unsigned __int8 v7; 
  int controllerBufferWriteIndex; 
  int v9; 
  __int128 frametime_low; 
  char v11; 
  char v12; 
  unsigned int v13; 
  __int128 v14; 
  vec2_t PitchAndRollFromInput; 
  unsigned int v16; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1379, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1379, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( skydiving )
  {
    PitchAndRollFromInput = PM_Skydive_GetPitchAndRollFromInput(pm);
    if ( PitchAndRollFromInput.v[0] <= 0.0 )
    {
      v7 = 0;
      if ( PitchAndRollFromInput.v[0] < 0.0 )
        v7 = 2;
    }
    else
    {
      v7 = 1;
    }
    if ( PitchAndRollFromInput.v[1] <= 0.0 )
    {
      if ( PitchAndRollFromInput.v[1] < 0.0 )
        v7 |= 8u;
    }
    else
    {
      v7 |= 4u;
    }
    controllerBufferWriteIndex = ps->skydivePlayerState.controllerBufferWriteIndex;
    ps->skydivePlayerState.controllerBuffer = (v7 << (4 * controllerBufferWriteIndex)) | ps->skydivePlayerState.controllerBuffer & ~(15 << (4 * controllerBufferWriteIndex));
    if ( v7 )
    {
      v9 = controllerBufferWriteIndex - 1;
      if ( controllerBufferWriteIndex - 1 < 0 )
        v9 = 7;
      frametime_low = LODWORD(pml->frametime);
      v11 = 0;
      v16 = 1;
      v12 = 0;
      do
      {
        if ( *(float *)&frametime_low >= TIME_TO_EVALUATE )
          break;
        v13 = ps->skydivePlayerState.controllerBuffer >> (4 * v9);
        if ( !v11 )
        {
          if ( (v7 & 1) != 0 && COERCE_FLOAT(LODWORD(PitchAndRollFromInput.v[0]) & _xmm) > JOLT_CONTROLLER_THRESHOLD && (v13 & 1) == 0 )
          {
            BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_SKYDIVE_JOLT_LEFT, 0, 1, &pml->holdrand);
            v11 = 1;
          }
          if ( (v7 & 2) != 0 && COERCE_FLOAT(LODWORD(PitchAndRollFromInput.v[0]) & _xmm) > JOLT_CONTROLLER_THRESHOLD && (v13 & 2) == 0 )
          {
            BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_SKYDIVE_JOLT_RIGHT, 0, 1, &pml->holdrand);
            v11 = 1;
          }
        }
        if ( !v12 )
        {
          if ( (v7 & 4) != 0 && COERCE_FLOAT(LODWORD(PitchAndRollFromInput.v[1]) & _xmm) > JOLT_CONTROLLER_THRESHOLD && (v13 & 4) == 0 )
          {
            BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_SKYDIVE_JOLT_FORWARD, 0, 1, &pml->holdrand);
            v12 = 1;
          }
          if ( (v7 & 8) != 0 && COERCE_FLOAT(LODWORD(PitchAndRollFromInput.v[1]) & _xmm) > JOLT_CONTROLLER_THRESHOLD && (v13 & 8) == 0 )
          {
            BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_SKYDIVE_JOLT_BACKWARD, 0, 1, &pml->holdrand);
            v12 = 1;
          }
        }
        if ( v11 && v12 )
          break;
        v14 = frametime_low;
        *(float *)&v14 = *(float *)&frametime_low + pml->frametime;
        frametime_low = v14;
        if ( --v9 < 0 )
          v9 = 7;
        ++v16;
      }
      while ( v16 < 8 );
    }
    ps->skydivePlayerState.controllerBufferWriteIndex = (ps->skydivePlayerState.controllerBufferWriteIndex + 1) & 7;
  }
  else
  {
    ps->skydivePlayerState.controllerBuffer = 0;
    ps->skydivePlayerState.controllerBufferWriteIndex = 0;
  }
}

/*
==============
PM_Skydive_Update_AnimEvents_SuperDive
==============
*/
void PM_Skydive_Update_AnimEvents_SuperDive(pmove_t *pm, pml_t *pml, const bool skydiving)
{
  playerState_s *ps; 
  float v7; 
  bool v8; 
  char v9; 
  PlayerAnimScriptEventType v10; 
  bool v11; 
  char v12; 
  PlayerAnimScriptEventType v13; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1278, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1278, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !skydiving )
  {
    ps->skydivePlayerState.flags[0] &= 0xF9u;
    return;
  }
  LODWORD(v7) = HIDWORD(*(unsigned __int64 *)&BG_GetStickCartesianCoords(pm->cmd.rightmove, pm->cmd.forwardmove));
  v8 = v7 > INPUT_DEAD_ZONE;
  v9 = ps->skydivePlayerState.flags[0] & 2;
  if ( v9 || v7 <= INPUT_DEAD_ZONE )
  {
    if ( !v9 )
      goto LABEL_16;
    if ( v7 > INPUT_DEAD_ZONE )
      goto LABEL_17;
    v10 = ANIM_ET_SKYDIVE_END_THRUST;
  }
  else
  {
    v10 = ANIM_ET_SKYDIVE_BEGIN_THRUST;
  }
  BG_AnimScriptEvent(pm->m_bgHandler, ps, v10, 0, 1, &pml->holdrand);
LABEL_16:
  if ( !v8 )
  {
    ps->skydivePlayerState.flags[0] &= ~2u;
    goto LABEL_19;
  }
LABEL_17:
  ps->skydivePlayerState.flags[0] |= 2u;
LABEL_19:
  v11 = COERCE_FLOAT(LODWORD(INPUT_DEAD_ZONE) ^ _xmm) > v7;
  v12 = ps->skydivePlayerState.flags[0] & 4;
  if ( v12 || COERCE_FLOAT(LODWORD(INPUT_DEAD_ZONE) ^ _xmm) <= v7 )
  {
    if ( !v12 )
      goto LABEL_26;
    if ( COERCE_FLOAT(LODWORD(INPUT_DEAD_ZONE) ^ _xmm) > v7 )
    {
LABEL_27:
      ps->skydivePlayerState.flags[0] |= 4u;
      return;
    }
    v13 = ANIM_ET_SKYDIVE_END_BRAKE;
  }
  else
  {
    v13 = ANIM_ET_SKYDIVE_BEGIN_BRAKE;
  }
  BG_AnimScriptEvent(pm->m_bgHandler, ps, v13, 0, 1, &pml->holdrand);
LABEL_26:
  if ( v11 )
    goto LABEL_27;
  ps->skydivePlayerState.flags[0] &= ~4u;
}

/*
==============
PM_Skydive_Update_AnimEvents_Throttle
==============
*/
void PM_Skydive_Update_AnimEvents_Throttle(pmove_t *pm, pml_t *pml, const bool skydiving)
{
  playerState_s *ps; 
  char rightmove; 
  char v8; 
  char forwardmove; 
  bool v10; 
  const SuitDef *SuitDef; 
  PlayerAnimScriptEventType v14; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1343, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1343, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  rightmove = pm->cmd.rightmove;
  v8 = ps->skydivePlayerState.flags[0] & 1;
  forwardmove = pm->cmd.forwardmove;
  if ( ps->skydivePlayerState.state[0] == 1 )
  {
    SuitDef = BG_GetSuitDef(ps->suitIndex);
    if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2884, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
      __debugbreak();
    _XMM0 = 0i64;
    __asm { vroundss xmm4, xmm0, xmm2, 1 }
    v10 = (float)((float)((float)(ps->viewangles.v[0] * 0.0027777778) - *(float *)&_XMM4) * 360.0) >= SuitDef->skydive_freefallSuperDiveCameraPitch && COERCE_FLOAT(HIDWORD(*(unsigned __int64 *)&BG_GetStickCartesianCoords(rightmove, forwardmove))) >= SuitDef->skydive_freefallSuperDiveStickInput;
  }
  else
  {
    v10 = 0;
  }
  if ( skydiving )
  {
    if ( v8 )
    {
      if ( v10 )
      {
LABEL_23:
        ps->skydivePlayerState.flags[0] |= 1u;
        return;
      }
      v14 = ANIM_ET_SKYDIVE_END_SUPER_DIVE;
    }
    else
    {
      if ( !v10 )
        goto LABEL_24;
      v14 = ANIM_ET_SKYDIVE_BEGIN_SUPER_DIVE;
    }
    BG_AnimScriptEvent(pm->m_bgHandler, ps, v14, 0, 1, &pml->holdrand);
  }
  if ( v10 )
    goto LABEL_23;
LABEL_24:
  ps->skydivePlayerState.flags[0] &= ~1u;
}

/*
==============
PM_Skydive_Update_AutoDeploy
==============
*/
void PM_Skydive_Update_AutoDeploy(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  bool v5; 
  bool v6; 
  const SuitDef *SuitDef; 
  char v8; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1533, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1533, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !ps->skydivePlayerState.state[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1535, ASSERT_TYPE_ASSERT, "(ps->skydivePlayerState.state != SkydiveState::None)", (const char *)&queryFormat, "ps->skydivePlayerState.state != SkydiveState::None") )
    __debugbreak();
  v5 = (pm->cmd.stateFlags & 2) != 0;
  v6 = GameModeFlagValues::ms_mpValue != ACTIVE || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0x22u);
  if ( (v5 || !v6 || pm->isBot) && (ps->skydivePlayerState.flagsExtra[0] & 1) == 0 && PM_Skydive_CanActivate(pm) && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x34u) && !ps->pm_type && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) && ps->skydivePlayerState.state[0] == 1 )
  {
    SuitDef = BG_GetSuitDef(ps->suitIndex);
    if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1577, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
      __debugbreak();
    if ( SuitDef->skydive_baseJumpAutoDeployHeight > 0.0 )
    {
      PM_Skydive_PerformTrace(pm, pml, AUTO_DEPLOY, 0);
      if ( !pml->skydiveTrace.startsolid && 1.0 != pml->skydiveTrace.fraction )
      {
        if ( (ps->skydivePlayerState.flagsExtra[0] & 2) != 0 )
        {
          PM_Skydive_BeginDeployParachute(pm, pml);
          ps->skydivePlayerState.flags[0] |= 0x60u;
        }
        else
        {
          v8 = ps->skydivePlayerState.flags[0];
          if ( (v8 & 0x40) == 0 && (v8 & 0x20) == 0 )
          {
            PM_Skydive_BeginDeployParachute(pm, pml);
            ps->skydivePlayerState.flags[0] |= 0x40u;
          }
        }
      }
    }
  }
}

/*
==============
PM_Skydive_Update_PrepForLandingState
==============
*/
void PM_Skydive_Update_PrepForLandingState(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  const dvar_t *v4; 
  float value; 
  const BgPlayerTraceInfo *v6; 
  const BgHandler *m_bgHandler; 
  Physics_WorldId v8; 
  BgTrace v9; 
  vec3_t vec; 
  trace_t results; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1617, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1617, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !ps->pm_type && (unsigned __int8)(ps->skydivePlayerState.state[0] - 2) <= 1u && ps->skydivePlayerState.animState != 10 )
  {
    v4 = DCONST_DVARFLT_skydive_prep_for_landing_height;
    if ( !DCONST_DVARFLT_skydive_prep_for_landing_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_prep_for_landing_height") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    value = v4->current.value;
    if ( value > 0.0 )
    {
      vec = ps->origin;
      WorldUpReferenceFrame::AddUpContribution(&pm->refFrame, COERCE_FLOAT(LODWORD(value) ^ _xmm), &vec);
      v6 = pm->m_bgHandler->GetPlayerTraceInfo(pm->m_bgHandler, (unsigned int)ps->clientNum);
      BgTrace::BgTrace(&v9, v6);
      m_bgHandler = pm->m_bgHandler;
      v9.m_flags |= 0x80u;
      v8 = m_bgHandler->GetPhysicsWorldId((BgHandler *)m_bgHandler);
      BgTrace::LegacyTraceHandler(&v9, v8, &results, &ps->origin, &vec, &bounds_origin, ps->clientNum, pm->tracemask, ps);
      v9.m_flags &= ~0x80u;
      if ( results.startsolid || results.fraction == 1.0 )
      {
        if ( (unsigned __int8)(ps->skydivePlayerState.animState - 9) > 1u )
          ps->skydivePlayerState.animState = 2;
      }
      else
      {
        ps->skydivePlayerState.animState = 3;
      }
    }
  }
}

/*
==============
PM_Skydive_ValidateGroundTrace
==============
*/
void PM_Skydive_ValidateGroundTrace(pmove_t *pm, pml_t *pml, const vec3_t *groundTraceStart, const vec3_t *groundTraceEnd, const float maxGroundSweepLength, trace_t *inOutTrace)
{
  playerState_s *ps; 
  const dvar_t *v10; 
  const dvar_t *v11; 
  float value; 
  const dvar_t *v13; 
  float v16; 
  float v17; 
  __int128 v18; 
  float v19; 
  bool v21; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  const BgHandler *m_bgHandler; 
  const BgPlayerTraceInfo *v30; 
  const BgHandler *v31; 
  Physics_WorldId v32; 
  float fraction; 
  __m256i v34; 
  __int128 v35; 
  const char *debugHitName; 
  BgTrace v37; 
  vec3_t end; 
  vec3_t start; 
  Bounds bounds; 
  trace_t results; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1745, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1745, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v10 = DVARBOOL_skydive_enable_faulty_base_jump_fix;
  if ( !DVARBOOL_skydive_enable_faulty_base_jump_fix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_enable_faulty_base_jump_fix") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.enabled && inOutTrace->fraction >= 1.0 )
  {
    v11 = DVARFLT_skydive_ground_sweep_sphere_radius;
    if ( !DVARFLT_skydive_ground_sweep_sphere_radius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_ground_sweep_sphere_radius") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    value = v11->current.value;
    v13 = DVARFLT_skydive_ground_sweep_length;
    if ( !DVARFLT_skydive_ground_sweep_length && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_ground_sweep_length") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    _XMM0 = v13->current.unsignedInt;
    __asm { vminss  xmm8, xmm0, [rbp+0B0h+maxGroundSweepLength] }
    v16 = groundTraceEnd->v[0] - groundTraceStart->v[0];
    v18 = LODWORD(groundTraceEnd->v[1]);
    v17 = groundTraceEnd->v[1] - groundTraceStart->v[1];
    v19 = groundTraceEnd->v[2] - groundTraceStart->v[2];
    *(float *)&v18 = fsqrt((float)((float)(v17 * v17) + (float)(v16 * v16)) + (float)(v19 * v19));
    _XMM7 = v18;
    v21 = *(float *)&v18 <= *(float *)&_XMM8;
    __asm
    {
      vcmpless xmm0, xmm7, cs:__real@80000000
      vblendvps xmm0, xmm7, xmm9, xmm0
    }
    v24 = v16 * (float)(1.0 / *(float *)&_XMM0);
    v25 = v17 * (float)(1.0 / *(float *)&_XMM0);
    v26 = v19 * (float)(1.0 / *(float *)&_XMM0);
    if ( v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1765, ASSERT_TYPE_ASSERT, "( groundTraceLength ) > ( sweepLength )", "%s > %s\n\t%g, %g", "groundTraceLength", "sweepLength", *(float *)&_XMM7, *(float *)&_XMM8) )
      __debugbreak();
    v27 = groundTraceStart->v[1];
    v28 = groundTraceStart->v[2];
    m_bgHandler = pm->m_bgHandler;
    start.v[0] = groundTraceStart->v[0];
    end.v[0] = (float)(v24 * *(float *)&_XMM8) + start.v[0];
    end.v[1] = (float)(v25 * *(float *)&_XMM8) + v27;
    start.v[1] = v27;
    start.v[2] = v28;
    bounds.midPoint.v[0] = 0.0;
    bounds.midPoint.v[1] = 0.0;
    bounds.midPoint.v[2] = 0.0;
    bounds.halfSize.v[0] = value;
    bounds.halfSize.v[1] = value;
    bounds.halfSize.v[2] = value;
    end.v[2] = (float)(v26 * *(float *)&_XMM8) + v28;
    v30 = m_bgHandler->GetPlayerTraceInfo(m_bgHandler, ps->clientNum);
    BgTrace::BgTrace(&v37, v30);
    v31 = pm->m_bgHandler;
    v37.m_flags |= 0x80u;
    v32 = v31->GetPhysicsWorldId((BgHandler *)v31);
    BgTrace::LegacyTraceHandler(&v37, v32, &results, &start, &end, &bounds, ps->clientNum, pm->tracemask, ps);
    fraction = results.fraction;
    if ( results.fraction != 1.0 )
    {
      v34 = *(__m256i *)&results.contents;
      *(__m256i *)&inOutTrace->fraction = *(__m256i *)&results.fraction;
      v35 = *(_OWORD *)&results.allsolid;
      *(__m256i *)&inOutTrace->contents = v34;
      debugHitName = results.debugHitName;
      *(_OWORD *)&inOutTrace->allsolid = v35;
      inOutTrace->debugHitName = debugHitName;
      inOutTrace->fraction = (float)(fraction * *(float *)&_XMM8) / *(float *)&_XMM7;
    }
  }
}

