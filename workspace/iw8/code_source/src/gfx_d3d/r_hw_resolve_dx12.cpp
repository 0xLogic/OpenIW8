/*
==============
R_HW_ResolveDepthToState
==============
*/

void __fastcall R_HW_ResolveDepthToState(GfxCmdBufContext *context, D3D12_RESOURCE_STATES finalState)
{
  ?R_HW_ResolveDepthToState@@YAXUGfxCmdBufContext@@W4D3D12_RESOURCE_STATES@@@Z(context, finalState);
}

/*
==============
R_HW_EliminateFastClear
==============
*/

void __fastcall R_HW_EliminateFastClear(GfxCmdBufContext *context, R_RT_ColorHandle *colorRt, bool flushCaches)
{
  ?R_HW_EliminateFastClear@@YAXUGfxCmdBufContext@@VR_RT_ColorHandle@@_N@Z(context, colorRt, flushCaches);
}

/*
==============
R_HW_ResolveSection
==============
*/

void __fastcall R_HW_ResolveSection(GfxCmdBufContext *context, const GfxImage *image, float s0, float t0, float ds, float dt)
{
  ?R_HW_ResolveSection@@YAXUGfxCmdBufContext@@PEBUGfxImage@@MMMM@Z(context, image, s0, t0, ds, dt);
}

/*
==============
R_HW_ResummarizeDepth
==============
*/

void __fastcall R_HW_ResummarizeDepth(GfxCmdBufContext *context)
{
  ?R_HW_ResummarizeDepth@@YAXUGfxCmdBufContext@@@Z(context);
}

/*
==============
R_HW_ResummarizeDepth
==============
*/

void __fastcall R_HW_ResummarizeDepth(GfxCmdBufContext *context, R_RT_DepthHandle *depthRt, GfxViewport *viewport, bool flushCaches)
{
  ?R_HW_ResummarizeDepth@@YAXUGfxCmdBufContext@@VR_RT_DepthHandle@@AEAUGfxViewport@@_N@Z(context, depthRt, viewport, flushCaches);
}

/*
==============
R_HW_ResolveDepth
==============
*/

void __fastcall R_HW_ResolveDepth(GfxCmdBufContext *context)
{
  ?R_HW_ResolveDepth@@YAXUGfxCmdBufContext@@@Z(context);
}

/*
==============
R_HW_ResummarizeDepth
==============
*/

void __fastcall R_HW_ResummarizeDepth(GfxCmdBufContext *context, R_RT_DepthHandle *depthRt, bool flushCaches)
{
  ?R_HW_ResummarizeDepth@@YAXUGfxCmdBufContext@@VR_RT_DepthHandle@@_N@Z(context, depthRt, flushCaches);
}

/*
==============
R_HW_DecompressDepthSurface
==============
*/

void __fastcall R_HW_DecompressDepthSurface(GfxCmdBufContext *context, R_RT_DepthHandle *depthRt, GfxViewport *viewport, bool flushCaches)
{
  ?R_HW_DecompressDepthSurface@@YAXUGfxCmdBufContext@@VR_RT_DepthHandle@@AEAUGfxViewport@@_N@Z(context, depthRt, viewport, flushCaches);
}

/*
==============
R_HW_Resolve
==============
*/

void __fastcall R_HW_Resolve(GfxCmdBufContext *context, const GfxImage *image)
{
  ?R_HW_Resolve@@YAXUGfxCmdBufContext@@PEBUGfxImage@@@Z(context, image);
}

/*
==============
R_HW_DecompressFMask
==============
*/

void __fastcall R_HW_DecompressFMask(GfxCmdBufContext *context, R_RT_ColorHandle *colorRt, bool flushCaches)
{
  ?R_HW_DecompressFMask@@YAXUGfxCmdBufContext@@VR_RT_ColorHandle@@_N@Z(context, colorRt, flushCaches);
}

/*
==============
R_HW_DecompressDepthSurface
==============
*/

