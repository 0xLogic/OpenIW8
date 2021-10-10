/*
==============
RB_CopyPartialRT
==============
*/

void __fastcall RB_CopyPartialRT(GfxCmdBufContext *gfxContext, R_RT_ColorHandle *dstColorRt, R_RT_ColorHandle *srcColorRt, const GfxViewport *dstViewport, const GfxViewport *srcViewport, Material *copyMaterial)
{
  ?RB_CopyPartialRT@@YAXUGfxCmdBufContext@@VR_RT_ColorHandle@@1PEBUGfxViewport@@2PEAUMaterial@@@Z(gfxContext, dstColorRt, srcColorRt, dstViewport, srcViewport, copyMaterial);
}

/*
==============
R_CopyDepthStencilRT
==============
*/

void __fastcall R_CopyDepthStencilRT(ComputeCmdBufState *state, R_RT_DepthHandle *dstRt, R_RT_DepthHandle *srcRt)
{
  ?R_CopyDepthStencilRT@@YAXPEAUComputeCmdBufState@@VR_RT_DepthHandle@@1@Z(state, dstRt, srcRt);
}

/*
==============
RB_CopyRT
==============
*/

void __fastcall RB_CopyRT(GfxCmdBufContext *gfxContext, R_RT_ColorHandle *dstColorRt, R_RT_ColorHandle *srcColorRt, const GfxViewport *viewport, Material *copyMaterial)
{
  ?RB_CopyRT@@YAXUGfxCmdBufContext@@VR_RT_ColorHandle@@1PEBUGfxViewport@@PEAUMaterial@@@Z(gfxContext, dstColorRt, srcColorRt, viewport, copyMaterial);
}

/*
==============
R_CopyPartialRT
==============
*/

void __fastcall R_CopyPartialRT(GfxCmdBufContext *gfxContext, R_RT_ColorHandle *srcColorRt, const GfxViewport *dstViewport, const GfxViewport *srcViewport, Material *copyMaterial)
{
  ?R_CopyPartialRT@@YAXUGfxCmdBufContext@@VR_RT_ColorHandle@@PEBUGfxViewport@@2PEAUMaterial@@@Z(gfxContext, srcColorRt, dstViewport, srcViewport, copyMaterial);
}

