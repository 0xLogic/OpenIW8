/*
==============
AD_ResetBiquadState
==============
*/

void __fastcall AD_ResetBiquadState(AD_BiquadState *const state)
{
  ?AD_ResetBiquadState@@YAXQEAUAD_BiquadState@@@Z(state);
}

/*
==============
AD_CalcBiquadCoefficientsAtRate
==============
*/

void __fastcall AD_CalcBiquadCoefficientsAtRate(AD_BiquadCoeffs *const coeffs, const AD_EQType type, const float freqIn, const float qIn, const float gain, const unsigned int rate)
{
  ?AD_CalcBiquadCoefficientsAtRate@@YAXQEAUAD_BiquadCoeffs@@W4AD_EQType@@MMMK@Z(coeffs, type, freqIn, qIn, gain, rate);
}

/*
==============
AD_MathInit
==============
*/

void AD_MathInit(void)
{
  ?AD_MathInit@@YAXXZ();
}

/*
==============
AD_MathDestroy
==============
*/

void AD_MathDestroy(void)
{
  ?AD_MathDestroy@@YAXXZ();
}

/*
==============
AD_ScrutinizeSample
==============
*/

double __fastcall AD_ScrutinizeSample(const float in)
{
  double result; 

  *(float *)&result = ?AD_ScrutinizeSample@@YAMM@Z(in);
  return result;
}

/*
==============
AD_CalcBiquadCoefficientsAtRate
==============
*/

