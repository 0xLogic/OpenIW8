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

__int64 __fastcall FrustumGrid_ClusterZFromScreenPos(double screenZ, const vec4_t *volumetricDepth)
{
  __int64 result; 

  __asm
  {
    vsubss  xmm2, xmm0, cs:__real@40800000
    vdivss  xmm0, xmm2, dword ptr [rdx]; val
    vmovaps [rsp+88h+var_18], xmm6
    vsubss  xmm6, xmm2, dword ptr [rdx]
    vmovaps [rsp+88h+var_28], xmm7
    vmovaps [rsp+88h+var_38], xmm8
    vmovss  xmm8, dword ptr [rdx+8]
    vmovaps [rsp+88h+var_48], xmm9
    vmovss  xmm9, cs:__real@3f800000
    vmovaps [rsp+88h+var_58], xmm10
    vmovaps xmm2, xmm9; max
    vmovaps [rsp+88h+var_68], xmm11
    vsubss  xmm11, xmm6, dword ptr [rdx+4]
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm10, xmm0
    vdivss  xmm0, xmm6, dword ptr [rbx+4]; val
    vmovaps xmm2, xmm9; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm7, xmm0
    vdivss  xmm0, xmm11, dword ptr [rbx+8]; val
    vmovaps xmm2, xmm9; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vsubss  xmm3, xmm11, xmm8
    vmovaps xmm6, xmm0
    vdivss  xmm0, xmm3, dword ptr [rbx+0Ch]; val
    vmovaps xmm2, xmm9; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovaps xmm8, [rsp+88h+var_38] }
  result = 31i64;
  __asm
  {
    vmovaps xmm9, [rsp+88h+var_48]
    vmovaps xmm11, [rsp+88h+var_68]
    vaddss  xmm1, xmm7, xmm10
    vmovaps xmm7, [rsp+88h+var_28]
    vmovaps xmm10, [rsp+88h+var_58]
    vaddss  xmm2, xmm1, xmm6
    vmovaps xmm6, [rsp+88h+var_18]
    vaddss  xmm0, xmm0, xmm2
    vmulss  xmm3, xmm0, cs:__real@3e800000
    vmulss  xmm1, xmm3, cs:__real@42000000
    vcvttss2si rcx, xmm1
  }
  if ( (int)_RCX < 31 )
    return (unsigned int)_RCX;
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
  const char *v29; 
  R_RT_Handle v31; 
  __m256i v34; 
  char v35; 
  const char *v38; 
  R_RT_Group v39; 
  void *retaddr; 

  _R11 = &retaddr;
  _RSI = viewInfo;
  _RDI = context;
  if ( r_showFrustumLightsProxies->current.integer )
  {
    source = context->source;
    __asm { vmovaps xmmword ptr [r11-28h], xmm6 }
    R_InitCmdBufSourceState(source, &viewInfo->input);
    R_InitLocalCmdBufState(_RDI->state, &source->input);
    __asm
    {
      vmovups ymm0, ymmword ptr [rsi+30C0h]
      vmovups ymmword ptr [rsp+288h+var_258.m_surfaceID], ymm0
    }
    height = R_RT_Handle::GetSurface(&v31)->m_image.m_base.height;
    Surface = R_RT_Handle::GetSurface(&v31);
    R_SetRenderTargetSize(source, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FOR_VIEW);
    R_BeginViewInternal(source, &_RSI->sceneDef, (const GfxViewParms *)_RSI, &_RSI->viewParmsSet.frames[1].viewParms);
    R_SetViewportStruct(source, &_RSI->sceneViewport);
    __asm
    {
      vmovups ymm0, ymmword ptr [rsi+31A0h]
      vmovups ymm1, ymmword ptr [rsi+30C0h]
      vmovups xmm6, xmmword ptr [rdi]
      vmovd   eax, xmm0
      vmovups [rsp+288h+var_218], ymm0
      vmovups ymmword ptr [rsp+288h+var_258.m_surfaceID], ymm0
      vmovups [rsp+288h+var_238], ymm1
      vmovups [rsp+288h+var_1F8], ymm1
    }
    if ( (_WORD)_EAX )
    {
      R_RT_Handle::GetSurface(&v31);
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+288h+var_258.m_surfaceID]
        vmovups [rsp+288h+var_218], ymm0
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 463, ASSERT_TYPE_ASSERT, "(depthRt)", (const char *)&queryFormat, "depthRt") )
        __debugbreak();
    }
    __asm
    {
      vmovups ymm0, [rsp+288h+var_238]
      vmovd   eax, xmm0
    }
    v35 = 1;
    __asm { vmovups ymmword ptr [rsp+288h+var_258.m_surfaceID], ymm0 }
    if ( (_WORD)_EAX )
    {
      R_RT_Handle::GetSurface(&v31);
    }
    else
    {
      if ( v34.m256i_i32[2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", *(_QWORD *)&v31.m_surfaceID, *(_QWORD *)&v31.m_tracking.m_allocCounter, v31.m_tracking.m_name, v31.m_tracking.m_location) )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 442, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
        __debugbreak();
    }
    __asm
    {
      vmovups ymm0, [rsp+288h+var_238]
      vmovups [rsp+288h+var_1D0], ymm0
      vmovups ymm0, [rsp+288h+var_218]
      vmovups [rsp+288h+var_150], ymm0
    }
    _RCX = &v39;
    _RAX = &v35;
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
    v29 = v38;
    __asm { vmovups ymmword ptr [rcx+0A0h], ymm1 }
    v39.m_vrsRt.m_tracking.m_location = v29;
    __asm { vmovdqa xmmword ptr [rsp+288h+var_258.m_surfaceID], xmm6 }
    R_SetRenderTargetsInternal((GfxCmdBufContext *)&v31, &v39, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp(1520)");
    source->viewStatsTarget = GFX_VIEW_STATS_EMISSIVE;
    __asm { vmovups xmmword ptr [rsp+288h+var_258.m_surfaceID], xmm6 }
    R_FL_RenderDebugProxies((GfxCmdBufContext *)&v31, _RSI);
    R_ShutdownLocalCmdBufState(_RDI->state, &source->input);
    __asm { vmovaps xmm6, [rsp+288h+var_28] }
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
  float v16; 
  GfxCmdBufContext v17; 

  _R15 = gfxContext;
  ClusterMaskView = R_VOL_GetClusterMaskView();
  ClusterBuffer = R_ReflectionProbe_GetClusterBuffer();
  Surface = R_RT_Handle::GetSurface(&s_frustumLights.maskClusterBuffer);
  if ( (Surface->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v13 = R_RT_Handle::GetSurface(&s_frustumLights.maskBuffer);
  if ( (v13->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  __asm
  {
    vmovss  xmm1, [rsp+88h+arg_28]
    vmovups xmm0, xmmword ptr [r15]
    vmovss  [rsp+88h+var_40], xmm1
    vmovups [rsp+88h+var_38], xmm0
  }
  R_FL_ShowDebugOverlay(&v17, viewInfo, (const GfxWrappedBuffer *)&v13->1080, (const GfxWrappedBuffer *)&Surface->1080, ClusterMaskView, ClusterBuffer, mode, beginSlice, endSlice, v16);
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
  ComputeCmdBufState *v14; 
  const R_RT_Surface *Surface; 
  const GfxDevice *device; 
  __int64 v17; 
  const char *v28; 
  R_RT_Handle v32; 
  char v33; 
  __int16 v34; 
  int v35; 
  __int16 v37; 
  int v38; 
  __int128 v39; 
  R_RT_Group v40; 
  R_RT_Handle v41; 

  source = context->source;
  state = context->state;
  _RSI = context;
  R_InitCmdBufSourceState(context->source, &viewInfo->input);
  p_input = &source->input;
  R_InitLocalCmdBufState(state, &source->input);
  R_ProfBeginNamedEvent(state, "Frustum Lights Cluster");
  R_GPU_BeginTimer(GPU_TIMER_FRUSTUM_LIGHTS_CLUSTER);
  __asm
  {
    vmovups ymm0, ymmword ptr cs:s_frustumLights.maskClusterBuffer.baseclass_0.m_surfaceID
    vmovups [rbp+160h+var_60], ymm0
  }
  R_HW_AddResourceTransition(state, &v41, 0xFFFFFFFF, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  R_ProfBeginNamedEvent(state, "Clear Frustum Lights Cluster Masks");
  __asm
  {
    vmovups ymm0, ymmword ptr cs:s_frustumLights.maskClusterBuffer.baseclass_0.m_surfaceID
    vmovups [rbp+160h+var_60], ymm0
  }
  GfxComputeCmdBufState = R_GetGfxComputeCmdBufState(state);
  __asm { vmovups ymm0, [rbp+160h+var_60] }
  v14 = GfxComputeCmdBufState;
  *(_QWORD *)&v41.m_surfaceID = 0i64;
  *(_QWORD *)&v41.m_tracking.m_allocCounter = 0i64;
  __asm { vmovups ymmword ptr [rsp+260h+var_220.m_surfaceID], ymm0 }
  Surface = R_RT_Handle::GetSurface(&v32);
  if ( (Surface->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  device = v14->device;
  if ( !R_IsLockedIfGfxImmediateContext(device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  v17 = g_descriptorPools.shaderViewPool.handle.parent->descriptorSize * (g_descriptorPools.shaderViewPool.handle.startSlot + Surface->m_buffer.m_wrappedBuffer.rwView.rwView);
  ((void (__fastcall *)(const GfxDevice *, unsigned __int64, unsigned __int64, ID3D12Resource *, R_RT_Handle *, _DWORD, _QWORD))device->m_pFunction[17].Release)(device, v17 + g_descriptorPools.shaderViewPool.handle.parent->heapStartGPUHandle.ptr, g_descriptorPools.shaderViewPool.handle.parent->heapStartCPUHandle.ptr + v17, Surface->m_buffer.m_wrappedBuffer.rwView.rwResource, &v41, 0, 0i64);
  R_ComputeWaitForCompute(state, PIPE_FLUSH_PARTIAL);
  R_ProfEndNamedEvent(state);
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu [rbp+160h+var_168], xmm0
    vmovdqu [rbp+160h+var_148], xmm0
  }
  _RCX = &v40;
  v33 = 0;
  _RAX = &v33;
  v34 = 0;
  v35 = 0;
  v37 = 0;
  v38 = 0;
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
    vmovups xmm0, xmmword ptr [rsi]
    vmovups ymmword ptr [rcx+80h], ymm1
    vmovups ymm1, ymmword ptr [rax+0A0h]
  }
  v28 = (const char *)*((_QWORD *)&v39 + 1);
  __asm { vmovups ymmword ptr [rcx+0A0h], ymm1 }
  v40.m_vrsRt.m_tracking.m_location = v28;
  __asm { vmovups xmmword ptr [rbp+160h+var_60], xmm0 }
  R_SetRenderTargetsInternal((GfxCmdBufContext *)&v41, &v40, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp(1443)");
  __asm
  {
    vmovups ymm0, ymmword ptr cs:s_frustumLights.maskClusterBuffer.baseclass_0.m_surfaceID
    vmovups xmm1, xmmword ptr [rsi]
    vmovups ymmword ptr [rsp+260h+var_220.m_surfaceID], ymm0
    vmovups xmmword ptr [rbp+160h+var_60], xmm1
  }
  R_RenderFrustumLightsClusterBuffer((GfxCmdBufContext *)&v41, viewInfo, data, (R_RT_BufferHandle *)&v32);
  __asm
  {
    vmovups ymm0, ymmword ptr cs:s_frustumLights.maskClusterBuffer.baseclass_0.m_surfaceID
    vmovups ymmword ptr [rsp+260h+var_220.m_surfaceID], ymm0
  }
  R_HW_AddResourceTransition(state, &v32, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
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
  ComputeCmdBufState *GfxComputeCmdBufState; 
  ComputeCmdBufState *v11; 
  R_RT_Flags m_rtFlags; 
  GfxCmdBufInput *p_input; 
  const R_RT_Surface *Surface; 
  bool v16; 
  const GfxShaderBufferRWView *RWView; 
  const GfxDevice *device; 
  const GfxShaderBufferRWView *v22; 
  __int64 v23; 
  const char *v37; 
  GfxCmdBufSourceState *v38; 
  R_RT_BufferHandle v47; 
  R_RT_Handle v48; 
  R_RT_BufferHandle v50; 
  char v51; 
  const char *v53; 
  GfxViewport viewport; 
  R_RT_Group v55; 
  R_RT_Handle v56; 

  __asm { vmovaps [rsp+2F0h+var_40], xmm6 }
  state = context->state;
  _R12 = context;
  source = context->source;
  _RBX = viewInfo;
  GfxComputeCmdBufState = R_GetGfxComputeCmdBufState(state);
  __asm { vmovups ymm0, ymmword ptr [rbx+31A0h] }
  v11 = GfxComputeCmdBufState;
  __asm
  {
    vmovups [rbp+1F0h+var_260], ymm0
    vmovups ymmword ptr [rbp+1F0h+var_70.m_surfaceID], ymm0
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+2F0h+var_2A0+10h], xmm0
  }
  m_rtFlags = R_RT_Handle::GetSurface(&v56)->m_rtFlags;
  v47.m_surfaceID = 0;
  v47.m_tracking.m_allocCounter = 0;
  R_InitCmdBufSourceState(source, &_RBX->input);
  p_input = &source->input;
  R_InitLocalCmdBufState(state, &source->input);
  R_ProfBeginNamedEvent(state, "Frustum Lights Tile");
  R_GPU_BeginTimer(GPU_TIMER_FRUSTUM_LIGHTS_TILE);
  LODWORD(_RBX) = R_RT_Handle::GetSurface(&v56)->m_image.m_base.width;
  Surface = R_RT_Handle::GetSurface(&v56);
  R_SetRenderTargetSize(source, (unsigned int)_RBX, Surface->m_image.m_base.height, GFX_USE_VIEWPORT_FOR_VIEW);
  v16 = (m_rtFlags & 0x4000) != 0;
  if ( v16 )
  {
    __asm
    {
      vmovups ymm0, [rbp+1F0h+var_260]
      vmovups ymmword ptr [rbp+1F0h+var_70.m_surfaceID], ymm0
    }
    R_AddDepthStencilTransition(state, (R_RT_DepthHandle *)&v56, DEPTHSTENCIL_TRANSITION_MODE_WRITE_PRESERVE_COMPRESSION, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  }
  __asm
  {
    vmovups ymm0, ymmword ptr cs:s_frustumLights.maskBuffer.baseclass_0.m_surfaceID
    vmovups ymmword ptr [rbp+1F0h+var_70.m_surfaceID], ymm0
  }
  R_HW_AddResourceTransition(state, &v56, 0xFFFFFFFF, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  R_ProfBeginNamedEvent(v11, "Clear Frustum Lights Tile Masks");
  __asm
  {
    vmovups ymm0, ymmword ptr cs:s_frustumLights.maskBuffer.baseclass_0.m_surfaceID
    vmovups ymmword ptr [rbp+1F0h+var_240.baseclass_0.m_surfaceID], ymm0
  }
  *(_QWORD *)&v56.m_surfaceID = 0i64;
  *(_QWORD *)&v56.m_tracking.m_allocCounter = 0i64;
  RWView = R_RT_BufferHandle::GetRWView(&v50);
  device = v11->device;
  v22 = RWView;
  if ( !R_IsLockedIfGfxImmediateContext(device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  v23 = g_descriptorPools.shaderViewPool.handle.parent->descriptorSize * (g_descriptorPools.shaderViewPool.handle.startSlot + v22->rwView);
  ((void (__fastcall *)(const GfxDevice *, unsigned __int64, unsigned __int64, ID3D12Resource *, R_RT_Handle *, _DWORD, _QWORD))device->m_pFunction[17].Release)(device, v23 + g_descriptorPools.shaderViewPool.handle.parent->heapStartGPUHandle.ptr, g_descriptorPools.shaderViewPool.handle.parent->heapStartCPUHandle.ptr + v23, v22->rwResource, &v56, 0, 0i64);
  R_ComputeWaitForCompute(v11, PIPE_FLUSH_PARTIAL);
  R_ProfEndNamedEvent(v11);
  __asm
  {
    vmovups ymm0, [rbp+1F0h+var_260]
    vmovups xmm6, xmmword ptr [r12]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rbp+1F0h+var_70.m_surfaceID], ymm0
  }
  if ( (_WORD)_EAX )
  {
    R_RT_Handle::GetSurface(&v56);
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 458, ASSERT_TYPE_ASSERT, "(depthRt)", (const char *)&queryFormat, "depthRt") )
      __debugbreak();
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+1F0h+var_70.m_surfaceID]
    vmovups [rbp+1F0h+var_198], ymm0
  }
  _RCX = &v55;
  v51 = 0;
  _RAX = &v51;
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
  v37 = v53;
  __asm { vmovups ymmword ptr [rcx+0A0h], ymm1 }
  v55.m_vrsRt.m_tracking.m_location = v37;
  __asm { vmovdqa xmmword ptr [rbp+1F0h+var_70.m_surfaceID], xmm6 }
  R_SetRenderTargetsInternal((GfxCmdBufContext *)&v56, &v55, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp(1220)");
  v38 = _R12->source;
  *(_QWORD *)&viewport.x = 0i64;
  viewport.width = v38->renderTargetWidth;
  viewport.height = v38->renderTargetHeight;
  R_SetViewportStruct(v38, &viewport);
  R_SetViewportAndScissorSeparate(state, &viewport, &viewport);
  __asm
  {
    vmovups ymm0, [rsp+2F0h+var_2A0]
    vmovups ymm1, ymmword ptr cs:s_frustumLights.maskBuffer.baseclass_0.m_surfaceID
    vmovups ymmword ptr [rbp+1F0h+var_240.baseclass_0.m_surfaceID], ymm0
    vmovups ymm0, [rbp+1F0h+var_260]
    vmovups [rsp+2F0h+var_280], ymm0
    vmovups [rsp+2F0h+var_2A0], ymm1
    vmovups xmmword ptr [rbp+1F0h+var_70.m_surfaceID], xmm6
  }
  R_RenderFrustumLightsTileBuffer((GfxCmdBufContext *)&v56, viewInfo, data, (R_RT_DepthHandle *)&v48, &v47, (R_RT_ColorHandle *)&v50);
  if ( v16 )
  {
    __asm
    {
      vmovups ymm0, [rbp+1F0h+var_260]
      vmovups [rsp+2F0h+var_280], ymm0
    }
    R_AddDepthStencilTransition(state, (R_RT_DepthHandle *)&v48, DEPTHSTENCIL_TRANSITION_MODE_READ_PRESERVE_COMPRESSION, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  }
  __asm
  {
    vmovups ymm0, ymmword ptr cs:s_frustumLights.maskBuffer.baseclass_0.m_surfaceID
    vmovups [rsp+2F0h+var_280], ymm0
  }
  R_HW_AddResourceTransition(state, &v48, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  R_GPU_EndTimer();
  R_ProfEndNamedEvent(state);
  R_ShutdownLocalCmdBufState(state, p_input);
  __asm { vmovaps xmm6, [rsp+2F0h+var_40] }
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
  __asm
  {
    vmovss  xmm1, dword ptr [rdx+4]
    vmovss  xmm0, dword ptr [rdx]
    vmovaps [rsp+68h+var_18], xmm6
  }
  _RDI = inOutDepthBounds;
  __asm
  {
    vsubss  xmm6, xmm0, dword ptr [rcx+100h]
    vmovss  xmm0, dword ptr [rdx+8]
    vmovaps [rsp+68h+var_28], xmm7
    vsubss  xmm7, xmm1, dword ptr [rcx+104h]
    vxorps  xmm1, xmm1, xmm1
    vucomiss xmm1, dword ptr [rcx+88h]
    vmovaps [rsp+68h+var_38], xmm8
    vsubss  xmm8, xmm0, dword ptr [rcx+108h]
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 453, ASSERT_TYPE_ASSERT, "(transform[0][2] == 0 && transform[1][2] == 0 && transform[2][2] == 0)", (const char *)&queryFormat, "transform[0][2] == 0 && transform[1][2] == 0 && transform[2][2] == 0") )
    __debugbreak();
  __asm
  {
    vmulss  xmm1, xmm6, dword ptr [rbx+8Ch]
    vmulss  xmm0, xmm7, dword ptr [rbx+9Ch]
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm8, dword ptr [rbx+0ACh]
    vmovaps xmm8, [rsp+68h+var_38]
    vaddss  xmm0, xmm2, xmm1
    vaddss  xmm3, xmm0, dword ptr [rbx+0BCh]
    vmovss  xmm2, dword ptr [rdi]
    vmovss  xmm0, dword ptr [rdi+4]
    vminss  xmm1, xmm2, xmm3
    vmovss  dword ptr [rdi], xmm1
    vmaxss  xmm1, xmm0, xmm3
    vmovss  dword ptr [rdi+4], xmm1
  }
}

/*
==============
R_AddFrustumLight
==============
*/
__int64 R_AddFrustumLight(const GfxBackEndData *data, const GfxViewInfo *viewInfo, unsigned int lightIndex, const vec3_t *cameraOrigin, unsigned int *lightsMapping, unsigned int *count)
{
  __int64 v9; 
  unsigned int movingScriptablePrimaryLightCount; 
  unsigned int primaryLightCount; 
  unsigned int v14; 
  bool v15; 
  unsigned __int8 type; 
  __int64 v33; 
  unsigned __int64 v37; 
  unsigned int v49; 
  __int64 v50; 
  __int64 v52; 
  __int64 v53; 

  _R12 = cameraOrigin;
  v9 = lightIndex;
  _RDI = data;
  if ( lightIndex >= 0x1984 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 486, ASSERT_TYPE_ASSERT, "(unsigned)( lightIndex ) < (unsigned)( (6500 + I_max( ( 4 + 1 ), I_max( 32, 32 ) )) )", "lightIndex doesn't index GFX_MAX_SCENE_LIGHTS\n\t%i not in [0, %i)", lightIndex, 6532) )
    __debugbreak();
  _RBX = v9;
  movingScriptablePrimaryLightCount = rgp.world->movingScriptablePrimaryLightCount;
  primaryLightCount = rgp.world->primaryLightCount;
  v14 = primaryLightCount - movingScriptablePrimaryLightCount;
  v15 = movingScriptablePrimaryLightCount == 0;
  if ( movingScriptablePrimaryLightCount )
  {
    v15 = (unsigned int)v9 <= v14;
    if ( (unsigned int)v9 >= v14 )
    {
      v15 = (unsigned int)v9 <= primaryLightCount;
      if ( (unsigned int)v9 < primaryLightCount )
        return 0i64;
    }
  }
  __asm
  {
    vmovss  xmm0, cs:__real@3f8147ae
    vcomiss xmm0, dword ptr [rbx+rdi+53A044h]
  }
  if ( !v15 || (_RDI->sceneLights[_RBX].flags & 0x10) != 0 )
    return 0i64;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+rdi+53A018h]
    vmaxss  xmm1, xmm0, dword ptr [rbx+rdi+53A014h]
    vmaxss  xmm2, xmm1, dword ptr [rbx+rdi+53A01Ch]
    vmulss  xmm3, xmm2, dword ptr [rbx+rdi+53A010h]
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm3, xmm0
  }
  if ( (_RDI->sceneLights[_RBX].flags & 0x10) == 0 )
  {
    if ( viewInfo->thermalParams.useNightAndThermalVisionCombo )
      __asm { vcomiss xmm0, dword ptr [rbx+rdi+53A008h] }
    return 0i64;
  }
  type = _RDI->sceneLights[_RBX].type;
  if ( type == 2 )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vucomiss xmm0, dword ptr [rbx+rdi+53A060h]
    }
    return 0i64;
  }
  if ( type != 3 || (unsigned int)v9 < v14 && !R_IsPrimaryLightLoaded(_RDI, v9) )
    return 0i64;
  __asm
  {
    vmovss  xmm0, dword ptr [r12]
    vsubss  xmm3, xmm0, dword ptr [rbx+rdi+53A038h]
    vmovss  xmm1, dword ptr [r12+4]
    vsubss  xmm2, xmm1, dword ptr [rbx+rdi+53A03Ch]
    vmovss  xmm0, dword ptr [r12+8]
    vsubss  xmm4, xmm0, dword ptr [rbx+rdi+53A040h]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
  }
  v33 = 0i64;
  __asm
  {
    vmovaps [rsp+98h+var_48], xmm6
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm6, xmm3, xmm0
  }
  if ( !*count )
    goto LABEL_28;
  do
  {
    if ( (unsigned int)v33 >= 0x100 )
    {
      LODWORD(v53) = 256;
      LODWORD(v52) = v33;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 513, ASSERT_TYPE_ASSERT, "(unsigned)( existingIndex ) < (unsigned)( 256 )", "existingIndex doesn't index FRUSTUM_GRID_MAX_LIGHTS\n\t%i not in [0, %i)", v52, v53) )
        __debugbreak();
    }
    v37 = lightsMapping[v33];
    if ( (unsigned int)v37 >= 0x1984 )
    {
      LODWORD(v53) = 6532;
      LODWORD(v52) = lightsMapping[v33];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 516, ASSERT_TYPE_ASSERT, "(unsigned)( existingLightIndex ) < (unsigned)( (6500 + I_max( ( 4 + 1 ), I_max( 32, 32 ) )) )", "existingLightIndex doesn't index GFX_MAX_SCENE_LIGHTS\n\t%i not in [0, %i)", v52, v53) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [r12]
      vmovss  xmm1, dword ptr [r12+4]
      vsubss  xmm3, xmm0, dword ptr [rcx+rdi+53A038h]
      vsubss  xmm2, xmm1, dword ptr [rcx+rdi+53A03Ch]
      vmovss  xmm0, dword ptr [r12+8]
      vsubss  xmm4, xmm0, dword ptr [rcx+rdi+53A040h]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm2, xmm3, xmm0
      vcomiss xmm6, xmm2
    }
    if ( !is_mul_ok(0x98ui64, v37) )
      break;
    v33 = (unsigned int)(v33 + 1);
  }
  while ( (unsigned int)v33 < *count );
  LODWORD(v9) = lightIndex;
  if ( (unsigned int)v33 < 0x100 )
  {
LABEL_28:
    if ( *count > (unsigned int)v33 )
    {
      v49 = 255 - v33;
      if ( 255 - (int)v33 > *count - (unsigned int)v33 )
        v49 = *count - v33;
      if ( v49 )
      {
        v50 = (unsigned int)(v33 + 1);
        if ( (unsigned int)v50 >= 0x100 )
        {
          LODWORD(v53) = 256;
          LODWORD(v52) = v33 + 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 533, ASSERT_TYPE_ASSERT, "(unsigned)( existingIndex + 1 ) < (unsigned)( 256 )", "existingIndex + 1 doesn't index FRUSTUM_GRID_MAX_LIGHTS\n\t%i not in [0, %i)", v52, v53) )
            __debugbreak();
        }
        memmove_0(&lightsMapping[v50], &lightsMapping[v33], 4i64 * v49);
      }
    }
    lightsMapping[v33] = v9;
    if ( *count < 0x100 )
      ++*count;
  }
  __asm { vmovaps xmm6, [rsp+98h+var_48] }
  return 1i64;
}

/*
==============
R_AddFrustumLights
==============
*/
void R_AddFrustumLights(const void *const cmdInfo)
{
  const GfxViewInfo *v5; 
  const GfxBackEndData *v6; 
  __int64 frustumLightsIndex; 
  __int64 v8; 
  unsigned int v9; 
  unsigned int primaryLightVisDataCount; 
  unsigned int *primaryLightVisData; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int v16; 
  int v17; 
  unsigned int *v19; 
  unsigned int v20; 
  __int64 v22; 
  unsigned int v23; 
  __int64 v24; 
  __int64 v25; 
  unsigned int v26; 
  __int64 v27; 
  unsigned int v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v33; 
  __int64 v34; 
  __int64 v38; 
  __int64 v43; 
  char *v44; 
  __int64 v45; 
  int v46; 
  __int64 v47; 
  __int64 v48; 
  unsigned __int16 *v49; 
  __int64 v50; 
  const vec3_t *p_origin; 
  bool v52; 
  unsigned int numVerts; 
  unsigned int v59; 
  unsigned int positionsStride; 
  char *positions; 
  char v62; 
  GfxWorld *world; 
  unsigned int *verticesOffsets; 
  const vec3_t *v67; 
  unsigned __int16 v68; 
  __int64 v69; 
  bool v70; 
  bool IsCameraInsideLightMeshVolume; 
  bool *v73; 
  int v75; 
  int v77; 
  int v78; 
  bool *v79; 
  unsigned int primaryLightCount; 
  bool v81; 
  unsigned int v86; 
  unsigned int v87; 
  __int64 v88; 
  unsigned int v91; 
  unsigned int *v92; 
  unsigned int v93; 
  unsigned int v94; 
  unsigned int v95; 
  unsigned int *count; 
  unsigned int *counta; 
  float countb; 
  GfxLightModelInterface *model; 
  GfxLightModelInterface *modela; 
  unsigned int lightIndex; 
  unsigned int v105; 
  __int64 v106; 
  __int64 v107; 
  __int64 v108; 
  unsigned int *lightsMapping; 
  GfxViewInfo *viewInfo; 
  __int64 v111; 
  unsigned __int64 v112; 
  vec3_t *cameraOrigin; 
  const GfxBackEndData *v114; 
  GfxLightModelInterface lightModel; 
  __int64 v116; 
  bool *v117; 
  bool *v118; 
  void *retaddr; 
  bool v123; 
  bool enabled; 
  unsigned int v125; 
  unsigned int v126; 

  _RAX = &retaddr;
  v5 = *(const GfxViewInfo **)cmdInfo;
  v6 = (const GfxBackEndData *)*((_QWORD *)cmdInfo + 1);
  __asm { vmovaps xmmword ptr [rax-78h], xmm8 }
  frustumLightsIndex = v6->frustumLightsIndex;
  viewInfo = (GfxViewInfo *)v5;
  v114 = v6;
  if ( (unsigned int)frustumLightsIndex >= 2 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 604, ASSERT_TYPE_ASSERT, "(unsigned)( frame ) < (unsigned)( ( sizeof( *array_counter( s_frustumLights.writeLightData ) ) + 0 ) )", "frame doesn't index ARRAY_COUNT( s_frustumLights.writeLightData )\n\t%i not in [0, %i)", frustumLightsIndex, 2) )
      __debugbreak();
    LODWORD(modela) = 2;
    LODWORD(counta) = frustumLightsIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 605, ASSERT_TYPE_ASSERT, "(unsigned)( frame ) < (unsigned)( ( sizeof( *array_counter( s_frustumLights.writeZBinData ) ) + 0 ) )", "frame doesn't index ARRAY_COUNT( s_frustumLights.writeZBinData )\n\t%i not in [0, %i)", counta, modela) )
      __debugbreak();
  }
  v107 = frustumLightsIndex;
  v8 = frustumLightsIndex;
  LODWORD(frustumLightsIndex) = 0;
  v9 = 0;
  v125 = 0;
  lightsMapping = s_frustumLights.lightToSceneLight[v8];
  v126 = 0;
  cameraOrigin = &v5->viewParmsSet.frames[0].viewParms.camera.origin;
  _RAX = r_frustumLightProxyMargin;
  __asm { vmovss  xmm8, dword ptr [rax+28h] }
  enabled = r_frustumLightProxyUseMeshCheck->current.enabled;
  v123 = r_frustumLightUseZBinning->current.enabled;
  Profile_Begin(245);
  primaryLightVisDataCount = rgp.world->dpvs.primaryLightVisDataCount;
  primaryLightVisData = rgp.world->dpvs.primaryLightVisData;
  if ( primaryLightVisDataCount )
    v14 = *primaryLightVisData;
  else
    v14 = 0;
  while ( 1 )
  {
    v15 = v14;
    if ( !v14 )
      break;
LABEL_12:
    v16 = __lzcnt(v15);
    if ( v16 >= 0x20 )
    {
      LODWORD(model) = 32;
      LODWORD(count) = v16;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", count, model) )
        __debugbreak();
    }
    if ( ((0x80000000 >> v16) & v15) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_visdata_inline.h", 53, ASSERT_TYPE_ASSERT, "(visdata & bit)", (const char *)&queryFormat, "visdata & bit") )
      __debugbreak();
    v5 = viewInfo;
    v14 = v15 & ~(0x80000000 >> v16);
    v17 = R_AddFrustumLight(v6, viewInfo, v16 + 32 * frustumLightsIndex, cameraOrigin, lightsMapping, &v125);
    v9 = v17 + v126;
    v126 += v17;
  }
  while ( 1 )
  {
    frustumLightsIndex = (unsigned int)(frustumLightsIndex + 1);
    if ( (unsigned int)frustumLightsIndex >= primaryLightVisDataCount )
      break;
    v15 = primaryLightVisData[frustumLightsIndex];
    if ( v15 )
      goto LABEL_12;
  }
  _R15 = v6;
  if ( v6->dynamicLightCount + rgp.world->primaryLightCount != v6->sceneLightCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 635, ASSERT_TYPE_ASSERT, "(rgp.world->primaryLightCount + data->dynamicLightCount == data->sceneLightCount)", (const char *)&queryFormat, "rgp.world->primaryLightCount + data->dynamicLightCount == data->sceneLightCount") )
    __debugbreak();
  v19 = lightsMapping;
  v20 = 0;
  if ( v6->dynamicLightCount )
  {
    do
    {
      v9 += R_AddFrustumLight(v6, v5, v20 + rgp.world->primaryLightCount, &v5->viewParmsSet.frames[0].viewParms.camera.origin, lightsMapping, &v125);
      ++v20;
    }
    while ( v20 < v6->dynamicLightCount );
    v126 = v9;
  }
  Profile_EndInternal(NULL);
  Profile_Begin(246);
  _R9 = &s_frustumLights;
  v22 = v107;
  v23 = 255;
  v24 = 4096i64;
  if ( v123 )
    v23 = -65536;
  v25 = 0i64;
  do
  {
    v25 += 2i64;
    s_frustumLights.writeZBinData[v107][v25 - 2] = v23;
    s_frustumLights.writeZBinData[v107][v25 - 1] = v23;
    --v24;
  }
  while ( v24 );
  v26 = v125;
  v27 = 4 * v107;
  *(unsigned int *)((char *)s_frustumLights.staticInsideLights + v27) = 0;
  *(unsigned int *)((char *)s_frustumLights.dynamicInsideLights + v27) = 0;
  v28 = 0;
  *(unsigned int *)((char *)s_frustumLights.staticOutsideLights + v27) = 0;
  v29 = v107 << 7;
  *(unsigned int *)((char *)s_frustumLights.dynamicOutsideLights + v27) = 0;
  *(unsigned int *)((char *)s_frustumLights.staticWalkFrontLights + v27) = 0;
  *(unsigned int *)((char *)s_frustumLights.dynamicWalkFrontLights + v27) = 0;
  *(_QWORD *)((char *)&s_frustumLights.staticLightModels[0].totalIndicesCount + v29) = 0i64;
  *(_QWORD *)((char *)&s_frustumLights.dynamicLightModels[0].totalIndicesCount + v29) = 0i64;
  v111 = 4 * v107;
  v106 = v107 << 7;
  v105 = 0;
  if ( v26 )
  {
    v30 = 8 * v107;
    __asm
    {
      vmovaps [rsp+148h+var_58], xmm6
      vmovaps [rsp+148h+var_68], xmm7
      vmovss  xmm7, cs:__real@7f7fffff
    }
    v112 = 8 * v107;
    v108 = v107 << 8;
    v117 = s_frustumLights.insideLight[v22];
    v118 = s_frustumLights.singleSlice[v22];
    __asm { vxorps  xmm6, xmm6, xmm6 }
    while ( 1 )
    {
      v33 = v28;
      v34 = v19[v28];
      lightIndex = v34;
      if ( (unsigned int)v34 >= _R15->sceneLightCount )
      {
        LODWORD(model) = _R15->sceneLightCount;
        LODWORD(count) = v34;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 674, ASSERT_TYPE_ASSERT, "(unsigned)( lightIndex ) < (unsigned)( data->sceneLightCount )", "lightIndex doesn't index data->sceneLightCount\n\t%i not in [0, %i)", count, model) )
          __debugbreak();
        v29 = v106;
      }
      _RAX = *(__int64 *)((char *)s_frustumLights.writeLightData + v30);
      _RDX = 96 * v34;
      _RCX = 96i64 * v28;
      v38 = v34;
      _RBX = v34;
      __asm
      {
        vmovups ymm0, ymmword ptr [rdx+r15+6BFE88h]
        vmovups ymmword ptr [rcx+rax], ymm0
        vmovups ymm1, ymmword ptr [rdx+r15+6BFEA8h]
        vmovups ymmword ptr [rcx+rax+20h], ymm1
        vmovups ymm0, ymmword ptr [rdx+r15+6BFEC8h]
        vmovups ymmword ptr [rcx+rax+40h], ymm0
      }
      if ( (unsigned int)v34 >= rgp.world->primaryLightCount )
      {
        if ( !*(unsigned __int16 **)((char *)&s_frustumLights.dynamicLightModels[0].indices + v29) )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 590, ASSERT_TYPE_ASSERT, "(s_frustumLights.dynamicLightModels[frame].indices != nullptr)", (const char *)&queryFormat, "s_frustumLights.dynamicLightModels[frame].indices != nullptr") )
            __debugbreak();
          v29 = v106;
        }
        v46 = v34;
        v44 = (char *)s_frustumLights.dynamicLightModels + v29;
        v45 = v46 - rgp.world->primaryLightCount;
      }
      else
      {
        v43 = *(__int64 *)((char *)&s_frustumLights.staticLightModels[0].indices + v29);
        v44 = (char *)s_frustumLights.staticLightModels + v29;
        v45 = 0xFFFFFFFFi64;
        if ( v43 )
          v45 = v28;
        if ( !v43 )
          v44 = NULL;
      }
      if ( v44 )
        break;
      world = rgp.world;
      __asm { vmovaps xmm0, xmm7 }
      _R12 = 8 * (v28 + v108);
      verticesOffsets = rgp.world->frustumLights.verticesOffsets;
      _R15 = (vec2_t *)((char *)s_frustumLights.depthBounds[0] + _R12);
      *_R15 = (vec2_t)2139095039i64;
      v67 = (const vec3_t *)&world->frustumLights.vertices[16 * verticesOffsets[v38]];
      v68 = world->frustumLights.verticesCounts[v38];
      v62 = 1;
      if ( v68 )
      {
        v69 = v68;
        do
        {
          R_AccumulateDepthBounds(viewInfo, v67, _R15);
          v67 = (const vec3_t *)((char *)v67 + 16);
          v70 = v69-- == 0;
          v62 = v70 || v69 == 0;
        }
        while ( v69 );
        v27 = v111;
LABEL_59:
        __asm { vmovss  xmm0, dword ptr [r15] }
      }
      __asm { vcomiss xmm0, xmm8 }
      if ( v62 )
      {
        if ( !enabled )
          goto LABEL_65;
        if ( lightIndex >= rgp.world->primaryLightCount )
          goto LABEL_65;
        __asm { vmovaps xmm2, xmm8; margin }
        IsCameraInsideLightMeshVolume = R_IsCameraInsideLightMeshVolume(lightIndex, cameraOrigin, *(const float *)&_XMM2);
        if ( IsCameraInsideLightMeshVolume )
LABEL_65:
          IsCameraInsideLightMeshVolume = 1;
      }
      else
      {
        IsCameraInsideLightMeshVolume = 0;
      }
      v73 = v117;
      v117[v33] = IsCameraInsideLightMeshVolume;
      __asm { vmovss  xmm0, dword ptr [r15]; screenZ }
      v75 = FrustumGrid_ClusterZFromScreenPos(*(double *)&_XMM0, &rg.volumetricDepth);
      __asm { vmovss  xmm0, dword ptr [r15+4]; screenZ }
      v77 = v75;
      v78 = FrustumGrid_ClusterZFromScreenPos(*(double *)&_XMM0, &rg.volumetricDepth);
      v79 = v118;
      v118[v33] = v77 == v78;
      primaryLightCount = rgp.world->primaryLightCount;
      v81 = v73[v33];
      if ( lightIndex >= primaryLightCount )
      {
        if ( !v81 || (++*(unsigned int *)((char *)s_frustumLights.dynamicInsideLights + v27), !v73[v33]) )
          ++*(unsigned int *)((char *)s_frustumLights.dynamicOutsideLights + v27);
      }
      else if ( !v81 || (++*(unsigned int *)((char *)s_frustumLights.staticInsideLights + v27), !v73[v33]) )
      {
        ++*(unsigned int *)((char *)s_frustumLights.staticOutsideLights + v27);
      }
      if ( !v73[v33] && !v79[v33] )
      {
        if ( lightIndex >= primaryLightCount || (++*(unsigned int *)((char *)s_frustumLights.staticWalkFrontLights + v27), lightIndex >= primaryLightCount) )
          ++*(unsigned int *)((char *)s_frustumLights.dynamicWalkFrontLights + v27);
      }
      _R9 = &s_frustumLights;
      if ( v123 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [r15]
          vmaxss  xmm0, xmm0, xmm6
          vcvttss2si rcx, xmm0
          vmovss  xmm0, dword ptr [r12+r9+0A24h]
        }
        v30 = v112;
        v86 = 0x1FFF;
        v87 = (unsigned int)_RCX >> 5;
        v88 = 0x1FFFi64;
        __asm
        {
          vmaxss  xmm0, xmm0, xmm6
          vcvttss2si rax, xmm0
        }
        v91 = (unsigned int)_RAX >> 5;
        if ( v91 < 0x1FFF )
          v86 = v91;
        if ( v87 < 0x1FFF )
          v88 = v87;
        if ( (unsigned int)v88 <= v86 )
        {
          do
          {
            v92 = s_frustumLights.writeZBinData[v112 / 8];
            v93 = v28;
            v94 = v28;
            if ( v28 > HIWORD(v92[v88]) )
              v93 = HIWORD(v92[v88]);
            v95 = v93 << 16;
            if ( (unsigned __int16)v92[v88] > v28 )
              v94 = (unsigned __int16)v92[v88];
            v92[v88] = v94 | v95;
            v88 = (unsigned int)(v88 + 1);
          }
          while ( (unsigned int)v88 <= v86 );
          v27 = v111;
          _R9 = &s_frustumLights;
        }
      }
      else
      {
        v30 = v112;
      }
      v26 = v125;
      _R15 = v114;
      v29 = v106;
      ++v28;
      v19 = lightsMapping;
      v105 = v28;
      if ( v28 >= v125 )
      {
        __asm
        {
          vmovaps xmm7, [rsp+148h+var_68]
          vmovaps xmm6, [rsp+148h+var_58]
        }
        goto LABEL_93;
      }
    }
    v47 = *((_QWORD *)v44 + 6);
    v48 = *((unsigned int *)v44 + 1);
    lightModel.positionsStride = 16;
    lightModel.normalsStride = 16;
    v49 = (unsigned __int16 *)(v47 + 2 * v48);
    v50 = *((_QWORD *)v44 + 7);
    lightModel.indices = v49;
    p_origin = &_R15->sceneLights[_RBX].origin;
    lightModel.positions = (void *)(16i64 * *((unsigned int *)v44 + 2) + v50);
    v52 = _R15->sceneLights[_RBX].type == 2;
    lightModel.normals = (char *)lightModel.positions + 12;
    if ( v52 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+r15+53A050h]
        vmovss  xmm3, dword ptr [rbx+r15+53A044h]; radius
        vmovss  xmm2, dword ptr [rbx+r15+53A060h]; cosHalfFov
        vmovss  dword ptr [rsp+148h+count], xmm0
      }
      R_GenerateSpotLightModelMain(p_origin, &_R15->sceneLights[_RBX].dir, *(float *)&_XMM2, *(float *)&_XMM3, &_R15->sceneLights[_RBX].bulbLength, countb, &lightModel);
    }
    else
    {
      __asm { vmovss  xmm1, dword ptr [rbx+r15+53A044h]; radius }
      R_GenerateOmniLightModelMain(p_origin, *(float *)&_XMM1, &_R15->sceneLights[_RBX].bulbLength, &lightModel);
    }
    R_GenerateLightModelNormals(&lightModel);
    numVerts = lightModel.numVerts;
    _R15 = &s_frustumLights.depthBounds[0][v28 + v108];
    v116 = 8 * (v28 + v108);
    *_R15 = (vec2_t)2139095039i64;
    v59 = 0;
    if ( numVerts )
    {
      positionsStride = lightModel.positionsStride;
      positions = (char *)lightModel.positions;
      do
        R_AccumulateDepthBounds(viewInfo, (const vec3_t *)&positions[positionsStride * v59++], _R15);
      while ( v59 < numVerts );
      v28 = v105;
      v27 = v111;
    }
    *(_WORD *)(*((_QWORD *)v44 + 4) + 2 * v45) = lightModel.numIndices;
    *(_WORD *)(*((_QWORD *)v44 + 5) + 2 * v45) = lightModel.numVerts;
    *(_DWORD *)(*((_QWORD *)v44 + 2) + 4 * v45) = *((_DWORD *)v44 + 1);
    *(_DWORD *)(*((_QWORD *)v44 + 3) + 4 * v45) = *((_DWORD *)v44 + 2);
    *((_DWORD *)v44 + 1) += lightModel.numIndices;
    v62 = __CFADD__(numVerts, *((_DWORD *)v44 + 2)) || numVerts + *((_DWORD *)v44 + 2) == 0;
    *((_DWORD *)v44 + 2) += numVerts;
    _R12 = v116;
    v33 = v28;
    goto LABEL_59;
  }
