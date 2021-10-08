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

void __fastcall SND_DspBiquadBpf(double Fs, double Fhz, double q, SndDspBiQuadCoef *coef)
{
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  bool v18; 
  bool v19; 
  bool v20; 
  float b[4]; 
  float a[4]; 
  int v42; 
  int v43; 

  __asm
  {
    vcomiss xmm0, cs:__real@447a0000
    vmovaps [rsp+88h+var_18], xmm6
    vmovaps [rsp+88h+var_28], xmm7
    vmovaps [rsp+88h+var_38], xmm8
    vmovaps xmm8, xmm1
    vmovaps xmm7, xmm2
    vmovaps xmm6, xmm0
    vcomiss xmm6, cs:__real@47c35000
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 204, ASSERT_TYPE_ASSERT, "(Fs < 100000)", (const char *)&queryFormat, "Fs < 100000") )
    __debugbreak();
  __asm
  {
    vdivss  xmm0, xmm8, xmm6
    vmulss  xmm6, xmm0, cs:__real@40000000
    vxorps  xmm8, xmm8, xmm8
    vcomiss xmm6, xmm8
    vmovss  [rsp+88h+arg_0], xmm6
  }
  v18 = (v42 & 0x7F800000u) <= 0x7F800000;
  if ( (v42 & 0x7F800000) == 2139095040 )
  {
    v19 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 209, ASSERT_TYPE_ASSERT, "(!IS_NAN( f0 ))", (const char *)&queryFormat, "!IS_NAN( f0 )");
    v18 = !v19;
    if ( v19 )
      __debugbreak();
  }
  __asm { vcomiss xmm7, xmm8 }
  if ( v18 )
  {
    v20 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 210, ASSERT_TYPE_ASSERT, "(q > 0.0f)", (const char *)&queryFormat, "q > 0.0f");
    v18 = !v20;
    if ( v20 )
      __debugbreak();
  }
  __asm { vcomiss xmm7, cs:__real@42000000 }
  if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 211, ASSERT_TYPE_ASSERT, "(q <= 32.0f)", (const char *)&queryFormat, "q <= 32.0f") )
    __debugbreak();
  __asm { vmovss  [rsp+88h+arg_0], xmm7 }
  if ( (v43 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 212, ASSERT_TYPE_ASSERT, "(!IS_NAN( q ))", (const char *)&queryFormat, "!IS_NAN( q )") )
    __debugbreak();
  __asm
  {
    vmaxss  xmm0, xmm6, cs:__real@358637bd
    vmulss  xmm2, xmm0, cs:__real@40490fdb
    vxorps  xmm1, xmm1, xmm1
    vmovss  xmm0, xmm1, xmm2
  }
  *(double *)&_XMM0 = j___libm_sse2_sincosf_(v12, v11, v13, v14);
  __asm
  {
    vmovss  xmm1, cs:__real@3f000000
    vmovss  xmm3, cs:__real@3f800000
    vdivss  xmm2, xmm1, xmm7
    vmulss  xmm4, xmm0, xmm2
    vxorps  xmm1, xmm4, cs:__xmm@80000000800000008000000080000000
    vshufps xmm0, xmm0, xmm0, 1
    vmulss  xmm0, xmm0, cs:__real@c0000000
    vmovss  [rsp+88h+var_50], xmm1
    vsubss  xmm1, xmm3, xmm4
    vaddss  xmm2, xmm4, xmm3
    vmovss  [rsp+88h+var_40], xmm1
    vmovss  [rsp+88h+b], xmm4
    vmovss  [rsp+88h+var_54], xmm8
    vmovss  [rsp+88h+a], xmm2
    vmovss  [rsp+88h+var_44], xmm0
  }
  SND_DspBiquadNormalize(a, b, coef);
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm7, [rsp+88h+var_28]
    vmovaps xmm8, [rsp+88h+var_38]
  }
}

/*
==============
SND_DspBiquadLShelve
==============
*/

