/*
==============
AimAssist_UpdateMouseRaw
==============
*/

void __fastcall AimAssist_UpdateMouseRaw(LocalClientNum_t localClientNum, float *mx, float *my)
{
  ?AimAssist_UpdateMouseRaw@@YAXW4LocalClientNum_t@@PEAM1@Z(localClientNum, mx, my);
}

/*
==============
AimAssist_GetMovingPlatformDataFromClient
==============
*/

CGMovingPlatformAimAssist *__fastcall AimAssist_GetMovingPlatformDataFromClient(LocalClientNum_t localClientNum)
{
  return ?AimAssist_GetMovingPlatformDataFromClient@@YAPEAVCGMovingPlatformAimAssist@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
AimAssist_ClearEntityReference
==============
*/

void __fastcall AimAssist_ClearEntityReference(LocalClientNum_t localClientNum, int entIndex)
{
  ?AimAssist_ClearEntityReference@@YAXW4LocalClientNum_t@@H@Z(localClientNum, entIndex);
}

/*
==============
AimAssist_InitDevGui
==============
*/

void AimAssist_InitDevGui(void)
{
  ?AimAssist_InitDevGui@@YAXXZ();
}

/*
==============
AimAssist_Init
==============
*/

void __fastcall AimAssist_Init(LocalClientNum_t localClientNum)
{
  ?AimAssist_Init@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
AimAssist_UpdateScreenTargets
==============
*/

void __fastcall AimAssist_UpdateScreenTargets(LocalClientNum_t localClientNum, const vec3_t *eyeOrg, const vec3_t *viewOrg, const vec3_t *viewAngles, float tanHalfFovX, float tanHalfFovY)
{
  ?AimAssist_UpdateScreenTargets@@YAXW4LocalClientNum_t@@AEBTvec3_t@@11MM@Z(localClientNum, eyeOrg, viewOrg, viewAngles, tanHalfFovX, tanHalfFovY);
}

/*
==============
AimAssist_UpdateAimAssistPlayerState
==============
*/

void __fastcall AimAssist_UpdateAimAssistPlayerState(LocalClientNum_t localClientNum, const playerState_s *ps)
{
  ?AimAssist_UpdateAimAssistPlayerState@@YAXW4LocalClientNum_t@@PEBUplayerState_s@@@Z(localClientNum, ps);
}

/*
==============
AimAssist_DrawDebugOverlay
==============
*/

void __fastcall AimAssist_DrawDebugOverlay(LocalClientNum_t localClientNum)
{
  ?AimAssist_DrawDebugOverlay@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
AimAssist_SetSlowAim
==============
*/

void __fastcall AimAssist_SetSlowAim(LocalClientNum_t localClientNum, const float slowAimPitchScale, const float slowAimYawScale)
{
  ?AimAssist_SetSlowAim@@YAXW4LocalClientNum_t@@MM@Z(localClientNum, slowAimPitchScale, slowAimYawScale);
}

/*
==============
AimAssist_BackupPlayerState
==============
*/

void __fastcall AimAssist_BackupPlayerState(LocalClientNum_t localClientNum, const playerState_s *ps, const vec3_t *playerVelocity)
{
  ?AimAssist_BackupPlayerState@@YAXW4LocalClientNum_t@@PEBUplayerState_s@@AEBTvec3_t@@@Z(localClientNum, ps, playerVelocity);
}

/*
==============
BG_AimAssist_ApplyAutoMelee
==============
*/

void __fastcall BG_AimAssist_ApplyAutoMelee(const BgHandler *pmoveHandler, const AimInput *input, AimOutput *output, const BgWeaponMap *weaponMap, const playerState_s *ps, AimAssistSharedGlobals *aaSharedGlob, const AimAssistSharedPlayerState *aaSharedPS, const WorldUpReferenceFrame *refFrame, const int gameTime)
{
  ?BG_AimAssist_ApplyAutoMelee@@YAXPEBVBgHandler@@PEBUAimInput@@PEAUAimOutput@@PEBVBgWeaponMap@@PEBUplayerState_s@@PEAUAimAssistSharedGlobals@@PEBUAimAssistSharedPlayerState@@PEBVWorldUpReferenceFrame@@H@Z(pmoveHandler, input, output, weaponMap, ps, aaSharedGlob, aaSharedPS, refFrame, gameTime);
}

/*
==============
AimAssist_ArchiveState
==============
*/

void __fastcall AimAssist_ArchiveState(LocalClientNum_t localClientNum, MemoryFile *memFile)
{
  ?AimAssist_ArchiveState@@YAXW4LocalClientNum_t@@PEAUMemoryFile@@@Z(localClientNum, memFile);
}

/*
==============
AimAssist_IsMeleeLockOnActive
==============
*/

bool __fastcall AimAssist_IsMeleeLockOnActive(LocalClientNum_t localClientNum)
{
  return ?AimAssist_IsMeleeLockOnActive@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
AimAssist_GetSharedGlobals
==============
*/

AimAssistSharedGlobals *__fastcall AimAssist_GetSharedGlobals(LocalClientNum_t localClientNum)
{
  return ?AimAssist_GetSharedGlobals@@YAPEAUAimAssistSharedGlobals@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
AimAssist_EntityInClipBounds
==============
*/

bool __fastcall AimAssist_EntityInClipBounds(LocalClientNum_t localClientNum, centity_t *cent)
{
  return ?AimAssist_EntityInClipBounds@@YA_NW4LocalClientNum_t@@PEAUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
AimAssist_UpdateGamePadInput
==============
*/

void __fastcall AimAssist_UpdateGamePadInput(const AimInput *input, AimOutput *output)
{
  ?AimAssist_UpdateGamePadInput@@YAXPEBUAimInput@@PEAUAimOutput@@@Z(input, output);
}

/*
==============
AimAssist_Setup
==============
*/

void __fastcall AimAssist_Setup(LocalClientNum_t localClientNum, const playerState_s *ps, int maxTargetCount)
{
  ?AimAssist_Setup@@YAXW4LocalClientNum_t@@PEBUplayerState_s@@H@Z(localClientNum, ps, maxTargetCount);
}

/*
==============
AimAssist_GetScreenTargetEntity
==============
*/

int __fastcall AimAssist_GetScreenTargetEntity(LocalClientNum_t localClientNum, int targetIndex)
{
  return ?AimAssist_GetScreenTargetEntity@@YAHW4LocalClientNum_t@@H@Z(localClientNum, targetIndex);
}

/*
==============
AimAssist_GetScreenTargetCount
==============
*/

int __fastcall AimAssist_GetScreenTargetCount(LocalClientNum_t localClientNum)
{
  return ?AimAssist_GetScreenTargetCount@@YAHW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
AimAssistCalcPointCacheCompare
==============
*/

int __fastcall AimAssistCalcPointCacheCompare(const void *c1, const void *c2)
{
  return ?AimAssistCalcPointCacheCompare@@YAHPEBX0@Z(c1, c2);
}

/*
==============
AimAssist_FreeClientMemory
==============
*/

void AimAssist_FreeClientMemory(void)
{
  ?AimAssist_FreeClientMemory@@YAXXZ();
}

/*
==============
AimAssist_UpdateMouseInput
==============
*/

void __fastcall AimAssist_UpdateMouseInput(const AimInput *input, AimOutput *output)
{
  ?AimAssist_UpdateMouseInput@@YAXPEBUAimInput@@PEAUAimOutput@@@Z(input, output);
}

/*
==============
AimAssist_ClearSlowAim
==============
*/

void __fastcall AimAssist_ClearSlowAim(LocalClientNum_t localClientNum)
{
  ?AimAssist_ClearSlowAim@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
AimAssistCalcPointCacheCompare
==============
*/
__int64 AimAssistCalcPointCacheCompare(const void *c1, const void *c2)
{
  char v2; 

  __asm
  {
    vmovss  xmm1, dword ptr [rcx+10h]
    vmovss  xmm0, dword ptr [rcx+0Ch]
    vmovss  xmm3, dword ptr [rdx+10h]
    vmulss  xmm2, xmm0, xmm0
    vmovss  xmm0, dword ptr [rdx+0Ch]
    vmulss  xmm1, xmm1, xmm1
    vaddss  xmm4, xmm2, xmm1
    vmulss  xmm2, xmm0, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm5, xmm2, xmm1
    vcomiss xmm4, xmm5
  }
  if ( v2 )
    return 0xFFFFFFFFi64;
  __asm { vcomiss xmm4, xmm5 }
  return 0i64;
}

/*
==============
AimAssist_AddToTargetList
==============
*/
void AimAssist_AddToTargetList(AimAssistGlobals *aaGlob, const AimScreenTarget *screenTarget)
{
  const dvar_t *v9; 
  const dvar_t *v17; 
  int screenTargetCount; 
  int v20; 
  __int64 v24; 
  int maxTargetCount; 
  int v28; 
  char v40; 

  __asm { vmovaps [rsp+98h+var_28], xmm6 }
  _R14 = screenTarget;
  __asm
  {
    vmovaps [rsp+98h+var_38], xmm7
    vmovaps [rsp+98h+var_48], xmm8
  }
  if ( !aaGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 814, ASSERT_TYPE_ASSERT, "(aaGlob)", (const char *)&queryFormat, "aaGlob") )
    __debugbreak();
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 815, ASSERT_TYPE_ASSERT, "(screenTarget)", (const char *)&queryFormat, "screenTarget") )
    __debugbreak();
  if ( aaGlob->maxTargetCount > 0x20u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 818, ASSERT_TYPE_ASSERT, "( aaGlob->maxTargetCount ) <= ( ( sizeof( *array_counter( aaGlob->aaSharedGlob.screenTargets ) ) + 0 ) )", "%s <= %s\n\t%i, %i", "aaGlob->maxTargetCount", "ARRAY_COUNT( aaGlob->aaSharedGlob.screenTargets )", aaGlob->maxTargetCount, 32) )
    __debugbreak();
  _RBX = DCONST_DVARFLT_aim_slowdown_prioritization_dist_prop;
  if ( !DCONST_DVARFLT_aim_slowdown_prioritization_dist_prop && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_slowdown_prioritization_dist_prop") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm7, dword ptr [rbx+28h] }
  v9 = DCONST_DVARFLT_aim_slowdown_prioritization_dist_prop;
  if ( !DCONST_DVARFLT_aim_slowdown_prioritization_dist_prop && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_slowdown_prioritization_dist_prop") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vaddss  xmm1, xmm6, dword ptr [rbx+28h]
  }
  _RBX = DCONST_DVARMPFLT_aim_slowdown_prioritization_crosshair_dist_prop;
  __asm
  {
    vaddss  xmm0, xmm7, xmm6
    vmulss  xmm1, xmm1, xmm0
    vsubss  xmm8, xmm1, xmm6
  }
  if ( !DCONST_DVARMPFLT_aim_slowdown_prioritization_crosshair_dist_prop && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_slowdown_prioritization_crosshair_dist_prop") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm7, dword ptr [rbx+28h] }
  v17 = DCONST_DVARMPFLT_aim_slowdown_prioritization_crosshair_dist_prop;
  if ( !DCONST_DVARMPFLT_aim_slowdown_prioritization_crosshair_dist_prop && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_slowdown_prioritization_crosshair_dist_prop") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  __asm { vaddss  xmm2, xmm6, dword ptr [rbx+28h] }
  screenTargetCount = aaGlob->aaSharedGlob.screenTargetCount;
  v20 = 0;
  __asm
  {
    vaddss  xmm1, xmm7, xmm6
    vmulss  xmm2, xmm2, xmm1
    vsubss  xmm6, xmm2, xmm6
  }
  if ( screenTargetCount > 0 )
  {
    do
    {
      v24 = (screenTargetCount + v20) / 2;
      __asm
      {
        vmovaps xmm3, xmm6; crosshairDistClosePropTest
        vmovaps xmm2, xmm8; distClosePropTest
      }
      if ( AimAssist_CompareTargets(_R14, &aaGlob->aaSharedGlob.screenTargets[v24], *(float *)&_XMM2, *(float *)&_XMM3) <= 0 )
        v20 = v24 + 1;
      else
        screenTargetCount = (screenTargetCount + v20) / 2;
    }
    while ( v20 < screenTargetCount );
  }
  maxTargetCount = aaGlob->maxTargetCount;
  if ( v20 < maxTargetCount )
  {
    v28 = aaGlob->aaSharedGlob.screenTargetCount;
    if ( v28 == maxTargetCount )
      aaGlob->aaSharedGlob.screenTargetCount = --v28;
    _RBX = &aaGlob->aaSharedGlob.screenTargets[v20];
    memmove_0(&aaGlob->aaSharedGlob.screenTargets[v20 + 1], _RBX, 72i64 * (v28 - v20));
    __asm
    {
      vmovups ymm0, ymmword ptr [r14]
      vmovups ymmword ptr [rbx], ymm0
      vmovups ymm1, ymmword ptr [r14+20h]
      vmovups ymmword ptr [rbx+20h], ymm1
      vmovsd  xmm0, qword ptr [r14+40h]
      vmovsd  qword ptr [rbx+40h], xmm0
    }
    ++aaGlob->aaSharedGlob.screenTargetCount;
  }
  __asm { vmovaps xmm6, [rsp+98h+var_28] }
  _R11 = &v40;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm7, [rsp+98h+var_38]
  }
}

/*
==============
AimAssist_AdvancedCalcSlowdown
==============
*/
void AimAssist_AdvancedCalcSlowdown(const AimInput *input, float *pitchScale, float *yawScale)
{
  const dvar_t *v23; 
  const dvar_t *v26; 
  bool v36; 
  AimTargetFlags v41; 
  AimTargetFlags v49; 
  char v84; 
  char v85; 
  char v86; 
  const dvar_t *v114; 
  const dvar_t *v130; 
  const dvar_t *v137; 
  bool v144; 
  char v145; 
  char v146; 
  const dvar_t *v150; 
  const dvar_t *v160; 
  char v178; 
  char v179; 
  const dvar_t *v182; 
  const dvar_t *v186; 
  char v187; 
  const dvar_t *v188; 
  char v195; 
  char v196; 
  float fmt; 
  float fmta; 
  vec2_t outScreenTarget; 
  float outAimAssistRange[2]; 
  vec2_t v210; 
  vec2_t v; 
  vec3_t outVec; 
  tmat33_t<vec3_t> outAxis; 

  __asm { vmovaps [rsp+170h+var_50], xmm7 }
  _R14 = yawScale;
  _RSI = pitchScale;
  _RBX = input;
  if ( !input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1833, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1834, ASSERT_TYPE_ASSERT, "(pitchScale)", (const char *)&queryFormat, "pitchScale") )
    __debugbreak();
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1835, ASSERT_TYPE_ASSERT, "(yawScale)", (const char *)&queryFormat, "yawScale") )
    __debugbreak();
  AimAssist_ResetSlowdownScale(_RSI, _R14);
  _RDI = AimAssist_GetClientGlobals(_RBX->localClientNum);
  __asm { vxorps  xmm7, xmm7, xmm7 }
  outScreenTarget = 0i64;
  _RDI->corner1 = 0i64;
  _RDI->corner2 = 0i64;
  _RDI->perpInput = 0i64;
  _RDI->input = 0i64;
  _RDI->usingNearMissSlowdown = 0;
  __asm
  {
    vmovss  xmm2, dword ptr [rdi+22Ch]; regionHeight
    vmovss  xmm1, dword ptr [rdi+228h]; regionWidth
    vmovss  [rsp+170h+var_128], xmm7
  }
  if ( AimAssist_CalcSlowdown_ForRegion(_RBX, *(float *)&_XMM1, *(float *)&_XMM2, _RSI, _R14, (const AimScreenTarget **)&outScreenTarget, outAimAssistRange) )
  {
    _R12 = outScreenTarget;
    __asm
    {
      vmovaps [rsp+170h+var_40], xmm6
      vmovaps [rsp+170h+var_60], xmm8
      vmovaps [rsp+170h+var_70], xmm9
      vmovaps [rsp+170h+var_A0], xmm12
      vmovaps [rsp+170h+var_B0], xmm13
      vmovaps [rsp+170h+var_D0], xmm15
      vmovss  xmm8, cs:__real@3f800000
    }
    if ( outScreenTarget )
    {
      v23 = DCONST_DVARFLT_aim_slowdown_far_assist_max_range_factor;
      if ( !DCONST_DVARFLT_aim_slowdown_far_assist_max_range_factor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_slowdown_far_assist_max_range_factor") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v23);
      __asm
      {
        vmovss  xmm6, [rsp+170h+var_128]
        vmulss  xmm9, xmm6, dword ptr [r15+28h]
      }
      v26 = DCONST_DVARFLT_aim_slowdown_far_assist_min_range_factor;
      if ( !DCONST_DVARFLT_aim_slowdown_far_assist_min_range_factor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_slowdown_far_assist_min_range_factor") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v26);
      __asm
      {
        vmovss  xmm0, dword ptr [r12+34h]
        vmulss  xmm1, xmm6, dword ptr [r15+28h]; min
        vsqrtss xmm0, xmm0, xmm0; value
        vmovaps xmm2, xmm9; max
      }
      *(double *)&_XMM0 = ApplyLinearMap(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmulss  xmm1, xmm0, dword ptr [rsi]
        vsubss  xmm3, xmm8, xmm0
        vaddss  xmm2, xmm1, xmm3
        vmovss  dword ptr [rsi], xmm2
        vmulss  xmm0, xmm0, dword ptr [r14]
        vaddss  xmm1, xmm0, xmm3
        vmovss  dword ptr [r14], xmm1
      }
    }
    else
    {
      AimAssist_ResetSlowdownScale(_RSI, _R14);
    }
    if ( !_RDI->ps.sharedPS.weapon.weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1876, ASSERT_TYPE_ASSERT, "(aaGlob->ps.sharedPS.weapon.weaponIdx != 0)", (const char *)&queryFormat, "aaGlob->ps.sharedPS.weapon.weaponIdx != WP_NONE") )
      __debugbreak();
    __asm
    {
      vmovss  xmm6, dword ptr [rdi+184h]
      vmovaps [rsp+170h+var_80], xmm10
      vmovaps [rsp+170h+var_90], xmm11
    }
    v36 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&_RDI->ps.sharedPS.weapFlags, ACTIVE, 0x11u);
    __asm { vmovaps xmm3, xmm6; adsLerp }
    *(float *)&_XMM0 = AimAssist_GetAimAssistRange(_RDI, &_RDI->ps.sharedPS.weapon, v36, *(float *)&_XMM3);
    __asm
    {
      vmovss  xmm1, dword ptr [rdi+234h]
      vmovss  xmm3, dword ptr [rdi+230h]; regionWidth
      vmovaps xmm2, xmm0; range
    }
    LOBYTE(v41) = 1;
    __asm
    {
      vmovss  dword ptr [rsp+170h+fmt], xmm1
      vmovaps xmm6, xmm0
    }
    _R15 = AimAssist_GetBestTarget(&_RDI->aaSharedGlob, v41, *(float *)&_XMM2, *(float *)&_XMM3, fmt);
    __asm
    {
      vmovss  xmm9, dword ptr cs:__xmm@80000000800000008000000080000000
      vmovss  xmm1, dword ptr [rbx+18h]
      vmovss  xmm15, dword ptr [rbx+0Ch]
      vxorps  xmm13, xmm1, xmm9
      vxorps  xmm12, xmm15, xmm9
      vmovss  dword ptr [rsp+170h+v], xmm13
      vmovss  dword ptr [rsp+170h+var_130], xmm12
    }
    if ( _R15 )
    {
      _R12 = DCONST_DVARFLT_aim_slowdown_blend_rate;
      __asm { vmovaps [rsp+170h+var_C0], xmm14 }
      if ( !DCONST_DVARFLT_aim_slowdown_blend_rate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_slowdown_blend_rate") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_R12);
      __asm
      {
        vmovss  xmm0, dword ptr [r12+28h]
        vmulss  xmm1, xmm0, dword ptr [rbx]
        vaddss  xmm0, xmm1, dword ptr [rdi+0DD8h]; val
        vxorps  xmm1, xmm1, xmm1; min
        vmovaps xmm2, xmm8; max
        vmovss  dword ptr [rdi+0DD8h], xmm0
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovss  dword ptr [rdi+0DD8h], xmm0 }
      v114 = DCONST_DVARFLT_aim_slowdown_standard_smoothing_percent_step;
      if ( !DCONST_DVARFLT_aim_slowdown_standard_smoothing_percent_step && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_slowdown_standard_smoothing_percent_step") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v114);
      __asm
      {
        vmovss  xmm1, dword ptr [rbx+18h]
        vmovss  xmm0, dword ptr [rbx+0Ch]
        vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vandps  xmm1, xmm1, xmm6
        vandps  xmm0, xmm0, xmm6
        vmaxss  xmm0, xmm1, xmm0
        vmaxss  xmm1, xmm0, dword ptr [r12+28h]
        vaddss  xmm2, xmm1, dword ptr [rdi+0DD8h]
        vmaxss  xmm0, xmm2, xmm7
        vminss  xmm12, xmm0, xmm8
      }
      WorldUpReferenceFrame::RemoveReferenceFrameFromVector(&_RDI->refFrame, &_R15->velocity, &outVec);
      WorldUpReferenceFrame::RemoveReferenceFrameFromAxis(&_RDI->refFrame, &_RDI->viewAxis, &outAxis);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+170h+outAxis+0Ch]
        vmovss  xmm1, dword ptr [rbp+70h+outAxis+10h]
        vmulss  xmm3, xmm0, dword ptr [rsp+170h+outVec]
        vmulss  xmm2, xmm1, dword ptr [rsp+170h+outVec+4]
        vmovss  xmm0, dword ptr [rbp+70h+outAxis+14h]
      }
      v130 = DCONST_DVARFLT_aim_slowdown_target_motion_horiz_speed_max;
      __asm
      {
        vmulss  xmm1, xmm0, dword ptr [rsp+170h+outVec+8]
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm10, xmm4, xmm1
      }
      if ( !DCONST_DVARFLT_aim_slowdown_target_motion_horiz_speed_max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_slowdown_target_motion_horiz_speed_max") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v130);
      __asm
      {
        vdivss  xmm0, xmm10, dword ptr [rbx+28h]; val
        vmovss  xmm1, cs:__real@bf800000; min
        vmovaps xmm2, xmm8; max
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      v137 = DCONST_DVARFLT_aim_slowdown_target_motion_sweet_spot_offset_x;
      __asm
      {
        vxorps  xmm11, xmm0, xmm9
        vmovss  xmm0, dword ptr [r15+0Ch]
        vsubss  xmm10, xmm0, dword ptr [r15+4]
        vmovss  xmm0, dword ptr [r15+10h]
        vsubss  xmm14, xmm0, dword ptr [r15+8]
        vandps  xmm1, xmm11, xmm6
        vcomiss xmm1, cs:__real@3a83126f
        vmovss  dword ptr [rsp+170h+var_120], xmm11
      }
      v144 = !(v84 | v85);
      if ( !DCONST_DVARFLT_aim_slowdown_target_motion_sweet_spot_offset_x && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_slowdown_target_motion_sweet_spot_offset_x") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v137);
      __asm
      {
        vucomiss xmm13, xmm7
        vmulss  xmm0, xmm10, xmm11
        vmulss  xmm11, xmm0, dword ptr [rbx+28h]
      }
      if ( v146 )
      {
        __asm { vxorps  xmm2, xmm2, xmm2 }
      }
      else
      {
        v150 = DCONST_DVARFLT_aim_slowdown_controller_sweet_spot_offset_x;
        if ( !DCONST_DVARFLT_aim_slowdown_controller_sweet_spot_offset_x && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_slowdown_controller_sweet_spot_offset_x") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v150);
        __asm
        {
          vxorps  xmm1, xmm10, xmm9
          vcmpless xmm0, xmm7, xmm13
          vblendvps xmm0, xmm1, xmm10, xmm0
          vmulss  xmm2, xmm0, dword ptr [rbx+28h]
        }
      }
      __asm
      {
        vandps  xmm0, xmm2, xmm6
        vandps  xmm1, xmm11, xmm6
        vmovss  xmm6, cs:__real@80000000
        vucomiss xmm15, xmm6
        vcmpltss xmm1, xmm0, xmm1
        vblendvps xmm0, xmm2, xmm11, xmm1
        vmovss  [rsp+170h+var_128], xmm0
      }
      if ( v146 )
      {
        __asm { vxorps  xmm3, xmm3, xmm3 }
      }
      else
      {
        v160 = DCONST_DVARFLT_aim_slowdown_controller_sweet_spot_offset_y;
        if ( !DCONST_DVARFLT_aim_slowdown_controller_sweet_spot_offset_y && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_slowdown_controller_sweet_spot_offset_y") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v160);
        __asm
        {
          vxorps  xmm1, xmm14, xmm9
          vcmpless xmm0, xmm15, xmm6
          vblendvps xmm0, xmm1, xmm14, xmm0
          vmulss  xmm3, xmm0, dword ptr [rbx+28h]
        }
      }
      __asm
      {
        vmovss  xmm0, dword ptr [r15+4]
        vaddss  xmm1, xmm0, dword ptr [r15+0Ch]
        vmulss  xmm11, xmm1, cs:__real@3f000000
        vaddss  xmm14, xmm11, [rsp+170h+var_128]
        vmovss  xmm2, dword ptr [r15+8]
        vaddss  xmm0, xmm2, dword ptr [r15+10h]
        vmulss  xmm13, xmm0, cs:__real@bf000000
        vxorps  xmm1, xmm14, xmm9
        vaddss  xmm15, xmm13, xmm3
        vxorps  xmm0, xmm15, xmm9
        vmovss  [rsp+170h+var_128], xmm0
        vmulss  xmm0, xmm1, dword ptr [rsp+170h+var_120]
        vcomiss xmm0, xmm7
        vxorps  xmm10, xmm10, xmm10
        vxorps  xmm9, xmm9, xmm9
      }
      if ( v145 | v146 )
      {
        if ( !v144 )
        {
          __asm
          {
            vmulss  xmm0, xmm1, dword ptr [rsp+170h+v]
            vcomiss xmm0, xmm7
          }
        }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_aim_slowdown_standard_slowdown_yaw, "aim_slowdown_standard_slowdown_yaw");
        __asm
        {
          vmulss  xmm1, xmm0, xmm12
          vsubss  xmm6, xmm8, xmm1
        }
      }
      else
      {
        v182 = DCONST_DVARFLT_aim_slowdown_max_factor_yaw;
        if ( !DCONST_DVARFLT_aim_slowdown_max_factor_yaw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_slowdown_max_factor_yaw") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v182);
        __asm
        {
          vmulss  xmm0, xmm12, dword ptr [rbx+28h]
          vsubss  xmm6, xmm8, xmm0
          vmovaps xmm10, xmm8
        }
      }
      __asm
      {
        vmovss  xmm0, [rsp+170h+var_128]
        vmulss  xmm0, xmm0, dword ptr [rsp+170h+var_130]
        vcomiss xmm0, xmm7
      }
      if ( v178 | v179 )
      {
        v188 = DCONST_DVARFLT_aim_slowdown_standard_slowdown_pitch;
        if ( !DCONST_DVARFLT_aim_slowdown_standard_slowdown_pitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_slowdown_standard_slowdown_pitch") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v188);
      }
      else
      {
        v186 = DCONST_DVARFLT_aim_slowdown_max_factor_pitch;
        if ( !DCONST_DVARFLT_aim_slowdown_max_factor_pitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_slowdown_max_factor_pitch") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v186);
        __asm { vmovaps xmm9, xmm8 }
      }
      __asm
      {
        vucomiss xmm10, xmm7
        vmulss  xmm0, xmm12, dword ptr [rbx+28h]
        vsubss  xmm1, xmm8, xmm0
        vmovss  xmm0, dword ptr [rsi]
        vminss  xmm1, xmm0, xmm1
        vmovss  dword ptr [rsi], xmm1
        vminss  xmm2, xmm6, dword ptr [r14]
        vmovss  dword ptr [r14], xmm2
        vmovss  dword ptr [rdi+0DDCh], xmm14
        vmovaps xmm14, [rsp+170h+var_C0]
        vmovss  dword ptr [rdi+0DE0h], xmm15
        vmovss  dword ptr [rdi+0DE4h], xmm11
        vmovss  dword ptr [rdi+0DE8h], xmm13
      }
      if ( v187 )
      {
        v187 = 1;
        v195 = 0;
      }
      else
      {
        v195 = 1;
      }
      __asm { vucomiss xmm9, xmm7 }
      _RDI->usingMaxX = v195;
      if ( v187 )
        v196 = 0;
      else
        v196 = 1;
      _RDI->usingMaxY = v196;
      _RDI->corner1 = 0i64;
      _RDI->corner2 = 0i64;
      goto LABEL_89;
    }
    if ( AimAssist_UsingEnhancedSlowdown(_RBX->localClientNum) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+1FCh]
        vmovss  xmm3, dword ptr [rdi+1F8h]; regionWidth
        vmovaps xmm2, xmm6; range
      }
      LOBYTE(v49) = 1;
      __asm { vmovss  dword ptr [rsp+170h+fmt], xmm0 }
      _RAX = AimAssist_GetBestTarget(&_RDI->aaSharedGlob, v49, *(float *)&_XMM2, *(float *)&_XMM3, fmta);
      _RBX = _RAX;
      if ( _RAX )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rax+4]
          vaddss  xmm3, xmm0, dword ptr [rax+0Ch]
          vmulss  xmm10, xmm3, cs:__real@3f000000
          vmovss  xmm0, dword ptr [rax+10h]
          vaddss  xmm1, xmm0, dword ptr [rax+8]
          vmulss  xmm11, xmm1, cs:__real@3f000000
          vmulss  xmm0, xmm3, xmm3
          vmulss  xmm2, xmm0, cs:__real@3e800000
          vxorps  xmm6, xmm11, xmm9
          vmulss  xmm1, xmm6, xmm6
          vaddss  xmm2, xmm2, xmm1
          vsqrtss xmm3, xmm2, xmm2
          vcmpless xmm0, xmm3, cs:__real@80000000
          vblendvps xmm0, xmm3, xmm8, xmm0
          vdivss  xmm5, xmm8, xmm0
          vmulss  xmm1, xmm12, xmm12
          vmulss  xmm0, xmm13, xmm13
          vaddss  xmm1, xmm1, xmm0
          vsqrtss xmm2, xmm1, xmm1
          vcmpless xmm0, xmm2, cs:__real@80000000
          vblendvps xmm0, xmm2, xmm8, xmm0
          vdivss  xmm1, xmm8, xmm0
          vmulss  xmm2, xmm1, xmm13
          vmulss  xmm4, xmm1, xmm12
          vmulss  xmm1, xmm5, xmm6
          vmulss  xmm0, xmm5, xmm10
          vmulss  xmm3, xmm0, xmm2
          vmovss  [rsp+170h+var_128], xmm2
          vmulss  xmm2, xmm1, xmm4
          vaddss  xmm6, xmm3, xmm2
          vmovss  [rsp+170h+var_128+4], xmm4
        }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_aim_slowdown_near_miss_deflection_dot, "aim_slowdown_near_miss_deflection_dot");
        __asm { vcomiss xmm6, xmm0 }
        if ( !(v84 | v85) )
        {
          __asm
          {
            vcomiss xmm10, xmm7
            vcomiss xmm11, xmm7
          }
          if ( v84 | v85 )
          {
            if ( !v84 )
            {
LABEL_29:
              v86 = 0;
LABEL_30:
              __asm
              {
                vmovss  xmm0, dword ptr [rbx+8]
                vmovss  xmm2, dword ptr [rbx+10h]
                vxorps  xmm1, xmm0, xmm9
                vxorps  xmm0, xmm2, xmm9
                vmovss  dword ptr [rsp+170h+var_130+4], xmm0
                vmovss  dword ptr [rsp+170h+v+4], xmm1
              }
              if ( v86 )
                __asm { vmovss  xmm0, dword ptr [rbx+0Ch] }
              else
                __asm { vmovss  xmm0, dword ptr [rbx+4] }
              __asm { vmovss  dword ptr [rsp+170h+v], xmm0 }
              if ( v86 )
                __asm { vmovss  xmm0, dword ptr [rbx+4] }
              else
                __asm { vmovss  xmm0, dword ptr [rbx+0Ch] }
              _RDI->corner1 = v;
              __asm { vmovss  dword ptr [rsp+170h+var_130], xmm0 }
              _RDI->corner2 = outScreenTarget;
              Vec2NormalizeFast(&v);
              Vec2NormalizeFast(&outScreenTarget);
              __asm
              {
                vxorps  xmm0, xmm12, xmm9
                vmovss  dword ptr [rsp+170h+var_120], xmm0
                vmovss  dword ptr [rsp+170h+var_120+4], xmm13
                vmovss  xmm3, dword ptr [rsp+170h+var_120+4]
                vmulss  xmm0, xmm3, dword ptr [rsp+170h+var_130+4]
                vmovss  xmm2, dword ptr [rsp+170h+var_120]
                vmulss  xmm1, xmm2, dword ptr [rsp+170h+var_130]
                vmulss  xmm2, xmm2, dword ptr [rsp+170h+v]
                vaddss  xmm4, xmm1, xmm0
                vmulss  xmm1, xmm3, dword ptr [rsp+170h+v+4]
                vaddss  xmm0, xmm2, xmm1
                vmulss  xmm3, xmm4, xmm0
                vcomiss xmm3, xmm7
              }
              _RDI->perpInput = v210;
              _RDI->input = *(vec2_t *)outAimAssistRange;
              _RDI->usingNearMissSlowdown = !(v84 | v85);
              if ( !(v84 | v85) )
              {
                Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_aim_slowdown_max_factor_near_miss_pitch, "aim_slowdown_max_factor_near_miss_pitch");
                __asm
                {
                  vsubss  xmm1, xmm8, xmm0
                  vmovss  xmm0, dword ptr [rsi]
                  vminss  xmm1, xmm0, xmm1
                  vmovss  dword ptr [rsi], xmm1
                }
                Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_aim_slowdown_max_factor_near_miss_yaw, "aim_slowdown_max_factor_near_miss_yaw");
                __asm
                {
                  vsubss  xmm0, xmm8, xmm0
                  vminss  xmm1, xmm0, dword ptr [r14]
                  vmovss  dword ptr [r14], xmm1
                }
              }
              goto LABEL_89;
            }
          }
          else if ( v84 )
          {
            goto LABEL_29;
          }
          v86 = 1;
          goto LABEL_30;
        }
      }
    }
    else
    {
      *(_QWORD *)&_RDI->slowDownFrac = 0i64;
      *(_QWORD *)&_RDI->sweetSpotY = 0i64;
      _RDI->centerTargetY = 0.0;
      *(_WORD *)&_RDI->usingMaxX = 0;
      _RDI->corner1 = 0i64;
      _RDI->corner2 = 0i64;
      _RDI->perpInput = 0i64;
      _RDI->input = 0i64;
      _RDI->usingNearMissSlowdown = 0;
    }
LABEL_89:
    __asm
    {
      vmovaps xmm11, [rsp+170h+var_90]
      vmovaps xmm10, [rsp+170h+var_80]
      vmovaps xmm12, [rsp+170h+var_A0]
      vmovaps xmm13, [rsp+170h+var_B0]
      vmovaps xmm9, [rsp+170h+var_70]
      vmovaps xmm8, [rsp+170h+var_60]
      vmovaps xmm6, [rsp+170h+var_40]
      vmovaps xmm15, [rsp+170h+var_D0]
    }
  }
  __asm { vmovaps xmm7, [rsp+170h+var_50] }
}

/*
==============
AimAssist_ApplyAutoAim
==============
*/
void AimAssist_ApplyAutoAim(const AimInput *input, AimOutput *output)
{
  int ControllerFromClient; 
  bool v12; 
  bool autoAim; 
  const dvar_t *v14; 
  bool v15; 
  bool v54; 
  int autoAimPressed; 
  bool v56; 
  int weaponState; 
  bool v58; 
  AimTargetFlags v61; 
  const AimScreenTarget *BestTarget; 
  const AimScreenTarget *v64; 
  char v68; 
  char v82; 
  char v83; 
  float fmt; 
  vec3_t outAngles; 
  vec3_t angles; 
  float v0; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> in1; 
  tmat33_t<vec3_t> v123; 

  _RDI = input;
  _R15 = output;
  if ( !input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 2371, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 2372, ASSERT_TYPE_ASSERT, "(output)", (const char *)&queryFormat, "output") )
    __debugbreak();
  _RBX = AimAssist_GetClientGlobals(_RDI->localClientNum);
  ControllerFromClient = CL_Mgr_GetControllerFromClient(_RDI->localClientNum);
  v12 = 0;
  autoAim = GamerProfile_GetProfileSettings(ControllerFromClient)->config.autoAim;
  if ( (_RBX->ps.linkFlags.m_flags[0] & 4) == 0 )
    v12 = autoAim;
  if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_LADDER_CLIMB) )
    goto LABEL_50;
  v14 = DCONST_DVARBOOL_aim_autoaim_enabled;
  if ( !DCONST_DVARBOOL_aim_autoaim_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_autoaim_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  if ( v14->current.enabled && (_RDI->buttons & 0x200) != 0 && !_RBX->ps.isDualWielding && v12 && _RBX->ps.sharedPS.weapon.weaponIdx && !_RBX->ps.isUsingOffhand && (v15 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&_RBX->ps.sharedPS.weapFlags, ACTIVE, 0x11u), BG_GetWeaponType(&_RBX->ps.sharedPS.weapon, v15) != WEAPTYPE_RIOTSHIELD) )
  {
    __asm
    {
      vmovaps [rsp+1B0h+var_60], xmm9
      vmovaps [rsp+1B0h+var_70], xmm10
      vmovaps [rsp+1B0h+var_80], xmm11
      vmovaps [rsp+1B0h+var_90], xmm12
    }
    WorldUpReferenceFrame::GetAngles(&_RBX->refFrame, &outAngles);
    __asm
    {
      vmovss  xmm9, cs:__real@3b360b61
      vmovss  xmm11, cs:__real@3f000000
      vmovss  xmm12, cs:__real@43b40000
      vmulss  xmm3, xmm9, dword ptr [rsp+1B0h+outAngles]
      vmulss  xmm4, xmm9, dword ptr [rsp+1B0h+outAngles+4]
      vaddss  xmm1, xmm3, xmm11
      vxorps  xmm10, xmm10, xmm10
      vroundss xmm2, xmm10, xmm1, 1
      vsubss  xmm0, xmm3, xmm2
      vmulss  xmm0, xmm0, xmm12
      vmovss  dword ptr [rsp+1B0h+outAngles], xmm0
      vaddss  xmm2, xmm4, xmm11
      vroundss xmm3, xmm10, xmm2, 1
      vsubss  xmm0, xmm4, xmm3
      vmulss  xmm3, xmm9, dword ptr [rsp+1B0h+outAngles+8]
      vmulss  xmm1, xmm0, xmm12
      vmovss  dword ptr [rsp+1B0h+outAngles+4], xmm1
      vaddss  xmm1, xmm3, xmm11
      vroundss xmm2, xmm10, xmm1, 1
      vsubss  xmm0, xmm3, xmm2
      vmulss  xmm1, xmm0, xmm12
      vmovss  dword ptr [rsp+1B0h+outAngles+8], xmm1
      vmovss  xmm0, dword ptr [rbx+1B4h]
      vmovss  [rsp+1B0h+v0], xmm0
      vmovss  xmm4, dword ptr [rbx+1B8h]
      vmulss  xmm3, xmm0, xmm9
      vaddss  xmm1, xmm3, xmm11
      vroundss xmm2, xmm10, xmm1, 1
      vsubss  xmm0, xmm3, xmm2
      vmovss  [rsp+1B0h+var_14C], xmm4
      vmovss  xmm5, dword ptr [rbx+1BCh]
      vmulss  xmm1, xmm0, xmm12
      vmulss  xmm4, xmm4, xmm9
      vaddss  xmm2, xmm4, xmm11
      vroundss xmm3, xmm10, xmm2, 1
      vsubss  xmm0, xmm4, xmm3
      vmulss  xmm4, xmm9, xmm5
      vaddss  xmm2, xmm4, xmm11
      vroundss xmm3, xmm10, xmm2, 1
      vmovss  xmm2, cs:__real@3a83126f; epsilon
      vmovss  [rsp+1B0h+v0], xmm1
      vmulss  xmm1, xmm0, xmm12
      vsubss  xmm0, xmm4, xmm3
      vmovss  [rsp+1B0h+var_14C], xmm1
      vmulss  xmm1, xmm0, xmm12
      vmovss  [rsp+1B0h+var_148], xmm1
    }
    v54 = VecNCompareCustomEpsilon(&v0, outAngles.v, *(float *)&_XMM2, 3);
    autoAimPressed = _RBX->autoAimPressed;
    v56 = !v54;
    if ( !autoAimPressed && (_RDI->buttons & 0x200) != 0 || CGMovingPlatformAimAssist::HadAutoAimTimeout(&_RBX->moverData, autoAimPressed) || v56 )
    {
      weaponState = _RBX->ps.sharedPS.weaponState;
      if ( (unsigned int)(weaponState - 18) > 3 && weaponState != 78 )
      {
        v58 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&_RBX->ps.sharedPS.weapFlags, ACTIVE, 0x11u);
        *(float *)&_XMM0 = AimAssist_GetAutoAimRange(&_RBX->ps.sharedPS.weapon, v58);
        __asm
        {
          vmovss  xmm1, dword ptr [rbx+204h]
          vmovss  xmm3, dword ptr [rbx+200h]; regionWidth
        }
        LOBYTE(v61) = 1;
        __asm
        {
          vmovaps xmm2, xmm0; range
          vmovss  dword ptr [rsp+1B0h+fmt], xmm1
        }
        BestTarget = AimAssist_GetBestTarget(&_RBX->aaSharedGlob, v61, *(float *)&_XMM2, *(float *)&_XMM3, fmt);
        v64 = BestTarget;
        if ( BestTarget )
        {
          if ( _RBX->ps.commandTimeMs > _RBX->autoAimNextPressTime && (!_RBX->autoAimPressed || BestTarget->entIndex == _RBX->autoAimTargetEnt) )
          {
            _RBX->autoAimNextPressTime = _RBX->ps.commandTimeMs + Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_aim_autoaim_delay, "aim_autoaim_delay");
            if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 2320, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::AUTOAIM ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::AUTOAIM )") )
              __debugbreak();
            AimAssist_ClearAutoAimTarget(_RBX);
            _RBX->autoAimTargetEnt = v64->entIndex;
            _RBX->autoAimActive = 1;
            __asm
            {
              vmovss  xmm0, dword ptr [rbx+1E4h]
              vmovss  xmm1, dword ptr [rbx+1E8h]
              vmovss  dword ptr [rsp+1B0h+angles], xmm0
              vmovss  xmm0, dword ptr [rbx+1ECh]
              vmovss  dword ptr [rsp+1B0h+angles+8], xmm0
              vmovss  dword ptr [rsp+1B0h+angles+4], xmm1
            }
            WorldUpReferenceFrame::RemoveReferenceFrameFromAngles(&_RBX->refFrame, &angles);
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vucomiss xmm0, dword ptr [rbx+74h]
            }
            if ( !v68 )
              goto LABEL_53;
            __asm { vucomiss xmm0, dword ptr [rbx+78h] }
            if ( !v68 )
              goto LABEL_53;
            __asm { vucomiss xmm0, dword ptr [rbx+7Ch] }
            if ( !v68 )
            {
LABEL_53:
              if ( !Com_GameMode_SupportsFeature(WEAPON_RELOAD_END_RECHAMBER) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 2338, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_AIM_ASSIST_REF ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_AIM_ASSIST_REF )") )
                __debugbreak();
              AnglesToAxis(&_RBX->ps.groundTiltRefAngles, &axis);
              MatrixTranspose(&axis, &out);
              AnglesToAxis(&angles, &in1);
              MatrixMultiply(&in1, &out, &v123);
              AxisToAngles(&v123, &angles);
            }
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+1B0h+angles]
              vmovss  xmm1, dword ptr [rsp+1B0h+angles+4]
              vmovss  dword ptr [rbx+1A4h], xmm0
              vmovss  dword ptr [rbx+1ACh], xmm1
            }
            WorldUpReferenceFrame::GetAngles(&_RBX->refFrame, &_RBX->autoAimWorldUpAtTargetSetTime);
            AimAssist_UpdateAutoAimTarget(_RBX);
          }
        }
      }
      if ( !_RBX->autoAimPressed )
        _RBX->autoAimPressed = _RBX->moverData.m_commandTime;
    }
    if ( _RBX->autoAimActive )
    {
      if ( !BG_IsTurretActiveFlags(&_RBX->ps.eFlags) )
      {
        __asm
        {
          vmovss  xmm0, cs:__real@3f800000
          vcomiss xmm0, dword ptr [rbx+184h]
        }
      }
      __asm
      {
        vmovaps [rsp+1B0h+var_40], xmm6
        vmovss  xmm6, dword ptr [rdi]
        vmovaps [rsp+1B0h+var_50], xmm7
      }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_aim_autoaim_lerp, "aim_autoaim_lerp");
      __asm
      {
        vmovss  xmm1, dword ptr [rbx+1A4h]; cur
        vmovaps xmm2, xmm0; rate
        vmovss  xmm0, dword ptr [rbx+1A8h]; tgt
        vmovaps xmm3, xmm6; deltaTime
      }
      *(double *)&_XMM0 = DiffTrackAngle(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
      __asm
      {
        vmovss  xmm6, dword ptr [rdi]
        vmovaps xmm7, xmm0
      }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_aim_autoaim_lerp, "aim_autoaim_lerp");
      __asm
      {
        vmovss  xmm1, dword ptr [rbx+1ACh]; cur
        vmovaps xmm2, xmm0; rate
        vmovss  xmm0, dword ptr [rbx+1B0h]; tgt
        vmovaps xmm3, xmm6; deltaTime
      }
      *(double *)&_XMM0 = DiffTrackAngle(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
      __asm
      {
        vsubss  xmm1, xmm7, dword ptr [rbx+1A4h]
        vmulss  xmm5, xmm1, xmm9
        vmovaps xmm6, xmm0
        vmovss  dword ptr [rbx+1A4h], xmm7
        vmovaps xmm7, [rsp+1B0h+var_50]
        vaddss  xmm3, xmm5, xmm11
        vxorps  xmm2, xmm2, xmm2
        vmovss  xmm1, xmm2, xmm3
        vroundss xmm4, xmm10, xmm1, 1
        vsubss  xmm1, xmm0, dword ptr [rbx+1ACh]
        vmovss  dword ptr [rbx+1ACh], xmm6
        vmovaps xmm6, [rsp+1B0h+var_40]
        vsubss  xmm2, xmm5, xmm4
        vmulss  xmm4, xmm1, xmm9
        vmulss  xmm5, xmm2, xmm12
        vxorps  xmm2, xmm2, xmm2
        vaddss  xmm3, xmm4, xmm11
        vmovss  xmm1, xmm2, xmm3
        vroundss xmm0, xmm10, xmm1, 1
        vsubss  xmm0, xmm4, xmm0
        vmulss  xmm2, xmm0, xmm12
        vaddss  xmm0, xmm5, dword ptr [rbx+1C0h]
        vaddss  xmm1, xmm2, dword ptr [rbx+1C4h]
        vmovss  dword ptr [rbx+1C0h], xmm0
        vmovss  dword ptr [rbx+1C4h], xmm1
        vaddss  xmm0, xmm5, dword ptr [r15]
        vaddss  xmm1, xmm2, dword ptr [r15+4]
        vmovss  dword ptr [r15], xmm0
        vmovss  xmm0, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vandps  xmm5, xmm5, xmm0
        vcomiss xmm5, cs:__real@3a83126f
        vmovss  dword ptr [r15+4], xmm1
      }
      if ( v82 )
      {
        __asm
        {
          vandps  xmm2, xmm2, xmm0
          vcomiss xmm2, cs:__real@3a83126f
        }
        if ( v82 | v83 )
          AimAssist_ClearAutoAimTarget(_RBX);
      }
    }
    __asm
    {
      vmovaps xmm11, [rsp+1B0h+var_80]
      vmovaps xmm10, [rsp+1B0h+var_70]
      vmovaps xmm9, [rsp+1B0h+var_60]
      vmovaps xmm12, [rsp+1B0h+var_90]
    }
  }
  else
  {
LABEL_50:
    AimAssist_ClearAutoAimTarget(_RBX);
    _RBX->autoAimPressed = 0;
  }
}

