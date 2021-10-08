/*
==============
R_HudOutline_ShutdownConstBuffers
==============
*/

void R_HudOutline_ShutdownConstBuffers(void)
{
  ?R_HudOutline_ShutdownConstBuffers@@YAXXZ();
}

/*
==============
RB_ApplyHudOutline
==============
*/

void __fastcall RB_ApplyHudOutline(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_Group *activeGroup)
{
  ?RB_ApplyHudOutline@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@AEAUR_RT_Group@@@Z(gfxContext, viewInfo, activeGroup);
}

/*
==============
R_HudOutlineGenWorkgroups
==============
*/

void __fastcall R_HudOutlineGenWorkgroups(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxWrappedRWBuffer *dstTiles, const GfxWrappedRWBuffer *stencilMask, const GfxTexture *floatZFull, const GfxTexture *floatZEighthMipMin)
{
  ?R_HudOutlineGenWorkgroups@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@PEBUGfxWrappedRWBuffer@@2PEBUGfxTexture@@3@Z(computeState, viewInfo, dstTiles, stencilMask, floatZFull, floatZEighthMipMin);
}

/*
==============
R_ApplyHudOutlineCS
==============
*/

void __fastcall R_ApplyHudOutlineCS(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, R_RT_ColorHandle *dstRt, R_RT_ColorHandle *dstSmaaHudoutlineMask, R_RT_ColorHandle *entityVelocityRt, R_RT_ColorHandle *packedStencilRt, R_RT_ColorHandle *tangentFrameRt, const GfxWrappedBuffer *workgroups, const GfxWrappedBuffer *indirectArgs, R_RT_ColorHandle *floatZFull, bool vrsInlineResolve)
{
  ?R_ApplyHudOutlineCS@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@VR_RT_ColorHandle@@2222PEBUGfxWrappedBuffer@@32_N@Z(computeState, viewInfo, dstRt, dstSmaaHudoutlineMask, entityVelocityRt, packedStencilRt, tangentFrameRt, workgroups, indirectArgs, floatZFull, vrsInlineResolve);
}

/*
==============
R_ApplyHudOutline
==============
*/

void __fastcall R_ApplyHudOutline(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_ColorHandle *dstRt, R_RT_ColorHandle *entityVelocityRt, R_RT_ColorHandle *packedStencilRt, R_RT_ColorHandle *tangentFrameRt, R_RT_ColorHandle *lensDistortion, R_RT_ColorHandle *floatZFull, bool vrsInlineResolve)
{
  ?R_ApplyHudOutline@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@VR_RT_ColorHandle@@22222_N@Z(gfxContext, viewInfo, dstRt, entityVelocityRt, packedStencilRt, tangentFrameRt, lensDistortion, floatZFull, vrsInlineResolve);
}

/*
==============
R_HudOutlineWorkgroupArgs
==============
*/

void __fastcall R_HudOutlineWorkgroupArgs(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxWrappedRWBuffer *dstArgs, const GfxWrappedRWBuffer *tiles)
{
  ?R_HudOutlineWorkgroupArgs@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@PEBUGfxWrappedRWBuffer@@2@Z(computeState, viewInfo, dstArgs, tiles);
}

/*
==============
R_HudOutline_InitConstBuffers
==============
*/

void R_HudOutline_InitConstBuffers(void)
{
  ?R_HudOutline_InitConstBuffers@@YAXXZ();
}

/*
==============
R_HudOutline_Enabled
==============
*/

