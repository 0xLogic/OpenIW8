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
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  unsigned int v11; 
  vec3_t *v12; 
  __int64 v14; 
  const vec3_t *v15; 
  signed __int64 v16; 
  size_t v17; 
  int v18; 
  int v19; 
  BSplineBuildCache *v20; 
  int v21; 
  __int64 v28; 
  __int64 v29; 
  __int64 v34; 
  __int64 v38; 
  __int64 v39; 
  __int64 v40; 
  __int64 v41; 
  __int64 v42; 
  __int64 v43; 
  __int64 v44; 
  __int64 v45; 
  size_t v46; 
  int v49; 
  signed __int64 v50; 
  int v51; 
  int v52; 

  v5 = numPoints - 2;
  bcache->relaxedCubicSplineSolution[0] = *points;
  v6 = numPoints - 3;
  v7 = numPoints - 2 + 1;
  v8 = numPoints - 1;
  _R15 = bcache;
  v11 = 0;
  v44 = numPoints;
  __asm { vmovaps [rsp+0D8h+var_58], xmm6 }
  v12 = &bcache->relaxedCubicSplineSolution[1];
  __asm
  {
    vmovaps [rsp+0D8h+var_68], xmm7
    vmovss  xmm7, cs:__real@40c00000
  }
  v14 = 3i64 * numPoints + 207;
  v52 = numPoints - 2;
  v51 = numPoints - 3;
  v15 = &points[numPoints - 1];
  v49 = numPoints - 1;
  bcache->relaxedCubicSplineMatrix[v14] = v15->v[0];
  bcache->relaxedCubicSplineMatrix[v14 + 1] = v15->v[1];
  bcache->relaxedCubicSplineMatrix[v14 + 2] = v15->v[2];
  v16 = (char *)points - (char *)bcache;
  v17 = 4 * v5 * (__int64)v5;
  v46 = v17;
  v50 = v16;
  v45 = numPoints + v7 * (numPoints - 3);
  do
  {
    memset_0(_R15, 0, v17);
    v18 = 0;
    if ( v5 > 0 )
    {
      v19 = v7;
      v20 = _R15;
      do
      {
        v21 = v18 + 1;
        v20->relaxedCubicSplineMatrix[0] = 4.0;
        if ( v18 + 1 < v5 )
        {
          v20->relaxedCubicSplineMatrix[1] = 1.0;
          _R15->relaxedCubicSplineMatrix[v19 + v18] = 1.0;
        }
        v19 += v7;
        v20 = (BSplineBuildCache *)((char *)v20 + 4 * v7 + 4);
        ++v18;
      }
      while ( v21 < v5 );
    }
    if ( v11 >= 3 )
    {
      LODWORD(v41) = 3;
      LODWORD(v38) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v38, v41) )
        __debugbreak();
      LODWORD(v42) = 3;
      LODWORD(v39) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v39, v42) )
        __debugbreak();
    }
    __asm { vmulss  xmm1, xmm7, dword ptr [rax+r13-354h] }
    _RAX = v44;
    __asm
    {
      vsubss  xmm2, xmm1, dword ptr [rdi+r13-354h]
      vmovss  dword ptr [r15+rax*4-8], xmm2
    }
    if ( v11 >= 3 )
    {
      LODWORD(v41) = 3;
      LODWORD(v38) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v38, v41) )
        __debugbreak();
      LODWORD(v43) = 3;
      LODWORD(v40) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v40, v43) )
        __debugbreak();
    }
    __asm
    {
      vmulss  xmm1, xmm7, dword ptr [rax+r13-354h]
      vsubss  xmm2, xmm1, dword ptr [rax+r13-354h]
    }
    _RAX = v45;
    __asm { vmovss  dword ptr [r15+rax*4-8], xmm2 }
    if ( v6 > 1 )
    {
      v28 = (__int64)&v12[-69] + v16;
      v29 = (unsigned int)(v51 - 1);
      _RSI = (char *)&_R15->relaxedCubicSplineMatrix[v7 + v5];
      do
      {
        if ( v11 >= 3 )
        {
          LODWORD(v41) = 3;
          LODWORD(v38) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v38, v41) )
            __debugbreak();
        }
        __asm
        {
          vmulss  xmm1, xmm7, dword ptr [rdi]
          vmovss  dword ptr [rsi], xmm1
        }
        _RSI += 4 * v5 + 4;
        v28 += 12i64;
        --v29;
      }
      while ( v29 );
      v5 = v52;
      v8 = v49;
      v6 = v51;
    }
    _RDI = _R15->relaxedCubicSplineCoordinateSolution;
    if ( GaussElim_Forward(_R15->relaxedCubicSplineMatrix, v5) == -1 )
      GaussElim_Backward(_R15->relaxedCubicSplineMatrix, v5, _R15->relaxedCubicSplineCoordinateSolution);
    if ( v8 > 1 )
    {
      _RSI = v12;
      v34 = (unsigned int)(v8 - 1);
      do
      {
        __asm { vmovss  xmm6, dword ptr [rdi] }
        if ( v11 >= 3 )
        {
          LODWORD(v41) = 3;
          LODWORD(v38) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v38, v41) )
            __debugbreak();
        }
        __asm { vmovss  dword ptr [rsi], xmm6 }
        ++_RSI;
        ++_RDI;
        --v34;
      }
      while ( v34 );
      v8 = v49;
      v6 = v51;
    }
    v16 = v50;
    v7 = v5 + 1;
    v17 = v46;
    ++v11;
    v12 = (vec3_t *)((char *)v12 + 4);
  }
  while ( (int)v11 < 3 );
  __asm
  {
    vmovaps xmm6, [rsp+0D8h+var_58]
    vmovaps xmm7, [rsp+0D8h+var_68]
  }
}

/*
==============
BG_BSpline_BuildPassThru_Looped
==============
*/
void BG_BSpline_BuildPassThru_Looped(BSplineBuildCache *bcache, const vec3_t *points, int numPoints)
{
  __int64 v5; 
  int v7; 
  size_t v9; 
  int v10; 
  const vec3_t *v11; 
  __int64 v12; 
  __int64 v13; 
  int v14; 
  int v15; 
  BSplineBuildCache *v16; 
  int v17; 
  __int64 v18; 
  int v19; 
  __int64 v23; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  signed __int64 v33; 
  const vec3_t *v34; 
  size_t v36; 

  v34 = points;
  v5 = numPoints;
  _R14 = bcache;
  __asm
  {
    vmovaps [rsp+0B8h+var_58], xmm6
    vmovaps [rsp+0B8h+var_68], xmm7
  }
  v7 = 0;
  __asm { vmovss  xmm7, cs:__real@40c00000 }
  v9 = 4 * v5 * v5;
  v10 = numPoints + 1;
  v11 = points;
  v12 = numPoints;
  v36 = v9;
  v13 = (numPoints + 1) * (numPoints - 1);
  v30 = v13;
  v33 = (char *)_R14 - (char *)points;
  do
  {
    memset_0(_R14, 0, v9);
    v14 = 0;
    if ( (int)v5 > 0 )
    {
      v15 = v10;
      v16 = _R14;
      do
      {
        v17 = v14 + 1;
        v16->relaxedCubicSplineMatrix[0] = 4.0;
        if ( v14 + 1 < (int)v5 )
        {
          v16->relaxedCubicSplineMatrix[1] = 1.0;
          _R14->relaxedCubicSplineMatrix[v15 + v14] = 1.0;
        }
        v15 += v10;
        v16 = (BSplineBuildCache *)((char *)v16 + 4 * v10 + 4);
        ++v14;
      }
      while ( v17 < (int)v5 );
    }
    v18 = 0i64;
    _R14->relaxedCubicSplineMatrix[v12 - 1] = 1.0;
    _R14->relaxedCubicSplineMatrix[v13] = 1.0;
    if ( v12 > 0 )
    {
      v19 = v5;
      do
      {
        if ( (unsigned int)v7 >= 3 )
        {
          LODWORD(v29) = 3;
          LODWORD(v28) = v7;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v28, v29) )
            __debugbreak();
        }
        __asm { vmulss  xmm1, xmm7, dword ptr [rdi] }
        _RAX = v19;
        ++v18;
        v19 += v10;
        ++v11;
        __asm { vmovss  dword ptr [r14+rax*4], xmm1 }
      }
      while ( v18 < v12 );
      LODWORD(v5) = numPoints;
      v11 = v34;
    }
    _RBX = _R14->relaxedCubicSplineCoordinateSolution;
    if ( GaussElim_Forward(_R14->relaxedCubicSplineMatrix, v5) == -1 )
      GaussElim_Backward(_R14->relaxedCubicSplineMatrix, v5, _R14->relaxedCubicSplineCoordinateSolution);
    if ( v12 > 0 )
    {
      v23 = v12;
      _RDI = (__int64)&v11[70] + v33;
      do
      {
        __asm { vmovss  xmm6, dword ptr [rbx] }
        if ( (unsigned int)v7 >= 3 )
        {
          LODWORD(v29) = 3;
          LODWORD(v28) = v7;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v28, v29) )
            __debugbreak();
        }
        __asm { vmovss  dword ptr [rdi], xmm6 }
        _RDI += 12i64;
        ++_RBX;
        --v23;
      }
      while ( v23 );
      v11 = v34;
      v10 = v5 + 1;
    }
    v9 = v36;
    v11 = (const vec3_t *)((char *)v11 + 4);
    v13 = v30;
    ++v7;
    v34 = v11;
  }
  while ( v7 < 3 );
  __asm
  {
    vmovaps xmm6, [rsp+0B8h+var_58]
    vmovaps xmm7, [rsp+0B8h+var_68]
  }
}

/*
==============
BG_BSpline_Build_Internal
==============
*/
void BG_BSpline_Build_Internal(BSplineBuildCache *bcache, const vec3_t *points, unsigned int numPoints, bool passThruPoints, bool looped, BSplineRelaxedCBezier *outSpline)
{
  unsigned int v17; 
  __int64 v21; 
  unsigned int ncurves; 
  __int64 v62; 
  int v67; 
  bool v72; 
  bool v73; 
  float fmt; 
  float fmta; 
  vec3_t *outPointOnSpline; 
  __int64 v98; 
  unsigned int v99; 
  vec3_t v100; 
  vec3_t v101; 

  _RDI = outSpline;
  for ( _RBX = points; ; _RBX = bcache->relaxedCubicSplineSolution )
  {
    if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 646, ASSERT_TYPE_ASSERT, "( points )", "Array of points is null") )
      __debugbreak();
    if ( numPoints <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 647, ASSERT_TYPE_ASSERT, "( numPoints > 1 )", "We need at least two points to define a B-Spline") )
      __debugbreak();
    v17 = numPoints - 1;
    if ( numPoints - 1 >= 0x10 )
    {
      LODWORD(v98) = 16;
      LODWORD(outPointOnSpline) = numPoints - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 648, ASSERT_TYPE_ASSERT, "(unsigned)( numPoints - 1 ) < (unsigned)( 16 )", "numPoints - 1 doesn't index MAX_BSPLINE_NUM_POINTS\n\t%i not in [0, %i)", outPointOnSpline, v98) )
        __debugbreak();
    }
    if ( !outSpline && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 649, ASSERT_TYPE_ASSERT, "( outSpline )", "B-Spline object is null") )
      __debugbreak();
    outSpline->ncurves = v17;
    if ( !passThruPoints )
      break;
    if ( looped )
      BG_BSpline_BuildPassThru_Looped(bcache, _RBX, numPoints);
    else
      BG_BSpline_BuildPassThru(bcache, _RBX, numPoints);
    passThruPoints = 0;
  }
  __asm
  {
    vmovss  xmm1, dword ptr [rbx]
    vmovss  xmm2, dword ptr [rbx+4]
    vmovss  xmm0, dword ptr [rbx+8]
  }
  v21 = 0i64;
  ncurves = v17 + looped;
  __asm { vmovaps [rsp+118h+var_48], xmm6 }
  outSpline->ncurves = ncurves;
  __asm { vmovaps [rsp+118h+var_58], xmm7 }
  if ( ncurves )
  {
    __asm
    {
      vmovss  xmm7, cs:__real@3eaaaaab
      vmovss  xmm6, cs:__real@3f2aaaab
      vmovss  xmm5, cs:__real@3e2aaaab
    }
    do
    {
      _R10 = 6 * v21;
      _RDX = 3i64 * (((int)v21 + 1) % numPoints);
      __asm
      {
        vmovss  dword ptr [rdi+r10*8+0Ch], xmm0
        vmovss  dword ptr [rdi+r10*8+4], xmm1
        vmovss  dword ptr [rdi+r10*8+8], xmm2
        vmulss  xmm3, xmm7, dword ptr [rbx+rdx*4]
        vmulss  xmm2, xmm6, dword ptr [rbx+r11*4]
        vaddss  xmm0, xmm3, xmm2
        vmovss  dword ptr [rdi+r10*8+10h], xmm0
        vmulss  xmm3, xmm7, dword ptr [rbx+rdx*4+4]
        vmulss  xmm2, xmm6, dword ptr [rbx+r11*4+4]
        vaddss  xmm0, xmm3, xmm2
        vmovss  dword ptr [rdi+r10*8+14h], xmm0
        vmulss  xmm3, xmm7, dword ptr [rbx+rdx*4+8]
        vmulss  xmm2, xmm6, dword ptr [rbx+r11*4+8]
        vaddss  xmm0, xmm3, xmm2
        vmovss  dword ptr [rdi+r10*8+18h], xmm0
        vmulss  xmm3, xmm6, dword ptr [rbx+rdx*4]
        vmulss  xmm2, xmm7, dword ptr [rbx+r11*4]
        vaddss  xmm1, xmm3, xmm2
        vmovss  dword ptr [rdi+r10*8+1Ch], xmm1
        vmulss  xmm3, xmm6, dword ptr [rbx+rdx*4+4]
        vmulss  xmm2, xmm7, dword ptr [rbx+r11*4+4]
        vaddss  xmm0, xmm3, xmm2
        vmovss  dword ptr [rdi+r10*8+20h], xmm0
        vmulss  xmm3, xmm6, dword ptr [rbx+rdx*4+8]
        vmulss  xmm2, xmm7, dword ptr [rbx+r11*4+8]
        vaddss  xmm1, xmm3, xmm2
        vmovss  dword ptr [rdi+r10*8+24h], xmm1
      }
      if ( (unsigned int)v21 < outSpline->ncurves - 1 || looped )
      {
        __asm
        {
          vmulss  xmm3, xmm6, dword ptr [rbx+rdx*4]
          vmulss  xmm2, xmm5, dword ptr [rbx+r11*4]
          vaddss  xmm4, xmm3, xmm2
        }
        _R8 = &outSpline->bcurves[v21].p3;
        __asm
        {
          vmovss  dword ptr [r8], xmm4
          vmulss  xmm3, xmm6, dword ptr [rbx+rdx*4+4]
          vmulss  xmm2, xmm5, dword ptr [rbx+r11*4+4]
          vaddss  xmm0, xmm3, xmm2
          vmovss  dword ptr [r8+4], xmm0
          vmulss  xmm3, xmm6, dword ptr [rbx+rdx*4+8]
          vmulss  xmm2, xmm5, dword ptr [rbx+r11*4+8]
          vaddss  xmm1, xmm3, xmm2
          vmovss  dword ptr [r8+8], xmm1
          vmulss  xmm1, xmm5, dword ptr [rbx+rax*4]
          vaddss  xmm2, xmm1, xmm4
          vmovss  dword ptr [r8], xmm2
          vmulss  xmm1, xmm5, dword ptr [rbx+rax*4+4]
          vaddss  xmm2, xmm1, dword ptr [rdi+r10*8+2Ch]
          vmovss  dword ptr [r8+4], xmm2
          vmulss  xmm1, xmm5, dword ptr [rbx+rax*4+8]
          vaddss  xmm0, xmm1, dword ptr [rdi+r10*8+30h]
        }
      }
      else
      {
        _R8 = &outSpline->bcurves[v21].p3;
        _R8->v[0] = _RBX[((int)v21 + 1) % numPoints].v[0];
        _R8->v[1] = _RBX[((int)v21 + 1) % numPoints].v[1];
        __asm { vmovss  xmm0, dword ptr [rbx+rdx*4+8] }
      }
      _RAX = _R8;
      v21 = (unsigned int)(v21 + 1);
      __asm { vmovss  dword ptr [rax+8], xmm0 }
      ncurves = outSpline->ncurves;
      __asm
      {
        vmovss  xmm1, dword ptr [r8]
        vmovss  xmm2, dword ptr [r8+4]
      }
    }
    while ( (unsigned int)v21 < outSpline->ncurves );
  }
  if ( looped )
  {
    *(_QWORD *)outSpline->bcurves[0].p0.v = *(_QWORD *)outSpline->bcurves[ncurves - 1].p3.v;
    outSpline->bcurves[0].p0.v[2] = outSpline->bcurves[ncurves - 1].p3.v[2];
    ncurves = outSpline->ncurves;
  }
  v62 = 0i64;
  outSpline->totalLength = 0.0;
  v99 = 0;
  if ( ncurves )
  {
    __asm
    {
      vmovaps [rsp+118h+var_68], xmm8
      vmovaps [rsp+118h+var_78], xmm9
      vmovss  xmm9, cs:__real@3f800000
      vmovaps [rsp+118h+var_88], xmm10
      vmovss  xmm10, cs:__real@3c800000
      vmovaps [rsp+118h+var_98], xmm11
      vmovss  xmm11, cs:__real@3a83126f
      vxorps  xmm8, xmm8, xmm8
    }
    do
    {
      if ( (BSplineRelaxedCBezier *)((char *)_RDI + 48 * v62) == (BSplineRelaxedCBezier *)-4i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 577, ASSERT_TYPE_ASSERT, "(bcurve)", (const char *)&queryFormat, "bcurve") )
        __debugbreak();
      __asm { vmovss  dword ptr [rsp+118h+fmt], xmm8 }
      BG_SplineTracer_GetPointOnSpline(&_RDI->bcurves[v62].p0, &_RDI->bcurves[v62].p1, &_RDI->bcurves[v62].p2, &_RDI->bcurves[v62].p3, fmt, &v101);
      v67 = 0;
      __asm { vmovaps xmm7, xmm8 }
      do
      {
        ++v67;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, ebx
          vmulss  xmm6, xmm0, xmm10
        }
        v72 = &_RDI->bcurves[v62] == NULL;
        if ( (BSplineRelaxedCBezier *)((char *)_RDI + 48 * v62) == (BSplineRelaxedCBezier *)-4i64 )
        {
          v73 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 577, ASSERT_TYPE_ASSERT, "(bcurve)", (const char *)&queryFormat, "bcurve");
          v72 = !v73;
          if ( v73 )
            __debugbreak();
        }
        __asm
        {
          vcomiss xmm6, xmm8
          vcomiss xmm6, xmm9
        }
        if ( !v72 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 578, ASSERT_TYPE_ASSERT, "(t >= 0.0f && t <= 1.0f)", (const char *)&queryFormat, "t >= 0.0f && t <= 1.0f") )
          __debugbreak();
        __asm { vmovss  dword ptr [rsp+118h+fmt], xmm6 }
        BG_SplineTracer_GetPointOnSpline(&_RDI->bcurves[v62].p0, &_RDI->bcurves[v62].p1, &_RDI->bcurves[v62].p2, &_RDI->bcurves[v62].p3, fmta, &v100);
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+118h+var_B8]
          vmovss  xmm6, dword ptr [rsp+118h+var_C8]
          vmovss  xmm5, dword ptr [rsp+118h+var_C8+4]
          vmovss  xmm1, dword ptr [rsp+118h+var_B8+4]
          vsubss  xmm3, xmm0, xmm6
          vmovss  xmm0, dword ptr [rsp+118h+var_B8+8]
        }
        v101.v[2] = v100.v[2];
        __asm
        {
          vsubss  xmm4, xmm0, dword ptr [rsp+118h+var_C8+8]
          vsubss  xmm2, xmm1, xmm5
          vmulss  xmm2, xmm2, xmm2
          vmulss  xmm1, xmm3, xmm3
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm3, xmm2, xmm1
          vaddss  xmm2, xmm3, xmm0
          vunpcklps xmm0, xmm6, xmm5
          vsqrtss xmm1, xmm2, xmm2
          vaddss  xmm7, xmm7, xmm1
          vmovsd  qword ptr [rsp+118h+var_C8], xmm0
          vmovsd  qword ptr [rsp+118h+var_B8], xmm0
        }
      }
      while ( v67 < 64 );
      __asm { vcomiss xmm7, xmm11 }
      _RDI = outSpline;
      _RBP = v99;
      __asm
      {
        vmovss  dword ptr [rdi+rbp*4+2D4h], xmm7
        vaddss  xmm0, xmm7, dword ptr [rdi+310h]
      }
      v62 = v99 + 1;
      __asm { vmovss  dword ptr [rdi+310h], xmm0 }
      v99 = v62;
    }
    while ( (unsigned int)v62 < outSpline->ncurves );
    __asm
    {
      vmovaps xmm11, [rsp+118h+var_98]
      vmovaps xmm10, [rsp+118h+var_88]
      vmovaps xmm9, [rsp+118h+var_78]
      vmovaps xmm8, [rsp+118h+var_68]
    }
  }
  __asm
  {
    vmovaps xmm7, [rsp+118h+var_58]
    vmovaps xmm6, [rsp+118h+var_48]
  }
  *(_QWORD *)&_RDI->lastEvT.y = 0i64;
  _RDI->lastEvT.v[0] = -1.0;
}