/*
==============
AimAssist_ApplyLockOn
==============
*/
void AimAssist_ApplyLockOn(const AimInput *input, AimOutput *output)
{
  int prevTargetEnt; 
  int ControllerFromClient; 
  const dvar_t *v10; 
  char v14; 
  ClActiveClient *Client; 
  cg_t *LocalClientGlobals; 
  bool v22; 
  AimTargetFlags v26; 
  float fmt; 

  _RSI = input;
  if ( !input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 2583, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  if ( !output && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 2584, ASSERT_TYPE_ASSERT, "(output)", (const char *)&queryFormat, "output") )
    __debugbreak();
  _RDI = AimAssist_GetClientGlobals(_RSI->localClientNum);
  prevTargetEnt = _RDI->lockOnTargetEnt;
  _RDI->lockOnTargetEnt = 2047;
  ControllerFromClient = CL_Mgr_GetControllerFromClient(_RSI->localClientNum);
  if ( GamerProfile_GetProfileSettings(ControllerFromClient)->config.targetAssist )
  {
    v10 = DCONST_DVARBOOL_aim_lockon_enabled;
    if ( !DCONST_DVARBOOL_aim_lockon_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_lockon_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    if ( v10->current.enabled && !AimAssist_IsPlayerUsingOffhand(&_RDI->ps) && (_RDI->ps.linkFlags.m_flags[0] & 4) == 0 )
    {
      if ( _RDI->autoAimActive )
      {
        if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 2617, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::AUTOAIM ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::AUTOAIM )") )
          __debugbreak();
      }
      else if ( _RDI->ps.sharedPS.meleeChargeEnt == 2047 )
      {
        __asm
        {
          vmovaps [rsp+1C0h+var_40], xmm6
          vmovss  xmm6, dword ptr [rsi+0Ch]
          vmovaps [rsp+1C0h+var_50], xmm7
          vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vandps  xmm6, xmm6, xmm7
        }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_aim_lockon_deflection, "aim_lockon_deflection");
        __asm { vcomiss xmm6, xmm0 }
        if ( !v14 )
          goto LABEL_34;
        __asm
        {
          vmovss  xmm6, dword ptr [rsi+18h]
          vandps  xmm6, xmm6, xmm7
        }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_aim_lockon_deflection, "aim_lockon_deflection");
        __asm { vcomiss xmm6, xmm0 }
        if ( !v14 )
          goto LABEL_34;
        __asm
        {
          vmovss  xmm6, dword ptr [rsi+24h]
          vandps  xmm6, xmm6, xmm7
        }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_aim_lockon_deflection, "aim_lockon_deflection");
        __asm { vcomiss xmm6, xmm0 }
        if ( !v14 )
        {
LABEL_34:
          Client = ClActiveClient::GetClient((const LocalClientNum_t)_RSI->localClientNum);
          if ( Client->GetFreeMoveType(Client) == FREEMOVE_NONE )
          {
            LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)_RSI->localClientNum);
            if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2425, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
              __debugbreak();
            if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, ACTIVE, 0x20u) && LocalClientGlobals->predictedPlayerState.skydivePlayerState.state[0] != 1 )
            {
              if ( _RDI->ps.sharedPS.weapon.weaponIdx )
              {
                __asm { vmovss  xmm6, dword ptr [rdi+184h] }
                v22 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&_RDI->ps.sharedPS.weapFlags, ACTIVE, 0x11u);
                __asm { vmovaps xmm3, xmm6; adsLerp }
                *(float *)&_XMM0 = AimAssist_GetAimAssistRange(_RDI, &_RDI->ps.sharedPS.weapon, v22, *(float *)&_XMM3);
                __asm
                {
                  vmovss  xmm1, dword ptr [rdi+21Ch]
                  vmovss  xmm3, dword ptr [rdi+218h]; regionWidth
                }
                LOBYTE(v26) = 1;
                __asm
                {
                  vmovaps xmm2, xmm0; range
                  vmovss  dword ptr [rsp+1C0h+fmt], xmm1
                }
                if ( AimAssist_GetPrevOrBestTarget(_RDI, v26, *(float *)&_XMM2, *(float *)&_XMM3, fmt, prevTargetEnt) )
                {
                  __asm
                  {
                    vxorps  xmm7, xmm7, xmm7
                    vcomiss xmm7, dword ptr [rax+34h]
                  }
                }
              }
            }
          }
        }
        __asm
        {
          vmovaps xmm6, [rsp+1C0h+var_40]
          vmovaps xmm7, [rsp+1C0h+var_50]
        }
      }
    }
  }
}

/*
==============
AimAssist_ApplyMountLockOn
==============
*/
void AimAssist_ApplyMountLockOn(const AimInput *input, AimOutput *output)
{
  int ControllerFromClient; 
  ClActiveClient *Client; 
  const dvar_t *v13; 
  char v23; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
  }
  ControllerFromClient = CL_Mgr_GetControllerFromClient(input->localClientNum);
  if ( GamerProfile_GetProfileSettings(ControllerFromClient)->config.targetAssist )
  {
    Client = ClActiveClient::GetClient((const LocalClientNum_t)input->localClientNum);
    if ( Client->GetFreeMoveType(Client) == FREEMOVE_NONE )
    {
      _RBX = AimAssist_GetClientGlobals(input->localClientNum);
      v13 = DCONST_DVARBOOL_mount_aim_lockon;
      if ( !DCONST_DVARBOOL_mount_aim_lockon && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_aim_lockon") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v13);
      if ( v13->current.enabled )
      {
        __asm
        {
          vmovss  xmm1, dword ptr [rbx+9Ch]
          vxorps  xmm0, xmm0, xmm0
          vcomiss xmm1, xmm0
        }
        if ( v13->current.enabled )
        {
          __asm
          {
            vmovss  xmm11, cs:__real@3f800000
            vcomiss xmm1, xmm11
          }
        }
      }
    }
  }
  _R11 = &v23;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-20h]
    vmovaps xmm9, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-40h]
    vmovaps xmm11, xmmword ptr [r11-50h]
  }
}

/*
==============
AimAssist_ApplyTurnRates
==============
*/
void AimAssist_ApplyTurnRates(const AimInput *input, AimOutput *output)
{
  int ControllerFromClient; 
  int v19; 
  LocalClientNum_t localClientNum; 
  LocalClientNum_t v33; 
  cg_t *LocalClientGlobals; 
  const dvar_t *v43; 
  const dvar_t *v55; 
  bool v56; 
  const dvar_t *v74; 
  const dvar_t *v80; 
  const dvar_t *v82; 
  char v83; 
  const dvar_t *v93; 
  const dvar_t *v116; 
  float outSensitivity; 
  float pitchAxis; 
  float yawAxis; 
  float outAimAssistRange[3]; 
  AimScreenTarget *outScreenTarget; 
  void *retaddr; 
  float outPitchRate; 
  float outYawRate; 
  float pitchScale; 
  float yawScale; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-68h], xmm7 }
  _R14 = output;
  __asm { vmovaps xmmword ptr [rax-98h], xmm10 }
  _RBX = input;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-0B8h], xmm12
    vmovaps xmmword ptr [rax-0C8h], xmm13
  }
  if ( !input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 2103, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 2104, ASSERT_TYPE_ASSERT, "(output)", (const char *)&queryFormat, "output") )
    __debugbreak();
  _RDI = AimAssist_GetClientGlobals(_RBX->localClientNum);
  ControllerFromClient = CL_Mgr_GetControllerFromClient(_RBX->localClientNum);
  _RAX = GamerProfile_GetProfileSettings(ControllerFromClient);
  __asm { vmovss  xmm12, dword ptr [rax+4] }
  v19 = CL_Mgr_GetControllerFromClient(_RBX->localClientNum);
  _RAX = GamerProfile_GetProfileSettings(v19);
  localClientNum = _RBX->localClientNum;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vmovss  xmm13, dword ptr [rax+8]
    vmovss  [rsp+140h+outSensitivity], xmm6
  }
  if ( CL_Input_UseHighLowZoomSensitivity(localClientNum, &outSensitivity) )
  {
    __asm
    {
      vmulss  xmm12, xmm12, [rsp+140h+outSensitivity]
      vmulss  xmm13, xmm13, [rsp+140h+outSensitivity]
    }
  }
  v56 = _RDI->aaSharedGlob.autoMeleeState == AIM_MELEE_STATE_OFF;
  __asm
  {
    vmovss  xmm9, cs:__real@3f800000
    vmovaps [rsp+140h+var_A8+8], xmm11
  }
  if ( v56 )
  {
    AimAssist_CalcAdjustedAxis(_RBX, &pitchAxis, &yawAxis);
    if ( AimAssist_UsingAdvancedSlowdown(_RBX->localClientNum) || AimAssist_UsingEnhancedSlowdown(_RBX->localClientNum) )
    {
      AimAssist_AdvancedCalcSlowdown(_RBX, &pitchScale, &yawScale);
    }
    else
    {
      _RAX = AimAssist_GetClientGlobals(_RBX->localClientNum);
      outScreenTarget = NULL;
      __asm
      {
        vmovss  xmm2, dword ptr [rax+1FCh]; regionHeight
        vmovss  xmm1, dword ptr [rax+1F8h]; regionWidth
        vmovss  [rsp+140h+outAimAssistRange], xmm6
      }
      AimAssist_CalcSlowdown_ForRegion(_RBX, *(float *)&_XMM1, *(float *)&_XMM2, &pitchScale, &yawScale, (const AimScreenTarget **)&outScreenTarget, outAimAssistRange);
    }
    __asm
    {
      vmovss  xmm11, [rbp+40h+yawScale]
      vmovss  xmm10, [rbp+40h+pitchScale]
      vmovss  xmm8, [rsp+140h+yawAxis]
      vmovss  xmm7, [rsp+140h+pitchAxis]
    }
  }
  else
  {
    __asm
    {
      vxorps  xmm7, xmm7, xmm7
      vxorps  xmm8, xmm8, xmm8
      vmovaps xmm10, xmm9
      vmovaps xmm11, xmm9
    }
  }
  __asm { vmovss  xmm1, cs:__real@bf800000 }
  v33 = _RBX->localClientNum;
  __asm
  {
    vcmpless xmm0, xmm6, xmm7
    vblendvps xmm0, xmm1, xmm9, xmm0
    vmovss  dword ptr [rsp+140h+var_F0], xmm0
    vcmpless xmm0, xmm6, xmm8
    vblendvps xmm0, xmm1, xmm9, xmm0
    vmovss  dword ptr [rsp+140h+var_F0+4], xmm0
  }
  LocalClientGlobals = CG_GetLocalClientGlobals(v33);
  if ( BG_Skydive_IsSkydiving(&LocalClientGlobals->predictedPlayerState) )
  {
    CG_Skydive_GetTurnRates((const LocalClientNum_t)_RBX->localClientNum, &outPitchRate, &outYawRate);
    __asm { vmovss  xmm2, [rbp+40h+outYawRate] }
  }
  else
  {
    _RSI = DCONST_DVARFLT_aim_turnrate_pitch_ads;
    __asm
    {
      vmovaps [rsp+140h+var_D8+8], xmm14
      vmovaps xmmword ptr [rsp+140h+var_E8+8], xmm15
      vmovss  xmm14, dword ptr [rdi+184h]
    }
    if ( !DCONST_DVARFLT_aim_turnrate_pitch_ads && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_turnrate_pitch_ads") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm15, dword ptr [rsi+28h] }
    v43 = DCONST_DVARFLT_aim_turnrate_pitch;
    if ( !DCONST_DVARFLT_aim_turnrate_pitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_turnrate_pitch") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v43);
    __asm
    {
      vmulss  xmm1, xmm14, xmm15
      vmovaps xmm15, xmmword ptr [rsp+140h+var_E8+8]
      vsubss  xmm0, xmm9, xmm14
      vmulss  xmm2, xmm0, dword ptr [rsi+28h]
      vmulss  xmm0, xmm10, dword ptr [rdi+17Ch]
    }
    _RSI = DCONST_DVARFLT_aim_turnrate_yaw_ads;
    __asm
    {
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm1, xmm0, xmm12
      vmulss  xmm2, xmm3, xmm1
      vmovss  [rbp+40h+outPitchRate], xmm2
      vmovss  xmm14, dword ptr [rdi+184h]
    }
    if ( !DCONST_DVARFLT_aim_turnrate_yaw_ads && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_turnrate_yaw_ads") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm10, dword ptr [rsi+28h] }
    v55 = DCONST_DVARFLT_aim_turnrate_yaw;
    if ( !DCONST_DVARFLT_aim_turnrate_yaw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_turnrate_yaw") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v55);
    __asm
    {
      vmovss  xmm3, dword ptr [rbx+10h]
      vucomiss xmm3, xmm6
      vsubss  xmm0, xmm9, xmm14
      vmulss  xmm1, xmm0, dword ptr [rsi+28h]
      vmulss  xmm0, xmm14, xmm10
      vmovaps xmm14, [rsp+140h+var_D8+8]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm11, dword ptr [rdi+17Ch]
      vmulss  xmm0, xmm1, xmm13
      vmulss  xmm2, xmm2, xmm0
      vmovss  [rbp+40h+outYawRate], xmm2
    }
    if ( !v56 )
    {
      __asm
      {
        vmovss  xmm1, [rbp+40h+outPitchRate]
        vcmpltss xmm0, xmm3, xmm1
        vblendvps xmm0, xmm1, xmm3, xmm0
        vmovss  [rbp+40h+outPitchRate], xmm0
      }
    }
    __asm
    {
      vmovss  xmm1, dword ptr [rbx+1Ch]
      vucomiss xmm1, xmm6
    }
    if ( !v56 )
    {
      __asm
      {
        vcmpltss xmm0, xmm1, xmm2
        vblendvps xmm0, xmm2, xmm1, xmm0
        vmovaps xmm2, xmm0
        vmovss  [rbp+40h+outYawRate], xmm0
      }
    }
  }
  __asm { vmovss  xmm10, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff }
  v74 = DCONST_DVARBOOL_aim_accel_turnrate_enabled;
  __asm
  {
    vmovaps xmm11, [rsp+140h+var_A8+8]
    vandps  xmm7, xmm7, xmm10
    vmulss  xmm6, xmm7, [rbp+40h+outPitchRate]
    vandps  xmm8, xmm8, xmm10
    vmulss  xmm7, xmm8, xmm2
  }
  if ( !DCONST_DVARBOOL_aim_accel_turnrate_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_accel_turnrate_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v74);
  if ( v74->current.enabled )
  {
    v80 = DCONST_DVARFLT_aim_accel_turnrate_lerp;
    if ( !DCONST_DVARFLT_aim_accel_turnrate_lerp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_accel_turnrate_lerp") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v80);
    __asm { vmulss  xmm9, xmm12, dword ptr [rsi+28h] }
    v82 = DCONST_DVARFLT_aim_accel_turnrate_lerp;
    if ( !DCONST_DVARFLT_aim_accel_turnrate_lerp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_accel_turnrate_lerp") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v82);
    __asm
    {
      vmovss  xmm1, dword ptr [rdi+188h]; cur
      vcomiss xmm1, xmm6
      vmulss  xmm8, xmm13, dword ptr [rsi+28h]
      vmovaps xmm0, xmm6; tgt
    }
    if ( v83 )
    {
      __asm
      {
        vmovss  xmm3, dword ptr [rbx]; deltaTime
        vmovaps xmm2, xmm9; rate
      }
      *(double *)&_XMM0 = LinearTrack(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    }
    __asm
    {
      vmovss  dword ptr [rdi+188h], xmm0
      vmovss  xmm1, dword ptr [rdi+18Ch]; cur
      vcomiss xmm1, xmm7
      vmovaps xmm0, xmm7; tgt
    }
    if ( v83 )
    {
      __asm
      {
        vmovss  xmm3, dword ptr [rbx]; deltaTime
        vmovaps xmm2, xmm8; rate
      }
      *(double *)&_XMM0 = LinearTrack(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    }
    __asm { vmovss  dword ptr [rdi+18Ch], xmm0 }
    v93 = DCONST_DVARBOOL_aim_accel_turnrate_debug;
    if ( !DCONST_DVARBOOL_aim_accel_turnrate_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_accel_turnrate_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v93);
    if ( v93->current.enabled )
    {
      __asm
      {
        vmovss  xmm3, dword ptr [rdi+188h]
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm2, xmm6, xmm6
        vmovq   r9, xmm3
        vmovq   r8, xmm2
      }
      Com_Printf(17, "Target Pit = %f, Current Pit = %f\n", *(double *)&_XMM2, *(double *)&_XMM3);
      __asm
      {
        vmovss  xmm3, dword ptr [rdi+18Ch]
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm2, xmm7, xmm7
        vmovq   r9, xmm3
        vmovq   r8, xmm2
      }
      Com_Printf(17, "Target Yaw = %f, Current Yaw = %f\n", *(double *)&_XMM2, *(double *)&_XMM3);
    }
    __asm { vmovss  xmm6, dword ptr [rdi+188h] }
  }
  else
  {
    __asm
    {
      vmovss  dword ptr [rdi+188h], xmm6
      vmovss  dword ptr [rdi+18Ch], xmm7
    }
  }
  __asm
  {
    vmulss  xmm0, xmm6, dword ptr [rbx]
    vmulss  xmm1, xmm0, dword ptr [rsp+140h+var_F0]
    vaddss  xmm2, xmm1, dword ptr [r14]
    vmovaps xmm13, [rsp+140h+var_C8+8]
    vmovaps xmm12, [rsp+140h+var_B8+8]
    vmovaps xmm9, [rsp+140h+var_88+8]
    vmovaps xmm8, [rsp+140h+var_78+8]
    vmovaps xmm6, xmmword ptr [rsp+140h+var_58+8]
    vmovss  dword ptr [r14], xmm2
    vmovss  xmm0, dword ptr [rbx]
    vmulss  xmm1, xmm0, dword ptr [rdi+18Ch]
    vmulss  xmm2, xmm1, dword ptr [rsp+140h+var_F0+4]
    vaddss  xmm3, xmm2, dword ptr [r14+4]
    vmovss  dword ptr [r14+4], xmm3
  }
  v116 = DCONST_DVARBOOL_cl_inputVelocityLogging;
  if ( !DCONST_DVARBOOL_cl_inputVelocityLogging && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_inputVelocityLogging") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v116);
  if ( v116->current.enabled )
  {
    Com_Printf(17, "=====================\n");
    __asm
    {
      vmovss  xmm2, dword ptr [rbx]
      vcvtss2sd xmm2, xmm2, xmm2
      vmovq   r8, xmm2
    }
    Com_Printf(17, "AA(G) time:    %.4f\n", *(double *)&_XMM2);
    __asm
    {
      vmovss  xmm0, [rbp+40h+outYawRate]
      vandps  xmm0, xmm0, xmm10
      vcvtss2sd xmm2, xmm0, xmm0
      vmovq   r8, xmm2
    }
    Com_Printf(17, "AA(G) yawRate: %.4f\n", *(double *)&_XMM2);
    __asm
    {
      vmulss  xmm0, xmm7, dword ptr [rbx]
      vandps  xmm0, xmm0, xmm10
      vcvtss2sd xmm2, xmm0, xmm0
      vmovq   r8, xmm2
    }
    Com_Printf(17, "AA(G) yawDelt: %.4f\n", *(double *)&_XMM2);
    __asm { vmovss  xmm0, dword ptr [r14+4]; angle }
    *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
    __asm
    {
      vcvtss2sd xmm2, xmm0, xmm0
      vmovq   r8, xmm2
    }
    Com_Printf(17, "AA(G) yaw:     %.4f\n", *(double *)&_XMM2);
  }
  __asm
  {
    vmovaps xmm7, [rsp+140h+var_68+8]
    vmovaps xmm10, [rsp+140h+var_98+8]
  }
}

/*
==============
AimAssist_ApplyViewConeResistance
==============
*/

float __fastcall AimAssist_ApplyViewConeResistance(LocalClientNum_t localClientNum, int axis, double input)
{
  ClActiveClient *Client; 
  __int64 v18; 
  const playerState_s *v20; 
  const dvar_t *v24; 
  const dvar_t *v33; 
  char v34; 
  char v35; 
  vec2_t *p_viewAngleResistMax; 
  char v71; 
  char v85; 
  char v86; 
  double v93; 
  char v101; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps xmm8, xmm2
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_IDLE|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 137, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_CONE_RESISTANCE ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_CONE_RESISTANCE )") )
    __debugbreak();
  Client = ClActiveClient::GetClient(localClientNum);
  v18 = (__int64)Client->GetPlayerState(Client);
  _RBX = DCONST_DVARMPFLT_player_view_pitch_up;
  v20 = (const playerState_s *)v18;
  if ( !DCONST_DVARMPFLT_player_view_pitch_up && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_view_pitch_up") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm12, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARMPFLT_player_view_pitch_down;
  if ( !DCONST_DVARMPFLT_player_view_pitch_down && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_view_pitch_down") )
    __debugbreak();
  __asm
  {
    vmovaps [rsp+0E8h+var_18], xmm6
    vmovaps [rsp+0E8h+var_48], xmm9
    vmovaps [rsp+0E8h+var_68], xmm11
  }
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm7, dword ptr [rbx+28h] }
  if ( axis )
  {
    if ( axis != 1 )
      goto LABEL_15;
    v33 = DVARBOOL_aim_resist_yaw_enabled;
    if ( !DVARBOOL_aim_resist_yaw_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_resist_yaw_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v33);
    if ( !v33->current.enabled )
      goto LABEL_15;
  }
  else
  {
    v24 = DVARBOOL_aim_resist_pitch_enabled;
    if ( !DVARBOOL_aim_resist_pitch_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_resist_pitch_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v24);
    if ( !v24->current.enabled )
      goto LABEL_15;
  }
  if ( !PM_ViewRangeLimited(v20) )
    goto LABEL_15;
  _RAX = vec2_t::operator[](&v20->viewAngleClampRange, axis);
  __asm
  {
    vmovss  xmm0, cs:__real@43340000
    vcomiss xmm0, dword ptr [rax]
  }
  if ( v34 | v35 )
    goto LABEL_15;
  __asm
  {
    vmovaps [rsp+0E8h+var_58], xmm10
    vmovaps [rsp+0E8h+var_88], xmm13
    vxorps  xmm9, xmm9, xmm9
    vcomiss xmm8, xmm9
    vmovaps [rsp+0E8h+var_98], xmm14
    vmovaps [rsp+0E8h+var_A8], xmm15
  }
  if ( v34 | v35 )
  {
    _RBX = vec2_t::operator[](&v20->viewAngleClampBase, axis);
    vec2_t::operator[](&v20->viewAngleClampRange, axis);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vmovss  xmm13, cs:__real@3b360b61
      vmovss  xmm15, cs:__real@3f000000
      vsubss  xmm1, xmm0, dword ptr [rax]
      vmovss  xmm10, cs:__real@43b40000
      vmovss  xmm11, dword ptr cs:__xmm@80000000800000008000000080000000
      vmulss  xmm3, xmm1, xmm13
      vaddss  xmm1, xmm3, xmm15
      vxorps  xmm14, xmm14, xmm14
      vroundss xmm2, xmm14, xmm1, 1
      vsubss  xmm0, xmm3, xmm2
      vmulss  xmm6, xmm0, xmm10
    }
    if ( !axis )
    {
      __asm
      {
        vcomiss xmm6, xmm7
        vxorps  xmm0, xmm12, xmm11
        vcomiss xmm6, xmm0
      }
    }
    _RAX = vec3_t::operator[](&v20->viewangles, axis);
    p_viewAngleResistMax = &v20->viewAngleResistMax;
    __asm
    {
      vmovss  xmm0, dword ptr [rax]
      vsubss  xmm1, xmm0, xmm6
      vmulss  xmm6, xmm1, xmm13
    }
  }
  else
  {
    _RBX = vec2_t::operator[](&v20->viewAngleClampRange, axis);
    vec2_t::operator[](&v20->viewAngleClampBase, axis);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vmovss  xmm13, cs:__real@3b360b61
      vmovss  xmm15, cs:__real@3f000000
      vaddss  xmm1, xmm0, dword ptr [rax]
      vmovss  xmm10, cs:__real@43b40000
      vmovss  xmm11, dword ptr cs:__xmm@80000000800000008000000080000000
      vmulss  xmm3, xmm1, xmm13
      vaddss  xmm1, xmm3, xmm15
      vxorps  xmm14, xmm14, xmm14
      vroundss xmm2, xmm14, xmm1, 1
      vsubss  xmm0, xmm3, xmm2
      vmulss  xmm6, xmm0, xmm10
    }
    if ( !axis )
    {
      __asm
      {
        vcomiss xmm6, xmm7
        vxorps  xmm0, xmm12, xmm11
        vcomiss xmm6, xmm0
      }
    }
    vec3_t::operator[](&v20->viewangles, axis);
    p_viewAngleResistMax = &v20->viewAngleResistMin;
    __asm
    {
      vsubss  xmm0, xmm6, dword ptr [rax]
      vmulss  xmm6, xmm0, xmm13
    }
  }
  vec2_t::operator[](p_viewAngleResistMax, axis);
  __asm
  {
    vaddss  xmm2, xmm6, xmm15
    vroundss xmm3, xmm14, xmm2, 1
    vsubss  xmm5, xmm6, xmm3
    vmulss  xmm4, xmm13, dword ptr [rax]
    vmovaps xmm13, [rsp+0E8h+var_88]
    vaddss  xmm1, xmm4, xmm15
    vmovaps xmm15, [rsp+0E8h+var_A8]
    vroundss xmm2, xmm14, xmm1, 1
    vmovaps xmm14, [rsp+0E8h+var_98]
    vmulss  xmm6, xmm5, xmm10
    vcomiss xmm6, xmm9
    vsubss  xmm0, xmm4, xmm2
    vmulss  xmm7, xmm0, xmm10
  }
  if ( v71 )
  {
    __asm { vaddss  xmm0, xmm6, xmm10; angle }
    *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
    __asm { vmovaps xmm6, xmm0 }
  }
  __asm
  {
    vcomiss xmm6, xmm7
    vmovaps xmm10, [rsp+0E8h+var_58]
  }
  if ( !v71 )
    goto LABEL_15;
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_aim_resist_view_threshold, "aim_resist_view_threshold");
  __asm
  {
    vxorps  xmm1, xmm0, xmm11
    vcomiss xmm8, xmm1
  }
  if ( !v85 )
  {
    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_aim_resist_view_threshold, "aim_resist_view_threshold");
    __asm { vcomiss xmm8, xmm0 }
    if ( v85 | v86 )
    {
LABEL_15:
      __asm { vmovaps xmm0, xmm8 }
      goto LABEL_16;
    }
  }
  __asm { vcomiss xmm7, xmm9 }
  if ( v85 | v86 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm7, xmm7
      vmovsd  [rsp+0E8h+var_B8], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 196, ASSERT_TYPE_ASSERT, "(resist > 0.0f)", "%s\n\tBad value for resistance angle %f\n", "resist > 0.0f", v93) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000; max
    vdivss  xmm0, xmm6, xmm7; val
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmulss  xmm0, xmm0, xmm8 }
LABEL_16:
  __asm { vmovaps xmm11, [rsp+0E8h+var_68] }
  _R11 = &v101;
  __asm
  {
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm9, [rsp+0E8h+var_48]
    vmovaps xmm6, [rsp+0E8h+var_18]
  }
  return *(float *)&_XMM0;
}

/*
==============
AimAssist_ArchiveState
==============
*/
void AimAssist_ArchiveState(LocalClientNum_t localClientNum, MemoryFile *memFile)
{
  AimAssistGlobals *ClientGlobals; 

  ClientGlobals = AimAssist_GetClientGlobals(localClientNum);
  MemFile_ArchiveData(memFile, 8, &ClientGlobals->aaSharedGlob.prevButtons);
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH|WEAPON_OFFHAND_END) )
  {
    MemFile_ArchiveData(memFile, 1, &ClientGlobals->slowAimEnabled);
    MemFile_ArchiveFloat(memFile, &ClientGlobals->slowAimPitchScale);
    MemFile_ArchiveFloat(memFile, &ClientGlobals->slowAimYawScale);
  }
}

/*
==============
AimAssist_BackupPlayerState
==============
*/
void AimAssist_BackupPlayerState(LocalClientNum_t localClientNum, const playerState_s *ps, const vec3_t *playerVelocity)
{
  __int64 v3; 
  cg_t *LocalClientGlobals; 
  CgWeaponMap *v7; 
  AimAssistGlobals *ClientGlobals; 
  CgHandler *Handler; 
  bool v12; 
  __int16 viewlocked_entNum; 
  centity_t *Entity; 
  bool v20; 
  bool v21; 
  __int64 v22; 
  unsigned int NumWeapons; 

  v3 = localClientNum;
  _RSI = playerVelocity;
  _RDI = ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 458, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v3);
  if ( !CgWeaponMap::ms_instance[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v7 = CgWeaponMap::ms_instance[v3];
  ClientGlobals = AimAssist_GetClientGlobals((LocalClientNum_t)v3);
  _RBX = ClientGlobals;
  if ( _RDI->vehicleState.entity == 2047 )
  {
    ClientGlobals->ps.velocity.v[0] = _RSI->v[0];
    ClientGlobals->ps.velocity.v[1] = _RSI->v[1];
    __asm { vmovss  xmm0, dword ptr [rsi+8] }
  }
  else
  {
    ClientGlobals->ps.velocity.v[0] = _RDI->vehicleState.velocity.v[0];
    ClientGlobals->ps.velocity.v[1] = _RDI->vehicleState.velocity.v[1];
    __asm { vmovss  xmm0, dword ptr [rdi+14Ch] }
  }
  __asm { vmovss  dword ptr [rbx+64h], xmm0 }
  ClientGlobals->ps.eFlags.m_flags[0] = _RDI->eFlags.m_flags[0];
  ClientGlobals->ps.linkFlags.m_flags[0] = _RDI->linkFlags.m_flags[0];
  ClientGlobals->ps.sharedPS.pm_flags = _RDI->pm_flags;
  ClientGlobals->ps.sharedPS.weapFlags = _RDI->weapCommon.weapFlags;
  ClientGlobals->ps.sharedPS.weaponState = _RDI->weapState[0].weaponState;
  ClientGlobals->ps.sharedPS.meleeCount = _RDI->weapState[0].meleeHitCount;
  ClientGlobals->ps.sharedPS.meleeChargeEnt = _RDI->meleeChargeEnt;
  ClientGlobals->ps.fWeaponPosFrac = _RDI->weapCommon.fWeaponPosFrac;
  ClientGlobals->ps.isInAir = BG_IsInAir(_RDI, 0);
  _RBX->ps.slideEndTimeMs = _RDI->slideState.slideEndTime;
  _RBX->ps.jumpTimeMs = _RDI->jumpState.jumpTime;
  _RBX->ps.commandTimeMs = _RDI->serverTime;
  _RBX->ps.mountFraction = _RDI->mountState.mountFraction;
  _RBX->ps.mountStartTimeMs = _RDI->mountState.startTime;
  _RBX->ps.mountEndTimeMs = _RDI->mountState.endTime;
  Handler = CgHandler::getHandler((LocalClientNum_t)v3);
  WorldUpReferenceFrame::Init(&_RBX->refFrame, _RDI, Handler);
  CGMovingPlatformAimAssist::UpdateDataFromPS(&_RBX->moverData, (LocalClientNum_t)v3, _RDI);
  v12 = 0;
  if ( Com_GameMode_SupportsFeature(WEAPON_RELOAD_END_RECHAMBER) )
  {
    _RBX->ps.groundTiltRefAngles.v[0] = _RDI->groundTiltAngles.v[0];
    _RBX->ps.groundTiltRefAngles.v[1] = _RDI->groundTiltAngles.v[1];
    __asm { vmovss  xmm0, dword ptr [rdi+2A8h] }
  }
  else
  {
    *(_QWORD *)_RBX->ps.groundTiltRefAngles.v = 0i64;
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  __asm { vmovss  dword ptr [rbx+7Ch], xmm0 }
  if ( !BG_IsTurretActiveFlags(&_RDI->eFlags) && !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&_RDI->eFlags, ACTIVE, 0xBu) )
  {
    _RAX = BG_GetViewmodelWeapon(v7, _RDI);
LABEL_24:
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rbx], ymm0
      vmovups xmm1, xmmword ptr [rax+20h]
      vmovups xmmword ptr [rbx+20h], xmm1
      vmovsd  xmm0, qword ptr [rax+30h]
      vmovsd  qword ptr [rbx+30h], xmm0
    }
    *(_DWORD *)&_RBX->ps.sharedPS.weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
    goto LABEL_25;
  }
  if ( _RDI->viewlocked_entNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 514, ASSERT_TYPE_ASSERT, "(ps->viewlocked_entNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "ps->viewlocked_entNum != ENTITYNUM_NONE") )
    __debugbreak();
  viewlocked_entNum = _RDI->viewlocked_entNum;
  if ( (unsigned __int16)viewlocked_entNum > 0x7FFu )
  {
    LODWORD(v22) = viewlocked_entNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 515, ASSERT_TYPE_ASSERT, "( ( (ps->viewlocked_entNum >= 0) && (ps->viewlocked_entNum < ( 2048 )) ) )", "( ps->viewlocked_entNum ) = %i", v22) )
      __debugbreak();
  }
  Entity = CG_GetEntity((const LocalClientNum_t)v3, _RDI->viewlocked_entNum);
  if ( (Entity->flags & 1) != 0 )
  {
    _RAX = BG_GetWeaponForEntity(v7, &Entity->nextState);
    goto LABEL_24;
  }
