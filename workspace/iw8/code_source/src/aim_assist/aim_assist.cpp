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
  float v2; 
  float v3; 

  v2 = (float)(*((float *)c1 + 3) * *((float *)c1 + 3)) + (float)(*((float *)c1 + 4) * *((float *)c1 + 4));
  v3 = (float)(*((float *)c2 + 3) * *((float *)c2 + 3)) + (float)(*((float *)c2 + 4) * *((float *)c2 + 4));
  if ( v2 >= v3 )
    return v2 > v3;
  else
    return 0xFFFFFFFFi64;
}

/*
==============
AimAssist_AddToTargetList
==============
*/
void AimAssist_AddToTargetList(AimAssistGlobals *aaGlob, const AimScreenTarget *screenTarget)
{
  const dvar_t *v4; 
  float value; 
  const dvar_t *v6; 
  float v7; 
  const dvar_t *v8; 
  float v9; 
  float v10; 
  const dvar_t *v11; 
  int screenTargetCount; 
  int v13; 
  float v14; 
  __int64 v15; 
  int maxTargetCount; 
  int v17; 

  if ( !aaGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 814, ASSERT_TYPE_ASSERT, "(aaGlob)", (const char *)&queryFormat, "aaGlob") )
    __debugbreak();
  if ( !screenTarget && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 815, ASSERT_TYPE_ASSERT, "(screenTarget)", (const char *)&queryFormat, "screenTarget") )
    __debugbreak();
  if ( aaGlob->maxTargetCount > 0x20u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 818, ASSERT_TYPE_ASSERT, "( aaGlob->maxTargetCount ) <= ( ( sizeof( *array_counter( aaGlob->aaSharedGlob.screenTargets ) ) + 0 ) )", "%s <= %s\n\t%i, %i", "aaGlob->maxTargetCount", "ARRAY_COUNT( aaGlob->aaSharedGlob.screenTargets )", aaGlob->maxTargetCount, 32) )
    __debugbreak();
  v4 = DCONST_DVARFLT_aim_slowdown_prioritization_dist_prop;
  if ( !DCONST_DVARFLT_aim_slowdown_prioritization_dist_prop && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_slowdown_prioritization_dist_prop") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  value = v4->current.value;
  v6 = DCONST_DVARFLT_aim_slowdown_prioritization_dist_prop;
  if ( !DCONST_DVARFLT_aim_slowdown_prioritization_dist_prop && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_slowdown_prioritization_dist_prop") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  v7 = v6->current.value + 1.0;
  v8 = DCONST_DVARMPFLT_aim_slowdown_prioritization_crosshair_dist_prop;
  v9 = (float)(v7 * (float)(value + 1.0)) - 1.0;
  if ( !DCONST_DVARMPFLT_aim_slowdown_prioritization_crosshair_dist_prop && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_slowdown_prioritization_crosshair_dist_prop") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  v10 = v8->current.value;
  v11 = DCONST_DVARMPFLT_aim_slowdown_prioritization_crosshair_dist_prop;
  if ( !DCONST_DVARMPFLT_aim_slowdown_prioritization_crosshair_dist_prop && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_slowdown_prioritization_crosshair_dist_prop") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  screenTargetCount = aaGlob->aaSharedGlob.screenTargetCount;
  v13 = 0;
  v14 = (float)((float)(v11->current.value + 1.0) * (float)(v10 + 1.0)) - 1.0;
  while ( v13 < screenTargetCount )
  {
    v15 = (screenTargetCount + v13) / 2;
    if ( AimAssist_CompareTargets(screenTarget, &aaGlob->aaSharedGlob.screenTargets[v15], v9, v14) <= 0 )
      v13 = v15 + 1;
    else
      screenTargetCount = (screenTargetCount + v13) / 2;
  }
  maxTargetCount = aaGlob->maxTargetCount;
  if ( v13 < maxTargetCount )
  {
    v17 = aaGlob->aaSharedGlob.screenTargetCount;
    if ( v17 == maxTargetCount )
      aaGlob->aaSharedGlob.screenTargetCount = --v17;
    memmove_0(&aaGlob->aaSharedGlob.screenTargets[v13 + 1], &aaGlob->aaSharedGlob.screenTargets[v13], 72i64 * (v17 - v13));
    *(__m256i *)&aaGlob->aaSharedGlob.screenTargets[v13].entIndex = *(__m256i *)&screenTarget->entIndex;
    *(__m256i *)aaGlob->aaSharedGlob.screenTargets[v13].velocity.v = *(__m256i *)screenTarget->velocity.v;
    *(double *)&aaGlob->aaSharedGlob.screenTargets[v13].isCharacter = *(double *)&screenTarget->isCharacter;
    ++aaGlob->aaSharedGlob.screenTargetCount;
  }
}

/*
==============
AimAssist_AdvancedCalcSlowdown
==============
*/
void AimAssist_AdvancedCalcSlowdown(const AimInput *input, float *pitchScale, float *yawScale)
{
  AimAssistGlobals *ClientGlobals; 
  float slowdownAdvancedFarRegionHeight; 
  float slowdownAdvancedFarRegionWidth; 
  vec2_t v10; 
  const dvar_t *v11; 
  float v12; 
  float v13; 
  const dvar_t *v14; 
  double v15; 
  float adsLerp; 
  bool v17; 
  float AimAssistRange; 
  AimTargetFlags v19; 
  const AimScreenTarget *BestTarget; 
  float v22; 
  float v23; 
  AimTargetFlags v24; 
  const AimScreenTarget *v25; 
  const AimScreenTarget *v26; 
  __int128 v27; 
  float v28; 
  float v29; 
  float v33; 
  __int128 v34; 
  char v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  __int128 v47; 
  const dvar_t *v49; 
  float v50; 
  double v51; 
  const dvar_t *v52; 
  __int128 v57; 
  const dvar_t *v60; 
  float v61; 
  float v62; 
  const dvar_t *v63; 
  float v64; 
  __int128 v65; 
  __int128 v66; 
  __int128 v67; 
  __int128 v68; 
  bool v69; 
  const dvar_t *v71; 
  __int128 v75; 
  float v79; 
  const dvar_t *v80; 
  float v84; 
  float v85; 
  float v86; 
  float v87; 
  float v88; 
  float v89; 
  double Float_Internal_DebugName; 
  __int128 v92; 
  const dvar_t *v93; 
  __int128 v94; 
  const dvar_t *v95; 
  const dvar_t *v96; 
  vec2_t outScreenTarget; 
  float outAimAssistRange[2]; 
  vec2_t v102; 
  vec2_t v; 
  vec3_t outVec; 
  tmat33_t<vec3_t> outAxis; 

  if ( !input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1833, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  if ( !pitchScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1834, ASSERT_TYPE_ASSERT, "(pitchScale)", (const char *)&queryFormat, "pitchScale") )
    __debugbreak();
  if ( !yawScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1835, ASSERT_TYPE_ASSERT, "(yawScale)", (const char *)&queryFormat, "yawScale") )
    __debugbreak();
  AimAssist_ResetSlowdownScale(pitchScale, yawScale);
  ClientGlobals = AimAssist_GetClientGlobals(input->localClientNum);
  _XMM7 = 0i64;
  outScreenTarget = 0i64;
  ClientGlobals->corner1 = 0i64;
  ClientGlobals->corner2 = 0i64;
  ClientGlobals->perpInput = 0i64;
  ClientGlobals->input = 0i64;
  ClientGlobals->usingNearMissSlowdown = 0;
  slowdownAdvancedFarRegionHeight = ClientGlobals->aaSharedGlob.tweakables.slowdownAdvancedFarRegionHeight;
  slowdownAdvancedFarRegionWidth = ClientGlobals->aaSharedGlob.tweakables.slowdownAdvancedFarRegionWidth;
  outAimAssistRange[0] = 0.0;
  if ( AimAssist_CalcSlowdown_ForRegion(input, slowdownAdvancedFarRegionWidth, slowdownAdvancedFarRegionHeight, pitchScale, yawScale, (const AimScreenTarget **)&outScreenTarget, outAimAssistRange) )
  {
    v10 = outScreenTarget;
    if ( outScreenTarget )
    {
      v11 = DCONST_DVARFLT_aim_slowdown_far_assist_max_range_factor;
      if ( !DCONST_DVARFLT_aim_slowdown_far_assist_max_range_factor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_slowdown_far_assist_max_range_factor") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v11);
      v12 = outAimAssistRange[0];
      v13 = outAimAssistRange[0] * v11->current.value;
      v14 = DCONST_DVARFLT_aim_slowdown_far_assist_min_range_factor;
      if ( !DCONST_DVARFLT_aim_slowdown_far_assist_min_range_factor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_slowdown_far_assist_min_range_factor") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v14);
      v15 = ApplyLinearMap(fsqrt(*(float *)(*(_QWORD *)&v10 + 52i64)), v12 * v14->current.value, v13);
      *pitchScale = (float)(*(float *)&v15 * *pitchScale) + (float)(1.0 - *(float *)&v15);
      *yawScale = (float)(*(float *)&v15 * *yawScale) + (float)(1.0 - *(float *)&v15);
    }
    else
    {
      AimAssist_ResetSlowdownScale(pitchScale, yawScale);
    }
    if ( !ClientGlobals->ps.sharedPS.weapon.weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1876, ASSERT_TYPE_ASSERT, "(aaGlob->ps.sharedPS.weapon.weaponIdx != 0)", (const char *)&queryFormat, "aaGlob->ps.sharedPS.weapon.weaponIdx != WP_NONE") )
      __debugbreak();
    adsLerp = ClientGlobals->adsLerp;
    v17 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ClientGlobals->ps.sharedPS.weapFlags, ACTIVE, 0x11u);
    AimAssistRange = AimAssist_GetAimAssistRange(ClientGlobals, &ClientGlobals->ps.sharedPS.weapon, v17, adsLerp);
    LOBYTE(v19) = 1;
    BestTarget = AimAssist_GetBestTarget(&ClientGlobals->aaSharedGlob, v19, AimAssistRange, ClientGlobals->aaSharedGlob.tweakables.slowdownAdvancedRegionWidth, ClientGlobals->aaSharedGlob.tweakables.slowdownAdvancedRegionHeight);
    _XMM15 = LODWORD(input->pitchAxis);
    LODWORD(v22) = LODWORD(input->yawAxis) ^ _xmm;
    LODWORD(v23) = _XMM15 ^ _xmm;
    v.v[0] = v22;
    LODWORD(outScreenTarget.v[0]) = _XMM15 ^ _xmm;
    if ( BestTarget )
    {
      v49 = DCONST_DVARFLT_aim_slowdown_blend_rate;
      if ( !DCONST_DVARFLT_aim_slowdown_blend_rate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_slowdown_blend_rate") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v49);
      v50 = (float)(v49->current.value * input->deltaTime) + ClientGlobals->slowDownFrac;
      ClientGlobals->slowDownFrac = v50;
      v51 = I_fclamp(v50, 0.0, 1.0);
      ClientGlobals->slowDownFrac = *(float *)&v51;
      v52 = DCONST_DVARFLT_aim_slowdown_standard_smoothing_percent_step;
      if ( !DCONST_DVARFLT_aim_slowdown_standard_smoothing_percent_step && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_slowdown_standard_smoothing_percent_step") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v52);
      _XMM1 = LODWORD(input->yawAxis) & (unsigned __int128)(unsigned int)_xmm;
      __asm
      {
        vmaxss  xmm0, xmm1, xmm0
        vmaxss  xmm1, xmm0, dword ptr [r12+28h]
      }
      v57 = _XMM1;
      *(float *)&v57 = *(float *)&_XMM1 + ClientGlobals->slowDownFrac;
      _XMM2 = v57;
      __asm
      {
        vmaxss  xmm0, xmm2, xmm7
        vminss  xmm12, xmm0, xmm8
      }
      WorldUpReferenceFrame::RemoveReferenceFrameFromVector(&ClientGlobals->refFrame, &BestTarget->velocity, &outVec);
      WorldUpReferenceFrame::RemoveReferenceFrameFromAxis(&ClientGlobals->refFrame, &ClientGlobals->viewAxis, &outAxis);
      v60 = DCONST_DVARFLT_aim_slowdown_target_motion_horiz_speed_max;
      v61 = (float)((float)(outAxis.m[1].v[0] * outVec.v[0]) + (float)(outAxis.m[1].v[1] * outVec.v[1])) + (float)(outAxis.m[1].v[2] * outVec.v[2]);
      if ( !DCONST_DVARFLT_aim_slowdown_target_motion_horiz_speed_max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_slowdown_target_motion_horiz_speed_max") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v60);
      v62 = v61 / v60->current.value;
      I_fclamp(v62, -1.0, 1.0);
      v63 = DCONST_DVARFLT_aim_slowdown_target_motion_sweet_spot_offset_x;
      LODWORD(v64) = LODWORD(v62) ^ _xmm;
      v66 = LODWORD(BestTarget->clipMaxs.v[0]);
      *(float *)&v66 = BestTarget->clipMaxs.v[0] - BestTarget->clipMins.v[0];
      v65 = v66;
      v68 = LODWORD(BestTarget->clipMaxs.v[1]);
      *(float *)&v68 = BestTarget->clipMaxs.v[1] - BestTarget->clipMins.v[1];
      v67 = v68;
      v102.v[0] = v64;
      v69 = COERCE_FLOAT(LODWORD(v64) & _xmm) > 0.001;
      if ( !DCONST_DVARFLT_aim_slowdown_target_motion_sweet_spot_offset_x && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_slowdown_target_motion_sweet_spot_offset_x") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v63);
      if ( v22 == 0.0 )
      {
        _XMM2 = 0i64;
      }
      else
      {
        v71 = DCONST_DVARFLT_aim_slowdown_controller_sweet_spot_offset_x;
        if ( !DCONST_DVARFLT_aim_slowdown_controller_sweet_spot_offset_x && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_slowdown_controller_sweet_spot_offset_x") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v71);
        _XMM1 = v65 ^ (unsigned int)_xmm;
        __asm
        {
          vcmpless xmm0, xmm7, xmm13
          vblendvps xmm0, xmm1, xmm10, xmm0
        }
        v75 = _XMM0;
        *(float *)&v75 = *(float *)&_XMM0 * v71->current.value;
        _XMM2 = v75;
      }
      _XMM0 = _XMM2 & (unsigned int)_xmm;
      __asm
      {
        vcmpltss xmm1, xmm0, xmm1
        vblendvps xmm0, xmm2, xmm11, xmm1
      }
      outAimAssistRange[0] = *(float *)&_XMM0;
      if ( *(float *)&_XMM15 == -0.0 )
      {
        v79 = 0.0;
      }
      else
      {
        v80 = DCONST_DVARFLT_aim_slowdown_controller_sweet_spot_offset_y;
        if ( !DCONST_DVARFLT_aim_slowdown_controller_sweet_spot_offset_y && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_slowdown_controller_sweet_spot_offset_y") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v80);
        _XMM1 = v67 ^ (unsigned int)_xmm;
        __asm
        {
          vcmpless xmm0, xmm15, xmm6
          vblendvps xmm0, xmm1, xmm14, xmm0
        }
        v79 = *(float *)&_XMM0 * v80->current.value;
      }
      v84 = (float)(BestTarget->clipMins.v[0] + BestTarget->clipMaxs.v[0]) * 0.5;
      v85 = v84 + outAimAssistRange[0];
      v86 = (float)(BestTarget->clipMins.v[1] + BestTarget->clipMaxs.v[1]) * -0.5;
      LODWORD(v87) = COERCE_UNSIGNED_INT(v84 + outAimAssistRange[0]) ^ _xmm;
      LODWORD(outAimAssistRange[0]) = COERCE_UNSIGNED_INT(v86 + v79) ^ _xmm;
      v88 = 0.0;
      v89 = 0.0;
      if ( (float)(COERCE_FLOAT(LODWORD(v85) ^ _xmm) * v102.v[0]) <= 0.0 && (v69 || (float)(v87 * v.v[0]) <= 0.0) )
      {
        Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_aim_slowdown_standard_slowdown_yaw, "aim_slowdown_standard_slowdown_yaw");
        v92 = LODWORD(FLOAT_1_0);
        *(float *)&v92 = 1.0 - (float)(*(float *)&Float_Internal_DebugName * *(float *)&_XMM12);
        _XMM6 = v92;
      }
      else
      {
        v93 = DCONST_DVARFLT_aim_slowdown_max_factor_yaw;
        if ( !DCONST_DVARFLT_aim_slowdown_max_factor_yaw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_slowdown_max_factor_yaw") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v93);
        v94 = LODWORD(FLOAT_1_0);
        *(float *)&v94 = 1.0 - (float)(*(float *)&_XMM12 * v93->current.value);
        _XMM6 = v94;
        v88 = FLOAT_1_0;
      }
      if ( (float)(outAimAssistRange[0] * outScreenTarget.v[0]) <= 0.0 )
      {
        v96 = DCONST_DVARFLT_aim_slowdown_standard_slowdown_pitch;
        if ( !DCONST_DVARFLT_aim_slowdown_standard_slowdown_pitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_slowdown_standard_slowdown_pitch") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v96);
      }
      else
      {
        v95 = DCONST_DVARFLT_aim_slowdown_max_factor_pitch;
        if ( !DCONST_DVARFLT_aim_slowdown_max_factor_pitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_slowdown_max_factor_pitch") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v95);
        v89 = FLOAT_1_0;
      }
      _XMM0 = *(unsigned int *)pitchScale;
      __asm { vminss  xmm1, xmm0, xmm1 }
      *pitchScale = *(float *)&_XMM1;
      __asm { vminss  xmm2, xmm6, dword ptr [r14] }
      *yawScale = *(float *)&_XMM2;
      ClientGlobals->sweetSpotX = v85;
      ClientGlobals->sweetSpotY = v86 + v79;
      ClientGlobals->centerTargetX = v84;
      ClientGlobals->centerTargetY = v86;
      ClientGlobals->usingMaxX = v88 != 0.0;
      ClientGlobals->usingMaxY = v89 != 0.0;
      ClientGlobals->corner1 = 0i64;
      ClientGlobals->corner2 = 0i64;
    }
    else
    {
      if ( !AimAssist_UsingEnhancedSlowdown(input->localClientNum) )
      {
        *(_QWORD *)&ClientGlobals->slowDownFrac = 0i64;
        *(_QWORD *)&ClientGlobals->sweetSpotY = 0i64;
        ClientGlobals->centerTargetY = 0.0;
        *(_WORD *)&ClientGlobals->usingMaxX = 0;
        ClientGlobals->corner1 = 0i64;
        ClientGlobals->corner2 = 0i64;
        ClientGlobals->perpInput = 0i64;
        ClientGlobals->input = 0i64;
        ClientGlobals->usingNearMissSlowdown = 0;
        return;
      }
      LOBYTE(v24) = 1;
      v25 = AimAssist_GetBestTarget(&ClientGlobals->aaSharedGlob, v24, AimAssistRange, ClientGlobals->aaSharedGlob.tweakables.slowdownRegionWidth, ClientGlobals->aaSharedGlob.tweakables.slowdownRegionHeight);
      v26 = v25;
      if ( v25 )
      {
        v27 = LODWORD(v25->clipMins.v[0]);
        *(float *)&v27 = v25->clipMins.v[0] + v25->clipMaxs.v[0];
        v28 = *(float *)&v27 * 0.5;
        v29 = (float)(v25->clipMaxs.v[1] + v25->clipMins.v[1]) * 0.5;
        *(float *)&v27 = fsqrt((float)((float)(*(float *)&v27 * *(float *)&v27) * 0.25) + (float)(COERCE_FLOAT(LODWORD(v29) ^ _xmm) * COERCE_FLOAT(LODWORD(v29) ^ _xmm)));
        _XMM3 = v27;
        __asm
        {
          vcmpless xmm0, xmm3, cs:__real@80000000
          vblendvps xmm0, xmm3, xmm8, xmm0
        }
        v33 = 1.0 / *(float *)&_XMM0;
        v34 = _XMM15 ^ (unsigned int)_xmm;
        *(float *)&v34 = fsqrt((float)(v23 * v23) + (float)(v22 * v22));
        _XMM2 = v34;
        __asm
        {
          vcmpless xmm0, xmm2, cs:__real@80000000
          vblendvps xmm0, xmm2, xmm8, xmm0
        }
        outAimAssistRange[0] = (float)(1.0 / *(float *)&_XMM0) * v22;
        *(float *)&v34 = (float)((float)(v33 * v28) * outAimAssistRange[0]) + (float)((float)(v33 * COERCE_FLOAT(LODWORD(v29) ^ _xmm)) * (float)((float)(1.0 / *(float *)&_XMM0) * v23));
        outAimAssistRange[1] = (float)(1.0 / *(float *)&_XMM0) * v23;
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_aim_slowdown_near_miss_deflection_dot, "aim_slowdown_near_miss_deflection_dot");
        if ( *(float *)&v34 > *(float *)&_XMM0 )
        {
          if ( v28 > 0.0 )
          {
            if ( v29 < 0.0 )
              goto LABEL_29;
          }
          else if ( v29 >= 0.0 )
          {
LABEL_29:
            v38 = 0;
LABEL_30:
            LODWORD(v39) = LODWORD(v26->clipMins.v[1]) ^ _xmm;
            LODWORD(outScreenTarget.v[1]) = LODWORD(v26->clipMaxs.v[1]) ^ _xmm;
            v.v[1] = v39;
            if ( v38 )
              v40 = v26->clipMaxs.v[0];
            else
              v40 = v26->clipMins.v[0];
            v.v[0] = v40;
            if ( v38 )
              v41 = v26->clipMins.v[0];
            else
              v41 = v26->clipMaxs.v[0];
            ClientGlobals->corner1 = v;
            outScreenTarget.v[0] = v41;
            ClientGlobals->corner2 = outScreenTarget;
            Vec2NormalizeFast(&v);
            Vec2NormalizeFast(&outScreenTarget);
            LODWORD(v102.v[0]) = _XMM15;
            v102.v[1] = v22;
            v42 = (float)(*(float *)&_XMM15 * outScreenTarget.v[0]) + (float)(v22 * outScreenTarget.v[1]);
            v43 = (float)(*(float *)&_XMM15 * v.v[0]) + (float)(v22 * v.v[1]);
            ClientGlobals->perpInput = v102;
            ClientGlobals->input = *(vec2_t *)outAimAssistRange;
            ClientGlobals->usingNearMissSlowdown = (float)(v42 * v43) > 0.0;
            if ( (float)(v42 * v43) > 0.0 )
            {
              Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_aim_slowdown_max_factor_near_miss_pitch, "aim_slowdown_max_factor_near_miss_pitch");
              _XMM0 = *(unsigned int *)pitchScale;
              __asm { vminss  xmm1, xmm0, xmm1 }
              *pitchScale = *(float *)&_XMM1;
              *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_aim_slowdown_max_factor_near_miss_yaw, "aim_slowdown_max_factor_near_miss_yaw");
              v47 = LODWORD(FLOAT_1_0);
              *(float *)&v47 = 1.0 - *(float *)&_XMM0;
              _XMM0 = v47;
              __asm { vminss  xmm1, xmm0, dword ptr [r14] }
              *yawScale = *(float *)&_XMM1;
            }
            return;
          }
          v38 = 1;
          goto LABEL_30;
        }
      }
    }
  }
}

/*
==============
AimAssist_ApplyAutoAim
==============
*/
void AimAssist_ApplyAutoAim(const AimInput *input, AimOutput *output)
{
  AimAssistGlobals *ClientGlobals; 
  int ControllerFromClient; 
  bool v6; 
  bool autoAim; 
  const dvar_t *v8; 
  bool v9; 
  float v16; 
  float v17; 
  bool v19; 
  int autoAimPressed; 
  bool v21; 
  int weaponState; 
  bool v23; 
  float AutoAimRange; 
  AimTargetFlags v25; 
  const AimScreenTarget *BestTarget; 
  const AimScreenTarget *v27; 
  float v28; 
  float v29; 
  cg_t *LocalClientGlobals; 
  const playerState_s *p_predictedPlayerState; 
  float autoAimDeltaYaw; 
  float deltaTime; 
  double Float_Internal_DebugName; 
  double v35; 
  float v36; 
  float v37; 
  double v38; 
  double v39; 
  float v40; 
  float v42; 
  float v43; 
  float v45; 
  float v46; 
  float v47; 
  vec3_t outAngles; 
  vec3_t angles; 
  float v0; 
  float v51; 
  float v52; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> in1; 
  tmat33_t<vec3_t> v56; 

  if ( !input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 2371, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  if ( !output && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 2372, ASSERT_TYPE_ASSERT, "(output)", (const char *)&queryFormat, "output") )
    __debugbreak();
  ClientGlobals = AimAssist_GetClientGlobals(input->localClientNum);
  ControllerFromClient = CL_Mgr_GetControllerFromClient(input->localClientNum);
  v6 = 0;
  autoAim = GamerProfile_GetProfileSettings(ControllerFromClient)->config.autoAim;
  if ( (ClientGlobals->ps.linkFlags.m_flags[0] & 4) == 0 )
    v6 = autoAim;
  if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_LADDER_CLIMB) )
    goto LABEL_57;
  v8 = DCONST_DVARBOOL_aim_autoaim_enabled;
  if ( !DCONST_DVARBOOL_aim_autoaim_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_autoaim_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( !v8->current.enabled || (input->buttons & 0x200) == 0 || ClientGlobals->ps.isDualWielding || !v6 || !ClientGlobals->ps.sharedPS.weapon.weaponIdx || ClientGlobals->ps.isUsingOffhand || (v9 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ClientGlobals->ps.sharedPS.weapFlags, ACTIVE, 0x11u), BG_GetWeaponType(&ClientGlobals->ps.sharedPS.weapon, v9) == WEAPTYPE_RIOTSHIELD) )
  {
LABEL_57:
    AimAssist_ClearAutoAimTarget(ClientGlobals);
    ClientGlobals->autoAimPressed = 0;
    return;
  }
  WorldUpReferenceFrame::GetAngles(&ClientGlobals->refFrame, &outAngles);
  _XMM10 = 0i64;
  __asm { vroundss xmm2, xmm10, xmm1, 1 }
  outAngles.v[0] = (float)((float)(0.0027777778 * outAngles.v[0]) - *(float *)&_XMM2) * 360.0;
  __asm { vroundss xmm3, xmm10, xmm2, 1 }
  outAngles.v[1] = (float)((float)(0.0027777778 * outAngles.v[1]) - *(float *)&_XMM3) * 360.0;
  __asm { vroundss xmm2, xmm10, xmm1, 1 }
  outAngles.v[2] = (float)((float)(0.0027777778 * outAngles.v[2]) - *(float *)&_XMM2) * 360.0;
  v0 = ClientGlobals->autoAimWorldUpAtTargetSetTime.v[0];
  __asm { vroundss xmm2, xmm10, xmm1, 1 }
  v51 = ClientGlobals->autoAimWorldUpAtTargetSetTime.v[1];
  __asm { vroundss xmm3, xmm10, xmm2, 1 }
  v16 = (float)(v51 * 0.0027777778) - *(float *)&_XMM3;
  v17 = 0.0027777778 * ClientGlobals->autoAimWorldUpAtTargetSetTime.v[2];
  __asm { vroundss xmm3, xmm10, xmm2, 1 }
  v0 = (float)((float)(v0 * 0.0027777778) - *(float *)&_XMM2) * 360.0;
  v51 = v16 * 360.0;
  v52 = (float)(v17 - *(float *)&_XMM3) * 360.0;
  v19 = VecNCompareCustomEpsilon(&v0, outAngles.v, 0.001, 3);
  autoAimPressed = ClientGlobals->autoAimPressed;
  v21 = !v19;
  if ( !autoAimPressed && (input->buttons & 0x200) != 0 || CGMovingPlatformAimAssist::HadAutoAimTimeout(&ClientGlobals->moverData, autoAimPressed) || v21 )
  {
    weaponState = ClientGlobals->ps.sharedPS.weaponState;
    if ( (unsigned int)(weaponState - 18) > 3 && weaponState != 78 )
    {
      v23 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ClientGlobals->ps.sharedPS.weapFlags, ACTIVE, 0x11u);
      AutoAimRange = AimAssist_GetAutoAimRange(&ClientGlobals->ps.sharedPS.weapon, v23);
      LOBYTE(v25) = 1;
      BestTarget = AimAssist_GetBestTarget(&ClientGlobals->aaSharedGlob, v25, AutoAimRange, ClientGlobals->aaSharedGlob.tweakables.autoAimRegionWidth, ClientGlobals->aaSharedGlob.tweakables.autoAimRegionHeight);
      v27 = BestTarget;
      if ( BestTarget )
      {
        if ( ClientGlobals->ps.commandTimeMs > ClientGlobals->autoAimNextPressTime && (!ClientGlobals->autoAimPressed || BestTarget->entIndex == ClientGlobals->autoAimTargetEnt) )
        {
          ClientGlobals->autoAimNextPressTime = ClientGlobals->ps.commandTimeMs + Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_aim_autoaim_delay, "aim_autoaim_delay");
          if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 2320, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::AUTOAIM ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::AUTOAIM )") )
            __debugbreak();
          AimAssist_ClearAutoAimTarget(ClientGlobals);
          ClientGlobals->autoAimTargetEnt = v27->entIndex;
          ClientGlobals->autoAimActive = 1;
          v28 = ClientGlobals->aaSharedGlob.viewAngles.v[1];
          angles.v[0] = ClientGlobals->aaSharedGlob.viewAngles.v[0];
          angles.v[2] = ClientGlobals->aaSharedGlob.viewAngles.v[2];
          angles.v[1] = v28;
          WorldUpReferenceFrame::RemoveReferenceFrameFromAngles(&ClientGlobals->refFrame, &angles);
          if ( ClientGlobals->ps.groundTiltRefAngles.v[0] != 0.0 || ClientGlobals->ps.groundTiltRefAngles.v[1] != 0.0 || ClientGlobals->ps.groundTiltRefAngles.v[2] != 0.0 )
          {
            if ( !Com_GameMode_SupportsFeature(WEAPON_RELOAD_END_RECHAMBER) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 2338, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_AIM_ASSIST_REF ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_AIM_ASSIST_REF )") )
              __debugbreak();
            AnglesToAxis(&ClientGlobals->ps.groundTiltRefAngles, &axis);
            MatrixTranspose(&axis, &out);
            AnglesToAxis(&angles, &in1);
            MatrixMultiply(&in1, &out, &v56);
            AxisToAngles(&v56, &angles);
          }
          v29 = angles.v[1];
          ClientGlobals->autoAimPitch = angles.v[0];
          ClientGlobals->autoAimYaw = v29;
          WorldUpReferenceFrame::GetAngles(&ClientGlobals->refFrame, &ClientGlobals->autoAimWorldUpAtTargetSetTime);
          AimAssist_UpdateAutoAimTarget(ClientGlobals);
        }
      }
    }
    if ( !ClientGlobals->autoAimPressed )
      ClientGlobals->autoAimPressed = ClientGlobals->moverData.m_commandTime;
  }
  if ( ClientGlobals->autoAimActive )
  {
    if ( !BG_IsTurretActiveFlags(&ClientGlobals->ps.eFlags) && ClientGlobals->adsLerp < 1.0 )
    {
      if ( !AimAssist_UpdateAutoAimTarget(ClientGlobals) )
      {
LABEL_55:
        AimAssist_ClearAutoAimTarget(ClientGlobals);
        return;
      }
      LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)input->localClientNum);
      p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
      if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2605, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( BG_IsPlayerZeroG(p_predictedPlayerState) && !BG_IsPlayerZeroGWalking(p_predictedPlayerState) )
      {
        autoAimDeltaYaw = ClientGlobals->autoAimDeltaYaw;
        ClientGlobals->autoAimPitchTarget = ClientGlobals->autoAimDeltaPitch + ClientGlobals->autoAimPitchTarget;
        ClientGlobals->autoAimYawTarget = autoAimDeltaYaw + ClientGlobals->autoAimYawTarget;
      }
    }
    deltaTime = input->deltaTime;
    Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_aim_autoaim_lerp, "aim_autoaim_lerp");
    v35 = DiffTrackAngle(ClientGlobals->autoAimPitchTarget, ClientGlobals->autoAimPitch, *(float *)&Float_Internal_DebugName, deltaTime);
    v36 = input->deltaTime;
    v37 = *(float *)&v35;
    v38 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_aim_autoaim_lerp, "aim_autoaim_lerp");
    v39 = DiffTrackAngle(ClientGlobals->autoAimYawTarget, ClientGlobals->autoAimYaw, *(float *)&v38, v36);
    v40 = (float)(v37 - ClientGlobals->autoAimPitch) * 0.0027777778;
    ClientGlobals->autoAimPitch = v37;
    __asm { vroundss xmm4, xmm10, xmm1, 1 }
    v42 = *(float *)&v39 - ClientGlobals->autoAimYaw;
    ClientGlobals->autoAimYaw = *(float *)&v39;
    v43 = (float)(v40 - *(float *)&_XMM4) * 360.0;
    __asm { vroundss xmm0, xmm10, xmm1, 1 }
    v45 = (float)((float)(v42 * 0.0027777778) - *(float *)&_XMM0) * 360.0;
    v46 = v45 + ClientGlobals->autoAimDeltaYaw;
    ClientGlobals->autoAimDeltaPitch = v43 + ClientGlobals->autoAimDeltaPitch;
    ClientGlobals->autoAimDeltaYaw = v46;
    v47 = v45 + output->yaw;
    output->pitch = v43 + output->pitch;
    output->yaw = v47;
    if ( COERCE_FLOAT(LODWORD(v43) & _xmm) < 0.001 && COERCE_FLOAT(LODWORD(v45) & _xmm) <= 0.001 )
      goto LABEL_55;
  }
}

