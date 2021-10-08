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

float __fastcall BG_AdjustTargScaleForADSTime(const BgWeaponMap *weaponMap, const playerState_s *ps, double fOriginalTargScale)
{
  const Weapon *CurrentWeaponForPlayer; 
  bool v10; 
  char v14; 
  char v21; 
  float adsIdleLerpTime; 
  float adsIdleLerpStartTime; 

  __asm { vmovaps [rsp+58h+var_18], xmm7 }
  _RBX = ps;
  __asm { vmovaps xmm7, xmm2 }
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 162, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 163, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm { vmovaps [rsp+58h+var_28], xmm8 }
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, _RBX);
  v10 = BG_UsingAlternate(_RBX);
  if ( BG_UsesContinousAdsIdleTransiton(CurrentWeaponForPlayer, v10) )
    goto LABEL_13;
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+730h]
    vucomiss xmm1, cs:__real@3f800000
  }
  BG_GetADSIdleLerpTime(CurrentWeaponForPlayer, v10, &adsIdleLerpStartTime, &adsIdleLerpTime);
  __asm
  {
    vmovss  xmm3, [rsp+58h+adsIdleLerpTime]
    vxorps  xmm8, xmm8, xmm8
    vucomiss xmm3, xmm8
  }
  if ( v14 )
  {
LABEL_13:
    __asm { vmovaps xmm0, xmm7 }
  }
  else
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, cs:__real@3a83126f
      vsubss  xmm2, xmm1, [rsp+58h+adsIdleLerpStartTime]
      vdivss  xmm0, xmm2, xmm3; val
      vmovss  xmm2, cs:__real@3f800000; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vcomiss xmm0, xmm8 }
    if ( !v21 )
    {
      __asm { vcomiss xmm0, cs:__real@3f800000 }
      if ( v21 )
      {
        __asm
        {
          vmulss  xmm1, xmm0, cs:__real@40c00000
          vsubss  xmm2, xmm1, cs:__real@41700000
          vmulss  xmm3, xmm2, xmm0
          vaddss  xmm4, xmm3, cs:__real@41200000
          vmulss  xmm1, xmm0, xmm0
          vmulss  xmm0, xmm1, xmm0
          vmulss  xmm0, xmm4, xmm0
        }
      }
    }
    __asm { vmulss  xmm0, xmm0, xmm7 }
  }
  __asm
  {
    vmovaps xmm8, [rsp+58h+var_28]
    vmovaps xmm7, [rsp+58h+var_18]
  }
  return *(float *)&_XMM0;
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
  const dvar_t *v4; 
  bool v7; 
  const Weapon *ViewmodelWeapon; 

  v4 = DCONST_DVARINT_bg_advancedIdleFrequency;
  if ( !DCONST_DVARINT_bg_advancedIdleFrequency && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_advancedIdleFrequency") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.integer <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2112, ASSERT_TYPE_ASSERT, "(frequency > 0)", (const char *)&queryFormat, "frequency > 0") )
    __debugbreak();
  v7 = BG_UsingAlternate(ps);
  ViewmodelWeapon = BG_GetViewmodelWeapon(weaponMap, ps);
  BG_GetIdleCycleStartTime(ViewmodelWeapon, v7, ps);
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000; max
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, edi
    vdivss  xmm1, xmm2, xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, edx
    vmulss  xmm0, xmm0, xmm1; val
    vxorps  xmm1, xmm1, xmm1; min
  }
  return I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
}

/*
==============
BG_AdvancedIdle_GetViewAngles
==============
*/
void BG_AdvancedIdle_GetViewAngles(const BgWeaponMap *weaponMap, const playerState_s *ps, const int idleMotionIndex, const int idleTime, const BSplineRelaxedCBezier *motionSpline, const float lastIdleFactor, const float weaponPosFrac, const float mountIdleScale, const vec3_t *magnitudes, const vec3_t *timeScales, vec3_t *outAngles)
{
  const dvar_t *v21; 
  const dvar_t *v50; 
  bool IsServerThread; 
  int FrequencyIndex; 
  __int64 v60; 
  const char *v61; 
  int v62; 
  char *fmt; 
  __int64 v73; 
  __int64 v74; 
  __int64 v75; 
  __int64 v76; 
  __int64 v77; 
  vec3_t outPos; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm10
  }
  _RDI = outAngles;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2044, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( idleTime < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2045, ASSERT_TYPE_ASSERT, "(idleTime >= 0)", (const char *)&queryFormat, "idleTime >= 0") )
    __debugbreak();
  if ( !motionSpline && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2046, ASSERT_TYPE_ASSERT, "(motionSpline)", (const char *)&queryFormat, "motionSpline") )
    __debugbreak();
  v21 = DCONST_DVARINT_bg_advancedIdleFrequency;
  if ( !DCONST_DVARINT_bg_advancedIdleFrequency && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_advancedIdleFrequency") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  if ( v21->current.integer <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2049, ASSERT_TYPE_ASSERT, "(frequency > 0)", (const char *)&queryFormat, "frequency > 0") )
    __debugbreak();
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000; max
    vxorps  xmm1, xmm1, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm1, xmm1, edx
    vcvtsi2ss xmm0, xmm0, ebx
    vdivss  xmm0, xmm1, xmm0; val
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm1, xmm0; t
    vmovaps xmm10, xmm0
  }
  BG_BSpline_RelaxedCBezier_Evaluate(motionSpline, *(float *)&_XMM1, &outPos);
  __asm
  {
    vmovss  xmm5, [rsp+0E8h+mountIdleScale]
    vmovss  xmm1, dword ptr [rsp+0E8h+outPos]
    vmovss  xmm0, dword ptr [rsp+0E8h+outPos+4]
    vmulss  xmm2, xmm1, dword ptr [rax]
    vmulss  xmm1, xmm2, [rsp+0E8h+lastIdleFactor]
    vmulss  xmm3, xmm1, dword ptr [rsi+34Ch]
    vmulss  xmm1, xmm0, dword ptr [rax+4]
    vmulss  xmm2, xmm3, [rsp+0E8h+weaponPosFrac]
    vmulss  xmm6, xmm2, xmm5
    vmulss  xmm2, xmm1, [rsp+0E8h+lastIdleFactor]
    vmulss  xmm3, xmm2, dword ptr [rsi+34Ch]
    vmulss  xmm0, xmm3, [rsp+0E8h+weaponPosFrac]
    vmovss  xmm1, dword ptr [rsp+0E8h+outPos+8]
    vmulss  xmm2, xmm1, dword ptr [rax+8]
    vmulss  xmm4, xmm0, xmm5
    vmulss  xmm0, xmm2, [rsp+0E8h+lastIdleFactor]
    vmulss  xmm3, xmm0, dword ptr [rsi+34Ch]
    vmulss  xmm1, xmm3, [rsp+0E8h+weaponPosFrac]
    vmulss  xmm2, xmm1, xmm5
    vmovss  dword ptr [rdi+8], xmm2
    vmovss  dword ptr [rdi], xmm6
    vmovss  dword ptr [rdi+4], xmm4
  }
  v50 = DCONST_DVARBOOL_bg_advancedIdleDebug;
  if ( !DCONST_DVARBOOL_bg_advancedIdleDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_advancedIdleDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v50);
  if ( v50->current.enabled )
  {
    IsServerThread = Sys_IsServerThread();
    FrequencyIndex = BG_AdvancedIdle_GetFrequencyIndex(weaponMap, ps, idleMotionIndex);
    __asm
    {
      vmovss  xmm1, dword ptr [rdi+8]
      vmovss  xmm2, dword ptr [rdi+4]
      vmovss  xmm4, dword ptr [rdi]
      vmovss  xmm5, dword ptr [rsp+0E8h+outPos+8]
      vmovss  xmm3, dword ptr [rsp+0E8h+outPos]
      vmovss  xmm6, dword ptr [rsp+0E8h+outPos+4]
      vcvtss2sd xmm0, xmm10, xmm10
    }
    v60 = 67i64;
    v61 = "high";
    if ( !idleMotionIndex )
      v61 = "low";
    __asm { vmovsd  [rsp+0E8h+var_A0], xmm0 }
    if ( IsServerThread )
      v60 = 83i64;
    v62 = 34;
    __asm
    {
      vcvtss2sd xmm1, xmm1, xmm1
      vmovsd  [rsp+0E8h+var_A8], xmm1
      vcvtss2sd xmm2, xmm2, xmm2
      vmovsd  [rsp+0E8h+var_B0], xmm2
      vcvtss2sd xmm4, xmm4, xmm4
      vmovsd  [rsp+0E8h+var_B8], xmm4
      vcvtss2sd xmm5, xmm5, xmm5
      vcvtss2sd xmm3, xmm3, xmm3
    }
    if ( IsServerThread )
      v62 = 15;
    __asm
    {
      vmovsd  [rsp+0E8h+var_C0], xmm5
      vcvtss2sd xmm6, xmm6, xmm6
      vmovq   r9, xmm3
      vmovsd  [rsp+0E8h+fmt], xmm6
    }
    Com_Printf(v62, "[%c] View Angles Base Point[%.3f %.3f %.3f] Scaled Point[%.3f %.3f %.3f] time[%.4f] freq[%d] type[%s]\n", v60, _R9, fmt, v73, v74, v75, v76, v77, FrequencyIndex, v61);
  }
  __asm
  {
    vmovaps xmm6, [rsp+0E8h+var_58]
    vmovaps xmm10, [rsp+0E8h+var_68]
  }
}

/*
==============
BG_AdvancedIdle_GetWeaponAngles
==============
*/
void BG_AdvancedIdle_GetWeaponAngles(const BgWeaponMap *weaponMap, const playerState_s *ps, const int idleMotionIndex, const int idleTime, const BSplineRelaxedCBezier *motionSpline, const float scale, const vec3_t *magnitudes, vec3_t *outAngles)
{
  const dvar_t *v16; 
  const dvar_t *v37; 
  bool IsServerThread; 
  int FrequencyIndex; 
  __int64 v47; 
  const char *v48; 
  int v49; 
  char *fmt; 
  __int64 v59; 
  __int64 v60; 
  __int64 v61; 
  __int64 v62; 
  __int64 v63; 
  vec3_t outPos; 

  __asm { vmovaps [rsp+0D8h+var_58], xmm6 }
  _RDI = outAngles;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 414, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( idleTime < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 415, ASSERT_TYPE_ASSERT, "(idleTime >= 0)", (const char *)&queryFormat, "idleTime >= 0") )
    __debugbreak();
  if ( !motionSpline && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 416, ASSERT_TYPE_ASSERT, "(motionSpline)", (const char *)&queryFormat, "motionSpline") )
    __debugbreak();
  v16 = DCONST_DVARINT_bg_advancedIdleFrequency;
  if ( !DCONST_DVARINT_bg_advancedIdleFrequency && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_advancedIdleFrequency") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  if ( v16->current.integer <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 419, ASSERT_TYPE_ASSERT, "(frequency > 0)", (const char *)&queryFormat, "frequency > 0") )
    __debugbreak();
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000; max
    vxorps  xmm1, xmm1, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm1, xmm1, edx
    vcvtsi2ss xmm0, xmm0, ebx
    vdivss  xmm0, xmm1, xmm0; val
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm1, xmm0; t
    vmovaps xmm6, xmm0
  }
  BG_BSpline_RelaxedCBezier_Evaluate(motionSpline, *(float *)&_XMM1, &outPos);
  _RAX = magnitudes;
  __asm
  {
    vmovss  xmm4, [rsp+0D8h+scale]
    vmovss  xmm1, dword ptr [rsp+0D8h+outPos]
    vmulss  xmm2, xmm1, dword ptr [rax]
    vmovss  xmm3, dword ptr [rax+4]
    vmovss  xmm5, dword ptr [rax+8]
    vmulss  xmm1, xmm3, dword ptr [rsp+0D8h+outPos+4]
    vmulss  xmm0, xmm1, xmm4
    vmovss  dword ptr [rdi+4], xmm0
    vmulss  xmm0, xmm5, dword ptr [rsp+0D8h+outPos+8]
    vmulss  xmm2, xmm2, xmm4
    vmovss  dword ptr [rdi], xmm2
    vmulss  xmm2, xmm0, xmm4
    vmovss  dword ptr [rdi+8], xmm2
  }
  v37 = DCONST_DVARBOOL_bg_advancedIdleDebug;
  if ( !DCONST_DVARBOOL_bg_advancedIdleDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_advancedIdleDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v37);
  if ( v37->current.enabled )
  {
    IsServerThread = Sys_IsServerThread();
    FrequencyIndex = BG_AdvancedIdle_GetFrequencyIndex(weaponMap, ps, idleMotionIndex);
    __asm
    {
      vmovss  xmm1, dword ptr [rdi+8]
      vmovss  xmm2, dword ptr [rdi+4]
      vmovss  xmm4, dword ptr [rdi]
      vmovss  xmm5, dword ptr [rsp+0D8h+outPos+8]
      vmovss  xmm3, dword ptr [rsp+0D8h+outPos]
      vcvtss2sd xmm0, xmm6, xmm6
      vmovss  xmm6, dword ptr [rsp+0D8h+outPos+4]
    }
    v47 = 67i64;
    v48 = "high";
    if ( !idleMotionIndex )
      v48 = "low";
    __asm { vmovsd  [rsp+0D8h+var_90], xmm0 }
    if ( IsServerThread )
      v47 = 83i64;
    v49 = 34;
    __asm
    {
      vcvtss2sd xmm1, xmm1, xmm1
      vmovsd  [rsp+0D8h+var_98], xmm1
      vcvtss2sd xmm2, xmm2, xmm2
      vmovsd  [rsp+0D8h+var_A0], xmm2
      vcvtss2sd xmm4, xmm4, xmm4
      vmovsd  [rsp+0D8h+var_A8], xmm4
      vcvtss2sd xmm5, xmm5, xmm5
      vcvtss2sd xmm3, xmm3, xmm3
    }
    if ( IsServerThread )
      v49 = 15;
    __asm
    {
      vmovsd  [rsp+0D8h+var_B0], xmm5
      vcvtss2sd xmm6, xmm6, xmm6
      vmovq   r9, xmm3
      vmovsd  [rsp+0D8h+fmt], xmm6
    }
    Com_Printf(v49, "[%c] Weapon Angles Base Point[%.3f %.3f %.3f] Scaled Point[%.3f %.3f %.3f] time[%.4f] freq[%d] type[%s]\n", v47, _R9, fmt, v59, v60, v61, v62, v63, FrequencyIndex, v48);
  }
  __asm { vmovaps xmm6, [rsp+0D8h+var_58] }
}

/*
==============
BG_AdvancedIdle_UpdateIdleMotionCache
==============
*/
void BG_AdvancedIdle_UpdateIdleMotionCache(const BgWeaponMap *weaponMap, const playerState_s *ps, const Weapon *weapon, const bool isViewMotion, WeaponIdleMotionCache *idleMotionCache)
{
  int FrequencyIndex; 
  __int64 v14; 
  __int64 v16; 
  int v28; 
  BSplineRelaxedCBezier v41; 

  _RBX = idleMotionCache;
  _RDI = weapon;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 375, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !idleMotionCache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 376, ASSERT_TYPE_ASSERT, "(idleMotionCache)", (const char *)&queryFormat, "idleMotionCache") )
    __debugbreak();
  if ( memcmp_0(_RDI, idleMotionCache, 0x3Cui64) )
  {
    *(_QWORD *)&idleMotionCache->weapon.weaponIdx = 0i64;
    __asm
    {
      vmovups ymm0, ymmword ptr [rdi]
      vmovups ymmword ptr [rbx], ymm0
      vmovups xmm1, xmmword ptr [rdi+20h]
      vmovups xmmword ptr [rbx+20h], xmm1
      vmovsd  xmm0, qword ptr [rdi+30h]
      vmovsd  qword ptr [rbx+30h], xmm0
    }
    *(_DWORD *)&idleMotionCache->weapon.weaponCamo = *(_DWORD *)&_RDI->weaponCamo;
  }
  FrequencyIndex = BG_AdvancedIdle_GetFrequencyIndex(weaponMap, ps, 0);
  v14 = 6i64;
  if ( FrequencyIndex != idleMotionCache->idleMotion1FreqIdx || !idleMotionCache->idleMotion1Spline.ncurves )
  {
    BSplineRelaxedCBezier::BSplineRelaxedCBezier(&v41);
    v16 = 6i64;
    _RDX = &idleMotionCache->idleMotion1Spline;
    do
    {
      _RDX = (BSplineRelaxedCBezier *)((char *)_RDX + 128);
      __asm { vmovups xmm0, xmmword ptr [rax] }
      _RAX += 128i64;
      __asm
      {
        vmovups xmmword ptr [rdx-80h], xmm0
        vmovups xmm1, xmmword ptr [rax-70h]
        vmovups xmmword ptr [rdx-70h], xmm1
        vmovups xmm0, xmmword ptr [rax-60h]
        vmovups xmmword ptr [rdx-60h], xmm0
        vmovups xmm1, xmmword ptr [rax-50h]
        vmovups xmmword ptr [rdx-50h], xmm1
        vmovups xmm0, xmmword ptr [rax-40h]
        vmovups xmmword ptr [rdx-40h], xmm0
        vmovups xmm1, xmmword ptr [rax-30h]
        vmovups xmmword ptr [rdx-30h], xmm1
        vmovups xmm0, xmmword ptr [rax-20h]
        vmovups xmmword ptr [rdx-20h], xmm0
        vmovups xmm1, xmmword ptr [rax-10h]
        vmovups xmmword ptr [rdx-10h], xmm1
      }
      --v16;
    }
    while ( v16 );
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rdx], xmm0
      vmovups xmm1, xmmword ptr [rax+10h]
      vmovups xmmword ptr [rdx+10h], xmm1
    }
    BG_AdvancedIdle_BuildSpline(ps, 0, FrequencyIndex, isViewMotion, &idleMotionCache->idleMotion1Spline);
    idleMotionCache->idleMotion1FreqIdx = FrequencyIndex;
  }
  v28 = BG_AdvancedIdle_GetFrequencyIndex(weaponMap, ps, 1);
  if ( v28 != idleMotionCache->idleMotion2FreqIdx || !idleMotionCache->idleMotion2Spline.ncurves )
  {
    BSplineRelaxedCBezier::BSplineRelaxedCBezier(&v41);
    _R8 = &idleMotionCache->idleMotion2Spline;
    do
    {
      _R8 = (BSplineRelaxedCBezier *)((char *)_R8 + 128);
      __asm { vmovups xmm0, xmmword ptr [rax] }
      _RAX += 128i64;
      __asm
      {
        vmovups xmmword ptr [r8-80h], xmm0
        vmovups xmm1, xmmword ptr [rax-70h]
        vmovups xmmword ptr [r8-70h], xmm1
        vmovups xmm0, xmmword ptr [rax-60h]
        vmovups xmmword ptr [r8-60h], xmm0
        vmovups xmm1, xmmword ptr [rax-50h]
        vmovups xmmword ptr [r8-50h], xmm1
        vmovups xmm0, xmmword ptr [rax-40h]
        vmovups xmmword ptr [r8-40h], xmm0
        vmovups xmm1, xmmword ptr [rax-30h]
        vmovups xmmword ptr [r8-30h], xmm1
        vmovups xmm0, xmmword ptr [rax-20h]
        vmovups xmmword ptr [r8-20h], xmm0
        vmovups xmm1, xmmword ptr [rax-10h]
        vmovups xmmword ptr [r8-10h], xmm1
      }
      --v14;
    }
    while ( v14 );
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [r8], xmm0
      vmovups xmm1, xmmword ptr [rax+10h]
      vmovups xmmword ptr [r8+10h], xmm1
    }
    BG_AdvancedIdle_BuildSpline(ps, (unsigned __int8)v14 + 1, v28, isViewMotion, &idleMotionCache->idleMotion2Spline);
    idleMotionCache->idleMotion2FreqIdx = v28;
  }
}

