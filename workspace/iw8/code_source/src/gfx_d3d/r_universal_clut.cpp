/*
==============
RB_UniversalClut_Generate
==============
*/

void __fastcall RB_UniversalClut_Generate(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RB_UniversalClut_Generate@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(computeState, viewInfo, data);
}

/*
==============
RB_UniversalClut_GetDaltonizeMatrix
==============
*/

void __fastcall RB_UniversalClut_GetDaltonizeMatrix(const GfxDaltonizeOptions *daltonizeOptions, tmat33_t<vec3_t> *outDaltonizeMatrix)
{
  ?RB_UniversalClut_GetDaltonizeMatrix@@YAXPEBUGfxDaltonizeOptions@@AEAT?$tmat33_t@Tvec3_t@@@@@Z(daltonizeOptions, outDaltonizeMatrix);
}

/*
==============
R_UniversalClut_Shutdown
==============
*/

void R_UniversalClut_Shutdown(void)
{
  ?R_UniversalClut_Shutdown@@YAXXZ();
}

/*
==============
R_UniversalClut_ClutSetParametersSetSingle
==============
*/

void __fastcall R_UniversalClut_ClutSetParametersSetSingle(GfxUniversalClutClutSetParameters *clutSetParameters, const GfxGradingClut *clut)
{
  ?R_UniversalClut_ClutSetParametersSetSingle@@YAXPEAUGfxUniversalClutClutSetParameters@@PEBUGfxGradingClut@@@Z(clutSetParameters, clut);
}

/*
==============
R_UniversalClut_GetParameters
==============
*/

void __fastcall R_UniversalClut_GetParameters(float *outScaleU, float *outScaleV, float *outScaleW, float *outOffsetU, float *outOffsetV, float *outOffsetW)
{
  ?R_UniversalClut_GetParameters@@YAXAEAM00000@Z(outScaleU, outScaleV, outScaleW, outOffsetU, outOffsetV, outOffsetW);
}

/*
==============
RB_UniversalClut_SetParameters
==============
*/

void __fastcall RB_UniversalClut_SetParameters(const GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo)
{
  ?RB_UniversalClut_SetParameters@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@@Z(gfxContext, viewInfo);
}

/*
==============
R_UniversalClut_ResetClutSetParameters
==============
*/

void __fastcall R_UniversalClut_ResetClutSetParameters(GfxUniversalClutClutSetParameters *clutSetParameters)
{
  ?R_UniversalClut_ResetClutSetParameters@@YAXPEAUGfxUniversalClutClutSetParameters@@@Z(clutSetParameters);
}

/*
==============
R_UniversalClut_SetParametersImage
==============
*/

void __fastcall R_UniversalClut_SetParametersImage(const GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxImage *clutImageMainView, const GfxImage *clutImageSecondary)
{
  ?R_UniversalClut_SetParametersImage@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@PEBUGfxImage@@2@Z(gfxContext, viewInfo, clutImageMainView, clutImageSecondary);
}

/*
==============
R_UniversalClut_GetDefaultCLut
==============
*/

GfxImage *__fastcall R_UniversalClut_GetDefaultCLut()
{
  return ?R_UniversalClut_GetDefaultCLut@@YAPEAUGfxImage@@XZ();
}

/*
==============
R_UniversalClut_FreeRts
==============
*/

void R_UniversalClut_FreeRts(void)
{
  ?R_UniversalClut_FreeRts@@YAXXZ();
}

/*
==============
R_UniversalClut_GetClutIndex
==============
*/

unsigned int __fastcall R_UniversalClut_GetClutIndex(LocalClientNum_t clientIndex, GfxUniversalClutVariation variation)
{
  return ?R_UniversalClut_GetClutIndex@@YAIW4LocalClientNum_t@@W4GfxUniversalClutVariation@@@Z(clientIndex, variation);
}

/*
==============
R_UniversalClut_GenerateImage
==============
*/

void __fastcall R_UniversalClut_GenerateImage(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxBackEndData *data, const GfxImage *clutRwImage, GfxUniversalClutVariation clutVariation)
{
  ?R_UniversalClut_GenerateImage@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@PEBUGfxImage@@W4GfxUniversalClutVariation@@@Z(computeState, viewInfo, data, clutRwImage, clutVariation);
}

/*
==============
R_UniversalClut_LazyAllocRts
==============
*/

void R_UniversalClut_LazyAllocRts(void)
{
  ?R_UniversalClut_LazyAllocRts@@YAXXZ();
}

/*
==============
R_UniversalClut_GetImage
==============
*/

const GfxImage *__fastcall R_UniversalClut_GetImage(LocalClientNum_t clientIndex, GfxUniversalClutVariation variation)
{
  return ?R_UniversalClut_GetImage@@YAPEBUGfxImage@@W4LocalClientNum_t@@W4GfxUniversalClutVariation@@@Z(clientIndex, variation);
}

/*
==============
R_UniversalClut_Update
==============
*/

bool __fastcall R_UniversalClut_Update(const GfxViewInfo *viewInfo, const GfxImage *exportImage, bool forceUpdate)
{
  return ?R_UniversalClut_Update@@YA_NPEBUGfxViewInfo@@PEBUGfxImage@@_N@Z(viewInfo, exportImage, forceUpdate);
}

/*
==============
R_UniversalClut_Initialize
==============
*/

void R_UniversalClut_Initialize(void)
{
  ?R_UniversalClut_Initialize@@YAXXZ();
}

/*
==============
R_UniversalClut_ResetAnalyticalGradingParameters
==============
*/

void __fastcall R_UniversalClut_ResetAnalyticalGradingParameters(GfxUniversalClutAnalyticalGradingParameters *analyticalGradingParameters)
{
  ?R_UniversalClut_ResetAnalyticalGradingParameters@@YAXPEAUGfxUniversalClutAnalyticalGradingParameters@@@Z(analyticalGradingParameters);
}

