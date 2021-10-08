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
  R_RT_Image *p_m_image; 
  __int64 v26; 
  float fmt; 
  float v58; 
  float v59; 
  float v60; 
  float v61; 
  float v62; 
  float v63; 
  float v64; 
  R_RT_Handle v65; 
  R_RT_ColorHandle v66; 
  char v67; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovups ymm0, ymmword ptr [rdx]
    vmovaps xmmword ptr [rax-18h], xmm6
  }
  _R14 = gfxContext;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
  }
  _RSI = srcColorRt;
  __asm { vmovaps xmmword ptr [rax-58h], xmm10 }
  _RDI = dstColorRt;
  __asm { vmovups ymmword ptr [rsp+108h+var_98.m_surfaceID], ymm0 }
  height = R_RT_Handle::GetSurface(&v65)->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface(&v65);
  R_SetRenderTargetSize(_R14->source, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FULL);
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi]
    vmovups xmm1, xmmword ptr [r14]
    vmovups [rsp+108h+var_78], ymm0
    vmovups xmmword ptr [rsp+108h+var_98.m_surfaceID], xmm1
  }
  R_SetRenderTargetsInternal_ColorOnly((GfxCmdBufContext *)&v65, &v66, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_utils.cpp(40)");
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi]
    vmovups xmm10, xmmword ptr [r14]
    vmovups ymmword ptr [rsp+108h+var_98.m_surfaceID], ymm0
    vmovq   rbx, xmm10
  }
  p_m_image = &R_RT_Handle::GetSurface(&v65)->m_image;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v26 = _RBX + 1792;
  if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  *(_QWORD *)(v26 + 6176) = p_m_image;
  __asm
  {
    vxorps  xmm9, xmm9, xmm9
    vcvtsi2ss xmm9, xmm9, rax
    vxorps  xmm8, xmm8, xmm8
    vcvtsi2ss xmm8, xmm8, rax
  }
  R_RT_Handle::GetSurface(&v65);
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ecx
    vdivss  xmm7, xmm6, xmm0
  }
  R_RT_Handle::GetSurface(&v65);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm0, xmm0, ecx
    vdivss  xmm2, xmm6, xmm0
    vxorps  xmm0, xmm0, xmm0
    vmovdqa xmmword ptr [rsp+108h+var_98.m_surfaceID], xmm10
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm4, xmm0, xmm2
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm3, xmm0, xmm7
    vcvtsi2ss xmm1, xmm1, rdx
    vmovss  [rsp+108h+var_B0], xmm4
    vmovss  [rsp+108h+var_B8], xmm3
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, r8
    vmulss  xmm2, xmm1, xmm2
    vmovss  [rsp+108h+var_C0], xmm2
    vmulss  xmm1, xmm0, xmm7
    vmovss  [rsp+108h+var_C8], xmm1
    vmovss  [rsp+108h+var_D0], xmm8
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+108h+var_D8], xmm9
    vmovss  dword ptr [rsp+108h+var_E0], xmm0
    vmovss  dword ptr [rsp+108h+fmt], xmm0
  }
  RB_ViewportFilterDirectInternal((GfxCmdBufContext *)&v65, copyMaterial, 0xFFFFFFFF, dstViewport, fmt, v58, v59, v60, v61, v62, v63, v64, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_utils.cpp(33)");
  __asm { vmovups xmmword ptr [rsp+108h+var_98.m_surfaceID], xmm10 }
  R_UnbindRenderTarget((GfxCmdBufContext *)&v65);
  _R11 = &v67;
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
RB_CopyRT
==============
*/
void RB_CopyRT(GfxCmdBufContext *gfxContext, R_RT_ColorHandle *dstColorRt, R_RT_ColorHandle *srcColorRt, const GfxViewport *viewport, Material *copyMaterial)
{
  unsigned int height; 
  const R_RT_Surface *Surface; 
  GfxCmdBufSourceState *source; 
  R_RT_Image *p_m_image; 
  float fmt; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  R_RT_Handle v33; 
  R_RT_ColorHandle v34; 

  __asm { vmovups ymm0, ymmword ptr [rdx] }
  _R15 = gfxContext;
  __asm { vmovups ymmword ptr [rsp+0C8h+var_58.m_surfaceID], ymm0 }
  _RDI = dstColorRt;
  height = R_RT_Handle::GetSurface(&v33)->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface(&v33);
  source = _R15->source;
  R_SetRenderTargetSize(_R15->source, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FULL);
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi]
    vmovups xmm1, xmmword ptr [r15]
    vmovups [rsp+0C8h+var_38], ymm0
    vmovups xmmword ptr [rsp+0C8h+var_58.m_surfaceID], xmm1
  }
  R_SetRenderTargetsInternal_ColorOnly((GfxCmdBufContext *)&v33, &v34, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_utils.cpp(11)");
  p_m_image = &R_RT_Handle::GetSurface(srcColorRt)->m_image;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr [r15]
    vxorps  xmm1, xmm1, xmm1
  }
  source->input.codeImages[4] = &p_m_image->m_base;
  __asm
  {
    vxorps  xmm3, xmm3, xmm3
    vcvtsi2ss xmm3, xmm3, rax
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, rax
    vmovups xmmword ptr [rsp+0C8h+var_58.m_surfaceID], xmm0
    vmovss  xmm0, cs:__real@3f800000
    vmovss  [rsp+0C8h+var_70], xmm0
    vmovss  [rsp+0C8h+var_78], xmm0
    vmovss  [rsp+0C8h+var_80], xmm1
    vmovss  [rsp+0C8h+var_88], xmm1
    vmovss  [rsp+0C8h+var_90], xmm3
    vmovss  [rsp+0C8h+var_98], xmm2
    vmovss  dword ptr [rsp+0C8h+var_A0], xmm1
    vmovss  dword ptr [rsp+0C8h+fmt], xmm1
  }
  RB_ViewportFilterDirectInternal((GfxCmdBufContext *)&v33, copyMaterial, 0xFFFFFFFF, viewport, fmt, v26, v27, v28, v29, v30, v31, v32, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_utils.cpp(13)");
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
  float fmt; 
  float v50; 
  float v51; 
  float v52; 
  float v53; 
  float v54; 
  float v55; 
  float v56; 
  GfxCmdBufContext v57; 
  char v58; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-28h], xmm6 }
  _RSI = gfxContext;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
  }
  Surface = R_RT_Handle::GetSurface(srcColorRt);
  source = _RSI->source;
  p_m_image = &Surface->m_image;
  if ( !_RSI->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[4] = &p_m_image->m_base;
  __asm
  {
    vxorps  xmm9, xmm9, xmm9
    vcvtsi2ss xmm9, xmm9, rax
    vxorps  xmm8, xmm8, xmm8
    vcvtsi2ss xmm8, xmm8, rax
  }
  R_RT_Handle::GetSurface(srcColorRt);
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ecx
    vdivss  xmm7, xmm6, xmm0
  }
  R_RT_Handle::GetSurface(srcColorRt);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm0, xmm0, ecx
    vdivss  xmm2, xmm6, xmm0
    vmovups xmm0, xmmword ptr [rsi]
    vmovups [rsp+0D8h+var_68], xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm4, xmm0, xmm2
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm3, xmm0, xmm7
    vcvtsi2ss xmm1, xmm1, rcx
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rdx
    vmovss  [rsp+0D8h+var_80], xmm4
    vmovss  [rsp+0D8h+var_88], xmm3
    vmulss  xmm2, xmm1, xmm2
    vmovss  [rsp+0D8h+var_90], xmm2
    vmulss  xmm1, xmm0, xmm7
    vmovss  [rsp+0D8h+var_98], xmm1
    vmovss  [rsp+0D8h+var_A0], xmm8
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+0D8h+var_A8], xmm9
    vmovss  dword ptr [rsp+0D8h+var_B0], xmm0
    vmovss  dword ptr [rsp+0D8h+fmt], xmm0
  }
  RB_ViewportFilterDirectInternal(&v57, copyMaterial, 0xFFFFFFFF, dstViewport, fmt, v50, v51, v52, v53, v54, v55, v56, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_utils.cpp(33)");
  _R11 = &v58;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
}