void __fastcall R_HW_DecompressDepthSurface(GfxCmdBufContext *context, R_RT_DepthHandle *depthRt, bool flushCaches)
{
  ?R_HW_DecompressDepthSurface@@YAXUGfxCmdBufContext@@VR_RT_DepthHandle@@_N@Z(context, depthRt, flushCaches);
}

/*
==============
R_HW_DecompressDepthSurface
==============
*/
void R_HW_DecompressDepthSurface(GfxCmdBufContext *context, R_RT_DepthHandle *depthRt, GfxViewport *viewport, bool flushCaches)
{
  unsigned int y; 
  int v9; 
  const R_RT_Surface *Surface; 
  ID3D12Resource *D3DResource; 
  int v12; 
  unsigned int m_subresourceToTransition; 
  int v14[6]; 

  if ( (R_RT_Handle::GetSurface(depthRt)->m_rtFlags & 0x100) == 0 )
  {
    D3DResource = R_RT_Handle::GetD3DResource(depthRt);
    v12 = 0;
    if ( R_RT_Handle::GetSurface(depthRt)->m_subresourceToTransition == -1 )
      m_subresourceToTransition = 0;
    else
      m_subresourceToTransition = R_RT_Handle::GetSurface(depthRt)->m_subresourceToTransition;
    y = viewport->y;
    v14[0] = viewport->x;
    v14[3] = viewport->width + v14[0];
    v9 = y + viewport->height;
    v14[1] = y;
    v14[4] = v9;
    v14[2] = 0;
    v14[5] = 1;
    Surface = R_RT_Handle::GetSurface(depthRt);
    ((void (__fastcall *)(GfxDevice *, ID3D12Resource **, _QWORD, _QWORD, _DWORD, ID3D12Resource **, int *, unsigned int))context->state->device->m_pFunction[27].Release)(context->state->device, &D3DResource, viewport->x, viewport->y, 0, &D3DResource, v14, ((((unsigned int)Surface->m_rtFlags >> 7) & 1) << 6) | 0x20);
    if ( flushCaches && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_hw_resolve_dx12.cpp", 52, ASSERT_TYPE_ASSERT, "( !flushCaches )", "todo: FlushPipelineX for decompression - check if driver inserts flushes first") )
      __debugbreak();
  }
}

/*
==============
R_HW_DecompressDepthSurface
==============
*/
void R_HW_DecompressDepthSurface(GfxCmdBufContext *context, R_RT_DepthHandle *depthRt, bool flushCaches)
{
  const R_RT_Surface *Surface; 
  GfxViewport v9; 
  GfxCmdBufContext v10; 
  R_RT_DepthHandle v11; 

  _RDI = context;
  *(_QWORD *)&v9.x = 0i64;
  _RBX = depthRt;
  v9.width = R_RT_Handle::GetSurface(depthRt)->m_image.m_base.width;
  Surface = R_RT_Handle::GetSurface(_RBX);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx]
    vmovups xmm1, xmmword ptr [rdi]
  }
  v9.height = Surface->m_image.m_base.height;
  __asm
  {
    vmovups ymmword ptr [rsp+68h+var_28.baseclass_0.m_surfaceID], ymm0
    vmovups [rsp+68h+var_38], xmm1
  }
  R_HW_DecompressDepthSurface(&v10, &v11, &v9, flushCaches);
}

/*
==============
R_HW_DecompressFMask
==============
*/
void R_HW_DecompressFMask(GfxCmdBufContext *context, R_RT_ColorHandle *colorRt, bool flushCaches)
{
  R_RT_Flags m_rtFlags; 
  const R_RT_Surface *Surface; 
  const GfxTexture *Resident; 
  GfxCmdBufState *state; 

  m_rtFlags = R_RT_Handle::GetSurface(colorRt)->m_rtFlags;
  Surface = R_RT_Handle::GetSurface(colorRt);
  Resident = R_Texture_GetResident(Surface->m_image.m_base.textureId);
  state = context->state;
  R_HW_AddResourceTransition(state, Resident, 0xFFFFFFFF, D3D12_RESOURCE_STATE_RENDER_TARGET, (D3D12_RESOURCE_STATES)(((m_rtFlags & 8) << 22) | 0x4000C0), D3D12_RESOURCE_BARRIER_FLAG_NONE);
  if ( flushCaches )
    R_HW_FlushResourceTransitions(state);
}

