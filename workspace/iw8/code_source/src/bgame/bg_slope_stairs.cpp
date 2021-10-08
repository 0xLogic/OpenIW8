/*
==============
BG_SlopeWorldmodel_GetBSCoord
==============
*/

void __fastcall BG_SlopeWorldmodel_GetBSCoord(const float legsYaw, const vec3_t *groundNormal, float *outForwardSlope, float *outRightSlope)
{
  ?BG_SlopeWorldmodel_GetBSCoord@@YAXMAEBTvec3_t@@AEAM1@Z(legsYaw, groundNormal, outForwardSlope, outRightSlope);
}

/*
==============
PM_Slope_GetBobCycleScale
==============
*/

void __fastcall PM_Slope_GetBobCycleScale(const pmove_t *pm, float *outStairsAscentRatio, float *outFrequencyScale, float *outAmplitudeScale)
{
  ?PM_Slope_GetBobCycleScale@@YAXPEBVpmove_t@@PEAM11@Z(pm, outStairsAscentRatio, outFrequencyScale, outAmplitudeScale);
}

/*
==============
BG_SlopeWorldmodel_Pack
==============
*/

void __fastcall BG_SlopeWorldmodel_Pack(const vec3_t *slopeNormal, unsigned __int16 *slopePacked)
{
  ?BG_SlopeWorldmodel_Pack@@YAXAEBTvec3_t@@AEAG@Z(slopeNormal, slopePacked);
}

/*
==============
BG_SlopeWorldmodel_Unpack
==============
*/

void __fastcall BG_SlopeWorldmodel_Unpack(const unsigned __int16 *slopePacked, vec3_t *outSlopeNormal)
{
  ?BG_SlopeWorldmodel_Unpack@@YAXAEBGAEATvec3_t@@@Z(slopePacked, outSlopeNormal);
}

/*
==============
PM_SlopeWorldmodel_Update
==============
*/

void __fastcall PM_SlopeWorldmodel_Update(const pmove_t *pm, pml_t *pml)
{
  ?PM_SlopeWorldmodel_Update@@YAXPEBVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
PM_Slope_GetSpeedScale
==============
*/

double __fastcall PM_Slope_GetSpeedScale(const vec3_t *wishDir, const pmove_t *pm)
{
  double result; 

  *(float *)&result = ?PM_Slope_GetSpeedScale@@YAMAEBTvec3_t@@PEBVpmove_t@@@Z(wishDir, pm);
  return result;
}

/*
==============
BG_Slope_CalcProperties
==============
*/

void __fastcall BG_Slope_CalcProperties(const vec3_t *wishDir, const bool isOnSlope, const bool isOnStairs, const vec3_t *entityUp, const vec3_t *groundNormal, float *outAscentRatio, float *outSteepnessRatio)
{
  ?BG_Slope_CalcProperties@@YAXAEBTvec3_t@@_N100PEAM2@Z(wishDir, isOnSlope, isOnStairs, entityUp, groundNormal, outAscentRatio, outSteepnessRatio);
}

/*
==============
BG_SlopeWorldmodel_GetZAdjustment
==============
*/

double __fastcall BG_SlopeWorldmodel_GetZAdjustment(const int suitIndex, const vec3_t *slopeNormal)
{
  double result; 

  *(float *)&result = ?BG_SlopeWorldmodel_GetZAdjustment@@YAMHAEBTvec3_t@@@Z(suitIndex, slopeNormal);
  return result;
}

/*
==============
BG_SlopeWorldmodel_GetBSCoord
==============
*/
void BG_SlopeWorldmodel_GetBSCoord(const float legsYaw, const vec3_t *groundNormal, float *outForwardSlope, float *outRightSlope)
{
  tmat33_t<vec3_t> out; 
  char v24; 
  tmat33_t<vec3_t> axis; 

  __asm { vmovaps [rsp+0C8h+var_28], xmm6 }
  _RBX = (char *)groundNormal;
  _RSI = outRightSlope;
  _RDI = outForwardSlope;
  YawToAxis(legsYaw, &axis);
  MatrixTranspose(&axis, &out);
  if ( _RBX == &v24 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
    __debugbreak();
  __asm
  {
    vmovss  xmm5, dword ptr [rbx+4]
    vmovss  xmm3, dword ptr [rbx]
    vmovss  xmm6, dword ptr [rbx+8]
    vmulss  xmm1, xmm3, dword ptr [rsp+0C8h+out+4]
    vmulss  xmm0, xmm5, dword ptr [rsp+0C8h+out+10h]
    vmulss  xmm3, xmm3, dword ptr [rsp+0C8h+out]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, dword ptr [rsp+0C8h+out+1Ch]
    vmulss  xmm0, xmm5, dword ptr [rsp+0C8h+out+0Ch]
    vaddss  xmm4, xmm2, xmm1
    vmulss  xmm1, xmm6, dword ptr [rsp+0C8h+out+18h]
    vaddss  xmm2, xmm3, xmm0
    vaddss  xmm2, xmm2, xmm1
    vxorps  xmm0, xmm2, cs:__xmm@80000000800000008000000080000000
    vmovss  dword ptr [rdi], xmm0
    vmovss  dword ptr [rsi], xmm4
    vmovaps xmm6, [rsp+0C8h+var_28]
  }
}

/*
==============
BG_SlopeWorldmodel_GetZAdjustment
==============
*/
double BG_SlopeWorldmodel_GetZAdjustment(const int suitIndex, const vec3_t *slopeNormal)
{
  char v19; 

  if ( BG_GetSuitDef(suitIndex) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr cs:worldUp_2+4
      vmulss  xmm3, xmm0, dword ptr [rdi+4]
      vmovss  xmm1, dword ptr cs:worldUp_2
      vmulss  xmm2, xmm1, dword ptr [rdi]
      vmovss  xmm0, dword ptr cs:worldUp_2+8
      vmulss  xmm1, xmm0, dword ptr [rdi+8]
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm0, xmm4, xmm1; val
      vmovss  xmm1, cs:__real@bf800000; min
      vmovaps [rsp+58h+var_18], xmm6
      vmovss  xmm6, cs:__real@3f800000
      vmovaps xmm2, xmm6; max
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vandps  xmm1, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcvtss2sd xmm1, xmm1, xmm1
      vcomisd xmm1, cs:__real@3eb0c6f7a0b5ed8d
      vmovaps xmm3, xmm0
    }
    if ( v19 )
    {
      __asm { vxorps  xmm6, xmm6, xmm6 }
    }
    else
    {
      __asm
      {
        vmulss  xmm0, xmm3, xmm3
        vsubss  xmm0, xmm6, xmm0
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, dword ptr [rbx+220h]
        vsqrtss xmm2, xmm0, xmm0
        vmulss  xmm2, xmm2, xmm1
        vdivss  xmm6, xmm2, xmm3
      }
    }
    _RBX = DCONST_DVARFLT_bg_slope_max_offset;
    if ( !DCONST_DVARFLT_bg_slope_max_offset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_slope_max_offset") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm2, dword ptr [rbx+28h]; max
      vxorps  xmm1, xmm2, cs:__xmm@80000000800000008000000080000000; min
      vxorps  xmm0, xmm6, cs:__xmm@80000000800000008000000080000000; val
      vmovaps xmm6, [rsp+58h+var_18]
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  return *(double *)&_XMM0;
}

/*
==============
BG_SlopeWorldmodel_Pack
==============
*/
void BG_SlopeWorldmodel_Pack(const vec3_t *slopeNormal, unsigned __int16 *slopePacked)
{
  int v25; 
  char v26; 
  int v29; 
  __int64 v31; 
  vec3_t angles; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm7
    vmovss  xmm0, dword ptr [rcx]
    vmovss  xmm2, dword ptr [rcx+4]
    vmovss  xmm3, dword ptr [rcx+8]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vcvtss2sd xmm0, xmm2, xmm2
    vcomisd xmm0, cs:__real@3d719799812dea11
    vxorps  xmm7, xmm7, xmm7
  }
  if ( (unsigned __int64)&v31 != _security_cookie )
  {
    vectoangles(slopeNormal, &angles);
    __asm { vmovss  xmm0, dword ptr [rsp+58h+angles] }
  }
  else
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  dword ptr [rsp+58h+angles], xmm0
      vmovss  dword ptr [rsp+58h+angles+4], xmm7
      vmovss  dword ptr [rsp+58h+angles+8], xmm7
    }
  }
  __asm
  {
    vmulss  xmm5, xmm0, cs:__real@3b360b61
    vaddss  xmm3, xmm5, cs:__real@3f000000
    vxorps  xmm2, xmm2, xmm2
    vroundss xmm4, xmm2, xmm3, 1
    vmovss  xmm2, cs:s_maxWalkablePitchValue; max
    vsubss  xmm0, xmm5, xmm4
    vmulss  xmm0, xmm0, cs:__real@43b40000
    vaddss  xmm0, xmm0, cs:__real@42b40000; val
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovss  xmm1, cs:s_maxWalkablePitchValue; maxAbsValueSize }
  *slopePacked = 0;
  v25 = MSG_PackUnsignedFloat(*(float *)&_XMM0, *(float *)&_XMM1, 5u);
  v26 = truncate_cast<unsigned short,int>(v25);
  __asm
  {
    vmovss  xmm1, cs:__real@43b40000; maxAbsValueSize
    vmovss  xmm0, dword ptr [rsp+58h+angles+4]; value
  }
  *slopePacked = (*slopePacked | v26 & 0x1F) << 6;
  v29 = MSG_PackUnsignedFloat(*(float *)&_XMM0, *(float *)&_XMM1, 6u);
  *slopePacked |= truncate_cast<unsigned short,int>(v29) & 0x3F;
  __asm { vmovaps xmm7, [rsp+58h+var_18] }
}

