/*
==============
BG_ClearViewState
==============
*/

void __fastcall BG_ClearViewState(PlayerViewState *const viewState)
{
  ?BG_ClearViewState@@YAXQEAUPlayerViewState@@@Z(viewState);
}

/*
==============
BG_GetScriptGunAngleOffset
==============
*/

void __fastcall BG_GetScriptGunAngleOffset(const playerState_s *ps, const BgHandler *handler, vec3_t *outCombinedAngles)
{
  ?BG_GetScriptGunAngleOffset@@YAXPEBUplayerState_s@@PEBVBgHandler@@AEATvec3_t@@@Z(ps, handler, outCombinedAngles);
}

/*
==============
BG_GetScriptGunPosOffset
==============
*/

void __fastcall BG_GetScriptGunPosOffset(const playerState_s *ps, const BgHandler *handler, vec3_t *outOffset)
{
  ?BG_GetScriptGunPosOffset@@YAXPEBUplayerState_s@@PEBVBgHandler@@AEATvec3_t@@@Z(ps, handler, outOffset);
}

/*
==============
BG_CalculateWeaponMovement
==============
*/

void __fastcall BG_CalculateWeaponMovement(const WeaponMovementParams *const params, WeaponMovementState *ws, float *outTiltOffset, float *outMovementTiltOffset, vec3_t *outStandAnglesPivotOffset, vec3_t *outDuckedAnglesPivotOffset, vec3_t *outCombinedAngles, vec3_t (*outAnglesCategorized)[30], vec3_t *outOrigin)
{
  ?BG_CalculateWeaponMovement@@YAXQEBUWeaponMovementParams@@PEAUWeaponMovementState@@PEAM2AEATvec3_t@@33AEAY0BO@T3@3@Z(params, ws, outTiltOffset, outMovementTiltOffset, outStandAnglesPivotOffset, outDuckedAnglesPivotOffset, outCombinedAngles, outAnglesCategorized, outOrigin);
}

/*
==============
BG_CalculateViewMovement_Angles
==============
*/

void __fastcall BG_CalculateViewMovement_Angles(const ViewMovementParams *const params, ViewMovementState *vs, vec3_t *outAngles)
{
  ?BG_CalculateViewMovement_Angles@@YAXQEBUViewMovementParams@@PEAUViewMovementState@@AEATvec3_t@@@Z(params, vs, outAngles);
}

/*
==============
BG_AdvancedIdle_GetFrequencyIndex
==============
*/

int __fastcall BG_AdvancedIdle_GetFrequencyIndex(const BgWeaponMap *weaponMap, const playerState_s *ps, const int idleMotionIndex)
{
  return ?BG_AdvancedIdle_GetFrequencyIndex@@YAHPEBVBgWeaponMap@@PEBUplayerState_s@@H@Z(weaponMap, ps, idleMotionIndex);
}

/*
==============
BG_ApplyViewBobAndScriptOffsets
==============
*/

void __fastcall BG_ApplyViewBobAndScriptOffsets(const playerState_s *ps, const int serverTime, const int (*packedBobCycle)[2], const BgHandler *handler, vec3_t *outOrigin)
{
  ?BG_ApplyViewBobAndScriptOffsets@@YAXPEBUplayerState_s@@HAEAY01$$CBHPEBVBgHandler@@AEATvec3_t@@@Z(ps, serverTime, packedBobCycle, handler, outOrigin);
}

/*
==============
BG_GetScriptViewPosOffset
==============
*/

void __fastcall BG_GetScriptViewPosOffset(const playerState_s *ps, const BgHandler *handler, vec3_t *outOffset)
{
  ?BG_GetScriptViewPosOffset@@YAXPEBUplayerState_s@@PEBVBgHandler@@AEATvec3_t@@@Z(ps, handler, outOffset);
}

/*
==============
BG_ShouldCalculateWeaponIdleMovement
==============
*/

bool __fastcall BG_ShouldCalculateWeaponIdleMovement(const playerState_s *ps)
{
  return ?BG_ShouldCalculateWeaponIdleMovement@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_AdvancedIdle_GetTime
==============
*/

double __fastcall BG_AdvancedIdle_GetTime(const BgWeaponMap *weaponMap, const playerState_s *ps, const int idleMotionIndex)
{
  double result; 

  *(float *)&result = ?BG_AdvancedIdle_GetTime@@YAMPEBVBgWeaponMap@@PEBUplayerState_s@@H@Z(weaponMap, ps, idleMotionIndex);
  return result;
}

/*
==============
BG_GetScriptViewAngleOffset
==============
*/

void __fastcall BG_GetScriptViewAngleOffset(const playerState_s *ps, const BgHandler *handler, vec3_t *outOffset)
{
  ?BG_GetScriptViewAngleOffset@@YAXPEBUplayerState_s@@PEBVBgHandler@@AEATvec3_t@@@Z(ps, handler, outOffset);
}

/*
==============
BG_AdjustTargScaleForADSTime
==============
*/
float BG_AdjustTargScaleForADSTime(const BgWeaponMap *weaponMap, const playerState_s *ps, float fOriginalTargScale)
{
  const Weapon *CurrentWeaponForPlayer; 
  bool v6; 
  float fWeaponPosFrac; 
  double v8; 
  float result; 
  float adsIdleLerpTime; 
  float adsIdleLerpStartTime; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 162, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 163, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  v6 = BG_UsingAlternate(ps);
  if ( BG_UsesContinousAdsIdleTransiton(CurrentWeaponForPlayer, v6) )
    return fOriginalTargScale;
  fWeaponPosFrac = ps->weapCommon.fWeaponPosFrac;
  if ( fWeaponPosFrac != 1.0 )
  {
    result = 0.0;
    if ( fWeaponPosFrac != 0.0 && !ps->weapCommon.adsStartTime )
      return result;
    return fOriginalTargScale;
  }
  BG_GetADSIdleLerpTime(CurrentWeaponForPlayer, v6, &adsIdleLerpStartTime, &adsIdleLerpTime);
  if ( adsIdleLerpTime == 0.0 )
    return fOriginalTargScale;
  v8 = I_fclamp((float)((float)((float)(ps->serverTime - ps->weapCommon.adsStartTime) * 0.001) - adsIdleLerpStartTime) / adsIdleLerpTime, 0.0, 1.0);
  if ( *(float *)&v8 >= 0.0 && *(float *)&v8 < 1.0 )
    *(float *)&v8 = (float)((float)((float)((float)(*(float *)&v8 * 6.0) - 15.0) * *(float *)&v8) + 10.0) * (float)((float)(*(float *)&v8 * *(float *)&v8) * *(float *)&v8);
  return *(float *)&v8 * fOriginalTargScale;
}

/*
==============
BG_AdvancedIdle_BuildSpline
==============
*/
void BG_AdvancedIdle_BuildSpline(const playerState_s *ps, const int idleMotionIdx, const int frequencyIndex, const bool isViewMotion, BSplineRelaxedCBezier *outSpline)
{
  int v9; 
  const dvar_t *v10; 
  bool IsServerThread; 
  const char *v12; 
  __int64 v13; 
  int v14; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 352, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !outSpline && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 353, ASSERT_TYPE_ASSERT, "(outSpline)", (const char *)&queryFormat, "outSpline") )
    __debugbreak();
  v9 = 16811 * (frequencyIndex + 1);
  if ( isViewMotion )
    v9 = 17891 * (frequencyIndex + 1);
  BG_BuildRandomPatternSpline(ps->weapCommon.adsStartTime + v9, outSpline);
  v10 = DCONST_DVARBOOL_bg_advancedIdleDebug;
  if ( !DCONST_DVARBOOL_bg_advancedIdleDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_advancedIdleDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.enabled )
  {
    IsServerThread = Sys_IsServerThread();
    v12 = "high";
    if ( !idleMotionIdx )
      v12 = "low";
    v13 = 67i64;
    if ( IsServerThread )
      v13 = 83i64;
    v14 = 34;
    if ( IsServerThread )
      v14 = 15;
    Com_Printf(v14, "[%c] Built new idle motion spline freq[%d] type[%s]\n", v13, (unsigned int)frequencyIndex, v12);
  }
}

/*
==============
BG_AdvancedIdle_GetFrequencyIndex
==============
*/
__int64 BG_AdvancedIdle_GetFrequencyIndex(const BgWeaponMap *weaponMap, const playerState_s *ps, const int idleMotionIndex)
{
  const dvar_t *v6; 
  int integer; 
  bool v8; 
  const Weapon *ViewmodelWeapon; 
  int IdleCycleStartTime; 
  int weaponIdleTime2; 
  int v12; 
  __int64 v14; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2090, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)idleMotionIndex > 1 )
  {
    LODWORD(v14) = idleMotionIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2091, ASSERT_TYPE_ASSERT, "( 0 ) <= ( idleMotionIndex ) && ( idleMotionIndex ) <= ( 1 )", "idleMotionIndex not in [0, 1]\n\t%i not in [%i, %i]", v14, 0i64, 1) )
      __debugbreak();
  }
  v6 = DCONST_DVARINT_bg_advancedIdleFrequency;
  if ( !DCONST_DVARINT_bg_advancedIdleFrequency && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_advancedIdleFrequency") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  integer = v6->current.integer;
  if ( integer <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2094, ASSERT_TYPE_ASSERT, "(frequency > 0)", (const char *)&queryFormat, "frequency > 0") )
    __debugbreak();
  v8 = BG_UsingAlternate(ps);
  ViewmodelWeapon = BG_GetViewmodelWeapon(weaponMap, ps);
  IdleCycleStartTime = BG_GetIdleCycleStartTime(ViewmodelWeapon, v8, ps);
  if ( idleMotionIndex )
    weaponIdleTime2 = ps->weapCommon.weaponIdleTime2;
  else
    weaponIdleTime2 = ps->weapCommon.weaponIdleTime;
  v12 = weaponIdleTime2 - IdleCycleStartTime;
  if ( v12 < 0 )
    v12 = 0;
  return (unsigned int)(v12 / integer);
}

/*
==============
BG_AdvancedIdle_GetTime
==============
*/
double BG_AdvancedIdle_GetTime(const BgWeaponMap *weaponMap, const playerState_s *ps, const int idleMotionIndex)
{
  const dvar_t *v3; 
  int integer; 
  bool v8; 
  const Weapon *ViewmodelWeapon; 
  int IdleCycleStartTime; 
  int weaponIdleTime2; 
  int v12; 

  v3 = DCONST_DVARINT_bg_advancedIdleFrequency;
  if ( !DCONST_DVARINT_bg_advancedIdleFrequency && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_advancedIdleFrequency") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  integer = v3->current.integer;
  if ( integer <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2112, ASSERT_TYPE_ASSERT, "(frequency > 0)", (const char *)&queryFormat, "frequency > 0") )
    __debugbreak();
  v8 = BG_UsingAlternate(ps);
  ViewmodelWeapon = BG_GetViewmodelWeapon(weaponMap, ps);
  IdleCycleStartTime = BG_GetIdleCycleStartTime(ViewmodelWeapon, v8, ps);
  if ( idleMotionIndex )
    weaponIdleTime2 = ps->weapCommon.weaponIdleTime2;
  else
    weaponIdleTime2 = ps->weapCommon.weaponIdleTime;
  v12 = weaponIdleTime2 - IdleCycleStartTime;
  if ( v12 < 0 )
    v12 = 0;
  return I_fclamp((float)(v12 % integer) * (float)(1.0 / (float)integer), 0.0, 1.0);
}

/*
==============
BG_AdvancedIdle_GetViewAngles
==============
*/
void BG_AdvancedIdle_GetViewAngles(const BgWeaponMap *weaponMap, const playerState_s *ps, const int idleMotionIndex, const int idleTime, const BSplineRelaxedCBezier *motionSpline, const float lastIdleFactor, const float weaponPosFrac, const float mountIdleScale, const vec3_t *magnitudes, const vec3_t *timeScales, vec3_t *outAngles)
{
  const dvar_t *v15; 
  int integer; 
  float v17; 
  float v18; 
  float v19; 
  const dvar_t *v20; 
  bool IsServerThread; 
  int FrequencyIndex; 
  double v23; 
  __int64 v24; 
  const char *v25; 
  int v26; 
  vec3_t outPos; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2044, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( idleTime < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2045, ASSERT_TYPE_ASSERT, "(idleTime >= 0)", (const char *)&queryFormat, "idleTime >= 0") )
    __debugbreak();
  if ( !motionSpline && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2046, ASSERT_TYPE_ASSERT, "(motionSpline)", (const char *)&queryFormat, "motionSpline") )
    __debugbreak();
  v15 = DCONST_DVARINT_bg_advancedIdleFrequency;
  if ( !DCONST_DVARINT_bg_advancedIdleFrequency && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_advancedIdleFrequency") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  integer = v15->current.integer;
  if ( integer <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2049, ASSERT_TYPE_ASSERT, "(frequency > 0)", (const char *)&queryFormat, "frequency > 0") )
    __debugbreak();
  v17 = (float)(idleTime % integer) / (float)integer;
  I_fclamp(v17, 0.0, 1.0);
  BG_BSpline_RelaxedCBezier_Evaluate(motionSpline, v17, &outPos);
  v18 = (float)((float)((float)((float)(outPos.v[0] * magnitudes->v[0]) * lastIdleFactor) * ps->holdBreathScale) * weaponPosFrac) * mountIdleScale;
  v19 = (float)((float)((float)((float)(outPos.v[1] * magnitudes->v[1]) * lastIdleFactor) * ps->holdBreathScale) * weaponPosFrac) * mountIdleScale;
  outAngles->v[2] = (float)((float)((float)((float)(outPos.v[2] * magnitudes->v[2]) * lastIdleFactor) * ps->holdBreathScale) * weaponPosFrac) * mountIdleScale;
  outAngles->v[0] = v18;
  outAngles->v[1] = v19;
  v20 = DCONST_DVARBOOL_bg_advancedIdleDebug;
  if ( !DCONST_DVARBOOL_bg_advancedIdleDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_advancedIdleDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v20);
  if ( v20->current.enabled )
  {
    IsServerThread = Sys_IsServerThread();
    FrequencyIndex = BG_AdvancedIdle_GetFrequencyIndex(weaponMap, ps, idleMotionIndex);
    v23 = v17;
    v24 = 67i64;
    v25 = "high";
    if ( !idleMotionIndex )
      v25 = "low";
    if ( IsServerThread )
      v24 = 83i64;
    v26 = 34;
    if ( IsServerThread )
      v26 = 15;
    Com_Printf(v26, "[%c] View Angles Base Point[%.3f %.3f %.3f] Scaled Point[%.3f %.3f %.3f] time[%.4f] freq[%d] type[%s]\n", v24, outPos.v[0], outPos.v[1], outPos.v[2], outAngles->v[0], outAngles->v[1], outAngles->v[2], v23, FrequencyIndex, v25);
  }
}

/*
==============
BG_AdvancedIdle_GetWeaponAngles
==============
*/
void BG_AdvancedIdle_GetWeaponAngles(const BgWeaponMap *weaponMap, const playerState_s *ps, const int idleMotionIndex, const int idleTime, const BSplineRelaxedCBezier *motionSpline, const float scale, const vec3_t *magnitudes, vec3_t *outAngles)
{
  const dvar_t *v12; 
  int integer; 
  double v14; 
  float v15; 
  float v16; 
  float v17; 
  const dvar_t *v18; 
  bool IsServerThread; 
  int FrequencyIndex; 
  __int64 v21; 
  const char *v22; 
  int v23; 
  vec3_t outPos; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 414, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( idleTime < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 415, ASSERT_TYPE_ASSERT, "(idleTime >= 0)", (const char *)&queryFormat, "idleTime >= 0") )
    __debugbreak();
  if ( !motionSpline && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 416, ASSERT_TYPE_ASSERT, "(motionSpline)", (const char *)&queryFormat, "motionSpline") )
    __debugbreak();
  v12 = DCONST_DVARINT_bg_advancedIdleFrequency;
  if ( !DCONST_DVARINT_bg_advancedIdleFrequency && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_advancedIdleFrequency") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  integer = v12->current.integer;
  if ( integer <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 419, ASSERT_TYPE_ASSERT, "(frequency > 0)", (const char *)&queryFormat, "frequency > 0") )
    __debugbreak();
  v14 = I_fclamp((float)(idleTime % integer) / (float)integer, 0.0, 1.0);
  BG_BSpline_RelaxedCBezier_Evaluate(motionSpline, *(float *)&v14, &outPos);
  v15 = outPos.v[0] * magnitudes->v[0];
  v16 = magnitudes->v[2];
  outAngles->v[1] = (float)(magnitudes->v[1] * outPos.v[1]) * scale;
  v17 = v16 * outPos.v[2];
  outAngles->v[0] = v15 * scale;
  outAngles->v[2] = v17 * scale;
  v18 = DCONST_DVARBOOL_bg_advancedIdleDebug;
  if ( !DCONST_DVARBOOL_bg_advancedIdleDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_advancedIdleDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  if ( v18->current.enabled )
  {
    IsServerThread = Sys_IsServerThread();
    FrequencyIndex = BG_AdvancedIdle_GetFrequencyIndex(weaponMap, ps, idleMotionIndex);
    v21 = 67i64;
    v22 = "high";
    if ( !idleMotionIndex )
      v22 = "low";
    if ( IsServerThread )
      v21 = 83i64;
    v23 = 34;
    if ( IsServerThread )
      v23 = 15;
    Com_Printf(v23, "[%c] Weapon Angles Base Point[%.3f %.3f %.3f] Scaled Point[%.3f %.3f %.3f] time[%.4f] freq[%d] type[%s]\n", v21, outPos.v[0], outPos.v[1], outPos.v[2], outAngles->v[0], outAngles->v[1], outAngles->v[2], *(float *)&v14, FrequencyIndex, v22);
  }
}

/*
==============
BG_AdvancedIdle_UpdateIdleMotionCache
==============
*/
void BG_AdvancedIdle_UpdateIdleMotionCache(const BgWeaponMap *weaponMap, const playerState_s *ps, const Weapon *weapon, const bool isViewMotion, WeaponIdleMotionCache *idleMotionCache)
{
  int FrequencyIndex; 
  __int64 v10; 
  __int128 *v11; 
  __int64 v12; 
  BSplineRelaxedCBezier *p_idleMotion1Spline; 
  __int128 v14; 
  int v15; 
  __int128 *v16; 
  BSplineRelaxedCBezier *p_idleMotion2Spline; 
  __int128 v18; 
  BSplineRelaxedCBezier v19; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 375, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !idleMotionCache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 376, ASSERT_TYPE_ASSERT, "(idleMotionCache)", (const char *)&queryFormat, "idleMotionCache") )
    __debugbreak();
  if ( memcmp_0(weapon, idleMotionCache, 0x3Cui64) )
  {
    *(_QWORD *)&idleMotionCache->weapon.weaponIdx = 0i64;
    *(__m256i *)&idleMotionCache->weapon.weaponIdx = *(__m256i *)&weapon->weaponIdx;
    *(_OWORD *)&idleMotionCache->weapon.attachmentVariationIndices[5] = *(_OWORD *)&weapon->attachmentVariationIndices[5];
    *(double *)&idleMotionCache->weapon.attachmentVariationIndices[21] = *(double *)&weapon->attachmentVariationIndices[21];
    *(_DWORD *)&idleMotionCache->weapon.weaponCamo = *(_DWORD *)&weapon->weaponCamo;
  }
  FrequencyIndex = BG_AdvancedIdle_GetFrequencyIndex(weaponMap, ps, 0);
  v10 = 6i64;
  if ( FrequencyIndex != idleMotionCache->idleMotion1FreqIdx || !idleMotionCache->idleMotion1Spline.ncurves )
  {
    BSplineRelaxedCBezier::BSplineRelaxedCBezier(&v19);
    v12 = 6i64;
    p_idleMotion1Spline = &idleMotionCache->idleMotion1Spline;
    do
    {
      p_idleMotion1Spline = (BSplineRelaxedCBezier *)((char *)p_idleMotion1Spline + 128);
      v14 = *v11;
      v11 += 8;
      *(_OWORD *)&p_idleMotion1Spline[-1].bcurves[13].p3.z = v14;
      *(_OWORD *)p_idleMotion1Spline[-1].bcurves[14].p1.v = *(v11 - 7);
      *(_OWORD *)&p_idleMotion1Spline[-1].bcurves[14].p2.y = *(v11 - 6);
      *(_OWORD *)&p_idleMotion1Spline[-1].bcurves[14].p3.z = *(v11 - 5);
      *(_OWORD *)&p_idleMotion1Spline[-1].bcurveLengths[3] = *(v11 - 4);
      *(_OWORD *)&p_idleMotion1Spline[-1].bcurveLengths[7] = *(v11 - 3);
      *(_OWORD *)&p_idleMotion1Spline[-1].bcurveLengths[11] = *(v11 - 2);
      *(_OWORD *)&p_idleMotion1Spline[-1].totalLength = *(v11 - 1);
      --v12;
    }
    while ( v12 );
    *(_OWORD *)&p_idleMotion1Spline->ncurves = *v11;
    *(_OWORD *)p_idleMotion1Spline->bcurves[0].p1.v = v11[1];
    BG_AdvancedIdle_BuildSpline(ps, 0, FrequencyIndex, isViewMotion, &idleMotionCache->idleMotion1Spline);
    idleMotionCache->idleMotion1FreqIdx = FrequencyIndex;
  }
  v15 = BG_AdvancedIdle_GetFrequencyIndex(weaponMap, ps, 1);
  if ( v15 != idleMotionCache->idleMotion2FreqIdx || !idleMotionCache->idleMotion2Spline.ncurves )
  {
    BSplineRelaxedCBezier::BSplineRelaxedCBezier(&v19);
    p_idleMotion2Spline = &idleMotionCache->idleMotion2Spline;
    do
    {
      p_idleMotion2Spline = (BSplineRelaxedCBezier *)((char *)p_idleMotion2Spline + 128);
      v18 = *v16;
      v16 += 8;
      *(_OWORD *)&p_idleMotion2Spline[-1].bcurves[13].p3.z = v18;
      *(_OWORD *)p_idleMotion2Spline[-1].bcurves[14].p1.v = *(v16 - 7);
      *(_OWORD *)&p_idleMotion2Spline[-1].bcurves[14].p2.y = *(v16 - 6);
      *(_OWORD *)&p_idleMotion2Spline[-1].bcurves[14].p3.z = *(v16 - 5);
      *(_OWORD *)&p_idleMotion2Spline[-1].bcurveLengths[3] = *(v16 - 4);
      *(_OWORD *)&p_idleMotion2Spline[-1].bcurveLengths[7] = *(v16 - 3);
      *(_OWORD *)&p_idleMotion2Spline[-1].bcurveLengths[11] = *(v16 - 2);
      *(_OWORD *)&p_idleMotion2Spline[-1].totalLength = *(v16 - 1);
      --v10;
    }
    while ( v10 );
    *(_OWORD *)&p_idleMotion2Spline->ncurves = *v16;
    *(_OWORD *)p_idleMotion2Spline->bcurves[0].p1.v = v16[1];
    BG_AdvancedIdle_BuildSpline(ps, 1, v15, isViewMotion, &idleMotionCache->idleMotion2Spline);
    idleMotionCache->idleMotion2FreqIdx = v15;
  }
}