void __fastcall SND_DspBiquadLShelve(double Fs, double db, double Fhz, double q, SndDspBiQuadCoef *coef)
{
  bool v21; 
  bool v22; 
  bool v23; 
  bool v24; 
  bool v25; 
  bool v26; 
  bool v27; 
  bool v28; 
  __int64 v36; 
  __int64 v37; 
  __int64 v38; 
  __int64 v39; 
  float b[4]; 
  float a[32]; 
  char v75; 
  void *retaddr; 
  int v77; 
  int v78; 
  int v79; 

  _RAX = &retaddr;
  __asm
  {
    vcomiss xmm0, cs:__real@447a0000
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps xmm11, xmm3
    vmovaps xmm8, xmm2
    vmovaps xmm7, xmm1
    vmovaps xmm6, xmm0
    vcomiss xmm6, cs:__real@47c35000
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 125, ASSERT_TYPE_ASSERT, "(Fs < 100000)", (const char *)&queryFormat, "Fs < 100000") )
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
  v21 = (v77 & 0x7F800000u) < 0x7F800000;
  v22 = (v77 & 0x7F800000u) <= 0x7F800000;
  if ( (v77 & 0x7F800000) == 2139095040 )
  {
    v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 130, ASSERT_TYPE_ASSERT, "(!IS_NAN( f0 ))", (const char *)&queryFormat, "!IS_NAN( f0 )");
    v21 = 0;
    v22 = !v23;
    if ( v23 )
      __debugbreak();
  }
  __asm { vcomiss xmm11, xmm6 }
  if ( v22 )
  {
    v24 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 131, ASSERT_TYPE_ASSERT, "(q > 0.0f)", (const char *)&queryFormat, "q > 0.0f");
    v21 = 0;
    if ( v24 )
      __debugbreak();
  }
  __asm { vcomiss xmm11, cs:__real@42000000 }
  if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 132, ASSERT_TYPE_ASSERT, "(q < 32.0f)", (const char *)&queryFormat, "q < 32.0f") )
    __debugbreak();
  __asm { vmovss  [rsp+0C8h+arg_0], xmm11 }
  v25 = (v78 & 0x7F800000u) < 0x7F800000;
  v26 = (v78 & 0x7F800000u) <= 0x7F800000;
  if ( (v78 & 0x7F800000) == 2139095040 )
  {
    v27 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 133, ASSERT_TYPE_ASSERT, "(!IS_NAN( q ))", (const char *)&queryFormat, "!IS_NAN( q )");
    v25 = 0;
    v26 = !v27;
    if ( v27 )
      __debugbreak();
  }
  __asm { vcomiss xmm7, cs:__real@42480000 }
  if ( !v25 )
  {
    v28 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 134, ASSERT_TYPE_ASSERT, "(db < 50.0f)", (const char *)&queryFormat, "db < 50.0f");
    v26 = !v28;
    if ( v28 )
      __debugbreak();
  }
  __asm { vcomiss xmm7, cs:__real@c47a0000 }
  if ( v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 135, ASSERT_TYPE_ASSERT, "(db > -1000.0f)", (const char *)&queryFormat, "db > -1000.0f") )
    __debugbreak();
  __asm { vmovss  [rsp+0C8h+arg_0], xmm7 }
  if ( (v79 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 136, ASSERT_TYPE_ASSERT, "(!IS_NAN( db ))", (const char *)&queryFormat, "!IS_NAN( db )") )
    __debugbreak();
  __asm
  {
    vmulss  xmm1, xmm7, cs:__real@3ccccccd; Y
    vmovss  xmm0, cs:__real@41200000; X
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
    vmovss  xmm1, cs:__real@3f000000
    vsubss  xmm9, xmm10, cs:__real@3f800000
    vaddss  xmm8, xmm10, cs:__real@3f800000
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
    vaddss  xmm3, xmm7, xmm8
    vmovss  [rsp+0C8h+var_94], xmm2
    vmulss  xmm2, xmm9, cs:__real@c0000000
    vaddss  xmm1, xmm3, xmm6
    vmovss  [rsp+0C8h+var_90], xmm0
    vmulss  xmm0, xmm4, xmm12
    vmovss  [rsp+0C8h+a], xmm1
    vsubss  xmm1, xmm2, xmm0
    vsubss  xmm2, xmm3, xmm6
    vmovss  [rsp+0C8h+var_80], xmm2
    vmovss  [rsp+0C8h+var_84], xmm1
  }
  SND_DspBiquadNormalize(a, b, coef);
  _R11 = &v75;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
  }
}

