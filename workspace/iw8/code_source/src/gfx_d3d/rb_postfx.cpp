/*
==============
R_Screenshot_CapturePipelineStage
==============
*/

void __fastcall R_Screenshot_CapturePipelineStage(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxBackEndData *data, GfxScreenshotPipelineStage pipelineStage, R_RT_ColorHandle *colorRt)
{
  ?R_Screenshot_CapturePipelineStage@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@W4GfxScreenshotPipelineStage@@VR_RT_ColorHandle@@@Z(gfxContext, viewInfo, data, pipelineStage, colorRt);
}

/*
==============
R_Blur_Mip2_Enabled
==============
*/

bool __fastcall R_Blur_Mip2_Enabled(const GfxViewInfo *viewInfo)
{
  return ?R_Blur_Mip2_Enabled@@YA_NPEBUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
R_Blur_Mip_Enabled
==============
*/

bool __fastcall R_Blur_Mip_Enabled(const GfxViewInfo *viewInfo, unsigned int mip)
{
  return ?R_Blur_Mip_Enabled@@YA_NPEBUGfxViewInfo@@I@Z(viewInfo, mip);
}

/*
==============
R_GetBlurRadius
==============
*/

double __fastcall R_GetBlurRadius(float blurRadiusScript, float blurRadiusDvar)
{
  double result; 

  *(float *)&result = ?R_GetBlurRadius@@YAMMM@Z(blurRadiusScript, blurRadiusDvar);
  return result;
}

/*
==============
RB_PostEffects_FreeTemporalRts
==============
*/

void RB_PostEffects_FreeTemporalRts(void)
{
  ?RB_PostEffects_FreeTemporalRts@@YAXXZ();
}

/*
==============
R_Magnify_Part1
==============
*/

void __fastcall R_Magnify_Part1(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_ColorHandle *srcRt)
{
  ?R_Magnify_Part1@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@VR_RT_ColorHandle@@@Z(gfxContext, viewInfo, srcRt);
}

/*
==============
R_Magnify_Part2
==============
*/

void __fastcall R_Magnify_Part2(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_ColorHandle *srcRt)
{
  ?R_Magnify_Part2@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@VR_RT_ColorHandle@@@Z(gfxContext, viewInfo, srcRt);
}

/*
==============
RB_ApplyPostEffects
==============
*/

void __fastcall RB_ApplyPostEffects(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RB_ApplyPostEffects@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(gfxContext, viewInfo, data);
}

/*
==============
R_Blur_Apply
==============
*/

void __fastcall R_Blur_Apply(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_ColorHandle *colorRt, R_RT_ColorHandle *blurColorRt0, R_RT_ColorHandle *blurColorRt1, R_RT_ColorHandle *blurPingPongRt0, R_RT_ColorHandle *blurPingPongRt1, float blurRadius, float blendAlpha, GfxViewport *colorBlurRegion)
{
  ?R_Blur_Apply@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@VR_RT_ColorHandle@@2222MMPEAUGfxViewport@@@Z(gfxContext, viewInfo, colorRt, blurColorRt0, blurColorRt1, blurPingPongRt0, blurPingPongRt1, blurRadius, blendAlpha, colorBlurRegion);
}

/*
==============
R_RefShader_Draw
==============
*/

void __fastcall R_RefShader_Draw(const GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo)
{
  ?R_RefShader_Draw@@YAXAEBUGfxCmdBufContext@@PEBUGfxViewInfo@@@Z(gfxContext, viewInfo);
}

/*
==============
R_Blur_Enabled
==============
*/

bool __fastcall R_Blur_Enabled(const GfxViewInfo *viewInfo)
{
  return ?R_Blur_Enabled@@YA_NPEBUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
R_Blur_Mip1_Enabled
==============
*/

bool __fastcall R_Blur_Mip1_Enabled(const GfxViewInfo *viewInfo)
{
  return ?R_Blur_Mip1_Enabled@@YA_NPEBUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
RB_UsingAAWithBlurScale
==============
*/

double __fastcall RB_UsingAAWithBlurScale(const float blurRadiusFromScript, const float blurRadiusFromDvar)
{
  double result; 

  *(float *)&result = ?RB_UsingAAWithBlurScale@@YAMMM@Z(blurRadiusFromScript, blurRadiusFromDvar);
  return result;
}

/*
==============
R_DrawRefImage
==============
*/

void __fastcall R_DrawRefImage(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, RefImageDrawMode refImageDrawMode)
{
  ?R_DrawRefImage@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@W4RefImageDrawMode@@@Z(gfxContext, viewInfo, refImageDrawMode);
}

/*
==============
R_DebugTextureOverlay
==============
*/

void __fastcall R_DebugTextureOverlay(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxDebugTextureOverlayImages *overlayImages)
{
  ?R_DebugTextureOverlay@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@PEBUGfxDebugTextureOverlayImages@@@Z(gfxContext, viewInfo, overlayImages);
}

/*
==============
R_GetBlurRadiusAlphaAndMip
==============
*/

void __fastcall R_GetBlurRadiusAlphaAndMip(const GfxViewInfo *viewInfo, float *outBlurRadius, float *outBlurAlpha, unsigned int *outBlurMip)
{
  ?R_GetBlurRadiusAlphaAndMip@@YAXPEBUGfxViewInfo@@AEAM1AEAI@Z(viewInfo, outBlurRadius, outBlurAlpha, outBlurMip);
}

/*
==============
RB_ApplyPostEffects
==============
*/
void RB_ApplyPostEffects(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  char *Value; 
  unsigned int *v9; 
  unsigned int v10; 
  _QWORD *v11; 
  char *v12; 
  int *v13; 
  unsigned __int64 v14; 
  ThreadContext CurrentThreadContext; 
  GfxCmdBufSourceState *source; 
  GfxCmdBufState *state; 
  __int64 v73; 
  GfxCmdBufSourceState *v84; 
  GfxCmdBufState *v85; 
  __int64 v90; 
  __int64 v91; 
  R_RT_Handle result_8; 
  R_RT_AllocationLockSentry v93; 
  _QWORD v94[6]; 
  R_RT_ColorHandle v95; 
  R_RT_Group v96; 
  R_RT_ColorHandle v97; 
  _OWORD v98[18]; 
  void *retaddr; 

  _RAX = &retaddr;
  v94[5] = -2i64;
  __asm { vmovaps xmmword ptr [rax-48h], xmm6 }
  _RSI = viewInfo;
  _RDI = gfxContext;
  Value = (char *)Sys_GetValue(0);
  v9 = (unsigned int *)(Value + 6216);
  if ( (unsigned int)(*((_DWORD *)Value + 1554) + 1) >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", *((_DWORD *)Value + 1554) + 1, 3) )
    __debugbreak();
  v10 = *v9 + 1;
  *v9 = v10;
  if ( v10 >= 3 )
  {
    LODWORD(v91) = 3;
    LODWORD(v90) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v90, v91) )
      __debugbreak();
  }
  v11 = Value + 2088;
  v12 = Value + 40;
  if ( *v11 < (unsigned __int64)v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  *v11 += 8i64;
  if ( *v11 >= (unsigned __int64)v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
    __debugbreak();
  *(_QWORD *)*v11 = v9;
  if ( *v11 <= (unsigned __int64)v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
    __debugbreak();
  v13 = (int *)&v9[*v9 + 2];
  v14 = __rdtsc();
  *v13 = v14;
  if ( Sys_HasValidCurrentThreadContext() )
    CurrentThreadContext = Sys_GetCurrentThreadContext();
  else
    CurrentThreadContext = THREAD_CONTEXT_COUNT;
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 103, NULL, 0);
  R_InitCmdBufSourceState(_RDI->source, &_RSI->input);
  source = _RDI->source;
  state = _RDI->state;
  if ( (*((_BYTE *)&_RDI->source->input + 7920) & 1) != 0 )
  {
    R_LockIfGfxImmediateContext(state->device);
    R_InitCmdBufState(state);
  }
  else
  {
    R_LockGfxImmediateContext();
    _RAX = RB_GetBackendCmdBufContext((const GfxCmdBufContext *)&result_8);
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
  state->data = source->input.data;
  R_ProfBeginNamedEvent(_RDI->state, "Post Effects");
  R_BeginViewInternal(_RDI->source, &_RSI->sceneDef, (const GfxViewParms *)_RSI, &_RSI->viewParmsSet.frames[1].viewParms);
  R_SetViewportStruct(_RDI->source, &_RSI->sceneViewport);
  if ( (_RDI->source->sceneViewport.x || _RDI->source->sceneViewport.y) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postfx.cpp", 874, ASSERT_TYPE_ASSERT, "((gfxContext.source->sceneViewport.x == 0) && (gfxContext.source->sceneViewport.y == 0))", (const char *)&queryFormat, "(gfxContext.source->sceneViewport.x == 0) && (gfxContext.source->sceneViewport.y == 0)") )
    __debugbreak();
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi+30C0h]
    vmovups ymmword ptr [rbp+1C0h+var_140.baseclass_0.m_surfaceID], ymm0
    vmovups xmm1, xmmword ptr [rdi]
    vmovups xmmword ptr [rsp+2C0h+result.state], xmm1
  }
  R_Screenshot_HdrScene((GfxCmdBufContext *)&result_8, _RSI, data, &v97);
  Sys_ProfBeginNamedEvent(0xFF00FFFF, "R_RT_AllocationLockSentry");
  R_RT_AllocationLockSentry::R_RT_AllocationLockSentry(&v93);
  Sys_ProfEndNamedEvent();
  R_LockIfGfxImmediateContext(_RDI->state->device);
  if ( R_PostAAHasTemporalSupersampling(_RSI->postAA.mode) && _RSI->postAA.smaaTransMask )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rdi]
      vmovups xmmword ptr [rsp+2C0h+result.state], xmm0
    }
    RB_SMAA_ComputeTransMask((GfxCmdBufContext *)&result_8, _RSI, &_RSI->sceneRtInput.m_mainSceneColorRt, &_RSI->sceneRtInput.m_postOpaqueLuma);
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi+30C0h]
    vmovups ymmword ptr [rsp+2C0h+result.state], ymm0
  }
  _RAX = R_RT_Group::ConstructColor(&v96, (R_RT_ColorHandle *)&result_8);
  _RCX = v98;
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
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
    vmovups xmmword ptr [rcx+0B0h], xmm1
  }
  *(_QWORD *)&v98[12] = _RAX->m_vrsRt.m_tracking.m_location;
  _RSI->sceneRtInput.m_mainSceneColorRt.m_surfaceID = 0;
  _RSI->sceneRtInput.m_mainSceneColorRt.m_tracking.m_allocCounter = 0;
  _RSI->sceneRtInput.m_mainSceneColorRt.m_tracking.m_name = NULL;
  _RSI->sceneRtInput.m_mainSceneColorRt.m_tracking.m_location = NULL;
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vmovups xmmword ptr [rsp+2C0h+result.state], xmm0
  }
  RB_Lens_ScopeDistortion(&v97, (GfxCmdBufContext *)&result_8, _RSI, data);
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vmovups xmmword ptr [rsp+2C0h+result.state], xmm0
  }
  RB_MBlur_Apply((GfxCmdBufContext *)&result_8, _RSI, (R_RT_Group *)v98);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+1C0h+var_140.baseclass_0.m_surfaceID]
    vmovups ymmword ptr [rsp+2C0h+var_258+8], ymm0
    vmovups xmm1, xmmword ptr [rdi]
    vmovups xmmword ptr [rsp+2C0h+result.state], xmm1
  }
  RB_ApplyDepthOfField((GfxCmdBufContext *)&result_8, _RSI, (R_RT_Group *)v98, (R_RT_ColorHandle *)&v94[1], data);
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vmovups xmmword ptr [rsp+2C0h+result.state], xmm0
  }
  RB_VRS_GenerateVRSMask((GfxCmdBufContext *)&result_8, _RSI, (R_RT_Group *)v98);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+1C0h+var_140.baseclass_0.m_surfaceID]
    vmovups ymmword ptr [rsp+2C0h+var_258+8], ymm0
    vmovups xmm1, xmmword ptr [rdi]
    vmovups xmmword ptr [rsp+2C0h+result.state], xmm1
  }
  RB_Lens_Apply((GfxCmdBufContext *)&result_8, _RSI, (R_RT_Group *)v98, GFX_LENS_PROFILE_CONVOLUTION, (R_RT_ColorHandle *)&v94[1], data);
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vmovups xmmword ptr [rsp+2C0h+result.state], xmm0
  }
  RB_UniversalClut_SetParameters((const GfxCmdBufContext *)&result_8, _RSI);
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vmovups xmmword ptr [rsp+2C0h+result.state], xmm0
  }
  RB_DrawRefImage((GfxCmdBufContext *)&result_8, _RSI, (R_RT_Group *)v98, REF_IMAGE_DRAW_PRE_TONEMAP);
  __asm
  {
    vmovups ymm0, [rbp+1C0h+var_118]
    vmovups ymmword ptr [rsp+2C0h+var_258+8], ymm0
    vmovups xmm1, xmmword ptr [rdi]
    vmovups xmmword ptr [rsp+2C0h+result.state], xmm1
  }
  RB_HDRSpotMeter_ProcessStage((GfxCmdBufContext *)&result_8, _RSI, (R_RT_ColorHandle *)&v94[1], SPOTMETER_PRETONEMAP);
  _RAX = R_RT_GetGlobalColor(&v95, R_RENDERTARGET_DISPLAY_BUFFER);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+2C0h+var_258+8], ymm0
    vmovups ymm1, [rbp+1C0h+var_118]
    vmovups ymmword ptr [rsp+2C0h+result.state], ymm1
  }
  RB_HDRScopes_ProcessStage(_RDI, _RSI, &result_8, (R_RT_Handle *)&v94[1], HDR_SCOPES_STAGE_SCENE);
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vmovups xmmword ptr [rsp+2C0h+result.state], xmm0
  }
  RB_Tonemap_Apply((GfxCmdBufContext *)&result_8, _RSI, data, (R_RT_Group *)v98);
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vmovups xmmword ptr [rsp+2C0h+result.state], xmm0
  }
  RB_DrawRefImage((GfxCmdBufContext *)&result_8, _RSI, (R_RT_Group *)v98, REF_IMAGE_DRAW_POST_TONEMAP_COLORMANIP);
  __asm
  {
    vmovups ymm0, [rbp+1C0h+var_118]
    vmovups ymmword ptr [rsp+2C0h+var_258+8], ymm0
    vmovups xmm1, xmmword ptr [rdi]
    vmovups xmmword ptr [rsp+2C0h+result.state], xmm1
  }
  RB_HDRSpotMeter_ProcessStage((GfxCmdBufContext *)&result_8, _RSI, (R_RT_ColorHandle *)&v94[1], SPOTMETER_POSTTONEMAP);
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vmovups xmmword ptr [rsp+2C0h+result.state], xmm0
  }
  RB_ApplyPostAA((GfxCmdBufContext *)&result_8, _RSI, (R_RT_Group *)v98);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+1C0h+var_140.baseclass_0.m_surfaceID]
    vmovups ymmword ptr [rsp+2C0h+var_258+8], ymm0
    vmovups xmm1, xmmword ptr [rdi]
    vmovups xmmword ptr [rsp+2C0h+result.state], xmm1
  }
  RB_Lens_Apply((GfxCmdBufContext *)&result_8, _RSI, (R_RT_Group *)v98, GFX_LENS_PROFILE_DISTORTION, (R_RT_ColorHandle *)&v94[1], data);
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vmovups xmmword ptr [rsp+2C0h+result.state], xmm0
  }
  RB_DroneCamera_Apply((GfxCmdBufContext *)&result_8, _RSI, (R_RT_Group *)v98);
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi+33C0h]
    vmovups ymmword ptr [rsp+2C0h+var_258+8], ymm0
    vmovups xmm1, xmmword ptr [rdi]
    vmovups xmmword ptr [rsp+2C0h+result.state], xmm1
  }
  RB_Distortion_Apply((GfxCmdBufContext *)&result_8, _RSI, (R_RT_Group *)v98, (R_RT_ColorHandle *)&v94[1]);
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vmovups xmmword ptr [rsp+2C0h+result.state], xmm0
  }
  RB_Blur_Apply((GfxCmdBufContext *)&result_8, _RSI, (R_RT_Group *)v98);
  result_8.m_surfaceID = 0;
  result_8.m_tracking.m_allocCounter = 0;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+2C0h+result.state+10h], xmm0
  }
  if ( (v97.m_surfaceID & 0x7FFF) != 0 )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+1C0h+var_140.baseclass_0.m_surfaceID]
      vmovups ymmword ptr [rsp+2C0h+var_258+8], ymm0
      vmovups xmm1, xmmword ptr [rdi]
      vmovups xmmword ptr [rsp+2C0h+result.state], xmm1
    }
    R_RT_Destroy((GfxCmdBufContext *)&result_8, (R_RT_ColorHandle *)&v94[1]);
    v97.m_surfaceID = 0;
    v97.m_tracking.m_allocCounter = 0;
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rbp+1C0h+var_140.baseclass_0.m_tracking.m_name], xmm0
    }
  }
  if ( LOBYTE(v98[0]) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 559, ASSERT_TYPE_ASSERT, "(this->m_colorRtCount == 1)", (const char *)&queryFormat, "this->m_colorRtCount == 1") )
    __debugbreak();
  __asm
  {
    vmovups ymm0, [rbp+1C0h+var_118]
    vmovups ymmword ptr [rsp+2C0h+var_258+8], ymm0
    vmovups xmm1, xmmword ptr [rdi]
    vmovups xmmword ptr [rsp+2C0h+result.state], xmm1
  }
  R_Screenshot_PreCompositeToDisplayScene((GfxCmdBufContext *)&result_8, _RSI, data, (R_RT_ColorHandle *)&v94[1]);
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vmovups xmmword ptr [rsp+2C0h+result.state], xmm0
  }
  RB_CompositeToDisplay((GfxCmdBufContext *)&result_8, _RSI, (R_RT_Group *)v98);
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vmovups xmmword ptr [rsp+2C0h+result.state], xmm0
  }
  RB_ApplyHudOutline((GfxCmdBufContext *)&result_8, _RSI, (R_RT_Group *)v98);
  __asm { vmovups xmm6, xmmword ptr [rdi] }
  v73 = LOBYTE(v98[0]) - 1i64;
  if ( v73 >= 0 )
  {
    _RBX = &v98[2 * v73 + 2];
    do
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbx-18h]
        vmovups ymmword ptr [rsp+2C0h+var_258+8], ymm0
        vmovdqa xmmword ptr [rsp+2C0h+result.state], xmm6
      }
      R_RT_Destroy((GfxCmdBufContext *)&result_8, (R_RT_ColorHandle *)&v94[1]);
      *((_WORD *)_RBX - 12) = 0;
      *((_DWORD *)_RBX - 4) = 0;
      *(_RBX - 1) = 0i64;
      *_RBX = 0i64;
      _RBX -= 4;
      --v73;
    }
    while ( v73 >= 0 );
  }
  __asm
  {
    vmovups ymm0, [rbp+1C0h+var_98]
    vmovups ymmword ptr [rsp+2C0h+var_258+8], ymm0
    vmovdqa xmmword ptr [rsp+2C0h+result.state], xmm6
  }
  R_RT_Destroy((GfxCmdBufContext *)&result_8, (R_RT_DepthHandle *)&v94[1]);
  LOBYTE(v98[0]) = 0;
  WORD4(v98[8]) = 0;
  LODWORD(v98[9]) = 0;
  *((_QWORD *)&v98[9] + 1) = 0i64;
  *(_QWORD *)&v98[10] = 0i64;
  WORD4(v98[10]) = 0;
  LODWORD(v98[11]) = 0;
  *((_QWORD *)&v98[11] + 1) = 0i64;
  *(_QWORD *)&v98[12] = 0i64;
  R_UnlockIfGfxImmediateContext(_RDI->state->device);
  R_RT_AllocationLockSentry::~R_RT_AllocationLockSentry(&v93);
  __asm { vmovups xmm6, xmmword ptr [rdi] }
  R_RT_GetGlobalColor(&v97, R_RENDERTARGET_DISPLAY_BUFFER);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+1C0h+var_140.baseclass_0.m_surfaceID]
    vmovups ymmword ptr [rsp+2C0h+var_258+8], ymm0
    vpextrq rbx, xmm6, 1
  }
  R_AddRenderTargetTransition(_RBX, (R_RT_ColorHandle *)&v94[1], RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(_RBX);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+1C0h+var_140.baseclass_0.m_surfaceID]
    vmovups ymmword ptr [rsp+2C0h+var_258+8], ymm0
    vmovdqa xmmword ptr [rsp+2C0h+result.state], xmm6
  }
  R_Screenshot_PostTonemapScene((GfxCmdBufContext *)&result_8, _RSI, data, (R_RT_ColorHandle *)&v94[1]);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+1C0h+var_140.baseclass_0.m_surfaceID]
    vmovups ymmword ptr [rsp+2C0h+var_258+8], ymm0
  }
  R_AddRenderTargetTransition(_RBX, (R_RT_ColorHandle *)&v94[1], RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(_RBX);
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vmovups xmmword ptr [rsp+2C0h+result.state], xmm0
  }
  RB_DrawDebugPostEffects((GfxCmdBufContext *)&result_8, _RSI, data);
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vmovups xmmword ptr [rsp+2C0h+result.state], xmm0
  }
  RB_Magnify((GfxCmdBufContext *)&result_8, _RSI);
  R_ProfEndNamedEvent(_RDI->state);
  v84 = _RDI->source;
  v85 = _RDI->state;
  R_ResetRenderTargets(v85);
  if ( (*((_BYTE *)&v84->input + 7920) & 1) != 0 )
  {
    R_ShutdownCmdBufState(v85);
    R_UnlockIfGfxImmediateContext(v85->device);
  }
  else
  {
    _RAX = RB_GetBackendCmdBufContext((const GfxCmdBufContext *)&result_8);
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vpextrq rcx, xmm0, 1; out
    }
    if ( v85 != _RCX )
    {
      GfxCmdBufState::Copy(_RCX, v85);
      R_FlushImmediateContext();
    }
    R_UnlockGfxImmediateContext();
  }
  Profile_EndInternal(NULL);
  __asm { vmovaps xmm6, [rsp+2C0h+var_48+8] }
}

