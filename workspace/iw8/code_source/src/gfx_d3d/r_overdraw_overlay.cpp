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
  R_RT_ColorHandle v8; 
  R_RT_Handle v9; 

  __asm { vmovups ymm0, ymmword ptr [rdx+3180h] }
  _RSI = viewInfo;
  _RDI = gfxContext;
  state = gfxContext->state;
  __asm { vmovups [rsp+68h+var_48], ymm0 }
  R_AddRenderTargetTransition(state, &v8, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(_RDI->state);
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi+3180h]
    vmovups xmm1, xmmword ptr [rdi]
    vmovups ymmword ptr [rsp+68h+var_28.m_surfaceID], ymm0
    vmovups xmmword ptr [rsp+68h+var_48], xmm1
  }
  R_ShowOverdrawOverlay((GfxCmdBufContext *)&v8, _RSI, &v9);
}

/*
==============
R_ShowOverdrawOverlay
==============
*/

void __fastcall R_ShowOverdrawOverlay(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_Handle *sceneOverdrawRt, double _XMM3_8)
{
  GfxCmdBufSourceState *source; 
  materialCommands_t *Tess; 
  materialCommands_t *v17; 
  R_RT_Image *p_m_image; 
  GfxCmdBufInput *p_input; 
  float fmt; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  GfxCmdBufContext v35[3]; 
  char v36; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
  }
  _RDI = gfxContext;
  if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_overdraw_overlay.cpp", 17, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  source = _RDI->source;
  if ( !_RDI->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_overdraw_overlay.cpp", 18, ASSERT_TYPE_ASSERT, "(gfxContext.source)", (const char *)&queryFormat, "gfxContext.source") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vxorps  xmm6, xmm6, xmm6
    vcvtsi2ss xmm6, xmm6, rax
    vxorps  xmm7, xmm7, xmm7
    vcvtsi2ss xmm7, xmm7, rax
    vmovups [rsp+98h+var_38], xmm0
  }
  Tess = R_GetTess(v35);
  v17 = Tess;
  if ( Tess->vertexCount )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rdi]
      vmovups [rsp+98h+var_38], xmm0
    }
    RB_EndTessSurfaceInternal(v35, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h(162)");
  }
  else
  {
    if ( Tess->indexCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 166, ASSERT_TYPE_ASSERT, "(tess.indexCount == 0)", (const char *)&queryFormat, "tess.indexCount == 0") )
      __debugbreak();
    v17->viewStatsTarget = GFX_VIEW_STATS_INVALID;
    v17->primStatsTarget = GFX_PRIM_STATS_INVALID;
  }
  R_Set2D(source);
  p_m_image = &R_RT_Handle::GetSurface(sceneOverdrawRt)->m_image;
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vxorps  xmm2, xmm2, xmm2
    vmovups [rsp+98h+var_38], xmm0
    vmovss  xmm0, cs:__real@3f800000
    vmovss  [rsp+98h+var_50], xmm0
    vmovss  [rsp+98h+var_58], xmm0
    vmovss  [rsp+98h+var_60], xmm2
    vmovss  [rsp+98h+var_68], xmm2
  }
  p_input->codeImages[4] = &p_m_image->m_base;
  __asm
  {
    vmovss  dword ptr [rsp+98h+var_70], xmm7
    vxorps  xmm3, xmm3, xmm3
    vmovss  dword ptr [rsp+98h+fmt], xmm6
  }
  RB_DrawStretchPic(v35, rgp.overdrawOverlayMaterial, *(float *)&_XMM2, *(float *)&_XMM3, fmt, v30, v31, v32, v33, v34, 0xFFFFFFFF, GFX_PRIM_STATS_CODE);
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vmovups [rsp+98h+var_38], xmm0
  }
  RB_EndTessSurfaceInternal(v35, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_overdraw_overlay.cpp(32)");
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  __asm { vmovaps xmm7, [rsp+98h+var_28] }
  _R11 = &v36;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
  p_input->codeImages[4] = NULL;
}