/*
==============
BG_ApplyViewBobAndScriptOffsets
==============
*/
void BG_ApplyViewBobAndScriptOffsets(const playerState_s *ps, const int serverTime, const int (*packedBobCycle)[2], const BgHandler *handler, vec3_t *outOrigin)
{
  const dvar_t *v27; 
  int v30; 
  unsigned int IndexByName; 
  int v32; 
  unsigned int v33; 
  int v34; 
  unsigned int v35; 
  OmnvarData outViewAmplitude; 
  float outViewCycle; 
  vec3_t v68; 
  vec3_t forward; 
  vec3_t right; 
  vec3_t up; 
  WorldUpReferenceFrame v72; 
  char v73; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
  }
  _R14 = outOrigin;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2594, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm
  {
    vxorps  xmm8, xmm8, xmm8
    vmovss  dword ptr [rsp+140h+var_F0], xmm8
    vmovss  dword ptr [rsp+140h+var_F0+4], xmm8
    vmovss  dword ptr [rsp+140h+var_F0+8], xmm8
  }
  BG_GetBobValue(packedBobCycle, &outViewCycle, (float *)&outViewAmplitude, NULL);
  __asm
  {
    vmovss  xmm7, [rsp+140h+outViewCycle]
    vmulss  xmm1, xmm7, cs:__real@40800000
    vaddss  xmm0, xmm1, cs:__real@3fc90fdb; X
  }
  *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
  __asm
  {
    vmulss  xmm6, xmm0, cs:__real@3e19999a
    vmulss  xmm0, xmm7, cs:__real@40000000; X
  }
  *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@3f400000
    vaddss  xmm2, xmm6, xmm1
    vmulss  xmm9, xmm2, [rsp+140h+outViewAmplitude]
    vmovaps xmm0, xmm7; X
  }
  *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
  __asm
  {
    vmulss  xmm2, xmm0, [rsp+140h+outViewAmplitude]
    vaddss  xmm0, xmm2, dword ptr [rsp+140h+var_F0+4]
    vmovss  dword ptr [rsp+140h+var_F0+4], xmm0
    vmovss  [rsp+140h+outViewAmplitude], xmm2
  }
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2625, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v27 = DCONST_DVARMPBOOL_useScriptWeaponAndViewOffsets;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vxorps  xmm7, xmm7, xmm7
  }
  if ( !DCONST_DVARMPBOOL_useScriptWeaponAndViewOffsets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "useScriptWeaponAndViewOffsets") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v27);
  if ( v27->current.enabled )
  {
    v30 = ps->serverTime;
    IndexByName = BG_Omnvar_GetIndexByName("protoview_x");
    BG_Omnvar_GetDataAtPmoveTime(ps->clientNum, handler, IndexByName, v30, &outViewAmplitude);
    __asm { vmovss  xmm8, [rsp+140h+var_FC] }
    v32 = ps->serverTime;
    v33 = BG_Omnvar_GetIndexByName("protoview_y");
    BG_Omnvar_GetDataAtPmoveTime(ps->clientNum, handler, v33, v32, &outViewAmplitude);
    __asm { vmovss  xmm6, [rsp+140h+var_FC] }
    v34 = ps->serverTime;
    v35 = BG_Omnvar_GetIndexByName("protoview_z");
    BG_Omnvar_GetDataAtPmoveTime(ps->clientNum, handler, v35, v34, &outViewAmplitude);
    __asm { vmovss  xmm7, [rsp+140h+var_FC] }
  }
  __asm
  {
    vaddss  xmm1, xmm8, dword ptr [rsp+140h+var_F0]
    vaddss  xmm0, xmm6, dword ptr [rsp+140h+var_F0+4]
    vaddss  xmm2, xmm7, dword ptr [rsp+140h+var_F0+8]
    vmovss  dword ptr [rsp+140h+var_F0], xmm1
    vmovss  dword ptr [rsp+140h+var_F0+4], xmm0
    vmovss  dword ptr [rsp+140h+var_F0+8], xmm2
  }
  BG_WeaponOffsets_ApplyViewTranslation(ps, serverTime, handler, &v68);
  BG_GetPlayerViewDirection(ps, &forward, &right, &up, handler, 0);
  __asm
  {
    vmovss  xmm5, dword ptr [rsp+140h+var_F0+4]
    vmovss  xmm7, dword ptr [rsp+140h+var_F0]
    vmovss  xmm6, dword ptr [rsp+140h+var_F0+8]
    vmulss  xmm0, xmm5, dword ptr [rsp+140h+right+4]
    vmulss  xmm1, xmm7, dword ptr [rsp+140h+forward]
    vaddss  xmm2, xmm1, dword ptr [r14]
    vmulss  xmm1, xmm5, dword ptr [rsp+140h+right]
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm1, xmm6, dword ptr [rbp+40h+up]
    vaddss  xmm2, xmm3, xmm1
    vmulss  xmm1, xmm7, dword ptr [rsp+140h+forward+4]
    vaddss  xmm3, xmm1, dword ptr [r14+4]
    vaddss  xmm4, xmm3, xmm0
    vmulss  xmm3, xmm5, dword ptr [rsp+140h+right+8]
    vmovss  dword ptr [r14], xmm2
    vmulss  xmm2, xmm6, dword ptr [rbp+40h+up+4]
    vaddss  xmm0, xmm4, xmm2
    vmulss  xmm2, xmm7, dword ptr [rsp+140h+forward+8]
    vaddss  xmm4, xmm2, dword ptr [r14+8]
    vmovss  dword ptr [r14+4], xmm0
    vmulss  xmm0, xmm6, dword ptr [rbp+40h+up+8]
    vaddss  xmm5, xmm4, xmm3
    vaddss  xmm3, xmm5, xmm0
    vmovss  dword ptr [r14+8], xmm3
  }
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v72, ps, handler, 1);
  __asm { vmovaps xmm1, xmm9; height }
  WorldUpReferenceFrame::AddUpContribution(&v72, *(float *)&_XMM1, outOrigin);
  _R11 = &v73;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
  }
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
  char v15; 
  bool outIsAlternate; 
  vec3_t newOrigin; 
  AdvancedIdleSettings outAdvancedIdleSettings; 

  _RBX = origin;
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
    __asm
    {
      vmovaps [rsp+158h+var_48], xmm6
      vmovaps [rsp+158h+var_58], xmm7
    }
    *(double *)&_XMM0 = BG_GetWeaponOrOffhandAdsFrac(weaponMap, ps);
    __asm { vmovaps xmm6, xmm0 }
    BG_ApplyWeaponMovement_AdvancedIdleForwardMotion(params, ws, ViewmodelOrOffhandADSSupportWeapon, outIsAlternate, &outAdvancedIdleSettings, _RBX);
    __asm
    {
      vmovss  xmm1, [rsp+158h+outAdvancedIdleSettings.idleSwaySetting1_AdsWeaponRotationOffset]
      vsubss  xmm2, xmm1, [rsp+158h+outAdvancedIdleSettings.idleSwaySetting1_HipWeaponRotationOffset]
      vmulss  xmm3, xmm2, xmm6
      vaddss  xmm1, xmm3, [rsp+158h+outAdvancedIdleSettings.idleSwaySetting1_HipWeaponRotationOffset]; rotationOffsetForward
      vxorps  xmm7, xmm7, xmm7
      vucomiss xmm1, xmm7
    }
    if ( !v15 )
    {
      BG_GetNewOriginForRotationWithOffset(&(*weaponAnglesCategorized)[5], *(const float *)&_XMM1, &newOrigin);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+158h+newOrigin]
        vaddss  xmm1, xmm0, dword ptr [rbx]
        vmovss  xmm0, dword ptr [rsp+158h+newOrigin+4]
        vmovss  dword ptr [rbx], xmm1
        vaddss  xmm1, xmm0, dword ptr [rbx+4]
        vmovss  xmm0, dword ptr [rsp+158h+newOrigin+8]
        vmovss  dword ptr [rbx+4], xmm1
        vaddss  xmm1, xmm0, dword ptr [rbx+8]
        vmovss  dword ptr [rbx+8], xmm1
      }
    }
    __asm
    {
      vmovss  xmm0, [rsp+158h+outAdvancedIdleSettings.idleSwaySetting2_AdsWeaponRotationOffset]
      vsubss  xmm1, xmm0, [rsp+158h+outAdvancedIdleSettings.idleSwaySetting2_HipWeaponRotationOffset]
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm1, xmm2, [rsp+158h+outAdvancedIdleSettings.idleSwaySetting2_HipWeaponRotationOffset]; rotationOffsetForward
      vmovaps xmm6, [rsp+158h+var_48]
      vucomiss xmm1, xmm7
      vmovaps xmm7, [rsp+158h+var_58]
    }
    if ( !v15 )
    {
      BG_GetNewOriginForRotationWithOffset(&(*weaponAnglesCategorized)[6], *(const float *)&_XMM1, &newOrigin);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+158h+newOrigin]
        vaddss  xmm1, xmm0, dword ptr [rbx]
        vmovss  xmm0, dword ptr [rsp+158h+newOrigin+4]
        vmovss  dword ptr [rbx], xmm1
        vaddss  xmm1, xmm0, dword ptr [rbx+4]
        vmovss  xmm0, dword ptr [rsp+158h+newOrigin+8]
        vmovss  dword ptr [rbx+4], xmm1
        vaddss  xmm1, xmm0, dword ptr [rbx+8]
        vmovss  dword ptr [rbx+8], xmm1
      }
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
  char v48; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps xmmword ptr [r11-38h], xmm10
    vmovaps xmmword ptr [r11-48h], xmm11
  }
  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 866, ASSERT_TYPE_ASSERT, "(params)", (const char *)&queryFormat, "params") )
    __debugbreak();
  if ( !ws && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 867, ASSERT_TYPE_ASSERT, "(ws)", (const char *)&queryFormat, "ws") )
    __debugbreak();
  ps = params->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 870, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  _RSI = advancedIdleSettings;
  if ( !advancedIdleSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 872, ASSERT_TYPE_ASSERT, "(advancedIdleSettings)", (const char *)&queryFormat, "advancedIdleSettings") )
    __debugbreak();
  *(float *)&_XMM0 = BG_GetIdleScaleMultiplier(params, ws, r_weapon, isAlternate);
  __asm { vmovaps xmm11, xmm0 }
  BG_GetIdleCycleStartTime(r_weapon, isAlternate, ps);
  *(double *)&_XMM0 = BG_GetWeaponOrOffhandAdsFrac(params->weaponMap, ps);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, ecx
    vmovaps xmm10, xmm0
    vmulss  xmm0, xmm1, cs:TIME_SCALE; X
  }
  *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
  __asm
  {
    vmovss  xmm1, dword ptr [rsi+40h]
    vsubss  xmm2, xmm1, dword ptr [rsi+1Ch]
  }
  _RBX = origin;
  __asm
  {
    vmulss  xmm3, xmm2, xmm10
    vaddss  xmm4, xmm3, dword ptr [rsi+1Ch]
    vmulss  xmm1, xmm4, xmm11
    vmulss  xmm0, xmm0, xmm1
    vmulss  xmm2, xmm0, cs:MAG_SCALE
    vaddss  xmm7, xmm2, dword ptr [rbx]
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rbx], xmm7
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm0, xmm0, cs:TIME_SCALE; X
  }
  *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
  __asm
  {
    vmovss  xmm1, dword ptr [rsi+88h]
    vsubss  xmm2, xmm1, dword ptr [rsi+64h]
  }
  _R11 = &v48;
  __asm
  {
    vmulss  xmm3, xmm2, xmm10
    vaddss  xmm4, xmm3, dword ptr [rsi+64h]
    vmovaps xmm10, xmmword ptr [r11-20h]
    vmulss  xmm1, xmm4, xmm11
    vmovaps xmm11, xmmword ptr [r11-30h]
    vmulss  xmm0, xmm0, xmm1
    vmulss  xmm2, xmm0, cs:MAG_SCALE
    vaddss  xmm3, xmm2, xmm7
    vmovaps xmm7, [rsp+78h+var_28]
    vmovss  dword ptr [rbx], xmm3
  }
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
  bool outIsAlternate; 

  _RSI = outCombinedAngles;
  _RBX = outBobAngles;
  _RDI = ws;
  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 795, ASSERT_TYPE_ASSERT, "(params)", (const char *)&queryFormat, "params") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 796, ASSERT_TYPE_ASSERT, "(ws)", (const char *)&queryFormat, "ws") )
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
    BG_GetWeaponOrOffhandAdsFrac(weaponMap, ps);
    __asm
    {
      vmovss  xmm1, cs:__real@3f800000
      vsubss  xmm2, xmm1, xmm0
      vmulss  xmm0, xmm2, dword ptr [rdi+0B8h]
      vmovss  dword ptr [rbx], xmm0
      vmulss  xmm1, xmm2, dword ptr [rdi+0BCh]
      vmovss  dword ptr [rbx+4], xmm1
      vmulss  xmm0, xmm2, dword ptr [rdi+0C0h]
    }
  }
  else
  {
    _RBX->v[0] = _RDI->bobAngles.v[0];
    _RBX->v[1] = _RDI->bobAngles.v[1];
    __asm { vmovss  xmm0, dword ptr [rdi+0C0h] }
  }
  __asm
  {
    vmovss  dword ptr [rbx+8], xmm0
    vmovss  xmm0, dword ptr [rbx]
    vaddss  xmm1, xmm0, dword ptr [rsi]
    vmovss  dword ptr [rsi], xmm1
    vmovss  xmm0, dword ptr [rbx+4]
    vaddss  xmm1, xmm0, dword ptr [rsi+4]
    vmovss  xmm0, dword ptr [rsi+8]
    vmovss  dword ptr [rsi+4], xmm1
    vaddss  xmm1, xmm0, dword ptr [rbx+8]
    vmovss  dword ptr [rsi+8], xmm1
  }
}

/*
==============
BG_CalculateGunMovement_Bob
==============
*/

void __fastcall BG_CalculateGunMovement_Bob(const playerState_s *ps, double cyclePhaseOffsetVertical, double cyclePhaseOffsetHorizontal, float *outVertical, float *outHorizontal)
{
  int *packedBobCycle; 
  const dvar_t *v14; 
  BobCycle v34; 
  char v35; 
  void *retaddr; 
  int v37; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  packedBobCycle = ps->packedBobCycle;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
  }
  _RDI = outVertical;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmm8, xmm1
    vmovaps xmm6, xmm2
  }
  BG_GetBobValue((const int (*)[2])ps->packedBobCycle, (float *)&v37, NULL, NULL);
  BobCycle::UnpackBobCycle(&v34, (const int (*)[2])packedBobCycle);
  v14 = DCONST_DVARMPFLT_bg_gunBobMax;
  if ( !DCONST_DVARMPFLT_bg_gunBobMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_gunBobMax") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  __asm
  {
    vmovss  xmm0, [rsp+0A8h+var_68.amplitudeRatioGun]
    vaddss  xmm9, xmm8, [rsp+0A8h+arg_8]
    vmulss  xmm7, xmm0, dword ptr [rbx+28h]
    vaddss  xmm8, xmm6, [rsp+0A8h+arg_8]
  }
  if ( _RDI )
  {
    __asm
    {
      vmulss  xmm0, xmm9, cs:__real@40800000
      vaddss  xmm0, xmm0, cs:__real@3fc90fdb; X
    }
    *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
    __asm
    {
      vmulss  xmm6, xmm0, cs:__real@3e19999a
      vmulss  xmm0, xmm9, cs:__real@40000000; X
    }
    *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
    __asm
    {
      vmulss  xmm1, xmm0, cs:__real@3f400000
      vaddss  xmm2, xmm6, xmm1
      vmulss  xmm3, xmm2, xmm7
      vmovss  dword ptr [rdi], xmm3
    }
  }
  _RBX = outHorizontal;
  if ( outHorizontal )
  {
    __asm { vmovaps xmm0, xmm8; X }
    *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
    __asm
    {
      vmulss  xmm1, xmm0, xmm7
      vmovss  dword ptr [rbx], xmm1
    }
  }
  _R11 = &v35;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
}

/*
==============
BG_CalculateViewMovement_Angles
==============
*/
void BG_CalculateViewMovement_Angles(const ViewMovementParams *const params, ViewMovementState *vs, vec3_t *outAngles)
{
  const playerState_s *ps; 
  const playerState_s *v14; 
  const BgHandler *handler; 
  const dvar_t *v16; 
  int serverTime; 
  unsigned int IndexByName; 
  int v21; 
  unsigned int v22; 
  int v24; 
  unsigned int v25; 
  char v27; 
  vec3_t a1; 
  vec3_t outAnglesa; 

  __asm { vmovaps [rsp+0B8h+var_48], xmm6 }
  _RSI = outAngles;
  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2560, ASSERT_TYPE_ASSERT, "(params)", (const char *)&queryFormat, "params") )
    __debugbreak();
  if ( !vs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2561, ASSERT_TYPE_ASSERT, "(vs)", (const char *)&queryFormat, "vs") )
    __debugbreak();
  *(_QWORD *)_RSI->v = 0i64;
  _RSI->v[2] = 0.0;
  BG_CalculateViewMovement_Angles_DamageKick(params, vs, _RSI);
  BG_CalculateViewMovement_Angles_Idle(params, vs, _RSI);
  BG_CalculateViewMovement_Angles_Bob(params, vs, _RSI);
  BG_CalculateViewMovement_Angles_AdsBob(params, vs, _RSI);
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
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0B8h+outAngles]
    vaddss  xmm1, xmm0, dword ptr [rsi]
    vmovss  xmm2, dword ptr [rsp+0B8h+outAngles+4]
    vaddss  xmm0, xmm2, dword ptr [rsi+4]
    vmovss  dword ptr [rsi], xmm1
    vmovss  xmm1, dword ptr [rsp+0B8h+outAngles+8]
    vaddss  xmm2, xmm1, dword ptr [rsi+8]
    vmovss  dword ptr [rsi+8], xmm2
    vmovss  dword ptr [rsi+4], xmm0
  }
  v14 = params->ps;
  handler = params->handler;
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2647, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v16 = DCONST_DVARMPBOOL_useScriptWeaponAndViewOffsets;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vmovss  dword ptr [rsp+0B8h+a1], xmm6
    vmovss  dword ptr [rsp+0B8h+a1+4], xmm6
    vmovss  dword ptr [rsp+0B8h+a1+8], xmm6
  }
  if ( !DCONST_DVARMPBOOL_useScriptWeaponAndViewOffsets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "useScriptWeaponAndViewOffsets") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  if ( v16->current.enabled )
  {
    serverTime = v14->serverTime;
    IndexByName = BG_Omnvar_GetIndexByName("protoview_ax");
    BG_Omnvar_GetDataAtPmoveTime(v14->clientNum, handler, IndexByName, serverTime, (OmnvarData *)&outAnglesa);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0B8h+outAngles+4]
      vmovss  dword ptr [rsp+0B8h+a1], xmm0
    }
    v21 = v14->serverTime;
    v22 = BG_Omnvar_GetIndexByName("protoview_ay");
    BG_Omnvar_GetDataAtPmoveTime(v14->clientNum, handler, v22, v21, (OmnvarData *)&outAnglesa);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0B8h+outAngles+4]
      vmovss  dword ptr [rsp+0B8h+a1+4], xmm0
    }
    v24 = v14->serverTime;
    v25 = BG_Omnvar_GetIndexByName("protoview_az");
    BG_Omnvar_GetDataAtPmoveTime(v14->clientNum, handler, v25, v24, (OmnvarData *)&outAnglesa);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0B8h+outAngles+4]
      vmovss  dword ptr [rsp+0B8h+a1+8], xmm0
    }
  }
  BG_WeaponOffsets_ApplyViewAngles(params->ps, params->serverTime, params->handler, &a1);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0B8h+a1]
    vucomiss xmm0, xmm6
  }
  if ( !v27 )
    goto LABEL_33;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0B8h+a1+4]
    vucomiss xmm0, xmm6
  }
  if ( !v27 )
    goto LABEL_33;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0B8h+a1+8]
    vucomiss xmm0, xmm6
  }
  if ( !v27 )
LABEL_33:
    AddAnglesAsQuatMultiply(_RSI, &a1, _RSI);
  __asm { vmovaps xmm6, [rsp+0B8h+var_48] }
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
  char v15; 
  char v16; 
  const Weapon *ViewmodelOrOffhandADSSupportWeapon; 
  bool outIsAlternate; 
  float outVertical; 
  float outHorizontal; 

  __asm
  {
    vmovaps [rsp+0A8h+var_38], xmm6
    vmovaps [rsp+0A8h+var_58], xmm8
  }
  _RBP = inOutAngles;
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
  *(double *)&_XMM0 = BG_GetWeaponOrOffhandAdsFrac(weaponMap, ps);
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm0, xmm6
    vmovaps xmm8, xmm0
  }
  if ( !(v15 | v16) )
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
        __asm { vmovaps [rsp+0A8h+var_48], xmm7 }
        ViewmodelOrOffhandADSSupportWeapon = BG_GetViewmodelOrOffhandADSSupportWeapon(weaponMap, ps, &outIsAlternate);
        *(double *)&_XMM0 = BG_ADSViewBobMult(weaponMap, ps, ViewmodelOrOffhandADSSupportWeapon, outIsAlternate);
        __asm
        {
          vcomiss xmm0, xmm6
          vmovaps xmm7, xmm0
        }
        if ( !(v15 | v16) )
        {
          __asm { vxorps  xmm1, xmm1, xmm1; cyclePhaseOffset }
          BG_CalculateViewMovement_Bob((const int (*)[2])ps->packedBobCycle, *(float *)&_XMM1, &outVertical, &outHorizontal);
          __asm
          {
            vmulss  xmm0, xmm7, xmm8
            vxorps  xmm3, xmm0, cs:__xmm@80000000800000008000000080000000
            vmulss  xmm2, xmm3, [rsp+0A8h+outVertical]
            vaddss  xmm0, xmm2, dword ptr [rbp+0]
            vmovss  dword ptr [rbp+0], xmm0
            vmulss  xmm0, xmm3, [rsp+0A8h+outHorizontal]
            vaddss  xmm2, xmm0, dword ptr [rbp+4]
            vmovss  dword ptr [rbp+4], xmm2
          }
        }
        __asm { vmovaps xmm7, [rsp+0A8h+var_48] }
      }
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+0A8h+var_38]
    vmovaps xmm8, [rsp+0A8h+var_58]
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
  const dvar_t *v39; 
  char v45; 
  bool outIsAlternate; 
  float outViewCycle; 
  float outViewAmplitude; 
  float outVertical; 
  float outHorizontal[3]; 

  __asm { vmovaps [rsp+0F8h+var_68], xmm8 }
  _RBX = inOutAngles;
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
  *(double *)&_XMM0 = BG_GetWeaponOrOffhandAdsFrac(weaponMap, ps);
  __asm { vmovaps xmm8, xmm0 }
  if ( BG_GetOverlay(ViewmodelOrOffhandADSSupportWeapon, outIsAlternate)->reticle )
  {
    _RBP = DCONST_DVARFLT_bg_weaponBobLag;
    __asm
    {
      vmovaps [rsp+0F8h+var_48], xmm6
      vmovaps [rsp+0F8h+var_58], xmm7
      vmovaps [rsp+0F8h+var_78], xmm9
      vmovaps [rsp+0F8h+var_88], xmm10
    }
    if ( !DCONST_DVARFLT_bg_weaponBobLag && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weaponBobLag") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBP);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+28h]
      vmulss  xmm1, xmm0, cs:__real@40490fdb
      vaddss  xmm6, xmm1, cs:__real@40c90fdb
      vmovaps xmm1, xmm6; cyclePhaseOffset
    }
    BG_CalculateViewMovement_Bob((const int (*)[2])ps->packedBobCycle, *(float *)&_XMM1, &outVertical, outHorizontal);
    _RBP = DCONST_DVARMPFLT_bg_weaponBobAmplitudeBase;
    if ( !DCONST_DVARMPFLT_bg_weaponBobAmplitudeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weaponBobAmplitudeBase") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBP);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+28h]
      vxorps  xmm2, xmm0, cs:__xmm@80000000800000008000000080000000
      vmovss  xmm0, [rsp+0F8h+outHorizontal]
      vmovss  xmm1, [rsp+0F8h+outVertical]
      vmulss  xmm10, xmm0, xmm2
      vmulss  xmm9, xmm1, xmm2
    }
    BG_GetBobValue((const int (*)[2])ps->packedBobCycle, &outViewCycle, &outViewAmplitude, NULL);
    __asm
    {
      vsubss  xmm0, xmm6, cs:__real@3ef1463b
      vaddss  xmm7, xmm0, [rsp+0F8h+outViewCycle]
      vmulss  xmm0, xmm7, cs:__real@40800000
      vaddss  xmm0, xmm0, cs:__real@3fc90fdb; X
    }
    *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
    __asm
    {
      vmulss  xmm6, xmm0, cs:__real@3e19999a
      vmulss  xmm0, xmm7, cs:__real@40000000; X
    }
    *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
    __asm { vmulss  xmm1, xmm0, cs:__real@3f400000 }
    _RBP = DCONST_DVARMPFLT_bg_weaponBobAmplitudeBase;
    __asm
    {
      vaddss  xmm2, xmm6, xmm1
      vmulss  xmm7, xmm2, [rsp+0F8h+outViewAmplitude]
    }
    if ( !DCONST_DVARMPFLT_bg_weaponBobAmplitudeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weaponBobAmplitudeBase") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBP);
    __asm { vmovss  xmm6, dword ptr [rbp+28h] }
    v39 = DCONST_DVARMPFLT_bg_weaponBobAmplitudeRoll;
    if ( !DCONST_DVARMPFLT_bg_weaponBobAmplitudeRoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weaponBobAmplitudeRoll") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v39);
    __asm
    {
      vmulss  xmm0, xmm7, xmm6
      vmulss  xmm1, xmm0, dword ptr [rbp+28h]
      vmovaps xmm7, [rsp+0F8h+var_58]
      vxorps  xmm2, xmm2, xmm2
      vucomiss xmm8, xmm2
      vminss  xmm6, xmm1, xmm2
    }
    if ( !v45 )
    {
      BG_ADSBobFactor(weaponMap, ps, ViewmodelOrOffhandADSSupportWeapon, outIsAlternate);
      __asm
      {
        vmovss  xmm2, cs:__real@3f800000
        vsubss  xmm0, xmm2, xmm0
        vmulss  xmm1, xmm0, xmm8
        vsubss  xmm2, xmm2, xmm1
        vmulss  xmm9, xmm9, xmm2
        vmulss  xmm10, xmm10, xmm2
        vmulss  xmm6, xmm6, xmm2
      }
    }
    __asm
    {
      vmulss  xmm0, xmm9, xmm8
      vaddss  xmm1, xmm0, dword ptr [rbx]
      vmovaps xmm9, [rsp+0F8h+var_78]
      vmulss  xmm0, xmm10, xmm8
      vmovaps xmm10, [rsp+0F8h+var_88]
      vmovss  dword ptr [rbx], xmm1
      vaddss  xmm1, xmm0, dword ptr [rbx+4]
      vmulss  xmm0, xmm6, xmm8
      vmovaps xmm6, [rsp+0F8h+var_48]
      vmovss  dword ptr [rbx+4], xmm1
      vaddss  xmm1, xmm0, dword ptr [rbx+8]
      vmovss  dword ptr [rbx+8], xmm1
    }
  }
  __asm { vmovaps xmm8, [rsp+0F8h+var_68] }
}

/*
==============
BG_CalculateViewMovement_Angles_DamageKick
==============
*/
void BG_CalculateViewMovement_Angles_DamageKick(const ViewMovementParams *const params, ViewMovementState *const vs, vec3_t *inOutAngles)
{
  const BgWeaponMap *weaponMap; 
  bool v10; 
  const Weapon *ViewmodelWeapon; 
  const ADSOverlay *Overlay; 
  bool v13; 
  bool v14; 

  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1990, ASSERT_TYPE_ASSERT, "(params)", (const char *)&queryFormat, "params") )
    __debugbreak();
  if ( !vs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1991, ASSERT_TYPE_ASSERT, "(vs)", (const char *)&queryFormat, "vs") )
    __debugbreak();
  if ( params->damageTime )
  {
    _RSI = params->ps;
    __asm
    {
      vmovaps [rsp+68h+var_28], xmm6
      vmovaps [rsp+68h+var_38], xmm7
    }
    if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1999, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    weaponMap = params->weaponMap;
    if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2002, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    v10 = BG_UsingAlternate(_RSI);
    ViewmodelWeapon = BG_GetViewmodelWeapon(weaponMap, _RSI);
    Overlay = BG_GetOverlay(ViewmodelWeapon, v10);
    v13 = Overlay == NULL;
    if ( !Overlay )
    {
      v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2008, ASSERT_TYPE_ASSERT, "(adsOverlay)", (const char *)&queryFormat, "adsOverlay");
      v13 = !v14;
      if ( v14 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm1, dword ptr [rsi+730h]
      vmulss  xmm2, xmm1, cs:__real@3f000000
      vmovss  xmm6, cs:__real@3f800000
      vxorps  xmm0, xmm0, xmm0
      vucomiss xmm1, xmm0
      vsubss  xmm7, xmm6, xmm2
    }
    if ( !v13 )
    {
      if ( Overlay->reticle )
      {
        __asm
        {
          vaddss  xmm0, xmm2, xmm6
          vmulss  xmm7, xmm7, xmm0
        }
      }
    }
    __asm
    {
      vmovss  xmm1, cs:__real@42c80000
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rdi+0Ch]
      vcomiss xmm0, xmm1
      vsubss  xmm0, xmm0, xmm1
      vmulss  xmm0, xmm0, cs:__real@3b23d70a; fFrac
      vcomiss xmm0, xmm6
      vmovaps xmm6, [rsp+68h+var_28]
      vmovaps xmm7, [rsp+68h+var_38]
    }
  }
}