LABEL_93:
  __asm { vmovaps xmm8, [rsp+148h+var_78] }
  if ( v26 > 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 777, ASSERT_TYPE_ASSERT, "(count <= 256)", (const char *)&queryFormat, "count <= FRUSTUM_GRID_MAX_LIGHTS") )
    __debugbreak();
  *(unsigned int *)((char *)s_frustumLights.lightCount + v27) = v26;
  if ( v26 >= 0x100 )
    R_WarnOncePerFrame(R_WARN_FRUSTUM_GRID_MAX_LIGHTS, v126, v29, _R9);
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
  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovups xmm2, xmmword ptr [r9]
    vmulps  xmm2, xmm2, xmm2
    vinsertps xmm3, xmm2, xmm2, 8
    vmovaps xmm6, xmm1
    vhaddps xmm0, xmm3, xmm3
    vhaddps xmm4, xmm0, xmm0
    vmovups xmm0, xmmword ptr [rcx]
    vsubps  xmm2, xmm0, xmmword ptr [r8]
    vmulps  xmm1, xmm2, xmmword ptr [r9]
    vinsertps xmm2, xmm1, xmm1, 8
    vhaddps xmm0, xmm2, xmm2
    vmovss  xmm2, cs:__real@3f800000; max
    vhaddps xmm1, xmm0, xmm0
    vdivss  xmm0, xmm1, xmm4; val
    vmovss  xmm1, cs:__real@bf800000; min
  }
  _RSI = vertInOut;
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vshufps xmm0, xmm0, xmm0, 0
    vmulps  xmm0, xmm0, xmmword ptr [rbx]
    vaddps  xmm4, xmm0, xmmword ptr [rdi]
    vmovups xmm0, xmmword ptr [rsi]
    vsubps  xmm3, xmm0, xmm4
    vmulps  xmm1, xmm3, xmm3
    vinsertps xmm0, xmm1, xmm1, 8
    vhaddps xmm2, xmm0, xmm0
    vhaddps xmm0, xmm2, xmm2
    vsqrtps xmm1, xmm0
    vdivps  xmm3, xmm3, xmm1
    vmovaps xmm2, xmm6
    vshufps xmm2, xmm2, xmm2, 0
    vmulps  xmm0, xmm3, xmm2
    vaddps  xmm1, xmm0, xmm4
    vmovups xmmword ptr [rsi], xmm1
    vmovaps xmm6, [rsp+48h+var_18]
  }
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
  unsigned int v8; 
  __int64 frustumLightsIndex; 
  int integer; 
  GfxCmdBufSourceState *source; 
  unsigned int *v15; 
  unsigned int v18; 
  char v19; 
  GfxWorld *world; 
  __int64 v26; 
  __int64 v27; 
  GfxFrustumLights *p_frustumLights; 
  unsigned int v29; 
  unsigned int v30; 
  int v31; 
  __int64 v32; 
  __int64 v33; 
  unsigned int v34; 
  unsigned int v35; 
  float *v36; 
  float *v37; 
  float *v38; 
  __int64 v39; 
  __int64 v40; 
  __int64 v41; 
  __int64 v42; 
  __int64 v43; 
  __int64 v44; 
  char v52; 
  char v58; 
  bool v59; 
  char v68; 
  char v80; 
  char v86; 
  char v90; 
  unsigned __int8 *color; 
  __int64 v92; 
  __int64 v99; 
  __int64 v100; 
  unsigned int v101; 
  unsigned int v102; 
  unsigned int v103; 
  __int64 v104; 
  GfxCmdBufContext v105; 
  unsigned int *v106; 
  const GfxBackEndData *v107; 
  void *retaddr; 
  const GfxViewInfo *v114; 
  int v115; 
  int v116; 

  _R11 = &retaddr;
  v114 = viewInfo;
  v8 = 0;
  v101 = 0;
  _RSI = context->source->input.data;
  v107 = _RSI;
  frustumLightsIndex = _RSI->frustumLightsIndex;
  integer = r_showFrustumLightsProxies->current.integer;
  v104 = frustumLightsIndex;
  v116 = integer;
  v103 = s_frustumLights.lightCount[frustumLightsIndex];
  if ( v103 )
  {
    __asm
    {
      vmovaps xmmword ptr [r11-58h], xmm6
      vmovss  xmm6, cs:__real@437f0000
      vmovaps xmmword ptr [r11-68h], xmm7
    }
    source = NULL;
    __asm
    {
      vmovss  xmm7, cs:__real@3f000000
      vmovaps xmmword ptr [r11-78h], xmm8
    }
    v15 = s_frustumLights.lightToSceneLight[(unsigned __int64)(unsigned int)frustumLightsIndex];
    __asm
    {
      vmovaps xmmword ptr [r11-88h], xmm9
      vmovss  xmm9, cs:__real@3f8147ae
    }
    v106 = v15;
    v105.source = NULL;
    __asm { vxorps  xmm8, xmm8, xmm8 }
    while ( 1 )
    {
      v18 = *v15;
      _RBX = *v15;
      __asm { vcomiss xmm9, dword ptr [rbx+rsi+53A044h] }
      if ( !(((152 * (unsigned __int128)*v15) >> 64 != 0) | v19) || (_RSI->sceneLights[_RBX].flags & 0x10) != 0 )
        goto LABEL_8;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+rsi+53A018h]
        vmaxss  xmm1, xmm0, dword ptr [rbx+rsi+53A014h]
        vmaxss  xmm2, xmm1, dword ptr [rbx+rsi+53A01Ch]
        vmulss  xmm3, xmm2, dword ptr [rbx+rsi+53A010h]
        vucomiss xmm3, xmm8
      }
      if ( (_RSI->sceneLights[_RBX].flags & 0x10) == 0 )
        break;
