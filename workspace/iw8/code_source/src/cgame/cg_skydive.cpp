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
  int pm_type; 
  char v8; 
  bool v9; 
  bool v10; 
  char v11; 
  int parachuteCutTime; 
  const dvar_t *v13; 
  int v14; 
  char v16; 
  int v17; 
  bool fovChangeIsForParachuteCut; 
  bool v20; 
  bool v21; 
  const dvar_t *v24; 
  const char *v25; 
  const dvar_t *v26; 
  const dvar_t *v27; 
  const char *v31; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 415, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  _RBX = CG_GetLocalClientGlobals(localClientNum);
  pm_type = _RBX->predictedPlayerState.pm_type;
  v8 = _RBX->predictedPlayerState.skydivePlayerState.state[0];
  v9 = v8 && v8 != 6;
  v10 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->predictedPlayerState.pm_flags, ACTIVE, 6u);
  if ( pm_type )
    goto LABEL_14;
  if ( v9 )
  {
    _RBX->skydiveClientState.stillInAirAfterSkydiving = 1;
    goto LABEL_15;
  }
  if ( _RBX->predictedPlayerState.pm_type == 3 || !BG_IsInAir(&_RBX->predictedPlayerState, 0) || v10 )
LABEL_14:
    _RBX->skydiveClientState.stillInAirAfterSkydiving = 0;
LABEL_15:
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 375, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( (unsigned __int8)(_RBX->predictedPlayerState.skydivePlayerState.state[0] - 2) <= 1u )
  {
    v11 = 1;
  }
  else
  {
    v11 = 0;
    if ( _RBX->skydiveClientState.wasUsingParachute )
    {
      if ( _RBX->skydiveClientState.stillInAirAfterSkydiving )
      {
        _RBX->skydiveClientState.parachuteCutTime = _RBX->time;
LABEL_26:
        _RBX->skydiveClientState.parachuteCutStateIsActive = 0;
        goto LABEL_27;
      }
LABEL_25:
      _RBX->skydiveClientState.parachuteCutTime = 0;
      goto LABEL_26;
    }
  }
  if ( !_RBX->skydiveClientState.stillInAirAfterSkydiving || v11 )
    goto LABEL_25;
