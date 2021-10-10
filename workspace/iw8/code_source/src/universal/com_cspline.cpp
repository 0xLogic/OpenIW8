/*
==============
Com_CalcCSplinePosition
==============
*/

void __fastcall Com_CalcCSplinePosition(unsigned __int16 splineId, unsigned __int16 splinePointIndex, float lambda, vec3_t *out_position)
{
  ?Com_CalcCSplinePosition@@YAXGGMAEATvec3_t@@@Z(splineId, splinePointIndex, lambda, out_position);
}

/*
==============
Com_GetCSplinePointTarget
==============
*/

scr_string_t __fastcall Com_GetCSplinePointTarget(unsigned __int16 splineId, unsigned __int16 splinePointIndex)
{
  return ?Com_GetCSplinePointTarget@@YA?AW4scr_string_t@@GG@Z(splineId, splinePointIndex);
}

/*
==============
Com_GetCSplinePointDistToNextPoint
==============
*/

double __fastcall Com_GetCSplinePointDistToNextPoint(unsigned __int16 splineId, unsigned __int16 splinePointIndex)
{
  double result; 

  *(float *)&result = ?Com_GetCSplinePointDistToNextPoint@@YAMGG@Z(splineId, splinePointIndex);
  return result;
}

/*
==============
Com_CalcCSplinePointAlongSpline
==============
*/

bool __fastcall Com_CalcCSplinePointAlongSpline(unsigned __int16 splineId, float distance, unsigned __int16 splinePointIndex, float lambda, unsigned __int16 *out_splinePointIndex, float *out_lambda)
{
  return ?Com_CalcCSplinePointAlongSpline@@YA_NGMGMPEAGPEAM@Z(splineId, distance, splinePointIndex, lambda, out_splinePointIndex, out_lambda);
}

/*
==============
Com_CalcCSplineTangent
==============
*/

void __fastcall Com_CalcCSplineTangent(unsigned __int16 splineId, unsigned __int16 splinePointIndex, float lambda, vec3_t *out_tangent)
{
  ?Com_CalcCSplineTangent@@YAXGGMAEATvec3_t@@@Z(splineId, splinePointIndex, lambda, out_tangent);
}

/*
==============
Com_GetTargetNameByCSplineId
==============
*/

scr_string_t __fastcall Com_GetTargetNameByCSplineId(unsigned __int16 splineId)
{
  return ?Com_GetTargetNameByCSplineId@@YA?AW4scr_string_t@@G@Z(splineId);
}

/*
==============
Com_GetCSplinePointCorridorDims
==============
*/

void __fastcall Com_GetCSplinePointCorridorDims(unsigned __int16 splineId, unsigned __int16 splinePointIndex, vec2_t *out_dims)
{
  ?Com_GetCSplinePointCorridorDims@@YAXGGAEATvec2_t@@@Z(splineId, splinePointIndex, out_dims);
}

/*
==============
Com_GetCSplineTargetname
==============
*/

scr_string_t __fastcall Com_GetCSplineTargetname(unsigned __int16 splineId)
{
  return ?Com_GetCSplineTargetname@@YA?AW4scr_string_t@@G@Z(splineId);
}

/*
==============
Com_GetCSplineLength
==============
*/

double __fastcall Com_GetCSplineLength(unsigned __int16 splineId)
{
  double result; 

  *(float *)&result = ?Com_GetCSplineLength@@YAMG@Z(splineId);
  return result;
}

/*
==============
Com_GetCSplinePointCount
==============
*/

unsigned __int16 __fastcall Com_GetCSplinePointCount(unsigned __int16 splineId)
{
  return ?Com_GetCSplinePointCount@@YAGG@Z(splineId);
}

/*
==============
Com_CalcCSplineThrottle
==============
*/

double __fastcall Com_CalcCSplineThrottle(unsigned __int16 splineId, unsigned __int16 splinePointIndex, float lambda)
{
  double result; 

  *(float *)&result = ?Com_CalcCSplineThrottle@@YAMGGM@Z(splineId, splinePointIndex, lambda);
  return result;
}

/*
==============
Com_GetCSplineThrottle
==============
*/

double __fastcall Com_GetCSplineThrottle(unsigned __int16 splineId, unsigned __int16 splinePointIndex)
{
  double result; 

  *(float *)&result = ?Com_GetCSplineThrottle@@YAMGG@Z(splineId, splinePointIndex);
  return result;
}

/*
==============
Com_GetCSplinePointTangent
==============
*/

void __fastcall Com_GetCSplinePointTangent(unsigned __int16 splineId, unsigned __int16 splinePointIndex, vec3_t *out_tangent)
{
  ?Com_GetCSplinePointTangent@@YAXGGAEATvec3_t@@@Z(splineId, splinePointIndex, out_tangent);
}

/*
==============
Com_CalcCSplineNextClosestPointOnSpline
==============
*/

void __fastcall Com_CalcCSplineNextClosestPointOnSpline(unsigned __int16 splineId, const vec3_t *position, float distance, unsigned __int16 splinePointIndex, float lambda, unsigned __int16 *out_splinePointIndex, float *out_lambda)
{
  ?Com_CalcCSplineNextClosestPointOnSpline@@YAXGAEBTvec3_t@@MGMPEAGPEAM@Z(splineId, position, distance, splinePointIndex, lambda, out_splinePointIndex, out_lambda);
}

/*
==============
Com_GetCSplineCount
==============
*/

unsigned __int16 __fastcall Com_GetCSplineCount()
{
  return ?Com_GetCSplineCount@@YAGXZ();
}

/*
==============
Com_GetCSplineIdByTargetName
==============
*/

int __fastcall Com_GetCSplineIdByTargetName(scr_string_t targetname)
{
  return ?Com_GetCSplineIdByTargetName@@YAHW4scr_string_t@@@Z(targetname);
}

/*
==============
Com_GetCSplinePointAngles
==============
*/

void __fastcall Com_GetCSplinePointAngles(unsigned __int16 splineId, unsigned __int16 splinePointIndex, vec3_t *out_angles)
{
  ?Com_GetCSplinePointAngles@@YAXGGAEATvec3_t@@@Z(splineId, splinePointIndex, out_angles);
}

/*
==============
Com_GetCSplinePointLabel
==============
*/

scr_string_t __fastcall Com_GetCSplinePointLabel(unsigned __int16 splineId, unsigned __int16 splinePointIndex)
{
  return ?Com_GetCSplinePointLabel@@YA?AW4scr_string_t@@GG@Z(splineId, splinePointIndex);
}

/*
==============
Com_GetCSplinePointTension
==============
*/

double __fastcall Com_GetCSplinePointTension(unsigned __int16 splineId, unsigned __int16 splinePointIndex)
{
  double result; 

  *(float *)&result = ?Com_GetCSplinePointTension@@YAMGG@Z(splineId, splinePointIndex);
  return result;
}

/*
==============
Com_CalcCSplineClosestPointOnSpline
==============
*/

void __fastcall Com_CalcCSplineClosestPointOnSpline(unsigned __int16 splineId, const vec3_t *position, unsigned __int16 *out_splinePointIndex, float *out_lambda)
{
  ?Com_CalcCSplineClosestPointOnSpline@@YAXGAEBTvec3_t@@PEAGPEAM@Z(splineId, position, out_splinePointIndex, out_lambda);
}

/*
==============
Com_GetCSplinePointString
==============
*/

scr_string_t __fastcall Com_GetCSplinePointString(unsigned __int16 splineId, unsigned __int16 splinePointIndex)
{
  return ?Com_GetCSplinePointString@@YA?AW4scr_string_t@@GG@Z(splineId, splinePointIndex);
}

/*
==============
Com_GetCSplinePointPosition
==============
*/

void __fastcall Com_GetCSplinePointPosition(unsigned __int16 splineId, unsigned __int16 splinePointIndex, vec3_t *out_position)
{
  ?Com_GetCSplinePointPosition@@YAXGGAEATvec3_t@@@Z(splineId, splinePointIndex, out_position);
}