/*
==============
BG_BSpline_CatmullRom_Build
==============
*/

void __fastcall BG_BSpline_CatmullRom_Build(const vec4_t *pointTimes, unsigned int numPoints, double tau, double alpha, unsigned int calcLength, BSplineCatmullRom::Parametrization param, bool looped, BSplineCatmullRom *outSpline)
{
  unsigned int v21; 
  bool v24; 
  bool v25; 
  BSplineCatmullRom::Parametrization v28; 
  unsigned int v38; 
  unsigned int v39; 
  unsigned int v41; 
  bool v48; 
  __int64 v56; 
  __int64 v57; 
  bool v59; 
  int *v64; 
  unsigned int v108; 
  unsigned int v146; 
  unsigned int v173; 
  unsigned int v179; 
  unsigned int v183; 
  float *optOutNodeT; 
  unsigned int v202; 
  __int64 v207; 
  __int64 v208; 
  __int64 v209; 
  vec3_t outPos; 
  int v214[4]; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-38h], xmm6
    vmovaps xmmword ptr [r11-68h], xmm9
  }
  _R14 = outSpline;
  _RDI = pointTimes;
  v21 = numPoints;
  __asm
  {
    vmovaps xmmword ptr [r11-48h], xmm7
    vmovaps xmmword ptr [r11-58h], xmm8
    vmovaps xmmword ptr [r11-98h], xmm12
    vmovaps xmmword ptr [r11-0A8h], xmm13
  }
  *(_QWORD *)outPos.v = outSpline;
  __asm
  {
    vmovaps xmm13, xmm2
    vmovss  dword ptr [rsp+170h+var_128], xmm3
    vmovss  [rsp+170h+var_12C], xmm2
    vmovaps xmm12, xmm3
  }
  if ( !pointTimes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 1115, ASSERT_TYPE_ASSERT, "( pointTimes )", "Invalid pointTimes ptr") )
    __debugbreak();
  if ( v21 < 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 1116, ASSERT_TYPE_ASSERT, "( numPoints >= 4 )", "Need at least 4 points, %d passed", v21) )
    __debugbreak();
  v24 = v21 <= 0x20;
  if ( v21 >= 0x20 )
  {
    LODWORD(optOutNodeT) = 32;
    v25 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 1117, ASSERT_TYPE_ASSERT, "( numPoints < 32 )", "Maximum %d allowed, %d passed", optOutNodeT, v21);
    v24 = !v25;
    if ( v25 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm9, xmm9, xmm9
    vcomiss xmm13, xmm9
    vmovaps [rsp+170h+var_B8+8], xmm14
    vmovss  xmm14, cs:__real@3f800000
  }
  if ( !v24 )
    __asm { vcomiss xmm13, xmm14 }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 1118, ASSERT_TYPE_ASSERT, "( tau > 0.0f && tau <= 1.0f )", "Tension (tau) must be (0..1]") )
    __debugbreak();
  if ( !outSpline && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 1119, ASSERT_TYPE_ASSERT, "( outSpline )", "Invalid outSpline ptr") )
    __debugbreak();
  v28 = param;
  if ( param == CENTRIPETAL )
  {
    __asm
    {
      vcomiss xmm12, xmm9
      vcomiss xmm12, xmm14
    }
  }
  __asm
  {
    vmovss  xmm3, dword ptr [rdi+4]
    vsubss  xmm2, xmm3, dword ptr [rdi+14h]
    vmovss  xmm4, dword ptr [rdi+8]
    vmovss  xmm1, dword ptr [rdi]
    vsubss  xmm0, xmm1, dword ptr [rdi+10h]
    vaddss  xmm1, xmm0, xmm1
    vaddss  xmm0, xmm2, xmm3
    vmovss  [rbp+70h+var_F0], xmm1
    vsubss  xmm1, xmm4, dword ptr [rdi+18h]
    vaddss  xmm2, xmm1, xmm4
  }
  v38 = v21 - 1;
  __asm { vmovss  [rbp+70h+var_EC], xmm0 }
  v39 = v21 - 2;
  _RAX = 2i64 * (v21 - 1);
  v41 = 0;
  v202 = 0;
  __asm
  {
    vmovss  [rbp+70h+var_E8], xmm2
    vmovss  xmm0, dword ptr [rdi+rax*8]
    vsubss  xmm6, xmm0, dword ptr [rcx+rdi]
    vmovss  xmm1, dword ptr [rdi+rax*8+4]
    vsubss  xmm7, xmm1, dword ptr [rcx+rdi+4]
    vmovss  xmm2, dword ptr [rdi+rax*8+8]
    vsubss  xmm8, xmm2, dword ptr [rcx+rdi+8]
  }
  v48 = looped;
  outSpline->parametrization = param;
  outSpline->numPoints = v21;
  outSpline->totalLength = -1.0;
  outSpline->totalDuration = 0.0;
  outSpline->builtLooped = looped;
  __asm
  {
    vaddss  xmm3, xmm6, xmm0
    vaddss  xmm4, xmm7, xmm1
    vaddss  xmm0, xmm3, xmm6
    vaddss  xmm5, xmm8, xmm2
    vaddss  xmm1, xmm4, xmm7
    vmovss  [rbp+70h+var_E0], xmm0
    vaddss  xmm0, xmm5, xmm8
    vmovss  [rbp+70h+var_DC], xmm1
    vmovss  [rbp+70h+var_D8], xmm0
    vmovss  dword ptr [rsp+170h+var_110], xmm3
    vmovss  dword ptr [rsp+170h+var_110+4], xmm4
    vmovss  dword ptr [rsp+170h+var_108], xmm5
    vmovss  dword ptr [r14+688h], xmm13
    vxorps  xmm1, xmm1, xmm1
  }
  if ( v21 )
  {
    v56 = 0i64;
    __asm
    {
      vmovaps [rsp+170h+var_78+8], xmm10
      vmovaps [rsp+170h+var_88+8], xmm11
    }
    v207 = 0i64;
    __asm { vmovaps [rsp+170h+var_C8+8], xmm15 }
    while ( 1 )
    {
      v57 = 52 * v56;
      _RAX = v56;
      v59 = __CFADD__(_R14, v57);
      _RSI = (char *)_R14 + v57;
      __asm { vcomiss xmm9, dword ptr [rdi+rax*8+0Ch] }
      _R15 = &_RDI[_RAX];
      if ( !v59 && (v41 != v38 || v48) )
      {
        LODWORD(optOutNodeT) = v41;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 1156, ASSERT_TYPE_ASSERT, "( pointTimes[cndx].w > 0.0f || (cndx == (numPoints-1) && !looped) )", "Point-curve %d has an invalid duration. Must be > 0", optOutNodeT) )
          __debugbreak();
        v28 = param;
        v48 = looped;
        v39 = v21 - 2;
        v38 = v21 - 1;
      }
      if ( v48 || v41 != v38 )
        _R14 = (__int64 *)&_RDI[(v41 + 1) % v21];
      else
        _R14 = &v208;
      _R13 = (__int64 *)&_RDI[(v41 + 2) % v21];
      if ( !v48 )
      {
        if ( v41 == v39 )
        {
          _R13 = &v208;
        }
        else
        {
          v64 = v214;
          if ( v41 != v38 )
            v64 = (int *)_R13;
          _R13 = (__int64 *)v64;
        }
      }
      if ( v28 == UNIFORM )
        break;
      if ( v28 == CENTRIPETAL )
      {
        __asm
        {
          vmovss  xmm7, dword ptr [r15+4]
          vsubss  xmm0, xmm7, dword ptr [r12+4]
          vmovss  xmm6, dword ptr [r15]
          vsubss  xmm2, xmm6, dword ptr [r12]
          vmovss  xmm8, dword ptr [r15+8]
          vsubss  xmm3, xmm8, dword ptr [r12+8]
          vmulss  xmm1, xmm0, xmm0
          vmulss  xmm0, xmm2, xmm2
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm2, xmm2, xmm1
          vsqrtss xmm0, xmm2, xmm2; X
          vmovaps xmm1, xmm12; Y
        }
        *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
        __asm
        {
          vmovss  xmm9, dword ptr [r14]
          vsubss  xmm3, xmm9, xmm6
          vmovss  xmm6, dword ptr [r14+4]
          vsubss  xmm1, xmm6, xmm7
          vmovss  xmm7, dword ptr [r14+8]
          vmulss  xmm2, xmm1, xmm1
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm3, xmm2, xmm1
          vsubss  xmm4, xmm7, xmm8
          vmulss  xmm2, xmm4, xmm4
          vaddss  xmm3, xmm3, xmm2
          vmovaps xmm10, xmm0
          vsqrtss xmm0, xmm3, xmm3; X
          vmovaps xmm1, xmm12; Y
        }
        *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
        __asm
        {
          vmovss  xmm1, dword ptr [r13+0]
          vmovss  xmm2, dword ptr [r13+4]
          vsubss  xmm4, xmm1, xmm9
          vmovss  xmm1, dword ptr [r13+8]
          vsubss  xmm3, xmm2, xmm6
          vsubss  xmm5, xmm1, xmm7
          vmulss  xmm3, xmm3, xmm3
          vmulss  xmm1, xmm5, xmm5
          vmulss  xmm2, xmm4, xmm4
          vaddss  xmm4, xmm3, xmm2
          vaddss  xmm3, xmm4, xmm1
          vmovaps xmm11, xmm0
          vsqrtss xmm0, xmm3, xmm3; X
          vmovaps xmm1, xmm12; Y
        }
        *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
        __asm
        {
          vmovaps xmm12, xmm0
          vmovss  xmm0, cs:__real@3f800000
        }
        v108 = 0;
        __asm
        {
          vdivss  xmm14, xmm14, xmm10
          vaddss  xmm15, xmm11, xmm10
          vsubss  xmm10, xmm0, xmm13
          vaddss  xmm13, xmm12, xmm11
        }
        do
        {
          _RDI = (int)v108;
          __asm
          {
            vmovss  xmm0, dword ptr [r14+rdi*4]
            vsubss  xmm9, xmm0, dword ptr [r15+rdi*4]
            vmovss  xmm0, dword ptr [r15+rdi*4]
            vsubss  xmm1, xmm0, dword ptr [r12+rdi*4]
            vmovss  xmm2, dword ptr [r14+rdi*4]
            vsubss  xmm0, xmm2, dword ptr [r12+rdi*4]
            vmulss  xmm3, xmm1, xmm14
            vdivss  xmm1, xmm0, xmm15
            vsubss  xmm3, xmm3, xmm1
            vmulss  xmm2, xmm3, xmm11
            vaddss  xmm0, xmm2, xmm9
            vmulss  xmm8, xmm0, xmm10
            vmovss  xmm1, dword ptr [r13+rdi*4+0]
            vsubss  xmm0, xmm1, dword ptr [r14+rdi*4]
            vsubss  xmm1, xmm1, dword ptr [r15+rdi*4]
            vdivss  xmm2, xmm1, xmm13
            vdivss  xmm3, xmm0, xmm12
            vsubss  xmm0, xmm3, xmm2
            vmulss  xmm3, xmm0, xmm11
            vaddss  xmm1, xmm3, xmm9
            vmulss  xmm7, xmm1, xmm10
            vmovss  xmm6, dword ptr [r15+rdi*4]
            vmovss  dword ptr [rsi+rdi*4], xmm6
            vmovss  dword ptr [rsi+rdi*4+0Ch], xmm8
            vmovss  xmm6, cs:__real@40000000
            vmulss  xmm1, xmm9, cs:__real@40400000
            vmulss  xmm0, xmm8, xmm6
            vsubss  xmm1, xmm1, xmm0
            vsubss  xmm2, xmm1, xmm7
            vmovss  dword ptr [rsi+rdi*4+18h], xmm2
            vmulss  xmm0, xmm9, xmm6
            vsubss  xmm1, xmm8, xmm0
          }
          ++v108;
          __asm
          {
            vaddss  xmm2, xmm1, xmm7
            vmovss  dword ptr [rsi+rdi*4+24h], xmm2
          }
        }
        while ( v108 < 3 );
        __asm
        {
          vmovss  xmm13, [rsp+170h+var_12C]
          vmovss  xmm12, dword ptr [rsp+170h+var_128]
        }
LABEL_44:
        v28 = param;
        _RDI = pointTimes;
        v41 = v202;
        __asm { vxorps  xmm9, xmm9, xmm9 }
      }
      __asm { vmovss  xmm0, dword ptr [r15+0Ch] }
      v21 = numPoints;
      _R14 = *(BSplineCatmullRom **)outPos.v;
      ++v41;
      __asm { vmovss  xmm14, cs:__real@3f800000 }
      v48 = looped;
      v38 = numPoints - 1;
      __asm
      {
        vmovss  dword ptr [rsi+30h], xmm0
        vaddss  xmm1, xmm0, dword ptr [r14+690h]
      }
      v56 = v207 + 1;
      v202 = v41;
      ++v207;
      v39 = numPoints - 2;
      __asm { vmovss  dword ptr [r14+690h], xmm1 }
      if ( v41 >= numPoints )
      {
        __asm
        {
          vmovaps xmm15, [rsp+170h+var_C8+8]
          vmovaps xmm11, [rsp+170h+var_88+8]
          vmovaps xmm10, [rsp+170h+var_78+8]
        }
        goto LABEL_47;
      }
    }
    __asm
    {
      vmovss  xmm11, cs:__real@40000000
      vmovss  xmm1, cs:__real@40400000
    }
    v146 = 0;
    __asm
    {
      vmulss  xmm0, xmm13, xmm11
      vsubss  xmm10, xmm1, xmm0
      vsubss  xmm9, xmm13, xmm1
      vsubss  xmm7, xmm13, xmm11
      vsubss  xmm8, xmm11, xmm13
    }
    do
    {
      _RDI = (int)v146;
      __asm
      {
        vmovss  xmm6, dword ptr [r15+rdi*4]
        vmovss  dword ptr [rsi+rdi*4], xmm6
        vmovss  xmm0, dword ptr [r14+rdi*4]
        vsubss  xmm1, xmm0, dword ptr [r12+rdi*4]
        vmulss  xmm6, xmm1, xmm13
        vmovss  dword ptr [rsi+rdi*4+0Ch], xmm6
        vmulss  xmm1, xmm11, dword ptr [r12+rdi*4]
        vsubss  xmm2, xmm1, dword ptr [r13+rdi*4+0]
        vmulss  xmm0, xmm9, dword ptr [r15+rdi*4]
        vmulss  xmm1, xmm10, dword ptr [r14+rdi*4]
        vmulss  xmm3, xmm2, xmm13
        vaddss  xmm2, xmm3, xmm0
        vaddss  xmm6, xmm2, xmm1
        vmovss  dword ptr [rsi+rdi*4+18h], xmm6
        vmovss  xmm0, dword ptr [r13+rdi*4+0]
        vsubss  xmm1, xmm0, dword ptr [r12+rdi*4]
        vmulss  xmm0, xmm7, dword ptr [r14+rdi*4]
        vmulss  xmm2, xmm1, xmm13
        vmulss  xmm1, xmm8, dword ptr [r15+rdi*4]
        vaddss  xmm3, xmm2, xmm0
        vaddss  xmm6, xmm3, xmm1
      }
      ++v146;
      __asm { vmovss  dword ptr [rsi+rdi*4+24h], xmm6 }
    }
    while ( v146 < 3 );
    goto LABEL_44;
  }
