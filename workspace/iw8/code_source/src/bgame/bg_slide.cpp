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
  bool v8; 
  playerState_s *ps; 
  const dvar_t *v10; 
  char v24; 
  __int64 result; 
  const BgHandler *m_bgHandler; 
  vec2_t vec; 
  WorldUpReferenceFrame v38; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 796, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RDI = pm->ps;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 796, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 0x1Du) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 798, ASSERT_TYPE_SANITY, "( !ps->pm_flags.TestFlag( PMoveFlagsCommon::SLIDE ) )", (const char *)&queryFormat, "!ps->pm_flags.TestFlag( PMoveFlagsCommon::SLIDE )") )
    __debugbreak();
  v8 = _RDI->skydivePlayerState.state[0] == 0;
  __asm
  {
    vmovaps [rsp+0D8h+var_48], xmm6
    vmovaps [rsp+0D8h+var_58], xmm7
  }
  if ( !v8 || !Slide_IsEnabled(_RDI) || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 5u) || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RDI->otherFlags, ACTIVE, 0xBu) || BG_IsPlayerInExecution(_RDI) || BG_IsPlayerZeroG(_RDI) )
    goto LABEL_41;
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 650, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v10 = DCONST_DVARINT_slide_delayTime;
  if ( !DCONST_DVARINT_slide_delayTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_delayTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.integer + ps->slideState.slideEndTime > pm->cmd.serverTime )
    goto LABEL_41;
  _RSI = pm->ps;
  if ( _RSI->groundEntityNum == 2047 || !pm->ground->groundPlane )
    goto LABEL_41;
  __asm { vmovss  xmm7, cs:__real@3f800000 }
  if ( (_RDI->slideState.flags & 0x20) == 0 )
  {
    if ( !Slide_CanSlideFromGround(pm) )
    {
      if ( (pm->cmd.buttons & 0x400000) == 0 )
        goto LABEL_41;
LABEL_40:
      BG_AddPredictableEventToPlayerstate(EV_STANCE_FORCE_CROUCH, 5u, pm->cmd.serverTime, pm->weaponMap, _RDI);
      goto LABEL_41;
    }
LABEL_43:
    m_bgHandler = pm->m_bgHandler;
    if ( !pm->weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 739, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( _RDI->slideState.subsequentCount < 15 )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcomiss xmm0, dword ptr [rdi+730h]
      }
      if ( _RDI->slideState.subsequentCount >= 0xFu && Slide_HasClearance(pm, pml) )
      {
        if ( !pm->ground->groundPlane )
          goto LABEL_51;
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_slide_angle, "slide_angle");
        __asm { vmovaps xmm6, xmm0 }
        WorldUpReferenceFrame::WorldUpReferenceFrame(&v38, _RDI, m_bgHandler);
        *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(&v38, &pm->ground->trace.normal);
        __asm
        {
          vmulss  xmm2, xmm0, xmm0
          vmulss  xmm1, xmm6, xmm6
          vsubss  xmm0, xmm7, xmm1
          vcomiss xmm2, xmm0
        }
        if ( !v24 )
        {
LABEL_51:
          result = 1i64;
          goto LABEL_42;
        }
      }
    }
    goto LABEL_40;
  }
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 668, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+40h]
    vmovss  xmm2, dword ptr [rsi+3Ch]
  }
  _RBP = DCONST_DVARFLT_slide_min_required_airVelocity;
  __asm
  {
    vmulss  xmm0, xmm0, xmm0
    vmulss  xmm1, xmm2, xmm2
    vaddss  xmm1, xmm1, xmm0
    vsqrtss xmm6, xmm1, xmm1
    vcmpless xmm0, xmm6, cs:__real@80000000
    vblendvps xmm0, xmm6, xmm7, xmm0
    vdivss  xmm1, xmm7, xmm0
    vmulss  xmm0, xmm2, xmm1
    vmovss  dword ptr [rsp+0D8h+vec], xmm0
    vmulss  xmm1, xmm1, dword ptr [rsi+40h]
    vmovss  dword ptr [rsp+0D8h+vec+4], xmm1
  }
  if ( !DCONST_DVARFLT_slide_min_required_airVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_min_required_airVelocity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBP);
  __asm { vcomiss xmm6, dword ptr [rbp+28h] }
  if ( !v24 )
  {
    *(double *)&_XMM0 = vectoyaw(&vec);
    __asm { vmovss  xmm1, dword ptr [rsi+1DCh]; angle2 }
    *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
    _RSI = DCONST_DVARFLT_slide_required_airAngle;
    __asm { vandps  xmm6, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff }
    if ( !DCONST_DVARFLT_slide_required_airAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_required_airAngle") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vcomiss xmm6, dword ptr [rsi+28h] }
    if ( v24 | v8 )
      goto LABEL_43;
  }
  BG_AddPredictableEventToPlayerstate((const entity_event_t)((_RDI->slideState.flags & 0x10 | 0xA0u) >> 4), 5u, pm->cmd.serverTime, pm->weaponMap, _RDI);
  _RDI->slideState.flags &= ~0x10u;
LABEL_41:
  result = 0i64;
LABEL_42:
  __asm
  {
    vmovaps xmm7, [rsp+0D8h+var_58]
    vmovaps xmm6, [rsp+0D8h+var_48]
  }
  return result;
}

/*
==============
Slide_CanSlideFromAir
==============
*/
bool Slide_CanSlideFromAir(pmove_t *pm)
{
  char v17; 
  char v21; 
  bool result; 
  vec2_t vec; 

  __asm { vmovaps [rsp+68h+var_18], xmm6 }
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 668, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RBX = pm->ps;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 668, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+40h]
    vmovss  xmm2, dword ptr [rbx+3Ch]
  }
  _RDI = DCONST_DVARFLT_slide_min_required_airVelocity;
  __asm
  {
    vmulss  xmm0, xmm0, xmm0
    vmulss  xmm1, xmm2, xmm2
    vaddss  xmm1, xmm1, xmm0
    vsqrtss xmm6, xmm1, xmm1
    vcmpless xmm0, xmm6, cs:__real@80000000
    vmovss  xmm1, cs:__real@3f800000
    vblendvps xmm0, xmm6, xmm1, xmm0
    vdivss  xmm1, xmm1, xmm0
    vmulss  xmm0, xmm2, xmm1
    vmovss  dword ptr [rsp+68h+vec], xmm0
    vmulss  xmm1, xmm1, dword ptr [rbx+40h]
    vmovss  dword ptr [rsp+68h+vec+4], xmm1
  }
  if ( !DCONST_DVARFLT_slide_min_required_airVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_min_required_airVelocity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vcomiss xmm6, dword ptr [rdi+28h] }
  if ( v17 )
    goto LABEL_16;
  *(double *)&_XMM0 = vectoyaw(&vec);
  __asm { vmovss  xmm1, dword ptr [rbx+1DCh]; angle2 }
  *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
  _RBX = DCONST_DVARFLT_slide_required_airAngle;
  __asm { vandps  xmm6, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff }
  if ( !DCONST_DVARFLT_slide_required_airAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_required_airAngle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vcomiss xmm6, dword ptr [rbx+28h] }
  if ( !(v17 | v21) )
