/*
==============
GfxColorGradingAnalytical_Construct
==============
*/

GfxColorGradingAnalytical *__fastcall GfxColorGradingAnalytical_Construct(GfxColorGradingAnalytical *result, const GfxColorGradingAnalytical_Config *config)
{
  return ?GfxColorGradingAnalytical_Construct@@YA?AUGfxColorGradingAnalytical@@PEBUGfxColorGradingAnalytical_Config@@@Z(result, config);
}

/*
==============
R_Macroclut_GetDaltonizeMatrix
==============
*/

void __fastcall R_Macroclut_GetDaltonizeMatrix(const GfxDaltonizeOptions *daltonizeMode, tmat33_t<vec3_t> *outDaltonizeMatrix)
{
  ?R_Macroclut_GetDaltonizeMatrix@@YAXPEBUGfxDaltonizeOptions@@AEAT?$tmat33_t@Tvec3_t@@@@@Z(daltonizeMode, outDaltonizeMatrix);
}

/*
==============
GfxColorGradingAnalytical_Construct
==============
*/
GfxColorGradingAnalytical *GfxColorGradingAnalytical_Construct(GfxColorGradingAnalytical *result, const GfxColorGradingAnalytical_Config *config)
{
  float hdrColorizeKeyB_Pos; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  double v21; 
  float v22; 
  double v23; 
  float v24; 
  double v25; 
  float v26; 
  float v27; 
  float hdrColorizePreserveLum; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  GfxColorGradingAnalytical *v34; 

  result->keyPositions[0] = config->hdrColorizeKeyA_Pos;
  hdrColorizeKeyB_Pos = config->hdrColorizeKeyB_Pos;
  v5 = 0.0099999998 * config->hdrColorizeKeyA_Gain.v[1];
  result->key[0].gain.v[0] = (float)(0.0099999998 * config->hdrColorizeKeyA_Gain.v[0]) + 1.0;
  v6 = v5 + 1.0;
  v7 = 0.0099999998 * config->hdrColorizeKeyA_Gain.v[2];
  result->key[0].gain.v[1] = v6;
  v8 = v7 + 1.0;
  v9 = 0.0099999998 * config->hdrColorizeKeyB_Gain.v[0];
  result->key[0].gain.v[2] = v8;
  v10 = v9 + 1.0;
  v11 = 0.0099999998 * config->hdrColorizeKeyB_Gain.v[1];
  result->key[1].gain.v[0] = v10;
  v12 = v11 + 1.0;
  v13 = 0.0099999998 * config->hdrColorizeKeyB_Gain.v[2];
  result->key[1].gain.v[1] = v12;
  v14 = v13 + 1.0;
  v15 = 0.0099999998 * config->hdrColorizeKeyC_Gain.v[0];
  result->key[1].gain.v[2] = v14;
  v16 = v15 + 1.0;
  v17 = 0.0099999998 * config->hdrColorizeKeyC_Gain.v[1];
  result->key[2].gain.v[0] = v16;
  v18 = v17 + 1.0;
  v19 = 0.0099999998 * config->hdrColorizeKeyC_Gain.v[2];
  result->key[2].gain.v[1] = v18;
  v20 = 0.0099999998 * config->hdrColorizeKeyA_Saturation;
  result->key[2].gain.v[2] = v19 + 1.0;
  result->keyPositions[1] = hdrColorizeKeyB_Pos;
  result->keyPositions[2] = config->hdrColorizeKeyC_Pos;
  v21 = I_fclamp(v20 + 1.0, 0.0, 2.0);
  v22 = 0.0099999998 * config->hdrColorizeKeyB_Saturation;
  result->key[0].saturation = *(float *)&v21;
  v23 = I_fclamp(v22 + 1.0, 0.0, 2.0);
  v24 = 0.0099999998 * config->hdrColorizeKeyC_Saturation;
  result->key[1].saturation = *(float *)&v23;
  v25 = I_fclamp(v24 + 1.0, 0.0, 2.0);
  v26 = 0.0099999998 * config->hdrColorizeLift.v[0];
  v27 = 0.0099999998 * config->hdrColorizeLift.v[2];
  hdrColorizePreserveLum = config->hdrColorizePreserveLum;
  result->key[2].saturation = *(float *)&v25;
  result->lift.v[1] = 0.0099999998 * config->hdrColorizeLift.v[1];
  result->lift.v[2] = v27;
  v29 = 0.0049999999 * config->hdrColorizeGamma.v[1];
  result->lift.v[0] = v26;
  result->gamma.v[0] = (float)(0.0049999999 * config->hdrColorizeGamma.v[0]) + 0.5;
  *(float *)&v25 = v29 + 0.5;
  v30 = 0.0049999999 * config->hdrColorizeGamma.v[2];
  result->gamma.v[1] = *(float *)&v25;
  *(float *)&v25 = v30 + 0.5;
  v31 = 0.0099999998 * config->hdrColorizeGain.v[0];
  result->gamma.v[2] = *(float *)&v25;
  *(float *)&v25 = v31 + 1.0;
  v32 = 0.0099999998 * config->hdrColorizeGain.v[1];
  result->gain.v[0] = *(float *)&v25;
  result->preserveLum = hdrColorizePreserveLum;
  v33 = 0.0099999998 * config->hdrColorizeGain.v[2];
  v34 = result;
  result->gain.v[1] = v32 + 1.0;
  result->gain.v[2] = v33 + 1.0;
  return v34;
}

