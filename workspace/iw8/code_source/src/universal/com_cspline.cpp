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

bool __fastcall Com_CalcCSplineAccuratePointAlongSpline(unsigned __int16 splineId, double distance, unsigned __int16 splinePointIndex, double lambda, unsigned __int16 *out_splinePointIndex, float *out_lambda, int maxSteps, float epsilon)
{
  unsigned int v24; 
  unsigned __int16 v26; 
  bool v28; 
  bool v29; 
  bool result; 
  vec3_t out_position; 
  char v65; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps [rsp+0F8h+var_88], xmm11
    vmovaps [rsp+0F8h+var_98], xmm12
    vmovaps [rsp+0F8h+var_A8], xmm13
  }
  _RDI = out_lambda;
  __asm
  {
    vmovaps xmm2, xmm3; lambda
    vmovaps xmm8, xmm3
    vmovaps xmm7, xmm1
  }
  v24 = 0;
  __asm { vmovaps xmm6, xmm1 }
  Com_CalcCSplinePosition(splineId, splinePointIndex, *(float *)&_XMM2, &out_position);
  v26 = splinePointIndex;
  __asm { vmovaps xmm3, xmm8; lambda }
  v28 = 0;
  v29 = maxSteps == 0;
  if ( maxSteps > 0 )
  {
    __asm
    {
      vmovss  xmm9, [rsp+0F8h+epsilon]
      vmovss  xmm11, dword ptr [rsp+0F8h+out_position+8]
      vmovss  xmm12, dword ptr [rsp+0F8h+out_position+4]
      vmovss  xmm13, dword ptr [rsp+0F8h+out_position]
      vmovss  xmm10, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    }
    do
    {
      __asm
      {
        vandps  xmm0, xmm6, xmm10
        vcomiss xmm0, xmm9
      }
      if ( v29 )
        break;
      __asm { vmovaps xmm1, xmm6; distance }
      if ( !Com_CalcCSplinePointAlongSpline(splineId, *(float *)&_XMM1, v26, *(float *)&_XMM3, out_splinePointIndex, out_lambda) )
      {
        result = 0;
        goto LABEL_16;
      }
      __asm { vmovss  xmm2, dword ptr [rdi]; lambda }
      ++v24;
      Com_CalcCSplinePosition(splineId, *out_splinePointIndex, *(float *)&_XMM2, &out_position);
      v26 = *out_splinePointIndex;
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+0F8h+out_position]
        vmovss  xmm1, dword ptr [rsp+0F8h+out_position+4]
        vsubss  xmm3, xmm0, xmm13
        vmovss  xmm0, dword ptr [rsp+0F8h+out_position+8]
        vsubss  xmm2, xmm1, xmm12
        vmulss  xmm1, xmm3, xmm3
        vmulss  xmm2, xmm2, xmm2
        vaddss  xmm3, xmm2, xmm1
        vsubss  xmm4, xmm0, xmm11
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm2, xmm3, xmm0
        vmovss  xmm3, dword ptr [rdi]
        vsqrtss xmm1, xmm2, xmm2
        vsubss  xmm6, xmm7, xmm1
      }
      v28 = v24 < maxSteps;
      v29 = v24 <= maxSteps;
    }
    while ( (int)v24 < maxSteps );
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm7, xmm0
  }
  if ( !v29 )
  {
    v28 = *out_splinePointIndex < splinePointIndex;
    if ( *out_splinePointIndex < splinePointIndex )
      goto LABEL_13;
    __asm { vcomiss xmm8, dword ptr [rdi] }
    if ( *out_splinePointIndex >= splinePointIndex )
      goto LABEL_13;
    __asm { vcomiss xmm7, xmm0 }
  }
  if ( !v28 )
    goto LABEL_15;
  if ( *out_splinePointIndex <= splinePointIndex )
  {
    __asm { vcomiss xmm8, dword ptr [rdi] }
    if ( *out_splinePointIndex > splinePointIndex )
    {
LABEL_15:
      result = 1;
      goto LABEL_16;
    }
  }
LABEL_13:
  __asm
  {
    vmovaps xmm3, xmm8; lambda
    vmovaps xmm1, xmm7; distance
  }
  result = Com_CalcCSplinePointAlongSpline(splineId, *(float *)&_XMM1, splinePointIndex, *(float *)&_XMM3, out_splinePointIndex, out_lambda);
LABEL_16:
  _R11 = &v65;
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
  }
  return result;
}

/*
==============
Com_CalcCSplineAngles
==============
*/