LABEL_16:
    result = 0;
  else
    result = 1;
  __asm { vmovaps xmm6, [rsp+68h+var_18] }
  return result;
}

/*
==============
Slide_CanSlideFromGround
==============
*/
bool Slide_CanSlideFromGround(pmove_t *pm)
{
  int serverTime; 
  const dvar_t *v5; 
  char v16; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 701, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RDI = pm->ps;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 701, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (pm->cmd.buttons & 0x400000) == 0 )
    return 0;
  serverTime = pm->cmd.serverTime;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 714, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v5 = DCONST_DVARINT_slide_min_sprint_time_ms;
  if ( !DCONST_DVARINT_slide_min_sprint_time_ms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_min_sprint_time_ms") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( serverTime - _RDI->sprintState.lastSprintStart < v5->current.integer && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 0x13u) || !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RDI->pm_flags, ACTIVE, 0x14u) )
    return 0;
  _RBX = DCONST_DVARFLT_slide_min_required_velocity;
  if ( !DCONST_DVARFLT_slide_min_required_velocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_min_required_velocity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+3Ch]
    vmovss  xmm2, dword ptr [rdi+40h]
    vmovss  xmm3, dword ptr [rdi+44h]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm0, xmm2, xmm2
    vcomiss xmm0, dword ptr [rbx+28h]
  }
  return !v16;
}

/*
==============
Slide_CanSlideFromGroundConditionsMet
==============
*/
bool Slide_CanSlideFromGroundConditionsMet(const playerState_s *ps, const int serverTime)
{
  const dvar_t *v4; 
  char v15; 

  _RBX = ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 714, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v4 = DCONST_DVARINT_slide_min_sprint_time_ms;
  if ( !DCONST_DVARINT_slide_min_sprint_time_ms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_min_sprint_time_ms") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( serverTime - _RBX->sprintState.lastSprintStart < v4->current.integer && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->pm_flags, ACTIVE, 0x13u) || !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->pm_flags, ACTIVE, 0x14u) )
    return 0;
  _RDI = DCONST_DVARFLT_slide_min_required_velocity;
  if ( !DCONST_DVARFLT_slide_min_required_velocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_min_required_velocity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+3Ch]
    vmovss  xmm2, dword ptr [rbx+40h]
    vmovss  xmm3, dword ptr [rbx+44h]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm0, xmm2, xmm2
    vcomiss xmm0, dword ptr [rdi+28h]
  }
  return !v15;
}

/*
==============
Slide_CanSlideNowConditionsMet
==============
*/
bool Slide_CanSlideNowConditionsMet(const playerState_s *ps)
{
  _RBX = ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 778, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( _RBX->slideState.subsequentCount >= 15 )
    return 0;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm0, dword ptr [rbx+730h]
  }
  return _RBX->slideState.subsequentCount >= 0xFu;
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