/*
==============
Com_GetCSplineSpeed
==============
*/

double __fastcall Com_GetCSplineSpeed(unsigned __int16 splineId, unsigned __int16 splinePointIndex)
{
  double result; 

  *(float *)&result = ?Com_GetCSplineSpeed@@YAMGG@Z(splineId, splinePointIndex);
  return result;
}

/*
==============
Com_CalcCSplineCorridor
==============
*/

void __fastcall Com_CalcCSplineCorridor(unsigned __int16 splineId, unsigned __int16 splinePointIndex, float lambda, vec2_t *out_dims)
{
  ?Com_CalcCSplineCorridor@@YAXGGMAEATvec2_t@@@Z(splineId, splinePointIndex, lambda, out_dims);
}

/*
==============
Com_CalcCSplineAccuratePointAlongSpline
==============
*/

bool __fastcall Com_CalcCSplineAccuratePointAlongSpline(unsigned __int16 splineId, float distance, unsigned __int16 splinePointIndex, float lambda, unsigned __int16 *out_splinePointIndex, float *out_lambda, int maxSteps, float epsilon)
{
  return ?Com_CalcCSplineAccuratePointAlongSpline@@YA_NGMGMPEAGPEAMHM@Z(splineId, distance, splinePointIndex, lambda, out_splinePointIndex, out_lambda, maxSteps, epsilon);
}

/*
==============
Com_GetCSplinePointIndexByTargetName
==============
*/

int __fastcall Com_GetCSplinePointIndexByTargetName(unsigned __int16 splineId, scr_string_t targetname)
{
  return ?Com_GetCSplinePointIndexByTargetName@@YAHGW4scr_string_t@@@Z(splineId, targetname);
}

/*
==============
Com_CalcCSplineAngles
==============
*/

void __fastcall Com_CalcCSplineAngles(unsigned __int16 splineId, unsigned __int16 splinePointIndex, float lambda, vec3_t *out_angles)
{
  ?Com_CalcCSplineAngles@@YAXGGMAEATvec3_t@@@Z(splineId, splinePointIndex, lambda, out_angles);
}

/*
==============
Com_GetCSplinePointTargetName
==============
*/

scr_string_t __fastcall Com_GetCSplinePointTargetName(unsigned __int16 splineId, unsigned __int16 splinePointIndex)
{
  return ?Com_GetCSplinePointTargetName@@YA?AW4scr_string_t@@GG@Z(splineId, splinePointIndex);
}

/*
==============
Com_GetCSplinePointId
==============
*/

int __fastcall Com_GetCSplinePointId(unsigned __int16 splineId, unsigned __int16 splinePointIndex)
{
  return ?Com_GetCSplinePointId@@YAHGG@Z(splineId, splinePointIndex);
}

/*
==============
Com_CalcCSplinePointAtDistFromEnd
==============
*/

bool __fastcall Com_CalcCSplinePointAtDistFromEnd(unsigned __int16 splineId, float distance, unsigned __int16 *out_splinePointIndex, float *out_lambda)
{
  return ?Com_CalcCSplinePointAtDistFromEnd@@YA_NGMPEAGPEAM@Z(splineId, distance, out_splinePointIndex, out_lambda);
}

/*
==============
Com_CalcCSplineAccuratePointAlongSpline
==============
*/
char Com_CalcCSplineAccuratePointAlongSpline(unsigned __int16 splineId, float distance, unsigned __int16 splinePointIndex, float lambda, unsigned __int16 *out_splinePointIndex, float *out_lambda, int maxSteps, float epsilon)
{
  float v8; 
  int v11; 
  float v12; 
  unsigned __int16 v13; 
  float v14; 
  float v15; 
  float v16; 
  bool v17; 
  vec3_t out_position; 

  v8 = lambda;
  v11 = 0;
  v12 = distance;
  Com_CalcCSplinePosition(splineId, splinePointIndex, lambda, &out_position);
  v13 = splinePointIndex;
  if ( maxSteps > 0 )
  {
    v14 = out_position.v[2];
    v15 = out_position.v[1];
    v16 = out_position.v[0];
    while ( COERCE_FLOAT(LODWORD(v12) & _xmm) > epsilon )
    {
      if ( !Com_CalcCSplinePointAlongSpline(splineId, v12, v13, lambda, out_splinePointIndex, out_lambda) )
        return 0;
      ++v11;
      Com_CalcCSplinePosition(splineId, *out_splinePointIndex, *out_lambda, &out_position);
      v13 = *out_splinePointIndex;
      lambda = *out_lambda;
      v12 = distance - fsqrt((float)((float)((float)(out_position.v[1] - v15) * (float)(out_position.v[1] - v15)) + (float)((float)(out_position.v[0] - v16) * (float)(out_position.v[0] - v16))) + (float)((float)(out_position.v[2] - v14) * (float)(out_position.v[2] - v14)));
      if ( v11 >= maxSteps )
        break;
    }
  }
  v17 = distance < 0.0;
  if ( distance > 0.0 )
  {
    if ( *out_splinePointIndex < splinePointIndex || v8 >= *out_lambda )
      return Com_CalcCSplinePointAlongSpline(splineId, distance, splinePointIndex, v8, out_splinePointIndex, out_lambda);
    v17 = distance < 0.0;
  }
  if ( v17 && (*out_splinePointIndex > splinePointIndex || v8 <= *out_lambda) )
    return Com_CalcCSplinePointAlongSpline(splineId, distance, splinePointIndex, v8, out_splinePointIndex, out_lambda);
  return 1;
}

/*
==============
Com_CalcCSplineAngles
==============
*/
void Com_CalcCSplineAngles(unsigned __int16 splineId, unsigned __int16 splinePointIndex, float lambda, vec3_t *out_angles)
{
  unsigned __int16 v4; 
  __int64 v7; 
  vec4_t qb; 
  vec4_t quat; 
  vec4_t out; 
  tmat33_t<vec3_t> axis; 

  v4 = splineId - 1;
  if ( (unsigned __int16)(splineId - 1) >= cm.mapEnts->splineList.splineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 292, ASSERT_TYPE_ASSERT, "(splineIndex < Com_GetCSplineCount())", (const char *)&queryFormat, "splineIndex < Com_GetCSplineCount()") )
    __debugbreak();
  if ( v4 >= cm.mapEnts->splineList.splineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 17, ASSERT_TYPE_ASSERT, "(splineIndex < Com_GetCSplineCount())", (const char *)&queryFormat, "splineIndex < Com_GetCSplineCount()") )
    __debugbreak();
  v7 = v4;
  if ( splinePointIndex >= cm.mapEnts->splineList.splines[v7].splinePointCount - 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 293, ASSERT_TYPE_ASSERT, "(splinePointIndex < Com_GetCSplinePointCount( splineId )-1)", (const char *)&queryFormat, "splinePointIndex < Com_GetCSplinePointCount( splineId )-1") )
    __debugbreak();
  if ( (lambda < 0.0 || lambda > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 294, ASSERT_TYPE_ASSERT, "(lambda >=0.f && lambda <= 1.f)", (const char *)&queryFormat, "lambda >=0.f && lambda <= 1.f") )
    __debugbreak();
  AnglesToQuat(&cm.mapEnts->splineList.splines[v7].splinePoints[splinePointIndex].angles, &quat);
  AnglesToQuat(&cm.mapEnts->splineList.splines[v7].splinePoints[(unsigned int)splinePointIndex + 1].angles, &qb);
  QuatLerp(&quat, &qb, lambda, &out);
  QuatToAxis(&out, &axis);
  AxisToAngles(&axis, out_angles);
}

