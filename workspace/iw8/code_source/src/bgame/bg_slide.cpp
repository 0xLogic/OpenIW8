/*
==============
Slide_SlideOutSpeedScale
==============
*/

double __fastcall Slide_SlideOutSpeedScale(const playerState_s *ps, const int gameTime)
{
  double result; 

  *(float *)&result = ?Slide_SlideOutSpeedScale@@YAMPEBUplayerState_s@@H@Z(ps, gameTime);
  return result;
}

/*
==============
Slide_SlideOutFrictionScale
==============
*/

double __fastcall Slide_SlideOutFrictionScale(const playerState_s *ps, const int gameTime)
{
  double result; 

  *(float *)&result = ?Slide_SlideOutFrictionScale@@YAMPEBUplayerState_s@@H@Z(ps, gameTime);
  return result;
}

/*
==============
Slide_SetEnabled
==============
*/

void __fastcall Slide_SetEnabled(playerState_s *ps, int enabled)
{
  ?Slide_SetEnabled@@YAXPEAUplayerState_s@@H@Z(ps, enabled);
}

/*
==============
Slide_SlideInSpeedScale
==============
*/

double __fastcall Slide_SlideInSpeedScale(const playerState_s *ps, const int gameTime)
{
  double result; 

  *(float *)&result = ?Slide_SlideInSpeedScale@@YAMPEBUplayerState_s@@H@Z(ps, gameTime);
  return result;
}

/*
==============
Slide_PlayOrStopGesture
==============
*/

void __fastcall Slide_PlayOrStopGesture(playerState_s *ps, const BgWeaponMap *weaponMap, const BgHandler *pmHandler, int time, SlideGestureRequest request)
{
  ?Slide_PlayOrStopGesture@@YAXPEAUplayerState_s@@PEBVBgWeaponMap@@PEBVBgHandler@@HW4SlideGestureRequest@@@Z(ps, weaponMap, pmHandler, time, request);
}

/*
==============
Slide_CanSlideNowConditionsMet
==============
*/

