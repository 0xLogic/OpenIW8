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
  RumbleGraph *skydive_canopyLookHorizDragGraph; 
  RumbleGraph *skydive_canopyStickHorizDragGraph; 
  bool v25; 
  bool v26; 
  bool v33; 
  bool v42; 
  bool v43; 
  __int64 v57; 
  double v58; 
  double v59; 
  double v60; 
  double v61; 
  char v65; 
  void *retaddr; 
  int v67; 
  int v69; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps [rsp+0F8h+var_88], xmm11
    vmovaps [rsp+0F8h+var_98], xmm12
    vmovaps [rsp+0F8h+var_A8], xmm13
  }
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 268, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  _RBX = BG_GetSuitDef(ps->suitIndex);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 271, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  switch ( ps->skydivePlayerState.state[0] )
  {
    case 1:
    case 5:
    case 6:
      goto $LN10_0;
    case 2:
      __asm { vmovss  xmm7, dword ptr [rbx+534h]; jumptable 00000001402FB36C case 2 }
      goto LABEL_9;
    case 3:
    case 4:
      __asm { vmovss  xmm7, dword ptr [rbx+5B0h]; jumptable 00000001402FB36C cases 3,4 }
LABEL_9:
      __asm { vmovss  xmm6, dword ptr [rbx+5B4h] }
      skydive_canopyLookHorizDragGraph = _RBX->skydive_canopyLookHorizDragGraph;
      __asm { vmovss  xmm8, dword ptr [rbx+5C0h] }
      skydive_canopyStickHorizDragGraph = _RBX->skydive_canopyStickHorizDragGraph;
      break;
    default:
      LODWORD(v57) = (unsigned __int8)ps->skydivePlayerState.state[0];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 308, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled skydive state %d while retrieving suit field values.", v57) )
        __debugbreak();
$LN10_0:
      skydive_canopyStickHorizDragGraph = _RBX->skydive_freefallStickHorizDragGraph;
      __asm { vmovss  xmm8, dword ptr [rbx+470h] }
      skydive_canopyLookHorizDragGraph = _RBX->skydive_freefallLookHorizDragGraph;
      __asm
      {
        vmovss  xmm6, dword ptr [rbx+464h]
        vmovss  xmm7, dword ptr [rbx+460h]
      }
      break;
  }
  *(float *)&_XMM0 = BG_Skydive_GetNormalizedPitch(ps);
  __asm { vmovaps xmm11, xmm0 }
  if ( !skydive_canopyLookHorizDragGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 319, ASSERT_TYPE_ASSERT, "( lookDragGraph )", "Suit %s does not define Look Drag Scale Graph - Horizontal. This is a required field!", _RBX->name) )
    __debugbreak();
  __asm { vmovaps xmm2, xmm11; fraction }
  *(double *)&_XMM0 = GraphGetValueFromFraction(skydive_canopyLookHorizDragGraph->knotCount, skydive_canopyLookHorizDragGraph->knots, *(const float *)&_XMM2);
  __asm
  {
    vmulss  xmm9, xmm0, xmm6
    vmovss  [rsp+0F8h+arg_0], xmm9
  }
  v25 = (v67 & 0x7F800000u) < 0x7F800000;
  if ( (v67 & 0x7F800000) == 2139095040 )
  {
    v26 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 321, ASSERT_TYPE_SANITY, "( !IS_NAN( effectiveLookDragCoef ) )", (const char *)&queryFormat, "!IS_NAN( effectiveLookDragCoef )");
    v25 = 0;
    if ( v26 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm10, xmm10, xmm10
    vcomiss xmm9, xmm10
    vxorpd  xmm12, xmm12, xmm12
  }
  if ( v25 )
  {
    __asm
    {
      vmovsd  [rsp+0F8h+var_B8], xmm12
      vcvtss2sd xmm0, xmm9, xmm9
      vmovsd  [rsp+0F8h+var_C0], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 322, ASSERT_TYPE_ASSERT, "( effectiveLookDragCoef ) >= ( 0.0f )", "%s >= %s\n\t%g, %g", "effectiveLookDragCoef", "0.0f", v58, v60) )
      __debugbreak();
  }
  *(double *)&_XMM0 = BG_GetSkydiveCurrentThrottle(ps);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@40000000
    vsubss  xmm2, xmm1, cs:__real@3f800000
    vminss  xmm0, xmm2, xmm10
    vxorps  xmm13, xmm0, cs:__xmm@80000000800000008000000080000000
  }
  v33 = (unsigned __int8)(ps->skydivePlayerState.state[0] - 2) <= 2u;
  _EAX = 0;
  __asm { vmovd   xmm1, eax }
  _EAX = v33;
  __asm
  {
    vmovd   xmm0, eax
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm13, xmm11, xmm2
    vmovss  [rsp+0F8h+arg_0], xmm0
  }
  if ( !skydive_canopyStickHorizDragGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 329, ASSERT_TYPE_ASSERT, "( stickDragGraph )", "Suit %s does not define Stick Drag Scale Graph - Horizontal. This is a required field!", _RBX->name) )
    __debugbreak();
  __asm { vmovss  xmm2, [rsp+0F8h+arg_0]; fraction }
  *(double *)&_XMM0 = GraphGetValueFromFraction(skydive_canopyStickHorizDragGraph->knotCount, skydive_canopyStickHorizDragGraph->knots, *(const float *)&_XMM2);
  __asm { vmulss  xmm6, xmm0, xmm8 }
  if ( !v33 )
    __asm { vmulss  xmm6, xmm6, xmm13 }
  __asm { vmovss  [rsp+0F8h+arg_0], xmm6 }
  v42 = (v69 & 0x7F800000u) < 0x7F800000;
  if ( (v69 & 0x7F800000) == 2139095040 )
  {
    v43 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 332, ASSERT_TYPE_SANITY, "( !IS_NAN( effectiveStickDragCoef ) )", (const char *)&queryFormat, "!IS_NAN( effectiveStickDragCoef )");
    v42 = 0;
    if ( v43 )
      __debugbreak();
  }
  __asm { vcomiss xmm6, xmm10 }
  if ( v42 )
  {
    __asm
    {
      vmovsd  [rsp+0F8h+var_B8], xmm12
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+0F8h+var_C0], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 333, ASSERT_TYPE_ASSERT, "( effectiveStickDragCoef ) >= ( 0.0f )", "%s >= %s\n\t%g, %g", "effectiveStickDragCoef", "0.0f", v59, v61) )
      __debugbreak();
  }
  _R11 = &v65;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vaddss  xmm0, xmm9, xmm7
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vaddss  xmm0, xmm0, xmm6
    vmovaps xmm6, xmmword ptr [r11-10h]
  }
  return *(float *)&_XMM0;
}

/*
==============
BG_Skydive_CalculateEffectiveVerticalDragCoefficient
==============
*/
float BG_Skydive_CalculateEffectiveVerticalDragCoefficient(const playerState_s *ps)
{
  unsigned __int8 v12; 
  RumbleGraph *skydive_canopyLookVertDragGraph; 
  RumbleGraph *skydive_canopyStickVertDragIncreaseGraph; 
  RumbleGraph *skydive_canopyStickVertDragReductionGraph; 
  bool v31; 
  char v33; 
  bool v43; 
  bool v44; 
  bool v45; 
  bool v49; 
  bool v55; 
  bool v56; 
  __int64 v69; 
  double v70; 
  double v71; 
  double v72; 
  double v73; 
  double v74; 
  int v84; 
  int v85; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 413, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  _RBX = BG_GetSuitDef(ps->suitIndex);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 416, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  v12 = ps->skydivePlayerState.state[0];
  if ( v12 != 2 )
  {
    __asm
    {
      vmovaps [rsp+0E8h+var_28], xmm6
      vmovaps [rsp+0E8h+var_38], xmm7
      vmovaps [rsp+0E8h+var_48], xmm8
      vmovaps [rsp+0E8h+var_58], xmm9
      vmovaps [rsp+0E8h+var_68], xmm10
      vmovaps [rsp+0E8h+var_78], xmm11
      vmovaps [rsp+0E8h+var_88], xmm12
      vmovaps [rsp+0E8h+var_98], xmm13
    }
    switch ( v12 )
    {
      case 1u:
      case 5u:
      case 6u:
        goto $LN10_1;
      case 2u:
      case 3u:
      case 4u:
        __asm
        {
          vmovss  xmm11, dword ptr [rbx+5D0h]; jumptable 00000001402FB905 cases 2-4
          vmovss  xmm6, dword ptr [rbx+5D4h]
        }
        skydive_canopyLookVertDragGraph = _RBX->skydive_canopyLookVertDragGraph;
        __asm { vmovss  xmm9, dword ptr [rbx+5E0h] }
        skydive_canopyStickVertDragIncreaseGraph = _RBX->skydive_canopyStickVertDragIncreaseGraph;
        __asm { vmovss  xmm8, dword ptr [rbx+5F0h] }
        skydive_canopyStickVertDragReductionGraph = _RBX->skydive_canopyStickVertDragReductionGraph;
        break;
      default:
        LODWORD(v69) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 461, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled skydive state %d while retrieving suit field values.", v69) )
          __debugbreak();
$LN10_1:
        skydive_canopyStickVertDragReductionGraph = _RBX->skydive_freefallStickVertDragReductionGraph;
        __asm { vmovss  xmm8, dword ptr [rbx+4A0h] }
        skydive_canopyStickVertDragIncreaseGraph = _RBX->skydive_freefallStickVertDragIncreaseGraph;
        __asm { vmovss  xmm9, dword ptr [rbx+490h] }
        skydive_canopyLookVertDragGraph = _RBX->skydive_freefallLookVertDragGraph;
        __asm
        {
          vmovss  xmm6, dword ptr [rbx+484h]
          vmovss  xmm11, dword ptr [rbx+480h]
        }
        break;
    }
    *(float *)&_XMM0 = BG_Skydive_GetNormalizedPitch(ps);
    __asm { vmovaps xmm10, xmm0 }
    if ( !skydive_canopyLookVertDragGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 474, ASSERT_TYPE_ASSERT, "( lookDragGraph )", "Suit %s does not define Look Drag Coefficient Graph - Vertical. This is a required field!", _RBX->name) )
      __debugbreak();
    __asm { vmovaps xmm2, xmm10; fraction }
    *(double *)&_XMM0 = GraphGetValueFromFraction(skydive_canopyLookVertDragGraph->knotCount, skydive_canopyLookVertDragGraph->knots, *(const float *)&_XMM2);
    __asm { vmulss  xmm13, xmm0, xmm6 }
    *(double *)&_XMM0 = BG_GetSkydiveCurrentThrottle(ps);
    __asm
    {
      vmulss  xmm1, xmm0, cs:__real@40000000
      vmovss  xmm7, cs:__real@3f800000
      vsubss  xmm6, xmm1, xmm7
    }
    v31 = BG_Skydive_UseParachuteModel(ps);
    __asm
    {
      vxorps  xmm12, xmm12, xmm12
      vcomiss xmm6, xmm12
    }
    if ( v43 | v33 )
    {
      __asm { vmovss  xmm8, dword ptr cs:__xmm@80000000800000008000000080000000 }
      if ( v31 )
        __asm { vxorps  xmm10, xmm6, xmm8 }
      if ( !skydive_canopyStickVertDragIncreaseGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 498, ASSERT_TYPE_ASSERT, "( stickDragIncreaseGraph )", "Suit %s does not define Stick Drag Increase Graph - Vertical. This is a required field!", _RBX->name) )
        __debugbreak();
      __asm { vmovaps xmm2, xmm10; fraction }
      *(double *)&_XMM0 = GraphGetValueFromFraction(skydive_canopyStickVertDragIncreaseGraph->knotCount, skydive_canopyStickVertDragIncreaseGraph->knots, *(const float *)&_XMM2);
      __asm { vmulss  xmm1, xmm0, xmm9 }
      if ( !v31 )
      {
        __asm
        {
          vmulss  xmm0, xmm1, xmm6
          vxorps  xmm1, xmm0, xmm8
        }
      }
      __asm
      {
        vaddss  xmm6, xmm1, xmm7
        vmovss  [rsp+0E8h+arg_0], xmm6
      }
      v55 = (v85 & 0x7F800000u) < 0x7F800000;
      if ( (v85 & 0x7F800000) == 2139095040 )
      {
        v56 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 502, ASSERT_TYPE_SANITY, "( !IS_NAN( dragScale ) )", (const char *)&queryFormat, "!IS_NAN( dragScale )");
        v55 = 0;
        if ( v56 )
          __debugbreak();
      }
      __asm { vcomiss xmm6, xmm7 }
      if ( !v55 )
        goto LABEL_43;
      __asm
      {
        vmovsd  xmm0, cs:__real@3ff0000000000000
        vmovsd  [rsp+0E8h+var_A8], xmm0
        vcvtss2sd xmm1, xmm6, xmm6
        vmovsd  [rsp+0E8h+var_B0], xmm1
      }
      v49 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 503, ASSERT_TYPE_ASSERT, "( dragScale ) >= ( 1.0f )", "%s >= %s\n\t%g, %g", "dragScale", "1.0f", v73, v74);
    }
    else
    {
      _EAX = 0;
      _ECX = v31;
      __asm
      {
        vmovd   xmm0, ecx
        vmovd   xmm1, eax
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm0, xmm6, xmm10, xmm2
        vmovss  [rsp+0E8h+arg_0], xmm0
      }
      if ( !skydive_canopyStickVertDragReductionGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 486, ASSERT_TYPE_ASSERT, "( stickDragReductionGraph )", "Suit %s does not define Stick Drag Reduction Graph - Vertical. This is a required field!", _RBX->name) )
        __debugbreak();
      __asm { vmovss  xmm2, [rsp+0E8h+arg_0]; fraction }
      *(double *)&_XMM0 = GraphGetValueFromFraction(skydive_canopyStickVertDragReductionGraph->knotCount, skydive_canopyStickVertDragReductionGraph->knots, *(const float *)&_XMM2);
      __asm { vmulss  xmm1, xmm0, xmm8 }
      if ( !v31 )
        __asm { vmulss  xmm1, xmm1, xmm6 }
      __asm
      {
        vsubss  xmm6, xmm7, xmm1
        vmovss  [rsp+0E8h+arg_0], xmm6
      }
      v43 = (v84 & 0x7F800000u) < 0x7F800000;
      v44 = (v84 & 0x7F800000u) <= 0x7F800000;
      if ( (v84 & 0x7F800000) == 2139095040 )
      {
        v45 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 491, ASSERT_TYPE_SANITY, "( !IS_NAN( dragScale ) )", (const char *)&queryFormat, "!IS_NAN( dragScale )");
        v43 = 0;
        v44 = !v45;
        if ( v45 )
          __debugbreak();
      }
      __asm { vcomiss xmm6, xmm12 }
      if ( !v43 )
      {
        __asm { vcomiss xmm6, xmm7 }
        if ( v44 )
          goto LABEL_43;
      }
      __asm
      {
        vmovsd  xmm0, cs:__real@3ff0000000000000
        vmovsd  [rsp+0E8h+var_B0], xmm0
        vxorpd  xmm1, xmm1, xmm1
        vmovsd  [rsp+0E8h+var_B8], xmm1
        vcvtss2sd xmm2, xmm6, xmm6
        vmovsd  [rsp+0E8h+var_C0], xmm2
      }
      v49 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 492, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( dragScale ) && ( dragScale ) <= ( 1.0f )", "dragScale not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v70, v71, v72);
    }
    if ( v49 )
      __debugbreak();
LABEL_43:
    __asm
    {
      vmovaps xmm12, [rsp+0E8h+var_88]
      vmovaps xmm10, [rsp+0E8h+var_68]
      vmovaps xmm9, [rsp+0E8h+var_58]
      vmovaps xmm8, [rsp+0E8h+var_48]
      vmovaps xmm7, [rsp+0E8h+var_38]
      vaddss  xmm0, xmm13, xmm11
      vmovaps xmm13, [rsp+0E8h+var_98]
      vmovaps xmm11, [rsp+0E8h+var_78]
      vmulss  xmm0, xmm0, xmm6
      vmovaps xmm6, [rsp+0E8h+var_28]
    }
    return *(float *)&_XMM0;
  }
  __asm { vmovss  xmm0, dword ptr [rbx+538h] }
  return *(float *)&_XMM0;
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
  _RBX = ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 69, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+1D8h]
    vmulss  xmm5, xmm0, cs:__real@3b360b61
    vaddss  xmm2, xmm5, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm4, xmm0, xmm2, 1
    vmovss  xmm2, cs:__real@42b40000; max
    vsubss  xmm1, xmm5, xmm4
    vmulss  xmm0, xmm1, cs:__real@43b40000; val
    vmovss  xmm1, cs:__real@c2b40000; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm1, cs:__real@42b40000; max
    vmovaps xmm2, xmm0; dist
    vmovss  xmm0, cs:__real@c2b40000; min
  }
  return I_fdistnormalized(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
}

/*
==============
BG_Skydive_GetTrackedThrottleValue
==============
*/
float BG_Skydive_GetTrackedThrottleValue(const playerState_s *ps)
{
  *(double *)&_XMM0 = BG_GetSkydiveCurrentThrottle(ps);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@40000000
    vsubss  xmm0, xmm1, cs:__real@3f800000
  }
  return *(float *)&_XMM0;
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
  char v15; 
  vec2_t StickCartesianCoords; 

  _RBX = ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2875, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( _RBX->skydivePlayerState.state[0] != 1 )
    return 0;
  _RDI = BG_GetSuitDef(_RBX->suitIndex);
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2884, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+1D8h]
    vmulss  xmm5, xmm0, cs:__real@3b360b61
    vaddss  xmm2, xmm5, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm4, xmm0, xmm2, 1
    vsubss  xmm1, xmm5, xmm4
    vmulss  xmm0, xmm1, cs:__real@43b40000
    vcomiss xmm0, dword ptr [rdi+3D8h]
  }
  StickCartesianCoords = BG_GetStickCartesianCoords(rightMove, forwardMove);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+48h+arg_0+4]
    vcomiss xmm0, dword ptr [rdi+3DCh]
  }
  return !v15;
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
  int v20; 
  bool v21; 
  bool v22; 
  int v23; 
  int v24; 
  unsigned int v25; 
  unsigned int v26; 
  bool v27; 
  char v54; 
  __int64 v55; 
  int v56; 
  int v57; 
  int v58; 
  int v59; 
  int v60; 
  int v61; 
  int v62; 
  int v63; 
  int v64; 

  _RDI = acceleration;
  _RSI = suitDef;
  _RBP = pml;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 852, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RBX = pm->ps;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 852, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 854, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  [rsp+78h+var_38], xmm0
  }
  if ( (v56 & 0x7F800000) == 2139095040 )
    goto LABEL_45;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vmovss  [rsp+78h+var_38], xmm0
  }
  if ( (v57 & 0x7F800000) == 2139095040 )
    goto LABEL_45;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  [rsp+78h+var_38], xmm0
  }
  if ( (v58 & 0x7F800000) == 2139095040 )
  {
LABEL_45:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 856, ASSERT_TYPE_SANITY, "( !IS_NAN( ( acceleration )[0] ) && !IS_NAN( ( acceleration )[1] ) && !IS_NAN( ( acceleration )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( acceleration )[0] ) && !IS_NAN( ( acceleration )[1] ) && !IS_NAN( ( acceleration )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm3, dword ptr [rbp+24h]
    vmulss  xmm0, xmm3, dword ptr [rdi]
    vaddss  xmm2, xmm0, dword ptr [rbx+3Ch]
    vmovss  dword ptr [rbx+3Ch], xmm2
    vmulss  xmm0, xmm3, dword ptr [rdi+4]
    vaddss  xmm1, xmm0, dword ptr [rbx+40h]
    vmovss  dword ptr [rbx+40h], xmm1
    vmulss  xmm0, xmm3, dword ptr [rdi+8]
    vaddss  xmm1, xmm0, dword ptr [rbx+44h]
    vmovss  [rsp+78h+var_38], xmm2
    vmovss  dword ptr [rbx+44h], xmm1
  }
  if ( (v59 & 0x7F800000) == 2139095040 )
    goto LABEL_46;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+40h]
    vmovss  [rsp+78h+var_38], xmm0
  }
  if ( (v60 & 0x7F800000) == 2139095040 )
    goto LABEL_46;
  __asm { vmovss  [rsp+78h+var_38], xmm1 }
  if ( (v61 & 0x7F800000) == 2139095040 )
  {
LABEL_46:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 861, ASSERT_TYPE_SANITY, "( !IS_NAN( ( ps->velocity )[0] ) && !IS_NAN( ( ps->velocity )[1] ) && !IS_NAN( ( ps->velocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( ps->velocity )[0] ) && !IS_NAN( ( ps->velocity )[1] ) && !IS_NAN( ( ps->velocity )[2] )") )
      __debugbreak();
  }
  v20 = (unsigned __int8)_RBX->skydivePlayerState.state[0];
  v21 = v20 == 0;
  v23 = v20 - 1;
  v22 = v21 || v23 == 0;
  if ( !v23 )
    goto LABEL_27;
  v21 = v23 == 0;
  v24 = v23 - 1;
  v22 = v21 || v24 == 0;
  if ( v24 )
  {
    v21 = v24 == 0;
    v25 = v24 - 1;
    v22 = v21 || v25 == 0;
    if ( v25 )
    {
      v21 = v25 < 2;
      v26 = v25 - 2;
      v22 = v21 || v26 == 0;
      if ( v26 )
      {
        v22 = v26 <= 1;
        if ( v26 != 1 )
        {
          LODWORD(v55) = (unsigned __int8)_RBX->skydivePlayerState.state[0];
          v27 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 879, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled skydive state %d while retrieving suit field values.", v55);
          v22 = !v27;
          if ( v27 )
            __debugbreak();
        }
      }
LABEL_27:
      __asm { vmovss  xmm0, dword ptr [rsi+424h] }
      goto LABEL_28;
    }
  }
  __asm { vmovss  xmm0, dword ptr [rsi+574h] }
