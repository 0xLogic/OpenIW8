/*
==============
SND_DspClip
==============
*/

void __fastcall SND_DspClip(unsigned int count, float *c, float minimum, float maximum)
{
  ?SND_DspClip@@YAXIPEIAMMM@Z(count, c, minimum, maximum);
}

/*
==============
SND_DspInit
==============
*/

void SND_DspInit(void)
{
  ?SND_DspInit@@YAXXZ();
}

/*
==============
SND_DspFutzMono
==============
*/

void __fastcall SND_DspFutzMono(const SndDspFutzParam *param, SndDspFutzState *state, float rate, unsigned int count, float *input, float *tempa, float *tempb)
{
  ?SND_DspFutzMono@@YAXPEIBUSndDspFutzParam@@PEIAUSndDspFutzState@@MIPEIAM22@Z(param, state, rate, count, input, tempa, tempb);
}

/*
==============
SND_DspBiquadBpf
==============
*/

void __fastcall SND_DspBiquadBpf(float Fs, double Fhz, float q, SndDspBiQuadCoef *coef)
{
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  __int128 v9; 
  float v11; 
  float b[4]; 
  float a[4]; 

  if ( Fs <= 1000.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 203, ASSERT_TYPE_ASSERT, "(Fs > 1000)", (const char *)&queryFormat, "Fs > 1000") )
    __debugbreak();
  if ( Fs >= 100000.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 204, ASSERT_TYPE_ASSERT, "(Fs < 100000)", (const char *)&queryFormat, "Fs < 100000") )
    __debugbreak();
  v9 = *(_OWORD *)&Fhz;
  *(float *)&v9 = (float)(*(float *)&Fhz / Fs) * 2.0;
  _XMM6 = v9;
  if ( *(float *)&v9 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 208, ASSERT_TYPE_ASSERT, "(f0 >= 0.0f)", (const char *)&queryFormat, "f0 >= 0.0f") )
    __debugbreak();
  if ( (v9 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 209, ASSERT_TYPE_ASSERT, "(!IS_NAN( f0 ))", (const char *)&queryFormat, "!IS_NAN( f0 )") )
    __debugbreak();
  if ( q <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 210, ASSERT_TYPE_ASSERT, "(q > 0.0f)", (const char *)&queryFormat, "q > 0.0f") )
    __debugbreak();
  if ( q > 32.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 211, ASSERT_TYPE_ASSERT, "(q <= 32.0f)", (const char *)&queryFormat, "q <= 32.0f") )
    __debugbreak();
  if ( (LODWORD(q) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 212, ASSERT_TYPE_ASSERT, "(!IS_NAN( q ))", (const char *)&queryFormat, "!IS_NAN( q )") )
    __debugbreak();
  __asm { vmaxss  xmm0, xmm6, cs:__real@358637bd }
  *(double *)&_XMM0 = j___libm_sse2_sincosf_(v5, v4, v6, coef);
  v11 = *(float *)&_XMM0 * (float)(0.5 / q);
  LODWORD(b[2]) = LODWORD(v11) ^ _xmm;
  a[2] = 1.0 - v11;
  b[0] = v11;
  b[1] = 0.0;
  a[0] = v11 + 1.0;
  a[1] = _mm_shuffle_ps((__m128)(unsigned __int64)_XMM0, (__m128)(unsigned __int64)_XMM0, 1).m128_f32[0] * -2.0;
  SND_DspBiquadNormalize(a, b, coef);
}

/*
==============
SND_DspBiquadLShelve
==============
*/