LABEL_25:
  if ( _RBX->ps.sharedPS.weapon.weaponIdx >= BG_GetNumWeapons() )
  {
    NumWeapons = BG_GetNumWeapons();
    LODWORD(v22) = _RBX->ps.sharedPS.weapon.weaponIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 527, ASSERT_TYPE_ASSERT, "(unsigned)( aaGlob->ps.sharedPS.weapon.weaponIdx ) < (unsigned)( BG_GetNumWeapons() )", "aaGlob->ps.sharedPS.weapon.weaponIdx doesn't index BG_GetNumWeapons()\n\t%i not in [0, %i)", v22, NumWeapons) )
      __debugbreak();
  }
  v20 = BG_UsingAlternate(_RDI);
  v21 = BG_WeaponAmmo(v7, _RDI, &_RBX->ps.sharedPS.weapon, v20) > 0 || _RDI->throwbackGrenadeTimeLeft > 0;
  _RBX->ps.hasAmmo = v21;
  if ( !BG_Skydive_IsSkydiving(_RDI) && BG_Ladder_IsDualWieldingAllowed(_RDI) )
    v12 = _RDI->weapCommon.lastWeaponHand == WEAPON_HAND_LEFT;
  _RBX->ps.isDualWielding = v12;
  _RBX->ps.isUsingOffhand = BG_IsUsingOffhandGestureWeapon(_RDI);
  _RBX->ps.sharedPS.isThirdPerson = BG_IsThirdPersonMode(v7, _RDI) || LocalClientGlobals->renderingThirdPerson;
}

/*
==============
AimAssist_CalcAdjustedAxis
==============
*/
void AimAssist_CalcAdjustedAxis(const AimInput *input, float *pitchAxis, float *yawAxis)
{
  const dvar_t *v11; 
  int ControllerFromClient; 
  unsigned int v23; 
  const dvar_t *v26; 
  const dvar_t *v39; 
  bool v40; 
  bool v45; 
  bool v46; 
  __int64 v56; 
  __int64 v57; 
  void *retaddr; 

  _R11 = &retaddr;
  _RBX = yawAxis;
  _RDI = pitchAxis;
  _RSI = input;
  __asm { vmovaps xmmword ptr [r11-48h], xmm8 }
  if ( !input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1526, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1527, ASSERT_TYPE_ASSERT, "(pitchAxis)", (const char *)&queryFormat, "pitchAxis") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1528, ASSERT_TYPE_ASSERT, "(yawAxis)", (const char *)&queryFormat, "yawAxis") )
    __debugbreak();
  v11 = DCONST_DVARBOOL_aim_input_graph_enabled;
  if ( !DCONST_DVARBOOL_aim_input_graph_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_input_graph_enabled") )
    __debugbreak();
  __asm { vmovaps [rsp+88h+var_28], xmm6 }
  Dvar_CheckFrontendServerThread(v11);
  __asm
  {
    vmovss  xmm1, dword ptr [rsi+0Ch]
    vmovss  xmm8, cs:__real@3f800000
  }
  if ( v11->current.enabled )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+18h]
      vmulss  xmm2, xmm0, xmm0
      vmulss  xmm1, xmm1, xmm1
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm0, xmm2, xmm2; val
      vmovaps xmm2, xmm8; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovaps xmm6, xmm0 }
    ControllerFromClient = CL_Mgr_GetControllerFromClient(_RSI->localClientNum);
    v23 = GamerProfile_GetAimResponseCurveType(ControllerFromClient) - 1;
    if ( v23 >= 4 )
    {
      LODWORD(v57) = 4;
      LODWORD(v56) = v23;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1538, ASSERT_TYPE_ASSERT, "(unsigned)( aimResponseCurveType ) < (unsigned)( 4 )", "aimResponseCurveType doesn't index AIM_INPUT_GRAPH_COUNT\n\t%i not in [0, %i)", v56, v57) )
        __debugbreak();
    }
    __asm { vmovaps xmm1, xmm6; fraction }
    *(double *)&_XMM0 = GraphFloat_GetValue(&aaInputGraph[v23], *(float *)&_XMM1);
    __asm
    {
      vmulss  xmm1, xmm0, dword ptr [rsi+0Ch]
      vmovss  dword ptr [rdi], xmm1
      vmulss  xmm0, xmm0, dword ptr [rsi+18h]
      vmovss  dword ptr [rbx], xmm0
    }
    v26 = DCONST_DVARBOOL_aim_input_graph_debug;
    if ( !DCONST_DVARBOOL_aim_input_graph_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_input_graph_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v26);
    if ( v26->current.enabled )
    {
      __asm
      {
        vmovss  xmm3, dword ptr [rdi]
        vmovss  xmm2, dword ptr [rsi+0Ch]
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm2, xmm2, xmm2
        vmovq   r9, xmm3
        vmovq   r8, xmm2
      }
      Com_Printf(17, "Input Pit = %f, Output Pit = %f\n", *(double *)&_XMM2, *(double *)&_XMM3);
      __asm
      {
        vmovss  xmm3, dword ptr [rbx]
        vmovss  xmm2, dword ptr [rsi+18h]
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm2, xmm2, xmm2
        vmovq   r9, xmm3
        vmovq   r8, xmm2
      }
      Com_Printf(17, "Input Yaw = %f, Output Yaw = %f\n", *(double *)&_XMM2, *(double *)&_XMM3);
    }
  }
  else
  {
    __asm { vmovss  dword ptr [rdi], xmm1 }
    *_RBX = _RSI->yawAxis;
  }
  v39 = DCONST_DVARBOOL_aim_scale_view_axis;
  if ( !DCONST_DVARBOOL_aim_scale_view_axis && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_scale_view_axis") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v39);
  v40 = !v39->current.enabled;
  if ( v39->current.enabled )
  {
    __asm
    {
      vmovss  xmm6, dword ptr [rbx]
      vandps  xmm6, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovaps [rsp+88h+var_38], xmm7
      vmovss  xmm7, dword ptr [rdi]
      vandps  xmm7, xmm7, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm7, xmm8
    }
    if ( v39->current.enabled )
    {
      v45 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1568, ASSERT_TYPE_ASSERT, "(absPitchAxis <= 1.0f)", (const char *)&queryFormat, "absPitchAxis <= 1.0f");
      v40 = !v45;
      if ( v45 )
        __debugbreak();
    }
    __asm { vcomiss xmm6, xmm8 }
    if ( !v40 )
    {
      v46 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1569, ASSERT_TYPE_ASSERT, "(absYawAxis <= 1.0f)", (const char *)&queryFormat, "absYawAxis <= 1.0f");
      v40 = !v46;
      if ( v46 )
        __debugbreak();
    }
    __asm { vcomiss xmm7, xmm6 }
    if ( v40 )
    {
      __asm
      {
        vsubss  xmm0, xmm6, xmm7
        vsubss  xmm0, xmm8, xmm0
        vmulss  xmm1, xmm0, dword ptr [rdi]
        vmovss  dword ptr [rdi], xmm1
      }
    }
    else
    {
      __asm
      {
        vsubss  xmm0, xmm7, xmm6
        vsubss  xmm0, xmm8, xmm0
        vmulss  xmm1, xmm0, dword ptr [rbx]
        vmovss  dword ptr [rbx], xmm1
      }
    }
    __asm { vmovaps xmm7, [rsp+88h+var_38] }
  }
  __asm
  {
    vmovaps xmm8, [rsp+88h+var_48]
    vmovaps xmm6, [rsp+88h+var_28]
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_IDLE|WEAPON_OFFHAND_END) )
  {
    __asm { vmovss  xmm2, dword ptr [rdi]; input }
    *(float *)&_XMM0 = AimAssist_ApplyViewConeResistance(_RSI->localClientNum, 0, *(double *)&_XMM2);
    __asm
    {
      vmovss  dword ptr [rdi], xmm0
      vmovss  xmm2, dword ptr [rbx]; input
    }
    *(float *)&_XMM0 = AimAssist_ApplyViewConeResistance(_RSI->localClientNum, 1, *(double *)&_XMM2);
    __asm { vmovss  dword ptr [rbx], xmm0 }
  }
}

/*
==============
AimAssist_CalcAimPos
==============
*/
__int64 AimAssist_CalcAimPos(LocalClientNum_t localClientNum, AimAssistGlobals *const aaGlob, const centity_t *targetEnt, const AimTarget *target, const tmat43_t<vec3_t> *entMtx, vec3_t *outAimPos, vec3_t *outAimScreenPos, scr_string_t *tag)
{
  AimAssistGlobals *v15; 
  LocalClientNum_t v16; 
  __int64 result; 
  unsigned int v20; 
  unsigned int v21; 
  DObj *ClientDObj; 
  char v43; 
  bool v44; 
  int v45; 
  __int64 v46; 
  const XModel *v47; 
  unsigned __int8 v48; 
  unsigned __int64 v49; 
  scr_string_t *v50; 
  cg_t *LocalClientGlobals; 
  int PerkNetworkPriorityIndex; 
  unsigned __int64 v53; 
  scr_string_t j_neck; 
  __int64 v55; 
  vec3_t *v56; 
  vec3_t *v57; 
  __int64 v73; 
  __int64 v74; 
  LocalClientNum_t localClientNum_4; 
  vec3_t outOrigin; 
  scr_string_t *v78; 
  __int64 v79; 
  vec3_t *in; 
  vec3_t *v81; 
  AimAssistGlobals *aaGloba; 
  __int64 v83; 
  Bounds outBounds; 
  tmat43_t<vec3_t> *mtx; 
  ExtentBounds clipBounds; 
  vec3_t outPos; 
  vec3_t out; 
  int v90[66]; 
  char v91; 
  void *retaddr; 

  _RAX = &retaddr;
  v83 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
  }
  _R14 = target;
  _R13 = targetEnt;
  v15 = aaGlob;
  aaGloba = aaGlob;
  v16 = localClientNum;
  mtx = (tmat43_t<vec3_t> *)entMtx;
  _RSI = outAimPos;
  in = outAimPos;
  v81 = outAimScreenPos;
  v78 = tag;
  if ( !targetEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1033, ASSERT_TYPE_ASSERT, "(targetEnt)", (const char *)&queryFormat, "targetEnt") )
    __debugbreak();
  if ( _R14 )
  {
    AimAssist_GetBoundsFromTarget(_R14, &outBounds);
    if ( BG_IsCharacterEntity(&_R13->nextState) )
    {
      v20 = 0;
      v21 = 0;
      ClientDObj = Com_GetClientDObj(_R13->nextState.number, v16);
      *(_QWORD *)outOrigin.v = ClientDObj;
      __asm
      {
        vmovss  xmm6, dword ptr [r14+4]
        vsqrtss xmm6, xmm6, xmm6
        vmovss  xmm0, dword ptr [rbp+180h+outBounds.midPoint]
        vmovss  xmm3, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vandps  xmm0, xmm0, xmm3
        vaddss  xmm5, xmm0, dword ptr [rbp+180h+outBounds.halfSize]
        vmovss  xmm0, dword ptr [rbp+180h+outBounds.midPoint+4]
        vandps  xmm0, xmm0, xmm3
        vaddss  xmm2, xmm0, dword ptr [rbp+180h+outBounds.halfSize+4]
        vmovss  xmm1, dword ptr [rbp+180h+outBounds.midPoint+8]
        vandps  xmm1, xmm1, xmm3
        vaddss  xmm4, xmm1, dword ptr [rbp+180h+outBounds.halfSize+8]
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm0, xmm5, xmm5
        vaddss  xmm3, xmm2, xmm0
        vmulss  xmm1, xmm4, xmm4
        vaddss  xmm2, xmm3, xmm1
        vsqrtss xmm7, xmm2, xmm2
      }
      _R14 = DCONST_DVARFLT_aim_autoaim_bone_dist_ratio;
      if ( !DCONST_DVARFLT_aim_autoaim_bone_dist_ratio && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_autoaim_bone_dist_ratio") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_R14);
      __asm
      {
        vdivss  xmm0, xmm7, xmm6
        vcomiss xmm0, dword ptr [r14+28h]
      }
      if ( v43 | v44 )
        goto LABEL_28;
      if ( ClientDObj )
      {
        v45 = 0;
        localClientNum_4 = LOCAL_CLIENT_0;
        if ( ClientDObj->numModels )
        {
          v46 = 0i64;
          v79 = 0i64;
          do
          {
            v47 = *(const XModel **)((char *)ClientDObj->models + v46);
            v48 = 0;
            if ( v47->numAimAssistBones )
            {
              do
              {
                if ( v21 < 0xA && v47->aimAssistBones[v48] && AimAssist_GetTargetTagBounds(v16, _R13, v47, v48, &outBounds) && AimAssist_ConvertToClipBounds(v15, &outBounds, mtx, &clipBounds) )
                {
                  v49 = 28i64 * v21;
                  AimAssist_GetTagPos(localClientNum, _R13, v47->aimAssistBones[v48], (vec3_t *)((char *)&outPos + v49));
                  v15 = aaGloba;
                  AimAssist_XfmWorldPointToClipSpace(aaGloba, (vec3_t *)((char *)&outPos + v49), (vec3_t *)((char *)&out + v49));
                  v90[v49 / 4] = v47->aimAssistBones[v48];
                  ++v21;
                  v16 = localClientNum;
                }
                ++v48;
              }
              while ( v48 < v47->numAimAssistBones );
              v45 = localClientNum_4;
              v46 = v79;
              ClientDObj = *(DObj **)outOrigin.v;
            }
            localClientNum_4 = ++v45;
            v46 += 8i64;
            v79 = v46;
          }
          while ( v45 < ClientDObj->numModels );
          v20 = 0;
        }
      }
      qsort(&outPos, v21, 0x1Cui64, (_CoreCrtNonSecureSearchSortCompareFunction)AimAssistCalcPointCacheCompare);
      if ( !v21 )
      {
LABEL_28:
        LocalClientGlobals = CG_GetLocalClientGlobals(v16);
        PerkNetworkPriorityIndex = BG_GetPerkNetworkPriorityIndex(0x3Du);
        v53 = (unsigned int)PerkNetworkPriorityIndex;
        if ( PerkNetworkPriorityIndex < 0 )
          goto LABEL_33;
        if ( (unsigned int)PerkNetworkPriorityIndex >= 0x40 )
        {
          LODWORD(v74) = 64;
          LODWORD(v73) = PerkNetworkPriorityIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v73, v74) )
            __debugbreak();
        }
        v44 = ((0x80000000 >> (v53 & 0x1F)) & LocalClientGlobals->predictedPlayerState.perks.array[v53 >> 5]) == 0;
        j_neck = scr_const.j_neck;
        if ( v44 )
LABEL_33:
          j_neck = scr_const.j_spine4;
        AimAssist_GetTagPos(v16, _R13, j_neck, in);
        AimAssist_XfmWorldPointToClipSpace(aaGloba, in, v81);
        *v78 = j_neck;
      }
      else
      {
        v50 = (scr_string_t *)v90;
        while ( !AimAssist_IsTargetVisible(v16, _R13, *v50) )
        {
          ++v20;
          v50 += 7;
          if ( v20 >= v21 )
            goto LABEL_28;
        }
        v55 = 7i64 * v20;
        v56 = in;
        in->v[0] = outPos.v[v55];
        v56->v[1] = outPos.v[v55 + 1];
        v56->v[2] = outPos.v[v55 + 2];
        v57 = v81;
        v81->v[0] = out.v[v55];
        v57->v[1] = out.v[v55 + 1];
        v57->v[2] = out.v[v55 + 2];
        *v78 = v90[v55];
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm1, dword ptr [r13+1D0h]
        vmovss  dword ptr [rbp+180h+mtx], xmm1
        vmovss  xmm0, dword ptr [r13+1D4h]
        vmovss  dword ptr [rbp+180h+mtx+4], xmm0
        vmovss  xmm2, dword ptr [r13+1D8h]
        vmovss  [rbp+180h+var_1D8], xmm2
        vxorps  xmm0, xmm0, xmm0
        vucomiss xmm1, xmm0
        vucomiss xmm2, xmm0
        vmovss  xmm8, dword ptr [rbp+180h+outBounds.midPoint]
        vmovss  xmm9, dword ptr [rbp+180h+outBounds.midPoint+4]
        vmovss  xmm6, dword ptr [rbp+180h+outBounds.midPoint+8]
      }
      CG_GetPoseOrigin(&_R13->pose, &outOrigin);
      __asm
      {
        vaddss  xmm1, xmm8, dword ptr [rsp+280h+outOrigin]
        vmovss  dword ptr [rsi], xmm1
        vaddss  xmm0, xmm9, dword ptr [rsp+280h+outOrigin+4]
        vmovss  dword ptr [rsi+4], xmm0
        vaddss  xmm2, xmm6, dword ptr [rsp+280h+outOrigin+8]
        vmovss  dword ptr [rsi+8], xmm2
      }
      AimAssist_XfmWorldPointToClipSpace(v15, outAimPos, outAimScreenPos);
      *v78 = 0;
      memset(&outOrigin, 0, sizeof(outOrigin));
    }
    result = 1i64;
  }
  else
  {
    result = 0i64;
  }
  _R11 = &v91;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
  return result;
}

/*
==============
AimAssist_CalcMovementScale
==============
*/
void AimAssist_CalcMovementScale(AimAssistGlobals *const aaGlob, vec2_t *outSlowDownScale, vec2_t *outLockOnScale)
{
  const dvar_t *v8; 
  const dvar_t *v9; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  _RBX = outLockOnScale;
  _RDI = outSlowDownScale;
  if ( !aaGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1655, ASSERT_TYPE_ASSERT, "(aaGlob)", (const char *)&queryFormat, "aaGlob") )
    __debugbreak();
  _RDI->v[0] = 1.0;
  _RDI->v[1] = 1.0;
  _RBX->v[0] = 1.0;
  _RBX->v[1] = 1.0;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&aaGlob->ps.sharedPS.pm_flags, ACTIVE, 0x1Du) )
  {
    v8 = DVARVEC2_aim_slowdown_slide_scale;
    if ( !DVARVEC2_aim_slowdown_slide_scale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_slowdown_slide_scale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    LODWORD(_RDI->v[0]) = v8->current.integer;
    _RDI->v[1] = v8->current.vector.v[1];
    v9 = DVARVEC2_aim_lockon_slide_scale;
    if ( !DVARVEC2_aim_lockon_slide_scale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_lockon_slide_scale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    LODWORD(_RBX->v[0]) = v9->current.integer;
    _RBX->v[1] = v9->current.vector.v[1];
  }
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vmovss  xmm0, dword ptr [rdi]; val
    vmovaps xmm2, xmm6; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rdi], xmm0
    vmovss  xmm0, dword ptr [rdi+4]; val
    vmovaps xmm2, xmm6; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rdi+4], xmm0
    vmovss  xmm0, dword ptr [rbx]; val
    vmovaps xmm2, xmm6; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rbx], xmm0
    vmovss  xmm0, dword ptr [rbx+4]; val
    vmovaps xmm2, xmm6; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_18]
    vmovss  dword ptr [rbx+4], xmm0
  }
}

/*
==============
AimAssist_CalcSlowdown_ForRegion
==============
*/