bool __fastcall Slide_CollisionTrace(pmove_t *pm, const vec3_t *traceDir, int traceOffset, double traceDist, float checkRadius)
{
  playerState_s *ps; 
  const dvar_t *v33; 
  bool result; 
  trace_t outResults; 
  vec3_t vec; 
  vec3_t end; 
  Bounds bounds; 

  __asm { vmovaps [rsp+120h+var_30], xmm6 }
  _RBX = traceDir;
  __asm { vmovaps xmm6, xmm3 }
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 87, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 87, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm
  {
    vmovss  xmm2, [rbp+4Fh+checkRadius]
    vcmpltss xmm1, xmm2, cs:__real@3a83126f
  }
  _RAX = pm->bounds;
  __asm
  {
    vmovss  xmm0, cs:__real@3f000000
    vblendvps xmm3, xmm2, xmm0, xmm1
    vmovss  xmm2, dword ptr [rbx+4]
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rbp+4Fh+var_50.midPoint], xmm0
    vmovsd  xmm1, qword ptr [rax+10h]
    vmovsd  qword ptr [rbp+4Fh+var_50.halfSize+4], xmm1
    vmovss  xmm1, dword ptr [rbx]
    vmovss  dword ptr [rbp+4Fh+var_50.halfSize], xmm3
    vmovss  dword ptr [rbp+4Fh+var_50.halfSize+4], xmm3
    vaddss  xmm0, xmm1, dword ptr [rsi+30h]
    vmovss  xmm3, dword ptr [rbx+8]
    vmovss  dword ptr [rbp+4Fh+vec], xmm0
    vaddss  xmm0, xmm2, dword ptr [rsi+34h]
    vmovss  dword ptr [rbp+4Fh+vec+4], xmm0
    vaddss  xmm0, xmm3, dword ptr [rsi+38h]
    vmulss  xmm1, xmm1, xmm6
    vmovss  dword ptr [rbp+4Fh+vec+8], xmm0
    vaddss  xmm0, xmm1, dword ptr [rsi+30h]
    vmulss  xmm2, xmm2, xmm6
    vmovss  dword ptr [rbp+4Fh+end], xmm0
    vaddss  xmm1, xmm2, dword ptr [rsi+34h]
    vmulss  xmm0, xmm3, xmm6
    vmovss  dword ptr [rbp+4Fh+end+4], xmm1
    vaddss  xmm2, xmm0, dword ptr [rsi+38h]
    vxorps  xmm6, xmm6, xmm6
    vcvtsi2ss xmm6, xmm6, r14d
    vmovaps xmm1, xmm6; height
    vmovss  dword ptr [rbp+4Fh+end+8], xmm2
  }
  WorldUpReferenceFrame::AddUpContribution(&pm->refFrame, *(float *)&_XMM1, &vec);
  __asm { vmovaps xmm1, xmm6; height }
  WorldUpReferenceFrame::AddUpContribution(&pm->refFrame, *(float *)&_XMM1, &end);
  BgTrace::LegacyPlayerTrace(pm->m_trace, pm, &outResults, &vec, &end, &bounds, ps->clientNum, 16842753, 1);
  v33 = DCONST_DVARBOOL_slide_debug;
  if ( !DCONST_DVARBOOL_slide_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v33);
  __asm { vmovss  xmm6, cs:__real@3f800000 }
  if ( v33->current.enabled && pm->m_bgHandler->IsClient((BgHandler *)pm->m_bgHandler) )
  {
    __asm { vxorps  xmm3, xmm3, xmm3 }
    ((void (__fastcall *)(const BgHandler *, vec3_t *, Bounds *))pm->m_bgHandler->DebugBox)(pm->m_bgHandler, &vec, &bounds);
    __asm
    {
      vmovss  xmm0, [rsp+120h+outResults.fraction]
      vcomiss xmm0, xmm6
      vxorps  xmm3, xmm3, xmm3
    }
    ((void (__fastcall *)(const BgHandler *, vec3_t *, Bounds *))pm->m_bgHandler->DebugBox)(pm->m_bgHandler, &end, &bounds);
  }
  if ( outResults.startsolid || outResults.allsolid )
  {
    result = 0;
  }
  else
  {
    __asm
    {
      vmovss  xmm0, [rsp+120h+outResults.fraction]
      vcomiss xmm0, xmm6
    }
    result = 1;
  }
  __asm { vmovaps xmm6, [rsp+120h+var_30] }
  return result;
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
  int v14; 
  int v18; 
  SlideGestureRequest v19; 

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
      _RBX = DCONST_DVARFLT_player_sprintMinActivationTime;
      v14 = SprintLeft;
      if ( !DCONST_DVARFLT_player_sprintMinActivationTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_sprintMinActivationTime") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+28h]
        vmulss  xmm1, xmm0, cs:__real@447a0000
        vcvttss2si ebx, xmm1
      }
      v18 = v14 - 1000 * BG_GetSuitDef(ps->suitIndex)->slide_sprint_penalty_ms;
      if ( v18 >= _EBX )
        _EBX = v18;
      PM_SetSprintLeft(pm->weaponMap, ps, pm->cmd.serverTime, _EBX);
    }
  }
  v19 = SLIDEGESTUREREQUEST_STOP;
  switch ( slideEndReason )
  {
    case SLIDE_END_REASON_ADS:
      v19 = SLIDEGESTUREREQUEST_STOP_FOR_ADS;
      break;
    case SLIDE_END_REASON_JUMP:
      v19 = SLIDEGESTUREREQUEST_STOP_FOR_JUMP;
      break;
    case SLIDE_END_REASON_LAST_STAND:
      v19 = SLIDEGESTUREREQUEST_STOP_NOW;
      break;
  }
  Slide_PlayOrStopGesture(ps, pm->weaponMap, pm->m_bgHandler, pm->cmd.serverTime, v19);
}

/*
==============
Slide_EndCheck
==============
*/
__int64 Slide_EndCheck(pmove_t *pm, pml_t *pml, int *outTimeRemaining)
{
  char v18; 
  char v30; 
  vec3_t vec; 
  vec3_t start; 
  trace_t outResults; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 976, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RDI = pm->ps;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 976, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
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
  _RSI = DCONST_DVARFLT_slide_min_continue_velocity;
  if ( !DCONST_DVARFLT_slide_min_continue_velocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_min_continue_velocity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RSI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+3Ch]
    vmovss  xmm2, dword ptr [rdi+40h]
    vmovss  xmm3, dword ptr [rdi+44h]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm0, xmm2, xmm2
    vcomiss xmm0, dword ptr [rsi+28h]
  }
  if ( v18 || _RDI->pm_type >= 7 || (pm->cmd.buttons & 0x3000) != 0 && !BG_GetSuitDef(pm->ps->suitIndex)->slide_allow_firing )
    return 1i64;
  if ( (pm->cmd.buttons & 0x40) != 0 )
    return 1i64;
  _RSI = pm->ps;
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 945, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( _RSI->groundEntityNum == 2047 )
  {
    _RBP = DCONST_DVARFLT_slide_maxHeightFromGround;
    if ( !DCONST_DVARFLT_slide_maxHeightFromGround && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_maxHeightFromGround") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBP);
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+30h]
      vmovss  xmm2, dword ptr [rbp+28h]
      vmovss  dword ptr [rsp+118h+start], xmm0
      vmovss  xmm1, dword ptr [rsi+34h]
      vmovss  dword ptr [rsp+118h+start+4], xmm1
      vmovss  xmm0, dword ptr [rsi+38h]
      vmovss  dword ptr [rsp+118h+start+8], xmm0
      vmovss  xmm1, dword ptr [rsi+30h]
      vmovss  dword ptr [rsp+118h+vec], xmm1
      vmovss  xmm0, dword ptr [rsi+34h]
      vmovss  dword ptr [rsp+118h+vec+4], xmm0
      vmovss  xmm1, dword ptr [rsi+38h]
      vmovss  dword ptr [rsp+118h+vec+8], xmm1
      vxorps  xmm1, xmm2, cs:__xmm@80000000800000008000000080000000; height
    }
    WorldUpReferenceFrame::AddUpContribution(&pm->refFrame, *(float *)&_XMM1, &vec);
    BgTrace::LegacyPlayerTrace(pm->m_trace, pm, &outResults, &start, &vec, pm->bounds, _RSI->clientNum, pm->tracemask & 0xFD7FFFEF, 0);
    __asm
    {
      vmovss  xmm0, [rsp+118h+outResults.fraction]
      vucomiss xmm0, cs:__real@3f800000
    }
    if ( v30 )
      return 3i64;
  }
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RDI->otherFlags, ACTIVE, 0xBu) )
    return 5i64;
  return BG_IsPlayerInExecution(_RDI);
}

