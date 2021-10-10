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
  const dvar_t *v4; 
  float value; 
  int pm_time; 
  const dvar_t *v7; 
  const char *v8; 
  double UpContribution; 
  const dvar_t *v10; 
  const dvar_t *v11; 

  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x13u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_jump.cpp", 146, ASSERT_TYPE_ASSERT, "(ps->pm_flags.TestFlag( PMoveFlagsCommon::JUMPING ))", (const char *)&queryFormat, "ps->pm_flags.TestFlag( PMoveFlagsCommon::JUMPING )") )
    __debugbreak();
  v4 = DCONST_DVARINT_jump_landSlowDownTime;
  value = FLOAT_1_0;
  if ( !DCONST_DVARINT_jump_landSlowDownTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "jump_landSlowDownTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  pm_time = ps->pm_time;
  if ( pm_time <= v4->current.integer )
  {
    if ( pm_time )
      goto LABEL_25;
    UpContribution = WorldUpReferenceFrame::GetUpContribution(&pm->refFrame, &ps->origin);
    if ( *(float *)&UpContribution >= (float)(ps->jumpState.jumpOriginZ + 18.0) )
    {
      v11 = DCONST_DVARINT_jump_landHigherSlowDownTime;
      if ( !DCONST_DVARINT_jump_landHigherSlowDownTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "jump_landHigherSlowDownTime") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v11);
      ps->pm_time = v11->current.integer;
      v7 = DCONST_DVARFLT_jump_landHigherSlowDownVelocity;
      if ( DCONST_DVARFLT_jump_landHigherSlowDownVelocity )
        goto LABEL_24;
      v8 = "jump_landHigherSlowDownVelocity";
      goto LABEL_22;
    }
    v10 = DCONST_DVARINT_jump_landSlowDownTime;
    if ( !DCONST_DVARINT_jump_landSlowDownTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "jump_landSlowDownTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    ps->pm_time = v10->current.integer;
  }
  else
  {
    Jump_ClearState(pm);
  }
  v7 = DCONST_DVARFLT_jump_landSlowDownVelocity;
  if ( !DCONST_DVARFLT_jump_landSlowDownVelocity )
  {
    v8 = "jump_landSlowDownVelocity";
LABEL_22:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v8) )
      __debugbreak();
  }
LABEL_24:
  Dvar_CheckFrontendServerThread(v7);
  value = v7->current.value;
