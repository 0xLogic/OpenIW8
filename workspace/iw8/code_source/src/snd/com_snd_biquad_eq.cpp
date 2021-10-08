/*
==============
SND_ApplyFilterHPFFrequency
==============
*/

void __fastcall SND_ApplyFilterHPFFrequency(SndFilter *filter, const float freq)
{
  ?SND_ApplyFilterHPFFrequency@@YAXPEAUSndFilter@@M@Z(filter, freq);
}

/*
==============
SND_InitFilter
==============
*/

void __fastcall SND_InitFilter(SndFilter *filter)
{
  ?SND_InitFilter@@YAXPEAUSndFilter@@@Z(filter);
}

/*
==============
SND_InitEQBankParams
==============
*/

void __fastcall SND_InitEQBankParams(SndEQBankParams *p_params)
{
  ?SND_InitEQBankParams@@YAXPEAUSndEQBankParams@@@Z(p_params);
}

/*
==============
SND_InitEQBank
==============
*/

void __fastcall SND_InitEQBank(SndEQBank *p_bank)
{
  ?SND_InitEQBank@@YAXPEAUSndEQBank@@@Z(p_bank);
}

/*
==============
SND_ApplyEQBankParams
==============
*/

void __fastcall SND_ApplyEQBankParams(SndEQBank *p_bank, const SndEQBankParams *p_bankParams)
{
  ?SND_ApplyEQBankParams@@YAXPEAUSndEQBank@@PEBUSndEQBankParams@@@Z(p_bank, p_bankParams);
}

/*
==============
OnePole_Init
==============
*/

void __fastcall OnePole_Init(OnePoleFilter_t *p_state, float fadetime, float freq, float sampleRate)
{
  ?OnePole_Init@@YAXPEAUOnePoleFilter_t@@MMM@Z(p_state, fadetime, freq, sampleRate);
}

/*
==============
OnePole_SetFrequency
==============
*/

void __fastcall OnePole_SetFrequency(OnePoleFilter_t *p_state, float freq, float sampleRate, bool setImmediate)
{
  ?OnePole_SetFrequency@@YAXPEAUOnePoleFilter_t@@MM_N@Z(p_state, freq, sampleRate, setImmediate);
}

/*
==============
SND_ApplyFilterLPFFrequency
==============
*/

void __fastcall SND_ApplyFilterLPFFrequency(SndFilter *filter, const float freq)
{
  ?SND_ApplyFilterLPFFrequency@@YAXPEAUSndFilter@@M@Z(filter, freq);
}

/*
==============
OnePole_Init
==============
*/

void __fastcall OnePole_Init(OnePoleFilter_t *p_state, double fadetime, double freq, double sampleRate)
{
  __asm
  {
    vmovss  xmm0, cs:__real@b8aec33e
    vmovaps [rsp+48h+var_18], xmm6
  }
  _RBX = p_state;
  __asm
  {
    vdivss  xmm0, xmm0, xmm1; X
    vmovaps [rsp+48h+var_28], xmm7
    vmovaps xmm7, xmm3
    vmovaps xmm6, xmm2
  }
  *(float *)&_XMM0 = expf_0(*(float *)&_XMM0);
  __asm
  {
    vmulss  xmm2, xmm7, cs:__real@3f000000; max
    vmovss  dword ptr [rbx+8], xmm0
    vmovss  dword ptr [rbx+14h], xmm0
    vmovaps xmm0, xmm6; val
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@c0c90fdb
    vdivss  xmm0, xmm1, xmm7; X
  }
  *(float *)&_XMM0 = expf_0(*(float *)&_XMM0);
  __asm
  {
    vmovss  xmm4, cs:__real@3f800000
    vsubss  xmm1, xmm4, dword ptr [rbx+8]
    vmovaps xmm6, [rsp+48h+var_18]
    vmovaps xmm7, [rsp+48h+var_28]
    vsubss  xmm3, xmm4, xmm0
    vmovss  dword ptr [rbx+10h], xmm3
    vmulss  xmm2, xmm1, xmm3
    vmovss  dword ptr [rbx+0Ch], xmm2
    vsubss  xmm1, xmm4, dword ptr [rbx+14h]
    vmulss  xmm2, xmm1, xmm0
    vmovss  dword ptr [rbx+18h], xmm2
    vmovss  dword ptr [rbx+1Ch], xmm0
  }
  *(_QWORD *)&_RBX->m_delay = 0i64;
}