LABEL_47:
  v173 = calcLength;
  __asm
  {
    vmovaps xmm14, [rsp+170h+var_B8+8]
    vmovaps xmm13, [rsp+170h+var_A8+8]
    vmovaps xmm12, [rsp+170h+var_98+8]
    vmovaps xmm8, [rsp+170h+var_58+8]
    vmovaps xmm7, [rsp+170h+var_48+8]
  }
  if ( calcLength )
  {
    _R14->totalLength = 0.0;
    v179 = 0;
    __asm { vxorps  xmm0, xmm0, xmm0 }
    if ( (int)calcLength < 2 )
      v173 = 2;
    __asm
    {
      vcvtsi2ss xmm0, xmm0, rax
      vdivss  xmm6, xmm1, xmm0
    }
    v183 = v173 + 1;
    do
    {
      __asm { vmovaps xmm1, xmm9; t }
      BG_BSpline_CatmullRom_Evaluate(_R14, *(float *)&_XMM1, &outPos, NULL, NULL, NULL);
      if ( v179 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+170h+outPos]
          vsubss  xmm3, xmm0, dword ptr [rsp+170h+var_110]
          vmovss  xmm1, dword ptr [rsp+170h+outPos+4]
          vsubss  xmm2, xmm1, dword ptr [rsp+170h+var_110+4]
          vmovss  xmm0, dword ptr [rsp+170h+outPos+8]
          vsubss  xmm4, xmm0, dword ptr [rsp+170h+var_108]
          vmulss  xmm1, xmm3, xmm3
          vmulss  xmm2, xmm2, xmm2
          vaddss  xmm3, xmm2, xmm1
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm2, xmm3, xmm0
          vsqrtss xmm1, xmm2, xmm2
          vaddss  xmm3, xmm1, dword ptr [r14+68Ch]
          vmovss  dword ptr [r14+68Ch], xmm3
        }
      }
      __asm { vmovsd  xmm0, qword ptr [rsp+170h+outPos] }
      ++v179;
      *(float *)&v209 = outPos.v[2];
      __asm
      {
        vmovsd  [rsp+170h+var_110], xmm0
        vaddss  xmm9, xmm9, xmm6
      }
    }
    while ( v179 < v183 );
  }
  __asm
  {
    vmovaps xmm6, [rsp+170h+var_38+8]
    vmovaps xmm9, [rsp+170h+var_68+8]
  }
}

/*
==============
BG_BSpline_CatmullRom_EvalDuration
==============
*/
float BG_BSpline_CatmullRom_EvalDuration(const BSplineCatmullRom *spline)
{
  bool v3; 
  bool v4; 

  _RBX = spline;
  if ( !spline && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 1225, ASSERT_TYPE_ASSERT, "( spline )", "spline pointer is invalid") )
    __debugbreak();
  v3 = _RBX->numPoints < 4;
  if ( _RBX->numPoints < 4 )
  {
    v4 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 1226, ASSERT_TYPE_ASSERT, "( spline->numPoints >= 4 )", "spline is built invalid, wrong number of points");
    v3 = 0;
    if ( v4 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm0, dword ptr [rbx+690h]
  }
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 1227, ASSERT_TYPE_ASSERT, "( spline->totalDuration > 0.0f )", "spline is built invalid, wrong total duration") )
    __debugbreak();
  __asm { vmovss  xmm0, dword ptr [rbx+690h] }
  if ( !_RBX->builtLooped )
    __asm { vsubss  xmm0, xmm0, dword ptr [rcx+rbx+30h] }
  return *(float *)&_XMM0;
}

/*
==============
BG_BSpline_CatmullRom_Evaluate
==============
*/

void __fastcall BG_BSpline_CatmullRom_Evaluate(const BSplineCatmullRom *spline, double t, vec3_t *outPos, vec3_t *optOutDeriv, unsigned int *optOutNodeAt, float *optOutNodeT)
{
  bool v19; 
  bool v20; 
  char v22; 
  char v23; 
  unsigned int numPoints; 
  unsigned int v28; 
  unsigned int v29; 
  __int64 v31; 
  unsigned int v32; 
  bool v34; 
  __int64 v36; 
  char v68; 
  char v71; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps [rsp+0F8h+var_88], xmm10
    vmovaps [rsp+0F8h+var_98], xmm11
  }
  _R15 = optOutNodeT;
  _R13 = outPos;
  _RDI = spline;
  __asm { vmovaps xmm6, xmm1 }
  if ( !spline && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 1238, ASSERT_TYPE_ASSERT, "( spline )", "spline pointer is invalid") )
    __debugbreak();
  v19 = _RDI->numPoints < 4;
  if ( _RDI->numPoints < 4 )
  {
    v20 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 1239, ASSERT_TYPE_ASSERT, "( spline->numPoints >= 4 )", "spline is built invalid, wrong number of points");
    v19 = 0;
    if ( v20 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm8, xmm8, xmm8
    vcomiss xmm8, dword ptr [rdi+690h]
  }
  if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 1240, ASSERT_TYPE_ASSERT, "( spline->totalDuration > 0.0f )", "spline is built invalid, wrong total duration") )
    __debugbreak();
  *(double *)&_XMM0 = BG_BSpline_CatmullRom_EvalDuration(_RDI);
  __asm
  {
    vcomiss xmm6, xmm8
    vmovaps xmm7, xmm0
  }
  if ( v22 )
  {
    if ( _RDI->builtLooped )
    {
      __asm
      {
        vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000; Y
        vmovaps xmm0, xmm6; X
      }
      *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm { vaddss  xmm6, xmm0, xmm7 }
    }
    else
    {
      __asm { vxorps  xmm6, xmm6, xmm6 }
    }
  }
  else
  {
    __asm { vcomiss xmm6, xmm7 }
    if ( !(v22 | v23) )
    {
      if ( _RDI->builtLooped )
      {
        __asm
        {
          vmovaps xmm1, xmm7; Y
          vmovaps xmm0, xmm6; X
        }
        *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
        __asm { vmovaps xmm6, xmm0 }
      }
      else
      {
        __asm { vmovaps xmm6, xmm7 }
      }
    }
  }
  numPoints = _RDI->numPoints;
  v28 = 0;
  v29 = 0;
  __asm { vxorps  xmm0, xmm0, xmm0 }
  do
  {
    v31 = v29;
    v32 = v29;
    __asm { vmovaps xmm7, xmm0 }
    v34 = (52 * (unsigned __int128)v29) >> 64 != 0 || v29 == -1;
    ++v29;
    __asm
    {
      vaddss  xmm0, xmm0, dword ptr [rax+rdi+30h]
      vcomiss xmm6, xmm0
    }
  }
  while ( !v34 && v29 < numPoints );
  if ( v32 >= numPoints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 1279, ASSERT_TYPE_ASSERT, "( cndx < spline->numPoints )", "something was wrong, could not find the curve in the spline") )
    __debugbreak();
  if ( optOutNodeAt )
    *optOutNodeAt = v32;
  __asm { vmovss  xmm0, cs:__real@3a83126f }
  v36 = 52 * v31;
  v19 = __CFADD__(_RDI, v36);
  _RSI = (char *)_RDI + v36;
  __asm { vcomiss xmm0, dword ptr [rsi+30h] }
  if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 1286, ASSERT_TYPE_ASSERT, "( curve.duration > 0.001f )", "Wrong curve duration") )
    __debugbreak();
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000; max
    vsubss  xmm6, xmm6, xmm7
    vdivss  xmm0, xmm6, dword ptr [rsi+30h]; val
    vmovaps xmm1, xmm8; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovaps xmm7, xmm0 }
  if ( optOutNodeT )
    __asm { vmovss  dword ptr [r15], xmm6 }
  __asm
  {
    vmovss  xmm9, cs:__real@40000000
    vmovss  xmm10, cs:__real@40400000
  }
  _RBP = (vec3_t *)&v68;
  __asm { vmulss  xmm8, xmm7, xmm7 }
  if ( optOutDeriv )
    _RBP = optOutDeriv;
  __asm { vmulss  xmm11, xmm8, xmm7 }
  do
  {
    _RDI = (int)v28;
    __asm
    {
      vmulss  xmm0, xmm7, dword ptr [rsi+rdi*4+0Ch]
      vaddss  xmm1, xmm0, dword ptr [rsi+rdi*4]
      vmulss  xmm0, xmm8, dword ptr [rsi+rdi*4+18h]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm11, dword ptr [rsi+rdi*4+24h]
      vaddss  xmm6, xmm2, xmm1
      vmovss  dword ptr [r13+rdi*4+0], xmm6
      vmulss  xmm1, xmm9, dword ptr [rsi+rdi*4+18h]
      vmulss  xmm2, xmm1, xmm7
      vaddss  xmm3, xmm2, dword ptr [rsi+rdi*4+0Ch]
      vmulss  xmm1, xmm10, dword ptr [rsi+rdi*4+24h]
      vmulss  xmm2, xmm1, xmm8
      vaddss  xmm6, xmm3, xmm2
    }
    ++v28;
    __asm { vmovss  dword ptr [rbp+rdi*4+0], xmm6 }
  }
  while ( v28 < 3 );
  _R11 = &v71;
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