/*
==============
SND_DspBiquadNormalize
==============
*/
void SND_DspBiquadNormalize(float *a, float *b, SndDspBiQuadCoef *coef)
{
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 
  int v33; 

  _RBX = coef;
  _RDI = b;
  _RSI = a;
  if ( a == b && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 53, ASSERT_TYPE_ASSERT, "(a != b)", (const char *)&queryFormat, "a != b") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v23 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 55, ASSERT_TYPE_ASSERT, "(!IS_NAN( b[0] ))", (const char *)&queryFormat, "!IS_NAN( b[0] )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v24 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 56, ASSERT_TYPE_ASSERT, "(!IS_NAN( b[1] ))", (const char *)&queryFormat, "!IS_NAN( b[1] )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v25 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 57, ASSERT_TYPE_ASSERT, "(!IS_NAN( b[2] ))", (const char *)&queryFormat, "!IS_NAN( b[2] )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v26 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 58, ASSERT_TYPE_ASSERT, "(!IS_NAN( a[0] ))", (const char *)&queryFormat, "!IS_NAN( a[0] )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+4]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v27 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 59, ASSERT_TYPE_ASSERT, "(!IS_NAN( a[1] ))", (const char *)&queryFormat, "!IS_NAN( a[1] )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+8]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v28 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 60, ASSERT_TYPE_ASSERT, "(!IS_NAN( a[2] ))", (const char *)&queryFormat, "!IS_NAN( a[2] )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vdivss  xmm2, xmm0, dword ptr [rsi]
    vmulss  xmm3, xmm2, dword ptr [rdi]
    vmulss  xmm0, xmm2, dword ptr [rdi+4]
    vmulss  xmm1, xmm2, dword ptr [rdi+8]
    vmovss  dword ptr [rbx+4], xmm0
    vmulss  xmm0, xmm2, dword ptr [rsi+4]
    vmovss  [rsp+38h+arg_0], xmm3
    vmovss  dword ptr [rbx+0Ch], xmm0
    vmulss  xmm0, xmm2, dword ptr [rsi+8]
    vmovss  dword ptr [rbx], xmm3
    vmovss  dword ptr [rbx+8], xmm1
    vmovss  dword ptr [rbx+10h], xmm0
  }
  if ( (v29 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 73, ASSERT_TYPE_ASSERT, "(!IS_NAN( coef->s[0] ))", (const char *)&queryFormat, "!IS_NAN( coef->s[0] )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v30 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 74, ASSERT_TYPE_ASSERT, "(!IS_NAN( coef->s[1] ))", (const char *)&queryFormat, "!IS_NAN( coef->s[1] )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v31 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 75, ASSERT_TYPE_ASSERT, "(!IS_NAN( coef->s[2] ))", (const char *)&queryFormat, "!IS_NAN( coef->s[2] )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0Ch]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v32 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 76, ASSERT_TYPE_ASSERT, "(!IS_NAN( coef->s[3] ))", (const char *)&queryFormat, "!IS_NAN( coef->s[3] )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+10h]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v33 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 77, ASSERT_TYPE_ASSERT, "(!IS_NAN( coef->s[4] ))", (const char *)&queryFormat, "!IS_NAN( coef->s[4] )") )
    __debugbreak();
}

/*
==============
SND_DspClip
==============
*/

void __fastcall SND_DspClip(unsigned int count, float *c, double minimum, double maximum)
{
  unsigned int v12; 
  float *v19; 
  __int64 v20; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
  }
  _RBX = c;
  __asm
  {
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm2
  }
  if ( ((unsigned __int8)c & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 301, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( c ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )c ) ) = 0x%llx", c) )
    __debugbreak();
  v12 = count >> 3;
  __asm
  {
    vmovaps xmm2, xmm6
    vmovaps xmm3, xmm7
    vshufps xmm2, xmm2, xmm2, 0
    vshufps xmm3, xmm3, xmm3, 0
    vinsertf128 ymm2, ymm2, xmm2, 1
    vinsertf128 ymm3, ymm3, xmm3, 1
  }
  if ( v12 )
  {
    v19 = _RBX;
    v20 = v12;
    do
    {
      _RBX += 8;
      __asm { vmaxps  ymm0, ymm3, ymmword ptr [rax] }
      v19 += 8;
      __asm
      {
        vminps  ymm1, ymm2, ymm0
        vmovups ymmword ptr [rbx-20h], ymm1
      }
      --v20;
    }
    while ( v20 );
  }
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
  }
}

/*
==============
SND_DspFutzMono
==============
*/

