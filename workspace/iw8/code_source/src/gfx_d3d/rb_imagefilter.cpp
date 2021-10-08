/*
==============
RB_GaussianFilterHdrImage
==============
*/

void __fastcall RB_GaussianFilterHdrImage(GfxCmdBufContext *gfxContext, unsigned int mipIndex, float radius, R_RT_ColorHandle *srcColorRt, R_RT_ColorHandle *dstColorRt, R_RT_ColorHandle *pingPongRt0, R_RT_ColorHandle *pingPongRt1, unsigned int blurWidth, unsigned int blurHeight, GfxRenderTargetFormat blurFormat, unsigned int filterOptions, const GfxViewInfo *viewInfo)
{
  ?RB_GaussianFilterHdrImage@@YAXUGfxCmdBufContext@@IMVR_RT_ColorHandle@@111IIW4GfxRenderTargetFormat@@IPEBUGfxViewInfo@@@Z(gfxContext, mipIndex, radius, srcColorRt, dstColorRt, pingPongRt0, pingPongRt1, blurWidth, blurHeight, blurFormat, filterOptions, viewInfo);
}

/*
==============
RB_GenerateGaussianFilterChain
==============
*/

unsigned int __fastcall RB_GenerateGaussianFilterChain(float radiusX, float radiusY, int srcWidth, int srcHeight, int dstWidth, int dstHeight, unsigned int passLimit, GfxRenderTargetFormat rtFormat, int options, GfxImageFilterPass *filterPass)
{
  return ?RB_GenerateGaussianFilterChain@@YAIMMHHHHIW4GfxRenderTargetFormat@@HQEAUGfxImageFilterPass@@@Z(radiusX, radiusY, srcWidth, srcHeight, dstWidth, dstHeight, passLimit, rtFormat, options, filterPass);
}

/*
==============
RB_VirtualToSceneRadius
==============
*/

void __fastcall RB_VirtualToSceneRadius(float radius, float *radiusX, float *radiusY, const GfxViewInfo *viewInfo)
{
  ?RB_VirtualToSceneRadius@@YAXMPEAM0PEBUGfxViewInfo@@@Z(radius, radiusX, radiusY, viewInfo);
}

/*
==============
RB_GaussianFilterImage
==============
*/

void __fastcall RB_GaussianFilterImage(GfxCmdBufContext *gfxContext, unsigned int mipIndex, float radius, R_RT_ColorHandle *srcColorRt, R_RT_ColorHandle *dstColorRt, R_RT_ColorHandle *pingPongRt0, R_RT_ColorHandle *pingPongRt1, unsigned int blurWidth, unsigned int blurHeight, GfxRenderTargetFormat blurFormat, unsigned int filterOptions, const GfxViewInfo *viewInfo)
{
  ?RB_GaussianFilterImage@@YAXUGfxCmdBufContext@@IMVR_RT_ColorHandle@@111IIW4GfxRenderTargetFormat@@IPEBUGfxViewInfo@@@Z(gfxContext, mipIndex, radius, srcColorRt, dstColorRt, pingPongRt0, pingPongRt1, blurWidth, blurHeight, blurFormat, filterOptions, viewInfo);
}

/*
==============
R_GenerateGaussianFilterChain
==============
*/

unsigned int __fastcall R_GenerateGaussianFilterChain(float radius, int w, int h)
{
  return ?R_GenerateGaussianFilterChain@@YAIMHH@Z(radius, w, h);
}

/*
==============
RB_GaussianFilterHdrImageStep
==============
*/

void __fastcall RB_GaussianFilterHdrImageStep(GfxCmdBufContext *gfxContext, unsigned int passIndex, float radius, R_RT_ColorHandle *srcRt, R_RT_ColorHandle *dstRt, GfxRenderTargetFormat blurFormat, unsigned int filterOptions, const GfxViewInfo *viewInfo)
{
  ?RB_GaussianFilterHdrImageStep@@YAXUGfxCmdBufContext@@IMVR_RT_ColorHandle@@1W4GfxRenderTargetFormat@@IPEBUGfxViewInfo@@@Z(gfxContext, passIndex, radius, srcRt, dstRt, blurFormat, filterOptions, viewInfo);
}