LABEL_27:
  parachuteCutTime = _RBX->skydiveClientState.parachuteCutTime;
  if ( parachuteCutTime > 0 )
  {
    v13 = DVARINT_cg_skydive_parachute_cut_look_down_grace_period;
    v14 = _RBX->time - parachuteCutTime;
    if ( !DVARINT_cg_skydive_parachute_cut_look_down_grace_period && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_skydive_parachute_cut_look_down_grace_period") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    if ( v14 <= v13->current.integer )
    {
      _RBP = DVARFLT_cg_skydive_parachute_cut_pitch_threshold;
      __asm { vmovss  xmm6, dword ptr [rbx+1E0h] }
      if ( !DVARFLT_cg_skydive_parachute_cut_pitch_threshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_skydive_parachute_cut_pitch_threshold") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBP);
      __asm { vcomiss xmm6, dword ptr [rbp+28h] }
      if ( !(v16 | v21) )
        _RBX->skydiveClientState.parachuteCutStateIsActive = 1;
    }
  }
  _RBX->skydiveClientState.wasUsingParachute = v11;
  v17 = _RBX->predictedPlayerState.pm_type;
  fovChangeIsForParachuteCut = _RBX->skydiveClientState.fovChangeIsForParachuteCut;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  v20 = v17 == 5 && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(&_RBX->predictedPlayerState.otherFlags, (POtherFlagsMP)33);
  v21 = v17 == 3;
  if ( v17 != 3 )
  {
    v21 = !v20;
    if ( !v20 )
    {
      __asm { vcomiss xmm6, dword ptr [rbx+738h] }
      if ( CG_Skydive_IsSuperDiveActive(localClientNum) )
      {
        _RBX->skydiveClientState.fovChangeIsForParachuteCut = 0;
        _RSI = DVARFLT_cg_skydive_super_dive_fov_delta;
        if ( !DVARFLT_cg_skydive_super_dive_fov_delta && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_skydive_super_dive_fov_delta") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RSI);
        v21 = !_RBX->skydiveClientState.parachuteCutStateIsActive;
        __asm { vmovss  xmm6, dword ptr [rsi+28h] }
        if ( !_RBX->skydiveClientState.parachuteCutStateIsActive )
          _RBX->skydiveClientState.parachuteCutStateIsActive = 1;
      }
      else
      {
        v21 = !_RBX->skydiveClientState.parachuteCutStateIsActive;
        if ( _RBX->skydiveClientState.parachuteCutStateIsActive )
        {
          _RBX->skydiveClientState.fovChangeIsForParachuteCut = 1;
          _RSI = DVARFLT_cg_skydive_parachute_cut_fov_delta;
          if ( !DVARFLT_cg_skydive_parachute_cut_fov_delta && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_skydive_parachute_cut_fov_delta") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(_RSI);
          __asm { vmovss  xmm6, dword ptr [rsi+28h] }
        }
      }
    }
  }
  __asm { vucomiss xmm6, dword ptr [rbx+0BA1B0h] }
  if ( !v21 )
  {
    *(float *)&_XMM0 = CG_Skydive_GetFovDeltaCurrent(_RBX, &_RBX->skydiveClientState);
    __asm
    {
      vcomiss xmm6, xmm0
      vmovss  dword ptr [rbx+0BA1B4h], xmm0
      vmovss  dword ptr [rbx+0BA1B0h], xmm6
    }
    if ( v16 | v21 )
    {
      if ( !_RBX->skydiveClientState.stillInAirAfterSkydiving )
      {
        v26 = DVARINT_cg_skydive_land_fov_blend_out_time;
        if ( !DVARINT_cg_skydive_land_fov_blend_out_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_skydive_land_fov_blend_out_time") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v26);
        _RBX->skydiveClientState.fovChangeLerpTime = v26->current.integer;
      }
      if ( fovChangeIsForParachuteCut )
      {
        v24 = DVARINT_cg_skydive_parachute_cut_fov_blend_out_time;
        if ( DVARINT_cg_skydive_parachute_cut_fov_blend_out_time )
          goto LABEL_73;
        v25 = "cg_skydive_parachute_cut_fov_blend_out_time";
      }
      else
      {
        v24 = DVARINT_cg_skydive_super_dive_fov_blend_out_time;
        if ( DVARINT_cg_skydive_super_dive_fov_blend_out_time )
          goto LABEL_73;
        v25 = "cg_skydive_super_dive_fov_blend_out_time";
      }
    }
    else
    {
      if ( _RBX->skydiveClientState.fovChangeIsForParachuteCut )
      {
        v24 = DVARINT_cg_skydive_parachute_cut_fov_blend_in_time;
        if ( !DVARINT_cg_skydive_parachute_cut_fov_blend_in_time )
        {
          v25 = "cg_skydive_parachute_cut_fov_blend_in_time";
          goto LABEL_71;
        }
LABEL_73:
        Dvar_CheckFrontendServerThread(v24);
        _RBX->skydiveClientState.fovChangeLerpTime = v24->current.integer;
        _RBX->skydiveClientState.fovChangeTime = _RBX->time;
        goto LABEL_74;
      }
      v24 = DVARINT_cg_skydive_super_dive_fov_blend_in_time;
      if ( DVARINT_cg_skydive_super_dive_fov_blend_in_time )
        goto LABEL_73;
      v25 = "cg_skydive_super_dive_fov_blend_in_time";
    }
LABEL_71:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v25) )
      __debugbreak();
    goto LABEL_73;
  }
LABEL_74:
  *(float *)&_XMM0 = CG_Skydive_GetFovDeltaCurrent(_RBX, &_RBX->skydiveClientState);
  __asm { vmovss  dword ptr [rbx+0BA1B8h], xmm0 }
  v27 = DVARFLT_cg_skydive_super_dive_fov_delta;
  __asm { vmovaps xmm6, xmm0 }
  if ( !DVARFLT_cg_skydive_super_dive_fov_delta && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_skydive_super_dive_fov_delta") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v27);
  __asm { vdivss  xmm6, xmm6, dword ptr [rsi+28h] }
  if ( !_RBX->predictedPlayerState.pm_type )
  {
    if ( _RBX->predictedPlayerState.skydivePlayerState.state[0] == 1 )
    {
      _RDI = DVARFLT_cg_skydive_rmb_freefall_weight_min;
      if ( !DVARFLT_cg_skydive_rmb_freefall_weight_min )
      {
        v31 = "cg_skydive_rmb_freefall_weight_min";
        goto LABEL_84;
      }
      goto LABEL_86;
    }
    if ( _RBX->skydiveClientState.parachuteCutTime > 0 )
    {
      _RDI = DVARFLT_cg_skydive_rmb_parachute_cut_weight_min;
      if ( !DVARFLT_cg_skydive_rmb_parachute_cut_weight_min )
      {
        v31 = "cg_skydive_rmb_parachute_cut_weight_min";
LABEL_84:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v31) )
          __debugbreak();
      }
LABEL_86:
      Dvar_CheckFrontendServerThread(_RDI);
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+28h]
        vmaxss  xmm6, xmm0, xmm6
      }
    }
  }
  _RDI = DVARFLT_cg_skydive_rmb_track_speed;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rbx+65E4h]
    vmulss  xmm7, xmm0, cs:__real@3a83126f
  }
  if ( !DVARFLT_cg_skydive_rmb_track_speed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_skydive_rmb_track_speed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm2, dword ptr [rdi+28h]; rate
    vmovss  xmm1, dword ptr [rbx+0BA1ACh]; cur
    vmovaps xmm3, xmm7; deltaTime
    vmovaps xmm0, xmm6; tgt
  }
  *(double *)&_XMM0 = DiffTrack(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_38]
    vmovaps xmm7, [rsp+88h+var_48]
    vmovss  dword ptr [rbx+0BA1ACh], xmm0
  }
}

