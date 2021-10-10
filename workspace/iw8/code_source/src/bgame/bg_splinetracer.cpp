/*
==============
BG_BSpline_Data_LoadFromSaveGame
==============
*/

void __fastcall BG_BSpline_Data_LoadFromSaveGame(SaveGame *save)
{
  ?BG_BSpline_Data_LoadFromSaveGame@@YAXPEAUSaveGame@@@Z(save);
}

/*
==============
BSplineCatmullRom::BSplineCatmullRom
==============
*/

void __fastcall BSplineCatmullRom::BSplineCatmullRom(BSplineCatmullRom *this)
{
  ??0BSplineCatmullRom@@QEAA@XZ(this);
}

/*
==============
BG_SplineTracer_FindAlternatePath
==============
*/

void __fastcall BG_SplineTracer_FindAlternatePath(const BgHandler *handler, Physics_WorldId worldId, const int shooterEntNum, const int trackedEntNum, const orientation_t *muzzleOrientation, const vec3_t *targetPos, const float aimSpread, const bool curveOppositeDirectionOfTarget, const SplineTracerCurveType curveType, const bool extremeCurve, const float extremeCurveMultiplier, BezierCurve *outCurve)
{
  ?BG_SplineTracer_FindAlternatePath@@YAXPEBVBgHandler@@W4Physics_WorldId@@HHAEBUorientation_t@@AEBTvec3_t@@M_NW4SplineTracerCurveType@@4MAEAUBezierCurve@@@Z(handler, worldId, shooterEntNum, trackedEntNum, muzzleOrientation, targetPos, aimSpread, curveOppositeDirectionOfTarget, curveType, extremeCurve, extremeCurveMultiplier, outCurve);
}

/*
==============
BezierCurve::BezierCurve
==============
*/

void __fastcall BezierCurve::BezierCurve(BezierCurve *this)
{
  ??0BezierCurve@@QEAA@XZ(this);
}

/*
==============
BG_BSpline_RelaxedCBezier_DeltaTByArcLength
==============
*/

double __fastcall BG_BSpline_RelaxedCBezier_DeltaTByArcLength(const BSplineRelaxedCBezier *bSpline, float t, float dS)
{
  double result; 

  *(float *)&result = ?BG_BSpline_RelaxedCBezier_DeltaTByArcLength@@YAMPEBUBSplineRelaxedCBezier@@MM@Z(bSpline, t, dS);
  return result;
}

/*
==============
BG_BSpline_Data_Allocate
==============
*/

unsigned int __fastcall BG_BSpline_Data_Allocate(SplineType splineType)
{
  return ?BG_BSpline_Data_Allocate@@YAIW4SplineType@@@Z(splineType);
}

/*
==============
BG_BSpline_RelaxedCBezier_Build
==============
*/

void __fastcall BG_BSpline_RelaxedCBezier_Build(const vec3_t *points, unsigned int numPoints, bool passThruPoints, bool looped, BSplineRelaxedCBezier *outSpline)
{
  ?BG_BSpline_RelaxedCBezier_Build@@YAXPEBTvec3_t@@I_N1PEAUBSplineRelaxedCBezier@@@Z(points, numPoints, passThruPoints, looped, outSpline);
}

/*
==============
BG_Spline_CatmullRom_Reset
==============
*/

void __fastcall BG_Spline_CatmullRom_Reset(BSplineCatmullRom *spline)
{
  ?BG_Spline_CatmullRom_Reset@@YAXPEAUBSplineCatmullRom@@@Z(spline);
}

/*
==============
BG_BSpline_RelaxedCBezier_Evaluate
==============
*/

void __fastcall BG_BSpline_RelaxedCBezier_Evaluate(const BSplineRelaxedCBezier *bSpline, float t, vec3_t *outPos)
{
  ?BG_BSpline_RelaxedCBezier_Evaluate@@YAXPEBUBSplineRelaxedCBezier@@MAEATvec3_t@@@Z(bSpline, t, outPos);
}

/*
==============
BG_SplineTracer_GetPointOnSpline
==============
*/

void __fastcall BG_SplineTracer_GetPointOnSpline(const vec3_t *startPos, const vec3_t *controlPoint1, const vec3_t *controlPoint2, const vec3_t *endPos, const float time, vec3_t *outPointOnSpline)
{
  ?BG_SplineTracer_GetPointOnSpline@@YAXAEBTvec3_t@@000MAEAT1@@Z(startPos, controlPoint1, controlPoint2, endPos, time, outPointOnSpline);
}

/*
==============
BG_SplineTracer_FindPath
==============
*/

bool __fastcall BG_SplineTracer_FindPath(const BgHandler *pmoveHandler, Physics_WorldId worldId, const int shooterEntNum, const int trackedEntNum, const orientation_t *muzzleOrientation, const vec3_t *targetPos, const float aimSpread, const bool curveOppositeDirectionOfTarget, const SplineTracerCurveType curveType, const bool extremeCurve, const float extremeCurveMultiplier, BezierCurve *outCurve)
{
  return ?BG_SplineTracer_FindPath@@YA_NPEBVBgHandler@@W4Physics_WorldId@@HHAEBUorientation_t@@AEBTvec3_t@@M_NW4SplineTracerCurveType@@4MAEAUBezierCurve@@@Z(pmoveHandler, worldId, shooterEntNum, trackedEntNum, muzzleOrientation, targetPos, aimSpread, curveOppositeDirectionOfTarget, curveType, extremeCurve, extremeCurveMultiplier, outCurve);
}

/*
==============
BG_BSpline_CatmullRom_EvalDuration
==============
*/

double __fastcall BG_BSpline_CatmullRom_EvalDuration(const BSplineCatmullRom *spline)
{
  double result; 

  *(float *)&result = ?BG_BSpline_CatmullRom_EvalDuration@@YAMPEBUBSplineCatmullRom@@@Z(spline);
  return result;
}

/*
==============
BG_BSpline_CatmullRom_Build
==============
*/

void __fastcall BG_BSpline_CatmullRom_Build(const vec4_t *pointTimes, unsigned int numPoints, float tau, float alpha, unsigned int calcLength, BSplineCatmullRom::Parametrization param, bool looped, BSplineCatmullRom *outSpline)
{
  ?BG_BSpline_CatmullRom_Build@@YAXPEBTvec4_t@@IMMIW4Parametrization@BSplineCatmullRom@@_NPEAU3@@Z(pointTimes, numPoints, tau, alpha, calcLength, param, looped, outSpline);
}

/*
==============
BG_BSpline_Data_IsValid
==============
*/

unsigned int __fastcall BG_BSpline_Data_IsValid(unsigned int index)
{
  return ?BG_BSpline_Data_IsValid@@YAII@Z(index);
}

/*
==============
BG_SplineTracer_CalculateExtremeCurveMultiplier
==============
*/

double __fastcall BG_SplineTracer_CalculateExtremeCurveMultiplier(const float distance)
{
  double result; 

  *(float *)&result = ?BG_SplineTracer_CalculateExtremeCurveMultiplier@@YAMM@Z(distance);
  return result;
}

/*
==============
BG_BSpline_Data_InvalidIndex
==============
*/

unsigned int __fastcall BG_BSpline_Data_InvalidIndex()
{
  return ?BG_BSpline_Data_InvalidIndex@@YAIXZ();
}

/*
==============
BG_SplineTracer_HasCollisionOnPath
==============
*/

bool __fastcall BG_SplineTracer_HasCollisionOnPath(const BgHandler *pmoveHandler, Physics_WorldId worldId, const int shooterEntNum, const int trackedEntNum, const bool getClosest, const BezierCurve *curve, vec3_t *outCollisionPos)
{
  return ?BG_SplineTracer_HasCollisionOnPath@@YA_NPEBVBgHandler@@W4Physics_WorldId@@HH_NAEBUBezierCurve@@AEATvec3_t@@@Z(pmoveHandler, worldId, shooterEntNum, trackedEntNum, getClosest, curve, outCollisionPos);
}

/*
==============
BSplineRelaxedCBezier::BSplineRelaxedCBezier
==============
*/

void __fastcall BSplineRelaxedCBezier::BSplineRelaxedCBezier(BSplineRelaxedCBezier *this)
{
  ??0BSplineRelaxedCBezier@@QEAA@XZ(this);
}

/*
==============
BG_BSpline_Data_Get
==============
*/

unsigned __int8 *__fastcall BG_BSpline_Data_Get(unsigned int index, SplineType *outSplineType)
{
  return ?BG_BSpline_Data_Get@@YAPEAEIPEAW4SplineType@@@Z(index, outSplineType);
}

/*
==============
BG_BSpline_CatmullRom_Evaluate
==============
*/

void __fastcall BG_BSpline_CatmullRom_Evaluate(const BSplineCatmullRom *spline, float t, vec3_t *outPos, vec3_t *optOutDeriv, unsigned int *optOutNodeAt, float *optOutNodeT)
{
  ?BG_BSpline_CatmullRom_Evaluate@@YAXPEBUBSplineCatmullRom@@MAEATvec3_t@@PEAT2@PEAIPEAM@Z(spline, t, outPos, optOutDeriv, optOutNodeAt, optOutNodeT);
}

/*
==============
BG_Spline_CatmullRom_DebugDraw
==============
*/

void __fastcall BG_Spline_CatmullRom_DebugDraw(const BSplineCatmullRom *splineData, unsigned int drawSegs)
{
  ?BG_Spline_CatmullRom_DebugDraw@@YAXPEBUBSplineCatmullRom@@I@Z(splineData, drawSegs);
}

/*
==============
BG_BSpline_Data_SaveToMemFile
==============
*/

void __fastcall BG_BSpline_Data_SaveToMemFile(MemoryFile *memFile)
{
  ?BG_BSpline_Data_SaveToMemFile@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
BG_BSpline_Data_Deallocate
==============
*/

void __fastcall BG_BSpline_Data_Deallocate(unsigned int index)
{
  ?BG_BSpline_Data_Deallocate@@YAXI@Z(index);
}

/*
==============
BSplineCatmullRom::BSplineCatmullRom
==============
*/
void BSplineCatmullRom::BSplineCatmullRom(BSplineCatmullRom *this)
{
  this->totalLength = -1.0;
  *(_QWORD *)&this->parametrization = 0i64;
  this->tau = 0.0;
  this->totalDuration = 0.0;
}

/*
==============
BSplineRelaxedCBezier::BSplineRelaxedCBezier
==============
*/
void BSplineRelaxedCBezier::BSplineRelaxedCBezier(BSplineRelaxedCBezier *this)
{
  BezierCurve *bcurves; 
  __int64 v3; 

  bcurves = this->bcurves;
  this->ncurves = 0;
  v3 = 15i64;
  do
  {
    BezierCurve::BezierCurve(bcurves++);
    --v3;
  }
  while ( v3 );
  this->totalLength = 0.0;
  *(_QWORD *)&this->lastEvT.y = 0i64;
  this->lastEvT.v[0] = -1.0;
}

/*
==============
BezierCurve::BezierCurve
==============
*/
void BezierCurve::BezierCurve(BezierCurve *this)
{
  *(_OWORD *)this->p0.v = 0ui64;
  *(_QWORD *)&this->p1.y = 0i64;
  *(_OWORD *)this->p2.v = 0ui64;
  *(_QWORD *)&this->p3.y = 0i64;
}

/*
==============
BG_BSpline_BuildPassThru
==============
*/
void BG_BSpline_BuildPassThru(BSplineBuildCache *bcache, const vec3_t *points, int numPoints)
{
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  unsigned int v9; 
  vec3_t *v10; 
  const vec3_t *v11; 
  __int64 v12; 
  const vec3_t *v13; 
  signed __int64 v14; 
  const vec3_t *v15; 
  signed __int64 v16; 
  size_t v17; 
  int v18; 
  int v19; 
  BSplineBuildCache *v20; 
  int v21; 
  float *v22; 
  __int64 v23; 
  float *v24; 
  float *relaxedCubicSplineCoordinateSolution; 
  float *v26; 
  __int64 v27; 
  float v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  __int64 v33; 
  __int64 v34; 
  signed __int64 v35; 
  __int64 v36; 
  signed __int64 v37; 
  signed __int64 v38; 
  __int64 v39; 
  size_t v40; 
  int v41; 
  signed __int64 v42; 
  int v43; 
  int v44; 

  v3 = numPoints - 2;
  bcache->relaxedCubicSplineSolution[0] = *points;
  v4 = numPoints - 3;
  v5 = numPoints - 2 + 1;
  v6 = numPoints - 1;
  v9 = 0;
  v36 = numPoints;
  v10 = &bcache->relaxedCubicSplineSolution[1];
  v11 = points + 1;
  v12 = 3i64 * numPoints + 207;
  v44 = numPoints - 2;
  v43 = numPoints - 3;
  v13 = &points[numPoints - 1];
  v41 = numPoints - 1;
  v14 = (char *)v11 - (char *)bcache;
  bcache->relaxedCubicSplineMatrix[v12] = v13->v[0];
  bcache->relaxedCubicSplineMatrix[v12 + 1] = v13->v[1];
  bcache->relaxedCubicSplineMatrix[v12 + 2] = v13->v[2];
  v15 = &points[numPoints - 2];
  v35 = v14;
  v16 = (char *)points - (char *)bcache;
  v17 = 4 * v3 * (__int64)v3;
  v40 = v17;
  v42 = v16;
  v37 = (char *)v15 - (char *)bcache;
  v38 = (char *)v13 - (char *)bcache;
  v39 = numPoints + v5 * (numPoints - 3);
  do
  {
    memset_0(bcache, 0, v17);
    v18 = 0;
    if ( v3 > 0 )
    {
      v19 = v5;
      v20 = bcache;
      do
      {
        v21 = v18 + 1;
        v20->relaxedCubicSplineMatrix[0] = 4.0;
        if ( v18 + 1 < v3 )
        {
          v20->relaxedCubicSplineMatrix[1] = 1.0;
          bcache->relaxedCubicSplineMatrix[v19 + v18] = 1.0;
        }
        v19 += v5;
        v20 = (BSplineBuildCache *)((char *)v20 + 4 * v5 + 4);
        ++v18;
      }
      while ( v21 < v3 );
    }
    if ( v9 >= 3 )
    {
      LODWORD(v32) = 3;
      LODWORD(v29) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v29, v32) )
        __debugbreak();
      LODWORD(v33) = 3;
      LODWORD(v30) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v30, v33) )
        __debugbreak();
    }
    bcache->relaxedCubicSplineMatrix[v36 - 2] = (float)(6.0 * *(float *)((char *)v10[-71].v + v35)) - *(float *)((char *)v10[-71].v + v16);
    if ( v9 >= 3 )
    {
      LODWORD(v32) = 3;
      LODWORD(v29) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v29, v32) )
        __debugbreak();
      LODWORD(v34) = 3;
      LODWORD(v31) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v31, v34) )
        __debugbreak();
    }
    bcache->relaxedCubicSplineMatrix[v39 - 2] = (float)(6.0 * *(float *)((char *)v10[-71].v + v37)) - *(float *)((char *)v10[-71].v + v38);
    if ( v4 > 1 )
    {
      v22 = (float *)((char *)v10[-69].v + v16);
      v23 = (unsigned int)(v43 - 1);
      v24 = &bcache->relaxedCubicSplineMatrix[v5 + v3];
      do
      {
        if ( v9 >= 3 )
        {
          LODWORD(v32) = 3;
          LODWORD(v29) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v29, v32) )
            __debugbreak();
        }
        *v24 = 6.0 * *v22;
        v24 += v3 + 1;
        v22 += 3;
        --v23;
      }
      while ( v23 );
      v3 = v44;
      v6 = v41;
      v4 = v43;
    }
    relaxedCubicSplineCoordinateSolution = bcache->relaxedCubicSplineCoordinateSolution;
    if ( GaussElim_Forward(bcache->relaxedCubicSplineMatrix, v3) == -1 )
      GaussElim_Backward(bcache->relaxedCubicSplineMatrix, v3, bcache->relaxedCubicSplineCoordinateSolution);
    if ( v6 > 1 )
    {
      v26 = (float *)v10;
      v27 = (unsigned int)(v6 - 1);
      do
      {
        v28 = *relaxedCubicSplineCoordinateSolution;
        if ( v9 >= 3 )
        {
          LODWORD(v32) = 3;
          LODWORD(v29) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v29, v32) )
            __debugbreak();
        }
        *v26 = v28;
        v26 += 3;
        ++relaxedCubicSplineCoordinateSolution;
        --v27;
      }
      while ( v27 );
      v6 = v41;
      v4 = v43;
    }
    v16 = v42;
    v5 = v3 + 1;
    v17 = v40;
    ++v9;
    v10 = (vec3_t *)((char *)v10 + 4);
  }
  while ( (int)v9 < 3 );
}

