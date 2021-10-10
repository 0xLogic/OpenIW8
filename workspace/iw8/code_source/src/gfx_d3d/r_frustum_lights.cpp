/*
==============
R_GenerateOmniLightModel
==============
*/

void __fastcall R_GenerateOmniLightModel(const vec3_t *lightOrigin, float radius, const vec3_t *bulbLength, GfxLightModel *lightModel)
{
  ?R_GenerateOmniLightModel@@YAXAEBTvec3_t@@M0PEAUGfxLightModel@@@Z(lightOrigin, radius, bulbLength, lightModel);
}

/*
==============
R_ClearFrustumLightsClusterBuffer
==============
*/

void __fastcall R_ClearFrustumLightsClusterBuffer(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, R_RT_BufferHandle *maskClusterBuffer)
{
  ?R_ClearFrustumLightsClusterBuffer@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@VR_RT_BufferHandle@@@Z(computeState, viewInfo, maskClusterBuffer);
}

/*
==============
R_GenerateLightModelNormals
==============
*/

void __fastcall R_GenerateLightModelNormals(GfxLightModelInterface *lightModel)
{
  ?R_GenerateLightModelNormals@@YAXPEAUGfxLightModelInterface@@@Z(lightModel);
}

/*
==============
R_FL_RenderDebugProxies
==============
*/

void __fastcall R_FL_RenderDebugProxies(GfxCmdBufContext *context, const GfxViewInfo *viewInfo)
{
  ?R_FL_RenderDebugProxies@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@@Z(context, viewInfo);
}

/*
==============
R_ToggleFrustumLightsFrame
==============
*/

unsigned int __fastcall R_ToggleFrustumLightsFrame()
{
  return ?R_ToggleFrustumLightsFrame@@YAIXZ();
}

/*
==============
R_RenderFrustumLightsClusterBuffer
==============
*/

void __fastcall R_RenderFrustumLightsClusterBuffer(GfxCmdBufContext *context, const GfxViewInfo *viewInfo, const GfxBackEndData *data, R_RT_BufferHandle *maskClusterBuffer)
{
  ?R_RenderFrustumLightsClusterBuffer@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@VR_RT_BufferHandle@@@Z(context, viewInfo, data, maskClusterBuffer);
}

/*
==============
R_FrustumLights_FreeRts
==============
*/

void R_FrustumLights_FreeRts(void)
{
  ?R_FrustumLights_FreeRts@@YAXXZ();
}

/*
==============
R_GetFrustumLightsClusterBuffer
==============
*/

const GfxWrappedBuffer *__fastcall R_GetFrustumLightsClusterBuffer()
{
  return ?R_GetFrustumLightsClusterBuffer@@YAPEBUGfxWrappedBuffer@@XZ();
}

/*
==============
R_GetFrustumLightsTileBuffer
==============
*/

const GfxWrappedBuffer *__fastcall R_GetFrustumLightsTileBuffer()
{
  return ?R_GetFrustumLightsTileBuffer@@YAPEBUGfxWrappedBuffer@@XZ();
}

/*
==============
RB_RenderFrustumLightsCluster
==============
*/

void __fastcall RB_RenderFrustumLightsCluster(GfxCmdBufContext *context, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RB_RenderFrustumLightsCluster@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(context, viewInfo, data);
}

/*
==============
R_RenderFrustumLightsTileBuffer
==============
*/

void __fastcall R_RenderFrustumLightsTileBuffer(GfxCmdBufContext *context, const GfxViewInfo *viewInfo, const GfxBackEndData *data, R_RT_DepthHandle *depthRt, R_RT_BufferHandle *maskBuffer, R_RT_ColorHandle *volumeTexture)
{
  ?R_RenderFrustumLightsTileBuffer@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@VR_RT_DepthHandle@@VR_RT_BufferHandle@@VR_RT_ColorHandle@@@Z(context, viewInfo, data, depthRt, maskBuffer, volumeTexture);
}

/*
==============
R_GetFrustumLightsZbinBuffer
==============
*/

