/*
==============
SND_FiveTapDelaySetParams
==============
*/

void __fastcall SND_FiveTapDelaySetParams(snd_quad_five_tap_delay_state *state, snd_quad_five_tap_delay_params *params)
{
  ?SND_FiveTapDelaySetParams@@YAXPEAUsnd_quad_five_tap_delay_state@@PEAUsnd_quad_five_tap_delay_params@@@Z(state, params);
}

/*
==============
SND_DelayParamsDefault
==============
*/

void __fastcall SND_DelayParamsDefault(snd_quad_five_tap_delay_params *params)
{
  ?SND_DelayParamsDefault@@YAXPEAUsnd_quad_five_tap_delay_params@@@Z(params);
}

/*
==============
SND_FiveTapDelayFrame
==============
*/

void __fastcall SND_FiveTapDelayFrame(snd_quad_five_tap_delay_state *state, float *input0, float *input1, float *input2, float *input3, const int count)
{
  ?SND_FiveTapDelayFrame@@YAXPEAUsnd_quad_five_tap_delay_state@@PEIAM111H@Z(state, input0, input1, input2, input3, count);
}

/*
==============
SND_FiveTapDelayInit
==============
*/

void __fastcall SND_FiveTapDelayInit(snd_quad_five_tap_delay_state *state)
{
  ?SND_FiveTapDelayInit@@YAXPEAUsnd_quad_five_tap_delay_state@@@Z(state);
}

/*
==============
SND_DelayParamsDefault
==============
*/
void SND_DelayParamsDefault(snd_quad_five_tap_delay_params *params)
{
  unsigned int v1; 
  float *p_level; 

  v1 = 0;
  p_level = &params->params[1].level;
  do
  {
    v1 += 5;
    *((_BYTE *)p_level - 28) = 0;
    *((_QWORD *)p_level - 3) = 0i64;
    *((_QWORD *)p_level - 2) = 1186693120i64;
    *((_BYTE *)p_level - 8) = 0;
    *(_QWORD *)(p_level - 1) = 0i64;
    *(_QWORD *)(p_level + 1) = 1186693120i64;
    *((_BYTE *)p_level + 12) = 0;
    *((_QWORD *)p_level + 2) = 0i64;
    *((_QWORD *)p_level + 3) = 1186693120i64;
    *((_BYTE *)p_level + 32) = 0;
    *(_QWORD *)(p_level + 9) = 0i64;
    *(_QWORD *)(p_level + 11) = 1186693120i64;
    *((_BYTE *)p_level + 52) = 0;
    *((_QWORD *)p_level + 7) = 0i64;
    *((_QWORD *)p_level + 8) = 1186693120i64;
    p_level += 25;
  }
  while ( v1 < 5 );
}