void __fastcall SND_DspBiquadLShelve(float Fs, float db, double Fhz, float q, SndDspBiQuadCoef *coef)
{
  __int128 v6; 
  float v7; 
  float v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  double v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float b[4]; 
  float a[32]; 

  if ( Fs <= 1000.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 124, ASSERT_TYPE_ASSERT, "(Fs > 1000)", (const char *)&queryFormat, "Fs > 1000") )
    __debugbreak();
  if ( Fs >= 100000.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 125, ASSERT_TYPE_ASSERT, "(Fs < 100000)", (const char *)&queryFormat, "Fs < 100000") )
    __debugbreak();
  v6 = *(_OWORD *)&Fhz;
  *(float *)&v6 = (float)(*(float *)&Fhz / Fs) * 2.0;
  _XMM8 = v6;
  if ( *(float *)&v6 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 129, ASSERT_TYPE_ASSERT, "(f0 >= 0.0f)", (const char *)&queryFormat, "f0 >= 0.0f") )
    __debugbreak();
  if ( (v6 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 130, ASSERT_TYPE_ASSERT, "(!IS_NAN( f0 ))", (const char *)&queryFormat, "!IS_NAN( f0 )") )
    __debugbreak();
  if ( q <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 131, ASSERT_TYPE_ASSERT, "(q > 0.0f)", (const char *)&queryFormat, "q > 0.0f") )
    __debugbreak();
  if ( q >= 32.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 132, ASSERT_TYPE_ASSERT, "(q < 32.0f)", (const char *)&queryFormat, "q < 32.0f") )
    __debugbreak();
  if ( (LODWORD(q) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 133, ASSERT_TYPE_ASSERT, "(!IS_NAN( q ))", (const char *)&queryFormat, "!IS_NAN( q )") )
    __debugbreak();
  if ( db >= 50.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 134, ASSERT_TYPE_ASSERT, "(db < 50.0f)", (const char *)&queryFormat, "db < 50.0f") )
    __debugbreak();
  if ( db <= -1000.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 135, ASSERT_TYPE_ASSERT, "(db > -1000.0f)", (const char *)&queryFormat, "db > -1000.0f") )
    __debugbreak();
  if ( (LODWORD(db) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 136, ASSERT_TYPE_ASSERT, "(!IS_NAN( db ))", (const char *)&queryFormat, "!IS_NAN( db )") )
    __debugbreak();
  v7 = powf_0(10.0, db * 0.025);
  __asm { vmaxss  xmm1, xmm8, cs:__real@358637bd }
  v9 = v7;
  v14 = j___libm_sse2_sincosf_(v11, v10, v12, v13);
  v15 = _mm_shuffle_ps((__m128)*(unsigned __int64 *)&v14, (__m128)*(unsigned __int64 *)&v14, 1).m128_f32[0];
  v16 = (float)(v9 - 1.0) * v15;
  v17 = (float)((float)(*(float *)&v14 * (float)(0.5 / q)) * fsqrt(v9)) * 2.0;
  b[0] = (float)((float)((float)(v9 + 1.0) - v16) + v17) * v9;
  v18 = (float)(v9 + 1.0) * v15;
  b[1] = (float)((float)((float)(v9 - 1.0) - v18) * v9) * 2.0;
  b[2] = (float)((float)((float)(v9 + 1.0) - v16) - v17) * v9;
  a[0] = (float)(v16 + (float)(v9 + 1.0)) + v17;
  a[2] = (float)(v16 + (float)(v9 + 1.0)) - v17;
  a[1] = (float)((float)(v9 - 1.0) * -2.0) - (float)(v18 * 2.0);
  SND_DspBiquadNormalize(a, b, coef);
}