/*
==============
OnePole_SetFrequency
==============
*/

void __fastcall OnePole_SetFrequency(OnePoleFilter_t *p_state, double freq, double sampleRate, bool setImmediate)
{
  __asm
  {
    vmovaps xmm0, xmm1; val
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps xmm6, xmm2
    vmulss  xmm2, xmm2, cs:__real@3f000000; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  _RDI = p_state;
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@c0c90fdb
    vdivss  xmm0, xmm1, xmm6; X
  }
  *(float *)&_XMM0 = expf_0(*(float *)&_XMM0);
  __asm
  {
    vmovss  xmm3, cs:__real@3f800000
    vsubss  xmm5, xmm3, xmm0
    vmovaps xmm4, xmm0
  }
  if ( setImmediate )
  {
    __asm
    {
      vsubss  xmm1, xmm3, dword ptr [rdi+8]
      vmovss  dword ptr [rdi+10h], xmm5
      vmulss  xmm2, xmm1, xmm5
      vmovss  dword ptr [rdi+0Ch], xmm2
      vsubss  xmm0, xmm3, dword ptr [rdi+14h]
      vmulss  xmm1, xmm0, xmm4
      vmovss  dword ptr [rdi+18h], xmm1
      vmovss  dword ptr [rdi+1Ch], xmm4
    }
    *(_QWORD *)&_RDI->m_delay = 0i64;
    __asm { vmovaps xmm6, [rsp+38h+var_18] }
  }
  else
  {
    __asm
    {
      vsubss  xmm0, xmm3, dword ptr [rdi+8]
      vmovaps xmm6, [rsp+38h+var_18]
      vmulss  xmm1, xmm0, xmm5
      vmovss  dword ptr [rdi+0Ch], xmm1
      vsubss  xmm0, xmm3, dword ptr [rdi+14h]
      vmulss  xmm1, xmm0, xmm4
      vmovss  dword ptr [rdi+18h], xmm1
    }
  }
}

/*
==============
SND_ApplyEQBankParams
==============
*/
void SND_ApplyEQBankParams(SndEQBank *p_bank, const SndEQBankParams *p_bankParams)
{
  char v9; 
  __int64 v10; 
  __int64 v11; 
  char v12; 
  unsigned int v17; 
  bool v18; 
  float v24; 
  float v25; 

  __asm { vmovaps [rsp+68h+var_28], xmm6 }
  _RBX = &p_bankParams->params[0][0].q;
  __asm
  {
    vmovss  xmm6, cs:__real@46bb8000
    vmovaps [rsp+68h+var_38], xmm7
  }
  _RDI = &p_bank->eq[0][0].curParams.gain;
  __asm { vmovss  xmm7, cs:__real@473b8000 }
  v9 = 0;
  v10 = 2i64;
  do
  {
    v11 = 2i64;
    do
    {
      v12 = *((_BYTE *)_RBX + 4);
      if ( v12 )
      {
        if ( v12 != *((_BYTE *)_RDI + 12) )
          goto LABEL_9;
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+4]
          vucomiss xmm0, dword ptr [rbx-4]
        }
        if ( v12 != *((_BYTE *)_RDI + 12) )
          goto LABEL_9;
        __asm
        {
          vmovss  xmm0, dword ptr [rdi]
          vucomiss xmm0, dword ptr [rbx-8]
        }
        if ( v12 != *((_BYTE *)_RDI + 12) )
          goto LABEL_9;
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+8]
          vucomiss xmm0, dword ptr [rbx]
        }
        if ( v12 != *((_BYTE *)_RDI + 12) || *((_DWORD *)_RBX - 3) != *((_DWORD *)_RDI - 1) )
        {
LABEL_9:
          __asm
          {
            vmovups xmm0, xmmword ptr [rbx-0Ch]
            vmovups xmmword ptr [rdi-4], xmm0
          }
          _RDI[3] = _RBX[1];
          v17 = *((_DWORD *)_RBX - 3);
          v18 = v17 == 0;
          if ( !v17 || (v18 = v17 <= 3, v17 == 3) )
          {
            __asm { vcomiss xmm6, dword ptr [rbx-4] }
            if ( v18 )
            {
              v12 = 0;
              goto LABEL_16;
            }
          }
          *(_QWORD *)(_RDI - 5) = 0i64;
          *(_QWORD *)(_RDI - 3) = 0i64;
          __asm
          {
            vmovss  xmm0, dword ptr [rbx-8]
            vmovss  xmm3, dword ptr [rbx]; q
            vmovss  xmm2, dword ptr [rbx-4]; freq
            vmovss  [rsp+68h+var_40], xmm7
            vmovss  [rsp+68h+var_48], xmm0
          }
          SND_CalcBiquadCoefficientsAtRate((SndBiquadCoeffs *const)_RDI - 2, *((SND_EQTYPE *)_RBX - 3), *(float *)&_XMM2, *(float *)&_XMM3, v24, v25);
          v12 = *((_BYTE *)_RBX + 4);
        }
        v9 |= v12;
      }
      else
      {
        v12 = 0;
      }
