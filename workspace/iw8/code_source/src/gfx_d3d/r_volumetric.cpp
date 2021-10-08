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
  materialCommands_t *Tess; 
  materialCommands_t *v17; 
  float fmt; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  GfxCmdBufContext v33[3]; 
  char v34; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  _RDI = gfxContext;
  __asm { vmovaps xmmword ptr [rax-28h], xmm7 }
  if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 1927, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  source = _RDI->source;
  if ( !_RDI->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 1928, ASSERT_TYPE_ASSERT, "(gfxContext.source)", (const char *)&queryFormat, "gfxContext.source") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vxorps  xmm6, xmm6, xmm6
    vcvtsi2ss xmm6, xmm6, rax
    vxorps  xmm7, xmm7, xmm7
    vcvtsi2ss xmm7, xmm7, rax
    vmovups [rsp+98h+var_38], xmm0
  }
  Tess = R_GetTess(v33);
  v17 = Tess;
  if ( Tess->vertexCount )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rdi]
      vmovups [rsp+98h+var_38], xmm0
    }
    RB_EndTessSurfaceInternal(v33, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h(162)");
  }
  else
  {
    if ( Tess->indexCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 166, ASSERT_TYPE_ASSERT, "(tess.indexCount == 0)", (const char *)&queryFormat, "tess.indexCount == 0") )
      __debugbreak();
    v17->viewStatsTarget = GFX_VIEW_STATS_INVALID;
    v17->primStatsTarget = GFX_PRIM_STATS_INVALID;
  }
  R_Set2D(source);
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vxorps  xmm2, xmm2, xmm2
    vmovups [rsp+98h+var_38], xmm0
    vmovss  xmm0, cs:__real@3f800000
    vmovss  [rsp+98h+var_50], xmm0
    vmovss  [rsp+98h+var_58], xmm0
    vmovss  [rsp+98h+var_60], xmm2
    vmovss  [rsp+98h+var_68], xmm2
    vmovss  dword ptr [rsp+98h+var_70], xmm7
    vxorps  xmm3, xmm3, xmm3
    vmovss  dword ptr [rsp+98h+fmt], xmm6
  }
  RB_DrawStretchPic(v33, rgp.volumetricDebugMaterial, *(float *)&_XMM2, *(float *)&_XMM3, fmt, v28, v29, v30, v31, v32, 0xFFFFFFFF, GFX_PRIM_STATS_CODE);
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vmovups [rsp+98h+var_38], xmm0
  }
  RB_EndTessSurfaceInternal(v33, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp(1940)");
  __asm { vmovaps xmm7, [rsp+98h+var_28] }
  _R11 = &v34;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

/*
==============
RB_VOL_AccumulateScatteringResources
==============
*/
void RB_VOL_AccumulateScatteringResources(VolumetricDrawStream *drawStream)
{
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
  R_RT_Handle v31; 
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
  __asm
  {
    vmovups ymm0, ymmword ptr cs:s_volumetricGlob.currentScatterImage.baseclass_0.m_surfaceID
    vmovd   eax, xmm0
    vmovups ymmword ptr [rbp+57h+var_90.m_surfaceID], ymm0
  }
  if ( (_WORD)_EAX )
  {
    R_RT_Handle::GetSurface(&v31);
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+57h+var_90.m_surfaceID]
      vmovups ymmword ptr [rbp+57h+var_90.m_surfaceID], ymm0
    }
    R_RT_DestroyInternal(&v31);
  }
  else if ( s_volumetricGlob.currentScatterImage.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
  {
    __debugbreak();
  }
  __asm
  {
    vmovups ymm0, ymmword ptr cs:s_volumetricGlob.currentExtinctionImage.baseclass_0.m_surfaceID
    vmovd   eax, xmm0
    vmovups ymmword ptr [rbp+57h+var_90.m_surfaceID], ymm0
  }
  if ( (_WORD)_EAX )
  {
    R_RT_Handle::GetSurface(&v31);
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+57h+var_90.m_surfaceID]
      vmovups ymmword ptr [rbp+57h+var_90.m_surfaceID], ymm0
    }
    R_RT_DestroyInternal(&v31);
  }
  else if ( s_volumetricGlob.currentExtinctionImage.m_tracking.m_allocCounter )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
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
  int v9; 
  const R_RT_Surface *Surface; 
  const GfxWrappedRWBuffer *v11; 

  _RSI = viewInfo;
  if ( R_UseBakedLighting() && _RSI->volumetrics.enabled )
  {
    __asm
    {
      vmovaps [rsp+48h+var_18], xmm6
      vxorps  xmm6, xmm6, xmm6
      vcomiss xmm6, dword ptr [rsi+2E6Ch]
    }
    if ( R_VOL_UseLocalMedia(_RSI->input.data, _RSI) )
    {
      if ( !computeState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 1815, ASSERT_TYPE_ASSERT, "(computeState)", (const char *)&queryFormat, "computeState") )
        __debugbreak();
      if ( !s_volumetricGlob.ambientLightingDensityClearKickedOff && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 1816, ASSERT_TYPE_ASSERT, "(s_volumetricGlob.ambientLightingDensityClearKickedOff)", (const char *)&queryFormat, "s_volumetricGlob.ambientLightingDensityClearKickedOff") )
        __debugbreak();
      _RAX = r_fogHeightMapScale;
      v9 = 1;
      s_volumetricGlob.densityInjectionsKickedOff = 1;
      __asm
      {
        vcomiss xmm6, dword ptr [rsi+0C38h]
        vcomiss xmm6, dword ptr [rax+30h]
      }
      if ( !s_volumetricGlob.volumeCount[data->volumetricsIndex & 1] )
        v9 = 0;
      R_ProfBeginNamedEvent(computeState, "Volumetrics Clustering");
      R_GPU_BeginTimer(GPU_TIMER_VOLUMETRIC_DENSITY);
      if ( v9 )
      {
        R_ProfBeginNamedEvent(computeState, "Frustum Grid Cluster Volumetrics");
        Surface = R_RT_Handle::GetSurface(&s_volumetricGlob.maskClusterBuffer);
        if ( (Surface->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
          __debugbreak();
        v11 = (const GfxWrappedRWBuffer *)&Surface->1080;
        R_HW_AddResourceTransition(computeState, v11, 0xFFFFFFFF, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_HW_FlushResourceTransitions(computeState);
        R_VOL_FrustumGridCluster(computeState, _RSI, data, v11, v11);
        R_HW_AddResourceTransition(computeState, v11, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_HW_FlushResourceTransitions(computeState);
        R_ProfEndNamedEvent(computeState);
      }
      if ( computeState->device )
        R_ComputeWaitForCompute(computeState, PIPE_FLUSH_PARTIAL);
      R_GPU_EndTimer();
      R_ProfEndNamedEvent(computeState);
    }
    __asm { vmovaps xmm6, [rsp+48h+var_18] }
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
  __int64 v11; 
  R_RT_ColorHandle *v12; 
  R_RT_ColorHandle *v13; 
  const R_RT_Surface *Surface; 
  const GfxTexture *Resident; 
  const R_RT_Surface *v21; 
  const GfxTexture *v22; 
  const R_RT_Surface *v23; 
  const GfxTexture *v24; 
  const R_RT_Surface *v25; 
  const GfxTexture *v26; 
  R_RT_Handle visibilityPrev; 
  R_RT_Handle ambientPrev; 

  state = drawStream->state;
  viewInfo = drawStream->viewInfo;
  R_LockIfGfxImmediateContext(drawStream->state->device);
  R_ProfBeginNamedEvent(state, "Combine Multi Light Grid");
  toggle = drawStream->toggle;
  _R13 = &s_volumetricGlob;
  if ( s_volumetricGlob.prevFrameAmbientValid )
  {
    _RAX = 0i64;
    if ( !(_DWORD)toggle )
      _RAX = 32i64;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax+r13+1D0h]
      vmovups ymmword ptr [rsp+0B8h+visibilityPrev.m_surfaceID], ymm0
    }
  }
  else
  {
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rsp+0B8h+visibilityPrev.m_tracking.m_name], xmm0
    }
    visibilityPrev.m_surfaceID = 0;
    visibilityPrev.m_tracking.m_allocCounter = 0;
  }
  _RAX = &visibilityPrev;
  __asm { vmovups ymm0, ymmword ptr [rax] }
  v11 = toggle;
  __asm { vmovups ymmword ptr [rsp+0B8h+ambientPrev.m_surfaceID], ymm0 }
  v12 = &s_volumetricGlob.ambientImage[toggle];
  v13 = &s_volumetricGlob.ambientVisibilityImage[toggle];
  if ( s_volumetricGlob.prevFrameScatteringValid )
  {
    _RAX = 0i64;
    if ( !(_DWORD)toggle )
      _RAX = 32i64;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax+r13+250h]
      vmovups ymmword ptr [rsp+0B8h+visibilityPrev.m_surfaceID], ymm0
    }
  }
  else
  {
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rsp+0B8h+visibilityPrev.m_tracking.m_name], xmm0
    }
    visibilityPrev.m_surfaceID = 0;
    visibilityPrev.m_tracking.m_allocCounter = 0;
  }
  _RAX = &visibilityPrev;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+0B8h+visibilityPrev.m_surfaceID], ymm0
  }
  Surface = R_RT_Handle::GetSurface(&s_volumetricGlob.ambientSceneLumaImage);
  Resident = R_Texture_GetResident(Surface->m_image.m_base.textureId);
  R_HW_AddResourceTransition(state, Resident, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v21 = R_RT_Handle::GetSurface(v12);
  v22 = R_Texture_GetResident(v21->m_image.m_base.textureId);
  R_HW_AddResourceTransition(state, v22, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_FlushResourceTransitions(state);
  R_VOL_CombineAmbientMultiLightGrid(state, viewInfo, v12, &ambientPrev, v13, &visibilityPrev, &s_volumetricGlob.maxFloatZImage, &s_volumetricGlob.ambientSceneLumaImage, &s_volumetricGlob.ambientLightingData[v11], &s_volumetricGlob.ambientLightingAlpha[v11]);
  v23 = R_RT_Handle::GetSurface(&s_volumetricGlob.ambientSceneLumaImage);
  v24 = R_Texture_GetResident(v23->m_image.m_base.textureId);
  R_HW_AddResourceTransition(state, v24, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v25 = R_RT_Handle::GetSurface(v12);
  v26 = R_Texture_GetResident(v25->m_image.m_base.textureId);
  R_HW_AddResourceTransition(state, v26, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
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
  __asm { vmovaps [rsp+78h+var_18], xmm6 }
  _RBX = viewInfo;
  if ( !R_UseBakedLighting() )
    goto LABEL_15;
  if ( !_RBX->volumetrics.enabled )
    goto LABEL_15;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm6, dword ptr [rbx+2E6Ch]
  }
  if ( R_VOL_UseLocalMedia(_RBX->input.data, _RBX) )
  {
    if ( !computeState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 1759, ASSERT_TYPE_ASSERT, "(computeState)", (const char *)&queryFormat, "computeState") )
      __debugbreak();
    if ( s_volumetricGlob.ambientLightingDensityClearKickedOff && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 1760, ASSERT_TYPE_ASSERT, "(!s_volumetricGlob.ambientLightingDensityClearKickedOff)", (const char *)&queryFormat, "!s_volumetricGlob.ambientLightingDensityClearKickedOff") )
      __debugbreak();
    s_volumetricGlob.ambientLightingDensityClearKickedOff = 1;
    __asm { vcomiss xmm6, dword ptr [rbx+0C38h] }
    _RAX = r_fogHeightMapScale;
    __asm { vcomiss xmm6, dword ptr [rax+30h] }
    R_LockIfGfxImmediateContext(computeState->device);
    R_ProfBeginNamedEvent(computeState, "Volumetrics Lightgrid");
    R_GPU_BeginTimer(GPU_TIMER_VOLUMETRIC_AMBIENT);
    if ( RB_GpuLightGrid_DataAvailable(_RBX) )
      __asm { vcomiss xmm6, dword ptr [rbx+2E8Ch] }
    s_volumetricGlob.prevFrameAmbientValid = 0;
    if ( computeState->device )
      R_ComputeWaitForCompute(computeState, PIPE_FLUSH_PARTIAL);
    R_GPU_EndTimer();
    R_ProfEndNamedEvent(computeState);
    R_UnlockIfGfxImmediateContext(computeState->device);
  }
  else
  {
LABEL_15:
    s_volumetricGlob.prevFrameAmbientValid = 0;
  }
  __asm { vmovaps xmm6, [rsp+78h+var_18] }
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
  const dvar_t *v10; 
  const dvar_t *v11; 
  bool v15; 
  R_RT_Image *p_m_image; 
  R_RT_Image *zeroImage; 
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v28; 
  const GfxImage *SpotShadowArrayImageDraw3D; 
  ComputeCmdBufState *state; 
  R_RT_Handle v31; 
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
  _RAX = R_RT_CreateInternal(&result, s_volumetricGlob.voxelImageWidth, s_volumetricGlob.voxelImageHeight, s_volumetricGlob.voxelImageWidth, s_volumetricGlob.voxelImageHeight, s_volumetricGlob.voxelImageDepth, 1u, 1u, g_R_RT_renderTargetFmts[44], rtFlags, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, "Volumetric Current Scatter texture", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp(1685)");
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   eax, xmm0
    vmovups [rbp+80h+var_E0], ymm0
    vmovups ymmword ptr [rbp+80h+var_100.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v31);
    if ( (R_RT_Handle::GetSurface(&v31)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rbp+80h+var_100.m_surfaceID] }
      __debugbreak();
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rbp+80h+var_100.m_surfaceID] }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      __asm { vmovups ymm0, [rbp+80h+var_E0] }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
  }
  v10 = r_deviceDebug;
  __asm { vmovups ymmword ptr cs:s_volumetricGlob.currentScatterImage.baseclass_0.m_surfaceID, ymm0 }
  if ( !r_deviceDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.enabled )
    goto LABEL_32;
  v11 = DCONST_DVARBOOL_r_esramPostFX;
  if ( !DCONST_DVARBOOL_r_esramPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramPostFX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( !v11->current.enabled )
LABEL_32:
    v4 = R_RT_Flag_RWView|R_RT_Flag_RTView;
  _RAX = R_RT_CreateInternal(&result, s_volumetricGlob.voxelImageWidth, s_volumetricGlob.voxelImageHeight, s_volumetricGlob.voxelImageWidth, s_volumetricGlob.voxelImageHeight, s_volumetricGlob.voxelImageDepth, 1u, 1u, g_R_RT_renderTargetFmts[45], v4, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, "Volumetric Current Extinction texture", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp(1686)");
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   eax, xmm0
    vmovups [rbp+80h+var_E0], ymm0
    vmovups ymmword ptr [rbp+80h+var_100.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v31);
    if ( (R_RT_Handle::GetSurface(&v31)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rbp+80h+var_100.m_surfaceID] }
      __debugbreak();
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rbp+80h+var_100.m_surfaceID] }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, [rbp+80h+var_E0] }
      if ( v15 )
        __debugbreak();
    }
  }
  __asm { vmovups ymmword ptr cs:s_volumetricGlob.currentExtinctionImage.baseclass_0.m_surfaceID, ymm0 }
  _RCX = drawStream->viewInfo;
  if ( (*((_BYTE *)&_RCX->viewportFeatures + 44) & 4) != 0 )
  {
    _RAX = 12928i64;
    if ( drawStream->data->sunShadow.opaqueCascadeCount > 1u )
      _RAX = 12960i64;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax+rcx]
      vmovd   eax, xmm0
      vmovups ymmword ptr [rbp+80h+var_100.m_surfaceID], ymm0
    }
    if ( (_WORD)_EAX )
    {
      R_RT_Handle::GetSurface(&v31);
      p_m_image = &R_RT_Handle::GetSurface(&v31)->m_image;
      goto LABEL_49;
    }
    if ( v31.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  p_m_image = (R_RT_Image *)rgp.blackShadowImage;
LABEL_49:
  resources.sunShadowImage = &p_m_image->m_base;
  _RAX = drawStream->viewInfo;
  if ( (*((_BYTE *)&_RAX->viewportFeatures + 44) & 4) == 0 || !rg.useTransSunShadow )
  {
LABEL_55:
    zeroImage = (R_RT_Image *)rgp.zeroImage;
    goto LABEL_56;
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rax+3300h]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rbp+80h+var_100.m_surfaceID], ymm0
  }
  if ( !(_WORD)_EAX )
  {
    if ( v31.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    goto LABEL_55;
  }
  R_RT_Handle::GetSurface(&v31);
  zeroImage = &R_RT_Handle::GetSurface(&v31)->m_image;
LABEL_56:
  resources.translucentSunShadowImage = &zeroImage->m_base;
  resources.translucentSunShadowMaskImage = rgp.blackImage;
  resources.scatterTemporalWriteImage = &R_RT_Handle::GetSurface(&s_volumetricGlob.currentScatterImage)->m_image.m_base;
  Surface = R_RT_Handle::GetSurface(&s_volumetricGlob.currentExtinctionImage);
  _RDI = drawStream->viewInfo;
  resources.extinctionTemporalWriteImage = &Surface->m_image.m_base;
  if ( RB_GpuLightGrid_DataAvailable(_RDI) )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm0, dword ptr [rdi+2E8Ch]
    }
  }
  resources.ambientImage = rgp.blackImage3D;
  v28 = R_RT_Handle::GetSurface(&s_volumetricGlob.maskClusterBuffer);
  if ( (v28->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  resources.volumesClusterBuffer = (const GfxWrappedBuffer *)&v28->1080;
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
  int v8; 
  unsigned int volumetricsIndex; 
  unsigned int CUMask; 
  ComputeCmdBufState *state; 
  VolumetricDrawStream drawStream; 

  __asm { vmovaps [rsp+78h+var_18], xmm6 }
  _RBX = viewInfo;
  if ( !R_UseBakedLighting() )
    goto LABEL_25;
  if ( !_RBX->volumetrics.enabled )
    goto LABEL_25;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm6, dword ptr [rbx+2E6Ch]
  }
  if ( R_VOL_UseLocalMedia(_RBX->input.data, _RBX) )
  {
    if ( !computeState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 1872, ASSERT_TYPE_ASSERT, "(computeState)", (const char *)&queryFormat, "computeState") )
      __debugbreak();
    if ( !s_volumetricGlob.ambientLightingDensityClearKickedOff && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 1875, ASSERT_TYPE_ASSERT, "(s_volumetricGlob.ambientLightingDensityClearKickedOff)", (const char *)&queryFormat, "s_volumetricGlob.ambientLightingDensityClearKickedOff") )
      __debugbreak();
    if ( !s_volumetricGlob.densityInjectionsKickedOff && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 1876, ASSERT_TYPE_ASSERT, "(s_volumetricGlob.densityInjectionsKickedOff)", (const char *)&queryFormat, "s_volumetricGlob.densityInjectionsKickedOff") )
      __debugbreak();
    if ( !s_volumetricGlob.ambientBlurKickedOff && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 1877, ASSERT_TYPE_ASSERT, "(s_volumetricGlob.ambientBlurKickedOff)", (const char *)&queryFormat, "s_volumetricGlob.ambientBlurKickedOff") )
      __debugbreak();
    v8 = 0;
    *(_QWORD *)&s_volumetricGlob.ambientLightingDensityClearKickedOff = 0i64;
    s_volumetricGlob.ambientBlurKickedOff = 0;
    volumetricsIndex = data->volumetricsIndex;
    drawStream.viewInfo = _RBX;
    __asm { vcomiss xmm6, dword ptr [rbx+0C38h] }
    drawStream.toggle = volumetricsIndex & 1;
    _RAX = r_fogHeightMapScale;
    drawStream.data = data;
    __asm { vcomiss xmm6, dword ptr [rax+30h] }
    if ( s_volumetricGlob.volumeCount[volumetricsIndex & 1] )
      v8 = 1;
    drawStream.useLocalMedia = v8;
    drawStream.useLocalMediaPrev = s_volumetricGlob.prevFrameUsedLocalMedia;
    drawStream.state = computeState;
    R_ProfBeginNamedEvent(computeState, "Volumetrics Evaluate Scattering");
    if ( !computeState->device && r_volumetricsUseCUMask->current.enabled )
    {
      CUMask = R_GetCUMask(GFX_CU_MASK_MODE_ASYNC_VOLUMETRICS);
      R_SetComputeCUMask(computeState, CUMask);
    }
    RB_VOL_MaxFloatZ(&drawStream, &_RBX->sceneRtInput.m_floatZFullRt);
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
LABEL_25:
    s_volumetricGlob.prevFrameScatteringValid = 0;
  }
  __asm { vmovaps xmm6, [rsp+78h+var_18] }
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
  const R_RT_Surface *Surface; 
  const GfxTexture *Resident; 
  const R_RT_Surface *v16; 
  const GfxTexture *v17; 
  const R_RT_Surface *v18; 
  const GfxTexture *v19; 
  const R_RT_Surface *v20; 
  const GfxTexture *v21; 
  const GfxViewInfo *viewInfo; 
  bool v27; 
  const R_RT_Surface *v28; 
  const R_RT_Surface *v30; 
  const GfxViewInfo *v31; 
  bool v35; 
  const R_RT_Surface *v36; 
  const R_RT_Surface *v37; 
  const GfxTexture *v38; 
  const R_RT_Surface *v39; 
  const GfxTexture *v40; 
  const R_RT_Surface *v41; 
  const GfxTexture *v42; 
  const R_RT_Surface *v43; 
  const GfxTexture *v44; 
  R_RT_Handle v45; 
  R_RT_Handle v46; 
  R_RT_Handle result; 
  R_RT_Handle v48; 

  v3 = r_deviceDebug;
  toggle = drawStream->toggle;
  _RSI = floatZ;
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
  _RAX = R_RT_CreateInternal(&result, s_volumetricGlob.clusterImageWidth, s_volumetricGlob.clusterImageHeight, s_volumetricGlob.clusterImageWidth, s_volumetricGlob.clusterImageHeight, 1u, 1u, 1u, g_R_RT_renderTargetFmts[47], rtFlags, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Volumetric FloatZ Difference", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp(1653)");
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rbp+var_60.m_surfaceID], ymm0
    vmovups ymmword ptr [rbp+var_80.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v45);
    if ( (R_RT_Handle::GetSurface(&v45)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rbp+var_80.m_surfaceID] }
      __debugbreak();
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rbp+var_80.m_surfaceID] }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      __asm { vmovups ymm0, ymmword ptr [rbp+var_60.m_surfaceID] }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
  }
  __asm { vmovups ymmword ptr cs:s_volumetricGlob.maxAmbientFloatZImage.baseclass_0.m_surfaceID, ymm0 }
  R_ProfBeginNamedEvent(drawStream->state, "Max Float Z");
  R_GPU_BeginTimer(GPU_TIMER_VOLUMETRIC_MAX_FLOATZ);
  Surface = R_RT_Handle::GetSurface(&s_volumetricGlob.maxFloatZImage);
  Resident = R_Texture_GetResident(Surface->m_image.m_base.textureId);
  R_HW_AddResourceTransition(drawStream->state, Resident, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v16 = R_RT_Handle::GetSurface(&s_volumetricGlob.maxAmbientFloatZImage);
  v17 = R_Texture_GetResident(v16->m_image.m_base.textureId);
  R_HW_AddResourceTransition(drawStream->state, v17, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v18 = R_RT_Handle::GetSurface(v7);
  v19 = R_Texture_GetResident(v18->m_image.m_base.textureId);
  R_HW_AddResourceTransition(drawStream->state, v19, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v20 = R_RT_Handle::GetSurface(v8);
  v21 = R_Texture_GetResident(v20->m_image.m_base.textureId);
  R_HW_AddResourceTransition(drawStream->state, v21, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_FlushResourceTransitions(drawStream->state);
  viewInfo = drawStream->viewInfo;
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi]
    vmovups ymmword ptr [rbp+var_60.m_surfaceID], ymm0
  }
  _RAX = R_RT_GetViewInternal(&result, &v46, 0, viewInfo->reProjFloatZMipMap);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rbp+var_60.m_surfaceID], ymm0
    vmovups ymmword ptr [rbp+var_80.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v45);
    if ( (R_RT_Handle::GetSurface(&v45)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rbp+var_80.m_surfaceID] }
      __debugbreak();
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rbp+var_80.m_surfaceID] }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v27 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rbp+var_60.m_surfaceID] }
      if ( v27 )
        __debugbreak();
    }
  }
  __asm { vmovups ymmword ptr [rbp+var_60.m_surfaceID], ymm0 }
  v28 = R_RT_Handle::GetSurface(&v46);
  __asm { vmovups ymm0, ymmword ptr [rsi] }
  v30 = v28;
  v31 = drawStream->viewInfo;
  __asm { vmovups ymmword ptr [rbp+var_60.m_surfaceID], ymm0 }
  _RAX = R_RT_GetViewInternal(&v48, &v46, 0, v31->ambientVisibilityMipMap);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rbp+var_60.m_surfaceID], ymm0
    vmovups ymmword ptr [rbp+var_80.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v45);
    if ( (R_RT_Handle::GetSurface(&v45)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rbp+var_80.m_surfaceID] }
      __debugbreak();
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rbp+var_80.m_surfaceID] }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v35 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rbp+var_60.m_surfaceID] }
      if ( v35 )
        __debugbreak();
    }
  }
  __asm { vmovups ymmword ptr [rbp+var_60.m_surfaceID], ymm0 }
  v36 = R_RT_Handle::GetSurface(&v46);
  R_VOL_MaxFloatZ(drawStream->state, drawStream->viewInfo, &v30->m_image.m_base, &v36->m_image.m_base, &s_volumetricGlob.maxFloatZImage, &s_volumetricGlob.maxAmbientFloatZImage, v7, v8);
  v37 = R_RT_Handle::GetSurface(&s_volumetricGlob.maxFloatZImage);
  v38 = R_Texture_GetResident(v37->m_image.m_base.textureId);
  R_HW_AddResourceTransition(drawStream->state, v38, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v39 = R_RT_Handle::GetSurface(&s_volumetricGlob.maxAmbientFloatZImage);
  v40 = R_Texture_GetResident(v39->m_image.m_base.textureId);
  R_HW_AddResourceTransition(drawStream->state, v40, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v41 = R_RT_Handle::GetSurface(v7);
  v42 = R_Texture_GetResident(v41->m_image.m_base.textureId);
  R_HW_AddResourceTransition(drawStream->state, v42, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v43 = R_RT_Handle::GetSurface(v8);
  v44 = R_Texture_GetResident(v43->m_image.m_base.textureId);
  R_HW_AddResourceTransition(drawStream->state, v44, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
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
  R_RT_ColorHandle *v12; 
  R_RT_ColorHandle *visibilityCurrent; 
  __int64 v14; 
  R_RT_Image *visibilityPrev; 
  const R_RT_Surface *Surface; 
  const GfxTexture *Resident; 
  const R_RT_Surface *v18; 
  const GfxTexture *v19; 
  const R_RT_Surface *v20; 
  const GfxTexture *v21; 
  const R_RT_Surface *v22; 
  const GfxTexture *v23; 
  const R_RT_Surface *v24; 
  const GfxTexture *v25; 
  const R_RT_Surface *v26; 
  const GfxTexture *v27; 
  R_RT_Handle ambientImageRead; 

  state = drawStream->state;
  viewInfo = drawStream->viewInfo;
  R_LockIfGfxImmediateContext(drawStream->state->device);
  R_ProfBeginNamedEvent(state, "Sample Light Grid");
  toggle = drawStream->toggle;
  _RCX = &s_volumetricGlob;
  if ( s_volumetricGlob.prevFrameAmbientValid )
  {
    _RAX = 0i64;
    if ( !(_DWORD)toggle )
      _RAX = 32i64;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax+rcx+1D0h]
      vmovups ymmword ptr [rsp+98h+ambientImageRead.m_surfaceID], ymm0
    }
  }
  else
  {
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rsp+98h+ambientImageRead.m_tracking.m_name], xmm0
    }
    ambientImageRead.m_surfaceID = 0;
    ambientImageRead.m_tracking.m_allocCounter = 0;
  }
  _RAX = &ambientImageRead;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+98h+ambientImageRead.m_surfaceID], ymm0
  }
  v12 = &s_volumetricGlob.ambientImage[toggle];
  visibilityCurrent = &s_volumetricGlob.ambientVisibilityImage[toggle];
  if ( s_volumetricGlob.prevFrameScatteringValid )
  {
    v14 = 0i64;
    if ( !(_DWORD)toggle )
      v14 = 1i64;
    visibilityPrev = &R_RT_Handle::GetSurface(&s_volumetricGlob.ambientVisibilityImage[v14])->m_image;
  }
  else
  {
    visibilityPrev = (R_RT_Image *)rgp.blackUintImage;
  }
  Surface = R_RT_Handle::GetSurface(&s_volumetricGlob.ambientSceneLumaImage);
  Resident = R_Texture_GetResident(Surface->m_image.m_base.textureId);
  R_HW_AddResourceTransition(state, Resident, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v18 = R_RT_Handle::GetSurface(v12);
  v19 = R_Texture_GetResident(v18->m_image.m_base.textureId);
  R_HW_AddResourceTransition(state, v19, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v20 = R_RT_Handle::GetSurface(&s_volumetricGlob.tetIdxImage);
  v21 = R_Texture_GetResident(v20->m_image.m_base.textureId);
  R_HW_AddResourceTransition(state, v21, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_FlushResourceTransitions(state);
  R_VOL_SampleLightgridImages(state, viewInfo, &ambientImageRead, v12, &s_volumetricGlob.ambientSceneLumaImage, &s_volumetricGlob.tetIdxImage, &s_volumetricGlob.maxFloatZImage, &s_volumetricGlob.maxFloatZImage, visibilityCurrent, &visibilityPrev->m_base);
  v22 = R_RT_Handle::GetSurface(&s_volumetricGlob.ambientSceneLumaImage);
  v23 = R_Texture_GetResident(v22->m_image.m_base.textureId);
  R_HW_AddResourceTransition(state, v23, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v24 = R_RT_Handle::GetSurface(v12);
  v25 = R_Texture_GetResident(v24->m_image.m_base.textureId);
  R_HW_AddResourceTransition(state, v25, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v26 = R_RT_Handle::GetSurface(&s_volumetricGlob.tetIdxImage);
  v27 = R_Texture_GetResident(v26->m_image.m_base.textureId);
  R_HW_AddResourceTransition(state, v27, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
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
  R_RT_ColorHandle *v7; 
  R_RT_BufferHandle *v8; 
  R_RT_BufferHandle *v9; 
  R_RT_BufferHandle *tetIndexCurr; 
  const GfxWrappedRWBuffer *WrappedBuffer; 
  const GfxWrappedRWBuffer *v17; 
  const GfxWrappedRWBuffer *v18; 
  const GfxWrappedRWBuffer *v19; 
  const GfxWrappedRWBuffer *v20; 
  const GfxWrappedRWBuffer *v21; 
  R_RT_Handle tetIndexPrev; 

  state = drawStream->state;
  viewInfo = drawStream->viewInfo;
  R_LockIfGfxImmediateContext(drawStream->state->device);
  R_ProfBeginNamedEvent(state, "Sample Multi Light Grid");
  _R8 = &s_volumetricGlob;
  toggle = drawStream->toggle;
  v7 = &s_volumetricGlob.ambientVisibilityImage[toggle];
  v8 = &s_volumetricGlob.ambientLightingData[toggle];
  v9 = &s_volumetricGlob.ambientLightingAlpha[toggle];
  tetIndexCurr = &s_volumetricGlob.ambientLightingTets[toggle];
  if ( s_volumetricGlob.prevFrameAmbientValid )
  {
    _RAX = 0i64;
    if ( !drawStream->toggle )
      _RAX = 32i64;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax+r8+3B0h]
      vmovups ymmword ptr [rsp+78h+var_38.m_surfaceID], ymm0
    }
  }
  else
  {
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rsp+78h+var_38.m_tracking.m_name], xmm0
    }
    tetIndexPrev.m_surfaceID = 0;
    tetIndexPrev.m_tracking.m_allocCounter = 0;
  }
  _RAX = &tetIndexPrev;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+78h+var_38.m_surfaceID], ymm0
  }
  WrappedBuffer = R_RT_Handle::GetWrappedBuffer(v8);
  R_HW_AddResourceTransition(state, WrappedBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v17 = R_RT_Handle::GetWrappedBuffer(v9);
  R_HW_AddResourceTransition(state, v17, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v18 = R_RT_Handle::GetWrappedBuffer(tetIndexCurr);
  R_HW_AddResourceTransition(state, v18, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_FlushResourceTransitions(state);
  R_VOL_SampleAmbientMultiLightGrid(state, viewInfo, v7, &s_volumetricGlob.maxFloatZImage, v8, v9, tetIndexCurr, &tetIndexPrev);
  v19 = R_RT_Handle::GetWrappedBuffer(v8);
  R_HW_AddResourceTransition(state, v19, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v20 = R_RT_Handle::GetWrappedBuffer(v9);
  R_HW_AddResourceTransition(state, v20, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v21 = R_RT_Handle::GetWrappedBuffer(tetIndexCurr);
  R_HW_AddResourceTransition(state, v21, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
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
  $56BB91A6A543394844F4ECC2111594E6 *v33; 
  __int64 v34; 
  __int64 v36; 
  GfxOrientedBoundingBox **writeVolumetricObbData; 
  unsigned int *volumeCount; 
  GfxWrappedBuffer *volumetricObbBuffers; 
  __m256i v41; 
  __m256i v42; 
  __m256i v43; 
  __m256i v44; 

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
  __asm { vmovdqu xmmword ptr [rbp+57h+var_A0+10h], xmm0 }
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
  v41.m256i_i16[0] = 0;
  v41.m256i_i32[2] = 0;
  __asm
  {
    vmovups ymm1, [rbp+57h+var_A0]
    vmovups ymmword ptr cs:s_volumetricGlob.scatterImage.baseclass_0.m_surfaceID, ymm1
  }
  v41.m256i_i16[0] = 0;
  __asm
  {
    vmovdqu xmmword ptr [rbp+57h+var_A0+10h], xmm0
    vmovups ymm1, [rbp+57h+var_A0]
    vmovups ymmword ptr cs:s_volumetricGlob.scatterImage.baseclass_0.m_surfaceID+20h, ymm1
  }
  v41.m256i_i16[0] = 0;
  v41.m256i_i32[2] = 0;
  __asm
  {
    vmovdqu xmmword ptr [rbp+57h+var_A0+10h], xmm0
    vmovups ymm1, [rbp+57h+var_A0]
    vmovups ymmword ptr cs:s_volumetricGlob.scatterImage.baseclass_0.m_surfaceID+40h, ymm1
  }
  v44.m256i_i16[0] = 0;
  v44.m256i_i32[2] = 0;
  __asm { vmovdqu xmmword ptr [rbp+57h+var_40+10h], xmm0 }
  v41.m256i_i16[0] = 0;
  __asm
  {
    vmovdqu xmmword ptr [rbp+57h+var_A0+10h], xmm0
    vmovups ymm1, [rbp+57h+var_A0]
    vmovups ymmword ptr cs:s_volumetricGlob.extinctionImage.baseclass_0.m_surfaceID, ymm1
  }
  v41.m256i_i16[0] = 0;
  v41.m256i_i32[2] = 0;
  __asm
  {
    vmovdqu xmmword ptr [rbp+57h+var_A0+10h], xmm0
    vmovups ymm1, [rbp+57h+var_A0]
    vmovups ymmword ptr cs:s_volumetricGlob.extinctionImage.baseclass_0.m_surfaceID+20h, ymm1
  }
  v41.m256i_i16[0] = 0;
  __asm
  {
    vmovdqu xmmword ptr [rbp+57h+var_A0+10h], xmm0
    vmovups ymm1, [rbp+57h+var_A0]
    vmovups ymmword ptr cs:s_volumetricGlob.extinctionImage.baseclass_0.m_surfaceID+40h, ymm1
  }
  v41.m256i_i16[0] = 0;
  v41.m256i_i32[2] = 0;
  __asm
  {
    vmovdqu xmmword ptr [rbp+57h+var_A0+10h], xmm0
    vmovups ymm1, [rbp+57h+var_A0]
    vmovups ymmword ptr cs:s_volumetricGlob.ambientImage.baseclass_0.m_surfaceID, ymm1
  }
  v42.m256i_i16[0] = 0;
  v42.m256i_i32[2] = 0;
  __asm
  {
    vmovdqu xmmword ptr [rbp+57h+var_80+10h], xmm0
    vmovups ymm1, [rbp+57h+var_80]
    vmovups ymmword ptr cs:s_volumetricGlob.ambientLightingData.baseclass_0.m_surfaceID, ymm1
  }
  v43.m256i_i16[0] = 0;
  v43.m256i_i32[2] = 0;
  __asm
  {
    vmovdqu xmmword ptr [rbp+57h+var_60+10h], xmm0
    vmovups ymm1, [rbp+57h+var_60]
    vmovups ymmword ptr cs:s_volumetricGlob.ambientLightingAlpha.baseclass_0.m_surfaceID, ymm1
    vmovups ymm1, [rbp+57h+var_40]
    vmovups ymmword ptr cs:s_volumetricGlob.ambientLightingTets.baseclass_0.m_surfaceID, ymm1
  }
  v44.m256i_i16[0] = 0;
  v44.m256i_i32[2] = 0;
  __asm { vmovdqu xmmword ptr [rbp+57h+var_40+10h], xmm0 }
  v41.m256i_i16[0] = 0;
  __asm
  {
    vmovdqu xmmword ptr [rbp+57h+var_A0+10h], xmm0
    vmovups ymm1, [rbp+57h+var_A0]
    vmovups ymmword ptr cs:s_volumetricGlob.ambientImage.baseclass_0.m_surfaceID+20h, ymm1
  }
  v42.m256i_i16[0] = 0;
  v42.m256i_i32[2] = 0;
  __asm
  {
    vmovdqu xmmword ptr [rbp+57h+var_80+10h], xmm0
    vmovups ymm1, [rbp+57h+var_80]
    vmovups ymmword ptr cs:s_volumetricGlob.ambientLightingData.baseclass_0.m_surfaceID+20h, ymm1
  }
  v43.m256i_i16[0] = 0;
  v43.m256i_i32[2] = 0;
  __asm
  {
    vmovdqu xmmword ptr [rbp+57h+var_60+10h], xmm0
    vmovups ymm1, [rbp+57h+var_60]
    vmovups ymmword ptr cs:s_volumetricGlob.ambientLightingAlpha.baseclass_0.m_surfaceID+20h, ymm1
    vmovups ymm1, [rbp+57h+var_40]
  }
  v44.m256i_i16[0] = 0;
  v44.m256i_i32[2] = 0;
  __asm
  {
    vmovdqu xmmword ptr [rbp+57h+var_40+10h], xmm0
    vmovups ymmword ptr cs:s_volumetricGlob.ambientLightingTets.baseclass_0.m_surfaceID+20h, ymm1
    vmovups ymm1, [rbp+57h+var_40]
  }
  v44.m256i_i16[0] = 0;
  v44.m256i_i32[2] = 0;
  __asm
  {
    vmovdqu xmmword ptr [rbp+57h+var_40+10h], xmm0
    vmovups ymmword ptr cs:s_volumetricGlob.visibilityImage.baseclass_0.m_surfaceID, ymm1
    vmovups ymm1, [rbp+57h+var_40]
  }
  v44.m256i_i16[0] = 0;
  v44.m256i_i32[2] = 0;
  __asm
  {
    vmovdqu xmmword ptr [rbp+57h+var_40+10h], xmm0
    vmovups ymmword ptr cs:s_volumetricGlob.visibilityImage.baseclass_0.m_surfaceID+20h, ymm1
    vmovups ymm1, [rbp+57h+var_40]
    vmovups ymmword ptr cs:s_volumetricGlob.tetIdxImage.baseclass_0.m_surfaceID, ymm1
  }
  v44.m256i_i16[0] = 0;
  v44.m256i_i32[2] = 0;
  __asm
  {
    vmovdqu xmmword ptr [rbp+57h+var_40+10h], xmm0
    vmovups ymm1, [rbp+57h+var_40]
  }
  v44.m256i_i16[0] = 0;
  v33 = &s_volumetricGlob;
  v44.m256i_i32[2] = 0;
  v34 = 2i64;
  __asm
  {
    vmovdqu xmmword ptr [rbp+57h+var_40+10h], xmm0
    vmovups ymmword ptr cs:s_volumetricGlob.ambientSceneLumaImage.baseclass_0.m_surfaceID, ymm1
    vmovups ymm1, [rbp+57h+var_40]
    vmovups ymmword ptr cs:s_volumetricGlob.maxFloatZImage.baseclass_0.m_surfaceID, ymm1
  }
  v44.m256i_i16[0] = 0;
  v36 = 2i64;
  v44.m256i_i32[2] = 0;
  __asm
  {
    vmovdqu xmmword ptr [rbp+57h+var_40+10h], xmm0
    vmovups ymm1, [rbp+57h+var_40]
    vmovups ymmword ptr cs:s_volumetricGlob.maskClusterBuffer.baseclass_0.m_surfaceID, ymm1
  }
  s_volumetricGlob.frame = 0;
  do
  {
    MatrixIdentity44((tmat44_t<vec4_t> *)v33);
    v33 = ($56BB91A6A543394844F4ECC2111594E6 *)((char *)v33 + 64);
    --v36;
  }
  while ( v36 );
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
    --v34;
  }
  while ( v34 );
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
  __int64 result; 
  __int64 v16; 
  bool v17; 
  bool v23; 
  base_vec4_t<int> *v54; 
  float *v56; 
  _QWORD *v59; 
  const GfxTexture *v70; 
  __int64 v71; 
  const GfxTexture *v72; 
  unsigned int view; 
  signed int m_usedSize; 
  int v75; 
  __int64 v79; 
  __int64 v80; 

  _RBX = volumetric;
  if ( count >= 0x100 )
  {
    R_WarnOncePerFrame(R_WARN_VOLUMETRIC_VOLUME_LIMIT, limit, volumetricFrame);
    return count;
  }
  if ( (volumetric->flags & 1) != 0 )
    return count;
  __asm { vmovups ymm0, ymmword ptr [rbx+0Ch] }
  _RDX = count;
  __asm { vmovaps [rsp+0A8h+var_38], xmm6 }
  v16 = count;
  v17 = __CFADD__(s_volumetricGlob.writeVolumetricVolumeData[(unsigned int)volumetricFrame], v16 * 144);
  _R14 = (base_vec4_t<int> *)&s_volumetricGlob.writeVolumetricVolumeData[(unsigned int)volumetricFrame][v16];
  _RCX = s_volumetricGlob.writeVolumetricObbData[(unsigned int)volumetricFrame];
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vmovaps [rsp+0A8h+var_48], xmm7
    vmovaps [rsp+0A8h+var_58], xmm8
    vmovups ymmword ptr [rcx+rdx], ymm0
    vmovups xmm1, xmmword ptr [rbx+2Ch]
    vmovups xmmword ptr [rcx+rdx+20h], xmm1
    vmovsd  xmm0, qword ptr [rbx+3Ch]
    vmovsd  qword ptr [rcx+rdx+30h], xmm0
  }
  _RCX[_RDX].halfSize.v[2] = _RBX->obb.halfSize.v[2];
  _R14->v[0] = LODWORD(_RBX->density);
  __asm { vcomiss xmm6, dword ptr [rbx+58h] }
  if ( !v17 )
  {
    v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 575, ASSERT_TYPE_ASSERT, "(volumetric->falloff > 0.0f)", (const char *)&queryFormat, "volumetric->falloff > 0.0f");
    v17 = 0;
    if ( v23 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vdivss  xmm0, xmm7, dword ptr [rbx+58h]
    vmovss  dword ptr [r14+20h], xmm0
    vmovss  xmm2, dword ptr [rbx+58h]
    vmovss  xmm0, dword ptr [rbx+3Ch]
    vsubss  xmm4, xmm0, xmm2
    vmovss  dword ptr [r14+24h], xmm4
    vmovss  xmm1, dword ptr [rbx+40h]
    vsubss  xmm3, xmm1, xmm2
    vmovss  dword ptr [r14+28h], xmm3
    vmovss  xmm0, dword ptr [rbx+44h]
    vsubss  xmm2, xmm0, xmm2
    vminss  xmm1, xmm4, xmm3
    vminss  xmm0, xmm1, xmm2
    vcomiss xmm0, xmm6
    vmovss  dword ptr [r14+2Ch], xmm2
  }
  if ( v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 578, ASSERT_TYPE_ASSERT, "(Vec3MinTerm( volume->scaledFalloffHalfSize ) >= 0.0f)", (const char *)&queryFormat, "Vec3MinTerm( volume->scaledFalloffHalfSize ) >= 0.0f") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [r14+20h]
    vxorps  xmm3, xmm0, cs:__xmm@80000000800000008000000080000000
    vmulss  xmm0, xmm3, dword ptr [r14+24h]
    vmovss  dword ptr [r14+24h], xmm0
    vmulss  xmm2, xmm3, dword ptr [r14+28h]
    vmovss  dword ptr [r14+28h], xmm2
    vmulss  xmm0, xmm3, dword ptr [r14+2Ch]
    vmovss  dword ptr [r14+2Ch], xmm0
    vmovss  xmm0, dword ptr [rbx+5Ch]; val
    vmovaps xmm2, xmm7; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@bdcccccd
    vmovss  xmm3, cs:__real@ffffffff
    vmovss  dword ptr [r14+4], xmm1
  }
  if ( _RBX->flags & 2 )
    __asm { vmovss  xmm4, dword ptr [rbx+60h] }
  else
    __asm { vmovaps xmm4, xmm3 }
  _EDI = 0;
  __asm
  {
    vmovd   xmm0, eax
    vmovd   xmm1, edi
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm3, xmm3, xmm2
    vmovss  dword ptr [r14+10h], xmm4
    vmovss  [rsp+0A8h+var_68], xmm0
  }
  if ( (_RBX->flags & 4) != 0 )
    __asm { vmovss  xmm1, dword ptr [rbx+48h] }
  else
    __asm { vmovaps xmm1, xmm0 }
  __asm { vmovss  dword ptr [r14+14h], xmm1 }
  if ( (_RBX->flags & 4) != 0 )
    __asm { vmovss  xmm1, dword ptr [rbx+4Ch] }
  else
    __asm { vmovaps xmm1, xmm0 }
  __asm { vmovss  dword ptr [r14+18h], xmm1 }
  if ( (_RBX->flags & 4) != 0 )
    __asm { vmovss  xmm0, dword ptr [rbx+50h] }
  v54 = _R14 + 3;
  _RBP = (char *)(&_R14[5].xyz + 1);
  v56 = (float *)&_RBX->masks[0].scroll + 1;
  __asm
  {
    vmovss  xmm6, [rsp+0A8h+time]
    vmovss  xmm8, cs:__real@3f000000
    vmovss  dword ptr [r14+1Ch], xmm0
  }
  do
  {
    v54->v[_EDI] = -1;
    if ( *((_DWORD *)v56 - 9) == 2 )
    {
      v59 = *(_QWORD **)(v56 - 7);
      if ( v59 )
      {
        if ( *v59 )
        {
          _R14[4].v[_EDI] = *(int *)(v56 - 8);
          __asm
          {
            vdivss  xmm0, xmm7, dword ptr [rsi-14h]
            vmovss  dword ptr [rbp-0Ch], xmm0
            vdivss  xmm0, xmm7, dword ptr [rsi-10h]
            vmovss  dword ptr [rbp-8], xmm0
            vmulss  xmm1, xmm6, dword ptr [rsi-4]
            vaddss  xmm3, xmm1, dword ptr [rsi-0Ch]
            vmovss  dword ptr [rbp-4], xmm3
            vmulss  xmm0, xmm6, dword ptr [rsi]
            vaddss  xmm2, xmm0, dword ptr [rsi-8]
            vmovss  dword ptr [rbp+0], xmm2
            vmulss  xmm0, xmm3, dword ptr [rbp-0Ch]
            vaddss  xmm0, xmm0, xmm8
            vmovss  dword ptr [rbp-4], xmm0
            vmulss  xmm1, xmm2, dword ptr [rbp-8]
            vaddss  xmm2, xmm1, xmm8
            vmovss  dword ptr [rbp+0], xmm2
          }
          if ( (unsigned int)*inOutMaskCount >= 0x40 )
          {
            LODWORD(v80) = 64;
            LODWORD(v79) = *inOutMaskCount;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 612, ASSERT_TYPE_ASSERT, "(unsigned)( inOutMaskCount ) < (unsigned)( 64 )", "inOutMaskCount doesn't index MAX_VOLUMETRIC_MASK_TEXTURES_COUNT\n\t%i not in [0, %i)", v79, v80) )
              __debugbreak();
          }
          v70 = R_Texture_Get(data, (GfxTextureId)*(_DWORD *)(*(_QWORD *)(v56 - 7) + 16i64));
          v71 = *inOutMaskCount;
          v72 = v70;
          if ( (unsigned int)v71 >= currentVolumetricNoiseTexturesArray->m_size )
          {
            LODWORD(v80) = currentVolumetricNoiseTexturesArray->m_size;
            LODWORD(v79) = *inOutMaskCount;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_setstate_d3d.h", 1212, ASSERT_TYPE_ASSERT, "(unsigned)( startApiSlot + apiSlotCount - 1 ) < (unsigned)( table->m_size )", "startApiSlot + apiSlotCount - 1 doesn't index table->m_size\n\t%i not in [0, %i)", v79, v80) )
              __debugbreak();
          }
          view = v72->shaderView.view;
          v54 = _R14 + 3;
          currentVolumetricNoiseTexturesArray->m_descriptors[v71] = view;
          m_usedSize = v71 + 1;
          v75 = -1;
          if ( (signed int)currentVolumetricNoiseTexturesArray->m_usedSize > m_usedSize )
            m_usedSize = currentVolumetricNoiseTexturesArray->m_usedSize;
          currentVolumetricNoiseTexturesArray->m_usedSize = m_usedSize;
          if ( *inOutMaskCount < 64 )
            v75 = *inOutMaskCount;
          *base_vec4_t<int>::operator[](_R14 + 3, _EDI) = v75;
          ++*inOutMaskCount;
        }
      }
    }
    ++_EDI;
    v56 += 10;
    _RBP += 16;
  }
  while ( (unsigned int)_EDI < 4 );
  __asm { vmovaps xmm8, [rsp+0A8h+var_58] }
  result = count + 1;
  __asm
  {
    vmovaps xmm7, [rsp+0A8h+var_48]
    vmovaps xmm6, [rsp+0A8h+var_38]
  }
  return result;
}

