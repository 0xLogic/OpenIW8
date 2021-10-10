/*
==============
R_CompressSunShadow_GetConstantBuffers
==============
*/

ID3D12Resource **__fastcall R_CompressSunShadow_GetConstantBuffers()
{
  return ?R_CompressSunShadow_GetConstantBuffers@@YAPEAPEAUID3D12Resource@@XZ();
}

/*
==============
R_SunShadow_GenerateFullScreenVisibility
==============
*/

void __fastcall R_SunShadow_GenerateFullScreenVisibility(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, bool genTransmittance)
{
  ?R_SunShadow_GenerateFullScreenVisibility@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@_N@Z(gfxContext, viewInfo, genTransmittance);
}

/*
==============
R_Sunshadow_ClearTranslucent
==============
*/

void __fastcall R_Sunshadow_ClearTranslucent(ComputeCmdBufState *state, const GfxViewInfo *viewInfo, const GfxBackEndData *data, R_RT_ColorHandle *transShadowTexture)
{
  ?R_Sunshadow_ClearTranslucent@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@VR_RT_ColorHandle@@@Z(state, viewInfo, data, transShadowTexture);
}

/*
==============
RB_DrawTextWithShadow
==============
*/

void __fastcall RB_DrawTextWithShadow(GfxCmdBufContext *gfxContext, const char *text, GfxFont *font, float x, float y, const GfxColor fgColor, const GfxColor bgColor)
{
  ?RB_DrawTextWithShadow@@YAXUGfxCmdBufContext@@PEBDPEAUGfxFont@@MMTGfxColor@@3@Z(gfxContext, text, font, x, y, fgColor, bgColor);
}

/*
==============
R_Sunshadow_ShutdownConstBuffers
==============
*/

void R_Sunshadow_ShutdownConstBuffers(void)
{
  ?R_Sunshadow_ShutdownConstBuffers@@YAXXZ();
}

/*
==============
RB_DrawSunshadow
==============
*/

void __fastcall RB_DrawSunshadow(GfxCmdBufContext *gfxContext, const GfxBackEndData *data, const GfxViewInfo *viewInfo)
{
  ?RB_DrawSunshadow@@YAXUGfxCmdBufContext@@PEBUGfxBackEndData@@PEBUGfxViewInfo@@@Z(gfxContext, data, viewInfo);
}

/*
==============
R_CompressSunShadow_ManageResources
==============
*/

void __fastcall R_CompressSunShadow_ManageResources(ComputeCmdBufState *computeState, ID3D12Resource *const *constantBuffer, R_RT_DepthHandle *depthRt, R_RT_DepthHandle *depthBackRt, const GfxShaderBufferRWView *compressedSunShadow)
{
  ?R_CompressSunShadow_ManageResources@@YAXPEAUComputeCmdBufState@@AEBQEAUID3D12Resource@@VR_RT_DepthHandle@@2AEBUGfxShaderBufferRWView@@@Z(computeState, constantBuffer, depthRt, depthBackRt, compressedSunShadow);
}

/*
==============
RB_SunShadow_GenerateFullScreenVisibility
==============
*/

void __fastcall RB_SunShadow_GenerateFullScreenVisibility(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RB_SunShadow_GenerateFullScreenVisibility@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(gfxContext, viewInfo, data);
}

/*
==============
R_Sunshadow_InitConstBuffers
==============
*/

void R_Sunshadow_InitConstBuffers(void)
{
  ?R_Sunshadow_InitConstBuffers@@YAXXZ();
}

/*
==============
R_CompressSunShadow_Debug
==============
*/

void __fastcall R_CompressSunShadow_Debug(ComputeCmdBufState *computeState, ID3D12Resource *const *constantBuffer, R_RT_DepthHandle *depthRt, R_RT_DepthHandle *depthBackRt, const GfxShaderBufferRWView *compressedSunShadow, bool copyDepthBack)
{
  ?R_CompressSunShadow_Debug@@YAXPEAUComputeCmdBufState@@AEBQEAUID3D12Resource@@VR_RT_DepthHandle@@2AEBUGfxShaderBufferRWView@@_N@Z(computeState, constantBuffer, depthRt, depthBackRt, compressedSunShadow, copyDepthBack);
}

/*
==============
R_Sunshadow_GenerateVisibility
==============
*/

void __fastcall R_Sunshadow_GenerateVisibility(ComputeCmdBufState *state, const GfxViewInfo *viewInfo, const GfxBackEndData *data, bool viewmodel, bool genTransmittance, const GfxImage *visibilityImage, const GfxImage **sunShadowImages, const GfxImage *viewmodelSunShadowImage, const GfxImage *translucentSunShadowImage, const GfxImage *floatZImage, const GfxImage *tangentFrameImage, const GfxWrappedBuffer *stencilMaskBuffer, const GfxWrappedBuffer *csmPrepass, const GfxWrappedRWBuffer **compressedSunCascades)
{
  ?R_Sunshadow_GenerateVisibility@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@_N3PEBUGfxImage@@QEAPEBU4@4444PEBUGfxWrappedBuffer@@6QEAPEBUGfxWrappedRWBuffer@@@Z(state, viewInfo, data, viewmodel, genTransmittance, visibilityImage, sunShadowImages, viewmodelSunShadowImage, translucentSunShadowImage, floatZImage, tangentFrameImage, stencilMaskBuffer, csmPrepass, compressedSunCascades);
}

/*
==============
R_InitTransShadowBuffers
==============
*/

void R_InitTransShadowBuffers(void)
{
  ?R_InitTransShadowBuffers@@YAXXZ();
}

/*
==============
R_SunVis_GetConstantBuffer
==============
*/

GfxConstantBuffer *__fastcall R_SunVis_GetConstantBuffer()
{
  return ?R_SunVis_GetConstantBuffer@@YAPEAUGfxConstantBuffer@@XZ();
}

/*
==============
R_Sunshadow_DrawOverlay
==============
*/

void __fastcall R_Sunshadow_DrawOverlay(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, int overlayType, const R_RT_Handle *shadowCascades, unsigned int cascadeCount, const R_RT_Handle *viewmodelShadowCascade, const R_RT_DepthHandle *sunshadowCacheRt, R_RT_Handle *compressedCascades, R_RT_BufferHandle *csmPrepass, const R_RT_Handle *sunshadowTranslucentMask)
{
  ?R_Sunshadow_DrawOverlay@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@HPEBVR_RT_Handle@@IV3@VR_RT_DepthHandle@@PEAV3@VR_RT_BufferHandle@@3@Z(gfxContext, viewInfo, overlayType, shadowCascades, cascadeCount, viewmodelShadowCascade, sunshadowCacheRt, compressedCascades, csmPrepass, sunshadowTranslucentMask);
}

/*
==============
R_Sunshadow_GenerateTransShadowMask
==============
*/

void __fastcall R_Sunshadow_GenerateTransShadowMask(ComputeCmdBufState *state, const GfxViewInfo *viewInfo, const GfxBackEndData *data, R_RT_ColorHandle *transShadowMask)
{
  ?R_Sunshadow_GenerateTransShadowMask@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@VR_RT_ColorHandle@@@Z(state, viewInfo, data, transShadowMask);
}

/*
==============
R_CompressSunShadow
==============
*/

void __fastcall R_CompressSunShadow(ComputeCmdBufState *computeState, ID3D12Resource *const *constantBuffer, R_RT_DepthHandle *depthRt, R_RT_DepthHandle *depthBackRt, R_RT_BufferHandle *nodesBuffer, const GfxShaderBufferRWView *compressedSunShadow)
{
  ?R_CompressSunShadow@@YAXPEAUComputeCmdBufState@@AEBQEAUID3D12Resource@@VR_RT_DepthHandle@@2VR_RT_BufferHandle@@AEBUGfxShaderBufferRWView@@@Z(computeState, constantBuffer, depthRt, depthBackRt, nodesBuffer, compressedSunShadow);
}

/*
==============
R_ShutdownTransShadowBuffers
==============
*/

void R_ShutdownTransShadowBuffers(void)
{
  ?R_ShutdownTransShadowBuffers@@YAXXZ();
}

/*
==============
R_Sunshadow_GenerateTransShadowMaskDilationAndTAA
==============
*/

void __fastcall R_Sunshadow_GenerateTransShadowMaskDilationAndTAA(ComputeCmdBufState *state, const GfxViewInfo *viewInfo, const GfxBackEndData *data, R_RT_ColorHandle *transShadowMaskTemp, R_RT_ColorHandle *transShadowMaskPrevFrame, R_RT_ColorHandle *transShadowMask)
{
  ?R_Sunshadow_GenerateTransShadowMaskDilationAndTAA@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@VR_RT_ColorHandle@@33@Z(state, viewInfo, data, transShadowMaskTemp, transShadowMaskPrevFrame, transShadowMask);
}