/*
==============
Slide_FrictionScale
==============
*/
float Slide_FrictionScale(pmove_t *pm, const pml_t *pml)
{
  BgGroundState *ground; 
  char v13; 
  char v36; 
  float outScale; 
  vec3_t vec; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 1646, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RSI = pm->ps;
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 1646, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  _RBX = BG_GetSuitDef(_RSI->suitIndex);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 1649, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  if ( !Slide_IsUnderSomething(pm) )
  {
    if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RSI->pm_flags, ACTIVE, 0x1Du) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 1656, ASSERT_TYPE_ASSERT, "(ps->pm_flags.TestFlag( PMoveFlagsCommon::SLIDE ))", (const char *)&queryFormat, "ps->pm_flags.TestFlag( PMoveFlagsCommon::SLIDE )") )
      __debugbreak();
    if ( !PM_GameInterface_Slide_FrictionScale(pm, pml, &outScale) )
    {
      ground = pm->ground;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+11Ch]
        vmovss  [rsp+78h+outScale], xmm0
      }
      if ( !ground->groundPlane )
        return *(float *)&_XMM0;
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+3Ch]
        vmovss  xmm1, dword ptr [rsi+40h]
        vmovss  dword ptr [rsp+78h+vec], xmm0
        vmovss  xmm0, dword ptr [rsi+44h]
        vmovss  dword ptr [rsp+78h+vec+4], xmm1
        vmovaps [rsp+78h+var_28], xmm6
        vxorps  xmm1, xmm1, xmm1; height
        vmovss  dword ptr [rsp+78h+vec+8], xmm0
      }
      WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, *(float *)&_XMM1, &vec);
      __asm
      {
        vmovss  xmm6, dword ptr [rsp+78h+vec+4]
        vmovss  xmm4, dword ptr [rsp+78h+vec]
        vmovss  xmm5, dword ptr [rsp+78h+vec+8]
        vmulss  xmm0, xmm4, xmm4
        vmulss  xmm1, xmm6, xmm6
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm5, xmm5
        vaddss  xmm0, xmm2, xmm1
        vmovss  xmm1, cs:__real@3f800000
        vsqrtss xmm3, xmm0, xmm0
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm1, xmm0
        vdivss  xmm2, xmm1, xmm0
        vmulss  xmm0, xmm6, xmm2
        vmovaps xmm6, [rsp+78h+var_28]
        vmovss  dword ptr [rsp+78h+vec+4], xmm0
        vmulss  xmm4, xmm4, xmm2
        vmulss  xmm3, xmm5, xmm2
        vmovss  dword ptr [rsp+78h+vec], xmm4
        vmovss  dword ptr [rsp+78h+vec+8], xmm3
        vmulss  xmm1, xmm0, dword ptr [rax+14h]
        vmulss  xmm0, xmm4, dword ptr [rax+10h]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, dword ptr [rax+18h]
        vaddss  xmm0, xmm2, xmm1
        vcomiss xmm0, cs:__real@3e4ccccd
      }
      if ( !(v13 | v36) )
      {
        __asm { vmovss  xmm0, dword ptr [rbx+120h] }
        return *(float *)&_XMM0;
      }
      __asm { vcomiss xmm0, cs:__real@be4ccccd }
      if ( v13 )
      {
        __asm { vmovss  xmm0, dword ptr [rbx+124h] }
        return *(float *)&_XMM0;
      }
    }
    __asm { vmovss  xmm0, [rsp+78h+outScale] }
    return *(float *)&_XMM0;
  }
  __asm { vmovss  xmm0, dword ptr [rbx+128h] }
  return *(float *)&_XMM0;
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
  double v7; 
  vec3_t vec; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx+3Ch]
    vmovss  xmm2, dword ptr [rcx+40h]
    vmovss  dword ptr [rsp+48h+vec], xmm0
    vmovss  xmm0, dword ptr [rcx+44h]
  }
  _RBX = ps;
  __asm
  {
    vmovss  dword ptr [rsp+48h+vec+4], xmm2
    vmovss  dword ptr [rsp+48h+vec+8], xmm0
  }
  WorldUpReferenceFrame::RemoveReferenceFrameFromVector(&pm->refFrame, &vec);
  *(double *)&_XMM0 = vectoyaw((const vec2_t *)&vec);
  __asm { vmovss  xmm1, dword ptr [rbx+1DCh]; angle2 }
  v7 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
  return *(float *)&v7;
}

/*
==============
Slide_GetSlideFraction
==============
*/
double Slide_GetSlideFraction(const playerState_s *ps, const int gameTime)
{
  const SuitDef *SuitDef; 

  __asm { vmovaps [rsp+48h+var_18], xmm7 }
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 460, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  SuitDef = BG_GetSuitDef(ps->suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 463, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  __asm { vmovss  xmm1, cs:__real@3f800000; maxAbsValueSize }
  *(double *)&_XMM0 = MSG_UnpackUnsignedFloat(ps->weapCommon.slideFractionOnStateChange, *(float *)&_XMM1, 8u);
  __asm { vmovaps xmm7, xmm0 }
  if ( ps->slideState.slideStartTime <= ps->slideState.slideEndTime )
  {
    if ( SuitDef->slide_viewBlendOutTimeMs <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 485, ASSERT_TYPE_ASSERT, "(suitDef->slide_viewBlendOutTimeMs > 0)", (const char *)&queryFormat, "suitDef->slide_viewBlendOutTimeMs > 0") )
      __debugbreak();
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rsi+164h]
      vcvtsi2ss xmm1, xmm1, edi
      vdivss  xmm1, xmm1, xmm0
      vsubss  xmm0, xmm7, xmm1; val
    }
  }
  else
  {
    if ( SuitDef->slide_viewBlendInTimeMs <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 474, ASSERT_TYPE_ASSERT, "(suitDef->slide_viewBlendInTimeMs > 0)", (const char *)&queryFormat, "suitDef->slide_viewBlendInTimeMs > 0") )
      __debugbreak();
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rsi+160h]
      vcvtsi2ss xmm1, xmm1, edi
      vdivss  xmm1, xmm1, xmm0
      vaddss  xmm0, xmm1, xmm7
    }
  }
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000; max
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm7, [rsp+48h+var_18]
  }
  return I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
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
int Slide_GetSlideTime(const playerState_s *ps, SlideType slideType)
{
  int PerkNetworkPriorityIndex; 
  unsigned __int64 v8; 
  __int32 v12; 
  int result; 
  __int64 v17; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 1518, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm { vmovss  xmm6, cs:__real@3f800000 }
  PerkNetworkPriorityIndex = BG_GetPerkNetworkPriorityIndex(0x32u);
  v8 = (unsigned int)PerkNetworkPriorityIndex;
  if ( PerkNetworkPriorityIndex >= 0 )
  {
    if ( (unsigned int)PerkNetworkPriorityIndex >= 0x40 )
    {
      LODWORD(v17) = PerkNetworkPriorityIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v17, 64) )
        __debugbreak();
    }
    if ( ((0x80000000 >> (v8 & 0x1F)) & ps->perks.array[v8 >> 5]) != 0 )
    {
      _RDI = DCONST_DVARFLT_slide_perk_fastslide_scale;
      if ( !DCONST_DVARFLT_slide_perk_fastslide_scale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_perk_fastslide_scale") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm { vmovss  xmm6, dword ptr [rdi+28h] }
    }
  }
  BG_GetSuitDef(ps->suitIndex);
  __asm { vxorps  xmm0, xmm0, xmm0 }
  v12 = slideType - 1;
  if ( v12 )
  {
    if ( v12 == 1 )
      __asm { vcvtsi2ss xmm0, xmm0, dword ptr [rax+10Ch] }
    else
      __asm { vcvtsi2ss xmm0, xmm0, dword ptr [rax+104h] }
  }
  else
  {
    __asm { vcvtsi2ss xmm0, xmm0, dword ptr [rax+108h] }
  }
  __asm
  {
    vmulss  xmm1, xmm0, xmm6
    vmovaps xmm6, [rsp+58h+var_18]
    vcvttss2si eax, xmm1
  }
  return result;
}

