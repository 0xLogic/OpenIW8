/*
==============
R_VRS_GetVrsTexture
==============
*/

R_RT_ColorHandle *__fastcall R_VRS_GetVrsTexture(R_RT_ColorHandle *result)
{
  return ?R_VRS_GetVrsTexture@@YA?AVR_RT_ColorHandle@@XZ(result);
}

/*
==============
R_VRS_GenerateVRSMask
==============
*/

void __fastcall R_VRS_GenerateVRSMask(ComputeCmdBufState *computeCmdBufState, R_RT_ColorHandle *srcColorRt, R_RT_ColorHandle *vrsTexture, R_RT_ColorHandle *halfVelocityMBlurRt, R_RT_ColorHandle *dofTile0Handle)
{
  ?R_VRS_GenerateVRSMask@@YAXPEAUComputeCmdBufState@@VR_RT_ColorHandle@@111@Z(computeCmdBufState, srcColorRt, vrsTexture, halfVelocityMBlurRt, dofTile0Handle);
}

/*
==============
R_VRS_LazyAllocRts
==============
*/

void __fastcall R_VRS_LazyAllocRts(GfxViewInfo *viewInfo)
{
  ?R_VRS_LazyAllocRts@@YAXPEAUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
R_VRS_ApplyVariableRateShading
==============
*/

void __fastcall R_VRS_ApplyVariableRateShading(const GfxViewInfo *viewInfo, GfxCmdBufContext *context, R_RT_ColorHandle *vrsTexture, GfxDrawListType drawListType)
{
  ?R_VRS_ApplyVariableRateShading@@YAXPEBUGfxViewInfo@@UGfxCmdBufContext@@VR_RT_ColorHandle@@W4GfxDrawListType@@@Z(viewInfo, context, vrsTexture, drawListType);
}

/*
==============
R_VRS_ApplyVariableRateShadingForPostProcessing
==============
*/

void __fastcall R_VRS_ApplyVariableRateShadingForPostProcessing(const GfxViewInfo *viewInfo, GfxCmdBufContext *context, R_RT_ColorHandle *vrsTexture)
{
  ?R_VRS_ApplyVariableRateShadingForPostProcessing@@YAXPEBUGfxViewInfo@@UGfxCmdBufContext@@VR_RT_ColorHandle@@@Z(viewInfo, context, vrsTexture);
}

/*
==============
R_VRS_Initialize
==============
*/

void R_VRS_Initialize(void)
{
  ?R_VRS_Initialize@@YAXXZ();
}

/*
==============
R_VRS_Shutdown
==============
*/

void R_VRS_Shutdown(void)
{
  ?R_VRS_Shutdown@@YAXXZ();
}

/*
==============
R_VRS_FreeRts
==============
*/

void R_VRS_FreeRts(void)
{
  ?R_VRS_FreeRts@@YAXXZ();
}

/*
==============
R_VRS_ShowDebugTextureOverlay
==============
*/

void R_VRS_ShowDebugTextureOverlay(void)
{
  ?R_VRS_ShowDebugTextureOverlay@@YAXXZ();
}

/*
==============
R_VRS_GetVrsSurface
==============
*/

const GfxImage *__fastcall R_VRS_GetVrsSurface()
{
  return ?R_VRS_GetVrsSurface@@YAPEBUGfxImage@@XZ();
}

/*
==============
R_VRS_UpdateConstants
==============
*/

void __fastcall R_VRS_UpdateConstants(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, R_RT_ColorHandle *srcColorRt)
{
  ?R_VRS_UpdateConstants@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@VR_RT_ColorHandle@@@Z(computeState, viewInfo, srcColorRt);
}

/*
==============
RB_VRS_GenerateVRSMask
==============
*/

void __fastcall RB_VRS_GenerateVRSMask(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_Group *activeGroup)
{
  ?RB_VRS_GenerateVRSMask@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@AEAUR_RT_Group@@@Z(gfxContext, viewInfo, activeGroup);
}

/*
==============
R_VRS_DisabledVariableRateShading
==============
*/

void __fastcall R_VRS_DisabledVariableRateShading(const GfxViewInfo *viewInfo, GfxCmdBufContext *context, R_RT_ColorHandle *vrsTexture)
{
  ?R_VRS_DisabledVariableRateShading@@YAXPEBUGfxViewInfo@@UGfxCmdBufContext@@VR_RT_ColorHandle@@@Z(viewInfo, context, vrsTexture);
}

/*
==============
RB_VRS_GenerateVRSMask
==============
*/
void RB_VRS_GenerateVRSMask(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_Group *activeGroup)
{
  GfxCmdBufState *state; 
  ComputeCmdBufState *GfxComputeCmdBufState; 
  GfxCmdBufContext v10; 
  float vrsMaskPixelThreshold; 
  BOOL vrsMaskMotionBlurEnabled; 
  float v13; 
  BOOL vrsMaskDofEnabled; 
  R_RT_Handle vrsTexture; 
  R_RT_Handle v16; 
  R_RT_ColorHandle m_dofTile0Handle; 
  R_RT_ColorHandle m_halfVelocityMBlurRt; 
  __m256i v19; 
  __m256i v20; 
  __m256i v21; 
  __m256i v22; 
  _BYTE v23[72]; 
  GfxCmdBufContext data; 
  float v25; 
  float vrsMaskDofIntensity; 
  __int64 v27; 
  R_RT_Group v28; 

  if ( viewInfo->variableRateShading.enabled && viewInfo->variableRateShading.vrsMaskEnabled )
  {
    state = gfxContext->state;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&v23[24] = _XMM0;
    *(_OWORD *)&v23[56] = _XMM0;
    v19.m256i_i8[0] = 0;
    *(_WORD *)&v23[8] = 0;
    *(_DWORD *)&v23[16] = 0;
    GfxComputeCmdBufState = R_GetGfxComputeCmdBufState(state);
    *(_WORD *)&v23[40] = 0;
    *(_DWORD *)&v23[48] = 0;
    *(__m256i *)&v28.m_colorRtCount = v19;
    *(__m256i *)&v28.m_colorRts[0].m_tracking.m_location = v20;
    *(__m256i *)&v28.m_colorRts[1].m_tracking.m_location = v21;
    *(__m256i *)&v28.m_colorRts[2].m_tracking.m_location = v22;
    v10 = *gfxContext;
    *(__m256i *)&v28.m_colorRts[3].m_tracking.m_location = *(__m256i *)v23;
    *(__m256i *)&v28.m_depthRt.m_tracking.m_location = *(__m256i *)&v23[32];
    v28.m_vrsRt.m_tracking.m_location = *(const char **)&v23[64];
    data = v10;
    R_SetRenderTargetsInternal(&data, &v28, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_nvidia_variable_rate_shading.cpp(178)");
    Sys_ProfBeginNamedEvent(0xFFFF7F50, "Variable Rate Shading");
    R_ProfBeginNamedEvent(state, "Variable Rate Shading");
    if ( activeGroup->m_colorRtCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 559, ASSERT_TYPE_ASSERT, "(this->m_colorRtCount == 1)", (const char *)&queryFormat, "this->m_colorRtCount == 1") )
      __debugbreak();
    vrsMaskPixelThreshold = viewInfo->variableRateShading.vrsMaskPixelThreshold;
    vrsMaskMotionBlurEnabled = viewInfo->variableRateShading.vrsMaskMotionBlurEnabled;
    v16 = (R_RT_Handle)activeGroup->m_colorRts[0];
    m_halfVelocityMBlurRt = viewInfo->sceneRtInput.m_halfVelocityMBlurRt;
    m_dofTile0Handle = viewInfo->sceneRtInput.m_dofTile0Handle;
    vrsTexture = (R_RT_Handle)activeGroup->m_colorRts[0];
    HIDWORD(data.source) = LODWORD(viewInfo->variableRateShading.vrsMaskNeighborhoodThreshold);
    *(float *)&data.source = vrsMaskPixelThreshold;
    v13 = (float)vrsMaskMotionBlurEnabled;
    vrsMaskDofEnabled = viewInfo->variableRateShading.vrsMaskDofEnabled;
    *((float *)&data.state + 1) = (float)viewInfo->variableRateShading.vrsMaskMotionBlurIntensity;
    *(float *)&data.state = v13;
    vrsMaskDofIntensity = (float)viewInfo->variableRateShading.vrsMaskDofIntensity;
    v25 = (float)vrsMaskDofEnabled;
    v27 = 0i64;
    *(float *)&v27 = 1.0 / (float)R_RT_Handle::GetSurface(&vrsTexture)->m_image.m_base.width;
    *((float *)&v27 + 1) = 1.0 / (float)R_RT_Handle::GetSurface(&vrsTexture)->m_image.m_base.height;
    R_UploadAndSetComputeConstants(GfxComputeCmdBufState, 0, &data, 0x20u, NULL);
    R_ProfBeginNamedEvent(GfxComputeCmdBufState, "VRS Mask Generator");
    R_GPU_BeginTimer(GPU_TIMER_VRSMASK_GENERATOR);
    vrsTexture = (R_RT_Handle)s_VariableRateShadingGlob.vrsTexture;
    R_HW_AddResourceTransition(GfxComputeCmdBufState, &vrsTexture, 0xFFFFFFFF, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(GfxComputeCmdBufState);
    vrsTexture = (R_RT_Handle)s_VariableRateShadingGlob.vrsTexture;
    R_VRS_GenerateVRSMask(GfxComputeCmdBufState, (R_RT_ColorHandle *)&v16, (R_RT_ColorHandle *)&vrsTexture, &m_halfVelocityMBlurRt, &m_dofTile0Handle);
    v16 = (R_RT_Handle)s_VariableRateShadingGlob.vrsTexture;
    R_HW_AddResourceTransition(GfxComputeCmdBufState, &v16, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(GfxComputeCmdBufState);
    R_GPU_EndTimer();
    R_ProfEndNamedEvent(GfxComputeCmdBufState);
    R_ProfEndNamedEvent(state);
    Sys_ProfEndNamedEvent();
  }
  else
  {
    R_VRS_FreeRts();
  }
}

/*
==============
R_VRS_ApplyVariableRateShading
==============
*/
void R_VRS_ApplyVariableRateShading(const GfxViewInfo *viewInfo, GfxCmdBufContext *context, R_RT_ColorHandle *vrsTexture, GfxDrawListType drawListType)
{
  ;
}

/*
==============
R_VRS_ApplyVariableRateShadingForPostProcessing
==============
*/
void R_VRS_ApplyVariableRateShadingForPostProcessing(const GfxViewInfo *viewInfo, GfxCmdBufContext *context, R_RT_ColorHandle *vrsTexture)
{
  ;
}

/*
==============
R_VRS_DisabledVariableRateShading
==============
*/
void R_VRS_DisabledVariableRateShading(const GfxViewInfo *viewInfo, GfxCmdBufContext *context, R_RT_ColorHandle *vrsTexture)
{
  ;
}

/*
==============
R_VRS_FreeRts
==============
*/

void __fastcall R_VRS_FreeRts(double _XMM0_8)
{
  VariableRateShadingGlob v2; 

  if ( s_VariableRateShadingGlob.vrsTexture.m_surfaceID )
  {
    R_RT_Handle::GetSurface(&s_VariableRateShadingGlob.vrsTexture);
    v2 = s_VariableRateShadingGlob;
    R_RT_DestroyInternal(&v2.vrsTexture);
    __asm { vpxor   xmm0, xmm0, xmm0 }
    v2.vrsTexture.m_surfaceID = 0;
    v2.vrsTexture.m_tracking.m_allocCounter = 0;
    *(_OWORD *)&v2.vrsTexture.m_tracking.m_name = _XMM0;
    s_VariableRateShadingGlob = v2;
  }
  else if ( s_VariableRateShadingGlob.vrsTexture.m_tracking.m_allocCounter != s_VariableRateShadingGlob.vrsTexture.m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
  {
    __debugbreak();
  }
}

/*
==============
R_VRS_GenerateVRSMask
==============
*/
void R_VRS_GenerateVRSMask(ComputeCmdBufState *computeCmdBufState, R_RT_ColorHandle *srcColorRt, R_RT_ColorHandle *vrsTexture, R_RT_ColorHandle *halfVelocityMBlurRt, R_RT_ColorHandle *dofTile0Handle)
{
  const R_RT_Surface *Surface; 
  const GfxTexture *Resident; 
  GfxDevice *immediateContext; 
  const GfxTexture *v12; 
  __int64 v13; 
  const R_RT_Surface *v14; 
  GfxTextureId textureId; 
  GfxTextureId v16; 
  const R_RT_Surface *v17; 
  int width; 
  const R_RT_Surface *v19; 
  float v20; 
  GfxTexture *textures; 
  __int64 v22[2]; 

  if ( R_RT_Handle::IsValid(srcColorRt) || R_RT_Handle::IsValid(vrsTexture) )
  {
    R_SetComputeShader(computeCmdBufState, rgp.nvidiaVariableRateShadingVRSMaskGeneratorComputeShader);
    v22[0] = 0i64;
    v22[1] = 0i64;
    Surface = R_RT_Handle::GetSurface(vrsTexture);
    Resident = R_Texture_GetResident(Surface->m_image.m_base.textureId);
    immediateContext = g_dx.immediateContext;
    v12 = Resident;
    if ( !R_IsLockedIfGfxImmediateContext(g_dx.immediateContext) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
      __debugbreak();
    v13 = g_descriptorPools.shaderViewPool.handle.parent->descriptorSize * (g_descriptorPools.shaderViewPool.handle.startSlot + v12->shaderRWView.rwView);
    ((void (__fastcall *)(GfxDevice *, unsigned __int64, unsigned __int64, ID3D12Resource *, __int64 *, _DWORD, _QWORD))immediateContext->m_pFunction[17].Release)(immediateContext, v13 + g_descriptorPools.shaderViewPool.handle.parent->heapStartGPUHandle.ptr, v13 + g_descriptorPools.shaderViewPool.handle.parent->heapStartCPUHandle.ptr, v12->shaderRWView.rwResource, v22, 0, 0i64);
    v14 = R_RT_Handle::GetSurface(srcColorRt);
    textures = (GfxTexture *)R_Texture_GetResident(v14->m_image.m_base.textureId);
    R_SetComputeTextures(computeCmdBufState, 0, 1, (const GfxTexture *const *)&textures);
    if ( R_RT_Handle::IsValid(halfVelocityMBlurRt) )
      textureId = R_RT_Handle::GetSurface(halfVelocityMBlurRt)->m_image.m_base.textureId;
    else
      textureId = rgp.blackImage->textureId;
    textures = (GfxTexture *)R_Texture_GetResident(textureId);
    R_SetComputeTextures(computeCmdBufState, 1, 1, (const GfxTexture *const *)&textures);
    if ( R_RT_Handle::IsValid(dofTile0Handle) )
      v16 = R_RT_Handle::GetSurface(dofTile0Handle)->m_image.m_base.textureId;
    else
      v16 = rgp.blackImage->textureId;
    textures = (GfxTexture *)R_Texture_GetResident(v16);
    R_SetComputeTextures(computeCmdBufState, 2, 1, (const GfxTexture *const *)&textures);
    v17 = R_RT_Handle::GetSurface(vrsTexture);
    textures = (GfxTexture *)R_Texture_GetResident(v17->m_image.m_base.textureId);
    R_SetComputeRWTextures(computeCmdBufState, 0, 1, (const GfxTexture *const *)&textures);
    width = R_RT_Handle::GetSurface(srcColorRt)->m_image.m_base.width;
    v19 = R_RT_Handle::GetSurface(srcColorRt);
    R_Dispatch(computeCmdBufState, ((unsigned int)(width + 7) >> 3) + 1, (((unsigned int)v19->m_image.m_base.height + 7) >> 3) + 1, 1u);
    if ( R_CheckDvarModified(r_vrsMaskPreview) )
    {
      if ( r_vrsMaskPreview->current.enabled )
      {
        Dvar_SetInt_Internal(r_debugTextureOverlay, 15);
        v20 = FLOAT_0_5;
      }
      else
      {
        Dvar_SetInt_Internal(r_debugTextureOverlay, 0);
        v20 = FLOAT_1_0;
      }
      Dvar_SetFloat_Internal(r_debugTextureOverlayBlend, v20);
    }
  }
}

/*
==============
R_VRS_GetVrsSurface
==============
*/
R_RT_Image *R_VRS_GetVrsSurface()
{
  if ( s_VariableRateShadingGlob.vrsTexture.m_surfaceID )
  {
    R_RT_Handle::GetSurface(&s_VariableRateShadingGlob.vrsTexture);
    return &R_RT_Handle::GetSurface(&s_VariableRateShadingGlob.vrsTexture)->m_image;
  }
  else
  {
    if ( s_VariableRateShadingGlob.vrsTexture.m_tracking.m_allocCounter != s_VariableRateShadingGlob.vrsTexture.m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    return (R_RT_Image *)rgp.defaultUIntImage;
  }
}

/*
==============
R_VRS_GetVrsTexture
==============
*/
R_RT_ColorHandle *R_VRS_GetVrsTexture(R_RT_ColorHandle *result)
{
  *result = s_VariableRateShadingGlob.vrsTexture;
  return result;
}

/*
==============
R_VRS_Initialize
==============
*/
void R_VRS_Initialize(void)
{
  ;
}

/*
==============
R_VRS_LazyAllocRts
==============
*/
void R_VRS_LazyAllocRts(GfxViewInfo *viewInfo)
{
  R_RT_Handle v2; 
  R_RT_Handle v4; 
  R_RT_Handle v5; 
  R_RT_Handle result; 

  if ( viewInfo->variableRateShading.enabled && viewInfo->variableRateShading.vrsMaskEnabled )
  {
    if ( s_VariableRateShadingGlob.vrsTexture.m_surfaceID )
    {
      R_RT_Handle::GetSurface(&s_VariableRateShadingGlob.vrsTexture);
    }
    else
    {
      if ( s_VariableRateShadingGlob.vrsTexture.m_tracking.m_allocCounter != s_VariableRateShadingGlob.vrsTexture.m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", s_VariableRateShadingGlob.vrsTexture.m_surfaceID + 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
      v2 = *R_RT_CreateInternal(&result, (vidConfig.sceneWidth + 3) >> 2, (vidConfig.sceneHeight + 3) >> 2, (vidConfig.sceneWidth + 3) >> 2, (vidConfig.sceneHeight + 3) >> 2, 1u, 1u, 1u, g_R_RT_renderTargetFmts[59], R_RT_Flag_VariableRateShadingMask|R_RT_Flag_RWView|R_RT_Flag_RTView, (R_RT_FlagsInternal)2, &colorWhite, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "VRSMask", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_nvidia_variable_rate_shading.cpp(45)");
      v5 = v2;
      v4 = v2;
      if ( (_WORD)_XMM0 )
      {
        R_RT_Handle::GetSurface(&v4);
        if ( (R_RT_Handle::GetSurface(&v4)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        {
          v2 = v4;
          __debugbreak();
        }
        else
        {
          v2 = v4;
        }
      }
      else
      {
        __asm { vpextrd rax, xmm0, 2 }
        if ( (_DWORD)_RAX )
        {
          v2 = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
            __debugbreak();
        }
      }
      s_VariableRateShadingGlob = (VariableRateShadingGlob)v2;
    }
  }
}

/*
==============
R_VRS_ShowDebugTextureOverlay
==============
*/
void R_VRS_ShowDebugTextureOverlay(void)
{
  if ( R_CheckDvarModified(r_vrsMaskPreview) )
  {
    if ( r_vrsMaskPreview->current.enabled )
    {
      Dvar_SetInt_Internal(r_debugTextureOverlay, 15);
      Dvar_SetFloat_Internal(r_debugTextureOverlayBlend, 0.5);
    }
    else
    {
      Dvar_SetInt_Internal(r_debugTextureOverlay, 0);
      Dvar_SetFloat_Internal(r_debugTextureOverlayBlend, 1.0);
    }
  }
}

/*
==============
R_VRS_Shutdown
==============
*/

void R_VRS_Shutdown(void)
{
  R_VRS_FreeRts();
}

/*
==============
R_VRS_UpdateConstants
==============
*/
void R_VRS_UpdateConstants(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, R_RT_ColorHandle *srcColorRt)
{
  float vrsMaskNeighborhoodThreshold; 
  BOOL vrsMaskMotionBlurEnabled; 
  float v8; 
  BOOL vrsMaskDofEnabled; 
  float vrsMaskMotionBlurIntensity; 
  float vrsMaskDofIntensity; 
  int data[6]; 
  __int64 v13; 

  if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_nvidia_variable_rate_shading.cpp", 107, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  vrsMaskNeighborhoodThreshold = viewInfo->variableRateShading.vrsMaskNeighborhoodThreshold;
  vrsMaskMotionBlurEnabled = viewInfo->variableRateShading.vrsMaskMotionBlurEnabled;
  data[0] = LODWORD(viewInfo->variableRateShading.vrsMaskPixelThreshold);
  *(float *)&data[1] = vrsMaskNeighborhoodThreshold;
  v8 = (float)vrsMaskMotionBlurEnabled;
  vrsMaskDofEnabled = viewInfo->variableRateShading.vrsMaskDofEnabled;
  vrsMaskMotionBlurIntensity = (float)viewInfo->variableRateShading.vrsMaskMotionBlurIntensity;
  *(float *)&data[2] = v8;
  *(float *)&data[3] = vrsMaskMotionBlurIntensity;
  vrsMaskDofIntensity = (float)viewInfo->variableRateShading.vrsMaskDofIntensity;
  *(float *)&data[4] = (float)vrsMaskDofEnabled;
  *(float *)&data[5] = vrsMaskDofIntensity;
  v13 = 0i64;
  *(float *)&v13 = 1.0 / (float)R_RT_Handle::GetSurface(srcColorRt)->m_image.m_base.width;
  *((float *)&v13 + 1) = 1.0 / (float)R_RT_Handle::GetSurface(srcColorRt)->m_image.m_base.height;
  R_UploadAndSetComputeConstants(computeState, 0, data, 0x20u, NULL);
}