/*
==============
SND_FiveTapDelayFrame
==============
*/
void SND_FiveTapDelayFrame(snd_quad_five_tap_delay_state *state, float *input0, float *input1, float *input2, float *input3, const int count)
{
  __int64 v18; 
  __int64 v20; 
  unsigned int v61; 
  int v76; 
  char *v77; 
  __int64 v78; 
  int readPos; 
  __int64 v91; 
  char v140[160]; 
  char v141[3936]; 

  _RBX = state;
  Sys_ProfBeginNamedEvent(0xFF00FFu, "SND_FiveTapDelayFrame");
  if ( count != 256 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_delay.cpp", 108, ASSERT_TYPE_ASSERT, "(count == ( 256 ))", (const char *)&queryFormat, "count == SD_MIX_FRAME_COUNT") )
    __debugbreak();
  if ( _RBX->state[0].enabled || _RBX->state[1].enabled || _RBX->state[2].enabled || _RBX->state[3].enabled || _RBX->state[4].enabled )
  {
    _RSI = (char *)input0 - (char *)input1;
    __asm { vmovaps [rsp+1098h+var_38], xmm6 }
    _RBP = (char *)input2 - (char *)input1;
    __asm { vmovaps [rsp+1098h+var_48], xmm7 }
    _R11 = input1 + 4;
    __asm { vmovaps [rsp+1098h+var_58], xmm8 }
    _R14 = (char *)input3 - (char *)input1;
    _RCX = v141;
    v18 = 16i64;
    _RAX = _R11;
    v20 = 16i64;
    do
    {
      _RCX += 256;
      __asm
      {
        vmovups xmm3, xmmword ptr [rsi+rax-10h]
        vshufps xmm6, xmm3, xmmword ptr [rax-10h], 44h ; 'D'
        vshufps xmm2, xmm3, xmmword ptr [rax-10h], 0EEh ; 'î'
        vmovups xmm1, xmmword ptr [rax+rbp-10h]
        vshufps xmm4, xmm1, xmmword ptr [r14+rax-10h], 44h ; 'D'
        vshufps xmm5, xmm1, xmmword ptr [r14+rax-10h], 0EEh ; 'î'
        vmovups xmm3, xmmword ptr [rsi+rax]
      }
      _RAX += 16;
      __asm
      {
        vshufps xmm1, xmm6, xmm4, 0DDh ; 'Ý'
        vmovups xmmword ptr [rcx-190h], xmm1
        vshufps xmm1, xmm2, xmm5, 0DDh ; 'Ý'
        vmovups xmmword ptr [rcx-170h], xmm1
        vmovups xmm1, xmmword ptr [rax+rbp-40h]
        vshufps xmm0, xmm6, xmm4, 88h ; 'ˆ'
        vshufps xmm4, xmm1, xmmword ptr [r14+rax-40h], 44h ; 'D'
        vshufps xmm6, xmm3, xmmword ptr [rax-40h], 44h ; 'D'
        vmovups xmmword ptr [rcx-1A0h], xmm0
        vshufps xmm0, xmm2, xmm5, 88h ; 'ˆ'
        vshufps xmm5, xmm1, xmmword ptr [r14+rax-40h], 0EEh ; 'î'
        vshufps xmm2, xmm3, xmmword ptr [rax-40h], 0EEh ; 'î'
        vmovups xmm3, xmmword ptr [rsi+rax-30h]
        vmovups xmmword ptr [rcx-180h], xmm0
        vshufps xmm0, xmm6, xmm4, 88h ; 'ˆ'
        vmovups xmmword ptr [rcx-160h], xmm0
        vshufps xmm1, xmm6, xmm4, 0DDh ; 'Ý'
        vshufps xmm6, xmm3, xmmword ptr [rax-30h], 44h ; 'D'
        vmovups xmmword ptr [rcx-150h], xmm1
        vshufps xmm0, xmm2, xmm5, 88h ; 'ˆ'
        vmovups xmmword ptr [rcx-140h], xmm0
        vshufps xmm1, xmm2, xmm5, 0DDh ; 'Ý'
        vshufps xmm2, xmm3, xmmword ptr [rax-30h], 0EEh ; 'î'
        vmovups xmm3, xmmword ptr [rsi+rax-20h]
        vmovups xmmword ptr [rcx-130h], xmm1
        vmovups xmm1, xmmword ptr [rax+rbp-30h]
        vshufps xmm4, xmm1, xmmword ptr [r14+rax-30h], 44h ; 'D'
        vshufps xmm5, xmm1, xmmword ptr [r14+rax-30h], 0EEh ; 'î'
        vshufps xmm0, xmm6, xmm4, 88h ; 'ˆ'
        vmovups xmmword ptr [rcx-120h], xmm0
        vshufps xmm1, xmm6, xmm4, 0DDh ; 'Ý'
        vshufps xmm6, xmm3, xmmword ptr [rax-20h], 44h ; 'D'
        vmovups xmmword ptr [rcx-110h], xmm1
        vshufps xmm0, xmm2, xmm5, 88h ; 'ˆ'
        vmovups xmmword ptr [rcx-100h], xmm0
        vshufps xmm1, xmm2, xmm5, 0DDh ; 'Ý'
        vshufps xmm2, xmm3, xmmword ptr [rax-20h], 0EEh ; 'î'
        vmovups xmmword ptr [rcx-0F0h], xmm1
        vmovups xmm1, xmmword ptr [rax+rbp-20h]
        vshufps xmm4, xmm1, xmmword ptr [r14+rax-20h], 44h ; 'D'
        vshufps xmm5, xmm1, xmmword ptr [r14+rax-20h], 0EEh ; 'î'
        vshufps xmm0, xmm6, xmm4, 88h ; 'ˆ'
        vmovups xmmword ptr [rcx-0E0h], xmm0
        vshufps xmm1, xmm6, xmm4, 0DDh ; 'Ý'
        vmovups xmmword ptr [rcx-0D0h], xmm1
        vshufps xmm0, xmm2, xmm5, 88h ; 'ˆ'
        vmovups xmmword ptr [rcx-0C0h], xmm0
        vshufps xmm1, xmm2, xmm5, 0DDh ; 'Ý'
        vmovups xmmword ptr [rcx-0B0h], xmm1
      }
      --v20;
    }
    while ( v20 );
    v61 = 0;
    _RDX = &_RBX->state[0].level;
    do
    {
      if ( *((_BYTE *)_RDX - 8) )
      {
        __asm
        {
          vmovss  xmm2, dword ptr [rdx+0Ch]
          vinsertps xmm2, xmm2, dword ptr [rdx+10h], 10h
          vmovss  xmm3, dword ptr [rdx+24h]
          vinsertps xmm3, xmm3, dword ptr [rdx+28h], 10h
          vinsertps xmm2, xmm2, dword ptr [rdx+14h], 20h ; ' '
          vinsertps xmm3, xmm3, dword ptr [rdx+2Ch], 20h ; ' '
          vinsertps xmm2, xmm2, dword ptr [rdx+18h], 30h ; '0'
          vinsertps xmm3, xmm3, dword ptr [rdx+30h], 30h ; '0'
          vbroadcastss xmm4, dword ptr [rdx]
          vbroadcastss xmm5, dword ptr [rdx+4]
          vbroadcastss xmm6, dword ptr [rdx+8]
          vbroadcastss xmm7, dword ptr [rdx+1Ch]
          vbroadcastss xmm8, dword ptr [rdx+20h]
        }
        v76 = *((_DWORD *)_RDX - 1);
        v77 = v140;
        v78 = 256i64;
        do
        {
          __asm { vmulps  xmm1, xmm5, xmmword ptr [r8] }
          _RAX = 2i64 * v76;
          __asm
          {
            vmulps  xmm0, xmm6, xmm2
            vaddps  xmm2, xmm0, xmm1
            vmulps  xmm1, xmm7, xmm2
            vmulps  xmm0, xmm8, xmm3
            vaddps  xmm3, xmm0, xmm1
            vsubps  xmm0, xmm2, xmm3
            vmulps  xmm0, xmm0, xmm4
            vaddps  xmm1, xmm0, xmmword ptr [rbx+rax*8+130h]
            vmovups xmmword ptr [rbx+rax*8+130h], xmm1
          }
          v76 = (v76 + 1) % 0x10000;
          v77 += 16;
          --v78;
        }
        while ( v78 );
        *((_DWORD *)_RDX - 1) = v76;
        __asm
        {
          vmovss  dword ptr [rdx+0Ch], xmm2
          vextractps dword ptr [rdx+10h], xmm2, 1
          vextractps dword ptr [rdx+14h], xmm2, 2
          vextractps dword ptr [rdx+18h], xmm2, 3
          vmovss  dword ptr [rdx+24h], xmm3
          vextractps dword ptr [rdx+28h], xmm3, 1
          vextractps dword ptr [rdx+2Ch], xmm3, 2
          vextractps dword ptr [rdx+30h], xmm3, 3
        }
      }
      ++v61;
      _RDX += 15;
    }
    while ( v61 < 5 );
    readPos = _RBX->readPos;
    _RDX = v140;
    __asm { vmovaps xmm8, [rsp+1098h+var_58] }
    v91 = 256i64;
    __asm
    {
      vmovaps xmm7, [rsp+1098h+var_48]
      vxorps  xmm2, xmm2, xmm2
    }
    do
    {
      _RAX = 2i64 * readPos;
      __asm
      {
        vmovups xmm1, xmmword ptr [rbx+rax*8+130h]
        vaddps  xmm0, xmm1, xmmword ptr [rdx]
        vmovups xmmword ptr [rdx], xmm0
        vmovups xmmword ptr [rbx+rax*8+130h], xmm2
      }
      readPos = (readPos + 1) % 0x10000;
      _RDX += 16;
      --v91;
    }
    while ( v91 );
    _RBX->readPos = readPos;
    _RAX = v141;
    do
    {
      _R11 += 16;
      __asm
      {
        vmovups xmm3, xmmword ptr [rax-0A0h]
        vmovups xmm1, xmmword ptr [rax-80h]
        vshufps xmm4, xmm1, xmmword ptr [rax-70h], 44h ; 'D'
        vshufps xmm5, xmm1, xmmword ptr [rax-70h], 0EEh ; 'î'
        vmovups xmm2, xmmword ptr [rax-90h]
      }
      _RAX += 256;
      __asm
      {
        vshufps xmm6, xmm3, xmm2, 44h ; 'D'
        vshufps xmm1, xmm6, xmm4, 0DDh ; 'Ý'
        vmovups xmmword ptr [r11-50h], xmm1
        vshufps xmm2, xmm3, xmm2, 0EEh ; 'î'
        vmovups xmm3, xmmword ptr [rax-160h]
        vshufps xmm1, xmm2, xmm5, 0DDh ; 'Ý'
        vmovups xmmword ptr [r11+r14-50h], xmm1
        vmovups xmm1, xmmword ptr [rax-140h]
        vshufps xmm0, xmm6, xmm4, 88h ; 'ˆ'
        vshufps xmm4, xmm1, xmmword ptr [rax-130h], 44h ; 'D'
        vshufps xmm6, xmm3, xmmword ptr [rax-150h], 44h ; 'D'
        vmovups xmmword ptr [r11+rsi-50h], xmm0
        vshufps xmm0, xmm2, xmm5, 88h ; 'ˆ'
        vshufps xmm5, xmm1, xmmword ptr [rax-130h], 0EEh ; 'î'
        vshufps xmm2, xmm3, xmmword ptr [rax-150h], 0EEh ; 'î'
        vmovups xmm3, xmmword ptr [rax-120h]
        vmovups xmmword ptr [r11+rbp-50h], xmm0
        vshufps xmm1, xmm6, xmm4, 0DDh ; 'Ý'
        vmovups xmmword ptr [r11-40h], xmm1
        vshufps xmm1, xmm2, xmm5, 0DDh ; 'Ý'
        vmovups xmmword ptr [r11+r14-40h], xmm1
        vmovups xmm1, xmmword ptr [rax-100h]
        vshufps xmm0, xmm6, xmm4, 88h ; 'ˆ'
        vshufps xmm4, xmm1, xmmword ptr [rax-0F0h], 44h ; 'D'
        vshufps xmm6, xmm3, xmmword ptr [rax-110h], 44h ; 'D'
        vmovups xmmword ptr [r11+rsi-40h], xmm0
        vshufps xmm0, xmm2, xmm5, 88h ; 'ˆ'
        vshufps xmm5, xmm1, xmmword ptr [rax-0F0h], 0EEh ; 'î'
        vshufps xmm2, xmm3, xmmword ptr [rax-110h], 0EEh ; 'î'
        vmovups xmm3, xmmword ptr [rax-0E0h]
        vmovups xmmword ptr [r11+rbp-40h], xmm0
        vshufps xmm1, xmm6, xmm4, 0DDh ; 'Ý'
        vmovups xmmword ptr [r11-30h], xmm1
        vshufps xmm1, xmm2, xmm5, 0DDh ; 'Ý'
        vshufps xmm0, xmm6, xmm4, 88h ; 'ˆ'
        vshufps xmm6, xmm3, xmmword ptr [rax-0D0h], 44h ; 'D'
        vmovups xmmword ptr [r11+r14-30h], xmm1
        vmovups xmm1, xmmword ptr [rax-0C0h]
        vshufps xmm4, xmm1, xmmword ptr [rax-0B0h], 44h ; 'D'
        vmovups xmmword ptr [r11+rsi-30h], xmm0
        vshufps xmm0, xmm2, xmm5, 88h ; 'ˆ'
        vshufps xmm5, xmm1, xmmword ptr [rax-0B0h], 0EEh ; 'î'
        vshufps xmm2, xmm3, xmmword ptr [rax-0D0h], 0EEh ; 'î'
        vmovups xmmword ptr [r11+rbp-30h], xmm0
        vshufps xmm0, xmm6, xmm4, 88h ; 'ˆ'
        vshufps xmm1, xmm6, xmm4, 0DDh ; 'Ý'
        vmovups xmmword ptr [r11+rsi-20h], xmm0
        vmovups xmmword ptr [r11-20h], xmm1
        vshufps xmm0, xmm2, xmm5, 88h ; 'ˆ'
        vshufps xmm1, xmm2, xmm5, 0DDh ; 'Ý'
        vmovups xmmword ptr [r11+rbp-20h], xmm0
        vmovups xmmword ptr [r11+r14-20h], xmm1
      }
      --v18;
    }
    while ( v18 );
    __asm { vmovaps xmm6, [rsp+1098h+var_38] }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
SND_FiveTapDelayInit
==============
*/
void SND_FiveTapDelayInit(snd_quad_five_tap_delay_state *state)
{
  memset_0(state, 0, sizeof(snd_quad_five_tap_delay_state));
}

/*
==============
SND_FiveTapDelaySetParams
==============
*/
void SND_FiveTapDelaySetParams(snd_quad_five_tap_delay_state *state, snd_quad_five_tap_delay_params *params)
{
  unsigned int v14; 
  char v17; 
  __int64 v25; 
  char v42; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-28h], xmm6 }
  _RSI = &params->params[0].lpfCutoff;
  __asm { vmovaps xmmword ptr [rax-38h], xmm7 }
  _RDI = &state->state[0].tapPos;
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovss  xmm8, cs:__real@46bb8000
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovss  xmm9, cs:__real@b909421f
    vmovaps xmmword ptr [rax-68h], xmm10
  }
  v14 = 0;
  __asm
  {
    vmovss  xmm10, cs:__real@42400000
    vxorps  xmm6, xmm6, xmm6
  }
  do
  {
    _RDI[1] = 0;
    v17 = *((_BYTE *)_RSI - 12);
    *((_BYTE *)_RDI - 4) = v17;
    if ( v17 )
    {
      __asm
      {
        vmulss  xmm1, xmm10, dword ptr [rsi-8]
        vcvttss2si eax, xmm1
      }
      if ( _EAX > 65280 )
        _EAX = 65280;
      if ( _EAX < 0 )
        _EAX = 0;
      *_RDI = _EAX;
      __asm
      {
        vmovss  xmm0, dword ptr [rsi]
        vmaxss  xmm0, xmm0, xmm6
        vminss  xmm1, xmm0, xmm8
        vmulss  xmm0, xmm1, xmm9; X
      }
      *(float *)&_XMM0 = expf_0(*(float *)&_XMM0);
      __asm
      {
        vmovss  dword ptr [rdi+0Ch], xmm0
        vsubss  xmm0, xmm7, xmm0
        vmovss  dword ptr [rdi+8], xmm0
      }
      v25 = (int)v14;
      *(_QWORD *)state->state[v25].lpfD = 0i64;
      *(_QWORD *)&state->state[v25].lpfD[2] = 0i64;
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+4]
        vmaxss  xmm0, xmm0, xmm6
        vminss  xmm1, xmm0, xmm8
        vmulss  xmm0, xmm1, xmm9; X
      }
      *(float *)&_XMM0 = expf_0(*(float *)&_XMM0);
      __asm
      {
        vmovss  dword ptr [rdi+24h], xmm0
        vsubss  xmm0, xmm7, xmm0
        vmovss  dword ptr [rdi+20h], xmm0
      }
      *(_QWORD *)state->state[v25].hpfD = 0i64;
      *(_QWORD *)&state->state[v25].hpfD[2] = 0i64;
      __asm
      {
        vmovss  xmm0, dword ptr [rsi-4]
        vmaxss  xmm0, xmm0, xmm6
        vminss  xmm1, xmm0, xmm7
        vmovss  dword ptr [rdi+4], xmm1
      }
    }
    ++v14;
    _RSI += 5;
    _RDI += 15;
  }
  while ( v14 < 5 );
  state->readPos = 0;
  _R11 = &v42;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm6, [rsp+88h+var_28]
    vmovaps xmm7, [rsp+88h+var_38]
  }
  memset_0(state->delayLine, 0, sizeof(state->delayLine));
}