const GfxWrappedBuffer *__fastcall R_GetFrustumLightsZbinBuffer(const GfxViewInfo *viewInfo)
{
  return ?R_GetFrustumLightsZbinBuffer@@YAPEBUGfxWrappedBuffer@@PEBUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
R_FL_UseRuntimeGeneratedLightModels
==============
*/

void __fastcall R_FL_UseRuntimeGeneratedLightModels(bool use)
{
  ?R_FL_UseRuntimeGeneratedLightModels@@YAX_N@Z(use);
}

/*
==============
R_GetFrustumLightsReadLightBuffer
==============
*/

const GfxWrappedBuffer *__fastcall R_GetFrustumLightsReadLightBuffer(const GfxViewInfo *viewInfo)
{
  return ?R_GetFrustumLightsReadLightBuffer@@YAPEBUGfxWrappedBuffer@@PEBUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
R_InitFrustumLights
==============
*/

void R_InitFrustumLights(void)
{
  ?R_InitFrustumLights@@YAXXZ();
}

/*
==============
RB_SetupFrustumLights
==============
*/

void __fastcall RB_SetupFrustumLights(GfxCmdBufContext *context, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RB_SetupFrustumLights@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(context, viewInfo, data);
}

/*
==============
R_FL_ShowDebugOverlay
==============
*/

void __fastcall R_FL_ShowDebugOverlay(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxWrappedBuffer *lightMasksTile, const GfxWrappedBuffer *lightMasksCluster, const GfxWrappedBuffer *volumetricMasksCluster, const GfxWrappedBuffer *probeMasksCluster, const unsigned int mode, const unsigned int beginSlice, const unsigned int endSlice, const float blend)
{
  ?R_FL_ShowDebugOverlay@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@PEBUGfxWrappedBuffer@@222IIIM@Z(gfxContext, viewInfo, lightMasksTile, lightMasksCluster, volumetricMasksCluster, probeMasksCluster, mode, beginSlice, endSlice, blend);
}

/*
==============
R_FrustumLights_LazyAllocRts
==============
*/

void R_FrustumLights_LazyAllocRts(void)
{
  ?R_FrustumLights_LazyAllocRts@@YAXXZ();
}

/*
==============
R_SetFrustumLightsComputeResources
==============
*/

void __fastcall R_SetFrustumLightsComputeResources(ComputeCmdBufState *state, unsigned int maskSlot, const int useCluster)
{
  ?R_SetFrustumLightsComputeResources@@YAXPEAUComputeCmdBufState@@IH@Z(state, maskSlot, useCluster);
}

/*
==============
R_ClearFrustumLightsTileBuffer
==============
*/

void __fastcall R_ClearFrustumLightsTileBuffer(ComputeCmdBufState *computeState, unsigned int scale, unsigned int width, unsigned int height, R_RT_BufferHandle *maskBuffer)
{
  ?R_ClearFrustumLightsTileBuffer@@YAXPEAUComputeCmdBufState@@IIIVR_RT_BufferHandle@@@Z(computeState, scale, width, height, maskBuffer);
}

/*
==============
R_AddFrustumLights
==============
*/

void __fastcall R_AddFrustumLights(const void *const cmdInfo)
{
  ?R_AddFrustumLights@@YAXQEBX@Z(cmdInfo);
}

/*
==============
R_SetupFrustumLightsUpdateBuffers
==============
*/

void __fastcall R_SetupFrustumLightsUpdateBuffers(const GfxBackEndData *data)
{
  ?R_SetupFrustumLightsUpdateBuffers@@YAXPEBUGfxBackEndData@@@Z(data);
}

/*
==============
RB_FL_RenderDebugProxies
==============
*/

void __fastcall RB_FL_RenderDebugProxies(GfxCmdBufContext *context, const GfxViewInfo *viewInfo)
{
  ?RB_FL_RenderDebugProxies@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@@Z(context, viewInfo);
}

/*
==============
R_GenerateSpotLightModel
==============
*/

void __fastcall R_GenerateSpotLightModel(const vec3_t *lightOrigin, const vec3_t *lightDir, float coneCosHalfFov, float radius, const vec3_t *bulbLengthVec, const float bulbRadius, GfxLightModel *lightModel)
{
  ?R_GenerateSpotLightModel@@YAXAEBTvec3_t@@0MM0MPEAUGfxLightModel@@@Z(lightOrigin, lightDir, coneCosHalfFov, radius, bulbLengthVec, bulbRadius, lightModel);
}

/*
==============
R_FL_RenderDebugProxies_Enabled
==============
*/

bool __fastcall R_FL_RenderDebugProxies_Enabled(const GfxViewInfo *viewInfo)
{
  return ?R_FL_RenderDebugProxies_Enabled@@YA_NPEBUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
R_GetFrustumLightWords
==============
*/

unsigned int __fastcall R_GetFrustumLightWords(const unsigned int frame)
{
  return ?R_GetFrustumLightWords@@YAII@Z(frame);
}

/*
==============
RB_FL_ShowDebugOverlay
==============
*/

void __fastcall RB_FL_ShowDebugOverlay(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const unsigned int mode, const unsigned int beginSlice, const unsigned int endSlice, const float blend)
{
  ?RB_FL_ShowDebugOverlay@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@IIIM@Z(gfxContext, viewInfo, mode, beginSlice, endSlice, blend);
}

/*
==============
RB_RenderFrustumLightsTile
==============
*/

void __fastcall RB_RenderFrustumLightsTile(GfxCmdBufContext *context, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RB_RenderFrustumLightsTile@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(context, viewInfo, data);
}

/*
==============
FrustumGrid_ClusterZFromScreenPos
==============
*/
__int64 FrustumGrid_ClusterZFromScreenPos(float screenZ, const vec4_t *volumetricDepth)
{
  float v3; 
  float v4; 
  float v5; 
  double v6; 
  float v7; 
  double v8; 
  float v9; 
  double v10; 
  float v11; 
  double v12; 
  __int64 result; 
  int v14; 

  v3 = (float)(screenZ - 4.0) - volumetricDepth->v[0];
  v4 = volumetricDepth->v[2];
  v5 = v3 - volumetricDepth->v[1];
  v6 = I_fclamp((float)(screenZ - 4.0) / volumetricDepth->v[0], 0.0, 1.0);
  v7 = *(float *)&v6;
  v8 = I_fclamp(v3 / volumetricDepth->v[1], 0.0, 1.0);
  v9 = *(float *)&v8;
  v10 = I_fclamp(v5 / volumetricDepth->v[2], 0.0, 1.0);
  v11 = *(float *)&v10;
  v12 = I_fclamp((float)(v5 - v4) / volumetricDepth->v[3], 0.0, 1.0);
  result = 31i64;
  v14 = (int)(float)((float)((float)(*(float *)&v12 + (float)((float)(v9 + v7) + v11)) * 0.25) * 32.0);
  if ( v14 < 31 )
    return (unsigned int)v14;
  return result;
}

/*
==============
RB_FL_RenderDebugProxies
==============
*/
void RB_FL_RenderDebugProxies(GfxCmdBufContext *context, const GfxViewInfo *viewInfo)
{
  GfxCmdBufSourceState *source; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  R_RT_Handle v8; 
  GfxCmdBufContext v9; 
  R_RT_Handle m_mainSceneColorRt; 
  R_RT_Handle v12; 
  __m256i m_mainSceneDepthRt; 
  R_RT_Handle v14; 
  R_RT_Group v15; 
  R_RT_Group v16; 

  if ( r_showFrustumLightsProxies->current.integer )
  {
    source = context->source;
    R_InitCmdBufSourceState(context->source, &viewInfo->input);
    R_InitLocalCmdBufState(context->state, &source->input);
    m_mainSceneColorRt = (R_RT_Handle)viewInfo->sceneRtInput.m_mainSceneColorRt;
    height = R_RT_Handle::GetSurface(&m_mainSceneColorRt)->m_image.m_base.height;
    Surface = R_RT_Handle::GetSurface(&m_mainSceneColorRt);
    R_SetRenderTargetSize(source, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FOR_VIEW);
    R_BeginViewInternal(source, &viewInfo->sceneDef, (const GfxViewParms *)viewInfo, &viewInfo->viewParmsSet.frames[1].viewParms);
    R_SetViewportStruct(source, &viewInfo->sceneViewport);
    v8 = (R_RT_Handle)viewInfo->sceneRtInput.m_mainSceneColorRt;
    v9 = *context;
    m_mainSceneDepthRt = (__m256i)viewInfo->sceneRtInput.m_mainSceneDepthRt;
    m_mainSceneColorRt = (R_RT_Handle)m_mainSceneDepthRt;
    v12 = v8;
    v14 = v8;
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface(&m_mainSceneColorRt);
      m_mainSceneDepthRt = (__m256i)m_mainSceneColorRt;
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 463, ASSERT_TYPE_ASSERT, "(depthRt)", (const char *)&queryFormat, "depthRt") )
        __debugbreak();
    }
    v15.m_colorRtCount = 1;
    m_mainSceneColorRt = v12;
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface(&m_mainSceneColorRt);
    }
    else
    {
      if ( v14.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", *(_QWORD *)&m_mainSceneColorRt.m_surfaceID, *(_QWORD *)&m_mainSceneColorRt.m_tracking.m_allocCounter, m_mainSceneColorRt.m_tracking.m_name, m_mainSceneColorRt.m_tracking.m_location) )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 442, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
        __debugbreak();
    }
    v15.m_colorRts[0] = (R_RT_ColorHandle)v12;
    v15.m_depthRt = (R_RT_DepthHandle)m_mainSceneDepthRt;
    v16 = v15;
    *(GfxCmdBufContext *)&m_mainSceneColorRt.m_surfaceID = v9;
    R_SetRenderTargetsInternal((GfxCmdBufContext *)&m_mainSceneColorRt, &v16, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp(1520)");
    source->viewStatsTarget = GFX_VIEW_STATS_EMISSIVE;
    *(GfxCmdBufContext *)&m_mainSceneColorRt.m_surfaceID = v9;
    R_FL_RenderDebugProxies((GfxCmdBufContext *)&m_mainSceneColorRt, viewInfo);
    R_ShutdownLocalCmdBufState(context->state, &source->input);
  }
}

/*
==============
RB_FL_ShowDebugOverlay
==============
*/
void RB_FL_ShowDebugOverlay(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const unsigned int mode, const unsigned int beginSlice, const unsigned int endSlice, const float blend)
{
  const GfxWrappedRWBuffer *ClusterMaskView; 
  const GfxWrappedRWBuffer *ClusterBuffer; 
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v13; 
  GfxCmdBufContext v14; 

  ClusterMaskView = R_VOL_GetClusterMaskView();
  ClusterBuffer = R_ReflectionProbe_GetClusterBuffer();
  Surface = R_RT_Handle::GetSurface(&s_frustumLights.maskClusterBuffer);
  if ( (Surface->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v13 = R_RT_Handle::GetSurface(&s_frustumLights.maskBuffer);
  if ( (v13->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v14 = *gfxContext;
  R_FL_ShowDebugOverlay(&v14, viewInfo, (const GfxWrappedBuffer *)&v13->1080, (const GfxWrappedBuffer *)&Surface->1080, ClusterMaskView, ClusterBuffer, mode, beginSlice, endSlice, blend);
}

/*
==============
RB_RenderFrustumLightsCluster
==============
*/
void RB_RenderFrustumLightsCluster(GfxCmdBufContext *context, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  GfxCmdBufSourceState *source; 
  GfxCmdBufState *state; 
  GfxCmdBufInput *p_input; 
  ComputeCmdBufState *GfxComputeCmdBufState; 
  R_RT_Handle v11; 
  ComputeCmdBufState *v12; 
  const R_RT_Surface *Surface; 
  const GfxDevice *device; 
  __int64 v15; 
  GfxCmdBufContext v17; 
  GfxCmdBufContext v18; 
  R_RT_Handle v19; 
  __m256i v20; 
  __m256i v21; 
  __m256i v22; 
  __m256i v23; 
  _BYTE v24[72]; 
  R_RT_Group v25; 
  R_RT_Handle maskClusterBuffer; 

  source = context->source;
  state = context->state;
  R_InitCmdBufSourceState(context->source, &viewInfo->input);
  p_input = &source->input;
  R_InitLocalCmdBufState(state, &source->input);
  R_ProfBeginNamedEvent(state, "Frustum Lights Cluster");
  R_GPU_BeginTimer(GPU_TIMER_FRUSTUM_LIGHTS_CLUSTER);
  maskClusterBuffer = (R_RT_Handle)s_frustumLights.maskClusterBuffer;
  R_HW_AddResourceTransition(state, &maskClusterBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  R_ProfBeginNamedEvent(state, "Clear Frustum Lights Cluster Masks");
  maskClusterBuffer = (R_RT_Handle)s_frustumLights.maskClusterBuffer;
  GfxComputeCmdBufState = R_GetGfxComputeCmdBufState(state);
  v11 = maskClusterBuffer;
  v12 = GfxComputeCmdBufState;
  *(_QWORD *)&maskClusterBuffer.m_surfaceID = 0i64;
  *(_QWORD *)&maskClusterBuffer.m_tracking.m_allocCounter = 0i64;
  v19 = v11;
  Surface = R_RT_Handle::GetSurface(&v19);
  if ( (Surface->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  device = v12->device;
  if ( !R_IsLockedIfGfxImmediateContext(device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  v15 = g_descriptorPools.shaderViewPool.handle.parent->descriptorSize * (g_descriptorPools.shaderViewPool.handle.startSlot + Surface->m_buffer.m_wrappedBuffer.rwView.rwView);
  ((void (__fastcall *)(const GfxDevice *, unsigned __int64, unsigned __int64, ID3D12Resource *, R_RT_Handle *, _DWORD, _QWORD))device->m_pFunction[17].Release)(device, v15 + g_descriptorPools.shaderViewPool.handle.parent->heapStartGPUHandle.ptr, g_descriptorPools.shaderViewPool.handle.parent->heapStartCPUHandle.ptr + v15, Surface->m_buffer.m_wrappedBuffer.rwView.rwResource, &maskClusterBuffer, 0, 0i64);
  R_ComputeWaitForCompute(state, PIPE_FLUSH_PARTIAL);
  R_ProfEndNamedEvent(state);
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v24[24] = _XMM0;
  *(_OWORD *)&v24[56] = _XMM0;
  v20.m256i_i8[0] = 0;
  *(_WORD *)&v24[8] = 0;
  *(_DWORD *)&v24[16] = 0;
  *(_WORD *)&v24[40] = 0;
  *(_DWORD *)&v24[48] = 0;
  *(__m256i *)&v25.m_colorRtCount = v20;
  *(__m256i *)&v25.m_colorRts[0].m_tracking.m_location = v21;
  *(__m256i *)&v25.m_colorRts[1].m_tracking.m_location = v22;
  *(__m256i *)&v25.m_colorRts[2].m_tracking.m_location = v23;
  v17 = *context;
  *(__m256i *)&v25.m_colorRts[3].m_tracking.m_location = *(__m256i *)v24;
  *(__m256i *)&v25.m_depthRt.m_tracking.m_location = *(__m256i *)&v24[32];
  v25.m_vrsRt.m_tracking.m_location = *(const char **)&v24[64];
  *(GfxCmdBufContext *)&maskClusterBuffer.m_surfaceID = v17;
  R_SetRenderTargetsInternal((GfxCmdBufContext *)&maskClusterBuffer, &v25, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp(1443)");
  v18 = *context;
  v19 = (R_RT_Handle)s_frustumLights.maskClusterBuffer;
  *(GfxCmdBufContext *)&maskClusterBuffer.m_surfaceID = v18;
  R_RenderFrustumLightsClusterBuffer((GfxCmdBufContext *)&maskClusterBuffer, viewInfo, data, (R_RT_BufferHandle *)&v19);
  v19 = (R_RT_Handle)s_frustumLights.maskClusterBuffer;
  R_HW_AddResourceTransition(state, &v19, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  R_GPU_EndTimer();
  R_ProfEndNamedEvent(state);
  R_ShutdownLocalCmdBufState(state, p_input);
}

/*
==============
RB_RenderFrustumLightsTile
==============
*/
void RB_RenderFrustumLightsTile(GfxCmdBufContext *context, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  GfxCmdBufState *state; 
  GfxCmdBufSourceState *source; 
  const GfxViewInfo *v7; 
  ComputeCmdBufState *GfxComputeCmdBufState; 
  R_RT_Flags m_rtFlags; 
  GfxCmdBufInput *p_input; 
  const R_RT_Surface *Surface; 
  bool v13; 
  const GfxShaderBufferRWView *RWView; 
  const GfxDevice *device; 
  const GfxShaderBufferRWView *v16; 
  __int64 v17; 
  GfxCmdBufContext v18; 
  GfxCmdBufSourceState *v20; 
  R_RT_BufferHandle v23; 
  R_RT_Handle v24; 
  R_RT_Handle m_mainSceneDepthRt; 
  R_RT_BufferHandle v26; 
  __m256i v27; 
  __m256i v28; 
  __m256i v29; 
  __m256i v30; 
  _BYTE v31[64]; 
  const char *v32; 
  GfxViewport viewport; 
  R_RT_Group v34; 
  R_RT_Handle maskBuffer; 

  state = context->state;
  source = context->source;
  v7 = viewInfo;
  GfxComputeCmdBufState = R_GetGfxComputeCmdBufState(state);
  m_mainSceneDepthRt = (R_RT_Handle)v7->sceneRtInput.m_mainSceneDepthRt;
  maskBuffer = m_mainSceneDepthRt;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v23.m_tracking.m_name = _XMM0;
  m_rtFlags = R_RT_Handle::GetSurface(&maskBuffer)->m_rtFlags;
  v23.m_surfaceID = 0;
  v23.m_tracking.m_allocCounter = 0;
  R_InitCmdBufSourceState(source, &v7->input);
  p_input = &source->input;
  R_InitLocalCmdBufState(state, &source->input);
  R_ProfBeginNamedEvent(state, "Frustum Lights Tile");
  R_GPU_BeginTimer(GPU_TIMER_FRUSTUM_LIGHTS_TILE);
  LODWORD(v7) = R_RT_Handle::GetSurface(&maskBuffer)->m_image.m_base.width;
  Surface = R_RT_Handle::GetSurface(&maskBuffer);
  R_SetRenderTargetSize(source, (unsigned int)v7, Surface->m_image.m_base.height, GFX_USE_VIEWPORT_FOR_VIEW);
  v13 = (m_rtFlags & 0x4000) != 0;
  if ( v13 )
  {
    maskBuffer = m_mainSceneDepthRt;
    R_AddDepthStencilTransition(state, (R_RT_DepthHandle *)&maskBuffer, DEPTHSTENCIL_TRANSITION_MODE_WRITE_PRESERVE_COMPRESSION, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  }
  maskBuffer = (R_RT_Handle)s_frustumLights.maskBuffer;
  R_HW_AddResourceTransition(state, &maskBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  R_ProfBeginNamedEvent(GfxComputeCmdBufState, "Clear Frustum Lights Tile Masks");
  v26 = s_frustumLights.maskBuffer;
  *(_QWORD *)&maskBuffer.m_surfaceID = 0i64;
  *(_QWORD *)&maskBuffer.m_tracking.m_allocCounter = 0i64;
  RWView = R_RT_BufferHandle::GetRWView(&v26);
  device = GfxComputeCmdBufState->device;
  v16 = RWView;
  if ( !R_IsLockedIfGfxImmediateContext(device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  v17 = g_descriptorPools.shaderViewPool.handle.parent->descriptorSize * (g_descriptorPools.shaderViewPool.handle.startSlot + v16->rwView);
  ((void (__fastcall *)(const GfxDevice *, unsigned __int64, unsigned __int64, ID3D12Resource *, R_RT_Handle *, _DWORD, _QWORD))device->m_pFunction[17].Release)(device, v17 + g_descriptorPools.shaderViewPool.handle.parent->heapStartGPUHandle.ptr, g_descriptorPools.shaderViewPool.handle.parent->heapStartCPUHandle.ptr + v17, v16->rwResource, &maskBuffer, 0, 0i64);
  R_ComputeWaitForCompute(GfxComputeCmdBufState, PIPE_FLUSH_PARTIAL);
  R_ProfEndNamedEvent(GfxComputeCmdBufState);
  v18 = *context;
  maskBuffer = m_mainSceneDepthRt;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&maskBuffer);
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 458, ASSERT_TYPE_ASSERT, "(depthRt)", (const char *)&queryFormat, "depthRt") )
      __debugbreak();
  }
  *(R_RT_Handle *)&v31[8] = maskBuffer;
  v27.m256i_i8[0] = 0;
  *(__m256i *)&v34.m_colorRtCount = v27;
  *(__m256i *)&v34.m_colorRts[0].m_tracking.m_location = v28;
  *(__m256i *)&v34.m_colorRts[1].m_tracking.m_location = v29;
  *(__m256i *)&v34.m_colorRts[2].m_tracking.m_location = v30;
  *(__m256i *)&v34.m_colorRts[3].m_tracking.m_location = *(__m256i *)v31;
  *(__m256i *)&v34.m_depthRt.m_tracking.m_location = *(__m256i *)&v31[32];
  v34.m_vrsRt.m_tracking.m_location = v32;
  *(GfxCmdBufContext *)&maskBuffer.m_surfaceID = v18;
  R_SetRenderTargetsInternal((GfxCmdBufContext *)&maskBuffer, &v34, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp(1220)");
  v20 = context->source;
  *(_QWORD *)&viewport.x = 0i64;
  viewport.width = v20->renderTargetWidth;
  viewport.height = v20->renderTargetHeight;
  R_SetViewportStruct(v20, &viewport);
  R_SetViewportAndScissorSeparate(state, &viewport, &viewport);
  v26 = v23;
  v24 = m_mainSceneDepthRt;
  v23 = s_frustumLights.maskBuffer;
  *(GfxCmdBufContext *)&maskBuffer.m_surfaceID = v18;
  R_RenderFrustumLightsTileBuffer((GfxCmdBufContext *)&maskBuffer, viewInfo, data, (R_RT_DepthHandle *)&v24, &v23, (R_RT_ColorHandle *)&v26);
  if ( v13 )
  {
    v24 = m_mainSceneDepthRt;
    R_AddDepthStencilTransition(state, (R_RT_DepthHandle *)&v24, DEPTHSTENCIL_TRANSITION_MODE_READ_PRESERVE_COMPRESSION, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  }
  v24 = (R_RT_Handle)s_frustumLights.maskBuffer;
  R_HW_AddResourceTransition(state, &v24, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  R_GPU_EndTimer();
  R_ProfEndNamedEvent(state);
  R_ShutdownLocalCmdBufState(state, p_input);
}

/*
==============
RB_SetupFrustumLights
==============
*/
void RB_SetupFrustumLights(GfxCmdBufContext *context, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  GfxCmdBufSourceState *source; 
  GfxCmdBufState *state; 

  source = context->source;
  state = context->state;
  Sys_ProfBeginNamedEvent(0xFFFF7F50, "Setup Frustum Lights");
  R_InitCmdBufSourceState(source, &viewInfo->input);
  R_InitLocalCmdBufState(state, &source->input);
  R_SetupFrustumLightsUpdateBuffers(data);
  R_ShutdownLocalCmdBufState(state, &source->input);
  Sys_ProfEndNamedEvent();
}

/*
==============
R_AccumulateDepthBounds
==============
*/
void R_AccumulateDepthBounds(const GfxViewInfo *viewInfo, const vec3_t *vert, vec2_t *inOutDepthBounds)
{
  if ( (viewInfo->viewParmsSet.frames[0].viewParms.viewProjectionMatrix.m.m[0].v[2] != 0.0 || viewInfo->viewParmsSet.frames[0].viewParms.viewProjectionMatrix.m.m[1].v[2] != 0.0 || viewInfo->viewParmsSet.frames[0].viewParms.viewProjectionMatrix.m.m[2].v[2] != 0.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 453, ASSERT_TYPE_ASSERT, "(transform[0][2] == 0 && transform[1][2] == 0 && transform[2][2] == 0)", (const char *)&queryFormat, "transform[0][2] == 0 && transform[1][2] == 0 && transform[2][2] == 0") )
    __debugbreak();
  _XMM2 = LODWORD(inOutDepthBounds->v[0]);
  _XMM0 = LODWORD(inOutDepthBounds->v[1]);
  __asm { vminss  xmm1, xmm2, xmm3 }
  inOutDepthBounds->v[0] = *(float *)&_XMM1;
  __asm { vmaxss  xmm1, xmm0, xmm3 }
  inOutDepthBounds->v[1] = *(float *)&_XMM1;
}

/*
==============
R_AddFrustumLight
==============
*/
__int64 R_AddFrustumLight(const GfxBackEndData *data, const GfxViewInfo *viewInfo, unsigned int lightIndex, const vec3_t *cameraOrigin, unsigned int *lightsMapping, unsigned int *count)
{
  __int64 v8; 
  __int64 v10; 
  unsigned int movingScriptablePrimaryLightCount; 
  unsigned int v12; 
  unsigned __int8 type; 
  float v18; 
  float v19; 
  float v20; 
  __int64 v21; 
  float v22; 
  __int64 v23; 
  float v24; 
  float v25; 
  float v26; 
  unsigned int v27; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 

  v8 = lightIndex;
  if ( lightIndex >= 0x1984 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 486, ASSERT_TYPE_ASSERT, "(unsigned)( lightIndex ) < (unsigned)( (6500 + I_max( ( 4 + 1 ), I_max( 32, 32 ) )) )", "lightIndex doesn't index GFX_MAX_SCENE_LIGHTS\n\t%i not in [0, %i)", lightIndex, 6532) )
    __debugbreak();
  v10 = v8;
  movingScriptablePrimaryLightCount = rgp.world->movingScriptablePrimaryLightCount;
  v12 = rgp.world->primaryLightCount - movingScriptablePrimaryLightCount;
  if ( movingScriptablePrimaryLightCount && (unsigned int)v8 >= v12 && (unsigned int)v8 < rgp.world->primaryLightCount )
    return 0i64;
  if ( data->sceneLights[v10].radius < 1.01 )
    return 0i64;
  if ( (data->sceneLights[v10].flags & 0x10) != 0 )
    return 0i64;
  _XMM0 = LODWORD(data->sceneLights[v10].colorLinearSrgb.v[1]);
  __asm
  {
    vmaxss  xmm1, xmm0, dword ptr [rbx+rdi+53A014h]
    vmaxss  xmm2, xmm1, dword ptr [rbx+rdi+53A01Ch]
  }
  if ( (float)(*(float *)&_XMM2 * data->sceneLights[v10].intensity) == 0.0 && (!viewInfo->thermalParams.useNightAndThermalVisionCombo || data->sceneLights[v10].irIntensity <= 0.0) )
    return 0i64;
  type = data->sceneLights[v10].type;
  if ( type == 2 )
  {
    if ( 1.0 == data->sceneLights[v10].cosHalfFovOuter )
      return 0i64;
  }
  else if ( type != 3 )
  {
    return 0i64;
  }
  if ( (unsigned int)v8 < v12 && !R_IsPrimaryLightLoaded(data, v8) )
    return 0i64;
  v18 = cameraOrigin->v[0] - data->sceneLights[v10].origin.v[0];
  v19 = cameraOrigin->v[1] - data->sceneLights[v10].origin.v[1];
  v20 = cameraOrigin->v[2] - data->sceneLights[v10].origin.v[2];
  v21 = 0i64;
  v22 = (float)((float)(v19 * v19) + (float)(v18 * v18)) + (float)(v20 * v20);
  if ( !*count )
    goto LABEL_28;
  do
  {
    if ( (unsigned int)v21 >= 0x100 )
    {
      LODWORD(v30) = 256;
      LODWORD(v29) = v21;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 513, ASSERT_TYPE_ASSERT, "(unsigned)( existingIndex ) < (unsigned)( 256 )", "existingIndex doesn't index FRUSTUM_GRID_MAX_LIGHTS\n\t%i not in [0, %i)", v29, v30) )
        __debugbreak();
    }
    v23 = lightsMapping[v21];
    if ( (unsigned int)v23 >= 0x1984 )
    {
      LODWORD(v30) = 6532;
      LODWORD(v29) = lightsMapping[v21];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 516, ASSERT_TYPE_ASSERT, "(unsigned)( existingLightIndex ) < (unsigned)( (6500 + I_max( ( 4 + 1 ), I_max( 32, 32 ) )) )", "existingLightIndex doesn't index GFX_MAX_SCENE_LIGHTS\n\t%i not in [0, %i)", v29, v30) )
        __debugbreak();
    }
    v24 = cameraOrigin->v[0] - data->sceneLights[v23].origin.v[0];
    v25 = cameraOrigin->v[1] - data->sceneLights[v23].origin.v[1];
    v26 = cameraOrigin->v[2] - data->sceneLights[v23].origin.v[2];
    if ( v22 < (float)((float)((float)(v25 * v25) + (float)(v24 * v24)) + (float)(v26 * v26)) )
      break;
    v21 = (unsigned int)(v21 + 1);
  }
  while ( (unsigned int)v21 < *count );
  LODWORD(v8) = lightIndex;
  if ( (unsigned int)v21 < 0x100 )
  {
LABEL_28:
    if ( *count > (unsigned int)v21 )
    {
      v27 = 255 - v21;
      if ( 255 - (int)v21 > *count - (unsigned int)v21 )
        v27 = *count - v21;
      if ( v27 )
      {
        v28 = (unsigned int)(v21 + 1);
        if ( (unsigned int)v28 >= 0x100 )
        {
          LODWORD(v30) = 256;
          LODWORD(v29) = v21 + 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 533, ASSERT_TYPE_ASSERT, "(unsigned)( existingIndex + 1 ) < (unsigned)( 256 )", "existingIndex + 1 doesn't index FRUSTUM_GRID_MAX_LIGHTS\n\t%i not in [0, %i)", v29, v30) )
            __debugbreak();
        }
        memmove_0(&lightsMapping[v28], &lightsMapping[v21], 4i64 * v27);
      }
    }
    lightsMapping[v21] = v8;
    if ( *count < 0x100 )
      ++*count;
  }
  return 1i64;
}

/*
==============
R_AddFrustumLights
==============
*/
void R_AddFrustumLights(const void *const cmdInfo)
{
  __int128 v1; 
  __int128 v2; 
  __int128 v3; 
  const GfxViewInfo *v4; 
  const GfxBackEndData *v5; 
  __int64 frustumLightsIndex; 
  __int64 v7; 
  unsigned int v8; 
  float value; 
  unsigned int primaryLightVisDataCount; 
  unsigned int *primaryLightVisData; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 
  int v15; 
  const GfxBackEndData *v16; 
  unsigned int *v17; 
  unsigned int v18; 
  GfxFrustumLightsGlob *v19; 
  __int64 v20; 
  unsigned int v21; 
  __int64 v22; 
  __int64 v23; 
  unsigned int v24; 
  __int64 v25; 
  unsigned int v26; 
  __int64 v27; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  char *v36; 
  __int64 v37; 
  int v38; 
  __int64 v39; 
  __int64 v40; 
  unsigned __int16 *v41; 
  __int64 v42; 
  const vec3_t *p_origin; 
  bool v44; 
  unsigned int numVerts; 
  vec2_t *v46; 
  unsigned int v47; 
  unsigned int positionsStride; 
  char *positions; 
  __int64 v50; 
  GfxWorld *world; 
  float v52; 
  unsigned int *verticesOffsets; 
  const vec3_t *v54; 
  unsigned __int16 v55; 
  __int64 v56; 
  bool IsCameraInsideLightMeshVolume; 
  bool *v58; 
  int v59; 
  int v60; 
  bool *v61; 
  unsigned int primaryLightCount; 
  bool v63; 
  unsigned int v66; 
  unsigned int v68; 
  unsigned int v69; 
  __int64 v70; 
  unsigned int *v72; 
  unsigned int v73; 
  unsigned int v74; 
  unsigned int v75; 
  unsigned int *count; 
  unsigned int *counta; 
  GfxLightModelInterface *model; 
  GfxLightModelInterface *modela; 
  unsigned int lightIndex; 
  unsigned int v81; 
  __int64 v82; 
  __int64 v83; 
  __int64 v84; 
  unsigned int *lightsMapping; 
  GfxViewInfo *viewInfo; 
  __int64 v87; 
  unsigned __int64 v88; 
  vec3_t *cameraOrigin; 
  const GfxBackEndData *v90; 
  GfxLightModelInterface lightModel; 
  __int64 v92; 
  bool *v93; 
  bool *v94; 
  __int128 v95; 
  __int128 v96; 
  __int128 v97; 
  bool v98; 
  bool enabled; 
  unsigned int v100; 
  unsigned int v101; 

  v4 = *(const GfxViewInfo **)cmdInfo;
  v5 = (const GfxBackEndData *)*((_QWORD *)cmdInfo + 1);
  v95 = v3;
  frustumLightsIndex = v5->frustumLightsIndex;
  viewInfo = (GfxViewInfo *)v4;
  v90 = v5;
  if ( (unsigned int)frustumLightsIndex >= 2 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 604, ASSERT_TYPE_ASSERT, "(unsigned)( frame ) < (unsigned)( ( sizeof( *array_counter( s_frustumLights.writeLightData ) ) + 0 ) )", "frame doesn't index ARRAY_COUNT( s_frustumLights.writeLightData )\n\t%i not in [0, %i)", frustumLightsIndex, 2) )
      __debugbreak();
    LODWORD(modela) = 2;
    LODWORD(counta) = frustumLightsIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 605, ASSERT_TYPE_ASSERT, "(unsigned)( frame ) < (unsigned)( ( sizeof( *array_counter( s_frustumLights.writeZBinData ) ) + 0 ) )", "frame doesn't index ARRAY_COUNT( s_frustumLights.writeZBinData )\n\t%i not in [0, %i)", counta, modela) )
      __debugbreak();
  }
  v83 = frustumLightsIndex;
  v7 = frustumLightsIndex;
  LODWORD(frustumLightsIndex) = 0;
  v8 = 0;
  v100 = 0;
  lightsMapping = s_frustumLights.lightToSceneLight[v7];
  v101 = 0;
  cameraOrigin = &v4->viewParmsSet.frames[0].viewParms.camera.origin;
  value = r_frustumLightProxyMargin->current.value;
  enabled = r_frustumLightProxyUseMeshCheck->current.enabled;
  v98 = r_frustumLightUseZBinning->current.enabled;
  Profile_Begin(245);
  primaryLightVisDataCount = rgp.world->dpvs.primaryLightVisDataCount;
  primaryLightVisData = rgp.world->dpvs.primaryLightVisData;
  if ( primaryLightVisDataCount )
    v12 = *primaryLightVisData;
  else
    v12 = 0;
  while ( 1 )
  {
    v13 = v12;
    if ( !v12 )
      break;
LABEL_12:
    v14 = __lzcnt(v13);
    if ( v14 >= 0x20 )
    {
      LODWORD(model) = 32;
      LODWORD(count) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", count, model) )
        __debugbreak();
    }
    if ( ((0x80000000 >> v14) & v13) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_visdata_inline.h", 53, ASSERT_TYPE_ASSERT, "(visdata & bit)", (const char *)&queryFormat, "visdata & bit") )
      __debugbreak();
    v4 = viewInfo;
    v12 = v13 & ~(0x80000000 >> v14);
    v15 = R_AddFrustumLight(v5, viewInfo, v14 + 32 * frustumLightsIndex, cameraOrigin, lightsMapping, &v100);
    v8 = v15 + v101;
    v101 += v15;
  }
  while ( 1 )
  {
    frustumLightsIndex = (unsigned int)(frustumLightsIndex + 1);
    if ( (unsigned int)frustumLightsIndex >= primaryLightVisDataCount )
      break;
    v13 = primaryLightVisData[frustumLightsIndex];
    if ( v13 )
      goto LABEL_12;
  }
  v16 = v5;
  if ( v5->dynamicLightCount + rgp.world->primaryLightCount != v5->sceneLightCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 635, ASSERT_TYPE_ASSERT, "(rgp.world->primaryLightCount + data->dynamicLightCount == data->sceneLightCount)", (const char *)&queryFormat, "rgp.world->primaryLightCount + data->dynamicLightCount == data->sceneLightCount") )
    __debugbreak();
  v17 = lightsMapping;
  v18 = 0;
  if ( v5->dynamicLightCount )
  {
    do
    {
      v8 += R_AddFrustumLight(v5, v4, v18 + rgp.world->primaryLightCount, &v4->viewParmsSet.frames[0].viewParms.camera.origin, lightsMapping, &v100);
      ++v18;
    }
    while ( v18 < v5->dynamicLightCount );
    v101 = v8;
  }
  Profile_EndInternal(NULL);
  Profile_Begin(246);
  v19 = &s_frustumLights;
  v20 = v83;
  v21 = 255;
  v22 = 4096i64;
  if ( v98 )
    v21 = -65536;
  v23 = 0i64;
  do
  {
    v23 += 2i64;
    s_frustumLights.writeZBinData[v83][v23 - 2] = v21;
    s_frustumLights.writeZBinData[v83][v23 - 1] = v21;
    --v22;
  }
  while ( v22 );
  v24 = v100;
  v25 = 4 * v83;
  *(unsigned int *)((char *)s_frustumLights.staticInsideLights + v25) = 0;
  *(unsigned int *)((char *)s_frustumLights.dynamicInsideLights + v25) = 0;
  v26 = 0;
  *(unsigned int *)((char *)s_frustumLights.staticOutsideLights + v25) = 0;
  v27 = v83 << 7;
  *(unsigned int *)((char *)s_frustumLights.dynamicOutsideLights + v25) = 0;
  *(unsigned int *)((char *)s_frustumLights.staticWalkFrontLights + v25) = 0;
  *(unsigned int *)((char *)s_frustumLights.dynamicWalkFrontLights + v25) = 0;
  *(_QWORD *)((char *)&s_frustumLights.staticLightModels[0].totalIndicesCount + v27) = 0i64;
  *(_QWORD *)((char *)&s_frustumLights.dynamicLightModels[0].totalIndicesCount + v27) = 0i64;
  v87 = 4 * v83;
  v82 = v83 << 7;
  v81 = 0;
  if ( v24 )
  {
    v28 = 8 * v83;
    v97 = v1;
    v96 = v2;
    v88 = 8 * v83;
    v84 = v83 << 8;
    v93 = s_frustumLights.insideLight[v20];
    v94 = s_frustumLights.singleSlice[v20];
    while ( 1 )
    {
      v29 = v26;
      v30 = v17[v26];
      lightIndex = v30;
      if ( (unsigned int)v30 >= v16->sceneLightCount )
      {
        LODWORD(model) = v16->sceneLightCount;
        LODWORD(count) = v30;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 674, ASSERT_TYPE_ASSERT, "(unsigned)( lightIndex ) < (unsigned)( data->sceneLightCount )", "lightIndex doesn't index data->sceneLightCount\n\t%i not in [0, %i)", count, model) )
          __debugbreak();
        v27 = v82;
      }
      v31 = *(__int64 *)((char *)s_frustumLights.writeLightData + v28);
      v32 = 96i64 * v26;
      v33 = v30;
      v34 = v30;
      *(__m256i *)(v32 + v31) = *(__m256i *)v16->packedSceneLights[v30].diffuse.v;
      *(__m256i *)(v32 + v31 + 32) = *(__m256i *)v16->packedSceneLights[v30].bulbDir.v;
      *(__m256i *)(v32 + v31 + 64) = *(__m256i *)v16->packedSceneLights[v30].spotFactors.v;
      if ( (unsigned int)v30 >= rgp.world->primaryLightCount )
      {
        if ( !*(unsigned __int16 **)((char *)&s_frustumLights.dynamicLightModels[0].indices + v27) )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 590, ASSERT_TYPE_ASSERT, "(s_frustumLights.dynamicLightModels[frame].indices != nullptr)", (const char *)&queryFormat, "s_frustumLights.dynamicLightModels[frame].indices != nullptr") )
            __debugbreak();
          v27 = v82;
        }
        v38 = v30;
        v36 = (char *)s_frustumLights.dynamicLightModels + v27;
        v37 = v38 - rgp.world->primaryLightCount;
      }
      else
      {
        v35 = *(__int64 *)((char *)&s_frustumLights.staticLightModels[0].indices + v27);
        v36 = (char *)s_frustumLights.staticLightModels + v27;
        v37 = 0xFFFFFFFFi64;
        if ( v35 )
          v37 = v26;
        if ( !v35 )
          v36 = NULL;
      }
      if ( v36 )
        break;
      world = rgp.world;
      v52 = FLOAT_3_4028235e38;
      v50 = 8 * (v26 + v84);
      verticesOffsets = rgp.world->frustumLights.verticesOffsets;
      v46 = (vec2_t *)((char *)s_frustumLights.depthBounds[0] + v50);
      *v46 = (vec2_t)2139095039i64;
      v54 = (const vec3_t *)&world->frustumLights.vertices[16 * verticesOffsets[v33]];
      v55 = world->frustumLights.verticesCounts[v33];
      if ( v55 )
      {
        v56 = v55;
        do
        {
          R_AccumulateDepthBounds(viewInfo, v54, v46);
          v54 = (const vec3_t *)((char *)v54 + 16);
          --v56;
        }
        while ( v56 );
        v25 = v87;
LABEL_59:
        v52 = v46->v[0];
      }
      if ( v52 <= value )
      {
        if ( !enabled || lightIndex >= rgp.world->primaryLightCount || (IsCameraInsideLightMeshVolume = R_IsCameraInsideLightMeshVolume(lightIndex, cameraOrigin, value)) )
          IsCameraInsideLightMeshVolume = 1;
      }
      else
      {
        IsCameraInsideLightMeshVolume = 0;
      }
      v58 = v93;
      v93[v29] = IsCameraInsideLightMeshVolume;
      v59 = FrustumGrid_ClusterZFromScreenPos(v46->v[0], &rg.volumetricDepth);
      v60 = FrustumGrid_ClusterZFromScreenPos(v46->v[1], &rg.volumetricDepth);
      v61 = v94;
      v94[v29] = v59 == v60;
      primaryLightCount = rgp.world->primaryLightCount;
      v63 = v58[v29];
      if ( lightIndex >= primaryLightCount )
      {
        if ( !v63 || (++*(unsigned int *)((char *)s_frustumLights.dynamicInsideLights + v25), !v58[v29]) )
          ++*(unsigned int *)((char *)s_frustumLights.dynamicOutsideLights + v25);
      }
      else if ( !v63 || (++*(unsigned int *)((char *)s_frustumLights.staticInsideLights + v25), !v58[v29]) )
      {
        ++*(unsigned int *)((char *)s_frustumLights.staticOutsideLights + v25);
      }
      if ( !v58[v29] && !v61[v29] )
      {
        if ( lightIndex >= primaryLightCount || (++*(unsigned int *)((char *)s_frustumLights.staticWalkFrontLights + v25), lightIndex >= primaryLightCount) )
          ++*(unsigned int *)((char *)s_frustumLights.dynamicWalkFrontLights + v25);
      }
      v19 = &s_frustumLights;
      if ( v98 )
      {
        _XMM0 = LODWORD(v46->v[0]);
        __asm { vmaxss  xmm0, xmm0, xmm6 }
        v66 = (int)*(float *)&_XMM0;
        _XMM0 = *(unsigned int *)((char *)&s_frustumLights.depthBounds[0][0].v[1] + v50);
        v28 = v88;
        v68 = 0x1FFF;
        v69 = v66 >> 5;
        v70 = 0x1FFFi64;
        __asm { vmaxss  xmm0, xmm0, xmm6 }
        if ( (unsigned int)(int)*(float *)&_XMM0 >> 5 < 0x1FFF )
          v68 = (unsigned int)(int)*(float *)&_XMM0 >> 5;
        if ( v69 < 0x1FFF )
          v70 = v69;
        if ( (unsigned int)v70 <= v68 )
        {
          do
          {
            v72 = s_frustumLights.writeZBinData[v88 / 8];
            v73 = v26;
            v74 = v26;
            if ( v26 > HIWORD(v72[v70]) )
              v73 = HIWORD(v72[v70]);
            v75 = v73 << 16;
            if ( (unsigned __int16)v72[v70] > v26 )
              v74 = (unsigned __int16)v72[v70];
            v72[v70] = v74 | v75;
            v70 = (unsigned int)(v70 + 1);
          }
          while ( (unsigned int)v70 <= v68 );
          v25 = v87;
          v19 = &s_frustumLights;
        }
      }
      else
      {
        v28 = v88;
      }
      v24 = v100;
      v16 = v90;
      v27 = v82;
      ++v26;
      v17 = lightsMapping;
      v81 = v26;
      if ( v26 >= v100 )
        goto LABEL_92;
    }
    v39 = *((_QWORD *)v36 + 6);
    v40 = *((unsigned int *)v36 + 1);
    lightModel.positionsStride = 16;
    lightModel.normalsStride = 16;
    v41 = (unsigned __int16 *)(v39 + 2 * v40);
    v42 = *((_QWORD *)v36 + 7);
    lightModel.indices = v41;
    p_origin = &v16->sceneLights[v34].origin;
    lightModel.positions = (void *)(16i64 * *((unsigned int *)v36 + 2) + v42);
    v44 = v16->sceneLights[v34].type == 2;
    lightModel.normals = (char *)lightModel.positions + 12;
    if ( v44 )
      R_GenerateSpotLightModelMain(p_origin, &v16->sceneLights[v34].dir, v16->sceneLights[v34].cosHalfFovOuter, v16->sceneLights[v34].radius, &v16->sceneLights[v34].bulbLength, v16->sceneLights[v34].bulbRadius, &lightModel);
    else
      R_GenerateOmniLightModelMain(p_origin, v16->sceneLights[v34].radius, &v16->sceneLights[v34].bulbLength, &lightModel);
    R_GenerateLightModelNormals(&lightModel);
    numVerts = lightModel.numVerts;
    v46 = &s_frustumLights.depthBounds[0][v26 + v84];
    v92 = 8 * (v26 + v84);
    *v46 = (vec2_t)2139095039i64;
    v47 = 0;
    if ( numVerts )
    {
      positionsStride = lightModel.positionsStride;
      positions = (char *)lightModel.positions;
      do
        R_AccumulateDepthBounds(viewInfo, (const vec3_t *)&positions[positionsStride * v47++], v46);
      while ( v47 < numVerts );
      v26 = v81;
      v25 = v87;
    }
    *(_WORD *)(*((_QWORD *)v36 + 4) + 2 * v37) = lightModel.numIndices;
    *(_WORD *)(*((_QWORD *)v36 + 5) + 2 * v37) = lightModel.numVerts;
    *(_DWORD *)(*((_QWORD *)v36 + 2) + 4 * v37) = *((_DWORD *)v36 + 1);
    *(_DWORD *)(*((_QWORD *)v36 + 3) + 4 * v37) = *((_DWORD *)v36 + 2);
    *((_DWORD *)v36 + 1) += lightModel.numIndices;
    *((_DWORD *)v36 + 2) += numVerts;
    v50 = v92;
    v29 = v26;
    goto LABEL_59;
  }
