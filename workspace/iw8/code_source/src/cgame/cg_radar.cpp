/*
==============
CG_Radar_UpdateJammingLevel
==============
*/

void __fastcall CG_Radar_UpdateJammingLevel(const LocalClientNum_t localClientNum)
{
  ?CG_Radar_UpdateJammingLevel@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Radar_ClearJamming
==============
*/

void __fastcall CG_Radar_ClearJamming(const LocalClientNum_t localClientNum)
{
  ?CG_Radar_ClearJamming@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Radar_CalculateJammingLevel
==============
*/

void __fastcall CG_Radar_CalculateJammingLevel(const LocalClientNum_t localClientNum)
{
  ?CG_Radar_CalculateJammingLevel@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Radar_GetJammingLevel
==============
*/

double __fastcall CG_Radar_GetJammingLevel(const LocalClientNum_t localClientNum)
{
  double result; 

  *(float *)&result = ?CG_Radar_GetJammingLevel@@YAMW4LocalClientNum_t@@@Z(localClientNum);
  return result;
}

/*
==============
CG_Radar_CalculateJammingLevel
==============
*/
void CG_Radar_CalculateJammingLevel(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  const dvar_t *v3; 
  float value; 
  const dvar_t *v5; 
  float v6; 
  __int128 radarJammedDist_low; 
  __int128 v8; 
  __int128 v9; 
  const dvar_t *v10; 
  const dvar_t *v11; 
  const dvar_t *v13; 
  const char *v14; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_radar.cpp", 56, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !CG_Radar_IsJammed(localClientNum) || CG_View_ClientHasAntiJammer(localClientNum) )
  {
    LocalClientGlobals->radarJamLevel = 0;
    return;
  }
  v3 = DVARFLT_scramblerJamDistMin;
  if ( !DVARFLT_scramblerJamDistMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scramblerJamDistMin") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  value = v3->current.value;
  v5 = DVARFLT_scramblerJamDistMax;
  if ( !DVARFLT_scramblerJamDistMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scramblerJamDistMax") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  v6 = v5->current.value - value;
  if ( v6 == 0.0 )
  {
    LocalClientGlobals->radarJamLevel = 0;
    return;
  }
  radarJammedDist_low = LODWORD(LocalClientGlobals->radarJammedDist);
  if ( *(float *)&radarJammedDist_low >= value )
  {
    v9 = LODWORD(FLOAT_1_0);
    *(float *)&v9 = 1.0 - (float)((float)(*(float *)&radarJammedDist_low - value) / v6);
    v8 = v9;
  }
  else
  {
    v8 = LODWORD(FLOAT_1_0);
  }
  v10 = DVARBOOL_scramblerJamSinCurve;
  if ( !DVARBOOL_scramblerJamSinCurve && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scramblerJamSinCurve") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.enabled )
  {
    *((_QWORD *)&radarJammedDist_low + 1) = *((_QWORD *)&v8 + 1);
    sinf_0(*(float *)&v8 * 1.5707964);
  }
  v11 = DCONST_DVARINT_bg_counterUAVStrengthLevelFullyJammed;
  _XMM6 = 0i64;
  if ( !DCONST_DVARINT_bg_counterUAVStrengthLevelFullyJammed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_counterUAVStrengthLevelFullyJammed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( LocalClientGlobals->predictedPlayerState.radarStrength <= v11->current.integer )
  {
    v13 = DCONST_DVARFLT_bg_counterUAVRadarJamLevelFullyJammed;
    v14 = "bg_counterUAVRadarJamLevelFullyJammed";
LABEL_32:
    *(double *)&radarJammedDist_low = Dvar_GetFloat_Internal_DebugName(v13, v14);
    _XMM6 = radarJammedDist_low;
    goto LABEL_33;
  }
  if ( LocalClientGlobals->predictedPlayerState.radarStrength <= Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_bg_counterUAVStrengthLevelShowMapOnly, "bg_counterUAVStrengthLevelShowMapOnly") )
  {
    v13 = DCONST_DVARFLT_bg_counterUAVRadarJamLevelShowMapOnly;
    v14 = "bg_counterUAVRadarJamLevelShowMapOnly";
    goto LABEL_32;
  }
  if ( LocalClientGlobals->predictedPlayerState.radarStrength <= Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_bg_counterUAVStrengthLevelShowFriendlyOnly, "bg_counterUAVStrengthLevelShowFriendlyOnly") )
  {
    v13 = DCONST_DVARFLT_bg_counterUAVRadarJamLevelShowFriendlyOnly;
    v14 = "bg_counterUAVRadarJamLevelShowFriendlyOnly";
    goto LABEL_32;
  }
LABEL_33:
  if ( LocalClientGlobals->rsdJamming )
    Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_counterUAVRadarJamLevelFullyJammed, "bg_counterUAVRadarJamLevelFullyJammed");
  __asm
  {
    vmaxss  xmm1, xmm6, xmm8
    vmaxss  xmm0, xmm1, xmm7
  }
  LocalClientGlobals->radarJamLevel = *(float *)&_XMM0;
}

/*
==============
CG_Radar_ClearJamming
==============
*/
void CG_Radar_ClearJamming(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( LocalClientGlobals )
  {
    LocalClientGlobals->radarJammedDist = -1.0;
    LocalClientGlobals->rsdJamming = 0;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_radar.cpp", 40, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    MEMORY[0x59EB8] = -1082130432;
    MEMORY[0x59EC0] = 0;
  }
}

/*
==============
CG_Radar_GetJammingLevel
==============
*/
float CG_Radar_GetJammingLevel(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_radar.cpp", 123, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|WEAPON_OFFHAND_END) )
    return LocalClientGlobals->currentRadarJamLevel;
  CG_Radar_CalculateJammingLevel(localClientNum);
  return LocalClientGlobals->radarJamLevel;
}

/*
==============
CG_Radar_IsJammed
==============
*/
_BOOL8 CG_Radar_IsJammed(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  const dvar_t *v2; 
  const dvar_t *v3; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|WEAPON_OFFHAND_END) && (LocalClientGlobals->predictedPlayerState.radarBlocked || LocalClientGlobals->currentRadarJamLevel > 0.0) || LocalClientGlobals->rsdJamming )
    return 1i64;
  v2 = DVARFLT_scramblerJamDistMin;
  if ( !DVARFLT_scramblerJamDistMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scramblerJamDistMin") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.value >= LocalClientGlobals->radarJammedDist )
    return 0i64;
  v3 = DVARFLT_scramblerJamDistMax;
  if ( !DVARFLT_scramblerJamDistMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scramblerJamDistMax") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  return v3->current.value >= LocalClientGlobals->radarJammedDist;
}

/*
==============
CG_Radar_UpdateJammingLevel
==============
*/
void CG_Radar_UpdateJammingLevel(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  const dvar_t *v3; 
  float radarJamLevel; 
  float currentRadarJamLevel; 
  float v6; 
  double v7; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_radar.cpp", 145, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_SMOOTH_SCRAMBLER ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_SMOOTH_SCRAMBLER )") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_radar.cpp", 148, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( CG_Radar_IsJammed(localClientNum) && -1.0 == LocalClientGlobals->radarJammedDist )
  {
    v3 = DVARFLT_scramblerJamDistMax;
    if ( !DVARFLT_scramblerJamDistMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scramblerJamDistMax") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    LODWORD(LocalClientGlobals->radarJammedDist) = v3->current.integer;
  }
  CG_Radar_CalculateJammingLevel(localClientNum);
  radarJamLevel = LocalClientGlobals->radarJamLevel;
  currentRadarJamLevel = LocalClientGlobals->currentRadarJamLevel;
  v6 = radarJamLevel - currentRadarJamLevel;
  if ( (float)(v6 * v6) < 0.0099999998 )
  {
    LocalClientGlobals->currentRadarJamLevel = radarJamLevel;
    currentRadarJamLevel = radarJamLevel;
  }
  if ( radarJamLevel != currentRadarJamLevel )
  {
    currentRadarJamLevel = (float)(v6 * 0.06666667) + currentRadarJamLevel;
    LocalClientGlobals->currentRadarJamLevel = currentRadarJamLevel;
  }
  v7 = I_fclamp(currentRadarJamLevel, 0.0, 1.0);
  LocalClientGlobals->currentRadarJamLevel = *(float *)&v7;
}

