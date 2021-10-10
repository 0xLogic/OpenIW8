/*
==============
SND_DspBiquadLShelve8
==============
*/

void __fastcall SND_DspBiquadLShelve8(float Fs, int enable, float db, float Fhz, float q, SndDspBiquad8State *coef)
{
  ?SND_DspBiquadLShelve8@@YAXMHMMMPEAUSndDspBiquad8State@@@Z(Fs, enable, db, Fhz, q, coef);
}

/*
==============
SND_DspBiquadNormalize8
==============
*/

void __fastcall SND_DspBiquadNormalize8(float *a, float *b, SndDspBiquad8State *coef)
{
  ?SND_DspBiquadNormalize8@@YAXPEAM0PEAUSndDspBiquad8State@@@Z(a, b, coef);
}

/*
==============
SND_DspMin
==============
*/

void __fastcall SND_DspMin(unsigned int count, const float *in1, const float *in2, float *out)
{
  ?SND_DspMin@@YAXIPEBM0PEAM@Z(count, in1, in2, out);
}

/*
==============
SND_DspMax
==============
*/

void __fastcall SND_DspMax(unsigned int count, const float *in1, const float *in2, float *out)
{
  ?SND_DspMax@@YAXIPEBM0PEAM@Z(count, in1, in2, out);
}

/*
==============
SND_DspSum
==============
*/

void __fastcall SND_DspSum(unsigned int count, const float *in, float *out)
{
  ?SND_DspSum@@YAXIPEIBMPEIAM@Z(count, in, out);
}

/*
==============
SND_DspScale
==============
*/

void __fastcall SND_DspScale(unsigned int count, float scale, const float *in, float *out)
{
  ?SND_DspScale@@YAXIMPEBMPEAM@Z(count, scale, in, out);
}

/*
==============
SND_DspShort8ToFloat4
==============
*/

void __fastcall SND_DspShort8ToFloat4(unsigned int count, const __int16 *in, float *out)
{
  ?SND_DspShort8ToFloat4@@YAXIPEIBFPEIAM@Z(count, in, out);
}

/*
==============
SND_DspBiquadHShelve8
==============
*/

void __fastcall SND_DspBiquadHShelve8(float Fs, int enable, float db, float Fhz, float q, SndDspBiquad8State *coef)
{
  ?SND_DspBiquadHShelve8@@YAXMHMMMPEIAUSndDspBiquad8State@@@Z(Fs, enable, db, Fhz, q, coef);
}

/*
==============
SND_DspSub
==============
*/

void __fastcall SND_DspSub(unsigned int count, const float *in1, const float *in2, float *out)
{
  ?SND_DspSub@@YAXIPEBM0PEAM@Z(count, in1, in2, out);
}

/*
==============
SND_DspBiquadInPlace
==============
*/

void __fastcall SND_DspBiquadInPlace(const SndDspBiQuadCoef *coef, SndDspBiQuadState *state, unsigned int count, float *input)
{
  ?SND_DspBiquadInPlace@@YAXPEBUSndDspBiQuadCoef@@PEAUSndDspBiQuadState@@IPEIAM@Z(coef, state, count, input);
}

/*
==============
SND_DspBiquadPeak8
==============
*/

void __fastcall SND_DspBiquadPeak8(float Fs, int enable, float db, float Fhz, float q, SndDspBiquad8State *coef)
{
  ?SND_DspBiquadPeak8@@YAXMHMMMPEAUSndDspBiquad8State@@@Z(Fs, enable, db, Fhz, q, coef);
}