/*
==============
RB_CompressSunShadow_InitResources
==============
*/
void RB_CompressSunShadow_InitResources(ComputeCmdBufState *computeState, ID3D12Resource *const *constantBuffer, CompressShadowMapResources *outResources)
{
  const GfxCompressedSunShadowSetup *Setup; 
  const GfxWrappedRWBuffer *WrappedBuffer; 
  R_RT_BufferHandle result; 

  Setup = R_CompressedSunShadow_GetSetup();
  *outResources = *(CompressShadowMapResources *)R_RT_CreateBufferInternal(&result, 0x20u, Setup->m_layersCount + Setup->m_totalNodesCount, GFX_DATA_FORMAT_R32G32B32A32_FLOAT, R_RT_Flag_BufferStructured|R_RT_Flag_RWView, R_RT_FlagInternal_None, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, "compressed sun shadow nodes", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sunshadow.cpp(135)");
  WrappedBuffer = R_RT_Handle::GetWrappedBuffer(&outResources->m_nodesBuffer);
  R_ClearBuffer_Uint(computeState, WrappedBuffer, 0, 1, PIPE_FLUSH_PARTIAL);
  R_CompressSunShadow_SetConstants(computeState, 0, constantBuffer);
}

/*
==============
RB_DrawSunshadow
==============
*/
void RB_DrawSunshadow(GfxCmdBufContext *gfxContext, const GfxBackEndData *data, const GfxViewInfo *viewInfo)
{
  __int128 v4; 
  const GfxViewInfo *v6; 
  const GfxBackEndData *v7; 
  GfxCmdBufSourceState *source; 
  R_RT_DepthHandle *DepthArrayRtDraw3D; 
  GfxCmdBufState *state; 
  unsigned int opaqueCascadeCount; 
  unsigned int v13; 
  R_RT_DepthHandle *m_sunShadowCascades; 
  R_RT_DepthHandle v16; 
  R_RT_DepthHandle *v17; 
  unsigned int i; 
  bool v19; 
  unsigned int m_allocCounter; 
  const GfxSunShadow *p_sunShadow; 
  GfxCmdBufSourceState *v22; 
  GfxCmdBufState *v23; 
  R_RT_Handle v25; 
  GfxCmdBufContext v26; 
  R_RT_DepthHandle v27; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  unsigned int v30; 
  const R_RT_Surface *v31; 
  GfxCmdBufState *v32; 
  R_RT_DepthHandle *v33; 
  GfxCmdBufSourceState *v35; 
  GfxCmdBufState *v36; 
  R_RT_Handle v38; 
  GfxCmdBufContext v39; 
  R_RT_DepthHandle v40; 
  ComputeCmdBufState *GfxComputeCmdBufState; 
  GfxCmdBufSourceState *v43; 
  GfxCmdBufState *v44; 
  R_RT_Handle v46; 
  GfxCmdBufContext v47; 
  R_RT_DepthHandle v48; 
  GfxCmdBufState *v50; 
  __m256i m_translucentShadowRt; 
  GfxCmdBufState *v53; 
  R_RT_DepthHandle *v55; 
  R_RT_Handle m_sunShadowCascade0ForViewmodel; 
  R_RT_Handle v57; 
  GfxCmdBufContext v58; 
  GfxCmdBufContext v59[2]; 
  GfxCmdBufContext v60; 
  GfxCmdBufContext v61; 
  GfxCmdBufContext v62; 
  GfxCmdBufContext v63; 
  R_RT_Handle v64; 
  R_RT_DepthHandle v65; 
  R_RT_DepthHandle result; 
  R_RT_Group rtGroup; 
  GfxDrawCallOutput drawOutput; 
  GfxDrawCallOutput v69; 
  __int128 v70; 

  v58.source = (GfxCmdBufSourceState *)viewInfo;
  v6 = viewInfo;
  v7 = data;
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sunshadow.cpp", 352, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  source = gfxContext->source;
  R_InitCmdBufSourceState(gfxContext->source, &v6->input);
  m_sunShadowCascade0ForViewmodel = R_SunShadowCache_GetBackFaceDepthArrayRtDraw3D(&result)->R_RT_Handle;
  DepthArrayRtDraw3D = R_SunShadowCache_GetDepthArrayRtDraw3D(&v65);
  _XMM1 = *gfxContext;
  v64 = DepthArrayRtDraw3D->R_RT_Handle;
  *(GfxCmdBufContext *)&v57.m_surfaceID = _XMM1;
  R_DrawSunshadow_DrawCacheForAllCascades((GfxCmdBufContext *)&v57, v7, v6, (R_RT_DepthHandle *)&v64, (R_RT_DepthHandle *)&m_sunShadowCascade0ForViewmodel, D3D12XBOX_RESOURCE_STATE_PRESERVE_COMPRESSED_DEPTH|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE);
  state = gfxContext->state;
  R_InitLocalCmdBufState(state, &source->input);
  opaqueCascadeCount = v7->sunShadow.opaqueCascadeCount;
  v13 = 0;
  if ( v7->sunShadow.opaqueCascadeCount )
  {
    m_sunShadowCascades = v6->sceneRtInput.m_sunShadowCascades;
    do
    {
      v65 = *m_sunShadowCascades;
      result = v65;
      if ( (_WORD)_XMM0 )
      {
        R_RT_Handle::GetSurface(&result);
        v16 = result;
      }
      else
      {
        __asm { vpextrd rax, xmm0, 2 }
        if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 458, ASSERT_TYPE_ASSERT, "(depthRt)", (const char *)&queryFormat, "depthRt") )
          __debugbreak();
        v16 = v65;
      }
      state = gfxContext->state;
      rtGroup.m_colorRtCount = 0;
      rtGroup.m_depthRt = v16;
      R_ClearRtGroup(state, &rtGroup, 0x3Fu, 0, (PipeFlushMode)((v13++ != opaqueCascadeCount - 1) + 1));
      ++m_sunShadowCascades;
    }
    while ( v13 < opaqueCascadeCount );
    source = gfxContext->source;
    v7 = data;
    v6 = (const GfxViewInfo *)v58.source;
  }
  R_ShutdownLocalCmdBufState(state, &source->input);
  v17 = v6->sceneRtInput.m_sunShadowCascades;
  v70 = v4;
  v55 = v6->sceneRtInput.m_sunShadowCascades;
  for ( i = 0; i < 3; ++i )
  {
    if ( i < v7->sunShadow.opaqueCascadeCount )
    {
      v19 = v6->useCachedSunShadow == 0;
      result = *v17;
      m_allocCounter = result.m_tracking.m_allocCounter;
      v65 = result;
      if ( !v19 && v7->sunShadow.firstCachedSunShadowPartition <= i && i <= v7->sunShadow.lastCachedSunShadowPartition )
      {
        p_sunShadow = &v7->sunShadow;
        if ( v7 == (const GfxBackEndData *)-927488i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 383, ASSERT_TYPE_ASSERT, "(sunShadow)", (const char *)&queryFormat, "sunShadow") )
          __debugbreak();
        if ( !R_IsCachedSunShadowPartition(p_sunShadow, i) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 384, ASSERT_TYPE_ASSERT, "(R_IsCachedSunShadowPartition( sunShadow, partitionIndex ))", (const char *)&queryFormat, "R_IsCachedSunShadowPartition( sunShadow, partitionIndex )") )
          __debugbreak();
        if ( p_sunShadow->partitionCache[i - v7->sunShadow.firstCachedSunShadowPartition].gfxCachedSunShadowOverlapCount )
        {
          v22 = gfxContext->source;
          v23 = gfxContext->state;
          if ( (*((_BYTE *)&gfxContext->source->input + 7920) & 1) != 0 )
          {
            R_LockIfGfxImmediateContext(v23->device);
            R_InitCmdBufState(v23);
          }
          else
          {
            R_LockGfxImmediateContext();
            _XMM0 = (__int128)*RB_GetBackendCmdBufContext(&v58);
            __asm { vpextrq rdx, xmm0, 1; in }
            if ( v23 != _RDX )
              GfxCmdBufState::Copy(v23, _RDX);
          }
          memset_0(v23->perPrimConstantState, 255, sizeof(v23->perPrimConstantState));
          memset_0(v23->perObjectConstantState, 255, sizeof(v23->perObjectConstantState));
          memset_0(v23->stableConstantState, 255, sizeof(v23->stableConstantState));
          v25 = (R_RT_Handle)v65;
          v26 = *gfxContext;
          v23->data = v22->input.data;
          v64 = v25;
          v57 = v25;
          if ( result.m_surfaceID )
          {
            R_RT_Handle::GetSurface(&v57);
            v27 = (R_RT_DepthHandle)v57;
          }
          else
          {
            if ( m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
              __debugbreak();
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 458, ASSERT_TYPE_ASSERT, "(depthRt)", (const char *)&queryFormat, "depthRt") )
              __debugbreak();
            v27 = (R_RT_DepthHandle)v64;
          }
          rtGroup.m_depthRt = v27;
          rtGroup.m_colorRtCount = 0;
          *(__m256i *)&drawOutput.cmdBuf.device = *(__m256i *)&rtGroup.m_colorRtCount;
          drawOutput.cmdBuf.descState.ranges[0] = *(GfxDescriptorRange *)&rtGroup.m_colorRts[0].m_tracking.m_location;
          drawOutput.cmdBuf.descState.ranges[1] = *(GfxDescriptorRange *)&rtGroup.m_colorRts[1].m_tracking.m_location;
          drawOutput.cmdBuf.descState.ranges[2] = *(GfxDescriptorRange *)&rtGroup.m_colorRts[2].m_tracking.m_location;
          drawOutput.cmdBuf.descState.ranges[3] = *(GfxDescriptorRange *)&rtGroup.m_colorRts[3].m_tracking.m_location;
          drawOutput.cmdBuf.descState.ranges[4] = *(GfxDescriptorRange *)&rtGroup.m_depthRt.m_tracking.m_location;
          *(_QWORD *)&drawOutput.cmdBuf.descState.ranges[5].startSlot = rtGroup.m_vrsRt.m_tracking.m_location;
          *(GfxCmdBufContext *)&v57.m_surfaceID = v26;
          R_SetRenderTargetsInternal((GfxCmdBufContext *)&v57, (const R_RT_Group *)&drawOutput, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sunshadow.cpp(398)");
          v64 = (R_RT_Handle)v65;
          height = R_RT_Handle::GetSurface(&v64)->m_image.m_base.height;
          Surface = R_RT_Handle::GetSurface(&v64);
          R_SetRenderTargetSize(v22, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FOR_VIEW);
          v30 = R_RT_Handle::GetSurface(&result)->m_image.m_base.height;
          v31 = R_RT_Handle::GetSurface(&result);
          R_SetViewportValues(v22, 0, 0, v31->m_image.m_base.width, v30);
          R_Set2D(v22);
          Sys_ProfBeginNamedEvent(0xFFFF7F50, "Cached Sun Shadow Blit");
          v32 = gfxContext->state;
          R_ProfBeginNamedEvent(v32, "cached blits");
          v33 = R_SunShadowCache_GetDepthArrayRtDraw3D((R_RT_DepthHandle *)&v64);
          *(GfxCmdBufContext *)&v57.m_surfaceID = v26;
          m_sunShadowCascade0ForViewmodel = v33->R_RT_Handle;
          R_DrawSunshadow_BlitCache(v7, (GfxCmdBufContext *)&v57, i, (R_RT_DepthHandle *)&m_sunShadowCascade0ForViewmodel);
          R_ProfEndNamedEvent(v32);
          Sys_ProfEndNamedEvent();
          R_ResetRenderTargets(v32);
          if ( (*((_BYTE *)&v22->input + 7920) & 1) != 0 )
          {
            R_ShutdownCmdBufState(v32);
            R_UnlockIfGfxImmediateContext(v32->device);
          }
          else
          {
            _XMM0 = (__int128)*RB_GetBackendCmdBufContext(&v60);
            __asm { vpextrq rcx, xmm0, 1; out }
            if ( v32 != _RCX )
            {
              GfxCmdBufState::Copy(_RCX, v32);
              R_FlushImmediateContext();
            }
            R_UnlockGfxImmediateContext();
          }
        }
        v17 = v55;
      }
      if ( v6->useDynamicSunShadows )
      {
        if ( R_RunDrawListCommandBuffer(v7, (const GfxDrawListType)(i + 24)) )
        {
          R_ProfBeginDrawListImmediate((const GfxDrawListType)(i + 24));
          R_GPU_BeginRunDrawListTimer((const GfxDrawListType)(i + 24));
          R_InitDrawCallOutput(v7, &drawOutput);
          m_sunShadowCascade0ForViewmodel = (R_RT_Handle)v65;
          R_DrawSunshadow_DrawCascade(v6, (GfxDrawListType)(i + 24), (R_RT_DepthHandle *)&m_sunShadowCascade0ForViewmodel, TECHNIQUE_BUILD_SHADOWMAP_DEPTH, &drawOutput);
          R_GPU_EndTimer();
          R_ProfEndDrawListImmediate();
        }
        if ( !i )
        {
          v35 = gfxContext->source;
          v36 = gfxContext->state;
          m_sunShadowCascade0ForViewmodel = (R_RT_Handle)v6->sceneRtInput.m_sunShadowCascade0ForViewmodel;
          if ( (*((_BYTE *)&v35->input + 7920) & 1) != 0 )
          {
            R_LockIfGfxImmediateContext(v36->device);
            R_InitCmdBufState(v36);
          }
          else
          {
            R_LockGfxImmediateContext();
            _XMM0 = (__int128)*RB_GetBackendCmdBufContext(&v61);
            __asm { vpextrq rdx, xmm0, 1; in }
            if ( v36 != _RDX )
              GfxCmdBufState::Copy(v36, _RDX);
          }
          memset_0(v36->perPrimConstantState, 255, sizeof(v36->perPrimConstantState));
          memset_0(v36->perObjectConstantState, 255, sizeof(v36->perObjectConstantState));
          memset_0(v36->stableConstantState, 255, sizeof(v36->stableConstantState));
          v38 = (R_RT_Handle)v65;
          v39 = *gfxContext;
          v36->data = v35->input.data;
          v57 = v38;
          v64 = v38;
          if ( result.m_surfaceID )
          {
            R_RT_Handle::GetSurface(&v64);
            v40 = (R_RT_DepthHandle)v64;
          }
          else
          {
            if ( m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
              __debugbreak();
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 458, ASSERT_TYPE_ASSERT, "(depthRt)", (const char *)&queryFormat, "depthRt") )
              __debugbreak();
            v40 = (R_RT_DepthHandle)v57;
          }
          rtGroup.m_depthRt = v40;
          rtGroup.m_colorRtCount = 0;
          *(__m256i *)&drawOutput.cmdBuf.device = *(__m256i *)&rtGroup.m_colorRtCount;
          drawOutput.cmdBuf.descState.ranges[0] = *(GfxDescriptorRange *)&rtGroup.m_colorRts[0].m_tracking.m_location;
          drawOutput.cmdBuf.descState.ranges[1] = *(GfxDescriptorRange *)&rtGroup.m_colorRts[1].m_tracking.m_location;
          drawOutput.cmdBuf.descState.ranges[2] = *(GfxDescriptorRange *)&rtGroup.m_colorRts[2].m_tracking.m_location;
          drawOutput.cmdBuf.descState.ranges[3] = *(GfxDescriptorRange *)&rtGroup.m_colorRts[3].m_tracking.m_location;
          drawOutput.cmdBuf.descState.ranges[4] = *(GfxDescriptorRange *)&rtGroup.m_depthRt.m_tracking.m_location;
          *(_QWORD *)&drawOutput.cmdBuf.descState.ranges[5].startSlot = rtGroup.m_vrsRt.m_tracking.m_location;
          *(GfxCmdBufContext *)&v57.m_surfaceID = v39;
          R_SetRenderTargetsInternal((GfxCmdBufContext *)&v57, (const R_RT_Group *)&drawOutput, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sunshadow.cpp(448)");
          *(GfxCmdBufContext *)&v57.m_surfaceID = v39;
          R_ResolveDepth((GfxCmdBufContext *)&v57);
          GfxComputeCmdBufState = R_GetGfxComputeCmdBufState(v36);
          v64 = (R_RT_Handle)v65;
          v57 = m_sunShadowCascade0ForViewmodel;
          R_CopyDepthStencilRT(GfxComputeCmdBufState, (R_RT_DepthHandle *)&v57, (R_RT_DepthHandle *)&v64);
          v64 = (R_RT_Handle)v65;
          R_AddDepthStencilTransition(v36, (R_RT_DepthHandle *)&v64, DEPTHSTENCIL_TRANSITION_MODE_WRITE_PRESERVE_COMPRESSION, D3D12_RESOURCE_BARRIER_FLAG_NONE);
          R_AddDepthStencilTransition(v36, (R_RT_DepthHandle *)&m_sunShadowCascade0ForViewmodel, DEPTHSTENCIL_TRANSITION_MODE_READ_PRESERVE_EXPANDED, D3D12_RESOURCE_BARRIER_FLAG_NONE);
          R_FlushResourceTransitions(v36);
          R_ResetRenderTargets(v36);
          if ( (*((_BYTE *)&v35->input + 7920) & 1) != 0 )
          {
            R_ShutdownCmdBufState(v36);
            R_UnlockIfGfxImmediateContext(v36->device);
          }
          else
          {
            _XMM0 = (__int128)*RB_GetBackendCmdBufContext(&v62);
            __asm { vpextrq rcx, xmm0, 1; out }
            if ( v36 != _RCX )
            {
              GfxCmdBufState::Copy(_RCX, v36);
              R_FlushImmediateContext();
            }
            R_UnlockGfxImmediateContext();
          }
          if ( R_RunDrawListCommandBuffer(v7, DRAWLIST_SUNSHADOW_VIEWMODEL) )
          {
            R_ProfBeginDrawListImmediate(DRAWLIST_SUNSHADOW_VIEWMODEL);
            R_GPU_BeginRunDrawListTimer(DRAWLIST_SUNSHADOW_VIEWMODEL);
            R_InitDrawCallOutput(v7, &drawOutput);
            m_sunShadowCascade0ForViewmodel = (R_RT_Handle)v65;
            R_DrawSunshadow_DrawCascade(v6, DRAWLIST_SUNSHADOW_VIEWMODEL, (R_RT_DepthHandle *)&m_sunShadowCascade0ForViewmodel, TECHNIQUE_BUILD_SHADOWMAP_DEPTH, &drawOutput);
            R_GPU_EndTimer();
            R_ProfEndDrawListImmediate();
          }
        }
        v43 = gfxContext->source;
        v44 = gfxContext->state;
        if ( (*((_BYTE *)&gfxContext->source->input + 7920) & 1) != 0 )
        {
          R_LockIfGfxImmediateContext(v44->device);
          R_InitCmdBufState(v44);
        }
        else
        {
          R_LockGfxImmediateContext();
          _XMM0 = (__int128)*RB_GetBackendCmdBufContext(&v63);
          __asm { vpextrq rdx, xmm0, 1; in }
          if ( v44 != _RDX )
            GfxCmdBufState::Copy(v44, _RDX);
        }
        memset_0(v44->perPrimConstantState, 255, sizeof(v44->perPrimConstantState));
        memset_0(v44->perObjectConstantState, 255, sizeof(v44->perObjectConstantState));
        memset_0(v44->stableConstantState, 255, sizeof(v44->stableConstantState));
        v46 = (R_RT_Handle)v65;
        v47 = *gfxContext;
        v44->data = v43->input.data;
        m_sunShadowCascade0ForViewmodel = v46;
        if ( result.m_surfaceID )
        {
          R_RT_Handle::GetSurface(&m_sunShadowCascade0ForViewmodel);
          v48 = (R_RT_DepthHandle)m_sunShadowCascade0ForViewmodel;
        }
        else
        {
          if ( m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 458, ASSERT_TYPE_ASSERT, "(depthRt)", (const char *)&queryFormat, "depthRt") )
            __debugbreak();
          v48 = v65;
        }
        rtGroup.m_depthRt = v48;
        rtGroup.m_colorRtCount = 0;
        *(__m256i *)&drawOutput.cmdBuf.device = *(__m256i *)&rtGroup.m_colorRtCount;
        drawOutput.cmdBuf.descState.ranges[0] = *(GfxDescriptorRange *)&rtGroup.m_colorRts[0].m_tracking.m_location;
        drawOutput.cmdBuf.descState.ranges[1] = *(GfxDescriptorRange *)&rtGroup.m_colorRts[1].m_tracking.m_location;
        drawOutput.cmdBuf.descState.ranges[2] = *(GfxDescriptorRange *)&rtGroup.m_colorRts[2].m_tracking.m_location;
        drawOutput.cmdBuf.descState.ranges[3] = *(GfxDescriptorRange *)&rtGroup.m_colorRts[3].m_tracking.m_location;
        drawOutput.cmdBuf.descState.ranges[4] = *(GfxDescriptorRange *)&rtGroup.m_depthRt.m_tracking.m_location;
        *(_QWORD *)&drawOutput.cmdBuf.descState.ranges[5].startSlot = rtGroup.m_vrsRt.m_tracking.m_location;
        *(GfxCmdBufContext *)&v57.m_surfaceID = v47;
        R_SetRenderTargetsInternal((GfxCmdBufContext *)&v57, (const R_RT_Group *)&drawOutput, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sunshadow.cpp(494)");
        *(GfxCmdBufContext *)&v57.m_surfaceID = v47;
        R_ResolveDepth((GfxCmdBufContext *)&v57);
        R_ResetRenderTargets(v44);
        if ( (*((_BYTE *)&v43->input + 7920) & 1) != 0 )
        {
          R_ShutdownCmdBufState(v44);
          R_UnlockIfGfxImmediateContext(v44->device);
        }
        else
        {
          _XMM0 = (__int128)*RB_GetBackendCmdBufContext(v59);
          __asm { vpextrq rcx, xmm0, 1; out }
          if ( v44 != _RCX )
          {
            GfxCmdBufState::Copy(_RCX, v44);
            R_FlushImmediateContext();
          }
          R_UnlockGfxImmediateContext();
        }
        v17 = v55;
      }
    }
    v55 = ++v17;
  }
  if ( rg.useTransSunShadow )
  {
    v50 = gfxContext->state;
    R_LockIfGfxImmediateContext(v50->device);
    result = *(&v6->sceneRtInput.m_halfSceneDepthRt + v6->input.data->sunShadow.opaqueCascadeCount);
    m_sunShadowCascade0ForViewmodel = (R_RT_Handle)result;
    R_HW_AddResourceTransition(v50, &m_sunShadowCascade0ForViewmodel, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_DEPTH_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(v50);
    m_sunShadowCascade0ForViewmodel = (R_RT_Handle)v6->sceneRtInput.m_translucentShadowRt;
    R_RT_Group::AssignColor((R_RT_Group *)&drawOutput, (R_RT_ColorHandle *)&m_sunShadowCascade0ForViewmodel);
    R_ClearRtGroup(v50, (const R_RT_Group *)&drawOutput, 0xFu, 0, PIPE_FLUSH_FULL);
    R_UnlockIfGfxImmediateContext(v50->device);
    if ( R_RunDrawListCommandBuffer(v7, DRAWLIST_SUNSHADOW_END) )
    {
      R_GPU_BeginRunDrawListTimer(DRAWLIST_SUNSHADOW_END);
      R_ProfBeginDrawListImmediate(DRAWLIST_SUNSHADOW_END);
      R_InitDrawCallOutput(v7, &v69);
      m_translucentShadowRt = (__m256i)v6->sceneRtInput.m_translucentShadowRt;
      v64 = (R_RT_Handle)result;
      m_sunShadowCascade0ForViewmodel = (R_RT_Handle)m_translucentShadowRt;
      v65 = (R_RT_DepthHandle)m_translucentShadowRt;
      if ( LOWORD(_XMM1.source) )
      {
        R_RT_Handle::GetSurface(&v64);
      }
      else
      {
        __asm { vpextrd rax, xmm1, 2 }
        if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 463, ASSERT_TYPE_ASSERT, "(depthRt)", (const char *)&queryFormat, "depthRt") )
          __debugbreak();
      }
      rtGroup.m_colorRtCount = 1;
      *(R_RT_Handle *)&v59[0].source = m_sunShadowCascade0ForViewmodel;
      if ( (_WORD)_XMM0 )
      {
        R_RT_Handle::GetSurface((R_RT_Handle *)v59);
      }
      else
      {
        if ( v65.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 442, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
          __debugbreak();
      }
      rtGroup.m_colorRts[0] = (R_RT_ColorHandle)m_sunShadowCascade0ForViewmodel;
      rtGroup.m_depthRt = (R_RT_DepthHandle)v64;
      R_DrawSunshadow_DrawTranslucent(v6, &v6->drawList[27], &rtGroup, &v69);
      R_ProfEndDrawListImmediate();
      R_GPU_EndTimer();
    }
    v53 = gfxContext->state;
    R_LockIfGfxImmediateContext(v53->device);
    m_sunShadowCascade0ForViewmodel = (R_RT_Handle)result;
    R_HW_AddResourceTransition(v53, &m_sunShadowCascade0ForViewmodel, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_DEPTH_READ, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(v53);
    R_UnlockIfGfxImmediateContext(v53->device);
  }
}

/*
==============
RB_DrawTextWithShadow
==============
*/
void RB_DrawTextWithShadow(GfxCmdBufContext *gfxContext, const char *text, GfxFont *font, float x, float y, const GfxColor fgColor, const GfxColor bgColor)
{
  GfxCmdBufContext v10; 

  v10 = *gfxContext;
  RB_DrawText(&v10, text, font, x + 1.0, y + 1.0, bgColor);
  v10 = *gfxContext;
  RB_DrawText(&v10, text, font, x, y, fgColor);
}