/*
==============
SND_DspBiquadNormalize
==============
*/
void SND_DspBiquadNormalize(float *a, float *b, SndDspBiQuadCoef *coef)
{
  float v6; 
  float v7; 
  float v8; 
  float v9; 

  if ( a == b && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 53, ASSERT_TYPE_ASSERT, "(a != b)", (const char *)&queryFormat, "a != b") )
    __debugbreak();
  if ( (*(_DWORD *)b & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 55, ASSERT_TYPE_ASSERT, "(!IS_NAN( b[0] ))", (const char *)&queryFormat, "!IS_NAN( b[0] )") )
    __debugbreak();
  if ( ((_DWORD)b[1] & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 56, ASSERT_TYPE_ASSERT, "(!IS_NAN( b[1] ))", (const char *)&queryFormat, "!IS_NAN( b[1] )") )
    __debugbreak();
  if ( ((_DWORD)b[2] & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 57, ASSERT_TYPE_ASSERT, "(!IS_NAN( b[2] ))", (const char *)&queryFormat, "!IS_NAN( b[2] )") )
    __debugbreak();
  if ( (*(_DWORD *)a & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 58, ASSERT_TYPE_ASSERT, "(!IS_NAN( a[0] ))", (const char *)&queryFormat, "!IS_NAN( a[0] )") )
    __debugbreak();
  if ( ((_DWORD)a[1] & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 59, ASSERT_TYPE_ASSERT, "(!IS_NAN( a[1] ))", (const char *)&queryFormat, "!IS_NAN( a[1] )") )
    __debugbreak();
  if ( ((_DWORD)a[2] & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 60, ASSERT_TYPE_ASSERT, "(!IS_NAN( a[2] ))", (const char *)&queryFormat, "!IS_NAN( a[2] )") )
    __debugbreak();
  v6 = 1.0 / *a;
  v7 = v6 * *b;
  v8 = v6 * b[2];
  coef->s[1] = v6 * b[1];
  coef->s[3] = v6 * a[1];
  v9 = v6 * a[2];
  coef->s[0] = v7;
  coef->s[2] = v8;
  coef->s[4] = v9;
  if ( (LODWORD(v7) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 73, ASSERT_TYPE_ASSERT, "(!IS_NAN( coef->s[0] ))", (const char *)&queryFormat, "!IS_NAN( coef->s[0] )") )
    __debugbreak();
  if ( (LODWORD(coef->s[1]) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 74, ASSERT_TYPE_ASSERT, "(!IS_NAN( coef->s[1] ))", (const char *)&queryFormat, "!IS_NAN( coef->s[1] )") )
    __debugbreak();
  if ( (LODWORD(coef->s[2]) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 75, ASSERT_TYPE_ASSERT, "(!IS_NAN( coef->s[2] ))", (const char *)&queryFormat, "!IS_NAN( coef->s[2] )") )
    __debugbreak();
  if ( (LODWORD(coef->s[3]) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 76, ASSERT_TYPE_ASSERT, "(!IS_NAN( coef->s[3] ))", (const char *)&queryFormat, "!IS_NAN( coef->s[3] )") )
    __debugbreak();
  if ( (LODWORD(coef->s[4]) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 77, ASSERT_TYPE_ASSERT, "(!IS_NAN( coef->s[4] ))", (const char *)&queryFormat, "!IS_NAN( coef->s[4] )") )
    __debugbreak();
}

/*
==============
SND_DspClip
==============
*/

void __fastcall SND_DspClip(unsigned int count, float *c, double minimum, double maximum)
{
  float *v4; 
  unsigned int v6; 
  float *v11; 
  __int64 v12; 

  v4 = c;
  if ( ((unsigned __int8)c & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 301, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( c ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )c ) ) = 0x%llx", c) )
    __debugbreak();
  v6 = count >> 3;
  _YMM2 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(*(__m128 *)&maximum, *(__m128 *)&maximum, 0);
  _YMM3 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(*(__m128 *)&minimum, *(__m128 *)&minimum, 0);
  __asm
  {
    vinsertf128 ymm2, ymm2, xmm2, 1
    vinsertf128 ymm3, ymm3, xmm3, 1
  }
  if ( v6 )
  {
    v11 = v4;
    v12 = v6;
    do
    {
      v4 += 8;
      __asm { vmaxps  ymm0, ymm3, ymmword ptr [rax] }
      v11 += 8;
      __asm { vminps  ymm1, ymm2, ymm0 }
      *((__m256i *)v4 - 1) = _YMM1;
      --v12;
    }
    while ( v12 );
  }
}

