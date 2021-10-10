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
  float z1; 
  float z2; 
  const float *v6; 
  float a0; 
  float a1; 
  float a2; 
  float a3; 
  float a4; 
  float *v12; 
  signed __int64 v13; 
  __int64 v14; 
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
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  float v46; 
  float v47; 
  float v48; 
  float v49; 
  float v50; 
  float v51; 
  float v52; 
  float v53; 
  float v54; 
  float v55; 
  float v56; 
  float v57; 
  float v58; 
  float v59; 
  float v60; 
  float v61; 
  float v62; 
  float v63; 
  float v64; 

  z1 = state->z1;
  z2 = state->z2;
  v6 = p_input + 2;
  a0 = coeffs->a0;
  a1 = coeffs->a1;
  a2 = coeffs->a2;
  a3 = coeffs->a3;
  a4 = coeffs->a4;
  v12 = p_output + 2;
  v13 = (char *)p_output - (char *)p_input;
  v14 = 32i64;
  do
  {
    v15 = *(v6 - 2) + 2.3283064e-10;
    v16 = (float)(v15 * a0) + z1;
    v17 = (float)((float)(v15 * a1) + z2) + (float)(v16 * a3);
    v18 = v15 * a2;
    v19 = *(v6 - 1) + 2.3283064e-10;
    v20 = (float)(v16 * a4) + v18;
    v21 = v19 * a0;
    v22 = (float)(v19 * a1) + v20;
    v23 = v19 * a2;
    v24 = *v6 + 2.3283064e-10;
    *(float *)((char *)v6 + v13 - 8) = v16;
    v25 = v21 + v17;
    v26 = v22 + (float)((float)(v21 + v17) * a3);
    v27 = (float)(v25 * a4) + v23;
    v28 = v24 * a0;
    v29 = (float)(v24 * a1) + v27;
    v30 = v24 * a2;
    v31 = v6[1] + 2.3283064e-10;
    *(v12 - 1) = v25;
    v32 = v28 + v26;
    v33 = v29 + (float)((float)(v28 + v26) * a3);
    v34 = (float)(v32 * a4) + v30;
    v35 = v31 * a0;
    v36 = (float)(v31 * a1) + v34;
    v37 = v31 * a2;
    v38 = v6[2] + 2.3283064e-10;
    *v12 = v32;
    v39 = v35 + v33;
    v40 = v36 + (float)((float)(v35 + v33) * a3);
    v41 = (float)(v39 * a4) + v37;
    v42 = v38 * a0;
    v43 = (float)(v38 * a1) + v41;
    v44 = v38 * a2;
    v45 = v6[3] + 2.3283064e-10;
    v12[1] = v39;
    v46 = v42 + v40;
    v47 = v43 + (float)((float)(v42 + v40) * a3);
    v48 = (float)(v46 * a4) + v44;
    v49 = v45 * a0;
    v50 = (float)(v45 * a1) + v48;
    v51 = v45 * a2;
    v52 = v6[4] + 2.3283064e-10;
    v12[2] = v46;
    v53 = v49 + v47;
    v54 = v50 + (float)((float)(v49 + v47) * a3);
    v55 = (float)(v53 * a4) + v51;
    v56 = v52 * a0;
    v57 = (float)(v52 * a1) + v55;
    v58 = v52 * a2;
    v59 = v6[5] + 2.3283064e-10;
    v12[3] = v53;
    v60 = v56 + v54;
    v61 = v57 + (float)((float)(v56 + v54) * a3);
    v62 = (float)(v60 * a4) + v58;
    v12[4] = v60;
    v63 = (float)(v59 * a0) + v61;
    v12[5] = v63;
    v12 += 8;
    v6 += 8;
    z2 = (float)(v63 * a4) + (float)(v59 * a2);
    v64 = (float)((float)(v59 * a1) + v62) + (float)(v63 * a3);
    z1 = v64;
    --v14;
  }
  while ( v14 );
  state->z1 = v64;
  state->z2 = z2;
}