LABEL_16:
      *((_BYTE *)_RDI + 12) = v12;
      _RBX += 5;
      _RDI += 14;
      --v11;
    }
    while ( v11 );
    --v10;
  }
  while ( v10 );
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_28]
    vmovaps xmm7, [rsp+68h+var_38]
  }
  p_bank->isAnyEqBandEnabled = v9;
}

/*
==============
SND_ApplyFilterHPFFrequency
==============
*/

void __fastcall SND_ApplyFilterHPFFrequency(SndFilter *filter, double freq)
{
  bool v5; 
  bool v6; 
  float fmt; 
  float rate; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RBX = filter;
  __asm { vmovaps xmm6, xmm1 }
  v5 = filter == NULL;
  if ( !filter )
  {
    v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\com_snd_biquad_eq.cpp", 284, ASSERT_TYPE_ASSERT, "(filter)", (const char *)&queryFormat, "filter");
    v5 = !v6;
    if ( v6 )
      __debugbreak();
  }
  __asm { vucomiss xmm6, dword ptr [rbx+24h] }
  if ( !v5 )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@473b8000
      vmovss  xmm1, cs:__real@3f800000
      vmovss  xmm3, cs:__real@3f3504f3; q
      vmovss  [rsp+48h+rate], xmm0
      vmovaps xmm2, xmm6; freq
      vmovss  dword ptr [rsp+48h+fmt], xmm1
      vmovss  dword ptr [rbx+24h], xmm6
    }
    SND_CalcBiquadCoefficientsAtRate(&_RBX->coeffs, SND_EQTYPE_HIGHPASS, *(float *)&_XMM2, *(float *)&_XMM3, fmt, rate);
  }
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
}

/*
==============
SND_ApplyFilterLPFFrequency
==============
*/

void __fastcall SND_ApplyFilterLPFFrequency(SndFilter *filter, double freq)
{
  bool v5; 
  bool v6; 
  float fmt; 
  float rate; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RBX = filter;
  __asm { vmovaps xmm6, xmm1 }
  v5 = filter == NULL;
  if ( !filter )
  {
    v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\com_snd_biquad_eq.cpp", 272, ASSERT_TYPE_ASSERT, "(filter)", (const char *)&queryFormat, "filter");
    v5 = !v6;
    if ( v6 )
      __debugbreak();
  }
  __asm { vucomiss xmm6, dword ptr [rbx+24h] }
  if ( !v5 )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@473b8000
      vmovss  xmm1, cs:__real@3f800000
      vmovss  xmm3, cs:__real@3f3504f3; q
      vmovss  [rsp+48h+rate], xmm0
      vmovaps xmm2, xmm6; freq
      vmovss  dword ptr [rsp+48h+fmt], xmm1
      vmovss  dword ptr [rbx+24h], xmm6
    }
    SND_CalcBiquadCoefficientsAtRate(&_RBX->coeffs, SND_EQTYPE_FIRST, *(float *)&_XMM2, *(float *)&_XMM3, fmt, rate);
  }
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
}

