/*
==============
CG_Skydive_GetTurnRates
==============
*/

void __fastcall CG_Skydive_GetTurnRates(const LocalClientNum_t localClientNum, float *outPitchRate, float *outYawRate)
{
  ?CG_Skydive_GetTurnRates@@YAXW4LocalClientNum_t@@PEAM1@Z(localClientNum, outPitchRate, outYawRate);
}

/*
==============
CG_Skydive_RadialMotionBlurEnabled
==============
*/

RadialMotionBlurType __fastcall CG_Skydive_RadialMotionBlurEnabled(LocalClientNum_t localClientNum, const playerState_s *ps, float *minStrength, float *maxStrength, float *minRadius, float *maxRadius)
{
  return ?CG_Skydive_RadialMotionBlurEnabled@@YA?AW4RadialMotionBlurType@@W4LocalClientNum_t@@PEBUplayerState_s@@PEAM222@Z(localClientNum, ps, minStrength, maxStrength, minRadius, maxRadius);
}

/*
==============
CG_Skydive_GetFovDelta
==============
*/

double __fastcall CG_Skydive_GetFovDelta(const LocalClientNum_t localClientNum)
{
  double result; 

  *(float *)&result = ?CG_Skydive_GetFovDelta@@YAMW4LocalClientNum_t@@@Z(localClientNum);
  return result;
}

/*
==============
CG_Skydive_GetCameraShakeVelocity
==============
*/

double __fastcall CG_Skydive_GetCameraShakeVelocity(const LocalClientNum_t localClientNum, const playerState_s *ps)
{
  double result; 

  *(float *)&result = ?CG_Skydive_GetCameraShakeVelocity@@YAMW4LocalClientNum_t@@PEBUplayerState_s@@@Z(localClientNum, ps);
  return result;
}

/*
==============
CG_Skydive_IsSuperDiveActive
==============
*/