/*
==============
BG_BSpline_BuildPassThru_Looped
==============
*/
void BG_BSpline_BuildPassThru_Looped(BSplineBuildCache *bcache, const vec3_t *points, int numPoints)
{
  __int64 v3; 
  int v5; 
  size_t v6; 
  int v7; 
  const vec3_t *v8; 
  __int64 v9; 
  __int64 v10; 
  int v11; 
  int v12; 
  BSplineBuildCache *v13; 
  int v14; 
  __int64 v15; 
  int v16; 
  float v17; 
  __int64 v18; 
  float *relaxedCubicSplineCoordinateSolution; 
  __int64 v20; 
  float *v21; 
  float v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  signed __int64 v26; 
  const vec3_t *v27; 
  size_t v29; 

  v27 = points;
  v3 = numPoints;
  v5 = 0;
  v6 = 4 * v3 * v3;
  v7 = numPoints + 1;
  v8 = points;
  v9 = numPoints;
  v29 = v6;
  v10 = (numPoints + 1) * (numPoints - 1);
  v25 = v10;
  v26 = (char *)bcache - (char *)points;
  do
  {
    memset_0(bcache, 0, v6);
    v11 = 0;
    if ( (int)v3 > 0 )
    {
      v12 = v7;
      v13 = bcache;
      do
      {
        v14 = v11 + 1;
        v13->relaxedCubicSplineMatrix[0] = 4.0;
        if ( v11 + 1 < (int)v3 )
        {
          v13->relaxedCubicSplineMatrix[1] = 1.0;
          bcache->relaxedCubicSplineMatrix[v12 + v11] = 1.0;
        }
        v12 += v7;
        v13 = (BSplineBuildCache *)((char *)v13 + 4 * v7 + 4);
        ++v11;
      }
      while ( v14 < (int)v3 );
    }
    v15 = 0i64;
    bcache->relaxedCubicSplineMatrix[v9 - 1] = 1.0;
    bcache->relaxedCubicSplineMatrix[v10] = 1.0;
    if ( v9 > 0 )
    {
      v16 = v3;
      do
      {
        if ( (unsigned int)v5 >= 3 )
        {
          LODWORD(v24) = 3;
          LODWORD(v23) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v23, v24) )
            __debugbreak();
        }
        v17 = 6.0 * v8->v[0];
        v18 = v16;
        ++v15;
        v16 += v7;
        ++v8;
        bcache->relaxedCubicSplineMatrix[v18] = v17;
      }
      while ( v15 < v9 );
      LODWORD(v3) = numPoints;
      v8 = v27;
    }
    relaxedCubicSplineCoordinateSolution = bcache->relaxedCubicSplineCoordinateSolution;
    if ( GaussElim_Forward(bcache->relaxedCubicSplineMatrix, v3) == -1 )
      GaussElim_Backward(bcache->relaxedCubicSplineMatrix, v3, bcache->relaxedCubicSplineCoordinateSolution);
    if ( v9 > 0 )
    {
      v20 = v9;
      v21 = (float *)((char *)v8[70].v + v26);
      do
      {
        v22 = *relaxedCubicSplineCoordinateSolution;
        if ( (unsigned int)v5 >= 3 )
        {
          LODWORD(v24) = 3;
          LODWORD(v23) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v23, v24) )
            __debugbreak();
        }
        *v21 = v22;
        v21 += 3;
        ++relaxedCubicSplineCoordinateSolution;
        --v20;
      }
      while ( v20 );
      v8 = v27;
      v7 = v3 + 1;
    }
    v6 = v29;
    v8 = (const vec3_t *)((char *)v8 + 4);
    v10 = v25;
    ++v5;
    v27 = v8;
  }
  while ( v5 < 3 );
}

/*
==============
BG_BSpline_Build_Internal
==============
*/
void BG_BSpline_Build_Internal(BSplineBuildCache *bcache, const vec3_t *points, unsigned int numPoints, bool passThruPoints, bool looped, BSplineRelaxedCBezier *outSpline)
{
  BSplineRelaxedCBezier *v6; 
  unsigned int v11; 
  float v12; 
  float v13; 
  float v14; 
  __int64 v15; 
  unsigned int ncurves; 
  __int64 v17; 
  vec3_t *p_p3; 
  float v19; 
  unsigned int v20; 
  __int64 v21; 
  int v22; 
  __int128 v23; 
  float v24; 
  float v26; 
  float v27; 
  float v29; 
  __int128 v30; 
  vec3_t *outPointOnSpline; 
  __int64 v32; 
  int v33; 
  vec3_t v34; 
  vec3_t v35; 

  v6 = outSpline;
  while ( 1 )
  {
    if ( !points && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 646, ASSERT_TYPE_ASSERT, "( points )", "Array of points is null") )
      __debugbreak();
    if ( numPoints <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 647, ASSERT_TYPE_ASSERT, "( numPoints > 1 )", "We need at least two points to define a B-Spline") )
      __debugbreak();
    v11 = numPoints - 1;
    if ( numPoints - 1 >= 0x10 )
    {
      LODWORD(v32) = 16;
      LODWORD(outPointOnSpline) = numPoints - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 648, ASSERT_TYPE_ASSERT, "(unsigned)( numPoints - 1 ) < (unsigned)( 16 )", "numPoints - 1 doesn't index MAX_BSPLINE_NUM_POINTS\n\t%i not in [0, %i)", outPointOnSpline, v32) )
        __debugbreak();
    }
    if ( !outSpline && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 649, ASSERT_TYPE_ASSERT, "( outSpline )", "B-Spline object is null") )
      __debugbreak();
    outSpline->ncurves = v11;
    if ( !passThruPoints )
      break;
    if ( looped )
      BG_BSpline_BuildPassThru_Looped(bcache, points, numPoints);
    else
      BG_BSpline_BuildPassThru(bcache, points, numPoints);
    passThruPoints = 0;
    points = bcache->relaxedCubicSplineSolution;
  }
  v12 = points->v[0];
  v13 = points->v[1];
  v14 = points->v[2];
  v15 = 0i64;
  ncurves = v11 + looped;
  outSpline->ncurves = ncurves;
  if ( ncurves )
  {
    do
    {
      v17 = v15;
      outSpline->bcurves[v17].p0.v[2] = v14;
      outSpline->bcurves[v17].p0.v[0] = v12;
      outSpline->bcurves[v17].p0.v[1] = v13;
      outSpline->bcurves[v17].p1.v[0] = (float)(0.33333334 * points[((int)v15 + 1) % numPoints].v[0]) + (float)(0.66666669 * points[v15].v[0]);
      outSpline->bcurves[v17].p1.v[1] = (float)(0.33333334 * points[((int)v15 + 1) % numPoints].v[1]) + (float)(0.66666669 * points[v15].v[1]);
      outSpline->bcurves[v17].p1.v[2] = (float)(0.33333334 * points[((int)v15 + 1) % numPoints].v[2]) + (float)(0.66666669 * points[v15].v[2]);
      outSpline->bcurves[v17].p2.v[0] = (float)(0.66666669 * points[((int)v15 + 1) % numPoints].v[0]) + (float)(0.33333334 * points[v15].v[0]);
      outSpline->bcurves[v17].p2.v[1] = (float)(0.66666669 * points[((int)v15 + 1) % numPoints].v[1]) + (float)(0.33333334 * points[v15].v[1]);
      outSpline->bcurves[v17].p2.v[2] = (float)(0.66666669 * points[((int)v15 + 1) % numPoints].v[2]) + (float)(0.33333334 * points[v15].v[2]);
      if ( (unsigned int)v15 < outSpline->ncurves - 1 || looped )
      {
        v19 = (float)(0.66666669 * points[((int)v15 + 1) % numPoints].v[0]) + (float)(0.16666667 * points[v15].v[0]);
        p_p3 = &outSpline->bcurves[v15].p3;
        p_p3->v[0] = v19;
        p_p3->v[1] = (float)(0.66666669 * points[((int)v15 + 1) % numPoints].v[1]) + (float)(0.16666667 * points[v15].v[1]);
        p_p3->v[2] = (float)(0.66666669 * points[((int)v15 + 1) % numPoints].v[2]) + (float)(0.16666667 * points[v15].v[2]);
        v20 = ((int)v15 + 2) % numPoints;
        p_p3->v[0] = (float)(0.16666667 * points[v20].v[0]) + v19;
        p_p3->v[1] = (float)(0.16666667 * points[v20].v[1]) + outSpline->bcurves[v15].p3.v[1];
        v14 = (float)(0.16666667 * points[v20].v[2]) + outSpline->bcurves[v15].p3.v[2];
      }
      else
      {
        p_p3 = &outSpline->bcurves[v15].p3;
        p_p3->v[0] = points[((int)v15 + 1) % numPoints].v[0];
        p_p3->v[1] = points[((int)v15 + 1) % numPoints].v[1];
        v14 = points[((int)v15 + 1) % numPoints].v[2];
      }
      v15 = (unsigned int)(v15 + 1);
      p_p3->v[2] = v14;
      ncurves = outSpline->ncurves;
      v12 = p_p3->v[0];
      v13 = p_p3->v[1];
    }
    while ( (unsigned int)v15 < outSpline->ncurves );
  }
  if ( looped )
  {
    *(_QWORD *)outSpline->bcurves[0].p0.v = *(_QWORD *)outSpline->bcurves[ncurves - 1].p3.v;
    outSpline->bcurves[0].p0.v[2] = outSpline->bcurves[ncurves - 1].p3.v[2];
    ncurves = outSpline->ncurves;
  }
  v21 = 0i64;
  outSpline->totalLength = 0.0;
  v33 = 0;
  if ( ncurves )
  {
    do
    {
      if ( (BSplineRelaxedCBezier *)((char *)v6 + 48 * v21) == (BSplineRelaxedCBezier *)-4i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 577, ASSERT_TYPE_ASSERT, "(bcurve)", (const char *)&queryFormat, "bcurve") )
        __debugbreak();
      BG_SplineTracer_GetPointOnSpline(&v6->bcurves[v21].p0, &v6->bcurves[v21].p1, &v6->bcurves[v21].p2, &v6->bcurves[v21].p3, 0.0, &v35);
      v22 = 0;
      v23 = 0i64;
      do
      {
        v24 = (float)++v22 * 0.015625;
        if ( (BSplineRelaxedCBezier *)((char *)v6 + 48 * v21) == (BSplineRelaxedCBezier *)-4i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 577, ASSERT_TYPE_ASSERT, "(bcurve)", (const char *)&queryFormat, "bcurve") )
          __debugbreak();
        if ( (v24 < 0.0 || v24 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 578, ASSERT_TYPE_ASSERT, "(t >= 0.0f && t <= 1.0f)", (const char *)&queryFormat, "t >= 0.0f && t <= 1.0f") )
          __debugbreak();
        BG_SplineTracer_GetPointOnSpline(&v6->bcurves[v21].p0, &v6->bcurves[v21].p1, &v6->bcurves[v21].p2, &v6->bcurves[v21].p3, v24, &v34);
        _XMM6 = LODWORD(v34.v[0]);
        v26 = v35.v[2];
        v35.v[2] = v34.v[2];
        v27 = (float)((float)((float)(v35.v[1] - v34.v[1]) * (float)(v35.v[1] - v34.v[1])) + (float)((float)(v35.v[0] - v34.v[0]) * (float)(v35.v[0] - v34.v[0]))) + (float)((float)(v26 - v34.v[2]) * (float)(v26 - v34.v[2]));
        __asm { vunpcklps xmm0, xmm6, xmm5 }
        v29 = fsqrt(v27);
        v30 = v23;
        *(float *)&v30 = *(float *)&v23 + v29;
        v23 = v30;
        *(double *)v34.v = *(double *)&_XMM0;
        *(double *)v35.v = *(double *)&_XMM0;
      }
      while ( v22 < 64 );
      v6 = outSpline;
      if ( *(float *)&v30 < 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 721, ASSERT_TYPE_ASSERT, "( curveLen >= 0.001f )", "Curve length is 0") )
        __debugbreak();
      outSpline->bcurveLengths[v33] = *(float *)&v30;
      v21 = (unsigned int)(v33 + 1);
      outSpline->totalLength = *(float *)&v30 + outSpline->totalLength;
      v33 = v21;
    }
    while ( (unsigned int)v21 < outSpline->ncurves );
  }
  *(_QWORD *)&v6->lastEvT.y = 0i64;
  v6->lastEvT.v[0] = -1.0;
}