/*
==============
R_HW_EliminateFastClear
==============
*/
void R_HW_EliminateFastClear(GfxCmdBufContext *context, R_RT_ColorHandle *colorRt, bool flushCaches)
{
  GfxCmdBufState *state; 
  const R_RT_Surface *Surface; 
  const GfxTexture *Resident; 

  state = context->state;
  Surface = R_RT_Handle::GetSurface(colorRt);
  Resident = R_Texture_GetResident(Surface->m_image.m_base.textureId);
  R_HW_AddResourceTransition(state, Resident, 0xFFFFFFFF, D3D12_RESOURCE_STATE_RENDER_TARGET, D3D12XBOX_RESOURCE_STATE_PRESERVE_SCATTERED_COLOR_FMASK|D3D12XBOX_RESOURCE_STATE_PRESERVE_COMPRESSED_DEPTH|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  if ( flushCaches )
    R_HW_FlushResourceTransitions(state);
}

/*
==============
R_HW_Resolve
==============
*/
void R_HW_Resolve(GfxCmdBufContext *context, const GfxImage *image)
{
  const GfxDevice *device; 
  GfxTextureId textureId; 
  const GfxTexture *Resident; 
  const R_RT_Surface *Surface; 
  const GfxTexture *v9; 
  R_RT_Handle v10; 

  _RBX = context->state;
  device = _RBX->device;
  if ( !R_IsLockedIfGfxImmediateContext(device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  if ( _RBX->rtGroup.m_colorRtCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 559, ASSERT_TYPE_ASSERT, "(this->m_colorRtCount == 1)", (const char *)&queryFormat, "this->m_colorRtCount == 1") )
    __debugbreak();
  __asm { vmovups ymm0, ymmword ptr [rbx+0A30h] }
  textureId = image->textureId;
  __asm { vmovups ymmword ptr [rsp+58h+var_28.m_surfaceID], ymm0 }
  Resident = R_Texture_GetResident(textureId);
  Surface = R_RT_Handle::GetSurface(&v10);
  v9 = R_Texture_GetResident(Surface->m_image.m_base.textureId);
  if ( Resident != v9 )
  {
    R_HW_AddResourceTransition(_RBX, Resident, 0xFFFFFFFF, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_STATE_COPY_DEST, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_HW_AddResourceTransition(_RBX, v9, 0xFFFFFFFF, D3D12_RESOURCE_STATE_RENDER_TARGET, D3D12_RESOURCE_STATE_COPY_SOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(_RBX);
    ((void (__fastcall *)(const GfxDevice *, ID3D12Resource *, ID3D12Resource *, _QWORD))device->m_pFunction[28].QueryInterface)(device, Resident->basemap, v9->basemap, 0i64);
    R_HW_AddResourceTransition(_RBX, Resident, 0xFFFFFFFF, D3D12_RESOURCE_STATE_COPY_DEST, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_HW_AddResourceTransition(_RBX, v9, 0xFFFFFFFF, D3D12_RESOURCE_STATE_COPY_SOURCE, D3D12_RESOURCE_STATE_RENDER_TARGET, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(_RBX);
  }
}

/*
==============
R_HW_ResolveDepth
==============
*/
void R_HW_ResolveDepth(GfxCmdBufContext *context)
{
  GfxCmdBufState *state; 
  R_RT_Handle v9; 
  R_RT_DepthHandle v10; 

  _RAX = context->state;
  _RBX = context;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax+0AB0h]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rsp+78h+var_28.baseclass_0.m_surfaceID], ymm0
    vmovups ymmword ptr [rsp+78h+var_48.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v9);
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", *(_QWORD *)&v9.m_surfaceID, *(_QWORD *)&v9.m_tracking.m_allocCounter, v9.m_tracking.m_name, v9.m_tracking.m_location) )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_hw_resolve_dx12.cpp", 216, ASSERT_TYPE_ASSERT, "(depthRT.IsValid())", (const char *)&queryFormat, "depthRT.IsValid()") )
      __debugbreak();
  }
  __asm { vmovups ymm0, ymmword ptr [rsp+78h+var_28.baseclass_0.m_surfaceID] }
  state = _RBX->state;
  __asm
  {
    vmovups ymmword ptr [rsp+78h+var_28.baseclass_0.m_surfaceID], ymm0
    vmovups xmm0, xmmword ptr [rbx]
    vmovups xmmword ptr [rsp+78h+var_48.m_surfaceID], xmm0
  }
  R_HW_DecompressDepthSurface((GfxCmdBufContext *)&v9, &v10, &state->viewport, 0);
}

/*
==============
R_HW_ResolveDepthToState
==============
*/
void R_HW_ResolveDepthToState(GfxCmdBufContext *context, D3D12_RESOURCE_STATES finalState)
{
  GfxCmdBufState *state; 
  const R_RT_Surface *Surface; 
  CmdBufState *v13; 
  unsigned int m_subresourceToTransition; 
  GfxCmdBufContext v15; 
  R_RT_Handle v16; 
  R_RT_DepthHandle v18; 

  _RAX = context->state;
  _RBX = context;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax+0AB0h]
    vmovd   eax, xmm0
    vmovups [rsp+0A8h+var_48], ymm0
    vmovups ymmword ptr [rsp+0A8h+var_68.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v16);
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_hw_resolve_dx12.cpp", 225, ASSERT_TYPE_ASSERT, "(depthRT.IsValid())", (const char *)&queryFormat, "depthRT.IsValid()") )
      __debugbreak();
  }
  if ( (finalState & 0x400000) == 0 )
  {
    __asm { vmovups ymm0, [rsp+0A8h+var_48] }
    state = _RBX->state;
    __asm
    {
      vmovups ymmword ptr [rsp+0A8h+var_28.baseclass_0.m_surfaceID], ymm0
      vmovups xmm0, xmmword ptr [rbx]
      vmovups [rsp+0A8h+var_78], xmm0
    }
    R_HW_DecompressDepthSurface(&v15, &v18, &state->viewport, 0);
  }
  Surface = R_RT_Handle::GetSurface(&v16);
  __asm { vmovups ymm0, [rsp+0A8h+var_48] }
  v13 = _RBX->state;
  m_subresourceToTransition = Surface->m_subresourceToTransition;
  __asm { vmovups ymmword ptr [rsp+0A8h+var_28.baseclass_0.m_surfaceID], ymm0 }
  R_HW_AddResourceTransition(v13, &v18, m_subresourceToTransition, D3D12_RESOURCE_STATE_DEPTH_WRITE, (D3D12_RESOURCE_STATES)(finalState | 0xC00000), D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(v13);
}

