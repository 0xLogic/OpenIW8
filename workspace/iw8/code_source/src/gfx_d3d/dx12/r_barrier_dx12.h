/*
==============
R_HW_AddResourceTransitionLabel
==============
*/

void __fastcall R_HW_AddResourceTransitionLabel(CmdBufState *__formal, const unsigned __int64 *a2, unsigned int a3)
{
  ?R_HW_AddResourceTransitionLabel@@YAXPEAUCmdBufState@@PEB_KI@Z(__formal, a2, a3);
}

/*
==============
R_HW_AddResourceTransition
==============
*/

void __fastcall R_HW_AddResourceTransition(CmdBufState *state, const GfxWrappedBuffer *wrappedBuffer, unsigned int subresource, D3D12_RESOURCE_STATES before, D3D12_RESOURCE_STATES after, D3D12_RESOURCE_BARRIER_FLAGS flag)
{
  ?R_HW_AddResourceTransition@@YAXPEAUCmdBufState@@PEBUGfxWrappedBuffer@@IW4D3D12_RESOURCE_STATES@@2W4D3D12_RESOURCE_BARRIER_FLAGS@@@Z(state, wrappedBuffer, subresource, before, after, flag);
}

/*
==============
R_HW_AddResourceAlias
==============
*/

void __fastcall R_HW_AddResourceAlias(CmdBufState *state)
{
  ?R_HW_AddResourceAlias@@YAXPEAUCmdBufState@@@Z(state);
}

/*
==============
R_HW_AddResourceTransition
==============
*/

void __fastcall R_HW_AddResourceTransition(CmdBufState *state, R_RT_Handle *rtHandle, unsigned int subresource, D3D12_RESOURCE_STATES before, D3D12_RESOURCE_STATES after, D3D12_RESOURCE_BARRIER_FLAGS flag)
{
  ?R_HW_AddResourceTransition@@YAXPEAUCmdBufState@@VR_RT_Handle@@IW4D3D12_RESOURCE_STATES@@2W4D3D12_RESOURCE_BARRIER_FLAGS@@@Z(state, rtHandle, subresource, before, after, flag);
}

/*
==============
R_HW_AddResourceTransition
==============
*/

void __fastcall R_HW_AddResourceTransition(CmdBufState *state, const GfxShaderBufferRWView *shaderRWView, unsigned int subresource, D3D12_RESOURCE_STATES before, D3D12_RESOURCE_STATES after, D3D12_RESOURCE_BARRIER_FLAGS flag)
{
  ?R_HW_AddResourceTransition@@YAXPEAUCmdBufState@@AEBUGfxShaderBufferRWView@@IW4D3D12_RESOURCE_STATES@@2W4D3D12_RESOURCE_BARRIER_FLAGS@@@Z(state, shaderRWView, subresource, before, after, flag);
}

/*
==============
R_HW_AddResourceTransition
==============
*/

void __fastcall R_HW_AddResourceTransition(CmdBufState *state, const GfxShaderTextureRWView *shaderRWView, unsigned int subresource, D3D12_RESOURCE_STATES before, D3D12_RESOURCE_STATES after, D3D12_RESOURCE_BARRIER_FLAGS flag)
{
  ?R_HW_AddResourceTransition@@YAXPEAUCmdBufState@@AEBUGfxShaderTextureRWView@@IW4D3D12_RESOURCE_STATES@@2W4D3D12_RESOURCE_BARRIER_FLAGS@@@Z(state, shaderRWView, subresource, before, after, flag);
}

/*
==============
R_HW_AddResourceTransition
==============
*/

void __fastcall R_HW_AddResourceTransition(CmdBufState *state, R_RT_Handle *rtHandle, D3D12_RESOURCE_STATES before, D3D12_RESOURCE_STATES after, D3D12_RESOURCE_BARRIER_FLAGS flag)
{
  ?R_HW_AddResourceTransition@@YAXPEAUCmdBufState@@VR_RT_Handle@@W4D3D12_RESOURCE_STATES@@2W4D3D12_RESOURCE_BARRIER_FLAGS@@@Z(state, rtHandle, before, after, flag);
}

/*
==============
R_HW_AddResourceAlias
==============
*/