void __fastcall SND_DspFutzMono(const SndDspFutzParam *param, SndDspFutzState *state, double rate, unsigned int count, float *input, float *tempa, float *tempb)
{
  bool v15; 
  bool v16; 
  bool v17; 
  bool v20; 
  SndDspBiQuadCoef coef; 

  __asm
  {
    vmovaps [rsp+0B8h+var_48], xmm6
    vmovaps [rsp+0B8h+var_68], xmm9
  }
  _RBX = param;
  __asm { vmovaps xmm9, xmm2 }
  if ( input == tempa && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 323, ASSERT_TYPE_ASSERT, "(input != tempa)", (const char *)&queryFormat, "input != tempa") )
    __debugbreak();
  v15 = tempa < tempb;
  v16 = tempa <= tempb;
  if ( tempa == tempb )
  {
    v17 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 324, ASSERT_TYPE_ASSERT, "(tempa != tempb)", (const char *)&queryFormat, "tempa != tempb");
    v15 = 0;
    v16 = !v17;
    if ( v17 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm6, dword ptr [rbx]
    vcomiss xmm6, cs:__real@37803e84
  }
  if ( !v15 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm6, xmm0
      vmovaps [rsp+0B8h+var_58], xmm8
    }
    if ( v15 )
    {
      v20 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 331, ASSERT_TYPE_ASSERT, "(param->blend >= 0.0f)", (const char *)&queryFormat, "param->blend >= 0.0f");
      v16 = !v20;
      if ( v20 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm8, cs:__real@3f800000
      vcomiss xmm6, xmm8
    }
    if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 332, ASSERT_TYPE_ASSERT, "(param->blend <= 1.0f)", (const char *)&queryFormat, "param->blend <= 1.0f") )
      __debugbreak();
    __asm { vmovss  xmm1, dword ptr [rbx+1Ch]; scale }
    SND_DspScale(count, *(float *)&_XMM1, input, tempa);
    __asm { vmovss  xmm1, dword ptr [rbx+18h]; amount }
    SND_DspPolyDistortion(count, *(float *)&_XMM1, tempa, tempb);
    __asm
    {
      vmovss  xmm3, dword ptr [rbx+24h]; maximum
      vxorps  xmm2, xmm3, cs:__xmm@80000000800000008000000080000000; minimum
    }
    SND_DspClip(count, tempa, *(float *)&_XMM2, *(float *)&_XMM3);
    __asm
    {
      vmovss  xmm2, dword ptr [rbx+8]; q
      vmovss  xmm1, dword ptr [rbx+4]; Fhz
      vmovaps xmm0, xmm9; Fs
    }
    SND_DspBiquadBpf(*(double *)&_XMM0, *(double *)&_XMM1, *(double *)&_XMM2, &coef);
    SND_DspBiquadInPlace(&coef, &state->bpf, count, tempa);
    __asm
    {
      vmovss  xmm3, dword ptr [rbx+14h]; q
      vmovss  xmm2, dword ptr [rbx+10h]; Fhz
      vmovss  xmm1, dword ptr [rbx+0Ch]; db
      vmovaps xmm0, xmm9; Fs
    }
    SND_DspBiquadLShelve(*(double *)&_XMM0, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, &coef);
    SND_DspBiquadInPlace(&coef, &state->ls, count, tempa);
    __asm { vmovaps xmm2, xmm9; frameRate }
    SND_DspSquelch(&_RBX->squelch, &state->squelch, *(float *)&_XMM2, count, tempa);
    __asm
    {
      vmovss  xmm6, dword ptr [rbx]
      vmulss  xmm1, xmm6, dword ptr [rbx+20h]; scale
    }
    SND_DspScale(count, *(float *)&_XMM1, tempa, tempa);
    __asm { vsubss  xmm1, xmm8, xmm6; scale }
    SND_DspScale(count, *(float *)&_XMM1, input, input);
    SND_DspSum(count, tempa, input);
    __asm
    {
      vmovss  xmm3, dword ptr [rbx+28h]; maximum
      vxorps  xmm2, xmm3, cs:__xmm@80000000800000008000000080000000; minimum
    }
    SND_DspClip(count, input, *(float *)&_XMM2, *(float *)&_XMM3);
    __asm { vmovaps xmm8, [rsp+0B8h+var_58] }
  }
  __asm
  {
    vmovaps xmm6, [rsp+0B8h+var_48]
    vmovaps xmm9, [rsp+0B8h+var_68]
  }
}