/*
==============
EQBANK_ProcessArrayBlock<256>
==============
*/
void EQBANK_ProcessArrayBlock<256>(SndEQBank *p_bank, const SndEQBankParams *p_params, const float *p_input, float *p_output, const int channelCount)
{
  signed __int64 v5; 
  void *v6; 
  unsigned __int64 v7; 
  int v8; 
  const float *v9; 
  float *v10; 
  float *v11; 
  unsigned __int128 v14; 
  unsigned __int128 v15; 
  bool v16; 
  bool v17; 
  float v18; 
  __m128 v19; 
  const float *v20; 
  char v21; 
  const float *v22; 
  __int64 v23; 
  char v24; 
  __int64 v25; 
  __int64 v26; 
  char v27; 
  __int64 v28; 
  char v29; 
  unsigned __int64 v30; 
  const float *v31; 
  unsigned __int64 v32; 
  unsigned __int64 v33; 
  unsigned __int64 v34; 
  __m128 v35; 
  __int64 v38; 
  int v39; 
  __m128 v40; 
  __m256 v51; 
  __int64 v52; 
  __int64 v53; 
  __m256 v54; 
  __m256 v55; 
  int v56; 
  __int64 v57; 
  __m256 v58; 
  __m256 v59; 
  __m256 v60; 
  __m256 v61; 
  __m256 v62; 
  __m256 v63; 
  __m256 v64; 
  __m256 v65; 
  __m256 v66; 
  __m256 v67; 
  __m256 v68; 
  __m256 v69; 
  int v70; 
  __int64 v71; 
  __m256 v72; 
  __m256 v73; 
  __m256 v74; 
  __int64 v75; 
  __m256 v76; 
  __m256 v77; 
  __m256 v78; 
  __m256 v79; 
  __m256 v80; 
  __m256 v81; 
  __m256 v82; 
  __m256 v83; 
  __m256 v84; 
  __m256 v85; 
  __m256 v86; 
  __m256 v87; 
  int v88; 
  __int64 v89; 
  __m256 v90; 
  __m256 v91; 
  _DWORD *v92; 
  float *v93; 
  __int64 i; 
  float *v95; 
  __int64 v96; 
  float *v97; 
  __int64 v98; 
  char v99[4240]; 

  v6 = alloca(v5);
  v7 = (unsigned __int64)v99 & 0xFFFFFFFFFFFFFFE0ui64;
  *(_QWORD *)(v7 + 4224) = (unsigned __int64)&v98 ^ _security_cookie;
  v8 = channelCount;
  v9 = p_input + 256;
  *(_QWORD *)(v7 + 48) = p_input;
  v10 = p_output;
  *(_QWORD *)(v7 + 16) = p_output;
  v11 = (float *)p_input;
  *(_QWORD *)(v7 + 56) = p_params;
  *(_QWORD *)(v7 + 24) = p_bank;
  if ( channelCount > 2 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\com_snd_biquad_eq.h", 106, ASSERT_TYPE_ASSERT, "(channelCount <= ( 2 ))", (const char *)&queryFormat, "channelCount <= SD_DECODER_CHANNEL_MAX") )
      __debugbreak();
    v10 = *(float **)(((unsigned __int64)v99 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10);
  }
  if ( p_bank->isAnyEqBandEnabled )
  {
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "ParametricEQArray");
    v15 = LODWORD(FLOAT_1_0);
    *(float *)&v15 = 1.0 - p_bank->prevEqLerp;
    v14 = v15;
    v16 = *(float *)&v15 < 0.001;
    v17 = *(float *)&v15 == 0.001;
    v19 = (__m128)LODWORD(FLOAT_1_0);
    v18 = 1.0 - p_params->eqLerp;
    *(_QWORD *)(((unsigned __int64)v99 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = v9;
    *(_BYTE *)(((unsigned __int64)v99 & 0xFFFFFFFFFFFFFFE0ui64) + 1) = !v16 && !v17;
    v20 = v11;
    *(_QWORD *)(((unsigned __int64)v99 & 0xFFFFFFFFFFFFFFE0ui64) + 0x28) = v9;
    *(_BYTE *)(((unsigned __int64)v99 & 0xFFFFFFFFFFFFFFE0ui64) + 2) = *(float *)&v14 < 0.99900001;
    v21 = 0;
    *(_BYTE *)v7 = 0;
    v22 = v11;
    if ( v16 || v17 )
    {
      memset_0((void *)(v7 + 128), 0, 0x400ui64);
      memset_0((void *)(v7 + 2176), 0, 0x400ui64);
    }
    if ( *(float *)&v14 >= 0.99900001 )
    {
      memset_0((void *)(v7 + 1152), 0, 0x400ui64);
      memset_0((void *)(v7 + 3200), 0, 0x400ui64);
    }
    if ( channelCount == 1 )
    {
      v23 = 2i64;
      v24 = *(_BYTE *)(((unsigned __int64)v99 & 0xFFFFFFFFFFFFFFE0ui64) + 1);
      v25 = *(_QWORD *)(((unsigned __int64)v99 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18) + 132i64;
      *(_QWORD *)(((unsigned __int64)v99 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = 2i64;
      do
      {
        if ( *(_BYTE *)(v25 - 80) && v24 )
        {
          BIQUAD_ProcessArray<256>((const SndBiquadCoeffs *)(v25 - 132), (SndBiquadState *)(v25 - 112), v20, (float *)(v7 + 128));
          v23 = *(_QWORD *)(((unsigned __int64)v99 & 0xFFFFFFFFFFFFFFE0ui64) + 8);
          v20 = (const float *)(v7 + 128);
          *(_BYTE *)v7 = 1;
        }
        if ( *(_BYTE *)(v25 + 32) && *(float *)&v14 < 0.99900001 )
        {
          BIQUAD_ProcessArray<256>((const SndBiquadCoeffs *)(v25 - 20), (SndBiquadState *)v25, v22, (float *)(v7 + 1152));
          v23 = *(_QWORD *)(((unsigned __int64)v99 & 0xFFFFFFFFFFFFFFE0ui64) + 8);
          v22 = (const float *)(v7 + 1152);
          v21 = 1;
        }
        v25 += 56i64;
        *(_QWORD *)(((unsigned __int64)v99 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = --v23;
      }
      while ( v23 );
    }
    else
    {
      if ( channelCount != 2 )
        goto LABEL_62;
      v26 = 2i64;
      v27 = *(_BYTE *)(((unsigned __int64)v99 & 0xFFFFFFFFFFFFFFE0ui64) + 2);
      v28 = *(_QWORD *)(((unsigned __int64)v99 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18) + 132i64;
      v29 = *(_BYTE *)(((unsigned __int64)v99 & 0xFFFFFFFFFFFFFFE0ui64) + 1);
      *(_QWORD *)(((unsigned __int64)v99 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = 2i64;
      do
      {
        if ( *(_BYTE *)(v28 - 80) && v29 )
        {
          BIQUAD_ProcessArray<256>((const SndBiquadCoeffs *)(v28 - 132), (SndBiquadState *)(v28 - 112), v20, (float *)(v7 + 128));
          BIQUAD_ProcessArray<256>((const SndBiquadCoeffs *)(v28 - 132), (SndBiquadState *)(v28 - 104), *(const float **)(((unsigned __int64)v99 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20), (float *)(v7 + 2176));
          v26 = *(_QWORD *)(((unsigned __int64)v99 & 0xFFFFFFFFFFFFFFE0ui64) + 8);
          *(_QWORD *)(((unsigned __int64)v99 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = ((unsigned __int64)v99 & 0xFFFFFFFFFFFFFFE0ui64) + 2176;
          v20 = (const float *)(v7 + 128);
          *(_BYTE *)v7 = 1;
        }
        if ( *(_BYTE *)(v28 + 32) && v27 )
        {
          BIQUAD_ProcessArray<256>((const SndBiquadCoeffs *)(v28 - 20), (SndBiquadState *)v28, v22, (float *)(v7 + 1152));
          BIQUAD_ProcessArray<256>((const SndBiquadCoeffs *)(v28 - 20), (SndBiquadState *)(v28 + 8), *(const float **)(((unsigned __int64)v99 & 0xFFFFFFFFFFFFFFE0ui64) + 0x28), (float *)(v7 + 3200));
          v26 = *(_QWORD *)(((unsigned __int64)v99 & 0xFFFFFFFFFFFFFFE0ui64) + 8);
          *(_QWORD *)(((unsigned __int64)v99 & 0xFFFFFFFFFFFFFFE0ui64) + 0x28) = ((unsigned __int64)v99 & 0xFFFFFFFFFFFFFFE0ui64) + 3200;
          v22 = (const float *)(v7 + 1152);
          v21 = 1;
        }
        v28 += 56i64;
        *(_QWORD *)(((unsigned __int64)v99 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = --v26;
      }
      while ( v26 );
      v8 = channelCount;
    }
    v11 = *(float **)(((unsigned __int64)v99 & 0xFFFFFFFFFFFFFFE0ui64) + 0x30);
    if ( *(_BYTE *)v7 )
    {
      v17 = v21 == 0;
      v30 = v7 + 128;
      v31 = v11 + 256;
      v32 = v7 + 2176;
      if ( !v17 )
      {
        v33 = v7 + 1152;
        v34 = v7 + 3200;
        goto LABEL_37;
      }
      v33 = *(_QWORD *)(((unsigned __int64)v99 & 0xFFFFFFFFFFFFFFE0ui64) + 0x30);
      v34 = (unsigned __int64)(v11 + 256);
    }
    else
    {
      if ( !v21 )
        goto LABEL_62;
      v31 = v11 + 256;
      v30 = *(_QWORD *)(((unsigned __int64)v99 & 0xFFFFFFFFFFFFFFE0ui64) + 0x30);
      v32 = (unsigned __int64)(v11 + 256);
      v33 = v7 + 1152;
      v34 = v7 + 3200;
    }
    if ( v11 )
    {
LABEL_37:
      v19.m128_f32[0] = (float)(v18 - *(float *)&v14) * 0.0039215689;
      v35 = v19;
      v19.m128_f32[0] = v19.m128_f32[0] * 8.0;
      _YMM1 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(v19, v19, 0);
      __asm { vinsertf128 ymm1, ymm1, xmm1, 1 }
      *(__m256i *)(((unsigned __int64)v99 & 0xFFFFFFFFFFFFFFE0ui64) + 0x40) = _YMM1;
      if ( (v30 & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\com_snd_biquad_eq.h", 242, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( leftSideL ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )leftSideL ) ) = 0x%llx", v30) )
        __debugbreak();
      if ( (v33 & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\com_snd_biquad_eq.h", 243, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( rightSideL ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )rightSideL ) ) = 0x%llx", v33) )
        __debugbreak();
      if ( (v32 & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\com_snd_biquad_eq.h", 244, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( leftSideR ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )leftSideR ) ) = 0x%llx", v32) )
        __debugbreak();
      if ( (v34 & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\com_snd_biquad_eq.h", 245, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( rightSideR ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )rightSideR ) ) = 0x%llx", v34) )
        __debugbreak();
      if ( ((unsigned __int8)v11 & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\com_snd_biquad_eq.h", 246, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( p_input ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )p_input ) ) = 0x%llx", v11) )
        __debugbreak();
      v38 = *(_QWORD *)(((unsigned __int64)v99 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10);
      v39 = 2;
      v40 = v35;
      v40.m128_f32[0] = (float)(v35.m128_f32[0] * 4.0) + *(float *)&v14;
      _XMM6 = v40;
      __asm
      {
        vinsertps xmm6, xmm6, xmm5, 10h
        vinsertps xmm6, xmm6, xmm7, 20h ; ' '
      }
      _XMM4 = v14;
      _YMM4 = (__m256i)v14;
      __asm
      {
        vinsertps xmm4, xmm4, xmm0, 10h
        vinsertps xmm4, xmm4, xmm2, 20h ; ' '
        vinsertps xmm4, xmm4, xmm3, 30h ; '0'
        vinsertps xmm6, xmm6, xmm8, 30h ; '0'
        vinsertf128 ymm7, ymm4, xmm6, 1
      }
      v51 = *(__m256 *)(((unsigned __int64)v99 & 0xFFFFFFFFFFFFFFE0ui64) + 0x40);
      v52 = 4i64;
      v53 = v38 + 64;
      *(__m256 *)(((unsigned __int64)v99 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60) = _YMM7;
      v54 = _YMM7;
      v55 = _mm256_sub_ps(_ymm, _YMM7);
      v56 = 2;
      v57 = 4i64;
      do
      {
        v53 += 256i64;
        *(__m256 *)(v53 - 320) = _mm256_add_ps(_mm256_mul_ps(v55, *(__m256 *)(32i64 * (v56 - 2) + v33)), _mm256_mul_ps(v54, *(__m256 *)(32i64 * (v56 - 2) + v30)));
        v58 = _mm256_add_ps(v54, v51);
        v59 = _mm256_sub_ps(v55, v51);
        *(__m256 *)(v53 - 288) = _mm256_add_ps(_mm256_mul_ps(v59, *(__m256 *)(32i64 * (v56 - 1) + v33)), _mm256_mul_ps(v58, *(__m256 *)(32i64 * (v56 - 1) + v30)));
        v60 = _mm256_add_ps(v58, v51);
        v61 = _mm256_sub_ps(v59, v51);
        v62 = _mm256_add_ps(v60, v51);
        *(__m256 *)(v53 - 256) = _mm256_add_ps(_mm256_mul_ps(v61, *(__m256 *)(32i64 * v56 + v33)), _mm256_mul_ps(v60, *(__m256 *)(32i64 * v56 + v30)));
        v63 = _mm256_sub_ps(v61, v51);
        v64 = _mm256_add_ps(v62, v51);
        v65 = _mm256_sub_ps(v63, v51);
        *(__m256 *)(v53 - 224) = _mm256_add_ps(_mm256_mul_ps(v63, *(__m256 *)(32i64 * (v56 + 1) + v33)), _mm256_mul_ps(v62, *(__m256 *)(32i64 * (v56 + 1) + v30)));
        v66 = _mm256_add_ps(v64, v51);
        v67 = _mm256_sub_ps(v65, v51);
        *(__m256 *)(v53 - 192) = _mm256_add_ps(_mm256_mul_ps(v65, *(__m256 *)(32i64 * (v56 + 2) + v33)), _mm256_mul_ps(v64, *(__m256 *)(32i64 * (v56 + 2) + v30)));
        v68 = _mm256_add_ps(v66, v51);
        v69 = _mm256_sub_ps(v67, v51);
        *(__m256 *)(v53 - 160) = _mm256_add_ps(_mm256_mul_ps(v67, *(__m256 *)(32i64 * (v56 + 3) + v33)), _mm256_mul_ps(v66, *(__m256 *)(32i64 * (v56 + 3) + v30)));
        v70 = v56 + 5;
        v71 = 32i64 * (v56 + 4);
        v56 += 8;
        v72 = _mm256_add_ps(v68, v51);
        v73 = _mm256_sub_ps(v69, v51);
        *(__m256 *)(v53 - 128) = _mm256_add_ps(_mm256_mul_ps(v69, *(__m256 *)(v71 + v33)), _mm256_mul_ps(v68, *(__m256 *)(v71 + v30)));
        v54 = _mm256_add_ps(v72, v51);
        v55 = _mm256_sub_ps(v73, v51);
        *(__m256 *)(v53 - 96) = _mm256_add_ps(_mm256_mul_ps(v73, *(__m256 *)(32i64 * v70 + v33)), _mm256_mul_ps(v72, *(__m256 *)(32i64 * v70 + v30)));
        --v57;
      }
      while ( v57 );
      if ( v8 == 2 )
      {
        if ( ((unsigned __int8)v31 & 0x1F) != 0 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\com_snd_biquad_eq.h", 272, ASSERT_TYPE_ASSERT, "( ( ( ( ( uintptr_t )( inputR ) ) & 31 ) == 0 ) )", "( ( ( uintptr_t )inputR ) ) = 0x%llx", v31) )
            __debugbreak();
          _YMM7 = *(__m256 *)(((unsigned __int64)v99 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60);
          v51 = *(__m256 *)(((unsigned __int64)v99 & 0xFFFFFFFFFFFFFFE0ui64) + 0x40);
          v52 = 4i64;
          v39 = 2;
        }
        v74 = _mm256_sub_ps(_ymm, _YMM7);
        v75 = v38 + 1088;
        do
        {
          v75 += 256i64;
          v76 = _mm256_add_ps(_YMM7, v51);
          *(__m256 *)(v75 - 320) = _mm256_add_ps(_mm256_mul_ps(v74, *(__m256 *)(32i64 * (v39 - 2) + v34)), _mm256_mul_ps(_YMM7, *(__m256 *)(32i64 * (v39 - 2) + v32)));
          v77 = _mm256_sub_ps(v74, v51);
          *(__m256 *)(v75 - 288) = _mm256_add_ps(_mm256_mul_ps(v77, *(__m256 *)(32i64 * (v39 - 1) + v34)), _mm256_mul_ps(v76, *(__m256 *)(32i64 * (v39 - 1) + v32)));
          v78 = _mm256_sub_ps(v77, v51);
          v79 = _mm256_sub_ps(v78, v51);
          v80 = _mm256_add_ps(v76, v51);
          *(__m256 *)(v75 - 256) = _mm256_add_ps(_mm256_mul_ps(v78, *(__m256 *)(32i64 * v39 + v34)), _mm256_mul_ps(v80, *(__m256 *)(32i64 * v39 + v32)));
          v81 = _mm256_add_ps(v80, v51);
          v82 = _mm256_add_ps(v81, v51);
          v83 = _mm256_sub_ps(v79, v51);
          *(__m256 *)(v75 - 224) = _mm256_add_ps(_mm256_mul_ps(v79, *(__m256 *)(32i64 * (v39 + 1) + v34)), _mm256_mul_ps(v81, *(__m256 *)(32i64 * (v39 + 1) + v32)));
          v84 = _mm256_sub_ps(v83, v51);
          v85 = _mm256_add_ps(v82, v51);
          *(__m256 *)(v75 - 192) = _mm256_add_ps(_mm256_mul_ps(v83, *(__m256 *)(32i64 * (v39 + 2) + v34)), _mm256_mul_ps(v82, *(__m256 *)(32i64 * (v39 + 2) + v32)));
          v86 = _mm256_sub_ps(v84, v51);
          v87 = _mm256_add_ps(v85, v51);
          *(__m256 *)(v75 - 160) = _mm256_add_ps(_mm256_mul_ps(v84, *(__m256 *)(32i64 * (v39 + 3) + v34)), _mm256_mul_ps(v85, *(__m256 *)(32i64 * (v39 + 3) + v32)));
          v88 = v39 + 5;
          v89 = 32i64 * (v39 + 4);
          v39 += 8;
          v90 = _mm256_add_ps(v87, v51);
          v91 = _mm256_sub_ps(v86, v51);
          _YMM7 = _mm256_add_ps(v90, v51);
          *(__m256 *)(v75 - 128) = _mm256_add_ps(_mm256_mul_ps(v86, *(__m256 *)(v89 + v34)), _mm256_mul_ps(v87, *(__m256 *)(v89 + v32)));
          v74 = _mm256_sub_ps(v91, v51);
          *(__m256 *)(v75 - 96) = _mm256_add_ps(_mm256_mul_ps(v91, *(__m256 *)(32i64 * v88 + v34)), _mm256_mul_ps(v90, *(__m256 *)(32i64 * v88 + v32)));
          --v52;
        }
        while ( v52 );
      }
      goto LABEL_65;
    }
LABEL_62:
    v92 = *(_DWORD **)(((unsigned __int64)v99 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10);
    v93 = v11;
    for ( i = (unsigned int)(v8 << 8); i; --i )
      *v92++ = *(_DWORD *)v93++;
LABEL_65:
    *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v99 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18) + 228i64) = **(_DWORD **)(((unsigned __int64)v99 & 0xFFFFFFFFFFFFFFE0ui64) + 0x38);
    Sys_ProfEndNamedEvent();
    return;
  }
  v95 = v10;
  v96 = (unsigned int)(channelCount << 8);
  v97 = v11;
  while ( v96 )
  {
    *v95++ = *v97++;
    --v96;
  }
}

/*
==============
OnePoleHPF_ProcessArray
==============
*/
void OnePoleHPF_ProcessArray(OnePoleFilter_t *p_state, const float *p_input, float *p_output, int sampleCount)
{
  float m_delay; 
  __int128 v5; 
  __m128 v6; 
  int v7; 
  __m128 v8; 
  __int128 v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  signed __int64 v14; 
  unsigned int v15; 
  __int64 v16; 
  __int128 v17; 
  __int128 v18; 
  float v19; 
  __int128 v20; 
  __int128 v21; 
  float v22; 
  __int128 v23; 
  __int128 v24; 
  float v25; 
  __int128 v26; 
  __int128 v27; 
  __int128 v28; 
  __int128 v29; 
  __int128 v30; 
  __int128 v31; 
  __int128 v32; 
  __int128 v33; 
  __int128 v34; 
  __int128 v35; 
  __int128 v36; 
  __int128 v37; 
  __int128 v38; 
  float v39; 
  __int128 v40; 
  signed __int64 v41; 
  __int64 v42; 
  float v43; 
  __int128 v44; 
  __int128 v45; 
  __int128 v46; 
  __int128 v47; 
  __int128 v48; 
  __int128 v49; 
  float currentVal; 
  float v51; 

  m_delay = p_state->m_delay;
  currentVal = p_state->m_a.currentVal;
  v5 = LODWORD(currentVal);
  v6 = (__m128)*(unsigned __int64 *)&p_state->m_a.A;
  v51 = p_state->m_b.currentVal;
  v7 = 0;
  v8 = (__m128)*(unsigned __int64 *)&p_state->m_b.A;
  v9 = LODWORD(v51);
  LODWORD(v10) = *(_QWORD *)&p_state->m_a.A;
  LODWORD(v11) = *(_QWORD *)&p_state->m_b.A;
  LODWORD(v12) = _mm_shuffle_ps(v6, v6, 85).m128_u32[0];
  LODWORD(v13) = _mm_shuffle_ps(v8, v8, 85).m128_u32[0];
  if ( sampleCount >= 4 )
  {
    v14 = (char *)p_input - (char *)p_output;
    v15 = ((unsigned int)(sampleCount - 4) >> 2) + 1;
    v16 = v15;
    v7 = 4 * v15;
    do
    {
      v17 = v5;
      *(float *)&v17 = (float)(*(float *)&v5 * v10) + v12;
      v18 = v17;
      v19 = *(float *)&v17 * *p_input;
      v20 = v9;
      *(float *)&v20 = (float)(*(float *)&v9 * v11) + v13;
      v21 = v20;
      v22 = v19 + (float)(*(float *)&v20 * m_delay);
      *p_output = *p_input - v22;
      v23 = v18;
      *(float *)&v23 = (float)((float)(*(float *)&v18 + 2.3283064e-10) * v10) + v12;
      v24 = v23;
      v25 = *(float *)((char *)p_output + v14 + 4);
      v26 = v21;
      *(float *)&v26 = (float)((float)(*(float *)&v21 + 2.3283064e-10) * v11) + v13;
      v27 = v26;
      *(float *)&v21 = (float)(v22 * *(float *)&v26) + (float)(*(float *)&v24 * v25);
      p_output[1] = v25 - *(float *)&v21;
      v28 = v24;
      *(float *)&v28 = *(float *)&v24 + 2.3283064e-10;
      *(float *)&v24 = *(float *)((char *)p_output + v14 + 8);
      *(float *)&v28 = (float)(*(float *)&v28 * v10) + v12;
      v29 = v28;
      v30 = v27;
      *(float *)&v30 = (float)((float)(*(float *)&v27 + 2.3283064e-10) * v11) + v13;
      v31 = v30;
      *(float *)&v21 = (float)(*(float *)&v21 * *(float *)&v30) + (float)(*(float *)&v29 * *(float *)&v24);
      v33 = v29;
      *(float *)&v33 = *(float *)&v29 + 2.3283064e-10;
      v32 = v33;
      v35 = v31;
      *(float *)&v35 = *(float *)&v31 + 2.3283064e-10;
      v34 = v35;
      v36 = v32;
      p_output[2] = *(float *)&v24 - *(float *)&v21;
      *(float *)&v36 = (float)(*(float *)&v32 * v10) + v12;
      v37 = v36;
      *(float *)&v31 = *(float *)((char *)p_output + v14 + 12);
      v38 = v34;
      v39 = (float)(*(float *)&v34 * v11) + v13;
      *(float *)&v38 = v39 + 2.3283064e-10;
      v9 = v38;
      m_delay = (float)(*(float *)&v21 * v39) + (float)(*(float *)&v37 * *(float *)&v31);
      p_output[3] = *(float *)&v31 - m_delay;
      p_output += 4;
      p_input += 4;
      v40 = v37;
      *(float *)&v40 = *(float *)&v37 + 2.3283064e-10;
      v5 = v40;
      --v16;
    }
    while ( v16 );
    currentVal = *(float *)&v37 + 2.3283064e-10;
    v51 = *(float *)&v9;
  }
  if ( v7 < sampleCount )
  {
    v41 = (char *)p_output - (char *)p_input;
    v42 = (unsigned int)(sampleCount - v7);
    do
    {
      v43 = *p_input++;
      v44 = v5;
      *(float *)&v44 = (float)(*(float *)&v5 * v10) + v12;
      v45 = v44;
      v46 = v9;
      *(float *)&v46 = (float)(*(float *)&v9 * v11) + v13;
      v47 = v46;
      v48 = v45;
      *(float *)&v48 = *(float *)&v45 + 2.3283064e-10;
      v5 = v48;
      m_delay = (float)(*(float *)&v45 * v43) + (float)(*(float *)&v47 * m_delay);
      *(float *)((char *)p_input + v41 - 4) = v43 - m_delay;
      v49 = v47;
      *(float *)&v49 = *(float *)&v47 + 2.3283064e-10;
      v9 = v49;
      --v42;
    }
    while ( v42 );
    currentVal = *(float *)&v5;
    v51 = *(float *)&v47 + 2.3283064e-10;
  }
  *(double *)&p_state->m_a.A = *(double *)v6.m128_u64;
  *(double *)&p_state->m_b.A = *(double *)v8.m128_u64;
  p_state->m_a.currentVal = currentVal;
  p_state->m_delay = m_delay;
  p_state->m_b.currentVal = v51;
}

/*
==============
OnePoleHPF_ProcessArrayStereoBlock
==============
*/
void OnePoleHPF_ProcessArrayStereoBlock(OnePoleFilter_t *p_state, const float *p_input, float *p_output, int sampleCount)
{
  float m_delay; 
  float m_delay2; 
  __m128 v6; 
  __int64 v7; 
  const float *v8; 
  float *v9; 
  __int128 v10; 
  int v11; 
  __int128 v12; 
  float v13; 
  float v14; 
  float v15; 
  signed __int64 v16; 
  unsigned int v17; 
  __int64 v18; 
  __int128 v19; 
  __int128 v20; 
  float v21; 
  __int128 v22; 
  __int128 v23; 
  float v24; 
  float v25; 
  __int128 v26; 
  __int128 v27; 
  float v28; 
  __int128 v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  __int128 v34; 
  __int128 v35; 
  __int128 v36; 
  __int128 v37; 
  __int128 v38; 
  __int128 v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  __int128 v44; 
  __int128 v45; 
  __int128 v46; 
  float v47; 
  __int128 v48; 
  __int128 v49; 
  signed __int64 v50; 
  signed __int64 v51; 
  signed __int64 v52; 
  __int64 v53; 
  float v54; 
  __int128 v55; 
  __int128 v56; 
  __int128 v57; 
  __int128 v58; 
  float v59; 
  __int128 v60; 
  __int128 v61; 
  float currentVal; 
  float v63; 
  unsigned __int64 v64; 
  double v65; 

  m_delay = p_state->m_delay;
  m_delay2 = p_state->m_delay2;
  v6 = (__m128)*(unsigned __int64 *)&p_state->m_a.A;
  v7 = sampleCount;
  v64 = *(_QWORD *)&p_state->m_a.A;
  v8 = &p_input[sampleCount];
  currentVal = p_state->m_a.currentVal;
  v9 = &p_output[v7];
  v10 = LODWORD(currentVal);
  v63 = p_state->m_b.currentVal;
  v11 = 0;
  v12 = LODWORD(v63);
  LODWORD(v13) = *(_QWORD *)&p_state->m_b.A;
  v65 = *(double *)&p_state->m_b.A;
  LODWORD(v14) = _mm_shuffle_ps(v6, v6, 85).m128_u32[0];
  LODWORD(v15) = _mm_shuffle_ps((__m128)*(unsigned __int64 *)&v65, (__m128)*(unsigned __int64 *)&v65, 85).m128_u32[0];
  if ( (int)v7 >= 4 )
  {
    v16 = (char *)p_input - (char *)p_output;
    v17 = ((unsigned int)(v7 - 4) >> 2) + 1;
    v18 = v17;
    v11 = 4 * v17;
    do
    {
      v19 = v10;
      *(float *)&v19 = (float)(*(float *)&v10 * *(float *)&v64) + v14;
      v20 = v19;
      v21 = *(float *)&v19 * *p_input;
      v22 = v12;
      *(float *)&v22 = (float)(*(float *)&v12 * v13) + v15;
      v23 = v22;
      v24 = v21 + (float)(*(float *)&v22 * m_delay);
      *p_output = *p_input - v24;
      v25 = (float)(*(float *)&v20 * *v8) + (float)(*(float *)&v22 * m_delay2);
      *v9 = *v8 - v25;
      v26 = v20;
      *(float *)&v26 = (float)((float)(*(float *)&v20 + 2.3283064e-10) * *(float *)&v64) + v14;
      v27 = v26;
      v28 = *(float *)((char *)p_output + v16 + 4);
      v29 = v23;
      *(float *)&v29 = (float)((float)(*(float *)&v23 + 2.3283064e-10) * v13) + v15;
      v30 = (float)(*(float *)&v27 * v28) + (float)(*(float *)&v29 * v24);
      p_output[1] = v28 - v30;
      v31 = v8[1];
      v32 = (float)(*(float *)&v27 * v31) + (float)(*(float *)&v29 * v25);
      v9[1] = v31 - v32;
      v33 = *(float *)((char *)p_output + v16 + 8);
      *(float *)&v29 = (float)((float)(*(float *)&v29 + 2.3283064e-10) * v13) + v15;
      v34 = v29;
      v36 = v27;
      *(float *)&v36 = *(float *)&v27 + 2.3283064e-10;
      v35 = v36;
      v38 = v34;
      *(float *)&v38 = *(float *)&v34 + 2.3283064e-10;
      v37 = v38;
      v39 = v35;
      *(float *)&v39 = (float)(*(float *)&v35 * *(float *)&v64) + v14;
      v40 = (float)(*(float *)&v39 * v33) + (float)(*(float *)&v34 * v30);
      p_output[2] = v33 - v40;
      v41 = v8[2];
      v42 = (float)(*(float *)&v39 * v41) + (float)(*(float *)&v34 * v32);
      v9[2] = v41 - v42;
      v43 = *(float *)((char *)p_output + v16 + 12);
      *(float *)&v39 = (float)((float)(*(float *)&v39 + 2.3283064e-10) * *(float *)&v64) + v14;
      v44 = v39;
      v45 = v37;
      *(float *)&v45 = (float)(*(float *)&v37 * v13) + v15;
      v46 = v45;
      m_delay = (float)(*(float *)&v44 * v43) + (float)(*(float *)&v45 * v40);
      p_output[3] = v43 - m_delay;
      v47 = v8[3];
      m_delay2 = (float)(*(float *)&v44 * v47) + (float)(*(float *)&v45 * v42);
      v9[3] = v47 - m_delay2;
      v9 += 4;
      p_output += 4;
      v8 += 4;
      p_input += 4;
      v48 = v44;
      *(float *)&v48 = *(float *)&v44 + 2.3283064e-10;
      v10 = v48;
      v49 = v46;
      *(float *)&v49 = *(float *)&v46 + 2.3283064e-10;
      v12 = v49;
      --v18;
    }
    while ( v18 );
    v6.m128_u64[0] = v64;
    currentVal = *(float *)&v10;
    v63 = *(float *)&v46 + 2.3283064e-10;
  }
  if ( v11 < (int)v7 )
  {
    v50 = (char *)p_input - (char *)p_output;
    v51 = (char *)v8 - (char *)p_output;
    v52 = (char *)v9 - (char *)p_output;
    v53 = (unsigned int)(v7 - v11);
    do
    {
      v54 = *(float *)((char *)p_output++ + v50);
      v55 = v10;
      *(float *)&v55 = (float)(*(float *)&v10 * *(float *)&v64) + v14;
      v56 = v55;
      v57 = v12;
      *(float *)&v57 = (float)(*(float *)&v12 * v13) + v15;
      v58 = v57;
      m_delay = (float)(*(float *)&v56 * v54) + (float)(*(float *)&v57 * m_delay);
      *(p_output - 1) = v54 - m_delay;
      v59 = *(float *)((char *)p_output + v51 - 4);
      m_delay2 = (float)(*(float *)&v56 * v59) + (float)(*(float *)&v57 * m_delay2);
      *(float *)((char *)p_output + v52 - 4) = v59 - m_delay2;
      v60 = v56;
      *(float *)&v60 = *(float *)&v56 + 2.3283064e-10;
      v10 = v60;
      v61 = v58;
      *(float *)&v61 = *(float *)&v58 + 2.3283064e-10;
      v12 = v61;
      --v53;
    }
    while ( v53 );
    currentVal = *(float *)&v10;
    v63 = *(float *)&v58 + 2.3283064e-10;
  }
  *(double *)&p_state->m_a.A = *(double *)v6.m128_u64;
  p_state->m_a.currentVal = currentVal;
  *(double *)&p_state->m_b.A = v65;
  p_state->m_delay = m_delay;
  p_state->m_delay2 = m_delay2;
  p_state->m_b.currentVal = v63;
}

/*
==============
OnePoleLPF_ProcessArray
==============
*/
void OnePoleLPF_ProcessArray(OnePoleFilter_t *p_state, const float *p_input, float *p_output, int sampleCount)
{
  float m_delay; 
  __m128 v5; 
  __int128 v6; 
  int v7; 
  __m128 v8; 
  __int128 v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  signed __int64 v14; 
  unsigned int v15; 
  __int64 v16; 
  __int128 v17; 
  __int128 v18; 
  float v19; 
  __int128 v20; 
  __int128 v21; 
  float v22; 
  __int128 v23; 
  __int128 v24; 
  __int128 v25; 
  __int128 v26; 
  float v27; 
  __int128 v28; 
  __int128 v29; 
  __int128 v30; 
  float v31; 
  __int128 v32; 
  float v33; 
  __int128 v34; 
  __int128 v35; 
  __int128 v36; 
  __int128 v37; 
  __int128 v38; 
  __int128 v39; 
  signed __int64 v40; 
  __int64 v41; 
  __int128 v42; 
  __int128 v43; 
  __int128 v44; 
  __int128 v45; 
  __int128 v46; 
  __int128 v47; 
  float currentVal; 
  float v49; 

  m_delay = p_state->m_delay;
  v5 = (__m128)*(unsigned __int64 *)&p_state->m_a.A;
  currentVal = p_state->m_a.currentVal;
  v6 = LODWORD(currentVal);
  v49 = p_state->m_b.currentVal;
  v7 = 0;
  v8 = (__m128)*(unsigned __int64 *)&p_state->m_b.A;
  v9 = LODWORD(v49);
  LODWORD(v10) = *(_QWORD *)&p_state->m_a.A;
  LODWORD(v11) = *(_QWORD *)&p_state->m_b.A;
  LODWORD(v12) = _mm_shuffle_ps(v5, v5, 85).m128_u32[0];
  LODWORD(v13) = _mm_shuffle_ps(v8, v8, 85).m128_u32[0];
  if ( sampleCount >= 4 )
  {
    v14 = (char *)p_input - (char *)p_output;
    v15 = ((unsigned int)(sampleCount - 4) >> 2) + 1;
    v16 = v15;
    v7 = 4 * v15;
    do
    {
      v17 = v6;
      *(float *)&v17 = (float)(*(float *)&v6 * v10) + v12;
      v18 = v17;
      v19 = *(float *)&v17 * *p_input;
      v20 = v9;
      *(float *)&v20 = (float)(*(float *)&v9 * v11) + v13;
      v21 = v20;
      v22 = v19 + (float)(*(float *)&v20 * m_delay);
      *p_output = v22;
      v23 = v18;
      *(float *)&v23 = (float)((float)(*(float *)&v18 + 2.3283064e-10) * v10) + v12;
      v24 = v23;
      v25 = v21;
      *(float *)&v25 = (float)((float)(*(float *)&v21 + 2.3283064e-10) * v11) + v13;
      v26 = v25;
      v27 = (float)(*(float *)&v24 * *(float *)((char *)p_output + v14 + 4)) + (float)(v22 * *(float *)&v25);
      p_output[1] = v27;
      v28 = v24;
      *(float *)&v28 = (float)((float)(*(float *)&v24 + 2.3283064e-10) * v10) + v12;
      v29 = v28;
      v30 = v26;
      v31 = (float)((float)(*(float *)&v26 + 2.3283064e-10) * v11) + v13;
      *(float *)&v30 = v31 + 2.3283064e-10;
      v32 = v30;
      v33 = (float)(*(float *)&v29 * *(float *)((char *)p_output + v14 + 8)) + (float)(v27 * v31);
      v34 = v29;
      *(float *)&v34 = (float)((float)(*(float *)&v29 + 2.3283064e-10) * v10) + v12;
      v35 = v34;
      v36 = v32;
      p_output[2] = v33;
      *(float *)&v36 = (float)(*(float *)&v32 * v11) + v13;
      v37 = v36;
      m_delay = (float)(*(float *)&v35 * *(float *)((char *)p_output + v14 + 12)) + (float)(v33 * *(float *)&v36);
      p_output[3] = m_delay;
      p_output += 4;
      p_input += 4;
      v38 = v35;
      *(float *)&v38 = *(float *)&v35 + 2.3283064e-10;
      v6 = v38;
      v39 = v37;
      *(float *)&v39 = *(float *)&v37 + 2.3283064e-10;
      v9 = v39;
      --v16;
    }
    while ( v16 );
    currentVal = *(float *)&v6;
    v49 = *(float *)&v37 + 2.3283064e-10;
  }
  if ( v7 < sampleCount )
  {
    v40 = (char *)p_output - (char *)p_input;
    v41 = (unsigned int)(sampleCount - v7);
    do
    {
      ++p_input;
      v42 = v6;
      *(float *)&v42 = (float)(*(float *)&v6 * v10) + v12;
      v43 = v42;
      v44 = v9;
      *(float *)&v44 = (float)(*(float *)&v9 * v11) + v13;
      v45 = v44;
      v46 = v43;
      *(float *)&v46 = *(float *)&v43 + 2.3283064e-10;
      v6 = v46;
      m_delay = (float)(*(float *)&v43 * *(p_input - 1)) + (float)(*(float *)&v45 * m_delay);
      *(float *)((char *)p_input + v40 - 4) = m_delay;
      v47 = v45;
      *(float *)&v47 = *(float *)&v45 + 2.3283064e-10;
      v9 = v47;
      --v41;
    }
    while ( v41 );
    currentVal = *(float *)&v6;
    v49 = *(float *)&v45 + 2.3283064e-10;
  }
  *(double *)&p_state->m_a.A = *(double *)v5.m128_u64;
  *(double *)&p_state->m_b.A = *(double *)v8.m128_u64;
  p_state->m_a.currentVal = currentVal;
  p_state->m_delay = m_delay;
  p_state->m_b.currentVal = v49;
}

/*
==============
OnePoleLPF_ProcessArrayStereoBlock
==============
*/
void OnePoleLPF_ProcessArrayStereoBlock(OnePoleFilter_t *p_state, const float *p_input, float *p_output, int sampleCount)
{
  float m_delay; 
  float m_delay2; 
  __int128 v6; 
  __int64 v7; 
  __m128 v8; 
  int v9; 
  const float *v10; 
  float *v11; 
  __m128 v12; 
  __int128 v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  signed __int64 v18; 
  unsigned int v19; 
  __int64 v20; 
  __int128 v21; 
  __int128 v22; 
  float v23; 
  __int128 v24; 
  __int128 v25; 
  float v26; 
  float v27; 
  __int128 v28; 
  __int128 v29; 
  float v30; 
  __int128 v31; 
  __int128 v32; 
  float v33; 
  float v34; 
  __int128 v35; 
  __int128 v36; 
  __int128 v37; 
  __int128 v38; 
  __int128 v39; 
  __int128 v40; 
  __int128 v41; 
  __int128 v42; 
  float v43; 
  float v44; 
  __int128 v45; 
  __int128 v46; 
  __int128 v47; 
  __int128 v48; 
  __int128 v49; 
  __int128 v50; 
  signed __int64 v51; 
  signed __int64 v52; 
  signed __int64 v53; 
  __int64 v54; 
  __int128 v55; 
  __int128 v56; 
  float v57; 
  __int128 v58; 
  __int128 v59; 
  __int128 v60; 
  __int128 v61; 
  float currentVal; 
  float v63; 

  m_delay = p_state->m_delay;
  m_delay2 = p_state->m_delay2;
  currentVal = p_state->m_a.currentVal;
  v6 = LODWORD(currentVal);
  v7 = sampleCount;
  v8 = (__m128)*(unsigned __int64 *)&p_state->m_a.A;
  v63 = p_state->m_b.currentVal;
  v9 = 0;
  v10 = &p_input[sampleCount];
  v11 = &p_output[v7];
  v12 = (__m128)*(unsigned __int64 *)&p_state->m_b.A;
  v13 = LODWORD(v63);
  LODWORD(v14) = *(_QWORD *)&p_state->m_a.A;
  LODWORD(v15) = *(_QWORD *)&p_state->m_b.A;
  LODWORD(v16) = _mm_shuffle_ps(v8, v8, 85).m128_u32[0];
  LODWORD(v17) = _mm_shuffle_ps(v12, v12, 85).m128_u32[0];
  if ( (int)v7 >= 4 )
  {
    v18 = (char *)p_input - (char *)p_output;
    v19 = ((unsigned int)(v7 - 4) >> 2) + 1;
    v20 = v19;
    v9 = 4 * v19;
    do
    {
      v21 = v6;
      *(float *)&v21 = (float)(*(float *)&v6 * v14) + v16;
      v22 = v21;
      v23 = *(float *)&v21 * *p_input;
      v24 = v13;
      *(float *)&v24 = (float)(*(float *)&v13 * v15) + v17;
      v25 = v24;
      v26 = v23 + (float)(*(float *)&v24 * m_delay);
      *p_output = v26;
      v27 = (float)(*(float *)&v22 * *v10) + (float)(*(float *)&v24 * m_delay2);
      *v11 = v27;
      v28 = v22;
      *(float *)&v28 = (float)((float)(*(float *)&v22 + 2.3283064e-10) * v14) + v16;
      v29 = v28;
      v30 = *(float *)&v28 * *(float *)((char *)p_output + v18 + 4);
      v31 = v25;
      *(float *)&v31 = (float)((float)(*(float *)&v25 + 2.3283064e-10) * v15) + v17;
      v32 = v31;
      v33 = v30 + (float)(*(float *)&v31 * v26);
      p_output[1] = v33;
      v34 = (float)(*(float *)&v29 * v10[1]) + (float)(*(float *)&v31 * v27);
      v11[1] = v34;
      v35 = v29;
      *(float *)&v35 = (float)(*(float *)&v29 + 2.3283064e-10) * v14;
      v36 = v35;
      v38 = v32;
      *(float *)&v38 = *(float *)&v32 + 2.3283064e-10;
      v37 = v38;
      v40 = v36;
      *(float *)&v40 = *(float *)&v36 + v16;
      v39 = v40;
      v41 = v37;
      *(float *)&v41 = (float)(*(float *)&v37 * v15) + v17;
      v42 = v41;
      v43 = (float)((float)(*(float *)&v36 + v16) * *(float *)((char *)p_output + v18 + 8)) + (float)(*(float *)&v41 * v33);
      p_output[2] = v43;
      v44 = (float)(*(float *)&v39 * v10[2]) + (float)(*(float *)&v41 * v34);
      v11[2] = v44;
      v45 = v39;
      *(float *)&v45 = (float)((float)(*(float *)&v39 + 2.3283064e-10) * v14) + v16;
      v46 = v45;
      *(float *)&v36 = *(float *)&v45 * *(float *)((char *)p_output + v18 + 12);
      v47 = v42;
      *(float *)&v47 = (float)((float)(*(float *)&v42 + 2.3283064e-10) * v15) + v17;
      v48 = v47;
      m_delay = *(float *)&v36 + (float)(*(float *)&v47 * v43);
      p_output[3] = m_delay;
      m_delay2 = (float)(*(float *)&v46 * v10[3]) + (float)(*(float *)&v47 * v44);
      v11[3] = m_delay2;
      v11 += 4;
      p_output += 4;
      v10 += 4;
      p_input += 4;
      v49 = v46;
      *(float *)&v49 = *(float *)&v46 + 2.3283064e-10;
      v6 = v49;
      v50 = v48;
      *(float *)&v50 = *(float *)&v48 + 2.3283064e-10;
      v13 = v50;
      --v20;
    }
    while ( v20 );
    currentVal = *(float *)&v6;
    v63 = *(float *)&v48 + 2.3283064e-10;
  }
  if ( v9 < (int)v7 )
  {
    v51 = (char *)p_input - (char *)p_output;
    v52 = (char *)v10 - (char *)p_output;
    v53 = (char *)v11 - (char *)p_output;
    v54 = (unsigned int)(v7 - v9);
    do
    {
      ++p_output;
      v55 = v6;
      *(float *)&v55 = (float)(*(float *)&v6 * v14) + v16;
      v56 = v55;
      v57 = *(float *)&v55 * *(float *)((char *)p_output + v51 - 4);
      v58 = v13;
      *(float *)&v58 = (float)(*(float *)&v13 * v15) + v17;
      v59 = v58;
      m_delay = v57 + (float)(*(float *)&v58 * m_delay);
      *(p_output - 1) = m_delay;
      m_delay2 = (float)(*(float *)&v56 * *(float *)((char *)p_output + v52 - 4)) + (float)(*(float *)&v58 * m_delay2);
      *(float *)((char *)p_output + v53 - 4) = m_delay2;
      v60 = v56;
      *(float *)&v60 = *(float *)&v56 + 2.3283064e-10;
      v6 = v60;
      v61 = v59;
      *(float *)&v61 = *(float *)&v59 + 2.3283064e-10;
      v13 = v61;
      --v54;
    }
    while ( v54 );
    currentVal = *(float *)&v6;
    v63 = *(float *)&v59 + 2.3283064e-10;
  }
  *(double *)&p_state->m_a.A = *(double *)v8.m128_u64;
  *(double *)&p_state->m_b.A = *(double *)v12.m128_u64;
  p_state->m_a.currentVal = currentVal;
  p_state->m_delay = m_delay;
  p_state->m_delay2 = m_delay2;
  p_state->m_b.currentVal = v63;
}