bool __fastcall BG_BSpline_FindBezierCurve(const BSplineRelaxedCBezier *bSpline, double t, unsigned int *outCurveNdx, float *outTRelative)
{
  unsigned int v13; 
  bool v14; 
  bool v15; 
  bool v16; 
  unsigned int lastEvN; 
  bool v24; 
  bool v25; 
  bool v26; 
  unsigned int v28; 
  unsigned int ncurves; 
  bool v32; 
  bool v33; 
  bool result; 
  char v49; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  _RBP = outTRelative;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
  }
  _RBX = bSpline;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmm6, xmm1
  }
  if ( !bSpline && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 748, ASSERT_TYPE_ASSERT, "( bSpline )", "B-Spline object is null") )
    __debugbreak();
  v13 = _RBX->ncurves - 1;
  v14 = v13 < 0xF;
  v15 = v13 <= 0xF;
  if ( v13 > 0xF )
  {
    v16 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 749, ASSERT_TYPE_ASSERT, "( bSpline->ncurves > 0 && bSpline->ncurves <= 16 )", "B-Spline object malformed. Num. curves %d", _RBX->ncurves);
    v14 = 0;
    v15 = !v16;
    if ( v16 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm8, xmm8, xmm8
    vcomiss xmm6, xmm8
  }
  if ( v14 )
    goto LABEL_34;
  __asm { vcomiss xmm6, cs:__real@3f800000 }
  if ( !v15 )
  {
LABEL_34:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 750, ASSERT_TYPE_ASSERT, "( t >= 0.0f && t <= 1.0f )", "Param t for B-Spline must be in [0,1]") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000; max
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm0, xmm6; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+314h]
    vcomiss xmm1, xmm8
    vmovaps xmm9, xmm0
  }
  if ( v14 )
  {
    lastEvN = 0;
    *(_QWORD *)&_RBX->lastEvT.y = 0i64;
    __asm { vmovss  dword ptr [rbx+314h], xmm9 }
  }
  else
  {
    __asm { vcomiss xmm0, xmm1 }
    lastEvN = _RBX->lastEvN;
  }
  v24 = lastEvN < _RBX->ncurves;
  v25 = lastEvN <= _RBX->ncurves;
  if ( lastEvN >= _RBX->ncurves )
  {
    v26 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 762, ASSERT_TYPE_ASSERT, "( bSpline->lastEvN >= 0 && bSpline->lastEvN < bSpline->ncurves )", "B-Spline object cache malformed. Curve ndx.");
    v24 = 0;
    v25 = !v26;
    if ( v26 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+318h]
    vcomiss xmm0, xmm8
  }
  if ( v24 )
    goto LABEL_35;
  __asm { vcomiss xmm0, dword ptr [rbx+310h] }
  if ( !v25 )
  {
LABEL_35:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 763, ASSERT_TYPE_ASSERT, "( bSpline->lastEvT[1] >= 0.0f && bSpline->lastEvT[1] <= bSpline->totalLength )", "B-Spline object cache malformed. Starting segment length.") )
      __debugbreak();
  }
  v28 = _RBX->lastEvN;
  ncurves = _RBX->ncurves;
  __asm
  {
    vmulss  xmm7, xmm9, dword ptr [rbx+310h]
    vmovss  xmm6, dword ptr [rbx+318h]
  }
  v32 = v28 < _RBX->ncurves;
  v33 = v28 <= _RBX->ncurves;
  if ( v28 >= _RBX->ncurves )
  {
LABEL_26:
    result = 0;
  }
  else
  {
    while ( 1 )
    {
      __asm { vcomiss xmm7, xmm6 }
      _RSI = v28;
      __asm
      {
        vmovss  xmm1, dword ptr [rbx+rsi*4+2D4h]
        vaddss  xmm0, xmm1, xmm6
      }
      if ( !v32 )
      {
        __asm { vcomiss xmm7, xmm0 }
        if ( v33 )
          break;
      }
      ++v28;
      __asm { vmovaps xmm6, xmm0 }
      v32 = v28 < ncurves;
      v33 = v28 <= ncurves;
      if ( v28 >= ncurves )
        goto LABEL_26;
    }
    __asm { vcomiss xmm1, cs:__real@3a83126f }
    if ( v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 773, ASSERT_TYPE_ASSERT, "(bSpline->bcurveLengths[curveNdx] > 0.001f)", (const char *)&queryFormat, "bSpline->bcurveLengths[curveNdx] > EQUAL_EPSILON") )
      __debugbreak();
    __asm
    {
      vmovss  xmm2, cs:__real@3f800000; max
      vsubss  xmm0, xmm7, xmm6
      vdivss  xmm0, xmm0, dword ptr [rbx+rsi*4+2D4h]; val
      vmovaps xmm1, xmm8; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovss  dword ptr [rbp+0], xmm0 }
    *outCurveNdx = v28;
    result = 1;
    _RBX->lastEvN = v28;
    __asm
    {
      vmovss  dword ptr [rbx+314h], xmm9
      vmovss  dword ptr [rbx+318h], xmm6
    }
  }
  _R11 = &v49;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
  }
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

float __fastcall BG_BSpline_RelaxedCBezier_DeltaTByArcLength(const BSplineRelaxedCBezier *bSpline, double t, double dS)
{
  char v17; 
  char v18; 
  unsigned int outCurveNdx; 
  float outTRelative; 
  vec3_t outVel; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vxorps  xmm6, xmm6, xmm6
  }
  outCurveNdx = 0;
  __asm
  {
    vmovss  [rsp+68h+outTRelative], xmm6
    vmovaps xmm7, xmm2
  }
  if ( !BG_BSpline_FindBezierCurve(bSpline, t, &outCurveNdx, &outTRelative) )
    goto LABEL_4;
  __asm { vmovss  xmm1, [rsp+68h+outTRelative]; t }
  BG_Bezier_EvaluateDerivative(&bSpline->bcurves[outCurveNdx], *(float *)&_XMM1, &outVel);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+68h+outVel]
    vmovss  xmm1, dword ptr [rsp+68h+outVel+4]
    vmulss  xmm2, xmm1, xmm1
    vmulss  xmm3, xmm0, xmm0
    vmovss  xmm0, dword ptr [rsp+68h+outVel+8]
    vmulss  xmm1, xmm0, xmm0
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vcomiss xmm2, cs:__real@3a83126f
  }
  if ( v17 | v18 )
  {
LABEL_4:
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  else
  {
    __asm
    {
      vsqrtss xmm0, xmm2, xmm2
      vdivss  xmm0, xmm7, xmm0
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
  }
  return *(float *)&_XMM0;
}

/*
==============
BG_BSpline_RelaxedCBezier_Evaluate
==============
*/
void BG_BSpline_RelaxedCBezier_Evaluate(const BSplineRelaxedCBezier *bSpline, double t, vec3_t *outPos)
{
  __int64 v7; 
  float outTRelative[6]; 
  unsigned int outCurveNdx; 

  outCurveNdx = 0;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+48h+outTRelative], xmm0
  }
  if ( BG_BSpline_FindBezierCurve(bSpline, t, &outCurveNdx, outTRelative) )
  {
    v7 = outCurveNdx;
    if ( outCurveNdx >= bSpline->ncurves && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 800, ASSERT_TYPE_ASSERT, "(curveNdx < bSpline->ncurves)", (const char *)&queryFormat, "curveNdx < bSpline->ncurves") )
      __debugbreak();
    __asm { vmovss  xmm1, [rsp+48h+outTRelative] }
    BG_Bezier_Evaluate(&bSpline->bcurves[v7], *(float *)&_XMM1, outPos);
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

void __fastcall BG_Bezier_Evaluate(const BezierCurve *bcurve, double t, vec3_t *outPos)
{
  bool v8; 
  bool v9; 
  float fmt; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  v8 = bcurve == NULL;
  if ( !bcurve )
  {
    v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 577, ASSERT_TYPE_ASSERT, "(bcurve)", (const char *)&queryFormat, "bcurve");
    v8 = !v9;
    if ( v9 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
    vcomiss xmm6, cs:__real@3f800000
  }
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 578, ASSERT_TYPE_ASSERT, "(t >= 0.0f && t <= 1.0f)", (const char *)&queryFormat, "t >= 0.0f && t <= 1.0f") )
    __debugbreak();
  __asm { vmovss  dword ptr [rsp+48h+fmt], xmm6 }
  BG_SplineTracer_GetPointOnSpline(&bcurve->p0, &bcurve->p1, &bcurve->p2, &bcurve->p3, fmt, outPos);
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
}

/*
==============
BG_Bezier_EvaluateDerivative
==============
*/

void __fastcall BG_Bezier_EvaluateDerivative(const BezierCurve *bcurve, double t, vec3_t *outVel)
{
  bool v12; 
  bool v13; 
  int v19; 
  bool v26; 
  __int64 v43; 
  __int64 v44; 
  __int64 v45; 
  __int64 v46; 
  __int64 v47; 
  __int64 v48; 
  __int64 v49; 
  __int64 v50; 
  __int64 v51; 
  __int64 v52; 
  __int64 v53; 
  __int64 v54; 
  char v57; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmm6, xmm1
  }
  v12 = bcurve == NULL;
  if ( !bcurve )
  {
    v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 587, ASSERT_TYPE_ASSERT, "(bcurve)", (const char *)&queryFormat, "bcurve");
    v12 = !v13;
    if ( v13 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
    vcomiss xmm6, xmm7
  }
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 588, ASSERT_TYPE_ASSERT, "(t >= 0.0f && t <= 1.0f)", (const char *)&queryFormat, "t >= 0.0f && t <= 1.0f") )
    __debugbreak();
  __asm
  {
    vsubss  xmm1, xmm7, xmm6
    vmulss  xmm0, xmm1, cs:__real@40400000
  }
  _RDI = &bcurve->p1;
  v19 = 0;
  __asm
  {
    vmulss  xmm7, xmm0, xmm1
    vmulss  xmm1, xmm1, cs:__real@40c00000
    vmulss  xmm0, xmm6, cs:__real@40400000
  }
  _RSI = (char *)outVel - (char *)&bcurve->p1;
  __asm
  {
    vmulss  xmm8, xmm1, xmm6
    vmulss  xmm9, xmm0, xmm6
  }
  v26 = 1;
  do
  {
    if ( !v26 )
    {
      LODWORD(v49) = 3;
      LODWORD(v43) = v19;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v43, v49) )
        __debugbreak();
      LODWORD(v50) = 3;
      LODWORD(v44) = v19;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v44, v50) )
        __debugbreak();
      LODWORD(v51) = 3;
      LODWORD(v45) = v19;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v45, v51) )
        __debugbreak();
      LODWORD(v52) = 3;
      LODWORD(v46) = v19;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v46, v52) )
        __debugbreak();
      LODWORD(v53) = 3;
      LODWORD(v47) = v19;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v47, v53) )
        __debugbreak();
      LODWORD(v54) = 3;
      LODWORD(v48) = v19;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v48, v54) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm1, dword ptr [rdi]
      vsubss  xmm0, xmm1, dword ptr [rdi+rbp]
      vmovss  xmm5, dword ptr [rdi+0Ch]
      vmulss  xmm3, xmm0, xmm7
      vmovss  xmm0, dword ptr [rdi+18h]
      vsubss  xmm1, xmm5, xmm1
      vmulss  xmm2, xmm1, xmm8
      vaddss  xmm4, xmm3, xmm2
      vsubss  xmm1, xmm0, xmm5
      vmulss  xmm2, xmm1, xmm9
      vaddss  xmm6, xmm4, xmm2
    }
    if ( (unsigned int)v19 >= 3 )
    {
      LODWORD(v49) = 3;
      LODWORD(v43) = v19;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v43, v49) )
        __debugbreak();
    }
    __asm { vmovss  dword ptr [rsi+rdi], xmm6 }
    _RDI = (vec3_t *)((char *)_RDI + 4);
    v26 = (unsigned int)++v19 < 3;
  }
  while ( v19 < 3 );
  __asm { vmovaps xmm6, [rsp+88h+var_18] }
  _R11 = &v57;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm7, [rsp+88h+var_28]
  }
}

/*
==============
BG_SplineTracer_CalculateExtremeCurveMultiplier
==============
*/