bool __fastcall Slide_CanSlideNowConditionsMet(const playerState_s *ps)
{
  return ?Slide_CanSlideNowConditionsMet@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
Slide_ShouldReadyWeapon
==============
*/

bool __fastcall Slide_ShouldReadyWeapon(const pmove_t *pm)
{
  return ?Slide_ShouldReadyWeapon@@YA_NPEBVpmove_t@@@Z(pm);
}

/*
==============
Slide_CanSlide
==============
*/

int __fastcall Slide_CanSlide(pmove_t *pm, pml_t *pml)
{
  return ?Slide_CanSlide@@YAHPEAVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
Slide_CanSlideFromGroundConditionsMet
==============
*/

bool __fastcall Slide_CanSlideFromGroundConditionsMet(const playerState_s *ps, const int serverTime)
{
  return ?Slide_CanSlideFromGroundConditionsMet@@YA_NPEBUplayerState_s@@H@Z(ps, serverTime);
}

/*
==============
Slide_CanSlideFromAir
==============
*/

bool __fastcall Slide_CanSlideFromAir(pmove_t *pm)
{
  return ?Slide_CanSlideFromAir@@YA_NPEAVpmove_t@@@Z(pm);
}

/*
==============
Slide_SlideOutInAirFrictionScale
==============
*/

double __fastcall Slide_SlideOutInAirFrictionScale(const playerState_s *ps, const int gameTime)
{
  double result; 

  *(float *)&result = ?Slide_SlideOutInAirFrictionScale@@YAMPEBUplayerState_s@@H@Z(ps, gameTime);
  return result;
}

/*
==============
Slide_FrictionScale
==============
*/

double __fastcall Slide_FrictionScale(pmove_t *pm, const pml_t *pml)
{
  double result; 

  *(float *)&result = ?Slide_FrictionScale@@YAMPEAVpmove_t@@PEBUpml_t@@@Z(pm, pml);
  return result;
}

/*
==============
Slide_SetSlideViewHeight
==============
*/

void __fastcall Slide_SetSlideViewHeight(pmove_t *pm)
{
  ?Slide_SetSlideViewHeight@@YAXPEAVpmove_t@@@Z(pm);
}

/*
==============
Slide_CanSwitchWeapons
==============
*/

int __fastcall Slide_CanSwitchWeapons(LocalClientNum_t localClientNum, const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  return ?Slide_CanSwitchWeapons@@YAHW4LocalClientNum_t@@PEBVBgWeaponMap@@PEBUplayerState_s@@@Z(localClientNum, weaponMap, ps);
}

/*
==============
Slide_IsInSprintDelay
==============
*/

bool __fastcall Slide_IsInSprintDelay(const playerState_s *ps, const int gameTime)
{
  return ?Slide_IsInSprintDelay@@YA_NPEBUplayerState_s@@H@Z(ps, gameTime);
}

/*
==============
Slide_GetEarliestValidStartFireTime
==============
*/

bool __fastcall Slide_GetEarliestValidStartFireTime(const pmove_t *pm, int *outEarliestValidFireTime)
{
  return ?Slide_GetEarliestValidStartFireTime@@YA_NPEBVpmove_t@@AEAH@Z(pm, outEarliestValidFireTime);
}

/*
==============
Slide_IsInSlideInState
==============
*/

bool __fastcall Slide_IsInSlideInState(const playerState_s *ps, const int gameTime)
{
  return ?Slide_IsInSlideInState@@YA_NPEBUplayerState_s@@H@Z(ps, gameTime);
}

/*
==============
Slide_SlideOutStateFraction
==============
*/

double __fastcall Slide_SlideOutStateFraction(const playerState_s *ps, const int gameTime)
{
  double result; 

  *(float *)&result = ?Slide_SlideOutStateFraction@@YAMPEBUplayerState_s@@H@Z(ps, gameTime);
  return result;
}

/*
==============
Slide_CanShootAndSlide
==============
*/

int __fastcall Slide_CanShootAndSlide(const playerState_s *ps)
{
  return ?Slide_CanShootAndSlide@@YAHPEBUplayerState_s@@@Z(ps);
}

/*
==============
Slide_ScaleVelocityBeforeJump
==============
*/

void __fastcall Slide_ScaleVelocityBeforeJump(playerState_s *ps)
{
  ?Slide_ScaleVelocityBeforeJump@@YAXPEAUplayerState_s@@@Z(ps);
}

/*
==============
Slide_CanDoLateSlideJump
==============
*/

bool __fastcall Slide_CanDoLateSlideJump(const playerState_s *ps, const int time)
{
  return ?Slide_CanDoLateSlideJump@@YA_NPEBUplayerState_s@@H@Z(ps, time);
}

/*
==============
Slide_GetPlayerMovementViewDelta
==============
*/

double __fastcall Slide_GetPlayerMovementViewDelta(const playerState_s *ps, const pmove_t *pm)
{
  double result; 

  *(float *)&result = ?Slide_GetPlayerMovementViewDelta@@YAMPEBUplayerState_s@@PEBVpmove_t@@@Z(ps, pm);
  return result;
}

/*
==============
Slide_Interrupt
==============
*/

void __fastcall Slide_Interrupt(playerState_s *ps, const BgWeaponMap *weaponMap, const BgHandler *pmHandler, int time)
{
  ?Slide_Interrupt@@YAXPEAUplayerState_s@@PEBVBgWeaponMap@@PEBVBgHandler@@H@Z(ps, weaponMap, pmHandler, time);
}

/*
==============
Slide_GetViewAngleOffsets
==============
*/

void __fastcall Slide_GetViewAngleOffsets(const playerState_s *ps, const int gameTime, vec3_t *outAngles)
{
  ?Slide_GetViewAngleOffsets@@YAXPEBUplayerState_s@@HAEATvec3_t@@@Z(ps, gameTime, outAngles);
}

/*
==============
Slide_HasClearance
==============
*/

bool __fastcall Slide_HasClearance(pmove_t *pm, pml_t *pml)
{
  return ?Slide_HasClearance@@YA_NPEAVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
Slide_Update
==============
*/

void __fastcall Slide_Update(pmove_t *pm, pml_t *pml)
{
  ?Slide_Update@@YAXPEAVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
Slide_CurrrentSlideStatePreventsFiring
==============
*/

bool __fastcall Slide_CurrrentSlideStatePreventsFiring(const pmove_t *pm)
{
  return ?Slide_CurrrentSlideStatePreventsFiring@@YA_NPEBVpmove_t@@@Z(pm);
}

/*
==============
Slide_GetSlideFraction
==============
*/

double __fastcall Slide_GetSlideFraction(const playerState_s *ps, const int gameTime)
{
  double result; 

  *(float *)&result = ?Slide_GetSlideFraction@@YAMPEBUplayerState_s@@H@Z(ps, gameTime);
  return result;
}

/*
==============
Slide_IsEnabled
==============
*/

int __fastcall Slide_IsEnabled(const playerState_s *ps)
{
  return ?Slide_IsEnabled@@YAHPEBUplayerState_s@@@Z(ps);
}

/*
==============
Slide_GesturePlayingInState
==============
*/

bool __fastcall Slide_GesturePlayingInState(const pmove_t *pm, int *outGestureInStateEndTime)
{
  return ?Slide_GesturePlayingInState@@YA_NPEBVpmove_t@@AEAH@Z(pm, outGestureInStateEndTime);
}

/*
==============
Slide_CanDoLateSlideJump
==============
*/
bool Slide_CanDoLateSlideJump(const playerState_s *ps, const int time)
{
  const dvar_t *v4; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 610, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Du) )
    return 0;
  v4 = DCONST_DVARINT_slide_lateJumpGraceMs;
  if ( !DCONST_DVARINT_slide_lateJumpGraceMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_lateJumpGraceMs") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  return time - ps->slideState.slideEndTime < v4->current.integer;
}

/*
==============
Slide_CanShootAndSlide
==============
*/
_BOOL8 Slide_CanShootAndSlide(const playerState_s *ps)
{
  return BG_GetSuitDef(ps->suitIndex)->slide_allow_firing;
}

/*
==============
Slide_CanSlide
==============
*/
__int64 Slide_CanSlide(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  playerState_s *v5; 
  const dvar_t *v6; 
  playerState_s *v7; 
  __int128 v8; 
  const dvar_t *v9; 
  __int128 v11; 
  double v14; 
  double v15; 
  const dvar_t *v16; 
  const BgHandler *m_bgHandler; 
  double Float_Internal_DebugName; 
  float v20; 
  double UpContribution; 
  vec2_t vec; 
  WorldUpReferenceFrame v23; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 796, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 796, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Du) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 798, ASSERT_TYPE_SANITY, "( !ps->pm_flags.TestFlag( PMoveFlagsCommon::SLIDE ) )", (const char *)&queryFormat, "!ps->pm_flags.TestFlag( PMoveFlagsCommon::SLIDE )") )
    __debugbreak();
  if ( ps->skydivePlayerState.state[0] || !Slide_IsEnabled(ps) || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 5u) || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0xBu) || BG_IsPlayerInExecution(ps) || BG_IsPlayerZeroG(ps) )
    return 0i64;
  v5 = pm->ps;
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 650, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v6 = DCONST_DVARINT_slide_delayTime;
  if ( !DCONST_DVARINT_slide_delayTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_delayTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.integer + v5->slideState.slideEndTime > pm->cmd.serverTime )
    return 0i64;
  v7 = pm->ps;
  if ( v7->groundEntityNum == 2047 || !pm->ground->groundPlane )
    return 0i64;
  if ( (ps->slideState.flags & 0x20) == 0 )
  {
    if ( !Slide_CanSlideFromGround(pm) )
    {
      if ( (pm->cmd.buttons & 0x400000) == 0 )
        return 0i64;
LABEL_40:
      BG_AddPredictableEventToPlayerstate(EV_STANCE_FORCE_CROUCH, 5u, pm->cmd.serverTime, pm->weaponMap, ps);
      return 0i64;
    }
LABEL_43:
    m_bgHandler = pm->m_bgHandler;
    if ( !pm->weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 739, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( ps->slideState.subsequentCount < 15 && ps->weapCommon.fWeaponPosFrac <= 0.0 && Slide_HasClearance(pm, pml) )
    {
      if ( !pm->ground->groundPlane )
        return 1i64;
      Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_slide_angle, "slide_angle");
      v20 = *(float *)&Float_Internal_DebugName;
      WorldUpReferenceFrame::WorldUpReferenceFrame(&v23, ps, m_bgHandler);
      UpContribution = WorldUpReferenceFrame::GetUpContribution(&v23, &pm->ground->trace.normal);
      if ( (float)(*(float *)&UpContribution * *(float *)&UpContribution) >= (float)(1.0 - (float)(v20 * v20)) )
        return 1i64;
    }
    goto LABEL_40;
  }
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 668, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v8 = LODWORD(v7->velocity.v[0]);
  v9 = DCONST_DVARFLT_slide_min_required_airVelocity;
  v11 = v8;
  *(float *)&v11 = fsqrt((float)(*(float *)&v8 * *(float *)&v8) + (float)(v7->velocity.v[1] * v7->velocity.v[1]));
  _XMM6 = v11;
  __asm
  {
    vcmpless xmm0, xmm6, cs:__real@80000000
    vblendvps xmm0, xmm6, xmm7, xmm0
  }
  vec.v[0] = *(float *)&v8 * (float)(1.0 / *(float *)&_XMM0);
  vec.v[1] = (float)(1.0 / *(float *)&_XMM0) * v7->velocity.v[1];
  if ( !DCONST_DVARFLT_slide_min_required_airVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_min_required_airVelocity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( *(float *)&v11 >= v9->current.value )
  {
    v14 = vectoyaw(&vec);
    v15 = AngleDelta(*(const float *)&v14, v7->viewangles.v[1]);
    v16 = DCONST_DVARFLT_slide_required_airAngle;
    if ( !DCONST_DVARFLT_slide_required_airAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_required_airAngle") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    if ( COERCE_FLOAT(LODWORD(v15) & _xmm) <= v16->current.value )
      goto LABEL_43;
  }
  BG_AddPredictableEventToPlayerstate((const entity_event_t)((ps->slideState.flags & 0x10 | 0xA0u) >> 4), 5u, pm->cmd.serverTime, pm->weaponMap, ps);
  ps->slideState.flags &= ~0x10u;
  return 0i64;
}

/*
==============
Slide_CanSlideFromAir
==============
*/
bool Slide_CanSlideFromAir(pmove_t *pm)
{
  playerState_s *ps; 
  __int128 v3; 
  const dvar_t *v4; 
  __int128 v6; 
  double v9; 
  double v10; 
  const dvar_t *v11; 
  vec2_t vec; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 668, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 668, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v3 = LODWORD(ps->velocity.v[0]);
  v4 = DCONST_DVARFLT_slide_min_required_airVelocity;
  v6 = v3;
  *(float *)&v6 = fsqrt((float)(*(float *)&v3 * *(float *)&v3) + (float)(ps->velocity.v[1] * ps->velocity.v[1]));
  _XMM6 = v6;
  __asm
  {
    vcmpless xmm0, xmm6, cs:__real@80000000
    vblendvps xmm0, xmm6, xmm1, xmm0
  }
  vec.v[0] = *(float *)&v3 * (float)(1.0 / *(float *)&_XMM0);
  vec.v[1] = (float)(1.0 / *(float *)&_XMM0) * ps->velocity.v[1];
  if ( !DCONST_DVARFLT_slide_min_required_airVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_min_required_airVelocity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( *(float *)&v6 < v4->current.value )
    return 0;
  v9 = vectoyaw(&vec);
  v10 = AngleDelta(*(const float *)&v9, ps->viewangles.v[1]);
  v11 = DCONST_DVARFLT_slide_required_airAngle;
  if ( !DCONST_DVARFLT_slide_required_airAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_required_airAngle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  return COERCE_FLOAT(LODWORD(v10) & _xmm) <= v11->current.value;
}

/*
==============
Slide_CanSlideFromGround
==============
*/
bool Slide_CanSlideFromGround(pmove_t *pm)
{
  playerState_s *ps; 
  int serverTime; 
  const dvar_t *v5; 
  const dvar_t *v6; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 701, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 701, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (pm->cmd.buttons & 0x400000) == 0 )
    return 0;
  serverTime = pm->cmd.serverTime;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 714, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v5 = DCONST_DVARINT_slide_min_sprint_time_ms;
  if ( !DCONST_DVARINT_slide_min_sprint_time_ms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_min_sprint_time_ms") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( serverTime - ps->sprintState.lastSprintStart < v5->current.integer && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x13u) || !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u) )
    return 0;
  v6 = DCONST_DVARFLT_slide_min_required_velocity;
  if ( !DCONST_DVARFLT_slide_min_required_velocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_min_required_velocity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  return fsqrt((float)((float)(ps->velocity.v[0] * ps->velocity.v[0]) + (float)(ps->velocity.v[1] * ps->velocity.v[1])) + (float)(ps->velocity.v[2] * ps->velocity.v[2])) >= v6->current.value;
}

/*
==============
Slide_CanSlideFromGroundConditionsMet
==============
*/
bool Slide_CanSlideFromGroundConditionsMet(const playerState_s *ps, const int serverTime)
{
  const dvar_t *v4; 
  const dvar_t *v5; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 714, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v4 = DCONST_DVARINT_slide_min_sprint_time_ms;
  if ( !DCONST_DVARINT_slide_min_sprint_time_ms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_min_sprint_time_ms") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( serverTime - ps->sprintState.lastSprintStart < v4->current.integer && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x13u) || !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u) )
    return 0;
  v5 = DCONST_DVARFLT_slide_min_required_velocity;
  if ( !DCONST_DVARFLT_slide_min_required_velocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_min_required_velocity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  return fsqrt((float)((float)(ps->velocity.v[0] * ps->velocity.v[0]) + (float)(ps->velocity.v[1] * ps->velocity.v[1])) + (float)(ps->velocity.v[2] * ps->velocity.v[2])) >= v5->current.value;
}

/*
==============
Slide_CanSlideNowConditionsMet
==============
*/
bool Slide_CanSlideNowConditionsMet(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 778, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return ps->slideState.subsequentCount < 15 && ps->weapCommon.fWeaponPosFrac <= 0.0;
}

/*
==============
Slide_CanSwitchWeapons
==============
*/
_BOOL8 Slide_CanSwitchWeapons(LocalClientNum_t localClientNum, const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  CgHandler *Handler; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 589, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 590, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Du) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 591, ASSERT_TYPE_ASSERT, "(ps->pm_flags.TestFlag( PMoveFlagsCommon::SLIDE ))", (const char *)&queryFormat, "ps->pm_flags.TestFlag( PMoveFlagsCommon::SLIDE )") )
    __debugbreak();
  if ( BG_GetSuitDef(ps->suitIndex)->slide_allow_weapon_switch )
    return 1i64;
  Handler = CgHandler::getHandler(localClientNum);
  return PM_Weapon_IsInInterruptibleState(weaponMap, ps, WEAPON_HAND_DEFAULT, Handler);
}

/*
==============
Slide_CollisionTrace
==============
*/
bool Slide_CollisionTrace(pmove_t *pm, const vec3_t *traceDir, int traceOffset, float traceDist, float checkRadius)
{
  playerState_s *ps; 
  float v13; 
  const dvar_t *v14; 
  trace_t outResults; 
  vec3_t vec; 
  vec3_t end; 
  Bounds bounds; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 87, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 87, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  _XMM2 = LODWORD(checkRadius);
  __asm
  {
    vcmpltss xmm1, xmm2, cs:__real@3a83126f
    vblendvps xmm3, xmm2, xmm0, xmm1
  }
  *(float *)&_XMM2 = traceDir->v[1];
  bounds = *pm->bounds;
  *(float *)&_XMM1 = traceDir->v[0];
  bounds.halfSize.v[0] = *(float *)&_XMM3;
  bounds.halfSize.v[1] = *(float *)&_XMM3;
  *(float *)&_XMM3 = traceDir->v[2];
  vec.v[0] = *(float *)&_XMM1 + ps->origin.v[0];
  vec.v[1] = *(float *)&_XMM2 + ps->origin.v[1];
  vec.v[2] = *(float *)&_XMM3 + ps->origin.v[2];
  end.v[0] = (float)(*(float *)&_XMM1 * traceDist) + ps->origin.v[0];
  end.v[1] = (float)(*(float *)&_XMM2 * traceDist) + ps->origin.v[1];
  v13 = (float)traceOffset;
  end.v[2] = (float)(*(float *)&_XMM3 * traceDist) + ps->origin.v[2];
  WorldUpReferenceFrame::AddUpContribution(&pm->refFrame, v13, &vec);
  WorldUpReferenceFrame::AddUpContribution(&pm->refFrame, v13, &end);
  BgTrace::LegacyPlayerTrace(pm->m_trace, pm, &outResults, &vec, &end, &bounds, ps->clientNum, 16842753, 1);
  v14 = DCONST_DVARBOOL_slide_debug;
  if ( !DCONST_DVARBOOL_slide_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  if ( v14->current.enabled && pm->m_bgHandler->IsClient((BgHandler *)pm->m_bgHandler) )
  {
    ((void (__fastcall *)(const BgHandler *, vec3_t *, Bounds *))pm->m_bgHandler->DebugBox)(pm->m_bgHandler, &vec, &bounds);
    ((void (__fastcall *)(const BgHandler *, vec3_t *, Bounds *))pm->m_bgHandler->DebugBox)(pm->m_bgHandler, &end, &bounds);
  }
  return !outResults.startsolid && !outResults.allsolid && outResults.fraction >= 1.0;
}

/*
==============
Slide_CurrrentSlideStatePreventsFiring
==============
*/
bool Slide_CurrrentSlideStatePreventsFiring(const pmove_t *pm)
{
  const dvar_t *v1; 
  playerState_s *ps; 
  const Gesture *SlideGesture; 
  GestureAnimationSettings *AnimationSettings; 
  int v6; 
  const dvar_t *v8; 

  v1 = DCONST_DVARBOOL_slide_gestureInStateBlocksFiring;
  if ( !DCONST_DVARBOOL_slide_gestureInStateBlocksFiring && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_gestureInStateBlocksFiring") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( !v1->current.enabled )
    return 0;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 1427, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 1427, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Du) )
    return 0;
  SlideGesture = Slide_GetSlideGesture(pm);
  if ( !SlideGesture )
    return 0;
  AnimationSettings = BG_Gesture_GetAnimationSettings(SlideGesture);
  if ( !AnimationSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 1445, ASSERT_TYPE_ASSERT, "(gestureAnimSettings)", (const char *)&queryFormat, "gestureAnimSettings") )
    __debugbreak();
  v6 = ps->slideState.slideStartTime + AnimationSettings->inDuration;
  if ( pm->cmd.serverTime <= v6 )
    return 1;
  if ( v6 <= 0 )
    return 0;
  v8 = DCONST_DVARINT_slide_gestureInStateBlocksFiringExtendedTimeMs;
  if ( !DCONST_DVARINT_slide_gestureInStateBlocksFiringExtendedTimeMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_gestureInStateBlocksFiringExtendedTimeMs") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  return pm->cmd.serverTime <= v6 + v8->current.integer;
}

/*
==============
Slide_End
==============
*/
void Slide_End(pmove_t *pm, pml_t *pml, const SlideEndReason slideEndReason)
{
  playerState_s *ps; 
  unsigned int v7; 
  int lastSprintStart; 
  const dvar_t *v9; 
  const dvar_t *v10; 
  const dvar_t *v11; 
  int SprintLeft; 
  const dvar_t *v13; 
  int v14; 
  int v15; 
  int v16; 
  SlideGestureRequest v17; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 506, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 507, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 508, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 508, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  Slide_UpdateSlideFractionOnStateChange(pm);
  Slide_SetStanceForSlideEnd(pm, pml);
  ps->pm_flags.m_flags[0] &= ~0x20000000u;
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&ps->eFlags, GameModeFlagValues::ms_mpValue, 0x1Du);
  ps->slideState.flags &= ~0x20u;
  ps->slideState.slideEndTime = pm->cmd.serverTime;
  PM_CheckDuck(pm, pml);
  v7 = ps->slideState.flags | 0x40;
  if ( slideEndReason != SLIDE_END_REASON_LOST_GROUND_CONTACT )
    v7 = ps->slideState.flags & 0xFFFFFFBF;
  ps->slideState.flags = v7;
  lastSprintStart = ps->sprintState.lastSprintStart;
  ps->pm_flags.m_flags[0] &= ~0x100000u;
  if ( lastSprintStart > 0 )
  {
    v9 = DCONST_DVARBOOL_slide_use_sprint_meter;
    if ( !DCONST_DVARBOOL_slide_use_sprint_meter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_use_sprint_meter") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( v9->current.enabled )
    {
      v10 = DVARBOOL_killswitch_enforce_sprint_out_fire_interrupt_enabled;
      if ( !DVARBOOL_killswitch_enforce_sprint_out_fire_interrupt_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_enforce_sprint_out_fire_interrupt_enabled") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v10);
      if ( !v10->current.enabled )
        ps->sprintState.lastSprintEnd = pm->cmd.serverTime;
    }
    v11 = DCONST_DVARMPBOOL_superSprintEnable;
    if ( !DCONST_DVARMPBOOL_superSprintEnable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "superSprintEnable") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    if ( !v11->current.enabled )
    {
      SprintLeft = PM_GetSprintLeft(pm->weaponMap, pm, pm->cmd.serverTime);
      v13 = DCONST_DVARFLT_player_sprintMinActivationTime;
      v14 = SprintLeft;
      if ( !DCONST_DVARFLT_player_sprintMinActivationTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_sprintMinActivationTime") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v13);
      v15 = (int)(float)(v13->current.value * 1000.0);
      v16 = v14 - 1000 * BG_GetSuitDef(ps->suitIndex)->slide_sprint_penalty_ms;
      if ( v16 >= v15 )
        v15 = v16;
      PM_SetSprintLeft(pm->weaponMap, ps, pm->cmd.serverTime, v15);
    }
  }
  v17 = SLIDEGESTUREREQUEST_STOP;
  switch ( slideEndReason )
  {
    case SLIDE_END_REASON_ADS:
      v17 = SLIDEGESTUREREQUEST_STOP_FOR_ADS;
      break;
    case SLIDE_END_REASON_JUMP:
      v17 = SLIDEGESTUREREQUEST_STOP_FOR_JUMP;
      break;
    case SLIDE_END_REASON_LAST_STAND:
      v17 = SLIDEGESTUREREQUEST_STOP_NOW;
      break;
  }
  Slide_PlayOrStopGesture(ps, pm->weaponMap, pm->m_bgHandler, pm->cmd.serverTime, v17);
}

/*
==============
Slide_EndCheck
==============
*/
__int64 Slide_EndCheck(pmove_t *pm, pml_t *pml, int *outTimeRemaining)
{
  playerState_s *ps; 
  const dvar_t *v8; 
  playerState_s *v9; 
  const dvar_t *v10; 
  int integer; 
  vec3_t vec; 
  vec3_t start; 
  trace_t outResults; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 976, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 976, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 977, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( !outTimeRemaining && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 978, ASSERT_TYPE_ASSERT, "(outTimeRemaining)", (const char *)&queryFormat, "outTimeRemaining") )
    __debugbreak();
  if ( Slide_IsTimeToEndSlide(pm, outTimeRemaining) || SLOBYTE(pm->cmd.buttons) < 0 && SLOBYTE(pm->oldcmd.buttons) >= 0 )
    return 1i64;
  if ( !BG_PlayerDualWielding(pm->ps) && (pm->cmd.buttons & 0x200) != 0 && !BG_GetSuitDef(pm->ps->suitIndex)->slide_allow_ads && PM_CalcIsAdsAllowed(pm) )
    return 2i64;
  if ( (pm->cmd.buttons & 0x100) != 0 )
    return 4i64;
  v8 = DCONST_DVARFLT_slide_min_continue_velocity;
  if ( !DCONST_DVARFLT_slide_min_continue_velocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_min_continue_velocity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( fsqrt((float)((float)(ps->velocity.v[0] * ps->velocity.v[0]) + (float)(ps->velocity.v[1] * ps->velocity.v[1])) + (float)(ps->velocity.v[2] * ps->velocity.v[2])) < v8->current.value || ps->pm_type >= 7 || (pm->cmd.buttons & 0x3000) != 0 && !BG_GetSuitDef(pm->ps->suitIndex)->slide_allow_firing )
    return 1i64;
  if ( (pm->cmd.buttons & 0x40) != 0 )
    return 1i64;
  v9 = pm->ps;
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 945, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( v9->groundEntityNum == 2047 )
  {
    v10 = DCONST_DVARFLT_slide_maxHeightFromGround;
    if ( !DCONST_DVARFLT_slide_maxHeightFromGround && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_maxHeightFromGround") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    integer = v10->current.integer;
    start = v9->origin;
    vec = v9->origin;
    WorldUpReferenceFrame::AddUpContribution(&pm->refFrame, COERCE_FLOAT(integer ^ _xmm), &vec);
    BgTrace::LegacyPlayerTrace(pm->m_trace, pm, &outResults, &start, &vec, pm->bounds, v9->clientNum, pm->tracemask & 0xFD7FFFEF, 0);
    if ( outResults.fraction == 1.0 )
      return 3i64;
  }
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0xBu) )
    return 5i64;
  return BG_IsPlayerInExecution(ps);
}

/*
==============
Slide_FrictionScale
==============
*/
float Slide_FrictionScale(pmove_t *pm, const pml_t *pml)
{
  playerState_s *ps; 
  const SuitDef *SuitDef; 
  float result; 
  BgGroundState *ground; 
  float v8; 
  float v9; 
  BgGroundState *v10; 
  __int128 v11; 
  float v15; 
  float outScale; 
  vec3_t vec; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 1646, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 1646, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  SuitDef = BG_GetSuitDef(ps->suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 1649, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  if ( Slide_IsUnderSomething(pm) )
    return SuitDef->slide_frictionScaleBlocked;
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Du) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 1656, ASSERT_TYPE_ASSERT, "(ps->pm_flags.TestFlag( PMoveFlagsCommon::SLIDE ))", (const char *)&queryFormat, "ps->pm_flags.TestFlag( PMoveFlagsCommon::SLIDE )") )
    __debugbreak();
  if ( PM_GameInterface_Slide_FrictionScale(pm, pml, &outScale) )
    return outScale;
  ground = pm->ground;
  result = SuitDef->slide_frictionScaleNormal;
  outScale = result;
  if ( !ground->groundPlane )
    return result;
  v8 = ps->velocity.v[1];
  vec.v[0] = ps->velocity.v[0];
  v9 = ps->velocity.v[2];
  vec.v[1] = v8;
  vec.v[2] = v9;
  WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, 0.0, &vec);
  v10 = pm->ground;
  v11 = LODWORD(vec.v[1]);
  *(float *)&v11 = fsqrt((float)((float)(*(float *)&v11 * *(float *)&v11) + (float)(vec.v[0] * vec.v[0])) + (float)(vec.v[2] * vec.v[2]));
  _XMM3 = v11;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
  }
  vec.v[1] = vec.v[1] * (float)(1.0 / *(float *)&_XMM0);
  vec.v[0] = vec.v[0] * (float)(1.0 / *(float *)&_XMM0);
  vec.v[2] = vec.v[2] * (float)(1.0 / *(float *)&_XMM0);
  v15 = (float)((float)(vec.v[1] * v10->trace.normal.v[1]) + (float)(vec.v[0] * v10->trace.normal.v[0])) + (float)(vec.v[2] * v10->trace.normal.v[2]);
  if ( v15 > 0.2 )
    return SuitDef->slide_frictionScaleDownhill;
  if ( v15 >= -0.2 )
    return outScale;
  else
    return SuitDef->slide_frictionScaleUphill;
}