/*
==============
SND_DspMax
==============
*/
void SND_DspMax(unsigned int count, const float *in1, const float *in2, float *out)
{
  __int64 v4; 
  const float *v7; 
  unsigned int v8; 
  __int64 v9; 

  v4 = count;
  v7 = in1;
  if ( ((unsigned __int8)in1 & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 437, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in1 ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in1 ) ) = 0x%llx", in1) )
    __debugbreak();
  if ( ((unsigned __int8)in2 & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 438, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in2 ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in2 ) ) = 0x%llx", in2) )
    __debugbreak();
  if ( ((unsigned __int8)out & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 439, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( out ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )out ) ) = 0x%llx", out) )
    __debugbreak();
  if ( (v4 & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 440, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( count ) ) & 7 ) == 0 ) )", "( ( ( uintptr_t )count ) ) = 0x%llx", v4) )
    __debugbreak();
  v8 = (unsigned int)v4 >> 3;
  if ( v8 )
  {
    v9 = v8;
    do
    {
      out += 8;
      _YMM0 = *(__m256i *)v7;
      __asm { vmaxps  ymm0, ymm0, ymmword ptr [rsi+rbx] }
      v7 += 8;
      *((__m256i *)out - 1) = _YMM0;
      --v9;
    }
    while ( v9 );
  }
}

/*
==============
SND_DspMin
==============
*/
void SND_DspMin(unsigned int count, const float *in1, const float *in2, float *out)
{
  __int64 v4; 
  const float *v7; 
  unsigned int v8; 
  __int64 v9; 

  v4 = count;
  v7 = in1;
  if ( ((unsigned __int8)in1 & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 415, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in1 ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in1 ) ) = 0x%llx", in1) )
    __debugbreak();
  if ( ((unsigned __int8)in2 & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 416, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in2 ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in2 ) ) = 0x%llx", in2) )
    __debugbreak();
  if ( ((unsigned __int8)out & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 417, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( out ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )out ) ) = 0x%llx", out) )
    __debugbreak();
  if ( (v4 & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 418, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( count ) ) & 7 ) == 0 ) )", "( ( ( uintptr_t )count ) ) = 0x%llx", v4) )
    __debugbreak();
  v8 = (unsigned int)v4 >> 3;
  if ( v8 )
  {
    v9 = v8;
    do
    {
      out += 8;
      _YMM0 = *(__m256i *)v7;
      __asm { vminps  ymm0, ymm0, ymmword ptr [rsi+rbx] }
      v7 += 8;
      *((__m256i *)out - 1) = _YMM0;
      --v9;
    }
    while ( v9 );
  }
}

/*
==============
SND_DspSub
==============
*/
void SND_DspSub(unsigned int count, const float *in1, const float *in2, float *out)
{
  __int64 v4; 
  __m256 *v7; 
  unsigned int v8; 
  char *v9; 
  __int64 v10; 
  __m256i v11; 

  v4 = count;
  v7 = (__m256 *)in1;
  if ( ((unsigned __int8)in1 & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 393, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in1 ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in1 ) ) = 0x%llx", in1) )
    __debugbreak();
  if ( ((unsigned __int8)in2 & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 394, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in2 ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in2 ) ) = 0x%llx", in2) )
    __debugbreak();
  if ( ((unsigned __int8)out & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 395, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( out ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )out ) ) = 0x%llx", out) )
    __debugbreak();
  if ( (v4 & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 396, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( count ) ) & 7 ) == 0 ) )", "( ( ( uintptr_t )count ) ) = 0x%llx", v4) )
    __debugbreak();
  v8 = (unsigned int)v4 >> 3;
  if ( v8 )
  {
    v9 = (char *)((char *)in2 - (char *)v7);
    v10 = v8;
    do
    {
      out += 8;
      v11 = (__m256i)_mm256_sub_ps(*v7, *(__m256 *)((char *)v7 + (_QWORD)v9));
      ++v7;
      *((__m256i *)out - 1) = v11;
      --v10;
    }
    while ( v10 );
  }
}