/*
==============
SND_DspFutzMono
==============
*/
void SND_DspFutzMono(const SndDspFutzParam *param, SndDspFutzState *state, float rate, unsigned int count, float *input, float *tempa, float *tempb)
{
  float blend; 
  float v11; 
  SndDspBiQuadCoef coef; 

  if ( input == tempa && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 323, ASSERT_TYPE_ASSERT, "(input != tempa)", (const char *)&queryFormat, "input != tempa") )
    __debugbreak();
  if ( tempa == tempb && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 324, ASSERT_TYPE_ASSERT, "(tempa != tempb)", (const char *)&queryFormat, "tempa != tempb") )
    __debugbreak();
  blend = param->blend;
  if ( param->blend >= 0.0000152879 )
  {
    if ( blend < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 331, ASSERT_TYPE_ASSERT, "(param->blend >= 0.0f)", (const char *)&queryFormat, "param->blend >= 0.0f") )
      __debugbreak();
    if ( blend > 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 332, ASSERT_TYPE_ASSERT, "(param->blend <= 1.0f)", (const char *)&queryFormat, "param->blend <= 1.0f") )
      __debugbreak();
    SND_DspScale(count, param->pregain, input, tempa);
    SND_DspPolyDistortion(count, param->distortion, tempa, tempb);
    SND_DspClip(count, tempa, COERCE_FLOAT(LODWORD(param->preclip) ^ _xmm), param->preclip);
    SND_DspBiquadBpf(rate, COERCE_DOUBLE((unsigned __int64)LODWORD(param->bpfF)), param->bpfQ, &coef);
    SND_DspBiquadInPlace(&coef, &state->bpf, count, tempa);
    SND_DspBiquadLShelve(rate, param->lsG, COERCE_DOUBLE((unsigned __int64)LODWORD(param->lsF)), param->lsQ, &coef);
    SND_DspBiquadInPlace(&coef, &state->ls, count, tempa);
    SND_DspSquelch(&param->squelch, &state->squelch, rate, count, tempa);
    v11 = param->blend;
    SND_DspScale(count, param->blend * param->postgain, tempa, tempa);
    SND_DspScale(count, 1.0 - v11, input, input);
    SND_DspSum(count, tempa, input);
    SND_DspClip(count, input, COERCE_FLOAT(LODWORD(param->postclip) ^ _xmm), param->postclip);
  }
}

