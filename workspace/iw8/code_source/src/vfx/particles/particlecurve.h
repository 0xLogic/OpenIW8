/*
==============
Particle_GetCurveValueFloat4
==============
*/

float4 *__fastcall Particle_GetCurveValueFloat4(float4 *result, const ParticleCurveDef *pCurveList, float life)
{
  return ?Particle_GetCurveValueFloat4@@YA?AUfloat4@@PEBUParticleCurveDef@@M@Z(result, pCurveList, life);
}

/*
==============
Particle_GetCurveValueFloat4WithScale
==============
*/

float4 *__fastcall Particle_GetCurveValueFloat4WithScale(float4 *result, const ParticleCurveDef *pCurveList, float life, const float4 *scale)
{
  return ?Particle_GetCurveValueFloat4WithScale@@YA?AUfloat4@@PEBUParticleCurveDef@@MAEBU1@@Z(result, pCurveList, life, scale);
}

/*
==============
Particle_GetColorValueFromCurveList
==============
*/

void __fastcall Particle_GetColorValueFromCurveList(const ParticleCurveDef *pCurveList, const float time, float4 *outCurve)
{
  ?Particle_GetColorValueFromCurveList@@YAXPEBUParticleCurveDef@@MAEAUfloat4@@@Z(pCurveList, time, outCurve);
}

/*
==============
Particle_GetCurveValue
==============
*/

double __fastcall Particle_GetCurveValue(const ParticleCurveDef *rCurve, const float time)
{
  double result; 

  *(float *)&result = ?Particle_GetCurveValue@@YAMAEBUParticleCurveDef@@M@Z(rCurve, time);
  return result;
}

/*
==============
Particle_GetCurveValueFloatRandomize
==============
*/

double __fastcall Particle_GetCurveValueFloatRandomize(const ParticleCurveDef *rCurve1, const ParticleCurveDef *rCurve2, FxRandKey key, int seed, float life)
{
  double result; 

  *(float *)&result = ?Particle_GetCurveValueFloatRandomize@@YAMAEBUParticleCurveDef@@0W4FxRandKey@@HM@Z(rCurve1, rCurve2, key, seed, life);
  return result;
}