/*
==============
R_VOL_AddVolumetrics
==============
*/
void R_VOL_AddVolumetrics(const void *const cmd)
{
  const GfxBackEndData *v2; 
  unsigned int v4; 
  unsigned int volumetricVisDataCount; 
  unsigned int *volumetricVisData; 
  unsigned int v11; 
  __int64 v12; 
  GfxDescriptorTable *v13; 
  unsigned int v14; 
  unsigned int v15; 
  int v16; 
  unsigned int i; 
  unsigned int v18; 
  float fmt; 
  float fmta; 
  __int64 count; 
  __int64 limit; 
  unsigned int *v24; 
  unsigned int volumetricFrame; 
  unsigned int v27; 
  int inOutMaskCount; 
  GfxDescriptorTable *currentVolumetricNoiseTexturesArray; 

  v2 = *(const GfxBackEndData **)cmd;
  __asm
  {
    vmovss  xmm1, cs:__real@4728c000; Y
    vmovaps [rsp+0A8h+var_58], xmm6
  }
  v4 = 0;
  v27 = 0;
  volumetricFrame = *(_DWORD *)(*(_QWORD *)cmd + 1088732i64) & 1;
  _RCX = 25744i64 * *(unsigned int *)(*(_QWORD *)cmd + 31440i64);
  _RAX = v2->viewInfo;
  __asm { vmovss  xmm0, dword ptr [rcx+rax+5B4h]; X }
  *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm { vmovaps xmm6, xmm0 }
  volumetricVisDataCount = rgp.world->dpvs.volumetricVisDataCount;
  volumetricVisData = rgp.world->dpvs.volumetricVisData;
  v24 = volumetricVisData;
  if ( volumetricVisDataCount )
    v11 = *volumetricVisData;
  else
    v11 = 0;
  currentVolumetricNoiseTexturesArray = &s_volumetricNoiseTexturesArray[v2->smpFrame];
  R_ResetGfxDescriptorTable(currentVolumetricNoiseTexturesArray);
  inOutMaskCount = 0;
  LODWORD(v12) = 0;
  v13 = currentVolumetricNoiseTexturesArray;
  while ( 1 )
  {
    v14 = v11;
    if ( !v11 )
      break;
LABEL_8:
    v15 = __lzcnt(v14);
    v16 = v15 + 32 * v12;
    if ( v15 >= 0x20 )
    {
      LODWORD(limit) = 32;
      LODWORD(count) = v15;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", count, limit) )
        __debugbreak();
    }
    if ( ((0x80000000 >> v15) & v14) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_visdata_inline.h", 53, ASSERT_TYPE_ASSERT, "(visdata & bit)", (const char *)&queryFormat, "visdata & bit") )
      __debugbreak();
    v11 = v14 & ~(0x80000000 >> v15);
    __asm { vmovss  dword ptr [rsp+0A8h+fmt], xmm6 }
    volumetricVisData = v24;
    v4 = R_VOL_AddVolumetric(&rgp.world->draw.volumetrics.volumetrics[v16], v2, volumetricFrame, v13, fmt, v27, 0x80u, &inOutMaskCount);
    v27 = v4;
  }
  while ( 1 )
  {
    v12 = (unsigned int)(v12 + 1);
    if ( (unsigned int)v12 >= volumetricVisDataCount )
      break;
    v14 = volumetricVisData[v12];
    if ( v14 )
      goto LABEL_8;
  }
  for ( i = 0; i < v2->sceneVolumetricCount; v4 = v18 )
  {
    __asm { vmovss  dword ptr [rsp+0A8h+fmt], xmm6 }
    v18 = R_VOL_AddVolumetric(&v2->sceneVolumetrics[i++], v2, volumetricFrame, currentVolumetricNoiseTexturesArray, fmta, v4, 0x80u, &inOutMaskCount);
  }
  R_FlushDescriptorTable(currentVolumetricNoiseTexturesArray);
  R_VOL_CullLightGrids(&v2->viewInfo[v2->viewInfoIndex], v2);
  __asm { vmovaps xmm6, [rsp+0A8h+var_58] }
  s_volumetricGlob.volumeCount[volumetricFrame] = v4;
}

/*
==============
R_VOL_AnyVisible
==============
*/
bool R_VOL_AnyVisible(const GfxViewInfo *viewInfo)
{
  _RBX = viewInfo;
  if ( !R_UseBakedLighting() || !_RBX->volumetrics.enabled )
    return 0;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm0, dword ptr [rbx+2E6Ch]
  }
  return R_VOL_UseLocalMedia(_RBX->input.data, _RBX);
}

