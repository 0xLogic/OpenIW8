/*
==============
Float4UnpackFloat16_2
==============
*/

void __fastcall Float4UnpackFloat16_2(const unsigned int packed, vec2_t *result)
{
  ?Float4UnpackFloat16_2@@YQXIAEATvec2_t@@@Z(packed, result);
}

/*
==============
Float4x4LoadMat33Unaligned
==============
*/

void __fastcall Float4x4LoadMat33Unaligned(const tmat33_t<vec3_t> *base, vector4 *result)
{
  ?Float4x4LoadMat33Unaligned@@YQXAEBT?$tmat33_t@Tvec3_t@@@@AEAUvector4@@@Z(base, result);
}

/*
==============
Float4EvalCubicBezierSpline
==============
*/

void __fastcall Float4EvalCubicBezierSpline(float t, float4 *result, float4 *a3, float4 *a4, float4 *a5, float4 *a6)
{
  ?Float4EvalCubicBezierSpline@@YQXMUfloat4@@000AEAU1@@Z(t, result, a3, a4, a5, a6);
}

/*
==============
Float4x4LoadMat43
==============
*/

void __fastcall Float4x4LoadMat43(const tmat43_t<vec3_t> *base, vector4 *result)
{
  ?Float4x4LoadMat43@@YQXAEBT?$tmat43_t@Tvec3_t@@@@AEAUvector4@@@Z(base, result);
}

/*
==============
Float4PackNormPackedNrmTanBin
==============
*/

float4 *__fastcall Float4PackNormPackedNrmTanBin(float4 *result, const float4 *a2, const float4 *a3, const float4 *a4)
{
  return ?Float4PackNormPackedNrmTanBin@@YQ?AUfloat4@@U1@00@Z(result, a2, a3, a4);
}

/*
==============
Float4PackSelfVisX
==============
*/

void __fastcall Float4PackSelfVisX(const float4 *result, const float4 *a2, float4 *a3)
{
  ?Float4PackSelfVisX@@YQXUfloat4@@0AEAU1@@Z(result, a2, a3);
}

/*
==============
Float4UnpackFloat16_2
==============
*/
void Float4UnpackFloat16_2(const unsigned int packed, vec2_t *result)
{
  float v2; 
  float v3; 

  v2 = 0.0;
  if ( (_WORD)packed )
    LODWORD(v3) = ((packed & 0x8000) << 16) | (((((packed & 0x3FFF) << 14) - (~((unsigned __int16)packed << 14) & 0x10000000)) ^ 0x80000001) >> 1);
  else
    v3 = 0.0;
  result->v[0] = v3;
  if ( HIWORD(packed) )
    LODWORD(v2) = ((HIWORD(packed) & 0xFFFF8000) << 16) | (((((HIWORD(packed) & 0x3FFF) << 14) - (~(HIWORD(packed) << 14) & 0x10000000)) ^ 0x80000001) >> 1);
  result->v[1] = v2;
}

