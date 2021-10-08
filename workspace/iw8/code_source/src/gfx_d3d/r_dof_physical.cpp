/*
==============
R_DOF_GetBokehPreset
==============
*/

int __fastcall R_DOF_GetBokehPreset()
{
  return ?R_DOF_GetBokehPreset@@YAHXZ();
}

/*
==============
R_DOF_GetPhysicalHipFstop
==============
*/

double __fastcall R_DOF_GetPhysicalHipFstop()
{
  double result; 

  *(float *)&result = ?R_DOF_GetPhysicalHipFstop@@YAMXZ();
  return result;
}

/*
==============
R_GetScaledSharpCocDiameter
==============
*/

double __fastcall R_GetScaledSharpCocDiameter(float sharpCocDiameter, float filmDiagonalLength)
{
  double result; 

  *(float *)&result = ?R_GetScaledSharpCocDiameter@@YAMMM@Z(sharpCocDiameter, filmDiagonalLength);
  return result;
}

/*
==============
R_GetFocalLengthFromFovy
==============
*/

double __fastcall R_GetFocalLengthFromFovy(float tanHalfFovY, float filmDiagonalLength, float aspectRatio)
{
  double result; 

  *(float *)&result = ?R_GetFocalLengthFromFovy@@YAMMMM@Z(tanHalfFovY, filmDiagonalLength, aspectRatio);
  return result;
}

/*
==============
R_DOF_GetPhysicalEnable
==============
*/

bool __fastcall R_DOF_GetPhysicalEnable()
{
  return ?R_DOF_GetPhysicalEnable@@YA_NXZ();
}

/*
==============
R_DOF_GetEnabled
==============
*/