void __fastcall Com_CalcCSplineAngles(unsigned __int16 splineId, unsigned __int16 splinePointIndex, double lambda, vec3_t *out_angles)
{
  unsigned __int16 v6; 
  __int64 v10; 
  int v11; 
  bool v12; 
  bool v13; 
  bool v14; 
  vec4_t qb; 
  vec4_t quat; 
  vec4_t out; 
  tmat33_t<vec3_t> axis; 

  __asm { vmovaps [rsp+0C8h+var_38], xmm6 }
  v6 = splineId - 1;
  __asm { vmovaps xmm6, xmm2 }
  if ( (unsigned __int16)(splineId - 1) >= cm.mapEnts->splineList.splineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 292, ASSERT_TYPE_ASSERT, "(splineIndex < Com_GetCSplineCount())", (const char *)&queryFormat, "splineIndex < Com_GetCSplineCount()") )
    __debugbreak();
  if ( v6 >= cm.mapEnts->splineList.splineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 17, ASSERT_TYPE_ASSERT, "(splineIndex < Com_GetCSplineCount())", (const char *)&queryFormat, "splineIndex < Com_GetCSplineCount()") )
    __debugbreak();
  v10 = v6;
  v11 = cm.mapEnts->splineList.splines[v10].splinePointCount - 1;
  v12 = splinePointIndex < (unsigned int)v11;
  v13 = splinePointIndex <= (unsigned int)v11;
  if ( splinePointIndex >= v11 )
  {
    v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 293, ASSERT_TYPE_ASSERT, "(splinePointIndex < Com_GetCSplinePointCount( splineId )-1)", (const char *)&queryFormat, "splinePointIndex < Com_GetCSplinePointCount( splineId )-1");
    v12 = 0;
    v13 = !v14;
    if ( v14 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  if ( v12 )
    goto LABEL_17;
  __asm { vcomiss xmm6, cs:__real@3f800000 }
  if ( !v13 )
  {
LABEL_17:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 294, ASSERT_TYPE_ASSERT, "(lambda >=0.f && lambda <= 1.f)", (const char *)&queryFormat, "lambda >=0.f && lambda <= 1.f") )
      __debugbreak();
  }
  AnglesToQuat(&cm.mapEnts->splineList.splines[v10].splinePoints[splinePointIndex].angles, &quat);
  AnglesToQuat(&cm.mapEnts->splineList.splines[v10].splinePoints[(unsigned int)splinePointIndex + 1].angles, &qb);
  __asm { vmovaps xmm2, xmm6; frac }
  QuatLerp(&quat, &qb, *(float *)&_XMM2, &out);
  QuatToAxis(&out, &axis);
  AxisToAngles(&axis, out_angles);
  __asm { vmovaps xmm6, [rsp+0C8h+var_38] }
}

/*
==============
Com_CalcCSplineClosestPointOnSpline
==============
*/
void Com_CalcCSplineClosestPointOnSpline(unsigned __int16 splineId, const vec3_t *position, unsigned __int16 *out_splinePointIndex, float *out_lambda)
{
  __int64 v13; 
  MapEnts *mapEnts; 
  __int64 v16; 
  unsigned __int16 v18; 
  unsigned __int16 v19; 
  unsigned __int16 v20; 
  __int64 v21; 
  SplinePointEntityRecord *splinePoints; 
  char v23; 
  vec3_t vProj; 
  char v63; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps [rsp+0E8h+var_88], xmm9
    vmovaps [rsp+0E8h+var_98], xmm10
    vmovss  xmm6, cs:__real@7f7fffff
  }
  _R13 = out_lambda;
  v13 = (unsigned __int16)(splineId - 1);
  mapEnts = cm.mapEnts;
  v16 = v13;
  v18 = cm.mapEnts->splineList.splines[v16].splinePointCount - 1;
  v19 = 0;
  v20 = 0;
  if ( cm.mapEnts->splineList.splines[v16].splinePointCount != 1 )
  {
    v21 = 0i64;
    do
    {
      splinePoints = mapEnts->splineList.splines[v16].splinePoints;
      *(double *)&_XMM0 = PointToLineSegmentDistSq(position, &splinePoints[v21].origin, &splinePoints[v21 + 1].origin);
      __asm { vcomiss xmm0, xmm6 }
      if ( v23 )
      {
        __asm { vmovaps xmm6, xmm0 }
        v19 = v20;
      }
      mapEnts = cm.mapEnts;
      ++v20;
      ++v21;
    }
    while ( v20 < v18 );
  }
  _RDI = v19 + 1i64;
  ProjectPointOntoVector(position, &mapEnts->splineList.splines[v16].splinePoints[v19].origin, &mapEnts->splineList.splines[v16].splinePoints[_RDI].origin, &vProj, NULL);
  _RAX = cm.mapEnts->splineList.splines[v16].splinePoints;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+rdi+20h]
    vsubss  xmm9, xmm0, dword ptr [rax+rbx+20h]
    vmovss  xmm1, dword ptr [rax+rdi+24h]
    vsubss  xmm5, xmm1, dword ptr [rax+rbx+24h]
    vmovss  xmm0, dword ptr [rax+rdi+28h]
    vsubss  xmm6, xmm0, dword ptr [rax+rbx+28h]
    vmovss  xmm1, dword ptr [rsp+0E8h+vProj]
    vsubss  xmm10, xmm1, dword ptr [rax+rbx+20h]
    vmovss  xmm0, dword ptr [rsp+0E8h+vProj+4]
    vsubss  xmm7, xmm0, dword ptr [rax+rbx+24h]
    vmovss  xmm1, dword ptr [rsp+0E8h+vProj+8]
    vsubss  xmm8, xmm1, dword ptr [rax+rbx+28h]
    vmulss  xmm2, xmm5, xmm5
    vmulss  xmm1, xmm6, xmm6
    vmulss  xmm0, xmm9, xmm9
    vaddss  xmm3, xmm2, xmm0
    vaddss  xmm2, xmm3, xmm1
    vsqrtss xmm0, xmm2, xmm2
    vmovss  xmm2, cs:__real@3f800000; max
    vdivss  xmm4, xmm2, xmm0
    vmulss  xmm1, xmm7, xmm7
    vmulss  xmm0, xmm10, xmm10
    vaddss  xmm3, xmm1, xmm0
    vmulss  xmm1, xmm8, xmm8
    vaddss  xmm3, xmm3, xmm1
    vsqrtss xmm0, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm0; val
    vxorps  xmm1, xmm1, xmm1; min
  }
  *out_splinePointIndex = v19;
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovss  dword ptr [r13+0], xmm0 }
  _R11 = &v63;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
  }
}