LABEL_28:
  __asm
  {
    vmulss  xmm5, xmm0, cs:__real@421d7ae1
    vmovss  xmm3, dword ptr [rbx+3Ch]
    vmovss  xmm4, dword ptr [rbx+40h]
    vmulss  xmm0, xmm3, xmm3
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm1, xmm1, xmm0
    vsqrtss xmm2, xmm1, xmm1
    vcomiss xmm2, xmm5
    vcmpless xmm0, xmm2, cs:__real@80000000
    vmovss  xmm1, cs:__real@3f800000
    vblendvps xmm0, xmm2, xmm1, xmm0
    vdivss  xmm1, xmm1, xmm0
    vmulss  xmm0, xmm3, xmm1
    vmulss  xmm3, xmm4, xmm1
  }
  if ( !v22 )
  {
    __asm
    {
      vmulss  xmm1, xmm0, xmm5
      vmovss  [rsp+78h+var_38], xmm1
      vmulss  xmm0, xmm3, xmm5
      vmovss  dword ptr [rbx+3Ch], xmm1
      vmovss  dword ptr [rbx+40h], xmm0
    }
    if ( (v62 & 0x7F800000) == 2139095040 )
      goto LABEL_47;
    __asm { vmovss  [rsp+78h+var_38], xmm0 }
    if ( (v63 & 0x7F800000) == 2139095040 )
      goto LABEL_47;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+44h]
      vmovss  [rsp+78h+var_38], xmm0
    }
    if ( (v64 & 0x7F800000) == 2139095040 )
    {
LABEL_47:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 892, ASSERT_TYPE_SANITY, "( !IS_NAN( ( ps->velocity )[0] ) && !IS_NAN( ( ps->velocity )[1] ) && !IS_NAN( ( ps->velocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( ps->velocity )[0] ) && !IS_NAN( ( ps->velocity )[1] ) && !IS_NAN( ( ps->velocity )[2] )") )
        __debugbreak();
    }
    __asm { vmovss  xmm4, dword ptr [rbx+40h] }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+3Ch]
    vmulss  xmm0, xmm0, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm1, xmm1, xmm0
    vsqrtss xmm2, xmm1, xmm1
    vmovss  dword ptr [rbp+3Ch], xmm2
    vmovss  xmm0, dword ptr [rbx+44h]
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  dword ptr [rbp+38h], xmm0
  }
  _RDI = DVARFLT_skydive_freefall_velocity;
  if ( !DVARFLT_skydive_freefall_velocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_freefall_velocity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vcomiss xmm0, dword ptr [rbp+38h]
  }
  if ( v21 | v54 )
  {
    if ( _RBX->skydivePlayerState.state[0] == 5 )
      PM_Skydive_Freefall_Begin(pm, _RBP);
  }
}

/*
==============
PM_Skydive_AddLandEvent
==============
*/
void PM_Skydive_AddLandEvent(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  bool v5; 
  bool v6; 
  entity_event_t v8; 

  _RSI = pml;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2356, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  v5 = ps == NULL;
  if ( !ps )
  {
    v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2356, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps");
    v5 = !v6;
    if ( v6 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+3Ch]
    vcomiss xmm0, cs:__real@42c80000
  }
  if ( v5 )
  {
    v8 = EV_LANDING_LOW_HEIGHT;
  }
  else
  {
    __asm { vcomiss xmm0, cs:__real@43480000 }
    v8 = EV_LANDING_PAIN_EXTREME_HEIGHT;
    if ( v5 )
      v8 = EV_LANDING_EXTREME_HEIGHT;
  }
  BG_AddPredictableEventToPlayerstate(v8, 0, pm->cmd.serverTime, pm->weaponMap, ps);
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
  const dvar_t *v12; 
  int contentMask; 
  BgTrace v17; 
  vec3_t end; 
  trace_t results; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2756, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2756, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v4 = pm->m_bgHandler->GetPlayerTraceInfo(pm->m_bgHandler, (unsigned int)ps->clientNum);
  BgTrace::BgTrace(&v17, v4);
  m_bgHandler = pm->m_bgHandler;
  v17.m_flags |= 0x80u;
  v6 = m_bgHandler->GetPhysicsWorldId((BgHandler *)m_bgHandler);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+38h]
    vmovss  xmm1, dword ptr [rdi+34h]
  }
  _R9 = &ps->origin;
  __asm
  {
    vsubss  xmm2, xmm0, cs:__real@46fa0000
    vmovss  xmm0, dword ptr [r9]
  }
  contentMask = pm->tracemask;
  __asm
  {
    vmovss  dword ptr [rsp+0F8h+end], xmm0
    vmovss  dword ptr [rsp+0F8h+end+4], xmm1
    vmovss  dword ptr [rsp+0F8h+end+8], xmm2
  }
  BgTrace::LegacyTraceHandler(&v17, v6, &results, &ps->origin, &end, &bounds_origin, ps->clientNum, contentMask, ps);
  v17.m_flags &= ~0x80u;
  v12 = DCONST_DVARFLT_skydive_min_deploy_altitude;
  if ( !DCONST_DVARFLT_skydive_min_deploy_altitude && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_min_deploy_altitude") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0F8h+results.position+8]
    vaddss  xmm1, xmm0, dword ptr [rdi+28h]
    vcvttss2si eax, xmm1
  }
  pm->m_skydiveAutodeployOffset = _EAX;
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
  playerState_s *v29; 
  float fmt; 
  vec3_t *outAcceleration; 
  vec3_t acceleration; 
  char v39; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
  }
  _RSI = pml;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1154, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1154, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  _RBX = BG_GetSuitDef(ps->suitIndex);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1157, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  if ( ps->skydivePlayerState.state[0] != 1 )
  {
    if ( ps->skydivePlayerState.state[0] == 2 || ps->skydivePlayerState.state[0] == 3 )
    {
      __asm
      {
        vmovss  xmm10, dword ptr [rbx+588h]
        vmovss  xmm11, dword ptr [rbx+548h]
      }
      goto LABEL_18;
    }
    if ( ps->skydivePlayerState.state[0] != 5 && ps->skydivePlayerState.state[0] != 6 )
    {
      LODWORD(outAcceleration) = (unsigned __int8)ps->skydivePlayerState.state[0];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1178, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled skydive state %d while retrieving suit field values.", outAcceleration) )
        __debugbreak();
    }
  }
  __asm
  {
    vmovss  xmm11, dword ptr [rbx+3F8h]
    vmovss  xmm10, dword ptr [rbx+438h]
  }
LABEL_18:
  __asm { vmovss  xmm2, cs:__real@3f800000; max }
  *(vec2_t *)acceleration.v = BG_GetStickCartesianCoords(pm->cmd.rightmove, pm->cmd.forwardmove);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0C8h+acceleration+4]
    vaddss  xmm1, xmm0, cs:__real@3f800000
    vmulss  xmm0, xmm1, cs:__real@3f000000; val
    vxorps  xmm1, xmm1, xmm1; min
    vxorps  xmm9, xmm9, xmm9
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm6, dword ptr [rsi+24h]
    vmovaps xmm7, xmm0
  }
  *(double *)&_XMM0 = BG_GetSkydiveCurrentThrottle(ps);
  __asm
  {
    vmovaps xmm1, xmm0; cur
    vmovaps xmm0, xmm7; tgt
    vmovaps xmm3, xmm6; deltaTime
    vmovaps xmm2, xmm11; rate
  }
  *(double *)&_XMM0 = DiffTrack(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  __asm { vmovss  xmm1, cs:__real@3f800000; maxAbsValueSize }
  ps->skydivePlayerState.currentThrottle = MSG_PackUnsignedFloat(*(float *)&_XMM0, *(float *)&_XMM1, 0xAu);
  *(double *)&_XMM0 = BG_Skydive_GetNormalizedPitch(ps);
  __asm
  {
    vmovaps xmm3, xmm10; crossSectionalArea
    vmovss  dword ptr [rsp+0C8h+fmt], xmm0
    vmovss  dword ptr [rsp+0C8h+acceleration], xmm9
    vmovss  dword ptr [rsp+0C8h+acceleration+4], xmm9
    vmovss  dword ptr [rsp+0C8h+acceleration+8], xmm9
  }
  PM_Skydive_ApplyLateralForces(pm, _RSI, _RBX, *(const float *)&_XMM3, fmt, &acceleration);
  __asm { vmovaps xmm3, xmm10; crossSectionalArea }
  PM_Skydive_ApplyVerticalForces(pm, _RSI, _RBX, *(const float *)&_XMM3, &acceleration);
  PM_Skydive_Accelerate(pm, _RSI, _RBX, &acceleration);
  v29 = pm->ps;
  if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1127, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  switch ( v29->skydivePlayerState.state[0] )
  {
    case 1:
    case 5:
    case 6:
      PM_Skydive_UpdateAngles_Freefall(pm, _RSI);
      break;
    case 2:
    case 3:
      PM_Skydive_UpdateAngles_Parachute(pm, _RSI, &acceleration);
      break;
    default:
      PM_Skydive_UpdateAngles_BlendOut(pm, _RSI);
      break;
  }
  _R11 = &v39;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm9, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-40h]
    vmovaps xmm11, xmmword ptr [r11-50h]
  }
}

