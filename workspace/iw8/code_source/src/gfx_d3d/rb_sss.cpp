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
  GfxCmdBufSourceState *source; 
  R_RT_Image *p_m_image; 
  GfxCmdBufState *state; 
  float tanHalfFovY; 
  float tanHalfFovX; 
  const vec2_t *MatchingDynamicResolutionTable; 
  GfxCmdBufContext v14; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  __m256i m_mainSceneDepthRt; 
  R_RT_Group *v18; 
  GfxCmdBufContext v19; 
  GfxImage *blackImage; 
  const R_RT_Surface *v21; 
  __m256i m_mainSceneColorRt; 
  R_RT_Group *v23; 
  GfxCmdBufContext v24; 
  const R_RT_Surface *v25; 
  const R_RT_Surface *v26; 
  const R_RT_Surface *v27; 
  R_RT_Group v31; 
  GfxCmdBufContext result[2]; 
  float scaleParams[8]; 
  R_RT_Group v34; 

  source = gfxContext->source;
  p_m_image = &R_RT_Handle::GetSurface(&viewInfo->sceneRtInput.m_floatZFullRt)->m_image;
  if ( !R_RT_Handle::IsValid(&viewInfo->sceneRtInput.m_mainSceneSSSAlbedoRt) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sss.cpp", 112, ASSERT_TYPE_ASSERT, "(viewInfo->sceneRtInput.m_mainSceneSSSAlbedoRt)", "%s\n\tSubsurface Scattering albedo render target has not been allocated.", "viewInfo->sceneRtInput.m_mainSceneSSSAlbedoRt") )
    __debugbreak();
  if ( !R_RT_Handle::IsValid(&viewInfo->sceneRtInput.m_mainSceneSSSDiffuseRt) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sss.cpp", 113, ASSERT_TYPE_ASSERT, "(viewInfo->sceneRtInput.m_mainSceneSSSDiffuseRt)", "%s\n\tSubsurface Scattering specular render target has not been allocated.", "viewInfo->sceneRtInput.m_mainSceneSSSDiffuseRt") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFF7F50, "Screen-Space SSS");
  R_GPU_BeginTimer(GPU_TIMER_SSS_FILTER);
  R_InitCmdBufSourceState(source, &viewInfo->input);
  state = gfxContext->state;
  if ( (*((_BYTE *)&source->input + 7920) & 1) != 0 )
  {
    R_LockIfGfxImmediateContext(state->device);
    R_InitCmdBufState(state);
  }
  else
  {
    R_LockGfxImmediateContext();
    _XMM0 = (__int128)*RB_GetBackendCmdBufContext(result);
    __asm { vpextrq rdx, xmm0, 1; in }
    if ( state != _RDX )
      GfxCmdBufState::Copy(state, _RDX);
  }
  memset_0(state->perPrimConstantState, 255, sizeof(state->perPrimConstantState));
  memset_0(state->perObjectConstantState, 255, sizeof(state->perObjectConstantState));
  memset_0(state->stableConstantState, 255, sizeof(state->stableConstantState));
  state->data = source->input.data;
  R_ProfBeginNamedEvent(state, "Screen-Space SSS");
  tanHalfFovY = viewInfo->viewParmsSet.frames[0].viewParms.camera.tanHalfFovY;
  tanHalfFovX = viewInfo->viewParmsSet.frames[0].viewParms.camera.tanHalfFovX;
  MatchingDynamicResolutionTable = R_RT_FindMatchingDynamicResolutionTable(vidConfig.sceneWidth, vidConfig.sceneHeight);
  SSSSCalculateScaleParams(&viewInfo->sss.profile, viewInfo->viewParmsSet.frames[0].viewParms.camera.tanHalfFovY, (float)((float)(tanHalfFovX / tanHalfFovY) * MatchingDynamicResolutionTable[(unsigned __int8)viewInfo->input.resolution.step].v[0]) / (float)((float)(MatchingDynamicResolutionTable->v[0] / MatchingDynamicResolutionTable->v[1]) * MatchingDynamicResolutionTable[(unsigned __int8)viewInfo->input.resolution.step].v[1]), scaleParams);
  SSSSCalculateProfileParams(&viewInfo->sss.profile, (float *)result);
  source->input.consts[146] = *(vec4_t *)scaleParams;
  v14 = result[0];
  ++source->constVersions[146];
  source->input.consts[147] = (vec4_t)v14;
  ++source->constVersions[147];
  R_BeginViewInternal(source, &viewInfo->sceneDef, (const GfxViewParms *)viewInfo, &viewInfo->viewParmsSet.frames[1].viewParms);
  R_SetViewportStruct(source, &viewInfo->sceneViewport);
  *(__m256i *)&result[0].source = *(__m256i *)pingPongRenderTarget;
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)result, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  *(__m256i *)&result[0].source = *(__m256i *)pingPongRenderTarget;
  height = R_RT_Handle::GetSurface((R_RT_Handle *)result)->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface((R_RT_Handle *)result);
  R_SetRenderTargetSize(source, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FULL);
  m_mainSceneDepthRt = (__m256i)viewInfo->sceneRtInput.m_mainSceneDepthRt;
  *(__m256i *)scaleParams = *(__m256i *)pingPongRenderTarget;
  *(__m256i *)&result[0].source = m_mainSceneDepthRt;
  v18 = R_RT_Group::ConstructColorDepth(&v31, (R_RT_ColorHandle *)scaleParams, (R_RT_DepthHandle *)result);
  *(_OWORD *)&v34.m_colorRtCount = *(_OWORD *)&v18->m_colorRtCount;
  *(_OWORD *)&v34.m_colorRts[0].m_tracking.m_allocCounter = *(_OWORD *)&v18->m_colorRts[0].m_tracking.m_allocCounter;
  *(_OWORD *)&v34.m_colorRts[0].m_tracking.m_location = *(_OWORD *)&v18->m_colorRts[0].m_tracking.m_location;
  *(_OWORD *)&v34.m_colorRts[1].m_tracking.m_allocCounter = *(_OWORD *)&v18->m_colorRts[1].m_tracking.m_allocCounter;
  *(_OWORD *)&v34.m_colorRts[1].m_tracking.m_location = *(_OWORD *)&v18->m_colorRts[1].m_tracking.m_location;
  *(_OWORD *)&v34.m_colorRts[2].m_tracking.m_allocCounter = *(_OWORD *)&v18->m_colorRts[2].m_tracking.m_allocCounter;
  *(_OWORD *)&v34.m_colorRts[2].m_tracking.m_location = *(_OWORD *)&v18->m_colorRts[2].m_tracking.m_location;
  *(_OWORD *)&v34.m_colorRts[3].m_tracking.m_allocCounter = *(_OWORD *)&v18->m_colorRts[3].m_tracking.m_allocCounter;
  *(_OWORD *)&v34.m_colorRts[3].m_tracking.m_location = *(_OWORD *)&v18->m_colorRts[3].m_tracking.m_location;
  *(_OWORD *)&v34.m_depthRt.m_tracking.m_allocCounter = *(_OWORD *)&v18->m_depthRt.m_tracking.m_allocCounter;
  *(_OWORD *)&v34.m_depthRt.m_tracking.m_location = *(_OWORD *)&v18->m_depthRt.m_tracking.m_location;
  v19 = *gfxContext;
  v34.m_vrsRt.m_tracking = v18->m_vrsRt.m_tracking;
  result[0] = v19;
  R_SetRenderTargetsInternal(result, &v34, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sss.cpp(132)");
  blackImage = rgp.blackImage;
  v21 = R_RT_Handle::GetSurface(&viewInfo->sceneRtInput.m_mainSceneColorRt);
  result[0] = *gfxContext;
  R_SSS_BlurX(result, viewInfo, &v21->m_image.m_base, &p_m_image->m_base, blackImage);
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[6] = NULL;
  R_ClearResourceBuffers(state);
  R_FlushResourceBuffers(state);
  *(R_RT_ColorHandle *)&result[0].source = viewInfo->sceneRtInput.m_mainSceneColorRt;
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)result, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  *(__m256i *)&result[0].source = *(__m256i *)pingPongRenderTarget;
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)result, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  m_mainSceneColorRt = (__m256i)viewInfo->sceneRtInput.m_mainSceneColorRt;
  *(R_RT_DepthHandle *)&result[0].source = viewInfo->sceneRtInput.m_mainSceneDepthRt;
  *(__m256i *)scaleParams = m_mainSceneColorRt;
  v23 = R_RT_Group::ConstructColorDepth(&v31, (R_RT_ColorHandle *)scaleParams, (R_RT_DepthHandle *)result);
  *(_OWORD *)&v34.m_colorRtCount = *(_OWORD *)&v23->m_colorRtCount;
  *(_OWORD *)&v34.m_colorRts[0].m_tracking.m_allocCounter = *(_OWORD *)&v23->m_colorRts[0].m_tracking.m_allocCounter;
  *(_OWORD *)&v34.m_colorRts[0].m_tracking.m_location = *(_OWORD *)&v23->m_colorRts[0].m_tracking.m_location;
  *(_OWORD *)&v34.m_colorRts[1].m_tracking.m_allocCounter = *(_OWORD *)&v23->m_colorRts[1].m_tracking.m_allocCounter;
  *(_OWORD *)&v34.m_colorRts[1].m_tracking.m_location = *(_OWORD *)&v23->m_colorRts[1].m_tracking.m_location;
  *(_OWORD *)&v34.m_colorRts[2].m_tracking.m_allocCounter = *(_OWORD *)&v23->m_colorRts[2].m_tracking.m_allocCounter;
  *(_OWORD *)&v34.m_colorRts[2].m_tracking.m_location = *(_OWORD *)&v23->m_colorRts[2].m_tracking.m_location;
  *(_OWORD *)&v34.m_colorRts[3].m_tracking.m_allocCounter = *(_OWORD *)&v23->m_colorRts[3].m_tracking.m_allocCounter;
  *(_OWORD *)&v34.m_colorRts[3].m_tracking.m_location = *(_OWORD *)&v23->m_colorRts[3].m_tracking.m_location;
  *(_OWORD *)&v34.m_depthRt.m_tracking.m_allocCounter = *(_OWORD *)&v23->m_depthRt.m_tracking.m_allocCounter;
  *(_OWORD *)&v34.m_depthRt.m_tracking.m_location = *(_OWORD *)&v23->m_depthRt.m_tracking.m_location;
  v24 = *gfxContext;
  v34.m_vrsRt.m_tracking = v23->m_vrsRt.m_tracking;
  result[0] = v24;
  R_SetRenderTargetsInternal(result, &v34, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sss.cpp(147)");
  v25 = R_RT_Handle::GetSurface(&viewInfo->sceneRtInput.m_mainSceneSSSAlbedoRt);
  v26 = R_RT_Handle::GetSurface(&viewInfo->sceneRtInput.m_mainSceneSSSDiffuseRt);
  v27 = R_RT_Handle::GetSurface(&pingPongRenderTarget->R_RT_Handle);
  result[0] = *gfxContext;
  R_SSS_BlurY(result, viewInfo, &v25->m_image.m_base, &v26->m_image.m_base, &v27->m_image.m_base, &p_m_image->m_base, rgp.blackImage);
  *(R_RT_ColorHandle *)&result[0].source = viewInfo->sceneRtInput.m_mainSceneColorRt;
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)result, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  R_ProfEndNamedEvent(state);
  R_ResetRenderTargets(state);
  if ( (*((_BYTE *)&source->input + 7920) & 1) != 0 )
  {
    R_ShutdownCmdBufState(state);
    R_UnlockIfGfxImmediateContext(state->device);
  }
  else
  {
    _XMM0 = (__int128)*RB_GetBackendCmdBufContext(result);
    __asm { vpextrq rcx, xmm0, 1; out }
    if ( state != _RCX )
    {
      GfxCmdBufState::Copy(_RCX, state);
      R_FlushImmediateContext();
    }
    R_UnlockGfxImmediateContext();
  }
  Sys_ProfEndNamedEvent();
  R_GPU_EndTimer();
}