/*
==============
Com_CalcCSplineClosestPointOnSpline
==============
*/
void Com_CalcCSplineClosestPointOnSpline(unsigned __int16 splineId, const vec3_t *position, unsigned __int16 *out_splinePointIndex, float *out_lambda)
{
  float v4; 
  __int64 v6; 
  MapEnts *mapEnts; 
  __int64 v9; 
  unsigned __int16 v11; 
  unsigned __int16 v12; 
  unsigned __int16 v13; 
  __int64 v14; 
  SplinePointEntityRecord *splinePoints; 
  double v16; 
  __int64 v17; 
  __int64 v18; 
  SplinePointEntityRecord *v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  double v24; 
  vec3_t vProj; 

  v4 = FLOAT_3_4028235e38;
  v6 = (unsigned __int16)(splineId - 1);
  mapEnts = cm.mapEnts;
  v9 = v6;
  v11 = cm.mapEnts->splineList.splines[v9].splinePointCount - 1;
  v12 = 0;
  v13 = 0;
  if ( cm.mapEnts->splineList.splines[v9].splinePointCount != 1 )
  {
    v14 = 0i64;
    do
    {
      splinePoints = mapEnts->splineList.splines[v9].splinePoints;
      v16 = PointToLineSegmentDistSq(position, &splinePoints[v14].origin, &splinePoints[v14 + 1].origin);
      if ( *(float *)&v16 < v4 )
      {
        v4 = *(float *)&v16;
        v12 = v13;
      }
      mapEnts = cm.mapEnts;
      ++v13;
      ++v14;
    }
    while ( v13 < v11 );
  }
  v17 = v12;
  v18 = v12 + 1i64;
  ProjectPointOntoVector(position, &mapEnts->splineList.splines[v9].splinePoints[v17].origin, &mapEnts->splineList.splines[v9].splinePoints[v18].origin, &vProj, NULL);
  v19 = cm.mapEnts->splineList.splines[v9].splinePoints;
  v20 = v19[v18].origin.v[0] - v19[v17].origin.v[0];
  v21 = v19[v18].origin.v[1] - v19[v17].origin.v[1];
  v22 = v19[v18].origin.v[2] - v19[v17].origin.v[2];
  v23 = fsqrt((float)((float)((float)(vProj.v[1] - v19[v17].origin.v[1]) * (float)(vProj.v[1] - v19[v17].origin.v[1])) + (float)((float)(vProj.v[0] - v19[v17].origin.v[0]) * (float)(vProj.v[0] - v19[v17].origin.v[0]))) + (float)((float)(vProj.v[2] - v19[v17].origin.v[2]) * (float)(vProj.v[2] - v19[v17].origin.v[2])));
  *out_splinePointIndex = v12;
  v24 = I_fclamp((float)(1.0 / fsqrt((float)((float)(v21 * v21) + (float)(v20 * v20)) + (float)(v22 * v22))) * v23, 0.0, 1.0);
  *out_lambda = *(float *)&v24;
}

/*
==============
Com_CalcCSplineCorridor
==============
*/
void Com_CalcCSplineCorridor(unsigned __int16 splineId, unsigned __int16 splinePointIndex, float lambda, vec2_t *out_dims)
{
  unsigned __int16 v4; 
  __int64 v7; 
  __int64 v8; 
  SplinePointEntityRecord *splinePoints; 

  v4 = splineId - 1;
  if ( (unsigned __int16)(splineId - 1) >= cm.mapEnts->splineList.splineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 261, ASSERT_TYPE_ASSERT, "(splineIndex < Com_GetCSplineCount())", (const char *)&queryFormat, "splineIndex < Com_GetCSplineCount()") )
    __debugbreak();
  if ( v4 >= cm.mapEnts->splineList.splineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 17, ASSERT_TYPE_ASSERT, "(splineIndex < Com_GetCSplineCount())", (const char *)&queryFormat, "splineIndex < Com_GetCSplineCount()") )
    __debugbreak();
  v7 = v4;
  if ( splinePointIndex >= cm.mapEnts->splineList.splines[v7].splinePointCount - 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 262, ASSERT_TYPE_ASSERT, "(splinePointIndex < Com_GetCSplinePointCount( splineId )-1)", (const char *)&queryFormat, "splinePointIndex < Com_GetCSplinePointCount( splineId )-1") )
    __debugbreak();
  if ( (lambda < 0.0 || lambda > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 263, ASSERT_TYPE_ASSERT, "(lambda >=0.f && lambda <= 1.f)", (const char *)&queryFormat, "lambda >=0.f && lambda <= 1.f") )
    __debugbreak();
  v8 = splinePointIndex;
  splinePoints = cm.mapEnts->splineList.splines[v7].splinePoints;
  out_dims->v[0] = (float)((float)(splinePoints[v8 + 1].corridorDims.v[0] - splinePoints[v8].corridorDims.v[0]) * lambda) + splinePoints[v8].corridorDims.v[0];
  out_dims->v[1] = (float)((float)(splinePoints[v8 + 1].corridorDims.v[1] - splinePoints[v8].corridorDims.v[1]) * lambda) + splinePoints[v8].corridorDims.v[1];
}

/*
==============
Com_CalcCSplineNextClosestPointOnSpline
==============
*/

void __fastcall Com_CalcCSplineNextClosestPointOnSpline(unsigned __int16 splineId, const vec3_t *position, double distance, unsigned __int16 splinePointIndex, float lambda, unsigned __int16 *out_splinePointIndex, float *out_lambda)
{
  unsigned __int16 v9; 
  double CSplinePointDistToNextPoint; 
  __int128 v12; 
  __int128 v13; 
  float v14; 
  float v15; 
  int v16; 
  __int128 v18; 
  double v19; 
  __int128 v20; 
  float v22; 
  vec3_t out_position; 

  _XMM7 = LODWORD(lambda);
  v9 = splinePointIndex;
  CSplinePointDistToNextPoint = Com_GetCSplinePointDistToNextPoint(splineId, splinePointIndex);
  if ( *(float *)&CSplinePointDistToNextPoint <= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 488, ASSERT_TYPE_ASSERT, "(distToNextNode > 0.001f)", (const char *)&queryFormat, "distToNextNode > EQUAL_EPSILON") )
    __debugbreak();
  v13 = *(_OWORD *)&distance;
  *(float *)&v13 = *(float *)&distance * 0.1;
  v12 = v13;
  v14 = (float)(*(float *)&distance * 0.1) / *(float *)&CSplinePointDistToNextPoint;
  if ( v14 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 491, ASSERT_TYPE_ASSERT, "(deltaLambda >= 0.f)", (const char *)&queryFormat, "deltaLambda >= 0.f") )
    __debugbreak();
  v15 = FLOAT_3_4028235e38;
  v16 = 0;
  while ( 1 )
  {
    v18 = _XMM7;
    *(float *)&v18 = *(float *)&_XMM7 + (float)((float)v16 * v14);
    _XMM7 = v18;
    if ( *(float *)&v18 > 1.0 )
      break;
LABEL_17:
    __asm
    {
      vmaxss  xmm0, xmm7, xmm9
      vminss  xmm7, xmm0, xmm8
    }
    Com_CalcCSplinePosition(splineId, v9, *(float *)&_XMM7, &out_position);
    v22 = (float)((float)((float)(out_position.v[1] - position->v[1]) * (float)(out_position.v[1] - position->v[1])) + (float)((float)(out_position.v[0] - position->v[0]) * (float)(out_position.v[0] - position->v[0]))) + (float)((float)(out_position.v[2] - position->v[2]) * (float)(out_position.v[2] - position->v[2]));
    if ( v22 < v15 )
    {
      *out_splinePointIndex = v9;
      *out_lambda = *(float *)&_XMM7;
      v15 = v22;
    }
    if ( ++v16 >= 10 )
      return;
  }
  ++v9;
  if ( (unsigned __int16)(splineId - 1) >= cm.mapEnts->splineList.splineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 17, ASSERT_TYPE_ASSERT, "(splineIndex < Com_GetCSplineCount())", (const char *)&queryFormat, "splineIndex < Com_GetCSplineCount()") )
    __debugbreak();
  if ( v9 < cm.mapEnts->splineList.splines[(unsigned __int16)(splineId - 1)].splinePointCount - 1 )
  {
    v19 = Com_GetCSplinePointDistToNextPoint(splineId, v9);
    v20 = v12;
    *(float *)&v20 = *(float *)&v12 / *(float *)&v19;
    v14 = *(float *)&v12 / *(float *)&v19;
    _XMM7 = v20;
    if ( ((float)(*(float *)&v12 / *(float *)&v19) > 1.0 || *(float *)&v20 < 0.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 508, ASSERT_TYPE_ASSERT, "(testLambda <= 1.0f && testLambda >= 0.f)", (const char *)&queryFormat, "testLambda <= 1.0f && testLambda >= 0.f") )
      __debugbreak();
    goto LABEL_17;
  }
}