bool __fastcall CG_Skydive_IsSuperDiveActive(const LocalClientNum_t localClientNum)
{
  return ?CG_Skydive_IsSuperDiveActive@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Skydive_IsActiveForShake
==============
*/

bool __fastcall CG_Skydive_IsActiveForShake(const LocalClientNum_t localClientNum, const playerState_s *ps)
{
  return ?CG_Skydive_IsActiveForShake@@YA_NW4LocalClientNum_t@@PEBUplayerState_s@@@Z(localClientNum, ps);
}

/*
==============
CG_Skydive_GetCinematicMotionDef
==============
*/

const CinematicMotionDef *__fastcall CG_Skydive_GetCinematicMotionDef(const LocalClientNum_t localClientNum, const playerState_s *ps)
{
  return ?CG_Skydive_GetCinematicMotionDef@@YAPEBUCinematicMotionDef@@W4LocalClientNum_t@@PEBUplayerState_s@@@Z(localClientNum, ps);
}

/*
==============
CG_SkydiveUseCanopySounds
==============
*/

bool __fastcall CG_SkydiveUseCanopySounds(const playerState_s *ps)
{
  return ?CG_SkydiveUseCanopySounds@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
CG_Skydive_Update
==============
*/

void __fastcall CG_Skydive_Update(const LocalClientNum_t localClientNum)
{
  ?CG_Skydive_Update@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Skydive_UpdateClientEntity
==============
*/

void __fastcall CG_Skydive_UpdateClientEntity(LocalClientNum_t localClientNum, const centity_t *cent)
{
  ?CG_Skydive_UpdateClientEntity@@YAXW4LocalClientNum_t@@PEBUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_SkydiveGetCurrentSoundType
==============
*/

SkydiveSoundType __fastcall CG_SkydiveGetCurrentSoundType(const playerState_s *ps)
{
  return ?CG_SkydiveGetCurrentSoundType@@YA?AW4SkydiveSoundType@@PEBUplayerState_s@@@Z(ps);
}

/*
==============
CG_Skydive_GetViewmodelState
==============
*/

SkydiveViewmodelState __fastcall CG_Skydive_GetViewmodelState(const LocalClientNum_t localClientNum)
{
  return ?CG_Skydive_GetViewmodelState@@YA?AW4SkydiveViewmodelState@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Skydive_PostPlayerStateUpdate
==============
*/

void __fastcall CG_Skydive_PostPlayerStateUpdate(const LocalClientNum_t localClientNum)
{
  ?CG_Skydive_PostPlayerStateUpdate@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_SkydiveGetCurrentSoundType
==============
*/
__int64 CG_SkydiveGetCurrentSoundType(const playerState_s *ps)
{
  char v2; 
  __int64 result; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 145, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v2 = ps->skydivePlayerState.state[0];
  if ( ((v2 - 1) & 0xFB) == 0 )
    return 1i64;
  result = 0i64;
  if ( v2 == 3 )
    return 2i64;
  return result;
}

/*
==============
CG_SkydiveUseCanopySounds
==============
*/
bool CG_SkydiveUseCanopySounds(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 166, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return ps->skydivePlayerState.state[0] == 3;
}

/*
==============
CG_Skydive_FovUpdate
==============
*/
void CG_Skydive_FovUpdate(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  int pm_type; 
  char v4; 
  bool v5; 
  bool v6; 
  char v7; 
  int parachuteCutTime; 
  const dvar_t *v9; 
  int v10; 
  const dvar_t *v11; 
  float v12; 
  int v13; 
  bool fovChangeIsForParachuteCut; 
  float value; 
  bool v16; 
  const dvar_t *v17; 
  const dvar_t *v18; 
  float FovDeltaCurrent; 
  const dvar_t *v20; 
  const char *v21; 
  const dvar_t *v22; 
  float v23; 
  const dvar_t *v24; 
  const dvar_t *v26; 
  const char *v27; 
  const dvar_t *v29; 
  float v30; 
  double v31; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 415, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  pm_type = LocalClientGlobals->predictedPlayerState.pm_type;
  v4 = LocalClientGlobals->predictedPlayerState.skydivePlayerState.state[0];
  v5 = v4 && v4 != 6;
  v6 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.pm_flags, ACTIVE, 6u);
  if ( pm_type )
    goto LABEL_14;
  if ( v5 )
  {
    LocalClientGlobals->skydiveClientState.stillInAirAfterSkydiving = 1;
    goto LABEL_15;
  }
  if ( LocalClientGlobals->predictedPlayerState.pm_type == 3 || !BG_IsInAir(&LocalClientGlobals->predictedPlayerState, 0) || v6 )
LABEL_14:
    LocalClientGlobals->skydiveClientState.stillInAirAfterSkydiving = 0;
LABEL_15:
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 375, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( (unsigned __int8)(LocalClientGlobals->predictedPlayerState.skydivePlayerState.state[0] - 2) <= 1u )
  {
    v7 = 1;
  }
  else
  {
    v7 = 0;
    if ( LocalClientGlobals->skydiveClientState.wasUsingParachute )
    {
      if ( LocalClientGlobals->skydiveClientState.stillInAirAfterSkydiving )
      {
        LocalClientGlobals->skydiveClientState.parachuteCutTime = LocalClientGlobals->time;
LABEL_26:
        LocalClientGlobals->skydiveClientState.parachuteCutStateIsActive = 0;
        goto LABEL_27;
      }
LABEL_25:
      LocalClientGlobals->skydiveClientState.parachuteCutTime = 0;
      goto LABEL_26;
    }
  }
  if ( !LocalClientGlobals->skydiveClientState.stillInAirAfterSkydiving || v7 )
    goto LABEL_25;
LABEL_27:
  parachuteCutTime = LocalClientGlobals->skydiveClientState.parachuteCutTime;
  if ( parachuteCutTime > 0 )
  {
    v9 = DVARINT_cg_skydive_parachute_cut_look_down_grace_period;
    v10 = LocalClientGlobals->time - parachuteCutTime;
    if ( !DVARINT_cg_skydive_parachute_cut_look_down_grace_period && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_skydive_parachute_cut_look_down_grace_period") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( v10 <= v9->current.integer )
    {
      v11 = DVARFLT_cg_skydive_parachute_cut_pitch_threshold;
      v12 = LocalClientGlobals->predictedPlayerState.viewangles.v[0];
      if ( !DVARFLT_cg_skydive_parachute_cut_pitch_threshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_skydive_parachute_cut_pitch_threshold") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v11);
      if ( v12 > v11->current.value )
        LocalClientGlobals->skydiveClientState.parachuteCutStateIsActive = 1;
    }
  }
  LocalClientGlobals->skydiveClientState.wasUsingParachute = v7;
  v13 = LocalClientGlobals->predictedPlayerState.pm_type;
  fovChangeIsForParachuteCut = LocalClientGlobals->skydiveClientState.fovChangeIsForParachuteCut;
  value = 0.0;
  v16 = v13 == 5 && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(&LocalClientGlobals->predictedPlayerState.otherFlags, (POtherFlagsMP)33);
  if ( v13 != 3 && !v16 && LocalClientGlobals->predictedPlayerState.weapCommon.fWeaponPosFrac <= 0.0 )
  {
    if ( CG_Skydive_IsSuperDiveActive(localClientNum) )
    {
      LocalClientGlobals->skydiveClientState.fovChangeIsForParachuteCut = 0;
      v17 = DVARFLT_cg_skydive_super_dive_fov_delta;
      if ( !DVARFLT_cg_skydive_super_dive_fov_delta && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_skydive_super_dive_fov_delta") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v17);
      value = v17->current.value;
      if ( !LocalClientGlobals->skydiveClientState.parachuteCutStateIsActive )
        LocalClientGlobals->skydiveClientState.parachuteCutStateIsActive = 1;
    }
    else if ( LocalClientGlobals->skydiveClientState.parachuteCutStateIsActive )
    {
      LocalClientGlobals->skydiveClientState.fovChangeIsForParachuteCut = 1;
      v18 = DVARFLT_cg_skydive_parachute_cut_fov_delta;
      if ( !DVARFLT_cg_skydive_parachute_cut_fov_delta && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_skydive_parachute_cut_fov_delta") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v18);
      value = v18->current.value;
    }
  }
  if ( value != LocalClientGlobals->skydiveClientState.fovChangeGoal )
  {
    FovDeltaCurrent = CG_Skydive_GetFovDeltaCurrent(LocalClientGlobals, &LocalClientGlobals->skydiveClientState);
    LocalClientGlobals->skydiveClientState.fovChangeStart = FovDeltaCurrent;
    LocalClientGlobals->skydiveClientState.fovChangeGoal = value;
    if ( value <= FovDeltaCurrent )
    {
      if ( !LocalClientGlobals->skydiveClientState.stillInAirAfterSkydiving )
      {
        v22 = DVARINT_cg_skydive_land_fov_blend_out_time;
        if ( !DVARINT_cg_skydive_land_fov_blend_out_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_skydive_land_fov_blend_out_time") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v22);
        LocalClientGlobals->skydiveClientState.fovChangeLerpTime = v22->current.integer;
      }
      if ( fovChangeIsForParachuteCut )
      {
        v20 = DVARINT_cg_skydive_parachute_cut_fov_blend_out_time;
        if ( DVARINT_cg_skydive_parachute_cut_fov_blend_out_time )
          goto LABEL_74;
        v21 = "cg_skydive_parachute_cut_fov_blend_out_time";
      }
      else
      {
        v20 = DVARINT_cg_skydive_super_dive_fov_blend_out_time;
        if ( DVARINT_cg_skydive_super_dive_fov_blend_out_time )
          goto LABEL_74;
        v21 = "cg_skydive_super_dive_fov_blend_out_time";
      }
    }
    else
    {
      if ( LocalClientGlobals->skydiveClientState.fovChangeIsForParachuteCut )
      {
        v20 = DVARINT_cg_skydive_parachute_cut_fov_blend_in_time;
        if ( !DVARINT_cg_skydive_parachute_cut_fov_blend_in_time )
        {
          v21 = "cg_skydive_parachute_cut_fov_blend_in_time";
          goto LABEL_72;
        }
LABEL_74:
        Dvar_CheckFrontendServerThread(v20);
        LocalClientGlobals->skydiveClientState.fovChangeLerpTime = v20->current.integer;
        LocalClientGlobals->skydiveClientState.fovChangeTime = LocalClientGlobals->time;
        goto LABEL_75;
      }
      v20 = DVARINT_cg_skydive_super_dive_fov_blend_in_time;
      if ( DVARINT_cg_skydive_super_dive_fov_blend_in_time )
        goto LABEL_74;
      v21 = "cg_skydive_super_dive_fov_blend_in_time";
    }
LABEL_72:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v21) )
      __debugbreak();
    goto LABEL_74;
  }
LABEL_75:
  v23 = CG_Skydive_GetFovDeltaCurrent(LocalClientGlobals, &LocalClientGlobals->skydiveClientState);
  LocalClientGlobals->skydiveClientState.fovChangeThisFrame = v23;
  v24 = DVARFLT_cg_skydive_super_dive_fov_delta;
  if ( !DVARFLT_cg_skydive_super_dive_fov_delta && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_skydive_super_dive_fov_delta") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v24);
  *(float *)&_XMM6 = v23 / v24->current.value;
  if ( !LocalClientGlobals->predictedPlayerState.pm_type )
  {
    if ( LocalClientGlobals->predictedPlayerState.skydivePlayerState.state[0] == 1 )
    {
      v26 = DVARFLT_cg_skydive_rmb_freefall_weight_min;
      if ( !DVARFLT_cg_skydive_rmb_freefall_weight_min )
      {
        v27 = "cg_skydive_rmb_freefall_weight_min";
        goto LABEL_85;
      }
      goto LABEL_87;
    }
    if ( LocalClientGlobals->skydiveClientState.parachuteCutTime > 0 )
    {
      v26 = DVARFLT_cg_skydive_rmb_parachute_cut_weight_min;
      if ( !DVARFLT_cg_skydive_rmb_parachute_cut_weight_min )
      {
        v27 = "cg_skydive_rmb_parachute_cut_weight_min";
LABEL_85:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v27) )
          __debugbreak();
      }
LABEL_87:
      Dvar_CheckFrontendServerThread(v26);
      _XMM0 = v26->current.unsignedInt;
      __asm { vmaxss  xmm6, xmm0, xmm6 }
    }
  }
  v29 = DVARFLT_cg_skydive_rmb_track_speed;
  v30 = (float)LocalClientGlobals->frametime * 0.001;
  if ( !DVARFLT_cg_skydive_rmb_track_speed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_skydive_rmb_track_speed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v29);
  v31 = DiffTrack(*(float *)&_XMM6, LocalClientGlobals->skydiveClientState.rmbWeight, v29->current.value, v30);
  LocalClientGlobals->skydiveClientState.rmbWeight = *(float *)&v31;
}

/*
==============
CG_Skydive_GetCameraShakeVelocity
==============
*/
float CG_Skydive_GetCameraShakeVelocity(const LocalClientNum_t localClientNum, const playerState_s *ps)
{
  cg_t *LocalClientGlobals; 
  int v5; 
  const dvar_t *v6; 
  float v7; 
  float v8; 
  float v9; 
  const dvar_t *v10; 
  float v11; 
  float v12; 
  double v13; 
  bool v14; 
  bool v15; 
  const dvar_t *v16; 
  float v17; 
  float value; 
  const dvar_t *v19; 
  float speedForCameraShake; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 578, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 579, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 582, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  v5 = LocalClientGlobals->time - LocalClientGlobals->skydiveClientState.parachuteCutTime;
  v6 = DVARINT_cg_skydive_parachute_cut_cam_shake_min_time;
  if ( !DVARINT_cg_skydive_parachute_cut_cam_shake_min_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_skydive_parachute_cut_cam_shake_min_time") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v5 <= v6->current.integer || ps->skydivePlayerState.state[0] == 5 )
  {
    v16 = DVARFLT_cg_skydive_parachute_cut_cam_shake_blend_in_speed;
    v17 = (float)LocalClientGlobals->frametime * 0.001;
    if ( !DVARFLT_cg_skydive_parachute_cut_cam_shake_blend_in_speed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_skydive_parachute_cut_cam_shake_blend_in_speed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    value = v16->current.value;
    v19 = DVARFLT_cg_skydive_parachute_cut_cam_shake_fake_speed;
    speedForCameraShake = LocalClientGlobals->skydiveClientState.speedForCameraShake;
    if ( !DVARFLT_cg_skydive_parachute_cut_cam_shake_fake_speed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_skydive_parachute_cut_cam_shake_fake_speed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v19);
    v13 = DiffTrack(v19->current.value, speedForCameraShake, value, v17);
    LocalClientGlobals->skydiveClientState.speedForCameraShake = *(float *)&v13;
    LocalClientGlobals->skydiveClientState.waitForBlendIntoNormalVelocityForCameraShake = 1;
  }
  else
  {
    v7 = ps->velocity.v[0];
    v8 = ps->velocity.v[1];
    v9 = ps->velocity.v[2];
    v10 = DVARFLT_cg_skydive_parachute_cut_cam_shake_blend_out_speed;
    v11 = (float)LocalClientGlobals->frametime * 0.001;
    v12 = fsqrt((float)((float)(v7 * v7) + (float)(v8 * v8)) + (float)(v9 * v9));
    if ( !DVARFLT_cg_skydive_parachute_cut_cam_shake_blend_out_speed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_skydive_parachute_cut_cam_shake_blend_out_speed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    v13 = DiffTrack(v12, LocalClientGlobals->skydiveClientState.speedForCameraShake, v10->current.value, v11);
    v14 = !LocalClientGlobals->skydiveClientState.waitForBlendIntoNormalVelocityForCameraShake;
    LocalClientGlobals->skydiveClientState.speedForCameraShake = *(float *)&v13;
    if ( !v14 )
    {
      v15 = COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v13 - v12) & _xmm) < VEL_CATCH_UP_THRESHOLD;
      *(float *)&v13 = LocalClientGlobals->skydiveClientState.speedForCameraShake;
      if ( v15 )
        LocalClientGlobals->skydiveClientState.waitForBlendIntoNormalVelocityForCameraShake = 0;
    }
  }
  return *(float *)&v13;
}

/*
==============
CG_Skydive_GetCinematicMotionDef
==============
*/
CinematicMotionDef *CG_Skydive_GetCinematicMotionDef(const LocalClientNum_t localClientNum, const playerState_s *ps)
{
  const SuitDef *SuitDef; 
  char v5; 
  cg_t *LocalClientGlobals; 
  __int64 v8; 
  __int64 v9; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 610, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 611, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  SuitDef = BG_GetSuitDef(ps->suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 614, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  if ( (unsigned __int8)(ps->skydivePlayerState.state[0] - 2) <= 1u )
    return SuitDef->skydive_canopyCinematicMotion;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    LODWORD(v9) = 2;
    LODWORD(v8) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 561, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  v5 = ps->skydivePlayerState.state[0];
  if ( v5 && v5 != 6 )
    return SuitDef->skydive_freefallCinematicMotion;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 570, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( LocalClientGlobals->skydiveClientState.stillInAirAfterSkydiving || LocalClientGlobals->skydiveClientState.waitForBlendIntoNormalVelocityForCameraShake )
    return SuitDef->skydive_freefallCinematicMotion;
  else
    return 0i64;
}

/*
==============
CG_Skydive_GetFovDelta
==============
*/
float CG_Skydive_GetFovDelta(const LocalClientNum_t localClientNum)
{
  float result; 
  int v4; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 531, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  LODWORD(result) = LODWORD(CG_GetLocalClientGlobals(localClientNum)->skydiveClientState.fovChangeThisFrame) ^ _xmm;
  return result;
}

/*
==============
CG_Skydive_GetFovDeltaCurrent
==============
*/
float CG_Skydive_GetFovDeltaCurrent(const cg_t *cgameGlob, const SkydiveClientState *skydiveClientState)
{
  int fovChangeLerpTime; 
  __int128 v5; 
  float v8; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 367, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  fovChangeLerpTime = skydiveClientState->fovChangeLerpTime;
  if ( fovChangeLerpTime <= 0 )
  {
    *(float *)&_XMM3 = FLOAT_1_0;
  }
  else
  {
    v5 = 0i64;
    *(float *)&v5 = (float)(cgameGlob->time - skydiveClientState->fovChangeTime) / (float)fovChangeLerpTime;
    _XMM2 = v5;
    __asm { vminss  xmm3, xmm2, xmm7 }
  }
  v8 = sinf_0((float)(*(float *)&_XMM3 - 0.5) * 3.1415927);
  return (float)((float)(1.0 - (float)((float)(v8 + 1.0) * 0.5)) * skydiveClientState->fovChangeStart) + (float)((float)((float)(v8 + 1.0) * 0.5) * skydiveClientState->fovChangeGoal);
}

/*
==============
CG_Skydive_GetTurnRates
==============
*/
void CG_Skydive_GetTurnRates(const LocalClientNum_t localClientNum, float *outPitchRate, float *outYawRate)
{
  cg_t *LocalClientGlobals; 
  const SuitDef *SuitDef; 
  float skydive_canopyPitchSpeed; 
  float skydive_canopyYawSpeed; 
  __int64 v10; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 22, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !outPitchRate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 23, ASSERT_TYPE_ASSERT, "(outPitchRate)", (const char *)&queryFormat, "outPitchRate") )
    __debugbreak();
  if ( !outYawRate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 24, ASSERT_TYPE_ASSERT, "(outYawRate)", (const char *)&queryFormat, "outYawRate") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 27, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !BG_Skydive_IsSkydiving(&LocalClientGlobals->predictedPlayerState) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 31, ASSERT_TYPE_ASSERT, "(BG_Skydive_IsSkydiving( ps ))", (const char *)&queryFormat, "BG_Skydive_IsSkydiving( ps )") )
    __debugbreak();
  SuitDef = BG_GetSuitDef(LocalClientGlobals->predictedPlayerState.suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 34, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  switch ( LocalClientGlobals->predictedPlayerState.skydivePlayerState.state[0] )
  {
    case 1:
    case 5:
    case 6:
      goto $LN22_10;
    case 2:
    case 3:
    case 4:
      skydive_canopyPitchSpeed = SuitDef->skydive_canopyPitchSpeed;
      skydive_canopyYawSpeed = SuitDef->skydive_canopyYawSpeed;
      break;
    default:
      LODWORD(v10) = (unsigned __int8)LocalClientGlobals->predictedPlayerState.skydivePlayerState.state[0];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 57, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled skydive state %d while retrieving suit field values.", v10) )
        __debugbreak();
$LN22_10:
      skydive_canopyYawSpeed = SuitDef->skydive_freefallYawSpeed;
      skydive_canopyPitchSpeed = SuitDef->skydive_freefallPitchSpeed;
      break;
  }
  *outPitchRate = skydive_canopyPitchSpeed;
  *outYawRate = skydive_canopyYawSpeed;
}

/*
==============
CG_Skydive_GetViewmodelState
==============
*/
__int64 CG_Skydive_GetViewmodelState(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  int weaponState; 
  const dvar_t *v4; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 316, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 319, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !BG_Skydive_IsSkydiving(&LocalClientGlobals->predictedPlayerState) )
    return 0i64;
  weaponState = LocalClientGlobals->predictedPlayerState.weapState[0].weaponState;
  if ( weaponState == 63 )
    return 0i64;
  v4 = DVARBOOL_killswitch_skydive_loadout_change_fix_enabled;
  if ( !DVARBOOL_killswitch_skydive_loadout_change_fix_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_skydive_loadout_change_fix_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled && !weaponState )
    return 0i64;
  else
    return (unsigned int)(LocalClientGlobals->predictedPlayerState.skydivePlayerState.state[0] != 1) + 1;
}

/*
==============
CG_Skydive_IsActiveForShake
==============
*/
bool CG_Skydive_IsActiveForShake(const LocalClientNum_t localClientNum, const playerState_s *ps)
{
  char v4; 
  cg_t *LocalClientGlobals; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 561, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 562, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v4 = ps->skydivePlayerState.state[0];
  if ( v4 && v4 != 6 )
    return 1;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 570, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  return LocalClientGlobals->skydiveClientState.stillInAirAfterSkydiving || LocalClientGlobals->skydiveClientState.waitForBlendIntoNormalVelocityForCameraShake;
}

/*
==============
CG_Skydive_IsSuperDiveActive
==============
*/
bool CG_Skydive_IsSuperDiveActive(const LocalClientNum_t localClientNum)
{
  __int64 v2; 
  cg_t *LocalClientGlobals; 
  const playerState_s *p_predictedPlayerState; 
  const ClActiveClient *Client; 
  int CmdNumber; 
  const ClActiveClient *v7; 
  int v8; 
  int v9; 
  bool result; 
  __int64 v11; 
  char *v12; 
  char *fmt; 
  char v14[272]; 
  int v15; 

  v2 = 2i64;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 541, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 544, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 547, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  Client = ClActiveClient::GetClient((const LocalClientNum_t)LocalClientGlobals->localClientNum);
  CmdNumber = ClActiveClient_GetCmdNumber(Client);
  v7 = ClActiveClient::GetClient((const LocalClientNum_t)LocalClientGlobals->localClientNum);
  v8 = ClActiveClient_GetCmdNumber(v7);
  v9 = v8;
  v15 = v8;
  if ( CmdNumber > v8 )
  {
    LODWORD(fmt) = v8;
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CEE128, 754i64, (unsigned int)CmdNumber, fmt);
  }
  if ( CmdNumber > v9 - 128 && CmdNumber > 0 )
  {
    v11 = (__int64)&v7->cmds[CmdNumber & 0x7F];
    memset(&v15, 0, sizeof(v15));
    if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 385, ASSERT_TYPE_ASSERT, "(requestedCmd)", (const char *)&queryFormat, "requestedCmd") )
      __debugbreak();
    v12 = v14;
    do
    {
      *(__m256i *)v12 = *(__m256i *)v11;
      *((__m256i *)v12 + 1) = *(__m256i *)(v11 + 32);
      *((__m256i *)v12 + 2) = *(__m256i *)(v11 + 64);
      *((_OWORD *)v12 + 6) = *(_OWORD *)(v11 + 96);
      v12 += 128;
      *((_OWORD *)v12 - 1) = *(_OWORD *)(v11 + 112);
      v11 += 128i64;
      --v2;
    }
    while ( v2 );
    *(_QWORD *)v12 = *(_QWORD *)v11;
    return BG_Skydive_IsSuperDiveActive(p_predictedPlayerState, v14[156], v14[157]);
  }
  else
  {
    result = 0;
    memset(&v15, 0, sizeof(v15));
  }
  return result;
}

/*
==============
CG_Skydive_PlaySounds
==============
*/
void CG_Skydive_PlaySounds(cg_t *cgameGlob, const int entitynum, const vec3_t *origin, SkydivePhaseSoundState *phaseSoundState, SndAliasList *ambientSoundAlias, const float ambientMinVolume, const float ambientMaxVolume, const float ambientMinPitch, const float ambientMaxPitch, const float ambientMinGroundSpeed, const float ambientMaxGroundSpeed, const float ambientMinFallSpeed, const float ambientMaxFallSpeed, SndAliasList *highSpeedSoundAlias, const float highSpeedMinVolume, const float highSpeedMaxVolume, const float highSpeedMinPitch, const float highSpeedMaxPitch, const float highSpeedMinGroundSpeed, const float highSpeedMaxGroundSpeed, const float highSpeedMinFallSpeed, const float highSpeedMaxFallSpeed, const float ambientGroundSpeedWeight, const float highSpeedGroundSpeedWeight, const float groundSpeed, const float fallSpeed, bool *outStopAmbientSound, bool *outStopHighSpeedSound)
{
  CgSoundSystem *SoundSystem; 
  double v32; 
  double v33; 
  float v34; 
  double v35; 
  double v36; 
  float v37; 
  float v38; 
  float v39; 
  double v40; 
  double v41; 
  float v42; 
  double v43; 
  double v44; 
  float v45; 
  float v46; 
  float v47; 

  *outStopAmbientSound = 1;
  *outStopHighSpeedSound = 1;
  *(_QWORD *)&phaseSoundState->ambientVolume = 0i64;
  *(_QWORD *)&phaseSoundState->highSpeedVolume = 0i64;
  SoundSystem = CgSoundSystem::GetSoundSystem((const LocalClientNum_t)cgameGlob->localClientNum);
  if ( ambientSoundAlias )
  {
    *outStopAmbientSound = 0;
    v32 = I_fclamp(groundSpeed, ambientMinGroundSpeed, ambientMaxGroundSpeed);
    v33 = I_fdistnormalized(ambientMinGroundSpeed, ambientMaxGroundSpeed, *(float *)&v32);
    v34 = *(float *)&v33;
    v35 = I_fclamp(fallSpeed, ambientMinFallSpeed, ambientMaxFallSpeed);
    v36 = I_fdistnormalized(ambientMinFallSpeed, ambientMaxFallSpeed, *(float *)&v35);
    v37 = (float)(*(float *)&v36 * (float)(1.0 - ambientGroundSpeedWeight)) + (float)(v34 * ambientGroundSpeedWeight);
    v38 = (float)(1.0 - v37) * ambientMinPitch;
    v39 = (float)((float)(1.0 - v37) * ambientMinVolume) + (float)(v37 * ambientMaxVolume);
    phaseSoundState->ambientPitch = v38 + (float)(v37 * ambientMaxPitch);
    phaseSoundState->ambientVolume = v39;
    ((void (__fastcall *)(CgSoundSystem *, _QWORD, const vec3_t *, SndAliasList *, _DWORD, _DWORD, _DWORD))SoundSystem->PlaySoundAliasScaledAsync)(SoundSystem, (unsigned int)entitynum, origin, ambientSoundAlias, LODWORD(v39), v38 + (float)(v37 * ambientMaxPitch), 0);
    phaseSoundState->stoppedAmbientSound = 0;
  }
  if ( highSpeedSoundAlias )
  {
    v40 = I_fclamp(groundSpeed, highSpeedMinGroundSpeed, highSpeedMaxGroundSpeed);
    v41 = I_fdistnormalized(highSpeedMinGroundSpeed, highSpeedMaxGroundSpeed, *(float *)&v40);
    v42 = *(float *)&v41;
    v43 = I_fclamp(fallSpeed, highSpeedMinFallSpeed, highSpeedMaxFallSpeed);
    v44 = I_fdistnormalized(highSpeedMinFallSpeed, highSpeedMaxFallSpeed, *(float *)&v43);
    v45 = (float)(*(float *)&v44 * (float)(1.0 - highSpeedGroundSpeedWeight)) + (float)(v42 * highSpeedGroundSpeedWeight);
    if ( v45 > 0.0 )
    {
      *outStopHighSpeedSound = 0;
      v46 = (float)(1.0 - v45) * highSpeedMinPitch;
      v47 = (float)((float)(1.0 - v45) * highSpeedMinVolume) + (float)(v45 * highSpeedMaxVolume);
      phaseSoundState->highSpeedPitch = v46 + (float)(v45 * highSpeedMaxPitch);
      phaseSoundState->highSpeedVolume = v47;
      ((void (__fastcall *)(CgSoundSystem *, _QWORD, const vec3_t *, SndAliasList *, _DWORD, _DWORD, _DWORD))SoundSystem->PlaySoundAliasScaledAsync)(SoundSystem, (unsigned int)entitynum, origin, highSpeedSoundAlias, LODWORD(v47), v46 + (float)(v45 * highSpeedMaxPitch), 0);
      phaseSoundState->stoppedHighSpeedSound = 0;
    }
  }
}

/*
==============
CG_Skydive_PostPlayerStateUpdate
==============
*/

void __fastcall CG_Skydive_PostPlayerStateUpdate(const LocalClientNum_t localClientNum)
{
  CG_Skydive_FovUpdate(localClientNum);
}

/*
==============
CG_Skydive_RadialMotionBlurEnabled
==============
*/
char CG_Skydive_RadialMotionBlurEnabled(LocalClientNum_t localClientNum, const playerState_s *ps, float *minStrength, float *maxStrength, float *minRadius, float *maxRadius)
{
  cg_t *LocalClientGlobals; 
  float rmbWeight; 
  char result; 
  const dvar_t *v12; 
  const dvar_t *v13; 
  const dvar_t *v14; 
  const dvar_t *v15; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 636, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !minStrength && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 637, ASSERT_TYPE_ASSERT, "(minStrength)", (const char *)&queryFormat, "minStrength") )
    __debugbreak();
  if ( !maxStrength && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 638, ASSERT_TYPE_ASSERT, "(maxStrength)", (const char *)&queryFormat, "maxStrength") )
    __debugbreak();
  if ( !minRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 639, ASSERT_TYPE_ASSERT, "(minRadius)", (const char *)&queryFormat, "minRadius") )
    __debugbreak();
  if ( !maxRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 640, ASSERT_TYPE_ASSERT, "(maxRadius)", (const char *)&queryFormat, "maxRadius") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 643, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  rmbWeight = LocalClientGlobals->skydiveClientState.rmbWeight;
  if ( rmbWeight <= 0.000001 )
    return 0;
  v12 = DVARFLT_cg_skydive_rmb_strength_min;
  if ( !DVARFLT_cg_skydive_rmb_strength_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_skydive_rmb_strength_min") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  *minStrength = rmbWeight * v12->current.value;
  v13 = DVARFLT_cg_skydive_rmb_strength_max;
  if ( !DVARFLT_cg_skydive_rmb_strength_max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_skydive_rmb_strength_max") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  *maxStrength = rmbWeight * v13->current.value;
  v14 = DVARFLT_cg_skydive_rmb_radius_min;
  if ( !DVARFLT_cg_skydive_rmb_radius_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_skydive_rmb_radius_min") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  *minRadius = rmbWeight * v14->current.value;
  v15 = DVARFLT_cg_skydive_rmb_radius_max;
  if ( !DVARFLT_cg_skydive_rmb_radius_max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_skydive_rmb_radius_max") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  result = 9;
  *maxRadius = rmbWeight * v15->current.value;
  return result;
}

/*
==============
CG_Skydive_SoundUpdate
==============
*/
void CG_Skydive_SoundUpdate(cg_t *cgameGlob, const playerState_s *ps)
{
  const SuitDef *SuitDef; 
  char v5; 
  char v6; 
  char v7; 
  char v8; 
  const char *name; 
  float v10; 
  float v11; 
  float v12; 
  SndAliasList *highSpeedSoundAlias; 
  float skydive_canopyAmbientSoundMaxFallSpeed; 
  float skydive_canopyAmbientSoundMinFallSpeed; 
  float skydive_canopyAmbientSoundMaxGroundSpeed; 
  float skydive_canopyAmbientSoundMinGroundSpeed; 
  float skydive_canopyAmbientSoundMaxPitch; 
  float skydive_canopyAmbientSoundMinPitch; 
  float skydive_canopyAmbientSoundMaxVolume; 
  SndAliasList *Alias; 
  const char *v22; 
  float v23; 
  float v24; 
  float v25; 
  SndAliasList *v26; 
  float skydive_freefallAmbientSoundMaxFallSpeed; 
  float skydive_freefallAmbientSoundMinFallSpeed; 
  float skydive_freefallAmbientSoundMaxGroundSpeed; 
  float skydive_freefallAmbientSoundMinGroundSpeed; 
  float skydive_freefallAmbientSoundMaxPitch; 
  float skydive_freefallAmbientSoundMinPitch; 
  float skydive_freefallAmbientSoundMaxVolume; 
  SndAliasList *v34; 
  unsigned __int64 SndEntHandle; 
  unsigned __int64 v36; 
  float skydive_canopyHighSpeedSoundMaxFallSpeed; 
  float skydive_freefallHighSpeedSoundMinVolume; 
  float skydive_canopyHighSpeedSoundMinFallSpeed; 
  float skydive_freefallHighSpeedSoundMaxVolume; 
  float skydive_canopyHighSpeedSoundMaxGroundSpeed; 
  float skydive_freefallHighSpeedSoundMinPitch; 
  float skydive_canopyHighSpeedSoundMinGroundSpeed; 
  float skydive_freefallHighSpeedSoundMaxPitch; 
  float skydive_canopyHighSpeedSoundMaxPitch; 
  float skydive_freefallHighSpeedSoundMinGroundSpeed; 
  float skydive_canopyHighSpeedSoundMinPitch; 
  float skydive_freefallHighSpeedSoundMaxGroundSpeed; 
  float skydive_canopyHighSpeedSoundMaxVolume; 
  float skydive_freefallHighSpeedSoundMinFallSpeed; 
  float skydive_canopyHighSpeedSoundMinVolume; 
  float skydive_freefallHighSpeedSoundMaxFallSpeed; 
  float ambientMinVolume; 
  float skydive_freefallAmbientSoundGroundSpeedWeight; 
  float skydive_freefallAmbientSoundMinVolume; 
  float outStopAmbientSound; 
  float skydive_canopyHighSpeedSoundGroundSpeedWeight; 
  float skydive_canopyAmbientSoundGroundSpeedWeight; 
  bool outStopHighSpeedSound; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 176, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 177, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  SuitDef = BG_GetSuitDef(ps->suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 180, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  v5 = ps->skydivePlayerState.state[0];
  v6 = 1;
  v7 = 1;
  v8 = 1;
  LOBYTE(skydive_canopyHighSpeedSoundGroundSpeedWeight) = 1;
  LOBYTE(skydive_canopyAmbientSoundGroundSpeedWeight) = 1;
  LOBYTE(outStopAmbientSound) = 1;
  outStopHighSpeedSound = 1;
  if ( ((v5 - 1) & 0xFB) != 0 )
  {
    if ( v5 == 3 )
    {
      name = SuitDef->skydive_canopyHighSpeedSound.name;
      v10 = ps->velocity.v[1];
      v11 = ps->velocity.v[0];
      v12 = ps->velocity.v[2];
      skydive_canopyHighSpeedSoundGroundSpeedWeight = SuitDef->skydive_canopyHighSpeedSoundGroundSpeedWeight;
      skydive_canopyAmbientSoundGroundSpeedWeight = SuitDef->skydive_canopyAmbientSoundGroundSpeedWeight;
      skydive_canopyHighSpeedSoundMaxFallSpeed = SuitDef->skydive_canopyHighSpeedSoundMaxFallSpeed;
      skydive_canopyHighSpeedSoundMinFallSpeed = SuitDef->skydive_canopyHighSpeedSoundMinFallSpeed;
      skydive_canopyHighSpeedSoundMaxGroundSpeed = SuitDef->skydive_canopyHighSpeedSoundMaxGroundSpeed;
      skydive_canopyHighSpeedSoundMinGroundSpeed = SuitDef->skydive_canopyHighSpeedSoundMinGroundSpeed;
      skydive_canopyHighSpeedSoundMaxPitch = SuitDef->skydive_canopyHighSpeedSoundMaxPitch;
      skydive_canopyHighSpeedSoundMinPitch = SuitDef->skydive_canopyHighSpeedSoundMinPitch;
      skydive_canopyHighSpeedSoundMaxVolume = SuitDef->skydive_canopyHighSpeedSoundMaxVolume;
      skydive_canopyHighSpeedSoundMinVolume = SuitDef->skydive_canopyHighSpeedSoundMinVolume;
      highSpeedSoundAlias = SND_FindAlias(name);
      skydive_canopyAmbientSoundMaxFallSpeed = SuitDef->skydive_canopyAmbientSoundMaxFallSpeed;
      skydive_canopyAmbientSoundMinFallSpeed = SuitDef->skydive_canopyAmbientSoundMinFallSpeed;
      skydive_canopyAmbientSoundMaxGroundSpeed = SuitDef->skydive_canopyAmbientSoundMaxGroundSpeed;
      skydive_canopyAmbientSoundMinGroundSpeed = SuitDef->skydive_canopyAmbientSoundMinGroundSpeed;
      skydive_canopyAmbientSoundMaxPitch = SuitDef->skydive_canopyAmbientSoundMaxPitch;
      skydive_canopyAmbientSoundMinPitch = SuitDef->skydive_canopyAmbientSoundMinPitch;
      skydive_canopyAmbientSoundMaxVolume = SuitDef->skydive_canopyAmbientSoundMaxVolume;
      ambientMinVolume = SuitDef->skydive_canopyAmbientSoundMinVolume;
      Alias = SND_FindAlias(SuitDef->skydive_canopyAmbientSound.name);
      CG_Skydive_PlaySounds(cgameGlob, ps->clientNum, &ps->origin, &cgameGlob->skydiveClientState.soundState.canopy, Alias, ambientMinVolume, skydive_canopyAmbientSoundMaxVolume, skydive_canopyAmbientSoundMinPitch, skydive_canopyAmbientSoundMaxPitch, skydive_canopyAmbientSoundMinGroundSpeed, skydive_canopyAmbientSoundMaxGroundSpeed, skydive_canopyAmbientSoundMinFallSpeed, skydive_canopyAmbientSoundMaxFallSpeed, highSpeedSoundAlias, skydive_canopyHighSpeedSoundMinVolume, skydive_canopyHighSpeedSoundMaxVolume, skydive_canopyHighSpeedSoundMinPitch, skydive_canopyHighSpeedSoundMaxPitch, skydive_canopyHighSpeedSoundMinGroundSpeed, skydive_canopyHighSpeedSoundMaxGroundSpeed, skydive_canopyHighSpeedSoundMinFallSpeed, skydive_canopyHighSpeedSoundMaxFallSpeed, skydive_canopyAmbientSoundGroundSpeedWeight, skydive_canopyHighSpeedSoundGroundSpeedWeight, fsqrt((float)(v11 * v11) + (float)(v10 * v10)) * 0.0254, COERCE_FLOAT(LODWORD(v12) & _xmm) * 0.0254, (bool *)&outStopAmbientSound, &outStopHighSpeedSound);
      v8 = LOBYTE(outStopAmbientSound);
    }
  }
  else
  {
    v22 = SuitDef->skydive_freefallHighSpeedSound.name;
    v23 = ps->velocity.v[1];
    v24 = ps->velocity.v[0];
    v25 = ps->velocity.v[2];
    outStopAmbientSound = SuitDef->skydive_freefallHighSpeedSoundGroundSpeedWeight;
    skydive_freefallAmbientSoundGroundSpeedWeight = SuitDef->skydive_freefallAmbientSoundGroundSpeedWeight;
    skydive_freefallHighSpeedSoundMaxFallSpeed = SuitDef->skydive_freefallHighSpeedSoundMaxFallSpeed;
    skydive_freefallHighSpeedSoundMinFallSpeed = SuitDef->skydive_freefallHighSpeedSoundMinFallSpeed;
    skydive_freefallHighSpeedSoundMaxGroundSpeed = SuitDef->skydive_freefallHighSpeedSoundMaxGroundSpeed;
    skydive_freefallHighSpeedSoundMinGroundSpeed = SuitDef->skydive_freefallHighSpeedSoundMinGroundSpeed;
    skydive_freefallHighSpeedSoundMaxPitch = SuitDef->skydive_freefallHighSpeedSoundMaxPitch;
    skydive_freefallHighSpeedSoundMinPitch = SuitDef->skydive_freefallHighSpeedSoundMinPitch;
    skydive_freefallHighSpeedSoundMaxVolume = SuitDef->skydive_freefallHighSpeedSoundMaxVolume;
    skydive_freefallHighSpeedSoundMinVolume = SuitDef->skydive_freefallHighSpeedSoundMinVolume;
    v26 = SND_FindAlias(v22);
    skydive_freefallAmbientSoundMaxFallSpeed = SuitDef->skydive_freefallAmbientSoundMaxFallSpeed;
    skydive_freefallAmbientSoundMinFallSpeed = SuitDef->skydive_freefallAmbientSoundMinFallSpeed;
    skydive_freefallAmbientSoundMaxGroundSpeed = SuitDef->skydive_freefallAmbientSoundMaxGroundSpeed;
    skydive_freefallAmbientSoundMinGroundSpeed = SuitDef->skydive_freefallAmbientSoundMinGroundSpeed;
    skydive_freefallAmbientSoundMaxPitch = SuitDef->skydive_freefallAmbientSoundMaxPitch;
    skydive_freefallAmbientSoundMinPitch = SuitDef->skydive_freefallAmbientSoundMinPitch;
    skydive_freefallAmbientSoundMaxVolume = SuitDef->skydive_freefallAmbientSoundMaxVolume;
    skydive_freefallAmbientSoundMinVolume = SuitDef->skydive_freefallAmbientSoundMinVolume;
    v34 = SND_FindAlias(SuitDef->skydive_freefallAmbientSound.name);
    CG_Skydive_PlaySounds(cgameGlob, ps->clientNum, &ps->origin, &cgameGlob->skydiveClientState.soundState.freefall, v34, skydive_freefallAmbientSoundMinVolume, skydive_freefallAmbientSoundMaxVolume, skydive_freefallAmbientSoundMinPitch, skydive_freefallAmbientSoundMaxPitch, skydive_freefallAmbientSoundMinGroundSpeed, skydive_freefallAmbientSoundMaxGroundSpeed, skydive_freefallAmbientSoundMinFallSpeed, skydive_freefallAmbientSoundMaxFallSpeed, v26, skydive_freefallHighSpeedSoundMinVolume, skydive_freefallHighSpeedSoundMaxVolume, skydive_freefallHighSpeedSoundMinPitch, skydive_freefallHighSpeedSoundMaxPitch, skydive_freefallHighSpeedSoundMinGroundSpeed, skydive_freefallHighSpeedSoundMaxGroundSpeed, skydive_freefallHighSpeedSoundMinFallSpeed, skydive_freefallHighSpeedSoundMaxFallSpeed, skydive_freefallAmbientSoundGroundSpeedWeight, outStopAmbientSound, fsqrt((float)(v24 * v24) + (float)(v23 * v23)) * 0.0254, COERCE_FLOAT(LODWORD(v25) & _xmm) * 0.0254, (bool *)&skydive_canopyHighSpeedSoundGroundSpeedWeight, (bool *)&skydive_canopyAmbientSoundGroundSpeedWeight);
    v6 = LOBYTE(skydive_canopyHighSpeedSoundGroundSpeedWeight);
    v7 = LOBYTE(skydive_canopyAmbientSoundGroundSpeedWeight);
  }
  SndEntHandle = CG_GenerateSndEntHandle((const LocalClientNum_t)cgameGlob->localClientNum, ps->clientNum);
  v36 = SndEntHandle;
  if ( v6 && !cgameGlob->skydiveClientState.soundState.freefall.stoppedAmbientSound )
  {
    SND_StopSoundAliasOnEnt(SndEntHandle, SuitDef->skydive_freefallAmbientSound.name);
    cgameGlob->skydiveClientState.soundState.freefall.stoppedAmbientSound = 1;
  }
  if ( v7 && !cgameGlob->skydiveClientState.soundState.freefall.stoppedHighSpeedSound )
  {
    SND_StopSoundAliasOnEnt(v36, SuitDef->skydive_freefallHighSpeedSound.name);
    cgameGlob->skydiveClientState.soundState.freefall.stoppedHighSpeedSound = 1;
  }
  if ( v8 && !cgameGlob->skydiveClientState.soundState.canopy.stoppedAmbientSound )
  {
    SND_StopSoundAliasOnEnt(v36, SuitDef->skydive_canopyAmbientSound.name);
    cgameGlob->skydiveClientState.soundState.canopy.stoppedAmbientSound = 1;
  }
  if ( outStopHighSpeedSound && !cgameGlob->skydiveClientState.soundState.canopy.stoppedHighSpeedSound )
  {
    SND_StopSoundAliasOnEnt(v36, SuitDef->skydive_canopyHighSpeedSound.name);
    cgameGlob->skydiveClientState.soundState.canopy.stoppedHighSpeedSound = 1;
  }
}

/*
==============
CG_Skydive_Update
==============
*/
void CG_Skydive_Update(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  float v3; 
  float v4; 
  float outYawRate; 
  float outPitchRate; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 288, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 291, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  CG_Skydive_SoundUpdate(LocalClientGlobals, &LocalClientGlobals->predictedPlayerState);
  if ( BG_Skydive_IsSkydiving(&LocalClientGlobals->predictedPlayerState) && CL_Input_IsGamepadEnabled(localClientNum) )
  {
    CG_Skydive_GetTurnRates(localClientNum, &outPitchRate, &outYawRate);
    v3 = outYawRate;
    v4 = outPitchRate;
  }
  else
  {
    v3 = 0.0;
    v4 = 0.0;
  }
  CL_CapTurnRate(localClientNum, TURNRATECAPTYPE_SKYDIVE, v4, v3);
}

/*
==============
CG_Skydive_UpdateClientEntity
==============
*/
void CG_Skydive_UpdateClientEntity(LocalClientNum_t localClientNum, const centity_t *cent)
{
  __int64 v3; 
  entityState_t *p_nextState; 
  cg_t *LocalClientGlobals; 
  int number; 
  __int64 v7; 
  cg_t *v8; 
  const characterInfo_t *CharacterInfo; 
  unsigned __int8 skydiveAnimState; 
  int v11; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int128 v16; 
  __int64 clientNum; 
  characterInfo_t *v27; 
  team_t team; 
  team_t v29; 
  bool v30; 
  CgSoundSystem *SoundSystem; 
  SndAliasList *skydiveFreefallSoundThirdPersonEnemy; 
  SndAliasList *skydiveLandingSoundThirdPersonEnemy; 
  __int64 v34; 
  __int64 v35; 
  vec3_t origin; 

  v3 = localClientNum;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 672, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  p_nextState = &cent->nextState;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v3);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 676, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  number = p_nextState->number;
  if ( LocalClientGlobals == (cg_t *)-8i64 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_local.h", 128, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2296, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
  }
  if ( GameModeFlagValues::ms_mpValue == ACTIVE && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, ACTIVE, 0x22u) )
  {
    if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2308, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH_ADS) || !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, GameModeFlagValues::ms_mpValue, 0x29u) )
    {
      if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2275, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, GameModeFlagValues::ms_mpValue, 0x21u) )
        goto LABEL_85;
    }
  }
  if ( number != LocalClientGlobals->predictedPlayerState.clientNum )
  {
LABEL_85:
    if ( !(_BYTE)CgStatic::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 110, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the client game statics for localClientNum %d but the ype is not known\n", "ms_allocatedType != GameModeType::NONE", v3) )
      __debugbreak();
    if ( (unsigned int)v3 >= LODWORD(CgStatic::ms_allocatedCount) )
    {
      *(float *)&v35 = CgStatic::ms_allocatedCount;
      LODWORD(v34) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 111, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v34, v35) )
        __debugbreak();
    }
    if ( !CgStatic::ms_cgameStaticsArray[v3] )
    {
      LODWORD(v35) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 112, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum])", "%s\n\tTrying to access unallocated client game statics for localClientNum %d\n", "ms_cgameStaticsArray[localClientNum]", v35) )
        __debugbreak();
    }
    v7 = p_nextState->number;
    v8 = CG_GetLocalClientGlobals((const LocalClientNum_t)CgStatic::ms_cgameStaticsArray[v3]->m_localClientNum);
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 33, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    if ( v8->IsMP(v8) )
    {
      if ( (unsigned int)v7 >= v8[1].predictedPlayerState.rxvOmnvars[64].timeModified )
      {
        LODWORD(v35) = v8[1].predictedPlayerState.rxvOmnvars[64].timeModified;
        LODWORD(v34) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v34, v35) )
          __debugbreak();
      }
      CharacterInfo = (const characterInfo_t *)(*(_QWORD *)&v8[1].predictedPlayerState.rxvOmnvars[62] + 14792 * v7);
    }
    else
    {
      CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v8, v7);
    }
    if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 685, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
      __debugbreak();
    skydiveAnimState = CharacterInfo->skydiveAnimState;
    if ( skydiveAnimState )
    {
      v11 = skydiveAnimState;
      if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 379, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
        __debugbreak();
      if ( !cent->pose.origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
        __debugbreak();
      FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(cent->pose.origin.Get_origin, &cent->pose);
      FunctionPointer_origin(&cent->pose.origin.origin.origin, &origin);
      if ( cent->pose.isPosePrecise )
      {
        _XMM0 = LODWORD(origin.v[0]);
        __asm { vcvtdq2pd xmm0, xmm0 }
        *((_QWORD *)&v16 + 1) = *((_QWORD *)&_XMM0 + 1);
        *(double *)&v16 = *(double *)&_XMM0 * 0.000244140625;
        _XMM0 = v16;
        __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
        origin.v[0] = *(float *)&_XMM1;
        _XMM2 = LODWORD(origin.v[1]);
        __asm { vcvtdq2pd xmm2, xmm2 }
        *((_QWORD *)&v16 + 1) = *((_QWORD *)&_XMM2 + 1);
        *(double *)&v16 = *(double *)&_XMM2 * 0.000244140625;
        _XMM0 = v16;
        __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
        origin.v[1] = *(float *)&_XMM1;
        _XMM2 = LODWORD(origin.v[2]);
        __asm { vcvtdq2pd xmm2, xmm2 }
        *((_QWORD *)&v16 + 1) = *((_QWORD *)&_XMM2 + 1);
        *(double *)&v16 = *(double *)&_XMM2 * 0.000244140625;
        _XMM0 = v16;
        __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
        origin.v[2] = *(float *)&_XMM1;
      }
      clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
      if ( LocalClientGlobals->HasCharacterInfo(LocalClientGlobals, LocalClientGlobals->predictedPlayerState.clientNum) )
      {
        if ( LocalClientGlobals->IsMP(LocalClientGlobals) )
        {
          if ( (unsigned int)clientNum >= LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified )
          {
            LODWORD(v35) = LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified;
            LODWORD(v34) = clientNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v34, v35) )
              __debugbreak();
          }
          v27 = (characterInfo_t *)(*(_QWORD *)&LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[62] + 14792 * clientNum);
        }
        else
        {
          v27 = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)LocalClientGlobals, clientNum);
        }
        if ( v27 )
        {
          team = CharacterInfo->team;
          v29 = v27->team;
          if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 163, ASSERT_TYPE_ASSERT, "(playerState)", (const char *)&queryFormat, "playerState") )
            __debugbreak();
          if ( cent == (const centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 164, ASSERT_TYPE_ASSERT, "(otherEntityState)", (const char *)&queryFormat, "otherEntityState") )
            __debugbreak();
          v30 = v29 && v29 == team;
          SoundSystem = CgSoundSystem::GetSoundSystem((const LocalClientNum_t)LocalClientGlobals->localClientNum);
          switch ( v11 )
          {
            case 1:
            case 11:
              skydiveFreefallSoundThirdPersonEnemy = cgMedia.skydiveFreefallSoundThirdPersonEnemy;
              if ( v30 )
                skydiveFreefallSoundThirdPersonEnemy = cgMedia.skydiveFreefallSoundThirdPersonFriendly;
              goto LABEL_81;
            case 2:
            case 3:
              goto $LN24_10;
            case 4:
            case 5:
            case 6:
            case 7:
              skydiveLandingSoundThirdPersonEnemy = cgMedia.skydiveLandingSoundThirdPersonEnemy;
              if ( v30 )
                skydiveLandingSoundThirdPersonEnemy = cgMedia.skydiveLandingSoundThirdPersonFriendly;
              CgSoundSystem::PlaySoundAliasAsync(SoundSystem, p_nextState->number, &origin, skydiveLandingSoundThirdPersonEnemy);
$LN24_10:
              skydiveFreefallSoundThirdPersonEnemy = cgMedia.skydiveCanopySoundThirdPersonEnemy;
              if ( v30 )
                skydiveFreefallSoundThirdPersonEnemy = cgMedia.skydiveCanopySoundThirdPersonFriendly;
LABEL_81:
              CgSoundSystem::PlaySoundAliasAsync(SoundSystem, p_nextState->number, &origin, skydiveFreefallSoundThirdPersonEnemy);
              break;
            default:
              break;
          }
        }
      }
      memset(&origin, 0, sizeof(origin));
    }
  }
}