/*
==============
SND_DspInit
==============
*/
void SND_DspInit()
{
  __asm
  {
    vmovups ymm3, cs:__ymm@3d0080813d0080813d0080813d0080813d0080813d0080813d0080813d008081
    vmovups ymm4, cs:__ymm@3ce0e0e13cc0c0c13ca0a0a13c8080813c40c0c13c0080813b80808100000000
    vmovups ymm5, cs:__ymm@3f8000003f8000003f8000003f8000003f8000003f8000003f8000003f800000
  }
  _EDX = 2;
  _R8 = 0x140000000ui64;
  _RCX = 0i64;
  do
  {
    _EAX = _EDX - 2;
    __asm
    {
      vmovd   xmm0, eax
      vcvtdq2ps xmm0, xmm0
      vshufps xmm0, xmm0, xmm0, 0
      vinsertf128 ymm0, ymm0, xmm0, 1
      vmulps  ymm0, ymm0, ymm3
      vaddps  ymm1, ymm0, ymm4
      vsubps  ymm0, ymm5, ymm1
      vmovups ymmword ptr [rcx+r8+15E04180h], ymm0
      vmovups ymmword ptr [rcx+r8+15E03D80h], ymm1
    }
    _EAX = _EDX - 1;
    __asm
    {
      vmovd   xmm1, eax
      vcvtdq2ps xmm1, xmm1
      vshufps xmm1, xmm1, xmm1, 0
      vinsertf128 ymm1, ymm1, xmm1, 1
      vmulps  ymm0, ymm1, ymm3
      vaddps  ymm2, ymm0, ymm4
      vsubps  ymm0, ymm5, ymm2
      vmovups ymmword ptr [rcx+r8+15E041A0h], ymm0
      vmovd   xmm0, edx
      vcvtdq2ps xmm0, xmm0
      vshufps xmm0, xmm0, xmm0, 0
      vinsertf128 ymm0, ymm0, xmm0, 1
      vmulps  ymm0, ymm0, ymm3
      vaddps  ymm1, ymm0, ymm4
      vsubps  ymm0, ymm5, ymm1
      vmovups ymmword ptr [rcx+r8+15E041C0h], ymm0
      vmovups ymmword ptr [rcx+r8+15E03DC0h], ymm1
    }
    _EAX = _EDX + 1;
    __asm
    {
      vmovd   xmm0, eax
      vcvtdq2ps xmm0, xmm0
      vshufps xmm0, xmm0, xmm0, 0
      vinsertf128 ymm0, ymm0, xmm0, 1
      vmulps  ymm0, ymm0, ymm3
      vaddps  ymm1, ymm0, ymm4
      vsubps  ymm0, ymm5, ymm1
      vmovups ymmword ptr [rcx+r8+15E041E0h], ymm0
      vmovups ymmword ptr [rcx+r8+15E03DE0h], ymm1
    }
    _EAX = _EDX + 2;
    __asm
    {
      vmovd   xmm0, eax
      vcvtdq2ps xmm0, xmm0
      vshufps xmm0, xmm0, xmm0, 0
      vinsertf128 ymm0, ymm0, xmm0, 1
      vmulps  ymm0, ymm0, ymm3
      vaddps  ymm1, ymm0, ymm4
      vsubps  ymm0, ymm5, ymm1
      vmovups ymmword ptr [rcx+r8+15E04200h], ymm0
      vmovups ymmword ptr [rcx+r8+15E03E00h], ymm1
    }
    _EAX = _EDX + 3;
    __asm
    {
      vmovd   xmm0, eax
      vcvtdq2ps xmm0, xmm0
      vshufps xmm0, xmm0, xmm0, 0
      vinsertf128 ymm0, ymm0, xmm0, 1
      vmulps  ymm0, ymm0, ymm3
      vaddps  ymm1, ymm0, ymm4
      vsubps  ymm0, ymm5, ymm1
      vmovups ymmword ptr [rcx+r8+15E04220h], ymm0
    }
    _EAX = _EDX + 4;
    __asm
    {
      vmovd   xmm0, eax
      vcvtdq2ps xmm0, xmm0
      vshufps xmm0, xmm0, xmm0, 0
      vinsertf128 ymm0, ymm0, xmm0, 1
      vmulps  ymm0, ymm0, ymm3
      vmovups ymmword ptr [rcx+r8+15E03E20h], ymm1
      vaddps  ymm1, ymm0, ymm4
      vsubps  ymm0, ymm5, ymm1
      vmovups ymmword ptr [rcx+r8+15E04240h], ymm0
    }
    _EAX = _EDX + 5;
    __asm
    {
      vmovd   xmm0, eax
      vcvtdq2ps xmm0, xmm0
      vshufps xmm0, xmm0, xmm0, 0
      vinsertf128 ymm0, ymm0, xmm0, 1
      vmulps  ymm0, ymm0, ymm3
      vmovups ymmword ptr [rcx+r8+15E03E40h], ymm1
      vaddps  ymm1, ymm0, ymm4
      vsubps  ymm0, ymm5, ymm1
    }
    _EAX = _EDX + 6;
    __asm
    {
      vmovups ymmword ptr [rcx+r8+15E04260h], ymm0
      vmovd   xmm0, eax
      vmovups ymmword ptr [rcx+r8+15E03DA0h], ymm2
      vmovups ymmword ptr [rcx+r8+15E03E60h], ymm1
      vcvtdq2ps xmm0, xmm0
      vshufps xmm0, xmm0, xmm0, 0
      vinsertf128 ymm0, ymm0, xmm0, 1
      vmulps  ymm0, ymm0, ymm3
      vaddps  ymm1, ymm0, ymm4
      vsubps  ymm0, ymm5, ymm1
      vmovups ymmword ptr [rcx+r8+15E04280h], ymm0
      vmovups ymmword ptr [rcx+r8+15E03E80h], ymm1
    }
    _EAX = _EDX + 7;
    __asm
    {
      vmovd   xmm0, eax
      vcvtdq2ps xmm0, xmm0
      vshufps xmm0, xmm0, xmm0, 0
      vinsertf128 ymm0, ymm0, xmm0, 1
      vmulps  ymm0, ymm0, ymm3
      vaddps  ymm1, ymm0, ymm4
      vsubps  ymm0, ymm5, ymm1
      vmovups ymmword ptr [rcx+r8+15E042A0h], ymm0
      vmovups ymmword ptr [rcx+r8+15E03EA0h], ymm1
    }
    _EAX = _EDX + 8;
    __asm
    {
      vmovd   xmm0, eax
      vcvtdq2ps xmm0, xmm0
      vshufps xmm0, xmm0, xmm0, 0
      vinsertf128 ymm0, ymm0, xmm0, 1
      vmulps  ymm0, ymm0, ymm3
      vaddps  ymm1, ymm0, ymm4
      vsubps  ymm0, ymm5, ymm1
      vmovups ymmword ptr [rcx+r8+15E042C0h], ymm0
      vmovups ymmword ptr [rcx+r8+15E03EC0h], ymm1
    }
    _EAX = _EDX + 9;
    __asm
    {
      vmovd   xmm0, eax
      vcvtdq2ps xmm0, xmm0
      vshufps xmm0, xmm0, xmm0, 0
      vinsertf128 ymm0, ymm0, xmm0, 1
      vmulps  ymm0, ymm0, ymm3
      vaddps  ymm1, ymm0, ymm4
      vsubps  ymm0, ymm5, ymm1
      vmovups ymmword ptr [rcx+r8+15E042E0h], ymm0
      vmovups ymmword ptr [rcx+r8+15E03EE0h], ymm1
    }
    _EAX = _EDX + 10;
    __asm
    {
      vmovd   xmm0, eax
      vcvtdq2ps xmm0, xmm0
      vshufps xmm0, xmm0, xmm0, 0
      vinsertf128 ymm0, ymm0, xmm0, 1
      vmulps  ymm0, ymm0, ymm3
      vaddps  ymm1, ymm0, ymm4
      vsubps  ymm0, ymm5, ymm1
      vmovups ymmword ptr [rcx+r8+15E04300h], ymm0
      vmovups ymmword ptr [rcx+r8+15E03F00h], ymm1
    }
    _EAX = _EDX + 11;
    __asm
    {
      vmovd   xmm0, eax
      vcvtdq2ps xmm0, xmm0
      vshufps xmm0, xmm0, xmm0, 0
      vinsertf128 ymm0, ymm0, xmm0, 1
      vmulps  ymm0, ymm0, ymm3
      vaddps  ymm1, ymm0, ymm4
      vsubps  ymm0, ymm5, ymm1
      vmovups ymmword ptr [rcx+r8+15E04320h], ymm0
    }
    _EAX = _EDX + 12;
    __asm
    {
      vmovd   xmm0, eax
      vcvtdq2ps xmm0, xmm0
      vshufps xmm0, xmm0, xmm0, 0
      vinsertf128 ymm0, ymm0, xmm0, 1
      vmulps  ymm0, ymm0, ymm3
      vmovups ymmword ptr [rcx+r8+15E03F20h], ymm1
      vaddps  ymm1, ymm0, ymm4
      vsubps  ymm0, ymm5, ymm1
      vmovups ymmword ptr [rcx+r8+15E04340h], ymm0
    }
    _EAX = _EDX + 13;
    _EDX += 16;
    __asm
    {
      vmovd   xmm0, eax
      vcvtdq2ps xmm0, xmm0
      vshufps xmm0, xmm0, xmm0, 0
      vinsertf128 ymm0, ymm0, xmm0, 1
      vmulps  ymm0, ymm0, ymm3
      vmovups ymmword ptr [rcx+r8+15E03F40h], ymm1
      vaddps  ymm1, ymm0, ymm4
      vsubps  ymm0, ymm5, ymm1
      vmovups ymmword ptr [rcx+r8+15E04360h], ymm0
      vmovups ymmword ptr [rcx+r8+15E03F60h], ymm1
    }
    _RCX += 512i64;
  }
  while ( _EDX - 2 < 32 );
}

