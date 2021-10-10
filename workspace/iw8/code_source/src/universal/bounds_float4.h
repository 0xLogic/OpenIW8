/*
==============
Float4Bounds_Transform
==============
*/

void __fastcall Float4Bounds_Transform(const Float4Bounds *baseBounds, const vec3_t *origin, const tmat33_t<vec3_t> *axis, Float4Bounds *rotatedBounds)
{
  ?Float4Bounds_Transform@@YAXPEBUFloat4Bounds@@AEBTvec3_t@@AEBT?$tmat33_t@Tvec3_t@@@@PEAU1@@Z(baseBounds, origin, axis, rotatedBounds);
}

/*
==============
Float4Bounds_Transform
==============
*/
void Float4Bounds_Transform(const Float4Bounds *baseBounds, const vec3_t *origin, const tmat33_t<vec3_t> *axis, Float4Bounds *rotatedBounds)
{
  __int128 v9; 
  __m128 v14; 
  __m128 v19; 
  __m128 v24; 
  __int128 v27; 
  __m128 v28; 
  __m128 v29; 
  __m128 v30; 

  _XMM1 = g_negativeZero.v;
  __asm
  {
    vbroadcastss xmm10, dword ptr [rcx+10h]
    vbroadcastss xmm9, dword ptr [rcx+14h]
    vbroadcastss xmm8, dword ptr [rcx+18h]
  }
  HIDWORD(v27) = 0;
  v9 = v27;
  *(float *)&v9 = axis->m[0].v[0];
  _XMM14 = v9;
  __asm
  {
    vinsertps xmm14, xmm14, dword ptr [r8+4], 10h
    vinsertps xmm14, xmm14, dword ptr [r8+8], 20h ; ' '
    vandnps xmm5, xmm1, xmm14
  }
  v28 = _XMM14;
  v28.m128_i32[3] = 0;
  v14 = v28;
  v14.m128_f32[0] = axis->m[1].v[0];
  _XMM13 = v14;
  __asm
  {
    vinsertps xmm13, xmm13, dword ptr [r8+10h], 10h
    vinsertps xmm13, xmm13, dword ptr [r8+14h], 20h ; ' '
    vandnps xmm6, xmm1, xmm13
  }
  v29 = _XMM13;
  v29.m128_i32[3] = 0;
  v19 = v29;
  v19.m128_f32[0] = axis->m[2].v[0];
  _XMM12 = v19;
  __asm
  {
    vinsertps xmm12, xmm12, dword ptr [r8+1Ch], 10h
    vinsertps xmm12, xmm12, dword ptr [r8+20h], 20h ; ' '
    vandnps xmm7, xmm1, xmm12
  }
  v30 = _XMM12;
  v30.m128_i32[3] = 0;
  v24 = v30;
  v24.m128_f32[0] = origin->v[0];
  _XMM11 = v24;
  __asm
  {
    vinsertps xmm11, xmm11, dword ptr [rdx+4], 10h
    vinsertps xmm11, xmm11, dword ptr [rdx+8], 20h ; ' '
  }
  rotatedBounds->midPoint.v = _mm128_add_ps(_mm128_mul_ps(_XMM14, _mm_shuffle_ps(baseBounds->midPoint.v, baseBounds->midPoint.v, 0)), _mm128_add_ps(_mm128_mul_ps(_XMM13, _mm_shuffle_ps(baseBounds->midPoint.v, baseBounds->midPoint.v, 85)), _mm128_add_ps(_mm128_mul_ps(_XMM12, _mm_shuffle_ps(baseBounds->midPoint.v, baseBounds->midPoint.v, 170)), _XMM11)));
  rotatedBounds->halfSize.v = _mm128_add_ps(_mm128_mul_ps(_XMM8, _XMM7), _mm128_add_ps(_mm128_mul_ps(_XMM9, _XMM6), _mm128_mul_ps(_XMM10, _XMM5)));
}