/*
==============
Com_CalcCSplinePointAlongSpline
==============
*/
char Com_CalcCSplinePointAlongSpline(unsigned __int16 splineId, float distance, unsigned __int16 splinePointIndex, float lambda, unsigned __int16 *out_splinePointIndex, float *out_lambda)
{
  unsigned __int16 v8; 
  double CSplinePointDistToNextPoint; 
  float v10; 
  float v11; 
  float v12; 
  unsigned __int16 splinePointCount; 
  float v14; 
  char result; 
  unsigned __int16 v16; 
  float v17; 
  double v18; 
  int v19; 
  unsigned __int16 v20; 
  float v21; 
  double v22; 

  if ( splineId > cm.mapEnts->splineList.splineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 313, ASSERT_TYPE_ASSERT, "((splineId - 1) < Com_GetCSplineCount())", (const char *)&queryFormat, "(splineId - 1) < Com_GetCSplineCount()") )
    __debugbreak();
  v8 = splineId - 1;
  if ( (unsigned __int16)(splineId - 1) >= cm.mapEnts->splineList.splineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 17, ASSERT_TYPE_ASSERT, "(splineIndex < Com_GetCSplineCount())", (const char *)&queryFormat, "splineIndex < Com_GetCSplineCount()") )
    __debugbreak();
  if ( splinePointIndex >= cm.mapEnts->splineList.splines[v8].splinePointCount - 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 314, ASSERT_TYPE_ASSERT, "(splinePointIndex < Com_GetCSplinePointCount( splineId )-1)", (const char *)&queryFormat, "splinePointIndex < Com_GetCSplinePointCount( splineId )-1") )
    __debugbreak();
  *out_splinePointIndex = splinePointIndex;
  *out_lambda = lambda;
  CSplinePointDistToNextPoint = Com_GetCSplinePointDistToNextPoint(splineId, *out_splinePointIndex);
  v10 = *(float *)&CSplinePointDistToNextPoint;
  v11 = distance / *(float *)&CSplinePointDistToNextPoint;
  if ( v8 >= cm.mapEnts->splineList.splineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 17, ASSERT_TYPE_ASSERT, "(splineIndex < Com_GetCSplineCount())", (const char *)&queryFormat, "splineIndex < Com_GetCSplineCount()") )
    __debugbreak();
  v12 = *out_lambda;
  splinePointCount = cm.mapEnts->splineList.splines[v8].splinePointCount;
  while ( 1 )
  {
    do
    {
      while ( 1 )
      {
        v14 = v12 + v11;
        if ( (float)(v12 + v11) > 1.0 )
          break;
        if ( v14 >= 0.0 )
        {
          *out_lambda = v14;
          return 1;
        }
LABEL_18:
        v16 = *out_splinePointIndex;
        if ( !*out_splinePointIndex )
        {
          *out_splinePointIndex = 0;
          goto LABEL_25;
        }
        *out_splinePointIndex = v16 - 1;
        v17 = v14 * v10;
        v18 = Com_GetCSplinePointDistToNextPoint(splineId, v16 - 1);
        v10 = *(float *)&v18;
        v11 = v17 / *(float *)&v18;
        v12 = FLOAT_1_0;
        *out_lambda = 1.0;
      }
      if ( v14 < 0.0 )
        goto LABEL_18;
    }
    while ( v14 <= 1.0 );
    v19 = *out_splinePointIndex;
    if ( v19 >= splinePointCount - 2 )
      break;
    v20 = v19 + 1;
    *out_splinePointIndex = v20;
    v21 = (float)(v14 - 1.0) * v10;
    v22 = Com_GetCSplinePointDistToNextPoint(splineId, v20);
    v10 = *(float *)&v22;
    v11 = v21 / *(float *)&v22;
    v12 = 0.0;
    *out_lambda = 0.0;
  }
  *out_splinePointIndex = splinePointCount - 1;
LABEL_25:
  result = 0;
  *out_lambda = 0.0;
  return result;
}

/*
==============
Com_CalcCSplinePointAtDistFromEnd
==============
*/
bool Com_CalcCSplinePointAtDistFromEnd(unsigned __int16 splineId, float distance, unsigned __int16 *out_splinePointIndex, float *out_lambda)
{
  unsigned __int16 CSplinePointCount; 
  unsigned __int16 v8; 
  __int128 v9; 
  bool result; 
  float v11; 
  double CSplinePointDistToNextPoint; 
  __int128 v13; 

  if ( !out_splinePointIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 378, ASSERT_TYPE_ASSERT, "(out_splinePointIndex != 0)", (const char *)&queryFormat, "out_splinePointIndex != NULL") )
    __debugbreak();
  if ( !out_lambda && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 379, ASSERT_TYPE_ASSERT, "(out_lambda != 0)", (const char *)&queryFormat, "out_lambda != NULL") )
    __debugbreak();
  CSplinePointCount = Com_GetCSplinePointCount(splineId);
  if ( CSplinePointCount < 2u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 382, ASSERT_TYPE_ASSERT, "(splinePointIndex >= 2)", (const char *)&queryFormat, "splinePointIndex >= 2") )
    __debugbreak();
  v8 = CSplinePointCount - 1;
  v9 = 0i64;
  if ( distance > 0.0 )
  {
    v11 = 0.0;
    while ( v8 )
    {
      CSplinePointDistToNextPoint = Com_GetCSplinePointDistToNextPoint(splineId, --v8);
      v13 = v9;
      *(float *)&v13 = *(float *)&v9 + *(float *)&CSplinePointDistToNextPoint;
      v9 = v13;
      v11 = *(float *)&CSplinePointDistToNextPoint;
      if ( *(float *)&v13 >= distance )
        goto LABEL_15;
    }
    if ( *(float *)&v9 < distance )
    {
      result = 0;
      *out_splinePointIndex = 0;
      *out_lambda = 0.0;
      return result;
    }
LABEL_15:
    if ( v11 <= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 411, ASSERT_TYPE_ASSERT, "(splineSegmentDist > 0.001f)", (const char *)&queryFormat, "splineSegmentDist > EQUAL_EPSILON") )
      __debugbreak();
    result = 1;
    *out_lambda = (float)(*(float *)&v9 - distance) / v11;
    *out_splinePointIndex = v8;
  }
  else
  {
    result = 1;
    *out_splinePointIndex = v8 - 1;
    *out_lambda = 1.0;
  }
  return result;
}