LABEL_10:
      if ( (unsigned __int8)(_RSI->sceneLights[_RBX].type - 2) > 1u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1544, ASSERT_TYPE_ASSERT, "(light->type == 2 || light->type == 3)", (const char *)&queryFormat, "light->type == GFX_LIGHT_TYPE_SPOT || light->type == GFX_LIGHT_TYPE_OMNI") )
        __debugbreak();
      if ( integer != 2 || v8 == r_chooseFrustumLightProxy->current.integer )
      {
        world = rgp.world;
        v26 = frustumLightsIndex << 7;
        if ( v18 >= rgp.world->primaryLightCount )
        {
          if ( !*(unsigned __int16 **)((char *)&s_frustumLights.dynamicLightModels[0].indices + v26) )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 566, ASSERT_TYPE_ASSERT, "(s_frustumLights.dynamicLightModels[frame].indices != nullptr)", (const char *)&queryFormat, "s_frustumLights.dynamicLightModels[frame].indices != nullptr") )
              __debugbreak();
            world = rgp.world;
          }
          p_frustumLights = (GfxFrustumLights *)((char *)s_frustumLights.dynamicLightModels + v26);
          v29 = v18 - world->primaryLightCount;
        }
        else
        {
          v27 = *(__int64 *)((char *)&s_frustumLights.staticLightModels[0].indices + v26);
          p_frustumLights = (GfxFrustumLights *)((char *)s_frustumLights.staticLightModels + v26);
          if ( !v27 )
            p_frustumLights = &rgp.world->frustumLights;
          v29 = v8;
          if ( !v27 )
            v29 = v18;
        }
        v30 = p_frustumLights->indicesCounts[v29];
        v102 = v30;
        v31 = 2 * v30;
        v32 = (__int64)&p_frustumLights->indices[p_frustumLights->indicesOffsets[v29]];
        v33 = (__int64)&p_frustumLights->vertices[16 * p_frustumLights->verticesOffsets[v29]];
        if ( 2 * v30 < 0x1000 )
        {
          v34 = 0;
          if ( p_frustumLights->indicesCounts[v29] )
          {
            v35 = 2;
            do
            {
              v36 = (float *)(v33 + 16i64 * *(unsigned __int16 *)(v32 + 2i64 * (v34 + 2)));
              v37 = (float *)(v33 + 16i64 * *(unsigned __int16 *)(v32 + 2i64 * (v34 + 1)));
              v38 = (float *)(v33 + 16i64 * *(unsigned __int16 *)(v32 + 2i64 * v34));
              if ( v35 - 2 >= 0x1000 )
              {
                LODWORD(v100) = 4096;
                LODWORD(v99) = v35 - 2;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1577, ASSERT_TYPE_ASSERT, "(unsigned)( pointIndex ) < (unsigned)( ( sizeof( *array_counter( s_frustumLights.points ) ) + 0 ) )", "pointIndex doesn't index ARRAY_COUNT( s_frustumLights.points )\n\t%i not in [0, %i)", v99, v100) )
                  __debugbreak();
              }
              v39 = v35 - 1;
              v40 = v35;
              v41 = v35 - 2;
              v42 = v35 + 1;
              v43 = v35 + 2;
              v44 = v35 + 3;
              v35 += 6;
              v34 += 3;
              s_frustumLights.points[v41].xyz.v[0] = *v38;
              s_frustumLights.points[v41].xyz.v[1] = v38[1];
              s_frustumLights.points[v41].xyz.v[2] = v38[2];
              s_frustumLights.points[v39].xyz.v[0] = *v37;
              s_frustumLights.points[v39].xyz.v[1] = v37[1];
              s_frustumLights.points[v39].xyz.v[2] = v37[2];
              s_frustumLights.points[v40].xyz.v[0] = *v37;
              s_frustumLights.points[v40].xyz.v[1] = v37[1];
              s_frustumLights.points[v40].xyz.v[2] = v37[2];
              v30 = v102;
              s_frustumLights.points[v42].xyz.v[0] = *v36;
              s_frustumLights.points[v42].xyz.v[1] = v36[1];
              s_frustumLights.points[v42].xyz.v[2] = v36[2];
              s_frustumLights.points[v43].xyz.v[0] = *v36;
              s_frustumLights.points[v43].xyz.v[1] = v36[1];
              s_frustumLights.points[v43].xyz.v[2] = v36[2];
              s_frustumLights.points[v44].xyz.v[0] = *v38;
              s_frustumLights.points[v44].xyz.v[1] = v38[1];
              s_frustumLights.points[v44].xyz.v[2] = v38[2];
            }
            while ( v34 < v102 );
            _RSI = v107;
            v31 = 2 * v102;
            v8 = v101;
            source = v105.source;
          }
          frustumLightsIndex = v104;
          __asm { vxorps  xmm4, xmm4, xmm4 }
          if ( s_frustumLights.insideLight[0][(_QWORD)source + 256 * v104] )
          {
            __asm
            {
              vmulss  xmm1, xmm6, dword ptr cs:?colorMdYellow@@3Tvec4_t@@B; vec4_t const colorMdYellow
              vaddss  xmm3, xmm1, xmm7
              vroundss xmm1, xmm4, xmm3, 1
              vcvttss2si ecx, xmm1
              vmulss  xmm1, xmm6, dword ptr cs:?colorMdYellow@@3Tvec4_t@@B+4; vec4_t const colorMdYellow
              vaddss  xmm3, xmm1, xmm7
            }
            if ( _ECX > 255 )
              _ECX = 255;
            v59 = _ECX < 0;
            v52 = _ECX;
            __asm
            {
              vroundss xmm1, xmm4, xmm3, 1
              vcvttss2si ecx, xmm1
              vmulss  xmm1, xmm6, dword ptr cs:?colorMdYellow@@3Tvec4_t@@B+8; vec4_t const colorMdYellow
            }
            if ( v59 )
              v52 = 0;
            __asm { vaddss  xmm3, xmm1, xmm7 }
            if ( _ECX > 255 )
              _ECX = 255;
            LOBYTE(v115) = v52;
            __asm { vroundss xmm1, xmm4, xmm3, 1 }
            v58 = _ECX;
            v59 = _ECX < 0;
            __asm
            {
              vcvttss2si ecx, xmm1
              vmulss  xmm1, xmm6, dword ptr cs:?colorMdYellow@@3Tvec4_t@@B+0Ch; vec4_t const colorMdYellow
            }
          }
          else if ( s_frustumLights.singleSlice[0][(_QWORD)source + 256 * v104] )
          {
            __asm
            {
              vmulss  xmm1, xmm6, dword ptr cs:?colorGreen@@3Tvec4_t@@B; vec4_t const colorGreen
              vaddss  xmm3, xmm1, xmm7
              vroundss xmm1, xmm4, xmm3, 1
              vcvttss2si ecx, xmm1
              vmulss  xmm1, xmm6, dword ptr cs:?colorGreen@@3Tvec4_t@@B+4; vec4_t const colorGreen
              vaddss  xmm3, xmm1, xmm7
            }
            if ( _ECX > 255 )
              _ECX = 255;
            v59 = _ECX < 0;
            v68 = _ECX;
            __asm
            {
              vroundss xmm1, xmm4, xmm3, 1
              vcvttss2si ecx, xmm1
              vmulss  xmm1, xmm6, dword ptr cs:?colorGreen@@3Tvec4_t@@B+8; vec4_t const colorGreen
            }
            if ( v59 )
              v68 = 0;
            __asm { vaddss  xmm3, xmm1, xmm7 }
            if ( _ECX > 255 )
              _ECX = 255;
            LOBYTE(v115) = v68;
            __asm { vroundss xmm1, xmm4, xmm3, 1 }
            v58 = _ECX;
            v59 = _ECX < 0;
            __asm
            {
              vcvttss2si ecx, xmm1
              vmulss  xmm1, xmm6, dword ptr cs:?colorGreen@@3Tvec4_t@@B+0Ch; vec4_t const colorGreen
            }
          }
          else
          {
            __asm
            {
              vmulss  xmm1, xmm6, dword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
              vaddss  xmm3, xmm1, xmm7
              vroundss xmm1, xmm4, xmm3, 1
              vcvttss2si ecx, xmm1
              vmulss  xmm1, xmm6, dword ptr cs:?colorWhite@@3Tvec4_t@@B+4; vec4_t const colorWhite
              vaddss  xmm3, xmm1, xmm7
            }
            if ( _ECX > 255 )
              _ECX = 255;
            v59 = _ECX < 0;
            v80 = _ECX;
            __asm
            {
              vroundss xmm1, xmm4, xmm3, 1
              vcvttss2si ecx, xmm1
              vmulss  xmm1, xmm6, dword ptr cs:?colorWhite@@3Tvec4_t@@B+8; vec4_t const colorWhite
            }
            if ( v59 )
              v80 = 0;
            __asm { vaddss  xmm3, xmm1, xmm7 }
            if ( _ECX > 255 )
              _ECX = 255;
            LOBYTE(v115) = v80;
            __asm { vroundss xmm1, xmm4, xmm3, 1 }
            v58 = _ECX;
            v59 = _ECX < 0;
            __asm
            {
              vcvttss2si ecx, xmm1
              vmulss  xmm1, xmm6, dword ptr cs:?colorWhite@@3Tvec4_t@@B+0Ch; vec4_t const colorWhite
            }
          }
          if ( v59 )
            v58 = 0;
          BYTE1(v115) = v58;
          if ( _ECX > 255 )
            _ECX = 255;
          v86 = _ECX;
          __asm { vaddss  xmm3, xmm1, xmm7 }
          if ( _ECX < 0 )
            v86 = 0;
          BYTE2(v115) = v86;
          __asm
          {
            vroundss xmm1, xmm4, xmm3, 1
            vcvttss2si ecx, xmm1
          }
          if ( _ECX > 255 )
            _ECX = 255;
          v90 = _ECX;
          if ( _ECX < 0 )
            v90 = 0;
          HIBYTE(v115) = v90;
          if ( v30 )
          {
            color = s_frustumLights.points[0].color;
            v92 = v30;
            do
            {
              *(_DWORD *)color = v115;
              color += 16;
              --v92;
            }
            while ( v92 );
          }
          else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1613, ASSERT_TYPE_ASSERT, "(indexCount > 0)", (const char *)&queryFormat, "indexCount > 0") )
          {
            __debugbreak();
          }
          _RAX = context;
          __asm
          {
            vmovups xmm0, xmmword ptr [rax]
            vmovups [rsp+108h+var_A8], xmm0
          }
          RB_DrawLines3D(&v105, v31, 1, s_frustumLights.points, 1);
        }
        else
        {
          R_WarnOncePerFrame(R_WARN_DEBUG_ALLOC, "light proxies");
          frustumLightsIndex = v104;
        }
        integer = v116;
      }
      viewInfo = v114;
      v15 = v106 + 1;
      ++v8;
      ++v106;
      source = (GfxCmdBufSourceState *)((char *)source + 1);
      v101 = v8;
      v105.source = source;
      if ( v8 >= v103 )
      {
        __asm
        {
          vmovaps xmm9, [rsp+108h+var_88]
          vmovaps xmm8, [rsp+108h+var_78]
          vmovaps xmm7, [rsp+108h+var_68]
          vmovaps xmm6, [rsp+108h+var_58]
        }
        return;
      }
    }
    if ( viewInfo->thermalParams.useNightAndThermalVisionCombo )
      __asm { vcomiss xmm8, dword ptr [rbx+rsi+53A008h] }
LABEL_8:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1543, ASSERT_TYPE_ASSERT, "(GfxLight_IsVisible( light, viewInfo->thermalParams.useNightAndThermalVisionCombo ))", (const char *)&queryFormat, "GfxLight_IsVisible( light, viewInfo->thermalParams.useNightAndThermalVisionCombo )") )
      __debugbreak();
    goto LABEL_10;
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
  unsigned int v25; 
  materialCommands_t *Tess; 
  materialCommands_t *v46; 
  float fmt; 
  float v72; 
  float v73; 
  float v74; 
  float v75; 
  float v76; 
  GfxCmdBufContext v77; 
  char v79; 
  void *retaddr; 

  _RAX = &retaddr;
  _RBP = gfxContext->source;
  v25 = mode - 1;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
  }
  _RSI = gfxContext;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovss  xmm8, cs:__real@3f800000
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovaps xmmword ptr [rax-88h], xmm12
    vmovaps xmmword ptr [rax-98h], xmm13
    vmovaps xmmword ptr [rax-0A8h], xmm14
    vmovaps [rsp+128h+var_B8], xmm15
  }
  if ( (((_BYTE)mode - 1) & 1) != 0 || v25 > 9 )
  {
    __asm { vxorps  xmm6, xmm6, xmm6 }
    if ( (((_BYTE)mode - 1) & 1) != 0 )
      goto LABEL_7;
  }
  else
  {
    __asm { vmovss  xmm6, cs:__real@3e800000 }
  }
  if ( v25 <= 9 )
  {
    __asm { vmovss  xmm7, cs:__real@3f400000 }
    goto LABEL_8;
  }
LABEL_7:
  __asm { vmovaps xmm7, xmm8 }
