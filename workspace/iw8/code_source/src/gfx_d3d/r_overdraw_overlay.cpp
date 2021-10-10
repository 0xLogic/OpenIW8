/*
==============
R_ShowOverdrawOverlay
==============
*/

void __fastcall R_ShowOverdrawOverlay(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_Handle *sceneOverdrawRt)
{
  ?R_ShowOverdrawOverlay@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@VR_RT_Handle@@@Z(gfxContext, viewInfo, sceneOverdrawRt);
}

/*
==============
RB_ShowOverdrawOverlay
==============
*/

void __fastcall RB_ShowOverdrawOverlay(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo)
{
  ?RB_ShowOverdrawOverlay@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@@Z(gfxContext, viewInfo);
}

/*
==============
RB_ShowOverdrawOverlay
==============
*/
void RB_ShowOverdrawOverlay(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo)
{
  GfxCmdBufState *state; 
  GfxCmdBufContext v5; 
  R_RT_ColorHandle m_mainSceneOverdrawRt; 
  R_RT_Handle v7; 

  state = gfxContext->state;
  m_mainSceneOverdrawRt = viewInfo->sceneRtInput.m_mainSceneOverdrawRt;
  R_AddRenderTargetTransition(state, &m_mainSceneOverdrawRt, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(gfxContext->state);
  v5 = *gfxContext;
  v7 = (R_RT_Handle)viewInfo->sceneRtInput.m_mainSceneOverdrawRt;
  *(GfxCmdBufContext *)&m_mainSceneOverdrawRt.m_surfaceID = v5;
  R_ShowOverdrawOverlay((GfxCmdBufContext *)&m_mainSceneOverdrawRt, viewInfo, &v7);
}

/*
==============
R_ShowOverdrawOverlay
==============
*/
void R_ShowOverdrawOverlay(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_Handle *sceneOverdrawRt)
{
  GfxCmdBufSourceState *source; 
  float renderTargetWidth; 
  float renderTargetHeight; 
  materialCommands_t *Tess; 
  materialCommands_t *v9; 
  R_RT_Image *p_m_image; 
  GfxCmdBufInput *p_input; 
  GfxCmdBufContext v12; 

  if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_overdraw_overlay.cpp", 17, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  source = gfxContext->source;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_overdraw_overlay.cpp", 18, ASSERT_TYPE_ASSERT, "(gfxContext.source)", (const char *)&queryFormat, "gfxContext.source") )
    __debugbreak();
  renderTargetWidth = (float)source->renderTargetWidth;
  renderTargetHeight = (float)source->renderTargetHeight;
  v12 = *gfxContext;
  Tess = R_GetTess(&v12);
  v9 = Tess;
  if ( Tess->vertexCount )
  {
    v12 = *gfxContext;
    RB_EndTessSurfaceInternal(&v12, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h(162)");
  }
  else
  {
    if ( Tess->indexCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 166, ASSERT_TYPE_ASSERT, "(tess.indexCount == 0)", (const char *)&queryFormat, "tess.indexCount == 0") )
      __debugbreak();
    v9->viewStatsTarget = GFX_VIEW_STATS_INVALID;
    v9->primStatsTarget = GFX_PRIM_STATS_INVALID;
  }
  R_Set2D(source);
  p_m_image = &R_RT_Handle::GetSurface(sceneOverdrawRt)->m_image;
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v12 = *gfxContext;
  p_input->codeImages[4] = &p_m_image->m_base;
  RB_DrawStretchPic(&v12, rgp.overdrawOverlayMaterial, 0.0, 0.0, renderTargetWidth, renderTargetHeight, 0.0, 0.0, 1.0, 1.0, 0xFFFFFFFF, GFX_PRIM_STATS_CODE);
  v12 = *gfxContext;
  RB_EndTessSurfaceInternal(&v12, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_overdraw_overlay.cpp(32)");
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[4] = NULL;
}