/*
==============
Com_CalcCSplinePosition
==============
*/
void Com_CalcCSplinePosition(unsigned __int16 splineId, unsigned __int16 splinePointIndex, float lambda, vec3_t *out_position)
{
  unsigned __int16 v4; 
  __int64 v8; 
  __int64 v9; 
  float v10; 
  SplinePointEntityRecord *splinePoints; 
  float v12; 
  float v13; 
  float v14; 
  SplinePointEntityRecord *v15; 
  float v16; 
  float v17; 
  float v18; 
  SplinePointEntityRecord *v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  SplinePointEntityRecord *v24; 

  v4 = splineId - 1;
  if ( (unsigned __int16)(splineId - 1) >= cm.mapEnts->splineList.splineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 218, ASSERT_TYPE_ASSERT, "(splineIndex < Com_GetCSplineCount())", (const char *)&queryFormat, "splineIndex < Com_GetCSplineCount()") )
    __debugbreak();
  if ( v4 >= cm.mapEnts->splineList.splineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 17, ASSERT_TYPE_ASSERT, "(splineIndex < Com_GetCSplineCount())", (const char *)&queryFormat, "splineIndex < Com_GetCSplineCount()") )
    __debugbreak();
  v8 = v4;
  if ( splinePointIndex >= cm.mapEnts->splineList.splines[v8].splinePointCount - 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 219, ASSERT_TYPE_ASSERT, "(splinePointIndex < Com_GetCSplinePointCount( splineId )-1)", (const char *)&queryFormat, "splinePointIndex < Com_GetCSplinePointCount( splineId )-1") )
    __debugbreak();
  if ( (lambda < 0.0 || lambda > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 220, ASSERT_TYPE_ASSERT, "(lambda >=0.f && lambda <= 1.f)", (const char *)&queryFormat, "lambda >=0.f && lambda <= 1.f") )
    __debugbreak();
  v9 = splinePointIndex;
  v10 = lambda * lambda;
  splinePoints = cm.mapEnts->splineList.splines[v8].splinePoints;
  v12 = splinePoints[v9].positionCubic[3].v[0];
  out_position->v[0] = v12;
  v13 = splinePoints[v9].positionCubic[3].v[1];
  out_position->v[1] = v13;
  v14 = splinePoints[v9].positionCubic[3].v[2];
  out_position->v[2] = v14;
  v15 = cm.mapEnts->splineList.splines[v8].splinePoints;
  v16 = (float)(lambda * v15[v9].positionCubic[2].v[0]) + v12;
  out_position->v[0] = v16;
  v17 = (float)(lambda * v15[v9].positionCubic[2].v[1]) + v13;
  out_position->v[1] = v17;
  v18 = (float)(lambda * v15[v9].positionCubic[2].v[2]) + v14;
  out_position->v[2] = v18;
  v19 = cm.mapEnts->splineList.splines[v8].splinePoints;
  v20 = (float)((float)(lambda * lambda) * v19[v9].positionCubic[1].v[0]) + v16;
  out_position->v[0] = v20;
  v21 = (float)(v10 * v19[v9].positionCubic[1].v[1]) + v17;
  out_position->v[1] = v21;
  v22 = (float)(v10 * v19[v9].positionCubic[1].v[2]) + v18;
  out_position->v[2] = v22;
  v23 = v10 * lambda;
  v24 = cm.mapEnts->splineList.splines[v8].splinePoints;
  out_position->v[0] = (float)(v23 * v24[v9].positionCubic[0].v[0]) + v20;
  out_position->v[1] = (float)(v23 * v24[v9].positionCubic[0].v[1]) + v21;
  out_position->v[2] = (float)(v23 * v24[v9].positionCubic[0].v[2]) + v22;
}

/*
==============
Com_CalcCSplineTangent
==============
*/
void Com_CalcCSplineTangent(unsigned __int16 splineId, unsigned __int16 splinePointIndex, float lambda, vec3_t *out_tangent)
{
  unsigned __int16 v4; 
  __int64 v8; 
  __int64 v9; 
  SplinePointEntityRecord *splinePoints; 
  float v11; 
  float v12; 
  float v13; 
  SplinePointEntityRecord *v14; 
  float v15; 
  float v16; 
  float v17; 
  SplinePointEntityRecord *v18; 

  v4 = splineId - 1;
  if ( (unsigned __int16)(splineId - 1) >= cm.mapEnts->splineList.splineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 242, ASSERT_TYPE_ASSERT, "(splineIndex < Com_GetCSplineCount())", (const char *)&queryFormat, "splineIndex < Com_GetCSplineCount()") )
    __debugbreak();
  if ( v4 >= cm.mapEnts->splineList.splineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 17, ASSERT_TYPE_ASSERT, "(splineIndex < Com_GetCSplineCount())", (const char *)&queryFormat, "splineIndex < Com_GetCSplineCount()") )
    __debugbreak();
  v8 = v4;
  if ( splinePointIndex >= cm.mapEnts->splineList.splines[v8].splinePointCount - 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 243, ASSERT_TYPE_ASSERT, "(splinePointIndex < Com_GetCSplinePointCount( splineId )-1)", (const char *)&queryFormat, "splinePointIndex < Com_GetCSplinePointCount( splineId )-1") )
    __debugbreak();
  if ( (lambda < 0.0 || lambda > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 244, ASSERT_TYPE_ASSERT, "(lambda >=0.f && lambda <= 1.f)", (const char *)&queryFormat, "lambda >=0.f && lambda <= 1.f") )
    __debugbreak();
  v9 = splinePointIndex;
  splinePoints = cm.mapEnts->splineList.splines[v8].splinePoints;
  v11 = splinePoints[v9].tangentQuadratic[2].v[0];
  out_tangent->v[0] = v11;
  v12 = splinePoints[v9].tangentQuadratic[2].v[1];
  out_tangent->v[1] = v12;
  v13 = splinePoints[v9].tangentQuadratic[2].v[2];
  out_tangent->v[2] = v13;
  v14 = cm.mapEnts->splineList.splines[v8].splinePoints;
  v15 = (float)(lambda * v14[v9].tangentQuadratic[1].v[0]) + v11;
  out_tangent->v[0] = v15;
  v16 = (float)(lambda * v14[v9].tangentQuadratic[1].v[1]) + v12;
  out_tangent->v[1] = v16;
  v17 = (float)(lambda * v14[v9].tangentQuadratic[1].v[2]) + v13;
  out_tangent->v[2] = v17;
  v18 = cm.mapEnts->splineList.splines[v8].splinePoints;
  out_tangent->v[0] = (float)((float)(lambda * lambda) * v18[v9].tangentQuadratic[0].v[0]) + v15;
  out_tangent->v[1] = (float)((float)(lambda * lambda) * v18[v9].tangentQuadratic[0].v[1]) + v16;
  out_tangent->v[2] = (float)((float)(lambda * lambda) * v18[v9].tangentQuadratic[0].v[2]) + v17;
}

/*
==============
Com_CalcCSplineThrottle
==============
*/
float Com_CalcCSplineThrottle(unsigned __int16 splineId, unsigned __int16 splinePointIndex, float lambda)
{
  unsigned __int16 v3; 
  __int64 v5; 
  SplinePointEntityRecord *splinePoints; 

  v3 = splineId - 1;
  if ( (unsigned __int16)(splineId - 1) >= cm.mapEnts->splineList.splineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 273, ASSERT_TYPE_ASSERT, "(splineIndex < Com_GetCSplineCount())", (const char *)&queryFormat, "splineIndex < Com_GetCSplineCount()") )
    __debugbreak();
  if ( v3 >= cm.mapEnts->splineList.splineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 17, ASSERT_TYPE_ASSERT, "(splineIndex < Com_GetCSplineCount())", (const char *)&queryFormat, "splineIndex < Com_GetCSplineCount()") )
    __debugbreak();
  v5 = v3;
  if ( splinePointIndex >= cm.mapEnts->splineList.splines[v5].splinePointCount - 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 274, ASSERT_TYPE_ASSERT, "(splinePointIndex < Com_GetCSplinePointCount( splineId )-1)", (const char *)&queryFormat, "splinePointIndex < Com_GetCSplinePointCount( splineId )-1") )
    __debugbreak();
  if ( (lambda < 0.0 || lambda > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 275, ASSERT_TYPE_ASSERT, "(lambda >=0.f && lambda <= 1.f)", (const char *)&queryFormat, "lambda >=0.f && lambda <= 1.f") )
    __debugbreak();
  splinePoints = cm.mapEnts->splineList.splines[v5].splinePoints;
  return (float)((float)(1.0 - lambda) * splinePoints[splinePointIndex].throttle) + (float)(lambda * splinePoints[splinePointIndex + 1].throttle);
}