/*
==============
Com_CalcCSplineCorridor
==============
*/

void __fastcall Com_CalcCSplineCorridor(unsigned __int16 splineId, unsigned __int16 splinePointIndex, double lambda, vec2_t *out_dims)
{
  unsigned __int16 v6; 
  __int64 v10; 
  int v11; 
  bool v12; 
  bool v13; 
  bool v14; 

  v6 = splineId - 1;
  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RBP = out_dims;
  __asm { vmovaps xmm6, xmm2 }
  if ( (unsigned __int16)(splineId - 1) >= cm.mapEnts->splineList.splineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 261, ASSERT_TYPE_ASSERT, "(splineIndex < Com_GetCSplineCount())", (const char *)&queryFormat, "splineIndex < Com_GetCSplineCount()") )
    __debugbreak();
  if ( v6 >= cm.mapEnts->splineList.splineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 17, ASSERT_TYPE_ASSERT, "(splineIndex < Com_GetCSplineCount())", (const char *)&queryFormat, "splineIndex < Com_GetCSplineCount()") )
    __debugbreak();
  v10 = v6;
  v11 = cm.mapEnts->splineList.splines[v10].splinePointCount - 1;
  v12 = splinePointIndex < (unsigned int)v11;
  v13 = splinePointIndex <= (unsigned int)v11;
  if ( splinePointIndex >= v11 )
  {
    v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 262, ASSERT_TYPE_ASSERT, "(splinePointIndex < Com_GetCSplinePointCount( splineId )-1)", (const char *)&queryFormat, "splinePointIndex < Com_GetCSplinePointCount( splineId )-1");
    v12 = 0;
    v13 = !v14;
    if ( v14 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  if ( v12 )
    goto LABEL_17;
  __asm { vcomiss xmm6, cs:__real@3f800000 }
  if ( !v13 )
  {
LABEL_17:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 263, ASSERT_TYPE_ASSERT, "(lambda >=0.f && lambda <= 1.f)", (const char *)&queryFormat, "lambda >=0.f && lambda <= 1.f") )
      __debugbreak();
  }
  _RDX = 168i64 * splinePointIndex;
  _R8 = cm.mapEnts->splineList.splines[v10].splinePoints;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+r8+0E4h]
    vsubss  xmm1, xmm0, dword ptr [rcx+r8+3Ch]
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, dword ptr [rcx+r8+3Ch]
    vmovss  dword ptr [rbp+0], xmm3
    vmovss  xmm0, dword ptr [rdx+r8+0E8h]
    vsubss  xmm1, xmm0, dword ptr [rcx+r8+40h]
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, dword ptr [rcx+r8+40h]
    vmovaps xmm6, [rsp+48h+var_18]
    vmovss  dword ptr [rbp+4], xmm3
  }
}

/*
==============
Com_CalcCSplineNextClosestPointOnSpline
==============
*/