/*
==============
AimAssist_ApplyLockOn
==============
*/
void AimAssist_ApplyLockOn(const AimInput *input, AimOutput *output)
{
  AimAssistGlobals *ClientGlobals; 
  int prevTargetEnt; 
  int ControllerFromClient; 
  const dvar_t *v7; 
  float v8; 
  double Float_Internal_DebugName; 
  float v10; 
  double v11; 
  float v12; 
  double v13; 
  ClActiveClient *Client; 
  cg_t *LocalClientGlobals; 
  float adsLerp; 
  bool v17; 
  float AimAssistRange; 
  AimTargetFlags v19; 
  const AimScreenTarget *PrevOrBestTarget; 
  const AimScreenTarget *v21; 
  double v22; 
  float v23; 
  double v24; 
  float v25; 
  double v26; 
  float yawAxis; 
  float v28; 
  float v29; 
  float v30; 
  bool v31; 
  double v32; 
  double v33; 
  bool v34; 
  double v35; 
  double v36; 
  float v37; 
  float v38; 
  double v39; 
  float v40; 
  float v41; 
  __int128 v42; 
  float v43; 
  const dvar_t *v45; 
  const char *v46; 
  double v50; 
  float v51; 
  float v55; 
  float v56; 
  float pitch; 
  float pitchTurnRate; 
  float yawTurnRate; 
  vec2_t outSlowDownScale; 
  vec2_t outLockOnScale; 
  vec3_t v62; 
  vec3_t v63; 
  vec3_t outVec; 
  tmat33_t<vec3_t> outAxis; 
  vec3_t angles; 
  tmat33_t<vec3_t> v67; 

  if ( !input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 2583, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  if ( !output && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 2584, ASSERT_TYPE_ASSERT, "(output)", (const char *)&queryFormat, "output") )
    __debugbreak();
  ClientGlobals = AimAssist_GetClientGlobals(input->localClientNum);
  prevTargetEnt = ClientGlobals->lockOnTargetEnt;
  ClientGlobals->lockOnTargetEnt = 2047;
  ControllerFromClient = CL_Mgr_GetControllerFromClient(input->localClientNum);
  if ( GamerProfile_GetProfileSettings(ControllerFromClient)->config.targetAssist )
  {
    v7 = DCONST_DVARBOOL_aim_lockon_enabled;
    if ( !DCONST_DVARBOOL_aim_lockon_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_lockon_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    if ( v7->current.enabled && !AimAssist_IsPlayerUsingOffhand(&ClientGlobals->ps) && (ClientGlobals->ps.linkFlags.m_flags[0] & 4) == 0 )
    {
      if ( ClientGlobals->autoAimActive )
      {
        if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 2617, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::AUTOAIM ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::AUTOAIM )") )
          __debugbreak();
      }
      else if ( ClientGlobals->ps.sharedPS.meleeChargeEnt == 2047 )
      {
        LODWORD(v8) = LODWORD(input->pitchAxis) & _xmm;
        Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_aim_lockon_deflection, "aim_lockon_deflection");
        if ( v8 >= *(float *)&Float_Internal_DebugName || (LODWORD(v10) = LODWORD(input->yawAxis) & _xmm, v11 = Dvar_GetFloat_Internal_DebugName(DVARFLT_aim_lockon_deflection, "aim_lockon_deflection"), v10 >= *(float *)&v11) || (LODWORD(v12) = LODWORD(input->rightAxis) & _xmm, v13 = Dvar_GetFloat_Internal_DebugName(DVARFLT_aim_lockon_deflection, "aim_lockon_deflection"), v12 >= *(float *)&v13) )
        {
          Client = ClActiveClient::GetClient((const LocalClientNum_t)input->localClientNum);
          if ( Client->GetFreeMoveType(Client) == FREEMOVE_NONE )
          {
            LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)input->localClientNum);
            if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2425, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
              __debugbreak();
            if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, ACTIVE, 0x20u) && LocalClientGlobals->predictedPlayerState.skydivePlayerState.state[0] != 1 )
            {
              if ( ClientGlobals->ps.sharedPS.weapon.weaponIdx )
              {
                adsLerp = ClientGlobals->adsLerp;
                v17 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ClientGlobals->ps.sharedPS.weapFlags, ACTIVE, 0x11u);
                AimAssistRange = AimAssist_GetAimAssistRange(ClientGlobals, &ClientGlobals->ps.sharedPS.weapon, v17, adsLerp);
                LOBYTE(v19) = 1;
                PrevOrBestTarget = AimAssist_GetPrevOrBestTarget(ClientGlobals, v19, AimAssistRange, ClientGlobals->aaSharedGlob.tweakables.lockOnRegionWidth, ClientGlobals->aaSharedGlob.tweakables.lockOnRegionHeight, prevTargetEnt);
                v21 = PrevOrBestTarget;
                if ( PrevOrBestTarget )
                {
                  if ( PrevOrBestTarget->distSqr > 0.0 )
                  {
                    v22 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_aim_slowdown_box_reduction_range_max, "aim_slowdown_box_reduction_range_max");
                    v23 = *(float *)&v22;
                    v24 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_aim_slowdown_box_reduction_range_min, "aim_slowdown_box_reduction_range_min");
                    v25 = fsqrt(v21->distSqr);
                    ApplyLinearMap(v25, *(float *)&v24, v23);
                    v26 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_aim_slowdown_box_reduction_max_percent, "aim_slowdown_box_reduction_max_percent");
                    if ( AimAssist_DoBoundsIntersectCenterBox(&v21->clipMins, &v21->clipMaxs, (float)(1.0 - (float)(*(float *)&v26 * v25)) * ClientGlobals->aaSharedGlob.tweakables.lockOnRegionWidth, (float)(1.0 - (float)(*(float *)&v26 * v25)) * ClientGlobals->aaSharedGlob.tweakables.lockOnRegionHeight) )
                    {
                      AimAssist_CalcMovementScale(ClientGlobals, &outSlowDownScale, &outLockOnScale);
                      ClientGlobals->lockOnTargetEnt = v21->entIndex;
                      outSlowDownScale.v[0] = fsqrt(v21->distSqr) * 3.1415927;
                      if ( outSlowDownScale.v[0] <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 2691, ASSERT_TYPE_ASSERT, "(arcLength > 0.0f)", (const char *)&queryFormat, "arcLength > 0.0f") )
                        __debugbreak();
                      WorldUpReferenceFrame::RemoveReferenceFrameFromAxis(&ClientGlobals->refFrame, &ClientGlobals->viewAxis, &outAxis);
                      WorldUpReferenceFrame::RemoveReferenceFrameFromVector(&ClientGlobals->refFrame, &ClientGlobals->ps.velocity, &outVec);
                      WorldUpReferenceFrame::RemoveReferenceFrameFromVector(&ClientGlobals->refFrame, &v21->velocity, &v63);
                      if ( !AimAssist_UsingAdvancedSlowdown(input->localClientNum) && !AimAssist_UsingEnhancedSlowdown(input->localClientNum) || (yawAxis = input->yawAxis, WorldUpReferenceFrame::RemoveReferenceFrameFromVector(&ClientGlobals->refFrame, &v21->velocity, &v62), WorldUpReferenceFrame::RemoveReferenceFrameFromAxis(&ClientGlobals->refFrame, &ClientGlobals->viewAxis, &v67), (float)((float)((float)((float)(v67.m[1].v[0] * v62.v[0]) + (float)(v67.m[1].v[1] * v62.v[1])) + (float)(v67.m[1].v[2] * v62.v[2])) * yawAxis) < -0.0) )
                      {
                        v28 = 1.0 / outSlowDownScale.v[0];
                        v29 = (float)((float)(v63.v[0] * outAxis.m[2].v[0]) + (float)(v63.v[1] * outAxis.m[2].v[1])) + (float)(v63.v[2] * outAxis.m[2].v[2]);
                        v30 = (float)((float)(outVec.v[0] * outAxis.m[2].v[0]) + (float)(outVec.v[1] * outAxis.m[2].v[1])) + (float)(outVec.v[2] * outAxis.m[2].v[2]);
                        yawTurnRate = (float)((float)((float)((float)((float)(v63.v[0] * outAxis.m[1].v[0]) + (float)(v63.v[1] * outAxis.m[1].v[1])) + (float)(v63.v[2] * outAxis.m[1].v[2])) - (float)((float)((float)(outVec.v[0] * outAxis.m[1].v[0]) + (float)(outVec.v[1] * outAxis.m[1].v[1])) + (float)(outVec.v[2] * outAxis.m[1].v[2]))) * (float)(1.0 / outSlowDownScale.v[0])) * 180.0;
                        CGMovingPlatformAimAssist::AdjustYawForMoverVelocity(&ClientGlobals->moverData, &yawTurnRate);
                        v31 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ClientGlobals->ps.sharedPS.weapFlags, ACTIVE, 0x11u);
                        v32 = BG_AimAssistLockonStrength(&ClientGlobals->ps.sharedPS.weapon, v31);
                        yawTurnRate = (float)(*(float *)&v32 * yawTurnRate) * outLockOnScale.v[1];
                        v33 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_aim_lockon_strength_mult, "aim_lockon_strength_mult");
                        yawTurnRate = *(float *)&v33 * yawTurnRate;
                        pitchTurnRate = (float)((float)(v29 - v30) * v28) * 180.0;
                        CGMovingPlatformAimAssist::AdjustPitchForMoverVelocity(&ClientGlobals->moverData, &pitchTurnRate);
                        v34 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ClientGlobals->ps.sharedPS.weapFlags, ACTIVE, 0x11u);
                        v35 = BG_AimAssistLockonStrength(&ClientGlobals->ps.sharedPS.weapon, v34);
                        pitchTurnRate = (float)(*(float *)&v35 * pitchTurnRate) * outLockOnScale.v[0];
                        v36 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_aim_lockon_strength_pitch_mult, "aim_lockon_strength_pitch_mult");
                        pitchTurnRate = *(float *)&v36 * pitchTurnRate;
                        v37 = v21->currentHeight - v21->previousHeight;
                        AxisToAngles(&ClientGlobals->viewAxis, &angles);
                        v38 = angles.v[0] * 0.017453292;
                        v39 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_aim_lockon_height_change_strength, "aim_lockon_height_change_strength");
                        v40 = *(float *)&v39;
                        v41 = cosf_0(v38) * v37;
                        v42 = LODWORD(pitchTurnRate);
                        v43 = v40 * (float)((float)(v41 * v28) * 180.0);
                        _XMM7 = 0i64;
                        if ( pitchTurnRate <= 0.0 )
                        {
                          v45 = DCONST_DVARMPFLT_aim_lockon_max_pitch_speed_down;
                          v46 = "aim_lockon_max_pitch_speed_down";
                        }
                        else
                        {
                          v45 = DCONST_DVARFLT_aim_lockon_max_pitch_speed_up;
                          v46 = "aim_lockon_max_pitch_speed_up";
                        }
                        *(double *)&v42 = Dvar_GetFloat_Internal_DebugName(v45, v46);
                        if ( COERCE_FLOAT(LODWORD(pitchTurnRate) & _xmm) > *(float *)&v42 )
                        {
                          _XMM1 = v42 ^ _xmm;
                          __asm
                          {
                            vcmpless xmm0, xmm7, xmm3
                            vblendvps xmm0, xmm1, xmm2, xmm0
                          }
                          pitchTurnRate = *(float *)&_XMM0;
                        }
                        v50 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_aim_lockon_max_yaw_speed, "aim_lockon_max_yaw_speed");
                        v51 = yawTurnRate;
                        if ( COERCE_FLOAT(LODWORD(yawTurnRate) & _xmm) > *(float *)&v50 )
                        {
                          _XMM1 = LODWORD(FLOAT_N1_0);
                          __asm
                          {
                            vcmpless xmm2, xmm7, xmm2
                            vblendvps xmm2, xmm1, xmm3, xmm2
                          }
                          v51 = *(float *)&_XMM2 * *(float *)&v50;
                        }
                        v55 = (float)(v51 * input->deltaTimeScaled) + output->yaw;
                        v56 = pitchTurnRate;
                        pitch = output->pitch;
                        output->yaw = v55;
                        output->pitch = (float)(pitch - (float)(v56 * input->deltaTimeScaled)) - v43;
                      }
                    }
                  }
                }
              }
            }
          }
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
  AimAssistGlobals *ClientGlobals; 
  const dvar_t *v7; 
  float mountFraction; 
  secure_uint32_3_t *p_viewOrigin; 
  float x; 
  float y; 
  float v12; 
  float v13; 
  float v14; 
  __int128 v15; 
  float v16; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  __int128 v24; 
  float z; 
  float v26; 
  SecureVec3 outData; 
  __int64 v34; 
  vec3_t vec; 
  vec3_t v36; 
  vec3_t v3; 
  vec3_t angles; 
  vec3_t v1; 

  v34 = -2i64;
  ControllerFromClient = CL_Mgr_GetControllerFromClient(input->localClientNum);
  if ( GamerProfile_GetProfileSettings(ControllerFromClient)->config.targetAssist )
  {
    Client = ClActiveClient::GetClient((const LocalClientNum_t)input->localClientNum);
    if ( Client->GetFreeMoveType(Client) == FREEMOVE_NONE )
    {
      ClientGlobals = AimAssist_GetClientGlobals(input->localClientNum);
      v7 = DCONST_DVARBOOL_mount_aim_lockon;
      if ( !DCONST_DVARBOOL_mount_aim_lockon && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_aim_lockon") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v7);
      if ( v7->current.enabled )
      {
        mountFraction = ClientGlobals->ps.mountFraction;
        if ( mountFraction > 0.0 && mountFraction < 1.0 && ClientGlobals->mountLockOnValid )
        {
          if ( ClientGlobals->ps.mountStartTimeMs >= ClientGlobals->ps.mountEndTimeMs )
          {
            x = ClientGlobals->mountLockOnPrevEyePoint.v[0];
            y = ClientGlobals->mountLockOnPrevEyePoint.v[1];
            v12 = ClientGlobals->mountLockOnPrevEyePoint.v[2];
            p_viewOrigin = &ClientGlobals->viewOrigin;
          }
          else
          {
            p_viewOrigin = &ClientGlobals->viewOrigin;
            secure_uint32_3_t::secureInt32_3_Get(&ClientGlobals->viewOrigin, &outData);
            x = outData.x;
            y = outData.y;
            v12 = outData.z - (float)((float)(outData.z - ClientGlobals->origin.v[2]) - ClientGlobals->mountLockOnPrevEyeOffset.v[2]);
            memset(&outData, 0, sizeof(outData));
          }
          v13 = ClientGlobals->mountLockOnPoint.v[0] - x;
          v15 = LODWORD(ClientGlobals->mountLockOnPoint.v[1]);
          v14 = ClientGlobals->mountLockOnPoint.v[1] - y;
          v16 = ClientGlobals->mountLockOnPoint.v[2] - v12;
          *(float *)&v15 = fsqrt((float)((float)(v14 * v14) + (float)(v13 * v13)) + (float)(v16 * v16));
          _XMM1 = v15;
          __asm
          {
            vcmpless xmm0, xmm1, cs:__real@80000000
            vblendvps xmm1, xmm1, xmm11, xmm0
          }
          vec.v[0] = v13 * (float)(1.0 / *(float *)&_XMM1);
          vec.v[1] = v14 * (float)(1.0 / *(float *)&_XMM1);
          vec.v[2] = v16 * (float)(1.0 / *(float *)&_XMM1);
          vectoangles(&vec, &angles);
          secure_uint32_3_t::secureInt32_3_Get(p_viewOrigin, &outData);
          v20 = outData.x;
          v21 = ClientGlobals->mountLockOnPoint.v[0] - outData.x;
          v22 = outData.y;
          v24 = LODWORD(ClientGlobals->mountLockOnPoint.v[1]);
          v23 = ClientGlobals->mountLockOnPoint.v[1] - outData.y;
          z = outData.z;
          v26 = ClientGlobals->mountLockOnPoint.v[2] - outData.z;
          *(float *)&v24 = fsqrt((float)((float)(v23 * v23) + (float)(v21 * v21)) + (float)(v26 * v26));
          _XMM3 = v24;
          __asm
          {
            vcmpless xmm0, xmm3, cs:__real@80000000
            vblendvps xmm1, xmm3, xmm11, xmm0
          }
          v36.v[0] = (float)(1.0 / *(float *)&_XMM1) * v21;
          v36.v[1] = (float)(1.0 / *(float *)&_XMM1) * v23;
          v36.v[2] = (float)(1.0 / *(float *)&_XMM1) * v26;
          vectoangles(&v36, &v1);
          AnglesSubtract(&v1, &angles, &v3);
          _XMM6 = 0i64;
          __asm { vroundss xmm0, xmm6, xmm1, 1 }
          output->pitch = (float)((float)((float)(0.0027777778 * v3.v[0]) - *(float *)&_XMM0) * 360.0) + output->pitch;
          __asm { vroundss xmm3, xmm6, xmm2, 1 }
          output->yaw = (float)((float)((float)(0.0027777778 * v3.v[1]) - *(float *)&_XMM3) * 360.0) + output->yaw;
          ClientGlobals->mountLockOnPrevEyePoint.v[0] = v20;
          ClientGlobals->mountLockOnPrevEyePoint.v[1] = v22;
          ClientGlobals->mountLockOnPrevEyePoint.v[2] = z;
          ClientGlobals->mountLockOnPrevEyeOffset.v[0] = v20 - ClientGlobals->origin.v[0];
          ClientGlobals->mountLockOnPrevEyeOffset.v[1] = ClientGlobals->mountLockOnPrevEyePoint.v[1] - ClientGlobals->origin.v[1];
          ClientGlobals->mountLockOnPrevEyeOffset.v[2] = ClientGlobals->mountLockOnPrevEyePoint.v[2] - ClientGlobals->origin.v[2];
          memset(&outData, 0, sizeof(outData));
        }
      }
    }
  }
}

