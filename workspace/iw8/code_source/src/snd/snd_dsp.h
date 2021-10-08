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
  unsigned int v8; 
  __int64 v9; 

  v4 = count;
  _RDI = out;
  _RBX = in1;
  if ( ((unsigned __int8)in1 & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 437, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in1 ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in1 ) ) = 0x%llx", in1) )
    __debugbreak();
  if ( ((unsigned __int8)in2 & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 438, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in2 ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in2 ) ) = 0x%llx", in2) )
    __debugbreak();
  if ( ((unsigned __int8)_RDI & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 439, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( out ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )out ) ) = 0x%llx", _RDI) )
    __debugbreak();
  if ( (v4 & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 440, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( count ) ) & 7 ) == 0 ) )", "( ( ( uintptr_t )count ) ) = 0x%llx", v4) )
    __debugbreak();
  v8 = (unsigned int)v4 >> 3;
  if ( v8 )
  {
    v9 = v8;
    do
    {
      _RDI += 8;
      __asm
      {
        vmovups ymm0, ymmword ptr [rbx]
        vmaxps  ymm0, ymm0, ymmword ptr [rsi+rbx]
      }
      _RBX += 8;
      __asm { vmovups ymmword ptr [rdi-20h], ymm0 }
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
  unsigned int v8; 
  __int64 v9; 

  v4 = count;
  _RDI = out;
  _RBX = in1;
  if ( ((unsigned __int8)in1 & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 415, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in1 ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in1 ) ) = 0x%llx", in1) )
    __debugbreak();
  if ( ((unsigned __int8)in2 & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 416, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in2 ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in2 ) ) = 0x%llx", in2) )
    __debugbreak();
  if ( ((unsigned __int8)_RDI & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 417, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( out ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )out ) ) = 0x%llx", _RDI) )
    __debugbreak();
  if ( (v4 & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 418, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( count ) ) & 7 ) == 0 ) )", "( ( ( uintptr_t )count ) ) = 0x%llx", v4) )
    __debugbreak();
  v8 = (unsigned int)v4 >> 3;
  if ( v8 )
  {
    v9 = v8;
    do
    {
      _RDI += 8;
      __asm
      {
        vmovups ymm0, ymmword ptr [rbx]
        vminps  ymm0, ymm0, ymmword ptr [rsi+rbx]
      }
      _RBX += 8;
      __asm { vmovups ymmword ptr [rdi-20h], ymm0 }
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
  unsigned int v8; 
  __int64 v9; 

  v4 = count;
  _RDI = out;
  _RBX = in1;
  if ( ((unsigned __int8)in1 & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 393, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in1 ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in1 ) ) = 0x%llx", in1) )
    __debugbreak();
  if ( ((unsigned __int8)in2 & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 394, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in2 ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in2 ) ) = 0x%llx", in2) )
    __debugbreak();
  if ( ((unsigned __int8)_RDI & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 395, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( out ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )out ) ) = 0x%llx", _RDI) )
    __debugbreak();
  if ( (v4 & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 396, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( count ) ) & 7 ) == 0 ) )", "( ( ( uintptr_t )count ) ) = 0x%llx", v4) )
    __debugbreak();
  v8 = (unsigned int)v4 >> 3;
  if ( v8 )
  {
    v9 = v8;
    do
    {
      _RDI += 8;
      __asm
      {
        vmovups ymm0, ymmword ptr [rbx]
        vsubps  ymm0, ymm0, ymmword ptr [rsi+rbx]
      }
      _RBX += 8;
      __asm { vmovups ymmword ptr [rdi-20h], ymm0 }
      --v9;
    }
    while ( v9 );
  }
}