/*
==============
BG_BSpline_CatmullRom_Build
==============
*/
void BG_BSpline_CatmullRom_Build(const vec4_t *pointTimes, unsigned int numPoints, float tau, float alpha, unsigned int calcLength, BSplineCatmullRom::Parametrization param, bool looped, BSplineCatmullRom *outSpline)
{
  BSplineCatmullRom *v8; 
  const vec4_t *v9; 
  unsigned int v10; 
  float v11; 
  float v12; 
  __int128 v13; 
  float v14; 
  BSplineCatmullRom::Parametrization v15; 
  float v16; 
  int v17; 
  int v18; 
  unsigned int v19; 
  unsigned int v20; 
  __int64 v21; 
  unsigned int v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  bool v29; 
  float v30; 
  __int64 v31; 
  BSplineCatmullRom::CurveBasis *v32; 
  float *v; 
  float *v34; 
  float *v35; 
  float *v36; 
  int *v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  float v46; 
  float v47; 
  float v48; 
  float v49; 
  signed int v50; 
  float v51; 
  float v52; 
  float v53; 
  __int64 v54; 
  float v55; 
  float v56; 
  float v57; 
  signed int i; 
  __int64 v59; 
  float v60; 
  float v61; 
  unsigned int v62; 
  unsigned int v63; 
  float v64; 
  float v65; 
  unsigned int v66; 
  __int128 v67; 
  float *optOutNodeT; 
  unsigned int v69; 
  __int64 v74; 
  double v75; 
  __int64 v76; 
  vec3_t outPos; 
  int v78[4]; 
  int v79[4]; 

  v8 = outSpline;
  v9 = pointTimes;
  v10 = numPoints;
  *(_QWORD *)outPos.v = outSpline;
  v11 = tau;
  v12 = alpha;
  if ( !pointTimes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 1115, ASSERT_TYPE_ASSERT, "( pointTimes )", "Invalid pointTimes ptr") )
    __debugbreak();
  if ( v10 < 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 1116, ASSERT_TYPE_ASSERT, "( numPoints >= 4 )", "Need at least 4 points, %d passed", v10) )
    __debugbreak();
  if ( v10 >= 0x20 )
  {
    LODWORD(optOutNodeT) = 32;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 1117, ASSERT_TYPE_ASSERT, "( numPoints < 32 )", "Maximum %d allowed, %d passed", optOutNodeT, v10) )
      __debugbreak();
  }
  v13 = 0i64;
  v14 = FLOAT_1_0;
  if ( (tau <= 0.0 || tau > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 1118, ASSERT_TYPE_ASSERT, "( tau > 0.0f && tau <= 1.0f )", "Tension (tau) must be (0..1]") )
    __debugbreak();
  if ( !outSpline && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 1119, ASSERT_TYPE_ASSERT, "( outSpline )", "Invalid outSpline ptr") )
    __debugbreak();
  v15 = param;
  if ( param == CENTRIPETAL && (alpha < 0.0 || alpha > 1.0) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 1120, ASSERT_TYPE_ASSERT, "( param != BSplineCatmullRom::CENTRIPETAL || (alpha >= 0.0f && alpha <= 1.0f) )", "Alpha must be [0..1]") )
      __debugbreak();
    v15 = CENTRIPETAL;
  }
  v16 = v9->v[2];
  *(float *)&v17 = (float)(v9->v[1] - v9[1].v[1]) + v9->v[1];
  *(float *)v78 = (float)(v9->v[0] - v9[1].v[0]) + v9->v[0];
  *(float *)&v18 = (float)(v16 - v9[1].v[2]) + v16;
  v19 = v10 - 1;
  v78[1] = v17;
  v20 = v10 - 2;
  v21 = v10 - 2;
  v22 = 0;
  v69 = 0;
  v78[2] = v18;
  v23 = v9[v10 - 1].v[0];
  v24 = v23 - v9[v21].v[0];
  v25 = v9[v10 - 1].v[1];
  v26 = v25 - v9[v21].v[1];
  v27 = v9[v10 - 1].v[2];
  v28 = v27 - v9[v21].v[2];
  v29 = looped;
  outSpline->parametrization = v15;
  outSpline->numPoints = v10;
  outSpline->totalLength = -1.0;
  outSpline->totalDuration = 0.0;
  outSpline->builtLooped = looped;
  *(float *)v79 = (float)(v24 + v23) + v24;
  *(float *)&v79[1] = (float)(v26 + v25) + v26;
  *(float *)&v79[2] = (float)(v28 + v27) + v28;
  *(float *)&v75 = v24 + v23;
  *((float *)&v75 + 1) = v26 + v25;
  *(float *)&v76 = v28 + v27;
  outSpline->tau = v11;
  v30 = 0.0;
  if ( v10 )
  {
    v31 = 0i64;
    v74 = 0i64;
    while ( 1 )
    {
      v32 = &v8->basis[v31];
      v = v9[v31].v;
      if ( *(float *)&v13 >= v[3] && (v22 != v19 || v29) )
      {
        LODWORD(optOutNodeT) = v22;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 1156, ASSERT_TYPE_ASSERT, "( pointTimes[cndx].w > 0.0f || (cndx == (numPoints-1) && !looped) )", "Point-curve %d has an invalid duration. Must be > 0", optOutNodeT) )
          __debugbreak();
        v15 = param;
        v29 = looped;
        v20 = v10 - 2;
        v19 = v10 - 1;
      }
      if ( v22 || v29 )
        v34 = v9[(v10 + v22 - 1) % v10].v;
      else
        v34 = (float *)v78;
      if ( v29 || v22 != v19 )
        v35 = v9[(v22 + 1) % v10].v;
      else
        v35 = (float *)&v75;
      v36 = v9[(v22 + 2) % v10].v;
      if ( !v29 )
      {
        if ( v22 == v20 )
        {
          v36 = (float *)&v75;
        }
        else
        {
          v37 = v79;
          if ( v22 != v19 )
            v37 = (int *)v36;
          v36 = (float *)v37;
        }
      }
      if ( v15 == UNIFORM )
        break;
      if ( v15 == CENTRIPETAL )
      {
        v38 = v[1];
        v39 = *v;
        v40 = v[2];
        v41 = powf_0(fsqrt((float)((float)((float)(v38 - v34[1]) * (float)(v38 - v34[1])) + (float)((float)(v39 - *v34) * (float)(v39 - *v34))) + (float)((float)(v40 - v34[2]) * (float)(v40 - v34[2]))), v12);
        v42 = *v35;
        v43 = *v35 - v39;
        v44 = v35[1];
        v45 = v44 - v38;
        v46 = v35[2];
        v47 = v41;
        v48 = powf_0(fsqrt((float)((float)(v45 * v45) + (float)(v43 * v43)) + (float)((float)(v46 - v40) * (float)(v46 - v40))), v12);
        v49 = powf_0(fsqrt((float)((float)((float)(v36[1] - v44) * (float)(v36[1] - v44)) + (float)((float)(*v36 - v42) * (float)(*v36 - v42))) + (float)((float)(v36[2] - v46) * (float)(v36[2] - v46))), v12);
        v50 = 0;
        v51 = v14 / v47;
        v52 = v48 + v47;
        v53 = 1.0 - v11;
        do
        {
          v54 = v50;
          v55 = v35[v50] - v[v50];
          v56 = (float)((float)((float)((float)((float)(v[v50] - v34[v50]) * v51) - (float)((float)(v35[v50] - v34[v50]) / v52)) * v48) + v55) * v53;
          v57 = (float)((float)((float)((float)((float)(v36[v50] - v35[v50]) / v49) - (float)((float)(v36[v50] - v[v50]) / (float)(v49 + v48))) * v48) + v55) * v53;
          v32->a.v[v50] = v[v50];
          v32->b.v[v50] = v56;
          v32->c.v[v50++] = (float)((float)(v55 * 3.0) - (float)(v56 * 2.0)) - v57;
          v32->d.v[v54] = (float)(v56 - (float)(v55 * 2.0)) + v57;
        }
        while ( (unsigned int)v50 < 3 );
        v11 = tau;
        v12 = alpha;
LABEL_52:
        v15 = param;
        v9 = pointTimes;
        v22 = v69;
        v13 = 0i64;
      }
      v61 = v[3];
      v10 = numPoints;
      v8 = *(BSplineCatmullRom **)outPos.v;
      ++v22;
      v14 = FLOAT_1_0;
      v29 = looped;
      v19 = numPoints - 1;
      v32->duration = v61;
      v30 = v61 + v8->totalDuration;
      v31 = v74 + 1;
      v69 = v22;
      ++v74;
      v20 = numPoints - 2;
      v8->totalDuration = v30;
      if ( v22 >= numPoints )
        goto LABEL_54;
    }
    for ( i = 0; (unsigned int)i < 3; ++i )
    {
      v59 = i;
      v32->a.v[i] = v[i];
      v32->b.v[i] = (float)(v35[i] - v34[i]) * v11;
      v32->c.v[i] = (float)((float)((float)((float)(2.0 * v34[i]) - v36[i]) * v11) + (float)((float)(v11 - 3.0) * v[i])) + (float)((float)(3.0 - (float)(v11 * 2.0)) * v35[i]);
      v60 = (float)((float)((float)(v36[i] - v34[i]) * v11) + (float)((float)(v11 - 2.0) * v35[i])) + (float)((float)(2.0 - v11) * v[i]);
      v32->d.v[v59] = v60;
    }
    goto LABEL_52;
  }
LABEL_54:
  v62 = calcLength;
  if ( calcLength )
  {
    v8->totalLength = 0.0;
    v63 = 0;
    if ( (int)calcLength < 2 )
      v62 = 2;
    v64 = (float)v62;
    v65 = v30 / v64;
    v66 = v62 + 1;
    do
    {
      BG_BSpline_CatmullRom_Evaluate(v8, *(float *)&v13, &outPos, NULL, NULL, NULL);
      if ( v63 )
        v8->totalLength = fsqrt((float)((float)((float)(outPos.v[1] - *((float *)&v75 + 1)) * (float)(outPos.v[1] - *((float *)&v75 + 1))) + (float)((float)(outPos.v[0] - *(float *)&v75) * (float)(outPos.v[0] - *(float *)&v75))) + (float)((float)(outPos.v[2] - *(float *)&v76) * (float)(outPos.v[2] - *(float *)&v76))) + v8->totalLength;
      ++v63;
      *(float *)&v76 = outPos.v[2];
      v75 = *(double *)outPos.v;
      v67 = v13;
      *(float *)&v67 = *(float *)&v13 + v65;
      v13 = v67;
    }
    while ( v63 < v66 );
  }
}

/*
==============
BG_BSpline_CatmullRom_EvalDuration
==============
*/
float BG_BSpline_CatmullRom_EvalDuration(const BSplineCatmullRom *spline)
{
  float result; 

  if ( !spline && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 1225, ASSERT_TYPE_ASSERT, "( spline )", "spline pointer is invalid") )
    __debugbreak();
  if ( spline->numPoints < 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 1226, ASSERT_TYPE_ASSERT, "( spline->numPoints >= 4 )", "spline is built invalid, wrong number of points") )
    __debugbreak();
  if ( spline->totalDuration <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 1227, ASSERT_TYPE_ASSERT, "( spline->totalDuration > 0.0f )", "spline is built invalid, wrong total duration") )
    __debugbreak();
  result = spline->totalDuration;
  if ( !spline->builtLooped )
    return result - spline->basis[spline->numPoints - 1].duration;
  return result;
}

/*
==============
BG_BSpline_CatmullRom_Evaluate
==============
*/
void BG_BSpline_CatmullRom_Evaluate(const BSplineCatmullRom *spline, float t, vec3_t *outPos, vec3_t *optOutDeriv, unsigned int *optOutNodeAt, float *optOutNodeT)
{
  float v9; 
  double v10; 
  unsigned int numPoints; 
  signed int v12; 
  unsigned int v13; 
  __int128 v14; 
  __int64 v15; 
  unsigned int v16; 
  __int64 v17; 
  float v18; 
  __int128 v19; 
  BSplineCatmullRom::CurveBasis *v20; 
  float v21; 
  float v22; 
  double v23; 
  float v24; 
  vec3_t *v25; 
  float v26; 
  __int64 v27; 
  float v28; 
  char v29; 

  v9 = t;
  if ( !spline && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 1238, ASSERT_TYPE_ASSERT, "( spline )", "spline pointer is invalid") )
    __debugbreak();
  if ( spline->numPoints < 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 1239, ASSERT_TYPE_ASSERT, "( spline->numPoints >= 4 )", "spline is built invalid, wrong number of points") )
    __debugbreak();
  if ( spline->totalDuration <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 1240, ASSERT_TYPE_ASSERT, "( spline->totalDuration > 0.0f )", "spline is built invalid, wrong total duration") )
    __debugbreak();
  v10 = BG_BSpline_CatmullRom_EvalDuration(spline);
  if ( t >= 0.0 )
  {
    if ( t > *(float *)&v10 )
    {
      if ( spline->builtLooped )
        fmodf_0(t, *(float *)&v10);
      else
        v9 = *(float *)&v10;
    }
  }
  else if ( spline->builtLooped )
  {
    v9 = fmodf_0(t, COERCE_FLOAT(LODWORD(v10) ^ _xmm)) + *(float *)&v10;
  }
  else
  {
    v9 = 0.0;
  }
  numPoints = spline->numPoints;
  v12 = 0;
  v13 = 0;
  v14 = 0i64;
  do
  {
    v15 = v13;
    v16 = v13;
    v17 = v13;
    v18 = *(float *)&v14;
    ++v13;
    v19 = v14;
    *(float *)&v19 = *(float *)&v14 + spline->basis[v17].duration;
    v14 = v19;
  }
  while ( v9 > *(float *)&v19 && v13 < numPoints );
  if ( v16 >= numPoints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 1279, ASSERT_TYPE_ASSERT, "( cndx < spline->numPoints )", "something was wrong, could not find the curve in the spline") )
    __debugbreak();
  if ( optOutNodeAt )
    *optOutNodeAt = v16;
  v20 = &spline->basis[v15];
  if ( v20->duration <= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 1286, ASSERT_TYPE_ASSERT, "( curve.duration > 0.001f )", "Wrong curve duration") )
    __debugbreak();
  v21 = v9 - v18;
  v22 = v21 / v20->duration;
  v23 = I_fclamp(v22, 0.0, 1.0);
  v24 = v22;
  if ( optOutNodeT )
    *optOutNodeT = v21;
  v25 = (vec3_t *)&v29;
  v26 = *(float *)&v23 * *(float *)&v23;
  if ( optOutDeriv )
    v25 = optOutDeriv;
  do
  {
    v27 = v12;
    outPos->v[v12] = (float)((float)((float)(v24 * v20->b.v[v12]) + v20->a.v[v12]) + (float)(v26 * v20->c.v[v12])) + (float)((float)((float)(*(float *)&v23 * *(float *)&v23) * *(float *)&v23) * v20->d.v[v12]);
    v28 = (float)((float)((float)(2.0 * v20->c.v[v12]) * v24) + v20->b.v[v12]) + (float)((float)(3.0 * v20->d.v[v12]) * v26);
    ++v12;
    v25->v[v27] = v28;
  }
  while ( (unsigned int)v12 < 3 );
}