LABEL_92:
  if ( v24 > 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 777, ASSERT_TYPE_ASSERT, "(count <= 256)", (const char *)&queryFormat, "count <= FRUSTUM_GRID_MAX_LIGHTS") )
    __debugbreak();
  *(unsigned int *)((char *)s_frustumLights.lightCount + v25) = v24;
  if ( v24 >= 0x100 )
    R_WarnOncePerFrame(R_WARN_FRUSTUM_GRID_MAX_LIGHTS, v101, v27, v19);
  Profile_EndInternal(NULL);
}

/*
==============
R_AddQuadToLightModel
==============
*/
void R_AddQuadToLightModel(const unsigned int *v, GfxLightModelInterface *model, bool flip)
{
  __int64 numIndices; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  unsigned int v11; 
  __int64 v12; 

  numIndices = model->numIndices;
  v7 = (unsigned int)(numIndices + 5);
  if ( (unsigned int)v7 >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1688, ASSERT_TYPE_ASSERT, "(firstIndex + 5 < MAX_LIGHT_MODEL_INDICES)", (const char *)&queryFormat, "firstIndex + 5 < MAX_LIGHT_MODEL_INDICES") )
    __debugbreak();
  v8 = v7;
  v9 = (unsigned int)(numIndices + 1);
  v10 = (unsigned int)(numIndices + 2);
  v12 = (unsigned int)(numIndices + 4);
  model->indices[numIndices] = truncate_cast<unsigned short,unsigned int>(*v);
  if ( flip )
  {
    model->indices[v9] = truncate_cast<unsigned short,unsigned int>(v[2]);
    model->indices[v10] = truncate_cast<unsigned short,unsigned int>(v[1]);
    model->indices[(unsigned int)(numIndices + 3)] = truncate_cast<unsigned short,unsigned int>(*v);
    model->indices[v12] = truncate_cast<unsigned short,unsigned int>(v[3]);
    v11 = v[2];
  }
  else
  {
    model->indices[v9] = truncate_cast<unsigned short,unsigned int>(v[1]);
    model->indices[v10] = truncate_cast<unsigned short,unsigned int>(v[2]);
    model->indices[(unsigned int)(numIndices + 3)] = truncate_cast<unsigned short,unsigned int>(*v);
    model->indices[v12] = truncate_cast<unsigned short,unsigned int>(v[2]);
    v11 = v[3];
  }
  model->indices[v8] = truncate_cast<unsigned short,unsigned int>(v11);
  model->numIndices += 6;
}

/*
==============
R_AdjustSpotLightModelVertForLineLight
==============
*/

void __fastcall R_AdjustSpotLightModelVertForLineLight(float4 *vertInOut, double coneRadius, const float4 *lineCenter, const float4 *lineHalfDir)
{
  __m128 v6; 
  __m128 v16; 
  __m128 v17; 

  _XMM2 = _mm128_mul_ps(lineHalfDir->v, lineHalfDir->v);
  __asm { vinsertps xmm3, xmm2, xmm2, 8 }
  v6 = *(__m128 *)&coneRadius;
  __asm
  {
    vhaddps xmm0, xmm3, xmm3
    vhaddps xmm4, xmm0, xmm0
  }
  _XMM1 = _mm128_mul_ps(_mm128_sub_ps(vertInOut->v, lineCenter->v), lineHalfDir->v);
  __asm
  {
    vinsertps xmm2, xmm1, xmm1, 8
    vhaddps xmm0, xmm2, xmm2
    vhaddps xmm1, xmm0, xmm0
  }
  _XMM0.m128_u64[1] = *((_QWORD *)&_XMM1 + 1);
  *(double *)_XMM0.m128_u64 = I_fclamp(*(float *)&_XMM1 / *(float *)&_XMM4, -1.0, 1.0);
  v16 = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM0, _XMM0, 0), lineHalfDir->v), lineCenter->v);
  v17 = _mm128_sub_ps(vertInOut->v, v16);
  _XMM1 = _mm128_mul_ps(v17, v17);
  __asm
  {
    vinsertps xmm0, xmm1, xmm1, 8
    vhaddps xmm2, xmm0, xmm0
    vhaddps xmm0, xmm2, xmm2
  }
  vertInOut->v = _mm128_add_ps(_mm128_mul_ps(_mm128_div_ps(v17, _mm_sqrt_ps(_XMM0)), _mm_shuffle_ps(v6, v6, 0)), v16);
}

/*
==============
R_ClearFrustumLightsClusterBuffer
==============
*/
void R_ClearFrustumLightsClusterBuffer(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, R_RT_BufferHandle *maskClusterBuffer)
{
  const GfxWrappedRWBuffer *WrappedBuffer; 
  GfxDevice *device; 
  const GfxWrappedRWBuffer *v6; 
  __int64 v7; 
  __int64 v8[2]; 

  v8[0] = 0i64;
  v8[1] = 0i64;
  WrappedBuffer = R_RT_Handle::GetWrappedBuffer(maskClusterBuffer);
  device = computeState->device;
  v6 = WrappedBuffer;
  if ( !R_IsLockedIfGfxImmediateContext(device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  v7 = g_descriptorPools.shaderViewPool.handle.parent->descriptorSize * (g_descriptorPools.shaderViewPool.handle.startSlot + v6->rwView.rwView);
  ((void (__fastcall *)(GfxDevice *, unsigned __int64, unsigned __int64, ID3D12Resource *, __int64 *, _DWORD, _QWORD))device->m_pFunction[17].Release)(device, v7 + g_descriptorPools.shaderViewPool.handle.parent->heapStartGPUHandle.ptr, g_descriptorPools.shaderViewPool.handle.parent->heapStartCPUHandle.ptr + v7, v6->rwView.rwResource, v8, 0, 0i64);
}

/*
==============
R_ClearFrustumLightsTileBuffer
==============
*/
void R_ClearFrustumLightsTileBuffer(ComputeCmdBufState *computeState, unsigned int scale, unsigned int width, unsigned int height, R_RT_BufferHandle *maskBuffer)
{
  const GfxShaderBufferRWView *RWView; 
  GfxDevice *device; 
  const GfxShaderBufferRWView *v8; 
  __int64 v9; 
  __int64 v10[2]; 

  v10[0] = 0i64;
  v10[1] = 0i64;
  RWView = R_RT_BufferHandle::GetRWView(maskBuffer);
  device = computeState->device;
  v8 = RWView;
  if ( !R_IsLockedIfGfxImmediateContext(device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  v9 = g_descriptorPools.shaderViewPool.handle.parent->descriptorSize * (g_descriptorPools.shaderViewPool.handle.startSlot + v8->rwView);
  ((void (__fastcall *)(GfxDevice *, unsigned __int64, unsigned __int64, ID3D12Resource *, __int64 *, _DWORD, _QWORD))device->m_pFunction[17].Release)(device, v9 + g_descriptorPools.shaderViewPool.handle.parent->heapStartGPUHandle.ptr, g_descriptorPools.shaderViewPool.handle.parent->heapStartCPUHandle.ptr + v9, v8->rwResource, v10, 0, 0i64);
}

/*
==============
R_FL_RenderDebugProxies
==============
*/
void R_FL_RenderDebugProxies(GfxCmdBufContext *context, const GfxViewInfo *viewInfo)
{
  unsigned int v2; 
  const GfxBackEndData *data; 
  __int64 frustumLightsIndex; 
  int integer; 
  GfxCmdBufSourceState *source; 
  unsigned int *v7; 
  __int64 v8; 
  __int64 v9; 
  GfxWorld *world; 
  __int64 v14; 
  __int64 v15; 
  GfxFrustumLights *p_frustumLights; 
  int v17; 
  unsigned int v18; 
  int v19; 
  __int64 v20; 
  __int64 v21; 
  unsigned int v22; 
  unsigned int v23; 
  float *v24; 
  float *v25; 
  float *v26; 
  __int64 v27; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  int v35; 
  char v36; 
  int v38; 
  char v40; 
  bool v41; 
  int v42; 
  int v44; 
  char v45; 
  int v47; 
  int v50; 
  char v51; 
  int v53; 
  char v55; 
  int v57; 
  char v58; 
  unsigned __int8 *color; 
  __int64 v60; 
  __int64 v61; 
  __int64 v62; 
  unsigned int v63; 
  unsigned int v64; 
  unsigned int v65; 
  __int64 v66; 
  GfxCmdBufContext v67; 
  unsigned int *v68; 
  const GfxBackEndData *v69; 
  const GfxViewInfo *v71; 
  int v72; 
  int v73; 

  v71 = viewInfo;
  v2 = 0;
  v63 = 0;
  data = context->source->input.data;
  v69 = data;
  frustumLightsIndex = data->frustumLightsIndex;
  integer = r_showFrustumLightsProxies->current.integer;
  v66 = frustumLightsIndex;
  v73 = integer;
  v65 = s_frustumLights.lightCount[frustumLightsIndex];
  if ( v65 )
  {
    source = NULL;
    v7 = s_frustumLights.lightToSceneLight[(unsigned __int64)(unsigned int)frustumLightsIndex];
    v68 = v7;
    v67.source = NULL;
    do
    {
      v8 = *v7;
      v9 = v8;
      if ( data->sceneLights[v8].radius < 1.01 )
        goto LABEL_79;
      if ( (data->sceneLights[v9].flags & 0x10) != 0 )
        goto LABEL_79;
      _XMM0 = LODWORD(data->sceneLights[v9].colorLinearSrgb.v[1]);
      __asm
      {
        vmaxss  xmm1, xmm0, dword ptr [rbx+rsi+53A014h]
        vmaxss  xmm2, xmm1, dword ptr [rbx+rsi+53A01Ch]
      }
      if ( (float)(*(float *)&_XMM2 * data->sceneLights[v9].intensity) == 0.0 && (!viewInfo->thermalParams.useNightAndThermalVisionCombo || data->sceneLights[v9].irIntensity <= 0.0) )
      {
LABEL_79:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1543, ASSERT_TYPE_ASSERT, "(GfxLight_IsVisible( light, viewInfo->thermalParams.useNightAndThermalVisionCombo ))", (const char *)&queryFormat, "GfxLight_IsVisible( light, viewInfo->thermalParams.useNightAndThermalVisionCombo )") )
          __debugbreak();
      }
      if ( (unsigned __int8)(data->sceneLights[v9].type - 2) > 1u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1544, ASSERT_TYPE_ASSERT, "(light->type == 2 || light->type == 3)", (const char *)&queryFormat, "light->type == GFX_LIGHT_TYPE_SPOT || light->type == GFX_LIGHT_TYPE_OMNI") )
        __debugbreak();
      if ( integer != 2 || v2 == r_chooseFrustumLightProxy->current.integer )
      {
        world = rgp.world;
        v14 = frustumLightsIndex << 7;
        if ( (unsigned int)v8 >= rgp.world->primaryLightCount )
        {
          if ( !*(unsigned __int16 **)((char *)&s_frustumLights.dynamicLightModels[0].indices + v14) )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 566, ASSERT_TYPE_ASSERT, "(s_frustumLights.dynamicLightModels[frame].indices != nullptr)", (const char *)&queryFormat, "s_frustumLights.dynamicLightModels[frame].indices != nullptr") )
              __debugbreak();
            world = rgp.world;
          }
          p_frustumLights = (GfxFrustumLights *)((char *)s_frustumLights.dynamicLightModels + v14);
          v17 = v8 - world->primaryLightCount;
        }
        else
        {
          v15 = *(__int64 *)((char *)&s_frustumLights.staticLightModels[0].indices + v14);
          p_frustumLights = (GfxFrustumLights *)((char *)s_frustumLights.staticLightModels + v14);
          if ( !v15 )
            p_frustumLights = &rgp.world->frustumLights;
          v17 = v2;
          if ( !v15 )
            v17 = v8;
        }
        v18 = p_frustumLights->indicesCounts[v17];
        v64 = v18;
        v19 = 2 * v18;
        v20 = (__int64)&p_frustumLights->indices[p_frustumLights->indicesOffsets[v17]];
        v21 = (__int64)&p_frustumLights->vertices[16 * p_frustumLights->verticesOffsets[v17]];
        if ( 2 * v18 < 0x1000 )
        {
          v22 = 0;
          if ( p_frustumLights->indicesCounts[v17] )
          {
            v23 = 2;
            do
            {
              v24 = (float *)(v21 + 16i64 * *(unsigned __int16 *)(v20 + 2i64 * (v22 + 2)));
              v25 = (float *)(v21 + 16i64 * *(unsigned __int16 *)(v20 + 2i64 * (v22 + 1)));
              v26 = (float *)(v21 + 16i64 * *(unsigned __int16 *)(v20 + 2i64 * v22));
              if ( v23 - 2 >= 0x1000 )
              {
                LODWORD(v62) = 4096;
                LODWORD(v61) = v23 - 2;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1577, ASSERT_TYPE_ASSERT, "(unsigned)( pointIndex ) < (unsigned)( ( sizeof( *array_counter( s_frustumLights.points ) ) + 0 ) )", "pointIndex doesn't index ARRAY_COUNT( s_frustumLights.points )\n\t%i not in [0, %i)", v61, v62) )
                  __debugbreak();
              }
              v27 = v23 - 1;
              v28 = v23;
              v29 = v23 - 2;
              v30 = v23 + 1;
              v31 = v23 + 2;
              v32 = v23 + 3;
              v23 += 6;
              v22 += 3;
              s_frustumLights.points[v29].xyz.v[0] = *v26;
              s_frustumLights.points[v29].xyz.v[1] = v26[1];
              s_frustumLights.points[v29].xyz.v[2] = v26[2];
              s_frustumLights.points[v27].xyz.v[0] = *v25;
              s_frustumLights.points[v27].xyz.v[1] = v25[1];
              s_frustumLights.points[v27].xyz.v[2] = v25[2];
              s_frustumLights.points[v28].xyz.v[0] = *v25;
              s_frustumLights.points[v28].xyz.v[1] = v25[1];
              s_frustumLights.points[v28].xyz.v[2] = v25[2];
              v18 = v64;
              s_frustumLights.points[v30].xyz.v[0] = *v24;
              s_frustumLights.points[v30].xyz.v[1] = v24[1];
              s_frustumLights.points[v30].xyz.v[2] = v24[2];
              s_frustumLights.points[v31].xyz.v[0] = *v24;
              s_frustumLights.points[v31].xyz.v[1] = v24[1];
              s_frustumLights.points[v31].xyz.v[2] = v24[2];
              s_frustumLights.points[v32].xyz.v[0] = *v26;
              s_frustumLights.points[v32].xyz.v[1] = v26[1];
              s_frustumLights.points[v32].xyz.v[2] = v26[2];
            }
            while ( v22 < v64 );
            data = v69;
            v19 = 2 * v64;
            v2 = v63;
            source = v67.source;
          }
          frustumLightsIndex = v66;
          _XMM4 = 0i64;
          if ( s_frustumLights.insideLight[0][(_QWORD)source + 256 * v66] )
          {
            __asm { vroundss xmm1, xmm4, xmm3, 1 }
            v35 = (int)*(float *)&_XMM1;
            if ( (int)*(float *)&_XMM1 > 255 )
              v35 = 255;
            v41 = v35 < 0;
            v36 = v35;
            __asm { vroundss xmm1, xmm4, xmm3, 1 }
            v38 = (int)*(float *)&_XMM1;
            if ( v41 )
              v36 = 0;
            if ( v38 > 255 )
              v38 = 255;
            LOBYTE(v72) = v36;
            __asm { vroundss xmm1, xmm4, xmm3, 1 }
            v40 = v38;
            v41 = v38 < 0;
            v42 = (int)*(float *)&_XMM1;
          }
          else if ( s_frustumLights.singleSlice[0][(_QWORD)source + 256 * v66] )
          {
            __asm { vroundss xmm1, xmm4, xmm3, 1 }
            v44 = (int)*(float *)&_XMM1;
            if ( (int)*(float *)&_XMM1 > 255 )
              v44 = 255;
            v41 = v44 < 0;
            v45 = v44;
            __asm { vroundss xmm1, xmm4, xmm3, 1 }
            v47 = (int)*(float *)&_XMM1;
            if ( v41 )
              v45 = 0;
            if ( v47 > 255 )
              v47 = 255;
            LOBYTE(v72) = v45;
            __asm { vroundss xmm1, xmm4, xmm3, 1 }
            v40 = v47;
            v41 = v47 < 0;
            v42 = (int)*(float *)&_XMM1;
          }
          else
          {
            __asm { vroundss xmm1, xmm4, xmm3, 1 }
            v50 = (int)*(float *)&_XMM1;
            if ( (int)*(float *)&_XMM1 > 255 )
              v50 = 255;
            v41 = v50 < 0;
            v51 = v50;
            __asm { vroundss xmm1, xmm4, xmm3, 1 }
            v53 = (int)*(float *)&_XMM1;
            if ( v41 )
              v51 = 0;
            if ( v53 > 255 )
              v53 = 255;
            LOBYTE(v72) = v51;
            __asm { vroundss xmm1, xmm4, xmm3, 1 }
            v40 = v53;
            v41 = v53 < 0;
            v42 = (int)*(float *)&_XMM1;
          }
          if ( v41 )
            v40 = 0;
          BYTE1(v72) = v40;
          if ( v42 > 255 )
            v42 = 255;
          v55 = v42;
          if ( v42 < 0 )
            v55 = 0;
          BYTE2(v72) = v55;
          __asm { vroundss xmm1, xmm4, xmm3, 1 }
          v57 = (int)*(float *)&_XMM1;
          if ( (int)*(float *)&_XMM1 > 255 )
            v57 = 255;
          v58 = v57;
          if ( v57 < 0 )
            v58 = 0;
          HIBYTE(v72) = v58;
          if ( v18 )
          {
            color = s_frustumLights.points[0].color;
            v60 = v18;
            do
            {
              *(_DWORD *)color = v72;
              color += 16;
              --v60;
            }
            while ( v60 );
          }
          else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1613, ASSERT_TYPE_ASSERT, "(indexCount > 0)", (const char *)&queryFormat, "indexCount > 0") )
          {
            __debugbreak();
          }
          v67 = *context;
          RB_DrawLines3D(&v67, v19, 1, s_frustumLights.points, 1);
        }
        else
        {
          R_WarnOncePerFrame(R_WARN_DEBUG_ALLOC, "light proxies");
          frustumLightsIndex = v66;
        }
        integer = v73;
      }
      viewInfo = v71;
      v7 = v68 + 1;
      ++v2;
      ++v68;
      source = (GfxCmdBufSourceState *)((char *)source + 1);
      v63 = v2;
      v67.source = source;
    }
    while ( v2 < v65 );
  }
}