/*
==============
Slide_GesturePlayingInState
==============
*/
bool Slide_GesturePlayingInState(const pmove_t *pm, int *outGestureInStateEndTime)
{
  playerState_s *ps; 
  const Gesture *SlideGesture; 
  GestureAnimationSettings *AnimationSettings; 
  int v7; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 1427, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 1427, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  *outGestureInStateEndTime = 0;
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Du) )
    return 0;
  SlideGesture = Slide_GetSlideGesture(pm);
  if ( !SlideGesture )
    return 0;
  AnimationSettings = BG_Gesture_GetAnimationSettings(SlideGesture);
  if ( !AnimationSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 1445, ASSERT_TYPE_ASSERT, "(gestureAnimSettings)", (const char *)&queryFormat, "gestureAnimSettings") )
    __debugbreak();
  v7 = AnimationSettings->inDuration + ps->slideState.slideStartTime;
  *outGestureInStateEndTime = v7;
  return pm->cmd.serverTime <= v7;
}

/*
==============
Slide_GetEarliestValidStartFireTime
==============
*/
char Slide_GetEarliestValidStartFireTime(const pmove_t *pm, int *outEarliestValidFireTime)
{
  playerState_s *ps; 
  const Gesture *SlideGesture; 
  GestureAnimationSettings *AnimationSettings; 
  const dvar_t *v7; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 1403, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 1403, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  *outEarliestValidFireTime = 0;
  if ( ps->slideState.slideStartTime <= 0 )
    return 0;
  SlideGesture = Slide_GetSlideGesture(pm);
  if ( !SlideGesture )
    return 0;
  AnimationSettings = BG_Gesture_GetAnimationSettings(SlideGesture);
  if ( !AnimationSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 1419, ASSERT_TYPE_ASSERT, "(gestureAnimSettings)", (const char *)&queryFormat, "gestureAnimSettings") )
    __debugbreak();
  v7 = DCONST_DVARINT_slide_gestureInStateBlocksFiringExtendedTimeMs;
  if ( !DCONST_DVARINT_slide_gestureInStateBlocksFiringExtendedTimeMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_gestureInStateBlocksFiringExtendedTimeMs") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  *outEarliestValidFireTime = ps->slideState.slideStartTime + AnimationSettings->inDuration + v7->current.integer;
  return 1;
}

