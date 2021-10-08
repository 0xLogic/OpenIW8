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
  const GfxViewInfo *v9; 
  bool v15; 
  __int16 v16; 
  unsigned __int16 v17; 
  bool v21; 
  GfxCmdBufSourceState *source; 
  GfxCmdBufSourceState *v24; 
  GfxCmdBufState *state; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  const char *v48; 
  GfxCmdBufState *v50; 
  R_RT_Handle v56; 
  R_RT_Handle v57; 
  R_RT_Handle v58; 
  char v59; 
  const char *v62; 
  R_RT_Handle v63; 
  R_RT_Group v64; 

  __asm
  {
    vmovaps [rsp+2B0h+var_50], xmm6
    vmovups ymm0, ymmword ptr [rdx+3340h]
  }
  _R15 = rtMdao;
  v9 = viewInfo;
  _RSI = context;
  __asm { vmovups ymmword ptr [rsp+2B0h+var_280.m_surfaceID], ymm0 }
  _RAX = R_RT_GetViewInternal(&v58, &v56, 0, 1);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   ebx, xmm0
    vmovups ymmword ptr [rsp+2B0h+var_280.m_surfaceID], ymm0
    vmovups ymmword ptr [rsp+2B0h+var_260.m_surfaceID], ymm0
  }
  if ( (_WORD)_EBX )
  {
    R_RT_Handle::GetSurface(&v57);
    if ( (R_RT_Handle::GetSurface(&v57)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      LODWORD(_RDI) = v57.m_tracking.m_allocCounter;
      LOWORD(_EBX) = v57.m_surfaceID;
      __asm { vmovups ymm0, ymmword ptr [rsp+2B0h+var_260.m_surfaceID] }
      __debugbreak();
    }
    else
    {
      LODWORD(_RDI) = v57.m_tracking.m_allocCounter;
      LOWORD(_EBX) = v57.m_surfaceID;
      __asm { vmovups ymm0, ymmword ptr [rsp+2B0h+var_260.m_surfaceID] }
    }
  }
  else
  {
    __asm { vpextrd rdi, xmm0, 2 }
    if ( (_DWORD)_RDI )
    {
      v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rsp+2B0h+var_280.m_surfaceID] }
      if ( v15 )
        __debugbreak();
    }
  }
  __asm { vmovups ymmword ptr [rbp+1B0h+var_150.m_surfaceID], ymm0 }
  v16 = _EBX & 0x7FFF;
  if ( v16 )
  {
    v17 = v16 | 0x8000;
    v56.m_surfaceID = v17;
  }
  else
  {
    v17 = 0;
    v56.m_surfaceID = 0;
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+2B0h+var_260.m_tracking.m_allocCounter]
    vmovsd  xmm1, [rsp+2B0h+var_260.m_tracking.m_location]
    vmovups xmmword ptr [rsp+2B0h+var_280.m_tracking.m_allocCounter], xmm0
    vmovsd  [rsp+2B0h+var_280.m_tracking.m_location], xmm1
    vmovups ymm0, ymmword ptr [rsp+2B0h+var_280.m_surfaceID]
    vmovups ymmword ptr [rsp+2B0h+var_280.m_surfaceID], ymm0
  }
  if ( v17 )
  {
    R_RT_Handle::GetSurface(&v56);
    if ( (R_RT_Handle::GetSurface(&v56)->m_rtFlagsInternal & 0x18) == 0 )
      goto LABEL_19;
    v21 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
  }
  else
  {
    if ( !(_DWORD)_RDI )
      goto LABEL_19;
    v21 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
  }
  if ( v21 )
    __debugbreak();