/*
==============
R_FL_RenderDebugProxies_Enabled
==============
*/
bool R_FL_RenderDebugProxies_Enabled(const GfxViewInfo *viewInfo)
{
  return r_showFrustumLightsProxies->current.integer != 0;
}

/*
==============
R_FL_ShowDebugOverlay
==============
*/
void R_FL_ShowDebugOverlay(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxWrappedBuffer *lightMasksTile, const GfxWrappedBuffer *lightMasksCluster, const GfxWrappedBuffer *volumetricMasksCluster, const GfxWrappedBuffer *probeMasksCluster, const unsigned int mode, const unsigned int beginSlice, const unsigned int endSlice, const float blend)
{
  GfxCmdBufSourceState *source; 
  unsigned int v12; 
  float v15; 
  float v16; 
  GfxCmdBufContext v17; 
  float renderTargetWidth; 
  float renderTargetHeight; 
  float width; 
  float height; 
  float v22; 
  float v23; 
  materialCommands_t *Tess; 
  materialCommands_t *v25; 
  float v26; 
  float v27; 
  float v28; 
  GfxCmdBufContext v29; 

  source = gfxContext->source;
  v12 = mode - 1;
  if ( (((_BYTE)mode - 1) & 1) != 0 || v12 > 9 )
  {
    v15 = 0.0;
    if ( (((_BYTE)mode - 1) & 1) != 0 )
      goto LABEL_7;
  }
  else
  {
    v15 = FLOAT_0_25;
  }
  if ( v12 <= 9 )
  {
    v16 = FLOAT_0_75;
    goto LABEL_8;
  }
LABEL_7:
  v16 = FLOAT_1_0;
LABEL_8:
  v17 = *gfxContext;
  renderTargetWidth = (float)source->renderTargetWidth;
  renderTargetHeight = (float)source->renderTargetHeight;
  width = (float)viewInfo->sceneViewport.width;
  height = (float)viewInfo->sceneViewport.height;
  v22 = renderTargetHeight * v15;
  v23 = (float)(v16 - v15) * renderTargetHeight;
  v29 = *gfxContext;
  Tess = R_GetTess(&v29);
  v25 = Tess;
  if ( Tess->vertexCount )
  {
    v29 = v17;
    RB_EndTessSurfaceInternal(&v29, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h(162)");
  }
  else
  {
    if ( Tess->indexCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 166, ASSERT_TYPE_ASSERT, "(tess.indexCount == 0)", (const char *)&queryFormat, "tess.indexCount == 0") )
      __debugbreak();
    v25->viewStatsTarget = GFX_VIEW_STATS_INVALID;
    v25->primStatsTarget = GFX_PRIM_STATS_INVALID;
  }
  R_Set2D(source);
  R_SetPersistentTables(gfxContext, gfxContext->state->data, PERSISTENT_TABLE_SCENE);
  source->input.consts[5].v[0] = width;
  source->input.consts[5].v[1] = height;
  source->input.consts[5].v[2] = 1.0 / width;
  v26 = (float)v12;
  source->input.consts[5].v[3] = 1.0 / height;
  ++source->constVersions[5];
  source->input.consts[150].v[0] = v26;
  v27 = (float)beginSlice;
  source->input.consts[150].v[1] = v27;
  v28 = (float)endSlice;
  source->input.consts[150].v[2] = v28;
  source->input.consts[150].v[3] = blend;
  ++source->constVersions[150];
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1503, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codePersistentBuffers[10] = lightMasksTile;
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1503, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codePersistentBuffers[11] = lightMasksCluster;
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1503, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codePersistentBuffers[13] = volumetricMasksCluster;
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1503, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codePersistentBuffers[6] = probeMasksCluster;
  v29 = *gfxContext;
  RB_DrawStretchPic(&v29, rgp.frustumLightsDebug, renderTargetWidth * v15, v22, (float)(v16 - v15) * renderTargetWidth, v23, v15, v15, v16, v16, 0xFFFFFFFF, GFX_PRIM_STATS_CODE);
  v29 = *gfxContext;
  RB_EndTessSurfaceInternal(&v29, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp(1652)");
}

/*
==============
R_FL_UseRuntimeGeneratedLightModels
==============
*/
void R_FL_UseRuntimeGeneratedLightModels(bool use)
{
  GfxWrappedBuffer *p_vertexBuffer; 
  signed int primaryLightCount; 
  __int64 v3; 
  unsigned __int16 **p_verticesCounts; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned __int64 v7; 
  unsigned __int64 v8; 
  unsigned __int64 v9; 
  __m256i *staticLightModels; 
  __int64 v11; 
  GfxWrappedBuffer *v12; 
  __m256i v13; 
  __m256i v14; 
  __m256i v15; 
  _BYTE v16[128]; 
  __int64 v17; 

  if ( use )
  {
    if ( !s_frustumLights.staticLightModels[0].indices )
    {
      p_vertexBuffer = &s_frustumLights.staticLightModels[0].vertexBuffer;
      primaryLightCount = rgp.world->primaryLightCount;
      v3 = 256i64;
      p_verticesCounts = &s_frustumLights.staticLightModels[0].verticesCounts;
      if ( primaryLightCount < 256 )
        v3 = (unsigned int)primaryLightCount;
      v17 = 2i64;
      v5 = (_DWORD)v3 << 11;
      v6 = (_DWORD)v3 << 8;
      v7 = (unsigned __int64)(unsigned int)v3 << 12;
      v8 = 2 * v3;
      v9 = 4 * v3;
      do
      {
        R_CreateGfxWrappedBuffer(p_vertexBuffer - 1, GfxWrappedBuffer_Raw, 2, v5, GFX_DATA_FORMAT_R32_UINT, 0x82u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "frustum lights static lights indices gpu");
        R_CreateGfxWrappedBuffer(p_vertexBuffer, GfxWrappedBuffer_Raw, 16, v6, GFX_DATA_FORMAT_R32_UINT, 2u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "frustum lights static lights vertices gpu");
        *(p_verticesCounts - 1) = (unsigned __int16 *)PMem_Alloc(v8, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "frustum lights static lights indicesCounts");
        *p_verticesCounts = (unsigned __int16 *)PMem_Alloc(v8, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "frustum lights static lights verticesCounts");
        *(p_verticesCounts - 3) = (unsigned __int16 *)PMem_Alloc(v9, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "frustum lights static lights indicesOffsets");
        *(p_verticesCounts - 2) = (unsigned __int16 *)PMem_Alloc(v9, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "frustum lights static lights indices cpu");
        p_verticesCounts[1] = (unsigned __int16 *)PMem_Alloc(v7, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "frustum lights static lights iverticesOffsets");
        p_verticesCounts[2] = (unsigned __int16 *)PMem_Alloc(v7, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "frustum lights static lights vertices");
        p_verticesCounts += 16;
        p_vertexBuffer += 4;
        --v17;
      }
      while ( v17 );
    }
  }
  else if ( s_frustumLights.staticLightModels[0].indices )
  {
    staticLightModels = (__m256i *)s_frustumLights.staticLightModels;
    v11 = 2i64;
    v12 = &s_frustumLights.staticLightModels[0].vertexBuffer;
    do
    {
      R_ShutdownGfxWrappedBuffer(v12 - 1);
      R_ShutdownGfxWrappedBuffer(v12);
      memset_0(v16, 0, sizeof(v16));
      v13 = *(__m256i *)&v16[32];
      *staticLightModels = *(__m256i *)v16;
      v14 = *(__m256i *)&v16[64];
      staticLightModels[1] = v13;
      v15 = *(__m256i *)&v16[96];
      staticLightModels[2] = v14;
      v12 += 4;
      staticLightModels[3] = v15;
      staticLightModels += 4;
      --v11;
    }
    while ( v11 );
  }
}

/*
==============
R_FrustumLights_FreeRts
==============
*/

void __fastcall R_FrustumLights_FreeRts(double _XMM0_8)
{
  R_RT_Handle maskBuffer; 

  if ( s_frustumLights.maskBuffer.m_surfaceID )
  {
    R_RT_Handle::GetSurface(&s_frustumLights.maskBuffer);
    maskBuffer = (R_RT_Handle)s_frustumLights.maskBuffer;
    R_RT_DestroyInternal(&maskBuffer);
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&maskBuffer.m_tracking.m_name = _XMM0;
    maskBuffer.m_surfaceID = 0;
    maskBuffer.m_tracking.m_allocCounter = 0;
    s_frustumLights.maskBuffer = (R_RT_BufferHandle)maskBuffer;
    maskBuffer = (R_RT_Handle)s_frustumLights.maskClusterBuffer;
    R_RT_DestroyInternal(&maskBuffer);
    maskBuffer.m_surfaceID = 0;
    maskBuffer.m_tracking.m_allocCounter = 0;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&maskBuffer.m_tracking.m_name = _XMM0;
    s_frustumLights.maskClusterBuffer = (R_RT_BufferHandle)maskBuffer;
  }
  else if ( s_frustumLights.maskBuffer.m_tracking.m_allocCounter != s_frustumLights.maskBuffer.m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
  {
    __debugbreak();
  }
}

/*
==============
R_FrustumLights_LazyAllocRts
==============
*/
void R_FrustumLights_LazyAllocRts(void)
{
  unsigned int v0; 
  R_RT_BufferHandle result; 

  if ( s_frustumLights.maskBuffer.m_surfaceID )
  {
    R_RT_Handle::GetSurface(&s_frustumLights.maskBuffer);
  }
  else
  {
    if ( s_frustumLights.maskBuffer.m_tracking.m_allocCounter != s_frustumLights.maskBuffer.m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    v0 = s_frustumLights.maxClusterCountX * s_frustumLights.maxClusterCountY * s_frustumLights.maxClusterCountZ;
    s_frustumLights.maskBuffer = *R_RT_CreateBufferInternal(&result, 4u, 8 * s_frustumLights.maxTileCountX * s_frustumLights.maxTileCountY, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_GENERIC_READ, "frustum light masks buffer", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp(282)");
    s_frustumLights.maskClusterBuffer = *R_RT_CreateBufferInternal(&result, 4u, 8 * v0, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_GENERIC_READ, "frustum light masks cluster buffer", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp(283)");
  }
}

/*
==============
R_GenerateLightModelNormals
==============
*/
void R_GenerateLightModelNormals(GfxLightModelInterface *lightModel)
{
  unsigned int numIndices; 
  unsigned int v3; 
  unsigned int v4; 
  __int128 *v5; 
  unsigned __int16 *indices; 
  unsigned int positionsStride; 
  char *positions; 
  __int64 v9; 
  int v10; 
  int v11; 
  __int64 v12; 
  __m128 v13; 
  __m128 v14; 
  __m128 v15; 
  __m128 v20; 
  __m128 v21; 
  PackedUnitVec v27; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  int v31; 
  vec3_t unitVec; 
  __m128 v33[682]; 

  if ( !lightModel->positions && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1822, ASSERT_TYPE_ASSERT, "(lightModel->positions)", (const char *)&queryFormat, "lightModel->positions") )
    __debugbreak();
  if ( !lightModel->indices && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1823, ASSERT_TYPE_ASSERT, "(lightModel->indices)", (const char *)&queryFormat, "lightModel->indices") )
    __debugbreak();
  if ( lightModel->numVerts > 0x100 )
  {
    v31 = 256;
    LODWORD(v29) = lightModel->numVerts;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1824, ASSERT_TYPE_ASSERT, "( lightModel->numVerts ) <= ( MAX_LIGHT_MODEL_VERTS )", "lightModel->numVerts not in [0, MAX_LIGHT_MODEL_VERTS]\n\t%u not in [0, %u]", v29, v31) )
      __debugbreak();
  }
  if ( lightModel->numIndices > 0x800 )
  {
    LODWORD(v30) = 2048;
    LODWORD(v29) = lightModel->numIndices;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1825, ASSERT_TYPE_ASSERT, "( lightModel->numIndices ) <= ( MAX_LIGHT_MODEL_INDICES )", "lightModel->numIndices not in [0, MAX_LIGHT_MODEL_INDICES]\n\t%u not in [0, %u]", v29, v30) )
      __debugbreak();
  }
  numIndices = lightModel->numIndices;
  memset_0(v33, 0, sizeof(v33));
  v3 = 0;
  v4 = 0;
  if ( numIndices / 3 )
  {
    v5 = (__int128 *)v33;
    indices = lightModel->indices;
    positionsStride = lightModel->positionsStride;
    positions = (char *)lightModel->positions;
    do
    {
      v9 = 3 * v4;
      v10 = indices[v9];
      v11 = indices[(unsigned int)(v9 + 1)];
      ++v5;
      v12 = v10 * positionsStride;
      LODWORD(v9) = indices[(unsigned int)(v9 + 2)];
      ++v4;
      v13 = _mm128_sub_ps(*(__m128 *)&positions[v11 * positionsStride], *(__m128 *)&positions[v12]);
      v14 = _mm128_sub_ps(*(__m128 *)&positions[(unsigned int)v9 * positionsStride], *(__m128 *)&positions[v12]);
      v15 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v13, v13, 201), _mm_shuffle_ps(v14, v14, 210)), _mm128_mul_ps(_mm_shuffle_ps(v13, v13, 210), _mm_shuffle_ps(v14, v14, 201)));
      _XMM1 = _mm128_mul_ps(v15, v15);
      __asm
      {
        vinsertps xmm0, xmm1, xmm1, 8
        vhaddps xmm2, xmm0, xmm0
        vhaddps xmm0, xmm2, xmm2
      }
      v20 = _mm128_div_ps(v15, _mm_sqrt_ps(_XMM0));
      *(v5 - 1) = (__int128)v20;
      v33[v10] = _mm128_add_ps(v20, v33[v10]);
      v33[v11] = _mm128_add_ps(v33[v11], *((__m128 *)v5 - 1));
      v33[(unsigned int)v9] = _mm128_add_ps(v33[(unsigned int)v9], *((__m128 *)v5 - 1));
    }
    while ( v4 < numIndices / 3 );
  }
  if ( lightModel->numVerts )
  {
    do
    {
      v21 = v33[v3];
      _XMM1 = _mm128_mul_ps(v21, v21);
      __asm
      {
        vinsertps xmm2, xmm1, xmm1, 8
        vhaddps xmm0, xmm2, xmm2
        vhaddps xmm0, xmm0, xmm0
      }
      _XMM2 = _mm128_div_ps(v21, _mm_sqrt_ps(_XMM0));
      unitVec.v[0] = _XMM2.m128_f32[0];
      __asm
      {
        vextractps dword ptr [rsp+2B18h+unitVec+4], xmm2, 1
        vextractps dword ptr [rsp+2B18h+unitVec+8], xmm2, 2
      }
      v27.packed = Vec3PackUnitVec(&unitVec).packed;
      v28 = v3 * lightModel->normalsStride;
      ++v3;
      *(PackedUnitVec *)((char *)lightModel->normals + v28) = v27;
    }
    while ( v3 < lightModel->numVerts );
  }
}

/*
==============
R_GenerateOmniLightModel
==============
*/
void R_GenerateOmniLightModel(const vec3_t *lightOrigin, float radius, const vec3_t *bulbLength, GfxLightModel *lightModel)
{
  GfxLightModelInterface model; 

  model.positionsStride = 12;
  model.positions = lightModel->verts;
  model.indices = lightModel->indices;
  R_GenerateOmniLightModelMain(lightOrigin, radius, bulbLength, &model);
  lightModel->numVerts = model.numVerts;
  lightModel->numIndices = model.numIndices;
}

/*
==============
R_GenerateOmniLightModelInternal
==============
*/
void R_GenerateOmniLightModelInternal(LightProxyMesh type, const unsigned int kCircleSegment, const unsigned int kSphereSegment, const float4 *centerVec, const float4 (*axis)[3], float sphereRadius, GfxLightModelInterface *model)
{
  unsigned int v7; 
  __int64 v8; 
  __m128 v; 
  __m128 v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  unsigned int v17; 
  float v18; 
  float v31; 
  __m128 v32; 
  __m128 v33; 
  float v34; 
  float v35; 
  float v38; 
  const float4 (*v39)[3]; 
  const float4 *v40; 
  float v41; 
  __m128 v42; 
  __m128 v43; 
  __m128 v44; 
  __m128 v45; 
  unsigned int v46; 
  float v47; 
  __m128 v48; 
  __m128 v49; 
  __m128 v50; 
  __int64 v51; 
  unsigned int numIndices; 
  int v55; 
  unsigned int v56; 
  unsigned int v57; 
  __int64 v58; 
  unsigned __int16 v59; 
  bool v60; 
  float v61; 
  __int64 v62; 
  unsigned int v63; 
  unsigned int v64; 
  float v65; 
  __int64 v66; 
  unsigned int v67; 
  unsigned __int16 v68; 
  unsigned int numVerts; 
  float v72; 
  unsigned int v73; 
  __int64 v74; 
  unsigned int v75; 
  __int64 v76; 
  unsigned int v77; 
  unsigned __int16 v78; 
  unsigned int v79; 
  int v80; 
  float v81; 
  float s; 
  float c; 
  float v84[2]; 
  unsigned int v85; 
  __int64 v86; 
  LightProxyMesh v87; 
  int v88; 
  const float4 *v89; 
  __int128 v90; 
  __int128 v91; 
  __int128 v92; 
  vec4_t plane; 

  v7 = kSphereSegment;
  v8 = kCircleSegment;
  v89 = centerVec;
  v85 = kSphereSegment;
  v87 = type;
  v88 = 1;
  v = (*axis)[0].v;
  v10 = (*axis)[1].v;
  v11 = (float)kCircleSegment;
  v12 = 6.2831855 / v11;
  v13 = (float)kSphereSegment;
  v14 = 1.0 / v13;
  v15 = 0.0;
  if ( type == MESH_ALL_SIDES )
  {
    v16 = FLOAT_3_1415927;
    v17 = 1;
    LODWORD(v86) = 1;
LABEL_6:
    v7 = kSphereSegment - 1;
    v85 = kSphereSegment - 1;
    goto LABEL_7;
  }
  v16 = FLOAT_1_5707964;
  if ( type != MESH_TOP_SIDE )
  {
    v17 = 0;
    LODWORD(v86) = 0;
    v15 = FLOAT_1_5707964;
    goto LABEL_6;
  }
  v17 = 1;
  LODWORD(v86) = 1;
LABEL_7:
  v18 = v14 * v16;
  FastSinCos(1.5707964, &s, &c);
  FastSinCos(0.0, v84, &v81);
  _XMM1 = _xmm;
  __asm
  {
    vinsertps xmm1, xmm1, xmm0, 0
    vinsertps xmm1, xmm1, xmm3, 10h
    vinsertps xmm1, xmm1, xmm4, 20h ; ' '
  }
  v92 = _XMM1;
  FastSinCos(1.5707964, &s, &c);
  FastSinCos(v12, v84, &v81);
  _XMM1 = _xmm;
  __asm
  {
    vinsertps xmm1, xmm1, xmm2, 0
    vinsertps xmm1, xmm1, xmm3, 10h
    vinsertps xmm1, xmm1, xmm4, 20h ; ' '
  }
  v91 = _XMM1;
  FastSinCos(1.5707964 - (float)(v14 * v16), &s, &c);
  FastSinCos(0.0, v84, &v81);
  _XMM1 = _xmm;
  __asm
  {
    vinsertps xmm1, xmm1, xmm0, 0
    vinsertps xmm1, xmm1, xmm3, 10h
    vinsertps xmm1, xmm1, xmm4, 20h ; ' '
  }
  v90 = _XMM1;
  PlaneFromPoints(&plane, (const vec3_t *)&v92, (const vec3_t *)&v91, (const vec3_t *)&v90, 0.001);
  v31 = sphereRadius / COERCE_FLOAT(LODWORD(plane.v[3]) & _xmm);
  if ( v31 < 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 2256, ASSERT_TYPE_ASSERT, "(sphereRadiusScale >= 1.0f)", (const char *)&queryFormat, "sphereRadiusScale >= 1.0f") )
    __debugbreak();
  v33 = (__m128)LODWORD(sphereRadius);
  v33.m128_f32[0] = sphereRadius * v31;
  v32 = v33;
  v34 = 1.0 / cosf_0(v12 * 0.5);
  if ( v34 < 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 2264, ASSERT_TYPE_ASSERT, "(circleRadiusScale >= 1.0f)", (const char *)&queryFormat, "circleRadiusScale >= 1.0f") )
    __debugbreak();
  v35 = NAN;
  c = NAN;
  if ( v87 != MESH_BOTTOM_SIDE )
  {
    v35 = *(float *)&model->numVerts;
    _XMM3 = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v33, v33, 0), (*axis)[2].v), v89->v);
    _RCX = (float *)((char *)model->positions + model->numVerts * model->positionsStride);
    ++model->numVerts;
    c = v35;
    *_RCX = _XMM3.m128_f32[0];
    __asm
    {
      vextractps dword ptr [rcx+4], xmm3, 1
      vextractps dword ptr [rcx+8], xmm3, 2
    }
    if ( model->numVerts > 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 2274, ASSERT_TYPE_ASSERT, "(model->numVerts <= MAX_LIGHT_MODEL_VERTS)", (const char *)&queryFormat, "model->numVerts <= MAX_LIGHT_MODEL_VERTS") )
      __debugbreak();
  }
  v38 = *(float *)&model->numVerts;
  s = v38;
  v81 = v38;
  if ( (unsigned int)v86 <= v7 )
  {
    v39 = axis;
    v40 = v89;
    do
    {
      v41 = (float)v17;
      FastSinCos((float)(v41 * v18) + v15, v84, &v81);
      v42 = v32;
      v42.m128_f32[0] = (float)(v32.m128_f32[0] * v84[0]) * v34;
      v43 = v42;
      v44 = v32;
      v44.m128_f32[0] = v32.m128_f32[0] * v81;
      v45 = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v44, v44, 0), (*v39)[2].v), v40->v);
      v46 = 0;
      if ( (_DWORD)v8 )
      {
        do
        {
          v47 = (float)v46;
          FastSinCos(v47 * v12, v84, &v81);
          v49 = v43;
          v49.m128_f32[0] = v43.m128_f32[0] * v81;
          v48 = v49;
          v50 = v43;
          v50.m128_f32[0] = v43.m128_f32[0] * v84[0];
          v51 = model->positionsStride * model->numVerts++;
          _RCX = (float *)((char *)model->positions + v51);
          _XMM3 = _mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v48, v48, 0), v), v45), _mm128_mul_ps(_mm_shuffle_ps(v50, v50, 0), v10));
          *_RCX = _XMM3.m128_f32[0];
          __asm
          {
            vextractps dword ptr [rcx+4], xmm3, 1
            vextractps dword ptr [rcx+8], xmm3, 2
          }
          if ( model->numVerts >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 2307, ASSERT_TYPE_ASSERT, "(model->numVerts < MAX_LIGHT_MODEL_VERTS)", (const char *)&queryFormat, "model->numVerts < MAX_LIGHT_MODEL_VERTS") )
            __debugbreak();
          ++v46;
        }
        while ( v46 < (unsigned int)v8 );
        v7 = v85;
        v39 = axis;
      }
      ++v17;
    }
    while ( v17 <= v7 );
    v38 = s;
    v35 = c;
    v81 = *(float *)&model->numVerts;
  }
  if ( v87 != MESH_BOTTOM_SIDE )
  {
    if ( v35 == NAN && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 2316, ASSERT_TYPE_ASSERT, "(topVert != 0xffffffff)", (const char *)&queryFormat, "topVert != 0xffffffff") )
      __debugbreak();
    if ( (_DWORD)v8 )
    {
      numIndices = model->numIndices;
      v55 = 1 - LODWORD(v38);
      *(_QWORD *)v84 = v8;
      v56 = LODWORD(v38);
      do
      {
        v57 = LODWORD(v38) + (v55 + v56) % (unsigned int)v8;
        v58 = numIndices + 2;
        if ( (unsigned int)v58 >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1718, ASSERT_TYPE_ASSERT, "(firstIndex + 2 < MAX_LIGHT_MODEL_INDICES)", (const char *)&queryFormat, "firstIndex + 2 < MAX_LIGHT_MODEL_INDICES") )
          __debugbreak();
        model->indices[numIndices] = truncate_cast<unsigned short,unsigned int>(LODWORD(c));
        model->indices[numIndices + 1] = truncate_cast<unsigned short,unsigned int>(v57);
        v59 = truncate_cast<unsigned short,unsigned int>(v56++);
        model->indices[v58] = v59;
        model->numIndices += 3;
        v60 = (*(_QWORD *)v84)-- == 1i64;
        numIndices = model->numIndices;
        v38 = s;
      }
      while ( !v60 );
      v7 = v85;
    }
  }
  LODWORD(v61) = v8 + LODWORD(v38);
  LODWORD(s) = v8 + LODWORD(v38);
  if ( (int)v86 + 1 <= v7 )
  {
    v62 = v7 - (unsigned int)v86;
    v86 = v62;
    do
    {
      if ( (_DWORD)v8 )
      {
        v63 = model->numIndices;
        *(_QWORD *)v84 = v8;
        v64 = LODWORD(v61) - v8;
        LODWORD(v65) = v8 - LODWORD(v61) + 1;
        c = v65;
        do
        {
          v66 = v63 + 5;
          v67 = LODWORD(v61) + (v64 + LODWORD(v65)) % (unsigned int)v8;
          if ( (unsigned int)v66 >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1688, ASSERT_TYPE_ASSERT, "(firstIndex + 5 < MAX_LIGHT_MODEL_INDICES)", (const char *)&queryFormat, "firstIndex + 5 < MAX_LIGHT_MODEL_INDICES") )
            __debugbreak();
          model->indices[v63] = truncate_cast<unsigned short,unsigned int>(v64);
          model->indices[v63 + 1] = truncate_cast<unsigned short,unsigned int>(v67 - v8);
          model->indices[v63 + 2] = truncate_cast<unsigned short,unsigned int>(v67);
          model->indices[v63 + 3] = truncate_cast<unsigned short,unsigned int>(v64);
          model->indices[v63 + 4] = truncate_cast<unsigned short,unsigned int>(v67);
          v68 = truncate_cast<unsigned short,unsigned int>(v64 + v8);
          ++v64;
          model->indices[v66] = v68;
          model->numIndices += 6;
          v60 = (*(_QWORD *)v84)-- == 1i64;
          v63 = model->numIndices;
          v61 = s;
          v65 = c;
        }
        while ( !v60 );
        v62 = v86;
      }
      LODWORD(v61) += v8;
      --v62;
      s = v61;
      v86 = v62;
    }
    while ( v62 );
  }
  if ( v87 != MESH_TOP_SIDE )
  {
    numVerts = model->numVerts;
    _RCX = (float *)((char *)model->positions + model->numVerts * model->positionsStride);
    _XMM3 = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps((__m128)(*(_OWORD *)&v32 ^ _xmm), (__m128)(*(_OWORD *)&v32 ^ _xmm), 0), (*axis)[2].v), v89->v);
    ++model->numVerts;
    *_RCX = _XMM3.m128_f32[0];
    __asm
    {
      vextractps dword ptr [rcx+4], xmm3, 1
      vextractps dword ptr [rcx+8], xmm3, 2
    }
    if ( model->numVerts > 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 2354, ASSERT_TYPE_ASSERT, "(model->numVerts <= MAX_LIGHT_MODEL_VERTS)", (const char *)&queryFormat, "model->numVerts <= MAX_LIGHT_MODEL_VERTS") )
      __debugbreak();
    LODWORD(v72) = LODWORD(v81) - v8;
    LODWORD(v81) -= v8;
    if ( (_DWORD)v8 )
    {
      v73 = model->numIndices;
      v74 = v8;
      v75 = 1;
      do
      {
        v76 = v73 + 2;
        v77 = LODWORD(v72) + v75 % (unsigned int)v8;
        if ( (unsigned int)v76 >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1718, ASSERT_TYPE_ASSERT, "(firstIndex + 2 < MAX_LIGHT_MODEL_INDICES)", (const char *)&queryFormat, "firstIndex + 2 < MAX_LIGHT_MODEL_INDICES") )
          __debugbreak();
        v78 = truncate_cast<unsigned short,unsigned int>(numVerts);
        v79 = v88 + LODWORD(v81) - 1;
        model->indices[v73] = v78;
        model->indices[v73 + 1] = truncate_cast<unsigned short,unsigned int>(v79);
        model->indices[v76] = truncate_cast<unsigned short,unsigned int>(v77);
        v80 = v88;
        model->numIndices += 3;
        v75 = v80 + 1;
        v73 = model->numIndices;
        v72 = v81;
        v88 = v75;
        --v74;
      }
      while ( v74 );
    }
  }
}