bool __fastcall AimAssist_CalcSlowdown_ForRegion(const AimInput *input, double regionWidth, double regionHeight, float *pitchScale, float *yawScale, const AimScreenTarget **outScreenTarget, float *outAimAssistRange)
{
  bool result; 
  const dvar_t *v20; 
  int ControllerFromClient; 
  bool v23; 
  AimTargetFlags v25; 
  const AimScreenTarget *BestTarget; 
  const dvar_t *v38; 
  char v40; 
  bool v41; 
  char v49; 
  char v51; 
  bool v52; 
  const dvar_t *v74; 
  float fmt; 
  float aimAssistPitchSlowdown; 
  float aimAssistPitchSlowdownAds; 
  vec2_t outSlowDownScale; 
  vec2_t aimAssistYawSlowdown; 

  __asm
  {
    vmovaps [rsp+0D8h+var_58], xmm7
    vmovaps [rsp+0D8h+var_78], xmm9
  }
  _R14 = yawScale;
  _RSI = pitchScale;
  _R15 = outAimAssistRange;
  __asm
  {
    vmovaps xmm7, xmm2
    vmovaps xmm9, xmm1
  }
  if ( !input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1731, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1732, ASSERT_TYPE_ASSERT, "(pitchScale)", (const char *)&queryFormat, "pitchScale") )
    __debugbreak();
  if ( !yawScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1733, ASSERT_TYPE_ASSERT, "(yawScale)", (const char *)&queryFormat, "yawScale") )
    __debugbreak();
  if ( !outAimAssistRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1734, ASSERT_TYPE_ASSERT, "(outAimAssistRange)", (const char *)&queryFormat, "outAimAssistRange") )
    __debugbreak();
  if ( !outScreenTarget && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1735, ASSERT_TYPE_ASSERT, "(outScreenTarget)", (const char *)&queryFormat, "outScreenTarget") )
    __debugbreak();
  _RBX = AimAssist_GetClientGlobals(input->localClientNum);
  AimAssist_ResetSlowdownScale(_RSI, yawScale);
  if ( _RBX->slowAimEnabled )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1744, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_SLOW_AIM ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_SLOW_AIM )") )
      __debugbreak();
    *_RSI = _RBX->slowAimPitchScale;
    *yawScale = _RBX->slowAimYawScale;
    result = 0;
  }
  else
  {
    v20 = DCONST_DVARBOOL_aim_slowdown_enabled;
    if ( !DCONST_DVARBOOL_aim_slowdown_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_slowdown_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    if ( v20->current.enabled && (_RBX->ps.linkFlags.m_flags[0] & 4) == 0 && (unsigned int)(_RBX->ps.sharedPS.weaponState - 37) > 1 && _RBX->ps.sharedPS.weapon.weaponIdx && (BG_IsTurretActiveFlags(&_RBX->ps.eFlags) || GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&_RBX->ps.eFlags, ACTIVE, 0xBu) || _RBX->ps.hasAmmo && (ControllerFromClient = CL_Mgr_GetControllerFromClient(input->localClientNum), GamerProfile_GetProfileSettings(ControllerFromClient)->config.targetAssist)) )
    {
      v41 = _RBX->ps.sharedPS.weapon.weaponIdx == 0;
      __asm
      {
        vmovaps [rsp+0D8h+var_48], xmm6
        vmovaps [rsp+0D8h+var_68], xmm8
      }
      if ( v41 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1753, ASSERT_TYPE_ASSERT, "(aaGlob->ps.sharedPS.weapon.weaponIdx != 0)", (const char *)&queryFormat, "aaGlob->ps.sharedPS.weapon.weaponIdx != WP_NONE") )
        __debugbreak();
      __asm { vmovss  xmm6, dword ptr [rbx+184h] }
      v23 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&_RBX->ps.sharedPS.weapFlags, ACTIVE, 0x11u);
      __asm { vmovaps xmm3, xmm6; adsLerp }
      *(float *)&_XMM0 = AimAssist_GetAimAssistRange(_RBX, &_RBX->ps.sharedPS.weapon, v23, *(float *)&_XMM3);
      LOBYTE(v25) = 1;
      __asm
      {
        vmovaps xmm3, xmm9; regionWidth
        vmovaps xmm2, xmm0; range
        vmovss  dword ptr [r15], xmm0
        vmovss  dword ptr [rsp+0D8h+fmt], xmm7
      }
      BestTarget = AimAssist_GetBestTarget(&_RBX->aaSharedGlob, v25, *(float *)&_XMM2, *(float *)&_XMM3, fmt);
      *outScreenTarget = BestTarget;
      __asm { vmovss  xmm8, cs:__real@3f800000 }
      if ( BestTarget )
      {
        _RDI = DCONST_DVARFLT_aim_slowdown_box_reduction_range_max;
        if ( !DCONST_DVARFLT_aim_slowdown_box_reduction_range_max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_slowdown_box_reduction_range_max") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RDI);
        __asm { vmovss  xmm6, dword ptr [rdi+28h] }
        _RDI = DCONST_DVARFLT_aim_slowdown_box_reduction_range_min;
        if ( !DCONST_DVARFLT_aim_slowdown_box_reduction_range_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_slowdown_box_reduction_range_min") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RDI);
        _RAX = *outScreenTarget;
        __asm
        {
          vmovss  xmm1, dword ptr [rdi+28h]; min
          vmovaps xmm2, xmm6; max
          vmovss  xmm0, dword ptr [rax+34h]
          vsqrtss xmm0, xmm0, xmm0; value
        }
        *(double *)&_XMM0 = ApplyLinearMap(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        v38 = DCONST_DVARFLT_aim_slowdown_box_reduction_max_percent;
        __asm { vmovaps xmm6, xmm0 }
        if ( !DCONST_DVARFLT_aim_slowdown_box_reduction_max_percent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_slowdown_box_reduction_max_percent") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v38);
        __asm
        {
          vmulss  xmm0, xmm6, dword ptr [rdi+28h]
          vsubss  xmm1, xmm8, xmm0
          vmovss  dword ptr [rbx+0E14h], xmm1
        }
        _RAX = *outScreenTarget;
        __asm
        {
          vmulss  xmm3, xmm1, xmm9
          vmulss  xmm2, xmm1, xmm7
          vmovss  xmm1, dword ptr cs:__xmm@80000000800000008000000080000000
          vcomiss xmm3, dword ptr [rax+4]
        }
        if ( v40 )
          goto LABEL_48;
        __asm
        {
          vxorps  xmm0, xmm3, xmm1
          vcomiss xmm0, dword ptr [rax+0Ch]
        }
        if ( !(v40 | v41) )
        {
LABEL_48:
          v49 = 0;
          v40 = 0;
          v41 = 1;
        }
        else
        {
          v49 = 1;
        }
        __asm
        {
          vcomiss xmm2, dword ptr [rax+8]
          vxorps  xmm0, xmm2, xmm1
          vcomiss xmm0, dword ptr [rax+10h]
        }
        if ( v40 | v41 )
          v51 = 1;
        else
          v51 = 0;
        if ( v49 && v51 )
        {
          v52 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&_RBX->ps.sharedPS.weapFlags, ACTIVE, 0x11u);
          BG_AimAssistSlowdown(&_RBX->ps.sharedPS.weapon, v52, &aimAssistPitchSlowdown, &aimAssistPitchSlowdownAds, (float *)&aimAssistYawSlowdown, (float *)&outSlowDownScale);
          __asm
          {
            vmovss  xmm1, dword ptr [rbx+184h]
            vsubss  xmm0, xmm8, xmm1
            vmulss  xmm2, xmm0, [rsp+0D8h+aimAssistPitchSlowdown]
            vmulss  xmm1, xmm1, [rsp+0D8h+aimAssistPitchSlowdownAds]
            vaddss  xmm2, xmm2, xmm1
            vmovss  dword ptr [rsi], xmm2
            vmovss  xmm3, dword ptr [rbx+184h]
            vmulss  xmm1, xmm3, dword ptr [rsp+0D8h+outSlowDownScale]
            vsubss  xmm0, xmm8, xmm3
            vmulss  xmm2, xmm0, dword ptr [rsp+0D8h+aimAssistYawSlowdown]
            vaddss  xmm2, xmm2, xmm1
            vmovss  dword ptr [r14], xmm2
          }
        }
      }
      else
      {
        _RBX->boxRangeScale = 1.0;
      }
      if ( AimAssist_IsPlayerUsingOffhand(&_RBX->ps) )
        *_RSI = 1.0;
      AimAssist_CalcMovementScale(_RBX, &outSlowDownScale, &aimAssistYawSlowdown);
      __asm
      {
        vmovss  xmm0, dword ptr [rsi]
        vmovss  xmm6, dword ptr [rsp+0D8h+outSlowDownScale]
        vmovss  xmm7, dword ptr [rsp+0D8h+outSlowDownScale+4]
        vsubss  xmm1, xmm0, xmm8
        vmulss  xmm1, xmm1, xmm6
        vaddss  xmm0, xmm1, xmm8
        vmovss  dword ptr [rsi], xmm0
        vmovss  xmm2, dword ptr [r14]
        vsubss  xmm1, xmm2, xmm8
        vmulss  xmm0, xmm1, xmm7
        vaddss  xmm1, xmm0, xmm8
        vmovaps xmm8, [rsp+0D8h+var_68]
        vmovss  dword ptr [r14], xmm1
      }
      v74 = DCONST_DVARBOOL_aim_slowdown_debug;
      if ( !DCONST_DVARBOOL_aim_slowdown_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_slowdown_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v74);
      if ( v74->current.enabled )
      {
        __asm
        {
          vcvtss2sd xmm3, xmm7, xmm7
          vcvtss2sd xmm2, xmm6, xmm6
          vmovq   r9, xmm3
          vmovq   r8, xmm2
        }
        Com_Printf(17, "Slowdown advanced movement scale contribution = ( %f, %f )\n", *(double *)&_XMM2, *(double *)&_XMM3);
        __asm
        {
          vmovss  xmm2, dword ptr [rsi]
          vcvtss2sd xmm2, xmm2, xmm2
          vmovq   r8, xmm2
        }
        Com_Printf(17, "Target slowdown pitch scale = %f\n", *(double *)&_XMM2);
        __asm
        {
          vmovss  xmm2, dword ptr [r14]
          vcvtss2sd xmm2, xmm2, xmm2
          vmovq   r8, xmm2
        }
        Com_Printf(17, "Target slowdown yaw scale = %f\n", *(double *)&_XMM2);
      }
      __asm { vmovaps xmm6, [rsp+0D8h+var_48] }
      result = 1;
    }
    else
    {
      result = 0;
    }
  }
  __asm
  {
    vmovaps xmm7, [rsp+0D8h+var_58]
    vmovaps xmm9, [rsp+0D8h+var_78]
  }
  return result;
}

/*
==============
AimAssist_ClearAutoAimTarget
==============
*/
void AimAssist_ClearAutoAimTarget(AimAssistGlobals *aaGlob)
{
  if ( !aaGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 2264, ASSERT_TYPE_ASSERT, "(aaGlob)", (const char *)&queryFormat, "aaGlob") )
    __debugbreak();
  aaGlob->autoAimTargetEnt = 2047;
  *(_QWORD *)&aaGlob->autoAimPitch = 0i64;
  aaGlob->autoAimYaw = 0.0;
  aaGlob->autoAimActive = 0;
  WorldUpReferenceFrame::GetAngles(&aaGlob->refFrame, &aaGlob->autoAimWorldUpAtTargetSetTime);
  aaGlob->autoAimYawTarget = 0.0;
  *(_QWORD *)&aaGlob->autoAimDeltaPitch = 0i64;
}

/*
==============
AimAssist_ClearEntityReference
==============
*/
void AimAssist_ClearEntityReference(LocalClientNum_t localClientNum, int entIndex)
{
  AimAssistGlobals *ClientGlobals; 

  ClientGlobals = AimAssist_GetClientGlobals(localClientNum);
  if ( ClientGlobals->autoAimTargetEnt == entIndex )
    ClientGlobals->autoAimTargetEnt = 2047;
  if ( ClientGlobals->lockOnTargetEnt == entIndex )
    ClientGlobals->lockOnTargetEnt = 2047;
}

/*
==============
AimAssist_ClearSlowAim
==============
*/
void AimAssist_ClearSlowAim(LocalClientNum_t localClientNum)
{
  AimAssistGlobals *ClientGlobals; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 2897, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_SLOW_AIM ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_SLOW_AIM )") )
    __debugbreak();
  ClientGlobals = AimAssist_GetClientGlobals(localClientNum);
  ClientGlobals->slowAimEnabled = 0;
  *(_QWORD *)&ClientGlobals->slowAimPitchScale = 0i64;
}

/*
==============
AimAssist_CompareTargets
==============
*/

__int64 __fastcall AimAssist_CompareTargets(const AimScreenTarget *screenTargetA, const AimScreenTarget *screenTargetB, double distClosePropTest, double crosshairDistClosePropTest)
{
  bool v14; 
  bool v15; 
  __int64 result; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-28h], xmm6 }
  _RDI = screenTargetB;
  __asm { vmovaps xmmword ptr [rax-38h], xmm7 }
  _RSI = screenTargetA;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmm10, xmm2
    vmovaps xmm9, xmm3
  }
  if ( !screenTargetA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 744, ASSERT_TYPE_ASSERT, "(screenTargetA)", (const char *)&queryFormat, "screenTargetA") )
    __debugbreak();
  v14 = _RDI == NULL;
  if ( !_RDI )
  {
    v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 745, ASSERT_TYPE_ASSERT, "(screenTargetB)", (const char *)&queryFormat, "screenTargetB");
    v14 = !v15;
    if ( v15 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm1, dword ptr [rdi+34h]
    vmovss  xmm2, dword ptr [rsi+34h]
    vmovss  xmm5, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmaxss  xmm3, xmm2, xmm1
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm3, xmm6
  }
  if ( v14 )
  {
    __asm { vxorps  xmm7, xmm7, xmm7 }
  }
  else
  {
    __asm
    {
      vsubss  xmm0, xmm2, xmm1
      vandps  xmm0, xmm0, xmm5
      vdivss  xmm7, xmm0, xmm3
    }
  }
  __asm
  {
    vmovss  xmm3, dword ptr [rdi+38h]
    vmovss  xmm4, dword ptr [rsi+38h]
    vmaxss  xmm8, xmm4, xmm3
    vcomiss xmm8, xmm6
  }
  if ( v14 )
  {
    __asm { vxorps  xmm5, xmm5, xmm5 }
  }
  else
  {
    __asm
    {
      vsubss  xmm0, xmm4, xmm3
      vandps  xmm0, xmm0, xmm5
      vdivss  xmm5, xmm0, xmm8
    }
  }
  __asm
  {
    vmovaps xmm8, [rsp+0A8h+var_48]
    vcomiss xmm7, xmm10
    vmovaps xmm10, [rsp+0A8h+var_68]
    vcomiss xmm5, xmm9
    vcomiss xmm4, xmm3
  }
  if ( v14 )
    result = 0i64;
  else
    result = 0xFFFFFFFFi64;
  __asm
  {
    vmovaps xmm6, [rsp+0A8h+var_28]
    vmovaps xmm7, [rsp+0A8h+var_38]
    vmovaps xmm9, [rsp+0A8h+var_58]
  }
  return result;
}

/*
==============
AimAssist_ConvertToClipBounds
==============
*/
bool AimAssist_ConvertToClipBounds(AimAssistGlobals *const aaGlob, const Bounds *bounds, const tmat43_t<vec3_t> *mtx, ExtentBounds *clipBounds)
{
  int v14; 
  bool result; 
  vec3_t in1; 
  vec3_t v58; 
  vec3_t out; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm { vmovaps xmmword ptr [r11-38h], xmm6 }
  _RBX = clipBounds;
  _RSI = bounds;
  if ( !bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 639, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 640, ASSERT_TYPE_ASSERT, "(clipBounds)", (const char *)&queryFormat, "clipBounds") )
    __debugbreak();
  __asm { vmovss  xmm6, dword ptr cs:__xmm@80000000800000008000000080000000 }
  _RBX->mins.v[0] = 3.4028235e38;
  _ER15 = 0;
  _RBX->mins.v[1] = 3.4028235e38;
  v14 = 0;
  _RBX->mins.v[2] = 3.4028235e38;
  _RBX->maxs.v[0] = -3.4028235e38;
  _RBX->maxs.v[1] = -3.4028235e38;
  _RBX->maxs.v[2] = -3.4028235e38;
  do
  {
    __asm
    {
      vmovss  xmm4, dword ptr [rsi+0Ch]
      vxorps  xmm3, xmm4, xmm6
      vmovd   xmm1, r15d
    }
    _EAX = v14 & 1;
    __asm
    {
      vmovd   xmm0, eax
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm1, xmm4, xmm3, xmm2
      vaddss  xmm0, xmm1, dword ptr [rsi]
      vmovss  xmm4, dword ptr [rsi+10h]
      vmovss  dword ptr [rsp+0C8h+in1], xmm0
      vmovd   xmm1, r15d
      vxorps  xmm3, xmm4, xmm6
    }
    _EAX = v14 & 2;
    __asm
    {
      vmovd   xmm0, eax
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm1, xmm4, xmm3, xmm2
      vaddss  xmm0, xmm1, dword ptr [rsi+4]
      vmovss  xmm4, dword ptr [rsi+14h]
      vmovss  dword ptr [rsp+0C8h+in1+4], xmm0
      vmovd   xmm1, r15d
    }
    _EAX = v14 & 4;
    __asm
    {
      vmovd   xmm0, eax
      vpcmpeqd xmm2, xmm0, xmm1
      vxorps  xmm3, xmm4, xmm6
      vblendvps xmm1, xmm4, xmm3, xmm2
      vaddss  xmm0, xmm1, dword ptr [rsi+8]
      vmovss  dword ptr [rsp+0C8h+in1+8], xmm0
    }
    MatrixTransformVector43(&in1, mtx, &out);
    if ( AimAssist_XfmWorldPointToClipSpace(aaGlob, &out, &v58) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx]
        vminss  xmm0, xmm0, dword ptr [rsp+0C8h+var_88]
        vmovss  dword ptr [rbx], xmm0
        vmovss  xmm1, dword ptr [rbx+0Ch]
        vmaxss  xmm2, xmm1, dword ptr [rsp+0C8h+var_88]
        vmovss  dword ptr [rbx+0Ch], xmm2
        vmovss  xmm0, dword ptr [rbx+4]
        vminss  xmm0, xmm0, dword ptr [rsp+0C8h+var_88+4]
        vmovss  dword ptr [rbx+4], xmm0
        vmovss  xmm1, dword ptr [rbx+10h]
        vmaxss  xmm0, xmm1, dword ptr [rsp+0C8h+var_88+4]
        vmovss  dword ptr [rbx+10h], xmm0
        vmovss  xmm2, dword ptr [rbx+8]
        vminss  xmm0, xmm2, dword ptr [rsp+0C8h+var_88+8]
        vmovss  dword ptr [rbx+8], xmm0
        vmovss  xmm1, dword ptr [rbx+14h]
        vmaxss  xmm0, xmm1, dword ptr [rsp+0C8h+var_88+8]
        vmovss  dword ptr [rbx+14h], xmm0
      }
    }
    ++v14;
  }
  while ( v14 < 8 );
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]; val
    vmovss  xmm1, dword ptr [rbx+0Ch]
    vcomiss xmm0, xmm1
    vmovaps [rsp+0C8h+var_48], xmm7
    vmovaps [rsp+0C8h+var_58], xmm8
  }
  result = 0;
  __asm
  {
    vmovaps xmm8, [rsp+0C8h+var_58]
    vmovaps xmm7, [rsp+0C8h+var_48]
    vmovaps xmm6, [rsp+0C8h+var_38]
  }
  return result;
}

/*
==============
AimAssist_CreateScreenMatrix
==============
*/

void __fastcall AimAssist_CreateScreenMatrix(LocalClientNum_t localClientNum, AimAssistGlobals *aaGlob, double tanHalfFovX, double tanHalfFovY)
{
  __int64 v10; 
  unsigned int secureInt32_3_aab; 
  vec3_t origin; 
  __int64 v19; 
  tmat44_t<vec4_t> in2; 
  tmat44_t<vec4_t> mtx; 
  tmat44_t<vec4_t> out; 
  char v23; 
  void *retaddr; 

  _RAX = &retaddr;
  v19 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmm7, xmm3
    vmovaps xmm6, xmm2
  }
  v10 = localClientNum;
  if ( !aaGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 590, ASSERT_TYPE_ASSERT, "(aaGlob)", (const char *)&queryFormat, "aaGlob") )
    __debugbreak();
  aaGlob->screenWidth = scrPlaceViewDisplay[v10].realViewportSize.v[0];
  aaGlob->screenHeight = scrPlaceViewDisplay[v10].realViewportSize.v[1];
  if ( !aaGlob->viewOrigin.initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 221, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
    __debugbreak();
  secureInt32_3_aab = aaGlob->viewOrigin.secureInt32_3_aab;
  LODWORD(origin.v[0]) = ((((_DWORD)aaGlob + 320) ^ secureInt32_3_aab) * ((((_DWORD)aaGlob + 320) ^ secureInt32_3_aab) + 2)) ^ aaGlob->viewOrigin.data[0];
  LODWORD(origin.v[1]) = ((((_DWORD)aaGlob + 324) ^ secureInt32_3_aab) * ((((_DWORD)aaGlob + 324) ^ secureInt32_3_aab) + 2)) ^ aaGlob->viewOrigin.data[1];
  LODWORD(origin.v[2]) = aaGlob->viewOrigin.data[2] ^ ((((_DWORD)aaGlob + 328) ^ secureInt32_3_aab) * ((((_DWORD)aaGlob + 328) ^ secureInt32_3_aab) + 2));
  MatrixForViewerOrthogonal(&origin, &aaGlob->viewAxis, &mtx);
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000; zNear
    vmovaps xmm1, xmm7; tanHalfFovY
    vmovaps xmm0, xmm6; tanHalfFovX
  }
  InfinitePerspectiveMatrix(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, &in2);
  MatrixMultiply44Aligned(&mtx, &in2, &out);
  MatrixTranspose44Aligned(&out, &aaGlob->screenMtx);
  MatrixInverse44Aligned(&aaGlob->screenMtx, &aaGlob->invScreenMtx);
  memset(&origin, 0, sizeof(origin));
  _R11 = &v23;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
AimAssist_DoBoundsIntersectCenterBox
==============
*/

bool __fastcall AimAssist_DoBoundsIntersectCenterBox(const vec2_t *clipMins, const vec2_t *clipMaxs, double clipHalfWidth, double clipHalfHeight)
{
  char v4; 
  char v5; 
  char v8; 
  char v10; 

  __asm
  {
    vcomiss xmm2, dword ptr [rcx]
    vmovss  xmm1, dword ptr cs:__xmm@80000000800000008000000080000000
  }
  if ( v4 )
    goto LABEL_4;
  __asm
  {
    vxorps  xmm0, xmm2, xmm1
    vcomiss xmm0, dword ptr [rdx]
  }
  if ( !(v4 | v5) )
  {
LABEL_4:
    v8 = 0;
    v4 = 0;
    v5 = 1;
  }
  else
  {
    v8 = 1;
  }
  __asm
  {
    vcomiss xmm3, dword ptr [rcx+4]
    vxorps  xmm0, xmm3, xmm1
    vcomiss xmm0, dword ptr [rdx+4]
  }
  if ( v4 | v5 )
    v10 = 1;
  else
    v10 = 0;
  return v8 && v10;
}

/*
==============
AimAssist_DrawCenterBox
==============
*/

void __fastcall AimAssist_DrawCenterBox(AimAssistGlobals *const aaGlob, double verticalOffset, double horizOffset, double clipHalfWidth, float clipHalfHeight, const vec4_t *color)
{
  float fmt; 
  float t1; 
  float v40; 
  float v41; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  _RBX = aaGlob;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmm9, xmm1
    vmovaps xmm6, xmm3
    vmovaps xmm8, xmm2
  }
  if ( !aaGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 2914, ASSERT_TYPE_ASSERT, "(aaGlob)", (const char *)&queryFormat, "aaGlob") )
    __debugbreak();
  __asm
  {
    vmovss  xmm4, dword ptr [rbx+190h]
    vmovss  xmm1, dword ptr [rbx+194h]
    vmovss  xmm3, cs:__real@3f000000
    vmulss  xmm7, xmm4, xmm6
    vmulss  xmm6, xmm1, [rsp+98h+clipHalfHeight]
    vsubss  xmm0, xmm1, xmm6
    vmulss  xmm2, xmm0, xmm3
    vmulss  xmm0, xmm1, xmm9
    vmulss  xmm1, xmm0, xmm3
    vsubss  xmm1, xmm2, xmm1; y
    vsubss  xmm2, xmm4, xmm7
    vmulss  xmm0, xmm4, xmm8
    vmovss  xmm4, cs:__real@3f800000
    vmovss  [rsp+98h+var_60], xmm4
    vaddss  xmm2, xmm2, xmm0
    vxorps  xmm5, xmm5, xmm5
    vmovss  [rsp+98h+var_68], xmm4
    vmulss  xmm0, xmm2, xmm3; x
    vmovss  [rsp+98h+t1], xmm5
    vmovaps xmm3, xmm6; h
    vmovaps xmm2, xmm7; w
    vmovss  dword ptr [rsp+98h+fmt], xmm5
  }
  CL_DrawStretchPicPhysical(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, t1, v40, v41, color, cgMedia.whiteMaterial);
  __asm
  {
    vmovaps xmm6, [rsp+98h+var_18]
    vmovaps xmm7, [rsp+98h+var_28]
    vmovaps xmm8, [rsp+98h+var_38]
    vmovaps xmm9, [rsp+98h+var_48]
  }
}

/*
==============
AimAssist_DrawDebugOverlay
==============
*/

