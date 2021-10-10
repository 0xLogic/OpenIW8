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
void OnePole_Init(OnePoleFilter_t *p_state, float fadetime, float freq, float sampleRate)
{
  float v5; 
  double v6; 
  float v7; 

  v5 = expf_0(-0.000083333332 / fadetime);
  p_state->m_a.A = v5;
  p_state->m_b.A = v5;
  v6 = I_fclamp(freq, 0.0, sampleRate * 0.5);
  *(float *)&v6 = expf_0((float)(*(float *)&v6 * -6.2831855) / sampleRate);
  v7 = 1.0 - p_state->m_a.A;
  p_state->m_a.currentVal = 1.0 - *(float *)&v6;
  p_state->m_a.precalcB = v7 * (float)(1.0 - *(float *)&v6);
  p_state->m_b.precalcB = (float)(1.0 - p_state->m_b.A) * *(float *)&v6;
  p_state->m_b.currentVal = *(float *)&v6;
  *(_QWORD *)&p_state->m_delay = 0i64;
}

/*
==============
OnePole_SetFrequency
==============
*/
void OnePole_SetFrequency(OnePoleFilter_t *p_state, float freq, float sampleRate, bool setImmediate)
{
  double v6; 
  float v7; 
  float v8; 
  float v9; 

  v6 = I_fclamp(freq, 0.0, sampleRate * 0.5);
  v7 = expf_0((float)(*(float *)&v6 * -6.2831855) / sampleRate);
  v8 = 1.0 - v7;
  if ( setImmediate )
  {
    v9 = 1.0 - p_state->m_a.A;
    p_state->m_a.currentVal = v8;
    p_state->m_a.precalcB = v9 * v8;
    p_state->m_b.precalcB = (float)(1.0 - p_state->m_b.A) * v7;
    p_state->m_b.currentVal = v7;
    *(_QWORD *)&p_state->m_delay = 0i64;
  }
  else
  {
    p_state->m_a.precalcB = (float)(1.0 - p_state->m_a.A) * (float)(1.0 - v7);
    p_state->m_b.precalcB = (float)(1.0 - p_state->m_b.A) * v7;
  }
}

/*
==============
SND_ApplyEQBankParams
==============
*/
void SND_ApplyEQBankParams(SndEQBank *p_bank, const SndEQBankParams *p_bankParams)
{
  float *p_q; 
  float *p_gain; 
  char v5; 
  __int64 v6; 
  __int64 v7; 
  char v8; 
  int v9; 

  p_q = &p_bankParams->params[0][0].q;
  p_gain = &p_bank->eq[0][0].curParams.gain;
  v5 = 0;
  v6 = 2i64;
  do
  {
    v7 = 2i64;
    do
    {
      v8 = *((_BYTE *)p_q + 4);
      if ( v8 )
      {
        if ( v8 != *((_BYTE *)p_gain + 12) || p_gain[1] != *(p_q - 1) || *p_gain != *(p_q - 2) || p_gain[2] != *p_q || *((_DWORD *)p_q - 3) != *((_DWORD *)p_gain - 1) )
        {
          *(_OWORD *)(p_gain - 1) = *(_OWORD *)(p_q - 3);
          p_gain[3] = p_q[1];
          v9 = *((_DWORD *)p_q - 3);
          if ( (!v9 || v9 == 3) && *(p_q - 1) >= 24000.0 )
          {
            v8 = 0;
            goto LABEL_16;
          }
          *(_QWORD *)(p_gain - 5) = 0i64;
          *(_QWORD *)(p_gain - 3) = 0i64;
          SND_CalcBiquadCoefficientsAtRate((SndBiquadCoeffs *const)p_gain - 2, *((SND_EQTYPE *)p_q - 3), *(p_q - 1), *p_q, *(p_q - 2), 48000.0);
          v8 = *((_BYTE *)p_q + 4);
        }
        v5 |= v8;
      }
      else
      {
        v8 = 0;
      }
LABEL_16:
      *((_BYTE *)p_gain + 12) = v8;
      p_q += 5;
      p_gain += 14;
      --v7;
    }
    while ( v7 );
    --v6;
  }
  while ( v6 );
  p_bank->isAnyEqBandEnabled = v5;
}