/*
==============
SND_DspShort8ToFloat4
==============
*/
void SND_DspShort8ToFloat4(unsigned int count, const __int16 *in, float *out)
{
  unsigned int v7; 
  __int64 v8; 
  const __int16 *v9; 
  float *v10; 
  __int64 v16; 
  float *v17; 
  const __int16 *v18; 
  unsigned int v19; 
  __int64 v20; 
  int v21; 
  float v22; 
  float v23; 
  int v24; 
  float v25; 
  float v26; 
  int v27; 
  float *v28; 
  const __int16 *v29; 
  __int64 v30; 
  int v31; 

  if ( ((unsigned __int8)in & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 498, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in ) ) & 15 ) == 0 ) )", "( ( ( uintptr_t )in ) ) = 0x%llx", in) )
    __debugbreak();
  if ( ((unsigned __int8)out & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 499, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( out ) ) & 15 ) == 0 ) )", "( ( ( uintptr_t )out ) ) = 0x%llx", out) )
    __debugbreak();
  v7 = 0;
  v8 = count >> 3;
  v9 = in;
  v10 = out;
  if ( count >> 3 )
  {
    __asm { vpxor   xmm5, xmm5, xmm5 }
    v7 = count >> 3;
    do
    {
      v10 += 8;
      v9 += 8;
      __asm
      {
        vpunpcklwd xmm0, xmm5, xmm4
        vpsrad  xmm1, xmm0, 10h
      }
      *((__m128 *)v10 - 2) = _mm128_mul_ps(_mm_cvtepi32_ps(_XMM1), `SND_DspShort8ToFloat4'::`2'::s_recipRange);
      __asm
      {
        vpunpckhwd xmm0, xmm5, xmm4
        vpsrad  xmm1, xmm0, 10h
      }
      *((__m128 *)v10 - 1) = _mm128_mul_ps(_mm_cvtepi32_ps(_XMM1), `SND_DspShort8ToFloat4'::`2'::s_recipRange);
      --v8;
    }
    while ( v8 );
  }
  v16 = 8 * v7;
  if ( (unsigned int)v16 < count )
  {
    if ( count - (unsigned int)v16 >= 4 )
    {
      v17 = &out[v16 + 2];
      v18 = &in[v16 + 2];
      v19 = ((count - (unsigned int)v16 - 4) >> 2) + 1;
      v20 = v19;
      v16 = (unsigned int)v16 + 4 * v19;
      do
      {
        v21 = *(v18 - 2);
        v17 += 4;
        v18 += 4;
        v22 = (float)v21 * 0.000030518509;
        v23 = (float)*(v18 - 5);
        v24 = *(v18 - 4);
        *(v17 - 6) = v22;
        v25 = v23 * 0.000030518509;
        v26 = (float)v24;
        v27 = *(v18 - 3);
        *(v17 - 5) = v25;
        *(v17 - 4) = v26 * 0.000030518509;
        *(v17 - 3) = (float)v27 * 0.000030518509;
        --v20;
      }
      while ( v20 );
    }
    if ( (unsigned int)v16 < count )
    {
      v28 = &out[v16];
      v29 = &in[v16];
      v30 = count - (unsigned int)v16;
      do
      {
        v31 = *v29;
        ++v28;
        ++v29;
        *(v28 - 1) = (float)v31 * 0.000030518509;
        --v30;
      }
      while ( v30 );
    }
  }
}

/*
==============
SND_DspSum
==============
*/
void SND_DspSum(unsigned int count, const float *in, float *out)
{
  __int64 v3; 
  __m256 *v5; 
  unsigned int v6; 
  __int64 v7; 
  char *v8; 
  __m256i v9; 

  v3 = count;
  v5 = (__m256 *)in;
  if ( ((unsigned __int8)in & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 576, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in ) ) = 0x%llx", in) )
    __debugbreak();
  if ( ((unsigned __int8)out & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 577, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( out ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )out ) ) = 0x%llx", out) )
    __debugbreak();
  if ( (v3 & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 578, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( count ) ) & 7 ) == 0 ) )", "( ( ( uintptr_t )count ) ) = 0x%llx", v3) )
    __debugbreak();
  v6 = (unsigned int)v3 >> 3;
  if ( v6 )
  {
    v7 = v6;
    v8 = (char *)((char *)out - (char *)v5);
    do
    {
      out += 8;
      v9 = (__m256i)_mm256_add_ps(*v5, *(__m256 *)((char *)v5 + (_QWORD)v8));
      ++v5;
      *((__m256i *)out - 1) = v9;
      --v7;
    }
    while ( v7 );
  }
}

/*
==============
SND_DspBiquadHShelve8
==============
*/