LABEL_25:
  if ( Jump_IsJumpSlowDownEnabled(ps) )
  {
    ps->velocity.v[0] = value * ps->velocity.v[0];
    ps->velocity.v[1] = value * ps->velocity.v[1];
    ps->velocity.v[2] = value * ps->velocity.v[2];
  }
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
  const dvar_t *v5; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v7; 
  usercmd_s *p_cmd; 
  __int16 groundRefEnt; 
  int serverTime; 
  char v12; 
  double JumpHeight; 
  bool v14; 
  BgWeaponMap *weaponMap; 
  bool v16; 
  int v17; 
  unsigned int v18; 
  PlayerAnimScriptEventType v19; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_jump.cpp", 444, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_jump.cpp", 444, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v5 = DVARBOOL_killswitch_weapon_inspect_on_jump;
  if ( !DVARBOOL_killswitch_weapon_inspect_on_jump && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_weapon_inspect_on_jump") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled && Com_GameMode_SupportsFeature(WEAPON_LEAP_OUT|0x80) )
  {
    CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
    if ( BG_UseLeftTriggerAltFireMode(CurrentWeaponForPlayer) )
      v7 = ps && GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x1Du);
    else
      v7 = BG_UsingAlternate(ps);
    if ( BG_GetWeaponInspectEnabled(CurrentWeaponForPlayer, v7) )
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
  v12 = 0;
  if ( Slide_CanDoLateSlideJump(ps, serverTime) && PM_CanStand(ps, pm, 1) )
  {
    v12 = 1;
  }
  else if ( PM_GetEffectiveStance(ps) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Du) )
  {
    return 0;
  }
  if ( (p_cmd->buttons & 0x100) == 0 )
    return 0;
  if ( v12 )
  {
    Slide_ScaleVelocityBeforeJump(ps);
    BG_AddPredictableEventToPlayerstate(EV_STANCE_FORCE_STAND, 0, pm->cmd.serverTime, pm->weaponMap, ps);
  }
  else if ( (pm->oldcmd.buttons & 0x100) != 0 )
  {
    p_cmd->buttons &= ~0x100ui64;
    return 0;
  }
  JumpHeight = Jump_GetJumpHeight(ps);
  v14 = Jump_Start(pm, pml, *(float *)&JumpHeight);
  weaponMap = pm->weaponMap;
  v16 = v14;
  v17 = PM_GroundSurfaceType(pm);
  if ( v17 )
  {
    v18 = BG_PackFootstepEventParm(weaponMap, ps, v17, FOOTSTEP_ACTION_TYPE_STEP, 0);
    BG_AddPredictableEventToPlayerstate(EV_JUMP, v18, pm->cmd.serverTime, weaponMap, ps);
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) )
    PM_Jump_PushOffLadder(pm, ps, pml);
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
  {
    PM_SetJumpStrafeCondition(pm);
    if ( v16 )
    {
      v19 = ANIM_ET_JUMP_LEAP;
    }
    else if ( PlayerASM_IsEnabled() || (v19 = ANIM_ET_JUMPBK, pm->cmd.forwardmove >= 0) )
    {
      v19 = ANIM_ET_JUMP;
    }
    BG_AnimScriptEvent(pm->m_bgHandler, ps, v19, 0, 1, &pml->holdrand);
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
  double UpContribution; 
  float v8; 
  double v9; 
  double JumpHeight; 
  float v11; 
  double v12; 
  WorldUpReferenceFrame *v13; 
  float v14; 
  float v15; 
  double v16; 

  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x13u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_jump.cpp", 226, ASSERT_TYPE_ASSERT, "(ps->pm_flags.TestFlag( PMoveFlagsCommon::JUMPING ))", (const char *)&queryFormat, "ps->pm_flags.TestFlag( PMoveFlagsCommon::JUMPING )") )
    __debugbreak();
  p_refFrame = &pm->refFrame;
  UpContribution = WorldUpReferenceFrame::GetUpContribution(p_refFrame, &ps->origin);
  v8 = *(float *)&UpContribution;
  v9 = WorldUpReferenceFrame::GetUpContribution(p_refFrame, origin);
  if ( (float)(v8 - *(float *)&v9) > 0.0 )
  {
    JumpHeight = Jump_GetJumpHeight(ps);
    v11 = *(float *)&JumpHeight + ps->jumpState.jumpOriginZ;
    v12 = WorldUpReferenceFrame::GetUpContribution(p_refFrame, &ps->origin);
    v13 = p_refFrame;
    if ( (float)(v11 - *(float *)&v12) >= 0.1 )
    {
      v15 = fsqrt((float)((float)ps->gravity * (float)(v11 - *(float *)&v12)) * 2.0);
      v16 = WorldUpReferenceFrame::GetUpContribution(p_refFrame, &ps->velocity);
      if ( *(float *)&v16 <= v15 )
        return;
      v14 = v15;
      v13 = p_refFrame;
    }
    else
    {
      v14 = 0.0;
    }
    WorldUpReferenceFrame::SetUpContribution(v13, v14, &ps->velocity);
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
float Jump_GetJumpHeight(playerState_s *ps)
{
  float jump_height; 
  const dvar_t *v3; 
  const dvar_t *v4; 
  const dvar_t *v5; 
  const dvar_t *v6; 

  if ( ps )
  {
    jump_height = BG_GetSuitDef(ps->suitIndex)->jump_height;
  }
  else
  {
    v3 = DCONST_DVARMPFLT_jump_height;
    if ( !DCONST_DVARMPFLT_jump_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "jump_height") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    jump_height = v3->current.value;
  }
  v4 = DCONST_DVARMPSPBOOL_jump_subsequentSlowdownEnable;
  if ( !DCONST_DVARMPSPBOOL_jump_subsequentSlowdownEnable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "jump_subsequentSlowdownEnable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( !v4->current.enabled )
    return 1.0 * jump_height;
  v5 = DCONST_DVARFLT_jump_subsequentJumpScale;
  if ( !DCONST_DVARFLT_jump_subsequentJumpScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "jump_subsequentJumpScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  powf_0(v5->current.value, (float)ps->jumpState.subsequentJump);
  v6 = DCONST_DVARFLT_jump_subsequentMinScale;
  if ( !DCONST_DVARFLT_jump_subsequentMinScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "jump_subsequentMinScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  _XMM0 = v6->current.unsignedInt;
  __asm { vmaxss  xmm1, xmm0, xmm7 }
  return *(float *)&_XMM1 * jump_height;
}

/*
==============
Jump_GetJumpHeightClassic
==============
*/
float Jump_GetJumpHeightClassic()
{
  const dvar_t *v0; 

  v0 = DCONST_DVARMPFLT_jump_height;
  if ( !DCONST_DVARMPFLT_jump_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "jump_height") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.value;
}

/*
==============
Jump_GetLandFactor
==============
*/
float Jump_GetLandFactor(playerState_s *ps)
{
  const dvar_t *v2; 
  const dvar_t *v4; 
  float value; 
  const dvar_t *v6; 
  const dvar_t *v7; 

  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x13u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_jump.cpp", 249, ASSERT_TYPE_ASSERT, "(ps->pm_flags.TestFlag( PMoveFlagsCommon::JUMPING ))", (const char *)&queryFormat, "ps->pm_flags.TestFlag( PMoveFlagsCommon::JUMPING )") )
    __debugbreak();
  v2 = DCONST_DVARINT_jump_landSlowDownTime;
  if ( !DCONST_DVARINT_jump_landSlowDownTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "jump_landSlowDownTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( ps->pm_time > v2->current.integer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_jump.cpp", 250, ASSERT_TYPE_ASSERT, "(ps->pm_time <= Dvar_GetInt_Internal_DebugName( DCONST_DVARINT_jump_landSlowDownTime, \"jump_landSlowDownTime\" ))", (const char *)&queryFormat, "ps->pm_time <= Dconst_GetInt( jump_landSlowDownTime )") )
    __debugbreak();
  if ( !Jump_IsJumpSlowDownEnabled(ps) )
    return FLOAT_1_0;
  v4 = DCONST_DVARFLT_jump_landSlowDownLandJumpFactor;
  if ( !DCONST_DVARFLT_jump_landSlowDownLandJumpFactor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "jump_landSlowDownLandJumpFactor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  value = v4->current.value;
  v6 = DCONST_DVARINT_jump_landSlowDownTime;
  if ( !DCONST_DVARINT_jump_landSlowDownTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "jump_landSlowDownTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( ps->pm_time >= v6->current.integer - 100 )
    return value;
  v7 = DCONST_DVARINT_jump_landSlowDownTime;
  if ( !DCONST_DVARINT_jump_landSlowDownTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "jump_landSlowDownTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  return (float)((float)((float)(value - 1.0) * (float)ps->pm_time) / (float)(v7->current.integer - 100)) + 1.0;
}

/*
==============
Jump_GetSlowdownFriction
==============
*/
float Jump_GetSlowdownFriction(playerState_s *ps)
{
  const dvar_t *v2; 
  const dvar_t *v4; 
  float value; 
  const dvar_t *v6; 
  const dvar_t *v7; 

  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x13u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_jump.cpp", 183, ASSERT_TYPE_ASSERT, "(ps->pm_flags.TestFlag( PMoveFlagsCommon::JUMPING ))", (const char *)&queryFormat, "ps->pm_flags.TestFlag( PMoveFlagsCommon::JUMPING )") )
    __debugbreak();
  v2 = DCONST_DVARINT_jump_landSlowDownTime;
  if ( !DCONST_DVARINT_jump_landSlowDownTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "jump_landSlowDownTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( ps->pm_time > v2->current.integer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_jump.cpp", 184, ASSERT_TYPE_ASSERT, "(ps->pm_time <= Dvar_GetInt_Internal_DebugName( DCONST_DVARINT_jump_landSlowDownTime, \"jump_landSlowDownTime\" ))", (const char *)&queryFormat, "ps->pm_time <= Dconst_GetInt( jump_landSlowDownTime )") )
    __debugbreak();
  if ( !Jump_IsJumpSlowDownEnabled(ps) )
    return FLOAT_1_0;
  v4 = DCONST_DVARFLT_jump_landSlowDownFriction;
  if ( !DCONST_DVARFLT_jump_landSlowDownFriction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "jump_landSlowDownFriction") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  value = v4->current.value;
  v6 = DCONST_DVARINT_jump_landSlowDownTime;
  if ( !DCONST_DVARINT_jump_landSlowDownTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "jump_landSlowDownTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( ps->pm_time >= v6->current.integer - 100 )
    return value;
  v7 = DCONST_DVARINT_jump_landSlowDownTime;
  if ( !DCONST_DVARINT_jump_landSlowDownTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "jump_landSlowDownTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  return (float)((float)((float)(value - 1.0) * (float)ps->pm_time) / (float)(v7->current.integer - 100)) + 1.0;
}

/*
==============
Jump_GetStepHeight
==============
*/
char Jump_GetStepHeight(const pmove_t *pm, playerState_s *ps, const vec3_t *origin, float *stepSize)
{
  WorldUpReferenceFramePM *p_refFrame; 
  double UpContribution; 
  float v10; 
  double JumpHeight; 
  const dvar_t *v12; 
  double v13; 
  float v14; 
  double v15; 
  double v16; 
  float v17; 
  double v18; 

  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x13u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_jump.cpp", 105, ASSERT_TYPE_ASSERT, "(ps->pm_flags.TestFlag( PMoveFlagsCommon::JUMPING ))", (const char *)&queryFormat, "ps->pm_flags.TestFlag( PMoveFlagsCommon::JUMPING )") )
    __debugbreak();
  if ( !stepSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_jump.cpp", 106, ASSERT_TYPE_ASSERT, "(stepSize)", (const char *)&queryFormat, "stepSize") )
    __debugbreak();
  p_refFrame = &pm->refFrame;
  UpContribution = WorldUpReferenceFrame::GetUpContribution(p_refFrame, origin);
  v10 = *(float *)&UpContribution;
  JumpHeight = Jump_GetJumpHeight(ps);
  if ( v10 >= (float)(*(float *)&JumpHeight + ps->jumpState.jumpOriginZ) )
    return 0;
  v12 = DCONST_DVARFLT_jump_stepSize;
  if ( !DCONST_DVARFLT_jump_stepSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "jump_stepSize") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  *stepSize = v12->current.value;
  v13 = WorldUpReferenceFrame::GetUpContribution(p_refFrame, origin);
  v14 = *(float *)&v13 + *stepSize;
  v15 = Jump_GetJumpHeight(ps);
  if ( v14 > (float)(*(float *)&v15 + ps->jumpState.jumpOriginZ) )
  {
    v16 = Jump_GetJumpHeight(ps);
    v17 = *(float *)&v16 + ps->jumpState.jumpOriginZ;
    v18 = WorldUpReferenceFrame::GetUpContribution(p_refFrame, origin);
    *stepSize = v17 - *(float *)&v18;
  }
  return 1;
}

/*
==============
Jump_GetVelocity
==============
*/
float Jump_GetVelocity(pmove_t *pm, float height)
{
  playerState_s *ps; 
  int lastSprintStart; 
  __int128 v6; 
  int serverTime; 
  const dvar_t *v8; 
  int v9; 
  const dvar_t *v10; 
  __int128 v11; 
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *p_pm_flags; 
  __int128 v14; 
  float v15; 
  const dvar_t *v16; 
  float LandFactor; 

  *(float *)&_XMM7 = height;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_jump.cpp", 271, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_jump.cpp", 271, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( Leap_ShouldSprintLeap(pm) )
  {
    lastSprintStart = ps->sprintState.lastSprintStart;
    v6 = LODWORD(FLOAT_1_0);
    if ( lastSprintStart <= ps->leapState.lastLandTime )
      lastSprintStart = ps->leapState.lastLandTime;
    serverTime = pm->cmd.serverTime;
    v8 = DCONST_DVARMPINT_sprintLeap_minSprintTimeMs;
    v9 = serverTime - lastSprintStart;
    if ( !DCONST_DVARMPINT_sprintLeap_minSprintTimeMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sprintLeap_minSprintTimeMs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    if ( v9 <= v8->current.integer )
    {
      v10 = DCONST_DVARMPINT_sprintLeap_minSprintTimeMs;
      if ( !DCONST_DVARMPINT_sprintLeap_minSprintTimeMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sprintLeap_minSprintTimeMs") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v10);
      v11 = 0i64;
      *(float *)&v11 = (float)v9 / (float)v10->current.integer;
      v6 = v11;
    }
    ps->pm_flags.m_flags[0] |= 0x80000000;
    p_pm_flags = &ps->pm_flags;
    v14 = v6;
    *(float *)&v14 = *(float *)&v6 * BG_GetSuitDef(ps->suitIndex)->sprintLeap_height;
    _XMM0 = v14;
    __asm { vmaxss  xmm7, xmm0, xmm7 }
  }
  else
  {
    p_pm_flags = &ps->pm_flags;
  }
  v15 = (float)((float)ps->gravity * *(float *)&_XMM7) * 2.0;
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 0x13u) )
    return fsqrt(v15);
  v16 = DCONST_DVARINT_jump_landSlowDownTime;
  if ( !DCONST_DVARINT_jump_landSlowDownTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "jump_landSlowDownTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  if ( ps->pm_time > v16->current.integer )
    return fsqrt(v15);
  LandFactor = Jump_GetLandFactor(ps);
  if ( LandFactor == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_jump.cpp", 300, ASSERT_TYPE_ASSERT, "(factor)", (const char *)&queryFormat, "factor") )
    __debugbreak();
  return fsqrt(v15 / LandFactor);
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
  double UpContribution; 
  float v5; 
  double JumpHeight; 

  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x13u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_jump.cpp", 126, ASSERT_TYPE_ASSERT, "(ps->pm_flags.TestFlag( PMoveFlagsCommon::JUMPING ))", (const char *)&queryFormat, "ps->pm_flags.TestFlag( PMoveFlagsCommon::JUMPING )") )
    __debugbreak();
  UpContribution = WorldUpReferenceFrame::GetUpContribution(&pm->refFrame, &ps->origin);
  v5 = *(float *)&UpContribution;
  JumpHeight = Jump_GetJumpHeight(ps);
  return v5 >= (float)(*(float *)&JumpHeight + ps->jumpState.jumpOriginZ);
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
  double result; 

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
    *(_QWORD *)&result = LODWORD(FLOAT_1_0);
  }
  else
  {
    *(float *)&result = Jump_GetSlowdownFriction(ps);
  }
  return result;
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
_BOOL8 Jump_Start(pmove_t *pm, pml_t *pml, float height)
{
  __int128 v3; 
  playerState_s *ps; 
  bool ShouldSprintLeap; 
  double Velocity; 
  float v9; 
  double UpContribution; 
  int lastSprintStart; 
  float v12; 
  const dvar_t *v13; 
  int v14; 
  const dvar_t *v15; 
  float v16; 
  double v17; 
  const dvar_t *v18; 
  int subsequentJump; 
  unsigned __int64 CurrentWeaponForPlayer; 
  const dvar_t *v21; 
  __int128 unsignedInt; 
  __int64 v26; 
  __int64 v27; 
  WorldUpReferenceFrame v28; 
  __int128 v29; 

  v29 = v3;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_jump.cpp", 339, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pm->ground && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_jump.cpp", 340, ASSERT_TYPE_ASSERT, "(pm->ground)", (const char *)&queryFormat, "pm->ground") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_jump.cpp", 342, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  ShouldSprintLeap = Leap_ShouldSprintLeap(pm);
  Velocity = Jump_GetVelocity(pm, height);
  v9 = *(float *)&Velocity;
  pm->ground->groundPlane = 0;
  PM_SetAlmostGroundPlane(pm, 0);
  pm->ground->walking = 0;
  ps->groundEntityNum = 2047;
  pm->ps->jumpState.jumpTime = pm->cmd.serverTime;
  pm->m_flags &= ~2u;
  Jump_UpdateFallTime(pm, ps);
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v28, ps, pm->m_bgHandler);
  UpContribution = WorldUpReferenceFrame::GetUpContribution(&v28, &ps->origin);
  ps->jumpState.jumpOriginZ = *(float *)&UpContribution;
  WorldUpReferenceFrame::SetUpContribution(&v28, v9, &ps->velocity);
  if ( ShouldSprintLeap )
  {
    lastSprintStart = ps->sprintState.lastSprintStart;
    v12 = FLOAT_1_0;
    if ( lastSprintStart <= ps->leapState.lastLandTime )
      lastSprintStart = ps->leapState.lastLandTime;
    v13 = DCONST_DVARMPINT_sprintLeap_minSprintTimeMs;
    v14 = pm->cmd.serverTime - lastSprintStart;
    if ( !DCONST_DVARMPINT_sprintLeap_minSprintTimeMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sprintLeap_minSprintTimeMs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    if ( v14 <= v13->current.integer )
    {
      v15 = DCONST_DVARMPINT_sprintLeap_minSprintTimeMs;
      if ( !DCONST_DVARMPINT_sprintLeap_minSprintTimeMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sprintLeap_minSprintTimeMs") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v15);
      v12 = (float)v14 / (float)v15->current.integer;
    }
    v16 = (float)(v12 * BG_GetSuitDef(ps->suitIndex)->sprintLeap_forwardVelocityScale) + 1.0;
    v17 = WorldUpReferenceFrame::GetUpContribution(&pm->refFrame, &ps->velocity);
    ps->velocity.v[0] = v16 * ps->velocity.v[0];
    ps->velocity.v[1] = v16 * ps->velocity.v[1];
    ps->velocity.v[2] = v16 * ps->velocity.v[2];
    WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, *(float *)&v17, &ps->velocity);
  }
  v18 = DCONST_DVARMPSPBOOL_jump_subsequentSlowdownEnable;
  if ( !DCONST_DVARMPSPBOOL_jump_subsequentSlowdownEnable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "jump_subsequentSlowdownEnable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  if ( v18->current.enabled )
  {
    subsequentJump = ps->jumpState.subsequentJump;
    if ( subsequentJump < 7 )
      ps->jumpState.subsequentJump = subsequentJump + 1;
  }
  ps->pm_flags.m_flags[0] &= 0xFFFFCFFF;
  ps->pm_flags.m_flags[0] |= 0x80000u;
  ps->pm_time = 0;
  ps->sprintState.sprintButtonUpRequired = 0;
  CurrentWeaponForPlayer = (unsigned __int64)BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
  BG_UsingAlternate(ps);
  LODWORD(CurrentWeaponForPlayer) = *(unsigned __int16 *)CurrentWeaponForPlayer;
  if ( (unsigned int)CurrentWeaponForPlayer > bg_lastParsedWeaponIndex )
  {
    LODWORD(v27) = bg_lastParsedWeaponIndex;
    LODWORD(v26) = CurrentWeaponForPlayer;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v26, v27) )
      __debugbreak();
  }
  CurrentWeaponForPlayer = (unsigned __int16)CurrentWeaponForPlayer;
  if ( !bg_weaponDefs[(unsigned __int16)CurrentWeaponForPlayer] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
    __debugbreak();
  if ( bg_weaponDefs[CurrentWeaponForPlayer]->jumpSpread )
  {
    v21 = DCONST_DVARFLT_jump_spreadAdd;
    if ( !DCONST_DVARFLT_jump_spreadAdd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "jump_spreadAdd") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    unsignedInt = v21->current.unsignedInt;
    *(float *)&unsignedInt = v21->current.value + ps->weapCommon.aimSpreadScale;
    _XMM1 = unsignedInt;
    __asm { vminss  xmm2, xmm1, cs:__real@437f0000 }
    ps->weapCommon.aimSpreadScale = *(float *)&_XMM2;
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