void __fastcall AD_CalcBiquadCoefficientsAtRate(AD_BiquadCoeffs *const coeffs, __int64 type, double freqIn, double qIn, const float gain)
{
  __int64 v5; 
  __int64 v6; 
  unsigned int v21; 
  char v153; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  _RBX = coeffs;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps [rsp+0D8h+var_88], xmm13
  }
  v21 = type;
  __asm
  {
    vmovaps xmm7, xmm3
    vmovaps xmm6, xmm2
  }
  if ( !coeffs && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_math.cpp", 23, ASSERT_TYPE_ASSERT, "coeffs", "coeffs") )
    __debugbreak();
  __asm
  {
    vmovss  xmm8, cs:__real@3f000000
    vmovss  xmm11, cs:__real@37803e84
    vmovss  xmm10, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vmovaps xmm1, xmm6
    vmovss  xmm3, xmm0, xmm1
    vxorps  xmm2, xmm2, xmm2
    vmaxss  xmm3, xmm3, xmm2
    vxorps  xmm4, xmm4, xmm4
    vcvtsi2ss xmm4, xmm4, rax
    vmulss  xmm2, xmm4, xmm8
    vmovaps xmm1, xmm2
    vminss  xmm3, xmm3, xmm2
    vmovaps xmm1, xmm11
    vmovaps xmm2, xmm7
    vmovss  xmm9, xmm0, xmm2
    vmaxss  xmm9, xmm9, xmm1
    vdivss  xmm0, xmm3, xmm4
    vmulss  xmm13, xmm0, cs:__real@40c90fdb
    vmovaps xmm1, xmm10
    vminss  xmm9, xmm9, xmm1
    vmovaps xmm1, xmm13
    vmovaps xmm0, xmm1
    vxorps  xmm6, xmm6, xmm6
  }
  *(double *)&_XMM0 = j___libm_sse2_sincosf_(coeffs, type, v5, v6);
  __asm
  {
    vmovups xmm7, xmm0
    vshufps xmm12, xmm0, xmm0, 1
  }
  if ( v21 <= 1 )
  {
    __asm
    {
      vandps  xmm0, xmm7, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm0, xmm11
      vxorps  xmm7, xmm7, xmm7
      vxorps  xmm8, xmm8, xmm8
      vxorps  xmm9, xmm9, xmm9
    }
  }
  else
  {
    __asm
    {
      vdivss  xmm0, xmm8, xmm9
      vmovaps [rsp+0D8h+var_98], xmm14
      vmulss  xmm0, xmm7, xmm0; in
      vmovaps [rsp+0D8h+var_A8], xmm15
    }
    *(double *)&_XMM0 = AD_ScrutinizeSample(*(const float *)&_XMM0);
    __asm { vmovaps xmm7, xmm0 }
    switch ( v21 )
    {
      case 0u:
        __asm
        {
          vsubss  xmm13, xmm10, xmm12; jumptable 00000001437EB9E9 case 0
          vmulss  xmm11, xmm13, xmm8
        }
        goto LABEL_9;
      case 1u:
        __asm
        {
          vaddss  xmm0, xmm12, xmm10; jumptable 00000001437EB9E9 case 1
          vaddss  xmm1, xmm12, xmm10
          vxorps  xmm13, xmm1, cs:__xmm@80000000800000008000000080000000
          vmulss  xmm11, xmm0, xmm8
        }
LABEL_9:
        __asm
        {
          vmulss  xmm4, xmm12, cs:__real@c0000000
          vaddss  xmm14, xmm7, xmm10
          vmovaps xmm15, xmm11
          vsubss  xmm6, xmm10, xmm7
        }
        goto LABEL_19;
      case 2u:
        __asm
        {
          vmovss  xmm0, [rsp+0D8h+gain]; jumptable 00000001437EB9E9 case 2
          vmulss  xmm1, xmm0, cs:__real@3ccccccd; Y
          vmovss  xmm0, cs:__real@41200000; X
        }
        *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
        __asm
        {
          vsubss  xmm6, xmm0, xmm10
          vaddss  xmm3, xmm0, xmm10
          vmovaps xmm8, xmm0
          vsqrtss xmm1, xmm8, xmm0
          vmulss  xmm2, xmm1, xmm7
          vmovss  xmm7, cs:__real@40000000
          vmulss  xmm9, xmm2, xmm7
          vmulss  xmm2, xmm6, xmm12
          vsubss  xmm4, xmm3, xmm2
          vaddss  xmm1, xmm4, xmm9
          vmulss  xmm11, xmm1, xmm0
          vmulss  xmm5, xmm3, xmm12
          vsubss  xmm1, xmm6, xmm5
          vmulss  xmm0, xmm1, xmm0
          vaddss  xmm3, xmm3, xmm2
          vmulss  xmm2, xmm6, cs:__real@c0000000
          vsubss  xmm1, xmm4, xmm9
          vmulss  xmm13, xmm0, xmm7
          vmulss  xmm0, xmm5, xmm7
          vsubss  xmm4, xmm2, xmm0
          vaddss  xmm14, xmm3, xmm9
          vmulss  xmm15, xmm1, xmm8
          vsubss  xmm6, xmm3, xmm9
        }
        goto LABEL_19;
      case 3u:
        __asm
        {
          vmovss  xmm0, [rsp+0D8h+gain]; jumptable 00000001437EB9E9 case 3
          vmulss  xmm1, xmm0, cs:__real@3ccccccd; Y
          vmovss  xmm0, cs:__real@41200000; X
        }
        *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
        __asm
        {
          vsubss  xmm6, xmm0, xmm10
          vmovaps xmm9, xmm0
          vsqrtss xmm1, xmm9, xmm0
          vmulss  xmm2, xmm1, xmm7
          vmulss  xmm8, xmm2, cs:__real@40000000
          vaddss  xmm2, xmm0, xmm10
          vmulss  xmm4, xmm2, xmm12
          vmulss  xmm3, xmm6, xmm12
          vaddss  xmm5, xmm2, xmm3
          vaddss  xmm1, xmm5, xmm8
          vmulss  xmm11, xmm1, xmm0
          vaddss  xmm1, xmm6, xmm4
          vmulss  xmm0, xmm1, xmm0
          vmulss  xmm13, xmm0, cs:__real@c0000000
          vsubss  xmm0, xmm6, xmm4
          vmulss  xmm4, xmm0, cs:__real@40000000
          vsubss  xmm2, xmm2, xmm3
          vsubss  xmm1, xmm5, xmm8
          vaddss  xmm14, xmm2, xmm8
          vmulss  xmm15, xmm1, xmm9
          vsubss  xmm6, xmm2, xmm8
        }
        goto LABEL_19;
      case 4u:
        __asm
        {
          vmovss  xmm0, [rsp+0D8h+gain]; jumptable 00000001437EB9E9 case 4
          vmulss  xmm1, xmm0, cs:__real@3ccccccd; Y
          vmovss  xmm0, cs:__real@41200000; X
        }
        powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
        __asm
        {
          vmulss  xmm13, xmm12, cs:__real@c0000000
          vmulss  xmm2, xmm7, xmm0
          vdivss  xmm1, xmm7, xmm0
          vaddss  xmm11, xmm2, xmm10
          vaddss  xmm14, xmm1, xmm10
          vsubss  xmm15, xmm10, xmm2
          vsubss  xmm6, xmm10, xmm1
          vmovaps xmm4, xmm13
        }
        goto LABEL_19;
      case 5u:
        __asm
        {
          vxorps  xmm15, xmm7, cs:__xmm@80000000800000008000000080000000; jumptable 00000001437EB9E9 case 5
          vmulss  xmm4, xmm12, cs:__real@c0000000
          vmovaps xmm11, xmm7
          vaddss  xmm14, xmm7, xmm10
          vsubss  xmm6, xmm10, xmm7
        }
        goto LABEL_18;
      default:
        AD_LogFunc("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_math.cpp", "145", (const AD_LogCategory)5, "Unhandled eq type");
        if ( (unsigned int)AD_GetLogBreakLevel() <= 5 )
          __debugbreak();
        __asm
        {
          vmovaps xmm11, xmm10
          vmovaps xmm14, xmm10
          vxorps  xmm15, xmm15, xmm15
          vxorps  xmm4, xmm4, xmm4
        }
LABEL_18:
        __asm { vxorps  xmm13, xmm13, xmm13 }
LABEL_19:
        __asm
        {
          vdivss  xmm0, xmm10, xmm14
          vmulss  xmm8, xmm0, xmm15
          vmovaps xmm15, [rsp+0D8h+var_A8]
          vdivss  xmm10, xmm11, xmm14
          vmovaps xmm14, [rsp+0D8h+var_98]
          vmulss  xmm6, xmm0, xmm6
          vmulss  xmm7, xmm0, xmm4
          vmulss  xmm9, xmm0, xmm13
        }
        break;
    }
  }
  __asm { vmovaps xmm0, xmm10; in }
  *(double *)&_XMM0 = AD_ScrutinizeSample(*(const float *)&_XMM0);
  __asm
  {
    vmovss  dword ptr [rbx], xmm0
    vmovaps xmm0, xmm9; in
  }
  *(double *)&_XMM0 = AD_ScrutinizeSample(*(const float *)&_XMM0);
  __asm
  {
    vmovss  dword ptr [rbx+4], xmm0
    vmovaps xmm0, xmm8; in
  }
  *(double *)&_XMM0 = AD_ScrutinizeSample(*(const float *)&_XMM0);
  __asm
  {
    vmovss  dword ptr [rbx+8], xmm0
    vmovaps xmm0, xmm7; in
  }
  *(double *)&_XMM0 = AD_ScrutinizeSample(*(const float *)&_XMM0);
  __asm
  {
    vmovss  dword ptr [rbx+0Ch], xmm0
    vmovaps xmm0, xmm6; in
  }
  *(double *)&_XMM0 = AD_ScrutinizeSample(*(const float *)&_XMM0);
  _R11 = &v153;
  __asm
  {
    vmovss  dword ptr [rbx+10h], xmm0
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
  }
}