void __fastcall Com_CalcCSplineNextClosestPointOnSpline(unsigned __int16 splineId, const vec3_t *position, double distance, unsigned __int16 splinePointIndex, float lambda, unsigned __int16 *out_splinePointIndex, float *out_lambda)
{
  unsigned __int16 v17; 
  char v20; 
  char v22; 
  bool v23; 
  bool v29; 
  int v30; 
  char v35; 
  vec3_t out_position; 
  char v59; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps [rsp+0E8h+var_88], xmm10
    vmovaps [rsp+0E8h+var_98], xmm11
  }
  _R15 = out_lambda;
  __asm { vmovss  xmm7, [rsp+0E8h+lambda] }
  v17 = splinePointIndex;
  __asm { vmovaps xmm8, xmm2 }
  *(double *)&_XMM0 = Com_GetCSplinePointDistToNextPoint(splineId, splinePointIndex);
  __asm
  {
    vcomiss xmm0, cs:__real@3a83126f
    vmovaps xmm6, xmm0
  }
  if ( v20 | v22 )
  {
    v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 488, ASSERT_TYPE_ASSERT, "(distToNextNode > 0.001f)", (const char *)&queryFormat, "distToNextNode > EQUAL_EPSILON");
    v20 = 0;
    if ( v23 )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm11, xmm8, cs:__real@3dcccccd
    vdivss  xmm6, xmm11, xmm6
    vxorps  xmm9, xmm9, xmm9
    vcomiss xmm6, xmm9
  }
  if ( v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 491, ASSERT_TYPE_ASSERT, "(deltaLambda >= 0.f)", (const char *)&queryFormat, "deltaLambda >= 0.f") )
    __debugbreak();
  __asm
  {
    vmovss  xmm10, cs:__real@7f7fffff
    vmovss  xmm8, cs:__real@3f800000
  }
  v29 = 1;
  v30 = 0;
  while ( 1 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, esi
      vmulss  xmm1, xmm0, xmm6
      vaddss  xmm7, xmm7, xmm1
      vcomiss xmm7, xmm8
    }
    if ( !v29 )
      break;
LABEL_17:
    __asm
    {
      vmaxss  xmm0, xmm7, xmm9
      vminss  xmm7, xmm0, xmm8
      vmovaps xmm2, xmm7; lambda
    }
    Com_CalcCSplinePosition(splineId, v17, *(float *)&_XMM2, &out_position);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0E8h+out_position]
      vsubss  xmm3, xmm0, dword ptr [r12]
      vmovss  xmm1, dword ptr [rsp+0E8h+out_position+4]
      vmovss  xmm0, dword ptr [rsp+0E8h+out_position+8]
      vsubss  xmm2, xmm1, dword ptr [r12+4]
      vsubss  xmm4, xmm0, dword ptr [r12+8]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm5, xmm3, xmm0
      vcomiss xmm5, xmm10
    }
    if ( v20 )
    {
      *out_splinePointIndex = v17;
      __asm
      {
        vmovss  dword ptr [r15], xmm7
        vmovaps xmm10, xmm5
      }
    }
    v29 = (unsigned int)++v30 <= 0xA;
    if ( v30 >= 10 )
      goto LABEL_20;
  }
  ++v17;
  if ( (unsigned __int16)(splineId - 1) >= cm.mapEnts->splineList.splineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 17, ASSERT_TYPE_ASSERT, "(splineIndex < Com_GetCSplineCount())", (const char *)&queryFormat, "splineIndex < Com_GetCSplineCount()") )
    __debugbreak();
  if ( v17 < cm.mapEnts->splineList.splines[(unsigned __int16)(splineId - 1)].splinePointCount - 1 )
  {
    Com_GetCSplinePointDistToNextPoint(splineId, v17);
    __asm
    {
      vdivss  xmm6, xmm11, xmm0
      vcomiss xmm6, xmm8
      vmovaps xmm7, xmm6
    }
    if ( !(v35 | v22) )
      goto LABEL_23;
    __asm { vcomiss xmm6, xmm9 }
    if ( v35 )
    {
LABEL_23:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 508, ASSERT_TYPE_ASSERT, "(testLambda <= 1.0f && testLambda >= 0.f)", (const char *)&queryFormat, "testLambda <= 1.0f && testLambda >= 0.f") )
        __debugbreak();
    }
    goto LABEL_17;
  }
LABEL_20:
  _R11 = &v59;
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
Com_CalcCSplinePointAlongSpline
==============
*/

