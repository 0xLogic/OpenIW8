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
  BlendColor *v76; 
  char v83; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  _RDI = blendColor;
  __asm { vmovaps xmmword ptr [rax-28h], xmm7 }
  _RBX = result;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
  }
  if ( blendState == 34904 )
  {
    __asm
    {
      vmovss  xmm3, cs:__real@3f800000
      vmovups xmm4, xmmword ptr [r8]
      vmovups xmm9, xmmword ptr [rdx]
      vmovsd  xmm10, qword ptr [rdx+10h]
      vshufps xmm2, xmm4, xmm4, 0FFh
      vsubss  xmm0, xmm4, xmm3
      vmulss  xmm0, xmm0, xmm2
      vaddss  xmm7, xmm0, xmm3
      vshufps xmm1, xmm4, xmm4, 55h ; 'U'
      vsubss  xmm0, xmm1, xmm3
      vmulss  xmm1, xmm0, xmm2
      vaddss  xmm5, xmm1, xmm3
      vshufps xmm4, xmm4, xmm4, 0AAh ; 'ª'
      vsubss  xmm0, xmm4, xmm3
      vmulss  xmm1, xmm0, xmm2
      vshufps xmm0, xmm9, xmm9, 55h ; 'U'
      vmulss  xmm4, xmm0, xmm5
      vaddss  xmm6, xmm1, xmm3
      vshufps xmm1, xmm9, xmm9, 0AAh ; 'ª'
      vmulss  xmm8, xmm9, xmm7
      vmulss  xmm3, xmm1, xmm6
      vinsertps xmm8, xmm8, xmm4, 10h
      vshufps xmm0, xmm10, xmm10, 55h ; 'U'
      vshufps xmm9, xmm9, xmm9, 0FFh
      vinsertps xmm8, xmm8, xmm3, 20h ; ' '
      vmulss  xmm2, xmm9, xmm7
      vmulss  xmm5, xmm10, xmm5
      vmulss  xmm1, xmm0, xmm6
      vinsertps xmm8, xmm8, xmm2, 30h ; '0'
      vunpcklps xmm0, xmm5, xmm1
      vmovups xmmword ptr [rcx], xmm8
      vmovsd  qword ptr [rcx+10h], xmm0
    }
  }
  else if ( blendState == 163920 )
  {
    __asm
    {
      vmovups xmm8, xmmword ptr [r8]
      vmovups xmm10, xmmword ptr [rdx]
      vmovsd  xmm1, qword ptr [rdx+10h]
      vmovss  xmm0, cs:__real@3f800000
      vshufps xmm6, xmm8, xmm8, 0FFh
      vsubss  xmm7, xmm0, xmm6
      vshufps xmm0, xmm10, xmm10, 0FFh
      vmulss  xmm3, xmm0, xmm7
      vshufps xmm0, xmm1, xmm1, 55h ; 'U'
      vmulss  xmm9, xmm0, xmm7
      vmulss  xmm0, xmm10, xmm7
      vshufps xmm3, xmm3, xmm3, 0
      vmovaps [rsp+0B8h+var_68], xmm11
      vmulss  xmm11, xmm1, xmm7
      vmulss  xmm1, xmm8, xmm6
      vaddss  xmm5, xmm1, xmm0
      vshufps xmm1, xmm8, xmm8, 55h ; 'U'
      vshufps xmm0, xmm10, xmm10, 55h ; 'U'
      vmulss  xmm2, xmm1, xmm6
      vmulss  xmm0, xmm0, xmm7
      vaddss  xmm4, xmm2, xmm0
      vmovss  xmm3, xmm3, xmm5
      vshufps xmm8, xmm8, xmm8, 0AAh ; 'ª'
      vshufps xmm10, xmm10, xmm10, 0AAh ; 'ª'
      vmulss  xmm0, xmm10, xmm7
      vmulss  xmm1, xmm8, xmm6
      vaddss  xmm2, xmm1, xmm0
      vunpcklps xmm0, xmm11, xmm9
      vmovaps xmm11, [rsp+0B8h+var_68]
      vinsertps xmm3, xmm3, xmm4, 10h
      vinsertps xmm3, xmm3, xmm2, 20h ; ' '
      vmovups xmmword ptr [rcx], xmm3
      vmovsd  qword ptr [rcx+10h], xmm0
    }
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_composite_postfx.cpp", 151, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "blendmode not supported") )
      __debugbreak();
    __asm
    {
      vmovups xmm0, xmmword ptr [rdi]
      vmovsd  xmm1, qword ptr [rdi+10h]
      vmovups xmmword ptr [rbx], xmm0
      vmovsd  qword ptr [rbx+10h], xmm1
    }
  }
  _R11 = &v83;
  v76 = _RBX;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
  return v76;
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
  R_RT_Image *v18; 
  R_RT_Image *v19; 
  R_RT_Image *v20; 
  GfxCmdBufSourceState *source; 
  GfxCmdBufInput *p_input; 
  GfxCmdBufSourceState *v23; 
  GfxCmdBufInput *v24; 
  GfxCmdBufSourceState *v25; 
  GfxCmdBufInput *v26; 
  GfxCmdBufSourceState *v27; 
  GfxCmdBufInput *v28; 
  GfxCmdBufSourceState *v29; 
  GfxCmdBufInput *v30; 
  GfxCmdBufSourceState *v38; 
  GfxCmdBufInput *v39; 
  GfxCmdBufSourceState *v40; 
  GfxCmdBufInput *v41; 
  GfxCmdBufSourceState *v42; 
  GfxCmdBufInput *v43; 
  GfxCmdBufSourceState *v44; 
  GfxCmdBufInput *v45; 
  GfxCmdBufSourceState *v46; 
  GfxCmdBufInput *v47; 
  float fmt; 
  float v49; 
  float v50; 
  float v51; 
  float v52; 
  float v53; 
  float v54; 
  float v55; 
  R_RT_Handle v56; 

  _RBX = gfxContext;
  _RAX = srcShellshockRts;
  _RDX = 32i64 * shellshockBufferIndex[viewInfo->clientIndex];
  __asm
  {
    vmovups ymm0, ymmword ptr [rdx+rax]
    vmovups ymmword ptr [rsp+0B8h+var_48.m_surfaceID], ymm0
  }
  p_m_image = &R_RT_Handle::GetSurface(srcRt)->m_image;
  if ( R_RT_Handle::IsValid(srcScopeBufferRt) )
    blackImage = &R_RT_Handle::GetSurface(srcScopeBufferRt)->m_image;
  else
    blackImage = (R_RT_Image *)rgp.blackImage;
  if ( v56.m_surfaceID )
  {
    R_RT_Handle::GetSurface(&v56);
    v18 = &R_RT_Handle::GetSurface(&v56)->m_image;
  }
  else
  {
    if ( v56.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    v18 = (R_RT_Image *)rgp.blackImage;
  }
  if ( R_RT_Handle::IsValid(srcOverlayRt) )
    v19 = &R_RT_Handle::GetSurface(srcOverlayRt)->m_image;
  else
    v19 = (R_RT_Image *)rgp.blackImage;
  if ( R_RT_Handle::IsValid(srcReticleRt) )
    v20 = &R_RT_Handle::GetSurface(srcReticleRt)->m_image;
  else
    v20 = (R_RT_Image *)rgp.blackImage;
  source = _RBX->source;
  if ( !_RBX->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[4] = &p_m_image->m_base;
  v23 = _RBX->source;
  if ( !_RBX->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v24 = &v23->input;
  if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v24->codeImages[23] = &blackImage->m_base;
  v25 = _RBX->source;
  if ( !_RBX->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v26 = &v25->input;
  if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v26->codeImages[24] = &v18->m_base;
  v27 = _RBX->source;
  if ( !_RBX->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v28 = &v27->input;
  if ( !v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v28->codeImages[25] = &v19->m_base;
  v29 = _RBX->source;
  if ( !_RBX->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v30 = &v29->input;
  if ( !v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vxorps  xmm1, xmm1, xmm1
  }
  v30->codeImages[26] = &v20->m_base;
  __asm
  {
    vxorps  xmm3, xmm3, xmm3
    vcvtsi2ss xmm3, xmm3, rax
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, rax
    vmovups xmmword ptr [rsp+0B8h+var_48.m_surfaceID], xmm0
    vmovss  xmm0, cs:__real@3f800000
    vmovss  [rsp+0B8h+var_60], xmm0
    vmovss  [rsp+0B8h+var_68], xmm0
    vmovss  [rsp+0B8h+var_70], xmm1
    vmovss  [rsp+0B8h+var_78], xmm1
    vmovss  [rsp+0B8h+var_80], xmm3
    vmovss  [rsp+0B8h+var_88], xmm2
    vmovss  dword ptr [rsp+0B8h+var_90], xmm1
    vmovss  dword ptr [rsp+0B8h+fmt], xmm1
  }
  RB_ViewportFilterDirectInternal((GfxCmdBufContext *)&v56, rgp.compositePostfxMaterial, 0xFFFFFFFF, viewport, fmt, v49, v50, v51, v52, v53, v54, v55, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_composite_postfx.cpp(360)");
  v38 = _RBX->source;
  if ( !_RBX->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v39 = &v38->input;
  if ( !v39 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v39->codeImages[4] = NULL;
  v40 = _RBX->source;
  if ( !_RBX->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v41 = &v40->input;
  if ( !v41 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v41->codeImages[23] = NULL;
  v42 = _RBX->source;
  if ( !_RBX->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v43 = &v42->input;
  if ( !v43 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v43->codeImages[24] = NULL;
  v44 = _RBX->source;
  if ( !_RBX->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v45 = &v44->input;
  if ( !v45 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v46 = _RBX->source;
  v45->codeImages[25] = NULL;
  if ( !v46 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v47 = &v46->input;
  if ( !v47 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v47->codeImages[26] = NULL;
}

/*
==============
R_CompositePostfx_CaptureShellShock
==============
*/
void R_CompositePostfx_CaptureShellShock(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxBackEndData *data, R_RT_ColorHandle *srcShellshockRts, R_RT_ColorHandle *srcRt, R_RT_ColorHandle *scopeBufferRt, R_RT_ColorHandle *srcReticleRt)
{
  R_RT_ColorHandle *v11; 
  int v14; 
  bool v19; 
  CmdBufState *state; 
  const R_RT_Surface *Surface; 
  unsigned int height; 
  const R_RT_Surface *v25; 
  const char *v41; 
  bool IsValid; 
  CmdBufState *v51; 
  bool fmt; 
  R_RT_Handle v54; 
  R_RT_Handle v55; 
  R_RT_ColorHandle *v56; 
  R_RT_ColorHandle *v57; 
  __m256i v58; 
  R_RT_Handle v59; 
  R_RT_Handle v60; 
  R_RT_ColorHandle v61; 
  char v62; 
  const char *v65; 
  R_RT_Handle v66; 
  R_RT_Group v67; 

  _R15 = gfxContext;
  _R12 = srcReticleRt;
  v57 = srcRt;
  v11 = srcShellshockRts;
  v56 = scopeBufferRt;
  v14 = 1 - shellshockBufferIndex[viewInfo->clientIndex];
  _RAX = 32i64 * shellshockBufferIndex[viewInfo->clientIndex];
  __asm { vmovups ymm0, ymmword ptr [rax+r9] }
  _RAX = 32i64 * v14;
  v19 = viewInfo->shellShock.capture == 0;
  __asm
  {
    vmovups ymmword ptr [rbp+230h+var_158.m_surfaceID], ymm0
    vmovups ymm0, ymmword ptr [rax+r9]
    vmovups [rbp+230h+var_2A0], ymm0
    vmovups ymmword ptr [rsp+330h+var_2F0.m_surfaceID], ymm0
  }
  if ( v19 )
    goto LABEL_17;
  if ( !v66.m_surfaceID )
  {
    v19 = v66.m_tracking.m_allocCounter == 0;
LABEL_6:
    if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    goto LABEL_17;
  }
  R_RT_Handle::GetSurface(&v66);
  if ( !v58.m256i_i16[0] )
  {
    v19 = v54.m_tracking.m_allocCounter == 0;
    goto LABEL_6;
  }
  __asm { vmovaps [rsp+330h+var_50], xmm6 }
  R_RT_Handle::GetSurface(&v54);
  __asm { vmovups ymm0, [rbp+230h+var_2A0] }
  state = _R15->state;
  __asm { vmovups ymmword ptr [rsp+330h+var_2D0.m_surfaceID], ymm0 }
  R_HW_AddResourceTransition(state, &v55, 0xFFFFFFFF, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_RENDER_TARGET, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_FlushResourceTransitions(_R15->state);
  *(_QWORD *)&v66.m_surfaceID = 0i64;
  v66.m_tracking.m_allocCounter = R_RT_Handle::GetSurface(&v54)->m_image.m_base.width;
  Surface = R_RT_Handle::GetSurface(&v54);
  __asm
  {
    vmovups ymm0, [rbp+230h+var_2A0]
    vmovups ymmword ptr [rsp+330h+var_2D0.m_surfaceID], ymm0
  }
  *(&v66.m_tracking.m_allocCounter + 1) = Surface->m_image.m_base.height;
  height = R_RT_Handle::GetSurface(&v55)->m_image.m_base.height;
  v25 = R_RT_Handle::GetSurface(&v55);
  R_SetRenderTargetSize(_R15->source, v25->m_image.m_base.width, height, GFX_USE_VIEWPORT_FOR_VIEW);
  __asm
  {
    vmovups ymm0, [rbp+230h+var_2A0]
    vmovups xmm6, xmmword ptr [r15]
    vmovups ymmword ptr [rsp+330h+var_2F0.m_surfaceID], ymm0
  }
  R_RT_Handle::GetSurface(&v54);
  v62 = 1;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  v55.m_surfaceID = 0;
  v55.m_tracking.m_allocCounter = 0;
  __asm
  {
    vmovdqu xmmword ptr [rsp+330h+var_2D0.m_tracking.m_name], xmm0
    vmovups ymm0, ymmword ptr [rsp+330h+var_2F0.m_surfaceID]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rbp+230h+var_280.m_surfaceID], ymm0
  }
  if ( (_WORD)_EAX )
  {
    R_RT_Handle::GetSurface(&v59);
  }
  else
  {
    if ( v54.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 442, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
      __debugbreak();
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rsp+330h+var_2F0.m_surfaceID]
    vmovups [rbp+230h+var_218], ymm0
    vmovups ymm0, ymmword ptr [rsp+330h+var_2D0.m_surfaceID]
    vmovups [rbp+230h+var_198], ymm0
  }
  _RCX = &v67;
  _RAX = &v62;
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
  v41 = v65;
  __asm { vmovups ymmword ptr [rcx+0A0h], ymm0 }
  v67.m_vrsRt.m_tracking.m_location = v41;
  __asm { vmovdqa xmmword ptr [rsp+330h+var_2F0.m_surfaceID], xmm6 }
  R_SetRenderTargetsInternal((GfxCmdBufContext *)&v54, &v67, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_composite_postfx.cpp(332)");
  IsValid = R_RT_Handle::IsValid(srcReticleRt);
  fmt = viewInfo->shellShock.blendCapture;
  __asm { vmovups xmmword ptr [rsp+330h+var_2F0.m_surfaceID], xmm6 }
  R_CompositePostfx_SetConstants((GfxCmdBufContext *)&v54, viewInfo, data, 0, fmt, 0, IsValid);
  __asm { vmovups ymm1, ymmword ptr [r12] }
  _RAX = v56;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+330h+var_2D0.m_tracking.m_name], xmm0
    vmovups ymmword ptr [rbp+230h+var_280.m_surfaceID], ymm1
    vmovups ymm1, ymmword ptr [rax]
  }
  _RAX = v57;
  v55.m_surfaceID = 0;
  v55.m_tracking.m_allocCounter = 0;
  __asm
  {
    vmovups ymm0, ymmword ptr [rsp+330h+var_2D0.m_surfaceID]
    vmovups ymmword ptr [rsp+330h+var_2D0.m_surfaceID], ymm0
    vmovups ymm0, ymmword ptr [rax]
    vmovups [rbp+230h+var_240], ymm1
    vmovups [rbp+230h+var_260], ymm0
    vmovups xmmword ptr [rsp+330h+var_2F0.m_surfaceID], xmm6
  }
  R_CompositePostfx_Apply((GfxCmdBufContext *)&v54, viewInfo, (const GfxViewport *)&v66, (R_RT_ColorHandle *)&v60, &v61, v11, (R_RT_ColorHandle *)&v55, (R_RT_ColorHandle *)&v59);
  __asm { vmovups ymm0, [rbp+230h+var_2A0] }
  v51 = _R15->state;
  __asm { vmovups [rbp+230h+var_260], ymm0 }
  R_HW_AddResourceTransition(v51, &v60, 0xFFFFFFFF, D3D12_RESOURCE_STATE_RENDER_TARGET, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_FlushResourceTransitions(_R15->state);
  __asm { vmovaps xmm6, [rsp+330h+var_50] }
LABEL_17:
  shellshockBufferIndex[viewInfo->clientIndex] = v14;
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
  int v14; 
  int v15; 
  _WORD *v16; 
  int v17; 
  GfxCmdBufContext v24[2]; 
  int v25; 

  v7 = 0;
  _R14 = gfxContext;
  if ( applyFilmGrain )
    v7 = 4;
  _RSI = viewInfo;
  v11 = 4 * applyFilmGrain;
  v25 = v7;
  if ( R_Lens_GetEnabled(viewInfo) )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [r14]
      vmovups [rsp+48h+var_28], xmm0
    }
    if ( !R_Lens_SetConstants(v24, _RSI, data) )
    {
      v11 |= 1u;
      v25 = v11;
    }
  }
  if ( R_Lens_GetScopeEnabled(_RSI) )
  {
    v11 |= 2u;
    v25 = v11;
  }
  if ( shellshockValid )
  {
    blend = _RSI->shellShock.blend;
    if ( blend == GFX_SHELLSHOCK_BLEND_MIX )
      v25 = v11 | 8;
    v14 = v11 | 8;
    if ( blend != GFX_SHELLSHOCK_BLEND_MIX )
      v14 = v11;
    v11 = v14;
    if ( blend == GFX_SHELLSHOCK_BLEND_SCREEN )
    {
      v11 = v14 | 0x10;
      v25 = v14 | 0x10;
    }
  }
  v15 = v11;
  if ( overlayValid && !Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_disableCompositeOverlays, "r_disableCompositeOverlays") )
  {
    v16 = _RSI->displayCmds[6];
    if ( v16 )
    {
      if ( *v16 )
      {
        v15 = v11 | 0x20;
        v25 = v11 | 0x20;
      }
    }
  }
  v17 = v15;
  if ( _RSI->displayCmds[7] && !Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_disableCompositePixelgrid, "r_disableCompositePixelgrid") )
  {
    __asm { vmovups xmm0, xmmword ptr [r14] }
    v17 = v15 | 0x40;
    v25 = v15 | 0x40;
    __asm { vmovups [rsp+48h+var_28], xmm0 }
    R_CompositePostfx_SetConstants_Pixelgrid(v24, _RSI, data);
  }
  if ( _RSI->displayCmds[5] && reticleValid && !Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_disableReticleComposite, "r_disableReticleComposite") )
    v25 = v17 | 0x80;
  _RAX = _R14->source;
  __asm
  {
    vmovss  xmm2, dword ptr [rsi+6478h]
    vmovss  xmm1, dword ptr [rsi+6474h]
    vmovss  xmm0, [rsp+48h+arg_18]
    vmovss  dword ptr [rax+0FE0h], xmm0
    vmovups xmm0, xmmword ptr [r14]
    vmovss  dword ptr [rax+0FE4h], xmm1
    vmovss  dword ptr [rax+0FE8h], xmm2
  }
  _RAX->input.consts[142].v[3] = 0.0;
  ++_RAX->constVersions[142];
  __asm { vmovups [rsp+48h+var_28], xmm0 }
  RB_SetUIColorimetryParams(v24);
}

/*
==============
R_CompositePostfx_SetConstants_Pixelgrid
==============
*/

void __fastcall R_CompositePostfx_SetConstants_Pixelgrid(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxBackEndData *data, double _XMM3_8)
{
  char v18; 
  __int16 v31; 
  char v65; 
  char v66; 
  GfxColorimetry DisplayColorimetry; 
  int v68; 
  int v69; 
  __int64 v106; 
  __int64 v109; 
  __int64 *v112; 
  __int64 v114; 
  GfxBlendStateBits v115; 
  vec3_t v153; 
  int v157; 
  _BYTE v158[24]; 
  vec4_t v166; 
  vec3_t v167; 
  float v168; 
  vec3_t v169; 
  vec3_t v170; 
  float v172; 
  BlendColor v173; 
  BlendColor v174; 
  vec3_t v175; 
  vec3_t v176; 
  vec3_t v177; 
  vec3_t v178; 
  BlendColor v179; 
  float v181; 
  float v183; 
  __int128 v184; 
  char v192; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-28h], xmm6
    vmovaps xmmword ptr [r11-0B8h], xmm15
    vmovss  xmm4, cs:__real@3f800000
  }
  _RBX = (char *)viewInfo->displayCmds[7];
  v18 = 0;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovups [rbp+1D0h+var_250], xmm0
    vxorps  xmm3, xmm3, xmm3
    vunpcklps xmm0, xmm4, xmm4
    vmovsd  qword ptr [rsp+2D0h+var_264], xmm0
    vmovss  [rsp+2D0h+var_298], xmm3
  }
  *(float *)&v158[8] = v153.v[2];
  __asm
  {
    vmovups xmm6, [rsp+2D0h+var_278+8]
    vmovss  [rsp+2D0h+var_298], xmm4
  }
  *(float *)&v158[20] = v153.v[2];
  __asm
  {
    vmovsd  xmm0, qword ptr [rsp+70h]
    vmovsd  [rbp+1D0h+var_210], xmm0
    vmovsd  [rbp+1D0h+var_230], xmm0
    vunpcklps xmm2, xmm3, xmm3
    vmovsd  xmm6, xmm6, xmm2
    vmovups [rsp+2D0h+var_278+8], xmm6
  }
  *(_QWORD *)v158 = _RT0;
  __asm { vmovss  [rsp+2D0h+var_298], xmm3 }
  *(float *)&v158[8] = v153.v[2];
  __asm
  {
    vunpcklps xmm0, xmm4, xmm4
    vmovsd  qword ptr [rsp+2D0h+var_264], xmm0
    vmovups xmm15, [rsp+2D0h+var_278+8]
    vmovss  [rsp+2D0h+var_298], xmm4
  }
  *(float *)&v158[20] = v153.v[2];
  __asm { vmovsd  xmm0, qword ptr [rsp+70h] }
  v31 = *(_WORD *)_RBX;
  __asm
  {
    vunpcklps xmm2, xmm3, xmm3
    vmovsd  xmm15, xmm15, xmm2
    vmovsd  [rbp+1D0h+var_208], xmm0
    vmovsd  [rbp+1D0h+var_218], xmm0
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rsp+2D0h+var_290], xmm0
    vmovups [rbp+1D0h+var_1B0], xmm6
    vmovups [rbp+1D0h+var_240], xmm6
    vmovups [rsp+2D0h+var_278+8], xmm15
    vmovups [rbp+1D0h+var_228], xmm15
  }
  if ( !v31 )
  {
    __asm
    {
      vmovss  xmm2, dword ptr [rbp+1D0h+var_250+0Ch]
      vmovss  xmm4, dword ptr [rbp+1D0h+var_250+8]
      vmovss  xmm5, dword ptr [rbp+1D0h+var_250+4]
      vmovss  xmm0, dword ptr [rbp+1D0h+var_250]
    }
    goto LABEL_32;
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+1D0h+var_250+0Ch]
    vmovss  xmm1, dword ptr [rbp+1D0h+var_250+8]
    vmovss  xmm2, dword ptr [rbp+1D0h+var_250+4]
    vmovaps xmmword ptr [r11-58h], xmm9
    vmovss  xmm9, cs:__real@4019999a
    vmovaps xmmword ptr [r11-68h], xmm10
    vmovss  xmm10, cs:__real@3d9e8391
    vmovaps xmmword ptr [r11-78h], xmm11
    vmovss  xmm11, cs:__real@3f72a76f
    vmovaps xmmword ptr [r11-88h], xmm12
    vmovss  xmm12, cs:__real@3d55891a
    vmovaps xmmword ptr [r11-98h], xmm13
    vmovss  xmm13, cs:__real@3b808081
    vmovaps xmmword ptr [r11-0A8h], xmm14
    vmovss  xmm14, cs:__real@3d20e411
    vmovss  [rsp+2D0h+var_2B0], xmm0
    vmovss  xmm0, dword ptr [rbp+1D0h+var_250]
    vmovaps xmmword ptr [r11-38h], xmm7
    vmovaps xmmword ptr [r11-48h], xmm8
    vmovss  [rsp+2D0h+var_2AC], xmm1
    vmovss  dword ptr [rsp+2D0h+var_2A8], xmm2
    vmovss  dword ptr [rsp+2D0h+var_290+4], xmm0
  }
  do
  {
    if ( v31 == 16 )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm7, xmm0, xmm13
        vxorps  xmm1, xmm1, xmm1
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vcvtsi2ss xmm1, xmm1, eax
        vmulss  xmm6, xmm0, xmm13
        vmulss  xmm0, xmm1, xmm13
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vmulss  xmm8, xmm1, xmm13
        vmovss  [rbp+1D0h+var_C4], xmm8
        vmovss  [rbp+1D0h+var_C8], xmm0
      }
      DisplayColorimetry = R_GetDisplayColorimetry();
      __asm { vcomiss xmm7, xmm14 }
      v68 = DWORD2(v184);
      v69 = DisplayColorimetry;
      __asm
      {
        vunpcklps xmm0, xmm7, xmm6
        vmovaps xmm6, xmm0
        vmovsd  [rbp+1D0h+var_F8], xmm0
      }
      v181 = *((float *)&v184 + 2);
      if ( v65 | v66 )
      {
        __asm { vmulss  xmm0, xmm7, xmm10 }
      }
      else
      {
        __asm
        {
          vmulss  xmm0, xmm7, xmm11
          vaddss  xmm0, xmm0, xmm12; X
          vmovaps xmm1, xmm9; Y
        }
        *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      }
      __asm
      {
        vmovss  dword ptr [rbp+1D0h+var_F8], xmm0
        vmovss  xmm0, dword ptr [rbp+1D0h+var_F8+4]
        vcomiss xmm0, xmm14
      }
      if ( v65 | v66 )
      {
        __asm { vmulss  xmm0, xmm0, xmm10 }
      }
      else
      {
        __asm
        {
          vmulss  xmm0, xmm0, xmm11
          vaddss  xmm0, xmm0, xmm12; X
          vmovaps xmm1, xmm9; Y
        }
        *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      }
      __asm
      {
        vmovss  dword ptr [rbp+1D0h+var_F8+4], xmm0
        vmovss  xmm0, [rbp+1D0h+var_F0]
        vcomiss xmm0, xmm14
      }
      if ( v65 | v66 )
      {
        __asm { vmulss  xmm0, xmm0, xmm10 }
      }
      else
      {
        __asm
        {
          vmulss  xmm0, xmm0, xmm11
          vaddss  xmm0, xmm0, xmm12; X
          vmovaps xmm1, xmm9; Y
        }
        *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      }
      __asm { vmovss  [rbp+1D0h+var_F0], xmm0 }
      if ( v69 >= 0 )
      {
        if ( v69 <= 2 )
        {
          __asm { vmovsd  xmm0, [rbp+1D0h+var_F8] }
          v153.v[2] = v181;
          __asm { vmovsd  qword ptr [rsp+2D0h+var_2A0], xmm0 }
          _RAX = SrgbGammaFromLinearFast(&v178, &v153);
          __asm { vmovsd  xmm0, qword ptr [rax] }
          v68 = LODWORD(_RAX->v[2]);
          __asm { vmovsd  qword ptr [rsp+2D0h+var_288], xmm0 }
          goto LABEL_25;
        }
        if ( v69 == 3 )
        {
          __asm { vmovsd  xmm0, [rbp+1D0h+var_F8] }
          v167.v[2] = v181;
          __asm { vmovsd  [rbp+1D0h+var_1F0], xmm0 }
          _RAX = SrgbGammaFromLinearFast(&v175, &v167);
          __asm
          {
            vmovaps xmm1, xmm9; Y
            vmovsd  xmm6, qword ptr [rax]
            vmaxss  xmm0, xmm6, cs:__real@00000000; X
          }
          v168 = _RAX->v[2];
          *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
          __asm
          {
            vshufps xmm1, xmm6, xmm6, 55h ; 'U'
            vmovaps xmm7, xmm0
            vmaxss  xmm0, xmm1, cs:__real@00000000; X
            vmovaps xmm1, xmm9; Y
          }
          *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
          __asm
          {
            vmovss  xmm1, [rbp+1D0h+var_1D8]
            vmovaps xmm6, xmm0
            vmaxss  xmm0, xmm1, cs:__real@00000000; X
            vmovaps xmm1, xmm9; Y
          }
          *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
          __asm
          {
            vmovss  [rbp+1D0h+var_198], xmm0
            vunpcklps xmm0, xmm7, xmm6
          }
          v169.v[2] = v172;
          __asm { vmovsd  [rbp+1D0h+var_1D0], xmm0 }
          _RAX = Primaries_BT2020FromBT709(&v176, &v169);
          __asm { vmovsd  xmm6, qword ptr [rax] }
          v183 = _RAX->v[2];
          *(double *)&_XMM0 = R_GetDisplayHdrUiMaxLuminance();
          __asm
          {
            vmulss  xmm4, xmm6, xmm0
            vmovsd  [rbp+1D0h+var_E8], xmm6
            vmulss  xmm3, xmm0, dword ptr [rbp+1D0h+var_E8+4]
            vmulss  xmm0, xmm0, [rbp+1D0h+var_E0]
            vmovss  [rbp+1D0h+var_E0], xmm0
            vunpcklps xmm1, xmm4, xmm3
          }
          v170.v[2] = v183;
          __asm { vmovsd  [rbp+1D0h+var_1C0], xmm1 }
          _RAX = PQFromLinear(&v177, &v170);
          __asm { vmovsd  xmm0, qword ptr [rax] }
          v68 = LODWORD(_RAX->v[2]);
          __asm { vmovsd  qword ptr [rsp+2D0h+var_288], xmm0 }
LABEL_25:
          v106 = *((_QWORD *)_RBX + 1);
          __asm { vmovaps xmm1, xmm0 }
          DWORD2(v184) = v68;
          __asm { vmovups xmm0, xmmword ptr [rbp+100h] }
          v109 = *(_QWORD *)(v106 + 64);
          __asm
          {
            vmovsd  xmm0, xmm0, xmm1
            vmovups xmm1, [rbp+1D0h+var_1B0]
            vmovups xmmword ptr [rbp+100h], xmm0
          }
          v112 = *(__int64 **)(v109 + 56);
          __asm
          {
            vmovdqa [rsp+2D0h+var_278+8], xmm0
            vmovsd  xmm0, [rbp+1D0h+var_210]
          }
          v157 = v68;
          v114 = *v112;
          __asm
          {
            vmovups [rbp+1D0h+var_190], xmm1
            vmovsd  [rbp+1D0h+var_180], xmm0
          }
          v115 = *(_QWORD *)(v114 + 96);
          _RAX = BlendColor_ColorBlend(&v179, &v173, (vec4_t *)v158, v115);
          __asm
          {
            vmovups xmm0, xmmword ptr [rax]
            vmovsd  xmm6, qword ptr [rax+10h]
            vmovups [rbp+1D0h+var_1B0], xmm0
            vmovups [rbp+1D0h+var_240], xmm0
            vmovsd  [rbp+1D0h+var_210], xmm6
            vmovsd  [rbp+1D0h+var_230], xmm6
          }
          if ( v18 )
          {
            __asm
            {
              vmovss  xmm0, cs:__real@3f800000
              vsubss  xmm0, xmm0, dword ptr [rsp+2D0h+var_290]
              vmulss  xmm8, xmm0, xmm8
            }
          }
          __asm
          {
            vmovss  xmm0, [rsp+2D0h+var_288]
            vmovss  xmm1, [rsp+2D0h+var_284]
            vmovss  [rbp+1D0h+var_200], xmm0
            vmovss  xmm0, [rsp+2D0h+var_280]
            vmovss  [rbp+1D0h+var_1F8], xmm0
            vmovsd  xmm0, [rbp+1D0h+var_208]
            vmovsd  [rbp+1D0h+var_160], xmm0
            vmovss  [rbp+1D0h+var_1FC], xmm1
            vmovss  [rbp+1D0h+var_1F4], xmm8
            vmovups [rbp+1D0h+var_170], xmm15
          }
          _RAX = BlendColor_ColorBlend(&v179, &v174, &v166, v115);
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+2D0h+var_290+4]
            vmovsd  xmm1, qword ptr [rax+10h]
            vmovups xmm15, xmmword ptr [rax]
            vmovups [rbp+1D0h+var_228], xmm15
            vmovsd  [rbp+1D0h+var_208], xmm1
            vmovsd  [rbp+1D0h+var_218], xmm1
          }
          goto LABEL_28;
        }
      }
      __asm
      {
        vmovaps xmm0, xmm6
        vmovsd  qword ptr [rsp+2D0h+var_288], xmm6
      }
      goto LABEL_25;
    }
    if ( v31 != 38 )
      goto LABEL_28;
    if ( !_RBX[4] )
    {
      v18 = 0;
LABEL_28:
      __asm
      {
        vmovss  xmm2, [rsp+2D0h+var_2B0]
        vmovss  xmm4, [rsp+2D0h+var_2AC]
        vmovss  xmm5, dword ptr [rsp+2D0h+var_2A8]
      }
      goto LABEL_29;
    }
    __asm { vucomiss xmm0, xmm3 }
    v18 = 1;
    R_WarnOncePerFrame(R_WARN_RENDER_COMMAND_COMPOSITE_ERROR, "Cannot have more than one PixelGrid in pixelgrid overlay list. Check LUI for overlapping RC_SET_UI_PIXEL_GRID / LUI_Render_ApplyPixelGrid commands. Last issued will take priority.", data);
    __asm
    {
      vmovss  xmm1, dword ptr [rbx+8]
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vxorps  xmm5, xmm5, xmm5
      vcvtsi2ss xmm5, xmm5, eax
      vxorps  xmm4, xmm4, xmm4
      vcvtsi2ss xmm4, xmm4, eax
      vxorps  xmm2, xmm2, xmm2
      vcvtsi2ss xmm2, xmm2, eax
      vmovss  [rsp+2D0h+var_2B0], xmm2
      vmovss  dword ptr [rsp+2D0h+var_290+4], xmm0
      vmovss  dword ptr [rsp+2D0h+var_2A8], xmm5
      vmovss  [rsp+2D0h+var_2AC], xmm4
      vmovss  dword ptr [rsp+2D0h+var_290], xmm1
    }
LABEL_29:
    _RBX += *((unsigned __int16 *)_RBX + 1);
    __asm { vxorps  xmm3, xmm3, xmm3 }
    v31 = *(_WORD *)_RBX;
  }
  while ( *(_WORD *)_RBX );
  __asm
  {
    vmovaps xmm14, [rsp+2D0h+var_A8+8]
    vmovaps xmm13, [rsp+2D0h+var_98+8]
    vmovaps xmm12, [rsp+2D0h+var_88+8]
    vmovaps xmm11, [rsp+2D0h+var_78+8]
    vmovaps xmm10, [rsp+2D0h+var_68+8]
    vmovaps xmm9, [rsp+2D0h+var_58+8]
    vmovaps xmm8, [rsp+2D0h+var_48+8]
    vmovaps xmm7, xmmword ptr [rsp+2D0h+var_38+8]
  }
LABEL_32:
  _RAX = gfxContext->source;
  __asm
  {
    vmovss  xmm1, dword ptr [rbp+1D0h+var_240+0Ch]
    vmovss  dword ptr [rax+0AF0h], xmm0
    vmovss  xmm0, dword ptr [rbp+1D0h+var_240]
    vmovss  dword ptr [rax+0AF4h], xmm5
    vmovss  dword ptr [rax+0AF8h], xmm4
    vmovss  dword ptr [rax+0AFCh], xmm2
  }
  ++_RAX->constVersions[63];
  __asm
  {
    vmovss  dword ptr [rax+0B00h], xmm0
    vmovss  xmm0, dword ptr [rbp+1D0h+var_228]
    vmovss  dword ptr [rax+0B04h], xmm1
    vmovss  xmm1, dword ptr [rbp+1D0h+var_228+0Ch]
    vmovss  dword ptr [rax+0B08h], xmm0
    vmovss  xmm0, dword ptr [rbp+1D0h+var_240+4]
    vmovss  dword ptr [rax+0B0Ch], xmm1
  }
  ++_RAX->constVersions[64];
  __asm
  {
    vmovss  xmm1, dword ptr [rbp+1D0h+var_230]
    vmovss  dword ptr [rax+0B10h], xmm0
    vmovss  xmm0, dword ptr [rbp+1D0h+var_228+4]
    vmovss  dword ptr [rax+0B14h], xmm1
    vmovss  xmm1, dword ptr [rbp+1D0h+var_218]
    vmovss  dword ptr [rax+0B18h], xmm0
    vmovss  xmm0, dword ptr [rbp+1D0h+var_240+8]
    vmovss  dword ptr [rax+0B1Ch], xmm1
  }
  ++_RAX->constVersions[65];
  __asm
  {
    vmovss  xmm1, dword ptr [rbp+1D0h+var_230+4]
    vmovss  dword ptr [rax+0B20h], xmm0
    vmovss  xmm0, dword ptr [rbp+1D0h+var_228+8]
    vmovss  dword ptr [rax+0B24h], xmm1
    vmovss  xmm1, dword ptr [rbp+1D0h+var_218+4]
    vmovss  dword ptr [rax+0B28h], xmm0
    vmovss  dword ptr [rax+0B2Ch], xmm1
  }
  ++_RAX->constVersions[66];
  _R11 = &v192;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
SrgbGammaFromLinearFast
==============
*/
vec3_t *SrgbGammaFromLinearFast(vec3_t *result, vec3_t *linearValues)
{
  vec3_t *v31; 

  __asm
  {
    vmovss  xmm0, dword ptr [rdx]; val
    vmovaps [rsp+38h+var_18], xmm9
  }
  _RBX = linearValues;
  __asm
  {
    vmovss  xmm9, cs:__real@3f800000
    vmovaps xmm2, xmm9; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  _RDI = result;
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovss  xmm1, cs:__real@3ed55555; Y }
  *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@3f870a3d
    vsubss  xmm0, xmm1, cs:__real@3d6147ae; val
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm2, xmm9; max
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rdi], xmm0
    vmovss  xmm0, dword ptr [rbx+4]; val
    vmovaps xmm2, xmm9; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovss  xmm1, cs:__real@3ed55555; Y }
  *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@3f870a3d
    vsubss  xmm0, xmm1, cs:__real@3d6147ae; val
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm2, xmm9; max
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rdi+4], xmm0
    vmovss  xmm0, dword ptr [rbx+8]; val
    vmovaps xmm2, xmm9; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovss  xmm1, cs:__real@3ed55555; Y }
  *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmulss  xmm3, xmm0, cs:__real@3f870a3d
    vsubss  xmm0, xmm3, cs:__real@3d6147ae; val
    vmovaps xmm2, xmm9; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  v31 = _RDI;
  __asm
  {
    vmovaps xmm9, [rsp+38h+var_18]
    vmovss  dword ptr [rdi+8], xmm0
  }
  return v31;
}