/*
==============
BG_CalculateViewMovement_Angles_Idle
==============
*/
void BG_CalculateViewMovement_Angles_Idle(const ViewMovementParams *const params, ViewMovementState *const vs, vec3_t *intOutAngles)
{
  BgWeaponMap *v25; 
  const Weapon *ViewmodelOrOffhandADSSupportWeapon; 
  int weaponIdleTime; 
  char v35; 
  unsigned int v37; 
  bool *p_ShouldIncrementViewMovementIdleTimeADS; 
  ContextMountType type; 
  unsigned int v56; 
  bool *v58; 
  __int64 v59; 
  __int64 v62; 
  unsigned int v64; 
  bool v66; 
  bool v67; 
  vec3_t *outTargetScale; 
  float outTargetScaleb; 
  vec3_t *outTargetScalea; 
  vec3_t *outTimeScale; 
  float outTimeScaleb; 
  vec3_t *outTimeScalea; 
  float outIdleCycle; 
  bool outIsAlternate[4]; 
  bool ShouldIncrementViewMovementIdleTimeADS; 
  char v117; 
  __int16 v118; 
  __int64 v119; 
  __int64 v120; 
  ViewMovementState *v121; 
  bool *v122; 
  BgWeaponMap *weaponMap; 
  __int64 v124; 
  vec3_t *v125; 
  AdvancedIdleSettings outAdvancedIdleSettings; 
  int idleTime[2]; 
  int v131; 
  int v132; 
  float v133[2]; 
  float outUseWeaponPosFrac; 
  float v135; 
  vec3_t v136; 
  vec3_t v140; 
  vec3_t v141; 
  vec3_t v142; 
  vec3_t v146; 
  vec3_t v147; 
  __m256i v148; 
  char v154; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
  }
  v125 = intOutAngles;
  _R14 = vs;
  v121 = vs;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm1, xmm1, xmm1
    vmovups [rbp+1D0h+var_100], ymm0
    vmovups [rbp+1D0h+var_E0], xmm1
    vxorps  xmm9, xmm9, xmm9
    vxorps  xmm12, xmm12, xmm12
    vxorps  xmm13, xmm13, xmm13
    vxorps  xmm14, xmm14, xmm14
  }
  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2311, ASSERT_TYPE_ASSERT, "(params)", (const char *)&queryFormat, "params") )
    __debugbreak();
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2312, ASSERT_TYPE_ASSERT, "(vs)", (const char *)&queryFormat, "vs") )
    __debugbreak();
  _R13 = params->ps;
  if ( !_R13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2315, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v25 = (BgWeaponMap *)params->weaponMap;
  weaponMap = v25;
  if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2318, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  ViewmodelOrOffhandADSSupportWeapon = BG_GetViewmodelOrOffhandADSSupportWeapon(v25, _R13, outIsAlternate);
  BG_GetAdvancedIdleSettings(_R13->perks, ViewmodelOrOffhandADSSupportWeapon, outIsAlternate[0], &outAdvancedIdleSettings);
  if ( outAdvancedIdleSettings.useAdvancedIdleSettings )
  {
    ShouldIncrementViewMovementIdleTimeADS = 0;
    if ( outAdvancedIdleSettings.useRandomPointsAlgorithm )
      BG_AdvancedIdle_UpdateIdleMotionCache(v25, _R13, ViewmodelOrOffhandADSSupportWeapon, 1, &_R14->idleMotionCache);
    LOBYTE(v118) = BG_ShouldAdvancedIdleMotionAdjustViewAngles(_R13, v25, &outAdvancedIdleSettings, 0, &outUseWeaponPosFrac, &v140, &v146, &v131);
    HIBYTE(v118) = BG_ShouldAdvancedIdleMotionAdjustViewAngles(_R13, v25, &outAdvancedIdleSettings, 1u, &v135, &v141, &v147, &v132);
  }
  else
  {
    ShouldIncrementViewMovementIdleTimeADS = BG_ShouldIncrementViewMovementIdleTimeADS(_R13, v25, v133, &v136, &v142, idleTime);
    v118 = 0;
  }
  __asm { vmovss  xmm7, cs:__real@3f800000 }
  if ( BG_IsPlayerZeroGFloating(_R13) )
  {
    __asm { vcomiss xmm7, dword ptr [r13+730h] }
    _RBX = DCONST_DVARMPFLT_bg_viewIdleMoveZeroGrav;
    if ( !DCONST_DVARMPFLT_bg_viewIdleMoveZeroGrav && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_viewIdleMoveZeroGrav") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+28h]
      vmovss  [rbp+1D0h+var_14C], xmm0
      vmovss  [rbp+1D0h+var_150], xmm0
      vmovss  [rbp+1D0h+var_154], xmm0
      vsubss  xmm0, xmm7, dword ptr [r13+730h]; val
      vmovaps xmm2, xmm7; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    weaponIdleTime = _R13->weapCommon.weaponIdleTime;
    __asm
    {
      vmovss  xmm1, cs:__real@39d1b717
      vmovss  [rbp+1D0h+var_16C], xmm0
      vmovss  xmm0, cs:__real@3951b717
    }
    idleTime[1] = weaponIdleTime;
    v35 = 1;
    __asm
    {
      vmovss  [rbp+1D0h+var_120], xmm0
      vmovss  [rbp+1D0h+var_124], xmm1
      vmovss  [rbp+1D0h+var_11C], xmm1
    }
  }
  else
  {
    v35 = 0;
  }
  _R15 = 0i64;
  v117 = v35;
  v37 = 0;
  p_ShouldIncrementViewMovementIdleTimeADS = &ShouldIncrementViewMovementIdleTimeADS;
  while ( !*p_ShouldIncrementViewMovementIdleTimeADS )
  {
    ++v37;
    ++p_ShouldIncrementViewMovementIdleTimeADS;
    if ( v37 >= 4 )
      goto LABEL_76;
  }
  type = _R13->mountState.surface.type;
  __asm
  {
    vmovaps xmmword ptr [rsp+2D0h+var_48+8], xmm6
    vmovss  xmm6, dword ptr [r13+4C0h]
    vmovaps xmmword ptr [rsp+2D0h+var_68+8], xmm8
    vmovaps xmmword ptr [rsp+2D0h+var_88+8], xmm10
    vmovaps [rsp+2D0h+var_98+8], xmm11
  }
  *(double *)&_XMM0 = BG_GetMountViewIdleScale(type, ViewmodelOrOffhandADSSupportWeapon, outIsAlternate[0]);
  __asm
  {
    vmulss  xmm2, xmm0, xmm6
    vsubss  xmm1, xmm7, xmm6
    vaddss  xmm10, xmm2, xmm1
  }
  BG_CalculateViewMovement_IdleFactor(params, _R14);
  __asm { vmovss  xmm6, cs:__real@bf800000 }
  _EAX = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&_R13->weapCommon.weapFlags, ACTIVE, 0x20u);
  __asm
  {
    vmovd   xmm0, eax
    vmovd   xmm1, r15d
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm6, xmm7, xmm2
    vmovss  [rbp+1D0h+var_22C], xmm0
  }
  LOBYTE(_EAX) = GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&_R13->weapCommon.weapFlags, ACTIVE, 0x21u);
  __asm { vmovss  xmm11, cs:__real@3c23d70a }
  _ER8 = 0;
  _EAX = (unsigned __int8)_EAX;
  __asm
  {
    vmovd   xmm0, eax
    vmovd   xmm1, r8d
    vpcmpeqd xmm2, xmm0, xmm1
  }
  v56 = 0;
  LODWORD(v119) = 0;
  __asm { vblendvps xmm0, xmm6, xmm7, xmm2 }
  v58 = &ShouldIncrementViewMovementIdleTimeADS;
  v59 = -256i64;
  __asm
  {
    vmovss  [rbp+1D0h+var_230], xmm0
    vmovss  [rbp+1D0h+var_228], xmm7
  }
  v122 = &ShouldIncrementViewMovementIdleTimeADS;
  v120 = -256i64;
  _R12 = 0i64;
  do
  {
    if ( *v58 )
    {
      if ( v56 - 2 <= 1 && outAdvancedIdleSettings.useRandomPointsAlgorithm )
      {
        __asm
        {
          vmovss  xmm0, [rbp+r12+1D0h+var_170]
          vmovss  xmm1, dword ptr [r14]
        }
        v62 = 68i64;
        if ( v56 != 2 )
          v62 = 872i64;
        __asm
        {
          vmovss  dword ptr [rsp+2D0h+outIdleCycle], xmm10
          vmovss  dword ptr [rsp+2D0h+outTimeScale], xmm0
          vmovss  dword ptr [rsp+2D0h+outTargetScale], xmm1
        }
        LOBYTE(_ER8) = v56 != 2;
        BG_AdvancedIdle_GetViewAngles(weaponMap, _R13, _ER8, idleTime[_R12], (const BSplineRelaxedCBezier *)((char *)_R14 + v62), outTargetScaleb, outTimeScaleb, outIdleCycle, &v136 + v56, &v142 + v56, (vec3_t *)&v148 + v56);
      }
      else
      {
        _RDI = (char *)&v142 + _R15;
        v64 = 0;
        _R14 = 0i64;
        v66 = 1;
        v124 = 48i64;
        do
        {
          if ( !v66 )
          {
            LODWORD(outTimeScale) = 3;
            LODWORD(outTargetScale) = v64;
            v67 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outTargetScale, outTimeScale);
            v66 = 0;
            if ( v67 )
              __debugbreak();
          }
          __asm { vcomiss xmm9, dword ptr [rdi+r14] }
          _RSI = &_RDI[_R14];
          if ( v66 )
          {
            if ( v64 >= 3 )
            {
              LODWORD(outTimeScale) = 3;
              LODWORD(outTargetScale) = v64;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outTargetScale, outTimeScale) )
                __debugbreak();
              LODWORD(outTimeScalea) = 3;
              LODWORD(outTargetScalea) = v64;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outTargetScalea, outTimeScalea) )
                __debugbreak();
            }
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, [rbp+r12+1D0h+idleTime]
              vmulss  xmm1, xmm0, dword ptr [rsi]
              vmulss  xmm0, xmm1, dword ptr [rsi+rax]; X
            }
            *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
            _RAX = v121;
            __asm
            {
              vmovaps xmm8, xmm0
              vmovss  xmm6, dword ptr [rax]
            }
            if ( v64 >= 3 )
            {
              LODWORD(outTimeScale) = 3;
              LODWORD(outTargetScale) = v64;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outTargetScale, outTimeScale) )
                __debugbreak();
            }
            _RDI = _R15 + _R14;
            __asm
            {
              vmulss  xmm6, xmm6, dword ptr [rbp+rdi+1D0h+var_160]
              vmovss  dword ptr [rbp+rdi+1D0h+var_160], xmm6
            }
            if ( v64 >= 3 )
            {
              LODWORD(outTimeScale) = 3;
              LODWORD(outTargetScale) = v64;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outTargetScale, outTimeScale) )
                __debugbreak();
            }
            __asm
            {
              vmulss  xmm6, xmm6, [rbp+r12+1D0h+var_170]
              vmovss  xmm7, dword ptr [r13+34Ch]
              vmovss  dword ptr [rbp+rdi+1D0h+var_160], xmm6
            }
            if ( v64 >= 3 )
            {
              LODWORD(outTimeScale) = 3;
              LODWORD(outTargetScale) = v64;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outTargetScale, outTimeScale) )
                __debugbreak();
            }
            __asm
            {
              vmulss  xmm6, xmm7, xmm6
              vmovss  dword ptr [rbp+rdi+1D0h+var_160], xmm6
            }
            if ( v64 >= 3 )
            {
              LODWORD(outTimeScale) = 3;
              LODWORD(outTargetScale) = v64;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outTargetScale, outTimeScale) )
                __debugbreak();
            }
            __asm
            {
              vmulss  xmm6, xmm6, xmm10
              vmovss  dword ptr [rbp+rdi+1D0h+var_160], xmm6
            }
            if ( v64 >= 3 )
            {
              LODWORD(outTimeScale) = 3;
              LODWORD(outTargetScale) = v64;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outTargetScale, outTimeScale) )
                __debugbreak();
            }
            __asm
            {
              vmulss  xmm0, xmm6, xmm8
              vmulss  xmm6, xmm0, xmm11
            }
            if ( v64 >= 3 )
            {
              LODWORD(outTimeScale) = 3;
              LODWORD(outTargetScale) = v64;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outTargetScale, outTimeScale) )
                __debugbreak();
            }
            _RDI = (char *)&v142 + _R15;
          }
          else
          {
            if ( v64 >= 3 )
            {
              LODWORD(outTimeScale) = 3;
              LODWORD(outTargetScale) = v64;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outTargetScale, outTimeScale) )
                __debugbreak();
            }
            __asm { vmovaps xmm6, xmm9 }
          }
          _RAX = v124;
          ++v64;
          _R14 += 4i64;
          __asm { vmovss  dword ptr [rax+rsi], xmm6 }
          v66 = v64 < 3;
        }
        while ( (int)v64 < 3 );
        v56 = v119;
        v59 = v120;
        _R14 = v121;
        v58 = v122;
      }
      _ER8 = 0;
      if ( v56 != 1 )
      {
        __asm
        {
          vaddss  xmm12, xmm12, dword ptr [rbp+r15+1D0h+var_100]
          vaddss  xmm13, xmm13, dword ptr [rbp+r15+1D0h+var_100+4]
          vaddss  xmm14, xmm14, dword ptr [rbp+r15+1D0h+var_100+8]
        }
      }
    }
    ++v56;
    ++v58;
    v59 -= 12i64;
    LODWORD(v119) = v56;
    ++_R12;
    v122 = v58;
    _R15 += 12i64;
    v120 = v59;
  }
  while ( v56 < 4 );
  __asm
  {
    vmovaps xmm11, [rsp+2D0h+var_98+8]
    vmovaps xmm10, xmmword ptr [rsp+2D0h+var_88+8]
    vmovaps xmm8, xmmword ptr [rsp+2D0h+var_68+8]
    vmovaps xmm6, xmmword ptr [rsp+2D0h+var_48+8]
  }
  if ( v117 )
  {
    __asm
    {
      vmovss  xmm3, dword ptr [r13+730h]
      vmovss  xmm0, dword ptr [rbp+1D0h+var_100+0Ch]
      vsubss  xmm1, xmm0, xmm12
      vmovss  xmm0, dword ptr [rbp+1D0h+var_100+10h]
      vmulss  xmm2, xmm1, xmm3
      vsubss  xmm1, xmm0, xmm13
      vmovss  xmm0, dword ptr [rbp+1D0h+var_100+14h]
      vaddss  xmm12, xmm12, xmm2
      vmulss  xmm2, xmm1, xmm3
      vsubss  xmm1, xmm0, xmm14
      vaddss  xmm13, xmm13, xmm2
      vmulss  xmm2, xmm1, xmm3
      vaddss  xmm14, xmm14, xmm2
    }
  }
  _RAX = v125;
  __asm
  {
    vaddss  xmm0, xmm12, dword ptr [rax]
    vaddss  xmm1, xmm13, dword ptr [rax+4]
    vmovss  dword ptr [rax], xmm0
    vaddss  xmm0, xmm14, dword ptr [rax+8]
    vmovss  dword ptr [rax+8], xmm0
    vmovss  dword ptr [rax+4], xmm1
  }
LABEL_76:
  _R11 = &v154;
  __asm
  {
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
  }
}

/*
==============
BG_CalculateViewMovement_Bob
==============
*/

void __fastcall BG_CalculateViewMovement_Bob(const int (*packedBobCycle)[2], double cyclePhaseOffset, float *outVertical, float *outHorizontal)
{
  float outViewAmplitude; 
  float outViewCycle; 

  _RBX = outHorizontal;
  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RDI = outVertical;
  __asm
  {
    vmovaps [rsp+48h+var_28], xmm7
    vmovaps xmm6, xmm1
  }
  BG_GetBobValue(packedBobCycle, &outViewCycle, &outViewAmplitude, NULL);
  __asm { vaddss  xmm7, xmm6, [rsp+48h+outViewCycle] }
  if ( _RDI )
  {
    __asm
    {
      vmulss  xmm0, xmm7, cs:__real@40800000
      vaddss  xmm0, xmm0, cs:__real@3fc90fdb; X
    }
    *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
    __asm
    {
      vmulss  xmm6, xmm0, cs:__real@3e19999a
      vmulss  xmm0, xmm7, cs:__real@40000000; X
    }
    *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
    __asm
    {
      vmulss  xmm1, xmm0, cs:__real@3f400000
      vaddss  xmm2, xmm6, xmm1
      vmulss  xmm3, xmm2, [rsp+48h+outViewAmplitude]
      vmovss  dword ptr [rdi], xmm3
    }
  }
  if ( _RBX )
  {
    __asm { vmovaps xmm0, xmm7; X }
    *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
    __asm
    {
      vmulss  xmm1, xmm0, [rsp+48h+outViewAmplitude]
      vmovss  dword ptr [rbx], xmm1
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+48h+var_18]
    vmovaps xmm7, [rsp+48h+var_28]
  }
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
  bool v9; 

  __asm { vmovaps [rsp+58h+var_28], xmm6 }
  _RBX = idleState;
  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2237, ASSERT_TYPE_ASSERT, "(params)", (const char *)&queryFormat, "params") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2238, ASSERT_TYPE_ASSERT, "(idleState)", (const char *)&queryFormat, "idleState") )
    __debugbreak();
  ps = params->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2241, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  weaponMap = params->weaponMap;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2244, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  ViewmodelWeapon = BG_GetViewmodelWeapon(weaponMap, ps);
  v9 = BG_UsingAlternate(ps);
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ps->eFlags, ACTIVE, 4u) )
  {
    *(double *)&_XMM0 = BG_IdleProneFactor(ViewmodelWeapon, v9);
    __asm { vmovaps xmm6, xmm0 }
  }
  else if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ps->eFlags, ACTIVE, 3u) )
  {
    *(double *)&_XMM0 = BG_IdleCrouchFactor(ViewmodelWeapon, v9);
    __asm { vmovaps xmm6, xmm0 }
  }
  else
  {
    __asm { vmovss  xmm6, cs:__real@3f800000 }
  }
  LOBYTE(_EAX) = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|0x80);
  __asm
  {
    vmovss  xmm2, cs:__real@3a03126f
    vmovss  xmm4, dword ptr [rbx]
  }
  _ECX = 0;
  _EAX = (unsigned __int8)_EAX;
  __asm
  {
    vucomiss xmm6, xmm4
    vmovd   xmm1, ecx
    vmovd   xmm0, eax
    vpcmpeqd xmm3, xmm0, xmm1
    vmovss  xmm1, cs:__real@3f000000
    vblendvps xmm0, xmm1, xmm2, xmm3
    vmovss  [rsp+58h+arg_0], xmm0
    vmovaps xmm6, [rsp+58h+var_28]
  }
}