/*
==============
RB_Blur_Apply
==============
*/
void RB_Blur_Apply(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_Group *activeGroup)
{
  unsigned int v8; 
  char v12; 
  bool v16; 
  char v24; 
  int v27; 
  unsigned int width; 
  unsigned int height; 
  unsigned int m_allocWidth; 
  unsigned int m_allocHeight; 
  char v32; 
  const dvar_t *v33; 
  unsigned int v34; 
  unsigned int v35; 
  unsigned int v36; 
  const dvar_t *v37; 
  int v38; 
  const dvar_t *v39; 
  int v40; 
  int rtFlags; 
  GfxCmdBufState *state; 
  double depth; 
  float mipLimit; 
  float format; 
  R_RT_Handle v70; 
  unsigned int v71; 
  unsigned int allocHeight; 
  R_RT_Handle result; 
  R_RT_ColorHandle v77; 
  R_RT_ColorHandle v78; 
  R_RT_ColorHandle v79; 
  R_RT_ColorHandle v80; 
  unsigned int v84; 
  unsigned int v85; 

  _RDI = activeGroup;
  _RBX = viewInfo;
  LOBYTE(v8) = R_Screenshot_GetDeferredScreenshotPipelineStage(viewInfo->deferredScreenshotIndex);
  if ( v8 != 2 )
  {
    __asm
    {
      vmovaps [rsp+220h+var_40], xmm6
      vxorps  xmm6, xmm6, xmm6
      vcomiss xmm6, dword ptr [rbx+9A8h]
    }
    if ( v8 < 2 )
    {
      __asm { vmovaps [rsp+220h+var_50], xmm7 }
      Sys_ProfBeginNamedEvent(0xFFFF7F50, "Blur Screen");
      R_ProfBeginNamedEvent(gfxContext->state, "Blur Screen");
      R_GPU_BeginTimer(GPU_TIMER_POST_AA);
      if ( _RDI->m_colorRtCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 559, ASSERT_TYPE_ASSERT, "(this->m_colorRtCount == 1)", (const char *)&queryFormat, "this->m_colorRtCount == 1") )
        __debugbreak();
      __asm
      {
        vmovups ymm0, ymmword ptr [rdi+8]
        vmovss  xmm1, dword ptr [rbx+9A8h]; blurRadiusDvar
        vmovups [rbp+100h+var_F0], ymm0
        vmovups ymmword ptr [rbp+100h+var_180.m_surfaceID], ymm0
        vmovss  xmm0, dword ptr [rbx+9A4h]; blurRadiusScript
      }
      *(double *)&_XMM0 = R_GetBlurRadius(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vcomiss xmm0, xmm6
        vmovaps xmm7, xmm0
      }
      if ( v12 )
      {
        __asm
        {
          vcvtss2sd xmm1, xmm7, xmm0
          vmovsd  qword ptr [rsp+220h+depth], xmm1
        }
        v16 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postfx.cpp", 82, ASSERT_TYPE_SANITY, "( ( blurRadius >= 0.0f ) )", "( blurRadius ) = %g", depth);
        v12 = 0;
        if ( v16 )
          __debugbreak();
      }
      __asm
      {
        vmulss  xmm1, xmm7, cs:__real@3a72b9d6
        vmovss  xmm7, cs:__real@3f800000
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
      }
      _RAX = r_blurAALimit;
      __asm
      {
        vmulss  xmm6, xmm1, xmm0
        vmovss  xmm0, dword ptr [rax+28h]
        vcomiss xmm6, xmm0
      }
      if ( v12 )
      {
        __asm
        {
          vdivss  xmm7, xmm6, xmm0
          vmovaps xmm6, xmm0
        }
      }
      v24 = 2;
      __asm
      {
        vdivss  xmm0, xmm6, dword ptr [rax+28h]
        vcvttss2si rax, xmm0
      }
      v27 = _RAX + 1;
      if ( v27 < 2 )
        v24 = v27;
      width = R_RT_Handle::GetSurface(&v70)->m_image.m_base.width;
      v71 = width;
      height = R_RT_Handle::GetSurface(&v70)->m_image.m_base.height;
      m_allocWidth = R_RT_Handle::GetSurface(&v70)->m_allocWidth;
      v85 = m_allocWidth;
      m_allocHeight = R_RT_Handle::GetSurface(&v70)->m_allocHeight;
      v84 = m_allocHeight;
      if ( _RBX->sceneViewport.height != height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postfx.cpp", 222, ASSERT_TYPE_ASSERT, "(viewInfo->sceneViewport.height == srcHeight)", (const char *)&queryFormat, "viewInfo->sceneViewport.height == srcHeight") )
        __debugbreak();
      v32 = v24;
      v33 = r_deviceDebug;
      v34 = width >> v32;
      v35 = height >> v32;
      v36 = m_allocWidth >> v32;
      allocHeight = m_allocHeight >> v32;
      if ( !r_deviceDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v33);
      if ( v33->current.enabled )
        goto LABEL_25;
      v37 = DCONST_DVARBOOL_r_esramPostFX;
      if ( !DCONST_DVARBOOL_r_esramPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramPostFX") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v37);
      v38 = 2112;
      if ( !v37->current.enabled )
LABEL_25:
        v38 = 2048;
      v39 = DCONST_DVARINT_r_dccPostFX;
      if ( !DCONST_DVARINT_r_dccPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_dccPostFX") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v39);
      v40 = 0;
      if ( v39->current.integer == 1 )
        v40 = 8;
      rtFlags = v40 | v38;
      _RAX = R_RT_CreateInternal(&result, v71 >> 1, height >> 1, v85 >> 1, v84 >> 1, 1u, 1u, 1u, g_R_RT_renderTargetFmts[1], (R_RT_Flags)rtFlags, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "R_RENDERTARGET_POST_EFFECT_BLUR_0", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postfx.cpp(252)");
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovd   eax, xmm0
        vmovups [rbp+100h+var_110], ymm0
        vmovups ymmword ptr [rbp+100h+var_180.m_surfaceID], ymm0
      }
      if ( (_WORD)_RAX )
      {
        R_RT_Handle::GetSurface(&v70);
        if ( (R_RT_Handle::GetSurface(&v70)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        {
          __asm
          {
            vmovups ymm0, ymmword ptr [rbp+100h+var_180.m_surfaceID]
            vmovups [rbp+100h+var_110], ymm0
          }
          __debugbreak();
        }
        else
        {
          __asm
          {
            vmovups ymm0, ymmword ptr [rbp+100h+var_180.m_surfaceID]
            vmovups [rbp+100h+var_110], ymm0
          }
        }
      }
      else
      {
        __asm { vpextrd rax, xmm0, 2 }
        if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
      }
      _RAX = R_RT_CreateInternal(&result, v34, v35, v36, allocHeight, 1u, 1u, 1u, g_R_RT_renderTargetFmts[1], (R_RT_Flags)rtFlags, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "R_RENDERTARGET_POST_EFFECT_BLUR_1", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postfx.cpp(253)");
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovd   eax, xmm0
        vmovups [rbp+100h+var_130], ymm0
        vmovups ymmword ptr [rbp+100h+var_180.m_surfaceID], ymm0
      }
      if ( (_WORD)_RAX )
      {
        R_RT_Handle::GetSurface(&v70);
        if ( (R_RT_Handle::GetSurface(&v70)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        {
          __asm
          {
            vmovups ymm0, ymmword ptr [rbp+100h+var_180.m_surfaceID]
            vmovups [rbp+100h+var_130], ymm0
          }
          __debugbreak();
        }
        else
        {
          __asm
          {
            vmovups ymm0, ymmword ptr [rbp+100h+var_180.m_surfaceID]
            vmovups [rbp+100h+var_130], ymm0
          }
        }
      }
      else
      {
        __asm { vpextrd rax, xmm0, 2 }
        if ( (_DWORD)_RAX )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
            __debugbreak();
        }
      }
      __asm
      {
        vpxor   xmm0, xmm0, xmm0
        vmovdqu xmmword ptr [rbp+100h+var_180.m_tracking.m_name], xmm0
        vmovups ymm0, [rbp+100h+var_130]
        vmovss  [rsp+220h+format], xmm7
      }
      v70.m_surfaceID = 0;
      v70.m_tracking.m_allocCounter = 0;
      __asm { vmovups ymm1, ymmword ptr [rbp+100h+var_180.m_surfaceID] }
      _RDI = gfxContext;
      __asm
      {
        vmovss  [rsp+220h+mipLimit], xmm6
        vmovups [rbp+100h+var_90], ymm0
        vmovups ymm0, [rbp+100h+var_F0]
        vmovups ymmword ptr [rbp+100h+result.m_surfaceID], ymm0
        vmovups xmm0, xmmword ptr [rdi]
        vmovups [rbp+100h+var_D0], ymm1
        vmovups [rbp+100h+var_B0], ymm1
        vmovups ymm1, [rbp+100h+var_110]
        vmovups xmmword ptr [rbp+100h+var_180.m_surfaceID], xmm0
        vmovups [rbp+100h+var_70], ymm1
      }
      R_Blur_Apply((GfxCmdBufContext *)&v70, _RBX, (R_RT_ColorHandle *)&result, &v80, &v79, &v78, &v77, mipLimit, format, NULL);
      __asm { vmovups ymm0, [rbp+100h+var_F0] }
      state = gfxContext->state;
      __asm { vmovups ymmword ptr [rbp+100h+result.m_surfaceID], ymm0 }
      R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&result, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_FlushResourceTransitions(state);
      __asm
      {
        vmovups ymm0, [rbp+100h+var_130]
        vmovups ymmword ptr [rbp+100h+result.m_surfaceID], ymm0
        vmovups xmm0, xmmword ptr [rdi]
        vmovups xmmword ptr [rbp+100h+var_180.m_surfaceID], xmm0
      }
      R_RT_Destroy((GfxCmdBufContext *)&v70, (R_RT_ColorHandle *)&result);
      __asm
      {
        vmovups ymm0, [rbp+100h+var_110]
        vmovups ymmword ptr [rbp+100h+result.m_surfaceID], ymm0
        vmovups xmm0, xmmword ptr [rdi]
        vmovups xmmword ptr [rbp+100h+var_180.m_surfaceID], xmm0
      }
      R_RT_Destroy((GfxCmdBufContext *)&v70, (R_RT_ColorHandle *)&result);
      R_GPU_EndTimer();
      R_ProfEndNamedEvent(state);
      Sys_ProfEndNamedEvent();
      __asm { vmovaps xmm7, [rsp+220h+var_50] }
    }
    else
    {
      __asm { vcomiss xmm6, dword ptr [rbx+9A4h] }
    }
    __asm { vmovaps xmm6, [rsp+220h+var_40] }
  }
}

/*
==============
RB_CompositeToDisplay
==============
*/

void __fastcall RB_CompositeToDisplay(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_Group *activeGroup, double _XMM3_8)
{
  GfxCmdBufSourceState *source; 
  R_RT_Image *p_m_image; 
  GfxCmdBufInput *p_input; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  GfxCmdBufSourceState *v19; 
  float fmt; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  R_RT_Handle v35; 
  R_RT_ColorHandle result; 
  R_RT_ColorHandle v37; 
  GfxViewport viewport; 

  _RBP = viewInfo;
  _RSI = gfxContext;
  _RDI = activeGroup;
  R_RT_GetGlobalColor(&result, R_RENDERTARGET_DISPLAY_BUFFER);
  RB_SetWaitFlipOncePerFrame(_RSI->state);
  R_ProfBeginNamedEvent(_RSI->state, "RB_CompositeToDisplay");
  R_GPU_BeginTimer(GPU_TIMER_DISPLAY_COMPOSITE);
  source = _RSI->source;
  R_BeginViewInternal(_RSI->source, &_RBP->sceneDef, (const GfxViewParms *)_RBP, &_RBP->viewParmsSet.frames[1].viewParms);
  if ( _RDI->m_colorRtCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 559, ASSERT_TYPE_ASSERT, "(this->m_colorRtCount == 1)", (const char *)&queryFormat, "this->m_colorRtCount == 1") )
    __debugbreak();
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi+8]
    vmovups ymmword ptr [rsp+118h+var_A8.m_surfaceID], ymm0
  }
  p_m_image = &R_RT_Handle::GetSurface(&v35)->m_image;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  __asm
  {
    vmovups ymm0, ymmword ptr [rsp+118h+result.baseclass_0.m_surfaceID]
    vmovups [rsp+118h+var_68], ymm0
    vmovups xmm0, xmmword ptr [rsi]
  }
  p_input->codeImages[4] = &p_m_image->m_base;
  __asm { vmovups xmmword ptr [rsp+118h+var_A8.m_surfaceID], xmm0 }
  R_SetRenderTargetsInternal_ColorOnly((GfxCmdBufContext *)&v35, &v37, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postfx.cpp(379)");
  __asm
  {
    vmovups ymm0, ymmword ptr [rsp+118h+result.baseclass_0.m_surfaceID]
    vmovups ymmword ptr [rsp+118h+result.baseclass_0.m_surfaceID], ymm0
  }
  height = R_RT_Handle::GetSurface(&result)->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface(&result);
  R_SetRenderTargetSize(_RSI->source, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FOR_VIEW);
  __asm { vmovups xmm0, xmmword ptr [rbp+4B0h] }
  v19 = _RSI->source;
  __asm { vmovups xmmword ptr [rsp+118h+viewport.x], xmm0 }
  R_SetViewportStruct(v19, &viewport);
  __asm
  {
    vmovups xmm0, xmmword ptr [rsi]
    vxorps  xmm1, xmm1, xmm1
    vxorps  xmm3, xmm3, xmm3
    vcvtsi2ss xmm3, xmm3, rax
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, rax
    vmovups xmmword ptr [rsp+118h+var_A8.m_surfaceID], xmm0
    vmovss  xmm0, cs:__real@3f800000
    vmovss  [rsp+118h+var_C0], xmm0
    vmovss  [rsp+118h+var_C8], xmm0
    vmovss  [rsp+118h+var_D0], xmm1
    vmovss  [rsp+118h+var_D8], xmm1
    vmovss  [rsp+118h+var_E0], xmm3
    vmovss  [rsp+118h+var_E8], xmm2
    vmovss  dword ptr [rsp+118h+var_F0], xmm1
    vmovss  dword ptr [rsp+118h+fmt], xmm1
  }
  RB_ViewportFilterDirectInternal((GfxCmdBufContext *)&v35, rgp.filmGrainMaterial, 0xFFFFFFFF, &viewport, fmt, v28, v29, v30, v31, v32, v33, v34, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postfx.cpp(410)");
  R_GPU_EndTimer();
  R_ProfEndNamedEvent(_RSI->state);
}

/*
==============
RB_DrawDebugPostEffects
==============
*/
void RB_DrawDebugPostEffects(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  R_RT_Image *p_m_image; 
  R_RT_Image *blackImage; 
  R_RT_Image *whiteImage; 
  const GfxImage *VrsSurface; 
  CmdBufState *v18; 
  int integer; 
  int v22; 
  const GfxImage *VisibilityImage; 
  float v29; 
  R_RT_ColorHandle result; 
  GfxDebugTextureOverlayImages v31; 
  R_RT_ColorHandle v32; 

  _RDI = viewInfo;
  _RSI = gfxContext;
  R_RT_GetGlobalColor(&result, R_RENDERTARGET_DISPLAY_BUFFER);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+57h+result.baseclass_0.m_surfaceID]
    vmovups xmm1, xmmword ptr [rsi]
    vmovups [rbp+57h+var_30], ymm0
    vmovups xmmword ptr [rbp+57h+result.baseclass_0.m_surfaceID], xmm1
  }
  R_SetRenderTargetsInternal_ColorOnly((GfxCmdBufContext *)&result, &v32, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postfx.cpp(645)");
  v31.floatZ = &R_RT_Handle::GetSurface(&_RDI->sceneRtInput.m_floatZFullRt)->m_image.m_base;
  v31.entityIDVelocity = &R_RT_Handle::GetSurface(&_RDI->sceneRtInput.m_mainSceneEntityIDVelocityRt)->m_image.m_base;
  v31.tangentFrame = &R_RT_Handle::GetSurface(&_RDI->sceneRtInput.m_mainSceneTangentFrameRt)->m_image.m_base;
  _RAX = R_RT_Handle::GetSurface(&_RDI->sceneRtInput.m_packedStencilRt);
  __asm { vmovups ymm0, ymmword ptr [rdi+3408h] }
  v31.packedStencil = &_RAX->m_image.m_base;
  __asm { vmovd   eax, xmm0 }
  v31.stencilMask = &gfxBuf.dummyBuffer;
  __asm { vmovups ymmword ptr [rbp+57h+result.baseclass_0.m_surfaceID], ymm0 }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&result);
    p_m_image = &R_RT_Handle::GetSurface(&result)->m_image;
  }
  else
  {
    if ( result.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", *(_QWORD *)&result.m_surfaceID) )
      __debugbreak();
    p_m_image = (R_RT_Image *)rgp.whiteImage;
  }
  __asm { vmovups ymm0, ymmword ptr [rdi+3428h] }
  v31.ssao = &p_m_image->m_base;
  __asm
  {
    vmovd   eax, xmm0
    vmovups ymmword ptr [rbp+57h+result.baseclass_0.m_surfaceID], ymm0
  }
  if ( (_WORD)_EAX )
  {
    R_RT_Handle::GetSurface(&result);
    blackImage = &R_RT_Handle::GetSurface(&result)->m_image;
  }
  else
  {
    if ( result.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", *(_QWORD *)&result.m_surfaceID) )
      __debugbreak();
    blackImage = (R_RT_Image *)rgp.blackImage;
  }
  v31.ssr = &blackImage->m_base;
  if ( R_RT_Handle::IsValid(&_RDI->sceneRtInput.m_transMask) )
    whiteImage = &R_RT_Handle::GetSurface(&_RDI->sceneRtInput.m_transMask)->m_image;
  else
    whiteImage = (R_RT_Image *)rgp.whiteImage;
  v31.transMask = &whiteImage->m_base;
  VrsSurface = R_VRS_GetVrsSurface();
  __asm { vmovups xmm0, xmmword ptr [rsi] }
  v31.vrs = VrsSurface;
  v31.scopeBuffer = rgp.blackImage;
  v31.sunvisPrepass = &gfxBuf.dummyBuffer;
  __asm { vmovups xmmword ptr [rbp+57h+result.baseclass_0.m_surfaceID], xmm0 }
  if ( rg.debugTextureOverlay )
  {
    v18 = *(CmdBufState **)&result.m_tracking.m_allocCounter;
    R_ProfBeginNamedEvent(*(CmdBufState **)&result.m_tracking.m_allocCounter, "RB_DebugTextureOverlay");
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi]
      vmovups xmmword ptr [rbp+57h+result.baseclass_0.m_surfaceID], xmm0
    }
    R_DebugTextureOverlay((GfxCmdBufContext *)&result, _RDI, &v31);
    R_ProfEndNamedEvent(v18);
  }
  R_RefShader_Draw(_RSI, _RDI);
  integer = r_showFrustumGridDebug->current.integer;
  if ( integer )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi]
      vmovups xmmword ptr [rbp+57h+result.baseclass_0.m_surfaceID], xmm0
    }
    RB_DecalVolumes_FrustumGridOverlay((GfxCmdBufContext *)&result, _RDI, integer);
  }
  else
  {
    v22 = r_showFrustumLightsDebug->current.integer;
    if ( v22 )
    {
      _RAX = r_showFrustumLightsDebugBlend;
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovups xmmword ptr [rbp+57h+result.baseclass_0.m_surfaceID], xmm0
        vmovss  xmm1, dword ptr [rax+28h]
        vmovss  dword ptr [rsp+0E0h+var_B8], xmm1
      }
      RB_FL_ShowDebugOverlay((GfxCmdBufContext *)&result, _RDI, v22, r_showFrustumLightsMinIndexDebug->current.unsignedInt, r_showFrustumLightsMaxIndexDebug->current.unsignedInt, v29);
    }
    else if ( r_volumetricsDebug->current.integer == 1 && R_VOL_AnyVisible(_RDI) )
    {
      VisibilityImage = R_VOL_GetVisibilityImage(data->volumetricsIndex & 1);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovups xmmword ptr [rbp+57h+result.baseclass_0.m_surfaceID], xmm0
      }
      RB_ShowVolumetricDebug((GfxCmdBufContext *)&result, _RDI, data, VisibilityImage);
    }
    else if ( rg.debugOverdrawOverlay )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovups xmmword ptr [rbp+57h+result.baseclass_0.m_surfaceID], xmm0
      }
      RB_ShowOverdrawOverlay((GfxCmdBufContext *)&result, _RDI);
    }
  }
}