/*
==============
BG_SlopeWorldmodel_Unpack
==============
*/
void BG_SlopeWorldmodel_Unpack(const unsigned __int16 *slopePacked, vec3_t *outSlopeNormal)
{
  unsigned int v4; 
  char v21; 
  double v28; 
  double v29; 
  double v30; 
  double v31; 
  vec3_t angles; 

  __asm { vmovaps [rsp+88h+var_18], xmm6 }
  v4 = *slopePacked;
  __asm { vmovss  xmm1, cs:__real@43b40000; maxAbsValueSize }
  _RDI = outSlopeNormal;
  *(double *)&_XMM0 = MSG_UnpackUnsignedFloat(*slopePacked & 0x3F, *(float *)&_XMM1, 6u);
  __asm
  {
    vmovss  xmm1, cs:s_maxWalkablePitchValue; maxAbsValueSize
    vmovaps xmm6, xmm0
  }
  *(double *)&_XMM0 = MSG_UnpackUnsignedFloat((v4 >> 6) & 0x1F, *(float *)&_XMM1, 5u);
  __asm
  {
    vsubss  xmm0, xmm0, cs:__real@42b40000
    vxorps  xmm1, xmm1, xmm1
    vmovss  dword ptr [rsp+88h+angles+8], xmm1
    vmovss  dword ptr [rsp+88h+angles], xmm0
    vmovss  dword ptr [rsp+88h+angles+4], xmm6
  }
  AngleVectors(&angles, _RDI, NULL, NULL);
  __asm
  {
    vmovss  xmm3, dword ptr [rdi+4]
    vmovss  xmm4, dword ptr [rdi]
    vmovss  xmm5, dword ptr [rdi+8]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm1, xmm2, xmm1
    vsubss  xmm0, xmm1, cs:__real@3f800000
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3b03126f
  }
  if ( !v21 )
  {
    __asm
    {
      vsqrtss xmm0, xmm1, xmm1
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+88h+var_48], xmm1
      vcvtss2sd xmm2, xmm5, xmm5
      vmovsd  [rsp+88h+var_50], xmm2
      vcvtss2sd xmm3, xmm3, xmm3
      vmovsd  [rsp+88h+var_58], xmm3
      vcvtss2sd xmm0, xmm4, xmm4
      vmovsd  [rsp+88h+var_60], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 459, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( outSlopeNormal ) )", "(%g, %g, %g) len %g", v28, v29, v30, v31) )
      __debugbreak();
  }
  __asm { vmovaps xmm6, [rsp+88h+var_18] }
}