/*
==============
BG_ApplyViewBobAndScriptOffsets
==============
*/
void BG_ApplyViewBobAndScriptOffsets(const playerState_s *ps, const int serverTime, const int (*packedBobCycle)[2], const BgHandler *handler, vec3_t *outOrigin)
{
  float value; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  unsigned int v14; 
  const dvar_t *v15; 
  float v16; 
  float v17; 
  int v18; 
  unsigned int IndexByName; 
  int v20; 
  unsigned int v21; 
  int v22; 
  unsigned int v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  OmnvarData outViewAmplitude; 
  float outViewCycle; 
  vec3_t v32; 
  vec3_t forward; 
  vec3_t right; 
  vec3_t up; 
  WorldUpReferenceFrame v36; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2594, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  value = 0.0;
  v32.v[0] = 0.0;
  v32.v[1] = 0.0;
  v32.v[2] = 0.0;
  BG_GetBobValue(packedBobCycle, &outViewCycle, (float *)&outViewAmplitude, NULL);
  v10 = outViewCycle;
  v11 = sinf_0((float)(outViewCycle * 4.0) + 1.5707964) * 0.15000001;
  v12 = sinf_0(v10 * 2.0) * 0.75;
  v13 = (float)(v11 + v12) * *(float *)&outViewAmplitude.timeModified;
  *(float *)&v14 = sinf_0(v10) * *(float *)&outViewAmplitude.timeModified;
  v32.v[1] = *(float *)&v14 + v32.v[1];
  outViewAmplitude.timeModified = v14;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2625, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v15 = DCONST_DVARMPBOOL_useScriptWeaponAndViewOffsets;
  v16 = 0.0;
  v17 = 0.0;
  if ( !DCONST_DVARMPBOOL_useScriptWeaponAndViewOffsets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "useScriptWeaponAndViewOffsets") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  if ( v15->current.enabled )
  {
    v18 = ps->serverTime;
    IndexByName = BG_Omnvar_GetIndexByName("protoview_x");
    BG_Omnvar_GetDataAtPmoveTime(ps->clientNum, handler, IndexByName, v18, &outViewAmplitude);
    value = outViewAmplitude.current.value;
    v20 = ps->serverTime;
    v21 = BG_Omnvar_GetIndexByName("protoview_y");
    BG_Omnvar_GetDataAtPmoveTime(ps->clientNum, handler, v21, v20, &outViewAmplitude);
    v16 = outViewAmplitude.current.value;
    v22 = ps->serverTime;
    v23 = BG_Omnvar_GetIndexByName("protoview_z");
    BG_Omnvar_GetDataAtPmoveTime(ps->clientNum, handler, v23, v22, &outViewAmplitude);
    v17 = outViewAmplitude.current.value;
  }
  v32.v[0] = value + v32.v[0];
  v32.v[1] = v16 + v32.v[1];
  v32.v[2] = v17 + v32.v[2];
  BG_WeaponOffsets_ApplyViewTranslation(ps, serverTime, handler, &v32);
  BG_GetPlayerViewDirection(ps, &forward, &right, &up, handler, 0);
  v24 = v32.v[0];
  v25 = v32.v[2];
  v26 = (float)((float)(v32.v[0] * forward.v[1]) + outOrigin->v[1]) + (float)(v32.v[1] * right.v[1]);
  v27 = v32.v[1] * right.v[2];
  outOrigin->v[0] = (float)((float)((float)(v32.v[0] * forward.v[0]) + outOrigin->v[0]) + (float)(v32.v[1] * right.v[0])) + (float)(v32.v[2] * up.v[0]);
  v28 = v26 + (float)(v25 * up.v[1]);
  v29 = (float)(v24 * forward.v[2]) + outOrigin->v[2];
  outOrigin->v[1] = v28;
  outOrigin->v[2] = (float)(v29 + v27) + (float)(v25 * up.v[2]);
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v36, ps, handler, 1);
  WorldUpReferenceFrame::AddUpContribution(&v36, v13, outOrigin);
}

/*
==============
BG_ApplyWeaponMovement_AdvancedIdle
==============
*/
void BG_ApplyWeaponMovement_AdvancedIdle(const WeaponMovementParams *const params, const WeaponMovementState *const ws, const vec3_t (*weaponAnglesCategorized)[30], vec3_t *origin)
{
  const playerState_s *ps; 
  const BgWeaponMap *weaponMap; 
  const Weapon *ViewmodelOrOffhandADSSupportWeapon; 
  double WeaponOrOffhandAdsFrac; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  bool outIsAlternate; 
  vec3_t newOrigin; 
  AdvancedIdleSettings outAdvancedIdleSettings; 

  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 905, ASSERT_TYPE_ASSERT, "(params)", (const char *)&queryFormat, "params") )
    __debugbreak();
  if ( !ws && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 906, ASSERT_TYPE_ASSERT, "(ws)", (const char *)&queryFormat, "ws") )
    __debugbreak();
  if ( !weaponAnglesCategorized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 907, ASSERT_TYPE_ASSERT, "(weaponAnglesCategorized)", (const char *)&queryFormat, "weaponAnglesCategorized") )
    __debugbreak();
  ps = params->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 910, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  weaponMap = params->weaponMap;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 913, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  ViewmodelOrOffhandADSSupportWeapon = BG_GetViewmodelOrOffhandADSSupportWeapon(weaponMap, ps, &outIsAlternate);
  BG_GetAdvancedIdleSettings(ps->perks, ViewmodelOrOffhandADSSupportWeapon, outIsAlternate, &outAdvancedIdleSettings);
  if ( outAdvancedIdleSettings.useAdvancedIdleSettings )
  {
    WeaponOrOffhandAdsFrac = BG_GetWeaponOrOffhandAdsFrac(weaponMap, ps);
    v12 = *(float *)&WeaponOrOffhandAdsFrac;
    BG_ApplyWeaponMovement_AdvancedIdleForwardMotion(params, ws, ViewmodelOrOffhandADSSupportWeapon, outIsAlternate, &outAdvancedIdleSettings, origin);
    v13 = (float)((float)(outAdvancedIdleSettings.idleSwaySetting1_AdsWeaponRotationOffset - outAdvancedIdleSettings.idleSwaySetting1_HipWeaponRotationOffset) * *(float *)&WeaponOrOffhandAdsFrac) + outAdvancedIdleSettings.idleSwaySetting1_HipWeaponRotationOffset;
    if ( v13 != 0.0 )
    {
      BG_GetNewOriginForRotationWithOffset(&(*weaponAnglesCategorized)[5], v13, &newOrigin);
      v14 = newOrigin.v[1];
      origin->v[0] = newOrigin.v[0] + origin->v[0];
      v15 = v14 + origin->v[1];
      v16 = newOrigin.v[2];
      origin->v[1] = v15;
      origin->v[2] = v16 + origin->v[2];
    }
    v17 = (float)((float)(outAdvancedIdleSettings.idleSwaySetting2_AdsWeaponRotationOffset - outAdvancedIdleSettings.idleSwaySetting2_HipWeaponRotationOffset) * v12) + outAdvancedIdleSettings.idleSwaySetting2_HipWeaponRotationOffset;
    if ( v17 != 0.0 )
    {
      BG_GetNewOriginForRotationWithOffset(&(*weaponAnglesCategorized)[6], v17, &newOrigin);
      v18 = newOrigin.v[1];
      origin->v[0] = newOrigin.v[0] + origin->v[0];
      v19 = v18 + origin->v[1];
      v20 = newOrigin.v[2];
      origin->v[1] = v19;
      origin->v[2] = v20 + origin->v[2];
    }
  }
}

/*
==============
BG_ApplyWeaponMovement_AdvancedIdleForwardMotion
==============
*/
void BG_ApplyWeaponMovement_AdvancedIdleForwardMotion(const WeaponMovementParams *const params, const WeaponMovementState *const ws, const Weapon *r_weapon, const bool isAlternate, const AdvancedIdleSettings *advancedIdleSettings, vec3_t *origin)
{
  const playerState_s *ps; 
  float IdleScaleMultiplier; 
  int IdleCycleStartTime; 
  double WeaponOrOffhandAdsFrac; 
  int v14; 
  float v15; 
  float v16; 
  int v17; 

  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 866, ASSERT_TYPE_ASSERT, "(params)", (const char *)&queryFormat, "params") )
    __debugbreak();
  if ( !ws && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 867, ASSERT_TYPE_ASSERT, "(ws)", (const char *)&queryFormat, "ws") )
    __debugbreak();
  ps = params->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 870, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !advancedIdleSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 872, ASSERT_TYPE_ASSERT, "(advancedIdleSettings)", (const char *)&queryFormat, "advancedIdleSettings") )
    __debugbreak();
  IdleScaleMultiplier = BG_GetIdleScaleMultiplier(params, ws, r_weapon, isAlternate);
  IdleCycleStartTime = BG_GetIdleCycleStartTime(r_weapon, isAlternate, ps);
  WeaponOrOffhandAdsFrac = BG_GetWeaponOrOffhandAdsFrac(params->weaponMap, ps);
  v14 = ps->weapCommon.weaponIdleTime - IdleCycleStartTime;
  if ( v14 < 0 )
    v14 = 0;
  v15 = *(float *)&WeaponOrOffhandAdsFrac;
  v16 = (float)((float)(sinf_0((float)v14 * TIME_SCALE) * (float)((float)((float)((float)(advancedIdleSettings->idleSwaySetting1_AdsWeaponMagnitudeF - advancedIdleSettings->idleSwaySetting1_HipWeaponMagnitudeF) * *(float *)&WeaponOrOffhandAdsFrac) + advancedIdleSettings->idleSwaySetting1_HipWeaponMagnitudeF) * IdleScaleMultiplier)) * MAG_SCALE) + origin->v[0];
  origin->v[0] = v16;
  v17 = ps->weapCommon.weaponIdleTime2 - IdleCycleStartTime;
  if ( v17 < 0 )
    v17 = 0;
  origin->v[0] = (float)((float)(sinf_0((float)v17 * TIME_SCALE) * (float)((float)((float)((float)(advancedIdleSettings->idleSwaySetting2_AdsWeaponMagnitudeF - advancedIdleSettings->idleSwaySetting2_HipWeaponMagnitudeF) * v15) + advancedIdleSettings->idleSwaySetting2_HipWeaponMagnitudeF) * IdleScaleMultiplier)) * MAG_SCALE) + v16;
}

/*
==============
BG_ApplyWeaponMovement_BobAngles
==============
*/
void BG_ApplyWeaponMovement_BobAngles(const WeaponMovementParams *const params, const WeaponMovementState *const ws, vec3_t *outBobAngles, vec3_t *outCombinedAngles)
{
  const playerState_s *ps; 
  const BgWeaponMap *weaponMap; 
  const Weapon *ViewmodelOrOffhandADSSupportWeapon; 
  const ADSOverlay *Overlay; 
  double WeaponOrOffhandAdsFrac; 
  float v13; 
  float v14; 
  bool outIsAlternate; 

  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 795, ASSERT_TYPE_ASSERT, "(params)", (const char *)&queryFormat, "params") )
    __debugbreak();
  if ( !ws && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 796, ASSERT_TYPE_ASSERT, "(ws)", (const char *)&queryFormat, "ws") )
    __debugbreak();
  ps = params->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 799, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  weaponMap = params->weaponMap;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 802, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  ViewmodelOrOffhandADSSupportWeapon = BG_GetViewmodelOrOffhandADSSupportWeapon(weaponMap, ps, &outIsAlternate);
  Overlay = BG_GetOverlay(ViewmodelOrOffhandADSSupportWeapon, outIsAlternate);
  if ( !Overlay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 807, ASSERT_TYPE_ASSERT, "(adsOverlay)", (const char *)&queryFormat, "adsOverlay") )
    __debugbreak();
  if ( Overlay->reticle )
  {
    WeaponOrOffhandAdsFrac = BG_GetWeaponOrOffhandAdsFrac(weaponMap, ps);
    outBobAngles->v[0] = (float)(1.0 - *(float *)&WeaponOrOffhandAdsFrac) * ws->bobAngles.v[0];
    outBobAngles->v[1] = (float)(1.0 - *(float *)&WeaponOrOffhandAdsFrac) * ws->bobAngles.v[1];
    v13 = (float)(1.0 - *(float *)&WeaponOrOffhandAdsFrac) * ws->bobAngles.v[2];
  }
  else
  {
    outBobAngles->v[0] = ws->bobAngles.v[0];
    outBobAngles->v[1] = ws->bobAngles.v[1];
    v13 = ws->bobAngles.v[2];
  }
  outBobAngles->v[2] = v13;
  outCombinedAngles->v[0] = outBobAngles->v[0] + outCombinedAngles->v[0];
  v14 = outCombinedAngles->v[2];
  outCombinedAngles->v[1] = outBobAngles->v[1] + outCombinedAngles->v[1];
  outCombinedAngles->v[2] = v14 + outBobAngles->v[2];
}

/*
==============
BG_CalculateGunMovement_Bob
==============
*/
void BG_CalculateGunMovement_Bob(const playerState_s *ps, float cyclePhaseOffsetVertical, float cyclePhaseOffsetHorizontal, float *outVertical, float *outHorizontal)
{
  int *packedBobCycle; 
  const dvar_t *v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float *v12; 
  BobCycle v13; 
  float v14; 

  packedBobCycle = ps->packedBobCycle;
  BG_GetBobValue((const int (*)[2])ps->packedBobCycle, &v14, NULL, NULL);
  BobCycle::UnpackBobCycle(&v13, (const int (*)[2])packedBobCycle);
  v7 = DCONST_DVARMPFLT_bg_gunBobMax;
  if ( !DCONST_DVARMPFLT_bg_gunBobMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_gunBobMax") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  v8 = cyclePhaseOffsetVertical + v14;
  v9 = v13.amplitudeRatioGun * v7->current.value;
  v10 = cyclePhaseOffsetHorizontal + v14;
  if ( outVertical )
  {
    v11 = sinf_0((float)(v8 * 4.0) + 1.5707964) * 0.15000001;
    *outVertical = (float)(v11 + (float)(sinf_0(v8 * 2.0) * 0.75)) * v9;
  }
  v12 = outHorizontal;
  if ( outHorizontal )
    *v12 = sinf_0(v10) * v9;
}

/*
==============
BG_CalculateViewMovement_Angles
==============
*/
void BG_CalculateViewMovement_Angles(const ViewMovementParams *const params, ViewMovementState *vs, vec3_t *outAngles)
{
  const playerState_s *ps; 
  float v7; 
  const playerState_s *v8; 
  const BgHandler *handler; 
  const dvar_t *v10; 
  int serverTime; 
  unsigned int IndexByName; 
  int v13; 
  unsigned int v14; 
  int v15; 
  unsigned int v16; 
  vec3_t a1; 
  vec3_t outAnglesa; 

  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2560, ASSERT_TYPE_ASSERT, "(params)", (const char *)&queryFormat, "params") )
    __debugbreak();
  if ( !vs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2561, ASSERT_TYPE_ASSERT, "(vs)", (const char *)&queryFormat, "vs") )
    __debugbreak();
  *(_QWORD *)outAngles->v = 0i64;
  outAngles->v[2] = 0.0;
  BG_CalculateViewMovement_Angles_DamageKick(params, vs, outAngles);
  BG_CalculateViewMovement_Angles_Idle(params, vs, outAngles);
  BG_CalculateViewMovement_Angles_Bob(params, vs, outAngles);
  BG_CalculateViewMovement_Angles_AdsBob(params, vs, outAngles);
  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2528, ASSERT_TYPE_ASSERT, "(params)", (const char *)&queryFormat, "params") )
    __debugbreak();
  if ( !vs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2529, ASSERT_TYPE_ASSERT, "(vs)", (const char *)&queryFormat, "vs") )
    __debugbreak();
  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2543, ASSERT_TYPE_ASSERT, "(params)", (const char *)&queryFormat, "params") )
    __debugbreak();
  if ( !vs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2544, ASSERT_TYPE_ASSERT, "(vs)", (const char *)&queryFormat, "vs") )
    __debugbreak();
  ps = params->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2547, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  Slide_GetViewAngleOffsets(ps, params->serverTime, &outAnglesa);
  v7 = outAnglesa.v[1] + outAngles->v[1];
  outAngles->v[0] = outAnglesa.v[0] + outAngles->v[0];
  outAngles->v[2] = outAnglesa.v[2] + outAngles->v[2];
  outAngles->v[1] = v7;
  v8 = params->ps;
  handler = params->handler;
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2647, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v10 = DCONST_DVARMPBOOL_useScriptWeaponAndViewOffsets;
  a1.v[0] = 0.0;
  a1.v[1] = 0.0;
  a1.v[2] = 0.0;
  if ( !DCONST_DVARMPBOOL_useScriptWeaponAndViewOffsets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "useScriptWeaponAndViewOffsets") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.enabled )
  {
    serverTime = v8->serverTime;
    IndexByName = BG_Omnvar_GetIndexByName("protoview_ax");
    BG_Omnvar_GetDataAtPmoveTime(v8->clientNum, handler, IndexByName, serverTime, (OmnvarData *)&outAnglesa);
    a1.v[0] = outAnglesa.v[1];
    v13 = v8->serverTime;
    v14 = BG_Omnvar_GetIndexByName("protoview_ay");
    BG_Omnvar_GetDataAtPmoveTime(v8->clientNum, handler, v14, v13, (OmnvarData *)&outAnglesa);
    a1.v[1] = outAnglesa.v[1];
    v15 = v8->serverTime;
    v16 = BG_Omnvar_GetIndexByName("protoview_az");
    BG_Omnvar_GetDataAtPmoveTime(v8->clientNum, handler, v16, v15, (OmnvarData *)&outAnglesa);
    a1.v[2] = outAnglesa.v[1];
  }
  BG_WeaponOffsets_ApplyViewAngles(params->ps, params->serverTime, params->handler, &a1);
  if ( a1.v[0] != 0.0 || a1.v[1] != 0.0 || a1.v[2] != 0.0 )
    AddAnglesAsQuatMultiply(outAngles, &a1, outAngles);
}

/*
==============
BG_CalculateViewMovement_Angles_AdsBob
==============
*/
void BG_CalculateViewMovement_Angles_AdsBob(const ViewMovementParams *const params, ViewMovementState *const vs, vec3_t *inOutAngles)
{
  const playerState_s *ps; 
  const BgWeaponMap *weaponMap; 
  double WeaponOrOffhandAdsFrac; 
  float v9; 
  const Weapon *ViewmodelOrOffhandADSSupportWeapon; 
  double v11; 
  bool outIsAlternate; 
  float outVertical; 
  float outHorizontal; 

  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2498, ASSERT_TYPE_ASSERT, "(params)", (const char *)&queryFormat, "params") )
    __debugbreak();
  if ( !vs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2499, ASSERT_TYPE_ASSERT, "(vs)", (const char *)&queryFormat, "vs") )
    __debugbreak();
  ps = params->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2502, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  weaponMap = params->weaponMap;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2505, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  WeaponOrOffhandAdsFrac = BG_GetWeaponOrOffhandAdsFrac(weaponMap, ps);
  v9 = *(float *)&WeaponOrOffhandAdsFrac;
  if ( *(float *)&WeaponOrOffhandAdsFrac > 0.0 )
  {
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2152, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( ps == (const playerState_s *)-376i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2042, ASSERT_TYPE_ASSERT, "(esFlags)", (const char *)&queryFormat, "esFlags") )
      __debugbreak();
    if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ps->eFlags, ACTIVE, 5u) && !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ps->eFlags, ACTIVE, 6u) )
    {
      if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ps->eFlags, ACTIVE, 7u) )
      {
        if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2052, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
          __debugbreak();
      }
      else
      {
        ViewmodelOrOffhandADSSupportWeapon = BG_GetViewmodelOrOffhandADSSupportWeapon(weaponMap, ps, &outIsAlternate);
        v11 = BG_ADSViewBobMult(weaponMap, ps, ViewmodelOrOffhandADSSupportWeapon, outIsAlternate);
        if ( *(float *)&v11 > 0.0 )
        {
          BG_CalculateViewMovement_Bob((const int (*)[2])ps->packedBobCycle, 0.0, &outVertical, &outHorizontal);
          inOutAngles->v[0] = (float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v11 * v9) ^ _xmm) * outVertical) + inOutAngles->v[0];
          inOutAngles->v[1] = (float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v11 * v9) ^ _xmm) * outHorizontal) + inOutAngles->v[1];
        }
      }
    }
  }
}

/*
==============
BG_CalculateViewMovement_Angles_Bob
==============
*/
void BG_CalculateViewMovement_Angles_Bob(const ViewMovementParams *const params, ViewMovementState *const vs, vec3_t *inOutAngles)
{
  const playerState_s *ps; 
  const BgWeaponMap *weaponMap; 
  const Weapon *ViewmodelOrOffhandADSSupportWeapon; 
  double WeaponOrOffhandAdsFrac; 
  float v10; 
  const dvar_t *v11; 
  __int128 unsignedInt; 
  const dvar_t *v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  const dvar_t *v20; 
  float value; 
  const dvar_t *v22; 
  double v25; 
  float v26; 
  bool outIsAlternate; 
  float outViewCycle; 
  float outViewAmplitude; 
  float outVertical; 
  float outHorizontal[3]; 

  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2453, ASSERT_TYPE_ASSERT, "(params)", (const char *)&queryFormat, "params") )
    __debugbreak();
  if ( !vs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2454, ASSERT_TYPE_ASSERT, "(vs)", (const char *)&queryFormat, "vs") )
    __debugbreak();
  ps = params->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2457, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  weaponMap = params->weaponMap;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2460, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  ViewmodelOrOffhandADSSupportWeapon = BG_GetViewmodelOrOffhandADSSupportWeapon(weaponMap, ps, &outIsAlternate);
  WeaponOrOffhandAdsFrac = BG_GetWeaponOrOffhandAdsFrac(weaponMap, ps);
  v10 = *(float *)&WeaponOrOffhandAdsFrac;
  if ( BG_GetOverlay(ViewmodelOrOffhandADSSupportWeapon, outIsAlternate)->reticle )
  {
    v11 = DCONST_DVARFLT_bg_weaponBobLag;
    if ( !DCONST_DVARFLT_bg_weaponBobLag && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weaponBobLag") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    unsignedInt = v11->current.unsignedInt;
    *(float *)&unsignedInt = (float)(*(float *)&unsignedInt * 3.1415927) + 6.2831855;
    BG_CalculateViewMovement_Bob((const int (*)[2])ps->packedBobCycle, *(float *)&unsignedInt, &outVertical, outHorizontal);
    v13 = DCONST_DVARMPFLT_bg_weaponBobAmplitudeBase;
    if ( !DCONST_DVARMPFLT_bg_weaponBobAmplitudeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weaponBobAmplitudeBase") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    LODWORD(v14) = v13->current.integer ^ _xmm;
    v15 = outHorizontal[0] * v14;
    v16 = outVertical * v14;
    BG_GetBobValue((const int (*)[2])ps->packedBobCycle, &outViewCycle, &outViewAmplitude, NULL);
    v17 = (float)(*(float *)&unsignedInt - 0.47123894) + outViewCycle;
    v18 = sinf_0((float)(v17 * 4.0) + 1.5707964) * 0.15000001;
    v19 = sinf_0(v17 * 2.0) * 0.75;
    v20 = DCONST_DVARMPFLT_bg_weaponBobAmplitudeBase;
    *(float *)&unsignedInt = (float)(v18 + v19) * outViewAmplitude;
    if ( !DCONST_DVARMPFLT_bg_weaponBobAmplitudeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weaponBobAmplitudeBase") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    value = v20->current.value;
    v22 = DCONST_DVARMPFLT_bg_weaponBobAmplitudeRoll;
    if ( !DCONST_DVARMPFLT_bg_weaponBobAmplitudeRoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weaponBobAmplitudeRoll") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
    *(float *)&unsignedInt = (float)(*(float *)&unsignedInt * value) * v22->current.value;
    _XMM1 = unsignedInt;
    __asm { vminss  xmm6, xmm1, xmm2 }
    if ( v10 != 0.0 )
    {
      v25 = BG_ADSBobFactor(weaponMap, ps, ViewmodelOrOffhandADSSupportWeapon, outIsAlternate);
      v26 = 1.0 - (float)((float)(1.0 - *(float *)&v25) * v10);
      v16 = v16 * v26;
      v15 = v15 * v26;
      *(float *)&_XMM6 = *(float *)&_XMM6 * v26;
    }
    inOutAngles->v[0] = (float)(v16 * v10) + inOutAngles->v[0];
    inOutAngles->v[1] = (float)(v15 * v10) + inOutAngles->v[1];
    inOutAngles->v[2] = (float)(*(float *)&_XMM6 * v10) + inOutAngles->v[2];
  }
}

/*
==============
BG_CalculateViewMovement_Angles_DamageKick
==============
*/
void BG_CalculateViewMovement_Angles_DamageKick(const ViewMovementParams *const params, ViewMovementState *const vs, vec3_t *inOutAngles)
{
  const playerState_s *ps; 
  const BgWeaponMap *weaponMap; 
  bool v8; 
  const Weapon *ViewmodelWeapon; 
  const ADSOverlay *Overlay; 
  float fWeaponPosFrac; 
  float v12; 
  float damageTime; 
  double LeanFraction; 
  float v15; 

  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1990, ASSERT_TYPE_ASSERT, "(params)", (const char *)&queryFormat, "params") )
    __debugbreak();
  if ( !vs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1991, ASSERT_TYPE_ASSERT, "(vs)", (const char *)&queryFormat, "vs") )
    __debugbreak();
  if ( params->damageTime )
  {
    ps = params->ps;
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1999, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    weaponMap = params->weaponMap;
    if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2002, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    v8 = BG_UsingAlternate(ps);
    ViewmodelWeapon = BG_GetViewmodelWeapon(weaponMap, ps);
    Overlay = BG_GetOverlay(ViewmodelWeapon, v8);
    if ( !Overlay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2008, ASSERT_TYPE_ASSERT, "(adsOverlay)", (const char *)&queryFormat, "adsOverlay") )
      __debugbreak();
    fWeaponPosFrac = ps->weapCommon.fWeaponPosFrac;
    v12 = 1.0 - (float)(fWeaponPosFrac * 0.5);
    if ( fWeaponPosFrac != 0.0 )
    {
      if ( Overlay->reticle )
        v12 = (float)(1.0 - (float)(fWeaponPosFrac * 0.5)) * (float)((float)(fWeaponPosFrac * 0.5) + 1.0);
    }
    damageTime = (float)params->damageTime;
    if ( damageTime >= 100.0 )
    {
      v15 = (float)(damageTime - 100.0) * 0.0024999999;
      if ( v15 >= 1.0 )
        return;
      LeanFraction = GetLeanFraction(v15);
      *(float *)&LeanFraction = 1.0 - *(float *)&LeanFraction;
    }
    else
    {
      LeanFraction = GetLeanFraction(damageTime * 0.0099999998);
    }
    inOutAngles->v[0] = (float)((float)(*(float *)&LeanFraction * v12) * params->damagePitch) + inOutAngles->v[0];
    inOutAngles->v[2] = (float)((float)(*(float *)&LeanFraction * v12) * params->damageRoll) + inOutAngles->v[2];
  }
}