/*
==============
R_GenerateOmniLightModelMain
==============
*/
void R_GenerateOmniLightModelMain(const vec3_t *center, float radius, const vec3_t *bulbLength, GfxLightModelInterface *model)
{
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  __m128 v; 
  float v20; 
  __m128 v22; 
  __m128 v33; 
  __m128 v34; 
  __int64 v39; 
  unsigned int v40; 
  unsigned int numIndices; 
  unsigned int v42; 
  int v43; 
  unsigned int v44; 
  unsigned int v45; 
  unsigned int v46; 
  __int64 v47; 
  unsigned int v48; 
  unsigned __int16 v49; 
  unsigned int v50; 
  int v51; 
  unsigned int centerVec; 
  float4 centerVec_8; 
  float4 axis[3]; 
  __int128 v55; 
  __int128 v56; 
  _OWORD v57[2]; 

  v57[0] = v5;
  v56 = v6;
  v55 = v7;
  *(_QWORD *)&model->numVerts = 0i64;
  if ( radius < 1.01 )
    Com_PrintWarning(8, "Small omni light radius = %f\n", radius);
  v12 = center->v[0];
  v13 = bulbLength->v[1];
  v14 = bulbLength->v[0];
  v15 = bulbLength->v[2];
  centerVec_8.v.m128_i32[3] = 0;
  v = centerVec_8.v;
  v.m128_f32[0] = v12;
  _XMM7 = v;
  __asm
  {
    vinsertps xmm7, xmm7, dword ptr [rdi+4], 10h
    vinsertps xmm7, xmm7, dword ptr [rdi+8], 20h ; ' '
  }
  v20 = (float)((float)(v14 * v14) + (float)(v13 * v13)) + (float)(v15 * v15);
  centerVec_8.v = _XMM7;
  if ( v20 <= 16.0 )
  {
    *(__m256i *)axis[0].v.m128_f32 = _ymm;
    axis[2] = (float4)_xmm;
    R_GenerateOmniLightModelInternal(MESH_ALL_SIDES, 6u, 6u, &centerVec_8, (const float4 (*)[3])axis, fsqrt(v20) + radius, model);
  }
  else
  {
    centerVec_8.v.m128_i32[3] = 0;
    v57[1] = v4;
    v22 = centerVec_8.v;
    v22.m128_f32[0] = v14;
    _XMM6 = v22;
    __asm
    {
      vinsertps xmm6, xmm6, xmm4, 10h
      vinsertps xmm6, xmm6, xmm9, 20h ; ' '
    }
    _XMM0 = _mm128_mul_ps(_XMM6, _XMM6);
    __asm
    {
      vinsertps xmm1, xmm0, xmm0, 8
      vhaddps xmm2, xmm1, xmm1
      vhaddps xmm0, xmm2, xmm2
    }
    axis[2].v = _mm128_div_ps(_XMM6, _mm_sqrt_ps(_XMM0));
    PerpendicularVector((const vec3_t *)&axis[2], (vec3_t *)axis);
    _XMM0 = _mm128_mul_ps(axis[0].v, axis[0].v);
    __asm
    {
      vinsertps xmm1, xmm0, xmm0, 8
      vhaddps xmm2, xmm1, xmm1
      vhaddps xmm0, xmm2, xmm2
    }
    v33 = _mm128_div_ps(axis[0].v, _mm_sqrt_ps(_XMM0));
    v34 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(axis[2].v, axis[2].v, 201), _mm_shuffle_ps(v33, v33, 210)), _mm128_mul_ps(_mm_shuffle_ps(axis[2].v, axis[2].v, 210), _mm_shuffle_ps(v33, v33, 201)));
    _XMM1 = _mm128_mul_ps(v34, v34);
    __asm
    {
      vinsertps xmm0, xmm1, xmm1, 8
      vhaddps xmm2, xmm0, xmm0
      vhaddps xmm0, xmm2, xmm2
    }
    v39 = 6i64;
    axis[1].v = _mm128_div_ps(v34, _mm_sqrt_ps(_XMM0));
    axis[0] = (float4)v33;
    centerVec_8.v = _mm128_add_ps(_XMM7, _XMM6);
    R_GenerateOmniLightModelInternal(MESH_TOP_SIDE, 6u, 3u, &centerVec_8, (const float4 (*)[3])axis, radius, model);
    centerVec = model->numVerts;
    v40 = centerVec;
    centerVec_8.v = _mm128_sub_ps(_XMM7, _XMM6);
    R_GenerateOmniLightModelInternal(MESH_BOTTOM_SIDE, 6u, 3u, &centerVec_8, (const float4 (*)[3])axis, radius, model);
    numIndices = model->numIndices;
    v42 = centerVec - 6;
    v50 = centerVec - 6;
    v43 = 1 - (centerVec - 6);
    v44 = centerVec - 6;
    v51 = v43;
    do
    {
      v45 = (v43 + v44) % 6;
      v46 = v45 + v40;
      v47 = numIndices + 5;
      v48 = v45 + v42;
      if ( (unsigned int)v47 >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1688, ASSERT_TYPE_ASSERT, "(firstIndex + 5 < MAX_LIGHT_MODEL_INDICES)", (const char *)&queryFormat, "firstIndex + 5 < MAX_LIGHT_MODEL_INDICES") )
        __debugbreak();
      model->indices[numIndices] = truncate_cast<unsigned short,unsigned int>(v44);
      model->indices[numIndices + 1] = truncate_cast<unsigned short,unsigned int>(v48);
      model->indices[numIndices + 2] = truncate_cast<unsigned short,unsigned int>(v46);
      model->indices[numIndices + 3] = truncate_cast<unsigned short,unsigned int>(v44);
      model->indices[numIndices + 4] = truncate_cast<unsigned short,unsigned int>(v46);
      v49 = truncate_cast<unsigned short,unsigned int>(v44 + 6);
      v42 = v50;
      ++v44;
      model->indices[v47] = v49;
      model->numIndices += 6;
      numIndices = model->numIndices;
      v43 = v51;
      v40 = centerVec;
      --v39;
    }
    while ( v39 );
  }
  if ( model->numIndices >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 2453, ASSERT_TYPE_ASSERT, "(model->numIndices < MAX_LIGHT_MODEL_INDICES)", (const char *)&queryFormat, "model->numIndices < MAX_LIGHT_MODEL_INDICES") )
    __debugbreak();
  if ( model->numVerts >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 2454, ASSERT_TYPE_ASSERT, "(model->numVerts < MAX_LIGHT_MODEL_VERTS)", (const char *)&queryFormat, "model->numVerts < MAX_LIGHT_MODEL_VERTS") )
    __debugbreak();
}

/*
==============
R_GenerateSpotLightModel
==============
*/
void R_GenerateSpotLightModel(const vec3_t *lightOrigin, const vec3_t *lightDir, float coneCosHalfFov, float radius, const vec3_t *bulbLengthVec, const float bulbRadius, GfxLightModel *lightModel)
{
  GfxLightModelInterface model; 

  model.positionsStride = 12;
  model.positions = lightModel->verts;
  model.indices = lightModel->indices;
  R_GenerateSpotLightModelMain(lightOrigin, lightDir, coneCosHalfFov, radius, bulbLengthVec, bulbRadius, &model);
  lightModel->numVerts = model.numVerts;
  lightModel->numIndices = model.numIndices;
}

/*
==============
R_GenerateSpotLightModelInternal
==============
*/
void R_GenerateSpotLightModelInternal(LightProxyMesh type, const unsigned int kCircleSegment, const unsigned int kSphereSegment, const float4 *topVec, const float4 (*axis)[3], const float coneAngleHalf, float coneRadius, const float4 *lineCenter, const float4 *lineHalfVec, GfxLightModelInterface *model)
{
  LightProxyMesh v11; 
  __int64 v13; 
  __m128 v; 
  __m128 v15; 
  __m128 v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v33; 
  __m128 v34; 
  __m128 v35; 
  __int128 v37; 
  __int64 v39; 
  unsigned int numVerts; 
  const float4 *v43; 
  const float4 *v44; 
  __m128 v45; 
  unsigned int v47; 
  unsigned int v48; 
  unsigned int v50; 
  float v51; 
  __m128 v52; 
  unsigned int v53; 
  unsigned int v54; 
  __m128 v55; 
  __m128 v56; 
  __m128 v57; 
  float v58; 
  __m128 v59; 
  __m128 v60; 
  __m128 v61; 
  __m128 v71; 
  __m128 v72; 
  unsigned int v77; 
  unsigned int v79; 
  unsigned int v80; 
  unsigned int v81; 
  __int64 v82; 
  unsigned int v83; 
  unsigned __int16 v84; 
  bool v85; 
  unsigned int v86; 
  unsigned int v87; 
  int v88; 
  unsigned int v89; 
  unsigned __int16 v90; 
  __int64 v91; 
  unsigned int v92; 
  LightProxyMesh v93; 
  __int64 v94; 
  __int64 v95; 
  unsigned int v96; 
  unsigned int numIndices; 
  unsigned int v98; 
  __int64 v99; 
  unsigned __int16 v100; 
  unsigned int v101; 
  unsigned __int16 v102; 
  unsigned int v103; 
  unsigned int v104; 
  unsigned int v105; 
  unsigned int v106; 
  unsigned int v107; 
  __int64 v108; 
  unsigned int v109; 
  unsigned int v110; 
  unsigned int v111; 
  __int64 v112; 
  __int64 v113; 
  __int64 v114; 
  unsigned __int16 v115; 
  unsigned __int16 v116; 
  unsigned int v117; 
  float v118; 
  float v119; 
  LightProxyMesh v120; 
  float c; 
  float s; 
  unsigned int v123; 
  __int64 v124; 
  unsigned int v125; 
  float v126; 
  int v127; 
  unsigned int v128; 
  const float4 *v129; 
  __m128 v130; 
  vec4_t plane; 
  float4 vertInOut; 
  __int128 v133; 
  __int128 v134; 

  v11 = type;
  v13 = kCircleSegment;
  v129 = topVec;
  v125 = kSphereSegment;
  v128 = kCircleSegment;
  v120 = type;
  v = (*axis)[2].v;
  v15 = (*axis)[0].v;
  v16 = (*axis)[1].v;
  v17 = (float)kSphereSegment;
  v130 = v;
  v126 = coneAngleHalf / v17;
  if ( kCircleSegment <= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1895, ASSERT_TYPE_ASSERT, "(kCircleSegment > 2)", (const char *)&queryFormat, "kCircleSegment > 2") )
    __debugbreak();
  if ( v11 )
  {
    v19 = (float)v13;
    v20 = 3.1415927 / (float)(v19 - 1.0);
    if ( v11 == MESH_LEFT_SIDE )
      LODWORD(v20) = COERCE_UNSIGNED_INT(3.1415927 / (float)(v19 - 1.0)) ^ _xmm;
  }
  else
  {
    v18 = (float)v13;
    v20 = 6.2831855 / v18;
  }
  FastSinCos(coneAngleHalf, &s, &c);
  FastSinCos(0.0, &v119, &v118);
  _XMM1 = _xmm;
  __asm
  {
    vinsertps xmm1, xmm1, xmm0, 0
    vinsertps xmm1, xmm1, xmm3, 10h
    vinsertps xmm1, xmm1, xmm4, 20h ; ' '
  }
  v133 = _XMM1;
  FastSinCos(coneAngleHalf, &s, &c);
  FastSinCos(v20, &v119, &v118);
  _XMM1 = _xmm;
  __asm
  {
    vinsertps xmm1, xmm1, xmm2, 0
    vinsertps xmm1, xmm1, xmm3, 10h
    vinsertps xmm1, xmm1, xmm4, 20h ; ' '
  }
  v134 = _XMM1;
  FastSinCos(coneAngleHalf - (float)(coneAngleHalf / v17), &s, &c);
  FastSinCos(0.0, &v119, &v118);
  _XMM1 = _xmm;
  __asm
  {
    vinsertps xmm1, xmm1, xmm0, 0
    vinsertps xmm1, xmm1, xmm3, 10h
    vinsertps xmm1, xmm1, xmm4, 20h ; ' '
  }
  vertInOut.v = _XMM1;
  PlaneFromPoints(&plane, (const vec3_t *)&v133, (const vec3_t *)&v134, (const vec3_t *)&vertInOut, 0.001);
  v33 = coneRadius / COERCE_FLOAT(LODWORD(plane.v[3]) & _xmm);
  if ( v33 < 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1927, ASSERT_TYPE_ASSERT, "(coneRadiusScale >= 1.0f)", (const char *)&queryFormat, "coneRadiusScale >= 1.0f") )
    __debugbreak();
  v35 = (__m128)LODWORD(coneRadius);
  v35.m128_f32[0] = coneRadius * v33;
  v34 = v35;
  v37 = LODWORD(FLOAT_1_0);
  *(float *)&v37 = 1.0 / cosf_0(v20 * 0.5);
  _XMM0 = v37;
  __asm { vmaxss  xmm6, xmm0, xmm13 }
  v127 = _XMM6;
  if ( *(float *)&_XMM6 < 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1938, ASSERT_TYPE_ASSERT, "(circleRadiusScale >= 1.0f)", (const char *)&queryFormat, "circleRadiusScale >= 1.0f") )
    __debugbreak();
  s = *(float *)&model->numVerts;
  v39 = model->positionsStride * LODWORD(s);
  model->numVerts = LODWORD(s) + 1;
  _XMM1 = topVec->v;
  _RCX = (float *)((char *)model->positions + v39);
  *_RCX = COERCE_FLOAT(*topVec);
  __asm
  {
    vextractps dword ptr [rcx+4], xmm1, 1
    vextractps dword ptr [rcx+8], xmm1, 2
  }
  if ( model->numVerts > 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1943, ASSERT_TYPE_ASSERT, "(model->numVerts <= MAX_LIGHT_MODEL_VERTS)", (const char *)&queryFormat, "model->numVerts <= MAX_LIGHT_MODEL_VERTS") )
    __debugbreak();
  numVerts = model->numVerts;
  v43 = lineCenter;
  v44 = lineHalfVec;
  c = *(float *)&model->numVerts;
  v45 = _mm_shuffle_ps(v34, v34, 0);
  _XMM2 = _mm128_add_ps(_mm128_mul_ps(v45, v), topVec->v);
  vertInOut.v = _XMM2;
  if ( lineCenter && lineHalfVec )
  {
    R_AdjustSpotLightModelVertForLineLight(&vertInOut, *(double *)v34.m128_u64, lineCenter, lineHalfVec);
    numVerts = model->numVerts;
    _XMM2 = vertInOut.v;
  }
  v47 = numVerts + 1;
  v48 = model->positionsStride * numVerts;
  model->numVerts = v47;
  _RAX = (float *)((char *)model->positions + v48);
  *_RAX = _XMM2.m128_f32[0];
  __asm
  {
    vextractps dword ptr [rax+4], xmm2, 1
    vextractps dword ptr [rax+8], xmm2, 2
  }
  if ( model->numVerts > 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1953, ASSERT_TYPE_ASSERT, "(model->numVerts <= MAX_LIGHT_MODEL_VERTS)", (const char *)&queryFormat, "model->numVerts <= MAX_LIGHT_MODEL_VERTS") )
    __debugbreak();
  v50 = 0;
  v123 = 0;
  if ( kSphereSegment )
  {
    do
    {
      v51 = (float)v50;
      FastSinCos((float)(v51 + 1.0) * v126, &v119, &v118);
      v52 = v34;
      v53 = 0;
      v54 = model->numVerts;
      LODWORD(v124) = model->numVerts;
      v52.m128_f32[0] = (float)(v34.m128_f32[0] * v119) * *(float *)&_XMM6;
      v55 = v52;
      v56 = v34;
      v56.m128_f32[0] = v34.m128_f32[0] * v118;
      v57 = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v56, v56, 0), v), v129->v);
      if ( (_DWORD)v13 )
      {
        do
        {
          v58 = (float)v53;
          FastSinCos((float)(v58 * v20) + 4.712389, &v119, &v118);
          v60 = v55;
          v60.m128_f32[0] = v55.m128_f32[0] * v118;
          v59 = v60;
          v61 = v55;
          v61.m128_f32[0] = v55.m128_f32[0] * v119;
          _XMM6 = _mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v59, v59, 0), v15), v57), _mm128_mul_ps(_mm_shuffle_ps(v61, v61, 0), v16));
          if ( v43 && v44 )
          {
            _XMM1 = _mm128_mul_ps(v44->v, v44->v);
            __asm { vinsertps xmm2, xmm1, xmm1, 8 }
            _XMM1 = _mm128_mul_ps(_mm128_sub_ps(_XMM6, v43->v), v44->v);
            __asm
            {
              vhaddps xmm0, xmm2, xmm2
              vinsertps xmm2, xmm1, xmm1, 8
              vhaddps xmm3, xmm0, xmm0
              vhaddps xmm0, xmm2, xmm2
              vhaddps xmm1, xmm0, xmm0
            }
            _XMM0.m128_u64[1] = *((_QWORD *)&_XMM1 + 1);
            *(double *)_XMM0.m128_u64 = I_fclamp(*(float *)&_XMM1 / *(float *)&_XMM3, -1.0, 1.0);
            v71 = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM0, _XMM0, 0), v44->v), v43->v);
            v72 = _mm128_sub_ps(_XMM6, v71);
            _XMM0 = _mm128_mul_ps(v72, v72);
            __asm
            {
              vinsertps xmm1, xmm0, xmm0, 8
              vhaddps xmm2, xmm1, xmm1
              vhaddps xmm0, xmm2, xmm2
            }
            _XMM6 = _mm128_add_ps(_mm128_mul_ps(_mm128_div_ps(v72, _mm_sqrt_ps(_XMM0)), v45), v71);
          }
          v77 = model->positionsStride * model->numVerts++;
          _RAX = (float *)((char *)model->positions + v77);
          *_RAX = _XMM6.m128_f32[0];
          __asm
          {
            vextractps dword ptr [rax+4], xmm6, 1
            vextractps dword ptr [rax+8], xmm6, 2
          }
          if ( model->numVerts >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1989, ASSERT_TYPE_ASSERT, "(model->numVerts < MAX_LIGHT_MODEL_VERTS)", (const char *)&queryFormat, "model->numVerts < MAX_LIGHT_MODEL_VERTS") )
            __debugbreak();
          ++v53;
        }
        while ( v53 < (unsigned int)v13 );
        LODWORD(_XMM6) = v127;
        v54 = v124;
        v11 = v120;
      }
      if ( v11 )
      {
        v91 = (unsigned int)(v13 - 1);
        if ( v123 )
        {
          if ( (_DWORD)v13 != 1 )
          {
            numIndices = model->numIndices;
            v98 = v54 - v13;
            vertInOut.v.m128_u64[0] = (unsigned int)(v13 - 1);
            do
            {
              if ( numIndices + 5 >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1688, ASSERT_TYPE_ASSERT, "(firstIndex + 5 < MAX_LIGHT_MODEL_INDICES)", (const char *)&queryFormat, "firstIndex + 5 < MAX_LIGHT_MODEL_INDICES") )
                __debugbreak();
              *(_QWORD *)plane.v = numIndices + 2;
              v99 = numIndices + 1;
              v124 = numIndices + 3;
              *(_QWORD *)&v133 = numIndices + 4;
              *(_QWORD *)&v134 = numIndices + 5;
              v100 = truncate_cast<unsigned short,unsigned int>(v98);
              v101 = v98 + v13 + 1;
              v85 = v120 == MESH_LEFT_SIDE;
              model->indices[numIndices] = v100;
              if ( v85 )
              {
                model->indices[v99] = truncate_cast<unsigned short,unsigned int>(v101);
                model->indices[*(_QWORD *)plane.v] = truncate_cast<unsigned short,unsigned int>(v98 + 1);
                model->indices[v124] = truncate_cast<unsigned short,unsigned int>(v98);
                v102 = truncate_cast<unsigned short,unsigned int>(v98 + v13);
                v103 = v98 + v13 + 1;
                model->indices[v133] = v102;
              }
              else
              {
                model->indices[v99] = truncate_cast<unsigned short,unsigned int>(v98 + 1);
                model->indices[*(_QWORD *)plane.v] = truncate_cast<unsigned short,unsigned int>(v101);
                model->indices[v124] = truncate_cast<unsigned short,unsigned int>(v98);
                model->indices[v133] = truncate_cast<unsigned short,unsigned int>(v101);
                v103 = v98 + v13;
              }
              ++v98;
              model->indices[v134] = truncate_cast<unsigned short,unsigned int>(v103);
              model->numIndices += 6;
              v85 = vertInOut.v.m128_u64[0]-- == 1;
              numIndices = model->numIndices;
            }
            while ( !v85 );
            goto LABEL_69;
          }
        }
        else if ( (_DWORD)v13 != 1 )
        {
          v92 = model->numIndices;
          v93 = v120;
          *(_QWORD *)plane.v = v91;
          do
          {
            v94 = v92 + 2;
            if ( (unsigned int)v94 >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1718, ASSERT_TYPE_ASSERT, "(firstIndex + 2 < MAX_LIGHT_MODEL_INDICES)", (const char *)&queryFormat, "firstIndex + 2 < MAX_LIGHT_MODEL_INDICES") )
              __debugbreak();
            v95 = v92 + 1;
            model->indices[v92] = truncate_cast<unsigned short,unsigned int>(LODWORD(c));
            if ( v93 == MESH_LEFT_SIDE )
            {
              model->indices[v95] = truncate_cast<unsigned short,unsigned int>(v54);
              v96 = v54 + 1;
            }
            else
            {
              model->indices[v95] = truncate_cast<unsigned short,unsigned int>(v54 + 1);
              v96 = v54;
            }
            ++v54;
            model->indices[v94] = truncate_cast<unsigned short,unsigned int>(v96);
            model->numIndices += 3;
            v85 = (*(_QWORD *)plane.v)-- == 1i64;
            v92 = model->numIndices;
          }
          while ( !v85 );
          LODWORD(v13) = v128;
          goto LABEL_69;
        }
      }
      else if ( v123 )
      {
        if ( (_DWORD)v13 )
        {
          v86 = model->numIndices;
          v87 = v54 - v13;
          *(_QWORD *)plane.v = (unsigned int)v13;
          v88 = v13 - v54 + 1;
          LODWORD(v124) = v88;
          do
          {
            v89 = v54 + (v87 + v88) % (unsigned int)v13;
            if ( v86 + 5 >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1688, ASSERT_TYPE_ASSERT, "(firstIndex + 5 < MAX_LIGHT_MODEL_INDICES)", (const char *)&queryFormat, "firstIndex + 5 < MAX_LIGHT_MODEL_INDICES") )
              __debugbreak();
            model->indices[v86] = truncate_cast<unsigned short,unsigned int>(v87);
            model->indices[v86 + 1] = truncate_cast<unsigned short,unsigned int>(v89 - v13);
            model->indices[v86 + 2] = truncate_cast<unsigned short,unsigned int>(v89);
            model->indices[v86 + 3] = truncate_cast<unsigned short,unsigned int>(v87);
            model->indices[v86 + 4] = truncate_cast<unsigned short,unsigned int>(v89);
            v90 = truncate_cast<unsigned short,unsigned int>(v87 + v13);
            ++v87;
            model->indices[v86 + 5] = v90;
            model->numIndices += 6;
            v85 = (*(_QWORD *)plane.v)-- == 1i64;
            v86 = model->numIndices;
            v88 = v124;
          }
          while ( !v85 );
          goto LABEL_69;
        }
      }
      else if ( (_DWORD)v13 )
      {
        v79 = model->numIndices;
        v80 = 1 - v54;
        LODWORD(v124) = 1 - v54;
        v81 = v54;
        *(_QWORD *)plane.v = (unsigned int)v13;
        do
        {
          v82 = v79 + 2;
          v83 = v54 + (v81 + v80) % (unsigned int)v13;
          if ( (unsigned int)v82 >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1718, ASSERT_TYPE_ASSERT, "(firstIndex + 2 < MAX_LIGHT_MODEL_INDICES)", (const char *)&queryFormat, "firstIndex + 2 < MAX_LIGHT_MODEL_INDICES") )
            __debugbreak();
          model->indices[v79] = truncate_cast<unsigned short,unsigned int>(LODWORD(c));
          model->indices[v79 + 1] = truncate_cast<unsigned short,unsigned int>(v83);
          v84 = truncate_cast<unsigned short,unsigned int>(v81++);
          model->indices[v82] = v84;
          model->numIndices += 3;
          v85 = (*(_QWORD *)plane.v)-- == 1i64;
          v79 = model->numIndices;
          v80 = v124;
        }
        while ( !v85 );
