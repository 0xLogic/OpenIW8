/*
==============
Jump_GetJumpHeightClassic
==============
*/

double __fastcall Jump_GetJumpHeightClassic()
{
  double result; 

  *(float *)&result = ?Jump_GetJumpHeightClassic@@YAMXZ();
  return result;
}

/*
==============
Jump_Update
==============
*/

void __fastcall Jump_Update(pmove_t *pm)
{
  ?Jump_Update@@YAXPEAVpmove_t@@@Z(pm);
}

/*
==============
Jump_GetStepHeight
==============
*/

bool __fastcall Jump_GetStepHeight(const pmove_t *pm, playerState_s *ps, const vec3_t *origin, float *stepSize)
{
  return ?Jump_GetStepHeight@@YA_NPEBVpmove_t@@PEAUplayerState_s@@AEBTvec3_t@@PEAM@Z(pm, ps, origin, stepSize);
}

/*
==============
Jump_InJumpDebounce
==============
*/

bool __fastcall Jump_InJumpDebounce(const playerState_s *const ps, const usercmd_s *const cmd)
{
  return ?Jump_InJumpDebounce@@YA_NQEBUplayerState_s@@QEBUusercmd_s@@@Z(ps, cmd);
}

/*
==============
Jump_SetTime
==============
*/

void __fastcall Jump_SetTime(pmove_t *pm)
{
  ?Jump_SetTime@@YAXPEAVpmove_t@@@Z(pm);
}

/*
==============
Jump_GetJumpHeight
==============
*/

double __fastcall Jump_GetJumpHeight(playerState_s *ps)
{
  double result; 

  *(float *)&result = ?Jump_GetJumpHeight@@YAMPEAUplayerState_s@@@Z(ps);
  return result;
}

/*
==============
Jump_Landed
==============
*/

void __fastcall Jump_Landed(pmove_t *pm)
{
  ?Jump_Landed@@YAXPEAVpmove_t@@@Z(pm);
}

/*
==============
Jump_ClearState
==============
*/

void __fastcall Jump_ClearState(pmove_t *pm)
{
  ?Jump_ClearState@@YAXPEAVpmove_t@@@Z(pm);
}

/*
==============
Jump_ApplySlowdown
==============
*/

void __fastcall Jump_ApplySlowdown(pmove_t *pm, playerState_s *ps)
{
  ?Jump_ApplySlowdown@@YAXPEAVpmove_t@@PEAUplayerState_s@@@Z(pm, ps);
}

/*
==============
Jump_IsPlayerAboveMax
==============
*/

bool __fastcall Jump_IsPlayerAboveMax(const pmove_t *pm, playerState_s *ps)
{
  return ?Jump_IsPlayerAboveMax@@YA_NPEBVpmove_t@@PEAUplayerState_s@@@Z(pm, ps);
}

/*
==============
Jump_IsJumpSlowDownEnabled
==============
*/

bool __fastcall Jump_IsJumpSlowDownEnabled(playerState_s *ps)
{
  return ?Jump_IsJumpSlowDownEnabled@@YA_NPEAUplayerState_s@@@Z(ps);
}

/*
==============
Jump_JumpedThisFrame
==============
*/

bool __fastcall Jump_JumpedThisFrame(const playerState_s *ps, int serverTime)
{
  return ?Jump_JumpedThisFrame@@YA_NPEBUplayerState_s@@H@Z(ps, serverTime);
}

/*
==============
Jump_HandleLateJump
==============
*/