/*
==============
BG_CalculateViewMovement_Angles_Idle
==============
*/
void BG_CalculateViewMovement_Angles_Idle(const ViewMovementParams *const params, ViewMovementState *const vs, vec3_t *intOutAngles)
{
  ViewMovementState *v3; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  const playerState_s *ps; 
  BgWeaponMap *v9; 
  const Weapon *ViewmodelOrOffhandADSSupportWeapon; 
  const dvar_t *v11; 
  double v12; 
  int weaponIdleTime; 
  char v14; 
  __int64 v15; 
  int v16; 
  bool *i; 
  float mountFraction; 
  double MountViewIdleScale; 
  float v20; 
  bool v25; 
  int v26; 
  unsigned int v29; 
  bool *p_ShouldIncrementViewMovementIdleTimeADS; 
  __int64 v32; 
  __int64 v33; 
  __int64 v34; 
  char *v35; 
  unsigned int v36; 
  __int64 v37; 
  bool v38; 
  float *v39; 
  float v40; 
  float v41; 
  float fLastIdleFactor; 
  __int64 v43; 
  float v44; 
  float v45; 
  float holdBreathScale; 
  float v47; 
  float v48; 
  __int128 v49; 
  __int128 v50; 
  __int128 v51; 
  float fWeaponPosFrac; 
  vec3_t *v53; 
  float v54; 
  vec3_t *outTargetScale; 
  vec3_t *outTargetScalea; 
  vec3_t *outTimeScale; 
  vec3_t *outTimeScalea; 
  bool outIsAlternate[4]; 
  bool ShouldIncrementViewMovementIdleTimeADS; 
  char v61; 
  __int16 v62; 
  __int64 v63; 
  __int64 v64; 
  ViewMovementState *v65; 
  bool *v66; 
  BgWeaponMap *weaponMap; 
  unsigned __int64 v68; 
  vec3_t *v69; 
  int v70; 
  int v71; 
  float v72; 
  AdvancedIdleSettings outAdvancedIdleSettings; 
  int idleTime[2]; 
  int outIdleCycle; 
  int v76; 
  float v77[2]; 
  float outUseWeaponPosFrac; 
  float v79; 
  vec3_t v80; 
  int v81; 
  int v82; 
  int integer; 
  vec3_t v84; 
  vec3_t v85; 
  vec3_t v86; 
  float v87; 
  float v88; 
  float v89; 
  vec3_t v90; 
  vec3_t v91; 
  __m256i v92; 
  __int128 v93; 

  v69 = intOutAngles;
  v3 = vs;
  v65 = vs;
  v92 = (__m256i)0i64;
  v93 = 0i64;
  v5 = 0i64;
  v6 = 0i64;
  v7 = 0i64;
  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2311, ASSERT_TYPE_ASSERT, "(params)", (const char *)&queryFormat, "params") )
    __debugbreak();
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2312, ASSERT_TYPE_ASSERT, "(vs)", (const char *)&queryFormat, "vs") )
    __debugbreak();
  ps = params->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2315, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v9 = (BgWeaponMap *)params->weaponMap;
  weaponMap = v9;
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2318, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  ViewmodelOrOffhandADSSupportWeapon = BG_GetViewmodelOrOffhandADSSupportWeapon(v9, ps, outIsAlternate);
  BG_GetAdvancedIdleSettings(ps->perks, ViewmodelOrOffhandADSSupportWeapon, outIsAlternate[0], &outAdvancedIdleSettings);
  if ( outAdvancedIdleSettings.useAdvancedIdleSettings )
  {
    ShouldIncrementViewMovementIdleTimeADS = 0;
    if ( outAdvancedIdleSettings.useRandomPointsAlgorithm )
      BG_AdvancedIdle_UpdateIdleMotionCache(v9, ps, ViewmodelOrOffhandADSSupportWeapon, 1, &v3->idleMotionCache);
    LOBYTE(v62) = BG_ShouldAdvancedIdleMotionAdjustViewAngles(ps, v9, &outAdvancedIdleSettings, 0, &outUseWeaponPosFrac, &v84, &v90, &outIdleCycle);
    HIBYTE(v62) = BG_ShouldAdvancedIdleMotionAdjustViewAngles(ps, v9, &outAdvancedIdleSettings, 1u, &v79, &v85, &v91, &v76);
  }
  else
  {
    ShouldIncrementViewMovementIdleTimeADS = BG_ShouldIncrementViewMovementIdleTimeADS(ps, v9, v77, &v80, &v86, idleTime);
    v62 = 0;
  }
  if ( BG_IsPlayerZeroGFloating(ps) && ps->weapCommon.fWeaponPosFrac < 1.0 )
  {
    v11 = DCONST_DVARMPFLT_bg_viewIdleMoveZeroGrav;
    if ( !DCONST_DVARMPFLT_bg_viewIdleMoveZeroGrav && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_viewIdleMoveZeroGrav") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    integer = v11->current.integer;
    v82 = integer;
    v81 = integer;
    v12 = I_fclamp(1.0 - ps->weapCommon.fWeaponPosFrac, 0.0, 1.0);
    weaponIdleTime = ps->weapCommon.weaponIdleTime;
    v77[1] = *(float *)&v12;
    idleTime[1] = weaponIdleTime;
    v14 = 1;
    v88 = FLOAT_0_00019999999;
    v87 = FLOAT_0_00039999999;
    v89 = FLOAT_0_00039999999;
  }
  else
  {
    v14 = 0;
  }
  v15 = 0i64;
  v61 = v14;
  v16 = 0;
  for ( i = &ShouldIncrementViewMovementIdleTimeADS; !*i; ++i )
  {
    if ( (unsigned int)++v16 >= 4 )
      return;
  }
  mountFraction = ps->mountState.mountFraction;
  MountViewIdleScale = BG_GetMountViewIdleScale((const ContextMountType)ps->mountState.surface.type, ViewmodelOrOffhandADSSupportWeapon, outIsAlternate[0]);
  v20 = (float)(*(float *)&MountViewIdleScale * mountFraction) + (float)(1.0 - mountFraction);
  BG_CalculateViewMovement_IdleFactor(params, v3);
  _XMM6 = LODWORD(FLOAT_N1_0);
  _XMM0 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x20u);
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm6, xmm7, xmm2
  }
  v71 = _XMM0;
  v25 = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x21u);
  v26 = 0;
  _XMM0 = v25;
  __asm { vpcmpeqd xmm2, xmm0, xmm1 }
  v29 = 0;
  LODWORD(v63) = 0;
  __asm { vblendvps xmm0, xmm6, xmm7, xmm2 }
  p_ShouldIncrementViewMovementIdleTimeADS = &ShouldIncrementViewMovementIdleTimeADS;
  v32 = -256i64;
  v70 = _XMM0;
  v72 = FLOAT_1_0;
  v66 = &ShouldIncrementViewMovementIdleTimeADS;
  v64 = -256i64;
  v33 = 0i64;
  do
  {
    if ( *p_ShouldIncrementViewMovementIdleTimeADS )
    {
      if ( v29 - 2 <= 1 && outAdvancedIdleSettings.useRandomPointsAlgorithm )
      {
        v34 = 68i64;
        if ( v29 != 2 )
          v34 = 872i64;
        LOBYTE(v26) = v29 != 2;
        BG_AdvancedIdle_GetViewAngles(weaponMap, ps, v26, idleTime[v33], (const BSplineRelaxedCBezier *)((char *)v3 + v34), v3->fLastIdleFactor, v77[v33], v20, &v80 + v29, &v86 + v29, (vec3_t *)&v92 + v29);
      }
      else
      {
        v35 = (char *)&v86 + v15 * 4;
        v36 = 0;
        v37 = 0i64;
        v38 = 1;
        v68 = 48i64;
        do
        {
          if ( !v38 )
          {
            LODWORD(outTimeScale) = 3;
            LODWORD(outTargetScale) = v36;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outTargetScale, outTimeScale) )
              __debugbreak();
          }
          v39 = (float *)&v35[v37 * 4];
          if ( *(float *)&v35[v37 * 4] <= 0.0 )
          {
            if ( v36 >= 3 )
            {
              LODWORD(outTimeScale) = 3;
              LODWORD(outTargetScale) = v36;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outTargetScale, outTimeScale) )
                __debugbreak();
            }
            v48 = 0.0;
          }
          else
          {
            if ( v36 >= 3 )
            {
              LODWORD(outTimeScale) = 3;
              LODWORD(outTargetScale) = v36;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outTargetScale, outTimeScale) )
                __debugbreak();
              LODWORD(outTimeScalea) = 3;
              LODWORD(outTargetScalea) = v36;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outTargetScalea, outTimeScalea) )
                __debugbreak();
            }
            v40 = (float)((float)idleTime[v33] * *v39) * *(float *)((char *)v39 + v64);
            sinf_0(v40);
            v41 = v40;
            fLastIdleFactor = v65->fLastIdleFactor;
            if ( v36 >= 3 )
            {
              LODWORD(outTimeScale) = 3;
              LODWORD(outTargetScale) = v36;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outTargetScale, outTimeScale) )
                __debugbreak();
            }
            v43 = v15 * 4 + v37 * 4;
            v44 = fLastIdleFactor * v80.v[v15 + v37];
            v80.v[v15 + v37] = v44;
            if ( v36 >= 3 )
            {
              LODWORD(outTimeScale) = 3;
              LODWORD(outTargetScale) = v36;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outTargetScale, outTimeScale) )
                __debugbreak();
            }
            v45 = v44 * v77[v33];
            holdBreathScale = ps->holdBreathScale;
            *(float *)((char *)v80.v + v43) = v45;
            if ( v36 >= 3 )
            {
              LODWORD(outTimeScale) = 3;
              LODWORD(outTargetScale) = v36;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outTargetScale, outTimeScale) )
                __debugbreak();
            }
            v47 = holdBreathScale * v45;
            *(float *)((char *)v80.v + v43) = holdBreathScale * v45;
            if ( v36 >= 3 )
            {
              LODWORD(outTimeScale) = 3;
              LODWORD(outTargetScale) = v36;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outTargetScale, outTimeScale) )
                __debugbreak();
            }
            *(float *)((char *)v80.v + v43) = v47 * v20;
            if ( v36 >= 3 )
            {
              LODWORD(outTimeScale) = 3;
              LODWORD(outTargetScale) = v36;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outTargetScale, outTimeScale) )
                __debugbreak();
            }
            v48 = (float)((float)(v47 * v20) * v41) * 0.0099999998;
            if ( v36 >= 3 )
            {
              LODWORD(outTimeScale) = 3;
              LODWORD(outTargetScale) = v36;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outTargetScale, outTimeScale) )
                __debugbreak();
            }
            v35 = (char *)&v86 + v15 * 4;
          }
          ++v36;
          ++v37;
          v39[v68 / 4] = v48;
          v38 = v36 < 3;
        }
        while ( (int)v36 < 3 );
        v29 = v63;
        v32 = v64;
        v3 = v65;
        p_ShouldIncrementViewMovementIdleTimeADS = v66;
      }
      v26 = 0;
      if ( v29 != 1 )
      {
        v49 = v5;
        *(float *)&v49 = *(float *)&v5 + *(float *)&v92.m256i_i32[v15];
        v5 = v49;
        v50 = v6;
        *(float *)&v50 = *(float *)&v6 + *(float *)&v92.m256i_i32[v15 + 1];
        v6 = v50;
        v51 = v7;
        *(float *)&v51 = *(float *)&v7 + *(float *)&v92.m256i_i32[v15 + 2];
        v7 = v51;
      }
    }
    ++v29;
    ++p_ShouldIncrementViewMovementIdleTimeADS;
    v32 -= 12i64;
    LODWORD(v63) = v29;
    ++v33;
    v66 = p_ShouldIncrementViewMovementIdleTimeADS;
    v15 += 3i64;
    v64 = v32;
  }
  while ( v29 < 4 );
  if ( v61 )
  {
    fWeaponPosFrac = ps->weapCommon.fWeaponPosFrac;
    *(float *)&v5 = *(float *)&v5 + (float)((float)(*(float *)&v92.m256i_i32[3] - *(float *)&v5) * fWeaponPosFrac);
    *(float *)&v6 = *(float *)&v6 + (float)((float)(*(float *)&v92.m256i_i32[4] - *(float *)&v6) * fWeaponPosFrac);
    *(float *)&v7 = *(float *)&v7 + (float)((float)(*(float *)&v92.m256i_i32[5] - *(float *)&v7) * fWeaponPosFrac);
  }
  v53 = v69;
  v54 = *(float *)&v6 + v69->v[1];
  v69->v[0] = *(float *)&v5 + v69->v[0];
  v53->v[2] = *(float *)&v7 + v53->v[2];
  v53->v[1] = v54;
}

/*
==============
BG_CalculateViewMovement_Bob
==============
*/
void BG_CalculateViewMovement_Bob(const int (*packedBobCycle)[2], float cyclePhaseOffset, float *outVertical, float *outHorizontal)
{
  float v6; 
  float v7; 
  float v8; 
  float outViewAmplitude; 
  float outViewCycle; 

  BG_GetBobValue(packedBobCycle, &outViewCycle, &outViewAmplitude, NULL);
  v6 = cyclePhaseOffset + outViewCycle;
  if ( outVertical )
  {
    v7 = sinf_0((float)(v6 * 4.0) + 1.5707964) * 0.15000001;
    v8 = sinf_0(v6 * 2.0);
    *outVertical = (float)(v7 + (float)(v8 * 0.75)) * outViewAmplitude;
  }
  if ( outHorizontal )
    *outHorizontal = sinf_0(v6) * outViewAmplitude;
}

/*
==============
BG_CalculateViewMovement_IdleFactor
==============
*/
void BG_CalculateViewMovement_IdleFactor(const ViewMovementParams *const params, ViewMovementState *const idleState)
{
  const playerState_s *ps; 
  const BgWeaponMap *weaponMap; 
  const Weapon *ViewmodelWeapon; 
  bool v7; 
  double v8; 
  float v9; 
  double v10; 
  bool v11; 
  float fLastIdleFactor; 
  float v17; 
  __int128 fLastIdleFactor_low; 

  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2237, ASSERT_TYPE_ASSERT, "(params)", (const char *)&queryFormat, "params") )
    __debugbreak();
  if ( !idleState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2238, ASSERT_TYPE_ASSERT, "(idleState)", (const char *)&queryFormat, "idleState") )
    __debugbreak();
  ps = params->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2241, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  weaponMap = params->weaponMap;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2244, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  ViewmodelWeapon = BG_GetViewmodelWeapon(weaponMap, ps);
  v7 = BG_UsingAlternate(ps);
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ps->eFlags, ACTIVE, 4u) )
  {
    v8 = BG_IdleProneFactor(ViewmodelWeapon, v7);
    v9 = *(float *)&v8;
  }
  else if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ps->eFlags, ACTIVE, 3u) )
  {
    v10 = BG_IdleCrouchFactor(ViewmodelWeapon, v7);
    v9 = *(float *)&v10;
  }
  else
  {
    v9 = FLOAT_1_0;
  }
  v11 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|0x80);
  fLastIdleFactor = idleState->fLastIdleFactor;
  _XMM0 = v11;
  __asm { vpcmpeqd xmm3, xmm0, xmm1 }
  _XMM1 = LODWORD(FLOAT_0_5);
  __asm { vblendvps xmm0, xmm1, xmm2, xmm3 }
  if ( v9 != idleState->fLastIdleFactor )
  {
    v17 = *(float *)&_XMM0 * params->updateTime;
    if ( v9 <= fLastIdleFactor )
    {
      fLastIdleFactor_low = LODWORD(idleState->fLastIdleFactor);
      *(float *)&fLastIdleFactor_low = fLastIdleFactor - v17;
      _XMM1 = fLastIdleFactor_low;
      __asm
      {
        vcmpltss xmm0, xmm1, xmm6
        vblendvps xmm0, xmm1, xmm6, xmm0
      }
      idleState->fLastIdleFactor = *(float *)&_XMM0;
    }
    else
    {
      idleState->fLastIdleFactor = fLastIdleFactor + v17;
      if ( (float)(fLastIdleFactor + v17) > v9 )
        idleState->fLastIdleFactor = v9;
    }
  }
}