/*
==============
R_VOL_CombineAmbientMultiLightGrid
==============
*/
void R_VOL_CombineAmbientMultiLightGrid(ComputeCmdBufState *state, const GfxViewInfo *viewInfo, const R_RT_Handle *ambientCurrent, const R_RT_Handle *ambientPrev, const R_RT_Handle *visibilityCurrent, const R_RT_Handle *visibilityPrev, const R_RT_Handle *floatZ, const R_RT_Handle *ambientScene, const R_RT_Handle *sampledLighting, const R_RT_Handle *sampledLightingAlpha)
{
  bool v14; 
  char v16; 
  ComputeShader *combineMultiLightGridVolumetricIsoSkylight; 
  GfxImage *SVDBasis; 
  ComputeShader *combineMultiLightGridVolumetricIso; 
  unsigned __int16 m_surfaceID; 
  R_RT_Handle *v23; 
  unsigned __int16 v24; 
  const GfxGpuLightGrid *v25; 
  unsigned int v26; 
  bool temporalValid; 
  const GfxBackEndData *data; 
  const R_RT_Surface *Surface; 
  GfxTextureId textureId; 
  GfxTextureId v31; 
  const R_RT_Surface *v32; 
  const R_RT_Surface *v33; 
  const R_RT_Surface *v34; 
  GfxTexture *textures; 

  _RSI = viewInfo;
  ((void (__fastcall *)(GfxDevice *, __int64, _QWORD, __int64))state->device->m_pFunction[22].AddRef)(state->device, 0x8000000i64, 0i64, 0xFFFFFFFF00i64);
  __asm
  {
    vmovss  xmm0, dword ptr cs:?s_world@@3UGfxWorld@@A.precomputedSkyIllumination.boxMin; GfxWorld s_world
    vcomiss xmm0, dword ptr cs:?s_world@@3UGfxWorld@@A.precomputedSkyIllumination.boxMax; GfxWorld s_world
  }
  if ( v16 && (v14 = !r_enablePrecomputedSkyIllumination->current.enabled, r_enablePrecomputedSkyIllumination->current.enabled) )
  {
    combineMultiLightGridVolumetricIsoSkylight = rgp.combineMultiLightGridVolumetricIsoSkylight;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vucomiss xmm0, dword ptr [rsi+2E90h]
    }
    if ( r_enablePrecomputedSkyIllumination->current.enabled )
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
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vucomiss xmm0, dword ptr [rsi+2E90h]
    }
    if ( !v14 )
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
  v23 = (R_RT_Handle *)visibilityPrev;
  v24 = visibilityPrev->m_surfaceID;
  if ( visibilityPrev->m_surfaceID )
  {
    R_RT_Handle::GetSurface((R_RT_Handle *)visibilityPrev);
  }
  else if ( visibilityPrev->m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
  {
    __debugbreak();
  }
  if ( (m_surfaceID != 0) != (v24 != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 1222, ASSERT_TYPE_ASSERT, "(ambientPrev.IsValid() == visibilityPrev.IsValid())", (const char *)&queryFormat, "ambientPrev.IsValid() == visibilityPrev.IsValid()") )
    __debugbreak();
  v25 = NULL;
  v26 = s_volumetricGlob.activeLightGridsMask[_RSI->input.data->volumetricsIndex & 1];
  R_VOL_SetConstants(state, _RSI, VOLUMETRIC_PASS_LIGHTGRID, 0, 0);
  temporalValid = R_RT_Handle::IsValid((R_RT_Handle *)ambientPrev);
  R_VOL_SetLightGridConstants(state, _RSI, NULL, 0, -1, -1, __popcnt(v26), temporalValid);
  data = _RSI->input.data;
  if ( R_GetNumActiveLightGrids(data) > 0 )
    v25 = *R_GetActiveLightGridsList(data);
  RB_GpuLightGrid_SetResouces(state, &_RSI->input, v25);
  Surface = R_RT_Handle::GetSurface((R_RT_Handle *)visibilityCurrent);
  visibilityPrev = (const R_RT_Handle *)R_Texture_GetResident(Surface->m_image.m_base.textureId);
  R_SetComputeTextures(state, 16, 1, (const GfxTexture *const *)&visibilityPrev);
  if ( R_RT_Handle::IsValid(v23) )
    textureId = R_RT_Handle::GetSurface(v23)->m_image.m_base.textureId;
  else
    textureId = rgp.blackUintImage->textureId;
  visibilityPrev = (const R_RT_Handle *)R_Texture_GetResident(textureId);
  R_SetComputeTextures(state, 17, 1, (const GfxTexture *const *)&visibilityPrev);
  if ( R_RT_Handle::IsValid((R_RT_Handle *)ambientPrev) )
    v31 = R_RT_Handle::GetSurface((R_RT_Handle *)ambientPrev)->m_image.m_base.textureId;
  else
    v31 = rgp.blackImage3D->textureId;
  visibilityPrev = (const R_RT_Handle *)R_Texture_GetResident(v31);
  R_SetComputeTextures(state, 10, 1, (const GfxTexture *const *)&visibilityPrev);
  v32 = R_RT_Handle::GetSurface((R_RT_Handle *)floatZ);
  visibilityPrev = (const R_RT_Handle *)R_Texture_GetResident(v32->m_image.m_base.textureId);
  R_SetComputeTextures(state, 19, 1, (const GfxTexture *const *)&visibilityPrev);
  visibilityPrev = (const R_RT_Handle *)&R_RT_Handle::GetWrappedBuffer((R_RT_Handle *)sampledLighting)->view;
  R_SetComputeViews(state, 24, 1, (const GfxShaderBufferView *const *)&visibilityPrev);
  visibilityPrev = (const R_RT_Handle *)&R_RT_Handle::GetWrappedBuffer((R_RT_Handle *)sampledLightingAlpha)->view;
  R_SetComputeViews(state, 25, 1, (const GfxShaderBufferView *const *)&visibilityPrev);
  v33 = R_RT_Handle::GetSurface((R_RT_Handle *)ambientCurrent);
  visibilityPrev = (const R_RT_Handle *)R_Texture_GetResident(v33->m_image.m_base.textureId);
  R_SetComputeRWTextures(state, 0, 1, (const GfxTexture *const *)&visibilityPrev);
  v34 = R_RT_Handle::GetSurface((R_RT_Handle *)ambientScene);
  visibilityPrev = (const R_RT_Handle *)R_Texture_GetResident(v34->m_image.m_base.textureId);
  R_SetComputeRWTextures(state, 2, 1, (const GfxTexture *const *)&visibilityPrev);
  if ( _RSI->frustumGrid.clusterCountX != R_RT_Handle::GetSurface((R_RT_Handle *)ambientCurrent)->m_image.m_base.width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 1244, ASSERT_TYPE_ASSERT, "(viewInfo->frustumGrid.clusterCountX == ambientCurrent.GetImage()->width)", (const char *)&queryFormat, "viewInfo->frustumGrid.clusterCountX == ambientCurrent.GetImage()->width") )
    __debugbreak();
  if ( _RSI->frustumGrid.clusterCountY != R_RT_Handle::GetSurface((R_RT_Handle *)ambientCurrent)->m_image.m_base.height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 1245, ASSERT_TYPE_ASSERT, "(viewInfo->frustumGrid.clusterCountY == ambientCurrent.GetImage()->height)", (const char *)&queryFormat, "viewInfo->frustumGrid.clusterCountY == ambientCurrent.GetImage()->height") )
    __debugbreak();
  if ( s_volumetricGlob.clusterImageDepth != R_RT_Handle::GetSurface((R_RT_Handle *)ambientCurrent)->m_image.m_base.depth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 1246, ASSERT_TYPE_ASSERT, "(s_volumetricGlob.clusterImageDepth == ambientCurrent.GetImage()->depth)", (const char *)&queryFormat, "s_volumetricGlob.clusterImageDepth == ambientCurrent.GetImage()->depth") )
    __debugbreak();
  R_Dispatch(state, (_RSI->frustumGrid.clusterCountX + 3) >> 2, (_RSI->frustumGrid.clusterCountY + 3) >> 2, (s_volumetricGlob.clusterImageDepth + 3) >> 2);
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
  __int64 v16; 
  int v22; 
  int v118; 
  __int64 v119; 
  __int64 v127; 
  const GfxGpuLightGrid *v128; 
  __int64 v129; 
  bool v130; 
  bool v131; 
  int v221[22]; 

  _RBX = viewInfo;
  ActiveLightGridsList = R_GetActiveLightGridsList(backendData);
  NumActiveLightGrids = R_GetNumActiveLightGrids(backendData);
  v16 = NumActiveLightGrids;
  _ESI = 0;
  if ( NumActiveLightGrids > 0 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+130h]
      vmulss  xmm1, xmm0, dword ptr [rbx+11Ch]
      vmulss  xmm2, xmm0, dword ptr [rbx+120h]
    }
    _R12 = v221;
    v22 = 0;
    __asm
    {
      vmovaps [rsp+1A0h+var_30], xmm6
      vmovaps [rsp+1A0h+var_40], xmm7
      vmovaps [rsp+1A0h+var_50], xmm8
      vmovaps [rsp+1A0h+var_60], xmm9
      vmovaps [rsp+1A0h+var_70], xmm10
      vmovss  xmm10, dword ptr cs:__xmm@80000000800000008000000080000000
      vmovaps [rsp+1A0h+var_80], xmm11
      vmovaps [rsp+1A0h+var_90], xmm12
      vmovss  xmm12, cs:__real@40800000
      vmovaps [rsp+1A0h+var_A0], xmm13
      vmovss  xmm13, cs:__real@3e800000
      vmovaps [rsp+1A0h+var_B0], xmm14
      vmulss  xmm14, xmm0, dword ptr [rbx+118h]
      vmovss  [rsp+1A0h+var_178], xmm1
      vmovss  xmm1, dword ptr [rbx+134h]
      vmulss  xmm0, xmm1, dword ptr [rbx+128h]
      vmovss  [rsp+1A0h+var_174], xmm0
      vmovss  xmm0, dword ptr [rbx+10Ch]
      vmovss  [rsp+1A0h+var_180], xmm0
      vmovss  xmm0, dword ptr [rbx+110h]
      vmovss  [rsp+1A0h+var_170], xmm0
      vmovss  xmm0, dword ptr [rbx+114h]
      vmovss  [rsp+1A0h+var_160], xmm0
      vmovss  xmm0, dword ptr [rbx+100h]
      vmovss  [rsp+1A0h+var_17C], xmm0
      vmovss  xmm0, dword ptr [rbx+104h]
      vmovss  [rsp+1A0h+var_16C], xmm0
      vmovss  xmm0, dword ptr [rbx+108h]
      vmovss  [rsp+1A0h+var_164], xmm2
      vmulss  xmm2, xmm1, dword ptr [rbx+12Ch]
      vmovaps [rsp+1A0h+var_C0], xmm15
      vmulss  xmm15, xmm1, dword ptr [rbx+124h]
      vmovss  [rsp+1A0h+var_15C], xmm0
      vmovss  [rsp+1A0h+var_168], xmm2
      vxorps  xmm11, xmm11, xmm11
    }
    do
    {
      __asm
      {
        vmovss  xmm7, cs:__real@3f800000
        vmovd   xmm1, esi
      }
      _EAX = v22 & 4;
      __asm
      {
        vmovd   xmm0, eax
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm0, xmm7, xmm11, xmm2
        vsubss  xmm6, xmm0, xmm13
        vmovss  [rsp+1A0h+var_154], xmm0
        vmulss  xmm0, xmm0, xmm12; val
        vmovaps xmm2, xmm7; max
        vmovaps xmm1, xmm11; min
        vsubss  xmm8, xmm6, xmm13
      }
      _EDI = v22 & 1;
      _EBX = v22 & 2;
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovaps xmm9, xmm0
        vmulss  xmm0, xmm6, xmm12; val
        vmovaps xmm2, xmm7; max
        vmovaps xmm1, xmm11; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovss  xmm2, cs:__real@3f800000; max
        vmovaps xmm7, xmm0
        vmulss  xmm0, xmm8, xmm12; val
        vmovaps xmm1, xmm11; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovss  xmm2, cs:__real@3f800000; max
        vsubss  xmm1, xmm8, xmm13
        vmovaps xmm6, xmm0
        vmulss  xmm0, xmm1, xmm12; val
        vmovaps xmm1, xmm11; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmulss  xmm0, xmm0, dword ptr cs:?rg@@3Ur_globals_t@@A.volumetricDepth+0Ch; r_globals_t rg
        vmulss  xmm2, xmm9, dword ptr cs:?rg@@3Ur_globals_t@@A.volumetricDepth; r_globals_t rg
        vmulss  xmm1, xmm7, dword ptr cs:?rg@@3Ur_globals_t@@A.volumetricDepth+4; r_globals_t rg
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm2, xmm6, dword ptr cs:?rg@@3Ur_globals_t@@A.volumetricDepth+8; r_globals_t rg
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm1, xmm4, xmm0
        vaddss  xmm6, xmm1, xmm12
        vmovd   xmm1, esi
        vmovd   xmm0, edi
        vpcmpeqd xmm2, xmm0, xmm1
        vmovd   xmm1, esi
        vxorps  xmm3, xmm14, xmm10
        vblendvps xmm5, xmm14, xmm3, xmm2
        vmovd   xmm0, ebx
        vpcmpeqd xmm2, xmm0, xmm1
        vxorps  xmm4, xmm15, xmm10
        vblendvps xmm1, xmm15, xmm4, xmm2
        vmovss  xmm4, [rsp+1A0h+var_178]
        vaddss  xmm0, xmm5, xmm1
        vaddss  xmm2, xmm0, [rsp+1A0h+var_180]
        vmulss  xmm3, xmm2, xmm6
        vaddss  xmm1, xmm3, [rsp+1A0h+var_17C]
        vmovss  dword ptr [r12-8], xmm1
        vxorps  xmm3, xmm4, xmm10
        vmovd   xmm1, esi
        vmovd   xmm0, edi
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm5, xmm4, xmm3, xmm2
        vmovss  xmm3, [rsp+1A0h+var_174]
        vxorps  xmm4, xmm3, xmm10
        vmovd   xmm1, esi
        vmovd   xmm0, ebx
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm1, xmm3, xmm4, xmm2
        vmovss  xmm4, [rsp+1A0h+var_168]
        vaddss  xmm0, xmm5, xmm1
        vaddss  xmm2, xmm0, [rsp+1A0h+var_170]
        vmulss  xmm3, xmm2, xmm6
        vaddss  xmm1, xmm3, [rsp+1A0h+var_16C]
        vxorps  xmm3, xmm4, xmm10
        vmovss  dword ptr [r12-4], xmm1
        vmovd   xmm1, esi
        vmovd   xmm0, ebx
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm5, xmm4, xmm3, xmm2
        vmovss  xmm3, [rsp+1A0h+var_164]
        vmovd   xmm1, esi
        vmovd   xmm0, edi
        vpcmpeqd xmm2, xmm0, xmm1
        vxorps  xmm4, xmm3, xmm10
        vblendvps xmm1, xmm3, xmm4, xmm2
        vaddss  xmm0, xmm5, xmm1
        vaddss  xmm2, xmm0, [rsp+1A0h+var_160]
        vmulss  xmm3, xmm2, xmm6
        vaddss  xmm1, xmm3, [rsp+1A0h+var_15C]
      }
      ++v22;
      __asm { vmovss  dword ptr [r12], xmm1 }
      _R12 += 3;
    }
    while ( v22 < 8 );
    v118 = 0;
    v119 = 0i64;
    if ( (int)v16 > 0 )
    {
      __asm
      {
        vmovss  xmm9, [rbp+0A0h+var_D4]
        vmovss  xmm10, [rbp+0A0h+var_D8]
        vmovss  xmm11, [rbp+0A0h+var_DC]
        vmovss  xmm12, [rbp+0A0h+var_E0]
        vmovss  xmm13, [rbp+0A0h+var_E4]
        vmovss  xmm14, [rbp+0A0h+var_E8]
        vmovss  xmm15, [rbp+0A0h+var_EC]
      }
      v127 = 0i64;
      while ( 2 )
      {
        v128 = ActiveLightGridsList[v127];
        v129 = 0i64;
        v130 = __CFADD__(v128, 328i64);
        v131 = __CFADD__(v128, 328i64) || v128->boundingVolume == NULL;
        _RAX = v128->boundingVolume;
        while ( 1 )
        {
          __asm
          {
            vmovups xmm8, xmmword ptr [rax]
            vshufps xmm7, xmm8, xmm8, 55h ; 'U'
            vmulss  xmm2, xmm7, [rsp+1A0h+var_12C]
            vmulss  xmm0, xmm8, xmm8
            vmulss  xmm1, xmm7, xmm7
            vaddss  xmm1, xmm1, xmm0
            vmovss  xmm0, cs:__real@3f800000
            vsubss  xmm1, xmm0, xmm1
            vmulss  xmm0, xmm8, [rsp+1A0h+var_130]
            vaddss  xmm3, xmm2, xmm0
            vmulss  xmm0, xmm8, [rsp+1A0h+var_124]
            vsqrtss xmm6, xmm1, xmm1
            vmulss  xmm1, xmm6, [rsp+1A0h+var_128]
            vaddss  xmm4, xmm3, xmm1
            vminss  xmm5, xmm4, cs:__real@7f7fffff
            vmaxss  xmm4, xmm4, cs:__real@ff7fffff
            vmulss  xmm1, xmm7, [rbp+0A0h+var_120]
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm0, xmm8, [rbp+0A0h+var_118]
            vmulss  xmm1, xmm6, [rbp+0A0h+var_11C]
            vaddss  xmm3, xmm2, xmm1
            vmulss  xmm1, xmm7, [rbp+0A0h+var_114]
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm0, xmm8, [rbp+0A0h+var_10C]
            vmulss  xmm1, xmm6, [rbp+0A0h+var_110]
            vminss  xmm5, xmm3, xmm5
            vmaxss  xmm4, xmm3, xmm4
            vaddss  xmm3, xmm2, xmm1
            vmulss  xmm1, xmm7, [rbp+0A0h+var_108]
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm0, xmm8, [rbp+0A0h+var_100]
            vmulss  xmm1, xmm6, [rbp+0A0h+var_104]
            vminss  xmm5, xmm3, xmm5
            vmaxss  xmm4, xmm3, xmm4
            vaddss  xmm3, xmm2, xmm1
            vmulss  xmm1, xmm7, [rbp+0A0h+var_FC]
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm6, [rbp+0A0h+var_F8]
            vmulss  xmm0, xmm7, [rbp+0A0h+var_F0]
            vminss  xmm5, xmm3, xmm5
            vmaxss  xmm4, xmm3, xmm4
            vaddss  xmm3, xmm2, xmm1
            vmulss  xmm1, xmm8, [rbp+0A0h+var_F4]
            vaddss  xmm2, xmm1, xmm0
            vminss  xmm5, xmm3, xmm5
            vmaxss  xmm4, xmm3, xmm4
            vmulss  xmm0, xmm14, xmm8
            vmulss  xmm1, xmm6, xmm15
            vaddss  xmm3, xmm2, xmm1
            vminss  xmm5, xmm3, xmm5
            vmaxss  xmm4, xmm3, xmm4
            vmulss  xmm1, xmm13, xmm7
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm0, xmm11, xmm8
            vmulss  xmm1, xmm6, xmm12
            vaddss  xmm3, xmm2, xmm1
            vmulss  xmm1, xmm10, xmm7
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm6, xmm9
            vminss  xmm5, xmm3, xmm5
            vmaxss  xmm4, xmm3, xmm4
            vaddss  xmm3, xmm2, xmm1
            vmovups [rsp+1A0h+var_148], xmm8
            vmaxss  xmm0, xmm3, xmm4
            vshufps xmm8, xmm8, xmm8, 0AAh ; 'ª'
            vcomiss xmm0, xmm8
            vminss  xmm1, xmm3, xmm5
          }
          if ( v131 )
            break;
          __asm { vcomiss xmm1, dword ptr [rsp+1A0h+var_148+0Ch] }
          if ( !v130 )
            break;
          ++v129;
          ++_RAX;
          v130 = (unsigned __int64)v129 < 7;
          v131 = (unsigned __int64)v129 <= 7;
          if ( v129 >= 7 )
          {
            if ( v118 >= 5 )
            {
              R_WarnOncePerFrame(R_WARN_VOL_TOO_MANY_ACTIVE_GPU_LIGHTGRIDS, 5i64, v119);
              goto LABEL_15;
            }
            _ESI |= 1 << v119;
            ++v118;
            break;
          }
        }
        v119 = (unsigned int)(v119 + 1);
        if ( ++v127 < v16 )
          continue;
        break;
      }
    }