/*
==============
Particle_GetCurveValue
==============
*/
float Particle_GetCurveValue(const ParticleCurveDef *rCurve, const float time)
{
  __int64 numControlPoints; 
  __int64 v4; 
  ParticleCurveControlPointDef *controlPoints; 
  int v6; 
  int v7; 
  int v8; 
  bool v9; 
  float v11; 
  float *v12; 
  float *p_time; 

  if ( rCurve->numControlPoints < 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlecurve.h", 17, ASSERT_TYPE_ASSERT, "(rCurve.numControlPoints >= 2)", (const char *)&queryFormat, "rCurve.numControlPoints >= 2") )
    __debugbreak();
  numControlPoints = rCurve->numControlPoints;
  v4 = 0i64;
  controlPoints = rCurve->controlPoints;
  v6 = 0;
  if ( (int)numControlPoints <= 8 )
  {
    if ( numControlPoints < 4 )
    {
LABEL_31:
      if ( v4 < numControlPoints )
      {
        p_time = &controlPoints[v4].time;
        do
        {
          if ( time <= *p_time )
            break;
          ++v6;
          ++v4;
          p_time += 4;
        }
        while ( v4 < numControlPoints );
      }
    }
    else
    {
      v12 = &controlPoints[2].time;
      while ( time > *(v12 - 8) )
      {
        if ( time <= *(v12 - 4) )
        {
          ++v6;
          break;
        }
        if ( time <= *v12 )
        {
          v6 += 2;
          break;
        }
        if ( time <= v12[4] )
        {
          v6 += 3;
          break;
        }
        v6 += 4;
        v4 += 4i64;
        v12 += 16;
        if ( v4 >= numControlPoints - 3 )
          goto LABEL_31;
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
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlecurve.h", 47, ASSERT_TYPE_ASSERT, "(controlPointIndex <= numControlPoints)", (const char *)&queryFormat, "controlPointIndex <= numControlPoints") )
        __debugbreak();
      v9 = v6 == (_DWORD)numControlPoints;
    }
    if ( v9 )
      return controlPoints[numControlPoints - 1].value;
    if ( (v6 < 0 || v6 >= (int)numControlPoints) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlecurve.h", 53, ASSERT_TYPE_ASSERT, "(controlPointIndex >= 0 && controlPointIndex < numControlPoints)", (const char *)&queryFormat, "controlPointIndex >= 0 && controlPointIndex < numControlPoints") )
      __debugbreak();
  }
  if ( v6 <= 0 )
    return controlPoints->value;
  v11 = (float)(time - controlPoints[v6 - 1].time) * controlPoints[v6].invTimeDelta;
  return (float)((float)(1.0 - v11) * controlPoints[v6 - 1].value) + (float)(v11 * controlPoints[v6].value);
}

/*
==============
Particle_GetCurveValueFloat4
==============
*/
float4 *Particle_GetCurveValueFloat4(float4 *result, const ParticleCurveDef *pCurveList, float life)
{
  float4 *v5; 

  if ( !pCurveList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlecurve.h", 179, ASSERT_TYPE_ASSERT, "(pCurveList)", (const char *)&queryFormat, "pCurveList") )
    __debugbreak();
  Particle_GetCurveValue(pCurveList + 2, life);
  Particle_GetCurveValue(pCurveList + 1, life);
  Particle_GetCurveValue(pCurveList, life);
  v5 = result;
  _XMM1 = 0i64;
  __asm
  {
    vinsertps xmm1, xmm1, xmm0, 0
    vinsertps xmm1, xmm1, xmm6, 10h
    vinsertps xmm1, xmm1, xmm7, 20h ; ' '
  }
  *result = (float4)_XMM1.v;
  return v5;
}

/*
==============
Particle_GetColorValueFromCurveList
==============
*/

void __fastcall Particle_GetColorValueFromCurveList(const ParticleCurveDef *pCurveList, double time, float4 *outCurve)
{
  __int64 numControlPoints; 
  int v6; 
  ParticleCurveControlPointDef *controlPoints; 
  __int64 v8; 
  float *v9; 
  float *p_time; 
  __int64 v14; 
  __int64 v15; 
  __m128 v24; 

  if ( pCurveList->numControlPoints < 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlecurve.h", 87, ASSERT_TYPE_ASSERT, "(pCurveList[0].numControlPoints >= 2)", (const char *)&queryFormat, "pCurveList[0].numControlPoints >= 2") )
    __debugbreak();
  if ( pCurveList[1].numControlPoints < 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlecurve.h", 88, ASSERT_TYPE_ASSERT, "(pCurveList[1].numControlPoints >= 2)", (const char *)&queryFormat, "pCurveList[1].numControlPoints >= 2") )
    __debugbreak();
  if ( pCurveList[2].numControlPoints < 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlecurve.h", 89, ASSERT_TYPE_ASSERT, "(pCurveList[2].numControlPoints >= 2)", (const char *)&queryFormat, "pCurveList[2].numControlPoints >= 2") )
    __debugbreak();
  if ( pCurveList[3].numControlPoints < 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlecurve.h", 90, ASSERT_TYPE_ASSERT, "(pCurveList[3].numControlPoints >= 2)", (const char *)&queryFormat, "pCurveList[3].numControlPoints >= 2") )
    __debugbreak();
  Particle_GetCurveValue(pCurveList + 3, *(const float *)&time);
  numControlPoints = pCurveList->numControlPoints;
  v6 = 0;
  controlPoints = pCurveList->controlPoints;
  v8 = 0i64;
  if ( numControlPoints < 4 )
  {
LABEL_20:
    if ( v8 < numControlPoints )
    {
      p_time = &controlPoints[v8].time;
      do
      {
        if ( *(float *)&time <= *p_time )
          break;
        ++v6;
        ++v8;
        p_time += 4;
      }
      while ( v8 < numControlPoints );
    }
  }
  else
  {
    v9 = &controlPoints[2].time;
    while ( *(float *)&time > *(v9 - 8) )
    {
      if ( *(float *)&time <= *(v9 - 4) )
      {
        ++v6;
        break;
      }
      if ( *(float *)&time <= *v9 )
      {
        v6 += 2;
        break;
      }
      if ( *(float *)&time <= v9[4] )
      {
        v6 += 3;
        break;
      }
      v6 += 4;
      v8 += 4i64;
      v9 += 16;
      if ( v8 >= numControlPoints - 3 )
        goto LABEL_20;
    }
  }
  if ( v6 == (_DWORD)numControlPoints )
  {
    _XMM0 = LODWORD(controlPoints[v6 - 1].value);
    __asm
    {
      vinsertps xmm0, xmm0, dword ptr [rax+rcx*8-0Ch], 10h
      vinsertps xmm0, xmm0, dword ptr [r8+rcx*8-0Ch], 20h ; ' '
    }
  }
  else
  {
    if ( v6 > 0 )
    {
      v14 = v6;
      v15 = v6;
      v14 *= 2i64;
      _XMM4 = LODWORD(controlPoints[v15 - 1].value);
      __asm { vinsertps xmm4, xmm4, dword ptr [rax+rcx*8-0Ch], 10h }
      _XMM0 = *((unsigned int *)&controlPoints->value + 2 * v14);
      __asm
      {
        vinsertps xmm0, xmm0, dword ptr [rax+rdx*8+4], 10h
        vinsertps xmm0, xmm0, dword ptr [r8+rdx*8+4], 20h ; ' '
        vinsertps xmm4, xmm4, dword ptr [r8+rcx*8-0Ch], 20h ; ' '
        vinsertps xmm0, xmm0, xmm2, 30h ; '0'
        vinsertps xmm4, xmm4, xmm2, 30h ; '0'
      }
      v24 = *(__m128 *)&time;
      v24.m128_f32[0] = (float)(*(float *)&time - controlPoints[v15 - 1].time) / (float)(*(&controlPoints->time + 2 * v14) - controlPoints[v15 - 1].time);
      outCurve->v = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(_XMM0, _XMM4), _mm_shuffle_ps(v24, v24, 0)), _XMM4);
      return;
    }
    _XMM0 = LODWORD(controlPoints->value);
    __asm
    {
      vinsertps xmm0, xmm0, dword ptr [rax+4], 10h
      vinsertps xmm0, xmm0, dword ptr [r8+4], 20h ; ' '
    }
  }
  __asm { vinsertps xmm0, xmm0, xmm2, 30h ; '0' }
  *outCurve = (float4)_XMM0.v;
}

/*
==============
Particle_GetCurveValueFloat4WithScale
==============
*/
float4 *Particle_GetCurveValueFloat4WithScale(float4 *result, const ParticleCurveDef *pCurveList, float life, const float4 *scale)
{
  if ( !pCurveList )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlecurve.h", 194, ASSERT_TYPE_ASSERT, "(pCurveList)", (const char *)&queryFormat, "pCurveList") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlecurve.h", 179, ASSERT_TYPE_ASSERT, "(pCurveList)", (const char *)&queryFormat, "pCurveList") )
      __debugbreak();
  }
  Particle_GetCurveValue(pCurveList + 2, life);
  Particle_GetCurveValue(pCurveList + 1, life);
  Particle_GetCurveValue(pCurveList, life);
  _XMM1 = 0i64;
  __asm
  {
    vinsertps xmm1, xmm1, xmm0, 0
    vinsertps xmm1, xmm1, xmm6, 10h
    vinsertps xmm1, xmm1, xmm7, 20h ; ' '
  }
  *result = (float4)_XMM1.v;
  result->v = _mm128_mul_ps(_XMM1.v, scale->v);
  return result;
}

/*
==============
Particle_GetCurveValueFloatRandomize
==============
*/
float Particle_GetCurveValueFloatRandomize(const ParticleCurveDef *rCurve1, const ParticleCurveDef *rCurve2, FxRandKey key, int seed, float life)
{
  double CurveValue; 
  float v10; 
  double v11; 

  CurveValue = Particle_GetCurveValue(rCurve1, life);
  v10 = *(float *)&CurveValue * rCurve1->scale;
  v11 = Particle_GetCurveValue(rCurve2, life);
  return (float)((float)(1.0 - fx_randomTable[key + seed]) * v10) + (float)((float)(*(float *)&v11 * rCurve2->scale) * fx_randomTable[key + seed]);
}