/*
==============
BG_CalculateWeaponMovement
==============
*/
void BG_CalculateWeaponMovement(const WeaponMovementParams *const params, WeaponMovementState *ws, float *outTiltOffset, float *outMovementTiltOffset, vec3_t *outStandAnglesPivotOffset, vec3_t *outDuckedAnglesPivotOffset, vec3_t *outCombinedAngles, vec3_t (*outAnglesCategorized)[30], vec3_t *outOrigin)
{
  __int128 v9; 
  int v14; 
  bool v15; 
  OmnvarData v16; 
  float *v17; 
  const playerState_s *ps; 
  const dvar_t *v19; 
  const BgHandler *handler; 
  const playerState_s *v21; 
  float v22; 
  float value; 
  float v24; 
  float v25; 
  int serverTime; 
  unsigned int IndexByName; 
  int v28; 
  unsigned int v29; 
  int v30; 
  unsigned int v31; 
  float v32; 
  const dvar_t *v33; 
  const BgHandler *v34; 
  const playerState_s *v35; 
  float v36; 
  float v37; 
  int v38; 
  unsigned int v39; 
  int v40; 
  unsigned int v41; 
  int v42; 
  unsigned int v43; 
  float v44; 
  OmnvarData outData; 
  float *outMovementTiltOffseta; 
  float *outTiltOffseta; 
  __int128 v48; 

  outMovementTiltOffseta = outMovementTiltOffset;
  outTiltOffseta = outTiltOffset;
  outData = (OmnvarData)outDuckedAnglesPivotOffset;
  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1889, ASSERT_TYPE_ASSERT, "(params)", (const char *)&queryFormat, "params") )
    __debugbreak();
  if ( !ws && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1890, ASSERT_TYPE_ASSERT, "(ws)", (const char *)&queryFormat, "ws") )
    __debugbreak();
  if ( !outAnglesCategorized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1891, ASSERT_TYPE_ASSERT, "(outAnglesCategorized)", (const char *)&queryFormat, "outAnglesCategorized") )
    __debugbreak();
  if ( !outTiltOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1892, ASSERT_TYPE_ASSERT, "(outTiltOffset)", (const char *)&queryFormat, "outTiltOffset") )
    __debugbreak();
  if ( !outMovementTiltOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1893, ASSERT_TYPE_ASSERT, "(outMovementTiltOffset)", (const char *)&queryFormat, "outMovementTiltOffset") )
    __debugbreak();
  v14 = 0;
  v15 = BG_ProceduralGunMotionDisabled(params->ps);
  if ( !v15 && !memcmp_0(&params->weapon, ws, 0x3Cui64) )
    goto LABEL_20;
  *(_QWORD *)ws->rawRecoilAngles.v = 0i64;
  *(_QWORD *)&ws->rawRecoilAngles.z = 0i64;
  *(_QWORD *)&ws->recoilAngles.y = 0i64;
  *(_QWORD *)ws->recoilSpeed.v = 0i64;
  *(_QWORD *)&ws->recoilSpeed.z = 0i64;
  ws->recoilNeedsToCrossCenter = 0;
  *(_QWORD *)&ws->swayAngles.y = 0i64;
  *(_QWORD *)ws->swayViewAngles.v = 0i64;
  ws->swayViewAngles.v[2] = 0.0;
  *(__m256i *)&ws->weapon.weaponIdx = *(__m256i *)&params->weapon.weaponIdx;
  *(_OWORD *)&ws->weapon.attachmentVariationIndices[5] = *(_OWORD *)&params->weapon.attachmentVariationIndices[5];
  *(double *)&ws->weapon.attachmentVariationIndices[21] = *(double *)&params->weapon.attachmentVariationIndices[21];
  *(_DWORD *)&ws->weapon.weaponCamo = *(_DWORD *)&params->weapon.weaponCamo;
  if ( v15 )
  {
    *(_QWORD *)outStandAnglesPivotOffset->v = 0i64;
    outStandAnglesPivotOffset->v[2] = 0.0;
    v16 = outData;
    v17 = outTiltOffseta;
    **(_QWORD **)&outData = 0i64;
    *(_DWORD *)(*(_QWORD *)&v16 + 8i64) = 0;
    *(_QWORD *)outCombinedAngles->v = 0i64;
    outCombinedAngles->v[2] = 0.0;
    *(_QWORD *)outOrigin->v = 0i64;
    outOrigin->v[2] = 0.0;
    *v17 = 0.0;
    *outMovementTiltOffseta = 0.0;
    *(_OWORD *)(*outAnglesCategorized)[0].v = 0ui64;
    *(_QWORD *)&(*outAnglesCategorized)[1].y = 0i64;
    *(_OWORD *)(*outAnglesCategorized)[2].v = 0ui64;
    *(_QWORD *)&(*outAnglesCategorized)[3].y = 0i64;
    *(_OWORD *)(*outAnglesCategorized)[4].v = 0ui64;
    *(_QWORD *)&(*outAnglesCategorized)[5].y = 0i64;
    *(_OWORD *)(*outAnglesCategorized)[6].v = 0ui64;
    *(_QWORD *)&(*outAnglesCategorized)[7].y = 0i64;
    *(_OWORD *)(*outAnglesCategorized)[8].v = 0ui64;
    *(_QWORD *)&(*outAnglesCategorized)[9].y = 0i64;
    *(_OWORD *)(*outAnglesCategorized)[10].v = 0ui64;
    *(_QWORD *)&(*outAnglesCategorized)[11].y = 0i64;
    *(_OWORD *)(*outAnglesCategorized)[12].v = 0ui64;
    *(_QWORD *)&(*outAnglesCategorized)[13].y = 0i64;
    *(_OWORD *)(*outAnglesCategorized)[14].v = 0ui64;
    *(_QWORD *)&(*outAnglesCategorized)[15].y = 0i64;
    *(_OWORD *)(*outAnglesCategorized)[16].v = 0ui64;
    *(_QWORD *)&(*outAnglesCategorized)[17].y = 0i64;
    *(_OWORD *)(*outAnglesCategorized)[18].v = 0ui64;
    *(_QWORD *)&(*outAnglesCategorized)[19].y = 0i64;
    *(_OWORD *)(*outAnglesCategorized)[20].v = 0ui64;
    *(_QWORD *)&(*outAnglesCategorized)[21].y = 0i64;
    *(_OWORD *)(*outAnglesCategorized)[22].v = 0ui64;
    *(_QWORD *)&(*outAnglesCategorized)[23].y = 0i64;
    *(_OWORD *)(*outAnglesCategorized)[24].v = 0ui64;
    *(_QWORD *)&(*outAnglesCategorized)[25].y = 0i64;
    *(_OWORD *)(*outAnglesCategorized)[26].v = 0ui64;
    *(_QWORD *)&(*outAnglesCategorized)[27].y = 0i64;
    *(_OWORD *)(*outAnglesCategorized)[28].v = 0ui64;
    *(_QWORD *)&(*outAnglesCategorized)[29].y = 0i64;
  }
  else
  {
LABEL_20:
    v48 = v9;
    BG_CalculateWeaponMovement_Base(params, ws, outStandAnglesPivotOffset, *(vec3_t **)&outData);
    BG_CalculateWeaponMovement_Sway(params, ws);
    BG_CalculateWeaponMovement_Recoil(params, ws);
    BG_ContextMount_CalculateWeaponMovement(params, ws);
    if ( BG_UseAnimatedWeaponMovement(params->weaponMap, params->ps, params->handler) )
    {
      *(_QWORD *)ws->bobAngles.v = 0i64;
      ws->bobAngles.v[2] = 0.0;
    }
    else
    {
      BG_CalculateWeaponMovement_Bob(params, ws);
    }
    ps = params->ps;
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1882, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    LOBYTE(v14) = ps->pm_type < 7;
    BG_SetWeaponMovementAngles(params, ws, v14, outTiltOffseta, outMovementTiltOffseta, outCombinedAngles, outAnglesCategorized);
    v19 = DCONST_DVARMPBOOL_useScriptWeaponAndViewOffsets;
    handler = params->handler;
    v21 = params->ps;
    v22 = 0.0;
    value = 0.0;
    v24 = 0.0;
    v25 = 0.0;
    if ( !DCONST_DVARMPBOOL_useScriptWeaponAndViewOffsets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "useScriptWeaponAndViewOffsets") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v19);
    if ( v19->current.enabled )
    {
      serverTime = v21->serverTime;
      IndexByName = BG_Omnvar_GetIndexByName("protogun_ax");
      BG_Omnvar_GetDataAtPmoveTime(v21->clientNum, handler, IndexByName, serverTime, &outData);
      value = outData.current.value;
      v28 = v21->serverTime;
      v29 = BG_Omnvar_GetIndexByName("protogun_ay");
      BG_Omnvar_GetDataAtPmoveTime(v21->clientNum, handler, v29, v28, &outData);
      v24 = outData.current.value;
      v30 = v21->serverTime;
      v31 = BG_Omnvar_GetIndexByName("protogun_az");
      BG_Omnvar_GetDataAtPmoveTime(v21->clientNum, handler, v31, v30, &outData);
      v25 = outData.current.value;
    }
    v32 = v25 + outCombinedAngles->v[2];
    outCombinedAngles->v[0] = value + outCombinedAngles->v[0];
    outCombinedAngles->v[1] = v24 + outCombinedAngles->v[1];
    outCombinedAngles->v[2] = v32;
    BG_WeaponOffsets_ApplyWeaponAngles(params->ps, params->serverTime, params->handler, outCombinedAngles, outAnglesCategorized);
    BG_SetWeaponMovementOrigin(params, ws, outAnglesCategorized, outOrigin);
    v33 = DCONST_DVARMPBOOL_useScriptWeaponAndViewOffsets;
    v34 = params->handler;
    v35 = params->ps;
    v36 = 0.0;
    v37 = 0.0;
    if ( !DCONST_DVARMPBOOL_useScriptWeaponAndViewOffsets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "useScriptWeaponAndViewOffsets") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v33);
    if ( v33->current.enabled )
    {
      v38 = v35->serverTime;
      v39 = BG_Omnvar_GetIndexByName("protogun_x");
      BG_Omnvar_GetDataAtPmoveTime(v35->clientNum, v34, v39, v38, &outData);
      v22 = outData.current.value;
      v40 = v35->serverTime;
      v41 = BG_Omnvar_GetIndexByName("protogun_y");
      BG_Omnvar_GetDataAtPmoveTime(v35->clientNum, v34, v41, v40, &outData);
      v36 = outData.current.value;
      v42 = v35->serverTime;
      v43 = BG_Omnvar_GetIndexByName("protogun_z");
      BG_Omnvar_GetDataAtPmoveTime(v35->clientNum, v34, v43, v42, &outData);
      v37 = outData.current.value;
    }
    v44 = v37 + outOrigin->v[2];
    outOrigin->v[0] = v22 + outOrigin->v[0];
    outOrigin->v[1] = v36 + outOrigin->v[1];
    outOrigin->v[2] = v44;
    BG_WeaponOffsets_ApplyWeaponTranslation(params->ps, params->serverTime, params->handler, outOrigin);
  }
}

/*
==============
BG_CalculateWeaponMovement_Base
==============
*/
void BG_CalculateWeaponMovement_Base(const WeaponMovementParams *const params, WeaponMovementState *ws, vec3_t *outStandAnglesPivotOffset, vec3_t *outDuckedAnglesPivotOffset)
{
  const playerState_s *ps; 
  const BgWeaponMap *weaponMap; 
  const Weapon *ViewmodelWeapon; 
  bool v10; 
  const WeaponDef *v11; 
  int v12; 
  const SuitDef *SuitDef; 
  bool v14; 
  bool v15; 
  float fProneMoveMinSpeed; 
  int v17; 
  vec3_t targetAngles; 
  vec3_t targetPos; 
  vec3_t targetAnglesCrouch; 
  vec3_t targetAnglesStand; 

  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1183, ASSERT_TYPE_ASSERT, "(params)", (const char *)&queryFormat, "params") )
    __debugbreak();
  if ( !ws && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1184, ASSERT_TYPE_ASSERT, "(ws)", (const char *)&queryFormat, "ws") )
    __debugbreak();
  ps = params->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1187, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  weaponMap = params->weaponMap;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1190, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  ViewmodelWeapon = BG_GetViewmodelWeapon(weaponMap, ps);
  v10 = BG_UsingAlternate(ps);
  v11 = BG_WeaponDef(ViewmodelWeapon, v10);
  v12 = 0;
  SuitDef = BG_GetSuitDef(ps->suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1196, ASSERT_TYPE_ASSERT, "( suitDef ) != ( nullptr )", "%s != %s\n\t%p, %p", "suitDef", "nullptr", NULL, NULL) )
    __debugbreak();
  v14 = ps->viewHeightTarget == SuitDef->viewheight_crouch;
  v15 = ps->viewHeightTarget == BG_Suit_GetProneViewHeight(SuitDef);
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Du) )
  {
    v15 = 0;
    v14 = 1;
  }
  *(_QWORD *)outStandAnglesPivotOffset->v = 0i64;
  outStandAnglesPivotOffset->v[2] = 0.0;
  *(_QWORD *)outDuckedAnglesPivotOffset->v = 0i64;
  outDuckedAnglesPivotOffset->v[2] = 0.0;
  targetPos.v[0] = 0.0;
  targetPos.v[1] = 0.0;
  targetPos.v[2] = 0.0;
  targetAngles.v[0] = 0.0;
  targetAngles.v[1] = 0.0;
  targetAngles.v[2] = 0.0;
  targetAnglesStand.v[0] = 0.0;
  targetAnglesStand.v[1] = 0.0;
  targetAnglesStand.v[2] = 0.0;
  targetAnglesCrouch.v[0] = 0.0;
  targetAnglesCrouch.v[1] = 0.0;
  targetAnglesCrouch.v[2] = 0.0;
  if ( v15 )
  {
    fProneMoveMinSpeed = v11->fProneMoveMinSpeed;
  }
  else if ( v14 )
  {
    fProneMoveMinSpeed = v11->fDuckedMoveMinSpeed;
  }
  else
  {
    fProneMoveMinSpeed = v11->fStandMoveMinSpeed;
  }
  if ( fProneMoveMinSpeed < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1225, ASSERT_TYPE_SANITY, "( ( minSpeed >= 0.f ) )", "( minSpeed ) = %g", fProneMoveMinSpeed) )
    __debugbreak();
  if ( fProneMoveMinSpeed >= params->xySpeed || (v17 = 1, (float)ps->speed <= fProneMoveMinSpeed) )
    v17 = 0;
  if ( BG_HasLadderHand(ps) || BG_Ladder_IsActive(ps) )
    v12 = 1;
  if ( BG_GameInterface_CalculateWeaponMovement_BaseStance(ps) )
    BG_CalculateWeaponMovement_Base_Internal_Stance(params, ws, v14, v15, &targetPos, &targetAngles, &targetAnglesStand, outStandAnglesPivotOffset, &targetAnglesCrouch, outDuckedAnglesPivotOffset);
  if ( v17 && !v12 )
    BG_CalculateWeaponMovement_Base_Internal_Movement(params, ws, v14, v15, fProneMoveMinSpeed, &targetPos, &targetAngles);
  BG_CalculateWeaponMovement_Base_Internal_Save(params, ws, &targetPos, &targetAngles, &targetAnglesStand, &targetAnglesCrouch, v15);
}

/*
==============
BG_CalculateWeaponMovement_Base_AdsFrac
==============
*/
float BG_CalculateWeaponMovement_Base_AdsFrac(const WeaponMovementParams *const params)
{
  const playerState_s *ps; 
  const BgWeaponMap *weaponMap; 
  const Weapon *ViewmodelOrOffhandADSSupportWeapon; 
  double WeaponOrOffhandAdsFrac; 
  double v6; 
  bool outIsAlternate; 
  AdsOffsetInterpolationType outHipOffsetLerpType; 

  ps = params->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 672, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  weaponMap = params->weaponMap;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 675, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  ViewmodelOrOffhandADSSupportWeapon = BG_GetViewmodelOrOffhandADSSupportWeapon(weaponMap, ps, &outIsAlternate);
  WeaponOrOffhandAdsFrac = BG_GetWeaponOrOffhandAdsFrac(weaponMap, ps);
  BG_GetHipOffsetLerpType(ViewmodelOrOffhandADSSupportWeapon, outIsAlternate, &outHipOffsetLerpType);
  v6 = BG_CalculateEaseMotionFactor(1.0 - *(float *)&WeaponOrOffhandAdsFrac, outHipOffsetLerpType);
  return *(float *)&v6;
}

/*
==============
BG_CalculateWeaponMovement_Base_Internal_Movement
==============
*/
void BG_CalculateWeaponMovement_Base_Internal_Movement(const WeaponMovementParams *const params, const WeaponMovementState *const ws, bool isCrouched, bool isProne, float minSpeed, vec3_t *targetPos, vec3_t *targetAngles)
{
  const playerState_s *ps; 
  const BgWeaponMap *weaponMap; 
  const Weapon *ViewmodelWeapon; 
  bool v15; 
  const WeaponDef *v16; 
  __int64 v17; 
  __int64 v18; 
  __int128 xySpeed_low; 
  double WeaponOrOffhandAdsFrac; 
  float v24; 
  float v25; 
  float xySpeed; 
  double LateralSpeed; 
  float v28; 
  unsigned int v29; 
  double v30; 
  double v31; 
  double v32; 
  float v33; 
  vec3_t right; 

  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1040, ASSERT_TYPE_ASSERT, "(params)", (const char *)&queryFormat, "params") )
    __debugbreak();
  if ( !ws && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1041, ASSERT_TYPE_ASSERT, "(ws)", (const char *)&queryFormat, "ws") )
    __debugbreak();
  ps = params->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1044, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  weaponMap = params->weaponMap;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1047, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  ViewmodelWeapon = BG_GetViewmodelWeapon(weaponMap, ps);
  v15 = BG_UsingAlternate(ps);
  v16 = BG_WeaponDef(ViewmodelWeapon, v15);
  if ( isProne )
  {
    v17 = 772i64;
    v18 = 784i64;
  }
  else if ( isCrouched )
  {
    v17 = 736i64;
    v18 = 748i64;
  }
  else
  {
    v17 = 648i64;
    v18 = 660i64;
  }
  xySpeed_low = LODWORD(params->xySpeed);
  *(float *)&xySpeed_low = (float)(params->xySpeed - minSpeed) / (float)((float)ps->speed - minSpeed);
  _XMM2 = xySpeed_low;
  __asm
  {
    vminss  xmm7, xmm2, xmm6
    vxorpd  xmm11, xmm11, xmm11
  }
  if ( (*(float *)&_XMM7 < 0.0 || *(float *)&_XMM7 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1073, ASSERT_TYPE_SANITY, "( 0.0f ) <= ( speedFrac ) && ( speedFrac ) <= ( 1.0f )", "speedFrac not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", *(float *)&_XMM7, *(double *)&_XMM11, DOUBLE_1_0) )
    __debugbreak();
  WeaponOrOffhandAdsFrac = BG_GetWeaponOrOffhandAdsFrac(weaponMap, ps);
  v25 = 1.0 - *(float *)&WeaponOrOffhandAdsFrac;
  v24 = 1.0 - *(float *)&WeaponOrOffhandAdsFrac;
  if ( ((float)(1.0 - *(float *)&WeaponOrOffhandAdsFrac) < 0.0 || v25 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1079, ASSERT_TYPE_SANITY, "( 0.0f ) <= ( angleWeight ) && ( angleWeight ) <= ( 1.0f )", "angleWeight not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v25, *(double *)&_XMM11, DOUBLE_1_0) )
    __debugbreak();
  targetPos->v[0] = (float)(*(float *)&_XMM7 * *(float *)((char *)&v16->szOverlayName + v17)) + targetPos->v[0];
  targetPos->v[1] = (float)(*(float *)&_XMM7 * *(float *)((char *)&v16->szOverlayName + v17 + 4)) + targetPos->v[1];
  targetPos->v[2] = (float)(*(float *)&_XMM7 * *(float *)((char *)&v16->gunXModel + v17)) + targetPos->v[2];
  targetAngles->v[0] = (float)((float)(v25 * *(float *)&_XMM7) * *(float *)((char *)&v16->szOverlayName + v18)) + targetAngles->v[0];
  targetAngles->v[1] = (float)((float)(v25 * *(float *)&_XMM7) * *(float *)((char *)&v16->szOverlayName + v18 + 4)) + targetAngles->v[1];
  targetAngles->v[2] = (float)((float)(v25 * *(float *)&_XMM7) * *(float *)((char *)&v16->gunXModel + v18)) + targetAngles->v[2];
  BG_GetPlayerViewDirection(ps, NULL, &right, NULL, params->handler, 0);
  if ( params->xySpeed <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1087, ASSERT_TYPE_ASSERT, "(params->xySpeed > 0.0f)", (const char *)&queryFormat, "params->xySpeed > 0.0f") )
    __debugbreak();
  if ( !BG_IsPlayerZeroG(ps) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) )
  {
    xySpeed = params->xySpeed;
    LateralSpeed = BG_GetLateralSpeed(ps, params->handler);
    LODWORD(v28) = 0x80000000 - LODWORD(xySpeed);
    if ( xySpeed >= 0.0 )
      v28 = xySpeed;
    v29 = 0x80000000 - LODWORD(LateralSpeed);
    if ( SLODWORD(LateralSpeed) >= 0 )
      v29 = LODWORD(LateralSpeed);
    if ( (int)abs32(v29 - LODWORD(v28)) > 8 )
    {
      v30 = params->xySpeed;
      v31 = BG_GetLateralSpeed(ps, params->handler);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1091, ASSERT_TYPE_ASSERT, "AlmostEqual( ( BG_GetLateralSpeed( ps, params->handler ) ), ( params->xySpeed ) )", "AlmostEqual(BG_GetLateralSpeed( ps, params->handler ), params->xySpeed)\n\t%g, %g", *(float *)&v31, v30) )
        __debugbreak();
    }
  }
  v32 = BG_LateralVelocityVecDot(ps, &right, params->handler);
  v33 = (float)(*(float *)&v32 * *(float *)&_XMM7) / params->xySpeed;
  if ( (v33 < -1.01 || v33 > 1.01) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1094, ASSERT_TYPE_SANITY, "( -1.01f ) <= ( strafeFrac ) && ( strafeFrac ) <= ( 1.01f )", "strafeFrac not in [-1.01f, 1.01f]\n\t%g not in [%g, %g]", v33, *(double *)&_xmm, *((double *)&_xmm + 1)) )
    __debugbreak();
  targetPos->v[0] = (float)(v33 * v16->strafeMove.v[0]) + targetPos->v[0];
  targetPos->v[1] = (float)(v33 * v16->strafeMove.v[1]) + targetPos->v[1];
  targetPos->v[2] = (float)(v33 * v16->strafeMove.v[2]) + targetPos->v[2];
  targetAngles->v[0] = (float)((float)(v33 * v24) * v16->strafeRot.v[0]) + targetAngles->v[0];
  targetAngles->v[1] = (float)((float)(v33 * v24) * v16->strafeRot.v[1]) + targetAngles->v[1];
  targetAngles->v[2] = (float)((float)(v33 * v24) * v16->strafeRot.v[2]) + targetAngles->v[2];
}

/*
==============
BG_CalculateWeaponMovement_Base_Internal_Save
==============
*/
void BG_CalculateWeaponMovement_Base_Internal_Save(const WeaponMovementParams *const params, WeaponMovementState *ws, const vec3_t *targetPos, const vec3_t *targetAngles, const vec3_t *targetAnglesStand, const vec3_t *targetAnglesCrouch, bool isProne)
{
  const playerState_s *ps; 
  const BgWeaponMap *weaponMap; 
  const Weapon *ViewmodelWeapon; 
  bool v15; 
  const WeaponDef *v16; 
  __int128 fPosProneMoveRate_low; 
  __int128 fPosProneRotRate_low; 
  __int128 v22; 
  __int128 v25; 
  __int128 v27; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 

  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1125, ASSERT_TYPE_ASSERT, "(params)", (const char *)&queryFormat, "params") )
    __debugbreak();
  if ( !ws && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1126, ASSERT_TYPE_ASSERT, "(ws)", (const char *)&queryFormat, "ws") )
    __debugbreak();
  ps = params->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1129, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  weaponMap = params->weaponMap;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1132, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  ViewmodelWeapon = BG_GetViewmodelWeapon(weaponMap, ps);
  v15 = BG_UsingAlternate(ps);
  v16 = BG_WeaponDef(ViewmodelWeapon, v15);
  _XMM0 = LODWORD(params->updateTime);
  __asm { vmaxss  xmm1, xmm0, xmm7 }
  if ( isProne )
  {
    fPosProneMoveRate_low = LODWORD(v16->fPosProneMoveRate);
    fPosProneRotRate_low = LODWORD(v16->fPosProneRotRate);
  }
  else
  {
    fPosProneMoveRate_low = LODWORD(v16->fPosMoveRate);
    fPosProneRotRate_low = LODWORD(v16->fPosRotRate);
  }
  v22 = fPosProneMoveRate_low;
  *(float *)&v22 = *(float *)&fPosProneMoveRate_low * *(float *)&_XMM1;
  _XMM0 = v22;
  __asm { vminss  xmm2, xmm0, xmm6 }
  v25 = fPosProneRotRate_low;
  *(float *)&v25 = *(float *)&fPosProneRotRate_low * *(float *)&_XMM1;
  _XMM0 = v25;
  v27 = _XMM1;
  *(float *)&v27 = *(float *)&_XMM1 * v16->fDuckedOfsRotRate;
  _XMM1 = v27;
  __asm
  {
    vminss  xmm8, xmm1, xmm6
    vminss  xmm9, xmm0, xmm6
  }
  v37 = *(float *)&_XMM9;
  __asm { vxorpd  xmm11, xmm11, xmm11 }
  if ( (*(float *)&_XMM2 < 0.0 || *(float *)&_XMM2 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1155, ASSERT_TYPE_SANITY, "( 0.0f ) <= ( originRate ) && ( originRate ) <= ( 1.0f )", "originRate not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", *(float *)&_XMM2, *(double *)&_XMM11, DOUBLE_1_0) )
    __debugbreak();
  if ( (*(float *)&_XMM9 < 0.0 || *(float *)&_XMM9 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1156, ASSERT_TYPE_SANITY, "( 0.0f ) <= ( angleRate ) && ( angleRate ) <= ( 1.0f )", "angleRate not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", *(float *)&_XMM9, *(double *)&_XMM11, DOUBLE_1_0) )
    __debugbreak();
  if ( (*(float *)&_XMM8 < 0.0 || *(float *)&_XMM8 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1157, ASSERT_TYPE_SANITY, "( 0.0f ) <= ( anglePivotCrouchRate ) && ( anglePivotCrouchRate ) <= ( 1.0f )", "anglePivotCrouchRate not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", *(float *)&_XMM8, *(double *)&_XMM11, DOUBLE_1_0) )
    __debugbreak();
  ws->baseAnglesPivotStand = *targetAnglesStand;
  v31 = targetPos->v[2];
  v32 = targetAngles->v[0];
  v33 = targetAngles->v[1];
  v34 = targetAngles->v[2];
  v35 = targetPos->v[1];
  v36 = targetAnglesCrouch->v[0];
  v38 = targetAnglesCrouch->v[1];
  v39 = ws->baseAnglesPivotCrouch.v[1];
  v40 = targetAnglesCrouch->v[2];
  v41 = ws->baseAnglesPivotCrouch.v[2];
  ws->baseOrigin.v[0] = (float)((float)(targetPos->v[0] - ws->baseOrigin.v[0]) * *(float *)&_XMM2) + ws->baseOrigin.v[0];
  ws->baseOrigin.v[1] = (float)((float)(v35 - ws->baseOrigin.v[1]) * *(float *)&_XMM2) + ws->baseOrigin.v[1];
  ws->baseOrigin.v[2] = (float)((float)(v31 - ws->baseOrigin.v[2]) * *(float *)&_XMM2) + ws->baseOrigin.v[2];
  ws->baseAngles.v[0] = (float)((float)(v32 - ws->baseAngles.v[0]) * v37) + ws->baseAngles.v[0];
  ws->baseAngles.v[1] = (float)((float)(v33 - ws->baseAngles.v[1]) * v37) + ws->baseAngles.v[1];
  ws->baseAngles.v[2] = (float)((float)(v34 - ws->baseAngles.v[2]) * v37) + ws->baseAngles.v[2];
  ws->baseAnglesPivotCrouch.v[0] = (float)((float)(v36 - ws->baseAnglesPivotCrouch.v[0]) * *(float *)&_XMM8) + ws->baseAnglesPivotCrouch.v[0];
  ws->baseAnglesPivotCrouch.v[1] = (float)((float)(v38 - v39) * *(float *)&_XMM8) + ws->baseAnglesPivotCrouch.v[1];
  ws->baseAnglesPivotCrouch.v[2] = (float)((float)(v40 - v41) * *(float *)&_XMM8) + ws->baseAnglesPivotCrouch.v[2];
}