/*
==============
Float4PackNormPackedNrmTanBin
==============
*/
__m128 Float4PackNormPackedNrmTanBin(float4 *result, const float4 *a2, const float4 *a3, const float4 *a4)
{
  __m128 v4; 
  __m128 v5; 
  __m128 v6; 
  __int64 v8; 
  __m128 v9; 
  __m128 v10; 

  v8 = tls_index;
  v9 = v6;
  if ( __TSS0__1__Float4PackNormPackedNrmTanBin__YQ_AUfloat4__U2_00_Z_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
  {
    j__Init_thread_header(&__TSS0__1__Float4PackNormPackedNrmTanBin__YQ_AUfloat4__U2_00_Z_4HA);
    if ( __TSS0__1__Float4PackNormPackedNrmTanBin__YQ_AUfloat4__U2_00_Z_4HA == -1 )
    {
      `Float4PackNormPackedNrmTanBin'::`2'::cvScale.v = (__m128)_xmm;
      j__Init_thread_footer(&__TSS0__1__Float4PackNormPackedNrmTanBin__YQ_AUfloat4__U2_00_Z_4HA);
    }
  }
  if ( __TSS1__1__Float4PackNormPackedNrmTanBin__YQ_AUfloat4__U2_00_Z_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v8) + 1772i64) )
  {
    j__Init_thread_header(&__TSS1__1__Float4PackNormPackedNrmTanBin__YQ_AUfloat4__U2_00_Z_4HA);
    if ( __TSS1__1__Float4PackNormPackedNrmTanBin__YQ_AUfloat4__U2_00_Z_4HA == -1 )
    {
      `Float4PackNormPackedNrmTanBin'::`2'::cvPosOne.v = (__m128)_xmm;
      j__Init_thread_footer(&__TSS1__1__Float4PackNormPackedNrmTanBin__YQ_AUfloat4__U2_00_Z_4HA);
    }
  }
  v10 = _mm_shuffle_ps(v4, v5, 68);
  _XMM0 = _mm128_mul_ps(_mm128_add_ps(_mm_shuffle_ps(_mm_shuffle_ps(v4, v5, 238), v6, 168), `Float4PackNormPackedNrmTanBin'::`2'::cvPosOne.v), `Float4PackNormPackedNrmTanBin'::`2'::cvScale.v);
  __asm
  {
    vcvttps2dq xmm1, xmm0
    vpxor   xmm9, xmm9, xmm9
    vpmaxsd xmm2, xmm1, xmm9
    vpminsd xmm3, xmm2, xmm10
    vpslld  xmm0, xmm3, 14h
    vpor    xmm5, xmm0, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
  }
  _XMM0 = _mm128_mul_ps(_mm128_add_ps(_mm_shuffle_ps(v10, v9, 157), `Float4PackNormPackedNrmTanBin'::`2'::cvPosOne.v), `Float4PackNormPackedNrmTanBin'::`2'::cvScale.v);
  __asm
  {
    vcvttps2dq xmm3, xmm0
    vpmaxsd xmm1, xmm3, xmm9
    vpminsd xmm2, xmm1, xmm10
    vpslld  xmm4, xmm2, 0Ah
  }
  _XMM2 = _mm128_mul_ps(_mm128_add_ps(_mm_shuffle_ps(v10, v9, 136), `Float4PackNormPackedNrmTanBin'::`2'::cvPosOne.v), `Float4PackNormPackedNrmTanBin'::`2'::cvScale.v);
  __asm
  {
    vcvttps2dq xmm3, xmm2
    vpmaxsd xmm0, xmm3, xmm9
    vpminsd xmm1, xmm0, xmm10
    vpor    xmm2, xmm4, xmm1
    vpor    xmm0, xmm5, xmm2
  }
  return _XMM0;
}

/*
==============
Float4x4LoadMat43
==============
*/
void Float4x4LoadMat43(const tmat43_t<vec3_t> *base, vector4 *result)
{
  __int128 v3; 
  __m128 v7; 
  __m128 v11; 
  __m128 v15; 
  __int128 v18; 
  __m128 v; 
  __m128 v20; 
  __m128 v21; 

  HIDWORD(v18) = 0;
  v3 = v18;
  *(float *)&v3 = base->m[0].v[0];
  _XMM3 = v3;
  __asm
  {
    vinsertps xmm3, xmm3, dword ptr [rcx+4], 10h
    vinsertps xmm3, xmm3, dword ptr [rcx+8], 20h ; ' '
  }
  result->x = (float4)_XMM3.v;
  v = _XMM3.v;
  v.m128_i32[3] = 0;
  v7 = v;
  v7.m128_f32[0] = base->m[1].v[0];
  _XMM3 = v7;
  __asm
  {
    vinsertps xmm3, xmm3, dword ptr [rcx+10h], 10h
    vinsertps xmm3, xmm3, dword ptr [rcx+14h], 20h ; ' '
  }
  result->y = (float4)_XMM3.v;
  v20 = _XMM3.v;
  v20.m128_i32[3] = 0;
  v11 = v20;
  v11.m128_f32[0] = base->m[2].v[0];
  _XMM3 = v11;
  __asm
  {
    vinsertps xmm3, xmm3, dword ptr [rcx+1Ch], 10h
    vinsertps xmm3, xmm3, dword ptr [rcx+20h], 20h ; ' '
  }
  result->z = (float4)_XMM3.v;
  v21 = _XMM3.v;
  v21.m128_i32[3] = 0;
  v15 = v21;
  v15.m128_f32[0] = base->m[3].v[0];
  _XMM3 = v15;
  __asm
  {
    vinsertps xmm3, xmm3, dword ptr [rcx+28h], 10h
    vinsertps xmm3, xmm3, dword ptr [rcx+2Ch], 20h ; ' '
  }
  result->w = (float4)_XMM3.v;
  result->w = (float4)((*(_OWORD *)&_XMM3.v ^ *(_OWORD *)&g_one.v) & *(_OWORD *)&g_keepW.v ^ *(_OWORD *)&_XMM3.v);
}

/*
==============
Float4EvalCubicBezierSpline
==============
*/

void __fastcall Float4EvalCubicBezierSpline(double t, float4 *result, float4 *a3, float4 *a4, float4 *a5, float4 *a6)
{
  __m128 v6; 
  __m128 v7; 
  __m128 v8; 
  __m128 v9; 
  __m128 v10; 
  __m128 v11; 
  __m128 v12; 
  __m128 v13; 
  __m128 v14; 
  __m128 v15; 

  v11 = (__m128)LODWORD(FLOAT_1_0);
  v11.m128_f32[0] = 1.0 - *(float *)&t;
  v10 = v11;
  v13 = *(__m128 *)&t;
  v13.m128_f32[0] = *(float *)&t * *(float *)&t;
  v12 = v13;
  v14 = _mm_shuffle_ps(v10, v10, 0);
  v15 = _mm128_mul_ps(v14, v14);
  v13.m128_f32[0] = (float)(*(float *)&t * *(float *)&t) * *(float *)&t;
  a6->v = _mm128_add_ps(_mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm128_mul_ps(_mm_shuffle_ps(v12, v12, 0), v14), _mm128_mul_ps(v8, (__m128)_xmm)), _mm128_mul_ps(_mm_shuffle_ps(v13, v13, 0), v9)), _mm128_mul_ps(_mm128_mul_ps(_mm_shuffle_ps(*(__m128 *)&t, *(__m128 *)&t, 0), v15), _mm128_mul_ps(v7, (__m128)_xmm))), _mm128_mul_ps(_mm128_mul_ps(v15, v14), v6));
}

/*
==============
Float4PackSelfVisX
==============
*/
void Float4PackSelfVisX(const float4 *result, const float4 *a2, float4 *a3)
{
  __m128 v3; 
  __m128 v5; 
  __m128 v6; 
  __int128 v15; 
  __int128 v17; 

  _XMM11 = g_one.v;
  v5 = _mm_shuffle_ps(v3, v3, 85);
  v6 = _mm_shuffle_ps(v3, v3, 0);
  _XMM2 = _mm_shuffle_ps(v3, v3, 170);
  __asm { vcmpleps xmm10, xmm2, xmm12 }
  _XMM2 = _mm128_add_ps(_mm128_add_ps((__m128)(*(_OWORD *)&v5 & *(_OWORD *)&g_maskOffSignBit.v), (__m128)(*(_OWORD *)&_XMM2 & *(_OWORD *)&g_maskOffSignBit.v)), (__m128)(*(_OWORD *)&v6 & *(_OWORD *)&g_maskOffSignBit.v));
  __asm { vrcpps  xmm0, xmm2 }
  _XMM7 = _mm128_mul_ps(v6, _XMM0);
  _XMM9 = _mm128_mul_ps(v5, _XMM0);
  __asm
  {
    vcmpltps xmm6, xmm7, xmm12
    vcmpltps xmm0, xmm9, xmm12
  }
  v15 = _XMM0 & *(_OWORD *)&g_negativeOneXYZW.v;
  __asm { vandnps xmm0, xmm0, xmm11 }
  v17 = *(_OWORD *)&_mm128_mul_ps((__m128)(v15 | _XMM0), _mm128_sub_ps(g_one.v, (__m128)(*(_OWORD *)&g_maskOffSignBit.v & *(_OWORD *)&_XMM7))) & _XMM10;
  __asm
  {
    vandnps xmm0, xmm6, xmm11
    vandnps xmm1, xmm10, xmm7
  }
  _XMM3 = _mm128_add_ps(_mm128_mul_ps((__m128)(*(_OWORD *)&_mm128_mul_ps((__m128)(_XMM6 & *(_OWORD *)&g_negativeOneXYZW.v | _XMM0), _mm128_sub_ps(g_one.v, (__m128)(*(_OWORD *)&_XMM9 & *(_OWORD *)&g_maskOffSignBit.v))) & _XMM10 | _XMM1), g_oneHalf.v), g_oneHalf.v);
  __asm { vandnps xmm1, xmm10, xmm9 }
  _XMM4 = _mm128_add_ps(_mm128_mul_ps((__m128)(_XMM1 | v17), g_oneHalf.v), g_oneHalf.v);
  __asm
  {
    vcmpltps xmm0, xmm3, xmm12
    vandnps xmm6, xmm0, xmm3
    vcmpltps xmm0, xmm4, xmm12
    vandnps xmm3, xmm0, xmm4
    vcmpltps xmm2, xmm11, xmm3
    vandnps xmm1, xmm2, xmm3
  }
  _XMM0 = _mm128_add_ps(_mm128_mul_ps((__m128)(_XMM1 | _XMM2 & *(_OWORD *)&g_one.v), g_selfVisDirScale.v), g_oneHalf.v);
  __asm
  {
    vcvtps2dq xmm2, xmm0
    vpslld  xmm4, xmm2, 9
    vcmpltps xmm5, xmm11, xmm6
    vandnps xmm0, xmm5, xmm6
  }
  _XMM3 = _mm128_add_ps(_mm128_mul_ps((__m128)(_XMM5 & *(_OWORD *)&g_one.v | _XMM0), g_selfVisDirScale.v), g_oneHalf.v);
  __asm
  {
    vcvtps2dq xmm0, xmm3
    vpor    xmm1, xmm4, xmm0
  }
  _XMM0 = a3->v;
  __asm
  {
    vpor    xmm2, xmm1, xmm13
    vblendps xmm1, xmm0, xmm2, 1
  }
  *a3 = (float4)_XMM1.v;
}

/*
==============
Float4x4LoadMat33Unaligned
==============
*/
void Float4x4LoadMat33Unaligned(const tmat33_t<vec3_t> *base, vector4 *result)
{
  __int128 v3; 
  __m128 v7; 
  __m128 v11; 
  __int128 v14; 
  __m128 v; 
  __m128 v16; 

  HIDWORD(v14) = 0;
  v3 = v14;
  *(float *)&v3 = base->m[0].v[0];
  _XMM3 = v3;
  __asm
  {
    vinsertps xmm3, xmm3, dword ptr [rcx+4], 10h
    vinsertps xmm3, xmm3, dword ptr [rcx+8], 20h ; ' '
  }
  result->x = (float4)_XMM3.v;
  v = _XMM3.v;
  v.m128_i32[3] = 0;
  v7 = v;
  v7.m128_f32[0] = base->m[1].v[0];
  _XMM3 = v7;
  __asm
  {
    vinsertps xmm3, xmm3, dword ptr [rcx+10h], 10h
    vinsertps xmm3, xmm3, dword ptr [rcx+14h], 20h ; ' '
  }
  result->y = (float4)_XMM3.v;
  v16 = _XMM3.v;
  v16.m128_i32[3] = 0;
  v11 = v16;
  v11.m128_f32[0] = base->m[2].v[0];
  _XMM3 = v11;
  __asm
  {
    vinsertps xmm3, xmm3, dword ptr [rcx+1Ch], 10h
    vinsertps xmm3, xmm3, dword ptr [rcx+20h], 20h ; ' '
  }
  result->z = (float4)_XMM3.v;
  result->w = (float4)(*(_OWORD *)&g_one.v & *(_OWORD *)&g_keepW.v);
}

