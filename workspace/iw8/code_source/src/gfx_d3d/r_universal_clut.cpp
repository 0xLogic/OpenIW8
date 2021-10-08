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
  unsigned int v8; 
  __int64 v9; 
  bool v13; 
  const R_RT_Surface *Surface; 
  char v16; 
  __int64 v17; 
  GfxUniversalClutParameters *v18; 
  __int64 v21; 
  const GfxImage *v28; 
  const R_RT_Surface *v29; 
  const GfxTexture *Resident; 
  const GfxTexture *v31; 
  LocalClientNum_t clientIndex; 
  bool *v33; 
  bool *v34; 
  __int64 v35; 
  const GfxTexture *v36; 
  const GfxTexture *v37; 
  R_RT_Handle v40; 
  R_RT_Handle result; 
  GfxUniversalClutParameters parameters; 

  v4 = computeState;
  v5 = viewInfo;
  v6 = MOVEMENT;
  _R13 = 0x140000000ui64;
  if ( !R_RT_Handle::IsValid(s_universalClut.clutRt) )
  {
    v8 = 0;
    if ( s_universalClut.clutCount )
    {
      do
      {
        v9 = v8;
        _RAX = R_RT_CreateInternal(&result, s_universalClut.clutWidth, s_universalClut.clutHeight, s_universalClut.clutWidth, s_universalClut.clutHeight, s_universalClut.clutDepth, 1u, 1u, g_R_RT_renderTargetFmts[1], R_RT_Flag_RWView|R_RT_Flag_RTView, (R_RT_FlagsInternal)2, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE, s_universalClutNames[v8], 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_universal_clut.cpp(164)");
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovd   eax, xmm0
          vmovups [rsp+288h+var_1B8], ymm0
          vmovups ymmword ptr [rsp+288h+var_1D8.m_surfaceID], ymm0
        }
        if ( (_WORD)_RAX )
        {
          R_RT_Handle::GetSurface(&v40);
          if ( (R_RT_Handle::GetSurface(&v40)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
          {
            __asm { vmovups ymm0, ymmword ptr [rsp+288h+var_1D8.m_surfaceID] }
            __debugbreak();
          }
          else
          {
            __asm { vmovups ymm0, ymmword ptr [rsp+288h+var_1D8.m_surfaceID] }
          }
        }
        else
        {
          __asm { vpextrd rax, xmm0, 2 }
          if ( (_DWORD)_RAX )
          {
            v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
            __asm { vmovups ymm0, [rsp+288h+var_1B8] }
            if ( v13 )
              __debugbreak();
          }
        }
        _RAX = 32i64 * v8++;
        __asm { vmovups ymmword ptr [rax+r13+1421DD30h], ymm0 }
        s_universalClut.parameters[v9].forceUpdate = 1;
      }
      while ( v8 < s_universalClut.clutCount );
      v5 = viewInfo;
      v6 = MOVEMENT;
      v4 = computeState;
    }
  }
  Surface = R_RT_Handle::GetSurface(&s_universalClut.clutRt[2 * v5->clientIndex]);
  v16 = 0;
  do
  {
    v17 = (unsigned int)(v6 + 2 * v5->clientIndex);
    R_UniversalClut_GetParameters(v5, v6, 0, &parameters);
    v18 = &s_universalClut.parameters[v17];
    if ( v18->forceUpdate || parameters.forceUpdate || memcmp_0(&s_universalClut.parameters[v17], &parameters, 0x128ui64) )
    {
      v16 = 1;
      _RAX = &parameters;
      _RDX = &s_universalClut.parameters[v17];
      v21 = 2i64;
      do
      {
        _RDX = (GfxUniversalClutParameters *)((char *)_RDX + 128);
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups xmm1, xmmword ptr [rax+70h]
        }
        _RAX = (GfxUniversalClutParameters *)((char *)_RAX + 128);
        __asm
        {
          vmovups ymmword ptr [rdx-80h], ymm0
          vmovups ymm0, ymmword ptr [rax-60h]
          vmovups ymmword ptr [rdx-60h], ymm0
          vmovups ymm0, ymmword ptr [rax-40h]
          vmovups ymmword ptr [rdx-40h], ymm0
          vmovups xmm0, xmmword ptr [rax-20h]
          vmovups xmmword ptr [rdx-20h], xmm0
          vmovups xmmword ptr [rdx-10h], xmm1
        }
        --v21;
      }
      while ( v21 );
      __asm { vmovups ymm0, ymmword ptr [rax] }
      v28 = _RAX->clutSetParameters.clutImages[1];
      __asm { vmovups ymmword ptr [rdx], ymm0 }
      _RDX->clutSetParameters.clutImages[1] = v28;
      s_universalClut.requiresUpdate[v17] = 1;
      v18->forceUpdate = 0;
    }
    ++v6;
  }
  while ( (unsigned int)v6 < COUNT );
  if ( v16 )
  {
    v29 = R_RT_Handle::GetSurface(&s_universalClut.clutRt[2 * v5->clientIndex + 1]);
    R_ProfBeginNamedEvent(v4, "Universal CLUT Generate");
    R_GPU_BeginTimer(GPU_TIMER_UNIVERSAL_CLUT_GENERATE);
    Resident = R_Texture_GetResident(Surface->m_image.m_base.textureId);
    R_HW_AddResourceTransition(v4, Resident, 0xFFFFFFFF, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    v31 = R_Texture_GetResident(v29->m_image.m_base.textureId);
    R_HW_AddResourceTransition(v4, v31, 0xFFFFFFFF, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_HW_FlushResourceTransitions(v4);
    clientIndex = v5->clientIndex;
    v33 = &s_universalClut.requiresUpdate[2 * clientIndex];
    if ( *v33 )
    {
      R_UniversalClut_GenerateSingle(v4, &s_universalClut.parameters[2 * clientIndex], &Surface->m_image.m_base);
      *v33 = 0;
      clientIndex = v5->clientIndex;
    }
    v34 = &s_universalClut.requiresUpdate[2 * clientIndex + 1];
    v35 = (unsigned int)(2 * clientIndex + 1);
    if ( *v34 )
    {
      R_UniversalClut_GenerateSingle(v4, &s_universalClut.parameters[v35], &v29->m_image.m_base);
      *v34 = 0;
    }
    v36 = R_Texture_GetResident(Surface->m_image.m_base.textureId);
    R_HW_AddResourceTransition(v4, v36, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    v37 = R_Texture_GetResident(v29->m_image.m_base.textureId);
    R_HW_AddResourceTransition(v4, v37, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
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
  tmat33_t<vec3_t> v13; 
  tmat33_t<vec3_t> v14; 
  tmat33_t<vec3_t> v15; 
  tmat33_t<vec3_t> v16; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> v18; 
  tmat33_t<vec3_t> v19; 

  _RDI = daltonizeOptions;
  MatrixMultiply(&matBT2020FromLMS_0, matCorrectionLMSArray, &out);
  MatrixMultiply(&matBT2020FromLMS_0, &matCorrectionLMSArray[1], &v18);
  MatrixMultiply(&matBT2020FromLMS_0, &matCorrectionLMSArray[2], &v19);
  v4 = &identityMatrix33;
  if ( !_RDI->m_enabled )
    MatrixCopy33(&identityMatrix33, outDaltonizeMatrix);
  m_correctionMode = _RDI->m_correctionMode;
  m_simulationMode = _RDI->m_simulationMode;
  if ( m_correctionMode )
  {
    v7 = &matSimulationArray[(unsigned __int8)m_correctionMode - 1];
    v8 = (const tmat33_t<vec3_t> *)&v16.m[3 * (unsigned __int8)m_correctionMode + 1];
  }
  else
  {
    v7 = &identityMatrix33;
    v8 = &identityMatrix33;
  }
  if ( m_simulationMode )
    v4 = &matSimulationArray[(unsigned __int8)m_simulationMode - 1];
  __asm { vmovss  xmm1, dword ptr [rdi+4]; b }
  MatrixMultiplyUniformScale(v8, *(float *)&_XMM1, &in1);
  MatrixMultiply(v7, &matLMSFromBT2020_0, &b);
  MatrixSub(&matLMSFromBT2020_0, &b, &in2);
  MatrixMultiply(&in1, &in2, &v13);
  MatrixAdd(&matIdentity, &v13, &v14);
  MatrixMultiply(&matLMSFromBT2020_0, &v14, &v15);
  MatrixMultiply(v4, &v15, &v16);
  MatrixMultiply(&matBT2020FromLMS_0, &v16, outDaltonizeMatrix);
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
  __int64 v9; 
  const R_RT_Surface *Surface; 
  R_RT_Image *v11; 
  R_RT_ColorHandle *v12; 
  GfxImage *blackImage3D; 
  GfxImage *p_m_base; 

  _RSI = gfxContext;
  __asm { vmovaps [rsp+58h+var_28], xmm6 }
  clientIndex = viewInfo->clientIndex;
  p_m_image = NULL;
  v9 = (unsigned int)(2 * clientIndex);
  if ( s_universalClut.clutRt[v9].m_surfaceID )
  {
    Surface = R_RT_Handle::GetSurface(&s_universalClut.clutRt[v9]);
    clientIndex = viewInfo->clientIndex;
    p_m_image = &Surface->m_image;
  }
  v11 = NULL;
  v12 = &s_universalClut.clutRt[2 * clientIndex + 1];
  if ( v12->m_surfaceID )
    v11 = &R_RT_Handle::GetSurface(v12)->m_image;
  __asm { vmovups xmm0, xmmword ptr [rsi] }
  blackImage3D = rgp.blackImage3D;
  if ( p_m_image )
    blackImage3D = &p_m_image->m_base;
  __asm { vmovq   rbx, xmm0 }
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( _RBX == -1792 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  *(_QWORD *)(_RBX + 8472) = blackImage3D;
  p_m_base = rgp.blackImage3D;
  if ( v11 )
    p_m_base = &v11->m_base;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( _RBX == -1792 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  __asm { vmovss  xmm3, cs:__real@3f800000 }
  *(_QWORD *)(_RBX + 8480) = p_m_base;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vxorps  xmm4, xmm4, xmm4
    vcvtsi2ss xmm4, xmm4, rax
    vsubss  xmm0, xmm4, xmm3
    vdivss  xmm1, xmm0, xmm4
    vxorps  xmm5, xmm5, xmm5
    vcvtsi2ss xmm5, xmm5, rax
    vmovss  dword ptr [rbx+0EE0h], xmm1
  }
  *(_DWORD *)(_RBX + 3820) = 0;
  __asm
  {
    vcvtsi2ss xmm6, xmm6, rax
    vsubss  xmm1, xmm6, xmm3
    vsubss  xmm2, xmm5, xmm3
    vdivss  xmm0, xmm2, xmm5
    vmovss  dword ptr [rbx+0EE4h], xmm0
    vdivss  xmm2, xmm1, xmm6
    vmovss  dword ptr [rbx+0EE8h], xmm2
  }
  ++*(_WORD *)(_RBX + 10416);
  __asm
  {
    vmovss  xmm2, cs:__real@3f000000
    vdivss  xmm0, xmm2, xmm4
    vmovss  dword ptr [rbx+0EF0h], xmm0
    vdivss  xmm0, xmm2, xmm6
    vmovaps xmm6, [rsp+58h+var_28]
    vmovss  dword ptr [rbx+0EF8h], xmm0
  }
  *(_DWORD *)(_RBX + 3836) = 0;
  __asm
  {
    vdivss  xmm1, xmm2, xmm5
    vmovss  dword ptr [rbx+0EF4h], xmm1
  }
  ++*(_WORD *)(_RBX + 10418);
}

/*
==============
R_UniversalClut_AreAnalyticalGradingParametersIdentity
==============
*/
bool R_UniversalClut_AreAnalyticalGradingParametersIdentity(const GfxUniversalClutAnalyticalGradingParameters *analyticalGradingParameters)
{
  __int64 v6; 
  bool result; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  char v32; 
  void *retaddr; 

  _RAX = &retaddr;
  v6 = tls_index;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovss  xmm6, cs:__real@3f800000
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
  }
  if ( dword_15421E3C0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v6) + 1772i64) )
  {
    j__Init_thread_header(&dword_15421E3C0);
    if ( dword_15421E3C0 == -1 )
    {
      __asm
      {
        vunpcklps xmm0, xmm6, xmm6
        vmovss  [rsp+68h+var_40], xmm6
        vmovsd  cs:v1, xmm0
      }
      dword_15421E3B8 = v26;
      j__Init_thread_footer(&dword_15421E3C0);
    }
  }
  __asm
  {
    vmovss  xmm7, cs:__real@3a83126f
    vmovss  xmm8, cs:__real@358637be
    vmovaps xmm2, xmm7; epsilon
  }
  if ( VecNCompareCustomEpsilon(analyticalGradingParameters->keyGain[0].v, &v1, *(float *)&_XMM2, 3) )
  {
    __asm
    {
      vsubss  xmm0, xmm6, dword ptr [rdi]
      vmulss  xmm1, xmm0, xmm0
      vcomiss xmm1, xmm8
    }
  }
  if ( dword_15421E378 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v6) + 1772i64) )
  {
    j__Init_thread_header(&dword_15421E378);
    if ( dword_15421E378 == -1 )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vmovss  [rsp+68h+var_40], xmm0
        vunpcklps xmm0, xmm0, xmm0
        vmovsd  cs:qword_15421E368, xmm0
      }
      dword_15421E370 = v27;
      j__Init_thread_footer(&dword_15421E378);
    }
  }
  if ( dword_15421E390 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v6) + 1772i64) )
  {
    j__Init_thread_header(&dword_15421E390);
    if ( dword_15421E390 == -1 )
    {
      __asm
      {
        vmovss  xmm0, cs:__real@3f000000
        vmovss  [rsp+68h+var_40], xmm0
        vunpcklps xmm0, xmm0, xmm0
        vmovsd  cs:qword_15421E380, xmm0
      }
      dword_15421E388 = v28;
      j__Init_thread_footer(&dword_15421E390);
    }
  }
  if ( dword_15421E3A8 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v6) + 1772i64) )
  {
    j__Init_thread_header(&dword_15421E3A8);
    if ( dword_15421E3A8 == -1 )
    {
      __asm
      {
        vunpcklps xmm0, xmm6, xmm6
        vmovss  [rsp+68h+var_40], xmm6
        vmovsd  cs:qword_15421E398, xmm0
      }
      dword_15421E3A0 = v29;
      j__Init_thread_footer(&dword_15421E3A8);
    }
  }
  __asm { vmovaps xmm2, xmm7; epsilon }
  if ( VecNCompareCustomEpsilon(analyticalGradingParameters->lift.v, &qword_15421E368, *(float *)&_XMM2, 3) )
  {
    __asm { vmovaps xmm2, xmm7; epsilon }
    if ( VecNCompareCustomEpsilon(analyticalGradingParameters->gamma.v, &qword_15421E380, *(float *)&_XMM2, 3) )
    {
      __asm { vmovaps xmm2, xmm7; epsilon }
      VecNCompareCustomEpsilon(analyticalGradingParameters->gain.v, &qword_15421E398, *(float *)&_XMM2, 3);
    }
  }
  result = 0;
  __asm { vmovaps xmm6, [rsp+68h+var_18] }
  _R11 = &v32;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm7, [rsp+68h+var_28]
  }
  return result;
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
  unsigned int v2; 
  R_RT_Handle v6; 

  _RBP = s_universalClut.clutRt;
  if ( R_RT_Handle::IsValid(s_universalClut.clutRt) )
  {
    v2 = 0;
    while ( v2 < s_universalClut.clutCount )
    {
      _RBX = 32i64 * v2;
      __asm
      {
        vmovups ymm0, ymmword ptr [rbx+rbp]
        vmovups ymmword ptr [rsp+48h+var_28.m_surfaceID], ymm0
      }
      R_RT_DestroyInternal(&v6);
      __asm
      {
        vpxor   xmm0, xmm0, xmm0
        vmovdqu xmmword ptr [rsp+48h+var_28.m_tracking.m_name], xmm0
      }
      v6.m_surfaceID = 0;
      ++v2;
      v6.m_tracking.m_allocCounter = 0;
      __asm
      {
        vmovups ymm1, ymmword ptr [rsp+48h+var_28.m_surfaceID]
        vmovups ymmword ptr [rbx+rbp], ymm1
      }
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
  int colorGradingFlags; 
  char *v10; 
  _DWORD *v11; 
  __int64 v12; 
  int v13; 
  int displayMappingColorimetry; 
  bool v47; 
  int m_correctionMode; 
  const tmat33_t<vec3_t> *v56; 
  GfxDaltonizeType v57; 
  GfxDaltonizeType m_simulationMode; 
  const tmat33_t<vec3_t> *v59; 
  const tmat33_t<vec3_t> *v60; 
  GfxTexture *Resident; 
  tmat33_t<vec3_t> dst; 
  int data[38]; 
  char v75; 
  tmat33_t<vec3_t> b; 
  tmat33_t<vec3_t> in2; 
  tmat33_t<vec3_t> in1; 
  tmat33_t<vec3_t> v104; 
  tmat33_t<vec3_t> v105; 
  tmat33_t<vec3_t> v106; 
  tmat33_t<vec3_t> v107; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> v109; 
  tmat33_t<vec3_t> v110; 
  GfxTexture *textures[8]; 

  _RDI = parameters;
  R_SetComputeShader(computeState, rgp.universalClutGenerateShader);
  for ( i = 0i64; i < 8; ++i )
  {
    blackImage3D = (GfxImage *)_RDI->clutSetParameters.clutImages[i];
    if ( !blackImage3D )
      blackImage3D = rgp.blackImage3D;
    textures[i] = (GfxTexture *)R_Texture_GetResident(blackImage3D->textureId);
  }
  R_SetComputeTextures(computeState, 0, 8, (const GfxTexture *const *)textures);
  Resident = (GfxTexture *)R_Texture_GetResident(clutRwImage->textureId);
  R_SetComputeRWTextures(computeState, 0, 1, (const GfxTexture *const *)&Resident);
  colorGradingFlags = _RDI->colorGradingFlags;
  data[0] = s_universalClut.clutWidth;
  data[1] = s_universalClut.clutHeight;
  data[2] = s_universalClut.clutDepth;
  data[4] = _RDI->universalClutType;
  if ( R_UniversalClut_AreAnalyticalGradingParametersIdentity(&_RDI->analyticalGradingParameters) )
    colorGradingFlags &= ~2u;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+10h]
    vmovss  [rbp+2D0h+var_2EC], xmm0
  }
  data[5] = colorGradingFlags;
  v10 = &v75;
  v11 = (_DWORD *)&_RDI->clutSetParameters.clutWeights[1];
  v12 = 2i64;
  do
  {
    v13 = *(v11 - 1);
    v11 += 4;
    *((_DWORD *)v10 - 2) = v13;
    v10 += 16;
    *((_DWORD *)v10 - 5) = *(v11 - 4);
    *((_DWORD *)v10 - 4) = *(v11 - 3);
    *((_DWORD *)v10 - 3) = *(v11 - 2);
    *((_DWORD *)v10 + 2) = v11[3];
    *((_DWORD *)v10 + 3) = v11[4];
    *((_DWORD *)v10 + 4) = v11[5];
    *((_DWORD *)v10 + 5) = v11[6];
    --v12;
  }
  while ( v12 );
  __asm
  {
    vmovss  xmm1, dword ptr [rdi+9Ch]
    vmovss  xmm0, dword ptr [rdi+98h]
    vmovss  [rbp+2D0h+var_2A0], xmm0
    vmovss  xmm0, dword ptr [rdi+0A0h]
    vmovss  [rbp+2D0h+var_280], xmm1
    vmovss  xmm1, dword ptr [rdi+0C8h]
    vmovss  [rbp+2D0h+var_260], xmm0
    vmovss  xmm0, dword ptr [rdi+0CCh]
    vmovss  [rbp+2D0h+var_29C], xmm1
    vmovss  xmm1, dword ptr [rdi+0D0h]
    vmovss  [rbp+2D0h+var_27C], xmm0
    vmovss  xmm0, dword ptr [rdi+0A4h]
    vmovss  [rbp+2D0h+var_25C], xmm1
    vmovss  xmm1, dword ptr [rdi+0A8h]
    vmovss  [rbp+2D0h+var_290], xmm0
    vmovss  xmm0, dword ptr [rdi+0ACh]
    vmovss  [rbp+2D0h+var_28C], xmm1
    vmovss  xmm1, dword ptr [rdi+0B0h]
    vmovss  [rbp+2D0h+var_288], xmm0
    vmovss  xmm0, dword ptr [rdi+0B4h]
    vmovss  [rbp+2D0h+var_270], xmm1
    vmovss  xmm1, dword ptr [rdi+0B8h]
    vmovss  [rbp+2D0h+var_26C], xmm0
    vmovss  xmm0, dword ptr [rdi+0BCh]
    vmovss  [rbp+2D0h+var_268], xmm1
    vmovss  xmm1, dword ptr [rdi+0C0h]
    vmovss  [rbp+2D0h+var_250], xmm0
    vmovss  xmm0, dword ptr [rdi+0C4h]
    vmovss  [rbp+2D0h+var_24C], xmm1
    vmovss  xmm1, dword ptr [rdi+0D4h]
    vmovss  [rbp+2D0h+var_248], xmm0
    vmovss  xmm0, dword ptr [rdi+0D8h]
    vmovss  [rbp+2D0h+var_240], xmm1
    vmovss  xmm1, dword ptr [rdi+0DCh]
    vmovss  [rbp+2D0h+var_230], xmm0
    vmovss  xmm0, dword ptr [rdi+0E0h]
    vmovss  [rbp+2D0h+var_22C], xmm1
    vmovss  xmm1, dword ptr [rdi+0E4h]
    vmovss  [rbp+2D0h+var_228], xmm0
    vmaxss  xmm0, xmm1, cs:__real@358637bd; X
  }
  *(float *)&_XMM0 = logf_0(*(float *)&_XMM0);
  __asm
  {
    vmulss  xmm0, xmm0, cs:__real@bfb8aa3b
    vmovss  xmm1, dword ptr [rdi+0E8h]
    vmovss  [rbp+2D0h+var_220], xmm0
    vmaxss  xmm0, xmm1, cs:__real@358637bd; X
  }
  *(float *)&_XMM0 = logf_0(*(float *)&_XMM0);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@bfb8aa3b
    vmovss  xmm2, dword ptr [rdi+0ECh]
    vmaxss  xmm0, xmm2, cs:__real@358637bd; X
    vmovss  [rbp+2D0h+var_21C], xmm1
  }
  *(float *)&_XMM0 = logf_0(*(float *)&_XMM0);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@bfb8aa3b
    vmovss  xmm0, dword ptr [rdi+0F0h]
  }
  displayMappingColorimetry = _RDI->displayMappingColorimetry;
  __asm
  {
    vmovss  [rbp+2D0h+var_210], xmm0
    vmovss  xmm0, dword ptr [rdi+0F8h]
    vmovss  [rbp+2D0h+var_208], xmm0
    vmovss  xmm0, dword ptr [rdi+100h]
    vmovss  [rbp+2D0h+var_218], xmm1
    vmovss  xmm1, dword ptr [rdi+0F4h]
  }
  data[3] = displayMappingColorimetry;
  v47 = !_RDI->daltonizeOptions.m_enabled;
  __asm
  {
    vmovss  [rsp+3D0h+var_354], xmm0
    vmovss  xmm0, dword ptr [rdi+108h]
    vmovss  [rbp+2D0h+var_20C], xmm1
    vmovss  xmm1, dword ptr [rdi+0FCh]
    vmovss  [rbp+2D0h+var_348], xmm0
    vmovss  xmm0, dword ptr [rdi+110h]
    vmovss  [rsp+3D0h+var_358], xmm1
    vmovss  xmm1, dword ptr [rdi+10Ch]
    vmovss  [rbp+2D0h+var_34C], xmm0
    vmovss  xmm0, dword ptr [rdi+118h]
    vmovss  [rbp+2D0h+var_350], xmm1
    vmovss  xmm1, dword ptr [rdi+114h]
  }
  data[19] = !v47;
  m_correctionMode = (unsigned __int8)_RDI->daltonizeOptions.m_correctionMode;
  __asm
  {
    vmovss  [rbp+2D0h+var_344], xmm0
    vmovss  [rbp+2D0h+var_340], xmm1
  }
  data[17] = m_correctionMode;
  __asm { vmovss  xmm0, dword ptr [rdi+120h] }
  data[18] = (unsigned __int8)_RDI->daltonizeOptions.m_simulationMode;
  __asm { vmovss  [rbp+2D0h+var_330], xmm0 }
  MatrixMultiply(&matBT2020FromLMS_0, matCorrectionLMSArray, &out);
  MatrixMultiply(&matBT2020FromLMS_0, &matCorrectionLMSArray[1], &v109);
  MatrixMultiply(&matBT2020FromLMS_0, &matCorrectionLMSArray[2], &v110);
  v56 = &identityMatrix33;
  if ( !_RDI->daltonizeOptions.m_enabled )
    MatrixCopy33(&identityMatrix33, &dst);
  v57 = _RDI->daltonizeOptions.m_correctionMode;
  m_simulationMode = _RDI->daltonizeOptions.m_simulationMode;
  if ( v57 )
  {
    v59 = &matSimulationArray[(unsigned __int8)v57 - 1];
    v60 = (const tmat33_t<vec3_t> *)&v107.m[3 * (unsigned __int8)v57 + 1];
  }
  else
  {
    v59 = &identityMatrix33;
    v60 = &identityMatrix33;
  }
  if ( m_simulationMode )
    v56 = &matSimulationArray[(unsigned __int8)m_simulationMode - 1];
  __asm { vmovss  xmm1, dword ptr [rdi+120h]; b }
  MatrixMultiplyUniformScale(v60, *(float *)&_XMM1, &in1);
  MatrixMultiply(v59, &matLMSFromBT2020_0, &b);
  MatrixSub(&matLMSFromBT2020_0, &b, &in2);
  MatrixMultiply(&in1, &in2, &v104);
  MatrixAdd(&matIdentity, &v104, &v105);
  MatrixMultiply(&matLMSFromBT2020_0, &v105, &v106);
  MatrixMultiply(v56, &v106, &v107);
  MatrixMultiply(&matBT2020FromLMS_0, &v107, &dst);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+3D0h+dst]
    vmovss  xmm1, dword ptr [rsp+3D0h+dst+4]
    vmovss  [rbp+2D0h+var_320], xmm0
    vmovss  xmm0, dword ptr [rsp+3D0h+dst+8]
    vmovss  [rbp+2D0h+var_318], xmm0
    vmovss  xmm0, dword ptr [rsp+3D0h+dst+0Ch]
    vmovss  [rbp+2D0h+var_31C], xmm1
    vmovss  xmm1, dword ptr [rsp+3D0h+dst+10h]
    vxorps  xmm2, xmm2, xmm2
    vmovss  [rbp+2D0h+var_310], xmm0
    vmovss  xmm0, dword ptr [rsp+3D0h+dst+14h]
    vmovss  [rbp+2D0h+var_30C], xmm1
    vmovss  xmm1, dword ptr [rsp+3D0h+dst+18h]
    vmovss  [rbp+2D0h+var_308], xmm0
    vmovss  xmm0, dword ptr [rsp+3D0h+dst+1Ch]
    vmovss  [rbp+2D0h+var_300], xmm1
    vmovss  xmm1, dword ptr [rsp+3D0h+dst+20h]
    vmovss  [rbp+2D0h+var_2FC], xmm0
    vmovss  [rbp+2D0h+var_314], xmm2
    vmovss  [rbp+2D0h+var_304], xmm2
    vmovss  [rbp+2D0h+var_2F8], xmm1
    vmovss  [rbp+2D0h+var_2F4], xmm2
  }
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
  __asm
  {
    vmovss  xmm3, cs:__real@3f800000
    vmovaps [rsp+18h+var_18], xmm6
    vxorps  xmm6, xmm6, xmm6
    vxorps  xmm4, xmm4, xmm4
    vcvtsi2ss xmm4, xmm4, rax
    vsubss  xmm0, xmm4, xmm3
    vdivss  xmm1, xmm0, xmm4
    vxorps  xmm5, xmm5, xmm5
    vcvtsi2ss xmm5, xmm5, rax
    vmovss  dword ptr [rcx], xmm1
    vcvtsi2ss xmm6, xmm6, rax
  }
  _RAX = outOffsetV;
  __asm
  {
    vsubss  xmm1, xmm6, xmm3
    vsubss  xmm2, xmm5, xmm3
    vmovss  xmm3, cs:__real@3f000000
    vdivss  xmm0, xmm2, xmm5
    vmovss  dword ptr [rdx], xmm0
    vdivss  xmm2, xmm1, xmm6
    vmovss  dword ptr [r8], xmm2
    vdivss  xmm0, xmm3, xmm4
    vmovss  dword ptr [r9], xmm0
    vdivss  xmm0, xmm3, xmm6
    vmovaps xmm6, [rsp+18h+var_18]
    vdivss  xmm1, xmm3, xmm5
    vmovss  dword ptr [rax], xmm1
  }
  _RAX = outOffsetW;
  __asm { vmovss  dword ptr [rax], xmm0 }
}