/*
==============
Slide_GetPlayerMovementViewDelta
==============
*/
float Slide_GetPlayerMovementViewDelta(const playerState_s *ps, const pmove_t *pm)
{
  float v2; 
  float v3; 
  double v5; 
  double v6; 
  vec3_t vec; 

  v2 = ps->velocity.v[1];
  vec.v[0] = ps->velocity.v[0];
  v3 = ps->velocity.v[2];
  vec.v[1] = v2;
  vec.v[2] = v3;
  WorldUpReferenceFrame::RemoveReferenceFrameFromVector(&pm->refFrame, &vec);
  v5 = vectoyaw((const vec2_t *)&vec);
  v6 = AngleDelta(*(const float *)&v5, ps->viewangles.v[1]);
  return *(float *)&v6;
}

/*
==============
Slide_GetSlideFraction
==============
*/
double Slide_GetSlideFraction(const playerState_s *ps, const int gameTime)
{
  const SuitDef *SuitDef; 
  double v5; 
  int slideStartTime; 
  int slideEndTime; 
  int v8; 
  float v9; 
  int v10; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 460, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  SuitDef = BG_GetSuitDef(ps->suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 463, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  v5 = MSG_UnpackUnsignedFloat(ps->weapCommon.slideFractionOnStateChange, 1.0, 8u);
  slideStartTime = ps->slideState.slideStartTime;
  slideEndTime = ps->slideState.slideEndTime;
  if ( slideStartTime <= slideEndTime )
  {
    v10 = gameTime - slideEndTime;
    if ( SuitDef->slide_viewBlendOutTimeMs <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 485, ASSERT_TYPE_ASSERT, "(suitDef->slide_viewBlendOutTimeMs > 0)", (const char *)&queryFormat, "suitDef->slide_viewBlendOutTimeMs > 0") )
      __debugbreak();
    v9 = *(float *)&v5 - (float)((float)v10 / (float)SuitDef->slide_viewBlendOutTimeMs);
  }
  else
  {
    v8 = gameTime - slideStartTime;
    if ( SuitDef->slide_viewBlendInTimeMs <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 474, ASSERT_TYPE_ASSERT, "(suitDef->slide_viewBlendInTimeMs > 0)", (const char *)&queryFormat, "suitDef->slide_viewBlendInTimeMs > 0") )
      __debugbreak();
    v9 = (float)((float)v8 / (float)SuitDef->slide_viewBlendInTimeMs) + *(float *)&v5;
  }
  return I_fclamp(v9, 0.0, 1.0);
}

/*
==============
Slide_GetSlideGesture
==============
*/
Gesture *Slide_GetSlideGesture(const pmove_t *pm)
{
  playerState_s *ps; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v4; 
  int v5; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 268, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 268, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
  v4 = BG_UsingAlternate(ps);
  v5 = BG_PlayerDualWielding(ps);
  return BG_Suit_GetGesture(ps, WEAPON_HAND_DEFAULT, CurrentWeaponForPlayer, v4, v5 != 0, (gestureAnimType_t)((v5 != 0) + 1));
}

