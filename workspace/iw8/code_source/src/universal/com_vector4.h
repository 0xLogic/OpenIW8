/*
==============
Float4PointLineSegmentDistSq
==============
*/

double __fastcall Float4PointLineSegmentDistSq(const float4 *lineSegPointA, const float4 *lineSegPointB, const float4 *point, float4 *outSegClosestFraction)
{
  double result; 

  *(float *)&result = ?Float4PointLineSegmentDistSq@@YAMAEBUfloat4@@00AEAU1@@Z(lineSegPointA, lineSegPointB, point, outSegClosestFraction);
  return result;
}

/*
==============
Float4IntegrateDampedSpring
==============
*/

void __fastcall Float4IntegrateDampedSpring(const float4 *timestepSec, const float4 *mass, const float4 *springConstant, const float4 *damperConstant, const float4 *anchorPos, const float4 *anchorVelocity, float4 *inOutMassPos, float4 *inOutMassVelocity)
{
  ?Float4IntegrateDampedSpring@@YAXAEBUfloat4@@00000AEAU1@1@Z(timestepSec, mass, springConstant, damperConstant, anchorPos, anchorVelocity, inOutMassPos, inOutMassVelocity);
}

/*
==============
Float3x3Inverse
==============
*/

void __fastcall Float3x3Inverse(const vector3 *in, vector3 *out)
{
  ?Float3x3Inverse@@YAXAEBUvector3@@AEAU1@@Z(in, out);
}

/*
==============
Float4PackNegUnitVec
==============
*/

PackedUnitVec __fastcall Float4PackNegUnitVec(const vec3_t *in)
{
  return ?Float4PackNegUnitVec@@YA?AUPackedUnitVec@@AEBTvec3_t@@@Z(in);
}

/*
==============
Float4PointLineSegmentDistSq
==============
*/
float Float4PointLineSegmentDistSq(const float4 *lineSegPointA, const float4 *lineSegPointB, const float4 *point, float4 *outSegClosestFraction)
{
  __m128 v4; 
  __m128 v5; 
  __m128 v7; 
  int v17; 
  __m128 v24; 
  __m128 v25; 
  float4 v31; 

  v4 = _mm128_mul_ps(_mm128_sub_ps(lineSegPointB->v, lineSegPointA->v), (__m128)_xmm);
  v5 = _mm128_add_ps(v4, lineSegPointA->v);
  _XMM1 = _mm128_mul_ps(v4, v4);
  v7 = _mm128_sub_ps(point->v, v5);
  __asm
  {
    vhaddps xmm0, xmm1, xmm1
    vhaddps xmm3, xmm0, xmm0
  }
  if ( _XMM3.m128_f32[0] > 0.0 )
  {
    _XMM0 = _mm128_mul_ps(v4, v7);
    __asm
    {
      vhaddps xmm1, xmm0, xmm0
      vhaddps xmm2, xmm1, xmm1
    }
    _XMM6 = _mm128_div_ps(_XMM2, _XMM3);
    __asm
    {
      vcmpneqps xmm0, xmm6, xmm6
      vmovmskps eax, xmm0
    }
    v31.v = _XMM6;
    if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4.h", 407, ASSERT_TYPE_SANITY, "( !Float4IsNaN( segHalfDirClosestFraction ) )", (const char *)&queryFormat, "!Float4IsNaN( segHalfDirClosestFraction )") )
      __debugbreak();
    Float4Clamp(lineSegPointA, lineSegPointB, point, &v31);
    v24 = _mm128_mul_ps(v4, v31.v);
    outSegClosestFraction->v = _mm128_add_ps(_mm128_mul_ps(g_oneHalf.v, v31.v), g_oneHalf.v);
    v25 = _mm128_sub_ps(point->v, _mm128_add_ps(v24, v5));
    _XMM0 = _mm128_mul_ps(v25, v25);
    __asm
    {
      vinsertps xmm1, xmm0, xmm0, 8
      vhaddps xmm2, xmm1, xmm1
      vhaddps xmm6, xmm2, xmm2
    }
    if ( *(float *)&_XMM6 < 0.0 )
    {
      __asm { vxorpd  xmm1, xmm1, xmm1 }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4.h", 423, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( distSquaredFloat )", "%s <= %s\n\t%g, %g", "0.0f", "distSquaredFloat", *(double *)&_XMM1, *(float *)&_XMM6) )
        __debugbreak();
    }
    if ( (_XMM6 & 0x7F800000) == 2139095040 )
    {
      v17 = 424;
LABEL_15:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4.h", v17, ASSERT_TYPE_SANITY, "( !IS_NAN( distSquaredFloat ) )", (const char *)&queryFormat, "!IS_NAN( distSquaredFloat )") )
        __debugbreak();
    }
  }
  else
  {
    _XMM1 = _mm128_sub_ps(lineSegPointA->v, point->v);
    _XMM2 = _mm128_mul_ps(_XMM1, _XMM1);
    __asm
    {
      vhaddps xmm0, xmm2, xmm2
      vhaddps xmm6, xmm0, xmm0
    }
    *outSegClosestFraction = 0i64;
    if ( *(float *)&_XMM6 < 0.0 )
    {
      __asm { vxorpd  xmm1, xmm1, xmm1 }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4.h", 397, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( distSquaredFloat )", "%s <= %s\n\t%g, %g", "0.0f", "distSquaredFloat", *(double *)&_XMM1, *(float *)&_XMM6) )
        __debugbreak();
    }
    if ( (_XMM6 & 0x7F800000) == 2139095040 )
    {
      v17 = 398;
      goto LABEL_15;
    }
  }
  return *(float *)&_XMM6;
}