LABEL_8:
  __asm
  {
    vmovups xmm9, xmmword ptr [rcx]
    vsubss  xmm0, xmm7, xmm6
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, rax
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
    vxorps  xmm10, xmm10, xmm10
    vcvtsi2ss xmm10, xmm10, rax
    vxorps  xmm11, xmm11, xmm11
    vcvtsi2ss xmm11, xmm11, rax
    vmulss  xmm12, xmm2, xmm6
    vmulss  xmm13, xmm1, xmm6
    vmulss  xmm14, xmm0, xmm2
    vmulss  xmm15, xmm0, xmm1
    vmovups [rsp+128h+var_C8], xmm9
  }
  Tess = R_GetTess(&v77);
  v46 = Tess;
  if ( Tess->vertexCount )
  {
    __asm { vmovdqa [rsp+128h+var_C8], xmm9 }
    RB_EndTessSurfaceInternal(&v77, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h(162)");
  }
  else
  {
    if ( Tess->indexCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 166, ASSERT_TYPE_ASSERT, "(tess.indexCount == 0)", (const char *)&queryFormat, "tess.indexCount == 0") )
      __debugbreak();
    v46->viewStatsTarget = GFX_VIEW_STATS_INVALID;
    v46->primStatsTarget = GFX_PRIM_STATS_INVALID;
  }
  R_Set2D(_RBP);
  R_SetPersistentTables(_RSI, _RSI->state->data, PERSISTENT_TABLE_SCENE);
  __asm
  {
    vmovss  dword ptr [rbp+750h], xmm10
    vmovss  dword ptr [rbp+754h], xmm11
    vdivss  xmm0, xmm8, xmm10
    vmovss  dword ptr [rbp+758h], xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vdivss  xmm1, xmm8, xmm11
    vmovss  dword ptr [rbp+75Ch], xmm1
  }
  ++_RBP->constVersions[5];
  __asm
  {
    vmovss  dword ptr [rbp+1060h], xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
    vmovss  dword ptr [rbp+1064h], xmm1
    vmovss  xmm1, [rsp+128h+arg_48]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmovss  dword ptr [rbp+1068h], xmm0
    vmovss  dword ptr [rbp+106Ch], xmm1
  }
  ++_RBP->constVersions[150];
  if ( _RBP == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1503, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  _RBP->input.codePersistentBuffers[10] = lightMasksTile;
  if ( _RBP == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1503, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  _RBP->input.codePersistentBuffers[11] = lightMasksCluster;
  if ( _RBP == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1503, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  _RBP->input.codePersistentBuffers[13] = volumetricMasksCluster;
  if ( _RBP == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1503, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  __asm
  {
    vmovss  [rsp+128h+var_E0], xmm7
    vmovss  [rsp+128h+var_E8], xmm7
    vmovss  [rsp+128h+var_F0], xmm6
  }
  _RBP->input.codePersistentBuffers[6] = probeMasksCluster;
  __asm
  {
    vmovups xmm0, xmmword ptr [rsi]
    vmovss  [rsp+128h+var_F8], xmm6
    vmovss  dword ptr [rsp+128h+var_100], xmm15
    vmovaps xmm3, xmm13
    vmovaps xmm2, xmm12
    vmovss  dword ptr [rsp+128h+fmt], xmm14
    vmovups [rsp+128h+var_C8], xmm0
  }
  RB_DrawStretchPic(&v77, rgp.frustumLightsDebug, *(float *)&_XMM2, *(float *)&_XMM3, fmt, v72, v73, v74, v75, v76, 0xFFFFFFFF, GFX_PRIM_STATS_CODE);
  __asm
  {
    vmovups xmm0, xmmword ptr [rsi]
    vmovups [rsp+128h+var_C8], xmm0
  }
  RB_EndTessSurfaceInternal(&v77, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp(1652)");
  __asm { vmovaps xmm15, [rsp+128h+var_B8] }
  _R11 = &v79;
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
    vmovaps xmm14, xmmword ptr [r11-90h]
  }
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
  __int64 v11; 
  GfxWrappedBuffer *v12; 
  _BYTE v17[128]; 
  __int64 v18; 

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
      v18 = 2i64;
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
        --v18;
      }
      while ( v18 );
    }
  }
  else if ( s_frustumLights.staticLightModels[0].indices )
  {
    _RBX = s_frustumLights.staticLightModels;
    v11 = 2i64;
    v12 = &s_frustumLights.staticLightModels[0].vertexBuffer;
    do
    {
      R_ShutdownGfxWrappedBuffer(v12 - 1);
      R_ShutdownGfxWrappedBuffer(v12);
      memset_0(v17, 0, sizeof(v17));
      __asm
      {
        vmovups ymm0, [rsp+0F8h+var_A8]
        vmovups ymm1, [rsp+0F8h+var_88]
        vmovups ymmword ptr [rbx], ymm0
        vmovups ymm0, [rsp+0F8h+var_68]
        vmovups ymmword ptr [rbx+20h], ymm1
        vmovups ymm1, [rsp+0F8h+var_48]
        vmovups ymmword ptr [rbx+40h], ymm0
      }
      v12 += 4;
      __asm { vmovups ymmword ptr [rbx+60h], ymm1 }
      ++_RBX;
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
  R_RT_Handle v7; 

  if ( s_frustumLights.maskBuffer.m_surfaceID )
  {
    R_RT_Handle::GetSurface(&s_frustumLights.maskBuffer);
    __asm
    {
      vmovups ymm0, ymmword ptr cs:s_frustumLights.maskBuffer.baseclass_0.m_surfaceID
      vmovups [rsp+58h+var_28], ymm0
    }
    R_RT_DestroyInternal(&v7);
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rsp+58h+var_28+10h], xmm0
      vmovups ymm0, ymmword ptr cs:s_frustumLights.maskClusterBuffer.baseclass_0.m_surfaceID
    }
    v7.m_surfaceID = 0;
    v7.m_tracking.m_allocCounter = 0;
    __asm
    {
      vmovups ymm1, [rsp+58h+var_28]
      vmovups ymmword ptr cs:s_frustumLights.maskBuffer.baseclass_0.m_surfaceID, ymm1
      vmovups [rsp+58h+var_28], ymm0
    }
    R_RT_DestroyInternal(&v7);
    v7.m_surfaceID = 0;
    v7.m_tracking.m_allocCounter = 0;
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rsp+58h+var_28+10h], xmm0
      vmovups ymm1, [rsp+58h+var_28]
      vmovups ymmword ptr cs:s_frustumLights.maskClusterBuffer.baseclass_0.m_surfaceID, ymm1
    }
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
    _RAX = R_RT_CreateBufferInternal(&result, 4u, 8 * s_frustumLights.maxTileCountX * s_frustumLights.maxTileCountY, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_GENERIC_READ, "frustum light masks buffer", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp(282)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr cs:s_frustumLights.maskBuffer.baseclass_0.m_surfaceID, ymm0
    }
    _RAX = R_RT_CreateBufferInternal(&result, 4u, 8 * v0, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_GENERIC_READ, "frustum light masks cluster buffer", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp(283)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr cs:s_frustumLights.maskClusterBuffer.baseclass_0.m_surfaceID, ymm0
    }
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
  unsigned __int16 *indices; 
  unsigned int positionsStride; 
  __int64 v9; 
  unsigned int v10; 
  unsigned int v11; 
  PackedUnitVec v47; 
  __int64 v48; 
  __int64 v49; 
  __int64 v50; 
  int v51; 
  vec3_t unitVec; 
  __int128 v53[682]; 

  if ( !lightModel->positions && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1822, ASSERT_TYPE_ASSERT, "(lightModel->positions)", (const char *)&queryFormat, "lightModel->positions") )
    __debugbreak();
  if ( !lightModel->indices && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1823, ASSERT_TYPE_ASSERT, "(lightModel->indices)", (const char *)&queryFormat, "lightModel->indices") )
    __debugbreak();
  if ( lightModel->numVerts > 0x100 )
  {
    v51 = 256;
    LODWORD(v49) = lightModel->numVerts;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1824, ASSERT_TYPE_ASSERT, "( lightModel->numVerts ) <= ( MAX_LIGHT_MODEL_VERTS )", "lightModel->numVerts not in [0, MAX_LIGHT_MODEL_VERTS]\n\t%u not in [0, %u]", v49, v51) )
      __debugbreak();
  }
  if ( lightModel->numIndices > 0x800 )
  {
    LODWORD(v50) = 2048;
    LODWORD(v49) = lightModel->numIndices;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1825, ASSERT_TYPE_ASSERT, "( lightModel->numIndices ) <= ( MAX_LIGHT_MODEL_INDICES )", "lightModel->numIndices not in [0, MAX_LIGHT_MODEL_INDICES]\n\t%u not in [0, %u]", v49, v50) )
      __debugbreak();
  }
  numIndices = lightModel->numIndices;
  memset_0(v53, 0, sizeof(v53));
  v3 = 0;
  v4 = 0;
  if ( numIndices / 3 )
  {
    _R10 = v53;
    indices = lightModel->indices;
    positionsStride = lightModel->positionsStride;
    _R15 = lightModel->positions;
    do
    {
      v9 = 3 * v4;
      v10 = indices[v9];
      v11 = indices[(unsigned int)(v9 + 1)];
      ++_R10;
      LODWORD(v9) = indices[(unsigned int)(v9 + 2)];
      ++v4;
      _RAX = v11 * positionsStride;
      __asm
      {
        vmovups xmm1, xmmword ptr [rax+r15]
        vsubps  xmm2, xmm1, xmmword ptr [rcx+r15]
        vshufps xmm1, xmm2, xmm2, 0C9h ; 'É'
      }
      _RAX = (unsigned int)v9 * positionsStride;
      __asm
      {
        vshufps xmm2, xmm2, xmm2, 0D2h ; 'Ò'
        vmovups xmm0, xmmword ptr [rax+r15]
        vsubps  xmm4, xmm0, xmmword ptr [rcx+r15]
        vshufps xmm0, xmm4, xmm4, 0D2h ; 'Ò'
        vmulps  xmm3, xmm1, xmm0
        vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
        vmulps  xmm0, xmm2, xmm1
        vsubps  xmm5, xmm3, xmm0
        vmulps  xmm1, xmm5, xmm5
        vinsertps xmm0, xmm1, xmm1, 8
        vhaddps xmm2, xmm0, xmm0
        vhaddps xmm0, xmm2, xmm2
        vsqrtps xmm1, xmm0
        vdivps  xmm3, xmm5, xmm1
        vmovups xmmword ptr [r10-10h], xmm3
      }
      _RAX = 2i64 * v10;
      __asm
      {
        vaddps  xmm0, xmm3, [rsp+rax*8+2B18h+var_2AC8]
        vmovups [rsp+rax*8+2B18h+var_2AC8], xmm0
      }
      _RAX = 2i64 * v11;
      __asm
      {
        vmovups xmm1, [rsp+rax*8+2B18h+var_2AC8]
        vaddps  xmm0, xmm1, xmmword ptr [r10-10h]
        vmovups [rsp+rax*8+2B18h+var_2AC8], xmm0
      }
      _RAX = 2i64 * (unsigned int)v9;
      __asm
      {
        vmovups xmm1, [rsp+rax*8+2B18h+var_2AC8]
        vaddps  xmm0, xmm1, xmmword ptr [r10-10h]
        vmovups [rsp+rax*8+2B18h+var_2AC8], xmm0
      }
    }
    while ( v4 < numIndices / 3 );
  }
  if ( lightModel->numVerts )
  {
    do
    {
      _RAX = 2i64 * v3;
      __asm
      {
        vmovups xmm3, [rsp+rax*8+2B18h+var_2AC8]
        vmulps  xmm1, xmm3, xmm3
        vinsertps xmm2, xmm1, xmm1, 8
        vhaddps xmm0, xmm2, xmm2
        vhaddps xmm0, xmm0, xmm0
        vsqrtps xmm1, xmm0
        vdivps  xmm2, xmm3, xmm1
        vmovss  dword ptr [rsp+2B18h+unitVec], xmm2
        vextractps dword ptr [rsp+2B18h+unitVec+4], xmm2, 1
        vextractps dword ptr [rsp+2B18h+unitVec+8], xmm2, 2
      }
      v47.packed = Vec3PackUnitVec(&unitVec).packed;
      v48 = v3 * lightModel->normalsStride;
      ++v3;
      *(PackedUnitVec *)((char *)lightModel->normals + v48) = v47;
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
  unsigned int v19; 
  __int64 v20; 
  unsigned int v34; 
  char v73; 
  float v77; 
  float v82; 
  unsigned int v92; 
  __int64 v99; 
  unsigned int numIndices; 
  int v106; 
  unsigned int v107; 
  unsigned int v108; 
  __int64 v109; 
  unsigned __int16 v110; 
  bool v111; 
  float v112; 
  __int64 v113; 
  unsigned int v114; 
  unsigned int v115; 
  float v116; 
  __int64 v117; 
  unsigned int v118; 
  unsigned __int16 v119; 
  unsigned int numVerts; 
  float v128; 
  unsigned int v129; 
  __int64 v130; 
  unsigned int v131; 
  __int64 v132; 
  unsigned int v133; 
  unsigned __int16 v134; 
  unsigned int v135; 
  int v136; 
  float fmt; 
  float v148; 
  float s; 
  float c; 
  float v151[2]; 
  unsigned int v152; 
  __int64 v153; 
  LightProxyMesh v154; 
  int v155; 
  const float4 *v156; 
  __int128 v157; 
  __int128 v158; 
  __int128 v159; 
  vec4_t plane; 
  char v161; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
  }
  _R12 = axis;
  v19 = kSphereSegment;
  v20 = kCircleSegment;
  v156 = centerVec;
  v152 = kSphereSegment;
  v154 = type;
  v155 = 1;
  __asm
  {
    vmovss  xmm0, cs:__real@40c90fdb
    vmovss  xmm7, cs:__real@3f800000
    vmovups xmm10, xmmword ptr [r12]
    vmovups xmm11, xmmword ptr [r12+10h]
    vmovss  xmm6, cs:__real@3fc90fdb
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rdi
    vdivss  xmm9, xmm0, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, r13
    vdivss  xmm1, xmm7, xmm0
    vxorps  xmm12, xmm12, xmm12
  }
  if ( type == MESH_ALL_SIDES )
  {
    __asm { vmovss  xmm0, cs:__real@40490fdb }
    v34 = 1;
    LODWORD(v153) = 1;
LABEL_6:
    v19 = kSphereSegment - 1;
    v152 = kSphereSegment - 1;
    goto LABEL_7;
  }
  __asm { vmovaps xmm0, xmm6 }
  if ( type != MESH_TOP_SIDE )
  {
    v34 = 0;
    LODWORD(v153) = 0;
    __asm { vmovaps xmm12, xmm6 }
    goto LABEL_6;
  }
  v34 = 1;
  LODWORD(v153) = 1;
LABEL_7:
  __asm
  {
    vmulss  xmm13, xmm1, xmm0
    vmovaps xmm0, xmm6; radians
  }
  FastSinCos(*(const float *)&_XMM0, &s, &c);
  __asm { vxorps  xmm0, xmm0, xmm0; radians }
  FastSinCos(*(const float *)&_XMM0, v151, &v148);
  __asm
  {
    vmovss  xmm8, [rbp+80h+sphereRadius]
    vmulss  xmm2, xmm8, [rsp+180h+s]
    vmulss  xmm0, xmm2, [rsp+180h+var_150]
    vmovups xmm1, cs:__xmm@3f800000000000000000000000000000
    vmulss  xmm3, xmm2, [rsp+180h+var_140]
    vmulss  xmm4, xmm8, [rsp+180h+c]
    vinsertps xmm1, xmm1, xmm0, 0
    vinsertps xmm1, xmm1, xmm3, 10h
    vinsertps xmm1, xmm1, xmm4, 20h ; ' '
    vmovaps xmm0, xmm6; radians
    vmovups [rbp+80h+var_F0], xmm1
  }
  FastSinCos(*(const float *)&_XMM0, &s, &c);
  __asm { vmovaps xmm0, xmm9; radians }
  FastSinCos(*(const float *)&_XMM0, v151, &v148);
  __asm
  {
    vmulss  xmm2, xmm8, [rsp+180h+s]
    vmulss  xmm3, xmm2, [rsp+180h+var_140]
    vmulss  xmm2, xmm2, [rsp+180h+var_150]
    vmovups xmm1, cs:__xmm@3f800000000000000000000000000000
    vmulss  xmm4, xmm8, [rsp+180h+c]
    vinsertps xmm1, xmm1, xmm2, 0
    vinsertps xmm1, xmm1, xmm3, 10h
    vinsertps xmm1, xmm1, xmm4, 20h ; ' '
    vsubss  xmm0, xmm6, xmm13; radians
    vmovups [rbp+80h+var_100], xmm1
  }
  FastSinCos(*(const float *)&_XMM0, &s, &c);
  __asm { vxorps  xmm0, xmm0, xmm0; radians }
  FastSinCos(*(const float *)&_XMM0, v151, &v148);
  __asm
  {
    vmulss  xmm2, xmm8, [rsp+180h+s]
    vmulss  xmm0, xmm2, [rsp+180h+var_150]
    vmovups xmm1, cs:__xmm@3f800000000000000000000000000000
    vmulss  xmm3, xmm2, [rsp+180h+var_140]
    vmulss  xmm4, xmm8, [rsp+180h+c]
    vinsertps xmm1, xmm1, xmm0, 0
    vmovss  xmm0, cs:__real@3a83126f
    vinsertps xmm1, xmm1, xmm3, 10h
    vinsertps xmm1, xmm1, xmm4, 20h ; ' '
    vmovups [rsp+180h+var_110], xmm1
    vmovss  dword ptr [rsp+180h+fmt], xmm0
  }
  PlaneFromPoints(&plane, (const vec3_t *)&v159, (const vec3_t *)&v158, (const vec3_t *)&v157, fmt);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+80h+plane+0Ch]
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vdivss  xmm6, xmm8, xmm0
    vcomiss xmm6, xmm7
  }
  if ( v73 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 2256, ASSERT_TYPE_ASSERT, "(sphereRadiusScale >= 1.0f)", (const char *)&queryFormat, "sphereRadiusScale >= 1.0f") )
    __debugbreak();
  __asm
  {
    vmulss  xmm0, xmm9, cs:__real@3f000000; X
    vmulss  xmm14, xmm8, xmm6
  }
  *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
  __asm
  {
    vdivss  xmm8, xmm7, xmm0
    vcomiss xmm8, xmm7
  }
  if ( v73 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 2264, ASSERT_TYPE_ASSERT, "(circleRadiusScale >= 1.0f)", (const char *)&queryFormat, "circleRadiusScale >= 1.0f") )
    __debugbreak();
  v77 = NAN;
  c = NAN;
  if ( v154 != MESH_BOTTOM_SIDE )
  {
    v77 = *(float *)&model->numVerts;
    __asm
    {
      vmovaps xmm0, xmm14
      vshufps xmm0, xmm0, xmm0, 0
      vmulps  xmm0, xmm0, xmmword ptr [r12+20h]
      vaddps  xmm3, xmm0, xmmword ptr [rax]
    }
    _RCX = (char *)model->positions + model->numVerts * model->positionsStride;
    ++model->numVerts;
    c = v77;
    __asm
    {
      vmovss  dword ptr [rcx], xmm3
      vextractps dword ptr [rcx+4], xmm3, 1
      vextractps dword ptr [rcx+8], xmm3, 2
    }
    if ( model->numVerts > 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 2274, ASSERT_TYPE_ASSERT, "(model->numVerts <= MAX_LIGHT_MODEL_VERTS)", (const char *)&queryFormat, "model->numVerts <= MAX_LIGHT_MODEL_VERTS") )
      __debugbreak();
  }
  v82 = *(float *)&model->numVerts;
  s = v82;
  v148 = v82;
  if ( (unsigned int)v153 <= v19 )
  {
    do
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vmulss  xmm1, xmm0, xmm13
        vaddss  xmm0, xmm1, xmm12; radians
      }
      FastSinCos(*(const float *)&_XMM0, v151, &v148);
      __asm
      {
        vmulss  xmm1, xmm14, [rsp+180h+var_140]
        vmulss  xmm6, xmm1, xmm8
        vmulss  xmm1, xmm14, [rsp+180h+var_150]
        vshufps xmm1, xmm1, xmm1, 0
        vmulps  xmm1, xmm1, xmmword ptr [r15+20h]
        vaddps  xmm7, xmm1, xmmword ptr [r12]
      }
      v92 = 0;
      if ( (_DWORD)v20 )
      {
        do
        {
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, rax
            vmulss  xmm0, xmm0, xmm9; radians
          }
          FastSinCos(*(const float *)&_XMM0, v151, &v148);
          __asm
          {
            vmulss  xmm0, xmm6, [rsp+180h+var_150]
            vmulss  xmm1, xmm6, [rsp+180h+var_140]
            vshufps xmm0, xmm0, xmm0, 0
          }
          v99 = model->positionsStride * model->numVerts++;
          __asm
          {
            vmulps  xmm0, xmm0, xmm10
            vaddps  xmm2, xmm0, xmm7
            vshufps xmm1, xmm1, xmm1, 0
          }
          _RCX = (char *)model->positions + v99;
          __asm
          {
            vmulps  xmm0, xmm1, xmm11
            vaddps  xmm3, xmm2, xmm0
            vmovss  dword ptr [rcx], xmm3
            vextractps dword ptr [rcx+4], xmm3, 1
            vextractps dword ptr [rcx+8], xmm3, 2
          }
          if ( model->numVerts >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 2307, ASSERT_TYPE_ASSERT, "(model->numVerts < MAX_LIGHT_MODEL_VERTS)", (const char *)&queryFormat, "model->numVerts < MAX_LIGHT_MODEL_VERTS") )
            __debugbreak();
          ++v92;
        }
        while ( v92 < (unsigned int)v20 );
        v19 = v152;
      }
      ++v34;
    }
    while ( v34 <= v19 );
    v82 = s;
    v77 = c;
    v148 = *(float *)&model->numVerts;
  }
  if ( v154 != MESH_BOTTOM_SIDE )
  {
    if ( v77 == NAN && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 2316, ASSERT_TYPE_ASSERT, "(topVert != 0xffffffff)", (const char *)&queryFormat, "topVert != 0xffffffff") )
      __debugbreak();
    if ( (_DWORD)v20 )
    {
      numIndices = model->numIndices;
      v106 = 1 - LODWORD(v82);
      *(_QWORD *)v151 = v20;
      v107 = LODWORD(v82);
      do
      {
        v108 = LODWORD(v82) + (v106 + v107) % (unsigned int)v20;
        v109 = numIndices + 2;
        if ( (unsigned int)v109 >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1718, ASSERT_TYPE_ASSERT, "(firstIndex + 2 < MAX_LIGHT_MODEL_INDICES)", (const char *)&queryFormat, "firstIndex + 2 < MAX_LIGHT_MODEL_INDICES") )
          __debugbreak();
        model->indices[numIndices] = truncate_cast<unsigned short,unsigned int>(LODWORD(c));
        model->indices[numIndices + 1] = truncate_cast<unsigned short,unsigned int>(v108);
        v110 = truncate_cast<unsigned short,unsigned int>(v107++);
        model->indices[v109] = v110;
        model->numIndices += 3;
        v111 = (*(_QWORD *)v151)-- == 1i64;
        numIndices = model->numIndices;
        v82 = s;
      }
      while ( !v111 );
      v19 = v152;
    }
  }
  LODWORD(v112) = v20 + LODWORD(v82);
  LODWORD(s) = v20 + LODWORD(v82);
  if ( (int)v153 + 1 <= v19 )
  {
    v113 = v19 - (unsigned int)v153;
    v153 = v113;
    do
    {
      if ( (_DWORD)v20 )
      {
        v114 = model->numIndices;
        *(_QWORD *)v151 = v20;
        v115 = LODWORD(v112) - v20;
        LODWORD(v116) = v20 - LODWORD(v112) + 1;
        c = v116;
        do
        {
          v117 = v114 + 5;
          v118 = LODWORD(v112) + (v115 + LODWORD(v116)) % (unsigned int)v20;
          if ( (unsigned int)v117 >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1688, ASSERT_TYPE_ASSERT, "(firstIndex + 5 < MAX_LIGHT_MODEL_INDICES)", (const char *)&queryFormat, "firstIndex + 5 < MAX_LIGHT_MODEL_INDICES") )
            __debugbreak();
          model->indices[v114] = truncate_cast<unsigned short,unsigned int>(v115);
          model->indices[v114 + 1] = truncate_cast<unsigned short,unsigned int>(v118 - v20);
          model->indices[v114 + 2] = truncate_cast<unsigned short,unsigned int>(v118);
          model->indices[v114 + 3] = truncate_cast<unsigned short,unsigned int>(v115);
          model->indices[v114 + 4] = truncate_cast<unsigned short,unsigned int>(v118);
          v119 = truncate_cast<unsigned short,unsigned int>(v115 + v20);
          ++v115;
          model->indices[v117] = v119;
          model->numIndices += 6;
          v111 = (*(_QWORD *)v151)-- == 1i64;
          v114 = model->numIndices;
          v112 = s;
          v116 = c;
        }
        while ( !v111 );
        v113 = v153;
      }
      LODWORD(v112) += v20;
      --v113;
      s = v112;
      v153 = v113;
    }
    while ( v113 );
  }
  if ( v154 != MESH_TOP_SIDE )
  {
    numVerts = model->numVerts;
    _RAX = axis;
    __asm
    {
      vxorps  xmm0, xmm14, cs:__xmm@80000000800000008000000080000000
      vshufps xmm0, xmm0, xmm0, 0
      vmovups xmm2, xmmword ptr [rax+20h]
      vmulps  xmm0, xmm0, xmm2
    }
    _RCX = (char *)model->positions + model->numVerts * model->positionsStride;
    __asm { vaddps  xmm3, xmm0, xmmword ptr [rax] }
    ++model->numVerts;
    __asm
    {
      vmovss  dword ptr [rcx], xmm3
      vextractps dword ptr [rcx+4], xmm3, 1
      vextractps dword ptr [rcx+8], xmm3, 2
    }
    if ( model->numVerts > 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 2354, ASSERT_TYPE_ASSERT, "(model->numVerts <= MAX_LIGHT_MODEL_VERTS)", (const char *)&queryFormat, "model->numVerts <= MAX_LIGHT_MODEL_VERTS") )
      __debugbreak();
    LODWORD(v128) = LODWORD(v148) - v20;
    LODWORD(v148) -= v20;
    if ( (_DWORD)v20 )
    {
      v129 = model->numIndices;
      v130 = v20;
      v131 = 1;
      do
      {
        v132 = v129 + 2;
        v133 = LODWORD(v128) + v131 % (unsigned int)v20;
        if ( (unsigned int)v132 >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1718, ASSERT_TYPE_ASSERT, "(firstIndex + 2 < MAX_LIGHT_MODEL_INDICES)", (const char *)&queryFormat, "firstIndex + 2 < MAX_LIGHT_MODEL_INDICES") )
          __debugbreak();
        v134 = truncate_cast<unsigned short,unsigned int>(numVerts);
        v135 = v155 + LODWORD(v148) - 1;
        model->indices[v129] = v134;
        model->indices[v129 + 1] = truncate_cast<unsigned short,unsigned int>(v135);
        model->indices[v132] = truncate_cast<unsigned short,unsigned int>(v133);
        v136 = v155;
        model->numIndices += 3;
        v131 = v136 + 1;
        v129 = model->numIndices;
        v128 = v148;
        v155 = v131;
        --v130;
      }
      while ( v130 );
    }
  }
  _R11 = &v161;
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
    vmovaps xmm14, xmmword ptr [r11-90h]
  }
}