/*
==============
SND_DspShort8ToFloat4
==============
*/
void SND_DspShort8ToFloat4(unsigned int count, const __int16 *in, float *out)
{
  unsigned int v9; 
  __int64 v10; 
  __int64 v24; 
  const __int16 *v27; 
  unsigned int v28; 
  __int64 v29; 
  const __int16 *v42; 
  __int64 v43; 

  if ( ((unsigned __int8)in & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 498, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in ) ) & 15 ) == 0 ) )", "( ( ( uintptr_t )in ) ) = 0x%llx", in) )
    __debugbreak();
  if ( ((unsigned __int8)out & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 499, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( out ) ) & 15 ) == 0 ) )", "( ( ( uintptr_t )out ) ) = 0x%llx", out) )
    __debugbreak();
  v9 = 0;
  v10 = count >> 3;
  _RCX = in;
  _RAX = out;
  if ( count >> 3 )
  {
    __asm
    {
      vmovaps [rsp+48h+var_18], xmm6
      vmovups xmm6, xmmword ptr cs:?s_recipRange@?1??SND_DspShort8ToFloat4@@YAXIPEIBFPEIAM@Z@4T__m128@@B; __m128 const `SND_DspShort8ToFloat4(uint,short const restrict *,float restrict *)'::`2'::s_recipRange
      vpxor   xmm5, xmm5, xmm5
    }
    v9 = count >> 3;
    do
    {
      _RAX += 8;
      __asm { vmovdqu xmm4, xmmword ptr [rcx] }
      _RCX += 8;
      __asm
      {
        vpunpcklwd xmm0, xmm5, xmm4
        vpsrad  xmm1, xmm0, 10h
        vcvtdq2ps xmm2, xmm1
        vmulps  xmm3, xmm2, xmm6
        vmovups xmmword ptr [rax-20h], xmm3
        vpunpckhwd xmm0, xmm5, xmm4
        vpsrad  xmm1, xmm0, 10h
        vcvtdq2ps xmm2, xmm1
        vmulps  xmm3, xmm2, xmm6
        vmovups xmmword ptr [rax-10h], xmm3
      }
      --v10;
    }
    while ( v10 );
    __asm { vmovaps xmm6, [rsp+48h+var_18] }
  }
  v24 = 8 * v9;
  if ( (unsigned int)v24 < count )
  {
    __asm { vmovss  xmm2, cs:__real@38000100 }
    if ( count - (unsigned int)v24 >= 4 )
    {
      _RCX = &out[v24 + 2];
      v27 = &in[v24 + 2];
      v28 = ((count - (unsigned int)v24 - 4) >> 2) + 1;
      v29 = v28;
      v24 = (unsigned int)v24 + 4 * v28;
      do
      {
        _RCX += 4;
        v27 += 4;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmulss  xmm1, xmm0, xmm2
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmovss  dword ptr [rcx-18h], xmm1
          vmulss  xmm1, xmm0, xmm2
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmovss  dword ptr [rcx-14h], xmm1
          vmulss  xmm1, xmm0, xmm2
          vmovss  dword ptr [rcx-10h], xmm1
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmulss  xmm1, xmm0, xmm2
          vmovss  dword ptr [rcx-0Ch], xmm1
        }
        --v29;
      }
      while ( v29 );
    }
    if ( (unsigned int)v24 < count )
    {
      _RCX = &out[v24];
      v42 = &in[v24];
      v43 = count - (unsigned int)v24;
      do
      {
        ++_RCX;
        ++v42;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmulss  xmm1, xmm0, xmm2
          vmovss  dword ptr [rcx-4], xmm1
        }
        --v43;
      }
      while ( v43 );
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
  unsigned int v6; 
  __int64 v7; 

  v3 = count;
  _RDI = out;
  _RBX = in;
  if ( ((unsigned __int8)in & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 576, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in ) ) = 0x%llx", in) )
    __debugbreak();
  if ( ((unsigned __int8)_RDI & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 577, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( out ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )out ) ) = 0x%llx", _RDI) )
    __debugbreak();
  if ( (v3 & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 578, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( count ) ) & 7 ) == 0 ) )", "( ( ( uintptr_t )count ) ) = 0x%llx", v3) )
    __debugbreak();
  v6 = (unsigned int)v3 >> 3;
  if ( v6 )
  {
    v7 = v6;
    do
    {
      _RDI += 8;
      __asm
      {
        vmovups ymm0, ymmword ptr [rbx]
        vaddps  ymm0, ymm0, ymmword ptr [rcx+rbx]
      }
      _RBX += 8;
      __asm { vmovups ymmword ptr [rdi-20h], ymm0 }
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

void __fastcall SND_DspBiquadHShelve8(double Fs, int enable, double db, double Fhz, float q, SndDspBiquad8State *coef)
{
  bool v20; 
  bool v21; 
  bool v22; 
  bool v24; 
  bool v25; 
  bool v26; 
  bool v27; 
  bool v28; 
  __int64 v36; 
  __int64 v37; 
  __int64 v38; 
  __int64 v39; 
  float b; 
  float a; 
  void *retaddr; 
  int v81; 
  int qa; 
  int qb; 

  _RAX = &retaddr;
  __asm
  {
    vcomiss xmm0, cs:__real@447a0000
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmm8, xmm3
    vmovaps xmm7, xmm2
    vmovaps xmm6, xmm0
    vcomiss xmm6, cs:__real@47c35000
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 762, ASSERT_TYPE_ASSERT, "(Fs < 100000)", (const char *)&queryFormat, "Fs < 100000") )
    __debugbreak();
  __asm
  {
    vdivss  xmm0, xmm8, xmm6
    vmulss  xmm8, xmm0, cs:__real@40000000
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm8, xmm6
    vmovss  [rsp+0B8h+arg_0], xmm8
  }
  v20 = (v81 & 0x7F800000u) < 0x7F800000;
  v21 = (v81 & 0x7F800000u) <= 0x7F800000;
  if ( (v81 & 0x7F800000) == 2139095040 )
  {
    v22 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 767, ASSERT_TYPE_ASSERT, "(!IS_NAN( f0 ))", (const char *)&queryFormat, "!IS_NAN( f0 )");
    v20 = 0;
    v21 = !v22;
    if ( v22 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm11, [rsp+0B8h+q]
    vcomiss xmm11, xmm6
  }
  if ( v21 )
  {
    v24 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 768, ASSERT_TYPE_ASSERT, "(q > 0.0f)", (const char *)&queryFormat, "q > 0.0f");
    v20 = 0;
    if ( v24 )
      __debugbreak();
  }
  __asm { vcomiss xmm11, cs:__real@42000000 }
  if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 769, ASSERT_TYPE_ASSERT, "(q < 32.0f)", (const char *)&queryFormat, "q < 32.0f") )
    __debugbreak();
  __asm { vmovss  [rsp+0B8h+q], xmm11 }
  v25 = (qa & 0x7F800000u) < 0x7F800000;
  v26 = (qa & 0x7F800000u) <= 0x7F800000;
  if ( (qa & 0x7F800000) == 2139095040 )
  {
    v27 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 770, ASSERT_TYPE_ASSERT, "(!IS_NAN( q ))", (const char *)&queryFormat, "!IS_NAN( q )");
    v25 = 0;
    v26 = !v27;
    if ( v27 )
      __debugbreak();
  }
  __asm { vcomiss xmm7, cs:__real@42480000 }
  if ( !v25 )
  {
    v28 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 771, ASSERT_TYPE_ASSERT, "(db < 50.0f)", (const char *)&queryFormat, "db < 50.0f");
    v26 = !v28;
    if ( v28 )
      __debugbreak();
  }
  __asm { vcomiss xmm7, cs:__real@c47a0000 }
  if ( v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 772, ASSERT_TYPE_ASSERT, "(db > -1000.0f)", (const char *)&queryFormat, "db > -1000.0f") )
    __debugbreak();
  __asm { vmovss  [rsp+0B8h+q], xmm7 }
  if ( (qb & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 773, ASSERT_TYPE_ASSERT, "(!IS_NAN( db ))", (const char *)&queryFormat, "!IS_NAN( db )") )
    __debugbreak();
  if ( enable )
  {
    __asm
    {
      vmulss  xmm1, xmm7, cs:__real@3ccccccd; Y
      vmovss  xmm0, cs:__real@41200000; X
      vmovaps [rsp+0B8h+var_48], xmm9
      vmovaps [rsp+0B8h+var_58], xmm10
    }
    *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm
    {
      vmaxss  xmm1, xmm8, cs:__real@358637bd
      vmulss  xmm3, xmm1, cs:__real@40490fdb
      vxorps  xmm2, xmm2, xmm2
      vmovaps xmm10, xmm0
      vmovss  xmm0, xmm2, xmm3
    }
    *(double *)&_XMM0 = j___libm_sse2_sincosf_(v37, v36, v38, v39);
    __asm
    {
      vsubss  xmm9, xmm10, cs:__real@3f800000
      vaddss  xmm7, xmm10, cs:__real@3f800000
      vmovss  xmm1, cs:__real@3f000000
      vdivss  xmm2, xmm1, xmm11
      vmulss  xmm3, xmm0, xmm2
      vshufps xmm4, xmm0, xmm0, 1
      vmulss  xmm8, xmm9, xmm4
      vsqrtss xmm0, xmm10, xmm10
      vmulss  xmm1, xmm3, xmm0
      vmulss  xmm6, xmm1, cs:__real@40000000
      vaddss  xmm5, xmm8, xmm7
      vaddss  xmm2, xmm5, xmm6
      vmulss  xmm0, xmm2, xmm10
      vmovss  [rsp+0B8h+b], xmm0
      vmulss  xmm4, xmm7, xmm4
      vaddss  xmm1, xmm4, xmm9
      vmulss  xmm0, xmm1, xmm10
      vmulss  xmm2, xmm0, cs:__real@c0000000
      vsubss  xmm1, xmm5, xmm6
      vmulss  xmm0, xmm1, xmm10
      vmovaps xmm10, [rsp+0B8h+var_58]
      vsubss  xmm3, xmm7, xmm8
      vaddss  xmm1, xmm3, xmm6
      vmovss  [rsp+0B8h+var_80], xmm0
      vsubss  xmm0, xmm9, xmm4
      vmovaps xmm9, [rsp+0B8h+var_48]
      vmovss  [rsp+0B8h+var_84], xmm2
      vmulss  xmm2, xmm0, cs:__real@40000000
      vmovss  [rsp+0B8h+a], xmm1
      vsubss  xmm1, xmm3, xmm6
      vmovss  [rsp+0B8h+var_74], xmm2
      vmovss  [rsp+0B8h+var_70], xmm1
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vmovss  [rsp+0B8h+b], xmm0
      vmovss  [rsp+0B8h+a], xmm0
      vmovss  [rsp+0B8h+var_84], xmm6
      vmovss  [rsp+0B8h+var_80], xmm6
      vmovss  [rsp+0B8h+var_74], xmm6
      vmovss  [rsp+0B8h+var_70], xmm6
    }
  }
  SND_DspBiquadNormalize8(&a, &b, coef);
  _R11 = &retaddr;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm11, xmmword ptr [r11-68h]
  }
}