/*
==============
SND_DspInit
==============
*/
void SND_DspInit(void)
{
  unsigned int v0; 
  __int64 v1; 
  __m128 v2; 
  __m256 v5; 
  __m128 v6; 
  __m256 v9; 
  __m128 v10; 
  __m256 v13; 
  __m128 v14; 
  __m256 v17; 
  __m128 v18; 
  __m256 v21; 
  __m128 v22; 
  __m256 v25; 
  __m128 v26; 
  __m256 v29; 
  __m128 v30; 
  __m256 v33; 
  __m128 v34; 
  __m256 v37; 
  __m128 v38; 
  __m256 v41; 
  __m128 v42; 
  __m256 v45; 
  __m128 v46; 
  __m256 v49; 
  __m128 v50; 
  __m256 v53; 
  __m128 v54; 
  __m256 v57; 
  __m128 v58; 
  __m256 v61; 
  unsigned int v62; 
  __m128 v63; 
  __m256 v66; 

  v0 = 2;
  v1 = 0i64;
  do
  {
    v2 = _mm_cvtepi32_ps((__m128i)(v0 - 2));
    _YMM0 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(v2, v2, 0);
    __asm { vinsertf128 ymm0, ymm0, xmm0, 1 }
    v5 = _mm256_add_ps(_mm256_mul_ps(_YMM0, _ymm), _ymm);
    *(__m256 *)&g_lerp_s[v1] = _mm256_sub_ps(_ymm, v5);
    *(__m256 *)&g_lerp_t[v1] = v5;
    v6 = _mm_cvtepi32_ps((__m128i)(v0 - 1));
    _YMM1 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(v6, v6, 0);
    __asm { vinsertf128 ymm1, ymm1, xmm1, 1 }
    v9 = _mm256_add_ps(_mm256_mul_ps(_YMM1, _ymm), _ymm);
    *(__m256 *)&g_lerp_s[v1 + 8] = _mm256_sub_ps(_ymm, v9);
    v10 = _mm_cvtepi32_ps((__m128i)v0);
    _YMM0 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(v10, v10, 0);
    __asm { vinsertf128 ymm0, ymm0, xmm0, 1 }
    v13 = _mm256_add_ps(_mm256_mul_ps(_YMM0, _ymm), _ymm);
    *(__m256 *)&g_lerp_s[v1 + 16] = _mm256_sub_ps(_ymm, v13);
    *(__m256 *)&g_lerp_t[v1 + 16] = v13;
    v14 = _mm_cvtepi32_ps((__m128i)(v0 + 1));
    _YMM0 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(v14, v14, 0);
    __asm { vinsertf128 ymm0, ymm0, xmm0, 1 }
    v17 = _mm256_add_ps(_mm256_mul_ps(_YMM0, _ymm), _ymm);
    *(__m256 *)&g_lerp_s[v1 + 24] = _mm256_sub_ps(_ymm, v17);
    *(__m256 *)&g_lerp_t[v1 + 24] = v17;
    v18 = _mm_cvtepi32_ps((__m128i)(v0 + 2));
    _YMM0 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(v18, v18, 0);
    __asm { vinsertf128 ymm0, ymm0, xmm0, 1 }
    v21 = _mm256_add_ps(_mm256_mul_ps(_YMM0, _ymm), _ymm);
    *(__m256 *)&g_lerp_s[v1 + 32] = _mm256_sub_ps(_ymm, v21);
    *(__m256 *)&g_lerp_t[v1 + 32] = v21;
    v22 = _mm_cvtepi32_ps((__m128i)(v0 + 3));
    _YMM0 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(v22, v22, 0);
    __asm { vinsertf128 ymm0, ymm0, xmm0, 1 }
    v25 = _mm256_add_ps(_mm256_mul_ps(_YMM0, _ymm), _ymm);
    *(__m256 *)&g_lerp_s[v1 + 40] = _mm256_sub_ps(_ymm, v25);
    v26 = _mm_cvtepi32_ps((__m128i)(v0 + 4));
    _YMM0 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(v26, v26, 0);
    __asm { vinsertf128 ymm0, ymm0, xmm0, 1 }
    *(__m256 *)&g_lerp_t[v1 + 40] = v25;
    v29 = _mm256_add_ps(_mm256_mul_ps(_YMM0, _ymm), _ymm);
    *(__m256 *)&g_lerp_s[v1 + 48] = _mm256_sub_ps(_ymm, v29);
    v30 = _mm_cvtepi32_ps((__m128i)(v0 + 5));
    _YMM0 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(v30, v30, 0);
    __asm { vinsertf128 ymm0, ymm0, xmm0, 1 }
    *(__m256 *)&g_lerp_t[v1 + 48] = v29;
    v33 = _mm256_add_ps(_mm256_mul_ps(_YMM0, _ymm), _ymm);
    *(__m256 *)&g_lerp_s[v1 + 56] = _mm256_sub_ps(_ymm, v33);
    *(__m256 *)&g_lerp_t[v1 + 8] = v9;
    *(__m256 *)&g_lerp_t[v1 + 56] = v33;
    v34 = _mm_cvtepi32_ps((__m128i)(v0 + 6));
    _YMM0 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(v34, v34, 0);
    __asm { vinsertf128 ymm0, ymm0, xmm0, 1 }
    v37 = _mm256_add_ps(_mm256_mul_ps(_YMM0, _ymm), _ymm);
    *(__m256 *)&g_lerp_s[v1 + 64] = _mm256_sub_ps(_ymm, v37);
    *(__m256 *)&g_lerp_t[v1 + 64] = v37;
    v38 = _mm_cvtepi32_ps((__m128i)(v0 + 7));
    _YMM0 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(v38, v38, 0);
    __asm { vinsertf128 ymm0, ymm0, xmm0, 1 }
    v41 = _mm256_add_ps(_mm256_mul_ps(_YMM0, _ymm), _ymm);
    *(__m256 *)&g_lerp_s[v1 + 72] = _mm256_sub_ps(_ymm, v41);
    *(__m256 *)&g_lerp_t[v1 + 72] = v41;
    v42 = _mm_cvtepi32_ps((__m128i)(v0 + 8));
    _YMM0 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(v42, v42, 0);
    __asm { vinsertf128 ymm0, ymm0, xmm0, 1 }
    v45 = _mm256_add_ps(_mm256_mul_ps(_YMM0, _ymm), _ymm);
    *(__m256 *)&g_lerp_s[v1 + 80] = _mm256_sub_ps(_ymm, v45);
    *(__m256 *)&g_lerp_t[v1 + 80] = v45;
    v46 = _mm_cvtepi32_ps((__m128i)(v0 + 9));
    _YMM0 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(v46, v46, 0);
    __asm { vinsertf128 ymm0, ymm0, xmm0, 1 }
    v49 = _mm256_add_ps(_mm256_mul_ps(_YMM0, _ymm), _ymm);
    *(__m256 *)&g_lerp_s[v1 + 88] = _mm256_sub_ps(_ymm, v49);
    *(__m256 *)&g_lerp_t[v1 + 88] = v49;
    v50 = _mm_cvtepi32_ps((__m128i)(v0 + 10));
    _YMM0 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(v50, v50, 0);
    __asm { vinsertf128 ymm0, ymm0, xmm0, 1 }
    v53 = _mm256_add_ps(_mm256_mul_ps(_YMM0, _ymm), _ymm);
    *(__m256 *)&g_lerp_s[v1 + 96] = _mm256_sub_ps(_ymm, v53);
    *(__m256 *)&g_lerp_t[v1 + 96] = v53;
    v54 = _mm_cvtepi32_ps((__m128i)(v0 + 11));
    _YMM0 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(v54, v54, 0);
    __asm { vinsertf128 ymm0, ymm0, xmm0, 1 }
    v57 = _mm256_add_ps(_mm256_mul_ps(_YMM0, _ymm), _ymm);
    *(__m256 *)&g_lerp_s[v1 + 104] = _mm256_sub_ps(_ymm, v57);
    v58 = _mm_cvtepi32_ps((__m128i)(v0 + 12));
    _YMM0 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(v58, v58, 0);
    __asm { vinsertf128 ymm0, ymm0, xmm0, 1 }
    *(__m256 *)&g_lerp_t[v1 + 104] = v57;
    v61 = _mm256_add_ps(_mm256_mul_ps(_YMM0, _ymm), _ymm);
    *(__m256 *)&g_lerp_s[v1 + 112] = _mm256_sub_ps(_ymm, v61);
    v62 = v0 + 13;
    v0 += 16;
    v63 = _mm_cvtepi32_ps((__m128i)v62);
    _YMM0 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(v63, v63, 0);
    __asm { vinsertf128 ymm0, ymm0, xmm0, 1 }
    *(__m256 *)&g_lerp_t[v1 + 112] = v61;
    v66 = _mm256_add_ps(_mm256_mul_ps(_YMM0, _ymm), _ymm);
    *(__m256 *)&g_lerp_s[v1 + 120] = _mm256_sub_ps(_ymm, v66);
    *(__m256 *)&g_lerp_t[v1 + 120] = v66;
    v1 += 128i64;
  }
  while ( (int)(v0 - 2) < 32 );
}

