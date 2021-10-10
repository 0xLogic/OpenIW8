/*
==============
R_CompositePostfx_Apply
==============
*/

void __fastcall R_CompositePostfx_Apply(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxViewport *viewport, R_RT_ColorHandle *srcRt, R_RT_ColorHandle *srcScopeBufferRt, R_RT_ColorHandle *srcShellshockRts, R_RT_ColorHandle *srcOverlayRt, R_RT_ColorHandle *srcReticleRt)
{
  ?R_CompositePostfx_Apply@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@PEBUGfxViewport@@VR_RT_ColorHandle@@3QEAV4@33@Z(gfxContext, viewInfo, viewport, srcRt, srcScopeBufferRt, srcShellshockRts, srcOverlayRt, srcReticleRt);
}

/*
==============
R_CompositePostfx_CaptureShellShock
==============
*/

void __fastcall R_CompositePostfx_CaptureShellShock(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxBackEndData *data, R_RT_ColorHandle *srcShellshockRts, R_RT_ColorHandle *srcRt, R_RT_ColorHandle *scopeBufferRt, R_RT_ColorHandle *srcReticleRt)
{
  ?R_CompositePostfx_CaptureShellShock@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@QEAVR_RT_ColorHandle@@V4@44@Z(gfxContext, viewInfo, data, srcShellshockRts, srcRt, scopeBufferRt, srcReticleRt);
}

/*
==============
R_CompositePostfx_SetConstants
==============
*/

void __fastcall R_CompositePostfx_SetConstants(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxBackEndData *data, bool applyFilmGrain, bool shellshockValid, bool overlayValid, bool reticleValid)
{
  ?R_CompositePostfx_SetConstants@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@_N333@Z(gfxContext, viewInfo, data, applyFilmGrain, shellshockValid, overlayValid, reticleValid);
}

/*
==============
BlendColor_ColorBlend
==============
*/
BlendColor *BlendColor_ColorBlend(BlendColor *result, BlendColor *blendColor, vec4_t *srcColor, GfxBlendStateBits blendState)
{
  vec4_t v6; 
  __m128 v7; 
  __m128 v8; 
  float v9; 
  __int128 v11; 
  __m128 v15; 
  vec4_t v18; 
  __m128 v19; 
  __m128 v20; 
  float v21; 
  __m128 v22; 
  __m128 v23; 
  __m128 v25; 
  __m128 v27; 
  double v31; 

  if ( blendState == 34904 )
  {
    v6 = *srcColor;
    v7 = *(__m128 *)blendColor->add.v;
    v8 = (__m128)*(unsigned __int64 *)&blendColor->mul.y;
    v9 = _mm_shuffle_ps((__m128)v6, (__m128)v6, 255).m128_f32[0];
    _mm_shuffle_ps((__m128)v6, (__m128)v6, 170);
    _mm_shuffle_ps(v7, v7, 85);
    v11 = *(_OWORD *)blendColor->add.v;
    *(float *)&v11 = COERCE_FLOAT(*(_OWORD *)blendColor->add.v) * (float)((float)((float)(COERCE_FLOAT(*srcColor) - 1.0) * v9) + 1.0);
    _XMM8 = v11;
    _mm_shuffle_ps(v7, v7, 170);
    __asm { vinsertps xmm8, xmm8, xmm4, 10h }
    _mm_shuffle_ps(v8, v8, 85);
    _mm_shuffle_ps(v7, v7, 255);
    __asm { vinsertps xmm8, xmm8, xmm3, 20h ; ' ' }
    v15 = v8;
    v15.m128_f32[0] = v8.m128_f32[0] * (float)((float)((float)(_mm_shuffle_ps((__m128)v6, (__m128)v6, 85).m128_f32[0] - 1.0) * v9) + 1.0);
    _XMM5 = v15;
    __asm
    {
      vinsertps xmm8, xmm8, xmm2, 30h ; '0'
      vunpcklps xmm0, xmm5, xmm1
    }
    *(_OWORD *)result->add.v = _XMM8;
    *(double *)&result->mul.y = *(double *)&_XMM0;
  }
  else if ( blendState == 163920 )
  {
    v18 = *srcColor;
    v19 = *(__m128 *)blendColor->add.v;
    v20 = (__m128)*(unsigned __int64 *)&blendColor->mul.y;
    v21 = _mm_shuffle_ps((__m128)v18, (__m128)v18, 255).m128_f32[0];
    v22 = _mm_shuffle_ps(v19, v19, 255);
    v22.m128_f32[0] = v22.m128_f32[0] * (float)(1.0 - v21);
    _mm_shuffle_ps(v20, v20, 85);
    v23 = _mm_shuffle_ps(v22, v22, 0);
    v25 = v20;
    v25.m128_f32[0] = v20.m128_f32[0] * (float)(1.0 - v21);
    _XMM11 = v25;
    _mm_shuffle_ps((__m128)v18, (__m128)v18, 85);
    _mm_shuffle_ps(v19, v19, 85);
    v27 = v23;
    v27.m128_f32[0] = (float)(COERCE_FLOAT(*srcColor) * v21) + (float)(COERCE_FLOAT(*(_OWORD *)blendColor->add.v) * (float)(1.0 - v21));
    _XMM3 = v27;
    _mm_shuffle_ps((__m128)v18, (__m128)v18, 170);
    _mm_shuffle_ps(v19, v19, 170);
    __asm
    {
      vunpcklps xmm0, xmm11, xmm9
      vinsertps xmm3, xmm3, xmm4, 10h
      vinsertps xmm3, xmm3, xmm2, 20h ; ' '
    }
    *(_OWORD *)result->add.v = _XMM3;
    *(double *)&result->mul.y = *(double *)&_XMM0;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_composite_postfx.cpp", 151, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "blendmode not supported") )
      __debugbreak();
    v31 = *(double *)&blendColor->mul.y;
    *(_OWORD *)result->add.v = *(_OWORD *)blendColor->add.v;
    *(double *)&result->mul.y = v31;
  }
  return result;
}

