/*
==============
XAnimCurve_GetValueEaseInQuad
==============
*/

double __fastcall XAnimCurve_GetValueEaseInQuad(float time, float goalTime, float start, float goal)
{
  double result; 

  *(float *)&result = ?XAnimCurve_GetValueEaseInQuad@@YAMMMMM@Z(time, goalTime, start, goal);
  return result;
}

/*
==============
XAnimCurve_GetIDFromAssetName
==============
*/

XAnimCurveID __fastcall XAnimCurve_GetIDFromAssetName(const char *curveAssetName)
{
  return ?XAnimCurve_GetIDFromAssetName@@YA?AW4XAnimCurveID@@PEBD@Z(curveAssetName);
}

/*
==============
XAnimCurve_GetValue
==============
*/

double __fastcall XAnimCurve_GetValue(const XAnimCurve *curve, const float time)
{
  double result; 

  *(float *)&result = ?XAnimCurve_GetValue@@YAMPEBUXAnimCurve@@M@Z(curve, time);
  return result;
}

/*
==============
XAnimCurve_GetValueEaseInOutQuad
==============
*/

double __fastcall XAnimCurve_GetValueEaseInOutQuad(float time, float goalTime, float start, float goal)
{
  double result; 

  *(float *)&result = ?XAnimCurve_GetValueEaseInOutQuad@@YAMMMMM@Z(time, goalTime, start, goal);
  return result;
}

/*
==============
XAnimCurve_GetNameFromID
==============
*/

const char *__fastcall XAnimCurve_GetNameFromID(const XAnimCurveID curveID)
{
  return ?XAnimCurve_GetNameFromID@@YAPEBDW4XAnimCurveID@@@Z(curveID);
}

/*
==============
XAnimCurve_ClearCurves
==============
*/

void XAnimCurve_ClearCurves(void)
{
  ?XAnimCurve_ClearCurves@@YAXXZ();
}

/*
==============
XAnimCurve_GetValueEaseInSine
==============
*/

double __fastcall XAnimCurve_GetValueEaseInSine(float time, float goalTime, float start, float goal)
{
  double result; 

  *(float *)&result = ?XAnimCurve_GetValueEaseInSine@@YAMMMMM@Z(time, goalTime, start, goal);
  return result;
}

/*
==============
XAnimCurve_GetIDFromAsset
==============
*/

XAnimCurveID __fastcall XAnimCurve_GetIDFromAsset(XAnimCurve *const curve)
{
  return ?XAnimCurve_GetIDFromAsset@@YA?AW4XAnimCurveID@@QEAUXAnimCurve@@@Z(curve);
}

/*
==============
XAnimCurve_GetID
==============
*/

XAnimCurveID __fastcall XAnimCurve_GetID(const scr_string_t curveName)
{
  return ?XAnimCurve_GetID@@YA?AW4XAnimCurveID@@W4scr_string_t@@@Z(curveName);
}

/*
==============
XAnimCurve_GetValueEaseOutSine
==============
*/

double __fastcall XAnimCurve_GetValueEaseOutSine(float time, float goalTime, float start, float goal)
{
  double result; 

  *(float *)&result = ?XAnimCurve_GetValueEaseOutSine@@YAMMMMM@Z(time, goalTime, start, goal);
  return result;
}

/*
==============
XAnimCurve_InitCurves
==============
*/

void __fastcall XAnimCurve_InitCurves(bool isFullInit)
{
  ?XAnimCurve_InitCurves@@YAX_N@Z(isFullInit);
}

/*
==============
XAnimCurve_GetValueEaseOutCubic
==============
*/

double __fastcall XAnimCurve_GetValueEaseOutCubic(float time, float goalTime, float start, float goal)
{
  double result; 

  *(float *)&result = ?XAnimCurve_GetValueEaseOutCubic@@YAMMMMM@Z(time, goalTime, start, goal);
  return result;
}

/*
==============
XAnimCurve_GetIDFromPrimitiveCurveName
==============
*/

XAnimCurveID __fastcall XAnimCurve_GetIDFromPrimitiveCurveName(const scr_string_t primitiveCurve)
{
  return ?XAnimCurve_GetIDFromPrimitiveCurveName@@YA?AW4XAnimCurveID@@W4scr_string_t@@@Z(primitiveCurve);
}

/*
==============
XAnimCurve_GetValueEaseOutQuad
==============
*/

double __fastcall XAnimCurve_GetValueEaseOutQuad(float time, float goalTime, float start, float goal)
{
  double result; 

  *(float *)&result = ?XAnimCurve_GetValueEaseOutQuad@@YAMMMMM@Z(time, goalTime, start, goal);
  return result;
}

/*
==============
XAnimCurve_GetValueEaseInOutSine
==============
*/

double __fastcall XAnimCurve_GetValueEaseInOutSine(float time, float goalTime, float start, float goal)
{
  double result; 

  *(float *)&result = ?XAnimCurve_GetValueEaseInOutSine@@YAMMMMM@Z(time, goalTime, start, goal);
  return result;
}

/*
==============
XAnimCurve_GetValue
==============
*/