/*
==============
BG_CalculateWeaponMovement
==============
*/
void BG_CalculateWeaponMovement(const WeaponMovementParams *const params, WeaponMovementState *ws, float *outTiltOffset, float *outMovementTiltOffset, vec3_t *outStandAnglesPivotOffset, vec3_t *outDuckedAnglesPivotOffset, vec3_t *outCombinedAngles, vec3_t (*outAnglesCategorized)[30], vec3_t *outOrigin)
{
  int v19; 
  bool v20; 
  OmnvarData v24; 
  float *v25; 
  const playerState_s *ps; 
  const dvar_t *v27; 
  const BgHandler *handler; 
  const playerState_s *v29; 
  int serverTime; 
  unsigned int IndexByName; 
  int v36; 
  unsigned int v37; 
  int v38; 
  unsigned int v39; 
  const dvar_t *v43; 
  const BgHandler *v44; 
  const playerState_s *v45; 
  int v49; 
  unsigned int v50; 
  int v51; 
  unsigned int v52; 
  int v53; 
  unsigned int v54; 
  OmnvarData outData; 
  float *outMovementTiltOffseta; 
  float *outTiltOffseta; 

  _R14 = params;
  _RBP = outCombinedAngles;
  _RSI = ws;
  _R15 = outOrigin;
  outMovementTiltOffseta = outMovementTiltOffset;
  outTiltOffseta = outTiltOffset;
  outData = (OmnvarData)outDuckedAnglesPivotOffset;
  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1889, ASSERT_TYPE_ASSERT, "(params)", (const char *)&queryFormat, "params") )
    __debugbreak();
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1890, ASSERT_TYPE_ASSERT, "(ws)", (const char *)&queryFormat, "ws") )
    __debugbreak();
  if ( !outAnglesCategorized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1891, ASSERT_TYPE_ASSERT, "(outAnglesCategorized)", (const char *)&queryFormat, "outAnglesCategorized") )
    __debugbreak();
  if ( !outTiltOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1892, ASSERT_TYPE_ASSERT, "(outTiltOffset)", (const char *)&queryFormat, "outTiltOffset") )
    __debugbreak();
  if ( !outMovementTiltOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1893, ASSERT_TYPE_ASSERT, "(outMovementTiltOffset)", (const char *)&queryFormat, "outMovementTiltOffset") )
    __debugbreak();
  v19 = 0;
  v20 = BG_ProceduralGunMotionDisabled(_R14->ps);
  if ( !v20 && !memcmp_0(&_R14->weapon, _RSI, 0x3Cui64) )
    goto LABEL_20;
  *(_QWORD *)_RSI->rawRecoilAngles.v = 0i64;
  *(_QWORD *)&_RSI->rawRecoilAngles.z = 0i64;
  *(_QWORD *)&_RSI->recoilAngles.y = 0i64;
  *(_QWORD *)_RSI->recoilSpeed.v = 0i64;
  *(_QWORD *)&_RSI->recoilSpeed.z = 0i64;
  _RSI->recoilNeedsToCrossCenter = 0;
  *(_QWORD *)&_RSI->swayAngles.y = 0i64;
  *(_QWORD *)_RSI->swayViewAngles.v = 0i64;
  _RSI->swayViewAngles.v[2] = 0.0;
  __asm
  {
    vmovups ymm0, ymmword ptr [r14+28h]
    vmovups ymmword ptr [rsi], ymm0
    vmovups xmm1, xmmword ptr [r14+48h]
    vmovups xmmword ptr [rsi+20h], xmm1
    vmovsd  xmm0, qword ptr [r14+58h]
    vmovsd  qword ptr [rsi+30h], xmm0
  }
  *(_DWORD *)&_RSI->weapon.weaponCamo = *(_DWORD *)&_R14->weapon.weaponCamo;
  if ( v20 )
  {
    *(_QWORD *)outStandAnglesPivotOffset->v = 0i64;
    outStandAnglesPivotOffset->v[2] = 0.0;
    v24 = outData;
    v25 = outTiltOffseta;
    **(_QWORD **)&outData = 0i64;
    *(_DWORD *)(*(_QWORD *)&v24 + 8i64) = 0;
    *(_QWORD *)outCombinedAngles->v = 0i64;
    outCombinedAngles->v[2] = 0.0;
    *(_QWORD *)outOrigin->v = 0i64;
    outOrigin->v[2] = 0.0;
    *v25 = 0.0;
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
    __asm
    {
      vmovaps [rsp+0E8h+var_58], xmm6
      vmovaps [rsp+0E8h+var_68], xmm7
      vmovaps [rsp+0E8h+var_78], xmm8
      vmovaps [rsp+0E8h+var_88], xmm9
    }
    BG_CalculateWeaponMovement_Base(_R14, _RSI, outStandAnglesPivotOffset, *(vec3_t **)&outData);
    BG_CalculateWeaponMovement_Sway(_R14, _RSI);
    BG_CalculateWeaponMovement_Recoil(_R14, _RSI);
    BG_ContextMount_CalculateWeaponMovement(_R14, _RSI);
    if ( BG_UseAnimatedWeaponMovement(_R14->weaponMap, _R14->ps, _R14->handler) )
    {
      *(_QWORD *)_RSI->bobAngles.v = 0i64;
      _RSI->bobAngles.v[2] = 0.0;
    }
    else
    {
      BG_CalculateWeaponMovement_Bob(_R14, _RSI);
    }
    ps = _R14->ps;
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1882, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    LOBYTE(v19) = ps->pm_type < 7;
    BG_SetWeaponMovementAngles(_R14, _RSI, v19, outTiltOffseta, outMovementTiltOffseta, outCombinedAngles, outAnglesCategorized);
    v27 = DCONST_DVARMPBOOL_useScriptWeaponAndViewOffsets;
    handler = _R14->handler;
    v29 = _R14->ps;
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vxorps  xmm7, xmm7, xmm7
      vxorps  xmm8, xmm8, xmm8
      vxorps  xmm9, xmm9, xmm9
    }
    if ( !DCONST_DVARMPBOOL_useScriptWeaponAndViewOffsets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "useScriptWeaponAndViewOffsets") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v27);
    if ( v27->current.enabled )
    {
      serverTime = v29->serverTime;
      IndexByName = BG_Omnvar_GetIndexByName("protogun_ax");
      BG_Omnvar_GetDataAtPmoveTime(v29->clientNum, handler, IndexByName, serverTime, &outData);
      __asm { vmovss  xmm7, dword ptr [rsp+0E8h+outData.current] }
      v36 = v29->serverTime;
      v37 = BG_Omnvar_GetIndexByName("protogun_ay");
      BG_Omnvar_GetDataAtPmoveTime(v29->clientNum, handler, v37, v36, &outData);
      __asm { vmovss  xmm8, dword ptr [rsp+0E8h+outData.current] }
      v38 = v29->serverTime;
      v39 = BG_Omnvar_GetIndexByName("protogun_az");
      BG_Omnvar_GetDataAtPmoveTime(v29->clientNum, handler, v39, v38, &outData);
      __asm { vmovss  xmm9, dword ptr [rsp+0E8h+outData.current] }
    }
    __asm
    {
      vaddss  xmm0, xmm7, dword ptr [rbp+0]
      vaddss  xmm1, xmm9, dword ptr [rbp+8]
      vmovss  dword ptr [rbp+0], xmm0
      vaddss  xmm0, xmm8, dword ptr [rbp+4]
      vmovss  dword ptr [rbp+4], xmm0
      vmovss  dword ptr [rbp+8], xmm1
    }
    BG_WeaponOffsets_ApplyWeaponAngles(_R14->ps, _R14->serverTime, _R14->handler, outCombinedAngles, outAnglesCategorized);
    BG_SetWeaponMovementOrigin(_R14, _RSI, outAnglesCategorized, outOrigin);
    v43 = DCONST_DVARMPBOOL_useScriptWeaponAndViewOffsets;
    v44 = _R14->handler;
    v45 = _R14->ps;
    __asm
    {
      vmovaps xmm9, [rsp+0E8h+var_88]
      vxorps  xmm7, xmm7, xmm7
      vxorps  xmm8, xmm8, xmm8
    }
    if ( !DCONST_DVARMPBOOL_useScriptWeaponAndViewOffsets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "useScriptWeaponAndViewOffsets") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v43);
    if ( v43->current.enabled )
    {
      v49 = v45->serverTime;
      v50 = BG_Omnvar_GetIndexByName("protogun_x");
      BG_Omnvar_GetDataAtPmoveTime(v45->clientNum, v44, v50, v49, &outData);
      __asm { vmovss  xmm6, dword ptr [rsp+0E8h+outData.current] }
      v51 = v45->serverTime;
      v52 = BG_Omnvar_GetIndexByName("protogun_y");
      BG_Omnvar_GetDataAtPmoveTime(v45->clientNum, v44, v52, v51, &outData);
      __asm { vmovss  xmm7, dword ptr [rsp+0E8h+outData.current] }
      v53 = v45->serverTime;
      v54 = BG_Omnvar_GetIndexByName("protogun_z");
      BG_Omnvar_GetDataAtPmoveTime(v45->clientNum, v44, v54, v53, &outData);
      __asm { vmovss  xmm8, dword ptr [rsp+0E8h+outData.current] }
    }
    __asm
    {
      vaddss  xmm0, xmm6, dword ptr [r15]
      vaddss  xmm1, xmm8, dword ptr [r15+8]
      vmovss  dword ptr [r15], xmm0
      vaddss  xmm0, xmm7, dword ptr [r15+4]
      vmovss  dword ptr [r15+4], xmm0
      vmovss  dword ptr [r15+8], xmm1
    }
    BG_WeaponOffsets_ApplyWeaponTranslation(_R14->ps, _R14->serverTime, _R14->handler, outOrigin);
    __asm
    {
      vmovaps xmm8, [rsp+0E8h+var_78]
      vmovaps xmm7, [rsp+0E8h+var_68]
      vmovaps xmm6, [rsp+0E8h+var_58]
    }
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
  bool v12; 
  const SuitDef *SuitDef; 
  bool v15; 
  bool v16; 
  vec3_t targetAngles; 
  vec3_t targetPos; 
  vec3_t targetAnglesCrouch; 
  vec3_t targetAnglesStand; 

  __asm { vmovaps [rsp+0F8h+var_58], xmm6 }
  _RSI = params;
  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1183, ASSERT_TYPE_ASSERT, "(params)", (const char *)&queryFormat, "params") )
    __debugbreak();
  if ( !ws && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1184, ASSERT_TYPE_ASSERT, "(ws)", (const char *)&queryFormat, "ws") )
    __debugbreak();
  ps = _RSI->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1187, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  weaponMap = _RSI->weaponMap;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1190, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  ViewmodelWeapon = BG_GetViewmodelWeapon(weaponMap, ps);
  v12 = BG_UsingAlternate(ps);
  _R14 = BG_WeaponDef(ViewmodelWeapon, v12);
  SuitDef = BG_GetSuitDef(ps->suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1196, ASSERT_TYPE_ASSERT, "( suitDef ) != ( nullptr )", "%s != %s\n\t%p, %p", "suitDef", "nullptr", NULL, NULL) )
    __debugbreak();
  v15 = ps->viewHeightTarget == SuitDef->viewheight_crouch;
  v16 = ps->viewHeightTarget == BG_Suit_GetProneViewHeight(SuitDef);
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Du) )
  {
    v16 = 0;
    v15 = 1;
  }
  *(_QWORD *)outStandAnglesPivotOffset->v = 0i64;
  outStandAnglesPivotOffset->v[2] = 0.0;
  __asm { vxorps  xmm0, xmm0, xmm0 }
  *(_QWORD *)outDuckedAnglesPivotOffset->v = 0i64;
  outDuckedAnglesPivotOffset->v[2] = 0.0;
  __asm
  {
    vmovss  dword ptr [rsp+0F8h+targetPos], xmm0
    vmovss  dword ptr [rsp+0F8h+targetPos+4], xmm0
    vmovss  dword ptr [rsp+0F8h+targetPos+8], xmm0
    vmovss  dword ptr [rsp+0F8h+var_A0], xmm0
    vmovss  dword ptr [rsp+0F8h+var_A0+4], xmm0
    vmovss  dword ptr [rsp+0F8h+var_A0+8], xmm0
    vmovss  dword ptr [rsp+0F8h+var_70], xmm0
    vmovss  dword ptr [rsp+0F8h+var_70+4], xmm0
    vmovss  dword ptr [rsp+0F8h+var_70+8], xmm0
    vmovss  dword ptr [rsp+0F8h+var_80], xmm0
    vmovss  dword ptr [rsp+0F8h+var_80+4], xmm0
    vmovss  dword ptr [rsp+0F8h+var_80+8], xmm0
  }
  if ( v16 )
  {
    __asm { vmovss  xmm6, dword ptr [r14+334h] }
  }
  else if ( v15 )
  {
    __asm { vmovss  xmm6, dword ptr [r14+330h] }
  }
  else
  {
    __asm { vmovss  xmm6, dword ptr [r14+32Ch] }
  }
  __asm
  {
    vcomiss xmm6, xmm0
    vcomiss xmm6, dword ptr [rsi+0Ch]
  }
  if ( !BG_HasLadderHand(ps) )
    BG_Ladder_IsActive(ps);
  if ( BG_GameInterface_CalculateWeaponMovement_BaseStance(ps) )
    BG_CalculateWeaponMovement_Base_Internal_Stance(_RSI, ws, v15, v16, &targetPos, &targetAngles, &targetAnglesStand, outStandAnglesPivotOffset, &targetAnglesCrouch, outDuckedAnglesPivotOffset);
  BG_CalculateWeaponMovement_Base_Internal_Save(_RSI, ws, &targetPos, &targetAngles, &targetAnglesStand, &targetAnglesCrouch, v16);
  __asm { vmovaps xmm6, [rsp+0F8h+var_58] }
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
  double v10; 
  bool outIsAlternate; 
  AdsOffsetInterpolationType outHipOffsetLerpType; 

  ps = params->ps;
  __asm { vmovaps [rsp+58h+var_28], xmm6 }
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 672, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  weaponMap = params->weaponMap;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 675, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  ViewmodelOrOffhandADSSupportWeapon = BG_GetViewmodelOrOffhandADSSupportWeapon(weaponMap, ps, &outIsAlternate);
  *(double *)&_XMM0 = BG_GetWeaponOrOffhandAdsFrac(weaponMap, ps);
  __asm { vmovaps xmm6, xmm0 }
  BG_GetHipOffsetLerpType(ViewmodelOrOffhandADSSupportWeapon, outIsAlternate, &outHipOffsetLerpType);
  __asm
  {
    vmovss  xmm1, cs:__real@3f800000
    vsubss  xmm0, xmm1, xmm6; weaponPosFrac
  }
  v10 = BG_CalculateEaseMotionFactor(*(const float *)&_XMM0, outHipOffsetLerpType);
  __asm { vmovaps xmm6, [rsp+58h+var_28] }
  return *(float *)&v10;
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
  bool v23; 
  bool v24; 
  char v37; 
  char v38; 
  int v55; 
  int v56; 
  char v60; 
  char v61; 
  double ignoreArbitraryUp; 
  double ignoreArbitraryUpa; 
  double ignoreArbitraryUpb; 
  double ignoreArbitraryUpc; 
  double v90; 
  double v91; 
  double v92; 
  __int128 v93; 
  double v94; 
  double v95; 
  int v96; 
  int v97; 
  vec3_t right; 
  char v100; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps [rsp+0E8h+var_88], xmm11
  }
  _R12 = targetPos;
  _R13 = targetAngles;
  _RSI = params;
  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1040, ASSERT_TYPE_ASSERT, "(params)", (const char *)&queryFormat, "params") )
    __debugbreak();
  if ( !ws && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1041, ASSERT_TYPE_ASSERT, "(ws)", (const char *)&queryFormat, "ws") )
    __debugbreak();
  ps = _RSI->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1044, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  weaponMap = _RSI->weaponMap;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1047, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  ViewmodelWeapon = BG_GetViewmodelWeapon(weaponMap, ps);
  v23 = BG_UsingAlternate(ps);
  BG_WeaponDef(ViewmodelWeapon, v23);
  v24 = !isProne;
  if ( !isProne )
    v24 = !isCrouched;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+0Ch]
    vsubss  xmm2, xmm0, [rsp+0E8h+minSpeed]
    vmovss  xmm6, cs:__real@3f800000
    vmovsd  xmm10, cs:__real@3ff0000000000000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vsubss  xmm1, xmm0, [rsp+0E8h+minSpeed]
    vdivss  xmm2, xmm2, xmm1
    vminss  xmm7, xmm2, xmm6
    vxorps  xmm9, xmm9, xmm9
    vcomiss xmm7, xmm9
    vxorpd  xmm11, xmm11, xmm11
    vcomiss xmm7, xmm6
  }
  if ( !v24 )
  {
    __asm
    {
      vmovsd  qword ptr [rsp+0E8h+var_B8+8], xmm10
      vcvtss2sd xmm0, xmm7, xmm7
      vmovsd  qword ptr [rsp+0E8h+var_B8], xmm11
      vmovsd  qword ptr [rsp+0E8h+ignoreArbitraryUp], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1073, ASSERT_TYPE_SANITY, "( 0.0f ) <= ( speedFrac ) && ( speedFrac ) <= ( 1.0f )", "speedFrac not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", ignoreArbitraryUp, v90, v94) )
      __debugbreak();
  }
  BG_GetWeaponOrOffhandAdsFrac(weaponMap, ps);
  __asm
  {
    vsubss  xmm8, xmm6, xmm0
    vcomiss xmm8, xmm9
  }
  if ( v37 )
    goto LABEL_41;
  __asm { vcomiss xmm8, xmm6 }
  if ( !(v37 | v38) )
  {
LABEL_41:
    __asm
    {
      vmovsd  qword ptr [rsp+0E8h+var_B8+8], xmm10
      vcvtss2sd xmm0, xmm8, xmm8
      vmovsd  qword ptr [rsp+0E8h+var_B8], xmm11
      vmovsd  qword ptr [rsp+0E8h+ignoreArbitraryUp], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1079, ASSERT_TYPE_SANITY, "( 0.0f ) <= ( angleWeight ) && ( angleWeight ) <= ( 1.0f )", "angleWeight not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", ignoreArbitraryUpa, v91, v95) )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm0, xmm7, dword ptr [r14+rbx]
    vaddss  xmm1, xmm0, dword ptr [r12]
    vmovss  dword ptr [r12], xmm1
    vmulss  xmm0, xmm7, dword ptr [r14+rbx+4]
    vaddss  xmm1, xmm0, dword ptr [r12+4]
    vmovss  dword ptr [r12+4], xmm1
    vmulss  xmm0, xmm7, dword ptr [r14+rbx+8]
    vaddss  xmm1, xmm0, dword ptr [r12+8]
    vmovss  dword ptr [r12+8], xmm1
    vmulss  xmm2, xmm8, xmm7
    vmulss  xmm0, xmm2, dword ptr [r15+rbx]
    vaddss  xmm1, xmm0, dword ptr [r13+0]
    vmovss  dword ptr [r13+0], xmm1
    vmulss  xmm0, xmm2, dword ptr [r15+rbx+4]
    vaddss  xmm1, xmm0, dword ptr [r13+4]
    vmovss  dword ptr [r13+4], xmm1
    vmulss  xmm0, xmm2, dword ptr [r15+rbx+8]
    vaddss  xmm1, xmm0, dword ptr [r13+8]
    vmovss  dword ptr [r13+8], xmm1
  }
  BG_GetPlayerViewDirection(ps, NULL, &right, NULL, _RSI->handler, 0);
  __asm { vcomiss xmm9, dword ptr [rsi+0Ch] }
  if ( !v37 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1087, ASSERT_TYPE_ASSERT, "(params->xySpeed > 0.0f)", (const char *)&queryFormat, "params->xySpeed > 0.0f") )
    __debugbreak();
  if ( !BG_IsPlayerZeroG(ps) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) )
  {
    __asm { vmovss  xmm6, dword ptr [rsi+0Ch] }
    *(double *)&_XMM0 = BG_GetLateralSpeed(ps, _RSI->handler);
    __asm { vmovss  [rsp+0E8h+var_A8], xmm6 }
    v55 = 0x80000000 - v96;
    __asm { vmovss  [rsp+0E8h+var_A4], xmm0 }
    if ( v96 >= 0 )
      v55 = v96;
    v56 = 0x80000000 - v97;
    if ( v97 >= 0 )
      v56 = v97;
    if ( (int)abs32(v56 - v55) > 8 )
    {
      __asm
      {
        vmovss  xmm6, dword ptr [rsi+0Ch]
        vcvtss2sd xmm6, xmm6, xmm6
      }
      *(double *)&_XMM0 = BG_GetLateralSpeed(ps, _RSI->handler);
      __asm
      {
        vcvtss2sd xmm1, xmm0, xmm0
        vmovsd  qword ptr [rsp+0E8h+var_B8], xmm6
        vmovsd  qword ptr [rsp+0E8h+ignoreArbitraryUp], xmm1
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1091, ASSERT_TYPE_ASSERT, "AlmostEqual( ( BG_GetLateralSpeed( ps, params->handler ) ), ( params->xySpeed ) )", "AlmostEqual(BG_GetLateralSpeed( ps, params->handler ), params->xySpeed)\n\t%g, %g", ignoreArbitraryUpb, v92) )
        __debugbreak();
    }
  }
  *(double *)&_XMM0 = BG_LateralVelocityVecDot(ps, &right, _RSI->handler);
  __asm
  {
    vmulss  xmm1, xmm0, xmm7
    vdivss  xmm6, xmm1, dword ptr [rsi+0Ch]
    vcomiss xmm6, cs:__real@bf8147ae
  }
  if ( v60 )
    goto LABEL_36;
  __asm { vcomiss xmm6, cs:__real@3f8147ae }
  if ( !(v60 | v61) )
  {
LABEL_36:
    __asm
    {
      vmovaps xmm0, cs:__xmm@3ff028f5c0000000bff028f5c0000000
      vmovups [rsp+0E8h+var_B8], xmm0
      vcvtss2sd xmm2, xmm6, xmm6
      vmovsd  qword ptr [rsp+0E8h+ignoreArbitraryUp], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1094, ASSERT_TYPE_SANITY, "( -1.01f ) <= ( strafeFrac ) && ( strafeFrac ) <= ( 1.01f )", "strafeFrac not in [-1.01f, 1.01f]\n\t%g not in [%g, %g]", ignoreArbitraryUpc, *(double *)&v93, *((double *)&v93 + 1)) )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm0, xmm6, dword ptr [rbx+2A0h]
    vaddss  xmm1, xmm0, dword ptr [r12]
    vmovss  dword ptr [r12], xmm1
    vmulss  xmm0, xmm6, dword ptr [rbx+2A4h]
    vaddss  xmm1, xmm0, dword ptr [r12+4]
    vmovss  dword ptr [r12+4], xmm1
    vmulss  xmm0, xmm6, dword ptr [rbx+2A8h]
    vaddss  xmm1, xmm0, dword ptr [r12+8]
    vmovss  dword ptr [r12+8], xmm1
    vmulss  xmm2, xmm6, xmm8
    vmulss  xmm0, xmm2, dword ptr [rbx+2ACh]
    vaddss  xmm1, xmm0, dword ptr [r13+0]
    vmovss  dword ptr [r13+0], xmm1
    vmulss  xmm0, xmm2, dword ptr [rbx+2B0h]
    vaddss  xmm1, xmm0, dword ptr [r13+4]
    vmovss  dword ptr [r13+4], xmm1
    vmulss  xmm0, xmm2, dword ptr [rbx+2B4h]
    vaddss  xmm1, xmm0, dword ptr [r13+8]
    vmovss  dword ptr [r13+8], xmm1
  }
  _R11 = &v100;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
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
  bool v25; 
  bool v27; 
  bool v43; 
  bool v45; 
  double v101; 
  double v102; 
  double v103; 
  double v104; 
  double v105; 
  double v106; 
  double v107; 
  double v108; 
  double v109; 
  char v119; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  _R14 = targetAngles;
  __asm { vmovaps xmmword ptr [rax-48h], xmm7 }
  _R15 = targetPos;
  __asm { vmovaps xmmword ptr [rax-58h], xmm8 }
  _RBP = ws;
  __asm { vmovaps xmmword ptr [rax-68h], xmm9 }
  _RDI = params;
  __asm
  {
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps [rsp+128h+var_B8], xmm14
    vmovaps [rsp+128h+var_C8], xmm15
  }
  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1125, ASSERT_TYPE_ASSERT, "(params)", (const char *)&queryFormat, "params") )
    __debugbreak();
  if ( !_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1126, ASSERT_TYPE_ASSERT, "(ws)", (const char *)&queryFormat, "ws") )
    __debugbreak();
  ps = _RDI->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1129, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  weaponMap = _RDI->weaponMap;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1132, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  ViewmodelWeapon = BG_GetViewmodelWeapon(weaponMap, ps);
  v25 = BG_UsingAlternate(ps);
  _RAX = BG_WeaponDef(ViewmodelWeapon, v25);
  v27 = !isProne;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vxorps  xmm7, xmm7, xmm7
    vmaxss  xmm1, xmm0, xmm7
  }
  if ( isProne )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rax+328h]
      vmovss  xmm3, dword ptr [rax+33Ch]
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rax+324h]
      vmovss  xmm3, dword ptr [rax+338h]
    }
  }
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vmovsd  xmm10, cs:__real@3ff0000000000000
    vmulss  xmm0, xmm0, xmm1
    vminss  xmm2, xmm0, xmm6
    vcomiss xmm2, xmm7
    vmulss  xmm0, xmm3, xmm1
    vmulss  xmm1, xmm1, dword ptr [rax+340h]
    vminss  xmm8, xmm1, xmm6
    vminss  xmm9, xmm0, xmm6
    vmovss  [rsp+128h+var_E0], xmm8
    vmovss  [rsp+128h+var_E8], xmm2
    vmovss  [rsp+128h+var_E4], xmm9
    vxorpd  xmm11, xmm11, xmm11
    vcomiss xmm2, xmm6
  }
  if ( isProne )
  {
    __asm
    {
      vmovsd  [rsp+128h+var_F0], xmm10
      vcvtss2sd xmm0, xmm2, xmm2
      vmovsd  [rsp+128h+var_F8], xmm11
      vmovsd  [rsp+128h+var_100], xmm0
    }
    v43 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1155, ASSERT_TYPE_SANITY, "( 0.0f ) <= ( originRate ) && ( originRate ) <= ( 1.0f )", "originRate not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v101, v104, v107);
    v27 = !v43;
    if ( v43 )
      __debugbreak();
  }
  __asm
  {
    vcomiss xmm9, xmm7
    vcomiss xmm9, xmm6
  }
  if ( !v27 )
  {
    __asm
    {
      vmovsd  [rsp+128h+var_F0], xmm10
      vcvtss2sd xmm0, xmm9, xmm9
      vmovsd  [rsp+128h+var_F8], xmm11
      vmovsd  [rsp+128h+var_100], xmm0
    }
    v45 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1156, ASSERT_TYPE_SANITY, "( 0.0f ) <= ( angleRate ) && ( angleRate ) <= ( 1.0f )", "angleRate not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v102, v105, v108);
    v27 = !v45;
    if ( v45 )
      __debugbreak();
  }
  __asm
  {
    vcomiss xmm8, xmm7
    vcomiss xmm8, xmm6
  }
  if ( !v27 )
  {
    __asm
    {
      vmovsd  [rsp+128h+var_F0], xmm10
      vcvtss2sd xmm0, xmm8, xmm8
      vmovsd  [rsp+128h+var_F8], xmm11
      vmovsd  [rsp+128h+var_100], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1157, ASSERT_TYPE_SANITY, "( 0.0f ) <= ( anglePivotCrouchRate ) && ( anglePivotCrouchRate ) <= ( 1.0f )", "anglePivotCrouchRate not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v103, v106, v109) )
      __debugbreak();
  }
  _R11 = &v119;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
  _RBP->baseAnglesPivotStand = *targetAnglesStand;
  __asm
  {
    vmovss  xmm7, dword ptr [r15+8]
    vmovss  xmm9, dword ptr [r14]
    vmovss  xmm11, dword ptr [r14+4]
    vmovss  xmm13, dword ptr [r14+8]
    vmovss  xmm5, dword ptr [r15+4]
  }
  _RAX = targetAnglesCrouch;
  __asm
  {
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm14, [rsp+128h+var_B8]
    vmovss  xmm0, dword ptr [rax+4]
    vmovss  xmm15, dword ptr [rax]
    vmovss  [rsp+128h+var_DC], xmm0
    vmovss  xmm0, dword ptr [rbp+5Ch]
    vmovss  [rsp+128h+var_D8], xmm0
    vmovss  xmm0, dword ptr [rax+8]
    vmovss  [rsp+128h+var_D4], xmm0
    vmovss  xmm0, dword ptr [rbp+60h]
    vmovss  [rsp+128h+var_D0], xmm0
    vmovss  xmm0, dword ptr [r15]
    vsubss  xmm1, xmm0, dword ptr [rbp+64h]
    vmulss  xmm2, xmm1, [rsp+128h+var_E8]
    vaddss  xmm3, xmm2, dword ptr [rbp+64h]
    vmovss  dword ptr [rbp+64h], xmm3
    vsubss  xmm0, xmm5, dword ptr [rbp+68h]
    vmulss  xmm1, xmm0, [rsp+128h+var_E8]
    vaddss  xmm2, xmm1, dword ptr [rbp+68h]
    vmovss  xmm3, [rsp+128h+var_E4]
    vmovss  dword ptr [rbp+68h], xmm2
    vsubss  xmm0, xmm7, dword ptr [rbp+6Ch]
    vmulss  xmm1, xmm0, [rsp+128h+var_E8]
    vaddss  xmm2, xmm1, dword ptr [rbp+6Ch]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovss  dword ptr [rbp+6Ch], xmm2
    vsubss  xmm0, xmm9, dword ptr [rbp+40h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmulss  xmm1, xmm0, xmm3
    vaddss  xmm2, xmm1, dword ptr [rbp+40h]
    vmovss  dword ptr [rbp+40h], xmm2
    vsubss  xmm0, xmm11, dword ptr [rbp+44h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmulss  xmm1, xmm0, xmm3
    vaddss  xmm2, xmm1, dword ptr [rbp+44h]
    vmovss  dword ptr [rbp+44h], xmm2
    vsubss  xmm0, xmm13, dword ptr [rbp+48h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmulss  xmm1, xmm0, xmm3
    vaddss  xmm2, xmm1, dword ptr [rbp+48h]
    vmovss  xmm3, [rsp+128h+var_E0]
    vmovss  dword ptr [rbp+48h], xmm2
    vsubss  xmm0, xmm15, dword ptr [rbp+58h]
    vmovaps xmm15, [rsp+128h+var_C8]
    vmulss  xmm1, xmm0, xmm3
    vaddss  xmm2, xmm1, dword ptr [rbp+58h]
    vmovss  xmm0, [rsp+128h+var_DC]
    vsubss  xmm0, xmm0, [rsp+128h+var_D8]
    vmulss  xmm1, xmm0, xmm3
    vmovss  xmm0, [rsp+128h+var_D4]
    vsubss  xmm0, xmm0, [rsp+128h+var_D0]
    vmovss  dword ptr [rbp+58h], xmm2
    vaddss  xmm2, xmm1, dword ptr [rbp+5Ch]
    vmovss  dword ptr [rbp+5Ch], xmm2
    vmulss  xmm1, xmm0, xmm3
    vaddss  xmm2, xmm1, dword ptr [rbp+60h]
    vmovss  dword ptr [rbp+60h], xmm2
  }
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
  const WeaponDef *v18; 
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
  v18 = BG_WeaponDef(ViewmodelOrOffhandADSSupportWeapon, outIsAlternate);
  _RBX = targetPos;
  _RDI = v18;
  BG_GetStandWeaponOffset(ViewmodelOrOffhandADSSupportWeapon, 0, targetPos, targetAnglesStand, targetAnglesStandPivot);
  *targetAnglesCrouchPivot = _RDI->vDuckedOfsRotPivot;
  if ( isCrouched )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vaddss  xmm1, xmm0, dword ptr [rdi+2BCh]
    }
    _RAX = targetAnglesCrouch;
    __asm
    {
      vmovss  dword ptr [rbx], xmm1
      vmovss  xmm0, dword ptr [rdi+2C0h]
      vaddss  xmm1, xmm0, dword ptr [rbx+4]
      vmovss  dword ptr [rbx+4], xmm1
      vmovss  xmm0, dword ptr [rdi+2C4h]
      vaddss  xmm1, xmm0, dword ptr [rbx+8]
      vmovss  dword ptr [rbx+8], xmm1
      vmovss  xmm0, dword ptr [rdi+2C8h]
      vaddss  xmm0, xmm0, dword ptr [rax]
      vmovss  dword ptr [rax], xmm0
      vmovss  xmm1, dword ptr [rdi+2CCh]
      vaddss  xmm0, xmm1, dword ptr [rax+4]
      vmovss  dword ptr [rax+4], xmm0
      vmovss  xmm1, dword ptr [rdi+2D0h]
      vaddss  xmm0, xmm1, dword ptr [rax+8]
      vmovss  dword ptr [rax+8], xmm0
    }
  }
  else if ( isProne )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vaddss  xmm1, xmm0, dword ptr [rdi+2F8h]
      vmovss  dword ptr [rbx], xmm1
      vmovss  xmm0, dword ptr [rdi+2FCh]
      vaddss  xmm1, xmm0, dword ptr [rbx+4]
      vmovss  dword ptr [rbx+4], xmm1
      vmovss  xmm0, dword ptr [rdi+300h]
      vaddss  xmm1, xmm0, dword ptr [rbx+8]
      vmovss  dword ptr [rbx+8], xmm1
    }
  }
  if ( BG_IsAimDownSight(ViewmodelOrOffhandADSSupportWeapon, outIsAlternate) )
  {
    *(double *)&_XMM0 = BG_ADSAimPitch(weaponMap, ps, ViewmodelOrOffhandADSSupportWeapon, outIsAlternate);
    _RAX = targetAngles;
    __asm
    {
      vmulss  xmm1, xmm0, dword ptr [rsi+730h]
      vaddss  xmm0, xmm1, dword ptr [rax]
      vmovss  dword ptr [rax], xmm0
    }
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
  const dvar_t *v23; 
  char v29; 
  char v30; 
  const BgWeaponMap *weaponMap; 
  const Weapon *ViewmodelOrOffhandADSSupportWeapon; 
  char v47; 
  bool outIsAlternate; 
  float outAnimCycle; 

  __asm { vmovaps [rsp+98h+var_38], xmm6 }
  _RSI = ws;
  __asm
  {
    vmovaps [rsp+98h+var_48], xmm7
    vmovaps [rsp+98h+var_58], xmm8
  }
  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1618, ASSERT_TYPE_ASSERT, "(params)", (const char *)&queryFormat, "params") )
    __debugbreak();
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1619, ASSERT_TYPE_ASSERT, "(ws)", (const char *)&queryFormat, "ws") )
    __debugbreak();
  ps = params->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1622, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  BG_GetBobValue((const int (*)[2])ps->packedBobCycle, NULL, NULL, &outAnimCycle);
  _RBP = DCONST_DVARFLT_bg_weaponBobLag;
  if ( !DCONST_DVARFLT_bg_weaponBobLag && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weaponBobLag") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBP);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+28h]
    vmulss  xmm1, xmm0, cs:__real@40490fdb
  }
  _RBP = DCONST_DVARMPFLT_bg_weaponBobAmplitudeBase;
  __asm
  {
    vaddss  xmm2, xmm1, [rsp+98h+outAnimCycle]
    vaddss  xmm7, xmm2, cs:__real@40c90fdb
  }
  if ( !DCONST_DVARMPFLT_bg_weaponBobAmplitudeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weaponBobAmplitudeBase") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBP);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+28h]
    vmulss  xmm8, xmm0, dword ptr [rbx+0Ch]
    vmovaps xmm2, xmm8; speed
    vmovaps xmm1, xmm7; cycle
  }
  *(float *)&_XMM0 = BG_CalculateWeaponMovement_VerticalBobFactor(ps, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmulss  xmm0, xmm0, cs:__real@bf800000
    vmovaps xmm2, xmm8; speed
    vmovaps xmm1, xmm7; cycle
    vmovss  dword ptr [rsi+0B8h], xmm0
  }
  *(float *)&_XMM0 = BG_CalculateWeaponMovement_HorizontalBobFactor(ps, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@bf800000
    vaddss  xmm6, xmm7, cs:__real@bef1463b
    vmovss  dword ptr [rsi+0BCh], xmm1
  }
  v23 = DCONST_DVARMPFLT_bg_weaponBobAmplitudeRoll;
  if ( !DCONST_DVARMPFLT_bg_weaponBobAmplitudeRoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weaponBobAmplitudeRoll") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v23);
  __asm
  {
    vmulss  xmm2, xmm8, dword ptr [rbp+28h]; speed
    vmovaps xmm1, xmm6; cycle
  }
  *(float *)&_XMM0 = BG_CalculateWeaponMovement_HorizontalBobFactor(ps, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vminss  xmm0, xmm0, xmm6
    vmovss  dword ptr [rsi+0C0h], xmm0
  }
  *(double *)&_XMM0 = BG_GetWeaponOrOffhandAdsFrac(params->weaponMap, ps);
  __asm
  {
    vcomiss xmm0, xmm6
    vmovaps xmm7, xmm0
  }
  if ( !(v29 | v30) )
  {
    weaponMap = params->weaponMap;
    if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1642, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    ViewmodelOrOffhandADSSupportWeapon = BG_GetViewmodelOrOffhandADSSupportWeapon(weaponMap, ps, &outIsAlternate);
    BG_ADSBobFactor(weaponMap, ps, ViewmodelOrOffhandADSSupportWeapon, outIsAlternate);
    __asm
    {
      vmovss  xmm2, cs:__real@3f800000
      vsubss  xmm0, xmm2, xmm0
      vmulss  xmm1, xmm0, xmm7
      vsubss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm3, dword ptr [rsi+0B8h]
      vmovss  dword ptr [rsi+0B8h], xmm0
      vmulss  xmm1, xmm3, dword ptr [rsi+0BCh]
      vmovss  dword ptr [rsi+0BCh], xmm1
      vmulss  xmm0, xmm3, dword ptr [rsi+0C0h]
      vmovss  dword ptr [rsi+0C0h], xmm0
    }
  }
  __asm { vmovaps xmm6, [rsp+98h+var_38] }
  _R11 = &v47;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm7, [rsp+98h+var_48]
  }
}