/*
==============
AimAssist_ApplyTurnRates
==============
*/
void AimAssist_ApplyTurnRates(const AimInput *input, AimOutput *output)
{
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  AimAssistGlobals *ClientGlobals; 
  int ControllerFromClient; 
  float viewVertSensitivity; 
  int v15; 
  const GamerSettingState *ProfileSettings; 
  LocalClientNum_t localClientNum; 
  float viewHorzSensitivity; 
  bool v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  AimAssistGlobals *v25; 
  float slowdownRegionHeight; 
  float slowdownRegionWidth; 
  LocalClientNum_t v29; 
  cg_t *LocalClientGlobals; 
  const dvar_t *v36; 
  float adsLerp; 
  float value; 
  const dvar_t *v39; 
  float v40; 
  const dvar_t *v41; 
  float v42; 
  float v43; 
  const dvar_t *v44; 
  __int128 v46; 
  const dvar_t *v53; 
  float v54; 
  float v55; 
  const dvar_t *v56; 
  float v57; 
  const dvar_t *v58; 
  float pitchDelta; 
  float v60; 
  double v61; 
  float yawDelta; 
  const dvar_t *v63; 
  const dvar_t *v64; 
  double v65; 
  float outSensitivity; 
  float pitchAxis; 
  float yawAxis; 
  float outAimAssistRange; 
  float v70; 
  float v71; 
  AimScreenTarget *outScreenTarget; 
  __int128 v73; 
  __int128 v74; 
  __int128 v75; 
  __int128 v76; 
  __int128 v77; 
  __int128 v78; 
  __int128 v79; 
  _QWORD v80[3]; 
  float outPitchRate; 
  float outYawRate; 
  float pitchScale; 
  float yawScale; 

  *(_OWORD *)&v80[1] = v2;
  v79 = v3;
  v78 = v4;
  v76 = v6;
  v75 = v7;
  if ( !input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 2103, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  if ( !output && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 2104, ASSERT_TYPE_ASSERT, "(output)", (const char *)&queryFormat, "output") )
    __debugbreak();
  ClientGlobals = AimAssist_GetClientGlobals(input->localClientNum);
  ControllerFromClient = CL_Mgr_GetControllerFromClient(input->localClientNum);
  viewVertSensitivity = GamerProfile_GetProfileSettings(ControllerFromClient)->config.viewVertSensitivity;
  v15 = CL_Mgr_GetControllerFromClient(input->localClientNum);
  ProfileSettings = GamerProfile_GetProfileSettings(v15);
  localClientNum = input->localClientNum;
  _XMM6 = 0i64;
  viewHorzSensitivity = ProfileSettings->config.viewHorzSensitivity;
  outSensitivity = 0.0;
  if ( CL_Input_UseHighLowZoomSensitivity(localClientNum, &outSensitivity) )
  {
    viewVertSensitivity = viewVertSensitivity * outSensitivity;
    viewHorzSensitivity = viewHorzSensitivity * outSensitivity;
  }
  v20 = ClientGlobals->aaSharedGlob.autoMeleeState == AIM_MELEE_STATE_OFF;
  v77 = v5;
  if ( v20 )
  {
    AimAssist_CalcAdjustedAxis(input, &pitchAxis, &yawAxis);
    if ( AimAssist_UsingAdvancedSlowdown(input->localClientNum) || AimAssist_UsingEnhancedSlowdown(input->localClientNum) )
    {
      AimAssist_AdvancedCalcSlowdown(input, &pitchScale, &yawScale);
    }
    else
    {
      v25 = AimAssist_GetClientGlobals(input->localClientNum);
      outScreenTarget = NULL;
      slowdownRegionHeight = v25->aaSharedGlob.tweakables.slowdownRegionHeight;
      slowdownRegionWidth = v25->aaSharedGlob.tweakables.slowdownRegionWidth;
      outAimAssistRange = 0.0;
      AimAssist_CalcSlowdown_ForRegion(input, slowdownRegionWidth, slowdownRegionHeight, &pitchScale, &yawScale, (const AimScreenTarget **)&outScreenTarget, &outAimAssistRange);
    }
    v24 = yawScale;
    v23 = pitchScale;
    v22 = yawAxis;
    v21 = pitchAxis;
  }
  else
  {
    v21 = 0.0;
    v22 = 0.0;
    v23 = FLOAT_1_0;
    v24 = FLOAT_1_0;
  }
  _XMM1 = LODWORD(FLOAT_N1_0);
  v29 = input->localClientNum;
  __asm
  {
    vcmpless xmm0, xmm6, xmm7
    vblendvps xmm0, xmm1, xmm9, xmm0
  }
  v70 = *(float *)&_XMM0;
  __asm
  {
    vcmpless xmm0, xmm6, xmm8
    vblendvps xmm0, xmm1, xmm9, xmm0
  }
  v71 = *(float *)&_XMM0;
  LocalClientGlobals = CG_GetLocalClientGlobals(v29);
  if ( BG_Skydive_IsSkydiving(&LocalClientGlobals->predictedPlayerState) )
  {
    CG_Skydive_GetTurnRates((const LocalClientNum_t)input->localClientNum, &outPitchRate, &outYawRate);
    *(float *)&_XMM2 = outYawRate;
  }
  else
  {
    v36 = DCONST_DVARFLT_aim_turnrate_pitch_ads;
    v74 = v8;
    v73 = v9;
    adsLerp = ClientGlobals->adsLerp;
    if ( !DCONST_DVARFLT_aim_turnrate_pitch_ads && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_turnrate_pitch_ads") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v36);
    value = v36->current.value;
    v39 = DCONST_DVARFLT_aim_turnrate_pitch;
    if ( !DCONST_DVARFLT_aim_turnrate_pitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_turnrate_pitch") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v39);
    v40 = (float)(1.0 - adsLerp) * v39->current.value;
    v41 = DCONST_DVARFLT_aim_turnrate_yaw_ads;
    outPitchRate = (float)(v40 + (float)(adsLerp * value)) * (float)((float)(v23 * ClientGlobals->fovTurnRateScale) * viewVertSensitivity);
    v42 = ClientGlobals->adsLerp;
    if ( !DCONST_DVARFLT_aim_turnrate_yaw_ads && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_turnrate_yaw_ads") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v41);
    v43 = v41->current.value;
    v44 = DCONST_DVARFLT_aim_turnrate_yaw;
    if ( !DCONST_DVARFLT_aim_turnrate_yaw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_turnrate_yaw") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v44);
    _XMM3 = LODWORD(input->pitchMax);
    v46 = LODWORD(FLOAT_1_0);
    *(float *)&v46 = (float)((float)((float)(1.0 - v42) * v44->current.value) + (float)(v42 * v43)) * (float)((float)(v24 * ClientGlobals->fovTurnRateScale) * viewHorzSensitivity);
    _XMM2 = v46;
    outYawRate = *(float *)&v46;
    if ( *(float *)&_XMM3 != 0.0 )
    {
      _XMM1 = LODWORD(outPitchRate);
      __asm
      {
        vcmpltss xmm0, xmm3, xmm1
        vblendvps xmm0, xmm1, xmm3, xmm0
      }
      outPitchRate = *(float *)&_XMM0;
    }
    _XMM1 = LODWORD(input->yawMax);
    if ( *(float *)&_XMM1 != 0.0 )
    {
      __asm
      {
        vcmpltss xmm0, xmm1, xmm2
        vblendvps xmm0, xmm2, xmm1, xmm0
      }
      LODWORD(_XMM2) = _XMM0;
      outYawRate = *(float *)&_XMM0;
    }
  }
  v53 = DCONST_DVARBOOL_aim_accel_turnrate_enabled;
  v54 = COERCE_FLOAT(LODWORD(v21) & _xmm) * outPitchRate;
  v55 = COERCE_FLOAT(LODWORD(v22) & _xmm) * *(float *)&_XMM2;
  if ( !DCONST_DVARBOOL_aim_accel_turnrate_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_accel_turnrate_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v53);
  if ( v53->current.enabled )
  {
    v56 = DCONST_DVARFLT_aim_accel_turnrate_lerp;
    if ( !DCONST_DVARFLT_aim_accel_turnrate_lerp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_accel_turnrate_lerp") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v56);
    v57 = viewVertSensitivity * v56->current.value;
    v58 = DCONST_DVARFLT_aim_accel_turnrate_lerp;
    if ( !DCONST_DVARFLT_aim_accel_turnrate_lerp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_accel_turnrate_lerp") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v58);
    pitchDelta = ClientGlobals->pitchDelta;
    v60 = viewHorzSensitivity * v58->current.value;
    *(float *)&v61 = v54;
    if ( pitchDelta < v54 )
      v61 = LinearTrack(v54, pitchDelta, v57, input->deltaTime);
    ClientGlobals->pitchDelta = *(float *)&v61;
    yawDelta = ClientGlobals->yawDelta;
    *(float *)&v61 = COERCE_FLOAT(LODWORD(v22) & _xmm) * *(float *)&_XMM2;
    if ( yawDelta < v55 )
      v61 = LinearTrack(v55, yawDelta, v60, input->deltaTime);
    ClientGlobals->yawDelta = *(float *)&v61;
    v63 = DCONST_DVARBOOL_aim_accel_turnrate_debug;
    if ( !DCONST_DVARBOOL_aim_accel_turnrate_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_accel_turnrate_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v63);
    if ( v63->current.enabled )
    {
      Com_Printf(17, "Target Pit = %f, Current Pit = %f\n", v54, ClientGlobals->pitchDelta);
      Com_Printf(17, "Target Yaw = %f, Current Yaw = %f\n", v55, ClientGlobals->yawDelta);
    }
    v54 = ClientGlobals->pitchDelta;
  }
  else
  {
    ClientGlobals->pitchDelta = v54;
    ClientGlobals->yawDelta = COERCE_FLOAT(LODWORD(v22) & _xmm) * *(float *)&_XMM2;
  }
  output->pitch = (float)((float)(v54 * input->deltaTime) * v70) + output->pitch;
  output->yaw = (float)((float)(input->deltaTime * ClientGlobals->yawDelta) * v71) + output->yaw;
  v64 = DCONST_DVARBOOL_cl_inputVelocityLogging;
  if ( !DCONST_DVARBOOL_cl_inputVelocityLogging && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_inputVelocityLogging") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v64);
  if ( v64->current.enabled )
  {
    Com_Printf(17, "=====================\n");
    Com_Printf(17, "AA(G) time:    %.4f\n", input->deltaTime);
    Com_Printf(17, "AA(G) yawRate: %.4f\n", COERCE_FLOAT(LODWORD(outYawRate) & _xmm));
    Com_Printf(17, "AA(G) yawDelt: %.4f\n", COERCE_FLOAT(COERCE_UNSIGNED_INT(v55 * input->deltaTime) & _xmm));
    v65 = AngleNormalize360(output->yaw);
    Com_Printf(17, "AA(G) yaw:     %.4f\n", *(float *)&v65);
  }
}

/*
==============
AimAssist_ApplyViewConeResistance
==============
*/
float AimAssist_ApplyViewConeResistance(LocalClientNum_t localClientNum, int axis, float input)
{
  ClActiveClient *Client; 
  __int64 v7; 
  const dvar_t *v8; 
  const playerState_s *v9; 
  int integer; 
  const dvar_t *v11; 
  float value; 
  const dvar_t *v13; 
  const dvar_t *v15; 
  float *v16; 
  float v17; 
  float v18; 
  int v19; 
  float v22; 
  float v23; 
  float *v24; 
  vec2_t *p_viewAngleResistMax; 
  float v26; 
  float *v27; 
  float v29; 
  float v30; 
  float *v31; 
  float *v32; 
  float v34; 
  float v36; 
  float v37; 
  float v38; 
  double Float_Internal_DebugName; 
  double v40; 
  double v41; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_IDLE|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 137, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_CONE_RESISTANCE ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_CONE_RESISTANCE )") )
    __debugbreak();
  Client = ClActiveClient::GetClient(localClientNum);
  v7 = (__int64)Client->GetPlayerState(Client);
  v8 = DCONST_DVARMPFLT_player_view_pitch_up;
  v9 = (const playerState_s *)v7;
  if ( !DCONST_DVARMPFLT_player_view_pitch_up && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_view_pitch_up") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  integer = v8->current.integer;
  v11 = DCONST_DVARMPFLT_player_view_pitch_down;
  if ( !DCONST_DVARMPFLT_player_view_pitch_down && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_view_pitch_down") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  value = v11->current.value;
  if ( axis )
  {
    if ( axis != 1 )
      return input;
    v15 = DVARBOOL_aim_resist_yaw_enabled;
    if ( !DVARBOOL_aim_resist_yaw_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_resist_yaw_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    if ( !v15->current.enabled )
      return input;
  }
  else
  {
    v13 = DVARBOOL_aim_resist_pitch_enabled;
    if ( !DVARBOOL_aim_resist_pitch_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_resist_pitch_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    if ( !v13->current.enabled )
      return input;
  }
  if ( !PM_ViewRangeLimited(v9) || *vec2_t::operator[](&v9->viewAngleClampRange, axis) >= 180.0 )
    return input;
  if ( input <= 0.0 )
  {
    v27 = (float *)vec2_t::operator[](&v9->viewAngleClampBase, axis);
    v17 = FLOAT_0_0027777778;
    v18 = FLOAT_360_0;
    v19 = _xmm;
    _XMM14 = 0i64;
    __asm { vroundss xmm2, xmm14, xmm1, 1 }
    v30 = (float)((float)((float)(*v27 - *vec2_t::operator[](&v9->viewAngleClampRange, axis)) * 0.0027777778) - *(float *)&_XMM2) * 360.0;
    v29 = v30;
    if ( !axis && (v30 > value || v30 < COERCE_FLOAT(integer ^ _xmm)) )
      LODWORD(v29) = integer ^ _xmm;
    v31 = (float *)vec3_t::operator[](&v9->viewangles, axis);
    p_viewAngleResistMax = &v9->viewAngleResistMax;
    v26 = (float)(*v31 - v29) * 0.0027777778;
  }
  else
  {
    v16 = (float *)vec2_t::operator[](&v9->viewAngleClampRange, axis);
    v17 = FLOAT_0_0027777778;
    v18 = FLOAT_360_0;
    v19 = _xmm;
    _XMM14 = 0i64;
    __asm { vroundss xmm2, xmm14, xmm1, 1 }
    v23 = (float)((float)((float)(*v16 + *vec2_t::operator[](&v9->viewAngleClampBase, axis)) * 0.0027777778) - *(float *)&_XMM2) * 360.0;
    v22 = v23;
    if ( !axis && (v23 > value || v23 < COERCE_FLOAT(integer ^ _xmm)) )
      v22 = value;
    v24 = (float *)vec3_t::operator[](&v9->viewangles, axis);
    p_viewAngleResistMax = &v9->viewAngleResistMin;
    v26 = (float)(v22 - *v24) * 0.0027777778;
  }
  v32 = (float *)vec2_t::operator[](p_viewAngleResistMax, axis);
  __asm { vroundss xmm3, xmm14, xmm2, 1 }
  v34 = v26 - *(float *)&_XMM3;
  __asm { vroundss xmm2, xmm14, xmm1, 1 }
  v37 = (float)(v26 - *(float *)&_XMM3) * v18;
  v36 = v37;
  v38 = (float)((float)(v17 * *v32) - *(float *)&_XMM2) * v18;
  if ( (float)(v34 * v18) < 0.0 )
  {
    AngleNormalize360(v37 + v18);
    v36 = v37 + v18;
  }
  if ( v36 >= v38 )
    return input;
  Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_aim_resist_view_threshold, "aim_resist_view_threshold");
  if ( input >= COERCE_FLOAT(LODWORD(Float_Internal_DebugName) ^ v19) )
  {
    v40 = Dvar_GetFloat_Internal_DebugName(DVARFLT_aim_resist_view_threshold, "aim_resist_view_threshold");
    if ( input <= *(float *)&v40 )
      return input;
  }
  if ( v38 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 196, ASSERT_TYPE_ASSERT, "(resist > 0.0f)", "%s\n\tBad value for resistance angle %f\n", "resist > 0.0f", v38) )
    __debugbreak();
  v41 = I_fclamp(v36 / v38, 0.0, 1.0);
  return *(float *)&v41 * input;
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
  AimAssistGlobals *v9; 
  float v10; 
  CgHandler *Handler; 
  bool v12; 
  float v13; 
  const Weapon *ViewmodelWeapon; 
  __int16 viewlocked_entNum; 
  centity_t *Entity; 
  bool v17; 
  bool v18; 
  __int64 v19; 
  unsigned int NumWeapons; 

  v3 = localClientNum;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 458, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v3);
  if ( !CgWeaponMap::ms_instance[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v7 = CgWeaponMap::ms_instance[v3];
  ClientGlobals = AimAssist_GetClientGlobals((LocalClientNum_t)v3);
  v9 = ClientGlobals;
  if ( ps->vehicleState.entity == 2047 )
  {
    ClientGlobals->ps.velocity.v[0] = playerVelocity->v[0];
    ClientGlobals->ps.velocity.v[1] = playerVelocity->v[1];
    v10 = playerVelocity->v[2];
  }
  else
  {
    ClientGlobals->ps.velocity.v[0] = ps->vehicleState.velocity.v[0];
    ClientGlobals->ps.velocity.v[1] = ps->vehicleState.velocity.v[1];
    v10 = ps->vehicleState.velocity.v[2];
  }
  ClientGlobals->ps.velocity.v[2] = v10;
  ClientGlobals->ps.eFlags.m_flags[0] = ps->eFlags.m_flags[0];
  ClientGlobals->ps.linkFlags.m_flags[0] = ps->linkFlags.m_flags[0];
  ClientGlobals->ps.sharedPS.pm_flags = ps->pm_flags;
  ClientGlobals->ps.sharedPS.weapFlags = ps->weapCommon.weapFlags;
  ClientGlobals->ps.sharedPS.weaponState = ps->weapState[0].weaponState;
  ClientGlobals->ps.sharedPS.meleeCount = ps->weapState[0].meleeHitCount;
  ClientGlobals->ps.sharedPS.meleeChargeEnt = ps->meleeChargeEnt;
  ClientGlobals->ps.fWeaponPosFrac = ps->weapCommon.fWeaponPosFrac;
  ClientGlobals->ps.isInAir = BG_IsInAir(ps, 0);
  v9->ps.slideEndTimeMs = ps->slideState.slideEndTime;
  v9->ps.jumpTimeMs = ps->jumpState.jumpTime;
  v9->ps.commandTimeMs = ps->serverTime;
  v9->ps.mountFraction = ps->mountState.mountFraction;
  v9->ps.mountStartTimeMs = ps->mountState.startTime;
  v9->ps.mountEndTimeMs = ps->mountState.endTime;
  Handler = CgHandler::getHandler((LocalClientNum_t)v3);
  WorldUpReferenceFrame::Init(&v9->refFrame, ps, Handler);
  CGMovingPlatformAimAssist::UpdateDataFromPS(&v9->moverData, (LocalClientNum_t)v3, ps);
  v12 = 0;
  if ( Com_GameMode_SupportsFeature(WEAPON_RELOAD_END_RECHAMBER) )
  {
    v9->ps.groundTiltRefAngles.v[0] = ps->groundTiltAngles.v[0];
    v9->ps.groundTiltRefAngles.v[1] = ps->groundTiltAngles.v[1];
    v13 = ps->groundTiltAngles.v[2];
  }
  else
  {
    *(_QWORD *)v9->ps.groundTiltRefAngles.v = 0i64;
    v13 = 0.0;
  }
  v9->ps.groundTiltRefAngles.v[2] = v13;
  if ( !BG_IsTurretActiveFlags(&ps->eFlags) && !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ps->eFlags, ACTIVE, 0xBu) )
  {
    ViewmodelWeapon = BG_GetViewmodelWeapon(v7, ps);
LABEL_24:
    *(__m256i *)&v9->ps.sharedPS.weapon.weaponIdx = *(__m256i *)&ViewmodelWeapon->weaponIdx;
    *(_OWORD *)&v9->ps.sharedPS.weapon.attachmentVariationIndices[5] = *(_OWORD *)&ViewmodelWeapon->attachmentVariationIndices[5];
    *(double *)&v9->ps.sharedPS.weapon.attachmentVariationIndices[21] = *(double *)&ViewmodelWeapon->attachmentVariationIndices[21];
    *(_DWORD *)&v9->ps.sharedPS.weapon.weaponCamo = *(_DWORD *)&ViewmodelWeapon->weaponCamo;
    goto LABEL_25;
  }
  if ( ps->viewlocked_entNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 514, ASSERT_TYPE_ASSERT, "(ps->viewlocked_entNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "ps->viewlocked_entNum != ENTITYNUM_NONE") )
    __debugbreak();
  viewlocked_entNum = ps->viewlocked_entNum;
  if ( (unsigned __int16)viewlocked_entNum > 0x7FFu )
  {
    LODWORD(v19) = viewlocked_entNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 515, ASSERT_TYPE_ASSERT, "( ( (ps->viewlocked_entNum >= 0) && (ps->viewlocked_entNum < ( 2048 )) ) )", "( ps->viewlocked_entNum ) = %i", v19) )
      __debugbreak();
  }
  Entity = CG_GetEntity((const LocalClientNum_t)v3, ps->viewlocked_entNum);
  if ( (Entity->flags & 1) != 0 )
  {
    ViewmodelWeapon = BG_GetWeaponForEntity(v7, &Entity->nextState);
    goto LABEL_24;
  }
LABEL_25:
  if ( v9->ps.sharedPS.weapon.weaponIdx >= BG_GetNumWeapons() )
  {
    NumWeapons = BG_GetNumWeapons();
    LODWORD(v19) = v9->ps.sharedPS.weapon.weaponIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 527, ASSERT_TYPE_ASSERT, "(unsigned)( aaGlob->ps.sharedPS.weapon.weaponIdx ) < (unsigned)( BG_GetNumWeapons() )", "aaGlob->ps.sharedPS.weapon.weaponIdx doesn't index BG_GetNumWeapons()\n\t%i not in [0, %i)", v19, NumWeapons) )
      __debugbreak();
  }
  v17 = BG_UsingAlternate(ps);
  v18 = BG_WeaponAmmo(v7, ps, &v9->ps.sharedPS.weapon, v17) > 0 || ps->throwbackGrenadeTimeLeft > 0;
  v9->ps.hasAmmo = v18;
  if ( !BG_Skydive_IsSkydiving(ps) && BG_Ladder_IsDualWieldingAllowed(ps) )
    v12 = ps->weapCommon.lastWeaponHand == WEAPON_HAND_LEFT;
  v9->ps.isDualWielding = v12;
  v9->ps.isUsingOffhand = BG_IsUsingOffhandGestureWeapon(ps);
  v9->ps.sharedPS.isThirdPerson = BG_IsThirdPersonMode(v7, ps) || LocalClientGlobals->renderingThirdPerson;
}

/*
==============
AimAssist_CalcAdjustedAxis
==============
*/
void AimAssist_CalcAdjustedAxis(const AimInput *input, float *pitchAxis, float *yawAxis)
{
  const dvar_t *v6; 
  float v7; 
  float v8; 
  int ControllerFromClient; 
  unsigned int v10; 
  double Value; 
  const dvar_t *v12; 
  const dvar_t *v13; 
  float v14; 
  float v15; 
  __int64 v16; 
  __int64 v17; 

  if ( !input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1526, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  if ( !pitchAxis && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1527, ASSERT_TYPE_ASSERT, "(pitchAxis)", (const char *)&queryFormat, "pitchAxis") )
    __debugbreak();
  if ( !yawAxis && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1528, ASSERT_TYPE_ASSERT, "(yawAxis)", (const char *)&queryFormat, "yawAxis") )
    __debugbreak();
  v6 = DCONST_DVARBOOL_aim_input_graph_enabled;
  if ( !DCONST_DVARBOOL_aim_input_graph_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_input_graph_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  v7 = input->pitchAxis;
  if ( v6->current.enabled )
  {
    v8 = fsqrt((float)(input->yawAxis * input->yawAxis) + (float)(v7 * v7));
    I_fclamp(v8, 0.0, 1.0);
    ControllerFromClient = CL_Mgr_GetControllerFromClient(input->localClientNum);
    v10 = GamerProfile_GetAimResponseCurveType(ControllerFromClient) - 1;
    if ( v10 >= 4 )
    {
      LODWORD(v17) = 4;
      LODWORD(v16) = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1538, ASSERT_TYPE_ASSERT, "(unsigned)( aimResponseCurveType ) < (unsigned)( 4 )", "aimResponseCurveType doesn't index AIM_INPUT_GRAPH_COUNT\n\t%i not in [0, %i)", v16, v17) )
        __debugbreak();
    }
    Value = GraphFloat_GetValue(&aaInputGraph[v10], v8);
    *pitchAxis = *(float *)&Value * input->pitchAxis;
    *yawAxis = *(float *)&Value * input->yawAxis;
    v12 = DCONST_DVARBOOL_aim_input_graph_debug;
    if ( !DCONST_DVARBOOL_aim_input_graph_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_input_graph_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    if ( v12->current.enabled )
    {
      Com_Printf(17, "Input Pit = %f, Output Pit = %f\n", input->pitchAxis, *pitchAxis);
      Com_Printf(17, "Input Yaw = %f, Output Yaw = %f\n", input->yawAxis, *yawAxis);
    }
  }
  else
  {
    *pitchAxis = v7;
    *yawAxis = input->yawAxis;
  }
  v13 = DCONST_DVARBOOL_aim_scale_view_axis;
  if ( !DCONST_DVARBOOL_aim_scale_view_axis && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_scale_view_axis") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  if ( v13->current.enabled )
  {
    LODWORD(v14) = *(_DWORD *)yawAxis & _xmm;
    LODWORD(v15) = *(_DWORD *)pitchAxis & _xmm;
    if ( v15 > 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1568, ASSERT_TYPE_ASSERT, "(absPitchAxis <= 1.0f)", (const char *)&queryFormat, "absPitchAxis <= 1.0f") )
      __debugbreak();
    if ( v14 > 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1569, ASSERT_TYPE_ASSERT, "(absYawAxis <= 1.0f)", (const char *)&queryFormat, "absYawAxis <= 1.0f") )
      __debugbreak();
    if ( v15 <= v14 )
      *pitchAxis = (float)(1.0 - (float)(v14 - v15)) * *pitchAxis;
    else
      *yawAxis = (float)(1.0 - (float)(v15 - v14)) * *yawAxis;
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_IDLE|WEAPON_OFFHAND_END) )
  {
    *pitchAxis = AimAssist_ApplyViewConeResistance(input->localClientNum, 0, *pitchAxis);
    *yawAxis = AimAssist_ApplyViewConeResistance(input->localClientNum, 1, *yawAxis);
  }
}

/*
==============
AimAssist_CalcAimPos
==============
*/
__int64 AimAssist_CalcAimPos(LocalClientNum_t localClientNum, AimAssistGlobals *const aaGlob, const centity_t *targetEnt, const AimTarget *target, const tmat43_t<vec3_t> *entMtx, vec3_t *outAimPos, vec3_t *outAimScreenPos, scr_string_t *tag)
{
  AimAssistGlobals *v10; 
  LocalClientNum_t v11; 
  unsigned int v13; 
  unsigned int v14; 
  DObj *ClientDObj; 
  float v16; 
  float v17; 
  const dvar_t *v18; 
  int v19; 
  __int64 v20; 
  const XModel *v21; 
  unsigned __int8 v22; 
  unsigned __int64 v23; 
  scr_string_t *v24; 
  cg_t *LocalClientGlobals; 
  int PerkNetworkPriorityIndex; 
  unsigned __int64 v27; 
  bool v28; 
  scr_string_t j_neck; 
  __int64 v30; 
  vec3_t *v31; 
  vec3_t *v32; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  __int64 v37; 
  __int64 v38; 
  LocalClientNum_t localClientNum_4; 
  vec3_t outOrigin; 
  scr_string_t *v42; 
  __int64 v43; 
  vec3_t *in; 
  vec3_t *v45; 
  AimAssistGlobals *aaGloba; 
  __int64 v47; 
  Bounds outBounds; 
  vec3_t mtx; 
  tmat33_t<vec3_t> clipBounds; 
  vec3_t outPos; 
  vec3_t out; 
  int v53[66]; 

  v47 = -2i64;
  v10 = aaGlob;
  aaGloba = aaGlob;
  v11 = localClientNum;
  *(_QWORD *)mtx.v = entMtx;
  in = outAimPos;
  v45 = outAimScreenPos;
  v42 = tag;
  if ( !targetEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1033, ASSERT_TYPE_ASSERT, "(targetEnt)", (const char *)&queryFormat, "targetEnt") )
    __debugbreak();
  if ( !target )
    return 0i64;
  AimAssist_GetBoundsFromTarget(target, &outBounds);
  if ( BG_IsCharacterEntity(&targetEnt->nextState) )
  {
    v13 = 0;
    v14 = 0;
    ClientDObj = Com_GetClientDObj(targetEnt->nextState.number, v11);
    *(_QWORD *)outOrigin.v = ClientDObj;
    v16 = fsqrt(target->worldDistSqr);
    v17 = fsqrt((float)((float)((float)(COERCE_FLOAT(LODWORD(outBounds.midPoint.v[1]) & _xmm) + outBounds.halfSize.v[1]) * (float)(COERCE_FLOAT(LODWORD(outBounds.midPoint.v[1]) & _xmm) + outBounds.halfSize.v[1])) + (float)((float)(COERCE_FLOAT(LODWORD(outBounds.midPoint.v[0]) & _xmm) + outBounds.halfSize.v[0]) * (float)(COERCE_FLOAT(LODWORD(outBounds.midPoint.v[0]) & _xmm) + outBounds.halfSize.v[0]))) + (float)((float)(COERCE_FLOAT(LODWORD(outBounds.midPoint.v[2]) & _xmm) + outBounds.halfSize.v[2]) * (float)(COERCE_FLOAT(LODWORD(outBounds.midPoint.v[2]) & _xmm) + outBounds.halfSize.v[2])));
    v18 = DCONST_DVARFLT_aim_autoaim_bone_dist_ratio;
    if ( !DCONST_DVARFLT_aim_autoaim_bone_dist_ratio && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_autoaim_bone_dist_ratio") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    if ( (float)(v17 / v16) <= v18->current.value )
      goto LABEL_28;
    if ( ClientDObj )
    {
      v19 = 0;
      localClientNum_4 = LOCAL_CLIENT_0;
      if ( ClientDObj->numModels )
      {
        v20 = 0i64;
        v43 = 0i64;
        do
        {
          v21 = *(const XModel **)((char *)ClientDObj->models + v20);
          v22 = 0;
          if ( v21->numAimAssistBones )
          {
            do
            {
              if ( v14 < 0xA && v21->aimAssistBones[v22] && AimAssist_GetTargetTagBounds(v11, targetEnt, v21, v22, &outBounds) && AimAssist_ConvertToClipBounds(v10, &outBounds, *(const tmat43_t<vec3_t> **)mtx.v, (ExtentBounds *)&clipBounds) )
              {
                v23 = 28i64 * v14;
                AimAssist_GetTagPos(localClientNum, targetEnt, v21->aimAssistBones[v22], (vec3_t *)((char *)&outPos + v23));
                v10 = aaGloba;
                AimAssist_XfmWorldPointToClipSpace(aaGloba, (vec3_t *)((char *)&outPos + v23), (vec3_t *)((char *)&out + v23));
                v53[v23 / 4] = v21->aimAssistBones[v22];
                ++v14;
                v11 = localClientNum;
              }
              ++v22;
            }
            while ( v22 < v21->numAimAssistBones );
            v19 = localClientNum_4;
            v20 = v43;
            ClientDObj = *(DObj **)outOrigin.v;
          }
          localClientNum_4 = ++v19;
          v20 += 8i64;
          v43 = v20;
        }
        while ( v19 < ClientDObj->numModels );
        v13 = 0;
      }
    }
    qsort(&outPos, v14, 0x1Cui64, (_CoreCrtNonSecureSearchSortCompareFunction)AimAssistCalcPointCacheCompare);
    if ( v14 )
    {
      v24 = (scr_string_t *)v53;
      while ( !AimAssist_IsTargetVisible(v11, targetEnt, *v24) )
      {
        ++v13;
        v24 += 7;
        if ( v13 >= v14 )
          goto LABEL_28;
      }
      v30 = 7i64 * v13;
      v31 = in;
      in->v[0] = outPos.v[v30];
      v31->v[1] = outPos.v[v30 + 1];
      v31->v[2] = outPos.v[v30 + 2];
      v32 = v45;
      v45->v[0] = out.v[v30];
      v32->v[1] = out.v[v30 + 1];
      v32->v[2] = out.v[v30 + 2];
      *v42 = v53[v30];
    }
    else
    {
LABEL_28:
      LocalClientGlobals = CG_GetLocalClientGlobals(v11);
      PerkNetworkPriorityIndex = BG_GetPerkNetworkPriorityIndex(0x3Du);
      v27 = (unsigned int)PerkNetworkPriorityIndex;
      if ( PerkNetworkPriorityIndex < 0 )
        goto LABEL_33;
      if ( (unsigned int)PerkNetworkPriorityIndex >= 0x40 )
      {
        LODWORD(v38) = 64;
        LODWORD(v37) = PerkNetworkPriorityIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v37, v38) )
          __debugbreak();
      }
      v28 = ((0x80000000 >> (v27 & 0x1F)) & LocalClientGlobals->predictedPlayerState.perks.array[v27 >> 5]) == 0;
      j_neck = scr_const.j_neck;
      if ( v28 )
LABEL_33:
        j_neck = scr_const.j_spine4;
      AimAssist_GetTagPos(v11, targetEnt, j_neck, in);
      AimAssist_XfmWorldPointToClipSpace(aaGloba, in, v45);
      *v42 = j_neck;
    }
  }
  else
  {
    *(_QWORD *)mtx.v = *(_QWORD *)targetEnt->nextState.lerp.apos.trBase.v;
    v33 = targetEnt->nextState.lerp.apos.trBase.v[2];
    mtx.v[2] = v33;
    if ( mtx.v[0] == 0.0 && v33 == 0.0 )
    {
      v34 = outBounds.midPoint.v[0];
      v35 = outBounds.midPoint.v[1];
      v36 = outBounds.midPoint.v[2];
    }
    else
    {
      AnglesToAxis(&mtx, &clipBounds);
      v34 = (float)((float)(outBounds.midPoint.v[1] * clipBounds.m[1].v[0]) + (float)(outBounds.midPoint.v[0] * clipBounds.m[0].v[0])) + (float)(outBounds.midPoint.v[2] * clipBounds.m[2].v[0]);
      v35 = (float)((float)(outBounds.midPoint.v[1] * clipBounds.m[1].v[1]) + (float)(outBounds.midPoint.v[0] * clipBounds.m[0].v[1])) + (float)(outBounds.midPoint.v[2] * clipBounds.m[2].v[1]);
      v36 = (float)((float)(outBounds.midPoint.v[1] * clipBounds.m[1].v[2]) + (float)(outBounds.midPoint.v[0] * clipBounds.m[0].v[2])) + (float)(outBounds.midPoint.v[2] * clipBounds.m[2].v[2]);
    }
    CG_GetPoseOrigin(&targetEnt->pose, &outOrigin);
    outAimPos->v[0] = v34 + outOrigin.v[0];
    outAimPos->v[1] = v35 + outOrigin.v[1];
    outAimPos->v[2] = v36 + outOrigin.v[2];
    AimAssist_XfmWorldPointToClipSpace(v10, outAimPos, outAimScreenPos);
    *v42 = 0;
    memset(&outOrigin, 0, sizeof(outOrigin));
  }
  return 1i64;
}

