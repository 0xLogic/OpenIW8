/*
==============
R_DecalVolumes_ReleaseDynamic
==============
*/

void __fastcall R_DecalVolumes_ReleaseDynamic(GfxDynamicDecalVolumeIndex index)
{
  ?R_DecalVolumes_ReleaseDynamic@@YAXW4GfxDynamicDecalVolumeIndex@@@Z(index);
}

/*
==============
R_DecalVolumes_DrawOverlay
==============
*/

void __fastcall R_DecalVolumes_DrawOverlay(LocalClientNum_t localClientNum)
{
  ?R_DecalVolumes_DrawOverlay@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
R_DecalVolumes_ReleaseGfxDecalVolumeMask
==============
*/

void __fastcall R_DecalVolumes_ReleaseGfxDecalVolumeMask(const GfxDecalVolumeMask *mask, bool ownsResources)
{
  ?R_DecalVolumes_ReleaseGfxDecalVolumeMask@@YAXPEBUGfxDecalVolumeMask@@_N@Z(mask, ownsResources);
}

/*
==============
R_DecalVolumes_ShutdownFrameData
==============
*/

void R_DecalVolumes_ShutdownFrameData(void)
{
  ?R_DecalVolumes_ShutdownFrameData@@YAXXZ();
}

/*
==============
R_DecalVolumes_CreateGfxDecalVolumeMaterial
==============
*/

void __fastcall R_DecalVolumes_CreateGfxDecalVolumeMaterial(const GfxDecalVolumeMaterial *material)
{
  ?R_DecalVolumes_CreateGfxDecalVolumeMaterial@@YAXPEBUGfxDecalVolumeMaterial@@@Z(material);
}

/*
==============
SpinMutexScopeLock::~SpinMutexScopeLock
==============
*/

void __fastcall SpinMutexScopeLock::~SpinMutexScopeLock(SpinMutexScopeLock *this)
{
  ??1SpinMutexScopeLock@@QEAA@XZ(this);
}

/*
==============
R_DecalVolumes_CopyGfxDecalVolumeMask
==============
*/

void __fastcall R_DecalVolumes_CopyGfxDecalVolumeMask(const GfxDecalVolumeMask *from, GfxDecalVolumeMask *to, const char *toNewAssetName)
{
  ?R_DecalVolumes_CopyGfxDecalVolumeMask@@YAXPEBUGfxDecalVolumeMask@@PEAU1@PEBD@Z(from, to, toNewAssetName);
}

/*
==============
R_DecalVolumes_SwapGfxImage
==============
*/

void __fastcall R_DecalVolumes_SwapGfxImage(const GfxImage *from, GfxImage *to)
{
  ?R_DecalVolumes_SwapGfxImage@@YAXPEBUGfxImage@@PEAU1@@Z(from, to);
}

/*
==============
R_DecalVolumes_DecalUpdate
==============
*/

void __fastcall R_DecalVolumes_DecalUpdate(unsigned int decalIndex, bool isDynamic, const GfxStaticDecalVolumePacked *decal)
{
  ?R_DecalVolumes_DecalUpdate@@YAXI_NPEBUGfxStaticDecalVolumePacked@@@Z(decalIndex, isDynamic, decal);
}

/*
==============
R_DecalVolumes_SwapGfxDecalVolumeMaterial
==============
*/

void __fastcall R_DecalVolumes_SwapGfxDecalVolumeMaterial(const GfxDecalVolumeMaterial *from, GfxDecalVolumeMaterial *to)
{
  ?R_DecalVolumes_SwapGfxDecalVolumeMaterial@@YAXPEBUGfxDecalVolumeMaterial@@PEAU1@@Z(from, to);
}

/*
==============
R_SetDecalVolumeTextures
==============
*/

void __fastcall R_SetDecalVolumeTextures(GfxViewInfo *viewInfo)
{
  ?R_SetDecalVolumeTextures@@YAXPEAUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
R_DecalVolumes_InitWorldBuffers
==============
*/

void __fastcall R_DecalVolumes_InitWorldBuffers(GfxWorld *world)
{
  ?R_DecalVolumes_InitWorldBuffers@@YAXPEAUGfxWorld@@@Z(world);
}

/*
==============
R_DecalVolumes_MoveGfxDecalVolumeMask
==============
*/

void __fastcall R_DecalVolumes_MoveGfxDecalVolumeMask(const GfxDecalVolumeMask *from, GfxDecalVolumeMask *to, bool toOwnsResources)
{
  ?R_DecalVolumes_MoveGfxDecalVolumeMask@@YAXPEBUGfxDecalVolumeMask@@PEAU1@_N@Z(from, to, toOwnsResources);
}

/*
==============
R_DecalVolumes_GetStreamViewInfo
==============
*/

const DecalVolumeStreamViewInfo *__fastcall R_DecalVolumes_GetStreamViewInfo(unsigned int frame)
{
  return ?R_DecalVolumes_GetStreamViewInfo@@YAAEBUDecalVolumeStreamViewInfo@@I@Z(frame);
}

/*
==============
R_DecalVolumes_MarksFinalizeCmd
==============
*/

void __fastcall R_DecalVolumes_MarksFinalizeCmd(const void *const cmd)
{
  ?R_DecalVolumes_MarksFinalizeCmd@@YAXQEBX@Z(cmd);
}

/*
==============
R_AddMarkDecalVolume
==============
*/

void __fastcall R_AddMarkDecalVolume(const vec3_t *origin, const vec3_t *halfSize, const tmat33_t<vec3_t> *axis, const unsigned __int8 *color, Material *markMaterial, int atlasIndex, unsigned int markFlags, unsigned __int16 uid)
{
  ?R_AddMarkDecalVolume@@YAXAEBTvec3_t@@0AEBT?$tmat33_t@Tvec3_t@@@@QEBEPEAUMaterial@@HIG@Z(origin, halfSize, axis, color, markMaterial, atlasIndex, markFlags, uid);
}

/*
==============
R_DecalVolumes_BeginRequestImageMips
==============
*/

unsigned int __fastcall R_DecalVolumes_BeginRequestImageMips()
{
  return ?R_DecalVolumes_BeginRequestImageMips@@YAIXZ();
}

/*
==============
ImageAtlas_GetImageFromProxy
==============
*/

const GfxImage *__fastcall ImageAtlas_GetImageFromProxy(unsigned __int16 proxyIndex)
{
  return ?ImageAtlas_GetImageFromProxy@@YAPEBUGfxImage@@G@Z(proxyIndex);
}

/*
==============
RB_DecalVolumes_DrawOBB
==============
*/

void __fastcall RB_DecalVolumes_DrawOBB(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxBackEndData *data, const GfxWrappedBuffer *debugData, unsigned int iHit, unsigned int decalIndex)
{
  ?RB_DecalVolumes_DrawOBB@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@PEBUGfxWrappedBuffer@@II@Z(gfxContext, viewInfo, data, debugData, iHit, decalIndex);
}

/*
==============
R_DecalVolume_FillCluster_Part2
==============
*/

void __fastcall R_DecalVolume_FillCluster_Part2(ComputeCmdBufState *state, const GfxWrappedRWBuffer *cellIndirectionCount, const GfxWrappedRWBuffer *indirectArgs)
{
  ?R_DecalVolume_FillCluster_Part2@@YAXPEAUComputeCmdBufState@@PEBUGfxWrappedRWBuffer@@1@Z(state, cellIndirectionCount, indirectArgs);
}

/*
==============
R_DecalVolume_PipelineStreamingData
==============
*/

void __fastcall R_DecalVolume_PipelineStreamingData(ComputeCmdBufState *state, const GfxViewInfo *viewInfo, unsigned int frame, unsigned int decalCount, const DecalVolumePiplineStreamingDataResourcePtrs *res)
{
  ?R_DecalVolume_PipelineStreamingData@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@IIAEBUDecalVolumePiplineStreamingDataResourcePtrs@@@Z(state, viewInfo, frame, decalCount, res);
}

/*
==============
R_DecalVolumes_GetUID
==============
*/

bool __fastcall R_DecalVolumes_GetUID(unsigned int uid, unsigned int *outIndex, bool *outIsDynamic)
{
  return ?R_DecalVolumes_GetUID@@YA_NIPEAIPEA_N@Z(uid, outIndex, outIsDynamic);
}

/*
==============
R_DecalVolume_SetCsConstants
==============
*/

void __fastcall R_DecalVolume_SetCsConstants(ComputeCmdBufState *state, const GfxViewInfo *viewInfo, unsigned int frame, unsigned int workgroupOffset, unsigned int workgroupCount, unsigned int workgroupTransient, R_RT_ColorHandle *occlusionTexture)
{
  ?R_DecalVolume_SetCsConstants@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@IIIIVR_RT_ColorHandle@@@Z(state, viewInfo, frame, workgroupOffset, workgroupCount, workgroupTransient, occlusionTexture);
}

/*
==============
R_DecalVolumes_ClearAllDynamic
==============
*/

void R_DecalVolumes_ClearAllDynamic(void)
{
  ?R_DecalVolumes_ClearAllDynamic@@YAXXZ();
}

/*
==============
R_DecalVolumeFinalizeMarks
==============
*/

void __fastcall R_DecalVolumeFinalizeMarks(const GfxBackEndData *data)
{
  ?R_DecalVolumeFinalizeMarks@@YAXPEBUGfxBackEndData@@@Z(data);
}

/*
==============
R_DecalVolumes_EndRequestImageMips
==============
*/

void R_DecalVolumes_EndRequestImageMips(void)
{
  ?R_DecalVolumes_EndRequestImageMips@@YAXXZ();
}

/*
==============
R_DecalVolumes_CopyGfxDecalVolumeMaterialEnd
==============
*/

void __fastcall R_DecalVolumes_CopyGfxDecalVolumeMaterialEnd(const GfxDecalVolumeMaterial *from, GfxDecalVolumeMaterial *to, const char *toNewAssetName)
{
  ?R_DecalVolumes_CopyGfxDecalVolumeMaterialEnd@@YAXPEBUGfxDecalVolumeMaterial@@PEAU1@PEBD@Z(from, to, toNewAssetName);
}

/*
==============
R_DecalVolumes_MoveGfxImage
==============
*/

void __fastcall R_DecalVolumes_MoveGfxImage(const GfxImage *from, GfxImage *to, bool toOwnsResources)
{
  ?R_DecalVolumes_MoveGfxImage@@YAXPEBUGfxImage@@PEAU1@_N@Z(from, to, toOwnsResources);
}

/*
==============
R_DecalVolumes_GetMaterialIndex
==============
*/

unsigned int __fastcall R_DecalVolumes_GetMaterialIndex(const GfxDecalVolumeMaterial *material)
{
  return ?R_DecalVolumes_GetMaterialIndex@@YAIPEBUGfxDecalVolumeMaterial@@@Z(material);
}

/*
==============
RB_DecalVolumes_ShowAtlas
==============
*/

void __fastcall RB_DecalVolumes_ShowAtlas(GfxCmdBufContext *gfxContext, int decalVolumesAtlasDebug)
{
  ?RB_DecalVolumes_ShowAtlas@@YAXUGfxCmdBufContext@@H@Z(gfxContext, decalVolumesAtlasDebug);
}

/*
==============
R_DecalVolumesMarks_DebugClear
==============
*/

void R_DecalVolumesMarks_DebugClear(void)
{
  ?R_DecalVolumesMarks_DebugClear@@YAXXZ();
}

/*
==============
R_DecalVolume_PipelineCullingPart1
==============
*/

void __fastcall R_DecalVolume_PipelineCullingPart1(ComputeCmdBufState *state, const GfxViewInfo *viewInfo, unsigned int frame, unsigned int decalCount, const DecalVolumePiplineCullingPart1ResourcePtrs *res)
{
  ?R_DecalVolume_PipelineCullingPart1@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@IIAEBUDecalVolumePiplineCullingPart1ResourcePtrs@@@Z(state, viewInfo, frame, decalCount, res);
}

/*
==============
R_DecalVolumes_GetDecalCount
==============
*/

unsigned int __fastcall R_DecalVolumes_GetDecalCount(const GfxBackEndData *data)
{
  return ?R_DecalVolumes_GetDecalCount@@YAIPEBUGfxBackEndData@@@Z(data);
}

/*
==============
R_DecalVolume_GetFarPlane
==============
*/

double __fastcall R_DecalVolume_GetFarPlane(const GfxViewInfo *viewInfo)
{
  double result; 

  *(float *)&result = ?R_DecalVolume_GetFarPlane@@YAMPEBUGfxViewInfo@@@Z(viewInfo);
  return result;
}

/*
==============
R_DecalVolumes_SetStreamMultiview
==============
*/

void __fastcall R_DecalVolumes_SetStreamMultiview(const StreamUpdateMultiView *multiView)
{
  ?R_DecalVolumes_SetStreamMultiview@@YAXAEBUStreamUpdateMultiView@@@Z(multiView);
}

/*
==============
R_DecalVolumes_FrustumGridOverlay
==============
*/

void __fastcall R_DecalVolumes_FrustumGridOverlay(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxWrappedBuffer *decalDrawData, const GfxWrappedBuffer *decalIndices, int mode)
{
  ?R_DecalVolumes_FrustumGridOverlay@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@PEBUGfxWrappedBuffer@@2H@Z(gfxContext, viewInfo, decalDrawData, decalIndices, mode);
}

/*
==============
R_DecalVolumes_MoveGfxImageEnd
==============
*/

void __fastcall R_DecalVolumes_MoveGfxImageEnd(GfxImage *to)
{
  ?R_DecalVolumes_MoveGfxImageEnd@@YAXPEAUGfxImage@@@Z(to);
}

/*
==============
R_DecalVolumes_GetDynamic
==============
*/

GfxStaticDecalVolumePacked *__fastcall R_DecalVolumes_GetDynamic(GfxDynamicDecalVolumeIndex index)
{
  return ?R_DecalVolumes_GetDynamic@@YAPEAUGfxStaticDecalVolumePacked@@W4GfxDynamicDecalVolumeIndex@@@Z(index);
}

/*
==============
R_DecalVolume_PipelineCullingPart0
==============
*/

void __fastcall R_DecalVolume_PipelineCullingPart0(ComputeCmdBufState *state, const GfxViewInfo *viewInfo, unsigned int frame, unsigned int collectionCount, const DecalVolumePiplineCullingPart0ResourcePtrs *res)
{
  ?R_DecalVolume_PipelineCullingPart0@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@IIAEBUDecalVolumePiplineCullingPart0ResourcePtrs@@@Z(state, viewInfo, frame, collectionCount, res);
}

/*
==============
R_DrawDecalVolumesDebug
==============
*/

void __fastcall R_DrawDecalVolumesDebug(const GfxBackEndData *data, const GfxViewParms *viewParms, unsigned int displayWidth, unsigned int displayHeight)
{
  ?R_DrawDecalVolumesDebug@@YAXPEBUGfxBackEndData@@AEBUGfxViewParms@@II@Z(data, viewParms, displayWidth, displayHeight);
}

/*
==============
R_SetDecalVolumeResources
==============
*/

void __fastcall R_SetDecalVolumeResources(GfxViewInfo *viewInfo)
{
  ?R_SetDecalVolumeResources@@YAXPEAUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
R_DecalVolumes_StartStreaming
==============
*/

void __fastcall R_DecalVolumes_StartStreaming(const GfxImage *image)
{
  ?R_DecalVolumes_StartStreaming@@YAXPEBUGfxImage@@@Z(image);
}

/*
==============
R_DecalVolume_GetClustering
==============
*/

DecalVolumeClustering *__fastcall R_DecalVolume_GetClustering()
{
  return ?R_DecalVolume_GetClustering@@YAPEAUDecalVolumeClustering@@XZ();
}

/*
==============
R_DecalVolume_ClearClusterHeader
==============
*/

void __fastcall R_DecalVolume_ClearClusterHeader(ComputeCmdBufState *computeState, const unsigned int numHeaderCells, const GfxWrappedRWBuffer *decalIndices)
{
  ?R_DecalVolume_ClearClusterHeader@@YAXPEAUComputeCmdBufState@@IPEBUGfxWrappedRWBuffer@@@Z(computeState, numHeaderCells, decalIndices);
}

/*
==============
RB_FillFrustumGrid
==============
*/

void __fastcall RB_FillFrustumGrid(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RB_FillFrustumGrid@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(gfxContext, viewInfo, data);
}

/*
==============
R_DecalVolumes_UpdateImageTexturesCheckLeave
==============
*/

void R_DecalVolumes_UpdateImageTexturesCheckLeave(void)
{
  ?R_DecalVolumes_UpdateImageTexturesCheckLeave@@YAXXZ();
}

/*
==============
R_AddParticleDecalVolume
==============
*/

void __fastcall R_AddParticleDecalVolume(const vec3_t *origin, const vec3_t *halfSize, const tmat33_t<vec3_t> *axis, const unsigned __int8 *color, int atlasIndex, Material *markMaterial, const char *vfxName)
{
  ?R_AddParticleDecalVolume@@YAXAEBTvec3_t@@0AEBT?$tmat33_t@Tvec3_t@@@@QEBEHPEAUMaterial@@PEBD@Z(origin, halfSize, axis, color, atlasIndex, markMaterial, vfxName);
}

/*
==============
RB_DecalVolume_PreparePipelineConstants
==============
*/

void __fastcall RB_DecalVolume_PreparePipelineConstants(const GfxViewInfo *viewInfo, unsigned int frame, unsigned int workgroupOffset, unsigned int workgroupCount, unsigned int workgroupTransient, R_RT_ColorHandle *occlusionTexture, DecalVolumeCsConstants *clusterConstantsTmp)
{
  ?RB_DecalVolume_PreparePipelineConstants@@YAXPEBUGfxViewInfo@@IIIIVR_RT_ColorHandle@@AEAUDecalVolumeCsConstants@@@Z(viewInfo, frame, workgroupOffset, workgroupCount, workgroupTransient, occlusionTexture, clusterConstantsTmp);
}

/*
==============
R_DecalVolume_PipelineCopyDebugInfo
==============
*/

void __fastcall R_DecalVolume_PipelineCopyDebugInfo(ComputeCmdBufState *state, unsigned int frame, const GfxWrappedBuffer *cullDecalsCount, const GfxWrappedBuffer *materialInfo, const GfxWrappedBuffer *materialInfoCount, const GfxWrappedBuffer *decalIndicesCounts, const GfxWrappedBuffer **cellIndirectionCount)
{
  ?R_DecalVolume_PipelineCopyDebugInfo@@YAXPEAUComputeCmdBufState@@IPEBUGfxWrappedBuffer@@111QEAPEBU2@@Z(state, frame, cullDecalsCount, materialInfo, materialInfoCount, decalIndicesCounts, cellIndirectionCount);
}

/*
==============
R_DecalVolume_CalculateClusterResolutionPerPass
==============
*/

void __fastcall R_DecalVolume_CalculateClusterResolutionPerPass(unsigned int rtWidth, unsigned int rtHeight, DecalVolumeClustering *outClustering)
{
  ?R_DecalVolume_CalculateClusterResolutionPerPass@@YAXIIPEAUDecalVolumeClustering@@@Z(rtWidth, rtHeight, outClustering);
}

/*
==============
R_DecalVolumes_AllocateDynamic
==============
*/

GfxDynamicDecalVolumeIndex __fastcall R_DecalVolumes_AllocateDynamic(unsigned int uid)
{
  return ?R_DecalVolumes_AllocateDynamic@@YA?AW4GfxDynamicDecalVolumeIndex@@I@Z(uid);
}

/*
==============
R_DecalVolumes_ManageAtlas
==============
*/

void R_DecalVolumes_ManageAtlas(void)
{
  ?R_DecalVolumes_ManageAtlas@@YAXXZ();
}

/*
==============
R_DecalVolumes_FillBufferGridCmdPending
==============
*/

bool __fastcall R_DecalVolumes_FillBufferGridCmdPending(void *data)
{
  return ?R_DecalVolumes_FillBufferGridCmdPending@@YA_NPEAX@Z(data);
}

/*
==============
R_DecalVolumes_ShutdownWorldBuffers
==============
*/

void __fastcall R_DecalVolumes_ShutdownWorldBuffers(GfxWorld *world)
{
  ?R_DecalVolumes_ShutdownWorldBuffers@@YAXPEAUGfxWorld@@@Z(world);
}

/*
==============
R_DecalVolume_PipelineGenerateClusteringData
==============
*/

void __fastcall R_DecalVolume_PipelineGenerateClusteringData(ComputeCmdBufState *state, const GfxViewInfo *viewInfo, unsigned int frame, const DecalVolumePiplineGenerateResourcePtrs *res)
{
  ?R_DecalVolume_PipelineGenerateClusteringData@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@IAEBUDecalVolumePiplineGenerateResourcePtrs@@@Z(state, viewInfo, frame, res);
}

/*
==============
R_DecalVolumes_ReleaseTextureCheckLeave
==============
*/

void R_DecalVolumes_ReleaseTextureCheckLeave(void)
{
  ?R_DecalVolumes_ReleaseTextureCheckLeave@@YAXXZ();
}

/*
==============
R_DecalVolumes_CheckInvalidate
==============
*/

unsigned int __fastcall R_DecalVolumes_CheckInvalidate()
{
  return ?R_DecalVolumes_CheckInvalidate@@YAIXZ();
}

/*
==============
R_DecalVolumes_GetRequestedImageMip
==============
*/

bool __fastcall R_DecalVolumes_GetRequestedImageMip(unsigned int index, const GfxImage **outImage, StreamImageMip *outRequestedMip, float *outDistance)
{
  return ?R_DecalVolumes_GetRequestedImageMip@@YA_NIPEAPEBUGfxImage@@PEAW4StreamImageMip@@PEAM@Z(index, outImage, outRequestedMip, outDistance);
}

/*
==============
R_DecalVolumes_GetMaterialInfo
==============
*/

bool __fastcall R_DecalVolumes_GetMaterialInfo(unsigned int decalIndex, bool isDynamic, GfxDecalVolumeMaterial **outMaterial, GfxDecalVolumeMask **outMask, DecalVolumesNormalBlendMode *outNormalBlendMode, unsigned int *outMapIndex, unsigned int *outDrawOrder)
{
  return ?R_DecalVolumes_GetMaterialInfo@@YA_NI_NPEAPEAUGfxDecalVolumeMaterial@@PEAPEAUGfxDecalVolumeMask@@PEAW4DecalVolumesNormalBlendMode@@PEAI4@Z(decalIndex, isDynamic, outMaterial, outMask, outNormalBlendMode, outMapIndex, outDrawOrder);
}

/*
==============
R_DecalVolume_CalculateClusterResolutionPerPass
==============
*/

void __fastcall R_DecalVolume_CalculateClusterResolutionPerPass(unsigned int rtWidth, unsigned int rtHeight)
{
  ?R_DecalVolume_CalculateClusterResolutionPerPass@@YAXII@Z(rtWidth, rtHeight);
}

/*
==============
R_DecalVolume_InitClustering
==============
*/

void __fastcall R_DecalVolume_InitClustering(unsigned int maxRtWidth, unsigned int maxRtHeight, bool tiling, DecalVolumeClustering *outClustering)
{
  ?R_DecalVolume_InitClustering@@YAXII_NPEAUDecalVolumeClustering@@@Z(maxRtWidth, maxRtHeight, tiling, outClustering);
}

/*
==============
R_DecalVolumes_GetDynamicIndex
==============
*/

GfxDynamicDecalVolumeIndex __fastcall R_DecalVolumes_GetDynamicIndex(unsigned int uid)
{
  return ?R_DecalVolumes_GetDynamicIndex@@YA?AW4GfxDynamicDecalVolumeIndex@@I@Z(uid);
}

/*
==============
R_DecalVolumesGrid_ProcessIntDecalVolumeObjectSpace
==============
*/

void __fastcall R_DecalVolumesGrid_ProcessIntDecalVolumeObjectSpace(const DecalVolumeIntermediate *m, const tmat33_t<vec3_t> *worldAxis, ImageAtlasDrawingContext *drawingContext, const DecalVolumeStreamingInfo *streamingInfo, GfxDecalVolumeDrawData *dstData, float *outDecalScale)
{
  ?R_DecalVolumesGrid_ProcessIntDecalVolumeObjectSpace@@YAXAEBUDecalVolumeIntermediate@@AEBT?$tmat33_t@Tvec3_t@@@@AEAUImageAtlasDrawingContext@@AEBUDecalVolumeStreamingInfo@@AEAUGfxDecalVolumeDrawData@@AEAM@Z(m, worldAxis, drawingContext, streamingInfo, dstData, outDecalScale);
}

/*
==============
R_DecalVolume_BuildDecalVolumeCsConstants
==============
*/

void __fastcall R_DecalVolume_BuildDecalVolumeCsConstants(const GfxViewInfo *viewInfo, DecalVolumeCsConstants *clusterConstantsTmp)
{
  ?R_DecalVolume_BuildDecalVolumeCsConstants@@YAXPEBUGfxViewInfo@@AEAUDecalVolumeCsConstants@@@Z(viewInfo, clusterConstantsTmp);
}

/*
==============
R_ToggleFrustumGridFrame
==============
*/

unsigned int __fastcall R_ToggleFrustumGridFrame()
{
  return ?R_ToggleFrustumGridFrame@@YAIXZ();
}

/*
==============
R_DecalVolume_PipelineGenerateDrawData
==============
*/

void __fastcall R_DecalVolume_PipelineGenerateDrawData(ComputeCmdBufState *state, const GfxViewInfo *viewInfo, unsigned int frame, const DecalVolumePiplineGenerateResourcePtrs *res)
{
  ?R_DecalVolume_PipelineGenerateDrawData@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@IAEBUDecalVolumePiplineGenerateResourcePtrs@@@Z(state, viewInfo, frame, res);
}

/*
==============
R_DecalVolume_PipelineCullingPart2
==============
*/

void __fastcall R_DecalVolume_PipelineCullingPart2(ComputeCmdBufState *state, const GfxViewInfo *viewInfo, unsigned int frame, const DecalVolumePiplineCullingPart2ResourcePtrs *res)
{
  ?R_DecalVolume_PipelineCullingPart2@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@IAEBUDecalVolumePiplineCullingPart2ResourcePtrs@@@Z(state, viewInfo, frame, res);
}

/*
==============
R_DecalVolumes_CopyGfxDecalVolumeMaterial
==============
*/

void __fastcall R_DecalVolumes_CopyGfxDecalVolumeMaterial(const GfxDecalVolumeMaterial *from, GfxDecalVolumeMaterial *to, const char *toNewAssetName)
{
  ?R_DecalVolumes_CopyGfxDecalVolumeMaterial@@YAXPEBUGfxDecalVolumeMaterial@@PEAU1@PEBD@Z(from, to, toNewAssetName);
}

/*
==============
R_AddStaticDecalVolumes
==============
*/

void __fastcall R_AddStaticDecalVolumes(const void *const cmd)
{
  ?R_AddStaticDecalVolumes@@YAXQEBX@Z(cmd);
}

/*
==============
R_DecalVolumesMarks_DebugAdd
==============
*/

void __fastcall R_DecalVolumesMarks_DebugAdd(const vec3_t *origin, const vec3_t *halfSize, const tmat33_t<vec3_t> *axis, const vec4_t *color)
{
  ?R_DecalVolumesMarks_DebugAdd@@YAXAEBTvec3_t@@0AEBT?$tmat33_t@Tvec3_t@@@@AEBTvec4_t@@@Z(origin, halfSize, axis, color);
}

/*
==============
Load_DecalVolumesBuffer
==============
*/

void __fastcall Load_DecalVolumesBuffer(GfxWrappedBuffer *buffer, GfxWorldDraw *gfxWorld)
{
  ?Load_DecalVolumesBuffer@@YAXPEAUGfxWrappedBuffer@@PEAUGfxWorldDraw@@@Z(buffer, gfxWorld);
}

/*
==============
R_DecalVolumes_ReleaseGfxDecalVolumeMaterial
==============
*/

void __fastcall R_DecalVolumes_ReleaseGfxDecalVolumeMaterial(const GfxDecalVolumeMaterial *material, bool ownsResources)
{
  ?R_DecalVolumes_ReleaseGfxDecalVolumeMaterial@@YAXPEBUGfxDecalVolumeMaterial@@_N@Z(material, ownsResources);
}

/*
==============
R_DecalVolumes_ReleaseTextureCheckEnter
==============
*/

void R_DecalVolumes_ReleaseTextureCheckEnter(void)
{
  ?R_DecalVolumes_ReleaseTextureCheckEnter@@YAXXZ();
}

/*
==============
R_DecalVolumes_ReleaseGfxImageAssetInternal
==============
*/

void __fastcall R_DecalVolumes_ReleaseGfxImageAssetInternal(const GfxImage *image, bool ownsResources, bool lock)
{
  ?R_DecalVolumes_ReleaseGfxImageAssetInternal@@YAXPEBUGfxImage@@_N1@Z(image, ownsResources, lock);
}

/*
==============
R_DecalVolumes_CopyGfxDecalVolumeMaskEnd
==============
*/

void __fastcall R_DecalVolumes_CopyGfxDecalVolumeMaskEnd(const GfxDecalVolumeMask *from, GfxDecalVolumeMask *to, const char *toNewAssetName)
{
  ?R_DecalVolumes_CopyGfxDecalVolumeMaskEnd@@YAXPEBUGfxDecalVolumeMask@@PEAU1@PEBD@Z(from, to, toNewAssetName);
}

/*
==============
R_DecalVolumes_CreateGfxImageAsset
==============
*/

void __fastcall R_DecalVolumes_CreateGfxImageAsset(const GfxImage *image)
{
  ?R_DecalVolumes_CreateGfxImageAsset@@YAXPEBUGfxImage@@@Z(image);
}

/*
==============
R_DecalVolumes_MoveGfxDecalVolumeMaterial
==============
*/

void __fastcall R_DecalVolumes_MoveGfxDecalVolumeMaterial(const GfxDecalVolumeMaterial *from, GfxDecalVolumeMaterial *to, bool toOwnsResources)
{
  ?R_DecalVolumes_MoveGfxDecalVolumeMaterial@@YAXPEBUGfxDecalVolumeMaterial@@PEAU1@_N@Z(from, to, toOwnsResources);
}

/*
==============
R_DecalVolumes_RadiantLive_PackMaterialInfo
==============
*/

DecalVolumePackedMaterialInfo __fastcall R_DecalVolumes_RadiantLive_PackMaterialInfo(const GfxDecalVolumeMaterial *material, const GfxDecalVolumeMask *mask, DecalVolumesNormalBlendMode normalBlendMode, unsigned int mapIndex, unsigned int drawOrder)
{
  return ?R_DecalVolumes_RadiantLive_PackMaterialInfo@@YA?ATDecalVolumePackedMaterialInfo@@PEBUGfxDecalVolumeMaterial@@PEBUGfxDecalVolumeMask@@W4DecalVolumesNormalBlendMode@@II@Z(material, mask, normalBlendMode, mapIndex, drawOrder);
}

/*
==============
R_DecalVolume_PipelineIndirectArgs
==============
*/

void __fastcall R_DecalVolume_PipelineIndirectArgs(ComputeCmdBufState *state, const GfxWrappedBuffer *cullDecalsCount, const GfxWrappedRWBuffer *decalClusteringDataCount, const GfxWrappedRWBuffer *cullIndirectArgs)
{
  ?R_DecalVolume_PipelineIndirectArgs@@YAXPEAUComputeCmdBufState@@PEBUGfxWrappedBuffer@@PEBUGfxWrappedRWBuffer@@2@Z(state, cullDecalsCount, decalClusteringDataCount, cullIndirectArgs);
}

/*
==============
R_DecalVolumes_Show3DDebug2
==============
*/

void __fastcall R_DecalVolumes_Show3DDebug2(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?R_DecalVolumes_Show3DDebug2@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(gfxContext, viewInfo, data);
}

/*
==============
R_DecalVolumes_FillBufferGridCmd
==============
*/

void __fastcall R_DecalVolumes_FillBufferGridCmd(const void *const cmd)
{
  ?R_DecalVolumes_FillBufferGridCmd@@YAXQEBX@Z(cmd);
}

/*
==============
R_DecalVolumes_SetSelected
==============
*/

bool __fastcall R_DecalVolumes_SetSelected(unsigned int decalIndex, bool isDynamic, bool selected)
{
  return ?R_DecalVolumes_SetSelected@@YA_NI_N0@Z(decalIndex, isDynamic, selected);
}

/*
==============
RB_DecalVolume_PipelineProcess
==============
*/

void __fastcall RB_DecalVolume_PipelineProcess(ComputeCmdBufState *state, const GfxViewInfo *viewInfo, const GfxBackEndData *data, unsigned int decalCount)
{
  ?RB_DecalVolume_PipelineProcess@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@I@Z(state, viewInfo, data, decalCount);
}

/*
==============
R_DecalVolumes_SwapGfxDecalVolumeMaterialEnd
==============
*/

void __fastcall R_DecalVolumes_SwapGfxDecalVolumeMaterialEnd(const GfxDecalVolumeMaterial *from, GfxDecalVolumeMaterial *to)
{
  ?R_DecalVolumes_SwapGfxDecalVolumeMaterialEnd@@YAXPEBUGfxDecalVolumeMaterial@@PEAU1@@Z(from, to);
}

/*
==============
R_RegisterDecalVolumesDvars
==============
*/

void R_RegisterDecalVolumesDvars(void)
{
  ?R_RegisterDecalVolumesDvars@@YAXXZ();
}

/*
==============
R_DecalVolume_GetNumClusteringPasses
==============
*/

unsigned int __fastcall R_DecalVolume_GetNumClusteringPasses()
{
  return ?R_DecalVolume_GetNumClusteringPasses@@YAIXZ();
}

/*
==============
R_DecalVolumes_ReleaseGfxImageAsset
==============
*/

void __fastcall R_DecalVolumes_ReleaseGfxImageAsset(const GfxImage *image, bool ownsResources)
{
  ?R_DecalVolumes_ReleaseGfxImageAsset@@YAXPEBUGfxImage@@_N@Z(image, ownsResources);
}

/*
==============
R_DecalVolume_PipelineCopyLODData
==============
*/

void __fastcall R_DecalVolume_PipelineCopyLODData(ComputeCmdBufState *state, unsigned int frame, const GfxWrappedBuffer *materialLods, const GfxWrappedBuffer *maskLods)
{
  ?R_DecalVolume_PipelineCopyLODData@@YAXPEAUComputeCmdBufState@@IPEBUGfxWrappedBuffer@@1@Z(state, frame, materialLods, maskLods);
}

/*
==============
RB_MinMaxDepthImage
==============
*/

GfxImage *__fastcall RB_MinMaxDepthImage()
{
  return ?RB_MinMaxDepthImage@@YAPEAUGfxImage@@XZ();
}

/*
==============
R_DecalVolume_PipelineCullingPart0IndirectArgs
==============
*/

void __fastcall R_DecalVolume_PipelineCullingPart0IndirectArgs(ComputeCmdBufState *state, const GfxViewInfo *viewInfo, unsigned int frame, const GfxWrappedBuffer *cullDecalsCount, const GfxWrappedRWBuffer *collectionsIndirectArgs)
{
  ?R_DecalVolume_PipelineCullingPart0IndirectArgs@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@IPEBUGfxWrappedBuffer@@PEBUGfxWrappedRWBuffer@@@Z(state, viewInfo, frame, cullDecalsCount, collectionsIndirectArgs);
}

/*
==============
R_DecalVolumes_CopyGfxImage
==============
*/

void __fastcall R_DecalVolumes_CopyGfxImage(const GfxImage *from, GfxImage *to, const char *toNewAssetName)
{
  ?R_DecalVolumes_CopyGfxImage@@YAXPEBUGfxImage@@PEAU1@PEBD@Z(from, to, toNewAssetName);
}

/*
==============
R_DecalVolumes_FillBufferCmd
==============
*/

void __fastcall R_DecalVolumes_FillBufferCmd(const void *const cmd)
{
  ?R_DecalVolumes_FillBufferCmd@@YAXQEBX@Z(cmd);
}

/*
==============
R_DecalVolumes_CreateGfxImageAssetInternal
==============
*/

void __fastcall R_DecalVolumes_CreateGfxImageAssetInternal(const GfxImage *image, bool lock)
{
  ?R_DecalVolumes_CreateGfxImageAssetInternal@@YAXPEBUGfxImage@@_N@Z(image, lock);
}

/*
==============
RB_DecalVolumes_UpdateAtlas
==============
*/

void __fastcall RB_DecalVolumes_UpdateAtlas(GfxCmdBufContext *gfxContext, const GfxBackEndData *data)
{
  ?RB_DecalVolumes_UpdateAtlas@@YAXUGfxCmdBufContext@@PEBUGfxBackEndData@@@Z(gfxContext, data);
}

/*
==============
R_DecalVolume_PipelineClearMaterialInfoBuffers
==============
*/

void __fastcall R_DecalVolume_PipelineClearMaterialInfoBuffers(ComputeCmdBufState *state, const GfxWrappedRWBuffer *materialDebugInfo, const GfxWrappedRWBuffer *materialDebugInfoCount)
{
  ?R_DecalVolume_PipelineClearMaterialInfoBuffers@@YAXPEAUComputeCmdBufState@@PEBUGfxWrappedRWBuffer@@1@Z(state, materialDebugInfo, materialDebugInfoCount);
}

/*
==============
R_DecalVolumesMarks_DebugDraw
==============
*/

void R_DecalVolumesMarks_DebugDraw(void)
{
  ?R_DecalVolumesMarks_DebugDraw@@YAXXZ();
}

/*
==============
R_DecalVolume_PipelineGenerateMaterialDebugInfo
==============
*/

void __fastcall R_DecalVolume_PipelineGenerateMaterialDebugInfo(ComputeCmdBufState *state, const GfxViewInfo *viewInfo, unsigned int frame, const DecalVolumePiplineMaterialDebugInfoResourcePtrs *res)
{
  ?R_DecalVolume_PipelineGenerateMaterialDebugInfo@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@IAEBUDecalVolumePiplineMaterialDebugInfoResourcePtrs@@@Z(state, viewInfo, frame, res);
}

/*
==============
R_DecalVolumes_FillBufferCmdPending
==============
*/

bool __fastcall R_DecalVolumes_FillBufferCmdPending(void *data)
{
  return ?R_DecalVolumes_FillBufferCmdPending@@YA_NPEAX@Z(data);
}

/*
==============
R_DecalVolumes_ReleaseDefaultMask
==============
*/

void R_DecalVolumes_ReleaseDefaultMask(void)
{
  ?R_DecalVolumes_ReleaseDefaultMask@@YAXXZ();
}

/*
==============
R_DecalVolume_FillCluster_Part1
==============
*/

void __fastcall R_DecalVolume_FillCluster_Part1(ComputeCmdBufState *state, const DecalVolumeClusteringPass *p, unsigned int prevMaxCellIndirectionsPerBucket, const unsigned int passIndex, const bool lastPass, DecalVolumeCsConstants *clusterConstantsTmp, const DecalVolumeFillClusterResourcePtrs *fcrp)
{
  ?R_DecalVolume_FillCluster_Part1@@YAXPEAUComputeCmdBufState@@AEBUDecalVolumeClusteringPass@@II_NAEAUDecalVolumeCsConstants@@AEBUDecalVolumeFillClusterResourcePtrs@@@Z(state, p, prevMaxCellIndirectionsPerBucket, passIndex, lastPass, clusterConstantsTmp, fcrp);
}

/*
==============
R_DecalVolumes_SwapGfxImageEnd
==============
*/

void __fastcall R_DecalVolumes_SwapGfxImageEnd(const GfxImage *from, GfxImage *to)
{
  ?R_DecalVolumes_SwapGfxImageEnd@@YAXPEBUGfxImage@@PEAU1@@Z(from, to);
}

/*
==============
R_DecalVolumesMarks_DebugEnabled
==============
*/

bool __fastcall R_DecalVolumesMarks_DebugEnabled()
{
  return ?R_DecalVolumesMarks_DebugEnabled@@YA_NXZ();
}

/*
==============
R_DecalVolume_PipelineClearBuffers
==============
*/

void __fastcall R_DecalVolume_PipelineClearBuffers(ComputeCmdBufState *state, unsigned int frame, const GfxWrappedRWBuffer *staticDecalIndices, const GfxWrappedRWBuffer *markDecalIndices, const GfxWrappedRWBuffer *cullDecalsCount, const GfxWrappedRWBuffer *materialLods, const GfxWrappedRWBuffer *maskLodsBuffer, const GfxWrappedRWBuffer *decalCount)
{
  ?R_DecalVolume_PipelineClearBuffers@@YAXPEAUComputeCmdBufState@@IPEBUGfxWrappedRWBuffer@@11111@Z(state, frame, staticDecalIndices, markDecalIndices, cullDecalsCount, materialLods, maskLodsBuffer, decalCount);
}

/*
==============
R_DecalVolumes_CreateGfxDecalVolumeMask
==============
*/

void __fastcall R_DecalVolumes_CreateGfxDecalVolumeMask(const GfxDecalVolumeMask *mask)
{
  ?R_DecalVolumes_CreateGfxDecalVolumeMask@@YAXPEBUGfxDecalVolumeMask@@@Z(mask);
}

/*
==============
R_DecalVolumes_DebugEnabled
==============
*/

bool __fastcall R_DecalVolumes_DebugEnabled()
{
  return ?R_DecalVolumes_DebugEnabled@@YA_NXZ();
}

/*
==============
R_DecalVolumes_MyChanges
==============
*/

void R_DecalVolumes_MyChanges(void)
{
  ?R_DecalVolumes_MyChanges@@YAXXZ();
}

/*
==============
R_DecalVolumeAddCommand
==============
*/

void __fastcall R_DecalVolumeAddCommand(const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?R_DecalVolumeAddCommand@@YAXPEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(viewInfo, data);
}

/*
==============
R_DecalVolumes_InitDefaultMask
==============
*/

void R_DecalVolumes_InitDefaultMask(void)
{
  ?R_DecalVolumes_InitDefaultMask@@YAXXZ();
}

/*
==============
R_DecalVolumes_UpdateGpuBuffers
==============
*/

void __fastcall R_DecalVolumes_UpdateGpuBuffers(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxBackEndData *data, unsigned int decalCount)
{
  ?R_DecalVolumes_UpdateGpuBuffers@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@I@Z(computeState, viewInfo, data, decalCount);
}

/*
==============
R_DecalVolumes_Show3DDebug
==============
*/

void __fastcall R_DecalVolumes_Show3DDebug(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxBackEndData *data, R_RT_ColorHandle *colorRt, R_RT_DepthHandle *depthRt, const GfxWrappedBuffer *debugData, const GfxWrappedBuffer *indirectArg, const GfxImage *floatZ, const GfxImage *tangentFrame, const GfxImage *entityIDVelocity, const GfxImage *packedStencil, bool taskGraph)
{
  ?R_DecalVolumes_Show3DDebug@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@VR_RT_ColorHandle@@VR_RT_DepthHandle@@PEBUGfxWrappedBuffer@@5PEBUGfxImage@@666_N@Z(gfxContext, viewInfo, data, colorRt, depthRt, debugData, indirectArg, floatZ, tangentFrame, entityIDVelocity, packedStencil, taskGraph);
}

/*
==============
R_InitDecalVolumes
==============
*/

void __fastcall R_InitDecalVolumes(bool reconfigure)
{
  ?R_InitDecalVolumes@@YAX_N@Z(reconfigure);
}

/*
==============
R_DecalVolumes_SwapGfxDecalVolumeMaskEnd
==============
*/

void __fastcall R_DecalVolumes_SwapGfxDecalVolumeMaskEnd(const GfxDecalVolumeMask *from, GfxDecalVolumeMask *to)
{
  ?R_DecalVolumes_SwapGfxDecalVolumeMaskEnd@@YAXPEBUGfxDecalVolumeMask@@PEAU1@@Z(from, to);
}

/*
==============
R_DecalVolumes_UpdateImageTexturesCheckEnter
==============
*/

void R_DecalVolumes_UpdateImageTexturesCheckEnter(void)
{
  ?R_DecalVolumes_UpdateImageTexturesCheckEnter@@YAXXZ();
}

/*
==============
R_DecalVolume_ClearBuffer
==============
*/

void __fastcall R_DecalVolume_ClearBuffer(ComputeCmdBufState *computeState, const GfxWrappedRWBuffer *buffer, unsigned int size, unsigned int clearValue)
{
  ?R_DecalVolume_ClearBuffer@@YAXPEAUComputeCmdBufState@@PEBUGfxWrappedRWBuffer@@II@Z(computeState, buffer, size, clearValue);
}

/*
==============
R_DecalVolume_GetClusteringPass
==============
*/

const DecalVolumeClusteringPass *__fastcall R_DecalVolume_GetClusteringPass(const unsigned int passIndex)
{
  return ?R_DecalVolume_GetClusteringPass@@YAAEBUDecalVolumeClusteringPass@@I@Z(passIndex);
}

/*
==============
R_DecalVolumes_GetMaskIndex
==============
*/

unsigned int __fastcall R_DecalVolumes_GetMaskIndex(const GfxDecalVolumeMask *mask)
{
  return ?R_DecalVolumes_GetMaskIndex@@YAIPEBUGfxDecalVolumeMask@@@Z(mask);
}

/*
==============
R_DecalVolumes_SwapGfxDecalVolumeMask
==============
*/

void __fastcall R_DecalVolumes_SwapGfxDecalVolumeMask(const GfxDecalVolumeMask *from, GfxDecalVolumeMask *to)
{
  ?R_DecalVolumes_SwapGfxDecalVolumeMask@@YAXPEBUGfxDecalVolumeMask@@PEAU1@@Z(from, to);
}

/*
==============
R_DecalVolumes_Wait
==============
*/

void __fastcall R_DecalVolumes_Wait(const GfxBackEndData *data, const GfxViewInfo *viewInfo)
{
  ?R_DecalVolumes_Wait@@YAXPEBUGfxBackEndData@@PEBUGfxViewInfo@@@Z(data, viewInfo);
}

/*
==============
RB_DecalVolumes_FrustumGridOverlay
==============
*/

void __fastcall RB_DecalVolumes_FrustumGridOverlay(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, int mode)
{
  ?RB_DecalVolumes_FrustumGridOverlay@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@H@Z(gfxContext, viewInfo, mode);
}

/*
==============
R_DecalVolumes_DrawDebugAxis
==============
*/

void __fastcall R_DecalVolumes_DrawDebugAxis(const vec3_t *origin, const tmat33_t<vec3_t> *axis, const vec3_t *halfSize)
{
  ?R_DecalVolumes_DrawDebugAxis@@YAXAEBTvec3_t@@AEBT?$tmat33_t@Tvec3_t@@@@0@Z(origin, axis, halfSize);
}

/*
==============
R_DecalVolumes_DrawDebugMaterial
==============
*/

void __fastcall R_DecalVolumes_DrawDebugMaterial(LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float *yOffsetText, unsigned int index, const MaterialDebugInfo *debugInfo, const vec4_t *materialColor, const GfxDecalVolumeMaterial *dvm, const GfxImage *blendMapOverride, const char *markVfxName)
{
  ?R_DecalVolumes_DrawDebugMaterial@@YAXW4LocalClientNum_t@@PEBUScreenPlacement@@AEAMIAEBUMaterialDebugInfo@@PEBTvec4_t@@PEBUGfxDecalVolumeMaterial@@PEBUGfxImage@@PEBD@Z(localClientNum, scrPlace, yOffsetText, index, debugInfo, materialColor, dvm, blendMapOverride, markVfxName);
}

/*
==============
R_DecalVolumes_ClearSelection
==============
*/

void R_DecalVolumes_ClearSelection(void)
{
  ?R_DecalVolumes_ClearSelection@@YAXXZ();
}

/*
==============
R_DecalVolumes_DrawDebugOBB
==============
*/

void __fastcall R_DecalVolumes_DrawDebugOBB(const vec3_t *origin, const tmat33_t<vec3_t> *axis, const vec3_t *halfSize, const vec4_t *color)
{
  ?R_DecalVolumes_DrawDebugOBB@@YAXAEBTvec3_t@@AEBT?$tmat33_t@Tvec3_t@@@@0AEBTvec4_t@@@Z(origin, axis, halfSize, color);
}

/*
==============
Load_DecalVolumesBuffer
==============
*/

void __fastcall Load_DecalVolumesBuffer(GfxWrappedBuffer *buffer, GfxDecalVolumeTransientData *transientData)
{
  ?Load_DecalVolumesBuffer@@YAXPEAUGfxWrappedBuffer@@PEAUGfxDecalVolumeTransientData@@@Z(buffer, transientData);
}

/*
==============
R_DecalVolumesGrid_ProcessIntDecalVolumeObjectSpace
==============
*/
void R_DecalVolumesGrid_ProcessIntDecalVolumeObjectSpace(unsigned int frame, unsigned __int16 drawDataIndex, AddToGridContext *context, const DecalVolumeIntermediate *m, const vec3_t *worldPos, const tmat33_t<vec3_t> *worldAxis, float *outDecalScale, DecalVolumeStreamingInfo *outStreamingInfo)
{
  GfxDecalVolumeDrawData *drawData; 
  char v13; 
  __int64 viewCount; 
  unsigned int v19; 
  float v20; 
  float *viewCosFovLimit; 
  StreamUpdateMultiView *p_multiView; 
  float v23; 
  __m128 v25; 
  __m128 v28; 
  __m128 v33; 
  __m128 v34; 
  __m128 v35; 
  __m128 v36; 
  __m128 v38; 
  __m128 v39; 
  float v46; 
  float v47; 
  float v48; 
  float v51; 
  float v52; 
  unsigned __int128 v54; 
  float v56; 
  __int128 v58; 
  float v59; 
  unsigned __int8 v62; 
  int v63; 
  int v64; 
  int v65; 
  __m128 v66; 

  drawData = s_decalVolumesGrid.decalVolumeGridFrameData[frame].drawData;
  v13 = R_DecalVolumeGrid_CalculateMaxSize(m->material, m->blendMapOverride);
  _XMM0 = LODWORD(m->halfSize.v[1]);
  viewCount = context->multiView.viewCount;
  __asm
  {
    vmaxss  xmm1, xmm0, dword ptr [rdi+30h]
    vmaxss  xmm13, xmm1, dword ptr [rdi+38h]
  }
  _XMM8 = LODWORD(FLOAT_3_4028235e38);
  v19 = 1 << v13;
  v20 = 0.0;
  if ( viewCount > 0 )
  {
    _XMM10 = LODWORD(worldPos->v[1]);
    viewCosFovLimit = context->multiView.viewCosFovLimit;
    p_multiView = &context->multiView;
    do
    {
      v23 = *(viewCosFovLimit - 32);
      v66.m128_i32[3] = 0;
      v25 = v66;
      v25.m128_f32[0] = worldPos->v[0];
      _XMM0 = v25;
      __asm
      {
        vinsertps xmm0, xmm0, xmm10, 10h
        vinsertps xmm0, xmm0, xmm12, 20h ; ' '
      }
      v28 = _mm128_sub_ps(_XMM0, p_multiView->viewPos[0].v);
      v66 = _XMM0;
      _XMM0 = _mm128_mul_ps(v28, v28);
      __asm
      {
        vinsertps xmm1, xmm0, xmm0, 8
        vhaddps xmm2, xmm1, xmm1
        vhaddps xmm0, xmm2, xmm2
      }
      v33 = _mm_sqrt_ps(_XMM0);
      v35 = v33;
      v35.m128_f32[0] = v33.m128_f32[0] - *(float *)&_XMM13;
      v34 = v35;
      v35.m128_f32[0] = (float)(v33.m128_f32[0] - *(float *)&_XMM13) / v33.m128_f32[0];
      v36 = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v35, v35, 0), v28), p_multiView->viewPos[0].v);
      v38 = v34;
      v38.m128_f32[0] = v34.m128_f32[0] * v34.m128_f32[0];
      _XMM5 = v38;
      if ( v23 > 1.0 && v38.m128_f32[0] > 0.0 )
      {
        v39 = _mm128_sub_ps(v36, p_multiView->viewPos[0].v);
        _XMM0 = _mm128_mul_ps(v39, p_multiView->viewDir[0].v);
        __asm
        {
          vhaddps xmm1, xmm0, xmm0
          vhaddps xmm3, xmm1, xmm1
        }
        if ( *(float *)&_XMM3 > 0.0 )
        {
          _XMM0 = _mm128_mul_ps(v39, v39);
          __asm
          {
            vhaddps xmm1, xmm0, xmm0
            vhaddps xmm0, xmm1, xmm1
          }
          v46 = _mm_sqrt_ps(_XMM0).m128_f32[0];
          v47 = v46 * *viewCosFovLimit;
          if ( *(float *)&_XMM3 > v47 )
          {
            v48 = (float)((float)(*(float *)&_XMM3 - v47) / (float)(v46 - v47)) * (float)((float)(*(float *)&_XMM3 - v47) / (float)(v46 - v47));
            v38.m128_f32[0] = v38.m128_f32[0] / (float)((float)((float)(v48 * v23) + (float)(1.0 - v48)) * (float)((float)(v48 * v23) + (float)(1.0 - v48)));
            _XMM5 = v38;
          }
        }
      }
      p_multiView = (StreamUpdateMultiView *)((char *)p_multiView + 16);
      ++viewCosFovLimit;
      __asm { vminss  xmm8, xmm5, xmm8 }
      --viewCount;
    }
    while ( viewCount );
  }
  _XMM0 = LODWORD(m->halfSize.v[2]);
  __asm { vmaxss  xmm1, xmm0, dword ptr [rdi+34h] }
  v51 = *(float *)&_XMM1 * 2.0;
  v52 = (float)v19;
  v54 = LODWORD(m->uvMatrix.v[3]) & (unsigned __int128)_xmm;
  *(float *)&v54 = COERCE_FLOAT(LODWORD(m->uvMatrix.v[3]) & _xmm) * v52;
  _XMM1 = v54;
  __asm { vminss  xmm1, xmm1, xmm0 }
  v56 = v51 / *(float *)&_XMM1;
  __asm { vxorpd  xmm10, xmm10, xmm10 }
  if ( (float)(v51 / *(float *)&_XMM1) < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_distance.h", 222, ASSERT_TYPE_ASSERT, "( texelDensity ) >= ( 0.0f )", "%s >= %s\n\t%g, %g", "texelDensity", "0.0f", v56, *(double *)&_XMM10) )
    __debugbreak();
  if ( v56 != 0.0 )
  {
    if ( (COERCE_UNSIGNED_INT(v56 * 1285.9119) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_distance.h", 229, ASSERT_TYPE_SANITY, "( !IS_NAN( himipRadius ) )", (const char *)&queryFormat, "!IS_NAN( himipRadius )") )
      __debugbreak();
    if ( (float)(v56 * 1285.9119) <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_distance.h", 230, ASSERT_TYPE_ASSERT, "( himipRadius ) > ( 0.0f )", "%s > %s\n\t%g, %g", "himipRadius", "0.0f", (float)(v56 * 1285.9119), *(double *)&_XMM10) )
      __debugbreak();
    v20 = 0.00000060475242 / (float)(v56 * v56);
  }
  v58 = _XMM8;
  v59 = (float)(*(float *)&_XMM8 + 1.0) * v20;
  *(float *)&v58 = v59 * 256.0;
  _XMM1 = v58;
  __asm { vminss  xmm2, xmm1, cs:__real@477fff00 }
  outStreamingInfo->distanceMetric = truncate_cast<unsigned short,unsigned int>((int)*(float *)&_XMM2);
  if ( v59 > 0.0099999998 )
  {
    v63 = 10;
    v64 = (int)fsqrt(v59);
    if ( v64 < 10 )
      v63 = v64;
    v65 = 7;
    if ( 10 - v63 > 7 )
      v65 = 10 - v63;
    v62 = truncate_cast<unsigned char,int>(v65);
  }
  else
  {
    v62 = 11;
  }
  outStreamingInfo->neededSize = v62;
  R_DecalVolumesGrid_ProcessIntDecalVolumeObjectSpace(m, worldAxis, context->drawingContext, outStreamingInfo, &drawData[(unsigned __int64)drawDataIndex], outDecalScale);
}

/*
==============
SpinMutexScopeLock::~SpinMutexScopeLock
==============
*/
void SpinMutexScopeLock::~SpinMutexScopeLock(SpinMutexScopeLock *this)
{
  this->mutex->flag._My_flag = 0;
}

/*
==============
DecalVolumeClusterSizeX
==============
*/
__int64 DecalVolumeClusterSizeX()
{
  const dvar_t *v1; 

  if ( R_Screenshot_InProcess() )
    return 128i64;
  v1 = DCONST_DVARINT_r_decalVolumesClusterXYSize;
  if ( !DCONST_DVARINT_r_decalVolumesClusterXYSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_decalVolumesClusterXYSize") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return v1->current.unsignedInt;
}

/*
==============
DecalVolumeClusterSizeY
==============
*/
__int64 DecalVolumeClusterSizeY()
{
  const dvar_t *v1; 

  if ( R_Screenshot_InProcess() )
    return 128i64;
  v1 = DCONST_DVARINT_r_decalVolumesClusterXYSize;
  if ( !DCONST_DVARINT_r_decalVolumesClusterXYSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_decalVolumesClusterXYSize") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return v1->current.unsignedInt;
}

/*
==============
ImageAtlas_AllocateEntry
==============
*/
__int64 ImageAtlas_AllocateEntry()
{
  unsigned __int16 entryFreelistCount; 
  __int64 result; 
  unsigned __int16 imageNameHash; 
  int entryHighwaterMark; 

  entryFreelistCount = s_decalVolumes.imageAtlas.entryFreelistCount_;
  if ( s_decalVolumes.imageAtlas.entryFreelistCount_ >= 0x1000u )
    return 0i64;
  result = s_decalVolumes.imageAtlas.entryFreelistHead_;
  imageNameHash = s_decalVolumes.imageAtlas.entryPool_[s_decalVolumes.imageAtlas.entryFreelistHead_].imageNameHash;
  ++s_decalVolumes.imageAtlas.entryFreelistCount_;
  entryHighwaterMark = (unsigned __int16)(entryFreelistCount + 1);
  s_decalVolumes.imageAtlas.entryFreelistHead_ = imageNameHash;
  if ( (int)s_decalVolumes.imageAtlas.stats.entryHighwaterMark > entryHighwaterMark )
    entryHighwaterMark = s_decalVolumes.imageAtlas.stats.entryHighwaterMark;
  s_decalVolumes.imageAtlas.stats.entryHighwaterMark = entryHighwaterMark;
  return result;
}

/*
==============
ImageAtlas_BackendCheckEnter
==============
*/
const char *ImageAtlas_BackendCheckEnter()
{
  const char *result; 

  if ( ((unsigned __int8)&s_decalVolumes.imageAtlas.atlasBackendCheck & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_decalVolumes.imageAtlas.atlasBackendCheck) )
    __debugbreak();
  if ( _InterlockedCompareExchange(&s_decalVolumes.imageAtlas.atlasBackendCheck, 1, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1259, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedCompareExchange( &s_decalVolumes.imageAtlas.atlasBackendCheck, 1, 0 ) == 0 ) )", "( s_decalVolumes.imageAtlas.atlasBackendCheckThread ) = %s", s_decalVolumes.imageAtlas.atlasBackendCheckThread) )
    __debugbreak();
  result = Sys_GetCurrentThreadContextName();
  s_decalVolumes.imageAtlas.atlasBackendCheckThread = result;
  return result;
}

/*
==============
ImageAtlas_BackendCheckLeave
==============
*/
char ImageAtlas_BackendCheckLeave()
{
  signed __int32 v0; 

  s_decalVolumes.imageAtlas.atlasBackendCheckThread = "none";
  if ( ((unsigned __int8)&s_decalVolumes.imageAtlas.atlasBackendCheck & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_decalVolumes.imageAtlas.atlasBackendCheck) )
    __debugbreak();
  v0 = _InterlockedCompareExchange(&s_decalVolumes.imageAtlas.atlasBackendCheck, 0, 1);
  if ( v0 != 1 )
  {
    LOBYTE(v0) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1271, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &s_decalVolumes.imageAtlas.atlasBackendCheck, 0, 1 ) == 1)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_decalVolumes.imageAtlas.atlasBackendCheck, 0, 1 ) == 1");
    if ( (_BYTE)v0 )
      __debugbreak();
  }
  return v0;
}

/*
==============
ImageAtlas_ClampProxyNeededSize
==============
*/
void ImageAtlas_ClampProxyNeededSize(ImageAtlasProxy *const proxy)
{
  const dvar_t *v1; 
  unsigned __int8 v3; 
  unsigned __int8 neededSize; 

  v1 = DCONST_DVARINT_r_decalVolumesMaxLoadedSize;
  if ( !DCONST_DVARINT_r_decalVolumesMaxLoadedSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_decalVolumesMaxLoadedSize") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  v3 = truncate_cast<unsigned char,int>(v1->current.integer);
  neededSize = proxy->neededSize;
  if ( neededSize > v3 )
    neededSize = v3;
  proxy->neededSize = neededSize;
}

/*
==============
ImageAtlas_CollectCandidatesForReleaseRecurse
==============
*/
void ImageAtlas_CollectCandidatesForReleaseRecurse(unsigned __int16 rootIndex, unsigned int age, unsigned __int16 *entries, unsigned int *outNumEntries)
{
  ImageAtlasEntry *Entry; 
  unsigned __int16 *children; 
  __int64 v10; 

  Entry = ImageAtlas_GetEntry(rootIndex);
  children = Entry->children;
  if ( Entry->children[0] )
  {
    v10 = 2i64;
    do
    {
      ImageAtlas_CollectCandidatesForReleaseRecurse(*children++, age, entries, outNumEntries);
      --v10;
    }
    while ( v10 );
  }
  if ( Entry->proxyIndex && Entry->lowerRes && !Entry->higherRes && Entry->renderTime < age )
    entries[(*outNumEntries)++] = rootIndex;
}

/*
==============
ImageAtlas_EvictEntry
==============
*/
void ImageAtlas_EvictEntry(unsigned __int16 entryIndex)
{
  ImageAtlasEntry *Entry; 
  unsigned __int16 lowerRes; 

  Entry = ImageAtlas_GetEntry(entryIndex);
  ImageAtlas_SetEntryIndex(Entry->proxyIndex, Entry->lowerRes);
  lowerRes = Entry->lowerRes;
  if ( lowerRes )
    ImageAtlas_GetEntry(lowerRes)->higherRes = 0;
  if ( !entryIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1836, ASSERT_TYPE_ASSERT, "(entryIndex != 0)", (const char *)&queryFormat, "entryIndex != IMAGE_ATLAS_INVALID_ENTRY") )
    __debugbreak();
  ImageAtlas_FreeSpaceRecurse(entryIndex);
}

/*
==============
ImageAtlas_FinalizeRequests
==============
*/
void ImageAtlas_FinalizeRequests(const ImageAtlasBackendJob *bjCandidates, const unsigned int numCandidateJobs, const unsigned int maxCandidateJobs, unsigned __int8 *proxyCopyPending)
{
  __int64 v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned __int16 *p_proxyIndex; 
  unsigned __int16 v11; 
  __int64 v12; 
  unsigned int imageIndex; 
  unsigned int v14; 
  GfxImage *GfxImageAtIndex; 
  unsigned __int8 v16; 
  unsigned __int16 width; 
  unsigned __int16 height; 
  int ImageHighestResidentPart; 
  __int64 v20; 
  unsigned __int8 v21; 
  char v22; 
  unsigned __int16 *v23; 
  unsigned __int8 *v24; 
  __int64 v25; 
  int *v26; 
  __int64 v27; 
  unsigned __int16 entryIndex; 
  __int64 v29; 
  __int64 v30; 
  unsigned __int16 *v31; 
  int v35[64]; 

  if ( numCandidateJobs > 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 2975, ASSERT_TYPE_ASSERT, "( ( numCandidateJobs <= ( 64 + (1 &&(((1 &&! 1) && (1 &&((!(1 &&(((1 &&(((1 &&(((1 && 1) || (1 &&! 1))?1:0)&& 1) || (1 &&(((1 &&(((1 && 1) && !(1 &&((0 || (1 && 1))?1:0)&& 1) && !(1 &&((0 || (1 &&! 1))?1:0)&& 1))?1:0)&& 1) && !0)?1:0)&& 1))?1:0)&& 1) || (1 &&((0 || (1 &&! 1))?1:0)&& 1))?1:0)&& 1) || 0 || ( (1 &&(((1 && 1) && !(1 &&((0 || (1 && 1))?1:0)&& 1) && !(1 &&((0 || (1 &&! 1))?1:0)&& 1))?1:0)&& 1) && 1 && !(1 &&((( !1 || !(1 &&((1 && (1 &&(((1 &&(((1 && 1) || (1 &&! 1))?1:0)&& 1) || (1 &&(((1 &&(((1 && 1) && !(1 &&((0 || (1 && 1))?1:0)&& 1) && !(1 &&((0 || (1 &&! 1))?1:0)&& 1))?1:0)&& 1) && !0)?1:0)&& 1))?1:0)&& 1))?1:0)&& 1) ) && !0)?1:0)&& 1) && !(1 &&! 1) && !(1 &&(((1 &&(((1 &&! 1))?1:0)&& 1) || (1 &&! 1))?1:0)&& 1) ))?1:0)&& 1) && !0 && (1 &&((!(1 &&! 1) && !(1 &&((0 || (1 &&(((1 &&(((1 &&! 1))?1:0)&& 1) || (1 &&! 1))?1:0)&& 1))?1:0)&& 1))?1:0)&& 1))?1:0)&& 1) * ( 512 - 64 ) ) ) )", "( numCandidateJobs ) = %u", numCandidateJobs) )
    __debugbreak();
  if ( !numCandidateJobs )
  {
    memcpy_0(s_decalVolumes.imageAtlas.proxyCopyPending, proxyCopyPending, sizeof(s_decalVolumes.imageAtlas.proxyCopyPending));
    return;
  }
  v7 = 0i64;
  v8 = 0;
  v9 = 0;
  p_proxyIndex = &bjCandidates->proxyIndex;
  v31 = &bjCandidates->proxyIndex;
  do
  {
    v11 = *p_proxyIndex;
    if ( *p_proxyIndex >= 0xC00u )
    {
      LODWORD(v30) = 3072;
      LODWORD(v29) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1358, ASSERT_TYPE_ASSERT, "(unsigned)( proxyIndex ) < (unsigned)( ( sizeof( *array_counter( s_decalVolumes.imageAtlas.proxyPool_ ) ) + 0 ) )", "proxyIndex doesn't index ARRAY_COUNT( s_decalVolumes.imageAtlas.proxyPool_ )\n\t%i not in [0, %i)", v29, v30) )
        __debugbreak();
    }
    v12 = v11;
    imageIndex = s_decalVolumes.imageAtlas.proxyPool_[v12].imageIndex;
    if ( imageIndex - 1 > 0x13FFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1396, ASSERT_TYPE_ASSERT, "(imageIndex > 0 && imageIndex <= ( IMAGE_POOL_SIZE ))", (const char *)&queryFormat, "imageIndex > 0 && imageIndex <= IMAGE_ATLAS_IMAGE_POOL_SIZE") )
      __debugbreak();
    v14 = ImageAtlas_ToDbIndex(imageIndex);
    GfxImageAtIndex = DB_GetGfxImageAtIndex(v14);
    v16 = GfxImageAtIndex->decalAtlasIndex & 7;
    if ( v16 >= 5u )
    {
      LODWORD(v30) = 5;
      LODWORD(v29) = v16;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume_load_obj.h", 185, ASSERT_TYPE_ASSERT, "(unsigned)( res ) < (unsigned)( 4 + 1 )", "res doesn't index DECAL_VOLUMES_NUM_ATLASES + 1\n\t%i not in [0, %i)", v29, v30) )
        __debugbreak();
    }
    if ( (unsigned __int8)(v16 - 1) > 5u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1351, ASSERT_TYPE_ASSERT, "( ( decalAtlasIndex > 0 && decalAtlasIndex <= 6 ) )", "( image->name ) = %s", GfxImageAtIndex->name) )
      __debugbreak();
    if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 2988, ASSERT_TYPE_ASSERT, "( ( ImageAtlas_GetDecalAtlasIndex( image ) > 0 ) )", "( image->name ) = %s", GfxImageAtIndex->name) )
      __debugbreak();
    if ( ImageAtlas_IsConstantColorImage(GfxImageAtIndex) )
    {
      width = 128;
      height = 128;
    }
    else
    {
      if ( (GfxImageAtIndex->flags & 0x40) != 0 )
      {
        ImageHighestResidentPart = Stream_GetImageHighestResidentPart(GfxImageAtIndex);
        v20 = ImageHighestResidentPart;
        if ( ImageHighestResidentPart == -1 )
          goto LABEL_44;
        if ( (unsigned int)ImageHighestResidentPart >= 4 )
        {
          LODWORD(v30) = 4;
          LODWORD(v29) = ImageHighestResidentPart;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 3004, ASSERT_TYPE_ASSERT, "(unsigned)( imagePartIndex ) < (unsigned)( ( sizeof( *array_counter( image->streams ) ) + 0 ) )", "imagePartIndex doesn't index ARRAY_COUNT( image->streams )\n\t%i not in [0, %i)", v29, v30) )
            __debugbreak();
        }
        width = GfxImageAtIndex->streams[v20].width;
        height = GfxImageAtIndex->streams[v20].height;
      }
      else
      {
        width = GfxImageAtIndex->width;
        height = GfxImageAtIndex->height;
      }
      if ( !width || !height )
        goto LABEL_44;
    }
    v21 = R_DecalVolumes_ImageLog2(width, height);
    if ( v21 >= s_decalVolumes.imageAtlas.proxyPool_[v12].neededSize || !s_decalVolumes.imageAtlas.proxyPool_[v12].loadedSize && v21 >= 5u && (v22 = *((_BYTE *)&s_decalVolumes.imageAtlas.proxyPool_[v12] + 15), (v22 & 0x40) == 0) && v22 >= 0 )
    {
      if ( v9 >= maxCandidateJobs )
      {
        LODWORD(v30) = maxCandidateJobs;
        LODWORD(v29) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 3023, ASSERT_TYPE_ASSERT, "(unsigned)( numValidJobs ) < (unsigned)( maxCandidateJobs )", "numValidJobs doesn't index maxCandidateJobs\n\t%i not in [0, %i)", v29, v30) )
          __debugbreak();
      }
      if ( v9 + s_decalVolumes.imageAtlas.backendJobs.write - s_decalVolumes.imageAtlas.backendJobs.read == 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 254, ASSERT_TYPE_ASSERT, "(( write + offset - read ) != PoolSize)", (const char *)&queryFormat, "( write + offset - read ) != PoolSize") )
        __debugbreak();
      v23 = v31;
      v24 = proxyCopyPending;
      v25 = ((_BYTE)v9++ + LOBYTE(s_decalVolumes.imageAtlas.backendJobs.write)) & 0x3F;
      s_decalVolumes.imageAtlas.backendJobs.pool[v25] = *(ImageAtlasBackendJob *)(v31 - 4);
      s_decalVolumes.imageAtlas.proxyPool_[v12].pendingSize = *((_BYTE *)v31 + 15);
      proxyCopyPending[*v31] = 1;
      goto LABEL_48;
    }
LABEL_44:
    if ( (unsigned int)v7 >= 0x40 )
    {
      LODWORD(v30) = 64;
      LODWORD(v29) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 3036, ASSERT_TYPE_ASSERT, "(unsigned)( numInvalidJobs ) < (unsigned)( ( sizeof( *array_counter( invalidJobs ) ) + 0 ) )", "numInvalidJobs doesn't index ARRAY_COUNT( invalidJobs )\n\t%i not in [0, %i)", v29, v30) )
        __debugbreak();
    }
    v23 = v31;
    v24 = proxyCopyPending;
    v35[v7] = v8;
    v7 = (unsigned int)(v7 + 1);
LABEL_48:
    p_proxyIndex = v23 + 16;
    ++v8;
    v31 = p_proxyIndex;
  }
  while ( v8 < numCandidateJobs );
  if ( (_DWORD)v7 + v9 != numCandidateJobs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 3041, ASSERT_TYPE_ASSERT, "(numValidJobs + numInvalidJobs == numCandidateJobs)", (const char *)&queryFormat, "numValidJobs + numInvalidJobs == numCandidateJobs") )
    __debugbreak();
  memcpy_0(s_decalVolumes.imageAtlas.proxyCopyPending, v24, sizeof(s_decalVolumes.imageAtlas.proxyCopyPending));
  if ( (_DWORD)v7 )
  {
    v26 = v35;
    do
    {
      v27 = (unsigned int)*v26;
      if ( (unsigned int)v27 >= numCandidateJobs )
      {
        LODWORD(v30) = numCandidateJobs;
        LODWORD(v29) = *v26;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 3050, ASSERT_TYPE_ASSERT, "(unsigned)( invalidCandidateIndex ) < (unsigned)( numCandidateJobs )", "invalidCandidateIndex doesn't index numCandidateJobs\n\t%i not in [0, %i)", v29, v30) )
          __debugbreak();
      }
      entryIndex = bjCandidates[v27].entryIndex;
      if ( !entryIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1836, ASSERT_TYPE_ASSERT, "(entryIndex != 0)", (const char *)&queryFormat, "entryIndex != IMAGE_ATLAS_INVALID_ENTRY") )
        __debugbreak();
      ImageAtlas_FreeSpaceRecurse(entryIndex);
      ++v26;
      --v7;
    }
    while ( v7 );
  }
  while ( _interlockedbittestandset(&s_decalVolumes.imageAtlas.backendJobsMutex.flag._My_flag, 0) )
    _mm_pause();
  s_decalVolumes.imageAtlas.backendJobs.write += v9;
  s_decalVolumes.imageAtlas.backendJobsMutex.flag._My_flag = 0;
  s_decalVolumes.imageAtlas.firstProxyToProcess = (numCandidateJobs + s_decalVolumes.imageAtlas.firstProxyToProcess) % s_decalVolumes.imageAtlas.numProxies;
}

/*
==============
ImageAtlas_FindPerfectMatchRecurse
==============
*/
char ImageAtlas_FindPerfectMatchRecurse(unsigned __int16 rootIndex, unsigned __int16 imageWidth, unsigned __int16 imageHeight, unsigned __int16 *outEntry)
{
  ImageAtlasEntry *Entry; 
  unsigned __int16 *children; 
  unsigned __int64 v10; 

  Entry = ImageAtlas_GetEntry(rootIndex);
  children = Entry->children;
  if ( Entry->children[0] )
  {
    v10 = 0i64;
    while ( !ImageAtlas_FindPerfectMatchRecurse(*children, imageWidth, imageHeight, outEntry) )
    {
      ++v10;
      ++children;
      if ( v10 >= 2 )
        return 0;
    }
  }
  else
  {
    if ( Entry->proxyIndex || Entry->w != imageWidth || Entry->h != imageHeight )
      return 0;
    *outEntry = rootIndex;
  }
  return 1;
}

/*
==============
ImageAtlas_FindSpace
==============
*/
__int64 ImageAtlas_FindSpace(unsigned int channelIndex, unsigned __int16 imageWidth, unsigned __int16 imageHeight, bool baseImage)
{
  __int64 v4; 
  unsigned __int64 v5; 
  unsigned __int16 v7; 
  unsigned int v9; 
  __int64 v10; 
  unsigned __int16 *v11; 
  unsigned int v12; 
  unsigned int v13; 
  __int64 v14; 
  ImageAtlasEntry *Entry; 
  unsigned __int16 *children; 
  unsigned __int16 *v17; 
  unsigned __int16 SpaceForBaseImage; 
  unsigned int v19; 
  unsigned __int16 *v20; 
  unsigned __int16 v21; 
  unsigned __int16 *v23; 
  ImageAtlasEntry *v24; 
  unsigned __int16 *v25; 
  unsigned __int64 v26; 
  ImageAtlasEntry *v27; 
  __int64 v28; 
  __int64 v29; 
  unsigned __int16 outEntry; 

  v4 = channelIndex;
  v5 = 0i64;
  v28 = channelIndex;
  v7 = 0;
  outEntry = 0;
  v9 = s_decalVolumes.imageAtlas.channelRootsCount[channelIndex];
  v10 = channelIndex;
  v11 = s_decalVolumes.imageAtlas.channelRoots[v10];
  v12 = 0;
  v29 = v10 * 8;
  if ( baseImage )
  {
    v13 = 0;
    v14 = 0i64;
    while ( 1 )
    {
      if ( v7 )
        goto LABEL_42;
      v7 = s_decalVolumes.imageAtlas.channelBaseImageRoot[v4][v14];
      Entry = ImageAtlas_GetEntry(v7);
      children = Entry->children;
      if ( Entry->children[0] )
        break;
      if ( !Entry->proxyIndex && Entry->w == imageWidth && Entry->h == imageHeight )
      {
        outEntry = v7;
        goto LABEL_15;
      }
LABEL_11:
      ImageAtlas_FindSpaceRecurse(v7, imageWidth, imageHeight, &outEntry);
      ++v13;
      ++v14;
      if ( v13 >= 2 )
        goto LABEL_14;
      v7 = outEntry;
      v4 = v28;
    }
    while ( !ImageAtlas_FindPerfectMatchRecurse(*children, imageWidth, imageHeight, &outEntry) )
    {
      ++v5;
      ++children;
      if ( v5 >= 2 )
      {
        v5 = 0i64;
        goto LABEL_11;
      }
    }
LABEL_14:
    v7 = outEntry;
    LODWORD(v5) = 0;
LABEL_15:
    if ( !v7 )
    {
      v17 = (unsigned __int16 *)((char *)s_decalVolumes.imageAtlas.channelBaseImageRoot[0] + v29);
      while ( !v7 )
      {
        SpaceForBaseImage = ImageAtlas_FindSpaceForBaseImage(*v17, imageWidth, imageHeight);
        LODWORD(v5) = v5 + 1;
        outEntry = SpaceForBaseImage;
        ++v17;
        v7 = SpaceForBaseImage;
        if ( (unsigned int)v5 >= 2 )
        {
          if ( !SpaceForBaseImage )
          {
            v19 = 2;
            v20 = (unsigned __int16 *)((char *)&s_decalVolumes.imageAtlas.channelBaseImageRoot[0][2] + v29);
            while ( !v7 )
            {
              v21 = ImageAtlas_FindSpaceForBaseImage(*v20, imageWidth, imageHeight);
              ++v19;
              outEntry = v21;
              ++v20;
              v7 = v21;
              if ( v19 >= 4 )
              {
                if ( v21 )
                  goto LABEL_42;
                return 0i64;
              }
            }
          }
          goto LABEL_42;
        }
      }
    }
    goto LABEL_42;
  }
  if ( v9 )
  {
    v23 = s_decalVolumes.imageAtlas.channelRoots[v10];
    while ( 1 )
    {
      v7 = *v23;
      v24 = ImageAtlas_GetEntry(*v23);
      v25 = v24->children;
      if ( v24->children[0] )
      {
        v26 = 0i64;
        while ( !ImageAtlas_FindPerfectMatchRecurse(*v25, imageWidth, imageHeight, &outEntry) )
        {
          ++v26;
          ++v25;
          if ( v26 >= 2 )
            goto LABEL_35;
        }
LABEL_36:
        v7 = outEntry;
        goto LABEL_37;
      }
      if ( !v24->proxyIndex && v24->w == imageWidth && v24->h == imageHeight )
        break;
LABEL_35:
      ++v12;
      ++v23;
      if ( v12 >= v9 )
        goto LABEL_36;
    }
    outEntry = v7;
LABEL_37:
    if ( v7 )
      goto LABEL_42;
  }
  v12 = 0;
  if ( v9 )
  {
    do
    {
      if ( ImageAtlas_FindSpaceRecurse(*v11, imageWidth, imageHeight, &outEntry) )
        break;
      ++v12;
      ++v11;
    }
    while ( v12 < v9 );
    v7 = outEntry;
    if ( outEntry )
    {
LABEL_42:
      v27 = ImageAtlas_GetEntry(v7);
      v27->slice = truncate_cast<unsigned char,unsigned int>(v12);
      *(_DWORD *)&v27->lowerRes = 0;
      return outEntry;
    }
  }
  return v7;
}

/*
==============
ImageAtlas_FindSpaceForBaseImage
==============
*/
__int64 ImageAtlas_FindSpaceForBaseImage(unsigned __int16 rootIndex, unsigned __int16 imageWidth, unsigned __int16 imageHeight)
{
  ImageAtlasEntry *Entry; 
  unsigned __int16 *children; 
  unsigned __int64 v8; 
  unsigned int v9; 
  ImageAtlasEntry *v10; 
  unsigned __int16 *v11; 
  __int64 v12; 
  unsigned int v13; 
  unsigned int i; 
  unsigned __int16 outEntry[8]; 
  unsigned __int16 entries[4096]; 
  unsigned int outNumEntries[4]; 

  outEntry[0] = 0;
  Entry = ImageAtlas_GetEntry(rootIndex);
  children = Entry->children;
  if ( Entry->children[0] )
  {
    v8 = 0i64;
    while ( !ImageAtlas_FindPerfectMatchRecurse(*children, imageWidth, imageHeight, outEntry) )
    {
      ++v8;
      ++children;
      if ( v8 >= 2 )
        goto LABEL_5;
    }
  }
  else
  {
    if ( !Entry->proxyIndex && Entry->w == imageWidth && Entry->h == imageHeight )
      return rootIndex;
LABEL_5:
    if ( !ImageAtlas_FindSpaceRecurse(rootIndex, imageWidth, imageHeight, outEntry) )
    {
      v9 = s_decalVolumes.imageAtlas.clock + 1;
      outNumEntries[0] = 0;
      v10 = ImageAtlas_GetEntry(rootIndex);
      v11 = v10->children;
      if ( v10->children[0] )
      {
        v12 = 2i64;
        do
        {
          ImageAtlas_CollectCandidatesForReleaseRecurse(*v11++, v9, entries, outNumEntries);
          --v12;
        }
        while ( v12 );
      }
      if ( v10->proxyIndex && v10->lowerRes && !v10->higherRes && v10->renderTime < v9 )
      {
        entries[outNumEntries[0]] = rootIndex;
        v13 = ++outNumEntries[0];
      }
      else
      {
        v13 = outNumEntries[0];
      }
      if ( v13 )
      {
        std::_Sort_unchecked<unsigned short *,ImageAtlasEntryComparer>(entries, &entries[v13], v13, (ImageAtlasEntryComparer)outEntry[0]);
        for ( i = outNumEntries[0]; outNumEntries[0]; i = outNumEntries[0] )
        {
          outNumEntries[0] = i - 1;
          ImageAtlas_EvictEntry(entries[i - 1]);
          if ( ImageAtlas_FindSpaceRecurse(rootIndex, imageWidth, imageHeight, outEntry) )
            break;
        }
      }
    }
  }
  return outEntry[0];
}

/*
==============
ImageAtlas_FindSpaceRecurse
==============
*/
bool ImageAtlas_FindSpaceRecurse(unsigned __int16 rootIndex, unsigned __int16 imageWidth, unsigned __int16 imageHeight, unsigned __int16 *outEntry)
{
  unsigned __int16 *v4; 
  unsigned __int16 v7; 
  __int64 v8; 
  ImageAtlasEntry *Entry; 
  int v10; 
  unsigned __int16 v11; 
  unsigned __int16 v12; 
  unsigned __int16 v13; 
  ImageAtlasEntry *v14; 
  ImageAtlasEntry *v15; 
  ImageAtlasEntry *v16; 
  unsigned __int16 x; 
  unsigned __int16 y; 
  unsigned __int16 v19; 
  unsigned __int16 h; 
  unsigned __int16 v21; 
  unsigned __int16 *i; 
  bool result; 

  v4 = outEntry;
  v7 = rootIndex;
  v8 = 0i64;
  Entry = ImageAtlas_GetEntry(rootIndex);
  if ( Entry->children[0] )
  {
LABEL_30:
    for ( i = Entry->children; !ImageAtlas_FindSpaceRecurse(*i, imageWidth, imageHeight, v4); ++i )
    {
      if ( (unsigned __int64)++v8 >= 2 )
        return 0;
    }
    return 1;
  }
  else
  {
    while ( 1 )
    {
      if ( Entry->proxyIndex )
        return 0;
      if ( Entry->w == imageWidth && Entry->h == imageHeight )
      {
        *outEntry = v7;
        return 1;
      }
      v10 = truncate_cast<unsigned short,unsigned int>(-imageWidth & (Entry->x + imageWidth - 1));
      v11 = truncate_cast<unsigned short,unsigned int>(-imageHeight & (Entry->y + imageHeight - 1));
      if ( (unsigned int)imageWidth + v10 > Entry->w + (unsigned int)Entry->x || imageHeight + (unsigned int)v11 > Entry->h + (unsigned int)Entry->y )
        return 0;
      Entry->children[0] = ImageAtlas_AllocateEntry();
      v12 = ImageAtlas_AllocateEntry();
      v13 = Entry->children[0];
      Entry->children[1] = v12;
      if ( !v12 )
        break;
      v14 = ImageAtlas_GetEntry(v13);
      v15 = ImageAtlas_GetEntry(Entry->children[1]);
      *(_DWORD *)v14->children = 0;
      v16 = v15;
      *(_DWORD *)v15->children = 0;
      v14->parent = v7;
      v15->parent = v7;
      x = Entry->x;
      if ( Entry->w - imageWidth >= Entry->h - imageHeight )
      {
        if ( x == (_WORD)v10 )
        {
          v14->x = x;
          v14->y = Entry->y;
          if ( imageWidth >= 0x80u || (v21 = 128, Entry->w <= 0x80u) )
            v21 = imageWidth;
          v14->w = v21;
          v14->h = Entry->h;
          v16->x = v14->w + Entry->x;
          v16->y = Entry->y;
          v16->w = Entry->w - v14->w;
        }
        else
        {
          v14->x = v10;
          v14->y = Entry->y;
          v14->w = Entry->w + Entry->x - v10;
          v14->h = Entry->h;
          v15->x = Entry->x;
          v15->y = Entry->y;
          v15->w = v10 - Entry->x;
        }
        h = Entry->h;
      }
      else
      {
        y = Entry->y;
        v14->x = x;
        if ( y == v11 )
        {
          v14->y = Entry->y;
          v14->w = Entry->w;
          v19 = 128;
          if ( imageHeight >= 0x80u || Entry->h <= 0x80u )
            v19 = imageHeight;
          v14->h = v19;
          v16->x = Entry->x;
          v16->y = v14->h + Entry->y;
          v16->w = Entry->w;
          h = Entry->h - v14->h;
        }
        else
        {
          v14->y = v11;
          v14->w = Entry->w;
          v14->h = Entry->h + Entry->y - v11;
          v16->x = Entry->x;
          v16->y = Entry->y;
          v16->w = Entry->w;
          h = v11 - Entry->y;
        }
      }
      v16->h = h;
      if ( (!v14->w || !v14->h || !v16->w || !h) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1684, ASSERT_TYPE_ASSERT, "(nc0->w > 0 && nc0->h > 0 && nc1->w > 0 && nc1->h > 0)", (const char *)&queryFormat, "nc0->w > 0 && nc0->h > 0 && nc1->w > 0 && nc1->h > 0") )
        __debugbreak();
      v7 = Entry->children[0];
      Entry = ImageAtlas_GetEntry(v7);
      if ( Entry->children[0] )
      {
        v4 = outEntry;
        goto LABEL_30;
      }
    }
    ImageAtlas_FreeEntry(v13);
    result = 0;
    Entry->children[0] = 0;
  }
  return result;
}

/*
==============
ImageAtlas_FreeEntry
==============
*/
void ImageAtlas_FreeEntry(unsigned __int16 entryIndex)
{
  const char *v2; 
  int v3; 
  const char *v4; 
  ImageAtlasEntry *Entry; 

  if ( entryIndex )
  {
    if ( entryIndex < 0x1000u )
      goto LABEL_7;
    v2 = "entryIndex < IMAGE_ATLAS_MAX_ENTRIES";
    v3 = 1488;
    v4 = "(entryIndex < (1024 * 4))";
  }
  else
  {
    v2 = "entryIndex != IMAGE_ATLAS_INVALID_ENTRY";
    v3 = 1487;
    v4 = "(entryIndex != 0)";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", v3, ASSERT_TYPE_ASSERT, v4, (const char *)&queryFormat, v2) )
    __debugbreak();
LABEL_7:
  if ( s_decalVolumes.imageAtlas.entryFreelistCount_ <= 0x1Du && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1490, ASSERT_TYPE_ASSERT, "(atlas->entryFreelistCount_ > ( 1 + 4 * 7 ))", (const char *)&queryFormat, "atlas->entryFreelistCount_ > IMAGE_ATLAS_ROOT_ENTRY_COUNT") )
    __debugbreak();
  Entry = ImageAtlas_GetEntry(entryIndex);
  Entry->imageNameHash = 0i64;
  *(_QWORD *)Entry->children = 0i64;
  *(_QWORD *)&Entry->y = 0i64;
  *(_QWORD *)&Entry->proxyIndex = 0i64;
  *(_QWORD *)&Entry->renderTime = 0i64;
  LOWORD(s_decalVolumes.imageAtlas.entryPool_[entryIndex].imageNameHash) = s_decalVolumes.imageAtlas.entryFreelistHead_;
  --s_decalVolumes.imageAtlas.entryFreelistCount_;
  s_decalVolumes.imageAtlas.entryFreelistHead_ = entryIndex;
}

/*
==============
ImageAtlas_FreeSpaceRecurse
==============
*/
void ImageAtlas_FreeSpaceRecurse(unsigned __int16 childIndex)
{
  ImageAtlasEntry *Entry; 
  bool v3; 
  unsigned __int16 parent; 
  unsigned __int64 v5; 
  ImageAtlasEntry *v6; 
  unsigned __int16 *children; 
  unsigned __int16 v8; 
  bool v9; 
  ImageAtlasEntry *v10; 
  __int64 v11; 
  __int64 v12; 

  Entry = ImageAtlas_GetEntry(childIndex);
  v3 = childIndex < 0x1Du;
  parent = Entry->parent;
  Entry->proxyIndex = 0;
  while ( parent )
  {
    if ( v3 )
      return;
    v5 = 0i64;
    v6 = ImageAtlas_GetEntry(parent);
    children = v6->children;
    do
    {
      v8 = *children;
      if ( *children )
      {
        if ( v8 < 0x1000u )
          goto LABEL_10;
        LODWORD(v12) = 4096;
        LODWORD(v11) = v8;
        v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1372, ASSERT_TYPE_ASSERT, "(unsigned)( entryIndex ) < (unsigned)( ( sizeof( *array_counter( s_decalVolumes.imageAtlas.entryPool_ ) ) + 0 ) )", "entryIndex doesn't index ARRAY_COUNT( s_decalVolumes.imageAtlas.entryPool_ )\n\t%i not in [0, %i)", v11, v12);
      }
      else
      {
        v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1815, ASSERT_TYPE_SANITY, "( ci != 0 )", (const char *)&queryFormat, "ci != IMAGE_ATLAS_INVALID_ENTRY");
      }
      if ( v9 )
        __debugbreak();
LABEL_10:
      if ( s_decalVolumes.imageAtlas.entryPool_[v8].proxyIndex || s_decalVolumes.imageAtlas.entryPool_[v8].children[0] )
        return;
      ++v5;
      ++children;
    }
    while ( v5 < 2 );
    ImageAtlas_FreeEntry(v6->children[0]);
    ImageAtlas_FreeEntry(v6->children[1]);
    *(_DWORD *)v6->children = 0;
    v10 = ImageAtlas_GetEntry(parent);
    v3 = parent < 0x1Du;
    parent = v10->parent;
    v10->proxyIndex = 0;
  }
}

/*
==============
ImageAtlas_GetDecalAtlasIndex
==============
*/
__int64 ImageAtlas_GetDecalAtlasIndex(const GfxImage *image)
{
  unsigned __int8 v2; 
  int v4; 
  int v5; 

  v2 = image->decalAtlasIndex & 7;
  if ( v2 >= 5u )
  {
    v5 = 5;
    v4 = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume_load_obj.h", 185, ASSERT_TYPE_ASSERT, "(unsigned)( res ) < (unsigned)( 4 + 1 )", "res doesn't index DECAL_VOLUMES_NUM_ATLASES + 1\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  if ( (unsigned __int8)(v2 - 1) > 5u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1351, ASSERT_TYPE_ASSERT, "( ( decalAtlasIndex > 0 && decalAtlasIndex <= 6 ) )", "( image->name ) = %s", image->name) )
    __debugbreak();
  return v2;
}

/*
==============
ImageAtlas_GetEntry
==============
*/
ImageAtlasEntry *ImageAtlas_GetEntry(unsigned __int16 entryIndex)
{
  int v3; 
  int v4; 

  if ( entryIndex >= 0x1000u )
  {
    v4 = 4096;
    v3 = entryIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1372, ASSERT_TYPE_ASSERT, "(unsigned)( entryIndex ) < (unsigned)( ( sizeof( *array_counter( s_decalVolumes.imageAtlas.entryPool_ ) ) + 0 ) )", "entryIndex doesn't index ARRAY_COUNT( s_decalVolumes.imageAtlas.entryPool_ )\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return &s_decalVolumes.imageAtlas.entryPool_[entryIndex];
}

/*
==============
ImageAtlas_GetImage
==============
*/
GfxImage *ImageAtlas_GetImage(unsigned int imageIndex)
{
  unsigned int v2; 

  if ( imageIndex - 1 > 0x13FFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1396, ASSERT_TYPE_ASSERT, "(imageIndex > 0 && imageIndex <= ( IMAGE_POOL_SIZE ))", (const char *)&queryFormat, "imageIndex > 0 && imageIndex <= IMAGE_ATLAS_IMAGE_POOL_SIZE") )
    __debugbreak();
  v2 = ImageAtlas_ToDbIndex(imageIndex);
  return DB_GetGfxImageAtIndex(v2);
}

/*
==============
ImageAtlas_GetImageFromProxy
==============
*/
GfxImage *ImageAtlas_GetImageFromProxy(unsigned __int16 proxyIndex)
{
  unsigned int imageIndex; 
  unsigned int v2; 

  imageIndex = ImageAtlas_GetProxy(proxyIndex)->imageIndex;
  if ( imageIndex - 1 > 0x13FFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1396, ASSERT_TYPE_ASSERT, "(imageIndex > 0 && imageIndex <= ( IMAGE_POOL_SIZE ))", (const char *)&queryFormat, "imageIndex > 0 && imageIndex <= IMAGE_ATLAS_IMAGE_POOL_SIZE") )
    __debugbreak();
  v2 = ImageAtlas_ToDbIndex(imageIndex);
  return DB_GetGfxImageAtIndex(v2);
}

/*
==============
ImageAtlas_GetImageIndex
==============
*/
__int64 ImageAtlas_GetImageIndex(const GfxImage *image)
{
  unsigned int GfxImageIndex; 
  unsigned int v2; 
  unsigned int v4; 
  __int64 v5; 
  int v6; 
  __int64 v7; 

  GfxImageIndex = DB_GetGfxImageIndex(image);
  v2 = GfxImageIndex;
  if ( GfxImageIndex < 0x14000 )
    return GfxImageIndex + 1;
  v6 = 81920;
  v4 = GfxImageIndex;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 988, ASSERT_TYPE_ASSERT, "(unsigned)( dbIndex ) < (unsigned)( IMAGE_POOL_SIZE )", "dbIndex doesn't index IMAGE_POOL_SIZE\n\t%i not in [0, %i)", v4, v6) )
    __debugbreak();
  LODWORD(v7) = 81920;
  LODWORD(v5) = v2;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 989, ASSERT_TYPE_ASSERT, "(unsigned)( dbIndex ) < (unsigned)( ( IMAGE_POOL_SIZE ) )", "dbIndex doesn't index IMAGE_ATLAS_IMAGE_POOL_SIZE\n\t%i not in [0, %i)", v5, v7) )
    __debugbreak();
  return v2 + 1;
}

/*
==============
ImageAtlas_GetProxy
==============
*/
ImageAtlasProxy *ImageAtlas_GetProxy(unsigned __int16 proxyIndex)
{
  int v3; 
  int v4; 

  if ( proxyIndex >= 0xC00u )
  {
    v4 = 3072;
    v3 = proxyIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1358, ASSERT_TYPE_ASSERT, "(unsigned)( proxyIndex ) < (unsigned)( ( sizeof( *array_counter( s_decalVolumes.imageAtlas.proxyPool_ ) ) + 0 ) )", "proxyIndex doesn't index ARRAY_COUNT( s_decalVolumes.imageAtlas.proxyPool_ )\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return (ImageAtlasProxy *)((char *)&s_decalVolumes.imageAtlas + 24 * proxyIndex);
}

/*
==============
ImageAtlas_Init
==============
*/

const char *__fastcall ImageAtlas_Init(double _XMM0_8)
{
  ImageAtlas *p_imageAtlas; 
  unsigned __int16 v2; 
  unsigned __int16 proxyFreelistHead; 
  ImageAtlasProxy *Proxy; 
  unsigned __int16 v5; 
  ImageAtlasEntry *entryPool; 
  int entryHighwaterMark; 
  unsigned __int8 *channelRootsCount; 
  unsigned __int16 (*channelBaseImageRoot)[4]; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned __int16 *v13; 
  __int64 v14; 
  unsigned __int16 entryFreelistHead; 
  int v16; 
  unsigned __int16 v17; 
  __int64 v18; 
  unsigned __int16 (*v19)[4]; 
  __int64 v20; 
  __int16 Space; 
  unsigned __int16 v22; 
  unsigned __int16 (*v23)[4]; 
  __int64 v24; 
  unsigned __int16 v25; 
  const char *result; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  __m256i v32; 
  __m256i v33; 
  Image_SetupParams params; 
  unsigned int v35; 
  unsigned __int8 *v36; 
  unsigned __int16 (*v37)[4]; 

  if ( s_decalVolumes.imageAtlas.initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 2119, ASSERT_TYPE_ASSERT, "(!atlas->initialized)", (const char *)&queryFormat, "!atlas->initialized") )
    __debugbreak();
  p_imageAtlas = &s_decalVolumes.imageAtlas;
  *(_DWORD *)&s_decalVolumes.imageAtlas.proxyFreelistHead_ = 0;
  v2 = 0;
  do
  {
    LOWORD(p_imageAtlas->proxyPool_[0].imageNameHash) = ++v2;
    p_imageAtlas = (ImageAtlas *)((char *)p_imageAtlas + 24);
  }
  while ( v2 < 0xC00u );
  if ( s_decalVolumes.imageAtlas.proxyFreelistCount_ < 0xC00u )
  {
    proxyFreelistHead = s_decalVolumes.imageAtlas.proxyFreelistHead_;
    s_decalVolumes.imageAtlas.proxyFreelistHead_ = s_decalVolumes.imageAtlas.proxyPool_[s_decalVolumes.imageAtlas.proxyFreelistHead_].imageNameHash;
    ++s_decalVolumes.imageAtlas.proxyFreelistCount_;
  }
  else
  {
    proxyFreelistHead = 0;
  }
  Proxy = ImageAtlas_GetProxy(proxyFreelistHead);
  Proxy->imageNameHash = 0i64;
  *(_QWORD *)&Proxy->imageIndex = 0i64;
  *(_QWORD *)&Proxy->loadedSize = 0i64;
  memset_0(s_decalVolumes.imageAtlas.proxies, 0, sizeof(s_decalVolumes.imageAtlas.proxies));
  *(_QWORD *)&s_decalVolumes.imageAtlas.numProxies = 0i64;
  memset_0(s_decalVolumes.imageAtlas.proxyCoords_, 0, sizeof(s_decalVolumes.imageAtlas.proxyCoords_));
  *(_DWORD *)&s_decalVolumes.imageAtlas.entryFreelistHead_ = 0;
  memset_0(s_decalVolumes.imageAtlas.entryPool_, 0, sizeof(s_decalVolumes.imageAtlas.entryPool_));
  v5 = 0;
  entryPool = s_decalVolumes.imageAtlas.entryPool_;
  do
  {
    LOWORD(entryPool->imageNameHash) = ++v5;
    ++entryPool;
  }
  while ( v5 < 0x1000u );
  if ( s_decalVolumes.imageAtlas.entryFreelistCount_ < 0x1000u )
  {
    entryHighwaterMark = (unsigned __int16)(s_decalVolumes.imageAtlas.entryFreelistCount_ + 1);
    s_decalVolumes.imageAtlas.entryFreelistHead_ = s_decalVolumes.imageAtlas.entryPool_[s_decalVolumes.imageAtlas.entryFreelistHead_].imageNameHash;
    if ( (int)s_decalVolumes.imageAtlas.stats.entryHighwaterMark > entryHighwaterMark )
      entryHighwaterMark = s_decalVolumes.imageAtlas.stats.entryHighwaterMark;
    s_decalVolumes.imageAtlas.stats.entryHighwaterMark = entryHighwaterMark;
    ++s_decalVolumes.imageAtlas.entryFreelistCount_;
  }
  memset_0(s_decalVolumes.imageAtlas.imageIndexToProxyIndex, 0, sizeof(s_decalVolumes.imageAtlas.imageIndexToProxyIndex));
  memset_0(s_decalVolumes.imageAtlas.priorityAdjust, 0, sizeof(s_decalVolumes.imageAtlas.priorityAdjust));
  memset_0(s_decalVolumes.imageAtlas.proxyCopyPending, 0, sizeof(s_decalVolumes.imageAtlas.proxyCopyPending));
  memset_0(s_decalVolumes.imageAtlas.drawingContext, 0, sizeof(s_decalVolumes.imageAtlas.drawingContext));
  *(_QWORD *)&s_decalVolumes.imageAtlas.numPriorityAdjust = 0i64;
  s_decalVolumes.imageAtlas.clock = 0;
  InitializeSRWLock((PSRWLOCK)&s_decalVolumes.imageAtlas.manageMutex);
  s_decalVolumes.imageAtlas.manageMutex.initialized = -1412623820;
  s_decalVolumes.imageAtlas.manageMutex.acquireLock = 0;
  *(_QWORD *)&s_decalVolumes.imageAtlas.atlasLock.readCount = 0i64;
  channelRootsCount = s_decalVolumes.imageAtlas.channelRootsCount;
  s_decalVolumes.imageAtlas.atlasLock.tempPriority.threadHandle = NULL;
  channelBaseImageRoot = s_decalVolumes.imageAtlas.channelBaseImageRoot;
  *(_QWORD *)&s_decalVolumes.imageAtlas.atlasLock.tempPriority.oldPriority = 0i64;
  *(_QWORD *)&s_decalVolumes.imageAtlas.atlasLock.writeThreadId = 0i64;
  v10 = 0;
  s_decalVolumes.imageAtlas.manageMutex.writeThreadId = 0;
  s_decalVolumes.imageAtlas.channelRoots[0] = s_decalVolumes.imageAtlas.primaryChannelRoots_;
  s_decalVolumes.imageAtlas.channelRoots[1] = s_decalVolumes.imageAtlas.secondaryChannelRoots_;
  s_decalVolumes.imageAtlas.channelRoots[2] = s_decalVolumes.imageAtlas.tertiaryChannelRoots_;
  s_decalVolumes.imageAtlas.channelRoots[3] = s_decalVolumes.imageAtlas.quaternaryChannelRoots_;
  s_decalVolumes.imageAtlas.myChangesLODDelay = 0;
  *(_DWORD *)s_decalVolumes.imageAtlas.channelRootsCount = 16843009;
  v35 = 0;
  v36 = s_decalVolumes.imageAtlas.channelRootsCount;
  v37 = s_decalVolumes.imageAtlas.channelBaseImageRoot;
  do
  {
    v11 = *channelRootsCount;
    v12 = 0;
    v13 = (unsigned __int16 *)*((_QWORD *)channelBaseImageRoot - 4);
    if ( *channelRootsCount )
    {
      v14 = 0i64;
      while ( 1 )
      {
        if ( s_decalVolumes.imageAtlas.entryFreelistCount_ < 0x1000u )
        {
          entryFreelistHead = s_decalVolumes.imageAtlas.entryFreelistHead_;
          v16 = (unsigned __int16)(s_decalVolumes.imageAtlas.entryFreelistCount_ + 1);
          s_decalVolumes.imageAtlas.entryFreelistHead_ = s_decalVolumes.imageAtlas.entryPool_[s_decalVolumes.imageAtlas.entryFreelistHead_].imageNameHash;
          if ( (int)s_decalVolumes.imageAtlas.stats.entryHighwaterMark > v16 )
            v16 = s_decalVolumes.imageAtlas.stats.entryHighwaterMark;
          s_decalVolumes.imageAtlas.stats.entryHighwaterMark = v16;
          ++s_decalVolumes.imageAtlas.entryFreelistCount_;
          *v13 = entryFreelistHead;
          if ( entryFreelistHead )
            goto LABEL_25;
        }
        else
        {
          *v13 = 0;
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 2207, ASSERT_TYPE_ASSERT, "(channelIndices[iSlice] != 0)", (const char *)&queryFormat, "channelIndices[iSlice] != IMAGE_ATLAS_INVALID_ENTRY") )
          __debugbreak();
LABEL_25:
        v17 = *v13;
        if ( *v13 >= 0x1000u )
        {
          LODWORD(v29) = 4096;
          LODWORD(v28) = v17;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1372, ASSERT_TYPE_ASSERT, "(unsigned)( entryIndex ) < (unsigned)( ( sizeof( *array_counter( s_decalVolumes.imageAtlas.entryPool_ ) ) + 0 ) )", "entryIndex doesn't index ARRAY_COUNT( s_decalVolumes.imageAtlas.entryPool_ )\n\t%i not in [0, %i)", v28, v29) )
            __debugbreak();
        }
        v18 = v17;
        *(_QWORD *)s_decalVolumes.imageAtlas.entryPool_[v18].children = 0i64;
        *(_DWORD *)&s_decalVolumes.imageAtlas.entryPool_[v18].y = 0x10000000;
        s_decalVolumes.imageAtlas.entryPool_[v18].h = 4096;
        if ( v12 > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)v12, "unsigned", v14) )
          __debugbreak();
        s_decalVolumes.imageAtlas.entryPool_[v18].slice = v12++;
        ++v14;
        ++v13;
        if ( v12 >= v11 )
        {
          channelBaseImageRoot = v37;
          v10 = v35;
          break;
        }
      }
    }
    v19 = channelBaseImageRoot;
    v20 = 4i64;
    do
    {
      Space = ImageAtlas_FindSpace(v10, 0x800u, 0x800u, 0);
      *(_WORD *)v19 = Space;
      if ( !Space && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 2221, ASSERT_TYPE_ASSERT, "(atlas->channelBaseImageRoot[iChan][iRootTile] != 0)", (const char *)&queryFormat, "atlas->channelBaseImageRoot[iChan][iRootTile] != IMAGE_ATLAS_INVALID_ENTRY") )
        __debugbreak();
      v22 = *(_WORD *)v19;
      if ( *(_WORD *)v19 >= 0x1000u )
      {
        LODWORD(v29) = 4096;
        LODWORD(v28) = v22;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1372, ASSERT_TYPE_ASSERT, "(unsigned)( entryIndex ) < (unsigned)( ( sizeof( *array_counter( s_decalVolumes.imageAtlas.entryPool_ ) ) + 0 ) )", "entryIndex doesn't index ARRAY_COUNT( s_decalVolumes.imageAtlas.entryPool_ )\n\t%i not in [0, %i)", v28, v29) )
          __debugbreak();
      }
      v19 = (unsigned __int16 (*)[4])((char *)v19 + 2);
      s_decalVolumes.imageAtlas.entryPool_[v22].proxyIndex = 1;
      --v20;
    }
    while ( v20 );
    v23 = v37;
    v24 = 4i64;
    do
    {
      v25 = *(_WORD *)v23;
      if ( *(_WORD *)v23 >= 0x1000u )
      {
        LODWORD(v29) = 4096;
        LODWORD(v28) = v25;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1372, ASSERT_TYPE_ASSERT, "(unsigned)( entryIndex ) < (unsigned)( ( sizeof( *array_counter( s_decalVolumes.imageAtlas.entryPool_ ) ) + 0 ) )", "entryIndex doesn't index ARRAY_COUNT( s_decalVolumes.imageAtlas.entryPool_ )\n\t%i not in [0, %i)", v28, v29) )
          __debugbreak();
      }
      v23 = (unsigned __int16 (*)[4])((char *)v23 + 2);
      s_decalVolumes.imageAtlas.entryPool_[v25].proxyIndex = 0;
      --v24;
    }
    while ( v24 );
    channelRootsCount = v36 + 1;
    v37 = v19;
    ++v10;
    ++v36;
    v35 = v10;
    channelBaseImageRoot = v19;
  }
  while ( v10 < 4 );
  if ( s_decalVolumes.imageAtlas.entryFreelistCount_ != 29 )
  {
    LODWORD(v31) = 29;
    LODWORD(v30) = s_decalVolumes.imageAtlas.entryFreelistCount_;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 2248, ASSERT_TYPE_ASSERT, "( atlas->entryFreelistCount_ ) == ( ( 1 + 4 * 7 ) )", "%s == %s\n\t%u, %u", "atlas->entryFreelistCount_", "IMAGE_ATLAS_ROOT_ENTRY_COUNT", v30, v31) )
      __debugbreak();
  }
  v33.m256i_i64[0] = 0i64;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  v32.m256i_i32[2] = 1;
  *(__int64 *)((char *)&v32.m256i_i64[1] + 4) = 1i64;
  *(_OWORD *)&v33.m256i_u64[1] = _XMM0;
  v33.m256i_i32[6] = -1;
  v32.m256i_i64[0] = 0x2000000020i64;
  v32.m256i_i32[5] = 0x800000;
  v32.m256i_i32[6] = 27;
  *(__m256i *)&params.width = v32;
  *(__m256i *)&params.customAllocFunc = v33;
  s_decalVolumes.imageAtlas.bc7Temp = Image_AllocProg(IMAGE_PROG_DECAL_VOLUME_BC7_TEMP, IMG_CATEGORY_RAW, TS_FUNCTION);
  Image_Setup(s_decalVolumes.imageAtlas.bc7Temp, &params);
  result = "none";
  s_decalVolumes.imageAtlas.atlasManageCheck = 0;
  s_decalVolumes.imageAtlas.atlasManageFillCheck = 0;
  s_decalVolumes.imageAtlas.atlasTabulateCheck = 0;
  s_decalVolumes.imageAtlas.atlasBackendCheck = 0;
  s_decalVolumes.imageAtlas.atlasUpdateImageTexturesCheck = 0;
  s_decalVolumes.imageAtlas.releaseTextureCheck = 0;
  s_decalVolumes.imageAtlas.releaseTextureCheckThread = "none";
  s_decalVolumes.imageAtlas.atlasUpdateImageTexturesCheckThread = "none";
  s_decalVolumes.imageAtlas.atlasBackendCheckThread = "none";
  s_decalVolumes.imageAtlas.atlasTabulateCheckThread = "none";
  s_decalVolumes.imageAtlas.atlasTabulateCheckLastThread = "none";
  s_decalVolumes.imageAtlas.atlasManageFillCheckThread = "none";
  s_decalVolumes.imageAtlas.atlasManageCheckThread = "none";
  *(_QWORD *)&s_decalVolumes.imageAtlas.atlasTabulateCheckWorkerCmdType = -1i64;
  s_decalVolumes.imageAtlas.initialized = 1;
  return result;
}

/*
==============
ImageAtlas_LeaveManage
==============
*/
void ImageAtlas_LeaveManage(unsigned int workerType)
{
  unsigned int workers; 
  unsigned int v3; 

  Sys_AcquireWriteLock(&s_decalVolumes.imageAtlas.manageMutex);
  workers = s_decalVolumes.imageAtlas.workers;
  if ( (s_decalVolumes.imageAtlas.workers & 0x7FFFFFFF) == 0 )
  {
    v3 = s_decalVolumes.imageAtlas.workers;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 3139, ASSERT_TYPE_ASSERT, "( ( imageAtlas->workers != 0 && imageAtlas->workers != ( 1U << 31 ) ) )", "( imageAtlas->workers ) = %i", v3) )
      __debugbreak();
    workers = s_decalVolumes.imageAtlas.workers;
  }
  s_decalVolumes.imageAtlas.workers = ~workerType & workers;
  Sys_ReleaseWriteLock(&s_decalVolumes.imageAtlas.manageMutex);
}

/*
==============
ImageAtlas_ManageCheckEnter
==============
*/
const char *ImageAtlas_ManageCheckEnter()
{
  const char *result; 

  if ( ((unsigned __int8)&s_decalVolumes.imageAtlas.atlasManageCheck & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_decalVolumes.imageAtlas.atlasManageCheck) )
    __debugbreak();
  if ( _InterlockedCompareExchange(&s_decalVolumes.imageAtlas.atlasManageCheck, 1, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1200, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedCompareExchange( &s_decalVolumes.imageAtlas.atlasManageCheck, 1, 0 ) == 0 ) )", "( s_decalVolumes.imageAtlas.atlasManageCheckThread ) = %s", s_decalVolumes.imageAtlas.atlasManageCheckThread) )
    __debugbreak();
  result = Sys_GetCurrentThreadContextName();
  s_decalVolumes.imageAtlas.atlasManageCheckThread = result;
  return result;
}

/*
==============
ImageAtlas_ManageCheckLeave
==============
*/
char ImageAtlas_ManageCheckLeave()
{
  signed __int32 v0; 

  s_decalVolumes.imageAtlas.atlasManageCheckThread = "none";
  if ( ((unsigned __int8)&s_decalVolumes.imageAtlas.atlasManageCheck & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_decalVolumes.imageAtlas.atlasManageCheck) )
    __debugbreak();
  v0 = _InterlockedCompareExchange(&s_decalVolumes.imageAtlas.atlasManageCheck, 0, 1);
  if ( v0 != 1 )
  {
    LOBYTE(v0) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1213, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &s_decalVolumes.imageAtlas.atlasManageCheck, 0, 1 ) == 1)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_decalVolumes.imageAtlas.atlasManageCheck, 0, 1 ) == 1");
    if ( (_BYTE)v0 )
      __debugbreak();
  }
  return v0;
}

/*
==============
ImageAtlas_ManageFillCheckEnter
==============
*/
const char *ImageAtlas_ManageFillCheckEnter()
{
  const char *result; 

  if ( ((unsigned __int8)&s_decalVolumes.imageAtlas.atlasManageFillCheck & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_decalVolumes.imageAtlas.atlasManageFillCheck) )
    __debugbreak();
  if ( _InterlockedCompareExchange(&s_decalVolumes.imageAtlas.atlasManageFillCheck, 1, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1219, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedCompareExchange( &s_decalVolumes.imageAtlas.atlasManageFillCheck, 1, 0 ) == 0 ) )", "( s_decalVolumes.imageAtlas.atlasManageFillCheckThread ) = %s", s_decalVolumes.imageAtlas.atlasManageFillCheckThread) )
    __debugbreak();
  result = Sys_GetCurrentThreadContextName();
  s_decalVolumes.imageAtlas.atlasManageFillCheckThread = result;
  return result;
}

/*
==============
ImageAtlas_ManageFillCheckLeave
==============
*/
char ImageAtlas_ManageFillCheckLeave()
{
  signed __int32 v0; 

  s_decalVolumes.imageAtlas.atlasManageFillCheckThread = "none";
  if ( ((unsigned __int8)&s_decalVolumes.imageAtlas.atlasManageFillCheck & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_decalVolumes.imageAtlas.atlasManageFillCheck) )
    __debugbreak();
  v0 = _InterlockedCompareExchange(&s_decalVolumes.imageAtlas.atlasManageFillCheck, 0, 1);
  if ( v0 != 1 )
  {
    LOBYTE(v0) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1231, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &s_decalVolumes.imageAtlas.atlasManageFillCheck, 0, 1 ) == 1)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_decalVolumes.imageAtlas.atlasManageFillCheck, 0, 1 ) == 1");
    if ( (_BYTE)v0 )
      __debugbreak();
  }
  return v0;
}

/*
==============
ImageAtlas_PrepareRequests
==============
*/
__int64 ImageAtlas_PrepareRequests(ImageAtlasBackendJob *bjCandidates, unsigned int maxCandidateJobs, unsigned __int8 *proxyCopyPending)
{
  __int64 result; 
  unsigned __int16 *proxies; 
  unsigned __int16 *v5; 
  __int64 numProxies; 
  ImageAtlasProxy *Proxy; 
  char v8; 
  unsigned __int8 v9; 
  unsigned __int8 v10; 
  unsigned int v11; 
  unsigned __int8 v12; 
  __int64 v13; 
  unsigned __int16 v14; 
  unsigned int imageIndex; 
  unsigned int v16; 
  unsigned __int8 v17; 
  unsigned __int8 v18; 
  unsigned __int16 v19; 
  char v20; 
  __int64 v21; 
  char v22; 
  unsigned __int16 entryIndex; 
  const dvar_t *v24; 
  unsigned __int8 *p_neededSize; 
  unsigned __int8 v26; 
  unsigned __int8 v27; 
  unsigned __int8 v28; 
  __int64 v29; 
  unsigned __int16 h; 
  unsigned int v31; 
  unsigned __int8 v32; 
  const dvar_t *v33; 
  unsigned int v34; 
  unsigned int v35; 
  bool enabled; 
  const dvar_t *v37; 
  bool v38; 
  const dvar_t *v39; 
  bool v40; 
  const dvar_t *v41; 
  unsigned __int8 v42; 
  unsigned int v43; 
  unsigned __int16 v44; 
  int v45; 
  unsigned __int16 v46; 
  unsigned __int16 v47; 
  ImageAtlasEntryComparer v48; 
  unsigned int v49; 
  unsigned __int16 v50; 
  bool v51; 
  unsigned __int16 v52; 
  unsigned int v53; 
  __int64 v54; 
  __int64 v55; 
  char *v56; 
  unsigned __int8 neededSizeClock; 
  unsigned __int8 neededSize; 
  unsigned __int8 v59; 
  int v60; 
  unsigned int v61; 
  signed __int8 v62; 
  unsigned __int8 v63; 
  bool v64; 
  unsigned __int8 v65; 
  const dvar_t *v66; 
  unsigned __int8 v67; 
  unsigned __int8 v68; 
  unsigned __int8 v69; 
  unsigned __int8 pendingSize; 
  unsigned __int8 v71; 
  ImageAtlasPriorityAdjust *v72; 
  bool v73; 
  unsigned __int8 loadedSize; 
  unsigned __int8 streamingDistanceBias; 
  int v76; 
  int v77; 
  unsigned __int8 v78; 
  unsigned int v79; 
  int v80; 
  unsigned int v81; 
  unsigned int v82; 
  GfxImage *GfxImageAtIndex; 
  unsigned __int8 v84; 
  unsigned __int8 v85; 
  int ImageHighestResidentPart; 
  __int64 v87; 
  unsigned __int16 width; 
  unsigned __int16 height; 
  unsigned __int16 v90; 
  unsigned int v91; 
  unsigned __int8 v92; 
  unsigned __int8 v93; 
  char v94; 
  unsigned __int8 v95; 
  unsigned int v96; 
  unsigned int v97; 
  unsigned int v98; 
  unsigned int v99; 
  unsigned int v100; 
  unsigned int v101; 
  unsigned int v102; 
  unsigned int v103; 
  unsigned int v104; 
  unsigned int v105; 
  unsigned int v106; 
  unsigned __int16 v107; 
  unsigned int v108; 
  unsigned int v109; 
  bool v110; 
  unsigned __int16 v111; 
  bool v112; 
  ImageAtlasEntry *Entry; 
  unsigned __int8 v114; 
  unsigned __int16 Space; 
  unsigned int v116; 
  unsigned __int16 *v117; 
  unsigned __int8 v118; 
  __int64 v119; 
  unsigned int v120; 
  unsigned __int16 v121; 
  ImageAtlasEntry *v122; 
  unsigned __int16 lowerRes; 
  unsigned int v124; 
  ImageAtlasEntry *v125; 
  ImageAtlasImageHash v126; 
  ImageAtlasBackendJob *v127; 
  __int64 v128; 
  __int64 v129; 
  unsigned int v130; 
  unsigned __int8 v131; 
  ImageAtlasEntryComparer v132; 
  unsigned __int8 v133; 
  unsigned int v134; 
  bool v135; 
  bool v136; 
  bool v137; 
  unsigned __int8 v138; 
  unsigned __int16 v139; 
  unsigned __int16 v140; 
  unsigned __int16 v141; 
  unsigned __int16 v142; 
  unsigned int v143; 
  __int64 v144; 
  unsigned int v145; 
  unsigned __int16 *v146; 
  unsigned int v147; 
  unsigned int v149; 
  char *v151; 
  unsigned __int16 entries[4096]; 
  unsigned int outNumEntries; 
  char v155; 

  result = s_decalVolumes.imageAtlas.numProxies;
  s_decalVolumes.imageAtlas.numPriorityAdjust = 0;
  if ( s_decalVolumes.imageAtlas.numProxies )
  {
    proxies = s_decalVolumes.imageAtlas.proxies;
    v146 = s_decalVolumes.imageAtlas.proxies;
    if ( s_decalVolumes.unloadAllImages )
    {
      s_decalVolumes.unloadAllImages = 0;
      if ( s_decalVolumes.imageAtlas.numProxies )
      {
        v5 = s_decalVolumes.imageAtlas.proxies;
        numProxies = s_decalVolumes.imageAtlas.numProxies;
        do
        {
          Proxy = ImageAtlas_GetProxy(*v5);
          ImageAtlas_UnloadEntry(Proxy->entryIndex);
          v8 = *((_BYTE *)Proxy + 15);
          Proxy->entryIndex = 0;
          v9 = v8 & 0x3F;
          Proxy->loadedSize = 0;
          Proxy->streamingDistanceBias = 0;
          if ( (unsigned __int8)(v8 & 0x3F) > (unsigned __int8)(((v8 >> 7) & 0xF9) + 7) )
            v9 = ((v8 >> 7) & 0xF9) + 7;
          Proxy->neededSize = v9;
          ImageAtlas_ClampProxyNeededSize(Proxy);
          ++v5;
          --numProxies;
        }
        while ( numProxies );
      }
    }
    ++s_decalVolumes.imageAtlas.clock;
    v10 = truncate_cast<unsigned char,int>(r_decalVolumesMipDropDelay->current.integer);
    v11 = s_decalVolumes.imageAtlas.numProxies;
    v131 = v10;
    v12 = v10;
    v143 = s_decalVolumes.imageAtlas.numProxies;
    if ( s_decalVolumes.imageAtlas.numProxies )
    {
      v13 = s_decalVolumes.imageAtlas.numProxies;
      v144 = s_decalVolumes.imageAtlas.numProxies;
      do
      {
        v14 = *proxies;
        imageIndex = ImageAtlas_GetProxy(*proxies)->imageIndex;
        if ( imageIndex - 1 > 0x13FFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1396, ASSERT_TYPE_ASSERT, "(imageIndex > 0 && imageIndex <= ( IMAGE_POOL_SIZE ))", (const char *)&queryFormat, "imageIndex > 0 && imageIndex <= IMAGE_ATLAS_IMAGE_POOL_SIZE") )
          __debugbreak();
        v16 = ImageAtlas_ToDbIndex(imageIndex);
        DB_GetGfxImageAtIndex(v16);
        v17 = s_decalVolumes.imageAtlas.drawingContext[0].neededSize[v14];
        v18 = s_decalVolumes.imageAtlas.drawingContext[1].neededSize[v14];
        s_decalVolumes.imageAtlas.drawingContext[0].neededSize[v14] = 0;
        s_decalVolumes.imageAtlas.drawingContext[1].neededSize[v14] = 0;
        if ( v17 > v18 )
          v18 = v17;
        v19 = s_decalVolumes.imageAtlas.drawingContext[1].streamDistance[v14];
        if ( v19 > s_decalVolumes.imageAtlas.drawingContext[0].streamDistance[v14] )
          v19 = s_decalVolumes.imageAtlas.drawingContext[0].streamDistance[v14];
        s_decalVolumes.imageAtlas.drawingContext[0].streamDistance[v14] = -1;
        s_decalVolumes.imageAtlas.drawingContext[1].streamDistance[v14] = -1;
        if ( v18 )
        {
          if ( v14 >= 0xC00u )
          {
            LODWORD(v129) = 3072;
            LODWORD(v128) = v14;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1358, ASSERT_TYPE_ASSERT, "(unsigned)( proxyIndex ) < (unsigned)( ( sizeof( *array_counter( s_decalVolumes.imageAtlas.proxyPool_ ) ) + 0 ) )", "proxyIndex doesn't index ARRAY_COUNT( s_decalVolumes.imageAtlas.proxyPool_ )\n\t%i not in [0, %i)", v128, v129) )
              __debugbreak();
          }
          v20 = 7;
          v21 = v14;
          v22 = *((_BYTE *)&s_decalVolumes.imageAtlas.proxyPool_[v21] + 15);
          entryIndex = s_decalVolumes.imageAtlas.proxyPool_[v21].entryIndex;
          if ( s_decalVolumes.imageAtlas.proxyPool_[v21].loadedSize )
            v20 = v18;
          v24 = DCONST_DVARINT_r_decalVolumesMaxLoadedSize;
          p_neededSize = &s_decalVolumes.imageAtlas.proxyPool_[v21].neededSize;
          v26 = v22 & 0x3F;
          if ( (unsigned __int8)(v22 & 0x3F) > (unsigned __int8)v20 )
            v26 = v20;
          *p_neededSize = v26;
          if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_decalVolumesMaxLoadedSize") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v24);
          v27 = truncate_cast<unsigned char,int>(v24->current.integer);
          v28 = *p_neededSize;
          if ( *p_neededSize > v27 )
            v28 = v27;
          s_decalVolumes.imageAtlas.proxyPool_[v21].streamingDistance = v19;
          *p_neededSize = v28;
          s_decalVolumes.imageAtlas.proxyPool_[v21].neededSizeClock = v12;
          if ( entryIndex )
          {
            do
            {
              if ( entryIndex >= 0x1000u )
              {
                LODWORD(v129) = 4096;
                LODWORD(v128) = entryIndex;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1372, ASSERT_TYPE_ASSERT, "(unsigned)( entryIndex ) < (unsigned)( ( sizeof( *array_counter( s_decalVolumes.imageAtlas.entryPool_ ) ) + 0 ) )", "entryIndex doesn't index ARRAY_COUNT( s_decalVolumes.imageAtlas.entryPool_ )\n\t%i not in [0, %i)", v128, v129) )
                  __debugbreak();
              }
              v29 = entryIndex;
              h = s_decalVolumes.imageAtlas.entryPool_[v29].h;
              if ( s_decalVolumes.imageAtlas.entryPool_[v29].w > h )
                h = s_decalVolumes.imageAtlas.entryPool_[v29].w;
              v31 = h;
              if ( !h && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 204, ASSERT_TYPE_ASSERT, "(value > 0)", (const char *)&queryFormat, "value > 0") )
                __debugbreak();
              v32 = truncate_cast<unsigned char,unsigned int>(31 - __lzcnt(v31));
              if ( v32 > 0xCu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume_load_obj.h", 163, ASSERT_TYPE_ASSERT, "(res <= 12)", (const char *)&queryFormat, "res <= DECAL_VOLUMES_ATLAS_SLICE_SIZE_LOG2") )
                __debugbreak();
              if ( v32 <= *p_neededSize )
                s_decalVolumes.imageAtlas.entryPool_[v29].renderTime = s_decalVolumes.imageAtlas.clock;
              entryIndex = s_decalVolumes.imageAtlas.entryPool_[v29].lowerRes;
            }
            while ( entryIndex );
            proxies = v146;
            v13 = v144;
            v12 = v131;
          }
        }
        else
        {
          if ( v14 >= 0xC00u )
          {
            LODWORD(v129) = 3072;
            LODWORD(v128) = v14;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1358, ASSERT_TYPE_ASSERT, "(unsigned)( proxyIndex ) < (unsigned)( ( sizeof( *array_counter( s_decalVolumes.imageAtlas.proxyPool_ ) ) + 0 ) )", "proxyIndex doesn't index ARRAY_COUNT( s_decalVolumes.imageAtlas.proxyPool_ )\n\t%i not in [0, %i)", v128, v129) )
              __debugbreak();
          }
          if ( (*((_BYTE *)&s_decalVolumes.imageAtlas.proxyPool_[v14] + 15) & 0x40) != 0 && !s_decalVolumes.imageAtlas.proxyPool_[v14].neededSize && !s_decalVolumes.imageAtlas.proxyPool_[v14].pendingSize && s_decalVolumes.imageAtlas.proxyPool_[v14].entryIndex )
            ImageAtlas_UnloadProxy(v14);
        }
        ++proxies;
        --v13;
        v146 = proxies;
        v144 = v13;
      }
      while ( v13 );
      v11 = v143;
    }
    v33 = DVARBOOL_r_decalVolumesForceBaseMip;
    v130 = 0;
    outNumEntries = 0;
    v34 = 0;
    v155 = 0;
    v35 = s_decalVolumes.imageAtlas.firstProxyToProcess % v11;
    if ( !DVARBOOL_r_decalVolumesForceBaseMip && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_decalVolumesForceBaseMip") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v33);
    enabled = v33->current.enabled;
    v37 = DVARBOOL_r_decalVolumesStreamDistanceBiasNotLoaded;
    v135 = enabled;
    if ( !DVARBOOL_r_decalVolumesStreamDistanceBiasNotLoaded && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_decalVolumesStreamDistanceBiasNotLoaded") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v37);
    v38 = v37->current.enabled;
    v39 = DCONST_DVARBOOL_r_decalVolumesPauseStreaming;
    v136 = v38;
    if ( !DCONST_DVARBOOL_r_decalVolumesPauseStreaming && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_decalVolumesPauseStreaming") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v39);
    v40 = v39->current.enabled;
    v41 = DCONST_DVARINT_r_decalVolumesMaxLoadedSize;
    v137 = v40;
    if ( !DCONST_DVARINT_r_decalVolumesMaxLoadedSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_decalVolumesMaxLoadedSize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v41);
    v42 = truncate_cast<unsigned char,int>(v41->current.integer);
    v43 = v42;
    v138 = v42;
    v44 = truncate_cast<unsigned short,int>(1 << v42);
    v45 = 7;
    v141 = v44;
    if ( v43 < 7 )
      v45 = v43;
    v46 = truncate_cast<unsigned short,int>(v45);
    v149 = v46;
    v47 = truncate_cast<unsigned short,int>(1 << v46);
    v48 = v132;
    v49 = v11 - 1;
    v147 = v11 - 1;
    v50 = v47;
    v140 = v47;
    while ( 1 )
    {
      v51 = v35 == v49;
      v145 = v34 + 1;
      v52 = s_decalVolumes.imageAtlas.proxies[v35];
      v53 = v35 + 1;
      v35 = 0;
      v142 = v52;
      if ( !v51 )
        v35 = v53;
      v134 = v35;
      if ( v52 >= 0xC00u )
      {
        LODWORD(v129) = 3072;
        LODWORD(v128) = v52;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1358, ASSERT_TYPE_ASSERT, "(unsigned)( proxyIndex ) < (unsigned)( ( sizeof( *array_counter( s_decalVolumes.imageAtlas.proxyPool_ ) ) + 0 ) )", "proxyIndex doesn't index ARRAY_COUNT( s_decalVolumes.imageAtlas.proxyPool_ )\n\t%i not in [0, %i)", v128, v129) )
          __debugbreak();
      }
      v54 = v52;
      v55 = v52;
      v56 = (char *)&s_decalVolumes.imageAtlas + v55 * 24;
      neededSizeClock = s_decalVolumes.imageAtlas.proxyPool_[v55].neededSizeClock;
      neededSize = *((_BYTE *)&s_decalVolumes.imageAtlas.proxyPool_[v55] + 15) & 0x3F;
      v151 = v56;
      if ( neededSize > s_decalVolumes.imageAtlas.proxyPool_[v55].neededSize )
        neededSize = s_decalVolumes.imageAtlas.proxyPool_[v55].neededSize;
      s_decalVolumes.imageAtlas.proxyPool_[v55].neededSize = neededSize;
      v59 = neededSize;
      if ( neededSizeClock )
        goto LABEL_103;
      if ( !neededSize )
        goto LABEL_102;
      v60 = ImageAtlas_GetProxy(v52)->imageIndex;
      if ( (unsigned int)(v60 - 1) > 0x13FFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1396, ASSERT_TYPE_ASSERT, "(imageIndex > 0 && imageIndex <= ( IMAGE_POOL_SIZE ))", (const char *)&queryFormat, "imageIndex > 0 && imageIndex <= IMAGE_ATLAS_IMAGE_POOL_SIZE") )
        __debugbreak();
      v61 = ImageAtlas_ToDbIndex(v60);
      DB_GetGfxImageAtIndex(v61);
      LOBYTE(v60) = 7;
      v62 = s_decalVolumes.imageAtlas.proxyPool_[v55].neededSize;
      if ( (*((_BYTE *)&s_decalVolumes.imageAtlas.proxyPool_[v55] + 15) & 0x40) != 0 )
        LOBYTE(v60) = 0;
      s_decalVolumes.imageAtlas.proxyPool_[v55].neededSizeClock = v131;
      if ( (unsigned __int8)v62 > 0x7Fu && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "char __cdecl truncate_cast_impl<char,unsigned char>(unsigned char)", "signed", v62, "unsigned", (unsigned __int8)v62) )
        __debugbreak();
      v60 = (unsigned __int8)v60;
      if ( v62 - 1 > (unsigned __int8)v60 )
        v60 = v62 - 1;
      if ( (v60 < 0 || (unsigned int)v60 > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)v60, "signed", v60) )
        __debugbreak();
      v63 = v60;
      v64 = (unsigned __int8)(*((_BYTE *)&s_decalVolumes.imageAtlas.proxyPool_[v55] + 15) & 0x3F) <= (unsigned __int8)v60;
      v65 = *((_BYTE *)&s_decalVolumes.imageAtlas.proxyPool_[v55] + 15) & 0x3F;
      v66 = DCONST_DVARINT_r_decalVolumesMaxLoadedSize;
      if ( !v64 )
        v65 = v63;
      s_decalVolumes.imageAtlas.proxyPool_[v55].neededSize = v65;
      if ( !v66 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_decalVolumesMaxLoadedSize") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v66);
      v67 = truncate_cast<unsigned char,int>(v66->current.integer);
      v64 = s_decalVolumes.imageAtlas.proxyPool_[v55].neededSize <= v67;
      v68 = v67;
      neededSizeClock = s_decalVolumes.imageAtlas.proxyPool_[v55].neededSizeClock;
      v59 = s_decalVolumes.imageAtlas.proxyPool_[v55].neededSize;
      if ( !v64 )
        v59 = v68;
      s_decalVolumes.imageAtlas.proxyPool_[v55].neededSize = v59;
      if ( neededSizeClock )
LABEL_103:
        v69 = neededSizeClock - 1;
      else
LABEL_102:
        v69 = v131;
      pendingSize = s_decalVolumes.imageAtlas.proxyPool_[v55].pendingSize;
      s_decalVolumes.imageAtlas.proxyPool_[v55].neededSizeClock = v69;
      v71 = pendingSize;
      if ( v59 > pendingSize )
        v71 = v59;
      if ( v71 > s_decalVolumes.imageAtlas.proxyPool_[v55].loadedSize )
        break;
LABEL_125:
      proxyCopyPending[v54] = s_decalVolumes.imageAtlas.proxyPool_[v55].pendingSize != 0;
      v81 = s_decalVolumes.imageAtlas.proxyPool_[v55].imageIndex;
      if ( v81 - 1 > 0x13FFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1396, ASSERT_TYPE_ASSERT, "(imageIndex > 0 && imageIndex <= ( IMAGE_POOL_SIZE ))", (const char *)&queryFormat, "imageIndex > 0 && imageIndex <= IMAGE_ATLAS_IMAGE_POOL_SIZE") )
        __debugbreak();
      v82 = ImageAtlas_ToDbIndex(v81);
      GfxImageAtIndex = DB_GetGfxImageAtIndex(v82);
      v84 = GfxImageAtIndex->decalAtlasIndex & 7;
      if ( v84 >= 5u )
      {
        LODWORD(v129) = 5;
        LODWORD(v128) = v84;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume_load_obj.h", 185, ASSERT_TYPE_ASSERT, "(unsigned)( res ) < (unsigned)( 4 + 1 )", "res doesn't index DECAL_VOLUMES_NUM_ATLASES + 1\n\t%i not in [0, %i)", v128, v129) )
          __debugbreak();
      }
      if ( (unsigned __int8)(v84 - 1) > 5u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1351, ASSERT_TYPE_ASSERT, "( ( decalAtlasIndex > 0 && decalAtlasIndex <= 6 ) )", "( image->name ) = %s", GfxImageAtIndex->name) )
        __debugbreak();
      if ( !v84 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 2811, ASSERT_TYPE_ASSERT, "( ( ImageAtlas_GetDecalAtlasIndex( image ) > 0 ) )", "( image->name ) = %s", GfxImageAtIndex->name) )
        __debugbreak();
      v85 = s_decalVolumes.imageAtlas.proxyPool_[v55].neededSize;
      if ( s_decalVolumes.imageAtlas.proxyPool_[v55].pendingSize >= v85 || v85 <= s_decalVolumes.imageAtlas.proxyPool_[v55].loadedSize || v130 >= maxCandidateJobs )
        goto LABEL_229;
      if ( (GfxImageAtIndex->flags & 0x40) != 0 )
      {
        ImageHighestResidentPart = Stream_GetImageHighestResidentPart(GfxImageAtIndex);
        v87 = ImageHighestResidentPart;
        if ( ImageHighestResidentPart == -1 )
          goto LABEL_229;
        if ( (unsigned int)ImageHighestResidentPart >= 4 )
        {
          LODWORD(v129) = 4;
          LODWORD(v128) = ImageHighestResidentPart;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 2830, ASSERT_TYPE_ASSERT, "(unsigned)( imagePartIndex ) < (unsigned)( ( sizeof( *array_counter( image->streams ) ) + 0 ) )", "imagePartIndex doesn't index ARRAY_COUNT( image->streams )\n\t%i not in [0, %i)", v128, v129) )
            __debugbreak();
        }
        width = GfxImageAtIndex->streams[v87].width;
        height = GfxImageAtIndex->streams[v87].height;
      }
      else
      {
        width = GfxImageAtIndex->width;
        height = GfxImageAtIndex->height;
      }
      if ( ImageAtlas_IsConstantColorImage(GfxImageAtIndex) )
      {
        height = 128;
        width = 128;
      }
      v90 = height;
      if ( width > height )
        v90 = width;
      v91 = v90;
      if ( !v90 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 204, ASSERT_TYPE_ASSERT, "(value > 0)", (const char *)&queryFormat, "value > 0") )
        __debugbreak();
      v92 = truncate_cast<unsigned char,unsigned int>(31 - __lzcnt(v91));
      if ( v92 > 0xCu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume_load_obj.h", 163, ASSERT_TYPE_ASSERT, "(res <= 12)", (const char *)&queryFormat, "res <= DECAL_VOLUMES_ATLAS_SLICE_SIZE_LOG2") )
        __debugbreak();
      v93 = v56[17];
      if ( v92 >= v93 || !v56[16] && v92 >= 5u && (v94 = v56[15], (v94 & 0x40) == 0) && v94 >= 0 )
      {
        if ( !v137 )
        {
          v95 = v138;
          if ( v138 > v92 )
            v95 = v92;
          while ( width > v141 || height > v141 )
          {
            v96 = width;
            width = 1;
            v97 = v96 >> 1;
            if ( v97 > 1 )
              width = v97;
            v98 = height >> 1;
            height = 1;
            if ( v98 > 1 )
              height = v98;
          }
          v99 = v56[15] & 0x3F;
          v139 = height;
          if ( v149 < v99 )
            v99 = v149;
          if ( (unsigned __int8)v56[16] < v99 )
          {
            while ( width > v50 || height > v50 )
            {
              v100 = width;
              width = 1;
              v101 = v100 >> 1;
              if ( v101 > 1 )
                width = v101;
              v102 = height >> 1;
              height = 1;
              if ( v102 > 1 )
                height = v102;
            }
            v139 = height;
          }
          if ( v95 >= 0xBu && v93 < 0xBu )
          {
            v103 = 1 << v93;
            while ( 1 )
            {
              v104 = height;
              if ( width <= v103 && height <= v103 )
                break;
              v105 = width >> 1;
              width = 1;
              height = 1;
              if ( v105 > 1 )
                width = v105;
              v106 = v104 >> 1;
              if ( v106 > 1 )
                height = v106;
            }
            v139 = height;
          }
          v107 = height;
          if ( width > height )
            v107 = width;
          v108 = v107;
          if ( !v107 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 204, ASSERT_TYPE_ASSERT, "(value > 0)", (const char *)&queryFormat, "value > 0") )
            __debugbreak();
          v133 = truncate_cast<unsigned char,unsigned int>(31 - __lzcnt(v108));
          if ( v133 > 0xCu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume_load_obj.h", 163, ASSERT_TYPE_ASSERT, "(res <= 12)", (const char *)&queryFormat, "res <= DECAL_VOLUMES_ATLAS_SLICE_SIZE_LOG2") )
            __debugbreak();
          if ( v133 > (unsigned __int8)v56[18] )
          {
            v109 = v56[15] & 0x3F;
            if ( v149 < v109 )
              v109 = v149;
            v110 = v133 < v109;
            v51 = v133 == v109;
            v111 = *((_WORD *)v56 + 6);
            v112 = v110 || v51;
            if ( !v111 )
              goto LABEL_211;
            Entry = ImageAtlas_GetEntry(v111);
            if ( *(_QWORD *)v56 != Entry->imageNameHash && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 2897, ASSERT_TYPE_ASSERT, "( ( proxy->imageNameHash == existingEntry->imageNameHash ) )", "( image->name ) = %s", GfxImageAtIndex->name) )
              __debugbreak();
            if ( Entry->w < width || Entry->h < height )
            {
LABEL_211:
              v114 = ImageAtlas_GetDecalAtlasIndex(GfxImageAtIndex) - 1;
              Space = ImageAtlas_FindSpace(v114, width, height, v112);
              if ( Space )
                goto LABEL_233;
              if ( !v155 )
              {
                v155 = 1;
                if ( s_decalVolumes.imageAtlas.clock <= 0x3C )
                  v116 = 0;
                else
                  v116 = s_decalVolumes.imageAtlas.clock - 60;
                v117 = s_decalVolumes.imageAtlas.channelRoots[v114];
                v118 = s_decalVolumes.imageAtlas.channelRootsCount[v114];
                if ( v118 )
                {
                  v119 = v118;
                  do
                  {
                    ImageAtlas_CollectCandidatesForReleaseRecurse(*v117++, v116, entries, &outNumEntries);
                    --v119;
                  }
                  while ( v119 );
                }
                std::_Sort_unchecked<unsigned short *,ImageAtlasEntryComparer>(entries, &entries[outNumEntries], outNumEntries, v48);
                height = v139;
              }
              v120 = outNumEntries;
              if ( outNumEntries )
              {
                while ( 1 )
                {
                  outNumEntries = v120 - 1;
                  v121 = entries[v120 - 1];
                  v122 = ImageAtlas_GetEntry(v121);
                  ImageAtlas_SetEntryIndex(v122->proxyIndex, v122->lowerRes);
                  lowerRes = v122->lowerRes;
                  if ( lowerRes )
                    ImageAtlas_GetEntry(lowerRes)->higherRes = 0;
                  if ( !v121 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1836, ASSERT_TYPE_ASSERT, "(entryIndex != 0)", (const char *)&queryFormat, "entryIndex != IMAGE_ATLAS_INVALID_ENTRY") )
                    __debugbreak();
                  ImageAtlas_FreeSpaceRecurse(v121);
                  Space = ImageAtlas_FindSpace(v114, width, height, v112);
                  if ( Space )
                    break;
                  v120 = outNumEntries;
                  if ( !outNumEntries )
                    goto LABEL_228;
                }
LABEL_233:
                v125 = ImageAtlas_GetEntry(Space);
                v35 = v134;
                v125->proxyIndex = v142;
                v125->renderTime = s_decalVolumes.imageAtlas.clock;
                v125->imageNameHash = *(_QWORD *)v151;
                v126 = *(_QWORD *)v151;
                v127 = &bjCandidates[v130];
                v124 = ++v130;
                v127->proxyIndex = v142;
                v127->imageNameHash = v126;
                v127->entryIndex = Space;
                v127->x = v125->x;
                v127->y = v125->y;
                v127->w = v125->w;
                v127->h = v125->h;
                v127->channelIndex = v114;
                v127->sliceIndex = v125->slice;
                v127->generation = v151[14];
                *(_WORD *)&v127->pendingSize = v133;
                goto LABEL_230;
              }
            }
          }
        }
      }
LABEL_228:
      v35 = v134;
LABEL_229:
      v124 = v130;
LABEL_230:
      v34 = v145;
      v50 = v140;
      v49 = v147;
      if ( v145 >= v143 )
        return v124;
    }
    v72 = &s_decalVolumes.imageAtlas.priorityAdjust[s_decalVolumes.imageAtlas.numPriorityAdjust++];
    v72->imageIndex = s_decalVolumes.imageAtlas.proxyPool_[v55].imageIndex;
    v72->neededSize = v71;
    v73 = !s_decalVolumes.imageAtlas.proxyPool_[v55].loadedSize && v135;
    v72->force = v73;
    v72->streamingDistance = s_decalVolumes.imageAtlas.proxyPool_[v55].streamingDistance;
    if ( v136 )
    {
      loadedSize = s_decalVolumes.imageAtlas.proxyPool_[v55].loadedSize;
      if ( !loadedSize )
      {
        streamingDistanceBias = s_decalVolumes.imageAtlas.proxyPool_[v55].streamingDistanceBias;
        v76 = streamingDistanceBias << 8;
        v77 = 0;
LABEL_116:
        v78 = -1;
        LOBYTE(v77) = loadedSize == 0;
        v79 = v77 + streamingDistanceBias;
        if ( v79 < 0xFF )
          v78 = v79;
        s_decalVolumes.imageAtlas.proxyPool_[v55].streamingDistanceBias = v78;
        v80 = 0;
        if ( v72->streamingDistance - v76 > 0 )
          v80 = v72->streamingDistance - v76;
        if ( (v80 < 0 || (unsigned int)v80 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v80, "signed", v80) )
          __debugbreak();
        v72->streamingDistance = v80;
        v50 = v140;
        goto LABEL_125;
      }
    }
    else
    {
      loadedSize = s_decalVolumes.imageAtlas.proxyPool_[v55].loadedSize;
    }
    streamingDistanceBias = s_decalVolumes.imageAtlas.proxyPool_[v55].streamingDistanceBias;
    v77 = 0;
    v76 = 0;
    goto LABEL_116;
  }
  return result;
}

/*
==============
ImageAtlas_ProcessBackendJobs
==============
*/
void ImageAtlas_ProcessBackendJobs()
{
  unsigned int v0; 
  unsigned int i; 
  __int64 v2; 
  unsigned __int16 proxyIndex; 
  ImageAtlasProxy *v4; 
  unsigned __int16 v5; 
  unsigned int imageIndex; 
  unsigned int v7; 
  GfxImage *GfxImageAtIndex; 
  unsigned __int8 v9; 
  unsigned __int16 entryIndex; 
  unsigned __int16 v11; 
  unsigned __int16 v12; 
  unsigned int v13; 
  unsigned __int16 v14; 
  ImageAtlasEntry *Entry; 
  ImageAtlasEntry *v16; 
  unsigned __int16 v17; 
  unsigned __int16 v18; 
  ImageAtlasProxy *Proxy; 
  __int64 v20; 
  ImageAtlasEntry *v21; 
  ImageAtlasEntry *v22; 
  __int64 v23; 
  __int64 v24; 

  while ( 1 )
  {
    while ( _interlockedbittestandset(&s_decalVolumes.imageAtlas.backendJobsCompletedMutex.flag._My_flag, 0) )
      _mm_pause();
    v0 = s_decalVolumes.imageAtlas.backendJobsCompleted.write - s_decalVolumes.imageAtlas.backendJobsCompleted.read;
    s_decalVolumes.imageAtlas.backendJobsCompletedMutex.flag._My_flag = 0;
    if ( s_decalVolumes.imageAtlas.backendJobsCompleted.write == s_decalVolumes.imageAtlas.backendJobsCompleted.read )
      break;
    for ( i = 0; i < v0; ++i )
    {
      if ( i + s_decalVolumes.imageAtlas.backendJobsCompleted.read == s_decalVolumes.imageAtlas.backendJobsCompleted.write && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 260, ASSERT_TYPE_ASSERT, "(( read + offset ) != write)", (const char *)&queryFormat, "( read + offset ) != write") )
        __debugbreak();
      v2 = ((_BYTE)i + LOBYTE(s_decalVolumes.imageAtlas.backendJobsCompleted.read)) & 0x7F;
      proxyIndex = s_decalVolumes.imageAtlas.backendJobsCompleted.pool[v2].proxyIndex;
      if ( proxyIndex >= 0xC00u )
      {
        LODWORD(v24) = 3072;
        LODWORD(v23) = proxyIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1358, ASSERT_TYPE_ASSERT, "(unsigned)( proxyIndex ) < (unsigned)( ( sizeof( *array_counter( s_decalVolumes.imageAtlas.proxyPool_ ) ) + 0 ) )", "proxyIndex doesn't index ARRAY_COUNT( s_decalVolumes.imageAtlas.proxyPool_ )\n\t%i not in [0, %i)", v23, v24) )
          __debugbreak();
      }
      v4 = &s_decalVolumes.imageAtlas.proxyPool_[proxyIndex];
      if ( s_decalVolumes.imageAtlas.backendJobsCompleted.pool[v2].generation == s_decalVolumes.imageAtlas.proxyPool_[proxyIndex].generation )
      {
        if ( s_decalVolumes.imageAtlas.proxyPool_[proxyIndex].pendingSize == s_decalVolumes.imageAtlas.backendJobsCompleted.pool[v2].pendingSize )
          s_decalVolumes.imageAtlas.proxyPool_[proxyIndex].pendingSize = 0;
        if ( s_decalVolumes.imageAtlas.backendJobsCompleted.pool[v2].success )
        {
          imageIndex = s_decalVolumes.imageAtlas.proxyPool_[proxyIndex].imageIndex;
          if ( imageIndex - 1 > 0x13FFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1396, ASSERT_TYPE_ASSERT, "(imageIndex > 0 && imageIndex <= ( IMAGE_POOL_SIZE ))", (const char *)&queryFormat, "imageIndex > 0 && imageIndex <= IMAGE_ATLAS_IMAGE_POOL_SIZE") )
            __debugbreak();
          v7 = ImageAtlas_ToDbIndex(imageIndex);
          GfxImageAtIndex = DB_GetGfxImageAtIndex(v7);
          v9 = GfxImageAtIndex->decalAtlasIndex & 7;
          if ( v9 >= 5u )
          {
            LODWORD(v24) = 5;
            LODWORD(v23) = v9;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume_load_obj.h", 185, ASSERT_TYPE_ASSERT, "(unsigned)( res ) < (unsigned)( 4 + 1 )", "res doesn't index DECAL_VOLUMES_NUM_ATLASES + 1\n\t%i not in [0, %i)", v23, v24) )
              __debugbreak();
          }
          if ( (unsigned __int8)(v9 - 1) > 5u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1351, ASSERT_TYPE_ASSERT, "( ( decalAtlasIndex > 0 && decalAtlasIndex <= 6 ) )", "( image->name ) = %s", GfxImageAtIndex->name) )
            __debugbreak();
          if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 2550, ASSERT_TYPE_ASSERT, "( ( ImageAtlas_GetDecalAtlasIndex( image ) > 0 ) )", "( image->name ) = %s", GfxImageAtIndex->name) )
            __debugbreak();
          entryIndex = v4->entryIndex;
          if ( entryIndex )
          {
            v11 = s_decalVolumes.imageAtlas.backendJobsCompleted.pool[v2].entryIndex;
            if ( v11 >= 0x1000u )
            {
              LODWORD(v24) = 4096;
              LODWORD(v23) = v11;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1372, ASSERT_TYPE_ASSERT, "(unsigned)( entryIndex ) < (unsigned)( ( sizeof( *array_counter( s_decalVolumes.imageAtlas.entryPool_ ) ) + 0 ) )", "entryIndex doesn't index ARRAY_COUNT( s_decalVolumes.imageAtlas.entryPool_ )\n\t%i not in [0, %i)", v23, v24) )
                __debugbreak();
            }
            if ( entryIndex >= 0x1000u )
            {
              LODWORD(v24) = 4096;
              LODWORD(v23) = entryIndex;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1372, ASSERT_TYPE_ASSERT, "(unsigned)( entryIndex ) < (unsigned)( ( sizeof( *array_counter( s_decalVolumes.imageAtlas.entryPool_ ) ) + 0 ) )", "entryIndex doesn't index ARRAY_COUNT( s_decalVolumes.imageAtlas.entryPool_ )\n\t%i not in [0, %i)", v23, v24) )
                __debugbreak();
            }
            if ( s_decalVolumes.imageAtlas.entryPool_[v11].imageNameHash != s_decalVolumes.imageAtlas.entryPool_[entryIndex].imageNameHash && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 2553, ASSERT_TYPE_ASSERT, "( ( existingEntryIndex == 0 || ImageAtlas_GetEntry( bj.entryIndex )->imageNameHash == ImageAtlas_GetEntry( existingEntryIndex )->imageNameHash ) )", "( image->name ) = %s", GfxImageAtIndex->name) )
              __debugbreak();
          }
          v12 = v4->entryIndex;
          if ( !v12 )
            goto LABEL_47;
          v13 = *((_BYTE *)v4 + 15) & 0x3F;
          if ( v13 > 7 )
            v13 = 7;
          if ( v4->loadedSize < v13 )
          {
            ImageAtlas_FreeSpaceRecurse(v12);
          }
          else
          {
LABEL_47:
            v14 = s_decalVolumes.imageAtlas.backendJobsCompleted.pool[v2].entryIndex;
            if ( v14 == entryIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 2093, ASSERT_TYPE_ASSERT, "(entryIndex != fallbackIndex)", (const char *)&queryFormat, "entryIndex != fallbackIndex") )
              __debugbreak();
            Entry = ImageAtlas_GetEntry(v14);
            if ( entryIndex )
            {
              v16 = ImageAtlas_GetEntry(entryIndex);
              if ( Entry->imageNameHash != v16->imageNameHash && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 2100, ASSERT_TYPE_ASSERT, "(entry->imageNameHash == fallbackEntry->imageNameHash)", "%s\n\timage hash: %zu\n", "entry->imageNameHash == fallbackEntry->imageNameHash", Entry->imageNameHash) )
                __debugbreak();
              if ( (Entry->w <= v16->w || Entry->h <= v16->h) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 2101, ASSERT_TYPE_ASSERT, "(entry->w > fallbackEntry->w && entry->h > fallbackEntry->h)", "%s\n\timage hash: %zu\n", "entry->w > fallbackEntry->w && entry->h > fallbackEntry->h", Entry->imageNameHash) )
                __debugbreak();
              if ( v16->higherRes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 2102, ASSERT_TYPE_ASSERT, "(fallbackEntry->higherRes == 0)", "%s\n\timage hash: %zu\n", "fallbackEntry->higherRes == IMAGE_ATLAS_INVALID_ENTRY", Entry->imageNameHash) )
                __debugbreak();
              v16->higherRes = v14;
            }
            Entry->lowerRes = entryIndex;
          }
          v17 = s_decalVolumes.imageAtlas.backendJobsCompleted.pool[v2].proxyIndex;
          v18 = s_decalVolumes.imageAtlas.backendJobsCompleted.pool[v2].entryIndex;
          Proxy = ImageAtlas_GetProxy(v17);
          if ( v17 >= 0xC00u )
          {
            LODWORD(v24) = 3072;
            LODWORD(v23) = v17;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1365, ASSERT_TYPE_ASSERT, "(unsigned)( proxyIndex ) < (unsigned)( ( sizeof( *array_counter( s_decalVolumes.imageAtlas.proxyPool_ ) ) + 0 ) )", "proxyIndex doesn't index ARRAY_COUNT( s_decalVolumes.imageAtlas.proxyPool_ )\n\t%i not in [0, %i)", v23, v24) )
              __debugbreak();
          }
          v20 = v17;
          if ( v18 )
          {
            v21 = ImageAtlas_GetEntry(v18);
            Proxy->entryIndex = v18;
            v22 = v21;
            Proxy->loadedSize = R_DecalVolumes_ImageLog2(v21->w, v21->h);
            if ( Proxy->imageNameHash != v22->imageNameHash && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1771, ASSERT_TYPE_ASSERT, "(proxy->imageNameHash == entry->imageNameHash)", (const char *)&queryFormat, "proxy->imageNameHash == entry->imageNameHash") )
              __debugbreak();
            s_decalVolumes.imageAtlas.proxyCoords_[v20].x = v22->x;
            s_decalVolumes.imageAtlas.proxyCoords_[v20].y = v22->y;
            s_decalVolumes.imageAtlas.proxyCoords_[v20].w = v22->w;
            s_decalVolumes.imageAtlas.proxyCoords_[v20].h = v22->h;
            s_decalVolumes.imageAtlas.proxyCoords_[v20].maxSize = *((_BYTE *)Proxy + 15) & 0x3F;
          }
          else
          {
            Proxy->entryIndex = 0;
            Proxy->loadedSize = 0;
            Proxy->streamingDistanceBias = 0;
            *(_DWORD *)&s_decalVolumes.imageAtlas.proxyCoords_[v20].x = 0;
            *(_QWORD *)&s_decalVolumes.imageAtlas.proxyCoords_[v20].w = 0i64;
          }
          continue;
        }
      }
      else
      {
        Com_Printf(8, "D+: backend job aborted: imageIndex %u, imageHash %zu\n", s_decalVolumes.imageAtlas.proxyPool_[proxyIndex].imageIndex, v4->imageNameHash);
      }
      v5 = s_decalVolumes.imageAtlas.backendJobsCompleted.pool[v2].entryIndex;
      if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1836, ASSERT_TYPE_ASSERT, "(entryIndex != 0)", (const char *)&queryFormat, "entryIndex != IMAGE_ATLAS_INVALID_ENTRY") )
        __debugbreak();
      ImageAtlas_FreeSpaceRecurse(v5);
    }
    while ( _interlockedbittestandset(&s_decalVolumes.imageAtlas.backendJobsCompletedMutex.flag._My_flag, 0) )
      _mm_pause();
    s_decalVolumes.imageAtlas.backendJobsCompleted.read += v0;
    s_decalVolumes.imageAtlas.backendJobsCompletedMutex.flag._My_flag = 0;
  }
}

/*
==============
ImageAtlas_SetEntryIndex
==============
*/
void ImageAtlas_SetEntryIndex(unsigned __int16 proxyIndex, unsigned __int16 entryIndex)
{
  ImageAtlasProxy *Proxy; 
  __int64 v5; 
  ImageAtlasEntry *Entry; 
  ImageAtlasEntry *v7; 
  int v8; 

  Proxy = ImageAtlas_GetProxy(proxyIndex);
  if ( proxyIndex >= 0xC00u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1365, ASSERT_TYPE_ASSERT, "(unsigned)( proxyIndex ) < (unsigned)( ( sizeof( *array_counter( s_decalVolumes.imageAtlas.proxyPool_ ) ) + 0 ) )", "proxyIndex doesn't index ARRAY_COUNT( s_decalVolumes.imageAtlas.proxyPool_ )\n\t%i not in [0, %i)", proxyIndex, 3072) )
    __debugbreak();
  v5 = proxyIndex;
  if ( entryIndex )
  {
    Entry = ImageAtlas_GetEntry(entryIndex);
    Proxy->entryIndex = entryIndex;
    v7 = Entry;
    Proxy->loadedSize = R_DecalVolumes_ImageLog2(Entry->w, Entry->h);
    if ( Proxy->imageNameHash != v7->imageNameHash && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1771, ASSERT_TYPE_ASSERT, "(proxy->imageNameHash == entry->imageNameHash)", (const char *)&queryFormat, "proxy->imageNameHash == entry->imageNameHash") )
      __debugbreak();
    s_decalVolumes.imageAtlas.proxyCoords_[v5].x = v7->x;
    s_decalVolumes.imageAtlas.proxyCoords_[v5].y = v7->y;
    s_decalVolumes.imageAtlas.proxyCoords_[v5].w = v7->w;
    s_decalVolumes.imageAtlas.proxyCoords_[v5].h = v7->h;
    v8 = *((_BYTE *)Proxy + 15) & 0x3F;
  }
  else
  {
    v8 = 0;
    Proxy->entryIndex = 0;
    Proxy->loadedSize = 0;
    Proxy->streamingDistanceBias = 0;
    *(_QWORD *)&s_decalVolumes.imageAtlas.proxyCoords_[v5].x = 0i64;
  }
  s_decalVolumes.imageAtlas.proxyCoords_[v5].maxSize = v8;
}

/*
==============
ImageAtlas_SetImageIndexToProxyIndex
==============
*/
void ImageAtlas_SetImageIndexToProxyIndex(unsigned int imageIndex, unsigned __int16 proxyIndex)
{
  __int64 v2; 
  ImageAtlasProxy *Proxy; 
  GfxImage *Image; 
  unsigned __int64 v6; 
  const char *name; 

  v2 = imageIndex;
  if ( proxyIndex )
  {
    Proxy = ImageAtlas_GetProxy(proxyIndex);
    Image = ImageAtlas_GetImage(v2);
    v6 = -1i64;
    name = Image->name;
    do
      ++v6;
    while ( name[v6] );
    if ( Proxy->imageNameHash != j_CoD_XXH64(name, v6, 0i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 2074, ASSERT_TYPE_ASSERT, "( ( proxy->imageNameHash == ImageAtlas_GetImageNameHash( image->name ) ) )", "( image->name ) = %s", Image->name) )
      __debugbreak();
  }
  s_decalVolumes.imageAtlas.imageIndexToProxyIndex[v2] = proxyIndex;
}

/*
==============
ImageAtlas_TabulateCheckEnter
==============
*/
__int64 ImageAtlas_TabulateCheckEnter()
{
  const char *CurrentThreadContextName; 
  _QWORD *v1; 
  __int64 result; 

  if ( ((unsigned __int8)&s_decalVolumes.imageAtlas.atlasTabulateCheck & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_decalVolumes.imageAtlas.atlasTabulateCheck) )
    __debugbreak();
  if ( _InterlockedCompareExchange(&s_decalVolumes.imageAtlas.atlasTabulateCheck, 1, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1237, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedCompareExchange( &s_decalVolumes.imageAtlas.atlasTabulateCheck, 1, 0 ) == 0 ) )", "( s_decalVolumes.imageAtlas.atlasTabulateCheckThread ) = %s", s_decalVolumes.imageAtlas.atlasTabulateCheckThread) )
    __debugbreak();
  CurrentThreadContextName = Sys_GetCurrentThreadContextName();
  v1 = NtCurrentTeb()->Reserved1[11];
  s_decalVolumes.imageAtlas.atlasTabulateCheckThread = CurrentThreadContextName;
  result = v1[tls_index];
  s_decalVolumes.imageAtlas.atlasTabulateCheckWorkerCmdType = *(_DWORD *)(result + 992);
  return result;
}

/*
==============
ImageAtlas_TabulateCheckLeave
==============
*/
char ImageAtlas_TabulateCheckLeave()
{
  signed __int32 v0; 

  s_decalVolumes.imageAtlas.atlasTabulateCheckLastThread = s_decalVolumes.imageAtlas.atlasTabulateCheckThread;
  s_decalVolumes.imageAtlas.atlasTabulateCheckLastWorkerCmdType = s_decalVolumes.imageAtlas.atlasTabulateCheckWorkerCmdType;
  s_decalVolumes.imageAtlas.atlasTabulateCheckThread = "none";
  s_decalVolumes.imageAtlas.atlasTabulateCheckWorkerCmdType = -1;
  if ( ((unsigned __int8)&s_decalVolumes.imageAtlas.atlasTabulateCheck & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_decalVolumes.imageAtlas.atlasTabulateCheck) )
    __debugbreak();
  v0 = _InterlockedCompareExchange(&s_decalVolumes.imageAtlas.atlasTabulateCheck, 0, 1);
  if ( v0 != 1 )
  {
    LOBYTE(v0) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1253, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &s_decalVolumes.imageAtlas.atlasTabulateCheck, 0, 1 ) == 1)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_decalVolumes.imageAtlas.atlasTabulateCheck, 0, 1 ) == 1");
    if ( (_BYTE)v0 )
      __debugbreak();
  }
  return v0;
}

/*
==============
ImageAtlas_ToDbIndex
==============
*/
__int64 ImageAtlas_ToDbIndex(unsigned int atlasIndex)
{
  __int64 v3; 
  __int64 v4; 

  if ( atlasIndex >= 0x14000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 979, ASSERT_TYPE_ASSERT, "(unsigned)( atlasIndex ) < (unsigned)( IMAGE_POOL_SIZE )", "atlasIndex doesn't index IMAGE_POOL_SIZE\n\t%i not in [0, %i)", atlasIndex, 81920) )
    __debugbreak();
  if ( !atlasIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 980, ASSERT_TYPE_ASSERT, "( atlasIndex ) > ( 0 )", "%s > %s\n\t%i, %i", "atlasIndex", "0", 0, 0i64) )
    __debugbreak();
  if ( atlasIndex >= 0x14000 )
  {
    LODWORD(v4) = 81920;
    LODWORD(v3) = atlasIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 981, ASSERT_TYPE_ASSERT, "(unsigned)( atlasIndex ) < (unsigned)( ( IMAGE_POOL_SIZE ) )", "atlasIndex doesn't index IMAGE_ATLAS_IMAGE_POOL_SIZE\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return atlasIndex - 1;
}

/*
==============
ImageAtlas_UnloadEntry
==============
*/
void ImageAtlas_UnloadEntry(unsigned __int16 entryIndex)
{
  unsigned __int16 v1; 
  unsigned __int16 lowerRes; 
  __int64 v3; 
  __int64 v4; 

  if ( entryIndex )
  {
    v1 = entryIndex;
    do
    {
      if ( v1 >= 0x1000u )
      {
        LODWORD(v4) = 4096;
        LODWORD(v3) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1372, ASSERT_TYPE_ASSERT, "(unsigned)( entryIndex ) < (unsigned)( ( sizeof( *array_counter( s_decalVolumes.imageAtlas.entryPool_ ) ) + 0 ) )", "entryIndex doesn't index ARRAY_COUNT( s_decalVolumes.imageAtlas.entryPool_ )\n\t%i not in [0, %i)", v3, v4) )
          __debugbreak();
      }
      lowerRes = s_decalVolumes.imageAtlas.entryPool_[v1].lowerRes;
      if ( !v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1836, ASSERT_TYPE_ASSERT, "(entryIndex != 0)", (const char *)&queryFormat, "entryIndex != IMAGE_ATLAS_INVALID_ENTRY") )
        __debugbreak();
      ImageAtlas_FreeSpaceRecurse(v1);
      v1 = lowerRes;
    }
    while ( lowerRes );
  }
}

/*
==============
ImageAtlas_UnloadProxy
==============
*/
void ImageAtlas_UnloadProxy(unsigned __int16 proxyIndex)
{
  ImageAtlasProxy *Proxy; 
  char v2; 
  unsigned __int8 v3; 

  Proxy = ImageAtlas_GetProxy(proxyIndex);
  ImageAtlas_UnloadEntry(Proxy->entryIndex);
  v2 = *((_BYTE *)Proxy + 15);
  Proxy->entryIndex = 0;
  v3 = v2 & 0x3F;
  Proxy->loadedSize = 0;
  Proxy->streamingDistanceBias = 0;
  if ( (unsigned __int8)(v2 & 0x3F) > (unsigned __int8)(((v2 >> 7) & 0xF9) + 7) )
    v3 = ((v2 >> 7) & 0xF9) + 7;
  Proxy->neededSize = v3;
  ImageAtlas_ClampProxyNeededSize(Proxy);
}

/*
==============
Load_DecalVolumesBuffer
==============
*/
void Load_DecalVolumesBuffer(GfxWrappedBuffer *buffer, GfxDecalVolumeTransientData *transientData)
{
  GfxWrappedBuffer *p_decalVolumesBuffer; 

  p_decalVolumesBuffer = &transientData->decalVolumesBuffer;
  if ( buffer != &transientData->decalVolumesBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 5072, ASSERT_TYPE_SANITY, "( buffer == &transientData->decalVolumesBuffer )", (const char *)&queryFormat, "buffer == &transientData->decalVolumesBuffer") )
    __debugbreak();
  Load_GfxWrappedBuffer(p_decalVolumesBuffer, GfxWrappedBuffer_Structured, 0x2Cu, transientData->decalVolumeCount, transientData->decalVolumes, "decal volumes buffer", 0);
}

/*
==============
Load_DecalVolumesBuffer
==============
*/
void Load_DecalVolumesBuffer(GfxWrappedBuffer *buffer, GfxWorldDraw *gfxWorld)
{
  GfxWrappedBuffer *p_materialAndMaskIndirectionBuffer; 
  unsigned int decalVolumeMaterialCount; 
  unsigned int decalVolumeMaskCount; 
  GfxStaticDecalVolumeMaterial *decalVolumeMaterials; 
  GfxStaticDecalVolumeMask *decalVolumeMasks; 
  unsigned int v8; 
  __int64 v9; 
  __int64 v10; 
  unsigned int MaterialIndex; 
  unsigned int i; 
  unsigned int MaskIndex; 
  __int64 v14; 

  p_materialAndMaskIndirectionBuffer = &gfxWorld->materialAndMaskIndirectionBuffer;
  if ( buffer != &gfxWorld->materialAndMaskIndirectionBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 5041, ASSERT_TYPE_SANITY, "( buffer == &gfxWorld->materialAndMaskIndirectionBuffer )", (const char *)&queryFormat, "buffer == &gfxWorld->materialAndMaskIndirectionBuffer") )
    __debugbreak();
  decalVolumeMaterialCount = gfxWorld->decalVolumeMaterialCount;
  decalVolumeMaskCount = gfxWorld->decalVolumeMaskCount;
  decalVolumeMaterials = gfxWorld->decalVolumeMaterials;
  decalVolumeMasks = gfxWorld->decalVolumeMasks;
  v8 = decalVolumeMaskCount + decalVolumeMaterialCount;
  if ( decalVolumeMaskCount + decalVolumeMaterialCount )
  {
    if ( decalVolumeMaterialCount )
    {
      v9 = 0i64;
      v10 = gfxWorld->decalVolumeMaterialCount;
      do
      {
        MaterialIndex = R_DecalVolumes_GetMaterialIndex(decalVolumeMaterials->material->decalVolumeMaterial);
        ++v9;
        ++decalVolumeMaterials;
        gfxWorld->materialAndMaskIndirection[v9 - 1] = MaterialIndex;
        --v10;
      }
      while ( v10 );
      v8 = decalVolumeMaskCount + decalVolumeMaterialCount;
    }
    for ( i = 0; i < decalVolumeMaskCount; gfxWorld->materialAndMaskIndirection[v14] = MaskIndex )
    {
      MaskIndex = R_DecalVolumes_GetMaskIndex(decalVolumeMasks->blendMapOverride);
      v14 = i + decalVolumeMaterialCount;
      ++i;
      ++decalVolumeMasks;
    }
    Load_GfxWrappedBuffer(p_materialAndMaskIndirectionBuffer, GfxWrappedBuffer_Structured, 4u, v8, gfxWorld->materialAndMaskIndirection, "materialAndMaskIndirectionBuffer", 0);
  }
  else
  {
    if ( gfxWorld->mapDecalVolumeCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 5049, ASSERT_TYPE_SANITY, "( gfxWorld->mapDecalVolumeCount == 0 )", (const char *)&queryFormat, "gfxWorld->mapDecalVolumeCount == 0") )
      __debugbreak();
    if ( gfxWorld->decalVolumeCollectionCount )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 5050, ASSERT_TYPE_SANITY, "( gfxWorld->decalVolumeCollectionCount == 0 )", (const char *)&queryFormat, "gfxWorld->decalVolumeCollectionCount == 0") )
        __debugbreak();
    }
  }
}

/*
==============
RB_DecalVolume_PipelineProcess
==============
*/
void RB_DecalVolume_PipelineProcess(ComputeCmdBufState *state, const GfxViewInfo *viewInfo, const GfxBackEndData *data, unsigned int decalCount)
{
  __int64 decalVolumeIndex; 
  int integer; 
  int v10; 
  unsigned int v11; 
  bool enabled; 
  unsigned int resource; 
  int v15; 
  unsigned int v16; 
  DecalVolumePiplineCullingPart1ResourcePtrs *p_res; 
  __int64 v19; 
  GfxWrappedRWBuffer *p_cellIndirectionCount; 
  GfxShaderBufferView *views; 
  unsigned int decalCounta; 
  DecalVolumeCsConstants dataa; 
  DecalVolumePiplineCullingPart1ResourcePtrs res; 

  decalVolumeIndex = data->decalVolumeIndex;
  decalCounta = decalCount;
  views = (GfxShaderBufferView *)data;
  *(_QWORD *)&s_decalVolumes.stagingRing.visibleDecalCountsCpu[decalVolumeIndex][0] = 0i64;
  if ( decalCount )
  {
    R_ProfBeginNamedEvent(state, "D+ Pipeline Clear");
    integer = 0;
    R_HW_AddResourceTransition(state, &s_decalVolumes.cullStaticIndicesBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_HW_AddResourceTransition(state, &s_decalVolumes.cullImpactMarkIndicesBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_HW_AddResourceTransition(state, &s_decalVolumes.cullDecalsCountBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_HW_AddResourceTransition(state, &s_decalVolumes.materialLodsBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_HW_AddResourceTransition(state, &s_decalVolumes.maskLodsBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_HW_FlushResourceTransitions(state);
    v10 = s_decalVolumes.intInInstanceCount[decalVolumeIndex];
    if ( v10 )
    {
      v11 = Int32_RoundUpToPowerOf2((v10 + 1023) & 0xFFFFFC00);
      R_DecalVolume_ClearBuffer(state, &s_decalVolumes.cullStaticIndicesBuffer, 4 * v11, 0xFFFFFFFF);
    }
    R_DecalVolume_ClearBuffer(state, &s_decalVolumes.cullImpactMarkIndicesBuffer, 0x1000u, 0xFFFFFFFF);
    R_DecalVolume_ClearBuffer(state, &s_decalVolumes.cullDecalsCountBuffer, 0x10u, 0);
    R_DecalVolume_ClearBuffer(state, &s_decalVolumes.materialLodsBuffer, 0x3000u, 0);
    R_DecalVolume_ClearBuffer(state, &s_decalVolumes.maskLodsBuffer, 0xC00u, 0);
    R_HW_AddResourceTransition(state, &s_decalVolumes.cullStaticIndicesBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_HW_AddResourceTransition(state, &s_decalVolumes.cullImpactMarkIndicesBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_HW_AddResourceTransition(state, &s_decalVolumes.cullDecalsCountBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_HW_AddResourceTransition(state, &s_decalVolumes.materialLodsBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_HW_AddResourceTransition(state, &s_decalVolumes.maskLodsBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_HW_FlushResourceTransitions(state);
    R_ProfEndNamedEvent(state);
    enabled = r_decalVolumesShowMaterialName->current.enabled;
    if ( r_decalVolumes->current.enabled )
      integer = r_decalVolumesDebug->current.integer;
    if ( enabled || integer > 0 )
    {
      R_ProfBeginNamedEvent(state, "D+ Pipeline Clear Debug");
      R_HW_AddResourceTransition(state, &s_decalVolumes.materialDebugInfo, 0xFFFFFFFF, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_HW_AddResourceTransition(state, &s_decalVolumes.materialDebugInfoCount, 0xFFFFFFFF, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_HW_FlushResourceTransitions(state);
      R_DecalVolume_ClearBuffer(state, &s_decalVolumes.materialDebugInfo, 0x540u, 0);
      R_DecalVolume_ClearBuffer(state, &s_decalVolumes.materialDebugInfoCount, 0x10u, 0);
      R_HW_AddResourceTransition(state, &s_decalVolumes.materialDebugInfo, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_HW_AddResourceTransition(state, &s_decalVolumes.materialDebugInfoCount, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_HW_FlushResourceTransitions(state);
      R_ProfEndNamedEvent(state);
    }
    R_ProfBeginNamedEvent(state, "D+ Pipeline Culling 0");
    R_HW_AddResourceTransition(state, &s_decalVolumes.cullStaticDecalsBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_HW_AddResourceTransition(state, &s_decalVolumes.cullDecalsCountBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_HW_FlushResourceTransitions(state);
    res.materialLods = &s_decalVolumes.cullStaticDecalsBuffer;
    res.maskLods = &s_decalVolumes.cullDecalsCountBuffer;
    R_DecalVolume_PipelineCullingPart0(state, viewInfo, decalVolumeIndex, decalCount, (const DecalVolumePiplineCullingPart0ResourcePtrs *)&res);
    R_HW_AddResourceTransition(state, &s_decalVolumes.cullDecalsCountBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_HW_AddResourceTransition(state, &s_decalVolumes.cullStaticDecalsBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_HW_FlushResourceTransitions(state);
    R_ProfEndNamedEvent(state);
    R_ProfBeginNamedEvent(state, "D+ Pipeline Culling 0 indirect args");
    R_HW_AddResourceTransition(state, &s_decalVolumes.cullIndirectArgsBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_HW_FlushResourceTransitions(state);
    resource = (unsigned int)views[68046].resource;
    R_SetComputeShader(state, rgp.decalVolumeCollectionsIndirectArgs);
    views = &s_decalVolumes.cullDecalsCountBuffer.view;
    R_SetComputeViews(state, 1, 1, (const GfxShaderBufferView *const *)&views);
    views = (GfxShaderBufferView *)&s_decalVolumes.cullIndirectArgsBuffer.rwView;
    R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
    LOWORD(res.materialLods) = 0;
    LODWORD(res.maskLods) = 0;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&res.decalsCountBuffer = _XMM0;
    RB_DecalVolume_PreparePipelineConstants(viewInfo, resource, 0, 0, 0, (R_RT_ColorHandle *)&res, &dataa);
    R_UploadAndSetComputeConstants(state, 0, &dataa, 0x2F0u, NULL);
    R_Dispatch(state, 1u, 1u, 1u);
    R_HW_AddResourceTransition(state, &s_decalVolumes.cullIndirectArgsBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_HW_FlushResourceTransitions(state);
    R_ProfEndNamedEvent(state);
    R_ProfBeginNamedEvent(state, "D+ Pipeline Culling 1");
    R_HW_AddResourceTransition(state, &s_decalVolumes.materialLodsBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_HW_AddResourceTransition(state, &s_decalVolumes.maskLodsBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_HW_AddResourceTransition(state, &s_decalVolumes.cullDecalsCountBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_HW_AddResourceTransition(state, &s_decalVolumes.cullStaticIndicesBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_HW_AddResourceTransition(state, &s_decalVolumes.cullImpactMarkIndicesBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_HW_FlushResourceTransitions(state);
    res.materialLods = &s_decalVolumes.materialLodsBuffer;
    res.maskLods = &s_decalVolumes.maskLodsBuffer;
    res.decalsCountBuffer = &s_decalVolumes.cullDecalsCountBuffer;
    res.cullStaticIndicesBuffer = &s_decalVolumes.cullStaticIndicesBuffer;
    res.cullImpactMarkIndicesBuffer = &s_decalVolumes.cullImpactMarkIndicesBuffer;
    res.staticDecals = &s_decalVolumes.cullStaticDecalsBuffer;
    res.collectionsIndirectArgs = &s_decalVolumes.cullIndirectArgsBuffer;
    R_DecalVolume_PipelineCullingPart1(state, viewInfo, decalVolumeIndex, decalCounta, &res);
    R_HW_AddResourceTransition(state, &s_decalVolumes.materialLodsBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_HW_AddResourceTransition(state, &s_decalVolumes.maskLodsBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_HW_AddResourceTransition(state, &s_decalVolumes.cullDecalsCountBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_HW_AddResourceTransition(state, &s_decalVolumes.cullStaticIndicesBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_HW_AddResourceTransition(state, &s_decalVolumes.cullImpactMarkIndicesBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_HW_FlushResourceTransitions(state);
    R_ProfEndNamedEvent(state);
    R_ProfBeginNamedEvent(state, "D+ Pipeline Culling 2");
    R_HW_AddResourceTransition(state, &s_decalVolumes.cullStaticIndicesBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_HW_FlushResourceTransitions(state);
    v15 = s_decalVolumes.intInInstanceCount[decalVolumeIndex];
    if ( v15 )
    {
      v16 = Int32_RoundUpToPowerOf2((v15 + 1023) & 0xFFFFFC00);
      R_GPUSorter_SortBitonic(state, &s_decalVolumes.cullStaticIndicesBuffer, v16, 0, viewInfo->input.data->smpFrame, GFX_GPU_SORTER_DATA_U32, GFX_GPU_SORTER_DIRECTON_ASCENDING);
    }
    R_GPUSorter_SortBitonic(state, &s_decalVolumes.cullImpactMarkIndicesBuffer, 0x400u, 0, viewInfo->input.data->smpFrame, GFX_GPU_SORTER_DATA_U32, GFX_GPU_SORTER_DIRECTON_ASCENDING);
    R_HW_AddResourceTransition(state, &s_decalVolumes.cullStaticIndicesBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_HW_FlushResourceTransitions(state);
    R_ProfEndNamedEvent(state);
    R_ProfBeginNamedEvent(state, "D+ Pipeline Indirect args");
    R_HW_AddResourceTransition(state, &s_decalVolumes.cullIndirectArgsBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_HW_AddResourceTransition(state, &s_decalVolumes.decalClusteringDataCountBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_HW_FlushResourceTransitions(state);
    R_SetComputeShader(state, rgp.decalVolumeCullIndirectArgs);
    views = &s_decalVolumes.cullDecalsCountBuffer.view;
    R_SetComputeViews(state, 1, 1, (const GfxShaderBufferView *const *)&views);
    views = (GfxShaderBufferView *)&s_decalVolumes.decalClusteringDataCountBuffer.rwView;
    R_SetComputeRWViewsWithCounters(state, 1, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
    views = (GfxShaderBufferView *)&s_decalVolumes.cullIndirectArgsBuffer.rwView;
    R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
    R_Dispatch(state, 1u, 1u, 1u);
    R_HW_AddResourceTransition(state, &s_decalVolumes.cullIndirectArgsBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_HW_AddResourceTransition(state, &s_decalVolumes.decalClusteringDataCountBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_HW_FlushResourceTransitions(state);
    R_ProfEndNamedEvent(state);
    R_ProfBeginNamedEvent(state, "D+ Pipeline gen clustering data");
    R_HW_AddResourceTransition(state, &s_decalVolumes.decalClusteringDataBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_HW_FlushResourceTransitions(state);
    R_SetComputeShader(state, rgp.decalVolumeGenerateClusterData);
    LOWORD(res.materialLods) = 0;
    LODWORD(res.maskLods) = 0;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&res.decalsCountBuffer = _XMM0;
    RB_DecalVolume_PreparePipelineConstants(viewInfo, decalVolumeIndex, 0, 0, 0, (R_RT_ColorHandle *)&res, &dataa);
    R_UploadAndSetComputeConstants(state, 0, &dataa, 0x2F0u, NULL);
    views = &s_decalVolumes.cullStaticDecalsBuffer.view;
    R_SetComputeViews(state, 3, 1, (const GfxShaderBufferView *const *)&views);
    views = &s_decalVolumes.impactMarkDecalsBuffer[0].view + 2 * (unsigned int)decalVolumeIndex;
    R_SetComputeViews(state, 7, 1, (const GfxShaderBufferView *const *)&views);
    views = &s_decalVolumes.cullStaticIndicesBuffer.view;
    R_SetComputeViews(state, 6, 1, (const GfxShaderBufferView *const *)&views);
    views = &s_decalVolumes.cullImpactMarkIndicesBuffer.view;
    R_SetComputeViews(state, 8, 1, (const GfxShaderBufferView *const *)&views);
    views = &s_decalVolumes.cullDecalsCountBuffer.view;
    R_SetComputeViews(state, 1, 1, (const GfxShaderBufferView *const *)&views);
    views = (GfxShaderBufferView *)&s_decalVolumes.decalClusteringDataBuffer.rwView;
    R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
    R_DispatchIndirect(state, s_decalVolumes.cullIndirectArgsBuffer.buffer, 0);
    R_HW_AddResourceTransition(state, &s_decalVolumes.decalClusteringDataBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_HW_FlushResourceTransitions(state);
    R_ProfEndNamedEvent(state);
    R_ProfBeginNamedEvent(state, "D+ Pipeline gen draw data");
    R_HW_AddResourceTransition(state, &s_decalVolumes.decalDrawDataBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_HW_FlushResourceTransitions(state);
    res.cullImpactMarkIndicesBuffer = &s_decalVolumes.decalDrawDataBuffer;
    res.materialLods = &s_decalVolumes.cullStaticDecalsBuffer;
    res.maskLods = &s_decalVolumes.cullDecalsCountBuffer;
    res.decalsCountBuffer = &s_decalVolumes.cullStaticIndicesBuffer;
    res.cullStaticIndicesBuffer = &s_decalVolumes.cullImpactMarkIndicesBuffer;
    res.staticDecals = &s_decalVolumes.cullIndirectArgsBuffer;
    R_DecalVolume_PipelineGenerateDrawData(state, viewInfo, decalVolumeIndex, (const DecalVolumePiplineGenerateResourcePtrs *)&res);
    R_HW_AddResourceTransition(state, &s_decalVolumes.decalDrawDataBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_HW_FlushResourceTransitions(state);
    R_ProfEndNamedEvent(state);
    if ( enabled || integer > 0 )
    {
      R_ProfBeginNamedEvent(state, "D+ Pipeline gen debug info");
      R_HW_AddResourceTransition(state, &s_decalVolumes.materialDebugInfo, 0xFFFFFFFF, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_HW_AddResourceTransition(state, &s_decalVolumes.materialDebugInfoCount, 0xFFFFFFFF, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_HW_FlushResourceTransitions(state);
      res.staticDecals = &s_decalVolumes.materialDebugInfo;
      res.materialLods = &s_decalVolumes.cullDecalsCountBuffer;
      res.maskLods = &s_decalVolumes.cullStaticIndicesBuffer;
      res.decalsCountBuffer = &s_decalVolumes.cullImpactMarkIndicesBuffer;
      res.cullStaticIndicesBuffer = &s_decalVolumes.cullStaticDecalsBuffer;
      res.staticDecalsMapIndex = &s_decalVolumes.materialDebugInfoCount;
      *(_QWORD *)&res.occlusionTexture.m_surfaceID = &s_decalVolumes.cullIndirectArgsBuffer;
      R_DecalVolume_PipelineGenerateMaterialDebugInfo(state, viewInfo, decalVolumeIndex, (const DecalVolumePiplineMaterialDebugInfoResourcePtrs *)&res);
      R_HW_AddResourceTransition(state, &s_decalVolumes.materialDebugInfo, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_HW_AddResourceTransition(state, &s_decalVolumes.materialDebugInfoCount, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_HW_FlushResourceTransitions(state);
      R_ProfEndNamedEvent(state);
    }
    R_ProfBeginNamedEvent(state, "D+ Pipeline copy LOD data");
    R_DecalVolume_PipelineCopyLODData(state, decalVolumeIndex, &s_decalVolumes.materialLodsBuffer, &s_decalVolumes.maskLodsBuffer);
    R_ProfEndNamedEvent(state);
    if ( enabled || integer > 0 )
    {
      R_ProfBeginNamedEvent(state, "D+ Pipeline copy debug info");
      memset(&res, 0, 40);
      if ( s_decalVolumes.clustering.numClusteringPasses != 1 )
      {
        p_res = &res;
        v19 = s_decalVolumes.clustering.numClusteringPasses - 1;
        p_cellIndirectionCount = &s_decalVolumes.clustering.clusteringPassesResources[0].cellIndirectionCount;
        do
        {
          p_res->materialLods = p_cellIndirectionCount;
          p_res = (DecalVolumePiplineCullingPart1ResourcePtrs *)((char *)p_res + 8);
          p_cellIndirectionCount += 4;
          --v19;
        }
        while ( v19 );
      }
      R_DecalVolume_PipelineCopyDebugInfo(state, decalVolumeIndex, &s_decalVolumes.cullDecalsCountBuffer, &s_decalVolumes.materialDebugInfo, &s_decalVolumes.materialDebugInfoCount, &s_decalVolumes.clustering.decalIndicesCounts, &res.materialLods);
      R_ProfEndNamedEvent(state);
    }
  }
  else
  {
    memset_0(s_decalVolumes.stagingRing.materialLodsCpu[decalVolumeIndex], 0, 0x3000ui64);
    memset_0(s_decalVolumes.stagingRing.maskLodsCpu[decalVolumeIndex], 0, 0xC00ui64);
  }
}

/*
==============
RB_DecalVolume_PreparePipelineConstants
==============
*/
void RB_DecalVolume_PreparePipelineConstants(const GfxViewInfo *viewInfo, unsigned int frame, unsigned int workgroupOffset, unsigned int workgroupCount, unsigned int workgroupTransient, R_RT_ColorHandle *occlusionTexture, DecalVolumeCsConstants *clusterConstantsTmp)
{
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v12; 
  __int64 v14; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  __int128 v22; 
  double v23; 
  signed int v24; 
  float v25; 
  float tanHalfFovY; 
  const dvar_t *v27; 
  double v28; 
  const dvar_t *v29; 
  const dvar_t *v30; 
  const dvar_t *v31; 
  float width; 
  __int64 height; 
  float v34; 
  const R_RT_Surface *Surface; 
  const dvar_t *v36; 
  float value; 
  float v38; 
  __int128 v40; 
  __int128 v43; 
  float v45; 
  StreamUpdateMultiViewGPU *p_dvgStream; 
  DecalVolumeStreamViewInfo *v47; 
  unsigned int *p_viewCount; 
  unsigned int viewCount; 
  const dvar_t *v50; 
  float *viewCosFovLimit; 
  signed __int64 v52; 
  __m128 v54; 
  int v56; 
  __int64 v57; 
  __int64 v58; 
  __int64 v59; 
  __int64 v60; 

  v7 = viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[0].v[1];
  v8 = viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[1].v[0];
  v9 = viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[0].v[0];
  v10 = viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[0].v[2];
  v12 = (float)((float)(v7 * viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[1].v[1]) + (float)(v9 * v8)) + (float)(v10 * viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[1].v[2]);
  v14 = frame;
  if ( COERCE_FLOAT(LODWORD(v12) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 7967, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( axis[0], axis[1] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", v9, v7, v10, v8, viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[1].v[1], viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[1].v[2], v12) )
    __debugbreak();
  v16 = viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[0].v[1];
  v17 = viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[0].v[0];
  v18 = viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[2].v[0];
  v19 = viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[0].v[2];
  v20 = (float)((float)(v18 * v17) + (float)(v16 * viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[2].v[1])) + (float)(v19 * viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[2].v[2]);
  if ( COERCE_FLOAT(LODWORD(v20) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 7968, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( axis[0], axis[2] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", v17, v16, v19, v18, viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[2].v[1], viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[2].v[2], v20) )
    __debugbreak();
  v21 = viewInfo->viewParmsSet.frames[0].viewParms.camera.zPlanes[2];
  v22 = LODWORD(s_decalVolumes.farPlane[viewInfo->input.data->decalVolumeIndex]);
  v23 = I_fres(v21);
  memset_0(clusterConstantsTmp, 0, sizeof(DecalVolumeCsConstants));
  *(__m256i *)clusterConstantsTmp->dvViewProjMatrix.m.m[0].v = *(__m256i *)viewInfo->viewParms.viewProjectionMatrix.m.m[0].v;
  *(__m256i *)clusterConstantsTmp->dvViewProjMatrix.m.row2.v = *(__m256i *)viewInfo->viewParms.viewProjectionMatrix.m.row2.v;
  clusterConstantsTmp->dvNearFar.v[0] = v21;
  clusterConstantsTmp->dvNearFar.v[1] = *(float *)&v22;
  v24 = 0;
  clusterConstantsTmp->dvNearFar.v[3] = 0.0;
  clusterConstantsTmp->dvNearFar.v[2] = *(float *)&v23 * *(float *)&v22;
  LODWORD(v25) = LODWORD(viewInfo->viewParmsSet.frames[0].viewParms.camera.tanHalfFovX) ^ _xmm;
  clusterConstantsTmp->dvEyeAxisX.v[0] = v25 * viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[1].v[0];
  clusterConstantsTmp->dvEyeAxisX.v[1] = v25 * viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[1].v[1];
  clusterConstantsTmp->dvEyeAxisX.v[2] = v25 * viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[1].v[2];
  clusterConstantsTmp->dvEyeAxisX.v[3] = 0.0;
  tanHalfFovY = viewInfo->viewParmsSet.frames[0].viewParms.camera.tanHalfFovY;
  clusterConstantsTmp->dvEyeAxisY.v[0] = tanHalfFovY * viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[2].v[0];
  clusterConstantsTmp->dvEyeAxisY.v[1] = tanHalfFovY * viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[2].v[1];
  clusterConstantsTmp->dvEyeAxisY.v[2] = tanHalfFovY * viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[2].v[2];
  clusterConstantsTmp->dvEyeAxisY.v[3] = 0.0;
  *(_QWORD *)clusterConstantsTmp->dvEyeAxisZ.v = *(_QWORD *)viewInfo->viewParms.camera.axis.m[0].v;
  *(_QWORD *)&clusterConstantsTmp->dvEyeAxisZ.xyz.z = LODWORD(viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[0].v[2]);
  *(_QWORD *)clusterConstantsTmp->dvEyeOffset.v = *(_QWORD *)viewInfo->viewParms.camera.origin.v;
  clusterConstantsTmp->dvEyeOffset.v[2] = viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[2];
  clusterConstantsTmp->dvgWorkgroupOffset = workgroupOffset;
  clusterConstantsTmp->dvgWorkgroupTransient = workgroupTransient;
  clusterConstantsTmp->dvEyeOffset.v[3] = 0.0;
  clusterConstantsTmp->dvgWorkgroupCount = workgroupCount;
  clusterConstantsTmp->dvgMarkCount = s_decalVolumes.intVolumesCount[v14] + s_decalVolumes.particleMarksCount[v14];
  clusterConstantsTmp->dvgMaterialCount = rgp.world->draw.decalVolumeMaterialCount;
  v27 = DCONST_DVARFLT_r_decalVolumesMarksZFeather;
  if ( !DCONST_DVARFLT_r_decalVolumesMarksZFeather && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_decalVolumesMarksZFeather") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v27);
  v28 = R_DecalVolumes_CalculateZFeatherRcpNormalized(v27->current.value);
  clusterConstantsTmp->dvgMarkZFeatherRcp = *(float *)&v28;
  v29 = DVARVEC3_r_decalVolumesScale;
  if ( !DVARVEC3_r_decalVolumesScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_decalVolumesScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v29);
  clusterConstantsTmp->dvgScale = *(vec3_t *)&v29->current.string;
  v30 = DCONST_DVARINT_r_decalVolumesBorderWidth;
  if ( !DCONST_DVARINT_r_decalVolumesBorderWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_decalVolumesBorderWidth") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v30);
  clusterConstantsTmp->dvgBorderWidth = v30->current.unsignedInt;
  v31 = DCONST_DVARFLT_r_decalVolumesEdgeFade;
  if ( !DCONST_DVARFLT_r_decalVolumesEdgeFade && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_decalVolumesEdgeFade") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v31);
  clusterConstantsTmp->dvgEdgeFade = v31->current.value * 0.5;
  width = (float)viewInfo->sceneViewport.width;
  clusterConstantsTmp->dvgRenderTargetSize.v[0] = width;
  height = viewInfo->sceneViewport.height;
  *(_QWORD *)&clusterConstantsTmp->dvgRenderTargetSize.xyz.z = 0i64;
  v34 = (float)height;
  clusterConstantsTmp->dvgRenderTargetSize.v[1] = v34;
  LODWORD(clusterConstantsTmp->dvgCullSize) = r_decalVolumesCullSize->current.integer;
  if ( occlusionTexture->m_surfaceID )
  {
    Surface = R_RT_Handle::GetSurface(occlusionTexture);
    clusterConstantsTmp->dvOcclusionCulling.v[0] = 1;
    clusterConstantsTmp->dvOcclusionCulling.v[1] = Surface->m_image.m_base.width;
    clusterConstantsTmp->dvOcclusionCulling.v[2] = Surface->m_image.m_base.height;
    clusterConstantsTmp->dvOcclusionCulling.v[3] = Surface->m_image.m_base.levelCount - 1;
  }
  else
  {
    clusterConstantsTmp->dvOcclusionCulling = 0ui64;
  }
  v36 = DCONST_DVARFLT_r_decalVolumesFadeOutRange;
  if ( !DCONST_DVARFLT_r_decalVolumesFadeOutRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_decalVolumesFadeOutRange") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v36);
  value = v36->current.value;
  v38 = 0.0;
  if ( value <= 0.0 )
  {
    v45 = FLOAT_1_0;
  }
  else
  {
    v40 = v22;
    *(float *)&v40 = *(float *)&v22 - value;
    _XMM0 = v40;
    __asm { vmaxss  xmm6, xmm0, xmm1 }
    v43 = v22;
    *(float *)&v43 = *(float *)&v22 - *(float *)&_XMM6;
    _XMM0 = v43;
    __asm { vmaxss  xmm0, xmm0, cs:__real@00800000; val }
    *(double *)&_XMM0 = I_fres(*(float *)&_XMM0);
    v45 = (float)(*(float *)&_XMM6 + 1.0) * *(float *)&_XMM0;
    LODWORD(v38) = _XMM0 ^ _xmm;
  }
  clusterConstantsTmp->dvgFadeOutScale = v38;
  clusterConstantsTmp->dvgFadeOutBias = v45;
  if ( (unsigned int)v14 >= 2 )
  {
    LODWORD(v58) = 2;
    LODWORD(v57) = v14;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 7152, ASSERT_TYPE_ASSERT, "(unsigned)( frame ) < (unsigned)( ( sizeof( *array_counter( s_decalVolumes.streamViewInfo ) ) + 0 ) )", "frame doesn't index ARRAY_COUNT( s_decalVolumes.streamViewInfo )\n\t%i not in [0, %i)", v57, v58) )
      __debugbreak();
  }
  p_dvgStream = &clusterConstantsTmp->dvgStream;
  v47 = &s_decalVolumes.streamViewInfo[v14];
  p_viewCount = (unsigned int *)&v47->multiView.viewCount;
  viewCount = v47->multiView.viewCount;
  if ( viewCount )
  {
    if ( viewCount > 8 )
    {
      LODWORD(v60) = 8;
      LODWORD(v59) = v47->multiView.viewCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 8033, ASSERT_TYPE_ASSERT, "( streamViewInfo.multiView.viewCount ) <= ( ( sizeof( *array_counter( StreamUpdateMultiViewGPU::viewPos ) ) + 0 ) )", "%s <= %s\n\t%u, %u", "streamViewInfo.multiView.viewCount", "ARRAY_COUNT( StreamUpdateMultiViewGPU::viewPos )", v59, v60) )
        __debugbreak();
    }
    clusterConstantsTmp->dvgStream.viewCount = *p_viewCount;
    v50 = DCONST_DVARFLT_stream_minZoomFactorForViewDirectionRelativeCalculations;
    if ( !DCONST_DVARFLT_stream_minZoomFactorForViewDirectionRelativeCalculations && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_minZoomFactorForViewDirectionRelativeCalculations") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v50);
    LODWORD(clusterConstantsTmp->dvgStream.minZoomFactorForViewDirectionRelativeCalculations) = v50->current.integer;
    if ( (int)*p_viewCount > 0 )
    {
      viewCosFovLimit = v47->multiView.viewCosFovLimit;
      v52 = (char *)v47 - (char *)p_dvgStream;
      _RCX = &clusterConstantsTmp->dvgStream.viewDir[0].v[2];
      do
      {
        v54 = *(__m128 *)((char *)_RCX + v52 - 136);
        *(_RCX - 34) = v54.m128_f32[0] - viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[0];
        *(_RCX - 33) = _mm_shuffle_ps(v54, v54, 85).m128_f32[0] - viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[1];
        *(_RCX - 32) = _mm_shuffle_ps(v54, v54, 170).m128_f32[0] - viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[2];
        _XMM1 = *(_OWORD *)((char *)_RCX + v52 + 120);
        *(_RCX - 2) = *(float *)&_XMM1;
        __asm
        {
          vextractps dword ptr [rcx-4], xmm1, 1
          vextractps dword ptr [rcx], xmm1, 2
        }
        v56 = *((_DWORD *)viewCosFovLimit++ - 32);
        *((_DWORD *)_RCX + 30) = v56;
        _RCX += 4;
        ++v24;
        _RCX[27] = *(viewCosFovLimit - 1);
      }
      while ( v24 < (int)*p_viewCount );
    }
  }
  else
  {
    clusterConstantsTmp->dvgStream.viewCount = 1;
    clusterConstantsTmp->dvgStream.minZoomFactorForViewDirectionRelativeCalculations = 1.5;
    *(_QWORD *)p_dvgStream->viewPos[0].v = 0i64;
    *(_QWORD *)&clusterConstantsTmp->dvgStream.viewPos[0].xyz.z = 0i64;
    *(_QWORD *)clusterConstantsTmp->dvgStream.viewDir[0].v = *(_QWORD *)viewInfo->viewParms.camera.axis.m[0].v;
    clusterConstantsTmp->dvgStream.viewDir[0].v[2] = viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[0].v[2];
    *(_QWORD *)clusterConstantsTmp->dvgStream.viewZoomFactors_viewCosFovLimit[0].v = 1065353216i64;
  }
}

/*
==============
RB_DecalVolumes_DrawOBB
==============
*/
void RB_DecalVolumes_DrawOBB(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxBackEndData *data, const GfxWrappedBuffer *debugData, unsigned int iHit, unsigned int decalIndex)
{
  GfxCmdBufSourceState *source; 
  GfxCmdBufState *state; 
  Material *decalVolumeDebugMaterial; 
  GfxCmdBufContext v11; 
  __int64 viewStatsTarget; 
  unsigned int endSwapFrame; 
  GfxCmdBufContext v14; 
  GfxDrawPrimArgs args; 

  source = gfxContext->source;
  state = gfxContext->state;
  R_Set3D(gfxContext->source);
  if ( state->depthRangeType )
    R_ChangeDepthRange(state, GFX_DEPTH_RANGE_SCENE);
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1494, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeBuffers[38] = debugData;
  source->input.consts[150].v[1] = *(float *)&iHit;
  source->input.consts[150].v[2] = *(float *)&decalIndex;
  source->input.consts[150].v[0] = 9.0;
  source->input.consts[150].v[3] = 0.0;
  ++source->constVersions[150];
  decalVolumeDebugMaterial = rgp.decalVolumeDebugMaterial;
  if ( r_decalVolumesDebugDepthTest->current.enabled )
    decalVolumeDebugMaterial = rgp.decalVolumeDebugMaterialDepthTest;
  if ( R_BeginMaterial(state, decalVolumeDebugMaterial, TECHNIQUE_EMISSIVE) )
  {
    v14 = *gfxContext;
    R_SetupPass(&v14);
    if ( state->vertDeclType != VERTDECL_GENERIC )
      state->pipelineStateDirty = 1;
    v11 = *gfxContext;
    state->vertDeclType = VERTDECL_GENERIC;
    v14 = v11;
    R_SetupPassStableArgsInternal(&v14, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp(9197)");
    v14 = *gfxContext;
    R_SetupPassPerObjectArgsInternal(&v14, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp(9198)");
    v14 = *gfxContext;
    R_SetupPassPerPrimArgsInternal(&v14, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp(9199)");
    R_SetIndices(state, s_decalVolumes.obbIndicesBox);
    R_SetStreamSource(state, R_BASE_VERTEX_STREAM, s_decalVolumes.obbVerticesBox, 0, 0x20u);
    R_FlushStreamSources(state, 8u);
    R_SetPrimType(state, 4u);
    viewStatsTarget = source->viewStatsTarget;
    endSwapFrame = source->input.data->endSwapFrame;
    args.vertexCount = 8;
    *(_QWORD *)&args.primCount = 12i64;
    args.vertIndexBase = 0;
    args.trackFrameIndex = endSwapFrame;
    if ( (unsigned int)(viewStatsTarget + 128) > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "char __cdecl truncate_cast_impl<char,enum GfxViewStatsTarget>(enum GfxViewStatsTarget)", "signed", (char)viewStatsTarget, "signed", viewStatsTarget) )
      __debugbreak();
    args.viewStatsTarget = viewStatsTarget;
    *(_WORD *)&args.primStatsTarget = 8;
    R_DrawInstancedIndexedPrimitive(state, &args, 1u);
  }
}

/*
==============
RB_DecalVolumes_FrustumGridOverlay
==============
*/
void RB_DecalVolumes_FrustumGridOverlay(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, int mode)
{
  GfxCmdBufContext v3; 

  v3 = *gfxContext;
  R_DecalVolumes_FrustumGridOverlay(&v3, viewInfo, &s_decalVolumes.decalDrawDataBuffer, (const GfxWrappedBuffer *)&s_decalVolumes.proxyCoords[28 * (s_decalVolumes.clustering.numClusteringPasses - 1) - 176], mode);
}

/*
==============
RB_DecalVolumes_Show3DDebugInternal
==============
*/
void RB_DecalVolumes_Show3DDebugInternal(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxBackEndData *data, const GfxWrappedBuffer *debugData, const GfxWrappedBuffer *indirectArg, const GfxImage *floatZ, const GfxImage *tangentFrame, const GfxImage *entityIDVelocity, const GfxImage *packedStencil)
{
  __int128 v9; 
  unsigned int v11; 
  int integer; 
  GfxCmdBufSourceState *source; 
  float renderTargetWidth; 
  float renderTargetHeight; 
  int v18; 
  char v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  GfxImage *blackImage; 
  GfxCmdBufInput *p_input; 
  GfxCmdBufContext v26; 
  Material *decalVolumeDebugMaterial; 
  int v28; 
  GfxCmdBufSourceState *v29; 
  GfxCmdBufState *state; 
  GfxCmdBufInput *v31; 
  vec4_t v32; 
  const GfxWrappedBuffer *v33; 
  GfxCmdBufSourceState *v34; 
  GfxCmdBufState *v35; 
  vec4_t v36; 
  const dvar_t *v37; 
  const dvar_t *v38; 
  const dvar_t *v39; 
  __int64 decalVolumeIndex; 
  unsigned int v41; 
  const dvar_t *v42; 
  __int64 v43; 
  __int64 v44; 
  __int128 *v45; 
  _DWORD *v46; 
  unsigned int i; 
  const dvar_t *v48; 
  const dvar_t *v49; 
  BOOL v50; 
  const dvar_t *v51; 
  int v52; 
  int v53; 
  const dvar_t *v54; 
  int v55; 
  int v56; 
  int v57; 
  GfxCmdBufSourceState *v58; 
  GfxCmdBufSourceState *v59; 
  float v60; 
  float v61; 
  const dvar_t *v62; 
  float v63; 
  GfxCmdBufInput *v64; 
  GfxCmdBufInput *v65; 
  GfxCmdBufSourceState *v66; 
  GfxCmdBufInput *v67; 
  GfxCmdBufSourceState *v68; 
  GfxCmdBufInput *v69; 
  GfxCmdBufSourceState *v70; 
  GfxCmdBufInput *v71; 
  GfxCmdBufInput *v72; 
  GfxCmdBufContext v73; 
  __int64 v74; 
  unsigned int v75; 
  float v76; 
  float v77; 
  float v78; 
  float *v79; 
  unsigned int v80; 
  __int64 v81; 
  __int64 v82; 
  float v83; 
  float v84; 
  int v85; 
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
  float v96; 
  float v97; 
  float v98; 
  float v99; 
  int v100; 
  float v101; 
  float v102; 
  float v103; 
  float v104; 
  float v105; 
  float v106; 
  float v107; 
  float v108; 
  float v109; 
  float v110; 
  float v111; 
  float v112; 
  float v113; 
  float v114; 
  float v115; 
  float v116; 
  float v117; 
  float v118; 
  int v119; 
  float v120; 
  float v121; 
  float v122; 
  float v123; 
  float v124; 
  float v125; 
  float v126; 
  float v127; 
  float v128; 
  float v129; 
  int v130; 
  float v131; 
  float v132; 
  float v133; 
  float v134; 
  float v135; 
  float v136; 
  float v137; 
  float v138; 
  float v139; 
  float v140; 
  float v141; 
  float v142; 
  float v143; 
  float v144; 
  float *v145; 
  __int64 v146; 
  __int64 v147; 
  int v148; 
  float v149; 
  float v150; 
  float v151; 
  float v152; 
  float v153; 
  float v154; 
  float v155; 
  float v156; 
  float v157; 
  float v158; 
  float v159; 
  float v160; 
  float v161; 
  float v162; 
  GfxCmdBufState *v163; 
  const GfxWrappedBuffer *v164; 
  unsigned int v165; 
  __int64 v166; 
  _QWORD v167[3]; 
  const GfxWrappedBuffer *v168; 
  GfxCmdBufContext v169; 
  vec4_t vec; 
  vec4_t out; 
  vec4_t v172; 
  vec4_t v173; 
  char dataa[20]; 
  _QWORD v175[53]; 
  _QWORD v176[3]; 

  v168 = indirectArg;
  v11 = 0;
  v169.source = (GfxCmdBufSourceState *)debugData;
  integer = r_decalVolumesClusterDebugSlice->current.integer;
  if ( integer >= 0 )
  {
    source = gfxContext->source;
    *(_OWORD *)&v176[1] = v9;
    renderTargetWidth = (float)source->renderTargetWidth;
    renderTargetHeight = (float)source->renderTargetHeight;
    v18 = r_decalVolumesClusterDebugDistribution->current.integer;
    if ( v18 )
    {
      if ( v18 == 1 )
      {
        v19 = 0;
      }
      else
      {
        v19 = 1;
        if ( v18 == 2 )
          v19 = 1;
      }
    }
    else
    {
      v19 = 1;
    }
    v20 = viewInfo->viewParmsSet.frames[0].viewParms.camera.zPlanes[2];
    v21 = (float)(integer + 1) * 0.03125;
    v22 = s_decalVolumes.farPlane[viewInfo->input.data->decalVolumeIndex];
    if ( v19 )
      v23 = (float)((float)(1.0 - v21) * v20) + (float)(v22 * v21);
    else
      v23 = powf_0(COERCE_FLOAT(COERCE_UNSIGNED_INT(v22 / v20) & _xmm), v21) * v20;
    vec.v[0] = 0.0;
    vec.v[1] = 0.0;
    vec.v[2] = v23;
    vec.v[3] = FLOAT_1_0;
    MatrixTransformVector44Aligned(&vec, &viewInfo->viewParmsSet.frames[0].viewParms.projectionMatrix.m, &out);
    source->input.consts[149].v[0] = out.v[2] / out.v[3];
    *(_QWORD *)&source->input.consts[149].xyz.y = 0i64;
    source->input.consts[149].v[3] = 0.0;
    ++source->constVersions[149];
    *(_QWORD *)source->input.consts[150].v = 1082130432i64;
    source->input.consts[150].v[2] = 0.0;
    source->input.consts[150].v[3] = 0.5;
    ++source->constVersions[150];
    blackImage = rgp.blackImage;
    if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
      __debugbreak();
    p_input = &source->input;
    if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    v26 = *gfxContext;
    p_input->codeImages[4] = blackImage;
    *(GfxCmdBufContext *)&v167[1] = v26;
    RB_DrawStretchPic((GfxCmdBufContext *)&v167[1], rgp.decalVolumeDebugSolidMaterial, 0.0, 0.0, renderTargetWidth, renderTargetHeight, 0.0, 0.0, 1.0, 1.0, 0xFFFFFFFF, GFX_PRIM_STATS_CODE);
    *(GfxCmdBufContext *)&v167[1] = *gfxContext;
    RB_EndTessSurfaceInternal((GfxCmdBufContext *)&v167[1], "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp(9289)");
  }
  if ( r_decalVolumes->current.enabled && s_decalVolumes.intCollectionsCount[data->decalVolumeIndex] + s_decalVolumes.intVolumesCount[data->decalVolumeIndex] + s_decalVolumes.particleMarksCount[data->decalVolumeIndex] )
  {
    decalVolumeDebugMaterial = rgp.decalVolumeDebugMaterial;
    LODWORD(v167[1]) = r_decalVolumesDebug->current.integer;
    v28 = v167[1];
    if ( r_decalVolumesDebugDepthTest->current.enabled )
      decalVolumeDebugMaterial = rgp.decalVolumeDebugMaterialDepthTest;
    if ( SLODWORD(v167[1]) > 1 )
    {
      v29 = gfxContext->source;
      state = gfxContext->state;
      R_Set3D(gfxContext->source);
      if ( state->depthRangeType )
        R_ChangeDepthRange(state, GFX_DEPTH_RANGE_SCENE);
      *(_QWORD *)v29->input.consts[150].v = 1086324736i64;
      *(_QWORD *)&v29->input.consts[150].xyz.z = 0i64;
      ++v29->constVersions[150];
      v31 = &v29->input;
      if ( !v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1494, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
        __debugbreak();
      v31->codeBuffers[38] = (const GfxWrappedBuffer *)v169.source;
      if ( R_BeginMaterial(state, decalVolumeDebugMaterial, TECHNIQUE_EMISSIVE) )
      {
        vec = *(vec4_t *)gfxContext;
        R_SetupPass((GfxCmdBufContext *)&vec);
        if ( state->vertDeclType != VERTDECL_GENERIC )
          state->pipelineStateDirty = 1;
        v32 = *(vec4_t *)gfxContext;
        state->vertDeclType = VERTDECL_GENERIC;
        vec = v32;
        R_SetupPassStableArgsInternal((GfxCmdBufContext *)&vec, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp(9318)");
        vec = *(vec4_t *)gfxContext;
        R_SetupPassPerObjectArgsInternal((GfxCmdBufContext *)&vec, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp(9319)");
        vec = *(vec4_t *)gfxContext;
        R_SetupPassPerPrimArgsInternal((GfxCmdBufContext *)&vec, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp(9320)");
        R_SetIndices(state, s_decalVolumes.obbIndicesAxes);
        R_SetStreamSource(state, R_BASE_VERTEX_STREAM, s_decalVolumes.obbVerticesAxes, 0, 0x20u);
        R_FlushStreamSources(state, 4u);
        R_SetPrimType(state, 4u);
        v33 = v168;
        R_DrawIndexedIndirectPrimitive(state, v168->buffer, 0x28u);
        v28 = v167[1];
        goto LABEL_34;
      }
      v28 = v167[1];
    }
    v33 = v168;
LABEL_34:
    if ( v28 > 2 )
    {
      v34 = gfxContext->source;
      v35 = gfxContext->state;
      *(_QWORD *)v34->input.consts[150].v = 1088421888i64;
      *(_QWORD *)&v34->input.consts[150].xyz.z = 0i64;
      ++v34->constVersions[150];
      if ( R_BeginMaterial(v35, decalVolumeDebugMaterial, TECHNIQUE_EMISSIVE) )
      {
        vec = *(vec4_t *)gfxContext;
        R_SetupPass((GfxCmdBufContext *)&vec);
        if ( v35->vertDeclType != VERTDECL_GENERIC )
          v35->pipelineStateDirty = 1;
        v36 = *(vec4_t *)gfxContext;
        v35->vertDeclType = VERTDECL_GENERIC;
        vec = v36;
        R_SetupPassStableArgsInternal((GfxCmdBufContext *)&vec, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp(9348)");
        vec = *(vec4_t *)gfxContext;
        R_SetupPassPerObjectArgsInternal((GfxCmdBufContext *)&vec, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp(9349)");
        vec = *(vec4_t *)gfxContext;
        R_SetupPassPerPrimArgsInternal((GfxCmdBufContext *)&vec, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp(9350)");
        R_SetIndices(v35, s_decalVolumes.obbIndicesBox);
        R_SetStreamSource(v35, R_BASE_VERTEX_STREAM, s_decalVolumes.obbVerticesBox, 0, 0x20u);
        R_FlushStreamSources(v35, 8u);
        R_SetPrimType(v35, 4u);
        R_DrawIndexedIndirectPrimitive(v35, v33->buffer, 0x14u);
      }
    }
    v37 = DCONST_DVARBOOL_r_decalVolumesHighlightCluster;
    if ( !DCONST_DVARBOOL_r_decalVolumesHighlightCluster && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_decalVolumesHighlightCluster") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v37);
    if ( v37->current.enabled )
      goto LABEL_54;
    v38 = DCONST_DVARBOOL_r_decalVolumesHighlightBox;
    if ( !DCONST_DVARBOOL_r_decalVolumesHighlightBox && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_decalVolumesHighlightBox") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v38);
    if ( v38->current.enabled )
      goto LABEL_54;
    v39 = DCONST_DVARBOOL_r_decalVolumesHighlightOpacity;
    if ( !DCONST_DVARBOOL_r_decalVolumesHighlightOpacity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_decalVolumesHighlightOpacity") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v39);
    if ( v39->current.enabled || r_decalVolumesShowMaterialName->current.enabled || r_decalVolumes->current.enabled && r_decalVolumesDebug->current.integer == 3 )
    {
LABEL_54:
      decalVolumeIndex = data->decalVolumeIndex;
      *(_QWORD *)v172.v = -1i64;
      *(_QWORD *)&v172.xyz.z = -1i64;
      *(_QWORD *)v173.v = -1i64;
      v41 = s_decalVolumes.stagingRing.materialInfoCountCpu[decalVolumeIndex];
      *(_QWORD *)vec.v = s_decalVolumes.stagingRing.materialInfoCpu[decalVolumeIndex];
      *(_QWORD *)&v173.xyz.z = -1i64;
      if ( v41 > 8 )
      {
        LODWORD(v166) = v41;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 9377, ASSERT_TYPE_ASSERT, "( ( materialCount <= 8 ) )", "( materialCount ) = %u", v166) )
          __debugbreak();
      }
      v42 = DCONST_DVARBOOL_r_decalVolumesHighlightMaterial;
      v43 = r_decalVolumesShowMaterialSelect->current.integer;
      LODWORD(v168) = r_decalVolumesShowMaterialSelect->current.integer;
      if ( !DCONST_DVARBOOL_r_decalVolumesHighlightMaterial && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_decalVolumesHighlightMaterial") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v42);
      v44 = v43;
      if ( v42->current.enabled && v41 )
      {
        v45 = (__int128 *)&v172;
        v46 = (_DWORD *)(*(_QWORD *)vec.v + 152i64);
        for ( i = 0; i < v41; ++i )
        {
          if ( v44 == -1 || (_DWORD)v43 == i )
          {
            *(_DWORD *)v45 = *v46;
            v44 = v43;
          }
          v46 += 42;
          v45 = (__int128 *)((char *)v45 + 4);
        }
      }
      v48 = DCONST_DVARBOOL_r_decalVolumesHighlightCluster;
      *(_QWORD *)out.v = DCONST_DVARBOOL_r_decalVolumesHighlightCluster;
      if ( !DCONST_DVARBOOL_r_decalVolumesHighlightCluster && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_decalVolumesHighlightCluster") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v48);
      v49 = DCONST_DVARBOOL_r_decalVolumesHighlightBox;
      v50 = *(_BYTE *)(*(_QWORD *)out.v + 40i64) != 0;
      v167[1] = DCONST_DVARBOOL_r_decalVolumesHighlightBox;
      if ( !DCONST_DVARBOOL_r_decalVolumesHighlightBox )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_decalVolumesHighlightBox") )
          __debugbreak();
        v49 = (const dvar_t *)v167[1];
      }
      Dvar_CheckFrontendServerThread(v49);
      v51 = DCONST_DVARBOOL_r_decalVolumesHighlightOpacity;
      v52 = -(*(_BYTE *)(v167[1] + 40i64) != 0);
      v167[1] = DCONST_DVARBOOL_r_decalVolumesHighlightOpacity;
      v53 = v52 & 2 | v50;
      if ( !DCONST_DVARBOOL_r_decalVolumesHighlightOpacity )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_decalVolumesHighlightOpacity") )
          __debugbreak();
        v51 = (const dvar_t *)v167[1];
      }
      Dvar_CheckFrontendServerThread(v51);
      v54 = DCONST_DVARBOOL_r_decalVolumesHighlightMaterial;
      v55 = -(*(_BYTE *)(v167[1] + 40i64) != 0);
      v167[1] = DCONST_DVARBOOL_r_decalVolumesHighlightMaterial;
      v56 = v55 & 4 | v53;
      if ( !DCONST_DVARBOOL_r_decalVolumesHighlightMaterial )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_decalVolumesHighlightMaterial") )
          __debugbreak();
        v54 = (const dvar_t *)v167[1];
      }
      Dvar_CheckFrontendServerThread(v54);
      if ( !*(_BYTE *)(v167[1] + 40i64) || (v57 = 8, !r_decalVolumesShowMaterialName->current.enabled) )
        v57 = 0;
      LODWORD(v167[1]) = v57 | v56;
      if ( v57 | v56 )
      {
        v58 = gfxContext->source;
        v59 = gfxContext->source;
        v60 = (float)gfxContext->source->renderTargetWidth;
        v61 = (float)gfxContext->source->renderTargetHeight;
        v62 = DCONST_DVARFLT_r_decalVolumesHighlightAlpha;
        *(_QWORD *)out.v = DCONST_DVARFLT_r_decalVolumesHighlightAlpha;
        if ( !DCONST_DVARFLT_r_decalVolumesHighlightAlpha )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_decalVolumesHighlightAlpha") )
            __debugbreak();
          v62 = *(const dvar_t **)out.v;
        }
        Dvar_CheckFrontendServerThread(v62);
        v63 = *(float *)(*(_QWORD *)out.v + 40i64);
        v59->input.consts[149] = v172;
        ++v59->constVersions[149];
        v58->input.consts[151] = v173;
        ++v58->constVersions[151];
        v58->input.consts[150].v[1] = *(float *)&v167[1];
        v58->input.consts[150].v[3] = v63;
        v58->input.consts[150].v[0] = 8.0;
        v58->input.consts[150].v[2] = 0.0;
        ++v58->constVersions[150];
        *(_QWORD *)out.v = rgp.blackImage;
        v64 = &v58->input;
        if ( v58 == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
        {
          __debugbreak();
          v58 = gfxContext->source;
        }
        v64->codeImages[4] = *(const GfxImage **)out.v;
        if ( !v58 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
          __debugbreak();
        v65 = &v58->input;
        if ( !v65 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
          __debugbreak();
        v65->codeImages[0] = floatZ;
        v66 = gfxContext->source;
        if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
          __debugbreak();
        v67 = &v66->input;
        if ( !v67 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
          __debugbreak();
        v67->codeImages[1] = entityIDVelocity;
        v68 = gfxContext->source;
        if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
          __debugbreak();
        v69 = &v68->input;
        if ( !v69 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
          __debugbreak();
        v69->codeImages[2] = tangentFrame;
        v70 = gfxContext->source;
        if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
          __debugbreak();
        v71 = &v70->input;
        if ( !v71 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
          __debugbreak();
        v71->codeImages[79] = packedStencil;
        v72 = &gfxContext->source->input;
        if ( gfxContext->source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1494, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
          __debugbreak();
        v73 = *gfxContext;
        v72->codeBuffers[38] = (const GfxWrappedBuffer *)v169.source;
        v169 = v73;
        RB_DrawStretchPic(&v169, rgp.decalVolumeDebugSolidMaterial, 0.0, 0.0, v60, v61, 0.0, 0.0, 1.0, 1.0, 0xFFFFFFFF, GFX_PRIM_STATS_CODE);
        v169 = *gfxContext;
        RB_EndTessSurfaceInternal(&v169, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp(9431)");
        LODWORD(v43) = (_DWORD)v168;
      }
      if ( v41 )
      {
        v74 = *(_QWORD *)vec.v;
        v75 = 0;
        if ( v41 >= 4 )
        {
          v76 = viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[0];
          v77 = viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[1];
          v78 = viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[2];
          v79 = (float *)v175;
          v80 = ((v41 - 4) >> 2) + 1;
          v81 = *(_QWORD *)vec.v + 384i64;
          v82 = v80;
          v75 = 4 * v80;
          do
          {
            v83 = *(float *)(v81 - 296);
            v84 = *(float *)(v81 - 340);
            v85 = *(_DWORD *)(v81 - 232);
            *(v79 - 5) = *(float *)(v81 - 344) - v76;
            v86 = *(float *)(v81 - 336);
            *(v79 - 4) = v84 - v77;
            v87 = v83 * *(float *)(v81 - 332);
            v88 = v86 - v78;
            v89 = v83 * *(float *)(v81 - 328);
            *(v79 - 3) = v88;
            *(v79 - 2) = v87;
            v90 = v83 * *(float *)(v81 - 324);
            *(v79 - 1) = v89;
            *v79 = v90;
            v91 = *(float *)(v81 - 292);
            v79[1] = v91 * *(float *)(v81 - 320);
            v92 = v91 * *(float *)(v81 - 316);
            v93 = v91 * *(float *)(v81 - 312);
            v94 = *(float *)(v81 - 288);
            v95 = *(float *)(v81 - 172);
            v79[2] = v92;
            v96 = v94 * *(float *)(v81 - 304);
            v79[3] = v93;
            v79[4] = v94 * *(float *)(v81 - 308);
            v97 = v94 * *(float *)(v81 - 300);
            v98 = *(float *)(v81 - 128);
            v79[5] = v96;
            v79[6] = v97;
            v99 = *(float *)(v81 - 176);
            *((_DWORD *)v79 + 7) = v85;
            v79[8] = *(float *)(v81 - 228);
            v100 = *(_DWORD *)(v81 - 64);
            v79[9] = v99 - v76;
            v101 = *(float *)(v81 - 168);
            v79[10] = v95 - v77;
            v102 = v98 * *(float *)(v81 - 164);
            v103 = v101 - v78;
            v104 = v98 * *(float *)(v81 - 160);
            v79[11] = v103;
            v105 = *(float *)(v81 - 124);
            v79[12] = v102;
            v106 = v98 * *(float *)(v81 - 156);
            v107 = *(float *)(v81 - 120);
            v79[13] = v104;
            v108 = v105 * *(float *)(v81 - 148);
            v79[14] = v106;
            v79[15] = v105 * *(float *)(v81 - 152);
            v109 = v105 * *(float *)(v81 - 144);
            v110 = *(float *)(v81 - 4);
            v79[16] = v108;
            v111 = v107 * *(float *)(v81 - 136);
            v79[17] = v109;
            v79[18] = v107 * *(float *)(v81 - 140);
            v112 = v107 * *(float *)(v81 - 132);
            v113 = *(float *)(v81 + 40);
            v79[19] = v111;
            v79[20] = v112;
            v114 = *(float *)(v81 - 8);
            *((_DWORD *)v79 + 21) = v100;
            v79[22] = *(float *)(v81 - 60);
            v79[23] = v114 - v76;
            v115 = *(float *)v81;
            v79[24] = v110 - v77;
            v116 = v113 * *(float *)(v81 + 4);
            v117 = v115 - v78;
            v118 = v113 * *(float *)(v81 + 8);
            v79[25] = v117;
            v79[26] = v116;
            v119 = *(_DWORD *)(v81 + 104);
            v120 = v113 * *(float *)(v81 + 12);
            v121 = *(float *)(v81 + 44);
            v122 = *(float *)(v81 + 48);
            v79[27] = v118;
            v123 = v121 * *(float *)(v81 + 20);
            v79[28] = v120;
            v79 += 56;
            v124 = v121 * *(float *)(v81 + 16);
            v81 += 672i64;
            *(v79 - 27) = v124;
            v125 = v121 * *(float *)(v81 - 648);
            v126 = *(float *)(v81 - 508);
            *(v79 - 26) = v123;
            v127 = v122 * *(float *)(v81 - 640);
            *(v79 - 25) = v125;
            *(v79 - 24) = v122 * *(float *)(v81 - 644);
            v128 = v122 * *(float *)(v81 - 636);
            v129 = *(float *)(v81 - 464);
            *(v79 - 23) = v127;
            *(v79 - 22) = v128;
            *((_DWORD *)v79 - 21) = v119;
            *(v79 - 20) = *(float *)(v81 - 564);
            v130 = *(_DWORD *)(v81 - 400);
            *(v79 - 19) = *(float *)(v81 - 512) - v76;
            v131 = *(float *)(v81 - 504);
            *(v79 - 18) = v126 - v77;
            v132 = v129 * *(float *)(v81 - 500);
            v133 = v131 - v78;
            v134 = v129 * *(float *)(v81 - 496);
            *(v79 - 17) = v133;
            v135 = *(float *)(v81 - 460);
            *(v79 - 16) = v132;
            v136 = v129 * *(float *)(v81 - 492);
            v137 = *(float *)(v81 - 456);
            *(v79 - 15) = v134;
            v138 = v135 * *(float *)(v81 - 484);
            *(v79 - 14) = v136;
            *(v79 - 13) = v135 * *(float *)(v81 - 488);
            v139 = v135 * *(float *)(v81 - 480);
            *(v79 - 12) = v138;
            v140 = v137 * *(float *)(v81 - 472);
            *(v79 - 11) = v139;
            *(v79 - 10) = v137 * *(float *)(v81 - 476);
            v141 = v137 * *(float *)(v81 - 468);
            *(v79 - 9) = v140;
            *(v79 - 8) = v141;
            *((_DWORD *)v79 - 7) = v130;
            *(v79 - 6) = *(float *)(v81 - 396);
            --v82;
          }
          while ( v82 );
        }
        if ( v75 < v41 )
        {
          v142 = viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[0];
          v143 = viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[1];
          v144 = viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[2];
          v145 = (float *)&v175[7 * v75];
          v146 = 168i64 * v75 + v74 + 48;
          v147 = v41 - v75;
          do
          {
            v148 = *(_DWORD *)(v146 + 104);
            v145 += 14;
            v149 = *(float *)(v146 + 40);
            v150 = *(float *)(v146 - 8);
            v151 = *(float *)(v146 - 4);
            v146 += 168i64;
            *(v145 - 19) = v150 - v142;
            v152 = *(float *)(v146 - 168);
            *(v145 - 18) = v151 - v143;
            v153 = v149 * *(float *)(v146 - 164);
            v154 = v152 - v144;
            v155 = v149 * *(float *)(v146 - 160);
            *(v145 - 17) = v154;
            v156 = *(float *)(v146 - 124);
            *(v145 - 16) = v153;
            v157 = v149 * *(float *)(v146 - 156);
            v158 = *(float *)(v146 - 120);
            *(v145 - 14) = v157;
            v159 = v156 * *(float *)(v146 - 152);
            *(v145 - 15) = v155;
            v160 = v156 * *(float *)(v146 - 148);
            *(v145 - 13) = v159;
            *(v145 - 11) = v156 * *(float *)(v146 - 144);
            v161 = v158 * *(float *)(v146 - 140);
            *(v145 - 12) = v160;
            v162 = v158 * *(float *)(v146 - 136);
            *(v145 - 10) = v161;
            *(v145 - 8) = v158 * *(float *)(v146 - 132);
            *(v145 - 9) = v162;
            *((_DWORD *)v145 - 7) = v148;
            *(v145 - 6) = *(float *)(v146 - 60);
            --v147;
          }
          while ( v147 );
        }
        R_UpdateGfxWrappedBuffer(&s_decalVolumes.decalVolumeMaterialInfoBuffer[data->decalVolumeIndex], dataa, 56 * v41);
        R_Set3D(gfxContext->source);
        v163 = gfxContext->state;
        if ( v163->depthRangeType )
          R_ChangeDepthRange(v163, GFX_DEPTH_RANGE_SCENE);
        do
        {
          if ( (int)v43 == -1i64 || (_DWORD)v43 == v11 )
          {
            v164 = &s_decalVolumes.decalVolumeMaterialInfoBuffer[data->decalVolumeIndex];
            v169 = *gfxContext;
            RB_DecalVolumes_DrawOBB(&v169, viewInfo, data, v164, v11, v11);
          }
          ++v11;
        }
        while ( v11 < v41 );
      }
    }
  }
  v165 = data->decalVolumeIndex;
  v169 = *gfxContext;
  R_DecalVolumesGrid_DebugDraw3D(&v169, viewInfo, data, v165);
}

/*
==============
RB_DecalVolumes_ShowAtlas
==============
*/
void RB_DecalVolumes_ShowAtlas(GfxCmdBufContext *gfxContext, int decalVolumesAtlasDebug)
{
  __int64 v2; 
  GfxImage *primaryChannel; 
  GfxImage *secondaryChannel; 
  GfxImage *tertiaryChannel; 
  GfxImage *quaternaryChannel; 
  GfxCmdBufSourceState *source; 
  int integer; 
  const GfxImage *v10; 
  int v11; 
  int numElements; 
  int levelCount; 
  float renderTargetHeight; 
  GfxCmdBufInput *p_input; 
  GfxCmdBufContext v16; 
  __int64 v17; 
  GfxCmdBufContext v18; 
  GfxImage *v19; 
  GfxImage *v20; 

  v2 = decalVolumesAtlasDebug;
  if ( decalVolumesAtlasDebug <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 9541, ASSERT_TYPE_ASSERT, "(decalVolumesAtlasDebug > 0)", (const char *)&queryFormat, "decalVolumesAtlasDebug > 0") )
    __debugbreak();
  primaryChannel = s_decalVolumes.primaryChannel;
  secondaryChannel = s_decalVolumes.secondaryChannel;
  tertiaryChannel = s_decalVolumes.tertiaryChannel;
  quaternaryChannel = s_decalVolumes.quaternaryChannel;
  if ( !s_decalVolumes.primaryChannel )
    primaryChannel = rgp.blackImage;
  source = gfxContext->source;
  v18.source = (GfxCmdBufSourceState *)primaryChannel;
  if ( !s_decalVolumes.secondaryChannel )
    secondaryChannel = rgp.blackImage;
  v18.state = (GfxCmdBufState *)secondaryChannel;
  if ( !s_decalVolumes.tertiaryChannel )
    tertiaryChannel = rgp.blackImage;
  v19 = tertiaryChannel;
  if ( !s_decalVolumes.quaternaryChannel )
    quaternaryChannel = rgp.blackImage;
  integer = r_decalVolumesShowAtlasSlice->current.integer;
  v20 = quaternaryChannel;
  v10 = (const GfxImage *)*(&v17 + v2);
  v11 = r_decalVolumesShowAtlasMip->current.integer;
  numElements = v10->numElements;
  levelCount = v10->levelCount;
  renderTargetHeight = (float)source->renderTargetHeight;
  *(_QWORD *)source->input.consts[5].v = 0i64;
  *(_QWORD *)&source->input.consts[5].xyz.z = 0i64;
  ++source->constVersions[5];
  *(_QWORD *)source->input.consts[150].v = 1077936128i64;
  *(_QWORD *)&source->input.consts[150].xyz.z = 0i64;
  ++source->constVersions[150];
  source->input.consts[149].v[2] = 1.0;
  if ( numElements < integer )
    integer = numElements;
  source->input.consts[149].v[0] = (float)integer;
  if ( levelCount < v11 )
    v11 = levelCount;
  source->input.consts[149].v[1] = (float)v11;
  source->input.consts[149].v[3] = (float)(int)v2;
  ++source->constVersions[149];
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v16 = *gfxContext;
  LODWORD(v17) = 9;
  v18 = v16;
  p_input->codeImages[4] = v10;
  RB_DrawStretchPic(&v18, rgp.frustumGridDebugMaterial, 8.0, 48.0, renderTargetHeight * 0.5, renderTargetHeight * 0.5, 0.0, 0.0, 1.0, 1.0, 0xFFFFFFFF, (GfxPrimStatsTarget)v17);
  v18 = *gfxContext;
  RB_EndTessSurfaceInternal(&v18, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp(9576)");
}

/*
==============
RB_DecalVolumes_UpdateAtlas
==============
*/
void RB_DecalVolumes_UpdateAtlas(GfxCmdBufContext *gfxContext, const GfxBackEndData *data)
{
  const GfxBackEndData *v3; 
  GfxCmdBufState *v5; 
  ComputeCmdBufState *GfxComputeCmdBufState; 
  unsigned int v7; 
  GfxWrappedRWBuffer *channelBufferAliases; 
  GfxWrappedRWBuffer *v9; 
  __int64 v10; 
  GfxImage **v11; 
  __int64 v12; 
  unsigned int v13; 
  char read; 
  ImageAtlasProxy *v16; 
  char write; 
  unsigned int imageIndex; 
  unsigned int v19; 
  GfxImage *GfxImageAtIndex; 
  unsigned __int16 v21; 
  const char *name; 
  unsigned __int64 v23; 
  GfxTexture *v24; 
  char v25; 
  unsigned __int16 v26; 
  unsigned int v27; 
  unsigned __int16 v28; 
  char v29; 
  unsigned __int8 v30; 
  __int64 v31; 
  const GfxTexture *Resident; 
  GfxPixelFormat AtlasFormat; 
  GfxPixelFormat v34; 
  GfxTexture *v35; 
  unsigned int srcImageElementCount; 
  unsigned int srcImageMipCount; 
  unsigned int v38; 
  unsigned int v39; 
  GfxPixelFormat v40; 
  char v41; 
  int *v42; 
  GfxTextureId *atlasAlias; 
  __int64 v44; 
  const GfxTexture *v45; 
  GfxCmdBufState **v46; 
  __int64 flag; 
  __int64 dstSliceIndex; 
  __int64 imageFormat; 
  __int64 dstX; 
  __int64 dstY; 
  __int64 dstW; 
  __int64 dstH; 
  __int64 srcImageWidth; 
  unsigned int srcImageHeight; 
  unsigned int v56; 
  unsigned int outHeight; 
  unsigned int outWidth; 
  unsigned int v59; 
  int v60[2]; 
  GfxBackEndData *v61; 
  __m256i v62; 
  unsigned int outElementCount; 
  unsigned int outLevelCount; 
  GfxTexture *textures; 
  GfxTexture *v66; 
  ComputeCmdBufState *state; 
  GfxCmdBufContext *v68; 
  unsigned __int64 v69; 
  unsigned __int64 v70; 
  __int64 v71; 
  SpinMutex *p_backendJobsMutex; 
  SpinMutex *p_backendJobsCompletedMutex; 
  SpinMutex *v74; 
  SpinMutex *v75; 
  SpinMutex *v76; 
  int dataa[8]; 
  GfxImage *dstAtlas[4]; 

  v71 = -2i64;
  v3 = data;
  v61 = (GfxBackEndData *)data;
  v68 = gfxContext;
  v70 = (unsigned __int64)&s_decalVolumes.imageAtlas.atlasUpdateImageTexturesCheck & 3;
  if ( ((unsigned __int8)&s_decalVolumes.imageAtlas.atlasUpdateImageTexturesCheck & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_decalVolumes.imageAtlas.atlasUpdateImageTexturesCheck) )
    __debugbreak();
  if ( _InterlockedCompareExchange(&s_decalVolumes.imageAtlas.atlasUpdateImageTexturesCheck, 1, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1277, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedCompareExchange( &s_decalVolumes.imageAtlas.atlasUpdateImageTexturesCheck, 1, 0 ) == 0 ) )", "( s_decalVolumes.imageAtlas.atlasUpdateImageTexturesCheckThread ) = %s", s_decalVolumes.imageAtlas.atlasUpdateImageTexturesCheckThread) )
    __debugbreak();
  s_decalVolumes.imageAtlas.atlasUpdateImageTexturesCheckThread = Sys_GetCurrentThreadContextName();
  v69 = (unsigned __int64)&s_decalVolumes.imageAtlas.releaseTextureCheck & 3;
  if ( ((unsigned __int8)&s_decalVolumes.imageAtlas.releaseTextureCheck & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_decalVolumes.imageAtlas.releaseTextureCheck) )
    __debugbreak();
  if ( _InterlockedCompareExchange(&s_decalVolumes.imageAtlas.releaseTextureCheck, 1, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1295, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedCompareExchange( &s_decalVolumes.imageAtlas.releaseTextureCheck, 1, 0 ) == 0 ) )", "( s_decalVolumes.imageAtlas.releaseTextureCheckThread ) = %s", s_decalVolumes.imageAtlas.releaseTextureCheckThread) )
    __debugbreak();
  s_decalVolumes.imageAtlas.releaseTextureCheckThread = Sys_GetCurrentThreadContextName();
  v5 = gfxContext->state;
  R_InitLocalCmdBufState(v5, &gfxContext->source->input);
  R_ProfBeginNamedEvent(v5, "D+ Atlas Update");
  R_GPU_BeginTimer(GPU_TIMER_DECAL_VOLUMES_ATLAS_UPDATE);
  R_DecalVolume_ReleaseAlias(&s_decalVolumes.aliases[v3->decalVolumeIndex]);
  GfxComputeCmdBufState = R_GetGfxComputeCmdBufState(v5);
  state = GfxComputeCmdBufState;
  dstAtlas[0] = s_decalVolumes.primaryChannel;
  dstAtlas[1] = s_decalVolumes.secondaryChannel;
  dstAtlas[2] = s_decalVolumes.tertiaryChannel;
  dstAtlas[3] = s_decalVolumes.quaternaryChannel;
  v7 = 0;
  if ( !s_decalVolumes.channelsCleared )
  {
    s_decalVolumes.channelsCleared = 1;
    channelBufferAliases = s_decalVolumes.channelBufferAliases;
    v9 = s_decalVolumes.channelBufferAliases;
    v10 = 4i64;
    do
    {
      R_HW_AddResourceTransition(GfxComputeCmdBufState, v9++, 0xFFFFFFFF, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      --v10;
    }
    while ( v10 );
    R_FlushResourceTransitions(GfxComputeCmdBufState);
    v11 = dstAtlas;
    v12 = 4i64;
    do
    {
      R_DecalVolume_ClearBuffer(GfxComputeCmdBufState, channelBufferAliases, (*v11)->totalSize, 0);
      R_HW_AddResourceTransition(GfxComputeCmdBufState, channelBufferAliases++, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      ++v11;
      --v12;
    }
    while ( v12 );
    R_FlushResourceTransitions(GfxComputeCmdBufState);
    v3 = v61;
  }
  Sys_LockRead(&s_decalVolumes.imageAtlas.atlasLock);
  v60[0] = 0;
  v59 = 0;
  v13 = 0;
  v56 = 0;
  while ( v13 < 0x200000 )
  {
    p_backendJobsMutex = &s_decalVolumes.imageAtlas.backendJobsMutex;
    while ( _interlockedbittestandset(&s_decalVolumes.imageAtlas.backendJobsMutex.flag._My_flag, 0) )
      _mm_pause();
    read = s_decalVolumes.imageAtlas.backendJobs.read;
    if ( s_decalVolumes.imageAtlas.backendJobs.read == s_decalVolumes.imageAtlas.backendJobs.write )
    {
      s_decalVolumes.imageAtlas.backendJobsMutex.flag._My_flag = 0;
      break;
    }
    ++s_decalVolumes.imageAtlas.backendJobs.read;
    v62 = (__m256i)s_decalVolumes.imageAtlas.backendJobs.pool[read & 0x3F];
    s_decalVolumes.imageAtlas.backendJobsMutex.flag._My_flag = 0;
    __asm { vpextrw rbx, xmm0, 4 }
    if ( (unsigned __int16)_RBX >= 0xC00u )
    {
      LODWORD(dstSliceIndex) = 3072;
      LODWORD(flag) = (unsigned __int16)_RBX;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1358, ASSERT_TYPE_ASSERT, "(unsigned)( proxyIndex ) < (unsigned)( ( sizeof( *array_counter( s_decalVolumes.imageAtlas.proxyPool_ ) ) + 0 ) )", "proxyIndex doesn't index ARRAY_COUNT( s_decalVolumes.imageAtlas.proxyPool_ )\n\t%i not in [0, %i)", flag, dstSliceIndex) )
        __debugbreak();
    }
    v16 = &s_decalVolumes.imageAtlas.proxyPool_[(unsigned __int16)_RBX];
    if ( s_decalVolumes.imageAtlas.proxyPool_[(unsigned __int16)_RBX].generation != v62.m256i_i8[22] )
    {
      v62.m256i_i8[24] = 0;
      p_backendJobsCompletedMutex = &s_decalVolumes.imageAtlas.backendJobsCompletedMutex;
      while ( _interlockedbittestandset(&s_decalVolumes.imageAtlas.backendJobsCompletedMutex.flag._My_flag, 0) )
        _mm_pause();
      write = s_decalVolumes.imageAtlas.backendJobsCompleted.write;
      if ( s_decalVolumes.imageAtlas.backendJobsCompleted.write - s_decalVolumes.imageAtlas.backendJobsCompleted.read == 128 )
      {
        s_decalVolumes.imageAtlas.backendJobsCompletedMutex.flag._My_flag = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 4006, ASSERT_TYPE_ASSERT, "(ImageAtlas_PushCompletedBackendJob( bj ))", (const char *)&queryFormat, "ImageAtlas_PushCompletedBackendJob( bj )") )
          __debugbreak();
      }
      else
      {
        ++s_decalVolumes.imageAtlas.backendJobsCompleted.write;
        *(__m256i *)&s_decalVolumes.decalVolumeMarksDebug[-1084].origin.v[8 * (write & 0x7F)] = v62;
        s_decalVolumes.imageAtlas.backendJobsCompletedMutex.flag._My_flag = 0;
      }
      goto LABEL_62;
    }
    imageIndex = s_decalVolumes.imageAtlas.proxyPool_[(unsigned __int16)_RBX].imageIndex;
    if ( imageIndex - 1 > 0x13FFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1396, ASSERT_TYPE_ASSERT, "(imageIndex > 0 && imageIndex <= ( IMAGE_POOL_SIZE ))", (const char *)&queryFormat, "imageIndex > 0 && imageIndex <= IMAGE_ATLAS_IMAGE_POOL_SIZE") )
      __debugbreak();
    v19 = ImageAtlas_ToDbIndex(imageIndex);
    GfxImageAtIndex = DB_GetGfxImageAtIndex(v19);
    if ( !GfxImageAtIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 4011, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
      __debugbreak();
    v21 = v62.m256i_u16[5];
    if ( v62.m256i_i16[5] >= 0x1000u )
    {
      LODWORD(dstSliceIndex) = 4096;
      LODWORD(flag) = v62.m256i_u16[5];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1372, ASSERT_TYPE_ASSERT, "(unsigned)( entryIndex ) < (unsigned)( ( sizeof( *array_counter( s_decalVolumes.imageAtlas.entryPool_ ) ) + 0 ) )", "entryIndex doesn't index ARRAY_COUNT( s_decalVolumes.imageAtlas.entryPool_ )\n\t%i not in [0, %i)", flag, dstSliceIndex) )
        __debugbreak();
    }
    if ( v16->imageNameHash != s_decalVolumes.imageAtlas.entryPool_[v21].imageNameHash && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 4015, ASSERT_TYPE_ASSERT, "( ( proxy->imageNameHash == entry->imageNameHash ) )", "( image->name ) = %s", GfxImageAtIndex->name) )
      __debugbreak();
    name = GfxImageAtIndex->name;
    v23 = -1i64;
    do
      ++v23;
    while ( name[v23] );
    if ( v16->imageNameHash != j_CoD_XXH64(name, v23, 0i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 4016, ASSERT_TYPE_ASSERT, "( ( proxy->imageNameHash == ImageAtlas_GetImageNameHash( image->name ) ) )", "( image->name ) = %s", GfxImageAtIndex->name) )
      __debugbreak();
    v24 = (GfxTexture *)R_Texture_Get(v3, GfxImageAtIndex->textureId);
    R_Texture_GetDims(v24, &outWidth, &outHeight, &outLevelCount, &outElementCount);
    if ( (GfxImageAtIndex->flags & 0x40) != 0 && RB_Texture_HasStreamedFallbackAssigned(v3, GfxImageAtIndex->textureId) )
    {
      v62.m256i_i8[24] = 0;
      v74 = &s_decalVolumes.imageAtlas.backendJobsCompletedMutex;
      while ( _interlockedbittestandset(&s_decalVolumes.imageAtlas.backendJobsCompletedMutex.flag._My_flag, 0) )
        _mm_pause();
      v25 = s_decalVolumes.imageAtlas.backendJobsCompleted.write;
      if ( s_decalVolumes.imageAtlas.backendJobsCompleted.write - s_decalVolumes.imageAtlas.backendJobsCompleted.read != 128 )
      {
        ++s_decalVolumes.imageAtlas.backendJobsCompleted.write;
        *(__m256i *)&s_decalVolumes.decalVolumeMarksDebug[-1084].origin.v[8 * (v25 & 0x7F)] = v62;
        s_decalVolumes.imageAtlas.backendJobsCompletedMutex.flag._My_flag = 0;
        v13 = v56;
        goto LABEL_62;
      }
      s_decalVolumes.imageAtlas.backendJobsCompletedMutex.flag._My_flag = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 4035, ASSERT_TYPE_ASSERT, "(ImageAtlas_PushCompletedBackendJob( bj ))", (const char *)&queryFormat, "ImageAtlas_PushCompletedBackendJob( bj )") )
        __debugbreak();
    }
    else
    {
      v26 = v62.m256i_u16[8];
      v27 = v62.m256i_u16[8];
      v28 = v62.m256i_u16[9];
      if ( outWidth >= v62.m256i_u16[8] && outHeight >= v62.m256i_u16[9] || ImageAtlas_IsConstantColorImage(GfxImageAtIndex) )
      {
        v30 = v62.m256i_u8[20];
        v31 = v62.m256i_u8[20];
        if ( !*((_BYTE *)v60 + v62.m256i_u8[20]) )
        {
          *((_BYTE *)v60 + v62.m256i_u8[20]) = 1;
          Resident = R_Texture_GetResident(s_decalVolumes.atlasAlias[v31]);
          R_HW_AddResourceTransition(GfxComputeCmdBufState, Resident, 0xFFFFFFFF, D3D12_RESOURCE_STATE_COPY_SOURCE|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
          R_FlushResourceTransitions(GfxComputeCmdBufState);
        }
        if ( (outWidth < v27 || outHeight < v28) && !ImageAtlas_IsConstantColorImage(GfxImageAtIndex) )
        {
          LODWORD(srcImageWidth) = v28;
          LODWORD(dstH) = v27;
          LODWORD(dstW) = outHeight;
          LODWORD(dstY) = outWidth;
          LODWORD(dstX) = GfxImageAtIndex->height;
          LODWORD(imageFormat) = GfxImageAtIndex->width;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 4061, ASSERT_TYPE_ASSERT, "((imageWidth >= bj.w && imageHeight >= bj.h) || ImageAtlas_IsConstantColorImage( image ))", "%s\n\timage %s w=%u, h=%u, tw=%u th=%u, bw=%u bh=%u\n", "(imageWidth >= bj.w && imageHeight >= bj.h) || ImageAtlas_IsConstantColorImage( image )", GfxImageAtIndex->name, imageFormat, dstX, dstY, dstW, dstH, srcImageWidth) )
            __debugbreak();
        }
        if ( !v24->basemap )
        {
          LODWORD(srcImageWidth) = v28;
          LODWORD(dstH) = v26;
          LODWORD(dstW) = outHeight;
          LODWORD(dstY) = outWidth;
          LODWORD(dstX) = GfxImageAtIndex->height;
          LODWORD(imageFormat) = GfxImageAtIndex->width;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 4063, ASSERT_TYPE_ASSERT, "(imageTexture->map)", "%s\n\timage %s w=%u, h=%u, tw=%u th=%u, bw=%u bh=%u\n", "imageTexture->map", GfxImageAtIndex->name, imageFormat, dstX, dstY, dstW, dstH, srcImageWidth) )
            __debugbreak();
        }
        if ( ImageAtlas_IsConstantColorImage(GfxImageAtIndex) )
        {
          AtlasFormat = R_DecalVolume_GetAtlasFormat(v30);
          v34 = AtlasFormat;
          if ( (unsigned int)(AtlasFormat - 44) > 1 )
          {
            LODWORD(flag) = AtlasFormat;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 4073, ASSERT_TYPE_ASSERT, "( ( format == GFX_PF_BC7_SRGB || format == GFX_PF_BC7 ) )", "( format ) = %u", flag) )
              __debugbreak();
          }
          R_SetComputeShader(GfxComputeCmdBufState, rgp.decalVolumeBC7CompressConstantColor);
          dataa[0] = 32;
          dataa[1] = 32;
          dataa[4] = v34 == GFX_PF_BC7_SRGB;
          R_UploadAndSetComputeConstants(GfxComputeCmdBufState, 0, dataa, 0x20u, NULL);
          v35 = (GfxTexture *)R_Texture_GetResident(s_decalVolumes.imageAtlas.bc7Temp->textureId);
          R_HW_AddResourceTransition(GfxComputeCmdBufState, v35, 0xFFFFFFFF, D3D12_RESOURCE_STATE_COPY_SOURCE|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
          R_FlushResourceTransitions(GfxComputeCmdBufState);
          textures = v24;
          R_SetComputeTextures(GfxComputeCmdBufState, 0, 1, (const GfxTexture *const *)&textures);
          v66 = v35;
          R_SetComputeRWTextures(GfxComputeCmdBufState, 4, 1, (const GfxTexture *const *)&v66);
          R_Dispatch(GfxComputeCmdBufState, 4u, 4u, 1u);
          R_HW_AddResourceTransition(GfxComputeCmdBufState, v35, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_COPY_SOURCE|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
          R_FlushResourceTransitions(GfxComputeCmdBufState);
          GfxImageAtIndex = s_decalVolumes.imageAtlas.bc7Temp;
        }
        srcImageElementCount = outElementCount;
        srcImageMipCount = outLevelCount;
        v38 = outHeight;
        v39 = outWidth;
        v40 = R_DecalVolume_GetAtlasFormat(v30);
        srcImageHeight = v38;
        v3 = v61;
        GfxComputeCmdBufState = state;
        v13 = RB_ImageAtlas_CopyImageIntoAtlas(state, v61, v61->decalVolumeIndex, GfxImageAtIndex, dstAtlas[v30], v30, v62.m256i_u8[21], v40, v62.m256i_u16[6], v62.m256i_u16[7], v62.m256i_u16[8], v62.m256i_u16[9], v39, srcImageHeight, srcImageMipCount, srcImageElementCount) + v56;
        v56 = v13;
        v62.m256i_i8[24] = 1;
        ++v59;
        v76 = &s_decalVolumes.imageAtlas.backendJobsCompletedMutex;
        while ( _interlockedbittestandset(&s_decalVolumes.imageAtlas.backendJobsCompletedMutex.flag._My_flag, 0) )
          _mm_pause();
        v41 = s_decalVolumes.imageAtlas.backendJobsCompleted.write;
        if ( s_decalVolumes.imageAtlas.backendJobsCompleted.write - s_decalVolumes.imageAtlas.backendJobsCompleted.read == 128 )
        {
          s_decalVolumes.imageAtlas.backendJobsCompletedMutex.flag._My_flag = 0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 4085, ASSERT_TYPE_ASSERT, "(ImageAtlas_PushCompletedBackendJob( bj ))", (const char *)&queryFormat, "ImageAtlas_PushCompletedBackendJob( bj )") )
            __debugbreak();
          v7 = v59;
        }
        else
        {
          ++s_decalVolumes.imageAtlas.backendJobsCompleted.write;
          *(__m256i *)&s_decalVolumes.decalVolumeMarksDebug[-1084].origin.v[8 * (v41 & 0x7F)] = v62;
          s_decalVolumes.imageAtlas.backendJobsCompletedMutex.flag._My_flag = 0;
          v7 = v59;
        }
        goto LABEL_62;
      }
      v62.m256i_i8[24] = 0;
      v75 = &s_decalVolumes.imageAtlas.backendJobsCompletedMutex;
      while ( _interlockedbittestandset(&s_decalVolumes.imageAtlas.backendJobsCompletedMutex.flag._My_flag, 0) )
        _mm_pause();
      v29 = s_decalVolumes.imageAtlas.backendJobsCompleted.write;
      if ( s_decalVolumes.imageAtlas.backendJobsCompleted.write - s_decalVolumes.imageAtlas.backendJobsCompleted.read != 128 )
      {
        ++s_decalVolumes.imageAtlas.backendJobsCompleted.write;
        *(__m256i *)&s_decalVolumes.decalVolumeMarksDebug[-1084].origin.v[8 * (v29 & 0x7F)] = v62;
        s_decalVolumes.imageAtlas.backendJobsCompletedMutex.flag._My_flag = 0;
        v3 = v61;
        v13 = v56;
        goto LABEL_62;
      }
      s_decalVolumes.imageAtlas.backendJobsCompletedMutex.flag._My_flag = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 4046, ASSERT_TYPE_ASSERT, "(ImageAtlas_PushCompletedBackendJob( bj ))", (const char *)&queryFormat, "ImageAtlas_PushCompletedBackendJob( bj )") )
        __debugbreak();
      v3 = v61;
    }
    v13 = v56;
LABEL_62:
    if ( v7 >= 8 )
      break;
  }
  if ( v13 )
  {
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 4090, ASSERT_TYPE_SANITY, "( nCopied > 0 )", (const char *)&queryFormat, "nCopied > 0") )
      __debugbreak();
    v42 = v60;
    atlasAlias = s_decalVolumes.atlasAlias;
    v44 = 4i64;
    do
    {
      if ( *(_BYTE *)v42 )
      {
        v45 = R_Texture_GetResident(*atlasAlias);
        R_HW_AddResourceTransition(GfxComputeCmdBufState, v45, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_COPY_SOURCE|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      }
      v42 = (int *)((char *)v42 + 1);
      ++atlasAlias;
      --v44;
    }
    while ( v44 );
    R_FlushResourceTransitions(GfxComputeCmdBufState);
  }
  s_decalVolumes.imageAtlas.stats.backendCopyJobs = v7;
  s_decalVolumes.imageAtlas.stats.backendCopySize = v13;
  Sys_UnlockRead(&s_decalVolumes.imageAtlas.atlasLock);
  R_GPU_EndTimer();
  v46 = (GfxCmdBufState **)v68;
  R_ProfEndNamedEvent(v68->state);
  R_ShutdownLocalCmdBufState(v46[1], (GfxCmdBufInput *)(&(*v46)->resourceTransitions[12].UAV + 1));
  s_decalVolumes.imageAtlas.releaseTextureCheckThread = "none";
  if ( v69 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_decalVolumes.imageAtlas.releaseTextureCheck) )
    __debugbreak();
  if ( _InterlockedCompareExchange(&s_decalVolumes.imageAtlas.releaseTextureCheck, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1307, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &s_decalVolumes.imageAtlas.releaseTextureCheck, 0, 1 ) == 1)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_decalVolumes.imageAtlas.releaseTextureCheck, 0, 1 ) == 1") )
    __debugbreak();
  s_decalVolumes.imageAtlas.atlasUpdateImageTexturesCheckThread = "none";
  if ( v70 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_decalVolumes.imageAtlas.atlasUpdateImageTexturesCheck) )
    __debugbreak();
  if ( _InterlockedCompareExchange(&s_decalVolumes.imageAtlas.atlasUpdateImageTexturesCheck, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1289, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &s_decalVolumes.imageAtlas.atlasUpdateImageTexturesCheck, 0, 1 ) == 1)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_decalVolumes.imageAtlas.atlasUpdateImageTexturesCheck, 0, 1 ) == 1") )
    __debugbreak();
}

/*
==============
RB_FillCluster
==============
*/
void RB_FillCluster(ComputeCmdBufState *state, const GfxViewInfo *viewInfo, const GfxBackEndData *data, unsigned int decalCount, DecalVolumeClustering *clustering)
{
  __int64 v10; 
  unsigned int v11; 
  DecalVolumeClusteringPassResources *v12; 
  GfxWrappedRWBuffer *p_decalIndicesCounts; 
  unsigned int numClusteringPasses; 
  unsigned int i; 
  __int64 v16; 
  DecalVolumeClusteringPassResources *v17; 
  unsigned int v18; 
  unsigned int v19; 
  DecalVolumeClusteringPass *v20; 
  unsigned int v21; 
  unsigned int maxCellIndirectionsPerBucket; 
  __int64 v23; 
  __int64 v24; 
  GfxShaderBufferRWView *views; 
  GfxWrappedRWBuffer *v26; 
  DecalVolumeFillClusterResourcePtrs fcrp; 
  DecalVolumeCsConstants clusterConstantsTmp; 

  R_ProfBeginNamedEvent(state, "D+ fill cluster");
  R_DecalVolume_CalculateClusterResolutionPerPass(viewInfo->sceneViewport.width, viewInfo->sceneViewport.height, &s_decalVolumes.clustering);
  v10 = clustering->numClusteringPasses - 1;
  v11 = clustering->clusteringPasses[v10].nCellsX * clustering->clusteringPasses[v10].nCellsY * clustering->clusteringPasses[v10].nCellsZ;
  v12 = &clustering->clusteringPassesResources[(unsigned int)v10];
  R_HW_AddResourceTransition(state, &v12->decalIndices, 0xFFFFFFFF, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_FlushResourceTransitions(state);
  R_SetComputeShader(state, rgp.decalVolumeClusterClearHeader);
  views = &v12->decalIndices.rwView;
  R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
  R_Dispatch(state, (v11 + 63) >> 6, 1u, 1u);
  R_HW_AddResourceTransition(state, &v12->decalIndices, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_FlushResourceTransitions(state);
  if ( decalCount && (*((_BYTE *)&viewInfo->input + 7920) & 4) != 0 )
  {
    p_decalIndicesCounts = &clustering->decalIndicesCounts;
    v26 = &clustering->decalIndicesCounts;
    R_HW_AddResourceTransition(state, &clustering->decalIndicesCounts, 0xFFFFFFFF, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    numClusteringPasses = clustering->numClusteringPasses;
    for ( i = 0; i < numClusteringPasses; ++i )
    {
      v16 = i;
      v17 = &clustering->clusteringPassesResources[v16];
      if ( i != numClusteringPasses - 1 )
      {
        R_HW_AddResourceTransition(state, &clustering->clusteringPassesResources[v16].cellIndirection, 0xFFFFFFFF, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        R_HW_AddResourceTransition(state, &v17->cellIndirectionCount, 0xFFFFFFFF, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      }
      R_HW_AddResourceTransition(state, &v17->decalIndices, 0xFFFFFFFF, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      numClusteringPasses = clustering->numClusteringPasses;
    }
    R_HW_FlushResourceTransitions(state);
    v18 = 0;
    if ( clustering->numClusteringPasses != 1 )
    {
      do
        R_DecalVolume_ClearBuffer(state, &clustering->clusteringPassesResources[v18++].cellIndirectionCount, 0x1Cu, 0);
      while ( v18 < clustering->numClusteringPasses - 1 );
    }
    R_DecalVolume_ClearBuffer(state, &clustering->decalIndicesCounts, 0x18u, 0);
    R_ComputeWaitForCompute(state, PIPE_FLUSH_FULL);
    R_DecalVolume_BuildDecalVolumeCsConstants(viewInfo, &clusterConstantsTmp);
    v19 = 0;
    if ( clustering->numClusteringPasses )
    {
      do
      {
        v20 = &clustering->clusteringPasses[v19];
        if ( v20->nCellsX > v20->nMaxCellsX )
        {
          LODWORD(v24) = v20->nMaxCellsX;
          LODWORD(v23) = v20->nCellsX;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 7859, ASSERT_TYPE_ASSERT, "( p.nCellsX ) <= ( p.nMaxCellsX )", "%s <= %s\n\t%u, %u", "p.nCellsX", "p.nMaxCellsX", v23, v24) )
            __debugbreak();
        }
        if ( v20->nCellsY > v20->nMaxCellsY )
        {
          LODWORD(v24) = v20->nMaxCellsY;
          LODWORD(v23) = v20->nCellsY;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 7860, ASSERT_TYPE_ASSERT, "( p.nCellsY ) <= ( p.nMaxCellsY )", "%s <= %s\n\t%u, %u", "p.nCellsY", "p.nMaxCellsY", v23, v24) )
            __debugbreak();
        }
        if ( v20->nCellsZ > v20->nMaxCellsZ )
        {
          LODWORD(v24) = v20->nMaxCellsZ;
          LODWORD(v23) = v20->nCellsZ;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 7861, ASSERT_TYPE_ASSERT, "( p.nCellsZ ) <= ( p.nMaxCellsZ )", "%s <= %s\n\t%u, %u", "p.nCellsZ", "p.nMaxCellsZ", v23, v24) )
            __debugbreak();
        }
        v21 = clustering->numClusteringPasses - 1;
        fcrp.outDecalIndicesCount = p_decalIndicesCounts;
        fcrp.inClusteringData = &s_decalVolumes.decalClusteringDataBuffer;
        __asm { vpxor   xmm0, xmm0, xmm0 }
        fcrp.outDecalIndices = &clustering->clusteringPassesResources[v19].decalIndices;
        maxCellIndirectionsPerBucket = -1;
        fcrp.outCellIndirection = &clustering->clusteringPassesResources[v19].cellIndirection;
        fcrp.outCellIndirectionCount = &clustering->clusteringPassesResources[v19].cellIndirectionCount;
        fcrp.inClusteringDataCount = &s_decalVolumes.decalClusteringDataCountBuffer;
        __asm { vpxor   xmm1, xmm1, xmm1 }
        *(_OWORD *)&fcrp.inDecalIndices = _XMM0;
        *(_OWORD *)&fcrp.inCellIndirectionCount = _XMM1;
        if ( v19 )
        {
          fcrp.inDecalIndices = (const GfxWrappedRWBuffer *)(&clustering->clusteringPasses[2].maxCellIndirectionsPerBucket + 56 * v19);
          fcrp.inCellIndirection = (const GfxWrappedRWBuffer *)(&clustering->clusteringPasses[3].tileWidthClip + 56 * v19);
          fcrp.inCellIndirectionCount = (const GfxWrappedRWBuffer *)(&clustering->clusteringPasses[4].nCellsZF + 56 * v19);
          fcrp.inIndirectArgs = (const GfxWrappedRWBuffer *)(&clustering->clusteringPasses[5].nCellsY + 56 * v19);
          maxCellIndirectionsPerBucket = clustering->clusteringPasses[v19 - 1].maxCellIndirectionsPerBucket;
        }
        R_DecalVolume_FillCluster_Part1(state, &clustering->clusteringPasses[v19], maxCellIndirectionsPerBucket, v19, v19 == v21, &clusterConstantsTmp, &fcrp);
        R_HW_AddResourceTransition(state, &clustering->clusteringPassesResources[v19].decalIndices, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        if ( v19 != v21 )
        {
          R_HW_AddResourceTransition(state, &clustering->clusteringPassesResources[v19].cellIndirection, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
          R_HW_AddResourceTransition(state, &clustering->clusteringPassesResources[v19].cellIndirectionCount, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
          R_HW_AddResourceTransition(state, &clustering->clusteringPassesResources[v19].indirectArgs, 0xFFFFFFFF, D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
          R_HW_FlushResourceTransitions(state);
          R_SetComputeShader(state, rgp.decalVolumeClusterIndirectArgsBucketsMerged);
          views = (GfxShaderBufferRWView *)&clustering->clusteringPassesResources[v19].cellIndirectionCount.view;
          R_SetComputeViews(state, 4, 1, (const GfxShaderBufferView *const *)&views);
          views = &clustering->clusteringPassesResources[v19].indirectArgs.rwView;
          R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
          R_Dispatch(state, 1u, 1u, 1u);
          R_HW_AddResourceTransition(state, &clustering->clusteringPassesResources[v19].indirectArgs, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        }
        R_HW_FlushResourceTransitions(state);
        ++v19;
        p_decalIndicesCounts = &clustering->decalIndicesCounts;
      }
      while ( v19 < clustering->numClusteringPasses );
      p_decalIndicesCounts = v26;
    }
    R_HW_AddResourceTransition(state, p_decalIndicesCounts, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_HW_FlushResourceTransitions(state);
  }
  R_ProfEndNamedEvent(state);
}

/*
==============
RB_FillFrustumGrid
==============
*/
void RB_FillFrustumGrid(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  GfxCmdBufSourceState *source; 
  GfxCmdBufState *state; 
  GfxCmdBufInput *p_input; 
  unsigned int v9; 
  ComputeCmdBufState *GfxComputeCmdBufState; 
  ComputeCmdBufState *v11; 

  R_DecalVolumes_Wait(data, viewInfo);
  source = gfxContext->source;
  R_InitCmdBufSourceState(gfxContext->source, &viewInfo->input);
  state = gfxContext->state;
  p_input = &source->input;
  R_InitLocalCmdBufState(state, &source->input);
  R_ProfBeginNamedEvent(state, "Decal volume frustum grid");
  R_GPU_BeginTimer(GPU_TIMER_FRUSTUM_GRID);
  if ( r_decalVolumes->current.enabled )
    v9 = s_decalVolumes.intCollectionsCount[data->decalVolumeIndex] + s_decalVolumes.intVolumesCount[data->decalVolumeIndex] + s_decalVolumes.particleMarksCount[data->decalVolumeIndex];
  else
    v9 = 0;
  R_DecalVolumes_UpdateGpuBuffers(state, viewInfo, data, v9);
  GfxComputeCmdBufState = R_GetGfxComputeCmdBufState(state);
  RB_DecalVolume_PipelineProcess(GfxComputeCmdBufState, viewInfo, data, v9);
  v11 = R_GetGfxComputeCmdBufState(state);
  RB_FillCluster(v11, viewInfo, data, v9, &s_decalVolumes.clustering);
  R_GPU_EndTimer();
  R_ProfEndNamedEvent(state);
  R_DecalVolumesGrid_UpdateGpuBuffers(data);
  R_ShutdownLocalCmdBufState(state, p_input);
}

/*
==============
RB_ImageAtlas_CopyImageIntoAtlas
==============
*/
__int64 RB_ImageAtlas_CopyImageIntoAtlas(ComputeCmdBufState *state, const GfxBackEndData *data, unsigned int frameIndex, const GfxImage *srcImage, const GfxImage *dstAtlas, unsigned int channelIndex, unsigned int dstSliceIndex, GfxPixelFormat imageFormat, unsigned int dstX, unsigned int dstY, unsigned int dstW, unsigned int dstH)
{
  __int64 v14; 
  const GfxTexture *Resident; 
  unsigned int width; 
  unsigned int height; 
  int levelCount; 
  bool v19; 
  unsigned __int16 numElements; 
  ImageAtlasCopyJobImageAlias *v21; 
  unsigned __int8 *ResidentPixels; 
  unsigned __int8 *v23; 
  int v24; 
  HRESULT v25; 
  const char *v26; 
  ID3D12DeviceChild *v27; 
  unsigned int freeSlot; 
  unsigned int v30; 
  unsigned int v31; 
  unsigned int v32; 
  unsigned int *v33; 
  __int64 aliasCount; 
  unsigned int v35; 
  unsigned int v36; 
  unsigned int v37; 
  unsigned int v38; 
  unsigned int v39; 
  unsigned int v40; 
  unsigned int i; 
  unsigned int v42; 
  unsigned int v43; 
  int v44; 
  unsigned int v45; 
  unsigned int v46; 
  ComputeShader *copyRawRect2D_int4ComputeShader; 
  int v48; 
  int v49; 
  __int64 v51; 
  __int64 v52; 
  bool v53; 
  bool v54; 
  ID3D12DeviceChild *resource; 
  unsigned int v56; 
  unsigned int v57; 
  unsigned int outLevelCount; 
  ComputeCmdBufState *statea; 
  unsigned int outWidth; 
  unsigned int outHeight; 
  unsigned int v62; 
  unsigned int outElementCount; 
  GfxBackEndData *dataa; 
  GfxShaderTextureView *views; 
  GfxShaderTextureRWView *v66; 
  int v67[3]; 
  __int64 v68; 
  int v69; 
  __int128 v70; 
  GfxShaderTextureView v71; 
  int v72; 
  __int64 v73; 
  int v74; 
  unsigned __int64 v75; 
  unsigned int v76; 
  __int16 v77; 
  unsigned __int16 v78; 
  int v79; 
  int v80; 
  __int64 v81; 
  int v82; 
  int v83; 
  int v84[4]; 
  __int64 v85; 
  int v86; 
  int v87; 

  statea = state;
  v14 = frameIndex;
  dataa = (GfxBackEndData *)data;
  v62 = channelIndex;
  if ( !state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 3564, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
    __debugbreak();
  Resident = R_Texture_GetResident(dstAtlas->textureId);
  R_Texture_GetDims(Resident, &outWidth, &outHeight, &outLevelCount, &outElementCount);
  width = srcImage->width;
  height = srcImage->height;
  levelCount = srcImage->levelCount;
  v54 = srcImage == s_decalVolumes.imageAtlas.bc7Temp;
  v56 = width;
  v57 = height;
  if ( srcImage == s_decalVolumes.imageAtlas.bc7Temp )
  {
    width = 128;
    v56 = 128;
    height = 128;
    v57 = 128;
  }
  v19 = (unsigned int)(srcImage->format - 44) <= 1 || srcImage == s_decalVolumes.imageAtlas.bc7Temp;
  numElements = srcImage->numElements;
  v53 = v19;
  if ( numElements != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 3596, ASSERT_TYPE_ASSERT, "( srcImage->numElements ) == ( 1 )", "%s == %s\n\t%u, %u", "srcImage->numElements", "1", numElements, 1) )
    __debugbreak();
  v21 = &s_decalVolumes.aliases[v14];
  if ( v21->aliasCount >= 8 )
  {
    LODWORD(v52) = 8;
    LODWORD(v51) = v21->aliasCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 3599, ASSERT_TYPE_ASSERT, "(unsigned)( aliases.aliasCount ) < (unsigned)( ( sizeof( *array_counter( ImageAtlasCopyJobImageAlias::srcTextureAlias ) ) + 0 ) )", "aliases.aliasCount doesn't index ARRAY_COUNT( ImageAtlasCopyJobImageAlias::srcTextureAlias )\n\t%i not in [0, %i)", v51, v52) )
      __debugbreak();
  }
  v73 = 0i64;
  v74 = 0;
  v81 = 0i64;
  v83 = 0;
  if ( (srcImage->flags & 0x40) != 0 )
    ResidentPixels = Stream_AddressSpace_ResolveHandle(&srcImage->pixels.streamedDataHandle);
  else
    ResidentPixels = (unsigned __int8 *)R_Image_GetResidentPixels(srcImage);
  v23 = ResidentPixels;
  v75 = (unsigned __int64)width >> 2;
  v72 = 3;
  v76 = height >> 2;
  v77 = 1;
  if ( v54 )
    v78 = 3;
  else
    v78 = truncate_cast<unsigned short,unsigned int>(levelCount - 2);
  v24 = 17;
  if ( v19 )
    v24 = 3;
  v80 = 1;
  v79 = v24;
  v82 = 0;
  v25 = ((__int64 (__fastcall *)(ID3D12Device *, unsigned __int8 *, int *, __int64, _QWORD, GUID *, ID3D12DeviceChild **))g_dx.d3d12device->m_pFunction[14].Release)(g_dx.d3d12device, v23, &v72, 64i64, 0i64, &GUID_696442be_a72e_4059_bc79_5b5c98040fad, &resource);
  if ( v25 < 0 )
  {
    v26 = R_ErrorDescription(v25);
    Sys_Error((const ObfuscateErrorText)&stru_14436DF60, 307i64, v26);
  }
  PIXSetDebugName(resource, "D+ src aliased texture");
  v27 = resource;
  v67[0] = v79;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  v69 = v78;
  v68 = 0i64;
  v70 = _XMM0;
  v67[1] = 4;
  v67[2] = 5768;
  while ( 1 )
  {
    if ( ((unsigned __int64)&g_descriptorPools.shaderViewPool.lock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_descriptorPools.shaderViewPool.lock) )
      __debugbreak();
    if ( !_InterlockedCompareExchange(&g_descriptorPools.shaderViewPool.lock, 1, 0) )
      break;
    Sys_Sleep(0);
  }
  freeSlot = g_descriptorPools.shaderViewPool.freeSlot;
  v30 = v56;
  v31 = v57;
  if ( !g_descriptorPools.shaderViewPool.freeSlot )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.h", 488, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Descriptor heap pool out of free slots") )
      __debugbreak();
    freeSlot = g_descriptorPools.shaderViewPool.freeSlot;
  }
  v32 = 0;
  v33 = &g_descriptorPools.shaderViewPool.nextSlot[freeSlot];
  g_descriptorPools.shaderViewPool.freeSlot = *v33;
  *v33 = 0;
  ++g_descriptorPools.shaderViewPool.handle.used;
  if ( ((unsigned __int8)&g_descriptorPools.shaderViewPool.lock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_descriptorPools.shaderViewPool.lock) )
    __debugbreak();
  _InterlockedExchange(&g_descriptorPools.shaderViewPool.lock, 0);
  ((void (__fastcall *)(ID3D12Device *, ID3D12DeviceChild *, int *, unsigned __int64))g_dx.d3d12device->m_pFunction[6].QueryInterface)(g_dx.d3d12device, v27, v67, g_descriptorPools.shaderViewPool.handle.parent->heapStartCPUHandle.ptr + g_descriptorPools.shaderViewPool.handle.parent->descriptorSize * (freeSlot + g_descriptorPools.shaderViewPool.handle.startSlot));
  aliasCount = v21->aliasCount;
  v35 = v30;
  v36 = v31;
  *(_QWORD *)&v71.view = freeSlot;
  v71.resource = (ID3D12Resource *)v27;
  v21->srcTextureAlias[aliasCount] = (ID3D12Resource *)v27;
  v21->srcTextureAliasView[v21->aliasCount++] = v71;
  v37 = 0;
  while ( v35 > dstW || v36 > dstH )
  {
    v38 = v35 >> 1;
    v35 = 1;
    if ( v38 > 1 )
      v35 = v38;
    v39 = v36 >> 1;
    v36 = 1;
    if ( v39 > 1 )
      v36 = v39;
    ++v37;
  }
  LODWORD(resource) = v37;
  Stream_Logger_OnAliasedImage("RB_ImageAtlas_CopyImageIntoAtlas", dataa, srcImage, v37);
  v40 = outLevelCount;
  for ( i = 0; i < v40; ++i )
  {
    v42 = 1;
    if ( (int)(outWidth >> i) > 1 )
      v42 = outWidth >> i;
    if ( v42 >= 4 )
    {
      v43 = 1;
      if ( (int)(outHeight >> i) > 1 )
        v43 = outHeight >> i;
      if ( v43 >= 4 )
      {
        v44 = i + v37;
        v45 = v30 >> (i + v37);
        v46 = v31 >> (i + v37);
        if ( v45 >= 4 && v46 >= 4 )
        {
          copyRawRect2D_int4ComputeShader = rgp.copyRawRect2D_int4ComputeShader;
          v32 += v45 * v46;
          if ( !v53 )
            copyRawRect2D_int4ComputeShader = rgp.copyRawRect2D_int2ComputeShader;
          R_SetComputeShader(statea, copyRawRect2D_int4ComputeShader);
          v48 = v45 >> 2;
          v49 = v46 >> 2;
          views = &v71;
          R_SetComputeTextureViews(statea, 0, 1, (const GfxShaderTextureView *const *)&views);
          v66 = &s_decalVolumes.atlasAliasRWView[v62][i];
          R_SetComputeTextureRWViews(statea, 0, 1, (const GfxShaderTextureRWView *const *)&v66);
          v84[0] = v48;
          if ( v54 )
            v44 = 0;
          v84[1] = v49;
          v86 = v44;
          v84[2] = dstX >> i >> 2;
          v84[3] = dstY >> i >> 2;
          v85 = 0i64;
          v87 = 0;
          R_UploadAndSetComputeConstants(statea, 0, v84, 0x20u, NULL);
          R_Dispatch(statea, (unsigned int)(v48 + 7) >> 3, (unsigned int)(v49 + 7) >> 3, 1u);
          v40 = outLevelCount;
          v30 = v56;
          v31 = v57;
        }
        v37 = (unsigned int)resource;
      }
    }
  }
  if ( imageFormat == GFX_PF_BC1_SRGB || imageFormat == GFX_PF_BC4 )
    v32 >>= 1;
  return v32;
}

/*
==============
RB_MinMaxDepthImage
==============
*/
GfxImage *RB_MinMaxDepthImage()
{
  return 0i64;
}

/*
==============
R_AddMarkDecalVolume
==============
*/
void R_AddMarkDecalVolume(const vec3_t *origin, const vec3_t *halfSize, const tmat33_t<vec3_t> *axis, const unsigned __int8 *color, Material *markMaterial, int atlasIndex, unsigned int markFlags, unsigned __int16 uid)
{
  GfxDecalVolumeMaterial *material; 
  __int64 v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  unsigned int frontendFrame; 
  unsigned int decalVolumeIndex; 

  if ( r_decalVolumesMarks->current.enabled )
  {
    material = markMaterial->decalVolumeMaterial;
    if ( !material )
      material = rgp.defaultDecalVolumeMaterial->decalVolumeMaterial;
    if ( s_decalVolumes.frontendFrame != frontEndDataOut->decalVolumeIndex )
    {
      decalVolumeIndex = frontEndDataOut->decalVolumeIndex;
      frontendFrame = s_decalVolumes.frontendFrame;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 6156, ASSERT_TYPE_ASSERT, "( s_decalVolumes.frontendFrame ) == ( frontEndDataOut->decalVolumeIndex )", "%s == %s\n\t%u, %u", "s_decalVolumes.frontendFrame", "frontEndDataOut->decalVolumeIndex", frontendFrame, decalVolumeIndex) )
        __debugbreak();
    }
    v13 = s_decalVolumes.intVolumesCount[s_decalVolumes.frontendFrame];
    if ( (int)v13 < 1024 - s_decalVolumes.particleMarksCount[s_decalVolumes.frontendFrame] )
    {
      v14 = axis->m[1].v[0];
      v15 = axis->m[0].v[1];
      v16 = axis->m[0].v[2];
      v17 = (float)((float)(v15 * axis->m[1].v[1]) + (float)(axis->m[0].v[0] * v14)) + (float)(v16 * axis->m[1].v[2]);
      if ( COERCE_FLOAT(LODWORD(v17) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 6166, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( axis[0], axis[1] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", axis->m[0].v[0], v15, v16, v14, axis->m[1].v[1], axis->m[1].v[2], v17) )
        __debugbreak();
      v18 = axis->m[0].v[1];
      v19 = axis->m[2].v[0];
      v20 = axis->m[0].v[2];
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v18 * axis->m[2].v[1]) + (float)(v19 * axis->m[0].v[0])) + (float)(v20 * axis->m[2].v[2])) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 6167, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( axis[0], axis[2] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", axis->m[0].v[0], v18, v20, v19, axis->m[2].v[1], axis->m[2].v[2], (float)((float)((float)(v18 * axis->m[2].v[1]) + (float)(v19 * axis->m[0].v[0])) + (float)(v20 * axis->m[2].v[2]))) )
        __debugbreak();
      ++s_decalVolumes.intVolumesCount[s_decalVolumes.frontendFrame];
      R_FillMarkDecalVolume(&s_decalVolumes.impactMarkDecalsCPU[s_decalVolumes.frontendFrame][v13], origin, halfSize, axis, color, material, atlasIndex, markFlags, uid);
    }
  }
}

/*
==============
R_AddParticleDecalVolume
==============
*/
void R_AddParticleDecalVolume(const vec3_t *origin, const vec3_t *halfSize, const tmat33_t<vec3_t> *axis, const unsigned __int8 *color, int atlasIndex, Material *markMaterial, const char *vfxName)
{
  GfxDecalVolumeMaterial *material; 
  int v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  __int64 v20; 
  unsigned int markFlags; 
  unsigned int uid; 

  if ( r_decalVolumesMarks->current.enabled )
  {
    material = markMaterial->decalVolumeMaterial;
    if ( !material )
      material = rgp.defaultDecalVolumeMaterial->decalVolumeMaterial;
    if ( s_decalVolumes.frontendFrame != frontEndDataOut->decalVolumeIndex )
    {
      uid = frontEndDataOut->decalVolumeIndex;
      markFlags = s_decalVolumes.frontendFrame;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 6204, ASSERT_TYPE_ASSERT, "( s_decalVolumes.frontendFrame ) == ( frontEndDataOut->decalVolumeIndex )", "%s == %s\n\t%u, %u", "s_decalVolumes.frontendFrame", "frontEndDataOut->decalVolumeIndex", markFlags, uid) )
        __debugbreak();
    }
    v12 = s_decalVolumes.particleMarksCount[s_decalVolumes.frontendFrame];
    if ( v12 < 1024 )
    {
      v13 = axis->m[1].v[0];
      v14 = axis->m[0].v[1];
      v15 = axis->m[0].v[2];
      v16 = (float)((float)(v14 * axis->m[1].v[1]) + (float)(axis->m[0].v[0] * v13)) + (float)(v15 * axis->m[1].v[2]);
      if ( COERCE_FLOAT(LODWORD(v16) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 6212, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( axis[0], axis[1] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", axis->m[0].v[0], v14, v15, v13, axis->m[1].v[1], axis->m[1].v[2], v16) )
        __debugbreak();
      v17 = axis->m[0].v[1];
      v18 = axis->m[2].v[0];
      v19 = axis->m[0].v[2];
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v17 * axis->m[2].v[1]) + (float)(v18 * axis->m[0].v[0])) + (float)(v19 * axis->m[2].v[2])) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 6213, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( axis[0], axis[2] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", axis->m[0].v[0], v17, v19, v18, axis->m[2].v[1], axis->m[2].v[2], (float)((float)((float)(v17 * axis->m[2].v[1]) + (float)(v18 * axis->m[0].v[0])) + (float)(v19 * axis->m[2].v[2]))) )
        __debugbreak();
      ++s_decalVolumes.particleMarksCount[s_decalVolumes.frontendFrame];
      v20 = (LOWORD(s_decalVolumes.markVfxNameIndex) + 1) & 0x7FF;
      s_decalVolumes.markVfxNameIndex = (LOWORD(s_decalVolumes.markVfxNameIndex) + 1) & 0x7FF;
      FX_CopyMarkVfxDebugName(vfxName, s_decalVolumes.markVfxName[v20]);
      R_FillMarkDecalVolume(&s_decalVolumes.impactMarkDecalsCPU[s_decalVolumes.frontendFrame][1023 - v12], origin, halfSize, axis, color, material, atlasIndex, 0, LOWORD(s_decalVolumes.markVfxNameIndex) | 0x8000);
    }
  }
}

/*
==============
R_AddStaticDecalVolume
==============
*/
bool R_AddStaticDecalVolume(unsigned int frame, unsigned __int16 decalIndex, unsigned int instanceCount)
{
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  bool result; 
  int v9; 
  unsigned int decalVolumeCollectionCount; 

  v3 = frame;
  v4 = s_decalVolumes.intCollectionsCount[frame];
  v5 = frame;
  s_decalVolumes.intCollectionsCount[v5] = v4 + 1;
  if ( (int)v4 >= 2048 )
    return 0;
  if ( decalIndex >= g_worldDraw->decalVolumeCollectionCount )
  {
    decalVolumeCollectionCount = g_worldDraw->decalVolumeCollectionCount;
    v9 = decalIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 6079, ASSERT_TYPE_ASSERT, "(unsigned)( decalIndex ) < (unsigned)( g_worldDraw->decalVolumeCollectionCount )", "decalIndex doesn't index g_worldDraw->decalVolumeCollectionCount\n\t%i not in [0, %i)", v9, decalVolumeCollectionCount) )
      __debugbreak();
  }
  result = 1;
  s_decalVolumes.intCollections[v3][v4] = decalIndex;
  s_decalVolumes.intInInstanceCount[v5] += instanceCount;
  return result;
}

/*
==============
R_AddStaticDecalVolumes
==============
*/
void R_AddStaticDecalVolumes(const void *const cmd)
{
  bool v1; 
  bitarray_base<bitarray<1536> > *v2; 
  const dvar_t *v3; 
  __int64 v4; 
  unsigned int decalVisDataCount; 
  unsigned int *decalVisData; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  __int64 v10; 
  GfxDecalVolumeCollection *v11; 
  unsigned int v12; 
  bitarray_base<bitarray<1536> > *v13; 
  bool v14; 
  unsigned int v15; 
  unsigned __int64 v16; 
  bool v17; 
  unsigned int v18; 
  GfxWorldDraw *v19; 
  unsigned int v20; 
  unsigned int v21; 
  GfxDecalVolumeCollection *v22; 
  __int64 transientZoneIndex; 
  GfxWorldTransientZone *v24; 
  GfxDecalVolumeTransientData *decalVolumes; 
  unsigned int decalCount; 
  unsigned __int16 v27; 
  bool v28; 
  bool v29; 
  unsigned int v30; 
  __int64 v31; 
  unsigned int v32; 
  int v33; 
  unsigned int v34; 
  unsigned int *v35; 
  unsigned __int16 *v36; 
  unsigned int v37; 
  unsigned __int16 v38; 
  GfxDecalVolumeCollection *v39; 
  __int64 v40; 
  unsigned int v41; 
  unsigned int v42; 
  int v43; 
  __int64 v44; 
  __int64 v45; 
  __int64 v46; 
  unsigned int v47; 
  bool *dynamicDecalVolumesInUse; 
  GfxStaticDecalVolumePacked *dynamicDecalVolumes; 
  __int64 v50; 
  __int64 v51; 
  double *v; 
  unsigned int v53; 
  unsigned int v54; 
  unsigned int v55; 
  int v56; 
  __int64 v57; 
  __int64 v58; 
  __int64 v59; 
  char v60; 
  unsigned __int16 v61; 
  unsigned int v62; 
  unsigned int v63; 
  unsigned int frame; 
  unsigned int framea; 
  unsigned __int16 *v66; 
  unsigned int *v67; 
  void **v68; 
  __int64 v69; 
  __int64 v70; 
  char v71[96]; 

  v69 = *(_QWORD *)cmd;
  v1 = 1;
  v60 = 1;
  frame = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)cmd + 11696i64) + 1088736i64);
  v2 = &s_decalVolumes.transientZonesToProcess[frame];
  if ( s_decalVolumesUpdated )
    goto LABEL_41;
  v3 = DCONST_DVARBOOL_r_decalVolumesUmbraVisibility;
  if ( !DCONST_DVARBOOL_r_decalVolumesUmbraVisibility && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_decalVolumesUmbraVisibility") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( !v3->current.enabled )
  {
LABEL_41:
    v19 = g_worldDraw;
    v20 = 0;
    v21 = 0;
    if ( !g_worldDraw->decalVolumeCollectionCount )
      goto LABEL_58;
    do
    {
      v22 = &v19->decalVolumeCollections[v21];
      transientZoneIndex = v22->transientZoneIndex;
      v24 = v19->transientZones[transientZoneIndex];
      if ( v24 )
      {
        decalVolumes = v24->decalVolumes;
        if ( decalVolumes )
        {
          if ( decalVolumes->decalVolumeUids )
          {
            if ( R_ShouldDrawTransientZone(*(const GfxBackEndData *const *)(v69 + 11696), transientZoneIndex) )
            {
              decalCount = v22->decalCount;
              v27 = truncate_cast<unsigned short,unsigned int>(v21);
              v28 = R_AddStaticDecalVolume(frame, v27, decalCount);
              if ( v22->transientZoneIndex >= rgp.world->draw.transientZoneCount )
              {
                LODWORD(v59) = rgp.world->draw.transientZoneCount;
                LODWORD(v58) = v22->transientZoneIndex;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 6270, ASSERT_TYPE_ASSERT, "(unsigned)( collection.transientZoneIndex ) < (unsigned)( rgp.world->draw.transientZoneCount )", "collection.transientZoneIndex doesn't index rgp.world->draw.transientZoneCount\n\t%i not in [0, %i)", v58, v59) )
                  __debugbreak();
              }
              v29 = bitarray_base<bitarray<1536>>::testBit(v2, v22->transientZoneIndex);
              if ( v28 || v29 )
                v29 = 1;
              v30 = v22->transientZoneIndex;
              if ( v29 )
                bitarray_base<bitarray<1536>>::setBit(v2, v30);
              else
                bitarray_base<bitarray<1536>>::resetBit(v2, v30);
            }
            v19 = g_worldDraw;
          }
        }
      }
      ++v21;
    }
    while ( v21 < v19->decalVolumeCollectionCount );
  }
  else
  {
    LODWORD(v4) = 0;
    decalVisDataCount = rgp.world->dpvs.decalVisDataCount;
    decalVisData = rgp.world->dpvs.decalVisData;
    v67 = decalVisData;
    v62 = decalVisDataCount;
    if ( decalVisDataCount )
      v7 = *decalVisData;
    else
      v7 = 0;
    while ( 1 )
    {
      v8 = v7;
      if ( !v7 )
        break;
LABEL_13:
      v9 = __lzcnt(v8);
      v10 = v9 + 32 * (_DWORD)v4;
      if ( v9 >= 0x20 )
      {
        LODWORD(v59) = 32;
        LODWORD(v58) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v58, v59) )
          __debugbreak();
      }
      if ( ((0x80000000 >> v9) & v8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_visdata_inline.h", 53, ASSERT_TYPE_ASSERT, "(visdata & bit)", (const char *)&queryFormat, "visdata & bit") )
        __debugbreak();
      v7 = v8 & ~(0x80000000 >> v9);
      if ( !v1 )
        goto LABEL_57;
      v11 = &rgp.world->draw.decalVolumeCollections[v10];
      v12 = v11->transientZoneIndex;
      v13 = *(bitarray_base<bitarray<1536> > **)(v69 + 11696);
      if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_backend_data.h", 447, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
        __debugbreak();
      v14 = bitarray_base<bitarray<1536>>::testBit(v13 + 1481980, v12);
      decalVisDataCount = v62;
      decalVisData = v67;
      if ( v14 )
      {
        v15 = v11->decalCount;
        if ( (unsigned int)v10 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v10, "unsigned", (unsigned int)v10) )
          __debugbreak();
        v1 = R_AddStaticDecalVolume(frame, v10, v15);
        v60 = v1;
        if ( v11->transientZoneIndex >= rgp.world->draw.transientZoneCount )
        {
          LODWORD(v59) = rgp.world->draw.transientZoneCount;
          LODWORD(v58) = v11->transientZoneIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 6288, ASSERT_TYPE_ASSERT, "(unsigned)( collection.transientZoneIndex ) < (unsigned)( rgp.world->draw.transientZoneCount )", "collection.transientZoneIndex doesn't index rgp.world->draw.transientZoneCount\n\t%i not in [0, %i)", v58, v59) )
            __debugbreak();
        }
        v16 = v11->transientZoneIndex;
        if ( (unsigned int)v16 >= 0x600 )
        {
          LODWORD(v59) = 1536;
          LODWORD(v58) = v11->transientZoneIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v58, v59) )
            __debugbreak();
        }
        v17 = v1 || ((0x80000000 >> (v16 & 0x1F)) & *(_DWORD *)&v2[4 * (v16 >> 5)]) != 0;
        v18 = v11->transientZoneIndex;
        if ( v17 )
          bitarray_base<bitarray<1536>>::setBit(v2, v18);
        else
          bitarray_base<bitarray<1536>>::resetBit(v2, v18);
        decalVisDataCount = v62;
        decalVisData = v67;
      }
      else
      {
        v1 = v60;
      }
    }
    while ( 1 )
    {
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= decalVisDataCount )
        break;
      v8 = decalVisData[v4];
      if ( v8 )
        goto LABEL_13;
    }
  }
LABEL_57:
  v20 = 0;
LABEL_58:
  v68 = (void **)&s_decalVolumes.workgroupCountPerTransientZoneCPU[frame];
  memset_0(*v68, 0, 0x1800ui64);
  v31 = 4i64 * frame;
  v32 = 2048;
  v70 = v31;
  v33 = 4096;
  v34 = 0;
  if ( *(int *)((char *)s_decalVolumes.intCollectionsCount + v31) < 2048 )
    v32 = s_decalVolumes.intCollectionsCount[frame];
  *(int *)((char *)s_decalVolumes.intCollectionsCount + v31) = v32;
  v35 = s_decalVolumes.staticCollectionWorkgroupsCPU[frame];
  v36 = s_decalVolumes.intCollections[(unsigned __int64)frame];
  v63 = v32;
  v66 = v36;
  if ( v32 )
  {
    v37 = 0;
    framea = 0;
    v38 = rgp.world->draw.decalVolumeCollections[*v36].transientZoneIndex;
    v61 = v38;
    do
    {
      if ( !v33 )
        break;
      v39 = &rgp.world->draw.decalVolumeCollections[*v36];
      if ( v39->transientZoneIndex != v38 )
      {
        v40 = 4i64 * v38;
        if ( *(_DWORD *)((char *)*v68 + v40) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 6342, ASSERT_TYPE_SANITY, "( s_decalVolumes.workgroupCountPerTransientZoneCPU[frame][prevTransientZoneIndex] == 0 )", (const char *)&queryFormat, "s_decalVolumes.workgroupCountPerTransientZoneCPU[frame][prevTransientZoneIndex] == 0") )
          __debugbreak();
        if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 6343, ASSERT_TYPE_SANITY, "( collectionWorkgroupCount )", (const char *)&queryFormat, "collectionWorkgroupCount") )
          __debugbreak();
        v32 = v63;
        v36 = v66;
        *(_DWORD *)((char *)*v68 + v40) = v20;
        v38 = v39->transientZoneIndex;
        v20 = 0;
        v61 = v39->transientZoneIndex;
      }
      v41 = 0;
      if ( v39->decalCount )
      {
        do
        {
          if ( !v33 )
            break;
          v42 = v41 + v39->firstZoneDecal;
          if ( v42 >= 0xFFFFFF )
          {
            LODWORD(v59) = 0xFFFFFF;
            LODWORD(v58) = v41 + v39->firstZoneDecal;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 6353, ASSERT_TYPE_ASSERT, "(unsigned)( firstDecal ) < (unsigned)( 0xffffff )", "firstDecal doesn't index 0xffffff\n\t%i not in [0, %i)", v58, v59) )
              __debugbreak();
          }
          v43 = 16;
          if ( (int)(v39->decalCount - v41) < 16 )
            v43 = v39->decalCount - v41;
          v44 = v34;
          v41 += v43;
          ++v34;
          ++v20;
          --v33;
          v35[v44] = v42 | (v43 << 24);
        }
        while ( v41 < v39->decalCount );
        v38 = v61;
        v37 = framea;
        v32 = v63;
        v36 = v66;
      }
      ++v37;
      ++v36;
      framea = v37;
      v66 = v36;
    }
    while ( v37 < v32 );
    v45 = 4i64 * v38;
    if ( *(_DWORD *)((char *)*v68 + v45) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 6366, ASSERT_TYPE_SANITY, "( s_decalVolumes.workgroupCountPerTransientZoneCPU[frame][prevTransientZoneIndex] == 0 )", (const char *)&queryFormat, "s_decalVolumes.workgroupCountPerTransientZoneCPU[frame][prevTransientZoneIndex] == 0") )
      __debugbreak();
    if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 6367, ASSERT_TYPE_SANITY, "( collectionWorkgroupCount )", (const char *)&queryFormat, "collectionWorkgroupCount") )
      __debugbreak();
    v31 = v70;
    *(_DWORD *)((char *)*v68 + v45) = v20;
    v20 = 0;
  }
  v46 = *(unsigned int *)(*(_QWORD *)(v69 + 11696) + 1088736i64);
  s_decalVolumes.frameDynamicDecalVolumesCount[v46] = 0;
  if ( s_decalVolumes.numDynamicDecalVolumes )
  {
    memcpy_0(v71, (const void *)(v69 + 2608), 16i64 * *(unsigned int *)(v69 + 2604));
    v47 = 0;
    dynamicDecalVolumesInUse = s_decalVolumes.dynamicDecalVolumesInUse;
    dynamicDecalVolumes = s_decalVolumes.dynamicDecalVolumes;
    v50 = 192i64;
    do
    {
      if ( *dynamicDecalVolumesInUse )
      {
        v51 = v47++ + 192 * v46;
        v = (double *)s_decalVolumes.frameDynamicDecalVolumes[0][v51].obbCenter.v;
        *(__m256i *)v = *(__m256i *)dynamicDecalVolumes->obbCenter.v;
        v[4] = *(double *)&dynamicDecalVolumes->uvMatrixAndOffset[2];
        *((_DWORD *)v + 10) = dynamicDecalVolumes->reserved;
      }
      ++dynamicDecalVolumesInUse;
      ++dynamicDecalVolumes;
      --v50;
    }
    while ( v50 );
    s_decalVolumes.frameDynamicDecalVolumesCount[v46] = v47;
  }
  *(unsigned int *)((char *)s_decalVolumes.frameDynamicDecalVolumesWorkgroupCount + v31) = 0;
  v53 = *(unsigned int *)((char *)s_decalVolumes.frameDynamicDecalVolumesCount + v31);
  if ( !v53 )
  {
LABEL_105:
    if ( v33 )
      return;
    goto LABEL_106;
  }
  if ( v33 )
  {
    v54 = 0;
    do
    {
      if ( !v33 )
        break;
      v55 = v54;
      if ( v54 >= 0xFFFFFF )
      {
        LODWORD(v59) = 0xFFFFFF;
        LODWORD(v58) = v54;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 6385, ASSERT_TYPE_ASSERT, "(unsigned)( firstDecal ) < (unsigned)( 0xffffff )", "firstDecal doesn't index 0xffffff\n\t%i not in [0, %i)", v58, v59) )
          __debugbreak();
      }
      v56 = 16;
      if ( (int)(v53 - v54) < 16 )
        v56 = v53 - v54;
      v57 = v34;
      v54 += v56;
      ++v34;
      ++v20;
      --v33;
      v35[v57] = v55 | (v56 << 24);
    }
    while ( v54 < v53 );
    *(unsigned int *)((char *)s_decalVolumes.frameDynamicDecalVolumesWorkgroupCount + v70) = v20;
    goto LABEL_105;
  }
LABEL_106:
  R_WarnOncePerFrame(R_WARN_DECAL_VOLUME_WORKGROUP_LIMIT);
}

/*
==============
R_DecalVolumeAddCommand
==============
*/
void R_DecalVolumeAddCommand(const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  unsigned int dataa; 
  const GfxViewInfo *v5; 

  if ( Sys_ExistsWorkerCmdsOfType(WRKCMD_GENERATE_DECAL_BUFFER) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 9638, ASSERT_TYPE_ASSERT, "(!Sys_ExistsWorkerCmdsOfType( WRKCMD_GENERATE_DECAL_BUFFER ))", (const char *)&queryFormat, "!Sys_ExistsWorkerCmdsOfType( WRKCMD_GENERATE_DECAL_BUFFER )") )
    __debugbreak();
  if ( Sys_ExistsWorkerCmdsOfType(WRKCMD_DECAL_VOLUMES_FILL_BUFFER) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 9639, ASSERT_TYPE_ASSERT, "(!Sys_ExistsWorkerCmdsOfType( WRKCMD_DECAL_VOLUMES_FILL_BUFFER ))", (const char *)&queryFormat, "!Sys_ExistsWorkerCmdsOfType( WRKCMD_DECAL_VOLUMES_FILL_BUFFER )") )
    __debugbreak();
  if ( Sys_ExistsWorkerCmdsOfType(WRKCMD_DECAL_VOLUMES_MARKS_FINALIZE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 9640, ASSERT_TYPE_ASSERT, "(!Sys_ExistsWorkerCmdsOfType( WRKCMD_DECAL_VOLUMES_MARKS_FINALIZE ))", (const char *)&queryFormat, "!Sys_ExistsWorkerCmdsOfType( WRKCMD_DECAL_VOLUMES_MARKS_FINALIZE )") )
    __debugbreak();
  if ( Sys_ExistsWorkerCmdsOfType(WRKCMD_DECAL_VOLUMES_FILL_BUFFER_GRID) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 9642, ASSERT_TYPE_ASSERT, "(!Sys_ExistsWorkerCmdsOfType( WRKCMD_DECAL_VOLUMES_FILL_BUFFER_GRID ))", (const char *)&queryFormat, "!Sys_ExistsWorkerCmdsOfType( WRKCMD_DECAL_VOLUMES_FILL_BUFFER_GRID )") )
    __debugbreak();
  if ( r_decalVolumes->current.enabled )
  {
    dataa = data->decalVolumeIndex;
    Sys_AddWorkerCmd(WRKCMD_DECAL_VOLUMES_FILL_BUFFER, &dataa);
    if ( r_decalVolumesStatic->current.enabled )
    {
      v5 = viewInfo;
      Sys_AddWorkerCmd(WRKCMD_GENERATE_DECAL_BUFFER, &v5);
    }
  }
}

/*
==============
R_DecalVolumeFinalizeMarks
==============
*/
void R_DecalVolumeFinalizeMarks(const GfxBackEndData *data)
{
  unsigned int dataa; 

  if ( Sys_ExistsWorkerCmdsOfType(WRKCMD_DECAL_VOLUMES_MARKS_FINALIZE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 9667, ASSERT_TYPE_ASSERT, "(!Sys_ExistsWorkerCmdsOfType( WRKCMD_DECAL_VOLUMES_MARKS_FINALIZE ))", (const char *)&queryFormat, "!Sys_ExistsWorkerCmdsOfType( WRKCMD_DECAL_VOLUMES_MARKS_FINALIZE )") )
    __debugbreak();
  if ( r_decalVolumes->current.enabled )
  {
    dataa = data->decalVolumeIndex;
    Sys_AddWorkerCmd(WRKCMD_DECAL_VOLUMES_MARKS_FINALIZE, &dataa);
  }
}

/*
==============
R_DecalVolume_BuildDecalVolumeCsConstants
==============
*/
void R_DecalVolume_BuildDecalVolumeCsConstants(const GfxViewInfo *viewInfo, DecalVolumeCsConstants *clusterConstantsTmp)
{
  float v2; 
  float v3; 
  float v4; 
  float v5; 
  float v6; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  double v23; 
  float v24; 
  float tanHalfFovY; 
  tmat44_t<vec4_t> in1; 
  tmat44_t<vec4_t> out; 

  v2 = viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[0].v[1];
  v3 = viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[1].v[0];
  v4 = viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[0].v[0];
  v5 = viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[0].v[2];
  v6 = (float)((float)(v2 * viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[1].v[1]) + (float)(v4 * v3)) + (float)(v5 * viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[1].v[2]);
  if ( COERCE_FLOAT(LODWORD(v6) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 7641, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( axis[0], axis[1] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", v4, v2, v5, v3, viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[1].v[1], viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[1].v[2], v6) )
    __debugbreak();
  v9 = viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[0].v[1];
  v10 = viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[0].v[0];
  v11 = viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[2].v[0];
  v12 = viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[0].v[2];
  v13 = (float)((float)(v9 * viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[2].v[1]) + (float)(v10 * v11)) + (float)(v12 * viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[2].v[2]);
  if ( COERCE_FLOAT(LODWORD(v13) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 7642, ASSERT_TYPE_ASSERT, "( Vec3IsOrthogonal( axis[0], axis[2] ) )", "v0:%g %g %g, v1:%g %g %g, dot product: %g", v10, v9, v12, v11, viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[2].v[1], viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[2].v[2], v13) )
    __debugbreak();
  LODWORD(v14) = LODWORD(viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[1].v[1]) ^ _xmm;
  LODWORD(in1.m[0].v[0]) = LODWORD(viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[1].v[0]) ^ _xmm;
  v15 = viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[2].v[0];
  LODWORD(in1.m[2].v[0]) = LODWORD(viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[1].v[2]) ^ _xmm;
  v16 = viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[2].v[1];
  in1.m[0].v[1] = v15;
  v17 = viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[2].v[2];
  in1.m[1].v[1] = v16;
  v18 = viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[0].v[0];
  in1.m[2].v[1] = v17;
  LODWORD(v19) = LODWORD(v18) ^ _xmm;
  in1.m[1].v[0] = v14;
  LODWORD(v20) = LODWORD(viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[0].v[1]) ^ _xmm;
  in1.m[0].v[2] = v19;
  LODWORD(in1.m[2].v[2]) = LODWORD(viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[0].v[2]) ^ _xmm;
  in1.m[3].v[0] = 0.0;
  in1.m[3].v[1] = 0.0;
  in1.m[1].v[2] = v20;
  in1.m[3].v[2] = 0.0;
  in1.m[0].v[3] = 0.0;
  in1.m[1].v[3] = 0.0;
  in1.m[2].v[3] = 0.0;
  in1.m[3].v[3] = FLOAT_1_0;
  MatrixMultiply44Aligned(&in1, &viewInfo->viewParmsSet.frames[0].viewParms.projectionMatrix.m, &out);
  v21 = viewInfo->viewParmsSet.frames[0].viewParms.camera.zPlanes[2];
  v22 = s_decalVolumes.farPlane[viewInfo->input.data->decalVolumeIndex];
  v23 = I_fres(v21);
  *(__m256i *)clusterConstantsTmp->dvViewProjMatrix.m.m[0].v = *(__m256i *)viewInfo->viewParms.viewProjectionMatrix.m.m[0].v;
  *(__m256i *)clusterConstantsTmp->dvViewProjMatrix.m.row2.v = *(__m256i *)viewInfo->viewParms.viewProjectionMatrix.m.row2.v;
  clusterConstantsTmp->dvNearFar.v[0] = v21;
  clusterConstantsTmp->dvNearFar.v[1] = v22;
  clusterConstantsTmp->dvNearFar.v[2] = *(float *)&v23 * v22;
  clusterConstantsTmp->dvNearFar.v[3] = 0.0;
  clusterConstantsTmp->dvTanHalfFov.v[0] = viewInfo->viewParmsSet.frames[0].viewParms.camera.tanHalfFovX;
  clusterConstantsTmp->dvTanHalfFov.v[1] = viewInfo->viewParmsSet.frames[0].viewParms.camera.tanHalfFovY;
  clusterConstantsTmp->dvTanHalfFov.v[2] = 1.0 / viewInfo->viewParmsSet.frames[0].viewParms.camera.tanHalfFovX;
  clusterConstantsTmp->dvTanHalfFov.v[3] = 1.0 / viewInfo->viewParmsSet.frames[0].viewParms.camera.tanHalfFovY;
  LODWORD(v24) = LODWORD(viewInfo->viewParmsSet.frames[0].viewParms.camera.tanHalfFovX) ^ _xmm;
  clusterConstantsTmp->dvEyeAxisX.v[0] = v24 * viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[1].v[0];
  clusterConstantsTmp->dvEyeAxisX.v[1] = v24 * viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[1].v[1];
  clusterConstantsTmp->dvEyeAxisX.v[2] = v24 * viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[1].v[2];
  clusterConstantsTmp->dvEyeAxisX.v[3] = 0.0;
  tanHalfFovY = viewInfo->viewParmsSet.frames[0].viewParms.camera.tanHalfFovY;
  clusterConstantsTmp->dvEyeAxisY.v[0] = tanHalfFovY * viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[2].v[0];
  clusterConstantsTmp->dvEyeAxisY.v[1] = tanHalfFovY * viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[2].v[1];
  clusterConstantsTmp->dvEyeAxisY.v[2] = tanHalfFovY * viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[2].v[2];
  clusterConstantsTmp->dvEyeAxisY.v[3] = 0.0;
  clusterConstantsTmp->dvEyeAxisZ.v[0] = viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[0].v[0];
  clusterConstantsTmp->dvEyeAxisZ.v[1] = viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[0].v[1];
  clusterConstantsTmp->dvEyeAxisZ.v[2] = viewInfo->viewParmsSet.frames[0].viewParms.camera.axis.m[0].v[2];
  *(_QWORD *)(&clusterConstantsTmp->dvEyeAxisZ.xyz + 1) = 0i64;
  *(_QWORD *)&clusterConstantsTmp->dvEyeOffset.xyz.y = 0i64;
  clusterConstantsTmp->dvEyeOffset.v[3] = 0.0;
}

/*
==============
R_DecalVolume_CalculateClusterResolutionPerPass
==============
*/
void R_DecalVolume_CalculateClusterResolutionPerPass(unsigned int rtWidth, unsigned int rtHeight)
{
  R_DecalVolume_CalculateClusterResolutionPerPass(rtWidth, rtHeight, &s_decalVolumes.clustering);
}

/*
==============
R_DecalVolume_CalculateClusterResolutionPerPass
==============
*/
void R_DecalVolume_CalculateClusterResolutionPerPass(unsigned int rtWidth, unsigned int rtHeight, DecalVolumeClustering *outClustering)
{
  bool tiling; 
  __int64 v5; 
  __int64 v6; 
  unsigned int v7; 
  __int64 v8; 
  unsigned int v9; 
  unsigned int v10; 
  __int64 v11; 
  __int128 v12; 
  __int128 v13; 
  __int128 v14; 
  __int128 v15; 
  __int128 v16; 
  __int128 v17; 
  unsigned int v18; 
  __int64 v19; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  __int64 v25; 
  unsigned int v26; 
  unsigned int v27; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  unsigned int v36; 
  float v37; 
  __int128 v38; 
  __int128 v39; 
  __int128 v40; 
  bool v41; 
  unsigned int v42; 
  unsigned int v43; 

  tiling = outClustering->tiling;
  v5 = rtHeight;
  v6 = rtWidth;
  v41 = tiling;
  v7 = DecalVolumeClusterSizeX() + rtWidth - 1;
  v8 = v7 / (unsigned int)DecalVolumeClusterSizeX();
  v9 = DecalVolumeClusterSizeY() + v5 - 1;
  v10 = 32;
  v11 = v9 / (unsigned int)DecalVolumeClusterSizeY();
  if ( tiling )
    v10 = 1;
  v13 = 0i64;
  *(float *)&v13 = (float)v10;
  v12 = v13;
  v15 = 0i64;
  *(float *)&v15 = (float)v8;
  v14 = v15;
  v17 = 0i64;
  *(float *)&v17 = (float)v11;
  v16 = v17;
  v42 = DecalVolumeClusterSizeX();
  v18 = DecalVolumeClusterSizeY();
  LODWORD(v19) = outClustering->numClusteringPasses;
  v43 = v18;
  if ( (_DWORD)v19 )
  {
    _XMM6 = LODWORD(FLOAT_1_0);
    v21 = (float)v6;
    v22 = 1.0 / v21;
    v23 = (float)v5;
    v24 = 1.0 / v23;
    do
    {
      v25 = (unsigned int)v19;
      v26 = outClustering->numClusteringPasses - 1;
      v19 = (unsigned int)(v19 - 1);
      if ( !(_DWORD)v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 4290, ASSERT_TYPE_SANITY, "( nCellsX >= 1 )", (const char *)&queryFormat, "nCellsX >= 1") )
        __debugbreak();
      if ( !(_DWORD)v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 4291, ASSERT_TYPE_SANITY, "( nCellsY >= 1 )", (const char *)&queryFormat, "nCellsY >= 1") )
        __debugbreak();
      if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 4292, ASSERT_TYPE_SANITY, "( nCellsZ >= 1 )", (const char *)&queryFormat, "nCellsZ >= 1") )
        __debugbreak();
      v27 = v10;
      outClustering->clusteringPasses[v19].nCellsX = v8;
      _XMM0 = v41;
      outClustering->clusteringPasses[v19].nCellsY = v11;
      if ( v41 )
        v27 = 1;
      outClustering->clusteringPasses[v19].nCellsZ = v27;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm0, xmm6, xmm7, xmm2
      }
      outClustering->clusteringPasses[v19].nCellsZF = *(float *)&_XMM0;
      outClustering->clusteringPasses[v19].nCellsXF = *(float *)&v14;
      outClustering->clusteringPasses[v19].nCellsYF = *(float *)&v16;
      if ( (_DWORD)v19 == v26 )
      {
        v31 = (float)(unsigned int)v8;
        v32 = (float)(unsigned int)v11;
        outClustering->clusteringPasses[v19].nCellsXRcp = 1.0 / v31;
        v33 = 1.0 / v32;
      }
      else
      {
        outClustering->clusteringPasses[v19].nCellsXRcp = 2.0 * outClustering->clusteringPasses[v25].nCellsXRcp;
        v33 = outClustering->clusteringPasses[v25].nCellsYRcp * 2.0;
      }
      outClustering->clusteringPasses[v19].nCellsYRcp = v33;
      v34 = (float)v10;
      v35 = (float)v42;
      LODWORD(v8) = (unsigned int)(v8 + 1) >> 1;
      outClustering->clusteringPasses[v19].nCellsZRcp = 1.0 / v34;
      v36 = v10 >> 1;
      LODWORD(v11) = (unsigned int)(v11 + 1) >> 1;
      v10 = 1;
      v37 = (float)v43;
      outClustering->clusteringPasses[v19].tileWidthClip = v35 * v22;
      outClustering->clusteringPasses[v19].tileHeightClip = v37 * v24;
      if ( !v41 )
        v10 = v36;
      v38 = v14;
      *(float *)&v38 = *(float *)&v14 * 0.5;
      v14 = v38;
      v39 = v16;
      *(float *)&v39 = *(float *)&v16 * 0.5;
      v16 = v39;
      if ( v41 )
      {
        v12 = LODWORD(FLOAT_1_0);
      }
      else
      {
        v40 = v12;
        *(float *)&v40 = *(float *)&v12 * 0.5;
        v12 = v40;
      }
      v42 *= 2;
      v43 *= 2;
    }
    while ( (_DWORD)v19 );
    LODWORD(v19) = outClustering->numClusteringPasses;
  }
  if ( (unsigned int)v19 < 6 )
    memset_0(&outClustering->clusteringPasses[(unsigned int)v19], 0, 72i64 * (unsigned int)(6 - v19));
}

/*
==============
R_DecalVolume_ClearBuffer
==============
*/
void R_DecalVolume_ClearBuffer(ComputeCmdBufState *computeState, const GfxWrappedRWBuffer *buffer, unsigned int size, unsigned int clearValue)
{
  GfxDevice *device; 
  __int64 v6; 
  int v7[4]; 

  device = computeState->device;
  v7[0] = clearValue;
  v7[1] = clearValue;
  v7[2] = clearValue;
  v7[3] = clearValue;
  if ( !R_IsLockedIfGfxImmediateContext(device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  v6 = g_descriptorPools.shaderViewPool.handle.parent->descriptorSize * (g_descriptorPools.shaderViewPool.handle.startSlot + buffer->rwView.rwView);
  ((void (__fastcall *)(GfxDevice *, unsigned __int64, unsigned __int64, ID3D12Resource *, int *, _DWORD, _QWORD))device->m_pFunction[17].Release)(device, v6 + g_descriptorPools.shaderViewPool.handle.parent->heapStartGPUHandle.ptr, g_descriptorPools.shaderViewPool.handle.parent->heapStartCPUHandle.ptr + v6, buffer->rwView.rwResource, v7, 0, 0i64);
}

/*
==============
R_DecalVolume_ClearClusterHeader
==============
*/
void R_DecalVolume_ClearClusterHeader(ComputeCmdBufState *computeState, const unsigned int numHeaderCells, const GfxWrappedRWBuffer *decalIndices)
{
  GfxShaderBufferRWView *views; 

  R_SetComputeShader(computeState, rgp.decalVolumeClusterClearHeader);
  views = &decalIndices->rwView;
  R_SetComputeRWViewsWithCounters(computeState, 0, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
  R_Dispatch(computeState, (numHeaderCells + 63) >> 6, 1u, 1u);
}

/*
==============
R_DecalVolume_FillCluster_Part1
==============
*/
void R_DecalVolume_FillCluster_Part1(ComputeCmdBufState *state, const DecalVolumeClusteringPass *p, unsigned int prevMaxCellIndirectionsPerBucket, const unsigned int passIndex, const bool lastPass, DecalVolumeCsConstants *clusterConstantsTmp, const DecalVolumeFillClusterResourcePtrs *fcrp)
{
  const dvar_t *v7; 
  signed int v12; 
  ComputeShader *decalVolumeClusterPassLast; 
  const DecalVolumeFillClusterResourcePtrs *v14; 

  v7 = DCONST_DVARINT_r_decalVolumesClusterSATPassCount;
  if ( !DCONST_DVARINT_r_decalVolumesClusterSATPassCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_decalVolumesClusterSATPassCount") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  v12 = s_decalVolumes.clustering.numClusteringPasses - v7->current.integer;
  if ( passIndex )
  {
    if ( lastPass )
    {
      decalVolumeClusterPassLast = rgp.decalVolumeClusterPassLast;
      if ( (int)passIndex >= v12 )
        decalVolumeClusterPassLast = rgp.decalVolumeClusterPassLastSat;
    }
    else
    {
      decalVolumeClusterPassLast = rgp.decalVolumeClusterPassMid;
      if ( (int)passIndex >= v12 )
        decalVolumeClusterPassLast = rgp.decalVolumeClusterPassMidSat;
    }
  }
  else if ( lastPass )
  {
    decalVolumeClusterPassLast = rgp.decalVolumeClusterPassSingle;
  }
  else
  {
    decalVolumeClusterPassLast = rgp.decalVolumeClusterPassFirst;
    if ( v12 <= 0 )
      decalVolumeClusterPassLast = rgp.decalVolumeClusterPassFirstSat;
  }
  R_SetComputeShader(state, decalVolumeClusterPassLast);
  v14 = fcrp;
  fcrp = (const DecalVolumeFillClusterResourcePtrs *)&fcrp->inClusteringData->view;
  R_SetComputeViews(state, 0, 1, (const GfxShaderBufferView *const *)&fcrp);
  fcrp = (const DecalVolumeFillClusterResourcePtrs *)&v14->inClusteringDataCount->view;
  R_SetComputeViews(state, 1, 1, (const GfxShaderBufferView *const *)&fcrp);
  *(_QWORD *)clusterConstantsTmp->dvCellCount.v = *(_QWORD *)&p->nCellsX;
  clusterConstantsTmp->dvCellCount.v[2] = p->nCellsZ;
  clusterConstantsTmp->dvCellCount.v[3] = p->nCellsZ * p->nCellsX * p->nCellsY;
  *(_QWORD *)clusterConstantsTmp->dvCellCountF.v = *(_QWORD *)&p->nCellsXF;
  *(_QWORD *)&clusterConstantsTmp->dvCellCountF.xyz.z = LODWORD(p->nCellsZF);
  *(_QWORD *)clusterConstantsTmp->dvCellCountRcp.v = *(_QWORD *)&p->nCellsXRcp;
  *(_QWORD *)&clusterConstantsTmp->dvCellCountRcp.xyz.z = LODWORD(p->nCellsZRcp);
  clusterConstantsTmp->dvCellSize = (vec4_t)*(unsigned __int64 *)&p->tileWidthClip;
  *(_QWORD *)clusterConstantsTmp->dvPassLimits.v = *(_QWORD *)&p->maxDecalIndices;
  *((_QWORD *)&clusterConstantsTmp->dvPassLimits.xyz.xy + 1) = p->maxCellIndirectionsPerBucket;
  clusterConstantsTmp->dvBuckets.v[1] = passIndex;
  if ( passIndex )
  {
    if ( (!v14->inDecalIndices || !v14->inCellIndirection || !v14->inCellIndirectionCount || !v14->inIndirectArgs) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 7746, ASSERT_TYPE_ASSERT, "(fcrp.inDecalIndices && fcrp.inCellIndirection && fcrp.inCellIndirectionCount && fcrp.inIndirectArgs)", (const char *)&queryFormat, "fcrp.inDecalIndices && fcrp.inCellIndirection && fcrp.inCellIndirectionCount && fcrp.inIndirectArgs") )
      __debugbreak();
    clusterConstantsTmp->dvPassLimits.v[3] = prevMaxCellIndirectionsPerBucket;
    fcrp = (const DecalVolumeFillClusterResourcePtrs *)&v14->inDecalIndices->view;
    R_SetComputeViews(state, 2, 1, (const GfxShaderBufferView *const *)&fcrp);
    fcrp = (const DecalVolumeFillClusterResourcePtrs *)&v14->inCellIndirection->view;
    R_SetComputeViews(state, 3, 1, (const GfxShaderBufferView *const *)&fcrp);
    fcrp = (const DecalVolumeFillClusterResourcePtrs *)&v14->inCellIndirectionCount->view;
    R_SetComputeViews(state, 4, 1, (const GfxShaderBufferView *const *)&fcrp);
  }
  R_UploadAndSetComputeConstants(state, 0, clusterConstantsTmp, 0x2F0u, NULL);
  if ( !lastPass )
  {
    fcrp = (const DecalVolumeFillClusterResourcePtrs *)&v14->outCellIndirection->rwView;
    R_SetComputeRWViewsWithCounters(state, 2, 1, (const GfxShaderBufferRWView *const *)&fcrp, NULL);
    fcrp = (const DecalVolumeFillClusterResourcePtrs *)&v14->outCellIndirectionCount->rwView;
    R_SetComputeRWViewsWithCounters(state, 3, 1, (const GfxShaderBufferRWView *const *)&fcrp, NULL);
  }
  fcrp = (const DecalVolumeFillClusterResourcePtrs *)&v14->outDecalIndices->rwView;
  R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&fcrp, NULL);
  fcrp = (const DecalVolumeFillClusterResourcePtrs *)&v14->outDecalIndicesCount->rwView;
  R_SetComputeRWViewsWithCounters(state, 1, 1, (const GfxShaderBufferRWView *const *)&fcrp, NULL);
  if ( passIndex )
    R_DispatchIndirect(state, v14->inIndirectArgs->buffer, 0);
  else
    R_Dispatch(state, p->nCellsX, p->nCellsY, p->nCellsZ);
}

/*
==============
R_DecalVolume_FillCluster_Part2
==============
*/
void R_DecalVolume_FillCluster_Part2(ComputeCmdBufState *state, const GfxWrappedRWBuffer *cellIndirectionCount, const GfxWrappedRWBuffer *indirectArgs)
{
  GfxShaderBufferView *views; 

  R_SetComputeShader(state, rgp.decalVolumeClusterIndirectArgsBucketsMerged);
  views = &cellIndirectionCount->view;
  R_SetComputeViews(state, 4, 1, (const GfxShaderBufferView *const *)&views);
  views = (GfxShaderBufferView *)&indirectArgs->rwView;
  R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
  R_Dispatch(state, 1u, 1u, 1u);
}

/*
==============
R_DecalVolume_GetClustering
==============
*/
decalVolumeGlob_t *R_DecalVolume_GetClustering()
{
  return &s_decalVolumes;
}

/*
==============
R_DecalVolume_GetClusteringPass
==============
*/
const DecalVolumeClusteringPass *R_DecalVolume_GetClusteringPass(const unsigned int passIndex)
{
  return (const DecalVolumeClusteringPass *)((char *)&s_decalVolumes + 72 * passIndex);
}

/*
==============
R_DecalVolume_GetFarPlane
==============
*/
float R_DecalVolume_GetFarPlane(const GfxViewInfo *viewInfo)
{
  return s_decalVolumes.farPlane[viewInfo->input.data->decalVolumeIndex];
}

/*
==============
R_DecalVolume_GetNumClusteringPasses
==============
*/
__int64 R_DecalVolume_GetNumClusteringPasses()
{
  return s_decalVolumes.clustering.numClusteringPasses;
}

/*
==============
R_DecalVolume_InitClustering
==============
*/
void R_DecalVolume_InitClustering(unsigned int maxRtWidth, unsigned int maxRtHeight, bool tiling, DecalVolumeClustering *outClustering)
{
  unsigned int v8; 
  const dvar_t *v9; 
  signed int v10; 
  unsigned int numClusteringPasses; 
  unsigned int i; 
  __int64 v13; 
  __int64 v14; 
  unsigned int v15; 
  __int64 v16; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int v19; 
  unsigned int v20; 
  int v21; 
  unsigned int v22; 
  int v23; 
  unsigned int v24; 

  outClustering->tiling = tiling;
  if ( maxRtWidth <= 0x780 || (v8 = 5, maxRtHeight <= 0x438) )
    v8 = 4;
  outClustering->numClusteringPasses = v8;
  v9 = DCONST_DVARINT_r_decalVolumesClusterPassCountBias;
  if ( !DCONST_DVARINT_r_decalVolumesClusterPassCountBias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_decalVolumesClusterPassCountBias") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  v10 = outClustering->numClusteringPasses + v9->current.integer;
  if ( v10 > 5 )
    v10 = 5;
  if ( v10 < 4 )
    v10 = 4;
  outClustering->numClusteringPasses = v10;
  R_DecalVolume_CalculateClusterResolutionPerPass(maxRtWidth, maxRtHeight, outClustering);
  numClusteringPasses = outClustering->numClusteringPasses;
  for ( i = 0; i < numClusteringPasses; numClusteringPasses = outClustering->numClusteringPasses )
  {
    v13 = i++;
    v14 = v13;
    outClustering->clusteringPasses[v14].nMaxCellsX = outClustering->clusteringPasses[v13].nCellsX;
    outClustering->clusteringPasses[v14].nMaxCellsY = outClustering->clusteringPasses[v13].nCellsY;
    outClustering->clusteringPasses[v14].nMaxCellsZ = outClustering->clusteringPasses[v13].nCellsZ;
  }
  v15 = 0;
  LODWORD(v16) = numClusteringPasses;
  if ( numClusteringPasses )
  {
    do
    {
      v16 = (unsigned int)(v16 - 1);
      v17 = outClustering->numClusteringPasses - 1;
      v18 = outClustering->clusteringPasses[v16].nCellsX * outClustering->clusteringPasses[v16].nCellsY * outClustering->clusteringPasses[v16].nCellsZ;
      if ( (_DWORD)v16 )
      {
        outClustering->clusteringPasses[v16].maxDecalIndicesPerCellFirstPass = 0;
        if ( (_DWORD)v16 == v17 )
        {
          v21 = 17;
          if ( !tiling )
            v21 = 7;
          v20 = v18 * v21;
        }
        else if ( tiling )
        {
          v20 = v18 << 6;
        }
        else
        {
          outClustering->clusteringPasses[v16].maxDecalIndices = 32 * v18;
          if ( numClusteringPasses < 4 || (_DWORD)v16 != 1 )
            goto LABEL_26;
          v20 = v18 << 6;
        }
      }
      else
      {
        v19 = (tiling + 1) << 9;
        outClustering->clusteringPasses[v16].maxDecalIndicesPerCellFirstPass = v19;
        v20 = v18 * v19;
      }
      outClustering->clusteringPasses[v16].maxDecalIndices = v20;
LABEL_26:
      v22 = 0;
      if ( (_DWORD)v16 != v17 )
        v22 = v18;
      v23 = 0;
      outClustering->clusteringPasses[v16].maxCellIndirectionsPerBucket = v22;
      if ( (_DWORD)v16 != v17 )
        v23 = 84 * v22 + 116;
      v24 = v23 + 4 * outClustering->clusteringPasses[v16].maxDecalIndices;
      v15 += v24;
      outClustering->clusteringPasses[v16].usedMemory = v24;
    }
    while ( (_DWORD)v16 );
  }
  Com_Printf(0, "Total mem used by D+ clustering: %u [kB], %u [MB]\n", v15 >> 10, v15 >> 20);
}

/*
==============
R_DecalVolume_InitDebugDrawOBB
==============
*/
void R_DecalVolume_InitDebugDrawOBB()
{
  float *v0; 
  __int64 v1; 
  float *v2; 
  __int128 v3; 
  float v4; 
  float v5; 
  __int128 v6; 
  _DWORD *v10; 
  __int64 v11; 
  GfxBufferCreationContext v12; 
  float *v13; 
  float *v14; 
  __int128 v15; 
  float v16; 
  float v17; 
  __int128 v18; 
  _DWORD *v22; 
  GfxBufferCreationContext v23; 
  __m256i v24; 
  __m256i v25; 
  __m256i v26; 

  R_LockGfxImmediateContext();
  v24 = _ymm;
  v25 = _ymm;
  v26 = _ymm;
  v23.zoneName = (char *)&queryFormat.fmt + 3;
  v23.objectName = "R_DecalVolume_InitDebugDrawOBB VB";
  v0 = (float *)&v24.m256i_i32[2];
  v1 = 8i64;
  v2 = (float *)((char *)R_AllocStaticVertexBuffer(&s_decalVolumes.obbVerticesBox, 256, &v23) + 4);
  do
  {
    v3 = *((unsigned int *)v0 - 2);
    v4 = *v0;
    v5 = *(v0 - 1);
    v6 = v3;
    *(float *)&v6 = fsqrt((float)((float)(*(float *)&v3 * *(float *)&v3) + (float)(v5 * v5)) + (float)(v4 * v4));
    _XMM3 = v6;
    __asm
    {
      vcmpless xmm0, xmm3, xmm8
      vblendvps xmm0, xmm3, xmm7, xmm0
    }
    *(float *)&v23.zoneName = *(float *)&v3 * (float)(1.0 / *(float *)&_XMM0);
    *(v2 - 1) = *(float *)&v3;
    *v2 = v5;
    v2[1] = v4;
    *((_QWORD *)v2 + 1) = 0i64;
    *(float *)&v23.objectName = v4 * (float)(1.0 / *(float *)&_XMM0);
    *((float *)&v23.zoneName + 1) = v5 * (float)(1.0 / *(float *)&_XMM0);
    *((_QWORD *)v2 + 2) = 0i64;
    *((PackedUnitVec *)v2 + 6) = Vec3PackUnitVec((const vec3_t *)&v23);
    v2 += 8;
    v0 += 3;
    --v1;
  }
  while ( v1 );
  v23.zoneName = (char *)&queryFormat.fmt + 3;
  v23.objectName = "R_DecalVolume_InitDebugDrawOBB IB";
  v10 = R_AllocStaticIndexBuffer(&s_decalVolumes.obbIndicesBox, 72, &v23);
  v23.zoneName = (char *)&queryFormat.fmt + 3;
  *v10 = 196608;
  v10[1] = 196609;
  v11 = 4i64;
  v10[2] = 65538;
  v10[3] = 131073;
  v10[4] = 131077;
  v10[5] = 327686;
  v10[6] = 393221;
  v10[7] = 393220;
  v10[8] = 262151;
  v10[9] = 458756;
  v10[10] = 458752;
  v10[11] = 3;
  v10[12] = 458755;
  v10[13] = 458754;
  v10[14] = 131078;
  v23.objectName = "R_DecalVolume_InitDebugDrawOBB VB";
  v24 = _ymm;
  v12 = v23;
  v10[15] = 4;
  v10[16] = 5;
  v10[17] = 327681;
  *(_OWORD *)v25.m256i_i8 = _xmm;
  v23 = v12;
  v13 = (float *)&v24.m256i_i32[2];
  v14 = (float *)((char *)R_AllocStaticVertexBuffer(&s_decalVolumes.obbVerticesAxes, 128, &v23) + 4);
  do
  {
    v15 = *((unsigned int *)v13 - 2);
    v16 = *v13;
    v17 = *(v13 - 1);
    v18 = v15;
    *(float *)&v18 = fsqrt((float)((float)(*(float *)&v15 * *(float *)&v15) + (float)(v17 * v17)) + (float)(v16 * v16));
    _XMM3 = v18;
    __asm
    {
      vcmpless xmm0, xmm3, xmm8
      vblendvps xmm0, xmm3, xmm7, xmm0
    }
    *(float *)&v23.zoneName = (float)(1.0 / *(float *)&_XMM0) * *(float *)&v15;
    *(v14 - 1) = *(float *)&v15;
    *v14 = v17;
    v14[1] = v16;
    *((_QWORD *)v14 + 1) = 0i64;
    *(float *)&v23.objectName = (float)(1.0 / *(float *)&_XMM0) * v16;
    *((float *)&v23.zoneName + 1) = (float)(1.0 / *(float *)&_XMM0) * v17;
    *((_QWORD *)v14 + 2) = 0i64;
    *((PackedUnitVec *)v14 + 6) = Vec3PackUnitVec((const vec3_t *)&v23);
    v14 += 8;
    v13 += 3;
    --v11;
  }
  while ( v11 );
  v23.zoneName = (char *)&queryFormat.fmt + 3;
  v23.objectName = "R_DecalVolume_InitDebugDrawOBB IB";
  v22 = R_AllocStaticIndexBuffer(&s_decalVolumes.obbIndicesAxes, 12, &v23);
  *v22 = 0x20000;
  v22[1] = 1;
  v22[2] = 65539;
  R_UnlockGfxImmediateContext();
}

/*
==============
R_DecalVolume_InitStagingRing
==============
*/
__int64 R_DecalVolume_InitStagingRing()
{
  unsigned int *(*cellsUsedStaging)[5]; 
  __int64 v1; 
  DecalVolumeStreamingInfoGPU **maskLodsStaging; 
  DecalVolumeStreamingInfoGPU *v3; 
  DecalVolumeStreamingInfoGPU *v4; 
  DecalVolumeStreamingInfoGPU *v5; 
  DecalVolumeStreamingInfoGPU *v6; 
  DecalVolumeStreamingInfoGPU *v7; 
  DecalVolumeStreamingInfoGPU *v8; 
  __int64 v9; 
  unsigned int *v10; 
  __int64 v11; 
  unsigned int *materialInfoCountCpu; 
  DecalVolumeStreamingInfoGPU **maskLodsCpu; 
  unsigned int (*visibleDecalCountsCpu)[2]; 
  DecalVolumeStreamingInfoGPU *v15; 
  __int64 result; 
  bool v17; 

  *(_QWORD *)&s_decalVolumes.stagingRing.writeIndex = 2i64;
  *(_QWORD *)&s_decalVolumes.stagingRing.debugWriteIndex = 2i64;
  v17 = PMem_AuxAllocationsEnabled();
  if ( v17 )
    PMem_PopAuxAllocations();
  cellsUsedStaging = s_decalVolumes.stagingRing.cellsUsedStaging;
  v1 = 3i64;
  maskLodsStaging = s_decalVolumes.stagingRing.maskLodsStaging;
  do
  {
    v3 = (DecalVolumeStreamingInfoGPU *)PMem_Alloc(0x3000ui64, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "material lod ring");
    *(maskLodsStaging - 3) = v3;
    memset_0(v3, 0, 0x3000ui64);
    v4 = (DecalVolumeStreamingInfoGPU *)PMem_Alloc(0xC00ui64, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "mask lod ring");
    *maskLodsStaging = v4;
    memset_0(v4, 0, 0xC00ui64);
    v5 = (DecalVolumeStreamingInfoGPU *)PMem_Alloc(0x540ui64, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "material debug info ring");
    maskLodsStaging[7] = v5;
    memset_0(v5, 0, 0x540ui64);
    v6 = (DecalVolumeStreamingInfoGPU *)PMem_Alloc(0x10ui64, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "material debug info count");
    maskLodsStaging[10] = v6;
    *v6 = 0i64;
    v6[1] = 0i64;
    v7 = (DecalVolumeStreamingInfoGPU *)PMem_Alloc(0x10ui64, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "visible decal count staging");
    maskLodsStaging[13] = v7;
    *v7 = 0i64;
    v7[1] = 0i64;
    v8 = (DecalVolumeStreamingInfoGPU *)PMem_Alloc(0x20ui64, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "decal indices count staging");
    maskLodsStaging[16] = v8;
    *v8 = 0i64;
    v8[1] = 0i64;
    v9 = 5i64;
    v8[2] = 0i64;
    v8[3] = 0i64;
    do
    {
      v10 = (unsigned int *)PMem_Alloc(0x20ui64, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "cellsUsedStaging");
      (*cellsUsedStaging)[0] = v10;
      cellsUsedStaging = (unsigned int *(*)[5])((char *)cellsUsedStaging + 8);
      *(_QWORD *)v10 = 0i64;
      *((_QWORD *)v10 + 1) = 0i64;
      *((_QWORD *)v10 + 2) = 0i64;
      *((_QWORD *)v10 + 3) = 0i64;
      --v9;
    }
    while ( v9 );
    ++maskLodsStaging;
    --v1;
  }
  while ( v1 );
  v11 = 2i64;
  if ( v17 )
    PMem_PushAuxAllocations();
  materialInfoCountCpu = s_decalVolumes.stagingRing.materialInfoCountCpu;
  maskLodsCpu = s_decalVolumes.stagingRing.maskLodsCpu;
  visibleDecalCountsCpu = s_decalVolumes.stagingRing.visibleDecalCountsCpu;
  do
  {
    *(maskLodsCpu - 2) = (DecalVolumeStreamingInfoGPU *)PMem_Alloc(0x3000ui64, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "material lod ring");
    *maskLodsCpu = (DecalVolumeStreamingInfoGPU *)PMem_Alloc(0xC00ui64, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "mask lod ring");
    memset_0(*(maskLodsCpu - 2), 0, 0x3000ui64);
    memset_0(*maskLodsCpu, 0, 0xC00ui64);
    v15 = (DecalVolumeStreamingInfoGPU *)PMem_Alloc(0x540ui64, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "material debug info ring");
    maskLodsCpu[29] = v15;
    memset_0(v15, 0, 0x540ui64);
    result = 0i64;
    *materialInfoCountCpu = 0;
    *(_QWORD *)visibleDecalCountsCpu++ = 0i64;
    ++maskLodsCpu;
    ++materialInfoCountCpu;
    --v11;
  }
  while ( v11 );
  return result;
}

/*
==============
R_DecalVolume_PipelineClearBuffers
==============
*/
void R_DecalVolume_PipelineClearBuffers(ComputeCmdBufState *state, unsigned int frame, const GfxWrappedRWBuffer *staticDecalIndices, const GfxWrappedRWBuffer *markDecalIndices, const GfxWrappedRWBuffer *cullDecalsCount, const GfxWrappedRWBuffer *materialLods, const GfxWrappedRWBuffer *maskLodsBuffer, const GfxWrappedRWBuffer *decalCount)
{
  int v11; 
  unsigned int v12; 

  v11 = s_decalVolumes.intInInstanceCount[frame];
  if ( v11 )
  {
    v12 = Int32_RoundUpToPowerOf2((v11 + 1023) & 0xFFFFFC00);
    R_DecalVolume_ClearBuffer(state, staticDecalIndices, 4 * v12, 0xFFFFFFFF);
  }
  R_DecalVolume_ClearBuffer(state, markDecalIndices, 0x1000u, 0xFFFFFFFF);
  R_DecalVolume_ClearBuffer(state, cullDecalsCount, 0x10u, 0);
  R_DecalVolume_ClearBuffer(state, materialLods, 0x3000u, 0);
  R_DecalVolume_ClearBuffer(state, maskLodsBuffer, 0xC00u, 0);
  if ( decalCount )
    R_DecalVolume_ClearBuffer(state, decalCount, 4u, 0);
}

/*
==============
R_DecalVolume_PipelineClearMaterialInfoBuffers
==============
*/
void R_DecalVolume_PipelineClearMaterialInfoBuffers(ComputeCmdBufState *state, const GfxWrappedRWBuffer *materialDebugInfo, const GfxWrappedRWBuffer *materialDebugInfoCount)
{
  R_DecalVolume_ClearBuffer(state, materialDebugInfo, 0x540u, 0);
  R_DecalVolume_ClearBuffer(state, materialDebugInfoCount, 0x10u, 0);
}

/*
==============
R_DecalVolume_PipelineCopyDebugInfo
==============
*/
void R_DecalVolume_PipelineCopyDebugInfo(ComputeCmdBufState *state, unsigned int frame, const GfxWrappedBuffer *cullDecalsCount, const GfxWrappedBuffer *materialInfo, const GfxWrappedBuffer *materialInfoCount, const GfxWrappedBuffer *decalIndicesCounts, const GfxWrappedBuffer **cellIndirectionCount)
{
  unsigned int v7; 
  __int64 v8; 
  __int64 v9; 
  int v12; 
  __int64 v13; 
  __int64 v14; 
  int v15; 
  unsigned int *v16; 
  __int64 v17; 
  unsigned int *v18; 
  const GfxWrappedBuffer *v19; 
  int v20; 
  unsigned int *v21; 
  __int64 v22; 
  unsigned int v23; 
  R_DecalVolume_PipelineCopyDebugInfo::__l2::MaterialDebugInfoComparer v24; 

  v7 = 0;
  v8 = frame;
  v9 = frame;
  if ( r_decalVolumes->current.enabled )
    v12 = s_decalVolumes.intCollectionsCount[frame] + s_decalVolumes.intVolumesCount[frame] + s_decalVolumes.particleMarksCount[frame];
  else
    v12 = 0;
  if ( v12 )
  {
    R_MemCpy(state, s_decalVolumes.stagingRing.materialInfoStaging[s_decalVolumes.stagingRing.debugWriteIndex], materialInfo->data, 0x540ui64, 1);
    R_MemCpy(state, s_decalVolumes.stagingRing.materialInfoCountStaging[s_decalVolumes.stagingRing.debugWriteIndex], materialInfoCount->data, 0x10ui64, 1);
    if ( r_decalVolumesShowMaterialLock->current.enabled )
    {
      v13 = 1i64;
      if ( (_DWORD)v8 )
        v13 = (unsigned int)(v8 - 1);
      v14 = (unsigned int)v13;
      memcpy_0(s_decalVolumes.stagingRing.materialInfoCpu[v9], s_decalVolumes.stagingRing.materialInfoCpu[v13], 0x540ui64);
      s_decalVolumes.stagingRing.materialInfoCountCpu[v9] = s_decalVolumes.stagingRing.materialInfoCountCpu[v14];
    }
    else
    {
      memcpy_0(s_decalVolumes.stagingRing.materialInfoCpu[v8], s_decalVolumes.stagingRing.materialInfoStaging[s_decalVolumes.stagingRing.debugReadIndex], 0x540ui64);
      v15 = *s_decalVolumes.stagingRing.materialInfoCountStaging[s_decalVolumes.stagingRing.debugReadIndex];
      if ( v15 > 8 )
        v15 = 8;
      s_decalVolumes.stagingRing.materialInfoCountCpu[v8] = v15;
    }
    R_MemCpy(state, s_decalVolumes.stagingRing.visibleDecalCountsStaging[s_decalVolumes.stagingRing.debugWriteIndex], cullDecalsCount->data, 0x10ui64, 1);
    *(double *)&s_decalVolumes.stagingRing.visibleDecalCountsCpu[v9][0] = *(double *)s_decalVolumes.stagingRing.visibleDecalCountsStaging[s_decalVolumes.stagingRing.debugReadIndex];
    R_MemCpy(state, s_decalVolumes.stagingRing.decalIndicesCountsStaging[s_decalVolumes.stagingRing.debugWriteIndex], decalIndicesCounts->data, 0x20ui64, 1);
    v16 = s_decalVolumes.stagingRing.decalIndicesCountsCpu[v9];
    v17 = 0i64;
    v18 = s_decalVolumes.stagingRing.decalIndicesCountsStaging[s_decalVolumes.stagingRing.debugReadIndex];
    *(_OWORD *)v16 = *(_OWORD *)v18;
    *((double *)v16 + 2) = *((double *)v18 + 2);
    do
    {
      v19 = cellIndirectionCount[v17];
      if ( v19 )
      {
        R_MemCpy(state, (&(&s_decalVolumes.stagingRing.cellsUsedStaging[0][4 * s_decalVolumes.stagingRing.debugWriteIndex])[v17])[s_decalVolumes.stagingRing.debugWriteIndex], v19->data, 0x20ui64, 1);
        v20 = 7 * v7;
        v21 = (&(&s_decalVolumes.stagingRing.cellsUsedStaging[0][4 * s_decalVolumes.stagingRing.debugReadIndex])[v17])[s_decalVolumes.stagingRing.debugReadIndex];
        s_decalVolumes.stagingRing.cellsUsedCpu[v9][7 * v7] = *v21;
        s_decalVolumes.stagingRing.cellsUsedCpu[v9][v20 + 1] = v21[1];
        s_decalVolumes.stagingRing.cellsUsedCpu[v9][v20 + 2] = v21[2];
        s_decalVolumes.stagingRing.cellsUsedCpu[v9][v20 + 3] = v21[3];
        s_decalVolumes.stagingRing.cellsUsedCpu[v9][v20 + 4] = v21[4];
        s_decalVolumes.stagingRing.cellsUsedCpu[v9][v20 + 5] = v21[5];
        s_decalVolumes.stagingRing.cellsUsedCpu[v9][7 * v7 + 6] = v21[6];
      }
      ++v7;
      ++v17;
    }
    while ( v7 < 5 );
    s_decalVolumes.stagingRing.debugWriteIndex = (s_decalVolumes.stagingRing.debugWriteIndex + 1) % 3;
    s_decalVolumes.stagingRing.debugReadIndex = (s_decalVolumes.stagingRing.debugReadIndex + 1) % 3;
    v22 = s_decalVolumes.stagingRing.materialInfoCountCpu[v9];
    if ( (unsigned int)v22 > 8 )
    {
      v23 = s_decalVolumes.stagingRing.materialInfoCountCpu[v9];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 8646, ASSERT_TYPE_ASSERT, "( ( materialCount <= 8 ) )", "( materialCount ) = %u", v23) )
        __debugbreak();
    }
    std::_Sort_unchecked_MaterialDebugInfo____R_DecalVolume_PipelineCopyDebugInfo_::_2_::MaterialDebugInfoComparer_(s_decalVolumes.stagingRing.materialInfoCpu[v9], &s_decalVolumes.stagingRing.materialInfoCpu[v9][v22], 168 * v22 / 168, v24);
  }
}

/*
==============
R_DecalVolume_PipelineCopyLODData
==============
*/
void R_DecalVolume_PipelineCopyLODData(ComputeCmdBufState *state, unsigned int frame, const GfxWrappedBuffer *materialLods, const GfxWrappedBuffer *maskLods)
{
  __int64 v5; 
  int v7; 
  DecalVolumeStreamingInfoGPU *v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  __int64 v13; 
  unsigned int *p_distanceMetric; 
  bool v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  unsigned int *v22; 
  __int64 v23; 

  v5 = frame;
  if ( r_decalVolumes->current.enabled )
    v7 = s_decalVolumes.intCollectionsCount[frame] + s_decalVolumes.intVolumesCount[frame] + s_decalVolumes.particleMarksCount[frame];
  else
    v7 = 0;
  if ( !v7 )
  {
    *(_QWORD *)&s_decalVolumes.stagingRing.visibleDecalCountsCpu[frame][0] = 0i64;
    s_decalVolumes.stagingRing.streamInfoMaterialCountCpu[frame] = 0;
    s_decalVolumes.stagingRing.streamInfoMaskCountCpu[frame] = 0;
    memset_0(s_decalVolumes.stagingRing.materialLodsCpu[frame], 0, 0x3000ui64);
    v8 = s_decalVolumes.stagingRing.maskLodsCpu[v5];
LABEL_14:
    memset_0(v8, 0, 0xC00ui64);
    return;
  }
  R_MemCpy(state, s_decalVolumes.stagingRing.materialLodsStaging[s_decalVolumes.stagingRing.writeIndex], materialLods->data, 0x3000ui64, 0);
  R_MemCpy(state, s_decalVolumes.stagingRing.maskLodsStaging[s_decalVolumes.stagingRing.writeIndex], maskLods->data, 0xC00ui64, 0);
  memcpy_0(s_decalVolumes.stagingRing.materialLodsCpu[v5], s_decalVolumes.stagingRing.materialLodsStaging[s_decalVolumes.stagingRing.readIndex], 0x3000ui64);
  memcpy_0(s_decalVolumes.stagingRing.maskLodsCpu[v5], s_decalVolumes.stagingRing.maskLodsStaging[s_decalVolumes.stagingRing.readIndex], 0xC00ui64);
  s_decalVolumes.stagingRing.writeIndex = (s_decalVolumes.stagingRing.writeIndex + 1) % 3;
  s_decalVolumes.stagingRing.readIndex = (s_decalVolumes.stagingRing.readIndex + 1) % 3;
  if ( r_decalVolumesDebug->current.integer > 0 )
  {
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v13 = 384i64;
    p_distanceMetric = &s_decalVolumes.stagingRing.materialLodsCpu[v5][1].distanceMetric;
    do
    {
      v15 = *(p_distanceMetric - 2) == 0;
      p_distanceMetric += 8;
      v9 += !v15;
      v12 += *(p_distanceMetric - 8) != 0;
      v11 += *(p_distanceMetric - 6) != 0;
      v10 += *(p_distanceMetric - 4) != 0;
      --v13;
    }
    while ( v13 );
    v16 = v10 + v11;
    v17 = 0;
    v18 = v12 + v16;
    v19 = 0;
    v20 = 0;
    s_decalVolumes.stagingRing.streamInfoMaterialCountCpu[v5] = v18 + v9;
    v21 = 0;
    v22 = &s_decalVolumes.stagingRing.maskLodsCpu[v5][1].distanceMetric;
    v23 = 96i64;
    do
    {
      v15 = *(v22 - 2) == 0;
      v22 += 8;
      v21 += !v15;
      v20 += *(v22 - 8) != 0;
      v19 += *(v22 - 6) != 0;
      v17 += *(v22 - 4) != 0;
      --v23;
    }
    while ( v23 );
    s_decalVolumes.stagingRing.streamInfoMaskCountCpu[v5] = v20 + v17 + v19 + v21;
  }
  if ( s_decalVolumes.imageAtlas.myChangesLODDelay > 0 )
  {
    --s_decalVolumes.imageAtlas.myChangesLODDelay;
    memset_0(s_decalVolumes.stagingRing.materialLodsCpu[v5], 0, 0x3000ui64);
    v8 = s_decalVolumes.stagingRing.maskLodsCpu[v5];
    goto LABEL_14;
  }
}

/*
==============
R_DecalVolume_PipelineCullingPart0
==============
*/
void R_DecalVolume_PipelineCullingPart0(ComputeCmdBufState *state, const GfxViewInfo *viewInfo, unsigned int frame, unsigned int collectionCount, const DecalVolumePiplineCullingPart0ResourcePtrs *res)
{
  const GfxViewInfo *v6; 
  bitarray<1536> *v9; 
  unsigned int v10; 
  __int64 v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 
  __int64 v15; 
  __int64 v16; 
  unsigned int v17; 
  int v18; 
  __int64 v19; 
  unsigned int v20; 
  unsigned int initialCounts; 
  __int64 v23; 
  __int64 v24; 
  GfxShaderBufferView *views; 
  GfxShaderBufferView *p_view; 
  const GfxViewInfo *v28; 
  R_RT_ColorHandle v29; 
  const GfxBackEndData *v30; 
  DecalVolumeCsConstants data; 

  v6 = viewInfo;
  v28 = viewInfo;
  R_SetComputeShader(state, rgp.decalVolumeCollections);
  views = &s_decalVolumes.staticCollectionWorkgroups[0].view + 2 * frame;
  R_SetComputeViews(state, 0, 1, (const GfxShaderBufferView *const *)&views);
  views = (GfxShaderBufferView *)&res->cullDecalsCountBuffer->rwView;
  R_SetComputeRWViewsWithCounters(state, 1, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
  views = (GfxShaderBufferView *)&res->staticDecals->rwView;
  R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
  views = (GfxShaderBufferView *)&res->staticDecalsMapIndex->rwView;
  R_SetComputeRWViewsWithCounters(state, 2, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
  v30 = v6->input.data;
  v9 = &s_decalVolumes.transientZonesToProcess[frame];
  LODWORD(views) = 0;
  v10 = 0;
  LODWORD(v11) = 0;
  v12 = frame;
  v13 = v9->array[0];
  while ( v13 )
  {
LABEL_6:
    v14 = __lzcnt(v13);
    v15 = v14 + 32 * (_DWORD)v11;
    if ( v14 >= 0x20 )
    {
      LODWORD(v24) = 32;
      LODWORD(v23) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v23, v24) )
        __debugbreak();
    }
    if ( (v13 & (0x80000000 >> v14)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v13 &= ~(0x80000000 >> v14);
    v16 = (__int64)&v30->transientDrawContext.decalVolumes[v15];
    if ( !**(_DWORD **)v16 )
    {
      LODWORD(v23) = v15;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 8117, ASSERT_TYPE_SANITY, "( ( data->transientDrawContext.decalVolumes[iZone]->decalVolumeCount > 0 ) )", "( static_cast<int>( iZone ) ) = %i", v23) )
        __debugbreak();
    }
    v12 = frame;
    v17 = s_decalVolumes.workgroupCountPerTransientZoneCPU[frame][v15];
    if ( v17 )
    {
      p_view = (GfxShaderBufferView *)(*(_QWORD *)v16 + 24i64);
      R_SetComputeViews(state, 3, 1, (const GfxShaderBufferView *const *)&p_view);
      v6 = v28;
      v29.m_surfaceID = 0;
      v29.m_tracking.m_allocCounter = 0;
      __asm { vpxor   xmm0, xmm0, xmm0 }
      *(_OWORD *)&v29.m_tracking.m_name = _XMM0;
      initialCounts = v15;
      v18 = (int)views;
      RB_DecalVolume_PreparePipelineConstants(v28, frame, (unsigned int)views, v17, initialCounts, &v29, &data);
      R_UploadAndSetComputeConstants(state, 0, &data, 0x2F0u, NULL);
      v10 = v17 + v18;
      LODWORD(views) = v10;
      R_Dispatch(state, (v17 + 3) >> 2, 1u, 1u);
      v12 = frame;
    }
    else
    {
      v10 = (unsigned int)views;
      v6 = v28;
    }
  }
  while ( 1 )
  {
    v11 = (unsigned int)(v11 + 1);
    if ( (unsigned int)v11 >= 0x30 )
      break;
    v13 = v9->array[v11];
    if ( v13 )
      goto LABEL_6;
  }
  v19 = v12;
  if ( s_decalVolumes.frameDynamicDecalVolumesWorkgroupCount[v12] )
  {
    p_view = &s_decalVolumes.dynamicDecalsBuffer.view;
    R_SetComputeViews(state, 3, 1, (const GfxShaderBufferView *const *)&p_view);
    v20 = s_decalVolumes.frameDynamicDecalVolumesWorkgroupCount[v19];
    v29.m_surfaceID = 0;
    v29.m_tracking.m_allocCounter = 0;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&v29.m_tracking.m_name = _XMM0;
    RB_DecalVolume_PreparePipelineConstants(v6, frame, v10, v20, 0, &v29, &data);
    R_UploadAndSetComputeConstants(state, 0, &data, 0x2F0u, NULL);
    R_Dispatch(state, (v20 + 3) >> 2, 1u, 1u);
  }
}

/*
==============
R_DecalVolume_PipelineCullingPart0IndirectArgs
==============
*/
void R_DecalVolume_PipelineCullingPart0IndirectArgs(ComputeCmdBufState *state, const GfxViewInfo *viewInfo, unsigned int frame, const GfxWrappedBuffer *cullDecalsCount, const GfxWrappedRWBuffer *collectionsIndirectArgs)
{
  GfxShaderBufferView *views[2]; 
  R_RT_ColorHandle v12; 
  DecalVolumeCsConstants data; 

  R_SetComputeShader(state, rgp.decalVolumeCollectionsIndirectArgs);
  views[0] = &cullDecalsCount->view;
  R_SetComputeViews(state, 1, 1, (const GfxShaderBufferView *const *)views);
  views[0] = (GfxShaderBufferView *)&collectionsIndirectArgs->rwView;
  R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)views, NULL);
  v12.m_surfaceID = 0;
  v12.m_tracking.m_allocCounter = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v12.m_tracking.m_name = _XMM0;
  RB_DecalVolume_PreparePipelineConstants(viewInfo, frame, 0, 0, 0, &v12, &data);
  R_UploadAndSetComputeConstants(state, 0, &data, 0x2F0u, NULL);
  R_Dispatch(state, 1u, 1u, 1u);
}

/*
==============
R_DecalVolume_PipelineCullingPart1
==============
*/
void R_DecalVolume_PipelineCullingPart1(ComputeCmdBufState *state, const GfxViewInfo *viewInfo, unsigned int frame, unsigned int decalCount, const DecalVolumePiplineCullingPart1ResourcePtrs *res)
{
  __int64 v7; 
  const R_RT_Surface *Surface; 
  GfxTexture *textures[2]; 
  R_RT_ColorHandle occlusionTexture; 
  DecalVolumeCsConstants data; 

  v7 = frame;
  if ( R_RT_Handle::IsValid(&res->occlusionTexture) )
  {
    R_SetComputeShader(state, rgp.decalVolumeCullWithOcclusion);
    occlusionTexture = res->occlusionTexture;
    RB_DecalVolume_PreparePipelineConstants(viewInfo, v7, 0, 0, 0, &occlusionTexture, &data);
    R_UploadAndSetComputeConstants(state, 0, &data, 0x2F0u, NULL);
    Surface = R_RT_Handle::GetSurface(&res->occlusionTexture);
    textures[0] = (GfxTexture *)R_Texture_GetResident(Surface->m_image.m_base.textureId);
    R_SetComputeTextures(state, 12, 1, (const GfxTexture *const *)textures);
  }
  else
  {
    R_SetComputeShader(state, rgp.decalVolumeCull);
    occlusionTexture.m_surfaceID = 0;
    occlusionTexture.m_tracking.m_allocCounter = 0;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&occlusionTexture.m_tracking.m_name = _XMM0;
    RB_DecalVolume_PreparePipelineConstants(viewInfo, v7, 0, 0, 0, &occlusionTexture, &data);
    R_UploadAndSetComputeConstants(state, 0, &data, 0x2F0u, NULL);
  }
  textures[0] = (GfxTexture *)&s_decalVolumes.decalMaterialsBuffer[v7].view;
  R_SetComputeViews(state, 9, 1, (const GfxShaderBufferView *const *)textures);
  textures[0] = (GfxTexture *)&s_decalVolumes.decalMasksBuffer[v7].view;
  R_SetComputeViews(state, 2, 1, (const GfxShaderBufferView *const *)textures);
  textures[0] = (GfxTexture *)&rgp.world->draw.materialAndMaskIndirectionBuffer.view;
  R_SetComputeViews(state, 11, 1, (const GfxShaderBufferView *const *)textures);
  textures[0] = (GfxTexture *)&res->staticDecals->view;
  R_SetComputeViews(state, 3, 1, (const GfxShaderBufferView *const *)textures);
  textures[0] = (GfxTexture *)&res->staticDecalsMapIndex->view;
  R_SetComputeViews(state, 0, 1, (const GfxShaderBufferView *const *)textures);
  textures[0] = (GfxTexture *)&s_decalVolumes.impactMarkDecalsBuffer[v7].view;
  R_SetComputeViews(state, 7, 1, (const GfxShaderBufferView *const *)textures);
  textures[0] = (GfxTexture *)&res->decalsCountBuffer->rwView;
  R_SetComputeRWViewsWithCounters(state, 1, 1, (const GfxShaderBufferRWView *const *)textures, NULL);
  textures[0] = (GfxTexture *)&res->materialLods->rwView;
  R_SetComputeRWViewsWithCounters(state, 3, 1, (const GfxShaderBufferRWView *const *)textures, NULL);
  textures[0] = (GfxTexture *)&res->maskLods->rwView;
  R_SetComputeRWViewsWithCounters(state, 4, 1, (const GfxShaderBufferRWView *const *)textures, NULL);
  textures[0] = (GfxTexture *)&res->cullStaticIndicesBuffer->rwView;
  R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)textures, NULL);
  textures[0] = (GfxTexture *)&res->cullImpactMarkIndicesBuffer->rwView;
  R_SetComputeRWViewsWithCounters(state, 2, 1, (const GfxShaderBufferRWView *const *)textures, NULL);
  R_DispatchIndirect(state, res->collectionsIndirectArgs->buffer, 0x40u);
}

/*
==============
R_DecalVolume_PipelineCullingPart2
==============
*/
void R_DecalVolume_PipelineCullingPart2(ComputeCmdBufState *state, const GfxViewInfo *viewInfo, unsigned int frame, const DecalVolumePiplineCullingPart2ResourcePtrs *res)
{
  int v7; 
  unsigned int v8; 

  v7 = s_decalVolumes.intInInstanceCount[frame];
  if ( v7 )
  {
    v8 = Int32_RoundUpToPowerOf2((v7 + 1023) & 0xFFFFFC00);
    R_GPUSorter_SortBitonic(state, res->cullStaticIndicesBuffer, v8, 0, viewInfo->input.data->smpFrame, GFX_GPU_SORTER_DATA_U32, GFX_GPU_SORTER_DIRECTON_ASCENDING);
  }
  R_GPUSorter_SortBitonic(state, res->cullMarkIndicesBuffer, 0x400u, 0, viewInfo->input.data->smpFrame, GFX_GPU_SORTER_DATA_U32, GFX_GPU_SORTER_DIRECTON_ASCENDING);
}

/*
==============
R_DecalVolume_PipelineGenerateClusteringData
==============
*/
void R_DecalVolume_PipelineGenerateClusteringData(ComputeCmdBufState *state, const GfxViewInfo *viewInfo, unsigned int frame, const DecalVolumePiplineGenerateResourcePtrs *res)
{
  GfxShaderBufferView *views[2]; 
  R_RT_ColorHandle v11; 
  DecalVolumeCsConstants data; 

  R_SetComputeShader(state, rgp.decalVolumeGenerateClusterData);
  v11.m_surfaceID = 0;
  v11.m_tracking.m_allocCounter = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v11.m_tracking.m_name = _XMM0;
  RB_DecalVolume_PreparePipelineConstants(viewInfo, frame, 0, 0, 0, &v11, &data);
  R_UploadAndSetComputeConstants(state, 0, &data, 0x2F0u, NULL);
  views[0] = &res->staticDecals->view;
  R_SetComputeViews(state, 3, 1, (const GfxShaderBufferView *const *)views);
  views[0] = &s_decalVolumes.impactMarkDecalsBuffer[0].view + 2 * frame;
  R_SetComputeViews(state, 7, 1, (const GfxShaderBufferView *const *)views);
  views[0] = &res->cullStaticIndices->view;
  R_SetComputeViews(state, 6, 1, (const GfxShaderBufferView *const *)views);
  views[0] = &res->cullImpactMarkIndices->view;
  R_SetComputeViews(state, 8, 1, (const GfxShaderBufferView *const *)views);
  views[0] = &res->cullDecalsCount->view;
  R_SetComputeViews(state, 1, 1, (const GfxShaderBufferView *const *)views);
  views[0] = (GfxShaderBufferView *)&res->outputData->rwView;
  R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)views, NULL);
  R_DispatchIndirect(state, res->indirectArgs->buffer, 0);
}

/*
==============
R_DecalVolume_PipelineGenerateDrawData
==============
*/
void R_DecalVolume_PipelineGenerateDrawData(ComputeCmdBufState *state, const GfxViewInfo *viewInfo, unsigned int frame, const DecalVolumePiplineGenerateResourcePtrs *res)
{
  __int64 v10; 
  GfxShaderBufferView *views[2]; 
  R_RT_ColorHandle v12; 
  DecalVolumeCsConstants data; 

  R_SetComputeShader(state, rgp.decalVolumeGenerateDrawData);
  v12.m_surfaceID = 0;
  v12.m_tracking.m_allocCounter = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v12.m_tracking.m_name = _XMM0;
  RB_DecalVolume_PreparePipelineConstants(viewInfo, frame, 0, 0, 0, &v12, &data);
  R_UploadAndSetComputeConstants(state, 0, &data, 0x2F0u, NULL);
  v10 = frame;
  views[0] = &s_decalVolumes.proxyCoordsBuffer[v10].view;
  R_SetComputeViews(state, 0, 1, (const GfxShaderBufferView *const *)views);
  views[0] = &s_decalVolumes.decalMaterialsBuffer[v10].view;
  R_SetComputeViews(state, 9, 1, (const GfxShaderBufferView *const *)views);
  views[0] = &s_decalVolumes.decalMasksBuffer[v10].view;
  R_SetComputeViews(state, 2, 1, (const GfxShaderBufferView *const *)views);
  views[0] = &rgp.world->draw.materialAndMaskIndirectionBuffer.view;
  R_SetComputeViews(state, 11, 1, (const GfxShaderBufferView *const *)views);
  views[0] = &res->staticDecals->view;
  R_SetComputeViews(state, 3, 1, (const GfxShaderBufferView *const *)views);
  views[0] = &s_decalVolumes.impactMarkDecalsBuffer[v10].view;
  R_SetComputeViews(state, 7, 1, (const GfxShaderBufferView *const *)views);
  views[0] = &res->cullStaticIndices->view;
  R_SetComputeViews(state, 6, 1, (const GfxShaderBufferView *const *)views);
  views[0] = &res->cullImpactMarkIndices->view;
  R_SetComputeViews(state, 8, 1, (const GfxShaderBufferView *const *)views);
  views[0] = &res->cullDecalsCount->view;
  R_SetComputeViews(state, 1, 1, (const GfxShaderBufferView *const *)views);
  views[0] = (GfxShaderBufferView *)&res->outputData->rwView;
  R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)views, NULL);
  R_DispatchIndirect(state, res->indirectArgs->buffer, 0);
}

/*
==============
R_DecalVolume_PipelineGenerateMaterialDebugInfo
==============
*/
void R_DecalVolume_PipelineGenerateMaterialDebugInfo(ComputeCmdBufState *state, const GfxViewInfo *viewInfo, unsigned int frame, const DecalVolumePiplineMaterialDebugInfoResourcePtrs *res)
{
  __int64 v10; 
  GfxShaderBufferView *views[2]; 
  R_RT_ColorHandle v12; 
  DecalVolumeCsConstants data; 

  R_SetComputeShader(state, rgp.decalVolumeMaterialDebugInfo);
  v12.m_surfaceID = 0;
  v12.m_tracking.m_allocCounter = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v12.m_tracking.m_name = _XMM0;
  RB_DecalVolume_PreparePipelineConstants(viewInfo, frame, 0, 0, 0, &v12, &data);
  R_UploadAndSetComputeConstants(state, 0, &data, 0x2F0u, NULL);
  v10 = frame;
  views[0] = &s_decalVolumes.proxyCoordsBuffer[v10].view;
  R_SetComputeViews(state, 0, 1, (const GfxShaderBufferView *const *)views);
  views[0] = &s_decalVolumes.decalMaterialsBuffer[v10].view;
  R_SetComputeViews(state, 9, 1, (const GfxShaderBufferView *const *)views);
  views[0] = &s_decalVolumes.decalMasksBuffer[v10].view;
  R_SetComputeViews(state, 2, 1, (const GfxShaderBufferView *const *)views);
  views[0] = &rgp.world->draw.materialAndMaskIndirectionBuffer.view;
  R_SetComputeViews(state, 11, 1, (const GfxShaderBufferView *const *)views);
  views[0] = &res->staticDecals->view;
  R_SetComputeViews(state, 3, 1, (const GfxShaderBufferView *const *)views);
  views[0] = &res->staticDecalsMapIndex->view;
  R_SetComputeViews(state, 0, 1, (const GfxShaderBufferView *const *)views);
  views[0] = &s_decalVolumes.impactMarkDecalsBuffer[v10].view;
  R_SetComputeViews(state, 7, 1, (const GfxShaderBufferView *const *)views);
  views[0] = &res->cullStaticIndices->view;
  R_SetComputeViews(state, 6, 1, (const GfxShaderBufferView *const *)views);
  views[0] = &res->cullImpactMarkIndices->view;
  R_SetComputeViews(state, 8, 1, (const GfxShaderBufferView *const *)views);
  views[0] = &res->cullDecalsCount->view;
  R_SetComputeViews(state, 1, 1, (const GfxShaderBufferView *const *)views);
  views[0] = (GfxShaderBufferView *)&res->materialDebugInfo->rwView;
  R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)views, NULL);
  views[0] = (GfxShaderBufferView *)&res->materialDebugInfoCount->rwView;
  R_SetComputeRWViewsWithCounters(state, 1, 1, (const GfxShaderBufferRWView *const *)views, NULL);
  views[0] = (GfxShaderBufferView *)&res->decalVolumesDebug->rwView;
  R_SetComputeRWViewsWithCounters(state, 2, 1, (const GfxShaderBufferRWView *const *)views, NULL);
  R_DispatchIndirect(state, res->indirectArgs->buffer, 0);
}

/*
==============
R_DecalVolume_PipelineIndirectArgs
==============
*/
void R_DecalVolume_PipelineIndirectArgs(ComputeCmdBufState *state, const GfxWrappedBuffer *cullDecalsCount, const GfxWrappedRWBuffer *decalClusteringDataCount, const GfxWrappedRWBuffer *cullIndirectArgs)
{
  GfxShaderBufferView *views; 

  R_SetComputeShader(state, rgp.decalVolumeCullIndirectArgs);
  views = &cullDecalsCount->view;
  R_SetComputeViews(state, 1, 1, (const GfxShaderBufferView *const *)&views);
  views = (GfxShaderBufferView *)&decalClusteringDataCount->rwView;
  R_SetComputeRWViewsWithCounters(state, 1, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
  views = (GfxShaderBufferView *)&cullIndirectArgs->rwView;
  R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
  R_Dispatch(state, 1u, 1u, 1u);
}

/*
==============
R_DecalVolume_PipelineStreamingData
==============
*/
void R_DecalVolume_PipelineStreamingData(ComputeCmdBufState *state, const GfxViewInfo *viewInfo, unsigned int frame, unsigned int decalCount, const DecalVolumePiplineStreamingDataResourcePtrs *res)
{
  __int64 v7; 
  GfxTextureId textureId; 
  GfxTexture *textures; 
  R_RT_Handle v10; 
  R_RT_Handle v11; 
  R_RT_Handle occlusionTexture; 
  DecalVolumeCsConstants data; 

  v7 = frame;
  R_SetComputeShader(state, rgp.decalVolumeGenerateStreamingData);
  occlusionTexture = (R_RT_Handle)res->occlusionTexture;
  v10 = occlusionTexture;
  v11 = occlusionTexture;
  RB_DecalVolume_PreparePipelineConstants(viewInfo, v7, 0, 0, 0, (R_RT_ColorHandle *)&v11, &data);
  R_UploadAndSetComputeConstants(state, 0, &data, 0x2F0u, NULL);
  if ( occlusionTexture.m_surfaceID )
  {
    R_RT_Handle::GetSurface(&v10);
    textureId = R_RT_Handle::GetSurface(&v10)->m_image.m_base.textureId;
  }
  else
  {
    if ( v10.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    textureId = rgp.blackImage->textureId;
  }
  textures = (GfxTexture *)R_Texture_GetResident(textureId);
  R_SetComputeTextures(state, 12, 1, (const GfxTexture *const *)&textures);
  textures = (GfxTexture *)&s_decalVolumes.proxyCoordsBuffer[v7].view;
  R_SetComputeViews(state, 0, 1, (const GfxShaderBufferView *const *)&textures);
  textures = (GfxTexture *)&s_decalVolumes.decalMaterialsBuffer[v7].view;
  R_SetComputeViews(state, 9, 1, (const GfxShaderBufferView *const *)&textures);
  textures = (GfxTexture *)&s_decalVolumes.decalMasksBuffer[v7].view;
  R_SetComputeViews(state, 2, 1, (const GfxShaderBufferView *const *)&textures);
  textures = (GfxTexture *)&rgp.world->draw.materialAndMaskIndirectionBuffer.view;
  R_SetComputeViews(state, 11, 1, (const GfxShaderBufferView *const *)&textures);
  textures = (GfxTexture *)&res->staticDecals->view;
  R_SetComputeViews(state, 3, 1, (const GfxShaderBufferView *const *)&textures);
  textures = (GfxTexture *)&s_decalVolumes.impactMarkDecalsBuffer[v7].view;
  R_SetComputeViews(state, 7, 1, (const GfxShaderBufferView *const *)&textures);
  textures = (GfxTexture *)&res->cullStaticIndices->view;
  R_SetComputeViews(state, 6, 1, (const GfxShaderBufferView *const *)&textures);
  textures = (GfxTexture *)&res->cullImpactMarkIndices->view;
  R_SetComputeViews(state, 8, 1, (const GfxShaderBufferView *const *)&textures);
  textures = (GfxTexture *)&res->cullDecalsCount->view;
  R_SetComputeViews(state, 1, 1, (const GfxShaderBufferView *const *)&textures);
  textures = (GfxTexture *)&res->materialLods->rwView;
  R_SetComputeRWViewsWithCounters(state, 3, 1, (const GfxShaderBufferRWView *const *)&textures, NULL);
  textures = (GfxTexture *)&res->maskLods->rwView;
  R_SetComputeRWViewsWithCounters(state, 4, 1, (const GfxShaderBufferRWView *const *)&textures, NULL);
  R_DispatchIndirect(state, res->indirectArgs->buffer, 0);
}

/*
==============
R_DecalVolume_ReleaseAlias
==============
*/
void R_DecalVolume_ReleaseAlias(ImageAtlasCopyJobImageAlias *aliases)
{
  unsigned int v2; 
  ID3D12Resource *v3; 
  unsigned int v4; 
  __int64 v5; 
  __int64 v6; 

  v2 = 0;
  if ( aliases->aliasCount )
  {
    do
    {
      R_ReleaseShaderTextureView(&aliases->srcTextureAliasView[v2]);
      v3 = aliases->srcTextureAlias[v2];
      aliases->srcTextureAlias[v2] = NULL;
      if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_types_d3d.h", 1554, ASSERT_TYPE_ASSERT, "(var)", (const char *)&queryFormat, "var") )
        __debugbreak();
      v4 = v3->m_pFunction->Release(v3);
      if ( !R_IsAnalysisToolPresent() && !R_IsIncompatibleOverlayPresent() && v4 )
      {
        LODWORD(v6) = v4;
        LODWORD(v5) = 3553;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_types_d3d.h", 1569, ASSERT_TYPE_ASSERT, "(!useCount)", "%s\n\t%s (%i) %s->Release() failed: %i leak(s)!", "!useCount", "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", v5, "aliases.srcTextureAlias[iAlias]", v6) )
          __debugbreak();
      }
      ++v2;
    }
    while ( v2 < aliases->aliasCount );
    aliases->aliasCount = 0;
  }
  else
  {
    aliases->aliasCount = 0;
  }
}

/*
==============
R_DecalVolume_SetCsConstants
==============
*/
void R_DecalVolume_SetCsConstants(ComputeCmdBufState *state, const GfxViewInfo *viewInfo, unsigned int frame, unsigned int workgroupOffset, unsigned int workgroupCount, unsigned int workgroupTransient, R_RT_ColorHandle *occlusionTexture)
{
  R_RT_ColorHandle v8; 
  DecalVolumeCsConstants data; 

  v8 = *occlusionTexture;
  RB_DecalVolume_PreparePipelineConstants(viewInfo, frame, workgroupOffset, workgroupCount, workgroupTransient, &v8, &data);
  R_UploadAndSetComputeConstants(state, 0, &data, 0x2F0u, NULL);
}

/*
==============
R_DecalVolumesGrid_ProcessIntDecalVolumeObjectSpace
==============
*/
void R_DecalVolumesGrid_ProcessIntDecalVolumeObjectSpace(const DecalVolumeIntermediate *m, const tmat33_t<vec3_t> *worldAxis, ImageAtlasDrawingContext *drawingContext, const DecalVolumeStreamingInfo *streamingInfo, GfxDecalVolumeDrawData *dstData, float *outDecalScale)
{
  __int128 v6; 
  __int128 v7; 
  const GfxDecalVolumeMaterial *material; 
  int v12; 
  bool enabled; 
  unsigned int v14; 
  unsigned int v15; 
  float v16; 
  bool v17; 
  bool v18; 
  const GfxDecalVolumeMask *blendMapOverride; 
  GfxImage *blendMap; 
  GfxImage *v21; 
  GfxImage *v22; 
  unsigned int albedoMapScaleBias; 
  unsigned int v24; 
  const GfxImage *v25; 
  bool v26; 
  unsigned __int16 v27; 
  unsigned __int8 neededSize; 
  unsigned __int16 distanceMetric; 
  ImageAtlasProxy *Proxy; 
  unsigned __int16 entryIndex; 
  float *v32; 
  char v33; 
  ImageAtlasEntry *Entry; 
  unsigned int w; 
  unsigned int h; 
  int x; 
  int y; 
  const GfxDecalVolumeMaterial *v39; 
  unsigned int textureAtlasColumnCount; 
  const dvar_t *v41; 
  unsigned __int16 v42; 
  int v43; 
  const GfxImage *v44; 
  unsigned __int16 v45; 
  unsigned __int8 v46; 
  unsigned __int16 v47; 
  ImageAtlasProxy *v48; 
  unsigned __int16 v49; 
  char v50; 
  ImageAtlasEntry *v51; 
  unsigned int v52; 
  unsigned int v53; 
  int v54; 
  int v55; 
  const GfxDecalVolumeMaterial *v56; 
  unsigned int v57; 
  const dvar_t *v58; 
  unsigned __int16 v59; 
  int v60; 
  const GfxImage *v61; 
  unsigned __int16 v62; 
  unsigned __int8 v63; 
  unsigned __int16 v64; 
  ImageAtlasProxy *v65; 
  unsigned __int16 v66; 
  float *v67; 
  char v68; 
  ImageAtlasEntry *v69; 
  unsigned int v70; 
  unsigned int v71; 
  int v72; 
  int v73; 
  const GfxDecalVolumeMaterial *v74; 
  unsigned int v75; 
  const dvar_t *v76; 
  unsigned __int16 v77; 
  int v78; 
  const GfxImage *v79; 
  unsigned __int16 v80; 
  unsigned __int8 v81; 
  unsigned __int16 v82; 
  ImageAtlasProxy *v83; 
  unsigned __int16 v84; 
  char v85; 
  ImageAtlasEntry *v86; 
  int v87; 
  int v88; 
  unsigned int v89; 
  unsigned int v90; 
  const GfxDecalVolumeMaterial *v91; 
  unsigned int v92; 
  const GfxImage *v93; 
  unsigned __int16 v94; 
  unsigned __int8 v95; 
  unsigned __int16 v96; 
  ImageAtlasProxy *v97; 
  unsigned __int16 v98; 
  char v99; 
  ImageAtlasEntry *v100; 
  unsigned int v101; 
  unsigned int v102; 
  int v103; 
  int v104; 
  const GfxDecalVolumeMaterial *v105; 
  unsigned int v106; 
  const dvar_t *v107; 
  unsigned __int16 v108; 
  int v109; 
  int v110; 
  unsigned int v111; 
  const dvar_t *v112; 
  __int128 v114; 
  __m128 v118; 
  __m128 v123; 
  float v124; 
  float v125; 
  float v126; 
  float v127; 
  char v128; 
  int v129; 
  int v130; 
  int v131; 
  int v132; 
  int v133; 
  float zFeatherRcp; 
  float v135; 
  vec4_t uvMatrix; 
  float alphaDissolveParms; 
  float v142; 
  float v143; 
  float v144; 
  float v145; 
  float v146; 
  __int64 v147; 
  __int64 v148; 
  char v149; 
  int v150; 
  char v151; 
  int v152; 
  unsigned int v153; 
  int v154; 
  unsigned int v155; 
  int v156; 
  unsigned int v157; 
  int v158; 
  unsigned int v159; 
  const dvar_t *v160; 
  const dvar_t *v161; 
  const dvar_t *v162; 
  const dvar_t *v163; 
  const dvar_t *v164; 
  __int128 v165; 
  unsigned int v166; 
  unsigned int v167; 
  unsigned int v168; 
  unsigned int v169; 
  GfxImage *image; 
  int imagea; 
  int v172; 
  float v173; 
  float v174; 
  int v175; 
  int v176; 
  int v177; 
  __int128 v179; 
  __m128 v180; 
  tmat44_t<vec4_t> mtx; 
  __int128 v182; 
  __int128 v183; 

  material = m->material;
  if ( !material )
  {
    *outDecalScale = 0.0;
    R_WarnOncePerFrame(R_WARN_UNSUPPORTED_DECAL_VOLUME_MATERIAL, m->material->name);
    return;
  }
  v12 = 0;
  enabled = r_decalVolumesShowFailedMaterials->current.enabled;
  v172 = 0;
  v174 = 0.0;
  v173 = 0.0;
  if ( r_decalVolumesOverriedeMaterial->current.enabled )
    material = rgp.defaultDecalVolumeMaterial->decalVolumeMaterial;
  v177 = 0;
  v150 = enabled + 1;
  v14 = v150;
  v15 = v150;
  v176 = v150;
  if ( enabled == -1 )
  {
    v110 = enabled + 1;
    v111 = v110;
    v175 = v110;
    HIDWORD(v165) = v110;
    DWORD2(v165) = v110;
    DWORD1(v165) = v110;
    LODWORD(v165) = v110;
    goto LABEL_166;
  }
  v175 = enabled + 1;
  v158 = v175;
  v156 = v175;
  v183 = v6;
  DWORD2(v165) = v175;
  HIDWORD(v165) = v175;
  v182 = v7;
  LODWORD(v165) = v175;
  v152 = v175;
  v154 = v175;
  DWORD1(v165) = v175;
  do
  {
    v16 = m->uvMatrix.v[0];
    v172 = material->flags & 0x40;
    v17 = v16 == 1.0 && m->uvMatrix.v[1] == 0.0 && m->uvMatrix.v[2] == 0.0 && 1.0 == m->uvMatrix.v[3] && m->uvOffset.v[0] == 0.0 && m->uvOffset.v[1] == 0.0;
    v18 = 1.0 == m->blendMapAdjust.v[0] && m->blendMapAdjust.v[1] == 0.0;
    if ( !v17 || (v151 = 1, !v18) )
      v151 = 0;
    blendMapOverride = m->blendMapOverride;
    if ( blendMapOverride )
      blendMap = blendMapOverride->blendMap;
    else
      blendMap = material->channels[4];
    image = blendMap;
    *(_QWORD *)&v179 = material->channels[2];
    if ( COERCE_FLOAT(LODWORD(v16) & _xmm) > 1.0 || (v149 = 0, COERCE_FLOAT(LODWORD(m->uvMatrix.v[3]) & _xmm) > 1.0) )
      v149 = 1;
    v21 = material->channels[0];
    v22 = material->channels[1];
    if ( v21 )
      albedoMapScaleBias = v21->semanticSpecific.albedoMapScaleBias;
    else
      *(float *)&albedoMapScaleBias = COERCE_FLOAT(Image_PackAlbedoMapScaleBias(1.0, 0.0));
    v174 = *(float *)&albedoMapScaleBias;
    if ( v22 )
      v24 = v22->semanticSpecific.albedoMapScaleBias;
    else
      *(float *)&v24 = COERCE_FLOAT(Image_PackNormalMapScaleBias(1.0, 0.0, 1.0));
    v25 = material->channels[0];
    v26 = 0;
    v173 = *(float *)&v24;
    if ( !v25 )
      goto LABEL_58;
    v27 = s_decalVolumes.imageAtlas.imageIndexToProxyIndex[(unsigned int)ImageAtlas_GetImageIndex(v25)];
    if ( v27 >= 0xC00u )
    {
      LODWORD(v148) = 3072;
      LODWORD(v147) = v27;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 6884, ASSERT_TYPE_ASSERT, "(unsigned)( proxyIndex ) < (unsigned)( ( sizeof( *array_counter( drawingContext.neededSize ) ) + 0 ) )", "proxyIndex doesn't index ARRAY_COUNT( drawingContext.neededSize )\n\t%i not in [0, %i)", v147, v148) )
        __debugbreak();
    }
    neededSize = streamingInfo->neededSize;
    if ( drawingContext->neededSize[v27] > streamingInfo->neededSize )
      neededSize = drawingContext->neededSize[v27];
    drawingContext->neededSize[v27] = neededSize;
    distanceMetric = streamingInfo->distanceMetric;
    if ( distanceMetric > drawingContext->streamDistance[v27] )
      distanceMetric = drawingContext->streamDistance[v27];
    drawingContext->streamDistance[v27] = distanceMetric;
    Proxy = ImageAtlas_GetProxy(v27);
    entryIndex = Proxy->entryIndex;
    if ( entryIndex )
    {
      Entry = ImageAtlas_GetEntry(entryIndex);
      w = Entry->w;
      h = Entry->h;
      x = Entry->x;
      y = Entry->y;
      v166 = w;
      v167 = h;
      if ( (m->flags & 1) != 0 )
      {
        v39 = m->material;
        textureAtlasColumnCount = v39->textureAtlasColumnCount;
        w /= textureAtlasColumnCount;
        v166 = w;
        h /= v39->textureAtlasRowCount;
        v167 = h;
        x += w * (m->atlasFrame % textureAtlasColumnCount);
        y += h * (m->atlasFrame / textureAtlasColumnCount);
      }
      if ( v149 )
      {
        v41 = DCONST_DVARINT_r_decalVolumesBorderWidth;
        v160 = DCONST_DVARINT_r_decalVolumesBorderWidth;
        if ( !DCONST_DVARINT_r_decalVolumesBorderWidth )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_decalVolumesBorderWidth") )
            __debugbreak();
          v41 = v160;
        }
        Dvar_CheckFrontendServerThread(v41);
        v42 = truncate_cast<unsigned short,int>(v160->current.integer);
        x += v42;
        y += v42;
        v43 = 2 * v42;
        w = v166 - v43;
        h = v167 - v43;
      }
      LODWORD(v165) = x | (w << 16);
      DWORD1(v165) = y | (h << 16);
LABEL_58:
      v32 = outDecalScale;
      goto LABEL_59;
    }
    v26 = (v32 = outDecalScale, *outDecalScale = 0.0, streamingInfo->neededSize) && ((v33 = *((_BYTE *)Proxy + 15), (v33 & 0x40) != 0) || v33 < 0) && !Proxy->loadedSize;
LABEL_59:
    v44 = material->channels[1];
    if ( v44 )
    {
      v45 = s_decalVolumes.imageAtlas.imageIndexToProxyIndex[(unsigned int)ImageAtlas_GetImageIndex(v44)];
      if ( v45 >= 0xC00u )
      {
        LODWORD(v148) = 3072;
        LODWORD(v147) = v45;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 6884, ASSERT_TYPE_ASSERT, "(unsigned)( proxyIndex ) < (unsigned)( ( sizeof( *array_counter( drawingContext.neededSize ) ) + 0 ) )", "proxyIndex doesn't index ARRAY_COUNT( drawingContext.neededSize )\n\t%i not in [0, %i)", v147, v148) )
          __debugbreak();
      }
      v46 = streamingInfo->neededSize;
      if ( drawingContext->neededSize[v45] > streamingInfo->neededSize )
        v46 = drawingContext->neededSize[v45];
      drawingContext->neededSize[v45] = v46;
      v47 = streamingInfo->distanceMetric;
      if ( v47 > drawingContext->streamDistance[v45] )
        v47 = drawingContext->streamDistance[v45];
      drawingContext->streamDistance[v45] = v47;
      v48 = ImageAtlas_GetProxy(v45);
      v49 = v48->entryIndex;
      if ( v49 )
      {
        v51 = ImageAtlas_GetEntry(v49);
        v52 = v51->w;
        v53 = v51->h;
        v54 = v51->x;
        v55 = v51->y;
        v168 = v52;
        v169 = v53;
        if ( (m->flags & 1) != 0 )
        {
          v56 = m->material;
          v57 = v56->textureAtlasColumnCount;
          v52 /= v57;
          v168 = v52;
          v53 /= v56->textureAtlasRowCount;
          v169 = v53;
          v54 += v52 * (m->atlasFrame % v57);
          v55 += m->atlasFrame / v57 * v53;
        }
        if ( v149 )
        {
          v58 = DCONST_DVARINT_r_decalVolumesBorderWidth;
          v161 = DCONST_DVARINT_r_decalVolumesBorderWidth;
          if ( !DCONST_DVARINT_r_decalVolumesBorderWidth )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_decalVolumesBorderWidth") )
              __debugbreak();
            v58 = v161;
          }
          Dvar_CheckFrontendServerThread(v58);
          v59 = truncate_cast<unsigned short,int>(v161->current.integer);
          v54 += v59;
          v55 += v59;
          v60 = 2 * v59;
          v52 = v168 - v60;
          v53 = v169 - v60;
        }
        DWORD2(v165) = v54 | (v52 << 16);
        HIDWORD(v165) = v55 | (v53 << 16);
      }
      else
      {
        *v32 = 0.0;
        v26 = v26 || streamingInfo->neededSize && ((v50 = *((_BYTE *)v48 + 15), (v50 & 0x40) != 0) || v50 < 0) && !v48->loadedSize;
      }
    }
    v61 = material->channels[2];
    if ( v151 && !image )
    {
      v172 = 0;
LABEL_112:
      v67 = outDecalScale;
      goto LABEL_113;
    }
    if ( !v61 )
      goto LABEL_112;
    v62 = s_decalVolumes.imageAtlas.imageIndexToProxyIndex[(unsigned int)ImageAtlas_GetImageIndex(v61)];
    if ( v62 >= 0xC00u )
    {
      LODWORD(v148) = 3072;
      LODWORD(v147) = v62;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 6884, ASSERT_TYPE_ASSERT, "(unsigned)( proxyIndex ) < (unsigned)( ( sizeof( *array_counter( drawingContext.neededSize ) ) + 0 ) )", "proxyIndex doesn't index ARRAY_COUNT( drawingContext.neededSize )\n\t%i not in [0, %i)", v147, v148) )
        __debugbreak();
    }
    v63 = streamingInfo->neededSize;
    if ( drawingContext->neededSize[v62] > streamingInfo->neededSize )
      v63 = drawingContext->neededSize[v62];
    drawingContext->neededSize[v62] = v63;
    v64 = streamingInfo->distanceMetric;
    if ( v64 > drawingContext->streamDistance[v62] )
      v64 = drawingContext->streamDistance[v62];
    drawingContext->streamDistance[v62] = v64;
    v65 = ImageAtlas_GetProxy(v62);
    v66 = v65->entryIndex;
    if ( v66 )
    {
      v69 = ImageAtlas_GetEntry(v66);
      v70 = v69->w;
      v71 = v69->h;
      v72 = v69->x;
      v73 = v69->y;
      v159 = v70;
      v157 = v71;
      if ( (m->flags & 1) != 0 )
      {
        v74 = m->material;
        v75 = v74->textureAtlasColumnCount;
        v70 /= v75;
        v159 = v70;
        v71 /= v74->textureAtlasRowCount;
        v157 = v71;
        v72 += v70 * (m->atlasFrame % v75);
        v73 += v71 * (m->atlasFrame / v75);
      }
      if ( v149 )
      {
        v76 = DCONST_DVARINT_r_decalVolumesBorderWidth;
        v162 = DCONST_DVARINT_r_decalVolumesBorderWidth;
        if ( !DCONST_DVARINT_r_decalVolumesBorderWidth )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_decalVolumesBorderWidth") )
            __debugbreak();
          v76 = v162;
        }
        Dvar_CheckFrontendServerThread(v76);
        v77 = truncate_cast<unsigned short,int>(v162->current.integer);
        v72 += v77;
        v73 += v77;
        v78 = 2 * v77;
        v70 = v159 - v78;
        v71 = v157 - v78;
      }
      v158 = v72 | (v70 << 16);
      v156 = v73 | (v71 << 16);
      goto LABEL_112;
    }
    v67 = outDecalScale;
    *outDecalScale = 0.0;
    v26 = v26 || streamingInfo->neededSize && ((v68 = *((_BYTE *)v65 + 15), (v68 & 0x40) != 0) || v68 < 0) && !v65->loadedSize;
LABEL_113:
    v79 = material->channels[3];
    if ( v79 )
    {
      v80 = s_decalVolumes.imageAtlas.imageIndexToProxyIndex[(unsigned int)ImageAtlas_GetImageIndex(v79)];
      if ( v80 >= 0xC00u )
      {
        LODWORD(v148) = 3072;
        LODWORD(v147) = v80;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 6884, ASSERT_TYPE_ASSERT, "(unsigned)( proxyIndex ) < (unsigned)( ( sizeof( *array_counter( drawingContext.neededSize ) ) + 0 ) )", "proxyIndex doesn't index ARRAY_COUNT( drawingContext.neededSize )\n\t%i not in [0, %i)", v147, v148) )
          __debugbreak();
      }
      v81 = streamingInfo->neededSize;
      if ( drawingContext->neededSize[v80] > streamingInfo->neededSize )
        v81 = drawingContext->neededSize[v80];
      drawingContext->neededSize[v80] = v81;
      v82 = streamingInfo->distanceMetric;
      if ( v82 > drawingContext->streamDistance[v80] )
        v82 = drawingContext->streamDistance[v80];
      drawingContext->streamDistance[v80] = v82;
      v83 = ImageAtlas_GetProxy(v80);
      v84 = v83->entryIndex;
      if ( v84 )
      {
        v86 = ImageAtlas_GetEntry(v84);
        v87 = v86->x;
        v88 = v86->y;
        v89 = v86->w;
        v90 = v86->h;
        if ( (m->flags & 1) != 0 )
        {
          v91 = m->material;
          v92 = v91->textureAtlasColumnCount;
          v89 /= v92;
          v90 /= v91->textureAtlasRowCount;
          v87 += m->atlasFrame % v92 * v89;
          v88 += m->atlasFrame / v92 * v90;
        }
        v175 = v87 | (v89 << 16);
        v176 = v88 | (v90 << 16);
      }
      else
      {
        *v67 = 0.0;
        v26 = v26 || streamingInfo->neededSize && ((v85 = *((_BYTE *)v83 + 15), (v85 & 0x40) != 0) || v85 < 0) && !v83->loadedSize;
      }
    }
    v93 = (const GfxImage *)v179;
    if ( (_QWORD)v179 && !image && v151 )
    {
      v12 = 32;
    }
    else
    {
      v93 = image;
      v149 = 0;
      v12 = image != NULL ? 0x20 : 0;
    }
    imagea = v12;
    if ( v93 )
    {
      v94 = s_decalVolumes.imageAtlas.imageIndexToProxyIndex[(unsigned int)ImageAtlas_GetImageIndex(v93)];
      if ( v94 >= 0xC00u )
      {
        LODWORD(v148) = 3072;
        LODWORD(v147) = v94;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 6884, ASSERT_TYPE_ASSERT, "(unsigned)( proxyIndex ) < (unsigned)( ( sizeof( *array_counter( drawingContext.neededSize ) ) + 0 ) )", "proxyIndex doesn't index ARRAY_COUNT( drawingContext.neededSize )\n\t%i not in [0, %i)", v147, v148) )
          __debugbreak();
      }
      v95 = streamingInfo->neededSize;
      if ( drawingContext->neededSize[v94] > streamingInfo->neededSize )
        v95 = drawingContext->neededSize[v94];
      drawingContext->neededSize[v94] = v95;
      v96 = streamingInfo->distanceMetric;
      if ( v96 > drawingContext->streamDistance[v94] )
        v96 = drawingContext->streamDistance[v94];
      drawingContext->streamDistance[v94] = v96;
      v97 = ImageAtlas_GetProxy(v94);
      v98 = v97->entryIndex;
      if ( !v98 )
      {
        *outDecalScale = 0.0;
        if ( v26 )
          goto LABEL_165;
        if ( streamingInfo->neededSize )
        {
          v99 = *((_BYTE *)v97 + 15);
          if ( ((v99 & 0x40) != 0 || v99 < 0) && !v97->loadedSize )
            goto LABEL_165;
        }
        goto LABEL_163;
      }
      v100 = ImageAtlas_GetEntry(v98);
      v101 = v100->w;
      v102 = v100->h;
      v103 = v100->x;
      v104 = v100->y;
      v155 = v101;
      v153 = v102;
      if ( (m->flags & 1) != 0 )
      {
        v105 = m->material;
        v106 = v105->textureAtlasColumnCount;
        v101 /= v106;
        v155 = v101;
        v102 /= v105->textureAtlasRowCount;
        v153 = v102;
        v103 += v101 * (m->atlasFrame % v106);
        v104 += v102 * (m->atlasFrame / v106);
      }
      if ( v149 )
      {
        v107 = DCONST_DVARINT_r_decalVolumesBorderWidth;
        v163 = DCONST_DVARINT_r_decalVolumesBorderWidth;
        if ( !DCONST_DVARINT_r_decalVolumesBorderWidth )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_decalVolumesBorderWidth") )
            __debugbreak();
          v107 = v163;
        }
        Dvar_CheckFrontendServerThread(v107);
        v108 = truncate_cast<unsigned short,int>(v163->current.integer);
        v103 += v108;
        v104 += v108;
        v109 = 2 * v108;
        v101 = v155 - v109;
        v102 = v153 - v109;
      }
      v154 = v103 | (v101 << 16);
      v152 = v104 | (v102 << 16);
    }
    if ( *outDecalScale != 0.0 || v26 )
      break;
LABEL_163:
    ++v177;
    material = rgp.defaultDecalVolumeMaterial->decalVolumeMaterial;
    *outDecalScale = 1.0;
  }
  while ( v177 < v150 );
  v12 = imagea;
LABEL_165:
  v14 = v152;
  v15 = v154;
  v110 = v156;
  v111 = v158;
LABEL_166:
  HIDWORD(v179) = 0;
  v112 = DVARVEC3_r_decalVolumesScale;
  v164 = DVARVEC3_r_decalVolumesScale;
  v114 = v179;
  *(float *)&v114 = m->halfSize.v[0];
  _XMM6 = v114;
  __asm
  {
    vinsertps xmm6, xmm6, dword ptr [rbx+34h], 10h
    vinsertps xmm6, xmm6, dword ptr [rbx+38h], 20h ; ' '
  }
  v180 = _XMM6;
  if ( !DVARVEC3_r_decalVolumesScale )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_decalVolumesScale") )
      __debugbreak();
    v112 = v164;
  }
  Dvar_CheckFrontendServerThread(v112);
  v180.m128_i32[3] = 0;
  v118 = v180;
  v118.m128_f32[0] = v164->current.value;
  _XMM2 = v118;
  __asm
  {
    vinsertps xmm2, xmm2, xmm1, 10h
    vinsertps xmm2, xmm2, xmm3, 20h ; ' '
  }
  _XMM2 = _mm128_mul_ps(_XMM6, _XMM2);
  __asm { vrcpps  xmm1, xmm2 }
  v123 = _mm128_sub_ps(_mm128_add_ps(_XMM1, _XMM1), _mm128_mul_ps(_mm128_mul_ps(_XMM1, _XMM1), _XMM2));
  MatrixForViewerOrthogonalTransposed(&m->origin, &m->axis, &mtx);
  v124 = _mm_shuffle_ps(v123, v123, 85).m128_f32[0] * -0.5;
  v125 = v124 * mtx.m[0].v[1];
  _XMM2.m128_f32[0] = v124 * mtx.m[0].v[2];
  v118.m128_f32[0] = _mm_shuffle_ps(v123, v123, 170).m128_f32[0] * 0.5;
  dstData->worldToDecal[0].v[0] = v124 * mtx.m[0].v[0];
  _XMM1.m128_f32[0] = v124 * mtx.m[0].v[3];
  dstData->worldToDecal[0].v[1] = v125;
  v126 = v118.m128_f32[0] * mtx.m[1].v[1];
  dstData->worldToDecal[0].v[2] = _XMM2.m128_f32[0];
  _XMM2.m128_f32[0] = _XMM1.m128_f32[0] + 0.5;
  _XMM1.m128_f32[0] = v118.m128_f32[0] * mtx.m[1].v[0];
  dstData->worldToDecal[0].v[3] = _XMM2.m128_f32[0];
  _XMM2.m128_f32[0] = v118.m128_f32[0] * mtx.m[1].v[2];
  dstData->worldToDecal[1].v[0] = _XMM1.m128_f32[0];
  _XMM1.m128_f32[0] = v118.m128_f32[0] * mtx.m[1].v[3];
  dstData->worldToDecal[1].v[1] = v126;
  v127 = v123.m128_f32[0] * mtx.m[2].v[1];
  dstData->worldToDecal[1].v[2] = _XMM2.m128_f32[0];
  _XMM2.m128_f32[0] = _XMM1.m128_f32[0] + 0.5;
  _XMM1.m128_f32[0] = v123.m128_f32[0] * mtx.m[2].v[0];
  dstData->worldToDecal[1].v[3] = _XMM2.m128_f32[0];
  _XMM2.m128_f32[0] = v123.m128_f32[0] * mtx.m[2].v[2];
  dstData->worldToDecal[2].v[0] = _XMM1.m128_f32[0];
  v118.m128_f32[0] = v123.m128_f32[0] * mtx.m[2].v[3];
  dstData->worldToDecal[2].v[1] = v127;
  dstData->worldToDecal[2].v[2] = _XMM2.m128_f32[0];
  dstData->worldToDecal[2].v[3] = v118.m128_f32[0];
  dstData->xAxis = worldAxis->m[0];
  v128 = m->normalBlendModeOverride[0];
  v129 = material->flags & 1;
  if ( !v128 )
    v129 = 0;
  if ( v128 == 1 )
    v129 = 1;
  dstData->flags = v172 | v12 | v129 | material->flags & 0xFFFFFF9E | ((m->flags & 4) << 10);
  dstData->blendMapOpacityMapUVs[0] = v15;
  dstData->blendMapOpacityMapUVs[1] = v14;
  dstData->blendMapOpacityMapUVs[2] = v111;
  dstData->blendMapOpacityMapUVs[3] = v110;
  v130 = m->color[3];
  v131 = m->color[0];
  v132 = m->color[1];
  v133 = m->color[2];
  zFeatherRcp = m->zFeatherRcp;
  v135 = m->blendMapAdjust.v[0];
  dstData->blendMapAdjustScaleOffset_zFeatherRcp_vertexColorA.v[1] = m->blendMapAdjust.v[1];
  dstData->blendMapAdjustScaleOffset_zFeatherRcp_vertexColorA.v[0] = v135;
  dstData->blendMapAdjustScaleOffset_zFeatherRcp_vertexColorA.v[2] = zFeatherRcp;
  dstData->blendMapAdjustScaleOffset_zFeatherRcp_vertexColorA.v[3] = (float)v130 * 0.0039215689;
  uvMatrix = m->uvMatrix;
  _mm_shuffle_ps((__m128)uvMatrix, (__m128)uvMatrix, 85);
  _mm_shuffle_ps((__m128)uvMatrix, (__m128)uvMatrix, 170);
  _XMM3 = uvMatrix;
  __asm
  {
    vinsertps xmm3, xmm3, xmm0, 10h
    vinsertps xmm3, xmm3, xmm1, 20h ; ' '
  }
  _mm_shuffle_ps((__m128)uvMatrix, (__m128)uvMatrix, 255);
  __asm { vinsertps xmm3, xmm3, xmm2, 30h ; '0' }
  dstData->uvMatrix = (float4)_XMM3.v;
  alphaDissolveParms = material->alphaDissolveParms;
  v142 = m->uvOffset.v[0];
  dstData->uvOffset_alphaDissolveParms.v[1] = m->uvOffset.v[1];
  dstData->uvOffset_alphaDissolveParms.v[0] = v142;
  dstData->uvOffset_alphaDissolveParms.v[2] = alphaDissolveParms;
  dstData->uvOffset_alphaDissolveParms.v[3] = 0.0;
  v143 = worldAxis->m[1].v[2];
  v144 = worldAxis->m[1].v[0];
  dstData->yAxis_normalMapScaleBias.v[1] = worldAxis->m[1].v[1];
  dstData->yAxis_normalMapScaleBias.v[3] = v173;
  dstData->yAxis_normalMapScaleBias.v[0] = v144;
  dstData->yAxis_normalMapScaleBias.v[2] = v143;
  v145 = worldAxis->m[2].v[2];
  v146 = worldAxis->m[2].v[0];
  dstData->zAxis_albedoMapScaleBias.v[1] = worldAxis->m[2].v[1];
  dstData->zAxis_albedoMapScaleBias.v[3] = v174;
  dstData->zAxis_albedoMapScaleBias.v[0] = v146;
  dstData->zAxis_albedoMapScaleBias.v[2] = v145;
  dstData->colorTint_wFree.v[0] = (float)((float)v131 * material->colorTint.v[0]) * 0.0039215689;
  dstData->colorTint_wFree.v[1] = (float)((float)v132 * material->colorTint.v[1]) * 0.0039215689;
  dstData->colorTint_wFree.v[2] = (float)((float)v133 * material->colorTint.v[2]) * 0.0039215689;
  dstData->colorTint_wFree.v[3] = 0.0;
  *(_OWORD *)dstData->colorMapNogUVs = v165;
  dstData->emissiveDisplacementUVs[0] = v175;
  dstData->emissiveDisplacementUVs[1] = v176;
  *(_QWORD *)&dstData->emissiveDisplacementUVs[2] = 0i64;
  dstData->emissiveScale_mipLevels.v[0] = material->emissiveScale;
  *(vec4_t *)((char *)&dstData->emissiveScale_mipLevels + 4) = 0ui64;
  *(_QWORD *)&dstData->displacementBiasScale_normalScale.xyz.y = 0i64;
  dstData->displacementBiasScale_normalScale.v[3] = 0.0;
  dstData->_padding = 0i64;
}

/*
==============
R_DecalVolumesMarks_DebugAdd
==============
*/
void R_DecalVolumesMarks_DebugAdd(const vec3_t *origin, const vec3_t *halfSize, const tmat33_t<vec3_t> *axis, const vec4_t *color)
{
  DecalVolumeMarkDebugData *v8; 

  if ( ((unsigned __int8)&s_decalVolumes.decalVolumeMarksDebugCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_decalVolumes.decalVolumeMarksDebugCount) )
    __debugbreak();
  v8 = &s_decalVolumes.decalVolumeMarksDebug[_InterlockedExchangeAdd(&s_decalVolumes.decalVolumeMarksDebugCount, 1u) % 64];
  *(double *)v8->origin.v = *(double *)origin->v;
  v8->origin.v[2] = origin->v[2];
  *(__m256i *)v8->axis.m[0].v = *(__m256i *)axis->m[0].v;
  v8->axis.m[2].v[2] = axis->m[2].v[2];
  *(double *)v8->halfSize.v = *(double *)halfSize->v;
  v8->halfSize.v[2] = halfSize->v[2];
  v8->color = *color;
  v8->valid = 1;
}

/*
==============
R_DecalVolumesMarks_DebugClear
==============
*/
void R_DecalVolumesMarks_DebugClear(void)
{
  s_decalVolumes.decalVolumeMarksDebugCount = 0;
  memset_0(s_decalVolumes.decalVolumeMarksDebug, 0, sizeof(s_decalVolumes.decalVolumeMarksDebug));
}

/*
==============
R_DecalVolumesMarks_DebugDraw
==============
*/
void R_DecalVolumesMarks_DebugDraw(void)
{
  __int64 integer; 
  bool depthTest; 
  tmat33_t<vec3_t> *rotation; 
  DecalVolumeMarkDebugData *v3; 

  integer = r_decalVolumesMarksDebug->current.integer;
  if ( (int)integer >= 0 )
  {
    depthTest = r_decalVolumesDebugDepthTest->current.enabled;
    if ( (_DWORD)integer )
    {
      if ( (int)integer > 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 9961, ASSERT_TYPE_ASSERT, "( ( marksDebug <= 64 ) )", "( marksDebug ) = %i", integer) )
        __debugbreak();
      v3 = &s_decalVolumes.decalVolumeMarksDebug[integer - 1];
      if ( v3->valid )
      {
        R_DecalVolumes_DrawDebugAxis(&v3->origin, &v3->axis, &v3->halfSize);
        R_AddDebugPyramidOriented(&frontEndDataOut->debugGlobals, &v3->origin, v3->halfSize.v[0], v3->halfSize.v[1], &v3->axis, &v3->color, depthTest);
      }
    }
    else
    {
      rotation = &s_decalVolumes.decalVolumeMarksDebug[0].axis;
      do
      {
        if ( LOBYTE(rotation[1].row2.y) )
        {
          R_DecalVolumes_DrawDebugAxis(&rotation[-1].m[2], rotation, rotation[1].m);
          R_AddDebugPyramidOriented(&frontEndDataOut->debugGlobals, &rotation[-1].m[2], rotation[1].m[0].v[0], rotation[1].m[0].v[1], rotation, (const vec4_t *)&rotation[1].row1, depthTest);
        }
        rotation = (tmat33_t<vec3_t> *)((char *)rotation + 80);
      }
      while ( (__int64)rotation < (__int64)&s_decalVolumes.markVfxName[0][8] );
    }
  }
}

/*
==============
R_DecalVolumesMarks_DebugEnabled
==============
*/
bool R_DecalVolumesMarks_DebugEnabled()
{
  return r_decalVolumesMarksDebug->current.integer >= 0;
}

/*
==============
R_DecalVolumes_AllocateDynamic
==============
*/
__int64 R_DecalVolumes_AllocateDynamic(unsigned int uid)
{
  __int64 v2; 
  GfxStaticDecalVolumePacked *v4; 

  v2 = 0i64;
  while ( s_decalVolumes.dynamicDecalVolumesInUse[v2] )
  {
    v2 = (unsigned int)(v2 + 1);
    if ( (unsigned int)v2 >= 0xC0 )
    {
      Com_PrintWarning(8, "D+: Dynamic decal limit reached. Max %u\n", 192i64);
      return 0xFFFFi64;
    }
  }
  if ( s_decalVolumes.numDynamicDecalVolumes >= 0xC0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 6417, ASSERT_TYPE_ASSERT, "(s_decalVolumes.numDynamicDecalVolumes < (128 + 64))", (const char *)&queryFormat, "s_decalVolumes.numDynamicDecalVolumes < DECAL_VOLUMES_MAX_DYNAMIC_DECALS") )
    __debugbreak();
  s_decalVolumes.dynamicDecalVolumesInUse[v2] = 1;
  s_decalVolumes.dynamicDecalVolumesUids[v2] = uid;
  ++s_decalVolumes.numDynamicDecalVolumes;
  v4 = &s_decalVolumes.dynamicDecalVolumes[(unsigned int)v2];
  *(_QWORD *)v4->obbCenter.v = 0i64;
  *(_QWORD *)&v4->obbCenter.z = 0i64;
  *(_QWORD *)&v4->obbHalfSize = 0i64;
  *(_QWORD *)v4->uvMatrixAndOffset = 0i64;
  *(_QWORD *)&v4->uvMatrixAndOffset[2] = 0i64;
  v4->reserved = 0;
  return (unsigned __int16)v2;
}

/*
==============
R_DecalVolumes_BeginRequestImageMips
==============
*/
__int64 R_DecalVolumes_BeginRequestImageMips()
{
  const dvar_t *v0; 
  __int64 result; 

  ImageAtlas_TabulateCheckEnter();
  v0 = DCONST_DVARBOOL_r_decalVolumesPauseStreaming;
  if ( !DCONST_DVARBOOL_r_decalVolumesPauseStreaming && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_decalVolumesPauseStreaming") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  result = s_decalVolumes.imageAtlas.numPriorityAdjust;
  if ( v0->current.enabled )
    return 0i64;
  return result;
}

/*
==============
R_DecalVolumes_CheckInvalidate
==============
*/
__int64 R_DecalVolumes_CheckInvalidate()
{
  const dvar_t *v0; 
  const dvar_t *v1; 
  const dvar_t *v2; 
  int integer; 
  const dvar_t *v4; 

  v0 = DCONST_DVARINT_r_decalVolumesClusterPassCountBias;
  if ( !DCONST_DVARINT_r_decalVolumesClusterPassCountBias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_decalVolumesClusterPassCountBias") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( s_decalVolumes.decalVolumesClusterPassCountBias != v0->current.integer )
    goto LABEL_9;
  v1 = DCONST_DVARINT_r_decalVolumesClusterXYSize;
  if ( !DCONST_DVARINT_r_decalVolumesClusterXYSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_decalVolumesClusterXYSize") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( s_decalVolumes.decalVolumesClusterXYSize != v1->current.integer )
  {
LABEL_9:
    v2 = DCONST_DVARINT_r_decalVolumesClusterPassCountBias;
    s_decalVolumes.invalidateCounter = (LOBYTE(s_decalVolumes.invalidateCounter) + 1) & 3;
    if ( !DCONST_DVARINT_r_decalVolumesClusterPassCountBias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_decalVolumesClusterPassCountBias") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v2);
    integer = v2->current.integer;
    v4 = DCONST_DVARINT_r_decalVolumesClusterXYSize;
    s_decalVolumes.decalVolumesClusterPassCountBias = integer;
    if ( !DCONST_DVARINT_r_decalVolumesClusterXYSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_decalVolumesClusterXYSize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    s_decalVolumes.decalVolumesClusterXYSize = v4->current.integer;
  }
  return s_decalVolumes.invalidateCounter;
}

/*
==============
R_DecalVolumes_ClearAllDynamic
==============
*/
void R_DecalVolumes_ClearAllDynamic(void)
{
  memset_0(s_decalVolumes.dynamicDecalVolumes, 0, sizeof(s_decalVolumes.dynamicDecalVolumes));
  memset_0(s_decalVolumes.dynamicDecalVolumesInUse, 0, sizeof(s_decalVolumes.dynamicDecalVolumesInUse));
  s_decalVolumes.numDynamicDecalVolumes = 0;
}

/*
==============
R_DecalVolumes_ClearAtlas
==============
*/
void R_DecalVolumes_ClearAtlas()
{
  s_decalVolumes.clearAtlasRequest = 1;
}

/*
==============
R_DecalVolumes_ClearSelection
==============
*/
void R_DecalVolumes_ClearSelection(void)
{
  memset_0(s_decalVolumes.selectedDecalVolumes, 0, sizeof(s_decalVolumes.selectedDecalVolumes));
  s_decalVolumes.numSelectedDecalVolumes = 0;
}

/*
==============
R_DecalVolumes_CopyGfxDecalVolumeMask
==============
*/
void R_DecalVolumes_CopyGfxDecalVolumeMask(const GfxDecalVolumeMask *from, GfxDecalVolumeMask *to, const char *toNewAssetName)
{
  Sys_LockWrite(&s_decalVolumes.imageAtlas.atlasLock);
}

/*
==============
R_DecalVolumes_CopyGfxDecalVolumeMaskEnd
==============
*/
void R_DecalVolumes_CopyGfxDecalVolumeMaskEnd(const GfxDecalVolumeMask *from, GfxDecalVolumeMask *to, const char *toNewAssetName)
{
  unsigned __int64 MaskIndex; 
  unsigned __int64 v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 

  MaskIndex = R_DecalVolumes_GetMaskIndex(from);
  v5 = R_DecalVolumes_GetMaskIndex(to);
  if ( (unsigned int)MaskIndex >= 0x180 )
  {
    v7 = 384;
    v6 = MaskIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v6, v7) )
      __debugbreak();
  }
  if ( ((0x80000000 >> (MaskIndex & 0x1F)) & s_decalVolumes.decalMasksValid.array[MaskIndex >> 5]) != 0 )
  {
    if ( (unsigned int)v5 >= 0x180 )
    {
      v10 = 384;
      v8 = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v8, v10) )
        __debugbreak();
    }
    s_decalVolumes.decalMasksValid.array[v5 >> 5] |= 0x80000000 >> (v5 & 0x1F);
  }
  else
  {
    if ( (unsigned int)v5 >= 0x180 )
    {
      v11 = 384;
      v9 = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v9, v11) )
        __debugbreak();
    }
    s_decalVolumes.decalMasksValid.array[v5 >> 5] &= ~(0x80000000 >> (v5 & 0x1F));
  }
  Sys_UnlockWrite(&s_decalVolumes.imageAtlas.atlasLock);
}

/*
==============
R_DecalVolumes_CopyGfxDecalVolumeMaterial
==============
*/
void R_DecalVolumes_CopyGfxDecalVolumeMaterial(const GfxDecalVolumeMaterial *from, GfxDecalVolumeMaterial *to, const char *toNewAssetName)
{
  Sys_LockWrite(&s_decalVolumes.imageAtlas.atlasLock);
}

/*
==============
R_DecalVolumes_CopyGfxDecalVolumeMaterialEnd
==============
*/
void R_DecalVolumes_CopyGfxDecalVolumeMaterialEnd(const GfxDecalVolumeMaterial *from, GfxDecalVolumeMaterial *to, const char *toNewAssetName)
{
  unsigned __int64 MaterialIndex; 
  unsigned __int64 v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 

  MaterialIndex = R_DecalVolumes_GetMaterialIndex(from);
  v5 = R_DecalVolumes_GetMaterialIndex(to);
  if ( (unsigned int)MaterialIndex >= 0x600 )
  {
    v7 = 1536;
    v6 = MaterialIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v6, v7) )
      __debugbreak();
  }
  if ( ((0x80000000 >> (MaterialIndex & 0x1F)) & s_decalVolumes.decalMaterialsValid.array[MaterialIndex >> 5]) != 0 )
  {
    if ( (unsigned int)v5 >= 0x600 )
    {
      v10 = 1536;
      v8 = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v8, v10) )
        __debugbreak();
    }
    s_decalVolumes.decalMaterialsValid.array[v5 >> 5] |= 0x80000000 >> (v5 & 0x1F);
  }
  else
  {
    if ( (unsigned int)v5 >= 0x600 )
    {
      v11 = 1536;
      v9 = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v9, v11) )
        __debugbreak();
    }
    s_decalVolumes.decalMaterialsValid.array[v5 >> 5] &= ~(0x80000000 >> (v5 & 0x1F));
  }
  Sys_UnlockWrite(&s_decalVolumes.imageAtlas.atlasLock);
}

/*
==============
R_DecalVolumes_CopyGfxImage
==============
*/
void R_DecalVolumes_CopyGfxImage(const GfxImage *from, GfxImage *to, const char *toNewAssetName)
{
  unsigned int ImageIndex; 
  __int64 v6; 

  ImageAtlas_ManageCheckEnter();
  ImageAtlas_BackendCheckEnter();
  LODWORD(from) = ImageAtlas_GetImageIndex(from);
  ImageIndex = ImageAtlas_GetImageIndex(to);
  v6 = ImageIndex;
  ImageAtlas_SetImageIndexToProxyIndex(ImageIndex, s_decalVolumes.imageAtlas.imageIndexToProxyIndex[(unsigned int)from]);
  s_decalVolumes.imageAtlas.imageIndexIsCopy[v6] = 1;
  ImageAtlas_BackendCheckLeave();
  ImageAtlas_ManageCheckLeave();
}

/*
==============
R_DecalVolumes_CreateGfxDecalVolumeMask
==============
*/
void R_DecalVolumes_CreateGfxDecalVolumeMask(const GfxDecalVolumeMask *mask)
{
  unsigned __int64 MaskIndex; 
  int v2; 
  int v3; 

  MaskIndex = R_DecalVolumes_GetMaskIndex(mask);
  Sys_LockWrite(&s_decalVolumes.imageAtlas.atlasLock);
  if ( (unsigned int)MaskIndex >= 0x180 )
  {
    v3 = 384;
    v2 = MaskIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v2, v3) )
      __debugbreak();
  }
  s_decalVolumes.decalMasksValid.array[MaskIndex >> 5] |= 0x80000000 >> (MaskIndex & 0x1F);
  Sys_UnlockWrite(&s_decalVolumes.imageAtlas.atlasLock);
}

/*
==============
R_DecalVolumes_CreateGfxDecalVolumeMaterial
==============
*/
void R_DecalVolumes_CreateGfxDecalVolumeMaterial(const GfxDecalVolumeMaterial *material)
{
  unsigned __int64 MaterialIndex; 
  int v2; 
  int v3; 

  MaterialIndex = R_DecalVolumes_GetMaterialIndex(material);
  Sys_LockWrite(&s_decalVolumes.imageAtlas.atlasLock);
  if ( (unsigned int)MaterialIndex >= 0x600 )
  {
    v3 = 1536;
    v2 = MaterialIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v2, v3) )
      __debugbreak();
  }
  s_decalVolumes.decalMaterialsValid.array[MaterialIndex >> 5] |= 0x80000000 >> (MaterialIndex & 0x1F);
  Sys_UnlockWrite(&s_decalVolumes.imageAtlas.atlasLock);
}

/*
==============
R_DecalVolumes_CreateGfxImageAsset
==============
*/
void R_DecalVolumes_CreateGfxImageAsset(const GfxImage *image)
{
  R_DecalVolumes_CreateGfxImageAssetInternal(image, 1);
}

/*
==============
R_DecalVolumes_CreateGfxImageAssetInternal
==============
*/
void R_DecalVolumes_CreateGfxImageAssetInternal(const GfxImage *image, bool lock)
{
  unsigned int ImageIndex; 
  unsigned __int8 v5; 
  char v6; 
  __int64 proxyFreelistHead; 
  ImageAtlasProxy *Proxy; 
  const char *v9; 
  ImageAtlasProxy *v10; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 
  DecalVolumePriority Priority; 
  DecalVolumePriority v14; 
  char v15; 
  char v16; 
  unsigned int proxyFreelistCount; 
  unsigned __int8 v18; 
  char v19; 
  char v20; 
  const char *Name; 
  const dvar_t *v22; 
  unsigned __int8 v23; 
  unsigned __int8 neededSize; 

  ImageIndex = ImageAtlas_GetImageIndex(image);
  v5 = R_DecalVolumes_ImageLog2(image->width, image->height);
  v6 = 0x80;
  if ( ImageAtlas_IsConstantColorImage(image) )
  {
    v5 = truncate_cast<unsigned char,unsigned int>(31 - __lzcnt(0x80u));
  }
  else if ( v5 <= 2u )
  {
    Name = PixelFormat_GetName(image->format);
    Com_PrintWarning(8, "D+: bad image: %s %u x %u %s\n", image->name, image->width, image->height, Name);
    return;
  }
  if ( lock )
    Sys_LockWrite(&s_decalVolumes.imageAtlas.atlasLock);
  ImageAtlas_ManageCheckEnter();
  if ( s_decalVolumes.imageAtlas.proxyFreelistCount_ < 0xC00u && (proxyFreelistHead = s_decalVolumes.imageAtlas.proxyFreelistHead_, s_decalVolumes.imageAtlas.proxyFreelistHead_ = s_decalVolumes.imageAtlas.proxyPool_[s_decalVolumes.imageAtlas.proxyFreelistHead_].imageNameHash, ++s_decalVolumes.imageAtlas.proxyFreelistCount_, (_WORD)proxyFreelistHead) )
  {
    Proxy = ImageAtlas_GetProxy(proxyFreelistHead);
    v9 = image->name;
    v10 = Proxy;
    v11 = -1i64;
    do
      ++v11;
    while ( v9[v11] );
    v12 = j_CoD_XXH64(v9, v11, 0i64);
    *((_BYTE *)v10 + 15) &= 0xC0u;
    *((_BYTE *)v10 + 15) |= v5 & 0x3F;
    v10->imageNameHash = v12;
    v10->entryIndex = 0;
    v10->loadedSize = 0;
    v10->streamingDistanceBias = 0;
    v10->imageIndex = ImageIndex;
    Priority = R_DecalVolumes_GetPriority(image);
    v14 = Priority;
    v15 = 0;
    if ( Priority == DECAL_VOLUME_PRIORITY_LOWEST )
      v15 = 64;
    v16 = *((_BYTE *)v10 + 15) & 0xBF | v15;
    if ( (unsigned __int8)(Priority - 1) > 1u )
      v6 = 0;
    *((_BYTE *)v10 + 15) = v6 | v16 & 0x7F;
    proxyFreelistCount = s_decalVolumes.imageAtlas.proxyFreelistCount_;
    if ( (int)s_decalVolumes.imageAtlas.stats.proxyHighwaterMark > s_decalVolumes.imageAtlas.proxyFreelistCount_ )
      proxyFreelistCount = s_decalVolumes.imageAtlas.stats.proxyHighwaterMark;
    s_decalVolumes.imageAtlas.stats.proxyHighwaterMark = proxyFreelistCount;
    if ( (unsigned __int8)Priority >= DECAL_VOLUME_PRIORITY_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 5331, ASSERT_TYPE_ASSERT, "( ( decalVolumePriority < ( sizeof( *array_counter( ImageAtlasStats::numProxyByPriority ) ) + 0 ) ) )", "( image->name ) = %s", image->name) )
      __debugbreak();
    ++s_decalVolumes.imageAtlas.stats.numProxyByPriority[(unsigned __int8)v14];
    v18 = ImageAtlas_GetDecalAtlasIndex(image) - 1;
    if ( v18 >= 4u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 5334, ASSERT_TYPE_ASSERT, "( ( atlasIndex < ( sizeof( *array_counter( ImageAtlasStats::numProxyByAtlas ) ) + 0 ) ) )", "( image->name ) = %s", image->name) )
      __debugbreak();
    ++s_decalVolumes.imageAtlas.stats.numProxyByAtlas[v18];
    v19 = *((_BYTE *)v10 + 15);
    if ( v19 >= 0 )
    {
      v20 = v19 & 0x3F;
      if ( (v19 & 0x3Fu) > 7 )
        v20 = 7;
    }
    else
    {
      v20 = 0;
    }
    v10->neededSize = v20;
    v22 = DCONST_DVARINT_r_decalVolumesMaxLoadedSize;
    if ( !DCONST_DVARINT_r_decalVolumesMaxLoadedSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_decalVolumesMaxLoadedSize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
    v23 = truncate_cast<unsigned char,int>(v22->current.integer);
    neededSize = v10->neededSize;
    if ( neededSize > v23 )
      neededSize = v23;
    v10->neededSize = neededSize;
    if ( s_decalVolumes.imageAtlas.numProxies >= 0xC00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 5352, ASSERT_TYPE_ASSERT, "(imageAtlas->numProxies < ( 3 * (1024) ))", (const char *)&queryFormat, "imageAtlas->numProxies < IMAGE_ATLAS_MAX_PROXIES") )
      __debugbreak();
    s_decalVolumes.imageAtlas.proxies[s_decalVolumes.imageAtlas.numProxies++] = proxyFreelistHead;
    ImageAtlas_SetImageIndexToProxyIndex(ImageIndex, proxyFreelistHead);
    s_decalVolumes.imageAtlas.drawingContext[0].neededSize[proxyFreelistHead] = 0;
    s_decalVolumes.imageAtlas.drawingContext[1].neededSize[proxyFreelistHead] = 0;
  }
  else
  {
    Com_Printf(8, "D+: CreateImage failed: %s, imageIndex %u\n", image->name, ImageIndex);
  }
  ImageAtlas_ManageCheckLeave();
  if ( lock )
    Sys_UnlockWrite(&s_decalVolumes.imageAtlas.atlasLock);
}

/*
==============
R_DecalVolumes_DebugDrawOverlayInternal
==============
*/
void R_DecalVolumes_DebugDrawOverlayInternal(const ScreenPlacement *scrPlace, float *yOffsetText, unsigned int frame)
{
  float *v3; 
  __int64 v4; 
  const ScreenPlacement *v5; 
  unsigned int v6; 
  unsigned int v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  unsigned int v11; 
  bitarray<1536> *v12; 
  const char *v13; 
  const char *v14; 
  float v15; 
  unsigned int v16; 
  unsigned int *p_usedMemory; 
  __int64 numClusteringPasses; 
  const char *v19; 
  float v20; 
  unsigned int v21; 
  unsigned int v22; 
  unsigned int v23; 
  bool tiling; 
  __int64 v25; 
  unsigned int *v26; 
  float v27; 
  unsigned int v28; 
  __int64 v29; 
  __int64 maxDecalIndices; 
  float v31; 
  float v32; 
  const vec4_t *v33; 
  float v34; 
  unsigned int v35; 
  char v36; 
  float v37; 
  unsigned int v38; 
  int v39; 
  __int64 v40; 
  float v41; 
  const vec4_t *v42; 
  const char *v43; 
  const char *v44; 
  const char *v45; 
  const char *v46; 
  const char *v47; 
  vec4_t *setColor; 
  vec4_t *setColorb; 
  vec4_t *setColora; 
  vec4_t *setColorc; 
  vec4_t *setColord; 
  vec4_t *setColore; 
  __int64 forceColor; 
  __int64 forceColora; 
  __int64 forceColorb; 
  __int64 shadow; 
  __int64 shadowa; 
  unsigned int maxCellIndirectionsPerBucket; 
  __int64 v60; 
  __int64 v63[4]; 
  int v64[44]; 
  char _Buffer[1024]; 

  v3 = yOffsetText;
  v4 = frame;
  v5 = scrPlace;
  if ( r_decalVolumes->current.enabled && r_decalVolumesDebug->current.integer )
  {
    CG_DrawStringExt(scrPlace, 0.0, *yOffsetText, "View Info", &colorWhite, 0, 1, 12.0, 1);
    v60 = v4;
    *v3 = *v3 + 14.0;
    v6 = s_decalVolumes.stagingRing.visibleDecalCountsCpu[v4][0];
    v7 = s_decalVolumes.stagingRing.visibleDecalCountsCpu[v4][1];
    v8 = (unsigned int)v4;
    LODWORD(v9) = 0;
    v10 = 48i64;
    v11 = s_decalVolumes.intVolumesCount[(unsigned int)v4] + s_decalVolumes.particleMarksCount[v4];
    v12 = &s_decalVolumes.transientZonesToProcess[v8];
    do
    {
      v9 = __popcnt(v12->array[0]) + (unsigned int)v9;
      v12 = (bitarray<1536> *)((char *)v12 + 4);
      --v10;
    }
    while ( v10 );
    LODWORD(shadow) = 0x2000;
    LODWORD(forceColor) = v6;
    LODWORD(setColor) = 0x2000;
    v13 = j_va("Transients %4u, Collections %4u(%4u inst)/%4u, Culled static inst %4u/%4u", v9, (unsigned int)s_decalVolumes.intCollectionsCount[v8], (unsigned int)s_decalVolumes.intInInstanceCount[v8], setColor, forceColor, shadow);
    CG_DrawStringExt(v5, 12.0, *v3, v13, &colorWhite, 0, 1, 12.0, 1);
    LODWORD(setColorb) = 1024;
    *v3 = *v3 + 14.0;
    v14 = j_va("Imp mark %4u/%4u    Culled imp mark %4u/%4u", v11, 1024i64, v7, setColorb);
    CG_DrawStringExt(v5, 12.0, *v3, v14, &colorWhite, 0, 1, 12.0, 1);
    v15 = *v3 + 14.0;
    *v3 = v15;
    v16 = 0;
    if ( s_decalVolumes.clustering.numClusteringPasses )
    {
      p_usedMemory = &s_decalVolumes.clustering.clusteringPasses[0].usedMemory;
      numClusteringPasses = s_decalVolumes.clustering.numClusteringPasses;
      do
      {
        v16 += *p_usedMemory;
        p_usedMemory += 18;
        --numClusteringPasses;
      }
      while ( numClusteringPasses );
    }
    CG_DrawStringExt(v5, 1.0, v15, "Clustering", &colorWhite, 0, 1, 12.0, 1);
    *v3 = *v3 + 14.0;
    v19 = j_va("Mem %5u [kB]", v16 >> 10);
    CG_DrawStringExt(v5, 12.0, *v3, v19, &colorWhite, 0, 1, 12.0, 1);
    v20 = *v3 + 14.0;
    memset(v63, 0, 24);
    *v3 = v20;
    memset_0(v64, 0, 0xA8ui64);
    v21 = s_decalVolumes.clustering.numClusteringPasses;
    v22 = 0;
    if ( s_decalVolumes.clustering.numClusteringPasses )
    {
      v23 = s_decalVolumes.clustering.numClusteringPasses - 1;
      memcpy_0(v63, s_decalVolumes.stagingRing.decalIndicesCountsCpu[v8], 4i64 * s_decalVolumes.clustering.numClusteringPasses);
      tiling = s_decalVolumes.clustering.tiling;
      do
      {
        if ( v22 < v23 )
        {
          v25 = 7 * v22;
          v26 = s_decalVolumes.stagingRing.cellsUsedCpu[v8];
          v64[v25] = *v26 >> (3 - tiling);
          v64[(unsigned int)(v25 + 1)] = v26[1] >> (3 - tiling);
          v64[(unsigned int)(v25 + 2)] = v26[2] >> (3 - tiling);
          v64[(unsigned int)(v25 + 3)] = v26[3] >> (3 - tiling);
          v64[(unsigned int)(v25 + 4)] = v26[4] >> (3 - tiling);
          v64[(unsigned int)(v25 + 5)] = v26[5] >> (3 - tiling);
          v64[(unsigned int)(v25 + 6)] = v26[6] >> (3 - tiling);
        }
        ++v22;
      }
      while ( v22 < v21 );
    }
    CG_DrawStringExt(v5, 1.0, v20, "Decal indices used", &colorWhite, 0, 1, 9.0, 1);
    v27 = *v3 + 10.5;
    *v3 = v27;
    v28 = 0;
    if ( s_decalVolumes.clustering.numClusteringPasses )
    {
      do
      {
        v29 = *((unsigned int *)v63 + v28);
        maxDecalIndices = s_decalVolumes.clustering.clusteringPasses[v28].maxDecalIndices;
        v31 = (float)v29;
        v32 = (float)maxDecalIndices;
        LODWORD(forceColora) = s_decalVolumes.clustering.clusteringPasses[v28].maxDecalIndices;
        LODWORD(setColora) = *((_DWORD *)v63 + v28);
        j_snprintf(_Buffer, 0x400ui64, "%6u [kB] %8u / %8u  %4.0f%%", (4 * (unsigned __int64)(unsigned int)maxDecalIndices) >> 10, setColora, forceColora, (float)((float)(v31 * 100.0) / v32));
        v33 = &colorWhite;
        if ( (unsigned int)v29 > (unsigned int)maxDecalIndices )
          v33 = &colorRed;
        CG_DrawStringExt(v5, 12.0, *v3, _Buffer, v33, 0, 1, 9.0, 1);
        v27 = *v3 + 10.5;
        ++v28;
        *v3 = v27;
      }
      while ( v28 < s_decalVolumes.clustering.numClusteringPasses );
      v8 = v60;
    }
    CG_DrawStringExt(v5, 1.0, v27, "Cells used", &colorWhite, 0, 1, 9.0, 1);
    v34 = *v3 + 10.5;
    *v3 = v34;
    v35 = 0;
    if ( s_decalVolumes.clustering.numClusteringPasses != 1 )
    {
      do
      {
        v36 = 0;
        maxCellIndirectionsPerBucket = s_decalVolumes.clustering.clusteringPasses[v35].maxCellIndirectionsPerBucket;
        v38 = 0;
        v39 = j_snprintf(_Buffer, 0x400ui64, "%4u [kB]", (84 * (unsigned __int64)maxCellIndirectionsPerBucket) >> 10);
        do
        {
          v40 = (unsigned int)v64[7 * v35 + v38];
          v41 = (float)v40;
          v37 = (float)maxCellIndirectionsPerBucket;
          v39 += j_snprintf(&_Buffer[v39], 1024i64 - v39, " %5u %3.0f%%", v40, (float)((float)(v41 * 100.0) * (float)(1.0 / v37)));
          if ( v36 || (unsigned int)v40 > s_decalVolumes.clustering.clusteringPasses[v35].maxCellIndirectionsPerBucket )
            v36 = 1;
          ++v38;
        }
        while ( v38 < 7 );
        j_snprintf(&_Buffer[v39], 1024i64 - v39, "/ %5u", maxCellIndirectionsPerBucket);
        v3 = yOffsetText;
        v5 = scrPlace;
        v42 = &colorWhite;
        if ( v36 )
          v42 = &colorRed;
        CG_DrawStringExt(scrPlace, 12.0, *yOffsetText, _Buffer, v42, 0, 1, 9.0, 1);
        ++v35;
        v34 = *yOffsetText + 10.5;
        *yOffsetText = v34;
      }
      while ( v35 < s_decalVolumes.clustering.numClusteringPasses - 1 );
      v8 = v60;
    }
    *v3 = v34 + 14.0;
    CG_DrawStringExt(v5, 0.0, v34 + 14.0, "Atlas Info", &colorWhite, 0, 1, 12.0, 1);
    *v3 = *v3 + 14.0;
    LODWORD(shadowa) = s_decalVolumes.imageAtlas.stats.entryHighwaterMark;
    LODWORD(forceColorb) = 4096;
    LODWORD(setColorc) = s_decalVolumes.imageAtlas.entryFreelistCount_;
    v43 = j_va("Proxies: %4u/%4u HWM %4u    Entries: %4u/%4u HWM %4u\n", s_decalVolumes.imageAtlas.proxyFreelistCount_, 3072i64, s_decalVolumes.imageAtlas.stats.proxyHighwaterMark, setColorc, forceColorb, shadowa);
    CG_DrawStringExt(v5, 12.0, *v3, v43, &colorWhite, 0, 1, 12.0, 1);
    *v3 = *v3 + 14.0;
    LODWORD(setColord) = s_decalVolumes.imageAtlas.stats.numProxyByPriority[2];
    v44 = j_va("Proxies by Prio: high/normal/low/lowest: %4u/%4u/%4u/%4u", s_decalVolumes.imageAtlas.stats.numProxyByPriority[3], s_decalVolumes.imageAtlas.stats.numProxyByPriority[0], s_decalVolumes.imageAtlas.stats.numProxyByPriority[1], setColord);
    CG_DrawStringExt(v5, 12.0, *v3, v44, &colorWhite, 0, 1, 12.0, 1);
    *v3 = *v3 + 14.0;
    LODWORD(setColore) = s_decalVolumes.imageAtlas.stats.numProxyByAtlas[3];
    v45 = j_va("Proxies by Atlas: %4u/%4u/%4u/%4u", s_decalVolumes.imageAtlas.stats.numProxyByAtlas[0], s_decalVolumes.imageAtlas.stats.numProxyByAtlas[1], s_decalVolumes.imageAtlas.stats.numProxyByAtlas[2], setColore);
    CG_DrawStringExt(v5, 12.0, *v3, v45, &colorWhite, 0, 1, 12.0, 1);
    *v3 = *v3 + 14.0;
    v46 = j_va("Stream info count material/mask: %4u/%4u", s_decalVolumes.stagingRing.streamInfoMaterialCountCpu[v8], s_decalVolumes.stagingRing.streamInfoMaskCountCpu[v8]);
    CG_DrawStringExt(v5, 12.0, *v3, v46, &colorWhite, 0, 1, 12.0, 1);
    *v3 = *v3 + 14.0;
    v47 = j_va("Backend copy jobs / kBytes: %4u/%5u", s_decalVolumes.imageAtlas.stats.backendCopyJobs, s_decalVolumes.imageAtlas.stats.backendCopySize >> 10);
    CG_DrawStringExt(v5, 12.0, *v3, v47, &colorWhite, 0, 1, 12.0, 1);
    *v3 = *v3 + 14.0;
  }
}

/*
==============
R_DecalVolumes_DebugDrawOverlayMaterial
==============
*/
void R_DecalVolumes_DebugDrawOverlayMaterial(LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float *yOffsetText, unsigned int frame)
{
  __int64 v5; 
  unsigned int v6; 
  MaterialDebugInfo *v7; 
  unsigned int v8; 
  unsigned int *p_decalType; 
  unsigned int v10; 
  bool v11; 
  const GfxDecalVolumeMaterial *dvm; 
  unsigned int v13; 
  GfxDecalVolumeMask *DecalVolumeMaskAtIndex; 
  bool v15; 
  const char *v16; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned __int16 v19; 
  vec4_t v20; 
  const GfxImage *blendMap; 
  GfxImage *blendMapOverride; 
  char *markVfxName; 
  vec4_t materialColor; 

  if ( r_decalVolumesShowMaterialName->current.enabled )
  {
    v5 = frame;
    v6 = s_decalVolumes.stagingRing.materialInfoCountCpu[frame];
    if ( v6 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 10242, ASSERT_TYPE_ASSERT, "( ( materialCount <= 8 ) )", "( materialCount ) = %u", s_decalVolumes.stagingRing.materialInfoCountCpu[frame]) )
      __debugbreak();
    if ( v6 )
    {
      v7 = s_decalVolumes.stagingRing.materialInfoCpu[v5];
      Sys_LockRead(&s_decalVolumes.imageAtlas.atlasLock);
      R_DecalVolumes_MaterialsAndMasks_LockRead();
      v8 = 0;
      p_decalType = &v7->decalType;
      do
      {
        v10 = *(p_decalType - 39);
        v11 = v10 < 0x600;
        if ( v10 > 0x600 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 5811, ASSERT_TYPE_ASSERT, "(index <= (3 * 512))", (const char *)&queryFormat, "index <= DECAL_VOLUME_MATERIAL_POOL_SIZE_COMBINED") )
            __debugbreak();
          v11 = v10 < 0x600;
        }
        if ( v11 )
          dvm = DB_GetDecalVolumeMaterialAtIndex(v10);
        else
          dvm = NULL;
        v13 = *(p_decalType - 38);
        DecalVolumeMaskAtIndex = NULL;
        if ( v13 != 2047 )
        {
          v15 = v13 < 0x180;
          if ( v13 > 0x180 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 5833, ASSERT_TYPE_ASSERT, "(index <= (3 * 128))", (const char *)&queryFormat, "index <= DECAL_VOLUME_MASK_POOL_SIZE_COMBINED") )
              __debugbreak();
            v15 = v13 < 0x180;
          }
          if ( v15 )
            DecalVolumeMaskAtIndex = DB_GetDecalVolumeMaskAtIndex(v13);
        }
        v16 = NULL;
        if ( *p_decalType == 1 )
        {
          v17 = p_decalType[2];
          if ( (v17 & 0x8000) != 0 )
          {
            v18 = v17 & 0xFFFF7FFF;
            if ( v18 >= 0x800 )
            {
              LODWORD(markVfxName) = 2048;
              LODWORD(blendMapOverride) = v18;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 10274, ASSERT_TYPE_ASSERT, "( nameIndex ) < ( ( 512 * 4 ) )", "%s < %s\n\t%u, %u", "nameIndex", "DECAL_VOLUMES_MAX_VFX_NAME_COUNT", blendMapOverride, markVfxName) )
                __debugbreak();
            }
            v16 = s_decalVolumes.markVfxName[v18];
          }
          else
          {
            v19 = truncate_cast<unsigned short,unsigned int>(v17);
            v16 = FX_MarkVfxName(localClientNum, v19);
          }
        }
        switch ( v8 & 7 )
        {
          case 0u:
            v20 = colorRed;
            break;
          case 1u:
            v20 = colorGreen;
            break;
          case 2u:
            v20 = colorBlue;
            break;
          case 3u:
            v20 = colorYellow;
            break;
          case 4u:
            v20 = colorMagenta;
            break;
          case 5u:
            v20 = colorCyan;
            break;
          case 6u:
            v20 = colorOrange;
            break;
          case 7u:
            v20 = colorTeal;
            break;
        }
        materialColor = v20;
        if ( DecalVolumeMaskAtIndex )
          blendMap = DecalVolumeMaskAtIndex->blendMap;
        else
          blendMap = NULL;
        R_DecalVolumes_DrawDebugMaterial(localClientNum, scrPlace, yOffsetText, v8++, (const MaterialDebugInfo *)(p_decalType - 39), &materialColor, dvm, blendMap, v16);
        p_decalType += 42;
      }
      while ( v8 < v6 );
      R_DecalVolumes_MaterialsAndMasks_UnlockRead();
      Sys_UnlockRead(&s_decalVolumes.imageAtlas.atlasLock);
    }
  }
}

/*
==============
R_DecalVolumes_DebugEnabled
==============
*/
bool R_DecalVolumes_DebugEnabled()
{
  const dvar_t *v0; 
  const dvar_t *v1; 
  bool result; 

  if ( r_decalVolumesDebug->current.integer || r_decalVolumesShowMaterialName->current.enabled )
    return 1;
  v0 = DCONST_DVARBOOL_r_decalVolumesHighlightCluster;
  if ( !DCONST_DVARBOOL_r_decalVolumesHighlightCluster && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_decalVolumesHighlightCluster") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( v0->current.enabled )
    return 1;
  v1 = DCONST_DVARBOOL_r_decalVolumesHighlightBox;
  if ( !DCONST_DVARBOOL_r_decalVolumesHighlightBox && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_decalVolumesHighlightBox") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
    return 1;
  result = Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_decalVolumesHighlightOpacity, "r_decalVolumesHighlightOpacity");
  if ( result )
    return 1;
  return result;
}

/*
==============
R_DecalVolumes_DecalUpdate
==============
*/
void R_DecalVolumes_DecalUpdate(unsigned int decalIndex, bool isDynamic, const GfxStaticDecalVolumePacked *decal)
{
  __int64 v3; 
  GfxStaticDecalVolumePacked *v5; 
  GfxWorldDraw *v6; 
  __int64 transientZoneIndex; 
  GfxWorldTransientZone *v8; 
  __int64 updateQueueCount; 

  v3 = decalIndex;
  if ( isDynamic )
  {
    if ( decalIndex >= s_decalVolumes.numDynamicDecalVolumes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 6652, ASSERT_TYPE_ASSERT, "(unsigned)( decalIndex ) < (unsigned)( s_decalVolumes.numDynamicDecalVolumes )", "decalIndex doesn't index s_decalVolumes.numDynamicDecalVolumes\n\t%i not in [0, %i)", decalIndex, s_decalVolumes.numDynamicDecalVolumes) )
      __debugbreak();
    if ( !s_decalVolumes.dynamicDecalVolumesInUse[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 6653, ASSERT_TYPE_ASSERT, "(s_decalVolumes.dynamicDecalVolumesInUse[decalIndex])", (const char *)&queryFormat, "s_decalVolumes.dynamicDecalVolumesInUse[decalIndex]") )
      __debugbreak();
    v5 = &s_decalVolumes.dynamicDecalVolumes[v3];
    *(__m256i *)v5->obbCenter.v = *(__m256i *)decal->obbCenter.v;
    *(double *)&v5->uvMatrixAndOffset[2] = *(double *)&decal->uvMatrixAndOffset[2];
    v5->reserved = decal->reserved;
  }
  else
  {
    v6 = g_worldDraw;
    if ( (unsigned __int16)decalIndex >= g_worldDraw->decalVolumeCollectionCount )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 6663, ASSERT_TYPE_ASSERT, "(unsigned)( iCollection ) < (unsigned)( g_worldDraw->decalVolumeCollectionCount )", "iCollection doesn't index g_worldDraw->decalVolumeCollectionCount\n\t%i not in [0, %i)", (unsigned __int16)decalIndex, g_worldDraw->decalVolumeCollectionCount) )
        __debugbreak();
      v6 = g_worldDraw;
    }
    transientZoneIndex = v6->decalVolumeCollections[(unsigned __int16)v3].transientZoneIndex;
    v8 = v6->transientZones[transientZoneIndex];
    if ( v8 && v8->decalVolumes )
    {
      s_decalVolumesUpdated = 1;
      Sys_LockWrite(&s_decalVolumes.updateQueueLock);
      if ( s_decalVolumes.updateQueueCount >= 0x100 )
      {
        Com_PrintWarning(8, "D+: Update queue is full\n");
      }
      else
      {
        updateQueueCount = s_decalVolumes.updateQueueCount;
        *(__m256i *)s_decalVolumes.updateQueue[updateQueueCount].obbCenter.v = *(__m256i *)decal->obbCenter.v;
        *(double *)&s_decalVolumes.updateQueue[updateQueueCount].uvMatrixAndOffset[2] = *(double *)&decal->uvMatrixAndOffset[2];
        s_decalVolumes.updateQueue[updateQueueCount].reserved = decal->reserved;
        s_decalVolumes.updateQueueIndices[s_decalVolumes.updateQueueCount++] = v3;
      }
      Sys_UnlockWrite(&s_decalVolumes.updateQueueLock);
    }
    else
    {
      Com_PrintWarning(8, "R_DecalVolumes_DecalUpdate failed. Zone %u unloaded. uid = %u\n", transientZoneIndex, WORD1(v3));
    }
  }
}

/*
==============
R_DecalVolumes_DrawDebugAxis
==============
*/
void R_DecalVolumes_DrawDebugAxis(const vec3_t *origin, const tmat33_t<vec3_t> *axis, const vec3_t *halfSize)
{
  float v3; 
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  DebugGlobals *p_debugGlobals; 
  vec3_t end; 
  vec3_t v27; 
  vec3_t v28; 

  v3 = halfSize->v[0];
  v4 = origin->v[0];
  v5 = origin->v[1];
  v6 = origin->v[2];
  v7 = halfSize->v[0] * axis->m[0].v[1];
  end.v[0] = (float)(halfSize->v[0] * axis->m[0].v[0]) + origin->v[0];
  v8 = v7 + v5;
  v9 = v3 * axis->m[0].v[2];
  v10 = halfSize->v[1];
  end.v[1] = v8;
  v11 = v9 + v6;
  v12 = v10 * axis->m[1].v[0];
  end.v[2] = v11;
  v13 = v12 + v4;
  v14 = v10 * axis->m[1].v[1];
  v27.v[0] = v13;
  v15 = v14 + v5;
  v16 = v10 * axis->m[1].v[2];
  v17 = halfSize->v[2];
  v27.v[1] = v15;
  v18 = v16 + v6;
  v19 = v17 * axis->m[2].v[0];
  v27.v[2] = v18;
  v20 = v19 + v4;
  v21 = v17 * axis->m[2].v[1];
  v28.v[0] = v20;
  v22 = v17 * axis->m[2].v[2];
  v28.v[1] = v21 + v5;
  p_debugGlobals = &frontEndDataOut->debugGlobals;
  v28.v[2] = v22 + v6;
  if ( r_decalVolumesDebugDepthTest->current.enabled )
  {
    R_AddDebugLineDepthTest(p_debugGlobals, origin, &end, &colorRed);
    R_AddDebugLineDepthTest(&frontEndDataOut->debugGlobals, origin, &v27, &colorGreen);
    R_AddDebugLineDepthTest(&frontEndDataOut->debugGlobals, origin, &v28, &colorBlue);
  }
  else
  {
    R_AddDebugLine(p_debugGlobals, origin, &end, &colorRed);
    R_AddDebugLine(&frontEndDataOut->debugGlobals, origin, &v27, &colorGreen);
    R_AddDebugLine(&frontEndDataOut->debugGlobals, origin, &v28, &colorBlue);
  }
}

/*
==============
R_DecalVolumes_DrawDebugMaterial
==============
*/
void R_DecalVolumes_DrawDebugMaterial(LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, float *yOffsetText, unsigned int index, const MaterialDebugInfo *debugInfo, const vec4_t *materialColor, const GfxDecalVolumeMaterial *dvm, const GfxImage *blendMapOverride, const char *markVfxName)
{
  const ScreenPlacement *v9; 
  float v11; 
  float v12; 
  float v13; 
  const GfxImage *v14; 
  float v15; 
  vec4_t *v16; 
  unsigned int v17; 
  unsigned int decalType; 
  const char *v19; 
  unsigned int packedMapIndex; 
  const char *name; 
  const char *v22; 
  const dvar_t *v23; 
  float distanceMetricQuantized; 
  GfxImage **channels; 
  const GfxImage *v26; 
  int ImageIndex; 
  ImageAtlasProxy *Proxy; 
  vec4_t v29; 
  float v30; 
  unsigned __int16 entryIndex; 
  __int64 v32; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  vec4_t *setColor; 
  __int64 forceColor; 
  __int64 forceColora; 
  __int64 shadow; 
  __int64 charHeight; 
  __int64 charHeighta; 
  __int64 adjust; 
  Material *material; 
  __int64 t2; 
  float v46; 
  vec4_t color; 
  vec4_t v50; 
  char dest[512]; 

  v9 = scrPlace;
  v11 = scrPlaceFull.realViewportSize.v[1];
  v12 = FLOAT_20_0;
  v13 = FLOAT_8_0;
  v14 = blendMapOverride;
  v46 = 0.0;
  if ( r_decalVolumesShowAtlas->current.integer > 0 )
  {
    v46 = (float)((float)((float)(scrPlaceFull.realViewportSize.v[1] * 0.5) + 8.0) - scrPlaceFull.realViewableMin.v[0]) * scrPlaceFull.scaleRealToVirtual.v[0];
    v12 = v46 + 20.0;
  }
  v15 = *yOffsetText;
  v16 = &colorBlueHeat;
  if ( materialColor )
    v16 = (vec4_t *)materialColor;
  v17 = 0;
  color = *v16;
  if ( r_decalVolumesShowMaterialName->current.enabled )
  {
    decalType = debugInfo->decalType;
    if ( decalType == 1 )
    {
      v19 = "impact";
    }
    else
    {
      v19 = "object";
      if ( decalType != 2 )
        v19 = "static";
    }
    packedMapIndex = debugInfo->mapIndex.packedMapIndex;
    if ( decalType == 1 )
    {
      if ( dvm )
        name = dvm->name;
      else
        name = "<unknown>";
      Com_sprintf_truncate(dest, 0x200ui64, "%s   type=%s   id=%u   vfxName=%s", name, v19, (unsigned __int16)packedMapIndex, markVfxName);
    }
    else
    {
      if ( dvm )
        v22 = dvm->name;
      else
        v22 = "<unknown>";
      Com_sprintf_truncate(dest, 0x200ui64, "%s   type=%s   zone=%u   id=%u   mapDrawOrder=%u(%u)   userDrawOrder=%d", v22, v19, HIWORD(debugInfo->mapIndex.packedMapIndex), (unsigned __int16)packedMapIndex, debugInfo->drawOrder & 0x1F, (unsigned __int8)packedMapIndex, (debugInfo->drawOrder >> 5) - 4);
    }
    CG_DrawStringExt(v9, v12, *yOffsetText, dest, &colorWhite, 0, 1, 9.0, 1);
    *yOffsetText = *yOffsetText + 10.0;
    Com_sprintf_truncate(dest, 0x200ui64, "volSize %3.2f %3.2f %3.2f, tiling %3.2f %3.2f, zFeatherRcp %3.2f, blendMapAdjust (%3.2f, %3.2f)", (float)(debugInfo->dv.halfSize.v[0] * 2.0), (float)(debugInfo->dv.halfSize.v[1] * 2.0), (float)(debugInfo->dv.halfSize.v[2] * 2.0), debugInfo->tiling.v[0], debugInfo->tiling.v[1], debugInfo->zFeatherRcp, debugInfo->blendMapAdjust.v[0], debugInfo->blendMapAdjust.v[1]);
    CG_DrawStringExt(v9, v12, *yOffsetText, dest, &colorWhite, 0, 1, 9.0, 1);
    *yOffsetText = *yOffsetText + 10.0;
    v23 = DCONST_DVARBOOL_r_decalVolumesShowStreamingInfo;
    if ( !DCONST_DVARBOOL_r_decalVolumesShowStreamingInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_decalVolumesShowStreamingInfo") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v23);
    if ( v23->current.enabled )
    {
      Com_sprintf_truncate(dest, 0x200ui64, "areaOnScreen %3.1f, sph %3.1f, distSq %3.1f (aabb %3.1f, sph %3.1f)", debugInfo->areaOnScreen, debugInfo->areaOnScreenSphere, debugInfo->streamingData.distanceSq, debugInfo->streamingData.distanceSqAABB, debugInfo->streamingData.distanceSqSphere);
      CG_DrawStringExt(v9, v12, *yOffsetText, dest, &colorWhite, 0, 1, 9.0, 1);
      *yOffsetText = *yOffsetText + 10.0;
      LODWORD(charHeighta) = debugInfo->streamingData.material.neededSize;
      LODWORD(forceColora) = debugInfo->streamingData.material.distanceMetricQuantized;
      Com_sprintf_truncate(dest, 0x200ui64, "mat texDens %f rsqInv %f, dMetr %u (%f), nSiz %u", debugInfo->streamingData.material.textureDensity, debugInfo->streamingData.material.himipRadiusSqInv, forceColora, debugInfo->streamingData.material.distanceMetric, charHeighta);
      CG_DrawStringExt(v9, v12, *yOffsetText, dest, &colorWhite, 0, 1, 9.0, 1);
      v14 = blendMapOverride;
      *yOffsetText = *yOffsetText + 10.0;
      if ( !blendMapOverride )
      {
LABEL_26:
        v13 = FLOAT_8_0;
        goto LABEL_27;
      }
      distanceMetricQuantized = (float)debugInfo->streamingData.mask.distanceMetricQuantized;
      LODWORD(charHeight) = debugInfo->streamingData.mask.neededSize;
      Com_sprintf_truncate(dest, 0x200ui64, "msk texDens %f rsqInv %f, dMetr %f (%f), nSiz %u", debugInfo->streamingData.mask.textureDensity, debugInfo->streamingData.mask.himipRadiusSqInv, (float)(distanceMetricQuantized * 0.00390625), debugInfo->streamingData.mask.distanceMetric, charHeight);
      CG_DrawStringExt(v9, v12, *yOffsetText, dest, &colorWhite, 0, 1, 9.0, 1);
      *yOffsetText = *yOffsetText + 10.0;
    }
    v14 = blendMapOverride;
    goto LABEL_26;
  }
LABEL_27:
  if ( dvm && r_decalVolumesShowImageInfo->current.enabled )
  {
    channels = dvm->channels;
    do
    {
      v26 = *channels;
      if ( v17 == 4 && v14 )
        v26 = v14;
      if ( v26 )
      {
        ImageIndex = ImageAtlas_GetImageIndex(v26);
        Proxy = ImageAtlas_GetProxy(s_decalVolumes.imageAtlas.imageIndexToProxyIndex[ImageIndex]);
        LODWORD(t2) = Proxy->streamingDistance;
        LODWORD(material) = *((_BYTE *)Proxy + 15) & 0x3F;
        LODWORD(adjust) = 1 << (char)material;
        LODWORD(charHeight) = Proxy->loadedSize;
        LODWORD(shadow) = 1 << charHeight;
        LODWORD(forceColor) = Proxy->neededSize;
        LODWORD(setColor) = 1 << forceColor;
        Com_sprintf_truncate(dest, 0x200ui64, "%s: Need %d(%d), Have %d(%d), Max %d(%d),  StrDist %d", v26->name, setColor, forceColor, shadow, charHeight, adjust, material, t2);
        if ( Proxy->neededSize > Proxy->loadedSize )
          v29 = colorRedFaded;
        else
          v29 = colorWhiteFaded;
        v30 = *yOffsetText;
        v50 = v29;
        CG_DrawStringExt(v9, v12, v30, dest, &v50, 0, 1, 9.0, 1);
        *yOffsetText = *yOffsetText + 10.0;
        if ( (unsigned __int8)ImageAtlas_GetDecalAtlasIndex(v26) == r_decalVolumesShowAtlas->current.integer )
        {
          entryIndex = Proxy->entryIndex;
          if ( entryIndex )
          {
            do
            {
              if ( entryIndex >= 0x1000u )
              {
                LODWORD(shadow) = 4096;
                LODWORD(forceColor) = entryIndex;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1372, ASSERT_TYPE_ASSERT, "(unsigned)( entryIndex ) < (unsigned)( ( sizeof( *array_counter( s_decalVolumes.imageAtlas.entryPool_ ) ) + 0 ) )", "entryIndex doesn't index ARRAY_COUNT( s_decalVolumes.imageAtlas.entryPool_ )\n\t%i not in [0, %i)", forceColor, shadow) )
                  __debugbreak();
              }
              v32 = entryIndex;
              v33 = (float)((float)((float)((float)((float)s_decalVolumes.imageAtlas.entryPool_[v32].x * v11) * 0.00012207031) + v13) - scrPlaceFull.realViewableMin.v[0]) * scrPlaceFull.scaleRealToVirtual.v[0];
              v34 = (float)((float)((float)((float)((float)s_decalVolumes.imageAtlas.entryPool_[v32].y * v11) * 0.00012207031) + 48.0) - scrPlaceFull.realViewableMin.v[1]) * scrPlaceFull.scaleRealToVirtual.v[1];
              v35 = (float)((float)((float)s_decalVolumes.imageAtlas.entryPool_[v32].w * v11) * 0.00012207031) * scrPlaceFull.scaleRealToVirtual.v[0];
              v36 = (float)((float)((float)((float)s_decalVolumes.imageAtlas.entryPool_[v32].h * v11) * 0.00012207031) * scrPlaceFull.scaleRealToVirtual.v[1]) + v34;
              CG_Draw2DLine(&scrPlaceFull, v33, v34, v33, v36, 2.0, 1, 1, &color, cgMedia.whiteMaterial);
              CG_Draw2DLine(&scrPlaceFull, v33, v36, v35 + v33, v36, 2.0, 1, 1, &color, cgMedia.whiteMaterial);
              CG_Draw2DLine(&scrPlaceFull, v35 + v33, v36, v35 + v33, v34, 2.0, 1, 1, &color, cgMedia.whiteMaterial);
              CG_Draw2DLine(&scrPlaceFull, v35 + v33, v34, v33, v34, 2.0, 1, 1, &color, cgMedia.whiteMaterial);
              entryIndex = s_decalVolumes.imageAtlas.entryPool_[v32].lowerRes;
              v13 = FLOAT_8_0;
            }
            while ( entryIndex );
            v9 = scrPlace;
          }
        }
      }
      v13 = FLOAT_8_0;
      v14 = blendMapOverride;
      ++v17;
      ++channels;
    }
    while ( v17 < 6 );
  }
  CL_DrawStretchPic(v9, v46 + 1.0, v15, 10.0, *yOffsetText - v15, 1, 1, 0.0, 0.0, 0.0, 0.0, &color, cls.whiteMaterial);
  Com_sprintf_truncate(dest, 0x200ui64, "%u", index);
  CG_DrawStringExt(v9, v46 + 2.0, v15, dest, &colorWhite, 0, 1, 13.5, 1);
}

/*
==============
R_DecalVolumes_DrawDebugOBB
==============
*/
void R_DecalVolumes_DrawDebugOBB(const vec3_t *origin, const tmat33_t<vec3_t> *axis, const vec3_t *halfSize, const vec4_t *color)
{
  float v4; 
  DebugGlobals *p_debugGlobals; 
  Bounds bounds; 

  v4 = halfSize->v[1];
  bounds.midPoint.v[0] = 0.0;
  bounds.midPoint.v[1] = 0.0;
  bounds.midPoint.v[2] = 0.0;
  bounds.halfSize.v[0] = halfSize->v[0];
  p_debugGlobals = &frontEndDataOut->debugGlobals;
  bounds.halfSize.v[2] = halfSize->v[2];
  bounds.halfSize.v[1] = v4;
  if ( r_decalVolumesDebugDepthTest->current.enabled )
    R_AddDebugBoxOrientedDepthTest(p_debugGlobals, origin, &bounds, axis, color);
  else
    R_AddDebugBoxOriented(p_debugGlobals, origin, &bounds, axis, color);
}

/*
==============
R_DecalVolumes_DrawOverlay
==============
*/
void R_DecalVolumes_DrawOverlay(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  unsigned int frontendFrame; 
  float yOffsetText; 

  v1 = localClientNum;
  if ( !r_decalVolumes->current.enabled || r_decalVolumesDebug->current.integer >= 0 || r_decalVolumesShowMaterialName->current.enabled || R_DecalVolumesGrid_DebugDrawEnabled() )
  {
    Sys_WaitWorkerCmdsOfType(WRKCMD_DECAL_VOLUMES_MARKS_FINALIZE);
    Sys_WaitWorkerCmdsOfType(WRKCMD_GENERATE_DECAL_BUFFER);
    Sys_WaitWorkerCmdsOfType(WRKCMD_DECAL_VOLUMES_FILL_BUFFER);
    Sys_WaitWorkerCmdsOfType(WRKCMD_DECAL_VOLUMES_FILL_BUFFER_GRID);
    frontendFrame = s_decalVolumes.frontendFrame;
    yOffsetText = FLOAT_20_0;
    R_DecalVolumes_DebugDrawOverlayInternal(&scrPlaceViewDisplay[v1], &yOffsetText, s_decalVolumes.frontendFrame);
    R_DecalVolumes_DebugDrawOverlayMaterial((LocalClientNum_t)v1, &scrPlaceViewDisplay[v1], &yOffsetText, frontendFrame);
    R_DecalVolumesGrid_DebugDrawOverlay((LocalClientNum_t)v1, &scrPlaceViewDisplay[v1], yOffsetText, frontendFrame);
  }
}

/*
==============
R_DecalVolumes_DumpMaterials
==============
*/
void R_DecalVolumes_DumpMaterials()
{
  s_decalVolumes.dumpMaterialsRequest = 1;
}

/*
==============
R_DecalVolumes_DumpMaterialsInternal
==============
*/
void R_DecalVolumes_DumpMaterialsInternal()
{
  unsigned int v0; 
  char *DecalVolumeMaterialPool; 
  unsigned int v2; 
  char *v3; 
  __int64 v4; 
  unsigned int v5; 
  int v6; 
  unsigned int v7; 
  const char **v8; 
  const GfxImage **v9; 
  const GfxImage *v10; 
  unsigned int GfxImageIndex; 
  unsigned int v12; 
  unsigned __int16 v13; 
  unsigned __int8 v14; 
  __int64 v15; 
  int loadedSize; 
  int v17; 
  int neededSize; 
  const char *Name; 
  char *DecalVolumeMaskPool; 
  unsigned int v21; 
  char *v22; 
  __int64 v23; 
  unsigned int v24; 
  char *v25; 
  const char **v26; 
  unsigned int v27; 
  unsigned int v28; 
  unsigned __int16 v29; 
  unsigned __int8 v30; 
  __int64 v31; 
  int v32; 
  int v33; 
  int v34; 
  const char *v35; 
  char *fmt; 
  __int64 v37; 
  __int64 v38; 
  __int64 v39; 
  __int64 v40; 
  __int64 v41; 
  __int64 v42; 
  __int64 v43; 
  __int64 v44; 
  __int64 v45; 
  __int64 v46; 
  __int64 v47; 
  int v48; 
  unsigned int v49; 
  unsigned int v50; 
  char *v51; 
  const char **v52; 
  char *v53; 
  const char *v54; 
  unsigned __int16 height; 
  unsigned __int16 v56; 
  unsigned __int16 width; 
  unsigned __int16 v58; 
  unsigned int v59; 
  const char *v60; 
  unsigned int v61; 

  if ( s_decalVolumes.dumpMaterialsRequest )
  {
    s_decalVolumes.dumpMaterialsRequest = 0;
    Com_Printf(8, "======== r_decalVolumesDumpMaterials begin ========\n");
    Com_Printf(8, "index,imageName,channel,format,imageWidth,imageHeight,neededSizeLog2,loadedSizeLog2,maxSizeLog2,priority,materialOrMaskName\n");
    v0 = 0;
    v49 = 0;
    v59 = 0;
    v61 = 0;
    DecalVolumeMaterialPool = (char *)DB_GetDecalVolumeMaterialPool();
    v2 = s_decalVolumes.decalMaterialsValid.array[0];
    v3 = DecalVolumeMaterialPool;
    v53 = DecalVolumeMaterialPool;
    LODWORD(v4) = 0;
    v48 = 0;
    while ( v2 )
    {
LABEL_6:
      v5 = __lzcnt(v2);
      v6 = v5 + 32 * v4;
      if ( v5 >= 0x20 )
      {
        LODWORD(v40) = 32;
        LODWORD(v37) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v37, v40) )
          __debugbreak();
      }
      if ( (v2 & (0x80000000 >> v5)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
        __debugbreak();
      v7 = v59;
      v50 = ~(0x80000000 >> v5) & v2;
      v8 = (const char **)&v3[104 * v6];
      v52 = v8;
      v9 = (const GfxImage **)(v8 + 1);
      do
      {
        v10 = *v9;
        if ( *v9 )
        {
          GfxImageIndex = DB_GetGfxImageIndex(*v9);
          v12 = GfxImageIndex;
          if ( GfxImageIndex >= 0x14000 )
          {
            LODWORD(v40) = 81920;
            LODWORD(v37) = GfxImageIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 988, ASSERT_TYPE_ASSERT, "(unsigned)( dbIndex ) < (unsigned)( IMAGE_POOL_SIZE )", "dbIndex doesn't index IMAGE_POOL_SIZE\n\t%i not in [0, %i)", v37, v40) )
              __debugbreak();
            LODWORD(v41) = 81920;
            LODWORD(v38) = v12;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 989, ASSERT_TYPE_ASSERT, "(unsigned)( dbIndex ) < (unsigned)( ( IMAGE_POOL_SIZE ) )", "dbIndex doesn't index IMAGE_ATLAS_IMAGE_POOL_SIZE\n\t%i not in [0, %i)", v38, v41) )
              __debugbreak();
          }
          v13 = s_decalVolumes.imageAtlas.imageIndexToProxyIndex[v12 + 1];
          if ( v13 >= 0xC00u )
          {
            LODWORD(v40) = 3072;
            LODWORD(v37) = v13;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1358, ASSERT_TYPE_ASSERT, "(unsigned)( proxyIndex ) < (unsigned)( ( sizeof( *array_counter( s_decalVolumes.imageAtlas.proxyPool_ ) ) + 0 ) )", "proxyIndex doesn't index ARRAY_COUNT( s_decalVolumes.imageAtlas.proxyPool_ )\n\t%i not in [0, %i)", v37, v40) )
              __debugbreak();
          }
          v14 = v10->decalAtlasIndex >> 5;
          width = v10->width;
          v15 = v13;
          height = v10->height;
          v60 = *v8;
          if ( v14 > 3u )
          {
            LODWORD(v43) = v14;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume_load_obj.h", 193, ASSERT_TYPE_ASSERT, "(priority >= 0 && priority <= 3)", "%s\n\tPriority out of range %s %u\n", "priority >= DECAL_VOLUME_PRIORITY_FRIST && priority <= DECAL_VOLUME_PRIORITY_LAST", v10->name, v43) )
              __debugbreak();
          }
          loadedSize = s_decalVolumes.imageAtlas.proxyPool_[v15].loadedSize;
          v17 = *((_BYTE *)&s_decalVolumes.imageAtlas.proxyPool_[v15] + 15) & 0x3F;
          neededSize = s_decalVolumes.imageAtlas.proxyPool_[v15].neededSize;
          Name = PixelFormat_GetName(v10->format);
          LODWORD(v47) = v14;
          LODWORD(v46) = v17;
          LODWORD(v45) = loadedSize;
          LODWORD(v44) = neededSize;
          LODWORD(v43) = height;
          LODWORD(v40) = width;
          LODWORD(fmt) = v0;
          Com_Printf(8, "%u,%s,%u,%s,%u,%u,%d,%d,%d,%d,material %s\n", v7, v10->name, fmt, Name, v40, v43, v44, v45, v46, v47, v60);
          v8 = v52;
          ++v7;
        }
        ++v0;
        ++v9;
      }
      while ( v0 < 6 );
      ++v61;
      v2 = v50;
      v0 = 0;
      v3 = v53;
      v59 = v7;
      LODWORD(v4) = v48;
    }
    while ( 1 )
    {
      v4 = (unsigned int)(v4 + 1);
      v48 = v4;
      if ( (unsigned int)v4 >= 0x30 )
        break;
      v2 = s_decalVolumes.decalMaterialsValid.array[v4];
      if ( v2 )
        goto LABEL_6;
    }
    DecalVolumeMaskPool = (char *)DB_GetDecalVolumeMaskPool();
    v21 = s_decalVolumes.decalMasksValid.array[0];
    v22 = DecalVolumeMaskPool;
    v51 = DecalVolumeMaskPool;
    LODWORD(v23) = 0;
    while ( v21 )
    {
LABEL_33:
      v24 = __lzcnt(v21);
      if ( v24 >= 0x20 )
      {
        LODWORD(v40) = 32;
        LODWORD(v37) = v24;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v37, v40) )
          __debugbreak();
      }
      if ( ((0x80000000 >> v24) & v21) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
        __debugbreak();
      v21 &= ~(0x80000000 >> v24);
      v25 = &v22[512 * (_DWORD)v23 + 16 * v24];
      v26 = (const char **)*((_QWORD *)v25 + 1);
      if ( v26 )
      {
        v27 = DB_GetGfxImageIndex(*((const GfxImage **)v25 + 1));
        v28 = v27;
        if ( v27 >= 0x14000 )
        {
          LODWORD(v40) = 81920;
          LODWORD(v37) = v27;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 988, ASSERT_TYPE_ASSERT, "(unsigned)( dbIndex ) < (unsigned)( IMAGE_POOL_SIZE )", "dbIndex doesn't index IMAGE_POOL_SIZE\n\t%i not in [0, %i)", v37, v40) )
            __debugbreak();
          LODWORD(v42) = 81920;
          LODWORD(v39) = v28;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 989, ASSERT_TYPE_ASSERT, "(unsigned)( dbIndex ) < (unsigned)( ( IMAGE_POOL_SIZE ) )", "dbIndex doesn't index IMAGE_ATLAS_IMAGE_POOL_SIZE\n\t%i not in [0, %i)", v39, v42) )
            __debugbreak();
        }
        v29 = s_decalVolumes.imageAtlas.imageIndexToProxyIndex[v28 + 1];
        if ( v29 >= 0xC00u )
        {
          LODWORD(v40) = 3072;
          LODWORD(v37) = v29;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1358, ASSERT_TYPE_ASSERT, "(unsigned)( proxyIndex ) < (unsigned)( ( sizeof( *array_counter( s_decalVolumes.imageAtlas.proxyPool_ ) ) + 0 ) )", "proxyIndex doesn't index ARRAY_COUNT( s_decalVolumes.imageAtlas.proxyPool_ )\n\t%i not in [0, %i)", v37, v40) )
            __debugbreak();
        }
        v30 = *((_BYTE *)v26 + 50) >> 5;
        v58 = *((_WORD *)v26 + 18);
        v31 = v29;
        v56 = *((_WORD *)v26 + 19);
        v54 = *(const char **)v25;
        if ( v30 > 3u )
        {
          LODWORD(v43) = v30;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume_load_obj.h", 193, ASSERT_TYPE_ASSERT, "(priority >= 0 && priority <= 3)", "%s\n\tPriority out of range %s %u\n", "priority >= DECAL_VOLUME_PRIORITY_FRIST && priority <= DECAL_VOLUME_PRIORITY_LAST", *v26, v43) )
            __debugbreak();
        }
        v32 = s_decalVolumes.imageAtlas.proxyPool_[v31].loadedSize;
        v33 = *((_BYTE *)&s_decalVolumes.imageAtlas.proxyPool_[v31] + 15) & 0x3F;
        v34 = s_decalVolumes.imageAtlas.proxyPool_[v31].neededSize;
        v35 = PixelFormat_GetName((GfxPixelFormat)*((_DWORD *)v26 + 5));
        LODWORD(v47) = v30;
        LODWORD(v46) = v33;
        LODWORD(v45) = v32;
        LODWORD(v44) = v34;
        LODWORD(v43) = v56;
        LODWORD(v40) = v58;
        LODWORD(fmt) = -1;
        Com_Printf(8, "%u,%s,%d,%s,%u,%u,%d,%d,%d,%d,mask %s\n", v49, *v26, fmt, v35, v40, v43, v44, v45, v46, v47, v54);
        v0 = ++v49;
      }
      v22 = v51;
    }
    while ( 1 )
    {
      v23 = (unsigned int)(v23 + 1);
      if ( (unsigned int)v23 >= 0xC )
        break;
      v21 = s_decalVolumes.decalMasksValid.array[v23];
      if ( v21 )
        goto LABEL_33;
    }
    Com_Printf(8, "materialCount,%u\nimageCount,%u\n\n", v61, v59);
    Com_Printf(8, "maskCount,%u\n\n", v0);
    Com_Printf(8, "======== r_decalVolumesDumpMaterials end ========\n");
  }
}

/*
==============
R_DecalVolumes_EndRequestImageMips
==============
*/

void R_DecalVolumes_EndRequestImageMips(void)
{
  ImageAtlas_TabulateCheckLeave();
}

/*
==============
R_DecalVolumes_FillBufferCmd
==============
*/
void R_DecalVolumes_FillBufferCmd(const void *const cmd)
{
  __int64 v2; 
  DecalVolumeMaterialGPU *v3; 
  const GfxDecalVolumeMaterial *DecalVolumeMaterialPool; 
  __int64 v5; 
  DecalVolumeMaskGPU *v6; 
  const GfxDecalVolumeMask *DecalVolumeMaskPool; 

  ImageAtlas_ManageFillCheckEnter();
  Profile_Begin(242);
  Sys_LockRead(&s_decalVolumes.imageAtlas.atlasLock);
  R_DecalVolumes_MaterialsAndMasks_LockRead();
  v2 = *(unsigned int *)cmd;
  v3 = s_decalVolumes.decalMaterials[v2];
  DecalVolumeMaterialPool = (const GfxDecalVolumeMaterial *)DB_GetDecalVolumeMaterialPool();
  R_DecalVolume_FillMaterialInfoInternal_1536_(v2, v3, DecalVolumeMaterialPool, &s_decalVolumes.decalMaterialsValid, s_decalVolumes.imageAtlas.drawingContext, s_decalVolumes.stagingRing.materialLodsCpu[v2]);
  v5 = *(unsigned int *)cmd;
  v6 = s_decalVolumes.decalMasks[v5];
  DecalVolumeMaskPool = (const GfxDecalVolumeMask *)DB_GetDecalVolumeMaskPool();
  R_DecalVolume_FillBlendMapInfoInternal_384_(v5, v6, DecalVolumeMaskPool, &s_decalVolumes.decalMasksValid, s_decalVolumes.imageAtlas.drawingContext, s_decalVolumes.stagingRing.maskLodsCpu[v5]);
  memcpy_0(s_decalVolumes.proxyCoords[*(unsigned int *)cmd], s_decalVolumes.imageAtlas.proxyCoords_, 0x9000ui64);
  R_DecalVolumes_MaterialsAndMasks_UnlockRead();
  Sys_UnlockRead(&s_decalVolumes.imageAtlas.atlasLock);
  Profile_EndInternal(NULL);
  if ( s_decalVolumes.imageAtlas.proxyFreelistCount_ >= 0xC00u )
    R_WarnOncePerFrame(R_WARN_DECAL_VOLUME_IMAGE_LIMIT);
  ImageAtlas_ManageFillCheckLeave();
  ImageAtlas_LeaveManage(1u);
}

/*
==============
R_DecalVolumes_FillBufferCmdPending
==============
*/
_BOOL8 R_DecalVolumes_FillBufferCmdPending(void *data)
{
  bool v1; 

  Sys_AcquireWriteLock(&s_decalVolumes.imageAtlas.manageMutex);
  v1 = s_decalVolumes.imageAtlas.workers == 0x80000000;
  if ( s_decalVolumes.imageAtlas.workers != 0x80000000 )
    s_decalVolumes.imageAtlas.workers |= 1u;
  Sys_ReleaseWriteLock(&s_decalVolumes.imageAtlas.manageMutex);
  return v1;
}

/*
==============
R_DecalVolumes_FillBufferGridCmd
==============
*/
void R_DecalVolumes_FillBufferGridCmd(const void *const cmd)
{
  Profile_Begin(243);
  Sys_LockRead(&s_decalVolumes.imageAtlas.atlasLock);
  R_DecalVolumesGrid_FillObjectSpaceBuffers(*(const GfxViewInfo **)cmd, *((_DWORD *)cmd + 2), &s_decalVolumes.imageAtlas.drawingContext[1]);
  Sys_UnlockRead(&s_decalVolumes.imageAtlas.atlasLock);
  Profile_EndInternal(NULL);
  ImageAtlas_LeaveManage(2u);
}

/*
==============
R_DecalVolumes_FillBufferGridCmdPending
==============
*/
_BOOL8 R_DecalVolumes_FillBufferGridCmdPending(void *data)
{
  bool v1; 

  Sys_AcquireWriteLock(&s_decalVolumes.imageAtlas.manageMutex);
  v1 = s_decalVolumes.imageAtlas.workers == 0x80000000;
  if ( s_decalVolumes.imageAtlas.workers != 0x80000000 )
    s_decalVolumes.imageAtlas.workers |= 2u;
  Sys_ReleaseWriteLock(&s_decalVolumes.imageAtlas.manageMutex);
  return v1;
}

/*
==============
R_DecalVolumes_FrustumGridOverlay
==============
*/
void R_DecalVolumes_FrustumGridOverlay(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxWrappedBuffer *decalDrawData, const GfxWrappedBuffer *decalIndices, int mode)
{
  GfxCmdBufContext v8; 
  GfxCmdBufSourceState *source; 
  float renderTargetWidth; 
  float renderTargetHeight; 
  float width; 
  float height; 
  __int64 unsignedInt; 
  __int64 v22; 
  materialCommands_t *Tess; 
  materialCommands_t *v24; 
  GfxCmdBufSourceState *v25; 
  GfxCmdBufSourceState *v26; 
  float v27; 
  float v28; 
  GfxCmdBufSourceState *v29; 
  GfxCmdBufSourceState *v30; 
  GfxImage *blackImage; 
  GfxCmdBufInput *p_input; 
  GfxCmdBufInput *v33; 
  GfxCmdBufInput *v34; 
  GfxCmdBufContext v35; 

  v8 = *gfxContext;
  _XMM9 = LODWORD(FLOAT_1_0);
  _XMM0 = ((_BYTE)mode - 1) & 1;
  __asm
  {
    vpcmpeqd xmm3, xmm0, xmm1
    vblendvps xmm7, xmm9, xmm2, xmm3
  }
  source = gfxContext->source;
  __asm { vpcmpeqd xmm3, xmm0, xmm1 }
  _XMM1 = 0i64;
  __asm { vblendvps xmm6, xmm1, xmm2, xmm3 }
  renderTargetWidth = (float)source->renderTargetWidth;
  renderTargetHeight = (float)source->renderTargetHeight;
  width = (float)viewInfo->sceneViewport.width;
  height = (float)viewInfo->sceneViewport.height;
  unsignedInt = r_showFrustumLightsMinIndexDebug->current.unsignedInt;
  v22 = r_showFrustumLightsMaxIndexDebug->current.unsignedInt;
  v35 = v8;
  Tess = R_GetTess(&v35);
  v24 = Tess;
  if ( Tess->vertexCount )
  {
    v35 = v8;
    RB_EndTessSurfaceInternal(&v35, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h(162)");
  }
  else
  {
    if ( Tess->indexCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 166, ASSERT_TYPE_ASSERT, "(tess.indexCount == 0)", (const char *)&queryFormat, "tess.indexCount == 0") )
      __debugbreak();
    v24->viewStatsTarget = GFX_VIEW_STATS_INVALID;
    v24->primStatsTarget = GFX_PRIM_STATS_INVALID;
  }
  R_Set2D(gfxContext->source);
  R_SetPersistentTables(gfxContext, gfxContext->state->data, PERSISTENT_TABLE_SCENE);
  v25 = gfxContext->source;
  v25->input.consts[5].v[0] = width;
  v25->input.consts[5].v[1] = height;
  v25->input.consts[5].v[2] = 1.0 / width;
  v25->input.consts[5].v[3] = 1.0 / height;
  ++v25->constVersions[5];
  v26 = gfxContext->source;
  v27 = (float)unsignedInt;
  v26->input.consts[150].v[0] = (float)((mode - 1) / 2);
  v26->input.consts[150].v[1] = v27;
  v26->input.consts[150].v[3] = 0.0;
  v28 = (float)v22;
  v26->input.consts[150].v[2] = v28;
  ++v26->constVersions[150];
  v29 = gfxContext->source;
  *(_QWORD *)v29->input.consts[149].v = 0i64;
  *(_QWORD *)&v29->input.consts[149].xyz.z = 1061158912i64;
  ++v29->constVersions[149];
  v30 = gfxContext->source;
  blackImage = rgp.blackImage;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &v30->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[4] = blackImage;
  v33 = &gfxContext->source->input;
  if ( gfxContext->source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1503, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v33->codePersistentBuffers[16] = decalDrawData;
  v34 = &gfxContext->source->input;
  if ( gfxContext->source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1503, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v34->codePersistentBuffers[17] = decalIndices;
  v35 = *gfxContext;
  RB_DrawStretchPic(&v35, rgp.frustumGridDebugMaterial, *(float *)&_XMM6 * renderTargetWidth, *(float *)&_XMM6 * renderTargetHeight, (float)(*(float *)&_XMM7 - *(float *)&_XMM6) * renderTargetWidth, (float)(*(float *)&_XMM7 - *(float *)&_XMM6) * renderTargetHeight, *(float *)&_XMM6, *(float *)&_XMM6, *(float *)&_XMM7, *(float *)&_XMM7, 0xFFFFFFFF, GFX_PRIM_STATS_CODE);
  v35 = *gfxContext;
  RB_EndTessSurfaceInternal(&v35, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp(9155)");
}

/*
==============
R_DecalVolumes_GetDecalCount
==============
*/
__int64 R_DecalVolumes_GetDecalCount(const GfxBackEndData *data)
{
  if ( r_decalVolumes->current.enabled )
    return (unsigned int)(s_decalVolumes.intCollectionsCount[data->decalVolumeIndex] + s_decalVolumes.intVolumesCount[data->decalVolumeIndex] + s_decalVolumes.particleMarksCount[data->decalVolumeIndex]);
  else
    return 0i64;
}

/*
==============
R_DecalVolumes_GetDynamic
==============
*/
GfxStaticDecalVolumePacked *R_DecalVolumes_GetDynamic(GfxDynamicDecalVolumeIndex index)
{
  __int64 v1; 
  int v3; 

  v1 = (unsigned __int16)index;
  if ( !s_decalVolumes.dynamicDecalVolumesInUse[(unsigned __int16)index] )
  {
    v3 = (unsigned __int16)index;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 6433, ASSERT_TYPE_ASSERT, "(s_decalVolumes.dynamicDecalVolumesInUse[index])", "%s\n\tindex %u", "s_decalVolumes.dynamicDecalVolumesInUse[index]", v3) )
      __debugbreak();
  }
  if ( !s_decalVolumes.numDynamicDecalVolumes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 6434, ASSERT_TYPE_ASSERT, "(s_decalVolumes.numDynamicDecalVolumes > 0)", (const char *)&queryFormat, "s_decalVolumes.numDynamicDecalVolumes > 0") )
    __debugbreak();
  return &s_decalVolumes.dynamicDecalVolumes[v1];
}

/*
==============
R_DecalVolumes_GetDynamicIndex
==============
*/
__int64 R_DecalVolumes_GetDynamicIndex(unsigned int uid)
{
  __int64 v1; 

  v1 = 0i64;
  while ( !s_decalVolumes.dynamicDecalVolumesInUse[v1] || s_decalVolumes.dynamicDecalVolumesUids[v1] != uid )
  {
    v1 = (unsigned int)(v1 + 1);
    if ( (unsigned int)v1 >= 0xC0 )
      return 0xFFFFi64;
  }
  return (unsigned __int16)v1;
}

/*
==============
R_DecalVolumes_GetMaskIndex
==============
*/
unsigned int R_DecalVolumes_GetMaskIndex(const GfxDecalVolumeMask *mask)
{
  unsigned int result; 
  unsigned int v2; 
  unsigned int v3; 
  __int64 v4; 
  int v5; 
  __int64 v6; 

  result = DB_GetDecalVolumeMaskIndex(mask);
  v2 = result;
  if ( result >= 0x180 )
  {
    v5 = 384;
    v3 = result;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 5765, ASSERT_TYPE_ASSERT, "(unsigned)( dbIndex ) < (unsigned)( (3 * 128) )", "dbIndex doesn't index DECAL_VOLUME_MASK_POOL_SIZE_COMBINED\n\t%i not in [0, %i)", v3, v5) )
      __debugbreak();
    LODWORD(v6) = 384;
    LODWORD(v4) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 5766, ASSERT_TYPE_ASSERT, "(unsigned)( dbIndex ) < (unsigned)( (3 * 128) )", "dbIndex doesn't index DECAL_VOLUME_MASK_POOL_SIZE\n\t%i not in [0, %i)", v4, v6) )
      __debugbreak();
    return v2;
  }
  return result;
}

/*
==============
R_DecalVolumes_GetMaterialIndex
==============
*/
unsigned int R_DecalVolumes_GetMaterialIndex(const GfxDecalVolumeMaterial *material)
{
  unsigned int result; 
  unsigned int v2; 
  unsigned int v3; 
  __int64 v4; 
  int v5; 
  __int64 v6; 

  result = DB_GetDecalVolumeMaterialIndex(material);
  v2 = result;
  if ( result >= 0x600 )
  {
    v5 = 1536;
    v3 = result;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 5719, ASSERT_TYPE_ASSERT, "(unsigned)( dbIndex ) < (unsigned)( (3 * 512) )", "dbIndex doesn't index DECAL_VOLUME_MATERIAL_POOL_SIZE_COMBINED\n\t%i not in [0, %i)", v3, v5) )
      __debugbreak();
    LODWORD(v6) = 1536;
    LODWORD(v4) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 5720, ASSERT_TYPE_ASSERT, "(unsigned)( dbIndex ) < (unsigned)( (3 * 512) )", "dbIndex doesn't index DECAL_VOLUME_MATERIAL_POOL_SIZE\n\t%i not in [0, %i)", v4, v6) )
      __debugbreak();
    return v2;
  }
  return result;
}

/*
==============
R_DecalVolumes_GetMaterialInfo
==============
*/
char R_DecalVolumes_GetMaterialInfo(unsigned int decalIndex, bool isDynamic, GfxDecalVolumeMaterial **outMaterial, GfxDecalVolumeMask **outMask, DecalVolumesNormalBlendMode *outNormalBlendMode, unsigned int *outMapIndex, unsigned int *outDrawOrder)
{
  GfxDecalVolumeMask *DecalVolumeMaskAtIndex; 
  __int64 v8; 
  unsigned int v11; 
  unsigned int packedMaterialInfo; 
  __int64 v13; 
  unsigned int v14; 
  GfxWorldTransientZone *v15; 
  GfxDecalVolumeTransientData *decalVolumes; 
  unsigned int v17; 
  GfxWorldDraw *v18; 
  __int64 v20; 
  __int64 v21; 

  DecalVolumeMaskAtIndex = NULL;
  v8 = decalIndex;
  v11 = 0;
  if ( isDynamic )
  {
    if ( decalIndex >= s_decalVolumes.numDynamicDecalVolumes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 6568, ASSERT_TYPE_ASSERT, "(unsigned)( decalIndex ) < (unsigned)( s_decalVolumes.numDynamicDecalVolumes )", "decalIndex doesn't index s_decalVolumes.numDynamicDecalVolumes\n\t%i not in [0, %i)", decalIndex, s_decalVolumes.numDynamicDecalVolumes) )
      __debugbreak();
    if ( !s_decalVolumes.dynamicDecalVolumesInUse[v8] )
    {
      LODWORD(v20) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 6569, ASSERT_TYPE_ASSERT, "( ( s_decalVolumes.dynamicDecalVolumesInUse[decalIndex] ) )", "( decalIndex ) = %u", v20) )
        __debugbreak();
    }
    packedMaterialInfo = s_decalVolumes.dynamicDecalVolumes[v8].packedMaterialInfo;
  }
  else
  {
    v13 = (unsigned __int16)decalIndex;
    v14 = HIWORD(decalIndex);
    if ( (unsigned __int16)decalIndex >= g_worldDraw->decalVolumeCollectionCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 6578, ASSERT_TYPE_ASSERT, "(unsigned)( iCollection ) < (unsigned)( g_worldDraw->decalVolumeCollectionCount )", "iCollection doesn't index g_worldDraw->decalVolumeCollectionCount\n\t%i not in [0, %i)", (unsigned __int16)decalIndex, g_worldDraw->decalVolumeCollectionCount) )
      __debugbreak();
    v15 = g_worldDraw->transientZones[g_worldDraw->decalVolumeCollections[v13].transientZoneIndex];
    if ( !v15 )
      return 0;
    decalVolumes = v15->decalVolumes;
    if ( !decalVolumes )
      return 0;
    if ( v14 >= decalVolumes->decalVolumeCount )
    {
      LODWORD(v21) = decalVolumes->decalVolumeCount;
      LODWORD(v20) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 6586, ASSERT_TYPE_ASSERT, "(unsigned)( iDecal ) < (unsigned)( zone->decalVolumes->decalVolumeCount )", "iDecal doesn't index zone->decalVolumes->decalVolumeCount\n\t%i not in [0, %i)", v20, v21) )
        __debugbreak();
    }
    packedMaterialInfo = v15->decalVolumes->decalVolumes[v14].packedMaterialInfo;
  }
  if ( (packedMaterialInfo & 0x7FF) != 2047 )
    v11 = g_worldDraw->materialAndMaskIndirection[packedMaterialInfo & 0x7FF];
  *outMaterial = DB_GetDecalVolumeMaterialAtIndex(v11);
  v17 = (packedMaterialInfo >> 11) & 0x7FF;
  if ( v17 != 2047 )
  {
    v18 = g_worldDraw;
    if ( v17 >= g_worldDraw->decalVolumeMaterialCount + g_worldDraw->decalVolumeMaskCount )
    {
      LODWORD(v21) = g_worldDraw->decalVolumeMaterialCount + g_worldDraw->decalVolumeMaskCount;
      LODWORD(v20) = (packedMaterialInfo >> 11) & 0x7FF;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 6599, ASSERT_TYPE_ASSERT, "(unsigned)( packedMaterialInfo.blendMapIndex ) < (unsigned)( g_worldDraw->decalVolumeMaterialCount + g_worldDraw->decalVolumeMaskCount )", "packedMaterialInfo.blendMapIndex doesn't index g_worldDraw->decalVolumeMaterialCount + g_worldDraw->decalVolumeMaskCount\n\t%i not in [0, %i)", v20, v21) )
        __debugbreak();
      v18 = g_worldDraw;
    }
    DecalVolumeMaskAtIndex = DB_GetDecalVolumeMaskAtIndex(v18->materialAndMaskIndirection[v17 + v18->decalVolumeMaterialCount]);
  }
  *outMask = DecalVolumeMaskAtIndex;
  *(_BYTE *)outNormalBlendMode = (packedMaterialInfo >> 22) & 3;
  *outMapIndex = HIBYTE(packedMaterialInfo) & 0x1F;
  *outDrawOrder = packedMaterialInfo >> 29;
  return 1;
}

/*
==============
R_DecalVolumes_GetRequestedImageMip
==============
*/
char R_DecalVolumes_GetRequestedImageMip(unsigned int index, const GfxImage **outImage, StreamImageMip *outRequestedMip, float *outDistance)
{
  __int64 v4; 
  __int64 v8; 
  unsigned int v9; 
  GfxImage *GfxImageAtIndex; 
  GfxImage *v11; 
  unsigned __int8 neededSize; 
  StreamImageMip v14; 
  unsigned __int16 *p_width; 
  unsigned __int16 v16; 
  unsigned int v17; 
  unsigned __int8 v18; 
  __int64 v19; 

  v4 = index;
  if ( !outImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 3353, ASSERT_TYPE_ASSERT, "(outImage)", (const char *)&queryFormat, "outImage") )
    __debugbreak();
  if ( (unsigned int)v4 >= s_decalVolumes.imageAtlas.numPriorityAdjust )
  {
    LODWORD(v19) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 3356, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( imageAtlas.numPriorityAdjust )", "index doesn't index imageAtlas.numPriorityAdjust\n\t%i not in [0, %i)", v19, s_decalVolumes.imageAtlas.numPriorityAdjust) )
      __debugbreak();
  }
  v8 = v4;
  v9 = ImageAtlas_ToDbIndex(s_decalVolumes.imageAtlas.priorityAdjust[v4].imageIndex);
  GfxImageAtIndex = DB_GetGfxImageAtIndex(v9);
  v11 = GfxImageAtIndex;
  if ( !GfxImageAtIndex->decalAtlasIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 3362, ASSERT_TYPE_ASSERT, "( ( image->decalAtlasIndex > 0 ) )", "( image->name ) = %s", GfxImageAtIndex->name) )
    __debugbreak();
  if ( (v11->flags & 0x40) != 0 )
  {
    *outImage = v11;
    if ( s_decalVolumes.imageAtlas.priorityAdjust[v8].force )
    {
      neededSize = s_decalVolumes.imageAtlas.priorityAdjust[v8].neededSize;
      v14 = NO_MIPS;
      p_width = &v11->streams[0].width;
      do
      {
        v16 = p_width[1];
        if ( *p_width > v16 )
          v16 = *p_width;
        v17 = v16;
        if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 204, ASSERT_TYPE_ASSERT, "(value > 0)", (const char *)&queryFormat, "value > 0") )
          __debugbreak();
        v18 = truncate_cast<unsigned char,unsigned int>(31 - __lzcnt(v17));
        if ( v18 > 0xCu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume_load_obj.h", 163, ASSERT_TYPE_ASSERT, "(res <= 12)", (const char *)&queryFormat, "res <= DECAL_VOLUMES_ATLAS_SLICE_SIZE_LOG2") )
          __debugbreak();
        p_width += 20;
        ++v14;
      }
      while ( (*((_DWORD *)p_width - 1) & 0xFFFFFFF0) != 0 && v18 < neededSize );
      *outRequestedMip = v14;
      *outDistance = -1.0;
    }
    else
    {
      *outDistance = (float)s_decalVolumes.imageAtlas.priorityAdjust[v8].streamingDistance * 0.00390625;
    }
    return 1;
  }
  else
  {
    *outImage = NULL;
    return 0;
  }
}

/*
==============
R_DecalVolumes_GetStreamViewInfo
==============
*/
DecalVolumeStreamViewInfo *R_DecalVolumes_GetStreamViewInfo(unsigned int frame)
{
  __int64 v1; 
  int v4; 

  v1 = frame;
  if ( frame >= 2 )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 7152, ASSERT_TYPE_ASSERT, "(unsigned)( frame ) < (unsigned)( ( sizeof( *array_counter( s_decalVolumes.streamViewInfo ) ) + 0 ) )", "frame doesn't index ARRAY_COUNT( s_decalVolumes.streamViewInfo )\n\t%i not in [0, %i)", frame, v4) )
      __debugbreak();
  }
  return &s_decalVolumes.streamViewInfo[v1];
}

/*
==============
R_DecalVolumes_GetUID
==============
*/
bool R_DecalVolumes_GetUID(unsigned int uid, unsigned int *outIndex, bool *outIsDynamic)
{
  unsigned int v3; 
  unsigned int decalVolumeCollectionCount; 
  unsigned int v8; 
  GfxWorldTransientZone *v9; 
  GfxDecalVolumeTransientData *decalVolumes; 
  GfxStaticDecalVolumeUid *decalVolumeUids; 
  unsigned int decalVolumeCount; 
  unsigned int v13; 
  bool *dynamicDecalVolumesInUse; 
  unsigned int *i; 
  bool result; 
  __int64 v17; 
  __int64 v18; 

  v3 = 0;
  if ( g_worldDraw && (decalVolumeCollectionCount = g_worldDraw->decalVolumeCollectionCount, v8 = 0, decalVolumeCollectionCount) )
  {
    while ( 1 )
    {
      v9 = g_worldDraw->transientZones[g_worldDraw->decalVolumeCollections[v8].transientZoneIndex];
      if ( v9 )
      {
        decalVolumes = v9->decalVolumes;
        if ( decalVolumes )
        {
          decalVolumeUids = decalVolumes->decalVolumeUids;
          if ( decalVolumeUids )
          {
            decalVolumeCount = decalVolumes->decalVolumeCount;
            v13 = 0;
            if ( decalVolumeCount )
              break;
          }
        }
      }
LABEL_9:
      if ( ++v8 >= decalVolumeCollectionCount )
        goto LABEL_10;
    }
    while ( decalVolumeUids->uid != uid )
    {
      ++v13;
      ++decalVolumeUids;
      if ( v13 >= decalVolumeCount )
        goto LABEL_9;
    }
    if ( v8 >= 0x10000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 6491, ASSERT_TYPE_ASSERT, "(unsigned)( iCollection ) < (unsigned)( 0x10000 )", "iCollection doesn't index 0x10000\n\t%i not in [0, %i)", v8, 0x10000) )
      __debugbreak();
    if ( v13 >= 0x10000 )
    {
      LODWORD(v18) = 0x10000;
      LODWORD(v17) = v13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 6492, ASSERT_TYPE_ASSERT, "(unsigned)( iDecal ) < (unsigned)( 0x10000 )", "iDecal doesn't index 0x10000\n\t%i not in [0, %i)", v17, v18) )
        __debugbreak();
    }
    if ( (_WORD)v13 || v8 )
      v3 = 1;
    *outIndex = v3;
    result = 1;
    *outIsDynamic = 0;
  }
  else
  {
LABEL_10:
    dynamicDecalVolumesInUse = s_decalVolumes.dynamicDecalVolumesInUse;
    for ( i = s_decalVolumes.dynamicDecalVolumesUids; !*dynamicDecalVolumesInUse || *i != uid; ++i )
    {
      ++v3;
      ++dynamicDecalVolumesInUse;
      if ( v3 >= 0xC0 )
        return 0;
    }
    *outIndex = v3;
    result = 1;
    *outIsDynamic = 1;
  }
  return result;
}

/*
==============
R_DecalVolumes_InitDefaultMask
==============
*/
void R_DecalVolumes_InitDefaultMask(void)
{
  s_decalVolumes.defaultDecalVolumeMask = R_DecalVolume_RegisterMask("mtl_default_vol_decal_mask", IMAGE_TRACK_MISC);
}

/*
==============
R_DecalVolumes_InitWorldBuffers
==============
*/
void R_DecalVolumes_InitWorldBuffers(GfxWorld *world)
{
  memset_0(s_decalVolumes.dynamicDecalVolumes, 0, sizeof(s_decalVolumes.dynamicDecalVolumes));
  memset_0(s_decalVolumes.dynamicDecalVolumesInUse, 0, sizeof(s_decalVolumes.dynamicDecalVolumesInUse));
  s_decalVolumes.numDynamicDecalVolumes = 0;
  memset_0(s_decalVolumes.selectedDecalVolumes, 0, sizeof(s_decalVolumes.selectedDecalVolumes));
  s_decalVolumes.numSelectedDecalVolumes = 0;
}

/*
==============
R_DecalVolumes_ManageAtlas
==============
*/
void R_DecalVolumes_ManageAtlas(void)
{
  unsigned int workers; 
  unsigned int v1; 
  unsigned int v2; 
  unsigned int v3; 
  unsigned int v4; 
  __int64 v5; 
  ImageAtlasBackendJob bjCandidates; 
  unsigned __int8 proxyCopyPending[3072]; 

  if ( r_decalVolumes->current.enabled && s_decalVolumes.imageAtlas.initialized )
  {
    Sys_AcquireWriteLock(&s_decalVolumes.imageAtlas.manageMutex);
    workers = s_decalVolumes.imageAtlas.workers;
    v1 = s_decalVolumes.imageAtlas.workers;
    if ( !s_decalVolumes.imageAtlas.workers )
      v1 = 0x80000000;
    s_decalVolumes.imageAtlas.workers = v1;
    Sys_ReleaseWriteLock(&s_decalVolumes.imageAtlas.manageMutex);
    if ( !workers )
    {
      Sys_LockWrite(&s_decalVolumes.imageAtlas.atlasLock);
      ImageAtlas_ManageCheckEnter();
      ImageAtlas_ManageFillCheckEnter();
      ImageAtlas_TabulateCheckEnter();
      Sys_ProfBeginNamedEvent(0xFFFF7F50, "D+ Atlas Manage");
      Profile_Begin(244);
      ImageAtlas_ProcessBackendJobs();
      R_DecalVolumes_DumpMaterialsInternal();
      if ( s_decalVolumes.clearAtlasRequest )
      {
        s_decalVolumes.clearAtlasRequest = 0;
        *(_WORD *)&s_decalVolumes.channelsCleared = 256;
      }
      while ( _interlockedbittestandset(&s_decalVolumes.imageAtlas.backendJobsMutex.flag._My_flag, 0) )
        _mm_pause();
      if ( s_decalVolumes.imageAtlas.backendJobs.write - s_decalVolumes.imageAtlas.backendJobs.read > 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 248, ASSERT_TYPE_ASSERT, "(PoolSize >= size())", (const char *)&queryFormat, "PoolSize >= size()") )
        __debugbreak();
      v2 = s_decalVolumes.imageAtlas.backendJobs.read - s_decalVolumes.imageAtlas.backendJobs.write + 64;
      s_decalVolumes.imageAtlas.backendJobsMutex.flag._My_flag = 0;
      if ( v2 > 0x40 )
      {
        LODWORD(v5) = s_decalVolumes.imageAtlas.backendJobs.read - s_decalVolumes.imageAtlas.backendJobs.write + 64;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 3300, ASSERT_TYPE_ASSERT, "( ( maxCandidateJobs <= ( 64 + (1 &&(((1 &&! 1) && (1 &&((!(1 &&(((1 &&(((1 &&(((1 && 1) || (1 &&! 1))?1:0)&& 1) || (1 &&(((1 &&(((1 && 1) && !(1 &&((0 || (1 && 1))?1:0)&& 1) && !(1 &&((0 || (1 &&! 1))?1:0)&& 1))?1:0)&& 1) && !0)?1:0)&& 1))?1:0)&& 1) || (1 &&((0 || (1 &&! 1))?1:0)&& 1))?1:0)&& 1) || 0 || ( (1 &&(((1 && 1) && !(1 &&((0 || (1 && 1))?1:0)&& 1) && !(1 &&((0 || (1 &&! 1))?1:0)&& 1))?1:0)&& 1) && 1 && !(1 &&((( !1 || !(1 &&((1 && (1 &&(((1 &&(((1 && 1) || (1 &&! 1))?1:0)&& 1) || (1 &&(((1 &&(((1 && 1) && !(1 &&((0 || (1 && 1))?1:0)&& 1) && !(1 &&((0 || (1 &&! 1))?1:0)&& 1))?1:0)&& 1) && !0)?1:0)&& 1))?1:0)&& 1))?1:0)&& 1) ) && !0)?1:0)&& 1) && !(1 &&! 1) && !(1 &&(((1 &&(((1 &&! 1))?1:0)&& 1) || (1 &&! 1))?1:0)&& 1) ))?1:0)&& 1) && !0 && (1 &&((!(1 &&! 1) && !(1 &&((0 || (1 &&(((1 &&(((1 &&! 1))?1:0)&& 1) || (1 &&! 1))?1:0)&& 1))?1:0)&& 1))?1:0)&& 1))?1:0)&& 1) * ( 512 - 64 ) ) ) )", "( maxCandidateJobs ) = %u", v5) )
          __debugbreak();
      }
      v3 = ImageAtlas_PrepareRequests(&bjCandidates, v2, proxyCopyPending);
      v4 = v3;
      if ( v3 > v2 )
      {
        LODWORD(v5) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 3303, ASSERT_TYPE_ASSERT, "( ( numCandidateJobs <= maxCandidateJobs ) )", "( numCandidateJobs ) = %u", v5) )
          __debugbreak();
      }
      Profile_EndInternal(NULL);
      Sys_ProfEndNamedEvent();
      ImageAtlas_TabulateCheckLeave();
      ImageAtlas_ManageFillCheckLeave();
      ImageAtlas_ManageCheckLeave();
      Sys_UnlockWrite(&s_decalVolumes.imageAtlas.atlasLock);
      Sys_AcquireWriteLock(&s_decalVolumes.imageAtlas.manageMutex);
      if ( s_decalVolumes.imageAtlas.workers != 0x80000000 )
      {
        LODWORD(v5) = s_decalVolumes.imageAtlas.workers;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 3102, ASSERT_TYPE_ASSERT, "( ( imageAtlas->workers == ( 1U << 31 ) ) )", "( imageAtlas->workers ) = %u", v5) )
          __debugbreak();
      }
      s_decalVolumes.imageAtlas.workers = 0;
      Sys_ReleaseWriteLock(&s_decalVolumes.imageAtlas.manageMutex);
      ImageAtlas_FinalizeRequests(&bjCandidates, v4, v2, proxyCopyPending);
    }
  }
}

/*
==============
R_DecalVolumes_MarksFinalizeCmd
==============
*/
void R_DecalVolumes_MarksFinalizeCmd(const void *const cmd)
{
  ;
}

/*
==============
R_DecalVolumes_MaterialsAndMasks_LockRead
==============
*/
__int64 R_DecalVolumes_MaterialsAndMasks_LockRead()
{
  __int64 result; 

  if ( s_decalVolumes.imageAtlas.atlasLock.writeThreadId == Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 62, ASSERT_TYPE_ASSERT, "( critSect->writeThreadId != Sys_GetCurrentThreadId() )", "This is a non-recursive lock! Don't attempt to take a read lock if the calling thread already has the write lock or this will loop infinitely.") )
    __debugbreak();
  if ( ((unsigned __int8)&s_decalVolumes.imageAtlas.atlasLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_decalVolumes.imageAtlas.atlasLock) )
    __debugbreak();
  _InterlockedIncrement(&s_decalVolumes.imageAtlas.atlasLock.readCount);
  for ( result = (unsigned int)s_decalVolumes.imageAtlas.atlasLock.writeCount; s_decalVolumes.imageAtlas.atlasLock.writeCount; result = (unsigned int)s_decalVolumes.imageAtlas.atlasLock.writeCount )
    Sys_Sleep(0);
  return result;
}

/*
==============
R_DecalVolumes_MaterialsAndMasks_UnlockRead
==============
*/
char R_DecalVolumes_MaterialsAndMasks_UnlockRead()
{
  FastCriticalSection *p_atlasLock; 
  volatile int readCount; 

  if ( s_decalVolumes.imageAtlas.atlasLock.readCount <= 0 )
  {
    readCount = s_decalVolumes.imageAtlas.atlasLock.readCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 90, ASSERT_TYPE_ASSERT, "( critSect->readCount ) > ( 0 )", "%s > %s\n\t%i, %i", "critSect->readCount", "0", readCount, 0i64) )
      __debugbreak();
  }
  p_atlasLock = &s_decalVolumes.imageAtlas.atlasLock;
  if ( ((unsigned __int8)&s_decalVolumes.imageAtlas.atlasLock & 3) != 0 )
  {
    LOBYTE(p_atlasLock) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_decalVolumes.imageAtlas.atlasLock);
    if ( (_BYTE)p_atlasLock )
      __debugbreak();
  }
  _InterlockedDecrement(&s_decalVolumes.imageAtlas.atlasLock.readCount);
  return (char)p_atlasLock;
}

/*
==============
R_DecalVolumes_MoveGfxDecalVolumeMask
==============
*/
void R_DecalVolumes_MoveGfxDecalVolumeMask(const GfxDecalVolumeMask *from, GfxDecalVolumeMask *to, bool toOwnsResources)
{
  unsigned int MaskIndex; 
  unsigned __int64 v6; 
  unsigned __int64 v7; 
  unsigned __int64 v8; 
  unsigned int v9; 
  unsigned int *v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  unsigned int v14; 
  __int64 v15; 
  int v16; 

  Sys_LockWrite(&s_decalVolumes.imageAtlas.atlasLock);
  MaskIndex = R_DecalVolumes_GetMaskIndex(to);
  v6 = MaskIndex;
  if ( MaskIndex >= 0x180 )
  {
    v16 = 384;
    v14 = MaskIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v14, v16) )
      __debugbreak();
  }
  s_decalVolumes.decalMasksValid.array[v6 >> 5] &= ~(0x80000000 >> (v6 & 0x1F));
  *to = *from;
  v7 = R_DecalVolumes_GetMaskIndex(from);
  v8 = R_DecalVolumes_GetMaskIndex(to);
  if ( (unsigned int)v7 >= 0x180 )
  {
    LODWORD(v12) = 384;
    LODWORD(v11) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v11, v12) )
      __debugbreak();
  }
  v9 = 0x80000000 >> (v7 & 0x1F);
  v10 = &s_decalVolumes.decalMasksValid.array[v7 >> 5];
  if ( (v9 & *v10) != 0 )
  {
    if ( (unsigned int)v8 >= 0x180 )
    {
      LODWORD(v15) = 384;
      LODWORD(v13) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v13, v15) )
        __debugbreak();
    }
    s_decalVolumes.decalMasksValid.array[v8 >> 5] |= 0x80000000 >> (v8 & 0x1F);
  }
  else
  {
    if ( (unsigned int)v8 >= 0x180 )
    {
      LODWORD(v15) = 384;
      LODWORD(v13) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v13, v15) )
        __debugbreak();
    }
    s_decalVolumes.decalMasksValid.array[v8 >> 5] &= ~(0x80000000 >> (v8 & 0x1F));
  }
  if ( (unsigned int)v7 >= 0x180 )
  {
    LODWORD(v15) = 384;
    LODWORD(v13) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v13, v15) )
      __debugbreak();
  }
  *v10 &= ~v9;
  Sys_UnlockWrite(&s_decalVolumes.imageAtlas.atlasLock);
}

/*
==============
R_DecalVolumes_MoveGfxDecalVolumeMaterial
==============
*/
void R_DecalVolumes_MoveGfxDecalVolumeMaterial(const GfxDecalVolumeMaterial *from, GfxDecalVolumeMaterial *to, bool toOwnsResources)
{
  unsigned int MaterialIndex; 
  unsigned __int64 v6; 
  unsigned __int64 v7; 
  unsigned __int64 v8; 
  unsigned int v9; 
  unsigned int *v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  unsigned int v14; 
  __int64 v15; 
  int v16; 

  Sys_LockWrite(&s_decalVolumes.imageAtlas.atlasLock);
  MaterialIndex = R_DecalVolumes_GetMaterialIndex(to);
  v6 = MaterialIndex;
  if ( MaterialIndex >= 0x600 )
  {
    v16 = 1536;
    v14 = MaterialIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v14, v16) )
      __debugbreak();
  }
  s_decalVolumes.decalMaterialsValid.array[v6 >> 5] &= ~(0x80000000 >> (v6 & 0x1F));
  *(__m256i *)&to->name = *(__m256i *)&from->name;
  *(__m256i *)&to->channels[3] = *(__m256i *)&from->channels[3];
  *(__m256i *)&to->colorTint.y = *(__m256i *)&from->colorTint.y;
  *(double *)&to->textureAtlasRowCount = *(double *)&from->textureAtlasRowCount;
  v7 = R_DecalVolumes_GetMaterialIndex(from);
  v8 = R_DecalVolumes_GetMaterialIndex(to);
  if ( (unsigned int)v7 >= 0x600 )
  {
    LODWORD(v12) = 1536;
    LODWORD(v11) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v11, v12) )
      __debugbreak();
  }
  v9 = 0x80000000 >> (v7 & 0x1F);
  v10 = &s_decalVolumes.decalMaterialsValid.array[v7 >> 5];
  if ( (v9 & *v10) != 0 )
  {
    if ( (unsigned int)v8 >= 0x600 )
    {
      LODWORD(v15) = 1536;
      LODWORD(v13) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v13, v15) )
        __debugbreak();
    }
    s_decalVolumes.decalMaterialsValid.array[v8 >> 5] |= 0x80000000 >> (v8 & 0x1F);
  }
  else
  {
    if ( (unsigned int)v8 >= 0x600 )
    {
      LODWORD(v15) = 1536;
      LODWORD(v13) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v13, v15) )
        __debugbreak();
    }
    s_decalVolumes.decalMaterialsValid.array[v8 >> 5] &= ~(0x80000000 >> (v8 & 0x1F));
  }
  if ( (unsigned int)v7 >= 0x600 )
  {
    LODWORD(v15) = 1536;
    LODWORD(v13) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v13, v15) )
      __debugbreak();
  }
  *v10 &= ~v9;
  Sys_UnlockWrite(&s_decalVolumes.imageAtlas.atlasLock);
}

/*
==============
R_DecalVolumes_MoveGfxImage
==============
*/
void R_DecalVolumes_MoveGfxImage(const GfxImage *from, GfxImage *to, bool toOwnsResources)
{
  __int64 ImageIndex; 
  __int64 v7; 
  unsigned __int16 v8; 
  __int64 v9; 

  ImageAtlas_ManageCheckEnter();
  ImageAtlas_BackendCheckEnter();
  ImageIndex = (unsigned int)ImageAtlas_GetImageIndex(from);
  v7 = (unsigned int)ImageAtlas_GetImageIndex(to);
  Sys_LockWrite(&s_decalVolumes.imageAtlas.atlasLock);
  if ( s_decalVolumes.imageAtlas.imageIndexToProxyIndex[v7] )
  {
    ImageAtlas_BackendCheckLeave();
    ImageAtlas_ManageCheckLeave();
    R_DecalVolumes_ReleaseGfxImageAssetInternal(to, toOwnsResources, 0);
    ImageAtlas_ManageCheckEnter();
    ImageAtlas_BackendCheckEnter();
    if ( s_decalVolumes.imageAtlas.imageIndexToProxyIndex[v7] )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 5634, ASSERT_TYPE_ASSERT, "( ( ImageAtlas_GetProxyIndexFromImageIndex( toIndex ) == 0 ) )", "( to->name ) = %s", to->name) )
        __debugbreak();
    }
  }
  v8 = s_decalVolumes.imageAtlas.imageIndexToProxyIndex[ImageIndex];
  v9 = 0i64;
  if ( v8 )
  {
    ImageAtlas_SetImageIndexToProxyIndex(v7, v8);
    ImageAtlas_GetProxy(v8)->imageIndex = v7;
    s_decalVolumes.imageAtlas.imageIndexToProxyIndex[ImageIndex] = 0;
    s_decalVolumes.imageAtlas.imageIndexIsCopy[v7] = s_decalVolumes.imageAtlas.imageIndexIsCopy[ImageIndex];
  }
  if ( s_decalVolumes.imageAtlas.numPriorityAdjust )
  {
    while ( s_decalVolumes.imageAtlas.priorityAdjust[v9].imageIndex != (_DWORD)ImageIndex )
    {
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= s_decalVolumes.imageAtlas.numPriorityAdjust )
        goto LABEL_12;
    }
    s_decalVolumes.imageAtlas.priorityAdjust[v9].imageIndex = v7;
  }
LABEL_12:
  ImageAtlas_BackendCheckLeave();
  ImageAtlas_ManageCheckLeave();
}

/*
==============
R_DecalVolumes_MoveGfxImageEnd
==============
*/
void R_DecalVolumes_MoveGfxImageEnd(GfxImage *to)
{
  ImageAtlas_ManageCheckEnter();
  ImageAtlas_BackendCheckEnter();
  Sys_UnlockWrite(&s_decalVolumes.imageAtlas.atlasLock);
  ImageAtlas_BackendCheckLeave();
  ImageAtlas_ManageCheckLeave();
}

/*
==============
R_DecalVolumes_MyChanges
==============
*/
void R_DecalVolumes_MyChanges(void)
{
  ImageAtlas_TabulateCheckEnter();
  ImageAtlas_ManageCheckEnter();
  s_decalVolumes.imageAtlas.numPriorityAdjust = 0;
  memset_0(s_decalVolumes.imageAtlas.drawingContext, 0, 0x2400ui64);
  memset_0(&s_decalVolumes.imageAtlas.drawingContext[1], 0, sizeof(s_decalVolumes.imageAtlas.drawingContext[1]));
  s_decalVolumes.imageAtlas.myChangesLODDelay = 16;
  ImageAtlas_ManageCheckLeave();
  ImageAtlas_TabulateCheckLeave();
}

/*
==============
R_DecalVolumes_RadiantLive_PackMaterialInfo
==============
*/
__int64 R_DecalVolumes_RadiantLive_PackMaterialInfo(const GfxDecalVolumeMaterial *material, const GfxDecalVolumeMask *mask, DecalVolumesNormalBlendMode normalBlendMode, unsigned int mapIndex, unsigned int drawOrder)
{
  unsigned int v5; 
  char v6; 
  unsigned __int8 v7; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int decalVolumeMaterialCount; 
  GfxStaticDecalVolumeMaterial *decalVolumeMaterials; 
  GfxStaticDecalVolumeMask *decalVolumeMasks; 
  unsigned int decalVolumeMaskCount; 
  Material *v16; 
  unsigned int v17; 
  bool v18; 
  unsigned int v19; 
  unsigned int v20; 
  __int64 v22; 
  __int64 v23; 

  v5 = 0;
  v6 = mapIndex;
  v7 = normalBlendMode;
  v9 = 0;
  v10 = 2047;
  v11 = 0;
  decalVolumeMaterialCount = g_worldDraw->decalVolumeMaterialCount;
  decalVolumeMaterials = g_worldDraw->decalVolumeMaterials;
  decalVolumeMasks = g_worldDraw->decalVolumeMasks;
  decalVolumeMaskCount = g_worldDraw->decalVolumeMaskCount;
  if ( decalVolumeMaterialCount )
  {
    do
    {
      v16 = decalVolumeMaterials->material;
      ++decalVolumeMaterials;
      v17 = v11;
      if ( v16->decalVolumeMaterial != material )
        v17 = v9;
      ++v11;
      v9 = v17;
    }
    while ( v11 < decalVolumeMaterialCount );
  }
  if ( decalVolumeMaskCount )
  {
    do
    {
      v18 = decalVolumeMasks->blendMapOverride == mask;
      ++decalVolumeMasks;
      v19 = v5;
      if ( !v18 )
        v19 = v10;
      ++v5;
      v10 = v19;
    }
    while ( v5 < decalVolumeMaskCount );
  }
  if ( v9 >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp_db.h", 1552, ASSERT_TYPE_ASSERT, "(unsigned)( materialIndex ) < (unsigned)( ( ( 1 << 11 ) - 1) + 1 )", "materialIndex doesn't index DECAL_VOLUME_MATERIAL_MAX_COUNT + 1\n\t%i not in [0, %i)", v9, 2048) )
    __debugbreak();
  if ( v10 >= 0x800 )
  {
    LODWORD(v23) = 2048;
    LODWORD(v22) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp_db.h", 1553, ASSERT_TYPE_ASSERT, "(unsigned)( blendMapIndex ) < (unsigned)( ( ( 1 << 11 ) - 1) + 1 )", "blendMapIndex doesn't index DECAL_VOLUME_MASK_MAX_COUNT + 1\n\t%i not in [0, %i)", v22, v23) )
      __debugbreak();
  }
  if ( v7 >= 4u )
  {
    LODWORD(v23) = 4;
    LODWORD(v22) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp_db.h", 1554, ASSERT_TYPE_ASSERT, "(unsigned)( normalBlendModeOverride ) < (unsigned)( ( 1 << 2 ) )", "normalBlendModeOverride doesn't index DECAL_VOLUME_NORMAL_BLEND_MODE_MAX\n\t%i not in [0, %i)", v22, v23) )
      __debugbreak();
  }
  if ( drawOrder >= 8 )
  {
    LODWORD(v23) = 8;
    LODWORD(v22) = drawOrder;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp_db.h", 1555, ASSERT_TYPE_ASSERT, "(unsigned)( drawOrder ) < (unsigned)( 3 - (-4) + 1 )", "drawOrder doesn't index DECAL_VOLUME_DRAW_ORDER_MAX - DECAL_VOLUME_DRAW_ORDER_MIN + 1\n\t%i not in [0, %i)", v22, v23) )
      __debugbreak();
  }
  v20 = (32 * drawOrder) | v6 & 0x1F;
  if ( v20 >= 0x100 )
  {
    LODWORD(v23) = 256;
    LODWORD(v22) = v20;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_bsp_db.h", 1558, ASSERT_TYPE_ASSERT, "(unsigned)( mergedDrawOrder ) < (unsigned)( 1 << 8 )", "mergedDrawOrder doesn't index 1 << DECAL_VOLUME_DRAW_ORDER_BITS\n\t%i not in [0, %i)", v22, v23) )
      __debugbreak();
  }
  return v9 & 0x7FF | ((v10 & 0x7FF | (((4 * v20) | v7 & 3) << 11)) << 11);
}

/*
==============
R_DecalVolumes_ReleaseDefaultMask
==============
*/
void R_DecalVolumes_ReleaseDefaultMask(void)
{
  ;
}

/*
==============
R_DecalVolumes_ReleaseDynamic
==============
*/
void R_DecalVolumes_ReleaseDynamic(GfxDynamicDecalVolumeIndex index)
{
  bool *v1; 
  int v2; 

  v1 = &s_decalVolumes.dynamicDecalVolumesInUse[(unsigned __int16)index];
  if ( !*v1 )
  {
    v2 = (unsigned __int16)index;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 6441, ASSERT_TYPE_ASSERT, "(s_decalVolumes.dynamicDecalVolumesInUse[index])", "%s\n\tindex %u", "s_decalVolumes.dynamicDecalVolumesInUse[index]", v2) )
      __debugbreak();
  }
  if ( s_decalVolumes.numDynamicDecalVolumes )
  {
    --s_decalVolumes.numDynamicDecalVolumes;
    *v1 = 0;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 6442, ASSERT_TYPE_ASSERT, "(s_decalVolumes.numDynamicDecalVolumes > 0)", (const char *)&queryFormat, "s_decalVolumes.numDynamicDecalVolumes > 0") )
      __debugbreak();
    --s_decalVolumes.numDynamicDecalVolumes;
    *v1 = 0;
  }
}

/*
==============
R_DecalVolumes_ReleaseGfxDecalVolumeMask
==============
*/
void R_DecalVolumes_ReleaseGfxDecalVolumeMask(const GfxDecalVolumeMask *mask, bool ownsResources)
{
  unsigned __int64 MaskIndex; 
  int v3; 
  int v4; 

  MaskIndex = R_DecalVolumes_GetMaskIndex(mask);
  Sys_LockWrite(&s_decalVolumes.imageAtlas.atlasLock);
  if ( (unsigned int)MaskIndex >= 0x180 )
  {
    v4 = 384;
    v3 = MaskIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v3, v4) )
      __debugbreak();
  }
  s_decalVolumes.decalMasksValid.array[MaskIndex >> 5] &= ~(0x80000000 >> (MaskIndex & 0x1F));
  Sys_UnlockWrite(&s_decalVolumes.imageAtlas.atlasLock);
}

/*
==============
R_DecalVolumes_ReleaseGfxDecalVolumeMaterial
==============
*/
void R_DecalVolumes_ReleaseGfxDecalVolumeMaterial(const GfxDecalVolumeMaterial *material, bool ownsResources)
{
  unsigned __int64 MaterialIndex; 
  int v3; 
  int v4; 

  MaterialIndex = R_DecalVolumes_GetMaterialIndex(material);
  Sys_LockWrite(&s_decalVolumes.imageAtlas.atlasLock);
  if ( (unsigned int)MaterialIndex >= 0x600 )
  {
    v4 = 1536;
    v3 = MaterialIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v3, v4) )
      __debugbreak();
  }
  s_decalVolumes.decalMaterialsValid.array[MaterialIndex >> 5] &= ~(0x80000000 >> (MaterialIndex & 0x1F));
  Sys_UnlockWrite(&s_decalVolumes.imageAtlas.atlasLock);
}

/*
==============
R_DecalVolumes_ReleaseGfxImageAsset
==============
*/
void R_DecalVolumes_ReleaseGfxImageAsset(const GfxImage *image, bool ownsResources)
{
  R_DecalVolumes_ReleaseGfxImageAssetInternal(image, ownsResources, 1);
}

/*
==============
R_DecalVolumes_ReleaseGfxImageAssetInternal
==============
*/
void R_DecalVolumes_ReleaseGfxImageAssetInternal(const GfxImage *image, bool ownsResources, bool lock)
{
  unsigned int ImageIndex; 
  __int64 v7; 
  unsigned __int16 v8; 
  __int64 v9; 
  ImageAtlasProxy *Proxy; 
  unsigned __int16 entryIndex; 
  DecalVolumePriority Priority; 
  unsigned int *v13; 
  unsigned __int8 v14; 
  unsigned int *v15; 
  unsigned int numProxies; 
  bool v17; 
  __int64 v18; 
  int v19; 
  unsigned int numPriorityAdjust; 
  unsigned __int16 v21; 

  ImageAtlas_ManageCheckEnter();
  ImageAtlas_BackendCheckEnter();
  ImageAtlas_TabulateCheckEnter();
  ImageIndex = ImageAtlas_GetImageIndex(image);
  v7 = ImageIndex;
  if ( ownsResources )
  {
    v8 = s_decalVolumes.imageAtlas.imageIndexToProxyIndex[ImageIndex];
    if ( v8 )
    {
      if ( lock )
        Sys_LockWrite(&s_decalVolumes.imageAtlas.atlasLock);
      v9 = 0i64;
      s_decalVolumes.imageAtlas.imageIndexToProxyIndex[v7] = 0;
      Proxy = ImageAtlas_GetProxy(v8);
      ++Proxy->generation;
      *((_BYTE *)Proxy + 15) &= 0xC0u;
      *(_WORD *)&Proxy->loadedSize = 0;
      Proxy->streamingDistanceBias = 0;
      Proxy->pendingSize = 0;
      entryIndex = Proxy->entryIndex;
      Proxy->entryIndex = 0;
      v21 = entryIndex;
      s_decalVolumes.imageAtlas.drawingContext[0].neededSize[v8] = 0;
      s_decalVolumes.imageAtlas.drawingContext[1].neededSize[v8] = 0;
      if ( lock )
      {
        Sys_UnlockWrite(&s_decalVolumes.imageAtlas.atlasLock);
        entryIndex = v21;
      }
      ImageAtlas_UnloadEntry(entryIndex);
      Proxy->imageIndex = 0;
      if ( v8 >= 0xC00u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1449, ASSERT_TYPE_ASSERT, "(proxyIndex < ( 3 * (1024) ))", (const char *)&queryFormat, "proxyIndex < IMAGE_ATLAS_MAX_PROXIES") )
        __debugbreak();
      if ( !s_decalVolumes.imageAtlas.proxyFreelistCount_ && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1451, ASSERT_TYPE_ASSERT, "(atlas->proxyFreelistCount_ > 0)", (const char *)&queryFormat, "atlas->proxyFreelistCount_ > 0") )
        __debugbreak();
      LOWORD(s_decalVolumes.imageAtlas.proxyPool_[v8].imageNameHash) = s_decalVolumes.imageAtlas.proxyFreelistHead_;
      --s_decalVolumes.imageAtlas.proxyFreelistCount_;
      s_decalVolumes.imageAtlas.proxyFreelistHead_ = v8;
      Priority = R_DecalVolumes_GetPriority(image);
      if ( (unsigned __int8)Priority >= DECAL_VOLUME_PRIORITY_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 5444, ASSERT_TYPE_ASSERT, "( ( decalVolumePriority < ( sizeof( *array_counter( ImageAtlasStats::numProxyByPriority ) ) + 0 ) ) )", "( image->name ) = %s", image->name) )
        __debugbreak();
      v13 = &s_decalVolumes.imageAtlas.stats.numProxyByPriority[(unsigned __int8)Priority];
      if ( !*v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 5445, ASSERT_TYPE_ASSERT, "( ( atlas->stats.numProxyByPriority[decalVolumePriority] > 0 ) )", "( image->name ) = %s", image->name) )
        __debugbreak();
      --*v13;
      v14 = ImageAtlas_GetDecalAtlasIndex(image) - 1;
      if ( v14 >= 4u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 5448, ASSERT_TYPE_ASSERT, "( ( atlasIndex < ( sizeof( *array_counter( ImageAtlasStats::numProxyByAtlas ) ) + 0 ) ) )", "( image->name ) = %s", image->name) )
        __debugbreak();
      v15 = &s_decalVolumes.imageAtlas.stats.numProxyByAtlas[v14];
      if ( !*v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 5449, ASSERT_TYPE_ASSERT, "( ( atlas->stats.numProxyByAtlas[atlasIndex] > 0 ) )", "( image->name ) = %s", image->name) )
        __debugbreak();
      --*v15;
      numProxies = s_decalVolumes.imageAtlas.numProxies;
      if ( !s_decalVolumes.imageAtlas.numProxies )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 5453, ASSERT_TYPE_ASSERT, "(imageAtlas->numProxies > 0)", (const char *)&queryFormat, "imageAtlas->numProxies > 0") )
          __debugbreak();
        numProxies = s_decalVolumes.imageAtlas.numProxies;
      }
      v17 = numProxies == 1;
      v18 = numProxies - 1;
      v19 = 0;
      s_decalVolumes.imageAtlas.numProxies = v18;
      if ( !v17 )
      {
        while ( s_decalVolumes.imageAtlas.proxies[v19] != v8 )
        {
          if ( ++v19 >= (unsigned int)v18 )
            goto LABEL_34;
        }
        s_decalVolumes.imageAtlas.proxies[v19] = s_decalVolumes.imageAtlas.proxies[v18];
      }
LABEL_34:
      numPriorityAdjust = s_decalVolumes.imageAtlas.numPriorityAdjust;
      if ( s_decalVolumes.imageAtlas.numPriorityAdjust )
      {
        while ( s_decalVolumes.imageAtlas.priorityAdjust[v9].imageIndex != (_DWORD)v7 )
        {
          v9 = (unsigned int)(v9 + 1);
          if ( (unsigned int)v9 >= s_decalVolumes.imageAtlas.numPriorityAdjust )
            goto LABEL_43;
        }
        --s_decalVolumes.imageAtlas.numPriorityAdjust;
        s_decalVolumes.imageAtlas.priorityAdjust[v9] = (ImageAtlasPriorityAdjust)*((_QWORD *)&s_decalVolumes.imageAtlas.proxyCoords_[3076].w + numPriorityAdjust);
      }
    }
  }
  else
  {
    if ( !s_decalVolumes.imageAtlas.imageIndexIsCopy[ImageIndex] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 5482, ASSERT_TYPE_ASSERT, "( ( imageAtlas->imageIndexIsCopy[imageAtlasIndex] ) )", "( image->name ) = %s", image->name) )
      __debugbreak();
    s_decalVolumes.imageAtlas.imageIndexIsCopy[v7] = 0;
    s_decalVolumes.imageAtlas.imageIndexToProxyIndex[v7] = 0;
  }
LABEL_43:
  ImageAtlas_TabulateCheckLeave();
  ImageAtlas_BackendCheckLeave();
  ImageAtlas_ManageCheckLeave();
}

/*
==============
R_DecalVolumes_ReleaseTextureCheckEnter
==============
*/
void R_DecalVolumes_ReleaseTextureCheckEnter(void)
{
  if ( ((unsigned __int8)&s_decalVolumes.imageAtlas.releaseTextureCheck & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_decalVolumes.imageAtlas.releaseTextureCheck) )
    __debugbreak();
  if ( _InterlockedCompareExchange(&s_decalVolumes.imageAtlas.releaseTextureCheck, 1, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1295, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedCompareExchange( &s_decalVolumes.imageAtlas.releaseTextureCheck, 1, 0 ) == 0 ) )", "( s_decalVolumes.imageAtlas.releaseTextureCheckThread ) = %s", s_decalVolumes.imageAtlas.releaseTextureCheckThread) )
    __debugbreak();
  s_decalVolumes.imageAtlas.releaseTextureCheckThread = Sys_GetCurrentThreadContextName();
}

/*
==============
R_DecalVolumes_ReleaseTextureCheckLeave
==============
*/
void R_DecalVolumes_ReleaseTextureCheckLeave(void)
{
  s_decalVolumes.imageAtlas.releaseTextureCheckThread = "none";
  if ( ((unsigned __int8)&s_decalVolumes.imageAtlas.releaseTextureCheck & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_decalVolumes.imageAtlas.releaseTextureCheck) )
    __debugbreak();
  if ( _InterlockedCompareExchange(&s_decalVolumes.imageAtlas.releaseTextureCheck, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1307, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &s_decalVolumes.imageAtlas.releaseTextureCheck, 0, 1 ) == 1)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_decalVolumes.imageAtlas.releaseTextureCheck, 0, 1 ) == 1") )
    __debugbreak();
}

/*
==============
R_DecalVolumes_SetSelected
==============
*/
bool R_DecalVolumes_SetSelected(unsigned int decalIndex, bool isDynamic, bool selected)
{
  return 0;
}

/*
==============
R_DecalVolumes_SetStreamMultiview
==============
*/
void R_DecalVolumes_SetStreamMultiview(const StreamUpdateMultiView *multiView)
{
  DecalVolumeStreamViewInfo *v1; 
  __int64 v2; 
  float4 v3; 

  if ( frontEndDataOut )
  {
    v1 = &s_decalVolumes.streamViewInfo[frontEndDataOut->decalVolumeIndex];
    v2 = 8i64;
    do
    {
      v1 = (DecalVolumeStreamViewInfo *)((char *)v1 + 128);
      v3.v = (__m128)multiView->viewPos[0];
      multiView = (const StreamUpdateMultiView *)((char *)multiView + 128);
      *(float4 *)&v1[-1].multiView.viewDistanceScaleSq[4] = (float4)v3.v;
      *(_OWORD *)&v1[-1].multiView.viewDistanceScaleSq[8] = *(_OWORD *)&multiView[-1].viewDistanceScaleSq[8];
      *(_OWORD *)&v1[-1].multiView.viewDistanceScaleSq[12] = *(_OWORD *)&multiView[-1].viewDistanceScaleSq[12];
      *(_OWORD *)v1[-1].multiView.localClientIndex = *(_OWORD *)multiView[-1].localClientIndex;
      *(_OWORD *)&v1[-1].multiView.localClientIndex[4] = *(_OWORD *)&multiView[-1].localClientIndex[4];
      *(_OWORD *)&v1[-1].multiView.localClientIndex[8] = *(_OWORD *)&multiView[-1].localClientIndex[8];
      *(_OWORD *)&v1[-1].multiView.localClientIndex[12] = *(_OWORD *)&multiView[-1].localClientIndex[12];
      *(_OWORD *)&v1[-1].multiView.viewCount = *(_OWORD *)&multiView[-1].viewCount;
      --v2;
    }
    while ( v2 );
    v1->multiView.viewPos[0] = multiView->viewPos[0];
    v1->multiView.viewPos[1] = multiView->viewPos[1];
    v1->multiView.viewPos[2] = multiView->viewPos[2];
    v1->multiView.viewPos[3] = multiView->viewPos[3];
    v1->multiView.viewPos[4] = multiView->viewPos[4];
  }
}

/*
==============
R_DecalVolumes_Show3DDebug2
==============
*/
void R_DecalVolumes_Show3DDebug2(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  __m256i m_mainSceneColorRt; 
  GfxCmdBufContext v4; 
  GfxCmdBufContext v5; 
  R_RT_DepthHandle m_mainSceneDepthRt; 
  __m256i v7; 

  m_mainSceneColorRt = (__m256i)viewInfo->sceneRtInput.m_mainSceneColorRt;
  m_mainSceneDepthRt = viewInfo->sceneRtInput.m_mainSceneDepthRt;
  v4 = *gfxContext;
  v7 = m_mainSceneColorRt;
  v5 = v4;
  R_DecalVolumes_Show3DDebug(&v5, viewInfo, data, (R_RT_ColorHandle *)&v7, &m_mainSceneDepthRt, &s_decalVolumes.decalClusteringDataBuffer, &s_decalVolumes.cullIndirectArgsBuffer, rgp.blackImage, rgp.blackImage, rgp.blackImage, rgp.blackImage, 0);
}

/*
==============
R_DecalVolumes_Show3DDebug
==============
*/
void R_DecalVolumes_Show3DDebug(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxBackEndData *data, R_RT_ColorHandle *colorRt, R_RT_DepthHandle *depthRt, const GfxWrappedBuffer *debugData, const GfxWrappedBuffer *indirectArg, const GfxImage *floatZ, const GfxImage *tangentFrame, const GfxImage *entityIDVelocity, const GfxImage *packedStencil, bool taskGraph)
{
  GfxCmdBufSourceState *source; 
  GfxCmdBufState *state; 
  unsigned int v18; 
  __m256i v19; 
  GfxCmdBufContext v20; 
  R_RT_Handle v22; 
  unsigned int v23; 
  const R_RT_Surface *Surface; 
  GfxCmdBufSourceState *v25; 
  float v26; 
  unsigned int v27; 
  GfxCmdBufState *v28; 
  R_RT_Handle v29; 
  const GfxWrappedBuffer *v30; 
  const GfxBackEndData *v31; 
  __m256i v32; 
  __m256i v33; 
  R_RT_Group v34; 
  GfxViewport viewport; 
  R_RT_Group v36; 

  v30 = indirectArg;
  v31 = data;
  if ( taskGraph )
  {
    state = gfxContext->state;
  }
  else
  {
    source = gfxContext->source;
    R_InitCmdBufSourceState(gfxContext->source, &viewInfo->input);
    state = gfxContext->state;
    R_InitLocalCmdBufState(state, &source->input);
  }
  R_ProfBeginNamedEvent(state, "D+ 3D Overlay");
  if ( rg.vrs )
  {
    _XMM0 = viewInfo->sceneGeoViewport;
    v18 = 2;
  }
  else
  {
    _XMM0 = viewInfo->sceneViewport;
    v18 = 1;
  }
  v19 = *(__m256i *)colorRt;
  v20 = *gfxContext;
  viewport = _XMM0;
  v32 = *(__m256i *)depthRt;
  v29 = (R_RT_Handle)v32;
  v33 = v19;
  if ( LOWORD(_XMM0.x) )
  {
    R_RT_Handle::GetSurface(&v29);
    v32 = (__m256i)v29;
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 463, ASSERT_TYPE_ASSERT, "(depthRt)", (const char *)&queryFormat, "depthRt") )
      __debugbreak();
  }
  v22 = colorRt->R_RT_Handle;
  v34.m_colorRtCount = 1;
  v29 = v22;
  if ( LOWORD(_XMM0.x) )
  {
    R_RT_Handle::GetSurface(&v29);
  }
  else
  {
    if ( v33.m256i_i32[2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 442, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
      __debugbreak();
  }
  v34.m_colorRts[0] = *colorRt;
  v34.m_depthRt = (R_RT_DepthHandle)v32;
  v36 = v34;
  *(GfxCmdBufContext *)&v29.m_surfaceID = v20;
  R_SetRenderTargetsInternal((GfxCmdBufContext *)&v29, &v36, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp(9509)");
  v23 = v18 * R_RT_Handle::GetSurface(colorRt)->m_image.m_base.width;
  Surface = R_RT_Handle::GetSurface(colorRt);
  v25 = gfxContext->source;
  v26 = (float)v18;
  v27 = v18 * Surface->m_image.m_base.height;
  R_SetViewportMSParams(gfxContext->source, v26);
  R_SetRenderTargetSize(v25, v23, v27, GFX_USE_VIEWPORT_FOR_VIEW);
  R_SetViewportStruct(v25, &viewport);
  v28 = gfxContext->state;
  R_SetViewportAndScissorSeparate(v28, &viewport, &viewport);
  *(GfxCmdBufContext *)&v29.m_surfaceID = v20;
  RB_DecalVolumes_Show3DDebugInternal((GfxCmdBufContext *)&v29, viewInfo, v31, debugData, v30, floatZ, tangentFrame, entityIDVelocity, packedStencil);
  R_ProfEndNamedEvent(v28);
  if ( !taskGraph )
    R_ShutdownLocalCmdBufState(v28, &v25->input);
}

/*
==============
R_DecalVolumes_ShutdownFrameData
==============
*/
void R_DecalVolumes_ShutdownFrameData(void)
{
  __int64 v0; 
  ImageAtlasCopyJobImageAlias *aliases; 
  unsigned int v2; 
  ID3D12Resource *v3; 
  unsigned int v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 

  v0 = 2i64;
  aliases = s_decalVolumes.aliases;
  v7 = 2i64;
  do
  {
    v2 = 0;
    if ( aliases->aliasCount )
    {
      do
      {
        R_ReleaseShaderTextureView(&aliases->srcTextureAliasView[v2]);
        v3 = aliases->srcTextureAlias[v2];
        aliases->srcTextureAlias[v2] = NULL;
        if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_types_d3d.h", 1554, ASSERT_TYPE_ASSERT, "(var)", (const char *)&queryFormat, "var") )
          __debugbreak();
        v4 = v3->m_pFunction->Release(v3);
        if ( !R_IsAnalysisToolPresent() && !R_IsIncompatibleOverlayPresent() )
        {
          if ( v4 )
          {
            LODWORD(v6) = v4;
            LODWORD(v5) = 3553;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_types_d3d.h", 1569, ASSERT_TYPE_ASSERT, "(!useCount)", "%s\n\t%s (%i) %s->Release() failed: %i leak(s)!", "!useCount", "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", v5, "aliases.srcTextureAlias[iAlias]", v6) )
              __debugbreak();
          }
        }
        ++v2;
      }
      while ( v2 < aliases->aliasCount );
      v0 = v7;
    }
    aliases->aliasCount = 0;
    ++aliases;
    v7 = --v0;
  }
  while ( v0 );
  memset_0(s_decalVolumes.aliases, 0, sizeof(s_decalVolumes.aliases));
  *(_WORD *)&s_decalVolumes.channelsCleared = 256;
}

/*
==============
R_DecalVolumes_ShutdownWorldBuffers
==============
*/
void R_DecalVolumes_ShutdownWorldBuffers(GfxWorld *world)
{
  if ( world->draw.decalVolumeMaterialCount + world->draw.decalVolumeMaskCount )
    R_ShutdownGfxWrappedBuffer(&world->draw.materialAndMaskIndirectionBuffer);
  memset_0(s_decalVolumes.dynamicDecalVolumes, 0, sizeof(s_decalVolumes.dynamicDecalVolumes));
  memset_0(s_decalVolumes.dynamicDecalVolumesInUse, 0, sizeof(s_decalVolumes.dynamicDecalVolumesInUse));
  s_decalVolumes.numDynamicDecalVolumes = 0;
  memset_0(s_decalVolumes.selectedDecalVolumes, 0, sizeof(s_decalVolumes.selectedDecalVolumes));
  s_decalVolumes.numSelectedDecalVolumes = 0;
}

/*
==============
R_DecalVolumes_StartStreaming
==============
*/
void R_DecalVolumes_StartStreaming(const GfxImage *image)
{
  Sys_LockWrite(&s_decalVolumes.imageAtlas.atlasLock);
  if ( !s_decalVolumes.imageAtlas.imageIndexToProxyIndex[(unsigned int)ImageAtlas_GetImageIndex(image)] )
    R_DecalVolumes_CreateGfxImageAssetInternal(image, 0);
  Sys_UnlockWrite(&s_decalVolumes.imageAtlas.atlasLock);
}

/*
==============
R_DecalVolumes_SwapGfxDecalVolumeMask
==============
*/
void R_DecalVolumes_SwapGfxDecalVolumeMask(const GfxDecalVolumeMask *from, GfxDecalVolumeMask *to)
{
  Sys_LockWrite(&s_decalVolumes.imageAtlas.atlasLock);
}

/*
==============
R_DecalVolumes_SwapGfxDecalVolumeMaskEnd
==============
*/
void R_DecalVolumes_SwapGfxDecalVolumeMaskEnd(const GfxDecalVolumeMask *from, GfxDecalVolumeMask *to)
{
  unsigned __int64 MaskIndex; 
  unsigned __int64 v4; 
  unsigned int v5; 
  unsigned int *v6; 
  unsigned int v7; 
  unsigned int *v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  int v13; 

  MaskIndex = R_DecalVolumes_GetMaskIndex(from);
  v4 = R_DecalVolumes_GetMaskIndex(to);
  if ( (unsigned int)MaskIndex >= 0x180 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", MaskIndex, 384) )
    __debugbreak();
  v5 = 0x80000000 >> (MaskIndex & 0x1F);
  v6 = &s_decalVolumes.decalMasksValid.array[MaskIndex >> 5];
  v13 = v5 & *v6;
  if ( (unsigned int)v4 >= 0x180 )
  {
    LODWORD(v10) = 384;
    LODWORD(v9) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v9, v10) )
      __debugbreak();
  }
  v7 = 0x80000000 >> (v4 & 0x1F);
  v8 = &s_decalVolumes.decalMasksValid.array[v4 >> 5];
  if ( (v7 & *v8) != 0 )
  {
    if ( (unsigned int)MaskIndex >= 0x180 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", MaskIndex, 384) )
      __debugbreak();
    *v6 |= v5;
  }
  else
  {
    if ( (unsigned int)MaskIndex >= 0x180 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", MaskIndex, 384) )
      __debugbreak();
    *v6 &= ~v5;
  }
  if ( v13 )
  {
    if ( (unsigned int)v4 >= 0x180 )
    {
      LODWORD(v12) = 384;
      LODWORD(v11) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v11, v12) )
        __debugbreak();
    }
    *v8 |= v7;
  }
  else
  {
    if ( (unsigned int)v4 >= 0x180 )
    {
      LODWORD(v12) = 384;
      LODWORD(v11) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v11, v12) )
        __debugbreak();
    }
    *v8 &= ~v7;
  }
  Sys_UnlockWrite(&s_decalVolumes.imageAtlas.atlasLock);
}

/*
==============
R_DecalVolumes_SwapGfxDecalVolumeMaterial
==============
*/
void R_DecalVolumes_SwapGfxDecalVolumeMaterial(const GfxDecalVolumeMaterial *from, GfxDecalVolumeMaterial *to)
{
  Sys_LockWrite(&s_decalVolumes.imageAtlas.atlasLock);
}

/*
==============
R_DecalVolumes_SwapGfxDecalVolumeMaterialEnd
==============
*/
void R_DecalVolumes_SwapGfxDecalVolumeMaterialEnd(const GfxDecalVolumeMaterial *from, GfxDecalVolumeMaterial *to)
{
  unsigned __int64 MaterialIndex; 
  unsigned __int64 v4; 
  unsigned int v5; 
  unsigned int *v6; 
  unsigned int v7; 
  unsigned int *v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  int v13; 

  MaterialIndex = R_DecalVolumes_GetMaterialIndex(from);
  v4 = R_DecalVolumes_GetMaterialIndex(to);
  if ( (unsigned int)MaterialIndex >= 0x600 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", MaterialIndex, 1536) )
    __debugbreak();
  v5 = 0x80000000 >> (MaterialIndex & 0x1F);
  v6 = &s_decalVolumes.decalMaterialsValid.array[MaterialIndex >> 5];
  v13 = v5 & *v6;
  if ( (unsigned int)v4 >= 0x600 )
  {
    LODWORD(v10) = 1536;
    LODWORD(v9) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v9, v10) )
      __debugbreak();
  }
  v7 = 0x80000000 >> (v4 & 0x1F);
  v8 = &s_decalVolumes.decalMaterialsValid.array[v4 >> 5];
  if ( (v7 & *v8) != 0 )
  {
    if ( (unsigned int)MaterialIndex >= 0x600 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", MaterialIndex, 1536) )
      __debugbreak();
    *v6 |= v5;
  }
  else
  {
    if ( (unsigned int)MaterialIndex >= 0x600 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", MaterialIndex, 1536) )
      __debugbreak();
    *v6 &= ~v5;
  }
  if ( v13 )
  {
    if ( (unsigned int)v4 >= 0x600 )
    {
      LODWORD(v12) = 1536;
      LODWORD(v11) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v11, v12) )
        __debugbreak();
    }
    *v8 |= v7;
  }
  else
  {
    if ( (unsigned int)v4 >= 0x600 )
    {
      LODWORD(v12) = 1536;
      LODWORD(v11) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v11, v12) )
        __debugbreak();
    }
    *v8 &= ~v7;
  }
  Sys_UnlockWrite(&s_decalVolumes.imageAtlas.atlasLock);
}

/*
==============
R_DecalVolumes_SwapGfxImage
==============
*/
void R_DecalVolumes_SwapGfxImage(const GfxImage *from, GfxImage *to)
{
  __int64 ImageIndex; 
  unsigned int v5; 
  __int64 v6; 
  unsigned __int16 v7; 
  ImageAtlasProxy *Proxy; 
  ImageAtlasProxy *v9; 
  bool v10; 
  __int64 v11; 
  int v12; 
  unsigned int numPriorityAdjust; 

  ImageAtlas_ManageCheckEnter();
  ImageAtlas_BackendCheckEnter();
  ImageAtlas_TabulateCheckEnter();
  ImageIndex = (unsigned int)ImageAtlas_GetImageIndex(from);
  v5 = ImageAtlas_GetImageIndex(to);
  v6 = v5;
  if ( s_decalVolumes.imageAtlas.imageIndexToProxyIndex[ImageIndex] || s_decalVolumes.imageAtlas.imageIndexToProxyIndex[v5] )
  {
    Sys_LockWrite(&s_decalVolumes.imageAtlas.atlasLock);
    v7 = s_decalVolumes.imageAtlas.imageIndexToProxyIndex[v6];
    s_decalVolumes.imageAtlas.imageIndexToProxyIndex[v6] = s_decalVolumes.imageAtlas.imageIndexToProxyIndex[ImageIndex];
    s_decalVolumes.imageAtlas.imageIndexToProxyIndex[ImageIndex] = v7;
    Proxy = ImageAtlas_GetProxy(v7);
    if ( Proxy )
      Proxy->imageIndex = ImageIndex;
    v9 = ImageAtlas_GetProxy(s_decalVolumes.imageAtlas.imageIndexToProxyIndex[v6]);
    if ( v9 )
      v9->imageIndex = v6;
    v10 = s_decalVolumes.imageAtlas.imageIndexIsCopy[v6];
    s_decalVolumes.imageAtlas.imageIndexIsCopy[v6] = s_decalVolumes.imageAtlas.imageIndexIsCopy[ImageIndex];
    v11 = 0i64;
    s_decalVolumes.imageAtlas.imageIndexIsCopy[ImageIndex] = v10;
    v12 = 0;
    numPriorityAdjust = s_decalVolumes.imageAtlas.numPriorityAdjust;
    if ( s_decalVolumes.imageAtlas.numPriorityAdjust )
    {
      while ( s_decalVolumes.imageAtlas.priorityAdjust[v12].imageIndex != (_DWORD)ImageIndex )
      {
        if ( ++v12 >= s_decalVolumes.imageAtlas.numPriorityAdjust )
          goto LABEL_12;
      }
      s_decalVolumes.imageAtlas.priorityAdjust[v12].imageIndex = v6;
      numPriorityAdjust = s_decalVolumes.imageAtlas.numPriorityAdjust;
LABEL_12:
      if ( numPriorityAdjust )
      {
        while ( s_decalVolumes.imageAtlas.priorityAdjust[v11].imageIndex != (_DWORD)v6 )
        {
          v11 = (unsigned int)(v11 + 1);
          if ( (unsigned int)v11 >= numPriorityAdjust )
            goto LABEL_17;
        }
        s_decalVolumes.imageAtlas.priorityAdjust[v11].imageIndex = ImageIndex;
      }
    }
  }
LABEL_17:
  ImageAtlas_TabulateCheckLeave();
  ImageAtlas_BackendCheckLeave();
  ImageAtlas_ManageCheckLeave();
}

/*
==============
R_DecalVolumes_SwapGfxImageEnd
==============
*/
void R_DecalVolumes_SwapGfxImageEnd(const GfxImage *from, GfxImage *to)
{
  __int64 ImageIndex; 
  int v5; 

  ImageAtlas_ManageCheckEnter();
  ImageAtlas_BackendCheckEnter();
  ImageIndex = (unsigned int)ImageAtlas_GetImageIndex(from);
  v5 = ImageAtlas_GetImageIndex(to);
  if ( s_decalVolumes.imageAtlas.imageIndexToProxyIndex[ImageIndex] || s_decalVolumes.imageAtlas.imageIndexToProxyIndex[v5] )
    Sys_UnlockWrite(&s_decalVolumes.imageAtlas.atlasLock);
  ImageAtlas_BackendCheckLeave();
  ImageAtlas_ManageCheckLeave();
}

/*
==============
R_DecalVolumes_UpdateGpuBuffers
==============
*/
void R_DecalVolumes_UpdateGpuBuffers(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxBackEndData *data, unsigned int decalCount)
{
  __int64 decalVolumeIndex; 
  __int64 v5; 
  __int64 v6; 
  __m256i *v7; 
  __int64 v8; 
  __int64 v9; 
  GfxImpactMarkDecalVolumeGPU *v10; 
  int v11; 
  __int64 v12; 
  __m256i *v13; 
  signed __int64 v14; 
  __int64 v15; 
  char *v16; 
  GfxImpactMarkDecalVolumeGPU *v17; 
  __m256i v18; 
  unsigned __int64 v19; 
  __int64 v20; 
  unsigned int v21; 
  GfxWorldDraw *v22; 
  __int64 v23; 
  unsigned int v24; 
  __int64 transientZoneIndex; 
  GfxWorldTransientZone *v26; 
  GfxDecalVolumeTransientData *decalVolumes; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 

  if ( decalCount )
  {
    decalVolumeIndex = data->decalVolumeIndex;
    v5 = decalVolumeIndex;
    v6 = (unsigned int)decalVolumeIndex;
    R_UpdateGfxWrappedBuffer(&s_decalVolumes.proxyCoordsBuffer[v6], s_decalVolumes.proxyCoords[decalVolumeIndex], 0x9000u);
    R_UpdateGfxWrappedBuffer(&s_decalVolumes.decalMaterialsBuffer[v6], s_decalVolumes.decalMaterials[decalVolumeIndex], 0x18000u);
    R_UpdateGfxWrappedBuffer(&s_decalVolumes.decalMasksBuffer[v6], s_decalVolumes.decalMasks[decalVolumeIndex], 0xC00u);
    v7 = (__m256i *)R_BeginWrappedBufferDataWrite(&s_decalVolumes.impactMarkDecalsBuffer[v6]);
    if ( v7 )
    {
      v8 = s_decalVolumes.intVolumesCount[decalVolumeIndex];
      v9 = s_decalVolumes.particleMarksCount[decalVolumeIndex];
      if ( (int)v9 + (int)v8 > 1024 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 8954, ASSERT_TYPE_ASSERT, "( ( markCount + particleMarkCount <= ( 1024 ) ) )", "( markCount + particleMarkCount ) = %i", v9 + v8) )
        __debugbreak();
      v10 = s_decalVolumes.impactMarkDecalsCPU[v5];
      v11 = 0;
      v12 = v8;
      if ( (int)v8 > 0 )
      {
        v13 = v7;
        v14 = (char *)v10 - (char *)v7;
        v11 = v8;
        do
        {
          *v13 = *(__m256i *)((char *)v13 + v14);
          v13[1] = *(__m256i *)((char *)&v13[1] + v14);
          v13[2].m256i_i64[0] = *(__int64 *)((char *)v13[2].m256i_i64 + v14);
          v13[2].m256i_i32[2] = *(int *)((char *)&v13[2].m256i_i32[2] + v14);
          v13 = (__m256i *)((char *)v13 + 76);
          --v12;
        }
        while ( v12 );
      }
      v15 = v9;
      if ( (int)v9 > 0 )
      {
        v16 = &v7->m256i_i8[76 * v11];
        v17 = v10 + 1023;
        do
        {
          v16 += 76;
          v18 = *(__m256i *)v17->obb.center.v;
          --v17;
          *(__m256i *)(v16 - 76) = v18;
          *(__m256i *)(v16 - 44) = *(__m256i *)&v17[1].obb.axis[1].z;
          *(double *)(v16 - 12) = *(double *)&v17[1].color;
          *((_DWORD *)v16 - 1) = v17[1].packedTemperatureBaseAndScale;
          --v15;
        }
        while ( v15 );
      }
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 8949, ASSERT_TYPE_ASSERT, "(bufferData)", (const char *)&queryFormat, "bufferData") )
    {
      __debugbreak();
    }
    R_EndWrappedBufferDataWrite(&s_decalVolumes.impactMarkDecalsBuffer[v6]);
    R_UpdateGfxWrappedBuffer(&s_decalVolumes.staticCollectionWorkgroups[v6], s_decalVolumes.staticCollectionWorkgroupsCPU[v5], 0x4000u);
    R_UpdateGfxWrappedBuffer(&s_decalVolumes.dynamicDecalsBuffer, s_decalVolumes.dynamicDecalVolumes, 0x2100u);
  }
  if ( s_decalVolumes.updateQueueLock.writeThreadId == Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 62, ASSERT_TYPE_ASSERT, "( critSect->writeThreadId != Sys_GetCurrentThreadId() )", "This is a non-recursive lock! Don't attempt to take a read lock if the calling thread already has the write lock or this will loop infinitely.") )
    __debugbreak();
  v19 = (unsigned __int64)&s_decalVolumes.updateQueueLock & 3;
  if ( ((unsigned __int8)&s_decalVolumes.updateQueueLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_decalVolumes.updateQueueLock) )
    __debugbreak();
  _InterlockedIncrement(&s_decalVolumes.updateQueueLock.readCount);
  while ( s_decalVolumes.updateQueueLock.writeCount )
    Sys_Sleep(0);
  v20 = 0i64;
  if ( s_decalVolumes.updateQueueCount )
  {
    do
    {
      v21 = s_decalVolumes.updateQueueIndices[v20];
      v22 = g_worldDraw;
      v23 = (unsigned __int16)v21;
      v24 = HIWORD(v21);
      if ( (unsigned int)v23 >= g_worldDraw->decalVolumeCollectionCount )
      {
        LODWORD(v31) = g_worldDraw->decalVolumeCollectionCount;
        LODWORD(v30) = v23;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 8990, ASSERT_TYPE_ASSERT, "(unsigned)( iCollection ) < (unsigned)( g_worldDraw->decalVolumeCollectionCount )", "iCollection doesn't index g_worldDraw->decalVolumeCollectionCount\n\t%i not in [0, %i)", v30, v31) )
          __debugbreak();
        v22 = g_worldDraw;
      }
      transientZoneIndex = v22->decalVolumeCollections[v23].transientZoneIndex;
      v26 = v22->transientZones[transientZoneIndex];
      if ( v26 && (decalVolumes = v26->decalVolumes) != NULL )
      {
        v28 = (unsigned int)v20;
        if ( v24 >= decalVolumes->decalVolumeCount )
        {
          LODWORD(v31) = decalVolumes->decalVolumeCount;
          LODWORD(v30) = v24;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 9000, ASSERT_TYPE_ASSERT, "(unsigned)( iDecal ) < (unsigned)( zone->decalVolumes->decalVolumeCount )", "iDecal doesn't index zone->decalVolumes->decalVolumeCount\n\t%i not in [0, %i)", v30, v31) )
            __debugbreak();
        }
        v29 = (__int64)&v26->decalVolumes->decalVolumes[v24];
        *(__m256i *)v29 = *(__m256i *)s_decalVolumes.updateQueue[v28].obbCenter.v;
        *(double *)(v29 + 32) = *(double *)&s_decalVolumes.updateQueueIndices[11 * v28 - 2808];
        *(_DWORD *)(v29 + 40) = s_decalVolumes.updateQueueIndices[11 * v28 - 2806];
      }
      else
      {
        Com_PrintWarning(8, "RB_FillFrustumGrid decal update failed. Zone %u unloaded. uid = %u\n", transientZoneIndex, v24);
      }
      v20 = (unsigned int)(v20 + 1);
    }
    while ( (unsigned int)v20 < s_decalVolumes.updateQueueCount );
    v19 = (unsigned __int64)&s_decalVolumes.updateQueueLock & 3;
  }
  s_decalVolumes.updateQueueCount = 0;
  if ( s_decalVolumes.updateQueueLock.readCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 90, ASSERT_TYPE_ASSERT, "( critSect->readCount ) > ( 0 )", "%s > %s\n\t%i, %i", "critSect->readCount", "0", s_decalVolumes.updateQueueLock.readCount, 0i64) )
    __debugbreak();
  if ( v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_decalVolumes.updateQueueLock) )
    __debugbreak();
  _InterlockedDecrement(&s_decalVolumes.updateQueueLock.readCount);
}

/*
==============
R_DecalVolumes_UpdateImageTexturesCheckEnter
==============
*/
void R_DecalVolumes_UpdateImageTexturesCheckEnter(void)
{
  if ( ((unsigned __int8)&s_decalVolumes.imageAtlas.atlasUpdateImageTexturesCheck & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_decalVolumes.imageAtlas.atlasUpdateImageTexturesCheck) )
    __debugbreak();
  if ( _InterlockedCompareExchange(&s_decalVolumes.imageAtlas.atlasUpdateImageTexturesCheck, 1, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1277, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedCompareExchange( &s_decalVolumes.imageAtlas.atlasUpdateImageTexturesCheck, 1, 0 ) == 0 ) )", "( s_decalVolumes.imageAtlas.atlasUpdateImageTexturesCheckThread ) = %s", s_decalVolumes.imageAtlas.atlasUpdateImageTexturesCheckThread) )
    __debugbreak();
  s_decalVolumes.imageAtlas.atlasUpdateImageTexturesCheckThread = Sys_GetCurrentThreadContextName();
}

/*
==============
R_DecalVolumes_UpdateImageTexturesCheckLeave
==============
*/
void R_DecalVolumes_UpdateImageTexturesCheckLeave(void)
{
  s_decalVolumes.imageAtlas.atlasUpdateImageTexturesCheckThread = "none";
  if ( ((unsigned __int8)&s_decalVolumes.imageAtlas.atlasUpdateImageTexturesCheck & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_decalVolumes.imageAtlas.atlasUpdateImageTexturesCheck) )
    __debugbreak();
  if ( _InterlockedCompareExchange(&s_decalVolumes.imageAtlas.atlasUpdateImageTexturesCheck, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 1289, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &s_decalVolumes.imageAtlas.atlasUpdateImageTexturesCheck, 0, 1 ) == 1)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_decalVolumes.imageAtlas.atlasUpdateImageTexturesCheck, 0, 1 ) == 1") )
    __debugbreak();
}

/*
==============
R_DecalVolumes_Wait
==============
*/
void R_DecalVolumes_Wait(const GfxBackEndData *data, const GfxViewInfo *viewInfo)
{
  unsigned int viewInfoIndex; 
  unsigned int viewInfoCount; 
  unsigned int v5; 
  unsigned int v6; 

  viewInfoIndex = data->viewInfoIndex;
  viewInfoCount = data->viewInfoCount;
  if ( viewInfoIndex >= viewInfoCount )
  {
    v6 = viewInfoCount;
    v5 = viewInfoIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 9023, ASSERT_TYPE_ASSERT, "(unsigned)( data->viewInfoIndex ) < (unsigned)( data->viewInfoCount )", "data->viewInfoIndex doesn't index data->viewInfoCount\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  Sys_WaitWorkerCmdsOfType(WRKCMD_DECAL_VOLUMES_MARKS_FINALIZE);
  Sys_WaitWorkerCmdsOfType(WRKCMD_GENERATE_DECAL_BUFFER);
  Sys_WaitWorkerCmdsOfType(WRKCMD_DECAL_VOLUMES_FILL_BUFFER);
  RB_DecalVolumesGrid_WaitWorkerCmd(data->decalVolumeIndex);
}

/*
==============
R_DrawDecalVolumesDebug
==============
*/
void R_DrawDecalVolumesDebug(const GfxBackEndData *data, const GfxViewParms *viewParms, unsigned int displayWidth, unsigned int displayHeight)
{
  const GfxViewParms *v4; 
  int integer; 
  __int64 v7; 
  bool enabled; 
  tmat33_t<vec3_t> *rotation; 
  DecalVolumeMarkDebugData *v10; 
  __int64 decalVolumeIndex; 
  unsigned int v12; 
  float distFromCamera; 
  float v14; 
  float v15; 
  unsigned int v16; 
  unsigned __int16 *v17; 
  __int64 v18; 
  __int64 v19; 
  GfxDecalVolumeCollection *decalVolumeCollections; 
  __int64 v21; 
  GfxDecalVolumeTransientData *v22; 
  vec4_t *color; 
  __int64 depthTest; 
  vec3_t pos; 

  v4 = viewParms;
  if ( r_decalVolumes->current.enabled )
  {
    integer = r_decalVolumesDebug->current.integer;
    if ( integer < 0 && !r_decalVolumesShowMaterialName->current.enabled && !R_DecalVolumesGrid_DebugDrawEnabled() && r_decalVolumesMarksDebug->current.integer < 0 )
      return;
  }
  else
  {
    integer = 0;
  }
  R_DecalVolumes_Wait(data, &frontEndDataOut->viewInfo[frontEndDataOut->viewInfoIndex]);
  v7 = r_decalVolumesMarksDebug->current.integer;
  if ( (int)v7 >= 0 )
  {
    enabled = r_decalVolumesDebugDepthTest->current.enabled;
    if ( (_DWORD)v7 )
    {
      if ( (int)v7 > 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 9961, ASSERT_TYPE_ASSERT, "( ( marksDebug <= 64 ) )", "( marksDebug ) = %i", r_decalVolumesMarksDebug->current.integer) )
        __debugbreak();
      v10 = &s_decalVolumes.decalVolumeMarksDebug[v7 - 1];
      if ( v10->valid )
      {
        R_DecalVolumes_DrawDebugAxis(&v10->origin, &v10->axis, &v10->halfSize);
        R_AddDebugPyramidOriented(&frontEndDataOut->debugGlobals, &v10->origin, v10->halfSize.v[0], v10->halfSize.v[1], &v10->axis, &v10->color, enabled);
      }
    }
    else
    {
      rotation = &s_decalVolumes.decalVolumeMarksDebug[0].axis;
      do
      {
        if ( LOBYTE(rotation[1].row2.y) )
        {
          R_DecalVolumes_DrawDebugAxis(&rotation[-1].m[2], rotation, rotation[1].m);
          R_AddDebugPyramidOriented(&frontEndDataOut->debugGlobals, &rotation[-1].m[2], rotation[1].m[0].v[0], rotation[1].m[0].v[1], rotation, (const vec4_t *)&rotation[1].row1, enabled);
        }
        rotation = (tmat33_t<vec3_t> *)((char *)rotation + 80);
      }
      while ( (__int64)rotation < (__int64)&s_decalVolumes.markVfxName[0][8] );
    }
  }
  decalVolumeIndex = data->decalVolumeIndex;
  if ( r_decalVolumesShowMaterialName->current.enabled )
  {
    v12 = s_decalVolumes.stagingRing.materialInfoCountCpu[decalVolumeIndex];
    if ( v12 > 8 )
    {
      LODWORD(color) = s_decalVolumes.stagingRing.materialInfoCountCpu[decalVolumeIndex];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 10008, ASSERT_TYPE_ASSERT, "( ( materialCount <= 8 ) )", "( materialCount ) = %u", color) )
        __debugbreak();
    }
    if ( v12 )
    {
      distFromCamera = s_decalVolumes.stagingRing.materialInfoCpu[decalVolumeIndex]->distFromCamera;
      v14 = distFromCamera * v4->camera.axis.m[0].v[1];
      pos.v[0] = (float)(distFromCamera * v4->camera.axis.m[0].v[0]) + v4->camera.origin.v[0];
      v15 = distFromCamera * v4->camera.axis.m[0].v[2];
      pos.v[1] = v14 + v4->camera.origin.v[1];
      pos.v[2] = v15 + v4->camera.origin.v[2];
      R_AddDebugStar(&frontEndDataOut->debugGlobals, &pos, 2.0, &colorMagenta);
    }
  }
  if ( integer >= 4 )
  {
    v16 = 2048;
    if ( s_decalVolumes.intCollectionsCount[decalVolumeIndex] < 2048 )
      v16 = s_decalVolumes.intCollectionsCount[decalVolumeIndex];
    if ( v16 )
    {
      v17 = s_decalVolumes.intCollections[decalVolumeIndex];
      v18 = v16;
      do
      {
        v19 = *v17;
        decalVolumeCollections = rgp.world->draw.decalVolumeCollections;
        if ( decalVolumeCollections[v19].transientZoneIndex >= data->transientDrawContext.zoneCount )
        {
          LODWORD(depthTest) = data->transientDrawContext.zoneCount;
          LODWORD(color) = decalVolumeCollections[v19].transientZoneIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 10041, ASSERT_TYPE_ASSERT, "(unsigned)( collection.transientZoneIndex ) < (unsigned)( data->transientDrawContext.zoneCount )", "collection.transientZoneIndex doesn't index data->transientDrawContext.zoneCount\n\t%i not in [0, %i)", color, depthTest) )
            __debugbreak();
        }
        v21 = 0i64;
        v22 = data->transientDrawContext.decalVolumes[decalVolumeCollections[v19].transientZoneIndex];
        if ( v22->collectionCount )
        {
          while ( (_DWORD)v19 != v22->firstCollection + (_DWORD)v21 )
          {
            v21 = (unsigned int)(v21 + 1);
            if ( (unsigned int)v21 >= v22->collectionCount )
              goto LABEL_38;
          }
          R_AddDebugBox(&data->debugGlobals, &v22->collectionBounds[v21], &colorPurple, r_decalVolumesDebugDepthTest->current.enabled);
        }
LABEL_38:
        ++v17;
        --v18;
      }
      while ( v18 );
      v4 = viewParms;
    }
  }
  R_DecalVolumesGrid_DebugDraw(decalVolumeIndex, (LocalClientNum_t)data->localClientNum, v4);
}

/*
==============
R_FillMarkDecalVolume
==============
*/
void R_FillMarkDecalVolume(GfxImpactMarkDecalVolumeGPU *dstDecalVolume, const vec3_t *origin, const vec3_t *halfSize, const tmat33_t<vec3_t> *axis, const unsigned __int8 *color, const GfxDecalVolumeMaterial *material, int atlasIndex, unsigned int markFlags, unsigned __int16 uid)
{
  unsigned int MaterialIndex; 
  __int16 v11; 
  __int64 v12; 
  __int64 v13; 

  dstDecalVolume->obb.center = *origin;
  *(_QWORD *)dstDecalVolume->obb.axis[0].v = *(_QWORD *)axis->m[0].v;
  dstDecalVolume->obb.axis[0].v[2] = axis->m[0].v[2];
  dstDecalVolume->obb.axis[1] = axis->row1;
  dstDecalVolume->obb.axis[2].v[0] = COERCE_FLOAT(LODWORD(axis->m[2].v[0]) ^ _xmm);
  dstDecalVolume->obb.axis[2].v[1] = COERCE_FLOAT(LODWORD(axis->m[2].v[1]) ^ _xmm);
  dstDecalVolume->obb.axis[2].v[2] = COERCE_FLOAT(LODWORD(axis->m[2].v[2]) ^ _xmm);
  dstDecalVolume->obb.halfSize = *halfSize;
  dstDecalVolume->flags_atlasFrame = markFlags | (uid << 16);
  if ( atlasIndex >= 0 )
  {
    if ( atlasIndex > 255 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 6106, ASSERT_TYPE_ASSERT, "( atlasIndex ) <= ( 0xff )", "%s <= %s\n\t%i, %i", "atlasIndex", "DECAL_VOLUME_MARK_ATLAS_MASK", atlasIndex, 255) )
      __debugbreak();
    dstDecalVolume->flags_atlasFrame |= ((unsigned __int8)atlasIndex << 8) | 1;
  }
  dstDecalVolume->color = *color | ((color[1] | (*((unsigned __int16 *)color + 1) << 8)) << 8);
  MaterialIndex = R_DecalVolumes_GetMaterialIndex(material);
  v11 = MaterialIndex;
  if ( MaterialIndex >= 0x7FF )
  {
    LODWORD(v13) = 2047;
    LODWORD(v12) = MaterialIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 6124, ASSERT_TYPE_ASSERT, "(unsigned)( materialIndex ) < (unsigned)( ( ( 1 << 11 ) - 1) )", "materialIndex doesn't index DECAL_VOLUME_MATERIAL_MAX_COUNT\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  dstDecalVolume->packedMaterialInfo = v11 & 0x7FF | 0x3FF800;
}

/*
==============
R_InitDecalVolumes
==============
*/
void R_InitDecalVolumes(bool reconfigure)
{
  DecalVolumeMaterialGPU **decalMaterials; 
  __int64 v3; 
  bool v4; 
  GfxWrappedBuffer *decalMaterialsBuffer; 
  __int64 v6; 
  unsigned int numClusteringPasses; 
  unsigned int v8; 
  unsigned int *p_maxDecalIndices; 
  GfxWrappedRWBuffer *v10; 
  bitarray<1536> *p_decalMaterialsValid; 
  __int64 v12; 
  __m256i v18; 
  __m256i v20; 
  __m256i v22; 
  __int64 *v29; 
  GfxWrappedRWBuffer *channelBufferAliases; 
  __int64 v31; 
  __int64 v32; 
  unsigned int v33; 
  GfxTextureId *atlasAlias; 
  __int64 *v35; 
  Image_SetupParams *p_params; 
  __int64 v37; 
  int v38; 
  int v39; 
  const char **v40; 
  bool v41; 
  __m256i v42; 
  GfxTextureId v43; 
  bool v44; 
  GfxTextureId v45; 
  unsigned int v46; 
  int v47; 
  unsigned __int64 v48; 
  ID3D12Resource *basemap; 
  GfxShaderTextureRWView *v50; 
  unsigned int freeSlot; 
  unsigned int *v52; 
  GraphicsUnknown_Function_Table *m_pFunction; 
  const dvar_t *v54; 
  int integer; 
  const dvar_t *v56; 
  Image_SetupParams v58; 
  unsigned int v59; 
  Image_SetupParams *v60; 
  int v61; 
  GfxTextureId v62; 
  unsigned __int64 v63; 
  __int64 *v64; 
  GfxTextureId *v65; 
  unsigned int v66; 
  GfxTexture_CreateParams v67; 
  unsigned __int64 v68; 
  __int64 v69[5]; 
  Image_SetupParams params; 
  Image_SetupParams v71; 
  Image_SetupParams v72; 
  Image_SetupParams v73; 

  decalMaterials = s_decalVolumes.decalMaterials;
  v3 = 2i64;
  do
  {
    *(decalMaterials - 2) = (DecalVolumeMaterialGPU *)PMem_Alloc(0x9000ui64, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "proxy coords");
    *decalMaterials = (DecalVolumeMaterialGPU *)PMem_Alloc(0x18000ui64, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "decal volume materials");
    decalMaterials[2] = (DecalVolumeMaterialGPU *)PMem_Alloc(0xC00ui64, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "decal volume blend maps");
    decalMaterials[4] = (DecalVolumeMaterialGPU *)PMem_Alloc(0x13000ui64, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "decal volume impact marks");
    decalMaterials[6] = (DecalVolumeMaterialGPU *)PMem_Alloc(0x4000ui64, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "decal volume workgroups");
    decalMaterials[8] = (DecalVolumeMaterialGPU *)PMem_Alloc(0x1800ui64, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "decal volume workgroup counts");
    ++decalMaterials;
    --v3;
  }
  while ( v3 );
  v4 = reconfigure;
  decalMaterialsBuffer = s_decalVolumes.decalMaterialsBuffer;
  v6 = 2i64;
  do
  {
    R_CreateGfxWrappedBuffer(decalMaterialsBuffer - 2, GfxWrappedBuffer_Structured, 12, 0xC00u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "proxy coords buffer");
    R_CreateGfxWrappedBuffer(decalMaterialsBuffer, GfxWrappedBuffer_Structured, 64, 0x600u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "decal volume materials buffer");
    R_CreateGfxWrappedBuffer(decalMaterialsBuffer + 2, GfxWrappedBuffer_Structured, 8, 0x180u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "decal volume blend maps buffer");
    R_CreateGfxWrappedBuffer(decalMaterialsBuffer + 4, GfxWrappedBuffer_Structured, 76, 0x400u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "decal volume impact marks");
    R_CreateGfxWrappedBuffer(decalMaterialsBuffer + 6, GfxWrappedBuffer_Structured, 4, 0x1000u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "decal volume static indices");
    R_CreateGfxWrappedBuffer(decalMaterialsBuffer + 61, GfxWrappedBuffer_Structured, 56, 8u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "decal volume material info buffer");
    ++decalMaterialsBuffer;
    --v6;
  }
  while ( v6 );
  R_CreateGfxWrappedBuffer(&s_decalVolumes.cullDecalsCountBuffer, GfxWrappedBuffer_Structured, 4, 4u, GFX_DATA_FORMAT_R32_UINT, 9u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "cull decal count");
  R_CreateGfxWrappedBuffer(&s_decalVolumes.cullImpactMarkIndicesBuffer, GfxWrappedBuffer_Structured, 4, 0x400u, GFX_DATA_FORMAT_R32_UINT, 9u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "cull impact mark indices");
  R_CreateGfxWrappedBuffer(&s_decalVolumes.cullStaticIndicesBuffer, GfxWrappedBuffer_Structured, 4, 0x2000u, GFX_DATA_FORMAT_R32_UINT, 9u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "cull static indices");
  R_CreateGfxWrappedBuffer(&s_decalVolumes.cullStaticDecalsBuffer, GfxWrappedBuffer_Structured, 44, 0x2000u, GFX_DATA_FORMAT_R32_UINT, 9u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "cull static indices");
  R_CreateGfxWrappedBuffer(&s_decalVolumes.cullIndirectArgsBuffer, GfxWrappedBuffer_Raw, 4, 0x14u, GFX_DATA_FORMAT_R32_UINT, 0x209u, D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT, NULL, NULL, "cull indirect args");
  R_CreateGfxWrappedBuffer(&s_decalVolumes.decalClusteringDataCountBuffer, GfxWrappedBuffer_Structured, 4, 1u, GFX_DATA_FORMAT_R32_UINT, 9u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "cluster decal count");
  R_CreateGfxWrappedBuffer(&s_decalVolumes.decalClusteringDataBuffer, GfxWrappedBuffer_Structured, 48, 0x1000u, GFX_DATA_FORMAT_R32_UINT, 9u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "cluster decals");
  R_CreateGfxWrappedBuffer(&s_decalVolumes.decalDrawDataBuffer, GfxWrappedBuffer_Structured, 256, 0x1000u, GFX_DATA_FORMAT_R32_UINT, 9u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "decals draw data");
  R_CreateGfxWrappedBuffer(&s_decalVolumes.materialLodsBuffer, GfxWrappedBuffer_Structured, 8, 0x600u, GFX_DATA_FORMAT_R32_UINT, 9u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "material lods gpu");
  R_CreateGfxWrappedBuffer(&s_decalVolumes.maskLodsBuffer, GfxWrappedBuffer_Structured, 8, 0x180u, GFX_DATA_FORMAT_R32_UINT, 9u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "mask lods gpu");
  R_CreateGfxWrappedBuffer(&s_decalVolumes.materialDebugInfo, GfxWrappedBuffer_Structured, 168, 8u, GFX_DATA_FORMAT_R32_UINT, 9u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "material debug info");
  R_CreateGfxWrappedBuffer(&s_decalVolumes.materialDebugInfoCount, GfxWrappedBuffer_Structured, 4, 4u, GFX_DATA_FORMAT_R32_UINT, 9u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "material debug info count");
  R_DecalVolume_InitDebugDrawOBB();
  R_DecalVolume_InitClustering(vidConfig.sceneWidth, vidConfig.sceneHeight, 0, &s_decalVolumes.clustering);
  numClusteringPasses = s_decalVolumes.clustering.numClusteringPasses;
  v8 = s_decalVolumes.clustering.numClusteringPasses;
  if ( s_decalVolumes.clustering.numClusteringPasses )
  {
    p_maxDecalIndices = &s_decalVolumes.clustering.clusteringPasses[s_decalVolumes.clustering.numClusteringPasses].maxDecalIndices;
    v10 = (GfxWrappedRWBuffer *)&s_decalVolumes.proxyCoords[28 * s_decalVolumes.clustering.numClusteringPasses - 162];
    while ( 1 )
    {
      --v8;
      v10 -= 4;
      p_maxDecalIndices -= 18;
      if ( v8 != numClusteringPasses - 1 )
      {
        R_CreateGfxWrappedBuffer(v10 - 1, GfxWrappedBuffer_Structured, 12, 7 * p_maxDecalIndices[2], GFX_DATA_FORMAT_R32_UINT, 9u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "cellIndirection");
        R_CreateGfxWrappedBuffer(v10, GfxWrappedBuffer_Structured, 4, 8u, GFX_DATA_FORMAT_R32_UINT, 9u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "cellIndirectionCount");
        R_CreateGfxWrappedBuffer(v10 + 1, GfxWrappedBuffer_Raw, 4, 0x15u, GFX_DATA_FORMAT_R32_UINT, 0x209u, D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT, NULL, NULL, "indirectArgs");
      }
      R_CreateGfxWrappedBuffer(v10 - 2, GfxWrappedBuffer_Structured, 4, *p_maxDecalIndices, GFX_DATA_FORMAT_R32_UINT, 9u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "decalIndices");
      if ( !v8 )
        break;
      numClusteringPasses = s_decalVolumes.clustering.numClusteringPasses;
    }
    v4 = reconfigure;
  }
  R_CreateGfxWrappedBuffer(&s_decalVolumes.clustering.decalIndicesCounts, GfxWrappedBuffer_Structured, 4, 8u, GFX_DATA_FORMAT_R32_UINT, 9u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "decalIndicesCounts");
  if ( !v4 )
  {
    R_DecalVolume_InitStagingRing();
    p_decalMaterialsValid = &s_decalVolumes.decalMaterialsValid;
    v12 = 3i64;
    do
    {
      *(_QWORD *)p_decalMaterialsValid->array = 0i64;
      *(_QWORD *)&p_decalMaterialsValid->array[2] = 0i64;
      *(_QWORD *)&p_decalMaterialsValid->array[4] = 0i64;
      p_decalMaterialsValid = (bitarray<1536> *)((char *)p_decalMaterialsValid + 64);
      *(_QWORD *)&p_decalMaterialsValid[-1].array[38] = 0i64;
      *(_QWORD *)&p_decalMaterialsValid[-1].array[40] = 0i64;
      *(_QWORD *)&p_decalMaterialsValid[-1].array[42] = 0i64;
      *(_QWORD *)&p_decalMaterialsValid[-1].array[44] = 0i64;
      *(_QWORD *)&p_decalMaterialsValid[-1].array[46] = 0i64;
      --v12;
    }
    while ( v12 );
    _XMM3 = _xmm;
    __asm
    {
      vpcmpeqd xmm4, xmm3, cs:__xmm@00000002000000020000000200000002
      vpandn  xmm3, xmm4, cs:__xmm@00000006000000060000000600000006
      vpxor   xmm0, xmm0, xmm0
    }
    *(_OWORD *)&v58.customAllocUserData = _XMM0;
    v58.depth = 1;
    *(_QWORD *)&v58.numElements = 1i64;
    v58.width = 4096;
    v58.height = 4096;
    v58.flags = IMG_DISK_FLAG_MAPTYPE_ARRAY;
    v58.format = GFX_PF_BC7_SRGB;
    *(__m256i *)&params.width = *(__m256i *)&v58.width;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    v58.customAllocFunc = NULL;
    v58.textureLayoutOverride = -1;
    v18 = *(__m256i *)&v58.customAllocFunc;
    *(_OWORD *)&v58.customAllocUserData = _XMM0;
    *(__m256i *)&params.customAllocFunc = v18;
    v58.depth = 1;
    *(_QWORD *)&v58.numElements = 1i64;
    v58.width = 4096;
    v58.height = 4096;
    v58.flags = IMG_DISK_FLAG_MAPTYPE_ARRAY;
    v58.format = GFX_PF_BC7;
    *(__m256i *)&v71.width = *(__m256i *)&v58.width;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    v58.customAllocFunc = NULL;
    v58.textureLayoutOverride = -1;
    v20 = *(__m256i *)&v58.customAllocFunc;
    *(_OWORD *)&v58.customAllocUserData = _XMM0;
    *(__m256i *)&v71.customAllocFunc = v20;
    v58.depth = 1;
    *(_QWORD *)&v58.numElements = 1i64;
    v58.width = 4096;
    v58.height = 4096;
    v58.flags = IMG_DISK_FLAG_MAPTYPE_ARRAY;
    v58.format = GFX_PF_BC4;
    *(__m256i *)&v72.width = *(__m256i *)&v58.width;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    v58.customAllocFunc = NULL;
    v58.textureLayoutOverride = -1;
    v22 = *(__m256i *)&v58.customAllocFunc;
    *(_OWORD *)&v58.customAllocUserData = _XMM0;
    *(__m256i *)&v72.customAllocFunc = v22;
    v58.customAllocFunc = NULL;
    v58.textureLayoutOverride = -1;
    _XMM1 = _xmm;
    __asm { vpand   xmm2, xmm1, xmm4 }
    v58.depth = 1;
    *(_QWORD *)&v58.numElements = 1i64;
    v58.width = 4096;
    v58.height = 4096;
    v58.flags = IMG_DISK_FLAG_MAPTYPE_ARRAY;
    v58.format = GFX_PF_BC1_SRGB;
    v73 = v58;
    __asm
    {
      vpor    xmm0, xmm3, xmm2
      vpsrldq xmm1, xmm0, 4
    }
    params.maxLevelCount = _XMM0;
    __asm { vpsrldq xmm0, xmm1, 4 }
    v72.maxLevelCount = _XMM0;
    __asm { vpsrldq xmm0, xmm0, 4 }
    v73.maxLevelCount = _XMM0;
    *(_QWORD *)s_decalVolumes.decalMasksValid.array = 0i64;
    *(_QWORD *)&s_decalVolumes.decalMasksValid.array[2] = 0i64;
    *(_QWORD *)&s_decalVolumes.decalMasksValid.array[4] = 0i64;
    *(_QWORD *)&s_decalVolumes.decalMasksValid.array[6] = 0i64;
    *(_QWORD *)&s_decalVolumes.decalMasksValid.array[8] = 0i64;
    *(_QWORD *)&s_decalVolumes.decalMasksValid.array[10] = 0i64;
    v71.maxLevelCount = _XMM1;
    s_decalVolumes.primaryChannel = Image_AllocProg(IMAGE_PROG_DECAL_VOLUME_PRIMARY_CHANNEL, IMG_CATEGORY_RAW, TS_FUNCTION);
    Image_Setup(s_decalVolumes.primaryChannel, &params);
    s_decalVolumes.secondaryChannel = Image_AllocProg(IMAGE_PROG_DECAL_VOLUME_SECONDARY_CHANNEL, IMG_CATEGORY_RAW, TS_FUNCTION);
    Image_Setup(s_decalVolumes.secondaryChannel, &v71);
    s_decalVolumes.tertiaryChannel = Image_AllocProg(IMAGE_PROG_DECAL_VOLUME_TERTIARY_CHANNEL, IMG_CATEGORY_RAW, TS_FUNCTION);
    Image_Setup(s_decalVolumes.tertiaryChannel, &v72);
    s_decalVolumes.quaternaryChannel = Image_AllocProg(IMAGE_PROG_DECAL_VOLUME_QUATERNARY_CHANNEL, IMG_CATEGORY_RAW, TS_FUNCTION);
    Image_Setup(s_decalVolumes.quaternaryChannel, &v73);
    v29 = v69;
    v69[0] = (__int64)s_decalVolumes.primaryChannel;
    channelBufferAliases = s_decalVolumes.channelBufferAliases;
    v69[1] = (__int64)s_decalVolumes.secondaryChannel;
    v69[2] = (__int64)s_decalVolumes.tertiaryChannel;
    v31 = 4i64;
    v69[3] = (__int64)s_decalVolumes.quaternaryChannel;
    do
    {
      v32 = *v29;
      if ( !*v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_db.h", 534, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
        __debugbreak();
      if ( (*(_DWORD *)(v32 + 24) & 0x40) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_db.h", 536, ASSERT_TYPE_ASSERT, "(!R_IsStreamedImage( image ))", (const char *)&queryFormat, "!R_IsStreamedImage( image )") )
        __debugbreak();
      R_CreateGfxWrappedBuffer(channelBufferAliases++, GfxWrappedBuffer_Raw, 4, *(_DWORD *)(v32 + 28) >> 2, GFX_DATA_FORMAT_R32_UINT, 1u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, *(const void **)(v32 + 224), "channel buffer alias");
      ++v29;
      --v31;
    }
    while ( v31 );
    v33 = 0;
    v63 = 0i64;
    atlasAlias = s_decalVolumes.atlasAlias;
    v59 = 0;
    v35 = v69;
    v65 = s_decalVolumes.atlasAlias;
    p_params = &params;
    v64 = v69;
    v60 = &params;
    do
    {
      v37 = *v35;
      v38 = 6;
      if ( v33 == 2 )
        v38 = 9;
      if ( *(unsigned __int8 *)(v37 + 48) != v38 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_decal_volume.cpp", 4944, ASSERT_TYPE_SANITY, "( channels[iChannel]->levelCount == ( ( iChannel == 3 - 1 ) ? 9 : 6 ) )", (const char *)&queryFormat, "channels[iChannel]->levelCount == ( ( iChannel == DECAL_VOLUMES_ATLAS_ALPHA_BLENDMAP_HEIGHTMAP - 1 ) ? DECAL_VOLUMES_ATLAS_MIP_COUNT : DECAL_VOLUMES_ATLAS_MIP_COUNT_BASE_ADJ )") )
          __debugbreak();
        p_params = v60;
      }
      v39 = *(_DWORD *)(v37 + 20);
      v40 = (const char **)v37;
      v41 = v39 == 45 || v39 == 44;
      v42 = *(__m256i *)&p_params->customAllocFunc;
      *(__m256i *)&v67.params.width = *(__m256i *)&p_params->width;
      v67.name = (char *)&queryFormat.fmt + 3;
      v67.params.format = v41 + 26;
      v67.pixels = NULL;
      v67.params.width /= 4;
      v67.params.height /= 4;
      v67.params.flags |= 0x800000u;
      *(__m256i *)&v67.params.customAllocFunc = v42;
      if ( (*(_DWORD *)(v37 + 24) & 0x40) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_db.h", 522, ASSERT_TYPE_ASSERT, "(!R_IsStreamedImage( image ))", (const char *)&queryFormat, "!R_IsStreamedImage( image )") )
      {
        __debugbreak();
        v40 = (const char **)*v35;
      }
      v67.pixels = *(const unsigned __int8 **)(v37 + 224);
      v67.name = *v40;
      v43 = R_Texture_Create(&v67);
      v44 = v67.params.maxLevelCount == 0;
      v45 = v43;
      v62 = v43;
      v46 = 0;
      *atlasAlias = v43;
      if ( !v44 )
      {
        v47 = 17;
        if ( v41 )
          v47 = 3;
        v48 = (unsigned __int64)&g_descriptorPools.shaderViewPool.lock & 3;
        v61 = v47;
        do
        {
          __asm { vpxor   xmm0, xmm0, xmm0 }
          basemap = R_Texture_GetResident(v45)->basemap;
          HIDWORD(v58.customAllocFunc) = 0;
          v58.numElements = 0;
          v58.width = v47;
          *(_OWORD *)&v58.flags = _XMM0;
          v58.height = 5;
          v58.depth = v46;
          v58.maxLevelCount = 1;
          v50 = &s_decalVolumes.atlasAliasRWView[v63 / 9][v46];
          while ( 1 )
          {
            if ( (_DWORD)v48 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_descriptorPools.shaderViewPool.lock) )
              __debugbreak();
            if ( !_InterlockedCompareExchange(&g_descriptorPools.shaderViewPool.lock, 1, 0) )
              break;
            Sys_Sleep(0);
          }
          freeSlot = g_descriptorPools.shaderViewPool.freeSlot;
          v47 = v61;
          v45 = v62;
          if ( !g_descriptorPools.shaderViewPool.freeSlot )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_binding.h", 488, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Descriptor heap pool out of free slots") )
              __debugbreak();
            freeSlot = g_descriptorPools.shaderViewPool.freeSlot;
          }
          v52 = &g_descriptorPools.shaderViewPool.nextSlot[freeSlot];
          g_descriptorPools.shaderViewPool.freeSlot = *v52;
          *v52 = 0;
          ++g_descriptorPools.shaderViewPool.handle.used;
          if ( (_DWORD)v48 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_descriptorPools.shaderViewPool.lock) )
            __debugbreak();
          _InterlockedExchange(&g_descriptorPools.shaderViewPool.lock, 0);
          v66 = freeSlot;
          m_pFunction = g_dx.d3d12device->m_pFunction;
          v68 = g_descriptorPools.shaderViewPool.handle.parent->heapStartCPUHandle.ptr + g_descriptorPools.shaderViewPool.handle.parent->descriptorSize * (freeSlot + g_descriptorPools.shaderViewPool.handle.startSlot);
          ((void (__fastcall *)(ID3D12Device *, ID3D12Resource *, _QWORD, Image_SetupParams *, unsigned __int64))m_pFunction[6].AddRef)(g_dx.d3d12device, basemap, 0i64, &v58, v68);
          v50->rwSubresourceToTransition = v46++;
          v50->rwView = freeSlot;
          v50->rwResource = basemap;
          v50->rwCounterResource = NULL;
        }
        while ( v46 < v67.params.maxLevelCount );
        atlasAlias = v65;
      }
      v33 = v59 + 1;
      v63 += 9i64;
      p_params = v60 + 1;
      v35 = v64 + 1;
      v59 = v33;
      ++atlasAlias;
      ++v60;
      ++v64;
      v65 = atlasAlias;
    }
    while ( v33 < 4 );
    memset_0(s_decalVolumes.aliases, 0, sizeof(s_decalVolumes.aliases));
    ImageAtlas_Init(*(double *)&_XMM0);
    memset_0(s_decalVolumes.dynamicDecalVolumes, 0, sizeof(s_decalVolumes.dynamicDecalVolumes));
    memset_0(s_decalVolumes.dynamicDecalVolumesInUse, 0, sizeof(s_decalVolumes.dynamicDecalVolumesInUse));
    s_decalVolumes.numDynamicDecalVolumes = 0;
    memset_0(s_decalVolumes.selectedDecalVolumes, 0, sizeof(s_decalVolumes.selectedDecalVolumes));
    v4 = reconfigure;
    s_decalVolumes.numSelectedDecalVolumes = 0;
  }
  R_CreateGfxWrappedBuffer(&s_decalVolumes.dynamicDecalsBuffer, GfxWrappedBuffer_Structured, 44, 0xC0u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "dynamic decal volumes");
  s_decalVolumes.intVolumesCount[0] = 0;
  s_decalVolumes.intCollectionsCount[0] = 0;
  s_decalVolumes.intInInstanceCount[0] = 0;
  memset_0(s_decalVolumes.streamViewInfo, 0, 0x450ui64);
  s_decalVolumes.intVolumesCount[1] = 0;
  s_decalVolumes.intCollectionsCount[1] = 0;
  s_decalVolumes.intInInstanceCount[1] = 0;
  memset_0(&s_decalVolumes.streamViewInfo[1], 0, sizeof(s_decalVolumes.streamViewInfo[1]));
  if ( !v4 )
    R_DecalVolumesGrid_Init();
  s_decalVolumes.dumpMaterialsRequest = 0;
  s_decalVolumes.unloadAllImages = 0;
  Com_Printf(8, "D+ used per frame mem: Cpu %u kB, Gpu %u kB\n", 466i64, 454i64);
  v54 = DCONST_DVARINT_r_decalVolumesClusterPassCountBias;
  s_decalVolumes.decalVolumeMarksDebugCount = 0;
  if ( !DCONST_DVARINT_r_decalVolumesClusterPassCountBias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_decalVolumesClusterPassCountBias") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v54);
  integer = v54->current.integer;
  v56 = DCONST_DVARINT_r_decalVolumesClusterXYSize;
  s_decalVolumes.decalVolumesClusterPassCountBias = integer;
  if ( !DCONST_DVARINT_r_decalVolumesClusterXYSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_decalVolumesClusterXYSize") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v56);
  s_decalVolumes.decalVolumesClusterXYSize = v56->current.integer;
}

/*
==============
R_RegisterDecalVolumesDvars
==============
*/
void R_RegisterDecalVolumesDvars(void)
{
  r_decalVolumes = Dvar_RegisterBool("OLPTLPNMO", 1, 0, "Enable injection of decal volumes into scene");
  r_decalVolumesStatic = Dvar_RegisterBool("LKQOKQTNQS", 1, 0, "Enable static decal volumes");
  r_decalVolumesAsync = Dvar_RegisterBool("TSRPRLMTO", 1, 0, "Process decal volumes on async queue");
  r_decalVolumesObjSpaceModel = Dvar_RegisterBool("TNRROQMMK", 1, 4u, "Enable decal volumes for models");
  r_decalVolumesMaxVisible = Dvar_RegisterInt("LPQNPPNLSQ", 4096, 0, 4096, 0, "Number of rendered volume decal marks");
  r_decalVolumesCullSize = Dvar_RegisterFloat("LKOLQSMSRT", 25.0, 0.0, 4096.0, 0, "Minimum screen contribution for the marks to be visible [pixels^2]");
  r_decalVolumesFarPlane = Dvar_RegisterFloat("LKTNSPQNMR", -1.0, -1.0, 40000.0, 0, "Far plane for decal volumes. Decals are not visible past this distance");
  r_decalVolumesCutoffAngle = Dvar_RegisterFloat("MKQRRORNPM", 86.0, 0.0, 180.0, 0, "Degrees cutoff angle for controlling decal fine cull.");
  r_decalVolumesCutoffAngleRange = Dvar_RegisterFloat("QQPPQSPSN", 25.0, 0.0, 90.0, 0, "Degrees cutoff angle range for controlling decal fine cull.");
  r_decalVolumesNormalBias = Dvar_RegisterFloat("LQKKRSKPPS", 0.0, -2.0, 2.0, 0, "Bias for controlling decal fine cull");
  r_decalVolumesMarks = Dvar_RegisterBool("NTRMROKSTK", 1, 0, "Use decal volumes for mark rendering (disables rendering only)");
  r_decalVolumesDebug = Dvar_RegisterEnum("NSNPTMSMML", r_decalVolumesDebugNames, 0, 0, "Show debug volumes debug.");
  r_decalVolumesDebugType = Dvar_RegisterEnum("NTLONQTQML", r_decalVolumesDebugTypeNames, 0, 0, "Selects type of debug volumes to show.");
  r_decalVolumesDebugDepthTest = Dvar_RegisterBool("NTKRQTPLTO", 0, 0, "Enables depth testing for debug display");
  r_decalVolumesOverriedeMaterial = Dvar_RegisterBool("NTTLQKSQTL", 0, 0, "Override material with default to help tracking streaming issues");
  r_decalVolumesOverriedeMask = Dvar_RegisterBool("MTQKLSLSPM", 0, 0, "Override mask with default to help tracking streaming issues");
  r_decalVolumesShowFailedMaterials = Dvar_RegisterBool("MKQSSQQPQK", 1, 0, "If material or mask or any of it's images fails to load, causes display of default material and/or mask");
  r_decalVolumesShowAtlas = Dvar_RegisterEnum("LQQLOSMS", r_decalVolumesShowAtlasNames, 0, 0, "Show debug volumes atlas.");
  r_decalVolumesShowAtlasSlice = Dvar_RegisterInt("MNSOOSTSNM", 0, 0, 16, 0, "Show debug volumes atlas slice.");
  r_decalVolumesShowAtlasMip = Dvar_RegisterInt("LMLRNKLRSK", 0, 0, 8, 0, "Show debug volumes atlas mip.");
  r_decalVolumesMipDropDelay = Dvar_RegisterInt("TNKKRQTQ", 64, 0, 255, 0, "Number of D+ streaming iteration after which needed mip is decreased by 1");
  r_decalVolumesShowImageInfo = Dvar_RegisterBool("MNQPNQSSRK", 0, 0, "Show material and blend map images (highlights corresponding atlas tile when atlas debug view is enabled)");
  r_decalVolumesShowMaterialName = Dvar_RegisterBool("MQKMLOKSLP", 0, 0, "Show material name of decals");
  r_decalVolumesShowMaterialLock = Dvar_RegisterBool("NOOSQSOOON", 0, 0, "Locks material info (info doesn't update when camera moves)");
  r_decalVolumesShowMaterialSelect = Dvar_RegisterInt("SPKMKKLOK", -1, -1, 8, 0, "Select which material info to draw");
  r_decalVolumesMarksDebug = Dvar_RegisterInt("SRNRMTKPT", -1, -1, 64, 0, "Show marks debug");
  r_decalVolumesClusterDebugDistribution = Dvar_RegisterEnum("OMNTSLLNMP", r_decalVolumesClusterDebugDistributionNames, 0, 0, "Distribution to use for display");
  r_decalVolumesClusterDebugSlice = Dvar_RegisterInt("MRMROLMLLT", -1, -1, 31, 0, "Slice to display");
  R_DecalVolumesGrid_RegisterDvars();
  DCONST_DVARFLT_r_decalVolumesEdgeFade = Dvar_RegisterFloat("r_decalVolumesEdgeFade", 0.0078125, 0.0, 1.0, 0x40004u, "Edge fade");
  DCONST_DVARINT_r_decalVolumesBorderWidth = Dvar_RegisterInt("r_decalVolumesBorderWidth", 8, 0, 64, 0x40004u, "Border width");
  DCONST_DVARFLT_r_decalVolumesTilingGradientScale = Dvar_RegisterFloat("r_decalVolumesTilingGradientScale", 1.0, 0.0, 100.0, 0x40004u, "Tiling gradient scale");
  DCONST_DVARFLT_r_decalVolumesFadeOutRange = Dvar_RegisterFloat("r_decalVolumesFadeOutRange", 200.0, 0.0, 40000.0, 0x40004u, "Range over which decal smoothly fades out");
  DCONST_DVARBOOL_r_decalVolumesUmbraVisibility = Dvar_RegisterBool("r_decalVolumesUmbraVisibility", 1, 0x40004u, "Enable umbra visibility testing for decal volumes");
  DVARBOOL_r_decalVolumesForceBaseMip = Dvar_RegisterBool("SSOKKRMRM", 0, 0, "Applies Forced stream distance to the base mip for decal volumes when we detect the proxy loadedSize is 0.");
  DVARBOOL_r_decalVolumesStreamDistanceBiasNotLoaded = Dvar_RegisterBool("MSONONRMKO", 1, 0, "Gradually decrease image streaming distance of images that are not loaded at all, to force streamer to load them");
  DVARBOOL_r_decalVolumesStreamOcclusionCulling = Dvar_RegisterBool("LLTRSLRPTL", 1, 0, "Use scene depth buffer to cull decal volume instances when generating streaming data");
  DCONST_DVARINT_r_decalVolumesClusterSATPassCount = Dvar_RegisterInt("r_decalVolumesClusterSATPassCount", 1, 0, 16, 0x40004u, "Number of clustering passes that use SAT test. Counting from last pass.");
  DCONST_DVARINT_r_decalVolumesClusterPassCountBias = Dvar_RegisterInt("r_decalVolumesClusterPassCountBias", 0, -2, 2, 0x40004u, "Increase or decrease number of custering passes");
  DCONST_DVARINT_r_decalVolumesClusterXYSize = Dvar_RegisterInt("r_decalVolumesClusterXYSize", 32, 8, 128, 0x40004u, "size in pixels of a single cluster");
  DCONST_DVARFLT_r_decalVolumesAlphaThreshold = Dvar_RegisterFloat("r_decalVolumesAlphaThreshold", 0.0039215689, 0.0, 1.0, 0x40004u, "Threshold for opacity test");
  DCONST_DVARFLT_r_decalVolumesMarksZFeather = Dvar_RegisterFloat("r_decalVolumesMarksZFeather", 0.1, 0.0, 1.0, 0x40004u, "Impact mark z feather. Percentage of mark thickness.");
  DVARVEC3_r_decalVolumesScale = Dvar_RegisterVec3("MMQRKLRNKO", 1.0, 1.0, 1.0, 0.0, 10.0, 0, "Debug volumes scale (can help identify marks collision issues)");
  DCONST_DVARBOOL_r_decalVolumesOcclusionCulling = Dvar_RegisterBool("r_decalVolumesOcclusionCulling", 0, 0x40004u, "Use floatZ to cull decal volume instances. Forces decal volumes to run after prepass.");
  DCONST_DVARBOOL_r_decalVolumesPauseStreaming = Dvar_RegisterBool("r_decalVolumesPauseStreaming", 0, 0x40004u, "Temporarily disable sending requests to the streamer and updating atlas");
  DCONST_DVARINT_r_decalVolumesMaxLoadedSize = Dvar_RegisterInt("r_decalVolumesMaxLoadedSize", 12, 5, 12, 0x40004u, "Log of max size of the image that can be put into atlas");
  DCONST_DVARBOOL_r_decalVolumesHighlightCluster = Dvar_RegisterBool("r_decalVolumesHighlightCluster", 0, 0x40004u, "Decal volume highlight cluster");
  DCONST_DVARBOOL_r_decalVolumesHighlightBox = Dvar_RegisterBool("r_decalVolumesHighlightBox", 0, 0x40004u, "Decal volume highlight bounding box");
  DCONST_DVARBOOL_r_decalVolumesHighlightOpacity = Dvar_RegisterBool("r_decalVolumesHighlightOpacity", 0, 0x40004u, "Decal volume highlight binary opacity");
  DCONST_DVARBOOL_r_decalVolumesHighlightMaterial = Dvar_RegisterBool("r_decalVolumesHighlightMaterial", 1, 0x40004u, "Decal volume highlight bounding box");
  DCONST_DVARFLT_r_decalVolumesHighlightAlpha = Dvar_RegisterFloat("r_decalVolumesHighlightAlpha", 0.75, 0.0, 1.0, 0x40004u, "Decal volume highlighting alpha");
  DCONST_DVARBOOL_r_decalVolumesShowStreamingInfo = Dvar_RegisterBool("r_decalVolumesShowStreamingInfo", 0, 0x40004u, "Show detailed streaming information of decal volume instance");
  Cmd_AddCommandInternal("r_decalVolumesDumpMaterials", R_DecalVolumes_DumpMaterials, &R_DecalVolumes_DumpMaterials_VAR);
  Cmd_AddCommandInternal("r_decalVolumesClearAtlas", R_DecalVolumes_ClearAtlas, &R_DecalVolumes_ClearAtlas_VAR);
}

/*
==============
R_SetDecalVolumeResources
==============
*/
void R_SetDecalVolumeResources(GfxViewInfo *viewInfo)
{
  GfxCmdBufInput *p_input; 
  ImageAtlasProxyCoords **v3; 

  p_input = &viewInfo->input;
  if ( viewInfo == (GfxViewInfo *)-3760i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1503, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentBuffers[16] = &s_decalVolumes.decalDrawDataBuffer;
  v3 = &s_decalVolumes.proxyCoords[28 * (s_decalVolumes.clustering.numClusteringPasses - 1) - 176];
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1503, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentBuffers[17] = (const GfxWrappedBuffer *)v3;
  R_DecalVolumesGrid_SetResources(viewInfo);
}

/*
==============
R_SetDecalVolumeTextures
==============
*/
void R_SetDecalVolumeTextures(GfxViewInfo *viewInfo)
{
  GfxImage *primaryChannel; 
  GfxCmdBufInput *p_input; 
  GfxImage *secondaryChannel; 
  GfxImage *tertiaryChannel; 
  GfxImage *quaternaryChannel; 
  unsigned int height; 
  unsigned int width; 
  unsigned int v9; 
  __int64 v10; 
  unsigned int v11; 
  unsigned int v12; 
  float v14; 
  __int64 v16; 
  const dvar_t *v19; 
  __int128 v21; 
  float v23; 
  float value; 
  const dvar_t *v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  __int128 v32; 
  float v33; 
  float v35; 
  float v36; 
  double v37; 
  const dvar_t *v38; 

  primaryChannel = s_decalVolumes.primaryChannel;
  p_input = &viewInfo->input;
  secondaryChannel = s_decalVolumes.secondaryChannel;
  tertiaryChannel = s_decalVolumes.tertiaryChannel;
  quaternaryChannel = s_decalVolumes.quaternaryChannel;
  if ( !s_decalVolumes.primaryChannel )
    primaryChannel = rgp.whiteImage;
  if ( !s_decalVolumes.secondaryChannel )
    secondaryChannel = rgp.whiteImage;
  if ( !s_decalVolumes.tertiaryChannel )
    tertiaryChannel = rgp.whiteImage;
  if ( !s_decalVolumes.quaternaryChannel )
    quaternaryChannel = rgp.blackImage;
  if ( viewInfo == (GfxViewInfo *)-3760i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentImages[31] = primaryChannel;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentImages[32] = secondaryChannel;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentImages[33] = tertiaryChannel;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1482, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codePersistentImages[34] = quaternaryChannel;
  height = viewInfo->sceneViewport.height;
  width = viewInfo->sceneViewport.width;
  v9 = DecalVolumeClusterSizeX() + width - 1;
  v10 = v9 / (unsigned int)DecalVolumeClusterSizeX();
  v11 = DecalVolumeClusterSizeY() + height - 1;
  v12 = DecalVolumeClusterSizeY();
  _XMM2 = LODWORD(viewInfo->decalVolumes.drawDistance);
  v14 = viewInfo->viewParmsSet.frames[0].viewParms.camera.zPlanes[2];
  _XMM10 = 0i64;
  v16 = v11 / v12;
  __asm
  {
    vcmpless xmm0, xmm10, xmm1
    vblendvps xmm6, xmm2, xmm1, xmm0
  }
  *(double *)&_XMM0 = I_fclamp(rg.correctedLodParms.invFovScale, 0.025, 2.0);
  v19 = DCONST_DVARFLT_r_decalVolumesTilingGradientScale;
  v21 = _XMM6;
  *(float *)&v21 = *(float *)&_XMM6 / *(float *)&_XMM0;
  _XMM1 = v21;
  __asm { vminss  xmm0, xmm1, cs:__real@471c4000 }
  s_decalVolumes.farPlane[viewInfo->input.data->decalVolumeIndex] = *(float *)&_XMM0;
  v23 = s_decalVolumes.farPlane[viewInfo->input.data->decalVolumeIndex];
  if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_decalVolumesTilingGradientScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  value = v19->current.value;
  v25 = DCONST_DVARFLT_r_decalVolumesAlphaThreshold;
  v26 = s_decalVolumes.clustering.clusteringPasses[s_decalVolumes.clustering.numClusteringPasses - 1].nCellsZF / (float)(v23 - v14);
  if ( !DCONST_DVARFLT_r_decalVolumesAlphaThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_decalVolumesAlphaThreshold") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v25);
  LODWORD(viewInfo->input.sceneConstants.decalVolumesParams.v[0]) = v25->current.integer;
  viewInfo->input.sceneConstants.decalVolumesParams.v[1] = value;
  viewInfo->input.sceneConstants.decalVolumesParams.v[2] = v26;
  viewInfo->input.sceneConstants.decalVolumesParams.v[3] = v26 * v14;
  viewInfo->input.sceneConstants.decalVolumesParams1.v[2] = 32.0;
  v27 = (float)v10;
  viewInfo->input.sceneConstants.decalVolumesParams1.v[0] = v27;
  viewInfo->input.sceneConstants.decalVolumesParams1.v[3] = COERCE_FLOAT(32 * v16 * v10);
  v28 = (float)v16;
  viewInfo->input.sceneConstants.decalVolumesParams1.v[1] = v28;
  v29 = r_decalVolumesCutoffAngle->current.value;
  v30 = r_decalVolumesNormalBias->current.value;
  v32 = LODWORD(v29);
  *(float *)&v32 = v29 - r_decalVolumesCutoffAngleRange->current.value;
  _XMM6 = v32;
  v33 = cosf_0(v29 * 0.017453292);
  __asm { vmaxss  xmm1, xmm6, xmm10 }
  v35 = v33;
  v36 = cosf_0(*(float *)&_XMM1 * 0.017453292);
  v37 = I_fres(v36 - v35);
  viewInfo->input.sceneConstants.decalVolumesParams2.v[1] = *(float *)&v37;
  viewInfo->input.sceneConstants.decalVolumesParams2.v[0] = v35;
  viewInfo->input.sceneConstants.decalVolumesParams2.v[2] = v30;
  v38 = DCONST_DVARFLT_r_decalVolumesEdgeFade;
  if ( !DCONST_DVARFLT_r_decalVolumesEdgeFade && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_decalVolumesEdgeFade") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v38);
  viewInfo->input.sceneConstants.decalVolumesParams2.v[3] = 1.0 - v38->current.value;
}

/*
==============
R_ToggleFrustumGridFrame
==============
*/
__int64 R_ToggleFrustumGridFrame()
{
  __int64 frame; 
  __int64 v1; 

  frame = s_decalVolumes.frame;
  s_decalVolumes.frontendFrame = s_decalVolumes.frame;
  v1 = 3i64 * s_decalVolumes.frame;
  s_decalVolumes.frame = (LOBYTE(s_decalVolumes.frame) - 1) & 1;
  s_decalVolumes.intVolumesCount[frame] = 0;
  s_decalVolumes.particleMarksCount[frame] = 0;
  s_decalVolumes.intCollectionsCount[frame] = 0;
  v1 *= 16i64;
  s_decalVolumes.intInInstanceCount[frame] = 0;
  *(_QWORD *)&s_decalVolumes.transientZonesToProcess[0].array[v1] = 0i64;
  *(_QWORD *)&s_decalVolumes.transientZonesToProcess[0].array[v1 + 2] = 0i64;
  *(_QWORD *)&s_decalVolumes.transientZonesToProcess[0].array[v1 + 4] = 0i64;
  *(_QWORD *)&s_decalVolumes.transientZonesToProcess[0].array[v1 + 6] = 0i64;
  *(_QWORD *)&s_decalVolumes.transientZonesToProcess[0].array[v1 + 8] = 0i64;
  *(_QWORD *)&s_decalVolumes.transientZonesToProcess[0].array[v1 + 10] = 0i64;
  *(_QWORD *)&s_decalVolumes.transientZonesToProcess[0].array[v1 + 12] = 0i64;
  *(_QWORD *)&s_decalVolumes.transientZonesToProcess[0].array[v1 + 14] = 0i64;
  *(_QWORD *)&s_decalVolumes.transientZonesToProcess[0].array[v1 + 16] = 0i64;
  *(_QWORD *)&s_decalVolumes.transientZonesToProcess[0].array[v1 + 18] = 0i64;
  *(_QWORD *)&s_decalVolumes.transientZonesToProcess[0].array[v1 + 20] = 0i64;
  *(_QWORD *)&s_decalVolumes.transientZonesToProcess[0].array[v1 + 22] = 0i64;
  *(_QWORD *)&s_decalVolumes.transientZonesToProcess[0].array[v1 + 24] = 0i64;
  *(_QWORD *)&s_decalVolumes.transientZonesToProcess[0].array[v1 + 26] = 0i64;
  *(_QWORD *)&s_decalVolumes.transientZonesToProcess[0].array[v1 + 28] = 0i64;
  *(_QWORD *)&s_decalVolumes.transientZonesToProcess[0].array[v1 + 30] = 0i64;
  *(_QWORD *)&s_decalVolumes.transientZonesToProcess[0].array[v1 + 32] = 0i64;
  *(_QWORD *)&s_decalVolumes.transientZonesToProcess[0].array[v1 + 34] = 0i64;
  *(_QWORD *)&s_decalVolumes.transientZonesToProcess[0].array[v1 + 36] = 0i64;
  *(_QWORD *)&s_decalVolumes.transientZonesToProcess[0].array[v1 + 38] = 0i64;
  *(_QWORD *)&s_decalVolumes.transientZonesToProcess[0].array[v1 + 40] = 0i64;
  *(_QWORD *)&s_decalVolumes.transientZonesToProcess[0].array[v1 + 42] = 0i64;
  *(_QWORD *)&s_decalVolumes.transientZonesToProcess[0].array[v1 + 44] = 0i64;
  *(_QWORD *)&s_decalVolumes.transientZonesToProcess[0].array[v1 + 46] = 0i64;
  s_decalVolumes.frameDynamicDecalVolumesWorkgroupCount[frame] = 0;
  R_DecalVolumesGrid_ToggleFrame(frame);
  return (unsigned int)frame;
}