/*
==============
Float3x3Inverse
==============
*/
void Float3x3Inverse(const vector3 *in, vector3 *out)
{
  float4 v2; 
  __m128 v3; 
  __m128 v4; 
  float4 v5; 
  __m128 v6; 
  __m128 v7; 
  float4 v8; 
  __m128 v9; 
  __m128 v10; 
  __m128 v11; 
  __m128 v17; 
  __m128 v18; 
  __m128 v19; 
  __m128 v20; 
  __m128 v21; 
  __m128 v22; 
  __m128 v23; 
  __m256i v24; 

  v2.v = (__m128)in->x;
  v3 = _mm_shuffle_ps(v2.v, v2.v, 201);
  v4 = _mm_shuffle_ps(v2.v, v2.v, 210);
  v5.v = (__m128)in->y;
  v6 = _mm_shuffle_ps(v5.v, v5.v, 201);
  v7 = _mm_shuffle_ps(v5.v, v5.v, 210);
  v8.v = (__m128)in->z;
  v9 = _mm_shuffle_ps(v8.v, v8.v, 201);
  v10 = _mm_shuffle_ps(v8.v, v8.v, 210);
  v11 = _mm128_sub_ps(_mm128_mul_ps(v6, v10), _mm128_mul_ps(v7, v9));
  _XMM1 = _mm128_mul_ps(v11, in->x.v);
  __asm
  {
    vinsertps xmm2, xmm1, xmm1, 8
    vhaddps xmm0, xmm2, xmm2
    vhaddps xmm3, xmm0, xmm0
    vrcpps  xmm1, xmm3
  }
  v17 = _mm128_sub_ps(_mm128_add_ps(_XMM1, _XMM1), _mm128_mul_ps(_mm128_mul_ps(_XMM1, _XMM1), _XMM3));
  v18 = _mm128_mul_ps(v11, v17);
  v19 = _mm128_mul_ps(v17, _mm128_sub_ps(_mm128_mul_ps(v4, v9), _mm128_mul_ps(v3, v10)));
  v20 = _mm128_mul_ps(v17, _mm128_sub_ps(_mm128_mul_ps(v3, v7), _mm128_mul_ps(v4, v6)));
  v21 = _mm_shuffle_ps(v20, g_one.v, 68);
  v22 = _mm_shuffle_ps(v18, v19, 68);
  *(__m128 *)v24.m256i_i8 = _mm_shuffle_ps(v22, v21, 136);
  v23 = _mm_shuffle_ps(v20, g_one.v, 238);
  *(__m128 *)&v24.m256i_u64[2] = _mm_shuffle_ps(v22, v21, 221);
  *(__m256i *)out->x.v.m128_f32 = v24;
  out->z.v = _mm_shuffle_ps(_mm_shuffle_ps(v18, v19, 238), v23, 136);
}