void __fastcall AimAssist_DrawDebugOverlay(LocalClientNum_t localClientNum, __int64 a2, double _XMM2_8)
{
  signed __int64 v3; 
  void *v14; 
  playerState_s *p_predictedPlayerState; 
  const dvar_t *v22; 
  vec4_t *v34; 
  vec4_t *v41; 
  char v72; 
  char v73; 
  vec4_t *v74; 
  const dvar_t *v78; 
  const dvar_t *v81; 
  __int64 v87; 
  const dvar_t *v91; 
  int integer; 
  const dvar_t *v93; 
  const char *v94; 
  const ScreenPlacement *ActivePlacement; 
  GfxFont *FontHandle; 
  const dvar_t *v98; 
  CgWeaponMap *Instance; 
  CgHandler *Handler; 
  const dvar_t *v124; 
  centity_t *Entity; 
  int meleeChargeEnt; 
  CgWeaponMap *v127; 
  CgHandler *v128; 
  CgHandler *v129; 
  CgWeaponMap *v130; 
  int v131; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v133; 
  weapAnimFiles_t v134; 
  __int64 v135; 
  const char *v144; 
  const char *v145; 
  const char *v146; 
  const ScreenPlacement *v147; 
  GfxFont *v149; 
  const dvar_t *v150; 
  const dvar_t *v155; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  float fmtg; 
  float fmth; 
  float fmti; 
  char *fmt; 
  float fmtj; 
  float fmtk; 
  float fmtl; 
  float fmtm; 
  float fmtn; 
  float v186; 
  vec4_t *v187; 
  float v188; 
  float v189; 
  __int64 s2; 
  float s2b; 
  __int64 s2a; 
  int vertAligna; 
  __int64 vertAlign; 
  __int64 scale; 
  float scalea; 
  float scaleb; 
  float scalec; 
  vec4_t *v199; 
  Material *material; 
  double v201; 
  double v202; 
  bool v203; 
  bool IsMeleeAnimHit; 
  int meleeChargeDist; 
  int meleeChargeEntQueued; 
  int v207; 
  vec4_t v208; 
  vec4_t v209; 
  vec4_t highlightColor; 
  vec4_t color; 
  vec4_t v212; 
  vec3_t outAimPos; 
  char dest[6144]; 
  char v225; 

  v14 = alloca(v3);
  __asm
  {
    vmovaps [rsp+19C0h+var_30], xmm6
    vmovaps [rsp+19C0h+var_40], xmm7
    vmovaps [rsp+19C0h+var_50], xmm8
    vmovaps [rsp+19C0h+var_60], xmm9
    vmovaps [rsp+19C0h+var_70], xmm10
    vmovaps [rsp+19C0h+var_80], xmm11
    vmovaps [rsp+19C0h+var_90], xmm12
    vmovaps [rsp+19C0h+var_A0], xmm13
    vmovaps [rsp+19C0h+var_B0], xmm14
    vmovaps [rsp+19C0h+var_C0], xmm15
    vmovups xmm0, cs:__xmm@3e80000000000000000000003f800000
    vmovups xmmword ptr [rbp+18C0h+color], xmm0
    vmovups xmm1, cs:__xmm@3e800000000000003f80000000000000
    vmovups xmmword ptr [rbp+18C0h+var_18F8], xmm1
    vmovups xmm0, cs:__xmm@3e8000003f8000003f80000000000000
    vmovups xmmword ptr [rbp+18C0h+highlightColor], xmm0
  }
  _R15 = AimAssist_GetClientGlobals(localClientNum);
  if ( !_R15->initialized )
    goto LABEL_86;
  p_predictedPlayerState = &CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState;
  *(double *)&_XMM0 = CG_View_GetCrosshairVerticalOffset(localClientNum, p_predictedPlayerState);
  __asm { vmovaps xmm14, xmm0 }
  v22 = DCONST_DVARBOOL_aim_slowdown_debug;
  if ( !DCONST_DVARBOOL_aim_slowdown_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_slowdown_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v22);
  __asm
  {
    vmovss  xmm15, dword ptr cs:__xmm@80000000800000008000000080000000
    vxorps  xmm9, xmm9, xmm9
  }
  if ( v22->current.enabled )
  {
    AimAssist_DrawTargets(localClientNum, p_predictedPlayerState, &color, &highlightColor);
    __asm
    {
      vmovss  xmm0, dword ptr [r15+0E14h]
      vmulss  xmm1, xmm0, dword ptr [r15+1FCh]
      vmulss  xmm3, xmm0, dword ptr [r15+1F8h]; clipHalfWidth
      vmovss  dword ptr [rsp+19C0h+fmt], xmm1
      vxorps  xmm2, xmm2, xmm2; horizOffset
      vmovaps xmm1, xmm14; verticalOffset
    }
    AimAssist_DrawCenterBox(_R15, *(double *)&_XMM1, _XMM2_8, *(double *)&_XMM3, fmta, &v212);
    if ( AimAssist_UsingAdvancedSlowdown(localClientNum) )
    {
      __asm
      {
        vmovups xmm0, cs:__xmm@3e800000000000003f8000003f800000
        vmovups xmmword ptr [rbp+18C0h+var_1928], xmm0
        vmovups xmm1, cs:__xmm@3e8000003f8000003f8000003f800000
        vmovups xmmword ptr [rbp+18C0h+var_1938], xmm1
        vmovss  xmm0, dword ptr [r15+22Ch]
        vmovss  dword ptr [rsp+19C0h+fmt], xmm0
        vmovss  xmm3, dword ptr [r15+228h]; clipHalfWidth
        vxorps  xmm2, xmm2, xmm2; horizOffset
        vmovaps xmm1, xmm14; verticalOffset
      }
      AimAssist_DrawCenterBox(_R15, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, fmtb, &v209);
      v34 = &v208;
      if ( _R15->usingMaxX )
        v34 = &colorYellow;
      __asm
      {
        vmovss  xmm0, cs:SWEET_SPOT_SCALE_LENGTH
        vmulss  xmm2, xmm0, dword ptr [r15+1FCh]
        vmovss  xmm1, cs:SWEET_SPOT_SCALE_WIDTH
        vmulss  xmm3, xmm1, dword ptr [r15+1F8h]; clipHalfWidth
        vmovss  dword ptr [rsp+19C0h+fmt], xmm2
        vmovss  xmm2, dword ptr [r15+0DDCh]; horizOffset
        vmovss  xmm1, dword ptr [r15+0DE8h]; verticalOffset
      }
      AimAssist_DrawCenterBox(_R15, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, fmtc, v34);
      v41 = &v208;
      if ( _R15->usingMaxY )
        v41 = &colorYellow;
      __asm
      {
        vmovss  xmm0, cs:SWEET_SPOT_SCALE_WIDTH
        vmulss  xmm2, xmm0, dword ptr [r15+1FCh]
        vmovss  xmm1, cs:SWEET_SPOT_SCALE_LENGTH
        vmulss  xmm3, xmm1, dword ptr [r15+1F8h]; clipHalfWidth
        vmovss  dword ptr [rsp+19C0h+fmt], xmm2
        vmovss  xmm2, dword ptr [r15+0DE4h]; horizOffset
        vmovss  xmm1, dword ptr [r15+0DE0h]; verticalOffset
      }
      AimAssist_DrawCenterBox(_R15, *(double *)&_XMM1, _XMM2_8, *(double *)&_XMM3, fmtd, v41);
    }
    if ( AimAssist_UsingEnhancedSlowdown(localClientNum) )
    {
      __asm
      {
        vmovss  xmm7, dword ptr [r15+0DF4h]
        vmovss  xmm8, dword ptr [r15+0DF0h]
        vmulss  xmm1, xmm8, xmm8
        vmulss  xmm0, xmm7, xmm7
        vaddss  xmm2, xmm1, xmm0
        vmovss  xmm10, cs:__real@38d1b717
        vcomiss xmm2, xmm10
        vmovups xmm0, cs:__xmm@3f40000000000000000000003f800000
        vmovups xmmword ptr [rbp+18C0h+var_1938], xmm0
        vmovups xmm1, cs:__xmm@3f4000003f8000003f8000003f800000
        vmovups xmmword ptr [rbp+18C0h+var_1928], xmm1
        vmovss  xmm0, dword ptr [r15+0E00h]
        vxorps  xmm0, xmm0, xmm15; Y
        vmovss  xmm1, dword ptr [r15+0E04h]
        vxorps  xmm1, xmm1, xmm15; X
      }
      *(float *)&_XMM0 = atan2f_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vmulss  xmm11, xmm0, cs:__real@42652ee0
        vmovss  xmm2, cs:__real@3f000000
        vmulss  xmm12, xmm2, dword ptr [rcx+rbx+10BCB6B0h]
        vmulss  xmm13, xmm2, dword ptr [rcx+rbx+10BCB6B4h]
        vmovss  xmm6, cs:__real@3c23d70a
        vmovss  dword ptr [rsp+19C0h+fmt], xmm6
        vmovaps xmm3, xmm6; clipHalfWidth
        vmovaps xmm2, xmm8; horizOffset
        vmovaps xmm1, xmm7; verticalOffset
      }
      AimAssist_DrawCenterBox(_R15, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, fmte, &v208);
      __asm
      {
        vmovss  dword ptr [rsp+19C0h+fmt], xmm6
        vmovaps xmm3, xmm6; clipHalfWidth
        vmovss  xmm2, dword ptr [r15+0DF8h]; horizOffset
        vmovss  xmm1, dword ptr [r15+0DFCh]; verticalOffset
      }
      AimAssist_DrawCenterBox(_R15, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, fmtf, &v208);
      __asm
      {
        vmovss  xmm1, dword ptr [r15+0E04h]
        vmovss  xmm0, dword ptr [r15+0E00h]
        vmulss  xmm2, xmm0, xmm0
        vmulss  xmm1, xmm1, xmm1
        vaddss  xmm2, xmm2, xmm1
        vcomiss xmm2, xmm10
      }
      if ( !(v72 | v73) )
      {
        v74 = &v208;
        if ( !_R15->usingNearMissSlowdown )
          v74 = &v209;
        __asm
        {
          vmovss  [rsp+19C0h+scale], xmm11
          vmovss  xmm2, cs:__real@3f800000
          vmovss  [rsp+19C0h+vertAlign], xmm2
          vmovss  [rsp+19C0h+s2], xmm2
          vmovss  dword ptr [rsp+19C0h+var_1998], xmm9
          vmovss  dword ptr [rsp+19C0h+fmt], xmm9
          vmovss  xmm3, cs:__real@43960000; h
          vmovss  xmm2, cs:__real@40a00000; w
          vmovaps xmm1, xmm13; y
          vmovaps xmm0, xmm12; x
        }
        CL_DrawStretchPicPhysicalRotateXY(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2_8, *(float *)&_XMM3, fmtg, v186, s2b, *(float *)&vertAligna, scalea, 1, v74, cgMedia.whiteMaterial);
      }
    }
  }
  v78 = DCONST_DVARBOOL_aim_autoaim_debug;
  if ( !DCONST_DVARBOOL_aim_autoaim_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_autoaim_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v78);
  if ( v78->current.enabled )
  {
    AimAssist_DrawTargets(localClientNum, p_predictedPlayerState, &color, &highlightColor);
    __asm
    {
      vmovss  xmm0, dword ptr [r15+204h]
      vmovss  dword ptr [rsp+19C0h+fmt], xmm0
      vmovss  xmm3, dword ptr [r15+200h]; clipHalfWidth
      vxorps  xmm2, xmm2, xmm2; horizOffset
      vmovaps xmm1, xmm14; verticalOffset
    }
    AimAssist_DrawCenterBox(_R15, *(double *)&_XMM1, _XMM2_8, *(double *)&_XMM3, fmth, &v212);
  }
  v81 = DVARBOOL_scripted_melee_debug;
  if ( !DVARBOOL_scripted_melee_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scripted_melee_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v81);
  __asm
  {
    vmovss  xmm11, cs:__real@3e4ccccd
    vmovss  xmm12, cs:__real@41a00000
  }
  if ( v81->current.enabled && Com_GameMode_SupportsFeature(WEAPON_MANTLE_LADDER|0x80) )
  {
    AimAssist_DrawTargets(localClientNum, p_predictedPlayerState, &color, &highlightColor);
    __asm
    {
      vmovss  xmm0, dword ptr [r15+214h]
      vmovss  dword ptr [rsp+19C0h+fmt], xmm0
      vmovss  xmm3, dword ptr [r15+210h]; clipHalfWidth
      vxorps  xmm2, xmm2, xmm2; horizOffset
      vmovaps xmm1, xmm14; verticalOffset
    }
    AimAssist_DrawCenterBox(_R15, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, fmti, &v212);
    memset_0(dest, 0, sizeof(dest));
    AimAssist_UpdateScriptedMeleeTarget(&_R15->aaSharedGlob, (AimOutput *)&v208);
    if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
      __debugbreak();
    v203 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->otherFlags, ACTIVE, 0x2Fu);
    v87 = -1i64;
    do
      ++v87;
    while ( dest[v87] );
    _RDI = DCONST_DVARMPFLT_scripted_melee_range;
    if ( !DCONST_DVARMPFLT_scripted_melee_range && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scripted_melee_range") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm6, dword ptr [rdi+28h]
      vcvtss2sd xmm6, xmm6, xmm6
    }
    v91 = DCONST_DVARMPINT_scripted_melee_height;
    if ( !DCONST_DVARMPINT_scripted_melee_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scripted_melee_height") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v91);
    integer = v91->current.integer;
    v93 = DCONST_DVARMPINT_scripted_melee_width;
    if ( !DCONST_DVARMPINT_scripted_melee_width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scripted_melee_width") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v93);
    v94 = "NO";
    if ( v203 )
      v94 = "YES";
    LODWORD(s2) = SHIWORD(v208.xyz.z);
    __asm { vmovsd  [rsp+19C0h+var_1998], xmm6 }
    LODWORD(fmt) = integer;
    Com_sprintf(&dest[(int)v87], 6144 - (int)v87, "^7Scripted Melee W|H|R: ^5%i, %i, %.1f\n^7Scripted Melee Target: ^5%i\n^7Scripted Melee Override Set: ^5%s\n", v93->current.unsignedInt, fmt, *(double *)&v187, s2, v94);
    ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
    __asm { vmovaps xmm2, xmm11; scale }
    FontHandle = UI_GetFontHandle(ActivePlacement, 6, *(float *)&_XMM2);
    __asm
    {
      vmovss  [rsp+19C0h+scale], xmm11
      vmovss  dword ptr [rsp+19C0h+var_1998], xmm12
      vmovss  dword ptr [rsp+19C0h+fmt], xmm9
    }
    UI_DrawText(ActivePlacement, dest, 6144, FontHandle, fmtj, v188, 1, 1, scaleb, &colorWhite, 3);
  }
  v98 = DCONST_DVARBOOL_melee_debug;
  if ( !DCONST_DVARBOOL_melee_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "melee_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v98);
  if ( v98->current.enabled )
  {
    if ( _R15->ps.sharedPS.isThirdPerson )
    {
      Instance = CgWeaponMap::GetInstance(localClientNum);
      *(double *)&_XMM0 = BG_GetMeleeRange(Instance, p_predictedPlayerState, 1);
      __asm { vmovaps xmm7, xmm0 }
      _RDI = DCONST_DVARFLT_aim_automelee_thirdPersonAngle;
      if ( !DCONST_DVARFLT_aim_automelee_thirdPersonAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_automelee_thirdPersonAngle") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm
      {
        vmovss  xmm6, dword ptr [rdi+28h]
        vcomiss xmm6, cs:__real@42b40000
      }
      if ( !v72 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 3192, ASSERT_TYPE_ASSERT, "(meleeAngle < 90.0f)", (const char *)&queryFormat, "meleeAngle < 90.0f") )
        __debugbreak();
      __asm { vmulss  xmm0, xmm6, cs:__real@3c8efa35; X }
      *(float *)&_XMM0 = tanf_0(*(float *)&_XMM0);
      __asm { vmulss  xmm6, xmm0, xmm7 }
      Handler = CgHandler::getHandler(localClientNum);
      BG_GetThirdPersonMeleeCone(Handler, p_predictedPlayerState, (vec3_t *)&v208, (vec3_t *)&v209, NULL, NULL);
      __asm
      {
        vmovss  xmm5, dword ptr [rbp+18C0h+var_1928]
        vmulss  xmm1, xmm7, xmm5
        vaddss  xmm1, xmm1, dword ptr [rbp+18C0h+var_1938]
        vmovss  dword ptr [rbp+18C0h+var_1938], xmm1
        vmovss  xmm4, dword ptr [rbp+18C0h+var_1928+4]
        vmulss  xmm2, xmm7, xmm4
        vaddss  xmm1, xmm2, dword ptr [rbp+18C0h+var_1938+4]
        vmovss  dword ptr [rbp+18C0h+var_1938+4], xmm1
        vmovss  xmm3, dword ptr [rbp+18C0h+var_1928+8]
        vmulss  xmm2, xmm7, xmm3
        vaddss  xmm1, xmm2, dword ptr [rbp+18C0h+var_1938+8]
        vmovss  dword ptr [rbp+18C0h+var_1938+8], xmm1
        vxorps  xmm2, xmm5, xmm15
        vmovss  dword ptr [rbp+18C0h+var_1928], xmm2
        vxorps  xmm0, xmm4, xmm15
        vmovss  dword ptr [rbp+18C0h+var_1928+4], xmm0
        vxorps  xmm1, xmm3, xmm15
        vmovss  dword ptr [rbp+18C0h+var_1928+8], xmm1
        vmovaps xmm3, xmm7; length
        vmovaps xmm2, xmm6; radius
      }
      CG_DebugCone((const vec3_t *)&v208, (const vec3_t *)&v209, *(float *)&_XMM2, *(float *)&_XMM3, &colorGreen, 1, 0);
    }
    else
    {
      AimAssist_DrawTargets(localClientNum, p_predictedPlayerState, &color, &highlightColor);
      __asm
      {
        vmovss  xmm0, dword ptr [r15+20Ch]
        vmovss  dword ptr [rsp+19C0h+fmt], xmm0
        vmovss  xmm3, dword ptr [r15+208h]; clipHalfWidth
        vmovaps xmm2, xmm9; horizOffset
        vmovaps xmm1, xmm14; verticalOffset
      }
      AimAssist_DrawCenterBox(_R15, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, fmtk, &v212);
    }
    v124 = DCONST_DVARBOOL_melee_debug;
    if ( !DCONST_DVARBOOL_melee_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "melee_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v124);
    if ( v124->current.enabled && p_predictedPlayerState->meleeChargeEnt >= 0 && p_predictedPlayerState->meleeChargeEnt <= 0x7FEu )
    {
      Entity = CG_GetEntity(localClientNum, p_predictedPlayerState->meleeChargeEnt);
      if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 3213, ASSERT_TYPE_ASSERT, "(targetCent)", (const char *)&queryFormat, "targetCent") )
        __debugbreak();
      if ( !BG_IsRagdollTrajectory(&Entity->nextState.lerp.pos) )
      {
        meleeChargeEnt = p_predictedPlayerState->meleeChargeEnt;
        v127 = CgWeaponMap::GetInstance(localClientNum);
        v128 = CgHandler::getHandler(localClientNum);
        if ( BG_CalcMeleeAimPos(v128, p_predictedPlayerState, v127, meleeChargeEnt, &outAimPos) )
        {
          secure_uint32_3_t::secureInt32_3_Get(&_R15->viewOrigin, (SecureVec3 *)&v208);
          CL_AddDebugLine((const vec3_t *)&v208, &outAimPos, &colorLtBlue, 0, 800, 0);
          memset(&v208, 0, 0xCui64);
        }
      }
    }
    memset_0(dest, 0, sizeof(dest));
    v129 = CgHandler::getHandler(localClientNum);
    v130 = CgWeaponMap::GetInstance(localClientNum);
    v131 = p_predictedPlayerState->weapState[0].weapAnim & 0xFFFFFF7F;
    CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(v130, p_predictedPlayerState);
    v133 = BG_UsingAlternate(p_predictedPlayerState);
    v134 = BG_MapWeaponAnimStateToAnimIndex(v130, p_predictedPlayerState, v131, 0, CurrentWeaponForPlayer, v133, WEAPON_HAND_DEFAULT, v129);
    IsMeleeAnimHit = BG_IsMeleeAnimHit(v134);
    v135 = -1i64;
    do
      ++v135;
    while ( dest[v135] );
    __asm
    {
      vmovss  xmm6, dword ptr [r15+248h]
      vcvtss2sd xmm6, xmm6, xmm6
      vmovss  xmm7, dword ptr [r15+244h]
      vcvtss2sd xmm7, xmm7, xmm7
      vmovss  xmm8, dword ptr [r15+240h]
      vcvtss2sd xmm8, xmm8, xmm8
      vmovss  xmm10, dword ptr [r15+23Ch]
      vcvtss2sd xmm10, xmm10, xmm10
    }
    v144 = s_autoMeleeStateNames[_R15->aaSharedGlob.autoMeleeState];
    meleeChargeDist = p_predictedPlayerState->meleeChargeDist;
    meleeChargeEntQueued = p_predictedPlayerState->meleeChargeEntQueued;
    v207 = _R15->ps.sharedPS.meleeChargeEnt;
    if ( _R15->ps.sharedPS.weaponState == 23 )
    {
      v145 = "F";
    }
    else
    {
      v145 = j_va("%i", (unsigned int)_R15->ps.sharedPS.meleeCount);
      if ( BG_IsMeleeAnim(v134) )
      {
        v146 = "(MISS)";
        if ( IsMeleeAnimHit )
          v146 = "(HIT)";
        goto LABEL_75;
      }
    }
    v146 = (char *)&queryFormat.fmt + 3;
LABEL_75:
    __asm
    {
      vmovsd  [rsp+19C0h+var_1958], xmm6
      vmovsd  [rsp+19C0h+var_1960], xmm7
      vmovsd  [rsp+19C0h+material], xmm8
      vmovsd  [rsp+19C0h+var_1970], xmm10
    }
    LODWORD(scale) = meleeChargeDist;
    LODWORD(vertAlign) = meleeChargeEntQueued;
    LODWORD(s2a) = v207;
    Com_sprintf(&dest[(int)v135], 6144 - (int)v135, "^7PS Weapon State: ^5%s %s\n^7PS Melee Count: ^5%s\n^7PS Charge Target: ^5%i\n^7PS Charge Queued: ^5%i\n^7PS Charge Dist: ^5%i\n^7Melee State: ^5%s\n^7Melee Initial P,Y: ^5%.2f, %.2f\n^7Melee P,Y: ^5%.2f, %.2f\n", s_weaponStateNames[_R15->ps.sharedPS.weaponState], v146, v145, s2a, vertAlign, scale, v144, *(double *)&v199, *(double *)&material, v201, v202);
    v147 = ScrPlace_GetActivePlacement(localClientNum);
    __asm { vmovaps xmm2, xmm11; scale }
    v149 = UI_GetFontHandle(v147, 6, *(float *)&_XMM2);
    __asm
    {
      vmovss  [rsp+19C0h+scale], xmm11
      vmovss  dword ptr [rsp+19C0h+var_1998], xmm12
      vmovss  dword ptr [rsp+19C0h+fmt], xmm9
    }
    UI_DrawText(v147, dest, 6144, v149, fmtl, v189, 1, 1, scalec, &colorWhite, 3);
  }
  v150 = DCONST_DVARBOOL_aim_lockon_debug;
  if ( !DCONST_DVARBOOL_aim_lockon_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_lockon_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v150);
  if ( v150->current.enabled )
  {
    AimAssist_DrawTargets(localClientNum, p_predictedPlayerState, &color, &highlightColor);
    __asm
    {
      vmovss  xmm0, dword ptr [r15+21Ch]
      vmovss  dword ptr [rsp+19C0h+fmt], xmm0
      vmovss  xmm3, dword ptr [r15+218h]; clipHalfWidth
      vmovaps xmm2, xmm9; horizOffset
      vmovaps xmm1, xmm14; verticalOffset
    }
    AimAssist_DrawCenterBox(_R15, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, fmtm, &v212);
  }
  v155 = DCONST_DVARBOOL_mount_aim_debug;
  if ( !DCONST_DVARBOOL_mount_aim_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_aim_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v155);
  if ( v155->current.enabled )
  {
    AimAssist_DrawTargets(localClientNum, p_predictedPlayerState, &color, &highlightColor);
    __asm
    {
      vmovss  xmm0, dword ptr [r15+224h]
      vmovss  dword ptr [rsp+19C0h+fmt], xmm0
      vmovss  xmm3, dword ptr [r15+220h]; clipHalfWidth
      vmovaps xmm2, xmm9; horizOffset
      vmovaps xmm1, xmm14; verticalOffset
    }
    AimAssist_DrawCenterBox(_R15, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, fmtn, &v212);
  }
LABEL_86:
  _R11 = &v225;
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
AimAssist_DrawTargets
==============
*/
void AimAssist_DrawTargets(LocalClientNum_t localClientNum, const playerState_s *ps, const vec4_t *color, const vec4_t *highlightColor)
{
  bool v22; 
  bool v25; 
  CgWeaponMap *Instance; 
  const ScreenPlacement *ActivePlacement; 
  const dvar_t *v30; 
  bool v31; 
  const dvar_t *v34; 
  const AimScreenTarget *v35; 
  unsigned __int8 v36; 
  const dvar_t *v39; 
  const AimScreenTarget *BestTarget; 
  int v43; 
  const dvar_t *v47; 
  const dvar_t *v48; 
  const dvar_t *v49; 
  const dvar_t *v51; 
  const dvar_t *v52; 
  const char *v74; 
  const char *v77; 
  const char *v91; 
  const char *v104; 
  const char *v110; 
  const char *v111; 
  const dvar_t *v112; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  char *fmte; 
  float fmtf; 
  float fmtg; 
  float fmth; 
  float fmti; 
  int prevTargetEnt; 
  int prevTargetEnta; 
  int prevTargetEntb; 
  int prevTargetEntc; 
  int prevTargetEntd; 
  int prevTargetEnte; 
  int prevTargetEntf; 
  float s2; 
  int vertAlign; 
  float colora; 
  float colorb; 
  float colorc; 
  float colord; 
  float colore; 
  float colorf; 
  float material; 
  float materiala; 
  float materialb; 
  float materialc; 
  float materiald; 
  float materiale; 
  bool v154; 
  const AimScreenTarget *v155; 
  ScreenPlacement *scrPlace; 
  vec4_t v159; 

  _RBP = highlightColor;
  _R14 = color;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 2943, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  _RAX = AimAssist_GetClientGlobals(localClientNum);
  _RDI = _RAX;
  if ( _RAX->ps.sharedPS.weapon.weaponIdx )
  {
    __asm
    {
      vmovaps [rsp+178h+var_48], xmm6
      vmovss  xmm6, dword ptr [rax+184h]
      vmovaps [rsp+178h+var_78], xmm9
      vmovaps [rsp+178h+var_B8], xmm13
      vmovaps [rsp+178h+var_C8], xmm14
      vmovaps [rsp+178h+var_D8], xmm15
    }
    v22 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&_RAX->ps.sharedPS.weapFlags, ACTIVE, 0x11u);
    __asm { vmovaps xmm3, xmm6; adsLerp }
    *(float *)&_XMM0 = AimAssist_GetAimAssistRange(_RDI, &_RDI->ps.sharedPS.weapon, v22, *(float *)&_XMM3);
    __asm { vmovaps xmm14, xmm0 }
    v25 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&_RDI->ps.sharedPS.weapFlags, ACTIVE, 0x11u);
    *(float *)&_XMM0 = AimAssist_GetAutoAimRange(&_RDI->ps.sharedPS.weapon, v25);
    __asm { vmovaps xmm9, xmm0 }
    Instance = CgWeaponMap::GetInstance(localClientNum);
    *(double *)&_XMM0 = BG_GetMeleeRange(Instance, ps, 1);
    __asm { vmovaps xmm15, xmm0 }
    ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
    v30 = DVARBOOL_scripted_melee_debug;
    scrPlace = (ScreenPlacement *)ActivePlacement;
    if ( !DVARBOOL_scripted_melee_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scripted_melee_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v30);
    v31 = v30->current.enabled && Com_GameMode_SupportsFeature(WEAPON_MANTLE_LADDER|0x80);
    _RBX = DCONST_DVARMPFLT_scripted_melee_range;
    v154 = v31;
    if ( !DCONST_DVARMPFLT_scripted_melee_range && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scripted_melee_range") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm13, dword ptr [rbx+28h] }
    v34 = DCONST_DVARBOOL_aim_autoaim_debug;
    v35 = NULL;
    v36 = 0;
    v155 = NULL;
    if ( !DCONST_DVARBOOL_aim_autoaim_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_autoaim_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v34);
    if ( v34->current.enabled )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+204h]
        vmovss  xmm3, dword ptr [rdi+200h]
      }
    }
    else
    {
      if ( v31 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+214h]
          vmovss  xmm3, dword ptr [rdi+210h]
        }
        v36 = 2;
        __asm { vmovaps xmm2, xmm13 }
LABEL_33:
        __asm { vmovss  dword ptr [rsp+178h+fmt], xmm0 }
        BestTarget = AimAssist_GetBestTarget(&_RDI->aaSharedGlob, (const AimTargetFlags)v36, *(float *)&_XMM2, *(float *)&_XMM3, fmta);
        goto LABEL_34;
      }
      v39 = DCONST_DVARBOOL_melee_debug;
      if ( !DCONST_DVARBOOL_melee_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "melee_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v39);
      if ( v39->current.enabled )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+20Ch]
          vmovss  xmm3, dword ptr [rdi+208h]
        }
        v36 = 2;
LABEL_32:
        __asm { vmovaps xmm2, xmm9; range }
        goto LABEL_33;
      }
      if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_aim_lockon_debug, "aim_lockon_debug") )
      {
        v36 = 1;
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+21Ch]
          vmovss  xmm3, dword ptr [rdi+218h]; regionWidth
          vmovaps xmm2, xmm14; range
          vmovss  dword ptr [rsp+178h+fmt], xmm0
        }
        BestTarget = AimAssist_GetPrevOrBestTarget(_RDI, BRUSHMODEL, *(float *)&_XMM2, *(float *)&_XMM3, fmt, _RDI->lockOnTargetEnt);
LABEL_34:
        v35 = BestTarget;
        v155 = BestTarget;
        goto LABEL_35;
      }
      if ( !Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_mount_aim_debug, "mount_aim_debug") )
      {
LABEL_35:
        v43 = 0;
        if ( _RDI->aaSharedGlob.screenTargetCount > 0 )
        {
          __asm { vmovaps [rsp+178h+var_58], xmm7 }
          _RBX = &_RDI->aaSharedGlob.screenTargets[0].velocity.v[2];
          __asm
          {
            vmovss  xmm7, cs:__real@3f800000
            vmovaps [rsp+178h+var_A8], xmm12
            vmovss  xmm12, cs:__real@3f000000
            vmovaps [rsp+178h+var_68], xmm8
            vmovaps [rsp+178h+var_88], xmm10
            vmovaps [rsp+178h+var_98], xmm11
          }
          do
          {
            if ( (v36 & (_BYTE)_RBX[5]) != 0 )
            {
              v47 = DCONST_DVARBOOL_aim_autoaim_debug;
              if ( !DCONST_DVARBOOL_aim_autoaim_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_autoaim_debug") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v47);
              if ( v47->current.enabled )
              {
                __asm
                {
                  vmulss  xmm0, xmm9, xmm9
                  vcomiss xmm0, dword ptr [rbx+0Ch]
                }
              }
              if ( v154 )
              {
                __asm
                {
                  vmulss  xmm0, xmm13, xmm13
                  vcomiss xmm0, dword ptr [rbx+0Ch]
                }
              }
              v48 = DCONST_DVARBOOL_melee_debug;
              if ( !DCONST_DVARBOOL_melee_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "melee_debug") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v48);
              if ( v48->current.enabled )
              {
                __asm
                {
                  vmulss  xmm0, xmm15, xmm15
                  vcomiss xmm0, dword ptr [rbx+0Ch]
                }
              }
              v49 = DCONST_DVARBOOL_aim_slowdown_debug;
              if ( !DCONST_DVARBOOL_aim_slowdown_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_slowdown_debug") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v49);
              __asm { vmulss  xmm6, xmm14, xmm14 }
              if ( v49->current.enabled )
                __asm { vcomiss xmm6, dword ptr [rbx+0Ch] }
              v51 = DCONST_DVARBOOL_aim_lockon_debug;
              if ( !DCONST_DVARBOOL_aim_lockon_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_lockon_debug") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v51);
              if ( v51->current.enabled )
                __asm { vcomiss xmm6, dword ptr [rbx+0Ch] }
              v52 = DCONST_DVARBOOL_mount_aim_debug;
              if ( !DCONST_DVARBOOL_mount_aim_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_aim_debug") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v52);
              if ( v52->current.enabled )
                __asm { vcomiss xmm6, dword ptr [rbx+0Ch] }
              __asm
              {
                vmulss  xmm4, xmm12, dword ptr [rdi+190h]
                vaddss  xmm2, xmm7, dword ptr [rbx-24h]
                vmulss  xmm3, xmm12, dword ptr [rdi+194h]
                vaddss  xmm1, xmm7, dword ptr [rbx-1Ch]
                vmulss  xmm8, xmm2, xmm4
                vaddss  xmm2, xmm7, dword ptr [rbx-20h]
                vmulss  xmm6, xmm2, xmm3
                vmulss  xmm2, xmm1, xmm4
                vaddss  xmm1, xmm7, dword ptr [rbx-18h]
                vsubss  xmm10, xmm2, xmm8
                vmulss  xmm2, xmm1, xmm3
                vsubss  xmm11, xmm2, xmm6
              }
              *(double *)&_XMM0 = CG_View_GetCrosshairVerticalOffset(localClientNum, ps);
              __asm
              {
                vmulss  xmm1, xmm0, dword ptr [rdi+194h]
                vmulss  xmm2, xmm1, xmm12
                vsubss  xmm6, xmm6, xmm2
              }
              if ( v35 == (const AimScreenTarget *)(_RBX - 10) )
                __asm { vmovups xmm0, xmmword ptr [rbp+0] }
              else
                __asm { vmovups xmm0, xmmword ptr [r14] }
              __asm
              {
                vmovups xmmword ptr [rsp+178h+var_F0], xmm0
                vxorps  xmm0, xmm0, xmm0
                vmovss  [rsp+178h+vertAlign], xmm7
                vmovss  [rsp+178h+s2], xmm7
                vmovss  [rsp+178h+prevTargetEnt], xmm0
                vmovss  dword ptr [rsp+178h+fmt], xmm0
                vmovaps xmm0, xmm8; x
                vmovaps xmm3, xmm11; h
                vmovaps xmm2, xmm10; w
                vmovaps xmm1, xmm6; y
              }
              CL_DrawStretchPicPhysical(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, *(float *)&prevTargetEnt, s2, *(float *)&vertAlign, &v159, cgMedia.whiteMaterial);
              v74 = j_va("Pri: %i", (unsigned int)v43);
              __asm
              {
                vmovss  dword ptr [rsp+178h+material], xmm7
                vmovss  dword ptr [rsp+178h+color], xmm7
                vmovss  [rsp+178h+prevTargetEnt], xmm6
                vmovss  dword ptr [rsp+178h+fmt], xmm8
              }
              CL_DrawText(scrPlace, v74, 0x7FFFFFFF, cls.smallDevFont, fmtc, *(float *)&prevTargetEnta, 5, 5, colora, material, &colorYellow, 0);
              __asm
              {
                vmovss  xmm10, cs:__real@41200000
                vsubss  xmm6, xmm6, xmm10
              }
              v77 = j_va("Ent: %i", *((unsigned int *)_RBX - 10));
              __asm
              {
                vmovss  dword ptr [rsp+178h+material], xmm7
                vmovss  dword ptr [rsp+178h+color], xmm7
                vmovss  [rsp+178h+prevTargetEnt], xmm6
                vmovss  dword ptr [rsp+178h+fmt], xmm8
              }
              CL_DrawText(scrPlace, v77, 0x7FFFFFFF, cls.smallDevFont, fmtd, *(float *)&prevTargetEntb, 5, 5, colorb, materiala, &colorYellow, 0);
              __asm
              {
                vmovss  xmm0, dword ptr [rbx+0Ch]
                vmovss  xmm3, dword ptr [rbx-10h]
                vmovss  xmm2, dword ptr [rbx-14h]
                vmovss  xmm4, dword ptr [rbx-0Ch]
                vsqrtss xmm0, xmm0, xmm0
                vcvtss2sd xmm1, xmm0, xmm0
                vcvtss2sd xmm3, xmm3, xmm3
                vcvtss2sd xmm2, xmm2, xmm2
                vcvtss2sd xmm4, xmm4, xmm4
                vmovq   rdx, xmm1
                vmovq   r9, xmm3
                vmovq   r8, xmm2
                vmovsd  [rsp+178h+fmt], xmm4
                vsubss  xmm6, xmm6, xmm10
              }
              v91 = j_va("Dist: %.2f (%.1f,%.1f,%.1f)", _RDX, _R8, _R9, fmte);
              __asm
              {
                vmovss  dword ptr [rsp+178h+material], xmm7
                vmovss  dword ptr [rsp+178h+color], xmm7
                vmovss  [rsp+178h+prevTargetEnt], xmm6
                vmovss  dword ptr [rsp+178h+fmt], xmm8
              }
              CL_DrawText(scrPlace, v91, 0x7FFFFFFF, cls.smallDevFont, fmtf, *(float *)&prevTargetEntc, 5, 5, colorc, materialb, &colorWhite, 0);
              __asm
              {
                vmovss  xmm0, dword ptr [rbx-8]
                vmovss  xmm2, dword ptr [rbx-4]
                vmovss  xmm3, dword ptr [rbx]
                vmulss  xmm1, xmm0, xmm0
                vmulss  xmm0, xmm2, xmm2
                vaddss  xmm2, xmm1, xmm0
                vmulss  xmm1, xmm3, xmm3
                vaddss  xmm2, xmm2, xmm1
                vsqrtss xmm0, xmm2, xmm2
                vcvtss2sd xmm1, xmm0, xmm0
                vmovq   rdx, xmm1
                vsubss  xmm6, xmm6, xmm10
              }
              v104 = j_va("Speed: %.2f", _RDX);
              __asm
              {
                vmovss  dword ptr [rsp+178h+material], xmm7
                vmovss  dword ptr [rsp+178h+color], xmm7
                vmovss  [rsp+178h+prevTargetEnt], xmm6
                vmovss  dword ptr [rsp+178h+fmt], xmm8
              }
              CL_DrawText(scrPlace, v104, 0x7FFFFFFF, cls.smallDevFont, fmtg, *(float *)&prevTargetEntd, 5, 5, colord, materialc, &colorWhite, 0);
              __asm
              {
                vmovss  xmm0, dword ptr [rbx+10h]
                vsqrtss xmm0, xmm0, xmm0
                vcvtss2sd xmm1, xmm0, xmm0
                vmovq   rdx, xmm1
                vsubss  xmm6, xmm6, xmm10
              }
              v110 = j_va("XHairDist: %.4f", _RDX);
              __asm
              {
                vmovss  dword ptr [rsp+178h+material], xmm7
                vmovss  dword ptr [rsp+178h+color], xmm7
                vmovss  [rsp+178h+prevTargetEnt], xmm6
                vmovss  dword ptr [rsp+178h+fmt], xmm8
              }
              CL_DrawText(scrPlace, v110, 0x7FFFFFFF, cls.smallDevFont, fmth, *(float *)&prevTargetEnte, 5, 5, colore, materiald, &colorWhite, 0);
              v111 = "Not Character";
              if ( *((_DWORD *)_RBX + 6) )
                v111 = "Character";
              __asm
              {
                vmovss  dword ptr [rsp+178h+material], xmm7
                vmovss  dword ptr [rsp+178h+color], xmm7
                vsubss  xmm0, xmm6, xmm10
                vmovss  [rsp+178h+prevTargetEnt], xmm0
                vmovss  dword ptr [rsp+178h+fmt], xmm8
              }
              CL_DrawText(scrPlace, v111, 0x7FFFFFFF, cls.smallDevFont, fmti, *(float *)&prevTargetEntf, 5, 5, colorf, materiale, &colorWhite, 0);
              v112 = DCONST_DVARBOOL_aim_autoaim_debug;
              if ( !DCONST_DVARBOOL_aim_autoaim_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_autoaim_debug") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v112);
              if ( v112->current.enabled )
                CL_AddDebugStar((const vec3_t *)(_RBX - 5), &colorRed, 0, 0, 0);
            }
            v35 = v155;
            ++v43;
            _RBX += 18;
          }
          while ( v43 < _RDI->aaSharedGlob.screenTargetCount );
          __asm
          {
            vmovaps xmm12, [rsp+178h+var_A8]
            vmovaps xmm11, [rsp+178h+var_98]
            vmovaps xmm10, [rsp+178h+var_88]
            vmovaps xmm8, [rsp+178h+var_68]
            vmovaps xmm7, [rsp+178h+var_58]
          }
        }
        __asm
        {
          vmovaps xmm14, [rsp+178h+var_C8]
          vmovaps xmm13, [rsp+178h+var_B8]
          vmovaps xmm9, [rsp+178h+var_78]
          vmovaps xmm6, [rsp+178h+var_48]
          vmovaps xmm15, [rsp+178h+var_D8]
        }
        return;
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+224h]
        vmovss  xmm3, dword ptr [rdi+220h]; regionWidth
      }
    }
    v36 = 1;
    goto LABEL_32;
  }
}

/*
==============
AimAssist_EntityInClipBounds
==============
*/
bool AimAssist_EntityInClipBounds(LocalClientNum_t localClientNum, centity_t *cent)
{
  AimAssistGlobals *ClientGlobals; 
  const DObj *ClientDObj; 
  Bounds bounds; 
  ExtentBounds outPos; 
  tmat43_t<vec3_t> axis; 

  ClientGlobals = AimAssist_GetClientGlobals(localClientNum);
  if ( !ClientGlobals->initialized )
    return 0;
  if ( (cent->flags & 1) == 0 )
    return 0;
  if ( !BG_IsCharacterEntity(&cent->nextState) )
    return 0;
  AnglesToAxis(&cent->pose.angles, (tmat33_t<vec3_t> *)&axis);
  CG_GetPoseOrigin(&cent->pose, &axis.m[3]);
  ClientDObj = Com_GetClientDObj(cent->nextState.number, localClientNum);
  if ( !ClientDObj )
    return 0;
  if ( !CG_DObjGetWorldTagPos(&cent->pose, ClientDObj, scr_const.aim_highest_bone, &outPos.mins) )
    return 0;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rsp+0A8h+bounds.midPoint], xmm0
    vmovss  dword ptr [rsp+0A8h+bounds.midPoint+4], xmm0
    vmovss  xmm0, dword ptr [rsp+0A8h+outPos+8]
    vsubss  xmm1, xmm0, dword ptr [rsp+0A8h+outOrigin+8]
    vmulss  xmm2, xmm1, cs:__real@3f000000
    vmovss  xmm0, cs:__real@41200000
    vmovss  dword ptr [rsp+0A8h+bounds.midPoint+8], xmm2
    vmovss  dword ptr [rsp+0A8h+bounds.halfSize+8], xmm2
    vmovss  dword ptr [rsp+0A8h+bounds.halfSize], xmm0
    vmovss  dword ptr [rsp+0A8h+bounds.halfSize+4], xmm0
  }
  return AimAssist_ConvertToClipBounds(ClientGlobals, &bounds, &axis, &outPos);
}

/*
==============
AimAssist_FreeClientMemory
==============
*/
void AimAssist_FreeClientMemory(void)
{
  aaGlobArray = NULL;
}

/*
==============
AimAssist_GetAimAssistRange
==============
*/

float __fastcall AimAssist_GetAimAssistRange(AimAssistGlobals *const aaGlob, const Weapon *weapon, bool isAlternate, double adsLerp)
{
  const dvar_t *v27; 
  double v33; 
  double v34; 
  double v35; 
  float aimAssistRangeAds[4]; 
  float aimAssistRange; 

  __asm
  {
    vmovaps [rsp+88h+var_18], xmm6
    vmovaps [rsp+88h+var_28], xmm7
    vmovss  xmm7, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm3, xmm0
    vmovaps [rsp+88h+var_38], xmm8
    vmovaps xmm6, xmm3
    vcomiss xmm3, xmm7
    vmovsd  xmm0, cs:__real@3ff0000000000000
    vmovsd  [rsp+88h+var_50], xmm0
    vxorpd  xmm1, xmm1, xmm1
    vmovsd  [rsp+88h+var_58], xmm1
    vcvtss2sd xmm2, xmm6, xmm6
    vmovsd  [rsp+88h+var_60], xmm2
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 679, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( adsLerp ) && ( adsLerp ) <= ( 1.0f )", "adsLerp not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v33, v34, v35) )
    __debugbreak();
  BG_AimAssistRange(weapon, isAlternate, &aimAssistRange, aimAssistRangeAds);
  __asm
  {
    vmulss  xmm2, xmm6, [rsp+88h+aimAssistRangeAds]
    vsubss  xmm0, xmm7, xmm6
    vmulss  xmm3, xmm0, [rsp+88h+aimAssistRange]
    vaddss  xmm8, xmm3, xmm2
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|0x80) && BG_GetWeaponClass(weapon, isAlternate) == WEAPCLASS_SNIPER )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3a83126f
      vmovss  xmm2, [rsp+88h+aimAssistRange]
      vsubss  xmm1, xmm6, xmm7
      vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcmpless xmm3, xmm0, xmm1
      vmovss  xmm1, [rsp+88h+aimAssistRangeAds]
      vblendvps xmm8, xmm1, xmm2, xmm3
    }
  }
  v27 = DCONST_DVARMPFLT_aim_aimAssistRangeScale;
  if ( !DCONST_DVARMPFLT_aim_aimAssistRangeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_aimAssistRangeScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v27);
  __asm
  {
    vmulss  xmm0, xmm8, dword ptr [rbx+28h]
    vmovaps xmm8, [rsp+88h+var_38]
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm7, [rsp+88h+var_28]
  }
  return *(float *)&_XMM0;
}

/*
==============
AimAssist_GetAutoAimRange
==============
*/
float AimAssist_GetAutoAimRange(const Weapon *weapon, bool isAlternate)
{
  _RBX = DVARFLT_aim_autoAimRangeScale;
  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  if ( !DVARFLT_aim_autoAimRangeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_autoAimRangeScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm6, dword ptr [rbx+28h] }
  *(double *)&_XMM0 = BG_AutoAimRange(weapon, isAlternate);
  __asm
  {
    vmulss  xmm0, xmm0, xmm6
    vmovaps xmm6, [rsp+58h+var_18]
  }
  return *(float *)&_XMM0;
}

/*
==============
AimAssist_GetBestTarget
==============
*/

const AimScreenTarget *__fastcall AimAssist_GetBestTarget(const AimAssistSharedGlobals *aaSharedGlob, const AimTargetFlags flags, double range, double regionWidth, float regionHeight)
{
  unsigned __int8 v8; 
  __int64 screenTargetCount; 
  __int64 v16; 
  bool v18; 
  char v21; 
  bool v23; 
  const AimScreenTarget *result; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  v8 = flags;
  __asm
  {
    vmovaps [rsp+58h+var_28], xmm7
    vmovaps xmm7, xmm3
    vmovaps xmm6, xmm2
  }
  if ( !aaSharedGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 3363, ASSERT_TYPE_ASSERT, "(aaSharedGlob)", (const char *)&queryFormat, "aaSharedGlob") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  screenTargetCount = aaSharedGlob->screenTargetCount;
  if ( screenTargetCount <= 0 )
  {
LABEL_16:
    result = NULL;
  }
  else
  {
    __asm
    {
      vmovss  xmm1, [rsp+58h+regionHeight]
      vmovss  xmm2, dword ptr cs:__xmm@80000000800000008000000080000000
    }
    v16 = 0i64;
    _RAX = (float *)&aaSharedGlob->screenTargets[0].clipMaxs + 1;
    while ( 1 )
    {
      v18 = (v8 & (_BYTE)_RAX[11]) == 0;
      if ( (v8 & (_BYTE)_RAX[11]) != 0 )
      {
        __asm
        {
          vmulss  xmm0, xmm6, xmm6
          vcomiss xmm0, dword ptr [rax+24h]
          vcomiss xmm7, dword ptr [rax-0Ch]
          vxorps  xmm0, xmm7, xmm2
          vcomiss xmm0, dword ptr [rax-4]
        }
        if ( (v8 & (_BYTE)_RAX[11]) != 0 )
        {
          v21 = 0;
          v18 = 1;
        }
        else
        {
          v21 = 1;
        }
        __asm
        {
          vcomiss xmm1, dword ptr [rax-8]
          vxorps  xmm0, xmm1, xmm2
          vcomiss xmm0, dword ptr [rax]
        }
        v23 = v18;
        if ( v21 && v23 )
          break;
      }
      ++v16;
      _RAX += 18;
      if ( v16 >= screenTargetCount )
        goto LABEL_16;
    }
    result = (const AimScreenTarget *)(_RAX - 4);
  }
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
  }
  return result;
}

