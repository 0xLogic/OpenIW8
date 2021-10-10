/*
==============
R_VOL_GetAccumImages
==============
*/

void __fastcall R_VOL_GetAccumImages(const GfxViewInfo *viewInfo, const GfxImage **scattering, const GfxImage **extinction, const GfxImage **visibility)
{
  ?R_VOL_GetAccumImages@@YAXPEBUGfxViewInfo@@PEAPEBUGfxImage@@11@Z(viewInfo, scattering, extinction, visibility);
}

/*
==============
R_VOL_GetFrustumHeight
==============
*/

unsigned int __fastcall R_VOL_GetFrustumHeight(const GfxViewInfo *viewInfo)
{
  return ?R_VOL_GetFrustumHeight@@YAIPEBUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
R_VOL_CombineAmbientMultiLightGrid
==============
*/

void __fastcall R_VOL_CombineAmbientMultiLightGrid(ComputeCmdBufState *state, const GfxViewInfo *viewInfo, const R_RT_Handle *ambientCurrent, const R_RT_Handle *ambientPrev, const R_RT_Handle *visibilityCurrent, const R_RT_Handle *visibilityPrev, const R_RT_Handle *floatZ, const R_RT_Handle *ambientScene, const R_RT_Handle *sampledLighting, const R_RT_Handle *sampledLightingAlpha)
{
  ?R_VOL_CombineAmbientMultiLightGrid@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@AEBVR_RT_Handle@@2222222@Z(state, viewInfo, ambientCurrent, ambientPrev, visibilityCurrent, visibilityPrev, floatZ, ambientScene, sampledLighting, sampledLightingAlpha);
}

/*
==============
R_VOL_EvaluateScattering
==============
*/

void __fastcall R_VOL_EvaluateScattering(VolumetricDrawStream *drawStream, VolumetricScatteringResources *resources, unsigned int shaderPass)
{
  ?R_VOL_EvaluateScattering@@YAXPEAUVolumetricDrawStream@@PEAUVolumetricScatteringResources@@I@Z(drawStream, resources, shaderPass);
}

/*
==============
R_VOL_AddVolumetrics
==============
*/

void __fastcall R_VOL_AddVolumetrics(const void *const cmd)
{
  ?R_VOL_AddVolumetrics@@YAXQEBX@Z(cmd);
}

/*
==============
R_VOL_ShutdownWorld
==============
*/

void R_VOL_ShutdownWorld(void)
{
  ?R_VOL_ShutdownWorld@@YAXXZ();
}

/*
==============
R_VOL_FreeRts
==============
*/

void R_VOL_FreeRts(void)
{
  ?R_VOL_FreeRts@@YAXXZ();
}

/*
==============
R_VOL_Init
==============
*/

void R_VOL_Init(void)
{
  ?R_VOL_Init@@YAXXZ();
}

/*
==============
R_VOL_GetVoxelSizeY
==============
*/

unsigned int __fastcall R_VOL_GetVoxelSizeY(const GfxViewInfo *viewInfo)
{
  return ?R_VOL_GetVoxelSizeY@@YAIPEBUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
RB_VOL_Cluster
==============
*/

void __fastcall RB_VOL_Cluster(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RB_VOL_Cluster@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(computeState, viewInfo, data);
}

/*
==============
R_VOL_AccumulateScattering
==============
*/

void __fastcall R_VOL_AccumulateScattering(VolumetricDrawStream *drawStream, VolumetricAccumulateResources *resources)
{
  ?R_VOL_AccumulateScattering@@YAXPEAUVolumetricDrawStream@@PEAUVolumetricAccumulateResources@@@Z(drawStream, resources);
}

/*
==============
R_VOL_GetMaxBaseWidth
==============
*/

unsigned int __fastcall R_VOL_GetMaxBaseWidth()
{
  return ?R_VOL_GetMaxBaseWidth@@YAIXZ();
}

/*
==============
R_VOL_FillIndirectScattering
==============
*/

void __fastcall R_VOL_FillIndirectScattering(ComputeCmdBufState *state, const GfxViewInfo *viewInfo, const GfxWrappedBuffer *volClusterBuffer, const GfxWrappedBuffer *featureClusterBuffer, const GfxWrappedBuffer *lightClusterBuffer, const R_RT_BufferHandle *froxelIndirectBuffer, const R_RT_BufferHandle *froxelIDBuffer, const R_RT_ColorHandle *visibilityTexture)
{
  ?R_VOL_FillIndirectScattering@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@PEBUGfxWrappedBuffer@@22AEBVR_RT_BufferHandle@@3AEBVR_RT_ColorHandle@@@Z(state, viewInfo, volClusterBuffer, featureClusterBuffer, lightClusterBuffer, froxelIndirectBuffer, froxelIDBuffer, visibilityTexture);
}

/*
==============
R_VOL_AnyVisible
==============
*/

bool __fastcall R_VOL_AnyVisible(const GfxViewInfo *viewInfo)
{
  return ?R_VOL_AnyVisible@@YA_NPEBUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
R_VOL_SampleAmbientMultiLightGrid
==============
*/

void __fastcall R_VOL_SampleAmbientMultiLightGrid(ComputeCmdBufState *state, const GfxViewInfo *viewInfo, const R_RT_Handle *visibilityCurrent, const R_RT_Handle *floatZ, const R_RT_Handle *sampledLighting, const R_RT_Handle *sampledLightingAlpha, const R_RT_Handle *tetIndexCurr, const R_RT_Handle *tetIndexPrev)
{
  ?R_VOL_SampleAmbientMultiLightGrid@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@AEBVR_RT_Handle@@22222@Z(state, viewInfo, visibilityCurrent, floatZ, sampledLighting, sampledLightingAlpha, tetIndexCurr, tetIndexPrev);
}

/*
==============
R_VOL_SampleLightgridImages
==============
*/

void __fastcall R_VOL_SampleLightgridImages(ComputeCmdBufState *state, const GfxViewInfo *viewInfo, const R_RT_Handle *ambientImageRead, const R_RT_Handle *ambientImageWrite, const R_RT_Handle *ambientSceneLumaImageWrite, const R_RT_Handle *tetIdxImage, const R_RT_Handle *maxFloatZ, const R_RT_Handle *floatZ, const R_RT_Handle *visibilityCurrent, const GfxImage *visibilityPrev)
{
  ?R_VOL_SampleLightgridImages@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@AEBVR_RT_Handle@@222222PEBUGfxImage@@@Z(state, viewInfo, ambientImageRead, ambientImageWrite, ambientSceneLumaImageWrite, tetIdxImage, maxFloatZ, floatZ, visibilityCurrent, visibilityPrev);
}

/*
==============
R_ShutdownVolumetric
==============
*/

void R_ShutdownVolumetric(void)
{
  ?R_ShutdownVolumetric@@YAXXZ();
}

/*
==============
RB_ShowVolumetricDebug
==============
*/

void __fastcall RB_ShowVolumetricDebug(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxBackEndData *data, const GfxImage *volVisibility)
{
  ?RB_ShowVolumetricDebug@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@PEBUGfxImage@@@Z(gfxContext, viewInfo, data, volVisibility);
}

/*
==============
R_VOL_GetVisibilityImage
==============
*/

const GfxImage *__fastcall R_VOL_GetVisibilityImage(const unsigned int index)
{
  return ?R_VOL_GetVisibilityImage@@YAPEBUGfxImage@@I@Z(index);
}

/*
==============
R_VOL_GetMaxBaseHeight
==============
*/

unsigned int __fastcall R_VOL_GetMaxBaseHeight()
{
  return ?R_VOL_GetMaxBaseHeight@@YAIXZ();
}

/*
==============
R_VOL_ToggleFrame
==============
*/

unsigned int __fastcall R_VOL_ToggleFrame()
{
  return ?R_VOL_ToggleFrame@@YAIXZ();
}

/*
==============
R_VOL_GetVoxelSizeX
==============
*/

unsigned int __fastcall R_VOL_GetVoxelSizeX(const GfxViewInfo *viewInfo)
{
  return ?R_VOL_GetVoxelSizeX@@YAIPEBUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
R_VOL_MaxFloatZ
==============
*/

void __fastcall R_VOL_MaxFloatZ(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxImage *srcVolFloatZRt, const GfxImage *srcAmbientFloatZRt, const R_RT_Handle *dstMaxFloatZRt, const R_RT_Handle *dstAmbientMaxFloatZRt, const R_RT_Handle *dstVolVisibilityRt, const R_RT_Handle *dstAmbientVisibilityRt)
{
  ?R_VOL_MaxFloatZ@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@PEBUGfxImage@@2AEBVR_RT_Handle@@333@Z(computeState, viewInfo, srcVolFloatZRt, srcAmbientFloatZRt, dstMaxFloatZRt, dstAmbientMaxFloatZRt, dstVolVisibilityRt, dstAmbientVisibilityRt);
}

/*
==============
R_VOL_GetClusterMaskView
==============
*/

const GfxWrappedRWBuffer *__fastcall R_VOL_GetClusterMaskView()
{
  return ?R_VOL_GetClusterMaskView@@YAPEBUGfxWrappedRWBuffer@@XZ();
}

/*
==============
RB_VOL_EvaluateVolumetricsScattering
==============
*/

void __fastcall RB_VOL_EvaluateVolumetricsScattering(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RB_VOL_EvaluateVolumetricsScattering@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(computeState, viewInfo, data);
}

/*
==============
RB_VOL_EvaluateLightgrid
==============
*/

void __fastcall RB_VOL_EvaluateLightgrid(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RB_VOL_EvaluateLightgrid@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(computeState, viewInfo, data);
}

/*
==============
R_VOL_FrustumGridCluster
==============
*/

void __fastcall R_VOL_FrustumGridCluster(ComputeCmdBufState *state, const GfxViewInfo *viewInfo, const GfxBackEndData *data, const GfxWrappedRWBuffer *volumeClusterBuffer, const GfxWrappedRWBuffer *featureClusterBuffer)
{
  ?R_VOL_FrustumGridCluster@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@PEBUGfxWrappedRWBuffer@@3@Z(state, viewInfo, data, volumeClusterBuffer, featureClusterBuffer);
}

/*
==============
R_VOL_UseLocalMedia
==============
*/

bool __fastcall R_VOL_UseLocalMedia(const GfxBackEndData *data, const GfxViewInfo *viewInfo)
{
  return ?R_VOL_UseLocalMedia@@YA_NPEBUGfxBackEndData@@PEBUGfxViewInfo@@@Z(data, viewInfo);
}

/*
==============
R_VOL_GetActiveLightGridsMask
==============
*/

unsigned int __fastcall R_VOL_GetActiveLightGridsMask(const GfxBackEndData *data)
{
  return ?R_VOL_GetActiveLightGridsMask@@YAIPEBUGfxBackEndData@@@Z(data);
}

/*
==============
R_VOL_InitWorld
==============
*/

void __fastcall R_VOL_InitWorld(bool isFrontendScene)
{
  ?R_VOL_InitWorld@@YAX_N@Z(isFrontendScene);
}

/*
==============
R_VOL_GetBestLightGrid
==============
*/

const GfxGpuLightGrid *__fastcall R_VOL_GetBestLightGrid(const GfxBackEndData *data)
{
  return ?R_VOL_GetBestLightGrid@@YAPEBUGfxGpuLightGrid@@PEBUGfxBackEndData@@@Z(data);
}

/*
==============
R_InitVolumetric
==============
*/

void __fastcall R_InitVolumetric(const bool reconfigure)
{
  ?R_InitVolumetric@@YAX_N@Z(reconfigure);
}

/*
==============
R_VOL_GetFrustumWidth
==============
*/

unsigned int __fastcall R_VOL_GetFrustumWidth(const GfxViewInfo *viewInfo)
{
  return ?R_VOL_GetFrustumWidth@@YAIPEBUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
R_VOL_GetFrustumDepth
==============
*/

unsigned int __fastcall R_VOL_GetFrustumDepth()
{
  return ?R_VOL_GetFrustumDepth@@YAIXZ();
}

/*
==============
R_VOL_GetFrustumWords
==============
*/

unsigned int __fastcall R_VOL_GetFrustumWords(const unsigned int frame)
{
  return ?R_VOL_GetFrustumWords@@YAII@Z(frame);
}

/*
==============
R_VOL_LazyAllocRts
==============
*/

void R_VOL_LazyAllocRts(void)
{
  ?R_VOL_LazyAllocRts@@YAXXZ();
}

/*
==============
RB_ShowVolumetricDebug
==============
*/
void RB_ShowVolumetricDebug(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxBackEndData *data, const GfxImage *volVisibility)
{
  GfxCmdBufSourceState *source; 
  float renderTargetWidth; 
  float renderTargetHeight; 
  materialCommands_t *Tess; 
  materialCommands_t *v9; 
  GfxCmdBufContext v10; 

  if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 1927, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  source = gfxContext->source;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 1928, ASSERT_TYPE_ASSERT, "(gfxContext.source)", (const char *)&queryFormat, "gfxContext.source") )
    __debugbreak();
  renderTargetWidth = (float)source->renderTargetWidth;
  renderTargetHeight = (float)source->renderTargetHeight;
  v10 = *gfxContext;
  Tess = R_GetTess(&v10);
  v9 = Tess;
  if ( Tess->vertexCount )
  {
    v10 = *gfxContext;
    RB_EndTessSurfaceInternal(&v10, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h(162)");
  }
  else
  {
    if ( Tess->indexCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 166, ASSERT_TYPE_ASSERT, "(tess.indexCount == 0)", (const char *)&queryFormat, "tess.indexCount == 0") )
      __debugbreak();
    v9->viewStatsTarget = GFX_VIEW_STATS_INVALID;
    v9->primStatsTarget = GFX_PRIM_STATS_INVALID;
  }
  R_Set2D(source);
  v10 = *gfxContext;
  RB_DrawStretchPic(&v10, rgp.volumetricDebugMaterial, 0.0, 0.0, renderTargetWidth, renderTargetHeight, 0.0, 0.0, 1.0, 1.0, 0xFFFFFFFF, GFX_PRIM_STATS_CODE);
  v10 = *gfxContext;
  RB_EndTessSurfaceInternal(&v10, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp(1940)");
}

/*
==============
RB_VOL_AccumulateScatteringResources
==============
*/
void RB_VOL_AccumulateScatteringResources(VolumetricDrawStream *drawStream)
{
  __int16 v1; 
  __int64 v3; 
  R_RT_Image *p_m_image; 
  R_RT_ColorHandle *v5; 
  R_RT_Image *scatterTemporalWriteImage; 
  R_RT_Image *scatterIntegralImage; 
  __int64 v8; 
  R_RT_Image *blackImage3D; 
  R_RT_Image *extinctionIntegralImage; 
  __int64 v11; 
  R_RT_Image *blackUintImage; 
  R_RT_ColorHandle *v13; 
  const R_RT_Surface *Surface; 
  ComputeCmdBufState *state; 
  const GfxImage *p_m_base; 
  const GfxTexture *Resident; 
  const GfxTexture *v18; 
  const GfxTexture *v19; 
  const GfxTexture *v20; 
  const GfxTexture *v21; 
  const GfxTexture *v22; 
  const GfxTexture *v23; 
  const GfxTexture *v24; 
  R_RT_Handle currentScatterImage; 
  VolumetricAccumulateResources resources; 

  if ( s_volumetricGlob.prevFrameScatteringValid )
  {
    v3 = 0i64;
    if ( !drawStream->toggle )
      v3 = 1i64;
    p_m_image = &R_RT_Handle::GetSurface(&s_volumetricGlob.scatterImage[v3])->m_image;
  }
  else
  {
    p_m_image = (R_RT_Image *)rgp.blackImage3D;
  }
  v5 = &s_volumetricGlob.scatterImage[drawStream->toggle];
  resources.scatterTemporalReadImage = &p_m_image->m_base;
  scatterTemporalWriteImage = &R_RT_Handle::GetSurface(v5)->m_image;
  resources.scatterTemporalWriteImage = &scatterTemporalWriteImage->m_base;
  scatterIntegralImage = &R_RT_Handle::GetSurface(&s_volumetricGlob.scatterImage[2])->m_image;
  resources.scatterIntegralImage = &scatterIntegralImage->m_base;
  if ( s_volumetricGlob.prevFrameScatteringValid )
  {
    v8 = 0i64;
    if ( !drawStream->toggle )
      v8 = 1i64;
    blackImage3D = &R_RT_Handle::GetSurface(&s_volumetricGlob.extinctionImage[v8])->m_image;
  }
  else
  {
    blackImage3D = (R_RT_Image *)rgp.blackImage3D;
  }
  resources.extinctionTemporalReadImage = &blackImage3D->m_base;
  extinctionIntegralImage = &R_RT_Handle::GetSurface(&s_volumetricGlob.extinctionImage[2])->m_image;
  resources.extinctionIntegralImage = &extinctionIntegralImage->m_base;
  if ( s_volumetricGlob.prevFrameScatteringValid )
  {
    v11 = 0i64;
    if ( !drawStream->toggle )
      v11 = 1i64;
    blackUintImage = &R_RT_Handle::GetSurface(&s_volumetricGlob.visibilityImage[v11])->m_image;
  }
  else
  {
    blackUintImage = (R_RT_Image *)rgp.blackUintImage;
  }
  v13 = &s_volumetricGlob.visibilityImage[drawStream->toggle];
  resources.visibilityPrevFrameImage = &blackUintImage->m_base;
  resources.visibilityImage = &R_RT_Handle::GetSurface(v13)->m_image.m_base;
  Surface = R_RT_Handle::GetSurface(&s_volumetricGlob.currentScatterImage);
  state = drawStream->state;
  p_m_base = &Surface->m_image.m_base;
  resources.scatterCurrentTexture = &Surface->m_image.m_base;
  R_ProfBeginNamedEvent(state, "Accumulate");
  R_GPU_BeginTimer(GPU_TIMER_VOLUMETRIC_ACCUMULATE);
  Resident = R_Texture_GetResident(scatterIntegralImage->m_base.textureId);
  R_HW_AddResourceTransition(drawStream->state, Resident, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v18 = R_Texture_GetResident(extinctionIntegralImage->m_base.textureId);
  R_HW_AddResourceTransition(drawStream->state, v18, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v19 = R_Texture_GetResident(scatterTemporalWriteImage->m_base.textureId);
  R_HW_AddResourceTransition(drawStream->state, v19, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v20 = R_Texture_GetResident(p_m_base->textureId);
  R_HW_AddResourceTransition(drawStream->state, v20, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_FlushResourceTransitions(drawStream->state);
  if ( !R_Screenshot_InterleavedMode() )
  {
    R_VOL_AccumulateScattering(drawStream, &resources);
    p_m_base = resources.scatterCurrentTexture;
    extinctionIntegralImage = (R_RT_Image *)resources.extinctionIntegralImage;
    scatterIntegralImage = (R_RT_Image *)resources.scatterIntegralImage;
    scatterTemporalWriteImage = (R_RT_Image *)resources.scatterTemporalWriteImage;
  }
  v21 = R_Texture_GetResident(scatterTemporalWriteImage->m_base.textureId);
  R_HW_AddResourceTransition(drawStream->state, v21, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v22 = R_Texture_GetResident(scatterIntegralImage->m_base.textureId);
  R_HW_AddResourceTransition(drawStream->state, v22, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v23 = R_Texture_GetResident(extinctionIntegralImage->m_base.textureId);
  R_HW_AddResourceTransition(drawStream->state, v23, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v24 = R_Texture_GetResident(p_m_base->textureId);
  R_HW_AddResourceTransition(drawStream->state, v24, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_FlushResourceTransitions(drawStream->state);
  R_GPU_EndTimer();
  R_ProfEndNamedEvent(drawStream->state);
  currentScatterImage = (R_RT_Handle)s_volumetricGlob.currentScatterImage;
  if ( v1 )
  {
    R_RT_Handle::GetSurface(&currentScatterImage);
    R_RT_DestroyInternal(&currentScatterImage);
  }
  else if ( s_volumetricGlob.currentScatterImage.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", *(_QWORD *)&currentScatterImage.m_surfaceID, *(_QWORD *)&currentScatterImage.m_tracking.m_allocCounter, currentScatterImage.m_tracking.m_name, currentScatterImage.m_tracking.m_location, resources.scatterTemporalReadImage) )
  {
    __debugbreak();
  }
  currentScatterImage = (R_RT_Handle)s_volumetricGlob.currentExtinctionImage;
  if ( v1 )
  {
    R_RT_Handle::GetSurface(&currentScatterImage);
    R_RT_DestroyInternal(&currentScatterImage);
  }
  else if ( s_volumetricGlob.currentExtinctionImage.m_tracking.m_allocCounter )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", *(_QWORD *)&currentScatterImage.m_surfaceID, *(_QWORD *)&currentScatterImage.m_tracking.m_allocCounter, currentScatterImage.m_tracking.m_name, currentScatterImage.m_tracking.m_location) )
      __debugbreak();
  }
}

/*
==============
RB_VOL_Cluster
==============
*/
void RB_VOL_Cluster(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  int v6; 
  bool v7; 
  const R_RT_Surface *Surface; 
  const GfxWrappedRWBuffer *v9; 

  if ( R_UseBakedLighting() && viewInfo->volumetrics.enabled && (viewInfo->volumetrics.airDensity > 0.0 || R_VOL_UseLocalMedia(viewInfo->input.data, viewInfo)) )
  {
    if ( !computeState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 1815, ASSERT_TYPE_ASSERT, "(computeState)", (const char *)&queryFormat, "computeState") )
      __debugbreak();
    if ( !s_volumetricGlob.ambientLightingDensityClearKickedOff && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 1816, ASSERT_TYPE_ASSERT, "(s_volumetricGlob.ambientLightingDensityClearKickedOff)", (const char *)&queryFormat, "s_volumetricGlob.ambientLightingDensityClearKickedOff") )
      __debugbreak();
    v6 = 1;
    s_volumetricGlob.densityInjectionsKickedOff = 1;
    v7 = r_fogHeightMapScale->current.vector.v[2] > 0.0 && s_volumetricHeightfield;
    if ( !s_volumetricGlob.volumeCount[data->volumetricsIndex & 1] && viewInfo->brCircle.volumetricDensity <= 0.0 && !v7 )
      v6 = 0;
    R_ProfBeginNamedEvent(computeState, "Volumetrics Clustering");
    R_GPU_BeginTimer(GPU_TIMER_VOLUMETRIC_DENSITY);
    if ( v6 )
    {
      R_ProfBeginNamedEvent(computeState, "Frustum Grid Cluster Volumetrics");
      Surface = R_RT_Handle::GetSurface(&s_volumetricGlob.maskClusterBuffer);
      if ( (Surface->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
        __debugbreak();
      v9 = (const GfxWrappedRWBuffer *)&Surface->1080;
      R_HW_AddResourceTransition(computeState, v9, 0xFFFFFFFF, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_HW_FlushResourceTransitions(computeState);
      R_VOL_FrustumGridCluster(computeState, viewInfo, data, v9, v9);
      R_HW_AddResourceTransition(computeState, v9, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_HW_FlushResourceTransitions(computeState);
      R_ProfEndNamedEvent(computeState);
    }
    if ( computeState->device )
      R_ComputeWaitForCompute(computeState, PIPE_FLUSH_PARTIAL);
    R_GPU_EndTimer();
    R_ProfEndNamedEvent(computeState);
  }
}

/*
==============
RB_VOL_CombineMultiLightgrid
==============
*/
void RB_VOL_CombineMultiLightgrid(VolumetricDrawStream *drawStream)
{
  ComputeCmdBufState *state; 
  const GfxViewInfo *viewInfo; 
  __int64 toggle; 
  __int64 v6; 
  __int64 v7; 
  R_RT_ColorHandle *v8; 
  R_RT_ColorHandle *v9; 
  __int64 v10; 
  const R_RT_Surface *Surface; 
  const GfxTexture *Resident; 
  const R_RT_Surface *v14; 
  const GfxTexture *v15; 
  const R_RT_Surface *v16; 
  const GfxTexture *v17; 
  const R_RT_Surface *v18; 
  const GfxTexture *v19; 
  R_RT_Handle visibilityPrev; 
  R_RT_Handle ambientPrev; 

  state = drawStream->state;
  viewInfo = drawStream->viewInfo;
  R_LockIfGfxImmediateContext(drawStream->state->device);
  R_ProfBeginNamedEvent(state, "Combine Multi Light Grid");
  toggle = drawStream->toggle;
  if ( s_volumetricGlob.prevFrameAmbientValid )
  {
    v6 = 0i64;
    if ( !(_DWORD)toggle )
      v6 = 1i64;
    visibilityPrev = (R_RT_Handle)s_volumetricGlob.ambientImage[v6];
  }
  else
  {
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&visibilityPrev.m_tracking.m_name = _XMM0;
    visibilityPrev.m_surfaceID = 0;
    visibilityPrev.m_tracking.m_allocCounter = 0;
  }
  v7 = toggle;
  ambientPrev = visibilityPrev;
  v8 = &s_volumetricGlob.ambientImage[toggle];
  v9 = &s_volumetricGlob.ambientVisibilityImage[toggle];
  if ( s_volumetricGlob.prevFrameScatteringValid )
  {
    v10 = 0i64;
    if ( !(_DWORD)toggle )
      v10 = 1i64;
    visibilityPrev = (R_RT_Handle)s_volumetricGlob.ambientVisibilityImage[v10];
  }
  else
  {
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&visibilityPrev.m_tracking.m_name = _XMM0;
    visibilityPrev.m_surfaceID = 0;
    visibilityPrev.m_tracking.m_allocCounter = 0;
  }
  Surface = R_RT_Handle::GetSurface(&s_volumetricGlob.ambientSceneLumaImage);
  Resident = R_Texture_GetResident(Surface->m_image.m_base.textureId);
  R_HW_AddResourceTransition(state, Resident, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v14 = R_RT_Handle::GetSurface(v8);
  v15 = R_Texture_GetResident(v14->m_image.m_base.textureId);
  R_HW_AddResourceTransition(state, v15, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_FlushResourceTransitions(state);
  R_VOL_CombineAmbientMultiLightGrid(state, viewInfo, v8, &ambientPrev, v9, &visibilityPrev, &s_volumetricGlob.maxFloatZImage, &s_volumetricGlob.ambientSceneLumaImage, &s_volumetricGlob.ambientLightingData[v7], &s_volumetricGlob.ambientLightingAlpha[v7]);
  v16 = R_RT_Handle::GetSurface(&s_volumetricGlob.ambientSceneLumaImage);
  v17 = R_Texture_GetResident(v16->m_image.m_base.textureId);
  R_HW_AddResourceTransition(state, v17, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v18 = R_RT_Handle::GetSurface(v8);
  v19 = R_Texture_GetResident(v18->m_image.m_base.textureId);
  R_HW_AddResourceTransition(state, v19, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_FlushResourceTransitions(state);
  R_ProfEndNamedEvent(state);
  R_UnlockIfGfxImmediateContext(state->device);
}

/*
==============
RB_VOL_EvaluateLightgrid
==============
*/
void RB_VOL_EvaluateLightgrid(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  unsigned int volumetricsIndex; 
  bool v7; 
  bool v8; 
  int v9; 
  GfxDevice *device; 
  VolumetricDrawStream drawStream; 

  if ( R_UseBakedLighting() && viewInfo->volumetrics.enabled && (viewInfo->volumetrics.airDensity > 0.0 || R_VOL_UseLocalMedia(viewInfo->input.data, viewInfo)) )
  {
    if ( !computeState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 1759, ASSERT_TYPE_ASSERT, "(computeState)", (const char *)&queryFormat, "computeState") )
      __debugbreak();
    if ( s_volumetricGlob.ambientLightingDensityClearKickedOff && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 1760, ASSERT_TYPE_ASSERT, "(!s_volumetricGlob.ambientLightingDensityClearKickedOff)", (const char *)&queryFormat, "!s_volumetricGlob.ambientLightingDensityClearKickedOff") )
      __debugbreak();
    s_volumetricGlob.ambientLightingDensityClearKickedOff = 1;
    volumetricsIndex = data->volumetricsIndex;
    drawStream.viewInfo = viewInfo;
    v7 = viewInfo->brCircle.volumetricDensity > 0.0;
    drawStream.toggle = volumetricsIndex & 1;
    drawStream.data = data;
    v8 = r_fogHeightMapScale->current.vector.v[2] > 0.0 && s_volumetricHeightfield;
    v9 = s_volumetricGlob.volumeCount[volumetricsIndex & 1] || v7 || v8;
    device = computeState->device;
    drawStream.useLocalMedia = v9;
    drawStream.useLocalMediaPrev = s_volumetricGlob.prevFrameUsedLocalMedia;
    drawStream.state = computeState;
    R_LockIfGfxImmediateContext(device);
    R_ProfBeginNamedEvent(computeState, "Volumetrics Lightgrid");
    R_GPU_BeginTimer(GPU_TIMER_VOLUMETRIC_AMBIENT);
    if ( RB_GpuLightGrid_DataAvailable(viewInfo) && viewInfo->volumetrics.ambientBrightness > 0.0 )
    {
      if ( R_LGV_UseMultiLightGridSampling() )
      {
        RB_VOL_SampleMultiLightgrid(&drawStream);
        RB_VOL_CombineMultiLightgrid(&drawStream);
      }
      else
      {
        RB_VOL_SampleLightgrid(&drawStream);
      }
      s_volumetricGlob.prevFrameAmbientValid = 1;
    }
    else
    {
      s_volumetricGlob.prevFrameAmbientValid = 0;
    }
    if ( computeState->device )
      R_ComputeWaitForCompute(computeState, PIPE_FLUSH_PARTIAL);
    R_GPU_EndTimer();
    R_ProfEndNamedEvent(computeState);
    R_UnlockIfGfxImmediateContext(computeState->device);
  }
  else
  {
    s_volumetricGlob.prevFrameAmbientValid = 0;
  }
}

/*
==============
RB_VOL_EvaluateScatteringResources
==============
*/
void RB_VOL_EvaluateScatteringResources(VolumetricDrawStream *drawStream)
{
  const dvar_t *v3; 
  R_RT_Flags v4; 
  const dvar_t *v5; 
  R_RT_Flags rtFlags; 
  __m256i v7; 
  const dvar_t *v9; 
  const dvar_t *v10; 
  __m256i v11; 
  bool v13; 
  const GfxViewInfo *viewInfo; 
  __int64 v15; 
  R_RT_Image *p_m_image; 
  const GfxViewInfo *v17; 
  R_RT_Image *zeroImage; 
  const R_RT_Surface *Surface; 
  const GfxViewInfo *v20; 
  R_RT_Image *blackImage3D; 
  const R_RT_Surface *v22; 
  const GfxImage *SpotShadowArrayImageDraw3D; 
  ComputeCmdBufState *state; 
  R_RT_Handle m_translucentShadowRt; 
  __m256i v26; 
  VolumetricScatteringResources resources; 
  R_RT_Handle result; 

  if ( !drawStream->data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 1682, ASSERT_TYPE_ASSERT, "(drawStream->data)", (const char *)&queryFormat, "drawStream->data") )
    __debugbreak();
  if ( !drawStream->viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 1683, ASSERT_TYPE_ASSERT, "(drawStream->viewInfo)", (const char *)&queryFormat, "drawStream->viewInfo") )
    __debugbreak();
  v3 = r_deviceDebug;
  if ( !r_deviceDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  v4 = R_RT_Flag_RWView|R_RT_Flag_RTView|R_RT_Flag_PreferESRAM;
  if ( v3->current.enabled )
    goto LABEL_15;
  v5 = DCONST_DVARBOOL_r_esramPostFX;
  if ( !DCONST_DVARBOOL_r_esramPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramPostFX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  rtFlags = R_RT_Flag_RWView|R_RT_Flag_RTView|R_RT_Flag_PreferESRAM;
  if ( !v5->current.enabled )
LABEL_15:
    rtFlags = R_RT_Flag_RWView|R_RT_Flag_RTView;
  v7 = *(__m256i *)R_RT_CreateInternal(&result, s_volumetricGlob.voxelImageWidth, s_volumetricGlob.voxelImageHeight, s_volumetricGlob.voxelImageWidth, s_volumetricGlob.voxelImageHeight, s_volumetricGlob.voxelImageDepth, 1u, 1u, g_R_RT_renderTargetFmts[44], rtFlags, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, "Volumetric Current Scatter texture", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp(1685)");
  v26 = v7;
  m_translucentShadowRt = (R_RT_Handle)v7;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&m_translucentShadowRt);
    if ( (R_RT_Handle::GetSurface(&m_translucentShadowRt)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v7 = (__m256i)m_translucentShadowRt;
      __debugbreak();
    }
    else
    {
      v7 = (__m256i)m_translucentShadowRt;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v7 = v26;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
  }
  v9 = r_deviceDebug;
  s_volumetricGlob.currentScatterImage = (R_RT_ColorHandle)v7;
  if ( !r_deviceDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.enabled )
    goto LABEL_32;
  v10 = DCONST_DVARBOOL_r_esramPostFX;
  if ( !DCONST_DVARBOOL_r_esramPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramPostFX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( !v10->current.enabled )
LABEL_32:
    v4 = R_RT_Flag_RWView|R_RT_Flag_RTView;
  v11 = *(__m256i *)R_RT_CreateInternal(&result, s_volumetricGlob.voxelImageWidth, s_volumetricGlob.voxelImageHeight, s_volumetricGlob.voxelImageWidth, s_volumetricGlob.voxelImageHeight, s_volumetricGlob.voxelImageDepth, 1u, 1u, g_R_RT_renderTargetFmts[45], v4, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, "Volumetric Current Extinction texture", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp(1686)");
  v26 = v11;
  m_translucentShadowRt = (R_RT_Handle)v11;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&m_translucentShadowRt);
    if ( (R_RT_Handle::GetSurface(&m_translucentShadowRt)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v11 = (__m256i)m_translucentShadowRt;
      __debugbreak();
    }
    else
    {
      v11 = (__m256i)m_translucentShadowRt;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v11 = v26;
      if ( v13 )
        __debugbreak();
    }
  }
  s_volumetricGlob.currentExtinctionImage = (R_RT_ColorHandle)v11;
  viewInfo = drawStream->viewInfo;
  if ( (*((_BYTE *)&viewInfo->viewportFeatures + 44) & 4) != 0 )
  {
    v15 = 808i64;
    if ( drawStream->data->sunShadow.opaqueCascadeCount > 1u )
      v15 = 810i64;
    m_translucentShadowRt = *(R_RT_Handle *)viewInfo->viewParmsSet.frames[0].viewParms.viewMatrix.m.m[v15].v;
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface(&m_translucentShadowRt);
      p_m_image = &R_RT_Handle::GetSurface(&m_translucentShadowRt)->m_image;
      goto LABEL_49;
    }
    if ( m_translucentShadowRt.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  p_m_image = (R_RT_Image *)rgp.blackShadowImage;
LABEL_49:
  resources.sunShadowImage = &p_m_image->m_base;
  v17 = drawStream->viewInfo;
  if ( (*((_BYTE *)&v17->viewportFeatures + 44) & 4) != 0 && rg.useTransSunShadow )
  {
    m_translucentShadowRt = (R_RT_Handle)v17->sceneRtInput.m_translucentShadowRt;
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface(&m_translucentShadowRt);
      zeroImage = &R_RT_Handle::GetSurface(&m_translucentShadowRt)->m_image;
      goto LABEL_56;
    }
    if ( m_translucentShadowRt.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  zeroImage = (R_RT_Image *)rgp.zeroImage;
LABEL_56:
  resources.translucentSunShadowImage = &zeroImage->m_base;
  resources.translucentSunShadowMaskImage = rgp.blackImage;
  resources.scatterTemporalWriteImage = &R_RT_Handle::GetSurface(&s_volumetricGlob.currentScatterImage)->m_image.m_base;
  Surface = R_RT_Handle::GetSurface(&s_volumetricGlob.currentExtinctionImage);
  v20 = drawStream->viewInfo;
  resources.extinctionTemporalWriteImage = &Surface->m_image.m_base;
  if ( RB_GpuLightGrid_DataAvailable(v20) && v20->volumetrics.ambientBrightness > 0.0 )
    blackImage3D = &R_RT_Handle::GetSurface(&s_volumetricGlob.ambientImage[drawStream->toggle])->m_image;
  else
    blackImage3D = (R_RT_Image *)rgp.blackImage3D;
  resources.ambientImage = &blackImage3D->m_base;
  v22 = R_RT_Handle::GetSurface(&s_volumetricGlob.maskClusterBuffer);
  if ( (v22->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  resources.volumesClusterBuffer = (const GfxWrappedBuffer *)&v22->1080;
  resources.lightsClusterBuffer = R_GetFrustumLightsClusterBuffer();
  resources.maxFloatzImage = &R_RT_Handle::GetSurface(&s_volumetricGlob.maxFloatZImage)->m_image.m_base;
  SpotShadowArrayImageDraw3D = R_GetSpotShadowArrayImageDraw3D();
  state = drawStream->state;
  resources.spotShadowCacheStale = SpotShadowArrayImageDraw3D;
  R_ProfBeginNamedEvent(state, "Scattering");
  R_GPU_BeginTimer(GPU_TIMER_VOLUMETRIC_LIGHTING);
  R_VOL_EvaluateScattering(drawStream, &resources, 0);
  R_GPU_EndTimer();
  R_ProfEndNamedEvent(drawStream->state);
}

/*
==============
RB_VOL_EvaluateVolumetricsScattering
==============
*/
void RB_VOL_EvaluateVolumetricsScattering(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  int v6; 
  unsigned int volumetricsIndex; 
  bool v8; 
  bool v9; 
  unsigned int CUMask; 
  ComputeCmdBufState *state; 
  VolumetricDrawStream drawStream; 

  if ( R_UseBakedLighting() && viewInfo->volumetrics.enabled && (viewInfo->volumetrics.airDensity > 0.0 || R_VOL_UseLocalMedia(viewInfo->input.data, viewInfo)) )
  {
    if ( !computeState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 1872, ASSERT_TYPE_ASSERT, "(computeState)", (const char *)&queryFormat, "computeState") )
      __debugbreak();
    if ( !s_volumetricGlob.ambientLightingDensityClearKickedOff && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 1875, ASSERT_TYPE_ASSERT, "(s_volumetricGlob.ambientLightingDensityClearKickedOff)", (const char *)&queryFormat, "s_volumetricGlob.ambientLightingDensityClearKickedOff") )
      __debugbreak();
    if ( !s_volumetricGlob.densityInjectionsKickedOff && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 1876, ASSERT_TYPE_ASSERT, "(s_volumetricGlob.densityInjectionsKickedOff)", (const char *)&queryFormat, "s_volumetricGlob.densityInjectionsKickedOff") )
      __debugbreak();
    if ( !s_volumetricGlob.ambientBlurKickedOff && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 1877, ASSERT_TYPE_ASSERT, "(s_volumetricGlob.ambientBlurKickedOff)", (const char *)&queryFormat, "s_volumetricGlob.ambientBlurKickedOff") )
      __debugbreak();
    v6 = 0;
    *(_QWORD *)&s_volumetricGlob.ambientLightingDensityClearKickedOff = 0i64;
    s_volumetricGlob.ambientBlurKickedOff = 0;
    volumetricsIndex = data->volumetricsIndex;
    drawStream.viewInfo = viewInfo;
    v8 = viewInfo->brCircle.volumetricDensity > 0.0;
    drawStream.toggle = volumetricsIndex & 1;
    drawStream.data = data;
    v9 = r_fogHeightMapScale->current.vector.v[2] > 0.0 && s_volumetricHeightfield;
    if ( s_volumetricGlob.volumeCount[volumetricsIndex & 1] || v8 || v9 )
      v6 = 1;
    drawStream.useLocalMedia = v6;
    drawStream.useLocalMediaPrev = s_volumetricGlob.prevFrameUsedLocalMedia;
    drawStream.state = computeState;
    R_ProfBeginNamedEvent(computeState, "Volumetrics Evaluate Scattering");
    if ( !computeState->device && r_volumetricsUseCUMask->current.enabled )
    {
      CUMask = R_GetCUMask(GFX_CU_MASK_MODE_ASYNC_VOLUMETRICS);
      R_SetComputeCUMask(computeState, CUMask);
    }
    RB_VOL_MaxFloatZ(&drawStream, &viewInfo->sceneRtInput.m_floatZFullRt);
    RB_VOL_EvaluateScatteringResources(&drawStream);
    RB_VOL_AccumulateScatteringResources(&drawStream);
    state = drawStream.state;
    s_volumetricGlob.prevFrameScatteringValid = 1;
    if ( !drawStream.state->device && r_volumetricsUseCUMask->current.enabled )
      R_ResetComputeCUMask(drawStream.state);
    R_ProfEndNamedEvent(state);
    s_volumetricGlob.prevFrameUsedLocalMedia = drawStream.useLocalMedia;
  }
  else
  {
    s_volumetricGlob.prevFrameScatteringValid = 0;
  }
}

/*
==============
RB_VOL_MaxFloatZ
==============
*/
void RB_VOL_MaxFloatZ(VolumetricDrawStream *drawStream, const R_RT_ColorHandle *floatZ)
{
  const dvar_t *v3; 
  __int64 toggle; 
  R_RT_ColorHandle *v7; 
  R_RT_ColorHandle *v8; 
  const dvar_t *v9; 
  R_RT_Flags rtFlags; 
  __m256i v11; 
  const R_RT_Surface *Surface; 
  const GfxTexture *Resident; 
  const R_RT_Surface *v15; 
  const GfxTexture *v16; 
  const R_RT_Surface *v17; 
  const GfxTexture *v18; 
  const R_RT_Surface *v19; 
  const GfxTexture *v20; 
  const GfxViewInfo *viewInfo; 
  R_RT_Handle v22; 
  bool v24; 
  const R_RT_Surface *v25; 
  const GfxViewInfo *v26; 
  R_RT_Handle v27; 
  bool v29; 
  const R_RT_Surface *v30; 
  const R_RT_Surface *v31; 
  const GfxTexture *v32; 
  const R_RT_Surface *v33; 
  const GfxTexture *v34; 
  const R_RT_Surface *v35; 
  const GfxTexture *v36; 
  const R_RT_Surface *v37; 
  const GfxTexture *v38; 
  R_RT_Handle v39; 
  R_RT_Handle v40; 
  R_RT_Handle result; 
  R_RT_Handle v42; 

  v3 = r_deviceDebug;
  toggle = drawStream->toggle;
  v7 = &s_volumetricGlob.visibilityImage[toggle];
  v8 = &s_volumetricGlob.ambientVisibilityImage[toggle];
  if ( !r_deviceDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled )
    goto LABEL_9;
  v9 = DCONST_DVARBOOL_r_esramPostFX;
  if ( !DCONST_DVARBOOL_r_esramPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramPostFX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  rtFlags = R_RT_Flag_RWView|R_RT_Flag_RTView|R_RT_Flag_PreferESRAM;
  if ( !v9->current.enabled )
LABEL_9:
    rtFlags = R_RT_Flag_RWView|R_RT_Flag_RTView;
  v11 = *(__m256i *)R_RT_CreateInternal(&result, s_volumetricGlob.clusterImageWidth, s_volumetricGlob.clusterImageHeight, s_volumetricGlob.clusterImageWidth, s_volumetricGlob.clusterImageHeight, 1u, 1u, 1u, g_R_RT_renderTargetFmts[47], rtFlags, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Volumetric FloatZ Difference", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp(1653)");
  v40 = (R_RT_Handle)v11;
  v39 = (R_RT_Handle)v11;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v39);
    if ( (R_RT_Handle::GetSurface(&v39)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v11 = (__m256i)v39;
      __debugbreak();
    }
    else
    {
      v11 = (__m256i)v39;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v11 = (__m256i)v40;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
  }
  s_volumetricGlob.maxAmbientFloatZImage = (R_RT_ColorHandle)v11;
  R_ProfBeginNamedEvent(drawStream->state, "Max Float Z");
  R_GPU_BeginTimer(GPU_TIMER_VOLUMETRIC_MAX_FLOATZ);
  Surface = R_RT_Handle::GetSurface(&s_volumetricGlob.maxFloatZImage);
  Resident = R_Texture_GetResident(Surface->m_image.m_base.textureId);
  R_HW_AddResourceTransition(drawStream->state, Resident, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v15 = R_RT_Handle::GetSurface(&s_volumetricGlob.maxAmbientFloatZImage);
  v16 = R_Texture_GetResident(v15->m_image.m_base.textureId);
  R_HW_AddResourceTransition(drawStream->state, v16, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v17 = R_RT_Handle::GetSurface(v7);
  v18 = R_Texture_GetResident(v17->m_image.m_base.textureId);
  R_HW_AddResourceTransition(drawStream->state, v18, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v19 = R_RT_Handle::GetSurface(v8);
  v20 = R_Texture_GetResident(v19->m_image.m_base.textureId);
  R_HW_AddResourceTransition(drawStream->state, v20, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_FlushResourceTransitions(drawStream->state);
  viewInfo = drawStream->viewInfo;
  v40 = floatZ->R_RT_Handle;
  v22 = *R_RT_GetViewInternal(&result, &v40, 0, viewInfo->reProjFloatZMipMap);
  v40 = v22;
  v39 = v22;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v39);
    if ( (R_RT_Handle::GetSurface(&v39)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v22 = v39;
      __debugbreak();
    }
    else
    {
      v22 = v39;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v24 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v22 = v40;
      if ( v24 )
        __debugbreak();
    }
  }
  v40 = v22;
  v25 = R_RT_Handle::GetSurface(&v40);
  v26 = drawStream->viewInfo;
  v40 = floatZ->R_RT_Handle;
  v27 = *R_RT_GetViewInternal(&v42, &v40, 0, v26->ambientVisibilityMipMap);
  v40 = v27;
  v39 = v27;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v39);
    if ( (R_RT_Handle::GetSurface(&v39)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v27 = v39;
      __debugbreak();
    }
    else
    {
      v27 = v39;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v29 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v27 = v40;
      if ( v29 )
        __debugbreak();
    }
  }
  v40 = v27;
  v30 = R_RT_Handle::GetSurface(&v40);
  R_VOL_MaxFloatZ(drawStream->state, drawStream->viewInfo, &v25->m_image.m_base, &v30->m_image.m_base, &s_volumetricGlob.maxFloatZImage, &s_volumetricGlob.maxAmbientFloatZImage, v7, v8);
  v31 = R_RT_Handle::GetSurface(&s_volumetricGlob.maxFloatZImage);
  v32 = R_Texture_GetResident(v31->m_image.m_base.textureId);
  R_HW_AddResourceTransition(drawStream->state, v32, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v33 = R_RT_Handle::GetSurface(&s_volumetricGlob.maxAmbientFloatZImage);
  v34 = R_Texture_GetResident(v33->m_image.m_base.textureId);
  R_HW_AddResourceTransition(drawStream->state, v34, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v35 = R_RT_Handle::GetSurface(v7);
  v36 = R_Texture_GetResident(v35->m_image.m_base.textureId);
  R_HW_AddResourceTransition(drawStream->state, v36, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v37 = R_RT_Handle::GetSurface(v8);
  v38 = R_Texture_GetResident(v37->m_image.m_base.textureId);
  R_HW_AddResourceTransition(drawStream->state, v38, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_FlushResourceTransitions(drawStream->state);
  R_GPU_EndTimer();
  R_ProfEndNamedEvent(drawStream->state);
}

/*
==============
RB_VOL_SampleLightgrid
==============
*/
void RB_VOL_SampleLightgrid(VolumetricDrawStream *drawStream)
{
  ComputeCmdBufState *state; 
  const GfxViewInfo *viewInfo; 
  __int64 toggle; 
  __int64 v6; 
  R_RT_ColorHandle *v8; 
  R_RT_ColorHandle *visibilityCurrent; 
  __int64 v10; 
  R_RT_Image *visibilityPrev; 
  const R_RT_Surface *Surface; 
  const GfxTexture *Resident; 
  const R_RT_Surface *v14; 
  const GfxTexture *v15; 
  const R_RT_Surface *v16; 
  const GfxTexture *v17; 
  const R_RT_Surface *v18; 
  const GfxTexture *v19; 
  const R_RT_Surface *v20; 
  const GfxTexture *v21; 
  const R_RT_Surface *v22; 
  const GfxTexture *v23; 
  R_RT_Handle ambientImageRead; 

  state = drawStream->state;
  viewInfo = drawStream->viewInfo;
  R_LockIfGfxImmediateContext(drawStream->state->device);
  R_ProfBeginNamedEvent(state, "Sample Light Grid");
  toggle = drawStream->toggle;
  if ( s_volumetricGlob.prevFrameAmbientValid )
  {
    v6 = 0i64;
    if ( !(_DWORD)toggle )
      v6 = 1i64;
    ambientImageRead = (R_RT_Handle)s_volumetricGlob.ambientImage[v6];
  }
  else
  {
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&ambientImageRead.m_tracking.m_name = _XMM0;
    ambientImageRead.m_surfaceID = 0;
    ambientImageRead.m_tracking.m_allocCounter = 0;
  }
  v8 = &s_volumetricGlob.ambientImage[toggle];
  visibilityCurrent = &s_volumetricGlob.ambientVisibilityImage[toggle];
  if ( s_volumetricGlob.prevFrameScatteringValid )
  {
    v10 = 0i64;
    if ( !(_DWORD)toggle )
      v10 = 1i64;
    visibilityPrev = &R_RT_Handle::GetSurface(&s_volumetricGlob.ambientVisibilityImage[v10])->m_image;
  }
  else
  {
    visibilityPrev = (R_RT_Image *)rgp.blackUintImage;
  }
  Surface = R_RT_Handle::GetSurface(&s_volumetricGlob.ambientSceneLumaImage);
  Resident = R_Texture_GetResident(Surface->m_image.m_base.textureId);
  R_HW_AddResourceTransition(state, Resident, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v14 = R_RT_Handle::GetSurface(v8);
  v15 = R_Texture_GetResident(v14->m_image.m_base.textureId);
  R_HW_AddResourceTransition(state, v15, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v16 = R_RT_Handle::GetSurface(&s_volumetricGlob.tetIdxImage);
  v17 = R_Texture_GetResident(v16->m_image.m_base.textureId);
  R_HW_AddResourceTransition(state, v17, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_FlushResourceTransitions(state);
  R_VOL_SampleLightgridImages(state, viewInfo, &ambientImageRead, v8, &s_volumetricGlob.ambientSceneLumaImage, &s_volumetricGlob.tetIdxImage, &s_volumetricGlob.maxFloatZImage, &s_volumetricGlob.maxFloatZImage, visibilityCurrent, &visibilityPrev->m_base);
  v18 = R_RT_Handle::GetSurface(&s_volumetricGlob.ambientSceneLumaImage);
  v19 = R_Texture_GetResident(v18->m_image.m_base.textureId);
  R_HW_AddResourceTransition(state, v19, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v20 = R_RT_Handle::GetSurface(v8);
  v21 = R_Texture_GetResident(v20->m_image.m_base.textureId);
  R_HW_AddResourceTransition(state, v21, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v22 = R_RT_Handle::GetSurface(&s_volumetricGlob.tetIdxImage);
  v23 = R_Texture_GetResident(v22->m_image.m_base.textureId);
  R_HW_AddResourceTransition(state, v23, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_FlushResourceTransitions(state);
  R_ProfEndNamedEvent(state);
  R_UnlockIfGfxImmediateContext(state->device);
}

/*
==============
RB_VOL_SampleMultiLightgrid
==============
*/
void RB_VOL_SampleMultiLightgrid(VolumetricDrawStream *drawStream)
{
  ComputeCmdBufState *state; 
  const GfxViewInfo *viewInfo; 
  __int64 toggle; 
  R_RT_ColorHandle *v6; 
  R_RT_BufferHandle *v7; 
  R_RT_BufferHandle *v8; 
  R_RT_BufferHandle *tetIndexCurr; 
  __int64 v10; 
  const GfxWrappedRWBuffer *WrappedBuffer; 
  const GfxWrappedRWBuffer *v13; 
  const GfxWrappedRWBuffer *v14; 
  const GfxWrappedRWBuffer *v15; 
  const GfxWrappedRWBuffer *v16; 
  const GfxWrappedRWBuffer *v17; 
  R_RT_Handle tetIndexPrev; 

  state = drawStream->state;
  viewInfo = drawStream->viewInfo;
  R_LockIfGfxImmediateContext(drawStream->state->device);
  R_ProfBeginNamedEvent(state, "Sample Multi Light Grid");
  toggle = drawStream->toggle;
  v6 = &s_volumetricGlob.ambientVisibilityImage[toggle];
  v7 = &s_volumetricGlob.ambientLightingData[toggle];
  v8 = &s_volumetricGlob.ambientLightingAlpha[toggle];
  tetIndexCurr = &s_volumetricGlob.ambientLightingTets[toggle];
  if ( s_volumetricGlob.prevFrameAmbientValid )
  {
    v10 = 0i64;
    if ( !drawStream->toggle )
      v10 = 1i64;
    tetIndexPrev = (R_RT_Handle)s_volumetricGlob.ambientLightingTets[v10];
  }
  else
  {
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&tetIndexPrev.m_tracking.m_name = _XMM0;
    tetIndexPrev.m_surfaceID = 0;
    tetIndexPrev.m_tracking.m_allocCounter = 0;
  }
  WrappedBuffer = R_RT_Handle::GetWrappedBuffer(v7);
  R_HW_AddResourceTransition(state, WrappedBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v13 = R_RT_Handle::GetWrappedBuffer(v8);
  R_HW_AddResourceTransition(state, v13, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v14 = R_RT_Handle::GetWrappedBuffer(tetIndexCurr);
  R_HW_AddResourceTransition(state, v14, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_FlushResourceTransitions(state);
  R_VOL_SampleAmbientMultiLightGrid(state, viewInfo, v6, &s_volumetricGlob.maxFloatZImage, v7, v8, tetIndexCurr, &tetIndexPrev);
  v15 = R_RT_Handle::GetWrappedBuffer(v7);
  R_HW_AddResourceTransition(state, v15, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v16 = R_RT_Handle::GetWrappedBuffer(v8);
  R_HW_AddResourceTransition(state, v16, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v17 = R_RT_Handle::GetWrappedBuffer(tetIndexCurr);
  R_HW_AddResourceTransition(state, v17, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_FlushResourceTransitions(state);
  R_ProfEndNamedEvent(state);
  R_UnlockIfGfxImmediateContext(state->device);
}

/*
==============
R_InitVolumetric
==============
*/
void R_InitVolumetric(const bool reconfigure)
{
  XB3ConsoleType XB3ConsoleType; 
  unsigned int baseMaxWidth; 
  unsigned int sceneWidth; 
  unsigned int v7; 
  unsigned int sceneHeight; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  int v12; 
  unsigned int v13; 
  signed int v14; 
  R_RT_BufferHandle v15; 
  R_RT_ColorHandle v16; 
  R_RT_ColorHandle v17; 
  R_RT_ColorHandle v18; 
  $56BB91A6A543394844F4ECC2111594E6 *v19; 
  __int64 v20; 
  __int64 v21; 
  GfxOrientedBoundingBox **writeVolumetricObbData; 
  unsigned int *volumeCount; 
  GfxWrappedBuffer *volumetricObbBuffers; 
  R_RT_ColorHandle v25; 
  R_RT_BufferHandle v26; 
  R_RT_BufferHandle v27; 
  R_RT_BufferHandle v28; 

  s_volumetricGlob.baseMaxWidth = 1920;
  s_volumetricGlob.baseMaxHeight = 1080;
  XB3ConsoleType = Sys_GetXB3ConsoleType();
  baseMaxWidth = s_volumetricGlob.baseMaxWidth;
  sceneWidth = vidConfig.sceneWidth;
  s_volumetricGlob.maxClusterCountZ = 32;
  if ( XB3ConsoleType == XB3_CONSOLE_DURANGO )
    baseMaxWidth = 1344;
  s_volumetricGlob.voxelImageDepth = 128;
  s_volumetricGlob.baseMaxWidth = baseMaxWidth;
  s_volumetricGlob.clusterImageDepth = 32;
  if ( vidConfig.sceneWidth > baseMaxWidth )
    sceneWidth = baseMaxWidth;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  v7 = (sceneWidth + 11) / 0xC;
  *(_OWORD *)&v25.m_tracking.m_name = _XMM0;
  sceneHeight = vidConfig.sceneHeight;
  v9 = ((vidConfig.sceneWidth + v7 - 1) / v7 * v7 + 4 * ((vidConfig.sceneWidth + v7 - 1) / v7) - 1) / (4 * ((vidConfig.sceneWidth + v7 - 1) / v7));
  s_volumetricGlob.maxClusterCountX = v9;
  if ( vidConfig.sceneHeight > s_volumetricGlob.baseMaxHeight )
    sceneHeight = s_volumetricGlob.baseMaxHeight;
  v10 = (sceneHeight + 11) / 0xC;
  v11 = 1;
  v12 = 4 * v9;
  s_volumetricGlob.maxClusterCountY = ((vidConfig.sceneHeight + v10 - 1) / v10 * v10 + 4 * ((vidConfig.sceneHeight + v10 - 1) / v10) - 1) / (4 * ((vidConfig.sceneHeight + v10 - 1) / v10));
  v13 = 1;
  if ( 4 * v9 > v7 )
    v12 = v7;
  v14 = 4 * (((vidConfig.sceneHeight + v10 - 1) / v10 * v10 + 4 * ((vidConfig.sceneHeight + v10 - 1) / v10) - 1) / (4 * ((vidConfig.sceneHeight + v10 - 1) / v10)));
  if ( v12 > 1 )
    v13 = v12;
  s_volumetricGlob.voxelImageWidth = v13;
  if ( v14 > v10 )
    v14 = v10;
  if ( v14 > 1 )
    v11 = v14;
  s_volumetricGlob.clusterImageWidth = (v13 + 3) >> 2;
  s_volumetricGlob.voxelImageHeight = v11;
  s_volumetricGlob.clusterImageHeight = (v11 + 3) >> 2;
  v25.m_surfaceID = 0;
  v25.m_tracking.m_allocCounter = 0;
  s_volumetricGlob.scatterImage[0] = v25;
  v25.m_surfaceID = 0;
  *(_OWORD *)&v25.m_tracking.m_name = _XMM0;
  s_volumetricGlob.scatterImage[1] = v25;
  v25.m_surfaceID = 0;
  v25.m_tracking.m_allocCounter = 0;
  *(_OWORD *)&v25.m_tracking.m_name = _XMM0;
  s_volumetricGlob.scatterImage[2] = v25;
  v28.m_surfaceID = 0;
  v28.m_tracking.m_allocCounter = 0;
  *(_OWORD *)&v28.m_tracking.m_name = _XMM0;
  v25.m_surfaceID = 0;
  *(_OWORD *)&v25.m_tracking.m_name = _XMM0;
  s_volumetricGlob.extinctionImage[0] = v25;
  v25.m_surfaceID = 0;
  v25.m_tracking.m_allocCounter = 0;
  *(_OWORD *)&v25.m_tracking.m_name = _XMM0;
  s_volumetricGlob.extinctionImage[1] = v25;
  v25.m_surfaceID = 0;
  *(_OWORD *)&v25.m_tracking.m_name = _XMM0;
  s_volumetricGlob.extinctionImage[2] = v25;
  v25.m_surfaceID = 0;
  v25.m_tracking.m_allocCounter = 0;
  *(_OWORD *)&v25.m_tracking.m_name = _XMM0;
  s_volumetricGlob.ambientImage[0] = v25;
  v26.m_surfaceID = 0;
  v26.m_tracking.m_allocCounter = 0;
  *(_OWORD *)&v26.m_tracking.m_name = _XMM0;
  s_volumetricGlob.ambientLightingData[0] = v26;
  v27.m_surfaceID = 0;
  v27.m_tracking.m_allocCounter = 0;
  *(_OWORD *)&v27.m_tracking.m_name = _XMM0;
  s_volumetricGlob.ambientLightingAlpha[0] = v27;
  s_volumetricGlob.ambientLightingTets[0] = v28;
  v28.m_surfaceID = 0;
  v28.m_tracking.m_allocCounter = 0;
  *(_OWORD *)&v28.m_tracking.m_name = _XMM0;
  v25.m_surfaceID = 0;
  *(_OWORD *)&v25.m_tracking.m_name = _XMM0;
  s_volumetricGlob.ambientImage[1] = v25;
  v26.m_surfaceID = 0;
  v26.m_tracking.m_allocCounter = 0;
  *(_OWORD *)&v26.m_tracking.m_name = _XMM0;
  s_volumetricGlob.ambientLightingData[1] = v26;
  v27.m_surfaceID = 0;
  v27.m_tracking.m_allocCounter = 0;
  *(_OWORD *)&v27.m_tracking.m_name = _XMM0;
  s_volumetricGlob.ambientLightingAlpha[1] = v27;
  v15 = v28;
  v28.m_surfaceID = 0;
  v28.m_tracking.m_allocCounter = 0;
  *(_OWORD *)&v28.m_tracking.m_name = _XMM0;
  s_volumetricGlob.ambientLightingTets[1] = v15;
  v16 = (R_RT_ColorHandle)v28;
  v28.m_surfaceID = 0;
  v28.m_tracking.m_allocCounter = 0;
  *(_OWORD *)&v28.m_tracking.m_name = _XMM0;
  s_volumetricGlob.visibilityImage[0] = v16;
  v17 = (R_RT_ColorHandle)v28;
  v28.m_surfaceID = 0;
  v28.m_tracking.m_allocCounter = 0;
  *(_OWORD *)&v28.m_tracking.m_name = _XMM0;
  s_volumetricGlob.visibilityImage[1] = v17;
  s_volumetricGlob.tetIdxImage = (R_RT_ColorHandle)v28;
  v28.m_surfaceID = 0;
  v28.m_tracking.m_allocCounter = 0;
  *(_OWORD *)&v28.m_tracking.m_name = _XMM0;
  v18 = (R_RT_ColorHandle)v28;
  v28.m_surfaceID = 0;
  v19 = &s_volumetricGlob;
  v28.m_tracking.m_allocCounter = 0;
  v20 = 2i64;
  *(_OWORD *)&v28.m_tracking.m_name = _XMM0;
  s_volumetricGlob.ambientSceneLumaImage = v18;
  s_volumetricGlob.maxFloatZImage = (R_RT_ColorHandle)v28;
  v28.m_surfaceID = 0;
  v21 = 2i64;
  v28.m_tracking.m_allocCounter = 0;
  *(_OWORD *)&v28.m_tracking.m_name = _XMM0;
  s_volumetricGlob.maskClusterBuffer = v28;
  s_volumetricGlob.frame = 0;
  do
  {
    MatrixIdentity44((tmat44_t<vec4_t> *)v19);
    v19 = ($56BB91A6A543394844F4ECC2111594E6 *)((char *)v19 + 64);
    --v21;
  }
  while ( v21 );
  *(_QWORD *)&s_volumetricGlob.prevFrameUsedLocalMedia = 0i64;
  writeVolumetricObbData = s_volumetricGlob.writeVolumetricObbData;
  *(_QWORD *)&s_volumetricGlob.densityInjectionsKickedOff = 0i64;
  volumeCount = s_volumetricGlob.volumeCount;
  *(_QWORD *)&s_volumetricGlob.prevFrameAmbientValid = 0i64;
  volumetricObbBuffers = s_volumetricGlob.volumetricObbBuffers;
  do
  {
    if ( !reconfigure )
      *volumeCount = 0;
    *(writeVolumetricObbData - 2) = (GfxOrientedBoundingBox *)PMem_Alloc(0x9000ui64, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "volumetrics volume write");
    *writeVolumetricObbData = (GfxOrientedBoundingBox *)PMem_Alloc(0x3C00ui64, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "volumetrics obb write");
    R_CreateGfxWrappedBuffer(volumetricObbBuffers - 2, GfxWrappedBuffer_Structured, 144, 0x100u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "volumetrics volume buffer");
    R_CreateGfxWrappedBuffer(volumetricObbBuffers++, GfxWrappedBuffer_Structured, 60, 0x100u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "volumetrics obb buffer");
    ++volumeCount;
    ++writeVolumetricObbData;
    --v20;
  }
  while ( v20 );
}

/*
==============
R_ShutdownVolumetric
==============
*/
void R_ShutdownVolumetric(void)
{
  GfxWrappedBuffer *volumetricObbBuffers; 
  __int64 v1; 

  R_VOL_FreeRts();
  volumetricObbBuffers = s_volumetricGlob.volumetricObbBuffers;
  v1 = 2i64;
  do
  {
    R_ShutdownGfxWrappedBuffer(volumetricObbBuffers - 2);
    R_ShutdownGfxWrappedBuffer(volumetricObbBuffers++);
    --v1;
  }
  while ( v1 );
}

/*
==============
R_VOL_AccumulateScattering
==============
*/
void R_VOL_AccumulateScattering(VolumetricDrawStream *drawStream, VolumetricAccumulateResources *resources)
{
  ComputeCmdBufState *state; 
  const GfxViewInfo *viewInfo; 
  int useLocalMedia; 
  unsigned int CUMask; 
  bool v8; 
  GfxTexture *textures[2]; 
  VolumetricConstants consts; 

  state = drawStream->state;
  viewInfo = drawStream->viewInfo;
  useLocalMedia = drawStream->useLocalMedia;
  if ( drawStream->state->computeContextType != COMPUTE_CONTEXT_TYPE_GFX )
  {
    R_SetComputeLimitsPerCU(state, COMPUTECMD_SIMD_WALK_DEFAULT, r_volumetricsWaveLimit->current.unsignedInt, 0, 0);
    if ( r_volumetricsUseCUMask->current.integer )
    {
      CUMask = R_GetCUMask(GFX_CU_MASK_MODE_ASYNC_VOLUMETRICS);
      R_SetComputeCUMask(drawStream->state, CUMask);
    }
  }
  v8 = drawStream->useLocalMediaPrev != 0;
  if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 993, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  memset_0(&consts, 0, sizeof(consts));
  R_VOL_SetConstantsCommon(&consts, viewInfo, VOLUMETRIC_PASS_ACCUMULATE, v8);
  R_UploadAndSetComputeConstants(state, 0, &consts, 0x140u, NULL);
  R_SetComputeShader(state, *(const ComputeShader **)((char *)rgp.volumetricAccumulateComputeShader + (useLocalMedia != 0 ? 8 : 0)));
  textures[0] = (GfxTexture *)R_Texture_GetResident(resources->scatterCurrentTexture->textureId);
  R_SetComputeTextures(state, 20, 1, (const GfxTexture *const *)textures);
  textures[0] = (GfxTexture *)R_Texture_GetResident(resources->scatterCurrentMomentsTexture->textureId);
  R_SetComputeTextures(state, 22, 1, (const GfxTexture *const *)textures);
  textures[0] = (GfxTexture *)R_Texture_GetResident(resources->extinctionTemporalReadImage->textureId);
  R_SetComputeTextures(state, 21, 1, (const GfxTexture *const *)textures);
  textures[0] = (GfxTexture *)R_Texture_GetResident(resources->scatterTemporalReadImage->textureId);
  R_SetComputeTextures(state, 14, 1, (const GfxTexture *const *)textures);
  textures[0] = (GfxTexture *)R_Texture_GetResident(resources->visibilityPrevFrameImage->textureId);
  R_SetComputeTextures(state, 17, 1, (const GfxTexture *const *)textures);
  textures[0] = (GfxTexture *)R_Texture_GetResident(resources->visibilityImage->textureId);
  R_SetComputeTextures(state, 16, 1, (const GfxTexture *const *)textures);
  textures[0] = (GfxTexture *)R_Texture_GetResident(resources->scatterTemporalWriteImage->textureId);
  R_SetComputeRWTextures(state, 0, 1, (const GfxTexture *const *)textures);
  textures[0] = (GfxTexture *)R_Texture_GetResident(resources->scatterIntegralImage->textureId);
  R_SetComputeRWTextures(state, 4, 1, (const GfxTexture *const *)textures);
  textures[0] = (GfxTexture *)R_Texture_GetResident(resources->extinctionIntegralImage->textureId);
  R_SetComputeRWTextures(state, 5, 1, (const GfxTexture *const *)textures);
  if ( (s_volumetricGlob.voxelImageDepth & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 1599, ASSERT_TYPE_ASSERT, "(s_volumetricGlob.voxelImageDepth % 4 == 0)", (const char *)&queryFormat, "s_volumetricGlob.voxelImageDepth % 4 == 0") )
    __debugbreak();
  R_Dispatch(state, 1u, ((unsigned __int64)viewInfo->frustumGrid.voxelCountX + 3) >> 2, ((unsigned __int64)viewInfo->frustumGrid.voxelCountY + 3) >> 2);
  if ( !drawStream->state->device && r_volumetricsUseCUMask->current.enabled )
    R_ResetComputeCUMask(drawStream->state);
}

/*
==============
R_VOL_AddVolumetric
==============
*/
__int64 R_VOL_AddVolumetric(const GfxVolumetric *volumetric, const GfxBackEndData *data, __int64 volumetricFrame, GfxDescriptorTable *currentVolumetricNoiseTexturesArray, const float time, const unsigned int count, const unsigned int limit, int *inOutMaskCount)
{
  __m256i v11; 
  __int64 v12; 
  VolumetricVolume *v13; 
  GfxOrientedBoundingBox *v14; 
  float falloff; 
  __int128 v17; 
  float v20; 
  double v21; 
  float anisotropy; 
  int v24; 
  float v28; 
  float v29; 
  base_vec4_t<int> *p_maskID; 
  float *v31; 
  float *v32; 
  _QWORD *v33; 
  float v34; 
  float v35; 
  const GfxTexture *v36; 
  __int64 v37; 
  const GfxTexture *v38; 
  unsigned int view; 
  signed int m_usedSize; 
  int v41; 
  __int64 v42; 
  __int64 v43; 

  if ( count >= 0x100 )
  {
    R_WarnOncePerFrame(R_WARN_VOLUMETRIC_VOLUME_LIMIT, limit, volumetricFrame);
    return count;
  }
  if ( (volumetric->flags & 1) != 0 )
    return count;
  v11 = *(__m256i *)volumetric->obb.center.v;
  v12 = count;
  v13 = &s_volumetricGlob.writeVolumetricVolumeData[(unsigned int)volumetricFrame][count];
  v14 = s_volumetricGlob.writeVolumetricObbData[(unsigned int)volumetricFrame];
  *(__m256i *)v14[v12].center.v = v11;
  *(_OWORD *)&v14[v12].yAxis.z = *(_OWORD *)&volumetric->obb.yAxis.z;
  *(double *)v14[v12].halfSize.v = *(double *)volumetric->obb.halfSize.v;
  v14[v12].halfSize.v[2] = volumetric->obb.halfSize.v[2];
  v13->density = volumetric->density;
  if ( volumetric->falloff <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 575, ASSERT_TYPE_ASSERT, "(volumetric->falloff > 0.0f)", (const char *)&queryFormat, "volumetric->falloff > 0.0f") )
    __debugbreak();
  v13->falloffRcp = 1.0 / volumetric->falloff;
  falloff = volumetric->falloff;
  v17 = LODWORD(volumetric->obb.halfSize.v[0]);
  *(float *)&v17 = volumetric->obb.halfSize.v[0] - falloff;
  _XMM4 = v17;
  v13->scaledFalloffHalfSize.v[0] = *(float *)&v17;
  v13->scaledFalloffHalfSize.v[1] = volumetric->obb.halfSize.v[1] - falloff;
  __asm
  {
    vminss  xmm1, xmm4, xmm3
    vminss  xmm0, xmm1, xmm2
  }
  v13->scaledFalloffHalfSize.v[2] = volumetric->obb.halfSize.v[2] - falloff;
  if ( *(float *)&_XMM0 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 578, ASSERT_TYPE_ASSERT, "(Vec3MinTerm( volume->scaledFalloffHalfSize ) >= 0.0f)", (const char *)&queryFormat, "Vec3MinTerm( volume->scaledFalloffHalfSize ) >= 0.0f") )
    __debugbreak();
  LODWORD(v20) = LODWORD(v13->falloffRcp) ^ _xmm;
  v13->scaledFalloffHalfSize.v[0] = v20 * v13->scaledFalloffHalfSize.v[0];
  v13->scaledFalloffHalfSize.v[1] = v20 * v13->scaledFalloffHalfSize.v[1];
  v13->scaledFalloffHalfSize.v[2] = v20 * v13->scaledFalloffHalfSize.v[2];
  v21 = I_fclamp(volumetric->heightFade, 0.0, 1.0);
  _XMM3 = LODWORD(FLOAT_NaN);
  v13->heightFadeExponent = *(float *)&v21 * -0.1;
  if ( (volumetric->flags & 2) != 0 )
    anisotropy = volumetric->anisotropy;
  else
    anisotropy = FLOAT_NaN;
  v24 = 0;
  _XMM0 = volumetric->flags & 2;
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm3, xmm3, xmm2
  }
  v13->anisotropy = anisotropy;
  if ( (volumetric->flags & 4) != 0 )
    v28 = volumetric->color.v[0];
  else
    v28 = *(float *)&_XMM0;
  v13->color.v[0] = v28;
  if ( (volumetric->flags & 4) != 0 )
    v29 = volumetric->color.v[1];
  else
    v29 = *(float *)&_XMM0;
  v13->color.v[1] = v29;
  if ( (volumetric->flags & 4) != 0 )
    *(float *)&_XMM0 = volumetric->color.v[2];
  p_maskID = &v13->maskID;
  v31 = &v13->maskScaleAndOffset[0].v[3];
  v32 = (float *)&volumetric->masks[0].scroll + 1;
  v13->color.v[2] = *(float *)&_XMM0;
  do
  {
    p_maskID->v[v24] = -1;
    if ( *((_DWORD *)v32 - 9) == 2 )
    {
      v33 = *(_QWORD **)(v32 - 7);
      if ( v33 )
      {
        if ( *v33 )
        {
          v13->maskAxis.v[v24] = *(unsigned int *)(v32 - 8);
          *(v31 - 3) = 1.0 / *(v32 - 5);
          *(v31 - 2) = 1.0 / *(v32 - 4);
          v34 = (float)(time * *(v32 - 1)) + *(v32 - 3);
          *(v31 - 1) = v34;
          v35 = (float)(time * *v32) + *(v32 - 2);
          *v31 = v35;
          *(v31 - 1) = (float)(v34 * *(v31 - 3)) + 0.5;
          *v31 = (float)(v35 * *(v31 - 2)) + 0.5;
          if ( (unsigned int)*inOutMaskCount >= 0x40 )
          {
            LODWORD(v43) = 64;
            LODWORD(v42) = *inOutMaskCount;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 612, ASSERT_TYPE_ASSERT, "(unsigned)( inOutMaskCount ) < (unsigned)( 64 )", "inOutMaskCount doesn't index MAX_VOLUMETRIC_MASK_TEXTURES_COUNT\n\t%i not in [0, %i)", v42, v43) )
              __debugbreak();
          }
          v36 = R_Texture_Get(data, (GfxTextureId)*(_DWORD *)(*(_QWORD *)(v32 - 7) + 16i64));
          v37 = *inOutMaskCount;
          v38 = v36;
          if ( (unsigned int)v37 >= currentVolumetricNoiseTexturesArray->m_size )
          {
            LODWORD(v43) = currentVolumetricNoiseTexturesArray->m_size;
            LODWORD(v42) = *inOutMaskCount;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_setstate_d3d.h", 1212, ASSERT_TYPE_ASSERT, "(unsigned)( startApiSlot + apiSlotCount - 1 ) < (unsigned)( table->m_size )", "startApiSlot + apiSlotCount - 1 doesn't index table->m_size\n\t%i not in [0, %i)", v42, v43) )
              __debugbreak();
          }
          view = v38->shaderView.view;
          p_maskID = &v13->maskID;
          currentVolumetricNoiseTexturesArray->m_descriptors[v37] = view;
          m_usedSize = v37 + 1;
          v41 = -1;
          if ( (signed int)currentVolumetricNoiseTexturesArray->m_usedSize > m_usedSize )
            m_usedSize = currentVolumetricNoiseTexturesArray->m_usedSize;
          currentVolumetricNoiseTexturesArray->m_usedSize = m_usedSize;
          if ( *inOutMaskCount < 64 )
            v41 = *inOutMaskCount;
          *base_vec4_t<int>::operator[](&v13->maskID, v24) = v41;
          ++*inOutMaskCount;
        }
      }
    }
    ++v24;
    v32 += 10;
    v31 += 4;
  }
  while ( (unsigned int)v24 < 4 );
  return count + 1;
}

/*
==============
R_VOL_AddVolumetrics
==============
*/
void R_VOL_AddVolumetrics(const void *const cmd)
{
  const GfxBackEndData *v1; 
  unsigned int v2; 
  float v3; 
  unsigned int volumetricVisDataCount; 
  unsigned int *volumetricVisData; 
  unsigned int v6; 
  __int64 v7; 
  GfxDescriptorTable *v8; 
  unsigned int v9; 
  unsigned int v10; 
  int v11; 
  unsigned int i; 
  unsigned int v13; 
  __int64 count; 
  __int64 limit; 
  unsigned int *v16; 
  unsigned int volumetricFrame; 
  unsigned int v18; 
  int inOutMaskCount; 
  GfxDescriptorTable *currentVolumetricNoiseTexturesArray; 

  v1 = *(const GfxBackEndData **)cmd;
  v2 = 0;
  v18 = 0;
  volumetricFrame = *(_DWORD *)(*(_QWORD *)cmd + 1088732i64) & 1;
  v3 = fmodf_0(*(float *)(25744i64 * *(unsigned int *)(*(_QWORD *)cmd + 31440i64) + *(_QWORD *)(*(_QWORD *)cmd + 31464i64) + 1460), 43200.0);
  volumetricVisDataCount = rgp.world->dpvs.volumetricVisDataCount;
  volumetricVisData = rgp.world->dpvs.volumetricVisData;
  v16 = volumetricVisData;
  if ( volumetricVisDataCount )
    v6 = *volumetricVisData;
  else
    v6 = 0;
  currentVolumetricNoiseTexturesArray = &s_volumetricNoiseTexturesArray[v1->smpFrame];
  R_ResetGfxDescriptorTable(currentVolumetricNoiseTexturesArray);
  inOutMaskCount = 0;
  LODWORD(v7) = 0;
  v8 = currentVolumetricNoiseTexturesArray;
  while ( 1 )
  {
    v9 = v6;
    if ( !v6 )
      break;
LABEL_8:
    v10 = __lzcnt(v9);
    v11 = v10 + 32 * v7;
    if ( v10 >= 0x20 )
    {
      LODWORD(limit) = 32;
      LODWORD(count) = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", count, limit) )
        __debugbreak();
    }
    if ( ((0x80000000 >> v10) & v9) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_visdata_inline.h", 53, ASSERT_TYPE_ASSERT, "(visdata & bit)", (const char *)&queryFormat, "visdata & bit") )
      __debugbreak();
    v6 = v9 & ~(0x80000000 >> v10);
    volumetricVisData = v16;
    v2 = R_VOL_AddVolumetric(&rgp.world->draw.volumetrics.volumetrics[v11], v1, volumetricFrame, v8, v3, v18, 0x80u, &inOutMaskCount);
    v18 = v2;
  }
  while ( 1 )
  {
    v7 = (unsigned int)(v7 + 1);
    if ( (unsigned int)v7 >= volumetricVisDataCount )
      break;
    v9 = volumetricVisData[v7];
    if ( v9 )
      goto LABEL_8;
  }
  for ( i = 0; i < v1->sceneVolumetricCount; v2 = v13 )
    v13 = R_VOL_AddVolumetric(&v1->sceneVolumetrics[i++], v1, volumetricFrame, currentVolumetricNoiseTexturesArray, v3, v2, 0x80u, &inOutMaskCount);
  R_FlushDescriptorTable(currentVolumetricNoiseTexturesArray);
  R_VOL_CullLightGrids(&v1->viewInfo[v1->viewInfoIndex], v1);
  s_volumetricGlob.volumeCount[volumetricFrame] = v2;
}

/*
==============
R_VOL_AnyVisible
==============
*/
bool R_VOL_AnyVisible(const GfxViewInfo *viewInfo)
{
  if ( !R_UseBakedLighting() || !viewInfo->volumetrics.enabled )
    return 0;
  if ( viewInfo->volumetrics.airDensity <= 0.0 )
    return R_VOL_UseLocalMedia(viewInfo->input.data, viewInfo);
  return 1;
}

/*
==============
R_VOL_CombineAmbientMultiLightGrid
==============
*/
void R_VOL_CombineAmbientMultiLightGrid(ComputeCmdBufState *state, const GfxViewInfo *viewInfo, const R_RT_Handle *ambientCurrent, const R_RT_Handle *ambientPrev, const R_RT_Handle *visibilityCurrent, const R_RT_Handle *visibilityPrev, const R_RT_Handle *floatZ, const R_RT_Handle *ambientScene, const R_RT_Handle *sampledLighting, const R_RT_Handle *sampledLightingAlpha)
{
  ComputeShader *combineMultiLightGridVolumetricIsoSkylight; 
  GfxImage *SVDBasis; 
  ComputeShader *combineMultiLightGridVolumetricIso; 
  unsigned __int16 m_surfaceID; 
  R_RT_Handle *v18; 
  unsigned __int16 v19; 
  const GfxGpuLightGrid *v20; 
  unsigned int v21; 
  bool temporalValid; 
  const GfxBackEndData *data; 
  const R_RT_Surface *Surface; 
  GfxTextureId textureId; 
  GfxTextureId v26; 
  const R_RT_Surface *v27; 
  const R_RT_Surface *v28; 
  const R_RT_Surface *v29; 
  GfxTexture *textures; 

  ((void (__fastcall *)(GfxDevice *, __int64, _QWORD, __int64))state->device->m_pFunction[22].AddRef)(state->device, 0x8000000i64, 0i64, 0xFFFFFFFF00i64);
  if ( s_world.precomputedSkyIllumination.boxMin.v[0] < s_world.precomputedSkyIllumination.boxMax.v[0] && r_enablePrecomputedSkyIllumination->current.enabled )
  {
    combineMultiLightGridVolumetricIsoSkylight = rgp.combineMultiLightGridVolumetricIsoSkylight;
    if ( viewInfo->volumetrics.sunAnisotropy != 0.0 )
      combineMultiLightGridVolumetricIsoSkylight = rgp.combineMultiLightGridVolumetricAnisoSkylight;
    R_SetComputeShader(state, combineMultiLightGridVolumetricIsoSkylight);
    textures = (GfxTexture *)R_Texture_GetResident(s_world.precomputedSkyIllumination.heightMap->textureId);
    R_SetComputeTextures(state, 29, 1, (const GfxTexture *const *)&textures);
    textures = (GfxTexture *)R_Texture_GetResident(s_world.precomputedSkyIllumination.detailMask->textureId);
    R_SetComputeTextures(state, 30, 1, (const GfxTexture *const *)&textures);
    textures = (GfxTexture *)R_Texture_GetResident(s_world.precomputedSkyIllumination.SVDCoefficient->textureId);
    R_SetComputeTextures(state, 31, 1, (const GfxTexture *const *)&textures);
    SVDBasis = s_world.precomputedSkyIllumination.SVDBasis;
  }
  else
  {
    combineMultiLightGridVolumetricIso = rgp.combineMultiLightGridVolumetricIso;
    if ( viewInfo->volumetrics.sunAnisotropy != 0.0 )
      combineMultiLightGridVolumetricIso = rgp.combineMultiLightGridVolumetricAniso;
    R_SetComputeShader(state, combineMultiLightGridVolumetricIso);
    textures = (GfxTexture *)R_Texture_GetResident(rgp.blackImage->textureId);
    R_SetComputeTextures(state, 29, 1, (const GfxTexture *const *)&textures);
    textures = (GfxTexture *)R_Texture_GetResident(rgp.whiteImage->textureId);
    R_SetComputeTextures(state, 30, 1, (const GfxTexture *const *)&textures);
    textures = (GfxTexture *)R_Texture_GetResident(rgp.blackImage->textureId);
    R_SetComputeTextures(state, 31, 1, (const GfxTexture *const *)&textures);
    SVDBasis = rgp.blackImage;
  }
  textures = (GfxTexture *)R_Texture_GetResident(SVDBasis->textureId);
  R_SetComputeTextures(state, 32, 1, (const GfxTexture *const *)&textures);
  m_surfaceID = ambientPrev->m_surfaceID;
  if ( ambientPrev->m_surfaceID )
  {
    R_RT_Handle::GetSurface((R_RT_Handle *)ambientPrev);
  }
  else if ( ambientPrev->m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
  {
    __debugbreak();
  }
  v18 = (R_RT_Handle *)visibilityPrev;
  v19 = visibilityPrev->m_surfaceID;
  if ( visibilityPrev->m_surfaceID )
  {
    R_RT_Handle::GetSurface((R_RT_Handle *)visibilityPrev);
  }
  else if ( visibilityPrev->m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
  {
    __debugbreak();
  }
  if ( (m_surfaceID != 0) != (v19 != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 1222, ASSERT_TYPE_ASSERT, "(ambientPrev.IsValid() == visibilityPrev.IsValid())", (const char *)&queryFormat, "ambientPrev.IsValid() == visibilityPrev.IsValid()") )
    __debugbreak();
  v20 = NULL;
  v21 = s_volumetricGlob.activeLightGridsMask[viewInfo->input.data->volumetricsIndex & 1];
  R_VOL_SetConstants(state, viewInfo, VOLUMETRIC_PASS_LIGHTGRID, 0, 0);
  temporalValid = R_RT_Handle::IsValid((R_RT_Handle *)ambientPrev);
  R_VOL_SetLightGridConstants(state, viewInfo, NULL, 0, -1, -1, __popcnt(v21), temporalValid);
  data = viewInfo->input.data;
  if ( R_GetNumActiveLightGrids(data) > 0 )
    v20 = *R_GetActiveLightGridsList(data);
  RB_GpuLightGrid_SetResouces(state, &viewInfo->input, v20);
  Surface = R_RT_Handle::GetSurface((R_RT_Handle *)visibilityCurrent);
  visibilityPrev = (const R_RT_Handle *)R_Texture_GetResident(Surface->m_image.m_base.textureId);
  R_SetComputeTextures(state, 16, 1, (const GfxTexture *const *)&visibilityPrev);
  if ( R_RT_Handle::IsValid(v18) )
    textureId = R_RT_Handle::GetSurface(v18)->m_image.m_base.textureId;
  else
    textureId = rgp.blackUintImage->textureId;
  visibilityPrev = (const R_RT_Handle *)R_Texture_GetResident(textureId);
  R_SetComputeTextures(state, 17, 1, (const GfxTexture *const *)&visibilityPrev);
  if ( R_RT_Handle::IsValid((R_RT_Handle *)ambientPrev) )
    v26 = R_RT_Handle::GetSurface((R_RT_Handle *)ambientPrev)->m_image.m_base.textureId;
  else
    v26 = rgp.blackImage3D->textureId;
  visibilityPrev = (const R_RT_Handle *)R_Texture_GetResident(v26);
  R_SetComputeTextures(state, 10, 1, (const GfxTexture *const *)&visibilityPrev);
  v27 = R_RT_Handle::GetSurface((R_RT_Handle *)floatZ);
  visibilityPrev = (const R_RT_Handle *)R_Texture_GetResident(v27->m_image.m_base.textureId);
  R_SetComputeTextures(state, 19, 1, (const GfxTexture *const *)&visibilityPrev);
  visibilityPrev = (const R_RT_Handle *)&R_RT_Handle::GetWrappedBuffer((R_RT_Handle *)sampledLighting)->view;
  R_SetComputeViews(state, 24, 1, (const GfxShaderBufferView *const *)&visibilityPrev);
  visibilityPrev = (const R_RT_Handle *)&R_RT_Handle::GetWrappedBuffer((R_RT_Handle *)sampledLightingAlpha)->view;
  R_SetComputeViews(state, 25, 1, (const GfxShaderBufferView *const *)&visibilityPrev);
  v28 = R_RT_Handle::GetSurface((R_RT_Handle *)ambientCurrent);
  visibilityPrev = (const R_RT_Handle *)R_Texture_GetResident(v28->m_image.m_base.textureId);
  R_SetComputeRWTextures(state, 0, 1, (const GfxTexture *const *)&visibilityPrev);
  v29 = R_RT_Handle::GetSurface((R_RT_Handle *)ambientScene);
  visibilityPrev = (const R_RT_Handle *)R_Texture_GetResident(v29->m_image.m_base.textureId);
  R_SetComputeRWTextures(state, 2, 1, (const GfxTexture *const *)&visibilityPrev);
  if ( viewInfo->frustumGrid.clusterCountX != R_RT_Handle::GetSurface((R_RT_Handle *)ambientCurrent)->m_image.m_base.width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 1244, ASSERT_TYPE_ASSERT, "(viewInfo->frustumGrid.clusterCountX == ambientCurrent.GetImage()->width)", (const char *)&queryFormat, "viewInfo->frustumGrid.clusterCountX == ambientCurrent.GetImage()->width") )
    __debugbreak();
  if ( viewInfo->frustumGrid.clusterCountY != R_RT_Handle::GetSurface((R_RT_Handle *)ambientCurrent)->m_image.m_base.height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 1245, ASSERT_TYPE_ASSERT, "(viewInfo->frustumGrid.clusterCountY == ambientCurrent.GetImage()->height)", (const char *)&queryFormat, "viewInfo->frustumGrid.clusterCountY == ambientCurrent.GetImage()->height") )
    __debugbreak();
  if ( s_volumetricGlob.clusterImageDepth != R_RT_Handle::GetSurface((R_RT_Handle *)ambientCurrent)->m_image.m_base.depth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 1246, ASSERT_TYPE_ASSERT, "(s_volumetricGlob.clusterImageDepth == ambientCurrent.GetImage()->depth)", (const char *)&queryFormat, "s_volumetricGlob.clusterImageDepth == ambientCurrent.GetImage()->depth") )
    __debugbreak();
  R_Dispatch(state, (viewInfo->frustumGrid.clusterCountX + 3) >> 2, (viewInfo->frustumGrid.clusterCountY + 3) >> 2, (s_volumetricGlob.clusterImageDepth + 3) >> 2);
}

/*
==============
R_VOL_CullLightGrids
==============
*/
void R_VOL_CullLightGrids(const GfxViewInfo *viewInfo, const GfxBackEndData *backendData)
{
  const GfxGpuLightGrid **ActiveLightGridsList; 
  int NumActiveLightGrids; 
  __int64 v6; 
  unsigned int v7; 
  float tanHalfFovX; 
  float *v9; 
  int v10; 
  __int128 v12; 
  float tanHalfFovY; 
  __int128 v15; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  int v46; 
  __int64 v47; 
  __int64 v48; 
  __int64 v49; 
  __m128 *boundingVolume; 
  __m128 v51; 
  __m128 v52; 
  __m128 v53; 
  float v54; 
  __m128 v58; 
  __m128 v60; 
  __m128 v64; 
  __m128 v68; 
  __m128 v72; 
  __int128 v78; 
  __int128 v80; 
  float v86; 
  float v87; 
  float v88; 
  float v89; 
  float v90; 
  float v91; 
  float v92; 
  float v93; 
  float v94; 
  float v95; 
  float v97; 
  float v98; 
  int v99[17]; 
  float v100; 
  float v101; 
  float v102; 
  float v103; 
  float v104; 

  ActiveLightGridsList = R_GetActiveLightGridsList(backendData);
  NumActiveLightGrids = R_GetNumActiveLightGrids(backendData);
  v6 = NumActiveLightGrids;
  v7 = 0;
  if ( NumActiveLightGrids > 0 )
  {
    tanHalfFovX = viewInfo->viewParmsSet.frames[0].viewParms.camera.tanHalfFovX;
    v9 = (float *)v99;
    v10 = 0;
    v12 = LODWORD(tanHalfFovX);
    *(float *)&v12 = tanHalfFovX * viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[1].v[0];
    _XMM14 = v12;
    v88 = tanHalfFovX * viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[1].v[1];
    tanHalfFovY = viewInfo->viewParmsSet.frames[0].viewParms.camera.tanHalfFovY;
    v89 = tanHalfFovY * viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[2].v[1];
    v86 = viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[0].v[0];
    v90 = viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[0].v[1];
    v94 = viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[0].v[2];
    v87 = viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[0];
    v91 = viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[1];
    v93 = tanHalfFovX * viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[1].v[2];
    v15 = LODWORD(tanHalfFovY);
    *(float *)&v15 = tanHalfFovY * viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[2].v[0];
    _XMM15 = v15;
    v95 = viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[2];
    v92 = tanHalfFovY * viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[2].v[2];
    do
    {
      _XMM7 = LODWORD(FLOAT_1_0);
      _XMM0 = v10 & 4;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm0, xmm7, xmm11, xmm2
      }
      v20 = *(float *)&_XMM0 - 0.25;
      v21 = (float)(*(float *)&_XMM0 - 0.25) - 0.25;
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0 * 4.0, 0.0, 1.0);
      v22 = *(float *)&_XMM0;
      *(double *)&_XMM0 = I_fclamp(v20 * 4.0, 0.0, 1.0);
      LODWORD(_XMM7) = _XMM0;
      *(double *)&_XMM0 = I_fclamp((float)(v20 - 0.25) * 4.0, 0.0, 1.0);
      v23 = *(float *)&_XMM0;
      *(double *)&_XMM0 = I_fclamp((float)(v21 - 0.25) * 4.0, 0.0, 1.0);
      v24 = (float)((float)((float)((float)(v22 * rg.volumetricDepth.v[0]) + (float)(*(float *)&_XMM7 * rg.volumetricDepth.v[1])) + (float)(v23 * rg.volumetricDepth.v[2])) + (float)(*(float *)&_XMM0 * rg.volumetricDepth.v[3])) + 4.0;
      _XMM0 = v10 & 1;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm5, xmm14, xmm3, xmm2
      }
      _XMM0 = v10 & 2;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm1, xmm15, xmm4, xmm2
      }
      _XMM4 = LODWORD(v88);
      *(v9 - 2) = (float)((float)((float)(*(float *)&_XMM5 + *(float *)&_XMM1) + v86) * v24) + v87;
      _XMM0 = v10 & 1;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm5, xmm4, xmm3, xmm2
      }
      _XMM3 = LODWORD(v89);
      _XMM0 = v10 & 2;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm1, xmm3, xmm4, xmm2
      }
      _XMM4 = LODWORD(v92);
      *(v9 - 1) = (float)((float)((float)(*(float *)&_XMM5 + *(float *)&_XMM1) + v90) * v24) + v91;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm5, xmm4, xmm3, xmm2
      }
      _XMM3 = LODWORD(v93);
      _XMM0 = v10 & 1;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm1, xmm3, xmm4, xmm2
      }
      ++v10;
      *v9 = (float)((float)((float)(*(float *)&_XMM5 + *(float *)&_XMM1) + v94) * v24) + v95;
      v9 += 3;
    }
    while ( v10 < 8 );
    v46 = 0;
    v47 = 0i64;
    if ( (int)v6 > 0 )
    {
      v48 = 0i64;
      while ( 2 )
      {
        v49 = 0i64;
        boundingVolume = (__m128 *)ActiveLightGridsList[v48]->boundingVolume;
        while ( 1 )
        {
          v51 = *boundingVolume;
          v52 = _mm_shuffle_ps(v51, v51, 85);
          v53 = v52;
          v54 = fsqrt(1.0 - (float)((float)(v52.m128_f32[0] * v52.m128_f32[0]) + (float)(v51.m128_f32[0] * v51.m128_f32[0])));
          v53.m128_f32[0] = (float)((float)(v52.m128_f32[0] * v98) + (float)(COERCE_FLOAT(*boundingVolume) * v97)) + (float)(v54 * *(float *)v99);
          _XMM4 = v53;
          __asm
          {
            vminss  xmm5, xmm4, cs:__real@7f7fffff
            vmaxss  xmm4, xmm4, cs:__real@ff7fffff
          }
          v58 = v52;
          v58.m128_f32[0] = (float)((float)(v52.m128_f32[0] * *(float *)&v99[2]) + (float)(COERCE_FLOAT(*boundingVolume) * *(float *)&v99[1])) + (float)(v54 * *(float *)&v99[3]);
          _XMM3 = v58;
          v60 = v52;
          __asm
          {
            vminss  xmm5, xmm3, xmm5
            vmaxss  xmm4, xmm3, xmm4
          }
          v60.m128_f32[0] = (float)((float)(v52.m128_f32[0] * *(float *)&v99[5]) + (float)(COERCE_FLOAT(*boundingVolume) * *(float *)&v99[4])) + (float)(v54 * *(float *)&v99[6]);
          _XMM3 = v60;
          v64 = v52;
          __asm
          {
            vminss  xmm5, xmm3, xmm5
            vmaxss  xmm4, xmm3, xmm4
          }
          v64.m128_f32[0] = (float)((float)(v52.m128_f32[0] * *(float *)&v99[8]) + (float)(COERCE_FLOAT(*boundingVolume) * *(float *)&v99[7])) + (float)(v54 * *(float *)&v99[9]);
          _XMM3 = v64;
          v68 = v52;
          __asm
          {
            vminss  xmm5, xmm3, xmm5
            vmaxss  xmm4, xmm3, xmm4
          }
          v68.m128_f32[0] = (float)((float)(v52.m128_f32[0] * *(float *)&v99[11]) + (float)(COERCE_FLOAT(*boundingVolume) * *(float *)&v99[10])) + (float)(v54 * *(float *)&v99[12]);
          _XMM3 = v68;
          v72 = *boundingVolume;
          __asm
          {
            vminss  xmm5, xmm3, xmm5
            vmaxss  xmm4, xmm3, xmm4
          }
          v72.m128_f32[0] = (float)((float)(COERCE_FLOAT(*boundingVolume) * *(float *)&v99[13]) + (float)(v52.m128_f32[0] * *(float *)&v99[14])) + (float)(v54 * *(float *)&v99[15]);
          _XMM3 = v72;
          __asm
          {
            vminss  xmm5, xmm3, xmm5
            vmaxss  xmm4, xmm3, xmm4
          }
          v78 = LODWORD(v100);
          *(float *)&v78 = (float)((float)(v100 * v52.m128_f32[0]) + (float)(*(float *)&v99[16] * COERCE_FLOAT(*boundingVolume))) + (float)(v54 * v101);
          _XMM3 = v78;
          v80 = LODWORD(v103);
          __asm
          {
            vminss  xmm5, xmm3, xmm5
            vmaxss  xmm4, xmm3, xmm4
          }
          *(float *)&v80 = (float)((float)(v103 * v52.m128_f32[0]) + (float)(v102 * COERCE_FLOAT(*boundingVolume))) + (float)(v54 * v104);
          _XMM3 = v80;
          __asm
          {
            vmaxss  xmm0, xmm3, xmm4
            vminss  xmm1, xmm3, xmm5
          }
          if ( *(float *)&_XMM0 <= _mm_shuffle_ps(v51, v51, 170).m128_f32[0] || *(float *)&_XMM1 >= COERCE_FLOAT(HIDWORD(*(unsigned __int128 *)boundingVolume)) )
            break;
          ++v49;
          ++boundingVolume;
          if ( v49 >= 7 )
          {
            if ( v46 >= 5 )
            {
              R_WarnOncePerFrame(R_WARN_VOL_TOO_MANY_ACTIVE_GPU_LIGHTGRIDS, 5i64, v47);
              goto LABEL_15;
            }
            v7 |= 1 << v47;
            ++v46;
            break;
          }
        }
        v47 = (unsigned int)(v47 + 1);
        if ( ++v48 < v6 )
          continue;
        break;
      }
    }
  }
LABEL_15:
  s_volumetricGlob.activeLightGridsMask[backendData->volumetricsIndex & 1] = v7;
}

/*
==============
R_VOL_EvaluateScattering
==============
*/
void R_VOL_EvaluateScattering(VolumetricDrawStream *drawStream, VolumetricScatteringResources *resources, unsigned int shaderPass)
{
  GfxTexture *data; 
  const GfxViewInfo *viewInfo; 
  ComputeCmdBufState *state; 
  int v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int CUMask; 
  bool v14; 
  vec4_t v15; 
  GfxImage *blackImage; 
  GfxShaderBufferView *views; 
  GfxTexture *Resident; 
  GfxTexture *textures; 
  VolumetricConstants consts; 

  data = (GfxTexture *)drawStream->data;
  Resident = data;
  viewInfo = drawStream->viewInfo;
  state = drawStream->state;
  textures = (GfxTexture *)g_worldDraw->iesLookupTexture;
  if ( viewInfo->volumetrics.sunBrightness > 0.0 && data[655].shaderRWView.rwSubresourceToTransition )
    v9 = 4;
  else
    v9 = 0;
  v10 = v9 | shaderPass;
  v11 = (v9 | shaderPass) & 0xFFFFFFFE;
  if ( drawStream->useLocalMedia )
    v11 = v10;
  v12 = v11;
  if ( viewInfo->volumetrics.spotBrightness == 0.0 && viewInfo->volumetrics.omniBrightness == 0.0 )
    v12 = v11 & 0xFFFFFFFD;
  if ( state->computeContextType != COMPUTE_CONTEXT_TYPE_GFX )
  {
    R_SetComputeLimitsPerCU(state, COMPUTECMD_SIMD_WALK_DEFAULT, r_volumetricsWaveLimit->current.unsignedInt, 0, 0);
    if ( r_volumetricsUseCUMask->current.integer )
    {
      CUMask = R_GetCUMask(GFX_CU_MASK_MODE_ASYNC_VOLUMETRICS);
      R_SetComputeCUMask(drawStream->state, CUMask);
    }
  }
  v14 = drawStream->useLocalMediaPrev != 0;
  memset_0(&consts, 0, sizeof(consts));
  R_VOL_SetConstantsCommon(&consts, viewInfo, VOLUMETRIC_PASS_SCATTER, v14);
  v15 = *(vec4_t *)&viewInfo->volumetrics.sunBrightness;
  consts.flags = shaderPass;
  consts.volumetricLightingScale = v15;
  R_UploadAndSetComputeConstants(state, 0, &consts, 0x140u, NULL);
  R_SetComputeShader(state, rgp.volumetricScatterComputeShader[v12]);
  views = &R_GetFrustumLightsReadLightBuffer(drawStream->viewInfo)->view;
  R_SetComputeViews(state, 19, 1, (const GfxShaderBufferView *const *)&views);
  views = &viewInfo->input.data->globalShadowConstantBuffer->view;
  R_SetComputeViews(state, 20, 1, (const GfxShaderBufferView *const *)&views);
  views = &resources->lightsClusterBuffer->view;
  R_SetComputeViews(state, 10, 1, (const GfxShaderBufferView *const *)&views);
  views = &s_volumetricGlob.volumetricObbBuffers[0].view + 2 * drawStream->toggle;
  R_SetComputeViews(state, 11, 1, (const GfxShaderBufferView *const *)&views);
  views = &s_volumetricGlob.volumetricVolumeBuffers[0].view + 2 * drawStream->toggle;
  R_SetComputeViews(state, 12, 1, (const GfxShaderBufferView *const *)&views);
  views = &resources->volumesClusterBuffer->view;
  R_SetComputeViews(state, 13, 1, (const GfxShaderBufferView *const *)&views);
  views = &resources->featureClusterBuffer->view;
  R_SetComputeViews(state, 29, 1, (const GfxShaderBufferView *const *)&views);
  views = &resources->froxelIDBuffer->view;
  R_SetComputeViews(state, 22, 1, (const GfxShaderBufferView *const *)&views);
  views = &R_CompressedSunShadow_GetBuffer()->view;
  R_SetComputeViews(state, 28, 1, (const GfxShaderBufferView *const *)&views);
  views = (GfxShaderBufferView *)R_Texture_GetResident(resources->sunShadowImage->textureId);
  R_SetComputeTextures(state, 0, 1, (const GfxTexture *const *)&views);
  views = (GfxShaderBufferView *)R_Texture_GetResident(rgp.cloudNoiseImage->textureId);
  R_SetComputeTextures(state, 2, 1, (const GfxTexture *const *)&views);
  views = (GfxShaderBufferView *)R_Texture_GetResident(resources->translucentSunShadowImage->textureId);
  R_SetComputeTextures(state, 3, 1, (const GfxTexture *const *)&views);
  views = (GfxShaderBufferView *)R_Texture_GetResident(resources->translucentSunShadowImage->textureId);
  R_SetComputeTextures(state, 23, 1, (const GfxTexture *const *)&views);
  views = (GfxShaderBufferView *)R_Texture_GetResident(resources->spotShadowCacheStale->textureId);
  R_SetComputeTextures(state, 4, 1, (const GfxTexture *const *)&views);
  textures = (GfxTexture *)R_Texture_GetResident((GfxTextureId)textures->shaderView.view);
  R_SetComputeTextures(state, 5, 1, (const GfxTexture *const *)&textures);
  R_SetComputeDescriptorTable(state, &s_volumetricNoiseTexturesArray[LODWORD(Resident[22681].shaderRWView.rwCounterResource)], 0xEu);
  Resident = (GfxTexture *)R_Texture_GetResident(rgp.hgPhaseFunction->textureId);
  R_SetComputeTextures(state, 8, 1, (const GfxTexture *const *)&Resident);
  Resident = (GfxTexture *)R_Texture_GetResident(resources->maxFloatzImage->textureId);
  R_SetComputeTextures(state, 9, 1, (const GfxTexture *const *)&Resident);
  Resident = (GfxTexture *)R_Texture_GetResident(resources->extinctionTemporalReadImage->textureId);
  R_SetComputeTextures(state, 15, 1, (const GfxTexture *const *)&Resident);
  Resident = (GfxTexture *)R_Texture_GetResident(resources->ambientImage->textureId);
  R_SetComputeTextures(state, 6, 1, (const GfxTexture *const *)&Resident);
  Resident = (GfxTexture *)R_Texture_GetResident(resources->visibilityPrevFrameImage->textureId);
  R_SetComputeTextures(state, 17, 1, (const GfxTexture *const *)&Resident);
  Resident = (GfxTexture *)R_Texture_GetResident(resources->scatterTemporalWriteImage->textureId);
  R_SetComputeRWTextures(state, 0, 1, (const GfxTexture *const *)&Resident);
  Resident = (GfxTexture *)R_Texture_GetResident(resources->scatterMomentsWriteImage->textureId);
  R_SetComputeRWTextures(state, 2, 1, (const GfxTexture *const *)&Resident);
  Resident = (GfxTexture *)R_Texture_GetResident(resources->extinctionTemporalWriteImage->textureId);
  R_SetComputeRWTextures(state, 1, 1, (const GfxTexture *const *)&Resident);
  blackImage = s_volumetricHeightfield;
  if ( !s_volumetricHeightfield )
    blackImage = rgp.blackImage;
  Resident = (GfxTexture *)R_Texture_GetResident(blackImage->textureId);
  R_SetComputeTextures(state, 33, 1, (const GfxTexture *const *)&Resident);
  if ( (s_volumetricGlob.voxelImageDepth & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 1544, ASSERT_TYPE_ASSERT, "(s_volumetricGlob.voxelImageDepth % 4 == 0)", (const char *)&queryFormat, "s_volumetricGlob.voxelImageDepth % 4 == 0") )
    __debugbreak();
  R_DispatchIndirect(state, resources->indirectScatteringBuffer->buffer, 32 * shaderPass);
  R_SetComputeDescriptorTable(state, NULL, 0xEu);
  if ( !drawStream->state->device && r_volumetricsUseCUMask->current.enabled )
    R_ResetComputeCUMask(drawStream->state);
}

/*
==============
R_VOL_FillIndirectScattering
==============
*/
void R_VOL_FillIndirectScattering(ComputeCmdBufState *state, const GfxViewInfo *viewInfo, const GfxWrappedBuffer *volClusterBuffer, const GfxWrappedBuffer *featureClusterBuffer, const GfxWrappedBuffer *lightClusterBuffer, const R_RT_BufferHandle *froxelIndirectBuffer, const R_RT_BufferHandle *froxelIDBuffer, const R_RT_ColorHandle *visibilityTexture)
{
  vec4_t v12; 
  const R_RT_Surface *Surface; 
  GfxShaderBufferRWView *views[2]; 
  VolumetricConstants consts; 

  if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 993, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  memset_0(&consts, 0, sizeof(consts));
  R_VOL_SetConstantsCommon(&consts, viewInfo, VOLUMETRIC_PASS_SCATTER, 0);
  if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 916, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  v12 = *(vec4_t *)&viewInfo->volumetrics.sunBrightness;
  consts.flags = 0;
  consts.volumetricLightingScale = v12;
  R_UploadAndSetComputeConstants(state, 0, &consts, 0x140u, NULL);
  R_SetComputeShader(state, rgp.fillIndirectScattering);
  views[0] = &R_RT_Handle::GetWrappedBuffer(&froxelIDBuffer->R_RT_Handle)->rwView;
  R_SetComputeRWViewsWithCounters(state, 1, 1, (const GfxShaderBufferRWView *const *)views, NULL);
  views[0] = &R_RT_Handle::GetWrappedBuffer(&froxelIndirectBuffer->R_RT_Handle)->rwView;
  R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)views, NULL);
  views[0] = (GfxShaderBufferRWView *)&volClusterBuffer->view;
  R_SetComputeViews(state, 13, 1, (const GfxShaderBufferView *const *)views);
  views[0] = (GfxShaderBufferRWView *)&featureClusterBuffer->view;
  R_SetComputeViews(state, 29, 1, (const GfxShaderBufferView *const *)views);
  views[0] = (GfxShaderBufferRWView *)&lightClusterBuffer->view;
  R_SetComputeViews(state, 10, 1, (const GfxShaderBufferView *const *)views);
  Surface = R_RT_Handle::GetSurface(&visibilityTexture->R_RT_Handle);
  views[0] = (GfxShaderBufferRWView *)R_Texture_GetResident(Surface->m_image.m_base.textureId);
  R_SetComputeTextures(state, 16, 1, (const GfxTexture *const *)views);
  R_Dispatch(state, (viewInfo->frustumGrid.clusterCountX + 3) >> 2, (viewInfo->frustumGrid.clusterCountY + 3) >> 2, (s_volumetricGlob.clusterImageDepth + 3) >> 2);
}

/*
==============
R_VOL_FreeRts
==============
*/

void __fastcall R_VOL_FreeRts(double _XMM0_8)
{
  R_RT_ColorHandle *scatterImage; 
  __int64 v2; 
  __int64 v3; 
  R_RT_ColorHandle *extinctionImage; 
  __int64 v5; 
  R_RT_ColorHandle *ambientVisibilityImage; 
  __int64 v7; 
  R_RT_BufferHandle *ambientLightingData; 
  R_RT_Handle tetIdxImage; 

  scatterImage = s_volumetricGlob.scatterImage;
  if ( R_RT_Handle::IsValid(s_volumetricGlob.scatterImage) )
  {
    v2 = 3i64;
    v3 = 3i64;
    do
    {
      tetIdxImage = scatterImage->R_RT_Handle;
      R_RT_DestroyInternal(&tetIdxImage);
      tetIdxImage.m_surfaceID = 0;
      ++scatterImage;
      tetIdxImage.m_tracking.m_allocCounter = 0;
      __asm { vpxor   xmm0, xmm0, xmm0 }
      *(_OWORD *)&tetIdxImage.m_tracking.m_name = *(_OWORD *)&_XMM0_8;
      scatterImage[-1] = (R_RT_ColorHandle)tetIdxImage;
      --v3;
    }
    while ( v3 );
    extinctionImage = s_volumetricGlob.extinctionImage;
    do
    {
      tetIdxImage = extinctionImage->R_RT_Handle;
      R_RT_DestroyInternal(&tetIdxImage);
      tetIdxImage.m_surfaceID = 0;
      ++extinctionImage;
      tetIdxImage.m_tracking.m_allocCounter = 0;
      __asm { vpxor   xmm0, xmm0, xmm0 }
      *(_OWORD *)&tetIdxImage.m_tracking.m_name = *(_OWORD *)&_XMM0_8;
      extinctionImage[-1] = (R_RT_ColorHandle)tetIdxImage;
      --v2;
    }
    while ( v2 );
    v5 = 2i64;
    ambientVisibilityImage = s_volumetricGlob.ambientVisibilityImage;
    v7 = 2i64;
    do
    {
      tetIdxImage = ambientVisibilityImage[-2].R_RT_Handle;
      R_RT_DestroyInternal(&tetIdxImage);
      __asm { vpxor   xmm0, xmm0, xmm0 }
      *(_OWORD *)&tetIdxImage.m_tracking.m_name = _XMM0;
      tetIdxImage.m_surfaceID = 0;
      tetIdxImage.m_tracking.m_allocCounter = 0;
      ambientVisibilityImage[-2] = (R_RT_ColorHandle)tetIdxImage;
      tetIdxImage = ambientVisibilityImage->R_RT_Handle;
      R_RT_DestroyInternal(&tetIdxImage);
      tetIdxImage.m_surfaceID = 0;
      ++ambientVisibilityImage;
      tetIdxImage.m_tracking.m_allocCounter = 0;
      __asm { vpxor   xmm0, xmm0, xmm0 }
      *(_OWORD *)&tetIdxImage.m_tracking.m_name = *(_OWORD *)&_XMM0_8;
      ambientVisibilityImage[-1] = (R_RT_ColorHandle)tetIdxImage;
      --v7;
    }
    while ( v7 );
    ambientLightingData = s_volumetricGlob.ambientLightingData;
    do
    {
      tetIdxImage = ambientLightingData[-11].R_RT_Handle;
      R_RT_DestroyInternal(&tetIdxImage);
      __asm { vpxor   xmm0, xmm0, xmm0 }
      *(_OWORD *)&tetIdxImage.m_tracking.m_name = _XMM0;
      tetIdxImage.m_surfaceID = 0;
      tetIdxImage.m_tracking.m_allocCounter = 0;
      ambientLightingData[-11] = (R_RT_BufferHandle)tetIdxImage;
      tetIdxImage = ambientLightingData->R_RT_Handle;
      R_RT_DestroyInternal(&tetIdxImage);
      __asm { vpxor   xmm0, xmm0, xmm0 }
      *(_OWORD *)&tetIdxImage.m_tracking.m_name = _XMM0;
      tetIdxImage.m_surfaceID = 0;
      tetIdxImage.m_tracking.m_allocCounter = 0;
      *ambientLightingData = (R_RT_BufferHandle)tetIdxImage;
      tetIdxImage = ambientLightingData[2].R_RT_Handle;
      R_RT_DestroyInternal(&tetIdxImage);
      __asm { vpxor   xmm0, xmm0, xmm0 }
      *(_OWORD *)&tetIdxImage.m_tracking.m_name = _XMM0;
      tetIdxImage.m_surfaceID = 0;
      tetIdxImage.m_tracking.m_allocCounter = 0;
      ambientLightingData[2] = (R_RT_BufferHandle)tetIdxImage;
      tetIdxImage = ambientLightingData[4].R_RT_Handle;
      R_RT_DestroyInternal(&tetIdxImage);
      tetIdxImage.m_surfaceID = 0;
      ++ambientLightingData;
      tetIdxImage.m_tracking.m_allocCounter = 0;
      __asm { vpxor   xmm0, xmm0, xmm0 }
      *(_OWORD *)&tetIdxImage.m_tracking.m_name = *(_OWORD *)&_XMM0_8;
      ambientLightingData[3] = (R_RT_BufferHandle)tetIdxImage;
      --v5;
    }
    while ( v5 );
    tetIdxImage = (R_RT_Handle)s_volumetricGlob.tetIdxImage;
    R_RT_DestroyInternal(&tetIdxImage);
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&tetIdxImage.m_tracking.m_name = _XMM0;
    tetIdxImage.m_surfaceID = 0;
    tetIdxImage.m_tracking.m_allocCounter = 0;
    s_volumetricGlob.tetIdxImage = (R_RT_ColorHandle)tetIdxImage;
    tetIdxImage = (R_RT_Handle)s_volumetricGlob.ambientSceneLumaImage;
    R_RT_DestroyInternal(&tetIdxImage);
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&tetIdxImage.m_tracking.m_name = _XMM0;
    tetIdxImage.m_surfaceID = 0;
    tetIdxImage.m_tracking.m_allocCounter = 0;
    s_volumetricGlob.ambientSceneLumaImage = (R_RT_ColorHandle)tetIdxImage;
    tetIdxImage = (R_RT_Handle)s_volumetricGlob.maxFloatZImage;
    R_RT_DestroyInternal(&tetIdxImage);
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&tetIdxImage.m_tracking.m_name = _XMM0;
    tetIdxImage.m_surfaceID = 0;
    tetIdxImage.m_tracking.m_allocCounter = 0;
    s_volumetricGlob.maxFloatZImage = (R_RT_ColorHandle)tetIdxImage;
    tetIdxImage = (R_RT_Handle)s_volumetricGlob.maskClusterBuffer;
    R_RT_DestroyInternal(&tetIdxImage);
    tetIdxImage.m_surfaceID = 0;
    tetIdxImage.m_tracking.m_allocCounter = 0;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&tetIdxImage.m_tracking.m_name = _XMM0;
    s_volumetricGlob.maskClusterBuffer = (R_RT_BufferHandle)tetIdxImage;
  }
}

/*
==============
R_VOL_FrustumGridCluster
==============
*/
void R_VOL_FrustumGridCluster(ComputeCmdBufState *state, const GfxViewInfo *viewInfo, const GfxBackEndData *data, const GfxWrappedRWBuffer *volumeClusterBuffer, const GfxWrappedRWBuffer *featureClusterBuffer)
{
  __int64 v5; 
  unsigned int v10; 
  GfxImage *blackImage; 
  ID3D12Resource *buffers[2]; 
  VolumetricConstants consts; 

  v5 = data->volumetricsIndex & 1;
  v10 = s_volumetricGlob.volumeCount[v5];
  R_UpdateGfxWrappedBuffer(&s_volumetricGlob.volumetricVolumeBuffers[v5], s_volumetricGlob.writeVolumetricVolumeData[v5], 144 * v10);
  R_UpdateGfxWrappedBuffer(&s_volumetricGlob.volumetricObbBuffers[v5], s_volumetricGlob.writeVolumetricObbData[v5], 60 * v10);
  if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 993, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  memset_0(&consts, 0, sizeof(consts));
  R_VOL_SetConstantsCommon(&consts, viewInfo, VOLUMETRIC_PASS_CLUSTERING, 0);
  R_UploadAndSetComputeConstants(state, 0, &consts, 0x140u, NULL);
  buffers[0] = data->globalSceneConstantBuffer->buffer;
  R_SetComputeConstantBuffers(state, 7, 1, buffers);
  R_SetComputeShader(state, rgp.frustumGridClusterVolumetricsComputeShader);
  blackImage = s_volumetricHeightfield;
  if ( !s_volumetricHeightfield )
    blackImage = rgp.blackImage;
  buffers[0] = (ID3D12Resource *)R_Texture_GetResident(blackImage->textureId);
  R_SetComputeTextures(state, 33, 1, (const GfxTexture *const *)buffers);
  buffers[0] = (ID3D12Resource *)&s_volumetricGlob.volumetricObbBuffers[v5].view;
  R_SetComputeViews(state, 11, 1, (const GfxShaderBufferView *const *)buffers);
  buffers[0] = (ID3D12Resource *)&volumeClusterBuffer->rwView;
  R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)buffers, NULL);
  buffers[0] = (ID3D12Resource *)&featureClusterBuffer->rwView;
  R_SetComputeRWViewsWithCounters(state, 1, 1, (const GfxShaderBufferRWView *const *)buffers, NULL);
  R_Dispatch(state, ((unsigned __int64)viewInfo->frustumGrid.clusterCountX + 3) >> 2, ((unsigned __int64)viewInfo->frustumGrid.clusterCountY + 3) >> 2, 8u);
}

/*
==============
R_VOL_GetAccumImages
==============
*/
void R_VOL_GetAccumImages(const GfxViewInfo *viewInfo, const GfxImage **scattering, const GfxImage **extinction, const GfxImage **visibility)
{
  R_RT_Image *p_m_image; 

  if ( R_UseBakedLighting() && viewInfo->volumetrics.enabled && (viewInfo->volumetrics.airDensity > 0.0 || R_VOL_UseLocalMedia(viewInfo->input.data, viewInfo)) )
  {
    *scattering = &R_RT_Handle::GetSurface(&s_volumetricGlob.scatterImage[2])->m_image.m_base;
    *extinction = &R_RT_Handle::GetSurface(&s_volumetricGlob.extinctionImage[2])->m_image.m_base;
    p_m_image = &R_RT_Handle::GetSurface(s_volumetricGlob.ambientVisibilityImage)->m_image;
  }
  else
  {
    *scattering = rgp.blackImage3D;
    *extinction = rgp.whiteImage3D;
    p_m_image = (R_RT_Image *)rgp.whiteImage;
  }
  *visibility = &p_m_image->m_base;
}

/*
==============
R_VOL_GetActiveLightGridsMask
==============
*/
__int64 R_VOL_GetActiveLightGridsMask(const GfxBackEndData *data)
{
  return s_volumetricGlob.activeLightGridsMask[data->volumetricsIndex & 1];
}

/*
==============
R_VOL_GetBestLightGrid
==============
*/
const GfxGpuLightGrid *R_VOL_GetBestLightGrid(const GfxBackEndData *data)
{
  if ( R_GetNumActiveLightGrids(data) <= 0 )
    return 0i64;
  else
    return *R_GetActiveLightGridsList(data);
}

/*
==============
R_VOL_GetClusterMaskView
==============
*/
$6354FE9254625F25F9BF74DDC4774D51 *R_VOL_GetClusterMaskView()
{
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v1; 

  Surface = R_RT_Handle::GetSurface(&s_volumetricGlob.maskClusterBuffer);
  v1 = Surface;
  if ( (Surface->m_rtFlagsInternal & 8) != 0 )
    return &Surface->1080;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  return &v1->1080;
}

/*
==============
R_VOL_GetFrustumDepth
==============
*/
__int64 R_VOL_GetFrustumDepth()
{
  return 128i64;
}

/*
==============
R_VOL_GetFrustumHeight
==============
*/
__int64 R_VOL_GetFrustumHeight(const GfxViewInfo *viewInfo)
{
  unsigned int sceneHeightStep0; 

  if ( viewInfo )
    sceneHeightStep0 = viewInfo->input.resolution.sceneHeightStep0;
  else
    sceneHeightStep0 = vidConfig.sceneHeight;
  if ( sceneHeightStep0 > s_volumetricGlob.baseMaxHeight )
    sceneHeightStep0 = s_volumetricGlob.baseMaxHeight;
  return (sceneHeightStep0 + 11) / 0xC;
}

/*
==============
R_VOL_GetFrustumWidth
==============
*/
__int64 R_VOL_GetFrustumWidth(const GfxViewInfo *viewInfo)
{
  unsigned int sceneWidthStep0; 

  if ( viewInfo )
    sceneWidthStep0 = viewInfo->input.resolution.sceneWidthStep0;
  else
    sceneWidthStep0 = vidConfig.sceneWidth;
  if ( sceneWidthStep0 > s_volumetricGlob.baseMaxWidth )
    sceneWidthStep0 = s_volumetricGlob.baseMaxWidth;
  return (sceneWidthStep0 + 11) / 0xC;
}

/*
==============
R_VOL_GetFrustumWords
==============
*/
__int64 R_VOL_GetFrustumWords(const unsigned int frame)
{
  return (s_volumetricGlob.volumeCount[frame & 1] + 31) >> 5;
}

/*
==============
R_VOL_GetMaxBaseHeight
==============
*/
__int64 R_VOL_GetMaxBaseHeight()
{
  return s_volumetricGlob.baseMaxHeight;
}

/*
==============
R_VOL_GetMaxBaseWidth
==============
*/
__int64 R_VOL_GetMaxBaseWidth()
{
  return s_volumetricGlob.baseMaxWidth;
}

/*
==============
R_VOL_GetVisibilityImage
==============
*/
R_RT_Image *R_VOL_GetVisibilityImage(const unsigned int index)
{
  return &R_RT_Handle::GetSurface(&s_volumetricGlob.visibilityImage[index])->m_image;
}

/*
==============
R_VOL_GetVoxelSizeX
==============
*/
__int64 R_VOL_GetVoxelSizeX(const GfxViewInfo *viewInfo)
{
  unsigned int width; 
  unsigned int sceneWidthStep0; 

  if ( viewInfo )
  {
    width = viewInfo->sceneViewport.width;
    sceneWidthStep0 = viewInfo->input.resolution.sceneWidthStep0;
  }
  else
  {
    width = vidConfig.sceneWidth;
    sceneWidthStep0 = vidConfig.sceneWidth;
  }
  if ( sceneWidthStep0 > s_volumetricGlob.baseMaxWidth )
    sceneWidthStep0 = s_volumetricGlob.baseMaxWidth;
  return ((sceneWidthStep0 + 11) / 0xC + width - 1) / ((sceneWidthStep0 + 11) / 0xC);
}

/*
==============
R_VOL_GetVoxelSizeY
==============
*/
__int64 R_VOL_GetVoxelSizeY(const GfxViewInfo *viewInfo)
{
  unsigned int height; 
  unsigned int sceneHeightStep0; 

  if ( viewInfo )
  {
    height = viewInfo->sceneViewport.height;
    sceneHeightStep0 = viewInfo->input.resolution.sceneHeightStep0;
  }
  else
  {
    height = vidConfig.sceneHeight;
    sceneHeightStep0 = vidConfig.sceneHeight;
  }
  if ( sceneHeightStep0 > s_volumetricGlob.baseMaxHeight )
    sceneHeightStep0 = s_volumetricGlob.baseMaxHeight;
  return ((sceneHeightStep0 + 11) / 0xC + height - 1) / ((sceneHeightStep0 + 11) / 0xC);
}

/*
==============
R_VOL_Init
==============
*/
void R_VOL_Init(void)
{
  GfxDescriptorTable *v0; 
  __int64 v1; 

  v0 = s_volumetricNoiseTexturesArray;
  v1 = 2i64;
  do
  {
    R_CreateGfxDescriptorTable(v0++, GfxDescriptorTableType_Textures, 0x40u, "volumetricNoiseTexturesArray");
    --v1;
  }
  while ( v1 );
}

/*
==============
R_VOL_InitWorld
==============
*/
void R_VOL_InitWorld(bool isFrontendScene)
{
  if ( s_volumetricHeightfield && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 180, ASSERT_TYPE_ASSERT, "(!s_volumetricHeightfield)", (const char *)&queryFormat, "!s_volumetricHeightfield") )
    __debugbreak();
  s_volumetricHeightfield = NULL;
  if ( !isFrontendScene )
  {
    if ( DB_XAssetExists(ASSET_TYPE_IMAGE, "fog_height_map") )
      s_volumetricHeightfield = Image_Register("fog_height_map", IMAGE_TRACK_WORLD);
  }
}

/*
==============
R_VOL_LazyAllocRts
==============
*/

void __fastcall R_VOL_LazyAllocRts(double _XMM0_8)
{
  R_RT_ColorHandle *scatterImage; 
  const char **v2; 
  __int64 v3; 
  R_RT_Handle v4; 
  bool v6; 
  __int64 v7; 
  R_RT_ColorHandle *extinctionImage; 
  const char **v9; 
  R_RT_Handle v10; 
  bool v12; 
  __m256i *ambientLightingData; 
  __int64 v14; 
  __int64 v15; 
  R_RT_Handle v16; 
  bool v18; 
  unsigned int v19; 
  GfxDataFormat v20; 
  __m256i *BufferInternal; 
  unsigned int v22; 
  GfxDataFormat v23; 
  __m256i *v24; 
  unsigned int v25; 
  GfxDataFormat v26; 
  __int64 v27; 
  R_RT_ColorHandle *visibilityImage; 
  const char **v29; 
  R_RT_Handle v30; 
  bool v32; 
  const char **v33; 
  R_RT_ColorHandle *ambientVisibilityImage; 
  __int64 v35; 
  R_RT_Handle v36; 
  bool v38; 
  __m256i v39; 
  bool v41; 
  R_RT_Flags rtFlags; 
  __m256i v43; 
  bool v45; 
  const dvar_t *v46; 
  const dvar_t *v47; 
  __m256i v48; 
  bool v50; 
  unsigned int v51; 
  R_RT_BufferHandle v52; 
  const char *mipLimita; 
  const char *mipLimitb; 
  const char *mipLimitc; 
  __int64 mipLimit; 
  __int64 format; 
  R_RT_Handle v58; 
  R_RT_Handle v59; 
  __int64 v60; 
  R_RT_Handle result; 

  scatterImage = s_volumetricGlob.scatterImage;
  if ( !R_RT_Handle::IsValid(s_volumetricGlob.scatterImage) )
  {
    v2 = s_volumetricScatterNames;
    v60 = 3i64;
    v3 = 3i64;
    do
    {
      v4 = *R_RT_CreateInternal(&result, s_volumetricGlob.voxelImageWidth, s_volumetricGlob.voxelImageHeight, s_volumetricGlob.voxelImageWidth, s_volumetricGlob.voxelImageHeight, s_volumetricGlob.voxelImageDepth, 1u, 1u, g_R_RT_renderTargetFmts[61], R_RT_Flag_RWView|R_RT_Flag_RTView|R_RT_Flag_VolumetricLayoutOverride, (R_RT_FlagsInternal)2, &colorBlack, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, *v2, 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp(360)");
      v59 = v4;
      v58 = v4;
      if ( LOWORD(_XMM0_8) )
      {
        R_RT_Handle::GetSurface(&v58);
        if ( (R_RT_Handle::GetSurface(&v58)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        {
          v4 = v58;
          __debugbreak();
        }
        else
        {
          v4 = v58;
        }
      }
      else
      {
        __asm { vpextrd rax, xmm0, 2 }
        if ( (_DWORD)_RAX )
        {
          v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
          v4 = v59;
          if ( v6 )
            __debugbreak();
        }
      }
      *scatterImage++ = (R_RT_ColorHandle)v4;
      ++v2;
      --v3;
    }
    while ( v3 );
    v7 = v60;
    extinctionImage = s_volumetricGlob.extinctionImage;
    v9 = s_volumetricExtinctionNames;
    do
    {
      v10 = *R_RT_CreateInternal(&result, s_volumetricGlob.voxelImageWidth, s_volumetricGlob.voxelImageHeight, s_volumetricGlob.voxelImageWidth, s_volumetricGlob.voxelImageHeight, s_volumetricGlob.voxelImageDepth, 1u, 1u, g_R_RT_renderTargetFmts[64], R_RT_Flag_RWView|R_RT_Flag_RTView|R_RT_Flag_VolumetricLayoutOverride, (R_RT_FlagsInternal)2, &colorBlack, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, *v9, 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp(362)");
      v59 = v10;
      v58 = v10;
      if ( LOWORD(_XMM0_8) )
      {
        R_RT_Handle::GetSurface(&v58);
        if ( (R_RT_Handle::GetSurface(&v58)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        {
          v10 = v58;
          __debugbreak();
        }
        else
        {
          v10 = v58;
        }
      }
      else
      {
        __asm { vpextrd rax, xmm0, 2 }
        if ( (_DWORD)_RAX )
        {
          v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
          v10 = v59;
          if ( v12 )
            __debugbreak();
        }
      }
      *extinctionImage++ = (R_RT_ColorHandle)v10;
      ++v9;
      --v7;
    }
    while ( v7 );
    ambientLightingData = (__m256i *)s_volumetricGlob.ambientLightingData;
    v14 = 0i64;
    v15 = 2i64;
    do
    {
      v16 = *R_RT_CreateInternal(&result, s_volumetricGlob.clusterImageWidth, s_volumetricGlob.clusterImageHeight, s_volumetricGlob.clusterImageWidth, s_volumetricGlob.clusterImageHeight, s_volumetricGlob.clusterImageDepth, 1u, 1u, g_R_RT_renderTargetFmts[61], R_RT_Flag_RWView|R_RT_Flag_RTView|R_RT_Flag_VolumetricLayoutOverride, (R_RT_FlagsInternal)2, &colorBlack, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, s_volumetricAmbientNames[v14], 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp(365)");
      v59 = v16;
      v58 = v16;
      if ( LOWORD(_XMM0_8) )
      {
        R_RT_Handle::GetSurface(&v58);
        if ( (R_RT_Handle::GetSurface(&v58)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        {
          v16 = v58;
          __debugbreak();
        }
        else
        {
          v16 = v58;
        }
      }
      else
      {
        __asm { vpextrd rax, xmm0, 2 }
        if ( (_DWORD)_RAX )
        {
          v18 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
          v16 = v59;
          if ( v18 )
            __debugbreak();
        }
      }
      v19 = g_R_RT_bufferFmts[11];
      v20 = g_R_RT_bufferFmts[11];
      mipLimita = s_volumetricAmbientLightingDataNames[v14];
      ambientLightingData[-11] = (__m256i)v16;
      BufferInternal = (__m256i *)R_RT_CreateBufferInternal((R_RT_BufferHandle *)&result, v19, 0x23F00u, v20, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, mipLimita, 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp(366)");
      v22 = g_R_RT_bufferFmts[12];
      v23 = g_R_RT_bufferFmts[12];
      mipLimitb = s_volumetricAmbientLightingAlphaNames[v14];
      *ambientLightingData = *BufferInternal;
      v24 = (__m256i *)R_RT_CreateBufferInternal((R_RT_BufferHandle *)&result, v22, 0x23F00u, v23, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, mipLimitb, 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp(367)");
      v25 = g_R_RT_bufferFmts[13];
      v26 = g_R_RT_bufferFmts[13];
      mipLimitc = s_volumetricAmbientLightingTetsNames[v14];
      ambientLightingData[2] = *v24;
      ++v14;
      ambientLightingData[4] = *(__m256i *)R_RT_CreateBufferInternal((R_RT_BufferHandle *)&result, v25, 0x23F00u, v26, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, mipLimitc, 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp(368)");
      ++ambientLightingData;
      --v15;
    }
    while ( v15 );
    v27 = 2i64;
    v60 = (__int64)s_volumetricVisibilityNames;
    visibilityImage = s_volumetricGlob.visibilityImage;
    v29 = s_volumetricVisibilityNames;
    do
    {
      v30 = *R_RT_CreateInternal(&result, s_volumetricGlob.voxelImageWidth, s_volumetricGlob.voxelImageHeight, s_volumetricGlob.voxelImageWidth, s_volumetricGlob.voxelImageHeight, 1u, 1u, 1u, g_R_RT_renderTargetFmts[59], R_RT_Flag_RWView|R_RT_Flag_RTView|R_RT_Flag_VolumetricLayoutOverride, (R_RT_FlagsInternal)2, &colorBlack, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, *v29, 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp(371)");
      v59 = v30;
      v58 = v30;
      if ( LOWORD(_XMM0_8) )
      {
        R_RT_Handle::GetSurface(&v58);
        if ( (R_RT_Handle::GetSurface(&v58)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        {
          v30 = v58;
          __debugbreak();
        }
        else
        {
          v30 = v58;
        }
      }
      else
      {
        __asm { vpextrd rax, xmm0, 2 }
        if ( (_DWORD)_RAX )
        {
          v32 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
          v30 = v59;
          if ( v32 )
            __debugbreak();
        }
      }
      *visibilityImage++ = (R_RT_ColorHandle)v30;
      ++v29;
      --v27;
    }
    while ( v27 );
    v33 = (const char **)v60;
    ambientVisibilityImage = s_volumetricGlob.ambientVisibilityImage;
    v35 = 2i64;
    do
    {
      v36 = *R_RT_CreateInternal(&result, s_volumetricGlob.clusterImageWidth, s_volumetricGlob.clusterImageHeight, s_volumetricGlob.clusterImageWidth, s_volumetricGlob.clusterImageHeight, 1u, 1u, 1u, g_R_RT_renderTargetFmts[59], R_RT_Flag_RWView|R_RT_Flag_RTView|R_RT_Flag_VolumetricLayoutOverride, (R_RT_FlagsInternal)2, &colorBlack, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, *v33, 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp(373)");
      v59 = v36;
      v58 = v36;
      if ( LOWORD(_XMM0_8) )
      {
        R_RT_Handle::GetSurface(&v58);
        if ( (R_RT_Handle::GetSurface(&v58)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        {
          v36 = v58;
          __debugbreak();
        }
        else
        {
          v36 = v58;
        }
      }
      else
      {
        __asm { vpextrd rax, xmm0, 2 }
        if ( (_DWORD)_RAX )
        {
          v38 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
          v36 = v59;
          if ( v38 )
            __debugbreak();
        }
      }
      *ambientVisibilityImage++ = (R_RT_ColorHandle)v36;
      ++v33;
      --v35;
    }
    while ( v35 );
    v39 = *(__m256i *)R_RT_CreateInternal(&result, s_volumetricGlob.clusterImageWidth, s_volumetricGlob.clusterImageHeight, s_volumetricGlob.clusterImageWidth, s_volumetricGlob.clusterImageHeight, s_volumetricGlob.clusterImageDepth, 1u, 1u, g_R_RT_renderTargetFmts[41], R_RT_Flag_RWView|R_RT_Flag_RTView|R_RT_Flag_VolumetricLayoutOverride, (R_RT_FlagsInternal)2, &colorBlack, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "vol tetidx", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp(375)");
    v59 = (R_RT_Handle)v39;
    v58 = (R_RT_Handle)v39;
    if ( LOWORD(_XMM0_8) )
    {
      R_RT_Handle::GetSurface(&v58);
      if ( (R_RT_Handle::GetSurface(&v58)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        v39 = (__m256i)v58;
        __debugbreak();
      }
      else
      {
        v39 = (__m256i)v58;
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        v41 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        v39 = (__m256i)v59;
        if ( v41 )
          __debugbreak();
      }
    }
    rtFlags = R_RT_Flag_RWView|R_RT_Flag_RTView;
    s_volumetricGlob.tetIdxImage = (R_RT_ColorHandle)v39;
    v43 = *(__m256i *)R_RT_CreateInternal(&result, s_volumetricGlob.clusterImageWidth, s_volumetricGlob.clusterImageHeight, s_volumetricGlob.clusterImageWidth, s_volumetricGlob.clusterImageHeight, 1u, 1u, 1u, g_R_RT_renderTargetFmts[61], R_RT_Flag_RWView|R_RT_Flag_RTView, (R_RT_FlagsInternal)2, &colorBlack, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "vol ambient scene luma", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp(376)");
    v59 = (R_RT_Handle)v43;
    v58 = (R_RT_Handle)v43;
    if ( LOWORD(_XMM0_8) )
    {
      R_RT_Handle::GetSurface(&v58);
      if ( (R_RT_Handle::GetSurface(&v58)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        v43 = (__m256i)v58;
        __debugbreak();
      }
      else
      {
        v43 = (__m256i)v58;
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        v45 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        v43 = (__m256i)v59;
        if ( v45 )
          __debugbreak();
      }
    }
    v46 = r_deviceDebug;
    s_volumetricGlob.ambientSceneLumaImage = (R_RT_ColorHandle)v43;
    if ( !r_deviceDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v46);
    if ( !v46->current.enabled )
    {
      v47 = DCONST_DVARBOOL_r_esramPostFX;
      if ( !DCONST_DVARBOOL_r_esramPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramPostFX") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v47);
      if ( v47->current.enabled )
        rtFlags = R_RT_Flag_RWView|R_RT_Flag_RTView|R_RT_Flag_PreferESRAM;
    }
    v48 = *(__m256i *)R_RT_CreateInternal(&result, s_volumetricGlob.voxelImageWidth, s_volumetricGlob.voxelImageHeight, s_volumetricGlob.voxelImageWidth, s_volumetricGlob.voxelImageHeight, 1u, 1u, 1u, g_R_RT_renderTargetFmts[47], rtFlags, (R_RT_FlagsInternal)2, &colorBlack, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Volumetric FloatZ Difference", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp(377)");
    v59 = (R_RT_Handle)v48;
    v58 = (R_RT_Handle)v48;
    if ( LOWORD(_XMM0_8) )
    {
      R_RT_Handle::GetSurface(&v58);
      if ( (R_RT_Handle::GetSurface(&v58)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        v48 = (__m256i)v58;
        __debugbreak();
      }
      else
      {
        v48 = (__m256i)v58;
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        v50 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        v48 = (__m256i)v59;
        if ( v50 )
          __debugbreak();
      }
    }
    s_volumetricGlob.maxFloatZImage = (R_RT_ColorHandle)v48;
    v51 = s_volumetricGlob.maxClusterCountX * s_volumetricGlob.maxClusterCountY * s_volumetricGlob.maxClusterCountZ;
    if ( v51 >= 0x1000000 )
    {
      LODWORD(format) = 0x1000000;
      LODWORD(mipLimit) = s_volumetricGlob.maxClusterCountX * s_volumetricGlob.maxClusterCountY * s_volumetricGlob.maxClusterCountZ;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 380, ASSERT_TYPE_ASSERT, "( maxClusterCount ) < ( 1 << 24 )", "%s < %s\n\t%i, %i", "maxClusterCount", "1 << 24", mipLimit, format) )
        __debugbreak();
    }
    v52 = *R_RT_CreateBufferInternal((R_RT_BufferHandle *)&result, 4u, 8 * v51, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_GENERIC_READ, "vol masks cluster buffer", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp(381)");
    *(_QWORD *)&s_volumetricGlob.prevFrameAmbientValid = 0i64;
    s_volumetricGlob.maskClusterBuffer = v52;
  }
}

/*
==============
R_VOL_MaxFloatZ
==============
*/
void R_VOL_MaxFloatZ(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxImage *srcVolFloatZRt, const GfxImage *srcAmbientFloatZRt, const R_RT_Handle *dstMaxFloatZRt, const R_RT_Handle *dstAmbientMaxFloatZRt, const R_RT_Handle *dstVolVisibilityRt, const R_RT_Handle *dstAmbientVisibilityRt)
{
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v13; 
  const R_RT_Surface *v14; 
  const R_RT_Surface *v15; 
  GfxTexture *textures; 
  int height; 
  int width; 
  VolumetricConstants consts; 

  width = R_RT_Handle::GetSurface((R_RT_Handle *)dstMaxFloatZRt)->m_image.m_base.width;
  height = R_RT_Handle::GetSurface((R_RT_Handle *)dstMaxFloatZRt)->m_image.m_base.height;
  if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 993, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  memset_0(&consts, 0, sizeof(consts));
  R_VOL_SetConstantsCommon(&consts, viewInfo, VOLUMETRIC_PASS_MAX_FLOATZ, 0);
  R_VOL_SetConstantsMaxFloatZ(&consts, viewInfo);
  R_UploadAndSetComputeConstants(computeState, 0, &consts, 0x140u, NULL);
  R_SetComputeShader(computeState, rgp.maxFloatZComputeShader);
  textures = (GfxTexture *)R_Texture_GetResident(srcVolFloatZRt->textureId);
  R_SetComputeTextures(computeState, 14, 1, (const GfxTexture *const *)&textures);
  textures = (GfxTexture *)R_Texture_GetResident(srcAmbientFloatZRt->textureId);
  R_SetComputeTextures(computeState, 15, 1, (const GfxTexture *const *)&textures);
  Surface = R_RT_Handle::GetSurface((R_RT_Handle *)dstMaxFloatZRt);
  textures = (GfxTexture *)R_Texture_GetResident(Surface->m_image.m_base.textureId);
  R_SetComputeRWTextures(computeState, 0, 1, (const GfxTexture *const *)&textures);
  v13 = R_RT_Handle::GetSurface((R_RT_Handle *)dstAmbientMaxFloatZRt);
  textures = (GfxTexture *)R_Texture_GetResident(v13->m_image.m_base.textureId);
  R_SetComputeRWTextures(computeState, 1, 1, (const GfxTexture *const *)&textures);
  v14 = R_RT_Handle::GetSurface((R_RT_Handle *)dstVolVisibilityRt);
  textures = (GfxTexture *)R_Texture_GetResident(v14->m_image.m_base.textureId);
  R_SetComputeRWTextures(computeState, 2, 1, (const GfxTexture *const *)&textures);
  v15 = R_RT_Handle::GetSurface((R_RT_Handle *)dstAmbientVisibilityRt);
  textures = (GfxTexture *)R_Texture_GetResident(v15->m_image.m_base.textureId);
  R_SetComputeRWTextures(computeState, 3, 1, (const GfxTexture *const *)&textures);
  R_Dispatch(computeState, (unsigned int)(width + 7) >> 3, (unsigned int)(height + 7) >> 3, 1u);
}

/*
==============
R_VOL_SampleAmbientMultiLightGrid
==============
*/
void R_VOL_SampleAmbientMultiLightGrid(ComputeCmdBufState *state, const GfxViewInfo *viewInfo, const R_RT_Handle *visibilityCurrent, const R_RT_Handle *floatZ, const R_RT_Handle *sampledLighting, const R_RT_Handle *sampledLightingAlpha, const R_RT_Handle *tetIndexCurr, const R_RT_Handle *tetIndexPrev)
{
  ComputeShader *sampleMultiLightGridVolumetricIso; 
  int v13; 
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v15; 
  R_RT_Handle *v16; 
  const GfxWrappedRWBuffer *WrappedBuffer; 
  bool IsValid; 
  const GfxBackEndData *data; 
  bool v20; 
  const unsigned int *PrevFrameLightGridIndicesList; 
  unsigned int volumetricsIndex; 
  unsigned int v24; 
  GfxCmdBufInput *p_input; 
  int v27; 
  int prevFrameActiveGpuLightGridIndex; 
  const GfxGpuLightGrid *v29; 
  unsigned int zCount; 
  unsigned int yCount; 
  unsigned int xCount; 
  const GfxGpuLightGrid **ActiveLightGridsList; 
  const unsigned int *v34; 
  GfxShaderBufferView *views; 
  int numActiveLightGrids; 

  ((void (__fastcall *)(GfxDevice *, __int64, _QWORD, __int64))state->device->m_pFunction[22].AddRef)(state->device, 0x8000000i64, 0i64, 0xFFFFFFFF00i64);
  if ( s_volumetricGlob.clusterImageDepth != 32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 1110, ASSERT_TYPE_ASSERT, "(s_volumetricGlob.clusterImageDepth == ( ( 128 + 4 - 1 ) / 4 ))", (const char *)&queryFormat, "s_volumetricGlob.clusterImageDepth == R_VOLUMETRIC_GI_FRUSTUM_DEPTH") )
    __debugbreak();
  sampleMultiLightGridVolumetricIso = rgp.sampleMultiLightGridVolumetricIso;
  xCount = (viewInfo->frustumGrid.clusterCountX + 3) >> 2;
  yCount = (viewInfo->frustumGrid.clusterCountY + 3) >> 2;
  zCount = (s_volumetricGlob.clusterImageDepth + 3) >> 2;
  if ( viewInfo->volumetrics.sunAnisotropy != 0.0 )
    sampleMultiLightGridVolumetricIso = rgp.sampleMultiLightGridVolumetricAniso;
  R_SetComputeShader(state, sampleMultiLightGridVolumetricIso);
  views = &R_GetFallbackProbe()->view;
  R_SetComputeViews(state, 9, 1, (const GfxShaderBufferView *const *)&views);
  v13 = 0;
  R_VOL_SetConstants(state, viewInfo, VOLUMETRIC_PASS_LIGHTGRID, 0, 0);
  views = &R_GetActiveLightGrids(viewInfo->input.data)->view;
  R_SetComputeViews(state, 27, 1, (const GfxShaderBufferView *const *)&views);
  Surface = R_RT_Handle::GetSurface((R_RT_Handle *)visibilityCurrent);
  views = (GfxShaderBufferView *)R_Texture_GetResident(Surface->m_image.m_base.textureId);
  R_SetComputeTextures(state, 16, 1, (const GfxTexture *const *)&views);
  v15 = R_RT_Handle::GetSurface((R_RT_Handle *)floatZ);
  views = (GfxShaderBufferView *)R_Texture_GetResident(v15->m_image.m_base.textureId);
  R_SetComputeTextures(state, 19, 1, (const GfxTexture *const *)&views);
  v16 = (R_RT_Handle *)tetIndexPrev;
  if ( R_RT_Handle::IsValid((R_RT_Handle *)tetIndexPrev) )
    WrappedBuffer = R_RT_Handle::GetWrappedBuffer(v16);
  else
    WrappedBuffer = (const GfxWrappedRWBuffer *)&gfxBuf.dummyBuffer;
  views = &WrappedBuffer->view;
  R_SetComputeViews(state, 26, 1, (const GfxShaderBufferView *const *)&views);
  views = (GfxShaderBufferView *)&R_RT_Handle::GetWrappedBuffer((R_RT_Handle *)sampledLighting)->rwView;
  R_SetComputeRWViewsWithCounters(state, 3, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
  views = (GfxShaderBufferView *)&R_RT_Handle::GetWrappedBuffer((R_RT_Handle *)sampledLightingAlpha)->rwView;
  R_SetComputeRWViewsWithCounters(state, 4, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
  views = (GfxShaderBufferView *)&R_RT_Handle::GetWrappedBuffer((R_RT_Handle *)tetIndexCurr)->rwView;
  R_SetComputeRWViewsWithCounters(state, 5, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
  IsValid = R_RT_Handle::IsValid(v16);
  data = viewInfo->input.data;
  v20 = IsValid;
  LOBYTE(views) = IsValid;
  ActiveLightGridsList = R_GetActiveLightGridsList(data);
  PrevFrameLightGridIndicesList = R_GetPrevFrameLightGridIndicesList(viewInfo->input.data);
  v34 = PrevFrameLightGridIndicesList;
  volumetricsIndex = viewInfo->input.data->volumetricsIndex;
  _EDI = s_volumetricGlob.activeLightGridsMask[volumetricsIndex & 1];
  if ( v20 )
    v24 = s_volumetricGlob.activeLightGridsMask[((_BYTE)volumetricsIndex - 1) & 1];
  else
    v24 = 0;
  numActiveLightGrids = __popcnt(_EDI);
  if ( _EDI )
  {
    p_input = &viewInfo->input;
    do
    {
      __asm { tzcnt   r14d, edi }
      v27 = PrevFrameLightGridIndicesList[_ER14];
      if ( v27 >= 0 && ((1 << v27) & v24) != 0 )
        prevFrameActiveGpuLightGridIndex = __popcnt(v24 & ((1 << v27) - 1));
      else
        prevFrameActiveGpuLightGridIndex = -1;
      v29 = ActiveLightGridsList[_ER14];
      RB_GpuLightGrid_SetResouces(state, p_input, v29);
      R_VOL_SetLightGridConstants(state, viewInfo, v29, _ER14, v13, prevFrameActiveGpuLightGridIndex, numActiveLightGrids, (bool)views);
      R_Dispatch(state, xCount, yCount, zCount);
      ++v13;
      _EDI &= _EDI - 1;
      p_input = &viewInfo->input;
      PrevFrameLightGridIndicesList = v34;
    }
    while ( _EDI );
  }
}

/*
==============
R_VOL_SampleLightgridImages
==============
*/
void R_VOL_SampleLightgridImages(ComputeCmdBufState *state, const GfxViewInfo *viewInfo, const R_RT_Handle *ambientImageRead, const R_RT_Handle *ambientImageWrite, const R_RT_Handle *ambientSceneLumaImageWrite, const R_RT_Handle *tetIdxImage, const R_RT_Handle *maxFloatZ, const R_RT_Handle *floatZ, const R_RT_Handle *visibilityCurrent, const GfxImage *visibilityPrev)
{
  const R_RT_Surface *Surface; 
  R_RT_Handle *v15; 
  const R_RT_Surface *v16; 
  ComputeShader *sampleLightGridVolumetricIsoSkylight; 
  GfxImage *SVDBasis; 
  ComputeShader *sampleLightGridVolumetricIso; 
  const GfxBackEndData *data; 
  const GfxGpuLightGrid *v21; 
  bool temporalValid; 
  GfxTextureId textureId; 
  const R_RT_Surface *v24; 
  const R_RT_Surface *v25; 
  const R_RT_Surface *v26; 
  const R_RT_Surface *v27; 
  const R_RT_Surface *v28; 
  const R_RT_Surface *v29; 

  ((void (__fastcall *)(GfxDevice *, __int64, _QWORD, __int64))state->device->m_pFunction[22].AddRef)(state->device, 0x8000000i64, 0i64, 0xFFFFFFFF00i64);
  if ( !ambientImageRead->m_surfaceID )
  {
    Surface = R_RT_Handle::GetSurface((R_RT_Handle *)tetIdxImage);
    R_ClearImage_Uint(state, &Surface->m_image.m_base, 0xFFFFFFFF, PIPE_FLUSH_PARTIAL);
  }
  v15 = (R_RT_Handle *)maxFloatZ;
  if ( !maxFloatZ->m_surfaceID )
  {
    v16 = R_RT_Handle::GetSurface((R_RT_Handle *)maxFloatZ);
    R_ClearImage_Float(state, &v16->m_image.m_base, 3.4028235e38, PIPE_FLUSH_PARTIAL);
  }
  R_VOL_SetConstants(state, viewInfo, VOLUMETRIC_PASS_LIGHTGRID, 0, 0);
  if ( s_world.precomputedSkyIllumination.boxMin.v[0] < s_world.precomputedSkyIllumination.boxMax.v[0] && r_enablePrecomputedSkyIllumination->current.enabled )
  {
    sampleLightGridVolumetricIsoSkylight = rgp.sampleLightGridVolumetricIsoSkylight;
    if ( viewInfo->volumetrics.sunAnisotropy != 0.0 )
      sampleLightGridVolumetricIsoSkylight = rgp.sampleLightGridVolumetricAnisoSkylight;
    R_SetComputeShader(state, sampleLightGridVolumetricIsoSkylight);
    maxFloatZ = (const R_RT_Handle *)R_Texture_GetResident(s_world.precomputedSkyIllumination.heightMap->textureId);
    R_SetComputeTextures(state, 29, 1, (const GfxTexture *const *)&maxFloatZ);
    maxFloatZ = (const R_RT_Handle *)R_Texture_GetResident(s_world.precomputedSkyIllumination.detailMask->textureId);
    R_SetComputeTextures(state, 30, 1, (const GfxTexture *const *)&maxFloatZ);
    maxFloatZ = (const R_RT_Handle *)R_Texture_GetResident(s_world.precomputedSkyIllumination.SVDCoefficient->textureId);
    R_SetComputeTextures(state, 31, 1, (const GfxTexture *const *)&maxFloatZ);
    SVDBasis = s_world.precomputedSkyIllumination.SVDBasis;
  }
  else
  {
    sampleLightGridVolumetricIso = rgp.sampleLightGridVolumetricIso;
    if ( viewInfo->volumetrics.sunAnisotropy != 0.0 )
      sampleLightGridVolumetricIso = rgp.sampleLightGridVolumetricAniso;
    R_SetComputeShader(state, sampleLightGridVolumetricIso);
    maxFloatZ = (const R_RT_Handle *)R_Texture_GetResident(rgp.blackImage->textureId);
    R_SetComputeTextures(state, 29, 1, (const GfxTexture *const *)&maxFloatZ);
    maxFloatZ = (const R_RT_Handle *)R_Texture_GetResident(rgp.whiteImage->textureId);
    R_SetComputeTextures(state, 30, 1, (const GfxTexture *const *)&maxFloatZ);
    maxFloatZ = (const R_RT_Handle *)R_Texture_GetResident(rgp.blackImage->textureId);
    R_SetComputeTextures(state, 31, 1, (const GfxTexture *const *)&maxFloatZ);
    SVDBasis = rgp.blackImage;
  }
  maxFloatZ = (const R_RT_Handle *)R_Texture_GetResident(SVDBasis->textureId);
  R_SetComputeTextures(state, 32, 1, (const GfxTexture *const *)&maxFloatZ);
  data = viewInfo->input.data;
  if ( R_GetNumActiveLightGrids(data) <= 0 )
    v21 = NULL;
  else
    v21 = *R_GetActiveLightGridsList(data);
  RB_GpuLightGrid_SetResouces(state, &viewInfo->input, v21);
  temporalValid = R_RT_Handle::IsValid((R_RT_Handle *)ambientImageRead);
  R_VOL_SetLightGridConstants(state, viewInfo, v21, 0, 0, 0, 1, temporalValid);
  maxFloatZ = (const R_RT_Handle *)&R_GetFallbackProbe()->view;
  R_SetComputeViews(state, 9, 1, (const GfxShaderBufferView *const *)&maxFloatZ);
  if ( R_RT_Handle::IsValid((R_RT_Handle *)ambientImageRead) )
    textureId = R_RT_Handle::GetSurface((R_RT_Handle *)ambientImageRead)->m_image.m_base.textureId;
  else
    textureId = rgp.blackImage3D->textureId;
  maxFloatZ = (const R_RT_Handle *)R_Texture_GetResident(textureId);
  R_SetComputeTextures(state, 10, 1, (const GfxTexture *const *)&maxFloatZ);
  v24 = R_RT_Handle::GetSurface(v15);
  maxFloatZ = (const R_RT_Handle *)R_Texture_GetResident(v24->m_image.m_base.textureId);
  R_SetComputeTextures(state, 18, 1, (const GfxTexture *const *)&maxFloatZ);
  v25 = R_RT_Handle::GetSurface((R_RT_Handle *)floatZ);
  maxFloatZ = (const R_RT_Handle *)R_Texture_GetResident(v25->m_image.m_base.textureId);
  R_SetComputeTextures(state, 19, 1, (const GfxTexture *const *)&maxFloatZ);
  v26 = R_RT_Handle::GetSurface((R_RT_Handle *)visibilityCurrent);
  maxFloatZ = (const R_RT_Handle *)R_Texture_GetResident(v26->m_image.m_base.textureId);
  R_SetComputeTextures(state, 16, 1, (const GfxTexture *const *)&maxFloatZ);
  maxFloatZ = (const R_RT_Handle *)R_Texture_GetResident(visibilityPrev->textureId);
  R_SetComputeTextures(state, 17, 1, (const GfxTexture *const *)&maxFloatZ);
  v27 = R_RT_Handle::GetSurface((R_RT_Handle *)ambientImageWrite);
  maxFloatZ = (const R_RT_Handle *)R_Texture_GetResident(v27->m_image.m_base.textureId);
  R_SetComputeRWTextures(state, 0, 1, (const GfxTexture *const *)&maxFloatZ);
  v28 = R_RT_Handle::GetSurface((R_RT_Handle *)tetIdxImage);
  maxFloatZ = (const R_RT_Handle *)R_Texture_GetResident(v28->m_image.m_base.textureId);
  R_SetComputeRWTextures(state, 1, 1, (const GfxTexture *const *)&maxFloatZ);
  v29 = R_RT_Handle::GetSurface((R_RT_Handle *)ambientSceneLumaImageWrite);
  maxFloatZ = (const R_RT_Handle *)R_Texture_GetResident(v29->m_image.m_base.textureId);
  R_SetComputeRWTextures(state, 2, 1, (const GfxTexture *const *)&maxFloatZ);
  if ( viewInfo->frustumGrid.clusterCountX != R_RT_Handle::GetSurface((R_RT_Handle *)ambientImageWrite)->m_image.m_base.width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 1336, ASSERT_TYPE_ASSERT, "(viewInfo->frustumGrid.clusterCountX == ambientImageWrite.GetImage()->width)", (const char *)&queryFormat, "viewInfo->frustumGrid.clusterCountX == ambientImageWrite.GetImage()->width") )
    __debugbreak();
  if ( viewInfo->frustumGrid.clusterCountY != R_RT_Handle::GetSurface((R_RT_Handle *)ambientImageWrite)->m_image.m_base.height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 1337, ASSERT_TYPE_ASSERT, "(viewInfo->frustumGrid.clusterCountY == ambientImageWrite.GetImage()->height)", (const char *)&queryFormat, "viewInfo->frustumGrid.clusterCountY == ambientImageWrite.GetImage()->height") )
    __debugbreak();
  if ( s_volumetricGlob.clusterImageDepth != R_RT_Handle::GetSurface((R_RT_Handle *)ambientImageWrite)->m_image.m_base.depth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 1338, ASSERT_TYPE_ASSERT, "(s_volumetricGlob.clusterImageDepth == ambientImageWrite.GetImage()->depth)", (const char *)&queryFormat, "s_volumetricGlob.clusterImageDepth == ambientImageWrite.GetImage()->depth") )
    __debugbreak();
  R_Dispatch(state, (viewInfo->frustumGrid.clusterCountX + 3) >> 2, (viewInfo->frustumGrid.clusterCountY + 3) >> 2, (s_volumetricGlob.clusterImageDepth + 3) >> 2);
}

/*
==============
R_VOL_SetConstants
==============
*/
void R_VOL_SetConstants(ComputeCmdBufState *state, const GfxViewInfo *viewInfo, const VolumetricPass pass, bool temporalBlendExtinction, unsigned int shaderFlag)
{
  __int32 v9; 
  __int32 v10; 
  const dvar_t *v11; 
  VolumetricConstants consts; 

  if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 993, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  memset_0(&consts, 0, sizeof(consts));
  R_VOL_SetConstantsCommon(&consts, viewInfo, pass, temporalBlendExtinction);
  if ( pass )
  {
    v9 = pass - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        if ( v10 == 2 )
        {
          if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 916, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
            __debugbreak();
          consts.volumetricLightingScale = *(vec4_t *)&viewInfo->volumetrics.sunBrightness;
          consts.flags = shaderFlag;
        }
      }
      else
      {
        v11 = r_volumetricsAmbientBlur;
        if ( !r_volumetricsAmbientBlur && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 648, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v11);
        consts.ambientBlurRadius = v11->current.value * 0.5;
      }
    }
    else
    {
      if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 895, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
        __debugbreak();
      if ( viewInfo->volumetrics.teleported )
        consts.flags |= 1u;
    }
  }
  else
  {
    R_VOL_SetConstantsMaxFloatZ(&consts, viewInfo);
  }
  R_UploadAndSetComputeConstants(state, 0, &consts, 0x140u, NULL);
}

/*
==============
R_VOL_SetConstantsCommon
==============
*/
void R_VOL_SetConstantsCommon(VolumetricConstants *consts, const GfxViewInfo *viewInfo, const VolumetricPass pass, bool temporalBlendExtinction)
{
  __int64 v8; 
  __int64 v9; 
  float densityTemporalFactor; 
  float width; 
  __int64 height; 
  float v15; 
  float clusterCountX; 
  float clusterCountY; 
  unsigned int volumetricsIndex; 
  __int64 v19; 
  tmat44_t<vec4_t> mtx; 

  if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 825, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  v8 = (__int64)(int)viewInfo->clientIndex << 6;
  *(__m256i *)consts->viewProjMatrixPrevFrame.m.m[0].v = *(__m256i *)((char *)s_volumetricGlob.viewProjMatrixPrevFrame[0].m.m[0].v + v8);
  *(__m256i *)consts->viewProjMatrixPrevFrame.m.row2.v = *(__m256i *)((char *)s_volumetricGlob.viewProjMatrixPrevFrame[0].m.row2.v + v8);
  MatrixForViewerOrthogonal(&viewInfo->viewParmsSet.frames[0].viewParms.camera.origin, &viewInfo->viewParmsSet.frames[0].viewParms.camera.axis, &mtx);
  MatrixMultiply44Aligned(&mtx, &viewInfo->viewParmsSet.frames[0].viewParms.projectionMatrix.m, &consts->viewProjMatrix.m);
  if ( pass == VOLUMETRIC_PASS_ACCUMULATE )
  {
    v9 = (__int64)(int)viewInfo->clientIndex << 6;
    *(__m256i *)((char *)s_volumetricGlob.viewProjMatrixPrevFrame[0].m.m[0].v + v9) = *(__m256i *)consts->viewProjMatrix.m.m[0].v;
    *(__m256i *)((char *)s_volumetricGlob.viewProjMatrixPrevFrame[0].m.row2.v + v9) = *(__m256i *)consts->viewProjMatrix.m.row2.v;
  }
  consts->airDensity = viewInfo->volumetrics.airDensity * 0.0099999998;
  consts->absorption = viewInfo->volumetrics.absorption;
  consts->albedo.v[0] = viewInfo->volumetrics.albedo.v[0];
  consts->albedo.v[1] = viewInfo->volumetrics.albedo.v[1];
  consts->albedo.v[2] = viewInfo->volumetrics.albedo.v[2];
  consts->sunAnisotropy = viewInfo->volumetrics.sunAnisotropy;
  consts->attenuationClamp = viewInfo->volumetrics.attenuationClamp;
  consts->bulbAttenClampSq = viewInfo->volumetrics.bulbAttenClamp * viewInfo->volumetrics.bulbAttenClamp;
  densityTemporalFactor = 0.0;
  consts->volumeCount = s_volumetricGlob.volumeCount[viewInfo->input.data->volumetricsIndex & 1];
  *(_QWORD *)&consts->heightFogBase = LODWORD(viewInfo->volumetrics.heightFogBaseHeight);
  _XMM0 = LODWORD(viewInfo->volumetrics.heightFogHalfPlaneDistance);
  if ( *(float *)&_XMM0 != 0.0 )
  {
    __asm { vmaxss  xmm1, xmm0, cs:__real@3dcccccd }
    consts->heightFogExponent = -0.69314718 / *(float *)&_XMM1;
  }
  width = (float)viewInfo->sceneViewport.width;
  height = viewInfo->sceneViewport.height;
  consts->renderTargetSize.v[0] = width;
  consts->renderTargetSize.v[2] = 1.0 / width;
  v15 = (float)height;
  consts->renderTargetSize.v[1] = v15;
  consts->renderTargetSize.v[3] = 1.0 / v15;
  consts->frustumSize.v[0] = viewInfo->frustumGrid.voxelCountX;
  consts->frustumSize.v[1] = viewInfo->frustumGrid.voxelCountY;
  consts->frustumSize.v[2] = 128;
  clusterCountX = (float)viewInfo->frustumGrid.clusterCountX;
  consts->clusterSize.v[0] = clusterCountX;
  clusterCountY = (float)viewInfo->frustumGrid.clusterCountY;
  consts->clusterSize.v[1] = clusterCountY;
  consts->temporalBlend.v[0] = viewInfo->volumetrics.scatterTemporalFactor;
  if ( temporalBlendExtinction )
    densityTemporalFactor = viewInfo->volumetrics.densityTemporalFactor;
  consts->temporalBlend.v[1] = densityTemporalFactor;
  LODWORD(consts->temporalBlend.v[2]) = r_volumetricsGamma->current.integer;
  consts->temporalBlend.v[3] = viewInfo->volumetrics.ambientTemporalFactor;
  volumetricsIndex = viewInfo->input.data->volumetricsIndex;
  consts->frame = volumetricsIndex;
  if ( volumetricsIndex >= 0x460 )
  {
    LODWORD(v19) = volumetricsIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 874, ASSERT_TYPE_ASSERT, "(unsigned)( consts->frame ) < (unsigned)( 1120 )", "consts->frame doesn't index VOLUMETRICS_FRAME_JITTER_COUNT\n\t%i not in [0, %i)", v19, 1120) )
      __debugbreak();
  }
}

/*
==============
R_VOL_SetConstantsMaxFloatZ
==============
*/
void R_VOL_SetConstantsMaxFloatZ(VolumetricConstants *consts, const GfxViewInfo *viewInfo)
{
  signed int voxelCountX; 
  signed int reProjFloatZWidth; 
  signed int reProjFloatZHeight; 
  signed int voxelCountY; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  signed int ambientVisibilityWidth; 
  signed int clusterCountX; 
  signed int ambientVisibilityHeight; 
  signed int clusterCountY; 
  float v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 

  if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 932, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  voxelCountX = viewInfo->frustumGrid.voxelCountX;
  reProjFloatZWidth = viewInfo->reProjFloatZWidth;
  reProjFloatZHeight = viewInfo->reProjFloatZHeight;
  voxelCountY = viewInfo->frustumGrid.voxelCountY;
  v8 = reProjFloatZWidth / voxelCountX;
  consts->floatZVolRcpRes.v[0] = 1.0 / (float)reProjFloatZWidth;
  if ( reProjFloatZWidth / voxelCountX < 1 )
    v8 = 1;
  v9 = reProjFloatZHeight / voxelCountY;
  if ( reProjFloatZHeight / voxelCountY < 1 )
    v9 = 1;
  v10 = (v8 + 1) / 2;
  v11 = (v9 + 1) / 2;
  consts->floatZVolRcpRes.v[1] = 1.0 / (float)reProjFloatZHeight;
  consts->maxVolDepthPixelsSize.v[0] = (float)reProjFloatZWidth / (float)voxelCountX;
  consts->maxVolDepthPixelsSize.v[1] = (float)reProjFloatZHeight / (float)voxelCountY;
  consts->maxVolDepthOffset.v[0] = -(v10 + v8);
  consts->maxVolDepthOffset.v[1] = -(v11 + v9);
  consts->maxVolDepthItrCount.v[0] = 3 * v8 + 2 * v10;
  consts->maxVolDepthItrCount.v[1] = 3 * v9 + 2 * v11;
  ambientVisibilityWidth = viewInfo->ambientVisibilityWidth;
  clusterCountX = viewInfo->frustumGrid.clusterCountX;
  ambientVisibilityHeight = viewInfo->ambientVisibilityHeight;
  clusterCountY = viewInfo->frustumGrid.clusterCountY;
  v16 = (float)ambientVisibilityWidth;
  v17 = ambientVisibilityWidth / clusterCountX;
  if ( ambientVisibilityWidth / clusterCountX < 1 )
    v17 = 1;
  consts->floatZAmbientRcpRes.v[0] = 1.0 / v16;
  v18 = ambientVisibilityHeight / clusterCountY;
  v19 = v17 + 1;
  if ( ambientVisibilityHeight / clusterCountY < 1 )
    v18 = 1;
  consts->floatZAmbientRcpRes.v[1] = 1.0 / (float)ambientVisibilityHeight;
  v20 = (v18 + 1) / 2;
  consts->maxAmbientDepthPixelsSize.v[0] = v16 / (float)clusterCountX;
  consts->maxAmbientDepthPixelsSize.v[1] = (float)ambientVisibilityHeight / (float)clusterCountY;
  consts->maxAmbientDepthOffset.v[0] = -(v19 / 2 + v17);
  consts->maxAmbientDepthOffset.v[1] = -(v20 + v18);
  consts->maxAmbientDepthItrCount.v[0] = 3 * v17 + 2 * (v19 / 2);
  consts->maxAmbientDepthItrCount.v[1] = 3 * v18 + 2 * v20;
}

/*
==============
R_VOL_SetLightGridConstants
==============
*/
void R_VOL_SetLightGridConstants(ComputeCmdBufState *state, const GfxViewInfo *viewInfo, const GfxGpuLightGrid *gpuLightGrid, int lightGridIndex, int currFrameActiveGpuLightGridsIndex, int prevFrameActiveGpuLightGridIndex, int numActiveLightGrids, bool temporalValid)
{
  GfxGpuLightGridZone *v12; 
  __int64 data; 
  unsigned int voxelTetrahedronInternalNodeShift; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  BOOL v19; 

  if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 1016, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  data = 0i64;
  voxelTetrahedronInternalNodeShift = 0;
  if ( gpuLightGrid )
  {
    v12 = &gpuLightGrid->zones[viewInfo->input.voxelTreeZoneIndex];
    data = *(_QWORD *)&v12->firstTetrahedron;
    voxelTetrahedronInternalNodeShift = v12->voxelTetrahedronInternalNodeShift;
  }
  v16 = currFrameActiveGpuLightGridsIndex;
  v17 = prevFrameActiveGpuLightGridIndex;
  v18 = numActiveLightGrids;
  v19 = temporalValid;
  v15 = lightGridIndex;
  R_UploadAndSetComputeConstants(state, 1, &data, 0x20u, NULL);
}

/*
==============
R_VOL_ShutdownWorld
==============
*/
void R_VOL_ShutdownWorld(void)
{
  s_volumetricHeightfield = NULL;
}

/*
==============
R_VOL_ToggleFrame
==============
*/
__int64 R_VOL_ToggleFrame()
{
  unsigned int frame; 
  __int64 result; 

  frame = s_volumetricGlob.frame;
  s_volumetricGlob.volumeCount[s_volumetricGlob.frame & 1] = 0;
  result = frame;
  s_volumetricGlob.frame = (s_volumetricGlob.frame + 1) % 0x460;
  return result;
}

/*
==============
R_VOL_UseLocalMedia
==============
*/
bool R_VOL_UseLocalMedia(const GfxBackEndData *data, const GfxViewInfo *viewInfo)
{
  bool v2; 
  bool v3; 

  v2 = viewInfo->brCircle.volumetricDensity > 0.0;
  v3 = r_fogHeightMapScale->current.vector.v[2] > 0.0 && s_volumetricHeightfield;
  return s_volumetricGlob.volumeCount[data->volumetricsIndex & 1] || v2 || v3;
}