/*
==============
AimAssist_CalcMovementScale
==============
*/
void AimAssist_CalcMovementScale(AimAssistGlobals *const aaGlob, vec2_t *outSlowDownScale, vec2_t *outLockOnScale)
{
  const dvar_t *v6; 
  const dvar_t *v7; 
  double v8; 
  double v9; 
  double v10; 
  double v11; 

  if ( !aaGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1655, ASSERT_TYPE_ASSERT, "(aaGlob)", (const char *)&queryFormat, "aaGlob") )
    __debugbreak();
  outSlowDownScale->v[0] = 1.0;
  outSlowDownScale->v[1] = 1.0;
  outLockOnScale->v[0] = 1.0;
  outLockOnScale->v[1] = 1.0;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&aaGlob->ps.sharedPS.pm_flags, ACTIVE, 0x1Du) )
  {
    v6 = DVARVEC2_aim_slowdown_slide_scale;
    if ( !DVARVEC2_aim_slowdown_slide_scale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_slowdown_slide_scale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    LODWORD(outSlowDownScale->v[0]) = v6->current.integer;
    outSlowDownScale->v[1] = v6->current.vector.v[1];
    v7 = DVARVEC2_aim_lockon_slide_scale;
    if ( !DVARVEC2_aim_lockon_slide_scale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_lockon_slide_scale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    LODWORD(outLockOnScale->v[0]) = v7->current.integer;
    outLockOnScale->v[1] = v7->current.vector.v[1];
  }
  v8 = I_fclamp(outSlowDownScale->v[0], 0.0, 1.0);
  outSlowDownScale->v[0] = *(float *)&v8;
  v9 = I_fclamp(outSlowDownScale->v[1], 0.0, 1.0);
  outSlowDownScale->v[1] = *(float *)&v9;
  v10 = I_fclamp(outLockOnScale->v[0], 0.0, 1.0);
  outLockOnScale->v[0] = *(float *)&v10;
  v11 = I_fclamp(outLockOnScale->v[1], 0.0, 1.0);
  outLockOnScale->v[1] = *(float *)&v11;
}

/*
==============
AimAssist_CalcSlowdown_ForRegion
==============
*/
char AimAssist_CalcSlowdown_ForRegion(const AimInput *input, float regionWidth, float regionHeight, float *pitchScale, float *yawScale, const AimScreenTarget **outScreenTarget, float *outAimAssistRange)
{
  __int128 v7; 
  AimAssistGlobals *ClientGlobals; 
  const dvar_t *v13; 
  int ControllerFromClient; 
  bool v15; 
  float adsLerp; 
  bool v17; 
  float AimAssistRange; 
  AimTargetFlags v19; 
  const AimScreenTarget *BestTarget; 
  const dvar_t *v21; 
  float value; 
  const dvar_t *v23; 
  double v24; 
  const dvar_t *v25; 
  float v26; 
  const AimScreenTarget *v27; 
  float v28; 
  bool v29; 
  bool v30; 
  bool v31; 
  float v32; 
  float v33; 
  const dvar_t *v34; 
  float aimAssistPitchSlowdown; 
  float aimAssistPitchSlowdownAds; 
  vec2_t outSlowDownScale; 
  vec2_t aimAssistYawSlowdown; 
  __int128 v39; 

  if ( !input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1731, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  if ( !pitchScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1732, ASSERT_TYPE_ASSERT, "(pitchScale)", (const char *)&queryFormat, "pitchScale") )
    __debugbreak();
  if ( !yawScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1733, ASSERT_TYPE_ASSERT, "(yawScale)", (const char *)&queryFormat, "yawScale") )
    __debugbreak();
  if ( !outAimAssistRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1734, ASSERT_TYPE_ASSERT, "(outAimAssistRange)", (const char *)&queryFormat, "outAimAssistRange") )
    __debugbreak();
  if ( !outScreenTarget && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1735, ASSERT_TYPE_ASSERT, "(outScreenTarget)", (const char *)&queryFormat, "outScreenTarget") )
    __debugbreak();
  ClientGlobals = AimAssist_GetClientGlobals(input->localClientNum);
  AimAssist_ResetSlowdownScale(pitchScale, yawScale);
  if ( ClientGlobals->slowAimEnabled )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1744, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_SLOW_AIM ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_SLOW_AIM )") )
      __debugbreak();
    *pitchScale = ClientGlobals->slowAimPitchScale;
    *yawScale = ClientGlobals->slowAimYawScale;
    return 0;
  }
  else
  {
    v13 = DCONST_DVARBOOL_aim_slowdown_enabled;
    if ( !DCONST_DVARBOOL_aim_slowdown_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_slowdown_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    if ( v13->current.enabled && (ClientGlobals->ps.linkFlags.m_flags[0] & 4) == 0 && (unsigned int)(ClientGlobals->ps.sharedPS.weaponState - 37) > 1 && ClientGlobals->ps.sharedPS.weapon.weaponIdx && (BG_IsTurretActiveFlags(&ClientGlobals->ps.eFlags) || GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ClientGlobals->ps.eFlags, ACTIVE, 0xBu) || ClientGlobals->ps.hasAmmo && (ControllerFromClient = CL_Mgr_GetControllerFromClient(input->localClientNum), GamerProfile_GetProfileSettings(ControllerFromClient)->config.targetAssist)) )
    {
      v15 = ClientGlobals->ps.sharedPS.weapon.weaponIdx == 0;
      v39 = v7;
      if ( v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1753, ASSERT_TYPE_ASSERT, "(aaGlob->ps.sharedPS.weapon.weaponIdx != 0)", (const char *)&queryFormat, "aaGlob->ps.sharedPS.weapon.weaponIdx != WP_NONE") )
        __debugbreak();
      adsLerp = ClientGlobals->adsLerp;
      v17 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ClientGlobals->ps.sharedPS.weapFlags, ACTIVE, 0x11u);
      AimAssistRange = AimAssist_GetAimAssistRange(ClientGlobals, &ClientGlobals->ps.sharedPS.weapon, v17, adsLerp);
      LOBYTE(v19) = 1;
      *outAimAssistRange = AimAssistRange;
      BestTarget = AimAssist_GetBestTarget(&ClientGlobals->aaSharedGlob, v19, AimAssistRange, regionWidth, regionHeight);
      *outScreenTarget = BestTarget;
      if ( BestTarget )
      {
        v21 = DCONST_DVARFLT_aim_slowdown_box_reduction_range_max;
        if ( !DCONST_DVARFLT_aim_slowdown_box_reduction_range_max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_slowdown_box_reduction_range_max") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v21);
        value = v21->current.value;
        v23 = DCONST_DVARFLT_aim_slowdown_box_reduction_range_min;
        if ( !DCONST_DVARFLT_aim_slowdown_box_reduction_range_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_slowdown_box_reduction_range_min") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v23);
        v24 = ApplyLinearMap(fsqrt((*outScreenTarget)->distSqr), v23->current.value, value);
        v25 = DCONST_DVARFLT_aim_slowdown_box_reduction_max_percent;
        if ( !DCONST_DVARFLT_aim_slowdown_box_reduction_max_percent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_slowdown_box_reduction_max_percent") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v25);
        v26 = 1.0 - (float)(*(float *)&v24 * v25->current.value);
        ClientGlobals->boxRangeScale = v26;
        v27 = *outScreenTarget;
        v28 = v26 * regionHeight;
        v29 = (float)(v26 * regionWidth) >= (*outScreenTarget)->clipMins.v[0] && COERCE_FLOAT(COERCE_UNSIGNED_INT(v26 * regionWidth) ^ _xmm) <= v27->clipMaxs.v[0];
        v30 = v28 >= v27->clipMins.v[1] && COERCE_FLOAT(LODWORD(v28) ^ _xmm) <= v27->clipMaxs.v[1];
        if ( v29 && v30 )
        {
          v31 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ClientGlobals->ps.sharedPS.weapFlags, ACTIVE, 0x11u);
          BG_AimAssistSlowdown(&ClientGlobals->ps.sharedPS.weapon, v31, &aimAssistPitchSlowdown, &aimAssistPitchSlowdownAds, (float *)&aimAssistYawSlowdown, (float *)&outSlowDownScale);
          *pitchScale = (float)((float)(1.0 - ClientGlobals->adsLerp) * aimAssistPitchSlowdown) + (float)(ClientGlobals->adsLerp * aimAssistPitchSlowdownAds);
          *yawScale = (float)((float)(1.0 - ClientGlobals->adsLerp) * aimAssistYawSlowdown.v[0]) + (float)(ClientGlobals->adsLerp * outSlowDownScale.v[0]);
        }
      }
      else
      {
        ClientGlobals->boxRangeScale = 1.0;
      }
      if ( AimAssist_IsPlayerUsingOffhand(&ClientGlobals->ps) )
        *pitchScale = 1.0;
      AimAssist_CalcMovementScale(ClientGlobals, &outSlowDownScale, &aimAssistYawSlowdown);
      v32 = outSlowDownScale.v[0];
      v33 = outSlowDownScale.v[1];
      *pitchScale = (float)((float)(*pitchScale - 1.0) * outSlowDownScale.v[0]) + 1.0;
      *yawScale = (float)((float)(*yawScale - 1.0) * v33) + 1.0;
      v34 = DCONST_DVARBOOL_aim_slowdown_debug;
      if ( !DCONST_DVARBOOL_aim_slowdown_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_slowdown_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v34);
      if ( v34->current.enabled )
      {
        Com_Printf(17, "Slowdown advanced movement scale contribution = ( %f, %f )\n", v32, v33);
        Com_Printf(17, "Target slowdown pitch scale = %f\n", *pitchScale);
        Com_Printf(17, "Target slowdown yaw scale = %f\n", *yawScale);
      }
      return 1;
    }
    else
    {
      return 0;
    }
  }
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
__int64 AimAssist_CompareTargets(const AimScreenTarget *screenTargetA, const AimScreenTarget *screenTargetB, float distClosePropTest, float crosshairDistClosePropTest)
{
  float distSqr; 
  float v11; 
  float v12; 
  float crosshairDistSqr; 
  float v16; 
  float value; 
  const dvar_t *v18; 
  const dvar_t *v19; 
  float v20; 
  float v21; 
  bool v22; 

  if ( !screenTargetA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 744, ASSERT_TYPE_ASSERT, "(screenTargetA)", (const char *)&queryFormat, "screenTargetA") )
    __debugbreak();
  if ( !screenTargetB && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 745, ASSERT_TYPE_ASSERT, "(screenTargetB)", (const char *)&queryFormat, "screenTargetB") )
    __debugbreak();
  distSqr = screenTargetB->distSqr;
  _XMM2 = LODWORD(screenTargetA->distSqr);
  __asm { vmaxss  xmm3, xmm2, xmm1 }
  v11 = 0.0;
  if ( *(float *)&_XMM3 <= 0.0 )
    v12 = 0.0;
  else
    v12 = COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&_XMM2 - distSqr) & _xmm) / *(float *)&_XMM3;
  crosshairDistSqr = screenTargetB->crosshairDistSqr;
  _XMM4 = LODWORD(screenTargetA->crosshairDistSqr);
  __asm { vmaxss  xmm8, xmm4, xmm3 }
  if ( *(float *)&_XMM8 <= 0.0 )
    v16 = 0.0;
  else
    v16 = COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&_XMM4 - crosshairDistSqr) & _xmm) / *(float *)&_XMM8;
  if ( v12 < distClosePropTest )
  {
    value = 0.0;
    if ( !screenTargetB->isCharacter )
    {
      v18 = DCONST_DVARFLT_aim_slowdown_prioritization_non_character_neg;
      if ( !DCONST_DVARFLT_aim_slowdown_prioritization_non_character_neg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_slowdown_prioritization_non_character_neg") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v18);
      value = v18->current.value;
    }
    if ( !screenTargetA->isCharacter )
    {
      v19 = DCONST_DVARFLT_aim_slowdown_prioritization_non_character_neg;
      if ( !DCONST_DVARFLT_aim_slowdown_prioritization_non_character_neg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_slowdown_prioritization_non_character_neg") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v19);
      v11 = v19->current.value;
    }
    v20 = v11 + screenTargetA->crosshairDistSqr;
    v21 = value + screenTargetB->crosshairDistSqr;
    if ( v20 >= v21 )
    {
      v22 = v20 <= (float)(v21 + value);
      goto LABEL_26;
    }
    return 1i64;
  }
  if ( v16 >= crosshairDistClosePropTest )
  {
    v22 = *(float *)&_XMM4 <= crosshairDistSqr;
    if ( *(float *)&_XMM4 < crosshairDistSqr )
      return 1i64;
  }
  else
  {
    v22 = *(float *)&_XMM2 <= distSqr;
    if ( *(float *)&_XMM2 < distSqr )
      return 1i64;
  }
LABEL_26:
  if ( v22 )
    return 0i64;
  else
    return 0xFFFFFFFFi64;
}

/*
==============
AimAssist_ConvertToClipBounds
==============
*/
char AimAssist_ConvertToClipBounds(AimAssistGlobals *const aaGlob, const Bounds *bounds, const tmat43_t<vec3_t> *mtx, ExtentBounds *clipBounds)
{
  int v8; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  double v39; 
  double v40; 
  double v41; 
  double v42; 
  double v43; 
  double v44; 
  vec3_t in1; 
  vec3_t v47; 
  vec3_t out; 

  if ( !bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 639, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds") )
    __debugbreak();
  if ( !clipBounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 640, ASSERT_TYPE_ASSERT, "(clipBounds)", (const char *)&queryFormat, "clipBounds") )
    __debugbreak();
  clipBounds->mins.v[0] = 3.4028235e38;
  clipBounds->mins.v[1] = 3.4028235e38;
  v8 = 0;
  clipBounds->mins.v[2] = 3.4028235e38;
  clipBounds->maxs.v[0] = -3.4028235e38;
  clipBounds->maxs.v[1] = -3.4028235e38;
  clipBounds->maxs.v[2] = -3.4028235e38;
  do
  {
    _XMM4 = LODWORD(bounds->halfSize.v[0]);
    _XMM0 = v8 & 1;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm1, xmm4, xmm3, xmm2
    }
    _XMM4 = LODWORD(bounds->halfSize.v[1]);
    in1.v[0] = *(float *)&_XMM1 + bounds->midPoint.v[0];
    _XMM0 = v8 & 2;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm1, xmm4, xmm3, xmm2
    }
    _XMM4 = LODWORD(bounds->halfSize.v[2]);
    in1.v[1] = *(float *)&_XMM1 + bounds->midPoint.v[1];
    _XMM0 = v8 & 4;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm1, xmm4, xmm3, xmm2
    }
    in1.v[2] = *(float *)&_XMM1 + bounds->midPoint.v[2];
    MatrixTransformVector43(&in1, mtx, &out);
    if ( AimAssist_XfmWorldPointToClipSpace(aaGlob, &out, &v47) )
    {
      _XMM0 = LODWORD(clipBounds->mins.v[0]);
      __asm { vminss  xmm0, xmm0, dword ptr [rsp+0C8h+var_88] }
      clipBounds->mins.v[0] = *(float *)&_XMM0;
      _XMM1 = LODWORD(clipBounds->maxs.v[0]);
      __asm { vmaxss  xmm2, xmm1, dword ptr [rsp+0C8h+var_88] }
      clipBounds->maxs.v[0] = *(float *)&_XMM2;
      _XMM0 = LODWORD(clipBounds->mins.v[1]);
      __asm { vminss  xmm0, xmm0, dword ptr [rsp+0C8h+var_88+4] }
      clipBounds->mins.v[1] = *(float *)&_XMM0;
      _XMM1 = LODWORD(clipBounds->maxs.v[1]);
      __asm { vmaxss  xmm0, xmm1, dword ptr [rsp+0C8h+var_88+4] }
      clipBounds->maxs.v[1] = *(float *)&_XMM0;
      _XMM2 = LODWORD(clipBounds->mins.v[2]);
      __asm { vminss  xmm0, xmm2, dword ptr [rsp+0C8h+var_88+8] }
      clipBounds->mins.v[2] = *(float *)&_XMM0;
      _XMM1 = LODWORD(clipBounds->maxs.v[2]);
      __asm { vmaxss  xmm0, xmm1, dword ptr [rsp+0C8h+var_88+8] }
      clipBounds->maxs.v[2] = *(float *)&_XMM0;
    }
    ++v8;
  }
  while ( v8 < 8 );
  v33 = clipBounds->mins.v[0];
  v34 = clipBounds->maxs.v[0];
  if ( clipBounds->mins.v[0] >= v34 )
    return 0;
  v35 = clipBounds->mins.v[1];
  v36 = clipBounds->maxs.v[1];
  if ( v35 >= v36 )
    return 0;
  v37 = clipBounds->mins.v[2];
  v38 = clipBounds->maxs.v[2];
  if ( v37 >= v38 || v33 > 1.0 || v35 > 1.0 || v37 > 1.0 || v34 < -1.0 || v36 < -1.0 || v38 < 0.0 )
    return 0;
  v39 = I_fclamp(v33, -1.0, 1.0);
  clipBounds->mins.v[0] = *(float *)&v39;
  v40 = I_fclamp(clipBounds->mins.v[1], -1.0, 1.0);
  clipBounds->mins.v[1] = *(float *)&v40;
  v41 = I_fclamp(clipBounds->mins.v[2], 0.0, 1.0);
  clipBounds->mins.v[2] = *(float *)&v41;
  v42 = I_fclamp(clipBounds->maxs.v[0], -1.0, 1.0);
  clipBounds->maxs.v[0] = *(float *)&v42;
  v43 = I_fclamp(clipBounds->maxs.v[1], -1.0, 1.0);
  clipBounds->maxs.v[1] = *(float *)&v43;
  v44 = I_fclamp(clipBounds->maxs.v[2], 0.0, 1.0);
  clipBounds->maxs.v[2] = *(float *)&v44;
  return 1;
}