/*
==============
R_CompositePostfx_Apply
==============
*/
void R_CompositePostfx_Apply(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxViewport *viewport, R_RT_ColorHandle *srcRt, R_RT_ColorHandle *srcScopeBufferRt, R_RT_ColorHandle *srcShellshockRts, R_RT_ColorHandle *srcOverlayRt, R_RT_ColorHandle *srcReticleRt)
{
  R_RT_Image *p_m_image; 
  R_RT_Image *blackImage; 
  R_RT_Image *v12; 
  R_RT_Image *v13; 
  R_RT_Image *v14; 
  GfxCmdBufSourceState *source; 
  GfxCmdBufInput *p_input; 
  GfxCmdBufSourceState *v17; 
  GfxCmdBufInput *v18; 
  GfxCmdBufSourceState *v19; 
  GfxCmdBufInput *v20; 
  GfxCmdBufSourceState *v21; 
  GfxCmdBufInput *v22; 
  GfxCmdBufSourceState *v23; 
  GfxCmdBufInput *v24; 
  GfxCmdBufContext v25; 
  float height; 
  float width; 
  GfxCmdBufSourceState *v28; 
  GfxCmdBufInput *v29; 
  GfxCmdBufSourceState *v30; 
  GfxCmdBufInput *v31; 
  GfxCmdBufSourceState *v32; 
  GfxCmdBufInput *v33; 
  GfxCmdBufSourceState *v34; 
  GfxCmdBufInput *v35; 
  GfxCmdBufSourceState *v36; 
  GfxCmdBufInput *v37; 
  R_RT_Handle v38; 

  v38 = (R_RT_Handle)srcShellshockRts[shellshockBufferIndex[viewInfo->clientIndex]];
  p_m_image = &R_RT_Handle::GetSurface(srcRt)->m_image;
  if ( R_RT_Handle::IsValid(srcScopeBufferRt) )
    blackImage = &R_RT_Handle::GetSurface(srcScopeBufferRt)->m_image;
  else
    blackImage = (R_RT_Image *)rgp.blackImage;
  if ( v38.m_surfaceID )
  {
    R_RT_Handle::GetSurface(&v38);
    v12 = &R_RT_Handle::GetSurface(&v38)->m_image;
  }
  else
  {
    if ( v38.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    v12 = (R_RT_Image *)rgp.blackImage;
  }
  if ( R_RT_Handle::IsValid(srcOverlayRt) )
    v13 = &R_RT_Handle::GetSurface(srcOverlayRt)->m_image;
  else
    v13 = (R_RT_Image *)rgp.blackImage;
  if ( R_RT_Handle::IsValid(srcReticleRt) )
    v14 = &R_RT_Handle::GetSurface(srcReticleRt)->m_image;
  else
    v14 = (R_RT_Image *)rgp.blackImage;
  source = gfxContext->source;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[4] = &p_m_image->m_base;
  v17 = gfxContext->source;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v18 = &v17->input;
  if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v18->codeImages[23] = &blackImage->m_base;
  v19 = gfxContext->source;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v20 = &v19->input;
  if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v20->codeImages[24] = &v12->m_base;
  v21 = gfxContext->source;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v22 = &v21->input;
  if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v22->codeImages[25] = &v13->m_base;
  v23 = gfxContext->source;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v24 = &v23->input;
  if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v25 = *gfxContext;
  v24->codeImages[26] = &v14->m_base;
  height = (float)viewport->height;
  width = (float)viewport->width;
  *(GfxCmdBufContext *)&v38.m_surfaceID = v25;
  RB_ViewportFilterDirectInternal((GfxCmdBufContext *)&v38, rgp.compositePostfxMaterial, 0xFFFFFFFF, viewport, 0.0, 0.0, width, height, 0.0, 0.0, 1.0, 1.0, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_composite_postfx.cpp(360)");
  v28 = gfxContext->source;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v29 = &v28->input;
  if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v29->codeImages[4] = NULL;
  v30 = gfxContext->source;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v31 = &v30->input;
  if ( !v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v31->codeImages[23] = NULL;
  v32 = gfxContext->source;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v33 = &v32->input;
  if ( !v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v33->codeImages[24] = NULL;
  v34 = gfxContext->source;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v35 = &v34->input;
  if ( !v35 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v36 = gfxContext->source;
  v35->codeImages[25] = NULL;
  if ( !v36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v37 = &v36->input;
  if ( !v37 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v37->codeImages[26] = NULL;
}

/*
==============
R_CompositePostfx_CaptureShellShock
==============
*/
void R_CompositePostfx_CaptureShellShock(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxBackEndData *data, R_RT_ColorHandle *srcShellshockRts, R_RT_ColorHandle *srcRt, R_RT_ColorHandle *scopeBufferRt, R_RT_ColorHandle *srcReticleRt)
{
  int v12; 
  bool v13; 
  GfxCmdBufState *state; 
  const R_RT_Surface *Surface; 
  unsigned int height; 
  const R_RT_Surface *v17; 
  GfxCmdBufContext v18; 
  bool IsValid; 
  R_RT_Handle v21; 
  __m256i v23; 
  R_RT_Handle v24; 
  GfxCmdBufState *v25; 
  bool fmt; 
  R_RT_Handle v27; 
  R_RT_Handle v28; 
  R_RT_ColorHandle *v29; 
  R_RT_ColorHandle *v30; 
  R_RT_Handle v31; 
  R_RT_Handle v32; 
  R_RT_Handle v33; 
  __m256i v34; 
  R_RT_Group v35; 
  R_RT_Handle v36; 
  R_RT_Group v37; 

  v30 = srcRt;
  v29 = scopeBufferRt;
  v12 = 1 - shellshockBufferIndex[viewInfo->clientIndex];
  v13 = viewInfo->shellShock.capture == 0;
  v36 = (R_RT_Handle)srcShellshockRts[shellshockBufferIndex[viewInfo->clientIndex]];
  v31 = (R_RT_Handle)srcShellshockRts[v12];
  v27 = v31;
  if ( v13 )
    goto LABEL_17;
  if ( !v36.m_surfaceID )
  {
    v13 = v36.m_tracking.m_allocCounter == 0;
LABEL_6:
    if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    goto LABEL_17;
  }
  R_RT_Handle::GetSurface(&v36);
  if ( !v31.m_surfaceID )
  {
    v13 = v27.m_tracking.m_allocCounter == 0;
    goto LABEL_6;
  }
  R_RT_Handle::GetSurface(&v27);
  state = gfxContext->state;
  v28 = v31;
  R_HW_AddResourceTransition(state, &v28, 0xFFFFFFFF, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_RENDER_TARGET, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_FlushResourceTransitions(gfxContext->state);
  *(_QWORD *)&v36.m_surfaceID = 0i64;
  v36.m_tracking.m_allocCounter = R_RT_Handle::GetSurface(&v27)->m_image.m_base.width;
  Surface = R_RT_Handle::GetSurface(&v27);
  v28 = v31;
  *(&v36.m_tracking.m_allocCounter + 1) = Surface->m_image.m_base.height;
  height = R_RT_Handle::GetSurface(&v28)->m_image.m_base.height;
  v17 = R_RT_Handle::GetSurface(&v28);
  R_SetRenderTargetSize(gfxContext->source, v17->m_image.m_base.width, height, GFX_USE_VIEWPORT_FOR_VIEW);
  v18 = *gfxContext;
  v27 = v31;
  R_RT_Handle::GetSurface(&v27);
  v35.m_colorRtCount = 1;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  v28.m_surfaceID = 0;
  v28.m_tracking.m_allocCounter = 0;
  *(_OWORD *)&v28.m_tracking.m_name = _XMM0;
  v32 = v27;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v32);
  }
  else
  {
    if ( v27.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 442, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
      __debugbreak();
  }
  v35.m_colorRts[0] = (R_RT_ColorHandle)v27;
  v35.m_depthRt = (R_RT_DepthHandle)v28;
  v37 = v35;
  *(GfxCmdBufContext *)&v27.m_surfaceID = v18;
  R_SetRenderTargetsInternal((GfxCmdBufContext *)&v27, &v37, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_composite_postfx.cpp(332)");
  IsValid = R_RT_Handle::IsValid(srcReticleRt);
  fmt = viewInfo->shellShock.blendCapture;
  *(GfxCmdBufContext *)&v27.m_surfaceID = v18;
  R_CompositePostfx_SetConstants((GfxCmdBufContext *)&v27, viewInfo, data, 0, fmt, 0, IsValid);
  v21 = srcReticleRt->R_RT_Handle;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v28.m_tracking.m_name = _XMM0;
  v32 = v21;
  v23 = *(__m256i *)v29;
  v28.m_surfaceID = 0;
  v28.m_tracking.m_allocCounter = 0;
  v24 = v30->R_RT_Handle;
  v34 = v23;
  v33 = v24;
  *(GfxCmdBufContext *)&v27.m_surfaceID = v18;
  R_CompositePostfx_Apply((GfxCmdBufContext *)&v27, viewInfo, (const GfxViewport *)&v36, (R_RT_ColorHandle *)&v33, (R_RT_ColorHandle *)&v34, srcShellshockRts, (R_RT_ColorHandle *)&v28, (R_RT_ColorHandle *)&v32);
  v25 = gfxContext->state;
  v33 = v31;
  R_HW_AddResourceTransition(v25, &v33, 0xFFFFFFFF, D3D12_RESOURCE_STATE_RENDER_TARGET, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_FlushResourceTransitions(gfxContext->state);
LABEL_17:
  shellshockBufferIndex[viewInfo->clientIndex] = v12;
}

/*
==============
R_CompositePostfx_SetConstants
==============
*/
void R_CompositePostfx_SetConstants(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxBackEndData *data, bool applyFilmGrain, bool shellshockValid, bool overlayValid, bool reticleValid)
{
  int v7; 
  int v11; 
  GfxShellShockBlendType blend; 
  int v13; 
  int v14; 
  _WORD *v15; 
  int v16; 
  GfxCmdBufSourceState *source; 
  float whiteFactor; 
  float grabFactor; 
  GfxCmdBufContext v20; 
  GfxCmdBufContext v21[2]; 
  float v22; 

  v7 = 0;
  if ( applyFilmGrain )
    v7 = 4;
  v11 = 4 * applyFilmGrain;
  v22 = *(float *)&v7;
  if ( R_Lens_GetEnabled(viewInfo) )
  {
    v21[0] = *gfxContext;
    if ( !R_Lens_SetConstants(v21, viewInfo, data) )
    {
      v11 |= 1u;
      v22 = *(float *)&v11;
    }
  }
  if ( R_Lens_GetScopeEnabled(viewInfo) )
  {
    v11 |= 2u;
    v22 = *(float *)&v11;
  }
  if ( shellshockValid )
  {
    blend = viewInfo->shellShock.blend;
    if ( blend == GFX_SHELLSHOCK_BLEND_MIX )
      LODWORD(v22) = v11 | 8;
    v13 = v11 | 8;
    if ( blend != GFX_SHELLSHOCK_BLEND_MIX )
      v13 = v11;
    v11 = v13;
    if ( blend == GFX_SHELLSHOCK_BLEND_SCREEN )
    {
      v11 = v13 | 0x10;
      LODWORD(v22) = v13 | 0x10;
    }
  }
  v14 = v11;
  if ( overlayValid && !Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_disableCompositeOverlays, "r_disableCompositeOverlays") )
  {
    v15 = viewInfo->displayCmds[6];
    if ( v15 )
    {
      if ( *v15 )
      {
        v14 = v11 | 0x20;
        LODWORD(v22) = v11 | 0x20;
      }
    }
  }
  v16 = v14;
  if ( viewInfo->displayCmds[7] && !Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_disableCompositePixelgrid, "r_disableCompositePixelgrid") )
  {
    v16 = v14 | 0x40;
    LODWORD(v22) = v14 | 0x40;
    v21[0] = *gfxContext;
    R_CompositePostfx_SetConstants_Pixelgrid(v21, viewInfo, data);
  }
  if ( viewInfo->displayCmds[5] && reticleValid && !Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_disableReticleComposite, "r_disableReticleComposite") )
    LODWORD(v22) = v16 | 0x80;
  source = gfxContext->source;
  whiteFactor = viewInfo->shellShock.whiteFactor;
  grabFactor = viewInfo->shellShock.grabFactor;
  source->input.consts[142].v[0] = v22;
  v20 = *gfxContext;
  source->input.consts[142].v[1] = grabFactor;
  source->input.consts[142].v[2] = whiteFactor;
  source->input.consts[142].v[3] = 0.0;
  ++source->constVersions[142];
  v21[0] = v20;
  RB_SetUIColorimetryParams(v21);
}

/*
==============
R_CompositePostfx_SetConstants_Pixelgrid
==============
*/
void R_CompositePostfx_SetConstants_Pixelgrid(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  float *v4; 
  char v5; 
  __int128 v10; 
  __int128 v11; 
  __int16 v13; 
  __int128 v15; 
  float v16; 
  unsigned __int8 v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  __int128 v23; 
  float v24; 
  float v25; 
  GfxColorimetry DisplayColorimetry; 
  float v27; 
  int v28; 
  double v30; 
  float v31; 
  float v32; 
  float v33; 
  vec3_t *v34; 
  vec3_t *v43; 
  __int128 v44; 
  __int128 v46; 
  vec3_t *v48; 
  double v49; 
  vec3_t *v50; 
  __int64 v51; 
  __int64 v52; 
  __int128 v53; 
  __int64 *v54; 
  __int64 v55; 
  GfxBlendStateBits v56; 
  BlendColor *v57; 
  double v58; 
  BlendColor *v59; 
  double v60; 
  GfxCmdBufSourceState *source; 
  float v62; 
  float v63; 
  float v64; 
  float v65; 
  float v66; 
  float v67; 
  float v68; 
  float v69; 
  float v70; 
  float v71; 
  float v72; 
  float v73; 
  float v74; 
  float v75; 
  float v76; 
  vec3_t v77; 
  float v78; 
  float v79; 
  double v80; 
  float v81; 
  _BYTE v82[24]; 
  __int128 v83; 
  __int128 v84; 
  double v85; 
  __int128 v86; 
  double v87; 
  double v88; 
  double v89; 
  vec4_t v90; 
  vec3_t v91; 
  unsigned int v92; 
  vec3_t v93; 
  vec3_t v94; 
  __int128 v95; 
  float v96; 
  BlendColor v97; 
  BlendColor v98; 
  vec3_t v99; 
  vec3_t v100; 
  vec3_t v101; 
  vec3_t v102; 
  BlendColor v103; 
  vec3_t v104; 
  __int64 v105; 
  float v106; 
  __int128 v107; 

  _XMM4 = LODWORD(FLOAT_1_0);
  v4 = (float *)viewInfo->displayCmds[7];
  v5 = 0;
  v83 = 0i64;
  _XMM3 = 0i64;
  __asm { vunpcklps xmm0, xmm4, xmm4 }
  *(double *)&v82[12] = *(double *)&_XMM0;
  *(_DWORD *)&v82[8] = 0;
  *(float *)&v82[20] = FLOAT_1_0;
  v88 = *(double *)&v82[16];
  v85 = *(double *)&v82[16];
  __asm { vunpcklps xmm2, xmm3, xmm3 }
  *((_QWORD *)&v11 + 1) = *(_QWORD *)&v82[8];
  *(double *)&v11 = *(double *)&_XMM2;
  v10 = v11;
  *(_QWORD *)v82 = _XMM2;
  *(_DWORD *)&v82[8] = 0;
  __asm { vunpcklps xmm0, xmm4, xmm4 }
  *(double *)&v82[12] = *(double *)&_XMM0;
  v77.v[2] = FLOAT_1_0;
  *(float *)&v82[20] = FLOAT_1_0;
  v13 = *(_WORD *)v4;
  __asm { vunpcklps xmm2, xmm3, xmm3 }
  *((_QWORD *)&v11 + 1) = *(_QWORD *)&v82[8];
  *(double *)&v11 = *(double *)&_XMM2;
  v15 = v11;
  v89 = *(double *)&v82[16];
  v87 = *(double *)&v82[16];
  v78 = 0.0;
  v95 = v10;
  v84 = v10;
  *(_OWORD *)v82 = v11;
  v86 = v11;
  if ( v13 )
  {
    v74 = *((float *)&v83 + 3);
    v16 = *(float *)&v83;
    v75 = *((float *)&v83 + 2);
    v76 = *((float *)&v83 + 1);
    v79 = *(float *)&v83;
    while ( v13 != 16 )
    {
      if ( v13 == 38 )
      {
        v17 = *((_BYTE *)v4 + 4);
        if ( v17 )
        {
          v5 = 1;
          if ( v16 != *(float *)&_XMM3 )
          {
            R_WarnOncePerFrame(R_WARN_RENDER_COMMAND_COMPOSITE_ERROR, "Cannot have more than one PixelGrid in pixelgrid overlay list. Check LUI for overlapping RC_SET_UI_PIXEL_GRID / LUI_Render_ApplyPixelGrid commands. Last issued will take priority.", data);
            v17 = *((_BYTE *)v4 + 4);
          }
          v18 = v4[2];
          v16 = (float)v17;
          v19 = (float)*((unsigned __int8 *)v4 + 5);
          v20 = (float)*((unsigned __int8 *)v4 + 6);
          v21 = (float)*((unsigned __int8 *)v4 + 7);
          v74 = v21;
          v79 = v16;
          v76 = v19;
          v75 = v20;
          v78 = v18;
          goto LABEL_29;
        }
        v5 = 0;
      }
LABEL_28:
      v21 = v74;
      v20 = v75;
      v19 = v76;
LABEL_29:
      v4 = (float *)((char *)v4 + *((unsigned __int16 *)v4 + 1));
      LODWORD(_XMM3) = 0;
      v13 = *(_WORD *)v4;
      if ( !*(_WORD *)v4 )
        goto LABEL_32;
    }
    v23 = 0i64;
    *(float *)&v23 = (float)*((unsigned __int8 *)v4 + 64) * 0.0039215689;
    _XMM7 = v23;
    v24 = (float)*((unsigned __int8 *)v4 + 66) * 0.0039215689;
    v25 = (float)*((unsigned __int8 *)v4 + 67) * 0.0039215689;
    *((float *)&v107 + 3) = v25;
    *((float *)&v107 + 2) = v24;
    DisplayColorimetry = R_GetDisplayColorimetry();
    v27 = *((float *)&v107 + 2);
    v28 = DisplayColorimetry;
    __asm { vunpcklps xmm0, xmm7, xmm6 }
    v30 = *(double *)&_XMM0;
    *(double *)v104.v = *(double *)&_XMM0;
    v104.v[2] = *((float *)&v107 + 2);
    if ( *(float *)&v23 > 0.039280001 )
      v31 = powf_0((float)(*(float *)&v23 * 0.94786733) + 0.052132703, 2.4000001);
    else
      v31 = *(float *)&v23 * 0.077399381;
    v104.v[0] = v31;
    if ( v104.v[1] > 0.039280001 )
      v32 = powf_0((float)(v104.v[1] * 0.94786733) + 0.052132703, 2.4000001);
    else
      v32 = v104.v[1] * 0.077399381;
    v104.v[1] = v32;
    if ( v104.v[2] > 0.039280001 )
      v33 = powf_0((float)(v104.v[2] * 0.94786733) + 0.052132703, 2.4000001);
    else
      v33 = v104.v[2] * 0.077399381;
    v104.v[2] = v33;
    if ( v28 >= 0 )
    {
      if ( v28 <= 2 )
      {
        v77 = v104;
        v50 = SrgbGammaFromLinearFast(&v102, &v77);
        v49 = *(double *)v50->v;
        v27 = v50->v[2];
        v80 = *(double *)v50->v;
        goto LABEL_25;
      }
      if ( v28 == 3 )
      {
        v91 = v104;
        v34 = SrgbGammaFromLinearFast(&v99, &v91);
        _XMM6 = (__m128)*(unsigned __int64 *)v34->v;
        __asm { vmaxss  xmm0, xmm6, cs:__real@00000000; X }
        v92 = LODWORD(v34->v[2]);
        *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, 2.4000001);
        _XMM1 = _mm_shuffle_ps(_XMM6, _XMM6, 85);
        _XMM7 = _XMM0;
        __asm { vmaxss  xmm0, xmm1, cs:__real@00000000; X }
        powf_0(*(float *)&_XMM0, 2.4000001);
        _XMM1 = v92;
        __asm { vmaxss  xmm0, xmm1, cs:__real@00000000; X }
        v96 = powf_0(*(float *)&_XMM0, 2.4000001);
        __asm { vunpcklps xmm0, xmm7, xmm6 }
        v93.v[2] = v96;
        *(double *)v93.v = *(double *)&_XMM0;
        v43 = Primaries_BT2020FromBT709(&v100, &v93);
        v44 = *(unsigned __int64 *)v43->v;
        v106 = v43->v[2];
        *(double *)&_XMM0 = R_GetDisplayHdrUiMaxLuminance();
        v46 = v44;
        *(float *)&v46 = *(float *)&v44 * *(float *)&_XMM0;
        _XMM4 = v46;
        v105 = *(__int64 *)&v44;
        v106 = *(float *)&_XMM0 * v106;
        __asm { vunpcklps xmm1, xmm4, xmm3 }
        v94.v[2] = v106;
        *(double *)v94.v = *(double *)&_XMM1;
        v48 = PQFromLinear(&v101, &v94);
        v49 = *(double *)v48->v;
        v27 = v48->v[2];
        v80 = *(double *)v48->v;
LABEL_25:
        v51 = *((_QWORD *)v4 + 1);
        *((float *)&v107 + 2) = v27;
        v52 = *(_QWORD *)(v51 + 64);
        *((_QWORD *)&v53 + 1) = *((_QWORD *)&v107 + 1);
        *(double *)&v53 = v49;
        v107 = v53;
        v54 = *(__int64 **)(v52 + 56);
        *(_OWORD *)v82 = v53;
        v81 = v27;
        v55 = *v54;
        *(_OWORD *)v97.add.v = v95;
        *(double *)&v97.mul.y = v88;
        v56 = *(_QWORD *)(v55 + 96);
        v57 = BlendColor_ColorBlend(&v103, &v97, (vec4_t *)v82, v56);
        v58 = *(double *)&v57->mul.y;
        v95 = *(_OWORD *)v57->add.v;
        v84 = v95;
        v88 = v58;
        v85 = v58;
        if ( v5 )
          v25 = (float)(1.0 - v78) * v25;
        v90.v[0] = *(float *)&v80;
        v90.v[2] = v81;
        *(double *)&v98.mul.y = v89;
        v90.v[1] = *((float *)&v80 + 1);
        v90.v[3] = v25;
        *(_OWORD *)v98.add.v = v15;
        v59 = BlendColor_ColorBlend(&v103, &v98, &v90, v56);
        v16 = v79;
        v60 = *(double *)&v59->mul.y;
        v15 = *(_OWORD *)v59->add.v;
        v86 = *(_OWORD *)v59->add.v;
        v89 = v60;
        v87 = v60;
        goto LABEL_28;
      }
    }
    v49 = v30;
    v80 = v30;
    goto LABEL_25;
  }
  v21 = *((float *)&v83 + 3);
  v20 = *((float *)&v83 + 2);
  v19 = *((float *)&v83 + 1);
  v16 = *(float *)&v83;
LABEL_32:
  source = gfxContext->source;
  v62 = *((float *)&v84 + 3);
  source->input.consts[63].v[0] = v16;
  v63 = *(float *)&v84;
  source->input.consts[63].v[1] = v19;
  source->input.consts[63].v[2] = v20;
  source->input.consts[63].v[3] = v21;
  ++source->constVersions[63];
  source->input.consts[64].v[0] = v63;
  v64 = *(float *)&v86;
  source->input.consts[64].v[1] = v62;
  v65 = *((float *)&v86 + 3);
  source->input.consts[64].v[2] = v64;
  v66 = *((float *)&v84 + 1);
  source->input.consts[64].v[3] = v65;
  ++source->constVersions[64];
  v67 = *(float *)&v85;
  source->input.consts[65].v[0] = v66;
  v68 = *((float *)&v86 + 1);
  source->input.consts[65].v[1] = v67;
  v69 = *(float *)&v87;
  source->input.consts[65].v[2] = v68;
  v70 = *((float *)&v84 + 2);
  source->input.consts[65].v[3] = v69;
  ++source->constVersions[65];
  v71 = *((float *)&v85 + 1);
  source->input.consts[66].v[0] = v70;
  v72 = *((float *)&v86 + 2);
  source->input.consts[66].v[1] = v71;
  v73 = *((float *)&v87 + 1);
  source->input.consts[66].v[2] = v72;
  source->input.consts[66].v[3] = v73;
  ++source->constVersions[66];
}

/*
==============
SrgbGammaFromLinearFast
==============
*/
vec3_t *SrgbGammaFromLinearFast(vec3_t *result, vec3_t *linearValues)
{
  double v4; 
  double v5; 
  double v6; 
  double v7; 
  double v8; 
  double v9; 
  vec3_t *v10; 

  v4 = I_fclamp(linearValues->v[0], 0.0, 1.0);
  *(float *)&v4 = powf_0(*(float *)&v4, 0.41666666);
  v5 = I_fclamp((float)(*(float *)&v4 * 1.0549999) - 0.055, 0.0, 1.0);
  result->v[0] = *(float *)&v5;
  v6 = I_fclamp(linearValues->v[1], 0.0, 1.0);
  *(float *)&v6 = powf_0(*(float *)&v6, 0.41666666);
  v7 = I_fclamp((float)(*(float *)&v6 * 1.0549999) - 0.055, 0.0, 1.0);
  result->v[1] = *(float *)&v7;
  v8 = I_fclamp(linearValues->v[2], 0.0, 1.0);
  *(float *)&v8 = powf_0(*(float *)&v8, 0.41666666);
  v9 = I_fclamp((float)(*(float *)&v8 * 1.0549999) - 0.055, 0.0, 1.0);
  v10 = result;
  result->v[2] = *(float *)&v9;
  return v10;
}