/*
==============
SND_DspPolyDistortion
==============
*/
void SND_DspPolyDistortion(unsigned int count, float amount, float *frame, float *temp)
{
  __int64 v5; 
  __m256 *v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  float *v11; 
  __m256 v12; 
  double v13; 

  v5 = count;
  if ( frame == temp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 236, ASSERT_TYPE_ASSERT, "(frame != temp)", (const char *)&queryFormat, "frame != temp") )
    __debugbreak();
  I_fclamp(amount, 0.0, 1.0);
  if ( ((unsigned __int8)frame & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 458, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in ) ) = 0x%llx", frame) )
    __debugbreak();
  if ( ((unsigned __int8)temp & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 459, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( out ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )out ) ) = 0x%llx", temp) )
    __debugbreak();
  if ( (v5 & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 460, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( count ) ) & 7 ) == 0 ) )", "( ( ( uintptr_t )count ) ) = 0x%llx", v5) )
    __debugbreak();
  v10 = (unsigned int)v5 >> 3;
  if ( (unsigned int)v5 >> 3 )
  {
    v11 = temp;
    v7 = (__m256 *)frame;
    do
    {
      v11 += 8;
      v12 = *v7++;
      *((__m256 *)v11 - 1) = _mm256_mul_ps(v12, v12);
      --v10;
    }
    while ( v10 );
  }
  v13 = j___libm_sse2_sincosf_(v7, v10, v8, v9);
  SND_DspScale(v5, _mm_shuffle_ps((__m128)*(unsigned __int64 *)&v13, (__m128)*(unsigned __int64 *)&v13, 1).m128_f32[0], frame, frame);
  SND_DspScale(v5, *(float *)&v13, temp, temp);
  SND_DspSum(v5, temp, frame);
}

