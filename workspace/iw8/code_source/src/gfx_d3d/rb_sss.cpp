/*
==============
R_SSS_Init
==============
*/

void R_SSS_Init(void)
{
  ?R_SSS_Init@@YAXXZ();
}

/*
==============
RB_SSS_Apply
==============
*/

void __fastcall RB_SSS_Apply(GfxCmdBufContext *gfxContext, const GfxBackEndData *data, const GfxViewInfo *viewInfo, const R_RT_ColorHandle *pingPongRenderTarget)
{
  ?RB_SSS_Apply@@YAXUGfxCmdBufContext@@PEBUGfxBackEndData@@PEBUGfxViewInfo@@VR_RT_ColorHandle@@@Z(gfxContext, data, viewInfo, pingPongRenderTarget);
}

/*
==============
R_SSS_Bind
==============
*/

void __fastcall R_SSS_Bind(GfxCmdBufSourceState *gfxSource, const GfxViewInfo *viewInfo)
{
  ?R_SSS_Bind@@YAXPEAUGfxCmdBufSourceState@@PEBUGfxViewInfo@@@Z(gfxSource, viewInfo);
}

/*
==============
R_SSS_BlurX
==============
*/

void __fastcall R_SSS_BlurX(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxImage *sceneColor, const GfxImage *floatZfull, const GfxImage *targetRW)
{
  ?R_SSS_BlurX@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@PEBUGfxImage@@22@Z(gfxContext, viewInfo, sceneColor, floatZfull, targetRW);
}

/*
==============
R_SSS_Enabled
==============
*/