/*
==============
CG_Skydive_GetCameraShakeVelocity
==============
*/
float CG_Skydive_GetCameraShakeVelocity(const LocalClientNum_t localClientNum, const playerState_s *ps)
{
  int v9; 
  const dvar_t *v10; 
  bool v28; 

  _RDI = ps;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 578, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 579, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  _RBX = CG_GetLocalClientGlobals(localClientNum);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 582, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  v9 = _RBX->time - _RBX->skydiveClientState.parachuteCutTime;
  v10 = DVARINT_cg_skydive_parachute_cut_cam_shake_min_time;
  if ( !DVARINT_cg_skydive_parachute_cut_cam_shake_min_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_skydive_parachute_cut_cam_shake_min_time") )
    __debugbreak();
  __asm
  {
    vmovaps [rsp+88h+var_28], xmm6
    vmovaps [rsp+88h+var_38], xmm7
  }
  Dvar_CheckFrontendServerThread(v10);
  if ( v9 <= v10->current.integer || _RDI->skydivePlayerState.state[0] == 5 )
  {
    _RDI = DVARFLT_cg_skydive_parachute_cut_cam_shake_blend_in_speed;
    __asm
    {
      vmovaps [rsp+88h+var_48], xmm8
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rbx+65E4h]
      vmulss  xmm8, xmm0, cs:__real@3a83126f
    }
    if ( !DVARFLT_cg_skydive_parachute_cut_cam_shake_blend_in_speed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_skydive_parachute_cut_cam_shake_blend_in_speed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm6, dword ptr [rdi+28h] }
    _RDI = DVARFLT_cg_skydive_parachute_cut_cam_shake_fake_speed;
    __asm { vmovss  xmm7, dword ptr [rbx+0BA1A8h] }
    if ( !DVARFLT_cg_skydive_parachute_cut_cam_shake_fake_speed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_skydive_parachute_cut_cam_shake_fake_speed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+28h]; tgt
      vmovaps xmm3, xmm8; deltaTime
      vmovaps xmm2, xmm6; rate
      vmovaps xmm1, xmm7; cur
    }
    *(double *)&_XMM0 = DiffTrack(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    __asm
    {
      vmovaps xmm8, [rsp+88h+var_48]
      vmovss  dword ptr [rbx+0BA1A8h], xmm0
    }
    _RBX->skydiveClientState.waitForBlendIntoNormalVelocityForCameraShake = 1;
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+3Ch]
      vmovss  xmm2, dword ptr [rdi+40h]
      vmovss  xmm3, dword ptr [rdi+44h]
    }
    _RDI = DVARFLT_cg_skydive_parachute_cut_cam_shake_blend_out_speed;
    __asm
    {
      vmulss  xmm1, xmm0, xmm0
      vmulss  xmm0, xmm2, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rbx+65E4h]
      vmulss  xmm7, xmm0, cs:__real@3a83126f
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm6, xmm2, xmm2
    }
    if ( !DVARFLT_cg_skydive_parachute_cut_cam_shake_blend_out_speed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_skydive_parachute_cut_cam_shake_blend_out_speed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm2, dword ptr [rdi+28h]; rate
      vmovss  xmm1, dword ptr [rbx+0BA1A8h]; cur
      vmovaps xmm3, xmm7; deltaTime
      vmovaps xmm0, xmm6; tgt
    }
    *(double *)&_XMM0 = DiffTrack(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    v28 = !_RBX->skydiveClientState.waitForBlendIntoNormalVelocityForCameraShake;
    __asm { vmovss  dword ptr [rbx+0BA1A8h], xmm0 }
    if ( !v28 )
    {
      __asm
      {
        vsubss  xmm0, xmm0, xmm6
        vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vcomiss xmm0, cs:VEL_CATCH_UP_THRESHOLD
        vmovss  xmm0, dword ptr [rbx+0BA1A8h]
      }
    }
  }
  __asm
  {
    vmovaps xmm7, [rsp+88h+var_38]
    vmovaps xmm6, [rsp+88h+var_28]
  }
  return *(float *)&_XMM0;
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
  int v7; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v7 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 531, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v7) )
      __debugbreak();
  }
  _RAX = CG_GetLocalClientGlobals(localClientNum);
  __asm
  {
    vmovss  xmm0, dword ptr [rax+0BA1B8h]
    vxorps  xmm0, xmm0, cs:__xmm@80000000800000008000000080000000
  }
  return *(float *)&_XMM0;
}

/*
==============
CG_Skydive_GetFovDeltaCurrent
==============
*/
float CG_Skydive_GetFovDeltaCurrent(const cg_t *cgameGlob, const SkydiveClientState *skydiveClientState)
{
  __asm { vmovaps [rsp+48h+var_18], xmm7 }
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 367, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  __asm { vmovss  xmm7, cs:__real@3f800000 }
  if ( skydiveClientState->fovChangeLerpTime <= 0 )
  {
    __asm { vmovaps xmm3, xmm7 }
  }
  else
  {
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm1, xmm1, eax
      vcvtsi2ss xmm0, xmm0, ecx
      vdivss  xmm2, xmm1, xmm0
      vminss  xmm3, xmm2, xmm7
    }
  }
  __asm
  {
    vsubss  xmm0, xmm3, cs:__real@3f000000
    vmulss  xmm0, xmm0, cs:__real@40490fdb; X
  }
  *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
  __asm
  {
    vaddss  xmm1, xmm0, xmm7
    vmulss  xmm3, xmm1, cs:__real@3f000000
    vmulss  xmm1, xmm3, dword ptr [rbx+50h]
    vsubss  xmm0, xmm7, xmm3
    vmulss  xmm2, xmm0, dword ptr [rbx+54h]
    vmovaps xmm7, [rsp+48h+var_18]
    vaddss  xmm0, xmm2, xmm1
  }
  return *(float *)&_XMM0;
}

/*
==============
CG_Skydive_GetTurnRates
==============
*/
void CG_Skydive_GetTurnRates(const LocalClientNum_t localClientNum, float *outPitchRate, float *outYawRate)
{
  cg_t *LocalClientGlobals; 
  __int64 v10; 

  _RDI = outYawRate;
  _RSI = outPitchRate;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 22, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 23, ASSERT_TYPE_ASSERT, "(outPitchRate)", (const char *)&queryFormat, "outPitchRate") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 24, ASSERT_TYPE_ASSERT, "(outYawRate)", (const char *)&queryFormat, "outYawRate") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 27, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !BG_Skydive_IsSkydiving(&LocalClientGlobals->predictedPlayerState) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 31, ASSERT_TYPE_ASSERT, "(BG_Skydive_IsSkydiving( ps ))", (const char *)&queryFormat, "BG_Skydive_IsSkydiving( ps )") )
    __debugbreak();
  _RBX = BG_GetSuitDef(LocalClientGlobals->predictedPlayerState.suitIndex);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 34, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
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
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+580h]; jumptable 00000001403EAB8D cases 2-4
        vmovss  xmm1, dword ptr [rbx+584h]
      }
      break;
    default:
      LODWORD(v10) = (unsigned __int8)LocalClientGlobals->predictedPlayerState.skydivePlayerState.state[0];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 57, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled skydive state %d while retrieving suit field values.", v10) )
        __debugbreak();