LABEL_15:
    __asm
    {
      vmovaps xmm14, [rsp+1A0h+var_B0]
      vmovaps xmm13, [rsp+1A0h+var_A0]
      vmovaps xmm12, [rsp+1A0h+var_90]
      vmovaps xmm11, [rsp+1A0h+var_80]
      vmovaps xmm10, [rsp+1A0h+var_70]
      vmovaps xmm9, [rsp+1A0h+var_60]
      vmovaps xmm8, [rsp+1A0h+var_50]
      vmovaps xmm7, [rsp+1A0h+var_40]
      vmovaps xmm6, [rsp+1A0h+var_30]
      vmovaps xmm15, [rsp+1A0h+var_C0]
    }
  }
  s_volumetricGlob.activeLightGridsMask[backendData->volumetricsIndex & 1] = _ESI;
}

/*
==============
R_VOL_EvaluateScattering
==============
*/
void R_VOL_EvaluateScattering(VolumetricDrawStream *drawStream, VolumetricScatteringResources *resources, unsigned int shaderPass)
{
  ComputeCmdBufState *state; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int CUMask; 
  bool v13; 
  GfxImage *blackImage; 
  GfxShaderBufferView *views; 
  GfxTexture *data; 
  GfxTexture *textures; 
  VolumetricConstants consts; 

  __asm { vxorps  xmm0, xmm0, xmm0 }
  data = (GfxTexture *)drawStream->data;
  _R13 = drawStream->viewInfo;
  state = drawStream->state;
  textures = (GfxTexture *)g_worldDraw->iesLookupTexture;
  __asm { vcomiss xmm0, dword ptr [r13+2E80h] }
  v10 = shaderPass & 0xFFFFFFFE;
  if ( drawStream->useLocalMedia )
    v10 = shaderPass;
  __asm { vucomiss xmm0, dword ptr [r13+2E84h] }
  v11 = v10;
  if ( !drawStream->useLocalMedia )
  {
    __asm { vucomiss xmm0, dword ptr [r13+2E88h] }
    if ( !drawStream->useLocalMedia )
      v11 = v10 & 0xFFFFFFFD;
  }
  if ( state->computeContextType != COMPUTE_CONTEXT_TYPE_GFX )
  {
    R_SetComputeLimitsPerCU(state, COMPUTECMD_SIMD_WALK_DEFAULT, r_volumetricsWaveLimit->current.unsignedInt, 0, 0);
    if ( r_volumetricsUseCUMask->current.integer )
    {
      CUMask = R_GetCUMask(GFX_CU_MASK_MODE_ASYNC_VOLUMETRICS);
      R_SetComputeCUMask(drawStream->state, CUMask);
    }
  }
  v13 = drawStream->useLocalMediaPrev != 0;
  memset_0(&consts, 0, sizeof(consts));
  R_VOL_SetConstantsCommon(&consts, _R13, VOLUMETRIC_PASS_SCATTER, v13);
  __asm { vmovups xmm0, xmmword ptr [r13+2E80h] }
  consts.flags = shaderPass;
  __asm { vmovaps xmmword ptr [rbp+0D0h+consts.volumetricLightingScale], xmm0 }
  R_UploadAndSetComputeConstants(state, 0, &consts, 0x140u, NULL);
  R_SetComputeShader(state, rgp.volumetricScatterComputeShader[v11]);
  views = &R_GetFrustumLightsReadLightBuffer(drawStream->viewInfo)->view;
  R_SetComputeViews(state, 19, 1, (const GfxShaderBufferView *const *)&views);
  views = &_R13->input.data->globalShadowConstantBuffer->view;
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
  R_SetComputeDescriptorTable(state, &s_volumetricNoiseTexturesArray[LODWORD(data[22681].shaderRWView.rwCounterResource)], 0xEu);
  data = (GfxTexture *)R_Texture_GetResident(rgp.hgPhaseFunction->textureId);
  R_SetComputeTextures(state, 8, 1, (const GfxTexture *const *)&data);
  data = (GfxTexture *)R_Texture_GetResident(resources->maxFloatzImage->textureId);
  R_SetComputeTextures(state, 9, 1, (const GfxTexture *const *)&data);
  data = (GfxTexture *)R_Texture_GetResident(resources->extinctionTemporalReadImage->textureId);
  R_SetComputeTextures(state, 15, 1, (const GfxTexture *const *)&data);
  data = (GfxTexture *)R_Texture_GetResident(resources->ambientImage->textureId);
  R_SetComputeTextures(state, 6, 1, (const GfxTexture *const *)&data);
  data = (GfxTexture *)R_Texture_GetResident(resources->visibilityPrevFrameImage->textureId);
  R_SetComputeTextures(state, 17, 1, (const GfxTexture *const *)&data);
  data = (GfxTexture *)R_Texture_GetResident(resources->scatterTemporalWriteImage->textureId);
  R_SetComputeRWTextures(state, 0, 1, (const GfxTexture *const *)&data);
  data = (GfxTexture *)R_Texture_GetResident(resources->scatterMomentsWriteImage->textureId);
  R_SetComputeRWTextures(state, 2, 1, (const GfxTexture *const *)&data);
  data = (GfxTexture *)R_Texture_GetResident(resources->extinctionTemporalWriteImage->textureId);
  R_SetComputeRWTextures(state, 1, 1, (const GfxTexture *const *)&data);
  blackImage = s_volumetricHeightfield;
  if ( !s_volumetricHeightfield )
    blackImage = rgp.blackImage;
  data = (GfxTexture *)R_Texture_GetResident(blackImage->textureId);
  R_SetComputeTextures(state, 33, 1, (const GfxTexture *const *)&data);
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
  const R_RT_Surface *Surface; 
  GfxShaderBufferRWView *views[2]; 
  VolumetricConstants consts; 

  _RBX = viewInfo;
  if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 993, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  memset_0(&consts, 0, sizeof(consts));
  R_VOL_SetConstantsCommon(&consts, _RBX, VOLUMETRIC_PASS_SCATTER, 0);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 916, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  __asm { vmovups xmm0, xmmword ptr [rbx+2E80h] }
  consts.flags = 0;
  __asm { vmovaps xmmword ptr [rsp+1D8h+consts.volumetricLightingScale], xmm0 }
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
  R_Dispatch(state, (_RBX->frustumGrid.clusterCountX + 3) >> 2, (_RBX->frustumGrid.clusterCountY + 3) >> 2, (s_volumetricGlob.clusterImageDepth + 3) >> 2);
}