/*
==============
BG_CalculateWeaponMovement_Base_Internal_Stance
==============
*/
void BG_CalculateWeaponMovement_Base_Internal_Stance(const WeaponMovementParams *const params, const WeaponMovementState *const ws, bool isCrouched, bool isProne, vec3_t *targetPos, vec3_t *targetAngles, vec3_t *targetAnglesStand, vec3_t *targetAnglesStandPivot, vec3_t *targetAnglesCrouch, vec3_t *targetAnglesCrouchPivot)
{
  const playerState_s *ps; 
  const BgWeaponMap *weaponMap; 
  const Weapon *ViewmodelOrOffhandADSSupportWeapon; 
  const WeaponDef *v17; 
  vec3_t *v18; 
  const WeaponDef *v19; 
  vec3_t *v20; 
  double v21; 
  bool outIsAlternate; 

  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 987, ASSERT_TYPE_ASSERT, "(params)", (const char *)&queryFormat, "params") )
    __debugbreak();
  if ( !ws && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 988, ASSERT_TYPE_ASSERT, "(ws)", (const char *)&queryFormat, "ws") )
    __debugbreak();
  ps = params->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 991, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  weaponMap = params->weaponMap;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 994, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  ViewmodelOrOffhandADSSupportWeapon = BG_GetViewmodelOrOffhandADSSupportWeapon(weaponMap, ps, &outIsAlternate);
  v17 = BG_WeaponDef(ViewmodelOrOffhandADSSupportWeapon, outIsAlternate);
  v18 = targetPos;
  v19 = v17;
  BG_GetStandWeaponOffset(ViewmodelOrOffhandADSSupportWeapon, 0, targetPos, targetAnglesStand, targetAnglesStandPivot);
  *targetAnglesCrouchPivot = v19->vDuckedOfsRotPivot;
  if ( isCrouched )
  {
    v20 = targetAnglesCrouch;
    v18->v[0] = v18->v[0] + v19->vDuckedOfs.v[0];
    v18->v[1] = v19->vDuckedOfs.v[1] + v18->v[1];
    v18->v[2] = v19->vDuckedOfs.v[2] + v18->v[2];
    v20->v[0] = v19->vDuckedOfsRot.v[0] + v20->v[0];
    v20->v[1] = v19->vDuckedOfsRot.v[1] + v20->v[1];
    v20->v[2] = v19->vDuckedOfsRot.v[2] + v20->v[2];
  }
  else if ( isProne )
  {
    v18->v[0] = v18->v[0] + v19->vProneOfs.v[0];
    v18->v[1] = v19->vProneOfs.v[1] + v18->v[1];
    v18->v[2] = v19->vProneOfs.v[2] + v18->v[2];
  }
  if ( BG_IsAimDownSight(ViewmodelOrOffhandADSSupportWeapon, outIsAlternate) )
  {
    v21 = BG_ADSAimPitch(weaponMap, ps, ViewmodelOrOffhandADSSupportWeapon, outIsAlternate);
    targetAngles->v[0] = (float)(*(float *)&v21 * ps->weapCommon.fWeaponPosFrac) + targetAngles->v[0];
  }
}

/*
==============
BG_CalculateWeaponMovement_Bob
==============
*/
void BG_CalculateWeaponMovement_Bob(const WeaponMovementParams *const params, WeaponMovementState *ws)
{
  const playerState_s *ps; 
  const dvar_t *v5; 
  float value; 
  const dvar_t *v7; 
  float v8; 
  float v9; 
  __int128 unsignedInt; 
  float v11; 
  __int128 v12; 
  const dvar_t *v14; 
  float v16; 
  const BgWeaponMap *weaponMap; 
  const Weapon *ViewmodelOrOffhandADSSupportWeapon; 
  double v19; 
  float v20; 
  bool outIsAlternate; 
  float outAnimCycle; 

  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1618, ASSERT_TYPE_ASSERT, "(params)", (const char *)&queryFormat, "params") )
    __debugbreak();
  if ( !ws && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1619, ASSERT_TYPE_ASSERT, "(ws)", (const char *)&queryFormat, "ws") )
    __debugbreak();
  ps = params->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1622, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  BG_GetBobValue((const int (*)[2])ps->packedBobCycle, NULL, NULL, &outAnimCycle);
  v5 = DCONST_DVARFLT_bg_weaponBobLag;
  if ( !DCONST_DVARFLT_bg_weaponBobLag && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weaponBobLag") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  value = v5->current.value;
  v7 = DCONST_DVARMPFLT_bg_weaponBobAmplitudeBase;
  v9 = (float)((float)(value * 3.1415927) + outAnimCycle) + 6.2831855;
  v8 = v9;
  if ( !DCONST_DVARMPFLT_bg_weaponBobAmplitudeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weaponBobAmplitudeBase") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  unsignedInt = v7->current.unsignedInt;
  v11 = *(float *)&unsignedInt * params->xySpeed;
  *(float *)&unsignedInt = BG_CalculateWeaponMovement_VerticalBobFactor(ps, v9, v11);
  v12 = unsignedInt;
  *(float *)&v12 = *(float *)&unsignedInt * -1.0;
  _XMM0 = v12;
  ws->bobAngles.v[0] = *(float *)&v12;
  ws->bobAngles.v[1] = BG_CalculateWeaponMovement_HorizontalBobFactor(ps, v8, v11) * -1.0;
  v14 = DCONST_DVARMPFLT_bg_weaponBobAmplitudeRoll;
  if ( !DCONST_DVARMPFLT_bg_weaponBobAmplitudeRoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weaponBobAmplitudeRoll") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  *(float *)&_XMM0 = BG_CalculateWeaponMovement_HorizontalBobFactor(ps, v8 + -0.47123894, v11 * v14->current.value);
  __asm { vminss  xmm0, xmm0, xmm6 }
  ws->bobAngles.v[2] = *(float *)&_XMM0;
  *(double *)&_XMM0 = BG_GetWeaponOrOffhandAdsFrac(params->weaponMap, ps);
  v16 = *(float *)&_XMM0;
  if ( *(float *)&_XMM0 > 0.0 )
  {
    weaponMap = params->weaponMap;
    if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1642, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    ViewmodelOrOffhandADSSupportWeapon = BG_GetViewmodelOrOffhandADSSupportWeapon(weaponMap, ps, &outIsAlternate);
    v19 = BG_ADSBobFactor(weaponMap, ps, ViewmodelOrOffhandADSSupportWeapon, outIsAlternate);
    v20 = 1.0 - (float)((float)(1.0 - *(float *)&v19) * v16);
    ws->bobAngles.v[0] = v20 * ws->bobAngles.v[0];
    ws->bobAngles.v[1] = v20 * ws->bobAngles.v[1];
    ws->bobAngles.v[2] = v20 * ws->bobAngles.v[2];
  }
}

/*
==============
BG_CalculateWeaponMovement_HorizontalBobFactor
==============
*/
float BG_CalculateWeaponMovement_HorizontalBobFactor(const playerState_s *ps, float cycle, float speed)
{
  const SuitDef *SuitDef; 
  int viewHeightTarget; 
  const dvar_t *v6; 
  float value; 
  const dvar_t *v8; 
  const char *v9; 
  const dvar_t *v10; 
  const dvar_t *v11; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 117, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  SuitDef = BG_GetSuitDef(ps->suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 119, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  viewHeightTarget = ps->viewHeightTarget;
  if ( viewHeightTarget != BG_Suit_GetProneViewHeight(SuitDef) )
  {
    if ( viewHeightTarget == SuitDef->viewheight_crouch )
    {
      v8 = DCONST_DVARMPVEC2_bg_weaponBobAmplitudeDucked;
      if ( !DCONST_DVARMPVEC2_bg_weaponBobAmplitudeDucked )
      {
        v9 = "bg_weaponBobAmplitudeDucked";
        goto LABEL_22;
      }
    }
    else
    {
      if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u) )
      {
        v6 = DCONST_DVARMPVEC2_bg_weaponBobAmplitudeSprinting;
        if ( !DCONST_DVARMPVEC2_bg_weaponBobAmplitudeSprinting && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weaponBobAmplitudeSprinting") )
          __debugbreak();
        goto LABEL_11;
      }
      v8 = DCONST_DVARMPVEC2_bg_weaponBobAmplitudeStanding;
      if ( !DCONST_DVARMPVEC2_bg_weaponBobAmplitudeStanding )
      {
        v9 = "bg_weaponBobAmplitudeStanding";
LABEL_22:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v9) )
          __debugbreak();
      }
    }
    Dvar_CheckFrontendServerThread(v8);
    value = (float)((float)(1.0 - ps->weapCommon.fWeaponPosFrac) * speed) * v8->current.value;
    goto LABEL_25;
  }
  v6 = DCONST_DVARMPVEC2_bg_weaponBobAmplitudeProne;
  if ( !DCONST_DVARMPVEC2_bg_weaponBobAmplitudeProne && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weaponBobAmplitudeProne") )
    __debugbreak();
LABEL_11:
  Dvar_CheckFrontendServerThread(v6);
  value = speed * v6->current.value;
LABEL_25:
  v10 = DCONST_DVARFLT_bg_weaponBobMax;
  if ( !DCONST_DVARFLT_bg_weaponBobMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weaponBobMax") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( value > v10->current.value )
  {
    v11 = DCONST_DVARFLT_bg_weaponBobMax;
    if ( !DCONST_DVARFLT_bg_weaponBobMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weaponBobMax") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    value = v11->current.value;
  }
  return sinf_0(cycle) * value;
}

/*
==============
BG_CalculateWeaponMovement_IdleFactor
==============
*/
void BG_CalculateWeaponMovement_IdleFactor(const WeaponMovementParams *const params, WeaponMovementState *const weapState)
{
  const playerState_s *ps; 
  const BgWeaponMap *weaponMap; 
  const Weapon *ViewmodelWeapon; 
  bool v7; 
  double v8; 
  float v9; 
  double v10; 
  float fLastIdleFactor; 
  float v14; 
  __int128 fLastIdleFactor_low; 

  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1755, ASSERT_TYPE_ASSERT, "(params)", (const char *)&queryFormat, "params") )
    __debugbreak();
  if ( !weapState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1756, ASSERT_TYPE_ASSERT, "(weapState)", (const char *)&queryFormat, "weapState") )
    __debugbreak();
  ps = params->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1759, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  weaponMap = params->weaponMap;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1762, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  ViewmodelWeapon = BG_GetViewmodelWeapon(weaponMap, ps);
  v7 = BG_UsingAlternate(ps);
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ps->eFlags, ACTIVE, 4u) )
  {
    v8 = BG_IdleProneFactor(ViewmodelWeapon, v7);
    v9 = *(float *)&v8;
  }
  else if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ps->eFlags, ACTIVE, 3u) )
  {
    v10 = BG_IdleCrouchFactor(ViewmodelWeapon, v7);
    v9 = *(float *)&v10;
  }
  else
  {
    v9 = FLOAT_1_0;
  }
  fLastIdleFactor = weapState->fLastIdleFactor;
  if ( v9 != fLastIdleFactor )
  {
    _XMM1 = LODWORD(params->updateTime);
    __asm { vmaxss  xmm1, xmm1, xmm0 }
    v14 = *(float *)&_XMM1 * 0.5;
    if ( v9 <= fLastIdleFactor )
    {
      fLastIdleFactor_low = LODWORD(weapState->fLastIdleFactor);
      *(float *)&fLastIdleFactor_low = fLastIdleFactor - v14;
      _XMM1 = fLastIdleFactor_low;
      __asm
      {
        vcmpltss xmm0, xmm1, xmm2
        vblendvps xmm0, xmm1, xmm2, xmm0
      }
      weapState->fLastIdleFactor = *(float *)&_XMM0;
    }
    else
    {
      weapState->fLastIdleFactor = v14 + fLastIdleFactor;
      if ( (float)(v14 + fLastIdleFactor) > v9 )
        weapState->fLastIdleFactor = v9;
    }
  }
}

/*
==============
BG_CalculateWeaponMovement_Recoil
==============
*/
void BG_CalculateWeaponMovement_Recoil(const WeaponMovementParams *const params, WeaponMovementState *ws)
{
  const playerState_s *ps; 
  const BgWeaponMap *weaponMap; 
  bool v6; 
  const Weapon *ViewmodelWeapon; 
  float fWeaponPosFrac; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  __int128 updateTime_low; 
  float v14; 
  __int128 v15; 
  bool v16; 
  __int64 v17; 
  int v18; 
  float v19; 
  float v20; 
  float v21; 
  float outGunKickPitchScale; 
  float outGunKickYawScale; 
  float hipGunKickAccel; 
  float adsGunKickAccel; 
  float hipGunKickSpeedMax; 
  float adsGunKickSpeedMax; 
  float hipGunKickSpeedDecay; 
  float adsGunKickSpeedDecay; 
  float hipGunKickStaticDecay; 
  float adsGunKickStaticDecay; 
  float hipGunKickReturnAccelScale; 
  float adsGunKickReturnAccelScale; 
  float hipGunKickReturnSpeedCurveScale; 
  float adsGunKickReturnSpeedCurveScale; 
  float outViewKickYawScale; 
  float outViewKickPitchScale; 
  float v38; 
  float v39; 
  const WeaponDef *v40; 
  vec2_t outMaxAngles; 

  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1493, ASSERT_TYPE_ASSERT, "(params)", (const char *)&queryFormat, "params") )
    __debugbreak();
  if ( !ws && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1494, ASSERT_TYPE_ASSERT, "(ws)", (const char *)&queryFormat, "ws") )
    __debugbreak();
  ps = params->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1497, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  weaponMap = params->weaponMap;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1500, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  v6 = BG_UsingAlternate(ps);
  ViewmodelWeapon = BG_GetViewmodelWeapon(weaponMap, ps);
  v40 = BG_WeaponDef(ViewmodelWeapon, v6);
  BG_GetGunKickSpeed(weaponMap, ps, ViewmodelWeapon, v6, &hipGunKickAccel, &hipGunKickSpeedMax, &hipGunKickSpeedDecay, &hipGunKickStaticDecay, &hipGunKickReturnAccelScale, &hipGunKickReturnSpeedCurveScale, &adsGunKickAccel, &adsGunKickSpeedMax, &adsGunKickSpeedDecay, &adsGunKickStaticDecay, &adsGunKickReturnAccelScale, &adsGunKickReturnSpeedCurveScale);
  if ( BG_IsAimDownSight(ViewmodelWeapon, v6) )
  {
    fWeaponPosFrac = ps->weapCommon.fWeaponPosFrac;
    v9 = (float)((float)(adsGunKickAccel - hipGunKickAccel) * fWeaponPosFrac) + hipGunKickAccel;
    v10 = (float)((float)(adsGunKickSpeedMax - hipGunKickSpeedMax) * fWeaponPosFrac) + hipGunKickSpeedMax;
    v11 = (float)((float)(adsGunKickSpeedDecay - hipGunKickSpeedDecay) * fWeaponPosFrac) + hipGunKickSpeedDecay;
    v12 = (float)((float)(adsGunKickStaticDecay - hipGunKickStaticDecay) * fWeaponPosFrac) + hipGunKickStaticDecay;
    v39 = (float)((float)(adsGunKickReturnAccelScale - hipGunKickReturnAccelScale) * fWeaponPosFrac) + hipGunKickReturnAccelScale;
    v38 = (float)((float)(adsGunKickReturnSpeedCurveScale - hipGunKickReturnSpeedCurveScale) * fWeaponPosFrac) + hipGunKickReturnSpeedCurveScale;
    outViewKickPitchScale = FLOAT_1_0;
    outViewKickYawScale = FLOAT_1_0;
    outGunKickPitchScale = FLOAT_1_0;
    outGunKickYawScale = FLOAT_1_0;
    BG_GetViewAndGunKickScalars(weaponMap, ps, ViewmodelWeapon, v6, &outViewKickPitchScale, &outViewKickYawScale, &outGunKickPitchScale, &outGunKickYawScale);
    updateTime_low = LODWORD(params->updateTime);
    if ( *(float *)&updateTime_low > 0.0 )
    {
      while ( 1 )
      {
        if ( *(float *)&updateTime_low <= 0.0049999999 )
        {
          v14 = *(float *)&updateTime_low;
          updateTime_low = 0i64;
        }
        else
        {
          v14 = FLOAT_0_0049999999;
          v15 = updateTime_low;
          *(float *)&v15 = *(float *)&updateTime_low + -0.0049999999;
          updateTime_low = v15;
        }
        BG_GetGunKickMaxAngles(weaponMap, ps, ViewmodelWeapon, v6, &outMaxAngles);
        if ( BG_UseSmoothGunKick(weaponMap, ps, ViewmodelWeapon, v6) )
          break;
        BG_CalculateWeaponMovement_Recoil_Internal_SingleAngle(ws->rawRecoilAngles.v, ws->recoilSpeed.v, v14, v40->fGunMaxPitch, v9, v10, v11, v12);
        if ( BG_CalculateWeaponMovement_Recoil_Internal_SingleAngle(&ws->rawRecoilAngles.v[1], &ws->recoilSpeed.v[1], v14, *(float *)(v17 + 1348), v9, v10, v11, v12) )
        {
          v16 = v18 == 0;
LABEL_22:
          if ( !v16 )
            goto LABEL_24;
        }
        if ( *(float *)&updateTime_low <= 0.0 )
          goto LABEL_24;
      }
      v16 = !BG_CalculateKickMovement(v14, &outMaxAngles, 1.0, 1.0, v9, v39, v38, (vec2_t *)&ws->rawRecoilAngles, (vec2_t *)&ws->recoilSpeed, &ws->recoilNeedsToCrossCenter);
      goto LABEL_22;
    }
LABEL_24:
    v19 = ws->rawRecoilAngles.v[0];
    v20 = outGunKickYawScale;
    ws->recoilAngles.v[0] = v19;
    v21 = v19 * outGunKickPitchScale;
    ws->recoilAngles.v[1] = ws->rawRecoilAngles.v[1];
    ws->recoilAngles.v[2] = ws->rawRecoilAngles.v[2];
    ws->recoilAngles.v[0] = v21;
    ws->recoilAngles.v[1] = v20 * ws->recoilAngles.v[1];
  }
}

/*
==============
BG_CalculateWeaponMovement_Recoil_Internal_SingleAngle
==============
*/

__int64 __fastcall BG_CalculateWeaponMovement_Recoil_Internal_SingleAngle(float *fOffset, float *speed, double fTimeStep, float fOfsCap, float fGunKickAccel, float fGunKickSpeedMax, float fGunKickSpeedDecay, float fGunKickStaticDecay)
{
  __int64 result; 
  float v9; 
  float v10; 
  __int128 v11; 
  __int128 v12; 
  float v13; 
  __int128 v14; 
  __int128 v16; 

  result = 0i64;
  if ( COERCE_FLOAT(*(_DWORD *)fOffset & _xmm) < 0.25 && COERCE_FLOAT(*(_DWORD *)speed & _xmm) < 1.0 )
  {
    *fOffset = 0.0;
    *speed = 0.0;
    return 1i64;
  }
  v9 = (float)(*(float *)&fTimeStep * *speed) + *fOffset;
  *fOffset = v9;
  if ( v9 > fOfsCap )
  {
    *fOffset = fOfsCap;
    if ( *speed <= 0.0 )
      goto LABEL_10;
    goto LABEL_9;
  }
  if ( v9 < COERCE_FLOAT(LODWORD(fOfsCap) ^ _xmm) )
  {
    *fOffset = COERCE_FLOAT(LODWORD(fOfsCap) ^ _xmm);
    if ( *speed < 0.0 )
LABEL_9:
      *speed = 0.0;
  }
LABEL_10:
  if ( *fOffset <= 0.0 )
  {
    if ( *fOffset >= 0.0 )
      goto LABEL_15;
    v10 = (float)(*(float *)&fTimeStep * fGunKickAccel) + *speed;
  }
  else
  {
    v10 = *speed - (float)(*(float *)&fTimeStep * fGunKickAccel);
  }
  *speed = v10;
LABEL_15:
  v12 = *(_OWORD *)&fTimeStep;
  *(float *)&v12 = *(float *)&fTimeStep * fGunKickStaticDecay;
  v11 = v12;
  v14 = *(unsigned int *)speed;
  *(float *)&v14 = *speed - (float)((float)(*speed * fGunKickSpeedDecay) * *(float *)&fTimeStep);
  v13 = *(float *)&v14;
  if ( *(float *)&v14 <= 0.0 )
  {
    v16 = v11;
    *(float *)&v16 = *(float *)&v11 + v13;
    _XMM0 = v16;
    *speed = *(float *)&v16;
    if ( *(float *)&v16 > 0.0 )
    {
LABEL_19:
      _XMM0 = 0i64;
      *speed = 0.0;
    }
  }
  else
  {
    *(float *)&v14 = *(float *)&v14 - *(float *)&v11;
    _XMM0 = v14;
    *speed = *(float *)&v14;
    if ( *(float *)&v14 < 0.0 )
      goto LABEL_19;
  }
  *(float *)&_XMM1 = fGunKickSpeedMax;
  if ( *(float *)&_XMM0 <= fGunKickSpeedMax )
  {
    __asm { vcmpltss xmm1, xmm0, xmm2 }
    _XMM0 = *(unsigned int *)speed;
    __asm { vblendvps xmm1, xmm0, xmm2, xmm1 }
  }
  *speed = *(float *)&_XMM1;
  return result;
}