/*
==============
Com_GetCSplineCount
==============
*/
__int64 Com_GetCSplineCount()
{
  return cm.mapEnts->splineList.splineCount;
}

/*
==============
Com_GetCSplineIdByTargetName
==============
*/
__int64 Com_GetCSplineIdByTargetName(scr_string_t targetname)
{
  MapEnts *mapEnts; 
  unsigned __int16 v3; 
  int i; 
  SplinePointRecordList *splines; 
  unsigned __int16 v6; 
  unsigned __int16 splinePointCount; 
  const char *v8; 

  mapEnts = cm.mapEnts;
  v3 = 0;
  for ( i = -1; v3 < mapEnts->splineList.splineCount; ++v3 )
  {
    splines = mapEnts->splineList.splines;
    v6 = 0;
    splinePointCount = splines[v3].splinePointCount;
    if ( splinePointCount )
    {
      while ( splines[v3].splinePoints[v6].targetname != targetname )
      {
        if ( ++v6 >= splinePointCount )
          goto LABEL_9;
      }
      if ( i < 0 )
      {
        i = v3 + 1;
      }
      else
      {
        v8 = SL_ConvertToString(targetname);
        Com_PrintWarning(1, "Multiple splines found with the same targetname %s, unable to resolve.", v8);
        mapEnts = cm.mapEnts;
        i = -3;
      }
    }
LABEL_9:
    ;
  }
  return (unsigned int)i;
}

/*
==============
Com_GetCSplineLength
==============
*/
float Com_GetCSplineLength(unsigned __int16 splineId)
{
  unsigned __int16 v1; 

  v1 = splineId - 1;
  if ( (unsigned __int16)(splineId - 1) >= cm.mapEnts->splineList.splineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 25, ASSERT_TYPE_ASSERT, "(splineIndex < Com_GetCSplineCount())", (const char *)&queryFormat, "splineIndex < Com_GetCSplineCount()") )
    __debugbreak();
  return cm.mapEnts->splineList.splines[v1].splineLength;
}

/*
==============
Com_GetCSplinePointAngles
==============
*/
void Com_GetCSplinePointAngles(unsigned __int16 splineId, unsigned __int16 splinePointIndex, vec3_t *out_angles)
{
  unsigned __int16 v3; 
  __int64 v6; 
  SplinePointEntityRecord *splinePoints; 

  v3 = splineId - 1;
  if ( (unsigned __int16)(splineId - 1) >= cm.mapEnts->splineList.splineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 161, ASSERT_TYPE_ASSERT, "(splineIndex < Com_GetCSplineCount())", (const char *)&queryFormat, "splineIndex < Com_GetCSplineCount()") )
    __debugbreak();
  if ( v3 >= cm.mapEnts->splineList.splineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 17, ASSERT_TYPE_ASSERT, "(splineIndex < Com_GetCSplineCount())", (const char *)&queryFormat, "splineIndex < Com_GetCSplineCount()") )
    __debugbreak();
  v6 = v3;
  if ( splinePointIndex >= cm.mapEnts->splineList.splines[v6].splinePointCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 162, ASSERT_TYPE_ASSERT, "(splinePointIndex < Com_GetCSplinePointCount( splineId ))", (const char *)&queryFormat, "splinePointIndex < Com_GetCSplinePointCount( splineId )") )
    __debugbreak();
  splinePoints = cm.mapEnts->splineList.splines[v6].splinePoints;
  out_angles->v[0] = splinePoints[splinePointIndex].angles.v[0];
  out_angles->v[1] = splinePoints[splinePointIndex].angles.v[1];
  out_angles->v[2] = splinePoints[splinePointIndex].angles.v[2];
}

/*
==============
Com_GetCSplinePointCorridorDims
==============
*/
void Com_GetCSplinePointCorridorDims(unsigned __int16 splineId, unsigned __int16 splinePointIndex, vec2_t *out_dims)
{
  unsigned __int16 v3; 
  __int64 v6; 
  SplinePointEntityRecord *splinePoints; 

  v3 = splineId - 1;
  if ( (unsigned __int16)(splineId - 1) >= cm.mapEnts->splineList.splineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 170, ASSERT_TYPE_ASSERT, "(splineIndex < Com_GetCSplineCount())", (const char *)&queryFormat, "splineIndex < Com_GetCSplineCount()") )
    __debugbreak();
  if ( v3 >= cm.mapEnts->splineList.splineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 17, ASSERT_TYPE_ASSERT, "(splineIndex < Com_GetCSplineCount())", (const char *)&queryFormat, "splineIndex < Com_GetCSplineCount()") )
    __debugbreak();
  v6 = v3;
  if ( splinePointIndex >= cm.mapEnts->splineList.splines[v6].splinePointCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 171, ASSERT_TYPE_ASSERT, "(splinePointIndex < Com_GetCSplinePointCount( splineId ))", (const char *)&queryFormat, "splinePointIndex < Com_GetCSplinePointCount( splineId )") )
    __debugbreak();
  splinePoints = cm.mapEnts->splineList.splines[v6].splinePoints;
  out_dims->v[0] = splinePoints[splinePointIndex].corridorDims.v[0];
  out_dims->v[1] = splinePoints[splinePointIndex].corridorDims.v[1];
}

/*
==============
Com_GetCSplinePointCount
==============
*/
__int64 Com_GetCSplinePointCount(unsigned __int16 splineId)
{
  unsigned __int16 v1; 

  v1 = splineId - 1;
  if ( (unsigned __int16)(splineId - 1) >= cm.mapEnts->splineList.splineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 17, ASSERT_TYPE_ASSERT, "(splineIndex < Com_GetCSplineCount())", (const char *)&queryFormat, "splineIndex < Com_GetCSplineCount()") )
    __debugbreak();
  return cm.mapEnts->splineList.splines[v1].splinePointCount;
}

/*
==============
Com_GetCSplinePointDistToNextPoint
==============
*/
float Com_GetCSplinePointDistToNextPoint(unsigned __int16 splineId, unsigned __int16 splinePointIndex)
{
  unsigned __int16 v2; 
  __int64 v4; 

  v2 = splineId - 1;
  if ( (unsigned __int16)(splineId - 1) >= cm.mapEnts->splineList.splineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 206, ASSERT_TYPE_ASSERT, "(splineIndex < Com_GetCSplineCount())", (const char *)&queryFormat, "splineIndex < Com_GetCSplineCount()") )
    __debugbreak();
  if ( v2 >= cm.mapEnts->splineList.splineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 17, ASSERT_TYPE_ASSERT, "(splineIndex < Com_GetCSplineCount())", (const char *)&queryFormat, "splineIndex < Com_GetCSplineCount()") )
    __debugbreak();
  v4 = v2;
  if ( splinePointIndex >= cm.mapEnts->splineList.splines[v4].splinePointCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 207, ASSERT_TYPE_ASSERT, "(splinePointIndex < Com_GetCSplinePointCount( splineId ))", (const char *)&queryFormat, "splinePointIndex < Com_GetCSplinePointCount( splineId )") )
    __debugbreak();
  return cm.mapEnts->splineList.splines[v4].splinePoints[splinePointIndex].distToNextNode;
}

/*
==============
Com_GetCSplinePointId
==============
*/
__int64 Com_GetCSplinePointId(unsigned __int16 splineId, unsigned __int16 splinePointIndex)
{
  unsigned __int16 v2; 
  __int64 v4; 

  v2 = splineId - 1;
  if ( (unsigned __int16)(splineId - 1) >= cm.mapEnts->splineList.splineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 98, ASSERT_TYPE_ASSERT, "(splineIndex < Com_GetCSplineCount())", (const char *)&queryFormat, "splineIndex < Com_GetCSplineCount()") )
    __debugbreak();
  if ( v2 >= cm.mapEnts->splineList.splineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 17, ASSERT_TYPE_ASSERT, "(splineIndex < Com_GetCSplineCount())", (const char *)&queryFormat, "splineIndex < Com_GetCSplineCount()") )
    __debugbreak();
  v4 = v2;
  if ( splinePointIndex >= cm.mapEnts->splineList.splines[v4].splinePointCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 99, ASSERT_TYPE_ASSERT, "(splinePointIndex < Com_GetCSplinePointCount( splineId ))", (const char *)&queryFormat, "splinePointIndex < Com_GetCSplinePointCount( splineId )") )
    __debugbreak();
  return (unsigned int)cm.mapEnts->splineList.splines[v4].splinePoints[splinePointIndex].splineNodeId;
}