/*
==============
Slide_GetViewAngleOffsets
==============
*/
void Slide_GetViewAngleOffsets(const playerState_s *ps, const int gameTime, vec3_t *outAngles)
{
  const dvar_t *v14; 

  __asm { vmovaps [rsp+98h+var_28], xmm7 }
  _RDI = outAngles;
  __asm
  {
    vmovaps [rsp+98h+var_38], xmm8
    vmovaps [rsp+98h+var_48], xmm9
    vmovaps [rsp+98h+var_58], xmm10
  }
  *(double *)&_XMM0 = Slide_GetSlideFraction(ps, gameTime);
  _RBX = DCONST_DVARVEC3_slide_view_angles;
  __asm { vmovaps xmm7, xmm0 }
  if ( !DCONST_DVARVEC3_slide_view_angles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_view_angles") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm8, dword ptr [rbx+28h]
    vmovss  xmm9, dword ptr [rbx+2Ch]
    vmovss  xmm10, dword ptr [rbx+30h]
  }
  v14 = DCONST_DVARINT_slide_viewInterpType;
  if ( !DCONST_DVARINT_slide_viewInterpType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_viewInterpType") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  switch ( v14->current.integer )
  {
    case 1:
      __asm
      {
        vsubss  xmm0, xmm7, cs:__real@3f000000; jumptable 0000000141077CA5 case 1
        vmulss  xmm0, xmm0, cs:__real@40490fdb; X
      }
      *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
      __asm
      {
        vaddss  xmm1, xmm0, cs:__real@3f800000
        vmulss  xmm7, xmm1, cs:__real@3f000000
      }
      break;
    case 2:
      __asm
      {
        vmulss  xmm0, xmm7, cs:__real@40c00000; jumptable 0000000141077CA5 case 2
        vsubss  xmm1, xmm0, cs:__real@41700000
        vmulss  xmm2, xmm1, xmm7
        vaddss  xmm3, xmm2, cs:__real@41200000
        vmulss  xmm0, xmm7, xmm7
        vmulss  xmm1, xmm0, xmm7
        vmulss  xmm7, xmm3, xmm1
      }
      break;
    case 3:
      __asm
      {
        vmulss  xmm0, xmm7, xmm7; jumptable 0000000141077CA5 case 3
        vmulss  xmm7, xmm0, xmm7
      }
      break;
    case 4:
      __asm
      {
        vsubss  xmm1, xmm7, cs:__real@3f800000; jumptable 0000000141077CA5 case 4
        vmulss  xmm0, xmm1, xmm1
        vmulss  xmm1, xmm0, xmm1
        vaddss  xmm7, xmm1, cs:__real@3f800000
      }
      break;
    case 5:
      __asm
      {
        vmulss  xmm0, xmm7, xmm7; jumptable 0000000141077CA5 case 5
        vmulss  xmm1, xmm0, xmm7
        vmulss  xmm7, xmm1, xmm7
      }
      break;
    case 6:
      __asm
      {
        vmovss  xmm3, cs:__real@3f800000; jumptable 0000000141077CA5 case 6
        vsubss  xmm2, xmm7, xmm3
        vmulss  xmm0, xmm2, xmm2
        vmulss  xmm1, xmm0, xmm2
        vmulss  xmm2, xmm1, xmm2
        vsubss  xmm7, xmm3, xmm2
      }
      break;
    case 7:
      __asm
      {
        vsubss  xmm0, xmm7, cs:__real@3f800000; jumptable 0000000141077CA5 case 7
        vmulss  xmm1, xmm0, cs:__real@41200000; Y
        vmovss  xmm0, cs:__real@40000000; X
      }
      *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm { vmovaps xmm7, xmm0 }
      break;
    case 8:
      __asm
      {
        vmulss  xmm1, xmm7, cs:__real@c1200000; jumptable 0000000141077CA5 case 8
        vmovss  xmm0, cs:__real@40000000; X
      }
      powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vmovss  xmm1, cs:__real@3f800000
        vsubss  xmm7, xmm1, xmm0
      }
      break;
    default:
      break;
  }
  __asm
  {
    vmulss  xmm0, xmm8, xmm7
    vmovaps xmm8, [rsp+98h+var_38]
    vmulss  xmm1, xmm9, xmm7
    vmovaps xmm9, [rsp+98h+var_48]
    vmovss  dword ptr [rdi], xmm0
    vmulss  xmm0, xmm10, xmm7
    vmovaps xmm7, [rsp+98h+var_28]
    vmovaps xmm10, [rsp+98h+var_58]
    vmovss  dword ptr [rdi+8], xmm0
    vmovss  dword ptr [rdi+4], xmm1
  }
}