void __fastcall SND_DspBiquadHShelve8(float Fs, int enable, float db, double Fhz, float q, SndDspBiquad8State *coef)
{
  __int128 v8; 
  float v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  double v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float b; 
  float v21; 
  float v22; 
  float a; 
  float v24; 
  float v25; 

  if ( Fs <= 1000.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 761, ASSERT_TYPE_ASSERT, "(Fs > 1000)", (const char *)&queryFormat, "Fs > 1000") )
    __debugbreak();
  if ( Fs >= 100000.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 762, ASSERT_TYPE_ASSERT, "(Fs < 100000)", (const char *)&queryFormat, "Fs < 100000") )
    __debugbreak();
  v8 = *(_OWORD *)&Fhz;
  *(float *)&v8 = (float)(*(float *)&Fhz / Fs) * 2.0;
  _XMM8 = v8;
  if ( *(float *)&v8 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 766, ASSERT_TYPE_ASSERT, "(f0 >= 0.0f)", (const char *)&queryFormat, "f0 >= 0.0f") )
    __debugbreak();
  if ( (v8 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 767, ASSERT_TYPE_ASSERT, "(!IS_NAN( f0 ))", (const char *)&queryFormat, "!IS_NAN( f0 )") )
    __debugbreak();
  if ( q <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 768, ASSERT_TYPE_ASSERT, "(q > 0.0f)", (const char *)&queryFormat, "q > 0.0f") )
    __debugbreak();
  if ( q >= 32.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 769, ASSERT_TYPE_ASSERT, "(q < 32.0f)", (const char *)&queryFormat, "q < 32.0f") )
    __debugbreak();
  if ( (LODWORD(q) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 770, ASSERT_TYPE_ASSERT, "(!IS_NAN( q ))", (const char *)&queryFormat, "!IS_NAN( q )") )
    __debugbreak();
  if ( db >= 50.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 771, ASSERT_TYPE_ASSERT, "(db < 50.0f)", (const char *)&queryFormat, "db < 50.0f") )
    __debugbreak();
  if ( db <= -1000.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 772, ASSERT_TYPE_ASSERT, "(db > -1000.0f)", (const char *)&queryFormat, "db > -1000.0f") )
    __debugbreak();
  if ( (LODWORD(db) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 773, ASSERT_TYPE_ASSERT, "(!IS_NAN( db ))", (const char *)&queryFormat, "!IS_NAN( db )") )
    __debugbreak();
  if ( enable )
  {
    __asm { vmaxss  xmm1, xmm8, cs:__real@358637bd }
    v10 = powf_0(10.0, db * 0.025);
    v15 = j___libm_sse2_sincosf_(v12, v11, v13, v14);
    v16 = _mm_shuffle_ps((__m128)*(unsigned __int64 *)&v15, (__m128)*(unsigned __int64 *)&v15, 1).m128_f32[0];
    v17 = (float)(v10 - 1.0) * v16;
    v18 = (float)((float)(*(float *)&v15 * (float)(0.5 / q)) * fsqrt(v10)) * 2.0;
    b = (float)((float)(v17 + (float)(v10 + 1.0)) + v18) * v10;
    v19 = (float)(v10 + 1.0) * v16;
    v22 = (float)((float)(v17 + (float)(v10 + 1.0)) - v18) * v10;
    v21 = (float)((float)(v19 + (float)(v10 - 1.0)) * v10) * -2.0;
    a = (float)((float)(v10 + 1.0) - v17) + v18;
    v24 = (float)((float)(v10 - 1.0) - v19) * 2.0;
    v25 = (float)((float)(v10 + 1.0) - v17) - v18;
  }
  else
  {
    b = FLOAT_1_0;
    a = FLOAT_1_0;
    v21 = 0.0;
    v22 = 0.0;
    v24 = 0.0;
    v25 = 0.0;
  }
  SND_DspBiquadNormalize8(&a, &b, coef);
}

/*
==============
SND_DspBiquadLShelve8
==============
*/