/*
==============
BG_CalculateWeaponMovement_Sway
==============
*/
void BG_CalculateWeaponMovement_Sway(const WeaponMovementParams *const params, WeaponMovementState *ws)
{
  const playerState_s *ps; 
  const BgWeaponMap *weaponMap; 
  const Weapon *ViewmodelOrOffhandADSSupportWeapon; 
  float maxAngle; 
  int PerkNetworkPriorityIndex; 
  unsigned __int64 v9; 
  float lerpSpeed; 
  float pitchScale; 
  float yawScale; 
  float horizScale; 
  float vertScale; 
  double WeaponOrOffhandAdsFrac; 
  float v20; 
  float v21; 
  float swayTransitionLerpSpeed; 
  int shellShockDeltaTime; 
  float v24; 
  float v25; 
  int shellShockFadeTime; 
  double SwayScalar; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  double v34; 
  double v35; 
  float inputDeltaTime; 
  float v37; 
  float v38; 
  double v39; 
  double v40; 
  float v41; 
  float v42; 
  float v43; 
  double v44; 
  double v45; 
  const dvar_t *v46; 
  double v47; 
  float *outAdsSwayLerpSpeedScale; 
  bool outIsAlternate; 
  float outAdsSwayScaleScale; 
  float outAdsSwayMaxAngleScale; 
  float v52; 
  vec3_t v3; 
  SwaySettings outSwaySettings; 

  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1258, ASSERT_TYPE_ASSERT, "(params)", (const char *)&queryFormat, "params") )
    __debugbreak();
  if ( !ws && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1259, ASSERT_TYPE_ASSERT, "(ws)", (const char *)&queryFormat, "ws") )
    __debugbreak();
  if ( params->inputDeltaTime > 0.0 )
  {
    ps = params->ps;
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1267, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    weaponMap = params->weaponMap;
    if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1270, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    ViewmodelOrOffhandADSSupportWeapon = BG_GetViewmodelOrOffhandADSSupportWeapon(weaponMap, ps, &outIsAlternate);
    BG_GetSwaySettings(weaponMap, ps, ViewmodelOrOffhandADSSupportWeapon, outIsAlternate, &outSwaySettings);
    maxAngle = outSwaySettings.hip.common.maxAngle;
    PerkNetworkPriorityIndex = BG_GetPerkNetworkPriorityIndex(0);
    v9 = (unsigned int)PerkNetworkPriorityIndex;
    if ( PerkNetworkPriorityIndex >= 0 )
    {
      if ( (unsigned int)PerkNetworkPriorityIndex >= 0x40 )
      {
        LODWORD(outAdsSwayLerpSpeedScale) = PerkNetworkPriorityIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", outAdsSwayLerpSpeedScale, 64) )
          __debugbreak();
      }
      _XMM0 = ps->perks.array[v9 >> 5] & (0x80000000 >> (v9 & 0x1F));
      __asm { vpcmpeqd xmm2, xmm0, xmm1 }
      _XMM1 = LODWORD(outSwaySettings.hip.maxAngleSteadyAim);
      __asm { vblendvps xmm0, xmm1, xmm8, xmm2 }
      maxAngle = *(float *)&_XMM0;
      outAdsSwayScaleScale = *(float *)&_XMM0;
    }
    lerpSpeed = outSwaySettings.hip.common.lerpSpeed;
    pitchScale = outSwaySettings.hip.common.pitchScale;
    yawScale = outSwaySettings.hip.common.yawScale;
    horizScale = outSwaySettings.hip.common.horizScale;
    vertScale = outSwaySettings.hip.common.vertScale;
    if ( BG_IsAimDownSight(ViewmodelOrOffhandADSSupportWeapon, outIsAlternate) )
    {
      WeaponOrOffhandAdsFrac = BG_GetWeaponOrOffhandAdsFrac(weaponMap, ps);
      if ( *(float *)&WeaponOrOffhandAdsFrac > 0.0 )
      {
        if ( BG_GetOverlay(ViewmodelOrOffhandADSSupportWeapon, outIsAlternate)->reticle )
        {
          if ( !BG_HasDualFOVEquipped(weaponMap, ps) )
            return;
          *(_QWORD *)ws->swayAngles.v = 0i64;
          *(_QWORD *)&ws->swayAngles.z = 0i64;
          *(_QWORD *)&ws->swayOrigin.y = 0i64;
          goto LABEL_44;
        }
        outAdsSwayMaxAngleScale = FLOAT_1_0;
        v52 = FLOAT_1_0;
        outAdsSwayScaleScale = FLOAT_1_0;
        BG_GetADSSwayScalars(weaponMap, ps, ViewmodelOrOffhandADSSupportWeapon, outIsAlternate, &outAdsSwayMaxAngleScale, &v52, &outAdsSwayScaleScale);
        v20 = outSwaySettings.ads.common.maxAngle * outAdsSwayMaxAngleScale;
        maxAngle = outSwaySettings.ads.common.maxAngle * outAdsSwayMaxAngleScale;
        if ( *(float *)&WeaponOrOffhandAdsFrac < 1.0 || (v21 = ws->swayAngles.v[1], v21 > v20) || v21 < COERCE_FLOAT(LODWORD(v20) ^ _xmm) )
          swayTransitionLerpSpeed = outSwaySettings.ads.swayTransitionLerpSpeed;
        else
          swayTransitionLerpSpeed = outSwaySettings.ads.common.lerpSpeed;
        lerpSpeed = swayTransitionLerpSpeed * v52;
        pitchScale = outSwaySettings.ads.common.pitchScale * outAdsSwayScaleScale;
        yawScale = outSwaySettings.ads.common.yawScale * outAdsSwayScaleScale;
        horizScale = outSwaySettings.ads.common.horizScale * outAdsSwayScaleScale;
        vertScale = outSwaySettings.ads.common.vertScale * outAdsSwayScaleScale;
      }
    }
    shellShockDeltaTime = params->shellShockDeltaTime;
    v24 = (float)shellShockDeltaTime;
    v25 = FLOAT_1_0;
    if ( v24 > 0.0 )
    {
      shellShockFadeTime = params->shellShockFadeTime;
      if ( shellShockDeltaTime < shellShockFadeTime )
        v25 = v24 / (float)shellShockFadeTime;
      v25 = (float)((float)((float)((float)(3.0 - (float)(v25 * 2.0)) * v25) * v25) * (float)(outSwaySettings.shellShockScale - 1.0)) + 1.0;
    }
    SwayScalar = BG_GetSwayScalar(weaponMap, ps, ViewmodelOrOffhandADSSupportWeapon, outIsAlternate, params->serverTime);
    v28 = v25 * *(float *)&SwayScalar;
    v29 = pitchScale * (float)(v25 * *(float *)&SwayScalar);
    v30 = yawScale * v28;
    v31 = horizScale * v28;
    v32 = vertScale * v28;
    if ( Com_GameMode_SupportsFeature(WEAPON_SCOPE_TOGGLE_ON|WEAPON_LADDER_AIM) && (params->flags & 1) != 0 )
    {
      ws->swayViewAngles.v[0] = ps->viewangles.v[0];
      ws->swayViewAngles.v[1] = ps->viewangles.v[1];
      ws->swayViewAngles.v[2] = ps->viewangles.v[2];
    }
    AnglesSubtract(&ps->viewangles, &ws->swayViewAngles, &v3);
    v33 = 0.016666668 / params->inputDeltaTime;
    v3.v[1] = v33 * v3.v[1];
    v3.v[0] = v33 * v3.v[0];
    v3.v[2] = v33 * v3.v[2];
    v34 = I_fclamp(v3.v[0], COERCE_FLOAT(LODWORD(maxAngle) ^ _xmm), maxAngle);
    v3.v[0] = *(float *)&v34;
    v35 = I_fclamp(v3.v[1], COERCE_FLOAT(LODWORD(maxAngle) ^ _xmm), maxAngle);
    inputDeltaTime = params->inputDeltaTime;
    v37 = ws->swayOrigin.v[1];
    v38 = v32 * v3.v[0];
    v3.v[1] = *(float *)&v35;
    v39 = DiffTrack(*(float *)&v35 * v31, v37, lerpSpeed, inputDeltaTime);
    ws->swayOrigin.v[1] = *(float *)&v39;
    v40 = DiffTrack(v38, ws->swayOrigin.v[2], lerpSpeed, params->inputDeltaTime);
    v41 = v30 * v3.v[1];
    ws->swayOrigin.v[2] = *(float *)&v40;
    v42 = params->inputDeltaTime;
    v43 = ws->swayAngles.v[0];
    v3.v[1] = v41;
    v3.v[0] = v29 * v3.v[0];
    v44 = DiffTrackAngle(v3.v[0], v43, lerpSpeed, v42);
    ws->swayAngles.v[0] = *(float *)&v44;
    v45 = DiffTrackAngle(v3.v[1], ws->swayAngles.v[1], lerpSpeed, params->inputDeltaTime);
    ws->swayAngles.v[1] = *(float *)&v45;
    if ( BG_ProceduralGunMotionDisabled(ps) )
      goto LABEL_43;
    v46 = DCONST_DVARBOOL_advancedSwayEnabled;
    if ( !DCONST_DVARBOOL_advancedSwayEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "advancedSwayEnabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v46);
    if ( v46->current.enabled && outSwaySettings.adv.enabled )
    {
LABEL_43:
      v47 = BG_GetWeaponOrOffhandAdsFrac(weaponMap, ps);
      ws->swayOrigin.v[0] = (float)((float)(ws->swayOrigin.v[0] - 0.0) * *(float *)&v47) + 0.0;
      ws->swayOrigin.v[1] = (float)((float)(ws->swayOrigin.v[1] - 0.0) * *(float *)&v47) + 0.0;
      ws->swayOrigin.v[2] = (float)((float)(ws->swayOrigin.v[2] - 0.0) * *(float *)&v47) + 0.0;
      ws->swayAngles.v[0] = (float)((float)(ws->swayAngles.v[0] - 0.0) * *(float *)&v47) + 0.0;
      ws->swayAngles.v[1] = (float)((float)(ws->swayAngles.v[1] - 0.0) * *(float *)&v47) + 0.0;
      ws->swayAngles.v[2] = (float)((float)(ws->swayAngles.v[2] - 0.0) * *(float *)&v47) + 0.0;
    }
LABEL_44:
    ws->swayViewAngles.v[0] = ps->viewangles.v[0];
    ws->swayViewAngles.v[1] = ps->viewangles.v[1];
    ws->swayViewAngles.v[2] = ps->viewangles.v[2];
  }
}

/*
==============
BG_CalculateWeaponMovement_VerticalBobFactor
==============
*/
float BG_CalculateWeaponMovement_VerticalBobFactor(const playerState_s *ps, float cycle, float speed)
{
  const SuitDef *SuitDef; 
  int viewHeightTarget; 
  const dvar_t *v6; 
  float value; 
  const dvar_t *v8; 
  const char *v9; 
  const dvar_t *v10; 
  const dvar_t *v11; 
  float v12; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 79, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  SuitDef = BG_GetSuitDef(ps->suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 81, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  viewHeightTarget = ps->viewHeightTarget;
  if ( viewHeightTarget != BG_Suit_GetProneViewHeight(SuitDef) )
  {
    if ( viewHeightTarget == SuitDef->viewheight_crouch )
    {
      v8 = DCONST_DVARMPVEC2_bg_weaponBobAmplitudeDucked;
      if ( !DCONST_DVARMPVEC2_bg_weaponBobAmplitudeDucked )
      {
        v9 = "bg_weaponBobAmplitudeDucked";
        goto LABEL_22;
      }
    }
    else
    {
      if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u) )
      {
        v6 = DCONST_DVARMPVEC2_bg_weaponBobAmplitudeSprinting;
        if ( !DCONST_DVARMPVEC2_bg_weaponBobAmplitudeSprinting && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weaponBobAmplitudeSprinting") )
          __debugbreak();
        goto LABEL_11;
      }
      v8 = DCONST_DVARMPVEC2_bg_weaponBobAmplitudeStanding;
      if ( !DCONST_DVARMPVEC2_bg_weaponBobAmplitudeStanding )
      {
        v9 = "bg_weaponBobAmplitudeStanding";
LABEL_22:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v9) )
          __debugbreak();
      }
    }
    Dvar_CheckFrontendServerThread(v8);
    value = (float)((float)(1.0 - ps->weapCommon.fWeaponPosFrac) * speed) * v8->current.vector.v[1];
    goto LABEL_25;
  }
  v6 = DCONST_DVARMPVEC2_bg_weaponBobAmplitudeProne;
  if ( !DCONST_DVARMPVEC2_bg_weaponBobAmplitudeProne && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weaponBobAmplitudeProne") )
    __debugbreak();
LABEL_11:
  Dvar_CheckFrontendServerThread(v6);
  value = speed * v6->current.vector.v[1];
LABEL_25:
  v10 = DCONST_DVARFLT_bg_weaponBobMax;
  if ( !DCONST_DVARFLT_bg_weaponBobMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weaponBobMax") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( value > v10->current.value )
  {
    v11 = DCONST_DVARFLT_bg_weaponBobMax;
    if ( !DCONST_DVARFLT_bg_weaponBobMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weaponBobMax") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    value = v11->current.value;
  }
  v12 = sinf_0((float)(cycle * 4.0) + 1.5707964);
  return (float)((float)(v12 * 0.15000001) + (float)(sinf_0(cycle * 2.0) * 0.75)) * value;
}

/*
==============
BG_ClearViewState
==============
*/
void BG_ClearViewState(PlayerViewState *const viewState)
{
  if ( !viewState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 55, ASSERT_TYPE_ASSERT, "(viewState)", (const char *)&queryFormat, "viewState") )
    __debugbreak();
  memset_0(&viewState->viewMoveState.idleMotionCache, 0, sizeof(viewState->viewMoveState.idleMotionCache));
  memset_0(&viewState->weapMoveState.idleMotionCache, 0, sizeof(viewState->weapMoveState.idleMotionCache));
  *(_QWORD *)viewState->weapMoveState.baseAngles.v = 0i64;
  *(_QWORD *)&viewState->weapMoveState.baseAngles.z = 0i64;
  *(_QWORD *)&viewState->weapMoveState.baseAnglesPivotStand.y = 0i64;
  *(_QWORD *)viewState->weapMoveState.baseAnglesPivotCrouch.v = 0i64;
  *(_QWORD *)&viewState->weapMoveState.baseAnglesPivotCrouch.z = 0i64;
  *(_QWORD *)&viewState->weapMoveState.baseOrigin.y = 0i64;
  *(_QWORD *)viewState->weapMoveState.rawRecoilAngles.v = 0i64;
  *(_QWORD *)&viewState->weapMoveState.rawRecoilAngles.z = 0i64;
  *(_QWORD *)&viewState->weapMoveState.recoilAngles.y = 0i64;
  *(_QWORD *)viewState->weapMoveState.recoilSpeed.v = 0i64;
  *(_QWORD *)&viewState->weapMoveState.recoilSpeed.z = 0i64;
  *(_QWORD *)viewState->weapMoveState.swayViewAngles.v = 0i64;
  viewState->weapMoveState.swayViewAngles.v[2] = 0.0;
  *(_QWORD *)&viewState->weapMoveState.swayAngles.y = 0i64;
  viewState->viewMoveState.fLastIdleFactor = 1.0;
  viewState->weapMoveState.fLastIdleFactor = 1.0;
  viewState->weapMoveState.recoilNeedsToCrossCenter = 0;
}

/*
==============
BG_ComputeAndApplyWeaponMovement_DamageKickAngles
==============
*/
void BG_ComputeAndApplyWeaponMovement_DamageKickAngles(const WeaponMovementParams *const params, WeaponMovementState *ws, vec3_t *outDamageKickAngles, vec3_t *outCombinedAngles)
{
  const playerState_s *ps; 
  const BgWeaponMap *weaponMap; 
  const Weapon *ViewmodelWeapon; 
  float fWeaponPosFrac; 
  float v12; 
  float v13; 
  float v14; 
  const Weapon *v15; 
  bool v16; 
  float damageTime; 
  double LeanFraction; 
  float v19; 

  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 607, ASSERT_TYPE_ASSERT, "(params)", (const char *)&queryFormat, "params") )
    __debugbreak();
  if ( !ws && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 608, ASSERT_TYPE_ASSERT, "(ws)", (const char *)&queryFormat, "ws") )
    __debugbreak();
  if ( params->damageTime )
  {
    ps = params->ps;
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 616, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    weaponMap = params->weaponMap;
    if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 619, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    ViewmodelWeapon = BG_GetViewmodelWeapon(weaponMap, ps);
    fWeaponPosFrac = ps->weapCommon.fWeaponPosFrac;
    v13 = (float)(fWeaponPosFrac + 1.0) * 0.5;
    v12 = v13;
    v14 = v13 * 100.0;
    v15 = ViewmodelWeapon;
    if ( fWeaponPosFrac > 0.0 )
    {
      if ( BG_IsUsingDualFOV(weaponMap, ps) )
      {
        v12 = v13 * (float)(1.0 - ps->weapCommon.fWeaponPosFrac);
      }
      else
      {
        v16 = BG_UsingAlternate(ps);
        if ( BG_GetOverlay(v15, v16)->reticle )
          v12 = v13 * (float)(1.0 - (float)(ps->weapCommon.fWeaponPosFrac * 0.75));
      }
    }
    damageTime = (float)params->damageTime;
    if ( damageTime >= v14 )
    {
      v19 = (float)(damageTime - v14) * (float)(0.0024999999 / (float)((float)(fWeaponPosFrac + 1.0) * 0.5));
      if ( v19 >= 1.0 )
      {
LABEL_24:
        outCombinedAngles->v[0] = outDamageKickAngles->v[0] + outCombinedAngles->v[0];
        outCombinedAngles->v[1] = outDamageKickAngles->v[1] + outCombinedAngles->v[1];
        outCombinedAngles->v[2] = outDamageKickAngles->v[2] + outCombinedAngles->v[2];
        return;
      }
      LeanFraction = GetLeanFraction(v19);
      *(float *)&LeanFraction = 1.0 - *(float *)&LeanFraction;
    }
    else
    {
      LeanFraction = GetLeanFraction(damageTime / v14);
    }
    outDamageKickAngles->v[0] = (float)((float)(*(float *)&LeanFraction * v12) * params->damagePitch) * 0.5;
    outDamageKickAngles->v[1] = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(*(float *)&LeanFraction * v12) * params->damageRoll) ^ _xmm);
    outDamageKickAngles->v[2] = (float)((float)(*(float *)&LeanFraction * v12) * params->damageRoll) * 0.5;
    goto LABEL_24;
  }
}

/*
==============
BG_ComputeAndApplyWeaponMovement_IdleAngles
==============
*/
void BG_ComputeAndApplyWeaponMovement_IdleAngles(const WeaponMovementParams *const params, WeaponMovementState *ws, const AdvancedIdleSettings *advancedIdleSettings, const WeaponAngleType weaponAngleType, vec3_t *outIdleAngles, vec3_t *outCombinedAngles)
{
  const playerState_s *ps; 
  const BgWeaponMap *weaponMap; 
  const Weapon *ViewmodelOrOffhandADSSupportWeapon; 
  float v13; 
  float v14; 
  float v15; 
  float value; 
  float IdleScaleMultiplier; 
  double WeaponOrOffhandAdsFrac; 
  int IdleCycleStartTime; 
  bool v20; 
  unsigned int v21; 
  int v22; 
  __int64 v23; 
  unsigned int v24; 
  const dvar_t *v25; 
  vec3_t *v26; 
  float v27; 
  float v28; 
  float v29; 
  vec3_t *v30; 
  float v31; 
  float v32; 
  bool outIsAlternate; 
  int idleMotionIndex; 
  vec3_t *outAngles; 
  BSplineRelaxedCBezier *motionSpline; 
  vec3_t magnitudes; 

  outAngles = outIdleAngles;
  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 504, ASSERT_TYPE_ASSERT, "(params)", (const char *)&queryFormat, "params") )
    __debugbreak();
  if ( !ws && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 505, ASSERT_TYPE_ASSERT, "(ws)", (const char *)&queryFormat, "ws") )
    __debugbreak();
  ps = params->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 508, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  weaponMap = params->weaponMap;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 511, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  ViewmodelOrOffhandADSSupportWeapon = BG_GetViewmodelOrOffhandADSSupportWeapon(weaponMap, ps, &outIsAlternate);
  if ( weaponAngleType == WEAPON_ANGLE_TYPE_IDLE )
  {
    magnitudes.v[2] = BG_GetIdleTargScale(weaponMap, ps);
    magnitudes.v[1] = magnitudes.v[2];
    magnitudes.v[0] = magnitudes.v[2];
    v13 = magnitudes.v[2];
    v14 = magnitudes.v[2];
    v15 = magnitudes.v[2];
  }
  else
  {
    if ( !advancedIdleSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 522, ASSERT_TYPE_ASSERT, "(advancedIdleSettings)", (const char *)&queryFormat, "advancedIdleSettings") )
      __debugbreak();
    if ( advancedIdleSettings->useRandomPointsAlgorithm )
      BG_AdvancedIdle_UpdateIdleMotionCache(weaponMap, ps, ViewmodelOrOffhandADSSupportWeapon, 0, &ws->idleMotionCache);
    BG_GetAdvancedIdleTargetScale(ps, weaponMap, ViewmodelOrOffhandADSSupportWeapon, outIsAlternate, advancedIdleSettings, weaponAngleType == WEAPON_ANGLE_TYPE_IDLE_ADVANCED_2, 0, &magnitudes);
    v13 = magnitudes.v[2];
    v14 = magnitudes.v[1];
    v15 = magnitudes.v[0];
  }
  value = FLOAT_1_0;
  IdleScaleMultiplier = BG_GetIdleScaleMultiplier(params, ws, ViewmodelOrOffhandADSSupportWeapon, outIsAlternate);
  if ( weaponAngleType == WEAPON_ANGLE_TYPE_IDLE && BG_GetOverlayReticle(ps, ViewmodelOrOffhandADSSupportWeapon, outIsAlternate) )
  {
    WeaponOrOffhandAdsFrac = BG_GetWeaponOrOffhandAdsFrac(weaponMap, ps);
    IdleScaleMultiplier = IdleScaleMultiplier * (float)(1.0 - *(float *)&WeaponOrOffhandAdsFrac);
  }
  IdleCycleStartTime = BG_GetIdleCycleStartTime(ViewmodelOrOffhandADSSupportWeapon, outIsAlternate, ps);
  v20 = weaponAngleType == WEAPON_ANGLE_TYPE_IDLE_ADVANCED_2;
  v21 = 1;
  if ( v20 )
  {
    v22 = ps->weapCommon.weaponIdleTime2 - IdleCycleStartTime;
    idleMotionIndex = 1;
    if ( v22 < 0 )
      v22 = 0;
    v23 = 1076i64;
  }
  else
  {
    v22 = ps->weapCommon.weaponIdleTime - IdleCycleStartTime;
    idleMotionIndex = 0;
    v23 = 272i64;
    if ( v22 < 0 )
      v22 = 0;
  }
  motionSpline = (BSplineRelaxedCBezier *)((char *)ws + v23);
  v24 = 1;
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x20u) )
    v24 = -1;
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x21u) )
    v21 = -1;
  if ( BG_IsPlayerZeroGFloating(ps) )
  {
    v25 = DCONST_DVARMPFLT_bg_weaponIdleMoveZeroGrav;
    if ( !DCONST_DVARMPFLT_bg_weaponIdleMoveZeroGrav && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weaponIdleMoveZeroGrav") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v25);
    value = v25->current.value;
  }
  if ( advancedIdleSettings && advancedIdleSettings->useAdvancedIdleSettings && advancedIdleSettings->useRandomPointsAlgorithm )
  {
    v26 = outAngles;
    BG_AdvancedIdle_GetWeaponAngles(weaponMap, ps, idleMotionIndex, (int)(float)((float)v22 * value), motionSpline, IdleScaleMultiplier, &magnitudes, outAngles);
    outCombinedAngles->v[0] = v26->v[0] + outCombinedAngles->v[0];
    outCombinedAngles->v[1] = v26->v[1] + outCombinedAngles->v[1];
    outCombinedAngles->v[2] = v26->v[2] + outCombinedAngles->v[2];
  }
  else
  {
    v27 = _mm_cvtepi32_ps((__m128i)(unsigned int)v22).m128_f32[0];
    v28 = _mm_cvtepi32_ps((__m128i)v24).m128_f32[0];
    v29 = sinf_0((float)((float)(v27 * 0.00050000002) * value) * v28);
    v30 = outAngles;
    outAngles->v[2] = (float)(v29 * (float)(v13 * IdleScaleMultiplier)) * 0.0099999998;
    outCombinedAngles->v[2] = (float)((float)(v29 * (float)(v13 * IdleScaleMultiplier)) * 0.0099999998) + outCombinedAngles->v[2];
    v31 = (float)(sinf_0((float)((float)(v27 * 0.00069999998) * value) * v28) * (float)(v14 * IdleScaleMultiplier)) * 0.0099999998;
    v30->v[1] = v31;
    outCombinedAngles->v[1] = v31 + outCombinedAngles->v[1];
    v32 = (float)(sinf_0((float)((float)(v27 * 0.001) * value) * _mm_cvtepi32_ps((__m128i)v21).m128_f32[0]) * (float)(v15 * IdleScaleMultiplier)) * 0.0099999998;
    v30->v[0] = v32;
    outCombinedAngles->v[0] = v32 + outCombinedAngles->v[0];
  }
}