bool __fastcall Com_CalcCSplinePointAlongSpline(unsigned __int16 splineId, double distance, unsigned __int16 splinePointIndex, double lambda, unsigned __int16 *out_splinePointIndex, float *out_lambda)
{
  unsigned __int16 v16; 
  unsigned __int16 splinePointCount; 
  char v24; 
  char v25; 
  bool result; 
  unsigned __int16 v28; 
  int v32; 
  unsigned __int16 v33; 
  char v45; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm1
  }
  if ( splineId > cm.mapEnts->splineList.splineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 313, ASSERT_TYPE_ASSERT, "((splineId - 1) < Com_GetCSplineCount())", (const char *)&queryFormat, "(splineId - 1) < Com_GetCSplineCount()") )
    __debugbreak();
  v16 = splineId - 1;
  if ( (unsigned __int16)(splineId - 1) >= cm.mapEnts->splineList.splineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 17, ASSERT_TYPE_ASSERT, "(splineIndex < Com_GetCSplineCount())", (const char *)&queryFormat, "splineIndex < Com_GetCSplineCount()") )
    __debugbreak();
  if ( splinePointIndex >= cm.mapEnts->splineList.splines[v16].splinePointCount - 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 314, ASSERT_TYPE_ASSERT, "(splinePointIndex < Com_GetCSplinePointCount( splineId )-1)", (const char *)&queryFormat, "splinePointIndex < Com_GetCSplinePointCount( splineId )-1") )
    __debugbreak();
  *out_splinePointIndex = splinePointIndex;
  _RDI = out_lambda;
  __asm { vmovss  dword ptr [rdi], xmm6 }
  *(double *)&_XMM0 = Com_GetCSplinePointDistToNextPoint(splineId, *out_splinePointIndex);
  __asm
  {
    vmovaps xmm9, xmm0
    vdivss  xmm6, xmm7, xmm0
  }
  if ( v16 >= cm.mapEnts->splineList.splineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 17, ASSERT_TYPE_ASSERT, "(splineIndex < Com_GetCSplineCount())", (const char *)&queryFormat, "splineIndex < Com_GetCSplineCount()") )
    __debugbreak();
  __asm
  {
    vmovss  xmm1, dword ptr [rdi]
    vmovss  xmm7, cs:__real@3f800000
    vxorps  xmm8, xmm8, xmm8
  }
  splinePointCount = cm.mapEnts->splineList.splines[v16].splinePointCount;
  v24 = 0;
  v25 = 1;
  while ( 1 )
  {
    do
    {
      while ( 1 )
      {
        __asm
        {
          vaddss  xmm0, xmm1, xmm6
          vcomiss xmm0, xmm7
        }
        if ( !(v24 | v25) )
          break;
        __asm { vcomiss xmm0, xmm8 }
        if ( !v24 )
        {
          __asm { vmovss  dword ptr [rdi], xmm0 }
          result = 1;
          goto LABEL_26;
        }
LABEL_18:
        v28 = *out_splinePointIndex;
        if ( !*out_splinePointIndex )
        {
          *out_splinePointIndex = 0;
          goto LABEL_25;
        }
        *out_splinePointIndex = v28 - 1;
        __asm { vmulss  xmm6, xmm0, xmm9 }
        *(double *)&_XMM0 = Com_GetCSplinePointDistToNextPoint(splineId, v28 - 1);
        __asm
        {
          vmovaps xmm9, xmm0
          vdivss  xmm6, xmm6, xmm0
          vmovaps xmm1, xmm7
        }
        *out_lambda = 1.0;
      }
      __asm { vcomiss xmm0, xmm8 }
      if ( v24 )
        goto LABEL_18;
      __asm { vcomiss xmm0, xmm7 }
    }
    while ( v24 | v25 );
    v32 = *out_splinePointIndex;
    if ( v32 >= splinePointCount - 2 )
      break;
    v33 = v32 + 1;
    *out_splinePointIndex = v33;
    __asm
    {
      vsubss  xmm0, xmm0, xmm7
      vmulss  xmm6, xmm0, xmm9
    }
    *(double *)&_XMM0 = Com_GetCSplinePointDistToNextPoint(splineId, v33);
    __asm
    {
      vmovaps xmm9, xmm0
      vdivss  xmm6, xmm6, xmm0
      vmovaps xmm1, xmm8
    }
    *out_lambda = 0.0;
  }
  *out_splinePointIndex = splinePointCount - 1;
LABEL_25:
  result = 0;
  *out_lambda = 0.0;
LABEL_26:
  __asm { vmovaps xmm6, [rsp+88h+var_28] }
  _R11 = &v45;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm7, [rsp+88h+var_38]
  }
  return result;
}

/*
==============
Com_CalcCSplinePointAtDistFromEnd
==============
*/

