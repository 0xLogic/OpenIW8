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

  _RBX = outResources;
  Setup = R_CompressedSunShadow_GetSetup();
  _RAX = R_RT_CreateBufferInternal(&result, 0x20u, Setup->m_layersCount + Setup->m_totalNodesCount, GFX_DATA_FORMAT_R32G32B32A32_FLOAT, R_RT_Flag_BufferStructured|R_RT_Flag_RWView, R_RT_FlagInternal_None, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, "compressed sun shadow nodes", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sunshadow.cpp(135)");
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbx], ymm0
  }
  WrappedBuffer = R_RT_Handle::GetWrappedBuffer(&_RBX->m_nodesBuffer);
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
  const GfxBackEndData *v7; 
  GfxCmdBufSourceState *source; 
  GfxCmdBufState *state; 
  unsigned int opaqueCascadeCount; 
  unsigned int v17; 
  unsigned int i; 
  bool v25; 
  unsigned int m_allocCounter; 
  const GfxSunShadow *p_sunShadow; 
  GfxCmdBufSourceState *v29; 
  GfxCmdBufState *v30; 
  const char *m_location; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  unsigned int v48; 
  const R_RT_Surface *v49; 
  GfxCmdBufState *v50; 
  GfxCmdBufSourceState *v56; 
  GfxCmdBufState *v58; 
  const char *v72; 
  ComputeCmdBufState *GfxComputeCmdBufState; 
  GfxCmdBufSourceState *v81; 
  GfxCmdBufState *v82; 
  const char *v96; 
  GfxCmdBufState *v100; 
  CmdBufState *v112; 
  R_RT_DepthHandle *m_sunShadowCascades; 
  R_RT_Handle v116; 
  R_RT_Handle v117; 
  GfxCmdBufContext v118; 
  GfxCmdBufContext v119[2]; 
  GfxCmdBufContext v120; 
  GfxCmdBufContext v121; 
  GfxCmdBufContext v122; 
  GfxCmdBufContext v123; 
  R_RT_Handle v124; 
  R_RT_DepthHandle v125; 
  R_RT_DepthHandle result; 
  R_RT_Group rtGroup; 
  GfxDrawCallOutput drawOutput; 
  GfxDrawCallOutput v129; 

  _RBX = gfxContext;
  v118.source = (GfxCmdBufSourceState *)viewInfo;
  _R13 = viewInfo;
  v7 = data;
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sunshadow.cpp", 352, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  source = _RBX->source;
  R_InitCmdBufSourceState(_RBX->source, &_R13->input);
  _RAX = R_SunShadowCache_GetBackFaceDepthArrayRtDraw3D(&result);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+49D0h+var_4990.m_surfaceID], ymm0
  }
  _RAX = R_SunShadowCache_GetDepthArrayRtDraw3D(&v125);
  __asm
  {
    vmovups ymm0, ymmword ptr [rsp+49D0h+var_4990.m_surfaceID]
    vmovups xmm1, xmmword ptr [rbx]
    vmovups ymmword ptr [rsp+49D0h+var_4990.m_surfaceID], ymm0
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbp+48D0h+var_48E0.m_surfaceID], ymm0
    vmovups xmmword ptr [rsp+49D0h+var_4970.m_surfaceID], xmm1
  }
  R_DrawSunshadow_DrawCacheForAllCascades((GfxCmdBufContext *)&v117, v7, _R13, (R_RT_DepthHandle *)&v124, (R_RT_DepthHandle *)&v116, D3D12XBOX_RESOURCE_STATE_PRESERVE_COMPRESSED_DEPTH|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE);
  state = _RBX->state;
  R_InitLocalCmdBufState(state, &source->input);
  opaqueCascadeCount = v7->sunShadow.opaqueCascadeCount;
  v17 = 0;
  if ( v7->sunShadow.opaqueCascadeCount )
  {
    _RSI = _R13->sceneRtInput.m_sunShadowCascades;
    do
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsi]
        vmovd   eax, xmm0
        vmovups ymmword ptr [rbp+48D0h+var_48C0.baseclass_0.m_surfaceID], ymm0
        vmovups ymmword ptr [rbp+48D0h+result.baseclass_0.m_surfaceID], ymm0
      }
      if ( (_WORD)_EAX )
      {
        R_RT_Handle::GetSurface(&result);
        __asm { vmovups ymm0, ymmword ptr [rbp+48D0h+result.baseclass_0.m_surfaceID] }
      }
      else
      {
        __asm { vpextrd rax, xmm0, 2 }
        if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 458, ASSERT_TYPE_ASSERT, "(depthRt)", (const char *)&queryFormat, "depthRt") )
          __debugbreak();
        __asm { vmovups ymm0, ymmword ptr [rbp+48D0h+var_48C0.baseclass_0.m_surfaceID] }
      }
      state = _RBX->state;
      rtGroup.m_colorRtCount = 0;
      __asm { vmovups ymmword ptr [rbp+48D0h+rtGroup.m_depthRt.baseclass_0.m_surfaceID], ymm0 }
      R_ClearRtGroup(state, &rtGroup, 0x3Fu, 0, (PipeFlushMode)((v17++ != opaqueCascadeCount - 1) + 1));
      ++_RSI;
    }
    while ( v17 < opaqueCascadeCount );
    source = _RBX->source;
    v7 = data;
    _R13 = (const GfxViewInfo *)v118.source;
  }
  R_ShutdownLocalCmdBufState(state, &source->input);
  _RCX = _R13->sceneRtInput.m_sunShadowCascades;
  __asm { vmovaps [rsp+49D0h+var_40], xmm6 }
  m_sunShadowCascades = _R13->sceneRtInput.m_sunShadowCascades;
  for ( i = 0; i < 3; ++i )
  {
    if ( i < v7->sunShadow.opaqueCascadeCount )
    {
      v25 = _R13->useCachedSunShadow == 0;
      __asm
      {
        vmovups ymm0, ymmword ptr [rcx]
        vmovups ymmword ptr [rbp+48D0h+result.baseclass_0.m_surfaceID], ymm0
      }
      m_allocCounter = result.m_tracking.m_allocCounter;
      __asm { vmovups ymmword ptr [rbp+48D0h+var_48C0.baseclass_0.m_surfaceID], ymm0 }
      if ( !v25 && v7->sunShadow.firstCachedSunShadowPartition <= i && i <= v7->sunShadow.lastCachedSunShadowPartition )
      {
        p_sunShadow = &v7->sunShadow;
        if ( v7 == (const GfxBackEndData *)-927488i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 383, ASSERT_TYPE_ASSERT, "(sunShadow)", (const char *)&queryFormat, "sunShadow") )
          __debugbreak();
        if ( !R_IsCachedSunShadowPartition(p_sunShadow, i) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 384, ASSERT_TYPE_ASSERT, "(R_IsCachedSunShadowPartition( sunShadow, partitionIndex ))", (const char *)&queryFormat, "R_IsCachedSunShadowPartition( sunShadow, partitionIndex )") )
          __debugbreak();
        if ( p_sunShadow->partitionCache[i - v7->sunShadow.firstCachedSunShadowPartition].gfxCachedSunShadowOverlapCount )
        {
          v29 = _RBX->source;
          v30 = _RBX->state;
          if ( (*((_BYTE *)&_RBX->source->input + 7920) & 1) != 0 )
          {
            R_LockIfGfxImmediateContext(v30->device);
            R_InitCmdBufState(v30);
          }
          else
          {
            R_LockGfxImmediateContext();
            _RAX = RB_GetBackendCmdBufContext(&v118);
            __asm
            {
              vmovups xmm0, xmmword ptr [rax]
              vpextrq rdx, xmm0, 1; in
            }
            if ( v30 != _RDX )
              GfxCmdBufState::Copy(v30, _RDX);
          }
          memset_0(v30->perPrimConstantState, 255, sizeof(v30->perPrimConstantState));
          memset_0(v30->perObjectConstantState, 255, sizeof(v30->perObjectConstantState));
          memset_0(v30->stableConstantState, 255, sizeof(v30->stableConstantState));
          __asm
          {
            vmovups ymm0, ymmword ptr [rbp+48D0h+var_48C0.baseclass_0.m_surfaceID]
            vmovups xmm6, xmmword ptr [rbx]
          }
          v30->data = v29->input.data;
          __asm
          {
            vmovups ymmword ptr [rbp+48D0h+var_48E0.m_surfaceID], ymm0
            vmovups ymmword ptr [rsp+49D0h+var_4970.m_surfaceID], ymm0
          }
          if ( result.m_surfaceID )
          {
            R_RT_Handle::GetSurface(&v117);
            __asm { vmovups ymm0, ymmword ptr [rsp+49D0h+var_4970.m_surfaceID] }
          }
          else
          {
            if ( m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
              __debugbreak();
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 458, ASSERT_TYPE_ASSERT, "(depthRt)", (const char *)&queryFormat, "depthRt") )
              __debugbreak();
            __asm { vmovups ymm0, ymmword ptr [rbp+48D0h+var_48E0.m_surfaceID] }
          }
          __asm { vmovups ymmword ptr [rbp+48D0h+rtGroup.m_depthRt.baseclass_0.m_surfaceID], ymm0 }
          _RCX = &drawOutput;
          rtGroup.m_colorRtCount = 0;
          _RAX = &rtGroup;
          __asm
          {
            vmovups ymm0, ymmword ptr [rax]
            vmovups ymmword ptr [rcx], ymm0
            vmovups ymm0, ymmword ptr [rax+20h]
            vmovups ymmword ptr [rcx+20h], ymm0
            vmovups ymm0, ymmword ptr [rax+40h]
            vmovups ymmword ptr [rcx+40h], ymm0
            vmovups ymm0, ymmword ptr [rax+60h]
            vmovups ymmword ptr [rcx+60h], ymm0
            vmovups ymm0, ymmword ptr [rax+80h]
            vmovups ymmword ptr [rcx+80h], ymm0
            vmovups ymm0, ymmword ptr [rax+0A0h]
          }
          m_location = rtGroup.m_vrsRt.m_tracking.m_location;
          __asm { vmovups ymmword ptr [rcx+0A0h], ymm0 }
          *(_QWORD *)&drawOutput.cmdBuf.descState.ranges[5].startSlot = m_location;
          __asm { vmovdqa xmmword ptr [rsp+49D0h+var_4970.m_surfaceID], xmm6 }
          R_SetRenderTargetsInternal((GfxCmdBufContext *)&v117, (const R_RT_Group *)&drawOutput, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sunshadow.cpp(398)");
          __asm
          {
            vmovups ymm0, ymmword ptr [rbp+48D0h+var_48C0.baseclass_0.m_surfaceID]
            vmovups ymmword ptr [rbp+48D0h+var_48E0.m_surfaceID], ymm0
          }
          height = R_RT_Handle::GetSurface(&v124)->m_image.m_base.height;
          Surface = R_RT_Handle::GetSurface(&v124);
          R_SetRenderTargetSize(v29, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FOR_VIEW);
          v48 = R_RT_Handle::GetSurface(&result)->m_image.m_base.height;
          v49 = R_RT_Handle::GetSurface(&result);
          R_SetViewportValues(v29, 0, 0, v49->m_image.m_base.width, v48);
          R_Set2D(v29);
          Sys_ProfBeginNamedEvent(0xFFFF7F50, "Cached Sun Shadow Blit");
          v50 = _RBX->state;
          R_ProfBeginNamedEvent(v50, "cached blits");
          _RAX = R_SunShadowCache_GetDepthArrayRtDraw3D((R_RT_DepthHandle *)&v124);
          __asm
          {
            vmovups xmmword ptr [rsp+49D0h+var_4970.m_surfaceID], xmm6
            vmovups ymm0, ymmword ptr [rax]
            vmovups ymmword ptr [rsp+49D0h+var_4990.m_surfaceID], ymm0
          }
          R_DrawSunshadow_BlitCache(v7, (GfxCmdBufContext *)&v117, i, (R_RT_DepthHandle *)&v116);
          R_ProfEndNamedEvent(v50);
          Sys_ProfEndNamedEvent();
          R_ResetRenderTargets(v50);
          if ( (*((_BYTE *)&v29->input + 7920) & 1) != 0 )
          {
            R_ShutdownCmdBufState(v50);
            R_UnlockIfGfxImmediateContext(v50->device);
          }
          else
          {
            _RAX = RB_GetBackendCmdBufContext(&v120);
            __asm
            {
              vmovups xmm0, xmmword ptr [rax]
              vpextrq rcx, xmm0, 1; out
            }
            if ( v50 != _RCX )
            {
              GfxCmdBufState::Copy(_RCX, v50);
              R_FlushImmediateContext();
            }
            R_UnlockGfxImmediateContext();
          }
        }
        _RCX = m_sunShadowCascades;
      }
      if ( _R13->useDynamicSunShadows )
      {
        if ( R_RunDrawListCommandBuffer(v7, (const GfxDrawListType)(i + 24)) )
        {
          R_ProfBeginDrawListImmediate((const GfxDrawListType)(i + 24));
          R_GPU_BeginRunDrawListTimer((const GfxDrawListType)(i + 24));
          R_InitDrawCallOutput(v7, &drawOutput);
          __asm
          {
            vmovups ymm0, ymmword ptr [rbp+48D0h+var_48C0.baseclass_0.m_surfaceID]
            vmovups ymmword ptr [rsp+49D0h+var_4990.m_surfaceID], ymm0
          }
          R_DrawSunshadow_DrawCascade(_R13, (GfxDrawListType)(i + 24), (R_RT_DepthHandle *)&v116, TECHNIQUE_BUILD_SHADOWMAP_DEPTH, &drawOutput);
          R_GPU_EndTimer();
          R_ProfEndDrawListImmediate();
        }
        if ( !i )
        {
          v56 = _RBX->source;
          __asm { vmovups ymm0, ymmword ptr [r13+32E0h] }
          v58 = _RBX->state;
          __asm { vmovups ymmword ptr [rsp+49D0h+var_4990.m_surfaceID], ymm0 }
          if ( (*((_BYTE *)&v56->input + 7920) & 1) != 0 )
          {
            R_LockIfGfxImmediateContext(v58->device);
            R_InitCmdBufState(v58);
          }
          else
          {
            R_LockGfxImmediateContext();
            _RAX = RB_GetBackendCmdBufContext(&v121);
            __asm
            {
              vmovups xmm0, xmmword ptr [rax]
              vpextrq rdx, xmm0, 1; in
            }
            if ( v58 != _RDX )
              GfxCmdBufState::Copy(v58, _RDX);
          }
          memset_0(v58->perPrimConstantState, 255, sizeof(v58->perPrimConstantState));
          memset_0(v58->perObjectConstantState, 255, sizeof(v58->perObjectConstantState));
          memset_0(v58->stableConstantState, 255, sizeof(v58->stableConstantState));
          __asm
          {
            vmovups ymm0, ymmword ptr [rbp+48D0h+var_48C0.baseclass_0.m_surfaceID]
            vmovups xmm6, xmmword ptr [rbx]
          }
          v58->data = v56->input.data;
          __asm
          {
            vmovups ymmword ptr [rsp+49D0h+var_4970.m_surfaceID], ymm0
            vmovups ymmword ptr [rbp+48D0h+var_48E0.m_surfaceID], ymm0
          }
          if ( result.m_surfaceID )
          {
            R_RT_Handle::GetSurface(&v124);
            __asm { vmovups ymm0, ymmword ptr [rbp+48D0h+var_48E0.m_surfaceID] }
          }
          else
          {
            if ( m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
              __debugbreak();
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 458, ASSERT_TYPE_ASSERT, "(depthRt)", (const char *)&queryFormat, "depthRt") )
              __debugbreak();
            __asm { vmovups ymm0, ymmword ptr [rsp+49D0h+var_4970.m_surfaceID] }
          }
          __asm { vmovups ymmword ptr [rbp+48D0h+rtGroup.m_depthRt.baseclass_0.m_surfaceID], ymm0 }
          _RCX = &drawOutput;
          rtGroup.m_colorRtCount = 0;
          _RAX = &rtGroup;
          __asm
          {
            vmovups ymm0, ymmword ptr [rax]
            vmovups ymmword ptr [rcx], ymm0
            vmovups ymm0, ymmword ptr [rax+20h]
            vmovups ymmword ptr [rcx+20h], ymm0
            vmovups ymm0, ymmword ptr [rax+40h]
            vmovups ymmword ptr [rcx+40h], ymm0
            vmovups ymm0, ymmword ptr [rax+60h]
            vmovups ymmword ptr [rcx+60h], ymm0
            vmovups ymm0, ymmword ptr [rax+80h]
            vmovups ymmword ptr [rcx+80h], ymm0
            vmovups ymm0, ymmword ptr [rax+0A0h]
          }
          v72 = rtGroup.m_vrsRt.m_tracking.m_location;
          __asm { vmovups ymmword ptr [rcx+0A0h], ymm0 }
          *(_QWORD *)&drawOutput.cmdBuf.descState.ranges[5].startSlot = v72;
          __asm { vmovdqa xmmword ptr [rsp+49D0h+var_4970.m_surfaceID], xmm6 }
          R_SetRenderTargetsInternal((GfxCmdBufContext *)&v117, (const R_RT_Group *)&drawOutput, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sunshadow.cpp(448)");
          __asm { vmovups xmmword ptr [rsp+49D0h+var_4970.m_surfaceID], xmm6 }
          R_ResolveDepth((GfxCmdBufContext *)&v117);
          GfxComputeCmdBufState = R_GetGfxComputeCmdBufState(v58);
          __asm
          {
            vmovups ymm0, ymmword ptr [rbp+48D0h+var_48C0.baseclass_0.m_surfaceID]
            vmovups ymm1, ymmword ptr [rsp+49D0h+var_4990.m_surfaceID]
            vmovups ymmword ptr [rbp+48D0h+var_48E0.m_surfaceID], ymm0
            vmovups ymmword ptr [rsp+49D0h+var_4970.m_surfaceID], ymm1
          }
          R_CopyDepthStencilRT(GfxComputeCmdBufState, (R_RT_DepthHandle *)&v117, (R_RT_DepthHandle *)&v124);
          __asm
          {
            vmovups ymm0, ymmword ptr [rbp+48D0h+var_48C0.baseclass_0.m_surfaceID]
            vmovups ymmword ptr [rbp+48D0h+var_48E0.m_surfaceID], ymm0
          }
          R_AddDepthStencilTransition(v58, (R_RT_DepthHandle *)&v124, DEPTHSTENCIL_TRANSITION_MODE_WRITE_PRESERVE_COMPRESSION, D3D12_RESOURCE_BARRIER_FLAG_NONE);
          __asm
          {
            vmovups ymm0, ymmword ptr [rsp+49D0h+var_4990.m_surfaceID]
            vmovups ymmword ptr [rsp+49D0h+var_4990.m_surfaceID], ymm0
          }
          R_AddDepthStencilTransition(v58, (R_RT_DepthHandle *)&v116, DEPTHSTENCIL_TRANSITION_MODE_READ_PRESERVE_EXPANDED, D3D12_RESOURCE_BARRIER_FLAG_NONE);
          R_FlushResourceTransitions(v58);
          R_ResetRenderTargets(v58);
          if ( (*((_BYTE *)&v56->input + 7920) & 1) != 0 )
          {
            R_ShutdownCmdBufState(v58);
            R_UnlockIfGfxImmediateContext(v58->device);
          }
          else
          {
            _RAX = RB_GetBackendCmdBufContext(&v122);
            __asm
            {
              vmovups xmm0, xmmword ptr [rax]
              vpextrq rcx, xmm0, 1; out
            }
            if ( v58 != _RCX )
            {
              GfxCmdBufState::Copy(_RCX, v58);
              R_FlushImmediateContext();
            }
            R_UnlockGfxImmediateContext();
          }
          if ( R_RunDrawListCommandBuffer(v7, DRAWLIST_SUNSHADOW_VIEWMODEL) )
          {
            R_ProfBeginDrawListImmediate(DRAWLIST_SUNSHADOW_VIEWMODEL);
            R_GPU_BeginRunDrawListTimer(DRAWLIST_SUNSHADOW_VIEWMODEL);
            R_InitDrawCallOutput(v7, &drawOutput);
            __asm
            {
              vmovups ymm0, ymmword ptr [rbp+48D0h+var_48C0.baseclass_0.m_surfaceID]
              vmovups ymmword ptr [rsp+49D0h+var_4990.m_surfaceID], ymm0
            }
            R_DrawSunshadow_DrawCascade(_R13, DRAWLIST_SUNSHADOW_VIEWMODEL, (R_RT_DepthHandle *)&v116, TECHNIQUE_BUILD_SHADOWMAP_DEPTH, &drawOutput);
            R_GPU_EndTimer();
            R_ProfEndDrawListImmediate();
          }
        }
        v81 = _RBX->source;
        v82 = _RBX->state;
        if ( (*((_BYTE *)&_RBX->source->input + 7920) & 1) != 0 )
        {
          R_LockIfGfxImmediateContext(v82->device);
          R_InitCmdBufState(v82);
        }
        else
        {
          R_LockGfxImmediateContext();
          _RAX = RB_GetBackendCmdBufContext(&v123);
          __asm
          {
            vmovups xmm0, xmmword ptr [rax]
            vpextrq rdx, xmm0, 1; in
          }
          if ( v82 != _RDX )
            GfxCmdBufState::Copy(v82, _RDX);
        }
        memset_0(v82->perPrimConstantState, 255, sizeof(v82->perPrimConstantState));
        memset_0(v82->perObjectConstantState, 255, sizeof(v82->perObjectConstantState));
        memset_0(v82->stableConstantState, 255, sizeof(v82->stableConstantState));
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+48D0h+var_48C0.baseclass_0.m_surfaceID]
          vmovups xmm6, xmmword ptr [rbx]
        }
        v82->data = v81->input.data;
        __asm { vmovups ymmword ptr [rsp+49D0h+var_4990.m_surfaceID], ymm0 }
        if ( result.m_surfaceID )
        {
          R_RT_Handle::GetSurface(&v116);
          __asm { vmovups ymm0, ymmword ptr [rsp+49D0h+var_4990.m_surfaceID] }
        }
        else
        {
          if ( m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 458, ASSERT_TYPE_ASSERT, "(depthRt)", (const char *)&queryFormat, "depthRt") )
            __debugbreak();
          __asm { vmovups ymm0, ymmword ptr [rbp+48D0h+var_48C0.baseclass_0.m_surfaceID] }
        }
        __asm { vmovups ymmword ptr [rbp+48D0h+rtGroup.m_depthRt.baseclass_0.m_surfaceID], ymm0 }
        _RCX = &drawOutput;
        rtGroup.m_colorRtCount = 0;
        _RAX = &rtGroup;
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups ymmword ptr [rcx], ymm0
          vmovups ymm0, ymmword ptr [rax+20h]
          vmovups ymmword ptr [rcx+20h], ymm0
          vmovups ymm0, ymmword ptr [rax+40h]
          vmovups ymmword ptr [rcx+40h], ymm0
          vmovups ymm0, ymmword ptr [rax+60h]
          vmovups ymmword ptr [rcx+60h], ymm0
          vmovups ymm0, ymmword ptr [rax+80h]
          vmovups ymmword ptr [rcx+80h], ymm0
          vmovups ymm0, ymmword ptr [rax+0A0h]
        }
        v96 = rtGroup.m_vrsRt.m_tracking.m_location;
        __asm { vmovups ymmword ptr [rcx+0A0h], ymm0 }
        *(_QWORD *)&drawOutput.cmdBuf.descState.ranges[5].startSlot = v96;
        __asm { vmovdqa xmmword ptr [rsp+49D0h+var_4970.m_surfaceID], xmm6 }
        R_SetRenderTargetsInternal((GfxCmdBufContext *)&v117, (const R_RT_Group *)&drawOutput, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sunshadow.cpp(494)");
        __asm { vmovups xmmword ptr [rsp+49D0h+var_4970.m_surfaceID], xmm6 }
        R_ResolveDepth((GfxCmdBufContext *)&v117);
        R_ResetRenderTargets(v82);
        if ( (*((_BYTE *)&v81->input + 7920) & 1) != 0 )
        {
          R_ShutdownCmdBufState(v82);
          R_UnlockIfGfxImmediateContext(v82->device);
        }
        else
        {
          _RAX = RB_GetBackendCmdBufContext(v119);
          __asm
          {
            vmovups xmm0, xmmword ptr [rax]
            vpextrq rcx, xmm0, 1; out
          }
          if ( v82 != _RCX )
          {
            GfxCmdBufState::Copy(_RCX, v82);
            R_FlushImmediateContext();
          }
          R_UnlockGfxImmediateContext();
        }
        _RCX = m_sunShadowCascades;
      }
    }
    m_sunShadowCascades = ++_RCX;
  }
  __asm { vmovaps xmm6, [rsp+49D0h+var_40] }
  if ( rg.useTransSunShadow )
  {
    v100 = _RBX->state;
    R_LockIfGfxImmediateContext(v100->device);
    _RCX = 32 * (_R13->input.data->sunShadow.opaqueCascadeCount + 403i64);
    __asm
    {
      vmovups ymm0, ymmword ptr [rcx+r13]
      vmovups ymmword ptr [rbp+48D0h+result.baseclass_0.m_surfaceID], ymm0
      vmovups ymmword ptr [rsp+49D0h+var_4990.m_surfaceID], ymm0
    }
    R_HW_AddResourceTransition(v100, &v116, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_DEPTH_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(v100);
    __asm
    {
      vmovups ymm0, ymmword ptr [r13+3300h]
      vmovups ymmword ptr [rsp+49D0h+var_4990.m_surfaceID], ymm0
    }
    R_RT_Group::AssignColor((R_RT_Group *)&drawOutput, (R_RT_ColorHandle *)&v116);
    R_ClearRtGroup(v100, (const R_RT_Group *)&drawOutput, 0xFu, 0, PIPE_FLUSH_FULL);
    R_UnlockIfGfxImmediateContext(v100->device);
    if ( R_RunDrawListCommandBuffer(v7, DRAWLIST_SUNSHADOW_END) )
    {
      R_GPU_BeginRunDrawListTimer(DRAWLIST_SUNSHADOW_END);
      R_ProfBeginDrawListImmediate(DRAWLIST_SUNSHADOW_END);
      R_InitDrawCallOutput(v7, &v129);
      __asm
      {
        vmovups ymm1, ymmword ptr [rbp+48D0h+result.baseclass_0.m_surfaceID]
        vmovups ymm0, ymmword ptr [r13+3300h]
        vmovd   eax, xmm1
        vmovups ymmword ptr [rbp+48D0h+var_48E0.m_surfaceID], ymm1
        vmovups ymmword ptr [rsp+49D0h+var_4990.m_surfaceID], ymm0
        vmovups ymmword ptr [rbp+48D0h+var_48C0.baseclass_0.m_surfaceID], ymm0
      }
      if ( (_WORD)_EAX )
      {
        R_RT_Handle::GetSurface(&v124);
      }
      else
      {
        __asm { vpextrd rax, xmm1, 2 }
        if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 463, ASSERT_TYPE_ASSERT, "(depthRt)", (const char *)&queryFormat, "depthRt") )
          __debugbreak();
      }
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+49D0h+var_4990.m_surfaceID]
        vmovd   eax, xmm0
      }
      rtGroup.m_colorRtCount = 1;
      __asm { vmovups ymmword ptr [rbp+48D0h+var_4940.source], ymm0 }
      if ( (_WORD)_EAX )
      {
        R_RT_Handle::GetSurface((R_RT_Handle *)v119);
      }
      else
      {
        if ( v125.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 442, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
          __debugbreak();
      }
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+49D0h+var_4990.m_surfaceID]
        vmovups ymm1, ymmword ptr [rbp+48D0h+var_48E0.m_surfaceID]
        vmovups ymmword ptr [rbp+48D0h+rtGroup.m_colorRts.baseclass_0.m_surfaceID], ymm0
        vmovups ymmword ptr [rbp+48D0h+rtGroup.m_depthRt.baseclass_0.m_surfaceID], ymm1
      }
      R_DrawSunshadow_DrawTranslucent(_R13, &_R13->drawList[27], &rtGroup, &v129);
      R_ProfEndDrawListImmediate();
      R_GPU_EndTimer();
    }
    v112 = _RBX->state;
    R_LockIfGfxImmediateContext(v112->device);
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+48D0h+result.baseclass_0.m_surfaceID]
      vmovups ymmword ptr [rsp+49D0h+var_4990.m_surfaceID], ymm0
    }
    R_HW_AddResourceTransition(v112, &v116, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_DEPTH_READ, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(v112);
    R_UnlockIfGfxImmediateContext(v112->device);
  }
}