/*
==============
Slide_GetSlideTime
==============
*/
__int64 Slide_GetSlideTime(const playerState_s *ps, SlideType slideType)
{
  float value; 
  int PerkNetworkPriorityIndex; 
  unsigned __int64 v6; 
  const dvar_t *v7; 
  const SuitDef *SuitDef; 
  __int32 v9; 
  float slide_max_time_base_ms; 
  __int64 v12; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 1518, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  value = FLOAT_1_0;
  PerkNetworkPriorityIndex = BG_GetPerkNetworkPriorityIndex(0x32u);
  v6 = (unsigned int)PerkNetworkPriorityIndex;
  if ( PerkNetworkPriorityIndex >= 0 )
  {
    if ( (unsigned int)PerkNetworkPriorityIndex >= 0x40 )
    {
      LODWORD(v12) = PerkNetworkPriorityIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v12, 64) )
        __debugbreak();
    }
    if ( ((0x80000000 >> (v6 & 0x1F)) & ps->perks.array[v6 >> 5]) != 0 )
    {
      v7 = DCONST_DVARFLT_slide_perk_fastslide_scale;
      if ( !DCONST_DVARFLT_slide_perk_fastslide_scale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_perk_fastslide_scale") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v7);
      value = v7->current.value;
    }
  }
  SuitDef = BG_GetSuitDef(ps->suitIndex);
  v9 = slideType - 1;
  if ( v9 )
  {
    if ( v9 == 1 )
      slide_max_time_base_ms = (float)SuitDef->slide_max_time_base_ms;
    else
      slide_max_time_base_ms = (float)SuitDef->slide_max_time_ms;
  }
  else
  {
    slide_max_time_base_ms = (float)SuitDef->slide_max_time_reduced_ms;
  }
  return (unsigned int)(int)(float)(slide_max_time_base_ms * value);
}

/*
==============
Slide_GetViewAngleOffsets
==============
*/
void Slide_GetViewAngleOffsets(const playerState_s *ps, const int gameTime, vec3_t *outAngles)
{
  double SlideFraction; 
  const dvar_t *v5; 
  float v6; 
  float value; 
  float v8; 
  float v9; 
  const dvar_t *v10; 

  SlideFraction = Slide_GetSlideFraction(ps, gameTime);
  v5 = DCONST_DVARVEC3_slide_view_angles;
  v6 = *(float *)&SlideFraction;
  if ( !DCONST_DVARVEC3_slide_view_angles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_view_angles") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  value = v5->current.value;
  v8 = v5->current.vector.v[1];
  v9 = v5->current.vector.v[2];
  v10 = DCONST_DVARINT_slide_viewInterpType;
  if ( !DCONST_DVARINT_slide_viewInterpType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_viewInterpType") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  switch ( v10->current.integer )
  {
    case 1:
      v6 = (float)(sinf_0((float)(*(float *)&SlideFraction - 0.5) * 3.1415927) + 1.0) * 0.5;
      break;
    case 2:
      v6 = (float)((float)((float)((float)(*(float *)&SlideFraction * 6.0) - 15.0) * *(float *)&SlideFraction) + 10.0) * (float)((float)(*(float *)&SlideFraction * *(float *)&SlideFraction) * *(float *)&SlideFraction);
      break;
    case 3:
      v6 = (float)(*(float *)&SlideFraction * *(float *)&SlideFraction) * *(float *)&SlideFraction;
      break;
    case 4:
      v6 = (float)((float)((float)(*(float *)&SlideFraction - 1.0) * (float)(*(float *)&SlideFraction - 1.0)) * (float)(*(float *)&SlideFraction - 1.0)) + 1.0;
      break;
    case 5:
      v6 = (float)((float)(*(float *)&SlideFraction * *(float *)&SlideFraction) * *(float *)&SlideFraction) * *(float *)&SlideFraction;
      break;
    case 6:
      v6 = 1.0 - (float)((float)((float)((float)(*(float *)&SlideFraction - 1.0) * (float)(*(float *)&SlideFraction - 1.0)) * (float)(*(float *)&SlideFraction - 1.0)) * (float)(*(float *)&SlideFraction - 1.0));
      break;
    case 7:
      v6 = powf_0(2.0, (float)(*(float *)&SlideFraction - 1.0) * 10.0);
      break;
    case 8:
      v6 = 1.0 - powf_0(2.0, *(float *)&SlideFraction * -10.0);
      break;
    default:
      break;
  }
  outAngles->v[0] = value * v6;
  outAngles->v[2] = v9 * v6;
  outAngles->v[1] = v8 * v6;
}

/*
==============
Slide_HasClearance
==============
*/
bool Slide_HasClearance(pmove_t *pm, pml_t *pml)
{
  const dvar_t *v4; 
  float value; 
  float v7; 
  const dvar_t *v8; 
  __int128 v9; 
  float v13; 
  const dvar_t *v14; 
  vec3_t vec; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 139, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pm->ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 139, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v4 = DCONST_DVARFLT_slide_clearance_check_dist;
  if ( !DCONST_DVARFLT_slide_clearance_check_dist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_clearance_check_dist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  value = v4->current.value;
  if ( value <= 0.0 )
    return 1;
  v7 = pml->forward.v[1];
  vec.v[0] = pml->forward.v[0];
  vec.v[2] = pml->forward.v[2];
  vec.v[1] = v7;
  WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, 0.0, &vec);
  v8 = DCONST_DVARFLT_slide_clearance_check_radius;
  v9 = LODWORD(vec.v[1]);
  *(float *)&v9 = fsqrt((float)((float)(*(float *)&v9 * *(float *)&v9) + (float)(vec.v[0] * vec.v[0])) + (float)(vec.v[2] * vec.v[2]));
  _XMM3 = v9;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
  }
  vec.v[0] = vec.v[0] * (float)(1.0 / *(float *)&_XMM0);
  vec.v[2] = vec.v[2] * (float)(1.0 / *(float *)&_XMM0);
  vec.v[1] = vec.v[1] * (float)(1.0 / *(float *)&_XMM0);
  if ( !DCONST_DVARFLT_slide_clearance_check_radius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_clearance_check_radius") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  v13 = v8->current.value;
  v14 = DCONST_DVARMPSPINT_slide_player_trace_offset;
  if ( !DCONST_DVARMPSPINT_slide_player_trace_offset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_player_trace_offset") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  return Slide_CollisionTrace(pm, &vec, v14->current.integer, value, v13);
}

/*
==============
Slide_Interrupt
==============
*/
void Slide_Interrupt(playerState_s *ps, const BgWeaponMap *weaponMap, const BgHandler *pmHandler, int time)
{
  const Weapon *CurrentWeaponForPlayer; 
  bool v8; 
  bool isDualWielding; 
  PlayerHandIndex WeaponHandForViewWeapon; 
  PlayerHandIndex i; 
  const Gesture *Gesture; 
  unsigned int IndexFromGesture; 

  PM_EndViewAngleTransition(ps);
  ps->pm_flags.m_flags[0] &= ~0x20000000u;
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&ps->eFlags, GameModeFlagValues::ms_mpValue, 0x1Du);
  ps->slideState.flags = 0;
  ps->sprintState.sprintButtonUpRequired = 0;
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  v8 = BG_UsingAlternate(ps);
  isDualWielding = BG_PlayerDualWielding(ps) != 0;
  WeaponHandForViewWeapon = BG_PlayerLastWeaponHandForViewWeapon(weaponMap, ps);
  for ( i = WEAPON_HAND_DEFAULT; i <= WeaponHandForViewWeapon; ++i )
  {
    Gesture = BG_Suit_GetGesture(ps, i, CurrentWeaponForPlayer, v8, isDualWielding, (gestureAnimType_t)(isDualWielding + 1));
    if ( Gesture )
    {
      IndexFromGesture = BG_Gesture_GetIndexFromGesture(Gesture);
      if ( IndexFromGesture != 256 )
        BG_Gesture_StopByIndex(ps, IndexFromGesture, time, 0, 0, 0);
    }
  }
}

/*
==============
Slide_IsEnabled
==============
*/
_BOOL8 Slide_IsEnabled(const playerState_s *ps)
{
  const dvar_t *v1; 

  if ( (ps->slideState.flags & 8) != 0 )
    return 0i64;
  v1 = DCONST_DVARBOOL_slide_enable;
  if ( !DCONST_DVARBOOL_slide_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_enable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return v1->current.enabled;
}

/*
==============
Slide_IsInSlideInState
==============
*/
bool Slide_IsInSlideInState(const playerState_s *ps, const int gameTime)
{
  int slide_inTimeMs; 
  int v5; 
  bool result; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 1056, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  slide_inTimeMs = BG_GetSuitDef(ps->suitIndex)->slide_inTimeMs;
  result = 0;
  if ( slide_inTimeMs > 0 )
  {
    v5 = gameTime - ps->slideState.slideStartTime;
    if ( v5 >= 0 && v5 <= slide_inTimeMs )
      return 1;
  }
  return result;
}

/*
==============
Slide_IsInSprintDelay
==============
*/
bool Slide_IsInSprintDelay(const playerState_s *ps, const int gameTime)
{
  int slide_sprintDelayMs; 
  int slideEndTime; 
  bool result; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 1094, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  slide_sprintDelayMs = BG_GetSuitDef(ps->suitIndex)->slide_sprintDelayMs;
  result = slide_sprintDelayMs > 0 && (slideEndTime = ps->slideState.slideEndTime, ps->slideState.slideStartTime <= slideEndTime) && gameTime >= slideEndTime && gameTime - slideEndTime <= slide_sprintDelayMs;
  return result;
}

/*
==============
Slide_IsTimeToEndSlide
==============
*/
bool Slide_IsTimeToEndSlide(pmove_t *pm, int *outTimeRemaining)
{
  playerState_s *ps; 
  int SlideTime; 
  int v6; 
  int v8; 
  const dvar_t *v9; 
  int integer; 
  double Float_Internal_DebugName; 
  bool outShouldEnd; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 906, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 906, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !outTimeRemaining && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 908, ASSERT_TYPE_ASSERT, "(outTimeRemaining)", (const char *)&queryFormat, "outTimeRemaining") )
    __debugbreak();
  SlideTime = Slide_GetSlideTime(ps, ps->slideState.slideType);
  outShouldEnd = 0;
  v6 = SlideTime;
  if ( PM_GameInterface_Slide_IsTimeToEndSlide(pm, SlideTime, outTimeRemaining, &outShouldEnd) )
    return outShouldEnd;
  v8 = v6 + pm->ps->slideState.slideStartTime - pm->cmd.serverTime;
  *outTimeRemaining = v8;
  if ( !Slide_IsUnderSomething(pm) )
    return v8 <= 0;
  v9 = DCONST_DVARINT_slide_friction_duration_ms;
  if ( !DCONST_DVARINT_slide_friction_duration_ms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_friction_duration_ms") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  integer = v9->current.integer;
  if ( (pm->cmd.buttons & 2) != 0 && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&pm->ps->pm_flags, ACTIVE, 0) )
  {
    Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_slide_to_sprint_friction_time_scale, "slide_to_sprint_friction_time_scale");
    integer = (int)(float)(*(float *)&Float_Internal_DebugName * (float)integer);
    if ( (float)integer < 180.0 )
      integer = 180;
  }
  return v8 <= 0 && -v8 > integer;
}