/*
==============
SND_CalcBiquadCoefficientsAtRate
==============
*/

void __fastcall SND_CalcBiquadCoefficientsAtRate(SndBiquadCoeffs *const coeffs, SND_EQTYPE type, double freq, double q, const float gain)
{
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  __int64 v33; 
  bool v43; 
  bool v44; 
  __int32 v45; 
  __int32 v46; 
  __int32 v47; 
  double v143; 
  char v147; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
  }
  _RDI = coeffs;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps [rsp+0D8h+var_88], xmm13
    vmovaps [rsp+0D8h+var_98], xmm14
    vmovaps [rsp+0D8h+var_A8], xmm15
    vmovaps xmm7, xmm3
    vmovaps xmm9, xmm2
  }
  if ( !coeffs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\com_snd_biquad_eq.cpp", 18, ASSERT_TYPE_ASSERT, "(coeffs)", (const char *)&queryFormat, "coeffs") )
    __debugbreak();
  __asm
  {
    vmovss  xmm8, cs:__real@3f000000
    vmulss  xmm2, xmm8, [rsp+0D8h+rate]; max
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm0, xmm9; val
    vxorps  xmm15, xmm15, xmm15
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vdivss  xmm1, xmm0, [rsp+0D8h+rate]
    vmulss  xmm3, xmm1, cs:__real@40c90fdb
    vxorps  xmm2, xmm2, xmm2
    vmovss  xmm0, xmm2, xmm3
  }
  *(double *)&_XMM0 = j___libm_sse2_sincosf_(v31, v30, v32, v33);
  __asm
  {
    vmovss  xmm11, cs:__real@3f800000
    vmovss  xmm1, cs:__real@3a83126f; min
    vmovups xmm6, xmm0
    vshufps xmm14, xmm0, xmm0, 1
    vmovaps xmm2, xmm11; max
    vmovaps xmm0, xmm7; val
  }
  I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm10, dword ptr cs:__xmm@80000000800000008000000080000000
    vdivss  xmm1, xmm8, xmm0
    vmulss  xmm7, xmm1, xmm6
  }
  v43 = 0;
  v44 = type == SND_EQTYPE_FIRST;
  if ( type == SND_EQTYPE_FIRST )
  {
    __asm
    {
      vsubss  xmm13, xmm11, xmm14
      vmulss  xmm12, xmm13, xmm8
    }
    goto LABEL_15;
  }
  v43 = type == SND_EQTYPE_FIRST;
  v45 = type - 1;
  v44 = v45 == 0;
  if ( !v45 )
  {
    __asm
    {
      vaddss  xmm0, xmm14, xmm11
      vaddss  xmm1, xmm14, xmm11
      vmulss  xmm12, xmm0, xmm8
      vxorps  xmm13, xmm1, xmm10
    }
LABEL_15:
    __asm
    {
      vmulss  xmm9, xmm14, cs:__real@c0000000
      vaddss  xmm6, xmm7, xmm11
      vsubss  xmm7, xmm11, xmm7
      vmovaps xmm8, xmm12
    }
    goto LABEL_16;
  }
  v46 = v45 - 1;
  if ( v46 )
  {
    v47 = v46 - 1;
    if ( v47 )
    {
      if ( v47 != 1 )
      {
        __asm
        {
          vmovaps xmm12, xmm11
          vxorps  xmm13, xmm13, xmm13
          vxorps  xmm8, xmm8, xmm8
          vmovaps xmm6, xmm11
          vxorps  xmm9, xmm9, xmm9
          vxorps  xmm7, xmm7, xmm7
        }
        goto LABEL_19;
      }
      __asm
      {
        vmovss  xmm0, [rsp+0D8h+gain]
        vmulss  xmm1, xmm0, cs:__real@3ccccccd; Y
        vmovss  xmm0, cs:__real@41200000; X
      }
      *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vmulss  xmm13, xmm14, cs:__real@c0000000
        vmulss  xmm1, xmm0, xmm7
        vdivss  xmm0, xmm7, xmm0
        vaddss  xmm6, xmm0, xmm11
        vsubss  xmm7, xmm11, xmm0
        vaddss  xmm12, xmm1, xmm11
        vsubss  xmm8, xmm11, xmm1
        vmovaps xmm9, xmm13
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, [rsp+0D8h+gain]
        vmulss  xmm1, xmm0, cs:__real@3ccccccd; Y
        vmovss  xmm0, cs:__real@41200000; X
      }
      *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vaddss  xmm5, xmm0, xmm11
        vmovaps xmm8, xmm0
        vsqrtss xmm1, xmm8, xmm0
        vmulss  xmm2, xmm1, xmm7
        vmulss  xmm10, xmm2, cs:__real@40000000
        vsubss  xmm7, xmm0, xmm11
        vmulss  xmm6, xmm7, xmm14
        vaddss  xmm3, xmm6, xmm5
        vaddss  xmm1, xmm3, xmm10
        vmulss  xmm12, xmm1, xmm0
        vmulss  xmm4, xmm5, xmm14
        vaddss  xmm2, xmm4, xmm7
        vmulss  xmm1, xmm2, xmm0
        vmulss  xmm13, xmm1, cs:__real@c0000000
        vsubss  xmm0, xmm3, xmm10
        vsubss  xmm1, xmm5, xmm6
        vmulss  xmm8, xmm0, xmm8
        vsubss  xmm0, xmm7, xmm4
        vmulss  xmm9, xmm0, cs:__real@40000000
        vaddss  xmm6, xmm1, xmm10
        vsubss  xmm7, xmm1, xmm10
        vmovss  xmm10, dword ptr cs:__xmm@80000000800000008000000080000000
      }
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, [rsp+0D8h+gain]
      vmulss  xmm1, xmm0, cs:__real@3ccccccd; Y
      vmovss  xmm0, cs:__real@41200000; X
    }
    *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm
    {
      vmovss  xmm9, cs:__real@40000000
      vaddss  xmm6, xmm0, xmm11
      vmovaps xmm8, xmm0
      vsqrtss xmm1, xmm8, xmm0
      vmulss  xmm2, xmm1, xmm7
      vmulss  xmm10, xmm2, xmm9
      vsubss  xmm7, xmm0, xmm11
      vmulss  xmm5, xmm7, xmm14
      vsubss  xmm3, xmm6, xmm5
      vmulss  xmm4, xmm6, xmm14
      vaddss  xmm1, xmm3, xmm10
      vmulss  xmm12, xmm1, xmm0
      vsubss  xmm2, xmm7, xmm4
      vmulss  xmm1, xmm2, xmm0
      vsubss  xmm0, xmm3, xmm10
      vmulss  xmm13, xmm1, xmm9
      vmulss  xmm1, xmm7, cs:__real@c0000000
      vaddss  xmm2, xmm5, xmm6
      vmulss  xmm8, xmm0, xmm8
      vmulss  xmm0, xmm4, xmm9
      vaddss  xmm6, xmm2, xmm10
      vsubss  xmm7, xmm2, xmm10
      vmovss  xmm10, dword ptr cs:__xmm@80000000800000008000000080000000
      vsubss  xmm9, xmm1, xmm0
    }
  }
