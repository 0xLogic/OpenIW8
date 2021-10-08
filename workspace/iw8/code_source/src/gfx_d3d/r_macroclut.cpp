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
  float hdrColorizePreserveLum; 
  GfxColorGradingAnalytical *v56; 

  result->keyPositions[0] = config->hdrColorizeKeyA_Pos;
  _RDI = result;
  hdrColorizeKeyB_Pos = config->hdrColorizeKeyB_Pos;
  __asm
  {
    vmovaps [rsp+48h+var_18], xmm7
    vmovss  xmm7, cs:__real@3f800000
    vmovaps [rsp+48h+var_28], xmm8
    vmovss  xmm8, cs:__real@3c23d70a
    vmulss  xmm1, xmm8, dword ptr [rdx+18h]
    vmulss  xmm2, xmm8, dword ptr [rdx+1Ch]
    vaddss  xmm0, xmm1, xmm7
    vmovss  dword ptr [rcx+14h], xmm0
    vaddss  xmm0, xmm2, xmm7
    vmulss  xmm2, xmm8, dword ptr [rdx+20h]
    vmovss  dword ptr [rcx+18h], xmm0
    vaddss  xmm0, xmm2, xmm7
    vmulss  xmm2, xmm8, dword ptr [rdx+24h]
    vmovss  dword ptr [rcx+1Ch], xmm0
    vaddss  xmm0, xmm2, xmm7
    vmulss  xmm2, xmm8, dword ptr [rdx+28h]
    vmovss  dword ptr [rcx+24h], xmm0
    vaddss  xmm0, xmm2, xmm7
    vmulss  xmm2, xmm8, dword ptr [rdx+2Ch]
    vmovss  dword ptr [rcx+28h], xmm0
    vaddss  xmm0, xmm2, xmm7
    vmulss  xmm2, xmm8, dword ptr [rdx+30h]
    vmovss  dword ptr [rcx+2Ch], xmm0
    vaddss  xmm0, xmm2, xmm7
    vmulss  xmm2, xmm8, dword ptr [rdx+34h]
    vmovss  dword ptr [rcx+34h], xmm0
    vaddss  xmm0, xmm2, xmm7
    vmulss  xmm2, xmm8, dword ptr [rdx+38h]
    vmovss  dword ptr [rcx+38h], xmm0
    vaddss  xmm0, xmm2, xmm7
    vmulss  xmm2, xmm8, dword ptr [rdx+0Ch]
    vmovss  dword ptr [rcx+3Ch], xmm0
    vaddss  xmm0, xmm2, xmm7; val
    vmovss  xmm2, cs:__real@40000000; max
  }
  result->keyPositions[1] = hdrColorizeKeyB_Pos;
  __asm { vxorps  xmm1, xmm1, xmm1; min }
  result->keyPositions[2] = config->hdrColorizeKeyC_Pos;
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmulss  xmm4, xmm8, dword ptr [rbx+10h]
    vmovss  xmm2, cs:__real@40000000; max
    vmovss  dword ptr [rdi+20h], xmm0
    vaddss  xmm0, xmm4, xmm7; val
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmulss  xmm4, xmm8, dword ptr [rbx+14h]
    vmovss  xmm2, cs:__real@40000000; max
    vmovss  dword ptr [rdi+30h], xmm0
    vaddss  xmm0, xmm4, xmm7; val
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm4, cs:__real@3ba3d70a
    vmovss  xmm3, cs:__real@3f000000
    vmulss  xmm1, xmm8, dword ptr [rbx+40h]
    vmulss  xmm2, xmm8, dword ptr [rbx+48h]
  }
  hdrColorizePreserveLum = config->hdrColorizePreserveLum;
  __asm
  {
    vmovss  dword ptr [rdi+40h], xmm0
    vmulss  xmm0, xmm8, dword ptr [rbx+44h]
    vmovss  dword ptr [rdi+4Ch], xmm0
    vmovss  dword ptr [rdi+50h], xmm2
    vmulss  xmm2, xmm4, dword ptr [rbx+50h]
    vmovss  dword ptr [rdi+48h], xmm1
    vmulss  xmm1, xmm4, dword ptr [rbx+4Ch]
    vaddss  xmm0, xmm1, xmm3
    vmovss  dword ptr [rdi+54h], xmm0
    vaddss  xmm0, xmm2, xmm3
    vmulss  xmm2, xmm4, dword ptr [rbx+54h]
    vmovss  dword ptr [rdi+58h], xmm0
    vaddss  xmm0, xmm2, xmm3
    vmulss  xmm2, xmm8, dword ptr [rbx+58h]
    vmovss  dword ptr [rdi+5Ch], xmm0
    vaddss  xmm0, xmm2, xmm7
    vmulss  xmm2, xmm8, dword ptr [rbx+5Ch]
    vmovss  dword ptr [rdi+60h], xmm0
    vaddss  xmm0, xmm2, xmm7
  }
  _RDI->preserveLum = hdrColorizePreserveLum;
  __asm { vmulss  xmm2, xmm8, dword ptr [rbx+60h] }
  v56 = _RDI;
  __asm
  {
    vmovaps xmm8, [rsp+48h+var_28]
    vmovss  dword ptr [rdi+64h], xmm0
    vaddss  xmm0, xmm2, xmm7
    vmovaps xmm7, [rsp+48h+var_18]
    vmovss  dword ptr [rdi+68h], xmm0
  }
  return v56;
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
  const tmat33_t<vec3_t> *v9; 
  const tmat33_t<vec3_t> *v11; 
  const tmat33_t<vec3_t> *v12; 
  tmat33_t<vec3_t> in2; 
  tmat33_t<vec3_t> b; 
  tmat33_t<vec3_t> v18; 
  tmat33_t<vec3_t> in1; 
  tmat33_t<vec3_t> v20; 
  tmat33_t<vec3_t> v21; 
  tmat33_t<vec3_t> v22; 
  tmat33_t<vec3_t> v23; 
  tmat33_t<vec3_t> v24; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> v26; 
  tmat33_t<vec3_t> v27; 
  char v29; 

  __asm { vmovaps [rsp+248h+var_28], xmm6 }
  _RBX = daltonizeMode;
  MatrixMultiply(&matBT2020FromLMS, correctionMatsLMS, &out);
  MatrixMultiply(&matBT2020FromLMS, &correctionMatsLMS[1], &v26);
  MatrixMultiply(&matBT2020FromLMS, &correctionMatsLMS[2], &v27);
  m_correctionMode = _RBX->m_correctionMode;
  m_simulationMode = _RBX->m_simulationMode;
  __asm { vmovss  xmm6, dword ptr [rbx+4] }
  v9 = &identityMatrix33;
  if ( m_correctionMode )
  {
    v11 = &simulationMats[(unsigned __int8)m_correctionMode - 1];
    v12 = (const tmat33_t<vec3_t> *)&v24.m[3 * (unsigned __int8)m_correctionMode + 1];
  }
  else
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vucomiss xmm6, xmm0
    }
    v11 = &identityMatrix33;
    v12 = &identityMatrix33;
  }
  if ( m_simulationMode )
    v9 = &simulationMats[(unsigned __int8)m_simulationMode - 1];
  __asm { vmovaps xmm1, xmm6; b }
  MatrixMultiplyUniformScale(v12, *(float *)&_XMM1, &in1);
  MatrixMultiply(&matLMSFromBT2020, &matBT2020FromBT709, &in2);
  MatrixMultiply(v11, &in2, &b);
  MatrixSub(&in2, &b, &v18);
  MatrixMultiply(&in1, &v18, &v20);
  MatrixAdd(&matBT2020FromBT709, &v20, &v21);
  MatrixMultiply(&matLMSFromBT2020, &v21, &v22);
  MatrixMultiply(v9, &v22, &v23);
  MatrixMultiply(&matBT2020FromLMS, &v23, &v24);
  MatrixMultiply(&matBT709FromBT2020, &v24, outDaltonizeMatrix);
  _R11 = &v29;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