LABEL_69:
        v43 = lineCenter;
        v11 = v120;
      }
      v = v130;
      v44 = lineHalfVec;
      v50 = v123 + 1;
      v123 = v50;
    }
    while ( v50 < v125 );
  }
  v104 = model->numVerts - v13;
  if ( v11 )
  {
    v110 = v13 - 1;
    if ( v110 )
    {
      v111 = model->numIndices;
      v112 = v110;
      do
      {
        v113 = v111 + 2;
        if ( (unsigned int)v113 >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1718, ASSERT_TYPE_ASSERT, "(firstIndex + 2 < MAX_LIGHT_MODEL_INDICES)", (const char *)&queryFormat, "firstIndex + 2 < MAX_LIGHT_MODEL_INDICES") )
          __debugbreak();
        v114 = v111 + 1;
        v115 = truncate_cast<unsigned short,unsigned int>(LODWORD(s));
        v85 = v120 == MESH_LEFT_SIDE;
        model->indices[v111] = v115;
        if ( v85 )
        {
          v116 = truncate_cast<unsigned short,unsigned int>(v104 + 1);
          v117 = v104;
          model->indices[v114] = v116;
        }
        else
        {
          model->indices[v114] = truncate_cast<unsigned short,unsigned int>(v104);
          v117 = v104 + 1;
        }
        ++v104;
        model->indices[v113] = truncate_cast<unsigned short,unsigned int>(v117);
        model->numIndices += 3;
        v111 = model->numIndices;
        --v112;
      }
      while ( v112 );
    }
  }
  else if ( (_DWORD)v13 )
  {
    v105 = model->numIndices;
    v106 = 1 - v104;
    v107 = model->numVerts - v13;
    v125 = 1 - v104;
    vertInOut.v.m128_u64[0] = (unsigned int)v13;
    do
    {
      v108 = v105 + 2;
      v109 = v104 + (v106 + v107) % (unsigned int)v13;
      if ( (unsigned int)v108 >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1718, ASSERT_TYPE_ASSERT, "(firstIndex + 2 < MAX_LIGHT_MODEL_INDICES)", (const char *)&queryFormat, "firstIndex + 2 < MAX_LIGHT_MODEL_INDICES") )
        __debugbreak();
      model->indices[v105] = truncate_cast<unsigned short,unsigned int>(LODWORD(s));
      model->indices[v105 + 1] = truncate_cast<unsigned short,unsigned int>(v107++);
      model->indices[v108] = truncate_cast<unsigned short,unsigned int>(v109);
      model->numIndices += 3;
      v85 = vertInOut.v.m128_u64[0]-- == 1;
      v105 = model->numIndices;
      v106 = v125;
    }
    while ( !v85 );
  }
}

/*
==============
R_GenerateSpotLightModelMain
==============
*/

void __fastcall R_GenerateSpotLightModelMain(const vec3_t *lightOrigin, const vec3_t *lightDirIn, double cosHalfFov, float radius, const vec3_t *bulbLength, const float bulbRadius, GfxLightModelInterface *model)
{
  const float4 *lineCenter; 
  float v9; 
  __int128 v11; 
  unsigned int numVerts; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  const float4 *lineHalfVec; 
  __m128 v19; 
  __m128 v23; 
  __m128 v26; 
  __m128 v28; 
  float v39; 
  __m128 v40; 
  __m128 v41; 
  __m128 v46; 
  __m128 v51; 
  float v52; 
  float v53; 
  __int128 v54; 
  float v55; 
  __m128 v56; 
  unsigned int v57; 
  unsigned int numIndices; 
  unsigned int v59; 
  int v60; 
  unsigned int v61; 
  unsigned __int16 v62; 
  bool v63; 
  unsigned int v64; 
  unsigned int v65; 
  int v66; 
  __int64 v67; 
  unsigned __int16 v68; 
  unsigned int val; 
  unsigned int vala; 
  unsigned int v71; 
  unsigned int v72; 
  int topVec; 
  unsigned int topVec_4; 
  float4 topVec_8; 
  float4 axis[3]; 
  float4 v; 
  __m128 v78; 
  __m128 v79; 

  lineCenter = NULL;
  LODWORD(v9) = LODWORD(lightDirIn->v[0]) ^ _xmm;
  *(_QWORD *)&model->numVerts = 0i64;
  v11 = *(_OWORD *)&cosHalfFov;
  if ( radius < 1.01 || (numVerts = 0, *(float *)&cosHalfFov == 1.0) )
  {
    Com_PrintWarning(8, "Small spot light radius = %f, cosHalfFov = %f\n", radius, *(float *)&cosHalfFov);
    numVerts = model->numVerts;
  }
  v13 = acosf_0(*(float *)&cosHalfFov);
  v14 = lightOrigin->v[0];
  v15 = v13;
  v16 = bulbLength->v[0];
  lineHalfVec = NULL;
  v.v.m128_i32[3] = 0;
  v19 = v.v;
  v19.m128_f32[0] = v14;
  _XMM13 = v19;
  __asm
  {
    vinsertps xmm13, xmm13, dword ptr [rdi+4], 10h
    vinsertps xmm13, xmm13, dword ptr [rdi+8], 20h ; ' '
  }
  v.v = _XMM13;
  v.v.m128_i32[3] = 0;
  v23 = v.v;
  v23.m128_f32[0] = v9;
  _XMM12 = v23;
  __asm
  {
    vinsertps xmm12, xmm12, xmm11, 10h
    vinsertps xmm12, xmm12, xmm14, 20h ; ' '
  }
  v.v = _XMM12;
  v26 = _mm_shuffle_ps(_XMM12, _XMM12, 201);
  v.v.m128_i32[3] = 0;
  v28 = v.v;
  v28.m128_f32[0] = v16;
  _XMM11 = v28;
  __asm
  {
    vinsertps xmm11, xmm11, dword ptr [r15+4], 10h
    vinsertps xmm11, xmm11, dword ptr [r15+8], 20h ; ' '
  }
  _XMM0 = _mm128_mul_ps(_XMM11, _XMM11);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
  }
  _XMM3 = _mm128_mul_ps(_mm128_div_ps(_XMM11, _mm_sqrt_ps(_XMM0)), _XMM12);
  __asm
  {
    vinsertps xmm0, xmm3, xmm3, 8
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm14, xmm1, xmm1
  }
  LODWORD(v39) = _XMM14 & _xmm;
  v40 = _mm_shuffle_ps(_XMM12, _XMM12, 210);
  v41 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM11, _XMM11, 210), v26), _mm128_mul_ps(_mm_shuffle_ps(_XMM11, _XMM11, 201), v40));
  _XMM0 = _mm128_mul_ps(v41, v41);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
  }
  v.v = _mm128_div_ps(v41, _mm_sqrt_ps(_XMM0));
  v46 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v.v, v.v, 201), v40), _mm128_mul_ps(_mm_shuffle_ps(v.v, v.v, 210), v26));
  _XMM0 = _mm128_mul_ps(v46, v46);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm1, xmm2, xmm2
  }
  v51 = _mm128_div_ps(v46, _mm_sqrt_ps(_XMM1));
  v78 = _XMM13;
  v79 = _XMM11;
  v52 = FLOAT_1_0;
  if ( v39 > 0.0099999998 )
  {
    lineCenter = (const float4 *)&v78;
    lineHalfVec = (const float4 *)&v79;
    v53 = acosf_0(v39);
    v52 = 1.0 / cosf_0(1.5707964 - v53);
  }
  v54 = v11;
  axis[1] = (float4)v.v;
  v55 = radius * v52;
  *(float *)&v54 = (float)(*(float *)&v11 * bulbRadius) / fsqrt(1.0 - (float)(*(float *)&v11 * *(float *)&v11));
  axis[0] = (float4)v51;
  v56 = _mm128_mul_ps(_mm_shuffle_ps((__m128)(v54 ^ (unsigned int)_xmm), (__m128)(v54 ^ (unsigned int)_xmm), 0), _XMM12);
  v.v.m128_u64[0] = 3i64;
  topVec_8.v = _mm128_add_ps(_mm128_sub_ps(_XMM13, _XMM11), v56);
  axis[2] = (float4)_XMM12;
  R_GenerateSpotLightModelInternal(MESH_LEFT_SIDE, 4u, 3u, &topVec_8, (const float4 (*)[3])axis, v15, v55, lineCenter, lineHalfVec, model);
  v57 = model->numVerts;
  topVec_8.v = _mm128_add_ps(_mm128_add_ps(_XMM13, _XMM11), v56);
  R_GenerateSpotLightModelInternal(MESH_RIGHT_SIDE, 4u, 3u, &topVec_8, (const float4 (*)[3])axis, v15, v55, lineCenter, lineHalfVec, model);
  numIndices = model->numIndices;
  v59 = v57 + 2;
  topVec_8.v.m128_u64[0] = 3i64;
  v60 = 1;
  do
  {
    topVec = v59;
    val = numVerts + v60;
    v61 = v60 + v57;
    v60 = v59 - v57;
    v71 = v61;
    if ( numIndices + 5 >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1688, ASSERT_TYPE_ASSERT, "(firstIndex + 5 < MAX_LIGHT_MODEL_INDICES)", (const char *)&queryFormat, "firstIndex + 5 < MAX_LIGHT_MODEL_INDICES") )
      __debugbreak();
    model->indices[numIndices] = truncate_cast<unsigned short,unsigned int>(val);
    model->indices[numIndices + 1] = truncate_cast<unsigned short,unsigned int>(v71);
    model->indices[numIndices + 2] = truncate_cast<unsigned short,unsigned int>(v59);
    model->indices[numIndices + 3] = truncate_cast<unsigned short,unsigned int>(val);
    model->indices[numIndices + 4] = truncate_cast<unsigned short,unsigned int>(v59);
    v62 = truncate_cast<unsigned short,unsigned int>(numVerts - v57 + v59);
    v59 += 4;
    model->indices[numIndices + 5] = v62;
    model->numIndices += 6;
    v63 = topVec_8.v.m128_u64[0]-- == 1;
    numIndices = model->numIndices;
  }
  while ( !v63 );
  topVec_8.v.m128_u64[0] = __PAIR64__(numVerts, v57);
  topVec_8.v.m128_i32[2] = numVerts + v60;
  topVec_8.v.m128_i32[3] = topVec;
  R_AddQuadToLightModel((const unsigned int *)&topVec_8, model, 0);
  v64 = model->numIndices;
  v65 = numVerts + 5;
  v66 = 1;
  do
  {
    v72 = v65;
    vala = v66 + v57;
    topVec_4 = numVerts + v66;
    v66 = v65 - numVerts;
    v67 = v64 + 5;
    if ( (unsigned int)v67 >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1688, ASSERT_TYPE_ASSERT, "(firstIndex + 5 < MAX_LIGHT_MODEL_INDICES)", (const char *)&queryFormat, "firstIndex + 5 < MAX_LIGHT_MODEL_INDICES") )
      __debugbreak();
    model->indices[v64] = truncate_cast<unsigned short,unsigned int>(vala);
    model->indices[v64 + 1] = truncate_cast<unsigned short,unsigned int>(topVec_4);
    model->indices[v64 + 2] = truncate_cast<unsigned short,unsigned int>(v65);
    model->indices[v64 + 3] = truncate_cast<unsigned short,unsigned int>(vala);
    model->indices[v64 + 4] = truncate_cast<unsigned short,unsigned int>(v65);
    v68 = truncate_cast<unsigned short,unsigned int>(v65 + v57 - numVerts);
    v65 += 4;
    model->indices[v67] = v68;
    model->numIndices += 6;
    v63 = v.v.m128_u64[0]-- == 1;
    v64 = model->numIndices;
  }
  while ( !v63 );
  v.v.m128_u64[0] = __PAIR64__(v57, numVerts);
  v.v.m128_i32[2] = v66 + v57;
  v.v.m128_i32[3] = v72;
  R_AddQuadToLightModel((const unsigned int *)&v, model, 0);
  if ( model->numIndices >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 2195, ASSERT_TYPE_ASSERT, "(model->numIndices < MAX_LIGHT_MODEL_INDICES)", (const char *)&queryFormat, "model->numIndices < MAX_LIGHT_MODEL_INDICES") )
    __debugbreak();
  if ( model->numVerts >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 2196, ASSERT_TYPE_ASSERT, "(model->numVerts < MAX_LIGHT_MODEL_VERTS)", (const char *)&queryFormat, "model->numVerts < MAX_LIGHT_MODEL_VERTS") )
    __debugbreak();
}

/*
==============
R_GetFrustumLightWords
==============
*/
__int64 R_GetFrustumLightWords(const unsigned int frame)
{
  return (s_frustumLights.lightCount[frame] + 31) >> 5;
}

/*
==============
R_GetFrustumLightsClusterBuffer
==============
*/
$6354FE9254625F25F9BF74DDC4774D51 *R_GetFrustumLightsClusterBuffer()
{
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v1; 

  Surface = R_RT_Handle::GetSurface(&s_frustumLights.maskClusterBuffer);
  v1 = Surface;
  if ( (Surface->m_rtFlagsInternal & 8) != 0 )
    return &Surface->1080;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  return &v1->1080;
}

/*
==============
R_GetFrustumLightsReadLightBuffer
==============
*/
GfxWrappedBuffer *R_GetFrustumLightsReadLightBuffer(const GfxViewInfo *viewInfo)
{
  return &s_frustumLights.readLightBuffers[viewInfo->input.data->frustumLightsIndex];
}

/*
==============
R_GetFrustumLightsTileBuffer
==============
*/
$6354FE9254625F25F9BF74DDC4774D51 *R_GetFrustumLightsTileBuffer()
{
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v1; 

  Surface = R_RT_Handle::GetSurface(&s_frustumLights.maskBuffer);
  v1 = Surface;
  if ( (Surface->m_rtFlagsInternal & 8) != 0 )
    return &Surface->1080;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  return &v1->1080;
}

/*
==============
R_GetFrustumLightsZbinBuffer
==============
*/
GfxWrappedBuffer *R_GetFrustumLightsZbinBuffer(const GfxViewInfo *viewInfo)
{
  return &s_frustumLights.readZBinBuffers[viewInfo->input.data->frustumLightsIndex];
}

/*
==============
R_InitFrustumLights
==============
*/