/*
==============
RB_DrawTextWithShadow
==============
*/

void __fastcall RB_DrawTextWithShadow(GfxCmdBufContext *gfxContext, const char *text, GfxFont *font, double x, float y, const GfxColor fgColor, const GfxColor bgColor)
{
  float v22; 
  float v23; 
  GfxCmdBufContext v24[3]; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovups xmm0, xmmword ptr [rcx]
    vmovaps xmmword ptr [rax-18h], xmm6
  }
  _RBX = gfxContext;
  __asm
  {
    vmovss  xmm6, [rsp+68h+arg_20]
    vmovups xmmword ptr [rax-38h], xmm0
    vaddss  xmm0, xmm6, cs:__real@3f800000
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmm7, xmm3
    vaddss  xmm3, xmm3, cs:__real@3f800000
    vmovss  [rsp+68h+var_48], xmm0
  }
  RB_DrawText(v24, text, font, *(float *)&_XMM3, v22, bgColor);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovaps xmm3, xmm7
    vmovss  [rsp+68h+var_48], xmm6
    vmovups [rsp+68h+var_38], xmm0
  }
  RB_DrawText(v24, text, font, *(float *)&_XMM3, v23, fgColor);
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
  }
}

/*
==============
RB_SunShadow_GenerateFullScreenVisibility
==============
*/
void RB_SunShadow_GenerateFullScreenVisibility(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  GfxCmdBufSourceState *source; 
  unsigned int indexCount; 
  unsigned int m_allocCounter; 
  bool useTransSunShadow; 
  const char *v25; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  GfxCmdBufSourceState *v28; 
  GfxCmdBufState *state; 
  bool v37; 
  BOOL v39; 
  __int64 v45; 
  __int64 v53; 
  R_RT_Handle v54; 
  R_RT_ColorHandle v55; 
  GfxViewParms result; 
  GfxViewParms v58; 
  R_RT_Group v59; 

  _RSI = viewInfo;
  _R14 = gfxContext;
  if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sunshadow.cpp", 795, ASSERT_TYPE_ASSERT, "(viewInfo != nullptr)", (const char *)&queryFormat, "viewInfo != nullptr") )
    __debugbreak();
  if ( (*((_BYTE *)&_RSI->viewportFeatures + 44) & 4) != 0 )
  {
    __asm { vmovaps [rsp+4B0h+var_40], xmm7 }
    Sys_ProfBeginNamedEvent(0xFFFF7F50, "sun visibility");
    source = _R14->source;
    R_InitLocalCmdBufState(_R14->state, &_R14->source->input);
    R_ProfBeginNamedEvent(_R14->state, "Generate Sun Visibility");
    R_GPU_BeginTimer(GPU_TIMER_SUN_VISMASK);
    if ( !source->input.data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sunshadow.cpp", 810, ASSERT_TYPE_ASSERT, "(gfxContext.source->input.data)", (const char *)&queryFormat, "gfxContext.source->input.data") )
      __debugbreak();
    __asm
    {
      vmovups xmm0, xmmword ptr [r14]
      vmovups xmmword ptr [rsp+4B0h+var_480.m_surfaceID], xmm0
    }
    indexCount = R_GetTess((GfxCmdBufContext *)&v54)->indexCount;
    if ( indexCount )
    {
      LODWORD(v53) = indexCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sunshadow.cpp", 813, ASSERT_TYPE_ASSERT, "( ( !tess.indexCount ) )", "( tess.indexCount ) = %i", v53) )
        __debugbreak();
    }
    __asm
    {
      vmovups ymm0, ymmword ptr [rsi+3320h]
      vmovups ymm1, ymmword ptr [rsi+31A0h]
      vmovd   edi, xmm0
      vmovups ymmword ptr [rsp+4B0h+var_480.m_surfaceID], ymm0
    }
    m_allocCounter = v54.m_tracking.m_allocCounter;
    __asm
    {
      vmovups [rsp+4B0h+var_440], ymm0
      vmovups [rsp+4B0h+var_460], ymm1
    }
    if ( (_WORD)_EDI )
    {
      R_RT_Handle::GetSurface(&v54);
    }
    else
    {
      if ( v54.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", *(_QWORD *)&v54.m_surfaceID) )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sunshadow.cpp", 819, ASSERT_TYPE_ASSERT, "(sunVisibilityRt)", (const char *)&queryFormat, "sunVisibilityRt") )
        __debugbreak();
    }
    useTransSunShadow = rg.useTransSunShadow;
    LOBYTE(v58.viewMatrix.m.m[0].v[0]) = 1;
    __asm
    {
      vmovups ymm0, [rsp+4B0h+var_440]
      vmovups ymmword ptr [rsp+4B0h+var_480.m_surfaceID], ymm0
    }
    if ( (_WORD)_EDI )
    {
      R_RT_Handle::GetSurface(&v54);
    }
    else
    {
      if ( m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", *(_QWORD *)&v54.m_surfaceID, *(_QWORD *)&v54.m_tracking.m_allocCounter, v54.m_tracking.m_name, v54.m_tracking.m_location) )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 442, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
        __debugbreak();
    }
    __asm
    {
      vmovups ymm2, [rsp+4B0h+var_440]
      vmovups ymm0, [rsp+4B0h+var_460]
      vmovups [rbp+3B0h+var_298], ymm2
      vmovups [rbp+3B0h+var_218], ymm0
    }
    _RCX = &v59;
    _RAX = &v58;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymm1, ymmword ptr [rax+80h]
      vmovups ymmword ptr [rcx], ymm0
      vmovups ymm0, ymmword ptr [rax+20h]
      vmovups ymmword ptr [rcx+20h], ymm0
      vmovups ymm0, ymmword ptr [rax+40h]
      vmovups ymmword ptr [rcx+40h], ymm0
      vmovups ymm0, ymmword ptr [rax+60h]
      vmovups ymmword ptr [rcx+60h], ymm0
      vmovups ymmword ptr [rcx+80h], ymm1
      vmovups ymm1, ymmword ptr [rax+0A0h]
    }
    v25 = *(const char **)v58.inverseViewProjectionMatrix.m.m[0].v;
    __asm { vmovups ymmword ptr [rcx+0A0h], ymm1 }
    v59.m_vrsRt.m_tracking.m_location = v25;
    __asm { vmovups ymmword ptr [rsp+4B0h+var_480.m_surfaceID], ymm2 }
    height = R_RT_Handle::GetSurface(&v54)->m_image.m_base.height;
    Surface = R_RT_Handle::GetSurface(&v54);
    v28 = _R14->source;
    R_SetRenderTargetSize(_R14->source, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FOR_VIEW);
    __asm { vmovups ymm0, [rsp+4B0h+var_440] }
    state = _R14->state;
    __asm { vmovups [rsp+4B0h+var_460], ymm0 }
    R_AddRenderTargetTransition(state, &v55, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(state);
    __asm
    {
      vmovups xmm0, xmmword ptr [r14]
      vmovups xmmword ptr [rsp+4B0h+var_480.m_surfaceID], xmm0
    }
    R_SetRenderTargetsInternal((GfxCmdBufContext *)&v54, &v59, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sunshadow.cpp(835)");
    R_SetViewportStruct(v28, &_RSI->sceneViewport);
    __asm
    {
      vmovups xmm7, xmmword ptr [r14]
      vmovq   rbx, xmm7
    }
    R_BeginViewInternal(_RBX, &_RSI->sceneDef, (const GfxViewParms *)_RSI, &_RSI->viewParmsSet.frames[1].viewParms);
    R_MaskSourceState(_RBX, _RSI, GLOBAL_LIGHTING_FLAG_HEIGHTFIELD|GLOBAL_LIGHTING_FLAG_SUN_SHADOW_FORWARD|GLOBAL_LIGHTING_FLAG_LIGHT_DATA);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi+634h]
      vmovss  xmm2, cs:__real@3f7c0000; depthBoundsMax
      vmovss  xmm1, cs:__real@322bcc77; depthBoundsMin
      vmovups xmmword ptr [rbx+0FD0h], xmm0
    }
    ++_RBX->constVersions[141];
    v37 = !useTransSunShadow;
    __asm { vpextrq r15, xmm7, 1 }
    v39 = !v37;
    R_SetDepthBoundsEnable(_R15, *(const float *)&_XMM1, *(const float *)&_XMM2);
    __asm { vmovups xmmword ptr [rsp+4B0h+var_480.m_surfaceID], xmm7 }
    R_SunVisibilityPixelPass((GfxCmdBufContext *)&v54, SUNSHADOW_VISIBILITY_MATERIAL_DISTANCE_DEFAULT, (SunshadowVisibilityMaterialTransmittanceType)v39, (const GfxViewParms *)_RSI, &_RSI->sceneViewport);
    __asm
    {
      vmovss  xmm2, cs:__real@3f800000; depthBoundsMax
      vmovss  xmm1, cs:__real@3f7c0000; depthBoundsMin
    }
    R_SetDepthBoundsEnable(_R15, *(const float *)&_XMM1, *(const float *)&_XMM2);
    _RAX = R_GetDepthHackViewParms(&result, (const GfxViewParms *)_RSI);
    __asm { vmovaps xmm7, [rsp+4B0h+var_40] }
    _RDX = &v58;
    v45 = 3i64;
    do
    {
      _RDX = (GfxViewParms *)((char *)_RDX + 128);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups xmm1, xmmword ptr [rax+70h]
      }
      _RAX = (GfxViewParms *)((char *)_RAX + 128);
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
      --v45;
    }
    while ( v45 );
    __asm
    {
      vmovups xmm0, xmmword ptr [r14]
      vmovups xmmword ptr [rsp+4B0h+var_480.m_surfaceID], xmm0
    }
    R_SunVisibilityPixelPass((GfxCmdBufContext *)&v54, SUNSHADOW_VISIBILITY_MATERIAL_DISTANCE_VIEWMODEL, (SunshadowVisibilityMaterialTransmittanceType)v39, &v58, &_RSI->sceneViewport);
    R_SetDepthBoundsDisable(_R15);
    __asm
    {
      vmovups ymm0, [rsp+4B0h+var_440]
      vmovups [rsp+4B0h+var_460], ymm0
    }
    R_AddRenderTargetTransition(state, &v55, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(state);
    R_SetDepthBoundsDisable(state);
    R_GPU_EndTimer();
    R_ProfEndNamedEvent(state);
    R_ShutdownLocalCmdBufState(state, &v28->input);
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
  unsigned int v10; 
  GfxShaderBufferRWView *v11; 
  unsigned int v12; 
  __int64 v13; 
  const GfxCompressedSunShadowSetup *v19; 
  GfxCompressedSunShadowAlgorithm *Algorithm; 
  const ComputeShader **Shaders; 
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v23; 
  unsigned int v24; 
  __int64 v25; 
  const GfxCompressedSunShadowSetup *v30; 
  GfxCompressedSunShadowAlgorithm *v31; 
  ComputeShader **v32; 
  const R_RT_Surface *v33; 
  const R_RT_Surface *v34; 
  const R_RT_Surface *v35; 
  const GfxCompressedSunShadowSetup *v42; 
  GfxCompressedSunShadowAlgorithm *v43; 
  ComputeShader **v44; 
  const R_RT_Surface *v45; 
  const R_RT_Surface *v46; 
  unsigned int v50; 
  const GfxCompressedSunShadowSetup *v56; 
  GfxCompressedSunShadowAlgorithm *v57; 
  ComputeShader **v58; 
  const R_RT_Surface *v59; 
  const R_RT_Surface *v60; 
  const R_RT_Surface *v61; 
  GfxShaderBufferRWView *p_rwView; 
  GfxShaderBufferRWView *views; 
  GfxTexture *v65[2]; 
  R_RT_Handle v66; 
  GfxTexture *Resident; 
  GfxTexture *v68; 
  const GfxCompressedSunShadowSetup *Setup; 
  R_RT_Handle v70; 
  R_RT_Handle v71; 
  GfxTexture *v72; 
  R_RT_DepthHandle *v73; 

  v73 = depthBackRt;
  v72 = (GfxTexture *)depthRt;
  _R13 = depthBackRt;
  _R12 = depthRt;
  Setup = R_CompressedSunShadow_GetSetup();
  if ( (R_RT_Handle::GetSurface(_R12)->m_image.m_base.width != Setup->m_downsampleRatio * Setup->m_shadowMapResolution || R_RT_Handle::GetSurface(_R13)->m_image.m_base.width != Setup->m_downsampleRatio * Setup->m_shadowMapResolution) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sunshadow.cpp", 234, ASSERT_TYPE_ASSERT, "(depthRt.GetWidth() == cssSetup->m_shadowMapResolution * cssSetup->m_downsampleRatio && depthBackRt.GetWidth() == cssSetup->m_shadowMapResolution * cssSetup->m_downsampleRatio)", (const char *)&queryFormat, "depthRt.GetWidth() == cssSetup->m_shadowMapResolution * cssSetup->m_downsampleRatio && depthBackRt.GetWidth() == cssSetup->m_shadowMapResolution * cssSetup->m_downsampleRatio") )
    __debugbreak();
  v10 = 0;
  v11 = (GfxShaderBufferRWView *)compressedSunShadow;
  v12 = Setup->m_layersCount - 1;
  if ( Setup->m_layersCount != 1 )
  {
    v13 = 20i64;
    do
    {
      _RAX = nodesBuffer;
      __asm
      {
        vmovups ymm1, ymmword ptr [r13+0]
        vmovups ymmword ptr [rbp+47h+var_50.m_surfaceID], ymm1
        vmovups ymm0, ymmword ptr [rax]
      }
      _RAX = v72;
      __asm
      {
        vmovups ymmword ptr [rbp+47h+var_B0.m_surfaceID], ymm0
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rbp+47h+var_70.m_surfaceID], ymm0
      }
      v19 = R_CompressedSunShadow_GetSetup();
      Algorithm = (GfxCompressedSunShadowAlgorithm *)R_CompressedSunShadow_GetAlgorithm(v19->m_algorithmId);
      Shaders = (const ComputeShader **)GfxCompressedSunShadowAlgorithm::GetShaders(Algorithm);
      R_SetComputeShader(computeState, *Shaders);
      Surface = R_RT_Handle::GetSurface(&v70);
      compressedSunShadow = (const GfxShaderBufferRWView *)R_Texture_GetResident(Surface->m_image.m_base.textureId);
      R_SetComputeTextures(computeState, 0, 1, (const GfxTexture *const *)&compressedSunShadow);
      v23 = R_RT_Handle::GetSurface(&v71);
      v65[0] = (GfxTexture *)R_Texture_GetResident(v23->m_image.m_base.textureId);
      R_SetComputeTextures(computeState, 1, 1, (const GfxTexture *const *)v65);
      views = (GfxShaderBufferRWView *)R_RT_Handle::GetSurface(&v66);
      if ( ((__int64)views->rwCounterResource & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
        __debugbreak();
      views = (GfxShaderBufferRWView *)((char *)views + 1112);
      R_SetComputeRWViewsWithCounters(computeState, 0, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
      views = v11;
      R_SetComputeRWViewsWithCounters(computeState, 1, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
      R_CompressSunShadow_SetConstants(computeState, v10, constantBuffer);
      R_Dispatch(computeState, (*(unsigned int *)((char *)&v19->m_shadowMapResolution + v13) + 63) >> 6, 1u, 1u);
      R_ComputeWaitForCompute(computeState, PIPE_FLUSH_PARTIAL);
      _R13 = v73;
      ++v10;
      v13 += 4i64;
    }
    while ( v10 < v12 );
    _R12 = (R_RT_Handle *)v72;
  }
  if ( v12 )
  {
    v24 = v12 - 1;
    LODWORD(compressedSunShadow) = v12 - 1;
    v25 = 4i64 * v12 + 20;
    while ( 1 )
    {
      --v12;
      v25 -= 4i64;
      if ( v12 == v24 )
      {
        _RAX = nodesBuffer;
        __asm
        {
          vmovups ymm1, ymmword ptr [r13+0]
          vmovups ymmword ptr [rbp+47h+var_50.m_surfaceID], ymm1
          vmovups ymm0, ymmword ptr [rax]
          vmovups ymmword ptr [rbp+47h+var_70.m_surfaceID], ymm0
          vmovups ymm0, ymmword ptr [r12]
          vmovups ymmword ptr [rbp+47h+var_B0.m_surfaceID], ymm0
        }
        v30 = R_CompressedSunShadow_GetSetup();
        v31 = (GfxCompressedSunShadowAlgorithm *)R_CompressedSunShadow_GetAlgorithm(v30->m_algorithmId);
        v32 = GfxCompressedSunShadowAlgorithm::GetShaders(v31);
        R_SetComputeShader(computeState, v32[3]);
        v33 = R_RT_Handle::GetSurface(&v66);
        views = (GfxShaderBufferRWView *)R_Texture_GetResident(v33->m_image.m_base.textureId);
        R_SetComputeTextures(computeState, 0, 1, (const GfxTexture *const *)&views);
        v34 = R_RT_Handle::GetSurface(&v71);
        v65[0] = (GfxTexture *)R_Texture_GetResident(v34->m_image.m_base.textureId);
        R_SetComputeTextures(computeState, 1, 1, (const GfxTexture *const *)v65);
        v35 = R_RT_Handle::GetSurface(&v70);
        if ( (v35->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
          __debugbreak();
        p_rwView = &v35->m_buffer.m_wrappedBuffer.rwView;
        R_SetComputeRWViewsWithCounters(computeState, 0, 1, (const GfxShaderBufferRWView *const *)&p_rwView, NULL);
        p_rwView = v11;
        R_SetComputeRWViewsWithCounters(computeState, 1, 1, (const GfxShaderBufferRWView *const *)&p_rwView, NULL);
        R_CompressSunShadow_SetConstants(computeState, v12, constantBuffer);
        R_Dispatch(computeState, ((*(unsigned int *)((char *)&v30->m_shadowMapResolution + v25) >> 2) + 63) >> 6, 1u, 1u);
      }
      else
      {
        _R12 = nodesBuffer;
        __asm
        {
          vmovups ymm0, ymmword ptr [r12]
          vmovups ymmword ptr [rbp+47h+var_B0.m_surfaceID], ymm0
        }
        R_CompressSunShadow_PrepareDataLayout(computeState, constantBuffer, (R_RT_BufferHandle *)&v66, v11, v12);
        R_ComputeWaitForCompute(computeState, PIPE_FLUSH_PARTIAL);
        __asm { vmovups ymm0, ymmword ptr [r12] }
        _RAX = v72;
        __asm
        {
          vmovups ymm1, ymmword ptr [r13+0]
          vmovups ymmword ptr [rbp+47h+var_70.m_surfaceID], ymm0
          vmovups ymmword ptr [rbp+47h+var_50.m_surfaceID], ymm1
          vmovups ymm0, ymmword ptr [rax]
          vmovups ymmword ptr [rbp+47h+var_B0.m_surfaceID], ymm0
        }
        v42 = R_CompressedSunShadow_GetSetup();
        v43 = (GfxCompressedSunShadowAlgorithm *)R_CompressedSunShadow_GetAlgorithm(v42->m_algorithmId);
        v44 = GfxCompressedSunShadowAlgorithm::GetShaders(v43);
        R_SetComputeShader(computeState, v44[3]);
        v45 = R_RT_Handle::GetSurface(&v66);
        Resident = (GfxTexture *)R_Texture_GetResident(v45->m_image.m_base.textureId);
        R_SetComputeTextures(computeState, 0, 1, (const GfxTexture *const *)&Resident);
        v46 = R_RT_Handle::GetSurface(&v71);
        v68 = (GfxTexture *)R_Texture_GetResident(v46->m_image.m_base.textureId);
        R_SetComputeTextures(computeState, 1, 1, (const GfxTexture *const *)&v68);
        p_rwView = (GfxShaderBufferRWView *)R_RT_Handle::GetSurface(&v70);
        if ( ((__int64)p_rwView->rwCounterResource & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
          __debugbreak();
        p_rwView = (GfxShaderBufferRWView *)((char *)p_rwView + 1112);
        R_SetComputeRWViewsWithCounters(computeState, 0, 1, (const GfxShaderBufferRWView *const *)&p_rwView, NULL);
        p_rwView = v11;
        R_SetComputeRWViewsWithCounters(computeState, 1, 1, (const GfxShaderBufferRWView *const *)&p_rwView, NULL);
        R_CompressSunShadow_SetConstants(computeState, v12, constantBuffer);
        R_Dispatch(computeState, ((*(unsigned int *)((char *)&v42->m_shadowMapResolution + v25) >> 2) + 63) >> 6, 1u, 1u);
        R_ComputeWaitForCompute(computeState, PIPE_FLUSH_PARTIAL);
        __asm
        {
          vmovups ymm0, ymmword ptr [r12]
          vmovups ymmword ptr [rbp+47h+var_B0.m_surfaceID], ymm0
        }
        R_CompressSunShadow_ResetDataLayout(computeState, constantBuffer, (R_RT_BufferHandle *)&v66, v11, v12);
      }
      R_ComputeWaitForCompute(computeState, PIPE_FLUSH_PARTIAL);
      v24 = (unsigned int)compressedSunShadow;
      _R13 = v73;
      if ( !v12 )
        break;
      _R12 = (R_RT_Handle *)v72;
    }
  }
  _RDI = nodesBuffer;
  __asm { vmovups ymm0, ymmword ptr [rdi] }
  v50 = Setup->m_layersCount - 1;
  __asm { vmovups ymmword ptr [rbp+47h+var_B0.m_surfaceID], ymm0 }
  R_CompressSunShadow_PrepareDataLayout(computeState, constantBuffer, (R_RT_BufferHandle *)&v66, v11, v50);
  R_ComputeWaitForCompute(computeState, PIPE_FLUSH_PARTIAL);
  __asm { vmovups ymm0, ymmword ptr [rdi] }
  _RAX = v73;
  __asm
  {
    vmovups ymmword ptr [rbp+47h+var_70.m_surfaceID], ymm0
    vmovups ymm1, ymmword ptr [rax]
  }
  _RAX = v72;
  __asm
  {
    vmovups ymmword ptr [rbp+47h+var_50.m_surfaceID], ymm1
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbp+47h+var_B0.m_surfaceID], ymm0
  }
  v56 = R_CompressedSunShadow_GetSetup();
  v57 = (GfxCompressedSunShadowAlgorithm *)R_CompressedSunShadow_GetAlgorithm(v56->m_algorithmId);
  v58 = GfxCompressedSunShadowAlgorithm::GetShaders(v57);
  R_SetComputeShader(computeState, v58[3]);
  v59 = R_RT_Handle::GetSurface(&v66);
  v72 = (GfxTexture *)R_Texture_GetResident(v59->m_image.m_base.textureId);
  R_SetComputeTextures(computeState, 0, 1, (const GfxTexture *const *)&v72);
  v60 = R_RT_Handle::GetSurface(&v71);
  v72 = (GfxTexture *)R_Texture_GetResident(v60->m_image.m_base.textureId);
  R_SetComputeTextures(computeState, 1, 1, (const GfxTexture *const *)&v72);
  v61 = R_RT_Handle::GetSurface(&v70);
  if ( (v61->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v72 = (GfxTexture *)&v61->m_array.m_handles[1];
  R_SetComputeRWViewsWithCounters(computeState, 0, 1, (const GfxShaderBufferRWView *const *)&v72, NULL);
  v72 = (GfxTexture *)v11;
  R_SetComputeRWViewsWithCounters(computeState, 1, 1, (const GfxShaderBufferRWView *const *)&v72, NULL);
  R_CompressSunShadow_SetConstants(computeState, v50, constantBuffer);
  R_Dispatch(computeState, ((v56->m_layerNodesCount[v50] >> 2) + 63) >> 6, 1u, 1u);
  R_ComputeWaitForCompute(computeState, PIPE_FLUSH_PARTIAL);
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi]
    vmovups ymmword ptr [rbp+47h+var_B0.m_surfaceID], ymm0
  }
  R_CompressSunShadow_ResetDataLayout(computeState, constantBuffer, (R_RT_BufferHandle *)&v66, v11, v50);
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
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v16; 
  const R_RT_Surface *v17; 
  const GfxCompressedSunShadowSetup *Setup; 
  unsigned int v19; 
  CompressShadowMapResources outResources; 
  R_RT_Handle v23; 
  R_RT_Handle v24; 
  R_RT_Handle v25; 

  _RDI = depthRt;
  _RBX = depthBackRt;
  RB_CompressSunShadow_InitResources(computeState, constantBuffer, &outResources);
  v10 = compressedSunShadow;
  R_HW_AddResourceTransition(computeState, compressedSunShadow, 0, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr [rsp+0C8h+outResources.m_nodesBuffer.baseclass_0.m_surfaceID]
    vmovups ymmword ptr [rsp+0C8h+var_78.m_surfaceID], ymm0
  }
  R_HW_AddResourceTransition(computeState, &v23, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(computeState);
  __asm
  {
    vmovups ymm0, ymmword ptr [rsp+0C8h+outResources.m_nodesBuffer.baseclass_0.m_surfaceID]
    vmovups ymm1, ymmword ptr [rdi]
    vmovups ymmword ptr [rsp+0C8h+var_38.m_surfaceID], ymm0
    vmovups ymm0, ymmword ptr [rbx]
    vmovups ymmword ptr [rsp+0C8h+var_58.m_surfaceID], ymm0
    vmovups ymmword ptr [rsp+0C8h+var_78.m_surfaceID], ymm1
  }
  R_SetComputeShader(computeState, rgp.compressShadowMapIntervals[4]);
  Surface = R_RT_Handle::GetSurface(&v23);
  compressedSunShadow = (const GfxShaderBufferRWView *)R_Texture_GetResident(Surface->m_image.m_base.textureId);
  R_SetComputeTextures(computeState, 0, 1, (const GfxTexture *const *)&compressedSunShadow);
  v16 = R_RT_Handle::GetSurface(&v24);
  compressedSunShadow = (const GfxShaderBufferRWView *)R_Texture_GetResident(v16->m_image.m_base.textureId);
  R_SetComputeTextures(computeState, 1, 1, (const GfxTexture *const *)&compressedSunShadow);
  v17 = R_RT_Handle::GetSurface(&v25);
  if ( (v17->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  compressedSunShadow = &v17->m_buffer.m_wrappedBuffer.rwView;
  R_SetComputeRWViewsWithCounters(computeState, 0, 1, &compressedSunShadow, NULL);
  compressedSunShadow = v10;
  R_SetComputeRWViewsWithCounters(computeState, 1, 1, &compressedSunShadow, NULL);
  R_CompressSunShadow_SetConstants(computeState, copyDepthBack, constantBuffer);
  Setup = R_CompressedSunShadow_GetSetup();
  v19 = (Setup->m_shadowMapResolution * Setup->m_downsampleRatio + 7) >> 3;
  R_Dispatch(computeState, v19, v19, 1u);
  R_ComputeWaitForCompute(computeState, PIPE_FLUSH_PARTIAL);
  R_HW_AddResourceTransition(computeState, v10, 0, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr [rsp+0C8h+outResources.m_nodesBuffer.baseclass_0.m_surfaceID]
    vmovups ymmword ptr [rsp+0C8h+var_38.m_surfaceID], ymm0
  }
  R_HW_AddResourceTransition(computeState, &v25, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(computeState);
  __asm
  {
    vmovups ymm0, ymmword ptr [rsp+0C8h+outResources.m_nodesBuffer.baseclass_0.m_surfaceID]
    vmovups ymmword ptr [rsp+0C8h+var_38.m_surfaceID], ymm0
  }
  R_RT_DestroyInternal(&v25);
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
  CompressShadowMapResources outResources; 
  R_RT_BufferHandle v14; 
  R_RT_DepthHandle v15; 
  R_RT_Handle v16; 

  _RSI = depthRt;
  _RBX = depthBackRt;
  RB_CompressSunShadow_InitResources(computeState, constantBuffer, &outResources);
  R_HW_AddResourceTransition(computeState, compressedSunShadow, 0, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(computeState);
  __asm
  {
    vmovups ymm0, ymmword ptr [rsp+0B8h+outResources.m_nodesBuffer.baseclass_0.m_surfaceID]
    vmovups ymm1, ymmword ptr [rsi]
    vmovups [rsp+0B8h+var_68], ymm0
    vmovups ymm0, ymmword ptr [rbx]
    vmovups [rsp+0B8h+var_48], ymm0
    vmovups [rsp+0B8h+var_28], ymm1
  }
  R_CompressSunShadow(computeState, constantBuffer, (R_RT_DepthHandle *)&v16, &v15, &v14, compressedSunShadow);
  R_HW_AddResourceTransition(computeState, compressedSunShadow, 0, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(computeState);
  __asm
  {
    vmovups ymm0, ymmword ptr [rsp+0B8h+outResources.m_nodesBuffer.baseclass_0.m_surfaceID]
    vmovups [rsp+0B8h+var_28], ymm0
  }
  R_RT_DestroyInternal(&v16);
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
  __int64 v4; 
  const GfxCompressedSunShadowSetup *Setup; 
  int v15; 
  int v16; 
  int data[10]; 
  __int64 v18; 

  v4 = currentLayer;
  Setup = R_CompressedSunShadow_GetSetup();
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000
    vxorps  xmm1, xmm1, xmm1
  }
  data[0] = Setup->m_shadowMapResolution;
  data[1] = Setup->m_layersCount;
  data[2] = Setup->m_totalNodesCount;
  data[3] = Setup->m_compressedShadowMapMaxSize;
  __asm
  {
    vcvtsi2ss xmm1, xmm1, r8
    vdivss  xmm0, xmm2, xmm1
    vmovss  [rsp+88h+var_58], xmm0
  }
  data[4] = v4;
  data[5] = Setup->m_layerNodesCount[v4];
  data[6] = Setup->m_layerNodesOffset[v4];
  data[7] = v15;
  data[8] = Setup->m_downsampleRatio;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rcx
    vmulss  xmm1, xmm0, xmm1
    vdivss  xmm1, xmm2, xmm1
    vmovss  [rsp+88h+var_54], xmm1
  }
  data[9] = v16;
  v18 = 0i64;
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
  BOOL v5; 
  GfxCmdBufState *state; 
  __int64 v16; 
  GfxCmdBufContext v23; 
  GfxViewParms result; 
  GfxViewParms v25; 

  _RBX = gfxContext->source;
  _RSI = viewInfo;
  v5 = genTransmittance;
  _R14 = gfxContext;
  R_BeginViewInternal(gfxContext->source, &viewInfo->sceneDef, (const GfxViewParms *)viewInfo, &viewInfo->viewParmsSet.frames[1].viewParms);
  R_MaskSourceState(_RBX, _RSI, GLOBAL_LIGHTING_FLAG_HEIGHTFIELD|GLOBAL_LIGHTING_FLAG_SUN_SHADOW_FORWARD|GLOBAL_LIGHTING_FLAG_LIGHT_DATA);
  __asm
  {
    vmovups xmm0, xmmword ptr [rsi+634h]
    vmovss  xmm2, cs:__real@3f7c0000; depthBoundsMax
    vmovss  xmm1, cs:__real@322bcc77; depthBoundsMin
    vmovups xmmword ptr [rbx+0FD0h], xmm0
  }
  ++_RBX->constVersions[141];
  state = _R14->state;
  R_SetDepthBoundsEnable(state, *(const float *)&_XMM1, *(const float *)&_XMM2);
  __asm
  {
    vmovups xmm0, xmmword ptr [r14]
    vmovups [rsp+378h+var_348], xmm0
  }
  R_SunVisibilityPixelPass(&v23, SUNSHADOW_VISIBILITY_MATERIAL_DISTANCE_DEFAULT, (SunshadowVisibilityMaterialTransmittanceType)v5, (const GfxViewParms *)_RSI, &_RSI->sceneViewport);
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000; depthBoundsMax
    vmovss  xmm1, cs:__real@3f7c0000; depthBoundsMin
  }
  R_SetDepthBoundsEnable(state, *(const float *)&_XMM1, *(const float *)&_XMM2);
  _RAX = R_GetDepthHackViewParms(&result, (const GfxViewParms *)_RSI);
  _RDX = &v25;
  v16 = 3i64;
  do
  {
    _RDX = (GfxViewParms *)((char *)_RDX + 128);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups xmm1, xmmword ptr [rax+70h]
    }
    _RAX = (GfxViewParms *)((char *)_RAX + 128);
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
    --v16;
  }
  while ( v16 );
  __asm
  {
    vmovups xmm0, xmmword ptr [r14]
    vmovups [rsp+378h+var_348], xmm0
  }
  R_SunVisibilityPixelPass(&v23, SUNSHADOW_VISIBILITY_MATERIAL_DISTANCE_VIEWMODEL, (SunshadowVisibilityMaterialTransmittanceType)v5, &v25, &_RSI->sceneViewport);
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
  materialCommands_t *Tess; 
  materialCommands_t *v19; 
  float fmt; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  GfxCmdBufContext v29; 

  source = gfxContext->source;
  _RDI = gfxContext;
  __asm
  {
    vmovups xmm0, xmmword ptr [rcx]
    vxorps  xmm1, xmm1, xmm1
  }
  source->input.consts[7] = viewParms->viewProjectionMatrix.m.m[0];
  ++source->constVersions[7];
  source->input.consts[8] = viewParms->viewProjectionMatrix.m.row1;
  ++source->constVersions[8];
  source->input.consts[9] = viewParms->viewProjectionMatrix.m.row2;
  ++source->constVersions[9];
  source->input.consts[10] = viewParms->viewProjectionMatrix.m.row3;
  ++source->constVersions[10];
  __asm
  {
    vxorps  xmm3, xmm3, xmm3
    vcvtsi2ss xmm3, xmm3, rax
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, rax
    vmovups xmmword ptr [rsp+88h+var_18.source], xmm0
    vmovss  xmm0, cs:__real@3f800000
    vmovss  [rsp+88h+var_30], xmm0
    vmovss  [rsp+88h+var_38], xmm0
    vmovss  [rsp+88h+var_40], xmm1
    vmovss  [rsp+88h+var_48], xmm1
    vmovss  [rsp+88h+var_50], xmm3
    vmovss  [rsp+88h+var_58], xmm2
    vmovss  dword ptr [rsp+88h+var_60], xmm1
    vmovss  dword ptr [rsp+88h+fmt], xmm1
  }
  RB_ViewportFilterDirectInternal(&v29, rgp.sunshadowVisibilityMaterial[distanceIndex][transmittanceIndex], 0xFFFFFFFF, viewport, fmt, v22, v23, v24, v25, v26, v27, v28, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sunshadow.cpp(588)");
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vmovups xmmword ptr [rsp+88h+var_18.source], xmm0
  }
  Tess = R_GetTess(&v29);
  v19 = Tess;
  if ( Tess->vertexCount )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rdi]
      vmovups xmmword ptr [rsp+88h+var_18.source], xmm0
    }
    RB_EndTessSurfaceInternal(&v29, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h(162)");
  }
  else
  {
    if ( Tess->indexCount )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 166, ASSERT_TYPE_ASSERT, "(tess.indexCount == 0)", (const char *)&queryFormat, "tess.indexCount == 0") )
        __debugbreak();
    }
    v19->viewStatsTarget = GFX_VIEW_STATS_INVALID;
    v19->primStatsTarget = GFX_PRIM_STATS_INVALID;
  }
}

/*
==============
R_Sunshadow_ClearTranslucent
==============
*/
void R_Sunshadow_ClearTranslucent(ComputeCmdBufState *state, const GfxViewInfo *viewInfo, const GfxBackEndData *data, R_RT_ColorHandle *transShadowTexture)
{
  const R_RT_Surface *Surface; 
  unsigned int transShadowBoundsCountPrevFrame; 
  Bounds *transShadowBoundsPrevFrame; 
  __int64 v16; 
  int v39; 
  __int64 v40; 
  unsigned int v41; 
  unsigned int v45; 
  __int64 v52; 
  int v58; 
  GfxTexture *v59; 
  unsigned int v60; 
  unsigned int i; 
  int basemap; 
  unsigned int v63; 
  int v64; 
  __int64 v65; 
  unsigned int v66; 
  __int64 v67; 
  __int64 v68; 
  GfxTexture *textures; 
  __int64 v70; 
  ComputeCmdBufState *statea; 
  _OWORD dataa[256]; 
  _DWORD v73[32]; 

  statea = state;
  R_SetComputeShader(state, rgp.sunvisTransShadowClearTranslucent);
  Surface = R_RT_Handle::GetSurface(transShadowTexture);
  textures = (GfxTexture *)R_Texture_GetResident(Surface->m_image.m_base.textureId);
  R_SetComputeRWTextures(state, 0, 1, (const GfxTexture *const *)&textures);
  memset_0(v73, 0, sizeof(v73));
  transShadowBoundsCountPrevFrame = data->transShadowBoundsCountPrevFrame;
  if ( transShadowBoundsCountPrevFrame )
  {
    __asm { vmovaps [rsp+1178h+var_48], xmm6 }
    transShadowBoundsPrevFrame = data->transShadowBoundsPrevFrame;
    __asm { vmovaps [rsp+1178h+var_58], xmm7 }
    v16 = transShadowBoundsCountPrevFrame;
    __asm
    {
      vmovaps [rsp+1178h+var_68], xmm8
      vmovaps [rsp+1178h+var_78], xmm9
      vmovss  xmm9, cs:__real@3f7fbe77
      vmovaps [rsp+1178h+var_88], xmm10
      vmovss  xmm10, cs:__real@42000000
    }
    do
    {
      v70 = *(_QWORD *)transShadowBoundsPrevFrame->halfSize.v;
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+1178h+var_1130]; val
        vmovaps xmm2, xmm9; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      textures = *(GfxTexture **)transShadowBoundsPrevFrame->midPoint.v;
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmulss  xmm6, xmm0, xmm10
        vmovss  xmm0, dword ptr [rsp+1178h+var_1130+4]; val
        vmovaps xmm2, xmm9; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmulss  xmm8, xmm0, xmm10
        vmovss  xmm0, dword ptr [rsp+1178h+textures]; val
        vmovaps xmm2, xmm9; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmulss  xmm7, xmm0, xmm10
        vmovss  xmm0, dword ptr [rsp+1178h+textures+4]; val
        vmovaps xmm2, xmm9; max
        vxorps  xmm1, xmm1, xmm1; min
        vcvttss2si rbx, xmm6
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      _ER8 = 0;
      __asm
      {
        vcvttss2si r10, xmm7
        vmulss  xmm1, xmm0, xmm10
        vcvttss2si rdx, xmm1
        vcvttss2si r9, xmm8
      }
      if ( (unsigned int)_R10 <= (unsigned int)_RBX )
      {
        v39 = __ROL4__(1, _R10);
        v40 = (unsigned int)(_RBX - _R10 + 1);
        do
        {
          _ER8 |= v39;
          v39 = __ROL4__(v39, 1);
          --v40;
        }
        while ( v40 );
      }
      v41 = _R9 - _RDX + 1;
      __asm
      {
        vmovd   xmm2, r8d
        vpshufd xmm2, xmm2, 0
      }
      if ( (unsigned int)_RDX <= (unsigned int)_R9 )
      {
        if ( v41 >= 0x10 )
        {
          _R10 = (unsigned int)(_RDX + 8);
          v45 = _R9 - (v41 & 0xF);
          do
          {
            _RAX = (unsigned int)_RDX;
            LODWORD(_RDX) = _RDX + 16;
            __asm
            {
              vpor    xmm1, xmm2, xmmword ptr [rsp+rax*4+1178h+var_118]
              vmovdqu xmmword ptr [rsp+rax*4+1178h+var_118], xmm1
            }
            _RAX = (unsigned int)(_R10 - 4);
            __asm
            {
              vpor    xmm1, xmm2, xmmword ptr [rsp+rax*4+1178h+var_118]
              vmovdqu xmmword ptr [rsp+rax*4+1178h+var_118], xmm1
            }
            _RAX = (unsigned int)(_R10 + 4);
            __asm
            {
              vpor    xmm1, xmm2, xmmword ptr [rsp+r10*4+1178h+var_118]
              vmovdqu xmmword ptr [rsp+r10*4+1178h+var_118], xmm1
            }
            _R10 = (unsigned int)(_R10 + 16);
            __asm
            {
              vpor    xmm1, xmm2, xmmword ptr [rsp+rax*4+1178h+var_118]
              vmovdqu xmmword ptr [rsp+rax*4+1178h+var_118], xmm1
            }
          }
          while ( (unsigned int)_RDX <= v45 );
        }
        for ( ; (unsigned int)_RDX <= (unsigned int)_R9; v73[v52] |= _ER8 )
        {
          v52 = (unsigned int)_RDX;
          LODWORD(_RDX) = _RDX + 1;
        }
      }
      ++transShadowBoundsPrevFrame;
      --v16;
    }
    while ( v16 );
    __asm
    {
      vmovaps xmm10, [rsp+1178h+var_88]
      vmovaps xmm9, [rsp+1178h+var_78]
      vmovaps xmm8, [rsp+1178h+var_68]
      vmovaps xmm7, [rsp+1178h+var_58]
      vmovaps xmm6, [rsp+1178h+var_48]
    }
  }
  memset_0(dataa, 0, sizeof(dataa));
  v58 = 0;
  v59 = (GfxTexture *)v73;
  v60 = 0;
  textures = (GfxTexture *)v73;
  for ( i = 0; i < 0x20; ++i )
  {
    basemap = (int)v59->basemap;
    if ( LODWORD(v59->basemap) )
    {
      v63 = 0;
      v64 = 1;
      do
      {
        if ( (v64 & basemap) != 0 )
        {
          if ( (unsigned int)v58 >= 4 )
          {
            LODWORD(v68) = 4;
            LODWORD(v67) = v58;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vec_types.h", 61, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v67, v68) )
              __debugbreak();
          }
          v65 = v58;
          v58 = ((_BYTE)v58 + 1) & 3;
          *((_DWORD *)&dataa[(unsigned __int64)v60++ >> 2] + v65) = i | (v63 << 16);
        }
        ++v63;
        v64 = __ROL4__(v64, 1);
      }
      while ( v63 < 0x20 );
      v59 = textures;
    }
    v59 = (GfxTexture *)((char *)v59 + 4);
    textures = v59;
  }
  R_UploadAndSetComputeConstants(statea, 2, dataa, 0x1000u, NULL);
  v66 = v60 + 1;
  if ( v60 )
    v66 = v60;
  R_Dispatch(statea, 16 * v66, 1u, 1u);
}

/*
==============
R_Sunshadow_DrawOverlay
==============
*/
void R_Sunshadow_DrawOverlay(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, int overlayType, const R_RT_Handle *shadowCascades, unsigned int cascadeCount, const R_RT_Handle *viewmodelShadowCascade, const R_RT_DepthHandle *sunshadowCacheRt, R_RT_Handle *compressedCascades, R_RT_BufferHandle *csmPrepass, const R_RT_Handle *sunshadowTranslucentMask)
{
  GfxCmdBufSourceState *v21; 
  const GfxWrappedRWBuffer *WrappedBuffer; 
  __int64 v48; 
  const GfxWrappedRWBuffer *v49; 
  unsigned int v51; 
  bool v55; 
  __int64 v56; 
  R_RT_Image *p_m_image; 
  R_RT_Handle *v70; 
  GfxWrappedRWBuffer *p_compressedSunShadowBuffer; 
  __int64 p_input; 
  GfxCmdBufInput *v76; 
  GfxWrappedRWBuffer *v77; 
  GfxCmdBufInput *v78; 
  GfxWrappedRWBuffer *v79; 
  bool v80; 
  bool v81; 
  GfxCmdBufSourceState *v85; 
  R_RT_Image *v86; 
  R_RT_Image *v92; 
  unsigned int v98; 
  unsigned int v99; 
  __int64 v107; 
  __int64 v132; 
  unsigned int v169; 
  unsigned int v177; 
  unsigned int v214; 
  unsigned int v254; 
  unsigned int v255; 
  unsigned int v277; 
  GfxSunShadowOverlayLines *p_overlay; 
  __int64 v280; 
  float *v281; 
  GfxCmdBufSourceState *p_y; 
  unsigned int v283; 
  unsigned int v287; 
  unsigned int v288; 
  unsigned int v289; 
  unsigned int v290; 
  int v291; 
  __int64 v292; 
  float *v293; 
  vec2_t *v366; 
  signed int v450; 
  signed int v451; 
  R_RT_Handle *v453; 
  const GfxWrappedRWBuffer *v463; 
  GfxCmdBufSourceState *v464; 
  const GfxWrappedRWBuffer *v465; 
  const GfxWrappedRWBuffer *v466; 
  __int64 v467; 
  unsigned int v473; 
  unsigned int v478; 
  __int64 v479; 
  bool v480; 
  GfxCmdBufSourceState *p_row2; 
  unsigned int v484; 
  const R_RT_Surface *Surface; 
  unsigned int v496; 
  unsigned int m_shadowMapResolution; 
  const GfxCompressedSunShadowSetup *Setup; 
  GfxFont *debugFont; 
  const char *v509; 
  const R_RT_Surface *v515; 
  __int64 unsignedInt; 
  __int64 v522; 
  GfxCachedSunShadow *CachedSunShadowParititionHead; 
  unsigned int tileActiveCount; 
  int v526; 
  GfxCachedSunShadow *v527; 
  int v528; 
  unsigned __int8 v530; 
  int partitionIndex; 
  signed int gridX; 
  int v533; 
  signed int gridY; 
  int v535; 
  unsigned int v536; 
  unsigned int v544; 
  unsigned int v546; 
  GfxCachedSunShadow *v547; 
  unsigned int EntryDebugId; 
  __int64 v550; 
  bool bspOnly; 
  unsigned int v552; 
  char v553; 
  unsigned __int8 v554; 
  int v555; 
  __int64 v556; 
  unsigned __int8 v557; 
  unsigned __int8 v558; 
  vec4_t *v560; 
  unsigned __int8 v569; 
  unsigned __int8 v574; 
  unsigned __int8 v579; 
  unsigned __int8 v584; 
  unsigned __int8 v589; 
  unsigned __int8 v594; 
  unsigned __int8 v598; 
  unsigned __int8 v603; 
  char v612; 
  char v619; 
  char v626; 
  char v633; 
  bool v653; 
  unsigned int cachedSunShadowIndex; 
  R_RT_Image *v666; 
  bool v667; 
  bool v668; 
  char v677; 
  char v678; 
  GfxCmdBufState *v679; 
  GfxFont *v685; 
  const char *v686; 
  GfxFont *v689; 
  const char *v691; 
  GfxFont *v695; 
  const char *v696; 
  __int64 genBSP; 
  __int64 genSmodel; 
  GfxFont *v701; 
  const char *v703; 
  __int128 *v705; 
  GfxFont *v708; 
  const char *v709; 
  GfxFont *v712; 
  const char *v714; 
  GfxFont *v717; 
  const char *v719; 
  __int64 v722; 
  GfxFont *v724; 
  const char *v725; 
  __int64 v728; 
  GfxFont *v729; 
  const char *v730; 
  GfxFont *v733; 
  const char *v734; 
  float fmta; 
  char *fmt; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  float fmtg; 
  float fmth; 
  float fmti; 
  float fmtj; 
  float fmtk; 
  float fmtl; 
  float fmtm; 
  float fmtn; 
  float fmto; 
  float fmtp; 
  float fmtq; 
  float fmtr; 
  float fmts; 
  float w; 
  float wa; 
  float wb; 
  float wc; 
  float wd; 
  float we; 
  float wf; 
  float wg; 
  float v778; 
  float v779; 
  float v780; 
  float v781; 
  float v782; 
  float v783; 
  float v784; 
  float v785; 
  __int64 v786; 
  float v787; 
  float v788; 
  float v789; 
  float v790; 
  float v791; 
  float v792; 
  float v793; 
  __int64 v794; 
  float v795; 
  float v796; 
  float v797; 
  float v798; 
  float v799; 
  float v800; 
  float v801; 
  float v802; 
  float v803; 
  float v804; 
  float v805; 
  float v806; 
  float v807; 
  char v808; 
  unsigned int v810; 
  int v811; 
  unsigned int v812; 
  unsigned int v815; 
  unsigned int v816; 
  int v821; 
  unsigned int v824; 
  unsigned int v827; 
  GfxColor v830; 
  GfxColor v833; 
  unsigned int v838; 
  unsigned int v840; 
  int v843; 
  GfxCmdBufSourceState *source; 
  __int64 v846; 
  GfxSunShadow *p_sunShadow; 
  GfxCmdBufContext v848; 
  GfxCmdBufContext v849; 
  R_RT_Handle *v850; 
  const GfxViewInfo *v851; 
  R_RT_Handle *v852; 
  GfxCmdBufContext v853; 
  GfxCmdBufContext v854; 
  GfxCmdBufContext v855; 
  GfxCmdBufContext v856; 
  GfxCmdBufContext v857; 
  GfxCmdBufContext v858; 
  GfxCmdBufContext v859; 
  GfxCmdBufContext v860; 
  GfxCmdBufContext v861; 
  GfxCmdBufContext v862; 
  GfxCmdBufContext v863; 
  GfxCmdBufContext v864; 
  GfxCmdBufContext v865; 
  GfxCmdBufContext v866; 
  GfxCmdBufContext v867; 
  GfxCmdBufContext v868; 
  GfxCmdBufContext v869; 
  GfxCmdBufContext v870; 
  GfxCmdBufContext v871; 
  GfxCmdBufContext v872; 
  GfxCmdBufContext v873; 
  GfxCmdBufContext v874; 
  __int128 v875; 
  __int128 v876; 
  GfxCmdBufContext v877; 
  GfxCmdBufContext v878; 
  GfxCmdBufContext v879; 
  GfxCmdBufContext v880; 
  R_RT_Handle v881; 
  R_RT_DepthHandle v882; 
  GfxViewport scissorViewport; 
  GfxSunShadowOverlayLines *v884; 
  __int128 v885; 
  R_RT_Handle v886; 
  GfxSunShadowOverlayLines overlay; 
  GfxPointVertex v912; 
  int v916; 
  int v920; 
  int v924; 
  int v928; 
  int v932; 
  int v936; 
  int v940; 

  _R15 = gfxContext;
  v852 = &sunshadowCacheRt->R_RT_Handle;
  *(_QWORD *)&v885 = gfxContext;
  v21 = gfxContext->source;
  v850 = compressedCascades;
  v851 = viewInfo;
  v848.source = (GfxCmdBufSourceState *)sunshadowTranslucentMask;
  p_sunShadow = &backEndData->sunShadow;
  source = v21;
  if ( cascadeCount )
  {
    _RAX = sm_showOverlayDepthBounds;
    __asm
    {
      vmovups xmm0, xmmword ptr [r15]
      vmovss  xmm4, cs:__real@38d1b717
      vmovss  xmm2, dword ptr [rax+28h]
      vmovss  xmm3, dword ptr [rax+2Ch]
      vmovaps [rsp+10E8h+var_48], xmm6
      vmovaps [rsp+10E8h+var_58], xmm7
      vmovaps [rsp+10E8h+var_68], xmm8
      vmovss  xmm8, cs:__real@3f000000
      vmovaps [rsp+10E8h+var_78], xmm9
      vmovaps [rsp+10E8h+var_88], xmm10
      vmovaps [rsp+10E8h+var_98], xmm11
      vmovaps [rsp+10E8h+var_A8], xmm12
      vmovups xmmword ptr [rsp+10E8h+scissorViewport.x], xmm0
      vmovaps [rsp+10E8h+var_B8], xmm13
      vsubss  xmm0, xmm3, xmm2
      vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm0, xmm4
      vmovaps [rsp+10E8h+var_C8], xmm14
      vmovaps [rsp+10E8h+var_D8], xmm15
      vmovss  xmm10, cs:__real@3f800000
    }
    _RAX = *(_QWORD *)&scissorViewport.x;
    __asm
    {
      vsubss  xmm0, xmm3, xmm2
      vdivss  xmm1, xmm10, xmm0
      vmulss  xmm0, xmm1, xmm2
      vucomiss xmm1, dword ptr [rax+800h]
      vxorps  xmm3, xmm0, cs:__xmm@80000000800000008000000080000000
      vmovss  dword ptr [rax+800h], xmm1
      vmovss  dword ptr [rax+804h], xmm3
    }
    *(_DWORD *)(_RAX + 2056) = 1065353216;
    *(_DWORD *)(_RAX + 2060) = 1065353216;
    ++*(_WORD *)(_RAX + 10196);
    __asm
    {
      vxorps  xmm15, xmm15, xmm15
      vucomiss xmm15, dword ptr [rax+810h]
      vmovss  [rsp+10E8h+scissorViewport.x], xmm15
      vucomiss xmm15, dword ptr [rax+814h]
      vucomiss xmm15, dword ptr [rax+818h]
      vucomiss xmm15, dword ptr [rax+81Ch]
      vmovss  xmm3, cs:__real@40800000
      vxorps  xmm14, xmm14, xmm14
      vcvtsi2ss xmm14, xmm14, rax
      vmulss  xmm9, xmm14, cs:__real@3e800000
    }
    LODWORD(_RAX) = 4;
    __asm { vmovd   xmm1, eax }
    _RAX = sm_showOverlay;
    __asm
    {
      vmovss  [rsp+10E8h+var_1084], xmm14
      vxorps  xmm12, xmm12, xmm12
      vmovd   xmm0, dword ptr [rax+28h]
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm7, xmm15, xmm3, xmm2
      vucomiss xmm7, xmm3
      vmovss  dword ptr [rsp+10E8h+var_DE8], xmm7
    }
    if ( R_RT_Handle::IsValid(csmPrepass) )
    {
      WrappedBuffer = R_RT_Handle::GetWrappedBuffer(csmPrepass);
      v48 = (__int64)source;
      v49 = WrappedBuffer;
      if ( source == (GfxCmdBufSourceState *)-1792i64 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1494, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
          __debugbreak();
        v48 = -1792i64;
      }
      source->input.codeBuffers[43] = v49;
      __asm
      {
        vxorps  xmm12, xmm12, xmm12
        vcvtsi2ss xmm12, xmm12, dword ptr [rax+28h]
      }
    }
    else
    {
      v48 = (__int64)source;
    }
    v51 = 0;
    __asm
    {
      vmovss  xmm13, cs:__real@40000000
      vmovss  xmm11, cs:__real@42000000
      vaddss  xmm6, xmm9, xmm13
      vmovss  [rsp+10E8h+var_1058], xmm6
    }
    v55 = cascadeCount == 0;
    v56 = v48 + 1792;
    __asm { vaddss  xmm14, xmm9, xmm13 }
    do
    {
      __asm
      {
        vxorps  xmm6, xmm6, xmm6
        vcvtsi2ss xmm6, xmm6, rax
      }
      _RAX = _R15->source;
      __asm { vucomiss xmm7, dword ptr [rax+810h] }
      if ( !v55 )
        goto LABEL_14;
      __asm { vucomiss xmm6, dword ptr [rax+814h] }
      if ( !v55 )
        goto LABEL_14;
      __asm { vucomiss xmm12, dword ptr [rax+818h] }
      if ( !v55 )
        goto LABEL_14;
      __asm { vucomiss xmm15, dword ptr [rax+81Ch] }
      if ( !v55 )
      {
LABEL_14:
        __asm
        {
          vmovss  dword ptr [rax+810h], xmm7
          vmovss  dword ptr [rax+814h], xmm6
          vmovss  dword ptr [rax+818h], xmm12
        }
        _RAX->input.consts[17].v[3] = 0.0;
        ++_RAX->constVersions[17];
      }
      if ( v51 || !sm_showOverlayViewmodel->current.enabled )
        _RAX = &shadowCascades[v51];
      else
        _RAX = viewmodelShadowCascade;
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rsp+10E8h+var_E38.m_surfaceID], ymm0
      }
      p_m_image = &R_RT_Handle::GetSurface(&v881)->m_image;
      if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
        __debugbreak();
      if ( !v56 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
        __debugbreak();
      __asm
      {
        vmovups xmm0, xmmword ptr [r15]
        vmovss  [rsp+10E8h+var_10A0], xmm10
        vmovss  dword ptr [rsp+10E8h+var_10A8], xmm10
        vmovss  dword ptr [rsp+10E8h+var_10B0], xmm15
        vmulss  xmm1, xmm6, xmm14
        vmovss  dword ptr [rsp+10E8h+var_10B8], xmm15
      }
      *(_QWORD *)(v56 + 6176) = p_m_image;
      __asm
      {
        vmovss  [rsp+10E8h+w], xmm9
        vaddss  xmm2, xmm1, xmm11
        vmovaps xmm3, xmm11
        vmovss  dword ptr [rsp+10E8h+fmt], xmm9
        vmovups [rsp+10E8h+var_1028], xmm0
      }
      RB_DrawStretchPic(&v849, rgp.shadowOverlayMaterial, *(float *)&_XMM2, *(float *)&_XMM3, fmta, w, v778, v785, v793, v801, 0xFFFFFFFF, GFX_PRIM_STATS_HUD);
      __asm
      {
        vmovups xmm0, xmmword ptr [r15]
        vmovups [rsp+10E8h+var_FC8], xmm0
      }
      RB_EndTessSurfaceInternal(&v856, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sunshadow.cpp(972)");
      v55 = ++v51 == cascadeCount;
    }
    while ( v51 < cascadeCount );
    __asm { vmovss  xmm14, [rsp+10E8h+var_1084] }
    _R13 = p_sunShadow;
    v70 = (R_RT_Handle *)v848.source;
    __asm
    {
      vaddss  xmm6, xmm9, xmm13
      vucomiss xmm15, dword ptr [r13+4F28h]
      vmovss  xmm7, cs:__real@40400000
    }
    if ( v51 == cascadeCount )
    {
      v85 = source;
    }
    else
    {
      _RDI = _R15->source;
      p_compressedSunShadowBuffer = &g_worldDraw->compressedSunShadowBuffer;
      p_input = (__int64)&_R15->source->input;
      if ( _R15->source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1494, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
        __debugbreak();
      *(_QWORD *)(p_input + 7488) = p_compressedSunShadowBuffer;
      v76 = &_RDI->input;
      v77 = &g_worldDraw->compressedSunShadowBuffer;
      if ( _RDI == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1494, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      {
        __debugbreak();
        _RDI = _R15->source;
      }
      v76->codeBuffers[41] = v77;
      v78 = &_RDI->input;
      v79 = &g_worldDraw->compressedSunShadowBuffer;
      v80 = &_RDI->input == NULL;
      if ( _RDI == (GfxCmdBufSourceState *)-1792i64 )
      {
        v81 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1494, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input");
        v80 = !v81;
        if ( v81 )
        {
          __debugbreak();
          _RDI = _R15->source;
        }
      }
      __asm { vucomiss xmm7, dword ptr [rdi+810h] }
      v78->codeBuffers[42] = v79;
      __asm
      {
        vmovss  xmm0, dword ptr [r13+4F30h]
        vmovss  xmm1, dword ptr [r13+4F2Ch]
        vmovss  xmm2, dword ptr [r13+4F28h]
      }
      if ( !v80 )
        goto LABEL_40;
      __asm { vucomiss xmm2, dword ptr [rdi+814h] }
      if ( !v80 )
        goto LABEL_40;
      __asm { vucomiss xmm1, dword ptr [rdi+818h] }
      if ( !v80 )
        goto LABEL_40;
      __asm { vucomiss xmm0, dword ptr [rdi+81Ch] }
      if ( !v80 )
      {
LABEL_40:
        __asm
        {
          vmovss  dword ptr [rdi+814h], xmm2
          vmovss  dword ptr [rdi+818h], xmm1
          vmovss  dword ptr [rdi+81Ch], xmm0
        }
        _RDI->input.consts[17].v[0] = 3.0;
        ++_RDI->constVersions[17];
      }
      v85 = source;
      v86 = &R_RT_Handle::GetSurface((R_RT_Handle *)shadowCascades)->m_image;
      if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
        __debugbreak();
      if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
        __debugbreak();
      __asm
      {
        vmovups xmm0, xmmword ptr [r15]
        vmovss  [rsp+10E8h+var_10A0], xmm10
        vmovss  dword ptr [rsp+10E8h+var_10A8], xmm10
        vmovss  dword ptr [rsp+10E8h+var_10B0], xmm15
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, rax
        vmovups [rsp+10E8h+var_1038], xmm0
        vmulss  xmm0, xmm1, xmm6
        vmovss  dword ptr [rsp+10E8h+var_10B8], xmm15
      }
      source->input.codeImages[4] = &v86->m_base;
      __asm
      {
        vmovss  [rsp+10E8h+w], xmm9
        vaddss  xmm2, xmm0, xmm11
        vmovaps xmm3, xmm11
        vmovss  dword ptr [rsp+10E8h+fmt], xmm9
      }
      RB_DrawStretchPic(&v848, rgp.shadowOverlayMaterial, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, wa, v779, v787, v795, v802, 0xFFFFFFFF, GFX_PRIM_STATS_HUD);
      __asm
      {
        vmovups xmm0, xmmword ptr [r15]
        vmovups [rsp+10E8h+var_FB8], xmm0
      }
      RB_EndTessSurfaceInternal(&v857, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sunshadow.cpp(986)");
    }
    if ( sm_showOverlayTransShadow->current.enabled )
    {
      v92 = &R_RT_Handle::GetSurface(v70)->m_image;
      if ( !v85 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
        __debugbreak();
      if ( v85 == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
        __debugbreak();
      __asm
      {
        vmovups xmm0, xmmword ptr [r15]
        vmovss  [rsp+10E8h+var_10A0], xmm10
        vmovss  dword ptr [rsp+10E8h+var_10A8], xmm10
        vmovss  dword ptr [rsp+10E8h+var_10B0], xmm15
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, rax
        vmovups [rsp+10E8h+var_FA8], xmm0
        vmulss  xmm0, xmm1, xmm6
        vmovss  dword ptr [rsp+10E8h+var_10B8], xmm15
      }
      v85->input.codeImages[4] = &v92->m_base;
      __asm
      {
        vmovss  [rsp+10E8h+w], xmm9
        vaddss  xmm2, xmm0, xmm11
        vmovaps xmm3, xmm11
        vmovss  dword ptr [rsp+10E8h+fmt], xmm9
      }
      RB_DrawStretchPic(&v858, rgp.shadowOverlayMaterial, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, wb, v780, v788, v796, v803, 0xFFFFFFFF, GFX_PRIM_STATS_HUD);
    }
    v98 = 0;
    v99 = 0;
    _R12 = r_sunShadowParams;
    _RSI = p_sunShadow->sunProj.eyeOffset;
    _RBX = &p_sunShadow->sunProj.blendScale[0].v[2];
    while ( 1 )
    {
      __asm
      {
        vmovss  xmm7, dword ptr [rsi]
        vmovss  xmm2, dword ptr [rbx-4]
        vxorps  xmm0, xmm0, xmm0
        vmovss  dword ptr [rsp+10E8h+var_DE8+4], xmm2
      }
      v107 = 0i64;
      __asm
      {
        vcvtsi2ss xmm0, xmm0, rax
        vmulss  xmm1, xmm0, xmm6
        vmovss  xmm0, dword ptr [r12+28h]
        vmovss  xmm6, dword ptr [rsi+4]
        vsubss  xmm4, xmm0, xmm10
        vaddss  xmm12, xmm1, xmm11
        vmovss  xmm1, dword ptr [rbx-8]
        vmovss  dword ptr [rsp+10E8h+var_DE8], xmm1
        vdivss  xmm1, xmm4, xmm1
        vsubss  xmm1, xmm7, xmm1
        vmovss  [rsp+10E8h+var_1078], xmm1
        vdivss  xmm0, xmm4, xmm2
        vsubss  xmm14, xmm6, xmm0
        vdivss  xmm0, xmm4, dword ptr [rbx+4]
        vaddss  xmm6, xmm0, xmm6
        vmovss  [rsp+10E8h+var_1068], xmm1
        vdivss  xmm1, xmm4, dword ptr [rbx]
        vaddss  xmm5, xmm1, xmm7
        vmovss  xmm7, [rsp+10E8h+var_1078]
        vmulss  xmm0, xmm7, xmm13
        vsubss  xmm2, xmm0, xmm10
        vmulss  xmm0, xmm6, xmm13
        vmulss  xmm1, xmm14, xmm13
        vsubss  xmm3, xmm10, xmm1
        vmovss  [rsp+10E8h+var_BF8], xmm2
        vmovss  [rsp+10E8h+var_BF0], xmm2
        vsubss  xmm2, xmm10, xmm0
        vmulss  xmm0, xmm5, xmm13
        vsubss  xmm1, xmm0, xmm10
        vmovss  [rsp+10E8h+var_BE8], xmm1
        vmovss  [rsp+10E8h+var_BE0], xmm1
        vmovss  [rsp+10E8h+var_107C], xmm14
        vmovss  [rsp+10E8h+var_1080], xmm6
        vmovss  dword ptr [rsp+10E8h+var_1028], xmm5
        vmovss  [rsp+10E8h+var_106C], xmm6
        vmovss  [rsp+10E8h+var_1070], xmm5
        vmovss  [rsp+10E8h+var_1074], xmm14
        vmovss  [rsp+10E8h+var_BF4], xmm3
        vmovss  [rsp+10E8h+var_BEC], xmm2
        vmovss  [rsp+10E8h+var_BE4], xmm2
        vmovss  [rsp+10E8h+var_BDC], xmm3
      }
      v132 = 4i64;
      do
      {
        _RCX = 2i64 * v98;
        __asm { vaddss  xmm1, xmm10, [rsp+rax*8+10E8h+var_BF8] }
        *(_DWORD *)&v912.color[8 * _RCX - 4] = 0;
        __asm
        {
          vmulss  xmm2, xmm1, xmm8
          vmulss  xmm3, xmm2, xmm9
          vmulss  xmm2, xmm8, [rsp+rax*8+10E8h+var_BF4]
          vaddss  xmm0, xmm3, xmm12
          vmovss  [rsp+rcx*8+10E8h+var_B98], xmm0
          vsubss  xmm0, xmm8, xmm2
          vmulss  xmm1, xmm0, xmm9
          vaddss  xmm2, xmm1, xmm11
          vmovss  [rsp+rcx*8+10E8h+var_B94], xmm2
        }
        *(_DWORD *)&v912.color[8 * _RCX] = 805306623;
        _RCX = 2i64 * (v98 + 1);
        v98 += 2;
        ++v107;
        __asm
        {
          vaddss  xmm1, xmm10, [rsp+rax*8+10E8h+var_BF8]
          vmulss  xmm2, xmm1, xmm8
          vmulss  xmm3, xmm2, xmm9
          vmulss  xmm2, xmm8, [rsp+rax*8+10E8h+var_BF4]
          vaddss  xmm0, xmm3, xmm12
          vmovss  [rsp+rcx*8+10E8h+var_B98], xmm0
          vsubss  xmm0, xmm8, xmm2
          vmulss  xmm1, xmm0, xmm9
          vaddss  xmm2, xmm1, xmm11
          vmovss  [rsp+rcx*8+10E8h+var_B94], xmm2
        }
        *(_DWORD *)&v912.color[8 * _RCX - 4] = 0;
        *(_DWORD *)&v912.color[8 * _RCX] = 805306623;
        --v132;
      }
      while ( v132 );
      __asm
      {
        vmovss  [rsp+10E8h+var_1060], xmm15
        vmovss  [rsp+10E8h+var_1064], xmm15
        vmovss  [rsp+10E8h+var_1054], xmm10
        vmovss  dword ptr [rsp+10E8h+var_1038], xmm10
        vmovss  dword ptr [rsp+10E8h+var_DE8], xmm15
      }
      if ( v99 )
      {
        __asm
        {
          vdivss  xmm2, xmm10, dword ptr [rbx-5Ch]
          vxorps  xmm0, xmm2, cs:__xmm@80000000800000008000000080000000
          vmulss  xmm3, xmm0, dword ptr [rbx-64h]
          vmulss  xmm4, xmm0, dword ptr [rbx-68h]
          vaddss  xmm0, xmm2, xmm3
          vmovss  [rsp+10E8h+var_1054], xmm0
          vaddss  xmm0, xmm2, xmm4
          vmovss  dword ptr [rsp+10E8h+var_1038], xmm0
          vmulss  xmm0, xmm2, xmm7
          vaddss  xmm7, xmm0, xmm4
          vmulss  xmm0, xmm2, [rsp+10E8h+var_1068]
          vaddss  xmm0, xmm0, xmm4
          vmovss  [rsp+10E8h+var_1068], xmm0
          vmulss  xmm1, xmm2, xmm14
          vaddss  xmm14, xmm1, xmm3
          vmulss  xmm1, xmm2, xmm6
          vaddss  xmm6, xmm1, xmm3
          vmulss  xmm1, xmm2, [rsp+10E8h+var_106C]
          vmulss  xmm0, xmm2, xmm5
          vaddss  xmm5, xmm0, xmm4
          vaddss  xmm0, xmm1, xmm3
          vmulss  xmm1, xmm2, [rsp+10E8h+var_1074]
          vmovss  [rsp+10E8h+var_106C], xmm0
          vmulss  xmm0, xmm2, [rsp+10E8h+var_1070]
          vaddss  xmm0, xmm0, xmm4
          vmovss  [rsp+10E8h+var_1070], xmm0
          vaddss  xmm0, xmm1, xmm3
          vmovss  [rsp+10E8h+var_1074], xmm0
          vmovss  [rsp+10E8h+var_1064], xmm4
          vmovss  [rsp+10E8h+var_1060], xmm3
          vmovss  [rsp+10E8h+var_1078], xmm7
          vmovss  [rsp+10E8h+var_107C], xmm14
          vmovss  [rsp+10E8h+var_1080], xmm6
          vmovss  dword ptr [rsp+10E8h+var_1028], xmm5
          vmovss  dword ptr [rsp+10E8h+var_DE8], xmm3
        }
      }
      v169 = ++v99;
      if ( v99 < 3 )
      {
        __asm
        {
          vmovss  xmm14, [rsp+10E8h+var_1060]
          vmovss  xmm15, [rsp+10E8h+var_1064]
        }
        _R10 = (__int64)&p_sunShadow->sunProj.switchPartition[v99];
        do
        {
          __asm
          {
            vmovss  xmm6, dword ptr [r10+0Ch]
            vmovss  xmm5, dword ptr [r10]
            vmovss  xmm4, dword ptr [r10+4]
            vxorps  xmm0, xmm0, xmm0
          }
          v177 = v98 + 1;
          __asm
          {
            vcvtsi2ss xmm0, xmm0, rax
            vaddss  xmm1, xmm9, xmm13
            vmulss  xmm1, xmm0, xmm1
            vaddss  xmm12, xmm1, xmm11
            vmulss  xmm0, xmm6, xmm7
            vaddss  xmm1, xmm0, xmm5
            vmulss  xmm0, xmm6, [rsp+10E8h+var_107C]
            vmulss  xmm2, xmm1, xmm13
            vaddss  xmm1, xmm0, xmm4
            vsubss  xmm3, xmm2, xmm10
            vmulss  xmm2, xmm1, xmm13
            vmulss  xmm1, xmm6, [rsp+10E8h+var_1068]
            vsubss  xmm0, xmm10, xmm2
            vaddss  xmm2, xmm1, xmm5
            vmulss  xmm1, xmm6, [rsp+10E8h+var_1080]
            vmovss  [rsp+10E8h+var_BD4], xmm0
            vmulss  xmm0, xmm2, xmm13
            vmovss  [rsp+10E8h+var_BD8], xmm3
            vsubss  xmm3, xmm0, xmm10
            vaddss  xmm0, xmm1, xmm4
            vmulss  xmm2, xmm0, xmm13
            vmulss  xmm0, xmm6, dword ptr [rsp+10E8h+var_1028]
            vsubss  xmm1, xmm10, xmm2
            vaddss  xmm2, xmm0, xmm5
            vmulss  xmm0, xmm6, [rsp+10E8h+var_106C]
            vmovss  [rsp+10E8h+var_BCC], xmm1
            vmulss  xmm1, xmm2, xmm13
            vmovss  [rsp+10E8h+var_BD0], xmm3
            vsubss  xmm3, xmm1, xmm10
            vaddss  xmm1, xmm0, xmm4
            vmulss  xmm2, xmm1, xmm13
            vmulss  xmm1, xmm6, [rsp+10E8h+var_1070]
            vsubss  xmm0, xmm10, xmm2
            vaddss  xmm2, xmm1, xmm5
            vmulss  xmm1, xmm6, [rsp+10E8h+var_1074]
            vmovss  [rsp+10E8h+var_BC4], xmm0
            vmulss  xmm0, xmm2, xmm13
            vmovss  [rsp+10E8h+var_BC8], xmm3
            vsubss  xmm3, xmm0, xmm10
            vaddss  xmm0, xmm1, xmm4
            vmulss  xmm2, xmm0, xmm13
            vsubss  xmm1, xmm10, xmm2
            vmovss  [rsp+10E8h+var_BBC], xmm1
            vmovss  [rsp+10E8h+var_BC0], xmm3
          }
          v214 = 0;
          do
          {
            _RCX = 2i64 * v98;
            v98 += 2;
            __asm { vaddss  xmm1, xmm10, [rsp+rax*8+10E8h+var_BD8] }
            *(_DWORD *)&v912.color[8 * _RCX - 4] = 0;
            __asm
            {
              vmulss  xmm2, xmm1, xmm8
              vmulss  xmm3, xmm2, xmm9
              vmulss  xmm2, xmm8, [rsp+rax*8+10E8h+var_BD4]
              vaddss  xmm0, xmm3, xmm12
              vmovss  [rsp+rcx*8+10E8h+var_B98], xmm0
              vsubss  xmm0, xmm8, xmm2
              vmulss  xmm1, xmm0, xmm9
              vaddss  xmm2, xmm1, xmm11
              vmovss  [rsp+rcx*8+10E8h+var_B94], xmm2
            }
            *(_DWORD *)&v912.color[8 * _RCX] = 805306623;
            _RCX = v177;
            v177 += 2;
            _RCX *= 2i64;
            ++v214;
            __asm
            {
              vaddss  xmm1, xmm10, [rsp+rax*8+10E8h+var_BD8]
              vmulss  xmm2, xmm1, xmm8
              vmulss  xmm3, xmm2, xmm9
              vmulss  xmm2, xmm8, [rsp+rax*8+10E8h+var_BD4]
              vaddss  xmm0, xmm3, xmm12
              vmovss  [rsp+rcx*8+10E8h+var_B98], xmm0
              vsubss  xmm0, xmm8, xmm2
              vmulss  xmm1, xmm0, xmm9
              vaddss  xmm2, xmm1, xmm11
              vmovss  [rsp+rcx*8+10E8h+var_B94], xmm2
            }
            *(_DWORD *)&v912.color[8 * _RCX - 4] = 0;
            *(_DWORD *)&v912.color[8 * _RCX] = 805306623;
          }
          while ( v214 < 4 );
          __asm
          {
            vmovss  xmm7, dword ptr [r10+0Ch]
            vmovss  xmm6, dword ptr [r10+4]
            vmulss  xmm0, xmm7, xmm15
            vaddss  xmm1, xmm0, dword ptr [r10]
            vmulss  xmm2, xmm1, xmm13
            vsubss  xmm3, xmm2, xmm10
            vmulss  xmm0, xmm7, xmm14
            vaddss  xmm1, xmm0, xmm6
            vmulss  xmm2, xmm1, xmm13
            vmulss  xmm1, xmm7, [rsp+10E8h+var_1054]
            vsubss  xmm0, xmm10, xmm2
            vmovss  [rsp+10E8h+var_BB4], xmm0
            vaddss  xmm0, xmm1, xmm6
            vmulss  xmm2, xmm0, xmm13
            vmulss  xmm0, xmm7, dword ptr [rsp+10E8h+var_1038]
            vaddss  xmm1, xmm0, dword ptr [r10]
            vmulss  xmm0, xmm7, dword ptr [rsp+10E8h+var_DE8]
            vsubss  xmm4, xmm10, xmm2
            vmulss  xmm2, xmm1, xmm13
            vaddss  xmm1, xmm0, xmm6
            vmovss  [rsp+10E8h+var_BB8], xmm3
            vmovss  [rsp+10E8h+var_BB0], xmm3
            vsubss  xmm3, xmm2, xmm10
            vmulss  xmm2, xmm1, xmm13
            vsubss  xmm0, xmm10, xmm2
            vmovss  [rsp+10E8h+var_B9C], xmm0
            vmovss  [rsp+10E8h+var_BAC], xmm4
            vmovss  [rsp+10E8h+var_BA8], xmm3
            vmovss  [rsp+10E8h+var_BA4], xmm4
            vmovss  [rsp+10E8h+var_BA0], xmm3
          }
          v254 = 0;
          v255 = v98 + 1;
          do
          {
            _RCX = 2i64 * v98;
            v98 += 2;
            __asm { vaddss  xmm1, xmm10, [rsp+rax*8+10E8h+var_BB8] }
            *(_DWORD *)&v912.color[8 * _RCX - 4] = 0;
            __asm
            {
              vmulss  xmm2, xmm1, xmm8
              vmulss  xmm3, xmm2, xmm9
              vmulss  xmm2, xmm8, [rsp+rax*8+10E8h+var_BB4]
              vaddss  xmm0, xmm3, xmm12
              vmovss  [rsp+rcx*8+10E8h+var_B98], xmm0
              vsubss  xmm0, xmm8, xmm2
              vmulss  xmm1, xmm0, xmm9
              vaddss  xmm2, xmm1, xmm11
              vmovss  [rsp+rcx*8+10E8h+var_B94], xmm2
            }
            *(_DWORD *)&v912.color[8 * _RCX] = 805306623;
            _RCX = v255;
            v255 += 2;
            _RCX *= 2i64;
            ++v254;
            __asm
            {
              vaddss  xmm1, xmm10, [rsp+rax*8+10E8h+var_BB8]
              vmulss  xmm2, xmm1, xmm8
              vmulss  xmm3, xmm2, xmm9
              vmulss  xmm2, xmm8, [rsp+rax*8+10E8h+var_BB4]
              vaddss  xmm0, xmm3, xmm12
              vmovss  [rsp+rcx*8+10E8h+var_B98], xmm0
              vsubss  xmm0, xmm8, xmm2
              vmulss  xmm1, xmm0, xmm9
              vaddss  xmm2, xmm1, xmm11
              vmovss  [rsp+rcx*8+10E8h+var_B94], xmm2
            }
            *(_DWORD *)&v912.color[8 * _RCX - 4] = 0;
            *(_DWORD *)&v912.color[8 * _RCX] = 805306623;
          }
          while ( v254 < 4 );
          __asm { vmovss  xmm7, [rsp+10E8h+var_1078] }
          ++v169;
          _R10 += 16i64;
        }
        while ( v169 < 3 );
        __asm { vmovss  xmm15, [rsp+10E8h+scissorViewport.x] }
      }
      ++_RSI;
      _RBX += 4;
      if ( v99 >= cascadeCount )
        break;
      __asm { vaddss  xmm6, xmm9, xmm13 }
    }
    __asm { vmovss  xmm14, [rsp+10E8h+var_1084] }
    _R15 = v885;
    __asm
    {
      vmovups xmm0, xmmword ptr [r15]
      vmovups [rsp+10E8h+var_F98], xmm0
    }
    RB_DrawLines2D(&v859, v98 >> 1, 1, &v912);
    __asm { vmovss  xmm12, cs:__real@3e000000 }
    if ( p_sunShadow->overlaySetup.clipPlaneCount[0] )
    {
      R_GetSunShadowMapOverlayLines(backEndData, p_sunShadow, &overlay);
      v810 = 0;
      v277 = 0;
      __asm { vmovss  xmm13, [rsp+10E8h+var_1058] }
      p_overlay = &overlay;
      v280 = 0i64;
      v281 = (float *)&overlay.borderPoints[0][1] + 1;
      v884 = &overlay;
      p_y = (GfxCmdBufSourceState *)&overlay.frustumLines[0][1][1].y;
      *(_QWORD *)&scissorViewport.x = &overlay.borderPoints[0][1].y;
      v848.source = (GfxCmdBufSourceState *)&overlay.frustumLines[0][1][1].y;
      do
      {
        v283 = p_overlay->borderPointCount[0];
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rax
          vmulss  xmm1, xmm0, xmm13
          vaddss  xmm6, xmm1, xmm11
        }
        if ( p_overlay->borderPointCount[0] )
        {
          if ( 2 * v283 > 0xAB )
          {
            LODWORD(v794) = 171;
            LODWORD(v786) = 2 * v283;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sunshadow.cpp", 1118, ASSERT_TYPE_ASSERT, "( 2 * pointCount ) <= ( ( sizeof( *array_counter( overlayPoints ) ) + 0 ) )", "%s <= %s\n\t%i, %i", "2 * pointCount", "ARRAY_COUNT( overlayPoints )", v786, v794) )
              __debugbreak();
            v281 = *(float **)&scissorViewport.x;
          }
          v287 = 0;
          v288 = 0;
          if ( v283 >= 4 )
          {
            v289 = 2;
            v290 = ((v283 - 4) >> 2) + 1;
            v288 = 0;
            v291 = 2;
            v292 = v290;
            v293 = v281;
            v287 = 4 * v290;
            do
            {
              __asm
              {
                vaddss  xmm1, xmm10, dword ptr [rdi-0Ch]
                vmulss  xmm2, xmm1, xmm8
                vmulss  xmm3, xmm2, xmm9
                vmulss  xmm2, xmm8, dword ptr [rdi-8]
              }
              _R9 = 2i64 * v288;
              __asm
              {
                vaddss  xmm0, xmm3, xmm6
                vmovss  [rsp+r9*8+10E8h+var_B98], xmm0
                vsubss  xmm0, xmm8, xmm2
                vmulss  xmm1, xmm0, xmm9
                vaddss  xmm2, xmm1, xmm11
                vmovss  [rsp+r9*8+10E8h+var_B94], xmm2
              }
              *(_DWORD *)&v912.color[8 * _R9 - 4] = 0;
              _R8 = 2i64 * (v289 - 1);
              __asm
              {
                vaddss  xmm1, xmm10, dword ptr [rsp+rcx*8+10E8h+overlay.borderPoints]
                vmulss  xmm2, xmm1, xmm8
                vmulss  xmm3, xmm2, xmm9
                vmulss  xmm2, xmm8, dword ptr [rsp+rcx*8+10E8h+overlay.borderPoints+4]
                vaddss  xmm0, xmm3, xmm6
                vmovss  [rsp+r8*8+10E8h+var_B98], xmm0
                vsubss  xmm0, xmm8, xmm2
                vmulss  xmm1, xmm0, xmm9
                vaddss  xmm2, xmm1, xmm11
                vaddss  xmm1, xmm10, dword ptr [rdi-4]
                vmovss  [rsp+r8*8+10E8h+var_B94], xmm2
              }
              *(_DWORD *)&v912.color[8 * _R8 - 4] = 0;
              *(_DWORD *)&v912.color[8 * _R9] = -2147418368;
              *(_DWORD *)&v912.color[8 * _R8] = -2147418368;
              __asm
              {
                vmulss  xmm2, xmm1, xmm12
                vmulss  xmm3, xmm2, xmm14
                vmulss  xmm2, xmm12, dword ptr [rdi]
              }
              _R8 = 2i64 * (v289 + 1);
              _R9 = 2i64 * v289;
              __asm
              {
                vaddss  xmm0, xmm3, xmm6
                vmovss  [rsp+r9*8+10E8h+var_B98], xmm0
                vsubss  xmm0, xmm12, xmm2
                vmulss  xmm1, xmm0, xmm14
                vaddss  xmm2, xmm1, xmm11
                vaddss  xmm1, xmm10, dword ptr [rsp+rcx*8+10E8h+overlay.borderPoints]
                vmovss  [rsp+r9*8+10E8h+var_B94], xmm2
              }
              *(_DWORD *)&v912.color[8 * _R9 - 4] = 0;
              __asm
              {
                vmulss  xmm2, xmm1, xmm12
                vmulss  xmm3, xmm2, xmm14
                vmulss  xmm2, xmm12, dword ptr [rsp+rcx*8+10E8h+overlay.borderPoints+4]
                vaddss  xmm0, xmm3, xmm6
                vmovss  [rsp+r8*8+10E8h+var_B98], xmm0
                vsubss  xmm0, xmm12, xmm2
                vmulss  xmm1, xmm0, xmm14
                vaddss  xmm2, xmm1, xmm11
                vaddss  xmm1, xmm10, dword ptr [rdi+4]
                vmovss  [rsp+r8*8+10E8h+var_B94], xmm2
              }
              *(_DWORD *)&v912.color[8 * _R8 - 4] = 0;
              *(_DWORD *)&v912.color[8 * _R9] = -2147418368;
              *(_DWORD *)&v912.color[8 * _R8] = -2147418368;
              _R9 = 2i64 * (v289 + 2);
              __asm
              {
                vmulss  xmm2, xmm1, xmm12
                vmulss  xmm3, xmm2, xmm14
                vmulss  xmm2, xmm12, dword ptr [rdi+8]
                vaddss  xmm0, xmm3, xmm6
                vmovss  [rsp+r9*8+10E8h+var_B98], xmm0
                vsubss  xmm0, xmm12, xmm2
                vmulss  xmm1, xmm0, xmm14
                vaddss  xmm2, xmm1, xmm11
                vmovss  [rsp+r9*8+10E8h+var_B94], xmm2
              }
              *(_DWORD *)&v912.color[8 * _R9 - 4] = 0;
              _R8 = 2i64 * (v289 + 3);
              v288 += 8;
              v293 += 8;
              __asm
              {
                vaddss  xmm1, xmm10, dword ptr [rsp+rcx*8+10E8h+overlay.borderPoints]
                vmulss  xmm2, xmm1, xmm12
                vmulss  xmm3, xmm2, xmm14
                vmulss  xmm2, xmm12, dword ptr [rsp+rcx*8+10E8h+overlay.borderPoints+4]
                vaddss  xmm0, xmm3, xmm6
                vmovss  [rsp+r8*8+10E8h+var_B98], xmm0
                vsubss  xmm0, xmm12, xmm2
                vmulss  xmm1, xmm0, xmm14
                vaddss  xmm2, xmm1, xmm11
                vaddss  xmm1, xmm10, dword ptr [rdi-14h]
                vmovss  [rsp+r8*8+10E8h+var_B94], xmm2
              }
              *(_DWORD *)&v912.color[8 * _R8 - 4] = 0;
              v291 += 4;
              *(_DWORD *)&v912.color[8 * _R9] = -2147418368;
              *(_DWORD *)&v912.color[8 * _R8] = -2147418368;
              _R9 = 2i64 * (v289 + 4);
              __asm
              {
                vmulss  xmm2, xmm1, xmm12
                vmulss  xmm3, xmm2, xmm14
                vmulss  xmm2, xmm12, dword ptr [rdi-10h]
                vaddss  xmm0, xmm3, xmm6
                vmovss  [rsp+r9*8+10E8h+var_B98], xmm0
                vsubss  xmm0, xmm12, xmm2
                vmulss  xmm1, xmm0, xmm14
                vaddss  xmm2, xmm1, xmm11
                vmovss  [rsp+r9*8+10E8h+var_B94], xmm2
              }
              *(_DWORD *)&v912.color[8 * _R9 - 4] = 0;
              _R8 = 2i64 * (v289 + 5);
              v289 += 8;
              __asm
              {
                vaddss  xmm1, xmm10, dword ptr [rsp+rcx*8+10E8h+overlay.borderPoints]
                vmulss  xmm2, xmm1, xmm12
                vmulss  xmm3, xmm2, xmm14
                vmulss  xmm2, xmm12, dword ptr [rsp+rcx*8+10E8h+overlay.borderPoints+4]
                vaddss  xmm0, xmm3, xmm6
                vmovss  [rsp+r8*8+10E8h+var_B98], xmm0
                vsubss  xmm0, xmm12, xmm2
                vmulss  xmm1, xmm0, xmm14
                vaddss  xmm2, xmm1, xmm11
                vmovss  [rsp+r8*8+10E8h+var_B94], xmm2
              }
              *(_DWORD *)&v912.color[8 * _R8 - 4] = 0;
              *(_DWORD *)&v912.color[8 * _R9] = -2147418368;
              *(_DWORD *)&v912.color[8 * _R8] = -2147418368;
              --v292;
            }
            while ( v292 );
            _R15 = v885;
            p_y = v848.source;
            v277 = v810;
            p_overlay = v884;
          }
          if ( v287 < v283 )
          {
            v366 = &overlay.borderPoints[v280][v287];
            do
            {
              __asm
              {
                vaddss  xmm1, xmm10, dword ptr [rdi]
                vmulss  xmm2, xmm1, xmm8
                vmulss  xmm3, xmm2, xmm9
                vmulss  xmm2, xmm8, dword ptr [rdi+4]
              }
              _R9 = 2i64 * v288;
              ++v366;
              _R8 = 2i64 * (v288 + 1);
              ++v287;
              v288 += 2;
              __asm
              {
                vaddss  xmm0, xmm3, xmm6
                vmovss  [rsp+r9*8+10E8h+var_B98], xmm0
                vsubss  xmm0, xmm8, xmm2
              }
              *(_DWORD *)&v912.color[8 * _R9 - 4] = 0;
              __asm
              {
                vmulss  xmm1, xmm0, xmm9
                vaddss  xmm2, xmm1, xmm11
                vmovss  [rsp+r9*8+10E8h+var_B94], xmm2
              }
              *(_DWORD *)&v912.color[8 * _R8 - 4] = 0;
              __asm
              {
                vaddss  xmm1, xmm10, dword ptr [rsp+rcx*8+10E8h+overlay.borderPoints]
                vmulss  xmm2, xmm1, xmm8
                vmulss  xmm3, xmm2, xmm9
                vmulss  xmm2, xmm8, dword ptr [rsp+rcx*8+10E8h+overlay.borderPoints+4]
                vaddss  xmm0, xmm3, xmm6
                vmovss  [rsp+r8*8+10E8h+var_B98], xmm0
                vsubss  xmm0, xmm8, xmm2
                vmulss  xmm1, xmm0, xmm9
                vaddss  xmm2, xmm1, xmm11
                vmovss  [rsp+r8*8+10E8h+var_B94], xmm2
              }
              *(_DWORD *)&v912.color[8 * _R9] = -2147418368;
              *(_DWORD *)&v912.color[8 * _R8] = -2147418368;
            }
            while ( v287 < v283 );
            p_overlay = v884;
          }
          __asm
          {
            vmovups xmm0, xmmword ptr [r15]
            vmovups [rsp+10E8h+var_F88], xmm0
          }
          RB_DrawLines2D(&v860, v288 >> 1, 1, &v912);
        }
        __asm
        {
          vaddss  xmm1, xmm10, dword ptr [r12-1Ch]
          vmulss  xmm2, xmm1, xmm8
          vmulss  xmm3, xmm2, xmm9
          vmulss  xmm2, xmm8, dword ptr [r12-18h]
          vaddss  xmm0, xmm3, xmm6
          vmovss  [rsp+10E8h+var_B98], xmm0
          vsubss  xmm0, xmm8, xmm2
          vmulss  xmm1, xmm0, xmm9
          vaddss  xmm2, xmm1, xmm11
          vaddss  xmm1, xmm10, dword ptr [r12-14h]
          vmovss  [rsp+10E8h+var_B94], xmm2
          vmulss  xmm2, xmm1, xmm8
          vmulss  xmm3, xmm2, xmm9
          vmulss  xmm2, xmm8, dword ptr [r12-10h]
          vaddss  xmm0, xmm3, xmm6
          vmovss  [rsp+10E8h+var_B88], xmm0
          vsubss  xmm0, xmm8, xmm2
          vmulss  xmm1, xmm0, xmm9
          vaddss  xmm2, xmm1, xmm11
          vaddss  xmm1, xmm10, dword ptr [r12-0Ch]
          vmovss  [rsp+10E8h+var_B84], xmm2
          vmulss  xmm2, xmm1, xmm12
          vmulss  xmm3, xmm2, xmm14
          vmulss  xmm2, xmm12, dword ptr [r12-8]
          vaddss  xmm0, xmm3, xmm6
          vmovss  [rsp+10E8h+var_B78], xmm0
          vsubss  xmm0, xmm12, xmm2
          vmulss  xmm1, xmm0, xmm14
          vaddss  xmm2, xmm1, xmm11
          vaddss  xmm1, xmm10, dword ptr [r12-4]
          vmovss  [rsp+10E8h+var_B74], xmm2
          vmulss  xmm2, xmm1, xmm12
          vmulss  xmm3, xmm2, xmm14
          vmulss  xmm2, xmm12, dword ptr [r12]
          vaddss  xmm0, xmm3, xmm6
          vmovss  [rsp+10E8h+var_B68], xmm0
          vsubss  xmm0, xmm12, xmm2
          vmulss  xmm1, xmm0, xmm14
          vaddss  xmm2, xmm1, xmm11
          vaddss  xmm1, xmm10, dword ptr [r12+4]
          vmovss  [rsp+10E8h+var_B64], xmm2
          vmulss  xmm2, xmm1, xmm12
          vmulss  xmm3, xmm2, xmm14
          vmulss  xmm2, xmm12, dword ptr [r12+8]
          vaddss  xmm0, xmm3, xmm6
          vmovss  [rsp+10E8h+var_B58], xmm0
          vsubss  xmm0, xmm12, xmm2
          vmulss  xmm1, xmm0, xmm14
          vaddss  xmm2, xmm1, xmm11
          vaddss  xmm1, xmm10, dword ptr [r12+0Ch]
          vmovss  [rsp+10E8h+var_B54], xmm2
          vmulss  xmm2, xmm1, xmm12
          vmulss  xmm3, xmm2, xmm14
          vmulss  xmm2, xmm12, dword ptr [r12+10h]
          vaddss  xmm0, xmm3, xmm6
          vmovss  [rsp+10E8h+var_B48], xmm0
          vsubss  xmm0, xmm12, xmm2
          vmulss  xmm1, xmm0, xmm14
          vaddss  xmm2, xmm1, xmm11
          vaddss  xmm1, xmm10, dword ptr [r12+14h]
          vmovss  [rsp+10E8h+var_B44], xmm2
          vmulss  xmm2, xmm1, xmm12
          vmulss  xmm3, xmm2, xmm14
          vmulss  xmm2, xmm12, dword ptr [r12+18h]
          vaddss  xmm0, xmm3, xmm6
          vmovss  [rsp+10E8h+var_B38], xmm0
          vsubss  xmm0, xmm12, xmm2
          vmulss  xmm1, xmm0, xmm14
          vaddss  xmm2, xmm1, xmm11
          vmovss  [rsp+10E8h+var_B90], xmm15
          vmovss  [rsp+10E8h+var_B80], xmm15
          vmovss  [rsp+10E8h+var_B70], xmm15
          vmovss  [rsp+10E8h+var_B60], xmm15
          vmovss  [rsp+10E8h+var_B50], xmm15
          vmovss  [rsp+10E8h+var_B40], xmm15
        }
        *(_DWORD *)v912.color = -2147418113;
        v916 = -2147418113;
        v920 = -2147418113;
        v924 = -2147418113;
        v928 = -2147418113;
        v932 = -2147418113;
        __asm
        {
          vaddss  xmm1, xmm10, dword ptr [r12+1Ch]
          vmovss  [rsp+10E8h+var_B34], xmm2
          vmulss  xmm2, xmm1, xmm12
          vmulss  xmm3, xmm2, xmm14
          vmulss  xmm2, xmm12, dword ptr [r12+20h]
          vaddss  xmm0, xmm3, xmm6
          vmovss  [rsp+10E8h+var_B28], xmm0
          vsubss  xmm0, xmm12, xmm2
          vmulss  xmm1, xmm0, xmm14
          vmovups xmm0, xmmword ptr [r15]
        }
        v936 = -2147418113;
        __asm { vaddss  xmm2, xmm1, xmm11 }
        v940 = -2147418113;
        __asm
        {
          vmovss  [rsp+10E8h+var_B24], xmm2
          vmovss  [rsp+10E8h+var_B30], xmm15
          vmovss  [rsp+10E8h+var_B20], xmm15
          vmovups [rsp+10E8h+var_F78], xmm0
        }
        RB_DrawLines2D(&v861, 4, 1, &v912);
        v281 = (float *)(*(_QWORD *)&scissorViewport.x + 72i64);
        ++v277;
        *(_QWORD *)&scissorViewport.x += 72i64;
        p_overlay = (GfxSunShadowOverlayLines *)((char *)p_overlay + 4);
        v810 = v277;
        p_y = (GfxCmdBufSourceState *)((char *)p_y + 64);
        v884 = p_overlay;
        ++v280;
        v848.source = p_y;
      }
      while ( v277 < cascadeCount );
      __asm { vmovss  xmm13, cs:__real@40000000 }
      _R13 = p_sunShadow;
    }
    __asm
    {
      vmovups xmm0, xmmword ptr [r15]
      vmovups [rsp+10E8h+var_F68], xmm0
    }
    RB_EndTessSurfaceInternal(&v862, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sunshadow.cpp(1149)");
    if ( !s_sunShadowCacheDebuggerInitialized )
    {
      s_sunShadowCacheDebuggerInitialized = 1;
      memset_0(&s_sunShadowCacheDebugger.tileActiveCount + 1, 0, 0x2CCui64);
    }
    v450 = 0x80000000;
    v451 = 0x80000000;
    s_sunShadowCacheDebugger.tileActiveCount = 0;
    __asm { vaddss  xmm7, xmm9, xmm11 }
    v821 = 0x7FFFFFFF;
    __asm { vmovss  [rsp+10E8h+var_107C], xmm7 }
    v815 = 0x80000000;
    if ( overlayType == 2 )
    {
      v453 = v850;
      if ( v850 )
      {
        if ( R_RT_Handle::IsValid(v850) )
        {
          _ER14 = 0;
          __asm { vmovd   xmm1, r14d }
          _EDI = sm_showOverlayFocus->current.integer;
          _RAX = sm_showOverlayCompressionDebug;
          v843 = _EDI;
          __asm
          {
            vmovd   xmm0, dword ptr [rax+28h]
            vpcmpeqd xmm1, xmm0, xmm1
            vblendvps xmm0, xmm13, xmm10, xmm1
            vmovss  dword ptr [rsp+10E8h+var_DE8], xmm0
          }
          R_SunShadow_GetMapSize();
          __asm
          {
            vxorps  xmm6, xmm6, xmm6
            vcvtsi2ss xmm6, xmm6, rax
            vmovss  dword ptr [rsp+10E8h+var_1038], xmm6
          }
          v463 = R_RT_Handle::GetWrappedBuffer(v453);
          v464 = *(GfxCmdBufSourceState **)_R15;
          R_SetCodeBuffer(*(GfxCmdBufSourceState **)_R15, 0x28u, v463);
          v465 = R_RT_Handle::GetWrappedBuffer(v453 + 1);
          R_SetCodeBuffer(v464, 0x29u, v465);
          v466 = R_RT_Handle::GetWrappedBuffer(v453 + 2);
          R_SetCodeBuffer(v464, 0x2Au, v466);
          v467 = (unsigned int)(_EDI - 1);
          __asm
          {
            vmovd   xmm1, r14d
            vmovd   xmm0, edi
            vpcmpgtq xmm2, xmm0, xmm1
            vmovss  xmm1, cs:__real@3f400000
            vmovss  xmm0, cs:__real@3e800000
          }
          if ( !_EDI )
            v467 = 0i64;
          v473 = 3;
          __asm { vblendvps xmm0, xmm0, xmm1, xmm2 }
          if ( _EDI )
            v473 = _EDI;
          scissorViewport.x = v467;
          __asm
          {
            vmulss  xmm7, xmm0, xmm14
            vaddss  xmm14, xmm7, xmm13
          }
          if ( (unsigned int)v467 < v473 )
          {
            __asm
            {
              vmovss  xmm13, dword ptr [rsp+10E8h+var_DE8]
              vmovss  xmm12, dword ptr [rsp+10E8h+var_1038]
            }
            v478 = v467;
            v479 = v467;
            v480 = &v453[v479] == NULL;
            p_row2 = (GfxCmdBufSourceState *)&v453[v479];
            v811 = 0;
            __asm { vaddss  xmm6, xmm9, xmm11 }
            v849.source = p_row2;
            __asm { vaddss  xmm8, xmm7, xmm6 }
            v484 = v473;
            do
            {
              _RCX = *(GfxCmdBufSourceState **)_R15;
              __asm
              {
                vxorps  xmm0, xmm0, xmm0
                vcvtsi2ss xmm0, xmm0, rax
                vucomiss xmm13, dword ptr [rcx+810h]
              }
              if ( !v480 )
                goto LABEL_105;
              __asm { vucomiss xmm0, dword ptr [rcx+814h] }
              if ( !v480 )
                goto LABEL_105;
              __asm { vucomiss xmm12, dword ptr [rcx+818h] }
              if ( !v480 )
                goto LABEL_105;
              __asm { vucomiss xmm15, dword ptr [rcx+81Ch] }
              if ( !v480 )
              {
LABEL_105:
                _RCX->input.consts[17].v[3] = 0.0;
                __asm
                {
                  vmovss  dword ptr [rcx+810h], xmm13
                  vmovss  dword ptr [rcx+814h], xmm0
                  vmovss  dword ptr [rcx+818h], xmm12
                }
                R_DirtyCodeConstant(_RCX, 0x11u);
              }
              __asm
              {
                vmovups xmm0, xmmword ptr [r15]
                vmovss  [rsp+10E8h+var_10A0], xmm10
                vmovss  dword ptr [rsp+10E8h+var_10A8], xmm10
                vmovss  dword ptr [rsp+10E8h+var_10B0], xmm15
                vxorps  xmm1, xmm1, xmm1
                vcvtsi2ss xmm1, xmm1, rax
                vmovups [rsp+10E8h+var_F58], xmm0
                vmulss  xmm0, xmm1, xmm14
                vaddss  xmm9, xmm0, xmm11
                vmovss  dword ptr [rsp+10E8h+var_10B8], xmm15
                vmovaps xmm2, xmm9
                vmovss  [rsp+10E8h+w], xmm7
                vmovaps xmm3, xmm6
                vmovss  dword ptr [rsp+10E8h+fmt], xmm7
              }
              RB_DrawStretchPic(&v863, rgp.shadowOverlayMaterial, *(float *)&_XMM2, *(float *)&_XMM3, fmtd, wc, v781, v789, v797, v804, 0xFFFFFFFF, GFX_PRIM_STATS_HUD);
              Surface = R_RT_Handle::GetSurface((R_RT_Handle *)p_row2);
              if ( (Surface->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
                __debugbreak();
              v496 = 0;
              if ( *(int *)Surface->m_buffer.m_wrappedBuffer.data > 0 )
                v496 = *(_DWORD *)Surface->m_buffer.m_wrappedBuffer.data;
              m_shadowMapResolution = R_CompressedSunShadow_GetSetup()->m_shadowMapResolution;
              Setup = R_CompressedSunShadow_GetSetup();
              debugFont = backEnd.debugFont;
              __asm
              {
                vxorps  xmm0, xmm0, xmm0
                vxorps  xmm1, xmm1, xmm1
                vcvtsi2ss xmm0, xmm0, dword ptr [rdi+8]
                vaddss  xmm6, xmm0, xmm8
                vcvtsi2ss xmm1, xmm1, rax
                vxorps  xmm0, xmm0, xmm0
                vcvtsi2ss xmm0, xmm0, rax
                vdivss  xmm1, xmm1, xmm0
                vcvtss2sd xmm3, xmm1, xmm1
                vmovq   r9, xmm3
              }
              v509 = j_va("Comp: %i / %i b : %0.3f", v496, 2 * Setup->m_shadowMapResolution * m_shadowMapResolution, _R9);
              __asm
              {
                vmovups xmm0, xmmword ptr [r15]
                vmovaps xmm3, xmm9
                vmovups [rsp+10E8h+var_F48], xmm0
                vmovss  dword ptr [rsp+10E8h+fmt], xmm6
              }
              RB_DrawText(&v864, v509, debugFont, *(float *)&_XMM3, fmte, (const GfxColor)-1);
              __asm
              {
                vmovups xmm0, xmmword ptr [r15]
                vmovups [rsp+10E8h+var_F38], xmm0
              }
              RB_EndTessSurfaceInternal(&v865, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sunshadow.cpp(1214)");
              __asm { vmovss  xmm6, [rsp+10E8h+var_107C] }
              p_row2 = (GfxCmdBufSourceState *)&v849.source->matrices.matrix[0].m.row2;
              ++v811;
              ++v478;
              v849.source = (GfxCmdBufSourceState *)((char *)v849.source + 32);
              v480 = v478 == v484;
            }
            while ( v478 < v484 );
            __asm
            {
              vmovss  xmm8, cs:__real@3f000000
              vmovss  xmm12, cs:__real@3e000000
              vmovss  xmm6, dword ptr [rsp+10E8h+var_1038]
            }
            _R13 = p_sunShadow;
            v450 = 0x80000000;
            LODWORD(v467) = scissorViewport.x;
            _EDI = v843;
          }
          if ( _EDI )
          {
            __asm
            {
              vxorps  xmm3, xmm3, xmm3
              vcvtsi2ss xmm3, xmm3, rax; y
              vmovss  [rsp+10E8h+w], xmm15
              vmovaps xmm2, xmm15; x
              vmovss  dword ptr [rsp+10E8h+fmt], xmm6
            }
            R_UpdateCodeConstant(*(GfxCmdBufSourceState **)_R15, 0x11u, *(float *)&_XMM2, *(float *)&_XMM3, fmtf, wd);
            v515 = R_RT_Handle::GetSurface((R_RT_Handle *)&shadowCascades[(unsigned int)v467]);
            R_SetCodeImageTextureInternal(source, 4u, &v515->m_image.m_base, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sunshadow.cpp(1221)");
            __asm
            {
              vmovups xmm0, xmmword ptr [r15]
              vmovss  [rsp+10E8h+var_10A0], xmm10
              vmovss  dword ptr [rsp+10E8h+var_10A8], xmm10
              vmovss  dword ptr [rsp+10E8h+var_10B0], xmm15
              vmovss  dword ptr [rsp+10E8h+var_10B8], xmm15
              vmovss  [rsp+10E8h+w], xmm7
              vmovss  dword ptr [rsp+10E8h+fmt], xmm7
              vmovss  xmm7, [rsp+10E8h+var_107C]
              vmovaps xmm3, xmm7
              vaddss  xmm2, xmm14, xmm11
              vmovups [rsp+10E8h+var_F28], xmm0
            }
            RB_DrawStretchPic(&v866, rgp.shadowOverlayMaterial, *(float *)&_XMM2, *(float *)&_XMM3, fmtg, we, v782, v790, v798, v805, 0xFFFFFFFF, GFX_PRIM_STATS_HUD);
            __asm
            {
              vmovups xmm0, xmmword ptr [r15]
              vmovups [rsp+10E8h+var_F18], xmm0
            }
            RB_EndTessSurfaceInternal(&v867, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sunshadow.cpp(1223)");
          }
          else
          {
            __asm { vmovss  xmm7, [rsp+10E8h+var_107C] }
          }
          v451 = 0x80000000;
        }
      }
    }
    unsignedInt = sm_cachedSunShadowDebugShowCachePartition->current.unsignedInt;
    if ( overlayType == 3 && R_RT_Handle::IsValid(v852) )
    {
      v522 = 8656 * unsignedInt;
      v846 = 8656 * unsignedInt;
      if ( _R13->partitionCache[unsignedInt].gfxCachedSunShadowOverlap[0].staticEntry )
      {
        CachedSunShadowParititionHead = R_GetCachedSunShadowParititionHead();
        tileActiveCount = s_sunShadowCacheDebugger.tileActiveCount;
        v526 = 0x7FFFFFFF;
        v527 = CachedSunShadowParititionHead;
        v528 = 0x7FFFFFFF;
        _R9 = CachedSunShadowParititionHead;
        v530 = 0;
        do
        {
          partitionIndex = _R9->partitionIndex;
          if ( partitionIndex == (_DWORD)unsignedInt )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rdi+24h]
              vucomiss xmm0, dword ptr [r9+24h]
            }
            if ( partitionIndex == (_DWORD)unsignedInt )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rdi+8]
                vucomiss xmm0, dword ptr [r9+8]
              }
              if ( partitionIndex == (_DWORD)unsignedInt )
              {
                __asm
                {
                  vmovss  xmm0, dword ptr [rdi+0Ch]
                  vucomiss xmm0, dword ptr [r9+0Ch]
                }
                if ( partitionIndex == (_DWORD)unsignedInt )
                {
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rdi+10h]
                    vucomiss xmm0, dword ptr [r9+10h]
                  }
                  if ( partitionIndex == (_DWORD)unsignedInt )
                  {
                    gridX = _R9->gridX;
                    v533 = gridX;
                    gridY = _R9->gridY;
                    if ( v526 < gridX )
                      v533 = v526;
                    v526 = v533;
                    v535 = _R9->gridY;
                    if ( v528 < gridY )
                      v535 = v528;
                    v528 = v535;
                    if ( v450 > gridX )
                      gridX = v450;
                    v450 = gridX;
                    if ( v451 > gridY )
                      gridY = v451;
                    s_sunShadowCacheDebugger.tileQueue[tileActiveCount] = _R9;
                    v451 = gridY;
                    s_sunShadowCacheDebugger.tilePriority[s_sunShadowCacheDebugger.tileActiveCount] = v530;
                    tileActiveCount = ++s_sunShadowCacheDebugger.tileActiveCount;
                  }
                }
              }
            }
          }
          _R9 = _R9->next;
          ++v530;
        }
        while ( _R9 != v527 );
        v522 = 8656 * unsignedInt;
        v821 = v528;
        _R13 = p_sunShadow;
        _R15 = v885;
        v815 = v451;
      }
      else
      {
        tileActiveCount = s_sunShadowCacheDebugger.tileActiveCount;
      }
      __asm
      {
        vmovss  xmm6, cs:__real@437f0000
        vmovss  xmm13, cs:__real@41800000
        vxorps  xmm0, xmm0, xmm0
      }
      v816 = v815 - v821;
      v536 = v816;
      __asm
      {
        vcvtsi2ss xmm0, xmm0, eax
        vdivss  xmm1, xmm8, xmm0
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
      }
      v544 = 0;
      __asm
      {
        vmulss  xmm9, xmm1, xmm0
        vmovss  [rsp+10E8h+var_1060], xmm9
      }
      v546 = 0;
      v812 = 0;
      while ( 1 )
      {
        v838 = 0;
        if ( tileActiveCount )
          break;
LABEL_253:
        __asm { vmovss  xmm7, [rsp+10E8h+var_107C] }
        ++v546;
        v544 = 0;
        v812 = v546;
        if ( v546 >= 3 )
          goto LABEL_254;
      }
      while ( 1 )
      {
        v850 = (R_RT_Handle *)v544;
        v547 = s_sunShadowCacheDebugger.tileQueue[v544];
        EntryDebugId = R_SunShadowCache_GetEntryDebugId(v547);
        v550 = EntryDebugId;
        v840 = EntryDebugId;
        if ( EntryDebugId < 0x40 )
        {
          bspOnly = v547->bspOnly;
          if ( v546 == 1 )
          {
            if ( bspOnly )
              goto LABEL_146;
          }
          else if ( !bspOnly )
          {
LABEL_146:
            v552 = *(unsigned int *)((char *)&_R13->partitionCache[0].gfxCachedSunShadowOverlapCount + v522);
            v553 = 0;
            v808 = 0;
            v554 = 0;
            v555 = 0;
            if ( v552 )
            {
              while ( 1 )
              {
                v556 = *(__int64 *)((char *)&_R13->partitionCache[0].gfxCachedSunShadowOverlap[v555].staticEntry + v522);
                if ( v547->gridX == *(_DWORD *)(v556 + 28) && v547->gridY == *(_DWORD *)(v556 + 32) )
                  break;
                if ( ++v555 >= v552 )
                {
                  v553 = 0;
                  goto LABEL_151;
                }
              }
              v553 = 1;
              v808 = 1;
              v554 = __popcnt(*(unsigned __int64 *)((char *)&_R13->partitionCache[0].gfxCachedSunShadowOverlap[v555].updateExtentsMask + v522));
            }
LABEL_151:
            if ( v554 < s_sunShadowCacheDebugger.extentMaskBitsCount[v550] && (v557 = s_sunShadowCacheDebugger.extentMaskBitsTimer[v550]) != 0 )
            {
              v554 = s_sunShadowCacheDebugger.extentMaskBitsCount[v550];
              v558 = v557 - 1;
            }
            else
            {
              s_sunShadowCacheDebugger.extentMaskBitsCount[v550] = v554;
              v558 = -1;
            }
            s_sunShadowCacheDebugger.extentMaskBitsTimer[v550] = v558;
            if ( v553 )
            {
              _RAX = &colorMdYellow;
              v560 = &colorYellow;
            }
            else
            {
              _RAX = &colorMdGreen;
              v560 = &colorGreen;
            }
            if ( v547->finalized )
              _RAX = v560;
            __asm
            {
              vxorps  xmm4, xmm4, xmm4
              vmovups xmm0, xmmword ptr [rax]
              vmovups [rsp+10E8h+var_DD8], xmm0
              vmulss  xmm1, xmm6, dword ptr [rsp+10E8h+var_DD8]
              vaddss  xmm3, xmm1, xmm8
              vroundss xmm1, xmm4, xmm3, 1
              vcvttss2si eax, xmm1
              vmulss  xmm1, xmm6, dword ptr [rsp+10E8h+var_DD8+4]
              vaddss  xmm3, xmm1, xmm8
            }
            if ( _EAX > 255 )
              _EAX = 255;
            v569 = _EAX;
            __asm { vroundss xmm1, xmm4, xmm3, 1 }
            if ( _EAX < 0 )
              v569 = 0;
            __asm
            {
              vcvttss2si eax, xmm1
              vmulss  xmm1, xmm6, dword ptr [rsp+10E8h+var_DD8+8]
            }
            LOBYTE(v824) = v569;
            __asm { vaddss  xmm3, xmm1, xmm8 }
            if ( _EAX > 255 )
              _EAX = 255;
            v833.array[0] = v569;
            v574 = _EAX;
            __asm { vroundss xmm1, xmm4, xmm3, 1 }
            if ( _EAX < 0 )
              v574 = 0;
            __asm
            {
              vcvttss2si eax, xmm1
              vmulss  xmm1, xmm6, dword ptr [rsp+10E8h+var_DD8+0Ch]
            }
            BYTE1(v824) = v574;
            __asm { vaddss  xmm3, xmm1, xmm8 }
            if ( _EAX > 255 )
              _EAX = 255;
            v833.array[1] = v574;
            v579 = _EAX;
            __asm { vroundss xmm1, xmm4, xmm3, 1 }
            if ( _EAX < 0 )
              v579 = 0;
            __asm
            {
              vcvttss2si eax, xmm1
              vmulss  xmm1, xmm6, dword ptr cs:?colorBlack@@3Tvec4_t@@B; vec4_t const colorBlack
            }
            BYTE2(v824) = v579;
            __asm { vaddss  xmm3, xmm1, xmm8 }
            if ( _EAX > 255 )
              _EAX = 255;
            v833.array[2] = v579;
            v584 = _EAX;
            __asm { vroundss xmm1, xmm4, xmm3, 1 }
            if ( _EAX < 0 )
              v584 = 0;
            HIBYTE(v824) = v584;
            v833.array[3] = v584;
            __asm
            {
              vcvttss2si ecx, xmm1
              vmulss  xmm1, xmm6, dword ptr cs:?colorBlack@@3Tvec4_t@@B+4; vec4_t const colorBlack
              vaddss  xmm3, xmm1, xmm8
            }
            if ( _ECX > 255 )
              _ECX = 255;
            v589 = _ECX;
            __asm { vroundss xmm1, xmm4, xmm3, 1 }
            if ( _ECX < 0 )
              v589 = 0;
            __asm
            {
              vcvttss2si ecx, xmm1
              vmulss  xmm1, xmm6, dword ptr cs:?colorBlack@@3Tvec4_t@@B+8; vec4_t const colorBlack
            }
            v830.array[0] = v589;
            __asm { vaddss  xmm3, xmm1, xmm8 }
            if ( _ECX > 255 )
              _ECX = 255;
            v594 = _ECX;
            __asm { vroundss xmm1, xmm4, xmm3, 1 }
            if ( _ECX < 0 )
              v594 = 0;
            __asm
            {
              vcvttss2si ecx, xmm1
              vmulss  xmm1, xmm6, dword ptr cs:?colorBlack@@3Tvec4_t@@B+0Ch; vec4_t const colorBlack
            }
            v830.array[1] = v594;
            if ( _ECX > 255 )
              _ECX = 255;
            v598 = _ECX;
            if ( _ECX < 0 )
              v598 = 0;
            v830.array[2] = v598;
            __asm
            {
              vaddss  xmm3, xmm1, xmm8
              vroundss xmm1, xmm4, xmm3, 1
              vcvttss2si ecx, xmm1
              vxorps  xmm1, xmm1, xmm1
            }
            if ( _ECX > 255 )
              _ECX = 255;
            v603 = _ECX;
            if ( _ECX < 0 )
              v603 = 0;
            v830.array[3] = v603;
            _RAX = &colorWhite;
            if ( v547->bspOnly )
              _RAX = &colorLtBlue;
            __asm
            {
              vmovups xmm3, xmmword ptr [rax]
              vmulss  xmm0, xmm3, xmm6
              vaddss  xmm2, xmm0, xmm8
              vmovss  xmm2, xmm1, xmm2
              vroundss xmm0, xmm4, xmm2, 1
              vcvttss2si ecx, xmm0
              vshufps xmm0, xmm3, xmm3, 55h ; 'U'
            }
            if ( _ECX > 255 )
              _ECX = 255;
            v612 = _ECX;
            __asm { vmulss  xmm0, xmm0, xmm6 }
            if ( _ECX < 0 )
              v612 = 0;
            __asm { vaddss  xmm2, xmm0, xmm8 }
            LOBYTE(v827) = v612;
            __asm
            {
              vmovss  xmm2, xmm1, xmm2
              vroundss xmm0, xmm4, xmm2, 1
              vcvttss2si ecx, xmm0
              vshufps xmm0, xmm3, xmm3, 0AAh ; 'ª'
            }
            if ( _ECX > 255 )
              _ECX = 255;
            v619 = _ECX;
            __asm { vmulss  xmm0, xmm0, xmm6 }
            if ( _ECX < 0 )
              v619 = 0;
            __asm { vaddss  xmm2, xmm0, xmm8 }
            BYTE1(v827) = v619;
            __asm
            {
              vmovss  xmm2, xmm1, xmm2
              vroundss xmm0, xmm4, xmm2, 1
              vcvttss2si ecx, xmm0
              vshufps xmm3, xmm3, xmm3, 0FFh
            }
            if ( _ECX > 255 )
              _ECX = 255;
            v626 = _ECX;
            __asm { vmulss  xmm0, xmm3, xmm6 }
            if ( _ECX < 0 )
              v626 = 0;
            __asm { vaddss  xmm2, xmm0, xmm8 }
            BYTE2(v827) = v626;
            __asm
            {
              vmovss  xmm2, xmm1, xmm2
              vroundss xmm0, xmm4, xmm2, 1
              vcvttss2si ecx, xmm0
              vxorps  xmm0, xmm0, xmm0
            }
            if ( _ECX > 255 )
              _ECX = 255;
            v633 = _ECX;
            if ( _ECX < 0 )
              v633 = 0;
            HIBYTE(v827) = v633;
            __asm
            {
              vcvtsi2ss xmm0, xmm0, eax
              vmulss  xmm1, xmm0, xmm9
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, eax
              vaddss  xmm14, xmm1, xmm11
              vmulss  xmm1, xmm0, xmm9
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, rax
              vcomiss xmm14, xmm0
              vaddss  xmm10, xmm1, xmm7
            }
            if ( !__CFADD__(v536, v821 - v547->gridY) )
            {
              __asm
              {
                vxorps  xmm0, xmm0, xmm0
                vcvtsi2ss xmm0, xmm0, rax
                vcomiss xmm10, xmm0
              }
              if ( !__CFADD__(v536, v821 - v547->gridY) )
              {
                R_SunShadow_GetMapSize();
                __asm
                {
                  vxorps  xmm6, xmm6, xmm6
                  vcvtsi2ss xmm6, xmm6, rax
                }
                R_SunShadow_GetMapSize();
                __asm
                {
                  vxorps  xmm2, xmm2, xmm2
                  vcvtsi2ss xmm2, xmm2, rax
                  vxorps  xmm1, xmm1, xmm1
                  vxorps  xmm0, xmm0, xmm0
                  vcvtsi2ss xmm0, xmm0, rax
                  vcvtsi2ss xmm1, xmm1, rax
                }
                v653 = v547->bspOnly;
                __asm
                {
                  vdivss  xmm7, xmm1, xmm2
                  vdivss  xmm6, xmm0, xmm6
                  vaddss  xmm2, xmm7, xmm12
                  vaddss  xmm1, xmm6, xmm12
                }
                if ( v653 )
                {
                  __asm
                  {
                    vmovss  xmm0, [rsp+10E8h+var_1060]
                    vmulss  xmm9, xmm0, xmm8
                    vaddss  xmm10, xmm10, xmm9
                    vaddss  xmm14, xmm14, xmm9
                  }
                }
                if ( v546 == 2 )
                {
                  __asm { vcomiss xmm9, cs:__real@42800000 }
                  v677 = 1;
                  __asm { vcomiss xmm9, cs:__real@43000000 }
                  v678 = 1;
                }
                else
                {
                  if ( !v653 )
                  {
                    __asm
                    {
                      vmovups xmm0, xmmword ptr [r15]
                      vmovss  [rsp+10E8h+var_10A0], xmm2
                      vmovss  dword ptr [rsp+10E8h+var_10A8], xmm1
                      vmovss  dword ptr [rsp+10E8h+var_10B0], xmm7
                      vmovss  dword ptr [rsp+10E8h+var_10B8], xmm6
                      vmovss  [rsp+10E8h+w], xmm9
                      vmovaps xmm3, xmm10
                      vmovaps xmm2, xmm14
                      vmovss  dword ptr [rsp+10E8h+fmt], xmm9
                      vmovups [rsp+10E8h+var_F08], xmm0
                    }
                    RB_DrawStretchPic(&v868, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, fmth, wf, v783, v791, v799, v806, v824, GFX_PRIM_STATS_HUD);
                    __asm
                    {
                      vmovups xmm0, xmmword ptr [r15]
                      vmovups [rsp+10E8h+var_EF8], xmm0
                    }
                    RB_EndTessSurfaceInternal(&v869, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sunshadow.cpp(1396)");
                  }
                  _RAX = v852;
                  cachedSunShadowIndex = v547->cachedSunShadowIndex;
                  __asm
                  {
                    vmovups ymm0, ymmword ptr [rax]
                    vmovups [rsp+10E8h+var_E18], ymm0
                  }
                  R_SunShadowCache_GetDepthRt((R_RT_DepthHandle *)&v886, cachedSunShadowIndex, &v882);
                  v666 = &R_RT_Handle::GetSurface(&v886)->m_image;
                  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
                    __debugbreak();
                  v667 = &source->input == NULL;
                  if ( source == (GfxCmdBufSourceState *)-1792i64 )
                  {
                    v668 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input");
                    v667 = !v668;
                    if ( v668 )
                      __debugbreak();
                  }
                  _RCX = *(GfxCmdBufSourceState **)_R15;
                  source->input.codeImages[4] = &v666->m_base;
                  __asm { vucomiss xmm15, dword ptr [rcx+810h] }
                  if ( !v667 )
                    goto LABEL_228;
                  __asm { vucomiss xmm15, dword ptr [rcx+814h] }
                  if ( !v667 )
                    goto LABEL_228;
                  __asm { vucomiss xmm15, dword ptr [rcx+818h] }
                  if ( !v667 )
                    goto LABEL_228;
                  __asm { vucomiss xmm15, dword ptr [rcx+81Ch] }
                  if ( !v667 )
                  {
LABEL_228:
                    *(_QWORD *)_RCX->input.consts[17].v = 0i64;
                    *(_QWORD *)&_RCX->input.consts[17].xyz.z = 0i64;
                    R_DirtyCodeConstant(_RCX, 0x11u);
                  }
                  __asm
                  {
                    vmovups xmm0, xmmword ptr [r15]
                    vsubss  xmm1, xmm9, cs:__real@40c00000
                    vaddss  xmm3, xmm10, cs:__real@40400000
                    vaddss  xmm2, xmm14, cs:__real@40400000
                    vmovups [rsp+10E8h+var_EE8], xmm0
                    vaddss  xmm0, xmm7, xmm12
                    vmovss  [rsp+10E8h+var_10A0], xmm0
                    vaddss  xmm0, xmm6, xmm12
                    vmovss  dword ptr [rsp+10E8h+var_10A8], xmm0
                    vmovss  dword ptr [rsp+10E8h+var_10B0], xmm7
                    vmovss  dword ptr [rsp+10E8h+var_10B8], xmm6
                    vmovss  [rsp+10E8h+w], xmm1
                    vmovss  dword ptr [rsp+10E8h+fmt], xmm1
                  }
                  RB_DrawStretchPic(&v870, rgp.shadowOverlayMaterial, *(float *)&_XMM2, *(float *)&_XMM3, fmti, wg, v784, v792, v800, v807, v827, GFX_PRIM_STATS_HUD);
                  __asm
                  {
                    vmovups xmm0, xmmword ptr [r15]
                    vmovups [rsp+10E8h+var_ED8], xmm0
                  }
                  RB_EndTessSurfaceInternal(&v871, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sunshadow.cpp(1406)");
                  v677 = 0;
                  v678 = 0;
                }
                if ( v677 )
                {
                  v679 = *(GfxCmdBufState **)(_R15 + 8);
                  __asm
                  {
                    vaddss  xmm7, xmm14, cs:__real@40c00000
                    vcvttss2si rax, xmm14
                  }
                  scissorViewport.x = _RAX;
                  __asm { vcvttss2si rax, xmm10 }
                  scissorViewport.y = _RAX;
                  __asm { vcvttss2si rax, xmm9 }
                  scissorViewport.width = _RAX;
                  scissorViewport.height = _RAX;
                  __asm { vaddss  xmm6, xmm10, xmm13 }
                  R_HW_EnableScissor2D(v679, &scissorViewport);
                  v685 = backEnd.debugFont;
                  v686 = j_va("Grid:%d,%d", (unsigned int)v547->gridX, (unsigned int)v547->gridY);
                  __asm
                  {
                    vmovups xmm0, xmmword ptr [r15]
                    vmovaps xmm3, xmm7
                    vmovss  dword ptr [rsp+10E8h+fmt], xmm6
                    vmovups [rsp+10E8h+var_EC8], xmm0
                  }
                  RB_DrawTextWithShadow(&v872, v686, v685, *(float *)&_XMM3, fmtj, v833, v830);
                  v689 = backEnd.debugFont;
                  __asm { vaddss  xmm6, xmm6, xmm13 }
                  v691 = j_va("Pri:%02d ID:%d", s_sunShadowCacheDebugger.tilePriority[(_QWORD)v850], v840);
                  __asm
                  {
                    vmovups xmm0, xmmword ptr [r15]
                    vmovaps xmm3, xmm7
                    vmovups [rsp+10E8h+var_EB8], xmm0
                    vmovss  dword ptr [rsp+10E8h+fmt], xmm6
                  }
                  RB_DrawTextWithShadow(&v873, v691, v689, *(float *)&_XMM3, fmtk, v833, v830);
                  __asm { vaddss  xmm6, xmm6, xmm13 }
                  if ( v678 )
                  {
                    if ( v808 && v554 )
                    {
                      v695 = backEnd.debugFont;
                      v696 = j_va("ExtentsMask:%i/64", v554);
                      __asm
                      {
                        vmovups xmm0, xmmword ptr [r15]
                        vmovaps xmm3, xmm7
                        vmovups [rsp+10E8h+var_EA8], xmm0
                        vmovss  dword ptr [rsp+10E8h+fmt], xmm6
                      }
                      RB_DrawTextWithShadow(&v874, v696, v695, *(float *)&_XMM3, fmtl, v833, v830);
                      __asm { vaddss  xmm6, xmm6, xmm13 }
                    }
                    genBSP = v547->genBSP;
                    if ( (_DWORD)genBSP != v547->updateFrameIndex )
                    {
                      genSmodel = v547->genSmodel;
                      v701 = backEnd.debugFont;
                      __asm { vaddss  xmm9, xmm6, xmm13 }
                      if ( (_DWORD)genBSP == (_DWORD)genSmodel )
                      {
                        v703 = j_va("DrawListF:%d", genBSP);
                        __asm
                        {
                          vmovups xmm0, xmmword ptr [r15]
                          vmovups [rsp+10E8h+var_E88], xmm0
                        }
                        v705 = &v876;
                      }
                      else
                      {
                        v703 = j_va("DrawlistF:%d,%d", genBSP, genSmodel);
                        __asm
                        {
                          vmovups xmm0, xmmword ptr [r15]
                          vmovups [rsp+10E8h+var_E98], xmm0
                        }
                        v705 = &v875;
                      }
                      __asm
                      {
                        vmovaps xmm3, xmm7
                        vmovss  dword ptr [rsp+10E8h+fmt], xmm6
                      }
                      RB_DrawTextWithShadow((GfxCmdBufContext *)v705, v703, v701, *(float *)&_XMM3, fmtm, v833, v830);
                      __asm { vmovaps xmm6, xmm9 }
                    }
                    v708 = backEnd.debugFont;
                    v709 = j_va("UpdateF:%d,%d,%d", v547->updateFrameIndex, v547->smodelUpdateFrameIndex, v547->terrainUpdateFrameIndex);
                    __asm
                    {
                      vmovups xmm0, xmmword ptr [r15]
                      vmovaps xmm3, xmm7
                      vmovups [rsp+10E8h+var_E78], xmm0
                      vmovss  dword ptr [rsp+10E8h+fmt], xmm6
                    }
                    RB_DrawTextWithShadow(&v877, v709, v708, *(float *)&_XMM3, fmtn, v833, v830);
                    v712 = backEnd.debugFont;
                    __asm { vaddss  xmm6, xmm6, xmm13 }
                    v714 = j_va("UpdateC:%d,%d,%d", v547->updateFrameCount, v547->smodelUpdateCount, v547->terrainUpdateCount);
                    __asm
                    {
                      vmovups xmm0, xmmword ptr [r15]
                      vmovaps xmm3, xmm7
                      vmovups [rsp+10E8h+var_E68], xmm0
                      vmovss  dword ptr [rsp+10E8h+fmt], xmm6
                    }
                    RB_DrawTextWithShadow(&v878, v714, v712, *(float *)&_XMM3, fmto, v833, v830);
                    v717 = backEnd.debugFont;
                    __asm { vaddss  xmm6, xmm6, xmm13 }
                    v719 = j_va("ObjSize:%d,%d", v547->bspCount, v547->smodelCount);
                    __asm
                    {
                      vmovups xmm0, xmmword ptr [r15]
                      vmovaps xmm3, xmm7
                      vmovups [rsp+10E8h+var_E58], xmm0
                      vmovss  dword ptr [rsp+10E8h+fmt], xmm6
                    }
                    RB_DrawTextWithShadow(&v879, v719, v717, *(float *)&_XMM3, fmtp, v833, v830);
                    v722 = v547->missingTransient[0];
                    __asm { vaddss  xmm6, xmm6, xmm13 }
                    if ( (_DWORD)v722 )
                    {
                      v724 = backEnd.debugFont;
                      v725 = j_va("MissingBSP:%d", v722);
                      __asm
                      {
                        vmovups xmm0, xmmword ptr [r15]
                        vmovaps xmm3, xmm7
                        vmovups [rsp+10E8h+var_E48], xmm0
                        vmovss  dword ptr [rsp+10E8h+fmt], xmm6
                      }
                      RB_DrawTextWithShadow(&v880, v725, v724, *(float *)&_XMM3, fmtq, v833, v830);
                      __asm { vaddss  xmm6, xmm6, xmm13 }
                    }
                    v728 = v547->missingTransient[1];
                    if ( (_DWORD)v728 )
                    {
                      v729 = backEnd.debugFont;
                      v730 = j_va("MissingSmodel:%d", v728);
                      __asm
                      {
                        vmovups xmm0, xmmword ptr [r15]
                        vmovaps xmm3, xmm7
                        vmovups [rsp+10E8h+var_FF8], xmm0
                        vmovss  dword ptr [rsp+10E8h+fmt], xmm6
                      }
                      RB_DrawTextWithShadow(&v853, v730, v729, *(float *)&_XMM3, fmtr, v833, v830);
                      __asm { vaddss  xmm6, xmm6, xmm13 }
                    }
                    if ( !v547->finalized )
                    {
                      v733 = backEnd.debugFont;
                      v734 = j_va("Finalized:%d,%d", v547->modelsFinalized, v547->terrainFinalized);
                      __asm
                      {
                        vmovups xmm0, xmmword ptr [r15]
                        vmovaps xmm3, xmm7
                        vmovups [rsp+10E8h+var_FE8], xmm0
                        vmovss  dword ptr [rsp+10E8h+fmt], xmm6
                      }
                      RB_DrawTextWithShadow(&v854, v734, v733, *(float *)&_XMM3, fmts, v833, v830);
                    }
                  }
                  __asm
                  {
                    vmovups xmm0, xmmword ptr [r15]
                    vmovups [rsp+10E8h+var_FD8], xmm0
                  }
                  RB_EndTessSurfaceInternal(&v855, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sunshadow.cpp(1498)");
                  R_HW_DisableScissor2D(*(GfxCmdBufState **)(_R15 + 8));
                  v546 = v812;
                }
                _R13 = p_sunShadow;
                __asm
                {
                  vmovss  xmm6, cs:__real@437f0000
                  vmovss  xmm9, [rsp+10E8h+var_1060]
                }
              }
            }
          }
        }
        else
        {
          LODWORD(fmt) = v547->gridY;
          Com_Printf(8, "Found invalid static sun shadow entry ID:%d, grid:%d,%d\n", EntryDebugId, (unsigned int)v547->gridX, fmt);
        }
        tileActiveCount = s_sunShadowCacheDebugger.tileActiveCount;
        v544 = v838 + 1;
        v522 = v846;
        v536 = v816;
        v838 = v544;
        __asm { vmovss  xmm7, [rsp+10E8h+var_107C] }
        if ( v544 >= s_sunShadowCacheDebugger.tileActiveCount )
          goto LABEL_253;
      }
    }
LABEL_254:
    __asm
    {
      vmovaps xmm14, [rsp+10E8h+var_C8]
      vmovaps xmm13, [rsp+10E8h+var_B8]
      vmovaps xmm12, [rsp+10E8h+var_A8]
      vmovaps xmm11, [rsp+10E8h+var_98]
      vmovaps xmm10, [rsp+10E8h+var_88]
      vmovaps xmm9, [rsp+10E8h+var_78]
      vmovaps xmm8, [rsp+10E8h+var_68]
      vmovaps xmm7, [rsp+10E8h+var_58]
      vmovaps xmm6, [rsp+10E8h+var_48]
      vmovaps xmm15, [rsp+10E8h+var_D8]
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
  __int64 v10; 
  unsigned int v19; 
  __int64 v21; 
  float v23; 
  float v25; 
  const R_RT_Surface *Surface; 
  unsigned int dataa; 
  ID3D12Resource *buffers; 
  tmat44_t<vec4_t> out; 
  char v31; 
  tmat44_t<vec4_t> in; 
  char v33[458752]; 

  R_SetComputeShader(state, rgp.sunvisTransShadowMask);
  buffers = data->globalSceneConstantBuffer->buffer;
  R_SetComputeConstantBuffers(state, 7, 1, &buffers);
  dataa = data->codeSurfCount[1];
  R_UploadAndSetComputeConstants(state, 2, &dataa, 4u, NULL);
  _RCX = &v31;
  _RAX = &viewInfo->input.data->sunShadow.partition[3];
  v10 = 3i64;
  do
  {
    _RCX += 128;
    __asm { vmovups xmm0, xmmword ptr [rax] }
    _RAX = (GfxSunShadowPartition *)((char *)_RAX + 128);
    __asm
    {
      vmovups xmmword ptr [rcx-80h], xmm0
      vmovups xmm1, xmmword ptr [rax-70h]
      vmovups xmmword ptr [rcx-70h], xmm1
      vmovups xmm0, xmmword ptr [rax-60h]
      vmovups xmmword ptr [rcx-60h], xmm0
      vmovups xmm1, xmmword ptr [rax-50h]
      vmovups xmmword ptr [rcx-50h], xmm1
      vmovups xmm0, xmmword ptr [rax-40h]
      vmovups xmmword ptr [rcx-40h], xmm0
      vmovups xmm1, xmmword ptr [rax-30h]
      vmovups xmmword ptr [rcx-30h], xmm1
      vmovups xmm0, xmmword ptr [rax-20h]
      vmovups xmmword ptr [rcx-20h], xmm0
      vmovups xmm1, xmmword ptr [rax-10h]
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    --v10;
  }
  while ( v10 );
  MatrixTranspose44Aligned(&in, &out);
  v19 = dataa;
  if ( dataa )
  {
    _RCX = v33;
    v21 = dataa;
    _RDX = &data->codeTransShadowSurfs[0].bounds;
    do
    {
      v23 = _RDX->halfSize.v[2];
      _RCX += 28;
      __asm { vmovsd  xmm0, qword ptr [rdx+0Ch] }
      _RDX = (Bounds *)((char *)_RDX + 64);
      __asm { vmovsd  qword ptr [rcx-10h], xmm0 }
      *((float *)_RCX - 2) = v23;
      v25 = _RDX[-3].halfSize.v[1];
      __asm
      {
        vmovsd  xmm0, qword ptr [rdx-40h]
        vmovsd  qword ptr [rcx-1Ch], xmm0
      }
      *((float *)_RCX - 5) = v25;
      *((_DWORD *)_RCX - 1) = LODWORD(_RDX[-2].midPoint.v[2]);
      --v21;
    }
    while ( v21 );
  }
  R_UpdateGfxWrappedBuffer(&s_transShadowBoundsDoubleBuffer[data->frameIndex], v33, 28 * v19);
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
  bool v13; 
  const R_RT_Surface *Surface; 
  GfxTextureId textureId; 
  const R_RT_Surface *v16; 
  GfxTexture *textures; 
  vec4_t textures_8; 
  vec4_t solution_8; 
  int dataa[2]; 
  vec4_t mulVec_8; 
  tmat44_t<vec4_t> src; 
  tmat44_t<vec4_t> dst; 
  tmat44_t<vec4_t> out; 
  tmat44_t<vec4_t> mulMat; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
  }
  _RBX = data;
  v13 = !viewInfo->teleported && data->sunShadow.partition[3].isPrevViewProjectionMatrixValid;
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
  v16 = R_RT_Handle::GetSurface(transShadowMaskTemp);
  textures = (GfxTexture *)R_Texture_GetResident(v16->m_image.m_base.textureId);
  R_SetComputeTextures(state, 0, 1, (const GfxTexture *const *)&textures);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx+0E2F10h]
    vmovups ymm1, ymmword ptr [rbx+0E2F30h]
    vmovups ymmword ptr [rbp+0E0h+src], ymm0
    vmovups ymm0, ymmword ptr [rbx+0E3010h]
    vmovups ymmword ptr [rbp+0E0h+src+20h], ymm1
    vmovups ymm1, ymmword ptr [rbx+0E3030h]
    vmovups ymmword ptr [rbp+0E0h+dst], ymm0
    vmovups ymmword ptr [rbp+0E0h+dst+20h], ymm1
  }
  if ( !v13 )
    MatrixCopy44(&src, &dst);
  MatrixTranspose44Aligned(&src, &out);
  MatrixTranspose44Aligned(&dst, &mulMat);
  __asm
  {
    vmovups xmm0, cs:__xmm@3f8000003f8000003f8000003f800000
    vmovups xmmword ptr [rsp+1E0h+mulVec+8], xmm0
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm1, xmm1, xmm1
    vmovups xmmword ptr [rsp+1E0h+solution+8], xmm0
    vmovups xmmword ptr [rsp+1E0h+textures+8], xmm1
  }
  MatrixVecMultiply(&out, &mulVec_8, &textures_8);
  MatrixVecMultiply(&mulMat, &mulVec_8, &solution_8);
  __asm
  {
    vmovss  xmm3, cs:__real@3f800000
    vdivss  xmm6, xmm3, [rsp+1E0h+var_18C]
    vdivss  xmm2, xmm3, dword ptr [rsp+1E0h+solution+4]
    vmovss  xmm3, cs:__real@3f000000
    vmulss  xmm5, xmm2, dword ptr [rsp+1E0h+textures+0Ch]
    vmulss  xmm4, xmm2, dword ptr [rsp+1E0h+textures+8]
    vmulss  xmm2, xmm2, dword ptr [rsp+1E0h+solution]
    vmulss  xmm1, xmm6, [rsp+1E0h+var_190]
    vmovss  [rsp+1E0h+var_190], xmm1
    vmulss  xmm7, xmm4, xmm3
  }
  _ECX = 0;
  _EAX = v13;
  __asm
  {
    vmulss  xmm1, xmm5, xmm3
    vsubss  xmm5, xmm3, xmm1
    vmulss  xmm1, xmm6, dword ptr [rsp+1E0h+solution+8]
    vmulss  xmm4, xmm1, xmm3
    vmulss  xmm1, xmm6, dword ptr [rsp+1E0h+solution+0Ch]
    vaddss  xmm0, xmm7, xmm3
    vmovss  dword ptr [rsp+1E0h+solution], xmm2
    vaddss  xmm2, xmm4, xmm3
    vmovss  dword ptr [rsp+1E0h+textures+8], xmm0
    vmovss  dword ptr [rsp+1E0h+solution+8], xmm2
    vmulss  xmm2, xmm1, xmm3
    vsubss  xmm3, xmm3, xmm2
    vsubss  xmm1, xmm3, xmm5
    vsubss  xmm0, xmm4, xmm7
    vmovss  dword ptr [rsp+5Ch], xmm1
    vmovd   xmm1, ecx
    vmovss  [rsp+1E0h+data], xmm0
    vmovd   xmm0, eax
    vmovss  dword ptr [rsp+1E0h+solution+0Ch], xmm3
    vpcmpeqd xmm3, xmm0, xmm1
    vmovss  xmm1, cs:?rg@@3Ur_globals_t@@A.transShadowPrevFrameMaskLerpFactor; r_globals_t rg
    vxorps  xmm2, xmm2, xmm2
    vblendvps xmm0, xmm1, xmm2, xmm3
    vmovss  dword ptr [rsp+1E0h+mulVec], xmm0
    vmovss  dword ptr [rsp+1E0h+textures+0Ch], xmm5
  }
  R_UploadAndSetComputeConstants(state, 2, dataa, 0xCu, NULL);
  R_Dispatch(state, 4u, 4u, 1u);
  __asm
  {
    vmovaps xmm6, xmmword ptr [rsp+1E0h+var_48+8]
    vmovaps xmm7, [rsp+1E0h+var_58+8]
  }
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