/*
==============
BG_Slope_CalcProperties
==============
*/
void BG_Slope_CalcProperties(const vec3_t *wishDir, const bool isOnSlope, const bool isOnStairs, const vec3_t *entityUp, const vec3_t *groundNormal, float *outAscentRatio, float *outSteepnessRatio)
{
  double v65; 
  double v66; 
  double v67; 
  double v68; 
  double v69; 
  double v70; 
  double v71; 
  double v72; 
  char v75; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-0A8h], xmm11
    vmovss  xmm3, dword ptr [r9+4]
    vmovss  xmm4, dword ptr [r9]
    vmovss  xmm5, dword ptr [r9+8]
    vmovss  xmm7, cs:__real@3f800000
    vmovss  xmm11, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm8, cs:__real@3b03126f
  }
  _RBX = groundNormal;
  __asm
  {
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm1, xmm2, xmm1
    vsubss  xmm0, xmm1, xmm7
    vandps  xmm0, xmm0, xmm11
    vcomiss xmm0, xmm8
    vsqrtss xmm0, xmm1, xmm1
    vcvtss2sd xmm1, xmm0, xmm0
    vmovsd  [rsp+168h+var_128], xmm1
    vcvtss2sd xmm2, xmm5, xmm5
    vmovsd  [rsp+168h+var_130], xmm2
    vcvtss2sd xmm3, xmm3, xmm3
    vmovsd  [rsp+168h+var_138], xmm3
    vcvtss2sd xmm0, xmm4, xmm4
    vmovsd  [rsp+168h+var_140], xmm0
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 16, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( entityUp ) )", "(%g, %g, %g) len %g", v65, v67, v69, v71) )
    __debugbreak();
  __asm
  {
    vmovss  xmm3, dword ptr [rbx+4]
    vmovss  xmm4, dword ptr [rbx]
    vmovss  xmm5, dword ptr [rbx+8]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm1, xmm2, xmm1
    vsubss  xmm0, xmm1, xmm7
    vandps  xmm0, xmm0, xmm11
    vcomiss xmm0, xmm8
    vsqrtss xmm0, xmm1, xmm1
    vcvtss2sd xmm1, xmm0, xmm0
    vmovsd  [rsp+168h+var_128], xmm1
    vcvtss2sd xmm2, xmm5, xmm5
    vmovsd  [rsp+168h+var_130], xmm2
    vcvtss2sd xmm3, xmm3, xmm3
    vmovsd  [rsp+168h+var_138], xmm3
    vcvtss2sd xmm0, xmm4, xmm4
    vmovsd  [rsp+168h+var_140], xmm0
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 17, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( groundNormal ) )", "(%g, %g, %g) len %g", v66, v68, v70, v72) )
    __debugbreak();
  if ( !outAscentRatio && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 18, ASSERT_TYPE_ASSERT, "(outAscentRatio)", (const char *)&queryFormat, "outAscentRatio") )
    __debugbreak();
  if ( !outSteepnessRatio && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 19, ASSERT_TYPE_ASSERT, "(outSteepnessRatio)", (const char *)&queryFormat, "outSteepnessRatio") )
    __debugbreak();
  *outAscentRatio = 0.0;
  *outSteepnessRatio = 0.0;
  if ( isOnSlope || isOnStairs )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vmovss  xmm1, dword ptr [rbx+4]
      vmulss  xmm2, xmm1, dword ptr [rbp+4]
      vmulss  xmm3, xmm0, dword ptr [rbp+0]
      vmovss  xmm0, dword ptr [rbx+8]
      vmulss  xmm1, xmm0, dword ptr [rbp+8]
      vaddss  xmm4, xmm3, xmm2
      vmovaps [rsp+168h+var_B8], xmm12
      vaddss  xmm12, xmm4, xmm1
      vmovaps [rsp+168h+var_D8], xmm14
      vmovss  xmm14, cs:__real@3f7fbe77
      vandps  xmm2, xmm12, xmm11
      vcomiss xmm2, xmm14
      vmovaps xmm12, [rsp+168h+var_B8]
      vmovaps xmm14, [rsp+168h+var_D8]
    }
  }
  _R11 = &v75;
  __asm
  {
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm11, xmmword ptr [r11-68h]
  }
}