double __fastcall XAnimCurve_GetValue(const XAnimCurveID curveID, float time, float goalTime, float start, float goal)
{
  double result; 

  *(float *)&result = ?XAnimCurve_GetValue@@YAMW4XAnimCurveID@@MMMM@Z(curveID, time, goalTime, start, goal);
  return result;
}

/*
==============
XAnimCurve_GetValueEaseInCubic
==============
*/

double __fastcall XAnimCurve_GetValueEaseInCubic(float time, float goalTime, float start, float goal)
{
  double result; 

  *(float *)&result = ?XAnimCurve_GetValueEaseInCubic@@YAMMMMM@Z(time, goalTime, start, goal);
  return result;
}

/*
==============
XAnimCurve_GetValueLinear
==============
*/

double __fastcall XAnimCurve_GetValueLinear(float time, float goalTime, float start, float goal)
{
  double result; 

  *(float *)&result = ?XAnimCurve_GetValueLinear@@YAMMMMM@Z(time, goalTime, start, goal);
  return result;
}

/*
==============
XAnimCurve_GetValueEaseInOutCubic
==============
*/

double __fastcall XAnimCurve_GetValueEaseInOutCubic(float time, float goalTime, float start, float goal)
{
  double result; 

  *(float *)&result = ?XAnimCurve_GetValueEaseInOutCubic@@YAMMMMM@Z(time, goalTime, start, goal);
  return result;
}

/*
==============
XAnimCurve_GetPrimitiveCurveNames
==============
*/

const scr_string_t *__fastcall XAnimCurve_GetPrimitiveCurveNames(unsigned int *outNumCurves)
{
  return ?XAnimCurve_GetPrimitiveCurveNames@@YAPEBW4scr_string_t@@PEAI@Z(outNumCurves);
}

/*
==============
XAnimCurve_GetAssetFromID
==============
*/

XAnimCurve *__fastcall XAnimCurve_GetAssetFromID(const XAnimCurveID curveID)
{
  return ?XAnimCurve_GetAssetFromID@@YAPEAUXAnimCurve@@W4XAnimCurveID@@@Z(curveID);
}

/*
==============
XAnimCurve_GetValueLinear
==============
*/

float __fastcall XAnimCurve_GetValueLinear(double time, double goalTime, double start, double goal)
{
  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
    vxorps  xmm4, xmm4, xmm4
    vucomiss xmm1, xmm4
    vmovaps [rsp+78h+var_48], xmm9
    vmovaps xmm9, xmm0
    vmovaps xmm7, xmm3
    vmovaps xmm8, xmm2
    vmovaps xmm6, xmm1
    vmovss  xmm0, cs:__real@3f800000
    vdivss  xmm2, xmm9, xmm6
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm9, [rsp+78h+var_48]
    vsubss  xmm1, xmm0, xmm2
    vmulss  xmm3, xmm1, xmm8
    vmovaps xmm8, [rsp+78h+var_38]
    vmulss  xmm2, xmm2, xmm7
    vmovaps xmm7, [rsp+78h+var_28]
    vaddss  xmm0, xmm3, xmm2
  }
  return *(float *)&_XMM0;
}

/*
==============
XAnimCurve_GetValueEaseInQuad
==============
*/

float __fastcall XAnimCurve_GetValueEaseInQuad(double time, double goalTime, double start, double goal)
{
  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
    vxorps  xmm4, xmm4, xmm4
    vucomiss xmm1, xmm4
    vmovaps [rsp+78h+var_48], xmm9
    vmovaps xmm9, xmm0
    vmovaps xmm7, xmm3
    vmovaps xmm8, xmm2
    vmovaps xmm6, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vdivss  xmm0, xmm9, xmm6
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm9, [rsp+78h+var_48]
    vmulss  xmm4, xmm0, xmm0
    vmulss  xmm0, xmm4, xmm7
    vmovaps xmm7, [rsp+78h+var_28]
    vsubss  xmm2, xmm1, xmm4
    vmulss  xmm3, xmm2, xmm8
    vmovaps xmm8, [rsp+78h+var_38]
    vaddss  xmm0, xmm3, xmm0
  }
  return *(float *)&_XMM0;
}

/*
==============
XAnimCurve_GetValueEaseOutQuad
==============
*/

float __fastcall XAnimCurve_GetValueEaseOutQuad(double time, double goalTime, double start, double goal)
{
  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
    vxorps  xmm4, xmm4, xmm4
    vucomiss xmm1, xmm4
    vmovaps [rsp+78h+var_48], xmm9
    vmovaps xmm9, xmm0
    vmovaps xmm7, xmm3
    vmovaps xmm8, xmm2
    vmovaps xmm6, xmm1
    vmovss  xmm0, cs:__real@40000000
    vdivss  xmm2, xmm9, xmm6
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm9, [rsp+78h+var_48]
    vsubss  xmm1, xmm0, xmm2
    vmulss  xmm4, xmm1, xmm2
    vmovss  xmm2, cs:__real@3f800000
    vsubss  xmm0, xmm2, xmm4
    vmulss  xmm3, xmm0, xmm8
    vmovaps xmm8, [rsp+78h+var_38]
    vmulss  xmm1, xmm4, xmm7
    vmovaps xmm7, [rsp+78h+var_28]
    vaddss  xmm0, xmm3, xmm1
  }
  return *(float *)&_XMM0;
}

