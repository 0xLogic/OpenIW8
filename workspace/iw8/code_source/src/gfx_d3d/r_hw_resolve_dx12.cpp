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
  R_RT_DepthHandle v7; 
  GfxCmdBufContext v8; 
  GfxViewport v9; 
  GfxCmdBufContext v10; 
  __m256i v11; 

  *(_QWORD *)&v9.x = 0i64;
  v9.width = R_RT_Handle::GetSurface(depthRt)->m_image.m_base.width;
  Surface = R_RT_Handle::GetSurface(depthRt);
  v7 = *depthRt;
  v8 = *context;
  v9.height = Surface->m_image.m_base.height;
  v11 = (__m256i)v7;
  v10 = v8;
  R_HW_DecompressDepthSurface(&v10, (R_RT_DepthHandle *)&v11, &v9, flushCaches);
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
  GfxCmdBufState *state; 
  const GfxDevice *device; 
  GfxTextureId textureId; 
  const GfxTexture *Resident; 
  const R_RT_Surface *Surface; 
  const GfxTexture *v8; 
  R_RT_Handle v9; 

  state = context->state;
  device = state->device;
  if ( !R_IsLockedIfGfxImmediateContext(device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  if ( state->rtGroup.m_colorRtCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 559, ASSERT_TYPE_ASSERT, "(this->m_colorRtCount == 1)", (const char *)&queryFormat, "this->m_colorRtCount == 1") )
    __debugbreak();
  textureId = image->textureId;
  v9 = (R_RT_Handle)state->rtGroup.m_colorRts[0];
  Resident = R_Texture_GetResident(textureId);
  Surface = R_RT_Handle::GetSurface(&v9);
  v8 = R_Texture_GetResident(Surface->m_image.m_base.textureId);
  if ( Resident != v8 )
  {
    R_HW_AddResourceTransition(state, Resident, 0xFFFFFFFF, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_STATE_COPY_DEST, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_HW_AddResourceTransition(state, v8, 0xFFFFFFFF, D3D12_RESOURCE_STATE_RENDER_TARGET, D3D12_RESOURCE_STATE_COPY_SOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(state);
    ((void (__fastcall *)(const GfxDevice *, ID3D12Resource *, ID3D12Resource *, _QWORD))device->m_pFunction[28].QueryInterface)(device, Resident->basemap, v8->basemap, 0i64);
    R_HW_AddResourceTransition(state, Resident, 0xFFFFFFFF, D3D12_RESOURCE_STATE_COPY_DEST, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_HW_AddResourceTransition(state, v8, 0xFFFFFFFF, D3D12_RESOURCE_STATE_COPY_SOURCE, D3D12_RESOURCE_STATE_RENDER_TARGET, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(state);
  }
}

/*
==============
R_HW_ResolveDepth
==============
*/
void R_HW_ResolveDepth(GfxCmdBufContext *context)
{
  GfxViewport *p_viewport; 
  R_RT_Handle v5; 
  R_RT_Handle m_depthRt; 

  m_depthRt = (R_RT_Handle)context->state->rtGroup.m_depthRt;
  v5 = m_depthRt;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v5);
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", *(_QWORD *)&v5.m_surfaceID, *(_QWORD *)&v5.m_tracking.m_allocCounter, v5.m_tracking.m_name, v5.m_tracking.m_location, *(_QWORD *)&m_depthRt.m_surfaceID, *(_QWORD *)&m_depthRt.m_tracking.m_allocCounter, m_depthRt.m_tracking.m_name, m_depthRt.m_tracking.m_location) )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_hw_resolve_dx12.cpp", 216, ASSERT_TYPE_ASSERT, "(depthRT.IsValid())", (const char *)&queryFormat, "depthRT.IsValid()") )
      __debugbreak();
  }
  p_viewport = &context->state->viewport;
  *(GfxCmdBufContext *)&v5.m_surfaceID = *context;
  R_HW_DecompressDepthSurface((GfxCmdBufContext *)&v5, (R_RT_DepthHandle *)&m_depthRt, p_viewport, 0);
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
  GfxCmdBufState *v8; 
  unsigned int m_subresourceToTransition; 
  GfxCmdBufContext v10; 
  R_RT_Handle v11; 
  R_RT_Handle m_depthRt; 
  __m256i v13; 

  m_depthRt = (R_RT_Handle)context->state->rtGroup.m_depthRt;
  v11 = m_depthRt;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v11);
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
    state = context->state;
    v13 = (__m256i)m_depthRt;
    v10 = *context;
    R_HW_DecompressDepthSurface(&v10, (R_RT_DepthHandle *)&v13, &state->viewport, 0);
  }
  Surface = R_RT_Handle::GetSurface(&v11);
  v8 = context->state;
  m_subresourceToTransition = Surface->m_subresourceToTransition;
  v13 = (__m256i)m_depthRt;
  R_HW_AddResourceTransition(v8, (R_RT_Handle *)&v13, m_subresourceToTransition, D3D12_RESOURCE_STATE_DEPTH_WRITE, (D3D12_RESOURCE_STATES)(finalState | 0xC00000), D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(v8);
}