bool __fastcall Com_CalcCSplinePointAtDistFromEnd(unsigned __int16 splineId, double distance, unsigned __int16 *out_splinePointIndex, float *out_lambda)
{
  unsigned __int16 CSplinePointCount; 
  bool v15; 
  unsigned __int16 v16; 
  bool result; 
  char v20; 
  bool v21; 
  char v35; 

  __asm { vmovaps [rsp+98h+var_28], xmm6 }
  _RDI = out_lambda;
  __asm
  {
    vmovaps [rsp+98h+var_48], xmm8
    vmovaps xmm8, xmm1
  }
  if ( !out_splinePointIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 378, ASSERT_TYPE_ASSERT, "(out_splinePointIndex != 0)", (const char *)&queryFormat, "out_splinePointIndex != NULL") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 379, ASSERT_TYPE_ASSERT, "(out_lambda != 0)", (const char *)&queryFormat, "out_lambda != NULL") )
    __debugbreak();
  CSplinePointCount = Com_GetCSplinePointCount(splineId);
  if ( CSplinePointCount < 2u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 382, ASSERT_TYPE_ASSERT, "(splinePointIndex >= 2)", (const char *)&queryFormat, "splinePointIndex >= 2") )
    __debugbreak();
  v15 = CSplinePointCount != 0 || CSplinePointCount == 1;
  v16 = CSplinePointCount - 1;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm8, xmm6
  }
  if ( v15 )
  {
    result = 1;
    *out_splinePointIndex = v16 - 1;
    *_RDI = 1.0;
  }
  else
  {
    __asm
    {
      vmovaps [rsp+98h+var_38], xmm7
      vxorps  xmm7, xmm7, xmm7
    }
    while ( 1 )
    {
      v20 = 0;
      v21 = v16 == 0;
      if ( !v16 )
        break;
      *(double *)&_XMM0 = Com_GetCSplinePointDistToNextPoint(splineId, --v16);
      __asm
      {
        vaddss  xmm6, xmm6, xmm0
        vcomiss xmm6, xmm8
        vmovaps xmm7, xmm0
      }
      if ( !v20 )
        goto LABEL_15;
    }
    __asm { vcomiss xmm6, xmm8 }
LABEL_15:
    __asm
    {
      vcomiss xmm7, cs:__real@3a83126f
      vmovaps [rsp+98h+var_58], xmm9
      vmovaps [rsp+98h+var_68], xmm10
    }
    if ( v20 | v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 411, ASSERT_TYPE_ASSERT, "(splineSegmentDist > 0.001f)", (const char *)&queryFormat, "splineSegmentDist > EQUAL_EPSILON") )
      __debugbreak();
    __asm { vmovaps xmm10, [rsp+98h+var_68] }
    result = 1;
    __asm
    {
      vmovaps xmm9, [rsp+98h+var_58]
      vsubss  xmm0, xmm6, xmm8
      vdivss  xmm1, xmm0, xmm7
      vmovss  dword ptr [rdi], xmm1
    }
    *out_splinePointIndex = v16;
    __asm { vmovaps xmm7, [rsp+98h+var_38] }
  }
  __asm { vmovaps xmm6, [rsp+98h+var_28] }
  _R11 = &v35;
  __asm { vmovaps xmm8, xmmword ptr [r11-30h] }
  return result;
}

/*
==============
Com_CalcCSplinePosition
==============
*/

void __fastcall Com_CalcCSplinePosition(unsigned __int16 splineId, unsigned __int16 splinePointIndex, double lambda, vec3_t *out_position)
{
  unsigned __int16 v7; 
  __int64 v11; 
  int v12; 
  bool v13; 
  bool v14; 
  bool v15; 

  v7 = splineId - 1;
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
  }
  _RSI = out_position;
  __asm { vmovaps xmm7, xmm2 }
  if ( (unsigned __int16)(splineId - 1) >= cm.mapEnts->splineList.splineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 218, ASSERT_TYPE_ASSERT, "(splineIndex < Com_GetCSplineCount())", (const char *)&queryFormat, "splineIndex < Com_GetCSplineCount()") )
    __debugbreak();
  if ( v7 >= cm.mapEnts->splineList.splineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 17, ASSERT_TYPE_ASSERT, "(splineIndex < Com_GetCSplineCount())", (const char *)&queryFormat, "splineIndex < Com_GetCSplineCount()") )
    __debugbreak();
  v11 = v7;
  v12 = cm.mapEnts->splineList.splines[v11].splinePointCount - 1;
  v13 = splinePointIndex < (unsigned int)v12;
  v14 = splinePointIndex <= (unsigned int)v12;
  if ( splinePointIndex >= v12 )
  {
    v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 219, ASSERT_TYPE_ASSERT, "(splinePointIndex < Com_GetCSplinePointCount( splineId )-1)", (const char *)&queryFormat, "splinePointIndex < Com_GetCSplinePointCount( splineId )-1");
    v13 = 0;
    v14 = !v15;
    if ( v15 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm7, xmm0
  }
  if ( v13 )
    goto LABEL_17;
  __asm { vcomiss xmm7, cs:__real@3f800000 }
  if ( !v14 )
  {
LABEL_17:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 220, ASSERT_TYPE_ASSERT, "(lambda >=0.f && lambda <= 1.f)", (const char *)&queryFormat, "lambda >=0.f && lambda <= 1.f") )
      __debugbreak();
  }
  _RDX = 168i64 * splinePointIndex;
  __asm { vmulss  xmm5, xmm7, xmm7 }
  _RAX = cm.mapEnts->splineList.splines[v11].splinePoints;
  __asm
  {
    vmovss  xmm1, dword ptr [rax+rdx+78h]
    vmovss  dword ptr [rsi], xmm1
    vmovss  xmm2, dword ptr [rax+rdx+7Ch]
    vmovss  dword ptr [rsi+4], xmm2
    vmovss  xmm3, dword ptr [rax+rdx+80h]
    vmovss  dword ptr [rsi+8], xmm3
    vmulss  xmm0, xmm7, dword ptr [rax+rdx+6Ch]
    vaddss  xmm4, xmm0, xmm1
    vmovss  dword ptr [rsi], xmm4
    vmulss  xmm0, xmm7, dword ptr [rax+rdx+70h]
    vaddss  xmm1, xmm0, xmm2
    vmovss  dword ptr [rsi+4], xmm1
    vmulss  xmm0, xmm7, dword ptr [rax+rdx+74h]
    vaddss  xmm2, xmm0, xmm3
    vmovss  dword ptr [rsi+8], xmm2
    vmulss  xmm0, xmm5, dword ptr [rax+rdx+60h]
    vaddss  xmm3, xmm0, xmm4
    vmovss  dword ptr [rsi], xmm3
    vmulss  xmm0, xmm5, dword ptr [rax+rdx+64h]
    vaddss  xmm4, xmm0, xmm1
    vmovss  dword ptr [rsi+4], xmm4
    vmulss  xmm0, xmm5, dword ptr [rax+rdx+68h]
    vaddss  xmm6, xmm0, xmm2
    vmovss  dword ptr [rsi+8], xmm6
    vmulss  xmm2, xmm5, xmm7
    vmovaps xmm7, [rsp+58h+var_28]
    vmulss  xmm0, xmm2, dword ptr [rax+rdx+54h]
    vaddss  xmm1, xmm0, xmm3
    vmovss  dword ptr [rsi], xmm1
    vmulss  xmm0, xmm2, dword ptr [rax+rdx+58h]
    vaddss  xmm1, xmm0, xmm4
    vmovss  dword ptr [rsi+4], xmm1
    vmulss  xmm0, xmm2, dword ptr [rax+rdx+5Ch]
    vaddss  xmm1, xmm0, xmm6
    vmovaps xmm6, [rsp+58h+var_18]
    vmovss  dword ptr [rsi+8], xmm1
  }
}