/*
==============
SND_DspBiquadLShelve8
==============
*/

void __fastcall SND_DspBiquadLShelve8(double Fs, int enable, double db, double Fhz, float q, SndDspBiquad8State *coef)
{
  bool v22; 
  bool v23; 
  bool v24; 
  bool v26; 
  bool v27; 
  bool v28; 
  bool v29; 
  bool v30; 
  __int64 v38; 
  __int64 v39; 
  __int64 v40; 
  __int64 v41; 
  float b; 
  float a; 
  void *retaddr; 
  int v85; 
  int qa; 
  int qb; 

  _RAX = &retaddr;
  __asm
  {
    vcomiss xmm0, cs:__real@447a0000
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps xmm8, xmm3
    vmovaps xmm7, xmm2
    vmovaps xmm6, xmm0
    vcomiss xmm6, cs:__real@47c35000
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 813, ASSERT_TYPE_ASSERT, "(Fs < 100000)", (const char *)&queryFormat, "Fs < 100000") )
    __debugbreak();
  __asm
  {
    vmovss  xmm12, cs:__real@40000000
    vdivss  xmm0, xmm8, xmm6
    vmulss  xmm8, xmm0, xmm12
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm8, xmm6
    vmovss  [rsp+0C8h+arg_0], xmm8
  }
  v22 = (v85 & 0x7F800000u) < 0x7F800000;
  v23 = (v85 & 0x7F800000u) <= 0x7F800000;
  if ( (v85 & 0x7F800000) == 2139095040 )
  {
    v24 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 818, ASSERT_TYPE_ASSERT, "(!IS_NAN( f0 ))", (const char *)&queryFormat, "!IS_NAN( f0 )");
    v22 = 0;
    v23 = !v24;
    if ( v24 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm11, [rsp+0C8h+q]
    vcomiss xmm11, xmm6
  }
  if ( v23 )
  {
    v26 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 819, ASSERT_TYPE_ASSERT, "(q > 0.0f)", (const char *)&queryFormat, "q > 0.0f");
    v22 = 0;
    if ( v26 )
      __debugbreak();
  }
  __asm { vcomiss xmm11, cs:__real@42000000 }
  if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 820, ASSERT_TYPE_ASSERT, "(q < 32.0f)", (const char *)&queryFormat, "q < 32.0f") )
    __debugbreak();
  __asm { vmovss  [rsp+0C8h+q], xmm11 }
  v27 = (qa & 0x7F800000u) < 0x7F800000;
  v28 = (qa & 0x7F800000u) <= 0x7F800000;
  if ( (qa & 0x7F800000) == 2139095040 )
  {
    v29 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 821, ASSERT_TYPE_ASSERT, "(!IS_NAN( q ))", (const char *)&queryFormat, "!IS_NAN( q )");
    v27 = 0;
    v28 = !v29;
    if ( v29 )
      __debugbreak();
  }
  __asm { vcomiss xmm7, cs:__real@42480000 }
  if ( !v27 )
  {
    v30 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 822, ASSERT_TYPE_ASSERT, "(db < 50.0f)", (const char *)&queryFormat, "db < 50.0f");
    v28 = !v30;
    if ( v30 )
      __debugbreak();
  }
  __asm { vcomiss xmm7, cs:__real@c47a0000 }
  if ( v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 823, ASSERT_TYPE_ASSERT, "(db > -1000.0f)", (const char *)&queryFormat, "db > -1000.0f") )
    __debugbreak();
  __asm { vmovss  [rsp+0C8h+q], xmm7 }
  if ( (qb & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 824, ASSERT_TYPE_ASSERT, "(!IS_NAN( db ))", (const char *)&queryFormat, "!IS_NAN( db )") )
    __debugbreak();
  if ( enable )
  {
    __asm
    {
      vmulss  xmm1, xmm7, cs:__real@3ccccccd; Y
      vmovss  xmm0, cs:__real@41200000; X
      vmovaps [rsp+0C8h+var_48], xmm9
      vmovaps [rsp+0C8h+var_58], xmm10
    }
    *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm
    {
      vmaxss  xmm1, xmm8, cs:__real@358637bd
      vmulss  xmm3, xmm1, cs:__real@40490fdb
      vxorps  xmm2, xmm2, xmm2
      vmovaps xmm10, xmm0
      vmovss  xmm0, xmm2, xmm3
    }
    *(double *)&_XMM0 = j___libm_sse2_sincosf_(v39, v38, v40, v41);
    __asm
    {
      vsubss  xmm9, xmm10, cs:__real@3f800000
      vaddss  xmm8, xmm10, cs:__real@3f800000
      vmovss  xmm1, cs:__real@3f000000
      vdivss  xmm2, xmm1, xmm11
      vmulss  xmm3, xmm0, xmm2
      vshufps xmm4, xmm0, xmm0, 1
      vmulss  xmm7, xmm9, xmm4
      vsqrtss xmm0, xmm10, xmm10
      vmulss  xmm1, xmm3, xmm0
      vmulss  xmm6, xmm1, xmm12
      vsubss  xmm5, xmm8, xmm7
      vaddss  xmm2, xmm5, xmm6
      vmulss  xmm0, xmm2, xmm10
      vmovss  [rsp+0C8h+b], xmm0
      vmulss  xmm4, xmm8, xmm4
      vsubss  xmm1, xmm9, xmm4
      vmulss  xmm0, xmm1, xmm10
      vmulss  xmm2, xmm0, xmm12
      vsubss  xmm1, xmm5, xmm6
      vmulss  xmm0, xmm1, xmm10
      vmovaps xmm10, [rsp+0C8h+var_58]
      vaddss  xmm3, xmm7, xmm8
      vmovss  [rsp+0C8h+var_94], xmm2
      vmulss  xmm2, xmm9, cs:__real@c0000000
      vmovaps xmm9, [rsp+0C8h+var_48]
      vaddss  xmm1, xmm3, xmm6
      vmovss  [rsp+0C8h+var_90], xmm0
      vmulss  xmm0, xmm4, xmm12
      vmovss  [rsp+0C8h+a], xmm1
      vsubss  xmm1, xmm2, xmm0
      vsubss  xmm2, xmm3, xmm6
      vmovss  [rsp+0C8h+var_80], xmm2
      vmovss  [rsp+0C8h+var_84], xmm1
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vmovss  [rsp+0C8h+b], xmm0
      vmovss  [rsp+0C8h+a], xmm0
      vmovss  [rsp+0C8h+var_94], xmm6
      vmovss  [rsp+0C8h+var_90], xmm6
      vmovss  [rsp+0C8h+var_84], xmm6
      vmovss  [rsp+0C8h+var_80], xmm6
    }
  }
  SND_DspBiquadNormalize8(&a, &b, coef);
  _R11 = &retaddr;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
  }
}