LABEL_16:
  __asm { vcomiss xmm6, xmm15 }
  if ( v43 || v44 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+0D8h+var_B0], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\com_snd_biquad_eq.cpp", 119, ASSERT_TYPE_ASSERT, "( ( a[0] > 0 ) )", "( a[0] ) = %g", v143) )
      __debugbreak();
  }
LABEL_19:
  __asm { vmovaps xmm14, [rsp+0D8h+var_98] }
  _R11 = &v147;
  __asm
  {
    vmovaps xmm15, [rsp+0D8h+var_A8]
    vdivss  xmm3, xmm11, xmm6
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmulss  xmm0, xmm3, xmm12
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmulss  xmm1, xmm3, xmm13
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovss  dword ptr [rdi], xmm0
    vmulss  xmm0, xmm3, xmm8
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovss  dword ptr [rdi+4], xmm1
    vmulss  xmm1, xmm3, xmm9
    vmovaps xmm9, xmmword ptr [r11-40h]
    vxorps  xmm2, xmm1, xmm10
    vmovss  dword ptr [rdi+8], xmm0
    vmulss  xmm0, xmm3, xmm7
    vmovaps xmm7, xmmword ptr [r11-20h]
    vxorps  xmm1, xmm0, xmm10
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovss  dword ptr [rdi+10h], xmm1
    vmovss  dword ptr [rdi+0Ch], xmm2
  }
}