float __fastcall BG_SplineTracer_CalculateExtremeCurveMultiplier(double distance)
{
  char v23; 
  char v24; 
  char v39; 
  void *retaddr; 

  _R11 = &retaddr;
  _RBX = DCONST_DVARFLT_splinetracer_extremeCurveClosestDistance;
  __asm
  {
    vmovaps xmmword ptr [r11-18h], xmm6
    vmovaps [rsp+98h+var_28], xmm7
    vmovaps xmmword ptr [r11-38h], xmm8
    vmovaps xmmword ptr [r11-48h], xmm9
    vmovaps xmmword ptr [r11-58h], xmm10
    vmovaps xmm10, xmm0
  }
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splinetracer_extremeCurveClosestDistance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm7, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_splinetracer_extremeCurveFurthestDistance;
  if ( !DCONST_DVARFLT_splinetracer_extremeCurveFurthestDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splinetracer_extremeCurveFurthestDistance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm6, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_splinetracer_extremeCurveMultiplierAtFurthestDistance;
  if ( !DCONST_DVARFLT_splinetracer_extremeCurveMultiplierAtFurthestDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splinetracer_extremeCurveMultiplierAtFurthestDistance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm9, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_splinetracer_extremeCurveMultiplierAtClosestDistance;
  if ( !DCONST_DVARFLT_splinetracer_extremeCurveMultiplierAtClosestDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splinetracer_extremeCurveMultiplierAtClosestDistance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm8, dword ptr [rbx+28h]
    vmaxss  xmm6, xmm6, xmm7
    vmovaps xmm2, xmm6; max
    vmovaps xmm1, xmm7; min
    vmovaps xmm0, xmm10; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000
    vsubss  xmm3, xmm6, xmm7
    vcvtss2sd xmm1, xmm3, xmm3
    vcomisd xmm1, cs:__real@3eb0c6f7a0b5ed8d
  }
  if ( v23 | v24 )
  {
    __asm { vmovaps xmm1, xmm2 }
  }
  else
  {
    __asm
    {
      vsubss  xmm0, xmm0, xmm7
      vdivss  xmm1, xmm0, xmm3
    }
  }
  __asm { vmovaps xmm7, [rsp+98h+var_28] }
  _R11 = &v39;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vsubss  xmm0, xmm2, xmm1
    vmulss  xmm2, xmm0, xmm8
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmulss  xmm1, xmm1, xmm9
    vmovaps xmm9, xmmword ptr [r11-40h]
    vaddss  xmm0, xmm2, xmm1
  }
  return *(float *)&_XMM0;
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
  const char *v40; 
  float v66; 
  float cp1Distance; 
  float v68; 
  float v69; 
  float v70; 
  float v71; 
  vec3_t upDir; 
  vec3_t leftDir; 
  vec3_t forwardDir; 
  vec3_t sourcePos; 
  char v76; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-18h], xmm6
    vmovaps xmmword ptr [r11-28h], xmm7
    vmovaps xmmword ptr [r11-38h], xmm8
    vmovaps xmmword ptr [r11-48h], xmm9
    vmovaps xmmword ptr [r11-58h], xmm10
    vmovaps xmmword ptr [r11-68h], xmm11
  }
  _RAX = muzzleOrientation;
  _RBP = outCurve;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+0Ch]
    vmovss  xmm1, dword ptr [rax+10h]
    vmovss  xmm9, dword ptr [rax]
    vmovss  xmm10, dword ptr [rax+4]
    vmovss  xmm11, dword ptr [rax+8]
    vmovss  dword ptr [rsp+138h+forwardDir], xmm0
    vmovss  xmm0, dword ptr [rax+14h]
    vmovss  dword ptr [rsp+138h+forwardDir+8], xmm0
    vmovss  xmm0, dword ptr [rax+1Ch]
    vmovss  dword ptr [rsp+138h+forwardDir+4], xmm1
    vmovss  xmm1, dword ptr [rax+18h]
    vmovss  dword ptr [rsp+138h+leftDir+4], xmm0
    vmovss  xmm0, dword ptr [rax+24h]
    vmovss  dword ptr [rsp+138h+leftDir], xmm1
    vmovss  xmm1, dword ptr [rax+20h]
    vmovss  dword ptr [rsp+138h+upDir], xmm0
    vmovss  xmm0, dword ptr [rax+2Ch]
    vmovss  dword ptr [rsp+138h+leftDir+8], xmm1
    vmovss  xmm1, dword ptr [rax+28h]
    vmovss  dword ptr [rsp+138h+upDir+8], xmm0
    vmovss  dword ptr [r11-88h], xmm9
    vmovss  dword ptr [r11-84h], xmm10
    vmovss  dword ptr [r11-80h], xmm11
    vmovss  dword ptr [rsp+138h+upDir+4], xmm1
  }
  if ( trackedEntNum == 2047 )
  {
    _RSI = DCONST_DVARFLT_splinetracer_no_target_cp1_distance;
    if ( !DCONST_DVARFLT_splinetracer_no_target_cp1_distance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splinetracer_no_target_cp1_distance") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm8, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_splinetracer_no_target_cp1_angle;
    if ( !DCONST_DVARFLT_splinetracer_no_target_cp1_angle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splinetracer_no_target_cp1_angle") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm7, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_splinetracer_no_target_cp2_distance_ratio;
    if ( !DCONST_DVARFLT_splinetracer_no_target_cp2_distance_ratio && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splinetracer_no_target_cp2_distance_ratio") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm6, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_splinetracer_no_target_cp2_angle;
    if ( !DCONST_DVARFLT_splinetracer_no_target_cp2_angle )
    {
      v40 = "splinetracer_no_target_cp2_angle";
      goto LABEL_24;
    }
  }
  else
  {
    _RSI = DCONST_DVARFLT_splinetracer_cp1_distance;
    if ( !DCONST_DVARFLT_splinetracer_cp1_distance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splinetracer_cp1_distance") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm8, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_splinetracer_cp1_angle;
    if ( !DCONST_DVARFLT_splinetracer_cp1_angle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splinetracer_cp1_angle") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm7, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_splinetracer_cp2_distance_ratio;
    if ( !DCONST_DVARFLT_splinetracer_cp2_distance_ratio && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splinetracer_cp2_distance_ratio") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm6, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_splinetracer_cp2_angle;
    if ( !DCONST_DVARFLT_splinetracer_cp2_angle )
    {
      v40 = "splinetracer_cp2_angle";
LABEL_24:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v40) )
        __debugbreak();
    }
  }
  Dvar_CheckFrontendServerThread(_RSI);
  __asm
  {
    vmovss  xmm0, [rsp+138h+extremeCurveMultiplier]
    vmovss  xmm1, dword ptr [rsi+28h]
    vmovss  [rsp+138h+var_D0], xmm0
    vmovss  xmm0, [rsp+138h+aimSpread]
    vmovss  [rsp+138h+var_F0], xmm1
    vmovss  [rsp+138h+var_F8], xmm6
    vmovss  [rsp+138h+var_100], xmm7
    vmovss  [rsp+138h+cp1Distance], xmm8
    vmovss  [rsp+138h+var_110], xmm0
  }
  BG_SplineTracer_GetControlPoints(&sourcePos, &forwardDir, &leftDir, &upDir, targetPos, v66, cp1Distance, v68, v69, v70, curveOppositeDirectionOfTarget, curveType, extremeCurve, v71, outCurve);
  __asm
  {
    vaddss  xmm0, xmm9, dword ptr [rbp+0]
    vmovss  dword ptr [rbp+0], xmm0
    vaddss  xmm1, xmm10, dword ptr [rbp+4]
    vmovss  dword ptr [rbp+4], xmm1
    vaddss  xmm0, xmm11, dword ptr [rbp+8]
    vmovss  dword ptr [rbp+8], xmm0
    vaddss  xmm0, xmm9, dword ptr [rbp+0Ch]
    vmovss  dword ptr [rbp+0Ch], xmm0
    vaddss  xmm1, xmm10, dword ptr [rbp+10h]
    vmovss  dword ptr [rbp+10h], xmm1
    vaddss  xmm0, xmm11, dword ptr [rbp+14h]
    vmovss  dword ptr [rbp+14h], xmm0
    vaddss  xmm0, xmm9, dword ptr [rbp+18h]
    vmovss  dword ptr [rbp+18h], xmm0
    vaddss  xmm1, xmm10, dword ptr [rbp+1Ch]
    vmovss  dword ptr [rbp+1Ch], xmm1
    vaddss  xmm0, xmm11, dword ptr [rbp+20h]
    vmovss  dword ptr [rbp+20h], xmm0
    vaddss  xmm0, xmm9, dword ptr [rbp+24h]
    vmovss  dword ptr [rbp+24h], xmm0
    vaddss  xmm1, xmm10, dword ptr [rbp+28h]
    vmovss  dword ptr [rbp+28h], xmm1
    vaddss  xmm0, xmm11, dword ptr [rbp+2Ch]
    vmovss  dword ptr [rbp+2Ch], xmm0
  }
  _R11 = &v76;
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
BG_SplineTracer_FindPath
==============
*/
char BG_SplineTracer_FindPath(const BgHandler *pmoveHandler, Physics_WorldId worldId, const int shooterEntNum, const int trackedEntNum, const orientation_t *muzzleOrientation, const vec3_t *targetPos, const float aimSpread, const bool curveOppositeDirectionOfTarget, int curveType, const bool extremeCurve, const float extremeCurveMultiplier, BezierCurve *outCurve)
{
  char result; 
  int time; 
  float v66; 

  _R10 = muzzleOrientation;
  _RBX = targetPos;
  _RDI = outCurve;
  if ( curveType == 1 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [r10+14h]
      vmovss  xmm1, dword ptr [rbx+4]
      vmovaps [rsp+168h+var_38], xmm6
      vmovaps [rsp+168h+var_48], xmm7
      vmovss  xmm7, dword ptr [r10]
      vmovaps [rsp+168h+var_58], xmm8
      vmovss  xmm8, dword ptr [r10+4]
      vmovaps [rsp+168h+var_68], xmm9
      vmovss  xmm9, dword ptr [r10+8]
      vmovss  [rsp+168h+var_108], xmm0
      vmovss  xmm0, dword ptr [rbx]
      vsubss  xmm6, xmm0, xmm7
      vmovss  xmm0, dword ptr [rbx+8]
      vmovaps [rsp+168h+var_78], xmm10
      vsubss  xmm4, xmm0, xmm9
      vmovaps [rsp+168h+var_88], xmm11
      vsubss  xmm5, xmm1, xmm8
      vmovaps [rsp+168h+var_98], xmm12
      vmulss  xmm0, xmm4, xmm4
      vmovaps [rsp+168h+var_A8], xmm13
      vmulss  xmm2, xmm5, xmm5
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm3, xmm2, xmm1
      vmovss  xmm1, cs:__real@3f800000
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm10, xmm2, xmm2
      vcmpless xmm0, xmm10, cs:__real@80000000
      vblendvps xmm0, xmm10, xmm1, xmm0
      vdivss  xmm2, xmm1, xmm0
      vmovaps [rsp+168h+var_B8], xmm14
      vmovss  xmm14, dword ptr [r10+0Ch]
      vcvtss2sd xmm0, xmm10, xmm10
      vcomisd xmm0, cs:__real@3eb0c6f7a0b5ed8d
      vmulss  xmm11, xmm6, xmm2
      vmulss  xmm12, xmm5, xmm2
      vmulss  xmm13, xmm4, xmm2
      vmovaps [rsp+168h+var_C8], xmm15
      vmovss  xmm15, dword ptr [r10+10h]
      vmovss  dword ptr [rsp+168h+sourceToTarget], xmm11
      vmovss  dword ptr [rsp+168h+sourceToTarget+4], xmm12
      vmovss  dword ptr [rsp+168h+sourceToTarget+8], xmm13
      vmovss  dword ptr [rsp+168h+sourcePos], xmm7
      vmovss  dword ptr [rsp+168h+sourcePos+4], xmm8
      vmovss  dword ptr [rsp+168h+sourcePos+8], xmm9
      vmovss  dword ptr [rdi], xmm7
      vmovss  dword ptr [rdi+4], xmm8
      vmovss  dword ptr [rdi+8], xmm9
      vmovss  dword ptr [rdi+0Ch], xmm7
      vmovss  dword ptr [rdi+10h], xmm8
      vmovss  dword ptr [rdi+14h], xmm9
    }
    outCurve->p2 = *targetPos;
    outCurve->p3 = *targetPos;
    result = 0;
    __asm
    {
      vmovaps xmm14, [rsp+168h+var_B8]
      vmovaps xmm13, [rsp+168h+var_A8]
      vmovaps xmm12, [rsp+168h+var_98]
      vmovaps xmm11, [rsp+168h+var_88]
      vmovaps xmm10, [rsp+168h+var_78]
      vmovaps xmm9, [rsp+168h+var_68]
      vmovaps xmm8, [rsp+168h+var_58]
      vmovaps xmm7, [rsp+168h+var_48]
      vmovaps xmm6, [rsp+168h+var_38]
      vmovaps xmm15, [rsp+168h+var_C8]
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, [rsp+168h+extremeCurveMultiplier]
      vmovss  [rsp+168h+var_118], xmm0
      vmovss  xmm0, [rsp+168h+aimSpread]
      vmovss  [rsp+168h+time], xmm0
    }
    BG_SplineTracer_FindAlternatePath(pmoveHandler, worldId, shooterEntNum, trackedEntNum, muzzleOrientation, targetPos, *(const float *)&time, curveOppositeDirectionOfTarget, (const SplineTracerCurveType)curveType, extremeCurve, v66, outCurve);
    BP_SplineTracer_DebugSpline(pmoveHandler, &outCurve->p0, &outCurve->p1, &outCurve->p2, &outCurve->p3, &colorBlue, 0);
    return 1;
  }
  return result;
}

/*
==============
BG_SplineTracer_GetControlPointPos
==============
*/

void __fastcall BG_SplineTracer_GetControlPointPos(double distToTarget, const vec3_t *sourcePos, const vec3_t *sourceToTarget, const vec3_t *curveDir, const float cpScalarMin, const float cpScalarMax, const float cpNormalizedDistance, vec3_t *outPos)
{
  char v19; 
  char v20; 
  char v52; 
  void *retaddr; 

  _R11 = &retaddr;
  _RBX = DCONST_DVARFLT_splinetracer_cpScalarRangeMin;
  __asm
  {
    vmovaps [rsp+98h+var_28], xmm6
    vmovaps [rsp+98h+var_38], xmm7
    vmovaps xmmword ptr [r11-48h], xmm8
    vmovaps xmmword ptr [r11-58h], xmm9
    vmovaps xmm9, xmm0
  }
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splinetracer_cpScalarRangeMin") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm8, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_splinetracer_cpScalarRangeMax;
  if ( !DCONST_DVARFLT_splinetracer_cpScalarRangeMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splinetracer_cpScalarRangeMax") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm6, dword ptr [rbx+28h]
    vsubss  xmm7, xmm6, xmm8
    vcomiss xmm7, cs:__real@3a83126f
  }
  if ( v19 | v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 413, ASSERT_TYPE_ASSERT, "((rangeMax - rangeMin) > 0.001f)", (const char *)&queryFormat, "(rangeMax - rangeMin) > EQUAL_EPSILON") )
    __debugbreak();
  __asm
  {
    vmovaps xmm2, xmm6; max
    vmovaps xmm1, xmm8; min
    vmovaps xmm0, xmm9; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  _RAX = outPos;
  _R11 = &v52;
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000
    vmovaps xmm6, [rsp+98h+var_28]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vsubss  xmm1, xmm0, xmm8
    vmovaps xmm8, xmmword ptr [r11-30h]
    vdivss  xmm5, xmm1, xmm7
    vmulss  xmm1, xmm5, [rsp+98h+cpScalarMax]
    vmovaps xmm7, [rsp+98h+var_38]
    vsubss  xmm3, xmm2, xmm5
    vmulss  xmm2, xmm0, [rsp+98h+cpNormalizedDistance]
    vmulss  xmm4, xmm3, [rsp+98h+cpScalarMin]
    vaddss  xmm5, xmm4, xmm1
    vmulss  xmm1, xmm2, dword ptr [rsi]
    vmovss  dword ptr [rax], xmm1
    vmulss  xmm3, xmm2, dword ptr [rsi+4]
    vmovss  dword ptr [rax+4], xmm3
    vmulss  xmm0, xmm2, dword ptr [rsi+8]
    vmovss  dword ptr [rax+8], xmm0
    vaddss  xmm1, xmm1, dword ptr [rbp+0]
    vmovss  dword ptr [rax], xmm1
    vaddss  xmm2, xmm3, dword ptr [rbp+4]
    vmovss  dword ptr [rax+4], xmm2
    vaddss  xmm3, xmm0, dword ptr [rbp+8]
    vmovss  dword ptr [rax+8], xmm3
    vmulss  xmm0, xmm5, dword ptr [rdi]
    vaddss  xmm1, xmm0, xmm1
    vmovss  dword ptr [rax], xmm1
    vmulss  xmm0, xmm5, dword ptr [rdi+4]
    vaddss  xmm1, xmm0, xmm2
    vmovss  dword ptr [rax+4], xmm1
    vmulss  xmm0, xmm5, dword ptr [rdi+8]
    vaddss  xmm1, xmm0, xmm3
    vmovss  dword ptr [rax+8], xmm1
  }
}

/*
==============
BG_SplineTracer_GetControlPoints
==============
*/
void BG_SplineTracer_GetControlPoints(const vec3_t *sourcePos, const vec3_t *forwardDir, const vec3_t *leftDir, const vec3_t *upDir, const vec3_t *targetPos, const float aimSpread, const float cp1Distance, const float cp1Angle, const float cp2DistanceRatio, const float cp2Angle, const bool curveOppositeDirectionOfTarget, int curveType, const bool extremeCurve, const float extremeCurveMultiplier, BezierCurve *outCurve)
{
  char v89; 
  char v91; 
  __int64 v189; 
  vec3_t vec; 
  _BYTE v192[12]; 
  __int64 v193; 
  __int64 v194; 
  char v196; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovaps xmmword ptr [rax-88h], xmm12
    vmovaps xmmword ptr [rax-98h], xmm13
    vmovaps xmmword ptr [rsp+110h+var_A8+8], xmm14
    vmovss  xmm1, dword ptr [rcx]
    vmovss  xmm2, dword ptr [rcx+4]
    vmovss  xmm3, dword ptr [rcx+8]
  }
  _RDI = outCurve;
  _ER15 = 0;
  _RAX = targetPos;
  _RBX = upDir;
  __asm { vmovss  xmm11, cs:__real@3f800000 }
  _R14 = forwardDir;
  *(_QWORD *)outCurve->p0.v = 0i64;
  outCurve->p0.v[2] = 0.0;
  __asm
  {
    vmovss  xmm0, dword ptr [rax]
    vsubss  xmm6, xmm0, xmm1
    vmovss  dword ptr [rdi+24h], xmm6
    vmovss  xmm0, dword ptr [rax+4]
    vsubss  xmm5, xmm0, xmm2
    vmulss  xmm1, xmm6, xmm6
    vmovss  dword ptr [rdi+28h], xmm5
    vmovss  xmm0, dword ptr [rax+8]
    vsubss  xmm4, xmm0, xmm3
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm1, xmm2, xmm2
    vcmpless xmm0, xmm1, cs:__real@80000000
    vblendvps xmm0, xmm1, xmm11, xmm0
    vdivss  xmm2, xmm11, xmm0
    vmulss  xmm0, xmm6, xmm2
  }
  *(_QWORD *)&v192[4] = 0i64;
  __asm
  {
    vmovss  dword ptr [rsp+110h+vec], xmm0
    vmovss  [rsp+110h+var_DC], xmm1
    vmulss  xmm0, xmm4, xmm2
    vmulss  xmm1, xmm5, xmm2
    vmovss  dword ptr [rsp+110h+vec+8], xmm0
    vmovss  dword ptr [rdi+2Ch], xmm4
    vmovss  dword ptr [rsp+110h+vec+4], xmm1
    vxorps  xmm14, xmm14, xmm14
    vxorps  xmm12, xmm12, xmm12
    vmovaps xmm13, xmm11
  }
  if ( upDir == (const vec3_t *)&v193 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1667, ASSERT_TYPE_ASSERT, "( &v0 != &cross )", (const char *)&queryFormat, "&v0 != &cross") )
    __debugbreak();
  __asm
  {
    vmovss  xmm9, dword ptr [rbx+4]
    vmovss  xmm8, dword ptr [rbx+8]
    vmulss  xmm1, xmm9, dword ptr [rsp+110h+vec+8]
    vmulss  xmm0, xmm8, dword ptr [rsp+110h+vec+4]
    vmovss  xmm5, dword ptr [rbx]
    vsubss  xmm6, xmm1, xmm0
    vmulss  xmm1, xmm8, dword ptr [rsp+110h+vec]
    vmulss  xmm0, xmm5, dword ptr [rsp+110h+vec+8]
    vsubss  xmm7, xmm1, xmm0
    vmulss  xmm1, xmm5, dword ptr [rsp+110h+vec+4]
    vmulss  xmm0, xmm9, dword ptr [rsp+110h+vec]
    vsubss  xmm10, xmm1, xmm0
    vmovss  dword ptr [rsp+110h+var_B0], xmm10
    vmovss  [rsp+110h+var_B8], xmm6
    vmovss  [rsp+110h+var_B4], xmm7
  }
  if ( curveType != 1 )
  {
    switch ( curveType )
    {
      case 2:
        __asm { vmovaps xmm12, xmm5 }
        break;
      case 3:
        __asm
        {
          vmovsd  xmm3, qword ptr [rsp+110h+var_B8]
          vmovss  xmm10, cs:__real@3c8efa35
        }
        *(_DWORD *)&v192[8] = v194;
        _EAX = extremeCurve;
        __asm
        {
          vmovss  xmm8, dword ptr [rsp+110h+var_C0]
          vmovd   xmm1, r15d
          vmovd   xmm0, eax
          vpcmpeqd xmm2, xmm0, xmm1
          vmovss  xmm1, [rbp+17h+extremeCurveMultiplier]
          vmovsd  [rsp+110h+var_CC+4], xmm3
          vmovss  xmm12, dword ptr [rsp+110h+var_CC+4]
          vblendvps xmm13, xmm1, xmm11, xmm2
          vshufps xmm9, xmm3, xmm3, 55h ; 'U'
        }
        goto LABEL_24;
      case 4:
        __asm
        {
          vmovss  xmm0, dword ptr cs:__xmm@80000000800000008000000080000000
          vxorps  xmm12, xmm6, xmm0
          vxorps  xmm9, xmm7, xmm0
          vxorps  xmm8, xmm10, xmm0
        }
        break;
      case 5:
        __asm
        {
          vmovss  xmm0, dword ptr cs:__xmm@80000000800000008000000080000000
          vxorps  xmm12, xmm5, xmm0
          vxorps  xmm9, xmm9, xmm0
          vxorps  xmm8, xmm8, xmm0
        }
        break;
      default:
        LODWORD(v189) = curveType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 219, ASSERT_TYPE_ASSERT, "( 0 )", "Unhandled curve type %d", v189) )
          __debugbreak();
        __asm
        {
          vmovss  xmm8, dword ptr [rsp+110h+var_C0]
          vmovss  xmm9, [rsp+110h+var_C4]
          vmovss  xmm10, cs:__real@3c8efa35
        }
        goto LABEL_24;
    }
    _EAX = extremeCurve;
    __asm
    {
      vmovss  xmm10, cs:__real@3c8efa35
      vmovd   xmm1, r15d
      vmovd   xmm0, eax
      vpcmpeqd xmm2, xmm0, xmm1
      vmovss  xmm1, [rbp+17h+extremeCurveMultiplier]
      vblendvps xmm13, xmm1, xmm11, xmm2
    }
    goto LABEL_24;
  }
  __asm { vxorps  xmm8, xmm8, xmm8 }
  *(double *)&_XMM0 = vectosignedpitch(_R14);
  __asm { vmovaps xmm9, xmm0 }
  *(double *)&_XMM0 = vectosignedpitch(&vec);
  __asm
  {
    vcomiss xmm9, xmm0
    vmovaps xmm13, xmm0
  }
  if ( !(v89 | v91) )
  {
    Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_splinetracer_angleForMaxUpwardsCurveContribution, "splinetracer_angleForMaxUpwardsCurveContribution");
    __asm
    {
      vsubss  xmm1, xmm9, xmm13
      vminss  xmm2, xmm1, xmm0
      vdivss  xmm8, xmm2, xmm0
    }
  }
  __asm
  {
    vmulss  xmm0, xmm8, dword ptr [rbx]
    vmulss  xmm1, xmm8, dword ptr [rbx+4]
    vaddss  xmm9, xmm1, [rsp+110h+var_C4]
    vmovss  xmm1, dword ptr [rsp+110h+vec]
    vmulss  xmm2, xmm1, dword ptr [rsi]
    vaddss  xmm5, xmm0, xmm12
    vmulss  xmm0, xmm8, dword ptr [rbx+8]
    vaddss  xmm12, xmm0, dword ptr [rsp+110h+var_C0]
    vmovss  xmm0, dword ptr [rsp+110h+vec+4]
    vmulss  xmm3, xmm0, dword ptr [rsi+4]
    vmovss  xmm0, dword ptr [rsp+110h+vec+8]
    vmulss  xmm1, xmm0, dword ptr [rsi+8]
    vmovss  xmm0, dword ptr cs:__xmm@80000000800000008000000080000000
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vcomiss xmm2, xmm14
  }
  if ( !v89 )
  {
    __asm
    {
      vxorps  xmm6, xmm6, xmm0
      vxorps  xmm7, xmm7, xmm0
      vxorps  xmm10, xmm10, xmm0
    }
  }
  if ( !curveOppositeDirectionOfTarget )
  {
    __asm
    {
      vxorps  xmm6, xmm6, xmm0
      vxorps  xmm7, xmm7, xmm0
      vxorps  xmm10, xmm10, xmm0
    }
  }
  __asm
  {
    vsubss  xmm2, xmm11, xmm8
    vmulss  xmm0, xmm6, xmm2
    vaddss  xmm6, xmm0, xmm5
    vmulss  xmm0, xmm10, xmm2
    vmovss  xmm10, cs:__real@3c8efa35
    vaddss  xmm4, xmm0, xmm12
    vmulss  xmm1, xmm7, xmm2
    vaddss  xmm5, xmm1, xmm9
    vmulss  xmm0, xmm4, xmm4
    vmulss  xmm2, xmm5, xmm5
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm1, xmm2, xmm2
    vcmpless xmm0, xmm1, cs:__real@80000000
    vblendvps xmm0, xmm1, xmm11, xmm0
    vdivss  xmm1, xmm11, xmm0
    vmulss  xmm0, xmm10, [rbp+17h+aimSpread]; X
    vmulss  xmm12, xmm1, xmm6
    vmulss  xmm9, xmm1, xmm5
    vmulss  xmm8, xmm1, xmm4
  }
  *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
  __asm
  {
    vmovss  xmm2, cs:__real@3f7fbe77; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm1, dword ptr [rsp+110h+vec+4]
    vmulss  xmm4, xmm1, dword ptr [r14+4]
    vmovss  xmm2, dword ptr [rsp+110h+vec]
    vmulss  xmm3, xmm2, dword ptr [r14]
    vmovss  xmm1, dword ptr [rsp+110h+vec+8]
    vmulss  xmm2, xmm1, dword ptr [r14+8]
    vaddss  xmm5, xmm4, xmm3
    vaddss  xmm3, xmm5, xmm2
    vmaxss  xmm4, xmm3, xmm0
    vsubss  xmm1, xmm4, xmm0
    vsubss  xmm0, xmm11, xmm0
    vdivss  xmm1, xmm1, xmm0
    vmaxss  xmm1, xmm1, xmm14
    vminss  xmm0, xmm1, xmm11
    vsubss  xmm13, xmm11, xmm0
  }