/*
==============
BG_CalculateWeaponMovement_HorizontalBobFactor
==============
*/

float __fastcall BG_CalculateWeaponMovement_HorizontalBobFactor(const playerState_s *ps, double cycle, double speed)
{
  const SuitDef *SuitDef; 
  int viewHeightTarget; 
  const dvar_t *v10; 
  const dvar_t *v12; 
  const char *v13; 
  const dvar_t *v14; 
  char v19; 
  char v20; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps xmm7, xmm1
    vmovaps xmm6, xmm2
  }
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 117, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  SuitDef = BG_GetSuitDef(ps->suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 119, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  viewHeightTarget = ps->viewHeightTarget;
  if ( viewHeightTarget == BG_Suit_GetProneViewHeight(SuitDef) )
  {
    v10 = DCONST_DVARMPVEC2_bg_weaponBobAmplitudeProne;
    if ( !DCONST_DVARMPVEC2_bg_weaponBobAmplitudeProne && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weaponBobAmplitudeProne") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    __asm { vmulss  xmm6, xmm6, dword ptr [rsi+28h] }
    goto LABEL_25;
  }
  if ( viewHeightTarget == SuitDef->viewheight_crouch )
  {
    v12 = DCONST_DVARMPVEC2_bg_weaponBobAmplitudeDucked;
    if ( !DCONST_DVARMPVEC2_bg_weaponBobAmplitudeDucked )
    {
      v13 = "bg_weaponBobAmplitudeDucked";
      goto LABEL_22;
    }
    goto LABEL_24;
  }
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u) )
  {
    v12 = DCONST_DVARMPVEC2_bg_weaponBobAmplitudeStanding;
    if ( !DCONST_DVARMPVEC2_bg_weaponBobAmplitudeStanding )
    {
      v13 = "bg_weaponBobAmplitudeStanding";
LABEL_22:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v13) )
        __debugbreak();
    }
LABEL_24:
    Dvar_CheckFrontendServerThread(v12);
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vsubss  xmm1, xmm0, dword ptr [rsi+730h]
      vmulss  xmm2, xmm1, xmm6
      vmulss  xmm6, xmm2, dword ptr [rbp+28h]
    }
    goto LABEL_25;
  }
  v14 = DCONST_DVARMPVEC2_bg_weaponBobAmplitudeSprinting;
  if ( !DCONST_DVARMPVEC2_bg_weaponBobAmplitudeSprinting && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weaponBobAmplitudeSprinting") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  __asm { vmulss  xmm6, xmm6, dword ptr [rsi+28h] }
LABEL_25:
  _RSI = DCONST_DVARFLT_bg_weaponBobMax;
  if ( !DCONST_DVARFLT_bg_weaponBobMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weaponBobMax") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RSI);
  __asm { vcomiss xmm6, dword ptr [rsi+28h] }
  if ( !(v19 | v20) )
  {
    _RSI = DCONST_DVARFLT_bg_weaponBobMax;
    if ( !DCONST_DVARFLT_bg_weaponBobMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weaponBobMax") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm6, dword ptr [rsi+28h] }
  }
  __asm { vmovaps xmm0, xmm7; X }
  *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
  __asm
  {
    vmovaps xmm7, [rsp+68h+var_28]
    vmulss  xmm0, xmm0, xmm6
    vmovaps xmm6, [rsp+68h+var_18]
  }
  return *(float *)&_XMM0;
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
  bool v8; 
  char v9; 
  bool v10; 
  bool v12; 

  _RBX = weapState;
  _RDI = params;
  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1755, ASSERT_TYPE_ASSERT, "(params)", (const char *)&queryFormat, "params") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1756, ASSERT_TYPE_ASSERT, "(weapState)", (const char *)&queryFormat, "weapState") )
    __debugbreak();
  ps = _RDI->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1759, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  weaponMap = _RDI->weaponMap;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1762, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  ViewmodelWeapon = BG_GetViewmodelWeapon(weaponMap, ps);
  v8 = BG_UsingAlternate(ps);
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ps->eFlags, ACTIVE, 4u) )
  {
    *(double *)&_XMM0 = BG_IdleProneFactor(ViewmodelWeapon, v8);
    __asm { vmovaps xmm2, xmm0 }
  }
  else
  {
    v12 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ps->eFlags, ACTIVE, 3u);
    v9 = 0;
    v10 = !v12;
    if ( v12 )
    {
      *(double *)&_XMM0 = BG_IdleCrouchFactor(ViewmodelWeapon, v8);
      __asm { vmovaps xmm2, xmm0 }
    }
    else
    {
      __asm { vmovss  xmm2, cs:__real@3f800000 }
    }
  }
  __asm
  {
    vmovss  xmm3, dword ptr [rbx+3Ch]
    vucomiss xmm2, xmm3
  }
  if ( !v10 )
  {
    __asm
    {
      vcomiss xmm2, xmm3
      vmovss  xmm1, dword ptr [rdi+4]
      vxorps  xmm0, xmm0, xmm0
      vmaxss  xmm1, xmm1, xmm0
      vmulss  xmm4, xmm1, cs:__real@3f000000
    }
    if ( v9 | v10 )
    {
      __asm
      {
        vsubss  xmm1, xmm3, xmm4
        vcmpltss xmm0, xmm1, xmm2
        vblendvps xmm0, xmm1, xmm2, xmm0
        vmovss  dword ptr [rbx+3Ch], xmm0
      }
    }
    else
    {
      __asm
      {
        vaddss  xmm0, xmm4, xmm3
        vcomiss xmm0, xmm2
        vmovss  dword ptr [rbx+3Ch], xmm0
      }
      if ( !(v9 | v10) )
        __asm { vmovss  dword ptr [rbx+3Ch], xmm2 }
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
  const BgWeaponMap *weaponMap; 
  bool v16; 
  const Weapon *ViewmodelWeapon; 
  char v44; 
  bool v45; 
  bool v56; 
  int v63; 
  int v64; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float hipGunKickSpeedMax; 
  float hipGunKickSpeedMaxa; 
  float hipGunKickSpeedMaxb; 
  float hipGunKickSpeedDecay; 
  float hipGunKickSpeedDecaya; 
  float hipGunKickSpeedDecayb; 
  float hipGunKickStaticDecay; 
  float hipGunKickStaticDecaya; 
  float outGunKickPitchScale; 
  float outGunKickYawScale; 
  float hipGunKickAccel; 
  float adsGunKickAccel; 
  float v94; 
  float adsGunKickSpeedMax; 
  float v96; 
  float adsGunKickSpeedDecay; 
  float v98; 
  float adsGunKickStaticDecay; 
  float hipGunKickReturnAccelScale; 
  float adsGunKickReturnAccelScale; 
  float hipGunKickReturnSpeedCurveScale; 
  float adsGunKickReturnSpeedCurveScale; 
  float outViewKickYawScale; 
  float outViewKickPitchScale; 
  const WeaponDef *v108; 
  vec2_t outMaxAngles; 

  _RBX = ws;
  _R14 = params;
  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1493, ASSERT_TYPE_ASSERT, "(params)", (const char *)&queryFormat, "params") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1494, ASSERT_TYPE_ASSERT, "(ws)", (const char *)&queryFormat, "ws") )
    __debugbreak();
  _RDI = _R14->ps;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1497, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  weaponMap = _R14->weaponMap;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1500, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  v16 = BG_UsingAlternate(_RDI);
  ViewmodelWeapon = BG_GetViewmodelWeapon(weaponMap, _RDI);
  v108 = BG_WeaponDef(ViewmodelWeapon, v16);
  BG_GetGunKickSpeed(weaponMap, _RDI, ViewmodelWeapon, v16, &hipGunKickAccel, &v94, &v96, &v98, &hipGunKickReturnAccelScale, &hipGunKickReturnSpeedCurveScale, &adsGunKickAccel, &adsGunKickSpeedMax, &adsGunKickSpeedDecay, &adsGunKickStaticDecay, &adsGunKickReturnAccelScale, &adsGunKickReturnSpeedCurveScale);
  if ( !BG_IsAimDownSight(ViewmodelWeapon, v16) )
    return;
  __asm
  {
    vmovss  xmm5, dword ptr [rdi+730h]
    vmovss  xmm0, [rbp+0B0h+var_124]
    vsubss  xmm1, xmm0, [rbp+0B0h+hipGunKickAccel]
    vmovss  xmm0, [rbp+0B0h+var_11C]
    vmulss  xmm2, xmm1, xmm5
    vsubss  xmm1, xmm0, [rbp+0B0h+var_120]
    vmovss  xmm0, [rbp+0B0h+var_114]
    vmovaps [rsp+1B0h+var_40], xmm6
    vmovaps [rsp+1B0h+var_70], xmm9
    vaddss  xmm9, xmm2, [rbp+0B0h+hipGunKickAccel]
    vmulss  xmm2, xmm1, xmm5
    vsubss  xmm1, xmm0, [rbp+0B0h+var_118]
    vmovss  xmm0, [rbp+0B0h+var_10C]
    vmovaps [rsp+1B0h+var_80], xmm10
    vmovaps [rsp+1B0h+var_90], xmm11
    vmovss  xmm11, cs:__real@3f800000
    vmovaps [rsp+1B0h+var_A0], xmm12
    vaddss  xmm12, xmm2, [rbp+0B0h+var_120]
    vmulss  xmm2, xmm1, xmm5
    vsubss  xmm1, xmm0, [rbp+0B0h+var_110]
    vmovss  xmm0, [rbp+0B0h+var_104]
    vmovaps [rsp+1B0h+var_B0], xmm13
    vaddss  xmm13, xmm2, [rbp+0B0h+var_118]
    vmulss  xmm2, xmm1, xmm5
    vsubss  xmm1, xmm0, [rbp+0B0h+var_108]
    vmovaps [rsp+1B0h+var_C0], xmm14
    vaddss  xmm14, xmm2, [rbp+0B0h+var_110]
    vmulss  xmm2, xmm1, xmm5
    vaddss  xmm0, xmm2, [rbp+0B0h+var_108]
    vmovss  [rbp+0B0h+var_EC], xmm0
    vmovss  xmm0, [rbp+0B0h+var_FC]
    vsubss  xmm1, xmm0, [rbp+0B0h+var_100]
    vmulss  xmm2, xmm1, xmm5
    vaddss  xmm0, xmm2, [rbp+0B0h+var_100]
    vmovss  [rbp+0B0h+var_F0], xmm0
    vmovss  [rbp+0B0h+outViewKickPitchScale], xmm11
    vmovss  [rbp+0B0h+outViewKickYawScale], xmm11
    vmovss  [rbp+0B0h+outGunKickPitchScale], xmm11
    vmovss  [rbp+0B0h+outGunKickYawScale], xmm11
  }
  BG_GetViewAndGunKickScalars(weaponMap, _RDI, ViewmodelWeapon, v16, &outViewKickPitchScale, &outViewKickYawScale, &outGunKickPitchScale, &outGunKickYawScale);
  __asm
  {
    vmovss  xmm6, dword ptr [r14+4]
    vxorps  xmm10, xmm10, xmm10
    vcomiss xmm6, xmm10
  }
  if ( v44 | v45 )
    goto LABEL_26;
  __asm
  {
    vmovaps [rsp+1B0h+var_60], xmm8
    vmovss  xmm8, cs:__real@3ba3d70a
    vmovaps [rsp+1B0h+var_D0], xmm15
    vmovss  xmm15, cs:__real@bba3d70a
    vmovaps [rsp+1B0h+var_50], xmm7
  }
  do
  {
    __asm { vcomiss xmm6, xmm8 }
    if ( v44 | v45 )
    {
      __asm
      {
        vmovaps xmm7, xmm6
        vmovaps xmm6, xmm10
      }
    }
    else
    {
      __asm
      {
        vmovaps xmm7, xmm8
        vaddss  xmm6, xmm6, xmm15
      }
    }
    BG_GetGunKickMaxAngles(weaponMap, _RDI, ViewmodelWeapon, v16, &outMaxAngles);
    if ( BG_UseSmoothGunKick(weaponMap, _RDI, ViewmodelWeapon, v16) )
    {
      __asm
      {
        vmovss  xmm0, [rbp+0B0h+var_F0]
        vmovss  dword ptr [rsp+1B0h+hipGunKickSpeedDecay], xmm0
        vmovss  xmm0, [rbp+0B0h+var_EC]
        vmovss  dword ptr [rsp+1B0h+hipGunKickSpeedMax], xmm0
        vmovaps xmm0, xmm7; fTimeStep
        vmovaps xmm3, xmm11; kickYawScale
        vmovaps xmm2, xmm11; kickPitchScale
        vmovss  dword ptr [rsp+1B0h+fmt], xmm9
      }
      v56 = BG_CalculateKickMovement(*(float *)&_XMM0, &outMaxAngles, *(float *)&_XMM2, *(float *)&_XMM3, fmt, hipGunKickSpeedMax, hipGunKickSpeedDecay, (vec2_t *)&_RBX->rawRecoilAngles, (vec2_t *)&_RBX->recoilSpeed, &_RBX->recoilNeedsToCrossCenter);
      v44 = 0;
      v45 = !v56;
    }
    else
    {
      _R9 = v108;
      __asm
      {
        vmovss  dword ptr [rsp+1B0h+hipGunKickStaticDecay], xmm14
        vmovss  dword ptr [rsp+1B0h+hipGunKickSpeedDecay], xmm13
        vmovss  dword ptr [rsp+1B0h+hipGunKickSpeedMax], xmm12
        vmovss  xmm3, dword ptr [r9+540h]; fOfsCap
        vmovaps xmm2, xmm7; fTimeStep
        vmovss  dword ptr [rsp+1B0h+fmt], xmm9
      }
      BG_CalculateWeaponMovement_Recoil_Internal_SingleAngle(_RBX->rawRecoilAngles.v, _RBX->recoilSpeed.v, *(float *)&_XMM2, *(float *)&_XMM3, fmta, hipGunKickSpeedMaxa, hipGunKickSpeedDecaya, hipGunKickStaticDecay);
      __asm
      {
        vmovss  xmm3, dword ptr [r9+544h]; fOfsCap
        vmovss  dword ptr [rsp+1B0h+hipGunKickStaticDecay], xmm14
        vmovss  dword ptr [rsp+1B0h+hipGunKickSpeedDecay], xmm13
        vmovss  dword ptr [rsp+1B0h+hipGunKickSpeedMax], xmm12
        vmovaps xmm2, xmm7; fTimeStep
        vmovss  dword ptr [rsp+1B0h+fmt], xmm9
      }
      v63 = BG_CalculateWeaponMovement_Recoil_Internal_SingleAngle(&_RBX->rawRecoilAngles.v[1], &_RBX->recoilSpeed.v[1], *(float *)&_XMM2, *(float *)&_XMM3, fmtb, hipGunKickSpeedMaxb, hipGunKickSpeedDecayb, hipGunKickStaticDecaya);
      v44 = 0;
      v45 = v63 == 0;
      if ( !v63 )
        goto LABEL_24;
      v44 = 0;
      v45 = v64 == 0;
    }
    if ( !v45 )
      break;
LABEL_24:
    __asm { vcomiss xmm6, xmm10 }
  }
  while ( !v45 );
  __asm
  {
    vmovaps xmm7, [rsp+1B0h+var_50]
    vmovaps xmm8, [rsp+1B0h+var_60]
    vmovaps xmm15, [rsp+1B0h+var_D0]
  }