/*
==============
Slide_IsUnderSomething
==============
*/
bool Slide_IsUnderSomething(const pmove_t *pm)
{
  const dvar_t *v2; 
  float value; 
  const dvar_t *v4; 
  vec3_t outUp; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 158, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pm->ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 158, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  WorldUpReferenceFrame::GetUpVector(&pm->refFrame, &outUp);
  v2 = DCONST_DVARFLT_slide_under_geo_trace_radius;
  if ( !DCONST_DVARFLT_slide_under_geo_trace_radius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_under_geo_trace_radius") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  value = v2->current.value;
  v4 = DCONST_DVARFLT_slide_under_geo_trace_dist;
  if ( !DCONST_DVARFLT_slide_under_geo_trace_dist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_under_geo_trace_dist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  return !Slide_CollisionTrace((pmove_t *)pm, &outUp, 0, v4->current.value, value);
}

/*
==============
Slide_PlayOrStopGesture
==============
*/
void Slide_PlayOrStopGesture(playerState_s *ps, const BgWeaponMap *weaponMap, const BgHandler *pmHandler, int time, SlideGestureRequest request)
{
  const Weapon *v8; 
  PlayerHandIndex i; 
  const Gesture *Gesture; 
  unsigned int IndexFromGesture; 
  int restarted; 
  int v13; 
  int v14; 
  const SuitDef *SuitDef; 
  bool v16; 
  float outAdsTransInSpeedMs; 
  PlayerHandIndex WeaponHandForViewWeapon; 
  unsigned int outSlot; 
  float outAdsTransOutSpeedMs; 
  const Weapon *CurrentWeaponForPlayer; 
  GesturePlayRequest v22; 
  GesturePlayRequest result; 
  bool v24; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 188, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  v8 = CurrentWeaponForPlayer;
  v24 = BG_UsingAlternate(ps);
  v16 = BG_PlayerDualWielding(ps) != 0;
  WeaponHandForViewWeapon = BG_PlayerLastWeaponHandForViewWeapon(weaponMap, ps);
  for ( i = WEAPON_HAND_DEFAULT; i <= WeaponHandForViewWeapon; ++i )
  {
    Gesture = BG_Suit_GetGesture(ps, i, v8, v24, v16, (gestureAnimType_t)(v16 + 1));
    if ( Gesture )
    {
      IndexFromGesture = BG_Gesture_GetIndexFromGesture(Gesture);
      if ( IndexFromGesture != 256 )
      {
        if ( request )
        {
          switch ( request )
          {
            case SLIDEGESTUREREQUEST_STOP_FOR_ADS:
              BG_GetADSTransTimes(weaponMap, ps, v8, v24, &outAdsTransInSpeedMs, &outAdsTransOutSpeedMs);
              v13 = (int)(float)(1.0 / outAdsTransInSpeedMs);
              v14 = v13;
              if ( v13 <= 0 )
                v14 = 0;
              BG_Gesture_StopByIndex(ps, IndexFromGesture, time, v13 > 0, v14, 0);
              break;
            case SLIDEGESTUREREQUEST_STOP_FOR_JUMP:
              SuitDef = BG_GetSuitDef(ps->suitIndex);
              BG_Gesture_StopByIndex(ps, IndexFromGesture, time, 1, SuitDef->slide_gestureOutTimeForJumpMs, 1);
              break;
            case SLIDEGESTUREREQUEST_STOP_NOW:
              BG_Gesture_StopByIndex(ps, IndexFromGesture, time, 1, 0, 1);
              break;
            case SLIDEGESTUREREQUEST_STOP:
              BG_Gesture_StopByIndex(ps, IndexFromGesture, time, 0, 0, 0);
              break;
            default:
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 258, ASSERT_TYPE_ASSERT, "(0)", (const char *)&queryFormat, "0") )
                __debugbreak();
              break;
          }
        }
        else
        {
          restarted = 0;
          if ( BG_Gesture_IsPlayingByIndex(ps, IndexFromGesture, &outSlot) )
          {
            restarted = BG_Gesture_CalcRestartTimeOutToIn(ps, IndexFromGesture, time);
            BG_Gesture_StopByIndex(ps, IndexFromGesture, time, 1, 0, 0);
          }
          v22 = *BG_GesturePriority_SetupRequest(&result, weaponMap, ps, pmHandler, IndexFromGesture, time);
          v22.startTime = restarted;
          BG_GesturePriority_TryPlay(&v22, NULL, NULL);
          v8 = CurrentWeaponForPlayer;
        }
      }
    }
  }
}

/*
==============
Slide_ScaleVelocityBeforeJump
==============
*/
void Slide_ScaleVelocityBeforeJump(playerState_s *ps)
{
  float slide_jump_speed_scale; 

  slide_jump_speed_scale = BG_GetSuitDef(ps->suitIndex)->slide_jump_speed_scale;
  ps->velocity.v[0] = slide_jump_speed_scale * ps->velocity.v[0];
  ps->velocity.v[1] = slide_jump_speed_scale * ps->velocity.v[1];
  ps->velocity.v[2] = slide_jump_speed_scale * ps->velocity.v[2];
}

/*
==============
Slide_SetEnabled
==============
*/
void Slide_SetEnabled(playerState_s *ps, int enabled)
{
  int v2; 

  v2 = ps->slideState.flags & 0xFFFFFFF7;
  if ( !enabled )
    v2 = ps->slideState.flags | 8;
  ps->slideState.flags = v2;
}

/*
==============
Slide_SetSlideViewHeight
==============
*/
void Slide_SetSlideViewHeight(pmove_t *pm)
{
  playerState_s *ps; 
  const SuitDef *SuitDef; 
  int viewheight_slide; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 1596, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 1599, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  SuitDef = BG_GetSuitDef(ps->suitIndex);
  if ( SuitDef )
  {
    viewheight_slide = SuitDef->viewheight_slide;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 1602, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
      __debugbreak();
    viewheight_slide = MEMORY[0x218];
  }
  ps->viewHeightTarget = viewheight_slide;
}

