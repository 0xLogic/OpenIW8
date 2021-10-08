/*
==============
SND_RvValidateRange
==============
*/

double __fastcall SND_RvValidateRange(float value, float min, float max)
{
  double result; 

  *(float *)&result = ?SND_RvValidateRange@@YAMMMM@Z(value, min, max);
  return result;
}

/*
==============
SND_RvParamsDefault
==============
*/

void __fastcall SND_RvParamsDefault(snd_rv_params *params)
{
  ?SND_RvParamsDefault@@YAXPEAUsnd_rv_params@@@Z(params);
}

/*
==============
SND_RvInit
==============
*/

void __fastcall SND_RvInit(snd_rv_state_simd *state, float *delayLine)
{
  ?SND_RvInit@@YAXPEAUsnd_rv_state_simd@@PEAM@Z(state, delayLine);
}

/*
==============
SND_RvParamsValidate
==============
*/

void __fastcall SND_RvParamsValidate(snd_rv_params *params)
{
  ?SND_RvParamsValidate@@YAXPEAUsnd_rv_params@@@Z(params);
}

/*
==============
SND_RvFrame
==============
*/

void __fastcall SND_RvFrame(snd_rv_params *params, snd_rv_state_simd *state, unsigned int count, float *inLF, float *inRF, float *inLS, float *inRS, float *newPan)
{
  ?SND_RvFrame@@YAXPEAUsnd_rv_params@@PEAUsnd_rv_state_simd@@IPEIAM2222@Z(params, state, count, inLF, inRF, inLS, inRS, newPan);
}

/*
==============
SND_RvDelayInit
==============
*/
void SND_RvDelayInit(snd_rv_state_simd *state, unsigned int values)
{
  bool v2; 
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
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
  int v36; 
  int v37; 

  v2 = values == 0;
  v3 = 1439;
  if ( !values )
    v3 = 149;
  v4 = 1237;
  v36 = v3;
  v5 = 1373;
  v6 = 479;
  if ( !values )
    v5 = 673;
  v7 = 293;
  v37 = v5;
  v8 = 643;
  v9 = 439;
  if ( !values )
    v8 = 277;
  v10 = 1579;
  v27 = v8;
  v11 = 1493;
  v12 = 1297;
  if ( !values )
    v11 = 211;
  v13 = 997;
  v28 = v11;
  v14 = 373;
  v15 = 1637;
  if ( !values )
    v14 = 797;
  v16 = 521;
  v29 = v14;
  v17 = 607;
  v18 = 1051;
  if ( !values )
  {
    v17 = 941;
    v18 = 1439;
  }
  v33 = v17;
  v19 = 113;
  v20 = 773;
  if ( !values )
    v19 = 751;
  v21 = 1201;
  v32 = v19;
  v22 = 1663;
  v23 = 1091;
  if ( v2 )
    v22 = 1949;
  v31 = v22;
  v24 = 1169;
  if ( v2 )
    v24 = 1759;
  v30 = v24;
  if ( v2 )
    v4 = 1619;
  if ( v2 )
    v6 = 1283;
  if ( v2 )
    v7 = 1103;
  if ( v2 )
    v9 = 877;
  if ( v2 )
    v10 = 239;
  if ( v2 )
    v12 = 613;
  if ( v2 )
    v13 = 499;
  if ( v2 )
    v15 = 173;
  if ( v2 )
    v16 = 1009;
  if ( v2 )
    v20 = 349;
  if ( v2 )
    v21 = 751;
  if ( !values )
    v23 = 577;
  v25 = 911;
  if ( !values )
    v25 = 421;
  v26 = 587;
  if ( !values )
    v26 = 941;
  state->earlyReflectionDelayBase[0][0] = v26;
  state->earlyReflectionDelayBase[0][1] = v36;
  state->earlyReflectionDelayBase[0][2] = v37;
  state->earlyReflectionDelayBase[0][3] = v27;
  state->earlyReflectionDelayBase[1][0] = v28;
  state->earlyReflectionDelayBase[1][1] = v29;
  state->earlyReflectionDelayBase[1][2] = v25;
  state->earlyReflectionDelayBase[1][3] = v23;
  state->earlyReflectionDelayBase[2][0] = v21;
  state->earlyReflectionDelayBase[2][1] = v20;
  state->earlyReflectionDelayBase[2][2] = v16;
  state->earlyReflectionDelayBase[2][3] = v15;
  state->earlyReflectionDelayBase[3][0] = v13;
  state->earlyReflectionDelayBase[3][1] = v12;
  state->earlyReflectionDelayBase[3][2] = v10;
  state->earlyReflectionDelayBase[3][3] = v9;
  state->lateReflectionDelayBase[0][0] = v7;
  state->lateReflectionDelayBase[0][1] = v6;
  *(_QWORD *)&state->lateReflectionDelayBase[0][2] = 0i64;
  state->lateReflectionDelayBase[1][0] = v18;
  state->lateReflectionDelayBase[1][1] = v4;
  *(_QWORD *)&state->lateReflectionDelayBase[1][2] = 0i64;
  *(_QWORD *)&state->lateReflectionDelayBase[2][0] = 0i64;
  state->lateReflectionDelayBase[2][2] = v30;
  state->lateReflectionDelayBase[2][3] = v31;
  *(_QWORD *)&state->lateReflectionDelayBase[3][0] = 0i64;
  state->lateReflectionDelayBase[3][2] = v32;
  state->lateReflectionDelayBase[3][3] = v33;
}