LABEL_26:
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+70h]
    vmovss  xmm1, [rbp+0B0h+outGunKickYawScale]
    vmovaps xmm14, [rsp+1B0h+var_C0]
    vmovaps xmm13, [rsp+1B0h+var_B0]
    vmovaps xmm12, [rsp+1B0h+var_A0]
    vmovaps xmm11, [rsp+1B0h+var_90]
    vmovaps xmm10, [rsp+1B0h+var_80]
    vmovaps xmm9, [rsp+1B0h+var_70]
    vmovaps xmm6, [rsp+1B0h+var_40]
    vmovss  dword ptr [rbx+7Ch], xmm0
    vmulss  xmm0, xmm0, [rbp+0B0h+outGunKickPitchScale]
  }
  _RBX->recoilAngles.v[1] = _RBX->rawRecoilAngles.v[1];
  _RBX->recoilAngles.v[2] = _RBX->rawRecoilAngles.v[2];
  __asm
  {
    vmovss  dword ptr [rbx+7Ch], xmm0
    vmulss  xmm0, xmm1, dword ptr [rbx+80h]
    vmovss  dword ptr [rbx+80h], xmm0
  }
}

/*
==============
BG_CalculateWeaponMovement_Recoil_Internal_SingleAngle
==============
*/

__int64 __fastcall BG_CalculateWeaponMovement_Recoil_Internal_SingleAngle(float *fOffset, float *speed, double fTimeStep, double fOfsCap, float fGunKickAccel, float fGunKickSpeedMax)
{
  __int64 result; 

  __asm
  {
    vmovaps xmm1, xmm3
    vmovss  xmm3, dword ptr [rcx]
    vmovaps xmm4, xmm2
    vmovss  xmm2, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vandps  xmm0, xmm3, xmm2
  }
  result = 0i64;
  __asm
  {
    vcomiss xmm0, cs:__real@3e800000
    vmulss  xmm0, xmm4, dword ptr [rdx]
    vaddss  xmm2, xmm0, xmm3
    vcomiss xmm2, xmm1
    vmovss  dword ptr [rcx], xmm2
    vxorps  xmm3, xmm3, xmm3
    vxorps  xmm0, xmm1, cs:__xmm@80000000800000008000000080000000
    vcomiss xmm2, xmm0
    vmovss  xmm0, dword ptr [rcx]
    vcomiss xmm0, xmm3
    vmovss  xmm2, dword ptr [rdx]
    vmulss  xmm0, xmm2, [rsp+fGunKickSpeedDecay]
    vmulss  xmm1, xmm0, xmm4
    vmulss  xmm0, xmm4, [rsp+fGunKickStaticDecay]
    vsubss  xmm5, xmm2, xmm1
    vcomiss xmm5, xmm3
    vaddss  xmm0, xmm0, xmm5
    vcomiss xmm0, xmm3
    vmovss  dword ptr [rdx], xmm0
    vmovss  xmm1, [rsp+fGunKickSpeedMax]
    vcomiss xmm0, xmm1
    vxorps  xmm2, xmm1, cs:__xmm@80000000800000008000000080000000
    vcmpltss xmm1, xmm0, xmm2
    vmovss  xmm0, dword ptr [rdx]
    vblendvps xmm1, xmm0, xmm2, xmm1
    vmovss  dword ptr [rdx], xmm1
  }
  return result;
}

/*
==============
BG_CalculateWeaponMovement_Sway
==============
*/
void BG_CalculateWeaponMovement_Sway(const WeaponMovementParams *const params, WeaponMovementState *ws)
{
  __asm { vmovaps [rsp+230h+var_70], xmm9 }
  _RSI = params;
  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1258, ASSERT_TYPE_ASSERT, "(params)", (const char *)&queryFormat, "params") )
    __debugbreak();
  if ( !ws && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1259, ASSERT_TYPE_ASSERT, "(ws)", (const char *)&queryFormat, "ws") )
    __debugbreak();
  __asm
  {
    vxorps  xmm9, xmm9, xmm9
    vcomiss xmm9, dword ptr [rsi+8]
    vmovaps xmm9, [rsp+230h+var_70]
  }
}

/*
==============
BG_CalculateWeaponMovement_VerticalBobFactor
==============
*/

float __fastcall BG_CalculateWeaponMovement_VerticalBobFactor(const playerState_s *ps, double cycle, double speed)
{
  const SuitDef *SuitDef; 
  int viewHeightTarget; 
  const dvar_t *v11; 
  const dvar_t *v13; 
  const char *v14; 
  const dvar_t *v15; 
  char v20; 
  char v21; 
  char v39; 

  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
    vmovaps xmm8, xmm1
    vmovaps xmm6, xmm2
  }
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 79, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  SuitDef = BG_GetSuitDef(ps->suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 81, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  viewHeightTarget = ps->viewHeightTarget;
  if ( viewHeightTarget == BG_Suit_GetProneViewHeight(SuitDef) )
  {
    v11 = DCONST_DVARMPVEC2_bg_weaponBobAmplitudeProne;
    if ( !DCONST_DVARMPVEC2_bg_weaponBobAmplitudeProne && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weaponBobAmplitudeProne") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    __asm { vmulss  xmm7, xmm6, dword ptr [rbx+2Ch] }
    goto LABEL_25;
  }
  if ( viewHeightTarget == SuitDef->viewheight_crouch )
  {
    v13 = DCONST_DVARMPVEC2_bg_weaponBobAmplitudeDucked;
    if ( !DCONST_DVARMPVEC2_bg_weaponBobAmplitudeDucked )
    {
      v14 = "bg_weaponBobAmplitudeDucked";
      goto LABEL_22;
    }
    goto LABEL_24;
  }
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u) )
  {
    v13 = DCONST_DVARMPVEC2_bg_weaponBobAmplitudeStanding;
    if ( !DCONST_DVARMPVEC2_bg_weaponBobAmplitudeStanding )
    {
      v14 = "bg_weaponBobAmplitudeStanding";
LABEL_22:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v14) )
        __debugbreak();
    }
LABEL_24:
    Dvar_CheckFrontendServerThread(v13);
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vsubss  xmm1, xmm0, dword ptr [rbx+730h]
      vmulss  xmm2, xmm1, xmm6
      vmulss  xmm7, xmm2, dword ptr [rbp+2Ch]
    }
    goto LABEL_25;
  }
  v15 = DCONST_DVARMPVEC2_bg_weaponBobAmplitudeSprinting;
  if ( !DCONST_DVARMPVEC2_bg_weaponBobAmplitudeSprinting && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weaponBobAmplitudeSprinting") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  __asm { vmulss  xmm7, xmm6, dword ptr [rbx+2Ch] }
LABEL_25:
  _RBX = DCONST_DVARFLT_bg_weaponBobMax;
  if ( !DCONST_DVARFLT_bg_weaponBobMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weaponBobMax") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vcomiss xmm7, dword ptr [rbx+28h] }
  if ( !(v20 | v21) )
  {
    _RBX = DCONST_DVARFLT_bg_weaponBobMax;
    if ( !DCONST_DVARFLT_bg_weaponBobMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weaponBobMax") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm7, dword ptr [rbx+28h] }
  }
  __asm
  {
    vmulss  xmm0, xmm8, cs:__real@40800000
    vaddss  xmm0, xmm0, cs:__real@3fc90fdb; X
  }
  *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
  __asm
  {
    vmulss  xmm6, xmm0, cs:__real@3e19999a
    vmulss  xmm0, xmm8, cs:__real@40000000; X
  }
  *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
  __asm { vmulss  xmm1, xmm0, cs:__real@3f400000 }
  _R11 = &v39;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vaddss  xmm2, xmm6, xmm1
    vmovaps xmm6, [rsp+78h+var_18]
    vmulss  xmm0, xmm2, xmm7
    vmovaps xmm7, [rsp+78h+var_28]
  }
  return *(float *)&_XMM0;
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
  const BgWeaponMap *weaponMap; 
  char v15; 
  const Weapon *ViewmodelWeapon; 
  const Weapon *v24; 
  char v26; 
  bool IsUsingDualFOV; 
  bool v29; 
  const ADSOverlay *Overlay; 

  _RSI = outCombinedAngles;
  _RBP = outDamageKickAngles;
  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 607, ASSERT_TYPE_ASSERT, "(params)", (const char *)&queryFormat, "params") )
    __debugbreak();
  if ( !ws && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 608, ASSERT_TYPE_ASSERT, "(ws)", (const char *)&queryFormat, "ws") )
    __debugbreak();
  if ( params->damageTime )
  {
    _RDI = params->ps;
    __asm
    {
      vmovaps [rsp+98h+var_28], xmm6
      vmovaps [rsp+98h+var_38], xmm7
      vmovaps [rsp+98h+var_48], xmm8
      vmovaps [rsp+98h+var_58], xmm9
      vmovaps [rsp+98h+var_68], xmm10
    }
    if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 616, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    weaponMap = params->weaponMap;
    if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 619, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    ViewmodelWeapon = BG_GetViewmodelWeapon(weaponMap, _RDI);
    __asm
    {
      vmovss  xmm1, dword ptr [rdi+730h]
      vmovss  xmm7, cs:__real@3f800000
      vmovss  xmm9, cs:__real@3f000000
      vaddss  xmm0, xmm1, xmm7
      vmulss  xmm6, xmm0, xmm9
      vmulss  xmm8, xmm6, cs:__real@42c80000
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm1, xmm0
    }
    v24 = ViewmodelWeapon;
    __asm { vmovaps xmm10, xmm6 }
    if ( !(v15 | v26) )
    {
      IsUsingDualFOV = BG_IsUsingDualFOV(weaponMap, _RDI);
      v15 = 0;
      if ( IsUsingDualFOV )
      {
        __asm
        {
          vsubss  xmm0, xmm7, dword ptr [rdi+730h]
          vmulss  xmm6, xmm6, xmm0
        }
      }
      else
      {
        v29 = BG_UsingAlternate(_RDI);
        Overlay = BG_GetOverlay(v24, v29);
        v15 = 0;
        if ( Overlay->reticle )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+730h]
            vmulss  xmm1, xmm0, cs:__real@3f400000
            vsubss  xmm1, xmm7, xmm1
            vmulss  xmm6, xmm6, xmm1
          }
        }
      }
    }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rbx+10h]
      vcomiss xmm0, xmm8
    }
    if ( v15 )
    {
      __asm { vdivss  xmm0, xmm0, xmm8; fFrac }
      *(double *)&_XMM0 = GetLeanFraction(*(const float *)&_XMM0);
    }
    else
    {
      __asm
      {
        vsubss  xmm2, xmm0, xmm8
        vmovss  xmm0, cs:__real@3b23d70a
        vdivss  xmm1, xmm0, xmm10
        vmulss  xmm0, xmm2, xmm1; fFrac
        vcomiss xmm0, xmm7
      }
      if ( !v15 )
      {
LABEL_24:
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+0]
          vaddss  xmm1, xmm0, dword ptr [rsi]
          vmovaps xmm10, [rsp+98h+var_68]
          vmovaps xmm9, [rsp+98h+var_58]
          vmovaps xmm8, [rsp+98h+var_48]
          vmovaps xmm7, [rsp+98h+var_38]
          vmovaps xmm6, [rsp+98h+var_28]
          vmovss  dword ptr [rsi], xmm1
          vmovss  xmm0, dword ptr [rbp+4]
          vaddss  xmm1, xmm0, dword ptr [rsi+4]
          vmovss  dword ptr [rsi+4], xmm1
          vmovss  xmm0, dword ptr [rbp+8]
          vaddss  xmm1, xmm0, dword ptr [rsi+8]
          vmovss  dword ptr [rsi+8], xmm1
        }
        return;
      }
      GetLeanFraction(*(const float *)&_XMM0);
      __asm { vsubss  xmm0, xmm7, xmm0 }
    }
    __asm
    {
      vmulss  xmm2, xmm0, xmm6
      vmulss  xmm1, xmm2, dword ptr [rbx+14h]
      vmulss  xmm0, xmm1, xmm9
      vmovss  dword ptr [rbp+0], xmm0
      vmulss  xmm0, xmm2, dword ptr [rbx+18h]
      vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000
      vmovss  dword ptr [rbp+4], xmm1
      vmulss  xmm0, xmm2, dword ptr [rbx+18h]
      vmulss  xmm1, xmm0, xmm9
      vmovss  dword ptr [rbp+8], xmm1
    }
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
  int IdleCycleStartTime; 
  bool v28; 
  __int64 v31; 
  unsigned int idleSwayIndex; 
  bool outIsAlternate; 
  int idleMotionIndex; 
  vec3_t *outAngles; 
  BSplineRelaxedCBezier *motionSpline; 
  vec3_t magnitudes; 
  char v96; 

  __asm
  {
    vmovaps [rsp+118h+var_78], xmm9
    vmovaps [rsp+118h+var_88], xmm10
  }
  _R15 = outCombinedAngles;
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
  __asm
  {
    vmovaps [rsp+118h+var_58], xmm7
    vmovaps [rsp+118h+var_98], xmm11
    vmovaps [rsp+118h+var_A8], xmm12
  }
  ViewmodelOrOffhandADSSupportWeapon = BG_GetViewmodelOrOffhandADSSupportWeapon(weaponMap, ps, &outIsAlternate);
  if ( weaponAngleType == WEAPON_ANGLE_TYPE_IDLE )
  {
    *(float *)&_XMM0 = BG_GetIdleTargScale(weaponMap, ps);
    __asm
    {
      vmovss  dword ptr [rsp+118h+magnitudes+8], xmm0
      vmovss  dword ptr [rsp+118h+magnitudes+4], xmm0
      vmovss  dword ptr [rsp+118h+magnitudes], xmm0
      vmovaps xmm7, xmm0
      vmovaps xmm11, xmm0
      vmovaps xmm12, xmm0
    }
  }
  else
  {
    if ( !advancedIdleSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 522, ASSERT_TYPE_ASSERT, "(advancedIdleSettings)", (const char *)&queryFormat, "advancedIdleSettings") )
      __debugbreak();
    if ( advancedIdleSettings->useRandomPointsAlgorithm )
      BG_AdvancedIdle_UpdateIdleMotionCache(weaponMap, ps, ViewmodelOrOffhandADSSupportWeapon, 0, &ws->idleMotionCache);
    BG_GetAdvancedIdleTargetScale(ps, weaponMap, ViewmodelOrOffhandADSSupportWeapon, outIsAlternate, advancedIdleSettings, weaponAngleType == WEAPON_ANGLE_TYPE_IDLE_ADVANCED_2, 0, &magnitudes);
    __asm
    {
      vmovss  xmm7, dword ptr [rsp+118h+magnitudes+8]
      vmovss  xmm11, dword ptr [rsp+118h+magnitudes+4]
      vmovss  xmm12, dword ptr [rsp+118h+magnitudes]
    }
  }
  *(float *)&_XMM0 = BG_GetIdleScaleMultiplier(params, ws, ViewmodelOrOffhandADSSupportWeapon, outIsAlternate);
  __asm
  {
    vmovss  xmm9, cs:__real@3f800000
    vmovaps xmm10, xmm0
  }
  if ( weaponAngleType == WEAPON_ANGLE_TYPE_IDLE && BG_GetOverlayReticle(ps, ViewmodelOrOffhandADSSupportWeapon, outIsAlternate) )
  {
    BG_GetWeaponOrOffhandAdsFrac(weaponMap, ps);
    __asm
    {
      vsubss  xmm0, xmm9, xmm0
      vmulss  xmm10, xmm10, xmm0
    }
  }
  IdleCycleStartTime = BG_GetIdleCycleStartTime(ViewmodelOrOffhandADSSupportWeapon, outIsAlternate, ps);
  v28 = weaponAngleType == WEAPON_ANGLE_TYPE_IDLE_ADVANCED_2;
  _ER12 = 1;
  if ( v28 )
  {
    _ESI = ps->weapCommon.weaponIdleTime2 - IdleCycleStartTime;
    idleMotionIndex = 1;
    if ( _ESI < 0 )
      _ESI = 0;
    v31 = 1076i64;
  }
  else
  {
    _ESI = ps->weapCommon.weaponIdleTime - IdleCycleStartTime;
    idleMotionIndex = 0;
    v31 = 272i64;
    if ( _ESI < 0 )
      _ESI = 0;
  }
  motionSpline = (BSplineRelaxedCBezier *)((char *)ws + v31);
  _ER13 = 1;
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x20u) )
    _ER13 = -1;
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x21u) )
    _ER12 = -1;
  if ( BG_IsPlayerZeroGFloating(ps) )
  {
    _RBX = DCONST_DVARMPFLT_bg_weaponIdleMoveZeroGrav;
    if ( !DCONST_DVARMPFLT_bg_weaponIdleMoveZeroGrav && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weaponIdleMoveZeroGrav") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm9, dword ptr [rbx+28h] }
  }
  if ( advancedIdleSettings && advancedIdleSettings->useAdvancedIdleSettings && advancedIdleSettings->useRandomPointsAlgorithm )
  {
    _RBX = outAngles;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, esi
      vmulss  xmm1, xmm0, xmm9
      vcvttss2si r9d, xmm1; idleTime
      vmovss  [rsp+118h+idleSwayIndex], xmm10
    }
    BG_AdvancedIdle_GetWeaponAngles(weaponMap, ps, idleMotionIndex, _ER9, motionSpline, *(const float *)&idleSwayIndex, &magnitudes, outAngles);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vaddss  xmm1, xmm0, dword ptr [r15]
      vmovss  dword ptr [r15], xmm1
      vmovss  xmm0, dword ptr [rbx+4]
      vaddss  xmm1, xmm0, dword ptr [r15+4]
      vmovss  dword ptr [r15+4], xmm1
      vmovss  xmm0, dword ptr [rbx+8]
      vaddss  xmm1, xmm0, dword ptr [r15+8]
      vmovss  dword ptr [r15+8], xmm1
    }
  }
  else
  {
    __asm
    {
      vmovaps [rsp+118h+var_48], xmm6
      vmovaps [rsp+118h+var_68], xmm8
      vmovd   xmm8, esi
      vcvtdq2ps xmm8, xmm8
      vmulss  xmm0, xmm8, cs:__real@3a03126f
      vmulss  xmm1, xmm0, xmm9
      vmovd   xmm6, r13d
      vcvtdq2ps xmm6, xmm6
      vmulss  xmm0, xmm1, xmm6; X
    }
    *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
    _RBX = outAngles;
    __asm
    {
      vmulss  xmm1, xmm7, xmm10
      vmovss  xmm7, cs:__real@3c23d70a
      vmulss  xmm2, xmm0, xmm1
      vmulss  xmm1, xmm8, cs:__real@3a378034
      vmulss  xmm3, xmm2, xmm7
      vmovss  dword ptr [rbx+8], xmm3
      vaddss  xmm0, xmm3, dword ptr [r15+8]
      vmulss  xmm2, xmm1, xmm9
      vmovss  dword ptr [r15+8], xmm0
      vmulss  xmm0, xmm2, xmm6; X
    }
    *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
    __asm
    {
      vmulss  xmm1, xmm11, xmm10
      vmulss  xmm0, xmm0, xmm1
      vmulss  xmm1, xmm8, cs:__real@3a83126f
      vmulss  xmm2, xmm0, xmm7
      vmovss  dword ptr [rbx+4], xmm2
      vaddss  xmm0, xmm2, dword ptr [r15+4]
      vmovss  dword ptr [r15+4], xmm0
      vmulss  xmm2, xmm1, xmm9
      vmovd   xmm0, r12d
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm0, xmm2, xmm0; X
    }
    *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
    __asm
    {
      vmovaps xmm8, [rsp+118h+var_68]
      vmovaps xmm6, [rsp+118h+var_48]
      vmulss  xmm1, xmm12, xmm10
      vmulss  xmm0, xmm0, xmm1
      vmulss  xmm2, xmm0, xmm7
      vmovss  dword ptr [rbx], xmm2
      vaddss  xmm1, xmm2, dword ptr [r15]
      vmovss  dword ptr [r15], xmm1
    }
  }
  __asm
  {
    vmovaps xmm12, [rsp+118h+var_A8]
    vmovaps xmm11, [rsp+118h+var_98]
    vmovaps xmm7, [rsp+118h+var_58]
  }
  _R11 = &v96;
  __asm
  {
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
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
  char v19; 
  char v20; 
  const Weapon *ViewmodelOrOffhandADSSupportWeapon; 
  const ADSOverlay *Overlay; 
  bool outIsAlternate; 
  float adsGunBobTiltPitchScale; 
  float adsGunBobPitchScale; 
  float adsGunBobYawScale; 
  float adsGunBobTiltYawScale; 
  float adsGunBobTiltRollScale; 
  float adsGunBobTiltOffset; 
  vec3_t *v63; 
  float outVertical; 
  float outHorizontal; 

  __asm { vmovaps [rsp+0E0h+var_50], xmm7 }
  _R12 = outCombinedAngles;
  _R13 = outMovementTiltAngles;
  _R14 = outMovementTiltOffset;
  v63 = outAdsBobAngles;
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
  *(double *)&_XMM0 = BG_GetWeaponOrOffhandAdsFrac(weaponMap, ps);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm1
    vmovaps xmm7, xmm0
  }
  if ( !(v19 | v20) )
  {
    ViewmodelOrOffhandADSSupportWeapon = BG_GetViewmodelOrOffhandADSSupportWeapon(weaponMap, ps, &outIsAlternate);
    Overlay = BG_GetOverlay(ViewmodelOrOffhandADSSupportWeapon, outIsAlternate);
    if ( !Overlay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1705, ASSERT_TYPE_ASSERT, "(adsOverlay)", (const char *)&queryFormat, "adsOverlay") )
      __debugbreak();
    if ( Overlay->reticle == WEAPOVERLAYRETICLE_NONE )
    {
      __asm { vmovaps [rsp+0E0h+var_40], xmm6 }
      BG_GetADSGunBobSettings(weaponMap, ps, ViewmodelOrOffhandADSSupportWeapon, outIsAlternate, &adsGunBobPitchScale, &adsGunBobYawScale, &adsGunBobTiltPitchScale, &adsGunBobTiltYawScale, &adsGunBobTiltRollScale, &adsGunBobTiltOffset);
      __asm { vmovss  xmm0, [rbp+47h+var_8C] }
      _RDI = DCONST_DVARFLT_bg_weaponBobLag;
      __asm
      {
        vmulss  xmm1, xmm0, cs:__real@bf800000
        vmovss  [rbp+47h+var_8C], xmm1
      }
      if ( !DCONST_DVARFLT_bg_weaponBobLag && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weaponBobLag") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+28h]
        vmulss  xmm1, xmm0, cs:__real@40490fdb
        vaddss  xmm6, xmm1, cs:__real@40c90fdb
        vmovaps xmm2, xmm6; cyclePhaseOffsetHorizontal
        vmovaps xmm1, xmm6; cyclePhaseOffsetVertical
      }
      BG_CalculateGunMovement_Bob(ps, *(double *)&_XMM1, *(double *)&_XMM2, &outVertical, &outHorizontal);
      _RAX = v63;
      __asm
      {
        vmulss  xmm1, xmm7, [rbp+47h+outVertical]
        vmulss  xmm3, xmm1, [rbp+47h+adsGunBobPitchScale]
        vmulss  xmm1, xmm7, [rbp+47h+outHorizontal]
        vmulss  xmm2, xmm1, [rbp+47h+var_84]
        vmovss  dword ptr [rax+4], xmm2
        vmovss  dword ptr [rax], xmm3
        vmovss  xmm1, dword ptr [r12+4]
        vaddss  xmm0, xmm3, dword ptr [r12]
        vmovss  dword ptr [r12], xmm0
        vaddss  xmm0, xmm1, dword ptr [rax+4]
        vmovss  dword ptr [r12+4], xmm0
        vmovss  xmm1, dword ptr [rax+8]
        vaddss  xmm0, xmm1, dword ptr [r12+8]
        vsubss  xmm1, xmm6, cs:__real@3ef1463b; cyclePhaseOffsetVertical
        vmovaps xmm2, xmm1; cyclePhaseOffsetHorizontal
        vmovss  dword ptr [r12+8], xmm0
      }
      BG_CalculateGunMovement_Bob(ps, *(double *)&_XMM1, *(double *)&_XMM2, &outVertical, &outHorizontal);
      __asm
      {
        vmulss  xmm2, xmm7, [rbp+47h+outHorizontal]
        vmulss  xmm0, xmm2, [rbp+47h+var_7C]
        vmulss  xmm1, xmm7, [rbp+47h+outVertical]
        vmulss  xmm3, xmm1, [rbp+47h+var_8C]
        vmulss  xmm1, xmm2, [rbp+47h+var_80]
        vmovaps xmm6, [rsp+0E0h+var_40]
        vmovss  dword ptr [r13+4], xmm1
        vmovss  dword ptr [r13+8], xmm0
        vmovss  dword ptr [r13+0], xmm3
        vmovss  xmm0, dword ptr [r12+4]
        vaddss  xmm1, xmm3, dword ptr [r12]
        vmovss  dword ptr [r12], xmm1
        vaddss  xmm2, xmm0, dword ptr [r13+4]
        vmovss  xmm1, dword ptr [r12+8]
        vmovss  dword ptr [r12+4], xmm2
        vaddss  xmm0, xmm1, dword ptr [r13+8]
        vmovss  xmm2, [rbp+47h+var_78]
        vmovss  dword ptr [r12+8], xmm0
        vmovss  dword ptr [r14], xmm2
      }
    }
  }
  __asm { vmovaps xmm7, [rsp+0E0h+var_50] }
}