/*
==============
PM_Skydive_ApplyGlideForces
==============
*/
void PM_Skydive_ApplyGlideForces(pmove_t *pm, pml_t *pml, const SuitDef *suitDef, const float crossSectionalArea, const float pitchNormalized, vec3_t *outAcceleration)
{
  int v21; 
  RumbleGraph *skydive_canopyTurnMultiplierPitchGraph; 
  RumbleGraph *skydive_canopyTurnMultiplierGraph; 
  RumbleGraph *skydive_canopyStickHorizForceGraph; 
  RumbleGraph *skydive_canopyLookHorizForceGraph; 
  bool v71; 
  bool v72; 
  bool v79; 
  bool v80; 
  bool v102; 
  bool v103; 
  bool v104; 
  __int64 v179; 
  double v180; 
  double v181; 
  double v182; 
  double v183; 
  int v185; 
  int v187; 
  int v188; 
  int v190; 
  int v191; 
  int v192; 
  bool v193; 
  int v197; 
  int v198; 
  int v199; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 
  char v202; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
    vmovaps xmmword ptr [rax-0D8h], xmm15
  }
  _RDI = outAcceleration;
  _RBX = suitDef;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 86, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RBP = pm->ps;
  if ( !_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 86, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 88, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  if ( !_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 77, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v21 = (unsigned __int8)_RBP->skydivePlayerState.state[0];
  v193 = (unsigned __int8)(v21 - 2) <= 2u;
  if ( v21 != 1 )
  {
    if ( v21 == 2 || v21 == 3 )
    {
      __asm
      {
        vmovss  xmm2, cs:__real@421d7ae1
        vmovss  xmm14, cs:__real@3f800000
        vdivss  xmm3, xmm14, dword ptr [rbx+3B0h]
        vmulss  xmm0, xmm3, dword ptr [rbx+58Ch]
        vmulss  xmm1, xmm3, dword ptr [rbx+5A4h]
      }
      skydive_canopyLookHorizForceGraph = _RBX->skydive_canopyLookHorizForceGraph;
      skydive_canopyStickHorizForceGraph = _RBX->skydive_canopyStickHorizForceGraph;
      __asm
      {
        vmovss  xmm8, dword ptr [rbx+608h]
        vmovss  xmm9, dword ptr [rbx+60Ch]
      }
      skydive_canopyTurnMultiplierGraph = _RBX->skydive_canopyTurnMultiplierGraph;
      __asm
      {
        vmovss  xmm10, dword ptr [rbx+618h]
        vmovss  xmm12, dword ptr [rbx+61Ch]
      }
      skydive_canopyTurnMultiplierPitchGraph = _RBX->skydive_canopyTurnMultiplierPitchGraph;
      __asm
      {
        vmulss  xmm11, xmm0, xmm2
        vmulss  xmm0, xmm3, dword ptr [rbx+590h]
        vmulss  xmm15, xmm0, xmm2
        vmulss  xmm0, xmm3, dword ptr [rbx+5A0h]
        vmulss  xmm13, xmm0, xmm2
        vmulss  xmm0, xmm1, xmm2
        vmulss  xmm1, xmm3, dword ptr [rbx+604h]
        vmovss  [rsp+198h+var_140], xmm0
        vmulss  xmm0, xmm3, dword ptr [rbx+600h]
      }
      goto LABEL_21;
    }
    if ( v21 != 5 && v21 != 6 )
    {
      LODWORD(v179) = (unsigned __int8)_RBP->skydivePlayerState.state[0];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 147, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled skydive state %d while retrieving suit field values.", v179) )
        __debugbreak();
    }
  }
  __asm
  {
    vmovss  xmm2, cs:__real@421d7ae1
    vmovss  xmm14, cs:__real@3f800000
    vdivss  xmm3, xmm14, dword ptr [rbx+3B0h]
    vmulss  xmm0, xmm3, dword ptr [rbx+43Ch]
    vmulss  xmm1, xmm3, dword ptr [rbx+454h]
  }
  skydive_canopyTurnMultiplierPitchGraph = _RBX->skydive_freefallTurnMultiplierPitchGraph;
  __asm
  {
    vmovss  xmm12, dword ptr [rbx+4CCh]
    vmovss  xmm10, dword ptr [rbx+4C8h]
  }
  skydive_canopyTurnMultiplierGraph = _RBX->skydive_freefallTurnMultiplierGraph;
  __asm
  {
    vmovss  xmm9, dword ptr [rbx+4BCh]
    vmovss  xmm8, dword ptr [rbx+4B8h]
  }
  skydive_canopyStickHorizForceGraph = _RBX->skydive_freefallStickHorizForceGraph;
  skydive_canopyLookHorizForceGraph = _RBX->skydive_freefallLookHorizForceGraph;
  __asm
  {
    vmulss  xmm11, xmm0, xmm2
    vmulss  xmm0, xmm3, dword ptr [rbx+440h]
    vmulss  xmm15, xmm0, xmm2
    vmulss  xmm0, xmm3, dword ptr [rbx+450h]
    vmulss  xmm13, xmm0, xmm2
    vmulss  xmm0, xmm1, xmm2
    vmulss  xmm1, xmm3, dword ptr [rbx+4B4h]
    vmovss  [rsp+198h+var_140], xmm0
    vmulss  xmm0, xmm3, dword ptr [rbx+4B0h]
  }
LABEL_21:
  __asm
  {
    vmulss  xmm0, xmm0, xmm2
    vmovss  [rsp+198h+var_138], xmm0
    vmulss  xmm0, xmm1, xmm2
    vmovss  xmm1, dword ptr [rbp+3Ch]; X
    vmovss  [rsp+198h+var_13C], xmm0
    vmovss  xmm0, dword ptr [rbp+40h]; Y
  }
  *(float *)&_XMM0 = atan2f_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmulss  xmm3, xmm0, cs:__real@3e22f983
    vaddss  xmm1, xmm3, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm2, xmm0, xmm1
    vmovss  xmm1, dword ptr [rbp+1DCh]
    vmulss  xmm5, xmm1, cs:__real@3b360b61
    vxorps  xmm4, xmm4, xmm4
    vroundss xmm0, xmm4, xmm2, 1
    vsubss  xmm0, xmm3, xmm0
    vaddss  xmm3, xmm5, cs:__real@3f000000
    vmulss  xmm0, xmm0, cs:__real@43b40000; angle1
    vroundss xmm4, xmm4, xmm3, 1
    vsubss  xmm1, xmm5, xmm4
    vmulss  xmm1, xmm1, cs:__real@43b40000; angle2
    vmovss  [rsp+198h+var_148], xmm1
  }
  *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
  __asm
  {
    vandps  xmm2, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff; dist
    vmovss  xmm1, cs:__real@43340000; max
    vxorps  xmm0, xmm0, xmm0; min
    vxorps  xmm6, xmm6, xmm6
  }
  *(double *)&_XMM0 = I_fdistnormalized(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovaps xmm7, xmm0 }
  if ( !skydive_canopyTurnMultiplierGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 169, ASSERT_TYPE_ASSERT, "( turnMultiplierGraph )", "Suit %s does not define Turn Multiplier Graph. This is a required field!", _RBX->name) )
    __debugbreak();
  __asm
  {
    vcomiss xmm9, xmm8
    vmovaps xmm2, xmm7; fraction
  }
  *(double *)&_XMM0 = GraphGetValueFromFraction(skydive_canopyTurnMultiplierGraph->knotCount, skydive_canopyTurnMultiplierGraph->knots, *(const float *)&_XMM2);
  __asm
  {
    vsubss  xmm1, xmm9, xmm8
    vmulss  xmm0, xmm0, xmm1
    vaddss  xmm7, xmm0, xmm8
    vmovss  [rsp+198h+var_130], xmm7
  }
  v71 = (v198 & 0x7F800000u) < 0x7F800000;
  if ( (v198 & 0x7F800000) == 2139095040 )
  {
    v72 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 172, ASSERT_TYPE_SANITY, "( !IS_NAN( turnMultiplier ) )", (const char *)&queryFormat, "!IS_NAN( turnMultiplier )");
    v71 = 0;
    if ( v72 )
      __debugbreak();
  }
  __asm
  {
    vcomiss xmm7, xmm6
    vxorpd  xmm8, xmm8, xmm8
  }
  if ( v71 )
  {
    __asm
    {
      vmovsd  [rsp+198h+var_158], xmm8
      vcvtss2sd xmm0, xmm7, xmm7
      vmovsd  [rsp+198h+var_160], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 173, ASSERT_TYPE_ASSERT, "( turnMultiplier ) >= ( 0.0f )", "%s >= %s\n\t%g, %g", "turnMultiplier", "0.0f", v180, v182) )
      __debugbreak();
  }
  if ( !skydive_canopyTurnMultiplierPitchGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 175, ASSERT_TYPE_ASSERT, "( turnMultiplierPitchGraph )", "Suit %s does not define Turn Multiplier Pitch Scale Graph. This is a required field!", _RBX->name) )
    __debugbreak();
  __asm
  {
    vcomiss xmm12, xmm10
    vmovss  xmm9, [rsp+198h+pitchNormalized]
    vmovaps xmm2, xmm9; fraction
  }
  *(double *)&_XMM0 = GraphGetValueFromFraction(skydive_canopyTurnMultiplierPitchGraph->knotCount, skydive_canopyTurnMultiplierPitchGraph->knots, *(const float *)&_XMM2);
  __asm
  {
    vsubss  xmm1, xmm12, xmm10
    vmulss  xmm0, xmm0, xmm1
    vaddss  xmm7, xmm0, xmm10
    vmovss  [rsp+198h+var_134], xmm7
  }
  v79 = (v197 & 0x7F800000u) < 0x7F800000;
  if ( (v197 & 0x7F800000) == 2139095040 )
  {
    v80 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 178, ASSERT_TYPE_SANITY, "( !IS_NAN( turnMultiplierPitchScale ) )", (const char *)&queryFormat, "!IS_NAN( turnMultiplierPitchScale )");
    v79 = 0;
    if ( v80 )
      __debugbreak();
  }
  __asm { vcomiss xmm7, xmm6 }
  if ( v79 )
  {
    __asm
    {
      vmovsd  [rsp+198h+var_158], xmm8
      vcvtss2sd xmm0, xmm7, xmm7
      vmovsd  [rsp+198h+var_160], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 179, ASSERT_TYPE_ASSERT, "( turnMultiplierPitchScale ) >= ( 0.0f )", "%s >= %s\n\t%g, %g", "turnMultiplierPitchScale", "0.0f", v181, v183) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, [rsp+198h+var_148]
    vmovss  dword ptr [rsp+198h+angles+4], xmm0
    vmovss  dword ptr [rsp+198h+angles], xmm6
    vmovss  dword ptr [rsp+198h+angles+8], xmm6
  }
  AnglesToAxis(&angles, &axis);
  if ( !skydive_canopyLookHorizForceGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 186, ASSERT_TYPE_ASSERT, "( lookHorizAccelerationGraph )", "Suit %s does not define Horizontal Look Force Graph. This is a required field!", _RBX->name) )
    __debugbreak();
  __asm
  {
    vcomiss xmm15, xmm11
    vmovaps xmm2, xmm9; fraction
  }
  *(double *)&_XMM0 = GraphGetValueFromFraction(skydive_canopyLookHorizForceGraph->knotCount, skydive_canopyLookHorizForceGraph->knots, *(const float *)&_XMM2);
  __asm
  {
    vsubss  xmm1, xmm15, xmm11
    vmulss  xmm0, xmm0, xmm1
    vaddss  xmm8, xmm0, xmm11
    vmovss  [rsp+198h+var_148], xmm8
  }
  if ( (v185 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 189, ASSERT_TYPE_SANITY, "( !IS_NAN( lookBasedAcceleration ) )", (const char *)&queryFormat, "!IS_NAN( lookBasedAcceleration )") )
    __debugbreak();
  v199 = *(_QWORD *)&BG_GetStickCartesianCoords(pm->cmd.rightmove, pm->cmd.forwardmove);
  *(double *)&_XMM0 = BG_GetSkydiveCurrentThrottle(_RBP);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@40000000
    vsubss  xmm2, xmm1, xmm14
    vmaxss  xmm7, xmm2, xmm6
  }
  if ( !skydive_canopyStickHorizForceGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 198, ASSERT_TYPE_ASSERT, "( stickHorizAccelerationGraph )", "Suit %s does not define Horizontal Stick Force Graph. This is a required field!", _RBX->name) )
    __debugbreak();
  __asm
  {
    vmovss  xmm6, [rsp+198h+var_140]
    vcomiss xmm6, xmm13
  }
  _EBX = v193;
  _EAX = 0;
  __asm
  {
    vmovd   xmm0, ebx
    vmovd   xmm1, eax
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm7, xmm9, xmm2
    vmovaps xmm2, xmm0; fraction
    vmovss  [rsp+198h+var_148], xmm0
  }
  *(double *)&_XMM0 = GraphGetValueFromFraction(skydive_canopyStickHorizForceGraph->knotCount, skydive_canopyStickHorizForceGraph->knots, *(const float *)&_XMM2);
  __asm
  {
    vsubss  xmm1, xmm6, xmm13
    vmulss  xmm0, xmm0, xmm1
    vaddss  xmm6, xmm0, xmm13
  }
  if ( !v193 )
    __asm { vmulss  xmm6, xmm6, xmm7 }
  __asm { vmovss  [rsp+198h+var_148], xmm6 }
  if ( (v187 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 207, ASSERT_TYPE_SANITY, "( !IS_NAN( stickBasedAcceleration ) )", (const char *)&queryFormat, "!IS_NAN( stickBasedAcceleration )") )
    __debugbreak();
  __asm
  {
    vaddss  xmm6, xmm6, xmm8
    vmovss  [rsp+198h+var_148], xmm6
  }
  v102 = (v188 & 0x7F800000u) < 0x7F800000;
  v103 = (v188 & 0x7F800000u) <= 0x7F800000;
  if ( (v188 & 0x7F800000) == 2139095040 )
  {
    v104 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 211, ASSERT_TYPE_SANITY, "( !IS_NAN( forwardAcceleration ) )", (const char *)&queryFormat, "!IS_NAN( forwardAcceleration )");
    v102 = 0;
    v103 = !v104;
    if ( v104 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm15, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovsd  xmm9, cs:__real@3eb0c6f7a0b5ed8d
    vmovss  xmm10, dword ptr cs:__xmm@80000000800000008000000080000000
    vandps  xmm0, xmm6, xmm15
    vcvtss2sd xmm1, xmm0, xmm0
    vcomisd xmm1, xmm9
  }
  if ( !v103 )
  {
    __asm
    {
      vmovss  xmm3, dword ptr [rbp+3Ch]
      vmovss  xmm4, dword ptr [rbp+40h]
      vmovss  xmm12, dword ptr [rsp+198h+axis]
      vmovss  xmm13, dword ptr [rsp+198h+axis+4]
      vmulss  xmm11, xmm6, dword ptr [rsp+198h+axis+8]
      vmulss  xmm1, xmm4, xmm4
      vmulss  xmm0, xmm3, xmm3
      vaddss  xmm1, xmm1, xmm0
      vsqrtss xmm2, xmm1, xmm1
      vcmpless xmm0, xmm2, cs:__real@80000000
      vblendvps xmm1, xmm2, xmm14, xmm0
      vdivss  xmm0, xmm14, xmm1
      vmulss  xmm5, xmm3, xmm0
      vmulss  xmm4, xmm4, xmm0
      vcvtss2sd xmm0, xmm2, xmm2
      vcomisd xmm0, xmm9
      vmulss  xmm8, xmm12, xmm6
      vmulss  xmm7, xmm13, xmm6
      vmovss  [rsp+198h+var_148], xmm1
      vmulss  xmm1, xmm4, xmm7
      vmulss  xmm0, xmm5, xmm8
      vaddss  xmm3, xmm1, xmm0
      vmulss  xmm1, xmm5, xmm12
      vmulss  xmm2, xmm4, xmm13
      vaddss  xmm0, xmm2, xmm1
      vcomiss xmm0, cs:dword_14503BB74
      vmulss  xmm6, xmm5, xmm3
      vmulss  xmm9, xmm3, xmm4
    }
    if ( v102 && pm->cmd.inputFromGamepad )
    {
      __asm
      {
        vandps  xmm3, xmm3, xmm15
        vminss  xmm0, xmm3, [rsp+198h+var_13C]
        vxorps  xmm1, xmm0, xmm10
        vmulss  xmm2, xmm5, xmm1
        vmulss  xmm3, xmm1, xmm4
      }
    }
    else
    {
      __asm
      {
        vmovaps xmm2, xmm6
        vmovaps xmm3, xmm9
      }
    }
    __asm
    {
      vaddss  xmm4, xmm3, dword ptr [rdi+4]
      vaddss  xmm2, xmm2, dword ptr [rdi]
      vmovss  xmm0, [rsp+198h+var_134]
      vmulss  xmm3, xmm0, [rsp+198h+var_130]
      vsubss  xmm0, xmm8, xmm6
      vmulss  xmm1, xmm0, xmm3
      vaddss  xmm2, xmm1, xmm2
      vsubss  xmm0, xmm7, xmm9
      vmulss  xmm1, xmm0, xmm3
      vmovss  dword ptr [rdi], xmm2
      vaddss  xmm2, xmm1, xmm4
      vmulss  xmm0, xmm11, xmm3
      vaddss  xmm1, xmm0, dword ptr [rdi+8]
      vmovss  dword ptr [rdi+8], xmm1
      vmovss  dword ptr [rdi+4], xmm2
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+198h+var_128]
    vmulss  xmm1, xmm0, [rsp+198h+var_138]
    vxorps  xmm3, xmm1, xmm10
    vmulss  xmm2, xmm3, dword ptr [rsp+198h+axis+0Ch]
    vaddss  xmm4, xmm2, dword ptr [rdi]
    vmulss  xmm0, xmm3, dword ptr [rsp+198h+axis+10h]
    vaddss  xmm1, xmm0, dword ptr [rdi+4]
    vmulss  xmm0, xmm3, dword ptr [rsp+198h+axis+14h]
    vaddss  xmm2, xmm0, dword ptr [rdi+8]
    vmovss  [rsp+198h+var_148], xmm4
    vmovss  dword ptr [rdi], xmm4
    vmovss  dword ptr [rdi+4], xmm1
    vmovss  dword ptr [rdi+8], xmm2
  }
  if ( (v190 & 0x7F800000) == 2139095040 )
    goto LABEL_71;
  __asm { vmovss  [rsp+198h+var_148], xmm1 }
  if ( (v191 & 0x7F800000) == 2139095040 )
    goto LABEL_71;
  __asm { vmovss  [rsp+198h+var_148], xmm2 }
  if ( (v192 & 0x7F800000) == 2139095040 )
  {
LABEL_71:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 262, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outAcceleration )[0] ) && !IS_NAN( ( outAcceleration )[1] ) && !IS_NAN( ( outAcceleration )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outAcceleration )[0] ) && !IS_NAN( ( outAcceleration )[1] ) && !IS_NAN( ( outAcceleration )[2] )") )
      __debugbreak();
  }
  _R11 = &v202;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
PM_Skydive_ApplyLateralDrag
==============
*/

void __fastcall PM_Skydive_ApplyLateralDrag(pmove_t *pm, pml_t *pml, const SuitDef *suitDef, double crossSectionalArea, vec3_t *outAcceleration)
{
  bool v19; 
  bool v20; 
  char v35; 
  bool v40; 
  const dvar_t *v50; 
  double v66; 
  double v67; 
  double v68; 
  double v69; 
  int v70; 
  int v71; 
  int v72; 
  char v81; 

  _RDI = outAcceleration;
  __asm { vmovaps [rsp+108h+var_48], xmm7 }
  _RBP = pml;
  __asm
  {
    vmovaps [rsp+108h+var_88], xmm11
    vmovaps [rsp+108h+var_98], xmm12
    vmovaps [rsp+108h+var_A8], xmm13
    vmovaps xmm11, xmm3
  }
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 341, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RBX = pm->ps;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 341, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v19 = suitDef == NULL;
  if ( !suitDef )
  {
    v20 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 343, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef");
    v19 = !v20;
    if ( v20 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm2, dword ptr [rbx+3Ch]
    vmovss  xmm3, dword ptr [rbx+40h]
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm1, xmm1, xmm0
    vsqrtss xmm7, xmm1, xmm1
    vcmpless xmm0, xmm7, cs:__real@80000000
    vmovss  xmm1, cs:__real@3f800000
    vblendvps xmm0, xmm7, xmm1, xmm0
    vdivss  xmm1, xmm1, xmm0
    vcvtss2sd xmm0, xmm7, xmm7
    vcomisd xmm0, cs:__real@3eb0c6f7a0b5ed8d
    vmulss  xmm12, xmm2, xmm1
    vmulss  xmm13, xmm3, xmm1
  }
  if ( !v19 )
  {
    __asm
    {
      vmovaps [rsp+108h+var_38], xmm6
      vmovaps [rsp+108h+var_58], xmm8
      vmovaps [rsp+108h+var_68], xmm9
      vmulss  xmm9, xmm7, cs:__real@3cd013a9
      vmovaps [rsp+108h+var_78], xmm10
    }
    *(double *)&_XMM0 = BG_Skydive_CalculateEffectiveHorizontalDragCoefficient(_RBX);
    __asm
    {
      vxorps  xmm8, xmm8, xmm8
      vcomiss xmm0, xmm8
      vmovaps xmm6, xmm0
      vxorpd  xmm10, xmm10, xmm10
    }
    if ( v35 )
    {
      __asm
      {
        vmovsd  [rsp+108h+var_C8], xmm10
        vcvtss2sd xmm1, xmm6, xmm0
        vmovsd  [rsp+108h+var_D0], xmm1
      }
      v40 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 361, ASSERT_TYPE_ASSERT, "( effectiveDragCoef ) >= ( 0.0f )", "%s >= %s\n\t%g, %g", "effectiveDragCoef", "0.0f", v66, v68);
      v35 = 0;
      if ( v40 )
        __debugbreak();
    }
    __asm
    {
      vmulss  xmm0, xmm6, cs:__real@3f1ccccd
      vmulss  xmm1, xmm0, xmm11
      vmulss  xmm2, xmm1, xmm9
      vmulss  xmm3, xmm2, xmm9
      vdivss  xmm0, xmm3, dword ptr [rsi+3B0h]
      vmulss  xmm6, xmm0, cs:__real@421d7ae1
      vmovaps xmm9, [rsp+108h+var_68]
      vcomiss xmm6, xmm8
      vmovaps xmm8, [rsp+108h+var_58]
    }
    if ( v35 )
    {
      __asm
      {
        vmovsd  [rsp+108h+var_C8], xmm10
        vcvtss2sd xmm0, xmm6, xmm6
        vmovsd  [rsp+108h+var_D0], xmm0
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 364, ASSERT_TYPE_ASSERT, "( dragAcceleration ) >= ( 0.0f )", "%s >= %s\n\t%g, %g", "dragAcceleration", "0.0f", v67, v69) )
        __debugbreak();
    }
    v50 = DVARBOOL_skydive_enable_drag_acceleration_fix;
    __asm { vmovaps xmm10, [rsp+108h+var_78] }
    if ( !DVARBOOL_skydive_enable_drag_acceleration_fix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_enable_drag_acceleration_fix") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v50);
    if ( v50->current.enabled )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rbp+24h]
        vmulss  xmm0, xmm1, xmm6
        vcomiss xmm0, xmm7
      }
      if ( v50->current.enabled )
        __asm { vdivss  xmm6, xmm7, xmm1 }
    }
    __asm
    {
      vxorps  xmm1, xmm6, cs:__xmm@80000000800000008000000080000000
      vmovaps xmm6, [rsp+108h+var_38]
      vmulss  xmm0, xmm12, xmm1
      vaddss  xmm2, xmm0, dword ptr [rdi]
      vmulss  xmm0, xmm13, xmm1
      vaddss  xmm3, xmm0, dword ptr [rdi+4]
      vmovss  xmm0, dword ptr [rdi+8]
      vmovss  [rsp+108h+var_B8], xmm2
      vmovss  dword ptr [rdi], xmm2
      vmovss  dword ptr [rdi+4], xmm3
      vmovss  dword ptr [rdi+8], xmm0
    }
    if ( (v70 & 0x7F800000) == 2139095040 )
      goto LABEL_31;
    __asm { vmovss  [rsp+108h+var_B8], xmm3 }
    if ( (v71 & 0x7F800000) == 2139095040 )
      goto LABEL_31;
    __asm { vmovss  [rsp+108h+var_B8], xmm0 }
    if ( (v72 & 0x7F800000) == 2139095040 )
    {
LABEL_31:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 378, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outAcceleration )[0] ) && !IS_NAN( ( outAcceleration )[1] ) && !IS_NAN( ( outAcceleration )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outAcceleration )[0] ) && !IS_NAN( ( outAcceleration )[1] ) && !IS_NAN( ( outAcceleration )[2] )") )
        __debugbreak();
    }
  }
  _R11 = &v81;
  __asm
  {
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
  }
}

/*
==============
PM_Skydive_ApplyLateralForces
==============
*/

void __fastcall PM_Skydive_ApplyLateralForces(pmove_t *pm, pml_t *pml, const SuitDef *suitDef, double crossSectionalArea, const float pitchNormalized, vec3_t *outAcceleration)
{
  float fmt; 
  int outAccelerationa; 
  int outAccelerationb; 
  int outAccelerationc; 
  int outAccelerationd; 
  int outAcceleratione; 
  int outAccelerationf; 
  int outAccelerationg; 
  int outAccelerationh; 
  int outAccelerationi; 

  __asm
  {
    vmovaps [rsp+58h+var_28], xmm6
    vmovaps xmm6, xmm3
  }
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 384, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RBX = pm->ps;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 384, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !suitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 386, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  _RDI = outAcceleration;
  if ( _RBX->skydivePlayerState.state[0] != 2 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+58h+pitchNormalized]
      vmovaps xmm3, xmm6; crossSectionalArea
      vmovss  dword ptr [rsp+58h+fmt], xmm0
    }
    PM_Skydive_ApplyGlideForces(pm, pml, suitDef, *(const float *)&_XMM3, fmt, outAcceleration);
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+30h]
    vmovss  dword ptr [rsp+58h+outAcceleration], xmm0
  }
  if ( (outAccelerationa & 0x7F800000) == 2139095040 )
    goto LABEL_30;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+34h]
    vmovss  dword ptr [rsp+58h+outAcceleration], xmm0
  }
  if ( (outAccelerationb & 0x7F800000) == 2139095040 )
    goto LABEL_30;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+38h]
    vmovss  dword ptr [rsp+58h+outAcceleration], xmm0
  }
  if ( (outAccelerationc & 0x7F800000) == 2139095040 )
  {
LABEL_30:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 396, ASSERT_TYPE_SANITY, "( !IS_NAN( ( ps->origin )[0] ) && !IS_NAN( ( ps->origin )[1] ) && !IS_NAN( ( ps->origin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( ps->origin )[0] ) && !IS_NAN( ( ps->origin )[1] ) && !IS_NAN( ( ps->origin )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+3Ch]
    vmovss  dword ptr [rsp+58h+outAcceleration], xmm0
  }
  if ( (outAccelerationd & 0x7F800000) == 2139095040 )
    goto LABEL_31;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+40h]
    vmovss  dword ptr [rsp+58h+outAcceleration], xmm0
  }
  if ( (outAcceleratione & 0x7F800000) == 2139095040 )
    goto LABEL_31;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+44h]
    vmovss  dword ptr [rsp+58h+outAcceleration], xmm0
  }
  if ( (outAccelerationf & 0x7F800000) == 2139095040 )
  {
LABEL_31:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 397, ASSERT_TYPE_SANITY, "( !IS_NAN( ( ps->velocity )[0] ) && !IS_NAN( ( ps->velocity )[1] ) && !IS_NAN( ( ps->velocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( ps->velocity )[0] ) && !IS_NAN( ( ps->velocity )[1] ) && !IS_NAN( ( ps->velocity )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  dword ptr [rsp+58h+outAcceleration], xmm0
  }
  if ( (outAccelerationg & 0x7F800000) == 2139095040 )
    goto LABEL_32;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vmovss  dword ptr [rsp+58h+outAcceleration], xmm0
  }
  if ( (outAccelerationh & 0x7F800000) == 2139095040 )
    goto LABEL_32;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  dword ptr [rsp+58h+outAcceleration], xmm0
  }
  if ( (outAccelerationi & 0x7F800000) == 2139095040 )
  {
LABEL_32:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 398, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outAcceleration )[0] ) && !IS_NAN( ( outAcceleration )[1] ) && !IS_NAN( ( outAcceleration )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outAcceleration )[0] ) && !IS_NAN( ( outAcceleration )[1] ) && !IS_NAN( ( outAcceleration )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm3, xmm6
    vmovaps xmm6, [rsp+58h+var_28]
  }
  PM_Skydive_ApplyLateralDrag(pm, pml, suitDef, *(double *)&_XMM3, _RDI);
}