bool __fastcall R_DOF_GetEnabled(const GfxViewInfo *viewInfo)
{
  return ?R_DOF_GetEnabled@@YA_NPEBUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
R_GetPhysicalDepthOfFieldEquationLinear
==============
*/

void __fastcall R_GetPhysicalDepthOfFieldEquationLinear(float focalLength, float fstop, float focusDistance, float screenWidth, float screenHeight, float filmDiagonalLength, float minFocusDistance, float *scale, float *bias)
{
  ?R_GetPhysicalDepthOfFieldEquationLinear@@YAXMMMMMMMPEAM0@Z(focalLength, fstop, focusDistance, screenWidth, screenHeight, filmDiagonalLength, minFocusDistance, scale, bias);
}

/*
==============
R_DOF_GetPhysicalHipSharpCocDiameter
==============
*/

double __fastcall R_DOF_GetPhysicalHipSharpCocDiameter()
{
  double result; 

  *(float *)&result = ?R_DOF_GetPhysicalHipSharpCocDiameter@@YAMXZ();
  return result;
}

/*
==============
R_GetHyperfocalDistance
==============
*/

double __fastcall R_GetHyperfocalDistance(float focalLength, float fstop, float sharpCoc)
{
  double result; 

  *(float *)&result = ?R_GetHyperfocalDistance@@YAMMMM@Z(focalLength, fstop, sharpCoc);
  return result;
}

/*
==============
R_GetPhysicalDepthOfFieldEquationClip
==============
*/

void __fastcall R_GetPhysicalDepthOfFieldEquationClip(float focalLength, float fstop, float focusDistance, float screenWidth, float screenHeight, float filmDiagonalLength, float minFocusDistance, float znear, const vec3_t *clipToZ, float *scale, float *bias)
{
  ?R_GetPhysicalDepthOfFieldEquationClip@@YAXMMMMMMMMAEBTvec3_t@@PEAM1@Z(focalLength, fstop, focusDistance, screenWidth, screenHeight, filmDiagonalLength, minFocusDistance, znear, clipToZ, scale, bias);
}

/*
==============
R_GetEffectiveFocalLength
==============
*/

double __fastcall R_GetEffectiveFocalLength(float focalLength, float focusDistance, float minFocusDistance)
{
  double result; 

  *(float *)&result = ?R_GetEffectiveFocalLength@@YAMMMM@Z(focalLength, focusDistance, minFocusDistance);
  return result;
}

/*
==============
R_GetFocusPlaneAndApertureFromRange
==============
*/

void __fastcall R_GetFocusPlaneAndApertureFromRange(float focalLength, float start, float end, float sharpCoc, float minFstop, float maxFstop, float minFocusDistance, float *focusDistance, float *fstop)
{
  ?R_GetFocusPlaneAndApertureFromRange@@YAXMMMMMMMPEAM0@Z(focalLength, start, end, sharpCoc, minFstop, maxFstop, minFocusDistance, focusDistance, fstop);
}

/*
==============
R_UpdateFocus
==============
*/

void __fastcall R_UpdateFocus(float focalLength, float fstop, float targetFocusDistance, float elapsedTime, float focusSpeed, float stiffness, float minFocusDistance, float *currentFocusDistance, float *currentGradient)
{
  ?R_UpdateFocus@@YAXMMMMMMMPEAM0@Z(focalLength, fstop, targetFocusDistance, elapsedTime, focusSpeed, stiffness, minFocusDistance, currentFocusDistance, currentGradient);
}

/*
==============
R_DOF_DvarEnabled
==============
*/

bool __fastcall R_DOF_DvarEnabled()
{
  return ?R_DOF_DvarEnabled@@YA_NXZ();
}

/*
==============
R_UsingDepthOfField
==============
*/

bool __fastcall R_UsingDepthOfField(const GfxViewInfo *viewInfo)
{
  return ?R_UsingDepthOfField@@YA_NPEBUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
R_GetFovyFromFocalLength
==============
*/

double __fastcall R_GetFovyFromFocalLength(float focalLength, float filmDiagonalLength, float aspectRatio)
{
  double result; 

  *(float *)&result = ?R_GetFovyFromFocalLength@@YAMMMM@Z(focalLength, filmDiagonalLength, aspectRatio);
  return result;
}

/*
==============
R_DOF_GetBokehMaxCocDiameter
==============
*/

double __fastcall R_DOF_GetBokehMaxCocDiameter(const GfxViewInfo *viewInfo)
{
  double result; 

  *(float *)&result = ?R_DOF_GetBokehMaxCocDiameter@@YAMPEBUGfxViewInfo@@@Z(viewInfo);
  return result;
}

/*
==============
R_GetMaxCocDiameter
==============
*/

double __fastcall R_GetMaxCocDiameter(float maxCocDiameter)
{
  double result; 

  *(float *)&result = ?R_GetMaxCocDiameter@@YAMM@Z(maxCocDiameter);
  return result;
}

/*
==============
R_UpdateCocScale
==============
*/

void __fastcall R_UpdateCocScale(float targetCocScale, float elapsedTime, float scaleSpeed, float *currentCocScale)
{
  ?R_UpdateCocScale@@YAXMMMPEAM@Z(targetCocScale, elapsedTime, scaleSpeed, currentCocScale);
}

/*
==============
R_UpdateAperture
==============
*/

void __fastcall R_UpdateAperture(float targetFstop, float elapsedTime, float speed, float *currentFstop)
{
  ?R_UpdateAperture@@YAXMMMPEAM@Z(targetFstop, elapsedTime, speed, currentFstop);
}

/*
==============
R_ConvertScaleAndBiasToPixels
==============
*/

void __fastcall R_ConvertScaleAndBiasToPixels(double screenWidth, double screenHeight, double filmDiagonalLength, float *scale, float *bias)
{
  __asm { vmovaps [rsp+68h+var_18], xmm6 }
  _RBX = scale;
  __asm
  {
    vmovaps [rsp+68h+var_28], xmm7
    vxorps  xmm3, xmm3, xmm3
    vcomiss xmm2, xmm3
    vmovaps [rsp+68h+var_38], xmm8
    vmovaps xmm8, xmm0
    vmovaps xmm6, xmm2
    vmovaps xmm7, xmm1
  }
  _RAX = bias;
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000
    vmulss  xmm1, xmm8, xmm8
    vmovaps xmm8, [rsp+68h+var_38]
    vmulss  xmm0, xmm7, xmm7
    vmovaps xmm7, [rsp+68h+var_28]
    vaddss  xmm1, xmm1, xmm0
    vdivss  xmm0, xmm2, xmm6
    vmovaps xmm6, [rsp+68h+var_18]
    vsqrtss xmm3, xmm1, xmm1
    vmulss  xmm4, xmm3, xmm0
    vmulss  xmm1, xmm4, dword ptr [rbx]
    vmovss  dword ptr [rbx], xmm1
    vmulss  xmm0, xmm4, dword ptr [rax]
    vmovss  dword ptr [rax], xmm0
  }
}

/*
==============
R_DOF_DvarEnabled
==============
*/
char R_DOF_DvarEnabled()
{
  return 1;
}

/*
==============
R_DOF_GetBokehMaxCocDiameter
==============
*/
float R_DOF_GetBokehMaxCocDiameter(const GfxViewInfo *viewInfo)
{
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm0, xmm0, dword ptr [rcx+0C98h]
    vmulss  xmm1, xmm0, cs:__real@3b088889
  }
  if ( viewInfo->dofPhysical.hipEnabled || viewInfo->dofPhysical.adsEnabled )
  {
    __asm
    {
      vmulss  xmm0, xmm1, cs:__real@3f400000
      vminss  xmm0, xmm0, cs:__real@42000000
    }
  }
  else
  {
    __asm { vminss  xmm0, xmm1, cs:__real@42000000 }
  }
  return *(float *)&_XMM0;
}