/*
==============
Slide_HasClearance
==============
*/
bool Slide_HasClearance(pmove_t *pm, pml_t *pml)
{
  char v10; 
  char v11; 
  bool result; 
  const dvar_t *v34; 
  float fmt; 
  vec3_t vec; 

  __asm { vmovaps [rsp+98h+var_38], xmm7 }
  _RSI = pml;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 139, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pm->ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 139, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  _RBX = DCONST_DVARFLT_slide_clearance_check_dist;
  if ( !DCONST_DVARFLT_slide_clearance_check_dist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_clearance_check_dist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm7, dword ptr [rbx+28h]
    vxorps  xmm1, xmm1, xmm1; height
    vcomiss xmm7, xmm1
  }
  if ( v10 | v11 )
  {
    result = 1;
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsi]
      vmovss  xmm2, dword ptr [rsi+4]
      vmovss  dword ptr [rsp+98h+vec], xmm0
      vmovss  xmm0, dword ptr [rsi+8]
      vmovaps [rsp+98h+var_28], xmm6
      vmovss  dword ptr [rsp+98h+vec+8], xmm0
      vmovss  dword ptr [rsp+98h+vec+4], xmm2
    }
    WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, *(float *)&_XMM1, &vec);
    __asm
    {
      vmovss  xmm4, dword ptr [rsp+98h+vec]
      vmovss  xmm6, dword ptr [rsp+98h+vec+4]
      vmovss  xmm5, dword ptr [rsp+98h+vec+8]
    }
    _RBX = DCONST_DVARFLT_slide_clearance_check_radius;
    __asm
    {
      vmulss  xmm0, xmm4, xmm4
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm0, xmm2, xmm1
      vmovss  xmm1, cs:__real@3f800000
      vsqrtss xmm3, xmm0, xmm0
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm1, xmm0
      vdivss  xmm2, xmm1, xmm0
      vmulss  xmm0, xmm4, xmm2
      vmovss  dword ptr [rsp+98h+vec], xmm0
      vmulss  xmm0, xmm5, xmm2
      vmulss  xmm1, xmm6, xmm2
      vmovss  dword ptr [rsp+98h+vec+8], xmm0
      vmovss  dword ptr [rsp+98h+vec+4], xmm1
    }
    if ( !DCONST_DVARFLT_slide_clearance_check_radius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_clearance_check_radius") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm6, dword ptr [rbx+28h] }
    v34 = DCONST_DVARMPSPINT_slide_player_trace_offset;
    if ( !DCONST_DVARMPSPINT_slide_player_trace_offset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_player_trace_offset") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v34);
    __asm
    {
      vmovaps xmm3, xmm7; traceDist
      vmovss  dword ptr [rsp+98h+fmt], xmm6
    }
    result = Slide_CollisionTrace(pm, &vec, v34->current.integer, *(double *)&_XMM3, fmt);
    __asm { vmovaps xmm6, [rsp+98h+var_28] }
  }
  __asm { vmovaps xmm7, [rsp+98h+var_38] }
  return result;
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

bool __fastcall Slide_IsTimeToEndSlide(pmove_t *pm, int *outTimeRemaining, double _XMM2_8)
{
  playerState_s *ps; 
  int SlideTime; 
  int v9; 
  int v11; 
  const dvar_t *v12; 
  char v19; 
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
  v9 = SlideTime;
  if ( PM_GameInterface_Slide_IsTimeToEndSlide(pm, SlideTime, outTimeRemaining, &outShouldEnd) )
    return outShouldEnd;
  v11 = v9 + pm->ps->slideState.slideStartTime - pm->cmd.serverTime;
  *outTimeRemaining = v11;
  if ( !Slide_IsUnderSomething(pm) )
    return v11 <= 0;
  v12 = DCONST_DVARINT_slide_friction_duration_ms;
  if ( !DCONST_DVARINT_slide_friction_duration_ms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_friction_duration_ms") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  _ESI = v12->current.integer;
  if ( (pm->cmd.buttons & 2) != 0 && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&pm->ps->pm_flags, ACTIVE, 0) )
  {
    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_slide_to_sprint_friction_time_scale, "slide_to_sprint_friction_time_scale");
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, esi
      vmulss  xmm0, xmm0, xmm1
      vcvttss2si esi, xmm0
      vxorps  xmm2, xmm2, xmm2
      vcvtsi2ss xmm2, xmm2, esi
      vcomiss xmm2, cs:__real@43340000
    }
    if ( v19 )
      _ESI = 180;
  }
  return v11 <= 0 && -v11 > _ESI;
}

/*
==============
Slide_IsUnderSomething
==============
*/
bool Slide_IsUnderSomething(const pmove_t *pm)
{
  bool result; 
  float fmt; 
  vec3_t outUp; 

  __asm { vmovaps [rsp+78h+var_18], xmm6 }
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 158, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pm->ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 158, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  WorldUpReferenceFrame::GetUpVector(&pm->refFrame, &outUp);
  _RDI = DCONST_DVARFLT_slide_under_geo_trace_radius;
  if ( !DCONST_DVARFLT_slide_under_geo_trace_radius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_under_geo_trace_radius") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vmovss  xmm6, dword ptr [rdi+28h] }
  _RDI = DCONST_DVARFLT_slide_under_geo_trace_dist;
  if ( !DCONST_DVARFLT_slide_under_geo_trace_dist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_under_geo_trace_dist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm3, dword ptr [rdi+28h]; traceDist
    vmovss  dword ptr [rsp+78h+fmt], xmm6
  }
  result = !Slide_CollisionTrace((pmove_t *)pm, &outUp, 0, *(double *)&_XMM3, fmt);
  __asm { vmovaps xmm6, [rsp+78h+var_18] }
  return result;
}

/*
==============
Slide_PlayOrStopGesture
==============
*/
void Slide_PlayOrStopGesture(playerState_s *ps, const BgWeaponMap *weaponMap, const BgHandler *pmHandler, int time, SlideGestureRequest request)
{
  const Weapon *v9; 
  PlayerHandIndex v10; 
  const Gesture *Gesture; 
  unsigned int IndexFromGesture; 
  int restarted; 
  int v21; 
  const SuitDef *SuitDef; 
  bool v24; 
  float outAdsTransInSpeedMs; 
  PlayerHandIndex WeaponHandForViewWeapon; 
  unsigned int outSlot; 
  float outAdsTransOutSpeedMs; 
  const Weapon *CurrentWeaponForPlayer; 
  GesturePlayRequest v30; 
  GesturePlayRequest result; 
  bool v33; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 188, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  v9 = CurrentWeaponForPlayer;
  v33 = BG_UsingAlternate(ps);
  v24 = BG_PlayerDualWielding(ps) != 0;
  WeaponHandForViewWeapon = BG_PlayerLastWeaponHandForViewWeapon(weaponMap, ps);
  v10 = WEAPON_HAND_DEFAULT;
  if ( WeaponHandForViewWeapon >= WEAPON_HAND_DEFAULT )
  {
    __asm
    {
      vmovaps [rsp+108h+var_48], xmm6
      vmovss  xmm6, cs:__real@3f800000
    }
    do
    {
      Gesture = BG_Suit_GetGesture(ps, v10, v9, v33, v24, (gestureAnimType_t)(v24 + 1));
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
                BG_GetADSTransTimes(weaponMap, ps, v9, v33, &outAdsTransInSpeedMs, &outAdsTransOutSpeedMs);
                __asm
                {
                  vdivss  xmm0, xmm6, [rsp+108h+outAdsTransInSpeedMs]
                  vcvttss2si eax, xmm0
                }
                v21 = _EAX;
                if ( _EAX <= 0 )
                  v21 = 0;
                BG_Gesture_StopByIndex(ps, IndexFromGesture, time, _EAX > 0, v21, 0);
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
            _RAX = BG_GesturePriority_SetupRequest(&result, weaponMap, ps, pmHandler, IndexFromGesture, time);
            __asm
            {
              vmovups ymm0, ymmword ptr [rax]
              vmovups ymmword ptr [rsp+108h+var_B8.weaponMap], ymm0
              vmovups xmm1, xmmword ptr [rax+20h]
              vmovups xmmword ptr [rsp+108h+var_B8.startTime], xmm1
              vmovsd  xmm0, qword ptr [rax+30h]
              vmovsd  qword ptr [rsp+108h+var_B8.cancelTransitions], xmm0
            }
            v30.startTime = restarted;
            BG_GesturePriority_TryPlay(&v30, NULL, NULL);
            v9 = CurrentWeaponForPlayer;
          }
        }
      }
      ++v10;
    }
    while ( v10 <= WeaponHandForViewWeapon );
    __asm { vmovaps xmm6, [rsp+108h+var_48] }
  }
}