/*
==============
PM_SlopeWorldmodel_Update
==============
*/
void PM_SlopeWorldmodel_Update(const pmove_t *pm, pml_t *pml)
{
  bool v15; 
  bool v16; 
  bool v17; 
  bool v21; 
  bool v48; 
  char v66; 
  const dvar_t *v108; 
  const BgHandler *m_bgHandler; 
  int v142; 
  unsigned __int16 v143; 
  unsigned __int16 v145; 
  int v147; 
  char v148; 
  unsigned int v149; 
  const BgHandler *v170; 
  double v182; 
  double v183; 
  double v184; 
  double v185; 
  double v186; 
  double v187; 
  double v188; 
  double v189; 
  double v190; 
  double v191; 
  double v192; 
  double v193; 
  __int128 v194; 
  vec3_t forward; 
  int v196; 
  void *retaddr; 

  _R11 = &retaddr;
  _RBX = pml;
  if ( pm->groundPersistent )
  {
    _R14 = pm->ps;
    __asm
    {
      vmovaps xmmword ptr [r11-68h], xmm8
      vmovaps xmmword ptr [r11-88h], xmm10
      vmovaps xmmword ptr [r11-98h], xmm11
      vmovaps xmmword ptr [r11-0A8h], xmm12
      vmovaps xmmword ptr [r11-0B8h], xmm13
      vmovaps xmmword ptr [r11-0C8h], xmm14
    }
    if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 287, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( _RBX->ranSlopeUpdate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 288, ASSERT_TYPE_ASSERT, "(!pml->ranSlopeUpdate)", (const char *)&queryFormat, "!pml->ranSlopeUpdate") )
      __debugbreak();
    _RBX->ranSlopeUpdate = 1;
    v15 = PM_IsInAir(pm);
    v16 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_R14->pm_flags, ACTIVE, 6u);
    if ( !pm->ground && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 294, ASSERT_TYPE_ASSERT, "( pm->ground ) != ( nullptr )", "%s != %s\n\t%p, %p", "pm->ground", "nullptr", NULL, NULL) )
      __debugbreak();
    v17 = v15 || v16 || !pm->ground->groundPlane;
    __asm
    {
      vmovss  xmm10, dword ptr cs:worldUp_1
      vmovss  xmm11, dword ptr cs:worldUp_1+4
      vmovss  xmm12, dword ptr cs:worldUp_1+8
    }
    v21 = !v17;
    if ( !v17 )
    {
      _RAX = pm->ground;
      __asm
      {
        vmovss  xmm10, dword ptr [rax+10h]
        vmovss  xmm11, dword ptr [rax+14h]
        vmovss  xmm12, dword ptr [rax+18h]
      }
    }
    _RAX = pm->groundPersistent;
    __asm
    {
      vmovss  xmm14, cs:__real@3f800000
      vmovss  xmm13, cs:__real@3b03126f
      vmovaps [rsp+150h+var_48+8], xmm6
      vmovss  xmm4, dword ptr [rax+4]
      vmovss  xmm3, dword ptr [rax]
      vmovss  xmm5, dword ptr [rax+8]
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm1, xmm2, xmm1
      vsqrtss xmm2, xmm1, xmm1
      vcomiss xmm2, cs:__real@3f7fbe77
      vmovaps [rsp+150h+var_58+8], xmm7
      vxorps  xmm8, xmm8, xmm8
      vmovss  xmm0, dword ptr [rbx+24h]
      vmovaps [rsp+150h+var_78+8], xmm9
      vmovsd  xmm9, cs:__real@3eb0c6f7a0b5ed8d
      vcvtss2sd xmm0, xmm0, xmm0
      vcomisd xmm0, xmm9
    }
    if ( !v21 )
    {
      __asm
      {
        vsubss  xmm0, xmm1, xmm14
        vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vcomiss xmm0, xmm13
        vcvtss2sd xmm0, xmm2, xmm2
        vmovsd  qword ptr [rsp+40h], xmm0
        vcvtss2sd xmm1, xmm5, xmm5
        vmovsd  [rsp+150h+var_118], xmm1
        vcvtss2sd xmm2, xmm4, xmm4
        vmovsd  [rsp+150h+var_120], xmm2
        vcvtss2sd xmm3, xmm3, xmm3
        vmovsd  [rsp+150h+var_128], xmm3
      }
      v48 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 315, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( pm->groundPersistent->smoothedNormal ) )", "(%g, %g, %g) len %g", v182, v184, v186, v190);
      if ( v48 )
        __debugbreak();
      __asm
      {
        vmovss  xmm0, dword ptr [r14+30h]
        vsubss  xmm3, xmm0, dword ptr [rbx+40h]
        vmovss  xmm1, dword ptr [r14+34h]
        vsubss  xmm2, xmm1, dword ptr [rbx+44h]
        vmovss  xmm0, dword ptr [r14+38h]
        vsubss  xmm4, xmm0, dword ptr [rbx+48h]
        vmovsd  xmm13, cs:__real@3eb0c6f7a0000000
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm3, xmm2, xmm1
        vmovss  xmm1, dword ptr [rbx+24h]
        vmulss  xmm0, xmm4, xmm4
        vcvtss2sd xmm1, xmm1, xmm1
        vcomisd xmm1, xmm9
        vaddss  xmm2, xmm3, xmm0
        vsqrtss xmm6, xmm2, xmm2
      }
      if ( !v48 )
      {
        __asm
        {
          vmovsd  qword ptr [rsp+40h], xmm1
          vmovsd  [rsp+150h+var_118], xmm13
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 318, ASSERT_TYPE_ASSERT, "( 1.0E-6 ) < ( pml->frametime )", "%s < %s\n\t%g, %g", "ZERO_EPSILON", "pml->frametime", v187, v191) )
          __debugbreak();
      }
      _RDI = DCONST_DVARFLT_bg_slope_blend_movespeed_min_threshold;
      __asm { vdivss  xmm6, xmm6, dword ptr [rbx+24h] }
      if ( !DCONST_DVARFLT_bg_slope_blend_movespeed_min_threshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_slope_blend_movespeed_min_threshold") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm { vcomiss xmm6, dword ptr [rdi+28h] }
      if ( v66 )
      {
        __asm { vmovss  xmm13, cs:__real@3b03126f }
      }
      else
      {
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_slope_blend_movespeed_min, "bg_slope_blend_movespeed_min");
        __asm { vmovaps xmm7, xmm0 }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_slope_blend_movespeed_max, "bg_slope_blend_movespeed_max");
        __asm
        {
          vsubss  xmm1, xmm0, xmm7
          vcomiss xmm1, xmm8
        }
        if ( v66 | v21 )
        {
          __asm { vxorps  xmm7, xmm7, xmm7 }
        }
        else
        {
          __asm
          {
            vsubss  xmm0, xmm6, xmm7
            vdivss  xmm7, xmm0, xmm1
          }
        }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_slope_blend_time_min, "bg_slope_blend_time_min");
        __asm { vmovaps xmm6, xmm0 }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_slope_blend_time_max, "bg_slope_blend_time_max");
        __asm
        {
          vsubss  xmm1, xmm14, xmm7
          vmulss  xmm2, xmm0, xmm1
          vmovss  xmm1, dword ptr [rbx+24h]
          vcvtss2sd xmm1, xmm1, xmm1
          vcomisd xmm1, xmm9
          vmulss  xmm0, xmm6, xmm7
          vaddss  xmm6, xmm2, xmm0
        }
        if ( v66 | v21 )
        {
          __asm
          {
            vmovsd  qword ptr [rsp+40h], xmm1
            vmovsd  [rsp+150h+var_118], xmm13
          }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 334, ASSERT_TYPE_ASSERT, "( 1.0E-6 ) < ( pml->frametime )", "%s < %s\n\t%g, %g", "ZERO_EPSILON", "pml->frametime", v188, v192) )
            __debugbreak();
        }
        __asm
        {
          vdivss  xmm5, xmm6, dword ptr [rbx+24h]
          vmovss  xmm13, cs:__real@3b03126f
        }
        HIDWORD(v194) = 0;
        __asm { vmovups xmm4, [rsp+150h+var_100] }
        _RAX = pm->groundPersistent;
        __asm
        {
          vshufps xmm5, xmm5, xmm5, 0
          vrcpps  xmm1, xmm5
          vmovss  xmm4, xmm4, xmm10
          vmovss  xmm0, dword ptr [rax]
          vinsertps xmm4, xmm4, xmm11, 10h
          vinsertps xmm4, xmm4, xmm12, 20h ; ' '
          vmovups [rsp+150h+var_100], xmm4
        }
        HIDWORD(v194) = 0;
        __asm
        {
          vmovups xmm3, [rsp+150h+var_100]
          vmovss  xmm3, xmm3, xmm0
          vinsertps xmm3, xmm3, dword ptr [rax+4], 10h
          vinsertps xmm3, xmm3, dword ptr [rax+8], 20h ; ' '
          vmulps  xmm0, xmm1, xmm3
          vsubps  xmm2, xmm3, xmm0
          vcmpleps xmm0, xmm5, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
          vmulps  xmm1, xmm4, xmm1
          vmovups [rsp+150h+var_100], xmm3
          vaddps  xmm3, xmm1, xmm2
          vblendvps xmm5, xmm3, xmm4, xmm0
          vmulps  xmm2, xmm5, xmm5
          vhaddps xmm0, xmm2, xmm2
          vhaddps xmm0, xmm0, xmm0
          vsqrtps xmm1, xmm0
          vcvtss2sd xmm1, xmm1, xmm1
          vcomisd xmm1, xmm9
          vinsertps xmm0, xmm2, xmm2, 8
          vhaddps xmm1, xmm0, xmm0
          vhaddps xmm0, xmm1, xmm1
          vsqrtps xmm1, xmm0
          vdivps  xmm2, xmm5, xmm1
          vmovss  dword ptr [rax], xmm2
          vextractps dword ptr [rax+4], xmm2, 1
          vextractps dword ptr [rax+8], xmm2, 2
        }
      }
    }
    __asm { vmovaps xmm9, [rsp+150h+var_78+8] }
    v108 = DCONST_DVARINT_bg_slope_debug;
    __asm
    {
      vmovaps xmm12, [rsp+150h+var_A8+8]
      vmovaps xmm11, [rsp+150h+var_98+8]
      vmovaps xmm10, [rsp+150h+var_88+8]
    }
    if ( !DCONST_DVARINT_bg_slope_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_slope_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v108);
    if ( v108->current.integer == _R14->clientNum && !pm->isExtrapolation && !pm->m_bgHandler->IsClient((BgHandler *)pm->m_bgHandler) )
    {
      __asm { vmovss  xmm2, cs:length }
      m_bgHandler = pm->m_bgHandler;
      __asm
      {
        vmulss  xmm0, xmm2, dword ptr [rax]
        vaddss  xmm1, xmm0, dword ptr [r14+30h]
        vmovss  [rsp+150h+var_E0], xmm1
        vmulss  xmm0, xmm2, dword ptr [rax+4]
        vaddss  xmm1, xmm0, dword ptr [r14+34h]
        vmovss  [rsp+150h+anonymous_0], xmm1
        vmulss  xmm0, xmm2, dword ptr [rax+8]
        vaddss  xmm1, xmm0, dword ptr [r14+38h]
        vmovss  [rsp+150h+anonymous_1], xmm1
      }
      ((void (__fastcall *)(const BgHandler *, vec3_t *, int *))m_bgHandler->DebugLineAll)(m_bgHandler, &_R14->origin, &v196);
      _RCX = pm->groundPersistent;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx]
        vmovss  xmm2, dword ptr [rcx+4]
        vmovss  xmm3, dword ptr [rcx+8]
        vmulss  xmm1, xmm0, xmm0
        vmulss  xmm0, xmm2, xmm2
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm2, xmm2, xmm1
        vcvtss2sd xmm0, xmm2, xmm2
        vcomisd xmm0, cs:__real@3d719799812dea11
      }
      if ( v66 | v21 )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vmovss  dword ptr [rsp+150h+var_100], xmm0
          vmovss  dword ptr [rsp+150h+var_100+4], xmm8
          vmovss  dword ptr [rsp+150h+var_100+8], xmm8
        }
      }
      else
      {
        vectoangles(&_RCX->smoothedNormal, (vec3_t *)&v194);
        __asm { vmovss  xmm0, dword ptr [rsp+150h+var_100] }
      }
      __asm
      {
        vmulss  xmm4, xmm0, cs:__real@3b360b61
        vaddss  xmm2, xmm4, cs:__real@3f000000
        vmovss  xmm6, cs:__real@43b40000
        vxorps  xmm1, xmm1, xmm1
        vroundss xmm3, xmm1, xmm2, 1
        vmovss  xmm2, cs:s_maxWalkablePitchValue; max
        vsubss  xmm0, xmm4, xmm3
        vmulss  xmm1, xmm0, xmm6
        vaddss  xmm0, xmm1, cs:__real@42b40000; val
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovss  xmm1, cs:s_maxWalkablePitchValue; maxAbsValueSize }
      v142 = MSG_PackUnsignedFloat(*(float *)&_XMM0, *(float *)&_XMM1, 5u);
      v143 = truncate_cast<unsigned short,int>(v142);
      __asm { vmovss  xmm0, dword ptr [rsp+150h+var_100+4]; value }
      v145 = v143;
      __asm { vmovaps xmm1, xmm6; maxAbsValueSize }
      v147 = MSG_PackUnsignedFloat(*(float *)&_XMM0, *(float *)&_XMM1, 6u);
      v148 = truncate_cast<unsigned short,int>(v147);
      v145 <<= 6;
      v149 = v145 | v148 & 0x3F;
      __asm { vmovaps xmm1, xmm6; maxAbsValueSize }
      *(double *)&_XMM0 = MSG_UnpackUnsignedFloat(v145 & 0x3F | v148 & 0x3Fu, *(float *)&_XMM1, 6u);
      __asm
      {
        vmovss  xmm1, cs:s_maxWalkablePitchValue; maxAbsValueSize
        vmovaps xmm6, xmm0
      }
      *(double *)&_XMM0 = MSG_UnpackUnsignedFloat((v149 >> 6) & 0x1F, *(float *)&_XMM1, 5u);
      __asm
      {
        vsubss  xmm0, xmm0, cs:__real@42b40000
        vmovss  dword ptr [rsp+150h+var_100], xmm0
        vmovss  dword ptr [rsp+150h+var_100+8], xmm8
        vmovss  dword ptr [rsp+150h+var_100+4], xmm6
      }
      AngleVectors((const vec3_t *)&v194, &forward, NULL, NULL);
      __asm
      {
        vmovss  xmm4, dword ptr [rsp+150h+forward]
        vmovss  xmm5, dword ptr [rsp+150h+forward+4]
        vmovss  xmm6, dword ptr [rsp+150h+forward+8]
        vmulss  xmm1, xmm4, xmm4
        vmulss  xmm0, xmm5, xmm5
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm6, xmm6
        vaddss  xmm3, xmm2, xmm1
        vsubss  xmm0, xmm3, xmm14
        vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vcomiss xmm0, xmm13
      }
      if ( !v66 )
      {
        __asm
        {
          vsqrtss xmm0, xmm3, xmm3
          vcvtss2sd xmm1, xmm0, xmm0
          vmovsd  qword ptr [rsp+40h], xmm1
          vcvtss2sd xmm2, xmm6, xmm6
          vmovsd  [rsp+150h+var_118], xmm2
          vcvtss2sd xmm3, xmm5, xmm5
          vmovsd  [rsp+150h+var_120], xmm3
          vcvtss2sd xmm0, xmm4, xmm4
          vmovsd  [rsp+150h+var_128], xmm0
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 459, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( outSlopeNormal ) )", "(%g, %g, %g) len %g", v183, v185, v189, v193) )
          __debugbreak();
        __asm
        {
          vmovss  xmm4, dword ptr [rsp+150h+forward]
          vmovss  xmm5, dword ptr [rsp+150h+forward+4]
          vmovss  xmm6, dword ptr [rsp+150h+forward+8]
        }
      }
      __asm { vmovss  xmm3, cs:length }
      v170 = pm->m_bgHandler;
      __asm
      {
        vmulss  xmm0, xmm4, xmm3
        vaddss  xmm1, xmm0, dword ptr [r14+30h]
        vmovss  [rsp+150h+var_E0], xmm1
        vmulss  xmm2, xmm5, xmm3
        vaddss  xmm0, xmm2, dword ptr [r14+34h]
        vmulss  xmm1, xmm6, xmm3
        vaddss  xmm2, xmm1, dword ptr [r14+38h]
        vmovss  [rsp+150h+anonymous_1], xmm2
        vmovss  [rsp+150h+anonymous_0], xmm0
      }
      ((void (__fastcall *)(const BgHandler *, vec3_t *, int *))v170->DebugLineAll)(v170, &_R14->origin, &v196);
    }
    __asm
    {
      vmovaps xmm7, [rsp+150h+var_58+8]
      vmovaps xmm6, [rsp+150h+var_48+8]
      vmovaps xmm8, [rsp+150h+var_68+8]
      vmovaps xmm13, [rsp+150h+var_B8+8]
      vmovaps xmm14, [rsp+150h+var_C8+8]
    }
  }
}