void __fastcall Jump_HandleLateJump(pmove_t *pm, pml_t *pml)
{
  ?Jump_HandleLateJump@@YAXPEAVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
Jump_ClampVelocity
==============
*/

void __fastcall Jump_ClampVelocity(const pmove_t *pm, playerState_s *ps, const vec3_t *origin)
{
  ?Jump_ClampVelocity@@YAXPEBVpmove_t@@PEAUplayerState_s@@AEBTvec3_t@@@Z(pm, ps, origin);
}

/*
==============
Jump_Check
==============
*/

bool __fastcall Jump_Check(pmove_t *pm, pml_t *pml)
{
  return ?Jump_Check@@YA_NPEAVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
Jump_CanDoLateJump
==============
*/

bool __fastcall Jump_CanDoLateJump(pmove_t *pm)
{
  return ?Jump_CanDoLateJump@@YA_NPEAVpmove_t@@@Z(pm);
}

/*
==============
Jump_ReduceFriction
==============
*/

double __fastcall Jump_ReduceFriction(pmove_t *pm, playerState_s *ps)
{
  double result; 

  *(float *)&result = ?Jump_ReduceFriction@@YAMPEAVpmove_t@@PEAUplayerState_s@@@Z(pm, ps);
  return result;
}

/*
==============
Jump_ActivateSlowdown
==============
*/

void __fastcall Jump_ActivateSlowdown(const pmove_t *pm, playerState_s *ps)
{
  ?Jump_ActivateSlowdown@@YAXPEBVpmove_t@@PEAUplayerState_s@@@Z(pm, ps);
}

/*
==============
Jump_GetVelocity
==============
*/

double __fastcall Jump_GetVelocity(pmove_t *pm, float height)
{
  double result; 

  *(float *)&result = ?Jump_GetVelocity@@YAMPEAVpmove_t@@M@Z(pm, height);
  return result;
}

/*
==============
Jump_ActivateSlowdown
==============
*/
void Jump_ActivateSlowdown(const pmove_t *pm, playerState_s *ps)
{
  const dvar_t *v3; 

  if ( !ps->pm_time )
  {
    ps->pm_flags.m_flags[0] |= 0x80000u;
    v3 = DCONST_DVARINT_jump_landSlowDownTime;
    if ( !DCONST_DVARINT_jump_landSlowDownTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "jump_landSlowDownTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    ps->pm_time = v3->current.integer;
  }
}

/*
==============
Jump_ApplySlowdown
==============
*/
void Jump_ApplySlowdown(pmove_t *pm, playerState_s *ps)
{
  const dvar_t *v6; 
  int pm_time; 
  const char *v10; 
  char v13; 
  const dvar_t *v14; 
  const dvar_t *v15; 

  __asm { vmovaps [rsp+68h+var_28], xmm6 }
  _RBX = ps;
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x13u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_jump.cpp", 146, ASSERT_TYPE_ASSERT, "(ps->pm_flags.TestFlag( PMoveFlagsCommon::JUMPING ))", (const char *)&queryFormat, "ps->pm_flags.TestFlag( PMoveFlagsCommon::JUMPING )") )
    __debugbreak();
  v6 = DCONST_DVARINT_jump_landSlowDownTime;
  __asm { vmovss  xmm6, cs:__real@3f800000 }
  if ( !DCONST_DVARINT_jump_landSlowDownTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "jump_landSlowDownTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  pm_time = _RBX->pm_time;
  if ( pm_time <= v6->current.integer )
  {
    if ( pm_time )
      goto LABEL_25;
    *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(&pm->refFrame, &_RBX->origin);
    __asm
    {
      vmovss  xmm1, dword ptr [rbx+0C8h]
      vaddss  xmm2, xmm1, cs:__real@41900000
      vcomiss xmm0, xmm2
    }
    if ( !v13 )
    {
      v15 = DCONST_DVARINT_jump_landHigherSlowDownTime;
      if ( !DCONST_DVARINT_jump_landHigherSlowDownTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "jump_landHigherSlowDownTime") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v15);
      _RBX->pm_time = v15->current.integer;
      _RDI = DCONST_DVARFLT_jump_landHigherSlowDownVelocity;
      if ( DCONST_DVARFLT_jump_landHigherSlowDownVelocity )
        goto LABEL_24;
      v10 = "jump_landHigherSlowDownVelocity";
      goto LABEL_22;
    }
    v14 = DCONST_DVARINT_jump_landSlowDownTime;
    if ( !DCONST_DVARINT_jump_landSlowDownTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "jump_landSlowDownTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    _RBX->pm_time = v14->current.integer;
  }
  else
  {
    Jump_ClearState(pm);
  }
  _RDI = DCONST_DVARFLT_jump_landSlowDownVelocity;
  if ( !DCONST_DVARFLT_jump_landSlowDownVelocity )
  {
    v10 = "jump_landSlowDownVelocity";
LABEL_22:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v10) )
      __debugbreak();
  }
LABEL_24:
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vmovss  xmm6, dword ptr [rdi+28h] }
LABEL_25:
  if ( Jump_IsJumpSlowDownEnabled(_RBX) )
  {
    __asm
    {
      vmulss  xmm0, xmm6, dword ptr [rbx+3Ch]
      vmovss  dword ptr [rbx+3Ch], xmm0
      vmulss  xmm1, xmm6, dword ptr [rbx+40h]
      vmovss  dword ptr [rbx+40h], xmm1
      vmulss  xmm0, xmm6, dword ptr [rbx+44h]
      vmovss  dword ptr [rbx+44h], xmm0
    }
  }
  __asm { vmovaps xmm6, [rsp+68h+var_28] }
}

/*
==============
Jump_CanDoLateJump
==============
*/
bool Jump_CanDoLateJump(pmove_t *pm)
{
  playerState_s *ps; 
  int fallStartTime; 
  int v4; 
  const dvar_t *v5; 
  const dvar_t *v7; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_jump.cpp", 594, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_jump.cpp", 594, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  fallStartTime = ps->fallStartTime;
  v4 = fallStartTime - ps->mantleState.endTime;
  v5 = DCONST_DVARINT_jump_lateJumpMinMantleFallDelta;
  if ( !DCONST_DVARINT_jump_lateJumpMinMantleFallDelta && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "jump_lateJumpMinMantleFallDelta") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v4 < v5->current.integer )
    return 0;
  v7 = DCONST_DVARINT_jump_lateJumpGraceMs;
  if ( !DCONST_DVARINT_jump_lateJumpGraceMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "jump_lateJumpGraceMs") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  return pm->cmd.serverTime - fallStartTime < v7->current.integer;
}