/*
==============
AimAssist_GetBoundsFromTarget
==============
*/
float AimAssist_GetBoundsFromTarget(const AimTarget *target, Bounds *outBounds)
{
  char v10; 
  char v12; 

  __asm { vmovaps [rsp+68h+var_18], xmm6 }
  _RBX = outBounds;
  _RDI = target;
  if ( !target && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1002, ASSERT_TYPE_ASSERT, "(target)", (const char *)&queryFormat, "target") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1003, ASSERT_TYPE_ASSERT, "(outBounds)", (const char *)&queryFormat, "outBounds") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi+8]
    vmovups xmmword ptr [rbx], xmm0
    vmovsd  xmm1, qword ptr [rdi+18h]
    vmovsd  qword ptr [rbx+10h], xmm1
  }
  _RDI = DCONST_DVARMPFLT_aim_boundsOffsetScale;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  if ( !DCONST_DVARMPFLT_aim_boundsOffsetScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_boundsOffsetScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm1, dword ptr [rdi+28h]
    vcomiss xmm1, cs:__real@3a83126f
  }
  if ( v10 | v12 )
  {
    __asm
    {
      vmovaps xmm6, [rsp+68h+var_18]
      vxorps  xmm0, xmm0, xmm0
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm2, dword ptr [rbx+14h]
      vmulss  xmm0, xmm1, xmm2
      vmovss  dword ptr [rbx+14h], xmm0
      vmulss  xmm0, xmm1, dword ptr [rbx+8]
      vmovss  xmm1, cs:__real@40000000
      vmulss  xmm2, xmm1, xmm2
      vmovss  dword ptr [rbx+8], xmm0
      vmulss  xmm1, xmm1, dword ptr [rbx+14h]
      vmovaps [rsp+68h+var_28], xmm7
      vsubss  xmm7, xmm2, xmm1
      vcomiss xmm7, xmm6
    }
    if ( v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1022, ASSERT_TYPE_ASSERT, "(returnOffset >= 0.0f)", (const char *)&queryFormat, "returnOffset >= 0.0f") )
      __debugbreak();
    __asm
    {
      vmovaps xmm0, xmm7
      vmovaps xmm7, [rsp+68h+var_28]
      vmovaps xmm6, [rsp+68h+var_18]
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
AimAssist_GetClientGlobals
==============
*/
AimAssistGlobals *AimAssist_GetClientGlobals(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v4; 
  int v5; 

  v1 = localClientNum;
  if ( localClientNum >= (unsigned int)cg_maxLocalClients )
  {
    v5 = cg_maxLocalClients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 119, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_maxLocalClients )", "localClientNum doesn't index cg_maxLocalClients\n\t%i not in [0, %i)", localClientNum, v5) )
      __debugbreak();
  }
  if ( !aaGlobArray )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 120, ASSERT_TYPE_ASSERT, "(aaGlobArray)", "%s\n\tTrying to access unallocated aaGlobArray for localClientNum %i", "aaGlobArray", v4) )
      __debugbreak();
  }
  return &aaGlobArray[v1];
}

/*
==============
AimAssist_GetClipHeightFromVirtualHeight
==============
*/

float __fastcall AimAssist_GetClipHeightFromVirtualHeight(LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, double virtualHeight)
{
  char v9; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm2
  }
  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 225, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  __asm { vxorps  xmm0, xmm0, xmm0 }
  _RDI = AimAssist_GetClientGlobals(localClientNum);
  __asm { vucomiss xmm0, dword ptr [rax+194h] }
  if ( v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 229, ASSERT_TYPE_ASSERT, "(aaGlob->screenHeight != 0.0f)", (const char *)&queryFormat, "aaGlob->screenHeight != 0.0f") )
    __debugbreak();
  __asm
  {
    vmulss  xmm1, xmm6, cs:?cg_hudSplitscreenScale@@3MA; float cg_hudSplitscreenScale
    vmulss  xmm2, xmm1, dword ptr [rbx+4]
    vdivss  xmm0, xmm2, dword ptr [rdi+194h]
    vmovaps xmm6, [rsp+48h+var_18]
  }
  return *(float *)&_XMM0;
}

/*
==============
AimAssist_GetClipWidthFromVirtualWidth
==============
*/

float __fastcall AimAssist_GetClipWidthFromVirtualWidth(LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, double virtualWidth)
{
  char v9; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm2
  }
  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 212, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  __asm { vxorps  xmm0, xmm0, xmm0 }
  _RDI = AimAssist_GetClientGlobals(localClientNum);
  __asm { vucomiss xmm0, dword ptr [rax+190h] }
  if ( v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 216, ASSERT_TYPE_ASSERT, "(aaGlob->screenWidth != 0.0f)", (const char *)&queryFormat, "aaGlob->screenWidth != 0.0f") )
    __debugbreak();
  __asm
  {
    vmulss  xmm1, xmm6, cs:?cg_hudSplitscreenScale@@3MA; float cg_hudSplitscreenScale
    vmulss  xmm2, xmm1, dword ptr [rbx]
    vdivss  xmm0, xmm2, dword ptr [rdi+190h]
    vmovaps xmm6, [rsp+48h+var_18]
  }
  return *(float *)&_XMM0;
}

/*
==============
AimAssist_GetMovingPlatformDataFromClient
==============
*/
__int64 AimAssist_GetMovingPlatformDataFromClient(LocalClientNum_t localClientNum)
{
  AimAssistGlobals *ClientGlobals; 

  ClientGlobals = AimAssist_GetClientGlobals(localClientNum);
  if ( ClientGlobals )
    return (__int64)&ClientGlobals->moverData;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 3312, ASSERT_TYPE_ASSERT, "(aaGlob)", (const char *)&queryFormat, "aaGlob") )
    __debugbreak();
  return 3004i64;
}

/*
==============
AimAssist_GetPrevOrBestTarget
==============
*/

const AimScreenTarget *__fastcall AimAssist_GetPrevOrBestTarget(AimAssistGlobals *const aaGlob, const AimTargetFlags flags, double range, double regionWidth, float regionHeight, int prevTargetEnt)
{
  unsigned __int8 v9; 
  const AimScreenTarget *result; 
  bool v17; 
  char v20; 
  bool v22; 
  float fmt; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  v9 = flags;
  __asm
  {
    vmovaps [rsp+58h+var_28], xmm7
    vmovaps xmm7, xmm3
    vmovaps xmm6, xmm2
  }
  if ( !aaGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1499, ASSERT_TYPE_ASSERT, "(aaGlob)", (const char *)&queryFormat, "aaGlob") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  result = AimAssist_GetTargetFromEntity(&aaGlob->aaSharedGlob, prevTargetEnt);
  __asm { vmovss  xmm2, [rsp+58h+regionHeight] }
  if ( !result )
    goto LABEL_15;
  __asm
  {
    vmulss  xmm0, xmm6, xmm6
    vcomiss xmm0, dword ptr [rax+34h]
  }
  v17 = (v9 & result->flags[0]) == 0;
  if ( (v9 & result->flags[0]) == 0 )
    goto LABEL_15;
  __asm
  {
    vcomiss xmm7, dword ptr [rax+4]
    vmovss  xmm1, dword ptr cs:__xmm@80000000800000008000000080000000
    vxorps  xmm0, xmm7, xmm1
    vcomiss xmm0, dword ptr [rax+0Ch]
  }
  if ( (v9 & result->flags[0]) != 0 )
  {
    v20 = 0;
    v17 = 1;
  }
  else
  {
    v20 = 1;
  }
  __asm
  {
    vcomiss xmm2, dword ptr [rax+8]
    vxorps  xmm0, xmm2, xmm1
    vcomiss xmm0, dword ptr [rax+10h]
  }
  v22 = v17;
  if ( !v20 || !v22 )
  {
LABEL_15:
    __asm
    {
      vmovss  dword ptr [rsp+58h+fmt], xmm2
      vmovaps xmm2, xmm6; range
      vmovaps xmm3, xmm7; regionWidth
    }
    result = AimAssist_GetBestTarget(&aaGlob->aaSharedGlob, (const AimTargetFlags)v9, *(double *)&_XMM2, *(double *)&_XMM3, fmt);
  }
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
  }
  return result;
}

/*
==============
AimAssist_GetScreenTargetCount
==============
*/
__int64 AimAssist_GetScreenTargetCount(LocalClientNum_t localClientNum)
{
  return (unsigned int)AimAssist_GetClientGlobals(localClientNum)->aaSharedGlob.screenTargetCount;
}

/*
==============
AimAssist_GetScreenTargetEntity
==============
*/
__int64 AimAssist_GetScreenTargetEntity(LocalClientNum_t localClientNum, int targetIndex)
{
  __int64 v2; 
  AimAssistGlobals *ClientGlobals; 
  int v5; 
  int screenTargetCount; 

  v2 = targetIndex;
  ClientGlobals = AimAssist_GetClientGlobals(localClientNum);
  if ( (unsigned int)v2 >= ClientGlobals->aaSharedGlob.screenTargetCount )
  {
    screenTargetCount = ClientGlobals->aaSharedGlob.screenTargetCount;
    v5 = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1475, ASSERT_TYPE_ASSERT, "(unsigned)( targetIndex ) < (unsigned)( aaGlob->aaSharedGlob.screenTargetCount )", "targetIndex doesn't index aaGlob->aaSharedGlob.screenTargetCount\n\t%i not in [0, %i)", v5, screenTargetCount) )
      __debugbreak();
  }
  return (unsigned int)ClientGlobals->aaSharedGlob.screenTargets[v2].entIndex;
}

/*
==============
AimAssist_GetSharedGlobals
==============
*/
AimAssistSharedGlobals *AimAssist_GetSharedGlobals(LocalClientNum_t localClientNum)
{
  return &AimAssist_GetClientGlobals(localClientNum)->aaSharedGlob;
}

/*
==============
AimAssist_GetTagPos
==============
*/
__int64 AimAssist_GetTagPos(LocalClientNum_t localClientNum, const centity_t *cent, scr_string_t tagName, vec3_t *outPos)
{
  const DObj *ClientDObj; 
  unsigned int number; 
  const char *v10; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 854, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  ClientDObj = Com_GetClientDObj(cent->nextState.number, localClientNum);
  if ( !ClientDObj )
    return 0i64;
  if ( !CG_DObjGetWorldTagPos(&cent->pose, ClientDObj, tagName, outPos) )
  {
    number = cent->nextState.number;
    v10 = SL_ConvertToString(tagName);
    Com_Printf(18, "AimAssist_GetTagPos: Cannot find tag [%s] on entity %i.\n", v10, number);
    return 0i64;
  }
  return 1i64;
}

/*
==============
AimAssist_GetTargetFromEntity
==============
*/
AimScreenTarget *AimAssist_GetTargetFromEntity(const AimAssistSharedGlobals *aaSharedGlob, int entIndex)
{
  __int64 screenTargetCount; 
  __int64 v5; 
  AimScreenTarget *result; 

  if ( !aaSharedGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 3341, ASSERT_TYPE_ASSERT, "(aaSharedGlob)", (const char *)&queryFormat, "aaSharedGlob") )
    __debugbreak();
  if ( entIndex == 2047 )
    return 0i64;
  screenTargetCount = aaSharedGlob->screenTargetCount;
  if ( screenTargetCount <= 0 )
    return 0i64;
  v5 = 0i64;
  for ( result = aaSharedGlob->screenTargets; result->entIndex != entIndex; ++result )
  {
    if ( ++v5 >= screenTargetCount )
      return 0i64;
  }
  return result;
}

/*
==============
AimAssist_GetTargetTagBounds
==============
*/
bool AimAssist_GetTargetTagBounds(const LocalClientNum_t localClientNum, const centity_t *targetEnt, const XModel *model, const unsigned __int8 aimAssistBoneIndex, Bounds *outBox)
{
  scr_string_t v20; 
  const DObj *ClientDObj; 
  DObjAnimMat *LocalBoneMatrix; 
  bool result; 
  unsigned __int8 v100; 
  unsigned __int8 index[7]; 
  vec3_t outOrigin; 
  __int64 v103; 
  tmat33_t<vec3_t> axis; 
  char v105; 
  char v106; 
  void *retaddr; 

  _RAX = &retaddr;
  v103 = -2i64;
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
  }
  _RDI = outBox;
  if ( !targetEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 940, ASSERT_TYPE_ASSERT, "(targetEnt)", (const char *)&queryFormat, "targetEnt") )
    __debugbreak();
  if ( !outBox && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 941, ASSERT_TYPE_ASSERT, "(outBox)", (const char *)&queryFormat, "outBox") )
    __debugbreak();
  v20 = model->aimAssistBones[aimAssistBoneIndex];
  *(_QWORD *)outBox->midPoint.v = 0i64;
  outBox->midPoint.v[2] = 0.0;
  outBox->halfSize.v[0] = -3.4028235e38;
  outBox->halfSize.v[1] = -3.4028235e38;
  outBox->halfSize.v[2] = -3.4028235e38;
  ClientDObj = Com_GetClientDObj(targetEnt->nextState.number, localClientNum);
  if ( ClientDObj && (index[0] = -2, XModelGetBoneIndex(model, v20, 0, index)) )
  {
    v100 = -2;
    DObjGetModelBoneIndex(ClientDObj, model->name, v20, &v100);
    LocalBoneMatrix = CG_DObjGetLocalBoneMatrix(&targetEnt->pose, ClientDObj, v100);
    if ( !LocalBoneMatrix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 960, ASSERT_TYPE_ASSERT, "(mat)", (const char *)&queryFormat, "mat") )
      __debugbreak();
    _RAX = g_activeRefDef;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+7Ch]
      vaddss  xmm8, xmm0, dword ptr [rbx+10h]
      vmovss  xmm1, dword ptr [rax+80h]
      vaddss  xmm7, xmm1, dword ptr [rbx+14h]
      vmovss  xmm0, dword ptr [rax+84h]
      vaddss  xmm6, xmm0, dword ptr [rbx+18h]
    }
    CG_GetPoseOrigin(&targetEnt->pose, &outOrigin);
    __asm
    {
      vsubss  xmm9, xmm8, dword ptr [rsp+158h+outOrigin]
      vsubss  xmm12, xmm7, dword ptr [rsp+158h+outOrigin+4]
      vsubss  xmm14, xmm6, dword ptr [rsp+158h+outOrigin+8]
    }
    QuatToAxis(&LocalBoneMatrix->quat, &axis);
    _RBX = &model->boneInfo[index[0]];
    if ( outBox == (Bounds *)_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 218, ASSERT_TYPE_ASSERT, "( rotatedBounds != baseBounds )", (const char *)&queryFormat, "rotatedBounds != baseBounds") )
      __debugbreak();
    if ( _RBX == (XBoneInfo *)&v105 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
      __debugbreak();
    __asm
    {
      vmovss  xmm4, dword ptr [rbx+4]
      vmovss  xmm3, dword ptr [rbx]
      vmovss  xmm5, dword ptr [rbx+8]
      vmovss  xmm8, dword ptr [rsp+158h+axis]
      vmulss  xmm1, xmm3, xmm8
      vmovss  xmm6, dword ptr [rsp+158h+axis+0Ch]
      vmulss  xmm0, xmm4, xmm6
      vaddss  xmm2, xmm1, xmm0
      vmovss  xmm7, dword ptr [rsp+158h+axis+18h]
      vmulss  xmm1, xmm5, xmm7
      vaddss  xmm0, xmm2, xmm1
      vaddss  xmm2, xmm0, xmm9
      vmovss  dword ptr [rdi], xmm2
      vmovss  xmm11, dword ptr [rsp+158h+axis+4]
      vmulss  xmm1, xmm3, xmm11
      vmovss  xmm9, dword ptr [rsp+158h+axis+10h]
      vmulss  xmm0, xmm4, xmm9
      vaddss  xmm2, xmm1, xmm0
      vmovss  xmm10, dword ptr [rsp+158h+axis+1Ch]
      vmulss  xmm1, xmm5, xmm10
      vaddss  xmm0, xmm2, xmm1
      vaddss  xmm2, xmm0, xmm12
      vmovss  dword ptr [rdi+4], xmm2
      vmovss  xmm13, dword ptr [rsp+158h+axis+8]
      vmulss  xmm1, xmm3, xmm13
      vmovss  xmm12, dword ptr [rsp+158h+axis+14h]
      vmulss  xmm0, xmm4, xmm12
      vaddss  xmm2, xmm1, xmm0
      vmovss  xmm4, dword ptr [rsp+158h+axis+20h]
      vmulss  xmm1, xmm5, xmm4
      vaddss  xmm0, xmm2, xmm1
      vaddss  xmm2, xmm0, xmm14
      vmovss  dword ptr [rdi+8], xmm2
      vmovss  xmm3, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vandps  xmm7, xmm7, xmm3
      vandps  xmm6, xmm6, xmm3
      vandps  xmm8, xmm8, xmm3
      vmulss  xmm1, xmm6, dword ptr [rbx+10h]
      vmulss  xmm0, xmm8, dword ptr [rbx+0Ch]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm7, dword ptr [rbx+14h]
      vaddss  xmm0, xmm2, xmm1
      vmovss  dword ptr [rdi+0Ch], xmm0
      vandps  xmm10, xmm10, xmm3
      vandps  xmm9, xmm9, xmm3
      vandps  xmm11, xmm11, xmm3
      vmulss  xmm1, xmm9, dword ptr [rbx+10h]
      vmulss  xmm0, xmm11, dword ptr [rbx+0Ch]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm10, dword ptr [rbx+14h]
      vaddss  xmm0, xmm2, xmm1
      vmovss  dword ptr [rdi+10h], xmm0
      vandps  xmm4, xmm4, xmm3
      vandps  xmm12, xmm12, xmm3
      vandps  xmm13, xmm13, xmm3
      vmulss  xmm1, xmm12, dword ptr [rbx+10h]
      vmulss  xmm0, xmm13, dword ptr [rbx+0Ch]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm4, dword ptr [rbx+14h]
      vaddss  xmm0, xmm2, xmm1
      vmovss  dword ptr [rdi+14h], xmm0
    }
    result = 1;
    memset(&outOrigin, 0, sizeof(outOrigin));
  }
  else
  {
    result = 0;
  }
  _R11 = &v106;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, xmmword ptr [r11-88h]
    vmovaps xmm14, xmmword ptr [r11-98h]
  }
  return result;
}

/*
==============
AimAssist_Init
==============
*/
void AimAssist_Init(LocalClientNum_t localClientNum)
{
  AimAssistGlobals *ClientGlobals; 
  unsigned int v5; 
  GraphFloat *v6; 
  unsigned int v7; 
  GraphFloat *v8; 
  int v10; 
  __int64 i; 
  __int64 v12; 
  unsigned __int8 v13; 
  DevGraph *v14; 
  char dest[128]; 
  char devguiPath[128]; 
  char v19; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  ClientGlobals = AimAssist_GetClientGlobals(localClientNum);
  memset_0(ClientGlobals, 0, sizeof(AimAssistGlobals));
  secure_uint32_3_t::secureInt32_3_Reset(&ClientGlobals->viewOrigin);
  __asm { vmovss  xmm6, cs:__real@3f800000 }
  v5 = 0;
  v6 = aaInputGraph;
  v7 = 0;
  v8 = aaInputGraph;
  do
  {
    Com_sprintf(dest, 0x80ui64, "aim_assist/view_input_%d.graph", v7);
    __asm { vmovaps xmm2, xmm6; scale }
    GraphFloat_Load(v8, dest, *(float *)&_XMM2);
    ++v7;
    ++v8;
  }
  while ( v7 < 4 );
  aaInputGraphValid = 1;
  Sys_EnterCriticalSection(CRITSECT_CBUF);
  v10 = truncate_cast<int,unsigned __int64>(0x16ui64) + 1;
  if ( s_cmd_superUser_textArray[0].cmdsize + v10 <= s_cmd_superUser_textArray[0].maxsize )
  {
    for ( i = s_cmd_superUser_textArray[0].cmdsize - 1; i >= 0; s_cmd_superUser_textArray[0].data[v12] = v13 )
    {
      v12 = v10 + i;
      v13 = s_cmd_superUser_textArray[0].data[i--];
    }
    memcpy_0(s_cmd_superUser_textArray[0].data, "exec devgui_aimassist\n", v10 - 1);
    s_cmd_superUser_textArray[0].data[v10 - 1] = 10;
    s_cmd_superUser_textArray[0].cmdsize += v10;
  }
  else
  {
    Com_PrintError(1, "Cbuf_InsertText overflowed\n");
  }
  Sys_LeaveCriticalSection(CRITSECT_CBUF);
  v14 = aaInputDevGraph;
  do
  {
    Com_sprintf(devguiPath, 0x80ui64, "Aim Assist/Input Graph:1/Graph %d", v5);
    GraphFloat_CreateDevGui(v6, v14, devguiPath);
    ++v5;
    ++v14;
    ++v6;
  }
  while ( v5 < 4 );
  _R11 = &v19;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

/*
==============
AimAssist_InitDevGui
==============
*/
void AimAssist_InitDevGui(void)
{
  int v0; 
  __int64 i; 
  __int64 v2; 
  unsigned __int8 v3; 
  unsigned int v4; 
  GraphFloat *v5; 
  DevGraph *v6; 
  char dest[128]; 

  if ( aaInputGraphValid )
  {
    Sys_EnterCriticalSection(CRITSECT_CBUF);
    v0 = truncate_cast<int,unsigned __int64>(0x16ui64) + 1;
    if ( s_cmd_superUser_textArray[0].cmdsize + v0 <= s_cmd_superUser_textArray[0].maxsize )
    {
      for ( i = s_cmd_superUser_textArray[0].cmdsize - 1; i >= 0; s_cmd_superUser_textArray[0].data[v2] = v3 )
      {
        v2 = v0 + i;
        v3 = s_cmd_superUser_textArray[0].data[i--];
      }
      memcpy_0(s_cmd_superUser_textArray[0].data, "exec devgui_aimassist\n", v0 - 1);
      s_cmd_superUser_textArray[0].data[v0 - 1] = 10;
      s_cmd_superUser_textArray[0].cmdsize += v0;
    }
    else
    {
      Com_PrintError(1, "Cbuf_InsertText overflowed\n");
    }
    Sys_LeaveCriticalSection(CRITSECT_CBUF);
    v4 = 0;
    v5 = aaInputGraph;
    v6 = aaInputDevGraph;
    do
    {
      Com_sprintf(dest, 0x80ui64, "Aim Assist/Input Graph:1/Graph %d", v4);
      GraphFloat_CreateDevGui(v5, v6, dest);
      ++v4;
      ++v6;
      ++v5;
    }
    while ( v4 < 4 );
  }
}

/*
==============
AimAssist_IsMeleeLockOnActive
==============
*/
bool AimAssist_IsMeleeLockOnActive(LocalClientNum_t localClientNum)
{
  AimAssistGlobals *ClientGlobals; 

  ClientGlobals = AimAssist_GetClientGlobals(localClientNum);
  return ClientGlobals->initialized && ClientGlobals->aaSharedGlob.autoMeleeState != AIM_MELEE_STATE_OFF;
}

/*
==============
AimAssist_IsPlayerUsingOffhand
==============
*/
bool AimAssist_IsPlayerUsingOffhand(const AimAssistPlayerState *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1592, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->sharedPS.weapFlags, ACTIVE, 1u) && ps->sharedPS.weapon.weaponIdx && BG_GetWeaponClass(&ps->sharedPS.weapon, 0) != WEAPCLASS_THROWINGKNIFE;
}

/*
==============
AimAssist_IsTargetVisible
==============
*/
_BOOL8 AimAssist_IsTargetVisible(LocalClientNum_t localClientNum, const centity_t *targetEnt, scr_string_t visBone)
{
  const DObj *ClientDObj; 
  bool v8; 
  cg_t *LocalClientGlobals; 
  unsigned int refdefViewOrg_aab; 
  int entity; 
  HavokPhysics_CollisionQueryResult *AnyResult; 
  char v14; 
  hkMemoryAllocator *v15; 
  hkMemoryAllocator *v16; 
  vec3_t start; 
  vec3_t outPos; 
  HavokPhysics_IgnoreBodies v20; 
  Physics_RaycastExtendedData extendedData; 
  __int64 v22; 

  v22 = -2i64;
  Profile_Begin(43);
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 880, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !targetEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 881, ASSERT_TYPE_ASSERT, "(targetEnt)", (const char *)&queryFormat, "targetEnt") )
    __debugbreak();
  if ( !visBone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 883, ASSERT_TYPE_ASSERT, "(visBone != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "visBone != NULL_SCR_STRING") )
    __debugbreak();
  ClientDObj = Com_GetClientDObj(targetEnt->nextState.number, localClientNum);
  if ( !ClientDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 887, ASSERT_TYPE_ASSERT, "(dobj)", (const char *)&queryFormat, "dobj") )
    __debugbreak();
  if ( CG_DObjGetWorldTagPos(&targetEnt->pose, ClientDObj, visBone, &outPos) )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( LocalClientGlobals == (cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
      __debugbreak();
    refdefViewOrg_aab = LocalClientGlobals->refdef.view.refdefViewOrg_aab;
    if ( LocalClientGlobals == (cg_t *)-26936i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
      __debugbreak();
    LODWORD(start.v[0]) = LODWORD(LocalClientGlobals->refdef.view.org.org.v[0]) ^ ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26936)) * ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26936)) + 2));
    LODWORD(start.v[1]) = LODWORD(LocalClientGlobals->refdef.view.org.org.v[1]) ^ ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26940)) * ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26940)) + 2));
    LODWORD(start.v[2]) = ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26944)) * ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26944)) + 2)) ^ LODWORD(LocalClientGlobals->refdef.view.org.org.v[2]);
    entity = LocalClientGlobals->predictedPlayerState.vehicleState.entity;
    if ( entity == 2047 )
      entity = LocalClientGlobals->predictedPlayerState.clientNum;
    HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v20, 2, 0);
    HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v20, 0, targetEnt->nextState.number, 1, 1, 0, 1, 1);
    HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v20, 1, entity, 1, 1, 0, 1, 1);
    v20.m_ignoreTransparentVolumes = 1;
    extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  [rbp+57h+extendedData.collisionBuffer], xmm0
    }
    extendedData.phaseSelection = All;
    extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
    *(_WORD *)&extendedData.collectInsideHits = 256;
    extendedData.contents = 8423683;
    extendedData.ignoreBodies = &v20;
    AnyResult = PhysicsQuery_GetAnyResult((Physics_WorldId)(3 * localClientNum + 2));
    if ( !AnyResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 917, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
      __debugbreak();
    HavokPhysics_CollisionQueryResult::Reset(AnyResult, 1);
    Physics_Raycast((Physics_WorldId)(3 * localClientNum + 2), &start, &outPos, &extendedData, AnyResult);
    if ( HavokPhysics_CollisionQueryResult::HasHit(AnyResult) )
    {
      Profile_EndInternal(NULL);
      v8 = 0;
    }
    else
    {
      *(double *)&_XMM0 = FX_GetClientVisibility(localClientNum, &start, &outPos);
      __asm { vcomiss xmm0, cs:__real@38d1b717 }
      v8 = !v14;
      Profile_EndInternal(NULL);
    }
    v15 = hkMemHeapAllocator();
    v20.m_ignoreBodies.m_size = 0;
    if ( v20.m_ignoreBodies.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v15, v20.m_ignoreBodies.m_data, 4, v20.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
    v20.m_ignoreBodies.m_data = NULL;
    v20.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
    v16 = hkMemHeapAllocator();
    v20.m_ignoreEntities.m_size = 0;
    if ( v20.m_ignoreEntities.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v16, v20.m_ignoreEntities.m_data, 8, v20.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  }
  else
  {
    Profile_EndInternal(NULL);
    v8 = 0;
  }
  memset(&outPos, 0, sizeof(outPos));
  memset(&start, 0, sizeof(start));
  return v8;
}

/*
==============
AimAssist_IsTurretWeaponWithDisabledAds
==============
*/
bool AimAssist_IsTurretWeaponWithDisabledAds(const cg_t *cgameGlob)
{
  __int64 localClientNum; 
  CgHandler *Handler; 
  __int16 *v4; 
  __int64 v5; 
  unsigned int v6; 
  int v7; 
  centity_t *Entity; 
  const entityState_t *p_nextState; 
  CgWeaponMap *v10; 
  const Weapon *Weapon; 
  const WeaponDef *v13; 
  const WeaponDef *v14; 
  __int16 remoteControlEnt; 
  __int16 viewlocked_entNum; 

  localClientNum = cgameGlob->localClientNum;
  Handler = CgHandler::getHandler(cgameGlob->localClientNum);
  if ( !Handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 292, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  v4 = &remoteControlEnt;
  remoteControlEnt = cgameGlob->predictedPlayerState.remoteControlEnt;
  v5 = localClientNum;
  viewlocked_entNum = cgameGlob->predictedPlayerState.viewlocked_entNum;
  v6 = 0;
  while ( 1 )
  {
    if ( *v4 != 2047 )
    {
      v7 = *v4;
      if ( Handler->IsClient(Handler) )
      {
        Entity = CG_GetEntity((const LocalClientNum_t)Handler->m_localClientNum, v7);
        if ( Entity )
          p_nextState = &Entity->nextState;
        else
          p_nextState = NULL;
      }
      else
      {
        p_nextState = GHandler::GetEntityState((GHandler *)Handler, v7);
      }
      if ( !p_nextState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 308, ASSERT_TYPE_ASSERT, "(turretEntityState)", (const char *)&queryFormat, "turretEntityState") )
        __debugbreak();
      if ( p_nextState->eType == ET_TURRET )
      {
        if ( !CgWeaponMap::ms_instance[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
          __debugbreak();
        v10 = CgWeaponMap::ms_instance[v5];
        if ( !v10 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 317, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 438, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
            __debugbreak();
        }
        Weapon = BgWeaponMap::GetWeapon(v10, p_nextState->weaponHandle);
        if ( Weapon->weaponIdx )
          break;
      }
    }
    ++v6;
    ++v4;
    if ( v6 >= 2 )
      return 0;
  }
  v13 = BG_WeaponDef(Weapon, 0);
  v14 = v13;
  if ( (!v13 || v13->weapClass != WEAPCLASS_TURRET) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 328, ASSERT_TYPE_ASSERT, "(turretWeaponDef && turretWeaponDef->weapClass == WEAPCLASS_TURRET)", (const char *)&queryFormat, "turretWeaponDef && turretWeaponDef->weapClass == WEAPCLASS_TURRET") )
    __debugbreak();
  return !v14->turretADSEnabled;
}

/*
==============
AimAssist_ResetSlowdownScale
==============
*/
void AimAssist_ResetSlowdownScale(float *pitchScale, float *yawScale)
{
  if ( !pitchScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1717, ASSERT_TYPE_ASSERT, "(pitchScale)", (const char *)&queryFormat, "pitchScale") )
    __debugbreak();
  if ( !yawScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1718, ASSERT_TYPE_ASSERT, "(yawScale)", (const char *)&queryFormat, "yawScale") )
    __debugbreak();
  *pitchScale = 1.0;
  *yawScale = 1.0;
}

/*
==============
AimAssist_SetSlowAim
==============
*/

void __fastcall AimAssist_SetSlowAim(LocalClientNum_t localClientNum, double slowAimPitchScale, double slowAimYawScale)
{
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
    vmovaps xmm7, xmm1
    vmovaps xmm6, xmm2
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 2884, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_SLOW_AIM ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_SLOW_AIM )") )
    __debugbreak();
  _RAX = AimAssist_GetClientGlobals(localClientNum);
  __asm
  {
    vmovss  dword ptr [rax+1D0h], xmm7
    vmovaps xmm7, [rsp+58h+var_28]
    vmovss  dword ptr [rax+1D4h], xmm6
    vmovaps xmm6, [rsp+58h+var_18]
  }
  _RAX->slowAimEnabled = 1;
}

/*
==============
AimAssist_Setup
==============
*/
void AimAssist_Setup(LocalClientNum_t localClientNum, const playerState_s *ps, int maxTargetCount)
{
  __int64 v3; 
  AimAssistGlobals *ClientGlobals; 
  CgHandler *Handler; 

  v3 = localClientNum;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 423, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  ClientGlobals = AimAssist_GetClientGlobals((LocalClientNum_t)v3);
  memset_0(ClientGlobals, 0, sizeof(AimAssistGlobals));
  secure_uint32_3_t::secureInt32_3_Reset(&ClientGlobals->viewOrigin);
  ClientGlobals->initialized = 1;
  CGMovingPlatformAimAssist::Init(&ClientGlobals->moverData);
  ClientGlobals->fovTurnRateScale = 1.0;
  ClientGlobals->fovScaleInv = 1.0;
  ClientGlobals->screenWidth = scrPlaceViewDisplay[v3].realViewportSize.v[0];
  ClientGlobals->screenHeight = scrPlaceViewDisplay[v3].realViewportSize.v[1];
  ClientGlobals->autoAimTargetEnt = 2047;
  ClientGlobals->lockOnTargetEnt = 2047;
  Handler = CgHandler::getHandler((LocalClientNum_t)v3);
  WorldUpReferenceFrame::Init(&ClientGlobals->refFrame, ps, Handler);
  ClientGlobals->maxTargetCount = maxTargetCount;
  AimAssist_BackupPlayerState((LocalClientNum_t)v3, ps, &ps->velocity);
}