/*
==============
PM_Skydive_ApplyVerticalForces
==============
*/

void __fastcall PM_Skydive_ApplyVerticalForces(pmove_t *pm, pml_t *pml, const SuitDef *suitDef, double crossSectionalArea, vec3_t *outAcceleration)
{
  bool v16; 
  bool v17; 
  char v30; 
  bool v35; 
  const dvar_t *v44; 
  double v63; 
  double v64; 
  double v65; 
  double v66; 
  char v70; 
  void *retaddr; 
  int outAccelerationa; 
  int outAccelerationb; 
  int outAccelerationc; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-38h], xmm7 }
  _RSI = suitDef;
  __asm { vmovaps xmmword ptr [rax-68h], xmm10 }
  _R14 = pml;
  __asm { vmovaps xmm10, xmm3 }
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 512, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RBP = pm->ps;
  if ( !_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 512, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v16 = _RSI == NULL;
  if ( !_RSI )
  {
    v17 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 513, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef");
    v16 = !v17;
    if ( v17 )
      __debugbreak();
  }
  _RDI = outAcceleration;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+3B4h]
    vmulss  xmm3, xmm0, cs:__real@c21d7ae1
    vmulss  xmm1, xmm3, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
    vaddss  xmm0, xmm1, dword ptr [rdi]
    vmovss  dword ptr [rdi], xmm0
    vmulss  xmm0, xmm3, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
    vaddss  xmm2, xmm0, dword ptr [rdi+4]
    vmovss  dword ptr [rdi+4], xmm2
    vmulss  xmm1, xmm3, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
    vaddss  xmm2, xmm1, dword ptr [rdi+8]
    vmovss  dword ptr [rdi+8], xmm2
    vmovss  xmm7, dword ptr [rbp+44h]
    vandps  xmm7, xmm7, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcvtss2sd xmm0, xmm7, xmm7
    vcomisd xmm0, cs:__real@3eb0c6f7a0b5ed8d
  }
  if ( !v16 )
  {
    __asm
    {
      vmovaps [rsp+0B8h+var_28], xmm6
      vmovaps [rsp+0B8h+var_48], xmm8
      vmovaps [rsp+0B8h+var_58], xmm9
    }
    *(double *)&_XMM0 = BG_Skydive_CalculateEffectiveVerticalDragCoefficient(_RBP);
    __asm
    {
      vxorps  xmm9, xmm9, xmm9
      vcomiss xmm0, xmm9
      vmovaps xmm6, xmm0
      vxorpd  xmm8, xmm8, xmm8
    }
    if ( v30 )
    {
      __asm
      {
        vmovsd  [rsp+0B8h+var_78], xmm8
        vcvtss2sd xmm1, xmm6, xmm0
        vmovsd  [rsp+0B8h+var_80], xmm1
      }
      v35 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 528, ASSERT_TYPE_ASSERT, "( effectiveDragCoef ) >= ( 0.0f )", "%s >= %s\n\t%g, %g", "effectiveDragCoef", "0.0f", v63, v65);
      v30 = 0;
      if ( v35 )
        __debugbreak();
    }
    __asm
    {
      vmulss  xmm0, xmm6, cs:__real@3f1ccccd
      vmulss  xmm3, xmm7, cs:__real@3cd013a9
      vmulss  xmm1, xmm0, xmm10
      vmulss  xmm2, xmm1, xmm3
      vmulss  xmm3, xmm2, xmm3
      vdivss  xmm0, xmm3, dword ptr [rsi+3B0h]
      vmulss  xmm6, xmm0, cs:__real@421d7ae1
      vcomiss xmm6, xmm9
    }
    if ( v30 )
    {
      __asm
      {
        vmovsd  [rsp+0B8h+var_78], xmm8
        vcvtss2sd xmm0, xmm6, xmm6
        vmovsd  [rsp+0B8h+var_80], xmm0
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 533, ASSERT_TYPE_ASSERT, "( dragAcceleration ) >= ( 0.0f )", "%s >= %s\n\t%g, %g", "dragAcceleration", "0.0f", v64, v66) )
        __debugbreak();
    }
    v44 = DVARBOOL_skydive_enable_drag_acceleration_fix;
    __asm { vmovaps xmm8, [rsp+0B8h+var_48] }
    if ( !DVARBOOL_skydive_enable_drag_acceleration_fix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_enable_drag_acceleration_fix") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v44);
    if ( v44->current.enabled )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [r14+24h]
        vmulss  xmm0, xmm1, xmm6
        vcomiss xmm0, xmm7
      }
      if ( v44->current.enabled )
        __asm { vdivss  xmm6, xmm7, xmm1 }
    }
    __asm
    {
      vcmpless xmm0, xmm9, dword ptr [rbp+44h]
      vxorps  xmm1, xmm6, cs:__xmm@80000000800000008000000080000000
      vmovaps xmm9, [rsp+0B8h+var_58]
      vblendvps xmm0, xmm1, xmm6, xmm0
      vxorps  xmm3, xmm0, cs:__xmm@80000000800000008000000080000000
      vmulss  xmm1, xmm3, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
      vaddss  xmm4, xmm1, dword ptr [rdi]
      vmovaps xmm6, [rsp+0B8h+var_28]
      vmovss  dword ptr [rdi], xmm4
      vmulss  xmm1, xmm3, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
      vaddss  xmm5, xmm1, dword ptr [rdi+4]
      vmovss  dword ptr [rsp+0B8h+outAcceleration], xmm4
      vmovss  dword ptr [rdi+4], xmm5
      vmulss  xmm1, xmm3, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
      vaddss  xmm2, xmm1, dword ptr [rdi+8]
      vmovss  dword ptr [rdi+8], xmm2
    }
    if ( (outAccelerationa & 0x7F800000) == 2139095040 )
      goto LABEL_31;
    __asm { vmovss  dword ptr [rsp+0B8h+outAcceleration], xmm5 }
    if ( (outAccelerationb & 0x7F800000) == 2139095040 )
      goto LABEL_31;
    __asm { vmovss  dword ptr [rsp+0B8h+outAcceleration], xmm2 }
    if ( (outAccelerationc & 0x7F800000) == 2139095040 )
    {
LABEL_31:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 547, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outAcceleration )[0] ) && !IS_NAN( ( outAcceleration )[1] ) && !IS_NAN( ( outAcceleration )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outAcceleration )[0] ) && !IS_NAN( ( outAcceleration )[1] ) && !IS_NAN( ( outAcceleration )[2] )") )
        __debugbreak();
    }
  }
  _R11 = &v70;
  __asm
  {
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
}

/*
==============
PM_Skydive_BaseJump_Check
==============
*/
bool PM_Skydive_BaseJump_Check(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  char v14; 
  bool v16; 
  bool v17; 
  bool v20; 
  bool v21; 
  Bounds *v24; 
  const BgHandler *m_bgHandler; 
  const BgPlayerTraceInfo *v42; 
  const BgHandler *v43; 
  Physics_WorldId v44; 
  const dvar_t *v52; 
  bool enabled; 
  char v56; 
  bool v57; 
  int contentMask; 
  bool result; 
  float fmt; 
  BgTrace v74; 
  vec3_t vec; 
  vec3_t end; 
  vec3_t outTraceDir; 
  Bounds bounds; 
  trace_t results; 

  __asm { vmovaps [rsp+1D0h+var_70], xmm9 }
  _R14 = pml;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1801, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1801, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm
  {
    vmovaps [rsp+1D0h+var_40], xmm6
    vmovaps [rsp+1D0h+var_50], xmm7
    vmovaps [rsp+1D0h+var_80], xmm10
    vmovaps [rsp+1D0h+var_90], xmm11
    vmovaps [rsp+1D0h+var_A0], xmm12
    vxorps  xmm9, xmm9, xmm9
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x13u) )
  {
    *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(&pm->refFrame, &ps->velocity);
    __asm { vcomiss xmm0, xmm9 }
    if ( !v14 )
      goto LABEL_40;
  }
  _RSI = BG_GetSuitDef(ps->suitIndex);
  v16 = _RSI == NULL;
  if ( !_RSI )
  {
    v17 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1814, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef");
    v16 = !v17;
    if ( v17 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm10, dword ptr [rsi+3C8h]
    vmovss  xmm11, dword ptr [rsi+3D4h]
    vcomiss xmm11, xmm10
  }
  if ( v16 )
  {
    v20 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1819, ASSERT_TYPE_ASSERT, "( forceFreefallHeight > baseJumpMinimumHeight )", "forceFreefallHeight must be greater than baseJumpMinimumHeight");
    v16 = !v20;
    if ( v20 )
      __debugbreak();
  }
  __asm { vcomiss xmm10, xmm9 }
  if ( v16 )
    goto LABEL_40;
  v21 = (char)ps->skydivePlayerState.flags[0] < 0;
  __asm { vmovaps [rsp+1D0h+var_60], xmm8 }
  if ( v21 )
  {
    _RSI = DCONST_DVARFLT_skydive_min_deploy_altitude;
    if ( !DCONST_DVARFLT_skydive_min_deploy_altitude && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_min_deploy_altitude") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+28h]
      vminss  xmm10, xmm0, xmm10
    }
  }
  v24 = pm->bounds;
  _RSI = &ps->origin;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  dword ptr [rsp+1D0h+vec], xmm0
    vmovss  xmm1, dword ptr [rsi+4]
    vmovss  dword ptr [rsp+1D0h+vec+4], xmm1
    vmovss  xmm0, dword ptr [rsi+8]
    vmovss  dword ptr [rsp+1D0h+vec+8], xmm0
  }
  *(double *)&_XMM0 = BG_PlayerCollision_GetCollisionStickLength(v24);
  __asm
  {
    vaddss  xmm8, xmm0, cs:__real@3e000000
    vmovaps xmm1, xmm8; height
  }
  WorldUpReferenceFrame::AddUpContribution(&pm->refFrame, *(float *)&_XMM1, &vec);
  __asm
  {
    vaddss  xmm7, xmm8, xmm11
    vaddss  xmm6, xmm8, xmm10
    vmovaps xmm1, xmm7; traceLength
    vdivss  xmm12, xmm6, xmm7
  }
  PM_Skydive_GetBaseJumpTraceDir(ps, *(const float *)&_XMM1, &outTraceDir);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0D0h+outTraceDir]
    vaddss  xmm1, xmm0, dword ptr [rsp+1D0h+vec]
    vmovss  xmm2, dword ptr [rbp+0D0h+outTraceDir+4]
    vaddss  xmm0, xmm2, dword ptr [rsp+1D0h+vec+4]
  }
  m_bgHandler = pm->m_bgHandler;
  __asm
  {
    vmovss  dword ptr [rbp+0D0h+end], xmm1
    vmovss  xmm1, dword ptr [rbp+0D0h+outTraceDir+8]
    vaddss  xmm2, xmm1, dword ptr [rsp+1D0h+vec+8]
    vmovss  dword ptr [rbp+0D0h+end+8], xmm2
    vmovss  dword ptr [rbp+0D0h+end+4], xmm0
  }
  v42 = m_bgHandler->GetPlayerTraceInfo(m_bgHandler, ps->clientNum);
  BgTrace::BgTrace(&v74, v42);
  v43 = pm->m_bgHandler;
  v74.m_flags |= 0x80u;
  v44 = v43->GetPhysicsWorldId((BgHandler *)v43);
  BgTrace::LegacyTraceHandler(&v74, v44, &results, &vec, &end, &bounds_origin, ps->clientNum, pm->tracemask, ps);
  v74.m_flags &= ~0x80u;
  __asm { vmovss  dword ptr [rsp+1D0h+fmt], xmm6 }
  PM_Skydive_ValidateGroundTrace(pm, _R14, &vec, &end, fmt, &results);
  __asm
  {
    vmovss  xmm2, [rbp+0D0h+results.fraction]
    vmulss  xmm0, xmm2, xmm7
    vmovss  xmm7, cs:__real@3f800000
    vucomiss xmm2, xmm7
    vsubss  xmm1, xmm0, xmm8
    vmovaps xmm8, [rsp+1D0h+var_60]
    vmaxss  xmm1, xmm1, xmm9
  }
  if ( v16 )
  {
    __asm { vmovaps xmm1, xmm11 }
    ((void (__fastcall *)(pmove_t *))pm->SetSkydiveBasejumpGroundHeight)(pm);
    v52 = DVARBOOL_skydive_always_weapon_raise;
    if ( !DVARBOOL_skydive_always_weapon_raise && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_always_weapon_raise") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v52);
    enabled = v52->current.enabled;
    _RSI = DVARFLT_skydive_freefall_velocity;
    if ( !DVARFLT_skydive_freefall_velocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_freefall_velocity") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+28h]
      vcomiss xmm0, dword ptr [r14+38h]
    }
    v56 = ps->skydivePlayerState.state[0];
    v57 = v14 | v16 && v56 == 5;
    if ( !enabled || v57 || v56 != 5 )
      PM_Skydive_Freefall_Begin(pm, _R14);
    goto LABEL_40;
  }
  if ( results.startsolid )
  {
    __asm { vxorps  xmm1, xmm1, xmm1 }
    ((void (__fastcall *)(pmove_t *))pm->SetSkydiveBasejumpGroundHeight)(pm);
    ps->pm_flags.m_flags[1] &= ~0x80000u;
    goto LABEL_40;
  }
  __asm { vcomiss xmm2, xmm12 }
  ((void (__fastcall *)(pmove_t *))pm->SetSkydiveBasejumpGroundHeight)(pm);
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_skydive_base_jump_trace_clearance_sphere_radius, "skydive_base_jump_trace_clearance_sphere_radius");
  __asm
  {
    vmovss  xmm1, dword ptr [rsi]
    vmovss  dword ptr [rbp+0D0h+end], xmm1
    vmovss  xmm2, dword ptr [rsi+4]
    vmovss  dword ptr [rbp+0D0h+end+4], xmm2
    vmovss  xmm1, dword ptr [rsi+8]
    vmovss  dword ptr [rbp+0D0h+end+8], xmm1
    vxorps  xmm1, xmm10, cs:__xmm@80000000800000008000000080000000; height
    vmovaps xmm6, xmm0
  }
  WorldUpReferenceFrame::AddUpContribution(&pm->refFrame, *(float *)&_XMM1, &end);
  contentMask = pm->tracemask;
  v74.m_flags |= 0x80u;
  __asm
  {
    vmovss  dword ptr [rbp+0D0h+var_130.midPoint], xmm9
    vmovss  dword ptr [rbp+0D0h+var_130.midPoint+4], xmm9
    vmovss  dword ptr [rbp+0D0h+var_130.midPoint+8], xmm9
    vmovss  dword ptr [rbp+0D0h+var_130.halfSize], xmm6
    vmovss  dword ptr [rbp+0D0h+var_130.halfSize+4], xmm6
    vmovss  dword ptr [rbp+0D0h+var_130.halfSize+8], xmm6
  }
  BgTrace::LegacyTraceHandler(&v74, v44, &results, &ps->origin, &ps->origin, &bounds, ps->clientNum, contentMask, ps);
  if ( results.startsolid )
  {
LABEL_40:
    result = 0;
    goto LABEL_41;
  }
  __asm
  {
    vmovss  xmm0, [rbp+0D0h+results.fraction]
    vcomiss xmm0, xmm7
  }
  result = 1;
LABEL_41:
  __asm
  {
    vmovaps xmm12, [rsp+1D0h+var_A0]
    vmovaps xmm11, [rsp+1D0h+var_90]
    vmovaps xmm10, [rsp+1D0h+var_80]
    vmovaps xmm7, [rsp+1D0h+var_50]
    vmovaps xmm6, [rsp+1D0h+var_40]
    vmovaps xmm9, [rsp+1D0h+var_70]
  }
  return result;
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

  _RSI = pml;
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
  PM_Skydive_PerformTrace(pm, _RSI, FREEFALL_DEPLOY_MIN, 1);
  if ( _RSI->skydiveTrace.startsolid )
    goto LABEL_15;
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vucomiss xmm0, dword ptr [rsi+250h]
  }
  if ( !_RSI->skydiveTrace.startsolid )