/*
==============
Slide_ScaleVelocityBeforeJump
==============
*/
void Slide_ScaleVelocityBeforeJump(playerState_s *ps)
{
  _RBX = ps;
  _RAX = BG_GetSuitDef(ps->suitIndex);
  __asm
  {
    vmovss  xmm2, dword ptr [rax+0FCh]
    vmulss  xmm0, xmm2, dword ptr [rbx+3Ch]
    vmovss  dword ptr [rbx+3Ch], xmm0
    vmulss  xmm1, xmm2, dword ptr [rbx+40h]
    vmovss  dword ptr [rbx+40h], xmm1
    vmulss  xmm0, xmm2, dword ptr [rbx+44h]
    vmovss  dword ptr [rbx+44h], xmm0
  }
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
  int serverTime; 
  BgWeaponMap *weaponMap; 
  unsigned int v7; 
  unsigned __int64 buttons; 
  bool v9; 
  unsigned int v15; 
  entity_event_t v16; 
  const SuitDef *SuitDef; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 347, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RBP = pm->ps;
  if ( !_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 347, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 348, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( !BG_ContextMount_IsActive(_RBP) )
  {
    serverTime = pm->cmd.serverTime;
    weaponMap = pm->weaponMap;
    v7 = PM_GroundSurfaceType(pm);
    BG_AddPredictableEventToPlayerstate(EV_SLIDE_EASE_OUT, v7, serverTime, weaponMap, _RBP);
    if ( !PM_CanStand(_RBP, pm, 1) )
      goto LABEL_25;
    buttons = pm->cmd.buttons;
    if ( (buttons & 0x100) != 0 )
    {
      v9 = pm->ground->walking || Jump_CanDoLateJump(pm);
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
        BG_AnimScriptAnimation(pm->m_bgHandler, _RBP, AISTATE_COMBAT, ANIM_MT_SPRINT, 1, 0);
      BG_AddPredictableEventToPlayerstate(EV_STANCE_FORCE_STAND, 0, pm->cmd.serverTime, pm->weaponMap, _RBP);
      if ( v9 )
      {
        pm->oldcmd.buttons &= ~0x100ui64;
        pm->cmd.buttons |= 0x100ui64;
        _RAX = BG_GetSuitDef(_RBP->suitIndex);
        __asm
        {
          vmovss  xmm2, dword ptr [rax+0FCh]
          vmulss  xmm0, xmm2, dword ptr [rbp+3Ch]
          vmovss  dword ptr [rbp+3Ch], xmm0
          vmulss  xmm1, xmm2, dword ptr [rbp+40h]
          vmovss  dword ptr [rbp+40h], xmm1
          vmulss  xmm0, xmm2, dword ptr [rbp+44h]
          vmovss  dword ptr [rbp+44h], xmm0
        }
        Jump_Check(pm, pml);
      }
      return;
    }
    if ( (buttons & 0x40000000000000i64) != 0 )
    {
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
        BG_AnimScriptAnimation(pm->m_bgHandler, _RBP, AISTATE_COMBAT, ANIM_MT_SPRINT, 1, 0);
      v15 = 0;
      v16 = EV_STANCE_FORCE_STAND;
    }
    else
    {
LABEL_25:
      SuitDef = BG_GetSuitDef(_RBP->suitIndex);
      if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 405, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
        __debugbreak();
      v15 = 5;
      if ( SuitDef->slide_disableProneTransition )
        v15 = 0;
      v16 = EV_STANCE_FORCE_CROUCH;
    }
    BG_AddPredictableEventToPlayerstate(v16, v15, pm->cmd.serverTime, pm->weaponMap, _RBP);
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
  const dvar_t *v6; 
  int subsequentCount; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 1075, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( Slide_IsInSlideInState(ps, gameTime) )
  {
    v6 = DCONST_DVARFLT_slide_subsequentSlideScale;
    subsequentCount = ps->slideState.subsequentCount;
    __asm { vmovaps [rsp+58h+var_18], xmm6 }
    if ( !DCONST_DVARFLT_slide_subsequentSlideScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_subsequentSlideScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vsubss  xmm0, xmm0, dword ptr [rdi+28h]; X
    }
    if ( subsequentCount == 2 )
    {
      __asm { vmulss  xmm6, xmm0, xmm0 }
    }
    else
    {
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, esi; Y
      }
      *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm { vmovaps xmm6, xmm0 }
    }
    if ( !BG_GetSuitDef(ps->suitIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 1082, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
      __debugbreak();
    __asm
    {
      vmulss  xmm0, xmm6, dword ptr [rbx+114h]
      vmovaps xmm6, [rsp+58h+var_18]
    }
  }
  else
  {
    __asm { vmovss  xmm0, cs:__real@3f800000 }
  }
  return *(float *)&_XMM0;
}

/*
==============
Slide_SlideOutFrictionScale
==============
*/
float Slide_SlideOutFrictionScale(const playerState_s *ps, const int gameTime)
{
  char v7; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 1159, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  *(double *)&_XMM0 = Slide_SlideOutStateFraction(ps, gameTime);
  __asm
  {
    vucomiss xmm0, cs:__real@ff7fffff
    vmovaps xmm6, xmm0
  }
  if ( v7 )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vmovaps xmm6, [rsp+48h+var_18]
    }
  }
  else
  {
    BG_GetSuitDef(ps->suitIndex);
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vsubss  xmm1, xmm0, xmm6
      vmulss  xmm0, xmm6, dword ptr [rax+148h]
      vmulss  xmm2, xmm1, dword ptr [rax+144h]
      vmovaps xmm6, [rsp+48h+var_18]
      vaddss  xmm0, xmm2, xmm0
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
Slide_SlideOutInAirFrictionScale
==============
*/
float Slide_SlideOutInAirFrictionScale(const playerState_s *ps, const int gameTime)
{
  const SuitDef *SuitDef; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 1193, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( ps->slideState.slideStartTime > ps->slideState.slideEndTime || (SuitDef = BG_GetSuitDef(ps->suitIndex), _EDI = gameTime - ps->slideState.slideEndTime, _EAX = SuitDef->slide_inAirTimeMs, _EDI > _EAX) )
  {
    __asm { vmovss  xmm0, cs:__real@ff7fffff }
  }
  else
  {
    __asm
    {
      vmovd   xmm1, edi
      vcvtdq2ps xmm1, xmm1
      vmovd   xmm0, eax
      vcvtdq2ps xmm0, xmm0
      vdivss  xmm0, xmm1, xmm0; val
      vmovaps [rsp+48h+var_18], xmm6
      vmovss  xmm6, cs:__real@3f800000
      vxorps  xmm1, xmm1, xmm1; min
      vmovaps xmm2, xmm6; max
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vsubss  xmm1, xmm6, xmm0
      vmulss  xmm2, xmm1, dword ptr [rsi+158h]
      vmulss  xmm0, xmm0, dword ptr [rsi+15Ch]
      vmovaps xmm6, [rsp+48h+var_18]
      vaddss  xmm0, xmm2, xmm0
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
Slide_SlideOutSpeedScale
==============
*/
float Slide_SlideOutSpeedScale(const playerState_s *ps, const int gameTime)
{
  char v7; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 1176, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  *(double *)&_XMM0 = Slide_SlideOutStateFraction(ps, gameTime);
  __asm
  {
    vucomiss xmm0, cs:__real@ff7fffff
    vmovaps xmm6, xmm0
  }
  if ( v7 )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vmovaps xmm6, [rsp+48h+var_18]
    }
  }
  else
  {
    BG_GetSuitDef(ps->suitIndex);
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vsubss  xmm1, xmm0, xmm6
      vmulss  xmm0, xmm6, dword ptr [rax+150h]
      vmulss  xmm2, xmm1, dword ptr [rax+14Ch]
      vmovaps xmm6, [rsp+48h+var_18]
      vaddss  xmm0, xmm2, xmm0
    }
  }
  return *(float *)&_XMM0;
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
  int v8; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 1124, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  slide_outTimeMs = BG_GetSuitDef(ps->suitIndex)->slide_outTimeMs;
  if ( slide_outTimeMs <= 0 || (slideEndTime = ps->slideState.slideEndTime, ps->slideState.slideStartTime > slideEndTime) || gameTime < slideEndTime || (v8 = gameTime - slideEndTime, v8 > slide_outTimeMs) || v8 < 0 )
  {
    __asm { vmovss  xmm0, cs:__real@ff7fffff }
  }
  else
  {
    __asm
    {
      vmovss  xmm2, cs:__real@3f800000; max
      vxorps  xmm1, xmm1, xmm1
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm1, xmm1, ebx
      vcvtsi2ss xmm0, xmm0, ecx
      vdivss  xmm0, xmm1, xmm0; val
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  }
  return *(double *)&_XMM0;
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
  if ( integer > Slide_GetSlideTime(ps, slideType) )
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
  char v7; 
  const dvar_t *v8; 
  EViewAngleEaseMode integer; 
  const dvar_t *v10; 
  EViewAngleEaseMode v11; 
  const dvar_t *v12; 
  vec2_t goalAngles; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 1502, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RDI = pm->ps;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 1502, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  _RBX = DCONST_DVARFLT_slide_cameraPitchOffset;
  if ( !DCONST_DVARFLT_slide_cameraPitchOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_cameraPitchOffset") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+28h]
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rsp+68h+goalAngles], xmm1
    vmovss  dword ptr [rsp+68h+goalAngles+4], xmm0
    vcomiss xmm1, dword ptr [rdi+1D8h]
  }
  if ( v7 )
  {
    v8 = DCONST_DVARINT_slide_cameraAlignmentEaseMode;
    if ( !DCONST_DVARINT_slide_cameraAlignmentEaseMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_cameraAlignmentEaseMode") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    integer = v8->current.integer;
    v10 = DCONST_DVARINT_slide_cameraAlignmentEaseMode;
    if ( !DCONST_DVARINT_slide_cameraAlignmentEaseMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_cameraAlignmentEaseMode") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    v11 = v10->current.integer;
    v12 = DCONST_DVARINT_slide_cameraRotateTimeMs;
    if ( !DCONST_DVARINT_slide_cameraRotateTimeMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "slide_cameraRotateTimeMs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    PM_StartViewAngleTransition(pm, v12->current.integer, v11, integer, &goalAngles, 9);
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

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 496, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slide.cpp", 496, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  *(double *)&_XMM0 = Slide_GetSlideFraction(ps, pm->cmd.serverTime);
  __asm { vmovaps xmm6, xmm0 }
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_playerstate.h", 1180, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm
  {
    vmovss  xmm1, cs:__real@3f800000; maxAbsValueSize
    vmovaps xmm0, xmm6; value
    vmovaps xmm6, [rsp+48h+var_18]
  }
  ps->weapCommon.slideFractionOnStateChange = MSG_PackUnsignedFloat(*(float *)&_XMM0, *(float *)&_XMM1, 8u);
}