LABEL_24:
  __asm
  {
    vmulss  xmm0, xmm13, [rbp+17h+cp1Angle]
    vmovss  xmm6, dword ptr [r14+4]
    vmovss  xmm7, dword ptr [r14+8]
    vmulss  xmm0, xmm0, xmm10; X
  }
  *(float *)&_XMM0 = tanf_0(*(float *)&_XMM0);
  __asm
  {
    vmovss  xmm4, [rbp+17h+cp1Distance]
    vmulss  xmm1, xmm4, dword ptr [r14]
    vmulss  xmm3, xmm0, xmm4
    vmulss  xmm0, xmm3, xmm12
    vaddss  xmm2, xmm0, xmm14
    vaddss  xmm0, xmm1, xmm14
    vaddss  xmm2, xmm2, xmm0
    vmulss  xmm1, xmm4, xmm6
    vmulss  xmm0, xmm9, xmm3
    vaddss  xmm1, xmm1, xmm0
    vmovss  dword ptr [rdi+10h], xmm1
    vmulss  xmm0, xmm4, xmm7
    vmovss  dword ptr [rdi+0Ch], xmm2
    vmulss  xmm2, xmm8, xmm3
    vaddss  xmm1, xmm2, xmm0
    vsubss  xmm0, xmm11, [rbp+17h+cp2DistanceRatio]
    vmovss  dword ptr [rdi+14h], xmm1
    vmulss  xmm1, xmm0, xmm13
    vmulss  xmm0, xmm13, [rbp+17h+cp2Angle]
    vsubss  xmm1, xmm11, xmm1
    vmulss  xmm6, xmm1, [rsp+110h+var_DC]
    vmulss  xmm0, xmm0, xmm10; X
  }
  *(float *)&_XMM0 = tanf_0(*(float *)&_XMM0);
  __asm
  {
    vmulss  xmm1, xmm6, dword ptr [rsp+110h+vec]
    vmulss  xmm4, xmm0, xmm6
    vaddss  xmm3, xmm1, xmm14
    vmulss  xmm2, xmm4, xmm12
    vaddss  xmm0, xmm2, xmm14
    vaddss  xmm1, xmm3, xmm0
    vmovss  dword ptr [rdi+18h], xmm1
    vmulss  xmm1, xmm6, dword ptr [rsp+110h+vec+4]
    vmulss  xmm2, xmm9, xmm4
    vaddss  xmm2, xmm2, xmm1
    vmulss  xmm1, xmm6, dword ptr [rsp+110h+vec+8]
    vmulss  xmm3, xmm8, xmm4
    vmovss  dword ptr [rdi+1Ch], xmm2
    vaddss  xmm2, xmm3, xmm1
    vmovss  dword ptr [rdi+20h], xmm2
  }
  _R11 = &v196;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [rsp+110h+var_A8+8]
  }
}

/*
==============
BG_SplineTracer_GetPointOnSpline
==============
*/
void BG_SplineTracer_GetPointOnSpline(const vec3_t *startPos, const vec3_t *controlPoint1, const vec3_t *controlPoint2, const vec3_t *endPos, const float time, vec3_t *outPointOnSpline)
{
  __int64 v78; 
  __int128 v79; 
  __int128 v80; 
  __int128 v81; 
  __int128 v82; 
  char v83; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps xmmword ptr [rax-0B8h], xmm14
    vmovaps xmmword ptr [rax-0C8h], xmm15
    vmovss  xmm8, [rsp+148h+time]
  }
  _R14 = outPointOnSpline;
  _RBP = endPos;
  __asm
  {
    vmovss  xmm9, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm8, xmm0
  }
  _RSI = controlPoint2;
  _RDI = controlPoint1;
  _RBX = startPos;
  __asm { vcomiss xmm8, xmm9 }
  if ( (unsigned __int64)&v78 != _security_cookie && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 88, ASSERT_TYPE_ASSERT, "(time >= 0.f && time <= 1.f)", (const char *)&queryFormat, "time >= 0.f && time <= 1.f") )
    __debugbreak();
  __asm
  {
    vmovss  xmm1, dword ptr [rsi]
    vmovss  xmm5, dword ptr [rbp+0]
    vmovss  xmm11, dword ptr [rdi]
    vmovss  xmm14, dword ptr [rbx]
    vmulss  xmm2, xmm8, xmm8
    vsubss  xmm10, xmm9, xmm8
    vshufps xmm10, xmm10, xmm10, 0
    vmulps  xmm9, xmm10, xmm10
  }
  HIDWORD(v79) = 0;
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+30h]
    vmovss  xmm0, xmm0, xmm1
    vinsertps xmm0, xmm0, dword ptr [rsi+4], 10h
    vinsertps xmm0, xmm0, dword ptr [rsi+8], 20h ; ' '
    vmulps  xmm1, xmm0, cs:__xmm@40400000404000004040000040400000
    vmovaps xmm0, xmm2
    vmulss  xmm2, xmm2, [rsp+148h+time]
    vshufps xmm0, xmm0, xmm0, 0
    vmulps  xmm0, xmm0, xmm10
    vmulps  xmm3, xmm1, xmm0
    vshufps xmm2, xmm2, xmm2, 0
  }
  HIDWORD(v80) = 0;
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+40h]
    vmovss  xmm0, xmm0, xmm5
    vinsertps xmm0, xmm0, dword ptr [rbp+4], 10h
    vinsertps xmm0, xmm0, dword ptr [rbp+8], 20h ; ' '
    vmulps  xmm0, xmm2, xmm0
    vaddps  xmm4, xmm3, xmm0
    vbroadcastss xmm0, [rsp+148h+time]
    vmulps  xmm0, xmm0, xmm9
  }
  HIDWORD(v81) = 0;
  __asm
  {
    vmovups xmm1, xmmword ptr [rsp+50h]
    vmovss  xmm1, xmm1, xmm11
    vinsertps xmm1, xmm1, dword ptr [rdi+4], 10h
    vinsertps xmm1, xmm1, dword ptr [rdi+8], 20h ; ' '
    vmulps  xmm1, xmm1, cs:__xmm@40400000404000004040000040400000
    vmulps  xmm1, xmm1, xmm0
  }
  HIDWORD(v82) = 0;
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+60h]
    vmovss  xmm0, xmm0, xmm14
    vinsertps xmm0, xmm0, dword ptr [rbx+4], 10h
    vinsertps xmm0, xmm0, dword ptr [rbx+8], 20h ; ' '
    vmulps  xmm2, xmm9, xmm10
    vmulps  xmm0, xmm2, xmm0
    vaddps  xmm3, xmm4, xmm1
    vaddps  xmm1, xmm3, xmm0
    vmovss  dword ptr [r14], xmm1
    vextractps dword ptr [r14+4], xmm1, 1
    vextractps dword ptr [r14+8], xmm1, 2
  }
  _R11 = &v83;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
