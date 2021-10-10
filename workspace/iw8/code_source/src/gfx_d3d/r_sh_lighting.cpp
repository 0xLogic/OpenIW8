/*
==============
R_GetActiveLightGridsList
==============
*/

const GfxGpuLightGrid **__fastcall R_GetActiveLightGridsList(const GfxBackEndData *data)
{
  return ?R_GetActiveLightGridsList@@YAPEAPEBUGfxGpuLightGrid@@PEBUGfxBackEndData@@@Z(data);
}

/*
==============
R_GpuLightGrid_ShutdownBuffers
==============
*/

void __fastcall R_GpuLightGrid_ShutdownBuffers(GfxGpuLightGrid *lg)
{
  ?R_GpuLightGrid_ShutdownBuffers@@YAXPEAUGfxGpuLightGrid@@@Z(lg);
}

/*
==============
R_GpuLightGrid_DebugDrawVolume
==============
*/

void __fastcall R_GpuLightGrid_DebugDrawVolume(GfxCmdBufContext *context, const GfxGpuLightGrid *lightGrid, vec4_t *color)
{
  ?R_GpuLightGrid_DebugDrawVolume@@YAXUGfxCmdBufContext@@PEBUGfxGpuLightGrid@@Tvec4_t@@@Z(context, lightGrid, color);
}

/*
==============
R_ShutdownWorldSHLighting
==============
*/

void __fastcall R_ShutdownWorldSHLighting(GfxWorld *world)
{
  ?R_ShutdownWorldSHLighting@@YAXPEAUGfxWorld@@@Z(world);
}

/*
==============
R_GpuLightGrid_DataAvailable
==============
*/

bool __fastcall R_GpuLightGrid_DataAvailable(const GfxWorld *world)
{
  return ?R_GpuLightGrid_DataAvailable@@YA_NPEBUGfxWorld@@@Z(world);
}

/*
==============
R_ToggleSHLightingFrame
==============
*/

unsigned int __fastcall R_ToggleSHLightingFrame(unsigned int smpFrame)
{
  return ?R_ToggleSHLightingFrame@@YAII@Z(smpFrame);
}

/*
==============
R_InitSHLighting
==============
*/

void R_InitSHLighting(void)
{
  ?R_InitSHLighting@@YAXXZ();
}

/*
==============
R_GetActiveLightGrids
==============
*/

const GfxWrappedBuffer *__fastcall R_GetActiveLightGrids(const GfxBackEndData *data)
{
  return ?R_GetActiveLightGrids@@YAPEBUGfxWrappedBuffer@@PEBUGfxBackEndData@@@Z(data);
}

/*
==============
R_GpuLightGrid_DrawDebugSpheres
==============
*/

void __fastcall R_GpuLightGrid_DrawDebugSpheres(GfxCmdBufContext *context, unsigned int numSpheresToRender)
{
  ?R_GpuLightGrid_DrawDebugSpheres@@YAXUGfxCmdBufContext@@I@Z(context, numSpheresToRender);
}

/*
==============
RB_GpuLightGrid_DataAvailable
==============
*/

