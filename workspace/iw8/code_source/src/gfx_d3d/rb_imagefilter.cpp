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
  __m256i finalColorRt; 
  GfxCmdBufState *state; 
  __m256i v9; 
  unsigned __int16 m_surfaceID; 
  materialCommands_t *Tess; 
  materialCommands_t *v12; 
  unsigned int v13; 
  const Material *material; 
  int v15; 
  GfxCmdBufContext v16; 
  __int64 v19; 
  __m256i v20; 
  __m256i v21; 
  R_RT_ColorHandle srcColorRt; 
  R_RT_Handle v23; 

  if ( !filter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp", 569, ASSERT_TYPE_ASSERT, "(filter)", (const char *)&queryFormat, "filter") )
    __debugbreak();
  if ( filter->passCount )
  {
    m_surfaceID = filter->srcColorRt.m_surfaceID;
    if ( m_surfaceID )
    {
      R_RT_Handle::GetSurface(&filter->srcColorRt);
    }
    else if ( filter->srcColorRt.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
    {
      __debugbreak();
    }
    if ( !m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp", 587, ASSERT_TYPE_ASSERT, "(filter->srcColorRt.IsValid())", (const char *)&queryFormat, "filter->srcColorRt.IsValid()") )
      __debugbreak();
    *(GfxCmdBufContext *)v20.m256i_i8 = *gfxContext;
    Tess = R_GetTess((GfxCmdBufContext *)&v20);
    v12 = Tess;
    if ( Tess->vertexCount )
    {
      *(GfxCmdBufContext *)v20.m256i_i8 = *gfxContext;
      RB_EndTessSurfaceInternal((GfxCmdBufContext *)&v20, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h(162)");
    }
    else
    {
      if ( Tess->indexCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 166, ASSERT_TYPE_ASSERT, "(tess.indexCount == 0)", (const char *)&queryFormat, "tess.indexCount == 0") )
        __debugbreak();
      v12->viewStatsTarget = GFX_VIEW_STATS_INVALID;
      v12->primStatsTarget = GFX_PRIM_STATS_INVALID;
    }
    v13 = 0;
    for ( LOWORD(v19) = 0; v13 < filter->passCount; ++v13 )
    {
      *(GfxCmdBufContext *)v20.m256i_i8 = *gfxContext;
      RB_FilterPingPong((R_RT_ColorHandle *)&v23, (GfxCmdBufContext *)&v20, filter, v13, (bool *)&v19, filterOptions);
      *(GfxCmdBufContext *)v20.m256i_i8 = *gfxContext;
      RB_SetupFilterPass((GfxCmdBufContext *)&v20, &filter->passes[v13]);
      material = filter->passes[v13].material;
      *(GfxCmdBufContext *)v20.m256i_i8 = *gfxContext;
      RB_FullScreenFilterInternal((GfxCmdBufContext *)&v20, material, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp(601)");
      v15 = v23.m_surfaceID;
      if ( v23.m_surfaceID )
      {
        R_RT_Handle::GetSurface(&v23);
      }
      else if ( v23.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", v23.m_surfaceID + 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", v19) )
      {
        __debugbreak();
      }
      if ( v15 )
      {
        v16 = *gfxContext;
        v21 = (__m256i)v23;
        *(GfxCmdBufContext *)v20.m256i_i8 = v16;
        R_RT_Destroy((GfxCmdBufContext *)&v20, (R_RT_ColorHandle *)&v21);
      }
    }
  }
  else
  {
    *(_QWORD *)&v23.m_surfaceID = 0i64;
    v23.m_tracking.m_allocCounter = R_RT_Handle::GetSurface(&filter->finalColorRt)->m_image.m_base.width;
    Surface = R_RT_Handle::GetSurface(&filter->finalColorRt);
    finalColorRt = (__m256i)filter->finalColorRt;
    *(&v23.m_tracking.m_allocCounter + 1) = Surface->m_image.m_base.height;
    state = gfxContext->state;
    v20 = finalColorRt;
    R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v20, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(gfxContext->state);
    v9 = (__m256i)filter->finalColorRt;
    srcColorRt = filter->srcColorRt;
    *(GfxCmdBufContext *)v20.m256i_i8 = *gfxContext;
    v21 = v9;
    RB_CopyRT((GfxCmdBufContext *)&v20, (R_RT_ColorHandle *)&v21, &srcColorRt, (const GfxViewport *)&v23, rgp.feedbackReplaceBackbufferMaterial);
  }
  _XMM1 = *gfxContext;
  __asm { vpextrq rbx, xmm1, 1 }
  v21 = (__m256i)filter->finalColorRt;
  R_AddRenderTargetTransition(_RBX, (R_RT_ColorHandle *)&v21, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
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
  bool v16; 
  R_RT_ColorHandle *p_srcColorRt; 
  R_RT_Image *p_m_image; 
  const dvar_t *v19; 
  int v20; 
  const dvar_t *v21; 
  int v22; 
  int rtFlags; 
  __int64 rtFormat; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  R_RT_Handle v27; 
  bool v29; 
  GfxCmdBufState *state; 
  unsigned int v31; 
  const R_RT_Surface *v32; 
  GfxCmdBufSourceState *source; 
  GfxCmdBufContext v34; 
  GfxCmdBufContext v35; 
  GfxCmdBufState *v36; 
  GfxCmdBufSourceState *v37; 
  GfxCmdBufInput *p_input; 
  R_RT_Handle v39; 
  unsigned int v40; 
  const R_RT_Surface *v41; 
  GfxCmdBufState *v42; 
  R_RT_Handle resulta; 
  R_RT_Handle v45; 
  R_RT_Handle finalColorRt; 
  R_RT_Handle v47; 

  passCount = filter->passCount;
  v9 = passIndex + 1;
  if ( v9 == filter->passCount )
    v13 = 4;
  else
    v13 = (passIndex != 0) + 1;
  v14 = filterOptions & v13;
  v15 = passIndex & 1;
  v47 = (R_RT_Handle)filter->pingPongColorRts[(unsigned int)(1 - v15)];
  if ( v9 == passCount )
  {
    finalColorRt = (R_RT_Handle)filter->finalColorRt;
    v16 = v14 == 0;
    v45 = finalColorRt;
  }
  else
  {
    finalColorRt = (R_RT_Handle)filter->pingPongColorRts[v15];
    v45 = finalColorRt;
    if ( v14 || cleared[v15] )
    {
      v16 = 0;
    }
    else
    {
      v16 = 1;
      cleared[v15] = 1;
    }
  }
  p_srcColorRt = &filter->srcColorRt;
  if ( passIndex )
    p_srcColorRt = (R_RT_ColorHandle *)&v47;
  resulta = p_srcColorRt->R_RT_Handle;
  v47 = resulta;
  p_m_image = &R_RT_Handle::GetSurface(&v47)->m_image;
  if ( passIndex )
  {
    R_AddRenderTargetTransition(gfxContext->state, (R_RT_ColorHandle *)&resulta, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(gfxContext->state);
  }
  result->m_surfaceID = 0;
  result->m_tracking.m_allocCounter = 0;
  result->m_tracking.m_name = NULL;
  result->m_tracking.m_location = NULL;
  if ( p_m_image == &R_RT_Handle::GetSurface(&v45)->m_image )
  {
    if ( Dvar_GetBool_Internal(r_deviceDebug) )
      goto LABEL_20;
    v19 = DCONST_DVARBOOL_r_esramPostFX;
    if ( !DCONST_DVARBOOL_r_esramPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramPostFX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v19);
    v20 = 2112;
    if ( !v19->current.enabled )
LABEL_20:
      v20 = 2048;
    v21 = DCONST_DVARINT_r_dccPostFX;
    if ( !DCONST_DVARINT_r_dccPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_dccPostFX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    if ( v21->current.integer == 1 )
      v22 = 8;
    else
      v22 = 0;
    if ( R_RT_Handle::GetSurface(&v47)->m_image.m_base.format != g_R_RT_renderTargetFmts[(unsigned __int8)filter->rtFormat] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp", 509, ASSERT_TYPE_ASSERT, "(srcColorRt.GetFormat() == R_RT_PixelFormatFromRenderTargetFormat( filter->rtFormat ))", (const char *)&queryFormat, "srcColorRt.GetFormat() == R_RT_PixelFormatFromRenderTargetFormat( filter->rtFormat )") )
      __debugbreak();
    rtFlags = v22 | v20;
    rtFormat = (unsigned __int8)filter->rtFormat;
    height = R_RT_Handle::GetSurface(&v47)->m_image.m_base.height;
    Surface = R_RT_Handle::GetSurface(&v47);
    v27 = *R_RT_CreateInternal(&resulta, Surface->m_image.m_base.width, height, Surface->m_image.m_base.width, height, 1u, 1u, 1u, g_R_RT_renderTargetFmts[rtFormat], (R_RT_Flags)rtFlags, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "In-Place Blur Copy", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp(510)");
    v45 = v27;
    v47 = v27;
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface(&v47);
      if ( (R_RT_Handle::GetSurface(&v47)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        v27 = v47;
        __debugbreak();
      }
      else
      {
        v27 = v47;
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        v29 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        v27 = v45;
        if ( v29 )
          __debugbreak();
      }
    }
    state = gfxContext->state;
    *result = (R_RT_ColorHandle)v27;
    resulta = v27;
    R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&resulta, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(gfxContext->state);
    v45 = result->R_RT_Handle;
    v31 = R_RT_Handle::GetSurface(&v45)->m_image.m_base.height;
    v32 = R_RT_Handle::GetSurface(&v45);
    source = gfxContext->source;
    R_SetRenderTargetSize(gfxContext->source, v32->m_image.m_base.width, v31, GFX_USE_VIEWPORT_FULL);
    v34 = *gfxContext;
    resulta = result->R_RT_Handle;
    *(GfxCmdBufContext *)&v47.m_surfaceID = v34;
    R_SetRenderTargetsInternal_ColorOnly((GfxCmdBufContext *)&v47, (R_RT_ColorHandle *)&resulta, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp(516)");
    if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
      __debugbreak();
    if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    v35 = *gfxContext;
    source->input.codeImages[4] = &p_m_image->m_base;
    *(GfxCmdBufContext *)&v47.m_surfaceID = v35;
    RB_FullScreenFilterInternal((GfxCmdBufContext *)&v47, rgp.feedbackReplaceScenebufferMaterial, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp(518)");
    v36 = gfxContext->state;
    resulta = result->R_RT_Handle;
    R_AddRenderTargetTransition(v36, (R_RT_ColorHandle *)&resulta, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(gfxContext->state);
    p_m_image = &R_RT_Handle::GetSurface(result)->m_image;
  }
  v37 = gfxContext->source;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &v37->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v39 = finalColorRt;
  p_input->codeImages[4] = &p_m_image->m_base;
  v45 = v39;
  v40 = R_RT_Handle::GetSurface(&v45)->m_image.m_base.height;
  v41 = R_RT_Handle::GetSurface(&v45);
  R_SetRenderTargetSize(gfxContext->source, v41->m_image.m_base.width, v40, GFX_USE_VIEWPORT_FULL);
  v42 = gfxContext->state;
  resulta = finalColorRt;
  R_AddRenderTargetTransition(v42, (R_RT_ColorHandle *)&resulta, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(v42);
  resulta = finalColorRt;
  *(GfxCmdBufContext *)&v47.m_surfaceID = *gfxContext;
  R_SetRenderTargetsInternal_ColorOnly((GfxCmdBufContext *)&v47, (R_RT_ColorHandle *)&resulta, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp(533)");
  if ( v16 )
    R_ClearScreen(v42, 0xFu, 0);
  return result;
}

/*
==============
RB_GaussianFilterHdrImage
==============
*/
void RB_GaussianFilterHdrImage(GfxCmdBufContext *gfxContext, unsigned int mipIndex, float radius, R_RT_ColorHandle *srcColorRt, R_RT_ColorHandle *dstColorRt, R_RT_ColorHandle *pingPongRt0, R_RT_ColorHandle *pingPongRt1, unsigned int blurWidth, unsigned int blurHeight, GfxRenderTargetFormat blurFormat, unsigned int filterOptions, const GfxViewInfo *viewInfo)
{
  signed __int64 v12; 
  void *v13; 
  __int64 v16; 
  float sceneHeight; 
  float v18; 
  float v19; 
  const vec2_t *MatchingDynamicResolutionTable; 
  float v21; 
  int width; 
  const R_RT_Surface *Surface; 
  R_RT_ColorHandle v24; 
  unsigned __int16 m_surfaceID; 
  R_RT_ColorHandle v26; 
  unsigned int GaussianFilterChain; 
  GfxCmdBufContext v28; 
  int v29; 
  R_RT_ColorHandle *v30; 
  GfxCmdBufContext v31; 
  int dstHeight; 
  int dstWidth; 
  int srcHeight; 
  GfxCmdBufContext v35; 
  R_RT_ColorHandle v36; 
  GfxImageFilter filter; 
  __int64 v38; 

  v13 = alloca(v12);
  v16 = mipIndex;
  sceneHeight = (float)vidConfig.sceneHeight;
  v18 = (float)(sceneHeight * radius) * 0.0020833334;
  v19 = v18 / vidConfig.aspectRatioScenePixel;
  if ( viewInfo )
  {
    MatchingDynamicResolutionTable = R_RT_FindMatchingDynamicResolutionTable(vidConfig.sceneWidth, vidConfig.sceneHeight);
    v21 = (float)((float)(MatchingDynamicResolutionTable->v[0] / MatchingDynamicResolutionTable->v[1]) * MatchingDynamicResolutionTable[(unsigned __int8)viewInfo->input.resolution.step].v[1]) / MatchingDynamicResolutionTable[(unsigned __int8)viewInfo->input.resolution.step].v[0];
    if ( v21 < 1.0 )
      v18 = v21 * v18;
    else
      v19 = v19 / v21;
  }
  width = R_RT_Handle::GetSurface(srcColorRt)->m_image.m_base.width;
  srcHeight = R_RT_Handle::GetSurface(srcColorRt)->m_image.m_base.height;
  dstWidth = R_RT_Handle::GetSurface(dstColorRt)->m_image.m_base.width;
  Surface = R_RT_Handle::GetSurface(dstColorRt);
  v24 = *dstColorRt;
  filter.rtFormat = blurFormat;
  dstHeight = Surface->m_image.m_base.height;
  filter.srcColorRt = *srcColorRt;
  filter.finalColorRt = v24;
  if ( (unsigned int)v16 >= 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp", 736, ASSERT_TYPE_ASSERT, "(unsigned)( mipIndex ) < (unsigned)( ( sizeof( *array_counter( s_gaussianHDRPingPongNames ) ) + 0 ) )", "mipIndex doesn't index ARRAY_COUNT( s_gaussianHDRPingPongNames )\n\t%i not in [0, %i)", v16, 16) )
    __debugbreak();
  filter.pingPongNames[0] = s_gaussianHDRPingPongNames[v16][0];
  filter.pingPongNames[1] = s_gaussianHDRPingPongNames[v16][1];
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
    v26 = *pingPongRt1;
    filter.pingPongColorRts[0] = *pingPongRt0;
    filter.pingPongColorRts[1] = v26;
  }
  else
  {
    RB_ImageFilter_CommitPingPongRTs(&filter, blurWidth, blurHeight);
  }
  GaussianFilterChain = RB_GenerateGaussianFilterChain(v19, v18, width, srcHeight, dstWidth, dstHeight, 0x10u, blurFormat, filterOptions, filter.passes);
  v28 = *gfxContext;
  filter.passCount = GaussianFilterChain;
  v35 = v28;
  RB_FilterImage(&v35, &filter, filterOptions);
  if ( !R_RT_Handle::IsValid(pingPongRt0) )
  {
    v29 = 2;
    v30 = (R_RT_ColorHandle *)&v38;
    do
    {
      v31 = *gfxContext;
      v36 = *--v30;
      v35 = v31;
      R_RT_Destroy(&v35, &v36);
      --v29;
    }
    while ( v29 );
    R_FlushImmediateContext();
  }
}

/*
==============
RB_GaussianFilterHdrImageStep
==============
*/
void RB_GaussianFilterHdrImageStep(GfxCmdBufContext *gfxContext, unsigned int passIndex, float radius, R_RT_ColorHandle *srcRt, R_RT_ColorHandle *dstRt, GfxRenderTargetFormat blurFormat, unsigned int filterOptions, const GfxViewInfo *viewInfo)
{
  signed __int64 v8; 
  void *v9; 
  __int64 v11; 
  GfxPixelFormat format; 
  float sceneHeight; 
  float v15; 
  float v16; 
  float v17; 
  const vec2_t *MatchingDynamicResolutionTable; 
  float v19; 
  int dstHeight; 
  int width; 
  int height; 
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v24; 
  GfxCmdBufSourceState *source; 
  R_RT_Image *p_m_image; 
  GfxCmdBufInput *p_input; 
  GfxCmdBufContext v28; 
  const Material *material; 
  GfxCmdBufSourceState *v30; 
  GfxCmdBufInput *v31; 
  GfxCmdBufContext v32; 
  unsigned int GaussianFilterChain; 
  GfxImageFilterPass filterPass[16]; 
  GfxRenderTargetFormat v35; 

  v9 = alloca(v8);
  v11 = passIndex;
  format = R_RT_Handle::GetSurface(srcRt)->m_image.m_base.format;
  if ( format != R_RT_Handle::GetSurface(dstRt)->m_image.m_base.format && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp", 766, ASSERT_TYPE_ASSERT, "(srcRt.GetFormat() == dstRt.GetFormat())", (const char *)&queryFormat, "srcRt.GetFormat() == dstRt.GetFormat()") )
    __debugbreak();
  sceneHeight = (float)vidConfig.sceneHeight;
  v15 = (float)(sceneHeight * radius) * 0.0020833334;
  v17 = v15 / vidConfig.aspectRatioScenePixel;
  v16 = v15 / vidConfig.aspectRatioScenePixel;
  if ( viewInfo )
  {
    MatchingDynamicResolutionTable = R_RT_FindMatchingDynamicResolutionTable(vidConfig.sceneWidth, vidConfig.sceneHeight);
    v19 = (float)((float)(MatchingDynamicResolutionTable->v[0] / MatchingDynamicResolutionTable->v[1]) * MatchingDynamicResolutionTable[(unsigned __int8)viewInfo->input.resolution.step].v[1]) / MatchingDynamicResolutionTable[(unsigned __int8)viewInfo->input.resolution.step].v[0];
    if ( v19 < 1.0 )
      v15 = v15 * v19;
    else
      v16 = v17 / v19;
  }
  dstHeight = R_RT_Handle::GetSurface(dstRt)->m_image.m_base.height;
  width = R_RT_Handle::GetSurface(dstRt)->m_image.m_base.width;
  height = R_RT_Handle::GetSurface(srcRt)->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface(srcRt);
  GaussianFilterChain = RB_GenerateGaussianFilterChain(v16, v15, Surface->m_image.m_base.width, height, width, dstHeight, 0x10u, blurFormat, filterOptions, filterPass);
  v35 = blurFormat;
  if ( (unsigned int)v11 < GaussianFilterChain )
  {
    v32 = *gfxContext;
    RB_SetupFilterPass(&v32, &filterPass[v11]);
    v24 = R_RT_Handle::GetSurface(srcRt);
    source = gfxContext->source;
    p_m_image = &v24->m_image;
    if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
      __debugbreak();
    p_input = &source->input;
    if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    v28 = *gfxContext;
    material = filterPass[v11].material;
    p_input->codeImages[4] = &p_m_image->m_base;
    v32 = v28;
    RB_FullScreenFilterInternal(&v32, material, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp(784)");
    v30 = gfxContext->source;
    if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
      __debugbreak();
    v31 = &v30->input;
    if ( !v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    v31->codeImages[4] = NULL;
  }
}

/*
==============
RB_GaussianFilterImage
==============
*/
void RB_GaussianFilterImage(GfxCmdBufContext *gfxContext, unsigned int mipIndex, float radius, R_RT_ColorHandle *srcColorRt, R_RT_ColorHandle *dstColorRt, R_RT_ColorHandle *pingPongRt0, R_RT_ColorHandle *pingPongRt1, unsigned int blurWidth, unsigned int blurHeight, GfxRenderTargetFormat blurFormat, unsigned int filterOptions, const GfxViewInfo *viewInfo)
{
  signed __int64 v12; 
  void *v13; 
  __int64 v16; 
  float sceneHeight; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  const vec2_t *MatchingDynamicResolutionTable; 
  float v23; 
  float v24; 
  float v25; 
  R_RT_ColorHandle v26; 
  unsigned __int16 m_surfaceID; 
  R_RT_ColorHandle v28; 
  unsigned int GaussianFilterChain; 
  GfxCmdBufContext v30; 
  int v31; 
  R_RT_ColorHandle *v32; 
  GfxCmdBufContext v33; 
  __int64 dstHeight; 
  int height; 
  int dstWidth; 
  int srcHeight; 
  int srcWidth; 
  GfxCmdBufContext v39; 
  R_RT_ColorHandle v40; 
  GfxImageFilter filter; 
  __int64 v42; 

  v13 = alloca(v12);
  v16 = mipIndex;
  if ( !R_RT_Handle::IsValid(srcColorRt) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp", 669, ASSERT_TYPE_ASSERT, "(srcColorRt)", (const char *)&queryFormat, "srcColorRt") )
    __debugbreak();
  if ( !R_RT_Handle::IsValid(dstColorRt) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp", 670, ASSERT_TYPE_ASSERT, "(dstColorRt)", (const char *)&queryFormat, "dstColorRt") )
    __debugbreak();
  sceneHeight = (float)vidConfig.sceneHeight;
  v18 = (float)(sceneHeight * radius) * 0.0020833334;
  v19 = v18 / vidConfig.aspectRatioScenePixel;
  v20 = v18 / vidConfig.aspectRatioScenePixel;
  v21 = v18;
  if ( viewInfo )
  {
    MatchingDynamicResolutionTable = R_RT_FindMatchingDynamicResolutionTable(vidConfig.sceneWidth, vidConfig.sceneHeight);
    v23 = (float)((float)(MatchingDynamicResolutionTable->v[0] / MatchingDynamicResolutionTable->v[1]) * MatchingDynamicResolutionTable[(unsigned __int8)viewInfo->input.resolution.step].v[1]) / MatchingDynamicResolutionTable[(unsigned __int8)viewInfo->input.resolution.step].v[0];
    if ( v23 < 1.0 )
    {
      v21 = v23 * v18;
      v18 = v23 * v18;
      v20 = v19;
    }
    else
    {
      v20 = v19 / v23;
      v19 = v19 / v23;
      v21 = v18;
    }
  }
  v24 = v21;
  if ( v20 > 150.0 || v21 > 150.0 )
  {
    v25 = 150.0 / fmaxf(v19, v18);
    v19 = v25 * v20;
    v18 = v25 * v24;
  }
  srcWidth = R_RT_Handle::GetSurface(srcColorRt)->m_image.m_base.width;
  srcHeight = R_RT_Handle::GetSurface(srcColorRt)->m_image.m_base.height;
  dstWidth = R_RT_Handle::GetSurface(dstColorRt)->m_image.m_base.width;
  filter.rtFormat = blurFormat;
  height = R_RT_Handle::GetSurface(dstColorRt)->m_image.m_base.height;
  v26 = *dstColorRt;
  filter.srcColorRt = *srcColorRt;
  filter.finalColorRt = v26;
  if ( (unsigned int)v16 >= 0x10 )
  {
    LODWORD(dstHeight) = v16;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp", 690, ASSERT_TYPE_ASSERT, "(unsigned)( mipIndex ) < (unsigned)( ( sizeof( *array_counter( s_gaussianPingPongNames ) ) + 0 ) )", "mipIndex doesn't index ARRAY_COUNT( s_gaussianPingPongNames )\n\t%i not in [0, %i)", dstHeight, 16) )
      __debugbreak();
  }
  filter.pingPongNames[0] = s_gaussianPingPongNames[v16][0];
  filter.pingPongNames[1] = s_gaussianPingPongNames[v16][1];
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
    v28 = *pingPongRt1;
    filter.pingPongColorRts[0] = *pingPongRt0;
    filter.pingPongColorRts[1] = v28;
  }
  else
  {
    RB_ImageFilter_CommitPingPongRTs(&filter, blurWidth, blurHeight);
  }
  GaussianFilterChain = RB_GenerateGaussianFilterChain(v19, v18, srcWidth, srcHeight, dstWidth, height, 0x10u, blurFormat, filterOptions, filter.passes);
  v30 = *gfxContext;
  filter.passCount = GaussianFilterChain;
  v39 = v30;
  RB_FilterImage(&v39, &filter, filterOptions);
  if ( !R_RT_Handle::IsValid(pingPongRt0) )
  {
    v31 = 2;
    v32 = (R_RT_ColorHandle *)&v42;
    do
    {
      v33 = *gfxContext;
      v40 = *--v32;
      v39 = v33;
      R_RT_Destroy(&v39, &v40);
      --v31;
    }
    while ( v31 );
    R_FlushImmediateContext();
  }
}

/*
==============
RB_GaussianFilterPoints1D
==============
*/
__int64 RB_GaussianFilterPoints1D(float pixels, int srcRes, int dstRes, int tapLimit, float *tapOffsets, float *tapWeights, const int options)
{
  int v7; 
  float v8; 
  int v10; 
  float v11; 
  int v12; 
  float *v13; 
  float v14; 
  float v15; 
  int v16; 
  int v17; 
  float v18; 
  float v19; 
  float *v20; 
  float v21; 
  unsigned int v22; 

  v7 = tapLimit;
  v8 = RB_GaussianFilterPoints1DUnnormalized(pixels, srcRes, dstRes, tapLimit, tapOffsets, tapWeights, options);
  if ( v8 > 0.001 )
  {
    if ( v8 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp", 203, ASSERT_TYPE_ASSERT, "( ( totalWeight > 0 ) )", "( totalWeight ) = %g", v8) )
      __debugbreak();
    v10 = v7 - 1;
    v11 = 0.5 / v8;
    if ( v7 - 1 < 0 )
      return (unsigned int)v7;
    if ( v7 >= 4 )
    {
      v12 = v7 - 2;
      v13 = &tapWeights[v10 - 2];
      do
      {
        v14 = v11 * v13[2];
        v15 = v11 * v13[1];
        v16 = v12 + 2;
        v17 = v12;
        if ( v14 >= 0.0099999998 )
          v16 = v7;
        v7 = v12 - 1;
        v13[1] = v15;
        if ( v15 < 0.0099999998 )
          v16 = v10;
        v18 = v11 * *v13;
        v13[2] = v14;
        if ( v18 >= 0.0099999998 )
          v17 = v16;
        v19 = v11 * *(v13 - 1);
        *v13 = v18;
        if ( v19 >= 0.0099999998 )
          v7 = v17;
        v10 -= 4;
        v12 -= 4;
        *(v13 - 1) = v19;
        v13 -= 4;
      }
      while ( v10 >= 3 );
    }
    if ( v10 < 0 )
    {
      return (unsigned int)v7;
    }
    else
    {
      v20 = &tapWeights[v10];
      do
      {
        v21 = v11 * *v20;
        v22 = v10 + 1;
        if ( v21 >= 0.0099999998 )
          v22 = v7;
        --v10;
        v7 = v22;
        *v20-- = v21;
      }
      while ( v10 >= 0 );
      return v22;
    }
  }
  else
  {
    *tapWeights = 0.5;
    return 1i64;
  }
}

/*
==============
RB_GaussianFilterPoints1DUnnormalized
==============
*/
float RB_GaussianFilterPoints1DUnnormalized(float pixels, int srcRes, int dstRes, int tapLimit, float *tapOffsets, float *tapWeights)
{
  float v11; 
  int v14; 
  int v15; 
  float v19; 
  __int128 v20; 
  float *v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  __int128 v27; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  float v32; 

  _XMM10 = 0i64;
  if ( pixels <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp", 151, ASSERT_TYPE_ASSERT, "( ( pixels > 0 ) )", "( pixels ) = %g", pixels) )
    __debugbreak();
  if ( dstRes <= 0 )
  {
    LODWORD(v29) = dstRes;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp", 152, ASSERT_TYPE_ASSERT, "( ( dstRes > 0 ) )", "( dstRes ) = %i", v29) )
      __debugbreak();
  }
  if ( srcRes < dstRes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp", 153, ASSERT_TYPE_ASSERT, "( srcRes ) >= ( dstRes )", "%s >= %s\n\t%i, %i", "srcRes", "dstRes", srcRes, dstRes) )
    __debugbreak();
  v11 = (float)srcRes;
  _XMM1 = 0i64;
  __asm { vroundss xmm4, xmm1, xmm2, 1 }
  v14 = (int)*(float *)&_XMM4;
  if ( (int)abs32(srcRes - dstRes * (int)*(float *)&_XMM4) >= (int)*(float *)&_XMM4 )
  {
    LODWORD(v31) = dstRes;
    LODWORD(v30) = srcRes;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp", 157, ASSERT_TYPE_ASSERT, "(abs( srcRes - resolutionRatio * dstRes ) < resolutionRatio)", "%s\n\t%i %i", "abs( srcRes - resolutionRatio * dstRes ) < resolutionRatio", v30, v31) )
      __debugbreak();
  }
  v15 = 0;
  _XMM0 = v14 & 1;
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm10, xmm11, xmm2
  }
  v19 = -0.5 / (float)(pixels * pixels);
  v32 = *(float *)&_XMM0;
  v20 = 0i64;
  if ( tapLimit <= 0 )
    return 0.0;
  v21 = tapWeights;
  do
  {
    v22 = _mm_cvtepi32_ps((__m128i)(unsigned int)(2 * v15)).m128_f32[0] + v32;
    v23 = _mm_cvtepi32_ps((__m128i)(unsigned int)(2 * v15 + 1)).m128_f32[0] + v32;
    v24 = expf_0((float)(v22 * v19) * v22);
    v25 = expf_0((float)(v23 * v19) * v23);
    if ( !v15 && v32 == 0.0 )
      v24 = v24 * 0.5;
    *v21 = v25 + v24;
    if ( (float)(v25 + v24) == 0.0 )
      v26 = (float)((float)(v23 + v22) * 0.5) / v11;
    else
      v26 = (float)((float)(v22 * v24) + (float)(v25 * v23)) / (float)((float)(v25 + v24) * v11);
    *(float *)((char *)v21 + (char *)tapOffsets - (char *)tapWeights) = v26;
    v27 = v20;
    *(float *)&v27 = *(float *)&v20 + *v21;
    v20 = v27;
    ++v21;
    ++v15;
  }
  while ( v15 < tapLimit );
  return *(float *)&v27;
}

/*
==============
RB_GenerateGaussianFilter2D
==============
*/
void RB_GenerateGaussianFilter2D(float radius, int srcWidth, int srcHeight, int dstWidth, int dstHeight, GfxRenderTargetFormat rtFormat, GfxImageFilterPass *filterPass)
{
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  int v18; 
  __int64 v19; 
  __int64 v20; 
  float v21; 
  float v22; 
  __int64 v23; 
  float *tapWeights; 
  float v25; 
  float v26; 
  float tapOffsets; 
  float v28; 
  float v29[28]; 

  v9 = RB_GaussianFilterPoints1DUnnormalized(radius, srcWidth, dstWidth, 2, &tapOffsets, &v25);
  if ( v9 > 0.001 )
  {
    if ( v9 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp", 203, ASSERT_TYPE_ASSERT, "( ( totalWeight > 0 ) )", "( totalWeight ) = %g", v9) )
      __debugbreak();
    v10 = FLOAT_0_5;
    v11 = v26 * (float)(0.5 / v9);
    v12 = v25 * (float)(0.5 / v9);
  }
  else
  {
    v10 = FLOAT_0_5;
    v11 = v26;
    v12 = FLOAT_0_5;
  }
  v13 = RB_GaussianFilterPoints1DUnnormalized(radius, srcHeight, dstHeight, 2, v29, &v25);
  if ( v13 > 0.001 )
  {
    if ( v13 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp", 203, ASSERT_TYPE_ASSERT, "( ( totalWeight > 0 ) )", "( totalWeight ) = %g", v13) )
      __debugbreak();
    v26 = (float)(v10 / v13) * v26;
    v25 = (float)(v10 / v13) * v25;
  }
  else
  {
    v25 = v10;
  }
  v14 = tapOffsets;
  v15 = v28;
  LODWORD(v16) = LODWORD(tapOffsets) ^ _xmm;
  LODWORD(v17) = LODWORD(v28) ^ _xmm;
  v18 = 0;
  v19 = 0i64;
  v20 = 0i64;
  do
  {
    v21 = v29[v20];
    v22 = *(float *)((char *)&v25 + v20 * 4);
    v18 += 2;
    v23 = 2 * v19;
    v19 += 2i64;
    ++v20;
    filterPass->tapOffsetsAndWeights[v23].v[0] = v16;
    filterPass->tapOffsetsAndWeights[v23].v[1] = v21;
    filterPass->tapOffsetsAndWeights[v23].v[2] = 0.0;
    filterPass->tapOffsetsAndWeights[v23].v[3] = v22 * v12;
    filterPass->tapOffsetsAndWeights[v23 + 1].v[0] = v14;
    filterPass->tapOffsetsAndWeights[v23 + 1].v[1] = v21;
    filterPass->tapOffsetsAndWeights[v23 + 1].v[2] = 0.0;
    filterPass->tapOffsetsAndWeights[v23 + 1].v[3] = v22 * v12;
    filterPass->tapOffsetsAndWeights[v23 + 2].v[0] = v17;
    filterPass->tapOffsetsAndWeights[v23 + 2].v[1] = v21;
    filterPass->tapOffsetsAndWeights[v23 + 2].v[2] = 0.0;
    filterPass->tapOffsetsAndWeights[v23 + 2].v[3] = v22 * v11;
    filterPass->tapOffsetsAndWeights[v23 + 3].v[0] = v15;
    filterPass->tapOffsetsAndWeights[v23 + 3].v[1] = v21;
    filterPass->tapOffsetsAndWeights[v23 + 3].v[2] = 0.0;
    filterPass->tapOffsetsAndWeights[v23 + 3].v[3] = v22 * v11;
  }
  while ( v20 < 2 );
  filterPass->tapHalfCount = 2 * v18;
  if ( 2 * v18 > 16 )
  {
    LODWORD(tapWeights) = v18;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp", 321, ASSERT_TYPE_SANITY, "( ( filterPass->tapHalfCount <= 16 ) )", "( tapIndex ) = %i", tapWeights) )
      __debugbreak();
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
  unsigned int v10; 
  __int128 v14; 
  __int128 v17; 
  __int128 v18; 
  float v19; 
  float v20; 
  float v21; 
  __int128 v22; 
  __int64 v23; 
  int *v24; 
  __int64 v25; 
  __int128 v26; 
  GfxImageFilterPass *v27; 
  int v28; 
  float *v29; 
  __int64 v30; 
  __int64 v31; 
  float v32; 
  int v34; 
  int v35; 
  float tapOffsets[16]; 
  float tapWeights[16]; 

  v10 = 0;
  v34 = dstWidth;
  v35 = dstHeight;
  _XMM7 = *(_OWORD *)&radiusY;
  v14 = *(_OWORD *)&radiusX;
  if ( srcWidth != dstWidth || srcHeight != dstHeight )
  {
    __asm
    {
      vminss  xmm0, xmm7, xmm6
      vminss  xmm8, xmm0, cs:?GFX_GAUSSIAN_MAX_FILTER_RADIUS_2D@@3MA; float GFX_GAUSSIAN_MAX_FILTER_RADIUS_2D
    }
    v17 = v14;
    *(float *)&v17 = (float)(fsqrt((float)(*(float *)&v14 * *(float *)&v14) - (float)(*(float *)&_XMM8 * *(float *)&_XMM8)) * _mm_cvtepi32_ps((__m128i)(unsigned int)dstWidth).m128_f32[0]) / _mm_cvtepi32_ps((__m128i)(unsigned int)srcWidth).m128_f32[0];
    v14 = v17;
    v18 = *(_OWORD *)&radiusY;
    *(float *)&v18 = (float)(fsqrt((float)(*(float *)&radiusY * *(float *)&radiusY) - (float)(*(float *)&_XMM8 * *(float *)&_XMM8)) * _mm_cvtepi32_ps((__m128i)(unsigned int)dstHeight).m128_f32[0]) / _mm_cvtepi32_ps((__m128i)(unsigned int)srcHeight).m128_f32[0];
    _XMM7 = v18;
    if ( !passLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp", 357, ASSERT_TYPE_ASSERT, "(passCount < passLimit)", (const char *)&queryFormat, "passCount < passLimit") )
      __debugbreak();
    if ( filterPass )
      RB_GenerateGaussianFilter2D(*(float *)&_XMM8, srcWidth, srcHeight, dstWidth, dstHeight, rtFormat, filterPass);
    v10 = 1;
  }
  if ( v10 >= passLimit )
    return v10;
  v19 = GFX_GAUSSIAN_MAX_FILTER_RADIUS_1D;
  while ( 1 )
  {
    if ( *(float *)&v14 < 0.32950512 && *(float *)&_XMM7 < 0.32950512 )
      return v10;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v14 - *(float *)&_XMM7) & _xmm) < 0.32950512 )
    {
      v20 = (float)(*(float *)&_XMM7 + *(float *)&v14) * 0.5;
      if ( v20 <= GFX_GAUSSIAN_MAX_FILTER_RADIUS_2D )
        break;
    }
    if ( *(float *)&v14 <= *(float *)&_XMM7 )
    {
      if ( *(float *)&_XMM7 > v19 )
      {
        v26 = _XMM7;
        *(float *)&v26 = fsqrt((float)(*(float *)&_XMM7 * *(float *)&_XMM7) - (float)(v19 * v19));
        _XMM7 = v26;
        v21 = v19;
      }
      else
      {
        v21 = *(float *)&_XMM7;
        _XMM7 = 0i64;
      }
      v23 = 12i64;
      v24 = &v35;
      v25 = 16i64;
    }
    else
    {
      if ( *(float *)&v14 >= v19 )
      {
        v22 = v14;
        *(float *)&v22 = fsqrt((float)(*(float *)&v14 * *(float *)&v14) - (float)(v19 * v19));
        v14 = v22;
        v21 = v19;
      }
      else
      {
        v21 = *(float *)&v14;
        v14 = 0i64;
      }
      v23 = 16i64;
      v24 = &v34;
      v25 = 12i64;
    }
    if ( v21 > 0.0 )
    {
      if ( filterPass )
      {
        v27 = &filterPass[v10];
        v28 = RB_GaussianFilterPoints1D(v21, *v24, *v24, 16, tapOffsets, tapWeights, 4);
        v27->tapHalfCount = v28;
        RB_PickSymmetricFilterMaterial(v28, rtFormat, &v27->material);
        v29 = (float *)((char *)v27 + v25);
        v30 = v23 - v25;
        v31 = 0i64;
        do
        {
          *v29 = tapOffsets[v31];
          v32 = tapWeights[v31++];
          *(float *)((char *)v29 + v30) = 0.0;
          *(float *)((char *)v29 + 20 - v25) = 0.0;
          *(float *)((char *)v29 + 24 - v25) = v32;
          v29 += 4;
        }
        while ( v31 < 16 );
        v19 = GFX_GAUSSIAN_MAX_FILTER_RADIUS_1D;
      }
      ++v10;
      if ( v21 > 0.0 && v10 < passLimit )
        continue;
    }
    return v10;
  }
  if ( filterPass )
    RB_GenerateGaussianFilter2D(v20, dstWidth, dstHeight, dstWidth, dstHeight, rtFormat, &filterPass[v10]);
  return v10 + 1;
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
  R_RT_ColorHandle *pingPongColorRts; 
  const char **pingPongNames; 
  __int64 v15; 
  R_RT_Handle v16; 
  bool v18; 
  R_RT_Handle v19; 
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
  pingPongColorRts = filter->pingPongColorRts;
  pingPongNames = filter->pingPongNames;
  v15 = 2i64;
  do
  {
    v16 = *R_RT_CreateInternal(&result, blurWidth, blurHeight, blurWidth, blurHeight, 1u, 1u, 1u, g_R_RT_renderTargetFmts[(unsigned __int8)filter->rtFormat], (R_RT_Flags)rtFlags, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, *pingPongNames, 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp(71)");
    v20 = v16;
    v19 = v16;
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface(&v19);
      if ( (R_RT_Handle::GetSurface(&v19)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        v16 = v19;
        __debugbreak();
      }
      else
      {
        v16 = v19;
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        v18 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        v16 = v20;
        if ( v18 )
          __debugbreak();
      }
    }
    *pingPongColorRts++ = (R_RT_ColorHandle)v16;
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
  char *v6; 
  float v7; 
  __int64 v8; 
  char *v9; 
  __int64 v10; 
  unsigned int v11; 
  char *v12; 
  __int64 v13; 
  __int64 v14; 
  GfxCmdBufSourceState *source; 
  char *v16; 
  __int64 v17; 
  __int64 v18; 
  char v19[4]; 
  char v20[188]; 

  tapHalfCount = filterPass->tapHalfCount;
  if ( tapHalfCount >= 0x11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp", 440, ASSERT_TYPE_ASSERT, "(unsigned)( tapHalfCount ) < (unsigned)( ( sizeof( *array_counter( filterPass->tapOffsetsAndWeights ) ) + 0 ) + 1 )", "tapHalfCount doesn't index ARRAY_COUNT( filterPass->tapOffsetsAndWeights ) + 1\n\t%i not in [0, %i)", filterPass->tapHalfCount, 17) )
    __debugbreak();
  memset_0(v19, 0, 0xC0ui64);
  v5 = 0;
  if ( tapHalfCount )
  {
    do
    {
      v6 = &v19[16 * ((unsigned __int64)v5 >> 1)];
      v7 = filterPass->tapOffsetsAndWeights[v5].v[3];
      v8 = 2 * (v5 & 1);
      *(float *)&v6[4 * v8] = filterPass->tapOffsetsAndWeights[v5].v[0];
      *(float *)&v6[4 * v8 + 4] = filterPass->tapOffsetsAndWeights[v5].v[1];
      v9 = &v19[16 * (v5 >> 2) + 128];
      v10 = v5++ & 3;
      *(float *)&v9[4 * v10] = v7;
    }
    while ( v5 != tapHalfCount );
  }
  v11 = 87;
  v12 = v20;
  v13 = 10338i64;
  v14 = 12i64;
  do
  {
    source = gfxContext->source;
    if ( v11 >= 0xA0 )
    {
      LODWORD(v18) = 160;
      LODWORD(v17) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1362, ASSERT_TYPE_ASSERT, "(unsigned)( constant ) < (unsigned)( CONST_SRC_CODE_COUNT_FLOAT4 )", "constant doesn't index CONST_SRC_CODE_COUNT_FLOAT4\n\t%i not in [0, %i)", v17, v18) )
        __debugbreak();
    }
    v16 = &v12[3184i64 - (_QWORD)v20 + (_QWORD)source];
    *(_DWORD *)v16 = *((_DWORD *)v12 - 1);
    *((_DWORD *)v16 + 1) = *(_DWORD *)v12;
    *((_DWORD *)v16 + 2) = *((_DWORD *)v12 + 1);
    *((_DWORD *)v16 + 3) = *((_DWORD *)v12 + 2);
    if ( v11 >= 0xAE )
    {
      LODWORD(v18) = 174;
      LODWORD(v17) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1277, ASSERT_TYPE_ASSERT, "(unsigned)( constant ) < (unsigned)( ( sizeof( *array_counter( source->constVersions ) ) + 0 ) )", "constant doesn't index ARRAY_COUNT( source->constVersions )\n\t%i not in [0, %i)", v17, v18) )
        __debugbreak();
    }
    ++*(_WORD *)((char *)source->matrices.matrix[0].m.m[0].v + v13);
    v13 += 2i64;
    v12 += 16;
    ++v11;
    --v14;
  }
  while ( v14 );
}

/*
==============
RB_VirtualToSceneRadius
==============
*/
void RB_VirtualToSceneRadius(float radius, float *radiusX, float *radiusY, const GfxViewInfo *viewInfo)
{
  float sceneHeight; 
  float v8; 
  const vec2_t *MatchingDynamicResolutionTable; 
  float v10; 

  if ( !radiusX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp", 91, ASSERT_TYPE_ASSERT, "(radiusX)", (const char *)&queryFormat, "radiusX") )
    __debugbreak();
  if ( !radiusY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_imagefilter.cpp", 92, ASSERT_TYPE_ASSERT, "(radiusY)", (const char *)&queryFormat, "radiusY") )
    __debugbreak();
  sceneHeight = (float)vidConfig.sceneHeight;
  v8 = (float)(sceneHeight * radius) * 0.0020833334;
  *radiusY = v8;
  *radiusX = v8 / vidConfig.aspectRatioScenePixel;
  if ( viewInfo )
  {
    MatchingDynamicResolutionTable = R_RT_FindMatchingDynamicResolutionTable(vidConfig.sceneWidth, vidConfig.sceneHeight);
    v10 = (float)((float)(MatchingDynamicResolutionTable->v[0] / MatchingDynamicResolutionTable->v[1]) * MatchingDynamicResolutionTable[(unsigned __int8)viewInfo->input.resolution.step].v[1]) / MatchingDynamicResolutionTable[(unsigned __int8)viewInfo->input.resolution.step].v[0];
    if ( v10 < 1.0 )
      *radiusY = v10 * *radiusY;
    else
      *radiusX = *radiusX / v10;
  }
}

/*
==============
R_GenerateGaussianFilterChain
==============
*/
unsigned int R_GenerateGaussianFilterChain(float radius, int w, int h)
{
  float sceneHeight; 

  sceneHeight = (float)vidConfig.sceneHeight;
  return RB_GenerateGaussianFilterChain((float)((float)(sceneHeight * radius) * 0.0020833334) / vidConfig.aspectRatioScenePixel, (float)(sceneHeight * radius) * 0.0020833334, w, h, w, h, 0x10u, GFX_RENDERTARGET_FORMAT_INVALID, 7, NULL);
}