/*
==============
RB_FilterImage
==============
*/
void RB_FilterImage(GfxCmdBufContext *gfxContext, GfxImageFilter *filter, unsigned int filterOptions)
{
  const R_RT_Surface *Surface; 
  GfxCmdBufState *state; 
  unsigned __int16 m_surfaceID; 
  materialCommands_t *Tess; 
  materialCommands_t *v15; 
  unsigned int v17; 
  const Material *material; 
  int v22; 
  __int64 v28; 
  R_RT_ColorHandle v29; 
  R_RT_ColorHandle v30; 
  R_RT_ColorHandle v31; 
  R_RT_Handle v32; 

  _RSI = filter;
  _R14 = gfxContext;
  if ( !filter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp", 569, ASSERT_TYPE_ASSERT, "(filter)", (const char *)&queryFormat, "filter") )
    __debugbreak();
  if ( _RSI->passCount )
  {
    m_surfaceID = _RSI->srcColorRt.m_surfaceID;
    if ( m_surfaceID )
    {
      R_RT_Handle::GetSurface(&_RSI->srcColorRt);
    }
    else if ( _RSI->srcColorRt.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
    {
      __debugbreak();
    }
    if ( !m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp", 587, ASSERT_TYPE_ASSERT, "(filter->srcColorRt.IsValid())", (const char *)&queryFormat, "filter->srcColorRt.IsValid()") )
      __debugbreak();
    __asm
    {
      vmovups xmm0, xmmword ptr [r14]
      vmovups xmmword ptr [rbp+57h+var_C0], xmm0
    }
    Tess = R_GetTess((GfxCmdBufContext *)&v29);
    v15 = Tess;
    if ( Tess->vertexCount )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [r14]
        vmovups xmmword ptr [rbp+57h+var_C0], xmm0
      }
      RB_EndTessSurfaceInternal((GfxCmdBufContext *)&v29, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h(162)");
    }
    else
    {
      if ( Tess->indexCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 166, ASSERT_TYPE_ASSERT, "(tess.indexCount == 0)", (const char *)&queryFormat, "tess.indexCount == 0") )
        __debugbreak();
      v15->viewStatsTarget = GFX_VIEW_STATS_INVALID;
      v15->primStatsTarget = GFX_PRIM_STATS_INVALID;
    }
    v17 = 0;
    for ( LOWORD(v28) = 0; v17 < _RSI->passCount; ++v17 )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [r14]
        vmovups xmmword ptr [rbp+57h+var_C0], xmm0
      }
      RB_FilterPingPong((R_RT_ColorHandle *)&v32, (GfxCmdBufContext *)&v29, _RSI, v17, (bool *)&v28, filterOptions);
      __asm
      {
        vmovups xmm0, xmmword ptr [r14]
        vmovups xmmword ptr [rbp+57h+var_C0], xmm0
      }
      RB_SetupFilterPass((GfxCmdBufContext *)&v29, &_RSI->passes[v17]);
      __asm { vmovups xmm0, xmmword ptr [r14] }
      material = _RSI->passes[v17].material;
      __asm { vmovups xmmword ptr [rbp+57h+var_C0], xmm0 }
      RB_FullScreenFilterInternal((GfxCmdBufContext *)&v29, material, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp(601)");
      v22 = v32.m_surfaceID;
      if ( v32.m_surfaceID )
      {
        R_RT_Handle::GetSurface(&v32);
      }
      else if ( v32.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", v32.m_surfaceID + 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", v28) )
      {
        __debugbreak();
      }
      if ( v22 )
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+57h+var_60.m_surfaceID]
          vmovups xmm1, xmmword ptr [r14]
          vmovups [rbp+57h+var_A0], ymm0
          vmovups xmmword ptr [rbp+57h+var_C0], xmm1
        }
        R_RT_Destroy((GfxCmdBufContext *)&v29, &v30);
      }
    }
  }
  else
  {
    *(_QWORD *)&v32.m_surfaceID = 0i64;
    v32.m_tracking.m_allocCounter = R_RT_Handle::GetSurface(&_RSI->finalColorRt)->m_image.m_base.width;
    Surface = R_RT_Handle::GetSurface(&_RSI->finalColorRt);
    __asm { vmovups ymm0, ymmword ptr [rsi+1128h] }
    *(&v32.m_tracking.m_allocCounter + 1) = Surface->m_image.m_base.height;
    state = _R14->state;
    __asm { vmovups [rbp+57h+var_C0], ymm0 }
    R_AddRenderTargetTransition(state, &v29, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(_R14->state);
    __asm
    {
      vmovups ymm0, ymmword ptr [rsi+1108h]
      vmovups ymm1, ymmword ptr [rsi+1128h]
      vmovups [rbp+57h+var_80], ymm0
      vmovups xmm0, xmmword ptr [r14]
      vmovups xmmword ptr [rbp+57h+var_C0], xmm0
      vmovups [rbp+57h+var_A0], ymm1
    }
    RB_CopyRT((GfxCmdBufContext *)&v29, &v30, &v31, (const GfxViewport *)&v32, rgp.feedbackReplaceBackbufferMaterial);
  }
  __asm
  {
    vmovups xmm1, xmmword ptr [r14]
    vmovups ymm0, ymmword ptr [rsi+1128h]
    vpextrq rbx, xmm1, 1
    vmovups [rbp+57h+var_A0], ymm0
  }
  R_AddRenderTargetTransition(_RBX, &v30, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(_RBX);
}

/*
==============
RB_FilterPingPong
==============
*/
R_RT_ColorHandle *RB_FilterPingPong(R_RT_ColorHandle *result, GfxCmdBufContext *gfxContext, const GfxImageFilter *filter, unsigned int passIndex, bool *cleared, unsigned int filterOptions)
{
  unsigned int passCount; 
  unsigned int v9; 
  int v13; 
  unsigned int v14; 
  __int64 v15; 
  bool v19; 
  R_RT_Image *p_m_image; 
  GfxCmdBufState *state; 
  const dvar_t *v27; 
  int v28; 
  const dvar_t *v29; 
  int v30; 
  int rtFlags; 
  __int64 rtFormat; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  bool v38; 
  GfxCmdBufState *v39; 
  unsigned int v41; 
  const R_RT_Surface *v42; 
  GfxCmdBufSourceState *source; 
  GfxCmdBufState *v48; 
  GfxCmdBufSourceState *v49; 
  GfxCmdBufInput *p_input; 
  unsigned int v52; 
  const R_RT_Surface *v53; 
  GfxCmdBufState *v55; 
  R_RT_Handle resulta; 
  R_RT_Handle v60; 
  R_RT_Handle v62; 

  passCount = filter->passCount;
  v9 = passIndex + 1;
  _RDI = filter;
  _R15 = gfxContext;
  _RSI = result;
  if ( v9 == filter->passCount )
    v13 = 4;
  else
    v13 = (passIndex != 0) + 1;
  v14 = filterOptions & v13;
  v15 = passIndex & 1;
  _RCX = 32 * ((unsigned int)(1 - v15) + 139i64);
  __asm
  {
    vmovups ymm0, ymmword ptr [rcx+rdi]
    vmovups ymmword ptr [rbp+50h+var_70.m_surfaceID], ymm0
  }
  if ( v9 == passCount )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rdi+1128h]
      vmovups [rbp+50h+var_90], ymm0
    }
    v19 = v14 == 0;
    __asm { vmovups ymmword ptr [rbp+50h+var_B0.m_surfaceID], ymm0 }
  }
  else
  {
    _RAX = 32 * (v15 + 139);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax+rdi]
      vmovups [rbp+50h+var_90], ymm0
      vmovups ymmword ptr [rbp+50h+var_B0.m_surfaceID], ymm0
    }
    if ( v14 || cleared[v15] )
    {
      v19 = 0;
    }
    else
    {
      v19 = 1;
      cleared[v15] = 1;
    }
  }
  _RAX = &_RDI->srcColorRt;
  if ( passIndex )
    _RAX = &v62;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbp+50h+result.m_surfaceID], ymm0
    vmovups ymmword ptr [rbp+50h+var_70.m_surfaceID], ymm0
  }
  p_m_image = &R_RT_Handle::GetSurface(&v62)->m_image;
  if ( passIndex )
  {
    __asm { vmovups ymm0, ymmword ptr [rbp+50h+result.m_surfaceID] }
    state = _R15->state;
    __asm { vmovups ymmword ptr [rbp+50h+result.m_surfaceID], ymm0 }
    R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&resulta, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(_R15->state);
  }
  _RSI->m_surfaceID = 0;
  _RSI->m_tracking.m_allocCounter = 0;
  _RSI->m_tracking.m_name = NULL;
  _RSI->m_tracking.m_location = NULL;
  if ( p_m_image == &R_RT_Handle::GetSurface(&v60)->m_image )
  {
    if ( Dvar_GetBool_Internal(r_deviceDebug) )
      goto LABEL_20;
    v27 = DCONST_DVARBOOL_r_esramPostFX;
    if ( !DCONST_DVARBOOL_r_esramPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramPostFX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v27);
    v28 = 2112;
    if ( !v27->current.enabled )
LABEL_20:
      v28 = 2048;
    v29 = DCONST_DVARINT_r_dccPostFX;
    if ( !DCONST_DVARINT_r_dccPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_dccPostFX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v29);
    if ( v29->current.integer == 1 )
      v30 = 8;
    else
      v30 = 0;
    if ( R_RT_Handle::GetSurface(&v62)->m_image.m_base.format != g_R_RT_renderTargetFmts[(unsigned __int8)_RDI->rtFormat] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp", 509, ASSERT_TYPE_ASSERT, "(srcColorRt.GetFormat() == R_RT_PixelFormatFromRenderTargetFormat( filter->rtFormat ))", (const char *)&queryFormat, "srcColorRt.GetFormat() == R_RT_PixelFormatFromRenderTargetFormat( filter->rtFormat )") )
      __debugbreak();
    rtFlags = v30 | v28;
    rtFormat = (unsigned __int8)_RDI->rtFormat;
    height = R_RT_Handle::GetSurface(&v62)->m_image.m_base.height;
    Surface = R_RT_Handle::GetSurface(&v62);
    _RAX = R_RT_CreateInternal(&resulta, Surface->m_image.m_base.width, height, Surface->m_image.m_base.width, height, 1u, 1u, 1u, g_R_RT_renderTargetFmts[rtFormat], (R_RT_Flags)rtFlags, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "In-Place Blur Copy", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp(510)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovd   eax, xmm0
      vmovups ymmword ptr [rbp+50h+var_B0.m_surfaceID], ymm0
      vmovups ymmword ptr [rbp+50h+var_70.m_surfaceID], ymm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v62);
      if ( (R_RT_Handle::GetSurface(&v62)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        __asm { vmovups ymm0, ymmword ptr [rbp+50h+var_70.m_surfaceID] }
        __debugbreak();
      }
      else
      {
        __asm { vmovups ymm0, ymmword ptr [rbp+50h+var_70.m_surfaceID] }
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        v38 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        __asm { vmovups ymm0, ymmword ptr [rbp+50h+var_B0.m_surfaceID] }
        if ( v38 )
          __debugbreak();
      }
    }
    v39 = _R15->state;
    __asm
    {
      vmovups ymmword ptr [rsi], ymm0
      vmovups ymmword ptr [rbp+50h+result.m_surfaceID], ymm0
    }
    R_AddRenderTargetTransition(v39, (R_RT_ColorHandle *)&resulta, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(_R15->state);
    __asm
    {
      vmovups ymm0, ymmword ptr [rsi]
      vmovups ymmword ptr [rbp+50h+var_B0.m_surfaceID], ymm0
    }
    v41 = R_RT_Handle::GetSurface(&v60)->m_image.m_base.height;
    v42 = R_RT_Handle::GetSurface(&v60);
    source = _R15->source;
    R_SetRenderTargetSize(_R15->source, v42->m_image.m_base.width, v41, GFX_USE_VIEWPORT_FULL);
    __asm
    {
      vmovups ymm0, ymmword ptr [rsi]
      vmovups xmm1, xmmword ptr [r15]
      vmovups ymmword ptr [rbp+50h+result.m_surfaceID], ymm0
      vmovups xmmword ptr [rbp+50h+var_70.m_surfaceID], xmm1
    }
    R_SetRenderTargetsInternal_ColorOnly((GfxCmdBufContext *)&v62, (R_RT_ColorHandle *)&resulta, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp(516)");
    if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
      __debugbreak();
    if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    __asm { vmovups xmm0, xmmword ptr [r15] }
    source->input.codeImages[4] = &p_m_image->m_base;
    __asm { vmovups xmmword ptr [rbp+50h+var_70.m_surfaceID], xmm0 }
    RB_FullScreenFilterInternal((GfxCmdBufContext *)&v62, rgp.feedbackReplaceScenebufferMaterial, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp(518)");
    __asm { vmovups ymm0, ymmword ptr [rsi] }
    v48 = _R15->state;
    __asm { vmovups ymmword ptr [rbp+50h+result.m_surfaceID], ymm0 }
    R_AddRenderTargetTransition(v48, (R_RT_ColorHandle *)&resulta, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(_R15->state);
    p_m_image = &R_RT_Handle::GetSurface(_RSI)->m_image;
  }
  v49 = _R15->source;
  if ( !_R15->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &v49->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  __asm { vmovups ymm0, [rbp+50h+var_90] }
  p_input->codeImages[4] = &p_m_image->m_base;
  __asm { vmovups ymmword ptr [rbp+50h+var_B0.m_surfaceID], ymm0 }
  v52 = R_RT_Handle::GetSurface(&v60)->m_image.m_base.height;
  v53 = R_RT_Handle::GetSurface(&v60);
  R_SetRenderTargetSize(_R15->source, v53->m_image.m_base.width, v52, GFX_USE_VIEWPORT_FULL);
  __asm { vmovups ymm0, [rbp+50h+var_90] }
  v55 = _R15->state;
  __asm { vmovups ymmword ptr [rbp+50h+result.m_surfaceID], ymm0 }
  R_AddRenderTargetTransition(v55, (R_RT_ColorHandle *)&resulta, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(v55);
  __asm
  {
    vmovups ymm0, [rbp+50h+var_90]
    vmovups ymmword ptr [rbp+50h+result.m_surfaceID], ymm0
    vmovups xmm0, xmmword ptr [r15]
    vmovups xmmword ptr [rbp+50h+var_70.m_surfaceID], xmm0
  }
  R_SetRenderTargetsInternal_ColorOnly((GfxCmdBufContext *)&v62, (R_RT_ColorHandle *)&resulta, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp(533)");
  if ( v19 )
    R_ClearScreen(v55, 0xFu, 0);
  return _RSI;
}

/*
==============
RB_GaussianFilterHdrImage
==============
*/
void RB_GaussianFilterHdrImage(GfxCmdBufContext *gfxContext, unsigned int mipIndex, float radius, R_RT_ColorHandle *srcColorRt, R_RT_ColorHandle *dstColorRt, R_RT_ColorHandle *pingPongRt0, R_RT_ColorHandle *pingPongRt1, unsigned int blurWidth, unsigned int blurHeight, GfxRenderTargetFormat blurFormat, unsigned int filterOptions, const GfxViewInfo *viewInfo)
{
  signed __int64 v12; 
  void *v16; 
  __int64 v22; 
  char v33; 
  int width; 
  const R_RT_Surface *Surface; 
  unsigned __int16 m_surfaceID; 
  unsigned int GaussianFilterChain; 
  int v45; 
  int dstHeight; 
  int dstWidth; 
  int srcHeight; 
  GfxCmdBufContext v55; 
  R_RT_ColorHandle v56; 
  GfxImageFilter filter; 
  __int64 v58; 
  char v61; 

  v16 = alloca(v12);
  __asm
  {
    vmovaps [rsp+1298h+var_48], xmm6
    vmovaps [rsp+1298h+var_58], xmm7
  }
  _R15 = srcColorRt;
  _R12 = dstColorRt;
  _RSI = gfxContext;
  _RBP = pingPongRt0;
  _RBX = pingPongRt1;
  v22 = mipIndex;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rdx
    vmulss  xmm1, xmm0, xmm2
    vmulss  xmm6, xmm1, cs:__real@3b088889
    vdivss  xmm7, xmm6, cs:?vidConfig@@3UvidConfig_t@@A.aspectRatioScenePixel; vidConfig_t vidConfig
  }
  if ( viewInfo )
  {
    _RAX = R_RT_FindMatchingDynamicResolutionTable(vidConfig.sceneWidth, vidConfig.sceneHeight);
    __asm
    {
      vmovss  xmm0, dword ptr [rax]
      vdivss  xmm1, xmm0, dword ptr [rax+4]
      vmulss  xmm2, xmm1, dword ptr [rax+rcx*8+4]
      vdivss  xmm3, xmm2, dword ptr [rax+rcx*8]
      vcomiss xmm3, cs:__real@3f800000
    }
    if ( v33 )
      __asm { vmulss  xmm6, xmm3, xmm6 }
    else
      __asm { vdivss  xmm7, xmm7, xmm3 }
  }
  width = R_RT_Handle::GetSurface(_R15)->m_image.m_base.width;
  srcHeight = R_RT_Handle::GetSurface(_R15)->m_image.m_base.height;
  dstWidth = R_RT_Handle::GetSurface(dstColorRt)->m_image.m_base.width;
  Surface = R_RT_Handle::GetSurface(dstColorRt);
  __asm { vmovups ymm1, ymmword ptr [r12] }
  filter.rtFormat = blurFormat;
  dstHeight = Surface->m_image.m_base.height;
  __asm
  {
    vmovups ymm0, ymmword ptr [r15]
    vmovups ymmword ptr [rsp+1298h+filter.srcColorRt.baseclass_0.m_surfaceID], ymm0
    vmovups ymmword ptr [rsp+1298h+filter.finalColorRt.baseclass_0.m_surfaceID], ymm1
  }
  if ( (unsigned int)v22 >= 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp", 736, ASSERT_TYPE_ASSERT, "(unsigned)( mipIndex ) < (unsigned)( ( sizeof( *array_counter( s_gaussianHDRPingPongNames ) ) + 0 ) )", "mipIndex doesn't index ARRAY_COUNT( s_gaussianHDRPingPongNames )\n\t%i not in [0, %i)", v22, 16) )
    __debugbreak();
  filter.pingPongNames[0] = s_gaussianHDRPingPongNames[v22][0];
  filter.pingPongNames[1] = s_gaussianHDRPingPongNames[v22][1];
  if ( R_RT_Handle::IsValid(pingPongRt0) )
  {
    if ( (R_RT_Handle::GetSurface(pingPongRt0)->m_image.m_base.width != blurWidth || R_RT_Handle::GetSurface(pingPongRt0)->m_image.m_base.height != blurHeight) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp", 741, ASSERT_TYPE_ASSERT, "(pingPongRt0.GetWidth() == blurWidth && pingPongRt0.GetHeight() == blurHeight)", (const char *)&queryFormat, "pingPongRt0.GetWidth() == blurWidth && pingPongRt0.GetHeight() == blurHeight") )
      __debugbreak();
    m_surfaceID = pingPongRt1->m_surfaceID;
    if ( pingPongRt1->m_surfaceID )
    {
      R_RT_Handle::GetSurface(pingPongRt1);
    }
    else if ( pingPongRt1->m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
    {
      __debugbreak();
    }
    if ( !m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp", 742, ASSERT_TYPE_ASSERT, "(pingPongRt1.IsValid())", (const char *)&queryFormat, "pingPongRt1.IsValid()") )
      __debugbreak();
    if ( (R_RT_Handle::GetSurface(pingPongRt1)->m_image.m_base.width != blurWidth || R_RT_Handle::GetSurface(pingPongRt1)->m_image.m_base.height != blurHeight) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp", 743, ASSERT_TYPE_ASSERT, "(pingPongRt1.GetWidth() == blurWidth && pingPongRt1.GetHeight() == blurHeight)", (const char *)&queryFormat, "pingPongRt1.GetWidth() == blurWidth && pingPongRt1.GetHeight() == blurHeight") )
      __debugbreak();
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+0]
      vmovups ymm1, ymmword ptr [rbx]
      vmovups ymmword ptr [rsp+1298h+filter.pingPongColorRts.baseclass_0.m_surfaceID], ymm0
      vmovups ymmword ptr [rsp+1298h+filter.pingPongColorRts.baseclass_0.m_surfaceID+20h], ymm1
    }
  }
  else
  {
    RB_ImageFilter_CommitPingPongRTs(&filter, blurWidth, blurHeight);
  }
  __asm
  {
    vmovaps xmm1, xmm6; radiusY
    vmovaps xmm0, xmm7; radiusX
  }
  GaussianFilterChain = RB_GenerateGaussianFilterChain(*(float *)&_XMM0, *(float *)&_XMM1, width, srcHeight, dstWidth, dstHeight, 0x10u, blurFormat, filterOptions, filter.passes);
  __asm { vmovups xmm0, xmmword ptr [rsi] }
  filter.passCount = GaussianFilterChain;
  __asm { vmovups [rsp+1298h+var_1238], xmm0 }
  RB_FilterImage(&v55, &filter, filterOptions);
  if ( !R_RT_Handle::IsValid(pingPongRt0) )
  {
    v45 = 2;
    _RDI = &v58;
    do
    {
      __asm { vmovups xmm1, xmmword ptr [rsi] }
      _RDI -= 4;
      __asm
      {
        vmovups ymm0, ymmword ptr [rdi]
        vmovups [rsp+1298h+var_1228], ymm0
        vmovups [rsp+1298h+var_1238], xmm1
      }
      R_RT_Destroy(&v55, &v56);
      --v45;
    }
    while ( v45 );
    R_FlushImmediateContext();
  }
  _R11 = &v61;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
RB_GaussianFilterHdrImageStep
==============
*/

void __fastcall RB_GaussianFilterHdrImageStep(GfxCmdBufContext *gfxContext, unsigned int passIndex, double radius, R_RT_ColorHandle *srcRt, R_RT_ColorHandle *dstRt, GfxRenderTargetFormat blurFormat, unsigned int filterOptions, const GfxViewInfo *viewInfo)
{
  signed __int64 v8; 
  void *v12; 
  __int64 v14; 
  GfxPixelFormat format; 
  char v28; 
  int dstHeight; 
  int width; 
  int height; 
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v36; 
  GfxCmdBufSourceState *source; 
  R_RT_Image *p_m_image; 
  GfxCmdBufInput *p_input; 
  const Material *material; 
  GfxCmdBufSourceState *v42; 
  GfxCmdBufInput *v43; 
  GfxCmdBufContext v47; 
  unsigned int GaussianFilterChain; 
  GfxImageFilterPass filterPass[16]; 
  GfxRenderTargetFormat v50; 
  char v53; 

  v12 = alloca(v8);
  __asm
  {
    vmovaps [rsp+1268h+var_48], xmm6
    vmovaps [rsp+1268h+var_58], xmm7
  }
  _R14 = gfxContext;
  v14 = passIndex;
  __asm { vmovaps xmm6, xmm2 }
  format = R_RT_Handle::GetSurface(srcRt)->m_image.m_base.format;
  if ( format != R_RT_Handle::GetSurface(dstRt)->m_image.m_base.format && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp", 766, ASSERT_TYPE_ASSERT, "(srcRt.GetFormat() == dstRt.GetFormat())", (const char *)&queryFormat, "srcRt.GetFormat() == dstRt.GetFormat()") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rdx
    vmulss  xmm1, xmm0, xmm6
    vmulss  xmm6, xmm1, cs:__real@3b088889
    vdivss  xmm7, xmm6, cs:?vidConfig@@3UvidConfig_t@@A.aspectRatioScenePixel; vidConfig_t vidConfig
  }
  if ( viewInfo )
  {
    _RAX = R_RT_FindMatchingDynamicResolutionTable(vidConfig.sceneWidth, vidConfig.sceneHeight);
    __asm
    {
      vmovss  xmm0, dword ptr [rax]
      vdivss  xmm1, xmm0, dword ptr [rax+4]
      vmulss  xmm2, xmm1, dword ptr [rax+rcx*8+4]
      vdivss  xmm3, xmm2, dword ptr [rax+rcx*8]
      vcomiss xmm3, cs:__real@3f800000
    }
    if ( v28 )
      __asm { vmulss  xmm6, xmm6, xmm3 }
    else
      __asm { vdivss  xmm7, xmm7, xmm3 }
  }
  dstHeight = R_RT_Handle::GetSurface(dstRt)->m_image.m_base.height;
  width = R_RT_Handle::GetSurface(dstRt)->m_image.m_base.width;
  height = R_RT_Handle::GetSurface(srcRt)->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface(srcRt);
  __asm
  {
    vmovaps xmm1, xmm6; radiusY
    vmovaps xmm0, xmm7; radiusX
  }
  GaussianFilterChain = RB_GenerateGaussianFilterChain(*(float *)&_XMM0, *(float *)&_XMM1, Surface->m_image.m_base.width, height, width, dstHeight, 0x10u, blurFormat, filterOptions, filterPass);
  v50 = blurFormat;
  if ( (unsigned int)v14 < GaussianFilterChain )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [r14]
      vmovups [rsp+1268h+var_1218], xmm0
    }
    RB_SetupFilterPass(&v47, &filterPass[v14]);
    v36 = R_RT_Handle::GetSurface(srcRt);
    source = _R14->source;
    p_m_image = &v36->m_image;
    if ( !_R14->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
      __debugbreak();
    p_input = &source->input;
    if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    __asm { vmovups xmm0, xmmword ptr [r14] }
    material = filterPass[v14].material;
    p_input->codeImages[4] = &p_m_image->m_base;
    __asm { vmovups [rsp+1268h+var_1218], xmm0 }
    RB_FullScreenFilterInternal(&v47, material, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp(784)");
    v42 = _R14->source;
    if ( !_R14->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
      __debugbreak();
    v43 = &v42->input;
    if ( !v43 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    v43->codeImages[4] = NULL;
  }
  _R11 = &v53;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
RB_GaussianFilterImage
==============
*/

void __fastcall RB_GaussianFilterImage(GfxCmdBufContext *gfxContext, unsigned int mipIndex, double radius, R_RT_ColorHandle *srcColorRt, R_RT_ColorHandle *dstColorRt, R_RT_ColorHandle *pingPongRt0, R_RT_ColorHandle *pingPongRt1, unsigned int blurWidth, unsigned int blurHeight, GfxRenderTargetFormat blurFormat, unsigned int filterOptions, const GfxViewInfo *viewInfo)
{
  signed __int64 v12; 
  void *v19; 
  __int64 v26; 
  char v34; 
  bool v35; 
  const R_RT_Surface *Surface; 
  unsigned __int16 m_surfaceID; 
  unsigned int GaussianFilterChain; 
  int v56; 
  __int64 dstHeight; 
  int height; 
  int dstWidth; 
  int srcHeight; 
  int srcWidth; 
  GfxCmdBufContext v71; 
  R_RT_ColorHandle v72; 
  GfxImageFilter filter; 
  __int64 v74; 
  char v80; 

  v19 = alloca(v12);
  __asm
  {
    vmovaps [rsp+12C8h+var_48], xmm6
    vmovaps [rsp+12C8h+var_58], xmm7
    vmovaps [rsp+12C8h+var_68], xmm8
    vmovaps [rsp+12C8h+var_78], xmm9
    vmovaps [rsp+12C8h+var_88], xmm10
  }
  _RBP = dstColorRt;
  _RSI = gfxContext;
  _R14 = pingPongRt0;
  _RBX = pingPongRt1;
  _R15 = srcColorRt;
  __asm { vmovaps xmm6, xmm2 }
  v26 = mipIndex;
  if ( !R_RT_Handle::IsValid(srcColorRt) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp", 669, ASSERT_TYPE_ASSERT, "(srcColorRt)", (const char *)&queryFormat, "srcColorRt") )
    __debugbreak();
  if ( !R_RT_Handle::IsValid(dstColorRt) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp", 670, ASSERT_TYPE_ASSERT, "(dstColorRt)", (const char *)&queryFormat, "dstColorRt") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rdx
    vmulss  xmm1, xmm0, xmm6
    vmulss  xmm7, xmm1, cs:__real@3b088889
    vdivss  xmm9, xmm7, cs:?vidConfig@@3UvidConfig_t@@A.aspectRatioScenePixel; vidConfig_t vidConfig
    vmovaps xmm6, xmm9
    vmovaps xmm0, xmm7
  }
  v34 = 0;
  v35 = viewInfo == NULL;
  if ( viewInfo )
  {
    _RAX = R_RT_FindMatchingDynamicResolutionTable(vidConfig.sceneWidth, vidConfig.sceneHeight);
    __asm
    {
      vmovss  xmm0, dword ptr [rax]
      vdivss  xmm1, xmm0, dword ptr [rax+4]
      vmulss  xmm2, xmm1, dword ptr [rax+rcx*8+4]
      vdivss  xmm3, xmm2, dword ptr [rax+rcx*8]
      vcomiss xmm3, cs:__real@3f800000
    }
    if ( v34 )
    {
      __asm
      {
        vmulss  xmm0, xmm3, xmm7
        vmovaps xmm7, xmm0
        vmovaps xmm6, xmm9
      }
    }
    else
    {
      __asm
      {
        vdivss  xmm6, xmm9, xmm3
        vmovaps xmm9, xmm6
        vmovaps xmm0, xmm7
      }
    }
  }
  __asm
  {
    vmovss  xmm8, cs:__real@43160000
    vcomiss xmm6, xmm8
    vmovaps xmm10, xmm0
  }
  if ( !(v34 | v35) )
    goto LABEL_13;
  __asm { vcomiss xmm0, xmm8 }
  if ( !(v34 | v35) )
  {
LABEL_13:
    __asm
    {
      vmovaps xmm1, xmm7; Y
      vmovaps xmm0, xmm9; X
    }
    fmaxf(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm
    {
      vdivss  xmm1, xmm8, xmm0
      vmulss  xmm9, xmm1, xmm6
      vmulss  xmm7, xmm1, xmm10
    }
  }
  srcWidth = R_RT_Handle::GetSurface(_R15)->m_image.m_base.width;
  srcHeight = R_RT_Handle::GetSurface(_R15)->m_image.m_base.height;
  dstWidth = R_RT_Handle::GetSurface(dstColorRt)->m_image.m_base.width;
  Surface = R_RT_Handle::GetSurface(dstColorRt);
  filter.rtFormat = blurFormat;
  __asm { vmovups ymm0, ymmword ptr [r15] }
  height = Surface->m_image.m_base.height;
  __asm
  {
    vmovups ymm1, ymmword ptr [rbp+0]
    vmovups ymmword ptr [rsp+12C8h+filter.srcColorRt.baseclass_0.m_surfaceID], ymm0
    vmovups ymmword ptr [rsp+12C8h+filter.finalColorRt.baseclass_0.m_surfaceID], ymm1
  }
  if ( (unsigned int)v26 >= 0x10 )
  {
    LODWORD(dstHeight) = v26;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp", 690, ASSERT_TYPE_ASSERT, "(unsigned)( mipIndex ) < (unsigned)( ( sizeof( *array_counter( s_gaussianPingPongNames ) ) + 0 ) )", "mipIndex doesn't index ARRAY_COUNT( s_gaussianPingPongNames )\n\t%i not in [0, %i)", dstHeight, 16) )
      __debugbreak();
  }
  filter.pingPongNames[0] = s_gaussianPingPongNames[v26][0];
  filter.pingPongNames[1] = s_gaussianPingPongNames[v26][1];
  if ( R_RT_Handle::IsValid(pingPongRt0) )
  {
    if ( (R_RT_Handle::GetSurface(pingPongRt0)->m_image.m_base.width != blurWidth || R_RT_Handle::GetSurface(pingPongRt0)->m_image.m_base.height != blurHeight) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp", 695, ASSERT_TYPE_ASSERT, "(pingPongRt0.GetWidth() == blurWidth && pingPongRt0.GetHeight() == blurHeight)", (const char *)&queryFormat, "pingPongRt0.GetWidth() == blurWidth && pingPongRt0.GetHeight() == blurHeight") )
      __debugbreak();
    m_surfaceID = pingPongRt1->m_surfaceID;
    if ( pingPongRt1->m_surfaceID )
    {
      R_RT_Handle::GetSurface(pingPongRt1);
    }
    else if ( pingPongRt1->m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
    {
      __debugbreak();
    }
    if ( !m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp", 696, ASSERT_TYPE_ASSERT, "(pingPongRt1.IsValid())", (const char *)&queryFormat, "pingPongRt1.IsValid()") )
      __debugbreak();
    if ( (R_RT_Handle::GetSurface(pingPongRt1)->m_image.m_base.width != blurWidth || R_RT_Handle::GetSurface(pingPongRt1)->m_image.m_base.height != blurHeight) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp", 697, ASSERT_TYPE_ASSERT, "(pingPongRt1.GetWidth() == blurWidth && pingPongRt1.GetHeight() == blurHeight)", (const char *)&queryFormat, "pingPongRt1.GetWidth() == blurWidth && pingPongRt1.GetHeight() == blurHeight") )
      __debugbreak();
    __asm
    {
      vmovups ymm0, ymmword ptr [r14]
      vmovups ymm1, ymmword ptr [rbx]
      vmovups ymmword ptr [rsp+12C8h+filter.pingPongColorRts.baseclass_0.m_surfaceID], ymm0
      vmovups ymmword ptr [rsp+12C8h+filter.pingPongColorRts.baseclass_0.m_surfaceID+20h], ymm1
    }
  }
  else
  {
    RB_ImageFilter_CommitPingPongRTs(&filter, blurWidth, blurHeight);
  }
  __asm
  {
    vmovaps xmm1, xmm7; radiusY
    vmovaps xmm0, xmm9; radiusX
  }
  GaussianFilterChain = RB_GenerateGaussianFilterChain(*(float *)&_XMM0, *(float *)&_XMM1, srcWidth, srcHeight, dstWidth, height, 0x10u, blurFormat, filterOptions, filter.passes);
  __asm { vmovups xmm0, xmmword ptr [rsi] }
  filter.passCount = GaussianFilterChain;
  __asm { vmovups [rsp+12C8h+var_1268], xmm0 }
  RB_FilterImage(&v71, &filter, filterOptions);
  if ( !R_RT_Handle::IsValid(pingPongRt0) )
  {
    v56 = 2;
    _RDI = &v74;
    do
    {
      __asm { vmovups xmm1, xmmword ptr [rsi] }
      _RDI -= 4;
      __asm
      {
        vmovups ymm0, ymmword ptr [rdi]
        vmovups [rsp+12C8h+var_1258], ymm0
        vmovups [rsp+12C8h+var_1268], xmm1
      }
      R_RT_Destroy(&v71, &v72);
      --v56;
    }
    while ( v56 );
    R_FlushImmediateContext();
  }
  _R11 = &v80;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
}

/*
==============
RB_GaussianFilterPoints1D
==============
*/

__int64 __fastcall RB_GaussianFilterPoints1D(double pixels, int srcRes, int dstRes, int tapLimit, float *tapOffsets, float *tapWeights, const int options)
{
  int v8; 
  char v9; 
  char v10; 
  __int64 result; 
  int v17; 
  bool v20; 
  int v21; 
  int v25; 
  int v26; 
  bool v29; 
  unsigned int v32; 
  float *v35; 

  v8 = tapLimit;
  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  *(float *)&pixels = RB_GaussianFilterPoints1DUnnormalized(*(float *)&pixels, srcRes, dstRes, tapLimit, tapOffsets, tapWeights, options);
  __asm
  {
    vcomiss xmm0, cs:__real@3a83126f
    vmovaps xmm6, xmm0
  }
  if ( v9 | v10 )
  {
    *tapWeights = 0.5;
    result = 1i64;
    __asm { vmovaps xmm6, [rsp+58h+var_18] }
  }
  else
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm6, xmm0
    }
    if ( v9 | v10 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm6, xmm6
        vmovsd  [rsp+58h+var_30], xmm0
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp", 203, ASSERT_TYPE_ASSERT, "( ( totalWeight > 0 ) )", "( totalWeight ) = %g", *(double *)&v35) )
        __debugbreak();
    }
    __asm { vmovss  xmm0, cs:__real@3f000000 }
    v17 = v8 - 1;
    __asm { vdivss  xmm3, xmm0, xmm6 }
    if ( v8 - 1 < 0 )
      goto LABEL_24;
    __asm { vmovss  xmm2, cs:__real@3c23d70a }
    v20 = (unsigned int)v8 < 4;
    if ( v8 >= 4 )
    {
      v21 = v8 - 2;
      _R8 = &tapWeights[v17 - 2];
      do
      {
        __asm
        {
          vmulss  xmm0, xmm3, dword ptr [r8+8]
          vmulss  xmm1, xmm3, dword ptr [r8+4]
          vcomiss xmm0, xmm2
        }
        v25 = v21 + 2;
        v26 = v21;
        if ( !v20 )
          v25 = v8;
        v8 = v21 - 1;
        __asm
        {
          vcomiss xmm1, xmm2
          vmovss  dword ptr [r8+4], xmm1
        }
        if ( v20 )
          v25 = v17;
        __asm
        {
          vmulss  xmm1, xmm3, dword ptr [r8]
          vcomiss xmm1, xmm2
          vmovss  dword ptr [r8+8], xmm0
        }
        if ( !v20 )
          v26 = v25;
        __asm
        {
          vmulss  xmm0, xmm3, dword ptr [r8-4]
          vcomiss xmm0, xmm2
          vmovss  dword ptr [r8], xmm1
        }
        if ( !v20 )
          v8 = v26;
        v17 -= 4;
        v21 -= 4;
        __asm { vmovss  dword ptr [r8-4], xmm0 }
        _R8 -= 4;
        v20 = (unsigned int)v17 < 3;
      }
      while ( v17 >= 3 );
    }
    v29 = 0;
    if ( v17 < 0 )
    {
LABEL_24:
      __asm { vmovaps xmm6, [rsp+58h+var_18] }
      return (unsigned int)v8;
    }
    else
    {
      _R8 = &tapWeights[v17];
      do
      {
        __asm
        {
          vmulss  xmm0, xmm3, dword ptr [r8]
          vcomiss xmm0, xmm2
        }
        v32 = v17 + 1;
        if ( !v29 )
          v32 = v8;
        v29 = v17-- == 0;
        v8 = v32;
        __asm { vmovss  dword ptr [r8], xmm0 }
        --_R8;
      }
      while ( v17 >= 0 );
      result = v32;
      __asm { vmovaps xmm6, [rsp+58h+var_18] }
    }
  }
  return result;
}

/*
==============
RB_GaussianFilterPoints1DUnnormalized
==============
*/

float __fastcall RB_GaussianFilterPoints1DUnnormalized(double pixels, int srcRes, int dstRes, int tapLimit, float *tapOffsets, float *tapWeights)
{
  __int64 v78; 
  __int64 v79; 
  char v85; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vxorps  xmm10, xmm10, xmm10
    vcomiss xmm0, xmm10
    vmovaps [rsp+0E8h+var_88], xmm13
    vmovaps [rsp+0E8h+var_98], xmm14
    vmovaps xmm6, xmm0
  }
  if ( dstRes <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp", 152, ASSERT_TYPE_ASSERT, "( ( dstRes > 0 ) )", "( dstRes ) = %i", dstRes) )
    __debugbreak();
  if ( srcRes < dstRes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp", 153, ASSERT_TYPE_ASSERT, "( srcRes ) >= ( dstRes )", "%s >= %s\n\t%i, %i", "srcRes", "dstRes", srcRes, dstRes) )
    __debugbreak();
  __asm
  {
    vmovss  xmm11, cs:__real@3f000000
    vxorps  xmm13, xmm13, xmm13
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm13, xmm13, edi
    vcvtsi2ss xmm0, xmm0, ebx
    vdivss  xmm1, xmm13, xmm0
    vaddss  xmm2, xmm1, xmm11
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm4, xmm1, xmm2, 1
    vcvttss2si esi, xmm4
  }
  if ( (int)abs32(srcRes - dstRes * _ESI) >= _ESI )
  {
    LODWORD(v79) = dstRes;
    LODWORD(v78) = srcRes;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp", 157, ASSERT_TYPE_ASSERT, "(abs( srcRes - resolutionRatio * dstRes ) < resolutionRatio)", "%s\n\t%i %i", "abs( srcRes - resolutionRatio * dstRes ) < resolutionRatio", v78, v79) )
      __debugbreak();
  }
  _ESI = _ESI & 1;
  _EDI = 0;
  __asm
  {
    vmovd   xmm1, edi
    vmovd   xmm0, esi
    vpcmpeqd xmm2, xmm0, xmm1
    vmovss  xmm1, cs:__real@bf000000
    vblendvps xmm0, xmm10, xmm11, xmm2
    vmulss  xmm2, xmm6, xmm6
    vdivss  xmm14, xmm1, xmm2
    vmovss  [rsp+0E8h+arg_0], xmm0
    vxorps  xmm7, xmm7, xmm7
  }
  if ( tapLimit <= 0 )
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  else
  {
    _RBX = tapWeights;
    __asm { vmovaps [rsp+0E8h+var_38], xmm8 }
    _RSI = (char *)tapOffsets - (char *)tapWeights;
    __asm
    {
      vmovaps [rsp+0E8h+var_48], xmm9
      vmovaps [rsp+0E8h+var_78], xmm12
      vmovss  xmm12, [rsp+0E8h+arg_0]
    }
    do
    {
      _EAX = 2 * _EDI;
      __asm
      {
        vmovd   xmm0, eax
        vcvtdq2ps xmm0, xmm0
        vaddss  xmm8, xmm0, xmm12
      }
      _EAX = 2 * _EDI + 1;
      __asm
      {
        vmovd   xmm1, eax
        vmulss  xmm0, xmm8, xmm14
        vcvtdq2ps xmm1, xmm1
        vmulss  xmm0, xmm0, xmm8; X
        vaddss  xmm9, xmm1, xmm12
      }
      *(float *)&_XMM0 = expf_0(*(float *)&_XMM0);
      __asm
      {
        vmulss  xmm1, xmm9, xmm14
        vmovaps xmm6, xmm0
        vmulss  xmm0, xmm1, xmm9; X
      }
      *(float *)&_XMM0 = expf_0(*(float *)&_XMM0);
      if ( !_EDI )
      {
        __asm
        {
          vucomiss xmm12, xmm10
          vmulss  xmm6, xmm6, xmm11
        }
      }
      __asm
      {
        vaddss  xmm4, xmm0, xmm6
        vucomiss xmm4, xmm10
        vmovss  dword ptr [rbx], xmm4
      }
      if ( _EDI )
      {
        __asm
        {
          vmulss  xmm2, xmm8, xmm6
          vmulss  xmm1, xmm0, xmm9
          vaddss  xmm3, xmm2, xmm1
          vmulss  xmm2, xmm4, xmm13
          vdivss  xmm2, xmm3, xmm2
        }
      }
      else
      {
        __asm
        {
          vaddss  xmm0, xmm9, xmm8
          vmulss  xmm1, xmm0, xmm11
          vdivss  xmm2, xmm1, xmm13
        }
      }
      __asm
      {
        vmovss  dword ptr [rsi+rbx], xmm2
        vaddss  xmm7, xmm7, dword ptr [rbx]
      }
      ++_RBX;
      ++_EDI;
    }
    while ( _EDI < tapLimit );
    __asm
    {
      vmovaps xmm12, [rsp+0E8h+var_78]
      vmovaps xmm9, [rsp+0E8h+var_48]
      vmovaps xmm8, [rsp+0E8h+var_38]
      vmovaps xmm0, xmm7
    }
  }
  __asm { vmovaps xmm14, [rsp+0E8h+var_98] }
  _R11 = &v85;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm13, xmmword ptr [r11-80h]
  }
  return *(float *)&_XMM0;
}

/*
==============
RB_GenerateGaussianFilter2D
==============
*/

void __fastcall RB_GenerateGaussianFilter2D(double radius, int srcWidth, int srcHeight, int dstWidth, int dstHeight, GfxRenderTargetFormat rtFormat, GfxImageFilterPass *filterPass)
{
  char v16; 
  char v17; 
  char v30; 
  char v31; 
  int v42; 
  __int64 v43; 
  float *tapWeightsa; 
  float *tapWeights; 
  float *tapWeightsb; 
  float v60; 
  float tapOffsets[2]; 
  float v63[28]; 
  char v64; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmm11, xmm0
  }
  *(float *)&radius = RB_GaussianFilterPoints1DUnnormalized(radius, srcWidth, dstWidth, 2, tapOffsets, &v60);
  __asm
  {
    vcomiss xmm0, cs:__real@3a83126f
    vmovaps xmm7, xmm0
    vxorps  xmm10, xmm10, xmm10
  }
  if ( v16 | v17 )
  {
    __asm
    {
      vmovss  xmm6, cs:__real@3f000000
      vmovss  xmm9, [rsp+0C8h+var_84]
      vmovaps xmm8, xmm6
    }
  }
  else
  {
    __asm { vcomiss xmm7, xmm10 }
    if ( v16 | v17 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm7, xmm7
        vmovsd  [rsp+0C8h+tapWeights], xmm0
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp", 203, ASSERT_TYPE_ASSERT, "( ( totalWeight > 0 ) )", "( totalWeight ) = %g", *(double *)&tapWeightsa) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm6, cs:__real@3f000000
      vmovss  xmm0, [rsp+0C8h+var_84]
      vmovss  xmm1, [rsp+0C8h+var_88]
      vdivss  xmm2, xmm6, xmm7
      vmulss  xmm9, xmm0, xmm2
      vmulss  xmm8, xmm1, xmm2
    }
  }
  __asm { vmovaps xmm0, xmm11; pixels }
  *(float *)&_XMM0 = RB_GaussianFilterPoints1DUnnormalized(*(double *)&_XMM0, srcHeight, dstHeight, 2, v63, &v60);
  __asm
  {
    vcomiss xmm0, cs:__real@3a83126f
    vmovaps xmm7, xmm0
  }
  if ( v30 | v31 )
  {
    __asm { vmovss  [rsp+0C8h+var_88], xmm6 }
  }
  else
  {
    __asm { vcomiss xmm7, xmm10 }
    if ( v30 | v31 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm7, xmm7
        vmovsd  [rsp+0C8h+tapWeights], xmm0
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp", 203, ASSERT_TYPE_ASSERT, "( ( totalWeight > 0 ) )", "( totalWeight ) = %g", *(double *)&tapWeightsb) )
        __debugbreak();
    }
    __asm
    {
      vdivss  xmm3, xmm6, xmm7
      vmulss  xmm1, xmm3, [rsp+0C8h+var_84]
      vmulss  xmm0, xmm3, [rsp+0C8h+var_88]
      vmovss  [rsp+0C8h+var_84], xmm1
      vmovss  [rsp+0C8h+var_88], xmm0
    }
  }
  __asm
  {
    vmovss  xmm3, [rsp+0C8h+var_80]
    vmovss  xmm4, [rsp+0C8h+var_7C]
    vxorps  xmm5, xmm3, cs:__xmm@80000000800000008000000080000000
    vxorps  xmm6, xmm4, cs:__xmm@80000000800000008000000080000000
  }
  _RBX = filterPass;
  v42 = 0;
  v43 = 0i64;
  _RCX = 0i64;
  do
  {
    __asm
    {
      vmovss  xmm2, [rsp+rcx+0C8h+var_78]
      vmovss  xmm1, [rsp+rcx+0C8h+var_88]
      vmulss  xmm0, xmm1, xmm8
    }
    v42 += 2;
    _RAX = 2 * v43;
    v43 += 2i64;
    _RCX += 4i64;
    __asm
    {
      vmovss  dword ptr [rax+rbx+0Ch], xmm5
      vmovss  dword ptr [rax+rbx+10h], xmm2
    }
    filterPass->tapOffsetsAndWeights[_RAX].v[2] = 0.0;
    __asm
    {
      vmovss  dword ptr [rax+rbx+18h], xmm0
      vmovss  dword ptr [rax+rbx+1Ch], xmm3
      vmovss  dword ptr [rax+rbx+20h], xmm2
    }
    filterPass->tapOffsetsAndWeights[_RAX + 1].v[2] = 0.0;
    __asm
    {
      vmovss  dword ptr [rax+rbx+28h], xmm0
      vmovss  dword ptr [rax+rbx+2Ch], xmm6
      vmovss  dword ptr [rax+rbx+30h], xmm2
    }
    filterPass->tapOffsetsAndWeights[_RAX + 2].v[2] = 0.0;
    __asm
    {
      vmulss  xmm0, xmm1, xmm9
      vmovss  dword ptr [rax+rbx+38h], xmm0
      vmovss  dword ptr [rax+rbx+3Ch], xmm4
      vmovss  dword ptr [rax+rbx+40h], xmm2
    }
    filterPass->tapOffsetsAndWeights[_RAX + 3].v[2] = 0.0;
    __asm { vmovss  dword ptr [rax+rbx+48h], xmm0 }
  }
  while ( _RCX < 8 );
  filterPass->tapHalfCount = 2 * v42;
  if ( 2 * v42 > 16 )
  {
    LODWORD(tapWeights) = v42;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp", 321, ASSERT_TYPE_SANITY, "( ( filterPass->tapHalfCount <= 16 ) )", "( tapIndex ) = %i", tapWeights) )
      __debugbreak();
  }
  _R11 = &v64;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
  RB_PickSymmetricFilterMaterial(filterPass->tapHalfCount, rtFormat, &filterPass->material);
}

/*
==============
RB_GenerateGaussianFilterChain
==============
*/

__int64 __fastcall RB_GenerateGaussianFilterChain(double radiusX, double radiusY, int srcWidth, int srcHeight, int dstWidth, int dstHeight, unsigned int passLimit, GfxRenderTargetFormat rtFormat, int options, GfxImageFilterPass *filterPass)
{
  unsigned int v19; 
  bool v45; 
  char v46; 
  __int64 v60; 
  int *v61; 
  __int64 v62; 
  bool v66; 
  GfxImageFilterPass *v67; 
  int v69; 
  float *v70; 
  __int64 v71; 
  __int64 i; 
  float v73; 
  __int64 result; 
  int v83; 
  int v84; 
  float tapOffsets[16]; 
  float tapWeights[16]; 
  char v91; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
  }
  _ER13 = dstWidth;
  v19 = 0;
  _ER15 = dstHeight;
  _EBX = srcHeight;
  _ESI = srcWidth;
  v83 = dstWidth;
  v84 = dstHeight;
  __asm
  {
    vmovaps xmm7, xmm1
    vmovaps xmm6, xmm0
  }
  if ( srcWidth != dstWidth || srcHeight != dstHeight )
  {
    __asm
    {
      vminss  xmm0, xmm7, xmm6
      vminss  xmm8, xmm0, cs:?GFX_GAUSSIAN_MAX_FILTER_RADIUS_2D@@3MA; float GFX_GAUSSIAN_MAX_FILTER_RADIUS_2D
      vmulss  xmm4, xmm8, xmm8
      vmulss  xmm1, xmm6, xmm6
      vsubss  xmm0, xmm1, xmm4
      vsqrtss xmm3, xmm0, xmm0
      vmovd   xmm2, r13d
      vcvtdq2ps xmm2, xmm2
      vmulss  xmm1, xmm3, xmm2
      vmovd   xmm0, esi
      vcvtdq2ps xmm0, xmm0
      vdivss  xmm6, xmm1, xmm0
      vmulss  xmm1, xmm7, xmm7
      vsubss  xmm2, xmm1, xmm4
      vmovd   xmm0, r15d
      vsqrtss xmm3, xmm2, xmm2
      vcvtdq2ps xmm0, xmm0
      vmovd   xmm1, ebx
      vmulss  xmm4, xmm3, xmm0
      vcvtdq2ps xmm1, xmm1
      vdivss  xmm7, xmm4, xmm1
    }
    if ( !passLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp", 357, ASSERT_TYPE_ASSERT, "(passCount < passLimit)", (const char *)&queryFormat, "passCount < passLimit") )
      __debugbreak();
    if ( filterPass )
    {
      __asm { vmovaps xmm0, xmm8; radius }
      RB_GenerateGaussianFilter2D(*(double *)&_XMM0, _ESI, _EBX, dstWidth, dstHeight, rtFormat, filterPass);
    }
    v19 = 1;
  }
  v45 = v19 < passLimit;
  v46 = v19 <= passLimit;
  if ( v19 >= passLimit )
  {
    result = v19;
  }
  else
  {
    __asm
    {
      vmovss  xmm2, cs:?GFX_GAUSSIAN_MAX_FILTER_RADIUS_1D@@3MA; float GFX_GAUSSIAN_MAX_FILTER_RADIUS_1D
      vmovaps [rsp+198h+var_88], xmm9
      vmovaps [rsp+198h+var_98], xmm10
      vmovss  xmm10, cs:__real@3ea8b4e5
      vmovaps [rsp+198h+var_A8], xmm11
      vmovss  xmm11, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovaps [rsp+198h+var_B8], xmm12
      vmovss  xmm12, cs:__real@3f000000
      vxorps  xmm9, xmm9, xmm9
    }
    while ( 1 )
    {
      __asm { vcomiss xmm6, xmm10 }
      if ( v45 )
      {
        __asm { vcomiss xmm7, xmm10 }
        if ( v45 )
        {
LABEL_31:
          result = v19;
          goto LABEL_32;
        }
      }
      __asm
      {
        vsubss  xmm0, xmm6, xmm7
        vandps  xmm0, xmm0, xmm11
        vcomiss xmm0, xmm10
      }
      if ( v45 )
      {
        __asm
        {
          vaddss  xmm0, xmm7, xmm6
          vmulss  xmm0, xmm0, xmm12; radius
          vcomiss xmm0, cs:?GFX_GAUSSIAN_MAX_FILTER_RADIUS_2D@@3MA; float GFX_GAUSSIAN_MAX_FILTER_RADIUS_2D
        }
        if ( v46 )
          break;
      }
      __asm { vcomiss xmm6, xmm7 }
      if ( v46 )
      {
        __asm { vcomiss xmm7, xmm2 }
        if ( v46 )
        {
          __asm
          {
            vmovaps xmm8, xmm7
            vmovaps xmm7, xmm9
          }
        }
        else
        {
          __asm
          {
            vmulss  xmm1, xmm7, xmm7
            vmulss  xmm0, xmm2, xmm2
            vsubss  xmm1, xmm1, xmm0
            vsqrtss xmm7, xmm1, xmm1
            vmovaps xmm8, xmm2
          }
        }
        v60 = 12i64;
        v61 = &v84;
        v62 = 16i64;
      }
      else
      {
        __asm { vcomiss xmm6, xmm2 }
        if ( v45 )
        {
          __asm
          {
            vmovaps xmm8, xmm6
            vmovaps xmm6, xmm9
          }
        }
        else
        {
          __asm
          {
            vmulss  xmm1, xmm6, xmm6
            vmulss  xmm0, xmm2, xmm2
            vsubss  xmm1, xmm1, xmm0
            vsqrtss xmm6, xmm1, xmm1
            vmovaps xmm8, xmm2
          }
        }
        v60 = 16i64;
        v61 = &v83;
        v62 = 12i64;
      }
      __asm { vcomiss xmm8, xmm9 }
      if ( !v46 )
      {
        v66 = 0;
        if ( filterPass )
        {
          v67 = &filterPass[v19];
          __asm { vmovaps xmm0, xmm8; pixels }
          v69 = RB_GaussianFilterPoints1D(*(double *)&_XMM0, *v61, *v61, 16, tapOffsets, tapWeights, 4);
          v67->tapHalfCount = v69;
          RB_PickSymmetricFilterMaterial(v69, rtFormat, &v67->material);
          v70 = (float *)((char *)v67 + v62);
          v71 = v60 - v62;
          for ( i = 0i64; i < 16; v66 = (unsigned __int64)i < 16 )
          {
            *v70 = tapOffsets[i];
            v73 = tapWeights[i++];
            *(float *)((char *)v70 + v71) = 0.0;
            *(float *)((char *)v70 + 20 - v62) = 0.0;
            *(float *)((char *)v70 + 24 - v62) = v73;
            v70 += 4;
          }
          __asm { vmovss  xmm2, cs:?GFX_GAUSSIAN_MAX_FILTER_RADIUS_1D@@3MA; float GFX_GAUSSIAN_MAX_FILTER_RADIUS_1D }
        }
        v46 = v66 | (v19++ == -1);
        __asm { vcomiss xmm8, xmm9 }
        if ( !v46 )
        {
          v45 = v19 < passLimit;
          v46 = v19 <= passLimit;
          if ( v19 < passLimit )
            continue;
        }
      }
      goto LABEL_31;
    }
    if ( filterPass )
      RB_GenerateGaussianFilter2D(*(double *)&_XMM0, dstWidth, dstHeight, dstWidth, dstHeight, rtFormat, &filterPass[v19]);
    result = v19 + 1;
LABEL_32:
    __asm
    {
      vmovaps xmm10, [rsp+198h+var_98]
      vmovaps xmm9, [rsp+198h+var_88]
      vmovaps xmm11, [rsp+198h+var_A8]
      vmovaps xmm12, [rsp+198h+var_B8]
    }
  }
  _R11 = &v91;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-20h]
    vmovaps xmm7, xmmword ptr [r11-30h]
    vmovaps xmm8, xmmword ptr [r11-40h]
  }
  return result;
}

/*
==============
RB_ImageFilter_CommitPingPongRTs
==============
*/
void RB_ImageFilter_CommitPingPongRTs(GfxImageFilter *filter, unsigned int blurWidth, unsigned int blurHeight)
{
  const dvar_t *v4; 
  const dvar_t *v8; 
  int v9; 
  const dvar_t *v10; 
  int v11; 
  int rtFlags; 
  const char **pingPongNames; 
  __int64 v15; 
  bool v19; 
  R_RT_Handle v20; 
  R_RT_Handle result; 

  v4 = r_deviceDebug;
  if ( !r_deviceDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
    goto LABEL_10;
  v8 = DCONST_DVARBOOL_r_esramPostFX;
  if ( !DCONST_DVARBOOL_r_esramPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramPostFX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( !v8->current.enabled )
LABEL_10:
    v9 = 0;
  else
    v9 = 64;
  v10 = DCONST_DVARINT_r_dccPostFX;
  if ( !DCONST_DVARINT_r_dccPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_dccPostFX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  v11 = 2048;
  if ( v10->current.integer == 1 )
    v11 = 2056;
  rtFlags = v9 | v11;
  _RBX = filter->pingPongColorRts;
  pingPongNames = filter->pingPongNames;
  v15 = 2i64;
  do
  {
    _RAX = R_RT_CreateInternal(&result, blurWidth, blurHeight, blurWidth, blurHeight, 1u, 1u, 1u, g_R_RT_renderTargetFmts[(unsigned __int8)filter->rtFormat], (R_RT_Flags)rtFlags, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, *pingPongNames, 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp(71)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovd   eax, xmm0
      vmovups [rsp+128h+var_68], ymm0
      vmovups ymmword ptr [rsp+128h+var_88.m_surfaceID], ymm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v20);
      if ( (R_RT_Handle::GetSurface(&v20)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        __asm { vmovups ymm0, ymmword ptr [rsp+128h+var_88.m_surfaceID] }
        __debugbreak();
      }
      else
      {
        __asm { vmovups ymm0, ymmword ptr [rsp+128h+var_88.m_surfaceID] }
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        v19 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        __asm { vmovups ymm0, [rsp+128h+var_68] }
        if ( v19 )
          __debugbreak();
      }
    }
    __asm { vmovups ymmword ptr [rbx], ymm0 }
    ++_RBX;
    ++pingPongNames;
    --v15;
  }
  while ( v15 );
}

/*
==============
RB_PickSymmetricFilterMaterial
==============
*/
void RB_PickSymmetricFilterMaterial(int halfTapCount, GfxRenderTargetFormat rtFormat, const Material **material)
{
  __int64 v3; 
  int v5; 
  int v6; 
  int v7; 
  Material **v8; 
  __int64 v9; 

  v3 = halfTapCount;
  v5 = (unsigned __int8)rtFormat;
  v6 = (unsigned __int8)rtFormat - 1;
  if ( !v6 )
  {
    v8 = &rgp.symmetricFilterMaterial[0][2];
    goto LABEL_9;
  }
  v7 = v6 - 2;
  if ( v7 )
  {
    if ( v7 == 2 )
    {
      v8 = &rgp.symmetricFilterMaterial[0][1];
      goto LABEL_9;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp", 125, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp(125): unhandled case %d in switch statement", v5) )
      __debugbreak();
  }
  v8 = rgp.symmetricFilterMaterial[0];
LABEL_9:
  if ( (unsigned int)(v3 - 1) > 0xF )
  {
    LODWORD(v9) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp", 135, ASSERT_TYPE_ASSERT, "( ( halfTapCount > 0 && halfTapCount <= 16 ) )", "( halfTapCount ) = %i", v9) )
      __debugbreak();
  }
  *material = v8[3 * v3 - 3];
}

/*
==============
RB_SetupFilterPass
==============
*/
void RB_SetupFilterPass(GfxCmdBufContext *gfxContext, const GfxImageFilterPass *filterPass)
{
  unsigned int tapHalfCount; 
  unsigned int v5; 
  unsigned int v14; 
  char *v15; 
  __int64 v16; 
  __int64 v17; 
  GfxCmdBufSourceState *source; 
  char *v19; 
  __int64 v20; 
  __int64 v21; 
  char v22[4]; 
  char v23[188]; 

  tapHalfCount = filterPass->tapHalfCount;
  _RDI = filterPass;
  if ( tapHalfCount >= 0x11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp", 440, ASSERT_TYPE_ASSERT, "(unsigned)( tapHalfCount ) < (unsigned)( ( sizeof( *array_counter( filterPass->tapOffsetsAndWeights ) ) + 0 ) + 1 )", "tapHalfCount doesn't index ARRAY_COUNT( filterPass->tapOffsetsAndWeights ) + 1\n\t%i not in [0, %i)", filterPass->tapHalfCount, 17) )
    __debugbreak();
  memset_0(v22, 0, 0xC0ui64);
  v5 = 0;
  if ( tapHalfCount )
  {
    do
    {
      _R8 = 2i64 * v5;
      _RDX = &v22[16 * ((unsigned __int64)v5 >> 1)];
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+r8*8+0Ch]
        vmovss  xmm1, dword ptr [rdi+r8*8+18h]
      }
      _RAX = 2 * (v5 & 1);
      __asm
      {
        vmovss  dword ptr [rdx+rax*4], xmm0
        vmovss  xmm0, dword ptr [rdi+r8*8+10h]
        vmovss  dword ptr [rdx+rax*4+4], xmm0
      }
      _RCX = &v22[16 * (v5 >> 2) + 128];
      _RAX = v5++ & 3;
      __asm { vmovss  dword ptr [rcx+rax*4], xmm1 }
    }
    while ( v5 != tapHalfCount );
  }
  v14 = 87;
  v15 = v23;
  v16 = 10338i64;
  v17 = 12i64;
  do
  {
    source = gfxContext->source;
    if ( v14 >= 0xA0 )
    {
      LODWORD(v21) = 160;
      LODWORD(v20) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1362, ASSERT_TYPE_ASSERT, "(unsigned)( constant ) < (unsigned)( CONST_SRC_CODE_COUNT_FLOAT4 )", "constant doesn't index CONST_SRC_CODE_COUNT_FLOAT4\n\t%i not in [0, %i)", v20, v21) )
        __debugbreak();
    }
    v19 = &v15[3184i64 - (_QWORD)v23 + (_QWORD)source];
    *(_DWORD *)v19 = *((_DWORD *)v15 - 1);
    *((_DWORD *)v19 + 1) = *(_DWORD *)v15;
    *((_DWORD *)v19 + 2) = *((_DWORD *)v15 + 1);
    *((_DWORD *)v19 + 3) = *((_DWORD *)v15 + 2);
    if ( v14 >= 0xAE )
    {
      LODWORD(v21) = 174;
      LODWORD(v20) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1277, ASSERT_TYPE_ASSERT, "(unsigned)( constant ) < (unsigned)( ( sizeof( *array_counter( source->constVersions ) ) + 0 ) )", "constant doesn't index ARRAY_COUNT( source->constVersions )\n\t%i not in [0, %i)", v20, v21) )
        __debugbreak();
    }
    ++*(_WORD *)((char *)source->matrices.matrix[0].m.m[0].v + v16);
    v16 += 2i64;
    v15 += 16;
    ++v14;
    --v17;
  }
  while ( v17 );
}

/*
==============
RB_VirtualToSceneRadius
==============
*/

void __fastcall RB_VirtualToSceneRadius(double radius, float *radiusX, float *radiusY, const GfxViewInfo *viewInfo)
{
  char v19; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RBX = radiusY;
  _RDI = radiusX;
  __asm { vmovaps xmm6, xmm0 }
  if ( !radiusX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp", 91, ASSERT_TYPE_ASSERT, "(radiusX)", (const char *)&queryFormat, "radiusX") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp", 92, ASSERT_TYPE_ASSERT, "(radiusY)", (const char *)&queryFormat, "radiusY") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, xmm6
    vmulss  xmm2, xmm1, cs:__real@3b088889
    vmovss  dword ptr [rbx], xmm2
    vdivss  xmm0, xmm2, cs:?vidConfig@@3UvidConfig_t@@A.aspectRatioScenePixel; vidConfig_t vidConfig
    vmovss  dword ptr [rdi], xmm0
  }
  if ( viewInfo )
  {
    _RAX = R_RT_FindMatchingDynamicResolutionTable(vidConfig.sceneWidth, vidConfig.sceneHeight);
    __asm
    {
      vmovss  xmm0, dword ptr [rax]
      vdivss  xmm1, xmm0, dword ptr [rax+4]
      vmulss  xmm2, xmm1, dword ptr [rax+rcx*8+4]
      vdivss  xmm3, xmm2, dword ptr [rax+rcx*8]
      vcomiss xmm3, cs:__real@3f800000
    }
    if ( v19 )
    {
      __asm
      {
        vmulss  xmm0, xmm3, dword ptr [rbx]
        vmovss  dword ptr [rbx], xmm0
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi]
        vdivss  xmm1, xmm0, xmm3
        vmovss  dword ptr [rdi], xmm1
      }
    }
  }
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
}

/*
==============
R_GenerateGaussianFilterChain
==============
*/
unsigned int R_GenerateGaussianFilterChain(float radius, int w, int h)
{
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
    vmulss  xmm0, xmm1, xmm0
    vmulss  xmm1, xmm0, cs:__real@3b088889; radiusY
    vdivss  xmm0, xmm1, cs:?vidConfig@@3UvidConfig_t@@A.aspectRatioScenePixel; radiusX
  }
  return RB_GenerateGaussianFilterChain(*(float *)&_XMM0, *(float *)&_XMM1, w, h, w, h, 0x10u, GFX_RENDERTARGET_FORMAT_INVALID, 7, NULL);
}