/*
==============
BG_ComputeAndApplyWeaponMovement_TiltAngles
==============
*/
void BG_ComputeAndApplyWeaponMovement_TiltAngles(const WeaponMovementParams *const params, const WeaponMovementState *const ws, vec3_t *outTiltAngles, vec3_t *outCombinedAngles, float *outTiltOffset)
{
  const BgWeaponMap *weaponMap; 
  bool v12; 
  const Weapon *ViewmodelWeapon; 
  float hipGunTiltRollFactor; 
  float adsGunTiltRollFactor; 
  float hipGunTiltOffset; 
  float adsGunTiltOffset[19]; 
  float hipGunTiltPitchFactor; 
  float adsGunTiltPitchFactor; 
  float hipGunTiltYawFactor; 
  float adsGunTiltYawFactor; 

  _R15 = outCombinedAngles;
  _R12 = outTiltAngles;
  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1586, ASSERT_TYPE_ASSERT, "(params)", (const char *)&queryFormat, "params") )
    __debugbreak();
  if ( !ws && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1587, ASSERT_TYPE_ASSERT, "(ws)", (const char *)&queryFormat, "ws") )
    __debugbreak();
  _R14 = outTiltOffset;
  if ( !outTiltOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1588, ASSERT_TYPE_ASSERT, "(outTiltOffset)", (const char *)&queryFormat, "outTiltOffset") )
    __debugbreak();
  _RDI = params->ps;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1591, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  weaponMap = params->weaponMap;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1594, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  v12 = BG_UsingAlternate(_RDI);
  ViewmodelWeapon = BG_GetViewmodelWeapon(weaponMap, _RDI);
  BG_GetGunTiltYawPitchAndRoll(weaponMap, _RDI, ViewmodelWeapon, v12, &hipGunTiltPitchFactor, &hipGunTiltYawFactor, &hipGunTiltRollFactor, &hipGunTiltOffset, &adsGunTiltPitchFactor, &adsGunTiltYawFactor, &adsGunTiltRollFactor, adsGunTiltOffset);
  __asm
  {
    vmovss  xmm5, dword ptr [rdi+730h]
    vmovss  xmm0, [rsp+0B8h+arg_8]
    vsubss  xmm1, xmm0, [rsp+0B8h+hipGunTiltPitchFactor]
    vmovss  xmm0, [rsp+0B8h+arg_18]
    vmulss  xmm2, xmm1, xmm5
    vsubss  xmm1, xmm0, [rsp+0B8h+arg_10]
    vaddss  xmm3, xmm2, [rsp+0B8h+hipGunTiltPitchFactor]
    vmulss  xmm4, xmm3, dword ptr [rbp+7Ch]
    vmovss  dword ptr [r12], xmm4
    vmulss  xmm2, xmm1, xmm5
    vaddss  xmm3, xmm2, [rsp+0B8h+arg_10]
    vmulss  xmm0, xmm3, dword ptr [rbp+80h]
    vmovss  dword ptr [r12+4], xmm0
    vmovss  xmm0, [rsp+0B8h+var_54]
    vsubss  xmm1, xmm0, [rsp+0B8h+var_58]
    vmulss  xmm2, xmm1, xmm5
    vaddss  xmm3, xmm2, [rsp+0B8h+var_58]
    vmulss  xmm0, xmm3, dword ptr [rbp+80h]
    vmovss  dword ptr [r12+8], xmm0
    vaddss  xmm1, xmm4, dword ptr [r15]
    vmovss  dword ptr [r15], xmm1
    vmovss  xmm0, dword ptr [r12+4]
    vaddss  xmm1, xmm0, dword ptr [r15+4]
    vmovss  xmm0, dword ptr [r15+8]
    vmovss  dword ptr [r15+4], xmm1
    vaddss  xmm1, xmm0, dword ptr [r12+8]
    vmovss  xmm0, [rsp+0B8h+var_4C]
    vmovss  dword ptr [r15+8], xmm1
    vsubss  xmm1, xmm0, [rsp+0B8h+var_50]
    vmulss  xmm2, xmm1, xmm5
    vaddss  xmm3, xmm2, [rsp+0B8h+var_50]
    vmovss  dword ptr [r14], xmm3
  }
}

/*
==============
BG_GetAdvancedIdleTargetScale
==============
*/
void BG_GetAdvancedIdleTargetScale(const playerState_s *ps, const BgWeaponMap *weaponMap, const Weapon *weapon, const bool isAlternate, const AdvancedIdleSettings *advancedIdleSettings, const unsigned int idleSwayIndex, const bool useViewValues, vec3_t *outTargetScale)
{
  bool IsAimDownSight; 
  __int64 v71; 
  __int64 v72; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 297, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  _RBX = advancedIdleSettings;
  if ( !advancedIdleSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 298, ASSERT_TYPE_ASSERT, "(advancedIdleSettings)", (const char *)&queryFormat, "advancedIdleSettings") )
    __debugbreak();
  if ( idleSwayIndex > 1 )
  {
    LODWORD(v71) = idleSwayIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 299, ASSERT_TYPE_ASSERT, "( 0 ) <= ( idleSwayIndex ) && ( idleSwayIndex ) <= ( 1 )", "idleSwayIndex not in [0, 1]\n\t%i not in [%i, %i]", v71, 0i64, 1) )
      __debugbreak();
  }
  if ( !advancedIdleSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 252, ASSERT_TYPE_ASSERT, "(advancedIdleSettings)", (const char *)&queryFormat, "advancedIdleSettings") )
    __debugbreak();
  if ( idleSwayIndex > 1 )
  {
    LODWORD(v72) = 1;
    LODWORD(v71) = idleSwayIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 253, ASSERT_TYPE_ASSERT, "( 0 ) <= ( idleSwayIndex ) && ( idleSwayIndex ) <= ( 1 )", "idleSwayIndex not in [0, 1]\n\t%i not in [%i, %i]", v71, 0i64, v72) )
      __debugbreak();
  }
  __asm
  {
    vmovaps [rsp+118h+var_38], xmm6
    vmovaps [rsp+118h+var_48], xmm7
    vmovaps [rsp+118h+var_58], xmm8
    vmovaps [rsp+118h+var_68], xmm9
    vmovaps [rsp+118h+var_78], xmm10
    vmovaps [rsp+118h+var_88], xmm11
    vmovaps [rsp+118h+var_98], xmm12
    vmovaps [rsp+118h+var_A8], xmm13
    vmovaps [rsp+118h+var_B8], xmm14
    vmovaps [rsp+118h+var_C8], xmm15
  }
  if ( idleSwayIndex )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+7Ch]
      vmovss  xmm8, dword ptr [rbx+58h]
      vmovss  xmm9, dword ptr [rbx+5Ch]
      vmovss  xmm10, dword ptr [rbx+60h]
      vmovss  xmm6, dword ptr [rbx+6Ch]
      vmovss  xmm7, dword ptr [rbx+70h]
      vmovss  xmm13, dword ptr [rbx+90h]
      vmovss  xmm14, dword ptr [rbx+94h]
      vmovss  [rsp+118h+idleSwayIndex], xmm0
      vmovss  xmm0, dword ptr [rbx+80h]
      vmovss  [rsp+118h+arg_0], xmm0
      vmovss  xmm0, dword ptr [rbx+84h]
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+34h]
      vmovss  xmm8, dword ptr [rbx+10h]
      vmovss  xmm9, dword ptr [rbx+14h]
      vmovss  xmm10, dword ptr [rbx+18h]
      vmovss  xmm6, dword ptr [rbx+24h]
      vmovss  xmm7, dword ptr [rbx+28h]
      vmovss  xmm13, dword ptr [rbx+48h]
      vmovss  xmm14, dword ptr [rbx+4Ch]
      vmovss  [rsp+118h+idleSwayIndex], xmm0
      vmovss  xmm0, dword ptr [rbx+38h]
      vmovss  [rsp+118h+arg_0], xmm0
      vmovss  xmm0, dword ptr [rbx+3Ch]
    }
  }
  __asm
  {
    vmovss  [rsp+118h+var_D8], xmm10
    vmovss  [rsp+118h+var_D4], xmm0
    vmovss  dword ptr [rsp+118h+advancedIdleSettings], xmm9
    vmovaps xmm15, xmm8
    vmovaps xmm12, xmm7
    vmovaps xmm11, xmm6
  }
  IsAimDownSight = BG_IsAimDownSight(weapon, isAlternate);
  _RBX = outTargetScale;
  if ( useViewValues )
  {
    if ( IsAimDownSight )
    {
      __asm
      {
        vsubss  xmm0, xmm13, xmm6
        vmulss  xmm1, xmm0, dword ptr [rsi+730h]
        vaddss  xmm2, xmm1, xmm6; fOriginalTargScale
        vsubss  xmm0, xmm14, xmm7
        vmovss  dword ptr [rbx], xmm2
        vmulss  xmm1, xmm0, dword ptr [rsi+730h]
        vaddss  xmm3, xmm1, xmm7
      }
      outTargetScale->v[2] = 0.0;
      __asm { vmovss  dword ptr [rbx+4], xmm3 }
      *(float *)&_XMM0 = BG_AdjustTargScaleForADSTime(weaponMap, ps, *(double *)&_XMM2);
      __asm
      {
        vmovss  xmm2, dword ptr [rbx+4]; fOriginalTargScale
        vmovss  dword ptr [rbx], xmm0
      }
      *(float *)&_XMM0 = BG_AdjustTargScaleForADSTime(weaponMap, ps, *(double *)&_XMM2);
      __asm { vmovss  dword ptr [rbx+4], xmm0 }
    }
    else
    {
      __asm
      {
        vmovss  dword ptr [rbx], xmm6
        vmovss  dword ptr [rbx+4], xmm7
      }
      outTargetScale->v[2] = 0.0;
    }
  }
  else if ( IsAimDownSight )
  {
    __asm
    {
      vmovss  xmm0, [rsp+118h+idleSwayIndex]
      vsubss  xmm0, xmm0, xmm15
      vmulss  xmm1, xmm0, dword ptr [rsi+730h]
      vmovss  xmm0, [rsp+118h+arg_0]
      vsubss  xmm0, xmm0, dword ptr [rsp+118h+advancedIdleSettings]
      vaddss  xmm2, xmm1, xmm15; fOriginalTargScale
      vmovss  dword ptr [rbx], xmm2
      vmulss  xmm1, xmm0, dword ptr [rsi+730h]
      vaddss  xmm3, xmm1, dword ptr [rsp+118h+advancedIdleSettings]
      vmovss  xmm0, [rsp+118h+var_D4]
      vsubss  xmm0, xmm0, [rsp+118h+var_D8]
      vmovss  dword ptr [rbx+4], xmm3
      vmulss  xmm1, xmm0, dword ptr [rsi+730h]
      vaddss  xmm3, xmm1, [rsp+118h+var_D8]
      vmovss  dword ptr [rbx+8], xmm3
    }
    *(float *)&_XMM0 = BG_AdjustTargScaleForADSTime(weaponMap, ps, *(double *)&_XMM2);
    __asm
    {
      vmovss  xmm2, dword ptr [rbx+4]; fOriginalTargScale
      vmovss  dword ptr [rbx], xmm0
    }
    *(float *)&_XMM0 = BG_AdjustTargScaleForADSTime(weaponMap, ps, *(double *)&_XMM2);
    __asm
    {
      vmovss  xmm2, dword ptr [rbx+8]; fOriginalTargScale
      vmovss  dword ptr [rbx+4], xmm0
    }
    *(float *)&_XMM0 = BG_AdjustTargScaleForADSTime(weaponMap, ps, *(double *)&_XMM2);
    __asm { vmovss  dword ptr [rbx+8], xmm0 }
  }
  else
  {
    __asm
    {
      vmovss  dword ptr [rbx], xmm8
      vmovss  dword ptr [rbx+4], xmm9
      vmovss  dword ptr [rbx+8], xmm10
    }
  }
  __asm
  {
    vmovaps xmm15, [rsp+118h+var_C8]
    vmovaps xmm14, [rsp+118h+var_B8]
    vmovaps xmm13, [rsp+118h+var_A8]
    vmovaps xmm12, [rsp+118h+var_98]
    vmovaps xmm11, [rsp+118h+var_88]
    vmovaps xmm10, [rsp+118h+var_78]
    vmovaps xmm9, [rsp+118h+var_68]
    vmovaps xmm8, [rsp+118h+var_58]
    vmovaps xmm7, [rsp+118h+var_48]
    vmovaps xmm6, [rsp+118h+var_38]
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
  const dvar_t *v15; 
  char v33; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
  }
  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 462, ASSERT_TYPE_ASSERT, "(params)", (const char *)&queryFormat, "params") )
    __debugbreak();
  if ( !ws && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 463, ASSERT_TYPE_ASSERT, "(ws)", (const char *)&queryFormat, "ws") )
    __debugbreak();
  _RDI = params->ps;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 466, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm
  {
    vmovss  xmm8, cs:__real@3f800000
    vmovaps xmm7, xmm8
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_HARD_LAND|WEAPON_LADDER_AIM) )
  {
    v15 = DCONST_DVARBOOL_player_scope_prototype;
    __asm { vmovss  xmm7, dword ptr [rdi+34Ch] }
    if ( !DCONST_DVARBOOL_player_scope_prototype && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_scope_prototype") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    if ( !v15->current.enabled )
    {
      __asm { vcomiss xmm7, xmm8 }
      if ( v15->current.enabled )
      {
        __asm
        {
          vsubss  xmm0, xmm7, xmm8
          vmulss  xmm1, xmm0, cs:__real@3f000000
          vaddss  xmm7, xmm1, xmm8
        }
      }
    }
  }
  __asm { vmovss  xmm6, dword ptr [rdi+4C0h] }
  BG_GetMountGunIdleScale((const ContextMountType)_RDI->mountState.surface.type, r_weapon, isAlternate);
  _R11 = &v33;
  __asm
  {
    vmulss  xmm2, xmm6, xmm0
    vsubss  xmm1, xmm8, xmm6
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vaddss  xmm0, xmm2, xmm1
    vmulss  xmm2, xmm0, xmm7
    vmulss  xmm0, xmm2, dword ptr [rsi+3Ch]
    vmovaps xmm7, [rsp+78h+var_28]
  }
  return *(float *)&_XMM0;
}

/*
==============
BG_GetIdleTargScale
==============
*/
float BG_GetIdleTargScale(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  bool v8; 
  bool v9; 
  float hipIdleAmount; 
  float adsIdleAmount; 
  float adsIdleSpeed; 
  float hipIdleSpeed; 
  Weapon r_weapon; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 224, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 225, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  _RAX = BG_GetViewmodelWeapon(weaponMap, ps);
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
  v8 = BG_UsingAlternate(ps);
  BG_GetHipIdleValues(ps->perks, &r_weapon, v8, &hipIdleAmount, &adsIdleAmount, &hipIdleSpeed, &adsIdleSpeed);
  v9 = BG_UsingAlternate(ps);
  if ( BG_IsAimDownSight(&r_weapon, v9) )
  {
    __asm
    {
      vmovss  xmm0, [rsp+0A8h+adsIdleAmount]
      vsubss  xmm1, xmm0, [rsp+0A8h+hipIdleAmount]
      vmulss  xmm2, xmm1, dword ptr [rbx+730h]
      vaddss  xmm2, xmm2, [rsp+0A8h+hipIdleAmount]; fOriginalTargScale
    }
    *(float *)&_XMM0 = BG_AdjustTargScaleForADSTime(weaponMap, ps, *(double *)&_XMM2);
  }
  else
  {
    __asm
    {
      vmovss  xmm2, [rsp+0A8h+hipIdleAmount]
      vxorps  xmm0, xmm0, xmm0
      vcmpneqss xmm1, xmm2, xmm0
      vmovss  xmm0, cs:__real@42a00000
      vblendvps xmm0, xmm0, xmm2, xmm1
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
BG_GetNewOriginForRotationWithOffset
==============
*/

void __fastcall BG_GetNewOriginForRotationWithOffset(const vec3_t *rotationAngles, double rotationOffsetForward, vec3_t *newOrigin)
{
  vec3_t v1; 
  vec3_t point; 
  tmat33_t<vec3_t> axis; 

  __asm
  {
    vmovaps [rsp+98h+var_18], xmm6
    vmovaps [rsp+98h+var_28], xmm7
    vmovss  xmm2, cs:__real@358637bd; epsilon
    vxorps  xmm6, xmm6, xmm6
    vmovss  [rsp+98h+v1], xmm6
    vmovss  [rsp+98h+var_74], xmm6
    vmovss  [rsp+98h+var_70], xmm6
    vmovaps xmm7, xmm1
  }
  if ( VecNCompareCustomEpsilon(rotationAngles->v, v1.v, *(float *)&_XMM2, 3) )
  {
    *(_QWORD *)newOrigin->v = 0i64;
    newOrigin->v[2] = 0.0;
  }
  else
  {
    AnglesToAxis(rotationAngles, &axis);
    __asm
    {
      vmovss  [rsp+98h+v1], xmm7
      vmovss  [rsp+98h+var_74], xmm6
      vmovss  [rsp+98h+var_70], xmm6
      vmovss  dword ptr [rsp+98h+point], xmm6
      vmovss  dword ptr [rsp+98h+point+4], xmm6
      vmovss  dword ptr [rsp+98h+point+8], xmm6
    }
    RotatePointAroundPoint(newOrigin, &point, &v1, &axis);
  }
  __asm
  {
    vmovaps xmm6, [rsp+98h+var_18]
    vmovaps xmm7, [rsp+98h+var_28]
  }
}

/*
==============
BG_GetScriptGunAngleOffset
==============
*/
void BG_GetScriptGunAngleOffset(const playerState_s *ps, const BgHandler *handler, vec3_t *outCombinedAngles)
{
  const dvar_t *v6; 
  int serverTime; 
  unsigned int IndexByName; 
  int v15; 
  unsigned int v16; 
  int v17; 
  unsigned int v18; 
  OmnvarData outData; 

  v6 = DCONST_DVARMPBOOL_useScriptWeaponAndViewOffsets;
  _RDI = outCombinedAngles;
  __asm
  {
    vmovaps [rsp+98h+var_28], xmm6
    vmovaps [rsp+98h+var_38], xmm7
    vmovaps [rsp+98h+var_48], xmm8
    vxorps  xmm8, xmm8, xmm8
    vxorps  xmm6, xmm6, xmm6
    vxorps  xmm7, xmm7, xmm7
  }
  if ( !DCONST_DVARMPBOOL_useScriptWeaponAndViewOffsets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "useScriptWeaponAndViewOffsets") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled )
  {
    serverTime = ps->serverTime;
    IndexByName = BG_Omnvar_GetIndexByName("protogun_ax");
    BG_Omnvar_GetDataAtPmoveTime(ps->clientNum, handler, IndexByName, serverTime, &outData);
    __asm { vmovss  xmm6, dword ptr [rsp+98h+outData.current] }
    v15 = ps->serverTime;
    v16 = BG_Omnvar_GetIndexByName("protogun_ay");
    BG_Omnvar_GetDataAtPmoveTime(ps->clientNum, handler, v16, v15, &outData);
    __asm { vmovss  xmm7, dword ptr [rsp+98h+outData.current] }
    v17 = ps->serverTime;
    v18 = BG_Omnvar_GetIndexByName("protogun_az");
    BG_Omnvar_GetDataAtPmoveTime(ps->clientNum, handler, v18, v17, &outData);
    __asm { vmovss  xmm8, dword ptr [rsp+98h+outData.current] }
  }
  __asm
  {
    vaddss  xmm0, xmm6, dword ptr [rdi]
    vmovaps xmm6, [rsp+98h+var_28]
    vmovss  dword ptr [rdi], xmm0
    vaddss  xmm0, xmm7, dword ptr [rdi+4]
    vmovaps xmm7, [rsp+98h+var_38]
    vmovss  dword ptr [rdi+4], xmm0
    vaddss  xmm0, xmm8, dword ptr [rdi+8]
    vmovaps xmm8, [rsp+98h+var_48]
    vmovss  dword ptr [rdi+8], xmm0
  }
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
  int v10; 
  unsigned int v11; 
  int v13; 
  unsigned int v14; 
  OmnvarData outData; 

  _RDI = outOffset;
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
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+48h+outData.current]
      vmovss  dword ptr [rdi], xmm0
    }
    v10 = ps->serverTime;
    v11 = BG_Omnvar_GetIndexByName("protogun_y");
    BG_Omnvar_GetDataAtPmoveTime(ps->clientNum, handler, v11, v10, &outData);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+48h+outData.current]
      vmovss  dword ptr [rdi+4], xmm0
    }
    v13 = ps->serverTime;
    v14 = BG_Omnvar_GetIndexByName("protogun_z");
    BG_Omnvar_GetDataAtPmoveTime(ps->clientNum, handler, v14, v13, &outData);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+48h+outData.current]
      vmovss  dword ptr [rdi+8], xmm0
    }
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
  int v10; 
  unsigned int v11; 
  int v13; 
  unsigned int v14; 
  OmnvarData outData; 

  _RDI = outOffset;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2647, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  *(_QWORD *)_RDI->v = 0i64;
  _RDI->v[2] = 0.0;
  v6 = DCONST_DVARMPBOOL_useScriptWeaponAndViewOffsets;
  if ( !DCONST_DVARMPBOOL_useScriptWeaponAndViewOffsets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "useScriptWeaponAndViewOffsets") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled )
  {
    serverTime = ps->serverTime;
    IndexByName = BG_Omnvar_GetIndexByName("protoview_ax");
    BG_Omnvar_GetDataAtPmoveTime(ps->clientNum, handler, IndexByName, serverTime, &outData);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+48h+outData.current]
      vmovss  dword ptr [rdi], xmm0
    }
    v10 = ps->serverTime;
    v11 = BG_Omnvar_GetIndexByName("protoview_ay");
    BG_Omnvar_GetDataAtPmoveTime(ps->clientNum, handler, v11, v10, &outData);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+48h+outData.current]
      vmovss  dword ptr [rdi+4], xmm0
    }
    v13 = ps->serverTime;
    v14 = BG_Omnvar_GetIndexByName("protoview_az");
    BG_Omnvar_GetDataAtPmoveTime(ps->clientNum, handler, v14, v13, &outData);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+48h+outData.current]
      vmovss  dword ptr [rdi+8], xmm0
    }
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
  int v10; 
  unsigned int v11; 
  int v13; 
  unsigned int v14; 
  OmnvarData outData; 

  _RDI = outOffset;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2625, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  *(_QWORD *)_RDI->v = 0i64;
  _RDI->v[2] = 0.0;
  v6 = DCONST_DVARMPBOOL_useScriptWeaponAndViewOffsets;
  if ( !DCONST_DVARMPBOOL_useScriptWeaponAndViewOffsets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "useScriptWeaponAndViewOffsets") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled )
  {
    serverTime = ps->serverTime;
    IndexByName = BG_Omnvar_GetIndexByName("protoview_x");
    BG_Omnvar_GetDataAtPmoveTime(ps->clientNum, handler, IndexByName, serverTime, &outData);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+48h+outData.current]
      vmovss  dword ptr [rdi], xmm0
    }
    v10 = ps->serverTime;
    v11 = BG_Omnvar_GetIndexByName("protoview_y");
    BG_Omnvar_GetDataAtPmoveTime(ps->clientNum, handler, v11, v10, &outData);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+48h+outData.current]
      vmovss  dword ptr [rdi+4], xmm0
    }
    v13 = ps->serverTime;
    v14 = BG_Omnvar_GetIndexByName("protoview_z");
    BG_Omnvar_GetDataAtPmoveTime(ps->clientNum, handler, v14, v13, &outData);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+48h+outData.current]
      vmovss  dword ptr [rdi+8], xmm0
    }
  }
}