/*
==============
Slide_SetStanceForSlideEnd
==============
*/
void Slide_SetStanceForSlideEnd(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  int serverTime; 
  BgWeaponMap *weaponMap; 
  unsigned int v7; 
  unsigned __int64 buttons; 
  bool v9; 
  float slide_jump_speed_scale; 
  unsigned int v11; 
  entity_event_t v12; 
  const SuitDef *SuitDef; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 347, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 347, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 348, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( !BG_ContextMount_IsActive(ps) )
  {
    serverTime = pm->cmd.serverTime;
    weaponMap = pm->weaponMap;
    v7 = PM_GroundSurfaceType(pm);
    BG_AddPredictableEventToPlayerstate(EV_SLIDE_EASE_OUT, v7, serverTime, weaponMap, ps);
    if ( !PM_CanStand(ps, pm, 1) )
      goto LABEL_25;
    buttons = pm->cmd.buttons;
    if ( (buttons & 0x100) != 0 )
    {
      v9 = pm->ground->walking || Jump_CanDoLateJump(pm);
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
        BG_AnimScriptAnimation(pm->m_bgHandler, ps, AISTATE_COMBAT, ANIM_MT_SPRINT, 1, 0);
      BG_AddPredictableEventToPlayerstate(EV_STANCE_FORCE_STAND, 0, pm->cmd.serverTime, pm->weaponMap, ps);
      if ( v9 )
      {
        pm->oldcmd.buttons &= ~0x100ui64;
        pm->cmd.buttons |= 0x100ui64;
        slide_jump_speed_scale = BG_GetSuitDef(ps->suitIndex)->slide_jump_speed_scale;
        ps->velocity.v[0] = slide_jump_speed_scale * ps->velocity.v[0];
        ps->velocity.v[1] = slide_jump_speed_scale * ps->velocity.v[1];
        ps->velocity.v[2] = slide_jump_speed_scale * ps->velocity.v[2];
        Jump_Check(pm, pml);
      }
      return;
    }
    if ( (buttons & 0x40000000000000i64) != 0 )
    {
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
        BG_AnimScriptAnimation(pm->m_bgHandler, ps, AISTATE_COMBAT, ANIM_MT_SPRINT, 1, 0);
      v11 = 0;
      v12 = EV_STANCE_FORCE_STAND;
    }
    else
    {
LABEL_25:
      SuitDef = BG_GetSuitDef(ps->suitIndex);
      if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 405, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
        __debugbreak();
      v11 = 5;
      if ( SuitDef->slide_disableProneTransition )
        v11 = 0;
      v12 = EV_STANCE_FORCE_CROUCH;
    }
    BG_AddPredictableEventToPlayerstate(v12, v11, pm->cmd.serverTime, pm->weaponMap, ps);
  }
}

/*
==============
Slide_ShouldReadyWeapon
==============
*/
bool Slide_ShouldReadyWeapon(const pmove_t *pm)
{
  unsigned __int64 buttons; 
  const dvar_t *v3; 

  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&pm->ps->pm_flags, ACTIVE, 0x1Du) )
    return 0;
  if ( !Slide_CurrrentSlideStatePreventsFiring(pm) )
  {
    buttons = pm->cmd.buttons;
    if ( (buttons & 0x200) != 0 || (buttons & 1) != 0 && BG_GetSuitDef(pm->ps->suitIndex)->slide_allow_firing )
      return 1;
  }
  v3 = DCONST_DVARBOOL_mount_cancels_slide_enabled;
  if ( !DCONST_DVARBOOL_mount_cancels_slide_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_cancels_slide_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  return v3->current.enabled && (pm->cmd.buttons & 0x80000000000i64) != 0;
}

/*
==============
Slide_SlideInSpeedScale
==============
*/
float Slide_SlideInSpeedScale(const playerState_s *ps, const int gameTime)
{
  const dvar_t *v4; 
  int subsequentCount; 
  float v6; 
  float v7; 
  const SuitDef *SuitDef; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 1075, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !Slide_IsInSlideInState(ps, gameTime) )
    return FLOAT_1_0;
  v4 = DCONST_DVARFLT_slide_subsequentSlideScale;
  subsequentCount = ps->slideState.subsequentCount;
  if ( !DCONST_DVARFLT_slide_subsequentSlideScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_subsequentSlideScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  v6 = 1.0 - v4->current.value;
  if ( subsequentCount == 2 )
    v7 = v6 * v6;
  else
    v7 = powf_0(v6, (float)subsequentCount);
  SuitDef = BG_GetSuitDef(ps->suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 1082, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  return v7 * SuitDef->slide_inMaxSpeedScale;
}

/*
==============
Slide_SlideOutFrictionScale
==============
*/
float Slide_SlideOutFrictionScale(const playerState_s *ps, const int gameTime)
{
  double v4; 
  const SuitDef *SuitDef; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 1159, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v4 = Slide_SlideOutStateFraction(ps, gameTime);
  if ( *(float *)&v4 == -3.4028235e38 )
    return FLOAT_1_0;
  SuitDef = BG_GetSuitDef(ps->suitIndex);
  return (float)((float)(1.0 - *(float *)&v4) * SuitDef->slide_outFrictionScaleStart) + (float)(*(float *)&v4 * SuitDef->slide_outFrictionScaleFinish);
}

/*
==============
Slide_SlideOutInAirFrictionScale
==============
*/
float Slide_SlideOutInAirFrictionScale(const playerState_s *ps, const int gameTime)
{
  const SuitDef *SuitDef; 
  int v5; 
  const SuitDef *v6; 
  int slide_inAirTimeMs; 
  double v8; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 1193, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( ps->slideState.slideStartTime > ps->slideState.slideEndTime )
    return FLOAT_N3_4028235e38;
  SuitDef = BG_GetSuitDef(ps->suitIndex);
  v5 = gameTime - ps->slideState.slideEndTime;
  v6 = SuitDef;
  slide_inAirTimeMs = SuitDef->slide_inAirTimeMs;
  if ( v5 > slide_inAirTimeMs )
    return FLOAT_N3_4028235e38;
  v8 = I_fclamp(_mm_cvtepi32_ps((__m128i)(unsigned int)v5).m128_f32[0] / _mm_cvtepi32_ps((__m128i)(unsigned int)slide_inAirTimeMs).m128_f32[0], 0.0, 1.0);
  return (float)((float)(1.0 - *(float *)&v8) * v6->slide_inAirFrictionScaleStart) + (float)(*(float *)&v8 * v6->slide_inAirFrictionScaleFinish);
}

/*
==============
Slide_SlideOutSpeedScale
==============
*/
float Slide_SlideOutSpeedScale(const playerState_s *ps, const int gameTime)
{
  double v4; 
  const SuitDef *SuitDef; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 1176, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v4 = Slide_SlideOutStateFraction(ps, gameTime);
  if ( *(float *)&v4 == -3.4028235e38 )
    return FLOAT_1_0;
  SuitDef = BG_GetSuitDef(ps->suitIndex);
  return (float)((float)(1.0 - *(float *)&v4) * SuitDef->slide_outSpeedScaleStart) + (float)(*(float *)&v4 * SuitDef->slide_outSpeedScaleFinish);
}

/*
==============
Slide_SlideOutStateFraction
==============
*/
double Slide_SlideOutStateFraction(const playerState_s *ps, const int gameTime)
{
  int slide_outTimeMs; 
  int slideEndTime; 
  int v6; 
  double result; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 1124, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  slide_outTimeMs = BG_GetSuitDef(ps->suitIndex)->slide_outTimeMs;
  if ( slide_outTimeMs > 0 )
  {
    slideEndTime = ps->slideState.slideEndTime;
    if ( ps->slideState.slideStartTime <= slideEndTime && gameTime >= slideEndTime )
    {
      v6 = gameTime - slideEndTime;
      if ( v6 <= slide_outTimeMs && v6 >= 0 )
        return I_fclamp((float)v6 / (float)slide_outTimeMs, 0.0, 1.0);
    }
  }
  *(_QWORD *)&result = LODWORD(FLOAT_N3_4028235e38);
  return result;
}

/*
==============
Slide_Start
==============
*/
void Slide_Start(pmove_t *pm, pml_t *pml, SlideType slideType)
{
  playerState_s *ps; 
  BgWeaponMap *weaponMap; 
  int serverTime; 
  unsigned int v8; 
  const dvar_t *v9; 
  const dvar_t *v10; 
  int integer; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 1543, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 1543, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  Slide_UpdateSlideFractionOnStateChange(pm);
  Jump_ClearState(pm);
  Slide_StartViewAngleTransition(pm);
  weaponMap = pm->weaponMap;
  serverTime = pm->cmd.serverTime;
  v8 = PM_GroundSurfaceType(pm);
  BG_AddPredictableEventToPlayerstate(EV_SLIDE_START, v8, serverTime, weaponMap, ps);
  ps->pm_flags.m_flags[0] |= 0x20000000u;
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&ps->eFlags, GameModeFlagValues::ms_mpValue, 0x1Du);
  ps->slideState.flags = 0;
  ps->slideState.slideStartTime = pm->cmd.serverTime;
  ps->slideState.slideType = slideType;
  ps->sprintState.sprintButtonUpRequired = 1;
  v9 = DCONST_DVARMPSPINT_slide_subsequentSlideTime;
  if ( !DCONST_DVARMPSPINT_slide_subsequentSlideTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_subsequentSlideTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.integer + ps->slideState.slideEndTime > pm->cmd.serverTime )
    ++ps->slideState.subsequentCount;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x23u) )
    goto LABEL_17;
  v10 = DCONST_DVARINT_slide_allow_prone_min_slide_ms;
  if ( !DCONST_DVARINT_slide_allow_prone_min_slide_ms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_allow_prone_min_slide_ms") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  integer = v10->current.integer;
  if ( integer > (int)Slide_GetSlideTime(ps, slideType) )
LABEL_17:
    ps->slideState.flags |= 4u;
  Slide_PlayOrStopGesture(ps, pm->weaponMap, pm->m_bgHandler, pm->cmd.serverTime, SLIDEGESTUREREQUEST_PLAY);
}