bool __fastcall R_SSS_Enabled(const GfxViewInfo *viewInfo)
{
  return ?R_SSS_Enabled@@YA_NPEBUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
R_SSS_SetInfo
==============
*/

void __fastcall R_SSS_SetInfo(GfxViewInfo *viewInfo)
{
  ?R_SSS_SetInfo@@YAXPEAUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
R_SSS_BlurY
==============
*/

void __fastcall R_SSS_BlurY(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxImage *albedo, const GfxImage *diffuse, const GfxImage *pingPong, const GfxImage *floatZfull, const GfxImage *scopeBuffer)
{
  ?R_SSS_BlurY@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@PEBUGfxImage@@2222@Z(gfxContext, viewInfo, albedo, diffuse, pingPong, floatZfull, scopeBuffer);
}

/*
==============
RB_SSS_Apply
==============
*/
void RB_SSS_Apply(GfxCmdBufContext *gfxContext, const GfxBackEndData *data, const GfxViewInfo *viewInfo, const R_RT_ColorHandle *pingPongRenderTarget)
{
  R_RT_Image *p_m_image; 
  GfxCmdBufState *state; 
  const R_RT_Surface *Surface; 
  GfxImage *blackImage; 
  const R_RT_Surface *v50; 
  const R_RT_Surface *v72; 
  const R_RT_Surface *v73; 
  const R_RT_Surface *v74; 
  R_RT_Group v84; 
  GfxCmdBufContext result[2]; 
  float scaleParams[8]; 
  R_RT_Group v87; 
  char v88; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
  }
  _R13 = gfxContext->source;
  _R15 = gfxContext;
  _R14 = viewInfo;
  p_m_image = &R_RT_Handle::GetSurface(&viewInfo->sceneRtInput.m_floatZFullRt)->m_image;
  if ( !R_RT_Handle::IsValid(&_R14->sceneRtInput.m_mainSceneSSSAlbedoRt) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sss.cpp", 112, ASSERT_TYPE_ASSERT, "(viewInfo->sceneRtInput.m_mainSceneSSSAlbedoRt)", "%s\n\tSubsurface Scattering albedo render target has not been allocated.", "viewInfo->sceneRtInput.m_mainSceneSSSAlbedoRt") )
    __debugbreak();
  if ( !R_RT_Handle::IsValid(&_R14->sceneRtInput.m_mainSceneSSSDiffuseRt) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sss.cpp", 113, ASSERT_TYPE_ASSERT, "(viewInfo->sceneRtInput.m_mainSceneSSSDiffuseRt)", "%s\n\tSubsurface Scattering specular render target has not been allocated.", "viewInfo->sceneRtInput.m_mainSceneSSSDiffuseRt") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFF7F50, "Screen-Space SSS");
  R_GPU_BeginTimer(GPU_TIMER_SSS_FILTER);
  R_InitCmdBufSourceState(_R13, &_R14->input);
  state = _R15->state;
  if ( (*((_BYTE *)&_R13->input + 7920) & 1) != 0 )
  {
    R_LockIfGfxImmediateContext(state->device);
    R_InitCmdBufState(state);
  }
  else
  {
    R_LockGfxImmediateContext();
    _RAX = RB_GetBackendCmdBufContext(result);
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vpextrq rdx, xmm0, 1; in
    }
    if ( state != _RDX )
      GfxCmdBufState::Copy(state, _RDX);
  }
  memset_0(state->perPrimConstantState, 255, sizeof(state->perPrimConstantState));
  memset_0(state->perObjectConstantState, 255, sizeof(state->perObjectConstantState));
  memset_0(state->stableConstantState, 255, sizeof(state->stableConstantState));
  state->data = _R13->input.data;
  R_ProfBeginNamedEvent(state, "Screen-Space SSS");
  __asm
  {
    vmovss  xmm7, dword ptr [r14+134h]
    vmovss  xmm6, dword ptr [r14+130h]
  }
  _RAX = R_RT_FindMatchingDynamicResolutionTable(vidConfig.sceneWidth, vidConfig.sceneHeight);
  __asm
  {
    vdivss  xmm0, xmm6, xmm7
    vmovss  xmm1, dword ptr [rax]
    vdivss  xmm2, xmm1, dword ptr [rax+4]
    vmulss  xmm3, xmm0, dword ptr [rax+rdx*8]
    vmulss  xmm0, xmm2, dword ptr [rax+rdx*8+4]
    vmovss  xmm1, dword ptr [r14+134h]; tanHalfFovY
    vdivss  xmm2, xmm3, xmm0; aspectRatio
  }
  SSSSCalculateScaleParams(&_R14->sss.profile, *(float *)&_XMM1, *(float *)&_XMM2, scaleParams);
  SSSSCalculateProfileParams(&_R14->sss.profile, (float *)result);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbp+180h+scaleParams]
    vmovups xmmword ptr [r13+1020h], xmm0
    vmovups xmm0, xmmword ptr [rbp+180h+result.source]
  }
  ++_R13->constVersions[146];
  __asm { vmovups xmmword ptr [r13+1030h], xmm0 }
  ++_R13->constVersions[147];
  R_BeginViewInternal(_R13, &_R14->sceneDef, (const GfxViewParms *)_R14, &_R14->viewParmsSet.frames[1].viewParms);
  R_SetViewportStruct(_R13, &_R14->sceneViewport);
  _RBX = pingPongRenderTarget;
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx]
    vmovups ymmword ptr [rbp+180h+result.source], ymm0
  }
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)result, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx]
    vmovups ymmword ptr [rbp+180h+result.source], ymm0
  }
  LODWORD(_RBX) = R_RT_Handle::GetSurface((R_RT_Handle *)result)->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface((R_RT_Handle *)result);
  R_SetRenderTargetSize(_R13, Surface->m_image.m_base.width, (unsigned int)_RBX, GFX_USE_VIEWPORT_FULL);
  _RAX = pingPongRenderTarget;
  __asm
  {
    vmovups ymm0, ymmword ptr [r14+31A0h]
    vmovups ymm1, ymmword ptr [rax]
    vmovups ymmword ptr [rbp+180h+scaleParams], ymm1
    vmovups ymmword ptr [rbp+180h+result.source], ymm0
  }
  _RAX = R_RT_Group::ConstructColorDepth(&v84, (R_RT_ColorHandle *)scaleParams, (R_RT_DepthHandle *)result);
  __asm { vmovups xmm0, xmmword ptr [rax] }
  _RCX = &v87;
  __asm
  {
    vmovups xmmword ptr [rcx], xmm0
    vmovups xmm1, xmmword ptr [rax+10h]
    vmovups xmmword ptr [rcx+10h], xmm1
    vmovups xmm0, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rcx+20h], xmm0
    vmovups xmm1, xmmword ptr [rax+30h]
    vmovups xmmword ptr [rcx+30h], xmm1
    vmovups xmm0, xmmword ptr [rax+40h]
    vmovups xmmword ptr [rcx+40h], xmm0
    vmovups xmm1, xmmword ptr [rax+50h]
    vmovups xmmword ptr [rcx+50h], xmm1
    vmovups xmm0, xmmword ptr [rax+60h]
    vmovups xmmword ptr [rcx+60h], xmm0
    vmovups xmm1, xmmword ptr [rax+70h]
    vmovups xmmword ptr [rcx+70h], xmm1
    vmovups xmm0, xmmword ptr [rax+80h]
    vmovups xmmword ptr [rcx+80h], xmm0
    vmovups xmm1, xmmword ptr [rax+90h]
    vmovups xmmword ptr [rcx+90h], xmm1
    vmovups xmm0, xmmword ptr [rax+0A0h]
    vmovups xmmword ptr [rcx+0A0h], xmm0
    vmovups xmm1, xmmword ptr [rax+0B0h]
    vmovups xmm0, xmmword ptr [r15]
    vmovups xmmword ptr [rcx+0B0h], xmm1
  }
  v87.m_vrsRt.m_tracking.m_location = _RAX->m_vrsRt.m_tracking.m_location;
  __asm { vmovups xmmword ptr [rbp+180h+result.source], xmm0 }
  R_SetRenderTargetsInternal(result, &v87, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sss.cpp(132)");
  blackImage = rgp.blackImage;
  v50 = R_RT_Handle::GetSurface(&_R14->sceneRtInput.m_mainSceneColorRt);
  __asm
  {
    vmovups xmm0, xmmword ptr [r15]
    vmovups xmmword ptr [rbp+180h+result.source], xmm0
  }
  R_SSS_BlurX(result, _R14, &v50->m_image.m_base, &p_m_image->m_base, blackImage);
  if ( _R13 == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  _R13->input.codeImages[6] = NULL;
  R_ClearResourceBuffers(state);
  R_FlushResourceBuffers(state);
  __asm
  {
    vmovups ymm0, ymmword ptr [r14+30C0h]
    vmovups ymmword ptr [rbp+180h+result.source], ymm0
  }
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)result, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  _RAX = pingPongRenderTarget;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbp+180h+result.source], ymm0
  }
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)result, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  __asm
  {
    vmovups ymm0, ymmword ptr [r14+31A0h]
    vmovups ymm1, ymmword ptr [r14+30C0h]
    vmovups ymmword ptr [rbp+180h+result.source], ymm0
    vmovups ymmword ptr [rbp+180h+scaleParams], ymm1
  }
  _RAX = R_RT_Group::ConstructColorDepth(&v84, (R_RT_ColorHandle *)scaleParams, (R_RT_DepthHandle *)result);
  _RDX = &v87;
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rdx], xmm0
    vmovups xmm1, xmmword ptr [rax+10h]
    vmovups xmmword ptr [rdx+10h], xmm1
    vmovups xmm0, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rdx+20h], xmm0
    vmovups xmm1, xmmword ptr [rax+30h]
    vmovups xmmword ptr [rdx+30h], xmm1
    vmovups xmm0, xmmword ptr [rax+40h]
    vmovups xmmword ptr [rdx+40h], xmm0
    vmovups xmm1, xmmword ptr [rax+50h]
    vmovups xmmword ptr [rdx+50h], xmm1
    vmovups xmm0, xmmword ptr [rax+60h]
    vmovups xmmword ptr [rdx+60h], xmm0
    vmovups xmm1, xmmword ptr [rax+70h]
    vmovups xmmword ptr [rdx+70h], xmm1
    vmovups xmm0, xmmword ptr [rax+80h]
    vmovups xmmword ptr [rdx+80h], xmm0
    vmovups xmm1, xmmword ptr [rax+90h]
    vmovups xmmword ptr [rdx+90h], xmm1
    vmovups xmm0, xmmword ptr [rax+0A0h]
    vmovups xmmword ptr [rdx+0A0h], xmm0
    vmovups xmm1, xmmword ptr [rax+0B0h]
    vmovups xmm0, xmmword ptr [r15]
    vmovups xmmword ptr [rdx+0B0h], xmm1
  }
  v87.m_vrsRt.m_tracking.m_location = _RAX->m_vrsRt.m_tracking.m_location;
  __asm { vmovups xmmword ptr [rbp+180h+result.source], xmm0 }
  R_SetRenderTargetsInternal(result, &v87, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sss.cpp(147)");
  v72 = R_RT_Handle::GetSurface(&_R14->sceneRtInput.m_mainSceneSSSAlbedoRt);
  v73 = R_RT_Handle::GetSurface(&_R14->sceneRtInput.m_mainSceneSSSDiffuseRt);
  v74 = R_RT_Handle::GetSurface(&pingPongRenderTarget->R_RT_Handle);
  __asm
  {
    vmovups xmm0, xmmword ptr [r15]
    vmovups xmmword ptr [rbp+180h+result.source], xmm0
  }
  R_SSS_BlurY(result, _R14, &v72->m_image.m_base, &v73->m_image.m_base, &v74->m_image.m_base, &p_m_image->m_base, rgp.blackImage);
  __asm
  {
    vmovups ymm0, ymmword ptr [r14+30C0h]
    vmovups ymmword ptr [rbp+180h+result.source], ymm0
  }
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)result, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  R_ProfEndNamedEvent(state);
  R_ResetRenderTargets(state);
  if ( (*((_BYTE *)&_R13->input + 7920) & 1) != 0 )
  {
    R_ShutdownCmdBufState(state);
    R_UnlockIfGfxImmediateContext(state->device);
  }
  else
  {
    _RAX = RB_GetBackendCmdBufContext(result);
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vpextrq rcx, xmm0, 1; out
    }
    if ( state != _RCX )
    {
      GfxCmdBufState::Copy(_RCX, state);
      R_FlushImmediateContext();
    }
    R_UnlockGfxImmediateContext();
  }
  Sys_ProfEndNamedEvent();
  R_GPU_EndTimer();
  _R11 = &v88;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