/*
==============
RB_CopyPartialRT
==============
*/
void RB_CopyPartialRT(GfxCmdBufContext *gfxContext, R_RT_ColorHandle *dstColorRt, R_RT_ColorHandle *srcColorRt, const GfxViewport *dstViewport, const GfxViewport *srcViewport, Material *copyMaterial)
{
  unsigned int height; 
  const R_RT_Surface *Surface; 
  GfxCmdBufContext v12; 
  GfxCmdBufContext v13; 
  R_RT_Image *p_m_image; 
  float width; 
  float v16; 
  float v17; 
  float v18; 
  __int64 y; 
  __int64 x; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  R_RT_Handle v26; 
  R_RT_ColorHandle v27; 

  v26 = dstColorRt->R_RT_Handle;
  height = R_RT_Handle::GetSurface(&v26)->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface(&v26);
  R_SetRenderTargetSize(gfxContext->source, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FULL);
  v12 = *gfxContext;
  v27 = *dstColorRt;
  *(GfxCmdBufContext *)&v26.m_surfaceID = v12;
  R_SetRenderTargetsInternal_ColorOnly((GfxCmdBufContext *)&v26, &v27, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_utils.cpp(40)");
  v13 = *gfxContext;
  v26 = srcColorRt->R_RT_Handle;
  p_m_image = &R_RT_Handle::GetSurface(&v26)->m_image;
  if ( !v13.source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( v13.source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v13.source->input.codeImages[4] = &p_m_image->m_base;
  width = (float)dstViewport->width;
  v16 = (float)dstViewport->height;
  v17 = 1.0 / (float)R_RT_Handle::GetSurface(&v26)->m_image.m_base.width;
  v18 = 1.0 / (float)R_RT_Handle::GetSurface(&v26)->m_image.m_base.height;
  *(GfxCmdBufContext *)&v26.m_surfaceID = v13;
  y = srcViewport->y;
  x = srcViewport->x;
  v21 = (float)(unsigned int)(y + srcViewport->height);
  v22 = v21 * v18;
  v23 = (float)(unsigned int)(x + srcViewport->width);
  v24 = (float)y;
  v25 = (float)x;
  RB_ViewportFilterDirectInternal((GfxCmdBufContext *)&v26, copyMaterial, 0xFFFFFFFF, dstViewport, 0.0, 0.0, width, v16, v25 * v17, v24 * v18, v23 * v17, v22, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_utils.cpp(33)");
  *(GfxCmdBufContext *)&v26.m_surfaceID = v13;
  R_UnbindRenderTarget((GfxCmdBufContext *)&v26);
}

/*
==============
RB_CopyRT
==============
*/
void RB_CopyRT(GfxCmdBufContext *gfxContext, R_RT_ColorHandle *dstColorRt, R_RT_ColorHandle *srcColorRt, const GfxViewport *viewport, Material *copyMaterial)
{
  unsigned int height; 
  const R_RT_Surface *Surface; 
  GfxCmdBufSourceState *source; 
  GfxCmdBufContext v12; 
  R_RT_Image *p_m_image; 
  GfxCmdBufContext v14; 
  float v15; 
  float width; 
  R_RT_Handle v17; 
  R_RT_ColorHandle v18; 

  v17 = dstColorRt->R_RT_Handle;
  height = R_RT_Handle::GetSurface(&v17)->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface(&v17);
  source = gfxContext->source;
  R_SetRenderTargetSize(gfxContext->source, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FULL);
  v12 = *gfxContext;
  v18 = *dstColorRt;
  *(GfxCmdBufContext *)&v17.m_surfaceID = v12;
  R_SetRenderTargetsInternal_ColorOnly((GfxCmdBufContext *)&v17, &v18, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_utils.cpp(11)");
  p_m_image = &R_RT_Handle::GetSurface(srcColorRt)->m_image;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v14 = *gfxContext;
  source->input.codeImages[4] = &p_m_image->m_base;
  v15 = (float)viewport->height;
  width = (float)viewport->width;
  *(GfxCmdBufContext *)&v17.m_surfaceID = v14;
  RB_ViewportFilterDirectInternal((GfxCmdBufContext *)&v17, copyMaterial, 0xFFFFFFFF, viewport, 0.0, 0.0, width, v15, 0.0, 0.0, 1.0, 1.0, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_utils.cpp(13)");
}

/*
==============
R_CopyDepthStencilRT
==============
*/
void R_CopyDepthStencilRT(ComputeCmdBufState *state, R_RT_DepthHandle *dstRt, R_RT_DepthHandle *srcRt)
{
  const R_RT_Surface *BaseSurface; 
  const R_RT_Surface *v7; 
  ID3D12Resource *D3DTextureResource; 
  __int64 v9; 
  ID3D12Resource *v10; 
  __int64 v11; 
  int width; 
  int height; 
  const R_RT_Surface *Surface; 
  unsigned int BytesPerPixel; 

  if ( !R_IsLockedIfGfxImmediateContext(state->device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  BaseSurface = R_RT_Handle::GetBaseSurface(dstRt);
  v7 = R_RT_Handle::GetBaseSurface(srcRt);
  if ( BaseSurface->m_htileOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_utils.cpp", 98, ASSERT_TYPE_ASSERT, "(dstSurface->m_htileOffset == 0)", (const char *)&queryFormat, "dstSurface->m_htileOffset == 0") )
    __debugbreak();
  if ( v7->m_htileOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_utils.cpp", 99, ASSERT_TYPE_ASSERT, "(srcSurface->m_htileOffset == 0)", (const char *)&queryFormat, "srcSurface->m_htileOffset == 0") )
    __debugbreak();
  D3DTextureResource = R_RT_Handle::GetD3DTextureResource(dstRt);
  v9 = ((__int64 (__fastcall *)(ID3D12Resource *))D3DTextureResource->m_pFunction[3].Release)(D3DTextureResource) + BaseSurface->m_htileSize;
  v10 = R_RT_Handle::GetD3DTextureResource(srcRt);
  v11 = ((__int64 (__fastcall *)(ID3D12Resource *))v10->m_pFunction[3].Release)(v10) + v7->m_htileSize;
  width = R_RT_Handle::GetSurface(dstRt)->m_image.m_base.width;
  height = R_RT_Handle::GetSurface(dstRt)->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface(dstRt);
  BytesPerPixel = PixelFormat_GetBytesPerPixel(Surface->m_image.m_base.format);
  ((void (__fastcall *)(GfxDevice *, __int64, __int64, _QWORD, _DWORD))state->device->m_pFunction[20].QueryInterface)(state->device, v9, v11, width * height * BytesPerPixel, 0);
}

/*
==============
R_CopyPartialRT
==============
*/
void R_CopyPartialRT(GfxCmdBufContext *gfxContext, R_RT_ColorHandle *srcColorRt, const GfxViewport *dstViewport, const GfxViewport *srcViewport, Material *copyMaterial)
{
  const R_RT_Surface *Surface; 
  GfxCmdBufSourceState *source; 
  R_RT_Image *p_m_image; 
  GfxCmdBufInput *p_input; 
  float width; 
  float height; 
  float v15; 
  const R_RT_Surface *v16; 
  __int64 x; 
  int v18; 
  float v19; 
  __int64 y; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  GfxCmdBufContext v27; 

  Surface = R_RT_Handle::GetSurface(srcColorRt);
  source = gfxContext->source;
  p_m_image = &Surface->m_image;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[4] = &p_m_image->m_base;
  width = (float)dstViewport->width;
  height = (float)dstViewport->height;
  v15 = 1.0 / (float)R_RT_Handle::GetSurface(srcColorRt)->m_image.m_base.width;
  v16 = R_RT_Handle::GetSurface(srcColorRt);
  x = srcViewport->x;
  v18 = v16->m_image.m_base.height;
  LODWORD(v16) = srcViewport->height;
  v19 = (float)v18;
  y = srcViewport->y;
  v21 = 1.0 / v19;
  v27 = *gfxContext;
  v22 = (float)(unsigned int)(y + (_DWORD)v16);
  v23 = v22 * (float)(1.0 / v19);
  v24 = (float)(unsigned int)(x + srcViewport->width);
  v25 = (float)y;
  v26 = (float)x;
  RB_ViewportFilterDirectInternal(&v27, copyMaterial, 0xFFFFFFFF, dstViewport, 0.0, 0.0, width, height, v26 * v15, v25 * v21, v24 * v15, v23, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_utils.cpp(33)");
}