/*
==============
Jump_Check
==============
*/
char Jump_Check(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  const dvar_t *v6; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v8; 
  usercmd_s *p_cmd; 
  __int16 groundRefEnt; 
  int serverTime; 
  char v13; 
  bool v15; 
  BgWeaponMap *weaponMap; 
  bool v17; 
  int v18; 
  unsigned int v19; 
  PlayerAnimScriptEventType v20; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_jump.cpp", 444, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_jump.cpp", 444, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v6 = DVARBOOL_killswitch_weapon_inspect_on_jump;
  if ( !DVARBOOL_killswitch_weapon_inspect_on_jump && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_weapon_inspect_on_jump") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled && Com_GameMode_SupportsFeature(WEAPON_LEAP_OUT|0x80) )
  {
    CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
    if ( BG_UseLeftTriggerAltFireMode(CurrentWeaponForPlayer) )
      v8 = ps && GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x1Du);
    else
      v8 = BG_UsingAlternate(ps);
    if ( BG_GetWeaponInspectEnabled(CurrentWeaponForPlayer, v8) )
      return 0;
  }
  if ( ps->vehicleState.entity != 2047 || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Au) )
    return 0;
  p_cmd = &pm->cmd;
  if ( pm == (pmove_t *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_jump.cpp", 429, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  if ( pm->cmd.serverTime - ps->jumpState.jumpTime < 500 || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0xFu) || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 5u) )
    return 0;
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, GameModeFlagValues::ms_mpValue, 0x38u) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_LADDER_CLIMB|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2514, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::MELEE_EXECUTION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::MELEE_EXECUTION )") )
      __debugbreak();
    return 0;
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x2Au) )
  {
    groundRefEnt = ps->groundRefEnt;
    if ( groundRefEnt == 2047 || !groundRefEnt )
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_PARACHUTE_IDLE|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2575, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ZEROG ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ZEROG )") )
        __debugbreak();
      if ( !BG_IsPlayerZeroGWalking(ps) )
        return 0;
    }
  }
  if ( ps->pm_type >= 7 )
    return 0;
  if ( BG_ContextMount_IsActive(ps) )
    return 0;
  serverTime = pm->cmd.serverTime;
  if ( ps->mountState.endTime == serverTime )
    return 0;
  v13 = 0;
  if ( Slide_CanDoLateSlideJump(ps, serverTime) && PM_CanStand(ps, pm, 1) )
  {
    v13 = 1;
  }
  else if ( PM_GetEffectiveStance(ps) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Du) )
  {
    return 0;
  }
  if ( (p_cmd->buttons & 0x100) == 0 )
    return 0;
  if ( v13 )
  {
    Slide_ScaleVelocityBeforeJump(ps);
    BG_AddPredictableEventToPlayerstate(EV_STANCE_FORCE_STAND, 0, pm->cmd.serverTime, pm->weaponMap, ps);
  }
  else if ( (pm->oldcmd.buttons & 0x100) != 0 )
  {
    p_cmd->buttons &= ~0x100ui64;
    return 0;
  }
  *(double *)&_XMM0 = Jump_GetJumpHeight(ps);
  __asm { vmovaps xmm2, xmm0; height }
  v15 = Jump_Start(pm, pml, *(float *)&_XMM2);
  weaponMap = pm->weaponMap;
  v17 = v15;
  v18 = PM_GroundSurfaceType(pm);
  if ( v18 )
  {
    v19 = BG_PackFootstepEventParm(weaponMap, ps, v18, FOOTSTEP_ACTION_TYPE_STEP, 0);
    BG_AddPredictableEventToPlayerstate(EV_JUMP, v19, pm->cmd.serverTime, weaponMap, ps);
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) )
    PM_Jump_PushOffLadder(pm, ps, pml);
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
  {
    PM_SetJumpStrafeCondition(pm);
    if ( v17 )
    {
      v20 = ANIM_ET_JUMP_LEAP;
    }
    else if ( PlayerASM_IsEnabled() || (v20 = ANIM_ET_JUMPBK, pm->cmd.forwardmove >= 0) )
    {
      v20 = ANIM_ET_JUMP;
    }
    BG_AnimScriptEvent(pm->m_bgHandler, ps, v20, 0, 1, &pml->holdrand);
    BG_AnimScriptAnimation(pm->m_bgHandler, ps, AISTATE_COMBAT, ANIM_MT_AIR, 0, 0);
  }
  return 1;
}

/*
==============
Jump_ClampVelocity
==============
*/
void Jump_ClampVelocity(const pmove_t *pm, playerState_s *ps, const vec3_t *origin)
{
  WorldUpReferenceFramePM *p_refFrame; 
  char v13; 
  char v14; 
  WorldUpReferenceFrame *v17; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
  }
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x13u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_jump.cpp", 226, ASSERT_TYPE_ASSERT, "(ps->pm_flags.TestFlag( PMoveFlagsCommon::JUMPING ))", (const char *)&queryFormat, "ps->pm_flags.TestFlag( PMoveFlagsCommon::JUMPING )") )
    __debugbreak();
  p_refFrame = &pm->refFrame;
  *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(p_refFrame, &ps->origin);
  __asm { vmovaps xmm6, xmm0 }
  WorldUpReferenceFrame::GetUpContribution(p_refFrame, origin);
  __asm
  {
    vsubss  xmm1, xmm6, xmm0
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm1, xmm7
  }
  if ( !(v13 | v14) )
  {
    *(double *)&_XMM0 = Jump_GetJumpHeight(ps);
    __asm { vaddss  xmm6, xmm0, dword ptr [rdi+0C8h] }
    *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(p_refFrame, &ps->origin);
    __asm
    {
      vsubss  xmm1, xmm6, xmm0
      vcomiss xmm1, cs:__real@3dcccccd
    }
    v17 = p_refFrame;
    if ( v13 )
    {
      __asm { vxorps  xmm1, xmm1, xmm1 }
LABEL_9:
      WorldUpReferenceFrame::SetUpContribution(v17, *(float *)&_XMM1, &ps->velocity);
      goto LABEL_10;
    }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, xmm1
      vmulss  xmm2, xmm1, cs:__real@40000000
      vsqrtss xmm6, xmm2, xmm2
    }
    *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(p_refFrame, &ps->velocity);
    __asm { vcomiss xmm0, xmm6 }
    if ( !(v13 | v14) )
    {
      __asm { vmovaps xmm1, xmm6; height }
      v17 = p_refFrame;
      goto LABEL_9;
    }
  }