LABEL_15:
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
  const dvar_t *v6; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v8; 
  int v9; 
  bool v13; 
  const BgHandler *m_bgHandler; 
  playerState_s *v15; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2652, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2652, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v6 = DVARBOOL_skydive_always_weapon_raise;
  if ( !DVARBOOL_skydive_always_weapon_raise && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_always_weapon_raise") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled )
  {
    if ( ps->skydivePlayerState.state[0] != 5 )
    {
      ps->skydivePlayerState.state[0] = 5;
      ps->skydivePlayerState.flags[0] &= ~0x20u;
      ps->skydivePlayerState.animState = 11;
      ps->cameraTypeIndex = 0;
      ps->pm_flags.m_flags[0] &= ~0x10000000u;
      CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
      v8 = BG_UsingAlternate(ps);
      v9 = BG_PlayerDualWielding(ps);
      ps->weapState[0].weaponState = 73;
      ps->weapState[0].weaponTime = BG_RaiseTime(ps, CurrentWeaponForPlayer, v8, v9 == 1);
      BG_SetWeaponDelay(pm->weaponMap, ps, WEAPON_HAND_DEFAULT, 0, NULL);
      PM_StartWeaponAnim(ps, WEAP_SKYDIVE_WEAPON_RAISE, WEAPON_HAND_DEFAULT);
      BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_RAISEWEAPON, 0, 0, &pml->holdrand);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rsi+53Ch]
        vmulss  xmm2, xmm0, cs:__real@3a83126f; weaponTimeSec
      }
      PM_Weapon_FireAnimScriptWeaponRaiseEventForTime(pm, pml, *(const float *)&_XMM2);
      BG_AddPredictableEventToPlayerstate(EV_SKYDIVE_END, 0, pm->cmd.serverTime, pm->weaponMap, ps);
      v13 = PM_IsInAir(pm);
      m_bgHandler = pm->m_bgHandler;
      if ( v13 )
        BG_AnimScriptAnimation(m_bgHandler, ps, AISTATE_COMBAT, ANIM_MT_AIR, 0, 0);
      else
        BG_AnimScriptAnimation(m_bgHandler, ps, AISTATE_COMBAT, ANIM_MT_IDLE, 0, pml->turning);
    }
  }
  else if ( (ps->skydivePlayerState.flags[0] & 0x20) != 0 )
  {
    ps->pm_flags.m_flags[1] &= ~0x8000u;
    ps->skydivePlayerState.state[0] = 1;
    v15 = pm->ps;
    if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2554, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    v15->weapState[0].weaponState = 65;
    v15->weapState[0].weaponTime = 0;
    BG_SetWeaponDelay(pm->weaponMap, v15, WEAPON_HAND_DEFAULT, 0, NULL);
    PM_StartWeaponAnim(v15, WEAP_SKYDIVE_FREEFALL_IDLE, WEAPON_HAND_DEFAULT);
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
  const dvar_t *v8; 
  char v9; 
  bool v10; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v12; 
  int v13; 
  PlayerAnimScriptMoveType v17; 
  int turning; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2565, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2565, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( ps->skydivePlayerState.state[0] != 6 )
    goto LABEL_14;
  v8 = DVARBOOL_killswitch_skydive_stuck_after_landing_fix_enabled;
  if ( !DVARBOOL_killswitch_skydive_stuck_after_landing_fix_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_skydive_stuck_after_landing_fix_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled && isLandingEndEvent && (unsigned int)(ps->pm_type - 7) > 1 )
  {
LABEL_14:
    v9 = ps->skydivePlayerState.state[0];
    if ( v9 && v9 != 5 )
    {
      v10 = (ps->skydivePlayerState.flagsExtra[0] & 0x10) == 0;
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
      v12 = BG_UsingAlternate(ps);
      v13 = BG_PlayerDualWielding(ps);
      ps->weapState[0].weaponState = 73;
      ps->weapState[0].weaponTime = BG_RaiseTime(ps, CurrentWeaponForPlayer, v12, v13 == 1);
      BG_SetWeaponDelay(pm->weaponMap, ps, WEAPON_HAND_DEFAULT, 0, NULL);
      PM_StartWeaponAnim(ps, WEAP_SKYDIVE_WEAPON_RAISE, WEAPON_HAND_DEFAULT);
      BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_RAISEWEAPON, 0, 0, &pml->holdrand);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rsi+53Ch]
        vmulss  xmm2, xmm0, cs:__real@3a83126f; weaponTimeSec
      }
      PM_Weapon_FireAnimScriptWeaponRaiseEventForTime(pm, pml, *(const float *)&_XMM2);
      BG_AddPredictableEventToPlayerstate(EV_SKYDIVE_END, 0, pm->cmd.serverTime, pm->weaponMap, ps);
      if ( PM_IsInAir(pm) )
      {
        v17 = ANIM_MT_AIR;
        turning = 0;
      }
      else
      {
        turning = pml->turning;
        v17 = ANIM_MT_IDLE;
      }
      BG_AnimScriptAnimation(pm->m_bgHandler, ps, AISTATE_COMBAT, v17, 0, turning);
      if ( v10 )
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

void __fastcall PM_Skydive_GetBaseJumpTraceDir(const playerState_s *ps, double traceLength, vec3_t *outTraceDir)
{
  bool v13; 
  bool v14; 
  char v18; 
  vec3_t forward; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 
  char v59; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
  }
  _RSI = outTraceDir;
  _RDI = ps;
  __asm { vmovaps xmm8, xmm1 }
  v13 = ps == NULL;
  if ( !ps )
  {
    v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1706, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps");
    v13 = !v14;
    if ( v14 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm9, xmm9, xmm9
    vcomiss xmm8, xmm9
  }
  if ( v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1707, ASSERT_TYPE_ASSERT, "(traceLength > 0.0f)", (const char *)&queryFormat, "traceLength > 0.0f") )
    __debugbreak();
  _RBX = DCONST_DVARFLT_skydive_base_jump_trace_speed_max;
  if ( !DCONST_DVARFLT_skydive_base_jump_trace_speed_max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_base_jump_trace_speed_max") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm11, dword ptr [rbx+28h]
    vcomiss xmm11, xmm9
  }
  if ( v18 | v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1710, ASSERT_TYPE_ASSERT, "(maxSpeedForMaxAngle > 0.0f)", (const char *)&queryFormat, "maxSpeedForMaxAngle > 0.0f") )
    __debugbreak();
  _RBX = DCONST_DVARFLT_skydive_base_jump_trace_angle_max;
  if ( !DCONST_DVARFLT_skydive_base_jump_trace_angle_max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_base_jump_trace_angle_max") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm10, dword ptr [rbx+28h]
    vmovss  xmm6, dword ptr [rdi+40h]
    vmovss  xmm7, dword ptr [rdi+3Ch]
  }
  AngleVectors(&_RDI->viewangles, &forward, NULL, NULL);
  __asm
  {
    vmulss  xmm1, xmm6, xmm6
    vmovss  xmm6, cs:__real@3f800000
    vmulss  xmm0, xmm7, xmm7
    vaddss  xmm1, xmm1, xmm0
    vsqrtss xmm2, xmm1, xmm1
    vmovss  xmm1, dword ptr [rsp+118h+forward]
    vminss  xmm3, xmm2, xmm11
    vmulss  xmm2, xmm1, dword ptr [rdi+3Ch]
    vdivss  xmm0, xmm3, xmm11
    vsubss  xmm5, xmm0, xmm6
    vmovss  xmm0, dword ptr [rsp+118h+forward+4]
    vmulss  xmm3, xmm0, dword ptr [rdi+40h]
    vmovss  xmm0, dword ptr [rsp+118h+forward+8]
    vmulss  xmm1, xmm0, dword ptr [rdi+44h]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmulss  xmm0, xmm5, xmm5
    vmulss  xmm1, xmm0, xmm5
    vcomiss xmm2, xmm9
    vaddss  xmm2, xmm1, xmm6
    vmulss  xmm3, xmm2, xmm10
  }
  if ( v18 )
  {
    __asm { vaddss  xmm1, xmm3, cs:__real@42b40000 }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, cs:__real@42b40000
      vsubss  xmm1, xmm0, xmm3
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+1DCh]
    vmovss  dword ptr [rsp+118h+angles+4], xmm0
    vmovss  dword ptr [rsp+118h+angles], xmm1
    vmovss  dword ptr [rsp+118h+angles+8], xmm9
  }
  AnglesToAxis(&angles, &axis);
  __asm
  {
    vmulss  xmm1, xmm8, dword ptr [rsp+118h+axis]
    vmulss  xmm0, xmm8, dword ptr [rsp+118h+axis+4]
    vmulss  xmm2, xmm8, dword ptr [rsp+118h+axis+8]
    vmovss  dword ptr [rsi], xmm1
    vmovss  dword ptr [rsi+4], xmm0
    vmovss  dword ptr [rsi+8], xmm2
  }
  _R11 = &v59;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
}