/*
==============
SND_RvFrame
==============
*/
void SND_RvFrame(snd_rv_params *params, snd_rv_state_simd *state, unsigned int count, float *inLF, float *inRF, float *inLS, float *inRS, float *newPan)
{
  __int64 v22; 
  __int64 v33; 
  int delayIndex; 
  float *v37; 
  int *v62; 
  __int64 v63; 
  int v64; 
  int v153; 
  int v154; 
  int v155; 
  int v156; 
  char v172; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
    vmovaps xmmword ptr [rax-0D8h], xmm15
  }
  _RSI = state;
  Sys_ProfBeginNamedEvent(0xFF00FFu, "SND_RvFrame");
  SND_RvFrameParam(params, _RSI, newPan);
  _RBX = &_RSI->earlyLpfState;
  v22 = 4i64;
  do
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx-10h]
      vmovss  [rsp+258h+var_228], xmm0
    }
    if ( (v153 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\com_snd_radverb.cpp", 453, ASSERT_TYPE_ASSERT, "(!IS_NAN( ((reinterpret_cast< float* >(&(state->inputLpfState)))[(k)]) ))", (const char *)&queryFormat, "!IS_NAN( ((reinterpret_cast< float* >(&(state->inputLpfState)))[(k)]) )") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vmovss  [rsp+258h+var_228], xmm0
    }
    if ( (v154 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\com_snd_radverb.cpp", 454, ASSERT_TYPE_ASSERT, "(!IS_NAN( ((reinterpret_cast< float* >(&(state->earlyLpfState)))[(k)]) ))", (const char *)&queryFormat, "!IS_NAN( ((reinterpret_cast< float* >(&(state->earlyLpfState)))[(k)]) )") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+10h]
      vmovss  [rsp+258h+var_228], xmm0
    }
    if ( (v155 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\com_snd_radverb.cpp", 455, ASSERT_TYPE_ASSERT, "(!IS_NAN( ((reinterpret_cast< float* >(&(state->lateLpfState)))[(k)]) ))", (const char *)&queryFormat, "!IS_NAN( ((reinterpret_cast< float* >(&(state->lateLpfState)))[(k)]) )") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+20h]
      vmovss  [rsp+258h+var_228], xmm0
    }
    if ( (v156 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\com_snd_radverb.cpp", 456, ASSERT_TYPE_ASSERT, "(!IS_NAN( ((reinterpret_cast< float* >(&(state->dampLpfState)))[(k)]) ))", (const char *)&queryFormat, "!IS_NAN( ((reinterpret_cast< float* >(&(state->dampLpfState)))[(k)]) )") )
      __debugbreak();
    _RBX = (float4 *)((char *)_RBX + 4);
    --v22;
  }
  while ( v22 );
  __asm
  {
    vmovups xmm2, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vbroadcastss xmm6, dword ptr [rsi+16Ch]
    vbroadcastss xmm7, dword ptr [rsi+168h]
    vbroadcastss xmm8, dword ptr [rsi+164h]
    vbroadcastss xmm9, dword ptr [rsi+170h]
    vmovups xmm10, cs:__xmm@3f800000000000003f80000000000000
  }
  v33 = count;
  _R11 = _RSI->delayLine;
  delayIndex = _RSI->delayIndex;
  _R14 = inRF;
  v37 = inLF;
  __asm
  {
    vbroadcastss xmm11, dword ptr [rsi+178h]
    vbroadcastss xmm12, dword ptr [rsi+154h]
    vbroadcastss xmm13, dword ptr [rsi+160h]
    vbroadcastss xmm14, dword ptr [rsi+15Ch]
    vmovups xmm15, xmmword ptr [rsi+130h]
    vsubps  xmm0, xmm2, xmm6
    vmovups [rsp+258h+var_198], xmm0
    vsubps  xmm0, xmm2, xmm7
    vmovups [rsp+258h+var_188], xmm0
    vbroadcastss xmm0, dword ptr [rsi+14Ch]
    vsubps  xmm1, xmm2, xmm8
    vmulps  xmm0, xmm1, xmm0
    vmovups [rsp+258h+var_1B8], xmm0
    vbroadcastss xmm0, dword ptr [rsi+150h]
    vsubps  xmm1, xmm2, xmm9
    vmulps  xmm0, xmm1, xmm0
    vmovups xmm1, xmmword ptr [rsi+120h]
    vmovups [rsp+258h+var_1A8], xmm0
    vmovss  xmm0, dword ptr [rsi+18Ch]
    vinsertps xmm10, xmm10, xmm0, 0
    vinsertps xmm10, xmm10, xmm0, 20h ; ' '
    vmovups xmm0, xmmword ptr [rsi+110h]
    vmovups [rsp+258h+var_208], xmm0
    vmovups xmm0, xmmword ptr [rsi+100h]
    vmovups [rsp+258h+var_1D8], xmm0
    vmovups [rsp+258h+var_1C8], xmm1
  }
  if ( count )
  {
    __asm
    {
      vmovups xmm1, xmmword ptr [rsi]
      vmovups xmm3, xmmword ptr [rsi+10h]
      vmovups xmm5, xmmword ptr [rsi+20h]
      vmovups [rsp+258h+var_1E8], xmm1
      vmovups [rsp+258h+var_1F8], xmm3
      vmovups [rsp+258h+var_178], xmm5
    }
    _R13 = (char *)v37 - (char *)inRF;
    do
    {
      _RBX = 0i64;
      v62 = &_RSI->earlyReflectionDelays[0][2];
      v63 = 4i64;
      do
      {
        _RBX += 16i64;
        v64 = delayIndex - *(v62 - 2);
        v62 += 4;
        _RAX = v64 & 0x7FFF;
        __asm
        {
          vmovss  xmm0, dword ptr [r11+rax*4]
          vinsertps xmm0, xmm0, dword ptr [r11+rcx*4+20000h], 10h
          vinsertps xmm0, xmm0, dword ptr [r11+rdx*4+40000h], 20h ; ' '
        }
        _RAX = (delayIndex - v62[26]) & 0x7FFF;
        __asm
        {
          vinsertps xmm0, xmm0, dword ptr [r11+r8*4+60000h], 30h ; '0'
          vmovups [rsp+rbx+258h+var_178], xmm0
          vmovss  xmm0, dword ptr [r11+rax*4]
          vinsertps xmm0, xmm0, dword ptr [r11+rcx*4+20000h], 10h
          vinsertps xmm0, xmm0, dword ptr [r11+rdx*4+40000h], 20h ; ' '
          vinsertps xmm0, xmm0, dword ptr [r11+r8*4+60000h], 30h ; '0'
          vmovups [rsp+rbx+258h+var_138], xmm0
        }
        --v63;
      }
      while ( v63 );
      __asm
      {
        vmulps  xmm1, xmm1, [rsp+258h+var_168]
        vmovups xmm0, [rsp+258h+var_138]
      }
      _RDX = (char *)inRS - (char *)inRF;
      _RCX = (char *)inLS - (char *)inRF;
      __asm
      {
        vhaddps xmm2, xmm1, xmm1
        vmulps  xmm1, xmm3, [rsp+258h+var_158]
        vhaddps xmm4, xmm1, xmm1
        vmulps  xmm1, xmm5, [rsp+258h+var_148]
        vhaddps xmm3, xmm1, xmm1
        vmulps  xmm1, xmm0, xmmword ptr [rsi+30h]
        vhaddps xmm5, xmm1, xmm1
        vhaddps xmm2, xmm2, xmm2
        vhaddps xmm0, xmm4, xmm4
        vshufps xmm4, xmm2, xmm0, 0
        vhaddps xmm3, xmm3, xmm3
        vhaddps xmm1, xmm5, xmm5
        vshufps xmm0, xmm3, xmm1, 0
        vmovups xmm1, [rsp+258h+var_128]
        vshufps xmm2, xmm4, xmm0, 88h ; 'ˆ'
        vmulps  xmm4, xmm2, [rsp+258h+var_1B8]
        vmulps  xmm0, xmm8, [rsp+258h+var_208]
        vaddps  xmm0, xmm0, xmm4
        vmovups [rsp+258h+var_208], xmm0
        vmulps  xmm0, xmm1, xmmword ptr [rsi+80h]
        vhaddps xmm2, xmm0, xmm0
        vmovups xmm0, [rsp+258h+var_118]
        vmulps  xmm1, xmm0, xmmword ptr [rsi+90h]
        vmovups xmm0, xmmword ptr [rsi+0A0h]
        vmulps  xmm0, xmm0, [rsp+258h+var_108]
        vhaddps xmm3, xmm0, xmm0
        vmovups xmm0, xmmword ptr [rsi+0B0h]
        vhaddps xmm4, xmm1, xmm1
        vmulps  xmm1, xmm0, [rsp+258h+var_F8]
        vhaddps xmm5, xmm1, xmm1
        vhaddps xmm2, xmm2, xmm2
      }
      _RAX = delayIndex;
      __asm
      {
        vhaddps xmm0, xmm4, xmm4
        vshufps xmm4, xmm2, xmm0, 0
        vhaddps xmm1, xmm5, xmm5
        vhaddps xmm3, xmm3, xmm3
        vshufps xmm0, xmm3, xmm1, 0
        vshufps xmm2, xmm4, xmm0, 88h ; 'ˆ'
        vmulps  xmm4, xmm2, [rsp+258h+var_1A8]
        vmulps  xmm0, xmm15, xmm9
        vaddps  xmm15, xmm0, xmm4
        vshufps xmm0, xmm15, xmm15, 5Bh ; '['
        vmulps  xmm0, xmm0, cs:__xmm@3f800000bf800000bf8000003f800000
        vshufps xmm1, xmm15, xmm15, 0Eh
        vaddps  xmm1, xmm0, xmm1
        vmulps  xmm2, xmm1, cs:__xmm@3f3504f33f3504f33f3504f33f3504f3
        vmovss  xmm0, dword ptr [r14+r13]
        vinsertps xmm0, xmm0, dword ptr [rdx+r14], 10h
        vinsertps xmm0, xmm0, dword ptr [r14], 20h ; ' '
        vinsertps xmm0, xmm0, dword ptr [rcx+r14], 30h ; '0'
        vmulps  xmm1, xmm0, [rsp+258h+var_198]
        vmulps  xmm0, xmm6, [rsp+258h+var_1D8]
        vaddps  xmm3, xmm0, xmm1
        vmulps  xmm1, xmm2, [rsp+258h+var_188]
        vmulps  xmm0, xmm7, [rsp+258h+var_1C8]
        vaddps  xmm5, xmm2, xmm3
        vaddps  xmm0, xmm0, xmm1
        vmulps  xmm1, xmm12, [rsp+258h+var_208]
        vmovups [rsp+258h+var_1C8], xmm0
        vmulps  xmm0, xmm0, xmm14
        vmulps  xmm2, xmm3, xmm11
        vmovups [rsp+258h+var_1D8], xmm3
        vaddps  xmm3, xmm0, xmm2
        vaddps  xmm0, xmm1, xmm3
        vmulps  xmm2, xmm0, xmm10
        vmulps  xmm4, xmm2, xmm13
      }
      delayIndex = ((_WORD)delayIndex + 1) & 0x7FFF;
      __asm
      {
        vmovss  dword ptr [rcx+r14], xmm4
        vextractps dword ptr [r14], xmm4, 1
        vextractps dword ptr [rdx+r14], xmm4, 2
        vextractps dword ptr [r14+r13], xmm4, 3
      }
      ++_R14;
      __asm
      {
        vmovss  dword ptr [r11+rax*4], xmm5
        vextractps dword ptr [r11+rax*4+20000h], xmm5, 1
        vextractps dword ptr [r11+rax*4+40000h], xmm5, 2
        vextractps dword ptr [r11+rax*4+60000h], xmm5, 3
        vmovups xmm1, [rsp+258h+var_1E8]
        vmovups xmm3, [rsp+258h+var_1F8]
        vmovups xmm5, [rsp+258h+var_178]
      }
      --v33;
    }
    while ( v33 );
    __asm
    {
      vmovups xmm0, [rsp+258h+var_1D8]
      vmovups xmm1, [rsp+258h+var_1C8]
    }
  }
  __asm
  {
    vmovups xmmword ptr [rsi+100h], xmm0
    vmovups xmm0, [rsp+258h+var_208]
    vmovups xmmword ptr [rsi+110h], xmm0
  }
  _RSI->delayIndex = delayIndex;
  __asm
  {
    vmovups xmmword ptr [rsi+120h], xmm1
    vmovups xmmword ptr [rsi+130h], xmm15
  }
  Sys_ProfEndNamedEvent();
  _R11 = &v172;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
SND_RvFrameParam
==============
*/
void SND_RvFrameParam(snd_rv_params *params, snd_rv_state_simd *state, float *panMatrix)
{
  unsigned int fadeTimeStamp; 
  bool v62; 
  bool v63; 
  __int64 v72; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx+0Ch]; value
    vmovaps [rsp+58h+var_18], xmm6
  }
  _RBX = panMatrix;
  __asm { vmovaps [rsp+58h+var_28], xmm8 }
  _RDI = state;
  __asm { vmovaps [rsp+58h+var_38], xmm9 }
  _RSI = params;
  __asm
  {
    vmovss  xmm9, cs:__real@3f800000
    vmovaps xmm2, xmm9; max
    vxorps  xmm1, xmm1, xmm1; min
    vxorps  xmm8, xmm8, xmm8
  }
  *(double *)&_XMM0 = SND_RvValidateRange(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rsi+0Ch], xmm0
    vmovss  xmm0, dword ptr [rsi+10h]; value
    vmovaps xmm2, xmm9; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = SND_RvValidateRange(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm6, cs:__real@40800000
    vmovss  dword ptr [rsi+10h], xmm0
    vmovss  xmm0, dword ptr [rsi+14h]; value
    vmovaps xmm2, xmm6; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = SND_RvValidateRange(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rsi+14h], xmm0
    vmovss  xmm0, dword ptr [rsi+18h]; value
    vmovaps xmm2, xmm6; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = SND_RvValidateRange(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rsi+18h], xmm0
    vmovss  xmm0, dword ptr [rsi+1Ch]; value
    vmovaps xmm2, xmm6; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = SND_RvValidateRange(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rsi+1Ch], xmm0
    vmovss  xmm0, dword ptr [rsi+20h]; value
    vmovaps xmm2, xmm6; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = SND_RvValidateRange(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rsi+20h], xmm0
    vmovss  xmm0, dword ptr [rsi+24h]; value
    vmovaps xmm2, xmm9; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = SND_RvValidateRange(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rsi+24h], xmm0
    vmovss  xmm0, dword ptr [rsi+28h]; value
    vmovaps xmm2, xmm9; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = SND_RvValidateRange(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rsi+28h], xmm0
    vmovss  xmm0, dword ptr [rsi+2Ch]; value
    vmovaps xmm2, xmm9; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = SND_RvValidateRange(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rsi+2Ch], xmm0
    vmovss  xmm0, dword ptr [rsi+30h]; value
    vmovaps xmm2, xmm9; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = SND_RvValidateRange(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rsi+30h], xmm0
    vmovss  xmm0, dword ptr [rsi+34h]; value
    vmovaps xmm2, xmm9; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = SND_RvValidateRange(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rsi+34h], xmm0
    vmovss  xmm0, dword ptr [rsi+38h]; value
    vmovaps xmm2, xmm9; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = SND_RvValidateRange(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm2, cs:__real@41800000; max
    vmovss  xmm1, cs:__real@3dcccccd; min
    vmovss  dword ptr [rsi+38h], xmm0
    vmovss  xmm0, dword ptr [rsi+3Ch]; value
  }
  *(double *)&_XMM0 = SND_RvValidateRange(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm2, cs:__real@41800000; max
    vmovss  xmm1, cs:__real@3dcccccd; min
    vmovss  dword ptr [rsi+3Ch], xmm0
    vmovss  xmm0, dword ptr [rsi+40h]; value
  }
  *(double *)&_XMM0 = SND_RvValidateRange(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rsi+40h], xmm0
    vmovaps xmm2, xmm9; max
    vxorps  xmm1, xmm1, xmm1; min
    vmovss  xmm0, dword ptr [rsi+44h]; value
  }
  *(double *)&_XMM0 = SND_RvValidateRange(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rsi+44h], xmm0
    vmovss  xmm0, dword ptr [rsi+4Ch]; value
    vmovaps xmm2, xmm9; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = SND_RvValidateRange(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  fadeTimeStamp = _RSI->fadeTimeStamp;
  __asm { vmovss  dword ptr [rsi+4Ch], xmm0 }
  v62 = _RDI->fadeTimeStamp < fadeTimeStamp;
  v63 = _RDI->fadeTimeStamp == fadeTimeStamp;
  if ( _RDI->fadeTimeStamp != fadeTimeStamp )
  {
    _RDI->fadeTimeStamp = fadeTimeStamp;
    v62 = 0;
    v63 = !_RSI->fade;
    if ( _RSI->fade )
    {
      __asm
      {
        vmovss  xmm0, cs:__real@c5000000
        vdivss  xmm1, xmm0, dword ptr [rsi]
        vmovss  dword ptr [rdi+218h], xmm1
      }
      _RDI->isCurrent = 0;
    }
    else
    {
      memset_0(_RDI->prevPan, 0, sizeof(_RDI->prevPan));
      _RDI->fadeVol = 1.0;
      _RDI->fadeRate = 0.0;
      SND_UpdateRvState(_RSI, _RDI);
      _RDI->isCurrent = 1;
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+218h]
    vucomiss xmm0, xmm8
  }
  if ( !v63 )
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rdi+42Ch]
      vucomiss xmm1, xmm8
    }
    if ( v63 )
    {
      SND_UpdateRvState(_RSI, _RDI);
      __asm
      {
        vmovss  xmm1, dword ptr [rdi+42Ch]
        vmovss  xmm0, dword ptr [rdi+218h]
      }
      _RDI->isCurrent = 1;
    }
    __asm
    {
      vaddss  xmm1, xmm0, xmm1
      vcomiss xmm1, xmm8
      vmovss  dword ptr [rdi+42Ch], xmm1
    }
    if ( v62 )
    {
      __asm
      {
        vxorps  xmm0, xmm0, cs:__xmm@80000000800000008000000080000000
        vmovss  dword ptr [rdi+218h], xmm0
      }
      _RDI->fadeVol = 0.0;
    }
    else
    {
      __asm { vcomiss xmm1, xmm9 }
      if ( !v62 )
      {
        _RDI->fadeVol = 1.0;
        _RDI->fadeRate = 0.0;
      }
    }
  }
  if ( _RDI->isCurrent )
  {
    _RAX = _RDI->newPan;
    v72 = 2i64;
    do
    {
      _RAX += 32;
      __asm { vmovups xmm0, xmmword ptr [rbx] }
      _RBX += 32;
      __asm
      {
        vmovups xmmword ptr [rax-80h], xmm0
        vmovups xmm1, xmmword ptr [rbx-70h]
        vmovups xmmword ptr [rax-70h], xmm1
        vmovups xmm0, xmmword ptr [rbx-60h]
        vmovups xmmword ptr [rax-60h], xmm0
        vmovups xmm1, xmmword ptr [rbx-50h]
        vmovups xmmword ptr [rax-50h], xmm1
        vmovups xmm0, xmmword ptr [rbx-40h]
        vmovups xmmword ptr [rax-40h], xmm0
        vmovups xmm1, xmmword ptr [rbx-30h]
        vmovups xmmword ptr [rax-30h], xmm1
        vmovups xmm0, xmmword ptr [rbx-20h]
        vmovups xmmword ptr [rax-20h], xmm0
        vmovups xmm1, xmmword ptr [rbx-10h]
        vmovups xmmword ptr [rax-10h], xmm1
      }
      --v72;
    }
    while ( v72 );
  }
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm8, [rsp+58h+var_28]
    vmovaps xmm9, [rsp+58h+var_38]
  }
}