/*
==============
R_HW_ResolveSection
==============
*/

void __fastcall R_HW_ResolveSection(GfxCmdBufContext *context, const GfxImage *image, double s0, float t0)
{
  const GfxDevice *device; 
  __int64 *Resident; 
  const R_RT_Surface *Surface; 
  __int64 *v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  int v28; 
  int v29; 
  __int64 v30; 
  int v31; 
  int v32; 
  R_RT_Handle v33; 
  int v34[6]; 
  int v35[14]; 
  int v36[14]; 

  _RBX = context->state;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, eax
    vmulss  xmm0, xmm1, xmm2
    vcvttss2si r14, xmm0
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, eax
    vmulss  xmm0, xmm2, xmm3
    vcvttss2si r15, xmm0
    vmulss  xmm0, xmm1, [rsp+198h+arg_20]
    vcvttss2si rax, xmm0
    vmulss  xmm0, xmm2, [rsp+198h+arg_28]
  }
  v34[0] = _R14;
  v34[3] = _R14 + _RAX;
  __asm { vcvttss2si rax, xmm0 }
  v34[1] = _R15;
  v34[4] = _R15 + _RAX;
  v34[2] = 0;
  v34[5] = 1;
  device = _RBX->device;
  if ( !R_IsLockedIfGfxImmediateContext(device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  if ( _RBX->rtGroup.m_colorRtCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 559, ASSERT_TYPE_ASSERT, "(this->m_colorRtCount == 1)", (const char *)&queryFormat, "this->m_colorRtCount == 1") )
    __debugbreak();
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx+0A30h]
    vmovups ymmword ptr [rsp+198h+var_F8.m_surfaceID], ymm0
  }
  R_ProfBeginNamedEvent(_RBX, "Saved Scene Section Resolve");
  Resident = (__int64 *)R_Texture_GetResident(image->textureId);
  Surface = R_RT_Handle::GetSurface(&v33);
  v24 = (__int64 *)R_Texture_GetResident(Surface->m_image.m_base.textureId);
  v25 = *Resident;
  v26 = *v24;
  (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v25 + 80i64))(v25, v35);
  if ( v35[0] == 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_hw_resolve_dx12.cpp", 151, ASSERT_TYPE_ASSERT, "(dstDesc.Dimension != D3D12_RESOURCE_DIMENSION_BUFFER)", (const char *)&queryFormat, "dstDesc.Dimension != D3D12_RESOURCE_DIMENSION_BUFFER") )
    __debugbreak();
  (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v26 + 80i64))(v26, v36);
  if ( v36[0] == 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_hw_resolve_dx12.cpp", 154, ASSERT_TYPE_ASSERT, "(srcDesc.Dimension != D3D12_RESOURCE_DIMENSION_BUFFER)", (const char *)&queryFormat, "srcDesc.Dimension != D3D12_RESOURCE_DIMENSION_BUFFER") )
    __debugbreak();
  v27 = v26;
  v28 = 0;
  v29 = 0;
  v30 = v25;
  v31 = 0;
  v32 = 0;
  ((void (__fastcall *)(const GfxDevice *, __int64 *, _QWORD, _QWORD, _DWORD, __int64 *, int *, _DWORD))device->m_pFunction[27].Release)(device, &v30, (unsigned int)_R14, (unsigned int)_R15, 0, &v27, v34, 0);
  R_ProfEndNamedEvent(context->state);
}