/*
==============
BG_ComputeAndApplyWeaponMovement_MovementTiltAngles
==============
*/
void BG_ComputeAndApplyWeaponMovement_MovementTiltAngles(const WeaponMovementParams *const params, WeaponMovementState *ws, vec3_t *outAdsBobAngles, vec3_t *outMovementTiltAngles, vec3_t *outCombinedAngles, float *outMovementTiltOffset)
{
  const playerState_s *ps; 
  const BgWeaponMap *weaponMap; 
  double WeaponOrOffhandAdsFrac; 
  float v12; 
  const Weapon *ViewmodelOrOffhandADSSupportWeapon; 
  const ADSOverlay *Overlay; 
  const dvar_t *v15; 
  float v16; 
  float *v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  bool outIsAlternate; 
  float adsGunBobTiltPitchScale; 
  float adsGunBobPitchScale; 
  float adsGunBobYawScale; 
  float adsGunBobTiltYawScale; 
  float adsGunBobTiltRollScale; 
  float adsGunBobTiltOffset; 
  vec3_t *v32; 
  float outVertical; 
  float outHorizontal; 

  v32 = outAdsBobAngles;
  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1682, ASSERT_TYPE_ASSERT, "(params)", (const char *)&queryFormat, "params") )
    __debugbreak();
  if ( !ws && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1683, ASSERT_TYPE_ASSERT, "(ws)", (const char *)&queryFormat, "ws") )
    __debugbreak();
  if ( !outMovementTiltOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1684, ASSERT_TYPE_ASSERT, "(outMovementTiltOffset)", (const char *)&queryFormat, "outMovementTiltOffset") )
    __debugbreak();
  ps = params->ps;
  *outMovementTiltOffset = 0.0;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1689, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  weaponMap = params->weaponMap;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1692, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  WeaponOrOffhandAdsFrac = BG_GetWeaponOrOffhandAdsFrac(weaponMap, ps);
  v12 = *(float *)&WeaponOrOffhandAdsFrac;
  if ( *(float *)&WeaponOrOffhandAdsFrac > 0.0 )
  {
    ViewmodelOrOffhandADSSupportWeapon = BG_GetViewmodelOrOffhandADSSupportWeapon(weaponMap, ps, &outIsAlternate);
    Overlay = BG_GetOverlay(ViewmodelOrOffhandADSSupportWeapon, outIsAlternate);
    if ( !Overlay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1705, ASSERT_TYPE_ASSERT, "(adsOverlay)", (const char *)&queryFormat, "adsOverlay") )
      __debugbreak();
    if ( Overlay->reticle == WEAPOVERLAYRETICLE_NONE )
    {
      BG_GetADSGunBobSettings(weaponMap, ps, ViewmodelOrOffhandADSSupportWeapon, outIsAlternate, &adsGunBobPitchScale, &adsGunBobYawScale, &adsGunBobTiltPitchScale, &adsGunBobTiltYawScale, &adsGunBobTiltRollScale, &adsGunBobTiltOffset);
      v15 = DCONST_DVARFLT_bg_weaponBobLag;
      adsGunBobTiltPitchScale = adsGunBobTiltPitchScale * -1.0;
      if ( !DCONST_DVARFLT_bg_weaponBobLag && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weaponBobLag") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v15);
      v16 = (float)(v15->current.value * 3.1415927) + 6.2831855;
      BG_CalculateGunMovement_Bob(ps, v16, v16, &outVertical, &outHorizontal);
      v17 = (float *)v32;
      v18 = (float)(*(float *)&WeaponOrOffhandAdsFrac * outVertical) * adsGunBobPitchScale;
      v32->v[1] = (float)(*(float *)&WeaponOrOffhandAdsFrac * outHorizontal) * adsGunBobYawScale;
      *v17 = v18;
      v19 = outCombinedAngles->v[1];
      outCombinedAngles->v[0] = v18 + outCombinedAngles->v[0];
      outCombinedAngles->v[1] = v19 + v17[1];
      outCombinedAngles->v[2] = v17[2] + outCombinedAngles->v[2];
      BG_CalculateGunMovement_Bob(ps, v16 - 0.47123894, v16 - 0.47123894, &outVertical, &outHorizontal);
      v20 = (float)(*(float *)&WeaponOrOffhandAdsFrac * outHorizontal) * adsGunBobTiltRollScale;
      v21 = (float)(v12 * outVertical) * adsGunBobTiltPitchScale;
      outMovementTiltAngles->v[1] = (float)(v12 * outHorizontal) * adsGunBobTiltYawScale;
      outMovementTiltAngles->v[2] = v20;
      outMovementTiltAngles->v[0] = v21;
      v22 = outCombinedAngles->v[1];
      outCombinedAngles->v[0] = v21 + outCombinedAngles->v[0];
      v23 = outCombinedAngles->v[2];
      outCombinedAngles->v[1] = v22 + outMovementTiltAngles->v[1];
      v24 = adsGunBobTiltOffset;
      outCombinedAngles->v[2] = v23 + outMovementTiltAngles->v[2];
      *outMovementTiltOffset = v24;
    }
  }
}

/*
==============
BG_ComputeAndApplyWeaponMovement_TiltAngles
==============
*/
void BG_ComputeAndApplyWeaponMovement_TiltAngles(const WeaponMovementParams *const params, const WeaponMovementState *const ws, vec3_t *outTiltAngles, vec3_t *outCombinedAngles, float *outTiltOffset)
{
  float *v9; 
  const playerState_s *ps; 
  const BgWeaponMap *weaponMap; 
  bool v12; 
  const Weapon *ViewmodelWeapon; 
  float fWeaponPosFrac; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float hipGunTiltRollFactor; 
  float adsGunTiltRollFactor; 
  float hipGunTiltOffset; 
  float adsGunTiltOffset[19]; 
  float hipGunTiltPitchFactor; 
  float adsGunTiltPitchFactor; 
  float hipGunTiltYawFactor; 
  float adsGunTiltYawFactor; 

  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1586, ASSERT_TYPE_ASSERT, "(params)", (const char *)&queryFormat, "params") )
    __debugbreak();
  if ( !ws && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1587, ASSERT_TYPE_ASSERT, "(ws)", (const char *)&queryFormat, "ws") )
    __debugbreak();
  v9 = outTiltOffset;
  if ( !outTiltOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1588, ASSERT_TYPE_ASSERT, "(outTiltOffset)", (const char *)&queryFormat, "outTiltOffset") )
    __debugbreak();
  ps = params->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1591, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  weaponMap = params->weaponMap;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1594, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  v12 = BG_UsingAlternate(ps);
  ViewmodelWeapon = BG_GetViewmodelWeapon(weaponMap, ps);
  BG_GetGunTiltYawPitchAndRoll(weaponMap, ps, ViewmodelWeapon, v12, &hipGunTiltPitchFactor, &hipGunTiltYawFactor, &hipGunTiltRollFactor, &hipGunTiltOffset, &adsGunTiltPitchFactor, &adsGunTiltYawFactor, &adsGunTiltRollFactor, adsGunTiltOffset);
  fWeaponPosFrac = ps->weapCommon.fWeaponPosFrac;
  v15 = adsGunTiltYawFactor - hipGunTiltYawFactor;
  v16 = (float)((float)((float)(adsGunTiltPitchFactor - hipGunTiltPitchFactor) * fWeaponPosFrac) + hipGunTiltPitchFactor) * ws->recoilAngles.v[0];
  outTiltAngles->v[0] = v16;
  outTiltAngles->v[1] = (float)((float)(v15 * fWeaponPosFrac) + hipGunTiltYawFactor) * ws->recoilAngles.v[1];
  outTiltAngles->v[2] = (float)((float)((float)(adsGunTiltRollFactor - hipGunTiltRollFactor) * fWeaponPosFrac) + hipGunTiltRollFactor) * ws->recoilAngles.v[1];
  outCombinedAngles->v[0] = v16 + outCombinedAngles->v[0];
  v17 = outCombinedAngles->v[2];
  outCombinedAngles->v[1] = outTiltAngles->v[1] + outCombinedAngles->v[1];
  v18 = v17 + outTiltAngles->v[2];
  v19 = adsGunTiltOffset[0];
  outCombinedAngles->v[2] = v18;
  *v9 = (float)((float)(v19 - hipGunTiltOffset) * fWeaponPosFrac) + hipGunTiltOffset;
}

/*
==============
BG_GetAdvancedIdleTargetScale
==============
*/
void BG_GetAdvancedIdleTargetScale(const playerState_s *ps, const BgWeaponMap *weaponMap, const Weapon *weapon, const bool isAlternate, const AdvancedIdleSettings *advancedIdleSettings, const unsigned int idleSwayIndex, const bool useViewValues, vec3_t *outTargetScale)
{
  float idleSwaySetting2_HipWeaponMagnitudeX; 
  float idleSwaySetting2_HipWeaponMagnitudeY; 
  float idleSwaySetting2_HipWeaponMagnitudeZ; 
  float idleSwaySetting2_HipViewMagnitudeX; 
  float idleSwaySetting2_HipViewMagnitudeY; 
  float idleSwaySetting2_AdsViewMagnitudeX; 
  float idleSwaySetting2_AdsViewMagnitudeY; 
  float idleSwaySetting2_AdsWeaponMagnitudeZ; 
  bool IsAimDownSight; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  __int64 v30; 
  __int64 v31; 
  float idleSwaySetting2_AdsWeaponMagnitudeY; 
  float idleSwayIndexa; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 297, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !advancedIdleSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 298, ASSERT_TYPE_ASSERT, "(advancedIdleSettings)", (const char *)&queryFormat, "advancedIdleSettings") )
    __debugbreak();
  if ( idleSwayIndex > 1 )
  {
    LODWORD(v30) = idleSwayIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 299, ASSERT_TYPE_ASSERT, "( 0 ) <= ( idleSwayIndex ) && ( idleSwayIndex ) <= ( 1 )", "idleSwayIndex not in [0, 1]\n\t%i not in [%i, %i]", v30, 0i64, 1) )
      __debugbreak();
  }
  if ( !advancedIdleSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 252, ASSERT_TYPE_ASSERT, "(advancedIdleSettings)", (const char *)&queryFormat, "advancedIdleSettings") )
    __debugbreak();
  if ( idleSwayIndex > 1 )
  {
    LODWORD(v31) = 1;
    LODWORD(v30) = idleSwayIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 253, ASSERT_TYPE_ASSERT, "( 0 ) <= ( idleSwayIndex ) && ( idleSwayIndex ) <= ( 1 )", "idleSwayIndex not in [0, 1]\n\t%i not in [%i, %i]", v30, 0i64, v31) )
      __debugbreak();
  }
  if ( idleSwayIndex )
  {
    idleSwaySetting2_HipWeaponMagnitudeX = advancedIdleSettings->idleSwaySetting2_HipWeaponMagnitudeX;
    idleSwaySetting2_HipWeaponMagnitudeY = advancedIdleSettings->idleSwaySetting2_HipWeaponMagnitudeY;
    idleSwaySetting2_HipWeaponMagnitudeZ = advancedIdleSettings->idleSwaySetting2_HipWeaponMagnitudeZ;
    idleSwaySetting2_HipViewMagnitudeX = advancedIdleSettings->idleSwaySetting2_HipViewMagnitudeX;
    idleSwaySetting2_HipViewMagnitudeY = advancedIdleSettings->idleSwaySetting2_HipViewMagnitudeY;
    idleSwaySetting2_AdsViewMagnitudeX = advancedIdleSettings->idleSwaySetting2_AdsViewMagnitudeX;
    idleSwaySetting2_AdsViewMagnitudeY = advancedIdleSettings->idleSwaySetting2_AdsViewMagnitudeY;
    idleSwayIndexa = advancedIdleSettings->idleSwaySetting2_AdsWeaponMagnitudeX;
    idleSwaySetting2_AdsWeaponMagnitudeY = advancedIdleSettings->idleSwaySetting2_AdsWeaponMagnitudeY;
    idleSwaySetting2_AdsWeaponMagnitudeZ = advancedIdleSettings->idleSwaySetting2_AdsWeaponMagnitudeZ;
  }
  else
  {
    idleSwaySetting2_HipWeaponMagnitudeX = advancedIdleSettings->idleSwaySetting1_HipWeaponMagnitudeX;
    idleSwaySetting2_HipWeaponMagnitudeY = advancedIdleSettings->idleSwaySetting1_HipWeaponMagnitudeY;
    idleSwaySetting2_HipWeaponMagnitudeZ = advancedIdleSettings->idleSwaySetting1_HipWeaponMagnitudeZ;
    idleSwaySetting2_HipViewMagnitudeX = advancedIdleSettings->idleSwaySetting1_HipViewMagnitudeX;
    idleSwaySetting2_HipViewMagnitudeY = advancedIdleSettings->idleSwaySetting1_HipViewMagnitudeY;
    idleSwaySetting2_AdsViewMagnitudeX = advancedIdleSettings->idleSwaySetting1_AdsViewMagnitudeX;
    idleSwaySetting2_AdsViewMagnitudeY = advancedIdleSettings->idleSwaySetting1_AdsViewMagnitudeY;
    idleSwayIndexa = advancedIdleSettings->idleSwaySetting1_AdsWeaponMagnitudeX;
    idleSwaySetting2_AdsWeaponMagnitudeY = advancedIdleSettings->idleSwaySetting1_AdsWeaponMagnitudeY;
    idleSwaySetting2_AdsWeaponMagnitudeZ = advancedIdleSettings->idleSwaySetting1_AdsWeaponMagnitudeZ;
  }
  IsAimDownSight = BG_IsAimDownSight(weapon, isAlternate);
  if ( useViewValues )
  {
    if ( IsAimDownSight )
    {
      v21 = (float)((float)(idleSwaySetting2_AdsViewMagnitudeX - idleSwaySetting2_HipViewMagnitudeX) * ps->weapCommon.fWeaponPosFrac) + idleSwaySetting2_HipViewMagnitudeX;
      outTargetScale->v[0] = v21;
      v22 = (float)((float)(idleSwaySetting2_AdsViewMagnitudeY - idleSwaySetting2_HipViewMagnitudeY) * ps->weapCommon.fWeaponPosFrac) + idleSwaySetting2_HipViewMagnitudeY;
      outTargetScale->v[2] = 0.0;
      outTargetScale->v[1] = v22;
      v23 = BG_AdjustTargScaleForADSTime(weaponMap, ps, v21);
      v24 = outTargetScale->v[1];
      outTargetScale->v[0] = v23;
      outTargetScale->v[1] = BG_AdjustTargScaleForADSTime(weaponMap, ps, v24);
    }
    else
    {
      outTargetScale->v[0] = idleSwaySetting2_HipViewMagnitudeX;
      outTargetScale->v[1] = idleSwaySetting2_HipViewMagnitudeY;
      outTargetScale->v[2] = 0.0;
    }
  }
  else if ( IsAimDownSight )
  {
    v25 = (float)((float)(idleSwayIndexa - idleSwaySetting2_HipWeaponMagnitudeX) * ps->weapCommon.fWeaponPosFrac) + idleSwaySetting2_HipWeaponMagnitudeX;
    outTargetScale->v[0] = v25;
    outTargetScale->v[1] = (float)((float)(idleSwaySetting2_AdsWeaponMagnitudeY - idleSwaySetting2_HipWeaponMagnitudeY) * ps->weapCommon.fWeaponPosFrac) + idleSwaySetting2_HipWeaponMagnitudeY;
    outTargetScale->v[2] = (float)((float)(idleSwaySetting2_AdsWeaponMagnitudeZ - idleSwaySetting2_HipWeaponMagnitudeZ) * ps->weapCommon.fWeaponPosFrac) + idleSwaySetting2_HipWeaponMagnitudeZ;
    v26 = BG_AdjustTargScaleForADSTime(weaponMap, ps, v25);
    v27 = outTargetScale->v[1];
    outTargetScale->v[0] = v26;
    v28 = BG_AdjustTargScaleForADSTime(weaponMap, ps, v27);
    v29 = outTargetScale->v[2];
    outTargetScale->v[1] = v28;
    outTargetScale->v[2] = BG_AdjustTargScaleForADSTime(weaponMap, ps, v29);
  }
  else
  {
    outTargetScale->v[0] = idleSwaySetting2_HipWeaponMagnitudeX;
    outTargetScale->v[1] = idleSwaySetting2_HipWeaponMagnitudeY;
    outTargetScale->v[2] = idleSwaySetting2_HipWeaponMagnitudeZ;
  }
}

/*
==============
BG_GetIdleCycleStartTime
==============
*/
__int64 BG_GetIdleCycleStartTime(const Weapon *weapon, const bool isAlternate, const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 453, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( BG_UsesContinousAdsIdleTransiton(weapon, isAlternate) )
    return 0i64;
  else
    return (unsigned int)ps->weapCommon.adsStartTime;
}

/*
==============
BG_GetIdleScaleMultiplier
==============
*/
float BG_GetIdleScaleMultiplier(const WeaponMovementParams *const params, const WeaponMovementState *const ws, const Weapon *r_weapon, const bool isAlternate)
{
  const playerState_s *ps; 
  float holdBreathScale; 
  const dvar_t *v10; 
  float mountFraction; 
  double MountGunIdleScale; 

  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 462, ASSERT_TYPE_ASSERT, "(params)", (const char *)&queryFormat, "params") )
    __debugbreak();
  if ( !ws && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 463, ASSERT_TYPE_ASSERT, "(ws)", (const char *)&queryFormat, "ws") )
    __debugbreak();
  ps = params->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 466, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  holdBreathScale = FLOAT_1_0;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_HARD_LAND|WEAPON_LADDER_AIM) )
  {
    v10 = DCONST_DVARBOOL_player_scope_prototype;
    holdBreathScale = ps->holdBreathScale;
    if ( !DCONST_DVARBOOL_player_scope_prototype && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_scope_prototype") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    if ( !v10->current.enabled && holdBreathScale > 1.0 )
      holdBreathScale = (float)((float)(holdBreathScale - 1.0) * 0.5) + 1.0;
  }
  mountFraction = ps->mountState.mountFraction;
  MountGunIdleScale = BG_GetMountGunIdleScale((const ContextMountType)ps->mountState.surface.type, r_weapon, isAlternate);
  return (float)((float)((float)(mountFraction * *(float *)&MountGunIdleScale) + (float)(1.0 - mountFraction)) * holdBreathScale) * ws->fLastIdleFactor;
}

/*
==============
BG_GetIdleTargScale
==============
*/
float BG_GetIdleTargScale(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  bool v4; 
  bool v5; 
  float hipIdleAmount; 
  float adsIdleAmount; 
  float adsIdleSpeed; 
  float hipIdleSpeed; 
  Weapon r_weapon; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 224, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 225, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  r_weapon = *BG_GetViewmodelWeapon(weaponMap, ps);
  v4 = BG_UsingAlternate(ps);
  BG_GetHipIdleValues(ps->perks, &r_weapon, v4, &hipIdleAmount, &adsIdleAmount, &hipIdleSpeed, &adsIdleSpeed);
  v5 = BG_UsingAlternate(ps);
  if ( BG_IsAimDownSight(&r_weapon, v5) )
    return BG_AdjustTargScaleForADSTime(weaponMap, ps, (float)((float)(adsIdleAmount - hipIdleAmount) * ps->weapCommon.fWeaponPosFrac) + hipIdleAmount);
  _XMM2 = LODWORD(hipIdleAmount);
  __asm { vcmpneqss xmm1, xmm2, xmm0 }
  _XMM0 = LODWORD(FLOAT_80_0);
  __asm { vblendvps xmm0, xmm0, xmm2, xmm1 }
  return *(float *)&_XMM0;
}

/*
==============
BG_GetNewOriginForRotationWithOffset
==============
*/
void BG_GetNewOriginForRotationWithOffset(const vec3_t *rotationAngles, const float rotationOffsetForward, vec3_t *newOrigin)
{
  vec3_t v1; 
  vec3_t point; 
  tmat33_t<vec3_t> axis; 

  v1.v[0] = 0.0;
  v1.v[1] = 0.0;
  v1.v[2] = 0.0;
  if ( VecNCompareCustomEpsilon(rotationAngles->v, v1.v, 0.000001, 3) )
  {
    *(_QWORD *)newOrigin->v = 0i64;
    newOrigin->v[2] = 0.0;
  }
  else
  {
    AnglesToAxis(rotationAngles, &axis);
    v1.v[0] = rotationOffsetForward;
    v1.v[1] = 0.0;
    v1.v[2] = 0.0;
    point.v[0] = 0.0;
    point.v[1] = 0.0;
    point.v[2] = 0.0;
    RotatePointAroundPoint(newOrigin, &point, &v1, &axis);
  }
}

/*
==============
BG_GetScriptGunAngleOffset
==============
*/
void BG_GetScriptGunAngleOffset(const playerState_s *ps, const BgHandler *handler, vec3_t *outCombinedAngles)
{
  const dvar_t *v3; 
  float v7; 
  float value; 
  float v9; 
  int serverTime; 
  unsigned int IndexByName; 
  int v12; 
  unsigned int v13; 
  int v14; 
  unsigned int v15; 
  OmnvarData outData; 

  v3 = DCONST_DVARMPBOOL_useScriptWeaponAndViewOffsets;
  v7 = 0.0;
  value = 0.0;
  v9 = 0.0;
  if ( !DCONST_DVARMPBOOL_useScriptWeaponAndViewOffsets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "useScriptWeaponAndViewOffsets") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled )
  {
    serverTime = ps->serverTime;
    IndexByName = BG_Omnvar_GetIndexByName("protogun_ax");
    BG_Omnvar_GetDataAtPmoveTime(ps->clientNum, handler, IndexByName, serverTime, &outData);
    value = outData.current.value;
    v12 = ps->serverTime;
    v13 = BG_Omnvar_GetIndexByName("protogun_ay");
    BG_Omnvar_GetDataAtPmoveTime(ps->clientNum, handler, v13, v12, &outData);
    v9 = outData.current.value;
    v14 = ps->serverTime;
    v15 = BG_Omnvar_GetIndexByName("protogun_az");
    BG_Omnvar_GetDataAtPmoveTime(ps->clientNum, handler, v15, v14, &outData);
    v7 = outData.current.value;
  }
  outCombinedAngles->v[0] = value + outCombinedAngles->v[0];
  outCombinedAngles->v[1] = v9 + outCombinedAngles->v[1];
  outCombinedAngles->v[2] = v7 + outCombinedAngles->v[2];
}

/*
==============
BG_GetScriptGunPosOffset
==============
*/
void BG_GetScriptGunPosOffset(const playerState_s *ps, const BgHandler *handler, vec3_t *outOffset)
{
  const dvar_t *v6; 
  int serverTime; 
  unsigned int IndexByName; 
  int v9; 
  unsigned int v10; 
  int v11; 
  unsigned int v12; 
  OmnvarData outData; 

  *(_QWORD *)outOffset->v = 0i64;
  outOffset->v[2] = 0.0;
  v6 = DCONST_DVARMPBOOL_useScriptWeaponAndViewOffsets;
  if ( !DCONST_DVARMPBOOL_useScriptWeaponAndViewOffsets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "useScriptWeaponAndViewOffsets") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled )
  {
    serverTime = ps->serverTime;
    IndexByName = BG_Omnvar_GetIndexByName("protogun_x");
    BG_Omnvar_GetDataAtPmoveTime(ps->clientNum, handler, IndexByName, serverTime, &outData);
    outOffset->v[0] = outData.current.value;
    v9 = ps->serverTime;
    v10 = BG_Omnvar_GetIndexByName("protogun_y");
    BG_Omnvar_GetDataAtPmoveTime(ps->clientNum, handler, v10, v9, &outData);
    outOffset->v[1] = outData.current.value;
    v11 = ps->serverTime;
    v12 = BG_Omnvar_GetIndexByName("protogun_z");
    BG_Omnvar_GetDataAtPmoveTime(ps->clientNum, handler, v12, v11, &outData);
    outOffset->v[2] = outData.current.value;
  }
}