/*
==============
XAnimCurve_GetValueEaseInOutQuad
==============
*/

float __fastcall XAnimCurve_GetValueEaseInOutQuad(double time, double goalTime, double start, double goal)
{
  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
    vxorps  xmm4, xmm4, xmm4
    vucomiss xmm1, xmm4
    vmovaps [rsp+78h+var_48], xmm9
    vmovaps xmm9, xmm2
    vmovaps xmm8, xmm3
    vmovaps xmm6, xmm1
    vmovaps xmm7, xmm0
    vmovss  xmm0, cs:__real@3f000000
    vmovss  xmm4, cs:__real@3f800000
    vdivss  xmm1, xmm7, xmm6
    vcomiss xmm1, xmm0
    vsubss  xmm0, xmm1, xmm0
    vmulss  xmm2, xmm0, cs:__real@40000000
    vsubss  xmm0, xmm2, cs:__real@40000000
    vmulss  xmm1, xmm0, xmm2
    vsubss  xmm2, xmm1, xmm4
    vmulss  xmm3, xmm2, cs:__real@bf000000
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm2, xmm0, xmm9
    vmovaps xmm9, [rsp+78h+var_48]
    vmulss  xmm1, xmm3, xmm8
    vmovaps xmm8, [rsp+78h+var_38]
    vaddss  xmm0, xmm2, xmm1
  }
  return *(float *)&_XMM0;
}

/*
==============
XAnimCurve_GetValueEaseInCubic
==============
*/

float __fastcall XAnimCurve_GetValueEaseInCubic(double time, double goalTime, double start, double goal)
{
  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
    vxorps  xmm4, xmm4, xmm4
    vucomiss xmm1, xmm4
    vmovaps [rsp+78h+var_48], xmm9
    vmovaps xmm9, xmm0
    vmovaps xmm7, xmm3
    vmovaps xmm8, xmm2
    vmovaps xmm6, xmm1
    vdivss  xmm1, xmm9, xmm6
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm9, [rsp+78h+var_48]
    vmulss  xmm0, xmm1, xmm1
    vmulss  xmm4, xmm0, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vmulss  xmm0, xmm4, xmm7
    vmovaps xmm7, [rsp+78h+var_28]
    vsubss  xmm2, xmm1, xmm4
    vmulss  xmm3, xmm2, xmm8
    vmovaps xmm8, [rsp+78h+var_38]
    vaddss  xmm0, xmm3, xmm0
  }
  return *(float *)&_XMM0;
}

/*
==============
XAnimCurve_GetValueEaseOutCubic
==============
*/

float __fastcall XAnimCurve_GetValueEaseOutCubic(double time, double goalTime, double start, double goal)
{
  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
    vxorps  xmm4, xmm4, xmm4
    vucomiss xmm1, xmm4
    vmovaps [rsp+78h+var_48], xmm9
    vmovaps xmm9, xmm0
    vmovaps xmm7, xmm3
    vmovaps xmm8, xmm2
    vmovaps xmm6, xmm1
    vmovss  xmm2, cs:__real@3f800000
    vdivss  xmm0, xmm9, xmm6
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm9, [rsp+78h+var_48]
    vsubss  xmm1, xmm0, xmm2
    vmulss  xmm0, xmm1, xmm1
    vmulss  xmm1, xmm0, xmm1
    vaddss  xmm3, xmm1, xmm2
    vsubss  xmm0, xmm2, xmm3
    vmulss  xmm2, xmm0, xmm8
    vmovaps xmm8, [rsp+78h+var_38]
    vmulss  xmm1, xmm3, xmm7
    vmovaps xmm7, [rsp+78h+var_28]
    vaddss  xmm0, xmm2, xmm1
  }
  return *(float *)&_XMM0;
}

/*
==============
XAnimCurve_GetValueEaseInOutCubic
==============
*/

float __fastcall XAnimCurve_GetValueEaseInOutCubic(double time, double goalTime, double start, double goal)
{
  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
    vxorps  xmm4, xmm4, xmm4
    vucomiss xmm1, xmm4
    vmovaps [rsp+78h+var_48], xmm9
    vmovaps xmm9, xmm2
    vmovaps xmm8, xmm3
    vmovaps xmm6, xmm1
    vmovaps xmm7, xmm0
    vmovss  xmm1, cs:__real@40000000
    vmovss  xmm4, cs:__real@3f800000
    vdivss  xmm0, xmm7, xmm6
    vmulss  xmm2, xmm0, xmm1
    vcomiss xmm2, xmm4
    vsubss  xmm1, xmm2, xmm1
    vmulss  xmm0, xmm1, xmm1
    vmulss  xmm1, xmm0, xmm1
    vmulss  xmm2, xmm1, cs:__real@3f000000
    vaddss  xmm3, xmm2, xmm4
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm2, xmm0, xmm9
    vmovaps xmm9, [rsp+78h+var_48]
    vmulss  xmm1, xmm3, xmm8
    vmovaps xmm8, [rsp+78h+var_38]
    vaddss  xmm0, xmm2, xmm1
  }
  return *(float *)&_XMM0;
}