/*
==============
AD_MathDestroy
==============
*/
void AD_MathDestroy(void)
{
  ;
}

/*
==============
AD_MathInit
==============
*/
void AD_MathInit(void)
{
  ;
}

/*
==============
AD_ResetBiquadState
==============
*/
void AD_ResetBiquadState(AD_BiquadState *const state)
{
  *(_QWORD *)&state->x1 = 0i64;
  *(_QWORD *)&state->y1 = 0i64;
}

/*
==============
AD_ScrutinizeSample
==============
*/

float __fastcall AD_ScrutinizeSample(double in)
{
  __int16 v3; 
  bool v4; 
  bool v5; 
  float Px; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm0
    vmovss  [rsp+48h+Px], xmm0
  }
  v3 = _fdtest(&Px);
  v4 = v3 == 2;
  if ( v3 == 2 )
  {
    v5 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_math.cpp", 14, ASSERT_TYPE_ASSERT, "!std::isnan( in )", "!std::isnan( in )");
    v4 = !v5;
    if ( v5 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm6, xmm0
  }
  if ( !v4 )
  {
    __asm { vmovss  [rsp+48h+Px], xmm6 }
    if ( _fdtest(&Px) != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_math.cpp", 15, ASSERT_TYPE_ASSERT, "in == 0 || std::isnormal( in )", "in == 0 || std::isnormal( in )") )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm0, xmm6
    vmovaps xmm6, [rsp+48h+var_18]
  }
  return *(float *)&_XMM0;
}