/*
==============
SND_RvInit
==============
*/
void SND_RvInit(snd_rv_state_simd *state, float *delayLine)
{
  if ( ((unsigned __int8)state & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\com_snd_radverb.cpp", 421, ASSERT_TYPE_ASSERT, "(reinterpret_cast< uintptr_t >( state ) % 16 == 0)", (const char *)&queryFormat, "reinterpret_cast< uintptr_t >( state ) % 16 == 0") )
    __debugbreak();
  memset_0(state, 0, 0x140ui64);
  memset_0(&state->params.fade, 0, 0xDCui64);
  memset_0(&state->isCurrent, 0, 0x258ui64);
  state->delayLine = delayLine;
  memset_0(delayLine, 0, 0x80000ui64);
  state->params.fade = 0;
  state->params.earlySize = 1.0;
  state->params.lateSize = 1.0;
  *(_QWORD *)&state->params.diffusion = 1056964608i64;
  *(_QWORD *)&state->params.wallReflect = 1056964608i64;
  state->params.earlyTime = 0.80000001;
  state->params.lateTime = 0.80000001;
  state->params.earlyGain = 1.0;
  *(_QWORD *)&state->params.earlyLpf = 0i64;
  state->params.lateGain = 1.0;
  state->params.lateGainProx = 1.0;
  state->params.returnGain = 1.0;
  *(_QWORD *)&state->params.inputLpf = 0i64;
  state->params.frameRate = 48000.0;
  state->params.rearLevel = 1.0;
  state->params.fadeTimeStamp = 0;
  SND_UpdateRvState(&state->params, state);
}

/*
==============
SND_RvParamsDefault
==============
*/
void SND_RvParamsDefault(snd_rv_params *params)
{
  params->fade = 0;
  *(_QWORD *)&params->earlyLpf = 0i64;
  *(_QWORD *)&params->inputLpf = 0i64;
  params->fadeTimeStamp = 0;
  params->earlySize = 1.0;
  params->lateSize = 1.0;
  *(_QWORD *)&params->diffusion = 1056964608i64;
  *(_QWORD *)&params->wallReflect = 1056964608i64;
  params->earlyTime = 0.80000001;
  params->lateTime = 0.80000001;
  params->earlyGain = 1.0;
  params->lateGain = 1.0;
  params->lateGainProx = 1.0;
  params->returnGain = 1.0;
  params->frameRate = 48000.0;
  params->rearLevel = 1.0;
}

/*
==============
SND_RvParamsValidate
==============
*/

void __fastcall SND_RvParamsValidate(snd_rv_params *params, double _XMM1_8)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+0Ch]; value
    vmovaps [rsp+48h+var_18], xmm6
  }
  _RBX = params;
  __asm
  {
    vmovaps [rsp+48h+var_28], xmm8
    vmovss  xmm8, cs:__real@3f800000
    vmovaps xmm2, xmm8; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = SND_RvValidateRange(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rbx+0Ch], xmm0
    vmovss  xmm0, dword ptr [rbx+10h]; value
    vmovaps xmm2, xmm8; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = SND_RvValidateRange(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm6, cs:__real@40800000
    vmovss  dword ptr [rbx+10h], xmm0
    vmovss  xmm0, dword ptr [rbx+14h]; value
    vmovaps xmm2, xmm6; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = SND_RvValidateRange(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rbx+14h], xmm0
    vmovss  xmm0, dword ptr [rbx+18h]; value
    vmovaps xmm2, xmm6; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = SND_RvValidateRange(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rbx+18h], xmm0
    vmovss  xmm0, dword ptr [rbx+1Ch]; value
    vmovaps xmm2, xmm6; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = SND_RvValidateRange(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rbx+1Ch], xmm0
    vmovss  xmm0, dword ptr [rbx+20h]; value
    vmovaps xmm2, xmm6; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = SND_RvValidateRange(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rbx+20h], xmm0
    vmovss  xmm0, dword ptr [rbx+24h]; value
    vmovaps xmm2, xmm8; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = SND_RvValidateRange(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rbx+24h], xmm0
    vmovss  xmm0, dword ptr [rbx+28h]; value
    vmovaps xmm2, xmm8; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = SND_RvValidateRange(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rbx+28h], xmm0
    vmovss  xmm0, dword ptr [rbx+2Ch]; value
    vmovaps xmm2, xmm8; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = SND_RvValidateRange(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rbx+2Ch], xmm0
    vmovss  xmm0, dword ptr [rbx+30h]; value
    vmovaps xmm2, xmm8; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = SND_RvValidateRange(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rbx+30h], xmm0
    vmovss  xmm0, dword ptr [rbx+34h]; value
    vmovaps xmm2, xmm8; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = SND_RvValidateRange(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rbx+34h], xmm0
    vmovss  xmm0, dword ptr [rbx+38h]; value
    vmovaps xmm2, xmm8; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = SND_RvValidateRange(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm2, cs:__real@41800000; max
    vmovss  xmm1, cs:__real@3dcccccd; min
    vmovss  dword ptr [rbx+38h], xmm0
    vmovss  xmm0, dword ptr [rbx+3Ch]; value
  }
  *(double *)&_XMM0 = SND_RvValidateRange(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm2, cs:__real@41800000; max
    vmovss  xmm1, cs:__real@3dcccccd; min
    vmovss  dword ptr [rbx+3Ch], xmm0
    vmovss  xmm0, dword ptr [rbx+40h]; value
  }
  *(double *)&_XMM0 = SND_RvValidateRange(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rbx+40h], xmm0
    vmovss  xmm0, dword ptr [rbx+44h]; value
    vmovaps xmm2, xmm8; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = SND_RvValidateRange(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rbx+44h], xmm0
    vmovaps xmm2, xmm8; max
    vmovss  xmm0, dword ptr [rbx+4Ch]; value
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = SND_RvValidateRange(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm6, [rsp+48h+var_18]
    vmovaps xmm8, [rsp+48h+var_28]
    vmovss  dword ptr [rbx+4Ch], xmm0
  }
}

/*
==============
SND_RvValidateRange
==============
*/

double __fastcall SND_RvValidateRange(double value, double min, double max)
{
  bool v9; 
  bool v10; 
  bool v11; 
  bool v13; 
  double v22; 
  double v23; 
  int v27; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovss  [rsp+68h+arg_0], xmm0
    vmovaps [rsp+68h+var_38], xmm8
    vmovaps xmm7, xmm2
    vmovaps xmm8, xmm1
    vmovaps xmm6, xmm0
  }
  v9 = (v27 & 0x7F800000u) < 0x7F800000;
  v10 = (v27 & 0x7F800000u) <= 0x7F800000;
  if ( (v27 & 0x7F800000) == 2139095040 )
  {
    v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\com_snd_radverb.cpp", 145, ASSERT_TYPE_ASSERT, "(!IS_NAN( value ))", (const char *)&queryFormat, "!IS_NAN( value )");
    v9 = 0;
    v10 = !v11;
    if ( v11 )
      __debugbreak();
  }
  __asm { vcomiss xmm6, xmm8 }
  if ( v9 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+68h+var_40], xmm0
    }
    v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\com_snd_radverb.cpp", 146, ASSERT_TYPE_ASSERT, "( ( value >= min ) )", "( value ) = %g", v22);
    v10 = !v13;
    if ( v13 )
      __debugbreak();
  }
  __asm { vcomiss xmm6, xmm7 }
  if ( !v10 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+68h+var_40], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\com_snd_radverb.cpp", 147, ASSERT_TYPE_ASSERT, "( ( value <= max ) )", "( value ) = %g", v23) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm2, xmm7; max
    vmovaps xmm1, xmm8; min
    vmovaps xmm0, xmm6; val
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
    vmovaps xmm8, [rsp+68h+var_38]
  }
  return I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
}