/*
==============
R_GenerateOmniLightModelMain
==============
*/

void __fastcall R_GenerateOmniLightModelMain(const vec3_t *center, double radius, const vec3_t *bulbLength, GfxLightModelInterface *model)
{
  float v33; 
  float4 centerVec_8[9]; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vcomiss xmm1, cs:__real@3f8147ae
    vmovaps xmmword ptr [r11-68h], xmm7
  }
  _RSI = bulbLength;
  __asm { vmovaps xmmword ptr [r11-78h], xmm8 }
  _RDI = center;
  __asm
  {
    vmovaps xmmword ptr [r11-88h], xmm9
    vmovaps xmm8, xmm1
  }
  *(_QWORD *)&model->numVerts = 0i64;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  xmm4, dword ptr [rsi+4]
    vmovss  xmm5, dword ptr [rsi]
    vmovss  xmm9, dword ptr [rsi+8]
  }
  centerVec_8[0].v.m128_i32[3] = 0;
  __asm
  {
    vmovups xmm7, xmmword ptr [rsp+120h+centerVec.v+8]
    vmovss  xmm7, xmm7, xmm0
    vinsertps xmm7, xmm7, dword ptr [rdi+4], 10h
    vinsertps xmm7, xmm7, dword ptr [rdi+8], 20h ; ' '
    vmulss  xmm1, xmm5, xmm5
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm9, xmm9
    vaddss  xmm3, xmm2, xmm1
    vcomiss xmm3, cs:__real@41800000
    vmovups xmmword ptr [rsp+120h+centerVec.v+8], xmm7
    vmovups xmmword ptr [rsp+120h+centerVec.v+8], xmm7
    vmovaps ymm0, cs:__ymm@3f800000000000003f800000000000003f80000000000000000000003f800000
    vsqrtss xmm1, xmm3, xmm3
    vmovups ymmword ptr [rsp+120h+var_C8.v+8], ymm0
    vmovups xmm0, cs:__xmm@3f8000003f8000000000000000000000
    vaddss  xmm2, xmm1, xmm8
    vmovss  [rsp+120h+var_F8], xmm2
    vmovups xmmword ptr [rbp+20h+var_C8.v+28h], xmm0
  }
  R_GenerateOmniLightModelInternal(MESH_ALL_SIDES, 6u, 6u, centerVec_8, (const float4 (*)[3])&centerVec_8[1], v33, model);
  __asm
  {
    vmovaps xmm9, [rsp+120h+var_88+8]
    vmovaps xmm8, [rsp+120h+var_78+8]
    vmovaps xmm7, [rsp+120h+var_68+8]
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
  float v8; 
  GfxLightModelInterface model; 

  __asm { vmovss  xmm0, [rsp+78h+bulbRadius] }
  model.positionsStride = 12;
  model.positions = lightModel->verts;
  model.indices = lightModel->indices;
  __asm { vmovss  [rsp+78h+var_50], xmm0 }
  R_GenerateSpotLightModelMain(lightOrigin, lightDir, coneCosHalfFov, radius, bulbLengthVec, v8, &model);
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
  LightProxyMesh v25; 
  unsigned int v27; 
  char v77; 
  __int64 v82; 
  unsigned int numVerts; 
  const float4 *v86; 
  unsigned int v93; 
  unsigned int v94; 
  unsigned int v101; 
  unsigned int v102; 
  unsigned int v142; 
  unsigned int v145; 
  unsigned int v146; 
  unsigned int v147; 
  __int64 v148; 
  unsigned int v149; 
  unsigned __int16 v150; 
  bool v151; 
  unsigned int v152; 
  unsigned int v153; 
  int v154; 
  unsigned int v155; 
  unsigned __int16 v156; 
  __int64 v157; 
  unsigned int v158; 
  LightProxyMesh v159; 
  __int64 v160; 
  __int64 v161; 
  unsigned int v162; 
  unsigned int numIndices; 
  unsigned int v164; 
  __int64 v165; 
  unsigned __int16 v166; 
  unsigned int v167; 
  unsigned __int16 v168; 
  unsigned int v169; 
  unsigned int v171; 
  unsigned int v172; 
  unsigned int v173; 
  unsigned int v174; 
  __int64 v175; 
  unsigned int v176; 
  unsigned int v177; 
  unsigned int v178; 
  __int64 v179; 
  __int64 v180; 
  __int64 v181; 
  unsigned __int16 v182; 
  unsigned __int16 v183; 
  unsigned int v184; 
  float fmt; 
  float v197; 
  float v198; 
  LightProxyMesh v199; 
  float c; 
  float s; 
  unsigned int v202; 
  __int64 v203; 
  unsigned int v204; 
  unsigned int v207; 
  const float4 *v208; 
  vec4_t plane; 
  float4 vertInOut; 
  __int128 v212; 
  __int128 v213; 
  char v214; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
    vmovaps xmmword ptr [rax-0D8h], xmm15
  }
  _RAX = axis;
  _RDI = topVec;
  v25 = type;
  v27 = kCircleSegment;
  v208 = topVec;
  v204 = kSphereSegment;
  v207 = kCircleSegment;
  v199 = type;
  __asm
  {
    vmovss  xmm7, [rbp+0A0h+coneAngleHalf]
    vmovups xmm8, xmmword ptr [rax+20h]
    vmovups xmm11, xmmword ptr [rax]
    vmovups xmm12, xmmword ptr [rax+10h]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rsi
    vdivss  xmm10, xmm7, xmm0
    vmovups [rsp+1A0h+var_130], xmm8
    vmovss  [rsp+1A0h+var_14C], xmm10
  }
  if ( kCircleSegment <= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1895, ASSERT_TYPE_ASSERT, "(kCircleSegment > 2)", (const char *)&queryFormat, "kCircleSegment > 2") )
    __debugbreak();
  __asm
  {
    vmovss  xmm13, cs:__real@3f800000
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, r14
  }
  if ( v25 )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@40490fdb
      vsubss  xmm1, xmm1, xmm13
      vdivss  xmm9, xmm0, xmm1
    }
    if ( v25 == MESH_LEFT_SIDE )
      __asm { vxorps  xmm9, xmm9, cs:__xmm@80000000800000008000000080000000 }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, cs:__real@40c90fdb
      vdivss  xmm9, xmm0, xmm1
    }
  }
  __asm { vmovaps xmm0, xmm7; radians }
  FastSinCos(*(const float *)&_XMM0, &s, &c);
  __asm { vxorps  xmm0, xmm0, xmm0; radians }
  FastSinCos(*(const float *)&_XMM0, &v198, &v197);
  __asm
  {
    vmovss  xmm6, [rbp+0A0h+coneRadius]
    vmulss  xmm2, xmm6, [rsp+1A0h+s]
    vmulss  xmm0, xmm2, [rsp+1A0h+var_170]
    vmovups xmm1, cs:__xmm@3f800000000000000000000000000000
    vmulss  xmm3, xmm2, [rsp+1A0h+var_16C]
    vmulss  xmm4, xmm6, [rsp+1A0h+c]
    vinsertps xmm1, xmm1, xmm0, 0
    vinsertps xmm1, xmm1, xmm3, 10h
    vinsertps xmm1, xmm1, xmm4, 20h ; ' '
    vmovaps xmm0, xmm7; radians
    vmovups [rbp+0A0h+var_100], xmm1
  }
  FastSinCos(*(const float *)&_XMM0, &s, &c);
  __asm { vmovaps xmm0, xmm9; radians }
  FastSinCos(*(const float *)&_XMM0, &v198, &v197);
  __asm
  {
    vmulss  xmm2, xmm6, [rsp+1A0h+s]
    vmulss  xmm3, xmm2, [rsp+1A0h+var_16C]
    vmulss  xmm2, xmm2, [rsp+1A0h+var_170]
    vmovups xmm1, cs:__xmm@3f800000000000000000000000000000
    vmulss  xmm4, xmm6, [rsp+1A0h+c]
    vinsertps xmm1, xmm1, xmm2, 0
    vinsertps xmm1, xmm1, xmm3, 10h
    vinsertps xmm1, xmm1, xmm4, 20h ; ' '
    vsubss  xmm0, xmm7, xmm10; radians
    vmovups [rbp+0A0h+var_F0], xmm1
  }
  FastSinCos(*(const float *)&_XMM0, &s, &c);
  __asm { vxorps  xmm0, xmm0, xmm0; radians }
  FastSinCos(*(const float *)&_XMM0, &v198, &v197);
  __asm
  {
    vmulss  xmm2, xmm6, [rsp+1A0h+s]
    vmulss  xmm0, xmm2, [rsp+1A0h+var_170]
    vmovups xmm1, cs:__xmm@3f800000000000000000000000000000
    vmulss  xmm3, xmm2, [rsp+1A0h+var_16C]
    vmulss  xmm4, xmm6, [rsp+1A0h+c]
    vinsertps xmm1, xmm1, xmm0, 0
    vmovss  xmm0, cs:__real@3a83126f
    vinsertps xmm1, xmm1, xmm3, 10h
    vinsertps xmm1, xmm1, xmm4, 20h ; ' '
    vmovups xmmword ptr [rbp+0A0h+vertInOut.v], xmm1
    vmovss  dword ptr [rsp+1A0h+fmt], xmm0
  }
  PlaneFromPoints(&plane, (const vec3_t *)&v212, (const vec3_t *)&v213, (const vec3_t *)&vertInOut, fmt);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0A0h+plane+0Ch]
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vdivss  xmm7, xmm6, xmm0
    vcomiss xmm7, xmm13
  }
  if ( v77 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1927, ASSERT_TYPE_ASSERT, "(coneRadiusScale >= 1.0f)", (const char *)&queryFormat, "coneRadiusScale >= 1.0f") )
    __debugbreak();
  __asm
  {
    vmulss  xmm0, xmm9, cs:__real@3f000000; X
    vmulss  xmm14, xmm6, xmm7
  }
  cosf_0(*(float *)&_XMM0);
  __asm
  {
    vdivss  xmm0, xmm13, xmm0
    vmaxss  xmm6, xmm0, xmm13
    vcomiss xmm6, xmm13
    vmovss  [rsp+1A0h+var_148], xmm6
  }
  if ( v77 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1938, ASSERT_TYPE_ASSERT, "(circleRadiusScale >= 1.0f)", (const char *)&queryFormat, "circleRadiusScale >= 1.0f") )
    __debugbreak();
  s = *(float *)&model->numVerts;
  v82 = model->positionsStride * LODWORD(s);
  model->numVerts = LODWORD(s) + 1;
  __asm { vmovups xmm1, xmmword ptr [rdi] }
  _RCX = (char *)model->positions + v82;
  __asm
  {
    vmovss  dword ptr [rcx], xmm1
    vextractps dword ptr [rcx+4], xmm1, 1
    vextractps dword ptr [rcx+8], xmm1, 2
  }
  if ( model->numVerts > 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1943, ASSERT_TYPE_ASSERT, "(model->numVerts <= MAX_LIGHT_MODEL_VERTS)", (const char *)&queryFormat, "model->numVerts <= MAX_LIGHT_MODEL_VERTS") )
    __debugbreak();
  numVerts = model->numVerts;
  v86 = lineCenter;
  _R12 = lineHalfVec;
  c = *(float *)&model->numVerts;
  __asm
  {
    vmovaps xmm15, xmm14
    vshufps xmm15, xmm15, xmm15, 0
    vmulps  xmm0, xmm15, xmm8
    vaddps  xmm2, xmm0, xmmword ptr [rdi]
    vmovups xmmword ptr [rbp+0A0h+vertInOut.v], xmm2
  }
  if ( lineCenter && lineHalfVec )
  {
    __asm { vmovaps xmm1, xmm14; coneRadius }
    R_AdjustSpotLightModelVertForLineLight(&vertInOut, *(double *)&_XMM1, lineCenter, lineHalfVec);
    numVerts = model->numVerts;
    __asm { vmovups xmm2, xmmword ptr [rbp+0A0h+vertInOut.v] }
  }
  v93 = numVerts + 1;
  v94 = model->positionsStride * numVerts;
  model->numVerts = v93;
  _RAX = (char *)model->positions + v94;
  __asm
  {
    vmovss  dword ptr [rax], xmm2
    vextractps dword ptr [rax+4], xmm2, 1
    vextractps dword ptr [rax+8], xmm2, 2
  }
  if ( model->numVerts > 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1953, ASSERT_TYPE_ASSERT, "(model->numVerts <= MAX_LIGHT_MODEL_VERTS)", (const char *)&queryFormat, "model->numVerts <= MAX_LIGHT_MODEL_VERTS") )
    __debugbreak();
  v202 = 0;
  if ( kSphereSegment )
  {
    __asm { vmovss  xmm10, cs:__real@4096cbe4 }
    do
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vaddss  xmm1, xmm0, xmm13
        vmulss  xmm0, xmm1, [rsp+1A0h+var_14C]; radians
      }
      FastSinCos(*(const float *)&_XMM0, &v198, &v197);
      __asm { vmulss  xmm1, xmm14, [rsp+1A0h+var_16C] }
      v101 = 0;
      v102 = model->numVerts;
      LODWORD(v203) = model->numVerts;
      __asm
      {
        vmulss  xmm7, xmm1, xmm6
        vmulss  xmm1, xmm14, [rsp+1A0h+var_170]
        vshufps xmm1, xmm1, xmm1, 0
        vmulps  xmm1, xmm1, xmm8
        vaddps  xmm8, xmm1, xmmword ptr [rax]
      }
      if ( v27 )
      {
        do
        {
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, rax
            vmulss  xmm1, xmm0, xmm9
            vaddss  xmm0, xmm1, xmm10; radians
          }
          FastSinCos(*(const float *)&_XMM0, &v198, &v197);
          __asm
          {
            vmulss  xmm0, xmm7, [rsp+1A0h+var_170]
            vmulss  xmm1, xmm7, [rsp+1A0h+var_16C]
            vshufps xmm0, xmm0, xmm0, 0
            vmulps  xmm0, xmm0, xmm11
            vaddps  xmm2, xmm0, xmm8
            vshufps xmm1, xmm1, xmm1, 0
            vmulps  xmm0, xmm1, xmm12
            vaddps  xmm6, xmm2, xmm0
          }
          if ( v86 && _R12 )
          {
            __asm
            {
              vmovups xmm1, xmmword ptr [r12]
              vmulps  xmm1, xmm1, xmm1
              vinsertps xmm2, xmm1, xmm1, 8
              vsubps  xmm1, xmm6, xmmword ptr [r13+0]
              vmulps  xmm1, xmm1, xmmword ptr [r12]
              vhaddps xmm0, xmm2, xmm2
              vinsertps xmm2, xmm1, xmm1, 8
              vhaddps xmm3, xmm0, xmm0
              vhaddps xmm0, xmm2, xmm2
              vhaddps xmm1, xmm0, xmm0
              vdivss  xmm0, xmm1, xmm3; val
              vmovss  xmm1, cs:__real@bf800000; min
              vmovaps xmm2, xmm13; max
            }
            *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
            __asm
            {
              vshufps xmm0, xmm0, xmm0, 0
              vmulps  xmm0, xmm0, xmmword ptr [r12]
              vaddps  xmm4, xmm0, xmmword ptr [r13+0]
              vsubps  xmm3, xmm6, xmm4
              vmulps  xmm0, xmm3, xmm3
              vinsertps xmm1, xmm0, xmm0, 8
              vhaddps xmm2, xmm1, xmm1
              vhaddps xmm0, xmm2, xmm2
              vsqrtps xmm1, xmm0
              vdivps  xmm2, xmm3, xmm1
              vmulps  xmm3, xmm2, xmm15
              vaddps  xmm6, xmm3, xmm4
            }
          }
          v142 = model->positionsStride * model->numVerts++;
          _RAX = (char *)model->positions + v142;
          __asm
          {
            vmovss  dword ptr [rax], xmm6
            vextractps dword ptr [rax+4], xmm6, 1
            vextractps dword ptr [rax+8], xmm6, 2
          }
          if ( model->numVerts >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1989, ASSERT_TYPE_ASSERT, "(model->numVerts < MAX_LIGHT_MODEL_VERTS)", (const char *)&queryFormat, "model->numVerts < MAX_LIGHT_MODEL_VERTS") )
            __debugbreak();
          ++v101;
        }
        while ( v101 < v27 );
        __asm { vmovss  xmm6, [rsp+1A0h+var_148] }
        v102 = v203;
        v25 = v199;
      }
      if ( v25 )
      {
        v157 = v27 - 1;
        if ( v202 )
        {
          if ( v27 != 1 )
          {
            numIndices = model->numIndices;
            v164 = v102 - v27;
            vertInOut.v.m128_u64[0] = v27 - 1;
            do
            {
              if ( numIndices + 5 >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1688, ASSERT_TYPE_ASSERT, "(firstIndex + 5 < MAX_LIGHT_MODEL_INDICES)", (const char *)&queryFormat, "firstIndex + 5 < MAX_LIGHT_MODEL_INDICES") )
                __debugbreak();
              *(_QWORD *)plane.v = numIndices + 2;
              v165 = numIndices + 1;
              v203 = numIndices + 3;
              *(_QWORD *)&v212 = numIndices + 4;
              *(_QWORD *)&v213 = numIndices + 5;
              v166 = truncate_cast<unsigned short,unsigned int>(v164);
              v167 = v164 + v27 + 1;
              v151 = v199 == MESH_LEFT_SIDE;
              model->indices[numIndices] = v166;
              if ( v151 )
              {
                model->indices[v165] = truncate_cast<unsigned short,unsigned int>(v167);
                model->indices[*(_QWORD *)plane.v] = truncate_cast<unsigned short,unsigned int>(v164 + 1);
                model->indices[v203] = truncate_cast<unsigned short,unsigned int>(v164);
                v168 = truncate_cast<unsigned short,unsigned int>(v164 + v27);
                v169 = v164 + v27 + 1;
                model->indices[v212] = v168;
              }
              else
              {
                model->indices[v165] = truncate_cast<unsigned short,unsigned int>(v164 + 1);
                model->indices[*(_QWORD *)plane.v] = truncate_cast<unsigned short,unsigned int>(v167);
                model->indices[v203] = truncate_cast<unsigned short,unsigned int>(v164);
                model->indices[v212] = truncate_cast<unsigned short,unsigned int>(v167);
                v169 = v164 + v27;
              }
              ++v164;
              model->indices[v213] = truncate_cast<unsigned short,unsigned int>(v169);
              model->numIndices += 6;
              v151 = vertInOut.v.m128_u64[0]-- == 1;
              numIndices = model->numIndices;
            }
            while ( !v151 );
            goto LABEL_70;
          }
        }
        else if ( v27 != 1 )
        {
          v158 = model->numIndices;
          v159 = v199;
          *(_QWORD *)plane.v = v157;
          do
          {
            v160 = v158 + 2;
            if ( (unsigned int)v160 >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1718, ASSERT_TYPE_ASSERT, "(firstIndex + 2 < MAX_LIGHT_MODEL_INDICES)", (const char *)&queryFormat, "firstIndex + 2 < MAX_LIGHT_MODEL_INDICES") )
              __debugbreak();
            v161 = v158 + 1;
            model->indices[v158] = truncate_cast<unsigned short,unsigned int>(LODWORD(c));
            if ( v159 == MESH_LEFT_SIDE )
            {
              model->indices[v161] = truncate_cast<unsigned short,unsigned int>(v102);
              v162 = v102 + 1;
            }
            else
            {
              model->indices[v161] = truncate_cast<unsigned short,unsigned int>(v102 + 1);
              v162 = v102;
            }
            ++v102;
            model->indices[v160] = truncate_cast<unsigned short,unsigned int>(v162);
            model->numIndices += 3;
            v151 = (*(_QWORD *)plane.v)-- == 1i64;
            v158 = model->numIndices;
          }
          while ( !v151 );
          v27 = v207;
          goto LABEL_70;
        }
      }
      else if ( v202 )
      {
        if ( v27 )
        {
          v152 = model->numIndices;
          v153 = v102 - v27;
          *(_QWORD *)plane.v = v27;
          v154 = v27 - v102 + 1;
          LODWORD(v203) = v154;
          do
          {
            v155 = v102 + (v153 + v154) % v27;
            if ( v152 + 5 >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1688, ASSERT_TYPE_ASSERT, "(firstIndex + 5 < MAX_LIGHT_MODEL_INDICES)", (const char *)&queryFormat, "firstIndex + 5 < MAX_LIGHT_MODEL_INDICES") )
              __debugbreak();
            model->indices[v152] = truncate_cast<unsigned short,unsigned int>(v153);
            model->indices[v152 + 1] = truncate_cast<unsigned short,unsigned int>(v155 - v27);
            model->indices[v152 + 2] = truncate_cast<unsigned short,unsigned int>(v155);
            model->indices[v152 + 3] = truncate_cast<unsigned short,unsigned int>(v153);
            model->indices[v152 + 4] = truncate_cast<unsigned short,unsigned int>(v155);
            v156 = truncate_cast<unsigned short,unsigned int>(v153 + v27);
            ++v153;
            model->indices[v152 + 5] = v156;
            model->numIndices += 6;
            v151 = (*(_QWORD *)plane.v)-- == 1i64;
            v152 = model->numIndices;
            v154 = v203;
          }
          while ( !v151 );
          goto LABEL_70;
        }
      }
      else if ( v27 )
      {
        v145 = model->numIndices;
        v146 = 1 - v102;
        LODWORD(v203) = 1 - v102;
        v147 = v102;
        *(_QWORD *)plane.v = v27;
        do
        {
          v148 = v145 + 2;
          v149 = v102 + (v147 + v146) % v27;
          if ( (unsigned int)v148 >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1718, ASSERT_TYPE_ASSERT, "(firstIndex + 2 < MAX_LIGHT_MODEL_INDICES)", (const char *)&queryFormat, "firstIndex + 2 < MAX_LIGHT_MODEL_INDICES") )
            __debugbreak();
          model->indices[v145] = truncate_cast<unsigned short,unsigned int>(LODWORD(c));
          model->indices[v145 + 1] = truncate_cast<unsigned short,unsigned int>(v149);
          v150 = truncate_cast<unsigned short,unsigned int>(v147++);
          model->indices[v148] = v150;
          model->numIndices += 3;
          v151 = (*(_QWORD *)plane.v)-- == 1i64;
          v145 = model->numIndices;
          v146 = v203;
        }
        while ( !v151 );