/*
==============
Float4IntegrateDampedSpring
==============
*/
void Float4IntegrateDampedSpring(const float4 *timestepSec, const float4 *mass, const float4 *springConstant, const float4 *damperConstant, const float4 *anchorPos, const float4 *anchorVelocity, float4 *inOutMassPos, float4 *inOutMassVelocity)
{
  __m128 v21; 
  __m128 v22; 

  _XMM6 = 0i64;
  __asm
  {
    vcmpltps xmm0, xmm6, xmmword ptr [rdx]
    vmovmskps eax, xmm0
  }
  if ( (_EAX & 0xF) != 15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4.h", 440, ASSERT_TYPE_ASSERT, "(!Float4AnyLe( mass, Float4Zero() ))", (const char *)&queryFormat, "!Float4AnyLe( mass, g_zero )") )
    __debugbreak();
  _XMM0 = springConstant->v;
  __asm
  {
    vcmpltps xmm0, xmm0, xmm6
    vmovmskps eax, xmm0
  }
  if ( (_EAX & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4.h", 441, ASSERT_TYPE_ASSERT, "(!Float4AnyLt( springConstant, Float4Zero() ))", (const char *)&queryFormat, "!Float4AnyLt( springConstant, g_zero )") )
    __debugbreak();
  _XMM0 = damperConstant->v;
  __asm
  {
    vcmpltps xmm0, xmm0, xmm6
    vmovmskps eax, xmm0
  }
  if ( (_EAX & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4.h", 442, ASSERT_TYPE_ASSERT, "(!Float4AnyLt( damperConstant, Float4Zero() ))", (const char *)&queryFormat, "!Float4AnyLt( damperConstant, g_zero )") )
    __debugbreak();
  v21 = _mm128_div_ps(springConstant->v, mass->v);
  v22 = _mm128_div_ps(damperConstant->v, mass->v);
  _XMM2.v = _mm128_div_ps(_mm128_add_ps(_mm128_mul_ps(_mm128_mul_ps(v22, timestepSec->v), anchorVelocity->v), _mm128_sub_ps(inOutMassVelocity->v, _mm128_mul_ps(_mm128_sub_ps(inOutMassPos->v, anchorPos->v), _mm128_mul_ps(v21, timestepSec->v)))), _mm128_add_ps(_mm128_mul_ps(v22, timestepSec->v), _mm128_add_ps(_mm128_mul_ps(v21, _mm128_mul_ps(timestepSec->v, timestepSec->v)), g_one.v)));
  __asm
  {
    vcmpneqps xmm0, xmm2, xmm2
    vmovmskps eax, xmm0
  }
  *inOutMassVelocity = (float4)_XMM2.v;
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4.h", 475, ASSERT_TYPE_SANITY, "( !Float4IsNaN( inOutMassVelocity ) )", (const char *)&queryFormat, "!Float4IsNaN( inOutMassVelocity )") )
    __debugbreak();
  _XMM2.v = _mm128_add_ps(_mm128_mul_ps(inOutMassVelocity->v, timestepSec->v), inOutMassPos->v);
  __asm
  {
    vcmpneqps xmm0, xmm2, xmm2
    vmovmskps eax, xmm0
  }
  *inOutMassPos = (float4)_XMM2.v;
  if ( _EAX )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector4.h", 477, ASSERT_TYPE_SANITY, "( !Float4IsNaN( inOutMassPos ) )", (const char *)&queryFormat, "!Float4IsNaN( inOutMassPos )") )
      __debugbreak();
  }
}

/*
==============
Float4PackNegUnitVec
==============
*/
__int64 Float4PackNegUnitVec(const vec3_t *in)
{
  __int128 v2; 
  __int128 v18; 

  HIDWORD(v18) = 0;
  v2 = v18;
  *(float *)&v2 = in->v[0];
  _XMM3 = v2;
  __asm
  {
    vinsertps xmm3, xmm3, dword ptr [rcx+4], 10h
    vinsertps xmm3, xmm3, dword ptr [rcx+8], 20h ; ' '
  }
  _XMM5 = _mm128_sub_ps((__m128)0i64, _XMM3);
  __asm
  {
    vmaxps  xmm0, xmm5, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
    vminps  xmm0, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
  }
  _XMM2 = _mm128_mul_ps(_mm128_add_ps(_XMM0, g_one.v), g_unpackMul1010102.v);
  __asm
  {
    vcvttps2dq xmm3, xmm2
    vpand   xmm4, xmm3, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
    vpshufd xmm0, xmm4, 0EEh ; 'î'
    vpor    xmm1, xmm0, xmm4
    vpshufd xmm0, xmm1, 55h ; 'U'
    vpor    xmm1, xmm0, xmm1
    vpor    xmm2, xmm1, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
    vblendps xmm0, xmm5, xmm2, 1
  }
  return (unsigned int)_XMM0;
}