LABEL_10:
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
  }
}

/*
==============
Jump_ClearState
==============
*/
void Jump_ClearState(pmove_t *pm)
{
  playerState_s *ps; 
  int SprintLeftRaw; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_jump.cpp", 78, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x13u) )
  {
    SprintLeftRaw = PM_GetSprintLeftRaw(pm->weaponMap, ps, ps->jumpState.jumpTime);
    PM_SetSprintLeft(pm->weaponMap, ps, ps->serverTime, SprintLeftRaw);
  }
  ps->pm_flags.m_flags[0] &= ~0x80000u;
  ps->jumpState.jumpOriginZ = 0.0;
}

/*
==============
Jump_GetJumpHeight
==============
*/

float __fastcall Jump_GetJumpHeight(playerState_s *ps, double _XMM1_8)
{
  const dvar_t *v8; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
  }
  if ( ps )
  {
    _RAX = BG_GetSuitDef(ps->suitIndex);
    __asm { vmovss  xmm6, dword ptr [rax+68h] }
  }
  else
  {
    _RBX = DCONST_DVARMPFLT_jump_height;
    if ( !DCONST_DVARMPFLT_jump_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "jump_height") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm6, dword ptr [rbx+28h] }
  }
  v8 = DCONST_DVARMPSPBOOL_jump_subsequentSlowdownEnable;
  __asm { vmovss  xmm7, cs:__real@3f800000 }
  if ( !DCONST_DVARMPSPBOOL_jump_subsequentSlowdownEnable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "jump_subsequentSlowdownEnable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled )
  {
    _RBX = DCONST_DVARFLT_jump_subsequentJumpScale;
    if ( !DCONST_DVARFLT_jump_subsequentJumpScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "jump_subsequentJumpScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+28h]; X
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, dword ptr [rdi+0C4h]; Y
    }
    *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
    _RBX = DCONST_DVARFLT_jump_subsequentMinScale;
    __asm { vmovaps xmm7, xmm0 }
    if ( !DCONST_DVARFLT_jump_subsequentMinScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "jump_subsequentMinScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+28h]
      vmaxss  xmm1, xmm0, xmm7
      vmulss  xmm0, xmm1, xmm6
    }
  }
  else
  {
    __asm { vmulss  xmm0, xmm7, xmm6 }
  }
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
  }
  return *(float *)&_XMM0;
}

/*
==============
Jump_GetJumpHeightClassic
==============
*/
float Jump_GetJumpHeightClassic()
{
  _RBX = DCONST_DVARMPFLT_jump_height;
  if ( !DCONST_DVARMPFLT_jump_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "jump_height") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  return *(float *)&_XMM0;
}

/*
==============
Jump_GetLandFactor
==============
*/
float Jump_GetLandFactor(playerState_s *ps)
{
  const dvar_t *v4; 
  const dvar_t *v8; 
  const dvar_t *v9; 

  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x13u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_jump.cpp", 249, ASSERT_TYPE_ASSERT, "(ps->pm_flags.TestFlag( PMoveFlagsCommon::JUMPING ))", (const char *)&queryFormat, "ps->pm_flags.TestFlag( PMoveFlagsCommon::JUMPING )") )
    __debugbreak();
  v4 = DCONST_DVARINT_jump_landSlowDownTime;
  if ( !DCONST_DVARINT_jump_landSlowDownTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "jump_landSlowDownTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( ps->pm_time > v4->current.integer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_jump.cpp", 250, ASSERT_TYPE_ASSERT, "(ps->pm_time <= Dvar_GetInt_Internal_DebugName( DCONST_DVARINT_jump_landSlowDownTime, \"jump_landSlowDownTime\" ))", (const char *)&queryFormat, "ps->pm_time <= Dconst_GetInt( jump_landSlowDownTime )") )
    __debugbreak();
  if ( Jump_IsJumpSlowDownEnabled(ps) )
  {
    _RBX = DCONST_DVARFLT_jump_landSlowDownLandJumpFactor;
    __asm { vmovaps [rsp+68h+var_28], xmm6 }
    if ( !DCONST_DVARFLT_jump_landSlowDownLandJumpFactor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "jump_landSlowDownLandJumpFactor") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm6, dword ptr [rbx+28h] }
    v8 = DCONST_DVARINT_jump_landSlowDownTime;
    if ( !DCONST_DVARINT_jump_landSlowDownTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "jump_landSlowDownTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    if ( ps->pm_time < v8->current.integer - 100 )
    {
      v9 = DCONST_DVARINT_jump_landSlowDownTime;
      if ( !DCONST_DVARINT_jump_landSlowDownTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "jump_landSlowDownTime") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v9);
      __asm
      {
        vsubss  xmm1, xmm6, cs:__real@3f800000
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rdi+10h]
        vmulss  xmm2, xmm1, xmm0
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vdivss  xmm1, xmm2, xmm0
        vaddss  xmm0, xmm1, cs:__real@3f800000
      }
    }
    else
    {
      __asm { vmovaps xmm0, xmm6 }
    }
    __asm { vmovaps xmm6, [rsp+68h+var_28] }
  }
  else
  {
    __asm { vmovss  xmm0, cs:__real@3f800000 }
  }
  return *(float *)&_XMM0;
}