LABEL_19:
  __asm { vmovups ymm0, ymmword ptr [rsp+2B0h+var_280.m_surfaceID] }
  source = _RSI->source;
  v24 = _RSI->source;
  __asm { vmovups [rsp+2B0h+var_240], ymm0 }
  R_InitCmdBufSourceState(v24, &v9->input);
  state = _RSI->state;
  if ( (*((_BYTE *)&source->input + 7920) & 1) != 0 )
  {
    R_LockIfGfxImmediateContext(state->device);
    R_InitCmdBufState(state);
  }
  else
  {
    R_LockGfxImmediateContext();
    _RAX = RB_GetBackendCmdBufContext((const GfxCmdBufContext *)&v57);
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vpextrq rdx, xmm0, 1; in
    }
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
  R_SetViewportStruct(source, &v9->sceneViewport);
  __asm
  {
    vmovups ymm0, ymmword ptr [r15]
    vmovups ymmword ptr [rsp+2B0h+var_280.m_surfaceID], ymm0
  }
  height = R_RT_Handle::GetSurface(&v56)->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface(&v56);
  R_SetRenderTargetSize(source, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FULL);
  __asm
  {
    vmovups ymm0, ymmword ptr [r15]
    vmovups xmm6, xmmword ptr [rsi]
    vmovd   edi, xmm0
    vmovups ymmword ptr [rsp+2B0h+var_260.m_surfaceID], ymm0
    vmovups ymmword ptr [rsp+2B0h+var_280.m_surfaceID], ymm0
  }
  if ( (_WORD)_EDI )
  {
    R_RT_Handle::GetSurface(&v56);
    __asm { vmovups ymm0, ymmword ptr [rsp+2B0h+var_280.m_surfaceID] }
    LODWORD(_RBX) = v56.m_tracking.m_allocCounter;
    LOWORD(_EDI) = v56.m_surfaceID;
    __asm { vmovups ymmword ptr [rsp+2B0h+var_260.m_surfaceID], ymm0 }
  }
  else
  {
    __asm { vpextrd rbx, xmm0, 2 }
    if ( (_DWORD)_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 453, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
      __debugbreak();
  }
  v59 = 1;
  v56.m_surfaceID = 0;
  v56.m_tracking.m_allocCounter = 0;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+2B0h+var_280.m_tracking.m_name], xmm0
    vmovups ymm0, ymmword ptr [rsp+2B0h+var_260.m_surfaceID]
    vmovups ymmword ptr [rbp+1B0h+var_150.m_surfaceID], ymm0
  }
  if ( (_WORD)_EDI )
  {
    R_RT_Handle::GetSurface(&v63);
  }
  else
  {
    if ( (_DWORD)_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 442, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
      __debugbreak();
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rsp+2B0h+var_260.m_surfaceID]
    vmovups [rbp+1B0h+var_218], ymm0
    vmovups ymm0, ymmword ptr [rsp+2B0h+var_280.m_surfaceID]
    vmovups [rbp+1B0h+var_198], ymm0
  }
  _RCX = &v64;
  _RAX = &v59;
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
  v48 = v62;
  __asm { vmovups ymmword ptr [rcx+0A0h], ymm0 }
  v64.m_vrsRt.m_tracking.m_location = v48;
  __asm { vmovdqa xmmword ptr [rsp+2B0h+var_260.m_surfaceID], xmm6 }
  R_SetRenderTargetsInternal((GfxCmdBufContext *)&v57, &v64, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_mdao.cpp(409)");
  __asm { vmovups ymm0, ymmword ptr [r15] }
  v50 = _RSI->state;
  __asm { vmovups ymmword ptr [rbp+1B0h+var_150.m_surfaceID], ymm0 }
  R_AddRenderTargetTransition(v50, (R_RT_ColorHandle *)&v63, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(v50);
  __asm { vmovups xmmword ptr [rsp+2B0h+var_260.m_surfaceID], xmm6 }
  R_MDAO_DrawVolumeOccluders((GfxCmdBufContext *)&v57, v9, data, (const R_RT_ColorHandle *)&v58, &v9->sceneRtInput.m_mainSceneTangentFrameRt);
  __asm
  {
    vmovups ymm0, ymmword ptr [r15]
    vmovups [rsp+2B0h+var_240], ymm0
  }
  R_AddRenderTargetTransition(v50, (R_RT_ColorHandle *)&v58, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(v50);
  R_GPU_EndTimer();
  R_ProfEndNamedEvent(v50);
  Sys_ProfEndNamedEvent();
  R_ResetRenderTargets(v50);
  if ( (*((_BYTE *)&_RSI->source->input + 7920) & 1) != 0 )
  {
    R_ShutdownCmdBufState(v50);
    R_UnlockIfGfxImmediateContext(v50->device);
  }
  else
  {
    _RAX = RB_GetBackendCmdBufContext((const GfxCmdBufContext *)&v57);
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
  __asm { vmovaps xmm6, [rsp+2B0h+var_50] }
}

/*
==============
RB_MDAO_Generate
==============
*/
void RB_MDAO_Generate(ComputeCmdBufState *computeState, const GfxViewInfo *const viewInfo, const GfxBackEndData *data)
{
  bool v12; 
  __int16 v13; 
  unsigned __int16 v14; 
  bool v18; 
  __int64 mdaoFrame; 
  int v23; 
  int v24; 
  const R_RT_Surface *Surface; 
  __int64 v26; 
  int v27; 
  int v28; 
  const R_RT_Surface *v29; 
  const GfxTexture *Resident; 
  const R_RT_Surface *v31; 
  const GfxTexture *v32; 
  ID3D12Resource *buffers[2]; 
  R_RT_Handle v34; 
  R_RT_ColorHandle rtTangentBasis; 
  R_RT_Handle rtMdao; 

  __asm { vmovups ymm0, ymmword ptr [rdx+3340h] }
  _R14 = viewInfo;
  __asm { vmovups ymmword ptr [rbp+57h+var_60.m_surfaceID], ymm0 }
  _RAX = R_RT_GetViewInternal(&rtTangentBasis, &rtMdao, 0, 1);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   ebx, xmm0
    vmovups ymmword ptr [rbp+57h+var_60.m_surfaceID], ymm0
    vmovups ymmword ptr [rbp+57h+var_A0.m_surfaceID], ymm0
  }
  if ( (_WORD)_EBX )
  {
    R_RT_Handle::GetSurface(&v34);
    if ( (R_RT_Handle::GetSurface(&v34)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      LODWORD(_RDI) = v34.m_tracking.m_allocCounter;
      LOWORD(_EBX) = v34.m_surfaceID;
      __asm { vmovups ymm0, ymmword ptr [rbp+57h+var_A0.m_surfaceID] }
      __debugbreak();
    }
    else
    {
      LODWORD(_RDI) = v34.m_tracking.m_allocCounter;
      LOWORD(_EBX) = v34.m_surfaceID;
      __asm { vmovups ymm0, ymmword ptr [rbp+57h+var_A0.m_surfaceID] }
    }
  }
  else
  {
    __asm { vpextrd rdi, xmm0, 2 }
    if ( (_DWORD)_RDI )
    {
      v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rbp+57h+var_60.m_surfaceID] }
      if ( v12 )
        __debugbreak();
    }
  }
  __asm { vmovups ymmword ptr [rbp+57h+var_60.m_surfaceID], ymm0 }
  v13 = _EBX & 0x7FFF;
  if ( v13 )
  {
    v14 = v13 | 0x8000;
    rtMdao.m_surfaceID = v14;
  }
  else
  {
    v14 = 0;
    rtMdao.m_surfaceID = 0;
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [rbp+57h+var_A0.m_tracking.m_allocCounter]
    vmovsd  xmm1, [rbp+57h+var_A0.m_tracking.m_location]
    vmovups xmmword ptr [rbp+57h+var_60.m_tracking.m_allocCounter], xmm0
    vmovsd  [rbp+57h+var_60.m_tracking.m_location], xmm1
    vmovups ymm0, ymmword ptr [rbp+57h+var_60.m_surfaceID]
    vmovups ymmword ptr [rbp+57h+var_60.m_surfaceID], ymm0
  }
  if ( v14 )
  {
    R_RT_Handle::GetSurface(&rtMdao);
    if ( (R_RT_Handle::GetSurface(&rtMdao)->m_rtFlagsInternal & 0x18) == 0 )
      goto LABEL_19;
    v18 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()");
  }
  else
  {
    if ( !(_DWORD)_RDI )
      goto LABEL_19;
    v18 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
  }
  if ( v18 )
    __debugbreak();
LABEL_19:
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+57h+var_60.m_surfaceID]
    vmovups ymm1, ymmword ptr [r14+3488h]
    vmovups ymmword ptr [rbp+57h+var_A0.m_surfaceID], ymm0
    vmovups ymm0, ymmword ptr [r14+3160h]
    vmovups ymmword ptr [rbp+57h+var_80.baseclass_0.m_surfaceID], ymm0
    vmovups ymmword ptr [rbp+57h+var_60.m_surfaceID], ymm1
  }
  Sys_ProfBeginNamedEvent(0xFFFF7F50, "MDAO");
  R_MDAO_UpdateConstants(computeState, _R14, data);
  R_HW_AddResourceTransition(computeState, &mdaoGlob.tileBoundingBoxes, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(computeState);
  R_ProfBeginNamedEvent(computeState, "MDAO Compute Tile BBoxes");
  R_GPU_BeginTimer(GPU_TIMER_MDAO_BOUNDING_BOXES);
  mdaoFrame = data->mdaoFrame;
  v23 = (signed int)_R14->sceneViewport.width / 2;
  v24 = (signed int)_R14->sceneViewport.height / 2;
  R_SetComputeShader(computeState, rgp.mdaoComputeTileBboxes);
  buffers[0] = mdaoGlob.frameData[mdaoFrame].mdaoConstants.buffer;
  R_SetComputeConstantBuffers(computeState, 0, 1, buffers);
  Surface = R_RT_Handle::GetSurface(&v34);
  buffers[0] = (ID3D12Resource *)R_Texture_GetResident(Surface->m_image.m_base.textureId);
  R_SetComputeTextures(computeState, 0, 1, (const GfxTexture *const *)buffers);
  buffers[0] = (ID3D12Resource *)&mdaoGlob.tileBoundingBoxes.rwView;
  R_SetComputeRWViewsWithCounters(computeState, 0, 1, (const GfxShaderBufferRWView *const *)buffers, NULL);
  R_Dispatch(computeState, (v23 + 15) / 16, (v24 + 15) / 16, 1u);
  R_GPU_EndTimer();
  R_ProfEndNamedEvent(computeState);
  R_HW_AddResourceTransition(computeState, &mdaoGlob.tileBoundingBoxes, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_AddResourceTransition(computeState, &mdaoGlob.cullingResults, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(computeState);
  R_ProfBeginNamedEvent(computeState, "MDAO Cull occluders");
  R_GPU_BeginTimer(GPU_TIMER_MDAO_OCCLUDERS);
  v26 = data->mdaoFrame;
  v27 = (signed int)_R14->sceneViewport.width / 2;
  v28 = (signed int)_R14->sceneViewport.height / 2;
  R_SetComputeShader(computeState, rgp.mdaoOccluderCulling);
  v26 *= 26752i64;
  buffers[0] = *(ID3D12Resource **)((char *)&mdaoGlob.frameData[0].mdaoConstants.buffer + v26);
  R_SetComputeConstantBuffers(computeState, 0, 1, buffers);
  buffers[0] = (ID3D12Resource *)&mdaoGlob.tileBoundingBoxes.view;
  R_SetComputeViews(computeState, 0, 1, (const GfxShaderBufferView *const *)buffers);
  buffers[0] = (ID3D12Resource *)((char *)&mdaoGlob.frameData[0].capsuleOccluders.view + v26);
  R_SetComputeViews(computeState, 1, 1, (const GfxShaderBufferView *const *)buffers);
  buffers[0] = (ID3D12Resource *)&mdaoGlob.cullingResults.rwView;
  R_SetComputeRWViewsWithCounters(computeState, 0, 1, (const GfxShaderBufferRWView *const *)buffers, NULL);
  R_Dispatch(computeState, (v27 + 15) / 16, (v28 + 15) / 16, 1u);
  R_GPU_EndTimer();
  R_ProfEndNamedEvent(computeState);
  R_HW_AddResourceTransition(computeState, &mdaoGlob.cullingResults, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v29 = R_RT_Handle::GetSurface(&rtMdao);
  Resident = R_Texture_GetResident(v29->m_image.m_base.textureId);
  R_HW_AddResourceTransition(computeState, Resident, 0xFFFFFFFF, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(computeState);
  R_ProfBeginNamedEvent(computeState, "MDAO Compute Occlusion");
  R_GPU_BeginTimer(GPU_TIMER_MDAO_OCCLUSION);
  R_MDAO_ComputeOcclusion(computeState, _R14, data, &mdaoGlob.tileBoundingBoxes, &mdaoGlob.cullingResults, (const R_RT_ColorHandle *)&v34, &rtTangentBasis, (const R_RT_ColorHandle *)&rtMdao);
  R_GPU_EndTimer();
  R_ProfEndNamedEvent(computeState);
  v31 = R_RT_Handle::GetSurface(&rtMdao);
  v32 = R_Texture_GetResident(v31->m_image.m_base.textureId);
  R_HW_AddResourceTransition(computeState, v32, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
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
  R_RT_ColorHandle *v10; 
  R_RT_ColorHandle *v11; 
  GfxCmdBufSourceState *source; 
  GfxImage *mdaoOcclusionLut; 
  bool v16; 
  bool v17; 
  bool vrs; 
  const GfxBackEndData *v46; 
  unsigned int v47; 
  __int64 v48; 
  unsigned int frameCount; 
  unsigned int unsignedInt; 
  R_RT_Image *p_m_image; 
  GfxCmdBufInput *p_input; 
  GfxCmdBufSourceState *v59; 
  GfxImage *v60; 
  GfxCmdBufInput *v61; 
  const R_RT_Surface *Surface; 
  GfxCmdBufSourceState *v63; 
  R_RT_Image *v64; 
  GfxCmdBufInput *v65; 
  const R_RT_Surface *v66; 
  GfxCmdBufSourceState *v67; 
  $6354FE9254625F25F9BF74DDC4774D51 *v68; 
  GfxCmdBufInput *v69; 
  unsigned __int64 v70; 
  volatile int v71; 
  bool v75; 
  const GfxImage *v115; 
  GfxCmdBufInput *v116; 
  __int64 v119; 
  __int64 v120; 
  bool v121; 
  unsigned int v122; 
  Material *mdaoVolumeMSAAMaterial; 
  GfxCmdBufContext *v126; 
  R_RT_Handle *v127; 
  R_RT_Handle *v128; 
  unsigned __int64 v129; 
  GfxCmdBufContext v130[4]; 
  void *retaddr; 

  _R11 = &retaddr;
  mdaoFrame = data->mdaoFrame;
  _R13 = context;
  v10 = (R_RT_ColorHandle *)rtTangentFrame;
  v11 = (R_RT_ColorHandle *)rtFloatzHalf;
  v126 = context;
  _RSI = viewInfo;
  v128 = &rtFloatzHalf->R_RT_Handle;
  v127 = &rtTangentFrame->R_RT_Handle;
  v129 = 26752 * mdaoFrame;
  if ( mdaoGlob.frameData[mdaoFrame].volumeOccluderCount )
  {
    source = context->source;
    __asm { vmovaps xmmword ptr [r11-48h], xmm6 }
    R_BeginViewInternal(source, &viewInfo->sceneDef, (const GfxViewParms *)viewInfo, &viewInfo->viewParmsSet.frames[1].viewParms);
    R_Set3D(_R13->source);
    mdaoOcclusionLut = rgp.mdaoOcclusionLut;
    if ( rgp.mdaoOcclusionLut->width != 256 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_mdao.cpp", 302, ASSERT_TYPE_ASSERT, "(occluderImage->width == 256)", (const char *)&queryFormat, "occluderImage->width == MDAO_LUT_NUM_BEAM_ANGLE_STEPS") )
      __debugbreak();
    v16 = mdaoOcclusionLut->height == 64;
    if ( mdaoOcclusionLut->height != 64 )
    {
      v17 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_mdao.cpp", 303, ASSERT_TYPE_ASSERT, "(occluderImage->height == 64)", (const char *)&queryFormat, "occluderImage->height == MDAO_LUT_NUM_OCCLUDER_ANGLE_STEPS");
      v16 = !v17;
      if ( v17 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm1, cs:__real@40000000
      vxorps  xmm0, xmm0, xmm0
      vxorps  xmm6, xmm6, xmm6
      vcvtsi2ss xmm6, xmm6, eax
    }
    _RBX = _R13->source;
    __asm
    {
      vxorps  xmm5, xmm5, xmm5
      vcvtsi2ss xmm5, xmm5, eax
      vcvtsi2ss xmm0, xmm0, rax
      vdivss  xmm2, xmm1, xmm0
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vdivss  xmm3, xmm1, xmm0
      vucomiss xmm3, dword ptr [rbx+0E40h]
    }
    if ( !v16 )
      goto LABEL_12;
    __asm { vucomiss xmm2, dword ptr [rbx+0E44h] }
    if ( !v16 )
      goto LABEL_12;
    __asm
    {
      vmovss  xmm0, cs:__real@3f820821
      vucomiss xmm0, dword ptr [rbx+0E48h]
    }
    if ( !v16 )
      goto LABEL_12;
    __asm
    {
      vmovss  xmm0, cs:__real@3f7c0000
      vucomiss xmm0, dword ptr [rbx+0E4Ch]
    }
    if ( !v16 )
    {
LABEL_12:
      __asm
      {
        vmovss  dword ptr [rbx+0E40h], xmm3
        vmovss  dword ptr [rbx+0E44h], xmm2
      }
      _RBX->input.consts[116].v[2] = 1.0158731;
      _RBX->input.consts[116].v[3] = 0.984375;
      v16 = _RBX->constVersions[116]++ == 0xFFFF;
    }
    __asm
    {
      vmovss  xmm3, cs:__real@3f800000
      vdivss  xmm4, xmm3, dword ptr [rsi+40h]
      vucomiss xmm4, dword ptr [rbx+0E50h]
      vmovss  xmm0, dword ptr [rsi+78h]
      vmovss  xmm1, dword ptr [rsi+68h]
      vdivss  xmm2, xmm3, dword ptr [rsi+54h]
    }
    if ( !v16 )
      goto LABEL_17;
    __asm { vucomiss xmm2, dword ptr [rbx+0E54h] }
    if ( !v16 )
      goto LABEL_17;
    __asm { vucomiss xmm1, dword ptr [rbx+0E58h] }
    if ( !v16 )
      goto LABEL_17;
    __asm { vucomiss xmm0, dword ptr [rbx+0E5Ch] }
    if ( !v16 )
    {
LABEL_17:
      __asm
      {
        vmovss  dword ptr [rbx+0E50h], xmm4
        vmovss  dword ptr [rbx+0E54h], xmm2
        vmovss  dword ptr [rbx+0E58h], xmm1
        vmovss  dword ptr [rbx+0E5Ch], xmm0
      }
      v16 = _RBX->constVersions[117]++ == 0xFFFF;
    }
    __asm
    {
      vdivss  xmm1, xmm3, xmm5
      vmulss  xmm4, xmm1, cs:__real@3f000000
      vsubss  xmm0, xmm5, xmm3
      vmulss  xmm5, xmm0, xmm1
      vdivss  xmm1, xmm3, xmm6
      vmulss  xmm2, xmm1, cs:__real@3f000000
      vsubss  xmm0, xmm6, xmm3
      vmulss  xmm3, xmm0, xmm1
      vucomiss xmm3, dword ptr [rbx+0E60h]
    }
    if ( !v16 )
      goto LABEL_22;
    __asm { vucomiss xmm2, dword ptr [rbx+0E64h] }
    if ( !v16 )
      goto LABEL_22;
    __asm { vucomiss xmm5, dword ptr [rbx+0E68h] }
    if ( !v16 )
      goto LABEL_22;
    __asm { vucomiss xmm4, dword ptr [rbx+0E6Ch] }
    if ( !v16 )
    {
LABEL_22:
      __asm
      {
        vmovss  dword ptr [rbx+0E60h], xmm3
        vmovss  dword ptr [rbx+0E64h], xmm2
        vmovss  dword ptr [rbx+0E68h], xmm5
        vmovss  dword ptr [rbx+0E6Ch], xmm4
      }
      ++_RBX->constVersions[118];
    }
    vrs = rg.vrs;
    v121 = rg.vrs;
    if ( vrs != ((R_RT_Handle::GetSurface(&rtTangentFrame->R_RT_Handle)->m_rtFlags & 0x4000) != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_mdao.cpp", 333, ASSERT_TYPE_ASSERT, "(vrs == rtTangentFrame.IsMultisampled())", (const char *)&queryFormat, "vrs == rtTangentFrame.IsMultisampled()") )
      __debugbreak();
    if ( vrs )
    {
      mdaoVolumeMSAAMaterial = rgp.mdaoVolumeMSAAMaterial;
      v46 = _RSI->input.data;
      v47 = 0;
      v48 = 0i64;
      frameCount = v46->frameCount;
      do
      {
        unsignedInt = r_vrsDebugFrameSamplePattern->current.unsignedInt;
        if ( unsignedInt == -1 )
          unsignedInt = frameCount & 3;
        if ( unsignedInt >= 4 )
        {
          LODWORD(v120) = 4;
          LODWORD(v119) = unsignedInt;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_variable_rate_shading.h", 76, ASSERT_TYPE_ASSERT, "(unsigned)( samplePattern ) < (unsigned)( 4 )", "samplePattern doesn't index VRS_MAX_SAMPLES\n\t%i not in [0, %i)", v119, v120) )
            __debugbreak();
        }
        v122 = s_VRSPixelToSampleOrdered_1[unsignedInt][v48];
        __asm { vmovss  xmm0, [rsp+108h+var_C4] }
        _RAX = (int)v47;
        ++v48;
        ++v47;
        __asm { vmovss  dword ptr [rsp+rax*4+108h+var_A8], xmm0 }
      }
      while ( v47 < 4 );
      _R13 = v126;
      __asm
      {
        vmovups xmm0, [rsp+108h+var_A8]
        vmovss  xmm1, dword ptr [rsp+108h+var_A8+0Ch]
        vmovss  xmm2, dword ptr [rsp+108h+var_A8+8]
      }
      _RBX = v126->source;
      __asm { vmovss  xmm3, dword ptr [rsp+108h+var_A8+4] }
      vrs = v121;
      v10 = (R_RT_ColorHandle *)v127;
      __asm { vucomiss xmm0, dword ptr [rbx+0E80h] }
      v11 = (R_RT_ColorHandle *)v128;
      if ( v47 == 4 )
      {
        __asm
        {
          vucomiss xmm3, dword ptr [rbx+0E84h]
          vucomiss xmm2, dword ptr [rbx+0E88h]
          vucomiss xmm1, dword ptr [rbx+0E8Ch]
        }
      }
      else
      {
        __asm
        {
          vmovss  dword ptr [rbx+0E80h], xmm0
          vmovss  dword ptr [rbx+0E84h], xmm3
          vmovss  dword ptr [rbx+0E88h], xmm2
          vmovss  dword ptr [rbx+0E8Ch], xmm1
        }
        ++_RBX->constVersions[120];
      }
      _RSI = viewInfo;
    }
    else
    {
      mdaoVolumeMSAAMaterial = rgp.mdaoVolumeMaterial;
    }
    p_m_image = &R_RT_Handle::GetSurface(v11)->m_image;
    if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
      __debugbreak();
    p_input = &_RBX->input;
    if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    p_input->codeImages[56] = &p_m_image->m_base;
    v59 = _R13->source;
    v60 = rgp.mdaoOcclusionLut;
    if ( !_R13->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
      __debugbreak();
    v61 = &v59->input;
    if ( !v61 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    v61->codeImages[58] = v60;
    Surface = R_RT_Handle::GetSurface(v10);
    v63 = _R13->source;
    v64 = &Surface->m_image;
    if ( !_R13->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
      __debugbreak();
    v65 = &v63->input;
    if ( !v65 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    v65->codeImages[2] = &v64->m_base;
    if ( vrs )
    {
      v66 = R_RT_Handle::GetSurface(v10);
      v67 = _R13->source;
      v68 = &v66->1080;
      if ( !_R13->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
        __debugbreak();
      v69 = &v67->input;
      if ( !v69 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
        __debugbreak();
      v69->codeImages[3] = &v68->m_color.m_fmaskImage.m_base;
    }
    v70 = v129;
    v71 = 0;
    if ( mdaoGlob.frameData[v129 / 0x6880].volumeOccluderCount > 0 )
    {
      _RDI = &mdaoGlob.frameData[v129 / 0x6880].volumeOccluders[0].viewToOccluder.m.m[0].v[2];
      __asm { vxorps  xmm6, xmm6, xmm6 }
      do
      {
        _RBX = _R13->source;
        _RAX = R_GetActiveMatrixForEdit(_R13->source, 0xAAu);
        __asm
        {
          vmovups ymm0, ymmword ptr [rdi-48h]
          vmovups ymmword ptr [rax], ymm0
          vmovups ymm1, ymmword ptr [rdi-28h]
          vmovups ymmword ptr [rax+20h], ymm1
          vmovss  xmm0, dword ptr [rax+30h]
          vaddss  xmm1, xmm0, dword ptr [rsi+100h]
          vmovss  dword ptr [rax+30h], xmm1
          vmovss  xmm0, dword ptr [rax+34h]
          vaddss  xmm1, xmm0, dword ptr [rsi+104h]
          vmovss  dword ptr [rax+34h], xmm1
          vmovss  xmm0, dword ptr [rsi+108h]
          vaddss  xmm1, xmm0, dword ptr [rax+38h]
          vmovss  dword ptr [rax+38h], xmm1
          vmovss  xmm1, dword ptr [rdi-8]
          vucomiss xmm1, dword ptr [rbx+0DD0h]
        }
        if ( !v75 )
          goto LABEL_71;
        __asm
        {
          vmovss  xmm0, dword ptr [rdi-4]
          vucomiss xmm0, dword ptr [rbx+0DD4h]
        }
        if ( !v75 )
          goto LABEL_71;
        __asm
        {
          vmovss  xmm0, dword ptr [rdi]
          vucomiss xmm0, dword ptr [rbx+0DD8h]
        }
        if ( !v75 )
          goto LABEL_71;
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+4]
          vucomiss xmm0, dword ptr [rbx+0DDCh]
        }
        if ( !v75 )
        {
LABEL_71:
          __asm { vmovss  dword ptr [rbx+0DD0h], xmm1 }
          _RBX->input.consts[109].v[1] = *(_RDI - 1);
          _RBX->input.consts[109].v[2] = *_RDI;
          _RBX->input.consts[109].v[3] = _RDI[1];
          v75 = _RBX->constVersions[109]++ == 0xFFFF;
        }
        __asm
        {
          vmovss  xmm1, dword ptr [rdi+8]
          vucomiss xmm1, dword ptr [rbx+0DE0h]
        }
        if ( !v75 )
          goto LABEL_76;
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+0Ch]
          vucomiss xmm0, dword ptr [rbx+0DE4h]
        }
        if ( !v75 )
          goto LABEL_76;
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+10h]
          vucomiss xmm0, dword ptr [rbx+0DE8h]
        }
        if ( !v75 )
          goto LABEL_76;
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+14h]
          vucomiss xmm0, dword ptr [rbx+0DECh]
        }
        if ( !v75 )
        {
LABEL_76:
          __asm { vmovss  dword ptr [rbx+0DE0h], xmm1 }
          _RBX->input.consts[110].v[1] = _RDI[3];
          _RBX->input.consts[110].v[2] = _RDI[4];
          _RBX->input.consts[110].v[3] = _RDI[5];
          v75 = _RBX->constVersions[110]++ == 0xFFFF;
        }
        __asm
        {
          vmovss  xmm1, dword ptr [rdi+18h]
          vucomiss xmm1, dword ptr [rbx+0DF0h]
        }
        if ( !v75 )
          goto LABEL_81;
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+1Ch]
          vucomiss xmm0, dword ptr [rbx+0DF4h]
        }
        if ( !v75 )
          goto LABEL_81;
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+20h]
          vucomiss xmm0, dword ptr [rbx+0DF8h]
        }
        if ( !v75 )
          goto LABEL_81;
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+24h]
          vucomiss xmm0, dword ptr [rbx+0DFCh]
        }
        if ( !v75 )
        {
LABEL_81:
          __asm { vmovss  dword ptr [rbx+0DF0h], xmm1 }
          _RBX->input.consts[111].v[1] = _RDI[7];
          _RBX->input.consts[111].v[2] = _RDI[8];
          _RBX->input.consts[111].v[3] = _RDI[9];
          v75 = _RBX->constVersions[111]++ == 0xFFFF;
        }
        __asm
        {
          vmovss  xmm1, dword ptr [rdi+28h]
          vucomiss xmm1, dword ptr [rbx+0E00h]
        }
        if ( !v75 )
          goto LABEL_86;
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+2Ch]
          vucomiss xmm0, dword ptr [rbx+0E04h]
        }
        if ( !v75 )
          goto LABEL_86;
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+30h]
          vucomiss xmm0, dword ptr [rbx+0E08h]
        }
        if ( !v75 )
          goto LABEL_86;
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+34h]
          vucomiss xmm0, dword ptr [rbx+0E0Ch]
        }
        if ( !v75 )
        {
LABEL_86:
          __asm { vmovss  dword ptr [rbx+0E00h], xmm1 }
          _RBX->input.consts[112].v[1] = _RDI[11];
          _RBX->input.consts[112].v[2] = _RDI[12];
          _RBX->input.consts[112].v[3] = _RDI[13];
          R_DirtyCodeConstant(_RBX, 0x70u);
        }
        __asm
        {
          vmovss  xmm1, dword ptr [rdi+38h]
          vucomiss xmm1, dword ptr [rbx+0E10h]
        }
        if ( !v75 )
          goto LABEL_91;
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+3Ch]
          vucomiss xmm0, dword ptr [rbx+0E14h]
        }
        if ( !v75 )
          goto LABEL_91;
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+40h]
          vucomiss xmm0, dword ptr [rbx+0E18h]
        }
        if ( !v75 )
          goto LABEL_91;
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+44h]
          vucomiss xmm0, dword ptr [rbx+0E1Ch]
        }
        if ( !v75 )
        {
LABEL_91:
          __asm { vmovss  dword ptr [rbx+0E10h], xmm1 }
          _RBX->input.consts[113].v[1] = _RDI[15];
          _RBX->input.consts[113].v[2] = _RDI[16];
          _RBX->input.consts[113].v[3] = _RDI[17];
          R_DirtyCodeConstant(_RBX, 0x71u);
        }
        __asm
        {
          vmovss  xmm1, dword ptr [rdi+48h]
          vucomiss xmm1, dword ptr [rbx+0E20h]
        }
        if ( !v75 )
          goto LABEL_96;
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+4Ch]
          vucomiss xmm0, dword ptr [rbx+0E24h]
        }
        if ( !v75 )
          goto LABEL_96;
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+50h]
          vucomiss xmm0, dword ptr [rbx+0E28h]
        }
        if ( !v75 )
          goto LABEL_96;
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+54h]
          vucomiss xmm0, dword ptr [rbx+0E2Ch]
        }
        if ( !v75 )
        {
LABEL_96:
          __asm { vmovss  dword ptr [rbx+0E20h], xmm1 }
          _RBX->input.consts[114].v[1] = _RDI[19];
          _RBX->input.consts[114].v[2] = _RDI[20];
          _RBX->input.consts[114].v[3] = _RDI[21];
          R_DirtyCodeConstant(_RBX, 0x72u);
          _RBX = _R13->source;
        }
        __asm
        {
          vmovss  xmm1, dword ptr [rdi+58h]
          vucomiss xmm1, dword ptr [rbx+0E30h]
        }
        if ( !v75 )
          goto LABEL_101;
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+5Ch]
          vucomiss xmm0, dword ptr [rbx+0E34h]
        }
        if ( !v75 )
          goto LABEL_101;
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+60h]
          vucomiss xmm0, dword ptr [rbx+0E38h]
        }
        if ( !v75 )
          goto LABEL_101;
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+64h]
          vucomiss xmm0, dword ptr [rbx+0E3Ch]
        }
        if ( !v75 )
        {
LABEL_101:
          __asm { vmovss  dword ptr [rbx+0E30h], xmm1 }
          _RBX->input.consts[115].v[1] = _RDI[23];
          _RBX->input.consts[115].v[2] = _RDI[24];
          _RBX->input.consts[115].v[3] = _RDI[25];
          R_DirtyCodeConstant(_RBX, 0x73u);
          _RBX = _R13->source;
        }
        __asm
        {
          vmovss  xmm1, dword ptr [rdi+80h]
          vucomiss xmm1, dword ptr [rbx+0E70h]
          vmovss  xmm0, dword ptr [rdi+84h]
        }
        if ( !v75 )
          goto LABEL_106;
        __asm { vucomiss xmm0, dword ptr [rbx+0E74h] }
        if ( !v75 )
          goto LABEL_106;
        __asm { vucomiss xmm6, dword ptr [rbx+0E78h] }
        if ( !v75 )
          goto LABEL_106;
        __asm { vucomiss xmm6, dword ptr [rbx+0E7Ch] }
        if ( !v75 )
        {
LABEL_106:
          __asm
          {
            vmovss  dword ptr [rbx+0E70h], xmm1
            vmovss  dword ptr [rbx+0E74h], xmm0
          }
          *(_QWORD *)&_RBX->input.consts[119].xyz.z = 0i64;
          R_DirtyCodeConstant(_RBX, 0x77u);
        }
        v115 = (const GfxImage *)*((_QWORD *)_RDI + 15);
        if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
          __debugbreak();
        v116 = &_RBX->input;
        if ( !v116 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
          __debugbreak();
        __asm { vmovups xmm0, xmmword ptr [r13+0] }
        v116->codeImages[57] = v115;
        __asm { vmovups [rsp+108h+var_78], xmm0 }
        RB_DrawUnitCube(v130, mdaoVolumeMSAAMaterial, GFX_PRIM_STATS_CODE, 1);
        _RSI = viewInfo;
        ++v71;
        _RDI += 52;
      }
      while ( v71 < *(volatile int *)((char *)&mdaoGlob.frameData[0].volumeOccluderCount + v70) );
    }
    __asm { vmovaps xmm6, [rsp+108h+var_48] }
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
  int v15; 
  unsigned int v16; 
  volatile int occluderCount; 
  float fadeoutRadiusScale; 
  __int64 v42; 
  unsigned int frameCount; 
  __int64 unsignedInt; 
  unsigned int v50; 
  __int64 v51; 
  __int64 v53; 
  __int64 v54; 
  const GfxWrappedBuffer *buffer; 
  _DWORD v56[18]; 

  _RBP = viewInfo;
  v4 = (signed int)viewInfo->sceneViewport.width / 2;
  mdaoFrame = data->mdaoFrame;
  v6 = (signed int)viewInfo->sceneViewport.height / 2;
  buffer = &mdaoGlob.frameData[mdaoFrame].mdaoConstants;
  _R14 = R_BeginWrappedBufferDataWrite(&mdaoGlob.frameData[mdaoFrame].mdaoConstants);
  __asm { vmovss  xmm5, cs:__real@3f800000 }
  *(_OWORD *)_R14 = *(_OWORD *)_RBP->viewParms.camera.zPlanes;
  __asm
  {
    vmovss  xmm2, dword ptr [rbp+68h]
    vdivss  xmm1, xmm5, dword ptr [rbp+54h]
    vdivss  xmm0, xmm5, dword ptr [rbp+40h]
    vmovss  xmm3, dword ptr [rbp+78h]
    vmovss  dword ptr [rax+10h], xmm0
    vmovss  dword ptr [rax+14h], xmm1
    vmovss  dword ptr [rax+18h], xmm2
    vmovss  xmm2, cs:__real@40000000
    vmovss  dword ptr [rax+1Ch], xmm3
    vxorps  xmm0, xmm0, xmm0
  }
  v15 = v4 + 15;
  v16 = 0;
  _R14[12] = v15 / 16;
  _R14[13] = (v6 + 15) / 16;
  *((_QWORD *)_R14 + 7) = 0i64;
  __asm
  {
    vcvtsi2ss xmm0, xmm0, rax
    vmovss  dword ptr [r14+20h], xmm0
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rcx
    vcvtsi2ss xmm0, xmm0, rax
    vmovss  dword ptr [r14+24h], xmm0
    vdivss  xmm0, xmm2, xmm1
    vmovss  dword ptr [r14+28h], xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rdx
    vdivss  xmm0, xmm2, xmm1
    vmovss  dword ptr [r14+2Ch], xmm0
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm4, xmm4, xmm4
    vcvtsi2ss xmm0, xmm0, eax
    vdivss  xmm2, xmm5, xmm0
    vcvtsi2ss xmm4, xmm4, eax
    vsubss  xmm0, xmm0, xmm5
    vmulss  xmm1, xmm0, xmm2
    vmulss  xmm0, xmm2, cs:__real@3f000000
    vmovss  dword ptr [r14+54h], xmm0
    vmovss  dword ptr [r14+50h], xmm1
    vsubss  xmm0, xmm4, xmm5
    vdivss  xmm2, xmm5, xmm4
    vmulss  xmm1, xmm0, xmm2
    vmulss  xmm2, xmm2, cs:__real@3f000000
    vmovss  dword ptr [r14+58h], xmm1
    vmovss  dword ptr [r14+5Ch], xmm2
  }
  _R14[24] = 1065486369;
  _R14[25] = 1065091072;
  occluderCount = 1024;
  _R14[16] = LODWORD(mdaoGlob.frameData[mdaoFrame].sunDirVs.v[0]);
  _R14[17] = LODWORD(mdaoGlob.frameData[mdaoFrame].sunDirVs.v[1]);
  _R14[18] = LODWORD(mdaoGlob.frameData[mdaoFrame].sunDirVs.v[2]);
  _R14[19] = 0;
  _R14[26] = LODWORD(mdaoGlob.frameData[mdaoFrame].fadeParams[0]);
  _R14[27] = LODWORD(mdaoGlob.frameData[mdaoFrame].fadeParams[1]);
  _R14[28] = LODWORD(mdaoGlob.frameData[mdaoFrame].capsuleMdaoStrength);
  __asm { vxorps  xmm1, xmm1, xmm1 }
  if ( mdaoGlob.frameData[mdaoFrame].occluderCount < 1024 )
    occluderCount = mdaoGlob.frameData[mdaoFrame].occluderCount;
  _R14[29] = occluderCount;
  _R14[32] = LODWORD(mdaoGlob.frameData[mdaoFrame].influenceRadiusScale);
  fadeoutRadiusScale = mdaoGlob.frameData[mdaoFrame].fadeoutRadiusScale;
  v42 = 0i64;
  *((float *)_R14 + 33) = fadeoutRadiusScale;
  __asm
  {
    vcvtsi2ss xmm1, xmm1, rax
    vmovss  dword ptr [r14+94h], xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmovss  dword ptr [r14+90h], xmm0
    vdivss  xmm0, xmm5, xmm0
    vmovss  dword ptr [r14+98h], xmm0
    vdivss  xmm1, xmm5, xmm1
    vmovss  dword ptr [r14+9Ch], xmm1
  }
  frameCount = _RBP->input.data->frameCount;
  do
  {
    unsignedInt = frameCount & 3;
    if ( r_vrsDebugFrameSamplePattern->current.integer != -1 )
      unsignedInt = r_vrsDebugFrameSamplePattern->current.unsignedInt;
    if ( (unsigned int)unsignedInt >= 4 )
    {
      LODWORD(v54) = 4;
      LODWORD(v53) = unsignedInt;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_variable_rate_shading.h", 76, ASSERT_TYPE_ASSERT, "(unsigned)( samplePattern ) < (unsigned)( 4 )", "samplePattern doesn't index VRS_MAX_SAMPLES\n\t%i not in [0, %i)", v53, v54) )
        __debugbreak();
    }
    v50 = s_VRSPixelToSampleOrdered_1[unsignedInt][v42];
    v51 = (int)v16;
    ++v42;
    ++v16;
    v56[v51] = v50;
  }
  while ( v16 < 4 );
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+98h+var_48]
    vmovups xmmword ptr [r14+0A0h], xmm0
  }
  R_EndWrappedBufferDataWrite(buffer);
}