/*
==============
RB_DrawRefImage
==============
*/
void RB_DrawRefImage(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_Group *activeRtGroup, RefImageDrawMode refImageDrawMode)
{
  const dvar_t *v4; 
  GfxCmdBufState *state; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  GfxCmdBufSourceState *source; 
  R_RT_Handle v35; 
  R_RT_Handle result; 
  R_RT_Group v37; 
  R_RT_Group v38; 

  v4 = DVARINT_r_refImageDraw;
  _RDI = activeRtGroup;
  _R14 = gfxContext;
  if ( !DVARINT_r_refImageDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_refImageDraw") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.integer == refImageDrawMode )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rdi+8]
      vmovups ymmword ptr [rsp+260h+var_220.m_surfaceID], ymm0
    }
    _RAX = R_RT_Group::ConstructColor(&v37, (R_RT_ColorHandle *)&v35);
    state = _R14->state;
    _RCX = &v38;
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
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
      vmovups xmm0, xmmword ptr [rax+70h]
      vmovups xmmword ptr [rcx+70h], xmm0
      vmovups xmm1, xmmword ptr [rax+80h]
      vmovups xmmword ptr [rcx+80h], xmm1
      vmovups xmm0, xmmword ptr [rax+90h]
      vmovups xmmword ptr [rcx+90h], xmm0
      vmovups xmm1, xmmword ptr [rax+0A0h]
      vmovups xmmword ptr [rcx+0A0h], xmm1
      vmovups xmm0, xmmword ptr [rax+0B0h]
      vmovups xmmword ptr [rcx+0B0h], xmm0
    }
    v38.m_vrsRt.m_tracking.m_location = _RAX->m_vrsRt.m_tracking.m_location;
    R_ProfBeginNamedEvent(state, "Draw RefImage");
    _RAX = R_RT_Group::GetValidRt(&v38, &result);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rsp+260h+var_220.m_surfaceID], ymm0
    }
    height = R_RT_Handle::GetSurface(&v35)->m_image.m_base.height;
    Surface = R_RT_Handle::GetSurface(&v35);
    source = _R14->source;
    R_SetRenderTargetSize(_R14->source, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FOR_VIEW);
    R_BeginViewInternal(source, &viewInfo->sceneDef, (const GfxViewParms *)viewInfo, &viewInfo->viewParmsSet.frames[1].viewParms);
    R_SetViewportStruct(source, &viewInfo->sceneViewport);
    __asm
    {
      vmovups xmm0, xmmword ptr [r14]
      vmovups xmmword ptr [rsp+260h+var_220.m_surfaceID], xmm0
    }
    R_SetRenderTargetsInternal((GfxCmdBufContext *)&v35, &v38, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postfx.cpp(836)");
    if ( v38.m_colorRtCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 559, ASSERT_TYPE_ASSERT, "(this->m_colorRtCount == 1)", (const char *)&queryFormat, "this->m_colorRtCount == 1") )
      __debugbreak();
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+160h+var_110.m_colorRts.baseclass_0.m_surfaceID]
      vmovups ymmword ptr [rsp+260h+var_220.m_surfaceID], ymm0
    }
    R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v35, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(state);
    __asm
    {
      vmovups xmm0, xmmword ptr [r14]
      vmovups xmmword ptr [rsp+260h+var_220.m_surfaceID], xmm0
    }
    R_DrawRefImage((GfxCmdBufContext *)&v35, viewInfo, refImageDrawMode);
    if ( v38.m_colorRtCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 559, ASSERT_TYPE_ASSERT, "(this->m_colorRtCount == 1)", (const char *)&queryFormat, "this->m_colorRtCount == 1") )
    {
      __debugbreak();
      state = _R14->state;
    }
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+160h+var_110.m_colorRts.baseclass_0.m_surfaceID]
      vmovups ymmword ptr [rsp+260h+var_220.m_surfaceID], ymm0
    }
    R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v35, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(state);
    __asm
    {
      vmovups xmm0, xmmword ptr [r14]
      vmovups xmmword ptr [rsp+260h+var_220.m_surfaceID], xmm0
    }
    R_UnbindRenderTarget((GfxCmdBufContext *)&v35);
    R_ProfEndNamedEvent(state);
  }
}