/*
==============
Jump_GetSlowdownFriction
==============
*/
float Jump_GetSlowdownFriction(playerState_s *ps)
{
  const dvar_t *v4; 
  const dvar_t *v8; 
  const dvar_t *v9; 

  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x13u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_jump.cpp", 183, ASSERT_TYPE_ASSERT, "(ps->pm_flags.TestFlag( PMoveFlagsCommon::JUMPING ))", (const char *)&queryFormat, "ps->pm_flags.TestFlag( PMoveFlagsCommon::JUMPING )") )
    __debugbreak();
  v4 = DCONST_DVARINT_jump_landSlowDownTime;
  if ( !DCONST_DVARINT_jump_landSlowDownTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "jump_landSlowDownTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( ps->pm_time > v4->current.integer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_jump.cpp", 184, ASSERT_TYPE_ASSERT, "(ps->pm_time <= Dvar_GetInt_Internal_DebugName( DCONST_DVARINT_jump_landSlowDownTime, \"jump_landSlowDownTime\" ))", (const char *)&queryFormat, "ps->pm_time <= Dconst_GetInt( jump_landSlowDownTime )") )
    __debugbreak();
  if ( Jump_IsJumpSlowDownEnabled(ps) )
  {
    _RBX = DCONST_DVARFLT_jump_landSlowDownFriction;
    __asm { vmovaps [rsp+68h+var_28], xmm6 }
    if ( !DCONST_DVARFLT_jump_landSlowDownFriction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "jump_landSlowDownFriction") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm6, dword ptr [rbx+28h] }
    v8 = DCONST_DVARINT_jump_landSlowDownTime;
    if ( !DCONST_DVARINT_jump_landSlowDownTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "jump_landSlowDownTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    if ( ps->pm_time < v8->current.integer - 100 )
    {
      v9 = DCONST_DVARINT_jump_landSlowDownTime;
      if ( !DCONST_DVARINT_jump_landSlowDownTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "jump_landSlowDownTime") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v9);
      __asm
      {
        vsubss  xmm1, xmm6, cs:__real@3f800000
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rdi+10h]
        vmulss  xmm2, xmm1, xmm0
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vdivss  xmm1, xmm2, xmm0
        vaddss  xmm0, xmm1, cs:__real@3f800000
      }
    }
    else
    {
      __asm { vmovaps xmm0, xmm6 }
    }
    __asm { vmovaps xmm6, [rsp+68h+var_28] }
  }
  else
  {
    __asm { vmovss  xmm0, cs:__real@3f800000 }
  }
  return *(float *)&_XMM0;
}