void __fastcall R_HW_AddResourceAlias(CmdBufState *state, R_RT_Handle *before, R_RT_Handle *after, D3D12_RESOURCE_BARRIER_FLAGS flag)
{
  ?R_HW_AddResourceAlias@@YAXPEAUCmdBufState@@VR_RT_Handle@@1W4D3D12_RESOURCE_BARRIER_FLAGS@@@Z(state, before, after, flag);
}

/*
==============
R_HW_FlushResourceTransitions
==============
*/

void __fastcall R_HW_FlushResourceTransitions(CmdBufState *state)
{
  ?R_HW_FlushResourceTransitions@@YAXPEAUCmdBufState@@@Z(state);
}

/*
==============
R_HW_AddResourceTransition
==============
*/

void __fastcall R_HW_AddResourceTransition(CmdBufState *state, ID3D12Resource *const *vertexBuffer, unsigned int subresource, D3D12_RESOURCE_STATES before, D3D12_RESOURCE_STATES after, D3D12_RESOURCE_BARRIER_FLAGS flag)
{
  ?R_HW_AddResourceTransition@@YAXPEAUCmdBufState@@PEBQEAUID3D12Resource@@IW4D3D12_RESOURCE_STATES@@2W4D3D12_RESOURCE_BARRIER_FLAGS@@@Z(state, vertexBuffer, subresource, before, after, flag);
}

/*
==============
R_HW_AddResourceTransition
==============
*/

void __fastcall R_HW_AddResourceTransition(CmdBufState *state, const GfxTexture *texture, unsigned int subresource, D3D12_RESOURCE_STATES before, D3D12_RESOURCE_STATES after, D3D12_RESOURCE_BARRIER_FLAGS flag)
{
  ?R_HW_AddResourceTransition@@YAXPEAUCmdBufState@@PEBUGfxTexture@@IW4D3D12_RESOURCE_STATES@@2W4D3D12_RESOURCE_BARRIER_FLAGS@@@Z(state, texture, subresource, before, after, flag);
}

/*
==============
R_DX12_AddResourceTransition
==============
*/
void R_DX12_AddResourceTransition(D3D12_RESOURCE_BARRIER *resourceTransitions, unsigned int *resourceTransitionCount, ID3D12Resource *resource, unsigned int subresource, D3D12_RESOURCE_STATES before, D3D12_RESOURCE_STATES after, D3D12_RESOURCE_BARRIER_FLAGS flag)
{
  D3D12_RESOURCE_BARRIER *v11; 
  int v12; 
  __int64 v13; 

  if ( !resource && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\dx12\\r_barrier_dx12.h", 7, ASSERT_TYPE_ASSERT, "(resource)", (const char *)&queryFormat, "resource") )
    __debugbreak();
  if ( *resourceTransitionCount >= 0x20 )
  {
    LODWORD(v13) = *resourceTransitionCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\dx12\\r_barrier_dx12.h", 9, ASSERT_TYPE_ASSERT, "(unsigned)( *resourceTransitionCount ) < (unsigned)( 32 )", "*resourceTransitionCount doesn't index MAX_RESOURCE_TRANSITIONS\n\t%i not in [0, %i)", v13, 32) )
      __debugbreak();
  }
  v11 = &resourceTransitions[*resourceTransitionCount];
  if ( before != after )
    goto LABEL_12;
  if ( before != D3D12_RESOURCE_STATE_UNORDERED_ACCESS )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\dx12\\r_barrier_dx12.h", 20, ASSERT_TYPE_ASSERT, "(before != after)", (const char *)&queryFormat, "before != after") )
      __debugbreak();
LABEL_12:
    v11->Transition.StateBefore = before;
    v12 = 0;
    v11->Transition.StateAfter = after;
    v11->Transition.Subresource = subresource;
    goto LABEL_13;
  }
  v12 = 2;
LABEL_13:
  v11->Type = v12;
  v11->Flags = flag;
  v11->Transition.pResource = resource;
  ++*resourceTransitionCount;
}