/*
==============
SND_DspPolyDistortion
==============
*/

void __fastcall SND_DspPolyDistortion(unsigned int count, double amount, float *frame, float *temp)
{
  __int64 v6; 
  __int64 v12; 
  __int64 v13; 
  __int64 v16; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  v6 = count;
  __asm { vmovaps xmm6, xmm1 }
  if ( frame == temp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 236, ASSERT_TYPE_ASSERT, "(frame != temp)", (const char *)&queryFormat, "frame != temp") )
    __debugbreak();
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000; max
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm0, xmm6; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovaps xmm6, xmm0 }
  if ( ((unsigned __int8)frame & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 458, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( in ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )in ) ) = 0x%llx", frame) )
    __debugbreak();
  if ( ((unsigned __int8)temp & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 459, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( out ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )out ) ) = 0x%llx", temp) )
    __debugbreak();
  if ( (v6 & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.h", 460, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( count ) ) & 7 ) == 0 ) )", "( ( ( uintptr_t )count ) ) = 0x%llx", v6) )
    __debugbreak();
  v16 = (unsigned int)v6 >> 3;
  if ( (unsigned int)v6 >> 3 )
  {
    _RAX = temp;
    _RCX = frame;
    do
    {
      _RAX += 8;
      __asm { vmovups ymm0, ymmword ptr [rcx] }
      _RCX += 8;
      __asm
      {
        vmulps  ymm0, ymm0, ymm0
        vmovups ymmword ptr [rax-20h], ymm0
      }
      --v16;
    }
    while ( v16 );
  }
  __asm
  {
    vmulss  xmm1, xmm6, cs:__real@3fc90fdb
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm0, xmm0, xmm1
  }
  *(double *)&_XMM0 = j___libm_sse2_sincosf_(_RCX, v16, v12, v13);
  __asm
  {
    vshufps xmm1, xmm0, xmm0, 1; scale
    vmovups xmm6, xmm0
  }
  SND_DspScale(v6, *(float *)&_XMM1, frame, frame);
  __asm { vmovaps xmm1, xmm6; scale }
  SND_DspScale(v6, *(float *)&_XMM1, temp, temp);
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
  SND_DspSum(v6, temp, frame);
}