/*
==============
RB_UniversalClut_Generate
==============
*/
void RB_UniversalClut_Generate(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ComputeCmdBufState *v4; 
  const GfxViewInfo *v5; 
  GfxUniversalClutVariation v6; 
  unsigned int v7; 
  __int64 v8; 
  R_RT_Handle v9; 
  bool v11; 
  const R_RT_Surface *Surface; 
  char v13; 
  __int64 v14; 
  GfxUniversalClutParameters *v15; 
  GfxUniversalClutParameters *p_parameters; 
  __m256i *v17; 
  __int64 v18; 
  __m256i v19; 
  __int128 v20; 
  const GfxImage *v21; 
  const R_RT_Surface *v22; 
  const GfxTexture *Resident; 
  const GfxTexture *v24; 
  LocalClientNum_t clientIndex; 
  bool *v26; 
  bool *v27; 
  __int64 v28; 
  const GfxTexture *v29; 
  const GfxTexture *v30; 
  R_RT_Handle v33; 
  R_RT_Handle v34; 
  R_RT_Handle result; 
  GfxUniversalClutParameters parameters; 

  v4 = computeState;
  v5 = viewInfo;
  v6 = MOVEMENT;
  if ( !R_RT_Handle::IsValid(s_universalClut.clutRt) )
  {
    v7 = 0;
    if ( s_universalClut.clutCount )
    {
      do
      {
        v8 = v7;
        v9 = *R_RT_CreateInternal(&result, s_universalClut.clutWidth, s_universalClut.clutHeight, s_universalClut.clutWidth, s_universalClut.clutHeight, s_universalClut.clutDepth, 1u, 1u, g_R_RT_renderTargetFmts[1], R_RT_Flag_RWView|R_RT_Flag_RTView, (R_RT_FlagsInternal)2, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE, s_universalClutNames[v7], 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_universal_clut.cpp(164)");
        v34 = v9;
        v33 = v9;
        if ( (_WORD)_XMM0 )
        {
          R_RT_Handle::GetSurface(&v33);
          if ( (R_RT_Handle::GetSurface(&v33)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
          {
            v9 = v33;
            __debugbreak();
          }
          else
          {
            v9 = v33;
          }
        }
        else
        {
          __asm { vpextrd rax, xmm0, 2 }
          if ( (_DWORD)_RAX )
          {
            v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
            v9 = v34;
            if ( v11 )
              __debugbreak();
          }
        }
        ++v7;
        s_universalClut.clutRt[v8] = (R_RT_ColorHandle)v9;
        s_universalClut.parameters[v8].forceUpdate = 1;
      }
      while ( v7 < s_universalClut.clutCount );
      v5 = viewInfo;
      v6 = MOVEMENT;
      v4 = computeState;
    }
  }
  Surface = R_RT_Handle::GetSurface(&s_universalClut.clutRt[2 * v5->clientIndex]);
  v13 = 0;
  do
  {
    v14 = (unsigned int)(v6 + 2 * v5->clientIndex);
    R_UniversalClut_GetParameters(v5, v6, 0, &parameters);
    v15 = &s_universalClut.parameters[v14];
    if ( v15->forceUpdate || parameters.forceUpdate || memcmp_0(&s_universalClut.parameters[v14], &parameters, 0x128ui64) )
    {
      v13 = 1;
      p_parameters = &parameters;
      v17 = (__m256i *)&s_universalClut.parameters[v14];
      v18 = 2i64;
      do
      {
        v17 += 4;
        v19 = *(__m256i *)&p_parameters->forceUpdate;
        v20 = *(_OWORD *)&p_parameters->clutSetParameters.clutWeights[6];
        p_parameters = (GfxUniversalClutParameters *)((char *)p_parameters + 128);
        v17[-4] = v19;
        v17[-3] = *(__m256i *)p_parameters[-1].analyticalGradingParameters.keySaturation;
        v17[-2] = *(__m256i *)&p_parameters[-1].analyticalGradingParameters.gamma.y;
        *(_OWORD *)v17[-1].m256i_i8 = *(_OWORD *)&p_parameters[-1].displayMappingParams.gamma;
        *(_OWORD *)&v17[-1].m256i_u64[2] = v20;
        --v18;
      }
      while ( v18 );
      v21 = p_parameters->clutSetParameters.clutImages[1];
      *v17 = *(__m256i *)&p_parameters->forceUpdate;
      v17[1].m256i_i64[0] = (__int64)v21;
      s_universalClut.requiresUpdate[v14] = 1;
      v15->forceUpdate = 0;
    }
    ++v6;
  }
  while ( (unsigned int)v6 < COUNT );
  if ( v13 )
  {
    v22 = R_RT_Handle::GetSurface(&s_universalClut.clutRt[2 * v5->clientIndex + 1]);
    R_ProfBeginNamedEvent(v4, "Universal CLUT Generate");
    R_GPU_BeginTimer(GPU_TIMER_UNIVERSAL_CLUT_GENERATE);
    Resident = R_Texture_GetResident(Surface->m_image.m_base.textureId);
    R_HW_AddResourceTransition(v4, Resident, 0xFFFFFFFF, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    v24 = R_Texture_GetResident(v22->m_image.m_base.textureId);
    R_HW_AddResourceTransition(v4, v24, 0xFFFFFFFF, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_HW_FlushResourceTransitions(v4);
    clientIndex = v5->clientIndex;
    v26 = &s_universalClut.requiresUpdate[2 * clientIndex];
    if ( *v26 )
    {
      R_UniversalClut_GenerateSingle(v4, &s_universalClut.parameters[2 * clientIndex], &Surface->m_image.m_base);
      *v26 = 0;
      clientIndex = v5->clientIndex;
    }
    v27 = &s_universalClut.requiresUpdate[2 * clientIndex + 1];
    v28 = (unsigned int)(2 * clientIndex + 1);
    if ( *v27 )
    {
      R_UniversalClut_GenerateSingle(v4, &s_universalClut.parameters[v28], &v22->m_image.m_base);
      *v27 = 0;
    }
    v29 = R_Texture_GetResident(Surface->m_image.m_base.textureId);
    R_HW_AddResourceTransition(v4, v29, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    v30 = R_Texture_GetResident(v22->m_image.m_base.textureId);
    R_HW_AddResourceTransition(v4, v30, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_HW_FlushResourceTransitions(v4);
    R_GPU_EndTimer();
    R_ProfEndNamedEvent(v4);
  }
}

/*
==============
RB_UniversalClut_GetDaltonizeMatrix
==============
*/
void RB_UniversalClut_GetDaltonizeMatrix(const GfxDaltonizeOptions *daltonizeOptions, tmat33_t<vec3_t> *outDaltonizeMatrix)
{
  const tmat33_t<vec3_t> *v4; 
  GfxDaltonizeType m_correctionMode; 
  GfxDaltonizeType m_simulationMode; 
  const tmat33_t<vec3_t> *v7; 
  const tmat33_t<vec3_t> *v8; 
  tmat33_t<vec3_t> b; 
  tmat33_t<vec3_t> in2; 
  tmat33_t<vec3_t> in1; 
  tmat33_t<vec3_t> v12; 
  tmat33_t<vec3_t> v13; 
  tmat33_t<vec3_t> v14; 
  tmat33_t<vec3_t> v15; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> v17; 
  tmat33_t<vec3_t> v18; 

  MatrixMultiply(&matBT2020FromLMS_0, matCorrectionLMSArray, &out);
  MatrixMultiply(&matBT2020FromLMS_0, &matCorrectionLMSArray[1], &v17);
  MatrixMultiply(&matBT2020FromLMS_0, &matCorrectionLMSArray[2], &v18);
  v4 = &identityMatrix33;
  if ( !daltonizeOptions->m_enabled )
    MatrixCopy33(&identityMatrix33, outDaltonizeMatrix);
  m_correctionMode = daltonizeOptions->m_correctionMode;
  m_simulationMode = daltonizeOptions->m_simulationMode;
  if ( m_correctionMode )
  {
    v7 = &matSimulationArray[(unsigned __int8)m_correctionMode - 1];
    v8 = (const tmat33_t<vec3_t> *)&v15.m[3 * (unsigned __int8)m_correctionMode + 1];
  }
  else
  {
    v7 = &identityMatrix33;
    v8 = &identityMatrix33;
  }
  if ( m_simulationMode )
    v4 = &matSimulationArray[(unsigned __int8)m_simulationMode - 1];
  MatrixMultiplyUniformScale(v8, daltonizeOptions->m_correctionScale, &in1);
  MatrixMultiply(v7, &matLMSFromBT2020_0, &b);
  MatrixSub(&matLMSFromBT2020_0, &b, &in2);
  MatrixMultiply(&in1, &in2, &v12);
  MatrixAdd(&matIdentity, &v12, &v13);
  MatrixMultiply(&matLMSFromBT2020_0, &v13, &v14);
  MatrixMultiply(v4, &v14, &v15);
  MatrixMultiply(&matBT2020FromLMS_0, &v15, outDaltonizeMatrix);
}

/*
==============
RB_UniversalClut_SetParameters
==============
*/
void RB_UniversalClut_SetParameters(const GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo)
{
  LocalClientNum_t clientIndex; 
  R_RT_Image *p_m_image; 
  __int64 v6; 
  const R_RT_Surface *Surface; 
  R_RT_Image *v8; 
  R_RT_ColorHandle *v9; 
  GfxCmdBufContext v10; 
  GfxImage *blackImage3D; 
  GfxImage *p_m_base; 
  float clutWidth; 
  float clutHeight; 
  __int64 clutDepth; 
  float v16; 

  clientIndex = viewInfo->clientIndex;
  p_m_image = NULL;
  v6 = (unsigned int)(2 * clientIndex);
  if ( s_universalClut.clutRt[v6].m_surfaceID )
  {
    Surface = R_RT_Handle::GetSurface(&s_universalClut.clutRt[v6]);
    clientIndex = viewInfo->clientIndex;
    p_m_image = &Surface->m_image;
  }
  v8 = NULL;
  v9 = &s_universalClut.clutRt[2 * clientIndex + 1];
  if ( v9->m_surfaceID )
    v8 = &R_RT_Handle::GetSurface(v9)->m_image;
  v10 = *gfxContext;
  blackImage3D = rgp.blackImage3D;
  if ( p_m_image )
    blackImage3D = &p_m_image->m_base;
  if ( !v10.source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( v10.source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v10.source->input.codeImages[67] = blackImage3D;
  p_m_base = rgp.blackImage3D;
  if ( v8 )
    p_m_base = &v8->m_base;
  if ( !v10.source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( v10.source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v10.source->input.codeImages[68] = p_m_base;
  clutWidth = (float)s_universalClut.clutWidth;
  clutHeight = (float)s_universalClut.clutHeight;
  clutDepth = s_universalClut.clutDepth;
  v10.source->input.consts[126].v[0] = (float)(clutWidth - 1.0) / clutWidth;
  v10.source->input.consts[126].v[3] = 0.0;
  v16 = (float)clutDepth;
  v10.source->input.consts[126].v[1] = (float)(clutHeight - 1.0) / clutHeight;
  v10.source->input.consts[126].v[2] = (float)(v16 - 1.0) / v16;
  ++v10.source->constVersions[126];
  v10.source->input.consts[127].v[0] = 0.5 / clutWidth;
  v10.source->input.consts[127].v[2] = 0.5 / v16;
  v10.source->input.consts[127].v[3] = 0.0;
  v10.source->input.consts[127].v[1] = 0.5 / clutHeight;
  ++v10.source->constVersions[127];
}

/*
==============
R_UniversalClut_AreAnalyticalGradingParametersIdentity
==============
*/
bool R_UniversalClut_AreAnalyticalGradingParametersIdentity(const GfxUniversalClutAnalyticalGradingParameters *analyticalGradingParameters)
{
  __int64 v1; 
  int v5; 
  float *keySaturation; 
  char v7; 

  v1 = tls_index;
  _XMM6 = LODWORD(FLOAT_1_0);
  if ( dword_15421E3C0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
  {
    j__Init_thread_header(&dword_15421E3C0);
    if ( dword_15421E3C0 == -1 )
    {
      __asm { vunpcklps xmm0, xmm6, xmm6 }
      *(double *)&::v1 = *(double *)&_XMM0;
      dword_15421E3B8 = LODWORD(FLOAT_1_0);
      j__Init_thread_footer(&dword_15421E3C0);
    }
  }
  v5 = 0;
  keySaturation = analyticalGradingParameters->keySaturation;
  while ( VecNCompareCustomEpsilon(analyticalGradingParameters->keyGain[v5].v, &::v1, 0.001, 3) && (float)((float)(1.0 - *keySaturation) * (float)(1.0 - *keySaturation)) <= 0.0000010000001 )
  {
    ++v5;
    ++keySaturation;
    if ( v5 >= 3 )
    {
      v7 = 1;
      goto LABEL_10;
    }
  }
  v7 = 0;
LABEL_10:
  if ( dword_15421E378 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v1) + 1772i64) )
  {
    j__Init_thread_header(&dword_15421E378);
    if ( dword_15421E378 == -1 )
    {
      _XMM0 = 0i64;
      __asm { vunpcklps xmm0, xmm0, xmm0 }
      *(double *)&qword_15421E368 = *(double *)&_XMM0;
      dword_15421E370 = 0;
      j__Init_thread_footer(&dword_15421E378);
    }
  }
  if ( dword_15421E390 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v1) + 1772i64) )
  {
    j__Init_thread_header(&dword_15421E390);
    if ( dword_15421E390 == -1 )
    {
      _XMM0 = LODWORD(FLOAT_0_5);
      __asm { vunpcklps xmm0, xmm0, xmm0 }
      *(double *)&qword_15421E380 = *(double *)&_XMM0;
      dword_15421E388 = LODWORD(FLOAT_0_5);
      j__Init_thread_footer(&dword_15421E390);
    }
  }
  if ( dword_15421E3A8 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v1) + 1772i64) )
  {
    j__Init_thread_header(&dword_15421E3A8);
    if ( dword_15421E3A8 == -1 )
    {
      __asm { vunpcklps xmm0, xmm6, xmm6 }
      *(double *)&qword_15421E398 = *(double *)&_XMM0;
      dword_15421E3A0 = LODWORD(FLOAT_1_0);
      j__Init_thread_footer(&dword_15421E3A8);
    }
  }
  return VecNCompareCustomEpsilon(analyticalGradingParameters->lift.v, &qword_15421E368, 0.001, 3) && VecNCompareCustomEpsilon(analyticalGradingParameters->gamma.v, &qword_15421E380, 0.001, 3) && VecNCompareCustomEpsilon(analyticalGradingParameters->gain.v, &qword_15421E398, 0.001, 3) && v7;
}

/*
==============
R_UniversalClut_ClutSetParametersSetSingle
==============
*/
void R_UniversalClut_ClutSetParametersSetSingle(GfxUniversalClutClutSetParameters *clutSetParameters, const GfxGradingClut *clut)
{
  clutSetParameters->clutImages[0] = NULL;
  *(_QWORD *)clutSetParameters->clutWeights = 0i64;
  clutSetParameters->clutInputColorSpace[0] = 1;
  clutSetParameters->clutImages[1] = NULL;
  clutSetParameters->clutInputColorSpace[1] = 1;
  clutSetParameters->clutImages[2] = NULL;
  *(_QWORD *)&clutSetParameters->clutWeights[2] = 0i64;
  clutSetParameters->clutInputColorSpace[2] = 1;
  clutSetParameters->clutImages[3] = NULL;
  clutSetParameters->clutInputColorSpace[3] = 1;
  clutSetParameters->clutImages[4] = NULL;
  *(_QWORD *)&clutSetParameters->clutWeights[4] = 0i64;
  clutSetParameters->clutInputColorSpace[4] = 1;
  clutSetParameters->clutImages[5] = NULL;
  clutSetParameters->clutInputColorSpace[5] = 1;
  clutSetParameters->clutImages[6] = NULL;
  *(_QWORD *)&clutSetParameters->clutWeights[6] = 0i64;
  clutSetParameters->clutInputColorSpace[6] = 1;
  clutSetParameters->clutImages[7] = NULL;
  clutSetParameters->clutInputColorSpace[7] = 1;
  clutSetParameters->identityWeight = 0.0;
  clutSetParameters->clutImages[0] = clut->hdrClutImage;
  clutSetParameters->clutWeights[0] = 1.0;
  clutSetParameters->clutInputColorSpace[0] = clut->inputColorimetry;
}

/*
==============
R_UniversalClut_FreeRts
==============
*/

void __fastcall R_UniversalClut_FreeRts(double _XMM0_8)
{
  unsigned int i; 
  __int64 v2; 
  __m256i v3; 

  if ( R_RT_Handle::IsValid(s_universalClut.clutRt) )
  {
    for ( i = 0; i < s_universalClut.clutCount; s_universalClut.clutRt[v2] = (R_RT_ColorHandle)v3 )
    {
      v2 = i;
      v3 = (__m256i)s_universalClut.clutRt[v2];
      R_RT_DestroyInternal((R_RT_Handle *)&v3);
      __asm { vpxor   xmm0, xmm0, xmm0 }
      *(_OWORD *)&v3.m256i_u64[2] = *(_OWORD *)&_XMM0_8;
      v3.m256i_i16[0] = 0;
      ++i;
      v3.m256i_i32[2] = 0;
    }
  }
}

/*
==============
R_UniversalClut_GenerateImage
==============
*/
void R_UniversalClut_GenerateImage(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxBackEndData *data, const GfxImage *clutRwImage, GfxUniversalClutVariation clutVariation)
{
  __int64 v5; 
  bool *v6; 

  if ( clutRwImage )
  {
    v5 = (unsigned int)(clutVariation + 2 * viewInfo->clientIndex);
    v6 = &s_universalClut.requiresUpdate[v5];
    if ( s_universalClut.requiresUpdate[v5] )
    {
      R_UniversalClut_GenerateSingle(computeState, &s_universalClut.parameters[v5], clutRwImage);
      *v6 = 0;
    }
  }
}

/*
==============
R_UniversalClut_GenerateSingle
==============
*/
void R_UniversalClut_GenerateSingle(ComputeCmdBufState *computeState, const GfxUniversalClutParameters *parameters, const GfxImage *clutRwImage)
{
  __int64 i; 
  GfxImage *blackImage3D; 
  unsigned int colorGradingFlags; 
  char *v9; 
  float *v10; 
  __int64 v11; 
  int v12; 
  float v13; 
  float v14; 
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
  float preserveLum; 
  float v28; 
  float v29; 
  float v30; 
  float v35; 
  GfxColorimetry displayMappingColorimetry; 
  bool v39; 
  int m_correctionMode; 
  const tmat33_t<vec3_t> *v41; 
  GfxDaltonizeType v42; 
  GfxDaltonizeType m_simulationMode; 
  const tmat33_t<vec3_t> *v44; 
  const tmat33_t<vec3_t> *v45; 
  GfxTexture *Resident; 
  tmat33_t<vec3_t> dst; 
  int data[24]; 
  vec3_t v49; 
  float v50; 
  vec3_t v51; 
  float v52; 
  float identityWeight; 
  char v54; 
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
  float v65; 
  float v66; 
  float v67; 
  float v68; 
  float v69; 
  float v70; 
  float v71; 
  float v72; 
  float v73; 
  float v74; 
  float v75; 
  int v76; 
  float v77; 
  int v78; 
  float v79; 
  tmat33_t<vec3_t> b; 
  tmat33_t<vec3_t> in2; 
  tmat33_t<vec3_t> in1; 
  tmat33_t<vec3_t> v83; 
  tmat33_t<vec3_t> v84; 
  tmat33_t<vec3_t> v85; 
  tmat33_t<vec3_t> v86; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> v88; 
  tmat33_t<vec3_t> v89; 
  GfxTexture *textures[8]; 

  R_SetComputeShader(computeState, rgp.universalClutGenerateShader);
  for ( i = 0i64; i < 8; ++i )
  {
    blackImage3D = (GfxImage *)parameters->clutSetParameters.clutImages[i];
    if ( !blackImage3D )
      blackImage3D = rgp.blackImage3D;
    textures[i] = (GfxTexture *)R_Texture_GetResident(blackImage3D->textureId);
  }
  R_SetComputeTextures(computeState, 0, 8, (const GfxTexture *const *)textures);
  Resident = (GfxTexture *)R_Texture_GetResident(clutRwImage->textureId);
  R_SetComputeRWTextures(computeState, 0, 1, (const GfxTexture *const *)&Resident);
  colorGradingFlags = parameters->colorGradingFlags;
  data[0] = s_universalClut.clutWidth;
  data[1] = s_universalClut.clutHeight;
  data[2] = s_universalClut.clutDepth;
  data[4] = parameters->universalClutType;
  if ( R_UniversalClut_AreAnalyticalGradingParametersIdentity(&parameters->analyticalGradingParameters) )
    colorGradingFlags &= ~2u;
  identityWeight = parameters->clutSetParameters.identityWeight;
  data[5] = colorGradingFlags;
  v9 = &v54;
  v10 = &parameters->clutSetParameters.clutWeights[1];
  v11 = 2i64;
  do
  {
    v12 = *((_DWORD *)v10 - 1);
    v10 += 4;
    *((_DWORD *)v9 - 2) = v12;
    v9 += 16;
    *((float *)v9 - 5) = *(v10 - 4);
    *((float *)v9 - 4) = *(v10 - 3);
    *((float *)v9 - 3) = *(v10 - 2);
    *((float *)v9 + 2) = v10[3];
    *((float *)v9 + 3) = v10[4];
    *((float *)v9 + 4) = v10[5];
    *((float *)v9 + 5) = v10[6];
    --v11;
  }
  while ( v11 );
  v13 = parameters->analyticalGradingParameters.keyPositions[1];
  v55 = parameters->analyticalGradingParameters.keyPositions[0];
  v14 = parameters->analyticalGradingParameters.keyPositions[2];
  v60 = v13;
  v15 = parameters->analyticalGradingParameters.keySaturation[0];
  v65 = v14;
  v16 = parameters->analyticalGradingParameters.keySaturation[1];
  v56 = v15;
  v17 = parameters->analyticalGradingParameters.keySaturation[2];
  v61 = v16;
  v18 = parameters->analyticalGradingParameters.keyGain[0].v[0];
  v66 = v17;
  v19 = parameters->analyticalGradingParameters.keyGain[0].v[1];
  v57 = v18;
  v20 = parameters->analyticalGradingParameters.keyGain[0].v[2];
  v58 = v19;
  v21 = parameters->analyticalGradingParameters.keyGain[1].v[0];
  v59 = v20;
  v22 = parameters->analyticalGradingParameters.keyGain[1].v[1];
  v62 = v21;
  v23 = parameters->analyticalGradingParameters.keyGain[1].v[2];
  v63 = v22;
  v24 = parameters->analyticalGradingParameters.keyGain[2].v[0];
  v64 = v23;
  v25 = parameters->analyticalGradingParameters.keyGain[2].v[1];
  v67 = v24;
  v26 = parameters->analyticalGradingParameters.keyGain[2].v[2];
  v68 = v25;
  preserveLum = parameters->analyticalGradingParameters.preserveLum;
  v69 = v26;
  v28 = parameters->analyticalGradingParameters.lift.v[0];
  v70 = preserveLum;
  v29 = parameters->analyticalGradingParameters.lift.v[1];
  v71 = v28;
  v30 = parameters->analyticalGradingParameters.lift.v[2];
  v72 = v29;
  _XMM1 = LODWORD(parameters->analyticalGradingParameters.gamma.v[0]);
  v73 = v30;
  __asm { vmaxss  xmm0, xmm1, cs:__real@358637bd; X }
  *(float *)&_XMM0 = logf_0(*(float *)&_XMM0);
  _XMM1 = LODWORD(parameters->analyticalGradingParameters.gamma.v[1]);
  v74 = *(float *)&_XMM0 * -1.442695;
  __asm { vmaxss  xmm0, xmm1, cs:__real@358637bd; X }
  v35 = logf_0(*(float *)&_XMM0) * -1.442695;
  _XMM2 = LODWORD(parameters->analyticalGradingParameters.gamma.v[2]);
  __asm { vmaxss  xmm0, xmm2, cs:__real@358637bd; X }
  v75 = v35;
  *(float *)&_XMM1 = logf_0(*(float *)&_XMM0) * -1.442695;
  displayMappingColorimetry = parameters->displayMappingColorimetry;
  v77 = parameters->analyticalGradingParameters.gain.v[0];
  v79 = parameters->analyticalGradingParameters.gain.v[2];
  *(float *)&_XMM0 = parameters->universalClutTonemapAcesRedModifier;
  v76 = _XMM1;
  *(float *)&_XMM1 = parameters->analyticalGradingParameters.gain.v[1];
  data[3] = displayMappingColorimetry;
  v39 = !parameters->daltonizeOptions.m_enabled;
  data[7] = _XMM0;
  *(float *)&_XMM0 = parameters->displayMappingParams.gamma;
  v78 = _XMM1;
  *(float *)&_XMM1 = parameters->universalClutTonemapAcesRrt;
  data[10] = _XMM0;
  *(float *)&_XMM0 = parameters->displayMappingParams.maxLuminance;
  data[6] = _XMM1;
  *(float *)&_XMM1 = parameters->displayMappingParams.minLuminance;
  data[9] = _XMM0;
  *(float *)&_XMM0 = parameters->displayMappingEmulateSdrMaxLum;
  data[8] = _XMM1;
  *(float *)&_XMM1 = parameters->displayMappingSdrTargetLum;
  data[19] = !v39;
  m_correctionMode = (unsigned __int8)parameters->daltonizeOptions.m_correctionMode;
  data[11] = _XMM0;
  data[12] = _XMM1;
  data[17] = m_correctionMode;
  *(float *)&_XMM0 = parameters->daltonizeOptions.m_correctionScale;
  data[18] = (unsigned __int8)parameters->daltonizeOptions.m_simulationMode;
  data[16] = _XMM0;
  MatrixMultiply(&matBT2020FromLMS_0, matCorrectionLMSArray, &out);
  MatrixMultiply(&matBT2020FromLMS_0, &matCorrectionLMSArray[1], &v88);
  MatrixMultiply(&matBT2020FromLMS_0, &matCorrectionLMSArray[2], &v89);
  v41 = &identityMatrix33;
  if ( !parameters->daltonizeOptions.m_enabled )
    MatrixCopy33(&identityMatrix33, &dst);
  v42 = parameters->daltonizeOptions.m_correctionMode;
  m_simulationMode = parameters->daltonizeOptions.m_simulationMode;
  if ( v42 )
  {
    v44 = &matSimulationArray[(unsigned __int8)v42 - 1];
    v45 = (const tmat33_t<vec3_t> *)&v86.m[3 * (unsigned __int8)v42 + 1];
  }
  else
  {
    v44 = &identityMatrix33;
    v45 = &identityMatrix33;
  }
  if ( m_simulationMode )
    v41 = &matSimulationArray[(unsigned __int8)m_simulationMode - 1];
  MatrixMultiplyUniformScale(v45, parameters->daltonizeOptions.m_correctionScale, &in1);
  MatrixMultiply(v44, &matLMSFromBT2020_0, &b);
  MatrixSub(&matLMSFromBT2020_0, &b, &in2);
  MatrixMultiply(&in1, &in2, &v83);
  MatrixAdd(&matIdentity, &v83, &v84);
  MatrixMultiply(&matLMSFromBT2020_0, &v84, &v85);
  MatrixMultiply(v41, &v85, &v86);
  MatrixMultiply(&matBT2020FromLMS_0, &v86, &dst);
  data[20] = SLODWORD(dst.m[0].v[0]);
  data[22] = SLODWORD(dst.m[0].v[2]);
  data[21] = SLODWORD(dst.m[0].v[1]);
  v49 = dst.m[1];
  v51 = dst.m[2];
  *(float *)&data[23] = 0.0;
  v50 = 0.0;
  v52 = 0.0;
  R_UploadAndSetComputeConstants(computeState, 0, data, 0x170u, NULL);
  R_Dispatch(computeState, (s_universalClut.clutWidth + 7) >> 3, (s_universalClut.clutHeight + 7) >> 3, s_universalClut.clutDepth);
}

/*
==============
R_UniversalClut_GetClutIndex
==============
*/
__int64 R_UniversalClut_GetClutIndex(LocalClientNum_t clientIndex, GfxUniversalClutVariation variation)
{
  return (unsigned int)(variation + 2 * clientIndex);
}

/*
==============
R_UniversalClut_GetDefaultCLut
==============
*/
GfxImage *R_UniversalClut_GetDefaultCLut()
{
  return rgp.blackImage3D;
}

/*
==============
R_UniversalClut_GetImage
==============
*/
R_RT_Image *R_UniversalClut_GetImage(LocalClientNum_t clientIndex, GfxUniversalClutVariation variation)
{
  R_RT_ColorHandle *v2; 

  v2 = &s_universalClut.clutRt[variation + 2 * clientIndex];
  if ( v2->m_surfaceID )
    return &R_RT_Handle::GetSurface(v2)->m_image;
  else
    return 0i64;
}

/*
==============
R_UniversalClut_GetParameters
==============
*/
void R_UniversalClut_GetParameters(float *outScaleU, float *outScaleV, float *outScaleW, float *outOffsetU, float *outOffsetV, float *outOffsetW)
{
  float clutWidth; 
  float clutHeight; 
  __int64 clutDepth; 
  float v9; 

  clutWidth = (float)s_universalClut.clutWidth;
  clutHeight = (float)s_universalClut.clutHeight;
  clutDepth = s_universalClut.clutDepth;
  *outScaleU = (float)(clutWidth - 1.0) / clutWidth;
  v9 = (float)clutDepth;
  *outScaleV = (float)(clutHeight - 1.0) / clutHeight;
  *outScaleW = (float)(v9 - 1.0) / v9;
  *outOffsetU = 0.5 / clutWidth;
  *outOffsetV = 0.5 / clutHeight;
  *outOffsetW = 0.5 / v9;
}

/*
==============
R_UniversalClut_GetParameters
==============
*/
void R_UniversalClut_GetParameters(const GfxViewInfo *viewInfo, GfxUniversalClutVariation clutVariation, bool forceUpdate, GfxUniversalClutParameters *parameters)
{
  __int128 v4; 
  __int128 v5; 
  GfxUniversalClutVariation v8; 
  bool v10; 
  int v11; 
  unsigned __int8 m_clutCount; 
  unsigned int v13; 
  int m_identityWeight; 
  __int64 v15; 
  unsigned __int8 *m_weights; 
  __int64 v17; 
  __int64 v18; 
  unsigned __int8 v19; 
  int v20; 
  GfxImage *hdrClutImage; 
  float v22; 
  int inputColorimetry; 
  unsigned __int16 height; 
  GfxDisplayMappingParams *DisplayMappingParams; 
  float maxLuminance; 
  const GfxGradingClut *nvgColorGrading; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  GfxDisplayMappingParams result; 
  __int128 v34; 
  __int128 v35; 

  v8 = clutVariation;
  if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_universal_clut.cpp", 312, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  if ( !parameters && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_universal_clut.cpp", 313, ASSERT_TYPE_ASSERT, "(parameters)", (const char *)&queryFormat, "parameters") )
    __debugbreak();
  memset_0(&parameters->forceUpdate + 1, 0, 0x127ui64);
  parameters->forceUpdate = forceUpdate;
  v10 = forceUpdate;
  if ( r_universalClutForceUpdate->current.enabled )
    v10 = 1;
  *(_QWORD *)&parameters->universalClutType = 0i64;
  parameters->forceUpdate = v10;
  if ( r_colorGradingEnable->current.enabled )
  {
    v11 = 0;
    if ( r_colorGradingClutEnable->current.enabled )
    {
      parameters->colorGradingFlags = 1;
      v11 = 1;
    }
    if ( r_colorGradingAnalyticalEnable->current.enabled )
      parameters->colorGradingFlags = v11 | 2;
  }
  parameters->clutSetParameters.identityWeight = 1.0;
  parameters->clutSetParameters.clutImages[0] = NULL;
  *(_QWORD *)parameters->clutSetParameters.clutWeights = 0i64;
  parameters->clutSetParameters.clutInputColorSpace[0] = 1;
  parameters->clutSetParameters.clutImages[1] = NULL;
  parameters->clutSetParameters.clutInputColorSpace[1] = 1;
  parameters->clutSetParameters.clutImages[2] = NULL;
  *(_QWORD *)&parameters->clutSetParameters.clutWeights[2] = 0i64;
  parameters->clutSetParameters.clutInputColorSpace[2] = 1;
  parameters->clutSetParameters.clutImages[3] = NULL;
  parameters->clutSetParameters.clutInputColorSpace[3] = 1;
  parameters->clutSetParameters.clutImages[4] = NULL;
  *(_QWORD *)&parameters->clutSetParameters.clutWeights[4] = 0i64;
  parameters->clutSetParameters.clutInputColorSpace[4] = 1;
  parameters->clutSetParameters.clutImages[5] = NULL;
  parameters->clutSetParameters.clutInputColorSpace[5] = 1;
  parameters->clutSetParameters.clutImages[6] = NULL;
  *(_QWORD *)&parameters->clutSetParameters.clutWeights[6] = 0i64;
  parameters->clutSetParameters.clutInputColorSpace[6] = 1;
  parameters->clutSetParameters.clutImages[7] = NULL;
  parameters->clutSetParameters.clutInputColorSpace[7] = 1;
  parameters->analyticalGradingParameters.keyPositions[0] = viewInfo->colorGrading.colorGradingAnalytical.keyPositions[0];
  parameters->analyticalGradingParameters.keyGain[0].v[0] = viewInfo->colorGrading.colorGradingAnalytical.key[0].gain.v[0];
  parameters->analyticalGradingParameters.keyGain[0].v[1] = viewInfo->colorGrading.colorGradingAnalytical.key[0].gain.v[1];
  parameters->analyticalGradingParameters.keyGain[0].v[2] = viewInfo->colorGrading.colorGradingAnalytical.key[0].gain.v[2];
  parameters->analyticalGradingParameters.keySaturation[0] = viewInfo->colorGrading.colorGradingAnalytical.key[0].saturation;
  parameters->analyticalGradingParameters.keyPositions[1] = viewInfo->colorGrading.colorGradingAnalytical.keyPositions[1];
  parameters->analyticalGradingParameters.keyGain[1].v[0] = viewInfo->colorGrading.colorGradingAnalytical.key[1].gain.v[0];
  parameters->analyticalGradingParameters.keyGain[1].v[1] = viewInfo->colorGrading.colorGradingAnalytical.key[1].gain.v[1];
  parameters->analyticalGradingParameters.keyGain[1].v[2] = viewInfo->colorGrading.colorGradingAnalytical.key[1].gain.v[2];
  parameters->analyticalGradingParameters.keySaturation[1] = viewInfo->colorGrading.colorGradingAnalytical.key[1].saturation;
  parameters->analyticalGradingParameters.keyPositions[2] = viewInfo->colorGrading.colorGradingAnalytical.keyPositions[2];
  parameters->analyticalGradingParameters.keyGain[2].v[0] = viewInfo->colorGrading.colorGradingAnalytical.key[2].gain.v[0];
  parameters->analyticalGradingParameters.keyGain[2].v[1] = viewInfo->colorGrading.colorGradingAnalytical.key[2].gain.v[1];
  parameters->analyticalGradingParameters.keyGain[2].v[2] = viewInfo->colorGrading.colorGradingAnalytical.key[2].gain.v[2];
  parameters->analyticalGradingParameters.keySaturation[2] = viewInfo->colorGrading.colorGradingAnalytical.key[2].saturation;
  parameters->analyticalGradingParameters.preserveLum = viewInfo->colorGrading.colorGradingAnalytical.preserveLum;
  parameters->analyticalGradingParameters.lift.v[0] = viewInfo->colorGrading.colorGradingAnalytical.lift.v[0];
  parameters->analyticalGradingParameters.lift.v[1] = viewInfo->colorGrading.colorGradingAnalytical.lift.v[1];
  parameters->analyticalGradingParameters.lift.v[2] = viewInfo->colorGrading.colorGradingAnalytical.lift.v[2];
  parameters->analyticalGradingParameters.gamma.v[0] = viewInfo->colorGrading.colorGradingAnalytical.gamma.v[0];
  parameters->analyticalGradingParameters.gamma.v[1] = viewInfo->colorGrading.colorGradingAnalytical.gamma.v[1];
  parameters->analyticalGradingParameters.gamma.v[2] = viewInfo->colorGrading.colorGradingAnalytical.gamma.v[2];
  parameters->analyticalGradingParameters.gain.v[0] = viewInfo->colorGrading.colorGradingAnalytical.gain.v[0];
  parameters->analyticalGradingParameters.gain.v[1] = viewInfo->colorGrading.colorGradingAnalytical.gain.v[1];
  parameters->analyticalGradingParameters.gain.v[2] = viewInfo->colorGrading.colorGradingAnalytical.gain.v[2];
  m_clutCount = viewInfo->colorGrading.clutSet.m_clutCount;
  if ( m_clutCount )
  {
    v34 = v5;
    if ( m_clutCount > 8u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_universal_clut.cpp", 369, ASSERT_TYPE_ASSERT, "(clutCount <= 8)", (const char *)&queryFormat, "clutCount <= UNIVERSAL_COLOR_GRADING_MAX_CLUT_COUNT") )
      __debugbreak();
    v13 = 8;
    if ( m_clutCount < 8u )
      v13 = m_clutCount;
    parameters->clutSetParameters.identityWeight = (float)viewInfo->colorGrading.clutSet.m_identityWeight * 0.0039215689;
    m_identityWeight = viewInfo->colorGrading.clutSet.m_identityWeight;
    v15 = 0i64;
    v35 = v4;
    m_weights = viewInfo->colorGrading.clutSet.m_weights;
    v17 = v13;
    v18 = 72i64;
    do
    {
      v19 = *m_weights;
      if ( !*m_weights && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_universal_clut.cpp", 378, ASSERT_TYPE_ASSERT, "(weightQ > 0)", (const char *)&queryFormat, "weightQ > 0") )
        __debugbreak();
      v20 = v19;
      m_identityWeight += v19;
      hdrClutImage = viewInfo->colorGrading.clutSet.m_clutArray[v15]->hdrClutImage;
      v22 = (float)v20 * 0.0039215689;
      if ( hdrClutImage )
      {
        height = hdrClutImage->height;
        if ( height != 32 || hdrClutImage->width != 32 || hdrClutImage->depth != 32 )
        {
          LODWORD(v32) = hdrClutImage->depth;
          LODWORD(v31) = height;
          LODWORD(v30) = hdrClutImage->width;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_universal_clut.cpp", 392, ASSERT_TYPE_ASSERT, "(image->height == 32 && image->width == 32 && image->depth == 32)", "%s\n\tInvalid CLUT texture dimensions: '%s' = %dx%dx%d", "image->height == HDR_GRADING_CLUT_SIZE && image->width == HDR_GRADING_CLUT_SIZE && image->depth == HDR_GRADING_CLUT_SIZE", hdrClutImage->name, v30, v31, v32) )
            __debugbreak();
        }
        *(float *)((char *)&parameters->clutSetParameters.identityWeight + v18) = v22;
        parameters->clutSetParameters.clutImages[v15] = hdrClutImage;
        inputColorimetry = viewInfo->colorGrading.clutSet.m_clutArray[v15]->inputColorimetry;
      }
      else
      {
        parameters->clutSetParameters.identityWeight = v22 + parameters->clutSetParameters.identityWeight;
        *(float *)((char *)&parameters->clutSetParameters.identityWeight + v18) = 0.0;
        parameters->clutSetParameters.clutImages[v15] = NULL;
        inputColorimetry = 1;
      }
      *(_DWORD *)((char *)&parameters->clutSetParameters.clutImages[3] + v18) = inputColorimetry;
      v18 += 4i64;
      ++m_weights;
      ++v15;
      --v17;
    }
    while ( v17 );
    v8 = clutVariation;
    if ( m_identityWeight != 255 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_universal_clut.cpp", 399, ASSERT_TYPE_ASSERT, "(sumWeightQ == GFX_COLOR_GRADING_CLUT_WEIGHT_ONE)", (const char *)&queryFormat, "sumWeightQ == GFX_COLOR_GRADING_CLUT_WEIGHT_ONE") )
      __debugbreak();
  }
  LODWORD(parameters->universalClutTonemapAcesRrt) = r_universalTonemapUseAcesRrt->current.integer;
  LODWORD(parameters->universalClutTonemapAcesRedModifier) = r_universalTonemapAcesRedModifier->current.integer;
  parameters->displayMappingColorimetry = R_GetFramebufferColorimetry();
  DisplayMappingParams = R_GetDisplayMappingParams(&result);
  maxLuminance = DisplayMappingParams->maxLuminance;
  *(double *)&parameters->displayMappingParams.gamma = *(double *)&DisplayMappingParams->gamma;
  parameters->displayMappingParams.maxLuminance = maxLuminance;
  LODWORD(parameters->displayMappingSdrTargetLum) = r_displayMappingSdrTargetLum->current.integer;
  LODWORD(parameters->displayMappingEmulateSdrMaxLum) = r_displayMappingSdrEmulationMaxLum->current.integer;
  *(double *)&parameters->daltonizeOptions.m_enabled = *(double *)&viewInfo->daltonizeOptions.m_enabled;
  *(_DWORD *)&parameters->daltonizeOptions.m_simulationMode = *(_DWORD *)&viewInfo->daltonizeOptions.m_simulationMode;
  if ( v8 == DODGE )
  {
    parameters->colorGradingFlags = 0;
    nvgColorGrading = viewInfo->nvgColorGrading;
    if ( nvgColorGrading )
    {
      *(_QWORD *)&parameters->universalClutTonemapAcesRrt = 1065353216i64;
      *(_WORD *)&parameters->daltonizeOptions.m_enabled = 0;
      parameters->daltonizeOptions.m_correctionScale = 0.0;
      parameters->daltonizeOptions.m_simulationMode = R_DALTONIZE_NONE;
      parameters->colorGradingFlags |= 1u;
      parameters->displayMappingColorimetry = GFX_COLORIMETRY_BT709_SRGB;
      *(_QWORD *)&parameters->displayMappingParams.gamma = 1065353216i64;
      parameters->displayMappingParams.maxLuminance = 1.0;
      *(_QWORD *)&parameters->displayMappingSdrTargetLum = 1134985216i64;
      parameters->clutSetParameters.clutImages[0] = NULL;
      *(_QWORD *)parameters->clutSetParameters.clutWeights = 0i64;
      parameters->clutSetParameters.clutInputColorSpace[0] = 1;
      parameters->clutSetParameters.clutImages[1] = NULL;
      parameters->clutSetParameters.clutInputColorSpace[1] = 1;
      parameters->clutSetParameters.clutImages[2] = NULL;
      *(_QWORD *)&parameters->clutSetParameters.clutWeights[2] = 0i64;
      parameters->clutSetParameters.clutInputColorSpace[2] = 1;
      parameters->clutSetParameters.clutImages[3] = NULL;
      parameters->clutSetParameters.clutInputColorSpace[3] = 1;
      parameters->clutSetParameters.clutImages[4] = NULL;
      *(_QWORD *)&parameters->clutSetParameters.clutWeights[4] = 0i64;
      parameters->clutSetParameters.clutInputColorSpace[4] = 1;
      parameters->clutSetParameters.clutImages[5] = NULL;
      parameters->clutSetParameters.clutInputColorSpace[5] = 1;
      parameters->clutSetParameters.clutImages[6] = NULL;
      *(_QWORD *)&parameters->clutSetParameters.clutWeights[6] = 0i64;
      parameters->clutSetParameters.clutInputColorSpace[6] = 1;
      parameters->clutSetParameters.clutImages[7] = NULL;
      parameters->clutSetParameters.clutInputColorSpace[7] = 1;
      parameters->clutSetParameters.identityWeight = 0.0;
      parameters->clutSetParameters.clutImages[0] = nvgColorGrading->hdrClutImage;
      parameters->clutSetParameters.clutWeights[0] = 1.0;
      parameters->clutSetParameters.clutInputColorSpace[0] = nvgColorGrading->inputColorimetry;
    }
    else
    {
      parameters->clutSetParameters.identityWeight = 1.0;
      parameters->clutSetParameters.clutImages[0] = NULL;
      *(_QWORD *)parameters->clutSetParameters.clutWeights = 0i64;
      parameters->clutSetParameters.clutInputColorSpace[0] = 1;
      parameters->clutSetParameters.clutImages[1] = NULL;
      parameters->clutSetParameters.clutInputColorSpace[1] = 1;
      parameters->clutSetParameters.clutImages[2] = NULL;
      *(_QWORD *)&parameters->clutSetParameters.clutWeights[2] = 0i64;
      parameters->clutSetParameters.clutInputColorSpace[2] = 1;
      parameters->clutSetParameters.clutImages[3] = NULL;
      parameters->clutSetParameters.clutInputColorSpace[3] = 1;
      parameters->clutSetParameters.clutImages[4] = NULL;
      *(_QWORD *)&parameters->clutSetParameters.clutWeights[4] = 0i64;
      parameters->clutSetParameters.clutInputColorSpace[4] = 1;
      parameters->clutSetParameters.clutImages[5] = NULL;
      parameters->clutSetParameters.clutInputColorSpace[5] = 1;
      parameters->clutSetParameters.clutImages[6] = NULL;
      *(_QWORD *)&parameters->clutSetParameters.clutWeights[6] = 0i64;
      parameters->clutSetParameters.clutInputColorSpace[6] = 1;
      parameters->clutSetParameters.clutImages[7] = NULL;
      parameters->clutSetParameters.clutInputColorSpace[7] = 1;
    }
    _XMM0 = LODWORD(FLOAT_1_0);
    parameters->analyticalGradingParameters.keyPositions[0] = 0.0;
    parameters->analyticalGradingParameters.keyPositions[1] = 0.5;
    parameters->analyticalGradingParameters.keyPositions[2] = 1.0;
    __asm { vunpcklps xmm0, xmm0, xmm0 }
    *(double *)parameters->analyticalGradingParameters.keyGain[0].v = *(double *)&_XMM0;
    parameters->analyticalGradingParameters.keyGain[0].v[2] = FLOAT_1_0;
    parameters->analyticalGradingParameters.keySaturation[0] = 1.0;
    *(double *)parameters->analyticalGradingParameters.keyGain[1].v = *(double *)&_XMM0;
    parameters->analyticalGradingParameters.keyGain[1].v[2] = FLOAT_1_0;
    parameters->analyticalGradingParameters.keySaturation[1] = 1.0;
    *(double *)parameters->analyticalGradingParameters.keyGain[2].v = *(double *)&_XMM0;
    parameters->analyticalGradingParameters.keyGain[2].v[2] = FLOAT_1_0;
    *(_QWORD *)&parameters->analyticalGradingParameters.keySaturation[2] = 1065353216i64;
    *(_QWORD *)parameters->analyticalGradingParameters.lift.v = 0i64;
    parameters->analyticalGradingParameters.lift.v[2] = 0.0;
    parameters->analyticalGradingParameters.gamma.v[0] = 0.5;
    parameters->analyticalGradingParameters.gamma.v[1] = 0.5;
    parameters->analyticalGradingParameters.gamma.v[2] = 0.5;
    parameters->analyticalGradingParameters.gain.v[0] = 1.0;
    parameters->analyticalGradingParameters.gain.v[1] = 1.0;
    parameters->analyticalGradingParameters.gain.v[2] = 1.0;
  }
}

/*
==============
R_UniversalClut_Initialize
==============
*/

void __fastcall R_UniversalClut_Initialize(double _XMM0_8)
{
  unsigned int v1; 
  __int64 v2; 
  __int64 v3; 
  __m256i v4; 

  s_universalClut.clutCount = 4;
  v1 = 0;
  s_universalClut.clutWidth = 64;
  s_universalClut.clutHeight = 64;
  s_universalClut.clutDepth = 64;
  do
  {
    v2 = v1;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    v3 = v1++;
    v4.m256i_i16[0] = 0;
    v4.m256i_i32[2] = 0;
    *(_OWORD *)&v4.m256i_u64[2] = *(_OWORD *)&_XMM0_8;
    s_universalClut.clutRt[v2] = (R_RT_ColorHandle)v4;
    s_universalClut.requiresUpdate[v3] = 1;
  }
  while ( v1 < s_universalClut.clutCount );
}

/*
==============
R_UniversalClut_LazyAllocRts
==============
*/

void __fastcall R_UniversalClut_LazyAllocRts(double _XMM0_8)
{
  unsigned int i; 
  __int64 v2; 
  R_RT_Handle v3; 
  bool v5; 
  R_RT_Handle v6; 
  R_RT_Handle v7; 
  R_RT_Handle result; 

  if ( !R_RT_Handle::IsValid(s_universalClut.clutRt) )
  {
    for ( i = 0; i < s_universalClut.clutCount; s_universalClut.parameters[v2].forceUpdate = 1 )
    {
      v2 = i;
      v3 = *R_RT_CreateInternal(&result, s_universalClut.clutWidth, s_universalClut.clutHeight, s_universalClut.clutWidth, s_universalClut.clutHeight, s_universalClut.clutDepth, 1u, 1u, g_R_RT_renderTargetFmts[1], R_RT_Flag_RWView|R_RT_Flag_RTView, (R_RT_FlagsInternal)2, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE, s_universalClutNames[i], 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_universal_clut.cpp(164)");
      v7 = v3;
      v6 = v3;
      if ( LOWORD(_XMM0_8) )
      {
        R_RT_Handle::GetSurface(&v6);
        if ( (R_RT_Handle::GetSurface(&v6)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        {
          v3 = v6;
          __debugbreak();
        }
        else
        {
          v3 = v6;
        }
      }
      else
      {
        __asm { vpextrd rax, xmm0, 2 }
        if ( (_DWORD)_RAX )
        {
          v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
          v3 = v7;
          if ( v5 )
            __debugbreak();
        }
      }
      ++i;
      s_universalClut.clutRt[v2] = (R_RT_ColorHandle)v3;
    }
  }
}

/*
==============
R_UniversalClut_ResetAnalyticalGradingParameters
==============
*/
void R_UniversalClut_ResetAnalyticalGradingParameters(GfxUniversalClutAnalyticalGradingParameters *analyticalGradingParameters)
{
  _XMM0 = LODWORD(FLOAT_1_0);
  analyticalGradingParameters->keyPositions[1] = 0.5;
  analyticalGradingParameters->keyPositions[0] = 0.0;
  analyticalGradingParameters->keyPositions[2] = 1.0;
  __asm { vunpcklps xmm0, xmm0, xmm0 }
  *(double *)analyticalGradingParameters->keyGain[0].v = *(double *)&_XMM0;
  analyticalGradingParameters->keyGain[0].v[2] = FLOAT_1_0;
  analyticalGradingParameters->keySaturation[0] = 1.0;
  *(double *)analyticalGradingParameters->keyGain[1].v = *(double *)&_XMM0;
  analyticalGradingParameters->keyGain[1].v[2] = FLOAT_1_0;
  analyticalGradingParameters->keySaturation[1] = 1.0;
  *(double *)analyticalGradingParameters->keyGain[2].v = *(double *)&_XMM0;
  analyticalGradingParameters->keyGain[2].v[2] = FLOAT_1_0;
  *(_QWORD *)&analyticalGradingParameters->keySaturation[2] = 1065353216i64;
  *(_QWORD *)analyticalGradingParameters->lift.v = 0i64;
  analyticalGradingParameters->lift.v[2] = 0.0;
  analyticalGradingParameters->gamma.v[0] = 0.5;
  analyticalGradingParameters->gamma.v[1] = 0.5;
  analyticalGradingParameters->gamma.v[2] = 0.5;
  analyticalGradingParameters->gain.v[0] = 1.0;
  analyticalGradingParameters->gain.v[1] = 1.0;
  analyticalGradingParameters->gain.v[2] = 1.0;
}

/*
==============
R_UniversalClut_ResetClutSetParameters
==============
*/
void R_UniversalClut_ResetClutSetParameters(GfxUniversalClutClutSetParameters *clutSetParameters)
{
  clutSetParameters->identityWeight = 1.0;
  clutSetParameters->clutImages[0] = NULL;
  *(_QWORD *)clutSetParameters->clutWeights = 0i64;
  clutSetParameters->clutInputColorSpace[0] = 1;
  clutSetParameters->clutImages[1] = NULL;
  clutSetParameters->clutInputColorSpace[1] = 1;
  clutSetParameters->clutImages[2] = NULL;
  *(_QWORD *)&clutSetParameters->clutWeights[2] = 0i64;
  clutSetParameters->clutInputColorSpace[2] = 1;
  clutSetParameters->clutImages[3] = NULL;
  clutSetParameters->clutInputColorSpace[3] = 1;
  clutSetParameters->clutImages[4] = NULL;
  *(_QWORD *)&clutSetParameters->clutWeights[4] = 0i64;
  clutSetParameters->clutInputColorSpace[4] = 1;
  clutSetParameters->clutImages[5] = NULL;
  clutSetParameters->clutInputColorSpace[5] = 1;
  clutSetParameters->clutImages[6] = NULL;
  *(_QWORD *)&clutSetParameters->clutWeights[6] = 0i64;
  clutSetParameters->clutInputColorSpace[6] = 1;
  clutSetParameters->clutImages[7] = NULL;
  clutSetParameters->clutInputColorSpace[7] = 1;
}

/*
==============
R_UniversalClut_SetParametersImage
==============
*/
void R_UniversalClut_SetParametersImage(const GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxImage *clutImageMainView, const GfxImage *clutImageSecondary)
{
  GfxImage *blackImage3D; 
  GfxCmdBufSourceState *source; 
  GfxCmdBufInput *p_input; 
  GfxImage *v9; 
  GfxCmdBufSourceState *v10; 
  GfxCmdBufInput *v11; 
  float clutWidth; 
  float clutHeight; 
  float clutDepth; 
  GfxCmdBufSourceState *v15; 

  blackImage3D = rgp.blackImage3D;
  source = gfxContext->source;
  if ( clutImageMainView )
    blackImage3D = (GfxImage *)clutImageMainView;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[67] = blackImage3D;
  v9 = rgp.blackImage3D;
  v10 = gfxContext->source;
  if ( clutImageSecondary )
    v9 = (GfxImage *)clutImageSecondary;
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v11 = &v10->input;
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v11->codeImages[68] = v9;
  clutWidth = (float)s_universalClut.clutWidth;
  clutHeight = (float)s_universalClut.clutHeight;
  clutDepth = (float)s_universalClut.clutDepth;
  v15 = gfxContext->source;
  v15->input.consts[126].v[0] = (float)(clutWidth - 1.0) / clutWidth;
  v15->input.consts[126].v[1] = (float)(clutHeight - 1.0) / clutHeight;
  v15->input.consts[126].v[3] = 0.0;
  v15->input.consts[126].v[2] = (float)(clutDepth - 1.0) / clutDepth;
  ++v15->constVersions[126];
  v15->input.consts[127].v[0] = 0.5 / clutWidth;
  v15->input.consts[127].v[2] = 0.5 / clutDepth;
  v15->input.consts[127].v[1] = 0.5 / clutHeight;
  v15->input.consts[127].v[3] = 0.0;
  ++v15->constVersions[127];
}

/*
==============
R_UniversalClut_Shutdown
==============
*/

void __fastcall R_UniversalClut_Shutdown(double _XMM0_8)
{
  unsigned int v1; 
  __int64 v2; 
  __m256i v3; 

  if ( R_RT_Handle::IsValid(s_universalClut.clutRt) )
  {
    v1 = 0;
    if ( s_universalClut.clutCount )
    {
      do
      {
        v2 = v1;
        v3 = (__m256i)s_universalClut.clutRt[v2];
        R_RT_DestroyInternal((R_RT_Handle *)&v3);
        __asm { vpxor   xmm0, xmm0, xmm0 }
        *(_OWORD *)&v3.m256i_u64[2] = *(_OWORD *)&_XMM0_8;
        v3.m256i_i16[0] = 0;
        ++v1;
        v3.m256i_i32[2] = 0;
        s_universalClut.clutRt[v2] = (R_RT_ColorHandle)v3;
      }
      while ( v1 < s_universalClut.clutCount );
      s_universalClut.clutCount = 0;
    }
    else
    {
      s_universalClut.clutCount = 0;
    }
  }
  else
  {
    s_universalClut.clutCount = 0;
  }
}

/*
==============
R_UniversalClut_Update
==============
*/
__int64 R_UniversalClut_Update(const GfxViewInfo *viewInfo, const GfxImage *exportImage, bool forceUpdate)
{
  unsigned __int8 v3; 
  GfxUniversalClutVariation i; 
  __int64 v7; 
  GfxUniversalClutParameters *v8; 
  GfxUniversalClutParameters *p_parameters; 
  __m256i *v10; 
  __int64 v11; 
  __m256i v12; 
  __int128 v13; 
  const GfxImage *v14; 
  GfxUniversalClutParameters parameters; 

  v3 = 0;
  for ( i = MOVEMENT; (unsigned int)i < COUNT; ++i )
  {
    v7 = (unsigned int)(i + 2 * viewInfo->clientIndex);
    R_UniversalClut_GetParameters(viewInfo, i, forceUpdate, &parameters);
    v8 = &s_universalClut.parameters[v7];
    if ( v8->forceUpdate || parameters.forceUpdate || memcmp_0(&s_universalClut.parameters[v7], &parameters, 0x128ui64) )
    {
      v3 = 1;
      p_parameters = &parameters;
      v10 = (__m256i *)&s_universalClut.parameters[v7];
      v11 = 2i64;
      do
      {
        v10 += 4;
        v12 = *(__m256i *)&p_parameters->forceUpdate;
        v13 = *(_OWORD *)&p_parameters->clutSetParameters.clutWeights[6];
        p_parameters = (GfxUniversalClutParameters *)((char *)p_parameters + 128);
        v10[-4] = v12;
        v10[-3] = *(__m256i *)p_parameters[-1].analyticalGradingParameters.keySaturation;
        v10[-2] = *(__m256i *)&p_parameters[-1].analyticalGradingParameters.gamma.y;
        *(_OWORD *)v10[-1].m256i_i8 = *(_OWORD *)&p_parameters[-1].displayMappingParams.gamma;
        *(_OWORD *)&v10[-1].m256i_u64[2] = v13;
        --v11;
      }
      while ( v11 );
      v14 = p_parameters->clutSetParameters.clutImages[1];
      *v10 = *(__m256i *)&p_parameters->forceUpdate;
      v10[1].m256i_i64[0] = (__int64)v14;
      s_universalClut.requiresUpdate[v7] = 1;
      v8->forceUpdate = 0;
    }
  }
  return v3;
}