/*
==============
RB_SunShadow_GenerateFullScreenVisibility
==============
*/
void RB_SunShadow_GenerateFullScreenVisibility(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  GfxCmdBufSourceState *source; 
  GfxCmdBufContext v6; 
  unsigned int indexCount; 
  R_RT_Handle m_mainSceneDepthRt; 
  unsigned int m_allocCounter; 
  bool useTransSunShadow; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  GfxCmdBufSourceState *v13; 
  GfxCmdBufState *state; 
  GfxCmdBufSourceState *v16; 
  bool v17; 
  BOOL v19; 
  GfxViewParms *DepthHackViewParms; 
  GfxViewParms *v21; 
  __int64 v22; 
  __m256i v23; 
  vec4_t v24; 
  __int64 v25; 
  R_RT_Handle m_sunVisibilityRt; 
  R_RT_Handle v27; 
  R_RT_Handle v28; 
  GfxViewParms result; 
  GfxViewParms v30; 
  R_RT_Group v31; 

  if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sunshadow.cpp", 795, ASSERT_TYPE_ASSERT, "(viewInfo != nullptr)", (const char *)&queryFormat, "viewInfo != nullptr") )
    __debugbreak();
  if ( (*((_BYTE *)&viewInfo->viewportFeatures + 44) & 4) != 0 )
  {
    Sys_ProfBeginNamedEvent(0xFFFF7F50, "sun visibility");
    source = gfxContext->source;
    R_InitLocalCmdBufState(gfxContext->state, &gfxContext->source->input);
    R_ProfBeginNamedEvent(gfxContext->state, "Generate Sun Visibility");
    R_GPU_BeginTimer(GPU_TIMER_SUN_VISMASK);
    if ( !source->input.data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sunshadow.cpp", 810, ASSERT_TYPE_ASSERT, "(gfxContext.source->input.data)", (const char *)&queryFormat, "gfxContext.source->input.data") )
      __debugbreak();
    v6 = *gfxContext;
    *(GfxCmdBufContext *)&m_sunVisibilityRt.m_surfaceID = *gfxContext;
    indexCount = R_GetTess((GfxCmdBufContext *)&m_sunVisibilityRt)->indexCount;
    if ( indexCount )
    {
      LODWORD(v25) = indexCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sunshadow.cpp", 813, ASSERT_TYPE_ASSERT, "( ( !tess.indexCount ) )", "( tess.indexCount ) = %i", v25) )
        __debugbreak();
    }
    m_mainSceneDepthRt = (R_RT_Handle)viewInfo->sceneRtInput.m_mainSceneDepthRt;
    m_sunVisibilityRt = (R_RT_Handle)viewInfo->sceneRtInput.m_sunVisibilityRt;
    m_allocCounter = m_sunVisibilityRt.m_tracking.m_allocCounter;
    v28 = m_sunVisibilityRt;
    v27 = m_mainSceneDepthRt;
    if ( LOWORD(v6.source) )
    {
      R_RT_Handle::GetSurface(&m_sunVisibilityRt);
    }
    else
    {
      if ( m_sunVisibilityRt.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", *(_QWORD *)&m_sunVisibilityRt.m_surfaceID) )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sunshadow.cpp", 819, ASSERT_TYPE_ASSERT, "(sunVisibilityRt)", (const char *)&queryFormat, "sunVisibilityRt") )
        __debugbreak();
    }
    useTransSunShadow = rg.useTransSunShadow;
    LOBYTE(v30.viewMatrix.m.m[0].v[0]) = 1;
    m_sunVisibilityRt = v28;
    if ( LOWORD(v6.source) )
    {
      R_RT_Handle::GetSurface(&m_sunVisibilityRt);
    }
    else
    {
      if ( m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", *(_QWORD *)&m_sunVisibilityRt.m_surfaceID, *(_QWORD *)&m_sunVisibilityRt.m_tracking.m_allocCounter, m_sunVisibilityRt.m_tracking.m_name, m_sunVisibilityRt.m_tracking.m_location) )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 442, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
        __debugbreak();
    }
    *(R_RT_Handle *)&v30.viewMatrix.m.row0.xyz.z = v28;
    *(R_RT_Handle *)&v30.viewProjectionMatrix.m.row0.xyz.z = v27;
    *(__m256i *)&v31.m_colorRtCount = *(__m256i *)v30.viewMatrix.m.m[0].v;
    *(__m256i *)&v31.m_colorRts[0].m_tracking.m_location = *(__m256i *)v30.viewMatrix.m.row2.v;
    *(GfxMatrix *)&v31.m_colorRts[1].m_tracking.m_location = v30.projectionMatrix;
    *(GfxMatrix *)&v31.m_colorRts[3].m_tracking.m_location = v30.viewProjectionMatrix;
    v31.m_vrsRt.m_tracking.m_location = *(const char **)v30.inverseViewProjectionMatrix.m.m[0].v;
    m_sunVisibilityRt = v28;
    height = R_RT_Handle::GetSurface(&m_sunVisibilityRt)->m_image.m_base.height;
    Surface = R_RT_Handle::GetSurface(&m_sunVisibilityRt);
    v13 = gfxContext->source;
    R_SetRenderTargetSize(gfxContext->source, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FOR_VIEW);
    state = gfxContext->state;
    v27 = v28;
    R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v27, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(state);
    *(GfxCmdBufContext *)&m_sunVisibilityRt.m_surfaceID = *gfxContext;
    R_SetRenderTargetsInternal((GfxCmdBufContext *)&m_sunVisibilityRt, &v31, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sunshadow.cpp(835)");
    R_SetViewportStruct(v13, &viewInfo->sceneViewport);
    _XMM7 = *gfxContext;
    v16 = gfxContext->source;
    R_BeginViewInternal(gfxContext->source, &viewInfo->sceneDef, (const GfxViewParms *)viewInfo, &viewInfo->viewParmsSet.frames[1].viewParms);
    R_MaskSourceState(v16, viewInfo, GLOBAL_LIGHTING_FLAG_HEIGHTFIELD|GLOBAL_LIGHTING_FLAG_SUN_SHADOW_FORWARD|GLOBAL_LIGHTING_FLAG_LIGHT_DATA);
    v16->input.consts[141] = *(vec4_t *)&viewInfo->screenSpaceShadows.sunSceneScreenSpaceShadowTraceDistance;
    ++v16->constVersions[141];
    v17 = !useTransSunShadow;
    __asm { vpextrq r15, xmm7, 1 }
    v19 = !v17;
    R_SetDepthBoundsEnable(_R15, 0.0000000099999999, 0.984375);
    *(GfxCmdBufContext *)&m_sunVisibilityRt.m_surfaceID = _XMM7;
    R_SunVisibilityPixelPass((GfxCmdBufContext *)&m_sunVisibilityRt, SUNSHADOW_VISIBILITY_MATERIAL_DISTANCE_DEFAULT, (SunshadowVisibilityMaterialTransmittanceType)v19, (const GfxViewParms *)viewInfo, &viewInfo->sceneViewport);
    R_SetDepthBoundsEnable(_R15, 0.984375, 1.0);
    DepthHackViewParms = R_GetDepthHackViewParms(&result, (const GfxViewParms *)viewInfo);
    v21 = &v30;
    v22 = 3i64;
    do
    {
      v21 = (GfxViewParms *)((char *)v21 + 128);
      v23 = *(__m256i *)DepthHackViewParms->viewMatrix.m.m[0].v;
      v24 = DepthHackViewParms->projectionMatrix.m.m[3];
      DepthHackViewParms = (GfxViewParms *)((char *)DepthHackViewParms + 128);
      *(__m256i *)v21[-1].camera.origin.v = v23;
      *(__m256i *)&v21[-1].camera.axis.row1.z = *(__m256i *)&DepthHackViewParms[-1].camera.axis.row1.z;
      *(__m256i *)v21[-1].camera.zPlanes = *(__m256i *)DepthHackViewParms[-1].camera.zPlanes;
      *(_OWORD *)&v21[-1].camera.visibilityQueryDistance = *(_OWORD *)&DepthHackViewParms[-1].camera.visibilityQueryDistance;
      *(vec4_t *)&v21[-1].cameraMotion = v24;
      --v22;
    }
    while ( v22 );
    *(GfxCmdBufContext *)&m_sunVisibilityRt.m_surfaceID = *gfxContext;
    R_SunVisibilityPixelPass((GfxCmdBufContext *)&m_sunVisibilityRt, SUNSHADOW_VISIBILITY_MATERIAL_DISTANCE_VIEWMODEL, (SunshadowVisibilityMaterialTransmittanceType)v19, &v30, &viewInfo->sceneViewport);
    R_SetDepthBoundsDisable(_R15);
    v27 = v28;
    R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v27, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(state);
    R_SetDepthBoundsDisable(state);
    R_GPU_EndTimer();
    R_ProfEndNamedEvent(state);
    R_ShutdownLocalCmdBufState(state, &v13->input);
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
R_CompressSunShadow
==============
*/
void R_CompressSunShadow(ComputeCmdBufState *computeState, ID3D12Resource *const *constantBuffer, R_RT_DepthHandle *depthRt, R_RT_DepthHandle *depthBackRt, R_RT_BufferHandle *nodesBuffer, const GfxShaderBufferRWView *compressedSunShadow)
{
  R_RT_DepthHandle *v6; 
  R_RT_Handle *v7; 
  unsigned int v10; 
  GfxShaderBufferRWView *v11; 
  unsigned int v12; 
  __int64 v13; 
  const GfxCompressedSunShadowSetup *v14; 
  GfxCompressedSunShadowAlgorithm *Algorithm; 
  const ComputeShader **Shaders; 
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v18; 
  unsigned int v19; 
  __int64 v20; 
  const GfxCompressedSunShadowSetup *v21; 
  GfxCompressedSunShadowAlgorithm *v22; 
  ComputeShader **v23; 
  const R_RT_Surface *v24; 
  const R_RT_Surface *v25; 
  const R_RT_Surface *v26; 
  R_RT_BufferHandle *v27; 
  R_RT_Handle v28; 
  const GfxCompressedSunShadowSetup *v29; 
  GfxCompressedSunShadowAlgorithm *v30; 
  ComputeShader **v31; 
  const R_RT_Surface *v32; 
  const R_RT_Surface *v33; 
  R_RT_BufferHandle *v34; 
  unsigned int v35; 
  const GfxCompressedSunShadowSetup *v36; 
  GfxCompressedSunShadowAlgorithm *v37; 
  ComputeShader **v38; 
  const R_RT_Surface *v39; 
  const R_RT_Surface *v40; 
  const R_RT_Surface *v41; 
  GfxShaderBufferRWView *p_rwView; 
  GfxShaderBufferRWView *views; 
  GfxTexture *v44[2]; 
  R_RT_Handle v45; 
  GfxTexture *Resident; 
  GfxTexture *v47; 
  const GfxCompressedSunShadowSetup *Setup; 
  R_RT_Handle v49; 
  R_RT_Handle v50; 
  GfxTexture *v51; 
  R_RT_DepthHandle *v52; 

  v52 = depthBackRt;
  v51 = (GfxTexture *)depthRt;
  v6 = depthBackRt;
  v7 = depthRt;
  Setup = R_CompressedSunShadow_GetSetup();
  if ( (R_RT_Handle::GetSurface(v7)->m_image.m_base.width != Setup->m_downsampleRatio * Setup->m_shadowMapResolution || R_RT_Handle::GetSurface(v6)->m_image.m_base.width != Setup->m_downsampleRatio * Setup->m_shadowMapResolution) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sunshadow.cpp", 234, ASSERT_TYPE_ASSERT, "(depthRt.GetWidth() == cssSetup->m_shadowMapResolution * cssSetup->m_downsampleRatio && depthBackRt.GetWidth() == cssSetup->m_shadowMapResolution * cssSetup->m_downsampleRatio)", (const char *)&queryFormat, "depthRt.GetWidth() == cssSetup->m_shadowMapResolution * cssSetup->m_downsampleRatio && depthBackRt.GetWidth() == cssSetup->m_shadowMapResolution * cssSetup->m_downsampleRatio") )
    __debugbreak();
  v10 = 0;
  v11 = (GfxShaderBufferRWView *)compressedSunShadow;
  v12 = Setup->m_layersCount - 1;
  if ( Setup->m_layersCount != 1 )
  {
    v13 = 20i64;
    do
    {
      v50 = v6->R_RT_Handle;
      v45 = nodesBuffer->R_RT_Handle;
      v49 = *(R_RT_Handle *)&v51->basemap;
      v14 = R_CompressedSunShadow_GetSetup();
      Algorithm = (GfxCompressedSunShadowAlgorithm *)R_CompressedSunShadow_GetAlgorithm(v14->m_algorithmId);
      Shaders = (const ComputeShader **)GfxCompressedSunShadowAlgorithm::GetShaders(Algorithm);
      R_SetComputeShader(computeState, *Shaders);
      Surface = R_RT_Handle::GetSurface(&v49);
      compressedSunShadow = (const GfxShaderBufferRWView *)R_Texture_GetResident(Surface->m_image.m_base.textureId);
      R_SetComputeTextures(computeState, 0, 1, (const GfxTexture *const *)&compressedSunShadow);
      v18 = R_RT_Handle::GetSurface(&v50);
      v44[0] = (GfxTexture *)R_Texture_GetResident(v18->m_image.m_base.textureId);
      R_SetComputeTextures(computeState, 1, 1, (const GfxTexture *const *)v44);
      views = (GfxShaderBufferRWView *)R_RT_Handle::GetSurface(&v45);
      if ( ((__int64)views->rwCounterResource & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
        __debugbreak();
      views = (GfxShaderBufferRWView *)((char *)views + 1112);
      R_SetComputeRWViewsWithCounters(computeState, 0, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
      views = v11;
      R_SetComputeRWViewsWithCounters(computeState, 1, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
      R_CompressSunShadow_SetConstants(computeState, v10, constantBuffer);
      R_Dispatch(computeState, (*(unsigned int *)((char *)&v14->m_shadowMapResolution + v13) + 63) >> 6, 1u, 1u);
      R_ComputeWaitForCompute(computeState, PIPE_FLUSH_PARTIAL);
      v6 = v52;
      ++v10;
      v13 += 4i64;
    }
    while ( v10 < v12 );
    v7 = (R_RT_Handle *)v51;
  }
  if ( v12 )
  {
    v19 = v12 - 1;
    LODWORD(compressedSunShadow) = v12 - 1;
    v20 = 4i64 * v12 + 20;
    while ( 1 )
    {
      --v12;
      v20 -= 4i64;
      if ( v12 == v19 )
      {
        v50 = v6->R_RT_Handle;
        v49 = nodesBuffer->R_RT_Handle;
        v45 = *v7;
        v21 = R_CompressedSunShadow_GetSetup();
        v22 = (GfxCompressedSunShadowAlgorithm *)R_CompressedSunShadow_GetAlgorithm(v21->m_algorithmId);
        v23 = GfxCompressedSunShadowAlgorithm::GetShaders(v22);
        R_SetComputeShader(computeState, v23[3]);
        v24 = R_RT_Handle::GetSurface(&v45);
        views = (GfxShaderBufferRWView *)R_Texture_GetResident(v24->m_image.m_base.textureId);
        R_SetComputeTextures(computeState, 0, 1, (const GfxTexture *const *)&views);
        v25 = R_RT_Handle::GetSurface(&v50);
        v44[0] = (GfxTexture *)R_Texture_GetResident(v25->m_image.m_base.textureId);
        R_SetComputeTextures(computeState, 1, 1, (const GfxTexture *const *)v44);
        v26 = R_RT_Handle::GetSurface(&v49);
        if ( (v26->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
          __debugbreak();
        p_rwView = &v26->m_buffer.m_wrappedBuffer.rwView;
        R_SetComputeRWViewsWithCounters(computeState, 0, 1, (const GfxShaderBufferRWView *const *)&p_rwView, NULL);
        p_rwView = v11;
        R_SetComputeRWViewsWithCounters(computeState, 1, 1, (const GfxShaderBufferRWView *const *)&p_rwView, NULL);
        R_CompressSunShadow_SetConstants(computeState, v12, constantBuffer);
        R_Dispatch(computeState, ((*(unsigned int *)((char *)&v21->m_shadowMapResolution + v20) >> 2) + 63) >> 6, 1u, 1u);
      }
      else
      {
        v27 = nodesBuffer;
        v45 = nodesBuffer->R_RT_Handle;
        R_CompressSunShadow_PrepareDataLayout(computeState, constantBuffer, (R_RT_BufferHandle *)&v45, v11, v12);
        R_ComputeWaitForCompute(computeState, PIPE_FLUSH_PARTIAL);
        v28 = v6->R_RT_Handle;
        v49 = v27->R_RT_Handle;
        v50 = v28;
        v45 = *(R_RT_Handle *)&v51->basemap;
        v29 = R_CompressedSunShadow_GetSetup();
        v30 = (GfxCompressedSunShadowAlgorithm *)R_CompressedSunShadow_GetAlgorithm(v29->m_algorithmId);
        v31 = GfxCompressedSunShadowAlgorithm::GetShaders(v30);
        R_SetComputeShader(computeState, v31[3]);
        v32 = R_RT_Handle::GetSurface(&v45);
        Resident = (GfxTexture *)R_Texture_GetResident(v32->m_image.m_base.textureId);
        R_SetComputeTextures(computeState, 0, 1, (const GfxTexture *const *)&Resident);
        v33 = R_RT_Handle::GetSurface(&v50);
        v47 = (GfxTexture *)R_Texture_GetResident(v33->m_image.m_base.textureId);
        R_SetComputeTextures(computeState, 1, 1, (const GfxTexture *const *)&v47);
        p_rwView = (GfxShaderBufferRWView *)R_RT_Handle::GetSurface(&v49);
        if ( ((__int64)p_rwView->rwCounterResource & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
          __debugbreak();
        p_rwView = (GfxShaderBufferRWView *)((char *)p_rwView + 1112);
        R_SetComputeRWViewsWithCounters(computeState, 0, 1, (const GfxShaderBufferRWView *const *)&p_rwView, NULL);
        p_rwView = v11;
        R_SetComputeRWViewsWithCounters(computeState, 1, 1, (const GfxShaderBufferRWView *const *)&p_rwView, NULL);
        R_CompressSunShadow_SetConstants(computeState, v12, constantBuffer);
        R_Dispatch(computeState, ((*(unsigned int *)((char *)&v29->m_shadowMapResolution + v20) >> 2) + 63) >> 6, 1u, 1u);
        R_ComputeWaitForCompute(computeState, PIPE_FLUSH_PARTIAL);
        v45 = v27->R_RT_Handle;
        R_CompressSunShadow_ResetDataLayout(computeState, constantBuffer, (R_RT_BufferHandle *)&v45, v11, v12);
      }
      R_ComputeWaitForCompute(computeState, PIPE_FLUSH_PARTIAL);
      v19 = (unsigned int)compressedSunShadow;
      v6 = v52;
      if ( !v12 )
        break;
      v7 = (R_RT_Handle *)v51;
    }
  }
  v34 = nodesBuffer;
  v35 = Setup->m_layersCount - 1;
  v45 = nodesBuffer->R_RT_Handle;
  R_CompressSunShadow_PrepareDataLayout(computeState, constantBuffer, (R_RT_BufferHandle *)&v45, v11, v35);
  R_ComputeWaitForCompute(computeState, PIPE_FLUSH_PARTIAL);
  v49 = v34->R_RT_Handle;
  v50 = v52->R_RT_Handle;
  v45 = *(R_RT_Handle *)&v51->basemap;
  v36 = R_CompressedSunShadow_GetSetup();
  v37 = (GfxCompressedSunShadowAlgorithm *)R_CompressedSunShadow_GetAlgorithm(v36->m_algorithmId);
  v38 = GfxCompressedSunShadowAlgorithm::GetShaders(v37);
  R_SetComputeShader(computeState, v38[3]);
  v39 = R_RT_Handle::GetSurface(&v45);
  v51 = (GfxTexture *)R_Texture_GetResident(v39->m_image.m_base.textureId);
  R_SetComputeTextures(computeState, 0, 1, (const GfxTexture *const *)&v51);
  v40 = R_RT_Handle::GetSurface(&v50);
  v51 = (GfxTexture *)R_Texture_GetResident(v40->m_image.m_base.textureId);
  R_SetComputeTextures(computeState, 1, 1, (const GfxTexture *const *)&v51);
  v41 = R_RT_Handle::GetSurface(&v49);
  if ( (v41->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v51 = (GfxTexture *)&v41->m_array.m_handles[1];
  R_SetComputeRWViewsWithCounters(computeState, 0, 1, (const GfxShaderBufferRWView *const *)&v51, NULL);
  v51 = (GfxTexture *)v11;
  R_SetComputeRWViewsWithCounters(computeState, 1, 1, (const GfxShaderBufferRWView *const *)&v51, NULL);
  R_CompressSunShadow_SetConstants(computeState, v35, constantBuffer);
  R_Dispatch(computeState, ((v36->m_layerNodesCount[v35] >> 2) + 63) >> 6, 1u, 1u);
  R_ComputeWaitForCompute(computeState, PIPE_FLUSH_PARTIAL);
  v45 = v34->R_RT_Handle;
  R_CompressSunShadow_ResetDataLayout(computeState, constantBuffer, (R_RT_BufferHandle *)&v45, v11, v35);
  R_ComputeWaitForCompute(computeState, PIPE_FLUSH_PARTIAL);
}

/*
==============
R_CompressSunShadow_Debug
==============
*/
void R_CompressSunShadow_Debug(ComputeCmdBufState *computeState, ID3D12Resource *const *constantBuffer, R_RT_DepthHandle *depthRt, R_RT_DepthHandle *depthBackRt, const GfxShaderBufferRWView *compressedSunShadow, bool copyDepthBack)
{
  const GfxShaderBufferRWView *v10; 
  R_RT_Handle v11; 
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v13; 
  const R_RT_Surface *v14; 
  const GfxCompressedSunShadowSetup *Setup; 
  unsigned int v16; 
  CompressShadowMapResources outResources; 
  R_RT_Handle m_nodesBuffer; 
  R_RT_Handle v19; 
  R_RT_Handle v20; 

  RB_CompressSunShadow_InitResources(computeState, constantBuffer, &outResources);
  v10 = compressedSunShadow;
  R_HW_AddResourceTransition(computeState, compressedSunShadow, 0, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  m_nodesBuffer = (R_RT_Handle)outResources.m_nodesBuffer;
  R_HW_AddResourceTransition(computeState, &m_nodesBuffer, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(computeState);
  v11 = depthRt->R_RT_Handle;
  v20 = (R_RT_Handle)outResources.m_nodesBuffer;
  v19 = depthBackRt->R_RT_Handle;
  m_nodesBuffer = v11;
  R_SetComputeShader(computeState, rgp.compressShadowMapIntervals[4]);
  Surface = R_RT_Handle::GetSurface(&m_nodesBuffer);
  compressedSunShadow = (const GfxShaderBufferRWView *)R_Texture_GetResident(Surface->m_image.m_base.textureId);
  R_SetComputeTextures(computeState, 0, 1, (const GfxTexture *const *)&compressedSunShadow);
  v13 = R_RT_Handle::GetSurface(&v19);
  compressedSunShadow = (const GfxShaderBufferRWView *)R_Texture_GetResident(v13->m_image.m_base.textureId);
  R_SetComputeTextures(computeState, 1, 1, (const GfxTexture *const *)&compressedSunShadow);
  v14 = R_RT_Handle::GetSurface(&v20);
  if ( (v14->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  compressedSunShadow = &v14->m_buffer.m_wrappedBuffer.rwView;
  R_SetComputeRWViewsWithCounters(computeState, 0, 1, &compressedSunShadow, NULL);
  compressedSunShadow = v10;
  R_SetComputeRWViewsWithCounters(computeState, 1, 1, &compressedSunShadow, NULL);
  R_CompressSunShadow_SetConstants(computeState, copyDepthBack, constantBuffer);
  Setup = R_CompressedSunShadow_GetSetup();
  v16 = (Setup->m_shadowMapResolution * Setup->m_downsampleRatio + 7) >> 3;
  R_Dispatch(computeState, v16, v16, 1u);
  R_ComputeWaitForCompute(computeState, PIPE_FLUSH_PARTIAL);
  R_HW_AddResourceTransition(computeState, v10, 0, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v20 = (R_RT_Handle)outResources.m_nodesBuffer;
  R_HW_AddResourceTransition(computeState, &v20, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(computeState);
  v20 = (R_RT_Handle)outResources.m_nodesBuffer;
  R_RT_DestroyInternal(&v20);
}

/*
==============
R_CompressSunShadow_GetConstantBuffers
==============
*/
ID3D12Resource **R_CompressSunShadow_GetConstantBuffers()
{
  return 0i64;
}

/*
==============
R_CompressSunShadow_ManageResources
==============
*/
void R_CompressSunShadow_ManageResources(ComputeCmdBufState *computeState, ID3D12Resource *const *constantBuffer, R_RT_DepthHandle *depthRt, R_RT_DepthHandle *depthBackRt, const GfxShaderBufferRWView *compressedSunShadow)
{
  R_RT_Handle v9; 
  CompressShadowMapResources outResources; 
  R_RT_BufferHandle m_nodesBuffer; 
  R_RT_DepthHandle v12; 
  R_RT_Handle v13; 

  RB_CompressSunShadow_InitResources(computeState, constantBuffer, &outResources);
  R_HW_AddResourceTransition(computeState, compressedSunShadow, 0, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(computeState);
  v9 = depthRt->R_RT_Handle;
  m_nodesBuffer = outResources.m_nodesBuffer;
  v12 = *depthBackRt;
  v13 = v9;
  R_CompressSunShadow(computeState, constantBuffer, (R_RT_DepthHandle *)&v13, &v12, &m_nodesBuffer, compressedSunShadow);
  R_HW_AddResourceTransition(computeState, compressedSunShadow, 0, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(computeState);
  v13 = (R_RT_Handle)outResources.m_nodesBuffer;
  R_RT_DestroyInternal(&v13);
}

/*
==============
R_CompressSunShadow_PrepareDataLayout
==============
*/
void R_CompressSunShadow_PrepareDataLayout(ComputeCmdBufState *computeState, ID3D12Resource *const *constantBuffer, R_RT_BufferHandle *nodesBuffer, const GfxShaderBufferRWView *compressedSunShadow, unsigned int currentLayer)
{
  const GfxCompressedSunShadowSetup *Setup; 
  GfxCompressedSunShadowAlgorithm *Algorithm; 
  ComputeShader **Shaders; 
  __int64 v12; 
  GfxTexture *textures; 

  Setup = R_CompressedSunShadow_GetSetup();
  Algorithm = (GfxCompressedSunShadowAlgorithm *)R_CompressedSunShadow_GetAlgorithm(Setup->m_algorithmId);
  Shaders = GfxCompressedSunShadowAlgorithm::GetShaders(Algorithm);
  R_SetComputeShader(computeState, Shaders[1]);
  textures = (GfxTexture *)R_Texture_GetResident(rgp.blackImage->textureId);
  R_SetComputeTextures(computeState, 0, 1, (const GfxTexture *const *)&textures);
  textures = (GfxTexture *)R_Texture_GetResident(rgp.blackImage->textureId);
  R_SetComputeTextures(computeState, 1, 1, (const GfxTexture *const *)&textures);
  textures = (GfxTexture *)&R_RT_Handle::GetWrappedBuffer(nodesBuffer)->rwView;
  R_SetComputeRWViewsWithCounters(computeState, 0, 1, (const GfxShaderBufferRWView *const *)&textures, NULL);
  textures = (GfxTexture *)compressedSunShadow;
  R_SetComputeRWViewsWithCounters(computeState, 1, 1, (const GfxShaderBufferRWView *const *)&textures, NULL);
  v12 = currentLayer;
  R_CompressSunShadow_SetConstants(computeState, currentLayer, constantBuffer);
  R_Dispatch(computeState, ((Setup->m_layerNodesCount[v12] >> 2) + 63) >> 6, 1u, 1u);
}

/*
==============
R_CompressSunShadow_ResetDataLayout
==============
*/
void R_CompressSunShadow_ResetDataLayout(ComputeCmdBufState *computeState, ID3D12Resource *const *constantBuffer, R_RT_BufferHandle *nodesBuffer, const GfxShaderBufferRWView *compressedSunShadow, unsigned int currentLayer)
{
  const GfxCompressedSunShadowSetup *Setup; 
  GfxCompressedSunShadowAlgorithm *Algorithm; 
  ComputeShader **Shaders; 
  __int64 v12; 
  GfxTexture *textures; 

  Setup = R_CompressedSunShadow_GetSetup();
  Algorithm = (GfxCompressedSunShadowAlgorithm *)R_CompressedSunShadow_GetAlgorithm(Setup->m_algorithmId);
  Shaders = GfxCompressedSunShadowAlgorithm::GetShaders(Algorithm);
  R_SetComputeShader(computeState, Shaders[2]);
  textures = (GfxTexture *)R_Texture_GetResident(rgp.blackImage->textureId);
  R_SetComputeTextures(computeState, 0, 1, (const GfxTexture *const *)&textures);
  textures = (GfxTexture *)R_Texture_GetResident(rgp.blackImage->textureId);
  R_SetComputeTextures(computeState, 1, 1, (const GfxTexture *const *)&textures);
  textures = (GfxTexture *)&R_RT_Handle::GetWrappedBuffer(nodesBuffer)->rwView;
  R_SetComputeRWViewsWithCounters(computeState, 0, 1, (const GfxShaderBufferRWView *const *)&textures, NULL);
  textures = (GfxTexture *)compressedSunShadow;
  R_SetComputeRWViewsWithCounters(computeState, 1, 1, (const GfxShaderBufferRWView *const *)&textures, NULL);
  v12 = currentLayer;
  R_CompressSunShadow_SetConstants(computeState, currentLayer, constantBuffer);
  R_Dispatch(computeState, (Setup->m_totalNodesCount - Setup->m_layerNodesOffset[v12] + 63) >> 6, 1u, 1u);
}

/*
==============
R_CompressSunShadow_SetConstants
==============
*/
void R_CompressSunShadow_SetConstants(ComputeCmdBufState *computeState, unsigned int currentLayer, ID3D12Resource *const *constantBuffer)
{
  __int64 v3; 
  const GfxCompressedSunShadowSetup *Setup; 
  __int64 m_downsampleRatio; 
  float v7; 
  float v8; 
  int data[10]; 
  __int64 v10; 

  v3 = currentLayer;
  Setup = R_CompressedSunShadow_GetSetup();
  m_downsampleRatio = Setup->m_downsampleRatio;
  data[0] = Setup->m_shadowMapResolution;
  data[1] = Setup->m_layersCount;
  data[2] = Setup->m_totalNodesCount;
  data[3] = Setup->m_compressedShadowMapMaxSize;
  v7 = (float)(unsigned int)data[0];
  data[4] = v3;
  data[5] = Setup->m_layerNodesCount[v3];
  data[6] = Setup->m_layerNodesOffset[v3];
  *(float *)&data[7] = 1.0 / v7;
  data[8] = Setup->m_downsampleRatio;
  v8 = (float)m_downsampleRatio;
  *(float *)&data[9] = 1.0 / (float)(v8 * v7);
  v10 = 0i64;
  R_UploadAndSetComputeConstants(computeState, 0, data, 0x30u, NULL);
}

/*
==============
R_InitTransShadowBuffers
==============
*/
void R_InitTransShadowBuffers(void)
{
  __int64 v0; 
  GfxWrappedBuffer *v1; 

  v0 = 2i64;
  v1 = s_transShadowBoundsDoubleBuffer;
  do
  {
    R_CreateGfxWrappedBuffer(v1++, GfxWrappedBuffer_Structured, 28, 0x4000u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "s_transShadowBoundsDoubleBuffer");
    --v0;
  }
  while ( v0 );
}

/*
==============
R_ShutdownTransShadowBuffers
==============
*/
void R_ShutdownTransShadowBuffers(void)
{
  GfxWrappedBuffer *v0; 
  __int64 v1; 

  v0 = s_transShadowBoundsDoubleBuffer;
  v1 = 2i64;
  do
  {
    R_ShutdownGfxWrappedBuffer(v0++);
    --v1;
  }
  while ( v1 );
}

/*
==============
R_SunShadow_GenerateFullScreenVisibility
==============
*/
void R_SunShadow_GenerateFullScreenVisibility(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, bool genTransmittance)
{
  GfxCmdBufSourceState *source; 
  BOOL v5; 
  GfxCmdBufState *state; 
  GfxViewParms *DepthHackViewParms; 
  GfxViewParms *v9; 
  __int64 v10; 
  __m256i v11; 
  vec4_t v12; 
  GfxCmdBufContext v13; 
  GfxViewParms result; 
  GfxViewParms v15; 

  source = gfxContext->source;
  v5 = genTransmittance;
  R_BeginViewInternal(gfxContext->source, &viewInfo->sceneDef, (const GfxViewParms *)viewInfo, &viewInfo->viewParmsSet.frames[1].viewParms);
  R_MaskSourceState(source, viewInfo, GLOBAL_LIGHTING_FLAG_HEIGHTFIELD|GLOBAL_LIGHTING_FLAG_SUN_SHADOW_FORWARD|GLOBAL_LIGHTING_FLAG_LIGHT_DATA);
  source->input.consts[141] = *(vec4_t *)&viewInfo->screenSpaceShadows.sunSceneScreenSpaceShadowTraceDistance;
  ++source->constVersions[141];
  state = gfxContext->state;
  R_SetDepthBoundsEnable(state, 0.0000000099999999, 0.984375);
  v13 = *gfxContext;
  R_SunVisibilityPixelPass(&v13, SUNSHADOW_VISIBILITY_MATERIAL_DISTANCE_DEFAULT, (SunshadowVisibilityMaterialTransmittanceType)v5, (const GfxViewParms *)viewInfo, &viewInfo->sceneViewport);
  R_SetDepthBoundsEnable(state, 0.984375, 1.0);
  DepthHackViewParms = R_GetDepthHackViewParms(&result, (const GfxViewParms *)viewInfo);
  v9 = &v15;
  v10 = 3i64;
  do
  {
    v9 = (GfxViewParms *)((char *)v9 + 128);
    v11 = *(__m256i *)DepthHackViewParms->viewMatrix.m.m[0].v;
    v12 = DepthHackViewParms->projectionMatrix.m.m[3];
    DepthHackViewParms = (GfxViewParms *)((char *)DepthHackViewParms + 128);
    *(__m256i *)v9[-1].camera.origin.v = v11;
    *(__m256i *)&v9[-1].camera.axis.row1.z = *(__m256i *)&DepthHackViewParms[-1].camera.axis.row1.z;
    *(__m256i *)v9[-1].camera.zPlanes = *(__m256i *)DepthHackViewParms[-1].camera.zPlanes;
    *(_OWORD *)&v9[-1].camera.visibilityQueryDistance = *(_OWORD *)&DepthHackViewParms[-1].camera.visibilityQueryDistance;
    *(vec4_t *)&v9[-1].cameraMotion = v12;
    --v10;
  }
  while ( v10 );
  v13 = *gfxContext;
  R_SunVisibilityPixelPass(&v13, SUNSHADOW_VISIBILITY_MATERIAL_DISTANCE_VIEWMODEL, (SunshadowVisibilityMaterialTransmittanceType)v5, &v15, &viewInfo->sceneViewport);
  R_SetDepthBoundsDisable(state);
}

/*
==============
R_SunVis_GetConstantBuffer
==============
*/
GfxConstantBuffer *R_SunVis_GetConstantBuffer()
{
  return 0i64;
}

/*
==============
R_SunVisibilityPixelPass
==============
*/
void R_SunVisibilityPixelPass(GfxCmdBufContext *gfxContext, SunshadowVisibilityMaterialDistanceType distanceIndex, SunshadowVisibilityMaterialTransmittanceType transmittanceIndex, const GfxViewParms *viewParms, const GfxViewport *viewport)
{
  GfxCmdBufSourceState *source; 
  GfxCmdBufContext v7; 
  float height; 
  float width; 
  materialCommands_t *Tess; 
  materialCommands_t *v11; 
  GfxCmdBufContext v12; 

  source = gfxContext->source;
  v7 = *gfxContext;
  source->input.consts[7] = viewParms->viewProjectionMatrix.m.m[0];
  ++source->constVersions[7];
  source->input.consts[8] = viewParms->viewProjectionMatrix.m.row1;
  ++source->constVersions[8];
  source->input.consts[9] = viewParms->viewProjectionMatrix.m.row2;
  ++source->constVersions[9];
  source->input.consts[10] = viewParms->viewProjectionMatrix.m.row3;
  ++source->constVersions[10];
  height = (float)viewport->height;
  width = (float)viewport->width;
  v12 = v7;
  RB_ViewportFilterDirectInternal(&v12, rgp.sunshadowVisibilityMaterial[distanceIndex][transmittanceIndex], 0xFFFFFFFF, viewport, 0.0, 0.0, width, height, 0.0, 0.0, 1.0, 1.0, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sunshadow.cpp(588)");
  v12 = *gfxContext;
  Tess = R_GetTess(&v12);
  v11 = Tess;
  if ( Tess->vertexCount )
  {
    v12 = *gfxContext;
    RB_EndTessSurfaceInternal(&v12, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h(162)");
  }
  else
  {
    if ( Tess->indexCount )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 166, ASSERT_TYPE_ASSERT, "(tess.indexCount == 0)", (const char *)&queryFormat, "tess.indexCount == 0") )
        __debugbreak();
    }
    v11->viewStatsTarget = GFX_VIEW_STATS_INVALID;
    v11->primStatsTarget = GFX_PRIM_STATS_INVALID;
  }
}

/*
==============
R_Sunshadow_ClearTranslucent
==============
*/
void R_Sunshadow_ClearTranslucent(ComputeCmdBufState *state, const GfxViewInfo *viewInfo, const GfxBackEndData *data, R_RT_ColorHandle *transShadowTexture)
{
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  const R_RT_Surface *Surface; 
  unsigned int transShadowBoundsCountPrevFrame; 
  Bounds *transShadowBoundsPrevFrame; 
  __int64 v15; 
  double v16; 
  float v17; 
  double v18; 
  float v19; 
  double v20; 
  float v21; 
  double v22; 
  unsigned int v23; 
  int v24; 
  unsigned int v25; 
  unsigned int v26; 
  int v27; 
  __int64 v28; 
  unsigned int v29; 
  __int64 v32; 
  unsigned int v33; 
  __int64 v34; 
  __int64 v37; 
  __int64 v40; 
  int v41; 
  GfxTexture *v42; 
  unsigned int v43; 
  unsigned int i; 
  int basemap; 
  unsigned int v46; 
  int v47; 
  __int64 v48; 
  unsigned int v49; 
  __int64 v50; 
  __int64 v51; 
  GfxTexture *textures; 
  __int64 v53; 
  ComputeCmdBufState *statea; 
  _OWORD dataa[256]; 
  __int128 v56[17]; 

  statea = state;
  R_SetComputeShader(state, rgp.sunvisTransShadowClearTranslucent);
  Surface = R_RT_Handle::GetSurface(transShadowTexture);
  textures = (GfxTexture *)R_Texture_GetResident(Surface->m_image.m_base.textureId);
  R_SetComputeRWTextures(state, 0, 1, (const GfxTexture *const *)&textures);
  memset_0(v56, 0, 0x80ui64);
  transShadowBoundsCountPrevFrame = data->transShadowBoundsCountPrevFrame;
  if ( transShadowBoundsCountPrevFrame )
  {
    v56[13] = v4;
    transShadowBoundsPrevFrame = data->transShadowBoundsPrevFrame;
    v56[12] = v5;
    v15 = transShadowBoundsCountPrevFrame;
    v56[11] = v6;
    v56[10] = v7;
    v56[9] = v8;
    do
    {
      v53 = *(_QWORD *)transShadowBoundsPrevFrame->halfSize.v;
      textures = *(GfxTexture **)transShadowBoundsPrevFrame->midPoint.v;
      v16 = I_fclamp(*(float *)&v53, 0.0, 0.99900001);
      v17 = *(float *)&v16 * 32.0;
      v18 = I_fclamp(*((float *)&v53 + 1), 0.0, 0.99900001);
      v19 = *(float *)&v18 * 32.0;
      v20 = I_fclamp(*(float *)&textures, 0.0, 0.99900001);
      v21 = *(float *)&v20 * 32.0;
      v22 = I_fclamp(*((float *)&textures + 1), 0.0, 0.99900001);
      v23 = 0;
      v24 = (int)v21;
      v25 = (int)(float)(*(float *)&v22 * 32.0);
      v26 = (int)v19;
      if ( (int)v21 <= (unsigned int)(int)v17 )
      {
        v27 = __ROL4__(1, v24);
        v28 = (unsigned int)((int)v17 - v24 + 1);
        do
        {
          v23 |= v27;
          v27 = __ROL4__(v27, 1);
          --v28;
        }
        while ( v28 );
      }
      v29 = v26 - v25 + 1;
      _XMM2 = v23;
      __asm { vpshufd xmm2, xmm2, 0 }
      if ( v25 <= v26 )
      {
        if ( v29 >= 0x10 )
        {
          v32 = v25 + 8;
          v33 = v26 - (v29 & 0xF);
          do
          {
            v34 = v25;
            v25 += 16;
            __asm { vpor    xmm1, xmm2, [rsp+rax*4+1178h+var_118] }
            *(__int128 *)((char *)v56 + 4 * v34) = _XMM1;
            __asm { vpor    xmm1, xmm2, [rsp+rax*4+1178h+var_118] }
            *(__int128 *)((char *)v56 + 4 * (unsigned int)(v32 - 4)) = _XMM1;
            v37 = (unsigned int)(v32 + 4);
            __asm { vpor    xmm1, xmm2, [rsp+r10*4+1178h+var_118] }
            *(__int128 *)((char *)v56 + 4 * v32) = _XMM1;
            v32 = (unsigned int)(v32 + 16);
            __asm { vpor    xmm1, xmm2, [rsp+rax*4+1178h+var_118] }
            *(__int128 *)((char *)v56 + 4 * v37) = _XMM1;
          }
          while ( v25 <= v33 );
        }
        for ( ; v25 <= v26; *((_DWORD *)v56 + v40) |= v23 )
          v40 = v25++;
      }
      ++transShadowBoundsPrevFrame;
      --v15;
    }
    while ( v15 );
  }
  memset_0(dataa, 0, sizeof(dataa));
  v41 = 0;
  v42 = (GfxTexture *)v56;
  v43 = 0;
  textures = (GfxTexture *)v56;
  for ( i = 0; i < 0x20; ++i )
  {
    basemap = (int)v42->basemap;
    if ( LODWORD(v42->basemap) )
    {
      v46 = 0;
      v47 = 1;
      do
      {
        if ( (v47 & basemap) != 0 )
        {
          if ( (unsigned int)v41 >= 4 )
          {
            LODWORD(v51) = 4;
            LODWORD(v50) = v41;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vec_types.h", 61, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v50, v51) )
              __debugbreak();
          }
          v48 = v41;
          v41 = ((_BYTE)v41 + 1) & 3;
          *((_DWORD *)&dataa[(unsigned __int64)v43++ >> 2] + v48) = i | (v46 << 16);
        }
        ++v46;
        v47 = __ROL4__(v47, 1);
      }
      while ( v46 < 0x20 );
      v42 = textures;
    }
    v42 = (GfxTexture *)((char *)v42 + 4);
    textures = v42;
  }
  R_UploadAndSetComputeConstants(statea, 2, dataa, 0x1000u, NULL);
  v49 = v43 + 1;
  if ( v43 )
    v49 = v43;
  R_Dispatch(statea, 16 * v49, 1u, 1u);
}

/*
==============
R_Sunshadow_DrawOverlay
==============
*/
void R_Sunshadow_DrawOverlay(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, int overlayType, const R_RT_Handle *shadowCascades, unsigned int cascadeCount, const R_RT_Handle *viewmodelShadowCascade, const R_RT_DepthHandle *sunshadowCacheRt, R_RT_Handle *compressedCascades, R_RT_BufferHandle *csmPrepass, const R_RT_Handle *sunshadowTranslucentMask)
{
  __int64 v11; 
  float value; 
  float v13; 
  float v14; 
  float v15; 
  __int64 v16; 
  float v17; 
  float v18; 
  bool v20; 
  float height; 
  float v22; 
  float integer; 
  const GfxWrappedRWBuffer *WrappedBuffer; 
  const GfxWrappedRWBuffer *v28; 
  unsigned int v29; 
  __int64 v31; 
  float v32; 
  float v33; 
  GfxCmdBufSourceState *v34; 
  R_RT_Handle *v35; 
  R_RT_Image *p_m_image; 
  GfxCmdBufContext v37; 
  GfxSunShadow *v38; 
  R_RT_Handle *v39; 
  float v40; 
  GfxCmdBufSourceState *v41; 
  GfxWrappedRWBuffer *p_compressedSunShadowBuffer; 
  GfxCmdBufInput *p_input; 
  GfxCmdBufInput *v44; 
  GfxWrappedRWBuffer *v45; 
  GfxCmdBufInput *v46; 
  GfxWrappedRWBuffer *v47; 
  float csmVOffset; 
  float csmUOffset; 
  float csmScale; 
  GfxCmdBufSourceState *v51; 
  R_RT_Image *v52; 
  float v53; 
  R_RT_Image *v54; 
  float v55; 
  unsigned int v56; 
  unsigned int v57; 
  const dvar_t *v58; 
  float *eyeOffset; 
  float *v60; 
  float v61; 
  __int64 v62; 
  float v63; 
  float v64; 
  float v65; 
  float v66; 
  float v67; 
  float v68; 
  float v69; 
  float v70; 
  float v71; 
  __int64 v72; 
  __int64 v73; 
  __int64 v74; 
  float v75; 
  float v76; 
  __int64 v77; 
  __int64 v78; 
  float v79; 
  float v80; 
  float v81; 
  float v82; 
  unsigned int v83; 
  float *v; 
  float v85; 
  float v86; 
  float v87; 
  unsigned int v88; 
  float v89; 
  float v90; 
  unsigned int v91; 
  __int64 v92; 
  __int64 v93; 
  float v94; 
  float v95; 
  __int64 v96; 
  __int64 v97; 
  float v98; 
  float v99; 
  float v100; 
  int v101; 
  float v102; 
  unsigned int v103; 
  unsigned int v104; 
  __int64 v105; 
  __int64 v106; 
  float v107; 
  float v108; 
  __int64 v109; 
  __int64 v110; 
  float v111; 
  float v112; 
  GfxCmdBufContext *v113; 
  float v114; 
  unsigned int v115; 
  GfxSunShadowOverlayLines *p_overlay; 
  unsigned __int64 v117; 
  float *v118; 
  GfxCmdBufSourceState *p_y; 
  unsigned int v120; 
  float v121; 
  float v122; 
  float v123; 
  unsigned int v124; 
  unsigned int v125; 
  unsigned int v126; 
  unsigned int v127; 
  unsigned int v128; 
  __int64 v129; 
  float *v130; 
  float v131; 
  __int64 v132; 
  __int64 v133; 
  unsigned __int64 v134; 
  float v135; 
  float v136; 
  float v137; 
  __int64 v138; 
  __int64 v139; 
  unsigned __int64 v140; 
  float v141; 
  float v142; 
  float v143; 
  __int64 v144; 
  float v145; 
  __int64 v146; 
  unsigned __int64 v147; 
  unsigned int v148; 
  float v149; 
  float v150; 
  __int64 v151; 
  float v152; 
  __int64 v153; 
  unsigned __int64 v154; 
  float v155; 
  vec2_t *v156; 
  float v157; 
  float v158; 
  __int64 v159; 
  __int64 v160; 
  unsigned __int64 v161; 
  float v162; 
  float v163; 
  float v164; 
  float v165; 
  float v166; 
  float v167; 
  float v168; 
  float v169; 
  float v170; 
  float v171; 
  float v172; 
  float v173; 
  float v174; 
  float v175; 
  float v176; 
  float v177; 
  GfxCmdBufContext v178; 
  signed int v179; 
  signed int v180; 
  float v181; 
  R_RT_Handle *v182; 
  unsigned int unsignedInt; 
  float MapSize; 
  const GfxWrappedRWBuffer *v188; 
  GfxCmdBufSourceState *v189; 
  const GfxWrappedRWBuffer *v190; 
  const GfxWrappedRWBuffer *v191; 
  __int64 v192; 
  unsigned int v196; 
  float v198; 
  float v199; 
  float v200; 
  float v201; 
  unsigned int v202; 
  unsigned int v203; 
  GfxCmdBufSourceState *p_row2; 
  float v205; 
  unsigned int v206; 
  GfxCmdBufSourceState *v207; 
  float v208; 
  float v209; 
  float v210; 
  const R_RT_Surface *Surface; 
  unsigned int v212; 
  unsigned int m_shadowMapResolution; 
  const GfxCompressedSunShadowSetup *Setup; 
  GfxFont *debugFont; 
  float v216; 
  float v217; 
  __int64 v218; 
  float v219; 
  const char *v220; 
  float v221; 
  const R_RT_Surface *v222; 
  __int64 v223; 
  __int64 v224; 
  float *p_inProcessing; 
  GfxCachedSunShadow *CachedSunShadowParititionHead; 
  unsigned int tileActiveCount; 
  int v228; 
  GfxCachedSunShadow *v229; 
  int v230; 
  GfxCachedSunShadow *v231; 
  unsigned __int8 v232; 
  signed int gridX; 
  int v234; 
  signed int gridY; 
  int v236; 
  int v237; 
  int v238; 
  int v239; 
  float v240; 
  float v241; 
  unsigned int v242; 
  float v243; 
  unsigned int v244; 
  GfxCachedSunShadow *v245; 
  unsigned int EntryDebugId; 
  __int64 v247; 
  bool bspOnly; 
  unsigned int v249; 
  char v250; 
  unsigned __int8 v251; 
  int v252; 
  __int64 v253; 
  unsigned __int8 v254; 
  unsigned __int8 v255; 
  vec4_t *v256; 
  vec4_t *v257; 
  int v260; 
  unsigned __int8 v261; 
  int v263; 
  unsigned __int8 v264; 
  int v266; 
  unsigned __int8 v267; 
  int v269; 
  unsigned __int8 v270; 
  int v272; 
  unsigned __int8 v273; 
  int v275; 
  unsigned __int8 v276; 
  int v278; 
  unsigned __int8 v279; 
  int v281; 
  unsigned __int8 v282; 
  vec4_t *v283; 
  __m128 v284; 
  int v286; 
  char v287; 
  int v289; 
  char v290; 
  int v292; 
  char v293; 
  int v295; 
  char v296; 
  float v297; 
  float x; 
  float v299; 
  float y; 
  float v301; 
  float v302; 
  float v303; 
  float v304; 
  bool v305; 
  float v306; 
  float v307; 
  float v308; 
  unsigned int cachedSunShadowIndex; 
  R_RT_Image *v310; 
  GfxCmdBufSourceState *v311; 
  char v312; 
  char v313; 
  GfxCmdBufState *state; 
  float v315; 
  GfxFont *v316; 
  const char *v317; 
  GfxFont *v318; 
  float v319; 
  const char *v320; 
  float v321; 
  float v322; 
  GfxFont *v323; 
  const char *v324; 
  __int64 genBSP; 
  __int64 genSmodel; 
  GfxFont *v327; 
  const char *v328; 
  __int128 *v329; 
  GfxFont *v330; 
  const char *v331; 
  GfxFont *v332; 
  const char *v333; 
  GfxFont *v334; 
  float v335; 
  const char *v336; 
  __int64 v337; 
  float v338; 
  float v339; 
  GfxFont *v340; 
  const char *v341; 
  __int64 v342; 
  GfxFont *v343; 
  const char *v344; 
  GfxFont *v345; 
  const char *v346; 
  char *fmt; 
  float fmta; 
  float w; 
  __int64 v350; 
  __int64 v351; 
  char v352; 
  float v353; 
  unsigned int v354; 
  int v355; 
  unsigned int v356; 
  float v357; 
  unsigned int v358; 
  int v359; 
  float v360; 
  float v361; 
  float v362; 
  int v363; 
  float v364; 
  unsigned int v365; 
  float v366; 
  unsigned int v367; 
  float v368; 
  GfxColor v369; 
  float v370; 
  GfxColor v371; 
  float v372; 
  int v373; 
  float v374; 
  float v375; 
  unsigned int v377; 
  unsigned int v378; 
  float v379; 
  unsigned int v380; 
  GfxCmdBufSourceState *source; 
  __int64 v383; 
  GfxSunShadow *p_sunShadow; 
  GfxCmdBufContext v385; 
  GfxCmdBufContext v386; 
  R_RT_Handle *v387; 
  const GfxViewInfo *v388; 
  R_RT_Handle *v389; 
  GfxCmdBufContext v390; 
  GfxCmdBufContext v391; 
  GfxCmdBufContext v392; 
  GfxCmdBufContext v393; 
  GfxCmdBufContext v394; 
  GfxCmdBufContext v395; 
  GfxCmdBufContext v396; 
  GfxCmdBufContext v397; 
  GfxCmdBufContext v398; 
  GfxCmdBufContext v399; 
  GfxCmdBufContext v400; 
  GfxCmdBufContext v401; 
  GfxCmdBufContext v402; 
  GfxCmdBufContext v403; 
  GfxCmdBufContext v404; 
  GfxCmdBufContext v405; 
  GfxCmdBufContext v406; 
  GfxCmdBufContext v407; 
  GfxCmdBufContext v408; 
  GfxCmdBufContext v409; 
  GfxCmdBufContext v410; 
  GfxCmdBufContext v411; 
  GfxCmdBufContext v412; 
  GfxCmdBufContext v413; 
  GfxCmdBufContext v414; 
  GfxCmdBufContext v415; 
  GfxCmdBufContext v416; 
  GfxCmdBufContext v417; 
  R_RT_Handle v418; 
  R_RT_Handle v419; 
  GfxViewport scissorViewport; 
  GfxSunShadowOverlayLines *v421; 
  vec4_t v422; 
  R_RT_Handle v423; 
  GfxSunShadowOverlayLines overlay; 
  float v425; 
  int v426[2]; 
  float v427; 
  float v428; 
  float v429; 
  float v430; 
  int v431; 
  float v432; 
  int v433[7]; 
  float v434; 
  int v435[2]; 
  float v436; 
  float v437; 
  float v438; 
  float v439; 
  float v440; 
  GfxPointVertex v441; 
  float v442; 
  float v443; 
  int v444; 
  int v445; 
  float v446; 
  float v447; 
  int v448; 
  int v449; 
  float v450; 
  float v451; 
  int v452; 
  int v453; 
  float v454; 
  float v455; 
  int v456; 
  int v457; 
  float v458; 
  float v459; 
  int v460; 
  int v461; 
  float v462; 
  float v463; 
  int v464; 
  int v465; 
  float v466; 
  float v467; 
  int v468; 
  int v469; 

  v389 = &sunshadowCacheRt->R_RT_Handle;
  *(_QWORD *)v422.v = gfxContext;
  v11 = (__int64)gfxContext->source;
  v387 = compressedCascades;
  v388 = viewInfo;
  v385.source = (GfxCmdBufSourceState *)sunshadowTranslucentMask;
  p_sunShadow = &backEndData->sunShadow;
  source = (GfxCmdBufSourceState *)v11;
  if ( cascadeCount )
  {
    value = sm_showOverlayDepthBounds->current.value;
    v13 = sm_showOverlayDepthBounds->current.vector.v[1];
    v14 = FLOAT_0_5;
    scissorViewport = (GfxViewport)*gfxContext;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v13 - value) & _xmm) < 0.000099999997 )
    {
      v15 = (float)((float)(value + v13) * 0.5) - 0.000049999999;
      if ( value >= v13 )
      {
        v13 = (float)((float)(value + v13) * 0.5) - 0.000049999999;
        value = v15 + 0.000099999997;
      }
      else
      {
        value = (float)((float)(value + v13) * 0.5) - 0.000049999999;
        v13 = v15 + 0.000099999997;
      }
    }
    v16 = *(_QWORD *)&scissorViewport.x;
    v17 = 1.0 / (float)(v13 - value);
    LODWORD(v18) = COERCE_UNSIGNED_INT(v17 * value) ^ _xmm;
    if ( v17 != *(float *)(*(_QWORD *)&scissorViewport.x + 2048i64) || v18 != *(float *)(*(_QWORD *)&scissorViewport.x + 2052i64) || 1.0 != *(float *)(*(_QWORD *)&scissorViewport.x + 2056i64) || 1.0 != *(float *)(*(_QWORD *)&scissorViewport.x + 2060i64) )
    {
      *(float *)(*(_QWORD *)&scissorViewport.x + 2048i64) = v17;
      *(float *)(v16 + 2052) = v18;
      *(_DWORD *)(v16 + 2056) = 1065353216;
      *(_DWORD *)(v16 + 2060) = 1065353216;
      ++*(_WORD *)(v16 + 10196);
    }
    _XMM15 = 0i64;
    v20 = *(float *)(v16 + 2064) == 0.0;
    *(float *)&scissorViewport.x = 0.0;
    if ( !v20 || *(float *)(v16 + 2068) != 0.0 || *(float *)(v16 + 2072) != 0.0 || *(float *)(v16 + 2076) != 0.0 )
    {
      *(_QWORD *)(v16 + 2064) = 0i64;
      *(_QWORD *)(v16 + 2072) = 0i64;
      ++*(_WORD *)(v16 + 10198);
    }
    height = (float)viewInfo->displayViewport.height;
    v22 = height * 0.25;
    v353 = height;
    integer = 0.0;
    _XMM0 = sm_showOverlay->current.unsignedInt;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm7, xmm15, xmm3, xmm2
    }
    *(float *)&v421 = *(float *)&_XMM7;
    if ( *(float *)&_XMM7 == 4.0 )
    {
      if ( R_RT_Handle::IsValid(csmPrepass) )
      {
        WrappedBuffer = R_RT_Handle::GetWrappedBuffer(csmPrepass);
        v11 = (__int64)source;
        v28 = WrappedBuffer;
        if ( source == (GfxCmdBufSourceState *)-1792i64 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1494, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
            __debugbreak();
          v11 = -1792i64;
        }
        source->input.codeBuffers[43] = v28;
        integer = (float)sm_showOverlayCsmPrepassDebug->current.integer;
      }
      else
      {
        v11 = (__int64)source;
      }
    }
    v29 = 0;
    _XMM13 = LODWORD(FLOAT_2_0);
    v31 = v11 + 1792;
    do
    {
      v33 = (float)v29;
      v34 = gfxContext->source;
      if ( *(float *)&_XMM7 != gfxContext->source->input.consts[17].v[0] || v33 != v34->input.consts[17].v[1] || integer != v34->input.consts[17].v[2] || v34->input.consts[17].v[3] != 0.0 )
      {
        v34->input.consts[17].v[0] = *(float *)&_XMM7;
        v34->input.consts[17].v[1] = v33;
        v34->input.consts[17].v[2] = integer;
        v34->input.consts[17].v[3] = 0.0;
        ++v34->constVersions[17];
      }
      if ( v29 || !sm_showOverlayViewmodel->current.enabled )
        v35 = (R_RT_Handle *)&shadowCascades[v29];
      else
        v35 = (R_RT_Handle *)viewmodelShadowCascade;
      v418 = *v35;
      p_m_image = &R_RT_Handle::GetSurface(&v418)->m_image;
      if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
        __debugbreak();
      if ( !v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
        __debugbreak();
      v37 = *gfxContext;
      *(_QWORD *)(v31 + 6176) = p_m_image;
      v386 = v37;
      v32 = (float)v29;
      RB_DrawStretchPic(&v386, rgp.shadowOverlayMaterial, (float)(v32 * (float)(v22 + 2.0)) + 32.0, 32.0, v22, v22, 0.0, 0.0, 1.0, 1.0, 0xFFFFFFFF, GFX_PRIM_STATS_HUD);
      v393 = *gfxContext;
      RB_EndTessSurfaceInternal(&v393, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sunshadow.cpp(972)");
      ++v29;
    }
    while ( v29 < cascadeCount );
    v38 = p_sunShadow;
    v39 = (R_RT_Handle *)v385.source;
    v40 = v22 + 2.0;
    if ( p_sunShadow->overlaySetup.csmScale == 0.0 )
    {
      v51 = source;
    }
    else
    {
      v41 = gfxContext->source;
      p_compressedSunShadowBuffer = &g_worldDraw->compressedSunShadowBuffer;
      p_input = &gfxContext->source->input;
      if ( gfxContext->source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1494, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
        __debugbreak();
      p_input->codeBuffers[40] = p_compressedSunShadowBuffer;
      v44 = &v41->input;
      v45 = &g_worldDraw->compressedSunShadowBuffer;
      if ( v41 == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1494, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      {
        __debugbreak();
        v41 = gfxContext->source;
      }
      v44->codeBuffers[41] = v45;
      v46 = &v41->input;
      v47 = &g_worldDraw->compressedSunShadowBuffer;
      if ( v41 == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1494, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      {
        __debugbreak();
        v41 = gfxContext->source;
      }
      v20 = 3.0 == v41->input.consts[17].v[0];
      v46->codeBuffers[42] = v47;
      csmVOffset = p_sunShadow->overlaySetup.csmVOffset;
      csmUOffset = p_sunShadow->overlaySetup.csmUOffset;
      csmScale = p_sunShadow->overlaySetup.csmScale;
      if ( !v20 || csmScale != v41->input.consts[17].v[1] || csmUOffset != v41->input.consts[17].v[2] || csmVOffset != v41->input.consts[17].v[3] )
      {
        v41->input.consts[17].v[1] = csmScale;
        v41->input.consts[17].v[2] = csmUOffset;
        v41->input.consts[17].v[3] = csmVOffset;
        v41->input.consts[17].v[0] = 3.0;
        ++v41->constVersions[17];
      }
      v51 = source;
      v52 = &R_RT_Handle::GetSurface((R_RT_Handle *)shadowCascades)->m_image;
      if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
        __debugbreak();
      if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
        __debugbreak();
      v53 = (float)v29;
      v385 = *gfxContext;
      source->input.codeImages[4] = &v52->m_base;
      RB_DrawStretchPic(&v385, rgp.shadowOverlayMaterial, (float)(v53 * v40) + 32.0, 32.0, v22, v22, 0.0, 0.0, 1.0, 1.0, 0xFFFFFFFF, GFX_PRIM_STATS_HUD);
      ++v29;
      v394 = *gfxContext;
      RB_EndTessSurfaceInternal(&v394, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sunshadow.cpp(986)");
    }
    if ( sm_showOverlayTransShadow->current.enabled )
    {
      v54 = &R_RT_Handle::GetSurface(v39)->m_image;
      if ( !v51 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
        __debugbreak();
      if ( v51 == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
        __debugbreak();
      v55 = (float)v29;
      v395 = *gfxContext;
      v51->input.codeImages[4] = &v54->m_base;
      RB_DrawStretchPic(&v395, rgp.shadowOverlayMaterial, (float)(v55 * v40) + 32.0, 32.0, v22, v22, 0.0, 0.0, 1.0, 1.0, 0xFFFFFFFF, GFX_PRIM_STATS_HUD);
    }
    v56 = 0;
    v57 = 0;
    v58 = r_sunShadowParams;
    eyeOffset = (float *)p_sunShadow->sunProj.eyeOffset;
    v60 = &p_sunShadow->sunProj.blendScale[0].v[2];
    while ( 1 )
    {
      v61 = *eyeOffset;
      *((float *)&v421 + 1) = *(v60 - 1);
      v62 = 0i64;
      v63 = (float)v57;
      v64 = v63 * v40;
      v65 = eyeOffset[1];
      v66 = v58->current.value - 1.0;
      v67 = v64 + 32.0;
      *(float *)&v421 = *(v60 - 2);
      v362 = v61 - (float)(v66 / *(float *)&v421);
      v68 = v65 - (float)(v66 / *((float *)&v421 + 1));
      v69 = (float)(v66 / v60[1]) + v65;
      v370 = v362;
      v70 = (float)(v66 / *v60) + v61;
      v71 = v362;
      v425 = (float)(v362 * 2.0) - 1.0;
      *(float *)&v426[1] = v425;
      v428 = (float)(v70 * 2.0) - 1.0;
      v430 = v428;
      v360 = v68;
      v357 = v69;
      *(float *)&v386.source = v70;
      v368 = v69;
      v366 = v70;
      v364 = v68;
      *(float *)v426 = 1.0 - (float)(v68 * 2.0);
      v427 = 1.0 - (float)(v69 * 2.0);
      v429 = v427;
      v431 = v426[0];
      v72 = 4i64;
      do
      {
        v73 = 2i64 * v56;
        v74 = v62 & 3;
        v75 = *(float *)&v426[2 * v74 - 1] + 1.0;
        *(_DWORD *)&v441.color[8 * v73 - 4] = 0;
        v76 = 0.5 * *(float *)&v426[2 * v74];
        v441.xyz.v[2 * v73] = (float)((float)(v75 * 0.5) * v22) + v67;
        *(float *)&v441.color[8 * v73 - 8] = (float)((float)(0.5 - v76) * v22) + 32.0;
        *(_DWORD *)&v441.color[8 * v73] = 805306623;
        v77 = 2i64 * (v56 + 1);
        v56 += 2;
        v78 = ++v62 & 3;
        v79 = 0.5 * *(float *)&v426[2 * v78];
        v441.xyz.v[2 * v77] = (float)((float)((float)(*(float *)&v426[2 * v78 - 1] + 1.0) * 0.5) * v22) + v67;
        *(float *)&v441.color[8 * v77 - 8] = (float)((float)(0.5 - v79) * v22) + 32.0;
        *(_DWORD *)&v441.color[8 * v77 - 4] = 0;
        *(_DWORD *)&v441.color[8 * v77] = 805306623;
        --v72;
      }
      while ( v72 );
      v374 = *(float *)&_XMM15;
      v372 = *(float *)&_XMM15;
      v379 = FLOAT_1_0;
      *(float *)&v385.source = FLOAT_1_0;
      *(float *)&v421 = *(float *)&_XMM15;
      if ( v57 )
      {
        v80 = 1.0 / *(v60 - 23);
        v81 = COERCE_FLOAT(LODWORD(v80) ^ _xmm) * *(v60 - 25);
        v82 = COERCE_FLOAT(LODWORD(v80) ^ _xmm) * *(v60 - 26);
        v379 = v80 + v81;
        *(float *)&v385.source = v80 + v82;
        v71 = (float)(v80 * v362) + v82;
        v370 = v71;
        v368 = (float)(v80 * v69) + v81;
        v366 = (float)(v80 * v70) + v82;
        v364 = (float)(v80 * v68) + v81;
        v372 = v82;
        v374 = v81;
        v362 = v71;
        v360 = v364;
        v357 = v368;
        *(float *)&v386.source = v366;
        *(float *)&v421 = v81;
      }
      v83 = ++v57;
      if ( v57 < 3 )
      {
        v = p_sunShadow->sunProj.switchPartition[v57].v;
        do
        {
          v85 = v[3];
          v86 = *v;
          v87 = v[1];
          v88 = v56 + 1;
          v89 = (float)v83;
          v90 = (float)(v89 * (float)(v22 + 2.0)) + 32.0;
          *(float *)v433 = 1.0 - (float)((float)((float)(v85 * v360) + v87) * 2.0);
          v432 = (float)((float)((float)(v85 * v71) + v86) * 2.0) - 1.0;
          *(float *)&v433[2] = 1.0 - (float)((float)((float)(v85 * v357) + v87) * 2.0);
          *(float *)&v433[1] = (float)((float)((float)(v85 * v370) + v86) * 2.0) - 1.0;
          *(float *)&v433[4] = 1.0 - (float)((float)((float)(v85 * v368) + v87) * 2.0);
          *(float *)&v433[3] = (float)((float)((float)(v85 * *(float *)&v386.source) + v86) * 2.0) - 1.0;
          *(float *)&v433[6] = 1.0 - (float)((float)((float)(v85 * v364) + v87) * 2.0);
          *(float *)&v433[5] = (float)((float)((float)(v85 * v366) + v86) * 2.0) - 1.0;
          v91 = 0;
          do
          {
            v92 = 2i64 * v56;
            v93 = v91 & 3;
            v56 += 2;
            v94 = *(float *)&v433[2 * v93 - 1] + 1.0;
            *(_DWORD *)&v441.color[8 * v92 - 4] = 0;
            v95 = 0.5 * *(float *)&v433[2 * v93];
            v441.xyz.v[2 * v92] = (float)((float)(v94 * 0.5) * v22) + v90;
            *(float *)&v441.color[8 * v92 - 8] = (float)((float)(0.5 - v95) * v22) + 32.0;
            *(_DWORD *)&v441.color[8 * v92] = 805306623;
            v96 = v88;
            v88 += 2;
            v96 *= 2i64;
            v97 = ++v91 & 3;
            v98 = 0.5 * *(float *)&v433[2 * v97];
            v441.xyz.v[2 * v96] = (float)((float)((float)(*(float *)&v433[2 * v97 - 1] + 1.0) * 0.5) * v22) + v90;
            *(float *)&v441.color[8 * v96 - 8] = (float)((float)(0.5 - v98) * v22) + 32.0;
            *(_DWORD *)&v441.color[8 * v96 - 4] = 0;
            *(_DWORD *)&v441.color[8 * v96] = 805306623;
          }
          while ( v91 < 4 );
          v99 = v[3];
          v100 = v[1];
          *(float *)&v101 = (float)((float)((float)(v99 * v372) + *v) * 2.0) - 1.0;
          *(float *)v435 = 1.0 - (float)((float)((float)(v99 * v374) + v100) * 2.0);
          v102 = (float)((float)(v99 * *(float *)&v385.source) + *v) * 2.0;
          v434 = *(float *)&v101;
          v435[1] = v101;
          v440 = 1.0 - (float)((float)((float)(v99 * *(float *)&v421) + v100) * 2.0);
          v436 = 1.0 - (float)((float)((float)(v99 * v379) + v100) * 2.0);
          v437 = v102 - 1.0;
          v438 = v436;
          v439 = v102 - 1.0;
          v103 = 0;
          v104 = v56 + 1;
          do
          {
            v105 = 2i64 * v56;
            v106 = v103 & 3;
            v56 += 2;
            v107 = *(float *)&v435[2 * v106 - 1] + 1.0;
            *(_DWORD *)&v441.color[8 * v105 - 4] = 0;
            v108 = 0.5 * *(float *)&v435[2 * v106];
            v441.xyz.v[2 * v105] = (float)((float)(v107 * 0.5) * v22) + v90;
            *(float *)&v441.color[8 * v105 - 8] = (float)((float)(0.5 - v108) * v22) + 32.0;
            *(_DWORD *)&v441.color[8 * v105] = 805306623;
            v109 = v104;
            v104 += 2;
            v109 *= 2i64;
            v110 = ++v103 & 3;
            v111 = 0.5 * *(float *)&v435[2 * v110];
            v441.xyz.v[2 * v109] = (float)((float)((float)(*(float *)&v435[2 * v110 - 1] + 1.0) * 0.5) * v22) + v90;
            *(float *)&v441.color[8 * v109 - 8] = (float)((float)(0.5 - v111) * v22) + 32.0;
            *(_DWORD *)&v441.color[8 * v109 - 4] = 0;
            *(_DWORD *)&v441.color[8 * v109] = 805306623;
          }
          while ( v103 < 4 );
          v71 = v362;
          ++v83;
          v += 4;
        }
        while ( v83 < 3 );
        LODWORD(_XMM15) = scissorViewport.x;
      }
      eyeOffset += 2;
      v60 += 4;
      if ( v57 >= cascadeCount )
        break;
      v40 = v22 + 2.0;
    }
    v112 = v353;
    v113 = *(GfxCmdBufContext **)v422.v;
    v396 = **(GfxCmdBufContext **)v422.v;
    RB_DrawLines2D(&v396, v56 >> 1, 1, &v441);
    v114 = FLOAT_0_125;
    if ( p_sunShadow->overlaySetup.clipPlaneCount[0] )
    {
      R_GetSunShadowMapOverlayLines(backEndData, p_sunShadow, &overlay);
      v354 = 0;
      v115 = 0;
      p_overlay = &overlay;
      v117 = 0i64;
      v118 = (float *)&overlay.borderPoints[0][1] + 1;
      v421 = &overlay;
      p_y = (GfxCmdBufSourceState *)&overlay.frustumLines[0][1][1].y;
      *(_QWORD *)&scissorViewport.x = &overlay.borderPoints[0][1].y;
      v385.source = (GfxCmdBufSourceState *)&overlay.frustumLines[0][1][1].y;
      do
      {
        v120 = p_overlay->borderPointCount[0];
        v121 = (float)v115;
        v123 = (float)(v121 * (float)(v22 + 2.0)) + 32.0;
        v122 = v123;
        if ( p_overlay->borderPointCount[0] )
        {
          if ( 2 * v120 > 0xAB )
          {
            LODWORD(v351) = 171;
            LODWORD(v350) = 2 * v120;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sunshadow.cpp", 1118, ASSERT_TYPE_ASSERT, "( 2 * pointCount ) <= ( ( sizeof( *array_counter( overlayPoints ) ) + 0 ) )", "%s <= %s\n\t%i, %i", "2 * pointCount", "ARRAY_COUNT( overlayPoints )", v350, v351) )
              __debugbreak();
            v118 = *(float **)&scissorViewport.x;
          }
          v124 = 0;
          v125 = 0;
          if ( v120 >= 4 )
          {
            v126 = 2;
            v127 = ((v120 - 4) >> 2) + 1;
            v125 = 0;
            v128 = 2;
            v129 = v127;
            v130 = v118;
            v124 = 4 * v127;
            do
            {
              v131 = 0.5 * *(v130 - 2);
              v132 = 2i64 * v125;
              v441.xyz.v[2 * v132] = (float)((float)((float)(*(v130 - 3) + 1.0) * 0.5) * v22) + v123;
              *(float *)&v441.color[8 * v132 - 8] = (float)((float)(0.5 - v131) * v22) + 32.0;
              *(_DWORD *)&v441.color[8 * v132 - 4] = 0;
              v133 = 2i64 * (v126 - 1);
              v134 = v117 + (v128 - 1) % v120;
              v135 = 0.5 * overlay.borderPoints[0][v134].v[1];
              v441.xyz.v[2 * v133] = (float)((float)((float)(overlay.borderPoints[0][v134].v[0] + 1.0) * 0.5) * v22) + v123;
              v136 = *(v130 - 1) + 1.0;
              *(float *)&v441.color[8 * v133 - 8] = (float)((float)(0.5 - v135) * v22) + 32.0;
              *(_DWORD *)&v441.color[8 * v133 - 4] = 0;
              *(_DWORD *)&v441.color[8 * v132] = -2147418368;
              *(_DWORD *)&v441.color[8 * v133] = -2147418368;
              v137 = 0.125 * *v130;
              v138 = 2i64 * (v126 + 1);
              v139 = 2i64 * v126;
              v140 = v117 + v128 % v120;
              v441.xyz.v[2 * v139] = (float)((float)(v136 * 0.125) * v112) + v123;
              v141 = overlay.borderPoints[0][v140].v[0] + 1.0;
              *(float *)&v441.color[8 * v139 - 8] = (float)((float)(0.125 - v137) * v112) + 32.0;
              *(_DWORD *)&v441.color[8 * v139 - 4] = 0;
              v142 = 0.125 * overlay.borderPoints[0][v140].v[1];
              v441.xyz.v[2 * v138] = (float)((float)(v141 * 0.125) * v112) + v123;
              v143 = v130[1] + 1.0;
              *(float *)&v441.color[8 * v138 - 8] = (float)((float)(0.125 - v142) * v112) + 32.0;
              *(_DWORD *)&v441.color[8 * v138 - 4] = 0;
              *(_DWORD *)&v441.color[8 * v139] = -2147418368;
              *(_DWORD *)&v441.color[8 * v138] = -2147418368;
              v144 = 2i64 * (v126 + 2);
              v145 = 0.125 * v130[2];
              v441.xyz.v[2 * v144] = (float)((float)(v143 * 0.125) * v112) + v123;
              *(float *)&v441.color[8 * v144 - 8] = (float)((float)(0.125 - v145) * v112) + 32.0;
              *(_DWORD *)&v441.color[8 * v144 - 4] = 0;
              v146 = 2i64 * (v126 + 3);
              v125 += 8;
              v130 += 8;
              v147 = v117 + (v128 + 1) % v120;
              v148 = (v128 + 2) % v120;
              v149 = 0.125 * overlay.borderPoints[0][v147].v[1];
              v441.xyz.v[2 * v146] = (float)((float)((float)(overlay.borderPoints[0][v147].v[0] + 1.0) * 0.125) * v112) + v123;
              v150 = *(v130 - 5) + 1.0;
              *(float *)&v441.color[8 * v146 - 8] = (float)((float)(0.125 - v149) * v112) + 32.0;
              *(_DWORD *)&v441.color[8 * v146 - 4] = 0;
              v128 += 4;
              *(_DWORD *)&v441.color[8 * v144] = -2147418368;
              *(_DWORD *)&v441.color[8 * v146] = -2147418368;
              v151 = 2i64 * (v126 + 4);
              v152 = 0.125 * *(v130 - 4);
              v441.xyz.v[2 * v151] = (float)((float)(v150 * 0.125) * v112) + v123;
              *(float *)&v441.color[8 * v151 - 8] = (float)((float)(0.125 - v152) * v112) + 32.0;
              *(_DWORD *)&v441.color[8 * v151 - 4] = 0;
              v153 = 2i64 * (v126 + 5);
              v154 = v117 + v148;
              v126 += 8;
              v155 = 0.125 * overlay.borderPoints[0][v154].v[1];
              v441.xyz.v[2 * v153] = (float)((float)((float)(overlay.borderPoints[0][v154].v[0] + 1.0) * 0.125) * v112) + v123;
              *(float *)&v441.color[8 * v153 - 8] = (float)((float)(0.125 - v155) * v112) + 32.0;
              *(_DWORD *)&v441.color[8 * v153 - 4] = 0;
              *(_DWORD *)&v441.color[8 * v151] = -2147418368;
              *(_DWORD *)&v441.color[8 * v153] = -2147418368;
              --v129;
            }
            while ( v129 );
            v113 = *(GfxCmdBufContext **)v422.v;
            p_y = v385.source;
            v115 = v354;
            p_overlay = v421;
          }
          if ( v124 < v120 )
          {
            v156 = &overlay.borderPoints[v117 / 9][v124];
            do
            {
              v157 = (float)((float)(v156->v[0] + 1.0) * 0.5) * v22;
              v158 = 0.5 * v156->v[1];
              v159 = 2i64 * v125;
              ++v156;
              v160 = 2i64 * (v125 + 1);
              ++v124;
              v125 += 2;
              v441.xyz.v[2 * v159] = v157 + v123;
              *(_DWORD *)&v441.color[8 * v159 - 4] = 0;
              *(float *)&v441.color[8 * v159 - 8] = (float)((float)(0.5 - v158) * v22) + 32.0;
              *(_DWORD *)&v441.color[8 * v160 - 4] = 0;
              v161 = v117 + v124 % v120;
              v162 = 0.5 * overlay.borderPoints[0][v161].v[1];
              v441.xyz.v[2 * v160] = (float)((float)((float)(overlay.borderPoints[0][v161].v[0] + 1.0) * 0.5) * v22) + v123;
              *(float *)&v441.color[8 * v160 - 8] = (float)((float)(0.5 - v162) * v22) + 32.0;
              *(_DWORD *)&v441.color[8 * v159] = -2147418368;
              *(_DWORD *)&v441.color[8 * v160] = -2147418368;
            }
            while ( v124 < v120 );
            p_overlay = v421;
          }
          v397 = *v113;
          RB_DrawLines2D(&v397, v125 >> 1, 1, &v441);
        }
        v163 = 0.5 * p_y[-1].eyePupilSize;
        v441.xyz.v[0] = (float)((float)((float)(*((float *)&p_y[-1] + 2917) + 1.0) * 0.5) * v22) + v123;
        v164 = p_y[-1].pixelAspect + 1.0;
        v441.xyz.v[1] = (float)((float)(0.5 - v163) * v22) + 32.0;
        v165 = 0.5 * *(float *)&p_y[-1].passIndex;
        v442 = (float)((float)(v164 * 0.5) * v22) + v123;
        v166 = *(float *)&p_y[-1].decalVolumeSurfType + 1.0;
        v443 = (float)((float)(0.5 - v165) * v22) + 32.0;
        v167 = 0.125 * *(float *)&p_y[-1].viewStatsTarget;
        v446 = (float)((float)(v166 * 0.125) * v112) + v123;
        v168 = *((float *)&p_y[-1].viewStatsTarget + 1) + 1.0;
        v447 = (float)((float)(0.125 - v167) * v112) + 32.0;
        v169 = 0.125 * p_y->matrices.matrix[0].m.m[0].v[0];
        v450 = (float)((float)(v168 * 0.125) * v112) + v123;
        v170 = p_y->matrices.matrix[0].m.m[0].v[1] + 1.0;
        v451 = (float)((float)(0.125 - v169) * v112) + 32.0;
        v171 = 0.125 * p_y->matrices.matrix[0].m.m[0].v[2];
        v454 = (float)((float)(v170 * 0.125) * v112) + v123;
        v172 = p_y->matrices.matrix[0].m.m[0].v[3] + 1.0;
        v455 = (float)((float)(0.125 - v171) * v112) + 32.0;
        v173 = 0.125 * p_y->matrices.matrix[0].m.m[1].v[0];
        v458 = (float)((float)(v172 * 0.125) * v112) + v123;
        v174 = p_y->matrices.matrix[0].m.m[1].v[1] + 1.0;
        v459 = (float)((float)(0.125 - v173) * v112) + 32.0;
        v175 = 0.125 * p_y->matrices.matrix[0].m.m[1].v[2];
        v462 = (float)((float)(v174 * 0.125) * v112) + v123;
        v441.xyz.v[2] = *(float *)&_XMM15;
        v444 = _XMM15;
        v448 = _XMM15;
        v452 = _XMM15;
        v456 = _XMM15;
        v460 = _XMM15;
        *(_DWORD *)v441.color = -2147418113;
        v445 = -2147418113;
        v449 = -2147418113;
        v453 = -2147418113;
        v457 = -2147418113;
        v461 = -2147418113;
        v176 = p_y->matrices.matrix[0].m.m[1].v[3] + 1.0;
        v463 = (float)((float)(0.125 - v175) * v112) + 32.0;
        v177 = 0.125 * p_y->matrices.matrix[0].m.m[2].v[0];
        v466 = (float)((float)(v176 * 0.125) * v112) + v122;
        v178 = *v113;
        v465 = -2147418113;
        v469 = -2147418113;
        v467 = (float)((float)(0.125 - v177) * v112) + 32.0;
        v464 = _XMM15;
        v468 = _XMM15;
        v398 = v178;
        RB_DrawLines2D(&v398, 4, 1, &v441);
        v118 = (float *)(*(_QWORD *)&scissorViewport.x + 72i64);
        ++v115;
        *(_QWORD *)&scissorViewport.x += 72i64;
        p_overlay = (GfxSunShadowOverlayLines *)((char *)p_overlay + 4);
        v354 = v115;
        p_y = (GfxCmdBufSourceState *)((char *)p_y + 64);
        v421 = p_overlay;
        v117 += 9i64;
        v385.source = p_y;
      }
      while ( v115 < cascadeCount );
      _XMM13 = LODWORD(FLOAT_2_0);
      v38 = p_sunShadow;
    }
    v399 = *v113;
    RB_EndTessSurfaceInternal(&v399, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sunshadow.cpp(1149)");
    if ( !s_sunShadowCacheDebuggerInitialized )
    {
      s_sunShadowCacheDebuggerInitialized = 1;
      memset_0(&s_sunShadowCacheDebugger.tileActiveCount + 1, 0, 0x2CCui64);
    }
    v179 = 0x80000000;
    v180 = 0x80000000;
    s_sunShadowCacheDebugger.tileActiveCount = 0;
    v181 = v22 + 32.0;
    v373 = 0x7FFFFFFF;
    v363 = 0x7FFFFFFF;
    v361 = v22 + 32.0;
    v358 = 0x80000000;
    if ( overlayType == 2 )
    {
      v182 = v387;
      if ( v387 )
      {
        if ( R_RT_Handle::IsValid(v387) )
        {
          unsignedInt = sm_showOverlayFocus->current.unsignedInt;
          v380 = unsignedInt;
          _XMM0 = sm_showOverlayCompressionDebug->current.unsignedInt;
          __asm
          {
            vpcmpeqd xmm1, xmm0, xmm1
            vblendvps xmm0, xmm13, xmm10, xmm1
          }
          *(float *)&v421 = *(float *)&_XMM0;
          MapSize = (float)R_SunShadow_GetMapSize();
          *(float *)&v385.source = MapSize;
          v188 = R_RT_Handle::GetWrappedBuffer(v182);
          v189 = v113->source;
          R_SetCodeBuffer(v113->source, 0x28u, v188);
          v190 = R_RT_Handle::GetWrappedBuffer(v182 + 1);
          R_SetCodeBuffer(v189, 0x29u, v190);
          v191 = R_RT_Handle::GetWrappedBuffer(v182 + 2);
          R_SetCodeBuffer(v189, 0x2Au, v191);
          v192 = unsignedInt - 1;
          _XMM0 = unsignedInt;
          __asm { vpcmpgtq xmm2, xmm0, xmm1 }
          _XMM0 = LODWORD(FLOAT_0_25);
          if ( !unsignedInt )
            v192 = 0i64;
          v196 = 3;
          __asm { vblendvps xmm0, xmm0, xmm1, xmm2 }
          if ( unsignedInt )
            v196 = unsignedInt;
          scissorViewport.x = v192;
          v198 = *(float *)&_XMM0 * v112;
          v199 = (float)(*(float *)&_XMM0 * v112) + *(float *)&_XMM13;
          if ( (unsigned int)v192 >= v196 )
          {
            v202 = v192;
          }
          else
          {
            v200 = *(float *)&v421;
            v201 = *(float *)&v385.source;
            v202 = v192;
            v203 = 0;
            p_row2 = (GfxCmdBufSourceState *)&v182[v192];
            v355 = 0;
            v205 = v22 + 32.0;
            v386.source = p_row2;
            v206 = v196;
            do
            {
              v207 = v113->source;
              v208 = (float)v202;
              if ( v200 != v113->source->input.consts[17].v[0] || v208 != v207->input.consts[17].v[1] || v201 != v207->input.consts[17].v[2] || *(float *)&_XMM15 != v207->input.consts[17].v[3] )
              {
                v207->input.consts[17].v[3] = 0.0;
                v207->input.consts[17].v[0] = v200;
                v207->input.consts[17].v[1] = v208;
                v207->input.consts[17].v[2] = v201;
                R_DirtyCodeConstant(v207, 0x11u);
              }
              v209 = (float)v203;
              v400 = *v113;
              v210 = (float)(v209 * v199) + 32.0;
              RB_DrawStretchPic(&v400, rgp.shadowOverlayMaterial, v210, v205, v198, v198, *(float *)&_XMM15, *(float *)&_XMM15, 1.0, 1.0, 0xFFFFFFFF, GFX_PRIM_STATS_HUD);
              Surface = R_RT_Handle::GetSurface((R_RT_Handle *)p_row2);
              if ( (Surface->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
                __debugbreak();
              v212 = 0;
              if ( *(int *)Surface->m_buffer.m_wrappedBuffer.data > 0 )
                v212 = *(_DWORD *)Surface->m_buffer.m_wrappedBuffer.data;
              m_shadowMapResolution = R_CompressedSunShadow_GetSetup()->m_shadowMapResolution;
              Setup = R_CompressedSunShadow_GetSetup();
              debugFont = backEnd.debugFont;
              v216 = (float)backEnd.debugFont->pixelHeight + (float)(v198 + (float)(v22 + 32.0));
              v217 = (float)v212;
              v218 = 2 * Setup->m_shadowMapResolution * m_shadowMapResolution;
              v219 = (float)v218;
              v220 = j_va("Comp: %i / %i b : %0.3f", v212, v218, (float)(v217 / v219));
              v401 = *v113;
              RB_DrawText(&v401, v220, debugFont, v210, v216, (const GfxColor)-1);
              v402 = *v113;
              RB_EndTessSurfaceInternal(&v402, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sunshadow.cpp(1214)");
              v203 = v355 + 1;
              v205 = v22 + 32.0;
              p_row2 = (GfxCmdBufSourceState *)&v386.source->matrices.matrix[0].m.row2;
              ++v355;
              ++v202;
              v386.source = (GfxCmdBufSourceState *)((char *)v386.source + 32);
            }
            while ( v202 < v206 );
            v14 = FLOAT_0_5;
            v114 = FLOAT_0_125;
            MapSize = *(float *)&v385.source;
            v38 = p_sunShadow;
            v179 = 0x80000000;
            LODWORD(v192) = scissorViewport.x;
            unsignedInt = v380;
          }
          if ( unsignedInt )
          {
            v221 = (float)v202;
            R_UpdateCodeConstant(v113->source, 0x11u, *(float *)&_XMM15, v221, MapSize, *(float *)&_XMM15);
            v222 = R_RT_Handle::GetSurface((R_RT_Handle *)&shadowCascades[(unsigned int)v192]);
            R_SetCodeImageTextureInternal(source, 4u, &v222->m_image.m_base, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sunshadow.cpp(1221)");
            w = v198;
            fmta = v198;
            v181 = v22 + 32.0;
            v403 = *v113;
            RB_DrawStretchPic(&v403, rgp.shadowOverlayMaterial, v199 + 32.0, v361, fmta, w, *(float *)&_XMM15, *(float *)&_XMM15, 1.0, 1.0, 0xFFFFFFFF, GFX_PRIM_STATS_HUD);
            v404 = *v113;
            RB_EndTessSurfaceInternal(&v404, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sunshadow.cpp(1223)");
          }
          else
          {
            v181 = v22 + 32.0;
          }
          v180 = 0x80000000;
        }
      }
    }
    v223 = sm_cachedSunShadowDebugShowCachePartition->current.unsignedInt;
    if ( overlayType == 3 && R_RT_Handle::IsValid(v389) )
    {
      v224 = 8656 * v223;
      v383 = 8656 * v223;
      p_inProcessing = (float *)&v38->partitionCache[v223].gfxCachedSunShadowOverlap[0].staticEntry->inProcessing;
      if ( p_inProcessing )
      {
        CachedSunShadowParititionHead = R_GetCachedSunShadowParititionHead();
        tileActiveCount = s_sunShadowCacheDebugger.tileActiveCount;
        v228 = 0x7FFFFFFF;
        v229 = CachedSunShadowParititionHead;
        v230 = 0x7FFFFFFF;
        v231 = CachedSunShadowParititionHead;
        v232 = 0;
        do
        {
          if ( v231->partitionIndex == (_DWORD)v223 && p_inProcessing[9] == v231->gridSize && p_inProcessing[2] == v231->sunShadowLightDir.v[0] && p_inProcessing[3] == v231->sunShadowLightDir.v[1] && p_inProcessing[4] == v231->sunShadowLightDir.v[2] )
          {
            gridX = v231->gridX;
            v234 = gridX;
            gridY = v231->gridY;
            if ( v228 < gridX )
              v234 = v228;
            v228 = v234;
            v236 = v231->gridY;
            if ( v230 < gridY )
              v236 = v230;
            v230 = v236;
            if ( v179 > gridX )
              gridX = v179;
            v179 = gridX;
            if ( v180 > gridY )
              gridY = v180;
            s_sunShadowCacheDebugger.tileQueue[tileActiveCount] = v231;
            v180 = gridY;
            s_sunShadowCacheDebugger.tilePriority[s_sunShadowCacheDebugger.tileActiveCount] = v232;
            tileActiveCount = ++s_sunShadowCacheDebugger.tileActiveCount;
          }
          v231 = v231->next;
          ++v232;
        }
        while ( v231 != v229 );
        v224 = 8656 * v223;
        v363 = v230;
        v38 = p_sunShadow;
        v373 = v228;
        v113 = *(GfxCmdBufContext **)v422.v;
        v358 = v180;
      }
      else
      {
        tileActiveCount = s_sunShadowCacheDebugger.tileActiveCount;
      }
      v237 = v179 - v373;
      v359 = v358 - v363;
      v238 = v359;
      v239 = v359;
      if ( v237 > v359 )
        v239 = v237;
      v240 = v14 / (float)v239;
      v241 = (float)v388->displayViewport.height;
      v242 = 0;
      v243 = v240 * v241;
      v375 = v240 * v241;
      v244 = 0;
      v356 = 0;
      while ( 1 )
      {
        v377 = 0;
        if ( tileActiveCount )
          break;
LABEL_273:
        v181 = v361;
        ++v244;
        v242 = 0;
        v356 = v244;
        if ( v244 >= 3 )
          return;
      }
      while ( 1 )
      {
        v387 = (R_RT_Handle *)v242;
        v245 = s_sunShadowCacheDebugger.tileQueue[v242];
        EntryDebugId = R_SunShadowCache_GetEntryDebugId(v245);
        v247 = EntryDebugId;
        v378 = EntryDebugId;
        if ( EntryDebugId < 0x40 )
        {
          bspOnly = v245->bspOnly;
          if ( v244 == 1 )
          {
            if ( bspOnly )
              goto LABEL_164;
          }
          else if ( !bspOnly )
          {
LABEL_164:
            v249 = *(unsigned int *)((char *)&v38->partitionCache[0].gfxCachedSunShadowOverlapCount + v224);
            v250 = 0;
            v352 = 0;
            v251 = 0;
            v252 = 0;
            if ( v249 )
            {
              while ( 1 )
              {
                v253 = *(__int64 *)((char *)&v38->partitionCache[0].gfxCachedSunShadowOverlap[v252].staticEntry + v224);
                if ( v245->gridX == *(_DWORD *)(v253 + 28) && v245->gridY == *(_DWORD *)(v253 + 32) )
                  break;
                if ( ++v252 >= v249 )
                {
                  v250 = 0;
                  goto LABEL_169;
                }
              }
              v250 = 1;
              v352 = 1;
              v251 = __popcnt(*(unsigned __int64 *)((char *)&v38->partitionCache[0].gfxCachedSunShadowOverlap[v252].updateExtentsMask + v224));
            }
LABEL_169:
            if ( v251 < s_sunShadowCacheDebugger.extentMaskBitsCount[v247] && (v254 = s_sunShadowCacheDebugger.extentMaskBitsTimer[v247]) != 0 )
            {
              v251 = s_sunShadowCacheDebugger.extentMaskBitsCount[v247];
              v255 = v254 - 1;
            }
            else
            {
              s_sunShadowCacheDebugger.extentMaskBitsCount[v247] = v251;
              v255 = -1;
            }
            s_sunShadowCacheDebugger.extentMaskBitsTimer[v247] = v255;
            if ( v250 )
            {
              v256 = &colorMdYellow;
              v257 = &colorYellow;
            }
            else
            {
              v256 = &colorMdGreen;
              v257 = &colorGreen;
            }
            if ( v245->finalized )
              v256 = v257;
            _XMM4 = 0i64;
            v422 = *v256;
            __asm { vroundss xmm1, xmm4, xmm3, 1 }
            v260 = (int)*(float *)&_XMM1;
            if ( (int)*(float *)&_XMM1 > 255 )
              v260 = 255;
            v261 = v260;
            __asm { vroundss xmm1, xmm4, xmm3, 1 }
            if ( v260 < 0 )
              v261 = 0;
            v263 = (int)*(float *)&_XMM1;
            LOBYTE(v365) = v261;
            if ( (int)*(float *)&_XMM1 > 255 )
              v263 = 255;
            v371.array[0] = v261;
            v264 = v263;
            __asm { vroundss xmm1, xmm4, xmm3, 1 }
            if ( v263 < 0 )
              v264 = 0;
            v266 = (int)*(float *)&_XMM1;
            BYTE1(v365) = v264;
            if ( (int)*(float *)&_XMM1 > 255 )
              v266 = 255;
            v371.array[1] = v264;
            v267 = v266;
            __asm { vroundss xmm1, xmm4, xmm3, 1 }
            if ( v266 < 0 )
              v267 = 0;
            v269 = (int)*(float *)&_XMM1;
            BYTE2(v365) = v267;
            if ( (int)*(float *)&_XMM1 > 255 )
              v269 = 255;
            v371.array[2] = v267;
            v270 = v269;
            __asm { vroundss xmm1, xmm4, xmm3, 1 }
            if ( v269 < 0 )
              v270 = 0;
            HIBYTE(v365) = v270;
            v371.array[3] = v270;
            v272 = (int)*(float *)&_XMM1;
            if ( (int)*(float *)&_XMM1 > 255 )
              v272 = 255;
            v273 = v272;
            __asm { vroundss xmm1, xmm4, xmm3, 1 }
            if ( v272 < 0 )
              v273 = 0;
            v275 = (int)*(float *)&_XMM1;
            v369.array[0] = v273;
            if ( (int)*(float *)&_XMM1 > 255 )
              v275 = 255;
            v276 = v275;
            __asm { vroundss xmm1, xmm4, xmm3, 1 }
            if ( v275 < 0 )
              v276 = 0;
            v278 = (int)*(float *)&_XMM1;
            v369.array[1] = v276;
            if ( (int)*(float *)&_XMM1 > 255 )
              v278 = 255;
            v279 = v278;
            if ( v278 < 0 )
              v279 = 0;
            v369.array[2] = v279;
            __asm { vroundss xmm1, xmm4, xmm3, 1 }
            v281 = (int)*(float *)&_XMM1;
            if ( (int)*(float *)&_XMM1 > 255 )
              v281 = 255;
            v282 = v281;
            if ( v281 < 0 )
              v282 = 0;
            v369.array[3] = v282;
            v283 = &colorWhite;
            if ( v245->bspOnly )
              v283 = &colorLtBlue;
            v284 = *(__m128 *)v283;
            __asm { vroundss xmm0, xmm4, xmm2, 1 }
            v286 = (int)*(float *)&_XMM0;
            _mm_shuffle_ps(v284, v284, 85);
            if ( (int)*(float *)&_XMM0 > 255 )
              v286 = 255;
            v287 = v286;
            if ( v286 < 0 )
              v287 = 0;
            LOBYTE(v367) = v287;
            __asm { vroundss xmm0, xmm4, xmm2, 1 }
            v289 = (int)*(float *)&_XMM0;
            _mm_shuffle_ps(v284, v284, 170);
            if ( (int)*(float *)&_XMM0 > 255 )
              v289 = 255;
            v290 = v289;
            if ( v289 < 0 )
              v290 = 0;
            BYTE1(v367) = v290;
            __asm { vroundss xmm0, xmm4, xmm2, 1 }
            v292 = (int)*(float *)&_XMM0;
            _mm_shuffle_ps(v284, v284, 255);
            if ( (int)*(float *)&_XMM0 > 255 )
              v292 = 255;
            v293 = v292;
            if ( v292 < 0 )
              v293 = 0;
            BYTE2(v367) = v293;
            __asm { vroundss xmm0, xmm4, xmm2, 1 }
            v295 = (int)*(float *)&_XMM0;
            if ( (int)*(float *)&_XMM0 > 255 )
              v295 = 255;
            v296 = v295;
            if ( v295 < 0 )
              v296 = 0;
            HIBYTE(v367) = v296;
            v297 = (float)((float)(v245->gridX - v373) * v243) + 32.0;
            x = (float)v388->displayViewport.x;
            v299 = (float)((float)(v238 + v363 - v245->gridY) * v243) + v181;
            if ( v297 < x )
              goto LABEL_272;
            y = (float)v388->displayViewport.y;
            if ( v299 < y )
              goto LABEL_272;
            v301 = (float)(8 * (R_SunShadow_GetMapSize() >> 1));
            v302 = (float)(8 * (R_SunShadow_GetMapSize() >> 1));
            v303 = (float)v245->viewport.x;
            v304 = (float)v245->viewport.y;
            v305 = v245->bspOnly;
            v306 = v304 / v302;
            v307 = v303 / v301;
            v308 = (float)(v304 / v302) + v114;
            if ( v305 )
            {
              v243 = v375 * v14;
              v299 = v299 + (float)(v375 * v14);
              v297 = v297 + (float)(v375 * v14);
            }
            if ( v244 != 2 )
            {
              if ( !v305 )
              {
                v405 = *v113;
                RB_DrawStretchPic(&v405, rgp.whiteMaterial, v297, v299, v243, v243, v307, v306, v307 + v114, v308, v365, GFX_PRIM_STATS_HUD);
                v406 = *v113;
                RB_EndTessSurfaceInternal(&v406, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sunshadow.cpp(1396)");
              }
              cachedSunShadowIndex = v245->cachedSunShadowIndex;
              v419 = *v389;
              R_SunShadowCache_GetDepthRt((R_RT_DepthHandle *)&v423, cachedSunShadowIndex, (R_RT_DepthHandle *)&v419);
              v310 = &R_RT_Handle::GetSurface(&v423)->m_image;
              if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
                __debugbreak();
              if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
                __debugbreak();
              v311 = v113->source;
              source->input.codeImages[4] = &v310->m_base;
              if ( *(float *)&_XMM15 != v311->input.consts[17].v[0] || *(float *)&_XMM15 != v311->input.consts[17].v[1] || *(float *)&_XMM15 != v311->input.consts[17].v[2] || *(float *)&_XMM15 != v311->input.consts[17].v[3] )
              {
                *(_QWORD *)v311->input.consts[17].v = 0i64;
                *(_QWORD *)&v311->input.consts[17].xyz.z = 0i64;
                R_DirtyCodeConstant(v311, 0x11u);
              }
              v407 = *v113;
              RB_DrawStretchPic(&v407, rgp.shadowOverlayMaterial, v297 + 3.0, v299 + 3.0, v243 - 6.0, v243 - 6.0, v307, v306, v307 + v114, v306 + v114, v367, GFX_PRIM_STATS_HUD);
              v408 = *v113;
              RB_EndTessSurfaceInternal(&v408, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sunshadow.cpp(1406)");
LABEL_248:
              v312 = 0;
              if ( v244 == 2 )
                goto LABEL_249;
              goto LABEL_253;
            }
            if ( v243 < 64.0 )
              goto LABEL_248;
            v312 = 1;
LABEL_249:
            if ( v243 < 128.0 )
LABEL_253:
              v313 = 0;
            else
              v313 = 1;
            if ( v312 )
            {
              state = v113->state;
              v315 = v297 + 6.0;
              scissorViewport.x = (int)v297;
              scissorViewport.y = (int)v299;
              scissorViewport.width = (int)v243;
              scissorViewport.height = (int)v243;
              R_HW_EnableScissor2D(state, &scissorViewport);
              v316 = backEnd.debugFont;
              v317 = j_va("Grid:%d,%d", (unsigned int)v245->gridX, (unsigned int)v245->gridY);
              v409 = *v113;
              RB_DrawTextWithShadow(&v409, v317, v316, v297 + 6.0, v299 + 16.0, v371, v369);
              v318 = backEnd.debugFont;
              v319 = (float)(v299 + 16.0) + 16.0;
              v320 = j_va("Pri:%02d ID:%d", s_sunShadowCacheDebugger.tilePriority[(_QWORD)v387], v378);
              v410 = *v113;
              RB_DrawTextWithShadow(&v410, v320, v318, v297 + 6.0, v319, v371, v369);
              v322 = v319 + 16.0;
              v321 = v322;
              if ( v313 )
              {
                if ( v352 && v251 )
                {
                  v323 = backEnd.debugFont;
                  v324 = j_va("ExtentsMask:%i/64", v251);
                  v411 = *v113;
                  RB_DrawTextWithShadow(&v411, v324, v323, v315, v322, v371, v369);
                  v321 = v322 + 16.0;
                }
                genBSP = v245->genBSP;
                if ( (_DWORD)genBSP != v245->updateFrameIndex )
                {
                  genSmodel = v245->genSmodel;
                  v327 = backEnd.debugFont;
                  if ( (_DWORD)genBSP == (_DWORD)genSmodel )
                  {
                    v328 = j_va("DrawListF:%d", genBSP);
                    v413 = *v113;
                    v329 = (__int128 *)&v413;
                  }
                  else
                  {
                    v328 = j_va("DrawlistF:%d,%d", genBSP, genSmodel);
                    v412 = *v113;
                    v329 = (__int128 *)&v412;
                  }
                  RB_DrawTextWithShadow((GfxCmdBufContext *)v329, v328, v327, v315, v321, v371, v369);
                  v321 = v321 + 16.0;
                }
                v330 = backEnd.debugFont;
                v331 = j_va("UpdateF:%d,%d,%d", v245->updateFrameIndex, v245->smodelUpdateFrameIndex, v245->terrainUpdateFrameIndex);
                v414 = *v113;
                RB_DrawTextWithShadow(&v414, v331, v330, v315, v321, v371, v369);
                v332 = backEnd.debugFont;
                v333 = j_va("UpdateC:%d,%d,%d", v245->updateFrameCount, v245->smodelUpdateCount, v245->terrainUpdateCount);
                v415 = *v113;
                RB_DrawTextWithShadow(&v415, v333, v332, v315, v321 + 16.0, v371, v369);
                v334 = backEnd.debugFont;
                v335 = (float)(v321 + 16.0) + 16.0;
                v336 = j_va("ObjSize:%d,%d", v245->bspCount, v245->smodelCount);
                v416 = *v113;
                RB_DrawTextWithShadow(&v416, v336, v334, v315, v335, v371, v369);
                v337 = v245->missingTransient[0];
                v339 = v335 + 16.0;
                v338 = v339;
                if ( (_DWORD)v337 )
                {
                  v340 = backEnd.debugFont;
                  v341 = j_va("MissingBSP:%d", v337);
                  v417 = *v113;
                  RB_DrawTextWithShadow(&v417, v341, v340, v315, v339, v371, v369);
                  v338 = v339 + 16.0;
                }
                v342 = v245->missingTransient[1];
                if ( (_DWORD)v342 )
                {
                  v343 = backEnd.debugFont;
                  v344 = j_va("MissingSmodel:%d", v342);
                  v390 = *v113;
                  RB_DrawTextWithShadow(&v390, v344, v343, v315, v338, v371, v369);
                  v338 = v338 + 16.0;
                }
                if ( !v245->finalized )
                {
                  v345 = backEnd.debugFont;
                  v346 = j_va("Finalized:%d,%d", v245->modelsFinalized, v245->terrainFinalized);
                  v391 = *v113;
                  RB_DrawTextWithShadow(&v391, v346, v345, v315, v338, v371, v369);
                }
              }
              v392 = *v113;
              RB_EndTessSurfaceInternal(&v392, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sunshadow.cpp(1498)");
              R_HW_DisableScissor2D(v113->state);
              v244 = v356;
            }
            v38 = p_sunShadow;
            v243 = v375;
          }
        }
        else
        {
          LODWORD(fmt) = v245->gridY;
          Com_Printf(8, "Found invalid static sun shadow entry ID:%d, grid:%d,%d\n", EntryDebugId, (unsigned int)v245->gridX, fmt);
        }
LABEL_272:
        tileActiveCount = s_sunShadowCacheDebugger.tileActiveCount;
        v242 = v377 + 1;
        v224 = v383;
        v238 = v359;
        v377 = v242;
        v181 = v361;
        if ( v242 >= s_sunShadowCacheDebugger.tileActiveCount )
          goto LABEL_273;
      }
    }
  }
}

/*
==============
R_Sunshadow_GenerateTransShadowMask
==============
*/
void R_Sunshadow_GenerateTransShadowMask(ComputeCmdBufState *state, const GfxViewInfo *viewInfo, const GfxBackEndData *data, R_RT_ColorHandle *transShadowMask)
{
  char *v8; 
  GfxSunShadowPartition *v9; 
  __int64 v10; 
  vec4_t v11; 
  unsigned int v12; 
  char *v13; 
  __int64 v14; 
  Bounds *p_bounds; 
  float v16; 
  double v17; 
  float v18; 
  const R_RT_Surface *Surface; 
  unsigned int dataa; 
  ID3D12Resource *buffers; 
  tmat44_t<vec4_t> out; 
  char v23; 
  tmat44_t<vec4_t> in; 
  char v25[458752]; 

  R_SetComputeShader(state, rgp.sunvisTransShadowMask);
  buffers = data->globalSceneConstantBuffer->buffer;
  R_SetComputeConstantBuffers(state, 7, 1, &buffers);
  dataa = data->codeSurfCount[1];
  R_UploadAndSetComputeConstants(state, 2, &dataa, 4u, NULL);
  v8 = &v23;
  v9 = &viewInfo->input.data->sunShadow.partition[3];
  v10 = 3i64;
  do
  {
    v8 += 128;
    v11 = v9->viewParms.viewMatrix.m.m[0];
    v9 = (GfxSunShadowPartition *)((char *)v9 + 128);
    *((vec4_t *)v8 - 8) = v11;
    *((_OWORD *)v8 - 7) = v9[-1].prevViewProjectionMatrix.m.row3;
    *((_OWORD *)v8 - 6) = *(_OWORD *)&v9[-1].isPrevViewProjectionMatrixValid;
    *((_OWORD *)v8 - 5) = *(DpvsPlane *)((char *)v9[-1].frustumSidePlanes + 8);
    *((_OWORD *)v8 - 4) = *(DpvsPlane *)((char *)&v9[-1].frustumSidePlanes[1] + 8);
    *((_OWORD *)v8 - 3) = *(DpvsPlane *)((char *)&v9[-1].frustumSidePlanes[2] + 8);
    *((_OWORD *)v8 - 2) = *(DpvsPlane *)((char *)&v9[-1].frustumSidePlanes[3] + 8);
    *((_OWORD *)v8 - 1) = *(_OWORD *)&v9[-1].dynBounds.midPoint.z;
    --v10;
  }
  while ( v10 );
  MatrixTranspose44Aligned(&in, &out);
  v12 = dataa;
  if ( dataa )
  {
    v13 = v25;
    v14 = dataa;
    p_bounds = &data->codeTransShadowSurfs[0].bounds;
    do
    {
      v16 = p_bounds->halfSize.v[2];
      v13 += 28;
      v17 = *(double *)p_bounds->halfSize.v;
      p_bounds = (Bounds *)((char *)p_bounds + 64);
      *((double *)v13 - 2) = v17;
      *((float *)v13 - 2) = v16;
      v18 = p_bounds[-3].halfSize.v[1];
      *(double *)(v13 - 28) = *(double *)&p_bounds[-3].midPoint.z;
      *((float *)v13 - 5) = v18;
      *((_DWORD *)v13 - 1) = LODWORD(p_bounds[-2].midPoint.v[2]);
      --v14;
    }
    while ( v14 );
  }
  R_UpdateGfxWrappedBuffer(&s_transShadowBoundsDoubleBuffer[data->frameIndex], v25, 28 * v12);
  buffers = (ID3D12Resource *)(&s_transShadowBoundsDoubleBuffer[0].view + 2 * data->frameIndex);
  R_SetComputeViews(state, 2, 1, (const GfxShaderBufferView *const *)&buffers);
  Surface = R_RT_Handle::GetSurface(transShadowMask);
  buffers = (ID3D12Resource *)R_Texture_GetResident(Surface->m_image.m_base.textureId);
  R_SetComputeRWTextures(state, 0, 1, (const GfxTexture *const *)&buffers);
  R_Dispatch(state, 4u, 4u, 1u);
}

/*
==============
R_Sunshadow_GenerateTransShadowMaskDilationAndTAA
==============
*/
void R_Sunshadow_GenerateTransShadowMaskDilationAndTAA(ComputeCmdBufState *state, const GfxViewInfo *viewInfo, const GfxBackEndData *data, R_RT_ColorHandle *transShadowMaskTemp, R_RT_ColorHandle *transShadowMaskPrevFrame, R_RT_ColorHandle *transShadowMask)
{
  bool v9; 
  const R_RT_Surface *Surface; 
  GfxTextureId textureId; 
  const R_RT_Surface *v12; 
  __m256i v13; 
  __m256i v14; 
  __m256i v15; 
  float v16; 
  float v17; 
  GfxTexture *textures; 
  vec4_t textures_8; 
  vec4_t solution_8; 
  int dataa[2]; 
  float mulVec; 
  vec4_t mulVec_8; 
  tmat44_t<vec4_t> src; 
  tmat44_t<vec4_t> dst; 
  tmat44_t<vec4_t> out; 
  tmat44_t<vec4_t> mulMat; 

  v9 = !viewInfo->teleported && data->sunShadow.partition[3].isPrevViewProjectionMatrixValid;
  R_SetComputeShader(state, rgp.sunvisTransShadowMaskDilationAndTAA);
  Surface = R_RT_Handle::GetSurface(transShadowMask);
  textures = (GfxTexture *)R_Texture_GetResident(Surface->m_image.m_base.textureId);
  R_SetComputeRWTextures(state, 0, 1, (const GfxTexture *const *)&textures);
  if ( R_RT_Handle::IsValid(transShadowMaskPrevFrame) )
    textureId = R_RT_Handle::GetSurface(transShadowMaskPrevFrame)->m_image.m_base.textureId;
  else
    textureId = rgp.blackUintImage->textureId;
  textures = (GfxTexture *)R_Texture_GetResident(textureId);
  R_SetComputeTextures(state, 1, 1, (const GfxTexture *const *)&textures);
  v12 = R_RT_Handle::GetSurface(transShadowMaskTemp);
  textures = (GfxTexture *)R_Texture_GetResident(v12->m_image.m_base.textureId);
  R_SetComputeTextures(state, 0, 1, (const GfxTexture *const *)&textures);
  v13 = *(__m256i *)data->sunShadow.partition[3].viewParms.viewProjectionMatrix.m.row2.v;
  *(__m256i *)src.m[0].v = *(__m256i *)data->sunShadow.partition[3].viewParms.viewProjectionMatrix.m.m[0].v;
  v14 = *(__m256i *)data->sunShadow.partition[3].prevViewProjectionMatrix.m.m[0].v;
  *(__m256i *)src.row2.v = v13;
  v15 = *(__m256i *)data->sunShadow.partition[3].prevViewProjectionMatrix.m.row2.v;
  *(__m256i *)dst.m[0].v = v14;
  *(__m256i *)dst.row2.v = v15;
  if ( !v9 )
    MatrixCopy44(&src, &dst);
  MatrixTranspose44Aligned(&src, &out);
  MatrixTranspose44Aligned(&dst, &mulMat);
  mulVec_8 = (vec4_t)_xmm;
  solution_8 = 0i64;
  textures_8 = 0i64;
  MatrixVecMultiply(&out, &mulVec_8, &textures_8);
  MatrixVecMultiply(&mulMat, &mulVec_8, &solution_8);
  solution_8.v[2] = (float)(1.0 / solution_8.v[3]) * solution_8.v[2];
  v16 = (float)((float)(1.0 / textures_8.v[3]) * textures_8.v[0]) * 0.5;
  v17 = (float)((float)(1.0 / solution_8.v[3]) * solution_8.v[0]) * 0.5;
  textures_8.v[2] = (float)(1.0 / textures_8.v[3]) * textures_8.v[2];
  textures_8.v[0] = v16 + 0.5;
  solution_8.v[0] = v17 + 0.5;
  *(float *)&dataa[1] = (float)(0.5 - (float)((float)((float)(1.0 / solution_8.v[3]) * solution_8.v[1]) * 0.5)) - (float)(0.5 - (float)((float)((float)(1.0 / textures_8.v[3]) * textures_8.v[1]) * 0.5));
  *(float *)dataa = v17 - v16;
  _XMM0 = v9;
  solution_8.v[1] = 0.5 - (float)((float)((float)(1.0 / solution_8.v[3]) * solution_8.v[1]) * 0.5);
  __asm { vpcmpeqd xmm3, xmm0, xmm1 }
  _XMM1 = LODWORD(rg.transShadowPrevFrameMaskLerpFactor);
  __asm { vblendvps xmm0, xmm1, xmm2, xmm3 }
  mulVec = *(float *)&_XMM0;
  textures_8.v[1] = 0.5 - (float)((float)((float)(1.0 / textures_8.v[3]) * textures_8.v[1]) * 0.5);
  R_UploadAndSetComputeConstants(state, 2, dataa, 0xCu, NULL);
  R_Dispatch(state, 4u, 4u, 1u);
}

/*
==============
R_Sunshadow_GenerateVisibility
==============
*/
void R_Sunshadow_GenerateVisibility(ComputeCmdBufState *state, const GfxViewInfo *viewInfo, const GfxBackEndData *data, bool viewmodel)
{
  ;
}

/*
==============
R_Sunshadow_InitConstBuffers
==============
*/
void R_Sunshadow_InitConstBuffers(void)
{
  ;
}

/*
==============
R_Sunshadow_ShutdownConstBuffers
==============
*/
void R_Sunshadow_ShutdownConstBuffers(void)
{
  ;
}