/*
==============
BG_SetWeaponMovementAngles
==============
*/
void BG_SetWeaponMovementAngles(const WeaponMovementParams *const params, WeaponMovementState *const ws, int doIdle, float *outTiltOffset, float *outMovementTiltOffset, vec3_t *outCombinedAngles, vec3_t (*outAnglesCategorized)[30])
{
  char v16; 
  char v17; 
  const playerState_s *ps; 
  const BgWeaponMap *weaponMap; 
  bool v69; 
  const Weapon *ViewmodelWeapon; 
  AdvancedIdleSettings outAdvancedIdleSettings; 

  __asm { vmovaps [rsp+168h+var_48], xmm7 }
  _RDI = ws;
  _R14 = outCombinedAngles;
  _RBX = outAnglesCategorized;
  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1809, ASSERT_TYPE_ASSERT, "(params)", (const char *)&queryFormat, "params") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1810, ASSERT_TYPE_ASSERT, "(ws)", (const char *)&queryFormat, "ws") )
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
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 690, ASSERT_TYPE_ASSERT, "(ws)", (const char *)&queryFormat, "ws") )
    __debugbreak();
  *(float *)&_XMM0 = BG_CalculateWeaponMovement_Base_AdsFrac(params);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm1
    vmovaps xmm4, xmm0
  }
  if ( !(v16 | v17) )
  {
    __asm
    {
      vmulss  xmm3, xmm0, dword ptr [rdi+40h]
      vmovss  dword ptr [rbx], xmm3
      vmulss  xmm1, xmm0, dword ptr [rdi+44h]
      vmovss  dword ptr [rbx+4], xmm1
      vmulss  xmm2, xmm0, dword ptr [rdi+48h]
      vmovss  dword ptr [rbx+8], xmm2
      vmovss  xmm1, dword ptr [r14+4]
      vaddss  xmm0, xmm3, dword ptr [r14]
      vmovss  dword ptr [r14], xmm0
      vaddss  xmm2, xmm1, dword ptr [rbx+4]
      vmovss  dword ptr [r14+4], xmm2
      vmovss  xmm0, dword ptr [rbx+8]
      vaddss  xmm1, xmm0, dword ptr [r14+8]
      vmovss  dword ptr [r14+8], xmm1
      vmulss  xmm1, xmm4, dword ptr [rdi+4Ch]
      vmovss  dword ptr [rbx+0Ch], xmm1
      vmulss  xmm0, xmm4, dword ptr [rdi+50h]
      vmovss  dword ptr [rbx+10h], xmm0
      vmulss  xmm0, xmm4, dword ptr [rdi+54h]
      vmovss  dword ptr [rbx+14h], xmm0
      vaddss  xmm1, xmm1, dword ptr [r14]
      vmovss  xmm0, dword ptr [r14+4]
      vmovss  dword ptr [r14], xmm1
      vaddss  xmm2, xmm0, dword ptr [rbx+10h]
      vmovss  xmm1, dword ptr [r14+8]
      vmovss  dword ptr [r14+4], xmm2
      vaddss  xmm0, xmm1, dword ptr [rbx+14h]
      vmovss  dword ptr [r14+8], xmm0
      vmulss  xmm1, xmm4, dword ptr [rdi+58h]
      vmovss  dword ptr [rbx+18h], xmm1
      vmulss  xmm0, xmm4, dword ptr [rdi+5Ch]
      vmovss  dword ptr [rbx+1Ch], xmm0
      vmulss  xmm0, xmm4, dword ptr [rdi+60h]
      vmovss  dword ptr [rbx+20h], xmm0
      vmovss  xmm0, dword ptr [r14+4]
      vaddss  xmm1, xmm1, dword ptr [r14]
      vmovss  dword ptr [r14], xmm1
      vaddss  xmm2, xmm0, dword ptr [rbx+1Ch]
      vmovss  dword ptr [r14+4], xmm2
      vmovss  xmm1, dword ptr [rbx+20h]
      vaddss  xmm0, xmm1, dword ptr [r14+8]
      vmovss  dword ptr [r14+8], xmm0
    }
  }
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 724, ASSERT_TYPE_ASSERT, "(ws)", (const char *)&queryFormat, "ws") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+94h]
    vxorps  xmm0, xmm0, cs:__xmm@80000000800000008000000080000000
    vmovss  dword ptr [rbx+54h], xmm0
    vmovss  xmm1, dword ptr [rdi+98h]
    vxorps  xmm0, xmm1, cs:__xmm@80000000800000008000000080000000
    vmovss  dword ptr [rbx+58h], xmm0
    vmovss  xmm2, dword ptr [r14]
    vsubss  xmm1, xmm2, dword ptr [rdi+94h]
    vmulss  xmm3, xmm1, cs:__real@3b360b61
    vaddss  xmm1, xmm3, cs:__real@3f000000
    vxorps  xmm7, xmm7, xmm7
    vroundss xmm2, xmm7, xmm1, 1
    vmovss  xmm1, dword ptr [r14+4]
    vsubss  xmm0, xmm3, xmm2
    vmulss  xmm0, xmm0, cs:__real@43b40000
    vmovss  dword ptr [r14], xmm0
    vsubss  xmm2, xmm1, dword ptr [rdi+98h]
    vmulss  xmm4, xmm2, cs:__real@3b360b61
    vaddss  xmm3, xmm4, cs:__real@3f000000
    vroundss xmm2, xmm7, xmm3, 1
    vsubss  xmm0, xmm4, xmm2
    vmulss  xmm1, xmm0, cs:__real@43b40000
    vmovss  dword ptr [r14+4], xmm1
  }
  BG_ContextMount_ApplyWeaponMovement_Angles(_RDI, &(*outAnglesCategorized)[13], outCombinedAngles);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+7Ch]
    vmovss  dword ptr [rbx+60h], xmm0
  }
  *(_QWORD *)&(*outAnglesCategorized)[8].y = *(_QWORD *)&_RDI->recoilAngles.y;
  __asm
  {
    vmovss  xmm1, dword ptr [r14+4]
    vaddss  xmm0, xmm0, dword ptr [r14]
    vmovss  dword ptr [r14], xmm0
    vaddss  xmm2, xmm1, dword ptr [rbx+64h]
    vmovss  xmm0, dword ptr [r14+8]
    vmovss  dword ptr [r14+4], xmm2
    vaddss  xmm1, xmm0, dword ptr [rbx+68h]
    vmovss  dword ptr [r14+8], xmm1
  }
  BG_ApplyWeaponMovement_BobAngles(params, _RDI, &(*outAnglesCategorized)[3], outCombinedAngles);
  if ( doIdle )
  {
    ps = params->ps;
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1835, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    weaponMap = params->weaponMap;
    if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 1838, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    v69 = BG_UsingAlternate(ps);
    ViewmodelWeapon = BG_GetViewmodelWeapon(weaponMap, ps);
    BG_GetAdvancedIdleSettings(ps->perks, ViewmodelWeapon, v69, &outAdvancedIdleSettings);
    BG_CalculateWeaponMovement_IdleFactor(params, _RDI);
    if ( outAdvancedIdleSettings.useAdvancedIdleSettings )
    {
      BG_ComputeAndApplyWeaponMovement_IdleAngles(params, _RDI, &outAdvancedIdleSettings, WEAPON_ANGLE_TYPE_IDLE_ADVANCED_1, &(*outAnglesCategorized)[5], outCombinedAngles);
      BG_ComputeAndApplyWeaponMovement_IdleAngles(params, _RDI, &outAdvancedIdleSettings, WEAPON_ANGLE_TYPE_IDLE_ADVANCED_2, &(*outAnglesCategorized)[6], outCombinedAngles);
    }
    else
    {
      BG_ComputeAndApplyWeaponMovement_IdleAngles(params, _RDI, &outAdvancedIdleSettings, WEAPON_ANGLE_TYPE_IDLE, &(*outAnglesCategorized)[4], outCombinedAngles);
    }
  }
  BG_ComputeAndApplyWeaponMovement_DamageKickAngles(params, _RDI, &(*outAnglesCategorized)[12], outCombinedAngles);
  BG_ComputeAndApplyWeaponMovement_TiltAngles(params, _RDI, &(*outAnglesCategorized)[9], outCombinedAngles, outTiltOffset);
  BG_ComputeAndApplyWeaponMovement_MovementTiltAngles(params, _RDI, &(*outAnglesCategorized)[10], &(*outAnglesCategorized)[11], outCombinedAngles, outMovementTiltOffset);
  __asm { vmovaps xmm7, [rsp+168h+var_48] }
}

/*
==============
BG_SetWeaponMovementOrigin
==============
*/
void BG_SetWeaponMovementOrigin(const WeaponMovementParams *const params, const WeaponMovementState *const ws, const vec3_t (*weaponAnglesCategorized)[30], vec3_t *origin)
{
  int v10; 
  char v16; 
  char v17; 
  const playerState_s *ps; 
  const BgWeaponMap *weaponMap; 
  const Weapon *ViewmodelWeapon; 
  bool v53; 
  const WeaponDef *v54; 
  vec3_t v1; 
  tmat33_t<vec3_t> axis; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm { vmovaps xmmword ptr [r11-48h], xmm6 }
  v10 = 0;
  _RDI = origin;
  *(_QWORD *)origin->v = 0i64;
  origin->v[2] = 0.0;
  _RBX = ws;
  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 710, ASSERT_TYPE_ASSERT, "(params)", (const char *)&queryFormat, "params") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 711, ASSERT_TYPE_ASSERT, "(ws)", (const char *)&queryFormat, "ws") )
    __debugbreak();
  *(float *)&_XMM0 = BG_CalculateWeaponMovement_Base_AdsFrac(params);
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm0, xmm6
  }
  if ( !(v16 | v17) )
  {
    __asm
    {
      vmulss  xmm1, xmm0, dword ptr [rbx+64h]
      vaddss  xmm2, xmm1, dword ptr [rdi]
      vmovss  dword ptr [rdi], xmm2
      vmulss  xmm1, xmm0, dword ptr [rbx+68h]
      vaddss  xmm2, xmm1, dword ptr [rdi+4]
      vmovss  dword ptr [rdi+4], xmm2
      vmulss  xmm0, xmm0, dword ptr [rbx+6Ch]
      vaddss  xmm1, xmm0, dword ptr [rdi+8]
      vmovss  dword ptr [rdi+8], xmm1
    }
  }
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 736, ASSERT_TYPE_ASSERT, "(ws)", (const char *)&queryFormat, "ws") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vsubss  xmm1, xmm0, dword ptr [rbx+0A4h]
    vmovss  dword ptr [rdi+4], xmm1
    vmovss  xmm2, dword ptr [rbx+0A8h]
    vaddss  xmm0, xmm2, dword ptr [rdi+8]
    vmovss  dword ptr [rdi+8], xmm0
  }
  BG_ContextMount_ApplyWeaponMovement_Origin(params, _RBX, _RDI);
  __asm
  {
    vmovss  xmm2, cs:__real@358637bd; epsilon
    vmovss  [rsp+0E8h+v1], xmm6
    vmovss  [rsp+0E8h+var_B4], xmm6
    vmovss  [rsp+0E8h+var_B0], xmm6
  }
  if ( !VecNCompareCustomEpsilon(_RBX->bobAngles.v, v1.v, *(float *)&_XMM2, 3) )
  {
    __asm
    {
      vmovaps [rsp+0E8h+var_58], xmm7
      vmovss  xmm7, dword ptr [rdi]
      vmovaps [rsp+0E8h+var_68], xmm8
      vmovss  xmm8, dword ptr [rdi+4]
      vmovaps [rsp+0E8h+var_78], xmm9
      vmovss  xmm9, dword ptr [rdi+8]
    }
    AnglesToAxis(&_RBX->bobAngles, &axis);
    if ( &v1 == _RDI && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
      __debugbreak();
    __asm
    {
      vmulss  xmm3, xmm8, dword ptr [rsp+0E8h+axis+0Ch]
      vmulss  xmm2, xmm7, dword ptr [rsp+0E8h+axis]
      vmulss  xmm1, xmm9, dword ptr [rsp+0E8h+axis+18h]
      vaddss  xmm4, xmm3, xmm2
      vmulss  xmm3, xmm8, dword ptr [rsp+0E8h+axis+10h]
      vaddss  xmm2, xmm4, xmm1
      vmulss  xmm1, xmm9, dword ptr [rsp+0E8h+axis+1Ch]
      vmovss  dword ptr [rdi], xmm2
      vmulss  xmm2, xmm7, dword ptr [rsp+0E8h+axis+4]
      vaddss  xmm4, xmm3, xmm2
      vmulss  xmm3, xmm8, dword ptr [rsp+0E8h+axis+14h]
      vmovaps xmm8, [rsp+0E8h+var_68]
      vaddss  xmm2, xmm4, xmm1
      vmulss  xmm1, xmm9, dword ptr [rsp+0E8h+axis+20h]
      vmovaps xmm9, [rsp+0E8h+var_78]
      vmovss  dword ptr [rdi+4], xmm2
      vmulss  xmm2, xmm7, dword ptr [rsp+0E8h+axis+8]
      vmovaps xmm7, [rsp+0E8h+var_58]
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm2, xmm4, xmm1
      vmovss  dword ptr [rdi+8], xmm2
    }
  }
  BG_ApplyWeaponMovement_AdvancedIdle(params, _RBX, weaponAnglesCategorized, _RDI);
  if ( !weaponAnglesCategorized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 954, ASSERT_TYPE_ASSERT, "(weaponAnglesCategorized)", (const char *)&queryFormat, "weaponAnglesCategorized") )
    __debugbreak();
  ps = params->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 957, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  weaponMap = params->weaponMap;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 960, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  ViewmodelWeapon = BG_GetViewmodelWeapon(weaponMap, ps);
  v53 = BG_UsingAlternate(ps);
  v54 = BG_WeaponDef(ViewmodelWeapon, v53);
  if ( !v54 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 966, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  if ( v54->numWeaponOffsetPatterns > 0 )
  {
    _RBX = 0i64;
    do
    {
      _RAX = v54->weaponOffsetPatterns;
      if ( _RAX[_RBX].transformType == WOTT_WEAPON_ANGLES )
      {
        __asm
        {
          vmovss  xmm1, dword ptr [rbx+rax+2Ch]; rotationOffsetForward
          vucomiss xmm1, xmm6
        }
        if ( _RAX[_RBX].transformType != WOTT_WEAPON_ANGLES )
        {
          BG_GetNewOriginForRotationWithOffset(&(*weaponAnglesCategorized)[v10 + 18], *(double *)&_XMM1, &v1);
          __asm
          {
            vmovss  xmm0, [rsp+0E8h+v1]
            vaddss  xmm1, xmm0, dword ptr [rdi]
            vmovss  xmm2, [rsp+0E8h+var_B4]
            vaddss  xmm0, xmm2, dword ptr [rdi+4]
            vmovss  dword ptr [rdi], xmm1
            vmovss  xmm1, [rsp+0E8h+var_B0]
            vaddss  xmm2, xmm1, dword ptr [rdi+8]
            vmovss  dword ptr [rdi+8], xmm2
            vmovss  dword ptr [rdi+4], xmm0
          }
        }
      }
      ++v10;
      ++_RBX;
    }
    while ( v10 < v54->numWeaponOffsetPatterns );
  }
  __asm { vmovaps xmm6, [rsp+0E8h+var_48] }
}

/*
==============
BG_ShouldAdvancedIdleMotionAdjustViewAngles
==============
*/
bool BG_ShouldAdvancedIdleMotionAdjustViewAngles(const playerState_s *ps, const BgWeaponMap *weaponMap, const AdvancedIdleSettings *advancedIdleSettings, const unsigned int idleSwayIndex, float *outUseWeaponPosFrac, vec3_t *outTargetScale, vec3_t *outTimeScale, int *outIdleCycle)
{
  bool v17; 
  bool v20; 
  bool v34; 
  int adsStartTime; 
  int weaponIdleTime2; 
  int v37; 
  char v38; 
  __int64 idleSwayIndexa; 
  Weapon r_weapon; 

  _RSI = outTargetScale;
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
  _RAX = BG_GetViewmodelWeapon(weaponMap, ps);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+0D8h+r_weapon.weaponIdx], ymm0
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rsp+0D8h+r_weapon.attachmentVariationIndices+5], xmm1
    vmovsd  xmm0, qword ptr [rax+30h]
    vmovsd  qword ptr [rsp+0D8h+r_weapon.attachmentVariationIndices+15h], xmm0
  }
  *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
  v17 = BG_UsingAlternate(ps);
  _ECX = advancedIdleSettings->useRandomPointsAlgorithm;
  _EDX = 0;
  v20 = v17;
  _RAX = outTimeScale;
  __asm
  {
    vmovss  xmm2, cs:__real@3a83126f
    vmovss  xmm4, cs:__real@3f800000
    vmovd   xmm0, ecx
    vmovd   xmm1, edx
    vpcmpeqd xmm3, xmm0, xmm1
    vblendvps xmm0, xmm4, xmm2, xmm3
    vmovss  [rsp+0D8h+var_98], xmm0
    vmovd   xmm0, ecx
    vmovd   xmm1, edx
    vpcmpeqd xmm2, xmm0, xmm1
    vmovss  xmm1, cs:__real@3a378034
    vblendvps xmm0, xmm4, xmm1, xmm2
    vmovss  xmm1, [rsp+0D8h+var_98]
    vmovss  dword ptr [rax+4], xmm0
    vmovss  dword ptr [rax], xmm1
  }
  outTimeScale->v[2] = 0.0;
  *outUseWeaponPosFrac = 1.0;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 453, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v34 = BG_UsesContinousAdsIdleTransiton(&r_weapon, v20);
  adsStartTime = 0;
  if ( !v34 )
    adsStartTime = ps->weapCommon.adsStartTime;
  if ( idleSwayIndex )
    weaponIdleTime2 = ps->weapCommon.weaponIdleTime2;
  else
    weaponIdleTime2 = ps->weapCommon.weaponIdleTime;
  v37 = weaponIdleTime2 - adsStartTime;
  if ( v37 < 0 )
    v37 = 0;
  *outIdleCycle = v37;
  BG_GetAdvancedIdleTargetScale(ps, weaponMap, &r_weapon, v20, advancedIdleSettings, idleSwayIndex, 1, outTargetScale);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm0, dword ptr [rsi]
  }
  if ( !v38 )
    return 1;
  __asm { vucomiss xmm0, dword ptr [rsi+4] }
  return !v38;
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
  bool v17; 
  bool v18; 
  int adsStartTime; 
  int v20; 
  bool result; 
  bool outIsAlternate; 
  Weapon r_weapon; 

  __asm { vmovaps [rsp+0D8h+var_58], xmm6 }
  _RBP = outTargetScale;
  _R14 = outUseWeaponPosFrac;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2180, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2181, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2183, ASSERT_TYPE_ASSERT, "(outUseWeaponPosFrac)", (const char *)&queryFormat, "outUseWeaponPosFrac") )
    __debugbreak();
  if ( !outIdleCycle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 2184, ASSERT_TYPE_ASSERT, "(outIdleCycle)", (const char *)&queryFormat, "outIdleCycle") )
    __debugbreak();
  _RAX = BG_GetViewmodelOrOffhandADSSupportWeapon(weaponMap, ps, &outIsAlternate);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+0D8h+r_weapon.weaponIdx], ymm0
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rsp+0D8h+r_weapon.attachmentVariationIndices+5], xmm1
    vmovsd  xmm0, qword ptr [rax+30h]
    vmovsd  qword ptr [rsp+0D8h+r_weapon.attachmentVariationIndices+15h], xmm0
  }
  *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
  *(double *)&_XMM0 = BG_GetWeaponOrOffhandAdsFrac(weaponMap, ps);
  __asm { vmovaps xmm6, xmm0 }
  if ( BG_GetOverlayReticle(ps, &r_weapon, outIsAlternate) )
  {
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vucomiss xmm6, xmm1
    }
    *(float *)&_XMM0 = BG_GetIdleTargScale(weaponMap, ps);
    v17 = outIsAlternate;
    __asm
    {
      vmovss  dword ptr [rbp+8], xmm0
      vmovss  dword ptr [rbp+4], xmm0
      vmovss  dword ptr [rbp+0], xmm0
      vmovss  dword ptr [r14], xmm6
    }
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_view.cpp", 453, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    v18 = !BG_UsesContinousAdsIdleTransiton(&r_weapon, v17);
    adsStartTime = 0;
    if ( v18 )
      adsStartTime = ps->weapCommon.adsStartTime;
    v20 = ps->weapCommon.weaponIdleTime - adsStartTime;
    result = 1;
    if ( v20 < 0 )
      v20 = 0;
    *outIdleCycle = v20;
    outTimeScale->v[1] = 0.00069999998;
    outTimeScale->v[0] = 0.001;
    outTimeScale->v[2] = 0.0;
  }
  else
  {
    result = 0;
  }
  __asm { vmovaps xmm6, [rsp+0D8h+var_58] }
  return result;
}