/*
==============
R_DOF_GetBokehPreset
==============
*/
__int64 R_DOF_GetBokehPreset()
{
  return r_dof_filter_preset->current.unsignedInt;
}

/*
==============
R_DOF_GetEnabled
==============
*/
bool R_DOF_GetEnabled(const GfxViewInfo *viewInfo)
{
  _RBX = viewInfo;
  if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dof_physical.cpp", 64, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  if ( !_RBX->dofDisabled )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3c23d70a
      vcomiss xmm0, dword ptr [rbx+0CA4h]
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm0, dword ptr [rbx+9ACh]
    }
  }
  return 0;
}

/*
==============
R_DOF_GetPhysicalEnable
==============
*/
char R_DOF_GetPhysicalEnable()
{
  return 1;
}

/*
==============
R_DOF_GetPhysicalHipFstop
==============
*/
float R_DOF_GetPhysicalHipFstop()
{
  _RAX = r_dof_physical_hipFstop;
  __asm { vmovss  xmm0, dword ptr [rax+28h] }
  return *(float *)&_XMM0;
}

/*
==============
R_DOF_GetPhysicalHipSharpCocDiameter
==============
*/
float R_DOF_GetPhysicalHipSharpCocDiameter()
{
  _RAX = r_dof_physical_hipSharpCocDiameter;
  __asm { vmovss  xmm0, dword ptr [rax+28h] }
  return *(float *)&_XMM0;
}

/*
==============
R_GetCocFromObjectDistance
==============
*/

float __fastcall R_GetCocFromObjectDistance(double focalLength, double fstop, double focusDistance, double objectDistance)
{
  __asm
  {
    vmovaps [rsp+88h+var_18], xmm6
    vmovaps [rsp+88h+var_28], xmm7
    vmovaps [rsp+88h+var_38], xmm8
    vmovaps [rsp+88h+var_48], xmm9
    vxorps  xmm8, xmm8, xmm8
    vcomiss xmm0, xmm8
    vmovaps [rsp+88h+var_58], xmm10
    vmovaps xmm9, xmm3
    vmovaps xmm10, xmm2
    vmovaps xmm7, xmm1
    vmovaps xmm6, xmm0
    vcomiss xmm7, xmm8
    vmovaps xmm8, [rsp+88h+var_38]
    vsubss  xmm0, xmm9, xmm10
    vmulss  xmm2, xmm0, xmm6
    vdivss  xmm1, xmm6, xmm7
    vmovaps xmm7, [rsp+88h+var_28]
    vsubss  xmm0, xmm10, xmm6
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm10, [rsp+88h+var_58]
    vmulss  xmm3, xmm2, xmm1
    vmulss  xmm2, xmm0, xmm9
    vmaxss  xmm1, xmm2, cs:__real@34000000
    vmovaps xmm9, [rsp+88h+var_48]
    vdivss  xmm0, xmm3, xmm1
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
  }
  return *(float *)&_XMM0;
}

/*
==============
R_GetEffectiveFocalLength
==============
*/

float __fastcall R_GetEffectiveFocalLength(double focalLength, double focusDistance, double minFocusDistance)
{
  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm0, xmm7
    vmovaps [rsp+78h+var_48], xmm9
    vmovaps xmm8, xmm2
    vmovaps xmm9, xmm1
    vmovaps xmm6, xmm0
    vmaxss  xmm1, xmm9, xmm8
    vcomiss xmm6, xmm1
    vaddss  xmm0, xmm7, cs:__real@3f800000
    vmovaps xmm7, [rsp+78h+var_28]
    vmovaps xmm8, [rsp+78h+var_38]
    vmovaps xmm9, [rsp+78h+var_48]
    vmulss  xmm0, xmm0, xmm6
    vmovaps xmm6, [rsp+78h+var_18]
  }
  return *(float *)&_XMM0;
}

/*
==============
R_GetFocalLengthFromFovy
==============
*/