/*
==============
R_DX12_TransitionResources
==============
*/
void R_DX12_TransitionResources(ID3D12GraphicsCommandList *device, GfxDescriptorState *descState, D3D12_RESOURCE_BARRIER *transitions, unsigned int count)
{
  unsigned int (__fastcall *Release)(IGraphicsUnknown *); 
  __int64 v8; 

  if ( !device && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\dx12\\r_barrier_dx12.h", 36, ASSERT_TYPE_ASSERT, "(device)", (const char *)&queryFormat, "device") )
    __debugbreak();
  if ( !count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\dx12\\r_barrier_dx12.h", 37, ASSERT_TYPE_ASSERT, "(count)", (const char *)&queryFormat, "count") )
    __debugbreak();
  Release = device->m_pFunction[8].Release;
  if ( r_printBarrierActions->current.enabled )
  {
    v8 = ((__int64 (__fastcall *)(ID3D12GraphicsCommandList *, _QWORD, D3D12_RESOURCE_BARRIER *))Release)(device, count, transitions);
    if ( (v8 & 1) != 0 )
      Com_Printf(8, "FLUSH_TOP_BASE_COHERENCY ");
    if ( (v8 & 0x40) != 0 )
      Com_Printf(8, "FLUSH_TOP_COLOR_BLOCK_COHERENCY ");
    if ( (v8 & 0x4000) != 0 )
      Com_Printf(8, "FLUSH_TOP_DEPTH_BLOCK_COHERENCY ");
    if ( (v8 & 0x2000000) != 0 )
      Com_Printf(8, "FLUSH_TOP_COLOR_BLOCK_INVALIDATE ");
    if ( (v8 & 0x4000000) != 0 )
      Com_Printf(8, "FLUSH_TOP_DEPTH_BLOCK_INVALIDATE ");
    if ( (v8 & 0x400000) != 0 )
      Com_Printf(8, "FLUSH_TOP_TEXTURE_L1_INVALIDATE ");
    if ( (v8 & 0x800000) != 0 )
      Com_Printf(8, "FLUSH_TOP_TEXTURE_L2_INVALIDATE ");
    if ( (v8 & 0x40000) != 0 )
      Com_Printf(8, "FLUSH_TOP_TEXTURE_L2_WRITEBACK ");
    if ( (v8 & 0x8000000) != 0 )
      Com_Printf(8, "FLUSH_TOP_KCACHE_INVALIDATE ");
    if ( (v8 & 0x20000000) != 0 )
      Com_Printf(8, "FLUSH_TOP_ICACHE_INVALIDATE ");
    if ( (v8 & 0x80000000) != 0 )
      Com_Printf(8, "FLUSH_TOP_SELECT_ENGINE_PFP ");
    if ( (v8 & 0x40000000) != 0 )
      Com_Printf(8, "FLUSH_TOP_PFP_SYNC_ME ");
    if ( (v8 & 4) != 0 )
      Com_Printf(8, "FLUSH_BOP_COLOR_BLOCK_DATA ");
    if ( (v8 & 8) != 0 )
      Com_Printf(8, "FLUSH_BOP_DEPTH_BLOCK_DATA ");
    if ( (v8 & 0x10) != 0 )
      Com_Printf(8, "FLUSH_BOP_COLOR_BLOCK_META ");
    if ( (v8 & 0x20) != 0 )
      Com_Printf(8, "FLUSH_BOP_DEPTH_BLOCK_META ");
    if ( (v8 & 0x1000) != 0 )
      Com_Printf(8, "FLUSH_BOP_TEXTURE_L1_INVALIDATE ");
    if ( (v8 & 0x2000) != 0 )
      Com_Printf(8, "FLUSH_BOP_TEXTURE_L2_INVALIDATE ");
    if ( (v8 & 0x800) != 0 )
      Com_Printf(8, "FLUSH_BOP_TEXTURE_L2_WRITEBACK ");
    if ( (v8 & 0x20000) != 0 )
      Com_Printf(8, "FLUSH_BOP_CS_PARTIAL ");
    if ( (v8 & 0x100000) != 0 )
      Com_Printf(8, "FLUSH_BOP_VS_PARTIAL ");
    if ( (v8 & 0x1000000) != 0 )
      Com_Printf(8, "FLUSH_BOP_PS_PARTIAL ");
    if ( (v8 & 0x400) != 0 )
      Com_Printf(8, "FLUSH_BOP_STREAMOUT ");
    if ( (v8 & 0x100000000i64) != 0 )
      Com_Printf(8, "DECOMPRESS_EXPAND_COLOR ");
    if ( (v8 & 0x200000000i64) != 0 )
      Com_Printf(8, "DECOMPRESS_EXPAND_DEPTH ");
    if ( (v8 & 0x400000000i64) != 0 )
      Com_Printf(8, "DECOMPRESS_EXPAND_STENCIL ");
    if ( (v8 & 0x600000000i64) != 0 )
      Com_Printf(8, "DECOMPRESS_EXPAND_DEPTH_STENCIL ");
    if ( (v8 & 0x800000000i64) != 0 )
      Com_Printf(8, "DECOMPRESS_PROPAGATE_COLOR_CLEAR ");
    if ( (v8 & 0x1000000000i64) != 0 )
      Com_Printf(8, "DECOMPRESS_GATHER_COLOR_FMASK ");
    if ( (v8 & 0x100000000000i64) != 0 )
      Com_Printf(8, "WAIT_FOR_DISPLAY ");
    if ( (v8 & 0x200000000000i64) != 0 )
      Com_Printf(8, "WAIT_FOR_RESOURCE ");
    Com_Printf(8, "\n");
  }
  else
  {
    ((void (__fastcall *)(ID3D12GraphicsCommandList *, _QWORD, D3D12_RESOURCE_BARRIER *))Release)(device, count, transitions);
  }
}

/*
==============
R_HW_AddResourceAlias
==============
*/
void R_HW_AddResourceAlias(CmdBufState *state)
{
  D3D12_RESOURCE_BARRIER *v1; 

  v1 = &state->resourceTransitions[state->resourceTransitionCount++];
  v1->Transition.pResource = NULL;
  v1->Aliasing.pResourceAfter = NULL;
  *(_QWORD *)&v1->Type = 1i64;
}

/*
==============
R_HW_AddResourceAlias
==============
*/
void R_HW_AddResourceAlias(CmdBufState *state, R_RT_Handle *before, R_RT_Handle *after, D3D12_RESOURCE_BARRIER_FLAGS flag)
{
  D3D12_RESOURCE_BARRIER *v5; 

  v5 = &state->resourceTransitions[state->resourceTransitionCount++];
  v5->Type = D3D12_RESOURCE_BARRIER_TYPE_ALIASING;
  v5->Flags = flag;
  v5->Transition.pResource = R_RT_Handle::GetD3DResource(before);
  v5->Aliasing.pResourceAfter = R_RT_Handle::GetD3DResource(after);
}

/*
==============
R_HW_AddResourceTransition
==============
*/
void R_HW_AddResourceTransition(CmdBufState *state, const GfxShaderBufferRWView *shaderRWView, unsigned int subresource, D3D12_RESOURCE_STATES before, D3D12_RESOURCE_STATES after, D3D12_RESOURCE_BARRIER_FLAGS flag)
{
  R_DX12_AddResourceTransition(state->resourceTransitions, &state->resourceTransitionCount, shaderRWView->rwResource, subresource, before, after, flag);
}

/*
==============
R_HW_AddResourceTransition
==============
*/
void R_HW_AddResourceTransition(CmdBufState *state, const GfxShaderTextureRWView *shaderRWView, unsigned int subresource, D3D12_RESOURCE_STATES before, D3D12_RESOURCE_STATES after, D3D12_RESOURCE_BARRIER_FLAGS flag)
{
  if ( !state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\dx12\\r_barrier_dx12.h", 111, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
    __debugbreak();
  R_DX12_AddResourceTransition(state->resourceTransitions, &state->resourceTransitionCount, shaderRWView->rwResource, subresource, before, after, flag);
}

/*
==============
R_HW_AddResourceTransition
==============
*/
void R_HW_AddResourceTransition(CmdBufState *state, ID3D12Resource *const *vertexBuffer, unsigned int subresource, D3D12_RESOURCE_STATES before, D3D12_RESOURCE_STATES after, D3D12_RESOURCE_BARRIER_FLAGS flag)
{
  R_DX12_AddResourceTransition(state->resourceTransitions, &state->resourceTransitionCount, *vertexBuffer, subresource, before, after, flag);
}

/*
==============
R_HW_AddResourceTransition
==============
*/
void R_HW_AddResourceTransition(CmdBufState *state, const GfxTexture *texture, unsigned int subresource, D3D12_RESOURCE_STATES before, D3D12_RESOURCE_STATES after, D3D12_RESOURCE_BARRIER_FLAGS flag)
{
  if ( !state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\dx12\\r_barrier_dx12.h", 104, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
    __debugbreak();
  R_DX12_AddResourceTransition(state->resourceTransitions, &state->resourceTransitionCount, texture->basemap, subresource, before, after, flag);
}

/*
==============
R_HW_AddResourceTransition
==============
*/
void R_HW_AddResourceTransition(CmdBufState *state, const GfxWrappedBuffer *wrappedBuffer, unsigned int subresource, D3D12_RESOURCE_STATES before, D3D12_RESOURCE_STATES after, D3D12_RESOURCE_BARRIER_FLAGS flag)
{
  R_DX12_AddResourceTransition(state->resourceTransitions, &state->resourceTransitionCount, wrappedBuffer->buffer, subresource, before, after, flag);
}

/*
==============
R_HW_AddResourceTransition
==============
*/
void R_HW_AddResourceTransition(CmdBufState *state, R_RT_Handle *rtHandle, unsigned int subresource, D3D12_RESOURCE_STATES before, D3D12_RESOURCE_STATES after, D3D12_RESOURCE_BARRIER_FLAGS flag)
{
  ID3D12Resource *D3DResource; 

  D3DResource = R_RT_Handle::GetD3DResource(rtHandle);
  R_DX12_AddResourceTransition(state->resourceTransitions, &state->resourceTransitionCount, D3DResource, subresource, before, after, flag);
}

/*
==============
R_HW_AddResourceTransition
==============
*/
void R_HW_AddResourceTransition(CmdBufState *state, R_RT_Handle *rtHandle, D3D12_RESOURCE_STATES before, D3D12_RESOURCE_STATES after, D3D12_RESOURCE_BARRIER_FLAGS flag)
{
  R_RT_Handle *v8; 
  const R_RT_Surface *Surface; 
  unsigned int m_subresourceToTransition; 
  const R_RT_Surface *v11; 
  const GfxTexture *Resident; 
  R_RT_Handle v13; 

  v8 = rtHandle;
  Surface = R_RT_Handle::GetSurface(rtHandle);
  v13 = *v8;
  m_subresourceToTransition = Surface->m_subresourceToTransition;
  LODWORD(v8) = R_RT_Handle::GetSurface(&v13)->m_rtFlagsInternal;
  v11 = R_RT_Handle::GetSurface(&v13);
  if ( ((unsigned __int8)v8 & 8) != 0 )
  {
    Resident = (const GfxTexture *)&v11->1080;
  }
  else
  {
    Resident = R_Texture_GetResident(v11->m_image.m_base.textureId);
    if ( !Resident->basemap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 300, ASSERT_TYPE_ASSERT, "(texture->map)", (const char *)&queryFormat, "texture->map") )
      __debugbreak();
  }
  R_DX12_AddResourceTransition(state->resourceTransitions, &state->resourceTransitionCount, Resident->basemap, m_subresourceToTransition, before, after, flag);
}

/*
==============
R_HW_AddResourceTransitionLabel
==============
*/
void R_HW_AddResourceTransitionLabel(CmdBufState *__formal, const unsigned __int64 *a2, unsigned int a3)
{
  ;
}

/*
==============
R_HW_FlushResourceTransitions
==============
*/
void R_HW_FlushResourceTransitions(CmdBufState *state)
{
  GfxDevice *device; 
  GfxDescriptorState *descState; 
  unsigned int resourceTransitionCount; 

  if ( !state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\dx12\\r_barrier_dx12.h", 176, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
    __debugbreak();
  device = state->device;
  descState = state->descState;
  if ( !device && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\dx12\\r_barrier_dx12.h", 180, ASSERT_TYPE_ASSERT, "(device)", (const char *)&queryFormat, "device") )
    __debugbreak();
  if ( !descState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\dx12\\r_barrier_dx12.h", 181, ASSERT_TYPE_ASSERT, "(descState)", (const char *)&queryFormat, "descState") )
    __debugbreak();
  resourceTransitionCount = state->resourceTransitionCount;
  if ( resourceTransitionCount )
  {
    if ( resourceTransitionCount > 0x20 )
    {
      R_WarnOncePerFrame(R_WARN_RESOURCE_BARRIER_BATCH, resourceTransitionCount, 32i64, "Resource Transitions");
      resourceTransitionCount = state->resourceTransitionCount;
    }
    R_DX12_TransitionResources(device, descState, state->resourceTransitions, resourceTransitionCount);
    state->resourceTransitionCount = 0;
  }
}