/*
==============
Jump_GetStepHeight
==============
*/
bool Jump_GetStepHeight(const pmove_t *pm, playerState_s *ps, const vec3_t *origin, float *stepSize)
{
  WorldUpReferenceFramePM *p_refFrame; 
  char v13; 
  const dvar_t *v14; 
  char v17; 
  bool result; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  _RSI = stepSize;
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x13u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_jump.cpp", 105, ASSERT_TYPE_ASSERT, "(ps->pm_flags.TestFlag( PMoveFlagsCommon::JUMPING ))", (const char *)&queryFormat, "ps->pm_flags.TestFlag( PMoveFlagsCommon::JUMPING )") )
    __debugbreak();
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_jump.cpp", 106, ASSERT_TYPE_ASSERT, "(stepSize)", (const char *)&queryFormat, "stepSize") )
    __debugbreak();
  p_refFrame = &pm->refFrame;
  *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(p_refFrame, origin);
  __asm { vmovaps xmm6, xmm0 }
  *(double *)&_XMM0 = Jump_GetJumpHeight(ps);
  __asm
  {
    vaddss  xmm1, xmm0, dword ptr [rbx+0C8h]
    vcomiss xmm6, xmm1
  }
  if ( v13 )
  {
    v14 = DCONST_DVARFLT_jump_stepSize;
    if ( !DCONST_DVARFLT_jump_stepSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "jump_stepSize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    *_RSI = v14->current.value;
    *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(p_refFrame, origin);
    __asm { vaddss  xmm6, xmm0, dword ptr [rsi] }
    *(double *)&_XMM0 = Jump_GetJumpHeight(ps);
    __asm
    {
      vaddss  xmm1, xmm0, dword ptr [rbx+0C8h]
      vcomiss xmm6, xmm1
    }
    if ( !(v13 | v17) )
    {
      *(double *)&_XMM0 = Jump_GetJumpHeight(ps);
      __asm { vaddss  xmm6, xmm0, dword ptr [rbx+0C8h] }
      WorldUpReferenceFrame::GetUpContribution(p_refFrame, origin);
      __asm
      {
        vsubss  xmm1, xmm6, xmm0
        vmovss  dword ptr [rsi], xmm1
      }
    }
    result = 1;
  }
  else
  {
    result = 0;
  }
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
  return result;
}

/*
==============
Jump_GetVelocity
==============
*/

float __fastcall Jump_GetVelocity(pmove_t *pm, double height)
{
  playerState_s *ps; 
  int lastSprintStart; 
  int serverTime; 
  const dvar_t *v11; 
  int v12; 
  const dvar_t *v13; 
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *p_pm_flags; 
  const dvar_t *v24; 
  char v27; 

  __asm
  {
    vmovaps [rsp+78h+var_28], xmm6
    vmovaps [rsp+78h+var_38], xmm7
    vmovaps xmm7, xmm1
  }
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_jump.cpp", 271, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_jump.cpp", 271, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( Leap_ShouldSprintLeap(pm) )
  {
    lastSprintStart = ps->sprintState.lastSprintStart;
    __asm { vmovss  xmm6, cs:__real@3f800000 }
    if ( lastSprintStart <= ps->leapState.lastLandTime )
      lastSprintStart = ps->leapState.lastLandTime;
    serverTime = pm->cmd.serverTime;
    v11 = DCONST_DVARMPINT_sprintLeap_minSprintTimeMs;
    v12 = serverTime - lastSprintStart;
    if ( !DCONST_DVARMPINT_sprintLeap_minSprintTimeMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sprintLeap_minSprintTimeMs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    if ( v12 <= v11->current.integer )
    {
      v13 = DCONST_DVARMPINT_sprintLeap_minSprintTimeMs;
      if ( !DCONST_DVARMPINT_sprintLeap_minSprintTimeMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sprintLeap_minSprintTimeMs") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v13);
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rdi+28h]
        vcvtsi2ss xmm1, xmm1, esi
        vdivss  xmm6, xmm1, xmm0
      }
    }
    ps->pm_flags.m_flags[0] |= 0x80000000;
    p_pm_flags = &ps->pm_flags;
    BG_GetSuitDef(ps->suitIndex);
    __asm
    {
      vmulss  xmm0, xmm6, dword ptr [rax+6Ch]
      vmaxss  xmm7, xmm0, xmm7
    }
  }
  else
  {
    p_pm_flags = &ps->pm_flags;
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, xmm7
    vmulss  xmm6, xmm1, cs:__real@40000000
  }
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0x13u) )
    goto LABEL_29;
  v24 = DCONST_DVARINT_jump_landSlowDownTime;
  if ( !DCONST_DVARINT_jump_landSlowDownTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "jump_landSlowDownTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v24);
  if ( ps->pm_time <= v24->current.integer )
  {
    *(float *)&_XMM0 = Jump_GetLandFactor(ps);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vucomiss xmm0, xmm1
      vmovaps xmm7, xmm0
    }
    if ( v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_jump.cpp", 300, ASSERT_TYPE_ASSERT, "(factor)", (const char *)&queryFormat, "factor") )
      __debugbreak();
    __asm
    {
      vdivss  xmm0, xmm6, xmm7
      vsqrtss xmm0, xmm0, xmm0
    }
  }
  else
  {
LABEL_29:
    __asm { vsqrtss xmm0, xmm6, xmm6 }
  }
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_28]
    vmovaps xmm7, [rsp+78h+var_38]
  }
  return *(float *)&_XMM0;
}

/*
==============
Jump_HandleLateJump
==============
*/
void Jump_HandleLateJump(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  playerState_s *v5; 
  int fallStartTime; 
  int v7; 
  const dvar_t *v8; 
  const dvar_t *v9; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_jump.cpp", 611, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_jump.cpp", 612, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_jump.cpp", 614, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_jump.cpp", 614, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  Jump_UpdateFallTime(pm, ps);
  if ( ps->groundEntityNum == 2047 && ps->jumpState.jumpTime < ps->fallStartTime )
  {
    v5 = pm->ps;
    if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_jump.cpp", 594, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    fallStartTime = v5->fallStartTime;
    v7 = fallStartTime - v5->mantleState.endTime;
    v8 = DCONST_DVARINT_jump_lateJumpMinMantleFallDelta;
    if ( !DCONST_DVARINT_jump_lateJumpMinMantleFallDelta && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "jump_lateJumpMinMantleFallDelta") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    if ( v7 >= v8->current.integer )
    {
      v9 = DCONST_DVARINT_jump_lateJumpGraceMs;
      if ( !DCONST_DVARINT_jump_lateJumpGraceMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "jump_lateJumpGraceMs") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v9);
      if ( pm->cmd.serverTime - fallStartTime < v9->current.integer )
        Jump_Check(pm, pml);
    }
  }
}

/*
==============
Jump_InJumpDebounce
==============
*/
bool Jump_InJumpDebounce(const playerState_s *const ps, const usercmd_s *const cmd)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_jump.cpp", 428, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_jump.cpp", 429, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  return cmd->serverTime - ps->jumpState.jumpTime < 500;
}