/*
==============
SND_ApplyFilterHPFFrequency
==============
*/
void SND_ApplyFilterHPFFrequency(SndFilter *filter, const float freq)
{
  if ( !filter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\com_snd_biquad_eq.cpp", 284, ASSERT_TYPE_ASSERT, "(filter)", (const char *)&queryFormat, "filter") )
    __debugbreak();
  if ( freq != filter->curFreq )
  {
    filter->curFreq = freq;
    SND_CalcBiquadCoefficientsAtRate(&filter->coeffs, SND_EQTYPE_HIGHPASS, freq, 0.70710677, 1.0, 48000.0);
  }
}

/*
==============
SND_ApplyFilterLPFFrequency
==============
*/
void SND_ApplyFilterLPFFrequency(SndFilter *filter, const float freq)
{
  if ( !filter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\com_snd_biquad_eq.cpp", 272, ASSERT_TYPE_ASSERT, "(filter)", (const char *)&queryFormat, "filter") )
    __debugbreak();
  if ( freq != filter->curFreq )
  {
    filter->curFreq = freq;
    SND_CalcBiquadCoefficientsAtRate(&filter->coeffs, SND_EQTYPE_FIRST, freq, 0.70710677, 1.0, 48000.0);
  }
}

/*
==============
SND_CalcBiquadCoefficientsAtRate
==============
*/
void SND_CalcBiquadCoefficientsAtRate(SndBiquadCoeffs *const coeffs, SND_EQTYPE type, float freq, float q, const float gain, const float rate)
{
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  double v12; 
  float v13; 
  float v14; 
  double v15; 
  int v16; 
  float v17; 
  __int32 v18; 
  __int32 v19; 
  __int32 v20; 
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

  if ( !coeffs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\com_snd_biquad_eq.cpp", 18, ASSERT_TYPE_ASSERT, "(coeffs)", (const char *)&queryFormat, "coeffs") )
    __debugbreak();
  I_fclamp(freq, 0.0, 0.5 * rate);
  v12 = j___libm_sse2_sincosf_(v9, v8, v10, v11);
  v13 = *(float *)&v12;
  LODWORD(v14) = _mm_shuffle_ps((__m128)*(unsigned __int64 *)&v12, (__m128)*(unsigned __int64 *)&v12, 1).m128_u32[0];
  v15 = I_fclamp(q, 0.001, 1.0);
  v16 = _xmm;
  v17 = (float)(0.5 / *(float *)&v15) * v13;
  if ( type == SND_EQTYPE_FIRST )
  {
    v22 = 1.0 - v14;
    v21 = (float)(1.0 - v14) * 0.5;
    goto LABEL_15;
  }
  v18 = type - 1;
  if ( !v18 )
  {
    v21 = (float)(v14 + 1.0) * 0.5;
    LODWORD(v22) = COERCE_UNSIGNED_INT(v14 + 1.0) ^ _xmm;
LABEL_15:
    v25 = v14 * -2.0;
    v24 = v17 + 1.0;
    v26 = 1.0 - v17;
    v23 = v21;
    goto LABEL_16;
  }
  v19 = v18 - 1;
  if ( v19 )
  {
    v20 = v19 - 1;
    if ( v20 )
    {
      if ( v20 != 1 )
      {
        v21 = FLOAT_1_0;
        v22 = 0.0;
        v23 = 0.0;
        v24 = FLOAT_1_0;
        v25 = 0.0;
        v26 = 0.0;
        goto LABEL_19;
      }
      v27 = powf_0(10.0, gain * 0.025);
      v22 = v14 * -2.0;
      v28 = v27 * v17;
      v29 = v17 / v27;
      v24 = v29 + 1.0;
      v26 = 1.0 - v29;
      v21 = v28 + 1.0;
      v23 = 1.0 - v28;
      v25 = v14 * -2.0;
    }
    else
    {
      v30 = powf_0(10.0, gain * 0.025);
      v31 = (float)(fsqrt(v30) * v17) * 2.0;
      v32 = (float)(v30 - 1.0) * v14;
      v33 = v32 + (float)(v30 + 1.0);
      v21 = (float)(v33 + v31) * v30;
      v34 = (float)(v30 + 1.0) * v14;
      v22 = (float)((float)(v34 + (float)(v30 - 1.0)) * v30) * -2.0;
      v35 = (float)(v30 + 1.0) - v32;
      v23 = (float)(v33 - v31) * v30;
      v25 = (float)((float)(v30 - 1.0) - v34) * 2.0;
      v24 = v35 + v31;
      v26 = v35 - v31;
      v16 = _xmm;
    }
  }
  else
  {
    v36 = powf_0(10.0, gain * 0.025);
    v37 = (float)(fsqrt(v36) * v17) * 2.0;
    v38 = (float)(v36 - 1.0) * v14;
    v39 = (float)(v36 + 1.0) - v38;
    v40 = (float)(v36 + 1.0) * v14;
    v21 = (float)(v39 + v37) * v36;
    v22 = (float)((float)((float)(v36 - 1.0) - v40) * v36) * 2.0;
    v41 = v38 + (float)(v36 + 1.0);
    v23 = (float)(v39 - v37) * v36;
    v24 = v41 + v37;
    v26 = v41 - v37;
    v16 = _xmm;
    v25 = (float)((float)(v36 - 1.0) * -2.0) - (float)(v40 * 2.0);
  }
LABEL_16:
  if ( v24 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\com_snd_biquad_eq.cpp", 119, ASSERT_TYPE_ASSERT, "( ( a[0] > 0 ) )", "( a[0] ) = %g", v24) )
    __debugbreak();
LABEL_19:
  coeffs->a0 = (float)(1.0 / v24) * v21;
  coeffs->a1 = (float)(1.0 / v24) * v22;
  coeffs->a2 = (float)(1.0 / v24) * v23;
  coeffs->a4 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(1.0 / v24) * v26) ^ v16);
  coeffs->a3 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(1.0 / v24) * v25) ^ v16);
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
  SndEqParams (*params)[2]; 
  __int64 v2; 
  __int64 v4; 
  __int128 v5; 
  int v6; 

  params = p_params->params;
  *((float *)&v5 + 1) = FLOAT_1_0;
  *((float *)&v5 + 3) = FLOAT_1_0;
  *((float *)&v5 + 2) = FLOAT_24000_0;
  LODWORD(v5) = 0;
  v2 = 2i64;
  LOBYTE(v6) = 0;
  do
  {
    v4 = 2i64;
    do
    {
      *(_OWORD *)params = v5;
      *(_DWORD *)&(*params)[0].enabled = v6;
      params = (SndEqParams (*)[2])((char *)params + 20);
      --v4;
    }
    while ( v4 );
    --v2;
  }
  while ( v2 );
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