bool __fastcall R_HudOutline_Enabled(const GfxViewInfo *viewInfo)
{
  return ?R_HudOutline_Enabled@@YA_NPEBUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
RB_ApplyHudOutline
==============
*/
void RB_ApplyHudOutline(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_Group *activeGroup)
{
  unsigned int height; 
  const R_RT_Surface *Surface; 
  const char *v27; 
  R_RT_Handle v36; 
  R_RT_Handle v37; 
  R_RT_ColorHandle result; 
  R_RT_Handle v39; 
  R_RT_ColorHandle v40; 
  R_RT_ColorHandle v41; 
  R_RT_ColorHandle v42; 
  char v43; 
  const char *v46; 
  R_RT_Group v47; 

  _RDI = viewInfo;
  _RSI = gfxContext;
  if ( viewInfo->hudOutline.enable && viewInfo->hudOutline.mode || R_HudOutline_BRCircleOutlineEnabled(viewInfo) )
  {
    __asm { vmovaps [rsp+310h+var_30], xmm6 }
    Sys_ProfBeginNamedEvent(0xFFFF7F50, "Hud Outline");
    R_ProfBeginNamedEvent(_RSI->state, "RB_ApplyHudOutline");
    R_GPU_BeginTimer(GPU_TIMER_HUD_OUTLINE);
    R_RT_GetGlobalColor(&result, R_RENDERTARGET_DISPLAY_BUFFER);
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+210h+result.baseclass_0.m_surfaceID]
      vmovups ymmword ptr [rsp+310h+var_2A0.m_surfaceID], ymm0
    }
    height = R_RT_Handle::GetSurface(&v37)->m_image.m_base.height;
    Surface = R_RT_Handle::GetSurface(&v37);
    R_SetRenderTargetSize(_RSI->source, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FOR_VIEW);
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+210h+result.baseclass_0.m_surfaceID]
      vmovups xmm6, xmmword ptr [rsi]
      vmovd   eax, xmm0
      vmovups ymmword ptr [rsp+310h+var_2C0.m_surfaceID], ymm0
    }
    if ( (_WORD)_EAX )
    {
      R_RT_Handle::GetSurface(&v36);
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 453, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
        __debugbreak();
    }
    v43 = 1;
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rbp+210h+var_2A0.m_tracking.m_name], xmm0
      vmovups ymm0, ymmword ptr [rsp+310h+var_2C0.m_surfaceID]
      vmovd   eax, xmm0
    }
    v37.m_surfaceID = 0;
    v37.m_tracking.m_allocCounter = 0;
    __asm { vmovups ymmword ptr [rbp+210h+var_260.m_surfaceID], ymm0 }
    if ( (_WORD)_EAX )
    {
      R_RT_Handle::GetSurface(&v39);
    }
    else
    {
      if ( v36.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 442, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
        __debugbreak();
    }
    __asm
    {
      vmovups ymm0, ymmword ptr [rsp+310h+var_2C0.m_surfaceID]
      vmovups [rbp+210h+var_1D8], ymm0
      vmovups ymm0, ymmword ptr [rsp+310h+var_2A0.m_surfaceID]
      vmovups [rbp+210h+var_158], ymm0
    }
    _RCX = &v47;
    _RAX = &v43;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymm1, ymmword ptr [rax+80h]
      vmovups ymmword ptr [rcx], ymm0
      vmovups ymm0, ymmword ptr [rax+20h]
      vmovups ymmword ptr [rcx+20h], ymm0
      vmovups ymm0, ymmword ptr [rax+40h]
      vmovups ymmword ptr [rcx+40h], ymm0
      vmovups ymm0, ymmword ptr [rax+60h]
      vmovups ymmword ptr [rcx+60h], ymm0
      vmovups ymmword ptr [rcx+80h], ymm1
      vmovups ymm1, ymmword ptr [rax+0A0h]
    }
    v27 = v46;
    __asm { vmovups ymmword ptr [rcx+0A0h], ymm1 }
    v47.m_vrsRt.m_tracking.m_location = v27;
    __asm { vmovdqa xmmword ptr [rsp+310h+var_2C0.m_surfaceID], xmm6 }
    R_SetRenderTargetsInternal((GfxCmdBufContext *)&v36, &v47, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_hudoutline.cpp(307)");
    R_SetViewportStruct(_RSI->source, &_RDI->displayViewport);
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rbp+210h+var_2A0.m_tracking.m_name], xmm0
      vmovdqu xmmword ptr [rsp+310h+var_2C0.m_tracking.m_name], xmm0
    }
    v37.m_surfaceID = 0;
    v37.m_tracking.m_allocCounter = 0;
    __asm { vmovups ymm1, ymmword ptr [rsp+310h+var_2A0.m_surfaceID] }
    v36.m_surfaceID = 0;
    v36.m_tracking.m_allocCounter = 0;
    __asm
    {
      vmovups ymm0, ymmword ptr [rsp+310h+var_2C0.m_surfaceID]
      vmovups ymmword ptr [rbp+210h+var_260.m_surfaceID], ymm1
      vmovups ymm1, ymmword ptr [rdi+3160h]
      vmovups ymmword ptr [rsp+310h+var_2A0.m_surfaceID], ymm0
      vmovups ymm0, ymmword ptr [rdi+33C0h]
      vmovups [rbp+210h+var_240], ymm1
      vmovups ymm1, ymmword ptr [rdi+3140h]
      vmovups [rbp+210h+var_220], ymm0
      vmovups ymm0, ymmword ptr [rbp+210h+result.baseclass_0.m_surfaceID]
      vmovups [rbp+210h+var_200], ymm1
      vmovups ymmword ptr [rbp+210h+result.baseclass_0.m_surfaceID], ymm0
      vmovups xmmword ptr [rsp+310h+var_2C0.m_surfaceID], xmm6
    }
    R_ApplyHudOutline((GfxCmdBufContext *)&v36, _RDI, &result, &v42, &v41, &v40, (R_RT_ColorHandle *)&v37, (R_RT_ColorHandle *)&v39, 0);
    R_GPU_EndTimer();
    R_ProfEndNamedEvent(_RSI->state);
    Sys_ProfEndNamedEvent();
    __asm { vmovaps xmm6, [rsp+310h+var_30] }
  }
}