/*
==============
Jump_IsJumpSlowDownEnabled
==============
*/
bool Jump_IsJumpSlowDownEnabled(playerState_s *ps)
{
  const dvar_t *v1; 

  if ( !BG_GetSuitDef(ps->suitIndex)->jump_slowdownEnable )
    return 0;
  v1 = DCONST_DVARMPBOOL_jump_slowdownEnable;
  if ( !DCONST_DVARMPBOOL_jump_slowdownEnable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "jump_slowdownEnable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return v1->current.enabled;
}

/*
==============
Jump_IsPlayerAboveMax
==============
*/
bool Jump_IsPlayerAboveMax(const pmove_t *pm, playerState_s *ps)
{
  char v9; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x13u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_jump.cpp", 126, ASSERT_TYPE_ASSERT, "(ps->pm_flags.TestFlag( PMoveFlagsCommon::JUMPING ))", (const char *)&queryFormat, "ps->pm_flags.TestFlag( PMoveFlagsCommon::JUMPING )") )
    __debugbreak();
  *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(&pm->refFrame, &ps->origin);
  __asm { vmovaps xmm6, xmm0 }
  *(double *)&_XMM0 = Jump_GetJumpHeight(ps);
  __asm
  {
    vaddss  xmm1, xmm0, dword ptr [rbx+0C8h]
    vcomiss xmm6, xmm1
    vmovaps xmm6, [rsp+48h+var_18]
  }
  return !v9;
}

/*
==============
Jump_JumpedThisFrame
==============
*/
bool Jump_JumpedThisFrame(const playerState_s *ps, int serverTime)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_jump.cpp", 664, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return ps->jumpState.jumpTime == serverTime;
}

/*
==============
Jump_Landed
==============
*/
void Jump_Landed(pmove_t *pm)
{
  playerState_s *ps; 
  int SprintLeftRaw; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_jump.cpp", 90, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x13u) )
  {
    SprintLeftRaw = PM_GetSprintLeftRaw(pm->weaponMap, ps, ps->jumpState.jumpTime);
    PM_SetSprintLeft(pm->weaponMap, ps, ps->serverTime, SprintLeftRaw);
  }
}