/*
==============
SND_DspSquelch
==============
*/
void SND_DspSquelch(const SndDspSquelchParam *param, SndDspSquelchState *state, float frameRate, unsigned int frameCount, float *input)
{
  float tg; 
  float v9; 
  float v10; 
  __int64 v11; 
  float g; 
  float v13; 
  float v14; 
  float *v15; 
  unsigned int v16; 
  __int64 v17; 
  __int128 v18; 
  float v21; 
  __int128 v22; 
  float v25; 
  __int128 v26; 
  float v29; 
  __int128 v30; 
  float *v33; 
  __int64 v34; 
  __int128 v35; 

  tg = param->tg;
  v9 = 0.0;
  v10 = 1.0 / frameRate;
  if ( param->tg < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 259, ASSERT_TYPE_ASSERT, "(time >= 0)", (const char *)&queryFormat, "time >= 0") )
    __debugbreak();
  if ( (LODWORD(tg) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 260, ASSERT_TYPE_ASSERT, "(!IS_NAN( time ))", (const char *)&queryFormat, "!IS_NAN( time )") )
    __debugbreak();
  if ( v10 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 261, ASSERT_TYPE_ASSERT, "(dt >= 0)", (const char *)&queryFormat, "dt >= 0") )
    __debugbreak();
  if ( (LODWORD(v10) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 262, ASSERT_TYPE_ASSERT, "(!IS_NAN( dt ))", (const char *)&queryFormat, "!IS_NAN( dt )") )
    __debugbreak();
  if ( tg > v10 )
    v9 = (float)((float)(1.0 / frameRate) * 5.1808167) / tg;
  v11 = 0i64;
  g = state->g;
  v13 = 1.0 - v9;
  v14 = 1.0 / param->th;
  if ( frameCount >= 4 )
  {
    v15 = input + 2;
    v16 = ((frameCount - 4) >> 2) + 1;
    v17 = v16;
    v11 = 4 * v16;
    do
    {
      v18 = *((unsigned int *)v15 - 2);
      v15 += 4;
      _XMM0 = v18 & (unsigned int)_xmm;
      __asm { vmaxss  xmm1, xmm0, xmm9 }
      v21 = (float)((float)((float)((float)((float)((float)((float)((float)((float)(1.0 - *(float *)&_XMM1) * (float)(1.0 - *(float *)&_XMM1)) * (float)(1.0 - *(float *)&_XMM1)) * (float)(1.0 - *(float *)&_XMM1)) * (float)(1.0 - *(float *)&_XMM1)) * (float)(1.0 - *(float *)&_XMM1)) * v14) + 1.0) * v9) + (float)(g * v13);
      *(float *)&_XMM1 = v21 * *(float *)&v18;
      v22 = *((unsigned int *)v15 - 5);
      *(v15 - 6) = *(float *)&_XMM1;
      _XMM0 = v22 & (unsigned int)_xmm;
      __asm { vmaxss  xmm1, xmm0, xmm9 }
      v25 = (float)((float)((float)((float)((float)((float)((float)((float)((float)(1.0 - *(float *)&_XMM1) * (float)(1.0 - *(float *)&_XMM1)) * (float)(1.0 - *(float *)&_XMM1)) * (float)(1.0 - *(float *)&_XMM1)) * (float)(1.0 - *(float *)&_XMM1)) * (float)(1.0 - *(float *)&_XMM1)) * v14) + 1.0) * v9) + (float)(v21 * v13);
      *(float *)&_XMM1 = v25 * *(float *)&v22;
      v26 = *((unsigned int *)v15 - 4);
      *(v15 - 5) = *(float *)&_XMM1;
      _XMM0 = v26 & (unsigned int)_xmm;
      __asm { vmaxss  xmm1, xmm0, xmm9 }
      v29 = (float)((float)((float)((float)((float)((float)((float)((float)((float)(1.0 - *(float *)&_XMM1) * (float)(1.0 - *(float *)&_XMM1)) * (float)(1.0 - *(float *)&_XMM1)) * (float)(1.0 - *(float *)&_XMM1)) * (float)(1.0 - *(float *)&_XMM1)) * (float)(1.0 - *(float *)&_XMM1)) * v14) + 1.0) * v9) + (float)(v25 * v13);
      *(float *)&_XMM1 = v29 * *(float *)&v26;
      v30 = *((unsigned int *)v15 - 3);
      *(v15 - 4) = *(float *)&_XMM1;
      _XMM0 = v30 & (unsigned int)_xmm;
      __asm { vmaxss  xmm1, xmm0, xmm9 }
      g = (float)((float)((float)((float)((float)((float)((float)((float)((float)(1.0 - *(float *)&_XMM1) * (float)(1.0 - *(float *)&_XMM1)) * (float)(1.0 - *(float *)&_XMM1)) * (float)(1.0 - *(float *)&_XMM1)) * (float)(1.0 - *(float *)&_XMM1)) * (float)(1.0 - *(float *)&_XMM1)) * v14) + 1.0) * v9) + (float)(v29 * v13);
      *(v15 - 3) = g * *(float *)&v30;
      --v17;
    }
    while ( v17 );
    state->g = g;
  }
  if ( (unsigned int)v11 < frameCount )
  {
    v33 = &input[v11];
    v34 = frameCount - (unsigned int)v11;
    do
    {
      v35 = *(unsigned int *)v33++;
      _XMM0 = v35 & (unsigned int)_xmm;
      __asm { vmaxss  xmm1, xmm0, xmm9 }
      g = (float)((float)((float)((float)((float)((float)((float)((float)((float)(1.0 - *(float *)&_XMM1) * (float)(1.0 - *(float *)&_XMM1)) * (float)(1.0 - *(float *)&_XMM1)) * (float)(1.0 - *(float *)&_XMM1)) * (float)(1.0 - *(float *)&_XMM1)) * (float)(1.0 - *(float *)&_XMM1)) * v14) + 1.0) * v9) + (float)(g * v13);
      *(v33 - 1) = g * *(float *)&v35;
      --v34;
    }
    while ( v34 );
    state->g = g;
  }
  if ( (LODWORD(g) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 294, ASSERT_TYPE_ASSERT, "(!IS_NAN( state->g ))", (const char *)&queryFormat, "!IS_NAN( state->g )") )
    __debugbreak();
}