float __fastcall R_GetFocalLengthFromFovy(double tanHalfFovY, double filmDiagonalLength, double aspectRatio, double _XMM3_8)
{
  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vxorps  xmm3, xmm3, xmm3
    vcomiss xmm0, xmm3
    vmovaps [rsp+68h+var_38], xmm8
    vmovaps xmm8, xmm1
    vmovaps xmm7, xmm2
    vmovaps xmm6, xmm0
    vmulss  xmm0, xmm7, xmm7
    vaddss  xmm1, xmm0, cs:__real@3f800000
    vmovaps xmm7, [rsp+68h+var_28]
    vsqrtss xmm2, xmm1, xmm1
    vdivss  xmm3, xmm8, xmm2
    vmulss  xmm0, xmm3, cs:__real@3f000000
    vmovaps xmm8, [rsp+68h+var_38]
    vdivss  xmm0, xmm0, xmm6
    vmovaps xmm6, [rsp+68h+var_18]
  }
  return *(float *)&_XMM0;
}

/*
==============
R_GetFocusPlaneAndApertureFromRange
==============
*/

void __fastcall R_GetFocusPlaneAndApertureFromRange(double focalLength, double start, double end, double sharpCoc, float minFstop, float maxFstop, float minFocusDistance, float *focusDistance, float *fstop)
{
  void *retaddr; 
  int minFocusDistancea; 
  int minFocusDistanceb; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm0, xmm6
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmm10, xmm1
    vmovaps xmm8, xmm3
    vmovaps xmm9, xmm2
    vmovaps xmm7, xmm0
    vcomiss xmm8, xmm6
    vmaxss  xmm6, xmm10, [rsp+88h+minFocusDistance]
    vmaxss  xmm1, xmm9, [rsp+88h+minFocusDistance]
    vmulss  xmm0, xmm6, cs:__real@40000000
  }
  _RBX = focusDistance;
  _RDI = fstop;
  __asm
  {
    vmulss  xmm2, xmm0, xmm1
    vaddss  xmm1, xmm6, xmm1
    vmaxss  xmm0, xmm1, cs:__real@34000000
    vdivss  xmm4, xmm2, xmm0
    vsubss  xmm1, xmm4, xmm7
    vmulss  xmm0, xmm6, xmm8
    vmulss  xmm3, xmm1, xmm0
    vsubss  xmm1, xmm4, xmm6
    vmaxss  xmm2, xmm1, cs:__real@34000000
    vmovss  xmm1, [rsp+88h+minFstop]; min
    vmulss  xmm0, xmm2, xmm7
    vmovss  xmm2, [rsp+88h+maxFstop]; max
    vdivss  xmm3, xmm3, xmm0
    vandps  xmm3, xmm3, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vdivss  xmm0, xmm7, xmm3; val
    vmovss  dword ptr [rbx], xmm4
    vmovss  dword ptr [rdi], xmm0
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rdi], xmm0
    vmovss  xmm1, dword ptr [rbx]
    vmovss  [rsp+88h+minFocusDistance], xmm1
  }
  if ( (minFocusDistancea & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dof_physical.cpp", 186, ASSERT_TYPE_ASSERT, "(IS_FINITE(*focusDistance))", (const char *)&queryFormat, "IS_FINITE(*focusDistance)") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  [rsp+88h+minFocusDistance], xmm0
  }
  if ( (minFocusDistanceb & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dof_physical.cpp", 187, ASSERT_TYPE_ASSERT, "(IS_FINITE(*fstop))", (const char *)&queryFormat, "IS_FINITE(*fstop)") )
    __debugbreak();
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm7, [rsp+88h+var_28]
    vmovaps xmm8, [rsp+88h+var_38]
    vmovaps xmm9, [rsp+88h+var_48]
    vmovaps xmm10, [rsp+88h+var_58]
  }
}

/*
==============
R_GetFovyFromFocalLength
==============
*/

float __fastcall R_GetFovyFromFocalLength(double focalLength, double filmDiagonalLength, double aspectRatio, double _XMM3_8)
{
  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vxorps  xmm3, xmm3, xmm3
    vcomiss xmm0, xmm3
    vmovaps [rsp+68h+var_38], xmm8
    vmovaps xmm8, xmm1
    vmovaps xmm7, xmm2
    vmovaps xmm6, xmm0
    vmulss  xmm0, xmm7, xmm7
    vaddss  xmm1, xmm0, cs:__real@3f800000
    vsqrtss xmm2, xmm1, xmm1
    vdivss  xmm3, xmm8, xmm2
    vmulss  xmm0, xmm3, cs:__real@3f000000
    vdivss  xmm0, xmm0, xmm6; X
  }
  *(float *)&_XMM0 = atanf_0(*(float *)&_XMM0);
  __asm
  {
    vmulss  xmm0, xmm0, cs:__real@42e52ee0
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
    vmovaps xmm8, [rsp+68h+var_38]
  }
  return *(float *)&_XMM0;
}