/*
==============
AimAssist_CreateScreenMatrix
==============
*/
void AimAssist_CreateScreenMatrix(LocalClientNum_t localClientNum, AimAssistGlobals *aaGlob, float tanHalfFovX, float tanHalfFovY)
{
  __int64 v5; 
  unsigned int secureInt32_3_aab; 
  vec3_t origin; 
  __int64 v8; 
  tmat44_t<vec4_t> in2; 
  tmat44_t<vec4_t> mtx; 
  tmat44_t<vec4_t> out; 

  v8 = -2i64;
  v5 = localClientNum;
  if ( !aaGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 590, ASSERT_TYPE_ASSERT, "(aaGlob)", (const char *)&queryFormat, "aaGlob") )
    __debugbreak();
  aaGlob->screenWidth = scrPlaceViewDisplay[v5].realViewportSize.v[0];
  aaGlob->screenHeight = scrPlaceViewDisplay[v5].realViewportSize.v[1];
  if ( !aaGlob->viewOrigin.initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 221, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
    __debugbreak();
  secureInt32_3_aab = aaGlob->viewOrigin.secureInt32_3_aab;
  LODWORD(origin.v[0]) = ((((_DWORD)aaGlob + 320) ^ secureInt32_3_aab) * ((((_DWORD)aaGlob + 320) ^ secureInt32_3_aab) + 2)) ^ aaGlob->viewOrigin.data[0];
  LODWORD(origin.v[1]) = ((((_DWORD)aaGlob + 324) ^ secureInt32_3_aab) * ((((_DWORD)aaGlob + 324) ^ secureInt32_3_aab) + 2)) ^ aaGlob->viewOrigin.data[1];
  LODWORD(origin.v[2]) = aaGlob->viewOrigin.data[2] ^ ((((_DWORD)aaGlob + 328) ^ secureInt32_3_aab) * ((((_DWORD)aaGlob + 328) ^ secureInt32_3_aab) + 2));
  MatrixForViewerOrthogonal(&origin, &aaGlob->viewAxis, &mtx);
  InfinitePerspectiveMatrix(tanHalfFovX, tanHalfFovY, 1.0, &in2);
  MatrixMultiply44Aligned(&mtx, &in2, &out);
  MatrixTranspose44Aligned(&out, &aaGlob->screenMtx);
  MatrixInverse44Aligned(&aaGlob->screenMtx, &aaGlob->invScreenMtx);
  memset(&origin, 0, sizeof(origin));
}

/*
==============
AimAssist_DoBoundsIntersectCenterBox
==============
*/
bool AimAssist_DoBoundsIntersectCenterBox(const vec2_t *clipMins, const vec2_t *clipMaxs, float clipHalfWidth, float clipHalfHeight)
{
  bool v4; 
  bool v5; 

  v4 = clipHalfWidth >= clipMins->v[0] && COERCE_FLOAT(LODWORD(clipHalfWidth) ^ _xmm) <= clipMaxs->v[0];
  v5 = clipHalfHeight >= clipMins->v[1] && COERCE_FLOAT(LODWORD(clipHalfHeight) ^ _xmm) <= clipMaxs->v[1];
  return v4 && v5;
}

/*
==============
AimAssist_DrawCenterBox
==============
*/
void AimAssist_DrawCenterBox(AimAssistGlobals *const aaGlob, float verticalOffset, float horizOffset, float clipHalfWidth, float clipHalfHeight, const vec4_t *color)
{
  if ( !aaGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 2914, ASSERT_TYPE_ASSERT, "(aaGlob)", (const char *)&queryFormat, "aaGlob") )
    __debugbreak();
  CL_DrawStretchPicPhysical((float)((float)(aaGlob->screenWidth - (float)(aaGlob->screenWidth * clipHalfWidth)) + (float)(aaGlob->screenWidth * horizOffset)) * 0.5, (float)((float)(aaGlob->screenHeight - (float)(aaGlob->screenHeight * clipHalfHeight)) * 0.5) - (float)((float)(aaGlob->screenHeight * verticalOffset) * 0.5), aaGlob->screenWidth * clipHalfWidth, aaGlob->screenHeight * clipHalfHeight, 0.0, 0.0, 1.0, 1.0, color, cgMedia.whiteMaterial);
}

/*
==============
AimAssist_DrawDebugOverlay
==============
*/
void AimAssist_DrawDebugOverlay(LocalClientNum_t localClientNum)
{
  signed __int64 v1; 
  void *v2; 
  __int64 v3; 
  AimAssistGlobals *ClientGlobals; 
  playerState_s *p_predictedPlayerState; 
  double CrosshairVerticalOffset; 
  float v7; 
  const dvar_t *v8; 
  vec4_t *v9; 
  vec4_t *v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  vec4_t *v16; 
  const dvar_t *v17; 
  const dvar_t *v18; 
  __int64 v19; 
  const dvar_t *v20; 
  double value; 
  const dvar_t *v22; 
  int integer; 
  const dvar_t *v24; 
  const char *v25; 
  const ScreenPlacement *ActivePlacement; 
  GfxFont *FontHandle; 
  const dvar_t *v28; 
  CgWeaponMap *Instance; 
  double MeleeRange; 
  float v31; 
  const dvar_t *v32; 
  float v33; 
  float v34; 
  CgHandler *Handler; 
  const dvar_t *v36; 
  centity_t *Entity; 
  int meleeChargeEnt; 
  CgWeaponMap *v39; 
  CgHandler *v40; 
  CgHandler *v41; 
  CgWeaponMap *v42; 
  int v43; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v45; 
  weapAnimFiles_t v46; 
  __int64 v47; 
  double autoMeleeYaw; 
  double autoMeleePitch; 
  double autoMeleeInitialYaw; 
  double autoMeleeInitialPitch; 
  const char *v52; 
  const char *v53; 
  const char *v54; 
  const ScreenPlacement *v55; 
  GfxFont *v56; 
  const dvar_t *v57; 
  const dvar_t *v58; 
  char *fmt; 
  __int64 s2; 
  __int64 s2a; 
  __int64 vertAlign; 
  __int64 scale; 
  bool v64; 
  bool IsMeleeAnimHit; 
  int meleeChargeDist; 
  int meleeChargeEntQueued; 
  int v68; 
  vec4_t v69; 
  vec4_t v70; 
  vec4_t highlightColor; 
  vec4_t color; 
  vec4_t v73; 
  vec3_t outAimPos; 
  char dest[6144]; 

  v2 = alloca(v1);
  v3 = localClientNum;
  color = (vec4_t)_xmm;
  v73 = (vec4_t)_xmm;
  highlightColor = (vec4_t)_xmm;
  ClientGlobals = AimAssist_GetClientGlobals(localClientNum);
  if ( !ClientGlobals->initialized )
    return;
  p_predictedPlayerState = &CG_GetLocalClientGlobals((const LocalClientNum_t)v3)->predictedPlayerState;
  CrosshairVerticalOffset = CG_View_GetCrosshairVerticalOffset((const LocalClientNum_t)v3, p_predictedPlayerState);
  v7 = *(float *)&CrosshairVerticalOffset;
  v8 = DCONST_DVARBOOL_aim_slowdown_debug;
  if ( !DCONST_DVARBOOL_aim_slowdown_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_slowdown_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled )
  {
    AimAssist_DrawTargets((LocalClientNum_t)v3, p_predictedPlayerState, &color, &highlightColor);
    AimAssist_DrawCenterBox(ClientGlobals, *(float *)&CrosshairVerticalOffset, 0.0, ClientGlobals->boxRangeScale * ClientGlobals->aaSharedGlob.tweakables.slowdownRegionWidth, ClientGlobals->boxRangeScale * ClientGlobals->aaSharedGlob.tweakables.slowdownRegionHeight, &v73);
    if ( AimAssist_UsingAdvancedSlowdown((LocalClientNum_t)v3) )
    {
      v70 = (vec4_t)_xmm;
      v69 = (vec4_t)_xmm;
      AimAssist_DrawCenterBox(ClientGlobals, *(float *)&CrosshairVerticalOffset, 0.0, ClientGlobals->aaSharedGlob.tweakables.slowdownAdvancedFarRegionWidth, ClientGlobals->aaSharedGlob.tweakables.slowdownAdvancedFarRegionHeight, &v70);
      v9 = &v69;
      if ( ClientGlobals->usingMaxX )
        v9 = &colorYellow;
      AimAssist_DrawCenterBox(ClientGlobals, ClientGlobals->centerTargetY, ClientGlobals->sweetSpotX, SWEET_SPOT_SCALE_WIDTH * ClientGlobals->aaSharedGlob.tweakables.slowdownRegionWidth, SWEET_SPOT_SCALE_LENGTH * ClientGlobals->aaSharedGlob.tweakables.slowdownRegionHeight, v9);
      v10 = &v69;
      if ( ClientGlobals->usingMaxY )
        v10 = &colorYellow;
      AimAssist_DrawCenterBox(ClientGlobals, ClientGlobals->sweetSpotY, ClientGlobals->centerTargetX, SWEET_SPOT_SCALE_LENGTH * ClientGlobals->aaSharedGlob.tweakables.slowdownRegionWidth, SWEET_SPOT_SCALE_WIDTH * ClientGlobals->aaSharedGlob.tweakables.slowdownRegionHeight, v10);
    }
    if ( AimAssist_UsingEnhancedSlowdown((LocalClientNum_t)v3) )
    {
      v11 = ClientGlobals->corner1.v[1];
      v12 = ClientGlobals->corner1.v[0];
      if ( (float)((float)(v12 * v12) + (float)(v11 * v11)) > 0.000099999997 )
      {
        v69 = (vec4_t)_xmm;
        v70 = (vec4_t)_xmm;
        v13 = atan2f_0(COERCE_FLOAT(LODWORD(ClientGlobals->input.v[0]) ^ _xmm), COERCE_FLOAT(LODWORD(ClientGlobals->input.v[1]) ^ _xmm)) * 57.295776;
        v14 = 0.5 * scrPlaceViewDisplay[v3].realViewportSize.v[0];
        v15 = 0.5 * scrPlaceViewDisplay[v3].realViewportSize.v[1];
        AimAssist_DrawCenterBox(ClientGlobals, v11, v12, 0.0099999998, 0.0099999998, &v69);
        AimAssist_DrawCenterBox(ClientGlobals, ClientGlobals->corner2.v[1], ClientGlobals->corner2.v[0], 0.0099999998, 0.0099999998, &v69);
        if ( (float)((float)(ClientGlobals->input.v[0] * ClientGlobals->input.v[0]) + (float)(ClientGlobals->input.v[1] * ClientGlobals->input.v[1])) > 0.000099999997 )
        {
          v16 = &v69;
          if ( !ClientGlobals->usingNearMissSlowdown )
            v16 = &v70;
          CL_DrawStretchPicPhysicalRotateXY(v14, v15, 5.0, 300.0, 0.0, 0.0, 1.0, 1.0, v13, 1, v16, cgMedia.whiteMaterial);
        }
      }
    }
  }
  v17 = DCONST_DVARBOOL_aim_autoaim_debug;
  if ( !DCONST_DVARBOOL_aim_autoaim_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_autoaim_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  if ( v17->current.enabled )
  {
    AimAssist_DrawTargets((LocalClientNum_t)v3, p_predictedPlayerState, &color, &highlightColor);
    AimAssist_DrawCenterBox(ClientGlobals, v7, 0.0, ClientGlobals->aaSharedGlob.tweakables.autoAimRegionWidth, ClientGlobals->aaSharedGlob.tweakables.autoAimRegionHeight, &v73);
  }
  v18 = DVARBOOL_scripted_melee_debug;
  if ( !DVARBOOL_scripted_melee_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scripted_melee_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  if ( v18->current.enabled && Com_GameMode_SupportsFeature(WEAPON_MANTLE_LADDER|0x80) )
  {
    AimAssist_DrawTargets((LocalClientNum_t)v3, p_predictedPlayerState, &color, &highlightColor);
    AimAssist_DrawCenterBox(ClientGlobals, v7, 0.0, ClientGlobals->aaSharedGlob.tweakables.scriptedMeleeRegionWidth, ClientGlobals->aaSharedGlob.tweakables.scriptedMeleeRegionHeight, &v73);
    memset_0(dest, 0, sizeof(dest));
    AimAssist_UpdateScriptedMeleeTarget(&ClientGlobals->aaSharedGlob, (AimOutput *)&v69);
    if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
      __debugbreak();
    v64 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->otherFlags, ACTIVE, 0x2Fu);
    v19 = -1i64;
    do
      ++v19;
    while ( dest[v19] );
    v20 = DCONST_DVARMPFLT_scripted_melee_range;
    if ( !DCONST_DVARMPFLT_scripted_melee_range && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scripted_melee_range") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    value = v20->current.value;
    v22 = DCONST_DVARMPINT_scripted_melee_height;
    if ( !DCONST_DVARMPINT_scripted_melee_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scripted_melee_height") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
    integer = v22->current.integer;
    v24 = DCONST_DVARMPINT_scripted_melee_width;
    if ( !DCONST_DVARMPINT_scripted_melee_width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scripted_melee_width") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v24);
    v25 = "NO";
    if ( v64 )
      v25 = "YES";
    LODWORD(s2) = SHIWORD(v69.xyz.z);
    LODWORD(fmt) = integer;
    Com_sprintf(&dest[(int)v19], 6144 - (int)v19, "^7Scripted Melee W|H|R: ^5%i, %i, %.1f\n^7Scripted Melee Target: ^5%i\n^7Scripted Melee Override Set: ^5%s\n", v24->current.unsignedInt, fmt, value, s2, v25);
    ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)v3);
    FontHandle = UI_GetFontHandle(ActivePlacement, 6, 0.2);
    UI_DrawText(ActivePlacement, dest, 6144, FontHandle, 0.0, 20.0, 1, 1, 0.2, &colorWhite, 3);
  }
  v28 = DCONST_DVARBOOL_melee_debug;
  if ( !DCONST_DVARBOOL_melee_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "melee_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v28);
  if ( v28->current.enabled )
  {
    if ( ClientGlobals->ps.sharedPS.isThirdPerson )
    {
      Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)v3);
      MeleeRange = BG_GetMeleeRange(Instance, p_predictedPlayerState, 1);
      v31 = *(float *)&MeleeRange;
      v32 = DCONST_DVARFLT_aim_automelee_thirdPersonAngle;
      if ( !DCONST_DVARFLT_aim_automelee_thirdPersonAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_automelee_thirdPersonAngle") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v32);
      v33 = v32->current.value;
      if ( v33 >= 90.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 3192, ASSERT_TYPE_ASSERT, "(meleeAngle < 90.0f)", (const char *)&queryFormat, "meleeAngle < 90.0f") )
        __debugbreak();
      v34 = tanf_0(v33 * 0.017453292) * *(float *)&MeleeRange;
      Handler = CgHandler::getHandler((LocalClientNum_t)v3);
      BG_GetThirdPersonMeleeCone(Handler, p_predictedPlayerState, (vec3_t *)&v69, (vec3_t *)&v70, NULL, NULL);
      v69.v[0] = (float)(v31 * v70.v[0]) + v69.v[0];
      v69.v[1] = (float)(v31 * v70.v[1]) + v69.v[1];
      v69.v[2] = (float)(v31 * v70.v[2]) + v69.v[2];
      LODWORD(v70.v[0]) ^= _xmm;
      LODWORD(v70.v[1]) ^= _xmm;
      LODWORD(v70.v[2]) ^= _xmm;
      CG_DebugCone((const vec3_t *)&v69, (const vec3_t *)&v70, v34, v31, &colorGreen, 1, 0);
    }
    else
    {
      AimAssist_DrawTargets((LocalClientNum_t)v3, p_predictedPlayerState, &color, &highlightColor);
      AimAssist_DrawCenterBox(ClientGlobals, v7, 0.0, ClientGlobals->aaSharedGlob.tweakables.autoMeleeRegionWidth, ClientGlobals->aaSharedGlob.tweakables.autoMeleeRegionHeight, &v73);
    }
    v36 = DCONST_DVARBOOL_melee_debug;
    if ( !DCONST_DVARBOOL_melee_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "melee_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v36);
    if ( v36->current.enabled && p_predictedPlayerState->meleeChargeEnt >= 0 && p_predictedPlayerState->meleeChargeEnt <= 0x7FEu )
    {
      Entity = CG_GetEntity((const LocalClientNum_t)v3, p_predictedPlayerState->meleeChargeEnt);
      if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 3213, ASSERT_TYPE_ASSERT, "(targetCent)", (const char *)&queryFormat, "targetCent") )
        __debugbreak();
      if ( !BG_IsRagdollTrajectory(&Entity->nextState.lerp.pos) )
      {
        meleeChargeEnt = p_predictedPlayerState->meleeChargeEnt;
        v39 = CgWeaponMap::GetInstance((const LocalClientNum_t)v3);
        v40 = CgHandler::getHandler((LocalClientNum_t)v3);
        if ( BG_CalcMeleeAimPos(v40, p_predictedPlayerState, v39, meleeChargeEnt, &outAimPos) )
        {
          secure_uint32_3_t::secureInt32_3_Get(&ClientGlobals->viewOrigin, (SecureVec3 *)&v69);
          CL_AddDebugLine((const vec3_t *)&v69, &outAimPos, &colorLtBlue, 0, 800, 0);
          memset(&v69, 0, 0xCui64);
        }
      }
    }
    memset_0(dest, 0, sizeof(dest));
    v41 = CgHandler::getHandler((LocalClientNum_t)v3);
    v42 = CgWeaponMap::GetInstance((const LocalClientNum_t)v3);
    v43 = p_predictedPlayerState->weapState[0].weapAnim & 0xFFFFFF7F;
    CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(v42, p_predictedPlayerState);
    v45 = BG_UsingAlternate(p_predictedPlayerState);
    v46 = BG_MapWeaponAnimStateToAnimIndex(v42, p_predictedPlayerState, v43, 0, CurrentWeaponForPlayer, v45, WEAPON_HAND_DEFAULT, v41);
    IsMeleeAnimHit = BG_IsMeleeAnimHit(v46);
    v47 = -1i64;
    do
      ++v47;
    while ( dest[v47] );
    autoMeleeYaw = ClientGlobals->aaSharedGlob.autoMeleeYaw;
    autoMeleePitch = ClientGlobals->aaSharedGlob.autoMeleePitch;
    autoMeleeInitialYaw = ClientGlobals->aaSharedGlob.autoMeleeInitialYaw;
    autoMeleeInitialPitch = ClientGlobals->aaSharedGlob.autoMeleeInitialPitch;
    v52 = s_autoMeleeStateNames[ClientGlobals->aaSharedGlob.autoMeleeState];
    meleeChargeDist = p_predictedPlayerState->meleeChargeDist;
    meleeChargeEntQueued = p_predictedPlayerState->meleeChargeEntQueued;
    v68 = ClientGlobals->ps.sharedPS.meleeChargeEnt;
    if ( ClientGlobals->ps.sharedPS.weaponState == 23 )
    {
      v53 = "F";
    }
    else
    {
      v53 = j_va("%i", (unsigned int)ClientGlobals->ps.sharedPS.meleeCount);
      if ( BG_IsMeleeAnim(v46) )
      {
        v54 = "(MISS)";
        if ( IsMeleeAnimHit )
          v54 = "(HIT)";
        goto LABEL_75;
      }
    }
    v54 = (char *)&queryFormat.fmt + 3;
LABEL_75:
    LODWORD(scale) = meleeChargeDist;
    LODWORD(vertAlign) = meleeChargeEntQueued;
    LODWORD(s2a) = v68;
    Com_sprintf(&dest[(int)v47], 6144 - (int)v47, "^7PS Weapon State: ^5%s %s\n^7PS Melee Count: ^5%s\n^7PS Charge Target: ^5%i\n^7PS Charge Queued: ^5%i\n^7PS Charge Dist: ^5%i\n^7Melee State: ^5%s\n^7Melee Initial P,Y: ^5%.2f, %.2f\n^7Melee P,Y: ^5%.2f, %.2f\n", s_weaponStateNames[ClientGlobals->ps.sharedPS.weaponState], v54, v53, s2a, vertAlign, scale, v52, autoMeleeInitialPitch, autoMeleeInitialYaw, autoMeleePitch, autoMeleeYaw);
    v55 = ScrPlace_GetActivePlacement((const LocalClientNum_t)v3);
    v56 = UI_GetFontHandle(v55, 6, 0.2);
    UI_DrawText(v55, dest, 6144, v56, 0.0, 20.0, 1, 1, 0.2, &colorWhite, 3);
  }
  v57 = DCONST_DVARBOOL_aim_lockon_debug;
  if ( !DCONST_DVARBOOL_aim_lockon_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_lockon_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v57);
  if ( v57->current.enabled )
  {
    AimAssist_DrawTargets((LocalClientNum_t)v3, p_predictedPlayerState, &color, &highlightColor);
    AimAssist_DrawCenterBox(ClientGlobals, v7, 0.0, ClientGlobals->aaSharedGlob.tweakables.lockOnRegionWidth, ClientGlobals->aaSharedGlob.tweakables.lockOnRegionHeight, &v73);
  }
  v58 = DCONST_DVARBOOL_mount_aim_debug;
  if ( !DCONST_DVARBOOL_mount_aim_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_aim_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v58);
  if ( v58->current.enabled )
  {
    AimAssist_DrawTargets((LocalClientNum_t)v3, p_predictedPlayerState, &color, &highlightColor);
    AimAssist_DrawCenterBox(ClientGlobals, v7, 0.0, ClientGlobals->aaSharedGlob.tweakables.mountLockOnRegionWidth, ClientGlobals->aaSharedGlob.tweakables.mountLockOnRegionHeight, &v73);
  }
}