/*
==============
RB_Magnify
==============
*/

void __fastcall RB_Magnify(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, double _XMM2_8)
{
  GfxCmdBufState *state; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  unsigned int v26; 
  const R_RT_Surface *v27; 
  R_RT_Handle v47; 
  R_RT_Handle v48; 
  R_RT_ColorHandle result; 
  GfxCmdBufContext v51; 

  _R12 = gfxContext;
  if ( r_magnifierEnable->current.enabled )
  {
    R_ProfBeginNamedEvent(gfxContext->state, "RB_Magnify");
    R_RT_GetGlobalColor(&result, R_RENDERTARGET_DISPLAY_BUFFER);
    _RAX = R_RT_CreateInternal(&v48, viewInfo->displayViewport.width, viewInfo->displayViewport.height, viewInfo->displayViewport.width, viewInfo->displayViewport.height, 1u, 1u, 1u, g_R_RT_renderTargetFmts[1], R_RT_Flag_RTView, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Magnify Temp", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postfx.cpp(771)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovd   eax, xmm0
      vmovups [rbp+40h+var_80], ymm0
      vmovups ymmword ptr [rbp+40h+var_C0.m_surfaceID], ymm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v47);
      if ( (R_RT_Handle::GetSurface(&v47)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+40h+var_C0.m_surfaceID]
          vmovups [rbp+40h+var_80], ymm0
        }
        __debugbreak();
      }
      else
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+40h+var_C0.m_surfaceID]
          vmovups [rbp+40h+var_80], ymm0
        }
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
      }
    }
    __asm { vmovups ymm0, ymmword ptr [rbp+40h+result.baseclass_0.m_surfaceID] }
    state = _R12->state;
    __asm { vmovups ymmword ptr [rbp+40h+var_C0.m_surfaceID], ymm0 }
    R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v47, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    __asm
    {
      vmovups ymm0, [rbp+40h+var_80]
      vmovups ymmword ptr [rbp+40h+var_C0.m_surfaceID], ymm0
    }
    R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v47, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(state);
    __asm
    {
      vmovups ymm0, [rbp+40h+var_80]
      vmovups ymmword ptr [rbp+40h+var_C0.m_surfaceID], ymm0
    }
    height = R_RT_Handle::GetSurface(&v47)->m_image.m_base.height;
    Surface = R_RT_Handle::GetSurface(&v47);
    R_SetRenderTargetSize(_R12->source, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FULL);
    __asm
    {
      vmovups ymm0, [rbp+40h+var_80]
      vmovups ymmword ptr [rbp+40h+var_C0.m_surfaceID], ymm0
      vmovups xmm0, xmmword ptr [r12]
      vmovups [rbp+40h+var_40], xmm0
    }
    R_SetRenderTargetsInternal_ColorOnly(&v51, (R_RT_ColorHandle *)&v47, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postfx.cpp(777)");
    __asm { vmovups ymm0, ymmword ptr [rbp+40h+result.baseclass_0.m_surfaceID] }
    v51.state = *(GfxCmdBufState **)&viewInfo->displayViewport.width;
    __asm
    {
      vmovups ymmword ptr [rbp+40h+var_A0.m_surfaceID], ymm0
      vmovups xmm0, xmmword ptr [r12]
    }
    v51.source = NULL;
    __asm { vmovups xmmword ptr [rbp+40h+var_C0.m_surfaceID], xmm0 }
    R_CopyPartialRT((GfxCmdBufContext *)&v47, (R_RT_ColorHandle *)&v48, (const GfxViewport *)&v51, &viewInfo->displayViewport, rgp.feedbackReplaceBackbufferMaterial);
    __asm
    {
      vmovups xmm0, xmmword ptr [r12]
      vmovups xmmword ptr [rbp+40h+var_C0.m_surfaceID], xmm0
    }
    R_UnbindRenderTarget((GfxCmdBufContext *)&v47);
    __asm
    {
      vmovups ymm0, [rbp+40h+var_80]
      vmovups ymmword ptr [rbp+40h+var_A0.m_surfaceID], ymm0
    }
    R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v48, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+40h+result.baseclass_0.m_surfaceID]
      vmovups ymmword ptr [rbp+40h+var_A0.m_surfaceID], ymm0
    }
    R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v48, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(state);
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+40h+result.baseclass_0.m_surfaceID]
      vmovups ymmword ptr [rbp+40h+var_C0.m_surfaceID], ymm0
    }
    v26 = R_RT_Handle::GetSurface(&v47)->m_image.m_base.height;
    v27 = R_RT_Handle::GetSurface(&v47);
    R_SetRenderTargetSize(_R12->source, v27->m_image.m_base.width, v26, GFX_USE_VIEWPORT_FULL);
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+40h+result.baseclass_0.m_surfaceID]
      vmovups ymmword ptr [rbp+40h+var_A0.m_surfaceID], ymm0
      vmovups xmm0, xmmword ptr [r12]
      vmovups xmmword ptr [rbp+40h+var_C0.m_surfaceID], xmm0
    }
    R_SetRenderTargetsInternal_ColorOnly((GfxCmdBufContext *)&v47, (R_RT_ColorHandle *)&v48, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postfx.cpp(786)");
    __asm
    {
      vxorps  xmm2, xmm2, xmm2
      vcvtsi2ss xmm2, xmm2, rax
      vdivss  xmm0, xmm2, dword ptr [rcx+28h]
      vcvttss2si rax, xmm0
    }
    LODWORD(v51.state) = _RAX;
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, rax
      vdivss  xmm0, xmm1, dword ptr [rcx+2Ch]
      vcvttss2si rax, xmm0
    }
    HIDWORD(v51.state) = _RAX;
    __asm
    {
      vmulss  xmm0, xmm2, dword ptr [rcx+30h]
      vcvttss2si rax, xmm0
    }
    LODWORD(v51.source) = _RAX;
    __asm
    {
      vmulss  xmm0, xmm1, dword ptr [rcx+34h]
      vcvttss2si rax, xmm0
      vmovups ymm0, [rbp+40h+var_80]
      vmovups ymmword ptr [rbp+40h+var_A0.m_surfaceID], ymm0
      vmovups xmm0, xmmword ptr [r12]
    }
    HIDWORD(v51.source) = _RAX;
    __asm { vmovups xmmword ptr [rbp+40h+var_C0.m_surfaceID], xmm0 }
    R_CopyPartialRT((GfxCmdBufContext *)&v47, (R_RT_ColorHandle *)&v48, &viewInfo->displayViewport, (const GfxViewport *)&v51, rgp.feedbackReplaceBackbufferMaterial);
    __asm
    {
      vmovups xmm0, xmmword ptr [r12]
      vmovups xmmword ptr [rbp+40h+var_C0.m_surfaceID], xmm0
    }
    R_UnbindRenderTarget((GfxCmdBufContext *)&v47);
    __asm
    {
      vmovups ymm0, [rbp+40h+var_80]
      vmovups ymmword ptr [rbp+40h+var_A0.m_surfaceID], ymm0
      vmovups xmm0, xmmword ptr [r12]
      vmovups xmmword ptr [rbp+40h+var_C0.m_surfaceID], xmm0
    }
    R_RT_Destroy((GfxCmdBufContext *)&v47, (R_RT_ColorHandle *)&v48);
    R_ProfEndNamedEvent(state);
  }
}