/*
==============
Com_GetCSplinePointIndexByTargetName
==============
*/
__int64 Com_GetCSplinePointIndexByTargetName(unsigned __int16 splineId, scr_string_t targetname)
{
  unsigned int v2; 
  SplinePointRecordList *v3; 
  __int64 splinePointCount; 
  __int64 v5; 
  scr_string_t *i; 

  v2 = 0;
  v3 = &cm.mapEnts->splineList.splines[(unsigned __int16)(splineId - 1)];
  splinePointCount = v3->splinePointCount;
  if ( !v3->splinePointCount )
    return 4294967294i64;
  v5 = 0i64;
  for ( i = &v3->splinePoints->targetname; *i != targetname; i += 42 )
  {
    ++v2;
    if ( ++v5 >= splinePointCount )
      return 4294967294i64;
  }
  return v2;
}

/*
==============
Com_GetCSplinePointLabel
==============
*/
__int64 Com_GetCSplinePointLabel(unsigned __int16 splineId, unsigned __int16 splinePointIndex)
{
  unsigned __int16 v2; 
  __int64 v4; 

  v2 = splineId - 1;
  if ( (unsigned __int16)(splineId - 1) >= cm.mapEnts->splineList.splineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 107, ASSERT_TYPE_ASSERT, "(splineIndex < Com_GetCSplineCount())", (const char *)&queryFormat, "splineIndex < Com_GetCSplineCount()") )
    __debugbreak();
  if ( v2 >= cm.mapEnts->splineList.splineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 17, ASSERT_TYPE_ASSERT, "(splineIndex < Com_GetCSplineCount())", (const char *)&queryFormat, "splineIndex < Com_GetCSplineCount()") )
    __debugbreak();
  v4 = v2;
  if ( splinePointIndex >= cm.mapEnts->splineList.splines[v4].splinePointCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 108, ASSERT_TYPE_ASSERT, "(splinePointIndex < Com_GetCSplinePointCount( splineId ))", (const char *)&queryFormat, "splinePointIndex < Com_GetCSplinePointCount( splineId )") )
    __debugbreak();
  return (unsigned int)cm.mapEnts->splineList.splines[v4].splinePoints[splinePointIndex].splineNodeLabel;
}

/*
==============
Com_GetCSplinePointPosition
==============
*/
void Com_GetCSplinePointPosition(unsigned __int16 splineId, unsigned __int16 splinePointIndex, vec3_t *out_position)
{
  unsigned __int16 v3; 
  __int64 v6; 
  SplinePointEntityRecord *splinePoints; 

  v3 = splineId - 1;
  if ( (unsigned __int16)(splineId - 1) >= cm.mapEnts->splineList.splineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 152, ASSERT_TYPE_ASSERT, "(splineIndex < Com_GetCSplineCount())", (const char *)&queryFormat, "splineIndex < Com_GetCSplineCount()") )
    __debugbreak();
  if ( v3 >= cm.mapEnts->splineList.splineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 17, ASSERT_TYPE_ASSERT, "(splineIndex < Com_GetCSplineCount())", (const char *)&queryFormat, "splineIndex < Com_GetCSplineCount()") )
    __debugbreak();
  v6 = v3;
  if ( splinePointIndex >= cm.mapEnts->splineList.splines[v6].splinePointCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 153, ASSERT_TYPE_ASSERT, "(splinePointIndex < Com_GetCSplinePointCount( splineId ))", (const char *)&queryFormat, "splinePointIndex < Com_GetCSplinePointCount( splineId )") )
    __debugbreak();
  splinePoints = cm.mapEnts->splineList.splines[v6].splinePoints;
  out_position->v[0] = splinePoints[splinePointIndex].origin.v[0];
  out_position->v[1] = splinePoints[splinePointIndex].origin.v[1];
  out_position->v[2] = splinePoints[splinePointIndex].origin.v[2];
}

/*
==============
Com_GetCSplinePointString
==============
*/
__int64 Com_GetCSplinePointString(unsigned __int16 splineId, unsigned __int16 splinePointIndex)
{
  unsigned __int16 v2; 
  __int64 v4; 

  v2 = splineId - 1;
  if ( (unsigned __int16)(splineId - 1) >= cm.mapEnts->splineList.splineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 116, ASSERT_TYPE_ASSERT, "(splineIndex < Com_GetCSplineCount())", (const char *)&queryFormat, "splineIndex < Com_GetCSplineCount()") )
    __debugbreak();
  if ( v2 >= cm.mapEnts->splineList.splineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 17, ASSERT_TYPE_ASSERT, "(splineIndex < Com_GetCSplineCount())", (const char *)&queryFormat, "splineIndex < Com_GetCSplineCount()") )
    __debugbreak();
  v4 = v2;
  if ( splinePointIndex >= cm.mapEnts->splineList.splines[v4].splinePointCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 117, ASSERT_TYPE_ASSERT, "(splinePointIndex < Com_GetCSplinePointCount( splineId ))", (const char *)&queryFormat, "splinePointIndex < Com_GetCSplinePointCount( splineId )") )
    __debugbreak();
  return (unsigned int)cm.mapEnts->splineList.splines[v4].splinePoints[splinePointIndex].string;
}

/*
==============
Com_GetCSplinePointTangent
==============
*/
void Com_GetCSplinePointTangent(unsigned __int16 splineId, unsigned __int16 splinePointIndex, vec3_t *out_tangent)
{
  unsigned __int16 v3; 
  __int64 v6; 
  SplinePointEntityRecord *splinePoints; 

  v3 = splineId - 1;
  if ( (unsigned __int16)(splineId - 1) >= cm.mapEnts->splineList.splineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 179, ASSERT_TYPE_ASSERT, "(splineIndex < Com_GetCSplineCount())", (const char *)&queryFormat, "splineIndex < Com_GetCSplineCount()") )
    __debugbreak();
  if ( v3 >= cm.mapEnts->splineList.splineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 17, ASSERT_TYPE_ASSERT, "(splineIndex < Com_GetCSplineCount())", (const char *)&queryFormat, "splineIndex < Com_GetCSplineCount()") )
    __debugbreak();
  v6 = v3;
  if ( splinePointIndex >= cm.mapEnts->splineList.splines[v6].splinePointCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 180, ASSERT_TYPE_ASSERT, "(splinePointIndex < Com_GetCSplinePointCount( splineId ))", (const char *)&queryFormat, "splinePointIndex < Com_GetCSplinePointCount( splineId )") )
    __debugbreak();
  splinePoints = cm.mapEnts->splineList.splines[v6].splinePoints;
  out_tangent->v[0] = splinePoints[splinePointIndex].tangent.v[0];
  out_tangent->v[1] = splinePoints[splinePointIndex].tangent.v[1];
  out_tangent->v[2] = splinePoints[splinePointIndex].tangent.v[2];
}