/*
==============
PM_Skydive_GetPitchAndRollFromInput
==============
*/
vec2_t PM_Skydive_GetPitchAndRollFromInput(const pmove_t *pm)
{
  int v25; 
  __int64 v27; 
  vec2_t StickCartesianCoords; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 983, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  v25 = *(_QWORD *)&BG_GetStickCartesianCoords(pm->cmd.yawmove, pm->cmd.pitchmove);
  StickCartesianCoords = BG_GetStickCartesianCoords(pm->cmd.rightmove, pm->cmd.forwardmove);
  LOBYTE(_EAX) = PM_Skydive_ShouldLockViewInput(pm);
  __asm { vmovss  xmm2, dword ptr [rsp+48h+arg_0] }
  _ECX = 0;
  _EAX = (unsigned __int8)_EAX;
  __asm
  {
    vmovd   xmm1, ecx
    vmovd   xmm0, eax
    vpcmpeqd xmm3, xmm0, xmm1
    vxorps  xmm4, xmm4, xmm4
    vblendvps xmm5, xmm4, xmm2, xmm3
    vandps  xmm0, xmm5, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:INPUT_THRESHOLD
    vmovss  xmm0, dword ptr [rsp+48h+arg_8]
    vxorps  xmm6, xmm0, cs:__xmm@80000000800000008000000080000000
    vmovss  xmm3, cs:__real@3f800000
    vmovss  xmm2, cs:__real@bf800000
    vcmpless xmm0, xmm4, xmm5
    vblendvps xmm1, xmm2, xmm3, xmm0
    vcmpless xmm0, xmm4, xmm6
    vblendvps xmm0, xmm2, xmm3, xmm0
    vucomiss xmm1, xmm0
    vmovss  dword ptr [rsp+48h+arg_0], xmm5
    vmovss  dword ptr [rsp+48h+arg_0], xmm6
    vmovss  xmm0, dword ptr [rsp+48h+arg_8+4]
    vmovaps xmm6, [rsp+48h+var_18]
    vmovss  dword ptr [rsp+48h+arg_0+4], xmm0
  }
  return (vec2_t)v27;
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
  char v8; 
  playerState_s *v9; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v11; 

  _RDI = pml;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1952, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1952, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( ps->skydivePlayerState.animState == 2 )
  {
    if ( (ps->skydivePlayerState.flagsExtra[0] & 2) != 0 )
    {
      PM_Skydive_PerformTrace(pm, _RDI, AUTO_DEPLOY, 0);
      if ( _RDI->skydiveTrace.startsolid )
        goto LABEL_24;
      __asm
      {
        vmovss  xmm0, cs:__real@3f800000
        vucomiss xmm0, dword ptr [rdi+250h]
      }
      if ( !_RDI->skydiveTrace.startsolid )
      {
LABEL_24:
        ps->skydivePlayerState.flags[0] |= 8u;
        PM_Skydive_Chute_Cut(pm, _RDI);
      }
    }
    else
    {
      v5 = ps->skydivePlayerState.flags[0] | 8;
      ps->skydivePlayerState.flags[0] = v5;
      animState = ps->skydivePlayerState.animState;
      PM_Skydive_PerformTrace(pm, _RDI, WEAPON_RAISE, 0);
      if ( _RDI->skydiveTrace.startsolid )
        goto LABEL_21;
      __asm
      {
        vmovss  xmm0, cs:__real@3f800000
        vucomiss xmm0, dword ptr [rdi+250h]
      }
      if ( !_RDI->skydiveTrace.startsolid )
      {
LABEL_21:
        PM_Skydive_Chute_Cut(pm, _RDI);
      }
      else
      {
        if ( (v5 & 0x40) == 0 && animState == 2 )
          ps->skydivePlayerState.flags[0] |= 0x40u;
        v8 = ps->skydivePlayerState.flagsExtra[0];
        if ( (v8 & 0x10) != 0 )
          ps->skydivePlayerState.flagsExtra[0] = v8 & 0xEF;
        v9 = pm->ps;
        if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2520, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
          __debugbreak();
        CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, v9);
        v11 = BG_UsingAlternate(v9);
        v9->skydivePlayerState.animState = 10;
        v9->skydivePlayerState.flags[0] |= 0x20u;
        v9->skydivePlayerState.flagsExtra[0] |= 1u;
        v9->weapState[0].weaponState = 75;
        v9->weapState[0].weaponTime = BG_SkydiveParachuteMidAirDetachTime(v9, CurrentWeaponForPlayer, v11);
        BG_SetWeaponDelay(pm->weaponMap, v9, WEAPON_HAND_DEFAULT, 0, NULL);
        PM_StartWeaponAnim(v9, WEAP_SKYDIVE_MID_AIR_DETACH, WEAPON_HAND_DEFAULT);
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
  char v6; 
  playerState_s *v7; 
  bool v8; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2327, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2327, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( ps->weapState[0].weaponState == 68 || ps->weapState[0].weaponState == 69 || ps->weapState[0].weaponState == 70 || ps->weapState[0].weaponState == 71 )
  {
    v7 = pm->ps;
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2290, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( !PM_Skydive_OnWalkableSurface(pm, pml) )
      goto LABEL_18;
    v8 = v7->weapState[0].weaponState <= 0x44u;
    if ( v7->weapState[0].weaponState == 68 )
    {
      *(_WORD *)&pm->cmd.forwardmove = 0;
      PM_WalkMove(pm, pml);
    }
    else
    {
      __asm
      {
        vmovss  xmm4, cs:MAX_RIGHT_MOVE
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vandps  xmm0, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vcomiss xmm0, xmm4
      }
      pm->cmd.forwardmove = 127;
      if ( !v8 )
      {
        __asm
        {
          vmovss  xmm2, cs:__real@3f800000
          vxorps  xmm0, xmm0, xmm0
          vcmpless xmm3, xmm0, xmm1
          vmovss  xmm1, cs:__real@bf800000
          vblendvps xmm0, xmm1, xmm2, xmm3
          vmulss  xmm2, xmm0, xmm4
          vcvttss2si eax, xmm2
        }
        pm->cmd.rightmove = _EAX;
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
      v6 = ps->skydivePlayerState.flagsExtra[0];
      if ( (v6 & 0x10) != 0 )
        ps->skydivePlayerState.flagsExtra[0] = v6 & 0xEF;
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
  bool v6; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2290, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2290, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( PM_Skydive_OnWalkableSurface(pm, pml) )
  {
    v6 = ps->weapState[0].weaponState <= 0x44u;
    if ( ps->weapState[0].weaponState == 68 )
    {
      *(_WORD *)&pm->cmd.forwardmove = 0;
      PM_WalkMove(pm, pml);
    }
    else
    {
      __asm
      {
        vmovss  xmm4, cs:MAX_RIGHT_MOVE
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vandps  xmm0, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vcomiss xmm0, xmm4
      }
      pm->cmd.forwardmove = 127;
      if ( !v6 )
      {
        __asm
        {
          vmovss  xmm2, cs:__real@3f800000
          vxorps  xmm0, xmm0, xmm0
          vcmpless xmm3, xmm0, xmm1
          vmovss  xmm1, cs:__real@bf800000
          vblendvps xmm0, xmm1, xmm2, xmm3
          vmulss  xmm2, xmm0, xmm4
          vcvttss2si eax, xmm2
        }
        pm->cmd.rightmove = _EAX;
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
  int v8; 
  playerState_s *v9; 

  _RDI = pml;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2417, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2417, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  PM_Skydive_Move_Log(pm, _RDI, "Begin");
  _RDI->ranSkydiveUpdate = 1;
  if ( ps->skydivePlayerState.state[0] == 4 )
  {
    PM_Skydive_LandMove(pm, _RDI);
  }
  else
  {
    PM_Skydive_HandleInput(pm, _RDI);
    v5 = pm->ps;
    if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 826, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( v5->skydivePlayerState.state[0] == 3 && (v5->skydivePlayerState.flagsExtra[0] & 2) != 0 )
    {
      v6 = v5->skydivePlayerState.flags[0];
      if ( (v6 & 0x40) == 0 && (v6 & 0x10) == 0 && (v6 & 0x20) == 0 )
      {
        PM_Skydive_PerformTrace(pm, _RDI, AUTO_DEPLOY, 0);
        if ( !_RDI->skydiveTrace.startsolid )
        {
          __asm
          {
            vmovss  xmm0, cs:__real@3f800000
            vucomiss xmm0, dword ptr [rdi+250h]
          }
          if ( _RDI->skydiveTrace.startsolid )
            v5->skydivePlayerState.flags[0] |= 0x20u;
        }
      }
    }
    PM_Skydive_ApplyForces(pm, _RDI);
    v8 = 0;
    if ( ps->skydivePlayerState.state[0] == 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2789, ASSERT_TYPE_ASSERT, "( ps->skydivePlayerState.state ) != ( SkydiveState::Count )", "%s != %s\n\t%i, %i", "ps->skydivePlayerState.state", "SkydiveState::Count", 7, 7) )
      __debugbreak();
    if ( (unsigned __int8)(ps->skydivePlayerState.state[0] - 2) <= 1u && pm->ground->groundPlane )
      v8 = 1;
    PM_UpdatePlayerCollision(pm, _RDI, v8, 1, 0, 1);
    v9 = pm->ps;
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2127, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( _RDI->hadSlideContact || pm->ground->walking || v9->groundEntityNum != 2047 )
      PM_Skydive_OnCollision(pm, _RDI);
  }
  PM_Skydive_Move_Log(pm, _RDI, "End");
}

/*
==============
PM_Skydive_Move_Log
==============
*/
void PM_Skydive_Move_Log(pmove_t *pm, pml_t *pml, const char *prefix)
{
  const dvar_t *v12; 
  bool enabled; 
  const dvar_t *v14; 
  bool v15; 
  const char *v34; 
  char *fmt; 
  __int64 v41; 
  __int64 v42; 
  __int64 v43; 
  __int64 v44; 
  __int64 v45; 
  __int64 v46; 
  __int64 v47; 
  __int64 v48; 
  __int64 v49; 
  __int64 v50; 
  __int64 v51; 

  _R15 = pml;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2376, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RSI = pm->ps;
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2376, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v12 = DCONST_DVARBOOL_skydive_log_pmove;
  if ( !DCONST_DVARBOOL_skydive_log_pmove && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_log_pmove") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  enabled = v12->current.enabled;
  v14 = DCONST_DVARBOOL_skydive_log_pmove_initialcalls;
  if ( !DCONST_DVARBOOL_skydive_log_pmove_initialcalls && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_log_pmove_initialcalls") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  if ( enabled && (!pm->initialCall || v14->current.enabled) )
  {
    __asm
    {
      vmovaps [rsp+0F8h+var_38], xmm6
      vmovaps [rsp+0F8h+var_48], xmm7
      vmovaps [rsp+0F8h+var_58], xmm8
      vmovaps [rsp+0F8h+var_68], xmm9
    }
    v15 = pm->m_bgHandler->IsServer((BgHandler *)pm->m_bgHandler);
    *(double *)&_XMM0 = BG_GetSkydiveCurrentThrottle(_RSI);
    __asm
    {
      vmovss  xmm2, dword ptr [rsi+44h]
      vmovss  xmm3, dword ptr [rsi+40h]
      vmovss  xmm4, dword ptr [rsi+1DCh]
      vmovss  xmm5, dword ptr [rsi+1D8h]
      vmovss  xmm6, dword ptr [rsi+38h]
      vmovss  xmm7, dword ptr [rsi+34h]
      vmovss  xmm8, dword ptr [rsi+30h]
      vmovss  xmm9, dword ptr [r15+24h]
      vcvtss2sd xmm1, xmm0, xmm0
      vmovss  xmm0, dword ptr [rsi+3Ch]
      vmovsd  [rsp+0F8h+var_70], xmm1
      vcvtss2sd xmm2, xmm2, xmm2
      vmovsd  [rsp+0F8h+var_78], xmm2
      vcvtss2sd xmm3, xmm3, xmm3
      vmovsd  [rsp+0F8h+var_80], xmm3
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+0F8h+var_88], xmm0
      vcvtss2sd xmm4, xmm4, xmm4
      vmovsd  [rsp+0F8h+var_90], xmm4
      vcvtss2sd xmm5, xmm5, xmm5
      vmovsd  [rsp+0F8h+var_98], xmm5
      vcvtss2sd xmm6, xmm6, xmm6
      vmovsd  [rsp+0F8h+var_A0], xmm6
      vcvtss2sd xmm7, xmm7, xmm7
      vmovsd  [rsp+0F8h+var_A8], xmm7
      vcvtss2sd xmm8, xmm8, xmm8
      vmovsd  [rsp+0F8h+var_B0], xmm8
    }
    v34 = "S[%s]: svt: %d ct: %d ft: %f extrap: %d rmove: %d fmove: %d org: [%f %f %f] ang: [%f %f] vel: [%f %f %f] throttle: %f\n";
    __asm
    {
      vcvtss2sd xmm9, xmm9, xmm9
      vmovsd  [rsp+0F8h+var_D0], xmm9
    }
    if ( !v15 )
      v34 = "C[%s]: svt: %d ct: %d ft: %f extrap: %d rmove: %d fmove: %d org: [%f %f %f] ang: [%f %f] vel: [%f %f %f] throttle: %f\n";
    LODWORD(fmt) = pm->cmd.commandTime;
    LODWORD(v42) = pm->isExtrapolation;
    Com_Printf(15, v34, prefix, (unsigned int)pm->cmd.serverTime, fmt, v41, v42, pm->cmd.rightmove, pm->cmd.forwardmove, v43, v44, v45, v46, v47, v48, v49, v50, v51);
    __asm
    {
      vmovaps xmm8, [rsp+0F8h+var_58]
      vmovaps xmm7, [rsp+0F8h+var_48]
      vmovaps xmm6, [rsp+0F8h+var_38]
      vmovaps xmm9, [rsp+0F8h+var_68]
    }
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
  char v6; 
  char v7; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v9; 
  bool v10; 
  const dvar_t *v11; 
  bool v12; 
  char v13; 
  int v14; 
  WeaponAnimNumber v15; 
  char v16; 
  int v17; 
  playerState_s *v18; 
  bool v19; 
  bool v20; 
  entity_event_t v22; 

  _RSI = pml;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2164, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2164, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v6 = ps->skydivePlayerState.state[0];
  if ( v6 != 6 && v6 )
  {
    if ( v6 == 4 )
    {
      if ( ps->weapState[0].weaponState == 72 )
      {
        v7 = ps->skydivePlayerState.flagsExtra[0];
        if ( (v7 & 0x10) != 0 )
          ps->skydivePlayerState.flagsExtra[0] = v7 & 0xEF;
        PM_Skydive_End(pm, _RSI, 0);
      }
      return;
    }
    ps->skydivePlayerState.landingTime = pm->cmd.serverTime;
    CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
    v9 = BG_UsingAlternate(ps);
    v10 = PM_Skydive_OnWalkableSurface(pm, _RSI);
    v11 = DVARBOOL_skydive_can_collide_building;
    v12 = v10;
    if ( !DVARBOOL_skydive_can_collide_building && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_can_collide_building") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    if ( v11->current.enabled )
    {
      if ( !v12 )
        return;
    }
    else if ( !v12 )
    {
      v14 = 72;
      v15 = WEAP_SKYDIVE_MID_AIR_DETACH;
      v16 = 8;
      v17 = BG_SkydiveParachuteMidAirDetachTime(ps, CurrentWeaponForPlayer, v9);
LABEL_29:
      ps->weapState[0].weaponState = v14;
      ps->weapState[0].weaponTime = v17;
      BG_SetWeaponDelay(pm->weaponMap, ps, WEAPON_HAND_DEFAULT, 0, NULL);
      PM_StartWeaponAnim(ps, v15, WEAPON_HAND_DEFAULT);
      ps->skydivePlayerState.state[0] = 4;
      ps->skydivePlayerState.animState = v16;
      BG_AddPredictableEventToPlayerstate(EV_SKYDIVE_TOUCH, 0, pm->cmd.serverTime, pm->weaponMap, ps);
      v18 = pm->ps;
      v19 = v18 == NULL;
      if ( !v18 )
      {
        v20 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2356, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps");
        v19 = !v20;
        if ( v20 )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+3Ch]
        vcomiss xmm0, cs:__real@42c80000
      }
      if ( v19 )
      {
        v22 = EV_LANDING_LOW_HEIGHT;
      }
      else
      {
        __asm { vcomiss xmm0, cs:__real@43480000 }
        v22 = EV_LANDING_EXTREME_HEIGHT;
        if ( !v19 )
          v22 = EV_LANDING_PAIN_EXTREME_HEIGHT;
      }
      BG_AddPredictableEventToPlayerstate(v22, 0, pm->cmd.serverTime, pm->weaponMap, v18);
      return;
    }
    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_skydive_fast_land_speed, "skydive_fast_land_speed");
    __asm { vcomiss xmm0, dword ptr [rsi+3Ch] }
    if ( v13 | v19 )
    {
      v14 = 71;
      v15 = WEAP_SKYDIVE_FAST_LAND;
      v16 = 7;
      v17 = BG_SkydiveParachuteFastLandingTime(ps, CurrentWeaponForPlayer, v9);
    }
    else
    {
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_skydive_slow_land_speed, "skydive_slow_land_speed");
      __asm { vcomiss xmm0, dword ptr [rsi+3Ch] }
      if ( v13 | v19 )
      {
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_skydive_hard_land_speed, "skydive_hard_land_speed");
        __asm { vcomiss xmm0, dword ptr [rsi+38h] }
        if ( v13 | v19 )
        {
          v14 = 70;
          v15 = WEAP_SKYDIVE_SLOW_HARD_LAND;
          v16 = 6;
          v17 = BG_SkydiveParachuteSlowHardLandingTime(ps, CurrentWeaponForPlayer, v9);
        }
        else
        {
          v14 = 69;
          v15 = WEAP_SKYDIVE_SLOW_SOFT_LAND;
          v16 = 5;
          v17 = BG_SkydiveParachuteSlowSoftLandingTime(ps, CurrentWeaponForPlayer, v9);
        }
      }
      else
      {
        v14 = 68;
        v15 = WEAP_SKYDIVE_STILL_LAND;
        v16 = 4;
        v17 = BG_SkydiveParachuteStillLandingTime(ps, CurrentWeaponForPlayer, v9);
      }
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
char PM_Skydive_OnWalkableSurface(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 

  _RBX = pml;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2140, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2140, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !pm->ground->walking && ps->groundEntityNum == 2047 )
  {
    if ( !_RBX->hadSlideContact )
      return 0;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+23Ch]
      vmovss  xmm1, dword ptr [rbx+68h]
      vmulss  xmm2, xmm1, dword ptr [rbx+238h]
      vmulss  xmm3, xmm0, dword ptr [rbx+6Ch]
      vmovss  xmm0, dword ptr [rbx+240h]
      vmulss  xmm1, xmm0, dword ptr [rbx+70h]
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm2, xmm4, xmm1
      vcomiss xmm2, cs:__real@3f333333
    }
  }
  return 1;
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
  char v15; 
  char v16; 
  const BgPlayerTraceInfo *v18; 
  const BgHandler *m_bgHandler; 
  Physics_WorldId v20; 
  BgTrace v25; 
  vec3_t vec; 
  trace_t results; 

  _RBX = pml;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2704, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2704, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( auxiliaryTrace || !_RBX->isSkydiveTraced )
  {
    _R15 = BG_GetSuitDef(ps->suitIndex);
    if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2712, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+30h]
      vmovss  dword ptr [rsp+118h+vec], xmm0
      vmovss  xmm1, dword ptr [rbp+34h]
      vmovss  dword ptr [rsp+118h+vec+4], xmm1
      vmovss  xmm0, dword ptr [rbp+38h]
      vmovss  dword ptr [rsp+118h+vec+8], xmm0
    }
    if ( traceHeight )
    {
      if ( traceHeight == AUTO_DEPLOY )
      {
        __asm { vmovss  xmm0, dword ptr [r15+3D0h] }
      }
      else
      {
        if ( traceHeight != FREEFALL_DEPLOY_MIN )
          goto LABEL_24;
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_skydive_min_deploy_altitude, "skydive_min_deploy_altitude");
        __asm
        {
          vcvtss2sd xmm1, xmm0, xmm0
          vcomisd xmm1, cs:__real@3eb0c6f7a0b5ed8d
        }
        if ( v15 | v16 )
        {
          _RBX->skydiveTrace.startsolid = 0;
          _RBX->skydiveTrace.fraction = 1.0;
          return;
        }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_skydive_min_deploy_altitude, "skydive_min_deploy_altitude");
      }
    }
    else
    {
      _RSI = DVARFLT_skydive_weapon_raise_height;
      if ( !DVARFLT_skydive_weapon_raise_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_weapon_raise_height") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RSI);
      __asm { vmovss  xmm0, dword ptr [rsi+28h] }
    }
    __asm { vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000; height }
    WorldUpReferenceFrame::AddUpContribution(&pm->refFrame, *(float *)&_XMM1, &vec);
LABEL_24:
    v18 = pm->m_bgHandler->GetPlayerTraceInfo(pm->m_bgHandler, (unsigned int)ps->clientNum);
    BgTrace::BgTrace(&v25, v18);
    m_bgHandler = pm->m_bgHandler;
    v25.m_flags |= 0x80u;
    v20 = m_bgHandler->GetPhysicsWorldId((BgHandler *)m_bgHandler);
    BgTrace::LegacyTraceHandler(&v25, v20, &results, &ps->origin, &vec, &bounds_origin, ps->clientNum, pm->tracemask & 0xFDFFBFFF, ps);
    __asm
    {
      vmovups ymm0, ymmword ptr [rsp+118h+results.fraction]
      vmovups ymm1, ymmword ptr [rsp+118h+results.contents]
      vmovups ymmword ptr [rbx+250h], ymm0
      vmovups xmm0, xmmword ptr [rsp+118h+results.allsolid]
      vmovups ymmword ptr [rbx+270h], ymm1
      vmovsd  xmm1, [rsp+118h+results.debugHitName]
      vmovups xmmword ptr [rbx+290h], xmm0
      vmovsd  qword ptr [rbx+2A0h], xmm1
    }
    if ( !auxiliaryTrace )
      _RBX->isSkydiveTraced = 1;
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

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 741, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 741, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  cameraTypeIndex = ps->cameraTypeIndex;
  if ( cameraTypeIndex )
  {
    _RSI = BG_Camera_GetDef(cameraTypeIndex);
    if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 749, ASSERT_TYPE_ASSERT, "(camDef)", (const char *)&queryFormat, "camDef") )
      __debugbreak();
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, dword ptr [rdi+1Ch]
    }
    if ( transitionIn )
      __asm { vmovss  xmm0, dword ptr [rsi+12Ch] }
    else
      __asm { vmovss  xmm0, dword ptr [rsi+144h] }
    __asm
    {
      vmulss  xmm2, xmm0, cs:__real@447a0000
      vaddss  xmm2, xmm2, xmm1
      vcvttss2si rax, xmm2
    }
    ps->cameraTransitionEnd = _RAX;
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
  playerState_s *v7; 
  const BgPlayerTraceInfo *v10; 
  const BgHandler *m_bgHandler; 
  Physics_WorldId v12; 
  const dvar_t *v18; 
  char v22; 
  unsigned __int64 buttons; 
  playerState_s *v24; 
  bool v25; 
  playerState_s *v26; 
  char v28; 
  playerState_s *v29; 
  char v30; 
  char v31; 
  char v32; 
  playerState_s *v33; 
  char v34; 
  const dvar_t *v35; 
  char v37; 
  int contentMaska; 
  __int64 contentMask; 
  playerState_s *ps; 
  BgTrace v41; 
  vec3_t end; 
  trace_t results; 
  void *retaddr; 

  _R11 = &retaddr;
  _RSI = pml;
  __asm { vmovaps xmmword ptr [r11-48h], xmm6 }
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2022, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  v7 = pm->ps;
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2022, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !PM_IsInAir(pm) )
    v7->skydivePlayerState.flags[0] &= ~0x80u;
  __asm { vxorps  xmm1, xmm1, xmm1 }
  ((void (__fastcall *)(pmove_t *))pm->SetSkydiveBasejumpGroundHeight)(pm);
  _RBP = pm->ps;
  if ( !_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2756, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v10 = pm->m_bgHandler->GetPlayerTraceInfo(pm->m_bgHandler, (unsigned int)_RBP->clientNum);
  BgTrace::BgTrace(&v41, v10);
  m_bgHandler = pm->m_bgHandler;
  v41.m_flags |= 0x80u;
  v12 = m_bgHandler->GetPhysicsWorldId((BgHandler *)m_bgHandler);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+38h]
    vmovss  xmm1, dword ptr [rbp+34h]
  }
  _R9 = &_RBP->origin;
  __asm
  {
    vsubss  xmm2, xmm0, cs:__real@46fa0000
    vmovss  xmm0, dword ptr [r9]
  }
  contentMaska = pm->tracemask;
  __asm
  {
    vmovss  dword ptr [rsp+138h+end], xmm0
    vmovss  dword ptr [rsp+138h+end+4], xmm1
    vmovss  dword ptr [rsp+138h+end+8], xmm2
  }
  BgTrace::LegacyTraceHandler(&v41, v12, &results, &_RBP->origin, &end, &bounds_origin, _RBP->clientNum, contentMaska, _RBP);
  v41.m_flags &= ~0x80u;
  v18 = DCONST_DVARFLT_skydive_min_deploy_altitude;
  if ( !DCONST_DVARFLT_skydive_min_deploy_altitude && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_min_deploy_altitude") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+138h+results.position+8]
    vaddss  xmm1, xmm0, dword ptr [rbp+28h]
    vcvttss2si eax, xmm1
  }
  pm->m_skydiveAutodeployOffset = _EAX;
  pm->m_skydiveAutodeployOffsetIsValid = 1;
  if ( v7->pm_type || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&v7->otherFlags, ACTIVE, 0xBu) )
  {
    v22 = v7->skydivePlayerState.flagsExtra[0];
    if ( (v22 & 0x10) != 0 )
      v7->skydivePlayerState.flagsExtra[0] = v22 & 0xEF;
    PM_Skydive_End(pm, _RSI, 0);
  }
  buttons = pm->cmd.buttons;
  if ( (buttons & 0x100) == 0 && (buttons & 0x20000000) == 0 )
    v7->skydivePlayerState.flags[0] &= ~8u;
  v24 = pm->ps;
  if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1497, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( BG_Skydive_IsSkydiving(v24) )
    goto LABEL_35;
  if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2800, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( v24->skydivePlayerState.state[0] == 7 )
  {
    LODWORD(ps) = 7;
    LODWORD(contentMask) = 7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2801, ASSERT_TYPE_ASSERT, "( ps->skydivePlayerState.state ) != ( SkydiveState::Count )", "%s != %s\n\t%i, %i", "ps->skydivePlayerState.state", "SkydiveState::Count", contentMask, ps) )
      __debugbreak();
  }
  if ( v24->skydivePlayerState.state[0] == 5 )
LABEL_35:
    v25 = 1;
  else
    v25 = 0;
  PM_Skydive_Update_AnimEvents_SuperDive(pm, _RSI, v25);
  PM_Skydive_Update_AnimEvents_Throttle(pm, _RSI, v25);
  PM_Skydive_Update_AnimEvents_InputFeedback(pm, _RSI, v25);
  v26 = pm->ps;
  if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1509, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm { vmovss  xmm6, cs:__real@3f800000 }
  if ( BG_Skydive_IsSkydiving(v26) )
  {
    v28 = v26->skydivePlayerState.flagsExtra[0];
    if ( (v28 & 4) == 0 && (v28 & 8) != 0 )
    {
      PM_Skydive_PerformTrace(pm, _RSI, WEAPON_RAISE, 1);
      if ( !_RSI->skydiveTrace.startsolid )
      {
        __asm { vucomiss xmm6, dword ptr [rsi+250h] }
        if ( _RSI->skydiveTrace.startsolid )
          v26->skydivePlayerState.flagsExtra[0] |= 4u;
      }
    }
  }
  v29 = pm->ps;
  if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1673, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v30 = v29->skydivePlayerState.state[0];
  if ( (!v30 || v30 == 5) && PM_Skydive_CanActivate(pm) && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v29->pm_flags, ACTIVE, 0x34u) && !v29->pm_type && PM_IsInAir(pm) )
  {
    v31 = 1;
  }
  else
  {
    v7->pm_flags.m_flags[1] &= ~0x80000u;
    v31 = 0;
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v7->pm_flags, ACTIVE, 0x2Fu) )
  {
    PM_Skydive_Freefall_Begin(pm, _RSI);
    goto LABEL_81;
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v7->pm_flags, ACTIVE, 0x30u) && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v7->pm_flags, ACTIVE, 0x32u) )
    goto LABEL_80;
  v32 = v7->skydivePlayerState.state[0];
  if ( v32 && v32 != 5 )
  {
    if ( v32 == 1 && (v7->skydivePlayerState.flagsExtra[0] & 0x20) == 0 )
    {
      PM_Skydive_PerformTrace(pm, _RSI, FREEFALL_DEPLOY_MIN, 1);
      if ( _RSI->skydiveTrace.startsolid )
        goto LABEL_67;
      __asm { vucomiss xmm6, dword ptr [rsi+250h] }
      if ( !_RSI->skydiveTrace.startsolid )
LABEL_67:
        v7->pm_flags.m_flags[1] |= 0x40000u;
      else
        v7->pm_flags.m_flags[1] &= ~0x40000u;
    }
    PM_Skydive_Update_AutoDeploy(pm, _RSI);
    PM_Skydive_Update_PrepForLandingState(pm, _RSI);
    goto LABEL_81;
  }
  if ( v31 || v32 == 5 )
  {
    v33 = pm->ps;
    if ( !v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1929, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    v34 = v33->skydivePlayerState.state[0];
    if ( v34 && v34 != 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1931, ASSERT_TYPE_ASSERT, "(( ps->skydivePlayerState.state == SkydiveState::None ) || ( ps->skydivePlayerState.state == SkydiveState::WeaponRaise ))", (const char *)&queryFormat, "( ps->skydivePlayerState.state == SkydiveState::None ) || ( ps->skydivePlayerState.state == SkydiveState::WeaponRaise )") )
      __debugbreak();
    if ( PM_Skydive_BaseJump_Check(pm, _RSI) )
    {
      v33->skydivePlayerState.flags[0] |= 0x80u;
      v33->pm_flags.m_flags[1] |= 0x80000u;
      BG_AddPredictableEventToPlayerstate(EV_STANCE_FORCE_STAND, 0, pm->cmd.serverTime, pm->weaponMap, v33);
      if ( PM_Skydive_JumpButtonPressed(pm) )
LABEL_80:
        PM_Skydive_BeginDeployParachute(pm, _RSI);
    }
  }