/*
==============
SND_DspBiquadNormalize8
==============
*/
void SND_DspBiquadNormalize8(float *a, float *b, SndDspBiquad8State *coef)
{
  bool v14; 
  bool v15; 
  int v40; 
  int v41; 
  int v42; 
  int v43; 
  int v44; 
  int v45; 

  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  _RSI = coef;
  _RDI = b;
  _RBX = a;
  if ( (v40 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 728, ASSERT_TYPE_ASSERT, "(!IS_NAN( b[0] ))", (const char *)&queryFormat, "!IS_NAN( b[0] )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v41 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 729, ASSERT_TYPE_ASSERT, "(!IS_NAN( b[1] ))", (const char *)&queryFormat, "!IS_NAN( b[1] )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v42 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 730, ASSERT_TYPE_ASSERT, "(!IS_NAN( b[2] ))", (const char *)&queryFormat, "!IS_NAN( b[2] )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v43 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 731, ASSERT_TYPE_ASSERT, "(!IS_NAN( a[0] ))", (const char *)&queryFormat, "!IS_NAN( a[0] )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v44 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 732, ASSERT_TYPE_ASSERT, "(!IS_NAN( a[1] ))", (const char *)&queryFormat, "!IS_NAN( a[1] )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  v14 = (v45 & 0x7F800000u) <= 0x7F800000;
  if ( (v45 & 0x7F800000) == 2139095040 )
  {
    v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 733, ASSERT_TYPE_ASSERT, "(!IS_NAN( a[2] ))", (const char *)&queryFormat, "!IS_NAN( a[2] )");
    v14 = !v15;
    if ( v15 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@37803e84
  }
  if ( v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 734, ASSERT_TYPE_ASSERT, "(fabs( a[0] ) > ( 1.52879e-5f ))", (const char *)&queryFormat, "fabs( a[0] ) > SND_EPSILON") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vdivss  xmm1, xmm0, dword ptr [rbx]
    vshufps xmm1, xmm1, xmm1, 0
    vinsertf128 ymm1, ymm1, xmm1, 1
    vmovups ymmword ptr [rsi+80h], ymm1
    vmovups ymmword ptr [rsi+0A0h], ymm1
    vmovss  xmm0, dword ptr [rdi+4]
    vdivss  xmm2, xmm0, dword ptr [rbx]
    vshufps xmm2, xmm2, xmm2, 0
    vinsertf128 ymm2, ymm2, xmm2, 1
    vmovups ymmword ptr [rsi+0C0h], ymm2
    vmovups ymmword ptr [rsi+0E0h], ymm2
    vmovss  xmm0, dword ptr [rdi+8]
    vdivss  xmm1, xmm0, dword ptr [rbx]
    vshufps xmm1, xmm1, xmm1, 0
    vinsertf128 ymm1, ymm1, xmm1, 1
    vmovups ymmword ptr [rsi+100h], ymm1
    vmovups ymmword ptr [rsi+120h], ymm1
    vmovss  xmm0, dword ptr [rbx+4]
    vdivss  xmm1, xmm0, dword ptr [rbx]
    vxorps  xmm2, xmm1, cs:__xmm@80000000800000008000000080000000
    vshufps xmm2, xmm2, xmm2, 0
    vinsertf128 ymm2, ymm2, xmm2, 1
    vmovups ymmword ptr [rsi], ymm2
    vmovups ymmword ptr [rsi+20h], ymm2
    vmovss  xmm0, dword ptr [rbx+8]
    vdivss  xmm1, xmm0, dword ptr [rbx]
    vxorps  xmm2, xmm1, cs:__xmm@80000000800000008000000080000000
    vshufps xmm2, xmm2, xmm2, 0
    vinsertf128 ymm2, ymm2, xmm2, 1
    vmovups ymmword ptr [rsi+40h], ymm2
    vmovups ymmword ptr [rsi+60h], ymm2
  }
}

/*
==============
SND_DspBiquadPeak8
==============
*/

void __fastcall SND_DspBiquadPeak8(double Fs, int enable, double db, double Fhz, float q, SndDspBiquad8State *coef)
{
  bool v18; 
  bool v19; 
  bool v20; 
  bool v22; 
  bool v23; 
  bool v24; 
  bool v25; 
  bool v26; 
  __int64 v34; 
  __int64 v35; 
  __int64 v36; 
  __int64 v37; 
  float b; 
  float a; 
  char v63; 
  void *retaddr; 
  int v65; 
  int qa; 
  int qb; 

  _RAX = &retaddr;
  __asm
  {
    vcomiss xmm0, cs:__real@447a0000
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmm8, xmm3
    vmovaps xmm7, xmm2
    vmovaps xmm6, xmm0
    vcomiss xmm6, cs:__real@47c35000
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 913, ASSERT_TYPE_ASSERT, "(Fs < 100000)", (const char *)&queryFormat, "Fs < 100000") )
    __debugbreak();
  __asm
  {
    vdivss  xmm0, xmm8, xmm6
    vmulss  xmm9, xmm0, cs:__real@40000000
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm9, xmm6
    vmovss  [rsp+98h+arg_0], xmm9
  }
  v18 = (v65 & 0x7F800000u) < 0x7F800000;
  v19 = (v65 & 0x7F800000u) <= 0x7F800000;
  if ( (v65 & 0x7F800000) == 2139095040 )
  {
    v20 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 918, ASSERT_TYPE_ASSERT, "(!IS_NAN( f0 ))", (const char *)&queryFormat, "!IS_NAN( f0 )");
    v18 = 0;
    v19 = !v20;
    if ( v20 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm8, [rsp+98h+q]
    vcomiss xmm8, xmm6
  }
  if ( v19 )
  {
    v22 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 919, ASSERT_TYPE_ASSERT, "(q > 0.0f)", (const char *)&queryFormat, "q > 0.0f");
    v18 = 0;
    if ( v22 )
      __debugbreak();
  }
  __asm { vcomiss xmm8, cs:__real@42000000 }
  if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 920, ASSERT_TYPE_ASSERT, "(q < 32.0f)", (const char *)&queryFormat, "q < 32.0f") )
    __debugbreak();
  __asm { vmovss  [rsp+98h+q], xmm8 }
  v23 = (qa & 0x7F800000u) < 0x7F800000;
  v24 = (qa & 0x7F800000u) <= 0x7F800000;
  if ( (qa & 0x7F800000) == 2139095040 )
  {
    v25 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 921, ASSERT_TYPE_ASSERT, "(!IS_NAN( q ))", (const char *)&queryFormat, "!IS_NAN( q )");
    v23 = 0;
    v24 = !v25;
    if ( v25 )
      __debugbreak();
  }
  __asm { vcomiss xmm7, cs:__real@42480000 }
  if ( !v23 )
  {
    v26 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 922, ASSERT_TYPE_ASSERT, "(db < 50.0f)", (const char *)&queryFormat, "db < 50.0f");
    v24 = !v26;
    if ( v26 )
      __debugbreak();
  }
  __asm { vcomiss xmm7, cs:__real@c47a0000 }
  if ( v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 923, ASSERT_TYPE_ASSERT, "(db > -1000.0f)", (const char *)&queryFormat, "db > -1000.0f") )
    __debugbreak();
  __asm { vmovss  [rsp+98h+q], xmm7 }
  if ( (qb & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 924, ASSERT_TYPE_ASSERT, "(!IS_NAN( db ))", (const char *)&queryFormat, "!IS_NAN( db )") )
    __debugbreak();
  if ( enable )
  {
    __asm
    {
      vmulss  xmm1, xmm7, cs:__real@3ccccccd; Y
      vmovss  xmm0, cs:__real@41200000; X
    }
    *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm
    {
      vmaxss  xmm1, xmm9, cs:__real@358637bd
      vmulss  xmm3, xmm1, cs:__real@40490fdb
      vxorps  xmm2, xmm2, xmm2
      vmovaps xmm7, xmm0
      vmovss  xmm0, xmm2, xmm3
    }
    *(double *)&_XMM0 = j___libm_sse2_sincosf_(v35, v34, v36, v37);
    __asm
    {
      vmovss  xmm6, cs:__real@3f800000
      vmovss  xmm1, cs:__real@3f000000
      vdivss  xmm2, xmm1, xmm8
      vmulss  xmm5, xmm0, xmm2
      vshufps xmm0, xmm0, xmm0, 1
      vmulss  xmm3, xmm0, cs:__real@c0000000
      vmulss  xmm4, xmm5, xmm7
      vaddss  xmm1, xmm4, xmm6
      vsubss  xmm0, xmm6, xmm4
      vdivss  xmm2, xmm5, xmm7
      vmovss  [rsp+98h+b], xmm1
      vmovss  [rsp+98h+var_60], xmm0
      vaddss  xmm1, xmm2, xmm6
      vsubss  xmm0, xmm6, xmm2
      vmovss  [rsp+98h+a], xmm1
      vmovss  [rsp+98h+var_50], xmm0
      vmovss  [rsp+98h+var_64], xmm3
      vmovss  [rsp+98h+var_54], xmm3
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vmovss  [rsp+98h+b], xmm0
      vmovss  [rsp+98h+a], xmm0
      vmovss  [rsp+98h+var_64], xmm6
      vmovss  [rsp+98h+var_60], xmm6
      vmovss  [rsp+98h+var_54], xmm6
      vmovss  [rsp+98h+var_50], xmm6
    }
  }
  SND_DspBiquadNormalize8(&a, &b, coef);
  __asm { vmovaps xmm7, [rsp+98h+var_28] }
  _R11 = &v63;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
}

