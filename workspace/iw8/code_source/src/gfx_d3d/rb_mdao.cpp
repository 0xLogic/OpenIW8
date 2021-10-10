/*
==============
RB_MDAO_Generate
==============
*/

void __fastcall RB_MDAO_Generate(ComputeCmdBufState *computeState, const GfxViewInfo *const viewInfo, const GfxBackEndData *data)
{
  ?RB_MDAO_Generate@@YAXPEAUComputeCmdBufState@@QEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(computeState, viewInfo, data);
}

/*
==============
R_MDAO_AnyOccluderVisible
==============
*/

bool __fastcall R_MDAO_AnyOccluderVisible(const GfxViewInfo *viewInfo)
{
  return ?R_MDAO_AnyOccluderVisible@@YA_NPEBUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
R_MDAO_AnyVolumeOccluderVisible
==============
*/

bool __fastcall R_MDAO_AnyVolumeOccluderVisible(const GfxViewInfo *viewInfo)
{
  return ?R_MDAO_AnyVolumeOccluderVisible@@YA_NPEBUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
R_MDAO_ComputeTileBoundingBoxes
==============
*/

void __fastcall R_MDAO_ComputeTileBoundingBoxes(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxBackEndData *data, const R_RT_ColorHandle *rtFloatzHalf, const GfxWrappedRWBuffer *bufBoundingBoxes)
{
  ?R_MDAO_ComputeTileBoundingBoxes@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@AEBVR_RT_ColorHandle@@PEBUGfxWrappedRWBuffer@@@Z(computeState, viewInfo, data, rtFloatzHalf, bufBoundingBoxes);
}

/*
==============
RB_MDAO_DrawVolumeOccluders
==============
*/

void __fastcall RB_MDAO_DrawVolumeOccluders(GfxCmdBufContext *context, const GfxViewInfo *viewInfo, const GfxBackEndData *data, R_RT_ColorHandle *rtMdao)
{
  ?RB_MDAO_DrawVolumeOccluders@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@VR_RT_ColorHandle@@@Z(context, viewInfo, data, rtMdao);
}

/*
==============
R_MDAO_UpdateConstants
==============
*/

void __fastcall R_MDAO_UpdateConstants(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?R_MDAO_UpdateConstants@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(computeState, viewInfo, data);
}

/*
==============
R_MDAO_DrawVolumeOccluders
==============
*/

void __fastcall R_MDAO_DrawVolumeOccluders(GfxCmdBufContext *context, const GfxViewInfo *viewInfo, const GfxBackEndData *data, const R_RT_ColorHandle *rtFloatzHalf, const R_RT_ColorHandle *rtTangentFrame)
{
  ?R_MDAO_DrawVolumeOccluders@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@AEBVR_RT_ColorHandle@@3@Z(context, viewInfo, data, rtFloatzHalf, rtTangentFrame);
}

/*
==============
R_MDAO_CullOccluders
==============
*/

void __fastcall R_MDAO_CullOccluders(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxBackEndData *data, const GfxWrappedBuffer *bufBoundingBoxes, const GfxWrappedRWBuffer *bufCullResults)
{
  ?R_MDAO_CullOccluders@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@PEBUGfxWrappedBuffer@@PEBUGfxWrappedRWBuffer@@@Z(computeState, viewInfo, data, bufBoundingBoxes, bufCullResults);
}

/*
==============
R_MDAO_ComputeOcclusion
==============
*/

void __fastcall R_MDAO_ComputeOcclusion(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxBackEndData *data, const GfxWrappedBuffer *bufBoundingBoxes, const GfxWrappedBuffer *bufCullResults, const R_RT_ColorHandle *rtFloatHalf, const R_RT_ColorHandle *rtTangentBasis, const R_RT_ColorHandle *rtMdao)
{
  ?R_MDAO_ComputeOcclusion@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@PEBUGfxWrappedBuffer@@3AEBVR_RT_ColorHandle@@44@Z(computeState, viewInfo, data, bufBoundingBoxes, bufCullResults, rtFloatHalf, rtTangentBasis, rtMdao);
}

/*
==============
RB_MDAO_DrawVolumeOccluders
==============
*/
void RB_MDAO_DrawVolumeOccluders(GfxCmdBufContext *context, const GfxViewInfo *viewInfo, const GfxBackEndData *data, R_RT_ColorHandle *rtMdao)
{
  R_RT_Handle v9; 
  unsigned __int16 m_surfaceID; 
  bool v12; 
  __int16 v13; 
  unsigned __int16 v14; 
  bool v16; 
  GfxCmdBufSourceState *source; 
  GfxCmdBufSourceState *v18; 
  GfxCmdBufState *state; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  GfxCmdBufContext v23; 
  unsigned __int16 v24; 
  GfxCmdBufState *v27; 
  R_RT_Handle m_floatZFullRt; 
  R_RT_Handle v31; 
  R_RT_Handle v32; 
  R_RT_Group v33; 
  R_RT_Handle v34; 
  R_RT_Group v35; 

  m_floatZFullRt = (R_RT_Handle)viewInfo->sceneRtInput.m_floatZFullRt;
  v9 = *R_RT_GetViewInternal(&v32, &m_floatZFullRt, 0, 1);
  m_surfaceID = _XMM0;
  m_floatZFullRt = v9;
  v31 = v9;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v31);
    if ( (R_RT_Handle::GetSurface(&v31)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      LODWORD(_RDI) = v31.m_tracking.m_allocCounter;
      m_surfaceID = v31.m_surfaceID;
      v9 = v31;
      __debugbreak();
    }
    else
    {
      LODWORD(_RDI) = v31.m_tracking.m_allocCounter;
      m_surfaceID = v31.m_surfaceID;
      v9 = v31;
    }
  }
  else
  {
    __asm { vpextrd rdi, xmm0, 2 }
    if ( (_DWORD)_RDI )
    {
      v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v9 = m_floatZFullRt;
      if ( v12 )
        __debugbreak();
    }
  }
  v34 = v9;
  v13 = m_surfaceID & 0x7FFF;
  if ( v13 )
  {
    v14 = v13 | 0x8000;
    m_floatZFullRt.m_surfaceID = v14;
  }
  else
  {
    v14 = 0;
    m_floatZFullRt.m_surfaceID = 0;
  }
  _XMM0 = *(_OWORD *)&v31.m_tracking.m_allocCounter;
  m_floatZFullRt.m_tracking = v31.m_tracking;
  if ( v14 )
  {
    R_RT_Handle::GetSurface(&m_floatZFullRt);
    if ( (R_RT_Handle::GetSurface(&m_floatZFullRt)->m_rtFlagsInternal & 0x18) == 0 )
      goto LABEL_19;
    v16 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
  }
  else
  {
    if ( !(_DWORD)_RDI )
      goto LABEL_19;
    v16 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
  }
  if ( v16 )
    __debugbreak();
LABEL_19:
  source = context->source;
  v18 = context->source;
  v32 = m_floatZFullRt;
  R_InitCmdBufSourceState(v18, &viewInfo->input);
  state = context->state;
  if ( (*((_BYTE *)&source->input + 7920) & 1) != 0 )
  {
    R_LockIfGfxImmediateContext(state->device);
    R_InitCmdBufState(state);
  }
  else
  {
    R_LockGfxImmediateContext();
    _XMM0 = (__int128)*RB_GetBackendCmdBufContext((const GfxCmdBufContext *)&v31);
    __asm { vpextrq rdx, xmm0, 1; in }
    if ( state != _RDX )
      GfxCmdBufState::Copy(state, _RDX);
  }
  memset_0(state->perPrimConstantState, 255, sizeof(state->perPrimConstantState));
  memset_0(state->perObjectConstantState, 255, sizeof(state->perObjectConstantState));
  memset_0(state->stableConstantState, 255, sizeof(state->stableConstantState));
  state->data = source->input.data;
  Sys_ProfBeginNamedEvent(0xFFFF7F50, "MDAO Draw Volume Occluders");
  R_ProfBeginNamedEvent(state, "MDAO Draw Volume Occluders");
  R_GPU_BeginTimer(GPU_TIMER_MDAO_VOLUMES);
  R_SetViewportStruct(source, &viewInfo->sceneViewport);
  m_floatZFullRt = rtMdao->R_RT_Handle;
  height = R_RT_Handle::GetSurface(&m_floatZFullRt)->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface(&m_floatZFullRt);
  R_SetRenderTargetSize(source, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FULL);
  v23 = *context;
  v24 = _XMM0;
  v31 = rtMdao->R_RT_Handle;
  m_floatZFullRt = v31;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&m_floatZFullRt);
    LODWORD(_RBX) = m_floatZFullRt.m_tracking.m_allocCounter;
    v24 = m_floatZFullRt.m_surfaceID;
    v31 = m_floatZFullRt;
  }
  else
  {
    __asm { vpextrd rbx, xmm0, 2 }
    if ( (_DWORD)_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 453, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
      __debugbreak();
  }
  v33.m_colorRtCount = 1;
  m_floatZFullRt.m_surfaceID = 0;
  m_floatZFullRt.m_tracking.m_allocCounter = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&m_floatZFullRt.m_tracking.m_name = _XMM0;
  v34 = v31;
  if ( v24 )
  {
    R_RT_Handle::GetSurface(&v34);
  }
  else
  {
    if ( (_DWORD)_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 442, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
      __debugbreak();
  }
  v33.m_colorRts[0] = (R_RT_ColorHandle)v31;
  v33.m_depthRt = (R_RT_DepthHandle)m_floatZFullRt;
  v35 = v33;
  *(GfxCmdBufContext *)&v31.m_surfaceID = v23;
  R_SetRenderTargetsInternal((GfxCmdBufContext *)&v31, &v35, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_mdao.cpp(409)");
  v27 = context->state;
  v34 = rtMdao->R_RT_Handle;
  R_AddRenderTargetTransition(v27, (R_RT_ColorHandle *)&v34, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(v27);
  *(GfxCmdBufContext *)&v31.m_surfaceID = v23;
  R_MDAO_DrawVolumeOccluders((GfxCmdBufContext *)&v31, viewInfo, data, (const R_RT_ColorHandle *)&v32, &viewInfo->sceneRtInput.m_mainSceneTangentFrameRt);
  v32 = rtMdao->R_RT_Handle;
  R_AddRenderTargetTransition(v27, (R_RT_ColorHandle *)&v32, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(v27);
  R_GPU_EndTimer();
  R_ProfEndNamedEvent(v27);
  Sys_ProfEndNamedEvent();
  R_ResetRenderTargets(v27);
  if ( (*((_BYTE *)&context->source->input + 7920) & 1) != 0 )
  {
    R_ShutdownCmdBufState(v27);
    R_UnlockIfGfxImmediateContext(v27->device);
  }
  else
  {
    _XMM0 = (__int128)*RB_GetBackendCmdBufContext((const GfxCmdBufContext *)&v31);
    __asm { vpextrq rcx, xmm0, 1; out }
    if ( v27 != _RCX )
    {
      GfxCmdBufState::Copy(_RCX, v27);
      R_FlushImmediateContext();
    }
    R_UnlockGfxImmediateContext();
  }
}

/*
==============
RB_MDAO_Generate
==============
*/
void RB_MDAO_Generate(ComputeCmdBufState *computeState, const GfxViewInfo *const viewInfo, const GfxBackEndData *data)
{
  R_RT_Handle v7; 
  unsigned __int16 m_surfaceID; 
  bool v10; 
  __int16 v11; 
  unsigned __int16 v12; 
  bool v13; 
  R_RT_Handle m_mdaoRt; 
  __int64 mdaoFrame; 
  int v16; 
  int v17; 
  const R_RT_Surface *Surface; 
  __int64 v19; 
  int v20; 
  int v21; 
  const R_RT_Surface *v22; 
  const GfxTexture *Resident; 
  const R_RT_Surface *v24; 
  const GfxTexture *v25; 
  ID3D12Resource *buffers[2]; 
  R_RT_Handle v27; 
  R_RT_ColorHandle rtTangentBasis; 
  R_RT_Handle rtMdao; 

  rtMdao = (R_RT_Handle)viewInfo->sceneRtInput.m_floatZFullRt;
  v7 = *R_RT_GetViewInternal(&rtTangentBasis, &rtMdao, 0, 1);
  m_surfaceID = _XMM0;
  rtMdao = v7;
  v27 = v7;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v27);
    if ( (R_RT_Handle::GetSurface(&v27)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      LODWORD(_RDI) = v27.m_tracking.m_allocCounter;
      m_surfaceID = v27.m_surfaceID;
      v7 = v27;
      __debugbreak();
    }
    else
    {
      LODWORD(_RDI) = v27.m_tracking.m_allocCounter;
      m_surfaceID = v27.m_surfaceID;
      v7 = v27;
    }
  }
  else
  {
    __asm { vpextrd rdi, xmm0, 2 }
    if ( (_DWORD)_RDI )
    {
      v10 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v7 = rtMdao;
      if ( v10 )
        __debugbreak();
    }
  }
  rtMdao = v7;
  v11 = m_surfaceID & 0x7FFF;
  if ( v11 )
  {
    v12 = v11 | 0x8000;
    rtMdao.m_surfaceID = v12;
  }
  else
  {
    v12 = 0;
    rtMdao.m_surfaceID = 0;
  }
  rtMdao.m_tracking = v27.m_tracking;
  if ( v12 )
  {
    R_RT_Handle::GetSurface(&rtMdao);
    if ( (R_RT_Handle::GetSurface(&rtMdao)->m_rtFlagsInternal & 0x18) == 0 )
      goto LABEL_19;
    v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
  }
  else
  {
    if ( !(_DWORD)_RDI )
      goto LABEL_19;
    v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
  }
  if ( v13 )
    __debugbreak();
LABEL_19:
  m_mdaoRt = (R_RT_Handle)viewInfo->sceneRtInput.m_mdaoRt;
  v27 = rtMdao;
  rtTangentBasis = viewInfo->sceneRtInput.m_mainSceneTangentFrameRt;
  rtMdao = m_mdaoRt;
  Sys_ProfBeginNamedEvent(0xFFFF7F50, "MDAO");
  R_MDAO_UpdateConstants(computeState, viewInfo, data);
  R_HW_AddResourceTransition(computeState, &mdaoGlob.tileBoundingBoxes, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(computeState);
  R_ProfBeginNamedEvent(computeState, "MDAO Compute Tile BBoxes");
  R_GPU_BeginTimer(GPU_TIMER_MDAO_BOUNDING_BOXES);
  mdaoFrame = data->mdaoFrame;
  v16 = (signed int)viewInfo->sceneViewport.width / 2;
  v17 = (signed int)viewInfo->sceneViewport.height / 2;
  R_SetComputeShader(computeState, rgp.mdaoComputeTileBboxes);
  buffers[0] = mdaoGlob.frameData[mdaoFrame].mdaoConstants.buffer;
  R_SetComputeConstantBuffers(computeState, 0, 1, buffers);
  Surface = R_RT_Handle::GetSurface(&v27);
  buffers[0] = (ID3D12Resource *)R_Texture_GetResident(Surface->m_image.m_base.textureId);
  R_SetComputeTextures(computeState, 0, 1, (const GfxTexture *const *)buffers);
  buffers[0] = (ID3D12Resource *)&mdaoGlob.tileBoundingBoxes.rwView;
  R_SetComputeRWViewsWithCounters(computeState, 0, 1, (const GfxShaderBufferRWView *const *)buffers, NULL);
  R_Dispatch(computeState, (v16 + 15) / 16, (v17 + 15) / 16, 1u);
  R_GPU_EndTimer();
  R_ProfEndNamedEvent(computeState);
  R_HW_AddResourceTransition(computeState, &mdaoGlob.tileBoundingBoxes, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_AddResourceTransition(computeState, &mdaoGlob.cullingResults, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(computeState);
  R_ProfBeginNamedEvent(computeState, "MDAO Cull occluders");
  R_GPU_BeginTimer(GPU_TIMER_MDAO_OCCLUDERS);
  v19 = data->mdaoFrame;
  v20 = (signed int)viewInfo->sceneViewport.width / 2;
  v21 = (signed int)viewInfo->sceneViewport.height / 2;
  R_SetComputeShader(computeState, rgp.mdaoOccluderCulling);
  v19 *= 26752i64;
  buffers[0] = *(ID3D12Resource **)((char *)&mdaoGlob.frameData[0].mdaoConstants.buffer + v19);
  R_SetComputeConstantBuffers(computeState, 0, 1, buffers);
  buffers[0] = (ID3D12Resource *)&mdaoGlob.tileBoundingBoxes.view;
  R_SetComputeViews(computeState, 0, 1, (const GfxShaderBufferView *const *)buffers);
  buffers[0] = (ID3D12Resource *)((char *)&mdaoGlob.frameData[0].capsuleOccluders.view + v19);
  R_SetComputeViews(computeState, 1, 1, (const GfxShaderBufferView *const *)buffers);
  buffers[0] = (ID3D12Resource *)&mdaoGlob.cullingResults.rwView;
  R_SetComputeRWViewsWithCounters(computeState, 0, 1, (const GfxShaderBufferRWView *const *)buffers, NULL);
  R_Dispatch(computeState, (v20 + 15) / 16, (v21 + 15) / 16, 1u);
  R_GPU_EndTimer();
  R_ProfEndNamedEvent(computeState);
  R_HW_AddResourceTransition(computeState, &mdaoGlob.cullingResults, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v22 = R_RT_Handle::GetSurface(&rtMdao);
  Resident = R_Texture_GetResident(v22->m_image.m_base.textureId);
  R_HW_AddResourceTransition(computeState, Resident, 0xFFFFFFFF, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(computeState);
  R_ProfBeginNamedEvent(computeState, "MDAO Compute Occlusion");
  R_GPU_BeginTimer(GPU_TIMER_MDAO_OCCLUSION);
  R_MDAO_ComputeOcclusion(computeState, viewInfo, data, &mdaoGlob.tileBoundingBoxes, &mdaoGlob.cullingResults, (const R_RT_ColorHandle *)&v27, &rtTangentBasis, (const R_RT_ColorHandle *)&rtMdao);
  R_GPU_EndTimer();
  R_ProfEndNamedEvent(computeState);
  v24 = R_RT_Handle::GetSurface(&rtMdao);
  v25 = R_Texture_GetResident(v24->m_image.m_base.textureId);
  R_HW_AddResourceTransition(computeState, v25, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(computeState);
  Sys_ProfEndNamedEvent();
}

/*
==============
R_MDAO_AnyOccluderVisible
==============
*/
bool R_MDAO_AnyOccluderVisible(const GfxViewInfo *viewInfo)
{
  MDAOFrameData *v1; 

  v1 = &mdaoGlob.frameData[viewInfo->input.data->mdaoFrame];
  return v1->occluderCount > 0 || v1->volumeOccluderCount > 0;
}

/*
==============
R_MDAO_AnyVolumeOccluderVisible
==============
*/
bool R_MDAO_AnyVolumeOccluderVisible(const GfxViewInfo *viewInfo)
{
  return mdaoGlob.frameData[viewInfo->input.data->mdaoFrame].volumeOccluderCount > 0;
}

/*
==============
R_MDAO_ComputeOcclusion
==============
*/
void R_MDAO_ComputeOcclusion(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxBackEndData *data, const GfxWrappedBuffer *bufBoundingBoxes, const GfxWrappedBuffer *bufCullResults, const R_RT_ColorHandle *rtFloatHalf, const R_RT_ColorHandle *rtTangentBasis, const R_RT_ColorHandle *rtMdao)
{
  __int64 mdaoFrame; 
  int v11; 
  int v12; 
  const R_RT_Surface *Surface; 
  __int64 v14; 
  const R_RT_Surface *v15; 
  const R_RT_Surface *v16; 
  const R_RT_Surface *v17; 
  GfxTexture *textures; 
  GfxTexture *Resident; 
  GfxTexture *v20[3]; 
  GfxShaderBufferView *views[3]; 

  mdaoFrame = data->mdaoFrame;
  v11 = ((signed int)viewInfo->sceneViewport.width / 2 + 15) / 16;
  v12 = ((signed int)viewInfo->sceneViewport.height / 2 + 15) / 16;
  if ( rg.vrs != ((R_RT_Handle::GetSurface(&rtTangentBasis->R_RT_Handle)->m_rtFlags & 0x4000) != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_mdao.cpp", 179, ASSERT_TYPE_ASSERT, "(( rg.vrs ) == rtTangentBasis.IsMultisampled())", (const char *)&queryFormat, "( rg.vrs ) == rtTangentBasis.IsMultisampled()") )
    __debugbreak();
  if ( rg.vrs )
  {
    R_SetComputeShader(computeState, rgp.mdaoComputeOcclusionMSAA);
    Surface = R_RT_Handle::GetSurface(&rtTangentBasis->R_RT_Handle);
    textures = (GfxTexture *)R_Texture_GetResident(Surface->m_color.m_fmaskImage.m_base.textureId);
    R_SetComputeTextures(computeState, 6, 1, (const GfxTexture *const *)&textures);
  }
  else
  {
    R_SetComputeShader(computeState, rgp.mdaoComputeOcclusion);
  }
  v14 = mdaoFrame;
  textures = (GfxTexture *)mdaoGlob.frameData[v14].mdaoConstants.buffer;
  R_SetComputeConstantBuffers(computeState, 0, 1, (ID3D12Resource *const *const)&textures);
  v15 = R_RT_Handle::GetSurface(&rtFloatHalf->R_RT_Handle);
  v20[0] = (GfxTexture *)R_Texture_GetResident(v15->m_image.m_base.textureId);
  v20[1] = (GfxTexture *)R_Texture_GetResident(rgp.mdaoOcclusionLut->textureId);
  v16 = R_RT_Handle::GetSurface(&rtTangentBasis->R_RT_Handle);
  v20[2] = (GfxTexture *)R_Texture_GetResident(v16->m_image.m_base.textureId);
  R_SetComputeTextures(computeState, 0, 3, (const GfxTexture *const *)v20);
  views[0] = &mdaoGlob.frameData[v14].capsuleOccluders.view;
  views[1] = &bufBoundingBoxes->view;
  views[2] = &bufCullResults->view;
  R_SetComputeViews(computeState, 3, 3, (const GfxShaderBufferView *const *)views);
  v17 = R_RT_Handle::GetSurface(&rtMdao->R_RT_Handle);
  Resident = (GfxTexture *)R_Texture_GetResident(v17->m_image.m_base.textureId);
  R_SetComputeRWTextures(computeState, 0, 1, (const GfxTexture *const *)&Resident);
  R_Dispatch(computeState, v11, v12, 1u);
}

/*
==============
R_MDAO_ComputeTileBoundingBoxes
==============
*/
void R_MDAO_ComputeTileBoundingBoxes(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxBackEndData *data, const R_RT_ColorHandle *rtFloatzHalf, const GfxWrappedRWBuffer *bufBoundingBoxes)
{
  __int64 mdaoFrame; 
  int v8; 
  int v9; 
  const R_RT_Surface *Surface; 
  ID3D12Resource *buffers; 

  mdaoFrame = data->mdaoFrame;
  v8 = (signed int)viewInfo->sceneViewport.width / 2;
  v9 = (signed int)viewInfo->sceneViewport.height / 2;
  R_SetComputeShader(computeState, rgp.mdaoComputeTileBboxes);
  buffers = mdaoGlob.frameData[mdaoFrame].mdaoConstants.buffer;
  R_SetComputeConstantBuffers(computeState, 0, 1, &buffers);
  Surface = R_RT_Handle::GetSurface(&rtFloatzHalf->R_RT_Handle);
  buffers = (ID3D12Resource *)R_Texture_GetResident(Surface->m_image.m_base.textureId);
  R_SetComputeTextures(computeState, 0, 1, (const GfxTexture *const *)&buffers);
  bufBoundingBoxes = (const GfxWrappedRWBuffer *)((char *)bufBoundingBoxes + 32);
  R_SetComputeRWViewsWithCounters(computeState, 0, 1, (const GfxShaderBufferRWView *const *)&bufBoundingBoxes, NULL);
  R_Dispatch(computeState, (v8 + 15) / 16, (v9 + 15) / 16, 1u);
}

/*
==============
R_MDAO_CullOccluders
==============
*/
void R_MDAO_CullOccluders(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxBackEndData *data, const GfxWrappedBuffer *bufBoundingBoxes, const GfxWrappedRWBuffer *bufCullResults)
{
  __int64 mdaoFrame; 
  int v8; 
  int v9; 
  ID3D12Resource *buffers; 

  mdaoFrame = data->mdaoFrame;
  v8 = (signed int)viewInfo->sceneViewport.width / 2;
  v9 = (signed int)viewInfo->sceneViewport.height / 2;
  R_SetComputeShader(computeState, rgp.mdaoOccluderCulling);
  mdaoFrame *= 26752i64;
  buffers = *(ID3D12Resource **)((char *)&mdaoGlob.frameData[0].mdaoConstants.buffer + mdaoFrame);
  R_SetComputeConstantBuffers(computeState, 0, 1, &buffers);
  buffers = (ID3D12Resource *)&bufBoundingBoxes->view;
  R_SetComputeViews(computeState, 0, 1, (const GfxShaderBufferView *const *)&buffers);
  buffers = (ID3D12Resource *)((char *)&mdaoGlob.frameData[0].capsuleOccluders.view + mdaoFrame);
  R_SetComputeViews(computeState, 1, 1, (const GfxShaderBufferView *const *)&buffers);
  bufCullResults = (const GfxWrappedRWBuffer *)((char *)bufCullResults + 32);
  R_SetComputeRWViewsWithCounters(computeState, 0, 1, (const GfxShaderBufferRWView *const *)&bufCullResults, NULL);
  R_Dispatch(computeState, (v8 + 15) / 16, (v9 + 15) / 16, 1u);
}

/*
==============
R_MDAO_DrawVolumeOccluders
==============
*/
void R_MDAO_DrawVolumeOccluders(GfxCmdBufContext *context, const GfxViewInfo *viewInfo, const GfxBackEndData *data, const R_RT_ColorHandle *rtFloatzHalf, const R_RT_ColorHandle *rtTangentFrame)
{
  __int64 mdaoFrame; 
  GfxCmdBufContext *v6; 
  R_RT_ColorHandle *v7; 
  R_RT_ColorHandle *v8; 
  const GfxViewInfo *v9; 
  GfxImage *mdaoOcclusionLut; 
  float width; 
  int height; 
  GfxCmdBufSourceState *source; 
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
  bool vrs; 
  const GfxBackEndData *v27; 
  unsigned int v28; 
  __int64 v29; 
  unsigned int frameCount; 
  unsigned int unsignedInt; 
  __int64 v32; 
  float v33; 
  float v34; 
  float v35; 
  R_RT_Image *p_m_image; 
  GfxCmdBufInput *p_input; 
  GfxCmdBufSourceState *v38; 
  GfxImage *v39; 
  GfxCmdBufInput *v40; 
  const R_RT_Surface *Surface; 
  GfxCmdBufSourceState *v42; 
  R_RT_Image *v43; 
  GfxCmdBufInput *v44; 
  const R_RT_Surface *v45; 
  GfxCmdBufSourceState *v46; 
  $6354FE9254625F25F9BF74DDC4774D51 *v47; 
  GfxCmdBufInput *v48; 
  unsigned __int64 v49; 
  volatile int v50; 
  float *v51; 
  GfxCmdBufSourceState *v52; 
  GfxMatrix *ActiveMatrixForEdit; 
  float v54; 
  float v55; 
  float v56; 
  float v57; 
  float v58; 
  float v59; 
  float v60; 
  float v61; 
  float v62; 
  const GfxImage *v63; 
  GfxCmdBufInput *v64; 
  GfxCmdBufContext v65; 
  __int64 v66; 
  __int64 v67; 
  bool v68; 
  float v69; 
  Material *mdaoVolumeMSAAMaterial; 
  float v72; 
  float v73; 
  float v74; 
  float v75; 
  GfxCmdBufContext *v76; 
  R_RT_Handle *v77; 
  R_RT_Handle *v78; 
  unsigned __int64 v79; 
  GfxCmdBufContext v80; 

  mdaoFrame = data->mdaoFrame;
  v6 = context;
  v7 = (R_RT_ColorHandle *)rtTangentFrame;
  v8 = (R_RT_ColorHandle *)rtFloatzHalf;
  v76 = context;
  v9 = viewInfo;
  v78 = &rtFloatzHalf->R_RT_Handle;
  v77 = &rtTangentFrame->R_RT_Handle;
  v79 = 26752 * mdaoFrame;
  if ( mdaoGlob.frameData[mdaoFrame].volumeOccluderCount )
  {
    R_BeginViewInternal(context->source, &viewInfo->sceneDef, (const GfxViewParms *)viewInfo, &viewInfo->viewParmsSet.frames[1].viewParms);
    R_Set3D(v6->source);
    mdaoOcclusionLut = rgp.mdaoOcclusionLut;
    if ( rgp.mdaoOcclusionLut->width != 256 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_mdao.cpp", 302, ASSERT_TYPE_ASSERT, "(occluderImage->width == 256)", (const char *)&queryFormat, "occluderImage->width == MDAO_LUT_NUM_BEAM_ANGLE_STEPS") )
      __debugbreak();
    if ( mdaoOcclusionLut->height != 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_mdao.cpp", 303, ASSERT_TYPE_ASSERT, "(occluderImage->height == 64)", (const char *)&queryFormat, "occluderImage->height == MDAO_LUT_NUM_OCCLUDER_ANGLE_STEPS") )
      __debugbreak();
    width = (float)mdaoOcclusionLut->width;
    height = mdaoOcclusionLut->height;
    source = v6->source;
    v14 = (float)height;
    v15 = (float)v9->sceneViewport.height;
    v16 = 2.0 / v15;
    v17 = (float)v9->sceneViewport.width;
    if ( (float)(2.0 / v17) != v6->source->input.consts[116].v[0] || v16 != source->input.consts[116].v[1] || 1.0158731 != source->input.consts[116].v[2] || 0.984375 != source->input.consts[116].v[3] )
    {
      source->input.consts[116].v[0] = 2.0 / v17;
      source->input.consts[116].v[1] = v16;
      source->input.consts[116].v[2] = 1.0158731;
      source->input.consts[116].v[3] = 0.984375;
      ++source->constVersions[116];
    }
    v18 = 1.0 / v9->viewParmsSet.frames[0].viewParms.projectionMatrix.m.m[0].v[0];
    v19 = v9->viewParmsSet.frames[0].viewParms.projectionMatrix.m.m[3].v[2];
    v20 = v9->viewParmsSet.frames[0].viewParms.projectionMatrix.m.m[2].v[2];
    v21 = 1.0 / v9->viewParmsSet.frames[0].viewParms.projectionMatrix.m.m[1].v[1];
    if ( v18 != source->input.consts[117].v[0] || v21 != source->input.consts[117].v[1] || v20 != source->input.consts[117].v[2] || v19 != source->input.consts[117].v[3] )
    {
      source->input.consts[117].v[0] = v18;
      source->input.consts[117].v[1] = v21;
      source->input.consts[117].v[2] = v20;
      source->input.consts[117].v[3] = v19;
      ++source->constVersions[117];
    }
    v22 = (float)(1.0 / v14) * 0.5;
    v23 = (float)(v14 - 1.0) * (float)(1.0 / v14);
    v24 = (float)(1.0 / width) * 0.5;
    v25 = (float)(width - 1.0) * (float)(1.0 / width);
    if ( v25 != source->input.consts[118].v[0] || v24 != source->input.consts[118].v[1] || v23 != source->input.consts[118].v[2] || v22 != source->input.consts[118].v[3] )
    {
      source->input.consts[118].v[0] = v25;
      source->input.consts[118].v[1] = v24;
      source->input.consts[118].v[2] = v23;
      source->input.consts[118].v[3] = v22;
      ++source->constVersions[118];
    }
    vrs = rg.vrs;
    v68 = rg.vrs;
    if ( vrs != ((R_RT_Handle::GetSurface(&rtTangentFrame->R_RT_Handle)->m_rtFlags & 0x4000) != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_mdao.cpp", 333, ASSERT_TYPE_ASSERT, "(vrs == rtTangentFrame.IsMultisampled())", (const char *)&queryFormat, "vrs == rtTangentFrame.IsMultisampled()") )
      __debugbreak();
    if ( vrs )
    {
      mdaoVolumeMSAAMaterial = rgp.mdaoVolumeMSAAMaterial;
      v27 = v9->input.data;
      v28 = 0;
      v29 = 0i64;
      frameCount = v27->frameCount;
      do
      {
        unsignedInt = r_vrsDebugFrameSamplePattern->current.unsignedInt;
        if ( unsignedInt == -1 )
          unsignedInt = frameCount & 3;
        if ( unsignedInt >= 4 )
        {
          LODWORD(v67) = 4;
          LODWORD(v66) = unsignedInt;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_variable_rate_shading.h", 76, ASSERT_TYPE_ASSERT, "(unsigned)( samplePattern ) < (unsigned)( 4 )", "samplePattern doesn't index VRS_MAX_SAMPLES\n\t%i not in [0, %i)", v66, v67) )
            __debugbreak();
        }
        v69 = *(float *)&s_VRSPixelToSampleOrdered_1[unsignedInt][v29];
        v32 = (int)v28;
        ++v29;
        ++v28;
        *(&v72 + v32) = v69;
      }
      while ( v28 < 4 );
      v6 = v76;
      v33 = v75;
      v34 = v74;
      source = v76->source;
      v35 = v73;
      vrs = v68;
      v7 = (R_RT_ColorHandle *)v77;
      v8 = (R_RT_ColorHandle *)v78;
      if ( v72 != v76->source->input.consts[120].v[0] || v73 != source->input.consts[120].v[1] || v74 != source->input.consts[120].v[2] || v75 != source->input.consts[120].v[3] )
      {
        source->input.consts[120].v[0] = v72;
        source->input.consts[120].v[1] = v35;
        source->input.consts[120].v[2] = v34;
        source->input.consts[120].v[3] = v33;
        ++source->constVersions[120];
      }
      v9 = viewInfo;
    }
    else
    {
      mdaoVolumeMSAAMaterial = rgp.mdaoVolumeMaterial;
    }
    p_m_image = &R_RT_Handle::GetSurface(v8)->m_image;
    if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
      __debugbreak();
    p_input = &source->input;
    if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    p_input->codeImages[56] = &p_m_image->m_base;
    v38 = v6->source;
    v39 = rgp.mdaoOcclusionLut;
    if ( !v6->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
      __debugbreak();
    v40 = &v38->input;
    if ( !v40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    v40->codeImages[58] = v39;
    Surface = R_RT_Handle::GetSurface(v7);
    v42 = v6->source;
    v43 = &Surface->m_image;
    if ( !v6->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
      __debugbreak();
    v44 = &v42->input;
    if ( !v44 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    v44->codeImages[2] = &v43->m_base;
    if ( vrs )
    {
      v45 = R_RT_Handle::GetSurface(v7);
      v46 = v6->source;
      v47 = &v45->1080;
      if ( !v6->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
        __debugbreak();
      v48 = &v46->input;
      if ( !v48 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
        __debugbreak();
      v48->codeImages[3] = &v47->m_color.m_fmaskImage.m_base;
    }
    v49 = v79;
    v50 = 0;
    if ( mdaoGlob.frameData[v79 / 0x6880].volumeOccluderCount > 0 )
    {
      v51 = &mdaoGlob.frameData[v79 / 0x6880].volumeOccluders[0].viewToOccluder.m.m[0].v[2];
      do
      {
        v52 = v6->source;
        ActiveMatrixForEdit = R_GetActiveMatrixForEdit(v6->source, 0xAAu);
        *ActiveMatrixForEdit = *(GfxMatrix *)(v51 - 18);
        ActiveMatrixForEdit->m.m[3].v[0] = ActiveMatrixForEdit->m.m[3].v[0] + v9->viewParmsSet.frames[0].viewParms.camera.origin.v[0];
        ActiveMatrixForEdit->m.m[3].v[1] = ActiveMatrixForEdit->m.m[3].v[1] + v9->viewParmsSet.frames[0].viewParms.camera.origin.v[1];
        ActiveMatrixForEdit->m.m[3].v[2] = v9->viewParmsSet.frames[0].viewParms.camera.origin.v[2] + ActiveMatrixForEdit->m.m[3].v[2];
        v54 = *(v51 - 2);
        if ( v54 != v52->input.consts[109].v[0] || *(v51 - 1) != v52->input.consts[109].v[1] || *v51 != v52->input.consts[109].v[2] || v51[1] != v52->input.consts[109].v[3] )
        {
          v52->input.consts[109].v[0] = v54;
          v52->input.consts[109].v[1] = *(v51 - 1);
          v52->input.consts[109].v[2] = *v51;
          v52->input.consts[109].v[3] = v51[1];
          ++v52->constVersions[109];
        }
        v55 = v51[2];
        if ( v55 != v52->input.consts[110].v[0] || v51[3] != v52->input.consts[110].v[1] || v51[4] != v52->input.consts[110].v[2] || v51[5] != v52->input.consts[110].v[3] )
        {
          v52->input.consts[110].v[0] = v55;
          v52->input.consts[110].v[1] = v51[3];
          v52->input.consts[110].v[2] = v51[4];
          v52->input.consts[110].v[3] = v51[5];
          ++v52->constVersions[110];
        }
        v56 = v51[6];
        if ( v56 != v52->input.consts[111].v[0] || v51[7] != v52->input.consts[111].v[1] || v51[8] != v52->input.consts[111].v[2] || v51[9] != v52->input.consts[111].v[3] )
        {
          v52->input.consts[111].v[0] = v56;
          v52->input.consts[111].v[1] = v51[7];
          v52->input.consts[111].v[2] = v51[8];
          v52->input.consts[111].v[3] = v51[9];
          ++v52->constVersions[111];
        }
        v57 = v51[10];
        if ( v57 != v52->input.consts[112].v[0] || v51[11] != v52->input.consts[112].v[1] || v51[12] != v52->input.consts[112].v[2] || v51[13] != v52->input.consts[112].v[3] )
        {
          v52->input.consts[112].v[0] = v57;
          v52->input.consts[112].v[1] = v51[11];
          v52->input.consts[112].v[2] = v51[12];
          v52->input.consts[112].v[3] = v51[13];
          R_DirtyCodeConstant(v52, 0x70u);
        }
        v58 = v51[14];
        if ( v58 != v52->input.consts[113].v[0] || v51[15] != v52->input.consts[113].v[1] || v51[16] != v52->input.consts[113].v[2] || v51[17] != v52->input.consts[113].v[3] )
        {
          v52->input.consts[113].v[0] = v58;
          v52->input.consts[113].v[1] = v51[15];
          v52->input.consts[113].v[2] = v51[16];
          v52->input.consts[113].v[3] = v51[17];
          R_DirtyCodeConstant(v52, 0x71u);
        }
        v59 = v51[18];
        if ( v59 != v52->input.consts[114].v[0] || v51[19] != v52->input.consts[114].v[1] || v51[20] != v52->input.consts[114].v[2] || v51[21] != v52->input.consts[114].v[3] )
        {
          v52->input.consts[114].v[0] = v59;
          v52->input.consts[114].v[1] = v51[19];
          v52->input.consts[114].v[2] = v51[20];
          v52->input.consts[114].v[3] = v51[21];
          R_DirtyCodeConstant(v52, 0x72u);
          v52 = v6->source;
        }
        v60 = v51[22];
        if ( v60 != v52->input.consts[115].v[0] || v51[23] != v52->input.consts[115].v[1] || v51[24] != v52->input.consts[115].v[2] || v51[25] != v52->input.consts[115].v[3] )
        {
          v52->input.consts[115].v[0] = v60;
          v52->input.consts[115].v[1] = v51[23];
          v52->input.consts[115].v[2] = v51[24];
          v52->input.consts[115].v[3] = v51[25];
          R_DirtyCodeConstant(v52, 0x73u);
          v52 = v6->source;
        }
        v61 = v51[32];
        v62 = v51[33];
        if ( v61 != v52->input.consts[119].v[0] || v62 != v52->input.consts[119].v[1] || v52->input.consts[119].v[2] != 0.0 || v52->input.consts[119].v[3] != 0.0 )
        {
          v52->input.consts[119].v[0] = v61;
          v52->input.consts[119].v[1] = v62;
          *(_QWORD *)&v52->input.consts[119].xyz.z = 0i64;
          R_DirtyCodeConstant(v52, 0x77u);
        }
        v63 = (const GfxImage *)*((_QWORD *)v51 + 15);
        if ( !v52 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
          __debugbreak();
        v64 = &v52->input;
        if ( !v64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
          __debugbreak();
        v65 = *v6;
        v64->codeImages[57] = v63;
        v80 = v65;
        RB_DrawUnitCube(&v80, mdaoVolumeMSAAMaterial, GFX_PRIM_STATS_CODE, 1);
        v9 = viewInfo;
        ++v50;
        v51 += 52;
      }
      while ( v50 < *(volatile int *)((char *)&mdaoGlob.frameData[0].volumeOccluderCount + v49) );
    }
  }
}

/*
==============
R_MDAO_UpdateConstants
==============
*/
void R_MDAO_UpdateConstants(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  int v4; 
  __int64 mdaoFrame; 
  int v6; 
  float *v7; 
  float v8; 
  float v9; 
  float v10; 
  int v11; 
  unsigned int v12; 
  __int64 width; 
  __int64 height; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  volatile int occluderCount; 
  float fadeoutRadiusScale; 
  __int64 v23; 
  float v24; 
  __int64 v25; 
  float v26; 
  unsigned int frameCount; 
  __int64 unsignedInt; 
  unsigned int v29; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  const GfxWrappedBuffer *buffer; 
  __int128 v34[4]; 

  v4 = (signed int)viewInfo->sceneViewport.width / 2;
  mdaoFrame = data->mdaoFrame;
  v6 = (signed int)viewInfo->sceneViewport.height / 2;
  buffer = &mdaoGlob.frameData[mdaoFrame].mdaoConstants;
  v7 = (float *)R_BeginWrappedBufferDataWrite(&mdaoGlob.frameData[mdaoFrame].mdaoConstants);
  *(_OWORD *)v7 = *(_OWORD *)viewInfo->viewParms.camera.zPlanes;
  v8 = viewInfo->viewParmsSet.frames[0].viewParms.projectionMatrix.m.m[2].v[2];
  v9 = 1.0 / viewInfo->viewParmsSet.frames[0].viewParms.projectionMatrix.m.m[1].v[1];
  v10 = viewInfo->viewParmsSet.frames[0].viewParms.projectionMatrix.m.m[3].v[2];
  v7[4] = 1.0 / viewInfo->viewParmsSet.frames[0].viewParms.projectionMatrix.m.m[0].v[0];
  v7[5] = v9;
  v7[6] = v8;
  v7[7] = v10;
  v11 = v4 + 15;
  v12 = 0;
  *((_DWORD *)v7 + 12) = v11 / 16;
  *((_DWORD *)v7 + 13) = (v6 + 15) / 16;
  *((_QWORD *)v7 + 7) = 0i64;
  width = viewInfo->sceneViewport.width;
  height = viewInfo->sceneViewport.height;
  v15 = (float)(viewInfo->sceneViewport.width >> 1);
  v7[8] = v15;
  v16 = (float)width;
  v17 = (float)((unsigned int)height >> 1);
  v7[9] = v17;
  v7[10] = 2.0 / v16;
  v18 = (float)height;
  v7[11] = 2.0 / v18;
  v19 = (float)rgp.mdaoOcclusionLut->width;
  v20 = (float)rgp.mdaoOcclusionLut->height;
  v7[21] = (float)(1.0 / v19) * 0.5;
  v7[20] = (float)(v19 - 1.0) * (float)(1.0 / v19);
  v7[22] = (float)(v20 - 1.0) * (float)(1.0 / v20);
  v7[23] = (float)(1.0 / v20) * 0.5;
  v7[24] = 1.0158731;
  v7[25] = 0.984375;
  occluderCount = 1024;
  v7[16] = mdaoGlob.frameData[mdaoFrame].sunDirVs.v[0];
  v7[17] = mdaoGlob.frameData[mdaoFrame].sunDirVs.v[1];
  v7[18] = mdaoGlob.frameData[mdaoFrame].sunDirVs.v[2];
  v7[19] = 0.0;
  v7[26] = mdaoGlob.frameData[mdaoFrame].fadeParams[0];
  v7[27] = mdaoGlob.frameData[mdaoFrame].fadeParams[1];
  v7[28] = mdaoGlob.frameData[mdaoFrame].capsuleMdaoStrength;
  if ( mdaoGlob.frameData[mdaoFrame].occluderCount < 1024 )
    occluderCount = mdaoGlob.frameData[mdaoFrame].occluderCount;
  *((_DWORD *)v7 + 29) = occluderCount;
  v7[32] = mdaoGlob.frameData[mdaoFrame].influenceRadiusScale;
  fadeoutRadiusScale = mdaoGlob.frameData[mdaoFrame].fadeoutRadiusScale;
  v23 = 0i64;
  v7[33] = fadeoutRadiusScale;
  v24 = (float)viewInfo->sceneViewport.height;
  v25 = viewInfo->sceneViewport.width;
  v7[37] = v24;
  v26 = (float)v25;
  v7[36] = v26;
  v7[38] = 1.0 / v26;
  v7[39] = 1.0 / v24;
  frameCount = viewInfo->input.data->frameCount;
  do
  {
    unsignedInt = frameCount & 3;
    if ( r_vrsDebugFrameSamplePattern->current.integer != -1 )
      unsignedInt = r_vrsDebugFrameSamplePattern->current.unsignedInt;
    if ( (unsigned int)unsignedInt >= 4 )
    {
      LODWORD(v32) = 4;
      LODWORD(v31) = unsignedInt;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_variable_rate_shading.h", 76, ASSERT_TYPE_ASSERT, "(unsigned)( samplePattern ) < (unsigned)( 4 )", "samplePattern doesn't index VRS_MAX_SAMPLES\n\t%i not in [0, %i)", v31, v32) )
        __debugbreak();
    }
    v29 = s_VRSPixelToSampleOrdered_1[unsignedInt][v23];
    v30 = (int)v12;
    ++v23;
    ++v12;
    *((_DWORD *)v34 + v30) = v29;
  }
  while ( v12 < 4 );
  *((_OWORD *)v7 + 10) = v34[0];
  R_EndWrappedBufferDataWrite(buffer);
}