/*
==============
Jump_ReduceFriction
==============
*/
double Jump_ReduceFriction(pmove_t *pm, playerState_s *ps)
{
  const dvar_t *v4; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_jump.cpp", 200, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_jump.cpp", 201, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x13u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_jump.cpp", 205, ASSERT_TYPE_ASSERT, "(ps->pm_flags.TestFlag( PMoveFlagsCommon::JUMPING ))", (const char *)&queryFormat, "ps->pm_flags.TestFlag( PMoveFlagsCommon::JUMPING )") )
    __debugbreak();
  v4 = DCONST_DVARINT_jump_landSlowDownTime;
  if ( !DCONST_DVARINT_jump_landSlowDownTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "jump_landSlowDownTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( ps->pm_time > v4->current.integer )
  {
    Jump_ClearState(pm);
    __asm { vmovss  xmm0, cs:__real@3f800000 }
  }
  else
  {
    *(float *)&_XMM0 = Jump_GetSlowdownFriction(ps);
  }
  return *(double *)&_XMM0;
}

/*
==============
Jump_SetTime
==============
*/
void Jump_SetTime(pmove_t *pm)
{
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_jump.cpp", 312, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  pm->ps->jumpState.jumpTime = pm->cmd.serverTime;
  pm->m_flags &= ~2u;
}

/*
==============
Jump_Start
==============
*/

_BOOL8 __fastcall Jump_Start(pmove_t *pm, pml_t *pml, double height)
{
  bool ShouldSprintLeap; 
  int lastSprintStart; 
  const dvar_t *v15; 
  int v16; 
  const dvar_t *v17; 
  const dvar_t *v28; 
  int subsequentJump; 
  unsigned __int64 CurrentWeaponForPlayer; 
  __int64 v37; 
  __int64 v38; 
  WorldUpReferenceFrame v39; 

  __asm
  {
    vmovaps [rsp+0B8h+var_48], xmm6
    vmovaps xmm6, xmm2
  }
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_jump.cpp", 339, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pm->ground && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_jump.cpp", 340, ASSERT_TYPE_ASSERT, "(pm->ground)", (const char *)&queryFormat, "pm->ground") )
    __debugbreak();
  _RDI = pm->ps;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_jump.cpp", 342, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm { vmovaps xmm1, xmm6; height }
  ShouldSprintLeap = Leap_ShouldSprintLeap(pm);
  *(double *)&_XMM0 = Jump_GetVelocity(pm, *(float *)&_XMM1);
  __asm { vmovaps xmm6, xmm0 }
  pm->ground->groundPlane = 0;
  PM_SetAlmostGroundPlane(pm, 0);
  pm->ground->walking = 0;
  _RDI->groundEntityNum = 2047;
  pm->ps->jumpState.jumpTime = pm->cmd.serverTime;
  pm->m_flags &= ~2u;
  Jump_UpdateFallTime(pm, _RDI);
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v39, _RDI, pm->m_bgHandler);
  *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(&v39, &_RDI->origin);
  __asm
  {
    vmovaps xmm1, xmm6; height
    vmovss  dword ptr [rdi+0C8h], xmm0
  }
  WorldUpReferenceFrame::SetUpContribution(&v39, *(float *)&_XMM1, &_RDI->velocity);
  if ( ShouldSprintLeap )
  {
    lastSprintStart = _RDI->sprintState.lastSprintStart;
    __asm { vmovss  xmm6, cs:__real@3f800000 }
    if ( lastSprintStart <= _RDI->leapState.lastLandTime )
      lastSprintStart = _RDI->leapState.lastLandTime;
    v15 = DCONST_DVARMPINT_sprintLeap_minSprintTimeMs;
    v16 = pm->cmd.serverTime - lastSprintStart;
    if ( !DCONST_DVARMPINT_sprintLeap_minSprintTimeMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sprintLeap_minSprintTimeMs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    if ( v16 <= v15->current.integer )
    {
      v17 = DCONST_DVARMPINT_sprintLeap_minSprintTimeMs;
      if ( !DCONST_DVARMPINT_sprintLeap_minSprintTimeMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sprintLeap_minSprintTimeMs") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v17);
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rbp+28h]
        vcvtsi2ss xmm1, xmm1, ebx
        vdivss  xmm6, xmm1, xmm0
      }
    }
    BG_GetSuitDef(_RDI->suitIndex);
    __asm
    {
      vmulss  xmm0, xmm6, dword ptr [rax+70h]
      vaddss  xmm6, xmm0, cs:__real@3f800000
    }
    *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(&pm->refFrame, &_RDI->velocity);
    __asm
    {
      vmulss  xmm1, xmm6, dword ptr [rdi+3Ch]
      vmovss  dword ptr [rdi+3Ch], xmm1
      vmulss  xmm2, xmm6, dword ptr [rdi+40h]
      vmovss  dword ptr [rdi+40h], xmm2
      vmulss  xmm1, xmm6, dword ptr [rdi+44h]
      vmovss  dword ptr [rdi+44h], xmm1
      vmovaps xmm1, xmm0; height
    }
    WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, *(float *)&_XMM1, &_RDI->velocity);
  }
  v28 = DCONST_DVARMPSPBOOL_jump_subsequentSlowdownEnable;
  __asm { vmovaps xmm6, [rsp+0B8h+var_48] }
  if ( !DCONST_DVARMPSPBOOL_jump_subsequentSlowdownEnable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "jump_subsequentSlowdownEnable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v28);
  if ( v28->current.enabled )
  {
    subsequentJump = _RDI->jumpState.subsequentJump;
    if ( subsequentJump < 7 )
      _RDI->jumpState.subsequentJump = subsequentJump + 1;
  }
  _RDI->pm_flags.m_flags[0] &= 0xFFFFCFFF;
  _RDI->pm_flags.m_flags[0] |= 0x80000u;
  _RDI->pm_time = 0;
  _RDI->sprintState.sprintButtonUpRequired = 0;
  CurrentWeaponForPlayer = (unsigned __int64)BG_GetCurrentWeaponForPlayer(pm->weaponMap, _RDI);
  BG_UsingAlternate(_RDI);
  LODWORD(CurrentWeaponForPlayer) = *(unsigned __int16 *)CurrentWeaponForPlayer;
  if ( (unsigned int)CurrentWeaponForPlayer > bg_lastParsedWeaponIndex )
  {
    LODWORD(v38) = bg_lastParsedWeaponIndex;
    LODWORD(v37) = CurrentWeaponForPlayer;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v37, v38) )
      __debugbreak();
  }
  CurrentWeaponForPlayer = (unsigned __int16)CurrentWeaponForPlayer;
  if ( !bg_weaponDefs[(unsigned __int16)CurrentWeaponForPlayer] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
    __debugbreak();
  if ( bg_weaponDefs[CurrentWeaponForPlayer]->jumpSpread )
  {
    _RBX = DCONST_DVARFLT_jump_spreadAdd;
    if ( !DCONST_DVARFLT_jump_spreadAdd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "jump_spreadAdd") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+28h]
      vaddss  xmm1, xmm0, dword ptr [rdi+744h]
      vminss  xmm2, xmm1, cs:__real@437f0000
      vmovss  dword ptr [rdi+744h], xmm2
    }
  }
  PM_Skydive_OnJump(pm, pml);
  return ShouldSprintLeap;
}

/*
==============
Jump_Update
==============
*/
void Jump_Update(pmove_t *pm)
{
  playerState_s *ps; 
  const dvar_t *v3; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_jump.cpp", 321, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_jump.cpp", 321, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v3 = DCONST_DVARINT_jump_subsequentSlowdownTime;
  if ( !DCONST_DVARINT_jump_subsequentSlowdownTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "jump_subsequentSlowdownTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.integer + ps->jumpState.jumpTime < pm->cmd.serverTime )
    ps->jumpState.subsequentJump = 0;
}

/*
==============
Jump_UpdateFallTime
==============
*/
void Jump_UpdateFallTime(pmove_t *pm, playerState_s *ps)
{
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_jump.cpp", 642, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_jump.cpp", 643, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( ps->groundEntityNum != 2047 || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 5u) )
  {
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(&ps->otherFlags, ACTIVE, 0x11u);
  }
  else
  {
    if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0x11u) )
      ps->fallStartTime = pm->cmd.serverTime;
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&ps->otherFlags, ACTIVE, 0x11u);
  }
}