/*
==============
R_HW_ResummarizeDepth
==============
*/
void R_HW_ResummarizeDepth(GfxCmdBufContext *context)
{
  GfxCmdBufState *state; 
  R_RT_FlagsInternal m_rtFlagsInternal; 
  const R_RT_Surface *Surface; 
  const GfxTexture *Resident; 
  int x; 
  int y; 
  __int64 v14; 
  R_RT_Handle v15; 
  __int128 v16; 
  ID3D12Resource *basemap; 
  int v18; 
  unsigned int m_subresourceToTransition; 
  R_RT_Handle v20; 
  int v21; 
  int v22; 
  int v23; 
  unsigned int v24; 
  unsigned int v25; 
  int v26; 

  _RAX = context->state;
  _RDI = context;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax+0AB0h]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rsp+0E8h+var_A8.m_surfaceID], ymm0
    vmovups ymmword ptr [rsp+0E8h+var_48.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v20);
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_hw_resolve_dx12.cpp", 207, ASSERT_TYPE_ASSERT, "(depthRT.IsValid())", (const char *)&queryFormat, "depthRT.IsValid()") )
      __debugbreak();
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rsp+0E8h+var_A8.m_surfaceID]
    vmovups ymmword ptr [rsp+0E8h+var_A8.m_surfaceID], ymm0
    vmovups xmm0, xmmword ptr [rdi]
  }
  state = _RDI->state;
  __asm { vmovups [rsp+0E8h+var_88], xmm0 }
  if ( (R_RT_Handle::GetSurface(&v15)->m_rtFlags & 0x100) == 0 )
  {
    m_rtFlagsInternal = R_RT_Handle::GetSurface(&v15)->m_rtFlagsInternal;
    Surface = R_RT_Handle::GetSurface(&v15);
    if ( (m_rtFlagsInternal & 8) != 0 )
    {
      Resident = (const GfxTexture *)&Surface->1080;
    }
    else
    {
      Resident = R_Texture_GetResident(Surface->m_image.m_base.textureId);
      if ( !Resident->basemap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 300, ASSERT_TYPE_ASSERT, "(texture->map)", (const char *)&queryFormat, "texture->map") )
        __debugbreak();
    }
    basemap = Resident->basemap;
    v18 = 0;
    if ( R_RT_Handle::GetSurface(&v15)->m_subresourceToTransition == -1 )
      m_subresourceToTransition = 0;
    else
      m_subresourceToTransition = R_RT_Handle::GetSurface(&v15)->m_subresourceToTransition;
    x = state->viewport.x;
    y = state->viewport.y;
    v24 = x + state->viewport.width;
    v25 = y + state->viewport.height;
    v14 = *(_QWORD *)(*((_QWORD *)&v16 + 1) + 1360i64);
    v21 = x;
    v22 = y;
    v23 = 0;
    v26 = 1;
    (*(void (__fastcall **)(__int64, ID3D12Resource **))(*(_QWORD *)v14 + 664i64))(v14, &basemap);
  }
}