void __fastcall R_InitFrustumLights(double _XMM0_8)
{
  unsigned int sceneWidth; 
  unsigned int sceneHeight; 
  unsigned int v3; 
  unsigned int VoxelSizeY; 
  unsigned int v5; 
  unsigned int **writeZBinData; 
  unsigned int v7; 
  unsigned __int16 **p_verticesCounts; 
  unsigned __int16 *verticesCounts; 
  GfxWrappedBuffer *p_vertexBuffer; 
  __int64 v11; 
  GfxWrappedBuffer *readZBinBuffers; 
  unsigned __int16 *v13; 
  R_RT_BufferHandle v15; 

  sceneWidth = vidConfig.sceneWidth;
  sceneHeight = vidConfig.sceneHeight;
  s_frustumLights.frame = 0;
  s_frustumLights.maxTileCountX = (vidConfig.sceneWidth + 7) >> 3;
  s_frustumLights.maxTileCountY = (vidConfig.sceneHeight + 7) >> 3;
  v3 = 4 * R_VOL_GetVoxelSizeX(NULL);
  VoxelSizeY = R_VOL_GetVoxelSizeY(NULL);
  s_frustumLights.maxClusterCountZ = 32;
  v5 = 4 * VoxelSizeY;
  writeZBinData = s_frustumLights.writeZBinData;
  v7 = (v3 + sceneWidth - 1) / v3;
  p_verticesCounts = &s_frustumLights.dynamicLightModels[0].verticesCounts;
  s_frustumLights.maxClusterCountX = v7;
  verticesCounts = s_frustumLights.dynamicLightsModelsData[0].verticesCounts;
  p_vertexBuffer = &s_frustumLights.dynamicLightModels[0].vertexBuffer;
  v11 = 2i64;
  s_frustumLights.maxClusterCountY = (v5 + sceneHeight - 1) / v5;
  readZBinBuffers = s_frustumLights.readZBinBuffers;
  do
  {
    *(writeZBinData - 2) = (unsigned int *)PMem_Alloc(0x6000ui64, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "frustum lights write");
    *writeZBinData = (unsigned int *)PMem_Alloc(0x8000ui64, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "frustum lights zbin data write");
    R_CreateGfxWrappedBuffer(readZBinBuffers - 2, GfxWrappedBuffer_Structured, 96, 0x100u, GFX_DATA_FORMAT_R32_UINT, 2u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "frustum lights buffer");
    R_CreateGfxWrappedBuffer(readZBinBuffers, GfxWrappedBuffer_Structured, 4, 0x2000u, GFX_DATA_FORMAT_R32_UINT, 2u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "frustum lights zbin buffer");
    R_CreateGfxWrappedBuffer(readZBinBuffers - 6, GfxWrappedBuffer_Raw, 20, 0x100u, GFX_DATA_FORMAT_R32_UINT, 0x202u, D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT, NULL, NULL, "frustum lights indirect draw buffer tiled");
    R_CreateGfxWrappedBuffer(readZBinBuffers - 4, GfxWrappedBuffer_Raw, 20, 0x200u, GFX_DATA_FORMAT_R32_UINT, 0x202u, D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT, NULL, NULL, "frustum lights indirect draw buffer clustered");
    R_CreateGfxWrappedBuffer(p_vertexBuffer - 1, GfxWrappedBuffer_Raw, 2, 0x10000u, GFX_DATA_FORMAT_R32_UINT, 0x82u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "frustum lights dynamic lights indexBuffer");
    R_CreateGfxWrappedBuffer(p_vertexBuffer, GfxWrappedBuffer_Raw, 16, 0x2000u, GFX_DATA_FORMAT_R32_UINT, 2u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "frustum lights dynamic lights vertexBuffer");
    *p_verticesCounts = verticesCounts;
    *(p_verticesCounts - 1) = verticesCounts - 32;
    ++writeZBinData;
    ++readZBinBuffers;
    *(p_verticesCounts - 3) = verticesCounts + 32;
    p_verticesCounts += 16;
    p_vertexBuffer += 4;
    *(p_verticesCounts - 18) = verticesCounts + 96;
    *(p_verticesCounts - 15) = verticesCounts + 160;
    v13 = verticesCounts + 65696;
    verticesCounts += 131264;
    *(p_verticesCounts - 14) = v13;
    --v11;
  }
  while ( v11 );
  v15.m_surfaceID = 0;
  v15.m_tracking.m_allocCounter = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v15.m_tracking.m_name = _XMM0;
  s_frustumLights.maskBuffer = v15;
  v15.m_surfaceID = 0;
  v15.m_tracking.m_allocCounter = 0;
  *(_OWORD *)&v15.m_tracking.m_name = _XMM0;
  s_frustumLights.maskClusterBuffer = v15;
}

/*
==============
R_IsCameraInsideLightMeshVolume
==============
*/
char R_IsCameraInsideLightMeshVolume(unsigned int lightIndex, const vec3_t *cameraOrigin, const float margin)
{
  unsigned __int8 *v4; 
  unsigned __int16 *v5; 
  int v6; 
  unsigned int v7; 
  __int128 v9; 
  __int64 v12; 
  __m128 v13; 
  __m128 v14; 
  __m128 v15; 
  __m128 v16; 
  __int128 v26; 

  v4 = &rgp.world->frustumLights.vertices[16 * rgp.world->frustumLights.verticesOffsets[lightIndex]];
  v5 = &rgp.world->frustumLights.indices[rgp.world->frustumLights.indices[lightIndex]];
  v6 = 0;
  HIDWORD(v26) = 0;
  v7 = rgp.world->frustumLights.indicesCounts[lightIndex] / 3u;
  v9 = v26;
  *(float *)&v9 = cameraOrigin->v[0];
  _XMM7 = v9;
  __asm
  {
    vinsertps xmm7, xmm7, dword ptr [r10+4], 10h
    vinsertps xmm7, xmm7, dword ptr [r10+8], 20h ; ' '
  }
  if ( !v7 )
    return 1;
  while ( 1 )
  {
    v12 = (unsigned int)(3 * v6);
    v13 = *(__m128 *)&v4[16 * v5[v12]];
    v14 = _mm128_sub_ps(*(__m128 *)&v4[16 * v5[(unsigned int)(v12 + 1)]], v13);
    v15 = _mm128_sub_ps(*(__m128 *)&v4[16 * v5[(unsigned int)(v12 + 2)]], v13);
    v16 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v14, v14, 201), _mm_shuffle_ps(v15, v15, 210)), _mm128_mul_ps(_mm_shuffle_ps(v14, v14, 210), _mm_shuffle_ps(v15, v15, 201)));
    _XMM1 = _mm128_mul_ps(v16, v16);
    __asm
    {
      vinsertps xmm0, xmm1, xmm1, 8
      vhaddps xmm2, xmm0, xmm0
      vhaddps xmm0, xmm2, xmm2
    }
    _XMM1 = _mm128_mul_ps(_mm128_sub_ps(v13, _XMM7), _mm128_div_ps(v16, _mm_sqrt_ps(_XMM0)));
    __asm
    {
      vinsertps xmm2, xmm1, xmm1, 8
      vhaddps xmm0, xmm2, xmm2
      vhaddps xmm1, xmm0, xmm0
    }
    if ( *(float *)&_XMM1 >= margin )
      break;
    if ( ++v6 >= v7 )
      return 1;
  }
  return 0;
}

/*
==============
R_RenderFrustumLightsClusterBuffer
==============
*/
void R_RenderFrustumLightsClusterBuffer(GfxCmdBufContext *context, const GfxViewInfo *viewInfo, const GfxBackEndData *data, R_RT_BufferHandle *maskClusterBuffer)
{
  __int128 v4; 
  __int128 v5; 
  __int64 frustumLightsIndex; 
  GfxCmdBufSourceState *source; 
  const GfxBackEndData *v8; 
  GfxCmdBufState *state; 
  unsigned int v11; 
  unsigned int voxelCountY; 
  unsigned int voxelCountX; 
  GfxCmdBufSourceState *v14; 
  int v15; 
  unsigned int v16; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  unsigned int *v23; 
  bool *v24; 
  __int64 v25; 
  unsigned int primaryLightCount; 
  GfxFrustumLights *p_frustumLights; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  unsigned int v31; 
  int v32; 
  unsigned int v33; 
  __int64 v34; 
  unsigned int v35; 
  __int64 v36; 
  __int64 v37; 
  int v38; 
  __int64 v39; 
  __int64 v40; 
  GfxCmdBufState *bufferData; 
  int v42; 
  __int64 v43; 
  float v44; 
  float width; 
  float height; 
  float v47; 
  float v48; 
  GfxConstantBufferDesc *v49; 
  __m256i *v50; 
  __m256i *v51; 
  float v52; 
  float v53; 
  float v54; 
  float v55; 
  GfxCmdBufContext *v56; 
  bool v57; 
  void *v58; 
  void *v59; 
  R_RT_Handle *v60; 
  const R_RT_Surface *Surface; 
  unsigned int v64; 
  __int64 v65; 
  GfxFrustumLights *v66; 
  GfxWrappedBuffer *p_vertexBuffer; 
  __int64 v68; 
  char v69; 
  bool v70; 
  unsigned int *v71; 
  __int64 v72; 
  __int64 v73; 
  unsigned int v74; 
  GfxCmdBufSourceState *v75; 
  __int64 v78; 
  GfxCmdBufContext v79; 
  GfxConstantBufferDesc cbuff; 
  bool *i; 
  R_RT_Handle *v82; 
  GfxConstantBufferDesc result; 
  GfxViewport viewport; 
  unsigned int drawCount[2]; 
  __int64 v86; 
  int v87[4]; 
  _OWORD dataa[647]; 

  frustumLightsIndex = data->frustumLightsIndex;
  source = context->source;
  v8 = data;
  state = context->state;
  v11 = s_frustumLights.lightCount[frustumLightsIndex];
  v82 = maskClusterBuffer;
  v79.source = (GfxCmdBufSourceState *)viewInfo;
  v75 = source;
  result.bufferData = state;
  v73 = frustumLightsIndex;
  v74 = v11;
  if ( v11 > 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1268, ASSERT_TYPE_ASSERT, "(frustumLightCount <= 256)", (const char *)&queryFormat, "frustumLightCount <= FRUSTUM_GRID_MAX_LIGHTS") )
    __debugbreak();
  if ( !s_frustumLights.setupForFrame[frustumLightsIndex] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1269, ASSERT_TYPE_ASSERT, "(s_frustumLights.setupForFrame[frame])", (const char *)&queryFormat, "s_frustumLights.setupForFrame[frame]") )
    __debugbreak();
  if ( v11 )
  {
    source->viewStatsTarget = GFX_VIEW_STATS_OPAQUE;
    voxelCountY = viewInfo->frustumGrid.voxelCountY;
    voxelCountX = viewInfo->frustumGrid.voxelCountX;
    v14 = source;
    dataa[642] = v4;
    dataa[641] = v5;
    R_SetRenderTargetSize(source, voxelCountX, voxelCountY, GFX_USE_VIEWPORT_FOR_VIEW);
    viewport.width = viewInfo->frustumGrid.voxelCountX;
    v15 = 0;
    viewport.height = viewInfo->frustumGrid.voxelCountY;
    *(_QWORD *)&viewport.x = 0i64;
    R_SetViewportStruct(v14, &viewport);
    R_SetViewportAndScissorSeparate(context->state, &viewport, &viewport);
    R_BeginViewInternal(v14, &viewInfo->sceneDef, (const GfxViewParms *)viewInfo, &viewInfo->viewParmsSet.frames[1].viewParms);
    R_Set3D(v14);
    if ( state->depthRangeType )
      R_ChangeDepthRange(state, GFX_DEPTH_RANGE_SCENE);
    R_UpdateViewport(v14, &v14->sceneViewport);
    v87[0] = 0;
    v16 = s_frustumLights.staticOutsideLights[frustumLightsIndex] + s_frustumLights.staticInsideLights[frustumLightsIndex];
    v17 = s_frustumLights.dynamicOutsideLights[frustumLightsIndex] + s_frustumLights.dynamicInsideLights[frustumLightsIndex];
    *(_QWORD *)drawCount = 0i64;
    v86 = 0i64;
    v87[1] = v16;
    v87[2] = v17 + v16;
    v18 = s_frustumLights.staticWalkFrontLights[frustumLightsIndex] + v17 + v16;
    v19 = 0;
    v87[3] = v18;
    v20 = v73 << 8;
    v21 = 0i64;
    v78 = 0i64;
    v22 = v73 << 7;
    v23 = s_frustumLights.lightToSceneLight[v73];
    v24 = s_frustumLights.insideLight[v73];
    v71 = v23;
    for ( i = v24; ; v24 = i )
    {
      v25 = *v23;
      if ( (unsigned int)v25 >= v8->sceneLightCount || (unsigned __int8)(v8->sceneLights[v25].type - 2) > 1u )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1306, ASSERT_TYPE_ASSERT, "(lightIndex < data->sceneLightCount && ( data->sceneLights[lightIndex].type == 3 || data->sceneLights[lightIndex].type == 2 ))", (const char *)&queryFormat, "lightIndex < data->sceneLightCount && ( data->sceneLights[lightIndex].type == GFX_LIGHT_TYPE_OMNI || data->sceneLights[lightIndex].type == GFX_LIGHT_TYPE_SPOT )") )
          __debugbreak();
        v20 = v73 << 8;
      }
      v70 = v24[v21];
      if ( v70 || (v69 = 1, s_frustumLights.singleSlice[0][v21 + v20]) )
        v69 = 0;
      primaryLightCount = rgp.world->primaryLightCount;
      if ( (unsigned int)v25 >= primaryLightCount )
      {
        if ( !*(unsigned __int16 **)((char *)&s_frustumLights.dynamicLightModels[0].indices + v22) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 566, ASSERT_TYPE_ASSERT, "(s_frustumLights.dynamicLightModels[frame].indices != nullptr)", (const char *)&queryFormat, "s_frustumLights.dynamicLightModels[frame].indices != nullptr") )
          __debugbreak();
        p_frustumLights = (GfxFrustumLights *)((char *)s_frustumLights.dynamicLightModels + v22);
        primaryLightCount = rgp.world->primaryLightCount;
        v28 = (unsigned int)v25 - primaryLightCount;
      }
      else if ( *(unsigned __int16 **)((char *)&s_frustumLights.staticLightModels[0].indices + v22) )
      {
        p_frustumLights = (GfxFrustumLights *)((char *)s_frustumLights.staticLightModels + v22);
        v28 = v19;
      }
      else
      {
        p_frustumLights = &rgp.world->frustumLights;
        v28 = (unsigned int)v25;
      }
      v29 = 0i64;
      if ( (unsigned int)v25 >= primaryLightCount )
        v29 = 1i64;
      v30 = 5i64 * (drawCount[v29] + v87[v29]);
      *((_DWORD *)dataa + v30) = p_frustumLights->indicesCounts[v28];
      *((_DWORD *)dataa + v30 + 1) = 1;
      *((_DWORD *)dataa + v30 + 2) = p_frustumLights->indicesOffsets[(unsigned int)v28];
      v31 = p_frustumLights->verticesOffsets[(unsigned int)v28];
      if ( v31 + p_frustumLights->verticesCounts[(unsigned int)v28] >= 0x800000 )
      {
        LODWORD(v68) = v31 + p_frustumLights->verticesCounts[(unsigned int)v28];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\frustum_grid_cshared.hlsl", 72, ASSERT_TYPE_ASSERT, "( vertexOffset + vertexCount < ( 1 << ( 32 - 8 - 1 ) ) )", "VertexId %d is too big to fit in the bitfield.", v68) )
          __debugbreak();
      }
      if ( v19 >= 0x100 )
      {
        LODWORD(v68) = v19;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\frustum_grid_cshared.hlsl", 74, ASSERT_TYPE_ASSERT, "( lightIndex < ( 1 << 8 ) )", "Light index %d is too big to fit in the bitfield.", v68) )
          __debugbreak();
      }
      v32 = 0;
      *((_DWORD *)&dataa[1] + v30) = 0;
      if ( !v70 )
        v32 = 0x800000;
      ++drawCount[v29];
      *((_DWORD *)dataa + v30 + 3) = v31 | (v19 << 24) | v32;
      if ( v69 )
      {
        v33 = rgp.world->primaryLightCount;
        v34 = 3i64;
        if ( (unsigned int)v25 < v33 )
          v34 = 2i64;
        v35 = drawCount[v34];
        v36 = 5i64 * (v35 + v87[v34]);
        *(_OWORD *)((char *)dataa + 4 * v36) = *(_OWORD *)((char *)dataa + 4 * v30);
        *((_DWORD *)&dataa[1] + v36) = *((_DWORD *)&dataa[1] + v30);
        v37 = 3i64;
        if ( (unsigned int)v25 < v33 )
          v37 = 2i64;
        drawCount[v37] = v35 + 1;
      }
      v8 = data;
      v21 = v78 + 1;
      v20 = v73 << 8;
      v23 = v71 + 1;
      ++v19;
      ++v78;
      ++v71;
      if ( v19 >= v74 )
        break;
    }
    R_UpdateGfxWrappedBuffer(&s_frustumLights.indirectDrawBuffersClustered[v73], dataa, 20 * (v86 + drawCount[1] + drawCount[0] + HIDWORD(v86)));
    v38 = 0;
    v39 = 0i64;
    v40 = 4i64;
    do
    {
      if ( v87[v39] != v38 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1340, ASSERT_TYPE_ASSERT, "(argsOffsets[i] == argsSum)", (const char *)&queryFormat, "argsOffsets[i] == argsSum") )
        __debugbreak();
      v38 += drawCount[v39++];
      --v40;
    }
    while ( v40 );
    bufferData = (GfxCmdBufState *)result.bufferData;
    v42 = v86;
    v43 = v73;
    if ( v38 != s_frustumLights.staticWalkFrontLights[v73] + v74 + s_frustumLights.dynamicWalkFrontLights[v73] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1343, ASSERT_TYPE_ASSERT, "(argsSum == frustumLightCount + s_frustumLights.staticWalkFrontLights[frame] + s_frustumLights.dynamicWalkFrontLights[frame])", (const char *)&queryFormat, "argsSum == frustumLightCount + s_frustumLights.staticWalkFrontLights[frame] + s_frustumLights.dynamicWalkFrontLights[frame]") )
      __debugbreak();
    v44 = r_frustumLightProxyConsExpand->current.value + 1.0;
    width = (float)v75->sceneViewport.width;
    height = (float)v75->sceneViewport.height;
    v47 = v44 / height;
    v48 = v44 / width;
    v49 = R_AllocateConstantBufferBegin(&result, (CmdBufState *)result.bufferData, CBUFFER_BSP_SURFACE_INDEX, 0x860u);
    v50 = (__m256i *)v79.source;
    cbuff = *v49;
    v51 = (__m256i *)cbuff.bufferData;
    *(__m256i *)cbuff.bufferData = *(__m256i *)v79.source->matrices.matrix[2].m.m[0].v;
    v51[1] = v50[5];
    v52 = (float)viewport.width;
    *(float *)&v72 = v52;
    v53 = (float)viewport.height;
    *((float *)&v72 + 1) = v53;
    v51[2].m256i_i64[0] = v72;
    v54 = (float)v50[374].m256i_u32[0];
    *(float *)&v72 = v54;
    v55 = (float)v50[374].m256i_u32[1];
    *((float *)&v72 + 1) = v55;
    v51[2].m256i_i64[1] = v72;
    *(float *)&v72 = v48;
    *((float *)&v72 + 1) = v47;
    v51[2].m256i_i64[2] = v72;
    memcpy_0(&v51[3], s_frustumLights.depthBounds[v73], 0x800ui64);
    R_AllocateConstantBufferEnd(bufferData, &cbuff);
    v56 = context;
    while ( v15 )
    {
      if ( v15 == 2 )
      {
        if ( !R_BeginMaterial(bufferData, rgp.frustumLightsClusterWalkFront, TECHNIQUE_EMISSIVE) )
        {
          v57 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1371, ASSERT_TYPE_ASSERT, "(R_BeginMaterial( state, rgp.frustumLightsClusterWalkFront, TECHNIQUE_DEFAULT ))", (const char *)&queryFormat, "R_BeginMaterial( state, rgp.frustumLightsClusterWalkFront, TECHNIQUE_DEFAULT )");
LABEL_60:
          if ( v57 )
            __debugbreak();
        }
        goto LABEL_62;
      }
LABEL_69:
      v64 = drawCount[v15];
      if ( v64 )
      {
        v65 = v43 << 7;
        if ( (v15 & 1) != 0 )
        {
          v66 = (GfxFrustumLights *)((char *)s_frustumLights.dynamicLightModels + v65);
        }
        else if ( *(unsigned __int16 **)((char *)&s_frustumLights.staticLightModels[0].indices + v65) )
        {
          v66 = (GfxFrustumLights *)((char *)s_frustumLights.staticLightModels + v65);
        }
        else
        {
          v66 = &rgp.world->frustumLights;
        }
        R_SetIndicesWithType(bufferData, v66->indexBuffer.buffer, DXGI_FORMAT_R16_UINT);
        if ( v75 == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1494, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
          __debugbreak();
        p_vertexBuffer = &v66->vertexBuffer;
        v56 = context;
        v75->input.codeBuffers[51] = p_vertexBuffer;
        v79 = *context;
        R_SetupPassStableArgsInternal(&v79, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp(1391)");
        R_DrawMultiIndexedIndirectPrimitive(bufferData, s_frustumLights.indirectDrawBuffersClustered[v73].buffer, 20 * v87[v15], v64);
        v43 = v73;
      }
      if ( ((v15 - 1) & 0xFFFFFFFD) != 0 || (R_GfxComputeWaitForGraphics(bufferData), v42 + HIDWORD(v86)) )
      {
        if ( (unsigned int)++v15 < 4 )
          continue;
      }
      return;
    }
    if ( !R_BeginMaterial(bufferData, rgp.frustumLightsClusterMarkBack, TECHNIQUE_EMISSIVE) )
    {
      v57 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1369, ASSERT_TYPE_ASSERT, "(R_BeginMaterial( state, rgp.frustumLightsClusterMarkBack, TECHNIQUE_DEFAULT ))", (const char *)&queryFormat, "R_BeginMaterial( state, rgp.frustumLightsClusterMarkBack, TECHNIQUE_DEFAULT )");
      goto LABEL_60;
    }
LABEL_62:
    v79 = *v56;
    R_SetupPass(&v79);
    v58 = cbuff.bufferData;
    bufferData->constants[0][9].bufferSize = cbuff.bufferSize;
    bufferData->constants[0][9].bufferData = v58;
    bufferData->constantsDirty[0] |= 0x200u;
    v59 = cbuff.bufferData;
    bufferData->constants[1][9].bufferSize = cbuff.bufferSize;
    v60 = v82;
    bufferData->constants[1][9].bufferData = v59;
    bufferData->constantsDirty[1] |= 0x200u;
    Surface = R_RT_Handle::GetSurface(v60);
    if ( (Surface->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 589, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
      __debugbreak();
    if ( (Surface->m_rtFlags & 0x1000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 590, ASSERT_TYPE_ASSERT, "(surface->m_rtFlags & R_RT_Flag_RWView)", (const char *)&queryFormat, "surface->m_rtFlags & R_RT_Flag_RWView") )
      __debugbreak();
    _XMM0 = *v56;
    __asm { vpextrq rcx, xmm0, 1 }
    R_SetDescriptorInRange(*(GfxDescriptorState **)(_RCX + 2480), PS_RW_VIEW_RANGE, 4u, Surface->m_buffer.m_wrappedBuffer.rwView.rwView);
    goto LABEL_69;
  }
}