/*
==============
SND_DspSquelch
==============
*/
void SND_DspSquelch(const SndDspSquelchParam *param, SndDspSquelchState *state, float frameRate, unsigned int frameCount, float *input)
{
  bool v20; 
  bool v21; 
  bool v22; 
  bool v23; 
  __int64 v27; 
  unsigned int v33; 
  __int64 v34; 
  __int64 v95; 
  char v118; 
  void *retaddr; 
  int v120; 
  int v121; 
  int v122; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovss  xmm7, cs:__real@3f800000
    vmovaps xmmword ptr [rax-38h], xmm8
  }
  _RDI = state;
  __asm { vmovaps xmmword ptr [rax-48h], xmm9 }
  _RSI = param;
  __asm
  {
    vmovss  xmm9, dword ptr [rcx]
    vmovaps xmmword ptr [rax-58h], xmm10
    vxorps  xmm8, xmm8, xmm8
    vcomiss xmm9, xmm8
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vdivss  xmm6, xmm7, xmm2
    vmovss  [rsp+0A8h+arg_10], xmm9
  }
  v20 = (v120 & 0x7F800000u) < 0x7F800000;
  if ( (v120 & 0x7F800000) == 2139095040 )
  {
    v21 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 260, ASSERT_TYPE_ASSERT, "(!IS_NAN( time ))", (const char *)&queryFormat, "!IS_NAN( time )");
    v20 = 0;
    if ( v21 )
      __debugbreak();
  }
  __asm { vcomiss xmm6, xmm8 }
  if ( v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 261, ASSERT_TYPE_ASSERT, "(dt >= 0)", (const char *)&queryFormat, "dt >= 0") )
    __debugbreak();
  __asm { vmovss  [rsp+0A8h+arg_10], xmm6 }
  v22 = (v121 & 0x7F800000u) <= 0x7F800000;
  if ( (v121 & 0x7F800000) == 2139095040 )
  {
    v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 262, ASSERT_TYPE_ASSERT, "(!IS_NAN( dt ))", (const char *)&queryFormat, "!IS_NAN( dt )");
    v22 = !v23;
    if ( v23 )
      __debugbreak();
  }
  __asm { vcomiss xmm9, xmm6 }
  if ( !v22 )
  {
    __asm
    {
      vmulss  xmm0, xmm6, cs:__real@40a5c940
      vdivss  xmm8, xmm0, xmm9
    }
  }
  __asm { vmovss  xmm9, dword ptr [rsi+4] }
  v27 = 0i64;
  __asm
  {
    vmovss  xmm12, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm6, dword ptr [rdi+4]
    vsubss  xmm10, xmm7, xmm8
    vdivss  xmm11, xmm7, xmm9
  }
  if ( frameCount >= 4 )
  {
    _RCX = input + 2;
    v33 = ((frameCount - 4) >> 2) + 1;
    v34 = v33;
    v27 = 4 * v33;
    do
    {
      __asm { vmovss  xmm5, dword ptr [rcx-8] }
      _RCX += 4;
      __asm
      {
        vandps  xmm0, xmm5, xmm12
        vmaxss  xmm1, xmm0, xmm9
        vsubss  xmm4, xmm7, xmm1
        vmulss  xmm0, xmm4, xmm4
        vmulss  xmm1, xmm0, xmm4
        vmulss  xmm2, xmm1, xmm4
        vmulss  xmm3, xmm2, xmm4
        vmulss  xmm0, xmm3, xmm4
        vmulss  xmm1, xmm0, xmm11
        vaddss  xmm2, xmm1, xmm7
        vmulss  xmm3, xmm2, xmm8
        vmulss  xmm0, xmm6, xmm10
        vaddss  xmm6, xmm3, xmm0
        vmulss  xmm1, xmm6, xmm5
        vmovss  xmm5, dword ptr [rcx-14h]
        vmovss  dword ptr [rcx-18h], xmm1
        vandps  xmm0, xmm5, xmm12
        vmaxss  xmm1, xmm0, xmm9
        vsubss  xmm4, xmm7, xmm1
        vmulss  xmm0, xmm4, xmm4
        vmulss  xmm1, xmm0, xmm4
        vmulss  xmm2, xmm1, xmm4
        vmulss  xmm3, xmm2, xmm4
        vmulss  xmm0, xmm3, xmm4
        vmulss  xmm1, xmm0, xmm11
        vaddss  xmm2, xmm1, xmm7
        vmulss  xmm3, xmm2, xmm8
        vmulss  xmm0, xmm6, xmm10
        vaddss  xmm6, xmm3, xmm0
        vmulss  xmm1, xmm6, xmm5
        vmovss  xmm5, dword ptr [rcx-10h]
        vmovss  dword ptr [rcx-14h], xmm1
        vandps  xmm0, xmm5, xmm12
        vmaxss  xmm1, xmm0, xmm9
        vsubss  xmm4, xmm7, xmm1
        vmulss  xmm0, xmm4, xmm4
        vmulss  xmm1, xmm0, xmm4
        vmulss  xmm2, xmm1, xmm4
        vmulss  xmm3, xmm2, xmm4
        vmulss  xmm0, xmm3, xmm4
        vmulss  xmm1, xmm0, xmm11
        vaddss  xmm2, xmm1, xmm7
        vmulss  xmm3, xmm2, xmm8
        vmulss  xmm0, xmm6, xmm10
        vaddss  xmm6, xmm3, xmm0
        vmulss  xmm1, xmm6, xmm5
        vmovss  xmm5, dword ptr [rcx-0Ch]
        vmovss  dword ptr [rcx-10h], xmm1
        vandps  xmm0, xmm5, xmm12
        vmaxss  xmm1, xmm0, xmm9
        vsubss  xmm4, xmm7, xmm1
        vmulss  xmm0, xmm4, xmm4
        vmulss  xmm1, xmm0, xmm4
        vmulss  xmm2, xmm1, xmm4
        vmulss  xmm3, xmm2, xmm4
        vmulss  xmm0, xmm3, xmm4
        vmulss  xmm1, xmm0, xmm11
        vmulss  xmm0, xmm6, xmm10
        vaddss  xmm2, xmm1, xmm7
        vmulss  xmm3, xmm2, xmm8
        vaddss  xmm6, xmm3, xmm0
        vmulss  xmm0, xmm6, xmm5
        vmovss  dword ptr [rcx-0Ch], xmm0
      }
      --v34;
    }
    while ( v34 );
    __asm { vmovss  dword ptr [rdi+4], xmm6 }
  }
  if ( (unsigned int)v27 < frameCount )
  {
    _RCX = &input[v27];
    v95 = frameCount - (unsigned int)v27;
    do
    {
      __asm { vmovss  xmm5, dword ptr [rcx] }
      ++_RCX;
      __asm
      {
        vandps  xmm0, xmm5, xmm12
        vmaxss  xmm1, xmm0, xmm9
        vsubss  xmm4, xmm7, xmm1
        vmulss  xmm0, xmm4, xmm4
        vmulss  xmm1, xmm0, xmm4
        vmulss  xmm2, xmm1, xmm4
        vmulss  xmm3, xmm2, xmm4
        vmulss  xmm0, xmm3, xmm4
        vmulss  xmm1, xmm0, xmm11
        vmulss  xmm0, xmm6, xmm10
        vaddss  xmm2, xmm1, xmm7
        vmulss  xmm3, xmm2, xmm8
        vaddss  xmm6, xmm3, xmm0
        vmulss  xmm0, xmm6, xmm5
        vmovss  dword ptr [rcx-4], xmm0
      }
      --v95;
    }
    while ( v95 );
    __asm { vmovss  dword ptr [rdi+4], xmm6 }
  }
  __asm { vmovss  [rsp+0A8h+arg_10], xmm6 }
  if ( (v122 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\snd_dsp.cpp", 294, ASSERT_TYPE_ASSERT, "(!IS_NAN( state->g ))", (const char *)&queryFormat, "!IS_NAN( state->g )") )
    __debugbreak();
  _R11 = &v118;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
  }
}