BG_SplineTracer_HasCollisionOnPath
==============
*/
bool BG_SplineTracer_HasCollisionOnPath(const BgHandler *pmoveHandler, Physics_WorldId worldId, const int shooterEntNum, const int trackedEntNum, const bool getClosest, const BezierCurve *curve, vec3_t *outCollisionPos)
{
  const dvar_t *v20; 
  __int64 integer; 
  int v22; 
  int v29; 
  __int64 v30; 
  float *v31; 
  bool v40; 
  __int64 v42; 
  int v85; 
  int v86; 
  HavokPhysics_CollisionQueryResult *ClosestResult; 
  HavokPhysics_CollisionQueryResult *v88; 
  const dvar_t *v89; 
  hkMemoryAllocator *v90; 
  hkMemoryAllocator *v91; 
  bool result; 
  const vec3_t *v105; 
  const dvar_t *v120; 
  hkMemoryAllocator *v121; 
  hkMemoryAllocator *v122; 
  float fmt; 
  float fmta; 
  HavokPhysics_IgnoreBodies v130; 
  vec3_t *v131; 
  Physics_RaycastExtendedData extendedData; 
  __int64 v133; 
  _DWORD v134[2]; 
  vec3_t start[21]; 
  char v136; 
  void *retaddr; 

  _RAX = &retaddr;
  v133 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
    vmovaps xmmword ptr [rax-0A8h], xmm11
    vmovaps xmmword ptr [rax-0B8h], xmm12
    vmovaps xmmword ptr [rax-0C8h], xmm13
    vmovaps xmmword ptr [rax-0D8h], xmm14
    vmovaps xmmword ptr [rax-0E8h], xmm15
  }
  v131 = outCollisionPos;
  v20 = DCONST_DVARINT_splinetracer_line_trace_count_for_spline;
  if ( !DCONST_DVARINT_splinetracer_line_trace_count_for_spline && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splinetracer_line_trace_count_for_spline") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v20);
  integer = v20->current.integer;
  v22 = integer + 1;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, r14d
    vmovss  xmm13, cs:__real@3f800000
    vdivss  xmm7, xmm13, xmm0
    vxorps  xmm10, xmm10, xmm10
    vxorps  xmm6, xmm6, xmm6
  }
  v29 = 0;
  v30 = (int)integer + 1;
  if ( (int)integer + 1 > 0 )
  {
    v31 = &start[0].v[2];
    __asm
    {
      vmovss  xmm8, cs:__real@3f7d70a4
      vmovss  xmm9, cs:__real@3fc90fdb
    }
    do
    {
      __asm { vaddss  xmm6, xmm6, xmm7 }
      if ( v29 == (_DWORD)integer )
      {
        __asm { vmovss  dword ptr [rsp+2C0h+fmt], xmm8 }
        BG_SplineTracer_GetPointOnSpline(&curve->p0, &curve->p1, &curve->p2, &curve->p3, fmt, &start[v29]);
      }
      else if ( v29 )
      {
        __asm { vmulss  xmm0, xmm6, xmm9; X }
        cosf_0(*(float *)&_XMM0);
        __asm
        {
          vsubss  xmm1, xmm13, xmm0
          vmovss  dword ptr [rsp+2C0h+fmt], xmm1
        }
        BG_SplineTracer_GetPointOnSpline(&curve->p0, &curve->p1, &curve->p2, &curve->p3, fmta, &start[v29]);
      }
      else
      {
        *((_QWORD *)v31 - 1) = *(_QWORD *)curve->p0.v;
        *v31 = curve->p0.v[2];
      }
      ++v29;
      v31 += 3;
      --v30;
    }
    while ( v30 );
  }
  _RBX = DCONST_DVARFLT_splinetracer_collinear_assumption_angle;
  if ( !DCONST_DVARFLT_splinetracer_collinear_assumption_angle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splinetracer_collinear_assumption_angle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmulss  xmm0, xmm0, cs:__real@3c8efa35; X
  }
  *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
  __asm { vmovaps xmm15, xmm0 }
  v40 = integer == 0;
  if ( integer > 1 )
  {
    _RCX = &v134[3 * integer];
    v42 = integer - 1;
    __asm { vmovss  xmm14, cs:__real@80000000 }
    do
    {
      __asm
      {
        vmovss  xmm4, dword ptr [rcx-4]
        vmovss  xmm12, dword ptr [rcx+8]
        vsubss  xmm11, xmm4, xmm12
        vmovss  xmm7, dword ptr [rcx]
        vsubss  xmm9, xmm7, dword ptr [rcx+0Ch]
        vmovss  xmm5, dword ptr [rcx+4]
        vsubss  xmm10, xmm5, dword ptr [rcx+10h]
        vmulss  xmm1, xmm9, xmm9
        vmulss  xmm0, xmm11, xmm11
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm10, xmm10
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm3, xmm2, xmm2
        vcmpless xmm0, xmm3, xmm14
        vblendvps xmm1, xmm3, xmm13, xmm0
        vmovss  [rsp+2C0h+var_280], xmm1
        vdivss  xmm8, xmm13, xmm1
        vmovss  xmm0, dword ptr [rcx-10h]
        vsubss  xmm6, xmm0, xmm4
        vmovss  xmm1, dword ptr [rcx-0Ch]
        vsubss  xmm4, xmm1, xmm7
        vmovss  xmm0, dword ptr [rcx-8]
        vsubss  xmm7, xmm0, xmm5
        vmulss  xmm2, xmm4, xmm4
        vmulss  xmm1, xmm6, xmm6
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm7, xmm7
        vaddss  xmm2, xmm3, xmm0
        vsqrtss xmm1, xmm2, xmm2
        vcmpless xmm0, xmm1, xmm14
        vblendvps xmm1, xmm1, xmm13, xmm0
        vmovss  [rsp+2C0h+var_280], xmm1
        vdivss  xmm5, xmm13, xmm1
        vmulss  xmm1, xmm8, xmm9
        vmulss  xmm0, xmm4, xmm5
        vmulss  xmm3, xmm1, xmm0
        vmulss  xmm2, xmm6, xmm5
        vmulss  xmm1, xmm8, xmm11
        vmulss  xmm0, xmm2, xmm1
        vaddss  xmm4, xmm3, xmm0
        vmulss  xmm3, xmm8, xmm10
        vmulss  xmm1, xmm7, xmm5
        vmulss  xmm0, xmm3, xmm1
        vaddss  xmm2, xmm4, xmm0
        vcomiss xmm2, xmm15
      }
      if ( !v40 )
      {
        __asm { vmovss  dword ptr [rcx-4], xmm12 }
        *_RCX = _RCX[3];
        _RCX[1] = _RCX[4];
        --v22;
      }
      _RCX -= 3;
      v40 = v42-- == 0;
    }
    while ( v42 );
    __asm { vxorps  xmm10, xmm10, xmm10 }
  }
  v85 = 0;
  if ( v22 - 1 <= 0 )
  {
LABEL_39:
    result = 0;
  }
  else
  {
    v86 = trackedEntNum;
    while ( 1 )
    {
      if ( getClosest )
        ClosestResult = PhysicsQuery_GetClosestResult(worldId);
      else
        ClosestResult = PhysicsQuery_GetAnyResult(worldId);
      v88 = ClosestResult;
      HavokPhysics_CollisionQueryResult::Reset(ClosestResult, 1);
      HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v130, (trackedEntNum != 2047) + 1, 0);
      HavokPhysics_IgnoreBodies::SetIgnoreRefs(&v130, 128);
      HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v130, 0, shooterEntNum, 1, 1, 0, 1, 0);
      if ( v86 != 2047 )
        HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v130, 1, v86, 1, 1, 0, 1, 0);
      extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
      __asm { vmovss  [rbp+1C0h+extendedData.collisionBuffer], xmm10 }
      extendedData.phaseSelection = All;
      extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
      *(_WORD *)&extendedData.collectInsideHits = 256;
      extendedData.ignoreBodies = &v130;
      extendedData.contents = 8399153;
      Physics_Raycast(worldId, &start[v85], &start[v85 + 1], &extendedData, v88);
      if ( HavokPhysics_CollisionQueryResult::HasHit(v88) )
        break;
      v89 = DCONST_DVARBOOL_splinetracer_debug;
      if ( !DCONST_DVARBOOL_splinetracer_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splinetracer_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v89);
      if ( v89->current.enabled )
        pmoveHandler->DebugLine((BgHandler *)pmoveHandler, &start[v85], &start[v85 + 1], &colorGreen, 0, 0);
      v90 = hkMemHeapAllocator();
      v130.m_ignoreBodies.m_size = 0;
      if ( v130.m_ignoreBodies.m_capacityAndFlags >= 0 )
        hkMemoryAllocator::bufFree2(v90, v130.m_ignoreBodies.m_data, 4, v130.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
      v130.m_ignoreBodies.m_data = NULL;
      v130.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
      v91 = hkMemHeapAllocator();
      v130.m_ignoreEntities.m_size = 0;
      if ( v130.m_ignoreEntities.m_capacityAndFlags >= 0 )
        hkMemoryAllocator::bufFree2(v91, v130.m_ignoreEntities.m_data, 8, v130.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
      ++v85;
      v86 = trackedEntNum;
      if ( v85 >= v22 - 1 )
        goto LABEL_39;
    }
    *(double *)&_XMM0 = HavokPhysics_CollisionQueryResult::GetRaycastHitFraction(v88, 0);
    __asm { vmovaps xmm9, xmm0 }
    v105 = &start[v85];
    _RBX = &start[v85 + 1];
    __asm
    {
      vmovss  xmm1, dword ptr [rbx]
      vsubss  xmm3, xmm1, dword ptr [rdi]
      vmovss  xmm2, dword ptr [rbx+4]
      vsubss  xmm4, xmm2, dword ptr [rdi+4]
      vmovss  xmm1, dword ptr [rbx+8]
      vsubss  xmm5, xmm1, dword ptr [rdi+8]
      vmulss  xmm0, xmm3, xmm0
      vaddss  xmm2, xmm0, dword ptr [rdi]
    }
    _RAX = v131;
    __asm
    {
      vmovss  dword ptr [rax], xmm2
      vmulss  xmm1, xmm4, xmm9
      vaddss  xmm0, xmm1, dword ptr [rdi+4]
      vmovss  dword ptr [rax+4], xmm0
      vmulss  xmm2, xmm5, xmm9
      vaddss  xmm1, xmm2, dword ptr [rdi+8]
      vmovss  dword ptr [rax+8], xmm1
    }
    v120 = DCONST_DVARBOOL_splinetracer_debug;
    if ( !DCONST_DVARBOOL_splinetracer_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splinetracer_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v120);
    if ( v120->current.enabled )
      pmoveHandler->DebugLine((BgHandler *)pmoveHandler, v105, _RBX, &colorRed, 0, 0);
    v121 = hkMemHeapAllocator();
    v130.m_ignoreBodies.m_size = 0;
    if ( v130.m_ignoreBodies.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v121, v130.m_ignoreBodies.m_data, 4, v130.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
    v130.m_ignoreBodies.m_data = NULL;
    v130.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
    v122 = hkMemHeapAllocator();
    v130.m_ignoreEntities.m_size = 0;
    if ( v130.m_ignoreEntities.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v122, v130.m_ignoreEntities.m_data, 8, v130.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
    result = 1;
  }
  _R11 = &v136;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, xmmword ptr [r11-88h]
    vmovaps xmm14, xmmword ptr [r11-98h]
    vmovaps xmm15, xmmword ptr [r11-0A8h]
  }
  return result;
}

/*
==============
BG_Spline_CatmullRom_DebugDraw
==============
*/
void BG_Spline_CatmullRom_DebugDraw(const BSplineCatmullRom *splineData, unsigned int drawSegs)
{
  bool v11; 
  bool v12; 
  char v20; 
  char v21; 
  unsigned int v23; 
  vec3_t outPos; 
  vec3_t start; 
  char v34; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
  }
  _RBX = splineData;
  if ( !splineData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 1319, ASSERT_TYPE_ASSERT, "( splineData )", "spline pointer is invalid") )
    __debugbreak();
  v11 = _RBX->numPoints < 4;
  if ( _RBX->numPoints < 4 )
  {
    v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 1320, ASSERT_TYPE_ASSERT, "( splineData->numPoints >= 4 )", "spline is built invalid, wrong number of points");
    v11 = 0;
    if ( v12 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm7, dword ptr [rbx+690h]
  }
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 1321, ASSERT_TYPE_ASSERT, "( splineData->totalDuration > 0.0f )", "spline is built invalid, wrong total duration") )
    __debugbreak();
  if ( drawSegs <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 1322, ASSERT_TYPE_ASSERT, "( drawSegs > 1 )", "number of draw segments not valid") )
    __debugbreak();
  __asm { vxorps  xmm6, xmm6, xmm6 }
  *(double *)&_XMM0 = BG_BSpline_CatmullRom_EvalDuration(_RBX);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm7
    vcvtsi2ss xmm1, xmm1, rdi
    vdivss  xmm9, xmm0, xmm1
    vmovaps xmm8, xmm0
  }
  do
  {
    __asm { vmovaps xmm1, xmm6; t }
    BG_BSpline_CatmullRom_Evaluate(_RBX, *(float *)&_XMM1, &outPos, NULL, NULL, NULL);
    __asm { vcomiss xmm6, xmm7 }
    if ( !(v20 | v21) )
      CG_DebugLine(&start, &outPos, &colorGreen, 0, 0);
    __asm
    {
      vmovsd  xmm0, qword ptr [rsp+0A8h+outPos]
      vaddss  xmm6, xmm6, xmm9
      vcomiss xmm6, xmm8
      vmovsd  qword ptr [rsp+0A8h+start], xmm0
    }
    start.v[2] = outPos.v[2];
  }
  while ( v20 | v21 );
  v23 = 0;
  if ( _RBX->numPoints )
  {
    __asm { vmovss  xmm6, cs:__real@40a00000 }
    do
    {
      __asm { vmovaps xmm1, xmm7; t }
      BG_BSpline_CatmullRom_Evaluate(_RBX, *(float *)&_XMM1, &outPos, NULL, NULL, NULL);
      __asm { vmovaps xmm1, xmm6; radius }
      CG_DebugSphere(&outPos, *(float *)&_XMM1, &colorBlue, 0, 0);
      ++v23;
      __asm { vaddss  xmm7, xmm7, dword ptr [rcx+rbx+30h] }
    }
    while ( v23 < _RBX->numPoints );
  }
  _R11 = &v34;
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
  const dvar_t *v11; 
  int integer; 
  const vec3_t *v25; 
  int v26; 
  const dvar_t *v30; 
  float fmt; 
  vec3_t outPointOnSpline; 
  __int64 v37; 
  float v38; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
  }
  v11 = DCONST_DVARINT_splinetracer_debug_spline_line_count;
  _R12 = startPos;
  _RDI = endPos;
  if ( !DCONST_DVARINT_splinetracer_debug_spline_line_count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splinetracer_debug_spline_line_count") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  integer = v11->current.integer;
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, ebp
    vdivss  xmm7, xmm0, xmm1
    vmovss  xmm1, dword ptr [r12]
    vmovss  xmm0, dword ptr [r12+4]
    vmovss  dword ptr [rsp+0E8h+var_88], xmm1
    vmovss  xmm1, dword ptr [r12+8]
    vmovss  [rsp+0E8h+var_80], xmm1
    vmovss  dword ptr [rsp+0E8h+var_88+4], xmm0
    vxorps  xmm6, xmm6, xmm6
  }
  BG_SplineTracer_DebugStar(pmoveHandler, _R12, &colorYellow, time);
  BG_SplineTracer_DebugStar(pmoveHandler, controlPoint1, &colorYellow, time);
  v25 = controlPoint2;
  BG_SplineTracer_DebugStar(pmoveHandler, controlPoint2, &colorYellow, time);
  BG_SplineTracer_DebugStar(pmoveHandler, endPos, &colorYellow, time);
  BG_SplineTracer_DebugLine(pmoveHandler, _R12, endPos, &colorYellow, time);
  v26 = 0;
  while ( v26 < integer )
  {
    __asm { vaddss  xmm6, xmm6, xmm7 }
    if ( v26 == integer - 1 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi]
        vmovss  xmm1, dword ptr [rdi+4]
        vmovss  dword ptr [rsp+0E8h+var_98], xmm0
        vmovss  xmm0, dword ptr [rdi+8]
        vmovss  dword ptr [rsp+0E8h+var_98+8], xmm0
        vmovss  dword ptr [rsp+0E8h+var_98+4], xmm1
      }
    }
    else
    {
      __asm { vmovss  dword ptr [rsp+0E8h+fmt], xmm6 }
      BG_SplineTracer_GetPointOnSpline(_R12, controlPoint1, v25, endPos, fmt, &outPointOnSpline);
    }
    v30 = DCONST_DVARBOOL_splinetracer_debug;
    if ( !DCONST_DVARBOOL_splinetracer_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splinetracer_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v30);
    if ( v30->current.enabled )
      pmoveHandler->DebugLine((BgHandler *)pmoveHandler, (const vec3_t *)&v37, &outPointOnSpline, color, 0, time);
    ++v26;
    v25 = controlPoint2;
    v38 = outPointOnSpline.v[2];
    __asm
    {
      vmovsd  xmm0, qword ptr [rsp+0E8h+var_98]
      vmovsd  [rsp+0E8h+var_88], xmm0
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+0E8h+var_58]
    vmovaps xmm7, [rsp+0E8h+var_68]
  }
}