LABEL_70:
        v86 = lineCenter;
        v25 = v199;
      }
      __asm { vmovups xmm8, [rsp+1A0h+var_130] }
      _R12 = lineHalfVec;
      ++v202;
    }
    while ( v202 < v204 );
  }
  v171 = model->numVerts - v27;
  if ( v25 )
  {
    v177 = v27 - 1;
    if ( v177 )
    {
      v178 = model->numIndices;
      v179 = v177;
      do
      {
        v180 = v178 + 2;
        if ( (unsigned int)v180 >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1718, ASSERT_TYPE_ASSERT, "(firstIndex + 2 < MAX_LIGHT_MODEL_INDICES)", (const char *)&queryFormat, "firstIndex + 2 < MAX_LIGHT_MODEL_INDICES") )
          __debugbreak();
        v181 = v178 + 1;
        v182 = truncate_cast<unsigned short,unsigned int>(LODWORD(s));
        v151 = v199 == MESH_LEFT_SIDE;
        model->indices[v178] = v182;
        if ( v151 )
        {
          v183 = truncate_cast<unsigned short,unsigned int>(v171 + 1);
          v184 = v171;
          model->indices[v181] = v183;
        }
        else
        {
          model->indices[v181] = truncate_cast<unsigned short,unsigned int>(v171);
          v184 = v171 + 1;
        }
        ++v171;
        model->indices[v180] = truncate_cast<unsigned short,unsigned int>(v184);
        model->numIndices += 3;
        v178 = model->numIndices;
        --v179;
      }
      while ( v179 );
    }
  }
  else if ( v27 )
  {
    v172 = model->numIndices;
    v173 = 1 - v171;
    v174 = model->numVerts - v27;
    v204 = 1 - v171;
    vertInOut.v.m128_u64[0] = v27;
    do
    {
      v175 = v172 + 2;
      v176 = v171 + (v173 + v174) % v27;
      if ( (unsigned int)v175 >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1718, ASSERT_TYPE_ASSERT, "(firstIndex + 2 < MAX_LIGHT_MODEL_INDICES)", (const char *)&queryFormat, "firstIndex + 2 < MAX_LIGHT_MODEL_INDICES") )
        __debugbreak();
      model->indices[v172] = truncate_cast<unsigned short,unsigned int>(LODWORD(s));
      model->indices[v172 + 1] = truncate_cast<unsigned short,unsigned int>(v174++);
      model->indices[v175] = truncate_cast<unsigned short,unsigned int>(v176);
      model->numIndices += 3;
      v151 = vertInOut.v.m128_u64[0]-- == 1;
      v172 = model->numIndices;
      v173 = v204;
    }
    while ( !v151 );
  }
  _R11 = &v214;
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
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
R_GenerateSpotLightModelMain
==============
*/

void __fastcall R_GenerateSpotLightModelMain(const vec3_t *lightOrigin, const vec3_t *lightDirIn, double cosHalfFov, double radius, const vec3_t *bulbLength, const float bulbRadius, GfxLightModelInterface *model)
{
  unsigned int numVerts; 
  unsigned int v100; 
  unsigned int numIndices; 
  unsigned int v104; 
  int v105; 
  unsigned int v106; 
  unsigned __int16 v107; 
  bool v108; 
  unsigned int v109; 
  unsigned int v110; 
  int v111; 
  __int64 v112; 
  unsigned __int16 v113; 
  float v125; 
  float v126; 
  float v127; 
  float v128; 
  unsigned int val; 
  unsigned int vala; 
  unsigned int v131; 
  unsigned int v132; 
  int topVec; 
  unsigned int topVec_4; 
  float4 topVec_8; 
  float4 axis[3]; 
  __int128 v; 
  char v140; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
    vmovaps xmmword ptr [rax-0A8h], xmm11
    vmovaps xmmword ptr [rax-0B8h], xmm12
    vmovaps xmmword ptr [rax-0C8h], xmm13
    vmovaps xmmword ptr [rax-0D8h], xmm14
    vmovaps xmmword ptr [rax-0E8h], xmm15
    vmovss  xmm0, dword ptr [rdx]
    vmovss  xmm9, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm1, dword ptr [rdx+8]
    vcomiss xmm3, cs:__real@3f8147ae
  }
  _R15 = bulbLength;
  _RDI = lightOrigin;
  __asm
  {
    vmovss  xmm10, cs:__real@3f800000
    vxorps  xmm6, xmm0, xmm9
    vmovss  xmm0, dword ptr [rdx+4]
    vxorps  xmm11, xmm0, xmm9
  }
  *(_QWORD *)&model->numVerts = 0i64;
  __asm
  {
    vmovaps xmm7, xmm3
    vmovaps xmm8, xmm2
    vxorps  xmm14, xmm1, xmm9
    vucomiss xmm2, xmm10
    vcvtss2sd xmm3, xmm8, xmm8
    vcvtss2sd xmm2, xmm7, xmm7
    vmovq   r9, xmm3
    vmovq   r8, xmm2
  }
  Com_PrintWarning(8, "Small spot light radius = %f, cosHalfFov = %f\n", _R8, _R9);
  numVerts = model->numVerts;
  __asm { vmovaps xmm0, xmm8; X }
  *(float *)&_XMM0 = acosf_0(*(float *)&_XMM0);
  __asm
  {
    vmovss  xmm1, dword ptr [rdi]
    vmovaps xmm15, xmm0
    vmovss  xmm0, dword ptr [r15]
  }
  HIDWORD(v) = 0;
  __asm
  {
    vmovups xmm13, xmmword ptr [rbp-60h]
    vmovss  xmm13, xmm13, xmm1
    vinsertps xmm13, xmm13, dword ptr [rdi+4], 10h
    vinsertps xmm13, xmm13, dword ptr [rdi+8], 20h ; ' '
    vmovups xmmword ptr [rbp-60h], xmm13
  }
  HIDWORD(v) = 0;
  __asm
  {
    vmovups xmm12, xmmword ptr [rbp-60h]
    vmovss  xmm12, xmm12, xmm6
    vinsertps xmm12, xmm12, xmm11, 10h
    vinsertps xmm12, xmm12, xmm14, 20h ; ' '
    vmovups xmmword ptr [rbp-60h], xmm12
    vshufps xmm6, xmm12, xmm12, 0C9h ; 'É'
  }
  HIDWORD(v) = 0;
  __asm
  {
    vmovups xmm11, xmmword ptr [rbp-60h]
    vmovss  xmm11, xmm11, xmm0
    vinsertps xmm11, xmm11, dword ptr [r15+4], 10h
    vinsertps xmm11, xmm11, dword ptr [r15+8], 20h ; ' '
    vmulps  xmm0, xmm11, xmm11
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vsqrtps xmm1, xmm0
    vdivps  xmm2, xmm11, xmm1
    vmulps  xmm3, xmm2, xmm12
    vinsertps xmm0, xmm3, xmm3, 8
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm14, xmm1, xmm1
    vandps  xmm14, xmm14, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm14, cs:__real@3c23d70a
    vshufps xmm1, xmm11, xmm11, 0C9h ; 'É'
    vshufps xmm5, xmm12, xmm12, 0D2h ; 'Ò'
    vmulps  xmm2, xmm1, xmm5
    vshufps xmm0, xmm11, xmm11, 0D2h ; 'Ò'
    vmulps  xmm3, xmm0, xmm6
    vsubps  xmm4, xmm3, xmm2
    vmulps  xmm0, xmm4, xmm4
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vsqrtps xmm1, xmm0
    vdivps  xmm1, xmm4, xmm1
    vshufps xmm0, xmm1, xmm1, 0C9h ; 'É'
    vmulps  xmm3, xmm0, xmm5
    vmovups xmmword ptr [rbp-60h], xmm11
    vmovups xmmword ptr [rbp-60h], xmm1
    vshufps xmm1, xmm1, xmm1, 0D2h ; 'Ò'
    vmulps  xmm2, xmm1, xmm6
    vsubps  xmm4, xmm3, xmm2
    vmulps  xmm0, xmm4, xmm4
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm1, xmm2, xmm2
    vsqrtps xmm2, xmm1
    vdivps  xmm6, xmm4, xmm2
    vmovups [rbp+0C0h+var_110], xmm13
    vmovups [rbp+0C0h+var_100], xmm11
    vmovaps xmm1, xmm10
    vmovups xmm0, xmmword ptr [rbp-60h]
    vmulss  xmm2, xmm8, [rbp+0C0h+bulbRadius]
    vmovdqa xmmword ptr [rbp+0C0h+var_158.v+18h], xmm0
    vmulss  xmm7, xmm7, xmm1
    vmulss  xmm0, xmm8, xmm8
    vsubss  xmm0, xmm10, xmm0
    vsqrtss xmm1, xmm0, xmm0
    vdivss  xmm2, xmm2, xmm1
    vxorps  xmm3, xmm2, xmm9
    vshufps xmm3, xmm3, xmm3, 0
    vmovdqa xmmword ptr [rsp+1C0h+var_158.v+8], xmm6
    vmulps  xmm6, xmm3, xmm12
    vsubps  xmm4, xmm13, xmm11
  }
  *(_QWORD *)&v = 3i64;
  __asm
  {
    vaddps  xmm0, xmm4, xmm6
    vmovss  dword ptr [rsp+1C0h+var_190], xmm7
    vmovss  [rsp+1C0h+var_198], xmm15
    vmovups xmmword ptr [rsp+1C0h+topVec.v+8], xmm0
    vmovdqa xmmword ptr [rbp+0C0h+var_158.v+28h], xmm12
  }
  R_GenerateSpotLightModelInternal(MESH_LEFT_SIDE, 4u, 3u, &topVec_8, (const float4 (*)[3])axis, v125, v127, NULL, NULL, model);
  v100 = model->numVerts;
  __asm
  {
    vaddps  xmm0, xmm13, xmm11
    vmovss  dword ptr [rsp+1C0h+var_190], xmm7
    vaddps  xmm0, xmm0, xmm6
    vmovss  [rsp+1C0h+var_198], xmm15
    vmovups xmmword ptr [rsp+1C0h+topVec.v+8], xmm0
  }
  R_GenerateSpotLightModelInternal(MESH_RIGHT_SIDE, 4u, 3u, &topVec_8, (const float4 (*)[3])axis, v126, v128, NULL, NULL, model);
  numIndices = model->numIndices;
  v104 = v100 + 2;
  topVec_8.v.m128_u64[0] = 3i64;
  v105 = 1;
  do
  {
    topVec = v104;
    val = numVerts + v105;
    v106 = v105 + v100;
    v105 = v104 - v100;
    v131 = v106;
    if ( numIndices + 5 >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1688, ASSERT_TYPE_ASSERT, "(firstIndex + 5 < MAX_LIGHT_MODEL_INDICES)", (const char *)&queryFormat, "firstIndex + 5 < MAX_LIGHT_MODEL_INDICES") )
      __debugbreak();
    model->indices[numIndices] = truncate_cast<unsigned short,unsigned int>(val);
    model->indices[numIndices + 1] = truncate_cast<unsigned short,unsigned int>(v131);
    model->indices[numIndices + 2] = truncate_cast<unsigned short,unsigned int>(v104);
    model->indices[numIndices + 3] = truncate_cast<unsigned short,unsigned int>(val);
    model->indices[numIndices + 4] = truncate_cast<unsigned short,unsigned int>(v104);
    v107 = truncate_cast<unsigned short,unsigned int>(numVerts - v100 + v104);
    v104 += 4;
    model->indices[numIndices + 5] = v107;
    model->numIndices += 6;
    v108 = topVec_8.v.m128_u64[0]-- == 1;
    numIndices = model->numIndices;
  }
  while ( !v108 );
  topVec_8.v.m128_u64[0] = __PAIR64__(numVerts, v100);
  topVec_8.v.m128_i32[2] = numVerts + v105;
  topVec_8.v.m128_i32[3] = topVec;
  R_AddQuadToLightModel((const unsigned int *)&topVec_8, model, 0);
  v109 = model->numIndices;
  v110 = numVerts + 5;
  v111 = 1;
  do
  {
    v132 = v110;
    vala = v111 + v100;
    topVec_4 = numVerts + v111;
    v111 = v110 - numVerts;
    v112 = v109 + 5;
    if ( (unsigned int)v112 >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1688, ASSERT_TYPE_ASSERT, "(firstIndex + 5 < MAX_LIGHT_MODEL_INDICES)", (const char *)&queryFormat, "firstIndex + 5 < MAX_LIGHT_MODEL_INDICES") )
      __debugbreak();
    model->indices[v109] = truncate_cast<unsigned short,unsigned int>(vala);
    model->indices[v109 + 1] = truncate_cast<unsigned short,unsigned int>(topVec_4);
    model->indices[v109 + 2] = truncate_cast<unsigned short,unsigned int>(v110);
    model->indices[v109 + 3] = truncate_cast<unsigned short,unsigned int>(vala);
    model->indices[v109 + 4] = truncate_cast<unsigned short,unsigned int>(v110);
    v113 = truncate_cast<unsigned short,unsigned int>(v110 + v100 - numVerts);
    v110 += 4;
    model->indices[v112] = v113;
    model->numIndices += 6;
    v108 = (_QWORD)v == 1i64;
    *(_QWORD *)&v = v - 1;
    v109 = model->numIndices;
  }
  while ( !v108 );
  *(_QWORD *)&v = __PAIR64__(v100, numVerts);
  DWORD2(v) = v111 + v100;
  HIDWORD(v) = v132;
  R_AddQuadToLightModel((const unsigned int *)&v, model, 0);
  if ( model->numIndices >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 2195, ASSERT_TYPE_ASSERT, "(model->numIndices < MAX_LIGHT_MODEL_INDICES)", (const char *)&queryFormat, "model->numIndices < MAX_LIGHT_MODEL_INDICES") )
    __debugbreak();
  if ( model->numVerts >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 2196, ASSERT_TYPE_ASSERT, "(model->numVerts < MAX_LIGHT_MODEL_VERTS)", (const char *)&queryFormat, "model->numVerts < MAX_LIGHT_MODEL_VERTS") )
    __debugbreak();
  _R11 = &v140;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, xmmword ptr [r11-88h]
    vmovaps xmm14, xmmword ptr [r11-98h]
    vmovaps xmm15, xmmword ptr [r11-0A8h]
  }
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
  __m256i v17; 

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
  v17.m256i_i16[0] = 0;
  v17.m256i_i32[2] = 0;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+98h+var_48+10h], xmm0
    vmovups ymm1, [rsp+98h+var_48]
    vmovups ymmword ptr cs:s_frustumLights.maskBuffer.baseclass_0.m_surfaceID, ymm1
  }
  v17.m256i_i16[0] = 0;
  v17.m256i_i32[2] = 0;
  __asm
  {
    vmovdqu xmmword ptr [rsp+98h+var_48+10h], xmm0
    vmovups ymm1, [rsp+98h+var_48]
    vmovups ymmword ptr cs:s_frustumLights.maskClusterBuffer.baseclass_0.m_surfaceID, ymm1
  }
}

/*
==============
R_IsCameraInsideLightMeshVolume
==============
*/

bool __fastcall R_IsCameraInsideLightMeshVolume(unsigned int lightIndex, const vec3_t *cameraOrigin, double margin)
{
  unsigned __int16 *v10; 
  int v11; 
  unsigned int v12; 
  __int64 v17; 
  __int64 v25; 
  bool v26; 
  bool result; 
  __int128 v50; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
    vmovaps [rsp+58h+var_38], xmm8
  }
  _R10 = cameraOrigin;
  __asm
  {
    vmovaps xmm8, xmm2
    vmovss  xmm0, dword ptr [r10]
  }
  _R11 = &rgp.world->frustumLights.vertices[16 * rgp.world->frustumLights.verticesOffsets[lightIndex]];
  v10 = &rgp.world->frustumLights.indices[rgp.world->frustumLights.indices[lightIndex]];
  v11 = 0;
  HIDWORD(v50) = 0;
  v12 = rgp.world->frustumLights.indicesCounts[lightIndex] / 3u;
  __asm
  {
    vmovups xmm7, xmmword ptr [rsp]
    vmovss  xmm7, xmm7, xmm0
    vinsertps xmm7, xmm7, dword ptr [r10+4], 10h
    vinsertps xmm7, xmm7, dword ptr [r10+8], 20h ; ' '
  }
  if ( v12 )
  {
    while ( 1 )
    {
      v17 = (unsigned int)(3 * v11);
      _RCX = 2i64 * v10[v17];
      _RAX = 2i64 * v10[(unsigned int)(v17 + 1)];
      __asm
      {
        vmovups xmm6, xmmword ptr [r11+rcx*8]
        vmovups xmm1, xmmword ptr [r11+rax*8]
        vsubps  xmm2, xmm1, xmm6
        vshufps xmm1, xmm2, xmm2, 0C9h ; 'É'
        vshufps xmm2, xmm2, xmm2, 0D2h ; 'Ò'
      }
      v25 = 16i64 * v10[(unsigned int)(v17 + 2)];
      v26 = __CFADD__(_R11, v25);
      _RAX = &_R11[v25];
      __asm
      {
        vmovups xmm0, xmmword ptr [rax]
        vsubps  xmm4, xmm0, xmm6
        vshufps xmm0, xmm4, xmm4, 0D2h ; 'Ò'
        vmulps  xmm3, xmm1, xmm0
        vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
        vmulps  xmm0, xmm2, xmm1
        vsubps  xmm5, xmm3, xmm0
        vmulps  xmm1, xmm5, xmm5
        vinsertps xmm0, xmm1, xmm1, 8
        vhaddps xmm2, xmm0, xmm0
        vhaddps xmm0, xmm2, xmm2
        vsqrtps xmm1, xmm0
        vdivps  xmm3, xmm5, xmm1
        vsubps  xmm0, xmm6, xmm7
        vmulps  xmm1, xmm0, xmm3
        vinsertps xmm2, xmm1, xmm1, 8
        vhaddps xmm0, xmm2, xmm2
        vhaddps xmm1, xmm0, xmm0
        vcomiss xmm1, xmm8
      }
      if ( !v26 )
        break;
      if ( ++v11 >= v12 )
        goto LABEL_4;
    }
    result = 0;
  }
  else
  {
LABEL_4:
    result = 1;
  }
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
    vmovaps xmm8, [rsp+58h+var_38]
  }
  return result;
}