/*
==============
R_VOL_FreeRts
==============
*/

void __fastcall R_VOL_FreeRts(double _XMM0_8)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v9; 
  __int64 v11; 
  R_RT_Handle v41; 

  _RBX = s_volumetricGlob.scatterImage;
  if ( R_RT_Handle::IsValid(s_volumetricGlob.scatterImage) )
  {
    v2 = 3i64;
    v3 = 3i64;
    do
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbx]
        vmovups [rbp+var_20], ymm0
      }
      R_RT_DestroyInternal(&v41);
      v41.m_surfaceID = 0;
      ++_RBX;
      v41.m_tracking.m_allocCounter = 0;
      __asm
      {
        vpxor   xmm0, xmm0, xmm0
        vmovdqu xmmword ptr [rbp+var_20+10h], xmm0
        vmovups ymm1, [rbp+var_20]
        vmovups ymmword ptr [rbx-20h], ymm1
      }
      --v3;
    }
    while ( v3 );
    _RBX = s_volumetricGlob.extinctionImage;
    do
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbx]
        vmovups [rbp+var_20], ymm0
      }
      R_RT_DestroyInternal(&v41);
      v41.m_surfaceID = 0;
      ++_RBX;
      v41.m_tracking.m_allocCounter = 0;
      __asm
      {
        vpxor   xmm0, xmm0, xmm0
        vmovdqu xmmword ptr [rbp+var_20+10h], xmm0
        vmovups ymm1, [rbp+var_20]
        vmovups ymmword ptr [rbx-20h], ymm1
      }
      --v2;
    }
    while ( v2 );
    v9 = 2i64;
    _RBX = s_volumetricGlob.ambientVisibilityImage;
    v11 = 2i64;
    do
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbx-40h]
        vmovups [rbp+var_20], ymm0
      }
      R_RT_DestroyInternal(&v41);
      __asm
      {
        vpxor   xmm0, xmm0, xmm0
        vmovdqu xmmword ptr [rbp+var_20+10h], xmm0
      }
      v41.m_surfaceID = 0;
      v41.m_tracking.m_allocCounter = 0;
      __asm
      {
        vmovups ymm1, [rbp+var_20]
        vmovups ymmword ptr [rbx-40h], ymm1
        vmovups ymm0, ymmword ptr [rbx]
        vmovups [rbp+var_20], ymm0
      }
      R_RT_DestroyInternal(&v41);
      v41.m_surfaceID = 0;
      ++_RBX;
      v41.m_tracking.m_allocCounter = 0;
      __asm
      {
        vpxor   xmm0, xmm0, xmm0
        vmovdqu xmmword ptr [rbp+var_20+10h], xmm0
        vmovups ymm1, [rbp+var_20]
        vmovups ymmword ptr [rbx-20h], ymm1
      }
      --v11;
    }
    while ( v11 );
    _RBX = s_volumetricGlob.ambientLightingData;
    do
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbx-160h]
        vmovups [rbp+var_20], ymm0
      }
      R_RT_DestroyInternal(&v41);
      __asm
      {
        vpxor   xmm0, xmm0, xmm0
        vmovdqu xmmword ptr [rbp+var_20+10h], xmm0
      }
      v41.m_surfaceID = 0;
      v41.m_tracking.m_allocCounter = 0;
      __asm
      {
        vmovups ymm1, [rbp+var_20]
        vmovups ymmword ptr [rbx-160h], ymm1
        vmovups ymm0, ymmword ptr [rbx]
        vmovups [rbp+var_20], ymm0
      }
      R_RT_DestroyInternal(&v41);
      __asm
      {
        vpxor   xmm0, xmm0, xmm0
        vmovdqu xmmword ptr [rbp+var_20+10h], xmm0
      }
      v41.m_surfaceID = 0;
      v41.m_tracking.m_allocCounter = 0;
      __asm
      {
        vmovups ymm1, [rbp+var_20]
        vmovups ymmword ptr [rbx], ymm1
        vmovups ymm0, ymmword ptr [rbx+40h]
        vmovups [rbp+var_20], ymm0
      }
      R_RT_DestroyInternal(&v41);
      __asm
      {
        vpxor   xmm0, xmm0, xmm0
        vmovdqu xmmword ptr [rbp+var_20+10h], xmm0
      }
      v41.m_surfaceID = 0;
      v41.m_tracking.m_allocCounter = 0;
      __asm
      {
        vmovups ymm1, [rbp+var_20]
        vmovups ymmword ptr [rbx+40h], ymm1
        vmovups ymm0, ymmword ptr [rbx+80h]
        vmovups [rbp+var_20], ymm0
      }
      R_RT_DestroyInternal(&v41);
      v41.m_surfaceID = 0;
      ++_RBX;
      v41.m_tracking.m_allocCounter = 0;
      __asm
      {
        vpxor   xmm0, xmm0, xmm0
        vmovdqu xmmword ptr [rbp+var_20+10h], xmm0
        vmovups ymm1, [rbp+var_20]
        vmovups ymmword ptr [rbx+60h], ymm1
      }
      --v9;
    }
    while ( v9 );
    __asm
    {
      vmovups ymm0, ymmword ptr cs:s_volumetricGlob.tetIdxImage.baseclass_0.m_surfaceID
      vmovups [rbp+var_20], ymm0
    }
    R_RT_DestroyInternal(&v41);
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rbp+var_20+10h], xmm0
      vmovups ymm0, ymmword ptr cs:s_volumetricGlob.ambientSceneLumaImage.baseclass_0.m_surfaceID
    }
    v41.m_surfaceID = 0;
    v41.m_tracking.m_allocCounter = 0;
    __asm
    {
      vmovups ymm1, [rbp+var_20]
      vmovups ymmword ptr cs:s_volumetricGlob.tetIdxImage.baseclass_0.m_surfaceID, ymm1
      vmovups [rbp+var_20], ymm0
    }
    R_RT_DestroyInternal(&v41);
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rbp+var_20+10h], xmm0
      vmovups ymm0, ymmword ptr cs:s_volumetricGlob.maxFloatZImage.baseclass_0.m_surfaceID
    }
    v41.m_surfaceID = 0;
    v41.m_tracking.m_allocCounter = 0;
    __asm
    {
      vmovups ymm1, [rbp+var_20]
      vmovups ymmword ptr cs:s_volumetricGlob.ambientSceneLumaImage.baseclass_0.m_surfaceID, ymm1
      vmovups [rbp+var_20], ymm0
    }
    R_RT_DestroyInternal(&v41);
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rbp+var_20+10h], xmm0
      vmovups ymm0, ymmword ptr cs:s_volumetricGlob.maskClusterBuffer.baseclass_0.m_surfaceID
    }
    v41.m_surfaceID = 0;
    v41.m_tracking.m_allocCounter = 0;
    __asm
    {
      vmovups ymm1, [rbp+var_20]
      vmovups ymmword ptr cs:s_volumetricGlob.maxFloatZImage.baseclass_0.m_surfaceID, ymm1
      vmovups [rbp+var_20], ymm0
    }
    R_RT_DestroyInternal(&v41);
    v41.m_surfaceID = 0;
    v41.m_tracking.m_allocCounter = 0;
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rbp+var_20+10h], xmm0
      vmovups ymm1, [rbp+var_20]
      vmovups ymmword ptr cs:s_volumetricGlob.maskClusterBuffer.baseclass_0.m_surfaceID, ymm1
    }
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

  _RBX = viewInfo;
  if ( !R_UseBakedLighting() )
    goto LABEL_5;
  if ( !_RBX->volumetrics.enabled )
    goto LABEL_5;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm0, dword ptr [rbx+2E6Ch]
  }
  if ( R_VOL_UseLocalMedia(_RBX->input.data, _RBX) )
  {
    *scattering = &R_RT_Handle::GetSurface(&s_volumetricGlob.scatterImage[2])->m_image.m_base;
    *extinction = &R_RT_Handle::GetSurface(&s_volumetricGlob.extinctionImage[2])->m_image.m_base;
    p_m_image = &R_RT_Handle::GetSurface(s_volumetricGlob.ambientVisibilityImage)->m_image;
  }
  else
  {
LABEL_5:
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
  const char **v2; 
  __int64 v3; 
  bool v7; 
  __int64 v8; 
  const char **v10; 
  bool v14; 
  __int64 v16; 
  __int64 v17; 
  bool v21; 
  unsigned int v22; 
  GfxDataFormat v23; 
  unsigned int v25; 
  GfxDataFormat v26; 
  unsigned int v29; 
  GfxDataFormat v30; 
  __int64 v34; 
  const char **v36; 
  bool v40; 
  const char **v41; 
  __int64 v43; 
  bool v47; 
  bool v51; 
  R_RT_Flags rtFlags; 
  bool v56; 
  const dvar_t *v57; 
  const dvar_t *v58; 
  bool v62; 
  unsigned int v63; 
  const char *mipLimita; 
  const char *mipLimitb; 
  const char *mipLimitc; 
  __int64 mipLimit; 
  __int64 format; 
  R_RT_Handle v71; 
  __int64 v73; 
  R_RT_Handle result; 

  _RBX = s_volumetricGlob.scatterImage;
  if ( !R_RT_Handle::IsValid(s_volumetricGlob.scatterImage) )
  {
    v2 = s_volumetricScatterNames;
    v73 = 3i64;
    v3 = 3i64;
    do
    {
      _RAX = R_RT_CreateInternal(&result, s_volumetricGlob.voxelImageWidth, s_volumetricGlob.voxelImageHeight, s_volumetricGlob.voxelImageWidth, s_volumetricGlob.voxelImageHeight, s_volumetricGlob.voxelImageDepth, 1u, 1u, g_R_RT_renderTargetFmts[61], R_RT_Flag_RWView|R_RT_Flag_RTView|R_RT_Flag_VolumetricLayoutOverride, (R_RT_FlagsInternal)2, &colorBlack, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, *v2, 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp(360)");
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovd   eax, xmm0
        vmovups [rbp+10h+var_70], ymm0
        vmovups ymmword ptr [rbp+10h+var_90.m_surfaceID], ymm0
      }
      if ( (_WORD)_RAX )
      {
        R_RT_Handle::GetSurface(&v71);
        if ( (R_RT_Handle::GetSurface(&v71)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        {
          __asm { vmovups ymm0, ymmword ptr [rbp+10h+var_90.m_surfaceID] }
          __debugbreak();
        }
        else
        {
          __asm { vmovups ymm0, ymmword ptr [rbp+10h+var_90.m_surfaceID] }
        }
      }
      else
      {
        __asm { vpextrd rax, xmm0, 2 }
        if ( (_DWORD)_RAX )
        {
          v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
          __asm { vmovups ymm0, [rbp+10h+var_70] }
          if ( v7 )
            __debugbreak();
        }
      }
      __asm { vmovups ymmword ptr [rbx], ymm0 }
      ++_RBX;
      ++v2;
      --v3;
    }
    while ( v3 );
    v8 = v73;
    _RBX = s_volumetricGlob.extinctionImage;
    v10 = s_volumetricExtinctionNames;
    do
    {
      _RAX = R_RT_CreateInternal(&result, s_volumetricGlob.voxelImageWidth, s_volumetricGlob.voxelImageHeight, s_volumetricGlob.voxelImageWidth, s_volumetricGlob.voxelImageHeight, s_volumetricGlob.voxelImageDepth, 1u, 1u, g_R_RT_renderTargetFmts[64], R_RT_Flag_RWView|R_RT_Flag_RTView|R_RT_Flag_VolumetricLayoutOverride, (R_RT_FlagsInternal)2, &colorBlack, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, *v10, 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp(362)");
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovd   eax, xmm0
        vmovups [rbp+10h+var_70], ymm0
        vmovups ymmword ptr [rbp+10h+var_90.m_surfaceID], ymm0
      }
      if ( (_WORD)_RAX )
      {
        R_RT_Handle::GetSurface(&v71);
        if ( (R_RT_Handle::GetSurface(&v71)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        {
          __asm { vmovups ymm0, ymmword ptr [rbp+10h+var_90.m_surfaceID] }
          __debugbreak();
        }
        else
        {
          __asm { vmovups ymm0, ymmword ptr [rbp+10h+var_90.m_surfaceID] }
        }
      }
      else
      {
        __asm { vpextrd rax, xmm0, 2 }
        if ( (_DWORD)_RAX )
        {
          v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
          __asm { vmovups ymm0, [rbp+10h+var_70] }
          if ( v14 )
            __debugbreak();
        }
      }
      __asm { vmovups ymmword ptr [rbx], ymm0 }
      ++_RBX;
      ++v10;
      --v8;
    }
    while ( v8 );
    _RDI = s_volumetricGlob.ambientLightingData;
    v16 = 0i64;
    v17 = 2i64;
    do
    {
      _RAX = R_RT_CreateInternal(&result, s_volumetricGlob.clusterImageWidth, s_volumetricGlob.clusterImageHeight, s_volumetricGlob.clusterImageWidth, s_volumetricGlob.clusterImageHeight, s_volumetricGlob.clusterImageDepth, 1u, 1u, g_R_RT_renderTargetFmts[61], R_RT_Flag_RWView|R_RT_Flag_RTView|R_RT_Flag_VolumetricLayoutOverride, (R_RT_FlagsInternal)2, &colorBlack, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, s_volumetricAmbientNames[v16], 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp(365)");
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovd   eax, xmm0
        vmovups [rbp+10h+var_70], ymm0
        vmovups ymmword ptr [rbp+10h+var_90.m_surfaceID], ymm0
      }
      if ( (_WORD)_RAX )
      {
        R_RT_Handle::GetSurface(&v71);
        if ( (R_RT_Handle::GetSurface(&v71)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        {
          __asm { vmovups ymm0, ymmword ptr [rbp+10h+var_90.m_surfaceID] }
          __debugbreak();
        }
        else
        {
          __asm { vmovups ymm0, ymmword ptr [rbp+10h+var_90.m_surfaceID] }
        }
      }
      else
      {
        __asm { vpextrd rax, xmm0, 2 }
        if ( (_DWORD)_RAX )
        {
          v21 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
          __asm { vmovups ymm0, [rbp+10h+var_70] }
          if ( v21 )
            __debugbreak();
        }
      }
      v22 = g_R_RT_bufferFmts[11];
      v23 = g_R_RT_bufferFmts[11];
      mipLimita = s_volumetricAmbientLightingDataNames[v16];
      __asm { vmovups ymmword ptr [rdi-160h], ymm0 }
      _RAX = R_RT_CreateBufferInternal((R_RT_BufferHandle *)&result, v22, 0x23F00u, v23, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, mipLimita, 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp(366)");
      v25 = g_R_RT_bufferFmts[12];
      v26 = g_R_RT_bufferFmts[12];
      __asm { vmovups ymm0, ymmword ptr [rax] }
      mipLimitb = s_volumetricAmbientLightingAlphaNames[v16];
      __asm { vmovups ymmword ptr [rdi], ymm0 }
      _RAX = R_RT_CreateBufferInternal((R_RT_BufferHandle *)&result, v25, 0x23F00u, v26, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, mipLimitb, 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp(367)");
      v29 = g_R_RT_bufferFmts[13];
      v30 = g_R_RT_bufferFmts[13];
      __asm { vmovups ymm0, ymmword ptr [rax] }
      mipLimitc = s_volumetricAmbientLightingTetsNames[v16];
      __asm { vmovups ymmword ptr [rdi+40h], ymm0 }
      _RAX = R_RT_CreateBufferInternal((R_RT_BufferHandle *)&result, v29, 0x23F00u, v30, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, mipLimitc, 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp(368)");
      ++v16;
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rdi+80h], ymm0
      }
      ++_RDI;
      --v17;
    }
    while ( v17 );
    v34 = 2i64;
    v73 = (__int64)s_volumetricVisibilityNames;
    _RBX = s_volumetricGlob.visibilityImage;
    v36 = s_volumetricVisibilityNames;
    do
    {
      _RAX = R_RT_CreateInternal(&result, s_volumetricGlob.voxelImageWidth, s_volumetricGlob.voxelImageHeight, s_volumetricGlob.voxelImageWidth, s_volumetricGlob.voxelImageHeight, 1u, 1u, 1u, g_R_RT_renderTargetFmts[59], R_RT_Flag_RWView|R_RT_Flag_RTView|R_RT_Flag_VolumetricLayoutOverride, (R_RT_FlagsInternal)2, &colorBlack, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, *v36, 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp(371)");
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovd   eax, xmm0
        vmovups [rbp+10h+var_70], ymm0
        vmovups ymmword ptr [rbp+10h+var_90.m_surfaceID], ymm0
      }
      if ( (_WORD)_RAX )
      {
        R_RT_Handle::GetSurface(&v71);
        if ( (R_RT_Handle::GetSurface(&v71)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        {
          __asm { vmovups ymm0, ymmword ptr [rbp+10h+var_90.m_surfaceID] }
          __debugbreak();
        }
        else
        {
          __asm { vmovups ymm0, ymmword ptr [rbp+10h+var_90.m_surfaceID] }
        }
      }
      else
      {
        __asm { vpextrd rax, xmm0, 2 }
        if ( (_DWORD)_RAX )
        {
          v40 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
          __asm { vmovups ymm0, [rbp+10h+var_70] }
          if ( v40 )
            __debugbreak();
        }
      }
      __asm { vmovups ymmword ptr [rbx], ymm0 }
      ++_RBX;
      ++v36;
      --v34;
    }
    while ( v34 );
    v41 = (const char **)v73;
    _RBX = s_volumetricGlob.ambientVisibilityImage;
    v43 = 2i64;
    do
    {
      _RAX = R_RT_CreateInternal(&result, s_volumetricGlob.clusterImageWidth, s_volumetricGlob.clusterImageHeight, s_volumetricGlob.clusterImageWidth, s_volumetricGlob.clusterImageHeight, 1u, 1u, 1u, g_R_RT_renderTargetFmts[59], R_RT_Flag_RWView|R_RT_Flag_RTView|R_RT_Flag_VolumetricLayoutOverride, (R_RT_FlagsInternal)2, &colorBlack, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, *v41, 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp(373)");
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovd   eax, xmm0
        vmovups [rbp+10h+var_70], ymm0
        vmovups ymmword ptr [rbp+10h+var_90.m_surfaceID], ymm0
      }
      if ( (_WORD)_RAX )
      {
        R_RT_Handle::GetSurface(&v71);
        if ( (R_RT_Handle::GetSurface(&v71)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        {
          __asm { vmovups ymm0, ymmword ptr [rbp+10h+var_90.m_surfaceID] }
          __debugbreak();
        }
        else
        {
          __asm { vmovups ymm0, ymmword ptr [rbp+10h+var_90.m_surfaceID] }
        }
      }
      else
      {
        __asm { vpextrd rax, xmm0, 2 }
        if ( (_DWORD)_RAX )
        {
          v47 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
          __asm { vmovups ymm0, [rbp+10h+var_70] }
          if ( v47 )
            __debugbreak();
        }
      }
      __asm { vmovups ymmword ptr [rbx], ymm0 }
      ++_RBX;
      ++v41;
      --v43;
    }
    while ( v43 );
    _RAX = R_RT_CreateInternal(&result, s_volumetricGlob.clusterImageWidth, s_volumetricGlob.clusterImageHeight, s_volumetricGlob.clusterImageWidth, s_volumetricGlob.clusterImageHeight, s_volumetricGlob.clusterImageDepth, 1u, 1u, g_R_RT_renderTargetFmts[41], R_RT_Flag_RWView|R_RT_Flag_RTView|R_RT_Flag_VolumetricLayoutOverride, (R_RT_FlagsInternal)2, &colorBlack, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "vol tetidx", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp(375)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovd   eax, xmm0
      vmovups [rbp+10h+var_70], ymm0
      vmovups ymmword ptr [rbp+10h+var_90.m_surfaceID], ymm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v71);
      if ( (R_RT_Handle::GetSurface(&v71)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        __asm { vmovups ymm0, ymmword ptr [rbp+10h+var_90.m_surfaceID] }
        __debugbreak();
      }
      else
      {
        __asm { vmovups ymm0, ymmword ptr [rbp+10h+var_90.m_surfaceID] }
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        v51 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        __asm { vmovups ymm0, [rbp+10h+var_70] }
        if ( v51 )
          __debugbreak();
      }
    }
    rtFlags = R_RT_Flag_RWView|R_RT_Flag_RTView;
    __asm { vmovups ymmword ptr cs:s_volumetricGlob.tetIdxImage.baseclass_0.m_surfaceID, ymm0 }
    _RAX = R_RT_CreateInternal(&result, s_volumetricGlob.clusterImageWidth, s_volumetricGlob.clusterImageHeight, s_volumetricGlob.clusterImageWidth, s_volumetricGlob.clusterImageHeight, 1u, 1u, 1u, g_R_RT_renderTargetFmts[61], R_RT_Flag_RWView|R_RT_Flag_RTView, (R_RT_FlagsInternal)2, &colorBlack, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "vol ambient scene luma", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp(376)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovd   eax, xmm0
      vmovups [rbp+10h+var_70], ymm0
      vmovups ymmword ptr [rbp+10h+var_90.m_surfaceID], ymm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v71);
      if ( (R_RT_Handle::GetSurface(&v71)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        __asm { vmovups ymm0, ymmword ptr [rbp+10h+var_90.m_surfaceID] }
        __debugbreak();
      }
      else
      {
        __asm { vmovups ymm0, ymmword ptr [rbp+10h+var_90.m_surfaceID] }
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        v56 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        __asm { vmovups ymm0, [rbp+10h+var_70] }
        if ( v56 )
          __debugbreak();
      }
    }
    v57 = r_deviceDebug;
    __asm { vmovups ymmword ptr cs:s_volumetricGlob.ambientSceneLumaImage.baseclass_0.m_surfaceID, ymm0 }
    if ( !r_deviceDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v57);
    if ( !v57->current.enabled )
    {
      v58 = DCONST_DVARBOOL_r_esramPostFX;
      if ( !DCONST_DVARBOOL_r_esramPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramPostFX") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v58);
      if ( v58->current.enabled )
        rtFlags = R_RT_Flag_RWView|R_RT_Flag_RTView|R_RT_Flag_PreferESRAM;
    }
    _RAX = R_RT_CreateInternal(&result, s_volumetricGlob.voxelImageWidth, s_volumetricGlob.voxelImageHeight, s_volumetricGlob.voxelImageWidth, s_volumetricGlob.voxelImageHeight, 1u, 1u, 1u, g_R_RT_renderTargetFmts[47], rtFlags, (R_RT_FlagsInternal)2, &colorBlack, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Volumetric FloatZ Difference", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp(377)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovd   eax, xmm0
      vmovups [rbp+10h+var_70], ymm0
      vmovups ymmword ptr [rbp+10h+var_90.m_surfaceID], ymm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v71);
      if ( (R_RT_Handle::GetSurface(&v71)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        __asm { vmovups ymm0, ymmword ptr [rbp+10h+var_90.m_surfaceID] }
        __debugbreak();
      }
      else
      {
        __asm { vmovups ymm0, ymmword ptr [rbp+10h+var_90.m_surfaceID] }
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        v62 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        __asm { vmovups ymm0, [rbp+10h+var_70] }
        if ( v62 )
          __debugbreak();
      }
    }
    __asm { vmovups ymmword ptr cs:s_volumetricGlob.maxFloatZImage.baseclass_0.m_surfaceID, ymm0 }
    v63 = s_volumetricGlob.maxClusterCountX * s_volumetricGlob.maxClusterCountY * s_volumetricGlob.maxClusterCountZ;
    if ( v63 >= 0x1000000 )
    {
      LODWORD(format) = 0x1000000;
      LODWORD(mipLimit) = s_volumetricGlob.maxClusterCountX * s_volumetricGlob.maxClusterCountY * s_volumetricGlob.maxClusterCountZ;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 380, ASSERT_TYPE_ASSERT, "( maxClusterCount ) < ( 1 << 24 )", "%s < %s\n\t%i, %i", "maxClusterCount", "1 << 24", mipLimit, format) )
        __debugbreak();
    }
    _RAX = R_RT_CreateBufferInternal((R_RT_BufferHandle *)&result, 4u, 8 * v63, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_GENERIC_READ, "vol masks cluster buffer", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp(381)");
    __asm { vmovups ymm0, ymmword ptr [rax] }
    *(_QWORD *)&s_volumetricGlob.prevFrameAmbientValid = 0i64;
    __asm { vmovups ymmword ptr cs:s_volumetricGlob.maskClusterBuffer.baseclass_0.m_surfaceID, ymm0 }
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
  int v15; 
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v17; 
  R_RT_Handle *v18; 
  const GfxWrappedRWBuffer *WrappedBuffer; 
  bool IsValid; 
  const GfxBackEndData *data; 
  bool v22; 
  const unsigned int *PrevFrameLightGridIndicesList; 
  unsigned int volumetricsIndex; 
  unsigned int v26; 
  const GfxCmdBufInput *p_input; 
  int v29; 
  int prevFrameActiveGpuLightGridIndex; 
  const GfxGpuLightGrid *v31; 
  unsigned int zCount; 
  unsigned int yCount; 
  unsigned int xCount; 
  const GfxGpuLightGrid **ActiveLightGridsList; 
  const unsigned int *v36; 
  GfxShaderBufferView *views; 
  int numActiveLightGrids; 

  _R13 = viewInfo;
  ((void (__fastcall *)(GfxDevice *, __int64, _QWORD, __int64))state->device->m_pFunction[22].AddRef)(state->device, 0x8000000i64, 0i64, 0xFFFFFFFF00i64);
  if ( s_volumetricGlob.clusterImageDepth != 32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 1110, ASSERT_TYPE_ASSERT, "(s_volumetricGlob.clusterImageDepth == ( ( 128 + 4 - 1 ) / 4 ))", (const char *)&queryFormat, "s_volumetricGlob.clusterImageDepth == R_VOLUMETRIC_GI_FRUSTUM_DEPTH") )
    __debugbreak();
  sampleMultiLightGridVolumetricIso = rgp.sampleMultiLightGridVolumetricIso;
  xCount = (_R13->frustumGrid.clusterCountX + 3) >> 2;
  yCount = (_R13->frustumGrid.clusterCountY + 3) >> 2;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm0, dword ptr [r13+2E90h]
  }
  zCount = (s_volumetricGlob.clusterImageDepth + 3) >> 2;
  if ( zCount )
    sampleMultiLightGridVolumetricIso = rgp.sampleMultiLightGridVolumetricAniso;
  R_SetComputeShader(state, sampleMultiLightGridVolumetricIso);
  views = &R_GetFallbackProbe()->view;
  R_SetComputeViews(state, 9, 1, (const GfxShaderBufferView *const *)&views);
  v15 = 0;
  R_VOL_SetConstants(state, _R13, VOLUMETRIC_PASS_LIGHTGRID, 0, 0);
  views = &R_GetActiveLightGrids(_R13->input.data)->view;
  R_SetComputeViews(state, 27, 1, (const GfxShaderBufferView *const *)&views);
  Surface = R_RT_Handle::GetSurface((R_RT_Handle *)visibilityCurrent);
  views = (GfxShaderBufferView *)R_Texture_GetResident(Surface->m_image.m_base.textureId);
  R_SetComputeTextures(state, 16, 1, (const GfxTexture *const *)&views);
  v17 = R_RT_Handle::GetSurface((R_RT_Handle *)floatZ);
  views = (GfxShaderBufferView *)R_Texture_GetResident(v17->m_image.m_base.textureId);
  R_SetComputeTextures(state, 19, 1, (const GfxTexture *const *)&views);
  v18 = (R_RT_Handle *)tetIndexPrev;
  if ( R_RT_Handle::IsValid((R_RT_Handle *)tetIndexPrev) )
    WrappedBuffer = R_RT_Handle::GetWrappedBuffer(v18);
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
  IsValid = R_RT_Handle::IsValid(v18);
  data = _R13->input.data;
  v22 = IsValid;
  LOBYTE(views) = IsValid;
  ActiveLightGridsList = R_GetActiveLightGridsList(data);
  PrevFrameLightGridIndicesList = R_GetPrevFrameLightGridIndicesList(_R13->input.data);
  v36 = PrevFrameLightGridIndicesList;
  volumetricsIndex = _R13->input.data->volumetricsIndex;
  _EDI = s_volumetricGlob.activeLightGridsMask[volumetricsIndex & 1];
  if ( v22 )
    v26 = s_volumetricGlob.activeLightGridsMask[((_BYTE)volumetricsIndex - 1) & 1];
  else
    v26 = 0;
  numActiveLightGrids = __popcnt(_EDI);
  if ( _EDI )
  {
    p_input = &_R13->input;
    do
    {
      __asm { tzcnt   r14d, edi }
      v29 = PrevFrameLightGridIndicesList[_ER14];
      if ( v29 >= 0 && ((1 << v29) & v26) != 0 )
        prevFrameActiveGpuLightGridIndex = __popcnt(v26 & ((1 << v29) - 1));
      else
        prevFrameActiveGpuLightGridIndex = -1;
      v31 = ActiveLightGridsList[_ER14];
      RB_GpuLightGrid_SetResouces(state, p_input, v31);
      R_VOL_SetLightGridConstants(state, _R13, v31, _ER14, v15, prevFrameActiveGpuLightGridIndex, numActiveLightGrids, (bool)views);
      R_Dispatch(state, xCount, yCount, zCount);
      ++v15;
      _EDI &= _EDI - 1;
      p_input = &_R13->input;
      PrevFrameLightGridIndicesList = v36;
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
  bool v18; 
  char v20; 
  ComputeShader *sampleLightGridVolumetricIsoSkylight; 
  GfxImage *SVDBasis; 
  ComputeShader *sampleLightGridVolumetricIso; 
  const GfxBackEndData *data; 
  const GfxGpuLightGrid *v27; 
  bool temporalValid; 
  GfxTextureId textureId; 
  const R_RT_Surface *v30; 
  const R_RT_Surface *v31; 
  const R_RT_Surface *v32; 
  const R_RT_Surface *v33; 
  const R_RT_Surface *v34; 
  const R_RT_Surface *v35; 

  _RDI = viewInfo;
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
    __asm { vmovss  xmm2, cs:__real@7f7fffff; value }
    R_ClearImage_Float(state, &v16->m_image.m_base, *(float *)&_XMM2, PIPE_FLUSH_PARTIAL);
  }
  R_VOL_SetConstants(state, _RDI, VOLUMETRIC_PASS_LIGHTGRID, 0, 0);
  __asm
  {
    vmovss  xmm0, dword ptr cs:?s_world@@3UGfxWorld@@A.precomputedSkyIllumination.boxMin; GfxWorld s_world
    vcomiss xmm0, dword ptr cs:?s_world@@3UGfxWorld@@A.precomputedSkyIllumination.boxMax; GfxWorld s_world
  }
  if ( v20 && (v18 = !r_enablePrecomputedSkyIllumination->current.enabled, r_enablePrecomputedSkyIllumination->current.enabled) )
  {
    sampleLightGridVolumetricIsoSkylight = rgp.sampleLightGridVolumetricIsoSkylight;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vucomiss xmm0, dword ptr [rdi+2E90h]
    }
    if ( r_enablePrecomputedSkyIllumination->current.enabled )
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
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vucomiss xmm0, dword ptr [rdi+2E90h]
    }
    if ( !v18 )
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
  data = _RDI->input.data;
  if ( R_GetNumActiveLightGrids(data) <= 0 )
    v27 = NULL;
  else
    v27 = *R_GetActiveLightGridsList(data);
  RB_GpuLightGrid_SetResouces(state, &_RDI->input, v27);
  temporalValid = R_RT_Handle::IsValid((R_RT_Handle *)ambientImageRead);
  R_VOL_SetLightGridConstants(state, _RDI, v27, 0, 0, 0, 1, temporalValid);
  maxFloatZ = (const R_RT_Handle *)&R_GetFallbackProbe()->view;
  R_SetComputeViews(state, 9, 1, (const GfxShaderBufferView *const *)&maxFloatZ);
  if ( R_RT_Handle::IsValid((R_RT_Handle *)ambientImageRead) )
    textureId = R_RT_Handle::GetSurface((R_RT_Handle *)ambientImageRead)->m_image.m_base.textureId;
  else
    textureId = rgp.blackImage3D->textureId;
  maxFloatZ = (const R_RT_Handle *)R_Texture_GetResident(textureId);
  R_SetComputeTextures(state, 10, 1, (const GfxTexture *const *)&maxFloatZ);
  v30 = R_RT_Handle::GetSurface(v15);
  maxFloatZ = (const R_RT_Handle *)R_Texture_GetResident(v30->m_image.m_base.textureId);
  R_SetComputeTextures(state, 18, 1, (const GfxTexture *const *)&maxFloatZ);
  v31 = R_RT_Handle::GetSurface((R_RT_Handle *)floatZ);
  maxFloatZ = (const R_RT_Handle *)R_Texture_GetResident(v31->m_image.m_base.textureId);
  R_SetComputeTextures(state, 19, 1, (const GfxTexture *const *)&maxFloatZ);
  v32 = R_RT_Handle::GetSurface((R_RT_Handle *)visibilityCurrent);
  maxFloatZ = (const R_RT_Handle *)R_Texture_GetResident(v32->m_image.m_base.textureId);
  R_SetComputeTextures(state, 16, 1, (const GfxTexture *const *)&maxFloatZ);
  maxFloatZ = (const R_RT_Handle *)R_Texture_GetResident(visibilityPrev->textureId);
  R_SetComputeTextures(state, 17, 1, (const GfxTexture *const *)&maxFloatZ);
  v33 = R_RT_Handle::GetSurface((R_RT_Handle *)ambientImageWrite);
  maxFloatZ = (const R_RT_Handle *)R_Texture_GetResident(v33->m_image.m_base.textureId);
  R_SetComputeRWTextures(state, 0, 1, (const GfxTexture *const *)&maxFloatZ);
  v34 = R_RT_Handle::GetSurface((R_RT_Handle *)tetIdxImage);
  maxFloatZ = (const R_RT_Handle *)R_Texture_GetResident(v34->m_image.m_base.textureId);
  R_SetComputeRWTextures(state, 1, 1, (const GfxTexture *const *)&maxFloatZ);
  v35 = R_RT_Handle::GetSurface((R_RT_Handle *)ambientSceneLumaImageWrite);
  maxFloatZ = (const R_RT_Handle *)R_Texture_GetResident(v35->m_image.m_base.textureId);
  R_SetComputeRWTextures(state, 2, 1, (const GfxTexture *const *)&maxFloatZ);
  if ( _RDI->frustumGrid.clusterCountX != R_RT_Handle::GetSurface((R_RT_Handle *)ambientImageWrite)->m_image.m_base.width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 1336, ASSERT_TYPE_ASSERT, "(viewInfo->frustumGrid.clusterCountX == ambientImageWrite.GetImage()->width)", (const char *)&queryFormat, "viewInfo->frustumGrid.clusterCountX == ambientImageWrite.GetImage()->width") )
    __debugbreak();
  if ( _RDI->frustumGrid.clusterCountY != R_RT_Handle::GetSurface((R_RT_Handle *)ambientImageWrite)->m_image.m_base.height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 1337, ASSERT_TYPE_ASSERT, "(viewInfo->frustumGrid.clusterCountY == ambientImageWrite.GetImage()->height)", (const char *)&queryFormat, "viewInfo->frustumGrid.clusterCountY == ambientImageWrite.GetImage()->height") )
    __debugbreak();
  if ( s_volumetricGlob.clusterImageDepth != R_RT_Handle::GetSurface((R_RT_Handle *)ambientImageWrite)->m_image.m_base.depth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 1338, ASSERT_TYPE_ASSERT, "(s_volumetricGlob.clusterImageDepth == ambientImageWrite.GetImage()->depth)", (const char *)&queryFormat, "s_volumetricGlob.clusterImageDepth == ambientImageWrite.GetImage()->depth") )
    __debugbreak();
  R_Dispatch(state, (_RDI->frustumGrid.clusterCountX + 3) >> 2, (_RDI->frustumGrid.clusterCountY + 3) >> 2, (s_volumetricGlob.clusterImageDepth + 3) >> 2);
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
  VolumetricConstants consts; 

  _RBX = viewInfo;
  if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 993, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  memset_0(&consts, 0, sizeof(consts));
  R_VOL_SetConstantsCommon(&consts, _RBX, pass, temporalBlendExtinction);
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
          if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 916, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
            __debugbreak();
          __asm
          {
            vmovups xmm0, xmmword ptr [rbx+2E80h]
            vmovaps xmmword ptr [rsp+1A8h+consts.volumetricLightingScale], xmm0
          }
          consts.flags = shaderFlag;
        }
      }
      else
      {
        _RBX = r_volumetricsAmbientBlur;
        if ( !r_volumetricsAmbientBlur && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 648, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBX);
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+28h]
          vmulss  xmm1, xmm0, cs:__real@3f000000
          vmovss  [rsp+1A8h+consts.ambientBlurRadius], xmm1
        }
      }
    }
    else
    {
      if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 895, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
        __debugbreak();
      if ( _RBX->volumetrics.teleported )
        consts.flags |= 1u;
    }
  }
  else
  {
    R_VOL_SetConstantsMaxFloatZ(&consts, _RBX);
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
  bool v22; 
  unsigned int volumetricsIndex; 
  __int64 v38; 
  tmat44_t<vec4_t> mtx; 

  _RDI = viewInfo;
  _RBX = consts;
  if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 825, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  _R14 = &s_volumetricGlob;
  _RAX = (__int64)(int)_RDI->clientIndex << 6;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax+r14]
    vmovups ymmword ptr [rbx+40h], ymm0
    vmovups ymm1, ymmword ptr [rax+r14+20h]
    vmovups ymmword ptr [rbx+60h], ymm1
  }
  MatrixForViewerOrthogonal(&_RDI->viewParmsSet.frames[0].viewParms.camera.origin, &_RDI->viewParmsSet.frames[0].viewParms.camera.axis, &mtx);
  MatrixMultiply44Aligned(&mtx, &_RDI->viewParmsSet.frames[0].viewParms.projectionMatrix.m, &_RBX->viewProjMatrix.m);
  if ( pass == VOLUMETRIC_PASS_ACCUMULATE )
  {
    __asm { vmovups ymm0, ymmword ptr [rbx] }
    _RAX = (__int64)(int)_RDI->clientIndex << 6;
    __asm
    {
      vmovups ymmword ptr [rax+r14], ymm0
      vmovups ymm1, ymmword ptr [rbx+20h]
      vmovups ymmword ptr [rax+r14+20h], ymm1
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+2E6Ch]
    vmulss  xmm1, xmm0, cs:__real@3c23d70a
    vmovss  dword ptr [rbx+100h], xmm1
  }
  _RBX->absorption = _RDI->volumetrics.absorption;
  _RBX->albedo.v[0] = _RDI->volumetrics.albedo.v[0];
  _RBX->albedo.v[1] = _RDI->volumetrics.albedo.v[1];
  _RBX->albedo.v[2] = _RDI->volumetrics.albedo.v[2];
  _RBX->sunAnisotropy = _RDI->volumetrics.sunAnisotropy;
  _RBX->attenuationClamp = _RDI->volumetrics.attenuationClamp;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+2E98h]
    vmulss  xmm1, xmm0, xmm0
    vmovss  dword ptr [rbx+11Ch], xmm1
    vxorps  xmm3, xmm3, xmm3
  }
  v22 = (_RDI->input.data->volumetricsIndex & 1) == 0;
  _RBX->volumeCount = s_volumetricGlob.volumeCount[_RDI->input.data->volumetricsIndex & 1];
  *(_QWORD *)&_RBX->heightFogBase = LODWORD(_RDI->volumetrics.heightFogBaseHeight);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+2EACh]
    vucomiss xmm0, xmm3
  }
  if ( !v22 )
  {
    __asm
    {
      vmaxss  xmm1, xmm0, cs:__real@3dcccccd
      vmovss  xmm0, cs:__real@bf317218
      vdivss  xmm1, xmm0, xmm1
      vmovss  dword ptr [rbx+13Ch], xmm1
    }
  }
  __asm
  {
    vmovss  xmm1, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmovss  dword ptr [rbx+80h], xmm0
    vdivss  xmm0, xmm1, xmm0
    vmovss  dword ptr [rbx+88h], xmm0
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, rax
    vmovss  dword ptr [rbx+84h], xmm2
    vdivss  xmm1, xmm1, xmm2
    vmovss  dword ptr [rbx+8Ch], xmm1
  }
  _RBX->frustumSize.v[0] = _RDI->frustumGrid.voxelCountX;
  _RBX->frustumSize.v[1] = _RDI->frustumGrid.voxelCountY;
  _RBX->frustumSize.v[2] = 128;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmovss  dword ptr [rbx+130h], xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
    vmovss  dword ptr [rbx+134h], xmm1
  }
  _RBX->temporalBlend.v[0] = _RDI->volumetrics.scatterTemporalFactor;
  if ( temporalBlendExtinction )
    __asm { vmovss  xmm3, dword ptr [rdi+2E9Ch] }
  __asm { vmovss  dword ptr [rbx+0E4h], xmm3 }
  LODWORD(_RBX->temporalBlend.v[2]) = r_volumetricsGamma->current.integer;
  _RBX->temporalBlend.v[3] = _RDI->volumetrics.ambientTemporalFactor;
  volumetricsIndex = _RDI->input.data->volumetricsIndex;
  _RBX->frame = volumetricsIndex;
  if ( volumetricsIndex >= 0x460 )
  {
    LODWORD(v38) = volumetricsIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 874, ASSERT_TYPE_ASSERT, "(unsigned)( consts->frame ) < (unsigned)( 1120 )", "consts->frame doesn't index VOLUMETRICS_FRAME_JITTER_COUNT\n\t%i not in [0, %i)", v38, 1120) )
      __debugbreak();
  }
}