$LN22_10:
      __asm
      {
        vmovss  xmm1, dword ptr [rbx+434h]; jumptable 00000001403EAB8D cases 1,5,6
        vmovss  xmm0, dword ptr [rbx+430h]
      }
      break;
  }
  __asm
  {
    vmovss  dword ptr [rsi], xmm0
    vmovss  dword ptr [rdi], xmm1
  }
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
  char *fmt; 
  char v19[272]; 
  int v20; 

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
  v20 = v8;
  if ( CmdNumber > v8 )
  {
    LODWORD(fmt) = v8;
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CEE128, 754i64, (unsigned int)CmdNumber, fmt);
  }
  if ( CmdNumber > v9 - 128 && CmdNumber > 0 )
  {
    _RBX = &v7->cmds[CmdNumber & 0x7F];
    memset(&v20, 0, sizeof(v20));
    if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 385, ASSERT_TYPE_ASSERT, "(requestedCmd)", (const char *)&queryFormat, "requestedCmd") )
      __debugbreak();
    _RAX = v19;
    do
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbx]
        vmovups ymmword ptr [rax], ymm0
        vmovups ymm0, ymmword ptr [rbx+20h]
        vmovups ymmword ptr [rax+20h], ymm0
        vmovups ymm0, ymmword ptr [rbx+40h]
        vmovups ymmword ptr [rax+40h], ymm0
        vmovups xmm0, xmmword ptr [rbx+60h]
        vmovups xmmword ptr [rax+60h], xmm0
      }
      _RAX += 128;
      __asm
      {
        vmovups xmm1, xmmword ptr [rbx+70h]
        vmovups xmmword ptr [rax-10h], xmm1
      }
      _RBX = (usercmd_s *)((char *)_RBX + 128);
      --v2;
    }
    while ( v2 );
    *(_QWORD *)_RAX = _RBX->buttons;
    return BG_Skydive_IsSuperDiveActive(p_predictedPlayerState, v19[156], v19[157]);
  }
  else
  {
    result = 0;
    memset(&v20, 0, sizeof(v20));
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
  LocalClientNum_t localClientNum; 
  CgSoundSystem *SoundSystem; 
  char v82; 
  char v83; 
  int v96; 
  int v97; 
  int v98; 
  int v99; 
  char v102; 
  void *retaddr; 

  _RAX = &retaddr;
  _RBX = phaseSoundState;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
  }
  *outStopAmbientSound = 1;
  *outStopHighSpeedSound = 1;
  *(_QWORD *)&phaseSoundState->ambientVolume = 0i64;
  *(_QWORD *)&phaseSoundState->highSpeedVolume = 0i64;
  localClientNum = cgameGlob->localClientNum;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
  }
  SoundSystem = CgSoundSystem::GetSoundSystem(localClientNum);
  __asm { vmovss  xmm9, cs:__real@3f800000 }
  if ( ambientSoundAlias )
  {
    __asm
    {
      vmovss  xmm2, [rsp+98h+ambientMaxGroundSpeed]; max
      vmovss  xmm1, [rsp+98h+ambientMinGroundSpeed]; min
      vmovss  xmm0, [rsp+98h+groundSpeed]; val
    }
    *outStopAmbientSound = 0;
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovss  xmm1, [rsp+98h+ambientMaxGroundSpeed]; max
      vmovaps xmm2, xmm0; dist
      vmovss  xmm0, [rsp+98h+ambientMinGroundSpeed]; min
    }
    *(double *)&_XMM0 = I_fdistnormalized(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovss  xmm2, [rsp+98h+ambientMaxFallSpeed]; max
      vmovss  xmm1, [rsp+98h+ambientMinFallSpeed]; min
      vmovaps xmm8, xmm0
      vmovss  xmm0, [rsp+98h+fallSpeed]; val
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovss  xmm1, [rsp+98h+ambientMaxFallSpeed]; max
      vmovaps xmm2, xmm0; dist
      vmovss  xmm0, [rsp+98h+ambientMinFallSpeed]; min
    }
    *(double *)&_XMM0 = I_fdistnormalized(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmulss  xmm1, xmm8, [rsp+98h+ambientGroundSpeedWeight]
      vmovaps xmm2, xmm0
      vsubss  xmm0, xmm9, [rsp+98h+ambientGroundSpeedWeight]
      vmulss  xmm2, xmm2, xmm0
      vaddss  xmm4, xmm2, xmm1
      vmulss  xmm0, xmm4, [rsp+98h+ambientMaxVolume]
      vsubss  xmm3, xmm9, xmm4
      vmulss  xmm1, xmm3, [rsp+98h+ambientMinVolume]
      vmulss  xmm2, xmm3, [rsp+98h+ambientMinPitch]
      vaddss  xmm5, xmm1, xmm0
      vmulss  xmm0, xmm4, [rsp+98h+ambientMaxPitch]
      vaddss  xmm1, xmm2, xmm0
      vmovss  dword ptr [rbx+4], xmm1
      vmovss  dword ptr [rbx], xmm5
      vmovss  [rsp+98h+var_70], xmm1
      vmovss  [rsp+98h+var_78], xmm5
    }
    ((void (__fastcall *)(CgSoundSystem *, _QWORD, const vec3_t *, SndAliasList *, int, int, _DWORD))SoundSystem->PlaySoundAliasScaledAsync)(SoundSystem, (unsigned int)entitynum, origin, ambientSoundAlias, v96, v98, 0);
    _RBX->stoppedAmbientSound = 0;
  }
  if ( highSpeedSoundAlias )
  {
    __asm
    {
      vmovss  xmm2, [rsp+98h+highSpeedMaxGroundSpeed]; max
      vmovss  xmm1, [rsp+98h+highSpeedMinGroundSpeed]; min
      vmovss  xmm0, [rsp+98h+groundSpeed]; val
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovss  xmm1, [rsp+98h+highSpeedMaxGroundSpeed]; max
      vmovaps xmm2, xmm0; dist
      vmovss  xmm0, [rsp+98h+highSpeedMinGroundSpeed]; min
    }
    *(double *)&_XMM0 = I_fdistnormalized(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovss  xmm2, [rsp+98h+highSpeedMaxFallSpeed]; max
      vmovss  xmm1, [rsp+98h+highSpeedMinFallSpeed]; min
      vmovaps xmm8, xmm0
      vmovss  xmm0, [rsp+98h+fallSpeed]; val
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovss  xmm1, [rsp+98h+highSpeedMaxFallSpeed]; max
      vmovaps xmm2, xmm0; dist
      vmovss  xmm0, [rsp+98h+highSpeedMinFallSpeed]; min
    }
    *(double *)&_XMM0 = I_fdistnormalized(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vsubss  xmm1, xmm9, [rsp+98h+highSpeedGroundSpeedWeight]
      vmulss  xmm2, xmm0, xmm1
      vmulss  xmm0, xmm8, [rsp+98h+highSpeedGroundSpeedWeight]
      vaddss  xmm4, xmm2, xmm0
      vxorps  xmm1, xmm1, xmm1
      vcomiss xmm4, xmm1
    }
    if ( !(v82 | v83) )
    {
      __asm { vmulss  xmm0, xmm4, [rsp+98h+highSpeedMaxVolume] }
      *outStopHighSpeedSound = 0;
      __asm
      {
        vsubss  xmm2, xmm9, xmm4
        vmulss  xmm1, xmm2, [rsp+98h+highSpeedMinVolume]
        vmulss  xmm2, xmm2, [rsp+98h+highSpeedMinPitch]
        vaddss  xmm3, xmm1, xmm0
        vmulss  xmm0, xmm4, [rsp+98h+highSpeedMaxPitch]
        vaddss  xmm1, xmm2, xmm0
        vmovss  dword ptr [rbx+0Ch], xmm1
        vmovss  dword ptr [rbx+8], xmm3
        vmovss  [rsp+98h+var_70], xmm1
        vmovss  [rsp+98h+var_78], xmm3
      }
      ((void (__fastcall *)(CgSoundSystem *, _QWORD, const vec3_t *, SndAliasList *, int, int, _DWORD))SoundSystem->PlaySoundAliasScaledAsync)(SoundSystem, (unsigned int)entitynum, origin, highSpeedSoundAlias, v97, v99, 0);
      _RBX->stoppedHighSpeedSound = 0;
    }
  }
  __asm { vmovaps xmm6, [rsp+98h+var_28] }
  _R11 = &v102;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm7, [rsp+98h+var_38]
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
  bool v13; 
  bool v14; 
  char result; 
  const dvar_t *v18; 
  const dvar_t *v20; 
  const dvar_t *v22; 
  const dvar_t *v24; 

  __asm { vmovaps [rsp+68h+var_28], xmm6 }
  _R14 = maxStrength;
  _RBP = minStrength;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 636, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 637, ASSERT_TYPE_ASSERT, "(minStrength)", (const char *)&queryFormat, "minStrength") )
    __debugbreak();
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 638, ASSERT_TYPE_ASSERT, "(maxStrength)", (const char *)&queryFormat, "maxStrength") )
    __debugbreak();
  _RSI = minRadius;
  if ( !minRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 639, ASSERT_TYPE_ASSERT, "(minRadius)", (const char *)&queryFormat, "minRadius") )
    __debugbreak();
  _RDI = maxRadius;
  if ( !maxRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 640, ASSERT_TYPE_ASSERT, "(maxRadius)", (const char *)&queryFormat, "maxRadius") )
    __debugbreak();
  _RBX = CG_GetLocalClientGlobals(localClientNum);
  v13 = _RBX == NULL;
  if ( !_RBX )
  {
    v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 643, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob");
    v13 = !v14;
    if ( v14 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm6, dword ptr [rbx+0BA1ACh]
    vcvtss2sd xmm0, xmm6, xmm6
    vcomisd xmm0, cs:__real@3eb0c6f7a0b5ed8d
  }
  if ( v13 )
  {
    result = 0;
  }
  else
  {
    v18 = DVARFLT_cg_skydive_rmb_strength_min;
    if ( !DVARFLT_cg_skydive_rmb_strength_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_skydive_rmb_strength_min") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    __asm
    {
      vmulss  xmm0, xmm6, dword ptr [rbx+28h]
      vmovss  dword ptr [rbp+0], xmm0
    }
    v20 = DVARFLT_cg_skydive_rmb_strength_max;
    if ( !DVARFLT_cg_skydive_rmb_strength_max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_skydive_rmb_strength_max") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    __asm
    {
      vmulss  xmm0, xmm6, dword ptr [rbx+28h]
      vmovss  dword ptr [r14], xmm0
    }
    v22 = DVARFLT_cg_skydive_rmb_radius_min;
    if ( !DVARFLT_cg_skydive_rmb_radius_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_skydive_rmb_radius_min") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
    __asm
    {
      vmulss  xmm0, xmm6, dword ptr [rbx+28h]
      vmovss  dword ptr [rsi], xmm0
    }
    v24 = DVARFLT_cg_skydive_rmb_radius_max;
    if ( !DVARFLT_cg_skydive_rmb_radius_max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_skydive_rmb_radius_max") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v24);
    __asm { vmulss  xmm0, xmm6, dword ptr [rbx+28h] }
    result = 9;
    __asm { vmovss  dword ptr [rdi], xmm0 }
  }
  __asm { vmovaps xmm6, [rsp+68h+var_28] }
  return result;
}

/*
==============
CG_Skydive_SoundUpdate
==============
*/
void CG_Skydive_SoundUpdate(cg_t *cgameGlob, const playerState_s *ps)
{
  char v15; 
  char v16; 
  char v17; 
  char v18; 
  const char *name; 
  SndAliasList *Alias; 
  SndAliasList *highSpeedSoundAlias; 
  SndAliasList *v43; 
  const char *v63; 
  SndAliasList *v76; 
  SndAliasList *v78; 
  SndAliasList *v86; 
  unsigned __int64 SndEntHandle; 
  unsigned __int64 v107; 
  float ambientMinVolume; 
  float ambientMinVolumea; 
  float v119; 
  float v120; 
  float v121; 
  float v122; 
  float v123; 
  float v124; 
  float v125; 
  float v126; 
  float v127; 
  float v128; 
  float v129; 
  float v130; 
  float v131; 
  float v132; 
  float v133; 
  float v134; 
  float v135; 
  float v136; 
  float v137; 
  float v138; 
  float v139; 
  float v140; 
  float v141; 
  float v142; 
  float v143; 
  float v144; 
  float v145; 
  float v146; 
  float v147; 
  float v148; 
  float v149; 
  float v150; 
  float v151; 
  float v152; 
  float v153; 
  float v154; 
  float v155; 
  float v156; 
  int outStopAmbientSound; 
  int v187; 
  int v188; 
  bool outStopHighSpeedSound; 

  _RBP = ps;
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 176, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 177, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  _RDI = BG_GetSuitDef(_RBP->suitIndex);
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_skydive.cpp", 180, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  v15 = _RBP->skydivePlayerState.state[0];
  __asm { vmovaps [rsp+1F8h+var_58], xmm6 }
  v16 = 1;
  __asm { vmovaps [rsp+1F8h+var_68], xmm7 }
  v17 = 1;
  __asm { vmovaps [rsp+1F8h+var_78], xmm8 }
  v18 = 1;
  __asm
  {
    vmovaps [rsp+1F8h+var_88], xmm9
    vmovaps [rsp+1F8h+var_98], xmm10
    vmovaps [rsp+1F8h+var_A8], xmm11
    vmovaps [rsp+1F8h+var_B8], xmm12
    vmovaps [rsp+1F8h+var_C8], xmm13
    vmovaps [rsp+1F8h+var_D8], xmm14
    vmovaps [rsp+1F8h+var_E8], xmm15
  }
  LOBYTE(v187) = 1;
  LOBYTE(v188) = 1;
  LOBYTE(outStopAmbientSound) = 1;
  outStopHighSpeedSound = 1;
  if ( ((v15 - 1) & 0xFB) != 0 )
  {
    if ( v15 == 3 )
    {
      __asm { vmovss  xmm0, dword ptr [rdi+660h] }
      name = _RDI->skydive_canopyHighSpeedSound.name;
      __asm
      {
        vmovss  xmm8, dword ptr [rbp+40h]
        vmovss  xmm7, dword ptr [rbp+3Ch]
        vmovss  xmm6, dword ptr [rbp+44h]
        vmovss  [rsp+1F8h+arg_8], xmm0
        vmovss  xmm0, dword ptr [rdi+630h]
        vmovss  [rsp+1F8h+arg_10], xmm0
        vmovss  xmm0, dword ptr [rdi+680h]
        vmovss  [rsp+1F8h+var_118], xmm0
        vmovss  xmm0, dword ptr [rdi+67Ch]
        vmovss  [rsp+1F8h+var_114], xmm0
        vmovss  xmm0, dword ptr [rdi+678h]
        vmovss  [rsp+1F8h+var_110], xmm0
        vmovss  xmm0, dword ptr [rdi+674h]
        vmovss  [rsp+1F8h+var_10C], xmm0
        vmovss  xmm0, dword ptr [rdi+670h]
        vmovss  [rsp+1F8h+var_108], xmm0
        vmovss  xmm0, dword ptr [rdi+66Ch]
        vmovss  [rsp+1F8h+var_104], xmm0
        vmovss  xmm0, dword ptr [rdi+668h]
        vmovss  [rsp+1F8h+var_100], xmm0
        vmovss  xmm0, dword ptr [rdi+664h]
        vmovss  [rsp+1F8h+var_FC], xmm0
      }
      Alias = SND_FindAlias(name);
      __asm { vmovss  xmm0, dword ptr [rdi+634h] }
      highSpeedSoundAlias = Alias;
      __asm
      {
        vmovss  xmm9, dword ptr [rdi+650h]
        vmovss  xmm10, dword ptr [rdi+64Ch]
        vmovss  xmm11, dword ptr [rdi+648h]
        vmovss  xmm12, dword ptr [rdi+644h]
        vmovss  xmm13, dword ptr [rdi+640h]
        vmovss  xmm14, dword ptr [rdi+63Ch]
        vmovss  xmm15, dword ptr [rdi+638h]
        vmovss  [rsp+1F8h+var_F8], xmm0
      }
      v43 = SND_FindAlias(_RDI->skydive_canopyAmbientSound.name);
      __asm
      {
        vandps  xmm6, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vmulss  xmm5, xmm6, cs:__real@3cd013a9
        vmulss  xmm1, xmm7, xmm7
        vmulss  xmm0, xmm8, xmm8
        vaddss  xmm1, xmm1, xmm0
        vmovss  xmm0, [rsp+1F8h+arg_8]
        vsqrtss xmm2, xmm1, xmm1
        vmulss  xmm4, xmm2, cs:__real@3cd013a9
        vmovss  xmm1, [rsp+1F8h+arg_10]
        vmovss  xmm2, [rsp+1F8h+var_118]
        vmovss  [rsp+1F8h+var_130], xmm5
        vmovss  [rsp+1F8h+var_138], xmm4
        vmovss  [rsp+1F8h+var_140], xmm0
        vmovss  xmm0, [rsp+1F8h+var_114]
        vmovss  [rsp+1F8h+var_148], xmm1
        vmovss  xmm1, [rsp+1F8h+var_110]
        vmovss  [rsp+1F8h+var_150], xmm2
        vmovss  xmm2, [rsp+1F8h+var_10C]
        vmovss  [rsp+1F8h+var_158], xmm0
        vmovss  xmm0, [rsp+1F8h+var_108]
        vmovss  [rsp+1F8h+var_160], xmm1
        vmovss  xmm1, [rsp+1F8h+var_104]
        vmovss  [rsp+1F8h+var_168], xmm2
        vmovss  xmm2, [rsp+1F8h+var_100]
        vmovss  [rsp+1F8h+var_170], xmm0
        vmovss  xmm0, [rsp+1F8h+var_FC]
        vmovss  [rsp+1F8h+var_178], xmm1
        vmovss  [rsp+1F8h+var_180], xmm2
        vmovss  [rsp+1F8h+var_188], xmm0
        vmovss  xmm0, [rsp+1F8h+var_F8]
        vmovss  [rsp+1F8h+var_198], xmm9
        vmovss  [rsp+1F8h+var_1A0], xmm10
        vmovss  [rsp+1F8h+var_1A8], xmm11
        vmovss  [rsp+1F8h+var_1B0], xmm12
        vmovss  [rsp+1F8h+var_1B8], xmm13
        vmovss  [rsp+1F8h+var_1C0], xmm14
        vmovss  [rsp+1F8h+var_1C8], xmm15
        vmovss  [rsp+1F8h+ambientMinVolume], xmm0
      }
      CG_Skydive_PlaySounds(cgameGlob, _RBP->clientNum, &_RBP->origin, &cgameGlob->skydiveClientState.soundState.canopy, v43, ambientMinVolume, v119, v121, v123, v125, v127, v129, v131, highSpeedSoundAlias, v133, v135, v137, v139, v141, v143, v145, v147, v149, v151, v153, v155, (bool *)&outStopAmbientSound, &outStopHighSpeedSound);
      v18 = outStopAmbientSound;
    }
  }
  else
  {
    __asm { vmovss  xmm0, dword ptr [rdi+510h] }
    v63 = _RDI->skydive_freefallHighSpeedSound.name;
    __asm
    {
      vmovss  xmm8, dword ptr [rbp+40h]
      vmovss  xmm7, dword ptr [rbp+3Ch]
      vmovss  xmm6, dword ptr [rbp+44h]
      vmovss  [rsp+1F8h+arg_0], xmm0
      vmovss  xmm0, dword ptr [rdi+4E0h]
      vmovss  [rsp+1F8h+var_F8], xmm0
      vmovss  xmm0, dword ptr [rdi+530h]
      vmovss  [rsp+1F8h+var_FC], xmm0
      vmovss  xmm0, dword ptr [rdi+52Ch]
      vmovss  [rsp+1F8h+var_100], xmm0
      vmovss  xmm0, dword ptr [rdi+528h]
      vmovss  [rsp+1F8h+var_104], xmm0
      vmovss  xmm0, dword ptr [rdi+524h]
      vmovss  [rsp+1F8h+var_108], xmm0
      vmovss  xmm0, dword ptr [rdi+520h]
      vmovss  [rsp+1F8h+var_10C], xmm0
      vmovss  xmm0, dword ptr [rdi+51Ch]
      vmovss  [rsp+1F8h+var_110], xmm0
      vmovss  xmm0, dword ptr [rdi+518h]
      vmovss  [rsp+1F8h+var_114], xmm0
      vmovss  xmm0, dword ptr [rdi+514h]
      vmovss  [rsp+1F8h+var_118], xmm0
    }
    v76 = SND_FindAlias(v63);
    __asm { vmovss  xmm0, dword ptr [rdi+4E4h] }
    v78 = v76;
    __asm
    {
      vmovss  xmm9, dword ptr [rdi+500h]
      vmovss  xmm10, dword ptr [rdi+4FCh]
      vmovss  xmm11, dword ptr [rdi+4F8h]
      vmovss  xmm12, dword ptr [rdi+4F4h]
      vmovss  xmm13, dword ptr [rdi+4F0h]
      vmovss  xmm14, dword ptr [rdi+4ECh]
      vmovss  xmm15, dword ptr [rdi+4E8h]
      vmovss  [rsp+1F8h+var_F4], xmm0
    }
    v86 = SND_FindAlias(_RDI->skydive_freefallAmbientSound.name);
    __asm
    {
      vandps  xmm6, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmulss  xmm5, xmm6, cs:__real@3cd013a9
      vmulss  xmm1, xmm7, xmm7
      vmulss  xmm0, xmm8, xmm8
      vaddss  xmm1, xmm1, xmm0
      vmovss  xmm0, [rsp+1F8h+arg_0]
      vsqrtss xmm2, xmm1, xmm1
      vmulss  xmm4, xmm2, cs:__real@3cd013a9
      vmovss  xmm1, [rsp+1F8h+var_F8]
      vmovss  xmm2, [rsp+1F8h+var_FC]
      vmovss  [rsp+1F8h+var_130], xmm5
      vmovss  [rsp+1F8h+var_138], xmm4
      vmovss  [rsp+1F8h+var_140], xmm0
      vmovss  xmm0, [rsp+1F8h+var_100]
      vmovss  [rsp+1F8h+var_148], xmm1
      vmovss  xmm1, [rsp+1F8h+var_104]
      vmovss  [rsp+1F8h+var_150], xmm2
      vmovss  xmm2, [rsp+1F8h+var_108]
      vmovss  [rsp+1F8h+var_158], xmm0
      vmovss  xmm0, [rsp+1F8h+var_10C]
      vmovss  [rsp+1F8h+var_160], xmm1
      vmovss  xmm1, [rsp+1F8h+var_110]
      vmovss  [rsp+1F8h+var_168], xmm2
      vmovss  xmm2, [rsp+1F8h+var_114]
      vmovss  [rsp+1F8h+var_170], xmm0
      vmovss  xmm0, [rsp+1F8h+var_118]
      vmovss  [rsp+1F8h+var_178], xmm1
      vmovss  [rsp+1F8h+var_180], xmm2
      vmovss  [rsp+1F8h+var_188], xmm0
      vmovss  xmm0, [rsp+1F8h+var_F4]
      vmovss  [rsp+1F8h+var_198], xmm9
      vmovss  [rsp+1F8h+var_1A0], xmm10
      vmovss  [rsp+1F8h+var_1A8], xmm11
      vmovss  [rsp+1F8h+var_1B0], xmm12
      vmovss  [rsp+1F8h+var_1B8], xmm13
      vmovss  [rsp+1F8h+var_1C0], xmm14
      vmovss  [rsp+1F8h+var_1C8], xmm15
      vmovss  [rsp+1F8h+ambientMinVolume], xmm0
    }
    CG_Skydive_PlaySounds(cgameGlob, _RBP->clientNum, &_RBP->origin, &cgameGlob->skydiveClientState.soundState.freefall, v86, ambientMinVolumea, v120, v122, v124, v126, v128, v130, v132, v78, v134, v136, v138, v140, v142, v144, v146, v148, v150, v152, v154, v156, (bool *)&v187, (bool *)&v188);
    v16 = v187;
    v17 = v188;
  }
  SndEntHandle = CG_GenerateSndEntHandle((const LocalClientNum_t)cgameGlob->localClientNum, _RBP->clientNum);
  __asm { vmovaps xmm15, [rsp+1F8h+var_E8] }
  v107 = SndEntHandle;
  __asm
  {
    vmovaps xmm14, [rsp+1F8h+var_D8]
    vmovaps xmm13, [rsp+1F8h+var_C8]
    vmovaps xmm12, [rsp+1F8h+var_B8]
    vmovaps xmm11, [rsp+1F8h+var_A8]
    vmovaps xmm10, [rsp+1F8h+var_98]
    vmovaps xmm9, [rsp+1F8h+var_88]
    vmovaps xmm8, [rsp+1F8h+var_78]
    vmovaps xmm7, [rsp+1F8h+var_68]
    vmovaps xmm6, [rsp+1F8h+var_58]
  }
  if ( v16 && !cgameGlob->skydiveClientState.soundState.freefall.stoppedAmbientSound )
  {
    SND_StopSoundAliasOnEnt(SndEntHandle, _RDI->skydive_freefallAmbientSound.name);
    cgameGlob->skydiveClientState.soundState.freefall.stoppedAmbientSound = 1;
  }
  if ( v17 && !cgameGlob->skydiveClientState.soundState.freefall.stoppedHighSpeedSound )
  {
    SND_StopSoundAliasOnEnt(v107, _RDI->skydive_freefallHighSpeedSound.name);
    cgameGlob->skydiveClientState.soundState.freefall.stoppedHighSpeedSound = 1;
  }
  if ( v18 && !cgameGlob->skydiveClientState.soundState.canopy.stoppedAmbientSound )
  {
    SND_StopSoundAliasOnEnt(v107, _RDI->skydive_canopyAmbientSound.name);
    cgameGlob->skydiveClientState.soundState.canopy.stoppedAmbientSound = 1;
  }
  if ( outStopHighSpeedSound && !cgameGlob->skydiveClientState.soundState.canopy.stoppedHighSpeedSound )
  {
    SND_StopSoundAliasOnEnt(v107, _RDI->skydive_canopyHighSpeedSound.name);
    cgameGlob->skydiveClientState.soundState.canopy.stoppedHighSpeedSound = 1;
  }
}

/*
==============
CG_Skydive_Update
==============
*/

void __fastcall CG_Skydive_Update(const LocalClientNum_t localClientNum, __int64 a2, double _XMM2_8, double _XMM3_8)
{
  cg_t *LocalClientGlobals; 
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
    __asm
    {
      vmovss  xmm3, [rsp+48h+outYawRate]
      vmovss  xmm2, [rsp+48h+outPitchRate]
    }
  }
  else
  {
    __asm
    {
      vxorps  xmm3, xmm3, xmm3; maxYawSpeed
      vxorps  xmm2, xmm2, xmm2; maxPitchSpeed
    }
  }
  CL_CapTurnRate(localClientNum, TURNRATECAPTYPE_SKYDIVE, *(float *)&_XMM2, *(float *)&_XMM3);
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
        __asm
        {
          vmovd   xmm0, dword ptr [rsp+88h+origin]
          vcvtdq2pd xmm0, xmm0
          vmovsd  xmm3, cs:__real@3f30000000000000
          vmulsd  xmm0, xmm0, xmm3
          vcvtsd2ss xmm1, xmm0, xmm0
          vmovss  dword ptr [rsp+88h+origin], xmm1
          vmovd   xmm2, dword ptr [rsp+88h+origin+4]
          vcvtdq2pd xmm2, xmm2
          vmulsd  xmm0, xmm2, xmm3
          vcvtsd2ss xmm1, xmm0, xmm0
          vmovss  dword ptr [rsp+88h+origin+4], xmm1
          vmovd   xmm2, dword ptr [rsp+88h+origin+8]
          vcvtdq2pd xmm2, xmm2
          vmulsd  xmm0, xmm2, xmm3
          vcvtsd2ss xmm1, xmm0, xmm0
          vmovss  dword ptr [rsp+88h+origin+8], xmm1
        }
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

