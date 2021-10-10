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
  __m128 *p_v; 
  __int64 v11; 
  __int64 v17; 
  int delayIndex; 
  float *v21; 
  __m128 v; 
  __m128 v29; 
  __m128 v32; 
  __m128 v33; 
  __m128 v34; 
  __m128 v35; 
  __int64 v37; 
  int *v38; 
  __int64 v39; 
  int v40; 
  __int64 v44; 
  __m128 v76; 
  __m128 v81; 
  __m128 v85; 
  __m128 v86; 
  __m128 v88; 
  __m128 v89; 
  __m128 v90; 
  __m128 v91; 
  __m128 v92; 
  __m128 v93; 
  __m128 v94; 
  __int128 v95[4]; 
  __m128 v96[5]; 

  _RSI = state;
  Sys_ProfBeginNamedEvent(0xFF00FFu, "SND_RvFrame");
  SND_RvFrameParam(params, _RSI, newPan);
  p_v = &_RSI->earlyLpfState.v;
  v11 = 4i64;
  do
  {
    if ( (p_v[-1].m128_i32[0] & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\com_snd_radverb.cpp", 453, ASSERT_TYPE_ASSERT, "(!IS_NAN( ((reinterpret_cast< float* >(&(state->inputLpfState)))[(k)]) ))", (const char *)&queryFormat, "!IS_NAN( ((reinterpret_cast< float* >(&(state->inputLpfState)))[(k)]) )") )
      __debugbreak();
    if ( (p_v->m128_i32[0] & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\com_snd_radverb.cpp", 454, ASSERT_TYPE_ASSERT, "(!IS_NAN( ((reinterpret_cast< float* >(&(state->earlyLpfState)))[(k)]) ))", (const char *)&queryFormat, "!IS_NAN( ((reinterpret_cast< float* >(&(state->earlyLpfState)))[(k)]) )") )
      __debugbreak();
    if ( (p_v[1].m128_i32[0] & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\com_snd_radverb.cpp", 455, ASSERT_TYPE_ASSERT, "(!IS_NAN( ((reinterpret_cast< float* >(&(state->lateLpfState)))[(k)]) ))", (const char *)&queryFormat, "!IS_NAN( ((reinterpret_cast< float* >(&(state->lateLpfState)))[(k)]) )") )
      __debugbreak();
    if ( (p_v[2].m128_i32[0] & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\com_snd_radverb.cpp", 456, ASSERT_TYPE_ASSERT, "(!IS_NAN( ((reinterpret_cast< float* >(&(state->dampLpfState)))[(k)]) ))", (const char *)&queryFormat, "!IS_NAN( ((reinterpret_cast< float* >(&(state->dampLpfState)))[(k)]) )") )
      __debugbreak();
    p_v = (__m128 *)((char *)p_v + 4);
    --v11;
  }
  while ( v11 );
  __asm
  {
    vbroadcastss xmm6, dword ptr [rsi+16Ch]
    vbroadcastss xmm7, dword ptr [rsi+168h]
    vbroadcastss xmm8, dword ptr [rsi+164h]
    vbroadcastss xmm9, dword ptr [rsi+170h]
  }
  _XMM10 = _xmm;
  v17 = count;
  _R11 = _RSI->delayLine;
  delayIndex = _RSI->delayIndex;
  _R14 = inRF;
  v21 = inLF;
  __asm
  {
    vbroadcastss xmm11, dword ptr [rsi+178h]
    vbroadcastss xmm12, dword ptr [rsi+154h]
    vbroadcastss xmm13, dword ptr [rsi+160h]
    vbroadcastss xmm14, dword ptr [rsi+15Ch]
  }
  v = _RSI->dampLpfState.v;
  v93 = _mm128_sub_ps(g_one.v, _XMM6);
  v94 = _mm128_sub_ps(g_one.v, _XMM7);
  __asm { vbroadcastss xmm0, dword ptr [rsi+14Ch] }
  v91 = _mm128_mul_ps(_mm128_sub_ps(g_one.v, _XMM8), _XMM0);
  __asm { vbroadcastss xmm0, dword ptr [rsi+150h] }
  v29 = _RSI->lateLpfState.v;
  v92 = _mm128_mul_ps(_mm128_sub_ps(g_one.v, _XMM9), _XMM0);
  __asm
  {
    vinsertps xmm10, xmm10, xmm0, 0
    vinsertps xmm10, xmm10, xmm0, 20h ; ' '
  }
  v85 = _RSI->earlyLpfState.v;
  v32 = _RSI->inputLpfState.v;
  v89 = v32;
  v90 = v29;
  if ( count )
  {
    v33 = _RSI->earlyReflectionCoefs[0].v;
    v34 = _RSI->earlyReflectionCoefs[1].v;
    v35 = _RSI->earlyReflectionCoefs[2].v;
    v88 = _RSI->earlyReflectionCoefs[0].v;
    v86 = v34;
    v95[0] = (__int128)v35;
    _R13 = (char *)v21 - (char *)inRF;
    do
    {
      v37 = 0i64;
      v38 = &_RSI->earlyReflectionDelays[0][2];
      v39 = 4i64;
      do
      {
        ++v37;
        v40 = delayIndex - *(v38 - 2);
        v38 += 4;
        _XMM0 = LODWORD(_R11[v40 & 0x7FFF]);
        __asm
        {
          vinsertps xmm0, xmm0, dword ptr [r11+rcx*4+20000h], 10h
          vinsertps xmm0, xmm0, dword ptr [r11+rdx*4+40000h], 20h ; ' '
        }
        v44 = (delayIndex - v38[26]) & 0x7FFF;
        __asm { vinsertps xmm0, xmm0, dword ptr [r11+r8*4+60000h], 30h ; '0' }
        v95[v37] = _XMM0;
        _XMM0 = LODWORD(_R11[v44]);
        __asm
        {
          vinsertps xmm0, xmm0, dword ptr [r11+rcx*4+20000h], 10h
          vinsertps xmm0, xmm0, dword ptr [r11+rdx*4+40000h], 20h ; ' '
          vinsertps xmm0, xmm0, dword ptr [r11+r8*4+60000h], 30h ; '0'
        }
        v96[v37] = _XMM0;
        --v39;
      }
      while ( v39 );
      _XMM1 = _mm128_mul_ps(v33, (__m128)v95[1]);
      _RDX = (char *)inRS - (char *)inRF;
      __asm { vhaddps xmm2, xmm1, xmm1 }
      _XMM1 = _mm128_mul_ps(v34, (__m128)v95[2]);
      __asm { vhaddps xmm4, xmm1, xmm1 }
      _XMM1 = _mm128_mul_ps(v35, (__m128)v95[3]);
      __asm { vhaddps xmm3, xmm1, xmm1 }
      _XMM1 = _mm128_mul_ps(v96[0], _RSI->earlyReflectionCoefs[3].v);
      __asm
      {
        vhaddps xmm5, xmm1, xmm1
        vhaddps xmm2, xmm2, xmm2
        vhaddps xmm0, xmm4, xmm4
        vhaddps xmm3, xmm3, xmm3
        vhaddps xmm1, xmm5, xmm5
      }
      v85 = _mm128_add_ps(_mm128_mul_ps(_XMM8, v85), _mm128_mul_ps(_mm_shuffle_ps(_mm_shuffle_ps(_XMM2, _XMM0, 0), _mm_shuffle_ps(_XMM3, _XMM1, 0), 136), v91));
      _XMM0 = _mm128_mul_ps(v96[1], _RSI->lateReflectionCoefs[0].v);
      __asm { vhaddps xmm2, xmm0, xmm0 }
      _XMM1 = _mm128_mul_ps(v96[2], _RSI->lateReflectionCoefs[1].v);
      _XMM0 = _mm128_mul_ps(_RSI->lateReflectionCoefs[2].v, v96[3]);
      __asm
      {
        vhaddps xmm3, xmm0, xmm0
        vhaddps xmm4, xmm1, xmm1
      }
      _XMM1 = _mm128_mul_ps(_RSI->lateReflectionCoefs[3].v, v96[4]);
      __asm
      {
        vhaddps xmm5, xmm1, xmm1
        vhaddps xmm2, xmm2, xmm2
      }
      _RAX = delayIndex;
      __asm
      {
        vhaddps xmm0, xmm4, xmm4
        vhaddps xmm1, xmm5, xmm5
        vhaddps xmm3, xmm3, xmm3
      }
      v = _mm128_add_ps(_mm128_mul_ps(v, _XMM9), _mm128_mul_ps(_mm_shuffle_ps(_mm_shuffle_ps(_XMM2, _XMM0, 0), _mm_shuffle_ps(_XMM3, _XMM1, 0), 136), v92));
      v76 = _mm128_mul_ps(_mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v, v, 91), (__m128)_xmm), _mm_shuffle_ps(v, v, 14)), (__m128)_xmm);
      _XMM0 = *(unsigned int *)((char *)_R14 + _R13);
      __asm
      {
        vinsertps xmm0, xmm0, dword ptr [rdx+r14], 10h
        vinsertps xmm0, xmm0, dword ptr [r14], 20h ; ' '
        vinsertps xmm0, xmm0, dword ptr [rcx+r14], 30h ; '0'
      }
      v81 = _mm128_add_ps(_mm128_mul_ps(_XMM6, v89), _mm128_mul_ps(_XMM0, v93));
      _XMM5 = _mm128_add_ps(v76, v81);
      v90 = _mm128_add_ps(_mm128_mul_ps(_XMM7, v90), _mm128_mul_ps(v76, v94));
      v89 = v81;
      _XMM4 = _mm128_mul_ps(_mm128_mul_ps(_mm128_add_ps(_mm128_mul_ps(_XMM12, v85), _mm128_add_ps(_mm128_mul_ps(v90, _XMM14), _mm128_mul_ps(v81, _XMM11))), _XMM10), _XMM13);
      delayIndex = ((_WORD)delayIndex + 1) & 0x7FFF;
      *(float *)((char *)_R14 + (char *)inLS - (char *)inRF) = _XMM4.m128_f32[0];
      __asm
      {
        vextractps dword ptr [r14], xmm4, 1
        vextractps dword ptr [rdx+r14], xmm4, 2
        vextractps dword ptr [r14+r13], xmm4, 3
      }
      ++_R14;
      _R11[_RAX] = _XMM5.m128_f32[0];
      __asm
      {
        vextractps dword ptr [r11+rax*4+20000h], xmm5, 1
        vextractps dword ptr [r11+rax*4+40000h], xmm5, 2
        vextractps dword ptr [r11+rax*4+60000h], xmm5, 3
      }
      v33 = v88;
      v34 = v86;
      v35 = (__m128)v95[0];
      --v17;
    }
    while ( v17 );
    v32 = v89;
    v29 = v90;
  }
  _RSI->inputLpfState.v = v32;
  _RSI->earlyLpfState.v = v85;
  _RSI->delayIndex = delayIndex;
  _RSI->lateLpfState.v = v29;
  _RSI->dampLpfState.v = v;
  Sys_ProfEndNamedEvent();
}

/*
==============
SND_RvFrameParam
==============
*/
void SND_RvFrameParam(snd_rv_params *params, snd_rv_state_simd *state, float *panMatrix)
{
  double v6; 
  double v7; 
  double v8; 
  double v9; 
  double v10; 
  double v11; 
  double v12; 
  double v13; 
  double v14; 
  double v15; 
  double v16; 
  double v17; 
  double v18; 
  double v19; 
  double v20; 
  double v21; 
  int fadeTimeStamp; 
  float fadeRate; 
  float fadeVol; 
  float *newPan; 
  __int64 v26; 
  __int128 v27; 

  v6 = SND_RvValidateRange(params->earlyTime, 0.0, 1.0);
  params->earlyTime = *(float *)&v6;
  v7 = SND_RvValidateRange(params->lateTime, 0.0, 1.0);
  params->lateTime = *(float *)&v7;
  v8 = SND_RvValidateRange(params->earlyGain, 0.0, 4.0);
  params->earlyGain = *(float *)&v8;
  v9 = SND_RvValidateRange(params->lateGain, 0.0, 4.0);
  params->lateGain = *(float *)&v9;
  v10 = SND_RvValidateRange(params->lateGainProx, 0.0, 4.0);
  params->lateGainProx = *(float *)&v10;
  v11 = SND_RvValidateRange(params->returnGain, 0.0, 4.0);
  params->returnGain = *(float *)&v11;
  v12 = SND_RvValidateRange(params->earlyLpf, 0.0, 1.0);
  params->earlyLpf = *(float *)&v12;
  v13 = SND_RvValidateRange(params->lateLpf, 0.0, 1.0);
  params->lateLpf = *(float *)&v13;
  v14 = SND_RvValidateRange(params->inputLpf, 0.0, 1.0);
  params->inputLpf = *(float *)&v14;
  v15 = SND_RvValidateRange(params->dampLpf, 0.0, 1.0);
  params->dampLpf = *(float *)&v15;
  v16 = SND_RvValidateRange(params->wallReflect, 0.0, 1.0);
  params->wallReflect = *(float *)&v16;
  v17 = SND_RvValidateRange(params->dryGain, 0.0, 1.0);
  params->dryGain = *(float *)&v17;
  v18 = SND_RvValidateRange(params->earlySize, 0.1, 16.0);
  params->earlySize = *(float *)&v18;
  v19 = SND_RvValidateRange(params->lateSize, 0.1, 16.0);
  params->lateSize = *(float *)&v19;
  v20 = SND_RvValidateRange(params->diffusion, 0.0, 1.0);
  params->diffusion = *(float *)&v20;
  v21 = SND_RvValidateRange(params->rearLevel, 0.0, 1.0);
  fadeTimeStamp = params->fadeTimeStamp;
  params->rearLevel = *(float *)&v21;
  if ( state->fadeTimeStamp != fadeTimeStamp )
  {
    state->fadeTimeStamp = fadeTimeStamp;
    if ( params->fade )
    {
      state->fadeRate = -2048.0 / params->frameRate;
      state->isCurrent = 0;
    }
    else
    {
      memset_0(state->prevPan, 0, sizeof(state->prevPan));
      state->fadeVol = 1.0;
      state->fadeRate = 0.0;
      SND_UpdateRvState(params, state);
      state->isCurrent = 1;
    }
  }
  fadeRate = state->fadeRate;
  if ( fadeRate != 0.0 )
  {
    fadeVol = state->fadeVol;
    if ( fadeVol == 0.0 )
    {
      SND_UpdateRvState(params, state);
      fadeVol = state->fadeVol;
      fadeRate = state->fadeRate;
      state->isCurrent = 1;
    }
    state->fadeVol = fadeRate + fadeVol;
    if ( (float)(fadeRate + fadeVol) >= 0.0 )
    {
      if ( (float)(fadeRate + fadeVol) >= 1.0 )
      {
        state->fadeVol = 1.0;
        state->fadeRate = 0.0;
      }
    }
    else
    {
      state->fadeRate = COERCE_FLOAT(LODWORD(fadeRate) ^ _xmm);
      state->fadeVol = 0.0;
    }
  }
  if ( state->isCurrent )
  {
    newPan = state->newPan;
    v26 = 2i64;
    do
    {
      newPan += 32;
      v27 = *(_OWORD *)panMatrix;
      panMatrix += 32;
      *((_OWORD *)newPan - 8) = v27;
      *((_OWORD *)newPan - 7) = *((_OWORD *)panMatrix - 7);
      *((_OWORD *)newPan - 6) = *((_OWORD *)panMatrix - 6);
      *((_OWORD *)newPan - 5) = *((_OWORD *)panMatrix - 5);
      *((_OWORD *)newPan - 4) = *((_OWORD *)panMatrix - 4);
      *((_OWORD *)newPan - 3) = *((_OWORD *)panMatrix - 3);
      *((_OWORD *)newPan - 2) = *((_OWORD *)panMatrix - 2);
      *((_OWORD *)newPan - 1) = *((_OWORD *)panMatrix - 1);
      --v26;
    }
    while ( v26 );
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
void SND_RvParamsValidate(snd_rv_params *params)
{
  double v2; 
  double v3; 
  double v4; 
  double v5; 
  double v6; 
  double v7; 
  double v8; 
  double v9; 
  double v10; 
  double v11; 
  double v12; 
  double v13; 
  double v14; 
  double v15; 
  double v16; 
  double v17; 

  v2 = SND_RvValidateRange(params->earlyTime, 0.0, 1.0);
  params->earlyTime = *(float *)&v2;
  v3 = SND_RvValidateRange(params->lateTime, 0.0, 1.0);
  params->lateTime = *(float *)&v3;
  v4 = SND_RvValidateRange(params->earlyGain, 0.0, 4.0);
  params->earlyGain = *(float *)&v4;
  v5 = SND_RvValidateRange(params->lateGain, 0.0, 4.0);
  params->lateGain = *(float *)&v5;
  v6 = SND_RvValidateRange(params->lateGainProx, 0.0, 4.0);
  params->lateGainProx = *(float *)&v6;
  v7 = SND_RvValidateRange(params->returnGain, 0.0, 4.0);
  params->returnGain = *(float *)&v7;
  v8 = SND_RvValidateRange(params->earlyLpf, 0.0, 1.0);
  params->earlyLpf = *(float *)&v8;
  v9 = SND_RvValidateRange(params->lateLpf, 0.0, 1.0);
  params->lateLpf = *(float *)&v9;
  v10 = SND_RvValidateRange(params->inputLpf, 0.0, 1.0);
  params->inputLpf = *(float *)&v10;
  v11 = SND_RvValidateRange(params->dampLpf, 0.0, 1.0);
  params->dampLpf = *(float *)&v11;
  v12 = SND_RvValidateRange(params->wallReflect, 0.0, 1.0);
  params->wallReflect = *(float *)&v12;
  v13 = SND_RvValidateRange(params->dryGain, 0.0, 1.0);
  params->dryGain = *(float *)&v13;
  v14 = SND_RvValidateRange(params->earlySize, 0.1, 16.0);
  params->earlySize = *(float *)&v14;
  v15 = SND_RvValidateRange(params->lateSize, 0.1, 16.0);
  params->lateSize = *(float *)&v15;
  v16 = SND_RvValidateRange(params->diffusion, 0.0, 1.0);
  params->diffusion = *(float *)&v16;
  v17 = SND_RvValidateRange(params->rearLevel, 0.0, 1.0);
  params->rearLevel = *(float *)&v17;
}

/*
==============
SND_RvValidateRange
==============
*/
double SND_RvValidateRange(float value, float min, float max)
{
  if ( (LODWORD(value) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\com_snd_radverb.cpp", 145, ASSERT_TYPE_ASSERT, "(!IS_NAN( value ))", (const char *)&queryFormat, "!IS_NAN( value )") )
    __debugbreak();
  if ( value < min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\com_snd_radverb.cpp", 146, ASSERT_TYPE_ASSERT, "( ( value >= min ) )", "( value ) = %g", value) )
    __debugbreak();
  if ( value > max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\com_snd_radverb.cpp", 147, ASSERT_TYPE_ASSERT, "( ( value <= max ) )", "( value ) = %g", value) )
    __debugbreak();
  return I_fclamp(value, min, max);
}

/*
==============
SND_UpdateRvState
==============
*/
void SND_UpdateRvState(snd_rv_params *params, snd_rv_state_simd *state)
{
  float lateGain; 
  unsigned int delayMatrix; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  double v10; 
  unsigned int v23; 
  float *v24; 
  __int128 wallReflect_low; 
  float v26; 
  int (*earlyReflectionDelays)[4]; 
  __int64 v46; 
  __int64 v47; 
  int v48; 
  __int64 v49; 
  unsigned int v50; 
  int v51[4]; 

  Sys_ProfBeginNamedEvent(0xFF00FFu, "SND_UpdateRvState");
  state->params.frameRate = params->frameRate;
  if ( params->frameRate <= 1000.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\com_snd_radverb.cpp", 180, ASSERT_TYPE_ASSERT, "(params->frameRate > 1000.0f)", (const char *)&queryFormat, "params->frameRate > 1000.0f") )
    __debugbreak();
  if ( params->frameRate >= 100000.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\com_snd_radverb.cpp", 181, ASSERT_TYPE_ASSERT, "(params->frameRate < 100000.0f)", (const char *)&queryFormat, "params->frameRate < 100000.0f") )
    __debugbreak();
  state->params.earlyTime = params->earlyTime;
  state->params.lateTime = params->lateTime;
  state->params.earlyGain = params->earlyGain;
  lateGain = params->lateGain;
  state->params.lateGain = lateGain;
  state->params.lateGainProx = lateGain * params->lateGainProx;
  state->params.returnGain = params->returnGain;
  state->params.earlyLpf = params->earlyLpf;
  state->params.lateLpf = params->lateLpf;
  state->params.inputLpf = params->inputLpf;
  state->params.dampLpf = params->dampLpf;
  state->params.wallReflect = params->wallReflect;
  state->params.dryGain = params->dryGain;
  state->params.diffusion = params->diffusion;
  state->params.earlySize = params->earlySize;
  state->params.lateSize = params->lateSize;
  state->params.rearLevel = params->rearLevel;
  delayMatrix = params->delayMatrix;
  state->params.delayMatrix = delayMatrix;
  SND_RvDelayInit(state, delayMatrix);
  v10 = j___libm_sse2_sincosf_(v7, v6, v8, v9);
  _XMM7 = 0i64;
  _XMM8 = 0i64;
  _XMM9 = 0i64;
  _XMM10 = 0i64;
  v50 = _mm_shuffle_ps((__m128)*(unsigned __int64 *)&v10, (__m128)*(unsigned __int64 *)&v10, 1).m128_u32[0];
  __asm
  {
    vinsertps xmm7, xmm7, xmm2, 0
    vinsertps xmm8, xmm8, xmm6, 0
    vinsertps xmm9, xmm9, xmm1, 20h ; ' '
    vinsertps xmm10, xmm10, xmm6, 20h ; ' '
    vinsertps xmm7, xmm7, xmm6, 10h
    vinsertps xmm8, xmm8, xmm1, 10h
    vinsertps xmm9, xmm9, xmm6, 30h ; '0'
    vinsertps xmm10, xmm10, xmm2, 30h ; '0'
  }
  if ( (v50 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\com_snd_radverb.cpp", 219, ASSERT_TYPE_ASSERT, "(!IS_NAN( da ))", (const char *)&queryFormat, "!IS_NAN( da )", v50) )
    __debugbreak();
  *(float *)&v49 = *(float *)&v10;
  if ( (LODWORD(v10) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\com_snd_radverb.cpp", 220, ASSERT_TYPE_ASSERT, "(!IS_NAN( db ))", (const char *)&queryFormat, "!IS_NAN( db )", v49) )
    __debugbreak();
  state->lateReflectionCoefs[0] = (float4)_XMM7.v;
  state->lateReflectionCoefs[1] = (float4)_XMM8.v;
  state->lateReflectionCoefs[2] = (float4)_XMM9.v;
  state->lateReflectionCoefs[3] = (float4)_XMM10.v;
  v23 = 0;
  v24 = (float *)v51;
  do
  {
    wallReflect_low = LODWORD(state->params.wallReflect);
    v26 = (float)v23;
    *(float *)&wallReflect_low = (float)((float)((float)(state->params.wallReflect - 1.0) * v26) * 0.35355338) + 0.70710677;
    _XMM3 = wallReflect_low;
    __asm { vmaxss  xmm0, xmm3, xmm9 }
    *(float *)&v49 = *(float *)&_XMM0;
    *v24 = *(float *)&_XMM0;
    if ( (_XMM0 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\com_snd_radverb.cpp", 235, ASSERT_TYPE_ASSERT, "(!IS_NAN( coef[i] ))", (const char *)&queryFormat, "!IS_NAN( coef[i] )", v49) )
      __debugbreak();
    ++v23;
    ++v24;
  }
  while ( v23 < 4 );
  _XMM7 = (unsigned int)v51[0];
  __asm { vinsertps xmm7, xmm7, xmm4, 10h }
  _XMM5 = (unsigned int)v51[3];
  __asm { vinsertps xmm5, xmm5, xmm6, 10h }
  _XMM3 = (unsigned int)v51[2];
  __asm { vinsertps xmm3, xmm3, xmm0, 10h }
  _XMM1 = (unsigned int)v51[1];
  __asm
  {
    vinsertps xmm1, xmm1, xmm2, 10h
    vinsertps xmm7, xmm7, xmm2, 20h ; ' '
    vinsertps xmm5, xmm5, xmm0, 20h ; ' '
    vinsertps xmm3, xmm3, xmm6, 20h ; ' '
    vinsertps xmm1, xmm1, xmm4, 20h ; ' '
    vinsertps xmm7, xmm7, xmm0, 30h ; '0'
    vinsertps xmm5, xmm5, xmm2, 30h ; '0'
    vinsertps xmm3, xmm3, xmm4, 30h ; '0'
    vinsertps xmm1, xmm1, xmm6, 30h ; '0'
  }
  state->earlyReflectionCoefs[0] = (float4)_XMM7.v;
  state->earlyReflectionCoefs[1] = (float4)_XMM5.v;
  state->earlyReflectionCoefs[2] = (float4)_XMM3.v;
  state->earlyReflectionCoefs[3] = (float4)_XMM1.v;
  earlyReflectionDelays = state->earlyReflectionDelays;
  v46 = 4i64;
  do
  {
    v47 = 4i64;
    do
    {
      v48 = (int)(float)((float)(*earlyReflectionDelays)[84] * params->earlySize);
      *(_DWORD *)earlyReflectionDelays = v48;
      (*earlyReflectionDelays)[32] = (int)(float)((float)(*earlyReflectionDelays)[100] * params->lateSize);
      if ( v48 >= 0x8000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\com_snd_radverb.cpp", 256, ASSERT_TYPE_ASSERT, "(state->earlyReflectionDelays[i][j] < ((2048)*(16)))", (const char *)&queryFormat, "state->earlyReflectionDelays[i][j] < SND_RV_DELAY_FRAME_COUNT") )
        __debugbreak();
      if ( (*earlyReflectionDelays)[32] >= 0x8000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\com_snd_radverb.cpp", 257, ASSERT_TYPE_ASSERT, "(state->lateReflectionDelays[i][j] < ((2048)*(16)))", (const char *)&queryFormat, "state->lateReflectionDelays[i][j] < SND_RV_DELAY_FRAME_COUNT") )
        __debugbreak();
      earlyReflectionDelays = (int (*)[4])((char *)earlyReflectionDelays + 4);
      --v47;
    }
    while ( v47 );
    --v46;
  }
  while ( v46 );
  Sys_ProfEndNamedEvent();
}