/*
==============
R_VOL_SetConstantsMaxFloatZ
==============
*/

void __fastcall R_VOL_SetConstantsMaxFloatZ(VolumetricConstants *consts, const GfxViewInfo *viewInfo, double _XMM2_8, double _XMM3_8)
{
  signed int reProjFloatZHeight; 
  signed int voxelCountY; 
  int v13; 
  int v15; 
  int v17; 
  int v18; 
  signed int clusterCountY; 
  int v30; 
  signed int ambientVisibilityHeight; 
  int v32; 
  int v34; 
  int v37; 

  _RSI = consts;
  if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_volumetric.cpp", 932, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  reProjFloatZHeight = viewInfo->reProjFloatZHeight;
  voxelCountY = viewInfo->frustumGrid.voxelCountY;
  __asm
  {
    vmovss  xmm4, cs:__real@3f800000
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, eax
    vdivss  xmm0, xmm4, xmm1
  }
  v13 = (signed int)viewInfo->reProjFloatZWidth / (signed int)viewInfo->frustumGrid.voxelCountX;
  __asm { vmovss  dword ptr [rsi+0A8h], xmm0 }
  if ( v13 < 1 )
    v13 = 1;
  __asm { vxorps  xmm3, xmm3, xmm3 }
  v15 = reProjFloatZHeight / voxelCountY;
  __asm { vcvtsi2ss xmm3, xmm3, ecx }
  if ( reProjFloatZHeight / voxelCountY < 1 )
    v15 = 1;
  v17 = (v13 + 1) / 2;
  v18 = (v15 + 1) / 2;
  __asm
  {
    vdivss  xmm0, xmm4, xmm3
    vmovss  dword ptr [rsi+0ACh], xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, r11d
    vdivss  xmm1, xmm1, xmm0
    vmovss  dword ptr [rsi+0A0h], xmm1
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, ebx
    vdivss  xmm0, xmm3, xmm2
    vmovss  dword ptr [rsi+0A4h], xmm0
  }
  _RSI->maxVolDepthOffset.v[0] = -(v17 + v13);
  _RSI->maxVolDepthOffset.v[1] = -(v18 + v15);
  _RSI->maxVolDepthItrCount.v[0] = 3 * v13 + 2 * v17;
  _RSI->maxVolDepthItrCount.v[1] = 3 * v15 + 2 * v18;
  clusterCountY = viewInfo->frustumGrid.clusterCountY;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, eax
    vdivss  xmm0, xmm4, xmm1
  }
  v30 = (signed int)viewInfo->ambientVisibilityWidth / (signed int)viewInfo->frustumGrid.clusterCountX;
  ambientVisibilityHeight = viewInfo->ambientVisibilityHeight;
  if ( v30 < 1 )
    v30 = 1;
  __asm { vmovss  dword ptr [rsi+0C8h], xmm0 }
  v32 = ambientVisibilityHeight / clusterCountY;
  __asm { vxorps  xmm3, xmm3, xmm3 }
  v34 = v30 + 1;
  if ( v32 < 1 )
    v32 = 1;
  __asm
  {
    vcvtsi2ss xmm3, xmm3, ecx
    vdivss  xmm0, xmm4, xmm3
    vmovss  dword ptr [rsi+0CCh], xmm0
  }
  v37 = (v32 + 1) / 2;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, r11d
    vdivss  xmm1, xmm1, xmm0
    vmovss  dword ptr [rsi+0C0h], xmm1
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, ebx
    vdivss  xmm0, xmm3, xmm2
    vmovss  dword ptr [rsi+0C4h], xmm0
  }
  _RSI->maxAmbientDepthOffset.v[0] = -(v34 / 2 + v30);
  _RSI->maxAmbientDepthOffset.v[1] = -(v37 + v32);
  _RSI->maxAmbientDepthItrCount.v[0] = 3 * v30 + 2 * (v34 / 2);
  _RSI->maxAmbientDepthItrCount.v[1] = 3 * v32 + 2 * v37;
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
  char v2; 
  bool v6; 

  _RAX = r_fogHeightMapScale;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm0, dword ptr [rdx+0C38h]
    vcomiss xmm0, dword ptr [rax+30h]
  }
  v6 = v2 && s_volumetricHeightfield;
  return s_volumetricGlob.volumeCount[data->volumetricsIndex & 1] || v2 || v6;
}