/*
==============
BG_BSpline_Data_Allocate
==============
*/
__int64 BG_BSpline_Data_Allocate(SplineType splineType)
{
  unsigned int v2; 
  bool *p_inUse; 
  __int64 result; 
  __int64 v5; 

  if ( !s_splineDataInitialized )
  {
    memset_0(s_splineDataArray, 0, sizeof(s_splineDataArray));
    s_splineDataInitialized = 1;
  }
  v2 = 0;
  p_inUse = &s_splineDataArray[0].inUse;
  while ( *p_inUse )
  {
    if ( !p_inUse[1696] )
    {
      ++v2;
      break;
    }
    if ( !p_inUse[3392] )
    {
      v2 += 2;
      break;
    }
    if ( !p_inUse[5088] )
    {
      v2 += 3;
      break;
    }
    if ( !p_inUse[6784] )
    {
      v2 += 4;
      break;
    }
    if ( !p_inUse[8480] )
    {
      v2 += 5;
      break;
    }
    p_inUse += 10176;
    v2 += 6;
    if ( v2 >= 0xC )
      goto LABEL_18;
  }
  if ( v2 < 0xC )
    goto LABEL_22;
LABEL_18:
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 1444, ASSERT_TYPE_ASSERT, "( slot < 12 )", "BG_BSpline_Data_Allocate(): No more memory to allocate new spline data") )
    __debugbreak();
  if ( v2 == 12 )
    return 0i64;
LABEL_22:
  v5 = v2;
  result = v2 + 1;
  s_splineDataArray[v5].inUse = 1;
  s_splineDataArray[v5].splineType = splineType;
  return result;
}

/*
==============
BG_BSpline_Data_Deallocate
==============
*/
void BG_BSpline_Data_Deallocate(unsigned int index)
{
  bool *p_inUse; 

  if ( !s_splineDataInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 1459, ASSERT_TYPE_ASSERT, "( s_splineDataInitialized )", "BG_BSpline_Data_Deallocate(): Error, BG_BSpline_Data_Allocate() hasn't been called yet.") )
    __debugbreak();
  if ( index - 1 > 0xB && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 1460, ASSERT_TYPE_ASSERT, "( BG_BSpline_Data_IsValid( index ) )", "BG_BSpline_Data_Deallocate(): Index not valid") )
    __debugbreak();
  p_inUse = &s_splineDataArray[index - 1].inUse;
  if ( !*p_inUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 1461, ASSERT_TYPE_ASSERT, "( s_splineDataArray[( index - 1 )].inUse )", "BG_BSpline_Data_Deallocate(): Index not allocated yet. Did you Deallocate this index twice?") )
    __debugbreak();
  if ( index - 1 <= 0xB )
    *p_inUse = 0;
}

/*
==============
BG_BSpline_Data_Get
==============
*/
SplineDataBuffer *BG_BSpline_Data_Get(unsigned int index, SplineType *outSplineType)
{
  __int64 v4; 

  if ( !s_splineDataInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 1472, ASSERT_TYPE_ASSERT, "( s_splineDataInitialized )", "BG_BSpline_Data_Get(): Error, BG_BSpline_Data_Allocate() hasn't been called yet.") )
    __debugbreak();
  if ( index - 1 > 0xB && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 1473, ASSERT_TYPE_ASSERT, "( BG_BSpline_Data_IsValid( index ) )", "BG_BSpline_Data_Get(): Index not valid") )
    __debugbreak();
  if ( index - 1 > 0xA )
    return &s_dummy;
  v4 = index - 1;
  if ( outSplineType )
    *outSplineType = s_splineDataArray[v4].splineType;
  return &s_splineDataArray[v4];
}

/*
==============
BG_BSpline_Data_InvalidIndex
==============
*/
__int64 BG_BSpline_Data_InvalidIndex()
{
  return 0i64;
}

/*
==============
BG_BSpline_Data_IsValid
==============
*/
_BOOL8 BG_BSpline_Data_IsValid(unsigned int index)
{
  return index - 1 <= 0xB;
}

/*
==============
BG_BSpline_Data_LoadFromSaveGame
==============
*/
void BG_BSpline_Data_LoadFromSaveGame(SaveGame *save)
{
  MemoryFile *p_memFile; 
  SplineType *p_splineType; 
  __int64 v3; 
  char v4; 
  unsigned int p; 
  SplineType v6; 

  p_memFile = &save->memFile;
  MemFile_ReadData(&save->memFile, 4ui64, &p);
  if ( p > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 1405, ASSERT_TYPE_ASSERT, "( savedVersion ) <= ( SPLINE_DATA_VERSION )", "%s <= %s\n\t%u, %u", "savedVersion", "SPLINE_DATA_VERSION", p, 1) )
    __debugbreak();
  MemFile_ReadData(p_memFile, 1ui64, &p);
  s_splineDataInitialized = p;
  if ( (_BYTE)p )
  {
    p_splineType = &s_splineDataArray[0].splineType;
    v3 = 12i64;
    do
    {
      MemFile_ReadData(p_memFile, 1ui64, &p);
      v4 = p;
      *((_BYTE *)p_splineType - 4) = p;
      if ( v4 )
      {
        MemFile_ReadData(p_memFile, 0x698ui64, p_splineType - 423);
        MemFile_ReadData(p_memFile, 4ui64, &v6);
        *p_splineType = v6;
      }
      p_splineType += 424;
      --v3;
    }
    while ( v3 );
  }
}

/*
==============
BG_BSpline_Data_SaveToMemFile
==============
*/
void BG_BSpline_Data_SaveToMemFile(MemoryFile *memFile)
{
  bool *p_inUse; 
  __int64 v3; 
  int p; 

  p = 1;
  MemFile_WriteData(memFile, 4ui64, &p);
  LOBYTE(p) = s_splineDataInitialized;
  MemFile_WriteData(memFile, 1ui64, &p);
  if ( s_splineDataInitialized )
  {
    p_inUse = &s_splineDataArray[0].inUse;
    v3 = 12i64;
    do
    {
      LOBYTE(p) = *p_inUse;
      MemFile_WriteData(memFile, 1ui64, &p);
      if ( *p_inUse )
      {
        MemFile_WriteData(memFile, 0x698ui64, p_inUse - 1688);
        p = *((_DWORD *)p_inUse + 1);
        MemFile_WriteData(memFile, 4ui64, &p);
      }
      p_inUse += 1696;
      --v3;
    }
    while ( v3 );
  }
}

/*
==============
BG_BSpline_FindBezierCurve
==============
*/
bool BG_BSpline_FindBezierCurve(const BSplineRelaxedCBezier *bSpline, float t, unsigned int *outCurveNdx, float *outTRelative)
{
  double v7; 
  float v8; 
  float v9; 
  unsigned int lastEvN; 
  float v11; 
  unsigned int v12; 
  float v13; 
  float v14; 
  float v15; 
  bool result; 
  double v17; 

  if ( !bSpline && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 748, ASSERT_TYPE_ASSERT, "( bSpline )", "B-Spline object is null") )
    __debugbreak();
  if ( bSpline->ncurves - 1 > 0xF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 749, ASSERT_TYPE_ASSERT, "( bSpline->ncurves > 0 && bSpline->ncurves <= 16 )", "B-Spline object malformed. Num. curves %d", bSpline->ncurves) )
    __debugbreak();
  if ( (t < 0.0 || t > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 750, ASSERT_TYPE_ASSERT, "( t >= 0.0f && t <= 1.0f )", "Param t for B-Spline must be in [0,1]") )
    __debugbreak();
  v7 = I_fclamp(t, 0.0, 1.0);
  v8 = bSpline->lastEvT.v[0];
  v9 = *(float *)&v7;
  if ( v8 < 0.0 || *(float *)&v7 < v8 )
  {
    lastEvN = 0;
    *(_QWORD *)&bSpline->lastEvT.y = 0i64;
    bSpline->lastEvT.v[0] = *(float *)&v7;
  }
  else
  {
    lastEvN = bSpline->lastEvN;
  }
  if ( lastEvN >= bSpline->ncurves && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 762, ASSERT_TYPE_ASSERT, "( bSpline->lastEvN >= 0 && bSpline->lastEvN < bSpline->ncurves )", "B-Spline object cache malformed. Curve ndx.") )
    __debugbreak();
  v11 = bSpline->lastEvT.v[1];
  if ( (v11 < 0.0 || v11 > bSpline->totalLength) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 763, ASSERT_TYPE_ASSERT, "( bSpline->lastEvT[1] >= 0.0f && bSpline->lastEvT[1] <= bSpline->totalLength )", "B-Spline object cache malformed. Starting segment length.") )
    __debugbreak();
  v12 = bSpline->lastEvN;
  v13 = v9 * bSpline->totalLength;
  v14 = bSpline->lastEvT.v[1];
  if ( v12 >= bSpline->ncurves )
    return 0;
  while ( 1 )
  {
    v15 = bSpline->bcurveLengths[v12];
    if ( v13 >= v14 && v13 <= (float)(v15 + v14) )
      break;
    ++v12;
    v14 = v15 + v14;
    if ( v12 >= bSpline->ncurves )
      return 0;
  }
  if ( v15 <= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 773, ASSERT_TYPE_ASSERT, "(bSpline->bcurveLengths[curveNdx] > 0.001f)", (const char *)&queryFormat, "bSpline->bcurveLengths[curveNdx] > EQUAL_EPSILON") )
    __debugbreak();
  v17 = I_fclamp((float)(v13 - v14) / bSpline->bcurveLengths[v12], 0.0, 1.0);
  *outTRelative = *(float *)&v17;
  *outCurveNdx = v12;
  result = 1;
  bSpline->lastEvN = v12;
  bSpline->lastEvT.v[0] = v9;
  bSpline->lastEvT.v[1] = v14;
  return result;
}

/*
==============
BG_BSpline_RelaxedCBezier_Build
==============
*/
void BG_BSpline_RelaxedCBezier_Build(const vec3_t *points, unsigned int numPoints, bool passThruPoints, bool looped, BSplineRelaxedCBezier *outSpline)
{
  BSplineBuildCache bcache; 

  memset_0(&bcache, 0, sizeof(bcache));
  BG_BSpline_Build_Internal(&bcache, points, numPoints, passThruPoints, looped, outSpline);
}

/*
==============
BG_BSpline_RelaxedCBezier_DeltaTByArcLength
==============
*/
float BG_BSpline_RelaxedCBezier_DeltaTByArcLength(const BSplineRelaxedCBezier *bSpline, float t, float dS)
{
  float v4; 
  unsigned int outCurveNdx; 
  float outTRelative; 
  vec3_t outVel; 

  outCurveNdx = 0;
  outTRelative = 0.0;
  if ( BG_BSpline_FindBezierCurve(bSpline, t, &outCurveNdx, &outTRelative) && (BG_Bezier_EvaluateDerivative(&bSpline->bcurves[outCurveNdx], outTRelative, &outVel), v4 = (float)((float)(outVel.v[0] * outVel.v[0]) + (float)(outVel.v[1] * outVel.v[1])) + (float)(outVel.v[2] * outVel.v[2]), v4 > 0.001) )
    return dS / fsqrt(v4);
  else
    return 0.0;
}

/*
==============
BG_BSpline_RelaxedCBezier_Evaluate
==============
*/
void BG_BSpline_RelaxedCBezier_Evaluate(const BSplineRelaxedCBezier *bSpline, float t, vec3_t *outPos)
{
  __int64 v5; 
  float outTRelative[6]; 
  unsigned int outCurveNdx; 

  outCurveNdx = 0;
  outTRelative[0] = 0.0;
  if ( BG_BSpline_FindBezierCurve(bSpline, t, &outCurveNdx, outTRelative) )
  {
    v5 = outCurveNdx;
    if ( outCurveNdx >= bSpline->ncurves && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 800, ASSERT_TYPE_ASSERT, "(curveNdx < bSpline->ncurves)", (const char *)&queryFormat, "curveNdx < bSpline->ncurves") )
      __debugbreak();
    BG_Bezier_Evaluate(&bSpline->bcurves[v5], outTRelative[0], outPos);
  }
  else
  {
    outPos->v[0] = bSpline->bcurves[0].p0.v[0];
    outPos->v[1] = bSpline->bcurves[0].p0.v[1];
    outPos->v[2] = bSpline->bcurves[0].p0.v[2];
  }
}

/*
==============
BG_Bezier_Evaluate
==============
*/
void BG_Bezier_Evaluate(const BezierCurve *bcurve, float t, vec3_t *outPos)
{
  if ( !bcurve && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 577, ASSERT_TYPE_ASSERT, "(bcurve)", (const char *)&queryFormat, "bcurve") )
    __debugbreak();
  if ( (t < 0.0 || t > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 578, ASSERT_TYPE_ASSERT, "(t >= 0.0f && t <= 1.0f)", (const char *)&queryFormat, "t >= 0.0f && t <= 1.0f") )
    __debugbreak();
  BG_SplineTracer_GetPointOnSpline(&bcurve->p0, &bcurve->p1, &bcurve->p2, &bcurve->p3, t, outPos);
}

/*
==============
BG_Bezier_EvaluateDerivative
==============
*/
void BG_Bezier_EvaluateDerivative(const BezierCurve *bcurve, float t, vec3_t *outVel)
{
  vec3_t *p_p1; 
  int v6; 
  signed __int64 v7; 
  bool v8; 
  float v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 

  if ( !bcurve && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 587, ASSERT_TYPE_ASSERT, "(bcurve)", (const char *)&queryFormat, "bcurve") )
    __debugbreak();
  if ( (t < 0.0 || t > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 588, ASSERT_TYPE_ASSERT, "(t >= 0.0f && t <= 1.0f)", (const char *)&queryFormat, "t >= 0.0f && t <= 1.0f") )
    __debugbreak();
  p_p1 = &bcurve->p1;
  v6 = 0;
  v7 = (char *)outVel - (char *)&bcurve->p1;
  v8 = 1;
  do
  {
    if ( !v8 )
    {
      LODWORD(v16) = 3;
      LODWORD(v10) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v10, v16) )
        __debugbreak();
      LODWORD(v17) = 3;
      LODWORD(v11) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v11, v17) )
        __debugbreak();
      LODWORD(v18) = 3;
      LODWORD(v12) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v12, v18) )
        __debugbreak();
      LODWORD(v19) = 3;
      LODWORD(v13) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v13, v19) )
        __debugbreak();
      LODWORD(v20) = 3;
      LODWORD(v14) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v14, v20) )
        __debugbreak();
      LODWORD(v21) = 3;
      LODWORD(v15) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v15, v21) )
        __debugbreak();
    }
    v9 = (float)((float)((float)(p_p1->v[0] - p_p1[-1].v[0]) * (float)((float)((float)(1.0 - t) * 3.0) * (float)(1.0 - t))) + (float)((float)(p_p1[1].v[0] - p_p1->v[0]) * (float)((float)((float)(1.0 - t) * 6.0) * t))) + (float)((float)(p_p1[2].v[0] - p_p1[1].v[0]) * (float)((float)(t * 3.0) * t));
    if ( (unsigned int)v6 >= 3 )
    {
      LODWORD(v16) = 3;
      LODWORD(v10) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v10, v16) )
        __debugbreak();
    }
    *(float *)((char *)p_p1->v + v7) = v9;
    p_p1 = (vec3_t *)((char *)p_p1 + 4);
    v8 = (unsigned int)++v6 < 3;
  }
  while ( v6 < 3 );
}