/*
==============
GaussElim_Backward
==============
*/
void GaussElim_Backward(const float *mat, int rows, float *sol)
{
  __int64 v5; 
  float *v6; 
  int v7; 
  __int64 v8; 
  int v9; 
  const float *v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v15; 
  __int64 v22; 
  bool v24; 
  unsigned __int64 v26; 
  __int64 v39; 
  bool v42; 
  __int64 v49; 
  const float *v50; 
  __int64 v51; 
  __int64 v52; 
  __int64 v53; 
  __int64 v58; 

  v5 = rows;
  if ( !mat && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 996, ASSERT_TYPE_ASSERT, "( mat )", "null matrix pointer") )
    __debugbreak();
  if ( (int)v5 < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 997, ASSERT_TYPE_ASSERT, "( rows >= 1 )", "Invalid number of equations") )
    __debugbreak();
  v6 = sol;
  if ( !sol )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 998, ASSERT_TYPE_ASSERT, "( sol )", "null solutions array") )
      __debugbreak();
    v6 = NULL;
  }
  v7 = v5 - 1;
  v8 = v5;
  v9 = v5 + 1;
  if ( (int)v5 - 1 >= 0 )
  {
    v10 = mat;
    v11 = v9 * v7;
    v12 = v7 + 1i64;
    _RBX = &v6[v7];
    __asm
    {
      vmovaps [rsp+0B8h+var_48], xmm6
      vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    }
    v15 = v5 - v7 - 1;
    __asm
    {
      vmovaps [rsp+0B8h+var_58], xmm7
      vmovss  xmm7, cs:__real@3a83126f
    }
    v51 = ~(_DWORD)v5;
    v49 = v11;
    v53 = 4i64 * ~v9;
    v58 = v15;
    _R12 = &mat[v7 * ((int)v5 + 2)];
    v52 = -4 * v51;
    _RBP = (char *)mat + 4 * v11 - (_QWORD)v6;
    _R14 = (char *)&v6[-v11] - (char *)mat;
    _RDI = (char *)v6 + 4 * (3 - v11) - (_QWORD)mat;
    _RAX = &mat[v9 * (v7 + 1) - 1];
    v50 = _RAX;
    do
    {
      v22 = v12;
      __asm
      {
        vmovss  xmm2, dword ptr [rax]
        vmovss  dword ptr [rbx], xmm2
      }
      v24 = v12 <= (unsigned __int64)v8;
      if ( v12 < v8 )
      {
        if ( v15 >= 4 )
        {
          _RCX = &v10[v11 + v12];
          v26 = ((unsigned __int64)(v8 - v12 - 4) >> 2) + 1;
          v22 = v12 + 4 * v26;
          do
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rcx+r14]
              vmulss  xmm1, xmm0, dword ptr [rcx]
            }
            _RCX += 4;
            __asm
            {
              vsubss  xmm2, xmm2, xmm1
              vmovss  dword ptr [rbx], xmm2
              vmovss  xmm0, dword ptr [rcx+r14-0Ch]
              vmulss  xmm1, xmm0, dword ptr [rcx-0Ch]
              vsubss  xmm3, xmm2, xmm1
              vmovss  dword ptr [rbx], xmm3
              vmovss  xmm0, dword ptr [rcx+rdi-14h]
              vmulss  xmm1, xmm0, dword ptr [rcx-8]
              vsubss  xmm2, xmm3, xmm1
              vmovss  dword ptr [rbx], xmm2
              vmovss  xmm0, dword ptr [rcx+rdi-10h]
              vmulss  xmm1, xmm0, dword ptr [rcx-4]
              vsubss  xmm2, xmm2, xmm1
              vmovss  dword ptr [rbx], xmm2
            }
            --v26;
          }
          while ( v26 );
        }
        v24 = v22 <= (unsigned __int64)v8;
        if ( v22 < v8 )
        {
          _RAX = &v6[v22];
          v39 = v8 - v22;
          do
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rax+rbp]
              vmulss  xmm1, xmm0, dword ptr [rax]
            }
            ++_RAX;
            __asm
            {
              vsubss  xmm2, xmm2, xmm1
              vmovss  dword ptr [rbx], xmm2
            }
            v42 = v39-- == 0;
            v24 = v42 || v39 == 0;
          }
          while ( v39 );
        }
      }
      __asm
      {
        vmovss  xmm0, dword ptr [r12]
        vandps  xmm0, xmm0, xmm6
        vcomiss xmm0, xmm7
      }
      if ( v24 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 1014, ASSERT_TYPE_ASSERT, "( fabs( (mat[(PADCOLS)*(row)+(row)]) ) > 0.001f )", "diagonal pivot is 0, singular matrix") )
          __debugbreak();
        v10 = mat;
        v6 = sol;
        v11 = v49;
      }
      --v12;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx]
        vdivss  xmm1, xmm0, dword ptr [r12]
      }
      v11 += v51;
      _RDI += v52;
      _RAX = &v50[v51];
      _R14 += v52;
      v15 = v58 + 1;
      _R12 = (const float *)((char *)_R12 + v53);
      _RBP += 4 * v51;
      __asm { vmovss  dword ptr [rbx], xmm1 }
      --_RBX;
      v50 = _RAX;
      --v7;
      v49 = v11;
      ++v58;
    }
    while ( v7 >= 0 );
    __asm
    {
      vmovaps xmm7, [rsp+0B8h+var_58]
      vmovaps xmm6, [rsp+0B8h+var_48]
    }
  }
}

/*
==============
GaussElim_Forward
==============
*/
__int64 GaussElim_Forward(float *mat, int rows)
{
  int v6; 
  int v7; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  bool i; 
  int v19; 
  int v20; 
  int v30; 
  int v32; 
  bool v33; 
  int v48; 
  __int64 v50; 
  __int64 v51; 
  unsigned __int64 v54; 
  float v56; 
  float v58; 
  float v60; 
  __int64 v62; 
  __int64 v65; 
  __int64 v67; 
  __int64 v68; 
  __int64 v69; 
  __int64 v70; 
  int v71; 
  __int64 v72; 
  __int64 v73; 
  __int64 v75; 
  __int64 v76; 
  __int64 v77; 
  __int64 v78; 
  unsigned __int64 v82; 
  __int64 v96; 
  __int64 result; 
  int v103; 
  __int64 v104; 
  int v107; 
  int v110; 
  int v111; 

  _RSI = mat;
  if ( !mat && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 943, ASSERT_TYPE_ASSERT, "( mat )", "null matrix pointer") )
    __debugbreak();
  if ( rows < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 944, ASSERT_TYPE_ASSERT, "( rows >= 1 )", "invalid number of equations") )
    __debugbreak();
  v6 = rows + 1;
  v7 = 0;
  __asm
  {
    vmovaps [rsp+0B8h+var_58], xmm6
    vmovaps [rsp+0B8h+var_68], xmm7
  }
  if ( rows <= 0 )
  {
LABEL_56:
    result = 0xFFFFFFFFi64;
  }
  else
  {
    __asm
    {
      vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovss  xmm7, cs:__real@3727c5ac
    }
    v10 = 0;
    v107 = rows + 1;
    v11 = rows - 1;
    v110 = 0;
    v111 = rows - 1;
    v12 = rows + 1;
    while ( 1 )
    {
      v13 = v7 + 1;
      v104 = v10;
      v14 = v7;
      v103 = v7 + 1;
      v15 = v7 + 1;
      __asm
      {
        vmovss  xmm3, dword ptr [rsi+rax*4]
        vandps  xmm3, xmm3, xmm6
      }
      i = v7 + 1 < (unsigned int)rows;
      if ( v7 + 1 < rows )
      {
        if ( v11 >= 4 )
        {
          do
          {
            v19 = v15 + 1;
            v20 = v15;
            _RAX = v7 + v6 * v15;
            __asm
            {
              vmovss  xmm1, dword ptr [rsi+rax*4]
              vandps  xmm1, xmm1, xmm6
              vcomiss xmm1, xmm3
              vcmpltss xmm0, xmm3, xmm1
            }
            if ( __CFADD__(v7, v6 * v15) || v7 + v6 * v15 == 0 )
              v20 = v14;
            v14 = v15 + 3;
            __asm { vblendvps xmm2, xmm3, xmm1, xmm0 }
            _RAX = v7 + v6 * v19;
            __asm
            {
              vmovss  xmm1, dword ptr [rsi+rax*4]
              vandps  xmm1, xmm1, xmm6
              vcomiss xmm1, xmm2
              vcmpltss xmm0, xmm2, xmm1
            }
            if ( __CFADD__(v7, v6 * v19) || v7 + v6 * v19 == 0 )
              v19 = v20;
            v30 = v15 + 2;
            __asm { vblendvps xmm3, xmm2, xmm1, xmm0 }
            v32 = v6 * (v15 + 2);
            v33 = __CFADD__(v7, v32) || v7 + v32 == 0;
            _RAX = v7 + v32;
            __asm
            {
              vmovss  xmm1, dword ptr [rsi+rax*4]
              vandps  xmm1, xmm1, xmm6
              vcomiss xmm1, xmm3
              vcmpltss xmm0, xmm3, xmm1
            }
            if ( v33 )
              v30 = v19;
            __asm { vblendvps xmm2, xmm3, xmm1, xmm0 }
            _RAX = v7 + v6 * v14;
            __asm
            {
              vmovss  xmm1, dword ptr [rsi+rax*4]
              vandps  xmm1, xmm1, xmm6
              vcomiss xmm1, xmm2
              vcmpltss xmm0, xmm2, xmm1
            }
            if ( __CFADD__(v7, v6 * v14) || v7 + v6 * v14 == 0 )
              v14 = v30;
            v15 += 4;
            __asm
            {
              vblendvps xmm0, xmm2, xmm1, xmm0
              vmovss  [rsp+0B8h+arg_8], xmm0
              vmovss  xmm3, [rsp+0B8h+arg_8]
            }
          }
          while ( v15 < rows - 3 );
        }
        for ( i = v15 < (unsigned int)rows; v15 < rows; i = v15 < (unsigned int)rows )
        {
          _RAX = v7 + v6 * v15;
          __asm
          {
            vmovss  xmm1, dword ptr [rsi+rax*4]
            vandps  xmm1, xmm1, xmm6
            vcomiss xmm1, xmm3
            vcmpltss xmm0, xmm3, xmm1
          }
          v48 = v15;
          if ( __CFADD__(v7, v6 * v15) || v7 + v6 * v15 == 0 )
            v48 = v14;
          ++v15;
          v14 = v48;
          __asm
          {
            vblendvps xmm0, xmm3, xmm1, xmm0
            vmovss  [rsp+0B8h+arg_8], xmm0
            vmovss  xmm3, [rsp+0B8h+arg_8]
          }
        }
      }
      __asm { vcomiss xmm3, xmm7 }
      if ( i )
        break;
      if ( v14 != v7 )
      {
        if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 921, ASSERT_TYPE_ASSERT, "( mat )", "null matrix pointer") )
          __debugbreak();
        if ( (v14 >= rows || v14 < 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 923, ASSERT_TYPE_ASSERT, "( rowA < rows && rowA >= 0 )", "invalid rowA index") )
          __debugbreak();
        if ( (v7 >= rows || v7 < 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_splinetracer.cpp", 924, ASSERT_TYPE_ASSERT, "( rowB < rows && rowB >= 0 )", "invalid rowB index") )
          __debugbreak();
        v50 = 0i64;
        if ( v6 >= 4i64 )
        {
          v51 = v7 * v6;
          _RDX = &_RSI[v51 + 1];
          _R8 = v14 * v6 - v51;
          v54 = ((unsigned __int64)(v6 - 4i64) >> 2) + 1;
          v50 = 4 * v54;
          do
          {
            __asm { vmovss  xmm0, dword ptr [rdx+r8*4-4] }
            _RDX[_R8 - 1] = *(_RDX - 1);
            v56 = *_RDX;
            __asm
            {
              vmovss  dword ptr [rdx-4], xmm0
              vmovss  xmm0, dword ptr [rdx+r8*4]
            }
            _RDX[_R8] = v56;
            v58 = _RDX[1];
            __asm
            {
              vmovss  dword ptr [rdx], xmm0
              vmovss  xmm1, dword ptr [rdx+r8*4+4]
            }
            _RDX[_R8 + 1] = v58;
            v60 = _RDX[2];
            __asm
            {
              vmovss  dword ptr [rdx+4], xmm1
              vmovss  xmm0, dword ptr [rdx+r8*4+8]
            }
            _RDX[_R8 + 2] = v60;
            __asm { vmovss  dword ptr [rdx+8], xmm0 }
            _RDX += 4;
            --v54;
          }
          while ( v54 );
        }
        if ( v50 < v6 )
        {
          v62 = v7 * v6;
          _RDX = &_RSI[v62 + v50];
          _R8 = v14 * v6 - v62;
          v65 = v6 - v50;
          do
          {
            __asm { vmovss  xmm0, dword ptr [rdx+r8*4] }
            _RDX[_R8] = *_RDX;
            __asm { vmovss  dword ptr [rdx], xmm0 }
            ++_RDX;
            --v65;
          }
          while ( v65 );
        }
        v12 = v107;
      }
      if ( v13 < rows )
      {
        v67 = v12;
        v68 = v6;
        v69 = v7 + 1i64;
        v70 = 4i64 * v6;
        v71 = v107 - v6;
        v72 = -4i64 * v6;
        v73 = v7;
        _R11 = &_RSI[v12 + v7];
        v75 = (__int64)&_RSI[v69 + 1 + v67];
        v76 = (unsigned int)(rows - v13);
        v77 = 4 * (v71 - v67) + 4;
        do
        {
          v78 = v69;
          __asm
          {
            vmovss  xmm0, dword ptr [r11]
            vdivss  xmm3, xmm0, dword ptr [rsi+rax*4]
          }
          *_R11 = 0.0;
          if ( v69 < v68 )
          {
            if ( v68 - v69 >= 4 )
            {
              _RAX = v75;
              v82 = ((unsigned __int64)(v68 - v73 - 5) >> 2) + 1;
              v78 = v69 + 4 * v82;
              do
              {
                __asm
                {
                  vmulss  xmm1, xmm3, dword ptr [rdx+rax-8]
                  vmovss  xmm0, dword ptr [rax-4]
                }
                _RAX += 16i64;
                __asm
                {
                  vsubss  xmm1, xmm0, xmm1
                  vmovss  xmm0, dword ptr [rax-10h]
                  vmovss  dword ptr [rax-14h], xmm1
                  vmulss  xmm2, xmm3, dword ptr [rax+rdx-14h]
                  vsubss  xmm1, xmm0, xmm2
                  vmovss  xmm0, dword ptr [rax-0Ch]
                  vmovss  dword ptr [rax-10h], xmm1
                  vmulss  xmm1, xmm3, dword ptr [rax+rdx-10h]
                  vsubss  xmm1, xmm0, xmm1
                  vmovss  xmm0, dword ptr [rax-8]
                  vmovss  dword ptr [rax-0Ch], xmm1
                  vmulss  xmm1, xmm3, dword ptr [rax+rdx-0Ch]
                  vsubss  xmm1, xmm0, xmm1
                  vmovss  dword ptr [rax-8], xmm1
                }
                --v82;
              }
              while ( v82 );
            }
            if ( v78 < v68 )
            {
              _RCX = &_RSI[v67 + v78];
              v96 = v68 - v78;
              do
              {
                __asm
                {
                  vmulss  xmm1, xmm3, dword ptr [rdx+rcx-4]
                  vmovss  xmm0, dword ptr [rcx]
                }
                ++_RCX;
                __asm
                {
                  vsubss  xmm1, xmm0, xmm1
                  vmovss  dword ptr [rcx-4], xmm1
                }
                --v96;
              }
              while ( v96 );
            }
          }
          _R11 = (float *)((char *)_R11 + v70);
          v67 += v68;
          v75 += v70;
          v77 += v72;
          --v76;
        }
        while ( v76 );
        v13 = v103;
        v6 = rows + 1;
        v12 = v107;
      }
      v10 = v6 + 1 + v110;
      v12 += v6;
      v7 = v13;
      v11 = v111 - 1;
      v110 = v10;
      --v111;
      v107 = v12;
      if ( v13 >= rows )
        goto LABEL_56;
    }
    result = (unsigned int)v7;
  }
  __asm
  {
    vmovaps xmm7, [rsp+0B8h+var_68]
    vmovaps xmm6, [rsp+0B8h+var_58]
  }
  return result;
}