/*
==============
R_RenderFrustumLightsTileBuffer
==============
*/
void R_RenderFrustumLightsTileBuffer(GfxCmdBufContext *context, const GfxViewInfo *viewInfo, const GfxBackEndData *data, R_RT_DepthHandle *depthRt, R_RT_BufferHandle *maskBuffer)
{
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v9; 
  __int128 v10; 
  __int128 v11; 
  __int64 frustumLightsIndex; 
  GfxCmdBufSourceState *source; 
  GfxCmdBufState *state; 
  const GfxBackEndData *v16; 
  unsigned int v17; 
  GfxViewParms *v18; 
  GfxViewParms *v19; 
  float value; 
  const R_RT_Surface *Surface; 
  unsigned int v22; 
  __int64 v23; 
  unsigned int v24; 
  bool *v25; 
  __int64 v26; 
  unsigned int *v27; 
  __int64 v28; 
  bool v29; 
  unsigned int primaryLightCount; 
  GfxFrustumLights *p_frustumLights; 
  __int64 v32; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  unsigned int v36; 
  int v37; 
  GfxCmdBufState *v38; 
  __int64 v39; 
  GfxCmdBufContext *v40; 
  char v41; 
  int v42; 
  __int64 v43; 
  const GfxShaderBufferRWView *RWView; 
  unsigned int v46; 
  __int64 v47; 
  unsigned int v48; 
  char v50; 
  bool v51; 
  __int64 v52; 
  float v53; 
  __int64 v54; 
  Material **frustumLightsTileStencil1; 
  GfxFrustumLights *v56; 
  ID3D12Resource *buffer; 
  GfxDevice *device; 
  int v59; 
  __int64 v60; 
  int v61; 
  unsigned __int64 m_pCurrent; 
  GfxCmdBufContext v63; 
  int v66; 
  unsigned int v68; 
  bool *v69; 
  float *v70; 
  unsigned int *v71; 
  __int64 v72; 
  bool v73; 
  float v77; 
  float v81; 
  float v86; 
  float v87; 
  const GfxDevice *v88; 
  __int64 v89; 
  char v90; 
  bool v91; 
  bool enabled; 
  bool v93; 
  unsigned int v94; 
  unsigned int v95; 
  unsigned int v96; 
  __int64 v97; 
  GfxCmdBufState *v98; 
  __int64 v99; 
  unsigned int v100; 
  float v101; 
  float v102; 
  unsigned int v103; 
  GfxCmdBufContext v105; 
  const GfxBackEndData *v106; 
  GfxViewParms *viewParms; 
  GfxCmdBufSourceState *v108; 
  __int64 v109; 
  const GfxShaderBufferRWView *v110; 
  const GfxWrappedBuffer *v111; 
  __int64 v112; 
  __int64 v113; 
  GfxCmdBufContext v114; 
  GfxCmdBufContext v115; 
  GfxCmdBufContext v116; 
  __int64 v117; 
  int v118; 
  int v119; 
  char v120[16]; 
  unsigned __int64 v121; 
  __int64 v122; 
  __int64 v123; 
  int v124; 
  unsigned int v125; 
  unsigned int v126; 
  unsigned int v127; 
  int dataa[1280]; 
  __int128 v129; 
  __int128 v130; 
  __int128 v131; 
  __int128 v132; 
  __int128 v133; 
  __int128 v134; 
  __int128 v135; 

  frustumLightsIndex = data->frustumLightsIndex;
  source = context->source;
  state = context->state;
  v16 = data;
  v17 = s_frustumLights.lightCount[frustumLightsIndex];
  v106 = data;
  viewParms = (GfxViewParms *)viewInfo;
  v105.source = (GfxCmdBufSourceState *)maskBuffer;
  v108 = source;
  v98 = state;
  v97 = frustumLightsIndex;
  v94 = v17;
  if ( v17 > 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1005, ASSERT_TYPE_ASSERT, "(frustumLightCount <= 256)", (const char *)&queryFormat, "frustumLightCount <= FRUSTUM_GRID_MAX_LIGHTS") )
    __debugbreak();
  if ( !s_frustumLights.setupForFrame[frustumLightsIndex] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1006, ASSERT_TYPE_ASSERT, "(s_frustumLights.setupForFrame[frame])", (const char *)&queryFormat, "s_frustumLights.setupForFrame[frame]") )
    __debugbreak();
  if ( v94 )
  {
    v18 = viewParms;
    v19 = viewParms;
    source->viewStatsTarget = GFX_VIEW_STATS_OPAQUE;
    R_BeginViewInternal(source, (const GfxSceneDef *)&v18[3].camera.48, v19, v18 + 1);
    R_Set3D(source);
    if ( state->depthRangeType )
      R_ChangeDepthRange(state, GFX_DEPTH_RANGE_SCENE);
    R_UpdateViewport(source, &source->sceneViewport);
    value = r_frustumLightProxyDebugExpand->current.value;
    v102 = value;
    enabled = r_frustumLightProxyUseStencil->current.enabled;
    Surface = R_RT_Handle::GetSurface(depthRt);
    v22 = s_frustumLights.staticInsideLights[frustumLightsIndex];
    v23 = (unsigned int)Surface->m_rtFlags >> 14;
    v125 = s_frustumLights.staticOutsideLights[frustumLightsIndex];
    v109 = v23;
    v122 = 0i64;
    v100 = (v23 & 1) + 1;
    v126 = v22 + v125;
    LODWORD(Surface) = s_frustumLights.dynamicOutsideLights[frustumLightsIndex];
    v24 = 0;
    v123 = 0i64;
    v124 = 0;
    v127 = v125 + v22 + (_DWORD)Surface;
    v25 = s_frustumLights.insideLight[v97];
    v26 = v97 << 7;
    v27 = s_frustumLights.lightToSceneLight[v97];
    do
    {
      v28 = *v27;
      if ( ((unsigned int)v28 >= v16->sceneLightCount || (unsigned __int8)(v16->sceneLights[v28].type - 2) > 1u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1049, ASSERT_TYPE_ASSERT, "(lightIndex < data->sceneLightCount && ( data->sceneLights[lightIndex].type == 3 || data->sceneLights[lightIndex].type == 2 ))", (const char *)&queryFormat, "lightIndex < data->sceneLightCount && ( data->sceneLights[lightIndex].type == GFX_LIGHT_TYPE_OMNI || data->sceneLights[lightIndex].type == GFX_LIGHT_TYPE_SPOT )") )
        __debugbreak();
      v29 = *v25;
      primaryLightCount = rgp.world->primaryLightCount;
      if ( (unsigned int)v28 >= primaryLightCount )
      {
        if ( !*(unsigned __int16 **)((char *)&s_frustumLights.dynamicLightModels[0].indices + v26) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 566, ASSERT_TYPE_ASSERT, "(s_frustumLights.dynamicLightModels[frame].indices != nullptr)", (const char *)&queryFormat, "s_frustumLights.dynamicLightModels[frame].indices != nullptr") )
          __debugbreak();
        p_frustumLights = (GfxFrustumLights *)((char *)s_frustumLights.dynamicLightModels + v26);
        primaryLightCount = rgp.world->primaryLightCount;
        v32 = (unsigned int)v28 - primaryLightCount;
      }
      else if ( *(unsigned __int16 **)((char *)&s_frustumLights.staticLightModels[0].indices + v26) )
      {
        p_frustumLights = (GfxFrustumLights *)((char *)s_frustumLights.staticLightModels + v26);
        v32 = v24;
      }
      else
      {
        p_frustumLights = &rgp.world->frustumLights;
        v32 = (unsigned int)v28;
      }
      v33 = 2i64;
      if ( (unsigned int)v28 < primaryLightCount )
        v33 = 0i64;
      v34 = v29 + v33;
      v35 = 5i64 * (unsigned int)(*((_DWORD *)&v122 + v34) + *(&v124 + v34));
      dataa[v35] = p_frustumLights->indicesCounts[v32];
      dataa[v35 + 1] = 1;
      dataa[v35 + 2] = p_frustumLights->indicesOffsets[(unsigned int)v32];
      v36 = p_frustumLights->verticesOffsets[(unsigned int)v32];
      if ( v36 + p_frustumLights->verticesCounts[(unsigned int)v32] >= 0x800000 )
      {
        LODWORD(v89) = v36 + p_frustumLights->verticesCounts[(unsigned int)v32];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\frustum_grid_cshared.hlsl", 72, ASSERT_TYPE_ASSERT, "( vertexOffset + vertexCount < ( 1 << ( 32 - 8 - 1 ) ) )", "VertexId %d is too big to fit in the bitfield.", v89) )
          __debugbreak();
      }
      if ( v24 >= 0x100 )
      {
        LODWORD(v89) = v24;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\frustum_grid_cshared.hlsl", 74, ASSERT_TYPE_ASSERT, "( lightIndex < ( 1 << 8 ) )", "Light index %d is too big to fit in the bitfield.", v89) )
          __debugbreak();
      }
      ++*((_DWORD *)&v122 + v34);
      v37 = v36 | (v24++ << 24);
      v16 = v106;
      ++v27;
      dataa[v35 + 3] = v37;
      ++v25;
      dataa[v35 + 4] = 0;
    }
    while ( v24 < v94 );
    v38 = v98;
    v39 = (__int64)v108;
    v40 = context;
    v41 = v109;
    v42 = HIDWORD(v123) + v123 + v122 + HIDWORD(v122);
    if ( v42 )
    {
      v43 = v97;
      v135 = v5;
      v134 = v6;
      v133 = v7;
      v132 = _XMM12;
      v131 = v9;
      v130 = v10;
      v129 = v11;
      v111 = &s_frustumLights.indirectDrawBuffersTiled[v97];
      R_UpdateGfxWrappedBuffer(v111, dataa, 20 * v42);
      RWView = R_RT_BufferHandle::GetRWView((R_RT_BufferHandle *)v105.source);
      _XMM13 = LODWORD(FLOAT_0_984375);
      v46 = 0;
      v110 = RWView;
      v47 = 0i64;
      v96 = 0;
      v99 = 0i64;
      v48 = 0;
      __asm { vxorpd  xmm12, xmm12, xmm12 }
      do
      {
        v50 = v48 & 1;
        v90 = v48 & 1;
        v93 = v48 >= 2;
        if ( *(_DWORD *)((char *)&v122 + v47) )
        {
          v51 = enabled && !v50;
          v91 = v51;
          v52 = v41 & 1;
          v103 = v51 + 1;
          v53 = (float)v100;
          v54 = v43 << 7;
          v101 = v53;
          v95 = 0;
          v113 = v52;
          v112 = v43 << 7;
          do
          {
            if ( v51 )
            {
              frustumLightsTileStencil1 = rgp.frustumLightsTileStencil1;
              if ( !v46 )
                frustumLightsTileStencil1 = rgp.frustumLightsTileStencil0;
            }
            else
            {
              frustumLightsTileStencil1 = rgp.frustumLightsTile;
              if ( v50 )
                frustumLightsTileStencil1 = rgp.frustumLightsTileInside;
            }
            if ( !R_BeginMaterial(v38, frustumLightsTileStencil1[v52], TECHNIQUE_EMISSIVE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1108, ASSERT_TYPE_ASSERT, "(R_BeginMaterial( state, materialArray[maskShaderVariant], TECHNIQUE_DEFAULT ))", (const char *)&queryFormat, "R_BeginMaterial( state, materialArray[maskShaderVariant], TECHNIQUE_DEFAULT )") )
              __debugbreak();
            v105 = *v40;
            R_SetupPass(&v105);
            if ( v48 < 2 )
            {
              if ( *(unsigned __int16 **)((char *)&s_frustumLights.staticLightModels[0].indices + v54) )
                v56 = (GfxFrustumLights *)((char *)s_frustumLights.staticLightModels + v54);
              else
                v56 = &rgp.world->frustumLights;
            }
            else
            {
              v56 = (GfxFrustumLights *)((char *)s_frustumLights.dynamicLightModels + v54);
            }
            buffer = v56->indexBuffer.buffer;
            if ( !R_IsLockedIfGfxImmediateContext(v38->device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
              __debugbreak();
            if ( v38->indexBuffer != buffer || v38->indexType != DXGI_FORMAT_R16_UINT || !v38->isIndexBufferBound )
            {
              device = v38->device;
              if ( !device && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1645, ASSERT_TYPE_ASSERT, "(device)", (const char *)&queryFormat, "device") )
                __debugbreak();
              v38->indexBuffer = buffer;
              v59 = 57;
              v119 = 57;
              v38->indexType = DXGI_FORMAT_R16_UINT;
              if ( buffer )
              {
                ((void (__fastcall *)(ID3D12Resource *, char *))buffer->m_pFunction[3].AddRef)(buffer, v120);
                if ( v121 >= 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1658, ASSERT_TYPE_ASSERT, "(ibDesc.Width < 0xffffffff)", (const char *)&queryFormat, "ibDesc.Width < UINT_MAX") )
                  __debugbreak();
                v60 = ((__int64 (__fastcall *)(ID3D12Resource *))buffer->m_pFunction[3].Release)(buffer);
                v61 = v121;
                v117 = v60;
                if ( v121 > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)v121, "unsigned", v121) )
                  __debugbreak();
                v59 = v119;
                v118 = v61;
              }
              else
              {
                v117 = 0i64;
                v118 = 0;
              }
              m_pCurrent = (unsigned __int64)device->m_Putter.m_pCurrent;
              if ( (unsigned int *)m_pCurrent >= device->m_Putter.m_pLimit_Api )
              {
                ((void (__fastcall *)(GfxDevice *, __int64 *))device->m_pFunction[15].Release)(device, &v117);
              }
              else
              {
                *(_DWORD *)m_pCurrent = v59 + 1073854208;
                *(_QWORD *)(m_pCurrent + 4) = v117;
                device->m_Putter.m_pCurrent = (unsigned int *)(m_pCurrent + 12);
              }
              v43 = v97;
              v38->isIndexBufferBound = buffer != NULL;
            }
            if ( v39 == -1792 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1494, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
              __debugbreak();
            *(_QWORD *)(v39 + 9368) = &v56->vertexBuffer;
            *(float *)(v39 + 2036) = value;
            v63 = *context;
            *(float *)(v39 + 2040) = v53;
            *(float *)(v39 + 2044) = v53;
            *(_DWORD *)(v39 + 2032) = 0;
            ++*(_WORD *)(v39 + 10194);
            v114 = v63;
            R_SetupPassStableArgsInternal(&v114, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp(1117)");
            v115 = *context;
            R_SetupPassPerObjectArgsInternal(&v115, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp(1118)");
            v116 = *context;
            R_SetupPassPerPrimArgsInternal(&v116, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp(1119)");
            _XMM0 = *context;
            __asm { vpextrq rcx, xmm0, 1 }
            R_SetDescriptorInRange(*(GfxDescriptorState **)(_RCX + 2480), PS_RW_VIEW_RANGE, 4u, v110->rwView);
            v66 = *(int *)((char *)&v124 + v99);
            _XMM15 = LODWORD(FLOAT_0_015625);
            v105.source = (GfxCmdBufSourceState *)v94;
            v68 = 20 * v66;
            v69 = s_frustumLights.insideLight[v43];
            v70 = (float *)&s_frustumLights.depthBounds[v43][0] + 1;
            v71 = s_frustumLights.lightToSceneLight[v43];
            do
            {
              v72 = *v71;
              if ( ((unsigned int)v72 >= v106->sceneLightCount || (unsigned __int8)(v106->sceneLights[v72].type - 2) > 1u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1130, ASSERT_TYPE_ASSERT, "(lightIndex < data->sceneLightCount && ( data->sceneLights[lightIndex].type == 3 || data->sceneLights[lightIndex].type == 2 ))", (const char *)&queryFormat, "lightIndex < data->sceneLightCount && ( data->sceneLights[lightIndex].type == GFX_LIGHT_TYPE_OMNI || data->sceneLights[lightIndex].type == GFX_LIGHT_TYPE_SPOT )") )
                __debugbreak();
              v73 = *v69;
              if ( *v69 == v90 && (unsigned int)v72 >= rgp.world->primaryLightCount == v93 )
              {
                _XMM0 = *((unsigned int *)v70 - 1);
                _XMM6 = *(unsigned int *)v70;
                __asm { vmaxss  xmm0, xmm0, xmm14 }
                v77 = viewParms->viewProjectionMatrix.m.m[3].v[2];
                *(double *)&_XMM0 = I_fclamp(v77 / *(float *)&_XMM0, 0.0, 1.0);
                _XMM1 = v73;
                __asm
                {
                  vpcmpeqd xmm3, xmm1, xmm2
                  vblendvps xmm1, xmm15, xmm13, xmm3
                }
                v81 = *(float *)&_XMM0 * *(float *)&_XMM1;
                _XMM0 = v73;
                __asm
                {
                  vpcmpeqd xmm1, xmm0, xmm2
                  vblendvps xmm0, xmm13, xmm10, xmm1
                  vmaxss  xmm1, xmm6, xmm14
                }
                v86 = v81 + *(float *)&_XMM0;
                *(double *)&_XMM0 = I_fclamp(v77 / *(float *)&_XMM1, 0.0, 1.0);
                v87 = *(float *)&_XMM0 * 0.984375;
                if ( ((float)(*(float *)&_XMM0 * 0.984375) < 0.0 || v87 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 2279, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( depthBoundsMin ) && ( depthBoundsMin ) <= ( 1.0f )", "depthBoundsMin not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v87, *(double *)&_XMM12, DOUBLE_1_0) )
                  __debugbreak();
                if ( (v86 < 0.0 || v86 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 2280, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( depthBoundsMax ) && ( depthBoundsMax ) <= ( 1.0f )", "depthBoundsMax not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v86, *(double *)&_XMM12, DOUBLE_1_0) )
                  __debugbreak();
                if ( v87 > v86 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 2281, ASSERT_TYPE_ASSERT, "( depthBoundsMin ) <= ( depthBoundsMax )", "%s <= %s\n\t%g, %g", "depthBoundsMin", "depthBoundsMax", v87, v86) )
                  __debugbreak();
                if ( v87 != v38->depthBoundsMin || v86 != v38->depthBoundsMax )
                {
                  v38->depthBoundsMin = v87;
                  v38->depthBoundsMax = v86;
                  if ( (v87 < 0.0 || v87 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_setstate_d3d.h", 1012, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( minZ ) && ( minZ ) <= ( 1.0f )", "minZ not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v87, *(double *)&_XMM12, DOUBLE_1_0) )
                    __debugbreak();
                  if ( (v86 < 0.0 || v86 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_setstate_d3d.h", 1013, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( maxZ ) && ( maxZ ) <= ( 1.0f )", "maxZ not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v86, *(double *)&_XMM12, DOUBLE_1_0) )
                    __debugbreak();
                  if ( v87 > v86 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_setstate_d3d.h", 1014, ASSERT_TYPE_ASSERT, "(minZ <= maxZ)", (const char *)&queryFormat, "minZ <= maxZ") )
                    __debugbreak();
                  if ( !R_IsLockedIfGfxImmediateContext(v38->device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
                    __debugbreak();
                  v38->device->m_pFunction[22].Release(v38->device);
                }
                R_DrawMultiIndexedIndirectPrimitive(v38, v111->buffer, v68, 1u);
                v68 += 20;
              }
              ++v71;
              v70 += 2;
              ++v69;
              --v105.source;
            }
            while ( v105.source );
            v53 = v101;
            value = v102;
            v39 = (__int64)v108;
            v40 = context;
            v48 = v96;
            v50 = v90;
            v54 = v112;
            v46 = v95 + 1;
            v43 = v97;
            v51 = v91;
            v52 = v113;
            v95 = v46;
          }
          while ( v46 < v103 );
          v47 = v99;
          v46 = 0;
        }
        v41 = v109;
        ++v48;
        v47 += 4i64;
        v96 = v48;
        v99 = v47;
      }
      while ( v48 < 4 );
      v88 = v38->device;
      v38->depthBoundsMin = 0.0;
      v38->depthBoundsMax = 1.0;
      if ( !R_IsLockedIfGfxImmediateContext(v88) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
        __debugbreak();
      v38->device->m_pFunction[22].Release(v38->device);
    }
  }
}

/*
==============
R_SetFrustumLightsComputeResources
==============
*/
void R_SetFrustumLightsComputeResources(ComputeCmdBufState *state, unsigned int maskSlot, const int useCluster)
{
  const GfxBackEndData *data; 
  R_RT_BufferHandle *p_maskClusterBuffer; 
  GfxShaderBufferView *Surface; 
  GfxShaderBufferView *views; 

  data = state->data;
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 809, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  views = &s_frustumLights.readLightBuffers[0].view + 2 * data->frustumLightsIndex;
  R_SetComputeViews(state, 19, 1, (const GfxShaderBufferView *const *)&views);
  p_maskClusterBuffer = &s_frustumLights.maskClusterBuffer;
  if ( !useCluster )
    p_maskClusterBuffer = &s_frustumLights.maskBuffer;
  Surface = (GfxShaderBufferView *)R_RT_Handle::GetSurface(p_maskClusterBuffer);
  if ( (Surface->view & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 582, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  views = Surface + 68;
  R_SetComputeViews(state, maskSlot, 1, (const GfxShaderBufferView *const *)&views);
}

/*
==============
R_SetupFrustumLightsUpdateBuffers
==============
*/
void R_SetupFrustumLightsUpdateBuffers(const GfxBackEndData *data)
{
  __int64 frustumLightsIndex; 
  bool *v2; 
  unsigned int v3; 
  __int64 v4; 
  const void *v5; 

  frustumLightsIndex = data->frustumLightsIndex;
  v2 = &s_frustumLights.setupForFrame[frustumLightsIndex];
  if ( !*v2 )
  {
    s_frustumLights.setupForFrame[(unsigned int)frustumLightsIndex ^ 1i64] = 0;
    v3 = s_frustumLights.lightCount[frustumLightsIndex];
    if ( v3 > 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 895, ASSERT_TYPE_ASSERT, "(frustumLightCount <= 256)", (const char *)&queryFormat, "frustumLightCount <= FRUSTUM_GRID_MAX_LIGHTS") )
      __debugbreak();
    R_UpdateGfxWrappedBuffer(&s_frustumLights.readLightBuffers[frustumLightsIndex], s_frustumLights.writeLightData[frustumLightsIndex], 96 * v3);
    R_UpdateGfxWrappedBuffer(&s_frustumLights.readZBinBuffers[frustumLightsIndex], s_frustumLights.writeZBinData[frustumLightsIndex], 0x8000u);
    v4 = frustumLightsIndex << 7;
    R_UpdateGfxWrappedBuffer((const GfxWrappedBuffer *)((char *)&s_frustumLights.dynamicLightModels[0].indexBuffer + v4), *(const void **)((char *)&s_frustumLights.dynamicLightModels[0].indices + v4), 2 * *(unsigned int *)((char *)&s_frustumLights.dynamicLightModels[0].totalIndicesCount + v4));
    R_UpdateGfxWrappedBuffer((const GfxWrappedBuffer *)((char *)&s_frustumLights.dynamicLightModels[0].vertexBuffer + v4), *(const void **)((char *)&s_frustumLights.dynamicLightModels[0].vertices + v4), 16 * *(unsigned int *)((char *)&s_frustumLights.dynamicLightModels[0].totalVerticesCount + v4));
    v5 = *(unsigned __int16 **)((char *)&s_frustumLights.staticLightModels[0].indices + v4);
    if ( v5 )
    {
      R_UpdateGfxWrappedBuffer((const GfxWrappedBuffer *)((char *)&s_frustumLights.staticLightModels[0].indexBuffer + v4), v5, 2 * *(unsigned int *)((char *)&s_frustumLights.staticLightModels[0].totalIndicesCount + v4));
      R_UpdateGfxWrappedBuffer((const GfxWrappedBuffer *)((char *)&s_frustumLights.staticLightModels[0].vertexBuffer + v4), *(const void **)((char *)&s_frustumLights.staticLightModels[0].vertices + v4), 16 * *(unsigned int *)((char *)&s_frustumLights.staticLightModels[0].totalVerticesCount + v4));
    }
    *v2 = 1;
  }
}

/*
==============
R_ToggleFrustumLightsFrame
==============
*/
__int64 R_ToggleFrustumLightsFrame()
{
  __int64 result; 

  result = s_frustumLights.frame;
  s_frustumLights.frame = (LOBYTE(s_frustumLights.frame) - 1) & 1;
  return result;
}

