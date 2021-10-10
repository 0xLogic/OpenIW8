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
  unsigned int *v7; 
  unsigned int v8; 
  _QWORD *v9; 
  char *v10; 
  int *v11; 
  unsigned __int64 v12; 
  ThreadContext CurrentThreadContext; 
  GfxCmdBufSourceState *source; 
  GfxCmdBufState *state; 
  GfxCmdBufContext v21; 
  __int64 v22; 
  _QWORD *v23; 
  GfxCmdBufSourceState *v26; 
  GfxCmdBufState *v27; 
  __int64 v30; 
  __int64 v31; 
  R_RT_Handle result_8; 
  R_RT_AllocationLockSentry v33; 
  _QWORD v34[6]; 
  R_RT_ColorHandle v35; 
  R_RT_Group v36; 
  R_RT_ColorHandle m_mainSceneColorRt; 
  _OWORD v38[13]; 

  v34[5] = -2i64;
  Value = (char *)Sys_GetValue(0);
  v7 = (unsigned int *)(Value + 6216);
  if ( (unsigned int)(*((_DWORD *)Value + 1554) + 1) >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", *((_DWORD *)Value + 1554) + 1, 3) )
    __debugbreak();
  v8 = *v7 + 1;
  *v7 = v8;
  if ( v8 >= 3 )
  {
    LODWORD(v31) = 3;
    LODWORD(v30) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v30, v31) )
      __debugbreak();
  }
  v9 = Value + 2088;
  v10 = Value + 40;
  if ( *v9 < (unsigned __int64)v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  *v9 += 8i64;
  if ( *v9 >= (unsigned __int64)v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
    __debugbreak();
  *(_QWORD *)*v9 = v7;
  if ( *v9 <= (unsigned __int64)v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
    __debugbreak();
  v11 = (int *)&v7[*v7 + 2];
  v12 = __rdtsc();
  *v11 = v12;
  if ( Sys_HasValidCurrentThreadContext() )
    CurrentThreadContext = Sys_GetCurrentThreadContext();
  else
    CurrentThreadContext = THREAD_CONTEXT_COUNT;
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 103, NULL, 0);
  R_InitCmdBufSourceState(gfxContext->source, &viewInfo->input);
  source = gfxContext->source;
  state = gfxContext->state;
  if ( (*((_BYTE *)&gfxContext->source->input + 7920) & 1) != 0 )
  {
    R_LockIfGfxImmediateContext(state->device);
    R_InitCmdBufState(state);
  }
  else
  {
    R_LockGfxImmediateContext();
    _XMM0 = (__int128)*RB_GetBackendCmdBufContext((const GfxCmdBufContext *)&result_8);
    __asm { vpextrq rdx, xmm0, 1; in }
    if ( state != _RDX )
      GfxCmdBufState::Copy(state, _RDX);
  }
  memset_0(state->perPrimConstantState, 255, sizeof(state->perPrimConstantState));
  memset_0(state->perObjectConstantState, 255, sizeof(state->perObjectConstantState));
  memset_0(state->stableConstantState, 255, sizeof(state->stableConstantState));
  state->data = source->input.data;
  R_ProfBeginNamedEvent(gfxContext->state, "Post Effects");
  R_BeginViewInternal(gfxContext->source, &viewInfo->sceneDef, (const GfxViewParms *)viewInfo, &viewInfo->viewParmsSet.frames[1].viewParms);
  R_SetViewportStruct(gfxContext->source, &viewInfo->sceneViewport);
  if ( (gfxContext->source->sceneViewport.x || gfxContext->source->sceneViewport.y) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postfx.cpp", 874, ASSERT_TYPE_ASSERT, "((gfxContext.source->sceneViewport.x == 0) && (gfxContext.source->sceneViewport.y == 0))", (const char *)&queryFormat, "(gfxContext.source->sceneViewport.x == 0) && (gfxContext.source->sceneViewport.y == 0)") )
    __debugbreak();
  m_mainSceneColorRt = viewInfo->sceneRtInput.m_mainSceneColorRt;
  *(GfxCmdBufContext *)&result_8.m_surfaceID = *gfxContext;
  R_Screenshot_HdrScene((GfxCmdBufContext *)&result_8, viewInfo, data, &m_mainSceneColorRt);
  Sys_ProfBeginNamedEvent(0xFF00FFFF, "R_RT_AllocationLockSentry");
  R_RT_AllocationLockSentry::R_RT_AllocationLockSentry(&v33);
  Sys_ProfEndNamedEvent();
  R_LockIfGfxImmediateContext(gfxContext->state->device);
  if ( R_PostAAHasTemporalSupersampling(viewInfo->postAA.mode) && viewInfo->postAA.smaaTransMask )
  {
    *(GfxCmdBufContext *)&result_8.m_surfaceID = *gfxContext;
    RB_SMAA_ComputeTransMask((GfxCmdBufContext *)&result_8, viewInfo, &viewInfo->sceneRtInput.m_mainSceneColorRt, &viewInfo->sceneRtInput.m_postOpaqueLuma);
  }
  result_8 = (R_RT_Handle)viewInfo->sceneRtInput.m_mainSceneColorRt;
  *(R_RT_Group *)v38 = *R_RT_Group::ConstructColor(&v36, (R_RT_ColorHandle *)&result_8);
  viewInfo->sceneRtInput.m_mainSceneColorRt.m_surfaceID = 0;
  viewInfo->sceneRtInput.m_mainSceneColorRt.m_tracking.m_allocCounter = 0;
  viewInfo->sceneRtInput.m_mainSceneColorRt.m_tracking.m_name = NULL;
  viewInfo->sceneRtInput.m_mainSceneColorRt.m_tracking.m_location = NULL;
  *(GfxCmdBufContext *)&result_8.m_surfaceID = *gfxContext;
  RB_Lens_ScopeDistortion(&m_mainSceneColorRt, (GfxCmdBufContext *)&result_8, viewInfo, data);
  *(GfxCmdBufContext *)&result_8.m_surfaceID = *gfxContext;
  RB_MBlur_Apply((GfxCmdBufContext *)&result_8, viewInfo, (R_RT_Group *)v38);
  *(R_RT_ColorHandle *)&v34[1] = m_mainSceneColorRt;
  *(GfxCmdBufContext *)&result_8.m_surfaceID = *gfxContext;
  RB_ApplyDepthOfField((GfxCmdBufContext *)&result_8, viewInfo, (R_RT_Group *)v38, (R_RT_ColorHandle *)&v34[1], data);
  *(GfxCmdBufContext *)&result_8.m_surfaceID = *gfxContext;
  RB_VRS_GenerateVRSMask((GfxCmdBufContext *)&result_8, viewInfo, (R_RT_Group *)v38);
  *(R_RT_ColorHandle *)&v34[1] = m_mainSceneColorRt;
  *(GfxCmdBufContext *)&result_8.m_surfaceID = *gfxContext;
  RB_Lens_Apply((GfxCmdBufContext *)&result_8, viewInfo, (R_RT_Group *)v38, GFX_LENS_PROFILE_CONVOLUTION, (R_RT_ColorHandle *)&v34[1], data);
  *(GfxCmdBufContext *)&result_8.m_surfaceID = *gfxContext;
  RB_UniversalClut_SetParameters((const GfxCmdBufContext *)&result_8, viewInfo);
  *(GfxCmdBufContext *)&result_8.m_surfaceID = *gfxContext;
  RB_DrawRefImage((GfxCmdBufContext *)&result_8, viewInfo, (R_RT_Group *)v38, REF_IMAGE_DRAW_PRE_TONEMAP);
  *(__m256i *)&v34[1] = *(__m256i *)((char *)v38 + 8);
  *(GfxCmdBufContext *)&result_8.m_surfaceID = *gfxContext;
  RB_HDRSpotMeter_ProcessStage((GfxCmdBufContext *)&result_8, viewInfo, (R_RT_ColorHandle *)&v34[1], SPOTMETER_PRETONEMAP);
  *(__m256i *)&v34[1] = *(__m256i *)R_RT_GetGlobalColor(&v35, R_RENDERTARGET_DISPLAY_BUFFER);
  result_8 = *(R_RT_Handle *)((char *)v38 + 8);
  RB_HDRScopes_ProcessStage(gfxContext, viewInfo, &result_8, (R_RT_Handle *)&v34[1], HDR_SCOPES_STAGE_SCENE);
  *(GfxCmdBufContext *)&result_8.m_surfaceID = *gfxContext;
  RB_Tonemap_Apply((GfxCmdBufContext *)&result_8, viewInfo, data, (R_RT_Group *)v38);
  *(GfxCmdBufContext *)&result_8.m_surfaceID = *gfxContext;
  RB_DrawRefImage((GfxCmdBufContext *)&result_8, viewInfo, (R_RT_Group *)v38, REF_IMAGE_DRAW_POST_TONEMAP_COLORMANIP);
  *(__m256i *)&v34[1] = *(__m256i *)((char *)v38 + 8);
  *(GfxCmdBufContext *)&result_8.m_surfaceID = *gfxContext;
  RB_HDRSpotMeter_ProcessStage((GfxCmdBufContext *)&result_8, viewInfo, (R_RT_ColorHandle *)&v34[1], SPOTMETER_POSTTONEMAP);
  *(GfxCmdBufContext *)&result_8.m_surfaceID = *gfxContext;
  RB_ApplyPostAA((GfxCmdBufContext *)&result_8, viewInfo, (R_RT_Group *)v38);
  *(R_RT_ColorHandle *)&v34[1] = m_mainSceneColorRt;
  *(GfxCmdBufContext *)&result_8.m_surfaceID = *gfxContext;
  RB_Lens_Apply((GfxCmdBufContext *)&result_8, viewInfo, (R_RT_Group *)v38, GFX_LENS_PROFILE_DISTORTION, (R_RT_ColorHandle *)&v34[1], data);
  *(GfxCmdBufContext *)&result_8.m_surfaceID = *gfxContext;
  RB_DroneCamera_Apply((GfxCmdBufContext *)&result_8, viewInfo, (R_RT_Group *)v38);
  *(R_RT_ColorHandle *)&v34[1] = viewInfo->sceneRtInput.m_packedStencilRt;
  *(GfxCmdBufContext *)&result_8.m_surfaceID = *gfxContext;
  RB_Distortion_Apply((GfxCmdBufContext *)&result_8, viewInfo, (R_RT_Group *)v38, (R_RT_ColorHandle *)&v34[1]);
  _XMM0 = *gfxContext;
  *(GfxCmdBufContext *)&result_8.m_surfaceID = *gfxContext;
  RB_Blur_Apply((GfxCmdBufContext *)&result_8, viewInfo, (R_RT_Group *)v38);
  result_8.m_surfaceID = 0;
  result_8.m_tracking.m_allocCounter = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&result_8.m_tracking.m_name = _XMM0;
  if ( (m_mainSceneColorRt.m_surfaceID & 0x7FFF) != 0 )
  {
    *(R_RT_ColorHandle *)&v34[1] = m_mainSceneColorRt;
    *(GfxCmdBufContext *)&result_8.m_surfaceID = *gfxContext;
    R_RT_Destroy((GfxCmdBufContext *)&result_8, (R_RT_ColorHandle *)&v34[1]);
    m_mainSceneColorRt.m_surfaceID = 0;
    m_mainSceneColorRt.m_tracking.m_allocCounter = 0;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&m_mainSceneColorRt.m_tracking.m_name = _XMM0;
  }
  if ( LOBYTE(v38[0]) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 559, ASSERT_TYPE_ASSERT, "(this->m_colorRtCount == 1)", (const char *)&queryFormat, "this->m_colorRtCount == 1") )
    __debugbreak();
  *(__m256i *)&v34[1] = *(__m256i *)((char *)v38 + 8);
  *(GfxCmdBufContext *)&result_8.m_surfaceID = *gfxContext;
  R_Screenshot_PreCompositeToDisplayScene((GfxCmdBufContext *)&result_8, viewInfo, data, (R_RT_ColorHandle *)&v34[1]);
  *(GfxCmdBufContext *)&result_8.m_surfaceID = *gfxContext;
  RB_CompositeToDisplay((GfxCmdBufContext *)&result_8, viewInfo, (R_RT_Group *)v38);
  *(GfxCmdBufContext *)&result_8.m_surfaceID = *gfxContext;
  RB_ApplyHudOutline((GfxCmdBufContext *)&result_8, viewInfo, (R_RT_Group *)v38);
  v21 = *gfxContext;
  v22 = LOBYTE(v38[0]) - 1i64;
  if ( v22 >= 0 )
  {
    v23 = &v38[2 * v22 + 2];
    do
    {
      *(__m256i *)&v34[1] = *(__m256i *)(v23 - 3);
      *(GfxCmdBufContext *)&result_8.m_surfaceID = v21;
      R_RT_Destroy((GfxCmdBufContext *)&result_8, (R_RT_ColorHandle *)&v34[1]);
      *((_WORD *)v23 - 12) = 0;
      *((_DWORD *)v23 - 4) = 0;
      *(v23 - 1) = 0i64;
      *v23 = 0i64;
      v23 -= 4;
      --v22;
    }
    while ( v22 >= 0 );
  }
  *(__m256i *)&v34[1] = *(__m256i *)((char *)&v38[8] + 8);
  *(GfxCmdBufContext *)&result_8.m_surfaceID = v21;
  R_RT_Destroy((GfxCmdBufContext *)&result_8, (R_RT_DepthHandle *)&v34[1]);
  LOBYTE(v38[0]) = 0;
  WORD4(v38[8]) = 0;
  LODWORD(v38[9]) = 0;
  *((_QWORD *)&v38[9] + 1) = 0i64;
  *(_QWORD *)&v38[10] = 0i64;
  WORD4(v38[10]) = 0;
  LODWORD(v38[11]) = 0;
  *((_QWORD *)&v38[11] + 1) = 0i64;
  *(_QWORD *)&v38[12] = 0i64;
  R_UnlockIfGfxImmediateContext(gfxContext->state->device);
  R_RT_AllocationLockSentry::~R_RT_AllocationLockSentry(&v33);
  _XMM6 = *gfxContext;
  R_RT_GetGlobalColor(&m_mainSceneColorRt, R_RENDERTARGET_DISPLAY_BUFFER);
  *(R_RT_ColorHandle *)&v34[1] = m_mainSceneColorRt;
  __asm { vpextrq rbx, xmm6, 1 }
  R_AddRenderTargetTransition(_RBX, (R_RT_ColorHandle *)&v34[1], RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(_RBX);
  *(R_RT_ColorHandle *)&v34[1] = m_mainSceneColorRt;
  *(GfxCmdBufContext *)&result_8.m_surfaceID = _XMM6;
  R_Screenshot_PostTonemapScene((GfxCmdBufContext *)&result_8, viewInfo, data, (R_RT_ColorHandle *)&v34[1]);
  *(R_RT_ColorHandle *)&v34[1] = m_mainSceneColorRt;
  R_AddRenderTargetTransition(_RBX, (R_RT_ColorHandle *)&v34[1], RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(_RBX);
  *(GfxCmdBufContext *)&result_8.m_surfaceID = *gfxContext;
  RB_DrawDebugPostEffects((GfxCmdBufContext *)&result_8, viewInfo, data);
  *(GfxCmdBufContext *)&result_8.m_surfaceID = *gfxContext;
  RB_Magnify((GfxCmdBufContext *)&result_8, viewInfo);
  R_ProfEndNamedEvent(gfxContext->state);
  v26 = gfxContext->source;
  v27 = gfxContext->state;
  R_ResetRenderTargets(v27);
  if ( (*((_BYTE *)&v26->input + 7920) & 1) != 0 )
  {
    R_ShutdownCmdBufState(v27);
    R_UnlockIfGfxImmediateContext(v27->device);
  }
  else
  {
    _XMM0 = (__int128)*RB_GetBackendCmdBufContext((const GfxCmdBufContext *)&result_8);
    __asm { vpextrq rcx, xmm0, 1; out }
    if ( v27 != _RCX )
    {
      GfxCmdBufState::Copy(_RCX, v27);
      R_FlushImmediateContext();
    }
    R_UnlockGfxImmediateContext();
  }
  Profile_EndInternal(NULL);
}

/*
==============
RB_Blur_Apply
==============
*/
void RB_Blur_Apply(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_Group *activeGroup)
{
  int v6; 
  float blurRadiusDvar; 
  __int128 blurRadiusScript_low; 
  float v9; 
  float height; 
  __int128 unsignedInt; 
  __int128 v12; 
  float value; 
  char v14; 
  __int128 v16; 
  unsigned int width; 
  unsigned int v18; 
  unsigned int m_allocWidth; 
  unsigned int m_allocHeight; 
  char v21; 
  const dvar_t *v22; 
  unsigned int v23; 
  unsigned int v24; 
  unsigned int v25; 
  const dvar_t *v26; 
  int v27; 
  const dvar_t *v28; 
  int v29; 
  int rtFlags; 
  GfxCmdBufContext v34; 
  GfxCmdBufState *state; 
  R_RT_Handle v36; 
  unsigned int v37; 
  unsigned int allocHeight; 
  R_RT_Handle result; 
  R_RT_Handle v40; 
  R_RT_Handle v41; 
  R_RT_Handle v42; 
  R_RT_Handle v43; 
  R_RT_Handle v44; 
  R_RT_Handle v45; 
  R_RT_Handle v46; 
  unsigned int v48; 
  unsigned int v49; 

  LOBYTE(v6) = R_Screenshot_GetDeferredScreenshotPipelineStage(viewInfo->deferredScreenshotIndex);
  if ( v6 != 2 && (viewInfo->blurRadiusDvar > 0.0 || viewInfo->blurRadiusScript > 0.0) )
  {
    Sys_ProfBeginNamedEvent(0xFFFF7F50, "Blur Screen");
    R_ProfBeginNamedEvent(gfxContext->state, "Blur Screen");
    R_GPU_BeginTimer(GPU_TIMER_POST_AA);
    if ( activeGroup->m_colorRtCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 559, ASSERT_TYPE_ASSERT, "(this->m_colorRtCount == 1)", (const char *)&queryFormat, "this->m_colorRtCount == 1") )
      __debugbreak();
    blurRadiusDvar = viewInfo->blurRadiusDvar;
    v42 = (R_RT_Handle)activeGroup->m_colorRts[0];
    v36 = v42;
    blurRadiusScript_low = LODWORD(viewInfo->blurRadiusScript);
    *(double *)&blurRadiusScript_low = R_GetBlurRadius(*(float *)&blurRadiusScript_low, blurRadiusDvar);
    if ( *(float *)&blurRadiusScript_low < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postfx.cpp", 82, ASSERT_TYPE_SANITY, "( ( blurRadius >= 0.0f ) )", "( blurRadius ) = %g", *(float *)&blurRadiusScript_low) )
      __debugbreak();
    v12 = blurRadiusScript_low;
    *(float *)&v12 = *(float *)&blurRadiusScript_low * 0.00092592591;
    v9 = FLOAT_1_0;
    height = (float)viewInfo->sceneViewport.height;
    *(float *)&v12 = *(float *)&v12 * height;
    unsignedInt = v12;
    value = r_blurAALimit->current.value;
    if ( *(float *)&v12 < value )
    {
      v9 = *(float *)&v12 / value;
      unsignedInt = r_blurAALimit->current.unsignedInt;
    }
    v14 = 2;
    v16 = unsignedInt;
    *(float *)&v16 = *(float *)&unsignedInt / r_blurMipStepLimit->current.value;
    _XMM0 = v16;
    if ( (int)*(float *)&v16 + 1 < 2 )
      v14 = (int)*(float *)&v16 + 1;
    width = R_RT_Handle::GetSurface(&v36)->m_image.m_base.width;
    v37 = width;
    v18 = R_RT_Handle::GetSurface(&v36)->m_image.m_base.height;
    m_allocWidth = R_RT_Handle::GetSurface(&v36)->m_allocWidth;
    v49 = m_allocWidth;
    m_allocHeight = R_RT_Handle::GetSurface(&v36)->m_allocHeight;
    v48 = m_allocHeight;
    if ( viewInfo->sceneViewport.height != v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postfx.cpp", 222, ASSERT_TYPE_ASSERT, "(viewInfo->sceneViewport.height == srcHeight)", (const char *)&queryFormat, "viewInfo->sceneViewport.height == srcHeight") )
      __debugbreak();
    v21 = v14;
    v22 = r_deviceDebug;
    v23 = width >> v21;
    v24 = v18 >> v21;
    v25 = m_allocWidth >> v21;
    allocHeight = m_allocHeight >> v21;
    if ( !r_deviceDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
    if ( v22->current.enabled )
      goto LABEL_25;
    v26 = DCONST_DVARBOOL_r_esramPostFX;
    if ( !DCONST_DVARBOOL_r_esramPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramPostFX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v26);
    v27 = 2112;
    if ( !v26->current.enabled )
LABEL_25:
      v27 = 2048;
    v28 = DCONST_DVARINT_r_dccPostFX;
    if ( !DCONST_DVARINT_r_dccPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_dccPostFX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v28);
    v29 = 0;
    if ( v28->current.integer == 1 )
      v29 = 8;
    rtFlags = v29 | v27;
    v41 = *R_RT_CreateInternal(&result, v37 >> 1, v18 >> 1, v49 >> 1, v48 >> 1, 1u, 1u, 1u, g_R_RT_renderTargetFmts[1], (R_RT_Flags)rtFlags, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "R_RENDERTARGET_POST_EFFECT_BLUR_0", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postfx.cpp(252)");
    v36 = v41;
    if ( (_WORD)v16 )
    {
      R_RT_Handle::GetSurface(&v36);
      if ( (R_RT_Handle::GetSurface(&v36)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        v41 = v36;
        __debugbreak();
      }
      else
      {
        v41 = v36;
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
    v40 = *R_RT_CreateInternal(&result, v23, v24, v25, allocHeight, 1u, 1u, 1u, g_R_RT_renderTargetFmts[1], (R_RT_Flags)rtFlags, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "R_RENDERTARGET_POST_EFFECT_BLUR_1", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postfx.cpp(253)");
    v36 = v40;
    if ( (_WORD)v16 )
    {
      R_RT_Handle::GetSurface(&v36);
      if ( (R_RT_Handle::GetSurface(&v36)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        v40 = v36;
        __debugbreak();
      }
      else
      {
        v40 = v36;
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
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&v36.m_tracking.m_name = _XMM0;
    v36.m_surfaceID = 0;
    v36.m_tracking.m_allocCounter = 0;
    v45 = v40;
    result = v42;
    v34 = *gfxContext;
    v43 = v36;
    v44 = v36;
    *(GfxCmdBufContext *)&v36.m_surfaceID = v34;
    v46 = v41;
    R_Blur_Apply((GfxCmdBufContext *)&v36, viewInfo, (R_RT_ColorHandle *)&result, (R_RT_ColorHandle *)&v46, (R_RT_ColorHandle *)&v45, (R_RT_ColorHandle *)&v44, (R_RT_ColorHandle *)&v43, *(float *)&unsignedInt, v9, NULL);
    state = gfxContext->state;
    result = v42;
    R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&result, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(state);
    result = v40;
    *(GfxCmdBufContext *)&v36.m_surfaceID = *gfxContext;
    R_RT_Destroy((GfxCmdBufContext *)&v36, (R_RT_ColorHandle *)&result);
    result = v41;
    *(GfxCmdBufContext *)&v36.m_surfaceID = *gfxContext;
    R_RT_Destroy((GfxCmdBufContext *)&v36, (R_RT_ColorHandle *)&result);
    R_GPU_EndTimer();
    R_ProfEndNamedEvent(state);
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
RB_CompositeToDisplay
==============
*/
void RB_CompositeToDisplay(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_Group *activeGroup)
{
  GfxCmdBufSourceState *source; 
  R_RT_Image *p_m_image; 
  GfxCmdBufInput *p_input; 
  GfxCmdBufContext v9; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  GfxCmdBufSourceState *v12; 
  float v13; 
  float width; 
  R_RT_Handle v15; 
  R_RT_ColorHandle result; 
  R_RT_ColorHandle v17; 
  GfxViewport viewport; 

  R_RT_GetGlobalColor(&result, R_RENDERTARGET_DISPLAY_BUFFER);
  RB_SetWaitFlipOncePerFrame(gfxContext->state);
  R_ProfBeginNamedEvent(gfxContext->state, "RB_CompositeToDisplay");
  R_GPU_BeginTimer(GPU_TIMER_DISPLAY_COMPOSITE);
  source = gfxContext->source;
  R_BeginViewInternal(gfxContext->source, &viewInfo->sceneDef, (const GfxViewParms *)viewInfo, &viewInfo->viewParmsSet.frames[1].viewParms);
  if ( activeGroup->m_colorRtCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 559, ASSERT_TYPE_ASSERT, "(this->m_colorRtCount == 1)", (const char *)&queryFormat, "this->m_colorRtCount == 1") )
    __debugbreak();
  v15 = (R_RT_Handle)activeGroup->m_colorRts[0];
  p_m_image = &R_RT_Handle::GetSurface(&v15)->m_image;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v17 = result;
  v9 = *gfxContext;
  p_input->codeImages[4] = &p_m_image->m_base;
  *(GfxCmdBufContext *)&v15.m_surfaceID = v9;
  R_SetRenderTargetsInternal_ColorOnly((GfxCmdBufContext *)&v15, &v17, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postfx.cpp(379)");
  height = R_RT_Handle::GetSurface(&result)->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface(&result);
  R_SetRenderTargetSize(gfxContext->source, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FOR_VIEW);
  v12 = gfxContext->source;
  viewport = viewInfo->displayViewport;
  R_SetViewportStruct(v12, &viewport);
  v13 = (float)viewport.height;
  width = (float)viewport.width;
  *(GfxCmdBufContext *)&v15.m_surfaceID = *gfxContext;
  RB_ViewportFilterDirectInternal((GfxCmdBufContext *)&v15, rgp.filmGrainMaterial, 0xFFFFFFFF, &viewport, 0.0, 0.0, width, v13, 0.0, 0.0, 1.0, 1.0, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postfx.cpp(410)");
  R_GPU_EndTimer();
  R_ProfEndNamedEvent(gfxContext->state);
}

/*
==============
RB_DrawDebugPostEffects
==============
*/
void RB_DrawDebugPostEffects(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  __int16 v3; 
  GfxCmdBufContext v7; 
  const R_RT_Surface *Surface; 
  R_RT_ColorHandle m_ssaoRt; 
  R_RT_Image *p_m_image; 
  R_RT_ColorHandle m_ssrRt; 
  R_RT_Image *blackImage; 
  R_RT_Image *whiteImage; 
  const GfxImage *VrsSurface; 
  GfxCmdBufContext v15; 
  CmdBufState *v16; 
  int integer; 
  int v18; 
  const GfxImage *VisibilityImage; 
  R_RT_ColorHandle result; 
  GfxDebugTextureOverlayImages v21; 
  R_RT_ColorHandle v22; 

  R_RT_GetGlobalColor(&result, R_RENDERTARGET_DISPLAY_BUFFER);
  v7 = *gfxContext;
  v22 = result;
  *(GfxCmdBufContext *)&result.m_surfaceID = v7;
  R_SetRenderTargetsInternal_ColorOnly((GfxCmdBufContext *)&result, &v22, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postfx.cpp(645)");
  v21.floatZ = &R_RT_Handle::GetSurface(&viewInfo->sceneRtInput.m_floatZFullRt)->m_image.m_base;
  v21.entityIDVelocity = &R_RT_Handle::GetSurface(&viewInfo->sceneRtInput.m_mainSceneEntityIDVelocityRt)->m_image.m_base;
  v21.tangentFrame = &R_RT_Handle::GetSurface(&viewInfo->sceneRtInput.m_mainSceneTangentFrameRt)->m_image.m_base;
  Surface = R_RT_Handle::GetSurface(&viewInfo->sceneRtInput.m_packedStencilRt);
  m_ssaoRt = viewInfo->sceneRtInput.m_ssaoRt;
  v21.packedStencil = &Surface->m_image.m_base;
  v21.stencilMask = &gfxBuf.dummyBuffer;
  result = m_ssaoRt;
  if ( v3 )
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
  m_ssrRt = viewInfo->sceneRtInput.m_ssrRt;
  v21.ssao = &p_m_image->m_base;
  result = m_ssrRt;
  if ( v3 )
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
  v21.ssr = &blackImage->m_base;
  if ( R_RT_Handle::IsValid(&viewInfo->sceneRtInput.m_transMask) )
    whiteImage = &R_RT_Handle::GetSurface(&viewInfo->sceneRtInput.m_transMask)->m_image;
  else
    whiteImage = (R_RT_Image *)rgp.whiteImage;
  v21.transMask = &whiteImage->m_base;
  VrsSurface = R_VRS_GetVrsSurface();
  v15 = *gfxContext;
  v21.vrs = VrsSurface;
  v21.scopeBuffer = rgp.blackImage;
  v21.sunvisPrepass = &gfxBuf.dummyBuffer;
  *(GfxCmdBufContext *)&result.m_surfaceID = v15;
  if ( rg.debugTextureOverlay )
  {
    v16 = *(CmdBufState **)&result.m_tracking.m_allocCounter;
    R_ProfBeginNamedEvent(*(CmdBufState **)&result.m_tracking.m_allocCounter, "RB_DebugTextureOverlay");
    *(GfxCmdBufContext *)&result.m_surfaceID = *gfxContext;
    R_DebugTextureOverlay((GfxCmdBufContext *)&result, viewInfo, &v21);
    R_ProfEndNamedEvent(v16);
  }
  R_RefShader_Draw(gfxContext, viewInfo);
  integer = r_showFrustumGridDebug->current.integer;
  if ( integer )
  {
    *(GfxCmdBufContext *)&result.m_surfaceID = *gfxContext;
    RB_DecalVolumes_FrustumGridOverlay((GfxCmdBufContext *)&result, viewInfo, integer);
  }
  else
  {
    v18 = r_showFrustumLightsDebug->current.integer;
    if ( v18 )
    {
      *(GfxCmdBufContext *)&result.m_surfaceID = *gfxContext;
      RB_FL_ShowDebugOverlay((GfxCmdBufContext *)&result, viewInfo, v18, r_showFrustumLightsMinIndexDebug->current.unsignedInt, r_showFrustumLightsMaxIndexDebug->current.unsignedInt, r_showFrustumLightsDebugBlend->current.value);
    }
    else if ( r_volumetricsDebug->current.integer == 1 && R_VOL_AnyVisible(viewInfo) )
    {
      VisibilityImage = R_VOL_GetVisibilityImage(data->volumetricsIndex & 1);
      *(GfxCmdBufContext *)&result.m_surfaceID = *gfxContext;
      RB_ShowVolumetricDebug((GfxCmdBufContext *)&result, viewInfo, data, VisibilityImage);
    }
    else if ( rg.debugOverdrawOverlay )
    {
      *(GfxCmdBufContext *)&result.m_surfaceID = *gfxContext;
      RB_ShowOverdrawOverlay((GfxCmdBufContext *)&result, viewInfo);
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
  R_RT_Group *v9; 
  GfxCmdBufState *state; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  GfxCmdBufSourceState *source; 
  R_RT_Handle v14; 
  R_RT_Handle result; 
  R_RT_Group v16; 
  R_RT_Group v17; 

  v4 = DVARINT_r_refImageDraw;
  if ( !DVARINT_r_refImageDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_refImageDraw") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.integer == refImageDrawMode )
  {
    v14 = (R_RT_Handle)activeRtGroup->m_colorRts[0];
    v9 = R_RT_Group::ConstructColor(&v16, (R_RT_ColorHandle *)&v14);
    state = gfxContext->state;
    v17 = *v9;
    R_ProfBeginNamedEvent(state, "Draw RefImage");
    v14 = *R_RT_Group::GetValidRt(&v17, &result);
    height = R_RT_Handle::GetSurface(&v14)->m_image.m_base.height;
    Surface = R_RT_Handle::GetSurface(&v14);
    source = gfxContext->source;
    R_SetRenderTargetSize(gfxContext->source, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FOR_VIEW);
    R_BeginViewInternal(source, &viewInfo->sceneDef, (const GfxViewParms *)viewInfo, &viewInfo->viewParmsSet.frames[1].viewParms);
    R_SetViewportStruct(source, &viewInfo->sceneViewport);
    *(GfxCmdBufContext *)&v14.m_surfaceID = *gfxContext;
    R_SetRenderTargetsInternal((GfxCmdBufContext *)&v14, &v17, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postfx.cpp(836)");
    if ( v17.m_colorRtCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 559, ASSERT_TYPE_ASSERT, "(this->m_colorRtCount == 1)", (const char *)&queryFormat, "this->m_colorRtCount == 1") )
      __debugbreak();
    v14 = (R_RT_Handle)v17.m_colorRts[0];
    R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v14, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(state);
    *(GfxCmdBufContext *)&v14.m_surfaceID = *gfxContext;
    R_DrawRefImage((GfxCmdBufContext *)&v14, viewInfo, refImageDrawMode);
    if ( v17.m_colorRtCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 559, ASSERT_TYPE_ASSERT, "(this->m_colorRtCount == 1)", (const char *)&queryFormat, "this->m_colorRtCount == 1") )
    {
      __debugbreak();
      state = gfxContext->state;
    }
    v14 = (R_RT_Handle)v17.m_colorRts[0];
    R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v14, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(state);
    *(GfxCmdBufContext *)&v14.m_surfaceID = *gfxContext;
    R_UnbindRenderTarget((GfxCmdBufContext *)&v14);
    R_ProfEndNamedEvent(state);
  }
}

/*
==============
RB_Magnify
==============
*/
void RB_Magnify(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo)
{
  GfxCmdBufState *state; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  GfxCmdBufContext v9; 
  unsigned int v10; 
  const R_RT_Surface *v11; 
  float width; 
  float v13; 
  float v14; 
  GfxCmdBufContext v15; 
  R_RT_Handle v16; 
  R_RT_Handle v17; 
  R_RT_Handle v18; 
  R_RT_ColorHandle result; 
  GfxCmdBufContext v20; 

  if ( r_magnifierEnable->current.enabled )
  {
    R_ProfBeginNamedEvent(gfxContext->state, "RB_Magnify");
    R_RT_GetGlobalColor(&result, R_RENDERTARGET_DISPLAY_BUFFER);
    v18 = *R_RT_CreateInternal(&v17, viewInfo->displayViewport.width, viewInfo->displayViewport.height, viewInfo->displayViewport.width, viewInfo->displayViewport.height, 1u, 1u, 1u, g_R_RT_renderTargetFmts[1], R_RT_Flag_RTView, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Magnify Temp", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postfx.cpp(771)");
    v16 = v18;
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface(&v16);
      if ( (R_RT_Handle::GetSurface(&v16)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        v18 = v16;
        __debugbreak();
      }
      else
      {
        v18 = v16;
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
    state = gfxContext->state;
    v16 = (R_RT_Handle)result;
    R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v16, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    v16 = v18;
    R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v16, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(state);
    v16 = v18;
    height = R_RT_Handle::GetSurface(&v16)->m_image.m_base.height;
    Surface = R_RT_Handle::GetSurface(&v16);
    R_SetRenderTargetSize(gfxContext->source, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FULL);
    v16 = v18;
    v20 = *gfxContext;
    R_SetRenderTargetsInternal_ColorOnly(&v20, (R_RT_ColorHandle *)&v16, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postfx.cpp(777)");
    v20.state = *(GfxCmdBufState **)&viewInfo->displayViewport.width;
    v17 = (R_RT_Handle)result;
    v9 = *gfxContext;
    v20.source = NULL;
    *(GfxCmdBufContext *)&v16.m_surfaceID = v9;
    R_CopyPartialRT((GfxCmdBufContext *)&v16, (R_RT_ColorHandle *)&v17, (const GfxViewport *)&v20, &viewInfo->displayViewport, rgp.feedbackReplaceBackbufferMaterial);
    *(GfxCmdBufContext *)&v16.m_surfaceID = *gfxContext;
    R_UnbindRenderTarget((GfxCmdBufContext *)&v16);
    v17 = v18;
    R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v17, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    v17 = (R_RT_Handle)result;
    R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v17, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(state);
    v16 = (R_RT_Handle)result;
    v10 = R_RT_Handle::GetSurface(&v16)->m_image.m_base.height;
    v11 = R_RT_Handle::GetSurface(&v16);
    R_SetRenderTargetSize(gfxContext->source, v11->m_image.m_base.width, v10, GFX_USE_VIEWPORT_FULL);
    v17 = (R_RT_Handle)result;
    *(GfxCmdBufContext *)&v16.m_surfaceID = *gfxContext;
    R_SetRenderTargetsInternal_ColorOnly((GfxCmdBufContext *)&v16, (R_RT_ColorHandle *)&v17, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postfx.cpp(786)");
    width = (float)viewInfo->displayViewport.width;
    LODWORD(v20.state) = (int)(float)(width / r_magnifierParams->current.value);
    v13 = (float)viewInfo->displayViewport.height;
    HIDWORD(v20.state) = (int)(float)(v13 / r_magnifierParams->current.vector.v[1]);
    LODWORD(v20.source) = (int)(float)(width * r_magnifierParams->current.vector.v[2]);
    v14 = v13 * r_magnifierParams->current.vector.v[3];
    v17 = v18;
    v15 = *gfxContext;
    HIDWORD(v20.source) = (int)v14;
    *(GfxCmdBufContext *)&v16.m_surfaceID = v15;
    R_CopyPartialRT((GfxCmdBufContext *)&v16, (R_RT_ColorHandle *)&v17, &viewInfo->displayViewport, (const GfxViewport *)&v20, rgp.feedbackReplaceBackbufferMaterial);
    *(GfxCmdBufContext *)&v16.m_surfaceID = *gfxContext;
    R_UnbindRenderTarget((GfxCmdBufContext *)&v16);
    v17 = v18;
    *(GfxCmdBufContext *)&v16.m_surfaceID = *gfxContext;
    R_RT_Destroy((GfxCmdBufContext *)&v16, (R_RT_ColorHandle *)&v17);
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
float RB_UsingAAWithBlurScale(const float blurRadiusFromScript, const float blurRadiusFromDvar)
{
  float value; 
  double BlurRadius; 
  double v4; 

  value = r_blurAALimit->current.value;
  if ( value <= 0.0 )
    return FLOAT_1_0;
  BlurRadius = R_GetBlurRadius(blurRadiusFromScript, blurRadiusFromDvar);
  v4 = I_fclamp(*(float *)&BlurRadius / value, 0.0, 1.0);
  return 1.0 - *(float *)&v4;
}

/*
==============
R_Blur_Apply
==============
*/
void R_Blur_Apply(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_ColorHandle *colorRt, R_RT_ColorHandle *blurColorRt0, R_RT_ColorHandle *blurColorRt1, R_RT_ColorHandle *blurPingPongRt0, R_RT_ColorHandle *blurPingPongRt1, float blurRadius, float blendAlpha, GfxViewport *colorBlurRegion)
{
  unsigned int height; 
  unsigned int v15; 
  const R_RT_Surface *Surface; 
  R_RT_Handle v17; 
  unsigned int width; 
  GfxCmdBufState *state; 
  R_RT_ColorHandle v20; 
  unsigned int v21; 
  GfxCmdBufContext v22; 
  unsigned int v23; 
  const R_RT_Surface *v24; 
  GfxCmdBufSourceState *source; 
  GfxCmdBufContext v26; 
  R_RT_Image *p_m_image; 
  GfxCmdBufContext v28; 
  float v29; 
  float v30; 
  unsigned int v31; 
  R_RT_Handle v32; 
  R_RT_ColorHandle *v33; 
  R_RT_ColorHandle *v34; 
  R_RT_ColorHandle v35; 
  R_RT_Handle v36; 
  R_RT_ColorHandle v37; 
  R_RT_ColorHandle v38; 
  GfxViewport v39; 
  GfxViewport v40; 

  v34 = blurPingPongRt0;
  v33 = blurPingPongRt1;
  if ( colorBlurRegion )
  {
    v39 = *colorBlurRegion;
  }
  else
  {
    height = R_RT_Handle::GetSurface(colorRt)->m_image.m_base.height;
    v39.width = R_RT_Handle::GetSurface(colorRt)->m_image.m_base.width;
    *(_QWORD *)&v39.x = 0i64;
    v39.height = height;
  }
  v15 = R_RT_Handle::GetSurface(blurColorRt0)->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface(blurColorRt0);
  v17 = blurColorRt0->R_RT_Handle;
  width = Surface->m_image.m_base.width;
  *(_QWORD *)&v40.x = 0i64;
  state = gfxContext->state;
  v40.width = width;
  v40.height = v15;
  v32 = v17;
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v32, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  v20 = *blurColorRt0;
  v37 = *colorRt;
  *(GfxCmdBufContext *)&v32.m_surfaceID = *gfxContext;
  v35 = v20;
  RB_CopyPartialRT((GfxCmdBufContext *)&v32, &v35, &v37, &v40, &v39, rgp.feedbackReplaceBackbufferMaterial);
  v35 = *blurColorRt0;
  R_AddRenderTargetTransition(state, &v35, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  v21 = R_RT_Handle::GetSurface(blurColorRt1)->m_image.m_base.height;
  v31 = R_RT_Handle::GetSurface(blurColorRt1)->m_image.m_base.width;
  v35 = *v33;
  v38 = *blurColorRt1;
  v22 = *gfxContext;
  v37 = *v34;
  v36 = blurColorRt0->R_RT_Handle;
  *(GfxCmdBufContext *)&v32.m_surfaceID = v22;
  RB_GaussianFilterImage((GfxCmdBufContext *)&v32, 0, blurRadius, (R_RT_ColorHandle *)&v36, &v38, &v37, &v35, v31, v21, GFX_RENDERTARGET_FORMAT_BACKBUFFER, 4u, viewInfo);
  v32 = colorRt->R_RT_Handle;
  v36 = v32;
  R_HW_AddResourceTransition(state, &v36, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_RENDER_TARGET, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  v23 = R_RT_Handle::GetSurface(&v32)->m_image.m_base.height;
  v24 = R_RT_Handle::GetSurface(&v32);
  source = gfxContext->source;
  R_SetRenderTargetSize(gfxContext->source, v24->m_image.m_base.width, v23, GFX_USE_VIEWPORT_FOR_VIEW);
  v26 = *gfxContext;
  v36 = colorRt->R_RT_Handle;
  *(GfxCmdBufContext *)&v32.m_surfaceID = v26;
  R_SetRenderTargetsInternal_ColorOnly((GfxCmdBufContext *)&v32, (R_RT_ColorHandle *)&v36, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postfx.cpp(193)");
  p_m_image = &R_RT_Handle::GetSurface(blurColorRt1)->m_image;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.consts[59].v[3] = blendAlpha;
  source->input.consts[59].v[0] = 1.0;
  source->input.consts[59].v[1] = 1.0;
  source->input.consts[59].v[2] = 1.0;
  source->input.codeImages[4] = &p_m_image->m_base;
  ++source->constVersions[59];
  source->input.consts[60].v[0] = colorBlackBlank.v[0];
  source->input.consts[60].v[1] = colorBlackBlank.v[1];
  source->input.consts[60].v[2] = colorBlackBlank.v[2];
  v28 = *gfxContext;
  source->input.consts[60].v[3] = colorBlackBlank.v[3];
  ++source->constVersions[60];
  source->input.consts[61].v[0] = 1.0;
  *(_QWORD *)&source->input.consts[61].xyz.y = 1065353216i64;
  source->input.consts[61].v[3] = 0.0;
  ++source->constVersions[61];
  v29 = (float)v39.height;
  v30 = (float)v39.width;
  *(GfxCmdBufContext *)&v32.m_surfaceID = v28;
  RB_ViewportFilterDirectInternal((GfxCmdBufContext *)&v32, rgp.feedbackBlendBackbufferMaterial, 0xFFFFFFFF, &v39, 0.0, 0.0, v30, v29, 0.0, 0.0, 1.0, 1.0, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postfx.cpp(199)");
}

/*
==============
R_Blur_Enabled
==============
*/
bool R_Blur_Enabled(const GfxViewInfo *viewInfo)
{
  int v2; 

  LOBYTE(v2) = R_Screenshot_GetDeferredScreenshotPipelineStage(viewInfo->deferredScreenshotIndex);
  return v2 != 2 && (viewInfo->blurRadiusDvar > 0.0 || viewInfo->blurRadiusScript > 0.0);
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
  int v4; 
  float blurRadiusDvar; 
  float blurRadiusScript; 
  double BlurRadius; 
  __int128 v8; 
  int v11; 

  LOBYTE(v4) = R_Screenshot_GetDeferredScreenshotPipelineStage(viewInfo->deferredScreenshotIndex);
  if ( v4 == 2 )
    return 0;
  blurRadiusDvar = viewInfo->blurRadiusDvar;
  blurRadiusScript = viewInfo->blurRadiusScript;
  if ( blurRadiusDvar <= 0.0 && blurRadiusScript <= 0.0 )
    return 0;
  BlurRadius = R_GetBlurRadius(blurRadiusScript, blurRadiusDvar);
  if ( *(float *)&BlurRadius < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postfx.cpp", 82, ASSERT_TYPE_SANITY, "( ( blurRadius >= 0.0f ) )", "( blurRadius ) = %g", *(float *)&BlurRadius) )
    __debugbreak();
  v8 = 0i64;
  *(float *)&v8 = (float)viewInfo->sceneViewport.height;
  *(float *)&v8 = (float)(*(float *)&v8 * *(float *)&BlurRadius) * 0.00092592591;
  _XMM2 = v8;
  __asm { vmaxss  xmm0, xmm2, dword ptr [rax+28h] }
  v11 = 2;
  if ( (int)(float)(*(float *)&_XMM0 / r_blurMipStepLimit->current.value) + 1 < 2 )
    v11 = (int)(float)(*(float *)&_XMM0 / r_blurMipStepLimit->current.value) + 1;
  return v11 == mip;
}

/*
==============
R_DebugTextureOverlay
==============
*/
void R_DebugTextureOverlay(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxDebugTextureOverlayImages *overlayImages)
{
  const dvar_t *v5; 
  float value; 
  float v7; 
  float v8; 
  float v9; 
  float renderTargetWidth; 
  float renderTargetHeight; 
  GfxCmdBufSourceState *source; 
  const GfxImage *floatZ; 
  GfxCmdBufInput *p_input; 
  GfxCmdBufSourceState *v15; 
  const GfxImage *entityIDVelocity; 
  GfxCmdBufInput *v17; 
  GfxCmdBufSourceState *v18; 
  const GfxImage *tangentFrame; 
  GfxCmdBufInput *v20; 
  GfxCmdBufSourceState *v21; 
  const GfxImage *packedStencil; 
  GfxCmdBufInput *v23; 
  GfxCmdBufSourceState *v24; 
  const GfxImage *ssao; 
  GfxCmdBufInput *v26; 
  GfxCmdBufSourceState *v27; 
  const GfxImage *transMask; 
  GfxCmdBufInput *v29; 
  GfxCmdBufSourceState *v30; 
  const GfxImage *vrs; 
  GfxCmdBufInput *v32; 
  const GfxWrappedBuffer *sunvisPrepass; 
  GfxCmdBufInput *v34; 
  GfxCmdBufSourceState *v35; 
  const GfxImage *scopeBuffer; 
  GfxCmdBufInput *v37; 
  GfxCmdBufContext v38; 

  v38 = *gfxContext;
  RB_EndSurfaceIfNeeded(&v38);
  v5 = r_debugTextureOverlayRect;
  if ( !r_debugTextureOverlayRect && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 669, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  value = v5->current.value;
  v7 = v5->current.vector.v[1];
  v8 = v5->current.vector.v[2];
  v9 = v5->current.vector.v[3];
  renderTargetWidth = (float)gfxContext->source->renderTargetWidth;
  renderTargetHeight = (float)gfxContext->source->renderTargetHeight;
  R_SetPersistentTables(gfxContext, gfxContext->state->data, PERSISTENT_TABLE_SCENE);
  source = gfxContext->source;
  floatZ = overlayImages->floatZ;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[0] = floatZ;
  v15 = gfxContext->source;
  entityIDVelocity = overlayImages->entityIDVelocity;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v17 = &v15->input;
  if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v17->codeImages[1] = entityIDVelocity;
  v18 = gfxContext->source;
  tangentFrame = overlayImages->tangentFrame;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v20 = &v18->input;
  if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v20->codeImages[2] = tangentFrame;
  v21 = gfxContext->source;
  packedStencil = overlayImages->packedStencil;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v23 = &v21->input;
  if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v23->codeImages[79] = packedStencil;
  v24 = gfxContext->source;
  ssao = overlayImages->ssao;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v26 = &v24->input;
  if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v26->codeImages[10] = ssao;
  v27 = gfxContext->source;
  transMask = overlayImages->transMask;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v29 = &v27->input;
  if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v29->codeImages[51] = transMask;
  v30 = gfxContext->source;
  vrs = overlayImages->vrs;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v32 = &v30->input;
  if ( !v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v32->codeImages[25] = vrs;
  sunvisPrepass = overlayImages->sunvisPrepass;
  v34 = &gfxContext->source->input;
  if ( gfxContext->source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1494, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v34->codeBuffers[50] = sunvisPrepass;
  v35 = gfxContext->source;
  scopeBuffer = overlayImages->scopeBuffer;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v37 = &v35->input;
  if ( !v37 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v37->codeImages[80] = scopeBuffer;
  R_Set2D(gfxContext->source);
  v38 = *gfxContext;
  RB_DrawStretchPic(&v38, rgp.textureDebugOverlayMaterial, value * renderTargetWidth, v7 * renderTargetHeight, (float)(v8 - value) * renderTargetWidth, (float)(v9 - v7) * renderTargetHeight, value, v7, v8, v9, 0xFFFFFFFF, GFX_PRIM_STATS_CODE);
  v38 = *gfxContext;
  RB_EndTessSurfaceInternal(&v38, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postfx.cpp(621)");
}

/*
==============
R_DrawRefImage
==============
*/
void R_DrawRefImage(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, RefImageDrawMode refImageDrawMode)
{
  GfxCmdBufSourceState *source; 
  const dvar_t *v6; 
  float value; 
  float v8; 
  float width; 
  float height; 
  const dvar_t *v12; 
  float v13; 
  GfxCmdBufSourceState *v14; 
  GfxImage *refImage; 
  GfxCmdBufInput *p_input; 
  GfxCmdBufContext v20; 
  GfxCmdBufContext v21; 

  source = gfxContext->source;
  R_Set2D(gfxContext->source);
  if ( source->viewMode != VIEW_MODE_2D && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postfx.cpp", 806, ASSERT_TYPE_ASSERT, "( ( gfxContext.source->viewMode == VIEW_MODE_2D ) )", "( gfxContext.source->viewMode ) = %i", source->viewMode) )
    __debugbreak();
  v6 = DVARVEC4_r_refImageBounds;
  if ( !DVARVEC4_r_refImageBounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_refImageBounds") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  value = v6->current.value;
  v8 = v6->current.vector.v[1];
  width = v6->current.vector.v[2];
  height = v6->current.vector.v[3];
  *(float *)&v21.source = value;
  *((float *)&v21.source + 1) = v8;
  *(float *)&v21.state = width;
  *((float *)&v21.state + 1) = height;
  _XMM6 = 0i64;
  if ( rgp.refImage )
  {
    if ( width < 0.0 )
      width = (float)rgp.refImage->width;
    if ( rgp.refImage && height < 0.0 )
      height = (float)rgp.refImage->height;
  }
  v12 = DVARFLT_r_refImageStopsAdjust;
  if ( !DVARFLT_r_refImageStopsAdjust && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_refImageStopsAdjust") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  v13 = powf_0(2.0, v12->current.value);
  v14 = gfxContext->source;
  v14->input.consts[143].v[0] = v13;
  v14->input.consts[143].v[1] = v13;
  v14->input.consts[143].v[2] = v13;
  _XMM0 = (unsigned int)refImageDrawMode;
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm6, xmm9, xmm2
  }
  v14->input.consts[143].v[3] = *(float *)&_XMM0;
  ++v14->constVersions[143];
  refImage = rgp.refImage;
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &v14->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v20 = *gfxContext;
  p_input->codeImages[4] = refImage;
  v21 = v20;
  RB_DrawStretchPic(&v21, rgp.refImageMtl, value, v8, width, height, 0.0, 0.0, 1.0, 1.0, 0xFFFFFFFF, GFX_PRIM_STATS_DEBUG);
  v21 = *gfxContext;
  RB_EndSurfaceIfNeeded(&v21);
}

/*
==============
R_GetBlurRadius
==============
*/
float R_GetBlurRadius(float blurRadiusScript, float blurRadiusDvar)
{
  float v2; 

  v2 = fsqrt((float)(blurRadiusScript * blurRadiusScript) + (float)(blurRadiusDvar * blurRadiusDvar));
  if ( v2 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postfx.cpp", 73, ASSERT_TYPE_SANITY, "( ( blurRadiusFinal >= 0.0f ) )", "( blurRadiusFinal ) = %g", v2) )
    __debugbreak();
  return v2;
}

/*
==============
R_GetBlurRadiusAlphaAndMip
==============
*/
void R_GetBlurRadiusAlphaAndMip(const GfxViewInfo *viewInfo, float *outBlurRadius, float *outBlurAlpha, unsigned int *outBlurMip)
{
  double BlurRadius; 
  float v9; 
  float height; 
  float value; 
  float v12; 
  unsigned int v13; 

  BlurRadius = R_GetBlurRadius(viewInfo->blurRadiusScript, viewInfo->blurRadiusDvar);
  v9 = *(float *)&BlurRadius;
  if ( *(float *)&BlurRadius < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postfx.cpp", 82, ASSERT_TYPE_SANITY, "( ( blurRadius >= 0.0f ) )", "( blurRadius ) = %g", *(float *)&BlurRadius) )
    __debugbreak();
  height = (float)viewInfo->sceneViewport.height;
  *outBlurRadius = (float)(v9 * 0.00092592591) * height;
  value = r_blurAALimit->current.value;
  *outBlurAlpha = 1.0;
  v12 = *outBlurRadius;
  if ( *outBlurRadius < value )
  {
    *outBlurAlpha = v12 / value;
    *outBlurRadius = value;
    v12 = value;
  }
  v13 = 2;
  if ( (int)(float)(v12 / r_blurMipStepLimit->current.value) + 1 < 2 )
    v13 = (int)(float)(v12 / r_blurMipStepLimit->current.value) + 1;
  *outBlurMip = v13;
}

/*
==============
R_Magnify_Part1
==============
*/
void R_Magnify_Part1(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_ColorHandle *srcRt)
{
  GfxCmdBufContext v3; 
  R_RT_ColorHandle v4; 
  GfxCmdBufContext v5; 
  R_RT_ColorHandle v6; 
  GfxViewport v7; 

  v3 = *gfxContext;
  v4 = *srcRt;
  *(_QWORD *)&v7.x = 0i64;
  v7.width = viewInfo->displayViewport.width;
  v7.height = viewInfo->displayViewport.height;
  v6 = v4;
  v5 = v3;
  R_CopyPartialRT(&v5, &v6, &v7, &viewInfo->displayViewport, rgp.feedbackReplaceBackbufferMaterial);
}

/*
==============
R_Magnify_Part2
==============
*/
void R_Magnify_Part2(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_ColorHandle *srcRt)
{
  float width; 
  float height; 
  GfxCmdBufContext v5; 
  R_RT_ColorHandle v6; 
  GfxCmdBufContext v7; 
  R_RT_ColorHandle v8; 
  GfxViewport v9; 

  width = (float)viewInfo->displayViewport.width;
  v9.width = (int)(float)(width / r_magnifierParams->current.value);
  height = (float)viewInfo->displayViewport.height;
  v9.height = (int)(float)(height / r_magnifierParams->current.vector.v[1]);
  v9.x = (int)(float)(width * r_magnifierParams->current.vector.v[2]);
  v5 = *gfxContext;
  v6 = *srcRt;
  v9.y = (int)(float)(height * r_magnifierParams->current.vector.v[3]);
  v8 = v6;
  v7 = v5;
  R_CopyPartialRT(&v7, &v8, &viewInfo->displayViewport, &v9, rgp.feedbackReplaceBackbufferMaterial);
}

/*
==============
R_RefShader_Draw
==============
*/
void R_RefShader_Draw(const GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo)
{
  const dvar_t *v2; 
  int integer; 
  const dvar_t *v5; 
  int v6; 
  bool v7; 
  const dvar_t *v8; 
  const dvar_t *v9; 
  const dvar_t *v10; 
  const dvar_t *v11; 
  const dvar_t *v12; 
  const dvar_t *v13; 
  const dvar_t *v14; 
  GfxCmdBufSourceState *source; 
  float value; 
  Material *refShaderMtl; 
  GfxViewport *p_sceneViewport; 
  float height; 
  float width; 
  GfxCmdBufContext v21; 
  float v22; 

  v2 = DVARINT_r_refShaderRenderStage;
  if ( !DVARINT_r_refShaderRenderStage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_refShaderRenderStage") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  integer = v2->current.integer;
  if ( integer )
  {
    R_Set2D(gfxContext->source);
    v21 = *gfxContext;
    RB_SetUIColorimetryParams(&v21);
    v21 = *gfxContext;
    RB_SetDisplayMappingParams(&v21);
    v5 = DCONST_DVARBOOL_r_refShaderDrawColorCube;
    if ( !DCONST_DVARBOOL_r_refShaderDrawColorCube && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_refShaderDrawColorCube") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    v6 = 0;
    v7 = !v5->current.enabled;
    v8 = DCONST_DVARBOOL_r_refShaderDrawGradient;
    if ( !v7 )
      v6 = 2;
    v22 = *(float *)&v6;
    if ( !DCONST_DVARBOOL_r_refShaderDrawGradient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_refShaderDrawGradient") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    if ( v8->current.enabled )
    {
      v6 |= 4u;
      v22 = *(float *)&v6;
    }
    v9 = DCONST_DVARBOOL_r_refShaderDrawColorGradients;
    if ( !DCONST_DVARBOOL_r_refShaderDrawColorGradients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_refShaderDrawColorGradients") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( v9->current.enabled )
    {
      v6 |= 8u;
      v22 = *(float *)&v6;
    }
    v10 = DCONST_DVARBOOL_r_refShaderDrawMinMaxSwatches;
    if ( !DCONST_DVARBOOL_r_refShaderDrawMinMaxSwatches && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_refShaderDrawMinMaxSwatches") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    if ( v10->current.enabled )
    {
      v6 |= 0x10u;
      v22 = *(float *)&v6;
    }
    v11 = DCONST_DVARBOOL_r_refShaderDrawLimitedRangeSwatches;
    if ( !DCONST_DVARBOOL_r_refShaderDrawLimitedRangeSwatches && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_refShaderDrawLimitedRangeSwatches") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    if ( v11->current.enabled )
    {
      v6 |= 0x20u;
      v22 = *(float *)&v6;
    }
    v12 = DCONST_DVARBOOL_r_refShaderDrawColorChecker;
    if ( !DCONST_DVARBOOL_r_refShaderDrawColorChecker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_refShaderDrawColorChecker") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    if ( v12->current.enabled )
    {
      v6 |= 0x40u;
      v22 = *(float *)&v6;
    }
    v13 = DCONST_DVARBOOL_r_refShaderDrawCieDiagram;
    if ( !DCONST_DVARBOOL_r_refShaderDrawCieDiagram && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_refShaderDrawCieDiagram") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    if ( v13->current.enabled )
      LODWORD(v22) = v6 | 0x80;
    v14 = DCONST_DVARFLT_r_refShaderBackgroundAlpha;
    if ( !DCONST_DVARFLT_r_refShaderBackgroundAlpha && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_refShaderBackgroundAlpha") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    source = gfxContext->source;
    value = v14->current.value;
    source->input.consts[144].v[0] = v22;
    source->input.consts[144].v[1] = value;
    *(_QWORD *)&source->input.consts[144].xyz.z = 0i64;
    ++source->constVersions[144];
    refShaderMtl = rgp.refShaderMtl;
    p_sceneViewport = &gfxContext->source->sceneViewport;
    v21 = *gfxContext;
    if ( integer == 1 )
      refShaderMtl = rgp.refShaderTonemapMtl;
    height = (float)p_sceneViewport->height;
    width = (float)p_sceneViewport->width;
    RB_ViewportFilterDirectInternal(&v21, refShaderMtl, 0xFFFFFFFF, p_sceneViewport, 0.0, 0.0, width, height, 0.0, 0.0, 1.0, 1.0, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_postfx.cpp(583)");
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
  GfxCmdBufContext v8; 
  R_RT_ColorHandle v9; 

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
          v8 = *gfxContext;
          v9 = *colorRt;
          R_Screenshot_HdrExposedScene(&v8, viewInfo, data, &v9);
        }
      }
      else
      {
        v8 = *gfxContext;
        v9 = *colorRt;
        R_Screenshot_HdrScene(&v8, viewInfo, data, &v9);
      }
    }
    else
    {
      v8 = *gfxContext;
      v9 = *colorRt;
      R_Screenshot_PostTonemapScene(&v8, viewInfo, data, &v9);
    }
  }
  else
  {
    v8 = *gfxContext;
    v9 = *colorRt;
    R_Screenshot_PreCompositeToDisplayScene(&v8, viewInfo, data, &v9);
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
  GfxCmdBufContext v10; 
  GfxCmdBufState *state; 
  GfxCmdBufContext v12; 
  R_RT_Handle v13; 
  R_RT_ColorHandle v14; 
  GfxViewport v15; 
  R_RT_ColorHandle result; 

  LOBYTE(v7) = R_Screenshot_GetDeferredScreenshotPipelineStage(viewInfo->deferredScreenshotIndex);
  if ( v7 == 3 )
  {
    width = R_RT_Handle::GetSurface(sceneRt)->m_image.m_base.width;
    height = R_RT_Handle::GetSurface(sceneRt)->m_image.m_base.height;
    R_Screenshot_CreateDeferredRt(&result, EASE_IN_OUT_QUAD, GFX_RENDERTARGET_FORMAT_SCENEBUFFER, viewInfo->deferredScreenshotIndex, width, height);
    if ( result.m_surfaceID )
    {
      R_RT_Handle::GetSurface(&result);
      v14 = *sceneRt;
      v10 = *gfxContext;
      v15.width = width;
      *(_QWORD *)&v15.x = 0i64;
      v15.height = height;
      v12 = v10;
      v13 = (R_RT_Handle)result;
      RB_CopyRT(&v12, (R_RT_ColorHandle *)&v13, &v14, &v15, rgp.feedbackReplaceScenebufferMaterial);
      state = gfxContext->state;
      v13 = (R_RT_Handle)result;
      R_HW_AddResourceTransition(state, &v13, D3D12_RESOURCE_STATE_RENDER_TARGET, D3D12_RESOURCE_STATE_COPY_SOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_FlushResourceTransitions(gfxContext->state);
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
  R_RT_ColorHandle v8; 
  GfxCmdBufContext v9; 
  GfxCmdBufState *state; 
  GfxCmdBufContext v11; 
  R_RT_Handle v12; 
  R_RT_ColorHandle v13; 
  GfxViewport v14; 
  R_RT_ColorHandle result; 

  LOBYTE(v7) = R_Screenshot_GetDeferredScreenshotPipelineStage(viewInfo->deferredScreenshotIndex);
  if ( v7 == 2 )
  {
    R_Screenshot_CreateDeferredRt(&result, EASE_OUT_QUAD, GFX_RENDERTARGET_FORMAT_BACKBUFFER, viewInfo->deferredScreenshotIndex, viewInfo->displayViewport.width, viewInfo->displayViewport.height);
    if ( result.m_surfaceID )
    {
      R_RT_Handle::GetSurface(&result);
      v8 = *displayRt;
      v14.width = viewInfo->displayViewport.width;
      v14.height = viewInfo->displayViewport.height;
      v13 = v8;
      v9 = *gfxContext;
      *(_QWORD *)&v14.x = 0i64;
      v12 = (R_RT_Handle)result;
      v11 = v9;
      RB_CopyPartialRT(&v11, (R_RT_ColorHandle *)&v12, &v13, &viewInfo->displayViewport, &v14, rgp.feedbackReplaceBackbufferMaterial);
      state = gfxContext->state;
      v12 = (R_RT_Handle)result;
      R_HW_AddResourceTransition(state, &v12, D3D12_RESOURCE_STATE_RENDER_TARGET, D3D12_RESOURCE_STATE_COPY_SOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_FlushResourceTransitions(gfxContext->state);
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
  GfxCmdBufContext v11; 
  GfxCmdBufState *state; 
  GfxCmdBufContext v13; 
  R_RT_Handle v14; 
  R_RT_ColorHandle v15; 
  GfxViewport v16; 
  R_RT_ColorHandle result; 

  LOBYTE(v7) = R_Screenshot_GetDeferredScreenshotPipelineStage(viewInfo->deferredScreenshotIndex);
  if ( v7 == 1 )
  {
    height = R_RT_Handle::GetSurface(colorRT)->m_image.m_base.height;
    Surface = R_RT_Handle::GetSurface(colorRT);
    R_Screenshot_CreateDeferredRt(&result, EASE_IN_QUAD, GFX_RENDERTARGET_FORMAT_BACKBUFFER, viewInfo->deferredScreenshotIndex, Surface->m_image.m_base.width, height);
    if ( result.m_surfaceID )
    {
      R_RT_Handle::GetSurface(&result);
      *(_QWORD *)&v16.x = 0i64;
      v16.width = R_RT_Handle::GetSurface(colorRT)->m_image.m_base.width;
      v10 = R_RT_Handle::GetSurface(colorRT);
      v15 = *colorRT;
      v11 = *gfxContext;
      v16.height = v10->m_image.m_base.height;
      v14 = (R_RT_Handle)result;
      v13 = v11;
      RB_CopyPartialRT(&v13, (R_RT_ColorHandle *)&v14, &v15, &v16, &v16, rgp.feedbackReplaceBackbufferMaterial);
      state = gfxContext->state;
      v14 = (R_RT_Handle)result;
      R_HW_AddResourceTransition(state, &v14, D3D12_RESOURCE_STATE_RENDER_TARGET, D3D12_RESOURCE_STATE_COPY_SOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_FlushResourceTransitions(gfxContext->state);
    }
    else if ( result.m_tracking.m_allocCounter )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
  }
}