/*
==============
R_RenderFrustumLightsClusterBuffer
==============
*/
void R_RenderFrustumLightsClusterBuffer(GfxCmdBufContext *context, const GfxViewInfo *viewInfo, const GfxBackEndData *data, R_RT_BufferHandle *maskClusterBuffer)
{
  __int64 frustumLightsIndex; 
  GfxCmdBufSourceState *source; 
  const GfxBackEndData *v9; 
  GfxCmdBufState *state; 
  unsigned int v12; 
  unsigned int voxelCountY; 
  unsigned int voxelCountX; 
  GfxCmdBufSourceState *v15; 
  int v16; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int v19; 
  unsigned int v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  unsigned int *v24; 
  bool *v25; 
  __int64 v26; 
  unsigned int primaryLightCount; 
  GfxFrustumLights *p_frustumLights; 
  __int64 v29; 
  __int64 v30; 
  unsigned int v32; 
  int v33; 
  unsigned int v35; 
  __int64 v36; 
  unsigned int v37; 
  __int64 v39; 
  int v40; 
  __int64 v41; 
  __int64 v42; 
  GfxCmdBufState *bufferData; 
  int v44; 
  __int64 v45; 
  bool v72; 
  void *v74; 
  void *v75; 
  R_RT_Handle *v76; 
  const R_RT_Surface *Surface; 
  unsigned int v80; 
  __int64 v81; 
  GfxFrustumLights *v82; 
  GfxWrappedBuffer *p_vertexBuffer; 
  __int64 v85; 
  char v86; 
  bool v87; 
  unsigned int *v88; 
  __int64 v89; 
  __int64 v90; 
  unsigned int v91; 
  GfxCmdBufSourceState *v92; 
  __int64 v95; 
  GfxCmdBufContext v96; 
  GfxConstantBufferDesc cbuff; 
  bool *i; 
  R_RT_Handle *v99; 
  GfxConstantBufferDesc result; 
  GfxViewport viewport; 
  unsigned int drawCount[2]; 
  __int64 v103; 
  int v104[4]; 
  _BYTE dataa[10240]; 

  frustumLightsIndex = data->frustumLightsIndex;
  source = context->source;
  v9 = data;
  state = context->state;
  v12 = s_frustumLights.lightCount[frustumLightsIndex];
  v99 = maskClusterBuffer;
  v96.source = (GfxCmdBufSourceState *)viewInfo;
  v92 = source;
  result.bufferData = state;
  v90 = frustumLightsIndex;
  v91 = v12;
  if ( v12 > 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1268, ASSERT_TYPE_ASSERT, "(frustumLightCount <= 256)", (const char *)&queryFormat, "frustumLightCount <= FRUSTUM_GRID_MAX_LIGHTS") )
    __debugbreak();
  if ( !s_frustumLights.setupForFrame[frustumLightsIndex] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1269, ASSERT_TYPE_ASSERT, "(s_frustumLights.setupForFrame[frame])", (const char *)&queryFormat, "s_frustumLights.setupForFrame[frame]") )
    __debugbreak();
  if ( v12 )
  {
    source->viewStatsTarget = GFX_VIEW_STATS_OPAQUE;
    voxelCountY = viewInfo->frustumGrid.voxelCountY;
    voxelCountX = viewInfo->frustumGrid.voxelCountX;
    v15 = source;
    __asm
    {
      vmovaps [rsp+2960h+var_50], xmm6
      vmovaps [rsp+2960h+var_60], xmm7
    }
    R_SetRenderTargetSize(source, voxelCountX, voxelCountY, GFX_USE_VIEWPORT_FOR_VIEW);
    viewport.width = viewInfo->frustumGrid.voxelCountX;
    v16 = 0;
    viewport.height = viewInfo->frustumGrid.voxelCountY;
    *(_QWORD *)&viewport.x = 0i64;
    R_SetViewportStruct(v15, &viewport);
    R_SetViewportAndScissorSeparate(context->state, &viewport, &viewport);
    R_BeginViewInternal(v15, &viewInfo->sceneDef, (const GfxViewParms *)viewInfo, &viewInfo->viewParmsSet.frames[1].viewParms);
    R_Set3D(v15);
    if ( state->depthRangeType )
      R_ChangeDepthRange(state, GFX_DEPTH_RANGE_SCENE);
    R_UpdateViewport(v15, &v15->sceneViewport);
    v104[0] = 0;
    v17 = s_frustumLights.staticOutsideLights[frustumLightsIndex] + s_frustumLights.staticInsideLights[frustumLightsIndex];
    v18 = s_frustumLights.dynamicOutsideLights[frustumLightsIndex] + s_frustumLights.dynamicInsideLights[frustumLightsIndex];
    *(_QWORD *)drawCount = 0i64;
    v103 = 0i64;
    v104[1] = v17;
    v104[2] = v18 + v17;
    v19 = s_frustumLights.staticWalkFrontLights[frustumLightsIndex] + v18 + v17;
    v20 = 0;
    v104[3] = v19;
    v21 = v90 << 8;
    v22 = 0i64;
    v95 = 0i64;
    v23 = v90 << 7;
    v24 = s_frustumLights.lightToSceneLight[v90];
    v25 = s_frustumLights.insideLight[v90];
    v88 = v24;
    for ( i = v25; ; v25 = i )
    {
      v26 = *v24;
      if ( (unsigned int)v26 >= v9->sceneLightCount || (unsigned __int8)(v9->sceneLights[v26].type - 2) > 1u )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1306, ASSERT_TYPE_ASSERT, "(lightIndex < data->sceneLightCount && ( data->sceneLights[lightIndex].type == 3 || data->sceneLights[lightIndex].type == 2 ))", (const char *)&queryFormat, "lightIndex < data->sceneLightCount && ( data->sceneLights[lightIndex].type == GFX_LIGHT_TYPE_OMNI || data->sceneLights[lightIndex].type == GFX_LIGHT_TYPE_SPOT )") )
          __debugbreak();
        v21 = v90 << 8;
      }
      v87 = v25[v22];
      if ( v87 || (v86 = 1, s_frustumLights.singleSlice[0][v22 + v21]) )
        v86 = 0;
      primaryLightCount = rgp.world->primaryLightCount;
      if ( (unsigned int)v26 >= primaryLightCount )
      {
        if ( !*(unsigned __int16 **)((char *)&s_frustumLights.dynamicLightModels[0].indices + v23) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 566, ASSERT_TYPE_ASSERT, "(s_frustumLights.dynamicLightModels[frame].indices != nullptr)", (const char *)&queryFormat, "s_frustumLights.dynamicLightModels[frame].indices != nullptr") )
          __debugbreak();
        p_frustumLights = (GfxFrustumLights *)((char *)s_frustumLights.dynamicLightModels + v23);
        primaryLightCount = rgp.world->primaryLightCount;
        v29 = (unsigned int)v26 - primaryLightCount;
      }
      else if ( *(unsigned __int16 **)((char *)&s_frustumLights.staticLightModels[0].indices + v23) )
      {
        p_frustumLights = (GfxFrustumLights *)((char *)s_frustumLights.staticLightModels + v23);
        v29 = v20;
      }
      else
      {
        p_frustumLights = &rgp.world->frustumLights;
        v29 = (unsigned int)v26;
      }
      v30 = 0i64;
      if ( (unsigned int)v26 >= primaryLightCount )
        v30 = 1i64;
      _R14 = 5i64 * (drawCount[v30] + v104[v30]);
      *(_DWORD *)&dataa[4 * _R14] = p_frustumLights->indicesCounts[v29];
      *(_DWORD *)&dataa[4 * _R14 + 4] = 1;
      *(_DWORD *)&dataa[4 * _R14 + 8] = p_frustumLights->indicesOffsets[(unsigned int)v29];
      v32 = p_frustumLights->verticesOffsets[(unsigned int)v29];
      if ( v32 + p_frustumLights->verticesCounts[(unsigned int)v29] >= 0x800000 )
      {
        LODWORD(v85) = v32 + p_frustumLights->verticesCounts[(unsigned int)v29];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\frustum_grid_cshared.hlsl", 72, ASSERT_TYPE_ASSERT, "( vertexOffset + vertexCount < ( 1 << ( 32 - 8 - 1 ) ) )", "VertexId %d is too big to fit in the bitfield.", v85) )
          __debugbreak();
      }
      if ( v20 >= 0x100 )
      {
        LODWORD(v85) = v20;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\frustum_grid_cshared.hlsl", 74, ASSERT_TYPE_ASSERT, "( lightIndex < ( 1 << 8 ) )", "Light index %d is too big to fit in the bitfield.", v85) )
          __debugbreak();
      }
      v33 = 0;
      *(_DWORD *)&dataa[4 * _R14 + 16] = 0;
      if ( !v87 )
        v33 = 0x800000;
      ++drawCount[v30];
      *(_DWORD *)&dataa[4 * _R14 + 12] = v32 | (v20 << 24) | v33;
      if ( v86 )
      {
        __asm { vmovups xmm0, [rbp+r14*4+2860h+data] }
        v35 = rgp.world->primaryLightCount;
        v36 = 3i64;
        if ( (unsigned int)v26 < v35 )
          v36 = 2i64;
        v37 = drawCount[v36];
        _RCX = 5i64 * (v37 + v104[v36]);
        __asm { vmovups [rbp+rcx*4+2860h+data], xmm0 }
        *(_DWORD *)&dataa[4 * _RCX + 16] = *(_DWORD *)&dataa[4 * _R14 + 16];
        v39 = 3i64;
        if ( (unsigned int)v26 < v35 )
          v39 = 2i64;
        drawCount[v39] = v37 + 1;
      }
      v9 = data;
      v22 = v95 + 1;
      v21 = v90 << 8;
      v24 = v88 + 1;
      ++v20;
      ++v95;
      ++v88;
      if ( v20 >= v91 )
        break;
    }
    R_UpdateGfxWrappedBuffer(&s_frustumLights.indirectDrawBuffersClustered[v90], dataa, 20 * (v103 + drawCount[1] + drawCount[0] + HIDWORD(v103)));
    v40 = 0;
    v41 = 0i64;
    v42 = 4i64;
    do
    {
      if ( v104[v41] != v40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1340, ASSERT_TYPE_ASSERT, "(argsOffsets[i] == argsSum)", (const char *)&queryFormat, "argsOffsets[i] == argsSum") )
        __debugbreak();
      v40 += drawCount[v41++];
      --v42;
    }
    while ( v42 );
    bufferData = (GfxCmdBufState *)result.bufferData;
    v44 = v103;
    v45 = v90;
    if ( v40 != s_frustumLights.staticWalkFrontLights[v90] + v91 + s_frustumLights.dynamicWalkFrontLights[v90] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1343, ASSERT_TYPE_ASSERT, "(argsSum == frustumLightCount + s_frustumLights.staticWalkFrontLights[frame] + s_frustumLights.dynamicWalkFrontLights[frame])", (const char *)&queryFormat, "argsSum == frustumLightCount + s_frustumLights.staticWalkFrontLights[frame] + s_frustumLights.dynamicWalkFrontLights[frame]") )
      __debugbreak();
    _RAX = r_frustumLightProxyConsExpand;
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vmovss  xmm0, dword ptr [rax+28h]
      vaddss  xmm2, xmm0, cs:__real@3f800000
      vcvtsi2ss xmm1, xmm1, rax
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vdivss  xmm6, xmm2, xmm0
      vdivss  xmm7, xmm2, xmm1
    }
    _RAX = R_AllocateConstantBufferBegin(&result, (CmdBufState *)result.bufferData, CBUFFER_BSP_SURFACE_INDEX, 0x860u);
    _RDX = v96.source;
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovq   rcx, xmm0
      vmovups xmmword ptr [rbp+2860h+cbuff.bufferData], xmm0
      vmovups ymm0, ymmword ptr [rdx+80h]
      vmovups ymmword ptr [rcx], ymm0
      vmovups ymm1, ymmword ptr [rdx+0A0h]
      vmovups ymmword ptr [rcx+20h], ymm1
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vmovss  dword ptr [rsp+2960h+var_2928], xmm0
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, rax
      vmovss  dword ptr [rsp+2960h+var_2928+4], xmm1
    }
    _RCX[8] = v89;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vmovss  dword ptr [rsp+2960h+var_2928], xmm0
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, rax
      vmovss  dword ptr [rsp+2960h+var_2928+4], xmm1
    }
    _RCX[9] = v89;
    __asm
    {
      vmovss  dword ptr [rsp+2960h+var_2928], xmm7
      vmovss  dword ptr [rsp+2960h+var_2928+4], xmm6
    }
    _RCX[10] = v89;
    memcpy_0(_RCX + 12, s_frustumLights.depthBounds[v90], 0x800ui64);
    R_AllocateConstantBufferEnd(bufferData, &cbuff);
    _R14 = context;
    __asm
    {
      vmovaps xmm7, [rsp+2960h+var_60]
      vmovaps xmm6, [rsp+2960h+var_50]
    }
    while ( v16 )
    {
      if ( v16 == 2 )
      {
        if ( !R_BeginMaterial(bufferData, rgp.frustumLightsClusterWalkFront, TECHNIQUE_EMISSIVE) )
        {
          v72 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1371, ASSERT_TYPE_ASSERT, "(R_BeginMaterial( state, rgp.frustumLightsClusterWalkFront, TECHNIQUE_DEFAULT ))", (const char *)&queryFormat, "R_BeginMaterial( state, rgp.frustumLightsClusterWalkFront, TECHNIQUE_DEFAULT )");
LABEL_60:
          if ( v72 )
            __debugbreak();
        }
        goto LABEL_62;
      }
LABEL_69:
      v80 = drawCount[v16];
      if ( v80 )
      {
        v81 = v45 << 7;
        if ( (v16 & 1) != 0 )
        {
          v82 = (GfxFrustumLights *)((char *)s_frustumLights.dynamicLightModels + v81);
        }
        else if ( *(unsigned __int16 **)((char *)&s_frustumLights.staticLightModels[0].indices + v81) )
        {
          v82 = (GfxFrustumLights *)((char *)s_frustumLights.staticLightModels + v81);
        }
        else
        {
          v82 = &rgp.world->frustumLights;
        }
        R_SetIndicesWithType(bufferData, v82->indexBuffer.buffer, DXGI_FORMAT_R16_UINT);
        if ( v92 == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1494, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
          __debugbreak();
        p_vertexBuffer = &v82->vertexBuffer;
        _R14 = context;
        v92->input.codeBuffers[51] = p_vertexBuffer;
        __asm
        {
          vmovups xmm0, xmmword ptr [r14]
          vmovups [rbp+2860h+var_28E0], xmm0
        }
        R_SetupPassStableArgsInternal(&v96, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp(1391)");
        R_DrawMultiIndexedIndirectPrimitive(bufferData, s_frustumLights.indirectDrawBuffersClustered[v90].buffer, 20 * v104[v16], v80);
        v45 = v90;
      }
      if ( ((v16 - 1) & 0xFFFFFFFD) != 0 || (R_GfxComputeWaitForGraphics(bufferData), v44 + HIDWORD(v103)) )
      {
        if ( (unsigned int)++v16 < 4 )
          continue;
      }
      return;
    }
    if ( !R_BeginMaterial(bufferData, rgp.frustumLightsClusterMarkBack, TECHNIQUE_EMISSIVE) )
    {
      v72 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1369, ASSERT_TYPE_ASSERT, "(R_BeginMaterial( state, rgp.frustumLightsClusterMarkBack, TECHNIQUE_DEFAULT ))", (const char *)&queryFormat, "R_BeginMaterial( state, rgp.frustumLightsClusterMarkBack, TECHNIQUE_DEFAULT )");
      goto LABEL_60;
    }