/*
==============
AimAssist_DrawTargets
==============
*/
void AimAssist_DrawTargets(LocalClientNum_t localClientNum, const playerState_s *ps, const vec4_t *color, const vec4_t *highlightColor)
{
  AimAssistGlobals *ClientGlobals; 
  AimAssistGlobals *v9; 
  float adsLerp; 
  bool v11; 
  float AimAssistRange; 
  bool v13; 
  float AutoAimRange; 
  CgWeaponMap *Instance; 
  double MeleeRange; 
  float v17; 
  const ScreenPlacement *ActivePlacement; 
  const dvar_t *v19; 
  bool v20; 
  const dvar_t *v21; 
  float value; 
  const dvar_t *v23; 
  const AimScreenTarget *v24; 
  unsigned __int8 v25; 
  float autoAimRegionHeight; 
  float autoAimRegionWidth; 
  float v28; 
  const dvar_t *v29; 
  const AimScreenTarget *BestTarget; 
  int v31; 
  float *v32; 
  const dvar_t *v33; 
  const dvar_t *v34; 
  const dvar_t *v35; 
  float v36; 
  const dvar_t *v37; 
  const dvar_t *v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  double CrosshairVerticalOffset; 
  float v46; 
  vec4_t v47; 
  const char *v48; 
  float v49; 
  const char *v50; 
  float v51; 
  const char *v52; 
  float v53; 
  const char *v54; 
  const char *v55; 
  const char *v56; 
  const dvar_t *v57; 
  bool v58; 
  const AimScreenTarget *v59; 
  ScreenPlacement *scrPlace; 
  vec4_t v63; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 2943, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  ClientGlobals = AimAssist_GetClientGlobals(localClientNum);
  v9 = ClientGlobals;
  if ( ClientGlobals->ps.sharedPS.weapon.weaponIdx )
  {
    adsLerp = ClientGlobals->adsLerp;
    v11 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ClientGlobals->ps.sharedPS.weapFlags, ACTIVE, 0x11u);
    AimAssistRange = AimAssist_GetAimAssistRange(v9, &v9->ps.sharedPS.weapon, v11, adsLerp);
    v13 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&v9->ps.sharedPS.weapFlags, ACTIVE, 0x11u);
    AutoAimRange = AimAssist_GetAutoAimRange(&v9->ps.sharedPS.weapon, v13);
    Instance = CgWeaponMap::GetInstance(localClientNum);
    MeleeRange = BG_GetMeleeRange(Instance, ps, 1);
    v17 = *(float *)&MeleeRange;
    ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
    v19 = DVARBOOL_scripted_melee_debug;
    scrPlace = (ScreenPlacement *)ActivePlacement;
    if ( !DVARBOOL_scripted_melee_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scripted_melee_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v19);
    v20 = v19->current.enabled && Com_GameMode_SupportsFeature(WEAPON_MANTLE_LADDER|0x80);
    v21 = DCONST_DVARMPFLT_scripted_melee_range;
    v58 = v20;
    if ( !DCONST_DVARMPFLT_scripted_melee_range && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scripted_melee_range") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    value = v21->current.value;
    v23 = DCONST_DVARBOOL_aim_autoaim_debug;
    v24 = NULL;
    v25 = 0;
    v59 = NULL;
    if ( !DCONST_DVARBOOL_aim_autoaim_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_autoaim_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v23);
    if ( v23->current.enabled )
    {
      autoAimRegionHeight = v9->aaSharedGlob.tweakables.autoAimRegionHeight;
      autoAimRegionWidth = v9->aaSharedGlob.tweakables.autoAimRegionWidth;
    }
    else
    {
      if ( v20 )
      {
        autoAimRegionHeight = v9->aaSharedGlob.tweakables.scriptedMeleeRegionHeight;
        autoAimRegionWidth = v9->aaSharedGlob.tweakables.scriptedMeleeRegionWidth;
        v25 = 2;
        v28 = value;
LABEL_33:
        BestTarget = AimAssist_GetBestTarget(&v9->aaSharedGlob, (const AimTargetFlags)v25, v28, autoAimRegionWidth, autoAimRegionHeight);
        goto LABEL_34;
      }
      v29 = DCONST_DVARBOOL_melee_debug;
      if ( !DCONST_DVARBOOL_melee_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "melee_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v29);
      if ( v29->current.enabled )
      {
        autoAimRegionHeight = v9->aaSharedGlob.tweakables.autoMeleeRegionHeight;
        autoAimRegionWidth = v9->aaSharedGlob.tweakables.autoMeleeRegionWidth;
        v25 = 2;
LABEL_32:
        v28 = AutoAimRange;
        goto LABEL_33;
      }
      if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_aim_lockon_debug, "aim_lockon_debug") )
      {
        v25 = 1;
        BestTarget = AimAssist_GetPrevOrBestTarget(v9, BRUSHMODEL, AimAssistRange, v9->aaSharedGlob.tweakables.lockOnRegionWidth, v9->aaSharedGlob.tweakables.lockOnRegionHeight, v9->lockOnTargetEnt);
LABEL_34:
        v24 = BestTarget;
        v59 = BestTarget;
LABEL_35:
        v31 = 0;
        if ( v9->aaSharedGlob.screenTargetCount > 0 )
        {
          v32 = &v9->aaSharedGlob.screenTargets[0].velocity.v[2];
          do
          {
            if ( (v25 & (_BYTE)v32[5]) != 0 )
            {
              v33 = DCONST_DVARBOOL_aim_autoaim_debug;
              if ( !DCONST_DVARBOOL_aim_autoaim_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_autoaim_debug") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v33);
              if ( (!v33->current.enabled || (float)(AutoAimRange * AutoAimRange) >= v32[3]) && (!v58 || (float)(value * value) >= v32[3]) )
              {
                v34 = DCONST_DVARBOOL_melee_debug;
                if ( !DCONST_DVARBOOL_melee_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "melee_debug") )
                  __debugbreak();
                Dvar_CheckFrontendServerThread(v34);
                if ( !v34->current.enabled || (float)(v17 * v17) >= v32[3] )
                {
                  v35 = DCONST_DVARBOOL_aim_slowdown_debug;
                  if ( !DCONST_DVARBOOL_aim_slowdown_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_slowdown_debug") )
                    __debugbreak();
                  Dvar_CheckFrontendServerThread(v35);
                  v36 = AimAssistRange * AimAssistRange;
                  if ( !v35->current.enabled || v36 >= v32[3] )
                  {
                    v37 = DCONST_DVARBOOL_aim_lockon_debug;
                    if ( !DCONST_DVARBOOL_aim_lockon_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_lockon_debug") )
                      __debugbreak();
                    Dvar_CheckFrontendServerThread(v37);
                    if ( !v37->current.enabled || v36 >= v32[3] )
                    {
                      v38 = DCONST_DVARBOOL_mount_aim_debug;
                      if ( !DCONST_DVARBOOL_mount_aim_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_aim_debug") )
                        __debugbreak();
                      Dvar_CheckFrontendServerThread(v38);
                      if ( !v38->current.enabled || v36 >= v32[3] )
                      {
                        v39 = 0.5 * v9->screenWidth;
                        v40 = 0.5 * v9->screenHeight;
                        v41 = (float)(*(v32 - 9) + 1.0) * v39;
                        v42 = (float)(*(v32 - 8) + 1.0) * v40;
                        v43 = (float)((float)(*(v32 - 7) + 1.0) * v39) - v41;
                        v44 = (float)((float)(*(v32 - 6) + 1.0) * v40) - v42;
                        CrosshairVerticalOffset = CG_View_GetCrosshairVerticalOffset(localClientNum, ps);
                        v46 = v42 - (float)((float)(*(float *)&CrosshairVerticalOffset * v9->screenHeight) * 0.5);
                        if ( v24 == (const AimScreenTarget *)(v32 - 10) )
                          v47 = *highlightColor;
                        else
                          v47 = *color;
                        v63 = v47;
                        CL_DrawStretchPicPhysical(v41, v46, v43, v44, 0.0, 0.0, 1.0, 1.0, &v63, cgMedia.whiteMaterial);
                        v48 = j_va("Pri: %i", (unsigned int)v31);
                        CL_DrawText(scrPlace, v48, 0x7FFFFFFF, cls.smallDevFont, v41, v46, 5, 5, 1.0, 1.0, &colorYellow, 0);
                        v49 = v46 - 10.0;
                        v50 = j_va("Ent: %i", *((unsigned int *)v32 - 10));
                        CL_DrawText(scrPlace, v50, 0x7FFFFFFF, cls.smallDevFont, v41, v49, 5, 5, 1.0, 1.0, &colorYellow, 0);
                        v51 = v49 - 10.0;
                        v52 = j_va("Dist: %.2f (%.1f,%.1f,%.1f)", fsqrt(v32[3]), *(v32 - 5), *(v32 - 4), *(v32 - 3));
                        CL_DrawText(scrPlace, v52, 0x7FFFFFFF, cls.smallDevFont, v41, v51, 5, 5, 1.0, 1.0, &colorWhite, 0);
                        v53 = v51 - 10.0;
                        v54 = j_va("Speed: %.2f", fsqrt((float)((float)(*(v32 - 2) * *(v32 - 2)) + (float)(*(v32 - 1) * *(v32 - 1))) + (float)(*v32 * *v32)));
                        CL_DrawText(scrPlace, v54, 0x7FFFFFFF, cls.smallDevFont, v41, v53, 5, 5, 1.0, 1.0, &colorWhite, 0);
                        v55 = j_va("XHairDist: %.4f", fsqrt(v32[4]));
                        CL_DrawText(scrPlace, v55, 0x7FFFFFFF, cls.smallDevFont, v41, v53 - 10.0, 5, 5, 1.0, 1.0, &colorWhite, 0);
                        v56 = "Not Character";
                        if ( *((_DWORD *)v32 + 6) )
                          v56 = "Character";
                        CL_DrawText(scrPlace, v56, 0x7FFFFFFF, cls.smallDevFont, v41, (float)(v53 - 10.0) - 10.0, 5, 5, 1.0, 1.0, &colorWhite, 0);
                        v57 = DCONST_DVARBOOL_aim_autoaim_debug;
                        if ( !DCONST_DVARBOOL_aim_autoaim_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_autoaim_debug") )
                          __debugbreak();
                        Dvar_CheckFrontendServerThread(v57);
                        if ( v57->current.enabled )
                          CL_AddDebugStar((const vec3_t *)(v32 - 5), &colorRed, 0, 0, 0);
                      }
                    }
                  }
                }
              }
            }
            v24 = v59;
            ++v31;
            v32 += 18;
          }
          while ( v31 < v9->aaSharedGlob.screenTargetCount );
        }
        return;
      }
      if ( !Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_mount_aim_debug, "mount_aim_debug") )
        goto LABEL_35;
      autoAimRegionHeight = v9->aaSharedGlob.tweakables.mountLockOnRegionHeight;
      autoAimRegionWidth = v9->aaSharedGlob.tweakables.mountLockOnRegionWidth;
    }
    v25 = 1;
    goto LABEL_32;
  }
}

/*
==============
AimAssist_EntityInClipBounds
==============
*/
char AimAssist_EntityInClipBounds(LocalClientNum_t localClientNum, centity_t *cent)
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
  if ( CG_DObjGetWorldTagPos(&cent->pose, ClientDObj, scr_const.aim_highest_bone, &outPos.mins) && (bounds.midPoint.v[0] = 0.0, bounds.midPoint.v[1] = 0.0, bounds.midPoint.v[2] = (float)(outPos.mins.v[2] - axis.m[3].v[2]) * 0.5, bounds.halfSize.v[2] = bounds.midPoint.v[2], bounds.halfSize.v[0] = FLOAT_10_0, bounds.halfSize.v[1] = FLOAT_10_0, AimAssist_ConvertToClipBounds(ClientGlobals, &bounds, &axis, &outPos)) )
    return 1;
  else
    return 0;
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
float AimAssist_GetAimAssistRange(AimAssistGlobals *const aaGlob, const Weapon *weapon, bool isAlternate, float adsLerp)
{
  const dvar_t *v12; 
  unsigned int aimAssistRangeAds[4]; 
  float aimAssistRange; 

  if ( adsLerp < 0.0 || adsLerp > 1.0 )
  {
    __asm { vxorpd  xmm1, xmm1, xmm1 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 679, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( adsLerp ) && ( adsLerp ) <= ( 1.0f )", "adsLerp not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", adsLerp, *(double *)&_XMM1, DOUBLE_1_0) )
      __debugbreak();
  }
  BG_AimAssistRange(weapon, isAlternate, &aimAssistRange, (float *)aimAssistRangeAds);
  *(float *)&_XMM8 = (float)((float)(1.0 - adsLerp) * aimAssistRange) + (float)(adsLerp * *(float *)aimAssistRangeAds);
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|0x80) && BG_GetWeaponClass(weapon, isAlternate) == WEAPCLASS_SNIPER )
  {
    _XMM0 = LODWORD(FLOAT_0_001);
    __asm { vcmpless xmm3, xmm0, xmm1 }
    _XMM1 = aimAssistRangeAds[0];
    __asm { vblendvps xmm8, xmm1, xmm2, xmm3 }
  }
  v12 = DCONST_DVARMPFLT_aim_aimAssistRangeScale;
  if ( !DCONST_DVARMPFLT_aim_aimAssistRangeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_aimAssistRangeScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  return *(float *)&_XMM8 * v12->current.value;
}

/*
==============
AimAssist_GetAutoAimRange
==============
*/
float AimAssist_GetAutoAimRange(const Weapon *weapon, bool isAlternate)
{
  const dvar_t *v2; 
  float value; 
  double v6; 

  v2 = DVARFLT_aim_autoAimRangeScale;
  if ( !DVARFLT_aim_autoAimRangeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_autoAimRangeScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  value = v2->current.value;
  v6 = BG_AutoAimRange(weapon, isAlternate);
  return *(float *)&v6 * value;
}

/*
==============
AimAssist_GetBestTarget
==============
*/
const AimScreenTarget *AimAssist_GetBestTarget(const AimAssistSharedGlobals *aaSharedGlob, const AimTargetFlags flags, float range, float regionWidth, float regionHeight)
{
  unsigned __int8 v5; 
  __int64 screenTargetCount; 
  __int64 v8; 
  float *i; 
  bool v10; 
  bool v11; 

  v5 = flags;
  if ( !aaSharedGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 3363, ASSERT_TYPE_ASSERT, "(aaSharedGlob)", (const char *)&queryFormat, "aaSharedGlob") )
    __debugbreak();
  if ( range < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 3364, ASSERT_TYPE_ASSERT, "( ( ( range >= 0.0f ) ) )", "( range ) = %g", range) )
    __debugbreak();
  screenTargetCount = aaSharedGlob->screenTargetCount;
  if ( screenTargetCount <= 0 )
    return 0i64;
  v8 = 0i64;
  for ( i = (float *)&aaSharedGlob->screenTargets[0].clipMaxs + 1; ; i += 18 )
  {
    if ( (v5 & (_BYTE)i[11]) != 0 && (float)(range * range) >= i[9] )
    {
      v10 = regionWidth >= *(i - 3) && COERCE_FLOAT(LODWORD(regionWidth) ^ _xmm) <= *(i - 1);
      v11 = regionHeight >= *(i - 2) && COERCE_FLOAT(LODWORD(regionHeight) ^ _xmm) <= *i;
      if ( v10 && v11 )
        break;
    }
    if ( ++v8 >= screenTargetCount )
      return 0i64;
  }
  return (const AimScreenTarget *)(i - 4);
}

/*
==============
AimAssist_GetBoundsFromTarget
==============
*/
float AimAssist_GetBoundsFromTarget(const AimTarget *target, Bounds *outBounds)
{
  const dvar_t *v4; 
  float value; 
  float v6; 
  float v7; 

  if ( !target && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1002, ASSERT_TYPE_ASSERT, "(target)", (const char *)&queryFormat, "target") )
    __debugbreak();
  if ( !outBounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1003, ASSERT_TYPE_ASSERT, "(outBounds)", (const char *)&queryFormat, "outBounds") )
    __debugbreak();
  *(_OWORD *)outBounds->midPoint.v = *(_OWORD *)target->box.midPoint.v;
  *(double *)&outBounds->halfSize.y = *(double *)&target->box.halfSize.y;
  v4 = DCONST_DVARMPFLT_aim_boundsOffsetScale;
  if ( !DCONST_DVARMPFLT_aim_boundsOffsetScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_boundsOffsetScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  value = v4->current.value;
  if ( value <= 0.001 )
    return 0.0;
  v6 = outBounds->halfSize.v[2];
  outBounds->halfSize.v[2] = value * v6;
  outBounds->midPoint.v[2] = value * outBounds->midPoint.v[2];
  v7 = (float)(2.0 * v6) - (float)(2.0 * outBounds->halfSize.v[2]);
  if ( v7 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1022, ASSERT_TYPE_ASSERT, "(returnOffset >= 0.0f)", (const char *)&queryFormat, "returnOffset >= 0.0f") )
    __debugbreak();
  return v7;
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
float AimAssist_GetClipHeightFromVirtualHeight(LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float virtualHeight)
{
  AimAssistGlobals *ClientGlobals; 

  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 225, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  ClientGlobals = AimAssist_GetClientGlobals(localClientNum);
  if ( ClientGlobals->screenHeight == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 229, ASSERT_TYPE_ASSERT, "(aaGlob->screenHeight != 0.0f)", (const char *)&queryFormat, "aaGlob->screenHeight != 0.0f") )
    __debugbreak();
  return (float)((float)(virtualHeight * cg_hudSplitscreenScale) * scrPlace->scaleVirtualToReal.v[1]) / ClientGlobals->screenHeight;
}

/*
==============
AimAssist_GetClipWidthFromVirtualWidth
==============
*/
float AimAssist_GetClipWidthFromVirtualWidth(LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float virtualWidth)
{
  AimAssistGlobals *ClientGlobals; 

  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 212, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  ClientGlobals = AimAssist_GetClientGlobals(localClientNum);
  if ( ClientGlobals->screenWidth == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 216, ASSERT_TYPE_ASSERT, "(aaGlob->screenWidth != 0.0f)", (const char *)&queryFormat, "aaGlob->screenWidth != 0.0f") )
    __debugbreak();
  return (float)((float)(virtualWidth * cg_hudSplitscreenScale) * scrPlace->scaleVirtualToReal.v[0]) / ClientGlobals->screenWidth;
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
const AimScreenTarget *AimAssist_GetPrevOrBestTarget(AimAssistGlobals *const aaGlob, const AimTargetFlags flags, float range, float regionWidth, float regionHeight, int prevTargetEnt)
{
  unsigned __int8 v6; 
  const AimScreenTarget *result; 
  bool v9; 
  bool v10; 

  v6 = flags;
  if ( !aaGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1499, ASSERT_TYPE_ASSERT, "(aaGlob)", (const char *)&queryFormat, "aaGlob") )
    __debugbreak();
  if ( range < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1500, ASSERT_TYPE_ASSERT, "( ( (range >= 0.0f) ) )", "( range ) = %g", range) )
    __debugbreak();
  result = AimAssist_GetTargetFromEntity(&aaGlob->aaSharedGlob, prevTargetEnt);
  if ( !result || (float)(range * range) <= result->distSqr || (v6 & result->flags[0]) == 0 )
    return AimAssist_GetBestTarget(&aaGlob->aaSharedGlob, (const AimTargetFlags)v6, range, regionWidth, regionHeight);
  v9 = regionWidth >= result->clipMins.v[0] && COERCE_FLOAT(LODWORD(regionWidth) ^ _xmm) <= result->clipMaxs.v[0];
  v10 = regionHeight >= result->clipMins.v[1] && COERCE_FLOAT(LODWORD(regionHeight) ^ _xmm) <= result->clipMaxs.v[1];
  if ( !v9 || !v10 )
    return AimAssist_GetBestTarget(&aaGlob->aaSharedGlob, (const AimTargetFlags)v6, range, regionWidth, regionHeight);
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
  scr_string_t v9; 
  const DObj *ClientDObj; 
  DObjAnimMat *LocalBoneMatrix; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  XBoneInfo *v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  bool result; 
  unsigned __int8 v33; 
  unsigned __int8 index[7]; 
  vec3_t outOrigin; 
  __int64 v36; 
  tmat33_t<vec3_t> axis; 
  char v38; 

  v36 = -2i64;
  if ( !targetEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 940, ASSERT_TYPE_ASSERT, "(targetEnt)", (const char *)&queryFormat, "targetEnt") )
    __debugbreak();
  if ( !outBox && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 941, ASSERT_TYPE_ASSERT, "(outBox)", (const char *)&queryFormat, "outBox") )
    __debugbreak();
  v9 = model->aimAssistBones[aimAssistBoneIndex];
  *(_QWORD *)outBox->midPoint.v = 0i64;
  outBox->midPoint.v[2] = 0.0;
  outBox->halfSize.v[0] = -3.4028235e38;
  outBox->halfSize.v[1] = -3.4028235e38;
  outBox->halfSize.v[2] = -3.4028235e38;
  ClientDObj = Com_GetClientDObj(targetEnt->nextState.number, localClientNum);
  if ( !ClientDObj )
    return 0;
  index[0] = -2;
  if ( !XModelGetBoneIndex(model, v9, 0, index) )
    return 0;
  v33 = -2;
  DObjGetModelBoneIndex(ClientDObj, model->name, v9, &v33);
  LocalBoneMatrix = CG_DObjGetLocalBoneMatrix(&targetEnt->pose, ClientDObj, v33);
  if ( !LocalBoneMatrix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 960, ASSERT_TYPE_ASSERT, "(mat)", (const char *)&queryFormat, "mat") )
    __debugbreak();
  v12 = g_activeRefDef->viewOffset.v[0] + LocalBoneMatrix->trans.v[0];
  v13 = g_activeRefDef->viewOffset.v[1] + LocalBoneMatrix->trans.v[1];
  v14 = g_activeRefDef->viewOffset.v[2] + LocalBoneMatrix->trans.v[2];
  CG_GetPoseOrigin(&targetEnt->pose, &outOrigin);
  v15 = v12 - outOrigin.v[0];
  v16 = v13 - outOrigin.v[1];
  v17 = v14 - outOrigin.v[2];
  QuatToAxis(&LocalBoneMatrix->quat, &axis);
  v18 = &model->boneInfo[index[0]];
  if ( outBox == (Bounds *)v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 218, ASSERT_TYPE_ASSERT, "( rotatedBounds != baseBounds )", (const char *)&queryFormat, "rotatedBounds != baseBounds") )
    __debugbreak();
  if ( v18 == (XBoneInfo *)&v38 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
    __debugbreak();
  v19 = v18->bounds.midPoint.v[1];
  v20 = v18->bounds.midPoint.v[0];
  v21 = v18->bounds.midPoint.v[2];
  v22 = axis.m[0].v[0];
  v23 = axis.m[1].v[0];
  v24 = axis.m[2].v[0];
  outBox->midPoint.v[0] = (float)((float)((float)(v18->bounds.midPoint.v[0] * axis.m[0].v[0]) + (float)(v19 * axis.m[1].v[0])) + (float)(v21 * axis.m[2].v[0])) + v15;
  v25 = axis.m[0].v[1];
  v26 = axis.m[1].v[1];
  v27 = axis.m[2].v[1];
  outBox->midPoint.v[1] = (float)((float)((float)(v20 * axis.m[0].v[1]) + (float)(v19 * axis.m[1].v[1])) + (float)(v21 * axis.m[2].v[1])) + v16;
  v28 = axis.m[0].v[2];
  v29 = axis.m[1].v[2];
  v30 = (float)(v20 * axis.m[0].v[2]) + (float)(v19 * axis.m[1].v[2]);
  v31 = axis.m[2].v[2];
  outBox->midPoint.v[2] = (float)(v30 + (float)(v21 * axis.m[2].v[2])) + v17;
  outBox->halfSize.v[0] = (float)((float)(COERCE_FLOAT(LODWORD(v23) & _xmm) * v18->bounds.halfSize.v[1]) + (float)(COERCE_FLOAT(LODWORD(v22) & _xmm) * v18->bounds.halfSize.v[0])) + (float)(COERCE_FLOAT(LODWORD(v24) & _xmm) * v18->bounds.halfSize.v[2]);
  outBox->halfSize.v[1] = (float)((float)(COERCE_FLOAT(LODWORD(v26) & _xmm) * v18->bounds.halfSize.v[1]) + (float)(COERCE_FLOAT(LODWORD(v25) & _xmm) * v18->bounds.halfSize.v[0])) + (float)(COERCE_FLOAT(LODWORD(v27) & _xmm) * v18->bounds.halfSize.v[2]);
  outBox->halfSize.v[2] = (float)((float)(COERCE_FLOAT(LODWORD(v29) & _xmm) * v18->bounds.halfSize.v[1]) + (float)(COERCE_FLOAT(LODWORD(v28) & _xmm) * v18->bounds.halfSize.v[0])) + (float)(COERCE_FLOAT(LODWORD(v31) & _xmm) * v18->bounds.halfSize.v[2]);
  result = 1;
  memset(&outOrigin, 0, sizeof(outOrigin));
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
  unsigned int v2; 
  GraphFloat *v3; 
  unsigned int v4; 
  GraphFloat *v5; 
  int v6; 
  __int64 i; 
  __int64 v8; 
  unsigned __int8 v9; 
  DevGraph *v10; 
  char dest[128]; 
  char devguiPath[128]; 

  ClientGlobals = AimAssist_GetClientGlobals(localClientNum);
  memset_0(ClientGlobals, 0, sizeof(AimAssistGlobals));
  secure_uint32_3_t::secureInt32_3_Reset(&ClientGlobals->viewOrigin);
  v2 = 0;
  v3 = aaInputGraph;
  v4 = 0;
  v5 = aaInputGraph;
  do
  {
    Com_sprintf(dest, 0x80ui64, "aim_assist/view_input_%d.graph", v4);
    GraphFloat_Load(v5, dest, 1.0);
    ++v4;
    ++v5;
  }
  while ( v4 < 4 );
  aaInputGraphValid = 1;
  Sys_EnterCriticalSection(CRITSECT_CBUF);
  v6 = truncate_cast<int,unsigned __int64>(0x16ui64) + 1;
  if ( s_cmd_superUser_textArray[0].cmdsize + v6 <= s_cmd_superUser_textArray[0].maxsize )
  {
    for ( i = s_cmd_superUser_textArray[0].cmdsize - 1; i >= 0; s_cmd_superUser_textArray[0].data[v8] = v9 )
    {
      v8 = v6 + i;
      v9 = s_cmd_superUser_textArray[0].data[i--];
    }
    memcpy_0(s_cmd_superUser_textArray[0].data, "exec devgui_aimassist\n", v6 - 1);
    s_cmd_superUser_textArray[0].data[v6 - 1] = 10;
    s_cmd_superUser_textArray[0].cmdsize += v6;
  }
  else
  {
    Com_PrintError(1, "Cbuf_InsertText overflowed\n");
  }
  Sys_LeaveCriticalSection(CRITSECT_CBUF);
  v10 = aaInputDevGraph;
  do
  {
    Com_sprintf(devguiPath, 0x80ui64, "Aim Assist/Input Graph:1/Graph %d", v2);
    GraphFloat_CreateDevGui(v3, v10, devguiPath);
    ++v2;
    ++v10;
    ++v3;
  }
  while ( v2 < 4 );
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
  bool v7; 
  cg_t *LocalClientGlobals; 
  unsigned int refdefViewOrg_aab; 
  int entity; 
  HavokPhysics_CollisionQueryResult *AnyResult; 
  double ClientVisibility; 
  hkMemoryAllocator *v13; 
  hkMemoryAllocator *v14; 
  vec3_t start; 
  vec3_t outPos; 
  HavokPhysics_IgnoreBodies v18; 
  Physics_RaycastExtendedData extendedData; 
  __int64 v20; 

  v20 = -2i64;
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
    HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v18, 2, 0);
    HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v18, 0, targetEnt->nextState.number, 1, 1, 0, 1, 1);
    HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v18, 1, entity, 1, 1, 0, 1, 1);
    v18.m_ignoreTransparentVolumes = 1;
    extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
    extendedData.collisionBuffer = 0.0;
    extendedData.phaseSelection = All;
    extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
    *(_WORD *)&extendedData.collectInsideHits = 256;
    extendedData.contents = 8423683;
    extendedData.ignoreBodies = &v18;
    AnyResult = PhysicsQuery_GetAnyResult((Physics_WorldId)(3 * localClientNum + 2));
    if ( !AnyResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 917, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
      __debugbreak();
    HavokPhysics_CollisionQueryResult::Reset(AnyResult, 1);
    Physics_Raycast((Physics_WorldId)(3 * localClientNum + 2), &start, &outPos, &extendedData, AnyResult);
    if ( HavokPhysics_CollisionQueryResult::HasHit(AnyResult) )
    {
      Profile_EndInternal(NULL);
      v7 = 0;
    }
    else
    {
      ClientVisibility = FX_GetClientVisibility(localClientNum, &start, &outPos);
      v7 = *(float *)&ClientVisibility >= 0.000099999997;
      Profile_EndInternal(NULL);
    }
    v13 = hkMemHeapAllocator();
    v18.m_ignoreBodies.m_size = 0;
    if ( v18.m_ignoreBodies.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v13, v18.m_ignoreBodies.m_data, 4, v18.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
    v18.m_ignoreBodies.m_data = NULL;
    v18.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
    v14 = hkMemHeapAllocator();
    v18.m_ignoreEntities.m_size = 0;
    if ( v18.m_ignoreEntities.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v14, v18.m_ignoreEntities.m_data, 8, v18.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  }
  else
  {
    Profile_EndInternal(NULL);
    v7 = 0;
  }
  memset(&outPos, 0, sizeof(outPos));
  memset(&start, 0, sizeof(start));
  return v7;
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
void AimAssist_SetSlowAim(LocalClientNum_t localClientNum, const float slowAimPitchScale, const float slowAimYawScale)
{
  AimAssistGlobals *ClientGlobals; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 2884, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_SLOW_AIM ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_SLOW_AIM )") )
    __debugbreak();
  ClientGlobals = AimAssist_GetClientGlobals(localClientNum);
  ClientGlobals->slowAimPitchScale = slowAimPitchScale;
  ClientGlobals->slowAimYawScale = slowAimYawScale;
  ClientGlobals->slowAimEnabled = 1;
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
  AimAssistGlobals *v6; 
  double WeaponOrOffhandAdsFrac; 

  if ( !input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 342, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 343, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  ClientGlobals = AimAssist_GetClientGlobals(input->localClientNum);
  localClientNum = input->localClientNum;
  v6 = ClientGlobals;
  if ( !CgWeaponMap::ms_instance[localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  WeaponOrOffhandAdsFrac = BG_GetWeaponOrOffhandAdsFrac(CgWeaponMap::ms_instance[localClientNum], &cgameGlob->predictedPlayerState);
  v6->adsLerp = *(float *)&WeaponOrOffhandAdsFrac;
  if ( BG_IsTurretActiveFlags(&v6->ps.eFlags) )
  {
    if ( AimAssist_IsTurretWeaponWithDisabledAds(cgameGlob) )
    {
      v6->adsLerp = 0.0;
      return;
    }
    if ( (input->buttons & 0x200) != 0 )
      goto LABEL_15;
  }
  if ( CG_PlayerUsingScopedTurret(input->localClientNum) )
LABEL_15:
    v6->adsLerp = 1.0;
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
  AimScreenTarget *v3; 
  unsigned int secureInt32_3_aab; 
  __int128 v5; 
  float v6; 
  float v10; 
  float v11; 
  float v12; 
  __int64 v14[3]; 
  vec3_t vec; 
  tmat33_t<vec3_t> out; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 

  v14[2] = -2i64;
  if ( !aaGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 2287, ASSERT_TYPE_ASSERT, "(aaGlob)", (const char *)&queryFormat, "aaGlob") )
    __debugbreak();
  if ( !aaGlob->autoAimActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 2288, ASSERT_TYPE_ASSERT, "(aaGlob->autoAimActive)", (const char *)&queryFormat, "aaGlob->autoAimActive") )
    __debugbreak();
  TargetFromEntity = AimAssist_GetTargetFromEntity(&aaGlob->aaSharedGlob, aaGlob->autoAimTargetEnt);
  v3 = TargetFromEntity;
  if ( TargetFromEntity )
  {
    if ( !aaGlob->viewOrigin.initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 221, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
      __debugbreak();
    secureInt32_3_aab = aaGlob->viewOrigin.secureInt32_3_aab;
    LODWORD(v14[0]) = ((((_DWORD)aaGlob + 320) ^ secureInt32_3_aab) * ((((_DWORD)aaGlob + 320) ^ secureInt32_3_aab) + 2)) ^ aaGlob->viewOrigin.data[0];
    HIDWORD(v14[0]) = ((((_DWORD)aaGlob + 324) ^ secureInt32_3_aab) * ((((_DWORD)aaGlob + 324) ^ secureInt32_3_aab) + 2)) ^ aaGlob->viewOrigin.data[1];
    LODWORD(v14[1]) = ((((_DWORD)aaGlob + 328) ^ secureInt32_3_aab) * ((((_DWORD)aaGlob + 328) ^ secureInt32_3_aab) + 2)) ^ aaGlob->viewOrigin.data[2];
    v5 = LODWORD(v3->aimPos.v[0]);
    vec.v[0] = v3->aimPos.v[0] - *(float *)v14;
    vec.v[1] = v3->aimPos.v[1] - *((float *)v14 + 1);
    v6 = v3->aimPos.v[2] - *(float *)&v14[1];
    *(float *)&v5 = fsqrt((float)((float)(vec.v[0] * vec.v[0]) + (float)(vec.v[1] * vec.v[1])) + (float)(v6 * v6));
    _XMM1 = v5;
    __asm
    {
      vcmpless xmm0, xmm1, cs:__real@80000000
      vblendvps xmm1, xmm1, xmm2, xmm0
    }
    vec.v[0] = vec.v[0] * (float)(1.0 / *(float *)&_XMM1);
    vec.v[1] = vec.v[1] * (float)(1.0 / *(float *)&_XMM1);
    vec.v[2] = v6 * (float)(1.0 / *(float *)&_XMM1);
    if ( Com_GameMode_SupportsFeature(WEAPON_RELOAD_END_RECHAMBER) )
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_RELOAD_END_RECHAMBER) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 2248, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_AIM_ASSIST_REF ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_AIM_ASSIST_REF )") )
        __debugbreak();
      if ( aaGlob->ps.groundTiltRefAngles.v[0] != 0.0 || aaGlob->ps.groundTiltRefAngles.v[1] != 0.0 || aaGlob->ps.groundTiltRefAngles.v[2] != 0.0 )
      {
        AnglesToAxis(&aaGlob->ps.groundTiltRefAngles, &axis);
        MatrixTranspose(&axis, &out);
        v10 = vec.v[0] * out.m[0].v[1];
        v11 = vec.v[1] * out.m[1].v[2];
        v12 = vec.v[0] * out.m[0].v[2];
        vec.v[0] = (float)((float)(vec.v[1] * out.m[1].v[0]) + (float)(vec.v[0] * out.m[0].v[0])) + (float)(vec.v[2] * out.m[2].v[0]);
        vec.v[1] = (float)((float)(vec.v[1] * out.m[1].v[1]) + v10) + (float)(vec.v[2] * out.m[2].v[1]);
        vec.v[2] = (float)(v12 + v11) + (float)(vec.v[2] * out.m[2].v[2]);
      }
    }
    WorldUpReferenceFrame::RemoveReferenceFrameFromVector(&aaGlob->refFrame, &vec);
    vectoangles(&vec, &angles);
    aaGlob->autoAimPitchTarget = angles.v[0];
    aaGlob->autoAimYawTarget = angles.v[1];
    LOBYTE(TargetFromEntity) = 1;
    memset(v14, 0, 0xCui64);
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
  AimAssistGlobals *v6; 

  ClientGlobals = AimAssist_GetClientGlobals(localClientNum);
  v6 = ClientGlobals;
  if ( ClientGlobals->initialized && ClientGlobals->slowAimEnabled )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 2826, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_SLOW_AIM ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_SLOW_AIM )") )
      __debugbreak();
    *mx = v6->slowAimYawScale * *mx;
    *my = v6->slowAimPitchScale * *my;
  }
}