/*
==============
Com_CalcCSplineTangent
==============
*/

void __fastcall Com_CalcCSplineTangent(unsigned __int16 splineId, unsigned __int16 splinePointIndex, double lambda, vec3_t *out_tangent)
{
  unsigned __int16 v6; 
  __int64 v10; 
  int v11; 
  bool v12; 
  bool v13; 
  bool v14; 

  v6 = splineId - 1;
  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RSI = out_tangent;
  __asm { vmovaps xmm6, xmm2 }
  if ( (unsigned __int16)(splineId - 1) >= cm.mapEnts->splineList.splineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 242, ASSERT_TYPE_ASSERT, "(splineIndex < Com_GetCSplineCount())", (const char *)&queryFormat, "splineIndex < Com_GetCSplineCount()") )
    __debugbreak();
  if ( v6 >= cm.mapEnts->splineList.splineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 17, ASSERT_TYPE_ASSERT, "(splineIndex < Com_GetCSplineCount())", (const char *)&queryFormat, "splineIndex < Com_GetCSplineCount()") )
    __debugbreak();
  v10 = v6;
  v11 = cm.mapEnts->splineList.splines[v10].splinePointCount - 1;
  v12 = splinePointIndex < (unsigned int)v11;
  v13 = splinePointIndex <= (unsigned int)v11;
  if ( splinePointIndex >= v11 )
  {
    v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 243, ASSERT_TYPE_ASSERT, "(splinePointIndex < Com_GetCSplinePointCount( splineId )-1)", (const char *)&queryFormat, "splinePointIndex < Com_GetCSplinePointCount( splineId )-1");
    v12 = 0;
    v13 = !v14;
    if ( v14 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  if ( v12 )
    goto LABEL_17;
  __asm { vcomiss xmm6, cs:__real@3f800000 }
  if ( !v13 )
  {
LABEL_17:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 244, ASSERT_TYPE_ASSERT, "(lambda >=0.f && lambda <= 1.f)", (const char *)&queryFormat, "lambda >=0.f && lambda <= 1.f") )
      __debugbreak();
  }
  _RDX = 168i64 * splinePointIndex;
  _RAX = cm.mapEnts->splineList.splines[v10].splinePoints;
  __asm
  {
    vmovss  xmm1, dword ptr [rax+rdx+9Ch]
    vmovss  dword ptr [rsi], xmm1
    vmovss  xmm2, dword ptr [rax+rdx+0A0h]
    vmovss  dword ptr [rsi+4], xmm2
    vmovss  xmm3, dword ptr [rax+rdx+0A4h]
    vmovss  dword ptr [rsi+8], xmm3
    vmulss  xmm0, xmm6, dword ptr [rax+rdx+90h]
    vaddss  xmm4, xmm0, xmm1
    vmovss  dword ptr [rsi], xmm4
    vmulss  xmm0, xmm6, dword ptr [rax+rdx+94h]
    vaddss  xmm5, xmm0, xmm2
    vmovss  dword ptr [rsi+4], xmm5
    vmulss  xmm0, xmm6, dword ptr [rax+rdx+98h]
    vaddss  xmm3, xmm0, xmm3
    vmovss  dword ptr [rsi+8], xmm3
    vmulss  xmm2, xmm6, xmm6
    vmovaps xmm6, [rsp+48h+var_18]
    vmulss  xmm0, xmm2, dword ptr [rax+rdx+84h]
    vaddss  xmm1, xmm0, xmm4
    vmovss  dword ptr [rsi], xmm1
    vmulss  xmm0, xmm2, dword ptr [rax+rdx+88h]
    vaddss  xmm1, xmm0, xmm5
    vmovss  dword ptr [rsi+4], xmm1
    vmulss  xmm0, xmm2, dword ptr [rax+rdx+8Ch]
    vaddss  xmm1, xmm0, xmm3
    vmovss  dword ptr [rsi+8], xmm1
  }
}

