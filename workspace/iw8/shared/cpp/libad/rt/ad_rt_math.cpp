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
void AD_CalcBiquadCoefficientsAtRate(AD_BiquadCoeffs *const coeffs, __int64 type, const float freqIn, const float qIn, const float gain, const unsigned int rate)
{
  __int64 v6; 
  __int64 v7; 
  unsigned int v9; 
  float v11; 
  __int128 v13; 
  float v15; 
  __int128 v18; 
  float v20; 
  float v22; 
  __m128 v23; 
  float v24; 
  float v25; 
  double v26; 
  float v27; 
  float v28; 
  float v29; 
  double v30; 
  float v31; 
  double v32; 
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
  double v49; 
  double v50; 
  double v51; 
  double v52; 
  double v53; 

  v9 = type;
  if ( !coeffs && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_math.cpp", 23, ASSERT_TYPE_ASSERT, "coeffs", "coeffs") )
    __debugbreak();
  v11 = FLOAT_1_0;
  v13 = 0i64;
  *(float *)&v13 = freqIn;
  _XMM3 = v13;
  __asm { vmaxss  xmm3, xmm3, xmm2 }
  v15 = (float)rate;
  __asm { vminss  xmm3, xmm3, xmm2 }
  v18 = 0i64;
  *(float *)&v18 = qIn;
  _XMM9 = v18;
  __asm { vmaxss  xmm9, xmm9, xmm1 }
  v20 = (float)(*(float *)&_XMM3 / v15) * 6.2831855;
  __asm { vminss  xmm9, xmm9, xmm1 }
  v23.m128_u64[1] = *((_QWORD *)&_XMM3 + 1);
  v22 = 0.0;
  *(double *)v23.m128_u64 = j___libm_sse2_sincosf_(coeffs, type, v6, v7);
  v24 = v23.m128_f32[0];
  LODWORD(v25) = _mm_shuffle_ps(v23, v23, 1).m128_u32[0];
  if ( v9 <= 1 )
  {
    if ( COERCE_FLOAT(v23.m128_i32[0] & _xmm) <= 0.0000152879 )
    {
      v27 = 0.0;
      v28 = 0.0;
      v29 = 0.0;
      goto LABEL_22;
    }
    v30 = AD_ScrutinizeSample((float)((float)(*(float *)&_XMM9 * 0.34657359) * v20) / v23.m128_f32[0]);
    *(float *)&v30 = sinhf_0(*(float *)&v30);
    v26 = AD_ScrutinizeSample(*(const float *)&v30);
  }
  else
  {
    *(float *)&v26 = 0.5 / *(float *)&_XMM9;
  }
  v31 = v24 * *(float *)&v26;
  v32 = AD_ScrutinizeSample(v24 * *(float *)&v26);
  switch ( v9 )
  {
    case 0u:
      v33 = 1.0 - v25;
      v34 = (float)(1.0 - v25) * 0.5;
      goto LABEL_11;
    case 1u:
      LODWORD(v33) = COERCE_UNSIGNED_INT(v25 + 1.0) ^ _xmm;
      v34 = (float)(v25 + 1.0) * 0.5;
LABEL_11:
      v35 = v25 * -2.0;
      v36 = v31 + 1.0;
      v37 = v34;
      v22 = 1.0 - v31;
      goto LABEL_21;
    case 2u:
      v38 = powf_0(10.0, gain * 0.025);
      v39 = (float)(fsqrt(v38) * v31) * 2.0;
      v40 = (float)(v38 + 1.0) - (float)((float)(v38 - 1.0) * v25);
      v34 = (float)(v40 + v39) * v38;
      v41 = (float)(v38 + 1.0) + (float)((float)(v38 - 1.0) * v25);
      v42 = v40 - v39;
      v33 = (float)((float)((float)(v38 - 1.0) - (float)((float)(v38 + 1.0) * v25)) * v38) * 2.0;
      v35 = (float)((float)(v38 - 1.0) * -2.0) - (float)((float)((float)(v38 + 1.0) * v25) * 2.0);
      v36 = v41 + v39;
      v37 = v42 * v38;
      v22 = v41 - v39;
      goto LABEL_21;
    case 3u:
      v43 = powf_0(10.0, gain * 0.025);
      v44 = (float)(fsqrt(v43) * v31) * 2.0;
      v45 = (float)(v43 + 1.0) * v25;
      v46 = (float)(v43 - 1.0) * v25;
      v34 = (float)((float)((float)(v43 + 1.0) + v46) + v44) * v43;
      v33 = (float)((float)((float)(v43 - 1.0) + v45) * v43) * -2.0;
      v35 = (float)((float)(v43 - 1.0) - v45) * 2.0;
      v47 = (float)(v43 + 1.0) - v46;
      v36 = v47 + v44;
      v37 = (float)((float)((float)(v43 + 1.0) + v46) - v44) * v43;
      v22 = v47 - v44;
      goto LABEL_21;
    case 4u:
      v48 = powf_0(10.0, gain * 0.025);
      v33 = v25 * -2.0;
      v34 = (float)(v31 * v48) + 1.0;
      v36 = (float)(v31 / v48) + 1.0;
      v37 = 1.0 - (float)(v31 * v48);
      v22 = 1.0 - (float)(v31 / v48);
      v35 = v25 * -2.0;
      goto LABEL_21;
    case 5u:
      LODWORD(v37) = LODWORD(v32) ^ _xmm;
      v35 = v25 * -2.0;
      v34 = *(float *)&v32;
      v36 = *(float *)&v32 + 1.0;
      v22 = 1.0 - *(float *)&v32;
      goto LABEL_20;
    default:
      AD_LogFunc("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_math.cpp", "145", (const AD_LogCategory)5, "Unhandled eq type");
      if ( (unsigned int)AD_GetLogBreakLevel() <= 5 )
        __debugbreak();
      v34 = FLOAT_1_0;
      v36 = FLOAT_1_0;
      v37 = 0.0;
      v35 = 0.0;
LABEL_20:
      v33 = 0.0;
LABEL_21:
      v28 = (float)(1.0 / v36) * v37;
      v11 = v34 / v36;
      v22 = (float)(1.0 / v36) * v22;
      v27 = (float)(1.0 / v36) * v35;
      v29 = (float)(1.0 / v36) * v33;
      break;
  }
LABEL_22:
  v49 = AD_ScrutinizeSample(v11);
  coeffs->a0 = *(float *)&v49;
  v50 = AD_ScrutinizeSample(v29);
  coeffs->a1 = *(float *)&v50;
  v51 = AD_ScrutinizeSample(v28);
  coeffs->a2 = *(float *)&v51;
  v52 = AD_ScrutinizeSample(v27);
  coeffs->a3 = *(float *)&v52;
  v53 = AD_ScrutinizeSample(v22);
  coeffs->a4 = *(float *)&v53;
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
float AD_ScrutinizeSample(float in)
{
  float Px; 

  Px = in;
  if ( _fdtest(&Px) == 2 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_math.cpp", 14, ASSERT_TYPE_ASSERT, "!std::isnan( in )", "!std::isnan( in )") )
    __debugbreak();
  if ( in != 0.0 )
  {
    Px = in;
    if ( _fdtest(&Px) != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_math.cpp", 15, ASSERT_TYPE_ASSERT, "in == 0 || std::isnormal( in )", "in == 0 || std::isnormal( in )") )
      __debugbreak();
  }
  return in;
}