/*
==============
BG_GetScriptViewAngleOffset
==============
*/
void BG_GetScriptViewAngleOffset(const playerState_s *ps, const BgHandler *handler, vec3_t *outOffset)
{
  const dvar_t *v6; 
  int serverTime; 
  unsigned int IndexByName; 
  int v9; 
  unsigned int v10; 
  int v11; 
  unsigned int v12; 
  OmnvarData outData; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2647, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  *(_QWORD *)outOffset->v = 0i64;
  outOffset->v[2] = 0.0;
  v6 = DCONST_DVARMPBOOL_useScriptWeaponAndViewOffsets;
  if ( !DCONST_DVARMPBOOL_useScriptWeaponAndViewOffsets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "useScriptWeaponAndViewOffsets") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled )
  {
    serverTime = ps->serverTime;
    IndexByName = BG_Omnvar_GetIndexByName("protoview_ax");
    BG_Omnvar_GetDataAtPmoveTime(ps->clientNum, handler, IndexByName, serverTime, &outData);
    outOffset->v[0] = outData.current.value;
    v9 = ps->serverTime;
    v10 = BG_Omnvar_GetIndexByName("protoview_ay");
    BG_Omnvar_GetDataAtPmoveTime(ps->clientNum, handler, v10, v9, &outData);
    outOffset->v[1] = outData.current.value;
    v11 = ps->serverTime;
    v12 = BG_Omnvar_GetIndexByName("protoview_az");
    BG_Omnvar_GetDataAtPmoveTime(ps->clientNum, handler, v12, v11, &outData);
    outOffset->v[2] = outData.current.value;
  }
}

/*
==============
BG_GetScriptViewPosOffset
==============
*/
void BG_GetScriptViewPosOffset(const playerState_s *ps, const BgHandler *handler, vec3_t *outOffset)
{
  const dvar_t *v6; 
  int serverTime; 
  unsigned int IndexByName; 
  int v9; 
  unsigned int v10; 
  int v11; 
  unsigned int v12; 
  OmnvarData outData; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2625, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  *(_QWORD *)outOffset->v = 0i64;
  outOffset->v[2] = 0.0;
  v6 = DCONST_DVARMPBOOL_useScriptWeaponAndViewOffsets;
  if ( !DCONST_DVARMPBOOL_useScriptWeaponAndViewOffsets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "useScriptWeaponAndViewOffsets") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled )
  {
    serverTime = ps->serverTime;
    IndexByName = BG_Omnvar_GetIndexByName("protoview_x");
    BG_Omnvar_GetDataAtPmoveTime(ps->clientNum, handler, IndexByName, serverTime, &outData);
    outOffset->v[0] = outData.current.value;
    v9 = ps->serverTime;
    v10 = BG_Omnvar_GetIndexByName("protoview_y");
    BG_Omnvar_GetDataAtPmoveTime(ps->clientNum, handler, v10, v9, &outData);
    outOffset->v[1] = outData.current.value;
    v11 = ps->serverTime;
    v12 = BG_Omnvar_GetIndexByName("protoview_z");
    BG_Omnvar_GetDataAtPmoveTime(ps->clientNum, handler, v12, v11, &outData);
    outOffset->v[2] = outData.current.value;
  }
}

/*
==============
BG_SetWeaponMovementAngles
==============
*/
void BG_SetWeaponMovementAngles(const WeaponMovementParams *const params, WeaponMovementState *const ws, int doIdle, float *outTiltOffset, float *outMovementTiltOffset, vec3_t *outCombinedAngles, vec3_t (*outAnglesCategorized)[30])
{
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v20; 
  float v22; 
  float v23; 
  float v24; 
  const playerState_s *ps; 
  const BgWeaponMap *weaponMap; 
  bool v27; 
  const Weapon *ViewmodelWeapon; 
  AdvancedIdleSettings outAdvancedIdleSettings; 

  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1809, ASSERT_TYPE_ASSERT, "(params)", (const char *)&queryFormat, "params") )
    __debugbreak();
  if ( !ws && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1810, ASSERT_TYPE_ASSERT, "(ws)", (const char *)&queryFormat, "ws") )
    __debugbreak();
  if ( !outAnglesCategorized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1811, ASSERT_TYPE_ASSERT, "(outAnglesCategorized)", (const char *)&queryFormat, "outAnglesCategorized") )
    __debugbreak();
  *(_QWORD *)outCombinedAngles->v = 0i64;
  outCombinedAngles->v[2] = 0.0;
  *(_OWORD *)(*outAnglesCategorized)[0].v = 0ui64;
  *(_QWORD *)&(*outAnglesCategorized)[1].y = 0i64;
  *(_OWORD *)(*outAnglesCategorized)[2].v = 0ui64;
  *(_QWORD *)&(*outAnglesCategorized)[3].y = 0i64;
  *(_QWORD *)(*outAnglesCategorized)[4].v = 0i64;
  (*outAnglesCategorized)[4].v[2] = 0.0;
  *(_QWORD *)(*outAnglesCategorized)[5].v = 0i64;
  (*outAnglesCategorized)[5].v[2] = 0.0;
  *(_QWORD *)(*outAnglesCategorized)[6].v = 0i64;
  (*outAnglesCategorized)[6].v[2] = 0.0;
  *(_OWORD *)(*outAnglesCategorized)[7].v = 0ui64;
  *(_QWORD *)&(*outAnglesCategorized)[8].y = 0i64;
  *(_QWORD *)(*outAnglesCategorized)[9].v = 0i64;
  (*outAnglesCategorized)[9].v[2] = 0.0;
  *(_QWORD *)(*outAnglesCategorized)[10].v = 0i64;
  (*outAnglesCategorized)[10].v[2] = 0.0;
  *(_QWORD *)(*outAnglesCategorized)[11].v = 0i64;
  (*outAnglesCategorized)[11].v[2] = 0.0;
  *(_QWORD *)(*outAnglesCategorized)[12].v = 0i64;
  (*outAnglesCategorized)[12].v[2] = 0.0;
  *(_OWORD *)(*outAnglesCategorized)[13].v = 0ui64;
  *(_QWORD *)&(*outAnglesCategorized)[14].y = 0i64;
  *(_OWORD *)(*outAnglesCategorized)[15].v = 0ui64;
  *(_QWORD *)&(*outAnglesCategorized)[16].y = 0i64;
  *(_OWORD *)(*outAnglesCategorized)[17].v = 0ui64;
  *(_QWORD *)&(*outAnglesCategorized)[18].y = 0i64;
  *(_OWORD *)(*outAnglesCategorized)[19].v = 0ui64;
  *(_QWORD *)&(*outAnglesCategorized)[20].y = 0i64;
  *(_OWORD *)(*outAnglesCategorized)[21].v = 0ui64;
  *(_QWORD *)&(*outAnglesCategorized)[22].y = 0i64;
  *(_OWORD *)(*outAnglesCategorized)[23].v = 0ui64;
  *(_QWORD *)&(*outAnglesCategorized)[24].y = 0i64;
  *(_OWORD *)(*outAnglesCategorized)[25].v = 0ui64;
  *(_QWORD *)&(*outAnglesCategorized)[26].y = 0i64;
  *(_OWORD *)(*outAnglesCategorized)[27].v = 0ui64;
  *(_QWORD *)&(*outAnglesCategorized)[28].y = 0i64;
  *(_QWORD *)(*outAnglesCategorized)[29].v = 0i64;
  (*outAnglesCategorized)[29].v[2] = 0.0;
  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 689, ASSERT_TYPE_ASSERT, "(params)", (const char *)&queryFormat, "params") )
    __debugbreak();
  if ( !ws && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 690, ASSERT_TYPE_ASSERT, "(ws)", (const char *)&queryFormat, "ws") )
    __debugbreak();
  v9 = BG_CalculateWeaponMovement_Base_AdsFrac(params);
  v10 = v9;
  if ( v9 > 0.0 )
  {
    v11 = v9 * ws->baseAngles.v[0];
    (*outAnglesCategorized)[0].v[0] = v11;
    (*outAnglesCategorized)[0].v[1] = v9 * ws->baseAngles.v[1];
    (*outAnglesCategorized)[0].v[2] = v9 * ws->baseAngles.v[2];
    v12 = outCombinedAngles->v[1];
    outCombinedAngles->v[0] = v11 + outCombinedAngles->v[0];
    outCombinedAngles->v[1] = v12 + (*outAnglesCategorized)[0].v[1];
    outCombinedAngles->v[2] = (*outAnglesCategorized)[0].v[2] + outCombinedAngles->v[2];
    v13 = v9 * ws->baseAnglesPivotStand.v[0];
    (*outAnglesCategorized)[1].v[0] = v13;
    (*outAnglesCategorized)[1].v[1] = v9 * ws->baseAnglesPivotStand.v[1];
    (*outAnglesCategorized)[1].v[2] = v9 * ws->baseAnglesPivotStand.v[2];
    v14 = outCombinedAngles->v[1];
    outCombinedAngles->v[0] = v13 + outCombinedAngles->v[0];
    v15 = outCombinedAngles->v[2];
    outCombinedAngles->v[1] = v14 + (*outAnglesCategorized)[1].v[1];
    outCombinedAngles->v[2] = v15 + (*outAnglesCategorized)[1].v[2];
    v16 = v10 * ws->baseAnglesPivotCrouch.v[0];
    (*outAnglesCategorized)[2].v[0] = v16;
    (*outAnglesCategorized)[2].v[1] = v10 * ws->baseAnglesPivotCrouch.v[1];
    (*outAnglesCategorized)[2].v[2] = v10 * ws->baseAnglesPivotCrouch.v[2];
    v17 = outCombinedAngles->v[1];
    outCombinedAngles->v[0] = v16 + outCombinedAngles->v[0];
    outCombinedAngles->v[1] = v17 + (*outAnglesCategorized)[2].v[1];
    outCombinedAngles->v[2] = (*outAnglesCategorized)[2].v[2] + outCombinedAngles->v[2];
  }
  if ( !ws && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 724, ASSERT_TYPE_ASSERT, "(ws)", (const char *)&queryFormat, "ws") )
    __debugbreak();
  (*outAnglesCategorized)[7].v[0] = COERCE_FLOAT(LODWORD(ws->swayAngles.v[0]) ^ _xmm);
  (*outAnglesCategorized)[7].v[1] = COERCE_FLOAT(LODWORD(ws->swayAngles.v[1]) ^ _xmm);
  _XMM7 = 0i64;
  __asm { vroundss xmm2, xmm7, xmm1, 1 }
  v20 = outCombinedAngles->v[1];
  outCombinedAngles->v[0] = (float)((float)((float)(outCombinedAngles->v[0] - ws->swayAngles.v[0]) * 0.0027777778) - *(float *)&_XMM2) * 360.0;
  __asm { vroundss xmm2, xmm7, xmm3, 1 }
  outCombinedAngles->v[1] = (float)((float)((float)(v20 - ws->swayAngles.v[1]) * 0.0027777778) - *(float *)&_XMM2) * 360.0;
  BG_ContextMount_ApplyWeaponMovement_Angles(ws, &(*outAnglesCategorized)[13], outCombinedAngles);
  v22 = ws->recoilAngles.v[0];
  (*outAnglesCategorized)[8].v[0] = v22;
  *(_QWORD *)&(*outAnglesCategorized)[8].y = *(_QWORD *)&ws->recoilAngles.y;
  v23 = outCombinedAngles->v[1];
  outCombinedAngles->v[0] = v22 + outCombinedAngles->v[0];
  v24 = outCombinedAngles->v[2];
  outCombinedAngles->v[1] = v23 + (*outAnglesCategorized)[8].v[1];
  outCombinedAngles->v[2] = v24 + (*outAnglesCategorized)[8].v[2];
  BG_ApplyWeaponMovement_BobAngles(params, ws, &(*outAnglesCategorized)[3], outCombinedAngles);
  if ( doIdle )
  {
    ps = params->ps;
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1835, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    weaponMap = params->weaponMap;
    if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1838, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    v27 = BG_UsingAlternate(ps);
    ViewmodelWeapon = BG_GetViewmodelWeapon(weaponMap, ps);
    BG_GetAdvancedIdleSettings(ps->perks, ViewmodelWeapon, v27, &outAdvancedIdleSettings);
    BG_CalculateWeaponMovement_IdleFactor(params, ws);
    if ( outAdvancedIdleSettings.useAdvancedIdleSettings )
    {
      BG_ComputeAndApplyWeaponMovement_IdleAngles(params, ws, &outAdvancedIdleSettings, WEAPON_ANGLE_TYPE_IDLE_ADVANCED_1, &(*outAnglesCategorized)[5], outCombinedAngles);
      BG_ComputeAndApplyWeaponMovement_IdleAngles(params, ws, &outAdvancedIdleSettings, WEAPON_ANGLE_TYPE_IDLE_ADVANCED_2, &(*outAnglesCategorized)[6], outCombinedAngles);
    }
    else
    {
      BG_ComputeAndApplyWeaponMovement_IdleAngles(params, ws, &outAdvancedIdleSettings, WEAPON_ANGLE_TYPE_IDLE, &(*outAnglesCategorized)[4], outCombinedAngles);
    }
  }
  BG_ComputeAndApplyWeaponMovement_DamageKickAngles(params, ws, &(*outAnglesCategorized)[12], outCombinedAngles);
  BG_ComputeAndApplyWeaponMovement_TiltAngles(params, ws, &(*outAnglesCategorized)[9], outCombinedAngles, outTiltOffset);
  BG_ComputeAndApplyWeaponMovement_MovementTiltAngles(params, ws, &(*outAnglesCategorized)[10], &(*outAnglesCategorized)[11], outCombinedAngles, outMovementTiltOffset);
}

/*
==============
BG_SetWeaponMovementOrigin
==============
*/
void BG_SetWeaponMovementOrigin(const WeaponMovementParams *const params, const WeaponMovementState *const ws, const vec3_t (*weaponAnglesCategorized)[30], vec3_t *origin)
{
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  int v7; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  const playerState_s *ps; 
  const BgWeaponMap *weaponMap; 
  const Weapon *ViewmodelWeapon; 
  bool v25; 
  const WeaponDef *v26; 
  __int64 v27; 
  WeaponOffsetPatternDescription *weaponOffsetPatterns; 
  float rotationOffset; 
  float v30; 
  vec3_t v1; 
  tmat33_t<vec3_t> axis; 
  __int128 v33; 
  __int128 v34; 
  __int128 v35; 

  v7 = 0;
  *(_QWORD *)origin->v = 0i64;
  origin->v[2] = 0.0;
  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 710, ASSERT_TYPE_ASSERT, "(params)", (const char *)&queryFormat, "params") )
    __debugbreak();
  if ( !ws && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 711, ASSERT_TYPE_ASSERT, "(ws)", (const char *)&queryFormat, "ws") )
    __debugbreak();
  v12 = BG_CalculateWeaponMovement_Base_AdsFrac(params);
  if ( v12 > 0.0 )
  {
    origin->v[0] = (float)(v12 * ws->baseOrigin.v[0]) + origin->v[0];
    origin->v[1] = (float)(v12 * ws->baseOrigin.v[1]) + origin->v[1];
    origin->v[2] = (float)(v12 * ws->baseOrigin.v[2]) + origin->v[2];
  }
  if ( !ws && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 736, ASSERT_TYPE_ASSERT, "(ws)", (const char *)&queryFormat, "ws") )
    __debugbreak();
  origin->v[1] = origin->v[1] - ws->swayOrigin.v[1];
  origin->v[2] = ws->swayOrigin.v[2] + origin->v[2];
  BG_ContextMount_ApplyWeaponMovement_Origin(params, ws, origin);
  v1.v[0] = 0.0;
  v1.v[1] = 0.0;
  v1.v[2] = 0.0;
  if ( !VecNCompareCustomEpsilon(ws->bobAngles.v, v1.v, 0.000001, 3) )
  {
    v35 = v4;
    v13 = origin->v[0];
    v34 = v5;
    v14 = origin->v[1];
    v33 = v6;
    v15 = origin->v[2];
    AnglesToAxis(&ws->bobAngles, &axis);
    if ( &v1 == origin && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
      __debugbreak();
    v16 = v14 * axis.m[1].v[1];
    v17 = v15 * axis.m[2].v[1];
    origin->v[0] = (float)((float)(v14 * axis.m[1].v[0]) + (float)(v13 * axis.m[0].v[0])) + (float)(v15 * axis.m[2].v[0]);
    v18 = v16 + (float)(v13 * axis.m[0].v[1]);
    v19 = v14 * axis.m[1].v[2];
    v20 = v18 + v17;
    v21 = v15 * axis.m[2].v[2];
    origin->v[1] = v20;
    origin->v[2] = (float)(v19 + (float)(v13 * axis.m[0].v[2])) + v21;
  }
  BG_ApplyWeaponMovement_AdvancedIdle(params, ws, weaponAnglesCategorized, origin);
  if ( !weaponAnglesCategorized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 954, ASSERT_TYPE_ASSERT, "(weaponAnglesCategorized)", (const char *)&queryFormat, "weaponAnglesCategorized") )
    __debugbreak();
  ps = params->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 957, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  weaponMap = params->weaponMap;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 960, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  ViewmodelWeapon = BG_GetViewmodelWeapon(weaponMap, ps);
  v25 = BG_UsingAlternate(ps);
  v26 = BG_WeaponDef(ViewmodelWeapon, v25);
  if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 966, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  if ( v26->numWeaponOffsetPatterns > 0 )
  {
    v27 = 0i64;
    do
    {
      weaponOffsetPatterns = v26->weaponOffsetPatterns;
      if ( weaponOffsetPatterns[v27].transformType == WOTT_WEAPON_ANGLES )
      {
        rotationOffset = weaponOffsetPatterns[v27].rotationOffset;
        if ( rotationOffset != 0.0 )
        {
          BG_GetNewOriginForRotationWithOffset(&(*weaponAnglesCategorized)[v7 + 18], rotationOffset, &v1);
          v30 = v1.v[1] + origin->v[1];
          origin->v[0] = v1.v[0] + origin->v[0];
          origin->v[2] = v1.v[2] + origin->v[2];
          origin->v[1] = v30;
        }
      }
      ++v7;
      ++v27;
    }
    while ( v7 < v26->numWeaponOffsetPatterns );
  }
}

/*
==============
BG_ShouldAdvancedIdleMotionAdjustViewAngles
==============
*/
bool BG_ShouldAdvancedIdleMotionAdjustViewAngles(const playerState_s *ps, const BgWeaponMap *weaponMap, const AdvancedIdleSettings *advancedIdleSettings, const unsigned int idleSwayIndex, float *outUseWeaponPosFrac, vec3_t *outTargetScale, vec3_t *outTimeScale, int *outIdleCycle)
{
  bool v12; 
  bool v20; 
  int adsStartTime; 
  int weaponIdleTime2; 
  int v23; 
  __int64 idleSwayIndexa; 
  float v26; 
  Weapon r_weapon; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2131, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2132, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !advancedIdleSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2133, ASSERT_TYPE_ASSERT, "(advancedIdleSettings)", (const char *)&queryFormat, "advancedIdleSettings") )
    __debugbreak();
  if ( idleSwayIndex > 1 )
  {
    LODWORD(idleSwayIndexa) = idleSwayIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2134, ASSERT_TYPE_ASSERT, "( 0 ) <= ( idleSwayIndex ) && ( idleSwayIndex ) <= ( 1 )", "idleSwayIndex not in [0, 1]\n\t%i not in [%i, %i]", idleSwayIndexa, 0i64, 1) )
      __debugbreak();
  }
  if ( !outUseWeaponPosFrac && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2136, ASSERT_TYPE_ASSERT, "(outUseWeaponPosFrac)", (const char *)&queryFormat, "outUseWeaponPosFrac") )
    __debugbreak();
  if ( !outIdleCycle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2137, ASSERT_TYPE_ASSERT, "(outIdleCycle)", (const char *)&queryFormat, "outIdleCycle") )
    __debugbreak();
  r_weapon = *BG_GetViewmodelWeapon(weaponMap, ps);
  v12 = BG_UsingAlternate(ps);
  _XMM4 = LODWORD(FLOAT_1_0);
  _XMM0 = advancedIdleSettings->useRandomPointsAlgorithm;
  __asm
  {
    vpcmpeqd xmm3, xmm0, xmm1
    vblendvps xmm0, xmm4, xmm2, xmm3
  }
  v26 = *(float *)&_XMM0;
  _XMM0 = advancedIdleSettings->useRandomPointsAlgorithm;
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm4, xmm1, xmm2
  }
  outTimeScale->v[1] = *(float *)&_XMM0;
  outTimeScale->v[0] = v26;
  outTimeScale->v[2] = 0.0;
  *outUseWeaponPosFrac = 1.0;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 453, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v20 = BG_UsesContinousAdsIdleTransiton(&r_weapon, v12);
  adsStartTime = 0;
  if ( !v20 )
    adsStartTime = ps->weapCommon.adsStartTime;
  if ( idleSwayIndex )
    weaponIdleTime2 = ps->weapCommon.weaponIdleTime2;
  else
    weaponIdleTime2 = ps->weapCommon.weaponIdleTime;
  v23 = weaponIdleTime2 - adsStartTime;
  if ( v23 < 0 )
    v23 = 0;
  *outIdleCycle = v23;
  BG_GetAdvancedIdleTargetScale(ps, weaponMap, &r_weapon, v12, advancedIdleSettings, idleSwayIndex, 1, outTargetScale);
  return outTargetScale->v[0] != 0.0 || outTargetScale->v[1] != 0.0;
}

/*
==============
BG_ShouldCalculateWeaponIdleMovement
==============
*/
bool BG_ShouldCalculateWeaponIdleMovement(const playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1882, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return ps->pm_type < 7;
}

/*
==============
BG_ShouldIncrementViewMovementIdleTimeADS
==============
*/
bool BG_ShouldIncrementViewMovementIdleTimeADS(const playerState_s *ps, const BgWeaponMap *weaponMap, float *outUseWeaponPosFrac, vec3_t *outTargetScale, vec3_t *outTimeScale, int *outIdleCycle)
{
  double WeaponOrOffhandAdsFrac; 
  float v11; 
  float IdleTargScale; 
  bool v13; 
  bool v14; 
  int adsStartTime; 
  int v16; 
  bool result; 
  bool outIsAlternate; 
  Weapon r_weapon; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2180, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2181, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !outUseWeaponPosFrac && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2183, ASSERT_TYPE_ASSERT, "(outUseWeaponPosFrac)", (const char *)&queryFormat, "outUseWeaponPosFrac") )
    __debugbreak();
  if ( !outIdleCycle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2184, ASSERT_TYPE_ASSERT, "(outIdleCycle)", (const char *)&queryFormat, "outIdleCycle") )
    __debugbreak();
  r_weapon = *BG_GetViewmodelOrOffhandADSSupportWeapon(weaponMap, ps, &outIsAlternate);
  WeaponOrOffhandAdsFrac = BG_GetWeaponOrOffhandAdsFrac(weaponMap, ps);
  v11 = *(float *)&WeaponOrOffhandAdsFrac;
  if ( BG_GetOverlayReticle(ps, &r_weapon, outIsAlternate) == WEAPOVERLAYRETICLE_NONE || *(float *)&WeaponOrOffhandAdsFrac == 0.0 )
    return 0;
  IdleTargScale = BG_GetIdleTargScale(weaponMap, ps);
  v13 = outIsAlternate;
  outTargetScale->v[2] = IdleTargScale;
  outTargetScale->v[1] = IdleTargScale;
  outTargetScale->v[0] = IdleTargScale;
  *outUseWeaponPosFrac = v11;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 453, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v14 = !BG_UsesContinousAdsIdleTransiton(&r_weapon, v13);
  adsStartTime = 0;
  if ( v14 )
    adsStartTime = ps->weapCommon.adsStartTime;
  v16 = ps->weapCommon.weaponIdleTime - adsStartTime;
  result = 1;
  if ( v16 < 0 )
    v16 = 0;
  *outIdleCycle = v16;
  outTimeScale->v[1] = 0.00069999998;
  outTimeScale->v[0] = 0.001;
  outTimeScale->v[2] = 0.0;
  return result;
}

