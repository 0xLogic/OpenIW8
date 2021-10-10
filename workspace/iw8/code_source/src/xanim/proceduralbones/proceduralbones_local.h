/*
==============
XAnimBonePhysics_CalculateShortestRotationQuaternion
==============
*/

void __fastcall XAnimBonePhysics_CalculateShortestRotationQuaternion(const float4 *fromVector, const float4 *toVector, float4 *outQuat)
{
  ?XAnimBonePhysics_CalculateShortestRotationQuaternion@@YAXUfloat4@@0PEIAU1@@Z(fromVector, toVector, outQuat);
}

/*
==============
XAnimBonePhysics_CalculateShortestRotationQuaternion
==============
*/
void XAnimBonePhysics_CalculateShortestRotationQuaternion(const float4 *fromVector, const float4 *toVector, float4 *outQuat)
{
  __m128 v; 
  __m128 v16; 
  __m128 v17; 
  __m128 v18; 
  __m128 v19; 
  __m128 v29; 

  _XMM7 = g_one.v;
  _XMM1 = _mm128_mul_ps(toVector->v, fromVector->v);
  v = g_oneHalf.v;
  __asm
  {
    vinsertps xmm2, xmm1, xmm1, 8
    vhaddps xmm0, xmm2, xmm2
  }
  _mm128_sub_ps((__m128)0i64, g_one.v);
  __asm
  {
    vhaddps xmm10, xmm0, xmm0
    vcmpltps xmm0, xmm7, xmm6
    vmovmskps eax, xmm0
  }
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector4_sse.h", 2854, ASSERT_TYPE_SANITY, "( Float4AllLe( vmin, vmax ) )", (const char *)&queryFormat, "Float4AllLe( vmin, vmax )") )
    __debugbreak();
  __asm
  {
    vmaxps  xmm0, xmm10, xmm6
    vminps  xmm5, xmm0, xmm7
  }
  v16 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(fromVector->v, fromVector->v, 201), _mm_shuffle_ps(toVector->v, toVector->v, 210)), _mm128_mul_ps(_mm_shuffle_ps(fromVector->v, fromVector->v, 210), _mm_shuffle_ps(toVector->v, toVector->v, 201)));
  v17 = _mm128_mul_ps(_XMM5, v);
  v18 = _mm_sqrt_ps(_mm128_sub_ps(v, v17));
  v19 = _mm128_add_ps(v17, v);
  _XMM3 = _mm128_mul_ps(v16, v16);
  __asm
  {
    vhaddps xmm0, xmm3, xmm3
    vhaddps xmm0, xmm0, xmm0
  }
  _XMM2 = _mm128_div_ps(v16, _mm_sqrt_ps(_XMM0));
  __asm
  {
    vhaddps xmm0, xmm3, xmm3
    vhaddps xmm0, xmm0, xmm0
    vcmpeqps xmm0, xmm0, xmm8
    vblendps xmm1, xmm7, xmm8, 0Eh
    vblendvps xmm1, xmm2, xmm1, xmm0
  }
  v29 = _mm128_mul_ps(v18, _XMM1);
  outQuat->v = _mm_shuffle_ps(v29, _mm_shuffle_ps(v29, _mm_sqrt_ps(v19), 250), 132);
}