/*
==============
R_HW_ResummarizeDepth
==============
*/
void R_HW_ResummarizeDepth(GfxCmdBufContext *context, R_RT_DepthHandle *depthRt, GfxViewport *viewport, bool flushCaches)
{
  unsigned int x; 
  unsigned int y; 
  GfxCmdBufState *state; 
  unsigned int height; 
  ID3D12Resource *D3DResource; 
  int v13; 
  unsigned int m_subresourceToTransition; 
  unsigned int v15; 
  unsigned int v16; 
  int v17; 
  unsigned int v18; 
  unsigned int v19; 
  int v20; 

  if ( (R_RT_Handle::GetSurface(depthRt)->m_rtFlags & 0x100) == 0 )
  {
    D3DResource = R_RT_Handle::GetD3DResource(depthRt);
    v13 = 0;
    if ( R_RT_Handle::GetSurface(depthRt)->m_subresourceToTransition == -1 )
      m_subresourceToTransition = 0;
    else
      m_subresourceToTransition = R_RT_Handle::GetSurface(depthRt)->m_subresourceToTransition;
    x = viewport->x;
    y = viewport->y;
    state = context->state;
    v18 = viewport->x + viewport->width;
    height = viewport->height;
    v15 = x;
    v19 = y + height;
    v16 = y;
    v17 = 0;
    v20 = 1;
    ((void (__fastcall *)(GfxDevice *, ID3D12Resource **))state->device->m_pFunction[27].Release)(state->device, &D3DResource);
    if ( flushCaches && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_hw_resolve_dx12.cpp", 85, ASSERT_TYPE_ASSERT, "( !flushCaches )", "todo: FlushPipelineX for decompression - check if driver inserts flushes first") )
      __debugbreak();
  }
}

/*
==============
R_HW_ResummarizeDepth
==============
*/
void R_HW_ResummarizeDepth(GfxCmdBufContext *context, R_RT_DepthHandle *depthRt, bool flushCaches)
{
  const R_RT_Surface *Surface; 
  GfxViewport v9; 
  GfxCmdBufContext v10; 
  R_RT_DepthHandle v11; 

  _RDI = context;
  *(_QWORD *)&v9.x = 0i64;
  _RBX = depthRt;
  v9.width = R_RT_Handle::GetSurface(depthRt)->m_image.m_base.width;
  Surface = R_RT_Handle::GetSurface(_RBX);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx]
    vmovups xmm1, xmmword ptr [rdi]
  }
  v9.height = Surface->m_image.m_base.height;
  __asm
  {
    vmovups ymmword ptr [rsp+68h+var_28.baseclass_0.m_surfaceID], ymm0
    vmovups [rsp+68h+var_38], xmm1
  }
  R_HW_ResummarizeDepth(&v10, &v11, &v9, flushCaches);
}