/*
==============
SND_DspBiquadInPlace
==============
*/
void SND_DspBiquadInPlace(const SndDspBiQuadCoef *coef, SndDspBiQuadState *state, unsigned int count, float *input)
{
  __int64 v5; 
  unsigned int v8; 
  __int64 v9; 
  __int64 v67; 

  v5 = 0i64;
  __asm { vmovaps [rsp+18h+var_18], xmm6 }
  if ( count >= 4 )
  {
    _R8 = input + 2;
    v8 = ((count - 4) >> 2) + 1;
    v9 = v8;
    v5 = 4 * v8;
    do
    {
      state->x[2] = state->x[1];
      state->x[1] = state->x[0];
      state->x[0] = *(_R8 - 2);
      __asm
      {
        vmovss  xmm6, dword ptr [rdx+4]
        vmovss  xmm5, dword ptr [rdx]
        vmovss  dword ptr [rdx+4], xmm5
        vmovss  dword ptr [rdx+8], xmm6
        vmovss  xmm0, dword ptr [rdx+10h]
        vmulss  xmm3, xmm0, dword ptr [rcx]
        vmovss  xmm1, dword ptr [rdx+14h]
        vmulss  xmm2, xmm1, dword ptr [rcx+4]
        vmovss  xmm0, dword ptr [rdx+18h]
        vmulss  xmm1, xmm0, dword ptr [rcx+8]
        vmulss  xmm0, xmm6, dword ptr [rcx+10h]
        vaddss  xmm4, xmm3, xmm2
        vmulss  xmm2, xmm5, dword ptr [rcx+0Ch]
        vaddss  xmm3, xmm4, xmm1
        vsubss  xmm4, xmm3, xmm2
        vsubss  xmm1, xmm4, xmm0
        vmovss  dword ptr [rdx], xmm1
      }
      state->x[2] = state->x[1];
      state->x[1] = state->x[0];
      state->x[0] = *(_R8 - 1);
      __asm
      {
        vmovss  xmm6, dword ptr [rdx+4]
        vmovss  xmm5, dword ptr [rdx]
        vmovss  dword ptr [rdx+4], xmm5
        vmovss  dword ptr [rdx+8], xmm6
        vmovss  xmm0, dword ptr [rdx+10h]
        vmulss  xmm3, xmm0, dword ptr [rcx]
        vmovss  xmm0, dword ptr [rdx+18h]
        vmovss  dword ptr [r8-8], xmm1
        vmovss  xmm1, dword ptr [rdx+14h]
        vmulss  xmm2, xmm1, dword ptr [rcx+4]
        vmulss  xmm1, xmm0, dword ptr [rcx+8]
        vmulss  xmm0, xmm6, dword ptr [rcx+10h]
        vaddss  xmm4, xmm3, xmm2
        vmulss  xmm2, xmm5, dword ptr [rcx+0Ch]
        vaddss  xmm3, xmm4, xmm1
        vsubss  xmm4, xmm3, xmm2
        vsubss  xmm1, xmm4, xmm0
        vmovss  dword ptr [rdx], xmm1
      }
      state->x[2] = state->x[1];
      state->x[1] = state->x[0];
      state->x[0] = *_R8;
      __asm
      {
        vmovss  xmm6, dword ptr [rdx+4]
        vmovss  xmm5, dword ptr [rdx]
        vmovss  dword ptr [rdx+8], xmm6
        vmovss  dword ptr [rdx+4], xmm5
        vmovss  xmm0, dword ptr [rdx+10h]
        vmulss  xmm3, xmm0, dword ptr [rcx]
        vmovss  xmm0, dword ptr [rdx+18h]
        vmovss  dword ptr [r8-4], xmm1
        vmovss  xmm1, dword ptr [rdx+14h]
        vmulss  xmm2, xmm1, dword ptr [rcx+4]
        vmulss  xmm1, xmm0, dword ptr [rcx+8]
        vmulss  xmm0, xmm6, dword ptr [rcx+10h]
        vaddss  xmm4, xmm3, xmm2
        vmulss  xmm2, xmm5, dword ptr [rcx+0Ch]
        vaddss  xmm3, xmm4, xmm1
        vsubss  xmm4, xmm3, xmm2
        vsubss  xmm1, xmm4, xmm0
        vmovss  dword ptr [rdx], xmm1
      }
      state->x[2] = state->x[1];
      state->x[1] = state->x[0];
      state->x[0] = _R8[1];
      __asm
      {
        vmovss  xmm6, dword ptr [rdx+4]
        vmovss  xmm5, dword ptr [rdx]
        vmovss  dword ptr [rdx+8], xmm6
        vmovss  dword ptr [r8], xmm1
      }
      _R8 += 4;
      __asm
      {
        vmovss  dword ptr [rdx+4], xmm5
        vmovss  xmm0, dword ptr [rdx+10h]
        vmulss  xmm3, xmm0, dword ptr [rcx]
        vmovss  xmm1, dword ptr [rdx+14h]
        vmulss  xmm2, xmm1, dword ptr [rcx+4]
        vmovss  xmm0, dword ptr [rdx+18h]
        vmulss  xmm1, xmm0, dword ptr [rcx+8]
        vmulss  xmm0, xmm6, dword ptr [rcx+10h]
        vaddss  xmm4, xmm3, xmm2
        vmulss  xmm2, xmm5, dword ptr [rcx+0Ch]
        vaddss  xmm3, xmm4, xmm1
        vsubss  xmm4, xmm3, xmm2
        vsubss  xmm1, xmm4, xmm0
        vmovss  dword ptr [r8-0Ch], xmm1
        vmovss  dword ptr [rdx], xmm1
      }
      --v9;
    }
    while ( v9 );
  }
  if ( (unsigned int)v5 < count )
  {
    _R8 = &input[v5];
    v67 = count - (unsigned int)v5;
    do
    {
      ++_R8;
      state->x[2] = state->x[1];
      state->x[1] = state->x[0];
      state->x[0] = *(_R8 - 1);
      __asm
      {
        vmovss  xmm6, dword ptr [rdx+4]
        vmovss  xmm5, dword ptr [rdx]
        vmovss  dword ptr [rdx+8], xmm6
        vmovss  dword ptr [rdx+4], xmm5
        vmovss  xmm0, dword ptr [rdx+10h]
        vmulss  xmm3, xmm0, dword ptr [rcx]
        vmovss  xmm1, dword ptr [rdx+14h]
        vmulss  xmm2, xmm1, dword ptr [rcx+4]
        vmovss  xmm0, dword ptr [rdx+18h]
        vmulss  xmm1, xmm0, dword ptr [rcx+8]
        vmulss  xmm0, xmm5, dword ptr [rcx+0Ch]
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm2, xmm4, xmm1
        vmulss  xmm1, xmm6, dword ptr [rcx+10h]
        vsubss  xmm3, xmm2, xmm0
        vsubss  xmm0, xmm3, xmm1
        vmovss  dword ptr [r8-4], xmm0
        vmovss  dword ptr [rdx], xmm0
      }
      --v67;
    }
    while ( v67 );
  }
  __asm { vmovaps xmm6, [rsp+18h+var_18] }
}