/*
==============
PM_Slope_BlendAscentAndSteepness
==============
*/

float __fastcall PM_Slope_BlendAscentAndSteepness(double ascentRatio, double steepnessRatio, double levelGroundValue, double upSlopeValue)
{
  bool v21; 
  double v41; 
  double v42; 
  double v43; 
  double v44; 
  double v45; 
  double v46; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovss  xmm7, cs:__real@3f800000
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovsd  xmm10, cs:__real@3ff0000000000000
    vmovaps xmmword ptr [rax-68h], xmm11
    vxorps  xmm9, xmm9, xmm9
    vcomiss xmm1, xmm9
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps xmm12, xmm2
    vmovaps xmm11, xmm3
    vmovaps xmm8, xmm1
    vmovaps xmm6, xmm0
    vcomiss xmm1, xmm7
    vmovsd  [rsp+0B8h+var_80], xmm10
    vxorpd  xmm0, xmm0, xmm0
    vmovsd  [rsp+0B8h+var_88], xmm0
    vcvtss2sd xmm1, xmm8, xmm8
    vmovsd  [rsp+0B8h+var_90], xmm1
  }
  v21 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 140, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( steepnessRatio ) && ( steepnessRatio ) <= ( 1.0f )", "steepnessRatio not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v41, v43, v45);
  if ( v21 )
    __debugbreak();
  __asm
  {
    vcomiss xmm6, cs:__real@bf800000
    vcomiss xmm6, xmm7
  }
  if ( v21 )
  {
    __asm
    {
      vmovsd  xmm0, cs:__real@bff0000000000000
      vmovsd  [rsp+0B8h+var_80], xmm10
      vmovsd  [rsp+0B8h+var_88], xmm0
      vcvtss2sd xmm1, xmm6, xmm6
      vmovsd  [rsp+0B8h+var_90], xmm1
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 126, ASSERT_TYPE_ASSERT, "( -1.0f ) <= ( ascentRatio ) && ( ascentRatio ) <= ( 1.0f )", "ascentRatio not in [-1.0f, 1.0f]\n\t%g not in [%g, %g]", v42, v44, v46) )
      __debugbreak();
  }
  __asm
  {
    vcomiss xmm6, xmm9
    vsubss  xmm0, xmm7, xmm6
    vmulss  xmm1, xmm6, xmm11
    vmulss  xmm2, xmm0, [rsp+0B8h+lateralSlopeValue]
  }
  _R11 = &retaddr;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vsubss  xmm0, xmm7, xmm8
    vmovaps xmm7, xmmword ptr [r11-28h]
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm1, xmm3, xmm8
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmulss  xmm2, xmm0, xmm12
    vmovaps xmm12, xmmword ptr [r11-78h]
    vaddss  xmm0, xmm2, xmm1
  }
  return *(float *)&_XMM0;
}

