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
void R_ConvertScaleAndBiasToPixels(float screenWidth, float screenHeight, float filmDiagonalLength, float *scale, float *bias)
{
  float v6; 

  if ( filmDiagonalLength <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dof_physical.cpp", 196, ASSERT_TYPE_ASSERT, "( ( filmDiagonalLength > 0.0f ) )", "( filmDiagonalLength ) = %g", filmDiagonalLength) )
    __debugbreak();
  v6 = fsqrt((float)(screenWidth * screenWidth) + (float)(screenHeight * screenHeight)) * (float)(1.0 / filmDiagonalLength);
  *scale = v6 * *scale;
  *bias = v6 * *bias;
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
  __int128 v2; 

  v2 = 0i64;
  *(float *)&v2 = (float)vidConfig.sceneHeight;
  *(float *)&v2 = (float)(*(float *)&v2 * viewInfo->dofPhysical.maxCocDiameter) * 0.0020833334;
  _XMM1 = v2;
  if ( viewInfo->dofPhysical.hipEnabled || viewInfo->dofPhysical.adsEnabled )
  {
    *(float *)&v2 = *(float *)&v2 * 0.75;
    _XMM0 = v2;
    __asm { vminss  xmm0, xmm0, cs:__real@42000000 }
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
  if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dof_physical.cpp", 64, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  if ( viewInfo->dofDisabled )
    return 0;
  if ( viewInfo->dofPhysical.cocScale <= 0.0099999998 )
    return viewInfo->dualViewScopeState.m_fade > 0.0;
  return 1;
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
  return r_dof_physical_hipFstop->current.value;
}

/*
==============
R_DOF_GetPhysicalHipSharpCocDiameter
==============
*/
float R_DOF_GetPhysicalHipSharpCocDiameter()
{
  return r_dof_physical_hipSharpCocDiameter->current.value;
}

/*
==============
R_GetCocFromObjectDistance
==============
*/

float __fastcall R_GetCocFromObjectDistance(float focalLength, float fstop, double focusDistance, float objectDistance)
{
  __int128 v5; 
  float v6; 
  float result; 

  if ( focalLength <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dof_physical.cpp", 207, ASSERT_TYPE_ASSERT, "( ( focalLength > 0.0f ) )", "( focalLength ) = %g", focalLength) )
    __debugbreak();
  if ( fstop <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dof_physical.cpp", 208, ASSERT_TYPE_ASSERT, "( ( fstop > 0.0f ) )", "( fstop ) = %g", fstop) )
    __debugbreak();
  v5 = *(_OWORD *)&focusDistance;
  v6 = (float)((float)(objectDistance - *(float *)&focusDistance) * focalLength) * (float)(focalLength / fstop);
  *(float *)&v5 = (float)(*(float *)&focusDistance - focalLength) * objectDistance;
  _XMM2 = v5;
  __asm { vmaxss  xmm1, xmm2, cs:__real@34000000 }
  LODWORD(result) = COERCE_UNSIGNED_INT(v6 / *(float *)&_XMM1) & _xmm;
  return result;
}

/*
==============
R_GetEffectiveFocalLength
==============
*/

float __fastcall R_GetEffectiveFocalLength(float focalLength, double focusDistance, float minFocusDistance)
{
  float v3; 

  v3 = 0.0;
  _XMM9 = *(_OWORD *)&focusDistance;
  if ( focalLength <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dof_physical.cpp", 92, ASSERT_TYPE_ASSERT, "( ( focalLength > 0.0f ) )", "( focalLength ) = %g", focalLength) )
    __debugbreak();
  __asm { vmaxss  xmm1, xmm9, xmm8 }
  if ( focalLength < *(float *)&_XMM1 )
    v3 = (float)(focalLength * *(float *)&_XMM1) / (float)((float)(*(float *)&_XMM1 - focalLength) * *(float *)&_XMM1);
  return (float)(v3 + 1.0) * focalLength;
}

/*
==============
R_GetFocalLengthFromFovy
==============
*/
float R_GetFocalLengthFromFovy(float tanHalfFovY, float filmDiagonalLength, float aspectRatio)
{
  if ( tanHalfFovY <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dof_physical.cpp", 125, ASSERT_TYPE_ASSERT, "( ( tanHalfFovY > 0.0f ) )", "( tanHalfFovY ) = %g", tanHalfFovY) )
    __debugbreak();
  return (float)((float)(filmDiagonalLength / fsqrt((float)(aspectRatio * aspectRatio) + 1.0)) * 0.5) / tanHalfFovY;
}

/*
==============
R_GetFocusPlaneAndApertureFromRange
==============
*/

void __fastcall R_GetFocusPlaneAndApertureFromRange(float focalLength, double start, double end, float sharpCoc, float minFstop, float maxFstop, float minFocusDistance, float *focusDistance, float *fstop)
{
  __int128 v14; 
  __int128 v15; 
  __int128 v17; 
  float v19; 
  __int128 v20; 
  float v21; 
  float v24; 

  _XMM10 = *(_OWORD *)&start;
  _XMM9 = *(_OWORD *)&end;
  if ( focalLength <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dof_physical.cpp", 170, ASSERT_TYPE_ASSERT, "( ( focalLength > 0.0f ) )", "( focalLength ) = %g", focalLength) )
    __debugbreak();
  if ( sharpCoc <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dof_physical.cpp", 171, ASSERT_TYPE_ASSERT, "( ( sharpCoc > 0.0f ) )", "( sharpCoc ) = %g", sharpCoc) )
    __debugbreak();
  __asm
  {
    vmaxss  xmm6, xmm10, [rsp+88h+minFocusDistance]
    vmaxss  xmm1, xmm9, [rsp+88h+minFocusDistance]
  }
  v14 = _XMM6;
  *(float *)&v14 = (float)(*(float *)&_XMM6 * 2.0) * *(float *)&_XMM1;
  v15 = v14;
  v17 = _XMM6;
  *(float *)&v17 = *(float *)&_XMM6 + *(float *)&_XMM1;
  _XMM1 = v17;
  __asm { vmaxss  xmm0, xmm1, cs:__real@34000000 }
  v20 = v15;
  v19 = *(float *)&v15 / *(float *)&_XMM0;
  v21 = (float)((float)(*(float *)&v15 / *(float *)&_XMM0) - focalLength) * (float)(*(float *)&_XMM6 * sharpCoc);
  *(float *)&v20 = (float)(*(float *)&v15 / *(float *)&_XMM0) - *(float *)&_XMM6;
  _XMM1 = v20;
  __asm { vmaxss  xmm2, xmm1, cs:__real@34000000 }
  LODWORD(v24) = COERCE_UNSIGNED_INT(v21 / (float)(*(float *)&_XMM2 * focalLength)) & _xmm;
  *focusDistance = v19;
  *fstop = focalLength / v24;
  *(double *)&_XMM0 = I_fclamp(focalLength / v24, minFstop, maxFstop);
  *fstop = *(float *)&_XMM0;
  if ( (*(_DWORD *)focusDistance & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dof_physical.cpp", 186, ASSERT_TYPE_ASSERT, "(IS_FINITE(*focusDistance))", (const char *)&queryFormat, "IS_FINITE(*focusDistance)") )
    __debugbreak();
  if ( (*(_DWORD *)fstop & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dof_physical.cpp", 187, ASSERT_TYPE_ASSERT, "(IS_FINITE(*fstop))", (const char *)&queryFormat, "IS_FINITE(*fstop)") )
    __debugbreak();
}

/*
==============
R_GetFovyFromFocalLength
==============
*/
float R_GetFovyFromFocalLength(float focalLength, float filmDiagonalLength, float aspectRatio)
{
  if ( focalLength <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dof_physical.cpp", 140, ASSERT_TYPE_ASSERT, "( ( focalLength > 0.0f ) )", "( focalLength ) = %g", focalLength) )
    __debugbreak();
  return atanf_0((float)((float)(filmDiagonalLength / fsqrt((float)(aspectRatio * aspectRatio) + 1.0)) * 0.5) / focalLength) * 114.59155;
}

/*
==============
R_GetHyperfocalDistance
==============
*/
float R_GetHyperfocalDistance(float focalLength, float fstop, float sharpCoc)
{
  if ( fstop <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dof_physical.cpp", 154, ASSERT_TYPE_ASSERT, "( ( fstop > 0.0f ) )", "( fstop ) = %g", fstop) )
    __debugbreak();
  if ( sharpCoc <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dof_physical.cpp", 155, ASSERT_TYPE_ASSERT, "( ( sharpCoc > 0.0f ) )", "( sharpCoc ) = %g", sharpCoc) )
    __debugbreak();
  return (float)(focalLength * focalLength) / (float)(fstop * sharpCoc);
}

/*
==============
R_GetMaxCocDiameter
==============
*/
float R_GetMaxCocDiameter(float maxCocDiameter)
{
  float sceneHeight; 

  sceneHeight = (float)vidConfig.sceneHeight;
  return (float)(sceneHeight * maxCocDiameter) * 0.0020833334;
}

/*
==============
R_GetPhysicalDepthOfFieldEquationClip
==============
*/

void __fastcall R_GetPhysicalDepthOfFieldEquationClip(float focalLength, float fstop, double focusDistance, float screenWidth, float screenHeight, float filmDiagonalLength, float minFocusDistance, float znear, const vec3_t *clipToZ, float *scale, float *bias)
{
  __int128 v15; 

  _XMM11 = *(_OWORD *)&focusDistance;
  if ( focalLength <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dof_physical.cpp", 365, ASSERT_TYPE_ASSERT, "( ( focalLength > 0.0f ) )", "( focalLength ) = %g", focalLength) )
    __debugbreak();
  if ( fstop <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dof_physical.cpp", 366, ASSERT_TYPE_ASSERT, "( ( fstop > 0.0f ) )", "( fstop ) = %g", fstop) )
    __debugbreak();
  if ( znear <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dof_physical.cpp", 367, ASSERT_TYPE_ASSERT, "( ( znear > 0.0f ) )", "( znear ) = %g", znear) )
    __debugbreak();
  if ( clipToZ->v[0] <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dof_physical.cpp", 368, ASSERT_TYPE_ASSERT, "( ( clipToZ[0] > 0.0f ) )", "( clipToZ[0] ) = %g", clipToZ->v[0]) )
    __debugbreak();
  __asm { vmaxss  xmm4, xmm11, [rsp+98h+minFocusDistance] }
  v15 = _XMM4;
  *(float *)&v15 = *(float *)&_XMM4 - focalLength;
  _XMM0 = v15;
  __asm { vmaxss  xmm6, xmm0, cs:__real@34000000 }
  *scale = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)((float)(focalLength / fstop) * clipToZ->v[2]) * focalLength) * *(float *)&_XMM4) / (float)((float)(znear * clipToZ->v[0]) * *(float *)&_XMM6)) ^ _xmm);
  *bias = (float)((float)((float)(1.0 - (float)((float)(*(float *)&_XMM4 / (float)(znear * clipToZ->v[0])) * clipToZ->v[1])) * (float)(focalLength / fstop)) * focalLength) / *(float *)&_XMM6;
  R_ConvertScaleAndBiasToPixels(screenWidth, screenHeight, filmDiagonalLength, scale, bias);
}

/*
==============
R_GetPhysicalDepthOfFieldEquationLinear
==============
*/

void __fastcall R_GetPhysicalDepthOfFieldEquationLinear(float focalLength, float fstop, double focusDistance, float screenWidth, float screenHeight, float filmDiagonalLength, float minFocusDistance, float *scale, float *bias)
{
  float v11; 
  __int128 v13; 

  _XMM10 = *(_OWORD *)&focusDistance;
  if ( focalLength <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dof_physical.cpp", 385, ASSERT_TYPE_ASSERT, "( ( focalLength > 0.0f ) )", "( focalLength ) = %g", focalLength) )
    __debugbreak();
  if ( fstop <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dof_physical.cpp", 386, ASSERT_TYPE_ASSERT, "( ( fstop > 0.0f ) )", "( fstop ) = %g", fstop) )
    __debugbreak();
  __asm { vmaxss  xmm4, xmm10, [rsp+88h+minFocusDistance] }
  v11 = (float)(focalLength / fstop) * focalLength;
  v13 = _XMM4;
  *(float *)&v13 = *(float *)&_XMM4 - focalLength;
  _XMM1 = v13;
  __asm { vmaxss  xmm2, xmm1, cs:__real@34000000 }
  *scale = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v11 * *(float *)&_XMM4) * (float)(1.0 / *(float *)&_XMM2)) ^ _xmm);
  *bias = (float)(1.0 / *(float *)&_XMM2) * v11;
  R_ConvertScaleAndBiasToPixels(screenWidth, screenHeight, filmDiagonalLength, scale, bias);
}

/*
==============
R_GetScaledSharpCocDiameter
==============
*/
float R_GetScaledSharpCocDiameter(float sharpCocDiameter, float filmDiagonalLength)
{
  return (float)(filmDiagonalLength * 0.023148147) * sharpCocDiameter;
}

/*
==============
R_UpdateAperture
==============
*/

void __fastcall R_UpdateAperture(float targetFstop, double elapsedTime, float speed, float *currentFstop)
{
  __int128 v5; 
  double v8; 
  float v9; 
  double v10; 

  v5 = *(_OWORD *)&elapsedTime;
  *(float *)&v5 = *(float *)&elapsedTime * speed;
  _XMM1 = v5;
  __asm { vminss  xmm11, xmm1, xmm8 }
  v8 = I_fclamp(targetFstop, 0.125, 30.0);
  if ( *(float *)&v8 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dof_physical.cpp", 234, ASSERT_TYPE_ASSERT, "( ( targetFstop > 0.0f ) )", "( targetFstop ) = %g", *(float *)&v8) )
    __debugbreak();
  if ( *currentFstop <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dof_physical.cpp", 235, ASSERT_TYPE_ASSERT, "( ( *currentFstop > 0.0f ) )", "( *currentFstop ) = %g", *currentFstop) )
    __debugbreak();
  v9 = (float)((float)((float)(1.0 / *(float *)&v8) - (float)(1.0 / *currentFstop)) * *(float *)&_XMM11) + (float)(1.0 / *currentFstop);
  *currentFstop = 1.0 / v9;
  v10 = I_fclamp(1.0 / v9, 0.125, 30.0);
  *currentFstop = *(float *)&v10;
  if ( (LODWORD(v10) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dof_physical.cpp", 245, ASSERT_TYPE_ASSERT, "(IS_FINITE(*currentFstop))", (const char *)&queryFormat, "IS_FINITE(*currentFstop)") )
    __debugbreak();
}

/*
==============
R_UpdateCocScale
==============
*/

void __fastcall R_UpdateCocScale(float targetCocScale, double elapsedTime, float scaleSpeed, float *currentCocScale)
{
  __int128 v5; 

  v5 = *(_OWORD *)&elapsedTime;
  *(float *)&v5 = *(float *)&elapsedTime * scaleSpeed;
  _XMM1 = v5;
  __asm { vminss  xmm2, xmm1, cs:__real@3f800000 }
  *currentCocScale = (float)(*(float *)&_XMM2 * (float)(targetCocScale - *currentCocScale)) + *currentCocScale;
}

/*
==============
R_UpdateFocus
==============
*/

void __fastcall R_UpdateFocus(double focalLength, float fstop, double targetFocusDistance, double elapsedTime, float focusSpeed, float stiffness, float minFocusDistance, float *currentFocusDistance, float *currentGradient)
{
  __int128 v12; 
  char v13; 
  float v16; 
  __int128 v18; 
  __int128 v19; 
  __int128 v21; 
  __int128 v23; 
  __int128 v24; 
  float v25; 
  float v26; 
  __int128 v28; 
  __int128 v30; 
  __int128 v32; 
  __int64 v34; 
  __int64 v35; 
  __int128 v37; 
  double v39; 
  float CocFromObjectDistance; 
  float v41; 

  _XMM7 = *(_OWORD *)&elapsedTime;
  _XMM12 = *(_OWORD *)&targetFocusDistance;
  v12 = *(_OWORD *)&focalLength;
  if ( (LODWORD(fstop) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dof_physical.cpp", 259, ASSERT_TYPE_ASSERT, "(IS_FINITE(fstop))", (const char *)&queryFormat, "IS_FINITE(fstop)") )
    __debugbreak();
  if ( (LODWORD(focusSpeed) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dof_physical.cpp", 260, ASSERT_TYPE_ASSERT, "(IS_FINITE(focusSpeed))", (const char *)&queryFormat, "IS_FINITE(focusSpeed)") )
    __debugbreak();
  if ( (LODWORD(stiffness) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dof_physical.cpp", 261, ASSERT_TYPE_ASSERT, "(IS_FINITE(stiffness))", (const char *)&queryFormat, "IS_FINITE(stiffness)") )
    __debugbreak();
  if ( (*(_DWORD *)currentGradient & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dof_physical.cpp", 262, ASSERT_TYPE_ASSERT, "(IS_FINITE(*currentGradient))", (const char *)&queryFormat, "IS_FINITE(*currentGradient)") )
    __debugbreak();
  v13 = 0;
  __asm
  {
    vminss  xmm10, xmm7, cs:__real@42480000
    vmaxss  xmm7, xmm12, [rsp+0B8h+minFocusDistance]
  }
  *(float *)&focalLength = R_GetCocFromObjectDistance(*(float *)&focalLength, fstop, COERCE_DOUBLE((unsigned __int64)*(_DWORD *)currentFocusDistance), *(float *)&_XMM7);
  v16 = *currentFocusDistance;
  _XMM12 = *(_OWORD *)&focalLength;
  if ( *(float *)&v12 >= *currentFocusDistance )
  {
    v23 = LODWORD(FLOAT_10000_0);
    v13 = 1;
  }
  else
  {
    v19 = *(unsigned int *)currentFocusDistance;
    *(float *)&v19 = v16 * *(float *)&v12;
    v18 = v19;
    v21 = *(unsigned int *)currentFocusDistance;
    *(float *)&v21 = v16 - *(float *)&v12;
    _XMM1 = v21;
    __asm { vmaxss  xmm2, xmm1, xmm4 }
    v24 = v18;
    *(float *)&v24 = *(float *)&v18 / *(float *)&_XMM2;
    v23 = v24;
  }
  v26 = *(float *)&_XMM10 * *currentGradient;
  v25 = v26;
  if ( v26 > *(float *)&v12 || COERCE_FLOAT(v12 ^ _xmm) > v26 )
  {
    v30 = _XMM7;
    *(float *)&v30 = *(float *)&_XMM7 - *(float *)&v12;
    _XMM0 = v30;
    __asm { vmaxss  xmm1, xmm0, xmm4 }
    v32 = v12;
    *(float *)&v32 = (float)(*(float *)&v12 * *(float *)&_XMM7) / *(float *)&_XMM1;
    _XMM0 = v32;
    v13 = 1;
  }
  else
  {
    v28 = v23;
    *(float *)&v28 = *(float *)&v23 + v25;
    _XMM0 = v28;
  }
  __asm { vmaxss  xmm0, xmm0, xmm4 }
  HIDWORD(v35) = DWORD1(_XMM0);
  *(float *)&v35 = *(float *)&_XMM0 * *(float *)&v12;
  v34 = v35;
  v37 = _XMM0;
  *(float *)&v37 = *(float *)&_XMM0 - *(float *)&v12;
  _XMM0 = v37;
  __asm { vmaxss  xmm1, xmm0, xmm4 }
  DWORD1(v37) = HIDWORD(v34);
  *(float *)&v37 = *(float *)&v34 / *(float *)&_XMM1;
  v39 = *(double *)&v37;
  *currentFocusDistance = *(float *)&v37;
  if ( focusSpeed >= 0.050000001 )
  {
    *currentFocusDistance = *(float *)&_XMM7;
    v13 = 1;
    v39 = *(double *)&_XMM7;
  }
  CocFromObjectDistance = R_GetCocFromObjectDistance(*(float *)&v12, fstop, v39, *(float *)&_XMM7);
  if ( (LODWORD(CocFromObjectDistance) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dof_physical.cpp", 305, ASSERT_TYPE_ASSERT, "(IS_FINITE(nextCoc))", (const char *)&queryFormat, "IS_FINITE(nextCoc)") )
    __debugbreak();
  if ( v13 )
  {
    v41 = 0.0;
  }
  else
  {
    _XMM3 = LODWORD(FLOAT_N1_0);
    _XMM5 = LODWORD(FLOAT_1_0);
    __asm
    {
      vcmpltss xmm0, xmm12, xmm6
      vblendvps xmm2, xmm5, xmm3, xmm0
    }
    _XMM0 = 0i64;
    __asm
    {
      vcmpltss xmm1, xmm0, xmm7
      vblendvps xmm0, xmm3, xmm5, xmm1
    }
    v41 = (float)((float)(*(float *)&_XMM2 * *(float *)&_XMM0) * (float)((float)((float)((float)(1.0 - stiffness) * focusSpeed) * fstop) * CocFromObjectDistance)) + (float)(*currentGradient * stiffness);
  }
  *currentGradient = v41;
  if ( (*(_DWORD *)currentFocusDistance & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dof_physical.cpp", 316, ASSERT_TYPE_ASSERT, "(IS_FINITE(*currentFocusDistance))", (const char *)&queryFormat, "IS_FINITE(*currentFocusDistance)") )
    __debugbreak();
  if ( (*(_DWORD *)currentGradient & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dof_physical.cpp", 317, ASSERT_TYPE_ASSERT, "(IS_FINITE(*currentGradient))", (const char *)&queryFormat, "IS_FINITE(*currentGradient)") )
    __debugbreak();
}

/*
==============
R_UsingDepthOfField
==============
*/
bool R_UsingDepthOfField(const GfxViewInfo *viewInfo)
{
  if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dof_physical.cpp", 64, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  return !viewInfo->dofDisabled && (viewInfo->dofPhysical.cocScale > 0.0099999998 || viewInfo->dualViewScopeState.m_fade > 0.0);
}