/*
==============
Com_GetCSplinePointTarget
==============
*/
__int64 Com_GetCSplinePointTarget(unsigned __int16 splineId, unsigned __int16 splinePointIndex)
{
  unsigned __int16 v2; 
  __int64 v4; 

  v2 = splineId - 1;
  if ( (unsigned __int16)(splineId - 1) >= cm.mapEnts->splineList.splineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 134, ASSERT_TYPE_ASSERT, "(splineIndex < Com_GetCSplineCount())", (const char *)&queryFormat, "splineIndex < Com_GetCSplineCount()") )
    __debugbreak();
  if ( v2 >= cm.mapEnts->splineList.splineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 17, ASSERT_TYPE_ASSERT, "(splineIndex < Com_GetCSplineCount())", (const char *)&queryFormat, "splineIndex < Com_GetCSplineCount()") )
    __debugbreak();
  v4 = v2;
  if ( splinePointIndex >= cm.mapEnts->splineList.splines[v4].splinePointCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 135, ASSERT_TYPE_ASSERT, "(splinePointIndex < Com_GetCSplinePointCount( splineId ))", (const char *)&queryFormat, "splinePointIndex < Com_GetCSplinePointCount( splineId )") )
    __debugbreak();
  return (unsigned int)cm.mapEnts->splineList.splines[v4].splinePoints[splinePointIndex].target;
}

/*
==============
Com_GetCSplinePointTargetName
==============
*/
__int64 Com_GetCSplinePointTargetName(unsigned __int16 splineId, unsigned __int16 splinePointIndex)
{
  unsigned __int16 v2; 
  __int64 v4; 

  v2 = splineId - 1;
  if ( (unsigned __int16)(splineId - 1) >= cm.mapEnts->splineList.splineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 125, ASSERT_TYPE_ASSERT, "(splineIndex < Com_GetCSplineCount())", (const char *)&queryFormat, "splineIndex < Com_GetCSplineCount()") )
    __debugbreak();
  if ( v2 >= cm.mapEnts->splineList.splineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 17, ASSERT_TYPE_ASSERT, "(splineIndex < Com_GetCSplineCount())", (const char *)&queryFormat, "splineIndex < Com_GetCSplineCount()") )
    __debugbreak();
  v4 = v2;
  if ( splinePointIndex >= cm.mapEnts->splineList.splines[v4].splinePointCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 126, ASSERT_TYPE_ASSERT, "(splinePointIndex < Com_GetCSplinePointCount( splineId ))", (const char *)&queryFormat, "splinePointIndex < Com_GetCSplinePointCount( splineId )") )
    __debugbreak();
  return (unsigned int)cm.mapEnts->splineList.splines[v4].splinePoints[splinePointIndex].targetname;
}

/*
==============
Com_GetCSplinePointTension
==============
*/
float Com_GetCSplinePointTension(unsigned __int16 splineId, unsigned __int16 splinePointIndex)
{
  unsigned __int16 v2; 
  __int64 v4; 

  v2 = splineId - 1;
  if ( (unsigned __int16)(splineId - 1) >= cm.mapEnts->splineList.splineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 143, ASSERT_TYPE_ASSERT, "(splineIndex < Com_GetCSplineCount())", (const char *)&queryFormat, "splineIndex < Com_GetCSplineCount()") )
    __debugbreak();
  if ( v2 >= cm.mapEnts->splineList.splineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 17, ASSERT_TYPE_ASSERT, "(splineIndex < Com_GetCSplineCount())", (const char *)&queryFormat, "splineIndex < Com_GetCSplineCount()") )
    __debugbreak();
  v4 = v2;
  if ( splinePointIndex >= cm.mapEnts->splineList.splines[v4].splinePointCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 144, ASSERT_TYPE_ASSERT, "(splinePointIndex < Com_GetCSplinePointCount( splineId ))", (const char *)&queryFormat, "splinePointIndex < Com_GetCSplinePointCount( splineId )") )
    __debugbreak();
  return cm.mapEnts->splineList.splines[v4].splinePoints[splinePointIndex].splineNodeTension;
}

/*
==============
Com_GetCSplineSpeed
==============
*/
float Com_GetCSplineSpeed(unsigned __int16 splineId, unsigned __int16 splinePointIndex)
{
  unsigned __int16 v2; 
  __int64 v4; 

  v2 = splineId - 1;
  if ( (unsigned __int16)(splineId - 1) >= cm.mapEnts->splineList.splineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 197, ASSERT_TYPE_ASSERT, "(splineIndex < Com_GetCSplineCount())", (const char *)&queryFormat, "splineIndex < Com_GetCSplineCount()") )
    __debugbreak();
  if ( v2 >= cm.mapEnts->splineList.splineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 17, ASSERT_TYPE_ASSERT, "(splineIndex < Com_GetCSplineCount())", (const char *)&queryFormat, "splineIndex < Com_GetCSplineCount()") )
    __debugbreak();
  v4 = v2;
  if ( splinePointIndex >= cm.mapEnts->splineList.splines[v4].splinePointCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 198, ASSERT_TYPE_ASSERT, "(splinePointIndex < Com_GetCSplinePointCount( splineId ))", (const char *)&queryFormat, "splinePointIndex < Com_GetCSplinePointCount( splineId )") )
    __debugbreak();
  return cm.mapEnts->splineList.splines[v4].splinePoints[splinePointIndex].speed;
}

/*
==============
Com_GetCSplineTargetname
==============
*/
__int64 Com_GetCSplineTargetname(unsigned __int16 splineId)
{
  unsigned __int16 v1; 
  unsigned __int16 v2; 
  SplinePointRecordList *v3; 
  unsigned __int16 splinePointCount; 
  SplinePointEntityRecord *splinePoints; 
  scr_string_t targetname; 

  v1 = splineId - 1;
  if ( (unsigned __int16)(splineId - 1) >= cm.mapEnts->splineList.splineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 34, ASSERT_TYPE_ASSERT, "(splineIndex < Com_GetCSplineCount())", (const char *)&queryFormat, "splineIndex < Com_GetCSplineCount()") )
    __debugbreak();
  v2 = 0;
  v3 = &cm.mapEnts->splineList.splines[v1];
  splinePointCount = v3->splinePointCount;
  if ( !v3->splinePointCount )
    return 0i64;
  splinePoints = v3->splinePoints;
  while ( 1 )
  {
    targetname = splinePoints[v2].targetname;
    if ( targetname )
      break;
    if ( ++v2 >= splinePointCount )
      return 0i64;
  }
  return (unsigned int)targetname;
}

/*
==============
Com_GetCSplineThrottle
==============
*/
float Com_GetCSplineThrottle(unsigned __int16 splineId, unsigned __int16 splinePointIndex)
{
  unsigned __int16 v2; 
  __int64 v4; 

  v2 = splineId - 1;
  if ( (unsigned __int16)(splineId - 1) >= cm.mapEnts->splineList.splineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 188, ASSERT_TYPE_ASSERT, "(splineIndex < Com_GetCSplineCount())", (const char *)&queryFormat, "splineIndex < Com_GetCSplineCount()") )
    __debugbreak();
  if ( v2 >= cm.mapEnts->splineList.splineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 17, ASSERT_TYPE_ASSERT, "(splineIndex < Com_GetCSplineCount())", (const char *)&queryFormat, "splineIndex < Com_GetCSplineCount()") )
    __debugbreak();
  v4 = v2;
  if ( splinePointIndex >= cm.mapEnts->splineList.splines[v4].splinePointCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 189, ASSERT_TYPE_ASSERT, "(splinePointIndex < Com_GetCSplinePointCount( splineId ))", (const char *)&queryFormat, "splinePointIndex < Com_GetCSplinePointCount( splineId )") )
    __debugbreak();
  return cm.mapEnts->splineList.splines[v4].splinePoints[splinePointIndex].throttle;
}

/*
==============
Com_GetTargetNameByCSplineId
==============
*/
__int64 Com_GetTargetNameByCSplineId(unsigned __int16 splineId)
{
  unsigned __int16 v1; 

  v1 = splineId - 1;
  if ( (unsigned __int16)(splineId - 1) >= cm.mapEnts->splineList.splineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 76, ASSERT_TYPE_ASSERT, "(splineIndex < Com_GetCSplineCount())", (const char *)&queryFormat, "splineIndex < Com_GetCSplineCount()") )
    __debugbreak();
  return (unsigned int)cm.mapEnts->splineList.splines[v1].splinePoints->targetname;
}