/*
==============
Slide_StartViewAngleTransition
==============
*/
void Slide_StartViewAngleTransition(pmove_t *pm)
{
  playerState_s *ps; 
  const dvar_t *v3; 
  const dvar_t *v4; 
  EViewAngleEaseMode integer; 
  const dvar_t *v6; 
  EViewAngleEaseMode v7; 
  const dvar_t *v8; 
  vec2_t goalAngles; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 1502, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 1502, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v3 = DCONST_DVARFLT_slide_cameraPitchOffset;
  if ( !DCONST_DVARFLT_slide_cameraPitchOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_cameraPitchOffset") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  LODWORD(goalAngles.v[0]) = v3->current.integer;
  goalAngles.v[1] = 0.0;
  if ( goalAngles.v[0] < ps->viewangles.v[0] )
  {
    v4 = DCONST_DVARINT_slide_cameraAlignmentEaseMode;
    if ( !DCONST_DVARINT_slide_cameraAlignmentEaseMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_cameraAlignmentEaseMode") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    integer = v4->current.integer;
    v6 = DCONST_DVARINT_slide_cameraAlignmentEaseMode;
    if ( !DCONST_DVARINT_slide_cameraAlignmentEaseMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_cameraAlignmentEaseMode") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    v7 = v6->current.integer;
    v8 = DCONST_DVARINT_slide_cameraRotateTimeMs;
    if ( !DCONST_DVARINT_slide_cameraRotateTimeMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_cameraRotateTimeMs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    PM_StartViewAngleTransition(pm, v8->current.integer, v7, integer, &goalAngles, 9);
  }
}

/*
==============
Slide_Update
==============
*/
void Slide_Update(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  playerState_s *v5; 
  const dvar_t *v6; 
  playerState_s *v7; 
  int v8; 
  playerState_s *v9; 
  SlideEndReason v10; 
  int outTimeRemaining; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 1344, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 1344, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Du) )
  {
    outTimeRemaining = 0x7FFFFFFF;
    v10 = (unsigned int)Slide_EndCheck(pm, pml, &outTimeRemaining);
    if ( outTimeRemaining == 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 1379, ASSERT_TYPE_ASSERT, "(timeRemaining != 2147483647)", "%s\n\tSlide_EndCheck did not return the time remaining for slide!", "timeRemaining != INT_MAX") )
      __debugbreak();
    if ( v10 )
    {
      Slide_End(pm, pml, v10);
    }
    else
    {
      Slide_UpdateMovement(pm);
      Slide_UpdateGesture(pm, outTimeRemaining);
    }
  }
  else
  {
    v5 = pm->ps;
    if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 895, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    v6 = DCONST_DVARMPSPINT_slide_subsequentSlideTime;
    if ( !DCONST_DVARMPSPINT_slide_subsequentSlideTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_subsequentSlideTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    if ( v6->current.integer + v5->slideState.slideEndTime < pm->cmd.serverTime )
      v5->slideState.subsequentCount = 0;
    if ( Slide_CanSlide(pm, pml) )
    {
      Slide_Start(pm, pml, SLIDE_TYPE_BOOST);
    }
    else
    {
      v7 = pm->ps;
      if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 1270, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v7->pm_flags, ACTIVE, 0x1Du) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 1272, ASSERT_TYPE_SANITY, "( !ps->pm_flags.TestFlag( PMoveFlagsCommon::SLIDE ) )", (const char *)&queryFormat, "!ps->pm_flags.TestFlag( PMoveFlagsCommon::SLIDE )") )
        __debugbreak();
      if ( v7->skydivePlayerState.state[0] || !Slide_IsEnabled(v7) || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v7->pm_flags, ACTIVE, 5u) || v7->groundEntityNum != 2047 && pm->ground->groundPlane || (pm->cmd.buttons & 0x400000) == 0 || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&v7->otherFlags, ACTIVE, 0xBu) || BG_IsPlayerInExecution(v7) )
      {
        v9 = pm->ps;
        if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 1324, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
          __debugbreak();
        if ( !pm->ground && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 1326, ASSERT_TYPE_ASSERT, "(pm->ground)", (const char *)&queryFormat, "pm->ground") )
          __debugbreak();
        if ( v9->groundEntityNum != 2047 && pm->ground->groundPlane || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v9->pm_flags, ACTIVE, 5u) )
          ps->slideState.flags &= ~0x20u;
      }
      else
      {
        v8 = ps->slideState.flags | 0x20;
        ps->slideState.flags = v8;
        if ( (pm->cmd.buttons & 0x1000000080i64) != 0 )
          ps->slideState.flags = v8 | 0x10;
      }
    }
  }
}

/*
==============
Slide_UpdateGesture
==============
*/
void Slide_UpdateGesture(pmove_t *pm, const int timeRemaining)
{
  playerState_s *ps; 
  bool IsPlayingByIndex; 
  const Gesture *SlideGesture; 
  unsigned int IndexFromGesture; 
  playerState_s *v8; 
  unsigned __int64 weaponState; 
  __int64 v10; 
  char v11; 
  const Gesture *v12; 
  GestureAnimationSettings *AnimationSettings; 
  int serverTime; 
  BgWeaponMap *weaponMap; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v17; 
  bool v18; 
  PlayerHandIndex WeaponHandForViewWeapon; 
  PlayerHandIndex i; 
  const Gesture *Gesture; 
  unsigned int v22; 
  unsigned int outSlot; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 312, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 312, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  IsPlayingByIndex = 1;
  SlideGesture = Slide_GetSlideGesture(pm);
  if ( SlideGesture )
  {
    IndexFromGesture = BG_Gesture_GetIndexFromGesture(SlideGesture);
    IsPlayingByIndex = BG_Gesture_IsPlayingByIndex(ps, IndexFromGesture, &outSlot);
  }
  v8 = pm->ps;
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 281, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  weaponState = v8->weapState[0].weaponState;
  if ( (unsigned int)weaponState <= 0x32 )
  {
    v10 = 0x4000000001FBEi64;
    if ( _bittest64(&v10, weaponState) )
    {
      v11 = 0;
      goto LABEL_22;
    }
  }
  if ( IsPlayingByIndex )
    goto LABEL_21;
  v12 = Slide_GetSlideGesture(pm);
  if ( !v12 )
    goto LABEL_21;
  AnimationSettings = BG_Gesture_GetAnimationSettings(v12);
  if ( !AnimationSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 295, ASSERT_TYPE_ASSERT, "(gestureAnimSettings)", (const char *)&queryFormat, "gestureAnimSettings") )
    __debugbreak();
  if ( timeRemaining >= AnimationSettings->inDuration )
  {
LABEL_21:
    v11 = 1;
LABEL_22:
    if ( IsPlayingByIndex )
    {
      if ( !v11 )
      {
        serverTime = pm->cmd.serverTime;
        weaponMap = pm->weaponMap;
        if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 188, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
          __debugbreak();
        CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
        v17 = BG_UsingAlternate(ps);
        v18 = BG_PlayerDualWielding(ps) != 0;
        WeaponHandForViewWeapon = BG_PlayerLastWeaponHandForViewWeapon(weaponMap, ps);
        for ( i = WEAPON_HAND_DEFAULT; i <= WeaponHandForViewWeapon; ++i )
        {
          Gesture = BG_Suit_GetGesture(ps, i, CurrentWeaponForPlayer, v17, v18, (gestureAnimType_t)(v18 + 1));
          if ( Gesture )
          {
            v22 = BG_Gesture_GetIndexFromGesture(Gesture);
            if ( v22 != 256 )
              BG_Gesture_StopByIndex(ps, v22, serverTime, 1, 0, 1);
          }
        }
      }
    }
    else if ( v11 )
    {
      Slide_PlayOrStopGesture(ps, pm->weaponMap, pm->m_bgHandler, pm->cmd.serverTime, SLIDEGESTUREREQUEST_PLAY);
    }
  }
}

/*
==============
Slide_UpdateMovement
==============
*/
void Slide_UpdateMovement(pmove_t *pm)
{
  playerState_s *ps; 
  const dvar_t *v3; 
  const dvar_t *v4; 
  int integer; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 1219, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 1219, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !PM_GameInterface_Slide_UpdateMovement(pm) )
  {
    pm->cmd.forwardmove = Slide_IsInSlideInState(ps, pm->cmd.serverTime) ? 0x7F : 0;
    v3 = DCONST_DVARBOOL_slide_enable_tweak_left_right;
    if ( !DCONST_DVARBOOL_slide_enable_tweak_left_right && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_enable_tweak_left_right") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    if ( v3->current.enabled )
    {
      v4 = DCONST_DVARINT_slide_deadzoneTweak;
      if ( !DCONST_DVARINT_slide_deadzoneTweak && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_deadzoneTweak") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v4);
      integer = v4->current.integer;
      if ( (ps->slideState.flags & 1) == 0 )
      {
        if ( (ps->slideState.flags & 2) == 0 )
        {
          if ( abs8(pm->cmd.rightmove) > integer )
            ps->slideState.flags |= (pm->cmd.rightmove > integer) + 1;
          return;
        }
        goto LABEL_21;
      }
      if ( pm->cmd.rightmove <= integer )
      {
        if ( (ps->slideState.flags & 2) == 0 )
          return;
LABEL_21:
        if ( pm->cmd.rightmove >= -integer )
          return;
      }
    }
    pm->cmd.rightmove = 0;
  }
}

/*
==============
Slide_UpdateSlideFractionOnStateChange
==============
*/
void Slide_UpdateSlideFractionOnStateChange(pmove_t *pm)
{
  playerState_s *ps; 
  double SlideFraction; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 496, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 496, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  SlideFraction = Slide_GetSlideFraction(ps, pm->cmd.serverTime);
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_playerstate.h", 1180, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  ps->weapCommon.slideFractionOnStateChange = MSG_PackUnsignedFloat(*(float *)&SlideFraction, 1.0, 8u);
}