/*
==============
RB_PostEffects_FreeTemporalRts
==============
*/
void RB_PostEffects_FreeTemporalRts(void)
{
  R_SMAA_FreeTemporalRts();
  RB_DepthOfField_FreeTemporalRts();
}

/*
==============
RB_UsingAAWithBlurScale
==============
*/

float __fastcall RB_UsingAAWithBlurScale(double blurRadiusFromScript, double blurRadiusFromDvar)
{
  _RAX = r_blurAALimit;
  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps [rsp+48h+var_28], xmm7
    vxorps  xmm7, xmm7, xmm7
    vmovss  xmm6, dword ptr [rax+28h]
    vcomiss xmm6, xmm7
  }
  blurRadiusFromScript = R_GetBlurRadius(*(float *)&blurRadiusFromScript, *(float *)&blurRadiusFromDvar);
  __asm
  {
    vdivss  xmm0, xmm0, xmm6; val
    vmovss  xmm6, cs:__real@3f800000
    vmovaps xmm2, xmm6; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vsubss  xmm0, xmm6, xmm0
    vmovaps xmm6, [rsp+48h+var_18]
    vmovaps xmm7, [rsp+48h+var_28]
  }
  return *(float *)&_XMM0;
}

/*
==============
R_Blur_Apply
==============
*/
void R_Blur_Apply(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_ColorHandle *colorRt, R_RT_ColorHandle *blurColorRt0, R_RT_ColorHandle *blurColorRt1, R_RT_ColorHandle *blurPingPongRt0, R_RT_ColorHandle *blurPingPongRt1, float blurRadius, float blendAlpha, GfxViewport *colorBlurRegion)
{
  unsigned int height; 
  unsigned int v19; 
  const R_RT_Surface *Surface; 
  unsigned int width; 
  GfxCmdBufState *state; 
  unsigned int v28; 
  unsigned int v30; 
  unsigned int v39; 
  const R_RT_Surface *v40; 
  R_RT_Image *p_m_image; 
  float fmt; 
  float v58; 
  float v59; 
  float v60; 
  float v61; 
  float v62; 
  float v63; 
  float v64; 
  R_RT_Handle v65; 
  R_RT_ColorHandle *v66; 
  R_RT_ColorHandle *v67; 
  R_RT_ColorHandle v68; 
  R_RT_Handle v69; 
  R_RT_ColorHandle v70; 
  R_RT_ColorHandle v71; 
  GfxViewport v72; 
  GfxViewport v73; 

  _R12 = blurColorRt1;
  _R15 = blurColorRt0;
  v67 = blurPingPongRt0;
  _RSI = colorRt;
  v66 = blurPingPongRt1;
  _R14 = gfxContext;
  _RAX = colorBlurRegion;
  if ( colorBlurRegion )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups [rbp+90h+var_70], xmm0
    }
  }
  else
  {
    height = R_RT_Handle::GetSurface(colorRt)->m_image.m_base.height;
    v72.width = R_RT_Handle::GetSurface(_RSI)->m_image.m_base.width;
    *(_QWORD *)&v72.x = 0i64;
    v72.height = height;
  }
  v19 = R_RT_Handle::GetSurface(_R15)->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface(_R15);
  __asm { vmovups ymm0, ymmword ptr [r15] }
  width = Surface->m_image.m_base.width;
  *(_QWORD *)&v73.x = 0i64;
  state = _R14->state;
  v73.width = width;
  v73.height = v19;
  __asm { vmovups ymmword ptr [rsp+190h+var_120.m_surfaceID], ymm0 }
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v65, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi]
    vmovups ymm1, ymmword ptr [r15]
    vmovups [rbp+90h+var_B0], ymm0
    vmovups xmm0, xmmword ptr [r14]
    vmovups xmmword ptr [rsp+190h+var_120.m_surfaceID], xmm0
    vmovups [rbp+90h+var_F0], ymm1
  }
  RB_CopyPartialRT((GfxCmdBufContext *)&v65, &v68, &v70, &v73, &v72, rgp.feedbackReplaceBackbufferMaterial);
  __asm
  {
    vmovups ymm0, ymmword ptr [r15]
    vmovups [rbp+90h+var_F0], ymm0
  }
  R_AddRenderTargetTransition(state, &v68, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  v28 = R_RT_Handle::GetSurface(blurColorRt1)->m_image.m_base.height;
  __asm { vmovss  xmm2, [rbp+90h+arg_38] }
  v30 = R_RT_Handle::GetSurface(blurColorRt1)->m_image.m_base.width;
  _RAX = v66;
  __asm { vmovups ymm0, ymmword ptr [rax] }
  _RAX = v67;
  __asm
  {
    vmovups [rbp+90h+var_F0], ymm0
    vmovups ymm0, ymmword ptr [r12]
    vmovups [rbp+90h+var_90], ymm0
    vmovups ymm1, ymmword ptr [rax]
    vmovups xmm0, xmmword ptr [r14]
    vmovups [rbp+90h+var_B0], ymm1
    vmovups ymm1, ymmword ptr [r15]
    vmovups [rbp+90h+var_D0], ymm1
    vmovups xmmword ptr [rsp+190h+var_120.m_surfaceID], xmm0
  }
  RB_GaussianFilterImage((GfxCmdBufContext *)&v65, 0, *(float *)&_XMM2, (R_RT_ColorHandle *)&v69, &v71, &v70, &v68, v30, v28, GFX_RENDERTARGET_FORMAT_BACKBUFFER, 4u, viewInfo);
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi]
    vmovups ymmword ptr [rsp+190h+var_120.m_surfaceID], ymm0
    vmovups [rbp+90h+var_D0], ymm0
  }
  R_HW_AddResourceTransition(state, &v69, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_RENDER_TARGET, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  v39 = R_RT_Handle::GetSurface(&v65)->m_image.m_base.height;
  v40 = R_RT_Handle::GetSurface(&v65);
  _RDI = _R14->source;
  R_SetRenderTargetSize(_R14->source, v40->m_image.m_base.width, v39, GFX_USE_VIEWPORT_FOR_VIEW);
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi]
    vmovups xmm1, xmmword ptr [r14]
    vmovups [rbp+90h+var_D0], ymm0
    vmovups xmmword ptr [rsp+190h+var_120.m_surfaceID], xmm1
  }
  R_SetRenderTargetsInternal_ColorOnly((GfxCmdBufContext *)&v65, (R_RT_ColorHandle *)&v69, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postfx.cpp(193)");
  p_m_image = &R_RT_Handle::GetSurface(blurColorRt1)->m_image;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( _RDI == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, [rbp+90h+arg_40]
    vmovss  dword ptr [rdi+0ABCh], xmm0
  }
  _RDI->input.consts[59].v[0] = 1.0;
  _RDI->input.consts[59].v[1] = 1.0;
  _RDI->input.consts[59].v[2] = 1.0;
  _RDI->input.codeImages[4] = &p_m_image->m_base;
  ++_RDI->constVersions[59];
  __asm
  {
    vmovss  xmm0, dword ptr cs:?colorBlackBlank@@3Tvec4_t@@B; vec4_t const colorBlackBlank
    vmovss  dword ptr [rdi+0AC0h], xmm0
    vmovss  xmm1, dword ptr cs:?colorBlackBlank@@3Tvec4_t@@B+4; vec4_t const colorBlackBlank
    vmovss  dword ptr [rdi+0AC4h], xmm1
    vmovss  xmm0, dword ptr cs:?colorBlackBlank@@3Tvec4_t@@B+8; vec4_t const colorBlackBlank
    vmovss  dword ptr [rdi+0AC8h], xmm0
    vmovss  xmm1, dword ptr cs:?colorBlackBlank@@3Tvec4_t@@B+0Ch; vec4_t const colorBlackBlank
    vmovups xmm0, xmmword ptr [r14]
    vmovss  dword ptr [rdi+0ACCh], xmm1
  }
  ++_RDI->constVersions[60];
  _RDI->input.consts[61].v[0] = 1.0;
  *(_QWORD *)&_RDI->input.consts[61].xyz.y = 1065353216i64;
  _RDI->input.consts[61].v[3] = 0.0;
  ++_RDI->constVersions[61];
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vxorps  xmm3, xmm3, xmm3
    vcvtsi2ss xmm3, xmm3, rax
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, rax
    vmovups xmmword ptr [rsp+190h+var_120.m_surfaceID], xmm0
    vmovss  xmm0, cs:__real@3f800000
    vmovss  dword ptr [rsp+190h+var_138], xmm0
    vmovss  [rsp+190h+var_140], xmm0
    vmovss  [rsp+190h+var_148], xmm1
    vmovss  [rsp+190h+var_150], xmm1
    vmovss  [rsp+190h+var_158], xmm3
    vmovss  dword ptr [rsp+190h+var_160], xmm2
    vmovss  dword ptr [rsp+190h+var_168], xmm1
    vmovss  dword ptr [rsp+190h+fmt], xmm1
  }
  RB_ViewportFilterDirectInternal((GfxCmdBufContext *)&v65, rgp.feedbackBlendBackbufferMaterial, 0xFFFFFFFF, &v72, fmt, v58, v59, v60, v61, v62, v63, v64, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postfx.cpp(199)");
}