/*
==============
XAnimCurve_GetValueEaseInSine
==============
*/

float __fastcall XAnimCurve_GetValueEaseInSine(double time, double goalTime, double start, double goal)
{
  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
    vxorps  xmm4, xmm4, xmm4
    vucomiss xmm1, xmm4
    vmovaps [rsp+78h+var_48], xmm9
    vmovaps xmm9, xmm0
    vmovaps xmm7, xmm3
    vmovaps xmm8, xmm2
    vmovaps xmm6, xmm1
    vdivss  xmm0, xmm9, xmm6
    vmulss  xmm0, xmm0, cs:__real@3fc90fdb; X
  }
  cosf_0(*(float *)&_XMM0);
  __asm
  {
    vmovss  xmm1, cs:__real@3f800000
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm9, [rsp+78h+var_48]
    vsubss  xmm3, xmm1, xmm0
    vsubss  xmm0, xmm1, xmm3
    vmulss  xmm2, xmm0, xmm8
    vmovaps xmm8, [rsp+78h+var_38]
    vmulss  xmm1, xmm3, xmm7
    vmovaps xmm7, [rsp+78h+var_28]
    vaddss  xmm0, xmm2, xmm1
  }
  return *(float *)&_XMM0;
}

/*
==============
XAnimCurve_GetValueEaseOutSine
==============
*/

float __fastcall XAnimCurve_GetValueEaseOutSine(double time, double goalTime, double start, double goal)
{
  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
    vxorps  xmm4, xmm4, xmm4
    vucomiss xmm1, xmm4
    vmovaps [rsp+78h+var_48], xmm9
    vmovaps xmm9, xmm0
    vmovaps xmm7, xmm3
    vmovaps xmm8, xmm2
    vmovaps xmm6, xmm1
    vdivss  xmm0, xmm9, xmm6
    vmulss  xmm0, xmm0, cs:__real@3fc90fdb; X
  }
  *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
  __asm
  {
    vmovss  xmm1, cs:__real@3f800000
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm9, [rsp+78h+var_48]
    vsubss  xmm2, xmm1, xmm0
    vmulss  xmm3, xmm2, xmm8
    vmovaps xmm8, [rsp+78h+var_38]
    vmulss  xmm0, xmm0, xmm7
    vmovaps xmm7, [rsp+78h+var_28]
    vaddss  xmm0, xmm3, xmm0
  }
  return *(float *)&_XMM0;
}

/*
==============
XAnimCurve_GetValueEaseInOutSine
==============
*/

float __fastcall XAnimCurve_GetValueEaseInOutSine(double time, double goalTime, double start, double goal)
{
  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
    vxorps  xmm4, xmm4, xmm4
    vucomiss xmm1, xmm4
    vmovaps [rsp+78h+var_48], xmm9
    vmovaps xmm9, xmm0
    vmovaps xmm7, xmm3
    vmovaps xmm8, xmm2
    vmovaps xmm6, xmm1
    vdivss  xmm0, xmm9, xmm6
    vsubss  xmm0, xmm0, cs:__real@3f000000
    vmulss  xmm0, xmm0, cs:__real@40490fdb; X
  }
  *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
  __asm
  {
    vmovss  xmm1, cs:__real@3f800000
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm9, [rsp+78h+var_48]
    vaddss  xmm0, xmm0, xmm1
    vmulss  xmm3, xmm0, cs:__real@3f000000
    vmulss  xmm0, xmm3, xmm7
    vmovaps xmm7, [rsp+78h+var_28]
    vsubss  xmm1, xmm1, xmm3
    vmulss  xmm2, xmm1, xmm8
    vmovaps xmm8, [rsp+78h+var_38]
    vaddss  xmm0, xmm2, xmm0
  }
  return *(float *)&_XMM0;
}

/*
==============
XAnimCurve_ClearCurves
==============
*/
void XAnimCurve_ClearCurves(void)
{
  s_xAnimCurvesInitialized = 0;
  memset_0(s_xAnimCurveDefs, 0, sizeof(s_xAnimCurveDefs));
}