/*
==============
R_Macroclut_GetDaltonizeMatrix
==============
*/
void R_Macroclut_GetDaltonizeMatrix(const GfxDaltonizeOptions *daltonizeMode, tmat33_t<vec3_t> *outDaltonizeMatrix)
{
  GfxDaltonizeType m_correctionMode; 
  GfxDaltonizeType m_simulationMode; 
  float m_correctionScale; 
  const tmat33_t<vec3_t> *v7; 
  const tmat33_t<vec3_t> *v8; 
  const tmat33_t<vec3_t> *v9; 
  tmat33_t<vec3_t> in2; 
  tmat33_t<vec3_t> b; 
  tmat33_t<vec3_t> v12; 
  tmat33_t<vec3_t> in1; 
  tmat33_t<vec3_t> v14; 
  tmat33_t<vec3_t> v15; 
  tmat33_t<vec3_t> v16; 
  tmat33_t<vec3_t> v17; 
  tmat33_t<vec3_t> v18; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> v20; 
  tmat33_t<vec3_t> v21; 

  MatrixMultiply(&matBT2020FromLMS, correctionMatsLMS, &out);
  MatrixMultiply(&matBT2020FromLMS, &correctionMatsLMS[1], &v20);
  MatrixMultiply(&matBT2020FromLMS, &correctionMatsLMS[2], &v21);
  m_correctionMode = daltonizeMode->m_correctionMode;
  m_simulationMode = daltonizeMode->m_simulationMode;
  m_correctionScale = daltonizeMode->m_correctionScale;
  v7 = &identityMatrix33;
  if ( m_correctionMode )
  {
    v8 = &simulationMats[(unsigned __int8)m_correctionMode - 1];
    v9 = (const tmat33_t<vec3_t> *)&v18.m[3 * (unsigned __int8)m_correctionMode + 1];
  }
  else
  {
    if ( m_correctionScale != 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_macroclut.cpp", 89, ASSERT_TYPE_ASSERT, "(correctionType != R_DALTONIZE_NONE || correctionScale == 0.0f)", (const char *)&queryFormat, "correctionType != R_DALTONIZE_NONE || correctionScale == 0.0f") )
      __debugbreak();
    v8 = &identityMatrix33;
    v9 = &identityMatrix33;
  }
  if ( m_simulationMode )
    v7 = &simulationMats[(unsigned __int8)m_simulationMode - 1];
  MatrixMultiplyUniformScale(v9, m_correctionScale, &in1);
  MatrixMultiply(&matLMSFromBT2020, &matBT2020FromBT709, &in2);
  MatrixMultiply(v8, &in2, &b);
  MatrixSub(&in2, &b, &v12);
  MatrixMultiply(&in1, &v12, &v14);
  MatrixAdd(&matBT2020FromBT709, &v14, &v15);
  MatrixMultiply(&matLMSFromBT2020, &v15, &v16);
  MatrixMultiply(v7, &v16, &v17);
  MatrixMultiply(&matBT2020FromLMS, &v17, &v18);
  MatrixMultiply(&matBT709FromBT2020, &v18, outDaltonizeMatrix);
}