/*
==============
AimAssist_UpdateScreenTargets
==============
*/
void AimAssist_UpdateScreenTargets(LocalClientNum_t localClientNum, const vec3_t *eyeOrg, const vec3_t *viewOrg, const vec3_t *viewAngles, float tanHalfFovX, float tanHalfFovY)
{
  __int64 v9; 
  AimAssistGlobals *ClientGlobals; 
  CgGlobalsSP *LocalClientGlobals; 
  playerState_s *p_predictedPlayerState; 
  const dvar_t *v13; 
  const dvar_t *v14; 
  float v15; 
  double FovDvarValue; 
  float v17; 
  const dvar_t *v18; 
  float v19; 
  int v20; 
  int screenTargetCount; 
  int *p_currentHeight; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  const AimTarget *v28; 
  __int64 v29; 
  CgEntitySystem *v30; 
  __int64 v31; 
  char v32; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int128 v37; 
  float BoundsFromTarget; 
  int entIndex; 
  __int64 v49; 
  __int64 v50; 
  __int16 v51; 
  int v52; 
  const dvar_t *v53; 
  int endTime; 
  float v55; 
  const dvar_t *v56; 
  float value; 
  AimTargetFlags v58; 
  const AimScreenTarget *BestTarget; 
  char v60; 
  float *p_viewAxis; 
  __int64 clientNum; 
  CgGlobalsSP *v63; 
  const characterInfo_t *CharacterInfo; 
  HavokPhysics_CollisionQueryResult *ClosestResult; 
  hkMemoryAllocator *v66; 
  hkMemoryAllocator *v67; 
  bool v68; 
  float v69; 
  const dvar_t *v70; 
  const dvar_t *v71; 
  const vec4_t *v72; 
  __int64 duration; 
  __int64 durationa; 
  vec3_t *outAimScreenPos; 
  vec3_t *outAimScreenPosa; 
  char v77; 
  char v78; 
  scr_string_t tag; 
  int targetCount[2]; 
  _QWORD v81[2]; 
  HavokPhysics_IgnoreBodies v82; 
  AimTarget *targetList; 
  CgGlobalsSP *v84; 
  __int64 v85; 
  vec3_t outOrigin; 
  vec3_t end; 
  AimScreenTarget screenTarget; 
  Physics_RaycastExtendedData outBounds; 
  vec3_t v90; 
  tmat43_t<vec3_t> axis; 
  ExtentBounds clipBounds; 
  int v93[64]; 

  v85 = -2i64;
  v9 = localClientNum;
  Profile_Begin(46);
  ClientGlobals = AimAssist_GetClientGlobals((LocalClientNum_t)v9);
  if ( ClientGlobals->initialized )
  {
    LocalClientGlobals = (CgGlobalsSP *)CG_GetLocalClientGlobals((const LocalClientNum_t)v9);
    v84 = LocalClientGlobals;
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1225, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
    *(_QWORD *)end.v = p_predictedPlayerState;
    v13 = DVARBOOL_scripted_melee_debug;
    if ( !DVARBOOL_scripted_melee_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scripted_melee_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    if ( v13->current.enabled )
      goto LABEL_13;
    v14 = DCONST_DVARBOOL_melee_debug;
    if ( !DCONST_DVARBOOL_melee_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "melee_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    v78 = 0;
    if ( v14->current.enabled )
LABEL_13:
      v78 = 1;
    ClientGlobals->aaSharedGlob.eyeOrigin.v[0] = eyeOrg->v[0];
    ClientGlobals->aaSharedGlob.eyeOrigin.v[1] = eyeOrg->v[1];
    ClientGlobals->aaSharedGlob.eyeOrigin.v[2] = eyeOrg->v[2];
    v81[0] = *(_QWORD *)viewOrg->v;
    v15 = viewOrg->v[2];
    *(float *)&v81[1] = v15;
    if ( !ClientGlobals->viewOrigin.initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 186, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
      __debugbreak();
    ClientGlobals->viewOrigin.secureInt32_3_aab += ClientGlobals->viewOrigin.secureInt32_3_set_aab;
    tag = ((_DWORD)ClientGlobals + 320) ^ ClientGlobals->viewOrigin.secureInt32_3_aab;
    ClientGlobals->viewOrigin.data[0] = (tag * (tag + 2)) ^ LODWORD(v81[0]);
    tag = ClientGlobals->viewOrigin.secureInt32_3_aab ^ ((_DWORD)ClientGlobals + 324);
    ClientGlobals->viewOrigin.data[1] = (tag * (tag + 2)) ^ HIDWORD(v81[0]);
    tag = ClientGlobals->viewOrigin.secureInt32_3_aab ^ ((_DWORD)ClientGlobals + 328);
    ClientGlobals->viewOrigin.data[2] = (tag * (tag + 2)) ^ LODWORD(v15);
    memset(v81, 0, 0xCui64);
    ClientGlobals->origin.v[0] = p_predictedPlayerState->origin.v[0];
    ClientGlobals->origin.v[1] = p_predictedPlayerState->origin.v[1];
    ClientGlobals->origin.v[2] = p_predictedPlayerState->origin.v[2];
    ClientGlobals->aaSharedGlob.viewAngles.v[0] = viewAngles->v[0];
    ClientGlobals->aaSharedGlob.viewAngles.v[1] = viewAngles->v[1];
    ClientGlobals->aaSharedGlob.viewAngles.v[2] = viewAngles->v[2];
    AnglesToAxis(viewAngles, &ClientGlobals->viewAxis);
    FovDvarValue = CG_View_GetFovDvarValue((const LocalClientNum_t)v9);
    v17 = *(float *)&FovDvarValue;
    v18 = DVARFLT_cg_fovScale;
    if ( !DVARFLT_cg_fovScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_fovScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    ClientGlobals->fovTurnRateScale = (float)(1.3333334 / tanf_0(v18->current.value * 0.56723201)) * tanHalfFovY;
    v19 = tanf_0(v17 * 0.0087266462) * 0.75;
    if ( v19 == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 578, ASSERT_TYPE_ASSERT, "( ( tanHalfBaseFovY != 0.0f ) )", "( tanHalfBaseFovY ) = %g", v19) )
      __debugbreak();
    ClientGlobals->fovScaleInv = v19 / tanHalfFovY;
    AimAssist_CreateScreenMatrix((LocalClientNum_t)v9, ClientGlobals, tanHalfFovX, tanHalfFovY);
    if ( ClientGlobals->aaSharedGlob.screenTargetCount > 32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1247, ASSERT_TYPE_ASSERT, "(aaGlob->aaSharedGlob.screenTargetCount <= 32)", (const char *)&queryFormat, "aaGlob->aaSharedGlob.screenTargetCount <= AIM_MAX_TARGET_COUNT") )
      __debugbreak();
    v20 = 0;
    screenTargetCount = ClientGlobals->aaSharedGlob.screenTargetCount;
    if ( screenTargetCount > 0 )
    {
      p_currentHeight = (int *)&ClientGlobals->aaSharedGlob.screenTargets[0].currentHeight;
      v23 = 0i64;
      v20 = ClientGlobals->aaSharedGlob.screenTargetCount;
      v24 = (unsigned int)screenTargetCount;
      do
      {
        v93[v23] = *(p_currentHeight - 11);
        v93[v23 + 32] = *p_currentHeight;
        p_currentHeight += 18;
        ++v23;
        --v24;
      }
      while ( v24 );
    }
    ClientGlobals->aaSharedGlob.screenTargetCount = 0;
    AimTarget_GetClientTargetList((LocalClientNum_t)v9, (const AimTarget **)&targetList, &targetCount[1]);
    v77 = 0;
    if ( targetCount[1] > 0 )
    {
      CG_GetPlayerViewOrigin((LocalClientNum_t)v9, p_predictedPlayerState, &outOrigin);
      v77 = 1;
    }
    targetCount[0] = 0;
    v25 = v20;
    if ( targetCount[1] > 0 )
    {
      v26 = v9;
      v27 = 0i64;
      v81[0] = 0i64;
      do
      {
        v28 = (AimTarget *)((char *)targetList + v27);
        v29 = *(int *)((char *)&targetList->entIndex + v27);
        if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
        {
          LODWORD(outAimScreenPos) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", outAimScreenPos) )
            __debugbreak();
        }
        if ( (unsigned int)v9 >= CgEntitySystem::ms_allocatedCount )
        {
          LODWORD(outAimScreenPos) = CgEntitySystem::ms_allocatedCount;
          LODWORD(duration) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", duration, outAimScreenPos) )
            __debugbreak();
        }
        if ( !CgEntitySystem::ms_entitySystemArray[v26] )
        {
          LODWORD(outAimScreenPos) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", outAimScreenPos) )
            __debugbreak();
        }
        v30 = CgEntitySystem::ms_entitySystemArray[v26];
        if ( (unsigned int)v29 >= 0x800 )
        {
          LODWORD(outAimScreenPos) = 2048;
          LODWORD(duration) = v29;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", duration, outAimScreenPos) )
            __debugbreak();
        }
        v31 = (__int64)&v30->m_entities[v29];
        v32 = v28->flags[0];
        if ( (*(_BYTE *)(v31 + 648) & 1) != 0 )
        {
          AnglesToAxis((const vec3_t *)(v31 + 72), (tmat33_t<vec3_t> *)&axis);
          if ( !*(_QWORD *)(v31 + 48) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
            __debugbreak();
          FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(*(void (__fastcall *const *)(const vec4_t *, vec3_t *))(v31 + 48), (const cpose_t *)v31);
          FunctionPointer_origin((const vec4_t *)(v31 + 56), &axis.m[3]);
          if ( *(_BYTE *)(v31 + 2) )
          {
            _XMM0 = LODWORD(axis.m[3].v[0]);
            __asm { vcvtdq2pd xmm0, xmm0 }
            *((_QWORD *)&v37 + 1) = *((_QWORD *)&_XMM0 + 1);
            *(double *)&v37 = *(double *)&_XMM0 * 0.000244140625;
            _XMM1 = v37;
            __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
            axis.m[3].v[0] = *(float *)&_XMM2;
            _XMM0 = LODWORD(axis.m[3].v[1]);
            __asm { vcvtdq2pd xmm0, xmm0 }
            *((_QWORD *)&v37 + 1) = *((_QWORD *)&_XMM0 + 1);
            *(double *)&v37 = *(double *)&_XMM0 * 0.000244140625;
            _XMM1 = v37;
            __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
            axis.m[3].v[1] = *(float *)&_XMM2;
            _XMM0 = LODWORD(axis.m[3].v[2]);
            __asm { vcvtdq2pd xmm0, xmm0 }
            *((_QWORD *)&v37 + 1) = *((_QWORD *)&_XMM0 + 1);
            *(double *)&v37 = *(double *)&_XMM0 * 0.000244140625;
            _XMM1 = v37;
            __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
            axis.m[3].v[2] = *(float *)&_XMM2;
          }
          BoundsFromTarget = AimAssist_GetBoundsFromTarget(v28, (Bounds *)&outBounds);
          if ( BoundsFromTarget != 0.0 )
            WorldUpReferenceFrame::AddUpContribution(&ClientGlobals->refFrame, BoundsFromTarget, &axis.m[3]);
          if ( AimAssist_ConvertToClipBounds(ClientGlobals, (const Bounds *)&outBounds, &axis, &clipBounds) )
          {
            entIndex = v28->entIndex;
            screenTarget.entIndex = v28->entIndex;
            screenTarget.clipMins.v[0] = clipBounds.mins.v[0];
            screenTarget.clipMins.v[1] = clipBounds.mins.v[1];
            screenTarget.currentHeight = outBounds.collisionBuffer;
            screenTarget.previousHeight = outBounds.collisionBuffer;
            v49 = 0i64;
            if ( v25 > 0 )
            {
              while ( v93[v49] != entIndex )
              {
                if ( ++v49 >= v25 )
                  goto LABEL_62;
              }
              LODWORD(screenTarget.previousHeight) = v93[v49 + 32];
            }
LABEL_62:
            screenTarget.clipMaxs.v[0] = clipBounds.maxs.v[0];
            screenTarget.clipMaxs.v[1] = clipBounds.maxs.v[1];
            if ( !CGMovingPlatformAimAssist::UpdateScreenTargetVelocity(&ClientGlobals->moverData, (const centity_t *)v31, targetCount[0], &screenTarget) )
              screenTarget.velocity = v28->velocity;
            if ( (unsigned int)AimAssist_CalcAimPos((LocalClientNum_t)v9, ClientGlobals, (const centity_t *)v31, v28, &axis, &screenTarget.aimPos, &v90, &tag) )
            {
              if ( !v77 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1353, ASSERT_TYPE_ASSERT, "(playerViewOriginValid)", (const char *)&queryFormat, "playerViewOriginValid") )
                __debugbreak();
              screenTarget.crosshairDistSqr = (float)(v90.v[0] * v90.v[0]) + (float)(v90.v[1] * v90.v[1]);
              screenTarget.distSqr = (float)((float)((float)(screenTarget.aimPos.v[1] - outOrigin.v[1]) * (float)(screenTarget.aimPos.v[1] - outOrigin.v[1])) + (float)((float)(screenTarget.aimPos.v[0] - outOrigin.v[0]) * (float)(screenTarget.aimPos.v[0] - outOrigin.v[0]))) + (float)((float)(screenTarget.aimPos.v[2] - outOrigin.v[2]) * (float)(screenTarget.aimPos.v[2] - outOrigin.v[2]));
              v50 = v31 + 400;
              if ( !v50 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
                __debugbreak();
              v51 = *(_WORD *)(v50 + 8);
              v52 = ((v51 - 1) & 0xFFED) == 0 && v51 != 3;
              screenTarget.isCharacter = v52;
              screenTarget.tag = tag;
              screenTarget.flags[0] = v28->flags[0];
              if ( v78 && (v32 & 2) != 0 )
                CG_DebugStar(&screenTarget.aimPos, &colorGreen, 0, 0);
              AimAssist_AddToTargetList(ClientGlobals, &screenTarget);
            }
            else if ( v78 && (v32 & 2) != 0 )
            {
              CG_DebugStarWithText(&v28->box.midPoint, &colorRed, &colorRed, "CalcAimPos failed", debugFontSize, 0);
            }
          }
          else if ( v78 && (v32 & 2) != 0 )
          {
            CG_DebugStarWithText(&v28->box.midPoint, &colorRed, &colorRed, "ClipBounds failed", debugFontSize, 0);
          }
        }
        ++targetCount[0];
        v27 = v81[0] + 48i64;
        v81[0] += 48i64;
        v26 = v9;
      }
      while ( targetCount[0] < targetCount[1] );
      p_predictedPlayerState = *(playerState_s **)end.v;
    }
    v53 = DCONST_DVARBOOL_mount_aim_lockon;
    if ( !DCONST_DVARBOOL_mount_aim_lockon && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_aim_lockon") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v53);
    endTime = p_predictedPlayerState->mountState.endTime;
    if ( p_predictedPlayerState->mountState.startTime > endTime )
      endTime = p_predictedPlayerState->mountState.startTime;
    if ( v53->current.enabled && ClientGlobals->mountLockOnTime < endTime )
    {
      if ( !v77 )
        CG_GetPlayerViewOrigin((LocalClientNum_t)v9, p_predictedPlayerState, &outOrigin);
      ClientGlobals->mountLockOnValid = 0;
      ClientGlobals->mountLockOnTime = endTime;
      v55 = outOrigin.v[0];
      ClientGlobals->mountLockOnPrevEyePoint = outOrigin;
      ClientGlobals->mountLockOnPrevEyeOffset.v[0] = v55 - p_predictedPlayerState->origin.v[0];
      ClientGlobals->mountLockOnPrevEyeOffset.v[1] = ClientGlobals->mountLockOnPrevEyePoint.v[1] - p_predictedPlayerState->origin.v[1];
      ClientGlobals->mountLockOnPrevEyeOffset.v[2] = ClientGlobals->mountLockOnPrevEyePoint.v[2] - p_predictedPlayerState->origin.v[2];
      v56 = DCONST_DVARFLT_mount_aim_lockon_range;
      if ( !DCONST_DVARFLT_mount_aim_lockon_range && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_aim_lockon_range") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v56);
      value = v56->current.value;
      LOBYTE(v58) = 1;
      BestTarget = AimAssist_GetBestTarget(&ClientGlobals->aaSharedGlob, v58, value, ClientGlobals->aaSharedGlob.tweakables.mountLockOnRegionWidth, ClientGlobals->aaSharedGlob.tweakables.mountLockOnRegionHeight);
      v60 = 0;
      if ( BestTarget )
      {
        p_viewAxis = (float *)&ClientGlobals->viewAxis;
        if ( !IntersectLinePlane(&outOrigin, ClientGlobals->viewAxis.m, &BestTarget->aimPos, ClientGlobals->viewAxis.m, &ClientGlobals->mountLockOnPoint) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1398, ASSERT_TYPE_ASSERT, "(foundIntersection)", (const char *)&queryFormat, "foundIntersection") )
          __debugbreak();
        v60 = 1;
        ClientGlobals->mountLockOnValid = 1;
      }
      else if ( ClientGlobals->mountLockOnValid )
      {
        p_viewAxis = (float *)&ClientGlobals->viewAxis;
      }
      else
      {
        HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v82, 1, 0);
        HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v82, 0, p_predictedPlayerState->clientNum, 1, 1, 0, 1, 1);
        v82.m_ignoreTransparentVolumes = 1;
        clientNum = p_predictedPlayerState->clientNum;
        v63 = v84;
        if ( v84->HasCharacterInfo(v84, p_predictedPlayerState->clientNum) )
        {
          if ( v63->IsMP(v63) )
          {
            if ( (unsigned int)clientNum >= *(_DWORD *)&v63->pipViews[0].pipRefDef.radiantLiveLightsRaw[2].lightDef[28] )
            {
              LODWORD(outAimScreenPosa) = *(_DWORD *)&v63->pipViews[0].pipRefDef.radiantLiveLightsRaw[2].lightDef[28];
              LODWORD(durationa) = clientNum;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", durationa, outAimScreenPosa) )
                __debugbreak();
            }
            CharacterInfo = (const characterInfo_t *)(*(_QWORD *)&v63->pipViews[0].pipRefDef.radiantLiveLightsRaw[2].lightDef[12] + 14792 * clientNum);
          }
          else
          {
            CharacterInfo = CgGlobalsSP::GetCharacterInfo(v63, clientNum);
          }
          if ( CharacterInfo )
            v82.m_ignoreTeamCharacters = CharacterInfo->team;
        }
        outBounds.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
        outBounds.collisionBuffer = 0.0;
        outBounds.phaseSelection = All;
        outBounds.insideHitType = Physics_RaycastInsideHitType_InsideHits;
        *(_WORD *)&outBounds.collectInsideHits = 256;
        outBounds.contents = 2049;
        outBounds.ignoreBodies = &v82;
        ClosestResult = PhysicsQuery_GetClosestResult((Physics_WorldId)(3 * v9 + 2));
        if ( !ClosestResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 1422, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
          __debugbreak();
        HavokPhysics_CollisionQueryResult::Reset(ClosestResult, 1);
        p_viewAxis = (float *)&ClientGlobals->viewAxis;
        end.v[0] = (float)(value * ClientGlobals->viewAxis.m[0].v[0]) + outOrigin.v[0];
        end.v[1] = (float)(value * ClientGlobals->viewAxis.m[0].v[1]) + outOrigin.v[1];
        end.v[2] = (float)(value * ClientGlobals->viewAxis.m[0].v[2]) + outOrigin.v[2];
        Physics_Raycast((Physics_WorldId)(3 * v9 + 2), &outOrigin, &end, &outBounds, ClosestResult);
        if ( HavokPhysics_CollisionQueryResult::HasHit(ClosestResult) )
        {
          HavokPhysics_CollisionQueryResult::GetRaycastHitPosition(ClosestResult, 0, &ClientGlobals->mountLockOnPoint);
          ClientGlobals->mountLockOnValid = 1;
        }
        v66 = hkMemHeapAllocator();
        v82.m_ignoreBodies.m_size = 0;
        if ( v82.m_ignoreBodies.m_capacityAndFlags >= 0 )
          hkMemoryAllocator::bufFree2(v66, v82.m_ignoreBodies.m_data, 4, v82.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
        v82.m_ignoreBodies.m_data = NULL;
        v82.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
        v67 = hkMemHeapAllocator();
        v82.m_ignoreEntities.m_size = 0;
        if ( v82.m_ignoreEntities.m_capacityAndFlags >= 0 )
          hkMemoryAllocator::bufFree2(v67, v82.m_ignoreEntities.m_data, 8, v82.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
        v82.m_ignoreEntities.m_capacityAndFlags = 0x80000000;
      }
      if ( ClientGlobals->mountLockOnValid )
      {
        v68 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ClientGlobals->ps.sharedPS.weapFlags, ACTIVE, 0x11u);
        BG_GetMountEdgeToEyeDistance((const ContextMountType)p_predictedPlayerState->mountState.surface.type, &ClientGlobals->ps.sharedPS.weapon, v68, (float *)&tag, (float *)targetCount);
        v69 = (float)((float)((float)(p_viewAxis[1] * ClientGlobals->mountLockOnPoint.v[1]) + (float)(*p_viewAxis * ClientGlobals->mountLockOnPoint.v[0])) + (float)(p_viewAxis[2] * ClientGlobals->mountLockOnPoint.v[2])) - (float)((float)((float)(p_viewAxis[1] * p_predictedPlayerState->mountState.eyePoint.v[1]) + (float)(*p_viewAxis * p_predictedPlayerState->mountState.eyePoint.v[0])) + (float)(p_viewAxis[2] * p_predictedPlayerState->mountState.eyePoint.v[2]));
        v70 = DCONST_DVARFLT_mount_aim_lockon_range_min_beyond_edge;
        if ( !DCONST_DVARFLT_mount_aim_lockon_range_min_beyond_edge && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_aim_lockon_range_min_beyond_edge") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v70);
        if ( v69 >= (float)(*(float *)&tag + v70->current.value) )
        {
          v71 = DCONST_DVARBOOL_mount_aim_debug;
          if ( !DCONST_DVARBOOL_mount_aim_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_aim_debug") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v71);
          if ( v71->current.enabled )
          {
            v72 = &colorGreen;
            if ( v60 )
              v72 = &colorRed;
            CG_DebugStar(&ClientGlobals->mountLockOnPoint, v72, 0, frameCount);
          }
        }
        else
        {
          ClientGlobals->mountLockOnValid = 0;
        }
      }
    }
  }
  Profile_EndInternal(NULL);
}

/*
==============
AimAssist_UpdateScriptedMeleeTarget
==============
*/
void AimAssist_UpdateScriptedMeleeTarget(const AimAssistSharedGlobals *aaSharedGlob, AimOutput *output)
{
  const dvar_t *v4; 
  float scriptedMeleeRegionHeight; 
  float scriptedMeleeRegionWidth; 
  AimTargetFlags v7; 
  const AimScreenTarget *BestTarget; 
  const AimScreenTarget *v9; 
  unsigned int entIndex; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 

  output->scriptedMeleeTarget = 2047;
  if ( Com_GameMode_SupportsFeature(WEAPON_MANTLE_LADDER|0x80) )
  {
    v4 = DCONST_DVARMPFLT_scripted_melee_range;
    scriptedMeleeRegionHeight = aaSharedGlob->tweakables.scriptedMeleeRegionHeight;
    scriptedMeleeRegionWidth = aaSharedGlob->tweakables.scriptedMeleeRegionWidth;
    if ( !DCONST_DVARMPFLT_scripted_melee_range && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scripted_melee_range") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    LOBYTE(v7) = 2;
    BestTarget = AimAssist_GetBestTarget(aaSharedGlob, v7, v4->current.value, scriptedMeleeRegionWidth, scriptedMeleeRegionHeight);
    v9 = BestTarget;
    if ( BestTarget )
    {
      entIndex = BestTarget->entIndex;
      if ( entIndex >= 0x7FE )
      {
        LODWORD(v13) = 2046;
        LODWORD(v12) = entIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 3654, ASSERT_TYPE_ASSERT, "(unsigned)( screenTarget->entIndex ) < (unsigned)( ENTITYNUM_ORDINARY_END )", "screenTarget->entIndex doesn't index ENTITYNUM_ORDINARY_END\n\t%i not in [0, %i)", v12, v13) )
          __debugbreak();
      }
      v11 = v9->entIndex;
      if ( (unsigned int)(v11 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v11, "signed", v11) )
        __debugbreak();
      output->scriptedMeleeTarget = v11;
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
  __int64 v1; 
  AimAssistGlobals *ClientGlobals; 
  const dvar_t *v3; 
  AimAssistGlobals *v4; 
  const dvar_t *v5; 
  const dvar_t *v6; 
  const dvar_t *v7; 
  bool v8; 
  double MeleeAutoAimWidth; 
  bool v10; 
  double MeleeAutoAimHeight; 
  const dvar_t *v12; 
  const dvar_t *v13; 
  const dvar_t *v14; 
  const dvar_t *v15; 
  const dvar_t *v16; 
  const dvar_t *v17; 
  const dvar_t *v18; 
  const dvar_t *v19; 
  const dvar_t *v20; 
  const dvar_t *v21; 

  v1 = localClientNum;
  ClientGlobals = AimAssist_GetClientGlobals(localClientNum);
  v3 = DCONST_DVARFLT_aim_slowdown_region_width;
  v4 = ClientGlobals;
  if ( !DCONST_DVARFLT_aim_slowdown_region_width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_slowdown_region_width") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  v4->aaSharedGlob.tweakables.slowdownRegionWidth = AimAssist_GetClipWidthFromVirtualWidth((LocalClientNum_t)v1, &scrPlaceViewDisplay[v1], v3->current.value);
  v5 = DCONST_DVARMPFLT_aim_slowdown_region_height;
  if ( !DCONST_DVARMPFLT_aim_slowdown_region_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_slowdown_region_height") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  v4->aaSharedGlob.tweakables.slowdownRegionHeight = AimAssist_GetClipHeightFromVirtualHeight((LocalClientNum_t)v1, &scrPlaceViewDisplay[v1], v5->current.value);
  v6 = DCONST_DVARFLT_aim_autoaim_region_width;
  if ( !DCONST_DVARFLT_aim_autoaim_region_width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_autoaim_region_width") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  v4->aaSharedGlob.tweakables.autoAimRegionWidth = AimAssist_GetClipWidthFromVirtualWidth((LocalClientNum_t)v1, &scrPlaceViewDisplay[v1], v6->current.value) * v4->fovScaleInv;
  v7 = DCONST_DVARFLT_aim_autoaim_region_height;
  if ( !DCONST_DVARFLT_aim_autoaim_region_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_autoaim_region_height") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  v4->aaSharedGlob.tweakables.autoAimRegionHeight = AimAssist_GetClipHeightFromVirtualHeight((LocalClientNum_t)v1, &scrPlaceViewDisplay[v1], v7->current.value) * v4->fovScaleInv;
  v8 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&v4->ps.sharedPS.weapFlags, ACTIVE, 0x11u);
  MeleeAutoAimWidth = BG_GetMeleeAutoAimWidth(&v4->ps.sharedPS.weapon, v8);
  v4->aaSharedGlob.tweakables.autoMeleeRegionWidth = AimAssist_GetClipWidthFromVirtualWidth((LocalClientNum_t)v1, &scrPlaceViewDisplay[v1], *(float *)&MeleeAutoAimWidth) * v4->fovScaleInv;
  v10 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&v4->ps.sharedPS.weapFlags, ACTIVE, 0x11u);
  MeleeAutoAimHeight = BG_GetMeleeAutoAimHeight(&v4->ps.sharedPS.weapon, v10);
  v4->aaSharedGlob.tweakables.autoMeleeRegionHeight = AimAssist_GetClipHeightFromVirtualHeight((LocalClientNum_t)v1, &scrPlaceViewDisplay[v1], *(float *)&MeleeAutoAimHeight) * v4->fovScaleInv;
  v12 = DCONST_DVARMPINT_scripted_melee_width;
  if ( !DCONST_DVARMPINT_scripted_melee_width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scripted_melee_width") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  v4->aaSharedGlob.tweakables.scriptedMeleeRegionWidth = AimAssist_GetClipWidthFromVirtualWidth((LocalClientNum_t)v1, &scrPlaceViewDisplay[v1], (float)v12->current.integer) * v4->fovScaleInv;
  v13 = DCONST_DVARMPINT_scripted_melee_height;
  if ( !DCONST_DVARMPINT_scripted_melee_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scripted_melee_height") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  v4->aaSharedGlob.tweakables.scriptedMeleeRegionHeight = AimAssist_GetClipHeightFromVirtualHeight((LocalClientNum_t)v1, &scrPlaceViewDisplay[v1], (float)v13->current.integer) * v4->fovScaleInv;
  v14 = DVARFLT_aim_lockon_region_width;
  if ( !DVARFLT_aim_lockon_region_width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_lockon_region_width") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  v4->aaSharedGlob.tweakables.lockOnRegionWidth = AimAssist_GetClipWidthFromVirtualWidth((LocalClientNum_t)v1, &scrPlaceViewDisplay[v1], v14->current.value);
  v15 = DVARFLT_aim_lockon_region_height;
  if ( !DVARFLT_aim_lockon_region_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_lockon_region_height") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  v4->aaSharedGlob.tweakables.lockOnRegionHeight = AimAssist_GetClipHeightFromVirtualHeight((LocalClientNum_t)v1, &scrPlaceViewDisplay[v1], v15->current.value);
  v16 = DCONST_DVARFLT_mount_aim_lockon_region_width;
  if ( !DCONST_DVARFLT_mount_aim_lockon_region_width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_aim_lockon_region_width") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  v4->aaSharedGlob.tweakables.mountLockOnRegionWidth = AimAssist_GetClipWidthFromVirtualWidth((LocalClientNum_t)v1, &scrPlaceViewDisplay[v1], v16->current.value);
  v17 = DCONST_DVARFLT_mount_aim_lockon_region_height;
  if ( !DCONST_DVARFLT_mount_aim_lockon_region_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_aim_lockon_region_height") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  v4->aaSharedGlob.tweakables.mountLockOnRegionHeight = AimAssist_GetClipHeightFromVirtualHeight((LocalClientNum_t)v1, &scrPlaceViewDisplay[v1], v17->current.value);
  v18 = DCONST_DVARFLT_aim_slowdown_far_region_width;
  if ( !DCONST_DVARFLT_aim_slowdown_far_region_width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_slowdown_far_region_width") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  v4->aaSharedGlob.tweakables.slowdownAdvancedFarRegionWidth = AimAssist_GetClipWidthFromVirtualWidth((LocalClientNum_t)v1, &scrPlaceViewDisplay[v1], v18->current.value);
  v19 = DCONST_DVARFLT_aim_slowdown_far_region_height;
  if ( !DCONST_DVARFLT_aim_slowdown_far_region_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_slowdown_far_region_height") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  v4->aaSharedGlob.tweakables.slowdownAdvancedFarRegionHeight = AimAssist_GetClipHeightFromVirtualHeight((LocalClientNum_t)v1, &scrPlaceViewDisplay[v1], v19->current.value);
  v20 = DCONST_DVARFLT_aim_advanced_slowdown_region_width;
  if ( !DCONST_DVARFLT_aim_advanced_slowdown_region_width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_advanced_slowdown_region_width") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v20);
  v4->aaSharedGlob.tweakables.slowdownAdvancedRegionWidth = AimAssist_GetClipWidthFromVirtualWidth((LocalClientNum_t)v1, &scrPlaceViewDisplay[v1], v20->current.value);
  v21 = DCONST_DVARFLT_aim_advanced_slowdown_region_height;
  if ( !DCONST_DVARFLT_aim_advanced_slowdown_region_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "aim_advanced_slowdown_region_height") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  v4->aaSharedGlob.tweakables.slowdownAdvancedRegionHeight = AimAssist_GetClipHeightFromVirtualHeight((LocalClientNum_t)v1, &scrPlaceViewDisplay[v1], v21->current.value);
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
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  bool result; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 

  if ( !aaGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 611, ASSERT_TYPE_ASSERT, "(aaGlob)", (const char *)&queryFormat, "aaGlob") )
    __debugbreak();
  v6 = in->v[0];
  v7 = in->v[1];
  v8 = in->v[2];
  v9 = (float)((float)((float)(v7 * aaGlob->screenMtx.m[3].v[1]) + (float)(in->v[0] * aaGlob->screenMtx.m[3].v[0])) + (float)(v8 * aaGlob->screenMtx.m[3].v[2])) + aaGlob->screenMtx.m[3].v[3];
  if ( v9 <= 0.0 )
    return 0;
  v11 = aaGlob->screenMtx.m[1].v[1];
  v12 = aaGlob->screenMtx.m[1].v[0];
  result = 1;
  v13 = aaGlob->screenMtx.m[1].v[2];
  v14 = aaGlob->screenMtx.m[1].v[3];
  v15 = aaGlob->screenMtx.m[2].v[0];
  v16 = aaGlob->screenMtx.m[2].v[1];
  v17 = aaGlob->screenMtx.m[2].v[2];
  v18 = aaGlob->screenMtx.m[2].v[3];
  out->v[0] = (float)((float)((float)((float)(v7 * aaGlob->screenMtx.m[0].v[1]) + (float)(v6 * aaGlob->screenMtx.m[0].v[0])) + (float)(v8 * aaGlob->screenMtx.m[0].v[2])) + aaGlob->screenMtx.m[0].v[3]) / v9;
  out->v[1] = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)((float)(v7 * v11) + (float)(v6 * v12)) + (float)(v8 * v13)) + v14) / v9) ^ _xmm);
  out->v[2] = (float)((float)((float)((float)(v6 * v15) + (float)(v7 * v16)) + (float)(v8 * v17)) + v18) / v9;
  return result;
}

/*
==============
BG_AimAssist_ApplyAutoMelee
==============
*/
void BG_AimAssist_ApplyAutoMelee(const BgHandler *pmoveHandler, const AimInput *input, AimOutput *output, const BgWeaponMap *weaponMap, const playerState_s *ps, AimAssistSharedGlobals *aaSharedGlob, const AimAssistSharedPlayerState *aaSharedPS, const WorldUpReferenceFrame *refFrame)
{
  double MeleeRange; 
  AimTargetFlags v13; 
  const AimScreenTarget *BestTarget; 
  unsigned __int16 *v15; 
  unsigned int entIndex; 
  int weaponState; 
  bool v18; 
  int meleeChargeEnt; 
  int ShouldLockView; 
  int v21; 
  const entityState_t *EntityState; 
  AimAssistSharedGlobals *v23; 

  if ( !refFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 3561, ASSERT_TYPE_ASSERT, "(refFrame)", (const char *)&queryFormat, "refFrame") )
    __debugbreak();
  if ( !input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 3562, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  if ( !output && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 3563, ASSERT_TYPE_ASSERT, "(output)", (const char *)&queryFormat, "output") )
    __debugbreak();
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
    MeleeRange = BG_GetMeleeRange(weaponMap, ps, 1);
    LOBYTE(v13) = 2;
    BestTarget = AimAssist_GetBestTarget(aaSharedGlob, v13, *(float *)&MeleeRange, aaSharedGlob->tweakables.autoMeleeRegionWidth, aaSharedGlob->tweakables.autoMeleeRegionHeight);
    v15 = (unsigned __int16 *)BestTarget;
    if ( BestTarget )
    {
      entIndex = BestTarget->entIndex;
      if ( entIndex >= 0x7FE )
      {
        LODWORD(v23) = entIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 3469, ASSERT_TYPE_ASSERT, "(unsigned)( screenTarget->entIndex ) < (unsigned)( ENTITYNUM_ORDINARY_END )", "screenTarget->entIndex doesn't index ENTITYNUM_ORDINARY_END\n\t%i not in [0, %i)", v23, 2046) )
          __debugbreak();
      }
      output->meleeChargeEnt = *v15;
    }
  }
  else
  {
    v18 = 0;
    if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x22u) )
    {
      weaponState = ps->weapState[0].weaponState;
      if ( (unsigned int)(weaponState - 7) <= 5 || weaponState == 50 )
        v18 = 1;
    }
    if ( (aaSharedPS->weaponState == 24 || (unsigned int)(ps->weapState[0].weaponState - 22) > 2) && !v18 )
      goto LABEL_15;
    meleeChargeEnt = aaSharedPS->meleeChargeEnt;
    if ( meleeChargeEnt < 0 || (unsigned int)meleeChargeEnt > 0x7FE )
      goto LABEL_15;
    if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 3614, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    ShouldLockView = BG_MeleeChargeShouldLockView(weaponMap, ps, pmoveHandler);
    v21 = ShouldLockView;
    if ( (unsigned int)(aaSharedPS->weaponState - 22) <= 2 )
    {
      if ( !ShouldLockView )
        goto LABEL_15;
      EntityState = BG_GetEntityState(pmoveHandler, aaSharedPS->meleeChargeEnt);
      if ( BG_IsRagdollTrajectory(&EntityState->lerp.pos) )
        goto LABEL_15;
    }
    if ( v21 && !BG_IsThirdPersonMode(weaponMap, ps) )
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
  const dvar_t *v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  bool v18; 
  double MeleeAutoAimLerp; 
  float v20; 
  double v21; 
  float v22; 
  double v23; 
  float v24; 
  bool v25; 
  double MeleeAutoAimMaxPitchMovement; 
  float v29; 
  double v30; 
  bool v33; 
  double MeleeAutoAimMaxYawMovement; 
  float v35; 
  double v36; 
  float v39; 
  vec3_t angles; 
  vec3_t v43; 
  vec3_t outAimPos; 
  vec3_t vec; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 3479, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !refFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 3480, ASSERT_TYPE_ASSERT, "(refFrame)", (const char *)&queryFormat, "refFrame") )
    __debugbreak();
  if ( !aaSharedPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 3481, ASSERT_TYPE_ASSERT, "(aaSharedPS)", (const char *)&queryFormat, "aaSharedPS") )
    __debugbreak();
  if ( !aaSharedGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 3482, ASSERT_TYPE_ASSERT, "(aaSharedGlob)", (const char *)&queryFormat, "aaSharedGlob") )
    __debugbreak();
  if ( !input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 3483, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  meleeChargeEnt = aaSharedPS->meleeChargeEnt;
  if ( (meleeChargeEnt < 0 || (unsigned int)meleeChargeEnt > 0x7FE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 3484, ASSERT_TYPE_ASSERT, "(PM_MeleeValidChargeTarget( aaSharedPS->meleeChargeEnt ))", (const char *)&queryFormat, "PM_MeleeValidChargeTarget( aaSharedPS->meleeChargeEnt )") )
    __debugbreak();
  if ( BG_CalcMeleeAimPos(pmoveHandler, ps, weaponMap, aaSharedPS->meleeChargeEnt, &outAimPos) )
  {
    v13 = DCONST_DVARBOOL_melee_debug;
    if ( !DCONST_DVARBOOL_melee_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "melee_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    if ( v13->current.enabled )
      CG_DebugSphere(&outAimPos, 2.0, &colorLtBlue, 0, 0);
    if ( aaSharedGlob->autoMeleeState != AIM_MELEE_STATE_UPDATING )
    {
      v14 = aaSharedGlob->viewAngles.v[1];
      angles.v[0] = aaSharedGlob->viewAngles.v[0];
      angles.v[2] = aaSharedGlob->viewAngles.v[2];
      angles.v[1] = v14;
      WorldUpReferenceFrame::RemoveReferenceFrameFromAngles((WorldUpReferenceFrame *)refFrame, &angles);
      v15 = angles.v[0];
      v16 = angles.v[1];
      aaSharedGlob->autoMeleePitch = angles.v[0];
      aaSharedGlob->autoMeleeYaw = v16;
      aaSharedGlob->autoMeleeInitialPitch = v15;
      aaSharedGlob->autoMeleeInitialYaw = v16;
      aaSharedGlob->autoMeleeState = AIM_MELEE_STATE_UPDATING;
    }
    v17 = outAimPos.v[1] - aaSharedGlob->eyeOrigin.v[1];
    vec.v[0] = outAimPos.v[0] - aaSharedGlob->eyeOrigin.v[0];
    vec.v[2] = outAimPos.v[2] - aaSharedGlob->eyeOrigin.v[2];
    vec.v[1] = v17;
    vectoangles(&vec, &v43);
    WorldUpReferenceFrame::RemoveReferenceFrameFromAngles((WorldUpReferenceFrame *)refFrame, &v43);
    if ( aaSharedPS->isThirdPerson )
      v43.v[0] = v43.v[0] + -15.0;
    v18 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&aaSharedPS->weapFlags, ACTIVE, 0x11u);
    MeleeAutoAimLerp = BG_GetMeleeAutoAimLerp(&aaSharedPS->weapon, v18);
    v20 = *(float *)&MeleeAutoAimLerp;
    v21 = DiffTrackAngle(v43.v[0], aaSharedGlob->autoMeleePitch, *(float *)&MeleeAutoAimLerp, input->deltaTime);
    v22 = *(float *)&v21;
    v23 = DiffTrackAngle(v43.v[1], aaSharedGlob->autoMeleeYaw, v20, input->deltaTime);
    v24 = *(float *)&v23;
    v25 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&aaSharedPS->weapFlags, ACTIVE, 0x11u);
    MeleeAutoAimMaxPitchMovement = BG_GetMeleeAutoAimMaxPitchMovement(&aaSharedPS->weapon, v25);
    _XMM12 = LODWORD(FLOAT_N1_0);
    _XMM7 = 0i64;
    v29 = *(float *)&MeleeAutoAimMaxPitchMovement;
    if ( *(float *)&MeleeAutoAimMaxPitchMovement > 0.0 )
    {
      v30 = AngleDelta(v22, aaSharedGlob->autoMeleeInitialPitch);
      if ( COERCE_FLOAT(LODWORD(v30) & _xmm) > v29 )
      {
        __asm
        {
          vcmpless xmm0, xmm7, xmm0
          vblendvps xmm0, xmm12, xmm11, xmm0
        }
        v22 = (float)(*(float *)&_XMM0 * v29) + aaSharedGlob->autoMeleeInitialPitch;
      }
    }
    v33 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&aaSharedPS->weapFlags, ACTIVE, 0x11u);
    MeleeAutoAimMaxYawMovement = BG_GetMeleeAutoAimMaxYawMovement(&aaSharedPS->weapon, v33);
    v35 = *(float *)&MeleeAutoAimMaxYawMovement;
    if ( *(float *)&MeleeAutoAimMaxYawMovement > 0.0 )
    {
      v36 = AngleDelta(v24, aaSharedGlob->autoMeleeInitialYaw);
      if ( COERCE_FLOAT(LODWORD(v36) & _xmm) > v35 )
      {
        __asm
        {
          vcmpless xmm0, xmm7, xmm0
          vblendvps xmm0, xmm12, xmm11, xmm0
        }
        v24 = (float)(*(float *)&_XMM0 * v35) + aaSharedGlob->autoMeleeInitialYaw;
      }
    }
    v39 = (float)(v24 - aaSharedGlob->autoMeleeYaw) * 0.0027777778;
    __asm { vroundss xmm2, xmm7, xmm1, 1 }
    output->pitch = (float)((float)((float)((float)(v22 - aaSharedGlob->autoMeleePitch) * 0.0027777778) - *(float *)&_XMM2) * 360.0) + output->pitch;
    __asm { vroundss xmm3, xmm7, xmm1, 1 }
    output->yaw = (float)((float)(v39 - *(float *)&_XMM3) * 360.0) + output->yaw;
    aaSharedGlob->autoMeleePitch = v22;
    aaSharedGlob->autoMeleeYaw = v24;
  }
}

/*
==============
BG_AimAssist_CanSelectMeleeTarget
==============
*/
__int64 BG_AimAssist_CanSelectMeleeTarget(const AimInput *input, const BgWeaponMap *weaponMap, const playerState_s *ps, const AimAssistSharedGlobals *aaSharedGlob, const AimAssistSharedPlayerState *aaSharedPS)
{
  bool v9; 
  bool v10; 
  int v11; 
  unsigned int v12; 
  const WeaponDef *v13; 
  Weapon r_weapon; 

  if ( !input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 3415, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  if ( !aaSharedGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 3416, ASSERT_TYPE_ASSERT, "(aaSharedGlob)", (const char *)&queryFormat, "aaSharedGlob") )
    __debugbreak();
  if ( !aaSharedPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 3417, ASSERT_TYPE_ASSERT, "(aaSharedPS)", (const char *)&queryFormat, "aaSharedPS") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.cpp", 3418, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  r_weapon = *BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  v9 = BG_UsingAlternate(ps);
  v10 = v9;
  v11 = 1;
  v12 = (aaSharedGlob->prevButtons & 4) == 0 && (input->buttons & 4) != 0;
  if ( r_weapon.weaponIdx && !BG_IsAimDownSight(&r_weapon, v9) )
  {
    if ( v10 && BG_IsThrowingAxe(&r_weapon) )
      goto LABEL_26;
    v13 = BG_WeaponDef(&r_weapon, v10);
    if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1414, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
      __debugbreak();
    if ( v13->supportsAlternateMelee )
    {
LABEL_26:
      if ( (aaSharedGlob->prevButtons & 0x20000) != 0 || (input->buttons & 0x20000) == 0 )
        v11 = 0;
      v12 |= v11;
    }
  }
  return v12;
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