/*
==============
XAnimCurve_GetAssetFromID
==============
*/
XAnimCurve *XAnimCurve_GetAssetFromID(const XAnimCurveID curveID)
{
  __int64 v2; 
  bool v3; 
  XAnimCurve **v4; 

  if ( !s_xAnimCurvesInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_curve.cpp", 164, ASSERT_TYPE_ASSERT, "(s_xAnimCurvesInitialized)", (const char *)&queryFormat, "s_xAnimCurvesInitialized") )
    __debugbreak();
  if ( (unsigned __int8)curveID >= CURVE_ASSET_END && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_curve.cpp", 165, ASSERT_TYPE_ASSERT, "(curveID < XAnimCurveID::MAX)", (const char *)&queryFormat, "curveID < XAnimCurveID::MAX") )
    __debugbreak();
  v2 = (unsigned int)(unsigned __int8)curveID - 10;
  if ( (unsigned int)v2 >= 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_curve.cpp", 168, ASSERT_TYPE_ASSERT, "(assetIndex < 32)", (const char *)&queryFormat, "assetIndex < MAX_XANIMCURVE_ASSET_DEFS") )
    __debugbreak();
  v3 = s_xAnimCurveDefs[v2] == NULL;
  v4 = &s_xAnimCurveDefs[v2];
  if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_curve.cpp", 170, ASSERT_TYPE_ASSERT, "(s_xAnimCurveDefs[assetIndex])", (const char *)&queryFormat, "s_xAnimCurveDefs[assetIndex]") )
    __debugbreak();
  return *v4;
}

/*
==============
XAnimCurve_GetID
==============
*/
char XAnimCurve_GetID(const scr_string_t curveName)
{
  __int64 v2; 
  const char *v3; 
  unsigned int outIndex; 

  if ( !curveName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_curve.cpp", 211, ASSERT_TYPE_ASSERT, "(primitiveCurve != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "primitiveCurve != NULL_SCR_STRING") )
    __debugbreak();
  v2 = 0i64;
  do
  {
    if ( *s_xAnimPrimitiveCurveNames[v2] == curveName )
      return v2;
    v2 = (unsigned int)(v2 + 1);
  }
  while ( (unsigned int)v2 < 0xA );
  v3 = SL_ConvertToString(curveName);
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_curve.cpp", 197, ASSERT_TYPE_ASSERT, "(curveAssetName)", (const char *)&queryFormat, "curveAssetName") )
    __debugbreak();
  if ( NetConstStrings_GetIndexFromName(NETCONSTSTRINGTYPE_XANIMCURVE, v3, &outIndex) )
    return outIndex + 10;
  else
    return 42;
}

/*
==============
XAnimCurve_GetIDFromAsset
==============
*/
char XAnimCurve_GetIDFromAsset(XAnimCurve *const curve)
{
  int v2; 
  XAnimCurve *const *v3; 

  if ( !s_xAnimCurvesInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_curve.cpp", 150, ASSERT_TYPE_ASSERT, "(s_xAnimCurvesInitialized)", (const char *)&queryFormat, "s_xAnimCurvesInitialized") )
    __debugbreak();
  if ( !curve && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_curve.cpp", 134, ASSERT_TYPE_ASSERT, "(curve)", (const char *)&queryFormat, "curve") )
    __debugbreak();
  v2 = 0;
  v3 = s_xAnimCurveDefs;
  while ( *v3 != curve )
  {
    ++v2;
    if ( (__int64)++v3 >= (__int64)&unk_15007C820 )
      return 42;
  }
  if ( v2 == 32 )
    return 42;
  return v2 + 10;
}

/*
==============
XAnimCurve_GetIDFromAssetName
==============
*/
char XAnimCurve_GetIDFromAssetName(const char *curveAssetName)
{
  unsigned int outIndex; 

  if ( !curveAssetName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_curve.cpp", 197, ASSERT_TYPE_ASSERT, "(curveAssetName)", (const char *)&queryFormat, "curveAssetName") )
    __debugbreak();
  if ( NetConstStrings_GetIndexFromName(NETCONSTSTRINGTYPE_XANIMCURVE, curveAssetName, &outIndex) )
    return outIndex + 10;
  else
    return 42;
}

/*
==============
XAnimCurve_GetIDFromPrimitiveCurveName
==============
*/
XAnimCurveID XAnimCurve_GetIDFromPrimitiveCurveName(const scr_string_t primitiveCurve)
{
  __int64 v2; 

  if ( !primitiveCurve && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_curve.cpp", 211, ASSERT_TYPE_ASSERT, "(primitiveCurve != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "primitiveCurve != NULL_SCR_STRING") )
    __debugbreak();
  v2 = 0i64;
  while ( *s_xAnimPrimitiveCurveNames[v2] != primitiveCurve )
  {
    v2 = (unsigned int)(v2 + 1);
    if ( (unsigned int)v2 >= 0xA )
    {
      LOBYTE(v2) = 42;
      return (char)v2;
    }
  }
  return (char)v2;
}

/*
==============
XAnimCurve_GetNameFromID
==============
*/
const char *XAnimCurve_GetNameFromID(const XAnimCurveID curveID)
{
  XAnimCurve *AssetFromID; 

  if ( (unsigned __int8)curveID >= CURVE_ASSET_END && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_curve.cpp", 179, ASSERT_TYPE_ASSERT, "(curveID < XAnimCurveID::MAX)", (const char *)&queryFormat, "curveID < XAnimCurveID::MAX") )
    __debugbreak();
  if ( (unsigned __int8)curveID < CURVE_ASSET_START )
    return SL_ConvertToString((scr_string_t)*s_xAnimPrimitiveCurveNames[(unsigned __int8)curveID]);
  AssetFromID = XAnimCurve_GetAssetFromID(curveID);
  if ( !AssetFromID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_curve.cpp", 185, ASSERT_TYPE_ASSERT, "(curveAsset)", (const char *)&queryFormat, "curveAsset") )
    __debugbreak();
  return AssetFromID->name;
}

/*
==============
XAnimCurve_GetPrimitiveCurveNames
==============
*/
const scr_string_t *XAnimCurve_GetPrimitiveCurveNames(unsigned int *outNumCurves)
{
  const scr_string_t *result; 

  if ( outNumCurves )
  {
    result = s_xAnimPrimitiveCurveNames[0];
    *outNumCurves = 10;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_curve.cpp", 245, ASSERT_TYPE_ASSERT, "(outNumCurves)", (const char *)&queryFormat, "outNumCurves") )
      __debugbreak();
    result = s_xAnimPrimitiveCurveNames[0];
    MEMORY[0] = 10;
  }
  return result;
}

/*
==============
XAnimCurve_GetValue
==============
*/

float __fastcall XAnimCurve_GetValue(const XAnimCurve *curve, double time)
{
  __int64 numControlPoints; 
  unsigned __int64 v6; 
  int v8; 
  int v9; 
  int v10; 
  bool v12; 
  bool v28; 
  bool v30; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  if ( !curve && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_curve.cpp", 401, ASSERT_TYPE_ASSERT, "(curve)", (const char *)&queryFormat, "curve") )
    __debugbreak();
  if ( curve->numControlPoints < 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_curve.cpp", 406, ASSERT_TYPE_ASSERT, "(curve->numControlPoints >= 2)", (const char *)&queryFormat, "curve->numControlPoints >= 2") )
    __debugbreak();
  numControlPoints = curve->numControlPoints;
  v6 = 0i64;
  _RDI = curve->controlPoints;
  v8 = 0;
  if ( (int)numControlPoints <= 8 )
  {
    v28 = (unsigned __int64)numControlPoints <= 4;
    if ( numControlPoints < 4 )
    {
LABEL_33:
      v30 = v6 <= numControlPoints;
      if ( (__int64)v6 < numControlPoints )
      {
        _RDX = &_RDI[v6];
        do
        {
          __asm { vcomiss xmm6, dword ptr [rdx] }
          if ( v30 )
            break;
          ++v8;
          ++v6;
          ++_RDX;
          v30 = v6 <= numControlPoints;
        }
        while ( (__int64)v6 < numControlPoints );
      }
    }
    else
    {
      _RDX = _RDI + 2;
      while ( 1 )
      {
        __asm { vcomiss xmm6, dword ptr [rdx-18h] }
        if ( v28 )
          break;
        __asm
        {
          vcomiss xmm6, dword ptr [rdx-0Ch]
          vcomiss xmm6, dword ptr [rdx]
          vcomiss xmm6, dword ptr [rdx+0Ch]
        }
        v8 += 4;
        v6 += 4i64;
        _RDX += 4;
        v28 = v6 <= numControlPoints - 3;
        if ( (__int64)v6 >= numControlPoints - 3 )
          goto LABEL_33;
      }
    }
    if ( v8 == (_DWORD)numControlPoints )
    {
      _RCX = 3i64 * v8;
      __asm { vmovss  xmm0, dword ptr [rdi+rcx*4-8] }
      goto LABEL_40;
    }
  }
  else
  {
    v9 = numControlPoints - 1;
    if ( (int)numControlPoints - 1 >= 0 )
    {
      do
      {
        v10 = (v9 + v8) >> 1;
        _RCX = 3i64 * v10;
        __asm { vcomiss xmm6, dword ptr [rdi+rcx*4] }
        if ( ((_BYTE)v9 + (_BYTE)v8) & 1 | (v10 == 0) )
        {
          if ( !(((_BYTE)v9 + (_BYTE)v8) & 1) )
          {
            _RCX = 3i64 * v8;
            __asm { vmovss  xmm0, dword ptr [rdi+rcx*4+4] }
            goto LABEL_40;
          }
          v9 = v10 - 1;
        }
        else
        {
          v8 = v10 + 1;
        }
      }
      while ( v8 <= v9 );
    }
    v12 = v8 == (_DWORD)numControlPoints;
    if ( v8 > (int)numControlPoints )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_curve.cpp", 433, ASSERT_TYPE_ASSERT, "(controlPointIndex <= numControlPoints)", (const char *)&queryFormat, "controlPointIndex <= numControlPoints") )
        __debugbreak();
      v12 = v8 == (_DWORD)numControlPoints;
    }
    if ( v12 )
    {
      _RCX = 3 * numControlPoints;
      __asm { vmovss  xmm0, dword ptr [rdi+rcx*4-8] }
      goto LABEL_40;
    }
    if ( (v8 < 0 || v8 >= (int)numControlPoints) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_curve.cpp", 439, ASSERT_TYPE_ASSERT, "(controlPointIndex >= 0 && controlPointIndex < numControlPoints)", (const char *)&queryFormat, "controlPointIndex >= 0 && controlPointIndex < numControlPoints") )
      __debugbreak();
  }
  if ( v8 <= 0 )
  {
    __asm { vmovss  xmm0, dword ptr [rdi+4] }
  }
  else
  {
    __asm
    {
      vsubss  xmm0, xmm6, dword ptr [rdi+rcx*4-0Ch]
      vmulss  xmm4, xmm0, dword ptr [rdi+rcx*4+8]
    }
    if ( curve->curveType == XANIM_CURVE_TYPE_SMOOTHSTEP )
    {
      __asm
      {
        vmulss  xmm0, xmm4, cs:__real@40c00000
        vsubss  xmm1, xmm0, cs:__real@41700000
        vmulss  xmm2, xmm1, xmm4
        vaddss  xmm3, xmm2, cs:__real@41200000
        vmulss  xmm0, xmm4, xmm4
        vmulss  xmm1, xmm0, xmm4
        vmulss  xmm4, xmm3, xmm1
      }
    }
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vsubss  xmm1, xmm0, xmm4
      vmulss  xmm2, xmm1, dword ptr [rdi+rcx*4-8]
      vmulss  xmm0, xmm4, dword ptr [rdi+rcx*4+4]
      vaddss  xmm0, xmm2, xmm0
    }
  }
LABEL_40:
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
  return *(float *)&_XMM0;
}

/*
==============
XAnimCurve_GetValue
==============
*/

float __fastcall XAnimCurve_GetValue(const XAnimCurveID curveID, double time, double goalTime, double start, float goal)
{
  double (__fastcall *v14)(float, float, float, float); 
  const XAnimCurve *AssetFromID; 
  bool v20; 
  bool v21; 
  __int64 numControlPoints; 
  bool v25; 

  __asm
  {
    vmovaps [rsp+98h+var_28], xmm7
    vmovaps [rsp+98h+var_48], xmm9
    vmovaps [rsp+98h+var_58], xmm10
    vmovaps xmm10, xmm1
    vmovaps xmm9, xmm3
    vmovaps xmm7, xmm2
  }
  if ( (unsigned __int8)curveID >= CURVE_ASSET_END && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_curve.cpp", 479, ASSERT_TYPE_ASSERT, "(curveID < XAnimCurveID::MAX)", (const char *)&queryFormat, "curveID < XAnimCurveID::MAX") )
    __debugbreak();
  if ( (unsigned __int8)curveID >= CURVE_ASSET_START )
  {
    __asm
    {
      vmovaps [rsp+98h+var_18], xmm6
      vmovaps [rsp+98h+var_38], xmm8
    }
    AssetFromID = XAnimCurve_GetAssetFromID(curveID);
    v20 = AssetFromID == NULL;
    if ( !AssetFromID )
    {
      v21 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_curve.cpp", 493, ASSERT_TYPE_ASSERT, "(curveAsset)", (const char *)&queryFormat, "curveAsset");
      v20 = !v21;
      if ( v21 )
        __debugbreak();
    }
    __asm
    {
      vxorps  xmm8, xmm8, xmm8
      vucomiss xmm7, xmm8
    }
    if ( v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_curve.cpp", 494, ASSERT_TYPE_ASSERT, "(goalTime != 0.f)", (const char *)&queryFormat, "goalTime != 0.f") )
      __debugbreak();
    if ( !AssetFromID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_curve.cpp", 379, ASSERT_TYPE_ASSERT, "(curve)", (const char *)&queryFormat, "curve") )
      __debugbreak();
    numControlPoints = AssetFromID->numControlPoints;
    __asm { vmovss  xmm6, cs:__real@3f800000 }
    v25 = (_DWORD)numControlPoints == 0;
    if ( (int)numControlPoints <= 0 )
      goto LABEL_27;
    _RCX = 3 * numControlPoints;
    _RAX = AssetFromID->controlPoints;
    __asm { vcomiss xmm6, dword ptr [rax+rcx*4-8] }
    if ( !v25 )
    {
LABEL_27:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_curve.cpp", 497, ASSERT_TYPE_ASSERT, "(XAnimCurve_IsValidForBlending( curveAsset ))", "%s\n\tCurve '%s' is not valid for blending. Last control point value must be >= 1.0.", "XAnimCurve_IsValidForBlending( curveAsset )", AssetFromID->name) )
        __debugbreak();
    }
    __asm
    {
      vdivss  xmm0, xmm10, xmm7
      vmulss  xmm1, xmm0, dword ptr [rbx+18h]; time
    }
    *(double *)&_XMM0 = XAnimCurve_GetValue(AssetFromID, *(const float *)&_XMM1);
    __asm
    {
      vmaxss  xmm1, xmm0, xmm8
      vmovaps xmm8, [rsp+98h+var_38]
      vsubss  xmm0, xmm6, xmm1
      vmulss  xmm1, xmm1, [rsp+98h+goal]
      vmovaps xmm6, [rsp+98h+var_18]
      vmulss  xmm2, xmm0, xmm9
      vaddss  xmm0, xmm2, xmm1
    }
  }
  else
  {
    v14 = (double (__fastcall *)(float, float, float, float))s_xAnimPrimitiveCurveFunctions[(unsigned __int8)curveID];
    if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_curve.cpp", 485, ASSERT_TYPE_ASSERT, "(calcFunction)", (const char *)&queryFormat, "calcFunction") )
      __debugbreak();
    __asm
    {
      vmovss  xmm3, [rsp+98h+goal]; goal
      vmovaps xmm2, xmm9; start
      vmovaps xmm1, xmm7; goalTime
      vmovaps xmm0, xmm10; time
    }
    *(double *)&_XMM0 = v14(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  }
  __asm
  {
    vmovaps xmm7, [rsp+98h+var_28]
    vmovaps xmm9, [rsp+98h+var_48]
    vmovaps xmm10, [rsp+98h+var_58]
  }
  return *(float *)&_XMM0;
}

/*
==============
XAnimCurve_InitCurves
==============
*/
void XAnimCurve_InitCurves(bool isFullInit)
{
  if ( isFullInit )
  {
    if ( s_xAnimCurvesInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_curve.cpp", 102, ASSERT_TYPE_ASSERT, "(!s_xAnimCurvesInitialized)", (const char *)&queryFormat, "!s_xAnimCurvesInitialized") )
      __debugbreak();
    s_xAnimCurvesInitialized = 1;
    NetConstStrings_CallForAllXAnimCurveStrings(XAnimCurve_LoadCache_Callback);
  }
  else
  {
    if ( !s_xAnimCurvesInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_curve.cpp", 113, ASSERT_TYPE_ASSERT, "(s_xAnimCurvesInitialized)", (const char *)&queryFormat, "s_xAnimCurvesInitialized") )
      __debugbreak();
    NetConstStrings_CallForAllXAnimCurveStrings(XAnimCurve_Validate_Callback);
  }
}

/*
==============
XAnimCurve_LoadCache_Callback
==============
*/
void XAnimCurve_LoadCache_Callback(const unsigned int curveAssetIndex, const char *curveName)
{
  XAnimCurve *v2; 
  __int64 v3; 

  v2 = NULL;
  v3 = curveAssetIndex;
  if ( !curveName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_curve.cpp", 70, ASSERT_TYPE_ASSERT, "(curveName)", (const char *)&queryFormat, "curveName") )
    __debugbreak();
  if ( (unsigned int)v3 >= 0x20 )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441B2758, 506i64);
  if ( *curveName )
    v2 = XAnimCurve_Register(curveName);
  s_xAnimCurveDefs[v3] = v2;
}

/*
==============
XAnimCurve_Validate_Callback
==============
*/
void XAnimCurve_Validate_Callback(const unsigned int curveAssetIndex, const char *curveName)
{
  __int64 v2; 
  const char *v3; 
  XAnimCurve **v4; 
  __int64 v5; 
  const char *name; 
  signed __int64 v7; 
  int v8; 
  __int64 v9; 
  int v10; 
  int v11; 
  int v12; 
  __int64 v13; 

  v2 = curveAssetIndex;
  v3 = curveName;
  if ( !curveName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_curve.cpp", 89, ASSERT_TYPE_ASSERT, "(curveName)", (const char *)&queryFormat, "curveName") )
    __debugbreak();
  if ( (unsigned int)v2 >= 0x20 )
  {
    LODWORD(v13) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_curve.cpp", 90, ASSERT_TYPE_ASSERT, "(unsigned)( curveAssetIndex ) < (unsigned)( 32 )", "curveAssetIndex doesn't index MAX_XANIMCURVE_ASSET_DEFS\n\t%i not in [0, %i)", v13, 32) )
      __debugbreak();
  }
  v4 = &s_xAnimCurveDefs[v2];
  if ( !*v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_curve.cpp", 92, ASSERT_TYPE_ASSERT, "(s_xAnimCurveDefs[curveAssetIndex])", (const char *)&queryFormat, "s_xAnimCurveDefs[curveAssetIndex]") )
    __debugbreak();
  v5 = 0x7FFFFFFFi64;
  name = (*v4)->name;
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
    __debugbreak();
  v7 = name - v3;
  do
  {
    v8 = (unsigned __int8)v3[v7];
    v9 = v5;
    v10 = *(unsigned __int8 *)v3++;
    --v5;
    if ( !v9 )
      break;
    if ( v8 != v10 )
    {
      v11 = v8 + 32;
      if ( (unsigned int)(v8 - 65) > 0x19 )
        v11 = v8;
      v8 = v11;
      v12 = v10 + 32;
      if ( (unsigned int)(v10 - 65) > 0x19 )
        v12 = v10;
      if ( v8 != v12 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_curve.cpp", 93, ASSERT_TYPE_ASSERT, "(!I_stricmp( s_xAnimCurveDefs[curveAssetIndex]->name, curveName ))", "%s\n\tInvalid XAnimCurve mapping", "!I_stricmp( s_xAnimCurveDefs[curveAssetIndex]->name, curveName )") )
          __debugbreak();
        return;
      }
    }
  }
  while ( v8 );
}