LABEL_81:
  v35 = DVARBOOL_killswitch_skydive_loadout_change_fix_enabled;
  __asm { vmovaps xmm6, [rsp+138h+var_48] }
  if ( !DVARBOOL_killswitch_skydive_loadout_change_fix_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_skydive_loadout_change_fix_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v35);
  if ( v35->current.enabled && !v7->weapState[0].weaponState )
  {
    v37 = v7->skydivePlayerState.state[0];
    switch ( v37 )
    {
      case 1:
        PM_Skydive_Freefall_WeaponDrop(pm, _RSI);
        break;
      case 2:
        PM_Skydive_OpenParachute(pm, _RSI, 0);
        break;
      case 3:
        PM_Skydive_ParachuteIdle(pm, _RSI);
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
  _RDI = pml;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 906, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RBX = pm->ps;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 906, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm
  {
    vmovss  xmm3, dword ptr [rdi+24h]; deltaTime
    vmovss  xmm2, cs:BLEND_OUT_SPEED; rate
    vmovss  xmm1, dword ptr [rbx+2F5Ch]; cur
    vxorps  xmm0, xmm0, xmm0; tgt
  }
  *(double *)&_XMM0 = DiffTrack(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  __asm
  {
    vmovss  xmm2, cs:BLEND_OUT_SPEED; rate
    vmovss  xmm1, dword ptr [rbx+2F64h]; cur
    vmovss  dword ptr [rbx+2F5Ch], xmm0
    vmovss  xmm3, dword ptr [rdi+24h]; deltaTime
    vxorps  xmm0, xmm0, xmm0; tgt
  }
  *(double *)&_XMM0 = DiffTrack(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  __asm { vmovss  dword ptr [rbx+2F64h], xmm0 }
}

/*
==============
PM_Skydive_UpdateAngles_Freefall
==============
*/
void PM_Skydive_UpdateAngles_Freefall(pmove_t *pm, pml_t *pml)
{
  RumbleGraph *skydive_wmAnimFreefallLeftStickXToRollGraph; 
  char v38; 
  bool v39; 
  int v50; 
  int v52; 

  __asm { vmovaps [rsp+58h+var_28], xmm6 }
  _RBP = pml;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 925, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RSI = pm->ps;
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 925, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  _RBX = BG_GetSuitDef(_RSI->suitIndex);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 928, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+1D8h]
    vmulss  xmm6, xmm0, cs:__real@3b360b61
    vaddss  xmm4, xmm6, cs:__real@3f000000
    vmovss  xmm2, dword ptr [rbx+688h]; max
    vmovss  xmm1, dword ptr [rbx+684h]; min
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm3, xmm0, xmm4, 1
    vsubss  xmm3, xmm6, xmm3
    vmulss  xmm0, xmm3, cs:__real@43b40000; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+688h]; max
    vmovaps xmm2, xmm0; dist
    vmovss  xmm0, dword ptr [rbx+684h]; min
  }
  *(double *)&_XMM0 = I_fdistnormalized(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@40000000
    vmovss  xmm2, cs:__real@3f800000; max
    vsubss  xmm0, xmm1, xmm2; val
    vmovss  xmm1, cs:__real@bf800000; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm3, dword ptr [rbp+24h]; deltaTime
    vmovss  xmm2, dword ptr [rbx+68Ch]; rate
    vmovss  xmm1, dword ptr [rsi+2F5Ch]; cur
  }
  *(double *)&_XMM0 = DiffTrack(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  __asm { vmovss  dword ptr [rsi+2F5Ch], xmm0 }
  v50 = *(_QWORD *)&BG_GetStickCartesianCoords(pm->cmd.yawmove, pm->cmd.pitchmove);
  LOBYTE(_EAX) = PM_Skydive_ShouldLockViewInput(pm);
  __asm
  {
    vmovss  xmm2, dword ptr [rsp+58h+arg_0]
    vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
  }
  _ECX = 0;
  _EAX = (unsigned __int8)_EAX;
  __asm
  {
    vmovd   xmm0, eax
    vmovd   xmm1, ecx
    vpcmpeqd xmm3, xmm0, xmm1
    vxorps  xmm1, xmm1, xmm1
    vblendvps xmm4, xmm1, xmm2, xmm3
    vandps  xmm0, xmm4, xmm6
    vcvtss2sd xmm0, xmm0, xmm0
    vcomisd xmm0, cs:__real@3eb0c6f7a0b5ed8d
    vmovss  dword ptr [rsp+58h+arg_0], xmm4
  }
  v52 = *(_QWORD *)&BG_GetStickCartesianCoords(pm->cmd.rightmove, pm->cmd.forwardmove);
  skydive_wmAnimFreefallLeftStickXToRollGraph = _RBX->skydive_wmAnimFreefallLeftStickXToRollGraph;
  v38 = 0;
  v39 = skydive_wmAnimFreefallLeftStickXToRollGraph == NULL;
  if ( skydive_wmAnimFreefallLeftStickXToRollGraph )
  {
    __asm { vmovss  xmm2, dword ptr [rsp+58h+arg_0]; fraction }
    *(double *)&_XMM0 = GraphGetValueFromFractionUnnormalized(skydive_wmAnimFreefallLeftStickXToRollGraph->knotCount, skydive_wmAnimFreefallLeftStickXToRollGraph->knots, *(const float *)&_XMM2);
    __asm { vmovaps xmm4, xmm0 }
  }
  else
  {
    __asm { vmovss  xmm4, dword ptr [rsp+58h+arg_0] }
  }
  __asm
  {
    vandps  xmm0, xmm4, xmm6
    vcvtss2sd xmm0, xmm0, xmm0
    vcomisd xmm0, cs:__real@3eb0c6f7a0b5ed8d
  }
  if ( v38 | v39 )
    __asm { vmovss  xmm2, dword ptr [rbx+694h] }
  else
    __asm { vmovss  xmm2, dword ptr [rbx+690h]; rate }
  __asm
  {
    vmovss  xmm3, dword ptr [rbp+24h]; deltaTime
    vmovss  xmm1, dword ptr [rsi+2F64h]; cur
    vmovaps xmm0, xmm4; tgt
  }
  *(double *)&_XMM0 = DiffTrack(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_28]
    vmovss  dword ptr [rsi+2F64h], xmm0
  }
}

/*
==============
PM_Skydive_UpdateAngles_Parachute
==============
*/
void PM_Skydive_UpdateAngles_Parachute(pmove_t *pm, pml_t *pml, const vec3_t *acceleration)
{
  const dvar_t *v29; 
  const dvar_t *v36; 
  char v58; 
  const dvar_t *v62; 
  const dvar_t *v69; 
  const dvar_t *v74; 
  const dvar_t *v96; 
  double v112; 
  double v113; 
  double v114; 
  double v115; 
  char v117; 
  void *retaddr; 
  vec2_t v120; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  _RSI = pml;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm12
    vmovaps xmmword ptr [rax-98h], xmm13
    vmovaps xmmword ptr [rax-0A8h], xmm14
    vmovaps [rsp+128h+var_B8], xmm15
  }
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1069, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RBX = pm->ps;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1069, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  _RAX = PM_Skydive_GetPitchAndRollFromInput(pm);
  _RDI = DCONST_DVARFLT_skydive_pendulum_mass;
  v120 = _RAX;
  LODWORD(_RAX.v[0]) = 3;
  __asm { vmovd   xmm1, eax }
  LODWORD(_RAX.v[0]) = _RBX->skydivePlayerState.animState;
  __asm
  {
    vmovd   xmm0, eax
    vpcmpeqd xmm2, xmm0, xmm1
    vmovss  xmm0, dword ptr [rsp+128h+arg_8]
    vxorps  xmm9, xmm9, xmm9
    vblendvps xmm1, xmm0, xmm9, xmm2
    vmovss  dword ptr [rsp+128h+arg_8], xmm1
  }
  if ( !DCONST_DVARFLT_skydive_pendulum_mass && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_pendulum_mass") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vmovss  xmm10, dword ptr [rdi+28h] }
  _RDI = DCONST_DVARFLT_skydive_pendulum_length;
  __asm { vmovss  [rsp+128h+arg_0], xmm10 }
  if ( !DCONST_DVARFLT_skydive_pendulum_length && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_pendulum_length") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vmovss  xmm12, dword ptr [rdi+28h] }
  _RDI = DCONST_DVARFLT_skydive_pendulum_gravity;
  if ( !DCONST_DVARFLT_skydive_pendulum_gravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_pendulum_gravity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vmovss  xmm15, dword ptr [rdi+28h] }
  v29 = DCONST_DVARFLT_skydive_pendulum_max_bank_angle;
  __asm
  {
    vmovss  xmm13, dword ptr [rsi+24h]
    vmovss  xmm6, dword ptr [rbx+2F64h]
  }
  if ( !DCONST_DVARFLT_skydive_pendulum_max_bank_angle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_pendulum_max_bank_angle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v29);
  __asm { vmulss  xmm8, xmm6, dword ptr [rdi+28h] }
  _RDI = DCONST_DVARFLT_skydive_pendulum_damping_constant_bank;
  __asm { vmovss  xmm7, dword ptr [rbx+2F68h] }
  if ( !DCONST_DVARFLT_skydive_pendulum_damping_constant_bank && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_pendulum_damping_constant_bank") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vmovss  xmm6, dword ptr [rdi+28h] }
  v36 = DCONST_DVARFLT_skydive_pendulum_stick_torque_bank;
  if ( !DCONST_DVARFLT_skydive_pendulum_stick_torque_bank && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_pendulum_stick_torque_bank") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v36);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+128h+arg_8]
    vmulss  xmm1, xmm0, dword ptr [rdi+28h]
    vxorps  xmm2, xmm1, cs:__xmm@80000000800000008000000080000000
    vmovss  xmm14, cs:__real@3c8efa35
    vmulss  xmm1, xmm12, xmm10
    vmulss  xmm7, xmm7, xmm14
    vmulss  xmm0, xmm7, xmm6
    vsubss  xmm3, xmm2, xmm0
    vmulss  xmm2, xmm1, xmm12
    vmulss  xmm0, xmm8, xmm14; X
    vdivss  xmm6, xmm3, xmm2
  }
  *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
  __asm
  {
    vmulss  xmm1, xmm0, xmm15
    vdivss  xmm2, xmm1, xmm12
    vsubss  xmm3, xmm6, xmm2
    vmulss  xmm0, xmm3, xmm13
    vaddss  xmm1, xmm0, xmm7
    vmulss  xmm2, xmm1, cs:__real@42652ee0
    vmovss  dword ptr [rbx+2F68h], xmm2
  }
  _RDI = DCONST_DVARFLT_skydive_pendulum_max_bank_angle;
  __asm
  {
    vmulss  xmm0, xmm2, xmm13
    vaddss  xmm6, xmm0, xmm8
  }
  if ( !DCONST_DVARFLT_skydive_pendulum_max_bank_angle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_pendulum_max_bank_angle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vcomiss xmm9, dword ptr [rdi+28h]
    vxorpd  xmm10, xmm10, xmm10
  }
  if ( !v58 )
  {
    _RDI = DCONST_DVARFLT_skydive_pendulum_max_bank_angle;
    if ( !DCONST_DVARFLT_skydive_pendulum_max_bank_angle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_pendulum_max_bank_angle") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+28h]
      vmovsd  [rsp+128h+var_E8], xmm10
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+128h+var_F0], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1097, ASSERT_TYPE_ASSERT, "( Dvar_GetFloat_Internal_DebugName( DCONST_DVARFLT_skydive_pendulum_max_bank_angle, \"skydive_pendulum_max_bank_angle\" ) ) > ( 0.0f )", "%s > %s\n\t%g, %g", "Dconst_GetFloat( skydive_pendulum_max_bank_angle )", "0.0f", v112, v114) )
      __debugbreak();
  }
  v62 = DCONST_DVARFLT_skydive_pendulum_max_bank_angle;
  if ( !DCONST_DVARFLT_skydive_pendulum_max_bank_angle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_pendulum_max_bank_angle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v62);
  __asm
  {
    vdivss  xmm0, xmm6, dword ptr [rdi+28h]
    vmovss  dword ptr [rbx+2F64h], xmm0
  }
  _RDI = DCONST_DVARFLT_skydive_pendulum_max_bank_normalized;
  if ( !DCONST_DVARFLT_skydive_pendulum_max_bank_normalized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_pendulum_max_bank_normalized") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm2, dword ptr [rdi+28h]; max
    vxorps  xmm1, xmm2, cs:__xmm@80000000800000008000000080000000; min
    vmovss  xmm0, dword ptr [rbx+2F64h]; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm6, dword ptr [rbx+2F5Ch]
    vmovss  dword ptr [rbx+2F64h], xmm0
  }
  v69 = DCONST_DVARFLT_skydive_pendulum_max_pitch_angle;
  if ( !DCONST_DVARFLT_skydive_pendulum_max_pitch_angle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_pendulum_max_pitch_angle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v69);
  __asm { vmulss  xmm8, xmm6, dword ptr [rdi+28h] }
  _RDI = DCONST_DVARFLT_skydive_pendulum_damping_constant_pitch;
  __asm { vmovss  xmm7, dword ptr [rbx+2F60h] }
  if ( !DCONST_DVARFLT_skydive_pendulum_damping_constant_pitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_pendulum_damping_constant_pitch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vmovss  xmm6, dword ptr [rdi+28h] }
  v74 = DCONST_DVARFLT_skydive_pendulum_stick_torque_pitch;
  if ( !DCONST_DVARFLT_skydive_pendulum_stick_torque_pitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_pendulum_stick_torque_pitch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v74);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+128h+arg_8+4]
    vmulss  xmm1, xmm0, dword ptr [rdi+28h]
    vmulss  xmm7, xmm7, xmm14
    vmulss  xmm0, xmm7, xmm6
    vsubss  xmm3, xmm1, xmm0
    vmulss  xmm1, xmm12, [rsp+128h+arg_0]
    vmulss  xmm2, xmm1, xmm12
    vmulss  xmm0, xmm8, xmm14; X
    vdivss  xmm6, xmm3, xmm2
  }
  *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
  __asm
  {
    vmulss  xmm1, xmm0, xmm15
    vdivss  xmm2, xmm1, xmm12
    vsubss  xmm3, xmm6, xmm2
    vmulss  xmm0, xmm3, xmm13
    vaddss  xmm1, xmm0, xmm7
    vmulss  xmm2, xmm1, cs:__real@42652ee0
    vmovss  dword ptr [rbx+2F60h], xmm2
  }
  _RDI = DCONST_DVARFLT_skydive_pendulum_max_pitch_angle;
  __asm
  {
    vmulss  xmm0, xmm13, xmm2
    vaddss  xmm6, xmm0, xmm8
  }
  if ( !DCONST_DVARFLT_skydive_pendulum_max_pitch_angle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_pendulum_max_pitch_angle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vcomiss xmm9, dword ptr [rdi+28h] }
  if ( !v58 )
  {
    _RDI = DCONST_DVARFLT_skydive_pendulum_max_pitch_angle;
    if ( !DCONST_DVARFLT_skydive_pendulum_max_pitch_angle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_pendulum_max_pitch_angle") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+28h]
      vmovsd  [rsp+128h+var_E8], xmm10
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+128h+var_F0], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1116, ASSERT_TYPE_ASSERT, "( Dvar_GetFloat_Internal_DebugName( DCONST_DVARFLT_skydive_pendulum_max_pitch_angle, \"skydive_pendulum_max_pitch_angle\" ) ) > ( 0.0f )", "%s > %s\n\t%g, %g", "Dconst_GetFloat( skydive_pendulum_max_pitch_angle )", "0.0f", v113, v115) )
      __debugbreak();
  }
  v96 = DCONST_DVARFLT_skydive_pendulum_max_pitch_angle;
  if ( !DCONST_DVARFLT_skydive_pendulum_max_pitch_angle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_pendulum_max_pitch_angle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v96);
  __asm
  {
    vdivss  xmm0, xmm6, dword ptr [rdi+28h]
    vmovss  dword ptr [rbx+2F5Ch], xmm0
  }
  _RDI = DCONST_DVARFLT_skydive_pendulum_max_pitch_normalized;
  if ( !DCONST_DVARFLT_skydive_pendulum_max_pitch_normalized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_pendulum_max_pitch_normalized") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm2, dword ptr [rdi+28h]; max
    vxorps  xmm1, xmm2, cs:__xmm@80000000800000008000000080000000; min
    vmovss  xmm0, dword ptr [rbx+2F5Ch]; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovaps xmm15, [rsp+128h+var_B8] }
  _R11 = &v117;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm12, xmmword ptr [r11-60h]
    vmovaps xmm13, xmmword ptr [r11-70h]
    vmovaps xmm14, xmmword ptr [r11-80h]
    vmovss  dword ptr [rbx+2F5Ch], xmm0
  }
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
  signed int v23; 
  base_vec3_t<int> *p_angles; 
  __int64 v59; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1211, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RSI = pm->ps;
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1211, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  _RBX = BG_GetSuitDef(_RSI->suitIndex);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1214, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  if ( !PM_Skydive_ShouldLockViewInput(pm) )
  {
    __asm
    {
      vmovaps [rsp+0F8h+var_28], xmm6
      vmovaps [rsp+0F8h+var_38], xmm7
      vmovaps [rsp+0F8h+var_48], xmm8
      vmovaps [rsp+0F8h+var_58], xmm9
      vmovaps [rsp+0F8h+var_68], xmm10
      vmovaps [rsp+0F8h+var_78], xmm11
      vmovaps [rsp+0F8h+var_88], xmm12
      vmovaps [rsp+0F8h+var_98], xmm13
      vmovaps [rsp+0F8h+var_A8], xmm14
      vmovaps [rsp+0F8h+var_B8], xmm15
    }
    switch ( _RSI->skydivePlayerState.state[0] )
    {
      case 1:
      case 5:
      case 6:
        goto $LN13_5;
      case 2:
      case 3:
      case 4:
        __asm
        {
          vmovss  xmm13, dword ptr [rbx+578h]; jumptable 000000014030520E cases 2-4
          vmovss  xmm11, dword ptr [rbx+57Ch]
        }
        break;
      default:
        LODWORD(v59) = (unsigned __int8)_RSI->skydivePlayerState.state[0];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1243, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled skydive state %d while retrieving suit field values.", v59) )
          __debugbreak();
$LN13_5:
        __asm
        {
          vmovss  xmm11, dword ptr [rbx+42Ch]; jumptable 000000014030520E cases 1,5,6
          vmovss  xmm13, dword ptr [rbx+428h]
        }
        break;
    }
    __asm
    {
      vmovss  xmm14, cs:__real@43340000
      vmovss  xmm9, cs:__real@3b360b61
      vmovss  xmm8, cs:__real@3f000000
      vmovss  xmm15, cs:__real@3f800000
      vmovss  xmm10, cs:__real@43b40000
    }
    v23 = 0;
    p_angles = &pm->cmd.angles;
    __asm { vxorps  xmm7, xmm7, xmm7 }
    do
    {
      _RDI = v23;
      __asm { vmovaps xmm1, xmm14; maxAbsValueSize }
      *(double *)&_XMM0 = MSG_UnpackSignedFloat(p_angles->v[v23], *(float *)&_XMM1, 0x14u);
      __asm
      {
        vmulss  xmm6, xmm0, xmm9
        vaddss  xmm2, xmm6, xmm8
        vxorps  xmm1, xmm1, xmm1
        vmovss  xmm0, xmm1, xmm2
        vroundss xmm12, xmm7, xmm0, 1
        vmulss  xmm2, xmm9, dword ptr [rsi+rdi*4+0B4h]
        vsubss  xmm0, xmm6, xmm12
        vmulss  xmm3, xmm0, xmm15
        vaddss  xmm4, xmm3, xmm2
        vxorps  xmm0, xmm0, xmm0
        vaddss  xmm3, xmm4, xmm8
        vmovss  xmm1, xmm0, xmm3
        vroundss xmm2, xmm7, xmm1, 1
        vsubss  xmm0, xmm4, xmm2
        vmulss  xmm1, xmm0, xmm10
      }
      if ( !v23 )
      {
        __asm
        {
          vcomiss xmm1, xmm11
          vcomiss xmm1, xmm13
        }
      }
      __asm
      {
        vmulss  xmm3, xmm1, xmm9
        vxorps  xmm0, xmm0, xmm0
        vaddss  xmm1, xmm3, xmm8
        vmovss  xmm1, xmm0, xmm1
        vroundss xmm2, xmm7, xmm1, 1
        vsubss  xmm0, xmm3, xmm2
        vmulss  xmm6, xmm0, xmm10
      }
      ++v23;
      __asm { vmovss  dword ptr [rsi+rdi*4+1D8h], xmm6 }
    }
    while ( (unsigned int)v23 < 3 );
    __asm
    {
      vmovaps xmm15, [rsp+0F8h+var_B8]
      vmovaps xmm14, [rsp+0F8h+var_A8]
      vmovaps xmm13, [rsp+0F8h+var_98]
      vmovaps xmm12, [rsp+0F8h+var_88]
      vmovaps xmm11, [rsp+0F8h+var_78]
      vmovaps xmm10, [rsp+0F8h+var_68]
      vmovaps xmm9, [rsp+0F8h+var_58]
      vmovaps xmm8, [rsp+0F8h+var_48]
      vmovaps xmm7, [rsp+0F8h+var_38]
      vmovaps xmm6, [rsp+0F8h+var_28]
    }
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
  char v12; 
  char v13; 
  unsigned __int8 v16; 
  int controllerBufferWriteIndex; 
  int v19; 
  char v22; 
  bool v23; 
  char v24; 
  unsigned int v25; 
  vec2_t PitchAndRollFromInput; 
  unsigned int v39; 

  _R15 = pml;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1379, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1379, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( skydiving )
  {
    __asm
    {
      vmovaps [rsp+0A8h+var_58], xmm7
      vmovaps [rsp+0A8h+var_68], xmm8
    }
    PitchAndRollFromInput = PM_Skydive_GetPitchAndRollFromInput(pm);
    __asm
    {
      vmovss  xmm8, dword ptr [rsp+0A8h+arg_0]
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm8, xmm0
    }
    if ( v12 | v13 )
    {
      v16 = 0;
      if ( v12 )
        v16 = 2;
    }
    else
    {
      v16 = 1;
    }
    __asm
    {
      vmovss  xmm7, dword ptr [rsp+0A8h+arg_0+4]
      vcomiss xmm7, xmm0
    }
    if ( v12 | v13 )
    {
      if ( v12 )
        v16 |= 8u;
    }
    else
    {
      v16 |= 4u;
    }
    controllerBufferWriteIndex = ps->skydivePlayerState.controllerBufferWriteIndex;
    ps->skydivePlayerState.controllerBuffer = (v16 << (4 * controllerBufferWriteIndex)) | ps->skydivePlayerState.controllerBuffer & ~(15 << (4 * controllerBufferWriteIndex));
    if ( v16 )
    {
      v19 = controllerBufferWriteIndex - 1;
      __asm
      {
        vmovaps [rsp+0A8h+var_48], xmm6
        vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      }
      if ( controllerBufferWriteIndex - 1 < 0 )
        v19 = 7;
      __asm
      {
        vmovaps [rsp+0A8h+var_78], xmm9
        vmovss  xmm9, dword ptr [r15+24h]
      }
      v22 = 0;
      v39 = 1;
      v24 = 0;
      v23 = 0;
      do
      {
        __asm { vcomiss xmm9, cs:TIME_TO_EVALUATE }
        if ( !v23 )
          break;
        v25 = ps->skydivePlayerState.controllerBuffer >> (4 * v19);
        if ( !v22 )
        {
          if ( (v16 & 1) != 0 )
          {
            __asm
            {
              vandps  xmm0, xmm8, xmm6
              vcomiss xmm0, cs:JOLT_CONTROLLER_THRESHOLD
            }
            if ( (v16 & 1) != 0 && (v25 & 1) == 0 )
            {
              BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_SKYDIVE_JOLT_LEFT, 0, 1, &_R15->holdrand);
              v22 = 1;
            }
          }
          if ( (v16 & 2) != 0 )
          {
            __asm
            {
              vandps  xmm0, xmm8, xmm6
              vcomiss xmm0, cs:JOLT_CONTROLLER_THRESHOLD
            }
            if ( (v16 & 2) != 0 && (v25 & 2) == 0 )
            {
              BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_SKYDIVE_JOLT_RIGHT, 0, 1, &_R15->holdrand);
              v22 = 1;
            }
          }
        }
        if ( !v24 )
        {
          if ( (v16 & 4) != 0 )
          {
            __asm
            {
              vandps  xmm0, xmm7, xmm6
              vcomiss xmm0, cs:JOLT_CONTROLLER_THRESHOLD
            }
            if ( (v16 & 4) != 0 && (v25 & 4) == 0 )
            {
              BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_SKYDIVE_JOLT_FORWARD, 0, 1, &_R15->holdrand);
              v24 = 1;
            }
          }
          if ( (v16 & 8) != 0 )
          {
            __asm
            {
              vandps  xmm0, xmm7, xmm6
              vcomiss xmm0, cs:JOLT_CONTROLLER_THRESHOLD
            }
            if ( (v16 & 8) != 0 && (v25 & 8) == 0 )
            {
              BG_AnimScriptEvent(pm->m_bgHandler, ps, ANIM_ET_SKYDIVE_JOLT_BACKWARD, 0, 1, &_R15->holdrand);
              v24 = 1;
            }
          }
        }
        if ( v22 && v24 )
          break;
        __asm { vaddss  xmm9, xmm9, dword ptr [r15+24h] }
        if ( --v19 < 0 )
          v19 = 7;
        v23 = ++v39 < 8;
      }
      while ( v39 < 8 );
      __asm
      {
        vmovaps xmm6, [rsp+0A8h+var_48]
        vmovaps xmm9, [rsp+0A8h+var_78]
      }
    }
    ps->skydivePlayerState.controllerBufferWriteIndex = (ps->skydivePlayerState.controllerBufferWriteIndex + 1) & 7;
    __asm
    {
      vmovaps xmm8, [rsp+0A8h+var_68]
      vmovaps xmm7, [rsp+0A8h+var_58]
    }
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
  char v8; 
  char v9; 
  bool v11; 
  char v12; 
  PlayerAnimScriptEventType v13; 
  bool v14; 
  bool v18; 
  char v19; 
  PlayerAnimScriptEventType v20; 
  vec2_t StickCartesianCoords; 

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
  __asm { vmovaps [rsp+58h+var_28], xmm6 }
  StickCartesianCoords = BG_GetStickCartesianCoords(pm->cmd.rightmove, pm->cmd.forwardmove);
  __asm
  {
    vmovss  xmm6, dword ptr [rsp+58h+arg_0+4]
    vcomiss xmm6, cs:INPUT_DEAD_ZONE
  }
  v11 = !(v8 | v9);
  v12 = ps->skydivePlayerState.flags[0] & 2;
  if ( v12 || v8 | v9 )
  {
    if ( !v12 )
      goto LABEL_16;
    if ( !(v8 | v9) )
      goto LABEL_17;
    v13 = ANIM_ET_SKYDIVE_END_THRUST;
  }
  else
  {
    v13 = ANIM_ET_SKYDIVE_BEGIN_THRUST;
  }
  BG_AnimScriptEvent(pm->m_bgHandler, ps, v13, 0, 1, &pml->holdrand);