void __fastcall SND_DspBiquadLShelve8(float Fs, int enable, float db, double Fhz, float q, SndDspBiquad8State *coef)
{
  __int128 v8; 
  float v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  double v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float b; 
  float v22; 
  float v23; 
  float a; 
  float v25; 
  float v26; 

  if ( Fs <= 1000.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 812, ASSERT_TYPE_ASSERT, "(Fs > 1000)", (const char *)&queryFormat, "Fs > 1000") )
    __debugbreak();
  if ( Fs >= 100000.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 813, ASSERT_TYPE_ASSERT, "(Fs < 100000)", (const char *)&queryFormat, "Fs < 100000") )
    __debugbreak();
  v8 = *(_OWORD *)&Fhz;
  *(float *)&v8 = (float)(*(float *)&Fhz / Fs) * 2.0;
  _XMM8 = v8;
  if ( *(float *)&v8 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 817, ASSERT_TYPE_ASSERT, "(f0 >= 0.0f)", (const char *)&queryFormat, "f0 >= 0.0f") )
    __debugbreak();
  if ( (v8 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 818, ASSERT_TYPE_ASSERT, "(!IS_NAN( f0 ))", (const char *)&queryFormat, "!IS_NAN( f0 )") )
    __debugbreak();
  if ( q <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 819, ASSERT_TYPE_ASSERT, "(q > 0.0f)", (const char *)&queryFormat, "q > 0.0f") )
    __debugbreak();
  if ( q >= 32.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 820, ASSERT_TYPE_ASSERT, "(q < 32.0f)", (const char *)&queryFormat, "q < 32.0f") )
    __debugbreak();
  if ( (LODWORD(q) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 821, ASSERT_TYPE_ASSERT, "(!IS_NAN( q ))", (const char *)&queryFormat, "!IS_NAN( q )") )
    __debugbreak();
  if ( db >= 50.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 822, ASSERT_TYPE_ASSERT, "(db < 50.0f)", (const char *)&queryFormat, "db < 50.0f") )
    __debugbreak();
  if ( db <= -1000.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 823, ASSERT_TYPE_ASSERT, "(db > -1000.0f)", (const char *)&queryFormat, "db > -1000.0f") )
    __debugbreak();
  if ( (LODWORD(db) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 824, ASSERT_TYPE_ASSERT, "(!IS_NAN( db ))", (const char *)&queryFormat, "!IS_NAN( db )") )
    __debugbreak();
  if ( enable )
  {
    __asm { vmaxss  xmm1, xmm8, cs:__real@358637bd }
    v10 = powf_0(10.0, db * 0.025);
    v15 = j___libm_sse2_sincosf_(v12, v11, v13, v14);
    v16 = _mm_shuffle_ps((__m128)*(unsigned __int64 *)&v15, (__m128)*(unsigned __int64 *)&v15, 1).m128_f32[0];
    v17 = (float)(v10 - 1.0) * v16;
    v18 = (float)((float)(*(float *)&v15 * (float)(0.5 / q)) * fsqrt(v10)) * 2.0;
    v19 = (float)(v10 + 1.0) - v17;
    b = (float)(v19 + v18) * v10;
    v20 = (float)(v10 + 1.0) * v16;
    v22 = (float)((float)((float)(v10 - 1.0) - v20) * v10) * 2.0;
    v23 = (float)(v19 - v18) * v10;
    a = (float)(v17 + (float)(v10 + 1.0)) + v18;
    v26 = (float)(v17 + (float)(v10 + 1.0)) - v18;
    v25 = (float)((float)(v10 - 1.0) * -2.0) - (float)(v20 * 2.0);
  }
  else
  {
    b = FLOAT_1_0;
    a = FLOAT_1_0;
    v22 = 0.0;
    v23 = 0.0;
    v25 = 0.0;
    v26 = 0.0;
  }
  SND_DspBiquadNormalize8(&a, &b, coef);
}