/*
==============
AimAssist_UpdateAdsLerp
==============
*/
void AimAssist_UpdateAdsLerp(const AimInput *input, const cg_t *cgameGlob)
{
  AimAssistGlobals *ClientGlobals; 
  __int64 localClientNum; 

  if ( !input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 342, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 343, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  ClientGlobals = AimAssist_GetClientGlobals(input->localClientNum);
  localClientNum = input->localClientNum;
  _RDI = (const GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *)ClientGlobals;
  if ( !CgWeaponMap::ms_instance[localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  *(double *)&_XMM0 = BG_GetWeaponOrOffhandAdsFrac(CgWeaponMap::ms_instance[localClientNum], &cgameGlob->predictedPlayerState);
  __asm { vmovss  dword ptr [rdi+184h], xmm0 }
  if ( BG_IsTurretActiveFlags(_RDI + 26) )
  {
    if ( AimAssist_IsTurretWeaponWithDisabledAds(cgameGlob) )
    {
      _RDI[97].m_flags[0] = 0;
      return;
    }
    if ( (input->buttons & 0x200) != 0 )
      goto LABEL_15;
  }
  if ( CG_PlayerUsingScopedTurret(input->localClientNum) )
LABEL_15:
    _RDI[97].m_flags[0] = 1065353216;
}

/*
==============
AimAssist_UpdateAimAssistPlayerState
==============
*/
void AimAssist_UpdateAimAssistPlayerState(LocalClientNum_t localClientNum, const playerState_s *ps)
{
  vec3_t outVel; 

  CGMovingPlatformAimAssist::CalculateLinearVelocity(localClientNum, ps, &outVel);
  AimAssist_BackupPlayerState(localClientNum, ps, &outVel);
}

/*
==============
AimAssist_UpdateAutoAimTarget
==============
*/
bool AimAssist_UpdateAutoAimTarget(AimAssistGlobals *aaGlob)
{
  AimScreenTarget *TargetFromEntity; 
  unsigned int secureInt32_3_aab; 
  bool v29; 
  bool v30; 
  bool v31; 
  __int64 v60[3]; 
  vec3_t vec; 
  tmat33_t<vec3_t> out; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 
  char v65; 
  void *retaddr; 

  _RAX = &retaddr;
  v60[2] = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
  }
  _RBX = aaGlob;
  if ( !aaGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 2287, ASSERT_TYPE_ASSERT, "(aaGlob)", (const char *)&queryFormat, "aaGlob") )
    __debugbreak();
  if ( !_RBX->autoAimActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 2288, ASSERT_TYPE_ASSERT, "(aaGlob->autoAimActive)", (const char *)&queryFormat, "aaGlob->autoAimActive") )
    __debugbreak();
  TargetFromEntity = AimAssist_GetTargetFromEntity(&_RBX->aaSharedGlob, _RBX->autoAimTargetEnt);
  _R14 = TargetFromEntity;
  if ( TargetFromEntity )
  {
    if ( !_RBX->viewOrigin.initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 221, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
      __debugbreak();
    secureInt32_3_aab = _RBX->viewOrigin.secureInt32_3_aab;
    LODWORD(v60[0]) = ((((_DWORD)_RBX + 320) ^ secureInt32_3_aab) * ((((_DWORD)_RBX + 320) ^ secureInt32_3_aab) + 2)) ^ _RBX->viewOrigin.data[0];
    HIDWORD(v60[0]) = ((((_DWORD)_RBX + 324) ^ secureInt32_3_aab) * ((((_DWORD)_RBX + 324) ^ secureInt32_3_aab) + 2)) ^ _RBX->viewOrigin.data[1];
    LODWORD(v60[1]) = ((((_DWORD)_RBX + 328) ^ secureInt32_3_aab) * ((((_DWORD)_RBX + 328) ^ secureInt32_3_aab) + 2)) ^ _RBX->viewOrigin.data[2];
    __asm
    {
      vmovss  xmm0, dword ptr [r14+14h]
      vsubss  xmm6, xmm0, [rsp+120h+var_E8]
      vmovss  dword ptr [rsp+120h+vec], xmm6
      vmovss  xmm0, dword ptr [r14+18h]
      vsubss  xmm5, xmm0, [rsp+120h+var_E4]
      vmovss  dword ptr [rsp+120h+vec+4], xmm5
      vmovss  xmm0, dword ptr [r14+1Ch]
      vsubss  xmm4, xmm0, dword ptr [rsp+120h+var_E0]
      vmulss  xmm2, xmm6, xmm6
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm1, xmm2, xmm2
      vcmpless xmm0, xmm1, cs:__real@80000000
      vmovss  xmm2, cs:__real@3f800000
      vblendvps xmm1, xmm1, xmm2, xmm0
      vdivss  xmm2, xmm2, xmm1
      vmulss  xmm0, xmm6, xmm2
      vmovss  dword ptr [rsp+120h+vec], xmm0
      vmulss  xmm1, xmm5, xmm2
      vmovss  dword ptr [rsp+120h+vec+4], xmm1
      vmulss  xmm0, xmm4, xmm2
      vmovss  dword ptr [rsp+120h+vec+8], xmm0
    }
    if ( Com_GameMode_SupportsFeature(WEAPON_RELOAD_END_RECHAMBER) )
    {
      v29 = Com_GameMode_SupportsFeature(WEAPON_RELOAD_END_RECHAMBER);
      v30 = !v29;
      if ( !v29 )
      {
        v31 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 2248, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_AIM_ASSIST_REF ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_AIM_ASSIST_REF )");
        v30 = !v31;
        if ( v31 )
          __debugbreak();
      }
      _RCX = &_RBX->ps.groundTiltRefAngles;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vucomiss xmm0, dword ptr [rcx]
      }
      if ( !v30 )
        goto LABEL_18;
      __asm { vucomiss xmm0, dword ptr [rbx+78h] }
      if ( !v30 )
        goto LABEL_18;
      __asm { vucomiss xmm0, dword ptr [rbx+7Ch] }
      if ( !v30 )
      {
LABEL_18:
        AnglesToAxis(_RCX, &axis);
        MatrixTranspose(&axis, &out);
        __asm
        {
          vmovss  xmm2, dword ptr [rsp+120h+vec]
          vmulss  xmm7, xmm2, dword ptr [rsp+120h+out+4]
          vmovss  xmm6, dword ptr [rsp+120h+vec+4]
          vmulss  xmm9, xmm6, dword ptr [rsp+120h+out+14h]
          vmulss  xmm8, xmm2, dword ptr [rsp+120h+out+8]
          vmulss  xmm3, xmm6, dword ptr [rsp+120h+out+0Ch]
          vmulss  xmm2, xmm2, dword ptr [rsp+120h+out]
          vaddss  xmm4, xmm3, xmm2
          vmovss  xmm5, dword ptr [rsp+120h+vec+8]
          vmulss  xmm1, xmm5, dword ptr [rsp+120h+out+18h]
          vaddss  xmm2, xmm4, xmm1
          vmovss  dword ptr [rsp+120h+vec], xmm2
          vmulss  xmm1, xmm6, dword ptr [rsp+120h+out+10h]
          vaddss  xmm3, xmm1, xmm7
          vmulss  xmm0, xmm5, dword ptr [rsp+120h+out+1Ch]
          vaddss  xmm1, xmm3, xmm0
          vmovss  dword ptr [rsp+120h+vec+4], xmm1
          vaddss  xmm2, xmm8, xmm9
          vmulss  xmm1, xmm5, dword ptr [rbp+20h+out+20h]
          vaddss  xmm2, xmm2, xmm1
          vmovss  dword ptr [rsp+120h+vec+8], xmm2
        }
      }
    }
    WorldUpReferenceFrame::RemoveReferenceFrameFromVector(&_RBX->refFrame, &vec);
    vectoangles(&vec, &angles);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+20h+angles]
      vmovss  dword ptr [rbx+1A8h], xmm0
      vmovss  xmm1, dword ptr [rbp+20h+angles+4]
      vmovss  dword ptr [rbx+1B0h], xmm1
    }
    LOBYTE(TargetFromEntity) = 1;
    memset(v60, 0, 0xCui64);
  }
  _R11 = &v65;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
  return (char)TargetFromEntity;
}

/*
==============
AimAssist_UpdateGamePadInput
==============
*/
void AimAssist_UpdateGamePadInput(const AimInput *input, AimOutput *output)
{
  cg_t *LocalClientGlobals; 
  AimAssistGlobals *aaSharedPS; 
  int gameTime; 
  CgWeaponMap *Instance; 
  CgHandler *Handler; 

  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)input->localClientNum);
  Profile_Begin(44);
  if ( !output && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 2789, ASSERT_TYPE_ASSERT, "(output)", (const char *)&queryFormat, "output") )
    __debugbreak();
  output->pitch = input->pitch;
  output->yaw = input->yaw;
  output->meleeChargeEnt = input->meleeChargeEnt;
  aaSharedPS = AimAssist_GetClientGlobals(input->localClientNum);
  if ( aaSharedPS->initialized )
  {
    AimAssist_UpdateTweakables(input->localClientNum);
    AimAssist_UpdateAdsLerp(input, LocalClientGlobals);
    AimAssist_ApplyTurnRates(input, output);
    AimAssist_ApplyAutoAim(input, output);
    gameTime = LocalClientGlobals->time;
    Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)input->localClientNum);
    Handler = CgHandler::getHandler(LocalClientGlobals->localClientNum);
    BG_AimAssist_ApplyAutoMelee(Handler, input, output, Instance, &LocalClientGlobals->predictedPlayerState, &aaSharedPS->aaSharedGlob, &aaSharedPS->ps.sharedPS, &aaSharedPS->refFrame, gameTime);
    AimAssist_ApplyLockOn(input, output);
    AimAssist_ApplyMountLockOn(input, output);
    AimAssist_UpdateScriptedMeleeTarget(&aaSharedPS->aaSharedGlob, output);
    aaSharedPS->aaSharedGlob.prevButtons = input->buttons;
  }
  Profile_EndInternal(NULL);
}

/*
==============
AimAssist_UpdateMouseInput
==============
*/
void AimAssist_UpdateMouseInput(const AimInput *input, AimOutput *output)
{
  cg_t *LocalClientGlobals; 
  AimAssistGlobals *aaSharedPS; 
  int gameTime; 
  CgWeaponMap *Instance; 
  CgHandler *Handler; 

  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)input->localClientNum);
  Profile_Begin(45);
  if ( !output && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 2844, ASSERT_TYPE_ASSERT, "(output)", (const char *)&queryFormat, "output") )
    __debugbreak();
  output->pitch = input->pitch;
  output->yaw = input->yaw;
  output->meleeChargeEnt = input->meleeChargeEnt;
  aaSharedPS = AimAssist_GetClientGlobals(input->localClientNum);
  if ( aaSharedPS->initialized )
  {
    AimAssist_UpdateTweakables(input->localClientNum);
    AimAssist_UpdateAdsLerp(input, LocalClientGlobals);
    gameTime = LocalClientGlobals->time;
    Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)input->localClientNum);
    Handler = CgHandler::getHandler(LocalClientGlobals->localClientNum);
    BG_AimAssist_ApplyAutoMelee(Handler, input, output, Instance, &LocalClientGlobals->predictedPlayerState, &aaSharedPS->aaSharedGlob, &aaSharedPS->ps.sharedPS, &aaSharedPS->refFrame, gameTime);
    AimAssist_ApplyMountLockOn(input, output);
    AimAssist_UpdateScriptedMeleeTarget(&aaSharedPS->aaSharedGlob, output);
    aaSharedPS->aaSharedGlob.prevButtons = input->buttons;
  }
  Profile_EndInternal(NULL);
}

/*
==============
AimAssist_UpdateMouseRaw
==============
*/
void AimAssist_UpdateMouseRaw(LocalClientNum_t localClientNum, float *mx, float *my)
{
  AimAssistGlobals *ClientGlobals; 

  _RDI = my;
  _RSI = mx;
  ClientGlobals = AimAssist_GetClientGlobals(localClientNum);
  _RBX = ClientGlobals;
  if ( ClientGlobals->initialized && ClientGlobals->slowAimEnabled )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 2826, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_SLOW_AIM ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_SLOW_AIM )") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+1D4h]
      vmulss  xmm1, xmm0, dword ptr [rsi]
      vmovss  dword ptr [rsi], xmm1
      vmovss  xmm2, dword ptr [rbx+1D0h]
      vmulss  xmm0, xmm2, dword ptr [rdi]
      vmovss  dword ptr [rdi], xmm0
    }
  }
}

/*
==============
AimAssist_UpdateScreenTargets
==============
*/
void AimAssist_UpdateScreenTargets(LocalClientNum_t localClientNum, const vec3_t *eyeOrg, const vec3_t *viewOrg, const vec3_t *viewAngles, float tanHalfFovX, float tanHalfFovY)
{
  __int64 v13; 
  CgGlobalsSP *LocalClientGlobals; 
  const dvar_t *v17; 
  const dvar_t *v18; 
  float v22; 
  char v38; 
  int v43; 
  int screenTargetCount; 
  int *p_currentHeight; 
  __int64 v46; 
  __int64 v47; 
  __int64 v48; 
  __int64 v49; 
  __int64 v50; 
  __int64 v53; 
  CgEntitySystem *v54; 
  __int64 v55; 
  char v56; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  int entIndex; 
  __int64 v94; 
  __int16 v95; 
  int v96; 
  const dvar_t *v97; 
  int endTime; 
  AimTargetFlags v112; 
  const AimScreenTarget *BestTarget; 
  char v114; 
  __int64 clientNum; 
  CgGlobalsSP *v117; 
  const characterInfo_t *CharacterInfo; 
  HavokPhysics_CollisionQueryResult *ClosestResult; 
  hkMemoryAllocator *v126; 
  hkMemoryAllocator *v127; 
  bool v128; 
  const dvar_t *v143; 
  char v146; 
  const dvar_t *v147; 
  const vec4_t *v148; 
  float fmt; 
  float fmta; 
  float fmtb; 
  __int64 duration; 
  double durationb; 
  __int64 durationa; 
  vec3_t *outAimScreenPos; 
  vec3_t *outAimScreenPosa; 
  char v161; 
  char v162; 
  scr_string_t tag; 
  int targetCount[2]; 
  _QWORD v165[2]; 
  HavokPhysics_IgnoreBodies v166; 
  AimTarget *targetList; 
  CgGlobalsSP *v168; 
  __int64 v169; 
  vec3_t outOrigin; 
  vec3_t end; 
  AimScreenTarget screenTarget; 
  Physics_RaycastExtendedData outBounds; 
  vec3_t v174; 
  tmat43_t<vec3_t> axis; 
  ExtentBounds clipBounds; 
  int v177[64]; 
  char v178; 
  void *retaddr; 

  _RAX = &retaddr;
  v169 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
  }
  _R15 = viewAngles;
  _R14 = viewOrg;
  _RSI = eyeOrg;
  v13 = localClientNum;
  Profile_Begin(46);
  _RBX = AimAssist_GetClientGlobals((LocalClientNum_t)v13);
  if ( _RBX->initialized )
  {
    LocalClientGlobals = (CgGlobalsSP *)CG_GetLocalClientGlobals((const LocalClientNum_t)v13);
    v168 = LocalClientGlobals;
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1225, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    _R13 = &LocalClientGlobals->predictedPlayerState;
    *(_QWORD *)end.v = _R13;
    v17 = DVARBOOL_scripted_melee_debug;
    if ( !DVARBOOL_scripted_melee_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scripted_melee_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    if ( v17->current.enabled )
      goto LABEL_13;
    v18 = DCONST_DVARBOOL_melee_debug;
    if ( !DCONST_DVARBOOL_melee_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "melee_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    v162 = 0;
    if ( v18->current.enabled )
LABEL_13:
      v162 = 1;
    _RBX->aaSharedGlob.eyeOrigin.v[0] = _RSI->v[0];
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+4]
      vmovss  dword ptr [rbx+1DCh], xmm0
      vmovss  xmm1, dword ptr [rsi+8]
      vmovss  dword ptr [rbx+1E0h], xmm1
      vmovsd  xmm0, qword ptr [r14]
      vmovsd  qword ptr [rsp+310h+var_2C0], xmm0
    }
    v22 = _R14->v[2];
    *(float *)&v165[1] = v22;
    if ( !_RBX->viewOrigin.initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 186, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
      __debugbreak();
    _RBX->viewOrigin.secureInt32_3_aab += _RBX->viewOrigin.secureInt32_3_set_aab;
    tag = ((_DWORD)_RBX + 320) ^ _RBX->viewOrigin.secureInt32_3_aab;
    _RBX->viewOrigin.data[0] = (tag * (tag + 2)) ^ LODWORD(v165[0]);
    tag = _RBX->viewOrigin.secureInt32_3_aab ^ ((_DWORD)_RBX + 324);
    _RBX->viewOrigin.data[1] = (tag * (tag + 2)) ^ HIDWORD(v165[0]);
    tag = _RBX->viewOrigin.secureInt32_3_aab ^ ((_DWORD)_RBX + 328);
    _RBX->viewOrigin.data[2] = (tag * (tag + 2)) ^ LODWORD(v22);
    memset(v165, 0, 0xCui64);
    _RBX->origin.v[0] = _R13->origin.v[0];
    __asm
    {
      vmovss  xmm0, dword ptr [r13+34h]
      vmovss  dword ptr [rbx+138h], xmm0
      vmovss  xmm1, dword ptr [r13+38h]
      vmovss  dword ptr [rbx+13Ch], xmm1
    }
    _RBX->aaSharedGlob.viewAngles.v[0] = _R15->v[0];
    __asm
    {
      vmovss  xmm0, dword ptr [r15+4]
      vmovss  dword ptr [rbx+1E8h], xmm0
      vmovss  xmm1, dword ptr [r15+8]
      vmovss  dword ptr [rbx+1ECh], xmm1
    }
    AnglesToAxis(_R15, &_RBX->viewAxis);
    *(double *)&_XMM0 = CG_View_GetFovDvarValue((const LocalClientNum_t)v13);
    __asm { vmovaps xmm6, xmm0 }
    _RDI = DVARFLT_cg_fovScale;
    if ( !DVARFLT_cg_fovScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_fovScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+28h]
      vmulss  xmm0, xmm0, cs:__real@3f11361e; X
    }
    tanf_0(*(float *)&_XMM0);
    __asm
    {
      vmovss  xmm1, cs:__real@3faaaaab
      vdivss  xmm2, xmm1, xmm0
      vmovss  xmm7, [rbp+210h+tanHalfFovY]
      vmulss  xmm0, xmm2, xmm7
      vmovss  dword ptr [rbx+17Ch], xmm0
      vmulss  xmm0, xmm6, cs:__real@3c0efa35; X
    }
    *(float *)&_XMM0 = tanf_0(*(float *)&_XMM0);
    __asm
    {
      vmulss  xmm6, xmm0, cs:__real@3f400000
      vxorps  xmm8, xmm8, xmm8
      vucomiss xmm6, xmm8
    }
    if ( v38 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm6, xmm6
        vmovsd  qword ptr [rsp+310h+duration], xmm0
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 578, ASSERT_TYPE_ASSERT, "( ( tanHalfBaseFovY != 0.0f ) )", "( tanHalfBaseFovY ) = %g", durationb) )
        __debugbreak();
    }
    __asm
    {
      vdivss  xmm0, xmm6, xmm7
      vmovss  dword ptr [rbx+180h], xmm0
      vmovaps xmm3, xmm7; tanHalfFovY
      vmovss  xmm2, [rbp+210h+tanHalfFovX]; tanHalfFovX
    }
    AimAssist_CreateScreenMatrix((LocalClientNum_t)v13, _RBX, *(double *)&_XMM2, *(double *)&_XMM3);
    if ( _RBX->aaSharedGlob.screenTargetCount > 32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1247, ASSERT_TYPE_ASSERT, "(aaGlob->aaSharedGlob.screenTargetCount <= 32)", (const char *)&queryFormat, "aaGlob->aaSharedGlob.screenTargetCount <= AIM_MAX_TARGET_COUNT") )
      __debugbreak();
    v43 = 0;
    screenTargetCount = _RBX->aaSharedGlob.screenTargetCount;
    if ( screenTargetCount > 0 )
    {
      p_currentHeight = (int *)&_RBX->aaSharedGlob.screenTargets[0].currentHeight;
      v46 = 0i64;
      v43 = _RBX->aaSharedGlob.screenTargetCount;
      v47 = (unsigned int)screenTargetCount;
      do
      {
        v177[v46] = *(p_currentHeight - 11);
        v177[v46 + 32] = *p_currentHeight;
        p_currentHeight += 18;
        ++v46;
        --v47;
      }
      while ( v47 );
    }
    _RBX->aaSharedGlob.screenTargetCount = 0;
    AimTarget_GetClientTargetList((LocalClientNum_t)v13, (const AimTarget **)&targetList, &targetCount[1]);
    v161 = 0;
    if ( targetCount[1] > 0 )
    {
      CG_GetPlayerViewOrigin((LocalClientNum_t)v13, _R13, &outOrigin);
      v161 = 1;
    }
    targetCount[0] = 0;
    v48 = v43;
    if ( targetCount[1] > 0 )
    {
      v49 = v13;
      v50 = 0i64;
      v165[0] = 0i64;
      __asm { vmovsd  xmm6, cs:__real@3f30000000000000 }
      do
      {
        _R14 = (AimTarget *)((char *)targetList + v50);
        v53 = *(int *)((char *)&targetList->entIndex + v50);
        if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
        {
          LODWORD(outAimScreenPos) = v13;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", outAimScreenPos) )
            __debugbreak();
        }
        if ( (unsigned int)v13 >= CgEntitySystem::ms_allocatedCount )
        {
          LODWORD(outAimScreenPos) = CgEntitySystem::ms_allocatedCount;
          LODWORD(duration) = v13;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", duration, outAimScreenPos) )
            __debugbreak();
        }
        if ( !CgEntitySystem::ms_entitySystemArray[v49] )
        {
          LODWORD(outAimScreenPos) = v13;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", outAimScreenPos) )
            __debugbreak();
        }
        v54 = CgEntitySystem::ms_entitySystemArray[v49];
        if ( (unsigned int)v53 >= 0x800 )
        {
          LODWORD(outAimScreenPos) = 2048;
          LODWORD(duration) = v53;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", duration, outAimScreenPos) )
            __debugbreak();
        }
        v55 = (__int64)&v54->m_entities[v53];
        v56 = _R14->flags[0];
        if ( (*(_BYTE *)(v55 + 648) & 1) != 0 )
        {
          AnglesToAxis((const vec3_t *)(v55 + 72), (tmat33_t<vec3_t> *)&axis);
          if ( !*(_QWORD *)(v55 + 48) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
            __debugbreak();
          FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(*(void (__fastcall *const *)(const vec4_t *, vec3_t *))(v55 + 48), (const cpose_t *)v55);
          FunctionPointer_origin((const vec4_t *)(v55 + 56), &axis.m[3]);
          if ( *(_BYTE *)(v55 + 2) )
          {
            __asm
            {
              vmovd   xmm0, dword ptr [rbp+210h+vec]
              vcvtdq2pd xmm0, xmm0
              vmulsd  xmm1, xmm0, xmm6
              vcvtsd2ss xmm2, xmm1, xmm1
              vmovss  dword ptr [rbp+210h+vec], xmm2
              vmovd   xmm0, dword ptr [rbp+210h+vec+4]
              vcvtdq2pd xmm0, xmm0
              vmulsd  xmm1, xmm0, xmm6
              vcvtsd2ss xmm2, xmm1, xmm1
              vmovss  dword ptr [rbp+210h+vec+4], xmm2
              vmovd   xmm0, dword ptr [rbp+210h+vec+8]
              vcvtdq2pd xmm0, xmm0
              vmulsd  xmm1, xmm0, xmm6
              vcvtsd2ss xmm2, xmm1, xmm1
              vmovss  dword ptr [rbp+210h+vec+8], xmm2
            }
          }
          *(float *)&_XMM0 = AimAssist_GetBoundsFromTarget(_R14, (Bounds *)&outBounds);
          __asm { vucomiss xmm0, xmm8 }
          if ( !v38 )
          {
            __asm { vmovaps xmm1, xmm0; height }
            WorldUpReferenceFrame::AddUpContribution(&_RBX->refFrame, *(float *)&_XMM1, &axis.m[3]);
          }
          if ( AimAssist_ConvertToClipBounds(_RBX, (const Bounds *)&outBounds, &axis, &clipBounds) )
          {
            entIndex = _R14->entIndex;
            screenTarget.entIndex = _R14->entIndex;
            __asm
            {
              vmovss  xmm0, dword ptr [rbp+210h+clipBounds.mins]
              vmovss  dword ptr [rbp+210h+screenTarget.clipMins], xmm0
              vmovss  xmm1, dword ptr [rbp+210h+clipBounds.mins+4]
              vmovss  dword ptr [rbp+210h+screenTarget.clipMins+4], xmm1
              vmovss  xmm0, dword ptr [rbp+210h+outBounds.halfSize+8]
              vmovss  [rbp+210h+screenTarget.currentHeight], xmm0
              vmovss  [rbp+210h+screenTarget.previousHeight], xmm0
            }
            _RAX = 0i64;
            if ( v48 > 0 )
            {
              while ( v177[_RAX] != entIndex )
              {
                if ( ++_RAX >= v48 )
                  goto LABEL_62;
              }
              __asm
              {
                vmovss  xmm0, [rbp+rax*4+210h+var_F0]
                vmovss  [rbp+210h+screenTarget.previousHeight], xmm0
              }
            }
LABEL_62:
            __asm
            {
              vmovss  xmm0, dword ptr [rbp+210h+clipBounds.maxs]
              vmovss  dword ptr [rbp+210h+screenTarget.clipMaxs], xmm0
              vmovss  xmm1, dword ptr [rbp+210h+clipBounds.maxs+4]
              vmovss  dword ptr [rbp+210h+screenTarget.clipMaxs+4], xmm1
            }
            if ( !CGMovingPlatformAimAssist::UpdateScreenTargetVelocity(&_RBX->moverData, (const centity_t *)v55, targetCount[0], &screenTarget) )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [r14+20h]
                vmovss  dword ptr [rbp+210h+screenTarget.velocity], xmm0
                vmovss  xmm1, dword ptr [r14+24h]
                vmovss  dword ptr [rbp+210h+screenTarget.velocity+4], xmm1
                vmovss  xmm0, dword ptr [r14+28h]
                vmovss  dword ptr [rbp+210h+screenTarget.velocity+8], xmm0
              }
            }
            if ( (unsigned int)AimAssist_CalcAimPos((LocalClientNum_t)v13, _RBX, (const centity_t *)v55, _R14, &axis, &screenTarget.aimPos, &v174, &tag) )
            {
              if ( !v161 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1353, ASSERT_TYPE_ASSERT, "(playerViewOriginValid)", (const char *)&queryFormat, "playerViewOriginValid") )
                __debugbreak();
              __asm
              {
                vmovss  xmm0, dword ptr [rbp+210h+var_1C8]
                vmulss  xmm3, xmm0, xmm0
                vmovss  xmm1, dword ptr [rbp+210h+var_1C8+4]
                vmulss  xmm2, xmm1, xmm1
                vaddss  xmm0, xmm3, xmm2
                vmovss  [rbp+210h+screenTarget.crosshairDistSqr], xmm0
                vmovss  xmm1, dword ptr [rbp+210h+screenTarget.aimPos]
                vsubss  xmm3, xmm1, dword ptr [rbp+210h+outOrigin]
                vmovss  xmm0, dword ptr [rbp+210h+screenTarget.aimPos+4]
                vsubss  xmm2, xmm0, dword ptr [rbp+210h+outOrigin+4]
                vmovss  xmm1, dword ptr [rbp+210h+screenTarget.aimPos+8]
                vsubss  xmm4, xmm1, dword ptr [rbp+210h+outOrigin+8]
                vmulss  xmm2, xmm2, xmm2
                vmulss  xmm0, xmm3, xmm3
                vaddss  xmm3, xmm2, xmm0
                vmulss  xmm1, xmm4, xmm4
                vaddss  xmm2, xmm3, xmm1
                vmovss  [rbp+210h+screenTarget.distSqr], xmm2
              }
              v94 = v55 + 400;
              if ( !v94 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
                __debugbreak();
              v95 = *(_WORD *)(v94 + 8);
              v96 = ((v95 - 1) & 0xFFED) == 0 && v95 != 3;
              screenTarget.isCharacter = v96;
              screenTarget.tag = tag;
              screenTarget.flags[0] = _R14->flags[0];
              if ( v162 && (v56 & 2) != 0 )
                CG_DebugStar(&screenTarget.aimPos, &colorGreen, 0, 0);
              AimAssist_AddToTargetList(_RBX, &screenTarget);
            }
            else if ( v162 && (v56 & 2) != 0 )
            {
              __asm
              {
                vmovss  xmm0, cs:debugFontSize
                vmovss  dword ptr [rsp+310h+fmt], xmm0
              }
              CG_DebugStarWithText(&_R14->box.midPoint, &colorRed, &colorRed, "CalcAimPos failed", fmta, 0);
            }
          }
          else if ( v162 && (v56 & 2) != 0 )
          {
            __asm
            {
              vmovss  xmm0, cs:debugFontSize
              vmovss  dword ptr [rsp+310h+fmt], xmm0
            }
            CG_DebugStarWithText(&_R14->box.midPoint, &colorRed, &colorRed, "ClipBounds failed", fmt, 0);
          }
        }
        ++targetCount[0];
        v50 = v165[0] + 48i64;
        v165[0] += 48i64;
        v49 = v13;
      }
      while ( targetCount[0] < targetCount[1] );
      _R13 = *(playerState_s **)end.v;
    }
    v97 = DCONST_DVARBOOL_mount_aim_lockon;
    if ( !DCONST_DVARBOOL_mount_aim_lockon && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_aim_lockon") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v97);
    endTime = _R13->mountState.endTime;
    if ( _R13->mountState.startTime > endTime )
      endTime = _R13->mountState.startTime;
    if ( v97->current.enabled && _RBX->mountLockOnTime < endTime )
    {
      if ( !v161 )
        CG_GetPlayerViewOrigin((LocalClientNum_t)v13, _R13, &outOrigin);
      _RBX->mountLockOnValid = 0;
      _RBX->mountLockOnTime = endTime;
      __asm
      {
        vmovss  xmm2, dword ptr [rbp+210h+outOrigin]
        vmovss  dword ptr [rbx+0B70h], xmm2
        vmovss  xmm0, dword ptr [rbp+210h+outOrigin+4]
        vmovss  dword ptr [rbx+0B74h], xmm0
        vmovss  xmm1, dword ptr [rbp+210h+outOrigin+8]
        vmovss  dword ptr [rbx+0B78h], xmm1
        vsubss  xmm0, xmm2, dword ptr [r13+30h]
        vmovss  dword ptr [rbx+0B7Ch], xmm0
        vmovss  xmm1, dword ptr [rbx+0B74h]
        vsubss  xmm2, xmm1, dword ptr [r13+34h]
        vmovss  dword ptr [rbx+0B80h], xmm2
        vmovss  xmm0, dword ptr [rbx+0B78h]
        vsubss  xmm1, xmm0, dword ptr [r13+38h]
        vmovss  dword ptr [rbx+0B84h], xmm1
      }
      _RDI = DCONST_DVARFLT_mount_aim_lockon_range;
      if ( !DCONST_DVARFLT_mount_aim_lockon_range && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_aim_lockon_range") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm
      {
        vmovss  xmm6, dword ptr [rdi+28h]
        vmovss  xmm0, dword ptr [rbx+224h]
        vmovss  dword ptr [rsp+310h+fmt], xmm0
        vmovss  xmm3, dword ptr [rbx+220h]; regionWidth
        vmovaps xmm2, xmm6; range
      }
      LOBYTE(v112) = 1;
      BestTarget = AimAssist_GetBestTarget(&_RBX->aaSharedGlob, v112, *(double *)&_XMM2, *(double *)&_XMM3, fmtb);
      v114 = 0;
      if ( BestTarget )
      {
        _R15 = &_RBX->viewAxis;
        if ( !IntersectLinePlane(&outOrigin, _RBX->viewAxis.m, &BestTarget->aimPos, _RBX->viewAxis.m, &_RBX->mountLockOnPoint) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1398, ASSERT_TYPE_ASSERT, "(foundIntersection)", (const char *)&queryFormat, "foundIntersection") )
          __debugbreak();
        v114 = 1;
        _RBX->mountLockOnValid = 1;
      }
      else if ( _RBX->mountLockOnValid )
      {
        _R15 = &_RBX->viewAxis;
      }
      else
      {
        HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v166, 1, 0);
        HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v166, 0, _R13->clientNum, 1, 1, 0, 1, 1);
        v166.m_ignoreTransparentVolumes = 1;
        clientNum = _R13->clientNum;
        v117 = v168;
        if ( v168->HasCharacterInfo(v168, _R13->clientNum) )
        {
          if ( v117->IsMP(v117) )
          {
            if ( (unsigned int)clientNum >= *(_DWORD *)&v117->pipViews[0].pipRefDef.radiantLiveLightsRaw[2].lightDef[28] )
            {
              LODWORD(outAimScreenPosa) = *(_DWORD *)&v117->pipViews[0].pipRefDef.radiantLiveLightsRaw[2].lightDef[28];
              LODWORD(durationa) = clientNum;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", durationa, outAimScreenPosa) )
                __debugbreak();
            }
            CharacterInfo = (const characterInfo_t *)(*(_QWORD *)&v117->pipViews[0].pipRefDef.radiantLiveLightsRaw[2].lightDef[12] + 14792 * clientNum);
          }
          else
          {
            CharacterInfo = CgGlobalsSP::GetCharacterInfo(v117, clientNum);
          }
          if ( CharacterInfo )
            v166.m_ignoreTeamCharacters = CharacterInfo->team;
        }
        outBounds.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
        __asm { vmovss  dword ptr [rbp+210h+outBounds.halfSize+8], xmm8 }
        outBounds.phaseSelection = All;
        outBounds.insideHitType = Physics_RaycastInsideHitType_InsideHits;
        *(_WORD *)&outBounds.collectInsideHits = 256;
        outBounds.contents = 2049;
        outBounds.ignoreBodies = &v166;
        ClosestResult = PhysicsQuery_GetClosestResult((Physics_WorldId)(3 * v13 + 2));
        if ( !ClosestResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1422, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
          __debugbreak();
        HavokPhysics_CollisionQueryResult::Reset(ClosestResult, 1);
        _R15 = &_RBX->viewAxis;
        __asm
        {
          vmulss  xmm0, xmm6, dword ptr [r15]
          vaddss  xmm1, xmm0, dword ptr [rbp+210h+outOrigin]
          vmovss  dword ptr [rbp+210h+end], xmm1
          vmulss  xmm0, xmm6, dword ptr [r15+4]
          vaddss  xmm1, xmm0, dword ptr [rbp+210h+outOrigin+4]
          vmovss  dword ptr [rbp+210h+end+4], xmm1
          vmulss  xmm0, xmm6, dword ptr [r15+8]
          vaddss  xmm1, xmm0, dword ptr [rbp+210h+outOrigin+8]
          vmovss  dword ptr [rbp+210h+end+8], xmm1
        }
        Physics_Raycast((Physics_WorldId)(3 * v13 + 2), &outOrigin, &end, &outBounds, ClosestResult);
        if ( HavokPhysics_CollisionQueryResult::HasHit(ClosestResult) )
        {
          HavokPhysics_CollisionQueryResult::GetRaycastHitPosition(ClosestResult, 0, &_RBX->mountLockOnPoint);
          _RBX->mountLockOnValid = 1;
        }
        v126 = hkMemHeapAllocator();
        v166.m_ignoreBodies.m_size = 0;
        if ( v166.m_ignoreBodies.m_capacityAndFlags >= 0 )
          hkMemoryAllocator::bufFree2(v126, v166.m_ignoreBodies.m_data, 4, v166.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
        v166.m_ignoreBodies.m_data = NULL;
        v166.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
        v127 = hkMemHeapAllocator();
        v166.m_ignoreEntities.m_size = 0;
        if ( v166.m_ignoreEntities.m_capacityAndFlags >= 0 )
          hkMemoryAllocator::bufFree2(v127, v166.m_ignoreEntities.m_data, 8, v166.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
        v166.m_ignoreEntities.m_capacityAndFlags = 0x80000000;
      }
      if ( _RBX->mountLockOnValid )
      {
        v128 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&_RBX->ps.sharedPS.weapFlags, ACTIVE, 0x11u);
        BG_GetMountEdgeToEyeDistance((const ContextMountType)_R13->mountState.surface.type, &_RBX->ps.sharedPS.weapon, v128, (float *)&tag, (float *)targetCount);
        __asm
        {
          vmovss  xmm5, dword ptr [r15+4]
          vmovss  xmm3, dword ptr [r15]
          vmovss  xmm6, dword ptr [r15+8]
          vmulss  xmm1, xmm5, dword ptr [rbx+0B68h]
          vmulss  xmm0, xmm3, dword ptr [rbx+0B64h]
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm6, dword ptr [rbx+0B6Ch]
          vaddss  xmm4, xmm2, xmm1
          vmulss  xmm2, xmm5, dword ptr [r13+4C8h]
          vmulss  xmm0, xmm3, dword ptr [r13+4C4h]
          vaddss  xmm3, xmm2, xmm0
          vmulss  xmm1, xmm6, dword ptr [r13+4CCh]
          vaddss  xmm0, xmm3, xmm1
          vsubss  xmm6, xmm4, xmm0
        }
        v143 = DCONST_DVARFLT_mount_aim_lockon_range_min_beyond_edge;
        if ( !DCONST_DVARFLT_mount_aim_lockon_range_min_beyond_edge && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_aim_lockon_range_min_beyond_edge") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v143);
        __asm
        {
          vmovss  xmm0, [rsp+310h+var_2CC]
          vaddss  xmm1, xmm0, dword ptr [rdi+28h]
          vcomiss xmm6, xmm1
        }
        if ( v146 )
        {
          _RBX->mountLockOnValid = 0;
        }
        else
        {
          v147 = DCONST_DVARBOOL_mount_aim_debug;
          if ( !DCONST_DVARBOOL_mount_aim_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_aim_debug") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v147);
          if ( v147->current.enabled )
          {
            v148 = &colorGreen;
            if ( v114 )
              v148 = &colorRed;
            CG_DebugStar(&_RBX->mountLockOnPoint, v148, 0, frameCount);
          }
        }
      }
    }
  }
  Profile_EndInternal(NULL);
  _R11 = &v178;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
AimAssist_UpdateScriptedMeleeTarget
==============
*/
void AimAssist_UpdateScriptedMeleeTarget(const AimAssistSharedGlobals *aaSharedGlob, AimOutput *output)
{
  AimTargetFlags v11; 
  const AimScreenTarget *BestTarget; 
  const AimScreenTarget *v14; 
  unsigned int entIndex; 
  __int64 v17; 
  float fmt; 
  __int64 v19; 
  __int64 v20; 

  _RBX = aaSharedGlob;
  output->scriptedMeleeTarget = 2047;
  if ( Com_GameMode_SupportsFeature(WEAPON_MANTLE_LADDER|0x80) )
  {
    _RDI = DCONST_DVARMPFLT_scripted_melee_range;
    __asm
    {
      vmovaps [rsp+78h+var_18], xmm6
      vmovaps [rsp+78h+var_28], xmm7
      vmovss  xmm6, dword ptr [rbx+3Ch]
      vmovss  xmm7, dword ptr [rbx+38h]
    }
    if ( !DCONST_DVARMPFLT_scripted_melee_range && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scripted_melee_range") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm2, dword ptr [rdi+28h]; range
      vmovaps xmm3, xmm7; regionWidth
    }
    LOBYTE(v11) = 2;
    __asm { vmovss  dword ptr [rsp+78h+fmt], xmm6 }
    BestTarget = AimAssist_GetBestTarget(_RBX, v11, *(double *)&_XMM2, *(double *)&_XMM3, fmt);
    __asm { vmovaps xmm7, [rsp+78h+var_28] }
    v14 = BestTarget;
    __asm { vmovaps xmm6, [rsp+78h+var_18] }
    if ( BestTarget )
    {
      entIndex = BestTarget->entIndex;
      if ( entIndex >= 0x7FE )
      {
        LODWORD(v20) = 2046;
        LODWORD(v19) = entIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 3654, ASSERT_TYPE_ASSERT, "(unsigned)( screenTarget->entIndex ) < (unsigned)( ENTITYNUM_ORDINARY_END )", "screenTarget->entIndex doesn't index ENTITYNUM_ORDINARY_END\n\t%i not in [0, %i)", v19, v20) )
          __debugbreak();
      }
      v17 = v14->entIndex;
      if ( (unsigned int)(v17 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v17, "signed", v17) )
        __debugbreak();
      output->scriptedMeleeTarget = v17;
    }
  }
}