/*
==============
R_GetHyperfocalDistance
==============
*/

float __fastcall R_GetHyperfocalDistance(double focalLength, double fstop, double sharpCoc)
{
  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
    vmovaps [rsp+78h+var_48], xmm9
    vxorps  xmm9, xmm9, xmm9
    vcomiss xmm1, xmm9
    vmovaps xmm6, xmm2
    vmovaps xmm7, xmm1
    vmovaps xmm8, xmm0
    vcomiss xmm6, xmm9
    vmovaps xmm9, [rsp+78h+var_48]
    vmulss  xmm0, xmm7, xmm6
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
    vmulss  xmm1, xmm8, xmm8
    vmovaps xmm8, [rsp+78h+var_38]
    vdivss  xmm0, xmm1, xmm0
  }
  return *(float *)&_XMM0;
}

/*
==============
R_GetMaxCocDiameter
==============
*/

float __fastcall R_GetMaxCocDiameter(float maxCocDiameter, double _XMM1_8)
{
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
    vmulss  xmm0, xmm1, xmm0
    vmulss  xmm0, xmm0, cs:__real@3b088889
  }
  return *(float *)&_XMM0;
}

/*
==============
R_GetPhysicalDepthOfFieldEquationClip
==============
*/

void __fastcall R_GetPhysicalDepthOfFieldEquationClip(double focalLength, double fstop, double focusDistance, double screenWidth, float screenHeight, float filmDiagonalLength, float minFocusDistance, float znear, const vec3_t *clipToZ, float *scale, float *bias)
{
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm0, xmm6
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmm11, xmm2
    vmovaps xmm10, xmm3
    vmovaps xmm9, xmm1
    vmovaps xmm8, xmm0
    vcomiss xmm9, xmm6
    vmovss  xmm7, [rsp+98h+znear]
    vcomiss xmm7, xmm6
  }
  _RBX = clipToZ;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vcomiss xmm0, xmm6
    vmaxss  xmm4, xmm11, [rsp+98h+minFocusDistance]
  }
  _RAX = bias;
  _R9 = scale;
  __asm
  {
    vdivss  xmm5, xmm8, xmm9
    vmulss  xmm1, xmm5, dword ptr [rbx+8]
    vsubss  xmm0, xmm4, xmm8
    vmaxss  xmm6, xmm0, cs:__real@34000000
    vmulss  xmm0, xmm1, xmm8
    vmulss  xmm1, xmm7, dword ptr [rbx]
    vmulss  xmm2, xmm0, xmm4
    vmulss  xmm0, xmm1, xmm6
    vdivss  xmm2, xmm2, xmm0
    vxorps  xmm3, xmm2, cs:__xmm@80000000800000008000000080000000
    vmovss  xmm2, cs:__real@3f800000
    vmovss  dword ptr [r9], xmm3
    vmulss  xmm0, xmm7, dword ptr [rbx]
    vdivss  xmm1, xmm4, xmm0
    vmulss  xmm3, xmm1, dword ptr [rbx+4]
    vsubss  xmm0, xmm2, xmm3
    vmulss  xmm1, xmm0, xmm5
    vmulss  xmm3, xmm1, xmm8
    vmovss  xmm1, dword ptr [rsp+98h+screenHeight]
    vdivss  xmm2, xmm3, xmm6
    vmovss  dword ptr [rax], xmm2
    vmovss  xmm2, [rsp+98h+filmDiagonalLength]
    vmovaps xmm0, xmm10
    vmovaps xmm6, [rsp+98h+var_18]
    vmovaps xmm7, [rsp+98h+var_28]
    vmovaps xmm8, [rsp+98h+var_38]
    vmovaps xmm9, [rsp+98h+var_48]
    vmovaps xmm10, [rsp+98h+var_58]
    vmovaps xmm11, [rsp+98h+var_68]
  }
  R_ConvertScaleAndBiasToPixels(*(double *)&_XMM0, *(double *)&_XMM1, *(double *)&_XMM2, scale, bias);
}

/*
==============
R_GetPhysicalDepthOfFieldEquationLinear
==============
*/