/*
==============
PM_Slope_CalcProperties
==============
*/
void PM_Slope_CalcProperties(const vec3_t *wishDir, const pmove_t *pm, float *outAscentRatio, float *outSteepnessRatio)
{
  playerState_s *ps; 
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *p_pm_flags; 
  bool v10; 
  bool v11; 
  bool v12; 
  char v24; 
  float *outAscentRatioa; 
  float *outSteepnessRatioa; 
  double v33; 
  double v34; 
  vec3_t outUp; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 94, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 94, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !outAscentRatio && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 95, ASSERT_TYPE_ASSERT, "(outAscentRatio)", (const char *)&queryFormat, "outAscentRatio") )
    __debugbreak();
  if ( !outSteepnessRatio && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 96, ASSERT_TYPE_ASSERT, "(outSteepnessRatio)", (const char *)&queryFormat, "outSteepnessRatio") )
    __debugbreak();
  p_pm_flags = &ps->pm_flags;
  *outAscentRatio = 0.0;
  *outSteepnessRatio = 0.0;
  v10 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 7u);
  v11 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 8u);
  v12 = v11;
  if ( v10 || v11 )
  {
    if ( !pm->ground && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 110, ASSERT_TYPE_ASSERT, "( pm->ground ) != ( nullptr )", "%s != %s\n\t%p, %p", "pm->ground", "nullptr", NULL, NULL) )
      __debugbreak();
    if ( pm->ground->groundPlane )
    {
      WorldUpReferenceFrame::GetUpVector(&pm->refFrame, &outUp);
      _RAX = pm->ground;
      __asm
      {
        vmovss  xmm0, dword ptr [rax+14h]
        vmovss  xmm5, dword ptr [rax+10h]
        vmovss  xmm3, dword ptr [rax+18h]
        vmulss  xmm0, xmm0, xmm0
        vmulss  xmm1, xmm5, xmm5
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm1, xmm2, xmm1
        vsubss  xmm0, xmm1, cs:__real@3f800000
        vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vcomiss xmm0, cs:__real@3b03126f
      }
      if ( !v24 )
      {
        __asm
        {
          vmovss  xmm4, dword ptr [rax+14h]
          vsqrtss xmm0, xmm1, xmm1
          vcvtss2sd xmm1, xmm0, xmm0
          vmovsd  [rsp+0A8h+var_68], xmm1
          vcvtss2sd xmm3, xmm3, xmm3
          vmovsd  [rsp+0A8h+var_70], xmm3
          vcvtss2sd xmm4, xmm4, xmm4
          vmovsd  [rsp+0A8h+outSteepnessRatio], xmm4
          vcvtss2sd xmm2, xmm5, xmm5
          vmovsd  [rsp+0A8h+outAscentRatio], xmm2
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 119, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( pm->ground->trace.normal ) )", "(%g, %g, %g) len %g", *(double *)&outAscentRatioa, *(double *)&outSteepnessRatioa, v33, v34) )
          __debugbreak();
      }
      BG_Slope_CalcProperties(wishDir, v10, v12, &outUp, &pm->ground->trace.normal, outAscentRatio, outSteepnessRatio);
    }
  }
}