/*
==============
SND_DspScale
==============
*/

void __fastcall SND_DspScale(unsigned int count, double scale, const float *in, float *out)
{
  __int64 v6; 
  const float *v8; 
  unsigned int v10; 
  __int64 v14; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  v6 = count;
  _RBX = out;
  v8 = in;
  __asm { vmovaps xmm6, xmm1 }
  if ( ((unsigned __int8)in & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 328, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in ) ) = 0x%llx", in) )
    __debugbreak();
  if ( ((unsigned __int8)_RBX & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 329, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( out ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )out ) ) = 0x%llx", _RBX) )
    __debugbreak();
  if ( (v6 & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 330, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( count ) ) & 7 ) == 0 ) )", "( ( ( uintptr_t )count ) ) = 0x%llx", v6) )
    __debugbreak();
  v10 = (unsigned int)v6 >> 3;
  __asm
  {
    vmovaps xmm1, xmm6
    vshufps xmm1, xmm1, xmm1, 0
    vinsertf128 ymm1, ymm1, xmm1, 1
  }
  if ( v10 )
  {
    v14 = v10;
    do
    {
      _RBX += 8;
      __asm { vmulps  ymm0, ymm1, ymmword ptr [rdi] }
      v8 += 8;
      __asm { vmovups ymmword ptr [rbx-20h], ymm0 }
      --v14;
    }
    while ( v14 );
  }
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
}

