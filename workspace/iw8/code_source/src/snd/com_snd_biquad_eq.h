/*
==============
EQBANK_ProcessArrayBlock<256>
==============
*/

void __fastcall EQBANK_ProcessArrayBlock<256>(SndEQBank *p_bank, const SndEQBankParams *p_params, const float *p_input, float *p_output, const int channelCount)
{
  ??$EQBANK_ProcessArrayBlock@$0BAA@@@YAXPEAUSndEQBank@@PEBUSndEQBankParams@@PEBMPEAMH@Z(p_bank, p_params, p_input, p_output, channelCount);
}

/*
==============
OnePoleLPF_ProcessArrayStereoBlock
==============
*/

void __fastcall OnePoleLPF_ProcessArrayStereoBlock(OnePoleFilter_t *p_state, const float *p_input, float *p_output, int sampleCount)
{
  ?OnePoleLPF_ProcessArrayStereoBlock@@YAXPEAUOnePoleFilter_t@@PEBMPEAMH@Z(p_state, p_input, p_output, sampleCount);
}

/*
==============
OnePoleHPF_ProcessArrayStereoBlock
==============
*/

void __fastcall OnePoleHPF_ProcessArrayStereoBlock(OnePoleFilter_t *p_state, const float *p_input, float *p_output, int sampleCount)
{
  ?OnePoleHPF_ProcessArrayStereoBlock@@YAXPEAUOnePoleFilter_t@@PEBMPEAMH@Z(p_state, p_input, p_output, sampleCount);
}

/*
==============
BIQUAD_ProcessArray<256>
==============
*/

void __fastcall BIQUAD_ProcessArray<256>(const SndBiquadCoeffs *coeffs, SndBiquadState *state, const float *p_input, float *p_output)
{
  ??$BIQUAD_ProcessArray@$0BAA@@@YAXPEIBUSndBiquadCoeffs@@PEIAUSndBiquadState@@PEIBMPEIAM@Z(coeffs, state, p_input, p_output);
}

/*
==============
OnePoleHPF_ProcessArray
==============
*/

void __fastcall OnePoleHPF_ProcessArray(OnePoleFilter_t *p_state, const float *p_input, float *p_output, int sampleCount)
{
  ?OnePoleHPF_ProcessArray@@YAXPEAUOnePoleFilter_t@@PEBMPEAMH@Z(p_state, p_input, p_output, sampleCount);
}

/*
==============
OnePoleLPF_ProcessArray
==============
*/

void __fastcall OnePoleLPF_ProcessArray(OnePoleFilter_t *p_state, const float *p_input, float *p_output, int sampleCount)
{
  ?OnePoleLPF_ProcessArray@@YAXPEAUOnePoleFilter_t@@PEBMPEAMH@Z(p_state, p_input, p_output, sampleCount);
}

/*
==============
BIQUAD_ProcessArray<256>
==============
*/
void BIQUAD_ProcessArray<256>(const SndBiquadCoeffs *coeffs, SndBiquadState *state, const float *p_input, float *p_output)
{
  __int64 v22; 

  __asm
  {
    vmovss  xmm2, dword ptr [rdx]
    vmovss  xmm3, dword ptr [rdx+4]
    vmovaps [rsp+78h+var_18], xmm6
  }
  _RAX = p_input + 2;
  __asm
  {
    vmovaps [rsp+78h+var_28], xmm7
    vmovss  xmm7, dword ptr [rcx]
    vmovaps [rsp+78h+var_38], xmm8
    vmovss  xmm8, dword ptr [rcx+4]
    vmovaps [rsp+78h+var_48], xmm9
    vmovss  xmm9, dword ptr [rcx+8]
    vmovaps [rsp+78h+var_58], xmm10
    vmovss  xmm10, dword ptr [rcx+0Ch]
    vmovaps [rsp+78h+var_68], xmm11
    vmovss  xmm11, dword ptr [rcx+10h]
  }
  _RCX = p_output + 2;
  __asm
  {
    vmovaps [rsp+78h+var_78], xmm12
    vmovss  xmm12, cs:__real@2f800000
  }
  _R9 = (char *)p_output - (char *)p_input;
  v22 = 32i64;
  do
  {
    __asm
    {
      vaddss  xmm4, xmm12, dword ptr [rax-8]
      vmulss  xmm1, xmm4, xmm7
      vaddss  xmm5, xmm1, xmm2
      vmulss  xmm0, xmm4, xmm8
      vaddss  xmm2, xmm0, xmm3
      vmulss  xmm1, xmm5, xmm10
      vaddss  xmm6, xmm2, xmm1
      vmulss  xmm3, xmm5, xmm11
      vmulss  xmm0, xmm4, xmm9
      vaddss  xmm4, xmm12, dword ptr [rax-4]
      vaddss  xmm2, xmm3, xmm0
      vmulss  xmm0, xmm4, xmm7
      vmulss  xmm1, xmm4, xmm8
      vaddss  xmm2, xmm1, xmm2
      vmulss  xmm1, xmm4, xmm9
      vaddss  xmm4, xmm12, dword ptr [rax]
      vmovss  dword ptr [r9+rax-8], xmm5
      vaddss  xmm5, xmm0, xmm6
      vmulss  xmm0, xmm5, xmm10
      vaddss  xmm6, xmm2, xmm0
      vmulss  xmm3, xmm5, xmm11
      vaddss  xmm2, xmm3, xmm1
      vmulss  xmm1, xmm4, xmm7
      vmulss  xmm0, xmm4, xmm8
      vaddss  xmm2, xmm0, xmm2
      vmulss  xmm0, xmm4, xmm9
      vaddss  xmm4, xmm12, dword ptr [rax+4]
      vmovss  dword ptr [rcx-4], xmm5
      vaddss  xmm5, xmm1, xmm6
      vmulss  xmm1, xmm5, xmm10
      vaddss  xmm6, xmm2, xmm1
      vmulss  xmm3, xmm5, xmm11
      vaddss  xmm2, xmm3, xmm0
      vmulss  xmm0, xmm4, xmm7
      vmulss  xmm1, xmm4, xmm8
      vaddss  xmm2, xmm1, xmm2
      vmulss  xmm1, xmm4, xmm9
      vaddss  xmm4, xmm12, dword ptr [rax+8]
      vmovss  dword ptr [rcx], xmm5
      vaddss  xmm5, xmm0, xmm6
      vmulss  xmm0, xmm5, xmm10
      vaddss  xmm6, xmm2, xmm0
      vmulss  xmm3, xmm5, xmm11
      vaddss  xmm2, xmm3, xmm1
      vmulss  xmm1, xmm4, xmm7
      vmulss  xmm0, xmm4, xmm8
      vaddss  xmm2, xmm0, xmm2
      vmulss  xmm0, xmm4, xmm9
      vaddss  xmm4, xmm12, dword ptr [rax+0Ch]
      vmovss  dword ptr [rcx+4], xmm5
      vaddss  xmm5, xmm1, xmm6
      vmulss  xmm1, xmm5, xmm10
      vaddss  xmm6, xmm2, xmm1
      vmulss  xmm3, xmm5, xmm11
      vaddss  xmm2, xmm3, xmm0
      vmulss  xmm0, xmm4, xmm7
      vmulss  xmm1, xmm4, xmm8
      vaddss  xmm2, xmm1, xmm2
      vmulss  xmm1, xmm4, xmm9
      vaddss  xmm4, xmm12, dword ptr [rax+10h]
      vmovss  dword ptr [rcx+8], xmm5
      vaddss  xmm5, xmm0, xmm6
      vmulss  xmm0, xmm5, xmm10
      vaddss  xmm6, xmm2, xmm0
      vmulss  xmm3, xmm5, xmm11
      vaddss  xmm2, xmm3, xmm1
      vmulss  xmm1, xmm4, xmm7
      vmulss  xmm0, xmm4, xmm8
      vaddss  xmm2, xmm0, xmm2
      vmulss  xmm0, xmm4, xmm9
      vaddss  xmm4, xmm12, dword ptr [rax+14h]
      vmovss  dword ptr [rcx+0Ch], xmm5
      vaddss  xmm5, xmm1, xmm6
      vmulss  xmm1, xmm5, xmm10
      vaddss  xmm6, xmm2, xmm1
      vmulss  xmm3, xmm5, xmm11
      vaddss  xmm2, xmm3, xmm0
      vmulss  xmm0, xmm4, xmm7
      vmovss  dword ptr [rcx+10h], xmm5
      vaddss  xmm5, xmm0, xmm6
      vmulss  xmm1, xmm4, xmm8
      vaddss  xmm2, xmm1, xmm2
      vmulss  xmm1, xmm4, xmm9
      vmulss  xmm0, xmm5, xmm10
      vmulss  xmm3, xmm5, xmm11
      vmovss  dword ptr [rcx+14h], xmm5
    }
    _RCX += 8;
    _RAX += 8;
    __asm
    {
      vaddss  xmm3, xmm3, xmm1
      vaddss  xmm2, xmm2, xmm0
    }
    --v22;
  }
  while ( v22 );
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
    vmovaps xmm8, [rsp+78h+var_38]
    vmovaps xmm9, [rsp+78h+var_48]
    vmovaps xmm10, [rsp+78h+var_58]
    vmovaps xmm11, [rsp+78h+var_68]
    vmovaps xmm12, [rsp+78h+var_78]
    vmovss  dword ptr [rdx], xmm2
    vmovss  dword ptr [rdx+4], xmm3
  }
}