/*
==============
SND_DspBiquadNormalize8
==============
*/
void SND_DspBiquadNormalize8(float *a, float *b, SndDspBiquad8State *coef)
{
  __m128 v6; 
  __m128 v9; 
  __m128 v12; 
  __int128 v15; 
  __int128 v18; 

  if ( (*(_DWORD *)b & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 728, ASSERT_TYPE_ASSERT, "(!IS_NAN( b[0] ))", (const char *)&queryFormat, "!IS_NAN( b[0] )") )
    __debugbreak();
  if ( ((_DWORD)b[1] & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 729, ASSERT_TYPE_ASSERT, "(!IS_NAN( b[1] ))", (const char *)&queryFormat, "!IS_NAN( b[1] )") )
    __debugbreak();
  if ( ((_DWORD)b[2] & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 730, ASSERT_TYPE_ASSERT, "(!IS_NAN( b[2] ))", (const char *)&queryFormat, "!IS_NAN( b[2] )") )
    __debugbreak();
  if ( (*(_DWORD *)a & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 731, ASSERT_TYPE_ASSERT, "(!IS_NAN( a[0] ))", (const char *)&queryFormat, "!IS_NAN( a[0] )") )
    __debugbreak();
  if ( ((_DWORD)a[1] & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 732, ASSERT_TYPE_ASSERT, "(!IS_NAN( a[1] ))", (const char *)&queryFormat, "!IS_NAN( a[1] )") )
    __debugbreak();
  if ( ((_DWORD)a[2] & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 733, ASSERT_TYPE_ASSERT, "(!IS_NAN( a[2] ))", (const char *)&queryFormat, "!IS_NAN( a[2] )") )
    __debugbreak();
  if ( COERCE_FLOAT(*(_DWORD *)a & _xmm) <= 0.0000152879 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 734, ASSERT_TYPE_ASSERT, "(fabs( a[0] ) > ( 1.52879e-5f ))", (const char *)&queryFormat, "fabs( a[0] ) > SND_EPSILON") )
    __debugbreak();
  v6 = (__m128)*(unsigned int *)b;
  v6.m128_f32[0] = *b / *a;
  _YMM1 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(v6, v6, 0);
  __asm { vinsertf128 ymm1, ymm1, xmm1, 1 }
  coef->b0.val.lo = _YMM1;
  coef->b0.val.hi = _YMM1;
  v9 = (__m128)*((unsigned int *)b + 1);
  v9.m128_f32[0] = b[1] / *a;
  _YMM2 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(v9, v9, 0);
  __asm { vinsertf128 ymm2, ymm2, xmm2, 1 }
  coef->b1.val.lo = _YMM2;
  coef->b1.val.hi = _YMM2;
  v12 = (__m128)*((unsigned int *)b + 2);
  v12.m128_f32[0] = b[2] / *a;
  _YMM1 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(v12, v12, 0);
  __asm { vinsertf128 ymm1, ymm1, xmm1, 1 }
  coef->b2.val.lo = _YMM1;
  coef->b2.val.hi = _YMM1;
  v15 = *((unsigned int *)a + 1);
  *(float *)&v15 = a[1] / *a;
  _YMM2 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps((__m128)(v15 ^ _xmm), (__m128)(v15 ^ _xmm), 0);
  __asm { vinsertf128 ymm2, ymm2, xmm2, 1 }
  coef->a1.val.lo = _YMM2;
  coef->a1.val.hi = _YMM2;
  v18 = *((unsigned int *)a + 2);
  *(float *)&v18 = a[2] / *a;
  _YMM2 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps((__m128)(v18 ^ _xmm), (__m128)(v18 ^ _xmm), 0);
  __asm { vinsertf128 ymm2, ymm2, xmm2, 1 }
  coef->a2.val.lo = _YMM2;
  coef->a2.val.hi = _YMM2;
}

/*
==============
SND_DspBiquadPeak8
==============
*/