bool __fastcall RB_GpuLightGrid_DataAvailable(const GfxViewInfo *viewInfo)
{
  return ?RB_GpuLightGrid_DataAvailable@@YA_NPEBUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
RB_UpdateFallbackProbeData
==============
*/

void __fastcall RB_UpdateFallbackProbeData(GfxCmdBufState *state, const GfxBackEndData *data, const GfxViewInfo *viewInfo)
{
  ?RB_UpdateFallbackProbeData@@YAXPEAUGfxCmdBufState@@PEBUGfxBackEndData@@PEBUGfxViewInfo@@@Z(state, data, viewInfo);
}

/*
==============
R_GpuLightGrid_SetupFrame
==============
*/

void __fastcall R_GpuLightGrid_SetupFrame(GfxBackEndData *data, const GfxViewInfo *viewInfo)
{
  ?R_GpuLightGrid_SetupFrame@@YAXPEAUGfxBackEndData@@PEBUGfxViewInfo@@@Z(data, viewInfo);
}

/*
==============
Bounds_IntersectGpuLightGrid
==============
*/

bool __fastcall Bounds_IntersectGpuLightGrid(const Bounds *bounds, const GfxGpuLightGrid *lightGrid)
{
  return ?Bounds_IntersectGpuLightGrid@@YA_NAEBUBounds@@PEBUGfxGpuLightGrid@@@Z(bounds, lightGrid);
}

/*
==============
RB_GpuLightGrid_Update
==============
*/

void __fastcall RB_GpuLightGrid_Update(GfxCmdBufState *state, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RB_GpuLightGrid_Update@@YAXPEAUGfxCmdBufState@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(state, viewInfo, data);
}

/*
==============
R_GpuLightGrid_SetResources
==============
*/

void __fastcall R_GpuLightGrid_SetResources(GfxCmdBufInput *input, const GfxGpuLightGrid *gpuLightGrid, unsigned int frameIndex)
{
  ?R_GpuLightGrid_SetResources@@YAXPEAUGfxCmdBufInput@@PEBUGfxGpuLightGrid@@I@Z(input, gpuLightGrid, frameIndex);
}

/*
==============
R_GetFallbackProbe
==============
*/

const GfxWrappedBuffer *__fastcall R_GetFallbackProbe()
{
  return ?R_GetFallbackProbe@@YAPEBUGfxWrappedBuffer@@XZ();
}

/*
==============
R_GpuLightGrid_DrawDebug
==============
*/

void __fastcall R_GpuLightGrid_DrawDebug(GfxCmdBufContext *context, const GfxViewInfo *viewInfo, const GfxGpuLightGrid *gpuLightGrid, int lightGridDebug, float sphereScale, GfxWrappedBuffer *lightGridSampleRequests, const GfxWrappedRWBuffer *probesBuffer, int numSpheresToRender, int numTriPatchesToRender, int sphereIndexShift)
{
  ?R_GpuLightGrid_DrawDebug@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@PEBUGfxGpuLightGrid@@HMPEAUGfxWrappedBuffer@@PEBUGfxWrappedRWBuffer@@HHH@Z(context, viewInfo, gpuLightGrid, lightGridDebug, sphereScale, lightGridSampleRequests, probesBuffer, numSpheresToRender, numTriPatchesToRender, sphereIndexShift);
}

/*
==============
R_GpuLightGrid_GetBoundingPlane
==============
*/

vec4_t *__fastcall R_GpuLightGrid_GetBoundingPlane(vec4_t *result, const GfxGpuLightGrid *lightGrid, int axisIndex, bool positive)
{
  return ?R_GpuLightGrid_GetBoundingPlane@@YA?ATvec4_t@@PEBUGfxGpuLightGrid@@H_N@Z(result, lightGrid, axisIndex, positive);
}

/*
==============
R_GetLightGridMemory
==============
*/

int __fastcall R_GetLightGridMemory(const GfxGpuLightGrid *gpuLightGrid)
{
  return ?R_GetLightGridMemory@@YAHPEBUGfxGpuLightGrid@@@Z(gpuLightGrid);
}

/*
==============
R_GetNumActiveLightGrids
==============
*/

int __fastcall R_GetNumActiveLightGrids(const GfxBackEndData *data)
{
  return ?R_GetNumActiveLightGrids@@YAHPEBUGfxBackEndData@@@Z(data);
}

/*
==============
RB_GpuLightGrid_DebugDrawVolumes
==============
*/

void __fastcall RB_GpuLightGrid_DebugDrawVolumes(GfxCmdBufContext *context, const GfxViewInfo *viewInfo)
{
  ?RB_GpuLightGrid_DebugDrawVolumes@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@@Z(context, viewInfo);
}

/*
==============
R_GpuLightGrid_DataAvailable
==============
*/

bool __fastcall R_GpuLightGrid_DataAvailable()
{
  return ?R_GpuLightGrid_DataAvailable@@YA_NXZ();
}

/*
==============
R_GetPrevFrameLightGridIndices
==============
*/

const GfxWrappedBuffer *__fastcall R_GetPrevFrameLightGridIndices(const GfxBackEndData *data)
{
  return ?R_GetPrevFrameLightGridIndices@@YAPEBUGfxWrappedBuffer@@PEBUGfxBackEndData@@@Z(data);
}

/*
==============
R_GpuLightGrid_Init
==============
*/

void R_GpuLightGrid_Init(void)
{
  ?R_GpuLightGrid_Init@@YAXXZ();
}

/*
==============
R_GpuLightGrid_DebugDrawEnabled
==============
*/

bool __fastcall R_GpuLightGrid_DebugDrawEnabled()
{
  return ?R_GpuLightGrid_DebugDrawEnabled@@YA_NXZ();
}

/*
==============
R_GpuLightGrid_DebugDrawVolumes
==============
*/

void __fastcall R_GpuLightGrid_DebugDrawVolumes(GfxCmdBufContext *context, const GfxViewInfo *viewInfo)
{
  ?R_GpuLightGrid_DebugDrawVolumes@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@@Z(context, viewInfo);
}

/*
==============
RB_GpuLightGrid_SetResouces
==============
*/

void __fastcall RB_GpuLightGrid_SetResouces(ComputeCmdBufState *computeState, const GfxCmdBufInput *input, const GfxGpuLightGrid *gpuLightGrid)
{
  ?RB_GpuLightGrid_SetResouces@@YAXPEAUComputeCmdBufState@@PEBUGfxCmdBufInput@@PEBUGfxGpuLightGrid@@@Z(computeState, input, gpuLightGrid);
}

/*
==============
R_DirtyFallbackProbe
==============
*/

void R_DirtyFallbackProbe(void)
{
  ?R_DirtyFallbackProbe@@YAXXZ();
}

/*
==============
R_GetPrevFrameLightGridIndicesList
==============
*/

const unsigned int *__fastcall R_GetPrevFrameLightGridIndicesList(const GfxBackEndData *data)
{
  return ?R_GetPrevFrameLightGridIndicesList@@YAPEBIPEBUGfxBackEndData@@@Z(data);
}

/*
==============
R_InitWorldSHLighting
==============
*/

void __fastcall R_InitWorldSHLighting(GfxWorld *world)
{
  ?R_InitWorldSHLighting@@YAXPEAUGfxWorld@@@Z(world);
}

/*
==============
Bounds_IntersectGpuLightGrid
==============
*/
char Bounds_IntersectGpuLightGrid(const Bounds *bounds, const GfxGpuLightGrid *lightGrid)
{
  __int64 v2; 
  vec4_t *i; 
  __m128 v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 

  v2 = 0i64;
  for ( i = lightGrid->boundingVolume; ; ++i )
  {
    v4 = *(__m128 *)i;
    v5 = _mm_shuffle_ps(v4, v4, 85).m128_f32[0];
    v6 = fsqrt(1.0 - (float)((float)(v5 * v5) + (float)(v4.m128_f32[0] * v4.m128_f32[0])));
    v7 = (float)((float)(bounds->midPoint.v[1] * v5) + (float)(bounds->midPoint.v[0] * COERCE_FLOAT(*i))) + (float)(v6 * bounds->midPoint.v[2]);
    v8 = (float)((float)(bounds->halfSize.v[0] * COERCE_FLOAT(*i)) + (float)(bounds->halfSize.v[1] * v5)) + (float)(v6 * bounds->halfSize.v[2]);
    if ( (float)(v8 + v7) <= _mm_shuffle_ps(v4, v4, 170).m128_f32[0] || (float)(v7 - v8) >= COERCE_FLOAT(HIDWORD(*(unsigned __int128 *)i)) )
      break;
    if ( ++v2 >= 7 )
      return 1;
  }
  return 0;
}

/*
==============
RB_GpuLightGrid_DataAvailable
==============
*/
bool RB_GpuLightGrid_DataAvailable(const GfxViewInfo *viewInfo)
{
  if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sh_lighting.cpp", 203, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  return (signed int)shLightingGlob.frameData[viewInfo->input.data->shLightingIndex].numActiveLightGrids > 0;
}

/*
==============
RB_GpuLightGrid_DebugDrawVolumes
==============
*/
void RB_GpuLightGrid_DebugDrawVolumes(GfxCmdBufContext *context, const GfxViewInfo *viewInfo)
{
  GfxCmdBufSourceState *source; 
  GfxCmdBufState *state; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  __m256i m_mainSceneColorRt; 
  GfxCmdBufContext v11; 
  unsigned int ActiveLightGridsMask; 
  __int64 shLightingIndex; 
  __int64 numActiveLightGrids; 
  SHLightingFrameData *v16; 
  __int64 v17; 
  int v18; 
  const GfxGpuLightGrid *v19; 
  vec4_t *v20; 
  R_RT_DepthHandle result_8; 
  GfxCmdBufState *v24; 
  _QWORD v25[5]; 
  R_RT_DepthHandle m_mainSceneDepthRt; 
  __m256i v27; 
  R_RT_Group v28; 
  R_RT_Group v29; 

  if ( r_lightGridDrawDebugVolumes->current.enabled )
  {
    state = context->state;
    source = context->source;
    v24 = state;
    v25[0] = source;
    R_InitCmdBufSourceState(source, &viewInfo->input);
    if ( (*((_BYTE *)&source->input + 7920) & 1) != 0 )
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
    R_BeginViewInternal(source, &viewInfo->sceneDef, (const GfxViewParms *)viewInfo, &viewInfo->viewParmsSet.frames[1].viewParms);
    R_SetViewportStruct(source, &viewInfo->sceneViewport);
    result_8 = (R_RT_DepthHandle)viewInfo->sceneRtInput.m_mainSceneColorRt;
    height = R_RT_Handle::GetSurface(&result_8)->m_image.m_base.height;
    Surface = R_RT_Handle::GetSurface(&result_8);
    R_SetRenderTargetSize(context->source, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FOR_VIEW);
    m_mainSceneColorRt = (__m256i)viewInfo->sceneRtInput.m_mainSceneColorRt;
    v11 = *context;
    m_mainSceneDepthRt = viewInfo->sceneRtInput.m_mainSceneDepthRt;
    result_8 = m_mainSceneDepthRt;
    *(__m256i *)&v25[1] = m_mainSceneColorRt;
    v27 = m_mainSceneColorRt;
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface(&result_8);
      m_mainSceneDepthRt = result_8;
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 463, ASSERT_TYPE_ASSERT, "(depthRt)", (const char *)&queryFormat, "depthRt") )
        __debugbreak();
    }
    v28.m_colorRtCount = 1;
    result_8 = *(R_RT_DepthHandle *)&v25[1];
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface(&result_8);
    }
    else
    {
      if ( v27.m256i_i32[2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", *(_QWORD *)&result_8.m_surfaceID, *(_QWORD *)&result_8.m_tracking.m_allocCounter, result_8.m_tracking.m_name, result_8.m_tracking.m_location) )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 442, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
        __debugbreak();
    }
    v28.m_colorRts[0] = *(R_RT_ColorHandle *)&v25[1];
    v28.m_depthRt = m_mainSceneDepthRt;
    v29 = v28;
    *(GfxCmdBufContext *)&v25[1] = v11;
    R_SetRenderTargetsInternal((GfxCmdBufContext *)&v25[1], &v29, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sh_lighting.cpp(1249)");
    if ( r_lightGridDrawDebugVolumes->current.enabled )
    {
      ActiveLightGridsMask = R_VOL_GetActiveLightGridsMask(viewInfo->input.data);
      shLightingIndex = viewInfo->input.data->shLightingIndex;
      numActiveLightGrids = (int)shLightingGlob.frameData[shLightingIndex].numActiveLightGrids;
      v16 = &shLightingGlob.frameData[shLightingIndex];
      if ( numActiveLightGrids > 0 )
      {
        v17 = 0i64;
        v18 = 1;
        do
        {
          v19 = v16->activeLightGrids[v17];
          v20 = &colorRed;
          if ( (v18 & ActiveLightGridsMask) == 0 )
            v20 = &colorYellow;
          *(GfxCmdBufContext *)&result_8.m_surfaceID = *context;
          *(vec4_t *)&v25[1] = *v20;
          R_GpuLightGrid_DebugDrawVolume((GfxCmdBufContext *)&result_8, v19, (vec4_t *)&v25[1]);
          v18 = __ROL4__(v18, 1);
          ++v17;
        }
        while ( v17 < numActiveLightGrids );
        state = v24;
      }
    }
    R_ResetRenderTargets(state);
    if ( (*(_BYTE *)(v25[0] + 9712i64) & 1) != 0 )
    {
      R_ShutdownCmdBufState(state);
      R_UnlockIfGfxImmediateContext(state->device);
    }
    else
    {
      _XMM0 = (__int128)*RB_GetBackendCmdBufContext((const GfxCmdBufContext *)&result_8);
      __asm { vpextrq rcx, xmm0, 1; out }
      if ( state != _RCX )
      {
        GfxCmdBufState::Copy(_RCX, state);
        R_FlushImmediateContext();
      }
      R_UnlockGfxImmediateContext();
    }
  }
}

/*
==============
RB_GpuLightGrid_SetResouces
==============
*/
void RB_GpuLightGrid_SetResouces(ComputeCmdBufState *computeState, const GfxCmdBufInput *input, const GfxGpuLightGrid *gpuLightGrid)
{
  GfxGpuLightGridVoxelTree *zoneVoxelTrees; 
  GfxGpuLightGridVoxelTree *v7; 
  GfxShaderBufferView *p_view; 
  GfxShaderBufferView *v9; 
  GfxShaderBufferView *v10; 
  GfxShaderBufferView *views; 

  if ( !gpuLightGrid )
    return;
  views = &gpuLightGrid->probesBuffer.view;
  R_SetComputeViews(computeState, 0, 1, (const GfxShaderBufferView *const *)&views);
  views = &gpuLightGrid->probePositionsBuffer.view;
  R_SetComputeViews(computeState, 1, 1, (const GfxShaderBufferView *const *)&views);
  views = &gpuLightGrid->tetrahedronBuffer.view;
  R_SetComputeViews(computeState, 2, 1, (const GfxShaderBufferView *const *)&views);
  views = &gpuLightGrid->tetrahedronNeighborsBuffer.view;
  R_SetComputeViews(computeState, 3, 1, (const GfxShaderBufferView *const *)&views);
  views = &gpuLightGrid->tetrahedronVisibilityBuffer.view;
  R_SetComputeViews(computeState, 8, 1, (const GfxShaderBufferView *const *)&views);
  zoneVoxelTrees = gpuLightGrid->zoneVoxelTrees;
  if ( !zoneVoxelTrees )
  {
    v7 = NULL;
    goto LABEL_6;
  }
  v7 = &zoneVoxelTrees[(unsigned __int64)input->voxelTreeZoneIndex];
  if ( !v7 )
  {
LABEL_6:
    p_view = &deviceGlobals.voxelTreeHeaderStructuredBuffer[0].view + 2 * input->voxelTreeZoneIndex;
    goto LABEL_7;
  }
  p_view = &v7->treeHeaderBuffer.view;
LABEL_7:
  views = p_view;
  R_SetComputeViews(computeState, 4, 1, (const GfxShaderBufferView *const *)&views);
  if ( v7 )
    v9 = &v7->topDownViewNodeBuffer.view;
  else
    v9 = &deviceGlobals.voxelTopDownViewNodeStructuredBuffer[0].view + 2 * input->voxelTreeZoneIndex;
  views = v9;
  R_SetComputeViews(computeState, 5, 1, (const GfxShaderBufferView *const *)&views);
  if ( v7 )
    v10 = &v7->internalNodeBuffer.view;
  else
    v10 = &deviceGlobals.voxelInternalNodeStructuredBuffer[0].view + 2 * input->voxelTreeZoneIndex;
  views = v10;
  R_SetComputeViews(computeState, 6, 1, (const GfxShaderBufferView *const *)&views);
  views = &gpuLightGrid->voxelStartTetrahedronBuffer.view;
  R_SetComputeViews(computeState, 7, 1, (const GfxShaderBufferView *const *)&views);
}

/*
==============
RB_GpuLightGrid_Update
==============
*/
void RB_GpuLightGrid_Update(GfxCmdBufState *state, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  __int64 shLightingIndex; 
  __int64 v4; 
  __m256i *v5; 
  SHLightingFrameData *v6; 
  __int64 numActiveLightGrids; 
  __int64 v8; 
  __int64 v9; 
  const GfxGpuLightGrid *v10; 

  shLightingIndex = (int)data->shLightingIndex;
  v4 = shLightingIndex;
  v5 = (__m256i *)shLightingGlob.gfxBuffers[shLightingIndex].lightGrids.data;
  v6 = &shLightingGlob.frameData[shLightingIndex];
  numActiveLightGrids = (int)shLightingGlob.frameData[shLightingIndex].numActiveLightGrids;
  v8 = numActiveLightGrids;
  if ( (int)numActiveLightGrids > 0 )
  {
    v9 = 0i64;
    do
    {
      if ( !v6->activeLightGrids[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sh_lighting.cpp", 726, ASSERT_TYPE_ASSERT, "(frameData.activeLightGrids[i])", (const char *)&queryFormat, "frameData.activeLightGrids[i]") )
        __debugbreak();
      v10 = v6->activeLightGrids[v9++];
      *v5 = *(__m256i *)v10->boundingVolume[0].v;
      v5[1] = *(__m256i *)v10->boundingVolume[2].v;
      v5[2] = *(__m256i *)v10->boundingVolume[4].v;
      *(vec4_t *)v5[3].m256i_i8 = v10->boundingVolume[6];
      v5 = (__m256i *)((char *)v5 + 112);
    }
    while ( v9 < v8 );
    LODWORD(numActiveLightGrids) = v6->numActiveLightGrids;
  }
  memcpy_0(shLightingGlob.gfxBuffers[v4].prevFrameLightGridIndices.data, v6->prevFrameLightGridIndex, 4i64 * (unsigned int)numActiveLightGrids);
}

/*
==============
RB_UpdateFallbackProbeData
==============
*/
void RB_UpdateFallbackProbeData(GfxCmdBufState *state, const GfxBackEndData *data, const GfxViewInfo *viewInfo)
{
  __int64 shLightingIndex; 
  const GfxGpuLightGrid *v7; 
  unsigned int voxelTreeZoneIndex; 
  ComputeCmdBufState *GfxComputeCmdBufState; 
  __int64 v10; 
  bool enabled; 
  int v12; 
  float value; 
  float v14; 
  float v15; 
  GfxShaderBufferRWView *views; 
  int dataa[8]; 
  __m256i v18; 
  __m256i v19; 

  Sys_ProfBeginNamedEvent(0xFF800000, "RB_UpdateFallbackProbeData");
  shLightingIndex = data->shLightingIndex;
  if ( (int)shLightingGlob.frameData[shLightingIndex].numActiveLightGrids > 0 )
  {
    v7 = shLightingGlob.frameData[shLightingIndex].activeLightGrids[0];
    if ( v7->probeCount )
    {
      voxelTreeZoneIndex = viewInfo->input.voxelTreeZoneIndex;
      if ( shLightingGlob.fallbackProbeDirty || shLightingGlob.fallbackProbeZoneIndex != voxelTreeZoneIndex )
      {
        GfxComputeCmdBufState = R_GetGfxComputeCmdBufState(state);
        R_LockIfGfxImmediateContext(GfxComputeCmdBufState->device);
        R_ProfBeginNamedEvent(GfxComputeCmdBufState, "Update Fallback Probe");
        v10 = (__int64)&v7->zones[viewInfo->input.voxelTreeZoneIndex];
        enabled = r_fallbackProbeDebug->current.enabled;
        if ( !enabled && (v7->fallbackProbeUseCustomSample || r_fallbackProbeUseCustomSample->current.enabled) )
        {
          if ( r_fallbackProbeUseCustomSample->current.enabled )
          {
            v12 = 1;
            value = r_fallbackProbeSamplePos->current.value;
            v14 = r_fallbackProbeSamplePos->current.vector.v[1];
            v15 = r_fallbackProbeSamplePos->current.vector.v[2];
          }
          else
          {
            value = v7->fallbackProbeCustomSamplePos.v[0];
            v14 = v7->fallbackProbeCustomSamplePos.v[1];
            v15 = v7->fallbackProbeCustomSamplePos.v[2];
            v12 = 1;
          }
        }
        else
        {
          value = FLOAT_131072_0;
          v14 = FLOAT_131072_0;
          v15 = FLOAT_131072_0;
          v12 = 0;
        }
        R_SetComputeShader(GfxComputeCmdBufState, rgp.sampleFallbackProbe);
        *(float *)dataa = value;
        *(float *)&dataa[1] = v14;
        *(float *)&dataa[2] = v15;
        if ( v10 )
        {
          dataa[4] = *(_DWORD *)(v10 + 12);
          dataa[5] = *(_DWORD *)(v10 + 16);
          dataa[6] = *(_DWORD *)(v10 + 20);
        }
        dataa[7] = v12;
        if ( enabled )
        {
          *(_OWORD *)&v18.m256i_u64[2] = 0ui64;
          memset(&v19, 0, sizeof(v19));
          *(_OWORD *)v18.m256i_i8 = HalfFromFloat(10.0);
        }
        else
        {
          v18 = *(__m256i *)(v10 + 28);
          v19 = *(__m256i *)(v10 + 60);
        }
        R_UploadAndSetComputeConstants(GfxComputeCmdBufState, 0, dataa, 0x60u, NULL);
        views = &shLightingGlob.fallbackProbe.rwView;
        R_SetComputeRWViewsWithCounters(GfxComputeCmdBufState, 0, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
        RB_GpuLightGrid_SetResouces(GfxComputeCmdBufState, &viewInfo->input, v7);
        R_Dispatch(GfxComputeCmdBufState, 1u, 1u, 1u);
        R_ProfEndNamedEvent(GfxComputeCmdBufState);
        R_UnlockIfGfxImmediateContext(GfxComputeCmdBufState->device);
        shLightingGlob.fallbackProbeDirty = 0;
        shLightingGlob.fallbackProbeZoneIndex = voxelTreeZoneIndex;
      }
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
R_DirtyFallbackProbe
==============
*/
void R_DirtyFallbackProbe(void)
{
  shLightingGlob.fallbackProbeDirty = 1;
}

/*
==============
R_GetActiveLightGrids
==============
*/
SHLightingGlobGfxBuffers *R_GetActiveLightGrids(const GfxBackEndData *data)
{
  return &shLightingGlob.gfxBuffers[data->shLightingIndex];
}

/*
==============
R_GetActiveLightGridsList
==============
*/
const GfxGpuLightGrid **R_GetActiveLightGridsList(const GfxBackEndData *data)
{
  return (const GfxGpuLightGrid **)&shLightingGlob.frameData[data->shLightingIndex];
}

/*
==============
R_GetFallbackProbe
==============
*/
GfxWrappedRWBuffer *R_GetFallbackProbe()
{
  return &shLightingGlob.fallbackProbe;
}

/*
==============
R_GetLightGridMemory
==============
*/
__int64 R_GetLightGridMemory(const GfxGpuLightGrid *gpuLightGrid)
{
  GfxGpuLightGridVoxelTree *zoneVoxelTrees; 
  unsigned int v2; 
  int v3; 
  __int64 v4; 
  __int64 zoneCount; 
  int v6; 
  GfxGpuLightGridVoxelTree *v7; 
  unsigned __int64 v8; 
  int topDownViewNodeCount; 
  int internalNodeCount; 

  zoneVoxelTrees = gpuLightGrid->zoneVoxelTrees;
  v2 = 4 * (gpuLightGrid->voxelStartTetrahedronCount + 3 * gpuLightGrid->probeCount + 8 * (gpuLightGrid->probeCount + gpuLightGrid->tetrahedronCount + 2 * gpuLightGrid->tetrahedronCountVisible));
  if ( !zoneVoxelTrees )
    return v2;
  v3 = 0;
  v4 = 0i64;
  zoneCount = (int)gpuLightGrid->zoneCount;
  v6 = 0;
  if ( zoneCount >= 2 )
  {
    v7 = gpuLightGrid->zoneVoxelTrees;
    v8 = ((unsigned __int64)(zoneCount - 2) >> 1) + 1;
    v4 = 2 * v8;
    do
    {
      topDownViewNodeCount = v7->topDownViewNodeCount;
      internalNodeCount = v7->internalNodeCount;
      v7 += 2;
      v3 += 16 * internalNodeCount + 12 * topDownViewNodeCount;
      v6 += 16 * v7[-1].internalNodeCount + 12 * v7[-1].topDownViewNodeCount;
      --v8;
    }
    while ( v8 );
  }
  if ( v4 < zoneCount )
    v2 += 16 * zoneVoxelTrees[v4].internalNodeCount + 12 * zoneVoxelTrees[v4].topDownViewNodeCount;
  return v2 + v3 + v6;
}

/*
==============
R_GetNumActiveLightGrids
==============
*/
__int64 R_GetNumActiveLightGrids(const GfxBackEndData *data)
{
  return shLightingGlob.frameData[data->shLightingIndex].numActiveLightGrids;
}

/*
==============
R_GetPrevFrameLightGridIndices
==============
*/
GfxWrappedBuffer *R_GetPrevFrameLightGridIndices(const GfxBackEndData *data)
{
  return &shLightingGlob.gfxBuffers[data->shLightingIndex].prevFrameLightGridIndices;
}

/*
==============
R_GetPrevFrameLightGridIndicesList
==============
*/
unsigned int *R_GetPrevFrameLightGridIndicesList(const GfxBackEndData *data)
{
  return shLightingGlob.frameData[data->shLightingIndex].prevFrameLightGridIndex;
}

/*
==============
R_GpuLightGrid_CreateDebugGeometry
==============
*/
void R_GpuLightGrid_CreateDebugGeometry()
{
  char *v0; 
  char *v1; 
  int v2; 
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  _WORD *v7; 
  float *v8; 
  int v9; 
  double v12; 
  int v13; 
  __int64 v14; 
  int v15; 
  __int16 v16; 
  int v17; 
  __int16 v18; 
  __int16 v19; 
  __int16 v20; 
  char *v21; 
  char *v22; 
  _WORD *v23; 
  int v24; 
  _WORD *v25; 
  __int64 v26; 
  int v27; 
  int v28; 
  float *v29; 
  float v30; 
  float v31; 
  int v32; 
  int v33; 
  __int16 v34; 
  int i; 
  int j; 
  __int64 v37; 
  __int16 v38; 
  int v39; 
  __int64 v40; 
  __int16 v41; 
  __int64 v42; 
  __int64 v43; 
  __int64 v44; 
  __int64 v45; 
  __int64 v46; 
  __int16 v47; 
  int v48; 
  __int64 v49; 
  __int64 v50; 
  __int64 v51; 
  __int64 v52; 
  __int64 v53; 
  GfxBufferCreationContext v54; 

  R_LockGfxImmediateContext();
  v54.objectName = "debugSphere VB";
  v54.zoneName = "shLighting";
  v0 = (char *)R_AllocStaticVertexBuffer(&shLightingGlob.debugLightProbeVerts, 768, &v54);
  v54.zoneName = "shLighting";
  v1 = v0;
  v54.objectName = "debugSphere IB";
  v2 = 0;
  v7 = R_AllocStaticIndexBuffer(&shLightingGlob.debugLightProbeIndices, 672, &v54);
  v8 = (float *)(v1 + 8);
  do
  {
    v9 = 0;
    _RBX = v8;
    v8 += 24;
    _XMM6 = COERCE_UNSIGNED_INT64(j___libm_sse2_sincosf_(v4, v3, v5, v6));
    do
    {
      v12 = j___libm_sse2_sincosf_(v4, v3, v5, v6);
      *(_RBX - 2) = _mm_shuffle_ps((__m128)*(unsigned __int64 *)&v12, (__m128)*(unsigned __int64 *)&v12, 1).m128_f32[0] * *(float *)&_XMM6;
      *(_RBX - 1) = *(float *)&v12 * *(float *)&_XMM6;
      __asm { vextractps dword ptr [rbx], xmm6, 1 }
      _RBX += 3;
      ++v9;
    }
    while ( v9 < 8 );
    ++v2;
  }
  while ( v2 < 8 );
  v13 = 0;
  v14 = 0i64;
  do
  {
    v15 = 0;
    v16 = 8 * v13;
    do
    {
      v17 = v15 + 1;
      v18 = (v15 + 1) % 8;
      v19 = v16 + v15;
      v20 = v16 + 8 + v15;
      v7[v14] = v19;
      v7[v14 + 1] = v16 + v18;
      v7[v14 + 2] = v20;
      v7[v14 + 3] = v16 + v18;
      v7[v14 + 4] = v16 + v18 + 8;
      v7[v14 + 5] = v20;
      v14 += 6i64;
      v15 = v17;
    }
    while ( v17 < 8 );
    ++v13;
  }
  while ( v13 < 7 );
  v54.zoneName = "shLighting";
  v54.objectName = "debugTriPatch VB";
  v21 = (char *)R_AllocStaticVertexBuffer(&shLightingGlob.debugTriPatchVerts, 180, &v54);
  v54.zoneName = "shLighting";
  v22 = v21;
  v54.objectName = "debugTriPatch IB";
  v23 = R_AllocStaticIndexBuffer(&shLightingGlob.debugTriPatchIndices, 192, &v54);
  v24 = 0;
  v25 = v23;
  v26 = 0i64;
  do
  {
    v27 = 0;
    v28 = 5 - v24;
    if ( 5 - v24 > 0 )
    {
      v29 = (float *)&v22[12 * v26 + 8];
      v26 += (unsigned int)v28;
      v30 = (float)v24 * 0.25;
      do
      {
        v31 = (float)v27 * 0.25;
        *(v29 - 2) = v31;
        ++v27;
        *v29 = (float)(1.0 - v31) - v30;
        *(v29 - 1) = v30;
        v29 += 3;
      }
      while ( v27 < v28 );
    }
    ++v24;
  }
  while ( v24 < 5 );
  v32 = 0;
  v33 = 0;
  v34 = 0;
  for ( i = 4; i > 0; --i )
  {
    for ( j = 0; j < i; ++j )
    {
      v37 = v32;
      v38 = v33 + 1;
      v39 = v32 + 1;
      v25[v37] = v33;
      v40 = v39++;
      v41 = v33 - v34 + 5;
      v25[v40] = v33 + 1;
      v42 = v39++;
      v25[v42] = v41;
      v43 = v39++;
      v25[v43] = v33;
      v44 = v39++;
      v25[v44] = v41;
      v45 = v39;
      v32 = v39 + 1;
      v25[v45] = v33 + 1;
      if ( j != i - 1 )
      {
        v46 = v32;
        v47 = v33 - v34 + 6;
        v48 = v32 + 1;
        v25[v46] = v38;
        v49 = v48++;
        v25[v49] = v47;
        v50 = v48++;
        v25[v50] = v41;
        v51 = v48++;
        v25[v51] = v38;
        v52 = v48++;
        v25[v52] = v41;
        v53 = v48;
        v32 = v48 + 1;
        v25[v53] = v47;
      }
      ++v33;
    }
    ++v33;
    ++v34;
  }
  shLightingGlob.debugLightProbeVertCount = 64;
  shLightingGlob.debugLightProbeVertsStride = 12;
  shLightingGlob.debugLightProbeTriCount = 112;
  shLightingGlob.debugTriPatchVertCount = 15;
  shLightingGlob.debugTriPatchVertsStride = 12;
  shLightingGlob.debugTriPatchTriCount = 32;
  R_UnlockGfxImmediateContext();
}

/*
==============
R_GpuLightGrid_DataAvailable
==============
*/
bool R_GpuLightGrid_DataAvailable(const GfxWorld *world)
{
  if ( !world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sh_lighting.cpp", 189, ASSERT_TYPE_ASSERT, "(world)", (const char *)&queryFormat, "world") )
    __debugbreak();
  return world->draw.lightGridType != GFX_LIGHTGRID_TYPE_NONE;
}

/*
==============
R_GpuLightGrid_DataAvailable
==============
*/
bool R_GpuLightGrid_DataAvailable()
{
  return s_world.draw.lightGridType != GFX_LIGHTGRID_TYPE_NONE;
}

/*
==============
R_GpuLightGrid_DebugDrawEnabled
==============
*/
__int64 R_GpuLightGrid_DebugDrawEnabled()
{
  return r_lightGridDrawDebugVolumes->current.color[0];
}

/*
==============
R_GpuLightGrid_DebugDrawVolume
==============
*/
void R_GpuLightGrid_DebugDrawVolume(GfxCmdBufContext *context, const GfxGpuLightGrid *lightGrid, vec4_t *color)
{
  __int128 v3; 
  __int128 v4; 
  __int64 v5; 
  char *v6; 
  float *v7; 
  unsigned int v10; 
  __int64 v11; 
  __int128 v18; 
  int v26; 
  char *v27; 
  __m128 v28; 
  unsigned int v29; 
  float v30; 
  float v31; 
  float v32; 
  int v33; 
  __m128 v34; 
  vec3_t *p_start; 
  int *v36; 
  vec3_t *v37; 
  int *v38; 
  float v39; 
  __int128 v40; 
  __int128 v41; 
  float v45; 
  __int128 v46; 
  __int128 v47; 
  float v48; 
  __int128 v49; 
  char *v53; 
  float v54; 
  float v55; 
  __int128 v56; 
  float v57; 
  float v58; 
  float v62; 
  float v63; 
  float v64; 
  float v65; 
  float v66; 
  float v67; 
  int v68; 
  __m128 v69; 
  float v70; 
  float v71; 
  float v72; 
  float v73; 
  int v74; 
  int v75; 
  __int64 v76; 
  float v77; 
  float v78; 
  float v79; 
  __int64 v80; 
  __int64 v81; 
  float v82; 
  float v83; 
  __int64 v84; 
  __int64 v85; 
  __int64 v86; 
  double v87; 
  float v88; 
  __int64 v89; 
  float v90; 
  float v91; 
  __m128 v92; 
  float v93; 
  __m128 v94; 
  int v97; 
  int v98; 
  vec4_t *v99; 
  const vec3_t *v100; 
  __int64 v101; 
  const vec3_t *v102; 
  int v103; 
  int v104; 
  int v105; 
  int v106; 
  int v107; 
  char *v108; 
  vec4_t *colora; 
  char *v110; 
  double v111; 
  float v112; 
  __int128 v113; 
  double v114; 
  float v115; 
  float v116; 
  __m128 v117; 
  vec3_t start; 
  float v119; 
  float v120; 
  float v121; 
  float v122; 
  float v123; 
  float v124; 
  double v125; 
  float v126; 
  char v127; 
  char v128[224]; 

  v3 = (unsigned int)_xmm;
  v4 = LODWORD(FLOAT_1_0);
  v5 = 7i64;
  colora = color;
  v6 = v128;
  v7 = &lightGrid->boundingVolume[0].v[2];
  do
  {
    _XMM7 = *((unsigned int *)v7 - 2);
    _XMM8 = *((unsigned int *)v7 - 1);
    v10 = 0;
    v11 = 2i64;
    do
    {
      _XMM0 = v10;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm5, xmm7, xmm9, xmm2
      }
      _XMM0 = v10;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm6, xmm8, xmm10, xmm2
      }
      v18 = LODWORD(FLOAT_1_0);
      *(float *)&v18 = fsqrt(1.0 - (float)((float)(*(float *)&_XMM6 * *(float *)&_XMM6) + (float)(*(float *)&_XMM5 * *(float *)&_XMM5)));
      _XMM4 = v18;
      _XMM0 = v10;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm1, xmm4, xmm3, xmm2
        vinsertps xmm5, xmm5, xmm6, 10h
        vinsertps xmm5, xmm5, [rsp+860h+var_830], 20h
        vinsertps xmm5, xmm5, xmm1, 30h ; '0'
      }
      *(_OWORD *)v6 = _XMM5;
      v6 += 16;
      v10 = 2;
      v113 = _XMM5;
      --v11;
    }
    while ( v11 );
    v7 += 4;
    --v5;
  }
  while ( v5 );
  v26 = 0;
  v27 = v128;
  v103 = 0;
  v110 = v128;
  do
  {
    v28 = *(__m128 *)v27;
    v29 = _mm_shuffle_ps(v28, v28, 255).m128_u32[0];
    v30 = _mm_shuffle_ps(v28, v28, 85).m128_f32[0];
    v31 = COERCE_FLOAT(v29 ^ v3) * COERCE_FLOAT(*(_OWORD *)v27);
    v32 = COERCE_FLOAT(v29 ^ v3) * v30;
    v33 = 0;
    v107 = 0;
    v34 = _mm_shuffle_ps(v28, v28, 170);
    v112 = COERCE_FLOAT(v29 ^ v3) * v34.m128_f32[0];
    *(float *)&v111 = v31;
    *((float *)&v111 + 1) = v32;
    v104 = 0;
    p_start = &start;
    v36 = &v106;
    v37 = (vec3_t *)&v127;
    v38 = &v107;
    v39 = v30 * v30;
    if ( COERCE_FLOAT(v28.m128_i32[0] & _xmm) >= 0.0049999999 )
    {
      v40 = *(_OWORD *)&v28 ^ v3;
      v49 = v40;
      *(float *)&v49 = fsqrt((float)(*(float *)&v40 * *(float *)&v40) + v39);
      _XMM2 = v49;
      __asm
      {
        vcmpless xmm0, xmm2, xmm10
        vblendvps xmm0, xmm2, xmm11, xmm0
      }
      v45 = *(float *)&v4 / *(float *)&_XMM0;
      v48 = (float)(*(float *)&v4 / *(float *)&_XMM0) * v30;
      v47 = 0i64;
    }
    else
    {
      v40 = *(_OWORD *)&v34 ^ v3;
      v41 = v40;
      *(float *)&v41 = fsqrt((float)(*(float *)&v40 * *(float *)&v40) + v39);
      _XMM2 = v41;
      __asm
      {
        vcmpless xmm0, xmm2, xmm10
        vblendvps xmm0, xmm2, xmm11, xmm0
      }
      v46 = v4;
      v45 = *(float *)&v4 / *(float *)&_XMM0;
      *(float *)&v46 = (float)(*(float *)&v4 / *(float *)&_XMM0) * v30;
      v47 = v46;
      v48 = 0.0;
    }
    v53 = v128;
    v54 = v45 * *(float *)&v40;
    v55 = (float)((float)(v45 * *(float *)&v40) * v34.m128_f32[0]) - (float)(*(float *)&v47 * v30);
    v56 = v47;
    v57 = (float)(*(float *)&v47 * v28.m128_f32[0]) - (float)(v48 * v34.m128_f32[0]);
    v58 = (float)(v48 * v30) - (float)((float)(v45 * *(float *)&v40) * v28.m128_f32[0]);
    *(float *)&v56 = fsqrt((float)((float)(v57 * v57) + (float)(v55 * v55)) + (float)(v58 * v58));
    _XMM1 = v56;
    __asm
    {
      vcmpless xmm0, xmm1, xmm10
      vblendvps xmm0, xmm1, xmm11, xmm0
    }
    v62 = v54 * 256000.0;
    v63 = *(float *)&v47 * 256000.0;
    v64 = (float)((float)(*(float *)&v4 / *(float *)&_XMM0) * v55) * 256000.0;
    v65 = v48 * 256000.0;
    v66 = (float)((float)(*(float *)&v4 / *(float *)&_XMM0) * v57) * 256000.0;
    v67 = (float)((float)(*(float *)&v4 / *(float *)&_XMM0) * v58) * 256000.0;
    v125 = v111;
    start.v[0] = (float)(v31 - v65) - v64;
    start.v[1] = (float)(v32 - v62) - v66;
    v68 = 0;
    start.v[2] = (float)(v112 - v63) - v67;
    v119 = (float)(v31 - v65) + v64;
    v120 = (float)(v32 - v62) + v66;
    v121 = (float)(v112 - v63) + v67;
    v123 = (float)(v32 + v62) + v66;
    v122 = (float)(v31 + v65) + v64;
    v124 = (float)(v63 + v112) + v67;
    *(float *)&v125 = (float)(v31 + v65) - v64;
    *((float *)&v125 + 1) = (float)(v62 + *((float *)&v125 + 1)) - v66;
    v126 = (float)(v63 + v112) - v67;
    v106 = 4;
    v105 = 0;
    v108 = v128;
    while ( *v36 >= 3 )
    {
      if ( ((v26 ^ v68) & 0xFFFFFFFE) != 0 )
      {
        v69 = *(__m128 *)v53;
        v70 = _mm_shuffle_ps(v69, v69, 85).m128_f32[0];
        v71 = (float)(v70 * p_start->v[1]) + (float)(COERCE_FLOAT(*(_OWORD *)v53) * p_start->v[0]);
        v72 = _mm_shuffle_ps(v69, v69, 170).m128_f32[0];
        v73 = v72 * p_start->v[2];
        *v38 = 0;
        v74 = 0;
        v75 = *v36;
        v76 = 0i64;
        v77 = v71 + v73;
        v117 = v69;
        if ( v75 > 0 )
        {
          v78 = v117.m128_f32[3];
          v79 = COERCE_FLOAT(v117.m128_i32[3] ^ v3) - 0.0049999999;
          do
          {
            v80 = 0i64;
            if ( v74 != v75 - 1 )
              v80 = v76 + 1;
            v81 = v80;
            v83 = (float)((float)(v70 * p_start[v80].v[1]) + (float)(v69.m128_f32[0] * p_start[v80].v[0])) + (float)(v72 * p_start[v80].v[2]);
            v82 = v83;
            if ( v79 > v77 )
            {
              v84 = *v38;
              v85 = v84;
              *(double *)v37[v85].v = *(double *)p_start[v76].v;
              v37[v85].v[2] = p_start[v76].v[2];
              *v38 = v84 + 1;
            }
            if ( v79 > v77 != v79 > v83 )
            {
              v86 = *v38;
              v87 = *(double *)p_start[v76].v;
              v115 = p_start[v76].v[2];
              v88 = p_start[v81].v[2];
              v89 = v86;
              v90 = -1.0 / (float)(v83 - v77);
              v91 = v78 + v77;
              v92 = (__m128)*(unsigned __int64 *)p_start[v81].v;
              v93 = v90 * v91;
              v94 = v92;
              v94.m128_f32[0] = (float)((float)(v92.m128_f32[0] - *(float *)&v87) * v93) + *(float *)&v87;
              _XMM5 = v94;
              v114 = v87;
              _mm_shuffle_ps(v92, v92, 85);
              v116 = v88;
              v94.m128_f32[0] = (float)((float)(v88 - v115) * v93) + v115;
              __asm { vunpcklps xmm0, xmm5, xmm4 }
              *((float *)&v113 + 2) = v94.m128_f32[0];
              *(double *)v37[v89].v = *(double *)&_XMM0;
              LODWORD(v37[v89].v[2]) = v94.m128_i32[0];
              *v38 = v86 + 1;
            }
            v75 = *v36;
            ++v74;
            ++v76;
            v77 = v82;
          }
          while ( v74 < *v36 );
          v3 = (unsigned int)_xmm;
          v33 = v104;
          v68 = v105;
          v53 = v108;
          v26 = v103;
        }
        v104 = ++v33;
        v36 = &v106 + v33 % 2;
        p_start = &start + 64 * (v33 % 2);
        v97 = (v33 + 1) % 2;
        v38 = &v106 + v97;
        v37 = &start + 64 * v97;
      }
      ++v68;
      v53 += 16;
      v105 = v68;
      v108 = v53;
      if ( v68 >= 14 )
      {
        if ( *v36 >= 3 )
        {
          v98 = *v36 - 1;
          if ( v98 > 0 )
          {
            v99 = colora;
            v100 = p_start;
            v101 = (unsigned int)v98;
            do
            {
              v102 = v100 + 1;
              CG_DebugLine(v100, v100 + 1, v99, 1, 0);
              v100 = v102;
              --v101;
            }
            while ( v101 );
          }
          CG_DebugLine(&p_start[v98], p_start, colora, 1, 0);
        }
        break;
      }
    }
    ++v26;
    v4 = LODWORD(FLOAT_1_0);
    v27 = v110 + 16;
    v103 = v26;
    v110 += 16;
  }
  while ( v26 < 14 );
}

/*
==============
R_GpuLightGrid_DebugDrawVolumes
==============
*/
void R_GpuLightGrid_DebugDrawVolumes(GfxCmdBufContext *context, const GfxViewInfo *viewInfo)
{
  unsigned int ActiveLightGridsMask; 
  __int64 shLightingIndex; 
  __int64 numActiveLightGrids; 
  SHLightingFrameData *v7; 
  int v8; 
  __int64 i; 
  const GfxGpuLightGrid *v10; 
  vec4_t *v11; 
  vec4_t v12; 
  GfxCmdBufContext v13; 

  if ( r_lightGridDrawDebugVolumes->current.enabled )
  {
    ActiveLightGridsMask = R_VOL_GetActiveLightGridsMask(viewInfo->input.data);
    shLightingIndex = viewInfo->input.data->shLightingIndex;
    numActiveLightGrids = (int)shLightingGlob.frameData[shLightingIndex].numActiveLightGrids;
    v7 = &shLightingGlob.frameData[shLightingIndex];
    if ( numActiveLightGrids > 0 )
    {
      v8 = 1;
      for ( i = 0i64; i < numActiveLightGrids; ++i )
      {
        v10 = v7->activeLightGrids[i];
        v11 = &colorRed;
        if ( (v8 & ActiveLightGridsMask) == 0 )
          v11 = &colorYellow;
        v13 = *context;
        v12 = *v11;
        R_GpuLightGrid_DebugDrawVolume(&v13, v10, &v12);
        v8 = __ROL4__(v8, 1);
      }
    }
  }
}

/*
==============
R_GpuLightGrid_DrawDebug
==============
*/
void R_GpuLightGrid_DrawDebug(GfxCmdBufContext *context, const GfxViewInfo *viewInfo, const GfxGpuLightGrid *gpuLightGrid, int lightGridDebug, float sphereScale, GfxWrappedBuffer *lightGridSampleRequests, const GfxWrappedRWBuffer *probesBuffer, int numSpheresToRender, int numTriPatchesToRender, int sphereIndexShift)
{
  __int64 shLightingIndex; 
  __int64 voxelTreeZoneIndex; 
  _DWORD *v16; 
  GfxGpuLightGridZone *zones; 
  unsigned int voxelTetrahedronInternalNodeShift; 
  float v19; 
  __int64 v20; 
  GfxCmdBufInput *p_input; 
  GfxGpuLightGridVoxelTree *zoneVoxelTrees; 
  __int64 v23; 
  GfxGpuLightGridVoxelTree *v24; 
  GfxWrappedBuffer *p_treeHeaderBuffer; 
  __int64 v26; 
  GfxWrappedBuffer *p_topDownViewNodeBuffer; 
  GfxCmdBufContext v28; 
  GfxWrappedBuffer *v29; 
  GfxWrappedBuffer *p_internalNodeBuffer; 
  GfxCmdBufContext v35; 
  GfxCmdBufContext v36; 
  GfxCmdBufContext v37; 
  GfxDrawPrimArgs outArgs; 
  GfxDrawPrimArgs args; 

  shLightingIndex = (int)context->source->input.data->shLightingIndex;
  if ( !R_BeginMaterial(context->state, rgp.gpuLightGridDebugMaterial, TECHNIQUE_EMISSIVE) )
    return;
  v35 = *context;
  if ( !R_SetupPass(&v35) )
    return;
  voxelTreeZoneIndex = (int)viewInfo->input.voxelTreeZoneIndex;
  v16 = R_BeginWrappedBufferDataWrite(&shLightingGlob.gfxBuffers[shLightingIndex].debugDataBuffer);
  v16[3] = lightGridDebug - 1;
  v16[7] = sphereIndexShift;
  zones = gpuLightGrid->zones;
  if ( zones )
  {
    v16[8] = zones[voxelTreeZoneIndex].firstTetrahedron;
    v16[9] = gpuLightGrid->zones[voxelTreeZoneIndex].firstVoxelTetrahedronIndex;
    voxelTetrahedronInternalNodeShift = gpuLightGrid->zones[voxelTreeZoneIndex].voxelTetrahedronInternalNodeShift;
  }
  else
  {
    *((_QWORD *)v16 + 4) = 0i64;
    voxelTetrahedronInternalNodeShift = 0;
  }
  v16[10] = voxelTetrahedronInternalNodeShift;
  if ( r_lightGridDebugPosLocked->current.enabled )
  {
    *(_QWORD *)v16 = 0i64;
    v19 = 0.0;
  }
  else
  {
    v16[4] = LODWORD(viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[0]);
    v16[5] = LODWORD(viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[1]);
    v16[6] = LODWORD(viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[2]);
    *v16 = LODWORD(viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[0].v[0]);
    v16[1] = LODWORD(viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[0].v[1]);
    v19 = viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[0].v[2];
  }
  *((float *)v16 + 2) = v19;
  R_EndWrappedBufferDataWrite(&shLightingGlob.gfxBuffers[shLightingIndex].debugDataBuffer);
  v20 = viewInfo->input.data->shLightingIndex;
  p_input = &context->source->input;
  if ( context->source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1494, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeBuffers[12] = &gpuLightGrid->probesBuffer;
  p_input->codeBuffers[13] = &gpuLightGrid->probePositionsBuffer;
  p_input->codeBuffers[14] = &gpuLightGrid->tetrahedronBuffer;
  zoneVoxelTrees = gpuLightGrid->zoneVoxelTrees;
  v23 = p_input->voxelTreeZoneIndex;
  if ( !zoneVoxelTrees )
  {
    v24 = NULL;
    goto LABEL_16;
  }
  v24 = &zoneVoxelTrees[(unsigned __int64)(unsigned int)v23];
  if ( !v24 )
  {
LABEL_16:
    p_treeHeaderBuffer = &deviceGlobals.voxelTreeHeaderStructuredBuffer[v23];
    goto LABEL_17;
  }
  p_treeHeaderBuffer = &v24->treeHeaderBuffer;
LABEL_17:
  v26 = v23;
  p_input->codeBuffers[16] = p_treeHeaderBuffer;
  p_topDownViewNodeBuffer = &v24->topDownViewNodeBuffer;
  if ( !v24 )
    p_topDownViewNodeBuffer = &deviceGlobals.voxelTopDownViewNodeStructuredBuffer[v26];
  v28 = *context;
  v29 = &deviceGlobals.voxelInternalNodeStructuredBuffer[v26];
  p_input->codeBuffers[17] = p_topDownViewNodeBuffer;
  p_internalNodeBuffer = &v24->internalNodeBuffer;
  if ( !v24 )
    p_internalNodeBuffer = v29;
  p_input->codeBuffers[18] = p_internalNodeBuffer;
  p_input->codeBuffers[19] = &gpuLightGrid->voxelStartTetrahedronBuffer;
  p_input->codeBuffers[15] = &gpuLightGrid->tetrahedronNeighborsBuffer;
  p_input->codeBuffers[20] = &gpuLightGrid->tetrahedronVisibilityBuffer;
  p_input->codeBuffers[22] = &gfxBuf.dummyBuffer;
  p_input->codeBuffers[21] = &shLightingGlob.gfxBuffers[v20].debugDataBuffer;
  p_input->codeBuffers[23] = &shLightingGlob.fallbackProbe;
  v36 = v28;
  R_SetupPassStableArgsInternal(&v36, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sh_lighting.cpp(1029)");
  v37 = *context;
  R_SetupPassPerObjectArgsInternal(&v37, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sh_lighting.cpp(1030)");
  if ( numSpheresToRender > 0 )
  {
    _XMM6 = *context;
    __asm { vpextrq rbx, xmm6, 1 }
    R_SetIndicesWithType(_RBX, shLightingGlob.debugLightProbeIndices, DXGI_FORMAT_R16_UINT);
    R_SetStreamSource(_RBX, R_BASE_VERTEX_STREAM, shLightingGlob.debugLightProbeVerts, 0, shLightingGlob.debugLightProbeVertsStride);
    R_FlushStreamSources(_RBX, shLightingGlob.debugLightProbeVertCount);
    R_AssignDrawPrimArgsInternal(&outArgs, shLightingGlob.debugLightProbeVertCount, shLightingGlob.debugLightProbeTriCount, 0, 0, _XMM6.source->input.data->endSwapFrame, _XMM6.source->viewStatsTarget, GFX_PRIM_STATS_DEBUG, GFX_TRI_SOURCE_STATIC);
    R_DrawInstancedIndexedPrimitive(_RBX, &outArgs, numSpheresToRender);
  }
  if ( numTriPatchesToRender > 0 )
  {
    _XMM6 = *context;
    __asm { vpextrq rbx, xmm6, 1 }
    R_SetIndicesWithType(_RBX, shLightingGlob.debugTriPatchIndices, DXGI_FORMAT_R16_UINT);
    R_SetStreamSource(_RBX, R_BASE_VERTEX_STREAM, shLightingGlob.debugTriPatchVerts, 0, shLightingGlob.debugTriPatchVertsStride);
    R_FlushStreamSources(_RBX, shLightingGlob.debugTriPatchVertCount);
    R_AssignDrawPrimArgsInternal(&args, shLightingGlob.debugTriPatchVertCount, shLightingGlob.debugTriPatchTriCount, 0, 0, _XMM6.source->input.data->endSwapFrame, _XMM6.source->viewStatsTarget, GFX_PRIM_STATS_DEBUG, GFX_TRI_SOURCE_STATIC);
    R_DrawInstancedIndexedPrimitive(_RBX, &args, numTriPatchesToRender);
  }
}

/*
==============
R_GpuLightGrid_DrawDebugSpheres
==============
*/
void R_GpuLightGrid_DrawDebugSpheres(GfxCmdBufContext *context, unsigned int numSpheresToRender)
{
  GfxCmdBufState *state; 
  GfxDrawPrimArgs outArgs; 

  state = context->state;
  R_SetIndicesWithType(state, shLightingGlob.debugLightProbeIndices, DXGI_FORMAT_R16_UINT);
  R_SetStreamSource(state, R_BASE_VERTEX_STREAM, shLightingGlob.debugLightProbeVerts, 0, shLightingGlob.debugLightProbeVertsStride);
  R_FlushStreamSources(state, shLightingGlob.debugLightProbeVertCount);
  R_AssignDrawPrimArgsInternal(&outArgs, shLightingGlob.debugLightProbeVertCount, shLightingGlob.debugLightProbeTriCount, 0, 0, context->source->input.data->endSwapFrame, context->source->viewStatsTarget, GFX_PRIM_STATS_DEBUG, GFX_TRI_SOURCE_STATIC);
  R_DrawInstancedIndexedPrimitive(state, &outArgs, numSpheresToRender);
}

/*
==============
R_GpuLightGrid_GetBoundingPlane
==============
*/
vec4_t *R_GpuLightGrid_GetBoundingPlane(vec4_t *result, const GfxGpuLightGrid *lightGrid, int axisIndex, bool positive)
{
  __int64 v4; 
  __int64 v6; 
  __int128 v14; 
  vec4_t *v19; 

  v4 = axisIndex;
  _XMM0 = positive;
  v6 = axisIndex;
  __asm { vpcmpeqd xmm2, xmm0, xmm1 }
  _XMM3 = LODWORD(lightGrid->boundingVolume[v6].v[0]) ^ (unsigned __int128)(unsigned int)_xmm;
  __asm { vblendvps xmm5, xmm3, xmm4, xmm2 }
  _XMM0 = positive;
  __asm { vpcmpeqd xmm2, xmm0, xmm1 }
  _XMM3 = LODWORD(lightGrid->boundingVolume[v6].v[1]) ^ (unsigned __int128)(unsigned int)_xmm;
  __asm { vblendvps xmm3, xmm3, xmm4, xmm2 }
  v14 = LODWORD(FLOAT_1_0);
  *(float *)&v14 = fsqrt(1.0 - (float)((float)(*(float *)&_XMM3 * *(float *)&_XMM3) + (float)(*(float *)&_XMM5 * *(float *)&_XMM5)));
  _XMM0 = positive;
  result->v[1] = *(float *)&_XMM3;
  _XMM3 = v14 ^ (unsigned int)_xmm;
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm1, xmm3, xmm4, xmm2
  }
  result->v[2] = *(float *)&_XMM1;
  result->v[0] = *(float *)&_XMM5;
  if ( positive )
  {
    result->v[3] = lightGrid->boundingVolume[v4].v[2];
    return result;
  }
  else
  {
    v19 = result;
    result->v[3] = COERCE_FLOAT(LODWORD(lightGrid->boundingVolume[v6].v[3]) ^ _xmm);
  }
  return v19;
}

/*
==============
R_GpuLightGrid_Init
==============
*/
void R_GpuLightGrid_Init(void)
{
  __int64 v0; 
  GfxWrappedBuffer *p_prevFrameLightGridIndices; 
  __int64 v2; 
  int ElementSizeForDataFormat; 
  GfxWrappedBuffer *p_debugDataBuffer; 

  v0 = 2i64;
  p_prevFrameLightGridIndices = &shLightingGlob.gfxBuffers[0].prevFrameLightGridIndices;
  v2 = 2i64;
  do
  {
    R_CreateGfxWrappedBuffer(p_prevFrameLightGridIndices - 1, GfxWrappedBuffer_Structured, 112, 0x14u, GFX_DATA_FORMAT_R32_UINT, 4u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "Light grid parameters");
    ElementSizeForDataFormat = Buffers_GetElementSizeForDataFormat(GFX_DATA_FORMAT_R32_UINT);
    R_CreateGfxWrappedBuffer(p_prevFrameLightGridIndices, GfxWrappedBuffer_Data, ElementSizeForDataFormat, 0x14u, GFX_DATA_FORMAT_R32_UINT, 4u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "Light grid indices in the prev frame");
    p_prevFrameLightGridIndices += 3;
    --v2;
  }
  while ( v2 );
  R_GpuLightGrid_CreateDebugGeometry();
  p_debugDataBuffer = &shLightingGlob.gfxBuffers[0].debugDataBuffer;
  do
  {
    R_CreateGfxWrappedBuffer(p_debugDataBuffer, GfxWrappedBuffer_Structured, 48, 1u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "debug");
    p_debugDataBuffer += 3;
    --v0;
  }
  while ( v0 );
}

/*
==============
R_GpuLightGrid_SetResources
==============
*/
void R_GpuLightGrid_SetResources(GfxCmdBufInput *input, const GfxGpuLightGrid *gpuLightGrid, unsigned int frameIndex)
{
  __int64 v3; 
  GfxGpuLightGridVoxelTree *zoneVoxelTrees; 
  __int64 voxelTreeZoneIndex; 
  GfxGpuLightGridVoxelTree *v8; 
  const GfxWrappedBuffer *p_treeHeaderBuffer; 
  __int64 v10; 
  const GfxWrappedBuffer *p_topDownViewNodeBuffer; 
  GfxWrappedBuffer *v12; 
  const GfxWrappedBuffer *p_internalNodeBuffer; 

  if ( !gpuLightGrid )
    return;
  v3 = frameIndex;
  if ( !input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1494, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  input->codeBuffers[12] = &gpuLightGrid->probesBuffer;
  input->codeBuffers[13] = &gpuLightGrid->probePositionsBuffer;
  input->codeBuffers[14] = &gpuLightGrid->tetrahedronBuffer;
  zoneVoxelTrees = gpuLightGrid->zoneVoxelTrees;
  voxelTreeZoneIndex = input->voxelTreeZoneIndex;
  if ( !zoneVoxelTrees )
  {
    v8 = NULL;
    goto LABEL_9;
  }
  v8 = &zoneVoxelTrees[(unsigned __int64)(unsigned int)voxelTreeZoneIndex];
  if ( !v8 )
  {
LABEL_9:
    p_treeHeaderBuffer = &deviceGlobals.voxelTreeHeaderStructuredBuffer[voxelTreeZoneIndex];
    goto LABEL_10;
  }
  p_treeHeaderBuffer = &v8->treeHeaderBuffer;
LABEL_10:
  v10 = voxelTreeZoneIndex;
  input->codeBuffers[16] = p_treeHeaderBuffer;
  p_topDownViewNodeBuffer = &v8->topDownViewNodeBuffer;
  if ( !v8 )
    p_topDownViewNodeBuffer = &deviceGlobals.voxelTopDownViewNodeStructuredBuffer[v10];
  v12 = &deviceGlobals.voxelInternalNodeStructuredBuffer[v10];
  input->codeBuffers[17] = p_topDownViewNodeBuffer;
  p_internalNodeBuffer = &v8->internalNodeBuffer;
  if ( !v8 )
    p_internalNodeBuffer = v12;
  input->codeBuffers[19] = &gpuLightGrid->voxelStartTetrahedronBuffer;
  input->codeBuffers[15] = &gpuLightGrid->tetrahedronNeighborsBuffer;
  input->codeBuffers[18] = p_internalNodeBuffer;
  input->codeBuffers[20] = &gpuLightGrid->tetrahedronVisibilityBuffer;
  input->codeBuffers[22] = &gfxBuf.dummyBuffer;
  input->codeBuffers[23] = &shLightingGlob.fallbackProbe;
  input->codeBuffers[21] = &shLightingGlob.gfxBuffers[v3].debugDataBuffer;
}

/*
==============
R_GpuLightGrid_SetupFrame
==============
*/
void R_GpuLightGrid_SetupFrame(GfxBackEndData *data, const GfxViewInfo *viewInfo)
{
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  unsigned int shLightingIndex; 
  unsigned int v11; 
  signed int v12; 
  GfxBackEndData *v13; 
  float (*gpuLightGridCameraDist)[1536]; 
  SHLightingFrameData *v15; 
  __int64 zoneCount; 
  __int64 voxelTreeZoneIndex; 
  __int64 v18; 
  __int64 v19; 
  const GfxGpuLightGrid **gpuLightGrid; 
  const GfxGpuLightGrid *v21; 
  GfxGpuLightGridVoxelTree *zoneVoxelTrees; 
  float *rootNodeDimension; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  __m128 v39; 
  __m128 v43; 
  __int128 v49; 
  std::_Ref_fn<<lambda_5ecc68168016b79ce6058389727e366a> > v57; 
  __int64 v58; 
  __int64 i; 
  const GfxGpuLightGrid *v60; 
  unsigned __int64 v61; 
  int v62; 
  __int64 numActiveLightGrids; 
  int *v64; 
  int v65; 
  __int64 v66; 
  int v67; 
  __int64 v68; 
  __int64 v69; 
  const GfxGpuLightGrid **v70; 
  __int64 v71; 
  R_GpuLightGrid_SetupFrame::__l2::<lambda_5ecc68168016b79ce6058389727e366a> _Val; 
  unsigned __int64 v74; 
  __int128 v75; 
  __m128 v76; 
  __m128 v77; 
  int _First[256]; 
  float v79[1536]; 
  float v80[1536]; 
  __int128 v81; 
  __int128 v82; 
  __int128 v83; 
  __int128 v84; 
  __int128 v85; 
  __int128 v86; 
  __int128 v87; 
  __int128 v88; 

  shLightingIndex = data->shLightingIndex;
  v11 = 0;
  v12 = 0;
  v74 = 248i64 * shLightingIndex;
  v13 = data;
  gpuLightGridCameraDist = (float (*)[1536])&shLightingGlob.frameData[v74 / 0xF8];
  _Val.gpuLightGridCenterCameraDist = (float (*)[1536])viewInfo;
  _Val.gpuLightGridCameraDist = gpuLightGridCameraDist;
  v15 = &shLightingGlob.frameData[1 - shLightingIndex];
  zoneCount = (int)data->transientDrawContext.zoneCount;
  v71 = zoneCount;
  if ( zoneCount > 0 )
  {
    voxelTreeZoneIndex = (int)viewInfo->input.voxelTreeZoneIndex;
    v81 = v9;
    v18 = 0i64;
    v88 = v2;
    v19 = 0i64;
    v87 = v3;
    gpuLightGrid = data->transientDrawContext.gpuLightGrid;
    v86 = v4;
    v85 = v5;
    v84 = v6;
    v83 = v7;
    v82 = v8;
    v70 = data->transientDrawContext.gpuLightGrid;
    do
    {
      v21 = *gpuLightGrid;
      if ( *gpuLightGrid && v21->probeCount )
      {
        if ( v11 >= 0x600 )
        {
          LODWORD(v69) = 1536;
          LODWORD(v68) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v68, v69) )
            __debugbreak();
          gpuLightGrid = v70;
        }
        if ( ((0x80000000 >> (v11 & 0x1F)) & data->transientVisibility.array[(unsigned __int64)v11 >> 5]) != 0 )
        {
          if ( v18 >= 256 )
          {
            R_WarnOncePerFrame(R_WARN_TOO_MANY_LOADED_GPU_LIGHTGRIDS, 256i64, 20i64, "%s <= %s\n\t%g, %g");
          }
          else
          {
            _First[v18] = v11;
            zoneVoxelTrees = v21->zoneVoxelTrees;
            if ( zoneVoxelTrees )
            {
              rootNodeDimension = (float *)zoneVoxelTrees[voxelTreeZoneIndex].treeHeader->rootNodeDimension;
              v24 = rootNodeDimension[8];
              v25 = rootNodeDimension[12];
              if ( v24 > v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 109, ASSERT_TYPE_ASSERT, "( mins.x ) <= ( maxs.x )", "%s <= %s\n\t%g, %g", "mins.x", "maxs.x", v24, v25) )
                __debugbreak();
              v26 = rootNodeDimension[9];
              v27 = rootNodeDimension[13];
              if ( v26 > v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 110, ASSERT_TYPE_ASSERT, "( mins.y ) <= ( maxs.y )", "%s <= %s\n\t%g, %g", "mins.y", "maxs.y", v26, v27) )
                __debugbreak();
              v28 = rootNodeDimension[10];
              v29 = rootNodeDimension[14];
              if ( v28 > v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 111, ASSERT_TYPE_ASSERT, "( mins.z ) <= ( maxs.z )", "%s <= %s\n\t%g, %g", "mins.z", "maxs.z", v28, v29) )
                __debugbreak();
              v30 = rootNodeDimension[12];
              v31 = (float)(v30 + rootNodeDimension[8]) * 0.5;
              v32 = (float)(rootNodeDimension[13] + rootNodeDimension[9]) * 0.5;
              v33 = (*_Val.gpuLightGridCenterCameraDist)[64];
              v34 = (*_Val.gpuLightGridCenterCameraDist)[65];
              v35 = (*_Val.gpuLightGridCenterCameraDist)[66];
              v36 = (float)(rootNodeDimension[14] + rootNodeDimension[10]) * 0.5;
              v37 = (float)(v30 - rootNodeDimension[8]) * 0.5;
              v76.m128_i32[3] = 0;
              ++v12;
              v39 = v76;
              v39.m128_f32[0] = v33;
              _XMM1 = v39;
              __asm
              {
                vinsertps xmm1, xmm1, xmm8, 10h
                vinsertps xmm1, xmm1, xmm9, 20h ; ' '
              }
              v76 = _XMM1;
              v77.m128_i32[3] = 0;
              ++v18;
              v43 = v77;
              v43.m128_f32[0] = v31;
              _XMM0 = v43;
              __asm
              {
                vinsertps xmm0, xmm0, xmm11, 10h
                vinsertps xmm0, xmm0, xmm10, 20h ; ' '
              }
              _mm128_sub_ps(_XMM1, _XMM0);
              v77 = _XMM0;
              _XMM0 = g_negativeZero.v;
              __asm { vandnps xmm2, xmm0, xmm1 }
              HIDWORD(v75) = 0;
              v49 = v75;
              *(float *)&v49 = v37;
              _XMM3 = v49;
              __asm
              {
                vinsertps xmm3, xmm3, xmm4, 10h
                vinsertps xmm3, xmm3, xmm5, 20h ; ' '
              }
              v75 = (__int128)_XMM3;
              _XMM3 = _mm128_sub_ps(_XMM2, _XMM3);
              __asm { vmaxps  xmm1, xmm3, xmm0 }
              _XMM2 = _mm128_mul_ps(_XMM1, _XMM1);
              __asm
              {
                vhaddps xmm0, xmm2, xmm2
                vhaddps xmm1, xmm0, xmm0
              }
              v79[v19] = fsqrt(*(float *)&_XMM1);
              v80[v19] = fsqrt((float)((float)((float)(v34 - v32) * (float)(v34 - v32)) + (float)((float)(v33 - v31) * (float)(v33 - v31))) + (float)((float)(v35 - v36) * (float)(v35 - v36)));
            }
            else
            {
              ++v12;
              v79[v19] = 0.0;
              ++v18;
              v80[v19] = 0.0;
            }
          }
          gpuLightGrid = v70;
        }
        zoneCount = v71;
      }
      ++gpuLightGrid;
      ++v11;
      v70 = gpuLightGrid;
      ++v19;
    }
    while ( v19 < zoneCount );
    gpuLightGridCameraDist = _Val.gpuLightGridCameraDist;
    if ( v12 > 20 )
      R_WarnOncePerFrame(R_WARN_TOO_MANY_ACTIVE_GPU_LIGHTGRIDS, 20i64, gpuLightGrid, "%s <= %s\n\t%g, %g");
    v13 = data;
  }
  *(_QWORD *)&v75 = v79;
  *((_QWORD *)&v75 + 1) = v80;
  v57._Fn = std::_Pass_fn__lambda_5ecc68168016b79ce6058389727e366a__0_(&_Val)._Fn;
  std::_Sort_unchecked_int___std::_Ref_fn__lambda_5ecc68168016b79ce6058389727e366a_____(_First, &_First[v58], v58, (std::_Ref_fn<<lambda_5ecc68168016b79ce6058389727e366a> >)v57._Fn->gpuLightGridCameraDist);
  if ( v12 > 20 )
    v12 = 20;
  if ( v12 > 0 )
  {
    for ( i = 0i64; i < v12; *(_QWORD *)&(*gpuLightGridCameraDist)[2 * i++] = v60 )
    {
      v60 = v13->transientDrawContext.gpuLightGrid[_First[i]];
      if ( (!v60 || !v60->probeCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sh_lighting.cpp", 685, ASSERT_TYPE_ASSERT, "(gpuLightGrid && ( gpuLightGrid->probeCount > 0 ))", (const char *)&queryFormat, "gpuLightGrid && ( gpuLightGrid->probeCount > 0 )") )
        __debugbreak();
    }
  }
  v61 = v74;
  v62 = 0;
  shLightingGlob.frameData[v74 / 0xF8].numActiveLightGrids = v12;
  numActiveLightGrids = (int)v15->numActiveLightGrids;
  if ( v12 > 0 )
  {
    v64 = (int *)((char *)shLightingGlob.frameData[0].prevFrameLightGridIndex + v61);
    do
    {
      v65 = 0;
      v66 = 0i64;
      v67 = -1;
      if ( numActiveLightGrids > 0 )
      {
        while ( *(const GfxGpuLightGrid **)&(*gpuLightGridCameraDist)[0] != v15->activeLightGrids[v66] )
        {
          ++v65;
          if ( ++v66 >= numActiveLightGrids )
            goto LABEL_46;
        }
        v67 = v65;
      }
LABEL_46:
      *v64 = v67;
      ++v62;
      ++v64;
      gpuLightGridCameraDist = (float (*)[1536])((char *)gpuLightGridCameraDist + 8);
    }
    while ( v62 < *(_DWORD *)((char *)&shLightingGlob.frameData[0].activeLightGrids[20] + v61) );
  }
}

/*
==============
R_GpuLightGrid_ShutdownBuffers
==============
*/
void R_GpuLightGrid_ShutdownBuffers(GfxGpuLightGrid *lg)
{
  unsigned int rwView; 
  GfxWrappedRWBuffer *p_probesBuffer; 
  __int64 zoneCount; 
  __int64 v5; 
  GfxGpuLightGridVoxelTree *v6; 

  if ( lg )
  {
    if ( lg->probeCount )
    {
      rwView = lg->probesBuffer.rwView.rwView;
      p_probesBuffer = &lg->probesBuffer;
      if ( rwView != 3 && rwView && lg->probesBuffer.data && lg->probesBuffer.view.view >= 2 )
        R_ShutdownGfxWrappedBuffer(p_probesBuffer);
      if ( lg->probePositionsBuffer.data && lg->probePositionsBuffer.view.view >= 2 )
        R_ShutdownGfxWrappedBuffer(&lg->probePositionsBuffer);
      if ( lg->tetrahedronBuffer.data && lg->tetrahedronBuffer.view.view >= 2 )
        R_ShutdownGfxWrappedBuffer(&lg->tetrahedronBuffer);
      if ( lg->tetrahedronNeighborsBuffer.data && lg->tetrahedronNeighborsBuffer.view.view >= 2 )
        R_ShutdownGfxWrappedBuffer(&lg->tetrahedronNeighborsBuffer);
      if ( lg->tetrahedronVisibilityBuffer.data && lg->tetrahedronVisibilityBuffer.view.view >= 2 )
        R_ShutdownGfxWrappedBuffer(&lg->tetrahedronVisibilityBuffer);
      if ( lg->voxelStartTetrahedronBuffer.data && lg->voxelStartTetrahedronBuffer.view.view >= 2 )
        R_ShutdownGfxWrappedBuffer(&lg->voxelStartTetrahedronBuffer);
    }
    if ( lg->zoneVoxelTrees )
    {
      zoneCount = (int)lg->zoneCount;
      if ( zoneCount > 0 )
      {
        v5 = 0i64;
        do
        {
          v6 = &lg->zoneVoxelTrees[v5];
          if ( v6->treeHeaderBuffer.data && v6->treeHeaderBuffer.view.view >= 2 )
            R_ShutdownGfxWrappedBuffer(&v6->treeHeaderBuffer);
          if ( v6->topDownViewNodeBuffer.data && v6->topDownViewNodeBuffer.view.view >= 2 )
            R_ShutdownGfxWrappedBuffer(&v6->topDownViewNodeBuffer);
          if ( v6->internalNodeBuffer.data )
          {
            if ( v6->internalNodeBuffer.view.view >= 2 )
              R_ShutdownGfxWrappedBuffer(&v6->internalNodeBuffer);
          }
          ++v5;
          --zoneCount;
        }
        while ( zoneCount );
      }
    }
  }
}

/*
==============
R_InitSHLighting
==============
*/
void R_InitSHLighting(void)
{
  __int64 v0; 
  GfxWrappedBuffer *p_prevFrameLightGridIndices; 
  __int64 v2; 
  int ElementSizeForDataFormat; 
  GfxWrappedBuffer *p_debugDataBuffer; 

  *(_QWORD *)&shLightingGlob.globalFrame = 0i64;
  R_CreateGfxWrappedBuffer(&shLightingGlob.fallbackProbe, GfxWrappedBuffer_Structured, 64, 1u, GFX_DATA_FORMAT_R32_UINT, 0x49u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "lightgrid fallback probe");
  shLightingGlob.fallbackProbeDirty = 1;
  shLightingGlob.fallbackProbeZoneIndex = -1;
  R_LGV_Init();
  v0 = 2i64;
  p_prevFrameLightGridIndices = &shLightingGlob.gfxBuffers[0].prevFrameLightGridIndices;
  v2 = 2i64;
  do
  {
    R_CreateGfxWrappedBuffer(p_prevFrameLightGridIndices - 1, GfxWrappedBuffer_Structured, 112, 0x14u, GFX_DATA_FORMAT_R32_UINT, 4u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "Light grid parameters");
    ElementSizeForDataFormat = Buffers_GetElementSizeForDataFormat(GFX_DATA_FORMAT_R32_UINT);
    R_CreateGfxWrappedBuffer(p_prevFrameLightGridIndices, GfxWrappedBuffer_Data, ElementSizeForDataFormat, 0x14u, GFX_DATA_FORMAT_R32_UINT, 4u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "Light grid indices in the prev frame");
    p_prevFrameLightGridIndices += 3;
    --v2;
  }
  while ( v2 );
  R_GpuLightGrid_CreateDebugGeometry();
  p_debugDataBuffer = &shLightingGlob.gfxBuffers[0].debugDataBuffer;
  do
  {
    R_CreateGfxWrappedBuffer(p_debugDataBuffer, GfxWrappedBuffer_Structured, 48, 1u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "debug");
    p_debugDataBuffer += 3;
    --v0;
  }
  while ( v0 );
}

/*
==============
R_InitWorldSHLighting
==============
*/
void R_InitWorldSHLighting(GfxWorld *world)
{
  shLightingGlob.fallbackProbeDirty = 1;
  R_LGV_InitWorld(world);
}

/*
==============
R_ShutdownWorldSHLighting
==============
*/

void __fastcall R_ShutdownWorldSHLighting(GfxWorld *world)
{
  R_LGV_ShutdownWorld(world);
}

/*
==============
R_ToggleSHLightingFrame
==============
*/
__int64 R_ToggleSHLightingFrame(unsigned int smpFrame)
{
  unsigned int v2; 
  unsigned int v3; 
  unsigned int v4; 

  v2 = shLightingGlob.globalFrame + 1;
  v3 = 0;
  v4 = shLightingGlob.globalFrame + 1;
  if ( shLightingGlob.globalFrame == -2 )
    v4 = 0;
  shLightingGlob.globalFrame = v4;
  shLightingGlob.gfxFrame = 1 - shLightingGlob.gfxFrame;
  if ( v2 != -1 )
    v3 = v2;
  R_LGV_ToggleSmpFrame(v3, smpFrame);
  return shLightingGlob.gfxFrame;
}