/*
==============
SND_InitEQBank
==============
*/
void SND_InitEQBank(SndEQBank *p_bank)
{
  float *p_q; 
  __int64 v2; 
  __int64 v3; 

  p_bank->isAnyEqBandEnabled = 0;
  p_bank->prevEqLerp = 0.0;
  p_q = &p_bank->eq[0][0].curParams.q;
  v2 = 2i64;
  do
  {
    v3 = 2i64;
    do
    {
      *(_QWORD *)(p_q - 7) = 0i64;
      *(_QWORD *)(p_q - 5) = 0i64;
      *(p_q - 2) = 1.0;
      *p_q = 1.0;
      *(p_q - 3) = 0.0;
      *(p_q - 1) = 24000.0;
      *((_BYTE *)p_q + 4) = 0;
      *((_QWORD *)p_q - 6) = 1065353216i64;
      *((_QWORD *)p_q - 5) = 0i64;
      *(p_q - 8) = 0.0;
      p_q += 14;
      --v3;
    }
    while ( v3 );
    --v2;
  }
  while ( v2 );
}

/*
==============
SND_InitEQBankParams
==============
*/
void SND_InitEQBankParams(SndEQBankParams *p_params)
{
  __int64 v4; 
  __int64 v7; 
  __int128 v8; 
  int v9; 

  __asm { vmovss  xmm0, cs:__real@3f800000 }
  _RAX = p_params->params;
  __asm
  {
    vmovss  dword ptr [rsp+28h+var_28+4], xmm0
    vmovss  dword ptr [rsp+28h+var_28+0Ch], xmm0
    vmovss  xmm0, cs:__real@46bb8000
    vmovss  dword ptr [rsp+28h+var_28+8], xmm0
  }
  LODWORD(v8) = 0;
  v4 = 2i64;
  __asm { vmovups xmm0, [rsp+28h+var_28] }
  LOBYTE(v9) = 0;
  do
  {
    v7 = 2i64;
    do
    {
      __asm { vmovups xmmword ptr [rax], xmm0 }
      *(_DWORD *)&(*_RAX)[0].enabled = v9;
      _RAX = (SndEqParams (*)[2])((char *)_RAX + 20);
      --v7;
    }
    while ( v7 );
    --v4;
  }
  while ( v4 );
  p_params->eqLerp = 0.0;
}

/*
==============
SND_InitFilter
==============
*/
void SND_InitFilter(SndFilter *filter)
{
  if ( !filter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\com_snd_biquad_eq.cpp", 258, ASSERT_TYPE_ASSERT, "(filter)", (const char *)&queryFormat, "filter") )
    __debugbreak();
  filter->state[0] = 0i64;
  filter->state[1] = 0i64;
  filter->curFreq = 24000.0;
  *(_QWORD *)&filter->coeffs.a0 = 1065353216i64;
  *(_QWORD *)&filter->coeffs.a2 = 0i64;
  filter->coeffs.a4 = 0.0;
}