/*
==============
R_SSS_Bind
==============
*/
void R_SSS_Bind(GfxCmdBufSourceState *gfxSource, const GfxViewInfo *viewInfo)
{
  float tanHalfFovY; 
  float tanHalfFovX; 
  const vec2_t *MatchingDynamicResolutionTable; 
  vec4_t v7; 
  float scaleParams[4]; 
  float profileParams[4]; 

  tanHalfFovY = viewInfo->viewParmsSet.frames[0].viewParms.camera.tanHalfFovY;
  tanHalfFovX = viewInfo->viewParmsSet.frames[0].viewParms.camera.tanHalfFovX;
  MatchingDynamicResolutionTable = R_RT_FindMatchingDynamicResolutionTable(vidConfig.sceneWidth, vidConfig.sceneHeight);
  SSSSCalculateScaleParams(&viewInfo->sss.profile, viewInfo->viewParmsSet.frames[0].viewParms.camera.tanHalfFovY, (float)((float)(tanHalfFovX / tanHalfFovY) * MatchingDynamicResolutionTable[(unsigned __int8)viewInfo->input.resolution.step].v[0]) / (float)((float)(MatchingDynamicResolutionTable->v[0] / MatchingDynamicResolutionTable->v[1]) * MatchingDynamicResolutionTable[(unsigned __int8)viewInfo->input.resolution.step].v[1]), scaleParams);
  SSSSCalculateProfileParams(&viewInfo->sss.profile, profileParams);
  gfxSource->input.consts[146] = *(vec4_t *)scaleParams;
  v7 = *(vec4_t *)profileParams;
  ++gfxSource->constVersions[146];
  gfxSource->input.consts[147] = v7;
  ++gfxSource->constVersions[147];
  R_BeginViewInternal(gfxSource, &viewInfo->sceneDef, (const GfxViewParms *)viewInfo, &viewInfo->viewParmsSet.frames[1].viewParms);
  R_SetViewportStruct(gfxSource, &viewInfo->sceneViewport);
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
  GfxCmdBufSourceState *v17; 
  GfxCmdBufInput *v18; 
  GfxCmdBufSourceState *v19; 
  GfxCmdBufInput *v20; 
  GfxCmdBufContext v21; 
  float height; 
  float width; 
  GfxCmdBufContext v24; 

  source = gfxContext->source;
  _XMM0 = rg.vrs;
  __asm { vpcmpeqd xmm2, xmm0, xmm1 }
  _XMM0 = LODWORD(FLOAT_2_0);
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
  v17 = gfxContext->source;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v18 = &v17->input;
  if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v18->codeImages[0] = floatZfull;
  v19 = gfxContext->source;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v20 = &v19->input;
  if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v21 = *gfxContext;
  v20->codeImages[85] = targetRW;
  height = (float)viewInfo->sceneGeoViewport.height;
  width = (float)viewInfo->sceneGeoViewport.width;
  v24 = v21;
  RB_ViewportFilterDirectInternal(&v24, rgp.sssMaterials[0][cinematic][vrs], 0xFFFFFFFF, &viewInfo->sceneGeoViewport, 0.0, 0.0, width, height, 0.0, 0.0, 1.0, 1.0, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sss.cpp(84)");
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
  GfxCmdBufSourceState *v19; 
  GfxCmdBufInput *v20; 
  GfxCmdBufSourceState *v21; 
  GfxCmdBufInput *v22; 
  GfxCmdBufSourceState *v23; 
  GfxCmdBufInput *v24; 
  GfxCmdBufSourceState *v25; 
  GfxCmdBufInput *v26; 
  GfxCmdBufContext v27; 
  float height; 
  float width; 
  GfxCmdBufContext v30; 

  source = gfxContext->source;
  _XMM0 = rg.vrs;
  __asm { vpcmpeqd xmm2, xmm0, xmm1 }
  _XMM0 = LODWORD(FLOAT_2_0);
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
  v19 = gfxContext->source;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v20 = &v19->input;
  if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v20->codeImages[35] = diffuse;
  v21 = gfxContext->source;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v22 = &v21->input;
  if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v22->codeImages[6] = pingPong;
  v23 = gfxContext->source;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v24 = &v23->input;
  if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v24->codeImages[0] = floatZfull;
  v25 = gfxContext->source;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v26 = &v25->input;
  if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v27 = *gfxContext;
  v26->codeImages[80] = scopeBuffer;
  height = (float)viewInfo->sceneGeoViewport.height;
  width = (float)viewInfo->sceneGeoViewport.width;
  v30 = v27;
  RB_ViewportFilterDirectInternal(&v30, rgp.sssMaterials[1][cinematic][vrs], 0xFFFFFFFF, &viewInfo->sceneGeoViewport, 0.0, 0.0, width, height, 0.0, 0.0, 1.0, 1.0, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_sss.cpp(102)");
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
void R_SSS_Init(void)
{
  Dvar_BeginPermanentRegistration();
  r_sssEnable = Dvar_RegisterBool("LNOSSNSNTK", 1, 4u, "Enables the subsurface scattering effect (note that disabling SSS will not prevent the filter from running)");
  r_sssMaxRadius = Dvar_RegisterFloat("OTTRLMNPT", 0.51999998, 0.0, 10.0, 0x44u, "Controls the maximum radius (in inches)");
  r_sssFalloff = Dvar_RegisterFloat("MKOLPSNSMN", 2.5, 0.5, 10.0, 0x44u, "Controls the blend between far scattering (zero) and near scattering (one)");
  r_sssRadius = Dvar_RegisterVec3("MQNOQNKRP", 1.0, 0.30000001, 0.15000001, 0.001, 1.0, 0x44u, "Controls the far scattering radius (relative to the maximum radius)");
  Dvar_EndPermanentRegistration();
}

/*
==============
R_SSS_SetInfo
==============
*/
void R_SSS_SetInfo(GfxViewInfo *viewInfo)
{
  bool enabled; 
  float value; 
  const dvar_t *v4; 

  enabled = r_sssEnable->current.enabled;
  viewInfo->sss.enabled = enabled;
  if ( enabled )
    value = r_sssMaxRadius->current.value;
  else
    value = FLOAT_1_1920929eN7;
  viewInfo->sss.profile.maxRadius = value;
  LODWORD(viewInfo->sss.profile.falloff) = r_sssFalloff->current.integer;
  v4 = r_sssRadius;
  LODWORD(viewInfo->sss.profile.radius[0]) = r_sssRadius->current.integer;
  viewInfo->sss.profile.radius[1] = v4->current.vector.v[1];
  viewInfo->sss.profile.radius[2] = v4->current.vector.v[2];
  _XMM0 = enabled;
  __asm { vpcmpeqd xmm3, xmm0, xmm1 }
  _XMM1 = LODWORD(FLOAT_1_0);
  __asm { vblendvps xmm0, xmm1, xmm2, xmm3 }
  viewInfo->input.sceneConstants.ssssMaterialParams.v[0] = *(float *)&_XMM0;
  *(_QWORD *)&viewInfo->input.sceneConstants.ssssMaterialParams.xyz.y = 0i64;
  viewInfo->input.sceneConstants.ssssMaterialParams.v[3] = 0.0;
}

