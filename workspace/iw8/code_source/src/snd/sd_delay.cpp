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
  signed __int64 v10; 
  signed __int64 v11; 
  float *v12; 
  signed __int64 v13; 
  char *v14; 
  __int64 v15; 
  float *v16; 
  __int64 v17; 
  __m128 v18; 
  __m128 v19; 
  __m128 v20; 
  __m128 v21; 
  __m128 v22; 
  __m128 v23; 
  __m128 v24; 
  __m128 v25; 
  __m128 v26; 
  __m128 v27; 
  __m128 v28; 
  __m128 v29; 
  __m128 v30; 
  __m128 v31; 
  __m128 v32; 
  __m128 v33; 
  __m128 v34; 
  __m128 v35; 
  __m128 v36; 
  __m128 v37; 
  __m128 v38; 
  __m128 v39; 
  __m128 v40; 
  __m128 v41; 
  __m128 v42; 
  __m128 v43; 
  __m128 v44; 
  __m128 v45; 
  __m128 v46; 
  __m128 v47; 
  unsigned int v48; 
  int v63; 
  __m128 *v64; 
  __int64 v65; 
  int readPos; 
  __m128 *v67; 
  __int64 v68; 
  char *v69; 
  __m128 v70; 
  __m128 v71; 
  __m128 v72; 
  __m128 v73; 
  __m128 v74; 
  __m128 v75; 
  __m128 v76; 
  __m128 v77; 
  __m128 v78; 
  __m128 v79; 
  __m128 v80; 
  __m128 v81; 
  __m128 v82; 
  __m128 v83; 
  __m128 v84; 
  __m128 v85; 
  __m128 v86; 
  __m128 v87; 
  __m128 v88; 
  __m128 v89; 
  __m128 v90; 
  __m128 v91; 
  __m128 v92; 
  __m128 v93; 
  __m128 v94; 
  __m128 v95; 
  __m128 v96; 
  __m128 v97; 
  __m128 v98; 
  __m128 v99; 
  __m128 v100; 
  char v101[160]; 
  char v102[3936]; 

  Sys_ProfBeginNamedEvent(0xFF00FFu, "SND_FiveTapDelayFrame");
  if ( count != 256 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_delay.cpp", 108, ASSERT_TYPE_ASSERT, "(count == ( 256 ))", (const char *)&queryFormat, "count == SD_MIX_FRAME_COUNT") )
    __debugbreak();
  if ( state->state[0].enabled || state->state[1].enabled || state->state[2].enabled || state->state[3].enabled || state->state[4].enabled )
  {
    v10 = (char *)input0 - (char *)input1;
    v11 = (char *)input2 - (char *)input1;
    v12 = input1 + 4;
    v13 = (char *)input3 - (char *)input1;
    v14 = v102;
    v15 = 16i64;
    v16 = v12;
    v17 = 16i64;
    do
    {
      v14 += 256;
      v18 = *(__m128 *)((char *)v16 + v10 - 16);
      v19 = _mm_shuffle_ps(v18, *(__m128 *)(v16 - 4), 68);
      v20 = _mm_shuffle_ps(v18, *(__m128 *)(v16 - 4), 238);
      v21 = *(__m128 *)((char *)v16 + v11 - 16);
      v22 = _mm_shuffle_ps(v21, *(__m128 *)((char *)v16 + v13 - 16), 68);
      v23 = _mm_shuffle_ps(v21, *(__m128 *)((char *)v16 + v13 - 16), 238);
      v24 = *(__m128 *)((char *)v16 + v10);
      v16 += 16;
      *((__m128 *)v14 - 25) = _mm_shuffle_ps(v19, v22, 221);
      *((__m128 *)v14 - 23) = _mm_shuffle_ps(v20, v23, 221);
      v25 = *(__m128 *)((char *)v16 + v11 - 64);
      v26 = _mm_shuffle_ps(v19, v22, 136);
      v27 = _mm_shuffle_ps(v25, *(__m128 *)((char *)v16 + v13 - 64), 68);
      v28 = _mm_shuffle_ps(v24, *(__m128 *)(v16 - 16), 68);
      *((__m128 *)v14 - 26) = v26;
      v29 = _mm_shuffle_ps(v20, v23, 136);
      v30 = _mm_shuffle_ps(v25, *(__m128 *)((char *)v16 + v13 - 64), 238);
      v31 = _mm_shuffle_ps(v24, *(__m128 *)(v16 - 16), 238);
      v32 = *(__m128 *)((char *)v16 + v10 - 48);
      *((__m128 *)v14 - 24) = v29;
      *((__m128 *)v14 - 22) = _mm_shuffle_ps(v28, v27, 136);
      v33 = _mm_shuffle_ps(v28, v27, 221);
      v34 = _mm_shuffle_ps(v32, *(__m128 *)(v16 - 12), 68);
      *((__m128 *)v14 - 21) = v33;
      *((__m128 *)v14 - 20) = _mm_shuffle_ps(v31, v30, 136);
      v35 = _mm_shuffle_ps(v31, v30, 221);
      v36 = _mm_shuffle_ps(v32, *(__m128 *)(v16 - 12), 238);
      v37 = *(__m128 *)((char *)v16 + v10 - 32);
      *((__m128 *)v14 - 19) = v35;
      v38 = *(__m128 *)((char *)v16 + v11 - 48);
      v39 = _mm_shuffle_ps(v38, *(__m128 *)((char *)v16 + v13 - 48), 68);
      v40 = _mm_shuffle_ps(v38, *(__m128 *)((char *)v16 + v13 - 48), 238);
      *((__m128 *)v14 - 18) = _mm_shuffle_ps(v34, v39, 136);
      v41 = _mm_shuffle_ps(v34, v39, 221);
      v42 = _mm_shuffle_ps(v37, *(__m128 *)(v16 - 8), 68);
      *((__m128 *)v14 - 17) = v41;
      *((__m128 *)v14 - 16) = _mm_shuffle_ps(v36, v40, 136);
      v43 = _mm_shuffle_ps(v36, v40, 221);
      v44 = _mm_shuffle_ps(v37, *(__m128 *)(v16 - 8), 238);
      *((__m128 *)v14 - 15) = v43;
      v45 = *(__m128 *)((char *)v16 + v11 - 32);
      v46 = _mm_shuffle_ps(v45, *(__m128 *)((char *)v16 + v13 - 32), 68);
      v47 = _mm_shuffle_ps(v45, *(__m128 *)((char *)v16 + v13 - 32), 238);
      *((__m128 *)v14 - 14) = _mm_shuffle_ps(v42, v46, 136);
      *((__m128 *)v14 - 13) = _mm_shuffle_ps(v42, v46, 221);
      *((__m128 *)v14 - 12) = _mm_shuffle_ps(v44, v47, 136);
      *((__m128 *)v14 - 11) = _mm_shuffle_ps(v44, v47, 221);
      --v17;
    }
    while ( v17 );
    v48 = 0;
    _RDX = &state->state[0].level;
    do
    {
      if ( *((_BYTE *)_RDX - 8) )
      {
        _XMM2 = *((unsigned int *)_RDX + 3);
        __asm { vinsertps xmm2, xmm2, dword ptr [rdx+10h], 10h }
        _XMM3 = *((unsigned int *)_RDX + 9);
        __asm
        {
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
        v63 = *((_DWORD *)_RDX - 1);
        v64 = (__m128 *)v101;
        v65 = 256i64;
        do
        {
          _XMM2 = _mm128_add_ps(_mm128_mul_ps(_XMM6, _XMM2), _mm128_mul_ps(_XMM5, *v64));
          _XMM3 = _mm128_add_ps(_mm128_mul_ps(_XMM8, _XMM3), _mm128_mul_ps(_XMM7, _XMM2));
          *(__m128 *)&state->delayLine[4 * v63] = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(_XMM2, _XMM3), _XMM4), *(__m128 *)&state->delayLine[4 * v63]);
          v63 = (v63 + 1) % 0x10000;
          ++v64;
          --v65;
        }
        while ( v65 );
        *((_DWORD *)_RDX - 1) = v63;
        _RDX[3] = _XMM2.m128_f32[0];
        __asm
        {
          vextractps dword ptr [rdx+10h], xmm2, 1
          vextractps dword ptr [rdx+14h], xmm2, 2
          vextractps dword ptr [rdx+18h], xmm2, 3
        }
        _RDX[9] = _XMM3.m128_f32[0];
        __asm
        {
          vextractps dword ptr [rdx+28h], xmm3, 1
          vextractps dword ptr [rdx+2Ch], xmm3, 2
          vextractps dword ptr [rdx+30h], xmm3, 3
        }
      }
      ++v48;
      _RDX += 15;
    }
    while ( v48 < 5 );
    readPos = state->readPos;
    v67 = (__m128 *)v101;
    v68 = 256i64;
    do
    {
      *v67 = _mm128_add_ps(*(__m128 *)&state->delayLine[4 * readPos], *v67);
      *(_OWORD *)&state->delayLine[4 * readPos] = 0i64;
      readPos = (readPos + 1) % 0x10000;
      ++v67;
      --v68;
    }
    while ( v68 );
    state->readPos = readPos;
    v69 = v102;
    do
    {
      v12 += 16;
      v70 = *((__m128 *)v69 - 10);
      v71 = *((__m128 *)v69 - 8);
      v72 = _mm_shuffle_ps(v71, *((__m128 *)v69 - 7), 68);
      v73 = _mm_shuffle_ps(v71, *((__m128 *)v69 - 7), 238);
      v74 = *((__m128 *)v69 - 9);
      v69 += 256;
      v75 = _mm_shuffle_ps(v70, v74, 68);
      *((__m128 *)v12 - 5) = _mm_shuffle_ps(v75, v72, 221);
      v76 = _mm_shuffle_ps(v70, v74, 238);
      v77 = *((__m128 *)v69 - 22);
      *(__m128 *)((char *)v12 + v13 - 80) = _mm_shuffle_ps(v76, v73, 221);
      v78 = *((__m128 *)v69 - 20);
      v79 = _mm_shuffle_ps(v75, v72, 136);
      v80 = _mm_shuffle_ps(v78, *((__m128 *)v69 - 19), 68);
      v81 = _mm_shuffle_ps(v77, *((__m128 *)v69 - 21), 68);
      *(__m128 *)((char *)v12 + v10 - 80) = v79;
      v82 = _mm_shuffle_ps(v76, v73, 136);
      v83 = _mm_shuffle_ps(v78, *((__m128 *)v69 - 19), 238);
      v84 = _mm_shuffle_ps(v77, *((__m128 *)v69 - 21), 238);
      v85 = *((__m128 *)v69 - 18);
      *(__m128 *)((char *)v12 + v11 - 80) = v82;
      *((__m128 *)v12 - 4) = _mm_shuffle_ps(v81, v80, 221);
      *(__m128 *)((char *)v12 + v13 - 64) = _mm_shuffle_ps(v84, v83, 221);
      v86 = *((__m128 *)v69 - 16);
      v87 = _mm_shuffle_ps(v81, v80, 136);
      v88 = _mm_shuffle_ps(v86, *((__m128 *)v69 - 15), 68);
      v89 = _mm_shuffle_ps(v85, *((__m128 *)v69 - 17), 68);
      *(__m128 *)((char *)v12 + v10 - 64) = v87;
      v90 = _mm_shuffle_ps(v84, v83, 136);
      v91 = _mm_shuffle_ps(v86, *((__m128 *)v69 - 15), 238);
      v92 = _mm_shuffle_ps(v85, *((__m128 *)v69 - 17), 238);
      v93 = *((__m128 *)v69 - 14);
      *(__m128 *)((char *)v12 + v11 - 64) = v90;
      *((__m128 *)v12 - 3) = _mm_shuffle_ps(v89, v88, 221);
      v94 = _mm_shuffle_ps(v89, v88, 136);
      v95 = _mm_shuffle_ps(v93, *((__m128 *)v69 - 13), 68);
      *(__m128 *)((char *)v12 + v13 - 48) = _mm_shuffle_ps(v92, v91, 221);
      v96 = *((__m128 *)v69 - 12);
      v97 = _mm_shuffle_ps(v96, *((__m128 *)v69 - 11), 68);
      *(__m128 *)((char *)v12 + v10 - 48) = v94;
      v98 = _mm_shuffle_ps(v92, v91, 136);
      v99 = _mm_shuffle_ps(v96, *((__m128 *)v69 - 11), 238);
      v100 = _mm_shuffle_ps(v93, *((__m128 *)v69 - 13), 238);
      *(__m128 *)((char *)v12 + v11 - 48) = v98;
      *(__m128 *)((char *)v12 + v10 - 32) = _mm_shuffle_ps(v95, v97, 136);
      *((__m128 *)v12 - 2) = _mm_shuffle_ps(v95, v97, 221);
      *(__m128 *)((char *)v12 + v11 - 32) = _mm_shuffle_ps(v100, v99, 136);
      *(__m128 *)((char *)v12 + v13 - 32) = _mm_shuffle_ps(v100, v99, 221);
      --v15;
    }
    while ( v15 );
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
  float *p_lpfCutoff; 
  int *p_tapPos; 
  unsigned int i; 
  char v6; 
  int v7; 
  __int64 v11; 

  p_lpfCutoff = &params->params[0].lpfCutoff;
  p_tapPos = &state->state[0].tapPos;
  for ( i = 0; i < 5; ++i )
  {
    p_tapPos[1] = 0;
    v6 = *((_BYTE *)p_lpfCutoff - 12);
    *((_BYTE *)p_tapPos - 4) = v6;
    if ( v6 )
    {
      v7 = (int)(float)(48.0 * *(p_lpfCutoff - 2));
      if ( v7 > 65280 )
        v7 = 65280;
      if ( v7 < 0 )
        v7 = 0;
      *p_tapPos = v7;
      _XMM0 = *(unsigned int *)p_lpfCutoff;
      __asm
      {
        vmaxss  xmm0, xmm0, xmm6
        vminss  xmm1, xmm0, xmm8
      }
      *(float *)&_XMM0 = expf_0(*(float *)&_XMM1 * -0.0001308997);
      p_tapPos[3] = _XMM0;
      *((float *)p_tapPos + 2) = 1.0 - *(float *)&_XMM0;
      v11 = (int)i;
      *(_QWORD *)state->state[v11].lpfD = 0i64;
      *(_QWORD *)&state->state[v11].lpfD[2] = 0i64;
      _XMM0 = *((unsigned int *)p_lpfCutoff + 1);
      __asm
      {
        vmaxss  xmm0, xmm0, xmm6
        vminss  xmm1, xmm0, xmm8
      }
      *(float *)&_XMM0 = expf_0(*(float *)&_XMM1 * -0.0001308997);
      p_tapPos[9] = _XMM0;
      *((float *)p_tapPos + 8) = 1.0 - *(float *)&_XMM0;
      *(_QWORD *)state->state[v11].hpfD = 0i64;
      *(_QWORD *)&state->state[v11].hpfD[2] = 0i64;
      _XMM0 = *((unsigned int *)p_lpfCutoff - 1);
      __asm
      {
        vmaxss  xmm0, xmm0, xmm6
        vminss  xmm1, xmm0, xmm7
      }
      p_tapPos[1] = _XMM1;
    }
    p_lpfCutoff += 5;
    p_tapPos += 15;
  }
  state->readPos = 0;
  memset_0(state->delayLine, 0, sizeof(state->delayLine));
}

