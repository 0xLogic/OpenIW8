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
float XAnimCurve_GetValueLinear(float time, float goalTime, float start, float goal)
{
  if ( goalTime == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_curve.cpp", 254, ASSERT_TYPE_ASSERT, "(goalTime != 0.f)", (const char *)&queryFormat, "goalTime != 0.f") )
    __debugbreak();
  return (float)((float)(1.0 - (float)(time / goalTime)) * start) + (float)((float)(time / goalTime) * goal);
}

/*
==============
XAnimCurve_GetValueEaseInQuad
==============
*/
float XAnimCurve_GetValueEaseInQuad(float time, float goalTime, float start, float goal)
{
  if ( goalTime == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_curve.cpp", 262, ASSERT_TYPE_ASSERT, "(goalTime != 0.f)", (const char *)&queryFormat, "goalTime != 0.f") )
    __debugbreak();
  return (float)((float)(1.0 - (float)((float)(time / goalTime) * (float)(time / goalTime))) * start) + (float)((float)((float)(time / goalTime) * (float)(time / goalTime)) * goal);
}

/*
==============
XAnimCurve_GetValueEaseOutQuad
==============
*/
float XAnimCurve_GetValueEaseOutQuad(float time, float goalTime, float start, float goal)
{
  if ( goalTime == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_curve.cpp", 273, ASSERT_TYPE_ASSERT, "(goalTime != 0.f)", (const char *)&queryFormat, "goalTime != 0.f") )
    __debugbreak();
  return (float)((float)(1.0 - (float)((float)(2.0 - (float)(time / goalTime)) * (float)(time / goalTime))) * start) + (float)((float)((float)(2.0 - (float)(time / goalTime)) * (float)(time / goalTime)) * goal);
}

/*
==============
XAnimCurve_GetValueEaseInOutQuad
==============
*/
float XAnimCurve_GetValueEaseInOutQuad(float time, float goalTime, float start, float goal)
{
  float v6; 
  float v7; 
  float v8; 

  if ( goalTime == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_curve.cpp", 286, ASSERT_TYPE_ASSERT, "(goalTime != 0.f)", (const char *)&queryFormat, "goalTime != 0.f") )
    __debugbreak();
  v7 = time / goalTime;
  v6 = time / goalTime;
  if ( (float)(time / goalTime) >= 0.5 )
    v8 = (float)((float)((float)((float)((float)(v7 - 0.5) * 2.0) - 2.0) * (float)((float)(v7 - 0.5) * 2.0)) - 1.0) * -0.5;
  else
    v8 = (float)(v6 * 2.0) * v6;
  return (float)((float)(1.0 - v8) * start) + (float)(v8 * goal);
}

/*
==============
XAnimCurve_GetValueEaseInCubic
==============
*/
float XAnimCurve_GetValueEaseInCubic(float time, float goalTime, float start, float goal)
{
  float v4; 

  if ( goalTime == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_curve.cpp", 306, ASSERT_TYPE_ASSERT, "(goalTime != 0.f)", (const char *)&queryFormat, "goalTime != 0.f") )
    __debugbreak();
  v4 = (float)((float)(time / goalTime) * (float)(time / goalTime)) * (float)(time / goalTime);
  return (float)((float)(1.0 - v4) * start) + (float)(v4 * goal);
}

/*
==============
XAnimCurve_GetValueEaseOutCubic
==============
*/
float XAnimCurve_GetValueEaseOutCubic(float time, float goalTime, float start, float goal)
{
  float v5; 

  if ( goalTime == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_curve.cpp", 317, ASSERT_TYPE_ASSERT, "(goalTime != 0.f)", (const char *)&queryFormat, "goalTime != 0.f") )
    __debugbreak();
  v5 = (float)((float)((float)((float)(time / goalTime) - 1.0) * (float)((float)(time / goalTime) - 1.0)) * (float)((float)(time / goalTime) - 1.0)) + 1.0;
  return (float)((float)(1.0 - v5) * start) + (float)(v5 * goal);
}

/*
==============
XAnimCurve_GetValueEaseInOutCubic
==============
*/
float XAnimCurve_GetValueEaseInOutCubic(float time, float goalTime, float start, float goal)
{
  float v5; 
  float v6; 

  if ( goalTime == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_curve.cpp", 330, ASSERT_TYPE_ASSERT, "(goalTime != 0.f)", (const char *)&queryFormat, "goalTime != 0.f") )
    __debugbreak();
  v5 = (float)(time / goalTime) * 2.0;
  if ( v5 >= 1.0 )
    v6 = (float)((float)((float)((float)(v5 - 2.0) * (float)(v5 - 2.0)) * (float)(v5 - 2.0)) * 0.5) + 1.0;
  else
    v6 = (float)((float)(v5 * 0.5) * v5) * v5;
  return (float)((float)(1.0 - v6) * start) + (float)(v6 * goal);
}

/*
==============
XAnimCurve_GetValueEaseInSine
==============
*/
float XAnimCurve_GetValueEaseInSine(float time, float goalTime, float start, float goal)
{
  float v4; 

  if ( goalTime == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_curve.cpp", 350, ASSERT_TYPE_ASSERT, "(goalTime != 0.f)", (const char *)&queryFormat, "goalTime != 0.f") )
    __debugbreak();
  v4 = cosf_0((float)(time / goalTime) * 1.5707964);
  return (float)((float)(1.0 - (float)(1.0 - v4)) * start) + (float)((float)(1.0 - v4) * goal);
}

/*
==============
XAnimCurve_GetValueEaseOutSine
==============
*/
float XAnimCurve_GetValueEaseOutSine(float time, float goalTime, float start, float goal)
{
  float v4; 

  if ( goalTime == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_curve.cpp", 359, ASSERT_TYPE_ASSERT, "(goalTime != 0.f)", (const char *)&queryFormat, "goalTime != 0.f") )
    __debugbreak();
  v4 = sinf_0((float)(time / goalTime) * 1.5707964);
  return (float)((float)(1.0 - v4) * start) + (float)(v4 * goal);
}

/*
==============
XAnimCurve_GetValueEaseInOutSine
==============
*/
float XAnimCurve_GetValueEaseInOutSine(float time, float goalTime, float start, float goal)
{
  float v4; 

  if ( goalTime == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_curve.cpp", 368, ASSERT_TYPE_ASSERT, "(goalTime != 0.f)", (const char *)&queryFormat, "goalTime != 0.f") )
    __debugbreak();
  v4 = sinf_0((float)((float)(time / goalTime) - 0.5) * 3.1415927);
  return (float)((float)(1.0 - (float)((float)(v4 + 1.0) * 0.5)) * start) + (float)((float)((float)(v4 + 1.0) * 0.5) * goal);
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
float XAnimCurve_GetValue(const XAnimCurve *curve, const float time)
{
  __int64 numControlPoints; 
  __int64 v4; 
  XAnimCurveControlPoint *controlPoints; 
  int v6; 
  int v7; 
  int v8; 
  bool v9; 
  float v11; 
  float v12; 
  float *v13; 
  float *p_time; 

  if ( !curve && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_curve.cpp", 401, ASSERT_TYPE_ASSERT, "(curve)", (const char *)&queryFormat, "curve") )
    __debugbreak();
  if ( curve->numControlPoints < 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_curve.cpp", 406, ASSERT_TYPE_ASSERT, "(curve->numControlPoints >= 2)", (const char *)&queryFormat, "curve->numControlPoints >= 2") )
    __debugbreak();
  numControlPoints = curve->numControlPoints;
  v4 = 0i64;
  controlPoints = curve->controlPoints;
  v6 = 0;
  if ( (int)numControlPoints <= 8 )
  {
    if ( numControlPoints < 4 )
    {
LABEL_36:
      if ( v4 < numControlPoints )
      {
        p_time = &controlPoints[v4].time;
        do
        {
          if ( time <= *p_time )
            break;
          ++v6;
          ++v4;
          p_time += 3;
        }
        while ( v4 < numControlPoints );
      }
    }
    else
    {
      v13 = &controlPoints[2].time;
      while ( time > *(v13 - 6) )
      {
        if ( time <= *(v13 - 3) )
        {
          ++v6;
          break;
        }
        if ( time <= *v13 )
        {
          v6 += 2;
          break;
        }
        if ( time <= v13[3] )
        {
          v6 += 3;
          break;
        }
        v6 += 4;
        v4 += 4i64;
        v13 += 12;
        if ( v4 >= numControlPoints - 3 )
          goto LABEL_36;
      }
    }
    if ( v6 == (_DWORD)numControlPoints )
      return controlPoints[v6 - 1].value;
  }
  else
  {
    v7 = numControlPoints - 1;
    if ( (int)numControlPoints - 1 >= 0 )
    {
      do
      {
        v8 = (v7 + v6) >> 1;
        if ( time <= controlPoints[v8].time )
        {
          if ( time >= controlPoints[v8].time )
            return controlPoints[v6].value;
          v7 = v8 - 1;
        }
        else
        {
          v6 = v8 + 1;
        }
      }
      while ( v6 <= v7 );
    }
    v9 = v6 == (_DWORD)numControlPoints;
    if ( v6 > (int)numControlPoints )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_curve.cpp", 433, ASSERT_TYPE_ASSERT, "(controlPointIndex <= numControlPoints)", (const char *)&queryFormat, "controlPointIndex <= numControlPoints") )
        __debugbreak();
      v9 = v6 == (_DWORD)numControlPoints;
    }
    if ( v9 )
      return controlPoints[numControlPoints - 1].value;
    if ( (v6 < 0 || v6 >= (int)numControlPoints) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_curve.cpp", 439, ASSERT_TYPE_ASSERT, "(controlPointIndex >= 0 && controlPointIndex < numControlPoints)", (const char *)&queryFormat, "controlPointIndex >= 0 && controlPointIndex < numControlPoints") )
      __debugbreak();
  }
  if ( v6 <= 0 )
    return controlPoints->value;
  v11 = (float)(time - controlPoints[v6 - 1].time) * controlPoints[v6].invTimeDelta;
  if ( curve->curveType == XANIM_CURVE_TYPE_SMOOTHSTEP )
  {
    v12 = (float)(time - controlPoints[v6 - 1].time) * controlPoints[v6].invTimeDelta;
    v11 = (float)((float)((float)((float)(v12 * 6.0) - 15.0) * v12) + 10.0) * (float)((float)(v12 * v12) * v12);
  }
  return (float)((float)(1.0 - v11) * controlPoints[v6 - 1].value) + (float)(v11 * controlPoints[v6].value);
}

/*
==============
XAnimCurve_GetValue
==============
*/

float __fastcall XAnimCurve_GetValue(const XAnimCurveID curveID, double time, float goalTime, float start, float goal)
{
  double (__fastcall *v6)(float, float, float, float); 
  XAnimCurve *AssetFromID; 
  __int64 numControlPoints; 

  if ( (unsigned __int8)curveID >= CURVE_ASSET_END && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_curve.cpp", 479, ASSERT_TYPE_ASSERT, "(curveID < XAnimCurveID::MAX)", (const char *)&queryFormat, "curveID < XAnimCurveID::MAX") )
    __debugbreak();
  if ( (unsigned __int8)curveID >= CURVE_ASSET_START )
  {
    AssetFromID = XAnimCurve_GetAssetFromID(curveID);
    if ( !AssetFromID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_curve.cpp", 493, ASSERT_TYPE_ASSERT, "(curveAsset)", (const char *)&queryFormat, "curveAsset") )
      __debugbreak();
    if ( goalTime == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_curve.cpp", 494, ASSERT_TYPE_ASSERT, "(goalTime != 0.f)", (const char *)&queryFormat, "goalTime != 0.f") )
      __debugbreak();
    if ( !AssetFromID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_curve.cpp", 379, ASSERT_TYPE_ASSERT, "(curve)", (const char *)&queryFormat, "curve") )
      __debugbreak();
    numControlPoints = AssetFromID->numControlPoints;
    if ( ((int)numControlPoints <= 0 || AssetFromID->controlPoints[numControlPoints - 1].value < 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_curve.cpp", 497, ASSERT_TYPE_ASSERT, "(XAnimCurve_IsValidForBlending( curveAsset ))", "%s\n\tCurve '%s' is not valid for blending. Last control point value must be >= 1.0.", "XAnimCurve_IsValidForBlending( curveAsset )", AssetFromID->name) )
      __debugbreak();
    *((double *)&_XMM0 + 1) = *(&time + 1);
    *(double *)&_XMM0 = XAnimCurve_GetValue(AssetFromID, (float)(*(float *)&time / goalTime) * AssetFromID->duration);
    __asm { vmaxss  xmm1, xmm0, xmm8 }
    *(float *)&_XMM0 = (float)((float)(1.0 - *(float *)&_XMM1) * start) + (float)(*(float *)&_XMM1 * goal);
  }
  else
  {
    v6 = (double (__fastcall *)(float, float, float, float))s_xAnimPrimitiveCurveFunctions[(unsigned __int8)curveID];
    if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_curve.cpp", 485, ASSERT_TYPE_ASSERT, "(calcFunction)", (const char *)&queryFormat, "calcFunction") )
      __debugbreak();
    *(double *)&_XMM0 = v6(*(float *)&time, goalTime, start, goal);
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