void __fastcall SND_DspBiquadPeak8(float Fs, int enable, float db, double Fhz, float q, SndDspBiquad8State *coef)
{
  __int128 v8; 
  float v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  double v15; 
  float v16; 
  float b; 
  float v18; 
  float v19; 
  float a; 
  float v21; 
  float v22; 

  if ( Fs <= 1000.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 912, ASSERT_TYPE_ASSERT, "(Fs > 1000)", (const char *)&queryFormat, "Fs > 1000") )
    __debugbreak();
  if ( Fs >= 100000.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 913, ASSERT_TYPE_ASSERT, "(Fs < 100000)", (const char *)&queryFormat, "Fs < 100000") )
    __debugbreak();
  v8 = *(_OWORD *)&Fhz;
  *(float *)&v8 = (float)(*(float *)&Fhz / Fs) * 2.0;
  _XMM9 = v8;
  if ( *(float *)&v8 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 917, ASSERT_TYPE_ASSERT, "(f0 >= 0.0f)", (const char *)&queryFormat, "f0 >= 0.0f") )
    __debugbreak();
  if ( (v8 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 918, ASSERT_TYPE_ASSERT, "(!IS_NAN( f0 ))", (const char *)&queryFormat, "!IS_NAN( f0 )") )
    __debugbreak();
  if ( q <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 919, ASSERT_TYPE_ASSERT, "(q > 0.0f)", (const char *)&queryFormat, "q > 0.0f") )
    __debugbreak();
  if ( q >= 32.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 920, ASSERT_TYPE_ASSERT, "(q < 32.0f)", (const char *)&queryFormat, "q < 32.0f") )
    __debugbreak();
  if ( (LODWORD(q) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 921, ASSERT_TYPE_ASSERT, "(!IS_NAN( q ))", (const char *)&queryFormat, "!IS_NAN( q )") )
    __debugbreak();
  if ( db >= 50.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 922, ASSERT_TYPE_ASSERT, "(db < 50.0f)", (const char *)&queryFormat, "db < 50.0f") )
    __debugbreak();
  if ( db <= -1000.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 923, ASSERT_TYPE_ASSERT, "(db > -1000.0f)", (const char *)&queryFormat, "db > -1000.0f") )
    __debugbreak();
  if ( (LODWORD(db) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 924, ASSERT_TYPE_ASSERT, "(!IS_NAN( db ))", (const char *)&queryFormat, "!IS_NAN( db )") )
    __debugbreak();
  if ( enable )
  {
    __asm { vmaxss  xmm1, xmm9, cs:__real@358637bd }
    v10 = powf_0(10.0, db * 0.025);
    v15 = j___libm_sse2_sincosf_(v12, v11, v13, v14);
    v16 = *(float *)&v15 * (float)(0.5 / q);
    b = (float)(v16 * v10) + 1.0;
    v19 = 1.0 - (float)(v16 * v10);
    a = (float)(v16 / v10) + 1.0;
    v22 = 1.0 - (float)(v16 / v10);
    v18 = _mm_shuffle_ps((__m128)*(unsigned __int64 *)&v15, (__m128)*(unsigned __int64 *)&v15, 1).m128_f32[0] * -2.0;
    v21 = v18;
  }
  else
  {
    b = FLOAT_1_0;
    a = FLOAT_1_0;
    v18 = 0.0;
    v19 = 0.0;
    v21 = 0.0;
    v22 = 0.0;
  }
  SND_DspBiquadNormalize8(&a, &b, coef);
}