/*
==============
AimAssist_UpdateTweakables
==============
*/
void AimAssist_UpdateTweakables(LocalClientNum_t localClientNum)
{
  __int64 v2; 
  AimAssistGlobals *ClientGlobals; 
  bool v15; 
  bool v18; 
  const dvar_t *v21; 
  const dvar_t *v25; 

  v2 = localClientNum;
  ClientGlobals = AimAssist_GetClientGlobals(localClientNum);
  _RBX = DCONST_DVARFLT_aim_slowdown_region_width;
  _RDI = ClientGlobals;
  if ( !DCONST_DVARFLT_aim_slowdown_region_width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_slowdown_region_width") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm2, dword ptr [rbx+28h]; virtualWidth }
  *(float *)&_XMM0 = AimAssist_GetClipWidthFromVirtualWidth((LocalClientNum_t)v2, &scrPlaceViewDisplay[v2], *(double *)&_XMM2);
  __asm { vmovss  dword ptr [rdi+1F8h], xmm0 }
  _RBX = DCONST_DVARMPFLT_aim_slowdown_region_height;
  if ( !DCONST_DVARMPFLT_aim_slowdown_region_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_slowdown_region_height") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm2, dword ptr [rbx+28h]; virtualHeight }
  *(float *)&_XMM0 = AimAssist_GetClipHeightFromVirtualHeight((LocalClientNum_t)v2, &scrPlaceViewDisplay[v2], *(double *)&_XMM2);
  __asm { vmovss  dword ptr [rdi+1FCh], xmm0 }
  _RBX = DCONST_DVARFLT_aim_autoaim_region_width;
  if ( !DCONST_DVARFLT_aim_autoaim_region_width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_autoaim_region_width") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm2, dword ptr [rbx+28h]; virtualWidth }
  *(float *)&_XMM0 = AimAssist_GetClipWidthFromVirtualWidth((LocalClientNum_t)v2, &scrPlaceViewDisplay[v2], *(double *)&_XMM2);
  __asm
  {
    vmulss  xmm1, xmm0, dword ptr [rdi+180h]
    vmovss  dword ptr [rdi+200h], xmm1
  }
  _RBX = DCONST_DVARFLT_aim_autoaim_region_height;
  if ( !DCONST_DVARFLT_aim_autoaim_region_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_autoaim_region_height") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm2, dword ptr [rbx+28h]; virtualHeight }
  *(float *)&_XMM0 = AimAssist_GetClipHeightFromVirtualHeight((LocalClientNum_t)v2, &scrPlaceViewDisplay[v2], *(double *)&_XMM2);
  __asm
  {
    vmulss  xmm1, xmm0, dword ptr [rdi+180h]
    vmovss  dword ptr [rdi+204h], xmm1
  }
  v15 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&_RDI->ps.sharedPS.weapFlags, ACTIVE, 0x11u);
  *(double *)&_XMM0 = BG_GetMeleeAutoAimWidth(&_RDI->ps.sharedPS.weapon, v15);
  __asm { vmovaps xmm2, xmm0; virtualWidth }
  *(float *)&_XMM0 = AimAssist_GetClipWidthFromVirtualWidth((LocalClientNum_t)v2, &scrPlaceViewDisplay[v2], *(double *)&_XMM2);
  __asm
  {
    vmulss  xmm1, xmm0, dword ptr [rdi+180h]
    vmovss  dword ptr [rdi+208h], xmm1
  }
  v18 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&_RDI->ps.sharedPS.weapFlags, ACTIVE, 0x11u);
  *(double *)&_XMM0 = BG_GetMeleeAutoAimHeight(&_RDI->ps.sharedPS.weapon, v18);
  __asm { vmovaps xmm2, xmm0; virtualHeight }
  *(float *)&_XMM0 = AimAssist_GetClipHeightFromVirtualHeight((LocalClientNum_t)v2, &scrPlaceViewDisplay[v2], *(double *)&_XMM2);
  __asm
  {
    vmulss  xmm1, xmm0, dword ptr [rdi+180h]
    vmovss  dword ptr [rdi+20Ch], xmm1
  }
  v21 = DCONST_DVARMPINT_scripted_melee_width;
  if ( !DCONST_DVARMPINT_scripted_melee_width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scripted_melee_width") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  __asm
  {
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, dword ptr [rbx+28h]; virtualWidth
  }
  *(float *)&_XMM0 = AimAssist_GetClipWidthFromVirtualWidth((LocalClientNum_t)v2, &scrPlaceViewDisplay[v2], *(double *)&_XMM2);
  __asm
  {
    vmulss  xmm1, xmm0, dword ptr [rdi+180h]
    vmovss  dword ptr [rdi+210h], xmm1
  }
  v25 = DCONST_DVARMPINT_scripted_melee_height;
  if ( !DCONST_DVARMPINT_scripted_melee_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scripted_melee_height") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v25);
  __asm
  {
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, dword ptr [rbx+28h]; virtualHeight
  }
  *(float *)&_XMM0 = AimAssist_GetClipHeightFromVirtualHeight((LocalClientNum_t)v2, &scrPlaceViewDisplay[v2], *(double *)&_XMM2);
  __asm
  {
    vmulss  xmm1, xmm0, dword ptr [rdi+180h]
    vmovss  dword ptr [rdi+214h], xmm1
  }
  _RBX = DVARFLT_aim_lockon_region_width;
  if ( !DVARFLT_aim_lockon_region_width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_lockon_region_width") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm2, dword ptr [rbx+28h]; virtualWidth }
  *(float *)&_XMM0 = AimAssist_GetClipWidthFromVirtualWidth((LocalClientNum_t)v2, &scrPlaceViewDisplay[v2], *(double *)&_XMM2);
  __asm { vmovss  dword ptr [rdi+218h], xmm0 }
  _RBX = DVARFLT_aim_lockon_region_height;
  if ( !DVARFLT_aim_lockon_region_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_lockon_region_height") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm2, dword ptr [rbx+28h]; virtualHeight }
  *(float *)&_XMM0 = AimAssist_GetClipHeightFromVirtualHeight((LocalClientNum_t)v2, &scrPlaceViewDisplay[v2], *(double *)&_XMM2);
  __asm { vmovss  dword ptr [rdi+21Ch], xmm0 }
  _RBX = DCONST_DVARFLT_mount_aim_lockon_region_width;
  if ( !DCONST_DVARFLT_mount_aim_lockon_region_width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_aim_lockon_region_width") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm2, dword ptr [rbx+28h]; virtualWidth }
  *(float *)&_XMM0 = AimAssist_GetClipWidthFromVirtualWidth((LocalClientNum_t)v2, &scrPlaceViewDisplay[v2], *(double *)&_XMM2);
  __asm { vmovss  dword ptr [rdi+220h], xmm0 }
  _RBX = DCONST_DVARFLT_mount_aim_lockon_region_height;
  if ( !DCONST_DVARFLT_mount_aim_lockon_region_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_aim_lockon_region_height") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm2, dword ptr [rbx+28h]; virtualHeight }
  *(float *)&_XMM0 = AimAssist_GetClipHeightFromVirtualHeight((LocalClientNum_t)v2, &scrPlaceViewDisplay[v2], *(double *)&_XMM2);
  __asm { vmovss  dword ptr [rdi+224h], xmm0 }
  _RBX = DCONST_DVARFLT_aim_slowdown_far_region_width;
  if ( !DCONST_DVARFLT_aim_slowdown_far_region_width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_slowdown_far_region_width") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm2, dword ptr [rbx+28h]; virtualWidth }
  *(float *)&_XMM0 = AimAssist_GetClipWidthFromVirtualWidth((LocalClientNum_t)v2, &scrPlaceViewDisplay[v2], *(double *)&_XMM2);
  __asm { vmovss  dword ptr [rdi+228h], xmm0 }
  _RBX = DCONST_DVARFLT_aim_slowdown_far_region_height;
  if ( !DCONST_DVARFLT_aim_slowdown_far_region_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_slowdown_far_region_height") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm2, dword ptr [rbx+28h]; virtualHeight }
  *(float *)&_XMM0 = AimAssist_GetClipHeightFromVirtualHeight((LocalClientNum_t)v2, &scrPlaceViewDisplay[v2], *(double *)&_XMM2);
  __asm { vmovss  dword ptr [rdi+22Ch], xmm0 }
  _RBX = DCONST_DVARFLT_aim_advanced_slowdown_region_width;
  if ( !DCONST_DVARFLT_aim_advanced_slowdown_region_width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_advanced_slowdown_region_width") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm2, dword ptr [rbx+28h]; virtualWidth }
  *(float *)&_XMM0 = AimAssist_GetClipWidthFromVirtualWidth((LocalClientNum_t)v2, &scrPlaceViewDisplay[v2], *(double *)&_XMM2);
  __asm { vmovss  dword ptr [rdi+230h], xmm0 }
  _RBX = DCONST_DVARFLT_aim_advanced_slowdown_region_height;
  if ( !DCONST_DVARFLT_aim_advanced_slowdown_region_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_advanced_slowdown_region_height") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm2, dword ptr [rbx+28h]; virtualHeight }
  *(float *)&_XMM0 = AimAssist_GetClipHeightFromVirtualHeight((LocalClientNum_t)v2, &scrPlaceViewDisplay[v2], *(double *)&_XMM2);
  __asm { vmovss  dword ptr [rdi+234h], xmm0 }
}

/*
==============
AimAssist_UsingAdvancedSlowdown
==============
*/
bool AimAssist_UsingAdvancedSlowdown(LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 
  int ControllerFromClient; 
  bool result; 

  v1 = DCONST_DVARBOOL_aim_advanced_slowdown_enabled;
  if ( !DCONST_DVARBOOL_aim_advanced_slowdown_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_advanced_slowdown_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  result = 1;
  if ( !v1->current.enabled )
  {
    ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
    if ( GamerProfile_GetAimAssistType(ControllerFromClient) != 2 )
      return 0;
  }
  return result;
}

/*
==============
AimAssist_UsingEnhancedSlowdown
==============
*/
bool AimAssist_UsingEnhancedSlowdown(LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 
  int ControllerFromClient; 
  bool result; 

  v1 = DCONST_DVARBOOL_aim_enhanced_slowdown_enabled;
  if ( !DCONST_DVARBOOL_aim_enhanced_slowdown_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_enhanced_slowdown_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  result = 1;
  if ( !v1->current.enabled )
  {
    ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
    if ( GamerProfile_GetAimAssistType(ControllerFromClient) != 3 )
      return 0;
  }
  return result;
}

/*
==============
AimAssist_XfmWorldPointToClipSpace
==============
*/
bool AimAssist_XfmWorldPointToClipSpace(AimAssistGlobals *const aaGlob, const vec3_t *in, vec3_t *out)
{
  bool v16; 
  bool v17; 
  bool result; 

  __asm { vmovaps [rsp+0D8h+var_78], xmm12 }
  _RSI = out;
  __asm { vmovaps [rsp+0D8h+var_88], xmm13 }
  _RBX = aaGlob;
  __asm
  {
    vmovaps [rsp+0D8h+var_98], xmm14
    vmovaps [rsp+0D8h+var_A8], xmm15
  }
  _RDI = in;
  v16 = aaGlob == NULL;
  if ( !aaGlob )
  {
    v17 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 611, ASSERT_TYPE_ASSERT, "(aaGlob)", (const char *)&queryFormat, "aaGlob");
    v16 = !v17;
    if ( v17 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm14, dword ptr [rdi]
    vmovss  xmm13, dword ptr [rdi+4]
    vmulss  xmm1, xmm13, dword ptr [rbx+0E4h]
    vmulss  xmm0, xmm14, dword ptr [rbx+0E0h]
    vmovss  xmm15, dword ptr [rdi+8]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm15, dword ptr [rbx+0E8h]
    vaddss  xmm0, xmm2, xmm1
    vaddss  xmm12, xmm0, dword ptr [rbx+0ECh]
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm12, xmm1
  }
  if ( v16 )
  {
    result = 0;
  }
  else
  {
    __asm
    {
      vmulss  xmm1, xmm13, dword ptr [rbx+0B4h]
      vmulss  xmm0, xmm14, dword ptr [rbx+0B0h]
      vmovss  xmm4, dword ptr [rbx+0C4h]
      vmovss  xmm5, dword ptr [rbx+0C0h]
      vmovaps [rsp+0D8h+var_18], xmm6
    }
    result = 1;
    __asm
    {
      vmovss  xmm6, dword ptr [rbx+0C8h]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm15, dword ptr [rbx+0B8h]
      vmovaps [rsp+0D8h+var_28], xmm7
      vmovss  xmm7, dword ptr [rbx+0CCh]
      vaddss  xmm0, xmm2, xmm1
      vaddss  xmm2, xmm0, dword ptr [rbx+0BCh]
      vmovaps [rsp+0D8h+var_38], xmm8
      vmovss  xmm8, dword ptr [rbx+0D0h]
      vmovaps [rsp+0D8h+var_48], xmm9
      vmovss  xmm9, dword ptr [rbx+0D4h]
      vmovaps [rsp+0D8h+var_58], xmm10
      vmovss  xmm10, dword ptr [rbx+0D8h]
      vmovaps [rsp+0D8h+var_68], xmm11
      vmovss  xmm11, dword ptr [rbx+0DCh]
      vdivss  xmm3, xmm2, xmm12
      vmovss  dword ptr [rsi], xmm3
      vmulss  xmm0, xmm14, xmm5
      vmulss  xmm1, xmm13, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm15, xmm6
      vmovaps xmm6, [rsp+0D8h+var_18]
      vaddss  xmm2, xmm2, xmm1
      vaddss  xmm0, xmm2, xmm7
      vmovaps xmm7, [rsp+0D8h+var_28]
      vdivss  xmm3, xmm0, xmm12
      vxorps  xmm1, xmm3, cs:__xmm@80000000800000008000000080000000
      vmulss  xmm2, xmm14, xmm8
      vmovaps xmm8, [rsp+0D8h+var_38]
      vmulss  xmm0, xmm13, xmm9
      vmovaps xmm9, [rsp+0D8h+var_48]
      vaddss  xmm3, xmm2, xmm0
      vmovss  dword ptr [rsi+4], xmm1
      vmulss  xmm1, xmm15, xmm10
      vmovaps xmm10, [rsp+0D8h+var_58]
      vaddss  xmm2, xmm3, xmm1
      vaddss  xmm0, xmm2, xmm11
      vmovaps xmm11, [rsp+0D8h+var_68]
      vdivss  xmm3, xmm0, xmm12
      vmovss  dword ptr [rsi+8], xmm3
    }
  }
  __asm
  {
    vmovaps xmm12, [rsp+0D8h+var_78]
    vmovaps xmm13, [rsp+0D8h+var_88]
    vmovaps xmm14, [rsp+0D8h+var_98]
    vmovaps xmm15, [rsp+0D8h+var_A8]
  }
  return result;
}

/*
==============
BG_AimAssist_ApplyAutoMelee
==============
*/
void BG_AimAssist_ApplyAutoMelee(const BgHandler *pmoveHandler, const AimInput *input, AimOutput *output, const BgWeaponMap *weaponMap, const playerState_s *ps, AimAssistSharedGlobals *aaSharedGlob, const AimAssistSharedPlayerState *aaSharedPS, const WorldUpReferenceFrame *refFrame)
{
  AimTargetFlags v17; 
  const AimScreenTarget *BestTarget; 
  unsigned __int16 *v19; 
  unsigned int entIndex; 
  int weaponState; 
  bool v22; 
  int meleeChargeEnt; 
  int ShouldLockView; 
  int v25; 
  const entityState_t *EntityState; 
  float fmt; 
  AimAssistSharedGlobals *v28; 

  if ( !refFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 3561, ASSERT_TYPE_ASSERT, "(refFrame)", (const char *)&queryFormat, "refFrame") )
    __debugbreak();
  if ( !input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 3562, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  if ( !output && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 3563, ASSERT_TYPE_ASSERT, "(output)", (const char *)&queryFormat, "output") )
    __debugbreak();
  _RBP = aaSharedGlob;
  if ( ps->pm_type )
    goto LABEL_15;
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, GameModeFlagValues::ms_mpValue, 0x38u) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_LADDER_CLIMB|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2514, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::MELEE_EXECUTION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::MELEE_EXECUTION )") )
      __debugbreak();
    goto LABEL_15;
  }
  if ( !aaSharedPS->weapon.weaponIdx || (unsigned int)(aaSharedPS->weaponState - 37) <= 1 )
  {
LABEL_15:
    BG_AimAssist_ClearAutoMeleeState(aaSharedGlob);
    return;
  }
  if ( BG_AimAssist_CanSelectMeleeTarget(input, weaponMap, ps, aaSharedGlob, aaSharedPS) )
  {
    if ( !refFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 3454, ASSERT_TYPE_ASSERT, "(refFrame)", (const char *)&queryFormat, "refFrame") )
      __debugbreak();
    if ( !input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 3455, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    if ( !output && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 3456, ASSERT_TYPE_ASSERT, "(output)", (const char *)&queryFormat, "output") )
      __debugbreak();
    *(double *)&_XMM0 = BG_GetMeleeRange(weaponMap, ps, 1);
    __asm
    {
      vmovss  xmm1, dword ptr [rbp+34h]
      vmovss  xmm3, dword ptr [rbp+30h]; regionWidth
      vmovaps xmm2, xmm0; range
    }
    LOBYTE(v17) = 2;
    __asm { vmovss  dword ptr [rsp+68h+fmt], xmm1 }
    BestTarget = AimAssist_GetBestTarget(aaSharedGlob, v17, *(double *)&_XMM2, *(double *)&_XMM3, fmt);
    v19 = (unsigned __int16 *)BestTarget;
    if ( BestTarget )
    {
      entIndex = BestTarget->entIndex;
      if ( entIndex >= 0x7FE )
      {
        LODWORD(v28) = entIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 3469, ASSERT_TYPE_ASSERT, "(unsigned)( screenTarget->entIndex ) < (unsigned)( ENTITYNUM_ORDINARY_END )", "screenTarget->entIndex doesn't index ENTITYNUM_ORDINARY_END\n\t%i not in [0, %i)", v28, 2046) )
          __debugbreak();
      }
      output->meleeChargeEnt = *v19;
    }
  }
  else
  {
    v22 = 0;
    if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x22u) )
    {
      weaponState = ps->weapState[0].weaponState;
      if ( (unsigned int)(weaponState - 7) <= 5 || weaponState == 50 )
        v22 = 1;
    }
    if ( (aaSharedPS->weaponState == 24 || (unsigned int)(ps->weapState[0].weaponState - 22) > 2) && !v22 )
      goto LABEL_15;
    meleeChargeEnt = aaSharedPS->meleeChargeEnt;
    if ( meleeChargeEnt < 0 || (unsigned int)meleeChargeEnt > 0x7FE )
      goto LABEL_15;
    if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 3614, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    ShouldLockView = BG_MeleeChargeShouldLockView(weaponMap, ps, pmoveHandler);
    v25 = ShouldLockView;
    if ( (unsigned int)(aaSharedPS->weaponState - 22) <= 2 )
    {
      if ( !ShouldLockView )
        goto LABEL_15;
      EntityState = BG_GetEntityState(pmoveHandler, aaSharedPS->meleeChargeEnt);
      if ( BG_IsRagdollTrajectory(&EntityState->lerp.pos) )
        goto LABEL_15;
    }
    if ( v25 && !BG_IsThirdPersonMode(weaponMap, ps) )
      BG_AimAssist_ApplyAutoMeleeLockOn(ps, pmoveHandler, weaponMap, input, output, aaSharedGlob, aaSharedPS, refFrame);
  }
}

/*
==============
BG_AimAssist_ApplyAutoMeleeLockOn
==============
*/
void BG_AimAssist_ApplyAutoMeleeLockOn(const playerState_s *ps, const BgHandler *pmoveHandler, const BgWeaponMap *weaponMap, const AimInput *input, AimOutput *output, AimAssistSharedGlobals *aaSharedGlob, const AimAssistSharedPlayerState *aaSharedPS, const WorldUpReferenceFrame *refFrame)
{
  int meleeChargeEnt; 
  const dvar_t *v21; 
  bool v35; 
  bool v46; 
  char v52; 
  char v53; 
  bool v58; 
  vec3_t angles; 
  vec3_t v91; 
  vec3_t outAimPos; 
  vec3_t vec; 

  _R14 = output;
  _RBX = aaSharedGlob;
  _R15 = input;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 3479, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !refFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 3480, ASSERT_TYPE_ASSERT, "(refFrame)", (const char *)&queryFormat, "refFrame") )
    __debugbreak();
  if ( !aaSharedPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 3481, ASSERT_TYPE_ASSERT, "(aaSharedPS)", (const char *)&queryFormat, "aaSharedPS") )
    __debugbreak();
  if ( !aaSharedGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 3482, ASSERT_TYPE_ASSERT, "(aaSharedGlob)", (const char *)&queryFormat, "aaSharedGlob") )
    __debugbreak();
  if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 3483, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  meleeChargeEnt = aaSharedPS->meleeChargeEnt;
  if ( (meleeChargeEnt < 0 || (unsigned int)meleeChargeEnt > 0x7FE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 3484, ASSERT_TYPE_ASSERT, "(PM_MeleeValidChargeTarget( aaSharedPS->meleeChargeEnt ))", (const char *)&queryFormat, "PM_MeleeValidChargeTarget( aaSharedPS->meleeChargeEnt )") )
    __debugbreak();
  if ( BG_CalcMeleeAimPos(pmoveHandler, ps, weaponMap, aaSharedPS->meleeChargeEnt, &outAimPos) )
  {
    v21 = DCONST_DVARBOOL_melee_debug;
    __asm
    {
      vmovaps [rsp+138h+var_58], xmm6
      vmovaps [rsp+138h+var_68], xmm7
      vmovaps [rsp+138h+var_78], xmm8
      vmovaps [rsp+138h+var_88], xmm9
      vmovaps [rsp+138h+var_98], xmm11
      vmovaps [rsp+138h+var_A8], xmm12
    }
    if ( !DCONST_DVARBOOL_melee_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "melee_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    if ( v21->current.enabled )
    {
      __asm { vmovss  xmm1, cs:__real@40000000; radius }
      CG_DebugSphere(&outAimPos, *(float *)&_XMM1, &colorLtBlue, 0, 0);
    }
    if ( aaSharedGlob->autoMeleeState != AIM_MELEE_STATE_UPDATING )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+0Ch]
        vmovss  xmm1, dword ptr [rbx+10h]
        vmovss  dword ptr [rsp+138h+angles], xmm0
        vmovss  xmm0, dword ptr [rbx+14h]
        vmovss  dword ptr [rsp+138h+angles+8], xmm0
        vmovss  dword ptr [rsp+138h+angles+4], xmm1
      }
      WorldUpReferenceFrame::RemoveReferenceFrameFromAngles((WorldUpReferenceFrame *)refFrame, &angles);
      __asm
      {
        vmovss  xmm1, dword ptr [rsp+138h+angles]
        vmovss  xmm0, dword ptr [rsp+138h+angles+4]
        vmovss  dword ptr [rbx+6Ch], xmm1
        vmovss  dword ptr [rbx+70h], xmm0
        vmovss  dword ptr [rbx+64h], xmm1
        vmovss  dword ptr [rbx+68h], xmm0
      }
      aaSharedGlob->autoMeleeState = AIM_MELEE_STATE_UPDATING;
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+138h+outAimPos]
      vsubss  xmm1, xmm0, dword ptr [rbx]
      vmovss  xmm2, dword ptr [rsp+138h+outAimPos+4]
      vsubss  xmm0, xmm2, dword ptr [rbx+4]
      vmovss  dword ptr [rsp+138h+vec], xmm1
      vmovss  xmm1, dword ptr [rsp+138h+outAimPos+8]
      vsubss  xmm2, xmm1, dword ptr [rbx+8]
      vmovss  dword ptr [rsp+138h+vec+8], xmm2
      vmovss  dword ptr [rsp+138h+vec+4], xmm0
    }
    vectoangles(&vec, &v91);
    WorldUpReferenceFrame::RemoveReferenceFrameFromAngles((WorldUpReferenceFrame *)refFrame, &v91);
    if ( aaSharedPS->isThirdPerson )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+138h+var_E8]
        vaddss  xmm1, xmm0, cs:__real@c1700000
        vmovss  dword ptr [rsp+138h+var_E8], xmm1
      }
    }
    v35 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&aaSharedPS->weapFlags, ACTIVE, 0x11u);
    *(double *)&_XMM0 = BG_GetMeleeAutoAimLerp(&aaSharedPS->weapon, v35);
    __asm
    {
      vmovss  xmm3, dword ptr [r15]; deltaTime
      vmovss  xmm1, dword ptr [rbx+6Ch]; cur
      vmovaps xmm6, xmm0
      vmovaps xmm2, xmm0; rate
      vmovss  xmm0, dword ptr [rsp+138h+var_E8]; tgt
    }
    *(double *)&_XMM0 = DiffTrackAngle(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    __asm
    {
      vmovss  xmm3, dword ptr [r15]; deltaTime
      vmovss  xmm1, dword ptr [rbx+70h]; cur
      vmovaps xmm9, xmm0
      vmovss  xmm0, dword ptr [rsp+138h+var_E8+4]; tgt
      vmovaps xmm2, xmm6; rate
    }
    *(double *)&_XMM0 = DiffTrackAngle(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    __asm { vmovaps xmm8, xmm0 }
    v46 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&aaSharedPS->weapFlags, ACTIVE, 0x11u);
    *(double *)&_XMM0 = BG_GetMeleeAutoAimMaxPitchMovement(&aaSharedPS->weapon, v46);
    __asm
    {
      vmovss  xmm11, cs:__real@3f800000
      vmovss  xmm12, cs:__real@bf800000
      vxorps  xmm7, xmm7, xmm7
      vcomiss xmm0, xmm7
      vmovaps xmm6, xmm0
    }
    if ( !(v52 | v53) )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rbx+64h]; angle2
        vmovaps xmm0, xmm9; angle1
      }
      *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
      __asm
      {
        vandps  xmm1, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vcomiss xmm1, xmm6
      }
      if ( !(v52 | v53) )
      {
        __asm
        {
          vcmpless xmm0, xmm7, xmm0
          vblendvps xmm0, xmm12, xmm11, xmm0
          vmulss  xmm1, xmm0, xmm6
          vaddss  xmm9, xmm1, dword ptr [rbx+64h]
        }
      }
    }
    v58 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&aaSharedPS->weapFlags, ACTIVE, 0x11u);
    *(double *)&_XMM0 = BG_GetMeleeAutoAimMaxYawMovement(&aaSharedPS->weapon, v58);
    __asm
    {
      vcomiss xmm0, xmm7
      vmovaps xmm6, xmm0
    }
    if ( !(v52 | v53) )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rbx+68h]; angle2
        vmovaps xmm0, xmm8; angle1
      }
      *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
      __asm
      {
        vandps  xmm1, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vcomiss xmm1, xmm6
      }
      if ( !(v52 | v53) )
      {
        __asm
        {
          vcmpless xmm0, xmm7, xmm0
          vblendvps xmm0, xmm12, xmm11, xmm0
          vmulss  xmm1, xmm0, xmm6
          vaddss  xmm8, xmm1, dword ptr [rbx+68h]
        }
      }
    }
    __asm
    {
      vsubss  xmm0, xmm9, dword ptr [rbx+6Ch]
      vmulss  xmm3, xmm0, cs:__real@3b360b61
      vsubss  xmm0, xmm8, dword ptr [rbx+70h]
      vmulss  xmm6, xmm0, cs:__real@3b360b61
      vaddss  xmm1, xmm3, cs:__real@3f000000
      vmovaps xmm12, [rsp+138h+var_A8]
      vmovaps xmm11, [rsp+138h+var_98]
      vxorps  xmm0, xmm0, xmm0
      vmovss  xmm1, xmm0, xmm1
      vroundss xmm2, xmm7, xmm1, 1
      vsubss  xmm0, xmm3, xmm2
      vmulss  xmm0, xmm0, cs:__real@43b40000
      vaddss  xmm1, xmm0, dword ptr [r14]
      vaddss  xmm2, xmm6, cs:__real@3f000000
      vmovss  dword ptr [r14], xmm1
      vxorps  xmm0, xmm0, xmm0
      vmovss  xmm1, xmm0, xmm2
      vroundss xmm3, xmm7, xmm1, 1
      vmovaps xmm7, [rsp+138h+var_68]
      vsubss  xmm0, xmm6, xmm3
      vmulss  xmm1, xmm0, cs:__real@43b40000
      vaddss  xmm2, xmm1, dword ptr [r14+4]
      vmovaps xmm6, [rsp+138h+var_58]
      vmovss  dword ptr [r14+4], xmm2
      vmovss  dword ptr [rbx+6Ch], xmm9
      vmovaps xmm9, [rsp+138h+var_88]
      vmovss  dword ptr [rbx+70h], xmm8
      vmovaps xmm8, [rsp+138h+var_78]
    }
  }
}

/*
==============
BG_AimAssist_CanSelectMeleeTarget
==============
*/
__int64 BG_AimAssist_CanSelectMeleeTarget(const AimInput *input, const BgWeaponMap *weaponMap, const playerState_s *ps, const AimAssistSharedGlobals *aaSharedGlob, const AimAssistSharedPlayerState *aaSharedPS)
{
  bool v13; 
  bool v14; 
  int v15; 
  unsigned int v16; 
  const WeaponDef *v17; 
  Weapon r_weapon; 

  if ( !input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 3415, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  if ( !aaSharedGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 3416, ASSERT_TYPE_ASSERT, "(aaSharedGlob)", (const char *)&queryFormat, "aaSharedGlob") )
    __debugbreak();
  if ( !aaSharedPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 3417, ASSERT_TYPE_ASSERT, "(aaSharedPS)", (const char *)&queryFormat, "aaSharedPS") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 3418, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  _RAX = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+0A8h+r_weapon.weaponIdx], ymm0
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rsp+0A8h+r_weapon.attachmentVariationIndices+5], xmm1
    vmovsd  xmm0, qword ptr [rax+30h]
    vmovsd  qword ptr [rsp+0A8h+r_weapon.attachmentVariationIndices+15h], xmm0
  }
  *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
  v13 = BG_UsingAlternate(ps);
  v14 = v13;
  v15 = 1;
  v16 = (aaSharedGlob->prevButtons & 4) == 0 && (input->buttons & 4) != 0;
  if ( r_weapon.weaponIdx && !BG_IsAimDownSight(&r_weapon, v13) )
  {
    if ( v14 && BG_IsThrowingAxe(&r_weapon) )
      goto LABEL_26;
    v17 = BG_WeaponDef(&r_weapon, v14);
    if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1414, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
      __debugbreak();
    if ( v17->supportsAlternateMelee )
    {
LABEL_26:
      if ( (aaSharedGlob->prevButtons & 0x20000) != 0 || (input->buttons & 0x20000) == 0 )
        v15 = 0;
      v16 |= v15;
    }
  }
  return v16;
}

/*
==============
BG_AimAssist_ClearAutoMeleeState
==============
*/
void BG_AimAssist_ClearAutoMeleeState(AimAssistSharedGlobals *aaSharedGlob)
{
  if ( !aaSharedGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 3401, ASSERT_TYPE_ASSERT, "(aaSharedGlob)", (const char *)&queryFormat, "aaSharedGlob") )
    __debugbreak();
  *(_QWORD *)&aaSharedGlob->autoMeleeState = 0i64;
  *(_QWORD *)&aaSharedGlob->autoMeleePitch = 0i64;
  aaSharedGlob->autoMeleeInitialYaw = 0.0;
}