R_SSS_Bind
==============
*/
void R_SSS_Bind(GfxCmdBufSourceState *gfxSource, const GfxViewInfo *viewInfo)
{
  float scaleParams[4]; 
  float profileParams[4]; 

  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmovss  xmm7, dword ptr [rdx+134h]
    vmovss  xmm6, dword ptr [rdx+130h]
  }
  _RSI = viewInfo;
  _RDI = gfxSource;
  _RAX = R_RT_FindMatchingDynamicResolutionTable(vidConfig.sceneWidth, vidConfig.sceneHeight);
  __asm
  {
    vdivss  xmm0, xmm6, xmm7
    vmovss  xmm1, dword ptr [rax]
    vdivss  xmm2, xmm1, dword ptr [rax+4]
    vmulss  xmm3, xmm0, dword ptr [rax+rdx*8]
    vmulss  xmm0, xmm2, dword ptr [rax+rdx*8+4]
    vmovss  xmm1, dword ptr [rsi+134h]; tanHalfFovY
    vdivss  xmm2, xmm3, xmm0; aspectRatio
  }
  SSSSCalculateScaleParams(&_RSI->sss.profile, *(float *)&_XMM1, *(float *)&_XMM2, scaleParams);
  SSSSCalculateProfileParams(&_RSI->sss.profile, profileParams);
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+78h+scaleParams]
    vmovups xmmword ptr [rdi+1020h], xmm0
    vmovups xmm0, xmmword ptr [rsp+78h+profileParams]
  }
  ++_RDI->constVersions[146];
  __asm { vmovups xmmword ptr [rdi+1030h], xmm0 }
  ++_RDI->constVersions[147];
  R_BeginViewInternal(_RDI, &_RSI->sceneDef, (const GfxViewParms *)_RSI, &_RSI->viewParmsSet.frames[1].viewParms);
  R_SetViewportStruct(_RDI, &_RSI->sceneViewport);
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
  }
}