/*
==============
R_Blur_Enabled
==============
*/
char R_Blur_Enabled(const GfxViewInfo *viewInfo)
{
  unsigned int v3; 

  _RBX = viewInfo;
  LOBYTE(v3) = R_Screenshot_GetDeferredScreenshotPipelineStage(viewInfo->deferredScreenshotIndex);
  if ( v3 != 2 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm0, dword ptr [rbx+9A8h]
    }
    if ( v3 < 2 )
      return 1;
    __asm { vcomiss xmm0, dword ptr [rbx+9A4h] }
  }
  return 0;
}

/*
==============
R_Blur_Mip1_Enabled
==============
*/
bool R_Blur_Mip1_Enabled(const GfxViewInfo *viewInfo)
{
  return R_Blur_Mip_Enabled(viewInfo, 1u);
}

/*
==============
R_Blur_Mip2_Enabled
==============
*/
bool R_Blur_Mip2_Enabled(const GfxViewInfo *viewInfo)
{
  return R_Blur_Mip_Enabled(viewInfo, 2u);
}

/*
==============
R_Blur_Mip_Enabled
==============
*/
bool R_Blur_Mip_Enabled(const GfxViewInfo *viewInfo, unsigned int mip)
{
  unsigned int v6; 
  char v11; 
  int v20; 
  int v22; 
  bool result; 
  double v26; 

  _RBX = viewInfo;
  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  LOBYTE(v6) = R_Screenshot_GetDeferredScreenshotPipelineStage(viewInfo->deferredScreenshotIndex);
  if ( v6 == 2 )
    goto LABEL_10;
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+9A8h]; blurRadiusDvar
    vmovss  xmm0, dword ptr [rbx+9A4h]; blurRadiusScript
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm1, xmm6
  }
  if ( v6 <= 2 )
  {
    __asm { vcomiss xmm0, xmm6 }
LABEL_10:
    result = 0;
    __asm { vmovaps xmm6, [rsp+58h+var_18] }
    return result;
  }
  __asm { vmovaps [rsp+58h+var_28], xmm7 }
  *(double *)&_XMM0 = R_GetBlurRadius(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vcomiss xmm0, xmm6
    vmovaps xmm7, xmm0
  }
  if ( v11 )
  {
    __asm
    {
      vcvtss2sd xmm1, xmm7, xmm0
      vmovsd  [rsp+58h+var_30], xmm1
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postfx.cpp", 82, ASSERT_TYPE_SANITY, "( ( blurRadius >= 0.0f ) )", "( blurRadius ) = %g", v26) )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, xmm7
    vmulss  xmm2, xmm1, cs:__real@3a72b9d6
    vmovaps xmm7, [rsp+58h+var_28]
    vmaxss  xmm0, xmm2, dword ptr [rax+28h]
    vdivss  xmm0, xmm0, dword ptr [rax+28h]
  }
  v20 = 2;
  __asm { vcvttss2si rcx, xmm0 }
  v22 = _RCX + 1;
  if ( v22 < 2 )
    v20 = v22;
  result = v20 == mip;
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
  return result;
}