LABEL_62:
    __asm
    {
      vmovups xmm0, xmmword ptr [r14]
      vmovups [rbp+2860h+var_28E0], xmm0
    }
    R_SetupPass(&v96);
    v74 = cbuff.bufferData;
    bufferData->constants[0][9].bufferSize = cbuff.bufferSize;
    bufferData->constants[0][9].bufferData = v74;
    bufferData->constantsDirty[0] |= 0x200u;
    v75 = cbuff.bufferData;
    bufferData->constants[1][9].bufferSize = cbuff.bufferSize;
    v76 = v99;
    bufferData->constants[1][9].bufferData = v75;
    bufferData->constantsDirty[1] |= 0x200u;
    Surface = R_RT_Handle::GetSurface(v76);
    if ( (Surface->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 589, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
      __debugbreak();
    if ( (Surface->m_rtFlags & 0x1000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 590, ASSERT_TYPE_ASSERT, "(surface->m_rtFlags & R_RT_Flag_RWView)", (const char *)&queryFormat, "surface->m_rtFlags & R_RT_Flag_RWView") )
      __debugbreak();
    __asm
    {
      vmovups xmm0, xmmword ptr [r14]
      vpextrq rcx, xmm0, 1
    }
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
  __int64 frustumLightsIndex; 
  GfxCmdBufSourceState *source; 
  GfxCmdBufState *state; 
  const GfxBackEndData *v19; 
  unsigned int v20; 
  GfxViewParms *v21; 
  GfxViewParms *v22; 
  const R_RT_Surface *Surface; 
  unsigned int v26; 
  __int64 v27; 
  unsigned int v28; 
  bool *v29; 
  __int64 v30; 
  unsigned int *v31; 
  __int64 v32; 
  bool v33; 
  unsigned int primaryLightCount; 
  GfxFrustumLights *p_frustumLights; 
  __int64 v36; 
  __int64 v37; 
  __int64 v38; 
  __int64 v39; 
  unsigned int v40; 
  int v41; 
  char v45; 
  int v46; 
  __int64 v47; 
  const GfxShaderBufferRWView *RWView; 
  unsigned int v53; 
  __int64 v54; 
  unsigned int v55; 
  char v58; 
  bool v59; 
  __int64 v60; 
  __int64 v62; 
  Material **frustumLightsTileStencil1; 
  GfxFrustumLights *v65; 
  ID3D12Resource *buffer; 
  GfxDevice *device; 
  int v68; 
  __int64 v69; 
  int v70; 
  unsigned __int64 m_pCurrent; 
  GfxWrappedBuffer *p_vertexBuffer; 
  int v79; 
  unsigned int v81; 
  bool *v82; 
  unsigned int *v84; 
  __int64 v85; 
  bool v86; 
  char v112; 
  bool v113; 
  bool v116; 
  bool v118; 
  bool v121; 
  bool v123; 
  bool v125; 
  const GfxDevice *v128; 
  bool IsLockedIfGfxImmediateContext; 
  __int64 v142; 
  double v143; 
  double v144; 
  double v145; 
  double v146; 
  double v147; 
  double v148; 
  double v149; 
  double v150; 
  double v151; 
  double v152; 
  double v153; 
  double v154; 
  double v155; 
  double v156; 
  char v157; 
  bool v158; 
  bool enabled; 
  bool v160; 
  unsigned int v161; 
  unsigned int v162; 
  unsigned int v163; 
  __int64 v164; 
  GfxCmdBufState *v165; 
  __int64 v166; 
  unsigned int v169; 
  GfxCmdBufContext v171; 
  const GfxBackEndData *v172; 
  GfxViewParms *viewParms; 
  GfxCmdBufSourceState *v174; 
  __int64 v175; 
  const GfxShaderBufferRWView *v176; 
  const GfxWrappedBuffer *v177; 
  __int64 v178; 
  __int64 v179; 
  GfxCmdBufContext v180; 
  GfxCmdBufContext v181; 
  GfxCmdBufContext v182; 
  __int64 v183; 
  int v184; 
  int v185; 
  char v186[16]; 
  unsigned __int64 v187; 
  __int64 v188; 
  __int64 v189; 
  int v190; 
  unsigned int v191; 
  unsigned int v192; 
  unsigned int v193; 
  int dataa[1280]; 

  frustumLightsIndex = data->frustumLightsIndex;
  source = context->source;
  state = context->state;
  v19 = data;
  v20 = s_frustumLights.lightCount[frustumLightsIndex];
  v172 = data;
  viewParms = (GfxViewParms *)viewInfo;
  v171.source = (GfxCmdBufSourceState *)maskBuffer;
  v174 = source;
  v165 = state;
  v164 = frustumLightsIndex;
  v161 = v20;
  if ( v20 > 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1005, ASSERT_TYPE_ASSERT, "(frustumLightCount <= 256)", (const char *)&queryFormat, "frustumLightCount <= FRUSTUM_GRID_MAX_LIGHTS") )
    __debugbreak();
  if ( !s_frustumLights.setupForFrame[frustumLightsIndex] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1006, ASSERT_TYPE_ASSERT, "(s_frustumLights.setupForFrame[frame])", (const char *)&queryFormat, "s_frustumLights.setupForFrame[frame]") )
    __debugbreak();
  if ( v161 )
  {
    v21 = viewParms;
    v22 = viewParms;
    __asm { vmovaps [rsp+1670h+var_50], xmm6 }
    source->viewStatsTarget = GFX_VIEW_STATS_OPAQUE;
    R_BeginViewInternal(source, (const GfxSceneDef *)&v21[3].camera.48, v22, v21 + 1);
    R_Set3D(source);
    if ( state->depthRangeType )
      R_ChangeDepthRange(state, GFX_DEPTH_RANGE_SCENE);
    R_UpdateViewport(source, &source->sceneViewport);
    _RAX = r_frustumLightProxyDebugExpand;
    __asm
    {
      vmovss  xmm6, dword ptr [rax+28h]
      vmovss  [rsp+1670h+var_15F8], xmm6
    }
    enabled = r_frustumLightProxyUseStencil->current.enabled;
    Surface = R_RT_Handle::GetSurface(depthRt);
    v26 = s_frustumLights.staticInsideLights[frustumLightsIndex];
    v27 = (unsigned int)Surface->m_rtFlags >> 14;
    v191 = s_frustumLights.staticOutsideLights[frustumLightsIndex];
    v175 = v27;
    v188 = 0i64;
    v192 = v26 + v191;
    LODWORD(Surface) = s_frustumLights.dynamicOutsideLights[frustumLightsIndex];
    v28 = 0;
    v189 = 0i64;
    v190 = 0;
    v193 = v191 + v26 + (_DWORD)Surface;
    v29 = s_frustumLights.insideLight[v164];
    v30 = v164 << 7;
    v31 = s_frustumLights.lightToSceneLight[v164];
    do
    {
      v32 = *v31;
      if ( ((unsigned int)v32 >= v19->sceneLightCount || (unsigned __int8)(v19->sceneLights[v32].type - 2) > 1u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1049, ASSERT_TYPE_ASSERT, "(lightIndex < data->sceneLightCount && ( data->sceneLights[lightIndex].type == 3 || data->sceneLights[lightIndex].type == 2 ))", (const char *)&queryFormat, "lightIndex < data->sceneLightCount && ( data->sceneLights[lightIndex].type == GFX_LIGHT_TYPE_OMNI || data->sceneLights[lightIndex].type == GFX_LIGHT_TYPE_SPOT )") )
        __debugbreak();
      v33 = *v29;
      primaryLightCount = rgp.world->primaryLightCount;
      if ( (unsigned int)v32 >= primaryLightCount )
      {
        if ( !*(unsigned __int16 **)((char *)&s_frustumLights.dynamicLightModels[0].indices + v30) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 566, ASSERT_TYPE_ASSERT, "(s_frustumLights.dynamicLightModels[frame].indices != nullptr)", (const char *)&queryFormat, "s_frustumLights.dynamicLightModels[frame].indices != nullptr") )
          __debugbreak();
        p_frustumLights = (GfxFrustumLights *)((char *)s_frustumLights.dynamicLightModels + v30);
        primaryLightCount = rgp.world->primaryLightCount;
        v36 = (unsigned int)v32 - primaryLightCount;
      }
      else if ( *(unsigned __int16 **)((char *)&s_frustumLights.staticLightModels[0].indices + v30) )
      {
        p_frustumLights = (GfxFrustumLights *)((char *)s_frustumLights.staticLightModels + v30);
        v36 = v28;
      }
      else
      {
        p_frustumLights = &rgp.world->frustumLights;
        v36 = (unsigned int)v32;
      }
      v37 = 2i64;
      if ( (unsigned int)v32 < primaryLightCount )
        v37 = 0i64;
      v38 = v33 + v37;
      v39 = 5i64 * (unsigned int)(*((_DWORD *)&v188 + v38) + *(&v190 + v38));
      dataa[v39] = p_frustumLights->indicesCounts[v36];
      dataa[v39 + 1] = 1;
      dataa[v39 + 2] = p_frustumLights->indicesOffsets[(unsigned int)v36];
      v40 = p_frustumLights->verticesOffsets[(unsigned int)v36];
      if ( v40 + p_frustumLights->verticesCounts[(unsigned int)v36] >= 0x800000 )
      {
        LODWORD(v142) = v40 + p_frustumLights->verticesCounts[(unsigned int)v36];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\frustum_grid_cshared.hlsl", 72, ASSERT_TYPE_ASSERT, "( vertexOffset + vertexCount < ( 1 << ( 32 - 8 - 1 ) ) )", "VertexId %d is too big to fit in the bitfield.", v142) )
          __debugbreak();
      }
      if ( v28 >= 0x100 )
      {
        LODWORD(v142) = v28;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\game\\share\\raw\\shaders\\lib\\frustum_grid_cshared.hlsl", 74, ASSERT_TYPE_ASSERT, "( lightIndex < ( 1 << 8 ) )", "Light index %d is too big to fit in the bitfield.", v142) )
          __debugbreak();
      }
      ++*((_DWORD *)&v188 + v38);
      v41 = v40 | (v28++ << 24);
      v19 = v172;
      ++v31;
      dataa[v39 + 3] = v41;
      ++v29;
      dataa[v39 + 4] = 0;
    }
    while ( v28 < v161 );
    _R15 = v165;
    _R12 = (__int64)v174;
    _R14 = context;
    v45 = v175;
    v46 = HIDWORD(v189) + v189 + v188 + HIDWORD(v188);
    if ( v46 )
    {
      v47 = v164;
      __asm
      {
        vmovaps [rsp+1670h+var_60], xmm7
        vmovaps [rsp+1670h+var_70], xmm8
        vmovaps [rsp+1670h+var_80], xmm9
        vmovaps [rsp+1670h+var_90], xmm10
        vmovaps [rsp+1670h+var_A0], xmm11
        vmovaps [rsp+1670h+var_B0], xmm12
        vmovaps [rsp+1670h+var_C0], xmm13
        vmovaps [rsp+1670h+var_D0], xmm14
        vmovaps [rsp+1670h+var_E0], xmm15
      }
      v177 = &s_frustumLights.indirectDrawBuffersTiled[v164];
      R_UpdateGfxWrappedBuffer(v177, dataa, 20 * v46);
      RWView = R_RT_BufferHandle::GetRWView((R_RT_BufferHandle *)v171.source);
      __asm
      {
        vmovss  xmm14, cs:__real@3a83126f
        vmovss  xmm9, cs:__real@3f800000
        vmovss  xmm13, cs:__real@3f7c0000
        vmovsd  xmm11, cs:__real@3ff0000000000000
      }
      v53 = 0;
      v176 = RWView;
      v54 = 0i64;
      v163 = 0;
      v166 = 0i64;
      v55 = 0;
      __asm
      {
        vxorps  xmm10, xmm10, xmm10
        vxorpd  xmm12, xmm12, xmm12
      }
      do
      {
        v58 = v55 & 1;
        v157 = v55 & 1;
        v160 = v55 >= 2;
        if ( *(_DWORD *)((char *)&v188 + v54) )
        {
          v59 = enabled && !v58;
          v158 = v59;
          v60 = v45 & 1;
          v169 = v59 + 1;
          __asm
          {
            vxorps  xmm15, xmm15, xmm15
            vcvtsi2ss xmm15, xmm15, rax
          }
          v62 = v47 << 7;
          __asm { vmovss  [rsp+1670h+var_15FC], xmm15 }
          v162 = 0;
          v179 = v60;
          v178 = v47 << 7;
          do
          {
            if ( v59 )
            {
              frustumLightsTileStencil1 = rgp.frustumLightsTileStencil1;
              if ( !v53 )
                frustumLightsTileStencil1 = rgp.frustumLightsTileStencil0;
            }
            else
            {
              frustumLightsTileStencil1 = rgp.frustumLightsTile;
              if ( v58 )
                frustumLightsTileStencil1 = rgp.frustumLightsTileInside;
            }
            if ( !R_BeginMaterial(_R15, frustumLightsTileStencil1[v60], TECHNIQUE_EMISSIVE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1108, ASSERT_TYPE_ASSERT, "(R_BeginMaterial( state, materialArray[maskShaderVariant], TECHNIQUE_DEFAULT ))", (const char *)&queryFormat, "R_BeginMaterial( state, materialArray[maskShaderVariant], TECHNIQUE_DEFAULT )") )
              __debugbreak();
            __asm
            {
              vmovups xmm0, xmmword ptr [r14]
              vmovups [rbp+1570h+var_15E0], xmm0
            }
            R_SetupPass(&v171);
            if ( v55 < 2 )
            {
              if ( *(unsigned __int16 **)((char *)&s_frustumLights.staticLightModels[0].indices + v62) )
                v65 = (GfxFrustumLights *)((char *)s_frustumLights.staticLightModels + v62);
              else
                v65 = &rgp.world->frustumLights;
            }
            else
            {
              v65 = (GfxFrustumLights *)((char *)s_frustumLights.dynamicLightModels + v62);
            }
            buffer = v65->indexBuffer.buffer;
            if ( !R_IsLockedIfGfxImmediateContext(_R15->device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
              __debugbreak();
            if ( _R15->indexBuffer != buffer || _R15->indexType != DXGI_FORMAT_R16_UINT || !_R15->isIndexBufferBound )
            {
              device = _R15->device;
              if ( !device && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1645, ASSERT_TYPE_ASSERT, "(device)", (const char *)&queryFormat, "device") )
                __debugbreak();
              _R15->indexBuffer = buffer;
              v68 = 57;
              v185 = 57;
              _R15->indexType = DXGI_FORMAT_R16_UINT;
              if ( buffer )
              {
                ((void (__fastcall *)(ID3D12Resource *, char *))buffer->m_pFunction[3].AddRef)(buffer, v186);
                if ( v187 >= 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1658, ASSERT_TYPE_ASSERT, "(ibDesc.Width < 0xffffffff)", (const char *)&queryFormat, "ibDesc.Width < UINT_MAX") )
                  __debugbreak();
                v69 = ((__int64 (__fastcall *)(ID3D12Resource *))buffer->m_pFunction[3].Release)(buffer);
                v70 = v187;
                v183 = v69;
                if ( v187 > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)v187, "unsigned", v187) )
                  __debugbreak();
                v68 = v185;
                v184 = v70;
              }
              else
              {
                v183 = 0i64;
                v184 = 0;
              }
              m_pCurrent = (unsigned __int64)device->m_Putter.m_pCurrent;
              if ( (unsigned int *)m_pCurrent >= device->m_Putter.m_pLimit_Api )
              {
                ((void (__fastcall *)(GfxDevice *, __int64 *))device->m_pFunction[15].Release)(device, &v183);
              }
              else
              {
                *(_DWORD *)m_pCurrent = v68 + 1073854208;
                *(_QWORD *)(m_pCurrent + 4) = v183;
                device->m_Putter.m_pCurrent = (unsigned int *)(m_pCurrent + 12);
              }
              v47 = v164;
              _R15->isIndexBufferBound = buffer != NULL;
            }
            if ( _R12 == -1792 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1494, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
              __debugbreak();
            p_vertexBuffer = &v65->vertexBuffer;
            _R14 = context;
            *(_QWORD *)(_R12 + 9368) = p_vertexBuffer;
            __asm
            {
              vmovss  dword ptr [r12+7F4h], xmm6
              vmovups xmm0, xmmword ptr [r14]
              vmovss  dword ptr [r12+7F8h], xmm15
              vmovss  dword ptr [r12+7FCh], xmm15
            }
            *(_DWORD *)(_R12 + 2032) = 0;
            ++*(_WORD *)(_R12 + 10194);
            __asm { vmovups [rbp+1570h+var_1590], xmm0 }
            R_SetupPassStableArgsInternal(&v180, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp(1117)");
            __asm
            {
              vmovups xmm0, xmmword ptr [r14]
              vmovups [rbp+1570h+var_1580], xmm0
            }
            R_SetupPassPerObjectArgsInternal(&v181, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp(1118)");
            __asm
            {
              vmovups xmm0, xmmword ptr [r14]
              vmovups [rbp+1570h+var_1570], xmm0
            }
            R_SetupPassPerPrimArgsInternal(&v182, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp(1119)");
            __asm
            {
              vmovups xmm0, xmmword ptr [r14]
              vpextrq rcx, xmm0, 1
            }
            R_SetDescriptorInRange(*(GfxDescriptorState **)(_RCX + 2480), PS_RW_VIEW_RANGE, 4u, v176->rwView);
            v79 = *(int *)((char *)&v190 + v166);
            __asm { vmovss  xmm15, cs:__real@3c800000 }
            v171.source = (GfxCmdBufSourceState *)v161;
            v81 = 20 * v79;
            v82 = s_frustumLights.insideLight[v47];
            _R12 = (float *)&s_frustumLights.depthBounds[v47][0] + 1;
            v84 = s_frustumLights.lightToSceneLight[v47];
            do
            {
              v85 = *v84;
              if ( ((unsigned int)v85 >= v172->sceneLightCount || (unsigned __int8)(v172->sceneLights[v85].type - 2) > 1u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_frustum_lights.cpp", 1130, ASSERT_TYPE_ASSERT, "(lightIndex < data->sceneLightCount && ( data->sceneLights[lightIndex].type == 3 || data->sceneLights[lightIndex].type == 2 ))", (const char *)&queryFormat, "lightIndex < data->sceneLightCount && ( data->sceneLights[lightIndex].type == GFX_LIGHT_TYPE_OMNI || data->sceneLights[lightIndex].type == GFX_LIGHT_TYPE_SPOT )") )
                __debugbreak();
              v86 = *v82;
              if ( *v82 == v157 && (unsigned int)v85 >= rgp.world->primaryLightCount == v160 )
              {
                __asm { vmovss  xmm0, dword ptr [r12-4] }
                _RAX = viewParms;
                __asm
                {
                  vmovss  xmm6, dword ptr [r12]
                  vmaxss  xmm0, xmm0, xmm14
                  vmovaps xmm2, xmm9; max
                  vmovss  xmm7, dword ptr [rax+0B8h]
                  vdivss  xmm0, xmm7, xmm0; val
                  vmovaps xmm1, xmm10; min
                }
                *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
                _ECX = 0;
                _EAX = v86;
                __asm
                {
                  vmovd   xmm1, eax
                  vmovd   xmm2, ecx
                  vpcmpeqd xmm3, xmm1, xmm2
                  vblendvps xmm1, xmm15, xmm13, xmm3
                  vmulss  xmm4, xmm0, xmm1
                  vmovd   xmm2, ecx
                }
                _EAX = v86;
                __asm
                {
                  vmovd   xmm0, eax
                  vpcmpeqd xmm1, xmm0, xmm2
                  vblendvps xmm0, xmm13, xmm10, xmm1
                  vmaxss  xmm1, xmm6, xmm14
                  vaddss  xmm8, xmm4, xmm0
                  vdivss  xmm0, xmm7, xmm1; val
                  vmovaps xmm1, xmm10; min
                  vmovaps xmm2, xmm9; max
                }
                *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
                __asm
                {
                  vmulss  xmm6, xmm0, xmm13
                  vcomiss xmm6, xmm10
                }
                if ( v112 )
                  goto LABEL_123;
                __asm { vcomiss xmm6, xmm9 }
                if ( !(v112 | v113) )
                {
LABEL_123:
                  __asm
                  {
                    vmovsd  [rsp+1670h+var_1638], xmm11
                    vcvtss2sd xmm0, xmm6, xmm6
                    vmovsd  [rsp+1670h+var_1640], xmm12
                    vmovsd  [rsp+1670h+var_1648], xmm0
                  }
                  v116 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 2279, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( depthBoundsMin ) && ( depthBoundsMin ) <= ( 1.0f )", "depthBoundsMin not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v143, v147, v151);
                  v112 = 0;
                  v113 = !v116;
                  if ( v116 )
                    __debugbreak();
                }
                __asm
                {
                  vcomiss xmm8, xmm10
                  vcomiss xmm8, xmm9
                }
                if ( !(v112 | v113) )
                {
                  __asm
                  {
                    vmovsd  [rsp+1670h+var_1638], xmm11
                    vcvtss2sd xmm0, xmm8, xmm8
                    vmovsd  [rsp+1670h+var_1640], xmm12
                    vmovsd  [rsp+1670h+var_1648], xmm0
                  }
                  v118 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 2280, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( depthBoundsMax ) && ( depthBoundsMax ) <= ( 1.0f )", "depthBoundsMax not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v144, v148, v152);
                  v112 = 0;
                  v113 = !v118;
                  if ( v118 )
                    __debugbreak();
                }
                __asm { vcomiss xmm6, xmm8 }
                if ( !(v112 | v113) )
                {
                  __asm
                  {
                    vcvtss2sd xmm0, xmm8, xmm8
                    vmovsd  [rsp+1670h+var_1630], xmm0
                    vcvtss2sd xmm1, xmm6, xmm6
                    vmovsd  [rsp+1670h+var_1638], xmm1
                  }
                  v121 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 2281, ASSERT_TYPE_ASSERT, "( depthBoundsMin ) <= ( depthBoundsMax )", "%s <= %s\n\t%g, %g", "depthBoundsMin", "depthBoundsMax", v153, v156);
                  v112 = 0;
                  v113 = !v121;
                  if ( v121 )
                    __debugbreak();
                }
                __asm { vucomiss xmm6, dword ptr [r15+9FCh] }
                if ( !v113 )
                  goto LABEL_98;
                __asm { vucomiss xmm8, dword ptr [r15+0A00h] }
                if ( !v113 )
                {
LABEL_98:
                  __asm
                  {
                    vcomiss xmm6, xmm10
                    vmovss  dword ptr [r15+9FCh], xmm6
                    vmovss  dword ptr [r15+0A00h], xmm8
                    vcomiss xmm6, xmm9
                  }
                  if ( !(v112 | v113) )
                  {
                    __asm
                    {
                      vmovsd  [rsp+1670h+var_1638], xmm11
                      vcvtss2sd xmm0, xmm6, xmm6
                      vmovsd  [rsp+1670h+var_1640], xmm12
                      vmovsd  [rsp+1670h+var_1648], xmm0
                    }
                    v123 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_setstate_d3d.h", 1012, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( minZ ) && ( minZ ) <= ( 1.0f )", "minZ not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v145, v149, v154);
                    v112 = 0;
                    v113 = !v123;
                    if ( v123 )
                      __debugbreak();
                  }
                  __asm
                  {
                    vcomiss xmm8, xmm10
                    vcomiss xmm8, xmm9
                  }
                  if ( !(v112 | v113) )
                  {
                    __asm
                    {
                      vmovsd  [rsp+1670h+var_1638], xmm11
                      vcvtss2sd xmm0, xmm8, xmm8
                      vmovsd  [rsp+1670h+var_1640], xmm12
                      vmovsd  [rsp+1670h+var_1648], xmm0
                    }
                    v125 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_setstate_d3d.h", 1013, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( maxZ ) && ( maxZ ) <= ( 1.0f )", "maxZ not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v146, v150, v155);
                    v112 = 0;
                    v113 = !v125;
                    if ( v125 )
                      __debugbreak();
                  }
                  __asm { vcomiss xmm6, xmm8 }
                  if ( !(v112 | v113) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_setstate_d3d.h", 1014, ASSERT_TYPE_ASSERT, "(minZ <= maxZ)", (const char *)&queryFormat, "minZ <= maxZ") )
                    __debugbreak();
                  if ( !R_IsLockedIfGfxImmediateContext(_R15->device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
                    __debugbreak();
                  __asm
                  {
                    vmovaps xmm2, xmm8
                    vmovaps xmm1, xmm6
                  }
                  _R15->device->m_pFunction[22].Release(_R15->device);
                }
                R_DrawMultiIndexedIndirectPrimitive(_R15, v177->buffer, v81, 1u);
                v81 += 20;
              }
              ++v84;
              _R12 += 2;
              ++v82;
              --v171.source;
            }
            while ( v171.source );
            __asm
            {
              vmovss  xmm15, [rsp+1670h+var_15FC]
              vmovss  xmm6, [rsp+1670h+var_15F8]
            }
            _R12 = (__int64)v174;
            _R14 = context;
            v55 = v163;
            v58 = v157;
            v62 = v178;
            v53 = v162 + 1;
            v47 = v164;
            v59 = v158;
            v60 = v179;
            v162 = v53;
          }
          while ( v53 < v169 );
          v54 = v166;
          v53 = 0;
        }
        v45 = v175;
        ++v55;
        v54 += 4i64;
        v163 = v55;
        v166 = v54;
      }
      while ( v55 < 4 );
      v128 = _R15->device;
      _R15->depthBoundsMin = 0.0;
      _R15->depthBoundsMax = 1.0;
      IsLockedIfGfxImmediateContext = R_IsLockedIfGfxImmediateContext(v128);
      __asm
      {
        vmovaps xmm15, [rsp+1670h+var_E0]
        vmovaps xmm14, [rsp+1670h+var_D0]
        vmovaps xmm13, [rsp+1670h+var_C0]
        vmovaps xmm12, [rsp+1670h+var_B0]
        vmovaps xmm11, [rsp+1670h+var_A0]
        vmovaps xmm8, [rsp+1670h+var_70]
        vmovaps xmm7, [rsp+1670h+var_60]
      }
      if ( !IsLockedIfGfxImmediateContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
        __debugbreak();
      __asm
      {
        vmovaps xmm2, xmm9
        vmovaps xmm1, xmm10
      }
      _R15->device->m_pFunction[22].Release(_R15->device);
      __asm
      {
        vmovaps xmm10, [rsp+1670h+var_90]
        vmovaps xmm9, [rsp+1670h+var_80]
      }
    }
    __asm { vmovaps xmm6, [rsp+1670h+var_50] }
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

