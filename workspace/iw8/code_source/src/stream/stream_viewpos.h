/*
==============
Stream_CalculateDistanceSq_ApplyZoomFactor
==============
*/

float __fastcall Stream_CalculateDistanceSq_ApplyZoomFactor(const float4 *minBound, const float4 *maxBound, float distanceSq, const float4 *pt, const float4 *viewPos, const float4 *viewDir, float zoomFactor, float cosFovLimit, float viewDistanceScaleSq)
{
  return ?Stream_CalculateDistanceSq_ApplyZoomFactor@@YAMUfloat4@@0M000MMM@Z(minBound, maxBound, distanceSq, pt, viewPos, viewDir, zoomFactor, cosFovLimit, viewDistanceScaleSq);
}

/*
==============
Stream_CalculateDistanceSq_Sphere
==============
*/

float __fastcall Stream_CalculateDistanceSq_Sphere(const vec3_t *sphereCenter, float sphereRadius, const float4 *viewPos, const float4 *viewDir, float zoomFactor, float cosFovLimit, float viewDistanceScaleSq)
{
  return ?Stream_CalculateDistanceSq_Sphere@@YAMAEBTvec3_t@@MUfloat4@@1MMM@Z(sphereCenter, sphereRadius, viewPos, viewDir, zoomFactor, cosFovLimit, viewDistanceScaleSq);
}

/*
==============
Stream_CalculateDistanceSq_ApplyZoomFactor
==============
*/
float Stream_CalculateDistanceSq_ApplyZoomFactor(const float4 *minBound, const float4 *maxBound, float distanceSq, const float4 *pt, const float4 *viewPos, const float4 *viewDir, float zoomFactor, float cosFovLimit, float viewDistanceScaleSq)
{
  const dvar_t *v10; 
  float v12; 
  __m128 v19; 
  __int128 v23; 
  float v27; 
  float v30; 
  float v31; 

  v10 = DCONST_DVARFLT_stream_minZoomFactorForViewDirectionRelativeCalculations;
  v12 = distanceSq;
  if ( !DCONST_DVARFLT_stream_minZoomFactorForViewDirectionRelativeCalculations && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_minZoomFactorForViewDirectionRelativeCalculations") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( zoomFactor <= v10->current.value )
    return distanceSq * viewDistanceScaleSq;
  if ( distanceSq <= 0.0 )
    return distanceSq * viewDistanceScaleSq;
  _XMM3 = _mm128_mul_ps(_mm128_sub_ps(_mm128_mul_ps(_mm128_add_ps(maxBound->v, minBound->v), (__m128)_xmm), viewPos->v), viewDir->v);
  __asm { vhaddps xmm0, xmm3, xmm3 }
  _XMM3 = maxBound->v;
  __asm { vhaddps xmm0, xmm0, xmm0 }
  _mm128_add_ps(_mm128_mul_ps(_XMM0, viewDir->v), viewPos->v);
  __asm
  {
    vminps  xmm3, xmm3, xmm2
    vmaxps  xmm5, xmm3, xmmword ptr [rsi]
  }
  v19 = _mm128_sub_ps(_XMM5, viewPos->v);
  _XMM0 = _mm128_mul_ps(v19, viewDir->v);
  __asm
  {
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm5, xmm1, xmm1
  }
  v23 = LODWORD(FLOAT_1_0);
  *(float *)&v23 = 1.0 - cosFovLimit;
  if ( *(float *)&_XMM5 > 0.0 )
  {
    _XMM0 = _mm128_mul_ps(v19, v19);
    __asm
    {
      vhaddps xmm1, xmm0, xmm0
      vhaddps xmm0, xmm1, xmm1
    }
    v27 = _mm_sqrt_ps(_XMM0).m128_f32[0];
    *(float *)&v23 = (float)(*(float *)&v23 * *(float *)&v23) * v12;
    _XMM1 = v23;
    __asm { vminss  xmm2, xmm1, xmm9 }
    v30 = (float)(*(float *)&_XMM2 * cosFovLimit) * v27;
    if ( *(float *)&_XMM5 > v30 )
    {
      v31 = (float)((float)(*(float *)&_XMM5 - v30) / (float)(v27 - v30)) * (float)((float)(*(float *)&_XMM5 - v30) / (float)(v27 - v30));
      v12 = v12 / (float)((float)((float)(v31 * zoomFactor) + (float)(1.0 - v31)) * (float)((float)(v31 * zoomFactor) + (float)(1.0 - v31)));
    }
  }
  return v12 * viewDistanceScaleSq;
}

/*
==============
Stream_CalculateDistanceSq_Sphere
==============
*/
float Stream_CalculateDistanceSq_Sphere(const vec3_t *sphereCenter, float sphereRadius, const float4 *viewPos, const float4 *viewDir, float zoomFactor, float cosFovLimit, float viewDistanceScaleSq)
{
  __int128 v9; 
  __m128 v12; 
  __m128 v17; 
  __m128 v18; 
  float v19; 
  float v20; 
  __m128 v21; 
  float v28; 
  float v29; 
  __int128 v31; 

  HIDWORD(v31) = 0;
  v9 = v31;
  *(float *)&v9 = sphereCenter->v[0];
  _XMM2 = v9;
  __asm
  {
    vinsertps xmm2, xmm2, dword ptr [rcx+4], 10h
    vinsertps xmm2, xmm2, dword ptr [rcx+8], 20h ; ' '
  }
  v12 = _mm128_sub_ps(_XMM2, viewPos->v);
  _XMM0 = _mm128_mul_ps(v12, v12);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
  }
  v17 = _mm_sqrt_ps(_XMM0);
  *(float *)&_XMM2 = v17.m128_f32[0] - sphereRadius;
  v17.m128_f32[0] = (float)(v17.m128_f32[0] - sphereRadius) / v17.m128_f32[0];
  v18 = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v17, v17, 0), v12), viewPos->v);
  v20 = *(float *)&_XMM2 * *(float *)&_XMM2;
  v19 = *(float *)&_XMM2 * *(float *)&_XMM2;
  if ( zoomFactor > 1.0 && v20 > 0.0 )
  {
    v21 = _mm128_sub_ps(v18, viewPos->v);
    _XMM0 = _mm128_mul_ps(v21, viewDir->v);
    __asm
    {
      vhaddps xmm1, xmm0, xmm0
      vhaddps xmm3, xmm1, xmm1
    }
    if ( *(float *)&_XMM3 > 0.0 )
    {
      _XMM0 = _mm128_mul_ps(v21, v21);
      __asm
      {
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm0, xmm1, xmm1
      }
      v28 = _mm_sqrt_ps(_XMM0).m128_f32[0];
      if ( *(float *)&_XMM3 > (float)(v28 * cosFovLimit) )
      {
        v29 = (float)((float)(*(float *)&_XMM3 - (float)(v28 * cosFovLimit)) / (float)(v28 - (float)(v28 * cosFovLimit))) * (float)((float)(*(float *)&_XMM3 - (float)(v28 * cosFovLimit)) / (float)(v28 - (float)(v28 * cosFovLimit)));
        v19 = v20 / (float)((float)((float)(v29 * zoomFactor) + (float)(1.0 - v29)) * (float)((float)(v29 * zoomFactor) + (float)(1.0 - v29)));
      }
    }
  }
  return v19 * viewDistanceScaleSq;
}