/*
==============
SND_DspBiquadInPlace
==============
*/
void SND_DspBiquadInPlace(const SndDspBiQuadCoef *coef, SndDspBiQuadState *state, unsigned int count, float *input)
{
  __int64 v4; 
  float *v6; 
  unsigned int v7; 
  __int64 v8; 
  float v9; 
  float v10; 
  float v11; 
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
  float v22; 
  float v23; 
  float v24; 
  float *v25; 
  __int64 v26; 
  float v27; 
  float v28; 
  float v29; 

  v4 = 0i64;
  if ( count >= 4 )
  {
    v6 = input + 2;
    v7 = ((count - 4) >> 2) + 1;
    v8 = v7;
    v4 = 4 * v7;
    do
    {
      state->x[2] = state->x[1];
      state->x[1] = state->x[0];
      state->x[0] = *(v6 - 2);
      v9 = state->y[1];
      v10 = state->y[0];
      state->y[1] = state->y[0];
      state->y[2] = v9;
      v11 = (float)((float)((float)((float)(state->x[0] * coef->s[0]) + (float)(state->x[1] * coef->s[1])) + (float)(state->x[2] * coef->s[2])) - (float)(v10 * coef->s[3])) - (float)(v9 * coef->s[4]);
      state->y[0] = v11;
      state->x[2] = state->x[1];
      state->x[1] = state->x[0];
      state->x[0] = *(v6 - 1);
      v12 = state->y[1];
      v13 = state->y[0];
      state->y[1] = state->y[0];
      state->y[2] = v12;
      v14 = state->x[0] * coef->s[0];
      v15 = state->x[2];
      *(v6 - 2) = v11;
      v16 = (float)((float)((float)(v14 + (float)(state->x[1] * coef->s[1])) + (float)(v15 * coef->s[2])) - (float)(v13 * coef->s[3])) - (float)(v12 * coef->s[4]);
      state->y[0] = v16;
      state->x[2] = state->x[1];
      state->x[1] = state->x[0];
      state->x[0] = *v6;
      v17 = state->y[1];
      v18 = state->y[0];
      state->y[2] = v17;
      state->y[1] = v18;
      v19 = state->x[0] * coef->s[0];
      v20 = state->x[2];
      *(v6 - 1) = v16;
      v21 = (float)((float)((float)(v19 + (float)(state->x[1] * coef->s[1])) + (float)(v20 * coef->s[2])) - (float)(v18 * coef->s[3])) - (float)(v17 * coef->s[4]);
      state->y[0] = v21;
      state->x[2] = state->x[1];
      state->x[1] = state->x[0];
      state->x[0] = v6[1];
      v22 = state->y[1];
      v23 = state->y[0];
      state->y[2] = v22;
      *v6 = v21;
      v6 += 4;
      state->y[1] = v23;
      v24 = (float)((float)((float)((float)(state->x[0] * coef->s[0]) + (float)(state->x[1] * coef->s[1])) + (float)(state->x[2] * coef->s[2])) - (float)(v23 * coef->s[3])) - (float)(v22 * coef->s[4]);
      *(v6 - 3) = v24;
      state->y[0] = v24;
      --v8;
    }
    while ( v8 );
  }
  if ( (unsigned int)v4 < count )
  {
    v25 = &input[v4];
    v26 = count - (unsigned int)v4;
    do
    {
      ++v25;
      state->x[2] = state->x[1];
      state->x[1] = state->x[0];
      state->x[0] = *(v25 - 1);
      v27 = state->y[1];
      v28 = state->y[0];
      state->y[2] = v27;
      state->y[1] = v28;
      v29 = (float)((float)((float)((float)(state->x[0] * coef->s[0]) + (float)(state->x[1] * coef->s[1])) + (float)(state->x[2] * coef->s[2])) - (float)(v28 * coef->s[3])) - (float)(v27 * coef->s[4]);
      *(v25 - 1) = v29;
      state->y[0] = v29;
      --v26;
    }
    while ( v26 );
  }
}

/*
==============
SND_DspScale
==============
*/

void __fastcall SND_DspScale(unsigned int count, double scale, const float *in, float *out)
{
  __int64 v4; 
  __m256 *v6; 
  unsigned int v7; 
  __int64 v10; 
  __m256i v11; 

  v4 = count;
  v6 = (__m256 *)in;
  if ( ((unsigned __int8)in & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 328, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in ) ) = 0x%llx", in) )
    __debugbreak();
  if ( ((unsigned __int8)out & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 329, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( out ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )out ) ) = 0x%llx", out) )
    __debugbreak();
  if ( (v4 & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 330, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( count ) ) & 7 ) == 0 ) )", "( ( ( uintptr_t )count ) ) = 0x%llx", v4) )
    __debugbreak();
  v7 = (unsigned int)v4 >> 3;
  _YMM1 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(*(__m128 *)&scale, *(__m128 *)&scale, 0);
  __asm { vinsertf128 ymm1, ymm1, xmm1, 1 }
  if ( v7 )
  {
    v10 = v7;
    do
    {
      out += 8;
      v11 = (__m256i)_mm256_mul_ps(_YMM1, *v6++);
      *((__m256i *)out - 1) = v11;
      --v10;
    }
    while ( v10 );
  }
}