/*
==============
R_ApplyHudOutline
==============
*/
void R_ApplyHudOutline(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_ColorHandle *dstRt, R_RT_ColorHandle *entityVelocityRt, R_RT_ColorHandle *packedStencilRt, R_RT_ColorHandle *tangentFrameRt, R_RT_ColorHandle *lensDistortion, R_RT_ColorHandle *floatZFull, bool vrsInlineResolve)
{
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v40; 
  const R_RT_Surface *v41; 
  const R_RT_Surface *v42; 
  R_RT_Image *p_m_image; 
  bool v45; 
  const GfxBackEndData *data; 
  bool v48; 
  unsigned int frameCount; 
  __int64 v50; 
  unsigned int unsignedInt; 
  const R_RT_Surface *v56; 
  Material *hudOutlineVrsInlineResolveMaterial; 
  float fmt; 
  __int64 v68; 
  float v69; 
  __int64 v70; 
  float v71; 
  float v72; 
  float v73; 
  float v74; 
  float v75; 
  float v76; 
  float outThickness; 
  R_RT_Handle *v78; 
  GfxCmdBufContext *v79; 
  GfxCmdBufContext v80; 
  GfxViewport v81; 
  char v82; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
  }
  LODWORD(_RAX) = viewInfo->hudOutline.depthTestInScope;
  _EBP = 0;
  _R15 = gfxContext->source;
  _R14 = viewInfo;
  __asm
  {
    vmovss  xmm6, dword ptr [rdx+39A4h]
    vmovss  xmm3, dword ptr [rdx+38BCh]
    vmovss  xmm8, cs:__real@3f800000
  }
  _R12 = gfxContext;
  __asm { vmovd   xmm0, eax }
  LODWORD(_RAX) = viewInfo->hudOutline.fillInScope;
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vmovd   xmm1, ebp
    vpcmpeqd xmm2, xmm0, xmm1
    vmovd   xmm0, eax
  }
  LODWORD(_RAX) = viewInfo->scopeLensDistortionEnabled;
  __asm
  {
    vblendvps xmm5, xmm7, xmm8, xmm2
    vmovd   xmm1, ebp
    vpcmpeqd xmm2, xmm0, xmm1
    vmovd   xmm0, eax
    vblendvps xmm4, xmm8, xmm7, xmm2
    vmovd   xmm1, ebp
    vpcmpeqd xmm2, xmm0, xmm1
    vmovss  xmm1, dword ptr [rdx+3910h]
    vmovss  dword ptr [r15+850h], xmm6
    vmovss  dword ptr [r15+854h], xmm5
    vmovss  dword ptr [r15+858h], xmm4
    vmovss  dword ptr [r15+85Ch], xmm3
  }
  ++_R15->constVersions[21];
  __asm { vmovss  dword ptr [r15+8DCh], xmm1 }
  *(_QWORD *)&_R15->input.consts[29].xyz.y = 0i64;
  __asm
  {
    vblendvps xmm0, xmm8, xmm7, xmm2
    vmovss  dword ptr [r15+8D0h], xmm0
  }
  ++_R15->constVersions[29];
  _R15->input.consts[22] = viewInfo->hudOutline.scopeFriendColor;
  ++_R15->constVersions[22];
  _R15->input.consts[23] = viewInfo->hudOutline.scopeFoeColor;
  ++_R15->constVersions[23];
  _R15->input.consts[24] = viewInfo->hudOutline.fillColor0;
  ++_R15->constVersions[24];
  _R15->input.consts[25] = viewInfo->hudOutline.fillColor1;
  ++_R15->constVersions[25];
  *(float *)&_RAX = viewInfo->hudOutline.occludedOutlineColor.v[0];
  __asm { vmovss  [rsp+128h+outThickness], xmm5 }
  LODWORD(_R15->input.consts[26].v[0]) = (_DWORD)_RAX;
  *(float *)&_RAX = viewInfo->hudOutline.occludedOutlineColor.v[1];
  __asm { vmovss  [rsp+128h+outThickness], xmm4 }
  v78 = entityVelocityRt;
  v79 = gfxContext;
  __asm { vmovss  [rsp+128h+outThickness], xmm0 }
  LODWORD(_R15->input.consts[26].v[1]) = (_DWORD)_RAX;
  *(_QWORD *)&_R15->input.consts[26].xyz.z = *(_QWORD *)&viewInfo->hudOutline.occludedOutlineColor.xyz.z;
  ++_R15->constVersions[26];
  _R15->input.consts[27] = viewInfo->hudOutline.occludedInlineColor;
  ++_R15->constVersions[27];
  _R15->input.consts[28] = viewInfo->hudOutline.occludedInteriorColor;
  ++_R15->constVersions[28];
  _R15->input.consts[30] = viewInfo->hudOutline.scopeFillColor0;
  ++_R15->constVersions[30];
  _R15->input.consts[31] = viewInfo->hudOutline.scopeFillColor1;
  ++_R15->constVersions[31];
  _R15->input.consts[32] = viewInfo->hudOutline.scopeOccludedOutlineColor;
  ++_R15->constVersions[32];
  _R15->input.consts[33] = viewInfo->hudOutline.scopeOccludedInlineColor;
  ++_R15->constVersions[33];
  _R15->input.consts[34] = viewInfo->hudOutline.scopeOccludedInteriorColor;
  ++_R15->constVersions[34];
  _R15->input.consts[35] = viewInfo->hudOutline.shimmerTextureProperties;
  ++_R15->constVersions[35];
  _R15->input.consts[37] = viewInfo->hudOutline.shimmerTextureProperties1;
  R_DirtyCodeConstant(_R15, 0x25u);
  _R15->input.consts[155] = _R14->hudOutline.shimmerTextureProperties2;
  R_DirtyCodeConstant(_R15, 0x9Bu);
  R_HudOutline_GetBrCircleConsts(_R14, (vec3_t *)&v80, &outThickness);
  __asm
  {
    vmovss  xmm0, [rsp+128h+outThickness]
    vmovss  xmm1, dword ptr [rsp+128h+var_98]
    vmovss  dword ptr [r15+10C0h], xmm0
    vmovss  xmm0, dword ptr [rsp+128h+var_98+4]
    vmovss  dword ptr [r15+10C4h], xmm1
    vmovss  xmm1, dword ptr [rsp+128h+var_98+8]
    vmovss  dword ptr [r15+10C8h], xmm0
    vmovss  dword ptr [r15+10CCh], xmm1
  }
  R_DirtyCodeConstant(_R15, 0x9Cu);
  R_SetCodeConstantFromVec4(_R15, 0x24u, &_R14->hudOutline.snapshotEffectProperties);
  Surface = R_RT_Handle::GetSurface(tangentFrameRt);
  R_SetCodeImageTextureInternal(_R15, 8u, &Surface->m_image.m_base, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_hudoutline.cpp(109)");
  v40 = R_RT_Handle::GetSurface(floatZFull);
  R_SetCodeImageTextureInternal(_R15, 9u, &v40->m_image.m_base, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_hudoutline.cpp(111)");
  v41 = R_RT_Handle::GetSurface(v78);
  R_SetCodeImageTextureInternal(_R15, 1u, &v41->m_image.m_base, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_hudoutline.cpp(113)");
  v42 = R_RT_Handle::GetSurface(packedStencilRt);
  R_SetCodeImageTextureInternal(_R15, 0x4Fu, &v42->m_image.m_base, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_hudoutline.cpp(114)");
  if ( R_RT_Handle::IsValid(lensDistortion) )
    p_m_image = &R_RT_Handle::GetSurface(lensDistortion)->m_image;
  else
    p_m_image = (R_RT_Image *)rgp.blackImage;
  R_SetCodeImageTextureInternal(_R15, 0x50u, &p_m_image->m_base, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_hudoutline.cpp(115)");
  __asm
  {
    vmovups xmm0, xmmword ptr [r12]
    vmovups [rsp+128h+var_98], xmm0
  }
  RB_UiClut_SetParameters(&v80);
  v45 = _R14->hudOutline.mode == 3;
  __asm { vmovups xmm0, xmmword ptr [r14+4B0h] }
  data = _R14->input.data;
  __asm { vmovups [rsp+128h+var_88], xmm0 }
  v48 = v45 || data->scope.scopeUseDualFov && data->scope.adsSmoothFade;
  if ( vrsInlineResolve )
  {
    frameCount = data->frameCount;
    v50 = 0i64;
    do
    {
      unsignedInt = r_vrsDebugFrameSamplePattern->current.unsignedInt;
      if ( unsignedInt == -1 )
        unsignedInt = frameCount & 3;
      if ( unsignedInt >= 4 )
      {
        LODWORD(v70) = 4;
        LODWORD(v68) = unsignedInt;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_variable_rate_shading.h", 76, ASSERT_TYPE_ASSERT, "(unsigned)( samplePattern ) < (unsigned)( 4 )", "samplePattern doesn't index VRS_MAX_SAMPLES\n\t%i not in [0, %i)", v68, v70) )
          __debugbreak();
      }
      outThickness = *(float *)&s_VRSPixelToSampleOrdered_9[unsignedInt][v50];
      __asm { vmovss  xmm0, [rsp+128h+outThickness] }
      _RAX = (int)_EBP;
      ++v50;
      ++_EBP;
      __asm { vmovss  dword ptr [rsp+rax*4+128h+var_98], xmm0 }
    }
    while ( _EBP < 4 );
    __asm { vmovups xmm0, [rsp+128h+var_98] }
    _R12 = v79;
    _RBX = v79->source;
    __asm { vmovups xmmword ptr [rbx+7F0h], xmm0 }
    R_DirtyCodeConstant(_RBX, 0xFu);
    v56 = R_RT_Handle::GetSurface(v78);
    R_SetCodeImageTextureInternal(_RBX, 5u, &v56->m_color.m_fmaskImage.m_base, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_hudoutline.cpp(150)");
    hudOutlineVrsInlineResolveMaterial = rgp.hudOutlineVrsInlineResolveMaterial;
    if ( v48 )
      hudOutlineVrsInlineResolveMaterial = rgp.hudOutlineScopeVrsInlineResolveMaterial;
  }
  else
  {
    hudOutlineVrsInlineResolveMaterial = rgp.hudOutlineMaterial;
    if ( v48 )
      hudOutlineVrsInlineResolveMaterial = rgp.hudOutlineScopeMaterial;
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [r12]
    vmovups [rsp+128h+var_98], xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmovss  [rsp+128h+var_D0], xmm8
    vmovss  [rsp+128h+var_D8], xmm8
    vmovss  [rsp+128h+var_E0], xmm7
    vmovss  [rsp+128h+var_E8], xmm7
    vmovss  [rsp+128h+var_F0], xmm1
    vmovss  dword ptr [rsp+128h+var_F8], xmm0
    vmovss  dword ptr [rsp+128h+var_100], xmm7
    vmovss  dword ptr [rsp+128h+fmt], xmm7
  }
  RB_ViewportFilterDirectInternal(&v80, hudOutlineVrsInlineResolveMaterial, 0xFFFFFFFF, &v81, fmt, v69, v71, v72, v73, v74, v75, v76, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_hudoutline.cpp(160)");
  _R11 = &v82;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
R_ApplyHudOutlineCS
==============
*/
void R_ApplyHudOutlineCS(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, R_RT_ColorHandle *dstRt, R_RT_ColorHandle *dstSmaaHudoutlineMask, R_RT_ColorHandle *entityVelocityRt, R_RT_ColorHandle *packedStencilRt, R_RT_ColorHandle *tangentFrameRt, const GfxWrappedBuffer *workgroups, const GfxWrappedBuffer *indirectArgs, R_RT_ColorHandle *floatZFull, bool vrsInlineResolve)
{
  bool v14; 
  ComputeCmdBufState *v16; 
  const GfxBackEndData *v17; 
  bool v18; 
  ComputeShader *csHudoutline; 
  unsigned int v59; 
  __int64 v60; 
  unsigned int frameCount; 
  __int64 unsignedInt; 
  int v63; 
  __int64 v64; 
  R_RT_Handle *v66; 
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v68; 
  const R_RT_Surface *v69; 
  const R_RT_Surface *v70; 
  const R_RT_Surface *v71; 
  const GfxImage *Variant; 
  const R_RT_Surface *v73; 
  const R_RT_Surface *v74; 
  __int64 v75; 
  __int64 v76; 
  ID3D12Resource *buffers; 
  R_RT_Handle *p_view; 
  R_RT_Handle *Resident; 
  R_RT_Handle *v80; 
  R_RT_Handle *v81; 
  GfxShaderBufferView *views; 
  R_RT_Handle *v83; 
  R_RT_Handle *v84; 
  ComputeCmdBufState *state; 
  const GfxWrappedBuffer *v86; 
  int data[4]; 
  vec4_t outGameTime; 
  float outThickness; 
  vec3_t outColor; 

  v14 = viewInfo->hudOutline.mode == 3;
  _RSI = viewInfo;
  v16 = computeState;
  Resident = entityVelocityRt;
  v80 = packedStencilRt;
  v81 = tangentFrameRt;
  views = (GfxShaderBufferView *)workgroups;
  v86 = indirectArgs;
  p_view = floatZFull;
  v17 = viewInfo->input.data;
  __asm { vmovaps [rsp+270h+var_50], xmm6 }
  v84 = dstSmaaHudoutlineMask;
  v83 = dstRt;
  buffers = (ID3D12Resource *)viewInfo;
  state = computeState;
  v18 = v14 || v17->scope.scopeUseDualFov && v17->scope.adsSmoothFade;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
    vmovss  [rbp+170h+var_1BC], xmm1
    vmovss  [rbp+170h+data], xmm0
    vmovss  xmm0, dword ptr [rdx+5B4h]; sceneDefFloatTime
    vxorps  xmm6, xmm6, xmm6
    vxorps  xmm1, xmm1, xmm1; materialTime
    vmovss  [rbp+170h+var_1B8], xmm6
    vmovss  [rbp+170h+var_1B4], xmm6
  }
  R_CalculateGameTime(*(float *)&_XMM0, *(float *)&_XMM1, &outGameTime);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+39A4h]
    vmovss  xmm3, cs:__real@3f800000
  }
  _EAX = _RSI->hudOutline.depthTestInScope;
  __asm
  {
    vmovss  [rbp+170h+var_190], xmm0
    vmovd   xmm0, eax
  }
  _EAX = _RSI->hudOutline.fillInScope;
  _EDI = 0;
  __asm
  {
    vmovd   xmm1, edi
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm6, xmm3, xmm2
    vmovss  [rbp+170h+var_18C], xmm0
    vmovd   xmm0, eax
  }
  _EAX = _RSI->scopeLensDistortionEnabled;
  __asm
  {
    vmovd   xmm1, edi
    vpcmpeqd xmm2, xmm0, xmm1
    vmovss  xmm1, dword ptr [rsi+38BCh]
    vmovss  [rbp+170h+var_184], xmm1
    vblendvps xmm0, xmm3, xmm6, xmm2
    vmovss  [rbp+170h+var_188], xmm0
    vmovd   xmm0, eax
    vmovd   xmm2, edi
    vpcmpeqd xmm1, xmm0, xmm2
    vblendvps xmm0, xmm3, xmm6, xmm1
    vmovups xmm1, xmmword ptr [rsi+38ACh]
    vmovss  [rbp+170h+var_180], xmm0
    vmovss  xmm0, dword ptr [rsi+3910h]
    vmovss  [rbp+170h+var_174], xmm0
    vmovups xmm0, xmmword ptr [rsi+389Ch]
    vmovups [rbp+170h+var_170], xmm1
    vmovups ymm1, ymmword ptr [rsi+38C0h]
    vmovups [rbp+170h+var_160], xmm0
    vmovups ymm0, ymmword ptr [rsi+3914h]
    vmovups [rbp+170h+var_100], ymm1
    vmovups ymm1, ymmword ptr [rsi+38E0h]
    vmovups [rbp+170h+var_150], ymm0
    vmovups ymm0, ymmword ptr [rsi+3934h]
    vmovups [rbp+170h+var_E0], ymm1
    vmovups xmm1, xmmword ptr [rsi+3900h]
    vmovups [rbp+170h+var_130], ymm0
    vmovups xmm0, xmmword ptr [rsi+3954h]
    vmovups [rbp+170h+var_C0], xmm1
    vmovups xmm1, xmmword ptr [rsi+3964h]
    vmovups [rbp+170h+var_110], xmm0
    vmovups xmm0, xmmword ptr [rsi+3994h]
    vmovups [rbp+170h+var_B0], xmm1
    vmovups ymm1, ymmword ptr [rsi+3974h]
    vmovups [rbp+170h+var_A0], xmm0
    vmovss  [rbp+170h+var_17C], xmm6
    vmovss  [rbp+170h+var_178], xmm6
    vmovups [rbp+170h+var_90], ymm1
  }
  R_HudOutline_GetBrCircleConsts(_RSI, &outColor, &outThickness);
  csHudoutline = rgp.csHudoutline;
  __asm { vmovaps xmm6, [rsp+270h+var_50] }
  if ( v18 )
    csHudoutline = rgp.csHudoutlineScope;
  if ( vrsInlineResolve )
  {
    v59 = 0;
    v60 = 0i64;
    frameCount = _RSI->input.data->frameCount;
    do
    {
      unsignedInt = frameCount & 3;
      if ( r_vrsDebugFrameSamplePattern->current.integer != -1 )
        unsignedInt = r_vrsDebugFrameSamplePattern->current.unsignedInt;
      if ( (unsigned int)unsignedInt >= 4 )
      {
        LODWORD(v76) = 4;
        LODWORD(v75) = unsignedInt;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_variable_rate_shading.h", 76, ASSERT_TYPE_ASSERT, "(unsigned)( samplePattern ) < (unsigned)( 4 )", "samplePattern doesn't index VRS_MAX_SAMPLES\n\t%i not in [0, %i)", v75, v76) )
          __debugbreak();
      }
      v63 = s_VRSPixelToSampleOrdered_9[unsignedInt][v60];
      v64 = (int)v59;
      ++v60;
      ++v59;
      data[v64 - 2] = v63;
    }
    while ( v59 < 4 );
    __asm { vmovups xmm0, [rbp+170h+var_1D8] }
    csHudoutline = rgp.csHudoutlineVrsInlineResolve;
    v66 = Resident;
    if ( v18 )
      csHudoutline = rgp.csHudoutlineScopeVrsInlineResolve;
    __asm { vmovups [rbp+170h+var_1B0], xmm0 }
    Surface = R_RT_Handle::GetSurface(Resident);
    v16 = state;
    Resident = (R_RT_Handle *)R_Texture_GetResident(Surface->m_color.m_fmaskImage.m_base.textureId);
    R_SetComputeTextures(state, 7, 1, (const GfxTexture *const *)&Resident);
    _RSI = (const GfxViewInfo *)buffers;
  }
  else
  {
    v66 = Resident;
  }
  R_UploadAndSetComputeConstants(v16, 0, data, 0x160u, NULL);
  buffers = v16->data->globalSceneConstantBuffer->buffer;
  R_SetComputeConstantBuffers(v16, 7, 1, &buffers);
  v68 = R_RT_Handle::GetSurface(v66);
  buffers = (ID3D12Resource *)R_Texture_GetResident(v68->m_image.m_base.textureId);
  R_SetComputeTextures(v16, 0, 1, (const GfxTexture *const *)&buffers);
  buffers = (ID3D12Resource *)R_Texture_GetResident(rgp.shimmerEffectImage->textureId);
  R_SetComputeTextures(v16, 1, 1, (const GfxTexture *const *)&buffers);
  v69 = R_RT_Handle::GetSurface(v80);
  v80 = (R_RT_Handle *)R_Texture_GetResident(v69->m_image.m_base.textureId);
  R_SetComputeTextures(v16, 3, 1, (const GfxTexture *const *)&v80);
  v70 = R_RT_Handle::GetSurface(v81);
  v81 = (R_RT_Handle *)R_Texture_GetResident(v70->m_image.m_base.textureId);
  R_SetComputeTextures(v16, 8, 1, (const GfxTexture *const *)&v81);
  v71 = R_RT_Handle::GetSurface(p_view);
  p_view = (R_RT_Handle *)R_Texture_GetResident(v71->m_image.m_base.textureId);
  R_SetComputeTextures(v16, 2, 1, (const GfxTexture *const *)&p_view);
  Variant = RB_UiClut_GetVariant(DODGE);
  p_view = (R_RT_Handle *)R_Texture_GetResident(Variant->textureId);
  R_SetComputeTextures(v16, 9, 1, (const GfxTexture *const *)&p_view);
  p_view = (R_RT_Handle *)&_RSI->input.data->entityDataBuffer->view;
  R_SetComputeViews(v16, 5, 1, (const GfxShaderBufferView *const *)&p_view);
  views = (GfxShaderBufferView *)((char *)views + 8);
  R_SetComputeViews(v16, 6, 1, (const GfxShaderBufferView *const *)&views);
  v73 = R_RT_Handle::GetSurface(v83);
  v83 = (R_RT_Handle *)R_Texture_GetResident(v73->m_image.m_base.textureId);
  R_SetComputeRWTextures(v16, 0, 1, (const GfxTexture *const *)&v83);
  v74 = R_RT_Handle::GetSurface(v84);
  v84 = (R_RT_Handle *)R_Texture_GetResident(v74->m_image.m_base.textureId);
  R_SetComputeRWTextures(v16, 1, 1, (const GfxTexture *const *)&v84);
  R_SetComputeShader(v16, csHudoutline);
  R_DispatchIndirect(v16, v86->buffer, 0);
}

/*
==============
R_HudOutlineGenWorkgroups
==============
*/
void R_HudOutlineGenWorkgroups(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxWrappedRWBuffer *dstTiles, const GfxWrappedRWBuffer *stencilMask, const GfxTexture *floatZFull, const GfxTexture *floatZEighthMipMin)
{
  unsigned int v10; 
  unsigned int v11; 
  ID3D12Resource *buffers; 
  GfxShaderBufferRWView *views; 
  char data[336]; 
  float outThickness; 
  vec3_t outColor; 

  buffers = computeState->data->globalSceneConstantBuffer->buffer;
  R_SetComputeConstantBuffers(computeState, 7, 1, &buffers);
  buffers = (ID3D12Resource *)&stencilMask->rwView;
  R_SetComputeRWViewsWithCounters(computeState, 1, 1, (const GfxShaderBufferRWView *const *)&buffers, NULL);
  buffers = (ID3D12Resource *)floatZFull;
  R_SetComputeTextures(computeState, 1, 1, (const GfxTexture *const *)&buffers);
  buffers = (ID3D12Resource *)floatZEighthMipMin;
  R_SetComputeTextures(computeState, 2, 1, (const GfxTexture *const *)&buffers);
  LODWORD(buffers) = 0;
  views = &dstTiles->rwView;
  R_SetComputeRWViewsWithCounters(computeState, 0, 1, (const GfxShaderBufferRWView *const *)&views, (const unsigned int *)&buffers);
  if ( R_HudOutline_BRCircleOutlineEnabled(viewInfo) )
  {
    R_SetComputeShader(computeState, rgp.csHudoutlineWorkGroupsBrCircle);
    memset_0(data, 0, 0x160ui64);
    R_HudOutline_GetBrCircleConsts(viewInfo, &outColor, &outThickness);
    R_UploadAndSetComputeConstants(computeState, 0, data, 0x160u, NULL);
  }
  else
  {
    R_SetComputeShader(computeState, rgp.csHudoutlineWorkGroups);
  }
  v10 = (viewInfo->sceneViewport.width + 7) >> 3;
  v11 = (viewInfo->sceneViewport.height + 7) >> 3;
  if ( (v10 > 0xFFF || v11 > 0xFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_hudoutline.cpp", 279, ASSERT_TYPE_ASSERT, "(nTilesX <= 0x0fff && nTilesY <= 0x0fff)", (const char *)&queryFormat, "nTilesX <= HUD_OUTLINE_TILE_INDEX_MASK && nTilesY <= HUD_OUTLINE_TILE_INDEX_MASK") )
    __debugbreak();
  if ( (!v10 || !v11) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.h", 558, ASSERT_TYPE_ASSERT, "(xThreads > 0 && yThreads > 0 && zThreads > 0 && xGroupSize > 0 && yGroupSize > 0 && zGroupSize > 0)", "%s\n\tCompute thread count or group size is 0.", "xThreads > 0 && yThreads > 0 && zThreads > 0 && xGroupSize > 0 && yGroupSize > 0 && zGroupSize > 0") )
    __debugbreak();
  R_Dispatch(computeState, (v10 + 7) >> 3, (v11 + 7) >> 3, 1u);
}

/*
==============
R_HudOutlineWorkgroupArgs
==============
*/
void R_HudOutlineWorkgroupArgs(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxWrappedRWBuffer *dstArgs, const GfxWrappedRWBuffer *tiles)
{
  GfxShaderBufferRWView *views; 

  R_SetComputeShader(computeState, rgp.csHudoutlineWorkGroupsArgs);
  views = &tiles->rwView;
  R_SetComputeRWViewsWithCounters(computeState, 0, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
  views = &dstArgs->rwView;
  R_SetComputeRWViewsWithCounters(computeState, 1, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
  R_Dispatch(computeState, 1u, 1u, 1u);
}

/*
==============
R_HudOutline_BRCircleOutlineEnabled
==============
*/
bool R_HudOutline_BRCircleOutlineEnabled(const GfxViewInfo *viewInfo)
{
  const dvar_t *v2; 

  v2 = DVARBOOL_r_brCircleOutlineEnabled;
  _RDI = viewInfo;
  if ( !DVARBOOL_r_brCircleOutlineEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_brCircleOutlineEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm0, dword ptr [rdi+0C28h]
    }
  }
  return 0;
}

/*
==============
R_HudOutline_Enabled
==============
*/
bool R_HudOutline_Enabled(const GfxViewInfo *viewInfo)
{
  bool result; 

  if ( viewInfo->hudOutline.enable && viewInfo->hudOutline.mode )
    return 1;
  result = R_HudOutline_BRCircleOutlineEnabled(viewInfo);
  if ( result )
    return 1;
  return result;
}

/*
==============
R_HudOutline_GetBrCircleConsts
==============
*/
void R_HudOutline_GetBrCircleConsts(const GfxViewInfo *viewInfo, vec3_t *outColor, float *outThickness)
{
  _RSI = outThickness;
  _RDI = outColor;
  if ( R_HudOutline_BRCircleOutlineEnabled(viewInfo) )
  {
    _RBX = DVARFLT_r_brCircleOutlineThickness;
    if ( !DVARFLT_r_brCircleOutlineThickness && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_brCircleOutlineThickness") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  __asm { vmovss  dword ptr [rsi], xmm0 }
  _RBX = DVARVEC4_r_brCircleOutlineColor;
  if ( !DVARVEC4_r_brCircleOutlineColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_brCircleOutlineColor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm2, dword ptr [rbx+34h]
    vmulss  xmm0, xmm2, dword ptr [rbx+28h]
    vmovss  xmm1, dword ptr [rbx+2Ch]
    vmovss  xmm3, dword ptr [rbx+30h]
    vmovss  dword ptr [rdi], xmm0
    vmulss  xmm0, xmm2, xmm3
    vmulss  xmm1, xmm2, xmm1
    vmovss  dword ptr [rdi+8], xmm0
    vmovss  dword ptr [rdi+4], xmm1
  }
}

/*
==============
R_HudOutline_InitConstBuffers
==============
*/
void R_HudOutline_InitConstBuffers(void)
{
  ;
}

/*
==============
R_HudOutline_ShutdownConstBuffers
==============
*/
void R_HudOutline_ShutdownConstBuffers(void)
{
  ;
}