/*
==============
R_DebugTextureOverlay
==============
*/
void R_DebugTextureOverlay(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxDebugTextureOverlayImages *overlayImages)
{
  GfxCmdBufSourceState *source; 
  const GfxImage *floatZ; 
  GfxCmdBufInput *p_input; 
  GfxCmdBufSourceState *v35; 
  const GfxImage *entityIDVelocity; 
  GfxCmdBufInput *v37; 
  GfxCmdBufSourceState *v38; 
  const GfxImage *tangentFrame; 
  GfxCmdBufInput *v40; 
  GfxCmdBufSourceState *v41; 
  const GfxImage *packedStencil; 
  GfxCmdBufInput *v43; 
  GfxCmdBufSourceState *v44; 
  const GfxImage *ssao; 
  GfxCmdBufInput *v46; 
  GfxCmdBufSourceState *v47; 
  const GfxImage *transMask; 
  GfxCmdBufInput *v49; 
  GfxCmdBufSourceState *v50; 
  const GfxImage *vrs; 
  GfxCmdBufInput *v52; 
  const GfxWrappedBuffer *sunvisPrepass; 
  __int64 v54; 
  GfxCmdBufSourceState *v55; 
  const GfxImage *scopeBuffer; 
  GfxCmdBufInput *v57; 
  float fmt; 
  float v72; 
  float v73; 
  float v74; 
  float v75; 
  float v76; 
  GfxCmdBufContext v77[9]; 
  char v78; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovups xmm0, xmmword ptr [rcx]
    vmovaps xmmword ptr [rax-38h], xmm6
  }
  _RBX = gfxContext;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps [rsp+118h+var_A8], xmm13
    vmovups [rsp+118h+var_B8], xmm0
  }
  RB_EndSurfaceIfNeeded(v77);
  _RDI = r_debugTextureOverlayRect;
  if ( !r_debugTextureOverlayRect && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 669, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm6, dword ptr [rdi+28h]
    vmovss  xmm7, dword ptr [rdi+2Ch]
    vmovss  xmm8, dword ptr [rdi+30h]
    vmovss  xmm9, dword ptr [rdi+34h]
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
    vsubss  xmm0, xmm8, xmm6
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, rax
    vmulss  xmm10, xmm6, xmm1
    vmulss  xmm12, xmm0, xmm1
    vsubss  xmm1, xmm9, xmm7
    vmulss  xmm11, xmm7, xmm2
    vmulss  xmm13, xmm1, xmm2
  }
  R_SetPersistentTables(_RBX, _RBX->state->data, PERSISTENT_TABLE_SCENE);
  source = _RBX->source;
  floatZ = overlayImages->floatZ;
  if ( !_RBX->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[0] = floatZ;
  v35 = _RBX->source;
  entityIDVelocity = overlayImages->entityIDVelocity;
  if ( !_RBX->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v37 = &v35->input;
  if ( !v37 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v37->codeImages[1] = entityIDVelocity;
  v38 = _RBX->source;
  tangentFrame = overlayImages->tangentFrame;
  if ( !_RBX->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v40 = &v38->input;
  if ( !v40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v40->codeImages[2] = tangentFrame;
  v41 = _RBX->source;
  packedStencil = overlayImages->packedStencil;
  if ( !_RBX->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v43 = &v41->input;
  if ( !v43 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v43->codeImages[79] = packedStencil;
  v44 = _RBX->source;
  ssao = overlayImages->ssao;
  if ( !_RBX->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v46 = &v44->input;
  if ( !v46 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v46->codeImages[10] = ssao;
  v47 = _RBX->source;
  transMask = overlayImages->transMask;
  if ( !_RBX->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v49 = &v47->input;
  if ( !v49 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v49->codeImages[51] = transMask;
  v50 = _RBX->source;
  vrs = overlayImages->vrs;
  if ( !_RBX->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v52 = &v50->input;
  if ( !v52 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v52->codeImages[25] = vrs;
  sunvisPrepass = overlayImages->sunvisPrepass;
  v54 = (__int64)&_RBX->source->input;
  if ( _RBX->source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1494, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  *(_QWORD *)(v54 + 7568) = sunvisPrepass;
  v55 = _RBX->source;
  scopeBuffer = overlayImages->scopeBuffer;
  if ( !_RBX->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v57 = &v55->input;
  if ( !v57 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v57->codeImages[80] = scopeBuffer;
  R_Set2D(_RBX->source);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovss  [rsp+118h+var_D0], xmm9
    vmovss  [rsp+118h+var_D8], xmm8
    vmovss  [rsp+118h+var_E0], xmm7
    vmovss  [rsp+118h+var_E8], xmm6
    vmovss  dword ptr [rsp+118h+var_F0], xmm13
    vmovaps xmm3, xmm11
    vmovaps xmm2, xmm10
    vmovss  dword ptr [rsp+118h+fmt], xmm12
    vmovups [rsp+118h+var_B8], xmm0
  }
  RB_DrawStretchPic(v77, rgp.textureDebugOverlayMaterial, *(float *)&_XMM2, *(float *)&_XMM3, fmt, v72, v73, v74, v75, v76, 0xFFFFFFFF, GFX_PRIM_STATS_CODE);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovups [rsp+118h+var_B8], xmm0
  }
  RB_EndTessSurfaceInternal(v77, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postfx.cpp(621)");
  _R11 = &v78;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
  }
}

/*
==============
R_DrawRefImage
==============
*/
void R_DrawRefImage(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, RefImageDrawMode refImageDrawMode)
{
  GfxCmdBufSourceState *source; 
  GfxImage *refImage; 
  GfxCmdBufInput *p_input; 
  float fmt; 
  float v43; 
  float v44; 
  float v45; 
  float v46; 
  float v47; 
  GfxCmdBufContext v48; 
  char v49; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
  }
  source = gfxContext->source;
  _RDI = gfxContext;
  _ESI = refImageDrawMode;
  R_Set2D(gfxContext->source);
  if ( source->viewMode != VIEW_MODE_2D && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postfx.cpp", 806, ASSERT_TYPE_ASSERT, "( ( gfxContext.source->viewMode == VIEW_MODE_2D ) )", "( gfxContext.source->viewMode ) = %i", source->viewMode) )
    __debugbreak();
  _RBX = DVARVEC4_r_refImageBounds;
  if ( !DVARVEC4_r_refImageBounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_refImageBounds") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm10, dword ptr [rbx+28h]
    vmovss  xmm11, dword ptr [rbx+2Ch]
    vmovss  xmm7, dword ptr [rbx+30h]
    vmovss  xmm8, dword ptr [rbx+34h]
    vmovss  dword ptr [rsp+0F8h+var_98], xmm10
    vmovss  dword ptr [rsp+0F8h+var_98+4], xmm11
    vmovss  dword ptr [rsp+0F8h+var_98+8], xmm7
    vmovss  dword ptr [rsp+0F8h+var_98+0Ch], xmm8
    vxorps  xmm6, xmm6, xmm6
  }
  if ( rgp.refImage )
  {
    __asm { vcomiss xmm7, xmm6 }
    if ( rgp.refImage )
      __asm { vcomiss xmm8, xmm6 }
  }
  _RBX = DVARFLT_r_refImageStopsAdjust;
  if ( !DVARFLT_r_refImageStopsAdjust && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_refImageStopsAdjust") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+28h]; Y
    vmovss  xmm0, cs:__real@40000000; X
  }
  *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  _RBX = _RDI->source;
  __asm { vmovss  xmm9, cs:__real@3f800000 }
  _EAX = 1;
  __asm
  {
    vmovd   xmm1, eax
    vmovss  dword ptr [rbx+0FF0h], xmm0
    vmovss  dword ptr [rbx+0FF4h], xmm0
    vmovss  dword ptr [rbx+0FF8h], xmm0
    vmovd   xmm0, esi
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm6, xmm9, xmm2
    vmovss  dword ptr [rbx+0FFCh], xmm0
  }
  ++_RBX->constVersions[143];
  refImage = rgp.refImage;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &_RBX->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vmovss  [rsp+0F8h+var_B0], xmm9
    vmovss  [rsp+0F8h+var_B8], xmm9
    vmovss  [rsp+0F8h+var_C0], xmm6
    vmovss  dword ptr [rsp+0F8h+var_C8], xmm6
  }
  p_input->codeImages[4] = refImage;
  __asm
  {
    vmovss  dword ptr [rsp+0F8h+var_D0], xmm8
    vmovaps xmm3, xmm11
    vmovaps xmm2, xmm10
    vmovss  dword ptr [rsp+0F8h+fmt], xmm7
    vmovups [rsp+0F8h+var_98], xmm0
  }
  RB_DrawStretchPic(&v48, rgp.refImageMtl, *(float *)&_XMM2, *(float *)&_XMM3, fmt, v43, v44, v45, v46, v47, 0xFFFFFFFF, GFX_PRIM_STATS_DEBUG);
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vmovups [rsp+0F8h+var_98], xmm0
  }
  RB_EndSurfaceIfNeeded(&v48);
  _R11 = &v49;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
}

/*
==============
R_GetBlurRadius
==============
*/

float __fastcall R_GetBlurRadius(double blurRadiusScript, double blurRadiusDvar)
{
  __asm
  {
    vmulss  xmm2, xmm0, xmm0
    vmulss  xmm0, xmm1, xmm1
    vaddss  xmm1, xmm2, xmm0
    vmovaps [rsp+48h+var_18], xmm6
    vsqrtss xmm6, xmm1, xmm1
    vxorps  xmm2, xmm2, xmm2
    vcomiss xmm6, xmm2
    vmovaps xmm0, xmm6
    vmovaps xmm6, [rsp+48h+var_18]
  }
  return *(float *)&_XMM0;
}

/*
==============
R_GetBlurRadiusAlphaAndMip
==============
*/
void R_GetBlurRadiusAlphaAndMip(const GfxViewInfo *viewInfo, float *outBlurRadius, float *outBlurAlpha, unsigned int *outBlurMip)
{
  char v9; 
  bool v14; 
  unsigned int v25; 
  int v27; 
  double v28; 

  __asm
  {
    vmovss  xmm1, dword ptr [rcx+9A8h]; blurRadiusDvar
    vmovss  xmm0, dword ptr [rcx+9A4h]; blurRadiusScript
    vmovaps [rsp+48h+var_18], xmm6
  }
  _RDI = outBlurAlpha;
  _RBX = outBlurRadius;
  *(double *)&_XMM0 = R_GetBlurRadius(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm1
    vmovaps xmm6, xmm0
  }
  if ( v9 )
  {
    __asm
    {
      vcvtss2sd xmm1, xmm6, xmm0
      vmovsd  [rsp+48h+var_20], xmm1
    }
    v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postfx.cpp", 82, ASSERT_TYPE_SANITY, "( ( blurRadius >= 0.0f ) )", "( blurRadius ) = %g", v28);
    v9 = 0;
    if ( v14 )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm1, xmm6, cs:__real@3a72b9d6
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm1, xmm0
    vmovss  dword ptr [rbx], xmm1
  }
  _RAX = r_blurAALimit;
  __asm { vmovss  xmm2, dword ptr [rax+28h] }
  *_RDI = 1.0;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vcomiss xmm0, xmm2
  }
  if ( v9 )
  {
    __asm
    {
      vdivss  xmm0, xmm0, xmm2
      vmovss  dword ptr [rdi], xmm0
      vmovss  dword ptr [rbx], xmm2
      vmovaps xmm0, xmm2
    }
  }
  __asm
  {
    vdivss  xmm0, xmm0, dword ptr [rax+28h]
    vmovaps xmm6, [rsp+48h+var_18]
  }
  v25 = 2;
  __asm { vcvttss2si rcx, xmm0 }
  v27 = _RCX + 1;
  if ( v27 < 2 )
    v25 = v27;
  *outBlurMip = v25;
}

/*
==============
R_Magnify_Part1
==============
*/
void R_Magnify_Part1(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_ColorHandle *srcRt)
{
  GfxCmdBufContext v5; 
  R_RT_ColorHandle v6; 
  GfxViewport v7; 

  __asm
  {
    vmovups xmm1, xmmword ptr [rcx]
    vmovups ymm0, ymmword ptr [r8]
  }
  *(_QWORD *)&v7.x = 0i64;
  v7.width = viewInfo->displayViewport.width;
  v7.height = viewInfo->displayViewport.height;
  __asm
  {
    vmovups [rsp+88h+var_48], ymm0
    vmovdqa [rsp+88h+var_58], xmm1
  }
  R_CopyPartialRT(&v5, &v6, &v7, &viewInfo->displayViewport, rgp.feedbackReplaceBackbufferMaterial);
}

/*
==============
R_Magnify_Part2
==============
*/
void R_Magnify_Part2(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_ColorHandle *srcRt)
{
  GfxCmdBufContext v19; 
  R_RT_ColorHandle v20; 
  GfxViewport v21; 

  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, rax
    vdivss  xmm0, xmm2, dword ptr [r9+28h]
    vcvttss2si rax, xmm0
  }
  v21.width = _RAX;
  __asm
  {
    vcvtsi2ss xmm1, xmm1, rax
    vdivss  xmm0, xmm1, dword ptr [r9+2Ch]
    vcvttss2si rax, xmm0
  }
  v21.height = _RAX;
  __asm
  {
    vmulss  xmm0, xmm2, dword ptr [r9+30h]
    vcvttss2si rax, xmm0
  }
  v21.x = _RAX;
  __asm
  {
    vmulss  xmm0, xmm1, dword ptr [r9+34h]
    vmovups xmm1, xmmword ptr [rcx]
    vcvttss2si rax, xmm0
    vmovups ymm0, ymmword ptr [r8]
  }
  v21.y = _RAX;
  __asm
  {
    vmovups [rsp+88h+var_48], ymm0
    vmovups [rsp+88h+var_58], xmm1
  }
  R_CopyPartialRT(&v19, &v20, &viewInfo->displayViewport, &v21, rgp.feedbackReplaceBackbufferMaterial);
}

/*
==============
R_RefShader_Draw
==============
*/

void __fastcall R_RefShader_Draw(const GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, double _XMM2_8, double _XMM3_8)
{
  const dvar_t *v4; 
  int integer; 
  const dvar_t *v9; 
  int v10; 
  bool v11; 
  const dvar_t *v12; 
  const dvar_t *v13; 
  const dvar_t *v14; 
  const dvar_t *v15; 
  const dvar_t *v16; 
  const dvar_t *v17; 
  Material *refShaderMtl; 
  const GfxViewport *p_sceneViewport; 
  float fmt; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  GfxCmdBufContext v39; 
  int v40; 

  v4 = DVARINT_r_refShaderRenderStage;
  _RSI = gfxContext;
  if ( !DVARINT_r_refShaderRenderStage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_refShaderRenderStage") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  integer = v4->current.integer;
  if ( integer )
  {
    R_Set2D(_RSI->source);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi]
      vmovups [rsp+98h+var_28], xmm0
    }
    RB_SetUIColorimetryParams(&v39);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi]
      vmovups [rsp+98h+var_28], xmm0
    }
    RB_SetDisplayMappingParams(&v39);
    v9 = DCONST_DVARBOOL_r_refShaderDrawColorCube;
    if ( !DCONST_DVARBOOL_r_refShaderDrawColorCube && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_refShaderDrawColorCube") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    v10 = 0;
    v11 = !v9->current.enabled;
    v12 = DCONST_DVARBOOL_r_refShaderDrawGradient;
    if ( !v11 )
      v10 = 2;
    v40 = v10;
    if ( !DCONST_DVARBOOL_r_refShaderDrawGradient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_refShaderDrawGradient") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    if ( v12->current.enabled )
    {
      v10 |= 4u;
      v40 = v10;
    }
    v13 = DCONST_DVARBOOL_r_refShaderDrawColorGradients;
    if ( !DCONST_DVARBOOL_r_refShaderDrawColorGradients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_refShaderDrawColorGradients") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    if ( v13->current.enabled )
    {
      v10 |= 8u;
      v40 = v10;
    }
    v14 = DCONST_DVARBOOL_r_refShaderDrawMinMaxSwatches;
    if ( !DCONST_DVARBOOL_r_refShaderDrawMinMaxSwatches && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_refShaderDrawMinMaxSwatches") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    if ( v14->current.enabled )
    {
      v10 |= 0x10u;
      v40 = v10;
    }
    v15 = DCONST_DVARBOOL_r_refShaderDrawLimitedRangeSwatches;
    if ( !DCONST_DVARBOOL_r_refShaderDrawLimitedRangeSwatches && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_refShaderDrawLimitedRangeSwatches") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    if ( v15->current.enabled )
    {
      v10 |= 0x20u;
      v40 = v10;
    }
    v16 = DCONST_DVARBOOL_r_refShaderDrawColorChecker;
    if ( !DCONST_DVARBOOL_r_refShaderDrawColorChecker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_refShaderDrawColorChecker") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    if ( v16->current.enabled )
    {
      v10 |= 0x40u;
      v40 = v10;
    }
    v17 = DCONST_DVARBOOL_r_refShaderDrawCieDiagram;
    if ( !DCONST_DVARBOOL_r_refShaderDrawCieDiagram && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_refShaderDrawCieDiagram") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    if ( v17->current.enabled )
      v40 = v10 | 0x80;
    _RBX = DCONST_DVARFLT_r_refShaderBackgroundAlpha;
    if ( !DCONST_DVARFLT_r_refShaderBackgroundAlpha && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_refShaderBackgroundAlpha") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    _RAX = _RSI->source;
    __asm
    {
      vmovss  xmm1, dword ptr [rbx+28h]
      vmovss  xmm0, [rsp+98h+arg_10]
      vxorps  xmm3, xmm3, xmm3
      vmovss  dword ptr [rax+1000h], xmm0
      vmovss  dword ptr [rax+1004h], xmm1
    }
    *(_QWORD *)&_RAX->input.consts[144].xyz.z = 0i64;
    ++_RAX->constVersions[144];
    __asm { vmovups xmm0, xmmword ptr [rsi] }
    refShaderMtl = rgp.refShaderMtl;
    p_sceneViewport = &_RSI->source->sceneViewport;
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vxorps  xmm2, xmm2, xmm2
      vmovups [rsp+98h+var_28], xmm0
      vmovss  xmm0, cs:__real@3f800000
    }
    if ( integer == 1 )
      refShaderMtl = rgp.refShaderTonemapMtl;
    __asm
    {
      vcvtsi2ss xmm3, xmm3, rax
      vcvtsi2ss xmm2, xmm2, rax
      vmovss  [rsp+98h+var_40], xmm0
      vmovss  [rsp+98h+var_48], xmm0
      vmovss  [rsp+98h+var_50], xmm1
      vmovss  [rsp+98h+var_58], xmm1
      vmovss  [rsp+98h+var_60], xmm3
      vmovss  dword ptr [rsp+98h+var_68], xmm2
      vmovss  dword ptr [rsp+98h+var_70], xmm1
      vmovss  dword ptr [rsp+98h+fmt], xmm1
    }
    RB_ViewportFilterDirectInternal(&v39, refShaderMtl, 0xFFFFFFFF, p_sceneViewport, fmt, v32, v33, v34, v35, v36, v37, v38, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postfx.cpp(583)");
  }
}

/*
==============
R_Screenshot_CapturePipelineStage
==============
*/
void R_Screenshot_CapturePipelineStage(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxBackEndData *data, int pipelineStage, R_RT_ColorHandle *colorRt)
{
  int v5; 
  int v6; 
  int v7; 
  GfxCmdBufContext v20; 
  R_RT_ColorHandle v21; 

  v5 = pipelineStage - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 == 1 )
        {
          __asm { vmovups xmm1, xmmword ptr [rcx] }
          _RAX = colorRt;
          __asm
          {
            vmovups [rsp+58h+var_38], xmm1
            vmovups ymm0, ymmword ptr [rax]
            vmovups ymmword ptr [rsp+58h+var_28.baseclass_0.m_surfaceID], ymm0
          }
          R_Screenshot_HdrExposedScene(&v20, viewInfo, data, &v21);
        }
      }
      else
      {
        __asm { vmovups xmm1, xmmword ptr [rcx] }
        _RAX = colorRt;
        __asm
        {
          vmovups [rsp+58h+var_38], xmm1
          vmovups ymm0, ymmword ptr [rax]
          vmovups ymmword ptr [rsp+58h+var_28.baseclass_0.m_surfaceID], ymm0
        }
        R_Screenshot_HdrScene(&v20, viewInfo, data, &v21);
      }
    }
    else
    {
      __asm { vmovups xmm1, xmmword ptr [rcx] }
      _RAX = colorRt;
      __asm
      {
        vmovups [rsp+58h+var_38], xmm1
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rsp+58h+var_28.baseclass_0.m_surfaceID], ymm0
      }
      R_Screenshot_PostTonemapScene(&v20, viewInfo, data, &v21);
    }
  }
  else
  {
    __asm { vmovups xmm1, xmmword ptr [rcx] }
    _RAX = colorRt;
    __asm
    {
      vmovups [rsp+58h+var_38], xmm1
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rsp+58h+var_28.baseclass_0.m_surfaceID], ymm0
    }
    R_Screenshot_PreCompositeToDisplayScene(&v20, viewInfo, data, &v21);
  }
}

/*
==============
R_Screenshot_HdrScene
==============
*/
void R_Screenshot_HdrScene(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxBackEndData *data, R_RT_ColorHandle *sceneRt)
{
  int v7; 
  unsigned int width; 
  unsigned int height; 
  CmdBufState *state; 
  GfxCmdBufContext v15; 
  R_RT_Handle v16; 
  R_RT_ColorHandle v17; 
  GfxViewport v18; 
  R_RT_ColorHandle result; 

  _R14 = gfxContext;
  _RBX = sceneRt;
  LOBYTE(v7) = R_Screenshot_GetDeferredScreenshotPipelineStage(viewInfo->deferredScreenshotIndex);
  if ( v7 == 3 )
  {
    width = R_RT_Handle::GetSurface(_RBX)->m_image.m_base.width;
    height = R_RT_Handle::GetSurface(_RBX)->m_image.m_base.height;
    R_Screenshot_CreateDeferredRt(&result, EASE_IN_OUT_QUAD, GFX_RENDERTARGET_FORMAT_SCENEBUFFER, viewInfo->deferredScreenshotIndex, width, height);
    if ( result.m_surfaceID )
    {
      R_RT_Handle::GetSurface(&result);
      __asm
      {
        vmovups ymm0, ymmword ptr [rbx]
        vmovups ymm1, ymmword ptr [rsp+0E8h+result.baseclass_0.m_surfaceID]
        vmovups [rsp+0E8h+var_88], ymm0
        vmovups xmm0, xmmword ptr [r14]
      }
      v18.width = width;
      *(_QWORD *)&v18.x = 0i64;
      v18.height = height;
      __asm
      {
        vmovups [rsp+0E8h+var_B8], xmm0
        vmovups [rsp+0E8h+var_A8], ymm1
      }
      RB_CopyRT(&v15, (R_RT_ColorHandle *)&v16, &v17, &v18, rgp.feedbackReplaceScenebufferMaterial);
      __asm { vmovups ymm0, ymmword ptr [rsp+0E8h+result.baseclass_0.m_surfaceID] }
      state = _R14->state;
      __asm { vmovups [rsp+0E8h+var_A8], ymm0 }
      R_HW_AddResourceTransition(state, &v16, D3D12_RESOURCE_STATE_RENDER_TARGET, D3D12_RESOURCE_STATE_COPY_SOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_FlushResourceTransitions(_R14->state);
    }
    else if ( result.m_tracking.m_allocCounter )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
  }
}

/*
==============
R_Screenshot_PostTonemapScene
==============
*/
void R_Screenshot_PostTonemapScene(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxBackEndData *data, R_RT_ColorHandle *displayRt)
{
  int v7; 
  CmdBufState *state; 
  GfxCmdBufContext v13; 
  R_RT_Handle v14; 
  R_RT_ColorHandle v15; 
  GfxViewport v16; 
  R_RT_ColorHandle result; 

  _RDI = gfxContext;
  _RSI = displayRt;
  LOBYTE(v7) = R_Screenshot_GetDeferredScreenshotPipelineStage(viewInfo->deferredScreenshotIndex);
  if ( v7 == 2 )
  {
    R_Screenshot_CreateDeferredRt(&result, EASE_OUT_QUAD, GFX_RENDERTARGET_FORMAT_BACKBUFFER, viewInfo->deferredScreenshotIndex, viewInfo->displayViewport.width, viewInfo->displayViewport.height);
    if ( result.m_surfaceID )
    {
      R_RT_Handle::GetSurface(&result);
      __asm
      {
        vmovups ymm0, ymmword ptr [rsi]
        vmovups ymm1, ymmword ptr [rsp+0D8h+result.baseclass_0.m_surfaceID]
      }
      v16.width = viewInfo->displayViewport.width;
      v16.height = viewInfo->displayViewport.height;
      __asm
      {
        vmovups [rsp+0D8h+var_78], ymm0
        vmovups xmm0, xmmword ptr [rdi]
      }
      *(_QWORD *)&v16.x = 0i64;
      __asm
      {
        vmovups [rsp+0D8h+var_98], ymm1
        vmovups [rsp+0D8h+var_A8], xmm0
      }
      RB_CopyPartialRT(&v13, (R_RT_ColorHandle *)&v14, &v15, &viewInfo->displayViewport, &v16, rgp.feedbackReplaceBackbufferMaterial);
      __asm { vmovups ymm0, ymmword ptr [rsp+0D8h+result.baseclass_0.m_surfaceID] }
      state = _RDI->state;
      __asm { vmovups [rsp+0D8h+var_98], ymm0 }
      R_HW_AddResourceTransition(state, &v14, D3D12_RESOURCE_STATE_RENDER_TARGET, D3D12_RESOURCE_STATE_COPY_SOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_FlushResourceTransitions(_RDI->state);
    }
    else if ( result.m_tracking.m_allocCounter )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
  }
}

/*
==============
R_Screenshot_PreCompositeToDisplayScene
==============
*/
void R_Screenshot_PreCompositeToDisplayScene(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxBackEndData *data, R_RT_ColorHandle *colorRT)
{
  int v7; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v10; 
  CmdBufState *state; 
  GfxCmdBufContext v16; 
  R_RT_Handle v17; 
  R_RT_ColorHandle v18; 
  GfxViewport v19; 
  R_RT_ColorHandle result; 

  _RBP = gfxContext;
  _RDI = colorRT;
  LOBYTE(v7) = R_Screenshot_GetDeferredScreenshotPipelineStage(viewInfo->deferredScreenshotIndex);
  if ( v7 == 1 )
  {
    height = R_RT_Handle::GetSurface(_RDI)->m_image.m_base.height;
    Surface = R_RT_Handle::GetSurface(_RDI);
    R_Screenshot_CreateDeferredRt(&result, EASE_IN_QUAD, GFX_RENDERTARGET_FORMAT_BACKBUFFER, viewInfo->deferredScreenshotIndex, Surface->m_image.m_base.width, height);
    if ( result.m_surfaceID )
    {
      R_RT_Handle::GetSurface(&result);
      *(_QWORD *)&v19.x = 0i64;
      v19.width = R_RT_Handle::GetSurface(_RDI)->m_image.m_base.width;
      v10 = R_RT_Handle::GetSurface(_RDI);
      __asm
      {
        vmovups ymm0, ymmword ptr [rdi]
        vmovups ymm1, ymmword ptr [rsp+0D8h+result.baseclass_0.m_surfaceID]
        vmovups [rsp+0D8h+var_78], ymm0
        vmovups xmm0, xmmword ptr [rbp+0]
      }
      v19.height = v10->m_image.m_base.height;
      __asm
      {
        vmovups [rsp+0D8h+var_98], ymm1
        vmovups [rsp+0D8h+var_A8], xmm0
      }
      RB_CopyPartialRT(&v16, (R_RT_ColorHandle *)&v17, &v18, &v19, &v19, rgp.feedbackReplaceBackbufferMaterial);
      __asm { vmovups ymm0, ymmword ptr [rsp+0D8h+result.baseclass_0.m_surfaceID] }
      state = _RBP->state;
      __asm { vmovups [rsp+0D8h+var_98], ymm0 }
      R_HW_AddResourceTransition(state, &v17, D3D12_RESOURCE_STATE_RENDER_TARGET, D3D12_RESOURCE_STATE_COPY_SOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_FlushResourceTransitions(_RBP->state);
    }
    else if ( result.m_tracking.m_allocCounter )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
  }
}