/*
==============
R_HW_ResolveSection
==============
*/
void R_HW_ResolveSection(GfxCmdBufContext *context, const GfxImage *image, float s0, float t0, float ds, float dt)
{
  GfxCmdBufState *state; 
  float width; 
  unsigned int v10; 
  float height; 
  unsigned int v12; 
  const GfxDevice *device; 
  __int64 *Resident; 
  const R_RT_Surface *Surface; 
  __int64 *v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  int v20; 
  int v21; 
  __int64 v22; 
  int v23; 
  int v24; 
  R_RT_Handle v25; 
  int v26[6]; 
  int v27[14]; 
  int v28[14]; 

  state = context->state;
  width = (float)image->width;
  v10 = (int)(float)(width * s0);
  height = (float)image->height;
  v12 = (int)(float)(height * t0);
  v26[0] = v10;
  v26[3] = v10 + (int)(float)(width * ds);
  v26[1] = v12;
  v26[4] = v12 + (int)(float)(height * dt);
  v26[2] = 0;
  v26[5] = 1;
  device = state->device;
  if ( !R_IsLockedIfGfxImmediateContext(device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  if ( state->rtGroup.m_colorRtCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 559, ASSERT_TYPE_ASSERT, "(this->m_colorRtCount == 1)", (const char *)&queryFormat, "this->m_colorRtCount == 1") )
    __debugbreak();
  v25 = (R_RT_Handle)state->rtGroup.m_colorRts[0];
  R_ProfBeginNamedEvent(state, "Saved Scene Section Resolve");
  Resident = (__int64 *)R_Texture_GetResident(image->textureId);
  Surface = R_RT_Handle::GetSurface(&v25);
  v16 = (__int64 *)R_Texture_GetResident(Surface->m_image.m_base.textureId);
  v17 = *Resident;
  v18 = *v16;
  (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v17 + 80i64))(v17, v27);
  if ( v27[0] == 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_hw_resolve_dx12.cpp", 151, ASSERT_TYPE_ASSERT, "(dstDesc.Dimension != D3D12_RESOURCE_DIMENSION_BUFFER)", (const char *)&queryFormat, "dstDesc.Dimension != D3D12_RESOURCE_DIMENSION_BUFFER") )
    __debugbreak();
  (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v18 + 80i64))(v18, v28);
  if ( v28[0] == 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_hw_resolve_dx12.cpp", 154, ASSERT_TYPE_ASSERT, "(srcDesc.Dimension != D3D12_RESOURCE_DIMENSION_BUFFER)", (const char *)&queryFormat, "srcDesc.Dimension != D3D12_RESOURCE_DIMENSION_BUFFER") )
    __debugbreak();
  v19 = v18;
  v20 = 0;
  v21 = 0;
  v22 = v17;
  v23 = 0;
  v24 = 0;
  ((void (__fastcall *)(const GfxDevice *, __int64 *, _QWORD, _QWORD, _DWORD, __int64 *, int *, _DWORD))device->m_pFunction[27].Release)(device, &v22, v10, v12, 0, &v19, v26, 0);
  R_ProfEndNamedEvent(context->state);
}

/*
==============
R_HW_ResummarizeDepth
==============
*/
void R_HW_ResummarizeDepth(GfxCmdBufContext *context)
{
  GfxCmdBufContext v4; 
  GfxCmdBufState *state; 
  R_RT_FlagsInternal m_rtFlagsInternal; 
  const R_RT_Surface *Surface; 
  const GfxTexture *Resident; 
  int x; 
  int y; 
  GfxDevice *device; 
  R_RT_Handle m_depthRt; 
  GfxCmdBufContext v13; 
  ID3D12Resource *basemap; 
  int v15; 
  unsigned int m_subresourceToTransition; 
  R_RT_Handle v17; 
  int v18; 
  int v19; 
  int v20; 
  unsigned int v21; 
  unsigned int v22; 
  int v23; 

  m_depthRt = (R_RT_Handle)context->state->rtGroup.m_depthRt;
  v17 = m_depthRt;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v17);
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_hw_resolve_dx12.cpp", 207, ASSERT_TYPE_ASSERT, "(depthRT.IsValid())", (const char *)&queryFormat, "depthRT.IsValid()") )
      __debugbreak();
  }
  v4 = *context;
  state = context->state;
  v13 = v4;
  if ( (R_RT_Handle::GetSurface(&m_depthRt)->m_rtFlags & 0x100) == 0 )
  {
    m_rtFlagsInternal = R_RT_Handle::GetSurface(&m_depthRt)->m_rtFlagsInternal;
    Surface = R_RT_Handle::GetSurface(&m_depthRt);
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
    v15 = 0;
    if ( R_RT_Handle::GetSurface(&m_depthRt)->m_subresourceToTransition == -1 )
      m_subresourceToTransition = 0;
    else
      m_subresourceToTransition = R_RT_Handle::GetSurface(&m_depthRt)->m_subresourceToTransition;
    x = state->viewport.x;
    y = state->viewport.y;
    v21 = x + state->viewport.width;
    v22 = y + state->viewport.height;
    device = v13.state->device;
    v18 = x;
    v19 = y;
    v20 = 0;
    v23 = 1;
    ((void (__fastcall *)(GfxDevice *, ID3D12Resource **))device->m_pFunction[27].Release)(device, &basemap);
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
  R_RT_DepthHandle v7; 
  GfxCmdBufContext v8; 
  GfxViewport v9; 
  GfxCmdBufContext v10; 
  __m256i v11; 

  *(_QWORD *)&v9.x = 0i64;
  v9.width = R_RT_Handle::GetSurface(depthRt)->m_image.m_base.width;
  Surface = R_RT_Handle::GetSurface(depthRt);
  v7 = *depthRt;
  v8 = *context;
  v9.height = Surface->m_image.m_base.height;
  v11 = (__m256i)v7;
  v10 = v8;
  R_HW_ResummarizeDepth(&v10, (R_RT_DepthHandle *)&v11, &v9, flushCaches);
}