/*
==============
R_SSS_BlurX
==============
*/
void R_SSS_BlurX(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxImage *sceneColor, const GfxImage *floatZfull, const GfxImage *targetRW)
{
  GfxCmdBufSourceState *source; 
  BOOL cinematic; 
  BOOL vrs; 
  GfxCmdBufInput *p_input; 
  GfxCmdBufSourceState *v22; 
  GfxCmdBufInput *v23; 
  GfxCmdBufSourceState *v24; 
  GfxCmdBufInput *v25; 
  float fmt; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  GfxCmdBufContext v42; 
  char v43; 
  void *retaddr; 

  _RAX = &retaddr;
  _RDI = gfxContext;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  LODWORD(_RAX) = rg.vrs;
  __asm { vmovss  xmm6, cs:__real@3f800000 }
  source = gfxContext->source;
  _ER15 = 0;
  __asm
  {
    vmovd   xmm1, ecx
    vmovd   xmm0, eax
    vpcmpeqd xmm2, xmm0, xmm1
    vmovss  xmm0, cs:__real@40000000
  }
  cinematic = rg.cinematic;
  __asm { vblendvps xmm1, xmm0, xmm6, xmm2; msScale }
  vrs = rg.vrs;
  R_SetViewportMSParams(gfxContext->source, *(float *)&_XMM1);
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[6] = sceneColor;
  v22 = _RDI->source;
  if ( !_RDI->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v23 = &v22->input;
  if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v23->codeImages[0] = floatZfull;
  v24 = _RDI->source;
  if ( !_RDI->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v25 = &v24->input;
  if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  __asm { vmovups xmm0, xmmword ptr [rdi] }
  v25->codeImages[85] = targetRW;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, rax
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
    vmovups [rsp+0B8h+var_48], xmm0
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+0B8h+var_60], xmm6
    vmovss  [rsp+0B8h+var_68], xmm6
    vmovss  [rsp+0B8h+var_70], xmm0
    vmovss  [rsp+0B8h+var_78], xmm0
    vmovss  [rsp+0B8h+var_80], xmm2
    vmovss  [rsp+0B8h+var_88], xmm1
    vmovss  dword ptr [rsp+0B8h+var_90], xmm0
    vmovss  dword ptr [rsp+0B8h+fmt], xmm0
  }
  RB_ViewportFilterDirectInternal(&v42, rgp.sssMaterials[0][cinematic][vrs], 0xFFFFFFFF, &viewInfo->sceneGeoViewport, fmt, v35, v36, v37, v38, v39, v40, v41, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sss.cpp(84)");
  _R11 = &v43;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

/*
==============
R_SSS_BlurY
==============
*/
void R_SSS_BlurY(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxImage *albedo, const GfxImage *diffuse, const GfxImage *pingPong, const GfxImage *floatZfull, const GfxImage *scopeBuffer)
{
  GfxCmdBufSourceState *source; 
  BOOL cinematic; 
  BOOL vrs; 
  GfxCmdBufInput *p_input; 
  GfxCmdBufSourceState *v24; 
  GfxCmdBufInput *v25; 
  GfxCmdBufSourceState *v26; 
  GfxCmdBufInput *v27; 
  GfxCmdBufSourceState *v28; 
  GfxCmdBufInput *v29; 
  GfxCmdBufSourceState *v30; 
  GfxCmdBufInput *v31; 
  float fmt; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  float v46; 
  float v47; 
  GfxCmdBufContext v48; 
  char v49; 
  void *retaddr; 

  _RAX = &retaddr;
  _RDI = gfxContext;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  LODWORD(_RAX) = rg.vrs;
  __asm { vmovss  xmm6, cs:__real@3f800000 }
  source = gfxContext->source;
  _ER15 = 0;
  __asm
  {
    vmovd   xmm1, ecx
    vmovd   xmm0, eax
    vpcmpeqd xmm2, xmm0, xmm1
    vmovss  xmm0, cs:__real@40000000
  }
  cinematic = rg.cinematic;
  __asm { vblendvps xmm1, xmm0, xmm6, xmm2; msScale }
  vrs = rg.vrs;
  R_SetViewportMSParams(gfxContext->source, *(float *)&_XMM1);
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[33] = albedo;
  v24 = _RDI->source;
  if ( !_RDI->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v25 = &v24->input;
  if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v25->codeImages[35] = diffuse;
  v26 = _RDI->source;
  if ( !_RDI->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v27 = &v26->input;
  if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v27->codeImages[6] = pingPong;
  v28 = _RDI->source;
  if ( !_RDI->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v29 = &v28->input;
  if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v29->codeImages[0] = floatZfull;
  v30 = _RDI->source;
  if ( !_RDI->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v31 = &v30->input;
  if ( !v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  __asm { vmovups xmm0, xmmword ptr [rdi] }
  v31->codeImages[80] = scopeBuffer;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, rax
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
    vmovups [rsp+0B8h+var_48], xmm0
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+0B8h+var_60], xmm6
    vmovss  [rsp+0B8h+var_68], xmm6
    vmovss  [rsp+0B8h+var_70], xmm0
    vmovss  [rsp+0B8h+var_78], xmm0
    vmovss  [rsp+0B8h+var_80], xmm2
    vmovss  [rsp+0B8h+var_88], xmm1
    vmovss  dword ptr [rsp+0B8h+var_90], xmm0
    vmovss  dword ptr [rsp+0B8h+fmt], xmm0
  }
  RB_ViewportFilterDirectInternal(&v48, rgp.sssMaterials[1][cinematic][vrs], 0xFFFFFFFF, &viewInfo->sceneGeoViewport, fmt, v41, v42, v43, v44, v45, v46, v47, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sss.cpp(102)");
  _R11 = &v49;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

/*
==============
R_SSS_Enabled
==============
*/
bool R_SSS_Enabled(const GfxViewInfo *viewInfo)
{
  __int64 v1; 
  int v2; 
  int v3; 

  if ( !viewInfo->sss.enabled )
    return 0;
  if ( viewInfo->drawList[1].bspSurfList.count <= 1 )
  {
    v1 = 0i64;
    v2 = 0;
    while ( !viewInfo->drawList[1].smodelSurfList[v2].surfDataBytes )
    {
      if ( ++v2 == 3 )
      {
        if ( !viewInfo->drawList[1].drawSurfList.count && !viewInfo->drawList[1].glassSurfList.count && !viewInfo->drawList[1].codeSurfList.count && !viewInfo->drawList[1].superTerrainSurfList.count && viewInfo->drawList[9].bspSurfList.count <= 1 )
        {
          v3 = 0;
          while ( !viewInfo->drawList[9].smodelSurfList[v3].surfDataBytes )
          {
            if ( ++v3 == 3 )
            {
              if ( !viewInfo->drawList[9].drawSurfList.count && !viewInfo->drawList[9].glassSurfList.count && !viewInfo->drawList[9].codeSurfList.count && !viewInfo->drawList[9].superTerrainSurfList.count && viewInfo->drawList[17].bspSurfList.count <= 1 )
              {
                while ( !viewInfo->drawList[17].smodelSurfList[v1].surfDataBytes )
                {
                  v1 = (unsigned int)(v1 + 1);
                  if ( (_DWORD)v1 == 3 )
                    return viewInfo->drawList[17].drawSurfList.count || viewInfo->drawList[17].glassSurfList.count || viewInfo->drawList[17].codeSurfList.count || viewInfo->drawList[17].superTerrainSurfList.count;
                }
              }
              return 1;
            }
          }
        }
        return 1;
      }
    }
  }
  return 1;
}

/*
==============
R_SSS_Init
==============
*/

void __fastcall R_SSS_Init(__int64 a1, __int64 a2, double _XMM2_8)
{
  const dvar_t *v6; 
  const dvar_t *v10; 
  float flags; 
  float description; 

  Dvar_BeginPermanentRegistration();
  __asm
  {
    vmovss  xmm3, cs:__real@41200000; max
    vmovss  xmm1, cs:?SSSSProfileDefault@@3USSSSProfile@@B.maxRadius; value
  }
  r_sssEnable = Dvar_RegisterBool("LNOSSNSNTK", 1, 4u, "Enables the subsurface scattering effect (note that disabling SSS will not prevent the filter from running)");
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v6 = Dvar_RegisterFloat("OTTRLMNPT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Controls the maximum radius (in inches)");
  __asm
  {
    vmovss  xmm3, cs:__real@41200000; max
    vmovss  xmm2, cs:__real@3f000000; min
    vmovss  xmm1, cs:?SSSSProfileDefault@@3USSSSProfile@@B.falloff; value
  }
  r_sssMaxRadius = v6;
  v10 = Dvar_RegisterFloat("MKOLPSNSMN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Controls the blend between far scattering (zero) and near scattering (one)");
  __asm
  {
    vmovss  xmm1, cs:__real@3a83126f
    vmovss  xmm0, cs:__real@3f800000
    vmovss  xmm3, cs:?SSSSProfileDefault@@3USSSSProfile@@B.radius+8; z
    vmovss  xmm2, cs:?SSSSProfileDefault@@3USSSSProfile@@B.radius+4; y
  }
  r_sssFalloff = v10;
  __asm
  {
    vmovss  dword ptr [rsp+48h+description], xmm0
    vmovss  [rsp+48h+flags], xmm1
    vmovss  xmm1, cs:?SSSSProfileDefault@@3USSSSProfile@@B.radius; x
  }
  r_sssRadius = Dvar_RegisterVec3("MQNOQNKRP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flags, description, 0x44u, "Controls the far scattering radius (relative to the maximum radius)");
  Dvar_EndPermanentRegistration();
}

/*
==============
R_SSS_SetInfo
==============
*/

void __fastcall R_SSS_SetInfo(GfxViewInfo *viewInfo, __int64 a2, double _XMM2_8)
{
  bool enabled; 
  float v9; 

  _RDX = viewInfo;
  enabled = r_sssEnable->current.enabled;
  viewInfo->sss.enabled = enabled;
  if ( enabled )
  {
    _RAX = r_sssMaxRadius;
    __asm { vmovss  xmm0, dword ptr [rax+28h] }
  }
  else
  {
    __asm { vmovss  xmm0, cs:__real@34000000 }
  }
  __asm
  {
    vmovss  dword ptr [rcx+387Ch], xmm0
    vxorps  xmm2, xmm2, xmm2
  }
  LODWORD(viewInfo->sss.profile.falloff) = r_sssFalloff->current.integer;
  _RCX = r_sssRadius;
  LODWORD(_RDX->sss.profile.radius[0]) = r_sssRadius->current.integer;
  _RDX->sss.profile.radius[1] = _RCX->current.vector.v[1];
  v9 = _RCX->current.vector.v[2];
  LODWORD(_RCX) = 0;
  _RDX->sss.profile.radius[2] = v9;
  __asm { vmovd   xmm1, ecx }
  _EAX = enabled;
  __asm
  {
    vmovd   xmm0, eax
    vpcmpeqd xmm3, xmm0, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vblendvps xmm0, xmm1, xmm2, xmm3
    vmovss  dword ptr [rdx+18B0h], xmm0
  }
  *(_QWORD *)&_RDX->input.sceneConstants.ssssMaterialParams.xyz.y = 0i64;
  _RDX->input.sceneConstants.ssssMaterialParams.v[3] = 0.0;
}