/*
==============
R_UniversalClut_GetParameters
==============
*/
void R_UniversalClut_GetParameters(const GfxViewInfo *viewInfo, GfxUniversalClutVariation clutVariation, bool forceUpdate, GfxUniversalClutParameters *parameters)
{
  GfxUniversalClutVariation v9; 
  bool v11; 
  int v12; 
  unsigned __int8 m_clutCount; 
  unsigned int v14; 
  int m_identityWeight; 
  __int64 v20; 
  unsigned __int8 *m_weights; 
  __int64 v22; 
  unsigned __int8 v24; 
  GfxImage *hdrClutImage; 
  int inputColorimetry; 
  unsigned __int16 height; 
  float maxLuminance; 
  const GfxGradingClut *nvgColorGrading; 
  float v38; 
  __int64 v40; 
  __int64 v41; 
  __int64 v42; 
  GfxDisplayMappingParams result; 

  _RBX = parameters;
  v9 = clutVariation;
  _R14 = viewInfo;
  if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_universal_clut.cpp", 312, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_universal_clut.cpp", 313, ASSERT_TYPE_ASSERT, "(parameters)", (const char *)&queryFormat, "parameters") )
    __debugbreak();
  memset_0(&_RBX->forceUpdate + 1, 0, 0x127ui64);
  _RBX->forceUpdate = forceUpdate;
  v11 = forceUpdate;
  if ( r_universalClutForceUpdate->current.enabled )
    v11 = 1;
  *(_QWORD *)&_RBX->universalClutType = 0i64;
  _RBX->forceUpdate = v11;
  if ( r_colorGradingEnable->current.enabled )
  {
    v12 = 0;
    if ( r_colorGradingClutEnable->current.enabled )
    {
      _RBX->colorGradingFlags = 1;
      v12 = 1;
    }
    if ( r_colorGradingAnalyticalEnable->current.enabled )
      _RBX->colorGradingFlags = v12 | 2;
  }
  _RBX->clutSetParameters.identityWeight = 1.0;
  _RBX->clutSetParameters.clutImages[0] = NULL;
  *(_QWORD *)_RBX->clutSetParameters.clutWeights = 0i64;
  _RBX->clutSetParameters.clutInputColorSpace[0] = 1;
  _RBX->clutSetParameters.clutImages[1] = NULL;
  _RBX->clutSetParameters.clutInputColorSpace[1] = 1;
  _RBX->clutSetParameters.clutImages[2] = NULL;
  *(_QWORD *)&_RBX->clutSetParameters.clutWeights[2] = 0i64;
  _RBX->clutSetParameters.clutInputColorSpace[2] = 1;
  _RBX->clutSetParameters.clutImages[3] = NULL;
  _RBX->clutSetParameters.clutInputColorSpace[3] = 1;
  _RBX->clutSetParameters.clutImages[4] = NULL;
  *(_QWORD *)&_RBX->clutSetParameters.clutWeights[4] = 0i64;
  _RBX->clutSetParameters.clutInputColorSpace[4] = 1;
  _RBX->clutSetParameters.clutImages[5] = NULL;
  _RBX->clutSetParameters.clutInputColorSpace[5] = 1;
  _RBX->clutSetParameters.clutImages[6] = NULL;
  *(_QWORD *)&_RBX->clutSetParameters.clutWeights[6] = 0i64;
  _RBX->clutSetParameters.clutInputColorSpace[6] = 1;
  _RBX->clutSetParameters.clutImages[7] = NULL;
  _RBX->clutSetParameters.clutInputColorSpace[7] = 1;
  _RBX->analyticalGradingParameters.keyPositions[0] = _R14->colorGrading.colorGradingAnalytical.keyPositions[0];
  _RBX->analyticalGradingParameters.keyGain[0].v[0] = _R14->colorGrading.colorGradingAnalytical.key[0].gain.v[0];
  _RBX->analyticalGradingParameters.keyGain[0].v[1] = _R14->colorGrading.colorGradingAnalytical.key[0].gain.v[1];
  _RBX->analyticalGradingParameters.keyGain[0].v[2] = _R14->colorGrading.colorGradingAnalytical.key[0].gain.v[2];
  _RBX->analyticalGradingParameters.keySaturation[0] = _R14->colorGrading.colorGradingAnalytical.key[0].saturation;
  _RBX->analyticalGradingParameters.keyPositions[1] = _R14->colorGrading.colorGradingAnalytical.keyPositions[1];
  _RBX->analyticalGradingParameters.keyGain[1].v[0] = _R14->colorGrading.colorGradingAnalytical.key[1].gain.v[0];
  _RBX->analyticalGradingParameters.keyGain[1].v[1] = _R14->colorGrading.colorGradingAnalytical.key[1].gain.v[1];
  _RBX->analyticalGradingParameters.keyGain[1].v[2] = _R14->colorGrading.colorGradingAnalytical.key[1].gain.v[2];
  _RBX->analyticalGradingParameters.keySaturation[1] = _R14->colorGrading.colorGradingAnalytical.key[1].saturation;
  _RBX->analyticalGradingParameters.keyPositions[2] = _R14->colorGrading.colorGradingAnalytical.keyPositions[2];
  _RBX->analyticalGradingParameters.keyGain[2].v[0] = _R14->colorGrading.colorGradingAnalytical.key[2].gain.v[0];
  _RBX->analyticalGradingParameters.keyGain[2].v[1] = _R14->colorGrading.colorGradingAnalytical.key[2].gain.v[1];
  _RBX->analyticalGradingParameters.keyGain[2].v[2] = _R14->colorGrading.colorGradingAnalytical.key[2].gain.v[2];
  _RBX->analyticalGradingParameters.keySaturation[2] = _R14->colorGrading.colorGradingAnalytical.key[2].saturation;
  _RBX->analyticalGradingParameters.preserveLum = _R14->colorGrading.colorGradingAnalytical.preserveLum;
  _RBX->analyticalGradingParameters.lift.v[0] = _R14->colorGrading.colorGradingAnalytical.lift.v[0];
  _RBX->analyticalGradingParameters.lift.v[1] = _R14->colorGrading.colorGradingAnalytical.lift.v[1];
  _RBX->analyticalGradingParameters.lift.v[2] = _R14->colorGrading.colorGradingAnalytical.lift.v[2];
  _RBX->analyticalGradingParameters.gamma.v[0] = _R14->colorGrading.colorGradingAnalytical.gamma.v[0];
  _RBX->analyticalGradingParameters.gamma.v[1] = _R14->colorGrading.colorGradingAnalytical.gamma.v[1];
  _RBX->analyticalGradingParameters.gamma.v[2] = _R14->colorGrading.colorGradingAnalytical.gamma.v[2];
  _RBX->analyticalGradingParameters.gain.v[0] = _R14->colorGrading.colorGradingAnalytical.gain.v[0];
  _RBX->analyticalGradingParameters.gain.v[1] = _R14->colorGrading.colorGradingAnalytical.gain.v[1];
  _RBX->analyticalGradingParameters.gain.v[2] = _R14->colorGrading.colorGradingAnalytical.gain.v[2];
  m_clutCount = _R14->colorGrading.clutSet.m_clutCount;
  if ( m_clutCount )
  {
    __asm { vmovaps [rsp+0A8h+var_48], xmm7 }
    if ( m_clutCount > 8u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_universal_clut.cpp", 369, ASSERT_TYPE_ASSERT, "(clutCount <= 8)", (const char *)&queryFormat, "clutCount <= UNIVERSAL_COLOR_GRADING_MAX_CLUT_COUNT") )
      __debugbreak();
    v14 = 8;
    __asm
    {
      vmovss  xmm7, cs:__real@3b808081
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
    }
    if ( m_clutCount < 8u )
      v14 = m_clutCount;
    __asm
    {
      vmulss  xmm0, xmm0, xmm7
      vmovss  dword ptr [rbx+10h], xmm0
    }
    m_identityWeight = _R14->colorGrading.clutSet.m_identityWeight;
    v20 = 0i64;
    __asm { vmovaps [rsp+0A8h+var_38], xmm6 }
    m_weights = _R14->colorGrading.clutSet.m_weights;
    v22 = v14;
    _RBP = 72i64;
    do
    {
      v24 = *m_weights;
      if ( !*m_weights && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_universal_clut.cpp", 378, ASSERT_TYPE_ASSERT, "(weightQ > 0)", (const char *)&queryFormat, "weightQ > 0") )
        __debugbreak();
      __asm { vxorps  xmm0, xmm0, xmm0 }
      m_identityWeight += v24;
      hdrClutImage = _R14->colorGrading.clutSet.m_clutArray[v20]->hdrClutImage;
      __asm
      {
        vcvtsi2ss xmm0, xmm0, ecx
        vmulss  xmm6, xmm0, xmm7
      }
      if ( hdrClutImage )
      {
        height = hdrClutImage->height;
        if ( height != 32 || hdrClutImage->width != 32 || hdrClutImage->depth != 32 )
        {
          LODWORD(v42) = hdrClutImage->depth;
          LODWORD(v41) = height;
          LODWORD(v40) = hdrClutImage->width;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_universal_clut.cpp", 392, ASSERT_TYPE_ASSERT, "(image->height == 32 && image->width == 32 && image->depth == 32)", "%s\n\tInvalid CLUT texture dimensions: '%s' = %dx%dx%d", "image->height == HDR_GRADING_CLUT_SIZE && image->width == HDR_GRADING_CLUT_SIZE && image->depth == HDR_GRADING_CLUT_SIZE", hdrClutImage->name, v40, v41, v42) )
            __debugbreak();
        }
        __asm { vmovss  dword ptr [rbx+rbp+10h], xmm6 }
        _RBX->clutSetParameters.clutImages[v20] = hdrClutImage;
        inputColorimetry = _R14->colorGrading.clutSet.m_clutArray[v20]->inputColorimetry;
      }
      else
      {
        __asm
        {
          vaddss  xmm0, xmm6, dword ptr [rbx+10h]
          vmovss  dword ptr [rbx+10h], xmm0
        }
        *(float *)((char *)&_RBX->clutSetParameters.identityWeight + _RBP) = 0.0;
        _RBX->clutSetParameters.clutImages[v20] = NULL;
        inputColorimetry = (unsigned __int8)hdrClutImage + 1;
      }
      *(_DWORD *)((char *)&_RBX->clutSetParameters.clutImages[3] + _RBP) = inputColorimetry;
      _RBP += 4i64;
      ++m_weights;
      ++v20;
      --v22;
    }
    while ( v22 );
    v9 = clutVariation;
    __asm
    {
      vmovaps xmm6, [rsp+0A8h+var_38]
      vmovaps xmm7, [rsp+0A8h+var_48]
    }
    if ( m_identityWeight != 255 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_universal_clut.cpp", 399, ASSERT_TYPE_ASSERT, "(sumWeightQ == GFX_COLOR_GRADING_CLUT_WEIGHT_ONE)", (const char *)&queryFormat, "sumWeightQ == GFX_COLOR_GRADING_CLUT_WEIGHT_ONE") )
      __debugbreak();
  }
  LODWORD(_RBX->universalClutTonemapAcesRrt) = r_universalTonemapUseAcesRrt->current.integer;
  LODWORD(_RBX->universalClutTonemapAcesRedModifier) = r_universalTonemapAcesRedModifier->current.integer;
  _RBX->displayMappingColorimetry = R_GetFramebufferColorimetry();
  _RAX = R_GetDisplayMappingParams(&result);
  __asm { vmovsd  xmm0, qword ptr [rax] }
  maxLuminance = _RAX->maxLuminance;
  __asm { vmovsd  qword ptr [rbx+108h], xmm0 }
  _RBX->displayMappingParams.maxLuminance = maxLuminance;
  LODWORD(_RBX->displayMappingSdrTargetLum) = r_displayMappingSdrTargetLum->current.integer;
  LODWORD(_RBX->displayMappingEmulateSdrMaxLum) = r_displayMappingSdrEmulationMaxLum->current.integer;
  __asm
  {
    vmovsd  xmm0, qword ptr [r14+3C50h]
    vmovsd  qword ptr [rbx+11Ch], xmm0
  }
  *(_DWORD *)&_RBX->daltonizeOptions.m_simulationMode = *(_DWORD *)&_R14->daltonizeOptions.m_simulationMode;
  if ( v9 == DODGE )
  {
    _RBX->colorGradingFlags = 0;
    nvgColorGrading = _R14->nvgColorGrading;
    if ( nvgColorGrading )
    {
      *(_QWORD *)&_RBX->universalClutTonemapAcesRrt = 1065353216i64;
      *(_WORD *)&_RBX->daltonizeOptions.m_enabled = 0;
      _RBX->daltonizeOptions.m_correctionScale = 0.0;
      _RBX->daltonizeOptions.m_simulationMode = R_DALTONIZE_NONE;
      _RBX->colorGradingFlags |= 1u;
      _RBX->displayMappingColorimetry = GFX_COLORIMETRY_BT709_SRGB;
      *(_QWORD *)&_RBX->displayMappingParams.gamma = 1065353216i64;
      _RBX->displayMappingParams.maxLuminance = 1.0;
      *(_QWORD *)&_RBX->displayMappingSdrTargetLum = 1134985216i64;
      _RBX->clutSetParameters.clutImages[0] = NULL;
      *(_QWORD *)_RBX->clutSetParameters.clutWeights = 0i64;
      _RBX->clutSetParameters.clutInputColorSpace[0] = 1;
      _RBX->clutSetParameters.clutImages[1] = NULL;
      _RBX->clutSetParameters.clutInputColorSpace[1] = 1;
      _RBX->clutSetParameters.clutImages[2] = NULL;
      *(_QWORD *)&_RBX->clutSetParameters.clutWeights[2] = 0i64;
      _RBX->clutSetParameters.clutInputColorSpace[2] = 1;
      _RBX->clutSetParameters.clutImages[3] = NULL;
      _RBX->clutSetParameters.clutInputColorSpace[3] = 1;
      _RBX->clutSetParameters.clutImages[4] = NULL;
      *(_QWORD *)&_RBX->clutSetParameters.clutWeights[4] = 0i64;
      _RBX->clutSetParameters.clutInputColorSpace[4] = 1;
      _RBX->clutSetParameters.clutImages[5] = NULL;
      _RBX->clutSetParameters.clutInputColorSpace[5] = 1;
      _RBX->clutSetParameters.clutImages[6] = NULL;
      *(_QWORD *)&_RBX->clutSetParameters.clutWeights[6] = 0i64;
      _RBX->clutSetParameters.clutInputColorSpace[6] = 1;
      _RBX->clutSetParameters.clutImages[7] = NULL;
      _RBX->clutSetParameters.clutInputColorSpace[7] = 1;
      _RBX->clutSetParameters.identityWeight = 0.0;
      _RBX->clutSetParameters.clutImages[0] = nvgColorGrading->hdrClutImage;
      _RBX->clutSetParameters.clutWeights[0] = 1.0;
      _RBX->clutSetParameters.clutInputColorSpace[0] = nvgColorGrading->inputColorimetry;
    }
    else
    {
      _RBX->clutSetParameters.identityWeight = 1.0;
      _RBX->clutSetParameters.clutImages[0] = NULL;
      *(_QWORD *)_RBX->clutSetParameters.clutWeights = 0i64;
      _RBX->clutSetParameters.clutInputColorSpace[0] = 1;
      _RBX->clutSetParameters.clutImages[1] = NULL;
      _RBX->clutSetParameters.clutInputColorSpace[1] = 1;
      _RBX->clutSetParameters.clutImages[2] = NULL;
      *(_QWORD *)&_RBX->clutSetParameters.clutWeights[2] = 0i64;
      _RBX->clutSetParameters.clutInputColorSpace[2] = 1;
      _RBX->clutSetParameters.clutImages[3] = NULL;
      _RBX->clutSetParameters.clutInputColorSpace[3] = 1;
      _RBX->clutSetParameters.clutImages[4] = NULL;
      *(_QWORD *)&_RBX->clutSetParameters.clutWeights[4] = 0i64;
      _RBX->clutSetParameters.clutInputColorSpace[4] = 1;
      _RBX->clutSetParameters.clutImages[5] = NULL;
      _RBX->clutSetParameters.clutInputColorSpace[5] = 1;
      _RBX->clutSetParameters.clutImages[6] = NULL;
      *(_QWORD *)&_RBX->clutSetParameters.clutWeights[6] = 0i64;
      _RBX->clutSetParameters.clutInputColorSpace[6] = 1;
      _RBX->clutSetParameters.clutImages[7] = NULL;
      _RBX->clutSetParameters.clutInputColorSpace[7] = 1;
    }
    __asm { vmovss  xmm0, cs:__real@3f800000 }
    _RBX->analyticalGradingParameters.keyPositions[0] = 0.0;
    _RBX->analyticalGradingParameters.keyPositions[1] = 0.5;
    _RBX->analyticalGradingParameters.keyPositions[2] = 1.0;
    __asm { vmovss  [rsp+0A8h+result.maxLuminance], xmm0 }
    v38 = result.maxLuminance;
    __asm
    {
      vunpcklps xmm0, xmm0, xmm0
      vmovsd  qword ptr [rbx+0A4h], xmm0
    }
    _RBX->analyticalGradingParameters.keyGain[0].v[2] = v38;
    _RBX->analyticalGradingParameters.keySaturation[0] = 1.0;
    __asm { vmovsd  qword ptr [rbx+0B0h], xmm0 }
    _RBX->analyticalGradingParameters.keyGain[1].v[2] = v38;
    _RBX->analyticalGradingParameters.keySaturation[1] = 1.0;
    __asm { vmovsd  qword ptr [rbx+0BCh], xmm0 }
    _RBX->analyticalGradingParameters.keyGain[2].v[2] = v38;
    *(_QWORD *)&_RBX->analyticalGradingParameters.keySaturation[2] = 1065353216i64;
    *(_QWORD *)_RBX->analyticalGradingParameters.lift.v = 0i64;
    _RBX->analyticalGradingParameters.lift.v[2] = 0.0;
    _RBX->analyticalGradingParameters.gamma.v[0] = 0.5;
    _RBX->analyticalGradingParameters.gamma.v[1] = 0.5;
    _RBX->analyticalGradingParameters.gamma.v[2] = 0.5;
    _RBX->analyticalGradingParameters.gain.v[0] = 1.0;
    _RBX->analyticalGradingParameters.gain.v[1] = 1.0;
    _RBX->analyticalGradingParameters.gain.v[2] = 1.0;
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
  __int64 v4; 
  __m256i v6; 

  s_universalClut.clutCount = 4;
  v1 = 0;
  s_universalClut.clutWidth = 64;
  s_universalClut.clutHeight = 64;
  _R9 = &s_universalClut;
  s_universalClut.clutDepth = 64;
  do
  {
    _RAX = 32i64 * v1;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    v4 = v1++;
    v6.m256i_i16[0] = 0;
    v6.m256i_i32[2] = 0;
    __asm
    {
      vmovdqu xmmword ptr [rsp+28h+var_28+10h], xmm0
      vmovups ymm0, ymmword ptr [rsp+28h+var_28]
      vmovups ymmword ptr [rax+r9+10h], ymm0
    }
    s_universalClut.requiresUpdate[v4] = 1;
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
  unsigned int v1; 
  __int64 v3; 
  bool v7; 
  R_RT_Handle v9; 
  R_RT_Handle result; 

  if ( !R_RT_Handle::IsValid(s_universalClut.clutRt) )
  {
    v1 = 0;
    if ( s_universalClut.clutCount )
    {
      _RSI = 0x140000000ui64;
      do
      {
        v3 = v1;
        _RAX = R_RT_CreateInternal(&result, s_universalClut.clutWidth, s_universalClut.clutHeight, s_universalClut.clutWidth, s_universalClut.clutHeight, s_universalClut.clutDepth, 1u, 1u, g_R_RT_renderTargetFmts[1], R_RT_Flag_RWView|R_RT_Flag_RTView, (R_RT_FlagsInternal)2, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE, s_universalClutNames[v1], 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_universal_clut.cpp(164)");
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovd   eax, xmm0
          vmovups [rsp+128h+var_68], ymm0
          vmovups ymmword ptr [rsp+128h+var_88.m_surfaceID], ymm0
        }
        if ( (_WORD)_RAX )
        {
          R_RT_Handle::GetSurface(&v9);
          if ( (R_RT_Handle::GetSurface(&v9)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
          {
            __asm { vmovups ymm0, ymmword ptr [rsp+128h+var_88.m_surfaceID] }
            __debugbreak();
          }
          else
          {
            __asm { vmovups ymm0, ymmword ptr [rsp+128h+var_88.m_surfaceID] }
          }
        }
        else
        {
          __asm { vpextrd rax, xmm0, 2 }
          if ( (_DWORD)_RAX )
          {
            v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
            __asm { vmovups ymm0, [rsp+128h+var_68] }
            if ( v7 )
              __debugbreak();
          }
        }
        _RAX = 32i64 * v1++;
        __asm { vmovups ymmword ptr [rax+rsi+1421DD30h], ymm0 }
        s_universalClut.parameters[v3].forceUpdate = 1;
      }
      while ( v1 < s_universalClut.clutCount );
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
  float v3; 

  __asm { vmovss  xmm0, cs:__real@3f800000 }
  analyticalGradingParameters->keyPositions[1] = 0.5;
  analyticalGradingParameters->keyPositions[0] = 0.0;
  analyticalGradingParameters->keyPositions[2] = 1.0;
  __asm
  {
    vmovss  [rsp+18h+var_10], xmm0
    vunpcklps xmm0, xmm0, xmm0
    vmovsd  qword ptr [rcx+0Ch], xmm0
  }
  analyticalGradingParameters->keyGain[0].v[2] = v3;
  analyticalGradingParameters->keySaturation[0] = 1.0;
  __asm { vmovsd  qword ptr [rcx+18h], xmm0 }
  analyticalGradingParameters->keyGain[1].v[2] = v3;
  analyticalGradingParameters->keySaturation[1] = 1.0;
  __asm { vmovsd  qword ptr [rcx+24h], xmm0 }
  analyticalGradingParameters->keyGain[2].v[2] = v3;
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
  GfxImage *v13; 
  GfxCmdBufSourceState *v14; 
  GfxCmdBufInput *v15; 
  void *retaddr; 

  _RAX = &retaddr;
  blackImage3D = rgp.blackImage3D;
  source = gfxContext->source;
  __asm { vmovaps xmmword ptr [rax-28h], xmm6 }
  if ( clutImageMainView )
    blackImage3D = (GfxImage *)clutImageMainView;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[67] = blackImage3D;
  v13 = rgp.blackImage3D;
  v14 = gfxContext->source;
  if ( clutImageSecondary )
    v13 = (GfxImage *)clutImageSecondary;
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v15 = &v14->input;
  if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  __asm { vmovss  xmm3, cs:__real@3f800000 }
  v15->codeImages[68] = v13;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vxorps  xmm4, xmm4, xmm4
    vcvtsi2ss xmm4, xmm4, rax
    vsubss  xmm0, xmm4, xmm3
    vdivss  xmm1, xmm0, xmm4
    vxorps  xmm5, xmm5, xmm5
    vcvtsi2ss xmm5, xmm5, rax
    vcvtsi2ss xmm6, xmm6, rax
  }
  _RAX = gfxContext->source;
  __asm
  {
    vsubss  xmm2, xmm5, xmm3
    vdivss  xmm0, xmm2, xmm5
    vmovss  dword ptr [rax+0EE0h], xmm1
    vmovss  dword ptr [rax+0EE4h], xmm0
  }
  _RAX->input.consts[126].v[3] = 0.0;
  __asm
  {
    vsubss  xmm1, xmm6, xmm3
    vdivss  xmm2, xmm1, xmm6
    vmovss  dword ptr [rax+0EE8h], xmm2
  }
  ++_RAX->constVersions[126];
  __asm
  {
    vmovss  xmm2, cs:__real@3f000000
    vdivss  xmm0, xmm2, xmm4
    vmovss  dword ptr [rax+0EF0h], xmm0
    vdivss  xmm0, xmm2, xmm6
    vmovaps xmm6, [rsp+58h+var_28]
    vdivss  xmm1, xmm2, xmm5
    vmovss  dword ptr [rax+0EF8h], xmm0
    vmovss  dword ptr [rax+0EF4h], xmm1
  }
  _RAX->input.consts[127].v[3] = 0.0;
  ++_RAX->constVersions[127];
}

/*
==============
R_UniversalClut_Shutdown
==============
*/

void __fastcall R_UniversalClut_Shutdown(double _XMM0_8)
{
  unsigned int v2; 
  R_RT_Handle v6; 

  _RBP = s_universalClut.clutRt;
  if ( R_RT_Handle::IsValid(s_universalClut.clutRt) )
  {
    v2 = 0;
    if ( s_universalClut.clutCount )
    {
      do
      {
        _RDI = 32i64 * v2;
        __asm
        {
          vmovups ymm0, ymmword ptr [rdi+rbp]
          vmovups ymmword ptr [rsp+48h+var_28.m_surfaceID], ymm0
        }
        R_RT_DestroyInternal(&v6);
        __asm
        {
          vpxor   xmm0, xmm0, xmm0
          vmovdqu xmmword ptr [rsp+48h+var_28.m_tracking.m_name], xmm0
        }
        v6.m_surfaceID = 0;
        ++v2;
        v6.m_tracking.m_allocCounter = 0;
        __asm
        {
          vmovups ymm1, ymmword ptr [rsp+48h+var_28.m_surfaceID]
          vmovups ymmword ptr [rdi+rbp], ymm1
        }
      }
      while ( v2 < s_universalClut.clutCount );
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
  __int64 v11; 
  const GfxImage *v18; 
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
      _RCX = &parameters;
      _R8 = &s_universalClut.parameters[v7];
      v11 = 2i64;
      do
      {
        _R8 = (GfxUniversalClutParameters *)((char *)_R8 + 128);
        __asm
        {
          vmovups ymm0, ymmword ptr [rcx]
          vmovups xmm1, xmmword ptr [rcx+70h]
        }
        _RCX = (GfxUniversalClutParameters *)((char *)_RCX + 128);
        __asm
        {
          vmovups ymmword ptr [r8-80h], ymm0
          vmovups ymm0, ymmword ptr [rcx-60h]
          vmovups ymmword ptr [r8-60h], ymm0
          vmovups ymm0, ymmword ptr [rcx-40h]
          vmovups ymmword ptr [r8-40h], ymm0
          vmovups xmm0, xmmword ptr [rcx-20h]
          vmovups xmmword ptr [r8-20h], xmm0
          vmovups xmmword ptr [r8-10h], xmm1
        }
        --v11;
      }
      while ( v11 );
      __asm { vmovups ymm0, ymmword ptr [rcx] }
      v18 = _RCX->clutSetParameters.clutImages[1];
      __asm { vmovups ymmword ptr [r8], ymm0 }
      _R8->clutSetParameters.clutImages[1] = v18;
      s_universalClut.requiresUpdate[v7] = 1;
      v8->forceUpdate = v11;
    }
  }
  return v3;
}