LABEL_16:
  if ( !v11 )
  {
    v14 = (ps->skydivePlayerState.flags[0] & 0xFD) == 0;
    ps->skydivePlayerState.flags[0] &= ~2u;
    goto LABEL_19;
  }
LABEL_17:
  v14 = 0;
  ps->skydivePlayerState.flags[0] |= 2u;
LABEL_19:
  __asm
  {
    vmovss  xmm0, cs:INPUT_DEAD_ZONE
    vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000
    vcomiss xmm1, xmm6
    vmovaps xmm6, [rsp+58h+var_28]
  }
  v18 = !v14;
  v19 = ps->skydivePlayerState.flags[0] & 4;
  if ( v19 || v14 )
  {
    if ( !v19 )
      goto LABEL_26;
    if ( !v14 )
    {
LABEL_27:
      ps->skydivePlayerState.flags[0] |= 4u;
      return;
    }
    v20 = ANIM_ET_SKYDIVE_END_BRAKE;
  }
  else
  {
    v20 = ANIM_ET_SKYDIVE_BEGIN_BRAKE;
  }
  BG_AnimScriptEvent(pm->m_bgHandler, ps, v20, 0, 1, &pml->holdrand);
LABEL_26:
  if ( v18 )
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
  char rightmove; 
  char v8; 
  char forwardmove; 
  bool v10; 
  char v20; 
  PlayerAnimScriptEventType v21; 
  vec2_t StickCartesianCoords; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1343, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RBX = pm->ps;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1343, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  rightmove = pm->cmd.rightmove;
  v8 = _RBX->skydivePlayerState.flags[0] & 1;
  forwardmove = pm->cmd.forwardmove;
  if ( _RBX->skydivePlayerState.state[0] == 1 )
  {
    _RDI = BG_GetSuitDef(_RBX->suitIndex);
    if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 2884, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+1D8h]
      vmulss  xmm5, xmm0, cs:__real@3b360b61
      vaddss  xmm2, xmm5, cs:__real@3f000000
      vxorps  xmm0, xmm0, xmm0
      vroundss xmm4, xmm0, xmm2, 1
      vsubss  xmm1, xmm5, xmm4
      vmulss  xmm0, xmm1, cs:__real@43b40000
      vcomiss xmm0, dword ptr [rdi+3D8h]
    }
    StickCartesianCoords = BG_GetStickCartesianCoords(rightmove, forwardmove);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+58h+arg_0+4]
      vcomiss xmm0, dword ptr [rdi+3DCh]
    }
    v10 = !v20;
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
LABEL_21:
        _RBX->skydivePlayerState.flags[0] |= 1u;
        return;
      }
      v21 = ANIM_ET_SKYDIVE_END_SUPER_DIVE;
    }
    else
    {
      if ( !v10 )
        goto LABEL_22;
      v21 = ANIM_ET_SKYDIVE_BEGIN_SUPER_DIVE;
    }
    BG_AnimScriptEvent(pm->m_bgHandler, _RBX, v21, 0, 1, &pml->holdrand);
  }
  if ( v10 )
    goto LABEL_21;
LABEL_22:
  _RBX->skydivePlayerState.flags[0] &= ~1u;
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
    _RSI = BG_GetSuitDef(ps->suitIndex);
    if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1577, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
      __debugbreak();
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm0, dword ptr [rsi+3D0h]
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
  char v8; 
  char v9; 
  const BgPlayerTraceInfo *v14; 
  const BgHandler *m_bgHandler; 
  Physics_WorldId v16; 
  BgTrace v18; 
  vec3_t vec; 
  trace_t results; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1617, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1617, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !ps->pm_type && (unsigned __int8)(ps->skydivePlayerState.state[0] - 2) <= 1u && ps->skydivePlayerState.animState != 10 )
  {
    _RBX = DCONST_DVARFLT_skydive_prep_for_landing_height;
    if ( !DCONST_DVARFLT_skydive_prep_for_landing_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_prep_for_landing_height") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm2, dword ptr [rbx+28h]
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm2, xmm0
    }
    if ( !(v8 | v9) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+30h]
        vmovss  dword ptr [rsp+0F8h+vec], xmm0
        vmovss  xmm1, dword ptr [rdi+34h]
        vmovss  dword ptr [rsp+0F8h+vec+4], xmm1
        vmovss  xmm0, dword ptr [rdi+38h]
        vxorps  xmm1, xmm2, cs:__xmm@80000000800000008000000080000000; height
        vmovss  dword ptr [rsp+0F8h+vec+8], xmm0
      }
      WorldUpReferenceFrame::AddUpContribution(&pm->refFrame, *(float *)&_XMM1, &vec);
      v14 = pm->m_bgHandler->GetPlayerTraceInfo(pm->m_bgHandler, (unsigned int)ps->clientNum);
      BgTrace::BgTrace(&v18, v14);
      m_bgHandler = pm->m_bgHandler;
      v18.m_flags |= 0x80u;
      v16 = m_bgHandler->GetPhysicsWorldId((BgHandler *)m_bgHandler);
      BgTrace::LegacyTraceHandler(&v18, v16, &results, &ps->origin, &vec, &bounds_origin, ps->clientNum, pm->tracemask, ps);
      v18.m_flags &= ~0x80u;
      if ( !results.startsolid )
      {
        __asm
        {
          vmovss  xmm0, [rsp+0F8h+results.fraction]
          vucomiss xmm0, cs:__real@3f800000
        }
      }
      if ( (unsigned __int8)(ps->skydivePlayerState.animState - 9) > 1u )
        ps->skydivePlayerState.animState = 2;
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
  playerState_s *v17; 
  const dvar_t *v18; 
  bool v19; 
  char v44; 
  const BgHandler *m_bgHandler; 
  const BgPlayerTraceInfo *v58; 
  const BgHandler *v59; 
  Physics_WorldId v60; 
  double contentMask; 
  playerState_s *ps; 
  BgTrace v77; 
  vec3_t end; 
  vec3_t start; 
  Bounds bounds; 
  trace_t results; 

  _RBX = inOutTrace;
  _R12 = groundTraceEnd;
  _R15 = groundTraceStart;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1745, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  v17 = pm->ps;
  if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1745, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v18 = DVARBOOL_skydive_enable_faulty_base_jump_fix;
  if ( !DVARBOOL_skydive_enable_faulty_base_jump_fix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_enable_faulty_base_jump_fix") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  v19 = !v18->current.enabled;
  if ( v18->current.enabled )
  {
    __asm
    {
      vmovaps [rsp+1B0h+var_60], xmm9
      vmovss  xmm9, cs:__real@3f800000
      vcomiss xmm9, dword ptr [rbx]
    }
    if ( v19 )
    {
      _RDI = DVARFLT_skydive_ground_sweep_sphere_radius;
      __asm
      {
        vmovaps [rsp+1B0h+var_30], xmm6
        vmovaps [rsp+1B0h+var_40], xmm7
        vmovaps [rsp+1B0h+var_50], xmm8
        vmovaps [rsp+1B0h+var_70], xmm10
        vmovaps [rsp+1B0h+var_80], xmm11
        vmovaps [rsp+1B0h+var_90], xmm12
      }
      if ( !DVARFLT_skydive_ground_sweep_sphere_radius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_ground_sweep_sphere_radius") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm { vmovss  xmm10, dword ptr [rdi+28h] }
      _RDI = DVARFLT_skydive_ground_sweep_length;
      if ( !DVARFLT_skydive_ground_sweep_length && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skydive_ground_sweep_length") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+28h]
        vminss  xmm8, xmm0, [rbp+0B0h+maxGroundSweepLength]
        vmovss  xmm1, dword ptr [r12]
        vsubss  xmm6, xmm1, dword ptr [r15]
        vmovss  xmm0, dword ptr [r12+4]
        vsubss  xmm5, xmm0, dword ptr [r15+4]
        vmovss  xmm1, dword ptr [r12+8]
        vsubss  xmm4, xmm1, dword ptr [r15+8]
        vmulss  xmm0, xmm6, xmm6
        vmulss  xmm2, xmm5, xmm5
        vaddss  xmm3, xmm2, xmm0
        vmulss  xmm1, xmm4, xmm4
        vaddss  xmm2, xmm3, xmm1
        vsqrtss xmm7, xmm2, xmm2
        vcomiss xmm7, xmm8
        vcmpless xmm0, xmm7, cs:__real@80000000
        vblendvps xmm0, xmm7, xmm9, xmm0
        vdivss  xmm1, xmm9, xmm0
        vmulss  xmm6, xmm6, xmm1
        vmulss  xmm11, xmm5, xmm1
        vmulss  xmm12, xmm4, xmm1
      }
      if ( v44 | v19 )
      {
        __asm
        {
          vcvtss2sd xmm0, xmm8, xmm8
          vmovsd  [rsp+1B0h+ps], xmm0
          vcvtss2sd xmm1, xmm7, xmm7
          vmovsd  qword ptr [rsp+1B0h+contentMask], xmm1
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_skydive.cpp", 1765, ASSERT_TYPE_ASSERT, "( groundTraceLength ) > ( sweepLength )", "%s > %s\n\t%g, %g", "groundTraceLength", "sweepLength", contentMask, *(double *)&ps) )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm1, dword ptr [r15]
        vmovss  xmm3, dword ptr [r15+4]
        vmovss  xmm4, dword ptr [r15+8]
      }
      m_bgHandler = pm->m_bgHandler;
      __asm
      {
        vmovss  dword ptr [rbp+0B0h+start], xmm1
        vmulss  xmm0, xmm6, xmm8
        vaddss  xmm1, xmm0, xmm1
        vmovss  dword ptr [rsp+1B0h+end], xmm1
        vmulss  xmm2, xmm11, xmm8
        vaddss  xmm0, xmm2, xmm3
        vmovss  dword ptr [rsp+1B0h+end+4], xmm0
        vxorps  xmm0, xmm0, xmm0
        vmovss  dword ptr [rbp+0B0h+start+4], xmm3
        vmovss  dword ptr [rbp+0B0h+start+8], xmm4
        vmovss  dword ptr [rbp+0B0h+var_120.midPoint], xmm0
        vmovss  dword ptr [rbp+0B0h+var_120.midPoint+4], xmm0
        vmovss  dword ptr [rbp+0B0h+var_120.midPoint+8], xmm0
        vmovss  dword ptr [rbp+0B0h+var_120.halfSize], xmm10
        vmovss  dword ptr [rbp+0B0h+var_120.halfSize+4], xmm10
        vmovss  dword ptr [rbp+0B0h+var_120.halfSize+8], xmm10
        vmulss  xmm1, xmm12, xmm8
        vaddss  xmm2, xmm1, xmm4
        vmovss  dword ptr [rsp+1B0h+end+8], xmm2
      }
      v58 = m_bgHandler->GetPlayerTraceInfo(m_bgHandler, v17->clientNum);
      BgTrace::BgTrace(&v77, v58);
      v59 = pm->m_bgHandler;
      v77.m_flags |= 0x80u;
      v60 = v59->GetPhysicsWorldId((BgHandler *)v59);
      BgTrace::LegacyTraceHandler(&v77, v60, &results, &start, &end, &bounds, v17->clientNum, pm->tracemask, v17);
      __asm
      {
        vmovss  xmm2, [rbp+0B0h+results.fraction]
        vucomiss xmm2, xmm9
        vmovaps xmm12, [rsp+1B0h+var_90]
        vmovaps xmm11, [rsp+1B0h+var_80]
        vmovaps xmm10, [rsp+1B0h+var_70]
        vmovaps xmm6, [rsp+1B0h+var_30]
      }
      if ( !v19 )
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+0B0h+results.fraction]
          vmovups ymm1, ymmword ptr [rbp+0B0h+results.contents]
          vmovups ymmword ptr [rbx], ymm0
          vmovups xmm0, xmmword ptr [rbp+0B0h+results.allsolid]
          vmovups ymmword ptr [rbx+20h], ymm1
          vmovsd  xmm1, [rbp+0B0h+results.debugHitName]
          vmovups xmmword ptr [rbx+40h], xmm0
          vmulss  xmm0, xmm2, xmm8
          vdivss  xmm2, xmm0, xmm7
          vmovsd  qword ptr [rbx+50h], xmm1
          vmovss  dword ptr [rbx], xmm2
        }
      }
      __asm
      {
        vmovaps xmm8, [rsp+1B0h+var_50]
        vmovaps xmm7, [rsp+1B0h+var_40]
      }
    }
    __asm { vmovaps xmm9, [rsp+1B0h+var_60] }
  }
}