void __fastcall R_GetPhysicalDepthOfFieldEquationLinear(double focalLength, double fstop, double focusDistance, double screenWidth, float screenHeight, float filmDiagonalLength, float minFocusDistance, float *scale, float *bias)
{
  __asm
  {
    vmovaps [rsp+88h+var_18], xmm6
    vmovaps [rsp+88h+var_28], xmm7
    vmovaps [rsp+88h+var_38], xmm8
    vmovaps [rsp+88h+var_48], xmm9
    vxorps  xmm8, xmm8, xmm8
    vcomiss xmm0, xmm8
    vmovaps [rsp+88h+var_58], xmm10
    vmovaps xmm9, xmm3
    vmovaps xmm10, xmm2
    vmovaps xmm7, xmm1
    vmovaps xmm6, xmm0
    vcomiss xmm7, xmm8
    vmaxss  xmm4, xmm10, [rsp+88h+minFocusDistance]
  }
  _RAX = bias;
  _R9 = scale;
  __asm
  {
    vdivss  xmm0, xmm6, xmm7
    vmulss  xmm5, xmm0, xmm6
    vmovss  xmm0, cs:__real@3f800000
    vsubss  xmm1, xmm4, xmm6
    vmaxss  xmm2, xmm1, cs:__real@34000000
    vdivss  xmm3, xmm0, xmm2
    vmulss  xmm1, xmm5, xmm4
    vmulss  xmm2, xmm1, xmm3
    vxorps  xmm0, xmm2, cs:__xmm@80000000800000008000000080000000
    vmovss  xmm2, [rsp+88h+filmDiagonalLength]
    vmulss  xmm1, xmm3, xmm5
    vmovss  dword ptr [r9], xmm0
    vmovss  dword ptr [rax], xmm1
    vmovss  xmm1, dword ptr [rsp+88h+screenHeight]
    vmovaps xmm0, xmm9
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm7, [rsp+88h+var_28]
    vmovaps xmm8, [rsp+88h+var_38]
    vmovaps xmm9, [rsp+88h+var_48]
    vmovaps xmm10, [rsp+88h+var_58]
  }
  R_ConvertScaleAndBiasToPixels(*(double *)&_XMM0, *(double *)&_XMM1, *(double *)&_XMM2, scale, bias);
}

/*
==============
R_GetScaledSharpCocDiameter
==============
*/

float __fastcall R_GetScaledSharpCocDiameter(float sharpCocDiameter, double filmDiagonalLength)
{
  __asm
  {
    vmulss  xmm1, xmm1, cs:__real@3cbda12f
    vmulss  xmm0, xmm1, xmm0
  }
  return *(float *)&_XMM0;
}

/*
==============
R_UpdateAperture
==============
*/