/*
==============
PM_Slope_GetBobCycleScale
==============
*/
void PM_Slope_GetBobCycleScale(const pmove_t *pm, float *outStairsAscentRatio, float *outFrequencyScale, float *outAmplitudeScale)
{
  playerState_s *ps; 
  __int64 v10; 
  unsigned __int8 v11; 
  unsigned __int8 v12; 
  unsigned __int8 v13; 
  bool IsSprinting; 
  float outSteepnessRatio; 
  float outAscentRatio; 
  float *v86; 
  float *v87; 

  v87 = outAmplitudeScale;
  v86 = outFrequencyScale;
  _R15 = outStairsAscentRatio;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 211, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 211, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 212, ASSERT_TYPE_ASSERT, "(outStairsAscentRatio)", (const char *)&queryFormat, "outStairsAscentRatio") )
    __debugbreak();
  if ( !outFrequencyScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 213, ASSERT_TYPE_ASSERT, "(outFrequencyScale)", (const char *)&queryFormat, "outFrequencyScale") )
    __debugbreak();
  if ( !outAmplitudeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 214, ASSERT_TYPE_ASSERT, "(outAmplitudeScale)", (const char *)&queryFormat, "outAmplitudeScale") )
    __debugbreak();
  v10 = 0i64;
  *_R15 = 0.0;
  *outFrequencyScale = 1.0;
  *outAmplitudeScale = 1.0;
  v11 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 7u);
  v12 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 8u);
  v13 = v12;
  if ( v11 )
  {
    if ( v11 == v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 226, ASSERT_TYPE_ASSERT, "( isOnSlope ) != ( isOnStairs )", "%s != %s\n\t%i, %i", "isOnSlope", "isOnStairs", v11, v12) )
      __debugbreak();
  }
  else if ( !v12 )
  {
    return;
  }
  __asm { vmovaps [rsp+130h+var_50], xmm8 }
  IsSprinting = PM_IsSprinting(ps);
  _RBX = DCONST_DVARFLT_player_slope_upBobFrequencyScale;
  if ( IsSprinting )
    v10 = 1i64;
  if ( !DCONST_DVARFLT_player_slope_upBobFrequencyScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_slope_upBobFrequencyScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_player_slope_lateralBobFrequencyScale;
  __asm { vmovss  [rbp+57h+var_C0], xmm0 }
  if ( !DCONST_DVARFLT_player_slope_lateralBobFrequencyScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_slope_lateralBobFrequencyScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_player_slope_downBobFrequencyScale;
  __asm { vmovss  [rbp+57h+var_BC], xmm0 }
  if ( !DCONST_DVARFLT_player_slope_downBobFrequencyScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_slope_downBobFrequencyScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_player_slope_upBobAmplitudeScale;
  __asm { vmovss  [rbp+57h+var_B8], xmm0 }
  if ( !DCONST_DVARFLT_player_slope_upBobAmplitudeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_slope_upBobAmplitudeScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_player_slope_lateralBobAmplitudeScale;
  __asm { vmovss  [rbp+57h+var_B4], xmm0 }
  if ( !DCONST_DVARFLT_player_slope_lateralBobAmplitudeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_slope_lateralBobAmplitudeScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_player_slope_downBobAmplitudeScale;
  __asm { vmovss  [rbp+57h+var_B0], xmm0 }
  if ( !DCONST_DVARFLT_player_slope_downBobAmplitudeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_slope_downBobAmplitudeScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_player_stairs_upBobFrequencyScale;
  __asm { vmovss  [rbp+57h+var_AC], xmm0 }
  if ( !DCONST_DVARFLT_player_stairs_upBobFrequencyScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_stairs_upBobFrequencyScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_player_stairs_lateralBobFrequencyScale;
  __asm { vmovss  [rbp+57h+var_A8], xmm0 }
  if ( !DCONST_DVARFLT_player_stairs_lateralBobFrequencyScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_stairs_lateralBobFrequencyScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_player_stairs_downBobFrequencyScale;
  __asm { vmovss  [rbp+57h+var_A4], xmm0 }
  if ( !DCONST_DVARFLT_player_stairs_downBobFrequencyScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_stairs_downBobFrequencyScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_player_stairs_upBobAmplitudeScale;
  __asm { vmovss  [rbp+57h+var_A0], xmm0 }
  if ( !DCONST_DVARFLT_player_stairs_upBobAmplitudeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_stairs_upBobAmplitudeScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_player_stairs_lateralBobAmplitudeScale;
  __asm { vmovss  [rbp+57h+var_9C], xmm0 }
  if ( !DCONST_DVARFLT_player_stairs_lateralBobAmplitudeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_stairs_lateralBobAmplitudeScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_player_stairs_downBobAmplitudeScale;
  __asm { vmovss  [rbp+57h+var_98], xmm0 }
  if ( !DCONST_DVARFLT_player_stairs_downBobAmplitudeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_stairs_downBobAmplitudeScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_player_slope_sprint_upBobFrequencyScale;
  __asm { vmovss  [rbp+57h+var_94], xmm0 }
  if ( !DCONST_DVARFLT_player_slope_sprint_upBobFrequencyScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_slope_sprint_upBobFrequencyScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_player_slope_sprint_lateralBobFrequencyScale;
  __asm { vmovss  [rbp+57h+var_90], xmm0 }
  if ( !DCONST_DVARFLT_player_slope_sprint_lateralBobFrequencyScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_slope_sprint_lateralBobFrequencyScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_player_slope_sprint_downBobFrequencyScale;
  __asm { vmovss  [rbp+57h+var_8C], xmm0 }
  if ( !DCONST_DVARFLT_player_slope_sprint_downBobFrequencyScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_slope_sprint_downBobFrequencyScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_player_slope_sprint_upBobAmplitudeScale;
  __asm { vmovss  [rbp+57h+var_88], xmm0 }
  if ( !DCONST_DVARFLT_player_slope_sprint_upBobAmplitudeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_slope_sprint_upBobAmplitudeScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_player_slope_sprint_lateralBobAmplitudeScale;
  __asm { vmovss  [rbp+57h+var_84], xmm0 }
  if ( !DCONST_DVARFLT_player_slope_sprint_lateralBobAmplitudeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_slope_sprint_lateralBobAmplitudeScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_player_slope_sprint_downBobAmplitudeScale;
  __asm { vmovss  [rbp+57h+var_80], xmm0 }
  if ( !DCONST_DVARFLT_player_slope_sprint_downBobAmplitudeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_slope_sprint_downBobAmplitudeScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_player_stairs_sprint_upBobFrequencyScale;
  __asm { vmovss  [rbp+57h+var_7C], xmm0 }
  if ( !DCONST_DVARFLT_player_stairs_sprint_upBobFrequencyScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_stairs_sprint_upBobFrequencyScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_player_stairs_sprint_lateralBobFrequencyScale;
  __asm { vmovss  [rbp+57h+var_78], xmm0 }
  if ( !DCONST_DVARFLT_player_stairs_sprint_lateralBobFrequencyScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_stairs_sprint_lateralBobFrequencyScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_player_stairs_sprint_downBobFrequencyScale;
  __asm { vmovss  [rbp+57h+var_74], xmm0 }
  if ( !DCONST_DVARFLT_player_stairs_sprint_downBobFrequencyScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_stairs_sprint_downBobFrequencyScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_player_stairs_sprint_upBobAmplitudeScale;
  __asm { vmovss  [rbp+57h+var_70], xmm0 }
  if ( !DCONST_DVARFLT_player_stairs_sprint_upBobAmplitudeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_stairs_sprint_upBobAmplitudeScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_player_stairs_sprint_lateralBobAmplitudeScale;
  __asm { vmovss  [rbp+57h+var_6C], xmm0 }
  if ( !DCONST_DVARFLT_player_stairs_sprint_lateralBobAmplitudeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_stairs_sprint_lateralBobAmplitudeScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_player_stairs_sprint_downBobAmplitudeScale;
  __asm { vmovss  [rbp+57h+var_68], xmm0 }
  if ( !DCONST_DVARFLT_player_stairs_sprint_downBobAmplitudeScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_stairs_sprint_downBobAmplitudeScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmovss  [rbp+57h+var_64], xmm0
  }
  _RBX = 3 * (v13 + 2 * v10);
  PM_Slope_CalcProperties(&ps->velocity, pm, &outAscentRatio, &outSteepnessRatio);
  __asm { vmovss  xmm8, [rsp+130h+outAscentRatio] }
  if ( v13 )
    __asm { vmovss  dword ptr [r15], xmm8 }
  __asm
  {
    vmovss  xmm1, [rbp+rbx*8+57h+var_BC]
    vmovss  xmm0, [rbp+rbx*8+57h+var_B8]
    vmovss  xmm3, [rbp+rbx*8+57h+var_C0]; upSlopeValue
    vmovss  xmm2, cs:__real@3f800000; levelGroundValue
    vmovss  [rsp+130h+downSlopeValue], xmm0
    vmovss  dword ptr [rsp+130h+fmt], xmm1
    vmovss  xmm1, [rsp+130h+outSteepnessRatio]; steepnessRatio
    vmovaps xmm0, xmm8; ascentRatio
  }
  *(float *)&_XMM0 = PM_Slope_BlendAscentAndSteepness(*(double *)&_XMM0, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3);
  __asm { vmovss  xmm3, [rbp+rbx*8+57h+var_AC] }
  _RAX = v86;
  __asm
  {
    vmovss  xmm4, [rbp+rbx*8+57h+var_B0]
    vmovss  xmm2, cs:__real@3f800000; levelGroundValue
    vmovss  xmm1, [rsp+130h+outSteepnessRatio]; steepnessRatio
    vmovss  [rsp+130h+downSlopeValue], xmm3
    vmovss  xmm3, [rbp+rbx*8+57h+var_B4]; upSlopeValue
    vmovss  dword ptr [rax], xmm0
    vmovaps xmm0, xmm8; ascentRatio
    vmovss  dword ptr [rsp+130h+fmt], xmm4
  }
  *(float *)&_XMM0 = PM_Slope_BlendAscentAndSteepness(*(double *)&_XMM0, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3);
  _RAX = v87;
  __asm
  {
    vmovaps xmm8, [rsp+130h+var_50]
    vmovss  dword ptr [rax], xmm0
  }
}

/*
==============
PM_Slope_GetSpeedScale
==============
*/
float PM_Slope_GetSpeedScale(const vec3_t *wishDir, const pmove_t *pm)
{
  playerState_s *ps; 
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *p_pm_flags; 
  unsigned __int8 v8; 
  bool v9; 
  unsigned __int8 v10; 
  const char *v17; 
  float outSteepnessRatio; 
  float outAscentRatio; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 149, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 149, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  p_pm_flags = &ps->pm_flags;
  v8 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 7u);
  v9 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(p_pm_flags, ACTIVE, 8u);
  v10 = v9;
  if ( v8 || v9 )
  {
    PM_Slope_CalcProperties(wishDir, pm, &outAscentRatio, &outSteepnessRatio);
    if ( v8 == v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slope_stairs.cpp", 163, ASSERT_TYPE_ASSERT, "( isOnSlope ) != ( isOnStairs )", "%s != %s\n\t%i, %i", "isOnSlope", "isOnStairs", v8, v10) )
      __debugbreak();
    __asm
    {
      vmovaps [rsp+88h+var_28], xmm6
      vmovaps [rsp+88h+var_38], xmm7
    }
    if ( v8 )
    {
      _RSI = DCONST_DVARFLT_player_slope_downSpeedScale;
      if ( !DCONST_DVARFLT_player_slope_downSpeedScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_slope_downSpeedScale") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RSI);
      __asm { vmovss  xmm7, dword ptr [rsi+28h] }
      _RSI = DCONST_DVARFLT_player_slope_lateralSpeedScale;
      if ( !DCONST_DVARFLT_player_slope_lateralSpeedScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_slope_lateralSpeedScale") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RSI);
      __asm { vmovss  xmm6, dword ptr [rsi+28h] }
      _RSI = DCONST_DVARFLT_player_slope_upSpeedScale;
      if ( DCONST_DVARFLT_player_slope_upSpeedScale )
        goto LABEL_32;
      v17 = "player_slope_upSpeedScale";
    }
    else
    {
      _RSI = DCONST_DVARFLT_player_stairs_downSpeedScale;
      if ( !DCONST_DVARFLT_player_stairs_downSpeedScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_stairs_downSpeedScale") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RSI);
      __asm { vmovss  xmm7, dword ptr [rsi+28h] }
      _RSI = DCONST_DVARFLT_player_stairs_lateralSpeedScale;
      if ( !DCONST_DVARFLT_player_stairs_lateralSpeedScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_stairs_lateralSpeedScale") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RSI);
      __asm { vmovss  xmm6, dword ptr [rsi+28h] }
      _RSI = DCONST_DVARFLT_player_stairs_upSpeedScale;
      if ( DCONST_DVARFLT_player_stairs_upSpeedScale )
        goto LABEL_32;
      v17 = "player_stairs_upSpeedScale";
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v17) )
      __debugbreak();
LABEL_32:
    Dvar_CheckFrontendServerThread(_RSI);
    __asm
    {
      vmovss  xmm3, dword ptr [rsi+28h]; upSlopeValue
      vmovss  xmm2, cs:__real@3f800000; levelGroundValue
      vmovss  xmm1, [rsp+88h+outSteepnessRatio]; steepnessRatio
      vmovss  xmm0, [rsp+88h+outAscentRatio]; ascentRatio
      vmovss  [rsp+88h+downSlopeValue], xmm7
      vmovss  dword ptr [rsp+88h+fmt], xmm6
    }
    *(float *)&_XMM0 = PM_Slope_BlendAscentAndSteepness(*(double *)&_XMM0, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3);
    __asm
    {
      vmovaps xmm7, [rsp+88h+var_38]
      vmovaps xmm6, [rsp+88h+var_28]
    }
    return *(float *)&_XMM0;
  }
  __asm { vmovss  xmm0, cs:__real@3f800000 }
  return *(float *)&_XMM0;
}