/*
==============
BG_SplineTracer_CalculateExtremeCurveMultiplier
==============
*/
float BG_SplineTracer_CalculateExtremeCurveMultiplier(const float distance)
{
  const dvar_t *v1; 
  float value; 
  const dvar_t *v3; 
  const dvar_t *v5; 
  float v6; 
  const dvar_t *v7; 
  float v8; 
  double v10; 
  float v11; 

  v1 = DCONST_DVARFLT_splinetracer_extremeCurveClosestDistance;
  if ( !DCONST_DVARFLT_splinetracer_extremeCurveClosestDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splinetracer_extremeCurveClosestDistance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  value = v1->current.value;
  v3 = DCONST_DVARFLT_splinetracer_extremeCurveFurthestDistance;
  if ( !DCONST_DVARFLT_splinetracer_extremeCurveFurthestDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splinetracer_extremeCurveFurthestDistance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  _XMM6 = v3->current.unsignedInt;
  v5 = DCONST_DVARFLT_splinetracer_extremeCurveMultiplierAtFurthestDistance;
  if ( !DCONST_DVARFLT_splinetracer_extremeCurveMultiplierAtFurthestDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splinetracer_extremeCurveMultiplierAtFurthestDistance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  v6 = v5->current.value;
  v7 = DCONST_DVARFLT_splinetracer_extremeCurveMultiplierAtClosestDistance;
  if ( !DCONST_DVARFLT_splinetracer_extremeCurveMultiplierAtClosestDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splinetracer_extremeCurveMultiplierAtClosestDistance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  v8 = v7->current.value;
  __asm { vmaxss  xmm6, xmm6, xmm7 }
  v10 = I_fclamp(distance, value, *(float *)&_XMM6);
  if ( (float)(*(float *)&_XMM6 - value) <= 0.000001 )
    v11 = FLOAT_1_0;
  else
    v11 = (float)(*(float *)&v10 - value) / (float)(*(float *)&_XMM6 - value);
  return (float)((float)(1.0 - v11) * v8) + (float)(v11 * v6);
}

/*
==============
BG_SplineTracer_DebugLine
==============
*/
void BG_SplineTracer_DebugLine(const BgHandler *pmoveHandler, const vec3_t *startPos, const vec3_t *endPos, const vec4_t *color, const int time)
{
  const dvar_t *v5; 

  v5 = DCONST_DVARBOOL_splinetracer_debug;
  if ( !DCONST_DVARBOOL_splinetracer_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splinetracer_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled )
    pmoveHandler->DebugLine((BgHandler *)pmoveHandler, startPos, endPos, color, 0, time);
}

/*
==============
BG_SplineTracer_DebugStar
==============
*/
void BG_SplineTracer_DebugStar(const BgHandler *pmoveHandler, const vec3_t *pos, const vec4_t *color, const int time)
{
  const dvar_t *v4; 

  v4 = DCONST_DVARBOOL_splinetracer_debug;
  if ( !DCONST_DVARBOOL_splinetracer_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splinetracer_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
    pmoveHandler->DebugStar((BgHandler *)pmoveHandler, pos, color, time);
}

/*
==============
BG_SplineTracer_FindAlternatePath
==============
*/
void BG_SplineTracer_FindAlternatePath(const BgHandler *handler, Physics_WorldId worldId, const int shooterEntNum, const int trackedEntNum, const orientation_t *muzzleOrientation, const vec3_t *targetPos, const float aimSpread, const bool curveOppositeDirectionOfTarget, const SplineTracerCurveType curveType, const bool extremeCurve, const float extremeCurveMultiplier, BezierCurve *outCurve)
{
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
  const dvar_t *v22; 
  float cp1Distance; 
  const dvar_t *v24; 
  float value; 
  const dvar_t *v26; 
  float v27; 
  const dvar_t *v28; 
  const char *v29; 
  const dvar_t *v30; 
  const dvar_t *v31; 
  const dvar_t *v32; 
  vec3_t upDir; 
  vec3_t leftDir; 
  vec3_t forwardDir; 
  vec3_t sourcePos; 

  v12 = muzzleOrientation->axis.m[0].v[1];
  v13 = muzzleOrientation->origin.v[0];
  v14 = muzzleOrientation->origin.v[1];
  v15 = muzzleOrientation->origin.v[2];
  forwardDir.v[0] = muzzleOrientation->axis.m[0].v[0];
  forwardDir.v[2] = muzzleOrientation->axis.m[0].v[2];
  v16 = muzzleOrientation->axis.m[1].v[1];
  forwardDir.v[1] = v12;
  v17 = muzzleOrientation->axis.m[1].v[0];
  leftDir.v[1] = v16;
  v18 = muzzleOrientation->axis.m[2].v[0];
  leftDir.v[0] = v17;
  v19 = muzzleOrientation->axis.m[1].v[2];
  upDir.v[0] = v18;
  v20 = muzzleOrientation->axis.m[2].v[2];
  leftDir.v[2] = v19;
  v21 = muzzleOrientation->axis.m[2].v[1];
  upDir.v[2] = v20;
  sourcePos.v[0] = v13;
  sourcePos.v[1] = v14;
  sourcePos.v[2] = v15;
  upDir.v[1] = v21;
  if ( trackedEntNum == 2047 )
  {
    v22 = DCONST_DVARFLT_splinetracer_no_target_cp1_distance;
    if ( !DCONST_DVARFLT_splinetracer_no_target_cp1_distance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splinetracer_no_target_cp1_distance") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
    cp1Distance = v22->current.value;
    v24 = DCONST_DVARFLT_splinetracer_no_target_cp1_angle;
    if ( !DCONST_DVARFLT_splinetracer_no_target_cp1_angle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splinetracer_no_target_cp1_angle") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v24);
    value = v24->current.value;
    v26 = DCONST_DVARFLT_splinetracer_no_target_cp2_distance_ratio;
    if ( !DCONST_DVARFLT_splinetracer_no_target_cp2_distance_ratio && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splinetracer_no_target_cp2_distance_ratio") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v26);
    v27 = v26->current.value;
    v28 = DCONST_DVARFLT_splinetracer_no_target_cp2_angle;
    if ( !DCONST_DVARFLT_splinetracer_no_target_cp2_angle )
    {
      v29 = "splinetracer_no_target_cp2_angle";
      goto LABEL_24;
    }
  }
  else
  {
    v30 = DCONST_DVARFLT_splinetracer_cp1_distance;
    if ( !DCONST_DVARFLT_splinetracer_cp1_distance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splinetracer_cp1_distance") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v30);
    cp1Distance = v30->current.value;
    v31 = DCONST_DVARFLT_splinetracer_cp1_angle;
    if ( !DCONST_DVARFLT_splinetracer_cp1_angle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splinetracer_cp1_angle") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v31);
    value = v31->current.value;
    v32 = DCONST_DVARFLT_splinetracer_cp2_distance_ratio;
    if ( !DCONST_DVARFLT_splinetracer_cp2_distance_ratio && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splinetracer_cp2_distance_ratio") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v32);
    v27 = v32->current.value;
    v28 = DCONST_DVARFLT_splinetracer_cp2_angle;
    if ( !DCONST_DVARFLT_splinetracer_cp2_angle )
    {
      v29 = "splinetracer_cp2_angle";
LABEL_24:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v29) )
        __debugbreak();
    }
  }
  Dvar_CheckFrontendServerThread(v28);
  BG_SplineTracer_GetControlPoints(&sourcePos, &forwardDir, &leftDir, &upDir, targetPos, aimSpread, cp1Distance, value, v27, v28->current.value, curveOppositeDirectionOfTarget, curveType, extremeCurve, extremeCurveMultiplier, outCurve);
  outCurve->p0.v[0] = v13 + outCurve->p0.v[0];
  outCurve->p0.v[1] = v14 + outCurve->p0.v[1];
  outCurve->p0.v[2] = v15 + outCurve->p0.v[2];
  outCurve->p1.v[0] = v13 + outCurve->p1.v[0];
  outCurve->p1.v[1] = v14 + outCurve->p1.v[1];
  outCurve->p1.v[2] = v15 + outCurve->p1.v[2];
  outCurve->p2.v[0] = v13 + outCurve->p2.v[0];
  outCurve->p2.v[1] = v14 + outCurve->p2.v[1];
  outCurve->p2.v[2] = v15 + outCurve->p2.v[2];
  outCurve->p3.v[0] = v13 + outCurve->p3.v[0];
  outCurve->p3.v[1] = v14 + outCurve->p3.v[1];
  outCurve->p3.v[2] = v15 + outCurve->p3.v[2];
}

/*
==============
BG_SplineTracer_FindPath
==============
*/
char BG_SplineTracer_FindPath(const BgHandler *pmoveHandler, Physics_WorldId worldId, const int shooterEntNum, const int trackedEntNum, const orientation_t *muzzleOrientation, const vec3_t *targetPos, const float aimSpread, const bool curveOppositeDirectionOfTarget, int curveType, const bool extremeCurve, const float extremeCurveMultiplier, BezierCurve *outCurve)
{
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  __int128 v21; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  const dvar_t *v30; 
  float value; 
  const dvar_t *v32; 
  float v33; 
  const dvar_t *v34; 
  const dvar_t *v35; 
  float v36; 
  const dvar_t *v37; 
  const dvar_t *v38; 
  float v39; 
  float v40; 
  vec3_t curveDir; 
  vec3_t sourceToTarget; 
  vec3_t sourcePos; 

  if ( curveType == 1 )
  {
    v14 = muzzleOrientation->origin.v[0];
    v15 = muzzleOrientation->origin.v[1];
    v16 = muzzleOrientation->origin.v[2];
    v40 = muzzleOrientation->axis.m[0].v[2];
    v17 = targetPos->v[0] - muzzleOrientation->origin.v[0];
    v18 = targetPos->v[2] - v16;
    v21 = LODWORD(targetPos->v[1]);
    v19 = targetPos->v[1] - v15;
    *(float *)&v21 = fsqrt((float)((float)(v19 * v19) + (float)(v17 * v17)) + (float)(v18 * v18));
    _XMM10 = v21;
    __asm
    {
      vcmpless xmm0, xmm10, cs:__real@80000000
      vblendvps xmm0, xmm10, xmm1, xmm0
    }
    v24 = muzzleOrientation->axis.m[0].v[0];
    v25 = v17 * (float)(1.0 / *(float *)&_XMM0);
    v26 = v19 * (float)(1.0 / *(float *)&_XMM0);
    v27 = v18 * (float)(1.0 / *(float *)&_XMM0);
    v28 = muzzleOrientation->axis.m[0].v[1];
    sourceToTarget.v[0] = v25;
    sourceToTarget.v[1] = v26;
    sourceToTarget.v[2] = v27;
    sourcePos.v[0] = v14;
    sourcePos.v[1] = v15;
    sourcePos.v[2] = v16;
    if ( *(float *)&v21 > 0.000001 )
    {
      if ( trackedEntNum == 2047 && (*(float *)&v21 < MAX_DISTANCE_TO_GEO || (float)((float)((float)(v28 * v26) + (float)(v24 * v25)) + (float)(v27 * v40)) < cosf_0(MAX_ANGLE_BETWEEN_FIRING_POS_AND_WEAPON)) )
      {
        outCurve->p0.v[0] = v14;
        outCurve->p0.v[1] = v15;
        outCurve->p0.v[2] = v16;
        outCurve->p1.v[0] = v14;
        outCurve->p1.v[1] = v15;
        outCurve->p1.v[2] = v16;
        outCurve->p2.v[0] = v14;
        outCurve->p2.v[1] = v15;
        outCurve->p2.v[2] = v16;
        outCurve->p3.v[0] = v14;
        outCurve->p3.v[1] = v15;
        outCurve->p3.v[2] = v16;
        return 0;
      }
      else
      {
        outCurve->p0.v[0] = v14;
        outCurve->p0.v[1] = v15;
        outCurve->p0.v[2] = v16;
        *(_QWORD *)outCurve->p3.v = *(_QWORD *)targetPos->v;
        v29 = targetPos->v[2];
        curveDir.v[0] = v24 - v25;
        outCurve->p3.v[2] = v29;
        v30 = DCONST_DVARFLT_splinetracer_cp1_normalizedDistance;
        curveDir.v[1] = v28 - v26;
        curveDir.v[2] = v40 - v27;
        if ( !DCONST_DVARFLT_splinetracer_cp1_normalizedDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splinetracer_cp1_normalizedDistance") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v30);
        value = v30->current.value;
        v32 = DCONST_DVARFLT_splinetracer_cp1_scalarMax;
        if ( !DCONST_DVARFLT_splinetracer_cp1_scalarMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splinetracer_cp1_scalarMax") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v32);
        v33 = v32->current.value;
        v34 = DCONST_DVARFLT_splinetracer_cp1_scalarMin;
        if ( !DCONST_DVARFLT_splinetracer_cp1_scalarMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splinetracer_cp1_scalarMin") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v34);
        BG_SplineTracer_GetControlPointPos(*(float *)&v21, &sourcePos, &sourceToTarget, &curveDir, v34->current.value, v33, value, &outCurve->p1);
        v35 = DCONST_DVARFLT_splinetracer_cp2_normalizedDistance;
        if ( !DCONST_DVARFLT_splinetracer_cp2_normalizedDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splinetracer_cp2_normalizedDistance") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v35);
        v36 = v35->current.value;
        v37 = DCONST_DVARFLT_splinetracer_cp2_scalarMax;
        if ( !DCONST_DVARFLT_splinetracer_cp2_scalarMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splinetracer_cp2_scalarMax") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v37);
        v38 = DCONST_DVARFLT_splinetracer_cp2_scalarMin;
        v39 = v37->current.value;
        if ( !DCONST_DVARFLT_splinetracer_cp2_scalarMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splinetracer_cp2_scalarMin") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v38);
        BG_SplineTracer_GetControlPointPos(*(float *)&v21, &sourcePos, &sourceToTarget, &curveDir, v38->current.value, v39, v36, &outCurve->p2);
        BP_SplineTracer_DebugSpline(pmoveHandler, &outCurve->p0, &outCurve->p1, &outCurve->p2, &outCurve->p3, &colorGreen, 0);
        return 1;
      }
    }
    else
    {
      outCurve->p0.v[0] = v14;
      outCurve->p0.v[1] = v15;
      outCurve->p0.v[2] = v16;
      outCurve->p1.v[0] = v14;
      outCurve->p1.v[1] = v15;
      outCurve->p1.v[2] = v16;
      outCurve->p2 = *targetPos;
      outCurve->p3 = *targetPos;
      return 0;
    }
  }
  else
  {
    BG_SplineTracer_FindAlternatePath(pmoveHandler, worldId, shooterEntNum, trackedEntNum, muzzleOrientation, targetPos, aimSpread, curveOppositeDirectionOfTarget, (const SplineTracerCurveType)curveType, extremeCurve, extremeCurveMultiplier, outCurve);
    BP_SplineTracer_DebugSpline(pmoveHandler, &outCurve->p0, &outCurve->p1, &outCurve->p2, &outCurve->p3, &colorBlue, 0);
    return 1;
  }
}

/*
==============
BG_SplineTracer_GetControlPointPos
==============
*/
void BG_SplineTracer_GetControlPointPos(float distToTarget, const vec3_t *sourcePos, const vec3_t *sourceToTarget, const vec3_t *curveDir, const float cpScalarMin, const float cpScalarMax, const float cpNormalizedDistance, vec3_t *outPos)
{
  const dvar_t *v8; 
  float value; 
  const dvar_t *v13; 
  float v14; 
  double v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 

  v8 = DCONST_DVARFLT_splinetracer_cpScalarRangeMin;
  if ( !DCONST_DVARFLT_splinetracer_cpScalarRangeMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splinetracer_cpScalarRangeMin") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  value = v8->current.value;
  v13 = DCONST_DVARFLT_splinetracer_cpScalarRangeMax;
  if ( !DCONST_DVARFLT_splinetracer_cpScalarRangeMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splinetracer_cpScalarRangeMax") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  v14 = v13->current.value;
  if ( (float)(v14 - value) <= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 413, ASSERT_TYPE_ASSERT, "((rangeMax - rangeMin) > 0.001f)", (const char *)&queryFormat, "(rangeMax - rangeMin) > EQUAL_EPSILON") )
    __debugbreak();
  v15 = I_fclamp(distToTarget, value, v14);
  v16 = (float)((float)(1.0 - (float)((float)(*(float *)&v15 - value) / (float)(v14 - value))) * cpScalarMin) + (float)((float)((float)(*(float *)&v15 - value) / (float)(v14 - value)) * cpScalarMax);
  v17 = (float)(*(float *)&v15 * cpNormalizedDistance) * sourceToTarget->v[0];
  outPos->v[0] = v17;
  v18 = (float)(*(float *)&v15 * cpNormalizedDistance) * sourceToTarget->v[1];
  outPos->v[1] = v18;
  *(float *)&v15 = (float)(*(float *)&v15 * cpNormalizedDistance) * sourceToTarget->v[2];
  outPos->v[2] = *(float *)&v15;
  v19 = v17 + sourcePos->v[0];
  outPos->v[0] = v19;
  v20 = v18 + sourcePos->v[1];
  outPos->v[1] = v20;
  v21 = *(float *)&v15 + sourcePos->v[2];
  outPos->v[2] = v21;
  outPos->v[0] = (float)(v16 * curveDir->v[0]) + v19;
  outPos->v[1] = (float)(v16 * curveDir->v[1]) + v20;
  outPos->v[2] = (float)(v16 * curveDir->v[2]) + v21;
}

/*
==============
BG_SplineTracer_GetControlPoints
==============
*/
void BG_SplineTracer_GetControlPoints(const vec3_t *sourcePos, const vec3_t *forwardDir, const vec3_t *leftDir, const vec3_t *upDir, const vec3_t *targetPos, const float aimSpread, const float cp1Distance, const float cp1Angle, const float cp2DistanceRatio, const float cp2Angle, const bool curveOppositeDirectionOfTarget, int curveType, const bool extremeCurve, const float extremeCurveMultiplier, BezierCurve *outCurve)
{
  float v15; 
  float v16; 
  float v17; 
  float v21; 
  __int128 v22; 
  float v23; 
  float v24; 
  float v28; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  __int128 v34; 
  __int128 v35; 
  __int128 v36; 
  float v37; 
  float v38; 
  float v39; 
  float v46; 
  __int128 v47; 
  double v48; 
  float v49; 
  double Float_Internal_DebugName; 
  __int128 v52; 
  float v54; 
  float v55; 
  float v56; 
  float v57; 
  __int128 v58; 
  __int128 v62; 
  __int128 v65; 
  float v69; 
  float v70; 
  float v71; 
  float v72; 
  float v73; 
  float v74; 
  float v75; 
  __int64 v76; 
  float v77; 
  vec3_t vec; 
  _BYTE v79[12]; 
  double v80; 
  __int64 v81; 

  v15 = sourcePos->v[0];
  v16 = sourcePos->v[1];
  v17 = sourcePos->v[2];
  *(_QWORD *)outCurve->p0.v = 0i64;
  outCurve->p0.v[2] = 0.0;
  v22 = LODWORD(targetPos->v[0]);
  v21 = targetPos->v[0] - v15;
  outCurve->p3.v[0] = v21;
  v23 = targetPos->v[1] - v16;
  outCurve->p3.v[1] = v23;
  v24 = targetPos->v[2] - v17;
  *(float *)&v22 = fsqrt((float)((float)(v21 * v21) + (float)(v23 * v23)) + (float)(v24 * v24));
  _XMM1 = v22;
  __asm
  {
    vcmpless xmm0, xmm1, cs:__real@80000000
    vblendvps xmm0, xmm1, xmm11, xmm0
  }
  *(_QWORD *)&v79[4] = 0i64;
  vec.v[0] = v21 * (float)(1.0 / *(float *)&_XMM0);
  v77 = *(float *)&v22;
  vec.v[2] = v24 * (float)(1.0 / *(float *)&_XMM0);
  outCurve->p3.v[2] = v24;
  vec.v[1] = v23 * (float)(1.0 / *(float *)&_XMM0);
  v28 = 0.0;
  *(float *)&_XMM13 = FLOAT_1_0;
  if ( upDir == (const vec3_t *)&v80 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1667, ASSERT_TYPE_ASSERT, "( &v0 != &cross )", (const char *)&queryFormat, "&v0 != &cross") )
    __debugbreak();
  v30 = upDir->v[1];
  v31 = upDir->v[2];
  v32 = upDir->v[0];
  v33 = (float)(v30 * vec.v[2]) - (float)(v31 * vec.v[1]);
  v34 = LODWORD(v31);
  *(float *)&v34 = (float)(v31 * vec.v[0]) - (float)(upDir->v[0] * vec.v[2]);
  v35 = v34;
  *((_QWORD *)&v36 + 1) = 0i64;
  v38 = (float)(upDir->v[0] * vec.v[1]) - (float)(v30 * vec.v[0]);
  v37 = v38;
  *(float *)&v81 = v38;
  *(float *)&v80 = v33;
  *((float *)&v80 + 1) = *(float *)&v35;
  if ( curveType != 1 )
  {
    switch ( curveType )
    {
      case 2:
        v28 = v32;
        break;
      case 3:
        v39 = FLOAT_0_017453292;
        *(_DWORD *)&v79[8] = v81;
        v31 = *(float *)&v81;
        _XMM0 = extremeCurve;
        __asm { vpcmpeqd xmm2, xmm0, xmm1 }
        _XMM1 = LODWORD(extremeCurveMultiplier);
        *(double *)v79 = v80;
        v28 = *(float *)v79;
        __asm { vblendvps xmm13, xmm1, xmm11, xmm2 }
        LODWORD(v30) = _mm_shuffle_ps((__m128)*(unsigned __int64 *)&v80, (__m128)*(unsigned __int64 *)&v80, 85).m128_u32[0];
        goto LABEL_24;
      case 4:
        LODWORD(v28) = LODWORD(v33) ^ _xmm;
        LODWORD(v30) = v35 ^ _xmm;
        LODWORD(v31) = LODWORD(v38) ^ _xmm;
        break;
      case 5:
        LODWORD(v28) = LODWORD(v32) ^ _xmm;
        LODWORD(v30) ^= _xmm;
        LODWORD(v31) ^= _xmm;
        break;
      default:
        LODWORD(v76) = curveType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 219, ASSERT_TYPE_ASSERT, "( 0 )", "Unhandled curve type %d", v76) )
          __debugbreak();
        v31 = *(float *)&v79[8];
        v30 = *(float *)&v79[4];
        v39 = FLOAT_0_017453292;
        goto LABEL_24;
    }
    v39 = FLOAT_0_017453292;
    _XMM0 = extremeCurve;
    __asm { vpcmpeqd xmm2, xmm0, xmm1 }
    _XMM1 = LODWORD(extremeCurveMultiplier);
    __asm { vblendvps xmm13, xmm1, xmm11, xmm2 }
    goto LABEL_24;
  }
  v46 = 0.0;
  *(double *)&v36 = vectosignedpitch(forwardDir);
  v47 = v36;
  v48 = vectosignedpitch(&vec);
  v49 = *(float *)&v48;
  if ( *(float *)&v47 > *(float *)&v48 )
  {
    Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_splinetracer_angleForMaxUpwardsCurveContribution, "splinetracer_angleForMaxUpwardsCurveContribution");
    v52 = v47;
    *(float *)&v52 = *(float *)&v47 - v49;
    _XMM1 = v52;
    __asm { vminss  xmm2, xmm1, xmm0 }
    v46 = *(float *)&_XMM2 / *(float *)&Float_Internal_DebugName;
  }
  v54 = (float)(v46 * upDir->v[1]) + *(float *)&v79[4];
  if ( (float)((float)((float)(vec.v[1] * leftDir->v[1]) + (float)(vec.v[0] * leftDir->v[0])) + (float)(vec.v[2] * leftDir->v[2])) >= 0.0 )
  {
    LODWORD(v33) ^= _xmm;
    v35 ^= (unsigned int)_xmm;
    LODWORD(v37) ^= _xmm;
  }
  if ( !curveOppositeDirectionOfTarget )
  {
    LODWORD(v33) ^= _xmm;
    v35 ^= (unsigned int)_xmm;
    LODWORD(v37) ^= _xmm;
  }
  v55 = (float)(v33 * (float)(1.0 - v46)) + (float)((float)(v46 * upDir->v[0]) + 0.0);
  v56 = v37 * (float)(1.0 - v46);
  v39 = FLOAT_0_017453292;
  v57 = v56 + (float)((float)(v46 * upDir->v[2]) + *(float *)&v79[8]);
  v58 = v35;
  *(float *)&v58 = fsqrt((float)((float)((float)((float)(*(float *)&v35 * (float)(1.0 - v46)) + v54) * (float)((float)(*(float *)&v35 * (float)(1.0 - v46)) + v54)) + (float)(v55 * v55)) + (float)(v57 * v57));
  _XMM1 = v58;
  __asm
  {
    vcmpless xmm0, xmm1, cs:__real@80000000
    vblendvps xmm0, xmm1, xmm11, xmm0
  }
  v28 = (float)(1.0 / *(float *)&_XMM0) * v55;
  v30 = (float)(1.0 / *(float *)&_XMM0) * (float)((float)(*(float *)&v35 * (float)(1.0 - v46)) + v54);
  v31 = (float)(1.0 / *(float *)&_XMM0) * v57;
  *(float *)&_XMM0 = cosf_0(0.017453292 * aimSpread);
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, 0.0, 0.99900001);
  v62 = LODWORD(vec.v[1]);
  *(float *)&v62 = (float)((float)(vec.v[1] * forwardDir->v[1]) + (float)(vec.v[0] * forwardDir->v[0])) + (float)(vec.v[2] * forwardDir->v[2]);
  _XMM3 = v62;
  __asm { vmaxss  xmm4, xmm3, xmm0 }
  v65 = _XMM4;
  *(float *)&v65 = (float)(*(float *)&_XMM4 - *(float *)&_XMM0) / (float)(1.0 - *(float *)&_XMM0);
  _XMM1 = v65;
  __asm
  {
    vmaxss  xmm1, xmm1, xmm14
    vminss  xmm0, xmm1, xmm11
  }
  *(float *)&_XMM13 = 1.0 - *(float *)&_XMM0;
LABEL_24:
  v69 = forwardDir->v[1];
  v70 = forwardDir->v[2];
  v71 = tanf_0((float)(*(float *)&_XMM13 * cp1Angle) * v39);
  v72 = (float)((float)((float)(v71 * cp1Distance) * v28) + 0.0) + (float)((float)(cp1Distance * forwardDir->v[0]) + 0.0);
  outCurve->p1.v[1] = (float)(cp1Distance * v69) + (float)(v30 * (float)(v71 * cp1Distance));
  outCurve->p1.v[0] = v72;
  outCurve->p1.v[2] = (float)(v31 * (float)(v71 * cp1Distance)) + (float)(cp1Distance * v70);
  v73 = (float)(1.0 - (float)((float)(1.0 - cp2DistanceRatio) * *(float *)&_XMM13)) * v77;
  v74 = tanf_0((float)(*(float *)&_XMM13 * cp2Angle) * v39) * v73;
  outCurve->p2.v[0] = (float)((float)(v73 * vec.v[0]) + 0.0) + (float)((float)(v74 * v28) + 0.0);
  v75 = v73 * vec.v[2];
  outCurve->p2.v[1] = (float)(v30 * v74) + (float)(v73 * vec.v[1]);
  outCurve->p2.v[2] = (float)(v31 * v74) + v75;
}

/*
==============
BG_SplineTracer_GetPointOnSpline
==============
*/
void BG_SplineTracer_GetPointOnSpline(const vec3_t *startPos, const vec3_t *controlPoint1, const vec3_t *controlPoint2, const vec3_t *endPos, const float time, vec3_t *outPointOnSpline)
{
  __m128 v11; 
  __m128 v12; 
  __m128 v13; 
  __m128 v14; 
  __m128 v15; 
  __int128 v17; 
  __m128 v20; 
  __m128 v21; 
  __m128 v22; 
  __int128 v24; 
  __m128 v27; 
  __int128 v30; 
  __m128 v33; 
  __int128 v35; 
  __int128 v39; 
  __int128 v40; 
  __int128 v41; 
  __int128 v42; 

  _R14 = outPointOnSpline;
  if ( (time < 0.0 || time > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 88, ASSERT_TYPE_ASSERT, "(time >= 0.f && time <= 1.f)", (const char *)&queryFormat, "time >= 0.f && time <= 1.f") )
    __debugbreak();
  v12 = (__m128)LODWORD(time);
  v12.m128_f32[0] = time * time;
  v11 = v12;
  v13 = (__m128)LODWORD(FLOAT_1_0);
  v13.m128_f32[0] = 1.0 - time;
  v14 = _mm_shuffle_ps(v13, v13, 0);
  v15 = _mm128_mul_ps(v14, v14);
  HIDWORD(v39) = 0;
  v17 = v39;
  *(float *)&v17 = controlPoint2->v[0];
  _XMM0 = v17;
  __asm
  {
    vinsertps xmm0, xmm0, dword ptr [rsi+4], 10h
    vinsertps xmm0, xmm0, dword ptr [rsi+8], 20h ; ' '
  }
  v20 = v11;
  v20.m128_f32[0] = v11.m128_f32[0] * time;
  v21 = _mm128_mul_ps(_mm128_mul_ps(_XMM0, (__m128)_xmm), _mm128_mul_ps(_mm_shuffle_ps(v11, v11, 0), v14));
  v22 = _mm_shuffle_ps(v20, v20, 0);
  HIDWORD(v40) = 0;
  v24 = v40;
  *(float *)&v24 = endPos->v[0];
  _XMM0 = v24;
  __asm
  {
    vinsertps xmm0, xmm0, dword ptr [rbp+4], 10h
    vinsertps xmm0, xmm0, dword ptr [rbp+8], 20h ; ' '
  }
  v27 = _mm128_add_ps(v21, _mm128_mul_ps(v22, _XMM0));
  __asm { vbroadcastss xmm0, [rsp+148h+time] }
  HIDWORD(v41) = 0;
  v30 = v41;
  *(float *)&v30 = controlPoint1->v[0];
  _XMM1 = v30;
  __asm
  {
    vinsertps xmm1, xmm1, dword ptr [rdi+4], 10h
    vinsertps xmm1, xmm1, dword ptr [rdi+8], 20h ; ' '
  }
  v33 = _mm128_mul_ps(_mm128_mul_ps(_XMM1, (__m128)_xmm), _mm128_mul_ps(_XMM0, v15));
  HIDWORD(v42) = 0;
  v35 = v42;
  *(float *)&v35 = startPos->v[0];
  _XMM0 = v35;
  __asm
  {
    vinsertps xmm0, xmm0, dword ptr [rbx+4], 10h
    vinsertps xmm0, xmm0, dword ptr [rbx+8], 20h ; ' '
  }
  _XMM1 = _mm128_add_ps(_mm128_add_ps(v27, v33), _mm128_mul_ps(_mm128_mul_ps(v15, v14), _XMM0));
  outPointOnSpline->v[0] = _XMM1.m128_f32[0];
  __asm
  {
    vextractps dword ptr [r14+4], xmm1, 1
    vextractps dword ptr [r14+8], xmm1, 2
  }
}

/*
==============
BG_SplineTracer_HasCollisionOnPath
==============
*/
char BG_SplineTracer_HasCollisionOnPath(const BgHandler *pmoveHandler, Physics_WorldId worldId, const int shooterEntNum, const int trackedEntNum, const bool getClosest, const BezierCurve *curve, vec3_t *outCollisionPos)
{
  const dvar_t *v8; 
  __int64 integer; 
  int v10; 
  __int128 v11; 
  int v12; 
  __int64 v13; 
  float *v14; 
  __int128 v15; 
  float v16; 
  const dvar_t *v17; 
  float v18; 
  float v19; 
  float *v20; 
  __int64 v21; 
  float v22; 
  float v23; 
  float v24; 
  __int128 v25; 
  float v26; 
  __int128 v27; 
  float v28; 
  float v29; 
  float v33; 
  float v34; 
  float v35; 
  __int128 v36; 
  int v40; 
  int v41; 
  HavokPhysics_CollisionQueryResult *ClosestResult; 
  HavokPhysics_CollisionQueryResult *v43; 
  const dvar_t *v44; 
  hkMemoryAllocator *v45; 
  hkMemoryAllocator *v46; 
  double RaycastHitFraction; 
  vec3_t *v49; 
  vec3_t *v50; 
  float v51; 
  float v52; 
  vec3_t *v53; 
  const dvar_t *v54; 
  hkMemoryAllocator *v55; 
  hkMemoryAllocator *v56; 
  HavokPhysics_IgnoreBodies v60; 
  vec3_t *v61; 
  Physics_RaycastExtendedData extendedData; 
  __int64 v63; 
  _DWORD v64[2]; 
  vec3_t start[21]; 

  v63 = -2i64;
  v61 = outCollisionPos;
  v8 = DCONST_DVARINT_splinetracer_line_trace_count_for_spline;
  if ( !DCONST_DVARINT_splinetracer_line_trace_count_for_spline && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splinetracer_line_trace_count_for_spline") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  integer = v8->current.integer;
  v10 = integer + 1;
  v11 = 0i64;
  v12 = 0;
  v13 = (int)integer + 1;
  if ( (int)integer + 1 > 0 )
  {
    v14 = &start[0].v[2];
    do
    {
      v15 = v11;
      *(float *)&v15 = *(float *)&v11 + (float)(1.0 / (float)(integer + 1));
      v11 = v15;
      if ( v12 == (_DWORD)integer )
      {
        BG_SplineTracer_GetPointOnSpline(&curve->p0, &curve->p1, &curve->p2, &curve->p3, 0.99000001, &start[v12]);
      }
      else if ( v12 )
      {
        v16 = cosf_0(*(float *)&v15 * 1.5707964);
        BG_SplineTracer_GetPointOnSpline(&curve->p0, &curve->p1, &curve->p2, &curve->p3, 1.0 - v16, &start[v12]);
      }
      else
      {
        *((_QWORD *)v14 - 1) = *(_QWORD *)curve->p0.v;
        *v14 = curve->p0.v[2];
      }
      ++v12;
      v14 += 3;
      --v13;
    }
    while ( v13 );
  }
  v17 = DCONST_DVARFLT_splinetracer_collinear_assumption_angle;
  if ( !DCONST_DVARFLT_splinetracer_collinear_assumption_angle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splinetracer_collinear_assumption_angle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  v18 = v17->current.value * 0.017453292;
  cosf_0(v18);
  v19 = v18;
  if ( integer > 1 )
  {
    v20 = (float *)&v64[3 * integer];
    v21 = integer - 1;
    do
    {
      v22 = *(v20 - 1);
      v23 = v20[2];
      v24 = v22 - v23;
      v25 = *(unsigned int *)v20;
      v27 = v25;
      v26 = *(float *)&v25 - v20[3];
      v28 = v20[1];
      v29 = v28 - v20[4];
      *(float *)&v27 = fsqrt((float)((float)(v26 * v26) + (float)(v24 * v24)) + (float)(v29 * v29));
      _XMM3 = v27;
      __asm
      {
        vcmpless xmm0, xmm3, xmm14
        vblendvps xmm1, xmm3, xmm13, xmm0
      }
      v33 = 1.0 / *(float *)&_XMM1;
      v34 = *(v20 - 4) - v22;
      v36 = *((unsigned int *)v20 - 3);
      v35 = *(v20 - 3) - *(float *)&v25;
      *(float *)&v25 = *(v20 - 2) - v28;
      *(float *)&v36 = fsqrt((float)((float)(v35 * v35) + (float)(v34 * v34)) + (float)(*(float *)&v25 * *(float *)&v25));
      _XMM1 = v36;
      __asm
      {
        vcmpless xmm0, xmm1, xmm14
        vblendvps xmm1, xmm1, xmm13, xmm0
      }
      if ( (float)((float)((float)((float)(v33 * v26) * (float)(v35 * (float)(1.0 / *(float *)&_XMM1))) + (float)((float)(v34 * (float)(1.0 / *(float *)&_XMM1)) * (float)(v33 * v24))) + (float)((float)(v33 * v29) * (float)(*(float *)&v25 * (float)(1.0 / *(float *)&_XMM1)))) >= v19 )
      {
        *(v20 - 1) = v23;
        *v20 = v20[3];
        v20[1] = v20[4];
        --v10;
      }
      v20 -= 3;
      --v21;
    }
    while ( v21 );
  }
  v40 = 0;
  if ( v10 - 1 <= 0 )
    return 0;
  v41 = trackedEntNum;
  while ( 1 )
  {
    if ( getClosest )
      ClosestResult = PhysicsQuery_GetClosestResult(worldId);
    else
      ClosestResult = PhysicsQuery_GetAnyResult(worldId);
    v43 = ClosestResult;
    HavokPhysics_CollisionQueryResult::Reset(ClosestResult, 1);
    HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v60, (trackedEntNum != 2047) + 1, 0);
    HavokPhysics_IgnoreBodies::SetIgnoreRefs(&v60, 128);
    HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v60, 0, shooterEntNum, 1, 1, 0, 1, 0);
    if ( v41 != 2047 )
      HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v60, 1, v41, 1, 1, 0, 1, 0);
    extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
    extendedData.collisionBuffer = 0.0;
    extendedData.phaseSelection = All;
    extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
    *(_WORD *)&extendedData.collectInsideHits = 256;
    extendedData.ignoreBodies = &v60;
    extendedData.contents = 8399153;
    Physics_Raycast(worldId, &start[v40], &start[v40 + 1], &extendedData, v43);
    if ( HavokPhysics_CollisionQueryResult::HasHit(v43) )
      break;
    v44 = DCONST_DVARBOOL_splinetracer_debug;
    if ( !DCONST_DVARBOOL_splinetracer_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splinetracer_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v44);
    if ( v44->current.enabled )
      pmoveHandler->DebugLine((BgHandler *)pmoveHandler, &start[v40], &start[v40 + 1], &colorGreen, 0, 0);
    v45 = hkMemHeapAllocator();
    v60.m_ignoreBodies.m_size = 0;
    if ( v60.m_ignoreBodies.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v45, v60.m_ignoreBodies.m_data, 4, v60.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
    v60.m_ignoreBodies.m_data = NULL;
    v60.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
    v46 = hkMemHeapAllocator();
    v60.m_ignoreEntities.m_size = 0;
    if ( v60.m_ignoreEntities.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v46, v60.m_ignoreEntities.m_data, 8, v60.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
    ++v40;
    v41 = trackedEntNum;
    if ( v40 >= v10 - 1 )
      return 0;
  }
  RaycastHitFraction = HavokPhysics_CollisionQueryResult::GetRaycastHitFraction(v43, 0);
  v49 = &start[v40];
  v50 = &start[v40 + 1];
  v51 = v50->v[1] - v49->v[1];
  v52 = v50->v[2] - v49->v[2];
  v53 = v61;
  v61->v[0] = (float)((float)(v50->v[0] - v49->v[0]) * *(float *)&RaycastHitFraction) + v49->v[0];
  v53->v[1] = (float)(v51 * *(float *)&RaycastHitFraction) + v49->v[1];
  v53->v[2] = (float)(v52 * *(float *)&RaycastHitFraction) + v49->v[2];
  v54 = DCONST_DVARBOOL_splinetracer_debug;
  if ( !DCONST_DVARBOOL_splinetracer_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splinetracer_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v54);
  if ( v54->current.enabled )
    pmoveHandler->DebugLine((BgHandler *)pmoveHandler, v49, v50, &colorRed, 0, 0);
  v55 = hkMemHeapAllocator();
  v60.m_ignoreBodies.m_size = 0;
  if ( v60.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v55, v60.m_ignoreBodies.m_data, 4, v60.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v60.m_ignoreBodies.m_data = NULL;
  v60.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v56 = hkMemHeapAllocator();
  v60.m_ignoreEntities.m_size = 0;
  if ( v60.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v56, v60.m_ignoreEntities.m_data, 8, v60.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  return 1;
}

/*
==============
BG_Spline_CatmullRom_DebugDraw
==============
*/
void BG_Spline_CatmullRom_DebugDraw(const BSplineCatmullRom *splineData, unsigned int drawSegs)
{
  __int64 v2; 
  __int128 v4; 
  __int128 v5; 
  double v6; 
  float v7; 
  __int128 v8; 
  unsigned int i; 
  __int64 v10; 
  __int128 v11; 
  vec3_t outPos; 
  vec3_t start; 

  v2 = drawSegs;
  if ( !splineData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 1319, ASSERT_TYPE_ASSERT, "( splineData )", "spline pointer is invalid") )
    __debugbreak();
  if ( splineData->numPoints < 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 1320, ASSERT_TYPE_ASSERT, "( splineData->numPoints >= 4 )", "spline is built invalid, wrong number of points") )
    __debugbreak();
  v4 = 0i64;
  if ( splineData->totalDuration <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 1321, ASSERT_TYPE_ASSERT, "( splineData->totalDuration > 0.0f )", "spline is built invalid, wrong total duration") )
    __debugbreak();
  if ( (unsigned int)v2 <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 1322, ASSERT_TYPE_ASSERT, "( drawSegs > 1 )", "number of draw segments not valid") )
    __debugbreak();
  v5 = 0i64;
  v6 = BG_BSpline_CatmullRom_EvalDuration(splineData);
  if ( *(float *)&v6 >= 0.0 )
  {
    do
    {
      BG_BSpline_CatmullRom_Evaluate(splineData, *(float *)&v5, &outPos, NULL, NULL, NULL);
      if ( *(float *)&v5 > 0.0 )
        CG_DebugLine(&start, &outPos, &colorGreen, 0, 0);
      v8 = v5;
      v7 = (float)v2;
      *(float *)&v8 = *(float *)&v5 + (float)(*(float *)&v6 / v7);
      v5 = v8;
      start = outPos;
    }
    while ( *(float *)&v8 <= *(float *)&v6 );
  }
  for ( i = 0; i < splineData->numPoints; v4 = v11 )
  {
    BG_BSpline_CatmullRom_Evaluate(splineData, *(float *)&v4, &outPos, NULL, NULL, NULL);
    CG_DebugSphere(&outPos, 5.0, &colorBlue, 0, 0);
    v10 = i++;
    v11 = v4;
    *(float *)&v11 = *(float *)&v4 + splineData->basis[v10].duration;
  }
}

/*
==============
BG_Spline_CatmullRom_Reset
==============
*/
void BG_Spline_CatmullRom_Reset(BSplineCatmullRom *spline)
{
  if ( !spline && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 1351, ASSERT_TYPE_ASSERT, "( spline )", "spline pointer is invalid") )
    __debugbreak();
  spline->numPoints = 0;
  *(_QWORD *)&spline->totalLength = 0i64;
}

/*
==============
BP_SplineTracer_DebugSpline
==============
*/
void BP_SplineTracer_DebugSpline(const BgHandler *pmoveHandler, const vec3_t *startPos, const vec3_t *controlPoint1, const vec3_t *controlPoint2, const vec3_t *endPos, const vec4_t *color, const int time)
{
  const dvar_t *v7; 
  int integer; 
  float v12; 
  __int128 v13; 
  const vec3_t *v14; 
  int i; 
  __int128 v16; 
  float v17; 
  const dvar_t *v18; 
  vec3_t outPointOnSpline; 
  vec3_t v21; 

  v7 = DCONST_DVARINT_splinetracer_debug_spline_line_count;
  if ( !DCONST_DVARINT_splinetracer_debug_spline_line_count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splinetracer_debug_spline_line_count") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  integer = v7->current.integer;
  v12 = startPos->v[1];
  v21.v[0] = startPos->v[0];
  v21.v[2] = startPos->v[2];
  v21.v[1] = v12;
  v13 = 0i64;
  BG_SplineTracer_DebugStar(pmoveHandler, startPos, &colorYellow, time);
  BG_SplineTracer_DebugStar(pmoveHandler, controlPoint1, &colorYellow, time);
  v14 = controlPoint2;
  BG_SplineTracer_DebugStar(pmoveHandler, controlPoint2, &colorYellow, time);
  BG_SplineTracer_DebugStar(pmoveHandler, endPos, &colorYellow, time);
  BG_SplineTracer_DebugLine(pmoveHandler, startPos, endPos, &colorYellow, time);
  for ( i = 0; i < integer; v21 = outPointOnSpline )
  {
    v16 = v13;
    *(float *)&v16 = *(float *)&v13 + (float)(1.0 / (float)integer);
    v13 = v16;
    if ( i == integer - 1 )
    {
      v17 = endPos->v[1];
      outPointOnSpline.v[0] = endPos->v[0];
      outPointOnSpline.v[2] = endPos->v[2];
      outPointOnSpline.v[1] = v17;
    }
    else
    {
      BG_SplineTracer_GetPointOnSpline(startPos, controlPoint1, v14, endPos, *(const float *)&v16, &outPointOnSpline);
    }
    v18 = DCONST_DVARBOOL_splinetracer_debug;
    if ( !DCONST_DVARBOOL_splinetracer_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splinetracer_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    if ( v18->current.enabled )
      pmoveHandler->DebugLine((BgHandler *)pmoveHandler, &v21, &outPointOnSpline, color, 0, time);
    ++i;
    v14 = controlPoint2;
  }
}

/*
==============
GaussElim_Backward
==============
*/
void GaussElim_Backward(const float *mat, int rows, float *sol)
{
  __int64 v3; 
  float *v4; 
  int v5; 
  __int64 v6; 
  int v7; 
  const float *v8; 
  __int64 v9; 
  __int64 v10; 
  float *v11; 
  __int64 v12; 
  const float *v13; 
  char *v14; 
  __int64 v15; 
  char *v16; 
  const float *v17; 
  __int64 v18; 
  __int128 v19; 
  float *v20; 
  unsigned __int64 v21; 
  float v22; 
  __int128 v23; 
  float *v24; 
  __int64 v25; 
  float v26; 
  __int128 v27; 
  float v28; 
  __int64 v29; 
  const float *v30; 
  __int64 v31; 
  __int64 v32; 
  __int64 v33; 
  __int64 v36; 

  v3 = rows;
  if ( !mat && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 996, ASSERT_TYPE_ASSERT, "( mat )", "null matrix pointer") )
    __debugbreak();
  if ( (int)v3 < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 997, ASSERT_TYPE_ASSERT, "( rows >= 1 )", "Invalid number of equations") )
    __debugbreak();
  v4 = sol;
  if ( !sol )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 998, ASSERT_TYPE_ASSERT, "( sol )", "null solutions array") )
      __debugbreak();
    v4 = NULL;
  }
  v5 = v3 - 1;
  v6 = v3;
  v7 = v3 + 1;
  if ( (int)v3 - 1 >= 0 )
  {
    v8 = mat;
    v9 = v7 * v5;
    v10 = v5 + 1i64;
    v11 = &v4[v5];
    v12 = v3 - v5 - 1;
    v31 = ~(_DWORD)v3;
    v29 = v9;
    v33 = 4i64 * ~v7;
    v36 = v12;
    v13 = &mat[v5 * ((int)v3 + 2)];
    v32 = -4 * v31;
    v14 = (char *)mat + 4 * v9 - (_QWORD)v4;
    v15 = (char *)&v4[-v9] - (char *)mat;
    v16 = (char *)v4 + 4 * (3 - v9) - (_QWORD)mat;
    v17 = &mat[v7 * (v5 + 1) - 1];
    v30 = v17;
    do
    {
      v18 = v10;
      v19 = *(unsigned int *)v17;
      *v11 = *(float *)&v19;
      if ( v10 < v6 )
      {
        if ( v12 >= 4 )
        {
          v20 = (float *)&v8[v9 + v10];
          v21 = ((unsigned __int64)(v6 - v10 - 4) >> 2) + 1;
          v18 = v10 + 4 * v21;
          do
          {
            v22 = *(float *)((char *)v20 + v15) * *v20;
            v20 += 4;
            v23 = v19;
            *v11 = *(float *)&v19 - v22;
            *(float *)&v23 = (float)(*(float *)&v19 - v22) - (float)(*(float *)((char *)v20 + v15 - 12) * *(v20 - 3));
            *v11 = *(float *)&v23;
            *(float *)&v23 = *(float *)&v23 - (float)(*(float *)&v16[(_QWORD)v20 - 20] * *(v20 - 2));
            *v11 = *(float *)&v23;
            *(float *)&v23 = *(float *)&v23 - (float)(*(float *)&v16[(_QWORD)v20 - 16] * *(v20 - 1));
            v19 = v23;
            *v11 = *(float *)&v23;
            --v21;
          }
          while ( v21 );
        }
        if ( v18 < v6 )
        {
          v24 = &v4[v18];
          v25 = v6 - v18;
          do
          {
            v26 = *(float *)&v14[(_QWORD)v24] * *v24;
            ++v24;
            v27 = v19;
            *(float *)&v27 = *(float *)&v19 - v26;
            v19 = v27;
            *v11 = *(float *)&v27;
            --v25;
          }
          while ( v25 );
        }
      }
      if ( COERCE_FLOAT(*(_DWORD *)v13 & _xmm) <= 0.001 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 1014, ASSERT_TYPE_ASSERT, "( fabs( (mat[(PADCOLS)*(row)+(row)]) ) > 0.001f )", "diagonal pivot is 0, singular matrix") )
          __debugbreak();
        v8 = mat;
        v4 = sol;
        v9 = v29;
      }
      --v10;
      v28 = *v11 / *v13;
      v9 += v31;
      v16 += v32;
      v17 = &v30[v31];
      v15 += v32;
      v12 = v36 + 1;
      v13 = (const float *)((char *)v13 + v33);
      v14 += 4 * v31;
      *v11-- = v28;
      v30 = v17;
      --v5;
      v29 = v9;
      ++v36;
    }
    while ( v5 >= 0 );
  }
}

/*
==============
GaussElim_Forward
==============
*/
__int64 GaussElim_Forward(float *mat, int rows)
{
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v13; 
  int v14; 
  int v18; 
  int v25; 
  __int64 v27; 
  __int64 v28; 
  float *v29; 
  __int64 v30; 
  unsigned __int64 v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  __int64 v39; 
  float *v40; 
  __int64 v41; 
  __int64 v42; 
  float v43; 
  __int64 v44; 
  __int64 v45; 
  __int64 v46; 
  __int64 v47; 
  int v48; 
  __int64 v49; 
  __int64 v50; 
  float *v51; 
  __int64 v52; 
  float *v53; 
  __int64 v54; 
  __int64 v55; 
  __int64 v56; 
  __int64 v57; 
  float v58; 
  float *v59; 
  unsigned __int64 v60; 
  float v61; 
  float v62; 
  float v63; 
  float v64; 
  float v65; 
  float v66; 
  float v67; 
  float v68; 
  float *v69; 
  __int64 v70; 
  float v71; 
  float v72; 
  int v74; 
  __int64 v75; 
  int v76; 
  int v77; 
  int v78; 

  if ( !mat && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 943, ASSERT_TYPE_ASSERT, "( mat )", "null matrix pointer") )
    __debugbreak();
  if ( rows < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 944, ASSERT_TYPE_ASSERT, "( rows >= 1 )", "invalid number of equations") )
    __debugbreak();
  v4 = rows + 1;
  v5 = 0;
  if ( rows <= 0 )
    return 0xFFFFFFFFi64;
  v6 = 0;
  v76 = rows + 1;
  v7 = rows - 1;
  v77 = 0;
  v78 = rows - 1;
  v8 = rows + 1;
  while ( 1 )
  {
    v9 = v5 + 1;
    v75 = v6;
    v10 = v5;
    v74 = v5 + 1;
    v11 = v5 + 1;
    _XMM3 = LODWORD(mat[v6]) & (unsigned __int128)(unsigned int)_xmm;
    if ( v5 + 1 < rows )
    {
      if ( v7 >= 4 )
      {
        do
        {
          v13 = v11 + 1;
          v14 = v11;
          __asm { vcmpltss xmm0, xmm3, xmm1 }
          if ( COERCE_FLOAT(LODWORD(mat[v5 + v4 * v11]) & _xmm) <= *(float *)&_XMM3 )
            v14 = v10;
          v10 = v11 + 3;
          __asm
          {
            vblendvps xmm2, xmm3, xmm1, xmm0
            vcmpltss xmm0, xmm2, xmm1
          }
          if ( COERCE_FLOAT(LODWORD(mat[v5 + v4 * v13]) & _xmm) <= *(float *)&_XMM2 )
            v13 = v14;
          v18 = v11 + 2;
          __asm
          {
            vblendvps xmm3, xmm2, xmm1, xmm0
            vcmpltss xmm0, xmm3, xmm1
          }
          if ( COERCE_FLOAT(LODWORD(mat[v5 + v4 * (v11 + 2)]) & _xmm) <= *(float *)&_XMM3 )
            v18 = v13;
          __asm
          {
            vblendvps xmm2, xmm3, xmm1, xmm0
            vcmpltss xmm0, xmm2, xmm1
          }
          if ( COERCE_FLOAT(LODWORD(mat[v5 + v4 * v10]) & _xmm) <= *(float *)&_XMM2 )
            v10 = v18;
          v11 += 4;
          __asm { vblendvps xmm0, xmm2, xmm1, xmm0 }
          _XMM3 = (unsigned int)_XMM0;
        }
        while ( v11 < rows - 3 );
      }
      for ( ; v11 < rows; _XMM3 = (unsigned int)_XMM0 )
      {
        __asm { vcmpltss xmm0, xmm3, xmm1 }
        v25 = v11;
        if ( COERCE_FLOAT(LODWORD(mat[v5 + v4 * v11]) & _xmm) <= *(float *)&_XMM3 )
          v25 = v10;
        ++v11;
        v10 = v25;
        __asm { vblendvps xmm0, xmm3, xmm1, xmm0 }
      }
    }
    if ( *(float *)&_XMM3 < 0.0000099999997 )
      break;
    if ( v10 != v5 )
    {
      if ( !mat && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 921, ASSERT_TYPE_ASSERT, "( mat )", "null matrix pointer") )
        __debugbreak();
      if ( (v10 >= rows || v10 < 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 923, ASSERT_TYPE_ASSERT, "( rowA < rows && rowA >= 0 )", "invalid rowA index") )
        __debugbreak();
      if ( (v5 >= rows || v5 < 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 924, ASSERT_TYPE_ASSERT, "( rowB < rows && rowB >= 0 )", "invalid rowB index") )
        __debugbreak();
      v27 = 0i64;
      if ( v4 >= 4i64 )
      {
        v28 = v5 * v4;
        v29 = &mat[v28 + 1];
        v30 = v10 * v4 - v28;
        v31 = ((unsigned __int64)(v4 - 4i64) >> 2) + 1;
        v27 = 4 * v31;
        do
        {
          v32 = v29[v30 - 1];
          v29[v30 - 1] = *(v29 - 1);
          v33 = *v29;
          *(v29 - 1) = v32;
          v34 = v29[v30];
          v29[v30] = v33;
          v35 = v29[1];
          *v29 = v34;
          v36 = v29[v30 + 1];
          v29[v30 + 1] = v35;
          v37 = v29[2];
          v29[1] = v36;
          v38 = v29[v30 + 2];
          v29[v30 + 2] = v37;
          v29[2] = v38;
          v29 += 4;
          --v31;
        }
        while ( v31 );
      }
      if ( v27 < v4 )
      {
        v39 = v5 * v4;
        v40 = &mat[v39 + v27];
        v41 = v10 * v4 - v39;
        v42 = v4 - v27;
        do
        {
          v43 = v40[v41];
          v40[v41] = *v40;
          *v40++ = v43;
          --v42;
        }
        while ( v42 );
      }
      v8 = v76;
    }
    if ( v9 < rows )
    {
      v44 = v8;
      v45 = v4;
      v46 = v5 + 1i64;
      v47 = 4i64 * v4;
      v48 = v76 - v4;
      v49 = -4i64 * v4;
      v50 = v5;
      v51 = &mat[v8 + v5];
      v52 = v48 - v44;
      v53 = &mat[v46 + 1 + v44];
      v54 = (unsigned int)(rows - v9);
      v55 = v75;
      v56 = 4 * v52 + 4;
      do
      {
        v57 = v46;
        v58 = *v51 / mat[v55];
        *v51 = 0.0;
        if ( v46 < v45 )
        {
          if ( v45 - v46 >= 4 )
          {
            v59 = v53;
            v60 = ((unsigned __int64)(v45 - v50 - 5) >> 2) + 1;
            v57 = v46 + 4 * v60;
            do
            {
              v61 = v58 * *(float *)((char *)v59 + v56 - 8);
              v62 = *(v59 - 1);
              v59 += 4;
              v63 = v62 - v61;
              v64 = *(v59 - 4);
              *(v59 - 5) = v63;
              v65 = v64 - (float)(v58 * *(float *)((char *)v59 + v56 - 20));
              v66 = *(v59 - 3);
              *(v59 - 4) = v65;
              v67 = v66 - (float)(v58 * *(float *)((char *)v59 + v56 - 16));
              v68 = *(v59 - 2);
              *(v59 - 3) = v67;
              *(v59 - 2) = v68 - (float)(v58 * *(float *)((char *)v59 + v56 - 12));
              --v60;
            }
            while ( v60 );
          }
          if ( v57 < v45 )
          {
            v69 = &mat[v44 + v57];
            v70 = v45 - v57;
            do
            {
              v71 = v58 * *(float *)((char *)v69 + v56 - 4);
              v72 = *v69++;
              *(v69 - 1) = v72 - v71;
              --v70;
            }
            while ( v70 );
          }
          v55 = v75;
        }
        v51 = (float *)((char *)v51 + v47);
        v44 += v45;
        v53 = (float *)((char *)v53 + v47);
        v56 += v49;
        --v54;
      }
      while ( v54 );
      v9 = v74;
      v4 = rows + 1;
      v8 = v76;
    }
    v6 = v4 + 1 + v77;
    v8 += v4;
    v5 = v9;
    v7 = v78 - 1;
    v77 = v6;
    --v78;
    v76 = v8;
    if ( v9 >= rows )
      return 0xFFFFFFFFi64;
  }
  return (unsigned int)v5;
}