void __fastcall R_UpdateAperture(double targetFstop, double elapsedTime, float speed, float *currentFstop)
{
  char v14; 
  bool v15; 
  bool v19; 
  double v34; 
  double v35; 
  int v40; 

  __asm
  {
    vmulss  xmm1, xmm1, xmm2
    vmovss  xmm2, cs:__real@41f00000; max
    vmovaps [rsp+78h+var_18], xmm6
  }
  _RBX = currentFstop;
  __asm
  {
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
    vmovss  xmm8, cs:__real@3f800000
    vmovaps [rsp+78h+var_48], xmm11
    vminss  xmm11, xmm1, xmm8
    vmovss  xmm1, cs:__real@3e000000; min
  }
  targetFstop = I_fclamp(*(float *)&targetFstop, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm0, xmm6
    vmovaps xmm7, xmm0
  }
  if ( v14 | v15 )
  {
    __asm
    {
      vcvtss2sd xmm1, xmm7, xmm0
      vmovsd  [rsp+78h+var_50], xmm1
    }
    v19 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dof_physical.cpp", 234, ASSERT_TYPE_ASSERT, "( ( targetFstop > 0.0f ) )", "( targetFstop ) = %g", v34);
    v14 = 0;
    v15 = !v19;
    if ( v19 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vcomiss xmm0, xmm6
  }
  if ( v14 | v15 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+78h+var_50], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dof_physical.cpp", 235, ASSERT_TYPE_ASSERT, "( ( *currentFstop > 0.0f ) )", "( *currentFstop ) = %g", v35) )
      __debugbreak();
  }
  __asm
  {
    vdivss  xmm5, xmm8, dword ptr [rbx]
    vmovss  xmm2, cs:__real@41f00000; max
    vmovss  xmm1, cs:__real@3e000000; min
    vdivss  xmm0, xmm8, xmm7
    vsubss  xmm3, xmm0, xmm5
    vmulss  xmm4, xmm3, xmm11
    vaddss  xmm5, xmm4, xmm5
    vdivss  xmm0, xmm8, xmm5; val
    vmovss  dword ptr [rbx], xmm0
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  [rsp+78h+arg_0], xmm0
    vmovss  dword ptr [rbx], xmm0
  }
  if ( (v40 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dof_physical.cpp", 245, ASSERT_TYPE_ASSERT, "(IS_FINITE(*currentFstop))", (const char *)&queryFormat, "IS_FINITE(*currentFstop)") )
    __debugbreak();
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
    vmovaps xmm8, [rsp+78h+var_38]
    vmovaps xmm11, [rsp+78h+var_48]
  }
}

/*
==============
R_UpdateCocScale
==============
*/

void __fastcall R_UpdateCocScale(double targetCocScale, double elapsedTime, float scaleSpeed, float *currentCocScale)
{
  __asm
  {
    vsubss  xmm0, xmm0, dword ptr [r9]
    vmulss  xmm1, xmm1, xmm2
    vminss  xmm2, xmm1, cs:__real@3f800000
    vmulss  xmm2, xmm2, xmm0
    vaddss  xmm1, xmm2, dword ptr [r9]
    vmovss  dword ptr [r9], xmm1
  }
}

/*
==============
R_UpdateFocus
==============
*/

void __fastcall R_UpdateFocus(double focalLength, double fstop, double targetFocusDistance, double elapsedTime, float focusSpeed, float stiffness, float minFocusDistance, float *currentFocusDistance, float *currentGradient)
{
  char v26; 
  char v33; 
  char v34; 
  __int128 v83; 
  char v84; 
  void *retaddr; 
  int v86; 
  int focusSpeeda; 
  int focusSpeedb; 
  int focusSpeedc; 
  int focusSpeedd; 
  int focusSpeede; 
  int focusSpeedf; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovss  [rsp+0B8h+arg_0], xmm1
    vmovaps [rsp+0B8h+var_88], xmm12
    vmovaps xmm7, xmm3
    vmovaps xmm12, xmm2
    vmovaps xmm8, xmm1
    vmovaps xmm6, xmm0
  }
  if ( (v86 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dof_physical.cpp", 259, ASSERT_TYPE_ASSERT, "(IS_FINITE(fstop))", (const char *)&queryFormat, "IS_FINITE(fstop)", v83) )
    __debugbreak();
  __asm
  {
    vmovss  xmm9, [rsp+0B8h+focusSpeed]
    vmovss  [rsp+0B8h+focusSpeed], xmm9
  }
  if ( (focusSpeeda & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dof_physical.cpp", 260, ASSERT_TYPE_ASSERT, "(IS_FINITE(focusSpeed))", (const char *)&queryFormat, "IS_FINITE(focusSpeed)") )
    __debugbreak();
  __asm
  {
    vmovss  xmm11, [rsp+0B8h+stiffness]
    vmovss  [rsp+0B8h+focusSpeed], xmm11
  }
  if ( (focusSpeedb & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dof_physical.cpp", 261, ASSERT_TYPE_ASSERT, "(IS_FINITE(stiffness))", (const char *)&queryFormat, "IS_FINITE(stiffness)") )
    __debugbreak();
  _RBX = currentGradient;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  [rsp+0B8h+focusSpeed], xmm0
  }
  if ( (focusSpeedc & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dof_physical.cpp", 262, ASSERT_TYPE_ASSERT, "(IS_FINITE(*currentGradient))", (const char *)&queryFormat, "IS_FINITE(*currentGradient)") )
    __debugbreak();
  _RSI = currentFocusDistance;
  v26 = 0;
  __asm
  {
    vminss  xmm10, xmm7, cs:__real@42480000
    vmaxss  xmm7, xmm12, [rsp+0B8h+minFocusDistance]
    vmovaps xmm3, xmm7; objectDistance
    vmovss  xmm2, dword ptr [rsi]; focusDistance
    vmovaps xmm1, xmm8; fstop
    vmovaps xmm0, xmm6; focalLength
  }
  *(float *)&_XMM0 = R_GetCocFromObjectDistance(*(double *)&_XMM0, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3);
  __asm
  {
    vmovss  xmm1, dword ptr [rsi]
    vcomiss xmm6, xmm1
    vmovss  xmm4, cs:__real@34000000
    vmovaps xmm12, xmm0
  }
  if ( v33 )
  {
    __asm
    {
      vmulss  xmm3, xmm1, xmm6
      vsubss  xmm1, xmm1, xmm6
      vmaxss  xmm2, xmm1, xmm4
      vdivss  xmm5, xmm3, xmm2
    }
  }
  else
  {
    __asm { vmovss  xmm5, cs:__real@461c4000 }
    v26 = 1;
  }
  __asm
  {
    vmulss  xmm1, xmm10, dword ptr [rbx]
    vcomiss xmm1, xmm6
  }
  if ( !(v33 | v34) )
    goto LABEL_19;
  __asm
  {
    vxorps  xmm0, xmm6, cs:__xmm@80000000800000008000000080000000
    vcomiss xmm0, xmm1
  }
  if ( v33 | v34 )
  {
    __asm { vaddss  xmm0, xmm5, xmm1 }
  }
  else
  {
LABEL_19:
    __asm
    {
      vsubss  xmm0, xmm7, xmm6
      vmaxss  xmm1, xmm0, xmm4
      vmulss  xmm2, xmm6, xmm7
      vdivss  xmm0, xmm2, xmm1
    }
    v26 = 1;
  }
  __asm
  {
    vcomiss xmm9, cs:__real@3d4ccccd
    vmaxss  xmm0, xmm0, xmm4
    vmulss  xmm2, xmm0, xmm6
    vsubss  xmm0, xmm0, xmm6
    vmaxss  xmm1, xmm0, xmm4
    vdivss  xmm2, xmm2, xmm1
    vmovss  dword ptr [rsi], xmm2
  }
  if ( !v33 )
  {
    __asm { vmovss  dword ptr [rsi], xmm7 }
    v26 = 1;
    __asm { vmovaps xmm2, xmm7; focusDistance }
  }
  __asm
  {
    vmovaps xmm3, xmm7; objectDistance
    vmovaps xmm1, xmm8; fstop
    vmovaps xmm0, xmm6; focalLength
  }
  *(float *)&_XMM0 = R_GetCocFromObjectDistance(*(double *)&_XMM0, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3);
  __asm
  {
    vmovss  [rsp+0B8h+focusSpeed], xmm0
    vmovaps xmm6, xmm0
  }
  if ( (focusSpeedd & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dof_physical.cpp", 305, ASSERT_TYPE_ASSERT, "(IS_FINITE(nextCoc))", (const char *)&queryFormat, "IS_FINITE(nextCoc)") )
    __debugbreak();
  __asm { vmovss  xmm7, dword ptr [rbx] }
  if ( v26 )
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  else
  {
    __asm
    {
      vmovss  xmm3, cs:__real@bf800000
      vmovss  xmm5, cs:__real@3f800000
      vcmpltss xmm0, xmm12, xmm6
      vblendvps xmm2, xmm5, xmm3, xmm0
      vxorps  xmm0, xmm0, xmm0
      vcmpltss xmm1, xmm0, xmm7
      vblendvps xmm0, xmm3, xmm5, xmm1
      vmulss  xmm4, xmm2, xmm0
      vsubss  xmm1, xmm5, xmm11
      vmulss  xmm0, xmm1, xmm9
      vmulss  xmm2, xmm0, xmm8
      vmulss  xmm3, xmm2, xmm6
      vmulss  xmm1, xmm4, xmm3
      vmulss  xmm0, xmm7, xmm11
      vaddss  xmm0, xmm1, xmm0
    }
  }
  __asm
  {
    vmovss  dword ptr [rbx], xmm0
    vmovss  xmm0, dword ptr [rsi]
    vmovss  [rsp+0B8h+focusSpeed], xmm0
  }
  if ( (focusSpeede & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dof_physical.cpp", 316, ASSERT_TYPE_ASSERT, "(IS_FINITE(*currentFocusDistance))", (const char *)&queryFormat, "IS_FINITE(*currentFocusDistance)") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  [rsp+0B8h+focusSpeed], xmm0
  }
  if ( (focusSpeedf & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dof_physical.cpp", 317, ASSERT_TYPE_ASSERT, "(IS_FINITE(*currentGradient))", (const char *)&queryFormat, "IS_FINITE(*currentGradient)") )
    __debugbreak();
  _R11 = &v84;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
  }
}

/*
==============
R_UsingDepthOfField
==============
*/
bool R_UsingDepthOfField(const GfxViewInfo *viewInfo)
{
  _RBX = viewInfo;
  if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dof_physical.cpp", 64, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  if ( !_RBX->dofDisabled )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3c23d70a
      vcomiss xmm0, dword ptr [rbx+0CA4h]
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm0, dword ptr [rbx+9ACh]
    }
  }
  return 0;
}