/*
==============
EQBANK_ProcessArrayBlock<256>
==============
*/
void EQBANK_ProcessArrayBlock<256>(SndEQBank *p_bank, const SndEQBankParams *p_params, const float *p_input, float *p_output, const int channelCount)
{
  signed __int64 v5; 
  void *v13; 
  int v15; 
  const float *v16; 
  float *v17; 
  float *v18; 
  char v23; 
  bool v24; 
  const float *v25; 
  char v26; 
  char v27; 
  const float *v28; 
  __int64 v29; 
  char v30; 
  __int64 v31; 
  __int64 v32; 
  char v33; 
  __int64 v34; 
  char v35; 
  unsigned __int64 v36; 
  const float *v37; 
  unsigned __int64 v38; 
  unsigned __int64 v39; 
  unsigned __int64 v40; 
  __int64 v48; 
  int v49; 
  __int64 v71; 
  int v75; 
  __int64 v76; 
  _DWORD *v157; 
  float *v158; 
  __int64 i; 
  float *v160; 
  __int64 v161; 
  float *v162; 
  __int64 v169; 
  char v170[4240]; 
  char v176; 

  v13 = alloca(v5);
  __asm
  {
    vmovaps [rsp+1168h+var_48], xmm6
    vmovaps [rsp+1168h+var_58], xmm7
    vmovaps [rsp+1168h+var_68], xmm8
    vmovaps [rsp+1168h+var_78], xmm9
    vmovaps [rsp+1168h+var_88], xmm10
  }
  _RBP = (unsigned __int64)v170 & 0xFFFFFFFFFFFFFFE0ui64;
  *(_QWORD *)(_RBP + 4224) = (unsigned __int64)&v169 ^ _security_cookie;
  v15 = channelCount;
  v16 = p_input + 256;
  *(_QWORD *)(_RBP + 48) = p_input;
  v17 = p_output;
  *(_QWORD *)(_RBP + 16) = p_output;
  v18 = (float *)p_input;
  *(_QWORD *)(_RBP + 56) = p_params;
  *(_QWORD *)(_RBP + 24) = p_bank;
  if ( channelCount > 2 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\com_snd_biquad_eq.h", 106, ASSERT_TYPE_ASSERT, "(channelCount <= ( 2 ))", (const char *)&queryFormat, "channelCount <= SD_DECODER_CHANNEL_MAX") )
      __debugbreak();
    v17 = *(float **)(((unsigned __int64)v170 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10);
  }
  if ( p_bank->isAnyEqBandEnabled )
  {
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "ParametricEQArray");
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vsubss  xmm9, xmm0, dword ptr [rsi+0E4h]
      vcomiss xmm9, cs:__real@3a83126f
      vsubss  xmm6, xmm0, dword ptr [rbx]
    }
    *(_QWORD *)(((unsigned __int64)v170 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = v16;
    __asm { vcomiss xmm9, cs:__real@3f7fbe77 }
    *(_BYTE *)(((unsigned __int64)v170 & 0xFFFFFFFFFFFFFFE0ui64) + 1) = !(v23 | v24);
    v25 = v18;
    v26 = v23;
    *(_QWORD *)(((unsigned __int64)v170 & 0xFFFFFFFFFFFFFFE0ui64) + 0x28) = v16;
    *(_BYTE *)(((unsigned __int64)v170 & 0xFFFFFFFFFFFFFFE0ui64) + 2) = v23;
    v27 = 0;
    *(_BYTE *)_RBP = 0;
    v28 = v18;
    if ( v23 | v24 )
    {
      memset_0((void *)(_RBP + 128), 0, 0x400ui64);
      memset_0((void *)(_RBP + 2176), 0, 0x400ui64);
    }
    if ( !v26 )
    {
      memset_0((void *)(_RBP + 1152), 0, 0x400ui64);
      memset_0((void *)(_RBP + 3200), 0, 0x400ui64);
    }
    if ( channelCount == 1 )
    {
      v29 = 2i64;
      v30 = *(_BYTE *)(((unsigned __int64)v170 & 0xFFFFFFFFFFFFFFE0ui64) + 1);
      v31 = *(_QWORD *)(((unsigned __int64)v170 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18) + 132i64;
      *(_QWORD *)(((unsigned __int64)v170 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = 2i64;
      do
      {
        if ( *(_BYTE *)(v31 - 80) && v30 )
        {
          BIQUAD_ProcessArray<256>((const SndBiquadCoeffs *)(v31 - 132), (SndBiquadState *)(v31 - 112), v25, (float *)(_RBP + 128));
          v29 = *(_QWORD *)(((unsigned __int64)v170 & 0xFFFFFFFFFFFFFFE0ui64) + 8);
          v25 = (const float *)(_RBP + 128);
          *(_BYTE *)_RBP = 1;
        }
        if ( *(_BYTE *)(v31 + 32) && v26 )
        {
          BIQUAD_ProcessArray<256>((const SndBiquadCoeffs *)(v31 - 20), (SndBiquadState *)v31, v28, (float *)(_RBP + 1152));
          v29 = *(_QWORD *)(((unsigned __int64)v170 & 0xFFFFFFFFFFFFFFE0ui64) + 8);
          v28 = (const float *)(_RBP + 1152);
          v27 = 1;
        }
        v31 += 56i64;
        *(_QWORD *)(((unsigned __int64)v170 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = --v29;
      }
      while ( v29 );
    }
    else
    {
      if ( channelCount != 2 )
        goto LABEL_62;
      v32 = 2i64;
      v33 = *(_BYTE *)(((unsigned __int64)v170 & 0xFFFFFFFFFFFFFFE0ui64) + 2);
      v34 = *(_QWORD *)(((unsigned __int64)v170 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18) + 132i64;
      v35 = *(_BYTE *)(((unsigned __int64)v170 & 0xFFFFFFFFFFFFFFE0ui64) + 1);
      *(_QWORD *)(((unsigned __int64)v170 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = 2i64;
      do
      {
        if ( *(_BYTE *)(v34 - 80) && v35 )
        {
          BIQUAD_ProcessArray<256>((const SndBiquadCoeffs *)(v34 - 132), (SndBiquadState *)(v34 - 112), v25, (float *)(_RBP + 128));
          BIQUAD_ProcessArray<256>((const SndBiquadCoeffs *)(v34 - 132), (SndBiquadState *)(v34 - 104), *(const float **)(((unsigned __int64)v170 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20), (float *)(_RBP + 2176));
          v32 = *(_QWORD *)(((unsigned __int64)v170 & 0xFFFFFFFFFFFFFFE0ui64) + 8);
          *(_QWORD *)(((unsigned __int64)v170 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = ((unsigned __int64)v170 & 0xFFFFFFFFFFFFFFE0ui64) + 2176;
          v25 = (const float *)(_RBP + 128);
          *(_BYTE *)_RBP = 1;
        }
        if ( *(_BYTE *)(v34 + 32) && v33 )
        {
          BIQUAD_ProcessArray<256>((const SndBiquadCoeffs *)(v34 - 20), (SndBiquadState *)v34, v28, (float *)(_RBP + 1152));
          BIQUAD_ProcessArray<256>((const SndBiquadCoeffs *)(v34 - 20), (SndBiquadState *)(v34 + 8), *(const float **)(((unsigned __int64)v170 & 0xFFFFFFFFFFFFFFE0ui64) + 0x28), (float *)(_RBP + 3200));
          v32 = *(_QWORD *)(((unsigned __int64)v170 & 0xFFFFFFFFFFFFFFE0ui64) + 8);
          *(_QWORD *)(((unsigned __int64)v170 & 0xFFFFFFFFFFFFFFE0ui64) + 0x28) = ((unsigned __int64)v170 & 0xFFFFFFFFFFFFFFE0ui64) + 3200;
          v28 = (const float *)(_RBP + 1152);
          v27 = 1;
        }
        v34 += 56i64;
        *(_QWORD *)(((unsigned __int64)v170 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = --v32;
      }
      while ( v32 );
      v15 = channelCount;
    }
    v18 = *(float **)(((unsigned __int64)v170 & 0xFFFFFFFFFFFFFFE0ui64) + 0x30);
    if ( *(_BYTE *)_RBP )
    {
      v24 = v27 == 0;
      v36 = _RBP + 128;
      v37 = v18 + 256;
      v38 = _RBP + 2176;
      if ( !v24 )
      {
        v39 = _RBP + 1152;
        v40 = _RBP + 3200;
        goto LABEL_37;
      }
      v39 = *(_QWORD *)(((unsigned __int64)v170 & 0xFFFFFFFFFFFFFFE0ui64) + 0x30);
      v40 = (unsigned __int64)(v18 + 256);
    }
    else
    {
      if ( !v27 )
        goto LABEL_62;
      v37 = v18 + 256;
      v36 = *(_QWORD *)(((unsigned __int64)v170 & 0xFFFFFFFFFFFFFFE0ui64) + 0x30);
      v38 = (unsigned __int64)(v18 + 256);
      v39 = _RBP + 1152;
      v40 = _RBP + 3200;
    }
    if ( v18 )
    {
LABEL_37:
      __asm
      {
        vsubss  xmm0, xmm6, xmm9
        vmulss  xmm10, xmm0, cs:__real@3b808081
        vmulss  xmm1, xmm10, cs:__real@41000000
        vshufps xmm1, xmm1, xmm1, 0
        vinsertf128 ymm1, ymm1, xmm1, 1
        vmovups ymmword ptr [rbp+40h], ymm1
      }
      if ( (v36 & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\com_snd_biquad_eq.h", 242, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( leftSideL ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )leftSideL ) ) = 0x%llx", v36) )
        __debugbreak();
      if ( (v39 & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\com_snd_biquad_eq.h", 243, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( rightSideL ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )rightSideL ) ) = 0x%llx", v39) )
        __debugbreak();
      if ( (v38 & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\com_snd_biquad_eq.h", 244, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( leftSideR ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )leftSideR ) ) = 0x%llx", v38) )
        __debugbreak();
      if ( (v40 & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\com_snd_biquad_eq.h", 245, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( rightSideR ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )rightSideR ) ) = 0x%llx", v40) )
        __debugbreak();
      if ( ((unsigned __int8)v18 & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\com_snd_biquad_eq.h", 246, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( p_input ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )p_input ) ) = 0x%llx", v18) )
        __debugbreak();
      __asm
      {
        vmulss  xmm0, xmm10, cs:__real@40e00000
        vmulss  xmm1, xmm10, cs:__real@40c00000
      }
      v48 = *(_QWORD *)(((unsigned __int64)v170 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10);
      v49 = 2;
      __asm
      {
        vaddss  xmm8, xmm0, xmm9
        vmulss  xmm0, xmm10, cs:__real@40a00000
        vaddss  xmm5, xmm0, xmm9
        vmulss  xmm0, xmm10, cs:__real@40400000
        vaddss  xmm7, xmm1, xmm9
        vmulss  xmm1, xmm10, cs:__real@40800000
        vaddss  xmm3, xmm0, xmm9
        vaddss  xmm6, xmm1, xmm9
        vmulss  xmm1, xmm10, cs:__real@40000000
        vinsertps xmm6, xmm6, xmm5, 10h
        vinsertps xmm6, xmm6, xmm7, 20h ; ' '
        vaddss  xmm0, xmm10, xmm9
        vmovaps xmm4, xmm9
        vinsertps xmm4, xmm4, xmm0, 10h
        vmovups ymm0, cs:__ymm@3f8000003f8000003f8000003f8000003f8000003f8000003f8000003f800000
        vaddss  xmm2, xmm1, xmm9
        vinsertps xmm4, xmm4, xmm2, 20h ; ' '
        vinsertps xmm4, xmm4, xmm3, 30h ; '0'
        vinsertps xmm6, xmm6, xmm8, 30h ; '0'
        vinsertf128 ymm7, ymm4, xmm6, 1
        vmovups ymm6, ymmword ptr [rbp+40h]
      }
      v71 = 4i64;
      _R9 = v48 + 64;
      __asm
      {
        vmovups ymmword ptr [rbp+60h], ymm7
        vmovups ymm2, ymm7
        vsubps  ymm3, ymm0, ymm7
      }
      v75 = 2;
      v76 = 4i64;
      do
      {
        _R9 += 256i64;
        __asm
        {
          vmulps  ymm0, ymm2, ymmword ptr [rcx+r14]
          vmulps  ymm1, ymm3, ymmword ptr [rcx+rbx]
          vaddps  ymm1, ymm1, ymm0
          vmovups ymmword ptr [r9-140h], ymm1
          vaddps  ymm2, ymm2, ymm6
          vsubps  ymm3, ymm3, ymm6
          vmulps  ymm0, ymm2, ymmword ptr [rcx+r14]
          vmulps  ymm1, ymm3, ymmword ptr [rcx+rbx]
          vaddps  ymm1, ymm1, ymm0
          vmovups ymmword ptr [r9-120h], ymm1
          vaddps  ymm2, ymm2, ymm6
          vsubps  ymm3, ymm3, ymm6
          vaddps  ymm4, ymm2, ymm6
          vmulps  ymm0, ymm2, ymmword ptr [rax+r14]
          vmulps  ymm1, ymm3, ymmword ptr [rax+rbx]
          vaddps  ymm1, ymm1, ymm0
          vmovups ymmword ptr [r9-100h], ymm1
          vsubps  ymm5, ymm3, ymm6
          vaddps  ymm2, ymm4, ymm6
          vsubps  ymm3, ymm5, ymm6
          vmulps  ymm0, ymm4, ymmword ptr [rcx+r14]
          vmulps  ymm1, ymm5, ymmword ptr [rcx+rbx]
          vaddps  ymm1, ymm1, ymm0
          vmovups ymmword ptr [r9-0E0h], ymm1
          vaddps  ymm4, ymm2, ymm6
          vsubps  ymm5, ymm3, ymm6
          vmulps  ymm0, ymm2, ymmword ptr [rcx+r14]
          vmulps  ymm1, ymm3, ymmword ptr [rcx+rbx]
          vaddps  ymm1, ymm1, ymm0
          vmovups ymmword ptr [r9-0C0h], ymm1
          vaddps  ymm2, ymm4, ymm6
          vsubps  ymm3, ymm5, ymm6
          vmulps  ymm0, ymm4, ymmword ptr [rcx+r14]
          vmulps  ymm1, ymm5, ymmword ptr [rcx+rbx]
          vaddps  ymm1, ymm1, ymm0
          vmovups ymmword ptr [r9-0A0h], ymm1
        }
        v75 += 8;
        __asm
        {
          vaddps  ymm4, ymm2, ymm6
          vsubps  ymm5, ymm3, ymm6
          vmulps  ymm0, ymm2, ymmword ptr [rcx+r14]
          vmulps  ymm1, ymm3, ymmword ptr [rcx+rbx]
          vaddps  ymm1, ymm1, ymm0
          vmovups ymmword ptr [r9-80h], ymm1
          vaddps  ymm2, ymm4, ymm6
          vsubps  ymm3, ymm5, ymm6
          vmulps  ymm1, ymm5, ymmword ptr [rcx+rbx]
          vmulps  ymm0, ymm4, ymmword ptr [rcx+r14]
          vaddps  ymm1, ymm1, ymm0
          vmovups ymmword ptr [r9-60h], ymm1
        }
        --v76;
      }
      while ( v76 );
      if ( v15 == 2 )
      {
        if ( ((unsigned __int8)v37 & 0x1F) != 0 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\com_snd_biquad_eq.h", 272, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( inputR ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )inputR ) ) = 0x%llx", v37) )
            __debugbreak();
          __asm
          {
            vmovups ymm7, ymmword ptr [rbp+60h]
            vmovups ymm6, ymmword ptr [rbp+40h]
          }
          v71 = 4i64;
          v49 = 2;
        }
        __asm
        {
          vmovups ymm0, cs:__ymm@3f8000003f8000003f8000003f8000003f8000003f8000003f8000003f800000
          vsubps  ymm3, ymm0, ymm7
        }
        _R8 = v48 + 1088;
        do
        {
          _R8 += 256i64;
          __asm
          {
            vaddps  ymm2, ymm7, ymm6
            vmulps  ymm1, ymm3, ymmword ptr [rcx+rsi]
            vmulps  ymm0, ymm7, ymmword ptr [rcx+rdi]
            vaddps  ymm1, ymm1, ymm0
            vmovups ymmword ptr [r8-140h], ymm1
            vsubps  ymm3, ymm3, ymm6
            vmulps  ymm1, ymm3, ymmword ptr [rcx+rsi]
            vmulps  ymm0, ymm2, ymmword ptr [rcx+rdi]
            vaddps  ymm1, ymm1, ymm0
            vmovups ymmword ptr [r8-120h], ymm1
            vsubps  ymm3, ymm3, ymm6
            vmulps  ymm1, ymm3, ymmword ptr [rax+rsi]
            vsubps  ymm5, ymm3, ymm6
            vaddps  ymm2, ymm2, ymm6
            vmulps  ymm0, ymm2, ymmword ptr [rax+rdi]
            vaddps  ymm1, ymm1, ymm0
            vmovups ymmword ptr [r8-100h], ymm1
            vaddps  ymm4, ymm2, ymm6
            vaddps  ymm2, ymm4, ymm6
            vsubps  ymm3, ymm5, ymm6
            vmulps  ymm0, ymm4, ymmword ptr [rcx+rdi]
            vmulps  ymm1, ymm5, ymmword ptr [rcx+rsi]
            vaddps  ymm1, ymm1, ymm0
            vmovups ymmword ptr [r8-0E0h], ymm1
            vsubps  ymm5, ymm3, ymm6
            vaddps  ymm4, ymm2, ymm6
            vmulps  ymm1, ymm3, ymmword ptr [rcx+rsi]
            vmulps  ymm0, ymm2, ymmword ptr [rcx+rdi]
            vaddps  ymm1, ymm1, ymm0
            vmovups ymmword ptr [r8-0C0h], ymm1
            vsubps  ymm3, ymm5, ymm6
            vaddps  ymm2, ymm4, ymm6
            vmulps  ymm0, ymm4, ymmword ptr [rcx+rdi]
            vmulps  ymm1, ymm5, ymmword ptr [rcx+rsi]
            vaddps  ymm1, ymm1, ymm0
            vmovups ymmword ptr [r8-0A0h], ymm1
          }
          v49 += 8;
          __asm
          {
            vaddps  ymm4, ymm2, ymm6
            vsubps  ymm5, ymm3, ymm6
            vaddps  ymm7, ymm4, ymm6
            vmulps  ymm1, ymm3, ymmword ptr [rcx+rsi]
            vmulps  ymm0, ymm2, ymmword ptr [rcx+rdi]
            vaddps  ymm1, ymm1, ymm0
            vmovups ymmword ptr [r8-80h], ymm1
            vsubps  ymm3, ymm5, ymm6
            vmulps  ymm1, ymm5, ymmword ptr [rcx+rsi]
            vmulps  ymm0, ymm4, ymmword ptr [rcx+rdi]
            vaddps  ymm1, ymm1, ymm0
            vmovups ymmword ptr [r8-60h], ymm1
          }
          --v71;
        }
        while ( v71 );
      }
      goto LABEL_65;
    }
LABEL_62:
    v157 = *(_DWORD **)(((unsigned __int64)v170 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10);
    v158 = v18;
    for ( i = (unsigned int)(v15 << 8); i; --i )
      *v157++ = *(_DWORD *)v158++;
LABEL_65:
    *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v170 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18) + 228i64) = **(_DWORD **)(((unsigned __int64)v170 & 0xFFFFFFFFFFFFFFE0ui64) + 0x38);
    Sys_ProfEndNamedEvent();
    goto LABEL_69;
  }
  v160 = v17;
  v161 = (unsigned int)(channelCount << 8);
  v162 = v18;
  while ( v161 )
  {
    *v160++ = *v162++;
    --v161;
  }
LABEL_69:
  _R11 = &v176;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
}

/*
==============
OnePoleHPF_ProcessArray
==============
*/
void OnePoleHPF_ProcessArray(OnePoleFilter_t *p_state, const float *p_input, float *p_output, int sampleCount)
{
  int v19; 
  unsigned int v27; 
  __int64 v28; 
  __int64 v71; 
  float currentVal; 
  float v94; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovss  xmm8, dword ptr [rcx]
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovss  xmm9, cs:__real@2f800000
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
  }
  currentVal = p_state->m_a.currentVal;
  __asm
  {
    vmovss  xmm6, [rsp+0C8h+var_C0]
    vmovaps [rsp+0C8h+var_88], xmm13
    vmovaps [rsp+0C8h+var_98], xmm14
    vmovsd  xmm14, qword ptr [rcx+8]
  }
  v94 = p_state->m_b.currentVal;
  v19 = 0;
  __asm
  {
    vmovaps [rsp+0C8h+var_A8], xmm15
    vmovsd  xmm15, qword ptr [rcx+14h]
    vmovss  xmm7, [rsp+0C8h+var_B0]
    vmovsd  [rsp+0C8h+var_C8], xmm14
    vmovss  xmm11, dword ptr [rsp+0C8h+var_C8]
    vmovsd  [rsp+0C8h+var_B8], xmm15
    vmovss  xmm13, dword ptr [rsp+0C8h+var_B8]
    vshufps xmm10, xmm14, xmm14, 55h ; 'U'
    vshufps xmm12, xmm15, xmm15, 55h ; 'U'
  }
  if ( sampleCount >= 4 )
  {
    _R10 = (char *)p_input - (char *)p_output;
    v27 = ((unsigned int)(sampleCount - 4) >> 2) + 1;
    v28 = v27;
    v19 = 4 * v27;
    do
    {
      __asm
      {
        vmovss  xmm3, dword ptr [rdx]
        vmulss  xmm0, xmm6, xmm11
        vaddss  xmm4, xmm0, xmm10
        vmulss  xmm2, xmm4, xmm3
        vmulss  xmm1, xmm7, xmm13
        vaddss  xmm5, xmm1, xmm12
        vmulss  xmm0, xmm5, xmm8
        vaddss  xmm6, xmm2, xmm0
        vsubss  xmm1, xmm3, xmm6
        vmovss  dword ptr [r8], xmm1
        vaddss  xmm0, xmm4, xmm9
        vmulss  xmm2, xmm0, xmm11
        vaddss  xmm3, xmm2, xmm10
        vmovss  xmm2, dword ptr [r10+r8+4]
        vaddss  xmm1, xmm5, xmm9
        vmulss  xmm0, xmm1, xmm13
        vaddss  xmm4, xmm0, xmm12
        vmulss  xmm0, xmm3, xmm2
        vmulss  xmm1, xmm6, xmm4
        vaddss  xmm5, xmm1, xmm0
        vsubss  xmm1, xmm2, xmm5
        vmovss  dword ptr [r8+4], xmm1
        vaddss  xmm0, xmm3, xmm9
        vmovss  xmm3, dword ptr [r10+r8+8]
        vmulss  xmm2, xmm0, xmm11
        vaddss  xmm6, xmm2, xmm10
        vaddss  xmm1, xmm4, xmm9
        vmulss  xmm0, xmm1, xmm13
        vaddss  xmm2, xmm0, xmm12
        vmulss  xmm1, xmm5, xmm2
        vmulss  xmm0, xmm6, xmm3
        vaddss  xmm5, xmm1, xmm0
        vaddss  xmm0, xmm6, xmm9
        vaddss  xmm4, xmm2, xmm9
        vmulss  xmm2, xmm0, xmm11
        vsubss  xmm1, xmm3, xmm5
        vmovss  dword ptr [r8+8], xmm1
        vaddss  xmm3, xmm2, xmm10
        vmovss  xmm2, dword ptr [r10+r8+0Ch]
        vmulss  xmm0, xmm4, xmm13
        vaddss  xmm1, xmm0, xmm12
        vaddss  xmm7, xmm1, xmm9
        vmulss  xmm1, xmm5, xmm1
        vmulss  xmm0, xmm3, xmm2
        vaddss  xmm8, xmm1, xmm0
        vsubss  xmm1, xmm2, xmm8
        vmovss  dword ptr [r8+0Ch], xmm1
      }
      p_output += 4;
      p_input += 4;
      __asm { vaddss  xmm6, xmm3, xmm9 }
      --v28;
    }
    while ( v28 );
    __asm
    {
      vmovss  [rsp+0C8h+var_C0], xmm6
      vmovss  [rsp+0C8h+var_B0], xmm7
    }
  }
  if ( v19 < sampleCount )
  {
    _R8 = (char *)p_output - (char *)p_input;
    v71 = (unsigned int)(sampleCount - v19);
    do
    {
      __asm { vmovss  xmm3, dword ptr [rdx] }
      ++p_input;
      __asm
      {
        vmulss  xmm0, xmm6, xmm11
        vaddss  xmm1, xmm0, xmm10
        vmulss  xmm0, xmm7, xmm13
        vaddss  xmm2, xmm0, xmm12
        vaddss  xmm6, xmm1, xmm9
        vmulss  xmm1, xmm1, xmm3
        vmulss  xmm0, xmm2, xmm8
        vaddss  xmm8, xmm1, xmm0
        vsubss  xmm1, xmm3, xmm8
        vmovss  dword ptr [r8+rdx-4], xmm1
        vaddss  xmm7, xmm2, xmm9
      }
      --v71;
    }
    while ( v71 );
    __asm
    {
      vmovss  [rsp+0C8h+var_C0], xmm6
      vmovss  [rsp+0C8h+var_B0], xmm7
    }
  }
  _R11 = &retaddr;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, [rsp+0C8h+var_88]
    vmovsd  qword ptr [rcx+8], xmm14
    vmovaps xmm14, [rsp+0C8h+var_98]
    vmovsd  qword ptr [rcx+14h], xmm15
    vmovaps xmm15, [rsp+0C8h+var_A8]
  }
  p_state->m_a.currentVal = currentVal;
  __asm
  {
    vmovss  dword ptr [rcx], xmm8
    vmovaps xmm8, xmmword ptr [r11-38h]
  }
  p_state->m_b.currentVal = v94;
}

/*
==============
OnePoleHPF_ProcessArrayStereoBlock
==============
*/
void OnePoleHPF_ProcessArrayStereoBlock(OnePoleFilter_t *p_state, const float *p_input, float *p_output, int sampleCount)
{
  __int64 v18; 
  int v24; 
  unsigned int v31; 
  __int64 v32; 
  __int64 v96; 
  float currentVal; 
  float v124; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovss  xmm8, dword ptr [rcx]
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovss  xmm9, dword ptr [rcx+4]
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovsd  xmm10, qword ptr [rcx+8]
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps [rsp+0C8h+var_88], xmm13
    vmovaps [rsp+0C8h+var_98], xmm14
  }
  v18 = sampleCount;
  __asm
  {
    vmovaps [rsp+0C8h+var_A8], xmm15
    vmovsd  qword ptr [rax+8], xmm10
    vmovsd  xmm0, qword ptr [rcx+14h]
  }
  _R9 = &p_input[sampleCount];
  __asm { vmovss  xmm11, cs:__real@2f800000 }
  currentVal = p_state->m_a.currentVal;
  _R10 = &p_output[v18];
  __asm { vmovss  xmm6, [rsp+0C8h+var_C0] }
  v124 = p_state->m_b.currentVal;
  v24 = 0;
  __asm
  {
    vmovss  xmm7, [rsp+0C8h+var_B0]
    vmovsd  [rsp+0C8h+var_C8], xmm10
    vmovss  xmm13, dword ptr [rsp+0C8h+var_C8]
    vmovsd  [rsp+0C8h+var_B8], xmm0
    vmovss  xmm15, dword ptr [rsp+0C8h+var_B8]
    vmovsd  [rsp+0C8h+arg_8], xmm0
    vshufps xmm12, xmm10, xmm10, 55h ; 'U'
    vshufps xmm14, xmm0, xmm0, 55h ; 'U'
  }
  if ( (int)v18 >= 4 )
  {
    _RBX = (char *)p_input - (char *)p_output;
    v31 = ((unsigned int)(v18 - 4) >> 2) + 1;
    v32 = v31;
    v24 = 4 * v31;
    do
    {
      __asm
      {
        vmovss  xmm3, dword ptr [rdx]
        vmulss  xmm0, xmm6, xmm13
        vaddss  xmm5, xmm0, xmm12
        vmulss  xmm2, xmm5, xmm3
        vmulss  xmm1, xmm7, xmm15
        vaddss  xmm6, xmm1, xmm14
        vmulss  xmm0, xmm6, xmm8
        vaddss  xmm8, xmm2, xmm0
        vsubss  xmm1, xmm3, xmm8
        vmovss  dword ptr [r8], xmm1
        vmovss  xmm4, dword ptr [r9]
        vmulss  xmm2, xmm5, xmm4
        vmulss  xmm0, xmm6, xmm9
        vaddss  xmm9, xmm2, xmm0
        vsubss  xmm1, xmm4, xmm9
        vmovss  dword ptr [r10], xmm1
        vaddss  xmm0, xmm5, xmm11
        vmulss  xmm2, xmm0, xmm13
        vaddss  xmm5, xmm2, xmm12
        vmovss  xmm2, dword ptr [rbx+r8+4]
        vaddss  xmm0, xmm6, xmm11
        vmulss  xmm1, xmm0, xmm15
        vaddss  xmm4, xmm1, xmm14
        vmulss  xmm1, xmm5, xmm2
        vmulss  xmm0, xmm4, xmm8
        vaddss  xmm8, xmm1, xmm0
        vsubss  xmm1, xmm2, xmm8
        vmovss  dword ptr [r8+4], xmm1
        vmovss  xmm3, dword ptr [r9+4]
        vmulss  xmm2, xmm5, xmm3
        vmulss  xmm0, xmm4, xmm9
        vaddss  xmm9, xmm2, xmm0
        vsubss  xmm1, xmm3, xmm9
        vmovss  dword ptr [r10+4], xmm1
        vmovss  xmm2, dword ptr [rbx+r8+8]
        vaddss  xmm7, xmm4, xmm11
        vmulss  xmm1, xmm7, xmm15
        vaddss  xmm4, xmm1, xmm14
        vaddss  xmm10, xmm5, xmm11
        vaddss  xmm7, xmm4, xmm11
        vmulss  xmm0, xmm10, xmm13
        vaddss  xmm5, xmm0, xmm12
        vmulss  xmm1, xmm5, xmm2
        vmulss  xmm0, xmm4, xmm8
        vaddss  xmm8, xmm1, xmm0
        vsubss  xmm1, xmm2, xmm8
        vmovss  dword ptr [r8+8], xmm1
        vmovss  xmm3, dword ptr [r9+8]
        vmulss  xmm2, xmm5, xmm3
        vmulss  xmm0, xmm4, xmm9
        vaddss  xmm9, xmm2, xmm0
        vsubss  xmm1, xmm3, xmm9
        vmovss  dword ptr [r10+8], xmm1
        vmovss  xmm2, dword ptr [rbx+r8+0Ch]
        vaddss  xmm6, xmm5, xmm11
        vmulss  xmm0, xmm6, xmm13
        vaddss  xmm5, xmm0, xmm12
        vmulss  xmm0, xmm7, xmm15
        vaddss  xmm4, xmm0, xmm14
        vmulss  xmm1, xmm5, xmm2
        vmulss  xmm0, xmm4, xmm8
        vaddss  xmm8, xmm1, xmm0
        vsubss  xmm1, xmm2, xmm8
        vmovss  dword ptr [r8+0Ch], xmm1
        vmovss  xmm3, dword ptr [r9+0Ch]
        vmulss  xmm2, xmm5, xmm3
        vmulss  xmm0, xmm4, xmm9
        vaddss  xmm9, xmm2, xmm0
        vsubss  xmm1, xmm3, xmm9
        vmovss  dword ptr [r10+0Ch], xmm1
      }
      _R10 += 4;
      p_output += 4;
      _R9 += 4;
      p_input += 4;
      __asm
      {
        vaddss  xmm6, xmm5, xmm11
        vaddss  xmm7, xmm4, xmm11
      }
      --v32;
    }
    while ( v32 );
    __asm
    {
      vmovsd  xmm10, [rsp+0C8h+arg_0]
      vmovss  [rsp+0C8h+var_C0], xmm6
      vmovss  [rsp+0C8h+var_B0], xmm7
    }
  }
  if ( v24 < (int)v18 )
  {
    _RDX = (char *)p_input - (char *)p_output;
    _R9 = (char *)_R9 - (char *)p_output;
    _R10 = (char *)_R10 - (char *)p_output;
    v96 = (unsigned int)(v18 - v24);
    do
    {
      __asm { vmovss  xmm2, dword ptr [rdx+r8] }
      ++p_output;
      __asm
      {
        vmulss  xmm0, xmm6, xmm13
        vaddss  xmm5, xmm0, xmm12
        vmulss  xmm0, xmm7, xmm15
        vaddss  xmm4, xmm0, xmm14
        vmulss  xmm1, xmm5, xmm2
        vmulss  xmm0, xmm4, xmm8
        vaddss  xmm8, xmm1, xmm0
        vsubss  xmm1, xmm2, xmm8
        vmovss  dword ptr [r8-4], xmm1
        vmovss  xmm3, dword ptr [r9+r8-4]
        vmulss  xmm2, xmm5, xmm3
        vmulss  xmm0, xmm4, xmm9
        vaddss  xmm9, xmm2, xmm0
        vsubss  xmm1, xmm3, xmm9
        vmovss  dword ptr [r10+r8-4], xmm1
        vaddss  xmm6, xmm5, xmm11
        vaddss  xmm7, xmm4, xmm11
      }
      --v96;
    }
    while ( v96 );
    __asm
    {
      vmovss  [rsp+0C8h+var_C0], xmm6
      vmovss  [rsp+0C8h+var_B0], xmm7
    }
  }
  _R11 = &retaddr;
  __asm
  {
    vmovsd  xmm0, [rsp+0C8h+arg_8]
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, [rsp+0C8h+var_88]
    vmovaps xmm14, [rsp+0C8h+var_98]
    vmovaps xmm15, [rsp+0C8h+var_A8]
    vmovsd  qword ptr [rcx+8], xmm10
    vmovaps xmm10, xmmword ptr [r11-58h]
  }
  p_state->m_a.currentVal = currentVal;
  __asm
  {
    vmovsd  qword ptr [rcx+14h], xmm0
    vmovss  dword ptr [rcx], xmm8
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovss  dword ptr [rcx+4], xmm9
    vmovaps xmm9, xmmword ptr [r11-48h]
  }
  p_state->m_b.currentVal = v124;
}

/*
==============
OnePoleLPF_ProcessArray
==============
*/
void OnePoleLPF_ProcessArray(OnePoleFilter_t *p_state, const float *p_input, float *p_output, int sampleCount)
{
  int v17; 
  unsigned int v24; 
  __int64 v25; 
  __int64 v60; 
  float currentVal; 
  float v79; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovss  xmm6, dword ptr [rcx]
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovss  xmm7, cs:__real@2f800000
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovsd  xmm12, qword ptr [rcx+8]
  }
  currentVal = p_state->m_a.currentVal;
  __asm { vmovss  xmm4, [rsp+0A8h+var_A0] }
  v79 = p_state->m_b.currentVal;
  v17 = 0;
  __asm
  {
    vmovaps [rsp+0A8h+var_88], xmm13
    vmovsd  xmm13, qword ptr [rcx+14h]
    vmovss  xmm5, [rsp+0A8h+var_90]
    vmovsd  [rsp+0A8h+var_A8], xmm12
    vmovss  xmm9, dword ptr [rsp+0A8h+var_A8]
    vmovsd  [rsp+0A8h+var_98], xmm13
    vmovss  xmm11, dword ptr [rsp+0A8h+var_98]
    vshufps xmm8, xmm12, xmm12, 55h ; 'U'
    vshufps xmm10, xmm13, xmm13, 55h ; 'U'
  }
  if ( sampleCount >= 4 )
  {
    v24 = ((unsigned int)(sampleCount - 4) >> 2) + 1;
    v25 = v24;
    v17 = 4 * v24;
    do
    {
      __asm
      {
        vmulss  xmm0, xmm4, xmm9
        vaddss  xmm3, xmm0, xmm8
        vmulss  xmm2, xmm3, dword ptr [rdx]
        vmulss  xmm1, xmm5, xmm11
        vaddss  xmm4, xmm1, xmm10
        vmulss  xmm0, xmm4, xmm6
        vaddss  xmm6, xmm2, xmm0
        vmovss  dword ptr [r8], xmm6
        vaddss  xmm1, xmm3, xmm7
        vmulss  xmm0, xmm1, xmm9
        vaddss  xmm5, xmm0, xmm8
        vaddss  xmm2, xmm4, xmm7
        vmulss  xmm1, xmm2, xmm11
        vaddss  xmm3, xmm1, xmm10
        vmulss  xmm1, xmm5, dword ptr [r10+r8+4]
        vmulss  xmm0, xmm6, xmm3
        vaddss  xmm6, xmm1, xmm0
        vmovss  dword ptr [r8+4], xmm6
        vaddss  xmm1, xmm5, xmm7
        vmulss  xmm0, xmm1, xmm9
        vaddss  xmm4, xmm0, xmm8
        vaddss  xmm2, xmm3, xmm7
        vmulss  xmm1, xmm2, xmm11
        vaddss  xmm0, xmm1, xmm10
        vmulss  xmm1, xmm4, dword ptr [r10+r8+8]
        vaddss  xmm5, xmm0, xmm7
        vmulss  xmm0, xmm6, xmm0
        vaddss  xmm6, xmm1, xmm0
        vaddss  xmm1, xmm4, xmm7
        vmulss  xmm0, xmm1, xmm9
        vaddss  xmm3, xmm0, xmm8
        vmulss  xmm0, xmm5, xmm11
        vmovss  dword ptr [r8+8], xmm6
        vmulss  xmm1, xmm3, dword ptr [r10+r8+0Ch]
        vaddss  xmm2, xmm0, xmm10
        vmulss  xmm0, xmm6, xmm2
        vaddss  xmm6, xmm1, xmm0
        vmovss  dword ptr [r8+0Ch], xmm6
      }
      p_output += 4;
      p_input += 4;
      __asm
      {
        vaddss  xmm4, xmm3, xmm7
        vaddss  xmm5, xmm2, xmm7
      }
      --v25;
    }
    while ( v25 );
    __asm
    {
      vmovss  [rsp+0A8h+var_A0], xmm4
      vmovss  [rsp+0A8h+var_90], xmm5
    }
  }
  if ( v17 < sampleCount )
  {
    _R8 = (char *)p_output - (char *)p_input;
    v60 = (unsigned int)(sampleCount - v17);
    do
    {
      ++p_input;
      __asm
      {
        vmulss  xmm0, xmm4, xmm9
        vaddss  xmm1, xmm0, xmm8
        vmulss  xmm0, xmm5, xmm11
        vaddss  xmm2, xmm0, xmm10
        vaddss  xmm4, xmm1, xmm7
        vmulss  xmm1, xmm1, dword ptr [rdx-4]
        vmulss  xmm0, xmm2, xmm6
        vaddss  xmm6, xmm1, xmm0
        vmovss  dword ptr [r8+rdx-4], xmm6
        vaddss  xmm5, xmm2, xmm7
      }
      --v60;
    }
    while ( v60 );
    __asm
    {
      vmovss  [rsp+0A8h+var_A0], xmm4
      vmovss  [rsp+0A8h+var_90], xmm5
    }
  }
  _R11 = &retaddr;
  __asm
  {
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovsd  qword ptr [rcx+8], xmm12
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovsd  qword ptr [rcx+14h], xmm13
    vmovaps xmm13, [rsp+0A8h+var_88]
  }
  p_state->m_a.currentVal = currentVal;
  __asm
  {
    vmovss  dword ptr [rcx], xmm6
    vmovaps xmm6, xmmword ptr [r11-18h]
  }
  p_state->m_b.currentVal = v79;
}

/*
==============
OnePoleLPF_ProcessArrayStereoBlock
==============
*/
void OnePoleLPF_ProcessArrayStereoBlock(OnePoleFilter_t *p_state, const float *p_input, float *p_output, int sampleCount)
{
  __int64 v18; 
  int v20; 
  const float *v21; 
  unsigned int v29; 
  __int64 v30; 
  __int64 v76; 
  float currentVal; 
  float v98; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovss  xmm6, dword ptr [rcx]
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovss  xmm7, dword ptr [rcx+4]
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovss  xmm8, cs:__real@2f800000
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
  }
  currentVal = p_state->m_a.currentVal;
  __asm { vmovss  xmm4, [rsp+0B8h+var_B0] }
  v18 = sampleCount;
  __asm
  {
    vmovaps [rsp+0B8h+var_88], xmm13
    vmovsd  xmm13, qword ptr [rcx+8]
  }
  v98 = p_state->m_b.currentVal;
  v20 = 0;
  __asm { vmovaps [rsp+0B8h+var_98], xmm14 }
  v21 = &p_input[sampleCount];
  _R10 = &p_output[v18];
  __asm
  {
    vmovsd  xmm14, qword ptr [rcx+14h]
    vmovss  xmm5, [rsp+0B8h+var_A0]
    vmovsd  [rsp+0B8h+var_B8], xmm13
    vmovss  xmm10, dword ptr [rsp+0B8h+var_B8]
    vmovsd  [rsp+0B8h+var_A8], xmm14
    vmovss  xmm12, dword ptr [rsp+0B8h+var_A8]
    vshufps xmm9, xmm13, xmm13, 55h ; 'U'
    vshufps xmm11, xmm14, xmm14, 55h ; 'U'
  }
  if ( (int)v18 >= 4 )
  {
    v29 = ((unsigned int)(v18 - 4) >> 2) + 1;
    v30 = v29;
    v20 = 4 * v29;
    do
    {
      __asm
      {
        vmulss  xmm0, xmm4, xmm10
        vaddss  xmm3, xmm0, xmm9
        vmulss  xmm2, xmm3, dword ptr [rdx]
        vmulss  xmm1, xmm5, xmm12
        vaddss  xmm4, xmm1, xmm11
        vmulss  xmm0, xmm4, xmm6
        vaddss  xmm6, xmm2, xmm0
        vmovss  dword ptr [r8], xmm6
        vmulss  xmm1, xmm3, dword ptr [r9]
        vmulss  xmm0, xmm4, xmm7
        vaddss  xmm7, xmm1, xmm0
        vmovss  dword ptr [r10], xmm7
        vaddss  xmm0, xmm3, xmm8
        vmulss  xmm1, xmm0, xmm10
        vaddss  xmm5, xmm1, xmm9
        vmulss  xmm1, xmm5, dword ptr [rbx+r8+4]
        vaddss  xmm2, xmm4, xmm8
        vmulss  xmm0, xmm2, xmm12
        vaddss  xmm3, xmm0, xmm11
        vmulss  xmm0, xmm3, xmm6
        vaddss  xmm6, xmm1, xmm0
        vmovss  dword ptr [r8+4], xmm6
        vmulss  xmm1, xmm5, dword ptr [r9+4]
        vmulss  xmm0, xmm3, xmm7
        vaddss  xmm7, xmm1, xmm0
        vmovss  dword ptr [r10+4], xmm7
        vaddss  xmm0, xmm5, xmm8
        vmulss  xmm1, xmm0, xmm10
        vaddss  xmm2, xmm3, xmm8
        vaddss  xmm3, xmm1, xmm9
        vmulss  xmm1, xmm3, dword ptr [rbx+r8+8]
        vmulss  xmm0, xmm2, xmm12
        vaddss  xmm2, xmm0, xmm11
        vmulss  xmm0, xmm2, xmm6
        vaddss  xmm6, xmm1, xmm0
        vmovss  dword ptr [r8+8], xmm6
        vmulss  xmm1, xmm3, dword ptr [r9+8]
        vmulss  xmm0, xmm2, xmm7
        vaddss  xmm7, xmm1, xmm0
        vmovss  dword ptr [r10+8], xmm7
        vaddss  xmm4, xmm3, xmm8
        vmulss  xmm0, xmm4, xmm10
        vaddss  xmm3, xmm0, xmm9
        vmulss  xmm1, xmm3, dword ptr [rbx+r8+0Ch]
        vaddss  xmm5, xmm2, xmm8
        vmulss  xmm0, xmm5, xmm12
        vaddss  xmm2, xmm0, xmm11
        vmulss  xmm0, xmm2, xmm6
        vaddss  xmm6, xmm1, xmm0
        vmovss  dword ptr [r8+0Ch], xmm6
        vmulss  xmm1, xmm3, dword ptr [r9+0Ch]
        vmulss  xmm0, xmm2, xmm7
        vaddss  xmm7, xmm1, xmm0
        vmovss  dword ptr [r10+0Ch], xmm7
      }
      _R10 += 4;
      p_output += 4;
      v21 += 4;
      p_input += 4;
      __asm
      {
        vaddss  xmm4, xmm3, xmm8
        vaddss  xmm5, xmm2, xmm8
      }
      --v30;
    }
    while ( v30 );
    __asm
    {
      vmovss  [rsp+0B8h+var_B0], xmm4
      vmovss  [rsp+0B8h+var_A0], xmm5
    }
  }
  if ( v20 < (int)v18 )
  {
    _R10 = (char *)_R10 - (char *)p_output;
    v76 = (unsigned int)(v18 - v20);
    do
    {
      ++p_output;
      __asm
      {
        vmulss  xmm0, xmm4, xmm10
        vaddss  xmm3, xmm0, xmm9
        vmulss  xmm1, xmm3, dword ptr [rdx+r8-4]
        vmulss  xmm0, xmm5, xmm12
        vaddss  xmm2, xmm0, xmm11
        vmulss  xmm0, xmm2, xmm6
        vaddss  xmm6, xmm1, xmm0
        vmovss  dword ptr [r8-4], xmm6
        vmulss  xmm1, xmm3, dword ptr [r9+r8-4]
        vmulss  xmm0, xmm2, xmm7
        vaddss  xmm7, xmm1, xmm0
        vmovss  dword ptr [r10+r8-4], xmm7
        vaddss  xmm4, xmm3, xmm8
        vaddss  xmm5, xmm2, xmm8
      }
      --v76;
    }
    while ( v76 );
    __asm
    {
      vmovss  [rsp+0B8h+var_B0], xmm4
      vmovss  [rsp+0B8h+var_A0], xmm5
    }
  }
  _R11 = &retaddr;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovsd  qword ptr [rcx+8], xmm13
    vmovaps xmm13, [rsp+0B8h+var_88]
    vmovsd  qword ptr [rcx+14h], xmm14
    vmovaps xmm14, [rsp+0B8h+var_98]
  }
  p_state->m_a.currentVal = currentVal;
  __asm
  {
    vmovss  dword ptr [rcx], xmm6
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovss  dword ptr [rcx+4], xmm7
    vmovaps xmm7, xmmword ptr [r11-28h]
  }
  p_state->m_b.currentVal = v98;
}