/*
==============
Com_CalcCSplineThrottle
==============
*/

float __fastcall Com_CalcCSplineThrottle(unsigned __int16 splineId, unsigned __int16 splinePointIndex, double lambda)
{
  unsigned __int16 v6; 
  int v9; 
  bool v10; 
  bool v11; 
  bool v12; 

  v6 = splineId - 1;
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
    vmovaps xmm6, xmm2
  }
  if ( (unsigned __int16)(splineId - 1) >= cm.mapEnts->splineList.splineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 273, ASSERT_TYPE_ASSERT, "(splineIndex < Com_GetCSplineCount())", (const char *)&queryFormat, "splineIndex < Com_GetCSplineCount()") )
    __debugbreak();
  if ( v6 >= cm.mapEnts->splineList.splineCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 17, ASSERT_TYPE_ASSERT, "(splineIndex < Com_GetCSplineCount())", (const char *)&queryFormat, "splineIndex < Com_GetCSplineCount()") )
    __debugbreak();
  v9 = cm.mapEnts->splineList.splines[v6].splinePointCount - 1;
  v10 = splinePointIndex < (unsigned int)v9;
  v11 = splinePointIndex <= (unsigned int)v9;
  if ( splinePointIndex >= v9 )
  {
    v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 274, ASSERT_TYPE_ASSERT, "(splinePointIndex < Com_GetCSplinePointCount( splineId )-1)", (const char *)&queryFormat, "splinePointIndex < Com_GetCSplinePointCount( splineId )-1");
    v10 = 0;
    v11 = !v12;
    if ( v12 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  if ( v10 )
    goto LABEL_18;
  __asm { vcomiss xmm6, xmm7 }
  if ( !v11 )
  {
LABEL_18:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_cspline.cpp", 275, ASSERT_TYPE_ASSERT, "(lambda >=0.f && lambda <= 1.f)", (const char *)&queryFormat, "lambda >=0.f && lambda <= 1.f") )
      __debugbreak();
  }
  __asm
  {
    vsubss  xmm0, xmm7, xmm6
    vmovaps xmm7, [rsp+58h+var_28]
    vmulss  xmm1, xmm0, dword ptr [rcx+rdx+38h]
    vmulss  xmm0, xmm6, dword ptr [rcx+rdx+0E0h]
    vmovaps xmm6, [rsp+58h+var_18]
    vaddss  xmm0, xmm1, xmm0
  }
  return *(float *)&_XMM0;
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
  _RDX = 2i64 * v1;
  _RCX = cm.mapEnts->splineList.splines;
  __asm { vmovss  xmm0, dword ptr [rcx+rdx*8+4] }
  return *(float *)&_XMM0;
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
  _RCX = 168i64 * splinePointIndex;
  _RAX = cm.mapEnts->splineList.splines[v4].splinePoints;
  __asm { vmovss  xmm0, dword ptr [rax+rcx+50h] }
  return *(float *)&_XMM0;
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
  _RCX = 168i64 * splinePointIndex;
  _RAX = cm.mapEnts->splineList.splines[v4].splinePoints;
  __asm { vmovss  xmm0, dword ptr [rax+rcx+1Ch] }
  return *(float *)&_XMM0;
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
  _RCX = 168i64 * splinePointIndex;
  _RAX = cm.mapEnts->splineList.splines[v4].splinePoints;
  __asm { vmovss  xmm0, dword ptr [rax+rcx+18h] }
  return *(float *)&_XMM0;
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
  _RCX = 168i64 * splinePointIndex;
  _RAX = cm.mapEnts->splineList.splines[v4].splinePoints;
  __asm { vmovss  xmm0, dword ptr [rax+rcx+38h] }
  return *(float *)&_XMM0;
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