/*
==============
SND_UpdateRvState
==============
*/
void SND_UpdateRvState(snd_rv_params *params, snd_rv_state_simd *state)
{
  char v10; 
  bool v11; 
  bool v13; 
  unsigned int delayMatrix; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  unsigned int v43; 
  int *v72; 
  __int64 v73; 
  __int64 v74; 
  int v88; 
  int v89; 
  int v90; 
  int v91[4]; 
  char v92; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
  }
  _RBP = state;
  _RSI = params;
  Sys_ProfBeginNamedEvent(0xFF00FFu, "SND_UpdateRvState");
  __asm { vmovss  xmm0, cs:__real@447a0000 }
  _RBP->params.frameRate = _RSI->frameRate;
  __asm { vcomiss xmm0, dword ptr [rsi] }
  if ( !v10 )
  {
    v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\com_snd_radverb.cpp", 180, ASSERT_TYPE_ASSERT, "(params->frameRate > 1000.0f)", (const char *)&queryFormat, "params->frameRate > 1000.0f");
    v10 = 0;
    v11 = !v13;
    if ( v13 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, cs:__real@47c35000
    vcomiss xmm0, dword ptr [rsi]
  }
  if ( v10 | v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\com_snd_radverb.cpp", 181, ASSERT_TYPE_ASSERT, "(params->frameRate < 100000.0f)", (const char *)&queryFormat, "params->frameRate < 100000.0f") )
    __debugbreak();
  _RBP->params.earlyTime = _RSI->earlyTime;
  _RBP->params.lateTime = _RSI->lateTime;
  _RBP->params.earlyGain = _RSI->earlyGain;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+18h]
    vmovss  dword ptr [rbp+158h], xmm0
    vmulss  xmm0, xmm0, dword ptr [rsi+1Ch]
    vmovss  dword ptr [rbp+15Ch], xmm0
  }
  _RBP->params.returnGain = _RSI->returnGain;
  _RBP->params.earlyLpf = _RSI->earlyLpf;
  _RBP->params.lateLpf = _RSI->lateLpf;
  _RBP->params.inputLpf = _RSI->inputLpf;
  _RBP->params.dampLpf = _RSI->dampLpf;
  _RBP->params.wallReflect = _RSI->wallReflect;
  _RBP->params.dryGain = _RSI->dryGain;
  _RBP->params.diffusion = _RSI->diffusion;
  _RBP->params.earlySize = _RSI->earlySize;
  _RBP->params.lateSize = _RSI->lateSize;
  _RBP->params.rearLevel = _RSI->rearLevel;
  delayMatrix = _RSI->delayMatrix;
  _RBP->params.delayMatrix = delayMatrix;
  SND_RvDelayInit(_RBP, delayMatrix);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+184h]
    vmulss  xmm0, xmm0, cs:__real@3fc90fdb
  }
  *(double *)&_XMM0 = j___libm_sse2_sincosf_(v21, v20, v22, v23);
  __asm
  {
    vshufps xmm2, xmm0, xmm0, 1
    vxorps  xmm1, xmm2, cs:__xmm@80000000800000008000000080000000
    vmovups xmm6, xmm0
    vxorps  xmm7, xmm7, xmm7
    vxorps  xmm8, xmm8, xmm8
    vxorps  xmm9, xmm9, xmm9
    vxorps  xmm10, xmm10, xmm10
    vmovss  [rsp+0C8h+var_98], xmm2
    vinsertps xmm7, xmm7, xmm2, 0
    vinsertps xmm8, xmm8, xmm6, 0
    vinsertps xmm9, xmm9, xmm1, 20h ; ' '
    vinsertps xmm10, xmm10, xmm6, 20h ; ' '
    vinsertps xmm7, xmm7, xmm6, 10h
    vinsertps xmm8, xmm8, xmm1, 10h
    vinsertps xmm9, xmm9, xmm6, 30h ; '0'
    vinsertps xmm10, xmm10, xmm2, 30h ; '0'
  }
  if ( (v88 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\com_snd_radverb.cpp", 219, ASSERT_TYPE_ASSERT, "(!IS_NAN( da ))", (const char *)&queryFormat, "!IS_NAN( da )") )
    __debugbreak();
  __asm { vmovss  [rsp+0C8h+var_98], xmm6 }
  if ( (v89 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\com_snd_radverb.cpp", 220, ASSERT_TYPE_ASSERT, "(!IS_NAN( db ))", (const char *)&queryFormat, "!IS_NAN( db )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vmovups xmmword ptr [rbp+80h], xmm7
    vmovss  xmm7, cs:__real@3eb504f3
    vmovups xmmword ptr [rbp+90h], xmm8
    vmovss  xmm8, cs:__real@3f3504f3
    vmovups xmmword ptr [rbp+0A0h], xmm9
    vxorps  xmm9, xmm9, xmm9
    vmovups xmmword ptr [rbp+0B0h], xmm10
  }
  v43 = 0;
  _RDI = v91;
  do
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+174h]
      vsubss  xmm2, xmm0, xmm6
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, rax
      vmulss  xmm0, xmm2, xmm1
      vmulss  xmm2, xmm0, xmm7
      vaddss  xmm3, xmm2, xmm8
      vmaxss  xmm0, xmm3, xmm9
      vmovss  [rsp+0C8h+var_98], xmm0
      vmovss  dword ptr [rdi], xmm0
    }
    if ( (v90 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\com_snd_radverb.cpp", 235, ASSERT_TYPE_ASSERT, "(!IS_NAN( coef[i] ))", (const char *)&queryFormat, "!IS_NAN( coef[i] )") )
      __debugbreak();
    ++v43;
    ++_RDI;
  }
  while ( v43 < 4 );
  __asm
  {
    vmovss  xmm6, [rsp+0C8h+var_90]
    vmovss  xmm4, [rsp+0C8h+var_84]
    vmovss  xmm2, [rsp+0C8h+var_88]
    vmovss  xmm0, [rsp+0C8h+var_8C]
    vmovaps xmm7, xmm6
    vinsertps xmm7, xmm7, xmm4, 10h
    vmovaps xmm5, xmm4
    vinsertps xmm5, xmm5, xmm6, 10h
    vmovaps xmm3, xmm2
    vinsertps xmm3, xmm3, xmm0, 10h
    vmovaps xmm1, xmm0
    vinsertps xmm1, xmm1, xmm2, 10h
    vinsertps xmm7, xmm7, xmm2, 20h ; ' '
    vinsertps xmm5, xmm5, xmm0, 20h ; ' '
    vinsertps xmm3, xmm3, xmm6, 20h ; ' '
    vinsertps xmm1, xmm1, xmm4, 20h ; ' '
    vinsertps xmm7, xmm7, xmm0, 30h ; '0'
    vinsertps xmm5, xmm5, xmm2, 30h ; '0'
    vinsertps xmm3, xmm3, xmm4, 30h ; '0'
    vinsertps xmm1, xmm1, xmm6, 30h ; '0'
    vmovups xmmword ptr [rbp+0], xmm7
    vmovups xmmword ptr [rbp+10h], xmm5
    vmovups xmmword ptr [rbp+20h], xmm3
    vmovups xmmword ptr [rbp+30h], xmm1
  }
  v72 = _RBP->earlyReflectionDelays[0];
  v73 = 4i64;
  do
  {
    v74 = 4i64;
    do
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rbx+150h]
        vmulss  xmm1, xmm0, dword ptr [rsi+3Ch]
        vcvttss2si ecx, xmm1
      }
      *v72 = _ECX;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rbx+190h]
        vmulss  xmm1, xmm0, dword ptr [rsi+40h]
        vcvttss2si eax, xmm1
      }
      v72[32] = _EAX;
      if ( _ECX >= 0x8000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\com_snd_radverb.cpp", 256, ASSERT_TYPE_ASSERT, "(state->earlyReflectionDelays[i][j] < ((2048)*(16)))", (const char *)&queryFormat, "state->earlyReflectionDelays[i][j] < SND_RV_DELAY_FRAME_COUNT") )
        __debugbreak();
      if ( v72[32] >= 0x8000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\com_snd_radverb.cpp", 257, ASSERT_TYPE_ASSERT, "(state->lateReflectionDelays[i][j] < ((2048)*(16)))", (const char *)&queryFormat, "state->lateReflectionDelays[i][j] < SND_RV_DELAY_FRAME_COUNT") )
        __debugbreak();
      ++v72;
      --v74;
    }
    while ( v74 );
    --v73;
  }
  while ( v73 );
  Sys_ProfEndNamedEvent();
  _R11 = &v92;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
}

