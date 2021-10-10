/*
==============
RB_GP_ProcessSurfs
==============
*/

void __fastcall RB_GP_ProcessSurfs(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxBackEndData *data, const GfxGPConfig *gpConfig)
{
  ?RB_GP_ProcessSurfs@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@PEIBUGfxBackEndData@@AEBUGfxGPConfig@@@Z(gfxContext, viewInfo, data, gpConfig);
}

/*
==============
R_GP_CullTriangles
==============
*/

void __fastcall R_GP_CullTriangles(ComputeCmdBufState *state, const GfxBackEndData *data, const GfxViewInfo *viewInfo, unsigned int passIndex, bool reusePrepassVisData, R_RT_BufferHandle *triPassIndirectArgsBuffer, R_RT_BufferHandle *clusterWorkgroupArgsBuffer, R_RT_BufferHandle *perSurfDataBuffer, R_RT_ColorHandle *occlusionDepthTexture, R_RT_ColorHandle *umbraOcclusionTexture, R_RT_BufferHandle *culledTriClusterBuffer, R_RT_BufferHandle *clusterTriCountsBuffer)
{
  ?R_GP_CullTriangles@@YAXPEAUComputeCmdBufState@@PEIBUGfxBackEndData@@PEBUGfxViewInfo@@I_NVR_RT_BufferHandle@@44VR_RT_ColorHandle@@544@Z(state, data, viewInfo, passIndex, reusePrepassVisData, triPassIndirectArgsBuffer, clusterWorkgroupArgsBuffer, perSurfDataBuffer, occlusionDepthTexture, umbraOcclusionTexture, culledTriClusterBuffer, clusterTriCountsBuffer);
}

/*
==============
R_GPV_VisibilityBufferPrepass
==============
*/

void __fastcall R_GPV_VisibilityBufferPrepass(ComputeCmdBufState *state, const GfxBackEndData *data, const GfxViewInfo *viewInfo, unsigned int passIndex, R_RT_ColorHandle *triIDTexture, R_RT_BufferHandle *clusterWorkgroupArgsBuffer, R_RT_BufferHandle *perSurfDataBuffer, R_RT_BufferHandle *culledTriClusterBuffer)
{
  ?R_GPV_VisibilityBufferPrepass@@YAXPEAUComputeCmdBufState@@PEIBUGfxBackEndData@@PEBUGfxViewInfo@@IVR_RT_ColorHandle@@VR_RT_BufferHandle@@44@Z(state, data, viewInfo, passIndex, triIDTexture, clusterWorkgroupArgsBuffer, perSurfDataBuffer, culledTriClusterBuffer);
}

/*
==============
R_GPU_ResetClutterFrame
==============
*/

void __fastcall R_GPU_ResetClutterFrame(ComputeCmdBufState *state, const GfxBackEndData *data)
{
  ?R_GPU_ResetClutterFrame@@YAXPEIAUComputeCmdBufState@@PEIBUGfxBackEndData@@@Z(state, data);
}

/*
==============
R_GP_InitFrame
==============
*/

void __fastcall R_GP_InitFrame(const GfxBackEndData *data, const GfxViewInfo *viewInfo)
{
  ?R_GP_InitFrame@@YAXPEIBUGfxBackEndData@@PEIBUGfxViewInfo@@@Z(data, viewInfo);
}

/*
==============
R_GP_UpdateClutterCollectionVisData
==============
*/

void __fastcall R_GP_UpdateClutterCollectionVisData(unsigned int passIndex, unsigned int clutterCollectionIndex, bool visible)
{
  ?R_GP_UpdateClutterCollectionVisData@@YAXII_N@Z(passIndex, clutterCollectionIndex, visible);
}

/*
==============
R_GP_Wait
==============
*/

void __fastcall R_GP_Wait(unsigned int passIndex, bool immediate)
{
  ?R_GP_Wait@@YAXI_N@Z(passIndex, immediate);
}

/*
==============
R_GP_GenerateClusterWorkgroups
==============
*/

void __fastcall R_GP_GenerateClusterWorkgroups(ComputeCmdBufState *state, const GfxBackEndData *data, unsigned int passIndex, R_RT_BufferHandle *clusterPassIndirectArgsBuffer, R_RT_BufferHandle *subMeshWorkgroupArgsBuffer, R_RT_BufferHandle *perSurfDataBuffer, R_RT_BufferHandle *culledSubMeshBuffer, R_RT_BufferHandle *subMeshClusterOffsetsBuffer, R_RT_BufferHandle *clusterWorkgroupArgsBuffer)
{
  ?R_GP_GenerateClusterWorkgroups@@YAXPEIAUComputeCmdBufState@@PEIBUGfxBackEndData@@IVR_RT_BufferHandle@@22222@Z(state, data, passIndex, clusterPassIndirectArgsBuffer, subMeshWorkgroupArgsBuffer, perSurfDataBuffer, culledSubMeshBuffer, subMeshClusterOffsetsBuffer, clusterWorkgroupArgsBuffer);
}

/*
==============
R_GP_GenerateSModelSurfData
==============
*/

void __fastcall R_GP_GenerateSModelSurfData(ComputeCmdBufState *state, const GfxBackEndData *data, unsigned int passIndex, R_RT_BufferHandle *smodelDataGenIndirectArgsBuffer, R_RT_BufferHandle *smodelSurfEmitBuffer, R_RT_BufferHandle *smodelSurfEmitCountBuffer, R_RT_BufferHandle *perSurfDataBuffer, R_RT_BufferHandle *smodelSurfCountBuffer, R_RT_BufferHandle *batchSubMeshCountsBuffer, R_RT_BufferHandle *surfSubMeshOffsetsBuffer)
{
  ?R_GP_GenerateSModelSurfData@@YAXPEIAUComputeCmdBufState@@PEIBUGfxBackEndData@@IVR_RT_BufferHandle@@222222@Z(state, data, passIndex, smodelDataGenIndirectArgsBuffer, smodelSurfEmitBuffer, smodelSurfEmitCountBuffer, perSurfDataBuffer, smodelSurfCountBuffer, batchSubMeshCountsBuffer, surfSubMeshOffsetsBuffer);
}

/*
==============
R_GP_GenerateSModelWorkgroups
==============
*/

void __fastcall R_GP_GenerateSModelWorkgroups(ComputeCmdBufState *state, const GfxBackEndData *data, unsigned int passIndex, R_RT_BufferHandle *smodelWorkgroupCounterBuffer, R_RT_BufferHandle *smodelWorkgroupArgsBuffer)
{
  ?R_GP_GenerateSModelWorkgroups@@YAXPEIAUComputeCmdBufState@@PEIBUGfxBackEndData@@IVR_RT_BufferHandle@@2@Z(state, data, passIndex, smodelWorkgroupCounterBuffer, smodelWorkgroupArgsBuffer);
}

/*
==============
GPReadBackRing::GPUCopyToRingBuffer
==============
*/

void __fastcall GPReadBackRing::GPUCopyToRingBuffer(GPReadBackRing *this, ComputeCmdBufState *state)
{
  ?GPUCopyToRingBuffer@GPReadBackRing@@QEAAXPEAUComputeCmdBufState@@@Z(this, state);
}

/*
==============
R_GP_InitIndirectArgsFromPrefixSum
==============
*/

void __fastcall R_GP_InitIndirectArgsFromPrefixSum(ComputeCmdBufState *state, const GfxBackEndData *data, unsigned int passIndex, unsigned int ppsElementCount, unsigned int nextPPSumTileSize, unsigned int ppsElementLimit, unsigned int ppsNextPassElementLimit, R_RT_BufferHandle *ppSumElemCountBuffer, R_RT_BufferHandle *offsetsBuffer, R_RT_BufferHandle *nextPassElemCountBuffer, R_RT_BufferHandle *nextPassIndirectArgsBuffer, R_RT_BufferHandle *nextPPSumIndirectArgsBuffer)
{
  ?R_GP_InitIndirectArgsFromPrefixSum@@YAXPEIAUComputeCmdBufState@@PEIBUGfxBackEndData@@IIIIIVR_RT_BufferHandle@@2222@Z(state, data, passIndex, ppsElementCount, nextPPSumTileSize, ppsElementLimit, ppsNextPassElementLimit, ppSumElemCountBuffer, offsetsBuffer, nextPassElemCountBuffer, nextPassIndirectArgsBuffer, nextPPSumIndirectArgsBuffer);
}

/*
==============
R_GP_SetScenePassIndex
==============
*/

void __fastcall R_GP_SetScenePassIndex(GfxCmdBufSourceState *source, const GfxBackEndData *data, unsigned int passIndex)
{
  ?R_GP_SetScenePassIndex@@YAXPEIAUGfxCmdBufSourceState@@PEIBUGfxBackEndData@@I@Z(source, data, passIndex);
}

/*
==============
R_GP_GenerateSModelSurfs
==============
*/

void __fastcall R_GP_GenerateSModelSurfs(ComputeCmdBufState *state, const GfxBackEndData *data, unsigned int passIndex, R_RT_BufferHandle *smodelWorkgroupCounterBuffer, R_RT_BufferHandle *smodelWorkgroupArgsBuffer, R_RT_BufferHandle *smodelSurfEmitBuffer, R_RT_BufferHandle *smodelSurfEmitCountBuffer)
{
  ?R_GP_GenerateSModelSurfs@@YAXPEIAUComputeCmdBufState@@PEIBUGfxBackEndData@@IVR_RT_BufferHandle@@222@Z(state, data, passIndex, smodelWorkgroupCounterBuffer, smodelWorkgroupArgsBuffer, smodelSurfEmitBuffer, smodelSurfEmitCountBuffer);
}

/*
==============
R_GP_AllocSModelCollections
==============
*/

void __fastcall R_GP_AllocSModelCollections(unsigned int passIndex, unsigned int numSModelCollectionsToAlloc, const GfxSModelCollExpansionArg *smodelCollExpansionArgs)
{
  ?R_GP_AllocSModelCollections@@YAXIIPEBUGfxSModelCollExpansionArg@@@Z(passIndex, numSModelCollectionsToAlloc, smodelCollExpansionArgs);
}

/*
==============
R_GP_CullClusters
==============
*/

void __fastcall R_GP_CullClusters(ComputeCmdBufState *state, const GfxBackEndData *data, const GfxViewInfo *viewInfo, unsigned int passIndex, bool reusePrepassVisData, bool useVisBuffer, R_RT_BufferHandle *clusterPassIndirectArgsBuffer, R_RT_BufferHandle *subMeshWorkgroupArgsBuffer, R_RT_BufferHandle *perSurfDataBuffer, R_RT_BufferHandle *prevCulledSubMeshBuffer, R_RT_BufferHandle *prevSubMeshClusterOffsetsBuffer, R_RT_ColorHandle *occlusionDepthTexture, R_RT_ColorHandle *umbraOcclusionTexture, R_RT_BufferHandle *culledSubMeshBuffer, R_RT_BufferHandle *subMeshClusterCountsBuffer, R_RT_BufferHandle *culledTriClusterBuffer)
{
  ?R_GP_CullClusters@@YAXPEIAUComputeCmdBufState@@PEIBUGfxBackEndData@@PEBUGfxViewInfo@@I_N3VR_RT_BufferHandle@@4444VR_RT_ColorHandle@@5444@Z(state, data, viewInfo, passIndex, reusePrepassVisData, useVisBuffer, clusterPassIndirectArgsBuffer, subMeshWorkgroupArgsBuffer, perSurfDataBuffer, prevCulledSubMeshBuffer, prevSubMeshClusterOffsetsBuffer, occlusionDepthTexture, umbraOcclusionTexture, culledSubMeshBuffer, subMeshClusterCountsBuffer, culledTriClusterBuffer);
}

/*
==============
R_GenerateGPUArgsWorker
==============
*/

void __fastcall R_GenerateGPUArgsWorker(const void *const data)
{
  ?R_GenerateGPUArgsWorker@@YAXQEBX@Z(data);
}

/*
==============
R_GP_ClearCounterResourcesToZero
==============
*/

void __fastcall R_GP_ClearCounterResourcesToZero(ComputeCmdBufState *state, const GfxBackEndData *data, unsigned int passIndex, R_RT_BufferHandle *batchSubMeshCountsBuffer, R_RT_BufferHandle *smodelSurfEmitCountBuffer, R_RT_BufferHandle *smodelSurfCountBuffer)
{
  ?R_GP_ClearCounterResourcesToZero@@YAXPEIAUComputeCmdBufState@@PEIBUGfxBackEndData@@IVR_RT_BufferHandle@@22@Z(state, data, passIndex, batchSubMeshCountsBuffer, smodelSurfEmitCountBuffer, smodelSurfCountBuffer);
}

/*
==============
R_CollectGPBackendStats
==============
*/

void __fastcall R_CollectGPBackendStats(GPBackendPassData *gpBackendPass)
{
  ?R_CollectGPBackendStats@@YAXPEIAUGPBackendPassData@@@Z(gpBackendPass);
}

/*
==============
R_GP_ExpandIndexBuffers
==============
*/

void __fastcall R_GP_ExpandIndexBuffers(ComputeCmdBufState *state, const GfxBackEndData *data, unsigned int passIndex, bool indexedDraws, R_RT_BufferHandle *triPassIndirectArgsBuffer, R_RT_BufferHandle *clusterWorkgroupArgsBuffer, R_RT_BufferHandle *perSurfDataBuffer, R_RT_BufferHandle *culledTriClusterBuffer, R_RT_BufferHandle *clusterTriOffsetsBuffer, R_RT_BufferHandle *indexBuffer)
{
  ?R_GP_ExpandIndexBuffers@@YAXPEAUComputeCmdBufState@@PEIBUGfxBackEndData@@I_NVR_RT_BufferHandle@@33333@Z(state, data, passIndex, indexedDraws, triPassIndirectArgsBuffer, clusterWorkgroupArgsBuffer, perSurfDataBuffer, culledTriClusterBuffer, clusterTriOffsetsBuffer, indexBuffer);
}

/*
==============
R_GP_PrefixSum512
==============
*/

void __fastcall R_GP_PrefixSum512(ComputeCmdBufState *state, const GfxBackEndData *data, unsigned int passIndex, unsigned int ppsElementCount, R_RT_BufferHandle *ppSumIndirectArgsBuffer, R_RT_BufferHandle *countsBuffer, R_RT_BufferHandle *reduceBuffer, R_RT_BufferHandle *offsetsBuffer)
{
  ?R_GP_PrefixSum512@@YAXPEIAUComputeCmdBufState@@PEIBUGfxBackEndData@@IIVR_RT_BufferHandle@@222@Z(state, data, passIndex, ppsElementCount, ppSumIndirectArgsBuffer, countsBuffer, reduceBuffer, offsetsBuffer);
}

/*
==============
R_GP_InitDrawIndirectArgs
==============
*/

void __fastcall R_GP_InitDrawIndirectArgs(ComputeCmdBufState *state, const GfxBackEndData *data, unsigned int passIndex, bool isPrepass, R_RT_BufferHandle *batchSubMeshOffsetsBuffer, R_RT_BufferHandle *subMeshClusterOffsetsBuffer, R_RT_BufferHandle *clusterTriOffsetsBuffer, R_RT_BufferHandle *indirectArgsBuffer)
{
  ?R_GP_InitDrawIndirectArgs@@YAXPEIAUComputeCmdBufState@@PEIBUGfxBackEndData@@I_NVR_RT_BufferHandle@@333@Z(state, data, passIndex, isPrepass, batchSubMeshOffsetsBuffer, subMeshClusterOffsetsBuffer, clusterTriOffsetsBuffer, indirectArgsBuffer);
}

/*
==============
R_GP_MapSModelMaterialToBatch
==============
*/

void __fastcall R_GP_MapSModelMaterialToBatch(unsigned int passIndex, unsigned int sceneViewType, unsigned int gpBatchIndex, unsigned int smodelMaterialIndex)
{
  ?R_GP_MapSModelMaterialToBatch@@YAXIIII@Z(passIndex, sceneViewType, gpBatchIndex, smodelMaterialIndex);
}

/*
==============
R_GP_AddViewParms
==============
*/

void R_GP_AddViewParms(void)
{
  ?R_GP_AddViewParms@@YAXXZ();
}

/*
==============
R_GP_GetPassBatchCount
==============
*/

unsigned int __fastcall R_GP_GetPassBatchCount(const GfxBackEndData *data, unsigned int passIndex)
{
  return ?R_GP_GetPassBatchCount@@YAIPEBUGfxBackEndData@@I@Z(data, passIndex);
}

/*
==============
R_GPU_InitClutterFrame
==============
*/

void __fastcall R_GPU_InitClutterFrame(ComputeCmdBufState *state, const GfxBackEndData *data, unsigned int passIndex)
{
  ?R_GPU_InitClutterFrame@@YAXPEIAUComputeCmdBufState@@PEIBUGfxBackEndData@@I@Z(state, data, passIndex);
}

/*
==============
R_GenerateGPUArgs
==============
*/

void __fastcall R_GenerateGPUArgs(const GfxBackEndData *data, unsigned int passIndex)
{
  ?R_GenerateGPUArgs@@YAXPEIBUGfxBackEndData@@I@Z(data, passIndex);
}

/*
==============
R_AllocGPUBatchIndexesSModel
==============
*/

unsigned __int16 __fastcall R_AllocGPUBatchIndexesSModel(unsigned int passIndex, GfxSceneViewType sceneViewType, unsigned int batchCount, unsigned int *validBatchCount)
{
  return ?R_AllocGPUBatchIndexesSModel@@YAGIW4GfxSceneViewType@@IPEIAI@Z(passIndex, sceneViewType, batchCount, validBatchCount);
}

/*
==============
R_GP_ShutDownBuffers
==============
*/

void R_GP_ShutDownBuffers(void)
{
  ?R_GP_ShutDownBuffers@@YAXXZ();
}

/*
==============
R_GP_IsBatchIndexValid
==============
*/

bool __fastcall R_GP_IsBatchIndexValid(unsigned __int16 batchIndex, const GfxBackEndData *data, unsigned int passIndex)
{
  return ?R_GP_IsBatchIndexValid@@YA_NGPEIBUGfxBackEndData@@I@Z(batchIndex, data, passIndex);
}

/*
==============
R_GP_ClearBufferToZero
==============
*/

void __fastcall R_GP_ClearBufferToZero(ComputeCmdBufState *computeState, const GfxWrappedRWBuffer *buffer, unsigned int size, bool structuredBuffer)
{
  ?R_GP_ClearBufferToZero@@YAXPEAUComputeCmdBufState@@PEBUGfxWrappedRWBuffer@@I_N@Z(computeState, buffer, size, structuredBuffer);
}

/*
==============
R_GPU_GenerateClutter
==============
*/

void __fastcall R_GPU_GenerateClutter(ComputeCmdBufState *state, const GfxBackEndData *data, unsigned int passIndex, const bool reactiveMotionPass)
{
  ?R_GPU_GenerateClutter@@YAXPEIAUComputeCmdBufState@@PEIBUGfxBackEndData@@I_N@Z(state, data, passIndex, reactiveMotionPass);
}

/*
==============
R_GP_GenerateSubMeshWorkgroups
==============
*/

void __fastcall R_GP_GenerateSubMeshWorkgroups(ComputeCmdBufState *state, const GfxBackEndData *data, unsigned int passIndex, R_RT_BufferHandle *subMeshWorkgroupGenIndirectArgs, R_RT_BufferHandle *smodelSurfCountBuffer, R_RT_BufferHandle *perSurfDataBuffer, R_RT_BufferHandle *batchSubMeshOffsetsBuffer, R_RT_BufferHandle *surfSubMeshOffsetsBuffer, R_RT_BufferHandle *subMeshWorkgroupArgsBuffer)
{
  ?R_GP_GenerateSubMeshWorkgroups@@YAXPEIAUComputeCmdBufState@@PEIBUGfxBackEndData@@IVR_RT_BufferHandle@@22222@Z(state, data, passIndex, subMeshWorkgroupGenIndirectArgs, smodelSurfCountBuffer, perSurfDataBuffer, batchSubMeshOffsetsBuffer, surfSubMeshOffsetsBuffer, subMeshWorkgroupArgsBuffer);
}

/*
==============
R_GP_GenerateIndirectArgsFromCounter
==============
*/

void __fastcall R_GP_GenerateIndirectArgsFromCounter(ComputeCmdBufState *state, const GfxBackEndData *data, unsigned int passIndex, unsigned int threadGroupSize, unsigned int counterByteOffset, unsigned int countBias, unsigned int countLimit, R_RT_BufferHandle *counterBuffer, R_RT_BufferHandle *indirectArgsBuffer)
{
  ?R_GP_GenerateIndirectArgsFromCounter@@YAXPEIAUComputeCmdBufState@@PEIBUGfxBackEndData@@IIIIIVR_RT_BufferHandle@@2@Z(state, data, passIndex, threadGroupSize, counterByteOffset, countBias, countLimit, counterBuffer, indirectArgsBuffer);
}

/*
==============
R_GP_GenerateDynSurfData
==============
*/

void __fastcall R_GP_GenerateDynSurfData(ComputeCmdBufState *state, const GfxBackEndData *data, unsigned int passIndex, R_RT_BufferHandle *perSurfDataBuffer, R_RT_BufferHandle *batchSubMeshCountsBuffer, R_RT_BufferHandle *surfSubMeshOffsetsBuffer)
{
  ?R_GP_GenerateDynSurfData@@YAXPEIAUComputeCmdBufState@@PEIBUGfxBackEndData@@IVR_RT_BufferHandle@@22@Z(state, data, passIndex, perSurfDataBuffer, batchSubMeshCountsBuffer, surfSubMeshOffsetsBuffer);
}

/*
==============
R_AllocGPUBatchIndexXModel
==============
*/

unsigned __int16 __fastcall R_AllocGPUBatchIndexXModel(unsigned int passIndex, GfxSceneViewType sceneViewType, const GfxSceneEntity *const sceneEnt, const void *const modelSurf, unsigned int surfId, surfaceType_t surfType, Material *const *materialHandle)
{
  return ?R_AllocGPUBatchIndexXModel@@YAGIW4GfxSceneViewType@@QEIBUGfxSceneEntity@@QEIBXIW4surfaceType_t@@PEBQEAUMaterial@@@Z(passIndex, sceneViewType, sceneEnt, modelSurf, surfId, surfType, materialHandle);
}

/*
==============
R_GP_InitBuffers
==============
*/

void R_GP_InitBuffers(void)
{
  ?R_GP_InitBuffers@@YAXXZ();
}

/*
==============
R_GP_ResetGlobalData
==============
*/

void R_GP_ResetGlobalData(void)
{
  ?R_GP_ResetGlobalData@@YAXXZ();
}

/*
==============
R_GP_HasWorkItems
==============
*/

bool __fastcall R_GP_HasWorkItems(const GfxBackEndData *data, unsigned int passIndex)
{
  return ?R_GP_HasWorkItems@@YA_NPEBUGfxBackEndData@@I@Z(data, passIndex);
}

/*
==============
R_GP_GenerateClusterWorkgroupsAndVisBits
==============
*/

void __fastcall R_GP_GenerateClusterWorkgroupsAndVisBits(ComputeCmdBufState *state, const GfxBackEndData *data, unsigned int passIndex, R_RT_BufferHandle *clusterPassIndirectArgsBuffer, R_RT_BufferHandle *subMeshWorkgroupArgsBuffer, R_RT_BufferHandle *perSurfDataBuffer, R_RT_BufferHandle *culledSubMeshBuffer, R_RT_BufferHandle *subMeshClusterOffsetsBuffer, R_RT_BufferHandle *prevCulledSubMeshBuffer, R_RT_BufferHandle *prevSubMeshClusterOffsetsBuffer, R_RT_BufferHandle *prevCulledTriClusterBuffer, R_RT_BufferHandle *clusterWorkgroupArgsBuffer, R_RT_BufferHandle *primeCulledTriClusterBuffer, R_RT_BufferHandle *primeClusterTriCountsBuffer)
{
  ?R_GP_GenerateClusterWorkgroupsAndVisBits@@YAXPEIAUComputeCmdBufState@@PEIBUGfxBackEndData@@IVR_RT_BufferHandle@@2222222222@Z(state, data, passIndex, clusterPassIndirectArgsBuffer, subMeshWorkgroupArgsBuffer, perSurfDataBuffer, culledSubMeshBuffer, subMeshClusterOffsetsBuffer, prevCulledSubMeshBuffer, prevSubMeshClusterOffsetsBuffer, prevCulledTriClusterBuffer, clusterWorkgroupArgsBuffer, primeCulledTriClusterBuffer, primeClusterTriCountsBuffer);
}

/*
==============
R_GP_ClearClutterCollectionVisData
==============
*/

void __fastcall R_GP_ClearClutterCollectionVisData(unsigned int passIndex, unsigned int clutterCollectionCount)
{
  ?R_GP_ClearClutterCollectionVisData@@YAXII@Z(passIndex, clutterCollectionCount);
}

/*
==============
R_GP_GetPassDynSurfCount
==============
*/

unsigned int __fastcall R_GP_GetPassDynSurfCount(const GfxBackEndData *data, unsigned int passIndex)
{
  return ?R_GP_GetPassDynSurfCount@@YAIPEBUGfxBackEndData@@I@Z(data, passIndex);
}

/*
==============
R_GP_PrefixSum256
==============
*/

void __fastcall R_GP_PrefixSum256(ComputeCmdBufState *state, const GfxBackEndData *data, unsigned int passIndex, unsigned int ppsElementCount, R_RT_BufferHandle *ppSumIndirectArgsBuffer, R_RT_BufferHandle *countsBuffer, R_RT_BufferHandle *reduceBuffer, R_RT_BufferHandle *offsetsBuffer)
{
  ?R_GP_PrefixSum256@@YAXPEIAUComputeCmdBufState@@PEIBUGfxBackEndData@@IIVR_RT_BufferHandle@@222@Z(state, data, passIndex, ppsElementCount, ppSumIndirectArgsBuffer, countsBuffer, reduceBuffer, offsetsBuffer);
}

/*
==============
R_GP_ReadBackGPStats
==============
*/

void __fastcall R_GP_ReadBackGPStats(ComputeCmdBufState *state, const GfxBackEndData *data, unsigned int passIndex, R_RT_BufferHandle *batchSubMeshOffsetsBuffer, R_RT_BufferHandle *subMeshClusterOffsetsBuffer, R_RT_BufferHandle *clusterTriOffsetsBuffer, R_RT_BufferHandle *smodelSurfEmitCountBuffer, R_RT_BufferHandle *smodelSurfCountBuffer, R_RT_BufferHandle *indirectArgsBuffer, bool isOcclusionPass)
{
  ?R_GP_ReadBackGPStats@@YAXPEIAUComputeCmdBufState@@PEIBUGfxBackEndData@@IVR_RT_BufferHandle@@22222_N@Z(state, data, passIndex, batchSubMeshOffsetsBuffer, subMeshClusterOffsetsBuffer, clusterTriOffsetsBuffer, smodelSurfEmitCountBuffer, smodelSurfCountBuffer, indirectArgsBuffer, isOcclusionPass);
}

/*
==============
R_GP_GenerateClutter
==============
*/

void __fastcall R_GP_GenerateClutter(ComputeCmdBufState *state, const GfxBackEndData *data, unsigned int passIndex, const bool reactiveMotionPass)
{
  ?R_GP_GenerateClutter@@YAXPEIAUComputeCmdBufState@@PEIBUGfxBackEndData@@I_N@Z(state, data, passIndex, reactiveMotionPass);
}

/*
==============
R_GP_IsCullingEnabled
==============
*/

bool __fastcall R_GP_IsCullingEnabled(unsigned int passIndex)
{
  return ?R_GP_IsCullingEnabled@@YA_NI@Z(passIndex);
}

/*
==============
GPReadBackRing::GPUCopyToRingBuffer
==============
*/
void GPReadBackRing::GPUCopyToRingBuffer(GPReadBackRing *this, ComputeCmdBufState *state)
{
  unsigned int v4; 

  if ( state->computeContextType != COMPUTE_CONTEXT_TYPE_GFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 371, ASSERT_TYPE_ASSERT, "(state->computeContextType == COMPUTE_CONTEXT_TYPE_GFX)", (const char *)&queryFormat, "state->computeContextType == COMPUTE_CONTEXT_TYPE_GFX") )
    __debugbreak();
  if ( !state->device && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 372, ASSERT_TYPE_ASSERT, "(state->device)", (const char *)&queryFormat, "state->device") )
    __debugbreak();
  v4 = truncate_cast<unsigned int,unsigned __int64>(++this->writeFenceCounter & 3);
  R_MemCpy(state, this->readBackInfoGPU[v4], this->readBackBuffer.data, 0x40ui64, 1);
  ((void (__fastcall *)(GfxDevice *, volatile unsigned __int64 *, unsigned __int64, _QWORD, _DWORD))state->device->m_pFunction[23].AddRef)(state->device, this->writeFenceAddr, this->writeFenceCounter, 0i64, 0);
}

/*
==============
RB_GP_GenerateSurfs
==============
*/
void RB_GP_GenerateSurfs(GfxCmdBufContext *gfxContext, ComputeCmdBufState *state, const GfxBackEndData *data, unsigned int passIndex, R_RT_BufferHandle *perSurfDataBuffer, R_RT_BufferHandle *batchSubMeshOffsetsBuffer, R_RT_BufferHandle *subMeshWorkgroupArgsBuffer, R_RT_BufferHandle *subMeshCountBuffer, R_RT_BufferHandle *clusterPassIndirectArgsBuffer, R_RT_BufferHandle *clusterPPSumIndirectArgsBuffer, R_RT_BufferHandle *smodelSurfEmitCountBuffer, R_RT_BufferHandle *smodelSurfCountBuffer)
{
  __int64 smpFrame; 
  __int64 v17; 
  R_RT_Handle v18; 
  int *v19; 
  int v20; 
  unsigned int v21; 
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v23; 
  const R_RT_Surface *v24; 
  R_RT_Handle v25; 
  GfxShaderBufferView *v26; 
  const R_RT_Surface *v27; 
  R_RT_BufferHandle v28; 
  R_RT_BufferHandle v29; 
  R_RT_BufferHandle v30; 
  R_RT_Handle v31; 
  GfxShaderBufferView *v32; 
  const R_RT_Surface *v33; 
  R_RT_BufferHandle v35; 
  unsigned int v36; 
  unsigned int v37; 
  R_RT_BufferHandle v39; 
  R_RT_BufferHandle v40; 
  GfxCmdBufContext *v41; 
  GfxCmdBufContext v42; 
  GfxCmdBufContext v43; 
  GfxCmdBufContext v44; 
  GfxCmdBufContext v45; 
  GfxCmdBufContext v46; 
  GfxCmdBufContext v47; 
  unsigned int *v48; 
  GfxShaderBufferView *views; 
  GfxShaderBufferRWView *p_rwView; 
  GfxShaderBufferView *v51; 
  GfxShaderBufferRWView *v52; 
  GfxCmdBufContext *v53; 
  R_RT_BufferHandle v54; 
  R_RT_BufferHandle v55; 
  GfxCmdBufContext v56; 
  GfxCmdBufContext v57; 
  GfxCmdBufContext v58; 
  GfxCmdBufContext v59; 
  GfxCmdBufContext v60; 
  GfxCmdBufContext v61; 
  GfxCmdBufContext v62; 
  GfxCmdBufContext v63; 
  R_RT_Handle v64; 
  R_RT_Handle v65; 
  R_RT_BufferHandle v66; 
  R_RT_BufferHandle v67; 
  R_RT_BufferHandle v68; 
  R_RT_BufferHandle v69; 
  R_RT_BufferHandle v70; 
  R_RT_BufferHandle v71; 
  R_RT_BufferHandle v72; 
  R_RT_BufferHandle v73; 
  R_RT_Handle v74; 
  R_RT_Handle v75; 
  R_RT_Handle v76; 
  R_RT_Handle v77; 
  R_RT_Handle v78; 
  R_RT_Handle v79; 
  R_RT_Handle v80; 
  R_RT_BufferHandle v81; 
  R_RT_BufferHandle v82; 
  R_RT_BufferHandle v83; 
  R_RT_BufferHandle v84; 
  R_RT_BufferHandle v85; 
  R_RT_Handle v86; 
  R_RT_Handle v87; 
  R_RT_Handle v88; 
  R_RT_BufferHandle v89; 
  R_RT_BufferHandle v90; 
  R_RT_BufferHandle v91; 
  R_RT_BufferHandle v92; 
  R_RT_Handle v93; 
  R_RT_Handle v94; 
  R_RT_Handle v95; 
  R_RT_Handle v96; 
  R_RT_Handle v97; 
  R_RT_Handle v98; 
  R_RT_Handle v99; 
  R_RT_BufferHandle v100; 
  R_RT_BufferHandle v101; 
  R_RT_BufferHandle v102; 
  R_RT_BufferHandle v103; 
  R_RT_BufferHandle v104; 
  R_RT_BufferHandle v105; 
  R_RT_BufferHandle v106; 
  R_RT_Handle v107; 
  R_RT_Handle v108; 
  R_RT_Handle v109; 
  R_RT_Handle v110; 
  R_RT_Handle v111; 
  R_RT_BufferHandle v112; 
  R_RT_BufferHandle v113; 
  R_RT_BufferHandle v114; 
  R_RT_BufferHandle v115; 
  R_RT_Handle v116; 
  R_RT_Handle v117; 
  R_RT_Handle v118; 
  R_RT_Handle v119; 
  R_RT_BufferHandle v120; 
  R_RT_BufferHandle v121; 
  R_RT_BufferHandle v122; 
  R_RT_BufferHandle v123; 
  R_RT_BufferHandle v124; 
  R_RT_Handle v125; 
  R_RT_Handle v126; 
  R_RT_Handle v127; 
  R_RT_Handle v128; 
  R_RT_Handle v129; 
  R_RT_BufferHandle v130; 
  R_RT_BufferHandle v131; 
  R_RT_BufferHandle v132; 
  R_RT_BufferHandle v133; 
  R_RT_BufferHandle v134; 
  R_RT_BufferHandle v135; 
  R_RT_Handle v136; 
  R_RT_Handle v137; 
  R_RT_Handle v138; 
  R_RT_Handle v139; 
  R_RT_Handle v140; 
  R_RT_Handle v141; 
  R_RT_Handle v142; 
  R_RT_Handle v143; 
  R_RT_Handle v144; 
  R_RT_Handle v145; 
  R_RT_Handle v146; 
  __int64 dataa; 
  int v148; 
  int v149; 
  __int64 v150; 
  unsigned int v151; 
  int v152; 
  R_RT_BufferHandle result; 
  R_RT_BufferHandle v154; 
  R_RT_BufferHandle v155; 
  R_RT_BufferHandle v156; 
  R_RT_BufferHandle v157; 
  R_RT_BufferHandle v158; 
  R_RT_BufferHandle v159; 
  R_RT_BufferHandle v160; 

  smpFrame = data->smpFrame;
  v53 = gfxContext;
  v17 = 8576i64 * passIndex;
  v48 = (unsigned int *)((char *)&s_gpBackendFrameData[smpFrame] + v17);
  R_RT_CreateBufferInternal(&result, 4u, 0x10000u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_BufferRaw|R_RT_Flag_RWView, R_RT_FlagInternal_None, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, "Batch SubMesh Counts Buffer", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp(3079)");
  v74 = smodelSurfEmitCountBuffer->R_RT_Handle;
  R_HW_AddResourceTransition(state, &v74, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v75 = smodelSurfCountBuffer->R_RT_Handle;
  R_HW_AddResourceTransition(state, &v75, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  v18 = smodelSurfEmitCountBuffer->R_RT_Handle;
  v19 = (int *)((char *)s_gpBackendFrameData + v17 + smpFrame * 20544);
  v78 = smodelSurfCountBuffer->R_RT_Handle;
  v77 = v18;
  v20 = *v19;
  v76 = (R_RT_Handle)result;
  if ( v20 )
  {
    v21 = 4 * *v19;
    Surface = R_RT_Handle::GetSurface(&v76);
    if ( (Surface->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
      __debugbreak();
    R_GP_ClearBufferToZero(state, (const GfxWrappedRWBuffer *)&Surface->1080, v21, 0);
  }
  v23 = R_RT_Handle::GetSurface(&v77);
  if ( (v23->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  R_GP_ClearBufferToZero(state, (const GfxWrappedRWBuffer *)&v23->1080, 4u, 0);
  v24 = R_RT_Handle::GetSurface(&v78);
  if ( (v24->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  R_GP_ClearBufferToZero(state, (const GfxWrappedRWBuffer *)&v24->1080, 4u, 0);
  R_RT_CreateBufferInternal(&v154, 4u, 0x10000u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_BufferRaw|R_RT_Flag_RWView, R_RT_FlagInternal_None, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, "Surf SubMesh Offsets Buffer", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp(3091)");
  v79 = perSurfDataBuffer->R_RT_Handle;
  R_HW_AddResourceTransition(state, &v79, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v80 = (R_RT_Handle)result;
  R_HW_AddResourceTransition(state, &v80, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  v81 = v154;
  v83 = *perSurfDataBuffer;
  v82 = result;
  R_GP_GenerateDynSurfData(state, data, passIndex, &v83, &v82, &v81);
  R_RT_CreateBufferInternal(&v155, 0xCu, 1u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_BufferIndirectArgs|R_RT_Flag_BufferRaw|R_RT_Flag_RWView, R_RT_FlagInternal_None, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, "SModel Workgroup Counter Buffer", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp(3103)");
  R_RT_CreateBufferInternal(&v156, 4u, 0x4000u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_BufferRaw|R_RT_Flag_RWView, R_RT_FlagInternal_None, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, "SModel Workgroup Args Buffer", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp(3104)");
  v84 = v156;
  v85 = v155;
  R_GP_GenerateSModelWorkgroups(state, data, passIndex, &v85, &v84);
  R_RT_CreateBufferInternal(&v157, 8u, 0xD000u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_BufferRaw|R_RT_Flag_RWView, R_RT_FlagInternal_None, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, "SModel Surf Emit Buffer", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp(3111)");
  v86 = (R_RT_Handle)v155;
  R_HW_AddResourceTransition(state, &v86, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v87 = (R_RT_Handle)v156;
  R_HW_AddResourceTransition(state, &v87, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v88 = smodelSurfEmitCountBuffer->R_RT_Handle;
  R_HW_AddResourceTransition(state, &v88, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  v89 = *smodelSurfEmitCountBuffer;
  v90 = v157;
  v91 = v156;
  v92 = v155;
  R_GP_GenerateSModelSurfs(state, data, passIndex, &v92, &v91, &v90, &v89);
  R_RT_CreateBufferInternal(&v158, 0xCu, 1u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_BufferIndirectArgs|R_RT_Flag_BufferRaw|R_RT_Flag_RWView, R_RT_FlagInternal_None, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, "SModel Surf Datagen Indirect Args Buffer", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp(3127)");
  v93 = smodelSurfEmitCountBuffer->R_RT_Handle;
  R_HW_AddResourceTransition(state, &v93, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  v25 = smodelSurfEmitCountBuffer->R_RT_Handle;
  dataa = 64i64;
  v148 = 0;
  v149 = 0x10000;
  v95 = (R_RT_Handle)v158;
  v94 = v25;
  R_UploadAndSetComputeConstants(state, 5, &dataa, 0x10u, NULL);
  v26 = (GfxShaderBufferView *)R_RT_Handle::GetSurface(&v94);
  if ( (v26->view & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  views = v26 + 68;
  R_SetComputeViews(state, 0, 1, (const GfxShaderBufferView *const *)&views);
  v27 = R_RT_Handle::GetSurface(&v95);
  if ( (v27->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  p_rwView = &v27->m_buffer.m_wrappedBuffer.rwView;
  R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&p_rwView, NULL);
  R_SetComputeShader(state, rgp.gpCovertSModelSurfCounterToIndirectArg);
  R_Dispatch(state, 1u, 1u, 1u);
  v96 = (R_RT_Handle)v158;
  R_HW_AddResourceTransition(state, &v96, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v97 = (R_RT_Handle)v157;
  R_HW_AddResourceTransition(state, &v97, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v98 = smodelSurfEmitCountBuffer->R_RT_Handle;
  R_HW_AddResourceTransition(state, &v98, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_VERTEX_AND_CONSTANT_BUFFER, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v99 = smodelSurfCountBuffer->R_RT_Handle;
  R_HW_AddResourceTransition(state, &v99, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  v100 = v154;
  v28 = *smodelSurfCountBuffer;
  v101 = result;
  v29 = *perSurfDataBuffer;
  v102 = v28;
  v30 = *smodelSurfEmitCountBuffer;
  v103 = v29;
  v104 = v30;
  v105 = v157;
  v106 = v158;
  R_GP_GenerateSModelSurfData(state, data, passIndex, &v106, &v105, &v104, &v103, &v102, &v101, &v100);
  R_RT_CreateBufferInternal(&v159, 0xCu, 1u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_BufferIndirectArgs|R_RT_Flag_BufferRaw|R_RT_Flag_RWView, R_RT_FlagInternal_None, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, "SubMesh Workgroup Gen Indirect Args Buffer", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp(3158)");
  v107 = smodelSurfCountBuffer->R_RT_Handle;
  R_HW_AddResourceTransition(state, &v107, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  v31 = smodelSurfCountBuffer->R_RT_Handle;
  v150 = 64i64;
  v151 = v48[33];
  v109 = (R_RT_Handle)v159;
  v108 = v31;
  v152 = 0x10000;
  R_UploadAndSetComputeConstants(state, 5, &v150, 0x10u, NULL);
  v32 = (GfxShaderBufferView *)R_RT_Handle::GetSurface(&v108);
  if ( (v32->view & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v51 = v32 + 68;
  R_SetComputeViews(state, 0, 1, (const GfxShaderBufferView *const *)&v51);
  v33 = R_RT_Handle::GetSurface(&v109);
  if ( (v33->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v52 = &v33->m_buffer.m_wrappedBuffer.rwView;
  R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&v52, NULL);
  R_SetComputeShader(state, rgp.gpCovertSModelSurfCounterToIndirectArg);
  R_Dispatch(state, 1u, 1u, 1u);
  R_RT_CreateBufferInternal(&v160, 4u, 0x100u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_BufferRaw|R_RT_Flag_RWView, R_RT_FlagInternal_None, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, "Batch SubMesh Reduce Buffer", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp(3172)");
  v110 = (R_RT_Handle)result;
  R_HW_AddResourceTransition(state, &v110, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v111 = batchSubMeshOffsetsBuffer->R_RT_Handle;
  R_HW_AddResourceTransition(state, &v111, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v55.m_tracking.m_name = _XMM0;
  v55.m_surfaceID = 0;
  v35 = *batchSubMeshOffsetsBuffer;
  v55.m_tracking.m_allocCounter = 0;
  v36 = *v48;
  v112 = v35;
  v113 = v160;
  v114 = result;
  v115 = v55;
  R_GP_PrefixSum256(state, data, passIndex, v36, &v115, &v114, &v113, &v112);
  v116 = batchSubMeshOffsetsBuffer->R_RT_Handle;
  R_HW_AddResourceTransition(state, &v116, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v117 = subMeshCountBuffer->R_RT_Handle;
  R_HW_AddResourceTransition(state, &v117, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v118 = clusterPassIndirectArgsBuffer->R_RT_Handle;
  R_HW_AddResourceTransition(state, &v118, 0xFFFFFFFF, D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v119 = clusterPPSumIndirectArgsBuffer->R_RT_Handle;
  R_HW_AddResourceTransition(state, &v119, 0xFFFFFFFF, D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  v37 = *v48;
  v54.m_surfaceID = 0;
  v54.m_tracking.m_allocCounter = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v54.m_tracking.m_name = _XMM0;
  v120 = *clusterPPSumIndirectArgsBuffer;
  v121 = *clusterPassIndirectArgsBuffer;
  v123 = *batchSubMeshOffsetsBuffer;
  v122 = *subMeshCountBuffer;
  v124 = v54;
  R_GP_InitIndirectArgsFromPrefixSum(state, data, passIndex, v37, 0x100u, 0x4000u, 0x10000u, &v124, &v123, &v122, &v121, &v120);
  v125 = (R_RT_Handle)v159;
  R_HW_AddResourceTransition(state, &v125, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v126 = smodelSurfCountBuffer->R_RT_Handle;
  R_HW_AddResourceTransition(state, &v126, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_VERTEX_AND_CONSTANT_BUFFER, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v127 = perSurfDataBuffer->R_RT_Handle;
  R_HW_AddResourceTransition(state, &v127, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v128 = (R_RT_Handle)v154;
  R_HW_AddResourceTransition(state, &v128, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v129 = subMeshWorkgroupArgsBuffer->R_RT_Handle;
  R_HW_AddResourceTransition(state, &v129, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  v131 = v154;
  v39 = *perSurfDataBuffer;
  v130 = *subMeshWorkgroupArgsBuffer;
  v132 = *batchSubMeshOffsetsBuffer;
  v40 = *smodelSurfCountBuffer;
  v133 = v39;
  v134 = v40;
  v135 = v159;
  R_GP_GenerateSubMeshWorkgroups(state, data, passIndex, &v135, &v134, &v133, &v132, &v131, &v130);
  v136 = subMeshWorkgroupArgsBuffer->R_RT_Handle;
  R_HW_AddResourceTransition(state, &v136, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v137 = subMeshCountBuffer->R_RT_Handle;
  R_HW_AddResourceTransition(state, &v137, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v138 = clusterPassIndirectArgsBuffer->R_RT_Handle;
  R_HW_AddResourceTransition(state, &v138, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v139 = clusterPPSumIndirectArgsBuffer->R_RT_Handle;
  R_HW_AddResourceTransition(state, &v139, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v140 = smodelSurfEmitCountBuffer->R_RT_Handle;
  R_HW_AddResourceTransition(state, &v140, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_VERTEX_AND_CONSTANT_BUFFER, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v141 = smodelSurfCountBuffer->R_RT_Handle;
  R_HW_AddResourceTransition(state, &v141, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_VERTEX_AND_CONSTANT_BUFFER, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v142 = (R_RT_Handle)v155;
  R_HW_AddResourceTransition(state, &v142, 0xFFFFFFFF, D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v143 = (R_RT_Handle)v156;
  R_HW_AddResourceTransition(state, &v143, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v144 = (R_RT_Handle)v157;
  R_HW_AddResourceTransition(state, &v144, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v145 = (R_RT_Handle)v158;
  R_HW_AddResourceTransition(state, &v145, 0xFFFFFFFF, D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v146 = (R_RT_Handle)result;
  R_HW_AddResourceTransition(state, &v146, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v64 = (R_RT_Handle)v159;
  R_HW_AddResourceTransition(state, &v64, 0xFFFFFFFF, D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v65 = (R_RT_Handle)v154;
  R_HW_AddResourceTransition(state, &v65, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  v41 = v53;
  v66 = v155;
  v56 = *v53;
  R_RT_Destroy(&v56, &v66);
  v42 = *v41;
  v67 = v156;
  v57 = v42;
  R_RT_Destroy(&v57, &v67);
  v43 = *v41;
  v68 = v157;
  v58 = v43;
  R_RT_Destroy(&v58, &v68);
  v44 = *v41;
  v69 = v158;
  v59 = v44;
  R_RT_Destroy(&v59, &v69);
  v45 = *v41;
  v70 = result;
  v60 = v45;
  R_RT_Destroy(&v60, &v70);
  v61 = *v41;
  v71 = v159;
  R_RT_Destroy(&v61, &v71);
  v46 = *v41;
  v72 = v154;
  v62 = v46;
  R_RT_Destroy(&v62, &v72);
  v47 = *v41;
  v73 = v160;
  v63 = v47;
  R_RT_Destroy(&v63, &v73);
}

/*
==============
RB_GP_ProcessSurfs
==============
*/
void RB_GP_ProcessSurfs(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxBackEndData *data, const GfxGPConfig *gpConfig)
{
  __int16 v5; 
  __int64 passIndex; 
  char v11; 
  GfxDevice *device; 
  GPBackendFrameData *v13; 
  const GfxDevice *v14; 
  GfxCmdBufState *v15; 
  R_RT_ColorHandle *p_m_floatZFullRt; 
  unsigned int rwView; 
  GfxWorld *world; 
  unsigned int v19; 
  R_RT_Handle v20; 
  _DWORD *v23; 
  GfxShaderBufferView *Surface; 
  GfxShaderBufferView *v25; 
  GfxShaderBufferView *v26; 
  GfxShaderBufferView *v27; 
  GfxShaderBufferView *v28; 
  GfxShaderBufferView *v29; 
  GfxShaderBufferView *v30; 
  const R_RT_Surface *v31; 
  const R_RT_Surface *v32; 
  const R_RT_Surface *v33; 
  R_RT_Handle *v34; 
  GfxShaderBufferView *v35; 
  GfxShaderBufferView *v36; 
  GfxShaderBufferView *v37; 
  GfxShaderBufferView *v38; 
  const R_RT_Surface *v39; 
  const R_RT_Surface *v40; 
  unsigned __int64 smpFrame; 
  _DWORD *v43; 
  GfxShaderBufferView *v44; 
  GfxShaderBufferView *v45; 
  GfxShaderBufferView *v46; 
  GfxShaderBufferView *v47; 
  const R_RT_Surface *v48; 
  __m256i v49; 
  GPBackendPassData *v50; 
  __int64 v51; 
  R_RT_Handle v52; 
  GfxShaderBufferView *views; 
  GfxShaderBufferView *v54; 
  GfxShaderBufferView *v55; 
  GfxShaderBufferView *v56; 
  GfxShaderBufferView *v57; 
  GfxShaderBufferView *v58; 
  GfxShaderBufferView *v59; 
  GfxShaderBufferRWView *p_rwView; 
  GfxShaderBufferRWView *v61; 
  GfxShaderBufferRWView *v62; 
  GfxShaderBufferView *v63; 
  GfxShaderBufferView *v64; 
  GfxShaderBufferView *v65; 
  GfxShaderBufferView *v66; 
  GfxShaderBufferRWView *v67; 
  GfxShaderBufferView *v68; 
  GfxShaderBufferView *v69; 
  GfxShaderBufferView *p_view; 
  GfxShaderBufferView *v71; 
  GfxShaderBufferView *v72; 
  GfxShaderBufferView *v73; 
  GfxShaderBufferRWView *v74; 
  R_RT_Handle m_gpClusterPassIndirectArgsBuffer; 
  R_RT_Handle m_gpSubMeshWorkgroupArgsBuffer; 
  R_RT_Handle m_gpPerSurfDataBuffer; 
  R_RT_Handle v78; 
  R_RT_Handle m_gpIndexBuffer; 
  __m256i m_gpIndirectArgsBuffer; 
  R_RT_Handle v81; 
  R_RT_Handle m_gpPrevSubMeshClusterOffsetsBuffer; 
  R_RT_Handle m_gpPrevCulledTriClusterBuffer; 
  __m256i m_gpSubMeshCountBuffer; 
  __m256i m_gpClusterPPSumIndirectArgsBuffer; 
  R_RT_Handle m_gpPrevCulledSubMeshBuffer; 
  __m256i m_gpBatchSubMeshOffsetsBuffer; 
  GfxCmdBufContext v88; 
  GfxCmdBufContext v89; 
  GfxCmdBufContext v90; 
  GfxCmdBufContext v91; 
  GfxCmdBufContext v92; 
  GfxCmdBufContext v93; 
  __int64 v94; 
  R_RT_ColorHandle v95; 
  R_RT_BufferHandle v96; 
  __m256i v97; 
  GfxCmdBufContext v98; 
  __m256i v99; 
  R_RT_Handle v100; 
  R_RT_Handle v101; 
  R_RT_Handle v102; 
  R_RT_BufferHandle v103; 
  R_RT_BufferHandle v104; 
  R_RT_BufferHandle v105; 
  R_RT_BufferHandle v106; 
  R_RT_BufferHandle v107; 
  R_RT_BufferHandle v108; 
  R_RT_BufferHandle v109; 
  R_RT_BufferHandle v110; 
  R_RT_BufferHandle v111; 
  R_RT_BufferHandle v112; 
  R_RT_BufferHandle v113; 
  R_RT_BufferHandle v114; 
  __m256i v115; 
  R_RT_Handle v116; 
  __m256i v117; 
  R_RT_Handle v118; 
  __m256i v119; 
  R_RT_Handle v120; 
  R_RT_Handle v121; 
  R_RT_BufferHandle v122; 
  R_RT_Handle v123; 
  R_RT_ColorHandle v124; 
  R_RT_ColorHandle v125; 
  R_RT_Handle v126; 
  R_RT_Handle v127; 
  R_RT_Handle v128; 
  R_RT_Handle v129; 
  R_RT_Handle v130; 
  R_RT_Handle v131; 
  R_RT_Handle v132; 
  R_RT_BufferHandle v133; 
  R_RT_BufferHandle v134; 
  __m256i v135; 
  R_RT_Handle v136; 
  R_RT_BufferHandle v137; 
  R_RT_BufferHandle v138; 
  R_RT_BufferHandle v139; 
  R_RT_Handle v140; 
  __m256i v141; 
  R_RT_Handle v142; 
  R_RT_Handle v143; 
  R_RT_Handle v144; 
  R_RT_Handle v145; 
  R_RT_Handle v146; 
  R_RT_Handle v147; 
  R_RT_Handle v148; 
  R_RT_Handle v149; 
  R_RT_Handle v150; 
  R_RT_Handle v151; 
  R_RT_Handle v152; 
  R_RT_Handle v153; 
  R_RT_Handle v154; 
  R_RT_Handle v155; 
  R_RT_Handle v156; 
  R_RT_Handle v157; 
  R_RT_Handle v158; 
  R_RT_Handle v159; 
  R_RT_Handle v160; 
  R_RT_Handle v161; 
  R_RT_Handle v162; 
  R_RT_BufferHandle v163; 
  R_RT_Handle v164; 
  __m256i v165; 
  R_RT_ColorHandle v166; 
  R_RT_Handle v167; 
  R_RT_BufferHandle v168; 
  R_RT_BufferHandle v169; 
  R_RT_Handle v170; 
  R_RT_Handle v171; 
  R_RT_BufferHandle v172; 
  R_RT_BufferHandle v173; 
  R_RT_BufferHandle v174; 
  R_RT_BufferHandle v175; 
  R_RT_Handle v176; 
  __m256i v177; 
  R_RT_Handle v178; 
  R_RT_Handle v179; 
  __m256i v180; 
  R_RT_BufferHandle v181; 
  R_RT_Handle v182; 
  __m256i v183; 
  R_RT_Handle v184; 
  R_RT_Handle v185; 
  R_RT_Handle v186; 
  R_RT_Handle v187; 
  R_RT_Handle v188; 
  R_RT_Handle v189; 
  R_RT_Handle v190; 
  __m256i v191; 
  __m256i v192; 
  __m256i v193; 
  R_RT_Handle v194; 
  __m256i v195; 
  __m256i v196; 
  R_RT_BufferHandle v197; 
  R_RT_BufferHandle v198; 
  R_RT_BufferHandle v199; 
  R_RT_Handle v200; 
  R_RT_BufferHandle v201; 
  R_RT_BufferHandle v202; 
  int dataa[8]; 
  int v204[8]; 
  R_RT_BufferHandle v205; 
  R_RT_BufferHandle v206; 
  R_RT_BufferHandle v207; 
  R_RT_BufferHandle v208; 
  __int16 v209; 
  int v210; 
  GfxCmdBufContext v211; 
  R_RT_BufferHandle result; 
  R_RT_BufferHandle v213; 
  R_RT_BufferHandle v214; 
  R_RT_BufferHandle v215; 
  __m256i m_floatZFullRt; 
  R_RT_BufferHandle v217; 
  R_RT_BufferHandle v218; 
  R_RT_BufferHandle v219; 
  ComputeCmdBufState state; 

  v94 = -2i64;
  passIndex = (unsigned int)gpConfig->passIndex;
  Sys_ProfBeginNamedEvent(0xFF800000, "RB_GP_ProcessSurfs");
  v11 = BYTE1(*((_DWORD *)&viewInfo->viewportFeatures + 11)) & 1;
  if ( v11 )
  {
    if ( !R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 18, ASSERT_TYPE_ASSERT, "(R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "R_IsLockedGfxImmediateContext()") )
      __debugbreak();
    R_UnlockGfxImmediateContext();
  }
  if ( R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 23, ASSERT_TYPE_ASSERT, "(!R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "!R_IsLockedGfxImmediateContext()") )
    __debugbreak();
  Sys_WaitWorkerCmdsOnlyOfType(s_passIndexToWrkCmdMap[passIndex]);
  if ( R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 23, ASSERT_TYPE_ASSERT, "(!R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "!R_IsLockedGfxImmediateContext()") )
    __debugbreak();
  if ( v11 )
    R_LockGfxImmediateContext();
  device = gfxContext->state->device;
  R_LockIfGfxImmediateContext(device);
  v13 = &s_gpBackendFrameData[data->smpFrame];
  v51 = 8576 * passIndex;
  if ( !v13->gpBackendPass[passIndex].dynSurfCount && v13->gpBackendPass[passIndex].visibleSModelCollectionCount <= 0 || !v13->gpBackendPass[passIndex].batchCount )
  {
    v14 = device;
    goto LABEL_161;
  }
  v15 = gfxContext->state;
  R_InitGfxComputeCmdBufState(&state, v15);
  R_GfxComputeWaitForGraphics(v15);
  R_ProfBeginNamedEvent(&state, "Begin GPU pipeline backend");
  R_GPU_BeginTimer(GPU_TIMER_GP_TRIANGLE_PASS);
  m_gpIndexBuffer = (R_RT_Handle)viewInfo->sceneRtInput.m_gpIndexBuffer;
  m_gpIndirectArgsBuffer = (__m256i)viewInfo->sceneRtInput.m_gpIndirectArgsBuffer;
  m_gpPerSurfDataBuffer = (R_RT_Handle)viewInfo->sceneRtInput.m_gpPerSurfDataBuffer;
  m_gpBatchSubMeshOffsetsBuffer = (__m256i)viewInfo->sceneRtInput.m_gpBatchSubMeshOffsetsBuffer;
  m_gpSubMeshWorkgroupArgsBuffer = (R_RT_Handle)viewInfo->sceneRtInput.m_gpSubMeshWorkgroupArgsBuffer;
  m_gpSubMeshCountBuffer = (__m256i)viewInfo->sceneRtInput.m_gpSubMeshCountBuffer;
  m_gpClusterPassIndirectArgsBuffer = (R_RT_Handle)viewInfo->sceneRtInput.m_gpClusterPassIndirectArgsBuffer;
  m_gpClusterPPSumIndirectArgsBuffer = (__m256i)viewInfo->sceneRtInput.m_gpClusterPPSumIndirectArgsBuffer;
  m_gpPrevCulledSubMeshBuffer = (R_RT_Handle)viewInfo->sceneRtInput.m_gpPrevCulledSubMeshBuffer;
  m_gpPrevSubMeshClusterOffsetsBuffer = (R_RT_Handle)viewInfo->sceneRtInput.m_gpPrevSubMeshClusterOffsetsBuffer;
  m_gpPrevCulledTriClusterBuffer = (R_RT_Handle)viewInfo->sceneRtInput.m_gpPrevCulledTriClusterBuffer;
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 3406, ASSERT_TYPE_ASSERT, "(!indexBuffer.IsNull())", (const char *)&queryFormat, "!indexBuffer.IsNull()") )
    __debugbreak();
  if ( !m_gpIndirectArgsBuffer.m256i_i16[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 3407, ASSERT_TYPE_ASSERT, "(!indirectArgsBuffer.IsNull())", (const char *)&queryFormat, "!indirectArgsBuffer.IsNull()") )
    __debugbreak();
  if ( !m_gpPerSurfDataBuffer.m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 3408, ASSERT_TYPE_ASSERT, "(!perSurfDataBuffer.IsNull())", (const char *)&queryFormat, "!perSurfDataBuffer.IsNull()") )
    __debugbreak();
  if ( !m_gpBatchSubMeshOffsetsBuffer.m256i_i16[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 3409, ASSERT_TYPE_ASSERT, "(!batchSubMeshOffsetsBuffer.IsNull())", (const char *)&queryFormat, "!batchSubMeshOffsetsBuffer.IsNull()") )
    __debugbreak();
  if ( !m_gpSubMeshWorkgroupArgsBuffer.m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 3410, ASSERT_TYPE_ASSERT, "(!subMeshWorkgroupArgsBuffer.IsNull())", (const char *)&queryFormat, "!subMeshWorkgroupArgsBuffer.IsNull()") )
    __debugbreak();
  if ( !m_gpSubMeshCountBuffer.m256i_i16[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 3411, ASSERT_TYPE_ASSERT, "(!subMeshCountBuffer.IsNull())", (const char *)&queryFormat, "!subMeshCountBuffer.IsNull()") )
    __debugbreak();
  if ( !m_gpClusterPassIndirectArgsBuffer.m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 3412, ASSERT_TYPE_ASSERT, "(!clusterPassIndirectArgsBuffer.IsNull())", (const char *)&queryFormat, "!clusterPassIndirectArgsBuffer.IsNull()") )
    __debugbreak();
  if ( !m_gpClusterPPSumIndirectArgsBuffer.m256i_i16[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 3413, ASSERT_TYPE_ASSERT, "(!clusterPPSumIndirectArgsBuffer.IsNull())", (const char *)&queryFormat, "!clusterPPSumIndirectArgsBuffer.IsNull()") )
    __debugbreak();
  if ( gpConfig->occlusionPass )
  {
    m_floatZFullRt = (__m256i)viewInfo->sceneRtInput.m_floatZFullRt;
    p_m_floatZFullRt = (R_RT_ColorHandle *)&m_floatZFullRt;
  }
  else
  {
    v209 = 0;
    v210 = 0;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    v211 = _XMM0;
    p_m_floatZFullRt = (R_RT_ColorHandle *)&v209;
  }
  R_RT_CreateBufferInternal(&result, 4u, 1u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_BufferRaw|R_RT_Flag_RWView, R_RT_FlagInternal_None, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "SModel Surf Emit Count Buffer", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp(3417)");
  R_RT_CreateBufferInternal(&v213, 4u, 1u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_BufferRaw|R_RT_Flag_RWView, R_RT_FlagInternal_None, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "SModel Surf Count Buffer", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp(3418)");
  if ( !gpConfig->skipPerSurfData )
  {
    R_GPU_BeginTimer(GPU_TIMER_GENERATE_CLUTTER);
    if ( rgp.world->smodels.clutterCollectionCount && gpConfig->passIndex == GFX_GP_PASS_CAMERA && r_st_clutterEnable->current.enabled )
    {
      R_HW_AddResourceTransition(&state, &rgp.world->smodels.clutterCollectionGPUDataBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_HW_AddResourceTransition(&state, &rgp.world->smodels.smodelInstanceDataBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      rwView = rgp.world->smodels.clutterTintDataBuffer.rwView.rwView;
      if ( rwView != 3 && rwView && rgp.world->smodels.clutterTintDataBuffer.data && rgp.world->smodels.clutterTintDataBuffer.view.view >= 2 )
        R_HW_AddResourceTransition(&state, &rgp.world->smodels.clutterTintDataBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_FlushResourceTransitions(&state);
      R_GP_GenerateClutter(&state, data, 0, 0);
      world = rgp.world;
      v19 = rgp.world->smodels.clutterTintDataBuffer.rwView.rwView;
      if ( v19 != 3 && v19 && rgp.world->smodels.clutterTintDataBuffer.data && rgp.world->smodels.clutterTintDataBuffer.view.view >= 2 )
      {
        R_HW_AddResourceTransition(&state, &rgp.world->smodels.clutterTintDataBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
        world = rgp.world;
      }
      R_HW_AddResourceTransition(&state, &world->smodels.smodelInstanceDataBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_HW_AddResourceTransition(&state, &rgp.world->smodels.clutterCollectionGPUDataBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_FlushResourceTransitions(&state);
      RB_ST_ClutterUpdateStats(&state, data);
    }
    R_GPU_EndTimer();
    v113 = v213;
    v114 = result;
    v115 = m_gpClusterPPSumIndirectArgsBuffer;
    v116 = m_gpClusterPassIndirectArgsBuffer;
    v117 = m_gpSubMeshCountBuffer;
    v118 = m_gpSubMeshWorkgroupArgsBuffer;
    v119 = m_gpBatchSubMeshOffsetsBuffer;
    v120 = m_gpPerSurfDataBuffer;
    _XMM0 = *gfxContext;
    v92 = *gfxContext;
    RB_GP_GenerateSurfs(&v92, &state, data, passIndex, (R_RT_BufferHandle *)&v120, (R_RT_BufferHandle *)&v119, (R_RT_BufferHandle *)&v118, (R_RT_BufferHandle *)&v117, (R_RT_BufferHandle *)&v116, (R_RT_BufferHandle *)&v115, &v114, &v113);
  }
  if ( gpConfig->reusePrepassVisData )
  {
    v81 = R_RT_CreateBufferInternal(&v217, 8u, 0x10000u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_BufferStructured|R_RT_Flag_RWView, R_RT_FlagInternal_None, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, "Culled SubMesh Buffer", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp(3444)")->R_RT_Handle;
    v52 = R_RT_CreateBufferInternal(&v218, 4u, 0x10001u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_BufferRaw|R_RT_Flag_RWView, R_RT_FlagInternal_None, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, "SubMesh Cluster Offsets Buffer", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp(3445)")->R_RT_Handle;
    v20 = R_RT_CreateBufferInternal(&v219, 8u, 0x40000u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_BufferStructured|R_RT_Flag_RWView, R_RT_FlagInternal_None, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, "Culled Tri Cluster Buffer", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp(3446)")->R_RT_Handle;
  }
  else
  {
    v81 = m_gpPrevCulledSubMeshBuffer;
    v52 = m_gpPrevSubMeshClusterOffsetsBuffer;
    v20 = m_gpPrevCulledTriClusterBuffer;
  }
  v78 = v20;
  R_RT_CreateBufferInternal(&v207, 4u, 0x10000u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_BufferRaw|R_RT_Flag_RWView, R_RT_FlagInternal_None, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, "SubMesh Cluster Counts Buffer", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp(3455)");
  v95.m_surfaceID = 0;
  v95.m_tracking.m_allocCounter = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v95.m_tracking.m_name = _XMM0;
  v121 = m_gpPrevCulledTriClusterBuffer;
  v122 = v207;
  v123 = v81;
  v124 = v95;
  v125 = *p_m_floatZFullRt;
  v126 = m_gpPrevSubMeshClusterOffsetsBuffer;
  v127 = m_gpPrevCulledSubMeshBuffer;
  v128 = m_gpPerSurfDataBuffer;
  v129 = m_gpSubMeshWorkgroupArgsBuffer;
  v130 = m_gpClusterPassIndirectArgsBuffer;
  R_GP_CullClusters(&state, data, viewInfo, passIndex, gpConfig->reusePrepassVisData, 0, (R_RT_BufferHandle *)&v130, (R_RT_BufferHandle *)&v129, (R_RT_BufferHandle *)&v128, (R_RT_BufferHandle *)&v127, (R_RT_BufferHandle *)&v126, &v125, &v124, (R_RT_BufferHandle *)&v123, &v122, (R_RT_BufferHandle *)&v121);
  R_RT_CreateBufferInternal(&v214, 4u, 0x100u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_BufferRaw|R_RT_Flag_RWView, R_RT_FlagInternal_None, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, "SubMesh Cluster Reduce Buffer", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp(3471)");
  v131 = (R_RT_Handle)v207;
  R_HW_AddResourceTransition(&state, &v131, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(&state);
  v132 = v52;
  v133 = v214;
  v134 = v207;
  v135 = m_gpClusterPPSumIndirectArgsBuffer;
  R_GP_PrefixSum256(&state, data, passIndex, 0, (R_RT_BufferHandle *)&v135, &v134, &v133, (R_RT_BufferHandle *)&v132);
  R_RT_CreateBufferInternal(&v205, 0xCu, 1u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_BufferIndirectArgs|R_RT_Flag_BufferRaw|R_RT_Flag_RWView, R_RT_FlagInternal_None, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, "Triangle Pass Indirect Args Buffer", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp(3485)");
  R_RT_CreateBufferInternal(&v208, 0xCu, 1u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_BufferIndirectArgs|R_RT_Flag_BufferRaw|R_RT_Flag_RWView, R_RT_FlagInternal_None, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, "Triangle Prefix Sum Indirect Args Buffer", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp(3486)");
  v136 = v52;
  R_HW_AddResourceTransition(&state, &v136, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(&state);
  v96.m_surfaceID = 0;
  v96.m_tracking.m_allocCounter = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v96.m_tracking.m_name = _XMM0;
  v137 = v208;
  v138 = v205;
  v139 = v96;
  v140 = v52;
  v141 = m_gpSubMeshCountBuffer;
  R_GP_InitIndirectArgsFromPrefixSum(&state, data, passIndex, 0, 0x200u, 0x10000u, 0x40000u, (R_RT_BufferHandle *)&v141, (R_RT_BufferHandle *)&v140, &v139, &v138, &v137);
  R_RT_CreateBufferInternal(&v202, 4u, 0x40000u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_BufferRaw|R_RT_Flag_RWView, R_RT_FlagInternal_None, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, "Cluster Workgroup Args Buffer", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp(3503)");
  R_RT_CreateBufferInternal(&v206, 4u, 0x40000u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_BufferRaw|R_RT_Flag_RWView, R_RT_FlagInternal_None, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, "Workgroup Triangle Counts Buffer", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp(3504)");
  v142 = v81;
  R_HW_AddResourceTransition(&state, &v142, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(&state);
  v23 = (_DWORD *)((char *)&s_gpBackendFrameData[data->smpFrame] + v51);
  if ( gpConfig->reusePrepassVisData )
  {
    v152 = (R_RT_Handle)v206;
    v151 = v78;
    v150 = (R_RT_Handle)v202;
    v149 = m_gpPrevCulledTriClusterBuffer;
    v148 = m_gpPrevSubMeshClusterOffsetsBuffer;
    v147 = m_gpPrevCulledSubMeshBuffer;
    v146 = v52;
    v145 = v81;
    v144 = m_gpPerSurfDataBuffer;
    v143 = m_gpSubMeshWorkgroupArgsBuffer;
    v153 = m_gpClusterPassIndirectArgsBuffer;
    if ( !v23[33] && (int)v23[16] <= 0 || !*v23 )
      goto LABEL_122;
    dataa[0] = rg.gpuCullTriSModels;
    dataa[1] = rg.gpuCullTriRigidModels;
    dataa[2] = rg.gpuCullTriSkinnedModels;
    dataa[4] = rg.gpuCullTriMinThreshold;
    dataa[5] = rg.gpuCullClusterMinThreshold;
    R_UploadAndSetComputeConstants(&state, 7, dataa, 0x20u, NULL);
    Surface = (GfxShaderBufferView *)R_RT_Handle::GetSurface(&v143);
    if ( (Surface->view & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
      __debugbreak();
    views = Surface + 68;
    R_SetComputeViews(&state, 19, 1, (const GfxShaderBufferView *const *)&views);
    v25 = (GfxShaderBufferView *)R_RT_Handle::GetSurface(&v144);
    if ( (v25->view & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
      __debugbreak();
    v54 = v25 + 68;
    R_SetComputeViews(&state, 2, 1, (const GfxShaderBufferView *const *)&v54);
    v26 = (GfxShaderBufferView *)R_RT_Handle::GetSurface(&v145);
    if ( (v26->view & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
      __debugbreak();
    v55 = v26 + 68;
    R_SetComputeViews(&state, 20, 1, (const GfxShaderBufferView *const *)&v55);
    v27 = (GfxShaderBufferView *)R_RT_Handle::GetSurface(&v146);
    if ( (v27->view & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
      __debugbreak();
    v56 = v27 + 68;
    R_SetComputeViews(&state, 21, 1, (const GfxShaderBufferView *const *)&v56);
    v28 = (GfxShaderBufferView *)R_RT_Handle::GetSurface(&v147);
    if ( (v28->view & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
      __debugbreak();
    v57 = v28 + 68;
    R_SetComputeViews(&state, 22, 1, (const GfxShaderBufferView *const *)&v57);
    v29 = (GfxShaderBufferView *)R_RT_Handle::GetSurface(&v148);
    if ( (v29->view & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
      __debugbreak();
    v58 = v29 + 68;
    R_SetComputeViews(&state, 23, 1, (const GfxShaderBufferView *const *)&v58);
    v30 = (GfxShaderBufferView *)R_RT_Handle::GetSurface(&v149);
    if ( (v30->view & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
      __debugbreak();
    v59 = v30 + 68;
    R_SetComputeViews(&state, 24, 1, (const GfxShaderBufferView *const *)&v59);
    v31 = R_RT_Handle::GetSurface(&v150);
    if ( (v31->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
      __debugbreak();
    p_rwView = &v31->m_buffer.m_wrappedBuffer.rwView;
    R_SetComputeRWViewsWithCounters(&state, 5, 1, (const GfxShaderBufferRWView *const *)&p_rwView, NULL);
    v32 = R_RT_Handle::GetSurface(&v151);
    if ( (v32->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
      __debugbreak();
    v61 = &v32->m_buffer.m_wrappedBuffer.rwView;
    R_SetComputeRWViewsWithCounters(&state, 6, 1, (const GfxShaderBufferRWView *const *)&v61, NULL);
    v33 = R_RT_Handle::GetSurface(&v152);
    if ( (v33->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
      __debugbreak();
    v62 = &v33->m_buffer.m_wrappedBuffer.rwView;
    R_SetComputeRWViewsWithCounters(&state, 7, 1, (const GfxShaderBufferRWView *const *)&v62, NULL);
    R_SetComputeShader(&state, rgp.gpClusterWorkgroupAndVisbitsGenPass);
    v34 = &v153;
  }
  else
  {
    v158 = (R_RT_Handle)v202;
    v157 = v52;
    v156 = v81;
    v155 = m_gpPerSurfDataBuffer;
    v154 = m_gpSubMeshWorkgroupArgsBuffer;
    v159 = m_gpClusterPassIndirectArgsBuffer;
    if ( !v23[33] && (int)v23[16] <= 0 || !*v23 )
      goto LABEL_122;
    v204[0] = rg.gpuCullTriSModels;
    v204[1] = rg.gpuCullTriRigidModels;
    v204[2] = rg.gpuCullTriSkinnedModels;
    v204[4] = rg.gpuCullTriMinThreshold;
    v204[5] = rg.gpuCullClusterMinThreshold;
    R_UploadAndSetComputeConstants(&state, 7, v204, 0x20u, NULL);
    v35 = (GfxShaderBufferView *)R_RT_Handle::GetSurface(&v154);
    if ( (v35->view & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
      __debugbreak();
    v63 = v35 + 68;
    R_SetComputeViews(&state, 19, 1, (const GfxShaderBufferView *const *)&v63);
    v36 = (GfxShaderBufferView *)R_RT_Handle::GetSurface(&v155);
    if ( (v36->view & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
      __debugbreak();
    v64 = v36 + 68;
    R_SetComputeViews(&state, 2, 1, (const GfxShaderBufferView *const *)&v64);
    v37 = (GfxShaderBufferView *)R_RT_Handle::GetSurface(&v156);
    if ( (v37->view & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
      __debugbreak();
    v65 = v37 + 68;
    R_SetComputeViews(&state, 20, 1, (const GfxShaderBufferView *const *)&v65);
    v38 = (GfxShaderBufferView *)R_RT_Handle::GetSurface(&v157);
    if ( (v38->view & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
      __debugbreak();
    v66 = v38 + 68;
    R_SetComputeViews(&state, 21, 1, (const GfxShaderBufferView *const *)&v66);
    v39 = R_RT_Handle::GetSurface(&v158);
    if ( (v39->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
      __debugbreak();
    v67 = &v39->m_buffer.m_wrappedBuffer.rwView;
    R_SetComputeRWViewsWithCounters(&state, 5, 1, (const GfxShaderBufferRWView *const *)&v67, NULL);
    R_SetComputeShader(&state, rgp.gpClusterWorkgroupGenPass);
    v34 = &v159;
  }
  v40 = R_RT_Handle::GetSurface(v34);
  if ( (v40->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  R_DispatchIndirect(&state, v40->m_buffer.m_wrappedBuffer.buffer, 0);
  v15 = gfxContext->state;
LABEL_122:
  v160 = (R_RT_Handle)v205;
  R_HW_AddResourceTransition(&state, &v160, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v161 = (R_RT_Handle)v202;
  R_HW_AddResourceTransition(&state, &v161, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v162 = v78;
  R_HW_AddResourceTransition(&state, &v162, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(&state);
  v97.m256i_i16[0] = 0;
  v97.m256i_i32[2] = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v97.m256i_u64[2] = _XMM0;
  v163 = v206;
  v164 = v78;
  v165 = v97;
  v166 = *p_m_floatZFullRt;
  v167 = m_gpPerSurfDataBuffer;
  v168 = v202;
  v169 = v205;
  R_GP_CullTriangles(&state, data, viewInfo, passIndex, gpConfig->reusePrepassVisData, &v169, &v168, (R_RT_BufferHandle *)&v167, &v166, (R_RT_ColorHandle *)&v165, (R_RT_BufferHandle *)&v164, &v163);
  R_RT_CreateBufferInternal(&v215, 4u, 0x200u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_BufferRaw|R_RT_Flag_RWView, R_RT_FlagInternal_None, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, "SubMesh Cluster Reduce Buffer", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp(3550)");
  R_RT_CreateBufferInternal(&v201, 4u, 0x40001u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_BufferRaw|R_RT_Flag_RWView, R_RT_FlagInternal_None, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, "SubMesh Cluster Offsets Buffer", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp(3551)");
  v170 = (R_RT_Handle)v208;
  R_HW_AddResourceTransition(&state, &v170, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v171 = (R_RT_Handle)v206;
  R_HW_AddResourceTransition(&state, &v171, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(&state);
  v172 = v201;
  v173 = v215;
  v174 = v206;
  v175 = v208;
  R_GP_PrefixSum512(&state, data, passIndex, 0, &v175, &v174, &v173, &v172);
  v176 = m_gpIndexBuffer;
  R_HW_AddResourceTransition(&state, &v176, 0xFFFFFFFF, D3D12_RESOURCE_STATE_INDEX_BUFFER, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v177 = m_gpIndirectArgsBuffer;
  R_HW_AddResourceTransition(&state, (R_RT_Handle *)&v177, 0xFFFFFFFF, D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v178 = v78;
  R_HW_AddResourceTransition(&state, &v178, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v179 = (R_RT_Handle)v201;
  R_HW_AddResourceTransition(&state, &v179, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(&state);
  v180 = m_gpIndirectArgsBuffer;
  v181 = v201;
  v182 = v52;
  v183 = m_gpBatchSubMeshOffsetsBuffer;
  R_GP_InitDrawIndirectArgs(&state, data, passIndex, 1, (R_RT_BufferHandle *)&v183, (R_RT_BufferHandle *)&v182, &v181, (R_RT_BufferHandle *)&v180);
  v188 = m_gpIndexBuffer;
  v187 = (R_RT_Handle)v201;
  v186 = v78;
  v185 = m_gpPerSurfDataBuffer;
  v184 = (R_RT_Handle)v202;
  v189 = (R_RT_Handle)v205;
  smpFrame = data->smpFrame;
  v43 = (_DWORD *)((char *)&s_gpBackendFrameData[smpFrame] + v51);
  if ( (v43[33] || (int)v43[16] > 0) && *v43 )
  {
    v44 = (GfxShaderBufferView *)R_RT_Handle::GetSurface(&v184);
    if ( (v44->view & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
      __debugbreak();
    v68 = v44 + 68;
    R_SetComputeViews(&state, 13, 1, (const GfxShaderBufferView *const *)&v68);
    v45 = (GfxShaderBufferView *)R_RT_Handle::GetSurface(&v185);
    if ( (v45->view & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
      __debugbreak();
    v69 = v45 + 68;
    R_SetComputeViews(&state, 2, 1, (const GfxShaderBufferView *const *)&v69);
    p_view = &gfxBuf.unifiedIndexBuffer.view;
    R_SetComputeViews(&state, 9, 1, (const GfxShaderBufferView *const *)&p_view);
    v71 = &gfxBuf.uibVirtPageTableBuffer.view;
    R_SetComputeViews(&state, 10, 1, (const GfxShaderBufferView *const *)&v71);
    v46 = (GfxShaderBufferView *)R_RT_Handle::GetSurface(&v186);
    if ( (v46->view & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
      __debugbreak();
    v72 = v46 + 68;
    R_SetComputeViews(&state, 14, 1, (const GfxShaderBufferView *const *)&v72);
    v47 = (GfxShaderBufferView *)R_RT_Handle::GetSurface(&v187);
    if ( (v47->view & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
      __debugbreak();
    v73 = v47 + 68;
    R_SetComputeViews(&state, 15, 1, (const GfxShaderBufferView *const *)&v73);
    v48 = R_RT_Handle::GetSurface(&v188);
    if ( (v48->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
      __debugbreak();
    v74 = &v48->m_buffer.m_wrappedBuffer.rwView;
    R_SetComputeRWViewsWithCounters(&state, 0, 1, (const GfxShaderBufferRWView *const *)&v74, NULL);
    R_SetComputeShader(&state, rgp.gpIndexedTriangleExpandPass);
    smpFrame = (unsigned __int64)R_RT_Handle::GetSurface(&v189);
    if ( (*(_DWORD *)(smpFrame + 8) & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
      __debugbreak();
    R_DispatchIndirect(&state, *(ID3D12Resource **)(smpFrame + 1080), 0);
    LODWORD(smpFrame) = data->smpFrame;
  }
  v190 = m_gpIndexBuffer;
  R_HW_AddResourceTransition(&state, &v190, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_INDEX_BUFFER, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v191 = m_gpIndirectArgsBuffer;
  R_HW_AddResourceTransition(&state, (R_RT_Handle *)&v191, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_FlushResourceTransitions(&state);
  v49 = (__m256i)v201;
  m_gpIndexBuffer = (R_RT_Handle)v201;
  v50 = &s_gpBackendFrameData[(unsigned int)smpFrame].gpBackendPass[(unsigned __int64)v51 / 0x2180];
  if ( !rg.stats || !r_gpShowStats->current.integer || !v50->dynSurfCount && v50->visibleSModelCollectionCount <= 0 || !v50->batchCount )
    goto LABEL_158;
  if ( gpConfig->occlusionPass )
  {
    if ( (_DWORD)passIndex )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 3022, ASSERT_TYPE_ASSERT, "(passIndex == GFX_GP_PASS_CAMERA)", (const char *)&queryFormat, "passIndex == GFX_GP_PASS_CAMERA") )
        __debugbreak();
      v49 = (__m256i)m_gpIndexBuffer;
    }
    v192 = m_gpIndirectArgsBuffer;
    v193 = v49;
    v194 = v52;
    v195 = m_gpBatchSubMeshOffsetsBuffer;
    R_GP_ReadBackGPStats_PostOcclusion(&state, data, passIndex, (R_RT_BufferHandle *)&v195, (R_RT_BufferHandle *)&v194, (R_RT_BufferHandle *)&v193, (R_RT_BufferHandle *)&v192);
    goto LABEL_156;
  }
  v196 = m_gpIndirectArgsBuffer;
  v197 = v213;
  v198 = result;
  v199 = v201;
  v200 = v52;
  v99 = m_gpBatchSubMeshOffsetsBuffer;
  R_GP_ReadBackGPStats_PreOcclusion(&state, data, passIndex, (R_RT_BufferHandle *)&v99, (R_RT_BufferHandle *)&v200, &v199, &v198, &v197, (R_RT_BufferHandle *)&v196);
  if ( (_DWORD)passIndex == 1 )
LABEL_156:
    GPReadBackRing::GPUCopyToRingBuffer(&s_gpReadBackRing[passIndex], &state);
  R_CollectGPBackendStats(v50);
LABEL_158:
  R_GPU_EndTimer();
  R_ProfEndNamedEvent(&state);
  R_ComputeWaitForCompute(&state, PIPE_FLUSH_PARTIAL);
  if ( gpConfig->reusePrepassVisData )
  {
    v100 = v81;
    v89 = *gfxContext;
    R_RT_Destroy(&v89, (R_RT_BufferHandle *)&v100);
    v101 = v52;
    v90 = *gfxContext;
    R_RT_Destroy(&v90, (R_RT_BufferHandle *)&v101);
    v102 = v78;
    v91 = *gfxContext;
    R_RT_Destroy(&v91, (R_RT_BufferHandle *)&v102);
  }
  v103 = result;
  v93 = *gfxContext;
  R_RT_Destroy(&v93, &v103);
  v104 = v213;
  v98 = *gfxContext;
  R_RT_Destroy(&v98, &v104);
  v105 = v207;
  v88 = *gfxContext;
  R_RT_Destroy(&v88, &v105);
  v106 = v214;
  *(GfxCmdBufContext *)&m_gpPrevCulledSubMeshBuffer.m_surfaceID = *gfxContext;
  R_RT_Destroy((GfxCmdBufContext *)&m_gpPrevCulledSubMeshBuffer, &v106);
  v107 = v205;
  *(GfxCmdBufContext *)&m_gpPrevSubMeshClusterOffsetsBuffer.m_surfaceID = *gfxContext;
  R_RT_Destroy((GfxCmdBufContext *)&m_gpPrevSubMeshClusterOffsetsBuffer, &v107);
  v108 = v208;
  *(GfxCmdBufContext *)&m_gpPrevCulledTriClusterBuffer.m_surfaceID = *gfxContext;
  R_RT_Destroy((GfxCmdBufContext *)&m_gpPrevCulledTriClusterBuffer, &v108);
  v109 = v202;
  *(GfxCmdBufContext *)m_gpSubMeshCountBuffer.m256i_i8 = *gfxContext;
  R_RT_Destroy((GfxCmdBufContext *)&m_gpSubMeshCountBuffer, &v109);
  v110 = v206;
  *(GfxCmdBufContext *)m_gpClusterPPSumIndirectArgsBuffer.m256i_i8 = *gfxContext;
  R_RT_Destroy((GfxCmdBufContext *)&m_gpClusterPPSumIndirectArgsBuffer, &v110);
  v111 = v215;
  *(GfxCmdBufContext *)&m_gpClusterPassIndirectArgsBuffer.m_surfaceID = *gfxContext;
  R_RT_Destroy((GfxCmdBufContext *)&m_gpClusterPassIndirectArgsBuffer, &v111);
  v112 = v201;
  *(GfxCmdBufContext *)&m_gpSubMeshWorkgroupArgsBuffer.m_surfaceID = *gfxContext;
  R_RT_Destroy((GfxCmdBufContext *)&m_gpSubMeshWorkgroupArgsBuffer, &v112);
  R_ShutdownGfxComputeCmdBufState(&state);
  v14 = v15->device;
LABEL_161:
  R_UnlockIfGfxImmediateContext(v14);
  Sys_ProfEndNamedEvent();
}

/*
==============
R_AllocGPUBatchIndexXModel
==============
*/
__int64 R_AllocGPUBatchIndexXModel(unsigned int passIndex, GfxSceneViewType sceneViewType, const GfxSceneEntity *const sceneEnt, const void *const modelSurf, unsigned int surfId, surfaceType_t surfType, Material *const *materialHandle)
{
  __int64 v8; 
  __int64 v9; 
  GPBackendPassData *v10; 
  GPFrontendData *v11; 
  Material *v12; 
  GP_SURF_CULL_TYPE CullType; 
  __int64 result; 
  unsigned int ModelRigidSurfaceChildCount; 
  GP_SURF_TYPE v16; 
  unsigned __int16 v17; 
  GfxGPDynSurf *v18; 
  __int64 v19; 
  __int64 surfCount; 

  v8 = passIndex;
  if ( !modelSurf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.h", 234, ASSERT_TYPE_ASSERT, "(modelSurf)", (const char *)&queryFormat, "modelSurf") )
    __debugbreak();
  if ( (((surfType - 6) & 0xFFFFFFF9) != 0 || surfType == SF_END_XMODEL) && (((surfType - 7) & 0xFFFFFFF9) != 0 || surfType == SF_CODE_QUAD) )
  {
    LODWORD(surfCount) = surfType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.h", 247, ASSERT_TYPE_ASSERT, "( ( surfType == SF_XMODEL_SKINNED || surfType == SF_XMODEL_SKINNED_SUBDIV || surfType == SF_XMODEL_SKINNED_SUBDIV_PATCH ) )", "( surfType ) = %i", surfCount) )
      __debugbreak();
  }
  v9 = *((_QWORD *)modelSurf + 7);
  if ( !s_gpCurBackendFrameData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1212, ASSERT_TYPE_ASSERT, "(s_gpCurBackendFrameData)", (const char *)&queryFormat, "s_gpCurBackendFrameData") )
    __debugbreak();
  v10 = &s_gpCurBackendFrameData->gpBackendPass[v8];
  v11 = &s_gpFrontend[v8];
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1220, ASSERT_TYPE_ASSERT, "(gpFrontend)", (const char *)&queryFormat, "gpFrontend") )
    __debugbreak();
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1221, ASSERT_TYPE_ASSERT, "(gpBackendPass)", (const char *)&queryFormat, "gpBackendPass") )
    __debugbreak();
  if ( v10->passIndex != (_DWORD)v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1222, ASSERT_TYPE_ASSERT, "(gpBackendPass->passIndex == passIndex)", (const char *)&queryFormat, "gpBackendPass->passIndex == passIndex") )
    __debugbreak();
  if ( s_gpCurBackendFrameData->smpFrame != frontEndDataOut->smpFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1223, ASSERT_TYPE_ASSERT, "(s_gpCurBackendFrameData->smpFrame == static_cast< uint >( frontEndDataOut->smpFrame ))", (const char *)&queryFormat, "s_gpCurBackendFrameData->smpFrame == static_cast< uint >( frontEndDataOut->smpFrame )") )
    __debugbreak();
  v12 = *materialHandle;
  if ( !*materialHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 455, ASSERT_TYPE_ASSERT, "(handle)", (const char *)&queryFormat, "handle") )
    __debugbreak();
  if ( !v12->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 456, ASSERT_TYPE_ASSERT, "(handle->name)", (const char *)&queryFormat, "handle->name") )
    __debugbreak();
  if ( !*v12->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_material_inline.h", 457, ASSERT_TYPE_ASSERT, "(handle->name[0])", (const char *)&queryFormat, "handle->name[0]") )
    __debugbreak();
  CullType = Material_GetCullType(v12);
  if ( !(_DWORD)v8 )
  {
    if ( sceneEnt && (*((_DWORD *)sceneEnt + 347) & 0x40000) != 0 )
      CullType &= 0xBDu;
    if ( sceneViewType == SCENE_VIEW_CAMERA_DEPTH_HACK )
      CullType &= ~2u;
  }
  result = 0x4000i64;
  if ( surfType == SF_BEGIN_XMODEL )
  {
    ModelRigidSurfaceChildCount = R_GetModelRigidSurfaceChildCount((const GfxModelRigidSurface *)modelSurf);
    v16 = GP_SURF_RIGID;
  }
  else
  {
    if ( surfType != SF_XMODEL_SKINNED )
      return result;
    ModelRigidSurfaceChildCount = 1;
    v16 = GP_SURF_SKINNED;
  }
  v17 = R_AllocGPUSurfBatches(v11, v10, v16, CullType, sceneViewType, ModelRigidSurfaceChildCount, 1u, NULL);
  result = 0x4000i64;
  if ( v17 != 0x4000 )
  {
    v18 = &v11->typed[(unsigned __int8)v16].surfsBuffer[v11->batches[v17].firstSurf];
    if ( ModelRigidSurfaceChildCount )
    {
      v19 = ModelRigidSurfaceChildCount;
      do
      {
        v18->objID = 4 * surfId;
        ++v18;
        v18[-1].ugbID = *(_WORD *)(v9 + 10);
        --v19;
      }
      while ( v19 );
    }
    return v17;
  }
  return result;
}

/*
==============
R_AllocGPUBatchIndexesSModel
==============
*/
unsigned __int16 R_AllocGPUBatchIndexesSModel(unsigned int passIndex, GfxSceneViewType sceneViewType, unsigned int batchCount, unsigned int *validBatchCount)
{
  GPBackendPassData *v5; 
  GPFrontendData *v9; 

  v5 = &s_gpCurBackendFrameData->gpBackendPass[passIndex];
  v9 = &s_gpFrontend[passIndex];
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1185, ASSERT_TYPE_ASSERT, "(gpFrontend)", (const char *)&queryFormat, "gpFrontend") )
    __debugbreak();
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1186, ASSERT_TYPE_ASSERT, "(gpBackendPass)", (const char *)&queryFormat, "gpBackendPass") )
    __debugbreak();
  if ( v5->passIndex != passIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1187, ASSERT_TYPE_ASSERT, "(gpBackendPass->passIndex == passIndex)", (const char *)&queryFormat, "gpBackendPass->passIndex == passIndex") )
    __debugbreak();
  if ( s_gpCurBackendFrameData->smpFrame != frontEndDataOut->smpFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1188, ASSERT_TYPE_ASSERT, "(s_gpCurBackendFrameData->smpFrame == static_cast< uint >( frontEndDataOut->smpFrame ))", (const char *)&queryFormat, "s_gpCurBackendFrameData->smpFrame == static_cast< uint >( frontEndDataOut->smpFrame )") )
    __debugbreak();
  return R_AllocGPUSurfBatches(v9, v5, GP_DYN_SURF_TYPE_COUNT, GP_SURF_CULL_NONE, sceneViewType, 0, batchCount, validBatchCount);
}

/*
==============
R_AllocGPUSurfBatches
==============
*/
unsigned __int16 R_AllocGPUSurfBatches(GPFrontendData *gpFrontend, GPBackendPassData *gpBackendPass, GP_SURF_TYPE type, GP_SURF_CULL_TYPE cullType, unsigned int sceneViewType, unsigned int surfCount, unsigned int batchCount, unsigned int *outValidBatchCount)
{
  int v8; 
  __int64 v12; 
  __int64 v13; 
  volatile int *p_typedSurfCount; 
  int v15; 
  signed int v16; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int v20; 
  signed int v21; 
  GP_SURF_CULL_TYPE *p_cullType; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 

  v8 = 0;
  v12 = (unsigned __int8)type;
  if ( surfCount )
  {
    v13 = (unsigned __int8)type;
    p_typedSurfCount = &gpFrontend->typed[v13].typedSurfCount;
    if ( ((unsigned __int8)p_typedSurfCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &gpFrontend->typed[v13].typedSurfCount) )
      __debugbreak();
    v8 = _InterlockedExchangeAdd(p_typedSurfCount, surfCount);
    if ( v8 < 0 )
      return 0x4000;
    v15 = g_gpTypedSurfLimits[v12];
    if ( v8 >= v15 )
      return 0x4000;
    v16 = v8 + surfCount - 1;
    if ( v16 < 0 || v16 >= v15 )
      return 0x4000;
  }
  if ( ((unsigned __int8)gpBackendPass & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", gpBackendPass) )
    __debugbreak();
  v17 = batchCount;
  v18 = _InterlockedExchangeAdd(&gpBackendPass->batchCount, batchCount);
  if ( v18 > 0x3FFF )
    return 0x4000;
  v20 = v18 + batchCount;
  if ( v18 + batchCount - 1 > 0x3FFF )
  {
    if ( batchCount <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1144, ASSERT_TYPE_ASSERT, "(batchCount > 1)", (const char *)&queryFormat, "batchCount > 1") )
      __debugbreak();
    if ( v20 - 1 < 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1145, ASSERT_TYPE_ASSERT, "(gpuBatchIndexOffset + batchCount - 1 >= ( 16384 ))", (const char *)&queryFormat, "gpuBatchIndexOffset + batchCount - 1 >= GP_BATCH_LIMIT") )
      __debugbreak();
    v21 = v20 - 0x4000;
    if ( v21 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1149, ASSERT_TYPE_ASSERT, "(overflow > 0)", (const char *)&queryFormat, "overflow > 0") )
      __debugbreak();
    if ( batchCount <= v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1150, ASSERT_TYPE_ASSERT, "(batchCount > static_cast< uint >( overflow ))", (const char *)&queryFormat, "batchCount > static_cast< uint >( overflow )") )
      __debugbreak();
    v17 = batchCount - v21;
    batchCount -= v21;
  }
  if ( v17 )
  {
    p_cullType = &gpFrontend->batches[v18].cullType;
    v23 = v17;
    do
    {
      if ( sceneViewType >= 0x21 )
      {
        LODWORD(v25) = 33;
        LODWORD(v24) = sceneViewType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1159, ASSERT_TYPE_ASSERT, "(unsigned)( sceneViewType ) < (unsigned)( SCENE_VIEW_COUNT )", "sceneViewType doesn't index SCENE_VIEW_COUNT\n\t%i not in [0, %i)", v24, v25) )
          __debugbreak();
      }
      if ( (unsigned int)v8 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v8, "signed", v8) )
        __debugbreak();
      *((_WORD *)p_cullType - 3) = v8;
      *((_BYTE *)p_cullType - 1) = type;
      *p_cullType = cullType;
      if ( surfCount > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)surfCount, "unsigned", surfCount) )
        __debugbreak();
      *((_WORD *)p_cullType - 2) = surfCount;
      if ( sceneViewType > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)sceneViewType, "unsigned", sceneViewType) )
        __debugbreak();
      *((_BYTE *)p_cullType - 2) = sceneViewType;
      p_cullType += 8;
      --v23;
    }
    while ( v23 );
    v17 = batchCount;
  }
  if ( outValidBatchCount )
    *outValidBatchCount = v17;
  return truncate_cast<unsigned short,int>(v18);
}

/*
==============
R_CollectGPBackendStats
==============
*/
void R_CollectGPBackendStats(GPBackendPassData *gpBackendPass)
{
  __int64 passIndex; 
  GPReadBackRing *v3; 
  unsigned __int64 *writeFenceAddr; 
  unsigned __int64 v5; 
  __m256i *v6; 
  unsigned int emittedStaticSurfCount; 
  __int64 preocclusionTriangleCount; 
  __int64 preocclusionClusterCount; 
  __int64 subMeshCount; 
  __int64 preocclusionMaxBatchIndexCount; 
  int v12; 
  int postocclusionMaxBatchIndexCount; 
  int filteredStaticSurfCount; 

  passIndex = gpBackendPass->passIndex;
  v3 = &s_gpReadBackRing[passIndex];
  writeFenceAddr = (unsigned __int64 *)v3->writeFenceAddr;
  v5 = *writeFenceAddr;
  if ( v3->lastReadPos <= *writeFenceAddr )
  {
    v6 = (__m256i *)v3->readBackInfoGPU[truncate_cast<unsigned int,unsigned __int64>(*writeFenceAddr & 3)];
    *(__m256i *)&v3->readbackInfoCPU.preocclusionTriangleCount = *v6;
    *(__m256i *)&v3->readbackInfoCPU.emittedStaticSurfCount = v6[1];
    v3->lastReadPos = v5;
  }
  if ( gpBackendPass->visibleSModelCollectionCount )
  {
    emittedStaticSurfCount = v3->readbackInfoCPU.emittedStaticSurfCount;
    if ( emittedStaticSurfCount > 0xD000 )
      R_WarnOncePerFrame(R_WARN_GPU_PIPELINE_SURF_LIMIT, s_gpTypedSurfNames[2], emittedStaticSurfCount, 53248i64, g_gpPassNames[passIndex]);
    if ( emittedStaticSurfCount > 0x10000 )
      R_WarnOncePerFrame(R_WARN_GPU_PIPELINE_TOTAL_SURF_LIMIT, emittedStaticSurfCount + gpBackendPass->dynSurfCount, 0x10000i64, g_gpPassNames[passIndex]);
  }
  preocclusionTriangleCount = v3->readbackInfoCPU.preocclusionTriangleCount;
  if ( (unsigned int)preocclusionTriangleCount > 0x280000 )
    R_WarnOncePerFrame(R_WARN_GPU_PIPELINE_INDEX_LIMIT, preocclusionTriangleCount, 2621440i64, g_gpPassNames[passIndex]);
  preocclusionClusterCount = v3->readbackInfoCPU.preocclusionClusterCount;
  if ( (unsigned int)preocclusionClusterCount > 0x40000 )
    R_WarnOncePerFrame(R_WARN_GPU_PIPELINE_CLUSTER_LIMIT, preocclusionClusterCount, 0x40000i64, g_gpPassNames[passIndex]);
  subMeshCount = v3->readbackInfoCPU.subMeshCount;
  if ( (unsigned int)subMeshCount > 0x10000 )
    R_WarnOncePerFrame(R_WARN_GPU_PIPELINE_SUBMESH_LIMIT, subMeshCount, 0x10000i64, g_gpPassNames[passIndex]);
  preocclusionMaxBatchIndexCount = v3->readbackInfoCPU.preocclusionMaxBatchIndexCount;
  if ( (unsigned int)preocclusionMaxBatchIndexCount >= 0x2FF400 )
    R_WarnOncePerFrame(R_WARN_GPU_PIPELINE_INDIRECT_ARG_INDEX_LIMIT, preocclusionMaxBatchIndexCount, 3142656i64, g_gpPassNames[passIndex]);
  if ( rg.stats && r_gpShowStats->current.integer )
  {
    rg.stats->numPreOcclusionGPTris[passIndex] = v3->readbackInfoCPU.preocclusionTriangleCount;
    rg.stats->numPostOcclusionGPTris[passIndex] = v3->readbackInfoCPU.postocclusionTriangleCount;
    rg.stats->numPreOcclusionGPClusters[passIndex] = v3->readbackInfoCPU.preocclusionClusterCount;
    rg.stats->numPostOcclusionGPClusters[passIndex] = v3->readbackInfoCPU.postocclusionClusterCount;
    rg.stats->numSubMeshes[passIndex] = v3->readbackInfoCPU.subMeshCount;
    rg.stats->maxBatchPreOccIndices[passIndex] = v3->readbackInfoCPU.preocclusionMaxBatchIndexCount;
    v12 = v3->readbackInfoCPU.preocclusionMaxBatchIndexCount;
    if ( rg.stats->maxBatchPreOccIndicesWatermark[passIndex] > v12 )
      v12 = rg.stats->maxBatchPreOccIndicesWatermark[passIndex];
    rg.stats->maxBatchPreOccIndicesWatermark[passIndex] = v12;
    rg.stats->numPreOccDrawnBatches[passIndex] = v3->readbackInfoCPU.preocclusionDrawnBatchCount;
    rg.stats->maxBatchPostOccIndices[passIndex] = v3->readbackInfoCPU.postocclusionMaxBatchIndexCount;
    postocclusionMaxBatchIndexCount = v3->readbackInfoCPU.postocclusionMaxBatchIndexCount;
    if ( rg.stats->numBatchPostOccIndicesWatermark[passIndex] > postocclusionMaxBatchIndexCount )
      postocclusionMaxBatchIndexCount = rg.stats->numBatchPostOccIndicesWatermark[passIndex];
    rg.stats->numBatchPostOccIndicesWatermark[passIndex] = postocclusionMaxBatchIndexCount;
    rg.stats->numPostOccDrawnBatches[passIndex] = v3->readbackInfoCPU.postocclusionDrawnBatchCount;
    if ( gpBackendPass->visibleSModelCollectionCount )
      filteredStaticSurfCount = v3->readbackInfoCPU.filteredStaticSurfCount;
    else
      filteredStaticSurfCount = 0;
    rg.stats->numGPStaticSurfs[passIndex] = filteredStaticSurfCount;
  }
}

/*
==============
R_GPU_GenerateClutter
==============
*/
void R_GPU_GenerateClutter(ComputeCmdBufState *state, const GfxBackEndData *data, unsigned int passIndex, const bool reactiveMotionPass)
{
  unsigned int rwView; 
  GfxWorld *world; 
  unsigned int v9; 

  if ( rgp.world->smodels.clutterCollectionCount && !passIndex && r_st_clutterEnable->current.enabled )
  {
    R_HW_AddResourceTransition(state, &rgp.world->smodels.clutterCollectionGPUDataBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_HW_AddResourceTransition(state, &rgp.world->smodels.smodelInstanceDataBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    rwView = rgp.world->smodels.clutterTintDataBuffer.rwView.rwView;
    if ( rwView != 3 && rwView && rgp.world->smodels.clutterTintDataBuffer.data && rgp.world->smodels.clutterTintDataBuffer.view.view >= 2 )
      R_HW_AddResourceTransition(state, &rgp.world->smodels.clutterTintDataBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(state);
    R_GP_GenerateClutter(state, data, 0, reactiveMotionPass);
    world = rgp.world;
    v9 = rgp.world->smodels.clutterTintDataBuffer.rwView.rwView;
    if ( v9 != 3 && v9 && rgp.world->smodels.clutterTintDataBuffer.data && rgp.world->smodels.clutterTintDataBuffer.view.view >= 2 )
    {
      R_HW_AddResourceTransition(state, &rgp.world->smodels.clutterTintDataBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      world = rgp.world;
    }
    R_HW_AddResourceTransition(state, &world->smodels.smodelInstanceDataBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_HW_AddResourceTransition(state, &rgp.world->smodels.clutterCollectionGPUDataBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(state);
    if ( !reactiveMotionPass )
      RB_ST_ClutterUpdateStats(state, data);
  }
}

/*
==============
R_GPU_InitClutterFrame
==============
*/
void R_GPU_InitClutterFrame(ComputeCmdBufState *state, const GfxBackEndData *data, unsigned int passIndex)
{
  const GfxWrappedRWBuffer *ModelDynamicIndirectionBuffer; 

  if ( rgp.world->smodels.clutterCollectionCount && !passIndex && r_st_clutterEnable->current.enabled )
  {
    R_HW_AddResourceTransition(state, &rgp.world->smodels.clutterCollectionGPUDataBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(state);
    R_GP_ClearBufferToZero(state, &rgp.world->smodels.clutterCollectionGPUDataBuffer, 8 * rgp.world->smodels.clutterCollectionCount, 1);
    if ( R_ReactiveMotion_UsesClutterPass(data->reactiveMotionIndex) )
    {
      R_HW_AddResourceTransition(state, &rgp.world->smodels.clutterCollectionGPUDataBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      ModelDynamicIndirectionBuffer = R_ModelData_GetModelDynamicIndirectionBuffer(data->smpFrame);
      R_HW_AddResourceTransition(state, ModelDynamicIndirectionBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_FlushResourceTransitions(state);
      R_ReactiveMotion_InitClutterFrame(state, 0);
      R_HW_AddResourceTransition(state, ModelDynamicIndirectionBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    }
    R_HW_AddResourceTransition(state, &rgp.world->smodels.clutterCollectionGPUDataBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(state);
  }
}

/*
==============
R_GPU_ResetClutterFrame
==============
*/
void R_GPU_ResetClutterFrame(ComputeCmdBufState *state, const GfxBackEndData *data)
{
  const GfxWrappedRWBuffer *ModelDynamicIndirectionBuffer; 

  if ( rgp.world->smodels.clutterCollectionCount && r_st_clutterEnable->current.enabled && R_ReactiveMotion_UsesClutterPass(data->reactiveMotionIndex) )
  {
    ModelDynamicIndirectionBuffer = R_ModelData_GetModelDynamicIndirectionBuffer(data->smpFrame);
    R_HW_AddResourceTransition(state, ModelDynamicIndirectionBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(state);
    R_ReactiveMotion_InitClutterFrame(state, 1);
    R_HW_AddResourceTransition(state, ModelDynamicIndirectionBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(state);
  }
}

/*
==============
R_GPV_VisibilityBufferPrepass
==============
*/
void R_GPV_VisibilityBufferPrepass(ComputeCmdBufState *state, const GfxBackEndData *data, const GfxViewInfo *viewInfo, unsigned int passIndex, R_RT_ColorHandle *triIDTexture, R_RT_BufferHandle *clusterWorkgroupArgsBuffer, R_RT_BufferHandle *perSurfDataBuffer, R_RT_BufferHandle *culledTriClusterBuffer)
{
  R_RT_ColorHandle *v8; 
  unsigned __int16 m_surfaceID; 
  bool vrs; 
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v13; 
  int width; 
  const R_RT_Surface *v15; 

  v8 = triIDTexture;
  m_surfaceID = triIDTexture->m_surfaceID;
  if ( triIDTexture->m_surfaceID )
  {
    R_RT_Handle::GetSurface(triIDTexture);
  }
  else if ( triIDTexture->m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
  {
    __debugbreak();
  }
  if ( !m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 2788, ASSERT_TYPE_ASSERT, "(triIDTexture.IsValid())", (const char *)&queryFormat, "triIDTexture.IsValid()") )
    __debugbreak();
  vrs = rg.vrs;
  if ( vrs != ((R_RT_Handle::GetSurface(v8)->m_rtFlags & 0x8000) != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 2791, ASSERT_TYPE_ASSERT, "(useMSAA == triIDTexture.HasFmask())", (const char *)&queryFormat, "useMSAA == triIDTexture.HasFmask()") )
    __debugbreak();
  if ( vrs )
  {
    R_SetComputeShader(state, rgp.gpvVisBufferPrepassMSAA);
    Surface = R_RT_Handle::GetSurface(v8);
    triIDTexture = (R_RT_ColorHandle *)R_Texture_GetResident(Surface->m_color.m_fmaskImage.m_base.textureId);
    R_SetComputeTextures(state, 27, 1, (const GfxTexture *const *)&triIDTexture);
  }
  else
  {
    R_SetComputeShader(state, rgp.gpvVisBufferPrepass);
  }
  v13 = R_RT_Handle::GetSurface(v8);
  triIDTexture = (R_RT_ColorHandle *)R_Texture_GetResident(v13->m_image.m_base.textureId);
  R_SetComputeTextures(state, 26, 1, (const GfxTexture *const *)&triIDTexture);
  triIDTexture = (R_RT_ColorHandle *)&R_RT_Handle::GetWrappedBuffer(culledTriClusterBuffer)->rwView;
  R_SetComputeRWViewsWithCounters(state, 2, 1, (const GfxShaderBufferRWView *const *)&triIDTexture, NULL);
  width = R_RT_Handle::GetSurface(v8)->m_image.m_base.width;
  v15 = R_RT_Handle::GetSurface(v8);
  R_Dispatch(state, (unsigned int)(width + 7) >> 3, ((unsigned int)v15->m_image.m_base.height + 7) >> 3, 1u);
}

/*
==============
R_GP_AddViewParms
==============
*/
void R_GP_AddViewParms()
{
  __int128 v0; 
  __int128 v1; 
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  GfxViewInfo *v5; 
  unsigned int v6; 
  unsigned int v7; 
  __int64 v8; 
  GfxViewParmsCPU *v9; 
  GfxViewParms *DepthHackViewParms; 
  char *v11; 
  __int64 v12; 
  vec4_t v13; 
  GfxViewParms *p_viewParms; 
  float width; 
  float height; 
  __int64 MapSize; 
  __int64 v18; 
  unsigned int v19; 
  __int64 v20; 
  __int64 v21; 
  bool v22; 
  float v23; 
  float v24; 
  GPBackendFrameData *v25; 
  float v26; 
  BOOL vertexDeformForceCullSunShadows; 
  float v28; 
  float invFovScale; 
  float cappedLodScale; 
  float biasWithoutFovScale; 
  float scaleWithoutFovScale; 
  float vertexDeformCutOffDist; 
  BOOL vertexDeformForceCullSpotShadows; 
  __int64 v37; 
  unsigned __int8 *viewParmsGPU; 
  GfxViewParmsCPU *v39; 
  tmat44_t<vec4_t> *v40; 
  unsigned __int8 *v41; 
  __int64 v42; 
  __int64 v43; 
  unsigned __int8 *v44; 
  int v45; 
  __int64 v46; 
  GfxViewParms result; 
  char v48[384]; 
  __int128 v49; 
  __int128 v50; 
  __int128 v51; 
  __int128 v52; 
  __int128 v53; 

  v51 = v2;
  v50 = v3;
  v49 = v4;
  if ( !s_gpCurBackendFrameData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 855, ASSERT_TYPE_ASSERT, "(s_gpCurBackendFrameData)", (const char *)&queryFormat, "s_gpCurBackendFrameData") )
    __debugbreak();
  if ( s_gpCurBackendFrameData->smpFrame != frontEndDataOut->smpFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 856, ASSERT_TYPE_ASSERT, "(s_gpCurBackendFrameData->smpFrame == static_cast< uint >( frontEndDataOut->smpFrame ))", (const char *)&queryFormat, "s_gpCurBackendFrameData->smpFrame == static_cast< uint >( frontEndDataOut->smpFrame )") )
    __debugbreak();
  v5 = &frontEndDataOut->viewInfo[frontEndDataOut->viewInfoIndex];
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 859, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  v6 = 0;
  v53 = v0;
  v7 = 0;
  v52 = v1;
  v8 = 0i64;
  do
  {
    v9 = &s_gpCurBackendFrameData->viewParmsCPU[v8];
    if ( v7 == 32 )
    {
      DepthHackViewParms = R_GetDepthHackViewParms(&result, (const GfxViewParms *)v5);
      v11 = v48;
      v12 = 3i64;
      do
      {
        v11 += 128;
        v13 = DepthHackViewParms->viewMatrix.m.m[0];
        DepthHackViewParms = (GfxViewParms *)((char *)DepthHackViewParms + 128);
        *((vec4_t *)v11 - 8) = v13;
        *((_OWORD *)v11 - 7) = *(_OWORD *)&DepthHackViewParms[-1].camera.axis.row0.y;
        *((_OWORD *)v11 - 6) = *(_OWORD *)&DepthHackViewParms[-1].camera.axis.row1.z;
        *((_OWORD *)v11 - 5) = *(_OWORD *)&DepthHackViewParms[-1].camera.tanHalfFovX;
        *((_OWORD *)v11 - 4) = *(_OWORD *)DepthHackViewParms[-1].camera.zPlanes;
        *((_OWORD *)v11 - 3) = *(_OWORD *)&DepthHackViewParms[-1].camera.focalLength;
        *((_OWORD *)v11 - 2) = *(_OWORD *)&DepthHackViewParms[-1].camera.visibilityQueryDistance;
        *((_OWORD *)v11 - 1) = *(_OWORD *)&DepthHackViewParms[-1].cameraMotion;
        --v12;
      }
      while ( v12 );
      p_viewParms = (GfxViewParms *)v48;
      width = (float)v5->sceneViewport.width;
      height = (float)v5->sceneViewport.height;
    }
    else
    {
      if ( v7 )
      {
        if ( v7 - 1 > 2 )
        {
          if ( v7 - 4 > 7 )
          {
            if ( v7 - 12 > 0x13 )
            {
              LODWORD(v46) = v7;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 921, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "R_GP_AddViewParms: unhandled scene view type %d", v46) )
                __debugbreak();
LABEL_40:
              *(_QWORD *)v9->viewProjectionMatrix.m[0].v = 0i64;
              goto LABEL_41;
            }
            v19 = (v7 - 12) % 0xA;
            v20 = (v7 - 12) / 0xA;
            if ( v19 >= frontEndDataOut->sunShadow.partitionCache[v20].gfxCachedSunShadowOverlapCount )
              goto LABEL_41;
            v21 = v20 * 8656 + 864i64 * v19;
            if ( (GfxBackEndData *)((char *)frontEndDataOut + v21) == (GfxBackEndData *)-929984i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 913, ASSERT_TYPE_ASSERT, "(&frontEndDataOut->sunShadow.partitionCache[partitionIndex].gfxCachedSunShadowOverlap[cellIndex].staticEntry)", (const char *)&queryFormat, "&frontEndDataOut->sunShadow.partitionCache[partitionIndex].gfxCachedSunShadowOverlap[cellIndex].staticEntry") )
              __debugbreak();
            p_viewParms = &(*(GfxCachedSunShadow **)((char *)&frontEndDataOut->sunShadow.partitionCache[0].gfxCachedSunShadowOverlap[0].staticEntry + v21))->viewParms;
            width = (float)(R_SunShadow_GetMapSize() >> 1);
            MapSize = R_SunShadow_GetMapSize() >> 1;
          }
          else
          {
            v18 = v7 - 4;
            if ( (unsigned int)v18 >= frontEndDataOut->spotShadowUpdateCount )
              goto LABEL_40;
            p_viewParms = &frontEndDataOut->spotShadowUpdates[v18].viewportParms.viewParms;
            width = (float)frontEndDataOut->spotShadowUpdates[v18].viewportParms.viewport.width;
            MapSize = frontEndDataOut->spotShadowUpdates[v18].viewportParms.viewport.height;
          }
        }
        else
        {
          p_viewParms = &frontEndDataOut->sunShadow.partition[v7 - 1].viewParms;
          width = (float)R_SunShadow_GetMapSize();
          MapSize = R_SunShadow_GetMapSize();
        }
      }
      else
      {
        p_viewParms = (GfxViewParms *)v5;
        width = (float)v5->sceneViewport.width;
        MapSize = v5->sceneViewport.height;
      }
      height = (float)MapSize;
      if ( !p_viewParms )
        goto LABEL_40;
    }
    MatrixCopy44(&p_viewParms->viewProjectionMatrix.m, &v9->viewProjectionMatrix);
    v22 = p_viewParms->projectionMatrix.m.m[0].v[3] == 0.0;
    v9->rtSize.v[2] = 1.0 / width;
    v9->rtSize.v[3] = 1.0 / height;
    v9->rtSize.v[0] = width;
    v9->rtSize.v[1] = height;
    v9->flags = 0;
    if ( v22 && p_viewParms->projectionMatrix.m.m[1].v[3] == 0.0 && p_viewParms->projectionMatrix.m.m[2].v[3] == 0.0 )
    {
      if ( v7 - 1 > 2 && v7 - 12 > 0x13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 945, ASSERT_TYPE_ASSERT, "(isSunShadow)", (const char *)&queryFormat, "isSunShadow") )
        __debugbreak();
      v9->eyeOffset.v[0] = LODWORD(p_viewParms->camera.axis.m[0].v[0]);
      v9->eyeOffset.v[1] = LODWORD(p_viewParms->camera.axis.m[0].v[1]);
      v9->eyeOffset.v[2] = LODWORD(p_viewParms->camera.axis.m[0].v[2]);
      v9->flags |= 1u;
    }
    else
    {
      v23 = 4096.0 * p_viewParms->camera.origin.v[1];
      v9->eyeOffset.v[0] = (int)(float)(4096.0 * p_viewParms->camera.origin.v[0]);
      v24 = 4096.0 * p_viewParms->camera.origin.v[2];
      v9->eyeOffset.v[1] = (int)v23;
      v9->eyeOffset.v[2] = (int)v24;
    }
LABEL_41:
    ++v7;
    ++v8;
  }
  while ( v7 < 0x21 );
  v25 = s_gpCurBackendFrameData;
  v26 = rg.correctedLodParms.origin.v[1];
  vertexDeformForceCullSunShadows = rg.vertexDeformForceCullSunShadows;
  s_gpCurBackendFrameData->lodParamConsts.lodOrigin.v[0] = rg.correctedLodParms.origin.v[0];
  v28 = rg.correctedLodParms.origin.v[2];
  v25->lodParamConsts.lodOrigin.v[1] = v26;
  invFovScale = rg.correctedLodParms.invFovScale;
  v25->lodParamConsts.lodOrigin.v[2] = v28;
  cappedLodScale = rg.correctedLodParms.cappedLodScale;
  v25->lodParamConsts.invFovScale = invFovScale;
  biasWithoutFovScale = rg.correctedLodParms.ramp.biasWithoutFovScale;
  v25->lodParamConsts.cappedLodScale = cappedLodScale;
  scaleWithoutFovScale = rg.correctedLodParms.ramp.scaleWithoutFovScale;
  v25->lodParamConsts.lodRampBias = biasWithoutFovScale;
  vertexDeformCutOffDist = rg.vertexDeformCutOffDist;
  v25->lodParamConsts.lodRampScale = scaleWithoutFovScale;
  _XMM0 = LODWORD(rg.vertexDeformFadeDist);
  v25->lodParamConsts.vertexDeformCutOffDist = vertexDeformCutOffDist;
  __asm { vminss  xmm1, xmm0, xmm1 }
  *(float *)&_XMM0 = rg.correctedLodParms.clutterRamp.biasWithoutFovScale;
  v25->lodParamConsts.vertexDeformFadeDist = *(float *)&_XMM1;
  *(float *)&_XMM1 = rg.correctedLodParms.clutterRamp.scaleWithoutFovScale;
  v25->lodParamConsts.vertexDeformForceCullSunShadows = vertexDeformForceCullSunShadows;
  vertexDeformForceCullSpotShadows = rg.vertexDeformForceCullSpotShadows;
  v25->lodParamConsts.clutterLodScale = *(float *)&_XMM1;
  v25->lodParamConsts.clutterLodBias = *(float *)&_XMM0;
  v25->lodParamConsts.vertexDeformForceCullSpotShadows = vertexDeformForceCullSpotShadows;
  if ( !v25->viewParmsGPU && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 966, ASSERT_TYPE_ASSERT, "(s_gpCurBackendFrameData->viewParmsGPU)", (const char *)&queryFormat, "s_gpCurBackendFrameData->viewParmsGPU") )
    __debugbreak();
  v37 = 0i64;
  do
  {
    viewParmsGPU = s_gpCurBackendFrameData->viewParmsGPU;
    v39 = &s_gpCurBackendFrameData->viewParmsCPU[v37];
    if ( (unsigned __int64)(v6 << 6) + 64 > 0xC60 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 670, ASSERT_TYPE_ASSERT, "(( byteOffset + sizeof( VAR_TYPE ) ) <= bufferSize)", (const char *)&queryFormat, "( byteOffset + sizeof( VAR_TYPE ) ) <= bufferSize") )
      __debugbreak();
    v40 = (tmat44_t<vec4_t> *)&viewParmsGPU[64 * v6];
    v41 = s_gpCurBackendFrameData->viewParmsGPU;
    v42 = 16 * (v6 + 132);
    if ( (unsigned __int64)(v42 + 16) > 0xC60 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 670, ASSERT_TYPE_ASSERT, "(( byteOffset + sizeof( VAR_TYPE ) ) <= bufferSize)", (const char *)&queryFormat, "( byteOffset + sizeof( VAR_TYPE ) ) <= bufferSize") )
      __debugbreak();
    v43 = 16 * (v6 + 165);
    v44 = s_gpCurBackendFrameData->viewParmsGPU;
    if ( (unsigned __int64)(v43 + 16) > 0xC60 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 670, ASSERT_TYPE_ASSERT, "(( byteOffset + sizeof( VAR_TYPE ) ) <= bufferSize)", (const char *)&queryFormat, "( byteOffset + sizeof( VAR_TYPE ) ) <= bufferSize") )
      __debugbreak();
    MatrixCopy44(&v39->viewProjectionMatrix, v40);
    v45 = v39->eyeOffset.v[2];
    *(double *)&v41[v42] = *(double *)v39->eyeOffset.v;
    *(_DWORD *)&v41[v42 + 8] = v45;
    ++v6;
    ++v37;
    *(_DWORD *)&v41[v42 + 12] = v39->flags;
    *(float *)&v44[v43] = v39->rtSize.v[0];
    *(float *)&v44[v43 + 4] = v39->rtSize.v[1];
    *(float *)&v44[v43 + 8] = v39->rtSize.v[2];
    *(float *)&v44[v43 + 12] = v39->rtSize.v[3];
  }
  while ( v6 < 0x21 );
  if ( !s_gpCurBackendFrameData->transientVisBitsGPU && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 981, ASSERT_TYPE_ASSERT, "(s_gpCurBackendFrameData->transientVisBitsGPU)", (const char *)&queryFormat, "s_gpCurBackendFrameData->transientVisBitsGPU") )
    __debugbreak();
  *(bitarray<1536> *)s_gpCurBackendFrameData->transientVisBitsGPU = frontEndDataOut->transientVisibility;
}

/*
==============
R_GP_AllocSModelCollections
==============
*/
void R_GP_AllocSModelCollections(unsigned int passIndex, unsigned int numSModelCollectionsToAlloc, const GfxSModelCollExpansionArg *smodelCollExpansionArgs)
{
  GPBackendPassData *v5; 
  signed __int32 v6; 
  unsigned int v7; 
  int v8; 

  v5 = &s_gpCurBackendFrameData->gpBackendPass[passIndex];
  if ( (((_BYTE)v5 + 64) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &v5->visibleSModelCollectionCount) )
    __debugbreak();
  v6 = _InterlockedExchangeAdd(&v5->visibleSModelCollectionCount, numSModelCollectionsToAlloc);
  if ( (unsigned int)v6 <= 0x3FFF )
  {
    v7 = v6 + numSModelCollectionsToAlloc;
    if ( v6 + numSModelCollectionsToAlloc - 1 > 0x3FFF )
    {
      if ( v7 <= 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1022, ASSERT_TYPE_ASSERT, "(smodelCollectionArgOffset + numSModelCollectionsToAlloc > 16384)", (const char *)&queryFormat, "smodelCollectionArgOffset + numSModelCollectionsToAlloc > GP_SMODEL_MAX_VISIBLE_COLLECTIONS") )
        __debugbreak();
      v8 = v7 - 0x4000;
      if ( v8 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1026, ASSERT_TYPE_ASSERT, "(overflow > 0)", (const char *)&queryFormat, "overflow > 0") )
        __debugbreak();
      numSModelCollectionsToAlloc -= v8;
    }
    if ( numSModelCollectionsToAlloc && v5->smodelCollExpansionArgsGPU )
    {
      if ( (numSModelCollectionsToAlloc & 0x80000000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1033, ASSERT_TYPE_ASSERT, "(numSModelCollectionArgsToCopy >= 0)", (const char *)&queryFormat, "numSModelCollectionArgsToCopy >= 0") )
        __debugbreak();
      memcpy_0(&v5->smodelCollExpansionArgsGPU[v6], smodelCollExpansionArgs, 8i64 * (int)numSModelCollectionsToAlloc);
    }
  }
}

/*
==============
R_GP_ClearBufferToZero
==============
*/
void R_GP_ClearBufferToZero(ComputeCmdBufState *computeState, const GfxWrappedRWBuffer *buffer, unsigned int size, bool structuredBuffer)
{
  GfxDevice *device; 
  __int64 v6; 
  __int64 v7[2]; 

  device = computeState->device;
  v7[0] = 0i64;
  v7[1] = 0i64;
  if ( !R_IsLockedIfGfxImmediateContext(device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  v6 = g_descriptorPools.shaderViewPool.handle.parent->descriptorSize * (g_descriptorPools.shaderViewPool.handle.startSlot + buffer->rwView.rwView);
  ((void (__fastcall *)(GfxDevice *, unsigned __int64, unsigned __int64, ID3D12Resource *, __int64 *, _DWORD, _QWORD))device->m_pFunction[17].Release)(device, v6 + g_descriptorPools.shaderViewPool.handle.parent->heapStartGPUHandle.ptr, g_descriptorPools.shaderViewPool.handle.parent->heapStartCPUHandle.ptr + v6, buffer->rwView.rwResource, v7, 0, 0i64);
}

/*
==============
R_GP_ClearClutterCollectionVisData
==============
*/
void R_GP_ClearClutterCollectionVisData(unsigned int passIndex, unsigned int clutterCollectionCount)
{
  memset_0(s_gpCurBackendFrameData->gpBackendPass[passIndex].clutterCollectionVisData, 0, 4 * (((unsigned __int64)clutterCollectionCount + 31) >> 5));
}

/*
==============
R_GP_ClearCounterResourcesToZero
==============
*/
void R_GP_ClearCounterResourcesToZero(ComputeCmdBufState *state, const GfxBackEndData *data, unsigned int passIndex, R_RT_BufferHandle *batchSubMeshCountsBuffer, R_RT_BufferHandle *smodelSurfEmitCountBuffer, R_RT_BufferHandle *smodelSurfCountBuffer)
{
  GPBackendFrameData *v7; 
  __int64 v8; 
  unsigned int v9; 
  const GfxWrappedRWBuffer *WrappedBuffer; 
  const GfxWrappedRWBuffer *v11; 
  const GfxWrappedRWBuffer *v12; 

  v7 = &s_gpBackendFrameData[data->smpFrame];
  v8 = passIndex;
  if ( v7->gpBackendPass[v8].batchCount )
  {
    v9 = 4 * v7->gpBackendPass[v8].batchCount;
    WrappedBuffer = R_RT_Handle::GetWrappedBuffer(batchSubMeshCountsBuffer);
    R_GP_ClearBufferToZero(state, WrappedBuffer, v9, 0);
  }
  v11 = R_RT_Handle::GetWrappedBuffer(smodelSurfEmitCountBuffer);
  R_GP_ClearBufferToZero(state, v11, 4u, 0);
  v12 = R_RT_Handle::GetWrappedBuffer(smodelSurfCountBuffer);
  R_GP_ClearBufferToZero(state, v12, 4u, 0);
}

/*
==============
R_GP_CullClusters
==============
*/
void R_GP_CullClusters(ComputeCmdBufState *state, const GfxBackEndData *data, const GfxViewInfo *viewInfo, unsigned int passIndex, bool reusePrepassVisData, bool useVisBuffer, R_RT_BufferHandle *clusterPassIndirectArgsBuffer, R_RT_BufferHandle *subMeshWorkgroupArgsBuffer, R_RT_BufferHandle *perSurfDataBuffer, R_RT_BufferHandle *prevCulledSubMeshBuffer, R_RT_BufferHandle *prevSubMeshClusterOffsetsBuffer, R_RT_ColorHandle *occlusionDepthTexture, R_RT_ColorHandle *umbraOcclusionTexture, R_RT_BufferHandle *culledSubMeshBuffer, R_RT_BufferHandle *subMeshClusterCountsBuffer, R_RT_BufferHandle *culledTriClusterBuffer)
{
  __int64 v19; 
  __int64 v20; 
  int v21; 
  int v22; 
  float v23; 
  int v24; 
  float v25; 
  float v26; 
  bool v27; 
  bool v28; 
  const R_RT_Surface *Surface; 
  GfxTexture *Resident; 
  int v31; 
  GfxTextureId textureId; 
  ComputeShader *gpClusterCullingOcclusionPass; 
  const GfxWrappedRWBuffer *WrappedBuffer; 
  GfxShaderBufferView *views; 
  GfxShaderBufferView *v36; 
  __int64 v37; 
  GfxShaderBufferView *v38; 
  GfxTexture *textures; 
  GfxTexture *v40; 
  GfxShaderBufferView *p_view; 
  GfxShaderBufferView *v42; 
  R_RT_Handle *v43; 
  GfxShaderBufferView *v44; 
  R_RT_Handle *v45; 
  GfxShaderBufferView *v46; 
  R_RT_Handle *v47; 
  GfxShaderBufferRWView *p_rwView; 
  R_RT_Handle *v49; 
  GfxShaderBufferRWView *v50; 
  R_RT_Handle *v51; 
  GfxShaderBufferRWView *v52; 
  R_RT_Handle *v53; 
  GfxShaderBufferView *v54; 
  R_RT_Handle *v55; 
  GfxShaderBufferView *v56; 
  R_RT_Handle *v57; 
  R_RT_Handle v58; 
  int v59; 
  __int64 v60; 
  int v61; 
  unsigned int gpuCullClusterDepthMipBias; 
  BOOL v63; 
  int dataa[12]; 

  v57 = clusterPassIndirectArgsBuffer;
  v43 = subMeshWorkgroupArgsBuffer;
  v45 = perSurfDataBuffer;
  v53 = prevCulledSubMeshBuffer;
  v55 = prevSubMeshClusterOffsetsBuffer;
  v47 = culledSubMeshBuffer;
  v49 = subMeshClusterCountsBuffer;
  v51 = culledTriClusterBuffer;
  v19 = 20544i64 * data->smpFrame;
  v20 = v19 + 8576i64 * passIndex;
  v37 = v19;
  if ( !*(unsigned int *)((char *)&s_gpBackendFrameData[0].gpBackendPass[0].dynSurfCount + v20) && *(int *)((char *)&s_gpBackendFrameData[0].gpBackendPass[0].visibleSModelCollectionCount + v20) <= 0 || !*(volatile int *)((char *)&s_gpBackendFrameData[0].gpBackendPass[0].batchCount + v20) )
    return;
  v21 = *(unsigned int *)((char *)s_gpBackendFrameData[0].gpBackendPass[0].surfTypeCount + v20);
  v22 = *(unsigned int *)((char *)&s_gpBackendFrameData[0].gpBackendPass[0].surfTypeCount[1] + v20);
  v23 = 4096.0 * viewInfo->sceneDef.viewOffset.v[0];
  dataa[7] = *(unsigned int *)((char *)&s_gpBackendFrameData[0].gpBackendPass[0].dynSurfCount + v20);
  dataa[0] = *(unsigned int *)((char *)s_gpBackendFrameData[0].gpBackendPass[0].surfIndexOffsets + v20);
  dataa[1] = v21;
  dataa[2] = *(unsigned int *)((char *)&s_gpBackendFrameData[0].gpBackendPass[0].surfIndexOffsets[1] + v20);
  v24 = (int)v23;
  v25 = 4096.0 * viewInfo->sceneDef.viewOffset.v[1];
  dataa[4] = v24;
  v26 = 4096.0 * viewInfo->sceneDef.viewOffset.v[2];
  dataa[5] = (int)v25;
  dataa[3] = v22;
  dataa[6] = (int)v26;
  R_UploadAndSetComputeConstants(state, 0, dataa, 0x30u, NULL);
  v27 = occlusionDepthTexture->m_surfaceID && rg.gpuCullTriClusterOcclusion;
  v28 = occlusionDepthTexture->m_surfaceID == 0;
  v59 = v27;
  if ( v28 )
  {
    v60 = 0i64;
    v61 = 0;
  }
  else
  {
    LODWORD(v60) = R_RT_Handle::GetSurface(occlusionDepthTexture)->m_image.m_base.width;
    HIDWORD(v60) = R_RT_Handle::GetSurface(occlusionDepthTexture)->m_image.m_base.height;
    v61 = R_RT_Handle::GetSurface(occlusionDepthTexture)->m_image.m_base.levelCount - 1;
  }
  gpuCullClusterDepthMipBias = rg.gpuCullClusterDepthMipBias;
  v58 = umbraOcclusionTexture->R_RT_Handle;
  if ( !R_Umbra_GetOcclusionImageCameraView(data) || passIndex || !v58.m_surfaceID )
  {
    Resident = NULL;
LABEL_21:
    v31 = 0;
    goto LABEL_22;
  }
  Surface = R_RT_Handle::GetSurface(&v58);
  Resident = (GfxTexture *)R_Texture_GetResident(Surface->m_image.m_base.textureId);
  if ( !Resident || !rg.gpuCullOcclusion || !rg.gpuCullTriClusterOcclusion || !rg.gpuCullOcclusionUmbra || v27 )
    goto LABEL_21;
  v31 = 2;
LABEL_22:
  v59 |= v31;
  v63 = useVisBuffer;
  R_UploadAndSetComputeConstants(state, 1, &v59, 0x20u, NULL);
  views = (GfxShaderBufferView *)((char *)&s_gpBackendFrameData[0].gpBackendPass[0].rigidSurfCullArgsBuffer.view + v20);
  R_SetComputeViews(state, 0, 1, (const GfxShaderBufferView *const *)&views);
  v36 = (GfxShaderBufferView *)((char *)&s_gpBackendFrameData[0].gpBackendPass[0].skinnedSurfCullArgsBuffer.view + v20);
  R_SetComputeViews(state, 1, 1, (const GfxShaderBufferView *const *)&v36);
  RB_ModelData_SetComputeResources(state, 4u, 3u);
  v38 = (GfxShaderBufferView *)((char *)&s_gpBackendFrameData[0].viewParmsBuffer.view + v37);
  R_SetComputeViews(state, 5, 1, (const GfxShaderBufferView *const *)&v38);
  if ( occlusionDepthTexture->m_surfaceID )
    textureId = R_RT_Handle::GetSurface(occlusionDepthTexture)->m_image.m_base.textureId;
  else
    textureId = rgp.blackImage->textureId;
  textures = (GfxTexture *)R_Texture_GetResident(textureId);
  R_SetComputeTextures(state, 6, 1, (const GfxTexture *const *)&textures);
  if ( !Resident )
    Resident = (GfxTexture *)R_Texture_GetResident(rgp.blackImage->textureId);
  v40 = Resident;
  R_SetComputeTextures(state, 25, 1, (const GfxTexture *const *)&v40);
  p_view = &gfxBuf.uibVirtPageTableBuffer.view;
  R_SetComputeViews(state, 10, 1, (const GfxShaderBufferView *const *)&p_view);
  v42 = &gfxBuf.uibPageDataBuffer.view;
  R_SetComputeViews(state, 11, 1, (const GfxShaderBufferView *const *)&v42);
  v44 = &R_RT_Handle::GetWrappedBuffer(v43)->view;
  R_SetComputeViews(state, 19, 1, (const GfxShaderBufferView *const *)&v44);
  v46 = &R_RT_Handle::GetWrappedBuffer(v45)->view;
  R_SetComputeViews(state, 2, 1, (const GfxShaderBufferView *const *)&v46);
  p_rwView = &R_RT_Handle::GetWrappedBuffer(v47)->rwView;
  R_SetComputeRWViewsWithCounters(state, 3, 1, (const GfxShaderBufferRWView *const *)&p_rwView, NULL);
  v50 = &R_RT_Handle::GetWrappedBuffer(v49)->rwView;
  R_SetComputeRWViewsWithCounters(state, 4, 1, (const GfxShaderBufferRWView *const *)&v50, NULL);
  v52 = &R_RT_Handle::GetWrappedBuffer(v51)->rwView;
  R_SetComputeRWViewsWithCounters(state, 6, 1, (const GfxShaderBufferRWView *const *)&v52, NULL);
  if ( reusePrepassVisData )
  {
    v54 = &R_RT_Handle::GetWrappedBuffer(v53)->view;
    R_SetComputeViews(state, 22, 1, (const GfxShaderBufferView *const *)&v54);
    v56 = &R_RT_Handle::GetWrappedBuffer(v55)->view;
    R_SetComputeViews(state, 23, 1, (const GfxShaderBufferView *const *)&v56);
    gpClusterCullingOcclusionPass = rgp.gpClusterCullingOcclusionPass;
  }
  else
  {
    gpClusterCullingOcclusionPass = rgp.gpClusterCullingPass;
  }
  R_SetComputeShader(state, gpClusterCullingOcclusionPass);
  WrappedBuffer = R_RT_Handle::GetWrappedBuffer(v57);
  R_DispatchIndirect(state, WrappedBuffer->buffer, 0);
}

/*
==============
R_GP_CullTriangles
==============
*/
void R_GP_CullTriangles(ComputeCmdBufState *state, const GfxBackEndData *data, const GfxViewInfo *viewInfo, unsigned int passIndex, bool reusePrepassVisData, R_RT_BufferHandle *triPassIndirectArgsBuffer, R_RT_BufferHandle *clusterWorkgroupArgsBuffer, R_RT_BufferHandle *perSurfDataBuffer, R_RT_ColorHandle *occlusionDepthTexture, R_RT_ColorHandle *umbraOcclusionTexture, R_RT_BufferHandle *culledTriClusterBuffer, R_RT_BufferHandle *clusterTriCountsBuffer)
{
  __int64 smpFrame; 
  __int64 v16; 
  int v17; 
  int v18; 
  float v19; 
  int v20; 
  float v21; 
  float v22; 
  GfxTexture *Resident; 
  bool v24; 
  const R_RT_Surface *Surface; 
  int v26; 
  GfxTextureId textureId; 
  ComputeShader *gpTriangleOcclusionCullPass; 
  const GfxWrappedRWBuffer *WrappedBuffer; 
  GfxShaderBufferView *views; 
  GfxShaderBufferView *v32; 
  R_RT_Handle *v33; 
  GfxShaderBufferView *p_view; 
  unsigned __int64 v35; 
  GfxShaderBufferView *v36; 
  GfxTexture *textures; 
  GfxTexture *v38; 
  GfxShaderBufferView *v39; 
  GfxShaderBufferView *v40; 
  GfxShaderBufferView *v41; 
  GfxShaderBufferView *v42; 
  GfxShaderBufferView *v43; 
  R_RT_Handle *v44; 
  GfxShaderBufferView *v45; 
  R_RT_Handle *v46; 
  GfxShaderBufferRWView *p_rwView; 
  R_RT_Handle *v48; 
  GfxShaderBufferRWView *v49; 
  R_RT_Handle *v50; 
  R_RT_Handle v51; 
  int v52; 
  __int64 v53; 
  int v54; 
  unsigned int gpuCullTriDepthMipBias; 
  int v56; 
  int dataa[12]; 

  smpFrame = data->smpFrame;
  v50 = triPassIndirectArgsBuffer;
  v44 = clusterWorkgroupArgsBuffer;
  v33 = perSurfDataBuffer;
  v46 = culledTriClusterBuffer;
  v48 = clusterTriCountsBuffer;
  v16 = 20544 * smpFrame + 8576i64 * passIndex;
  v35 = 20544 * smpFrame;
  if ( (*(unsigned int *)((char *)&s_gpBackendFrameData[0].gpBackendPass[0].dynSurfCount + v16) || *(int *)((char *)&s_gpBackendFrameData[0].gpBackendPass[0].visibleSModelCollectionCount + v16) > 0) && *(volatile int *)((char *)&s_gpBackendFrameData[0].gpBackendPass[0].batchCount + v16) )
  {
    if ( *(int *)((char *)&s_gpBackendFrameData[0].gpBackendPass[0].batchCount + v16) >= 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 2706, ASSERT_TYPE_ASSERT, "(gpBackendPass->batchCount < ( 16384 ))", (const char *)&queryFormat, "gpBackendPass->batchCount < GP_BATCH_LIMIT") )
      __debugbreak();
    v17 = *(unsigned int *)((char *)s_gpBackendFrameData[0].gpBackendPass[0].surfTypeCount + v16);
    v18 = *(unsigned int *)((char *)&s_gpBackendFrameData[0].gpBackendPass[0].surfTypeCount[1] + v16);
    v19 = 4096.0 * viewInfo->sceneDef.viewOffset.v[0];
    dataa[7] = *(unsigned int *)((char *)&s_gpBackendFrameData[0].gpBackendPass[0].dynSurfCount + v16);
    dataa[0] = *(unsigned int *)((char *)s_gpBackendFrameData[0].gpBackendPass[0].surfIndexOffsets + v16);
    dataa[1] = v17;
    dataa[2] = *(unsigned int *)((char *)&s_gpBackendFrameData[0].gpBackendPass[0].surfIndexOffsets[1] + v16);
    v20 = (int)v19;
    v21 = 4096.0 * viewInfo->sceneDef.viewOffset.v[1];
    dataa[4] = v20;
    v22 = 4096.0 * viewInfo->sceneDef.viewOffset.v[2];
    Resident = NULL;
    dataa[5] = (int)v21;
    dataa[3] = v18;
    dataa[6] = (int)v22;
    R_UploadAndSetComputeConstants(state, 0, dataa, 0x30u, NULL);
    v24 = occlusionDepthTexture->m_surfaceID && rg.gpuCullTriOcclusion;
    v52 = v24;
    if ( occlusionDepthTexture->m_surfaceID )
    {
      LODWORD(v53) = R_RT_Handle::GetSurface(occlusionDepthTexture)->m_image.m_base.width;
      HIDWORD(v53) = R_RT_Handle::GetSurface(occlusionDepthTexture)->m_image.m_base.height;
      v54 = R_RT_Handle::GetSurface(occlusionDepthTexture)->m_image.m_base.levelCount - 1;
    }
    else
    {
      v53 = 0i64;
      v54 = 0;
    }
    gpuCullTriDepthMipBias = rg.gpuCullTriDepthMipBias;
    v51 = umbraOcclusionTexture->R_RT_Handle;
    if ( R_Umbra_GetOcclusionImageCameraView(data) && !passIndex && v51.m_surfaceID && (Surface = R_RT_Handle::GetSurface(&v51), (Resident = (GfxTexture *)R_Texture_GetResident(Surface->m_image.m_base.textureId)) != NULL) && rg.gpuCullOcclusion && rg.gpuCullTriOcclusion && rg.gpuCullTriOcclusionUmbra && !v24 )
      v26 = 2;
    else
      v26 = 0;
    v52 |= v26;
    v56 = 0;
    R_UploadAndSetComputeConstants(state, 1, &v52, 0x20u, NULL);
    views = (GfxShaderBufferView *)((char *)&s_gpBackendFrameData[0].gpBackendPass[0].rigidSurfCullArgsBuffer.view + v16);
    R_SetComputeViews(state, 0, 1, (const GfxShaderBufferView *const *)&views);
    v32 = (GfxShaderBufferView *)((char *)&s_gpBackendFrameData[0].gpBackendPass[0].skinnedSurfCullArgsBuffer.view + v16);
    R_SetComputeViews(state, 1, 1, (const GfxShaderBufferView *const *)&v32);
    p_view = &R_RT_Handle::GetWrappedBuffer(v33)->view;
    R_SetComputeViews(state, 2, 1, (const GfxShaderBufferView *const *)&p_view);
    RB_ModelData_SetComputeResources(state, 4u, 3u);
    v36 = &s_gpBackendFrameData[v35 / 0x5040].viewParmsBuffer.view;
    R_SetComputeViews(state, 5, 1, (const GfxShaderBufferView *const *)&v36);
    if ( occlusionDepthTexture->m_surfaceID )
      textureId = R_RT_Handle::GetSurface(occlusionDepthTexture)->m_image.m_base.textureId;
    else
      textureId = rgp.blackImage->textureId;
    textures = (GfxTexture *)R_Texture_GetResident(textureId);
    R_SetComputeTextures(state, 6, 1, (const GfxTexture *const *)&textures);
    if ( !Resident )
      Resident = (GfxTexture *)R_Texture_GetResident(rgp.blackImage->textureId);
    v38 = Resident;
    R_SetComputeTextures(state, 25, 1, (const GfxTexture *const *)&v38);
    v39 = &gfxBuf.unifiedVertexBuffer.view;
    R_SetComputeViews(state, 7, 1, (const GfxShaderBufferView *const *)&v39);
    v40 = &gfxBuf.uvbVirtPageTableBuffer.view;
    R_SetComputeViews(state, 8, 1, (const GfxShaderBufferView *const *)&v40);
    v41 = &gfxBuf.unifiedIndexBuffer.view;
    R_SetComputeViews(state, 9, 1, (const GfxShaderBufferView *const *)&v41);
    v42 = &gfxBuf.uibVirtPageTableBuffer.view;
    R_SetComputeViews(state, 10, 1, (const GfxShaderBufferView *const *)&v42);
    v43 = &data->skinnedCacheVb->wrappedBuffer.view;
    R_SetComputeViews(state, 12, 1, (const GfxShaderBufferView *const *)&v43);
    v45 = &R_RT_Handle::GetWrappedBuffer(v44)->view;
    R_SetComputeViews(state, 13, 1, (const GfxShaderBufferView *const *)&v45);
    p_rwView = &R_RT_Handle::GetWrappedBuffer(v46)->rwView;
    R_SetComputeRWViewsWithCounters(state, 2, 1, (const GfxShaderBufferRWView *const *)&p_rwView, NULL);
    v49 = &R_RT_Handle::GetWrappedBuffer(v48)->rwView;
    R_SetComputeRWViewsWithCounters(state, 3, 1, (const GfxShaderBufferRWView *const *)&v49, NULL);
    gpTriangleOcclusionCullPass = rgp.gpTriangleOcclusionCullPass;
    if ( !reusePrepassVisData )
      gpTriangleOcclusionCullPass = rgp.gpTriangleCullPass;
    R_SetComputeShader(state, gpTriangleOcclusionCullPass);
    WrappedBuffer = R_RT_Handle::GetWrappedBuffer(v50);
    R_DispatchIndirect(state, WrappedBuffer->buffer, 0);
  }
}

/*
==============
R_GP_ExpandIndexBuffers
==============
*/
void R_GP_ExpandIndexBuffers(ComputeCmdBufState *state, const GfxBackEndData *data, unsigned int passIndex, bool indexedDraws, R_RT_BufferHandle *triPassIndirectArgsBuffer, R_RT_BufferHandle *clusterWorkgroupArgsBuffer, R_RT_BufferHandle *perSurfDataBuffer, R_RT_BufferHandle *culledTriClusterBuffer, R_RT_BufferHandle *clusterTriOffsetsBuffer, R_RT_BufferHandle *indexBuffer)
{
  GPBackendPassData *v12; 
  ComputeShader *gpTriangleExpandPass; 
  const GfxWrappedRWBuffer *WrappedBuffer; 
  GfxShaderBufferView *p_view; 
  GfxShaderBufferView *v16; 
  GfxShaderBufferView *v17; 
  GfxShaderBufferView *v18; 
  GfxShaderBufferView *v19; 
  GfxShaderBufferRWView *p_rwView; 
  GfxShaderBufferView *views; 

  v12 = &s_gpBackendFrameData[data->smpFrame].gpBackendPass[passIndex];
  if ( (v12->dynSurfCount || v12->visibleSModelCollectionCount > 0) && v12->batchCount )
  {
    views = &R_RT_Handle::GetWrappedBuffer(clusterWorkgroupArgsBuffer)->view;
    R_SetComputeViews(state, 13, 1, (const GfxShaderBufferView *const *)&views);
    p_view = &R_RT_Handle::GetWrappedBuffer(perSurfDataBuffer)->view;
    R_SetComputeViews(state, 2, 1, (const GfxShaderBufferView *const *)&p_view);
    v16 = &gfxBuf.unifiedIndexBuffer.view;
    R_SetComputeViews(state, 9, 1, (const GfxShaderBufferView *const *)&v16);
    v17 = &gfxBuf.uibVirtPageTableBuffer.view;
    R_SetComputeViews(state, 10, 1, (const GfxShaderBufferView *const *)&v17);
    v18 = &R_RT_Handle::GetWrappedBuffer(culledTriClusterBuffer)->view;
    R_SetComputeViews(state, 14, 1, (const GfxShaderBufferView *const *)&v18);
    v19 = &R_RT_Handle::GetWrappedBuffer(clusterTriOffsetsBuffer)->view;
    R_SetComputeViews(state, 15, 1, (const GfxShaderBufferView *const *)&v19);
    p_rwView = &R_RT_Handle::GetWrappedBuffer(indexBuffer)->rwView;
    R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&p_rwView, NULL);
    gpTriangleExpandPass = rgp.gpTriangleExpandPass;
    if ( indexedDraws )
      gpTriangleExpandPass = rgp.gpIndexedTriangleExpandPass;
    R_SetComputeShader(state, gpTriangleExpandPass);
    WrappedBuffer = R_RT_Handle::GetWrappedBuffer(triPassIndirectArgsBuffer);
    R_DispatchIndirect(state, WrappedBuffer->buffer, 0);
  }
}

/*
==============
R_GP_GenerateClusterWorkgroups
==============
*/
void R_GP_GenerateClusterWorkgroups(ComputeCmdBufState *state, const GfxBackEndData *data, unsigned int passIndex, R_RT_BufferHandle *clusterPassIndirectArgsBuffer, R_RT_BufferHandle *subMeshWorkgroupArgsBuffer, R_RT_BufferHandle *perSurfDataBuffer, R_RT_BufferHandle *culledSubMeshBuffer, R_RT_BufferHandle *subMeshClusterOffsetsBuffer, R_RT_BufferHandle *clusterWorkgroupArgsBuffer)
{
  GPBackendPassData *v11; 
  const GfxWrappedRWBuffer *WrappedBuffer; 
  GfxShaderBufferView *views; 
  GfxShaderBufferView *p_view; 
  GfxShaderBufferView *v15; 
  GfxShaderBufferView *v16; 
  GfxShaderBufferRWView *p_rwView; 
  int dataa[8]; 

  v11 = &s_gpBackendFrameData[data->smpFrame].gpBackendPass[passIndex];
  if ( v11->dynSurfCount || v11->visibleSModelCollectionCount > 0 )
  {
    if ( v11->batchCount )
    {
      dataa[0] = rg.gpuCullTriSModels;
      dataa[1] = rg.gpuCullTriRigidModels;
      dataa[2] = rg.gpuCullTriSkinnedModels;
      dataa[4] = rg.gpuCullTriMinThreshold;
      dataa[5] = rg.gpuCullClusterMinThreshold;
      R_UploadAndSetComputeConstants(state, 7, dataa, 0x20u, NULL);
      views = &R_RT_Handle::GetWrappedBuffer(subMeshWorkgroupArgsBuffer)->view;
      R_SetComputeViews(state, 19, 1, (const GfxShaderBufferView *const *)&views);
      p_view = &R_RT_Handle::GetWrappedBuffer(perSurfDataBuffer)->view;
      R_SetComputeViews(state, 2, 1, (const GfxShaderBufferView *const *)&p_view);
      v15 = &R_RT_Handle::GetWrappedBuffer(culledSubMeshBuffer)->view;
      R_SetComputeViews(state, 20, 1, (const GfxShaderBufferView *const *)&v15);
      v16 = &R_RT_Handle::GetWrappedBuffer(subMeshClusterOffsetsBuffer)->view;
      R_SetComputeViews(state, 21, 1, (const GfxShaderBufferView *const *)&v16);
      p_rwView = &R_RT_Handle::GetWrappedBuffer(clusterWorkgroupArgsBuffer)->rwView;
      R_SetComputeRWViewsWithCounters(state, 5, 1, (const GfxShaderBufferRWView *const *)&p_rwView, NULL);
      R_SetComputeShader(state, rgp.gpClusterWorkgroupGenPass);
      WrappedBuffer = R_RT_Handle::GetWrappedBuffer(clusterPassIndirectArgsBuffer);
      R_DispatchIndirect(state, WrappedBuffer->buffer, 0);
    }
  }
}

/*
==============
R_GP_GenerateClusterWorkgroupsAndVisBits
==============
*/
void R_GP_GenerateClusterWorkgroupsAndVisBits(ComputeCmdBufState *state, const GfxBackEndData *data, unsigned int passIndex, R_RT_BufferHandle *clusterPassIndirectArgsBuffer, R_RT_BufferHandle *subMeshWorkgroupArgsBuffer, R_RT_BufferHandle *perSurfDataBuffer, R_RT_BufferHandle *culledSubMeshBuffer, R_RT_BufferHandle *subMeshClusterOffsetsBuffer, R_RT_BufferHandle *prevCulledSubMeshBuffer, R_RT_BufferHandle *prevSubMeshClusterOffsetsBuffer, R_RT_BufferHandle *prevCulledTriClusterBuffer, R_RT_BufferHandle *clusterWorkgroupArgsBuffer, R_RT_BufferHandle *primeCulledTriClusterBuffer, R_RT_BufferHandle *primeClusterTriCountsBuffer)
{
  GPBackendPassData *v16; 
  const GfxWrappedRWBuffer *WrappedBuffer; 
  GfxShaderBufferView *views; 
  GfxShaderBufferView *p_view; 
  GfxShaderBufferView *v20; 
  GfxShaderBufferView *v21; 
  GfxShaderBufferView *v22; 
  R_RT_Handle *v23; 
  GfxShaderBufferView *v24; 
  R_RT_Handle *v25; 
  GfxShaderBufferView *v26; 
  R_RT_Handle *v27; 
  GfxShaderBufferRWView *p_rwView; 
  R_RT_Handle *v29; 
  GfxShaderBufferRWView *v30; 
  R_RT_Handle *v31; 
  GfxShaderBufferRWView *v32; 
  int dataa[8]; 

  v23 = prevSubMeshClusterOffsetsBuffer;
  v25 = prevCulledTriClusterBuffer;
  v27 = clusterWorkgroupArgsBuffer;
  v29 = primeCulledTriClusterBuffer;
  v31 = primeClusterTriCountsBuffer;
  v16 = &s_gpBackendFrameData[data->smpFrame].gpBackendPass[passIndex];
  if ( v16->dynSurfCount || v16->visibleSModelCollectionCount > 0 )
  {
    if ( v16->batchCount )
    {
      dataa[0] = rg.gpuCullTriSModels;
      dataa[1] = rg.gpuCullTriRigidModels;
      dataa[2] = rg.gpuCullTriSkinnedModels;
      dataa[4] = rg.gpuCullTriMinThreshold;
      dataa[5] = rg.gpuCullClusterMinThreshold;
      R_UploadAndSetComputeConstants(state, 7, dataa, 0x20u, NULL);
      views = &R_RT_Handle::GetWrappedBuffer(subMeshWorkgroupArgsBuffer)->view;
      R_SetComputeViews(state, 19, 1, (const GfxShaderBufferView *const *)&views);
      p_view = &R_RT_Handle::GetWrappedBuffer(perSurfDataBuffer)->view;
      R_SetComputeViews(state, 2, 1, (const GfxShaderBufferView *const *)&p_view);
      v20 = &R_RT_Handle::GetWrappedBuffer(culledSubMeshBuffer)->view;
      R_SetComputeViews(state, 20, 1, (const GfxShaderBufferView *const *)&v20);
      v21 = &R_RT_Handle::GetWrappedBuffer(subMeshClusterOffsetsBuffer)->view;
      R_SetComputeViews(state, 21, 1, (const GfxShaderBufferView *const *)&v21);
      v22 = &R_RT_Handle::GetWrappedBuffer(prevCulledSubMeshBuffer)->view;
      R_SetComputeViews(state, 22, 1, (const GfxShaderBufferView *const *)&v22);
      v24 = &R_RT_Handle::GetWrappedBuffer(v23)->view;
      R_SetComputeViews(state, 23, 1, (const GfxShaderBufferView *const *)&v24);
      v26 = &R_RT_Handle::GetWrappedBuffer(v25)->view;
      R_SetComputeViews(state, 24, 1, (const GfxShaderBufferView *const *)&v26);
      p_rwView = &R_RT_Handle::GetWrappedBuffer(v27)->rwView;
      R_SetComputeRWViewsWithCounters(state, 5, 1, (const GfxShaderBufferRWView *const *)&p_rwView, NULL);
      v30 = &R_RT_Handle::GetWrappedBuffer(v29)->rwView;
      R_SetComputeRWViewsWithCounters(state, 6, 1, (const GfxShaderBufferRWView *const *)&v30, NULL);
      v32 = &R_RT_Handle::GetWrappedBuffer(v31)->rwView;
      R_SetComputeRWViewsWithCounters(state, 7, 1, (const GfxShaderBufferRWView *const *)&v32, NULL);
      R_SetComputeShader(state, rgp.gpClusterWorkgroupAndVisbitsGenPass);
      WrappedBuffer = R_RT_Handle::GetWrappedBuffer(clusterPassIndirectArgsBuffer);
      R_DispatchIndirect(state, WrappedBuffer->buffer, 0);
    }
  }
}

/*
==============
R_GP_GenerateClutter
==============
*/
void R_GP_GenerateClutter(ComputeCmdBufState *state, const GfxBackEndData *data, unsigned int passIndex, const bool reactiveMotionPass)
{
  __int64 v5; 
  const char *v8; 
  GPBackendFrameData *v9; 
  __int64 v10; 
  unsigned int v11; 
  unsigned int reactiveMotionIndex; 
  float v13; 
  float v14; 
  StDiskTerrainSurface *v15; 
  unsigned __int64 v16; 
  __int64 v17; 
  unsigned int v18; 
  unsigned int v19; 
  unsigned int v20; 
  char v21; 
  __int64 v22; 
  GfxClutterCollection *clutterCollections; 
  GfxStaticModelCollection *v24; 
  const StTerrain *v25; 
  int terrainSurfaceIndex; 
  __int64 v27; 
  __int64 surfaceMapSetIndex; 
  StTerrainMaps *maps; 
  float v30; 
  float v31; 
  int v32; 
  const StTerrainClutterLayer *v33; 
  GfxStaticModel *v34; 
  const XModel *model; 
  int v36; 
  int v37; 
  float clutterLodBias; 
  double LodOutDist; 
  float *p_layerSize; 
  StDiskTerrainSurface *v41; 
  StreamKey *streamKey; 
  unsigned int ClutterTilesInstanceCount; 
  unsigned int size; 
  bool v45; 
  bool ClutterTilesCovered; 
  float v48; 
  unsigned int v50; 
  unsigned int v51; 
  float v52; 
  bool v53; 
  const StTerrainClutterLayer *v54; 
  StDiskTerrainSurface *v55; 
  unsigned int v56; 
  BOOL v57; 
  int v58; 
  GfxBackEndData *v59; 
  const GfxTexture *const *v60; 
  bool v61; 
  int v62; 
  ComputeShader *gpClutterCollectionGenPassForReactiveMotionModels; 
  int v64; 
  bool v65; 
  base_vec2_t<unsigned int> *tileCount; 
  __int64 v67; 
  bool count_1; 
  unsigned int count_4; 
  GfxShaderBufferRWView *views; 
  unsigned int v72; 
  int v73; 
  __int64 v74; 
  StDiskTerrainSurface *surface; 
  __int64 v76; 
  GfxShaderBufferView *p_view; 
  unsigned int v78; 
  int v79; 
  __int64 v80; 
  unsigned __int64 v81; 
  int v82; 
  const StTerrain *terrain; 
  GPBackendFrameData *v84; 
  GfxBackEndData *v85; 
  int integer; 
  GfxTexture *textures; 
  const GfxTexture *v88; 
  GfxTexture *v89[3]; 
  base_vec2_t<unsigned int> v90; 
  vec2_t coords; 
  base_vec2_t<unsigned int> v92; 
  int dataa[2]; 
  base_vec2_t<unsigned int> tileStart; 
  base_vec2_t<unsigned int> v95; 
  unsigned int v96; 
  unsigned int v97; 
  float v98; 
  float v99; 
  float v100; 
  unsigned int v101; 
  int v102; 
  unsigned int v103; 
  vec4_t quat; 
  unsigned int v105; 
  __int64 v106; 
  float v107; 
  float heightOffset; 
  float heightScale; 
  float v110; 
  float v111; 
  float v112; 
  GPClutterReactiveMotionModelInfoGpu clutterModelInfo; 

  v89[1] = (GfxTexture *)-2i64;
  v5 = passIndex;
  v85 = (GfxBackEndData *)data;
  v8 = "Generate Runtime Clutter Instances";
  if ( reactiveMotionPass )
    v8 = "Generate Runtime Clutter Instances (Reactive)";
  v89[2] = (GfxTexture *)state;
  if ( !state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_profile.h", 38, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
    __debugbreak();
  R_ProfBeginNamedEvent(state, v8);
  if ( (_DWORD)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1878, ASSERT_TYPE_ASSERT, "(passIndex == GFX_GP_PASS_CAMERA)", (const char *)&queryFormat, "passIndex == GFX_GP_PASS_CAMERA") )
    __debugbreak();
  v9 = &s_gpBackendFrameData[data->smpFrame];
  v84 = v9;
  v10 = (__int64)&v9->gpBackendPass[v5];
  v80 = v10;
  terrain = s_stGlob.terrain;
  if ( s_stGlob.terrain )
  {
    count_1 = 0;
    v11 = 0;
    count_4 = 0;
    LODWORD(v76) = 0;
    if ( reactiveMotionPass )
    {
      views = &R_ReactiveMotion_GetClutterSModelInstanceDataBuffer()->rwView;
      R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
      reactiveMotionIndex = data->reactiveMotionIndex;
      views = &R_ReactiveMotion_GetClutterCollectionGPUDataBuffer(reactiveMotionIndex)->rwView;
      R_SetComputeRWViewsWithCounters(state, 1, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
      views = &R_ReactiveMotion_GetClutterInstanceOffsetsBuffer(reactiveMotionIndex)->rwView;
      R_SetComputeRWViewsWithCounters(state, 4, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
      v10 = v80;
    }
    else
    {
      views = &rgp.world->smodels.smodelInstanceDataBuffer.rwView;
      R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
      views = &rgp.world->smodels.clutterCollectionGPUDataBuffer.rwView;
      R_SetComputeRWViewsWithCounters(state, 1, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
      views = (GfxShaderBufferRWView *)&R_ReactiveMotion_GetClutterInstanceOffsetsBuffer(data->reactiveMotionIndex)->view;
      R_SetComputeViews(state, 7, 1, (const GfxShaderBufferView *const *)&views);
    }
    views = &rgp.world->smodels.clutterTintDataBuffer.rwView;
    R_SetComputeRWViewsWithCounters(state, 2, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
    views = (GfxShaderBufferRWView *)&rgp.world->smodels.clutterCollectionsDataBuffer.view;
    R_SetComputeViews(state, 1, 1, (const GfxShaderBufferView *const *)&views);
    views = (GfxShaderBufferRWView *)&terrain->clutterSamplePoints.samplePointBuffer.view;
    R_SetComputeViews(state, 3, 1, (const GfxShaderBufferView *const *)&views);
    views = (GfxShaderBufferRWView *)&v9->viewParmsBuffer.view;
    R_SetComputeViews(state, 5, 1, (const GfxShaderBufferView *const *)&views);
    integer = r_st_clutterTintSampleLevel->current.integer;
    LODWORD(p_view) = 0;
    v82 = -1;
    LODWORD(v74) = 0;
    v13 = 1.0 / v9->lodParamConsts.clutterLodScale;
    coords.v[0] = 0.0;
    coords.v[1] = 0.0;
    v14 = FLOAT_1_0;
    v15 = NULL;
    surface = NULL;
    views = NULL;
    v16 = ((unsigned __int64)rgp.world->smodels.clutterCollectionCount + 31) >> 5;
    v81 = v16;
    LODWORD(v17) = 0;
    v73 = 0;
    v18 = 0;
    v72 = 0;
    if ( (_DWORD)v16 )
    {
      v18 = *(_DWORD *)(v10 + 156);
      v72 = v18;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( v18 )
          {
LABEL_18:
            v19 = __lzcnt(v18);
            v20 = v19 + 32 * v17;
            v78 = v20;
            if ( v19 >= 0x20 )
            {
              LODWORD(v67) = 32;
              LODWORD(tileCount) = v19;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", tileCount, v67) )
                __debugbreak();
            }
            if ( ((0x80000000 >> v19) & v18) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
              __debugbreak();
            v72 = ~(0x80000000 >> v19) & v18;
            v21 = 1;
            v11 = count_4;
          }
          else
          {
            while ( 1 )
            {
              v17 = (unsigned int)(v17 + 1);
              v73 = v17;
              if ( (unsigned int)v17 >= (unsigned int)v16 )
                break;
              v18 = *(_DWORD *)(v10 + 4 * v17 + 156);
              v72 = v18;
              LODWORD(v16) = v81;
              if ( v18 )
                goto LABEL_18;
            }
            v21 = 0;
            v20 = v78;
          }
          if ( !v21 )
          {
            if ( reactiveMotionPass )
              R_ReactiveMotion_SetReactiveMotionClutterLayerCount(v85->reactiveMotionIndex, v11);
            goto LABEL_115;
          }
          v22 = v20;
          clutterCollections = rgp.world->smodels.clutterCollections;
          v24 = &rgp.world->smodels.collections[clutterCollections[v22].smodelCollectionIndex];
          v25 = terrain;
          if ( clutterCollections[v22].terrainSurfaceIndex >= terrain->surfaceCount )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1936, ASSERT_TYPE_ASSERT, "(clutterCollection.terrainSurfaceIndex < terrain->surfaceCount)", (const char *)&queryFormat, "clutterCollection.terrainSurfaceIndex < terrain->surfaceCount") )
              __debugbreak();
            v25 = terrain;
          }
          terrainSurfaceIndex = clutterCollections[v22].terrainSurfaceIndex;
          if ( v82 != terrainSurfaceIndex )
          {
            v27 = clutterCollections[v22].terrainSurfaceIndex;
            v82 = clutterCollections[v22].terrainSurfaceIndex;
            LOBYTE(terrainSurfaceIndex) = 1;
            LODWORD(v74) = terrainSurfaceIndex;
            v15 = &v25->surfaces[v27];
            surface = v15;
            surfaceMapSetIndex = v15->surfaceMapSetIndex;
            maps = v25->maps;
            views = (GfxShaderBufferRWView *)v15->combinedAlbedoMap;
            coords = R_ST_GetCameraCoords(&v84->lodParamConsts.lodOrigin, &v15->objToWld);
            v30 = 1.0 / (float)maps[surfaceMapSetIndex].paddedResolution;
            v31 = (float)(maps[surfaceMapSetIndex].mapResolution - 1) * v30;
            heightOffset = v15->heightOffset;
            heightScale = v15->heightScale;
            v110 = v31;
            v111 = v30 * 0.5;
            if ( rgp.world->smodels.clutterInstancePool.start >= 0x7FFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1956, ASSERT_TYPE_ASSERT, "(rgp.world->smodels.clutterInstancePool.start < ( 1 << 27 ) - 1)", (const char *)&queryFormat, "rgp.world->smodels.clutterInstancePool.start < ( 1 << 27 ) - 1") )
              __debugbreak();
            v32 = integer;
            if ( integer >= 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1957, ASSERT_TYPE_ASSERT, "(tintMipLevel < ( 1 << 3 ) - 1)", (const char *)&queryFormat, "tintMipLevel < ( 1 << 3 ) - 1") )
              __debugbreak();
            v105 = v32 | (16 * rgp.world->smodels.clutterInstancePool.start);
            v14 = 1.0 / (float)((float)v15->heightMap->width * v31);
          }
          if ( clutterCollections[v22].clutterLayerIndex >= v15->clutterLayerCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1963, ASSERT_TYPE_ASSERT, "(clutterCollection.clutterLayerIndex < surface->clutterLayerCount)", (const char *)&queryFormat, "clutterCollection.clutterLayerIndex < surface->clutterLayerCount") )
            __debugbreak();
          v33 = &v15->clutterLayers[clutterCollections[v22].clutterLayerIndex];
          v34 = &rgp.world->smodels.models[v24->smodelIndex];
          model = v34->model;
          if ( !v34->model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1969, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
            __debugbreak();
          v36 = 2 * v78;
          if ( (v34->flags & 0x40) != 0 )
            v36 |= 1u;
          dataa[0] = v36;
          v37 = (int)p_view;
          dataa[1] = (int)p_view;
          clutterLodBias = v84->lodParamConsts.clutterLodBias;
          LodOutDist = XModelGetLodOutDist(model);
          p_layerSize = (float *)&v33->layerSize;
          if ( R_ST_GetClutterTilesCovered(&coords, &v33->layerSize, (float)(*(float *)&LodOutDist - clutterLodBias) * v13, &v33->tileSizeUV, &tileStart, &v92) )
          {
            v41 = surface;
            if ( surface->clutterSampleBitmask.wordCount )
            {
              streamKey = surface->clutterSampleBitmask.streamKey;
              if ( streamKey )
              {
                if ( !Stream_GenericIsSafeToUse(streamKey) )
                  goto LABEL_52;
                v41 = surface;
              }
              ClutterTilesInstanceCount = R_ST_GetClutterTilesInstanceCount(v41, v33, &tileStart, &v92);
              if ( ClutterTilesInstanceCount )
                break;
            }
          }
LABEL_52:
          v15 = surface;
          v11 = count_4;
          LODWORD(v17) = v73;
          LODWORD(v16) = v81;
          v10 = v80;
          v18 = v72;
        }
        v79 = ClutterTilesInstanceCount + v37;
        size = rgp.world->smodels.clutterInstancePool.size;
        if ( ClutterTilesInstanceCount + v37 <= size )
          break;
        if ( size > 0x249F0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1997, ASSERT_TYPE_ASSERT, "(rgp.world->smodels.clutterInstancePool.size <= 150'000)", (const char *)&queryFormat, "rgp.world->smodels.clutterInstancePool.size <= MAX_GENERATED_CLUTTER_INSTANCES") )
          __debugbreak();
        R_WarnOncePerFrame(R_WARN_CLUTTER_GENERATION_LIMIT, rgp.world->smodels.clutterInstancePool.size);
        v15 = surface;
        v11 = count_4;
        LODWORD(v17) = v73;
        LODWORD(v16) = v81;
        v10 = v80;
        v18 = v72;
      }
      v45 = (v34->flags & 8) != 0 && R_ReactiveMotion_UsesClutterPass(v85->reactiveMotionIndex);
      ClutterTilesCovered = 0;
      v90 = 0i64;
      if ( v45 )
      {
        _XMM5 = LODWORD(v84->lodParamConsts.vertexDeformCutOffDist);
        v48 = v33->layerSize.v[1];
        v98 = (float)((float)(coords.v[0] / *p_layerSize) + 0.5) / v33->tileSizeUV.v[0];
        v99 = (float)(0.5 - (float)(coords.v[1] / v48)) / v33->tileSizeUV.v[1];
        __asm { vminss  xmm2, xmm5, xmm6; drawDistance }
        ClutterTilesCovered = R_ST_GetClutterTilesCovered(&coords, &v33->layerSize, *(const float *)&_XMM2, &v33->tileSizeUV, &v95, &v90);
        if ( ClutterTilesCovered )
        {
          v50 = v90.v[1];
          v51 = v90.v[0];
          if ( (unsigned int)(v76 + 32 * v90.v[0] * v90.v[1]) >= 0xF00 )
          {
            R_WarnOncePerFrame(R_WARN_CLUTTER_GENERATION_REACTIVE_TILES_OFFSET_LIMIT, 3840i64);
            ClutterTilesCovered = 0;
            v50 = v90.v[1];
            v51 = v90.v[0];
          }
          v96 = v51 + v95.v[0];
          v97 = v50 + v95.v[1];
          v52 = v84->lodParamConsts.vertexDeformCutOffDist / (float)(*p_layerSize * v33->tileSizeUV.v[0]);
          v100 = v52 * v52;
          v11 = count_4;
          v101 = count_4;
          v102 = v76;
          v103 = 32 * v51;
        }
        else
        {
          v11 = count_4;
        }
        if ( v11 >= 0x28 )
        {
          R_WarnOncePerFrame(R_WARN_CLUTTER_GENERATION_REACTIVE_LAYERS_LIMIT, 40i64);
          ClutterTilesCovered = 0;
        }
      }
      else
      {
        v11 = count_4;
      }
      v53 = reactiveMotionPass;
      if ( reactiveMotionPass )
        break;
      if ( ClutterTilesCovered )
        goto LABEL_77;
      v56 = 0;
      v55 = surface;
LABEL_79:
      if ( v53 )
      {
        if ( !v56 )
        {
          v15 = surface;
LABEL_82:
          v11 = count_4;
          goto LABEL_83;
        }
        tileStart = v95;
        v92 = v90;
        R_ReactiveMotion_GetClutterReactiveMotionModelInfoGPU(v85->reactiveMotionIndex, model, &clutterModelInfo);
        R_UploadAndSetComputeConstants(state, 3, &clutterModelInfo, 0x50u, NULL);
      }
      v57 = ClutterTilesCovered && v45 && v56;
      v58 = (unsigned __int8)v74;
      if ( count_1 != v57 )
        v58 = 1;
      LODWORD(v74) = v58;
      R_UploadAndSetComputeConstants(state, 1, dataa, 0x40u, NULL);
      if ( (_BYTE)v74 )
      {
        quat = v55->objToWld.quat;
        v106 = *(_QWORD *)v55->objToWld.origin.v;
        v107 = v55->objToWld.origin.v[2];
        v112 = v14 * *p_layerSize;
        R_UploadAndSetComputeConstants(state, 2, &quat, 0x40u, NULL);
        v15 = surface;
        if ( !surface->heightMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 2079, ASSERT_TYPE_ASSERT, "(surface->heightMap)", (const char *)&queryFormat, "surface->heightMap") )
          __debugbreak();
        v59 = v85;
        textures = (GfxTexture *)R_Texture_Get(v85, v15->heightMap->textureId);
        R_SetComputeTextures(state, 0, 1, (const GfxTexture *const *)&textures);
        if ( R_Texture_GetLevelCount(v59, (GfxTextureId)views->rwView) )
        {
          v88 = R_Texture_Get(v59, (GfxTextureId)views->rwView);
          v60 = &v88;
        }
        else
        {
          v89[0] = (GfxTexture *)R_Texture_GetDefault();
          v60 = (const GfxTexture *const *)v89;
        }
        R_SetComputeTextures(state, 5, 1, v60);
        p_view = &v15->clutterLayersBuffer.view;
        R_SetComputeViews(state, 2, 1, (const GfxShaderBufferView *const *)&p_view);
        p_view = &v15->clutterSampleBitmask.bitmaskBuffer.view;
        R_SetComputeViews(state, 4, 1, (const GfxShaderBufferView *const *)&p_view);
        v61 = ClutterTilesCovered && v45 && v56;
        count_1 = v61;
        if ( reactiveMotionPass )
        {
          R_SetComputeShader(state, rgp.gpReactiveMotionClutterGenPass);
          LOBYTE(v62) = 0;
          LODWORD(v74) = v62;
        }
        else
        {
          gpClutterCollectionGenPassForReactiveMotionModels = rgp.gpClutterCollectionGenPassForReactiveMotionModels;
          if ( !v61 )
            gpClutterCollectionGenPassForReactiveMotionModels = rgp.gpClutterCollectionGenPass;
          R_SetComputeShader(state, gpClutterCollectionGenPassForReactiveMotionModels);
          LOBYTE(v64) = 0;
          LODWORD(v74) = v64;
        }
      }
      else
      {
        v15 = surface;
      }
      R_Dispatch(state, v92.v[0], v92.v[1], 0x20u);
      if ( !v45 )
        goto LABEL_82;
      v65 = v56 == 0;
      v11 = count_4;
      if ( !v65 )
      {
        v11 = ++count_4;
        LODWORD(v76) = 32 * v90.v[0] * v90.v[1] + v76;
      }
LABEL_83:
      LODWORD(p_view) = v79;
      LODWORD(v17) = v73;
      LODWORD(v16) = v81;
      v10 = v80;
      v18 = v72;
    }
    if ( !v45 || !ClutterTilesCovered )
    {
      v15 = surface;
      goto LABEL_83;
    }
LABEL_77:
    v54 = v33;
    v55 = surface;
    v56 = R_ST_GetClutterTilesInstanceCount(surface, v54, &v95, &v90);
    v53 = reactiveMotionPass;
    goto LABEL_79;
  }
LABEL_115:
  R_ProfEndNamedEvent(state);
}

/*
==============
R_GP_GenerateDynSurfData
==============
*/
void R_GP_GenerateDynSurfData(ComputeCmdBufState *state, const GfxBackEndData *data, unsigned int passIndex, R_RT_BufferHandle *perSurfDataBuffer, R_RT_BufferHandle *batchSubMeshCountsBuffer, R_RT_BufferHandle *surfSubMeshOffsetsBuffer)
{
  __int64 smpFrame; 
  __int64 v9; 
  unsigned int *p_dynSurfCount; 
  bool v11; 
  GfxShaderBufferView *views[2]; 
  int dataa[4]; 

  smpFrame = data->smpFrame;
  v9 = passIndex;
  p_dynSurfCount = &s_gpBackendFrameData[smpFrame].gpBackendPass[v9].dynSurfCount;
  if ( *p_dynSurfCount )
  {
    dataa[0] = *p_dynSurfCount;
    v11 = passIndex != 1 || rg.useCompressedSunShadow != 3;
    dataa[1] = rg.gpuCulling && v11;
    dataa[2] = passIndex == 1;
    R_UploadAndSetComputeConstants(state, 4, dataa, 0x10u, NULL);
    views[0] = &gfxBuf.xsurfUGBDataBuffer.view;
    R_SetComputeViews(state, 12, 1, (const GfxShaderBufferView *const *)views);
    views[0] = &gfxBuf.xsurfResidencyBitsBuffer[0].view + 2 * smpFrame;
    R_SetComputeViews(state, 19, 1, (const GfxShaderBufferView *const *)views);
    views[0] = (GfxShaderBufferView *)((char *)&s_gpBackendFrameData[0].gpBackendPass[0].perDynSurfDataBuffer.view + 20544 * smpFrame + v9 * 8576);
    R_SetComputeViews(state, 15, 1, (const GfxShaderBufferView *const *)views);
    views[0] = (GfxShaderBufferView *)&R_RT_Handle::GetWrappedBuffer(perSurfDataBuffer)->rwView;
    R_SetComputeRWViewsWithCounters(state, 4, 1, (const GfxShaderBufferRWView *const *)views, NULL);
    views[0] = (GfxShaderBufferView *)&R_RT_Handle::GetWrappedBuffer(batchSubMeshCountsBuffer)->rwView;
    R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)views, NULL);
    views[0] = (GfxShaderBufferView *)&R_RT_Handle::GetWrappedBuffer(surfSubMeshOffsetsBuffer)->rwView;
    R_SetComputeRWViewsWithCounters(state, 1, 1, (const GfxShaderBufferRWView *const *)views, NULL);
    R_SetComputeShader(state, rgp.gpDynSurfDataGenPass);
    R_Dispatch(state, ((unsigned __int64)*p_dynSurfCount + 63) >> 6, 1u, 1u);
  }
}

/*
==============
R_GP_GenerateIndirectArgsFromCounter
==============
*/
void R_GP_GenerateIndirectArgsFromCounter(ComputeCmdBufState *state, const GfxBackEndData *data, unsigned int passIndex, unsigned int threadGroupSize, unsigned int counterByteOffset, unsigned int countBias, unsigned int countLimit, R_RT_BufferHandle *counterBuffer, R_RT_BufferHandle *indirectArgsBuffer)
{
  GfxShaderBufferView *views[2]; 
  int dataa[4]; 

  dataa[1] = counterByteOffset;
  dataa[0] = threadGroupSize;
  dataa[2] = countBias;
  dataa[3] = countLimit;
  R_UploadAndSetComputeConstants(state, 5, dataa, 0x10u, NULL);
  views[0] = &R_RT_Handle::GetWrappedBuffer(counterBuffer)->view;
  R_SetComputeViews(state, 0, 1, (const GfxShaderBufferView *const *)views);
  views[0] = (GfxShaderBufferView *)&R_RT_Handle::GetWrappedBuffer(indirectArgsBuffer)->rwView;
  R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)views, NULL);
  R_SetComputeShader(state, rgp.gpCovertSModelSurfCounterToIndirectArg);
  R_Dispatch(state, 1u, 1u, 1u);
}

/*
==============
R_GP_GenerateSModelSurfData
==============
*/
void R_GP_GenerateSModelSurfData(ComputeCmdBufState *state, const GfxBackEndData *data, unsigned int passIndex, R_RT_BufferHandle *smodelDataGenIndirectArgsBuffer, R_RT_BufferHandle *smodelSurfEmitBuffer, R_RT_BufferHandle *smodelSurfEmitCountBuffer, R_RT_BufferHandle *perSurfDataBuffer, R_RT_BufferHandle *smodelSurfCountBuffer, R_RT_BufferHandle *batchSubMeshCountsBuffer, R_RT_BufferHandle *surfSubMeshOffsetsBuffer)
{
  __int64 smpFrame; 
  GPBackendFrameData *v13; 
  GPBackendPassData *v14; 
  bool v15; 
  const GfxWrappedRWBuffer *WrappedBuffer; 
  GfxShaderBufferView *views; 
  GfxShaderBufferView *p_view; 
  GfxShaderBufferView *v19; 
  GfxShaderBufferView *v20; 
  GfxShaderBufferView *v21; 
  GfxShaderBufferView *v22; 
  R_RT_Handle *v23; 
  GfxShaderBufferRWView *p_rwView; 
  R_RT_Handle *v25; 
  GfxShaderBufferRWView *v26; 
  R_RT_Handle *v27; 
  GfxShaderBufferRWView *v28; 
  R_RT_Handle *v29; 
  GfxShaderBufferRWView *v30; 
  int dataa[8]; 

  smpFrame = data->smpFrame;
  v23 = perSurfDataBuffer;
  v25 = smodelSurfCountBuffer;
  v27 = batchSubMeshCountsBuffer;
  v29 = surfSubMeshOffsetsBuffer;
  v13 = &s_gpBackendFrameData[smpFrame];
  v14 = &v13->gpBackendPass[passIndex];
  if ( v14->visibleSModelCollectionCount )
  {
    dataa[0] = v14->dynSurfCount;
    dataa[2] = rg.distortion;
    dataa[3] = rg.subdiv;
    dataa[1] = 0x4000;
    v15 = passIndex != 1 || rg.useCompressedSunShadow != 3;
    dataa[4] = rg.gpuCulling && v15;
    dataa[5] = passIndex == 1;
    R_UploadAndSetComputeConstants(state, 3, dataa, 0x20u, NULL);
    R_UploadAndSetComputeConstants(state, 2, &v13->lodParamConsts, 0x40u, NULL);
    views = &rgp.world->smodels.smodelSurfUGBIndirectionBuffer.view;
    R_SetComputeViews(state, 11, 1, (const GfxShaderBufferView *const *)&views);
    p_view = &gfxBuf.xsurfUGBDataBuffer.view;
    R_SetComputeViews(state, 12, 1, (const GfxShaderBufferView *const *)&p_view);
    v19 = &gfxBuf.xsurfResidencyBitsBuffer[0].view + 2 * smpFrame;
    R_SetComputeViews(state, 19, 1, (const GfxShaderBufferView *const *)&v19);
    RB_ModelData_SetSModelSurfMatIndirection(state, 0xDu);
    v20 = &v14->smodelMatToBatchTableBuffer.view;
    R_SetComputeViews(state, 14, 1, (const GfxShaderBufferView *const *)&v20);
    v21 = &R_RT_Handle::GetWrappedBuffer(smodelSurfEmitBuffer)->view;
    R_SetComputeViews(state, 22, 1, (const GfxShaderBufferView *const *)&v21);
    v22 = &R_RT_Handle::GetWrappedBuffer(smodelSurfEmitCountBuffer)->view;
    R_SetComputeViews(state, 23, 1, (const GfxShaderBufferView *const *)&v22);
    p_rwView = &R_RT_Handle::GetWrappedBuffer(v23)->rwView;
    R_SetComputeRWViewsWithCounters(state, 4, 1, (const GfxShaderBufferRWView *const *)&p_rwView, NULL);
    v26 = &R_RT_Handle::GetWrappedBuffer(v25)->rwView;
    R_SetComputeRWViewsWithCounters(state, 2, 1, (const GfxShaderBufferRWView *const *)&v26, NULL);
    v28 = &R_RT_Handle::GetWrappedBuffer(v27)->rwView;
    R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&v28, NULL);
    v30 = &R_RT_Handle::GetWrappedBuffer(v29)->rwView;
    R_SetComputeRWViewsWithCounters(state, 1, 1, (const GfxShaderBufferRWView *const *)&v30, NULL);
    R_SetComputeShader(state, rgp.gpSModelSurfDataGenPass);
    WrappedBuffer = R_RT_Handle::GetWrappedBuffer(smodelDataGenIndirectArgsBuffer);
    R_DispatchIndirect(state, WrappedBuffer->buffer, 0);
  }
}

/*
==============
R_GP_GenerateSModelSurfs
==============
*/
void R_GP_GenerateSModelSurfs(ComputeCmdBufState *state, const GfxBackEndData *data, unsigned int passIndex, R_RT_BufferHandle *smodelWorkgroupCounterBuffer, R_RT_BufferHandle *smodelWorkgroupArgsBuffer, R_RT_BufferHandle *smodelSurfEmitBuffer, R_RT_BufferHandle *smodelSurfEmitCountBuffer)
{
  GPBackendFrameData *v9; 
  __int64 v10; 
  GfxWrappedRWBuffer *p_clutterCollectionGPUDataBuffer; 
  unsigned int rwView; 
  const GfxWrappedRWBuffer *WrappedBuffer; 
  GfxShaderBufferView *p_view; 
  GfxShaderBufferView *v15; 
  GfxShaderBufferView *v16; 
  GfxShaderBufferView *v17; 
  GfxShaderBufferView *v18; 
  GfxShaderBufferView *v19; 
  GfxShaderBufferRWView *p_rwView; 
  GfxShaderBufferRWView *v21; 
  GfxShaderBufferView *views; 

  v9 = &s_gpBackendFrameData[data->smpFrame];
  v10 = passIndex;
  if ( v9->gpBackendPass[v10].visibleSModelCollectionCount )
  {
    R_UploadAndSetComputeConstants(state, 2, &v9->lodParamConsts, 0x40u, NULL);
    p_clutterCollectionGPUDataBuffer = &rgp.world->smodels.clutterCollectionGPUDataBuffer;
    rwView = rgp.world->smodels.clutterCollectionGPUDataBuffer.rwView.rwView;
    if ( rwView == 3 || !rwView || !rgp.world->smodels.clutterCollectionGPUDataBuffer.data || rgp.world->smodels.clutterCollectionGPUDataBuffer.view.view <= 1 )
      p_clutterCollectionGPUDataBuffer = (GfxWrappedRWBuffer *)&gfxBuf.dummyStructuredBuffer8;
    views = &v9->gpBackendPass[v10].smodelCollExpansionArgsBuffer.view;
    R_SetComputeViews(state, 8, 1, (const GfxShaderBufferView *const *)&views);
    RB_ModelData_SetSModelCollectionsData(state, 9u);
    RB_ModelData_SetSModelExpansionData(state, 0xAu);
    RB_ModelData_SetComputeResources(state, 4u, 3u);
    p_view = &v9->viewParmsBuffer.view;
    R_SetComputeViews(state, 5, 1, (const GfxShaderBufferView *const *)&p_view);
    v15 = &rgp.world->smodels.splinedModelInstanceBoundsBuffer.view;
    R_SetComputeViews(state, 16, 1, (const GfxShaderBufferView *const *)&v15);
    v16 = &rgp.world->smodels.modelStaticIndirectionBuffer.view;
    R_SetComputeViews(state, 17, 1, (const GfxShaderBufferView *const *)&v16);
    v17 = &p_clutterCollectionGPUDataBuffer->view;
    R_SetComputeViews(state, 18, 1, (const GfxShaderBufferView *const *)&v17);
    v18 = &v9->transientVisBitsBuffer.view;
    R_SetComputeViews(state, 20, 1, (const GfxShaderBufferView *const *)&v18);
    v19 = &R_RT_Handle::GetWrappedBuffer(smodelWorkgroupArgsBuffer)->view;
    R_SetComputeViews(state, 21, 1, (const GfxShaderBufferView *const *)&v19);
    p_rwView = &R_RT_Handle::GetWrappedBuffer(smodelSurfEmitCountBuffer)->rwView;
    R_SetComputeRWViewsWithCounters(state, 2, 1, (const GfxShaderBufferRWView *const *)&p_rwView, NULL);
    v21 = &R_RT_Handle::GetWrappedBuffer(smodelSurfEmitBuffer)->rwView;
    R_SetComputeRWViewsWithCounters(state, 3, 1, (const GfxShaderBufferRWView *const *)&v21, NULL);
    R_SetComputeShader(state, rgp.gpSModelSurfGenPass);
    WrappedBuffer = R_RT_Handle::GetWrappedBuffer(smodelWorkgroupCounterBuffer);
    R_DispatchIndirect(state, WrappedBuffer->buffer, 0);
  }
}

/*
==============
R_GP_GenerateSModelWorkgroups
==============
*/
void R_GP_GenerateSModelWorkgroups(ComputeCmdBufState *state, const GfxBackEndData *data, unsigned int passIndex, R_RT_BufferHandle *smodelWorkgroupCounterBuffer, R_RT_BufferHandle *smodelWorkgroupArgsBuffer)
{
  __int64 v7; 
  __int64 v8; 
  const R_RT_Surface *Surface; 
  unsigned int *v10; 
  GfxWrappedRWBuffer *p_clutterCollectionGPUDataBuffer; 
  unsigned int rwView; 
  GfxShaderBufferView *p_view; 
  GfxShaderBufferRWView *p_rwView; 
  GfxShaderBufferRWView *v15; 
  R_RT_Handle v16; 
  R_RT_Handle v17; 
  GfxShaderBufferRWView *views; 
  GfxShaderBufferView *v19; 

  v7 = 20544i64 * data->smpFrame;
  v8 = passIndex;
  v16 = smodelWorkgroupCounterBuffer->R_RT_Handle;
  R_SetComputeShader(state, rgp.gpClearComputeIndirectArgs);
  Surface = R_RT_Handle::GetSurface(&v16);
  if ( (Surface->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  views = &Surface->m_buffer.m_wrappedBuffer.rwView;
  R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
  R_Dispatch(state, 1u, 1u, 1u);
  v17 = smodelWorkgroupCounterBuffer->R_RT_Handle;
  R_HW_AddResourceTransition(state, &v17, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  v10 = (unsigned int *)((char *)&s_gpBackendFrameData[0].gpBackendPass[v8].visibleSModelCollectionCount + v7);
  if ( *v10 )
  {
    p_clutterCollectionGPUDataBuffer = &rgp.world->smodels.clutterCollectionGPUDataBuffer;
    rwView = rgp.world->smodels.clutterCollectionGPUDataBuffer.rwView.rwView;
    if ( rwView == 3 || !rwView || !rgp.world->smodels.clutterCollectionGPUDataBuffer.data || rgp.world->smodels.clutterCollectionGPUDataBuffer.view.view <= 1 )
      p_clutterCollectionGPUDataBuffer = (GfxWrappedRWBuffer *)&gfxBuf.dummyStructuredBuffer8;
    v19 = (GfxShaderBufferView *)((char *)&s_gpBackendFrameData[0].gpBackendPass[0].smodelCollExpansionArgsBuffer.view + v8 * 8576 + v7);
    R_SetComputeViews(state, 8, 1, (const GfxShaderBufferView *const *)&v19);
    RB_ModelData_SetSModelCollectionsData(state, 9u);
    p_view = &p_clutterCollectionGPUDataBuffer->view;
    R_SetComputeViews(state, 18, 1, (const GfxShaderBufferView *const *)&p_view);
    p_rwView = &R_RT_Handle::GetWrappedBuffer(smodelWorkgroupCounterBuffer)->rwView;
    R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&p_rwView, NULL);
    v15 = &R_RT_Handle::GetWrappedBuffer(smodelWorkgroupArgsBuffer)->rwView;
    R_SetComputeRWViewsWithCounters(state, 1, 1, (const GfxShaderBufferRWView *const *)&v15, NULL);
    R_SetComputeShader(state, rgp.gpSModelWorkgroupGenPass);
    R_Dispatch(state, *v10, 1u, 1u);
  }
}

/*
==============
R_GP_GenerateSubMeshWorkgroups
==============
*/
void R_GP_GenerateSubMeshWorkgroups(ComputeCmdBufState *state, const GfxBackEndData *data, unsigned int passIndex, R_RT_BufferHandle *subMeshWorkgroupGenIndirectArgs, R_RT_BufferHandle *smodelSurfCountBuffer, R_RT_BufferHandle *perSurfDataBuffer, R_RT_BufferHandle *batchSubMeshOffsetsBuffer, R_RT_BufferHandle *surfSubMeshOffsetsBuffer, R_RT_BufferHandle *subMeshWorkgroupArgsBuffer)
{
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  const GfxWrappedRWBuffer *WrappedBuffer; 
  GfxShaderBufferView *views; 
  GfxShaderBufferView *p_view; 
  GfxShaderBufferView *v17; 
  GfxShaderBufferView *v18; 
  GfxShaderBufferRWView *p_rwView; 
  int v20[8]; 
  __int64 dataa[3]; 
  __int64 v22; 
  _BOOL8 v23; 
  __int64 v24; 

  v11 = 20544i64 * data->smpFrame;
  v12 = passIndex;
  v13 = v12 * 8576 + v11;
  if ( *(unsigned int *)((char *)&s_gpBackendFrameData[0].gpBackendPass[v12].dynSurfCount + v11) || *(int *)((char *)&s_gpBackendFrameData[0].gpBackendPass[0].visibleSModelCollectionCount + v13) > 0 )
  {
    if ( *(volatile int *)((char *)&s_gpBackendFrameData[0].gpBackendPass[0].batchCount + v13) )
    {
      v22 = 0i64;
      v23 = 0i64;
      memset(dataa, 0, sizeof(dataa));
      v24 = 0i64;
      HIDWORD(v22) = *(unsigned int *)((char *)&s_gpBackendFrameData[0].gpBackendPass[v12].dynSurfCount + v11);
      v23 = passIndex == 1;
      R_UploadAndSetComputeConstants(state, 0, dataa, 0x30u, NULL);
      v20[0] = rg.gpuCullTriClusterSModels;
      v20[1] = rg.gpuCullTriClusterRigidModels;
      v20[2] = rg.gpuCullTriClusterSkinnedModels;
      v20[4] = rg.gpuCullTriMinThreshold;
      v20[5] = rg.gpuCullClusterMinThreshold;
      R_UploadAndSetComputeConstants(state, 7, v20, 0x20u, NULL);
      views = &R_RT_Handle::GetWrappedBuffer(smodelSurfCountBuffer)->view;
      R_SetComputeViews(state, 16, 1, (const GfxShaderBufferView *const *)&views);
      p_view = &R_RT_Handle::GetWrappedBuffer(perSurfDataBuffer)->view;
      R_SetComputeViews(state, 2, 1, (const GfxShaderBufferView *const *)&p_view);
      v17 = &R_RT_Handle::GetWrappedBuffer(batchSubMeshOffsetsBuffer)->view;
      R_SetComputeViews(state, 17, 1, (const GfxShaderBufferView *const *)&v17);
      v18 = &R_RT_Handle::GetWrappedBuffer(surfSubMeshOffsetsBuffer)->view;
      R_SetComputeViews(state, 18, 1, (const GfxShaderBufferView *const *)&v18);
      p_rwView = &R_RT_Handle::GetWrappedBuffer(subMeshWorkgroupArgsBuffer)->rwView;
      R_SetComputeRWViewsWithCounters(state, 1, 1, (const GfxShaderBufferRWView *const *)&p_rwView, NULL);
      R_SetComputeShader(state, rgp.gpSubMeshWorkgroupGenPass);
      WrappedBuffer = R_RT_Handle::GetWrappedBuffer(subMeshWorkgroupGenIndirectArgs);
      R_DispatchIndirect(state, WrappedBuffer->buffer, 0);
    }
  }
}

/*
==============
R_GP_GetPassBatchCount
==============
*/
__int64 R_GP_GetPassBatchCount(const GfxBackEndData *data, unsigned int passIndex)
{
  return (unsigned int)s_gpBackendFrameData[data->smpFrame].gpBackendPass[passIndex].batchCount;
}

/*
==============
R_GP_GetPassDynSurfCount
==============
*/
__int64 R_GP_GetPassDynSurfCount(const GfxBackEndData *data, unsigned int passIndex)
{
  return s_gpBackendFrameData[data->smpFrame].gpBackendPass[passIndex].dynSurfCount;
}

/*
==============
R_GP_HasWorkItems
==============
*/
bool R_GP_HasWorkItems(const GfxBackEndData *data, unsigned int passIndex)
{
  GPBackendFrameData *v2; 
  __int64 v3; 

  v2 = &s_gpBackendFrameData[data->smpFrame];
  v3 = passIndex;
  return (v2->gpBackendPass[v3].dynSurfCount || v2->gpBackendPass[v3].visibleSModelCollectionCount > 0) && v2->gpBackendPass[v3].batchCount;
}

/*
==============
R_GP_InitBuffers
==============
*/
void R_GP_InitBuffers(void)
{
  unsigned int *clutterCollectionVisData; 
  unsigned int i; 
  __int64 v2; 
  GfxWrappedBuffer *p_transientVisBitsBuffer; 
  void **p_data; 
  __int64 v5; 
  bool v6; 
  GPReadBackRing *v7; 
  GPReadBackRing *v8; 
  __int64 v9; 
  GfxGPReadBackInfo *v10; 
  volatile unsigned __int64 *v11; 
  GfxWrappedBuffer *v12; 
  __int64 v13; 

  clutterCollectionVisData = s_gpBackendFrameData[0].gpBackendPass[1].clutterCollectionVisData;
  for ( i = 0; i < 2; ++i )
  {
    clutterCollectionVisData[2951] = i;
    memset_0(s_gpFrontend, 0, 0x38028ui64);
    s_gpFrontend[0].typed[0].surfsBuffer = (GfxGPDynSurf *)s_gpFrontend;
    s_gpFrontend[0].typed[1].surfsBuffer = s_gpFrontend[0].skinnedSurfs;
    s_gpFrontend[0].passIndex = 0;
    memset_0(clutterCollectionVisData - 2183, 0, 0x9Cui64);
    memset_0(clutterCollectionVisData - 96, 0, 0xCCui64);
    *((_QWORD *)clutterCollectionVisData - 22) = 0i64;
    *((_QWORD *)clutterCollectionVisData - 21) = 0i64;
    *(clutterCollectionVisData - 40) = 0;
    *(clutterCollectionVisData - 45) = 0;
    memset_0(clutterCollectionVisData - 2144, 0, 0x2000ui64);
    memset_0(&s_gpFrontend[1], 0, sizeof(GPFrontendData));
    s_gpFrontend[1].typed[0].surfsBuffer = s_gpFrontend[1].rigidSurfs;
    s_gpFrontend[1].typed[1].surfsBuffer = s_gpFrontend[1].skinnedSurfs;
    s_gpFrontend[1].passIndex = 1;
    memset_0(clutterCollectionVisData - 39, 0, 0x9Cui64);
    memset_0(clutterCollectionVisData + 2048, 0, 0xCCui64);
    *((_QWORD *)clutterCollectionVisData + 1050) = 0i64;
    *((_QWORD *)clutterCollectionVisData + 1051) = 0i64;
    clutterCollectionVisData[2104] = 0;
    clutterCollectionVisData[2099] = 1;
    memset_0(clutterCollectionVisData, 0, 0x2000ui64);
    clutterCollectionVisData += 5136;
  }
  v2 = 2i64;
  s_gpCurBackendFrameData = NULL;
  p_transientVisBitsBuffer = &s_gpBackendFrameData[0].transientVisBitsBuffer;
  s_gpGlob = 0;
  v12 = &s_gpBackendFrameData[0].transientVisBitsBuffer;
  v13 = 2i64;
  do
  {
    R_CreateGfxWrappedBuffer((GfxWrappedBuffer *)((char *)p_transientVisBitsBuffer - 3280), GfxWrappedBuffer_Raw, 1, 0xC60u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "GPU Pipeline View Parms buffer");
    R_CreateGfxWrappedBuffer(p_transientVisBitsBuffer, GfxWrappedBuffer_Raw, 4, 0x30u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "GPU Pipeline Transient Visibility Bits Buffer");
    p_data = &p_transientVisBitsBuffer[-377].data;
    *(_QWORD *)&p_transientVisBitsBuffer[-102].view.view = p_transientVisBitsBuffer[-102].view.resource;
    v5 = 2i64;
    p_transientVisBitsBuffer[1].buffer = (ID3D12Resource *)p_transientVisBitsBuffer->data;
    do
    {
      R_CreateGfxWrappedBuffer((GfxWrappedBuffer *)(p_data - 5), GfxWrappedBuffer_Raw, 1, 0x80000u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "GPU Pipeline cpu generated per surf data");
      R_CreateGfxWrappedBuffer((GfxWrappedBuffer *)p_data, GfxWrappedBuffer_Raw, 1, 0x70000u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "GPU Pipeline Rigid Surf Cull Args buffer");
      R_CreateGfxWrappedBuffer((GfxWrappedBuffer *)(p_data + 5), GfxWrappedBuffer_Raw, 1, 0x38000u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "GPU Pipeline Skinned Surf Cull Args buffer");
      R_CreateGfxWrappedBuffer((GfxWrappedBuffer *)(p_data + 10), GfxWrappedBuffer_Raw, 8, 0x4000u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "GPU Pipeline SModel Collection CPU Expansion Args");
      R_CreateGfxWrappedBuffer((GfxWrappedBuffer *)(p_data + 15), GfxWrappedBuffer_Raw, 4, 0x84000u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "GPU Pipeline SModel Mat To Batch Table");
      *(p_data - 1) = *(p_data - 2);
      p_data[4] = p_data[3];
      p_data[9] = p_data[8];
      p_data[14] = p_data[13];
      p_data[19] = p_data[18];
      p_data += 1072;
      --v5;
    }
    while ( v5 );
    p_transientVisBitsBuffer = v12 + 642;
    v6 = v13-- == 1;
    v12 += 642;
  }
  while ( !v6 );
  v7 = s_gpReadBackRing;
  do
  {
    v8 = v7;
    v9 = 4i64;
    do
    {
      v10 = (GfxGPReadBackInfo *)PMem_Alloc(0x40ui64, 0x40ui64, MEM_POOL_GPU_PRIVATE, PMEM_STACK_GAME, "GP Readback Info");
      v8->readBackInfoGPU[0] = v10;
      v8 = (GPReadBackRing *)((char *)v8 + 8);
      *(_QWORD *)&v10->preocclusionTriangleCount = 0i64;
      *(_QWORD *)&v10->preocclusionMaxBatchIndexCount = 0i64;
      *(_QWORD *)&v10->postocclusionTriangleCount = 0i64;
      *(_QWORD *)&v10->postocclusionMaxBatchIndexCount = 0i64;
      *(_QWORD *)&v10->emittedStaticSurfCount = 0i64;
      *(_QWORD *)&v10->subMeshCount = 0i64;
      *(_QWORD *)&v10->pad1 = 0i64;
      *(_QWORD *)&v10->pad3 = 0i64;
      --v9;
    }
    while ( v9 );
    v11 = (volatile unsigned __int64 *)PMem_Alloc(8ui64, 0x40ui64, MEM_POOL_GPU_PRIVATE, PMEM_STACK_GAME, "ReadBack Ring Write Fence");
    v7->writeFenceAddr = v11;
    *v11 = 0i64;
    v7->writeFenceCounter = 0i64;
    v7->lastReadPos = 1i64;
    R_CreateGfxWrappedBuffer(&v7->readBackBuffer, GfxWrappedBuffer_Structured, 64, 1u, GFX_DATA_FORMAT_R32_UINT, 9u, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, NULL, NULL, "GP Readback Info Buffer");
    *(_QWORD *)&v7->readbackInfoCPU.preocclusionTriangleCount = 0i64;
    *(_QWORD *)&v7->readbackInfoCPU.preocclusionMaxBatchIndexCount = 0i64;
    *(_QWORD *)&v7->readbackInfoCPU.postocclusionTriangleCount = 0i64;
    *(_QWORD *)&v7->readbackInfoCPU.postocclusionMaxBatchIndexCount = 0i64;
    *(_QWORD *)&v7->readbackInfoCPU.emittedStaticSurfCount = 0i64;
    *(_QWORD *)&v7->readbackInfoCPU.subMeshCount = 0i64;
    *(_QWORD *)&v7->readbackInfoCPU.pad1 = 0i64;
    *(_QWORD *)&v7->readbackInfoCPU.pad3 = 0i64;
    ++v7;
    --v2;
  }
  while ( v2 );
}

/*
==============
R_GP_InitDrawIndirectArgs
==============
*/
void R_GP_InitDrawIndirectArgs(ComputeCmdBufState *state, const GfxBackEndData *data, unsigned int passIndex, bool isPrepass, R_RT_BufferHandle *batchSubMeshOffsetsBuffer, R_RT_BufferHandle *subMeshClusterOffsetsBuffer, R_RT_BufferHandle *clusterTriOffsetsBuffer, R_RT_BufferHandle *indirectArgsBuffer)
{
  __int64 smpFrame; 
  unsigned __int64 v12; 
  GPBackendFrameData *v13; 
  const GfxWrappedRWBuffer *WrappedBuffer; 
  _DWORD *v15; 
  bool v16; 
  int v17; 
  __int64 batchCount; 
  GfxShaderBufferView *views; 
  R_RT_Handle *v20; 
  GfxShaderBufferView *p_view; 
  R_RT_Handle *v22; 
  GfxShaderBufferView *v23; 
  GfxShaderBufferRWView *p_rwView; 
  R_RT_Handle v25; 
  int dataa[8]; 

  v20 = subMeshClusterOffsetsBuffer;
  v22 = clusterTriOffsetsBuffer;
  smpFrame = data->smpFrame;
  v12 = passIndex;
  v13 = &s_gpBackendFrameData[smpFrame];
  if ( s_gpBackendFrameData[smpFrame].gpBackendPass[v12].batchCount )
  {
    WrappedBuffer = R_RT_Handle::GetWrappedBuffer(indirectArgsBuffer);
    R_GP_ClearBufferToZero(state, WrappedBuffer, 0x90000u, 0);
    v25 = indirectArgsBuffer->R_RT_Handle;
    R_HW_AddResourceTransition(state, &v25, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(state);
  }
  v15 = (_DWORD *)((char *)s_gpBackendFrameData + v12 * 8576 + smpFrame * 20544);
  if ( (v15[33] || (int)v15[16] > 0) && *v15 )
  {
    v16 = isPrepass && !passIndex;
    dataa[0] = v13->gpBackendPass[v12].batchCount;
    v17 = 2621440;
    if ( v16 )
      v17 = 7864320;
    dataa[4] = v17;
    R_UploadAndSetComputeConstants(state, 6, dataa, 0x20u, NULL);
    batchCount = v13->gpBackendPass[v12].batchCount;
    views = &R_RT_Handle::GetWrappedBuffer(batchSubMeshOffsetsBuffer)->view;
    R_SetComputeViews(state, 17, 1, (const GfxShaderBufferView *const *)&views);
    p_view = &R_RT_Handle::GetWrappedBuffer(v20)->view;
    R_SetComputeViews(state, 21, 1, (const GfxShaderBufferView *const *)&p_view);
    v23 = &R_RT_Handle::GetWrappedBuffer(v22)->view;
    R_SetComputeViews(state, 15, 1, (const GfxShaderBufferView *const *)&v23);
    p_rwView = &R_RT_Handle::GetWrappedBuffer(indirectArgsBuffer)->rwView;
    R_SetComputeRWViewsWithCounters(state, 1, 1, (const GfxShaderBufferRWView *const *)&p_rwView, NULL);
    R_SetComputeShader(state, rgp.gpInitDrawIndirectArgs);
    R_Dispatch(state, (unsigned __int64)(batchCount + 63) >> 6, 1u, 1u);
  }
}

/*
==============
R_GP_InitFrame
==============
*/
void R_GP_InitFrame(const GfxBackEndData *data, const GfxViewInfo *viewInfo)
{
  __int64 smpFrame; 
  GPBackendFrameData *v3; 
  GPTypedSurfData *v4; 
  unsigned int v5; 
  volatile int *p_visibleSModelCollectionCount; 
  volatile int *p_typedSurfCount; 
  __int64 v8; 
  const GfxBackEndData *dataa; 

  smpFrame = data->smpFrame;
  dataa = data;
  Sys_AddWorkerCmd(WRKCMD_UGB_INIT_FRAME, &dataa);
  v3 = &s_gpBackendFrameData[smpFrame];
  s_gpCurBackendFrameData = v3;
  if ( v3->smpFrame != (_DWORD)smpFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 769, ASSERT_TYPE_ASSERT, "(s_gpCurBackendFrameData->smpFrame == smpFrame)", (const char *)&queryFormat, "s_gpCurBackendFrameData->smpFrame == smpFrame") )
    __debugbreak();
  v4 = &s_gpFrontend[0].typed[1];
  v5 = 0;
  p_visibleSModelCollectionCount = &v3->gpBackendPass[0].visibleSModelCollectionCount;
  do
  {
    if ( *((_DWORD *)p_visibleSModelCollectionCount + 2122) != v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 776, ASSERT_TYPE_ASSERT, "(gpBackendPass->passIndex == passIndex)", (const char *)&queryFormat, "gpBackendPass->passIndex == passIndex") )
      __debugbreak();
    *((_DWORD *)p_visibleSModelCollectionCount - 16) = 0;
    p_typedSurfCount = &v4[-1].typedSurfCount;
    *p_visibleSModelCollectionCount = 0;
    v8 = 2i64;
    do
    {
      *p_typedSurfCount = 0;
      p_typedSurfCount += 4;
      --v8;
    }
    while ( v8 );
    if ( !v4[-1].surfsBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 799, ASSERT_TYPE_ASSERT, "(gpFrontend->typed[GP_SURF_RIGID].surfsBuffer)", (const char *)&queryFormat, "gpFrontend->typed[GP_SURF_RIGID].surfsBuffer") )
      __debugbreak();
    if ( !v4->surfsBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 800, ASSERT_TYPE_ASSERT, "(gpFrontend->typed[GP_SURF_SKINNED].surfsBuffer)", (const char *)&queryFormat, "gpFrontend->typed[GP_SURF_SKINNED].surfsBuffer") )
      __debugbreak();
    ++v5;
    p_visibleSModelCollectionCount += 2144;
    v4 = (GPTypedSurfData *)((char *)v4 + 229416);
  }
  while ( v5 < 2 );
}

/*
==============
R_GP_InitIndirectArgsFromPrefixSum
==============
*/
void R_GP_InitIndirectArgsFromPrefixSum(ComputeCmdBufState *state, const GfxBackEndData *data, unsigned int passIndex, unsigned int ppsElementCount, unsigned int nextPPSumTileSize, unsigned int ppsElementLimit, unsigned int ppsNextPassElementLimit, R_RT_BufferHandle *ppSumElemCountBuffer, R_RT_BufferHandle *offsetsBuffer, R_RT_BufferHandle *nextPassElemCountBuffer, R_RT_BufferHandle *nextPassIndirectArgsBuffer, R_RT_BufferHandle *nextPPSumIndirectArgsBuffer)
{
  GPBackendPassData *v14; 
  unsigned __int16 m_surfaceID; 
  unsigned __int16 v16; 
  GfxShaderBufferView *p_view; 
  GfxShaderBufferRWView *p_rwView; 
  GfxShaderBufferRWView *v19; 
  GfxShaderBufferRWView *v20; 
  GfxShaderBufferView *views; 
  R_RT_Handle *v22; 
  GfxShaderBufferView *v23; 
  GfxShaderBufferRWView *v24; 
  GfxShaderBufferRWView *v25; 
  GfxShaderBufferRWView *v26; 
  int dataa[8]; 

  v22 = offsetsBuffer;
  v14 = &s_gpBackendFrameData[data->smpFrame].gpBackendPass[passIndex];
  if ( (v14->dynSurfCount || v14->visibleSModelCollectionCount > 0) && v14->batchCount )
  {
    m_surfaceID = ppSumElemCountBuffer->m_surfaceID;
    v16 = ppSumElemCountBuffer->m_surfaceID;
    if ( ppSumElemCountBuffer->m_surfaceID && ppsElementCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 2416, ASSERT_TYPE_ASSERT, "(!useIndirectElemCount || !ppsElementCount)", (const char *)&queryFormat, "!useIndirectElemCount || !ppsElementCount") )
      __debugbreak();
    dataa[1] = ppsElementCount;
    dataa[0] = m_surfaceID != 0;
    dataa[2] = nextPPSumTileSize;
    dataa[3] = ppsElementLimit;
    dataa[4] = ppsNextPassElementLimit;
    R_UploadAndSetComputeConstants(state, 0, dataa, 0x20u, NULL);
    if ( v16 )
      p_view = &R_RT_Handle::GetWrappedBuffer(ppSumElemCountBuffer)->view;
    else
      p_view = &gfxBuf.dummyBuffer.view;
    views = p_view;
    R_SetComputeViews(state, 1, 1, (const GfxShaderBufferView *const *)&views);
    v23 = &R_RT_Handle::GetWrappedBuffer(v22)->view;
    R_SetComputeViews(state, 2, 1, (const GfxShaderBufferView *const *)&v23);
    p_rwView = &gfxBuf.dummyRWBuffer.rwView;
    if ( nextPassElemCountBuffer->m_surfaceID )
      v19 = &R_RT_Handle::GetWrappedBuffer(nextPassElemCountBuffer)->rwView;
    else
      v19 = &gfxBuf.dummyRWBuffer.rwView;
    v24 = v19;
    R_SetComputeRWViewsWithCounters(state, 2, 1, (const GfxShaderBufferRWView *const *)&v24, NULL);
    if ( nextPassIndirectArgsBuffer->m_surfaceID )
      v20 = &R_RT_Handle::GetWrappedBuffer(nextPassIndirectArgsBuffer)->rwView;
    else
      v20 = &gfxBuf.dummyRWBuffer.rwView;
    v25 = v20;
    R_SetComputeRWViewsWithCounters(state, 3, 1, (const GfxShaderBufferRWView *const *)&v25, NULL);
    if ( nextPPSumIndirectArgsBuffer->m_surfaceID )
      p_rwView = &R_RT_Handle::GetWrappedBuffer(nextPPSumIndirectArgsBuffer)->rwView;
    v26 = p_rwView;
    R_SetComputeRWViewsWithCounters(state, 4, 1, (const GfxShaderBufferRWView *const *)&v26, NULL);
    R_SetComputeShader(state, rgp.gpPrefixSumInitIndirectArgs);
    R_Dispatch(state, 1u, 1u, 1u);
  }
}

/*
==============
R_GP_IsBatchIndexValid
==============
*/
bool R_GP_IsBatchIndexValid(unsigned __int16 batchIndex, const GfxBackEndData *data, unsigned int passIndex)
{
  return batchIndex < s_gpBackendFrameData[data->smpFrame].gpBackendPass[passIndex].batchCount;
}

/*
==============
R_GP_IsCullingEnabled
==============
*/
bool R_GP_IsCullingEnabled(unsigned int passIndex)
{
  return (passIndex != 1 || rg.useCompressedSunShadow != 3) && rg.gpuCulling;
}

/*
==============
R_GP_MapSModelMaterialToBatch
==============
*/
void R_GP_MapSModelMaterialToBatch(unsigned int passIndex, unsigned int sceneViewType, unsigned int gpBatchIndex, unsigned int smodelMaterialIndex)
{
  __int64 v5; 
  GPBackendPassData *v7; 
  __int64 v8; 
  __int64 v9; 
  unsigned int *smodelMatToBatchTableGPU; 
  __int64 v11; 
  __int64 v13; 
  unsigned int materialCount; 

  v5 = passIndex;
  v7 = &s_gpCurBackendFrameData->gpBackendPass[passIndex];
  v8 = gpBatchIndex;
  if ( smodelMaterialIndex >= rgp.world->smodels.materialCount )
  {
    materialCount = rgp.world->smodels.materialCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1072, ASSERT_TYPE_ASSERT, "(unsigned)( smodelMaterialIndex ) < (unsigned)( rgp.world->smodels.materialCount )", "smodelMaterialIndex doesn't index rgp.world->smodels.materialCount\n\t%i not in [0, %i)", smodelMaterialIndex, materialCount) )
      __debugbreak();
  }
  if ( (unsigned int)v8 >= v7->batchCount )
  {
    LODWORD(v13) = v7->batchCount;
    LODWORD(v11) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1073, ASSERT_TYPE_ASSERT, "(unsigned)( gpBatchIndex ) < (unsigned)( gpBackendPass->batchCount )", "gpBatchIndex doesn't index gpBackendPass->batchCount\n\t%i not in [0, %i)", v11, v13) )
      __debugbreak();
  }
  if ( sceneViewType >= 0x21 )
  {
    LODWORD(v13) = 33;
    LODWORD(v11) = sceneViewType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1074, ASSERT_TYPE_ASSERT, "(unsigned)( sceneViewType ) < (unsigned)( SCENE_VIEW_COUNT )", "sceneViewType doesn't index SCENE_VIEW_COUNT\n\t%i not in [0, %i)", v11, v13) )
      __debugbreak();
  }
  if ( s_gpFrontend[v5].batches[v8].sceneViewType != (_BYTE)sceneViewType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1079, ASSERT_TYPE_ASSERT, "(gpBatch->sceneViewType == static_cast< byte >( sceneViewType ))", (const char *)&queryFormat, "gpBatch->sceneViewType == static_cast< byte >( sceneViewType )") )
    __debugbreak();
  v9 = smodelMaterialIndex + (sceneViewType << 14);
  if ( (unsigned int)v9 >= 0x84000 )
  {
    LODWORD(v13) = 540672;
    LODWORD(v11) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1086, ASSERT_TYPE_ASSERT, "(unsigned)( elemIndex ) < (unsigned)( GP_SMODEL_MAT_TO_BATCH_TABLE_SIZE )", "elemIndex doesn't index GP_SMODEL_MAT_TO_BATCH_TABLE_SIZE\n\t%i not in [0, %i)", v11, v13) )
      __debugbreak();
  }
  smodelMatToBatchTableGPU = v7->smodelMatToBatchTableGPU;
  if ( smodelMatToBatchTableGPU )
    smodelMatToBatchTableGPU[v9] = v8;
}

/*
==============
R_GP_PrefixSum256
==============
*/
void R_GP_PrefixSum256(ComputeCmdBufState *state, const GfxBackEndData *data, unsigned int passIndex, unsigned int ppsElementCount, R_RT_BufferHandle *ppSumIndirectArgsBuffer, R_RT_BufferHandle *countsBuffer, R_RT_BufferHandle *reduceBuffer, R_RT_BufferHandle *offsetsBuffer)
{
  GPBackendPassData *v9; 
  R_RT_BufferHandle *v10; 
  unsigned __int64 v11; 
  R_RT_BufferHandle *v12; 
  const GfxWrappedRWBuffer *WrappedBuffer; 
  const GfxWrappedRWBuffer *v14; 
  GfxShaderBufferRWView *p_rwView; 
  GfxShaderBufferRWView *v16; 
  R_RT_Handle v17; 
  R_RT_Handle v18; 
  GfxShaderBufferView *views; 

  v9 = &s_gpBackendFrameData[data->smpFrame].gpBackendPass[passIndex];
  if ( (v9->dynSurfCount || v9->visibleSModelCollectionCount > 0) && v9->batchCount )
  {
    v10 = ppSumIndirectArgsBuffer;
    v11 = ((unsigned __int64)ppsElementCount + 255) >> 8;
    if ( !ppSumIndirectArgsBuffer->m_surfaceID && !ppsElementCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 2300, ASSERT_TYPE_ASSERT, "(isIndirectDispatch || ppsElementCount)", (const char *)&queryFormat, "isIndirectDispatch || ppsElementCount") )
      __debugbreak();
    views = &R_RT_Handle::GetWrappedBuffer(countsBuffer)->view;
    R_SetComputeViews(state, 0, 1, (const GfxShaderBufferView *const *)&views);
    v12 = reduceBuffer;
    p_rwView = &R_RT_Handle::GetWrappedBuffer(reduceBuffer)->rwView;
    R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&p_rwView, NULL);
    v16 = &R_RT_Handle::GetWrappedBuffer(offsetsBuffer)->rwView;
    R_SetComputeRWViewsWithCounters(state, 1, 1, (const GfxShaderBufferRWView *const *)&v16, NULL);
    R_SetComputeShader(state, rgp.prefixSumUpsweep256);
    if ( v10->m_surfaceID )
    {
      WrappedBuffer = R_RT_Handle::GetWrappedBuffer(v10);
      R_DispatchIndirect(state, WrappedBuffer->buffer, 0);
    }
    else
    {
      R_Dispatch(state, v11, 1u, 1u);
    }
    v17 = v12->R_RT_Handle;
    R_HW_AddResourceTransition(state, &v17, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(state);
    R_SetComputeShader(state, rgp.prefixSumResolve256);
    R_Dispatch(state, 1u, 1u, 1u);
    v18 = v12->R_RT_Handle;
    R_HW_AddResourceTransition(state, &v18, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(state);
    R_SetComputeShader(state, rgp.prefixSumDownsweep256);
    if ( v10->m_surfaceID )
    {
      v14 = R_RT_Handle::GetWrappedBuffer(v10);
      R_DispatchIndirect(state, v14->buffer, 0);
    }
    else
    {
      R_Dispatch(state, v11, 1u, 1u);
    }
  }
}

/*
==============
R_GP_PrefixSum512
==============
*/
void R_GP_PrefixSum512(ComputeCmdBufState *state, const GfxBackEndData *data, unsigned int passIndex, unsigned int ppsElementCount, R_RT_BufferHandle *ppSumIndirectArgsBuffer, R_RT_BufferHandle *countsBuffer, R_RT_BufferHandle *reduceBuffer, R_RT_BufferHandle *offsetsBuffer)
{
  GPBackendPassData *v9; 
  R_RT_BufferHandle *v10; 
  unsigned __int64 v11; 
  R_RT_BufferHandle *v12; 
  const GfxWrappedRWBuffer *WrappedBuffer; 
  const GfxWrappedRWBuffer *v14; 
  GfxShaderBufferRWView *p_rwView; 
  GfxShaderBufferRWView *v16; 
  R_RT_Handle v17; 
  R_RT_Handle v18; 
  GfxShaderBufferView *views; 

  v9 = &s_gpBackendFrameData[data->smpFrame].gpBackendPass[passIndex];
  if ( (v9->dynSurfCount || v9->visibleSModelCollectionCount > 0) && v9->batchCount )
  {
    v10 = ppSumIndirectArgsBuffer;
    v11 = ((unsigned __int64)ppsElementCount + 511) >> 9;
    if ( !ppSumIndirectArgsBuffer->m_surfaceID && !ppsElementCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 2357, ASSERT_TYPE_ASSERT, "(isIndirectDispatch || ppsElementCount)", (const char *)&queryFormat, "isIndirectDispatch || ppsElementCount") )
      __debugbreak();
    views = &R_RT_Handle::GetWrappedBuffer(countsBuffer)->view;
    R_SetComputeViews(state, 0, 1, (const GfxShaderBufferView *const *)&views);
    v12 = reduceBuffer;
    p_rwView = &R_RT_Handle::GetWrappedBuffer(reduceBuffer)->rwView;
    R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&p_rwView, NULL);
    v16 = &R_RT_Handle::GetWrappedBuffer(offsetsBuffer)->rwView;
    R_SetComputeRWViewsWithCounters(state, 1, 1, (const GfxShaderBufferRWView *const *)&v16, NULL);
    R_SetComputeShader(state, rgp.prefixSumUpsweep512);
    if ( v10->m_surfaceID )
    {
      WrappedBuffer = R_RT_Handle::GetWrappedBuffer(v10);
      R_DispatchIndirect(state, WrappedBuffer->buffer, 0);
    }
    else
    {
      R_Dispatch(state, v11, 1u, 1u);
    }
    v17 = v12->R_RT_Handle;
    R_HW_AddResourceTransition(state, &v17, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(state);
    R_SetComputeShader(state, rgp.prefixSumResolve512);
    R_Dispatch(state, 1u, 1u, 1u);
    v18 = v12->R_RT_Handle;
    R_HW_AddResourceTransition(state, &v18, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(state);
    R_SetComputeShader(state, rgp.prefixSumDownsweep512);
    if ( v10->m_surfaceID )
    {
      v14 = R_RT_Handle::GetWrappedBuffer(v10);
      R_DispatchIndirect(state, v14->buffer, 0);
    }
    else
    {
      R_Dispatch(state, v11, 1u, 1u);
    }
  }
}

/*
==============
R_GP_ReadBackGPStats
==============
*/
void R_GP_ReadBackGPStats(ComputeCmdBufState *state, const GfxBackEndData *data, unsigned int passIndex, R_RT_BufferHandle *batchSubMeshOffsetsBuffer, R_RT_BufferHandle *subMeshClusterOffsetsBuffer, R_RT_BufferHandle *clusterTriOffsetsBuffer, R_RT_BufferHandle *smodelSurfEmitCountBuffer, R_RT_BufferHandle *smodelSurfCountBuffer, R_RT_BufferHandle *indirectArgsBuffer, bool isOcclusionPass)
{
  __int64 v14; 
  GPBackendPassData *v15; 
  R_RT_BufferHandle v16; 
  R_RT_BufferHandle v17; 
  R_RT_BufferHandle v18; 
  R_RT_BufferHandle v19; 
  R_RT_BufferHandle v20; 
  R_RT_BufferHandle v21; 
  R_RT_BufferHandle v22; 
  R_RT_BufferHandle v23; 
  R_RT_BufferHandle v24; 
  R_RT_BufferHandle v25; 
  R_RT_BufferHandle v26; 

  v14 = passIndex;
  v15 = &s_gpBackendFrameData[data->smpFrame].gpBackendPass[passIndex];
  if ( rg.stats && r_gpShowStats->current.integer && (v15->dynSurfCount || v15->visibleSModelCollectionCount > 0) && v15->batchCount )
  {
    if ( isOcclusionPass )
    {
      if ( passIndex )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 3022, ASSERT_TYPE_ASSERT, "(passIndex == GFX_GP_PASS_CAMERA)", (const char *)&queryFormat, "passIndex == GFX_GP_PASS_CAMERA") )
          __debugbreak();
      }
      v17 = *indirectArgsBuffer;
      v18 = *clusterTriOffsetsBuffer;
      v20 = *batchSubMeshOffsetsBuffer;
      v19 = *subMeshClusterOffsetsBuffer;
      R_GP_ReadBackGPStats_PostOcclusion(state, data, passIndex, &v20, &v19, &v18, &v17);
    }
    else
    {
      v21 = *indirectArgsBuffer;
      v22 = *smodelSurfCountBuffer;
      v23 = *smodelSurfEmitCountBuffer;
      v24 = *clusterTriOffsetsBuffer;
      v16 = *batchSubMeshOffsetsBuffer;
      v25 = *subMeshClusterOffsetsBuffer;
      v26 = v16;
      R_GP_ReadBackGPStats_PreOcclusion(state, data, passIndex, &v26, &v25, &v24, &v23, &v22, &v21);
      if ( passIndex != 1 )
      {
LABEL_13:
        R_CollectGPBackendStats(v15);
        return;
      }
    }
    GPReadBackRing::GPUCopyToRingBuffer(&s_gpReadBackRing[v14], state);
    goto LABEL_13;
  }
}

/*
==============
R_GP_ReadBackGPStats_PostOcclusion
==============
*/
void R_GP_ReadBackGPStats_PostOcclusion(ComputeCmdBufState *state, const GfxBackEndData *data, unsigned int passIndex, R_RT_BufferHandle *batchSubMeshOffsetsBuffer, R_RT_BufferHandle *subMeshClusterOffsetsBuffer, R_RT_BufferHandle *clusterTriOffsetsBuffer, R_RT_BufferHandle *indirectArgsBuffer)
{
  unsigned __int64 v9; 
  unsigned __int64 v10; 
  int *v11; 
  unsigned __int64 v12; 
  __int64 v13; 
  GfxShaderBufferView *views; 
  GfxShaderBufferView *p_view; 
  GfxShaderBufferView *v16; 
  GfxShaderBufferView *v17; 
  GfxShaderBufferRWView *p_rwView; 
  int dataa[8]; 

  v9 = 20544i64 * data->smpFrame;
  v10 = 8576i64 * passIndex;
  v11 = (int *)((char *)&s_gpBackendFrameData[v9 / 0x5040] + v10);
  v12 = v10 + v9;
  if ( *(unsigned int *)((char *)&s_gpBackendFrameData[0].gpBackendPass[v10 / 0x2180].dynSurfCount + v9) || *(int *)((char *)&s_gpBackendFrameData[0].gpBackendPass[0].visibleSModelCollectionCount + v12) > 0 )
  {
    if ( *(volatile int *)((char *)&s_gpBackendFrameData[0].gpBackendPass[0].batchCount + v12) )
    {
      v13 = passIndex;
      R_HW_AddResourceTransition(state, &s_gpReadBackRing[v13].readBackBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_FlushResourceTransitions(state);
      dataa[0] = *v11;
      dataa[4] = 2621440;
      R_UploadAndSetComputeConstants(state, 6, dataa, 0x20u, NULL);
      views = &R_RT_Handle::GetWrappedBuffer(batchSubMeshOffsetsBuffer)->view;
      R_SetComputeViews(state, 0, 1, (const GfxShaderBufferView *const *)&views);
      p_view = &R_RT_Handle::GetWrappedBuffer(subMeshClusterOffsetsBuffer)->view;
      R_SetComputeViews(state, 1, 1, (const GfxShaderBufferView *const *)&p_view);
      v16 = &R_RT_Handle::GetWrappedBuffer(clusterTriOffsetsBuffer)->view;
      R_SetComputeViews(state, 2, 1, (const GfxShaderBufferView *const *)&v16);
      v17 = &R_RT_Handle::GetWrappedBuffer(indirectArgsBuffer)->view;
      R_SetComputeViews(state, 5, 1, (const GfxShaderBufferView *const *)&v17);
      p_rwView = &s_gpReadBackRing[v13].readBackBuffer.rwView;
      R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&p_rwView, NULL);
      R_SetComputeShader(state, rgp.gpReadBackStatsPostOcclusion);
      R_Dispatch(state, (unsigned __int64)(*v11 + 63i64) >> 6, 1u, 1u);
      R_HW_AddResourceTransition(state, &s_gpReadBackRing[v13].readBackBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_FlushResourceTransitions(state);
    }
  }
}

/*
==============
R_GP_ReadBackGPStats_PreOcclusion
==============
*/
void R_GP_ReadBackGPStats_PreOcclusion(ComputeCmdBufState *state, const GfxBackEndData *data, unsigned int passIndex, R_RT_BufferHandle *batchSubMeshOffsetsBuffer, R_RT_BufferHandle *subMeshClusterOffsetsBuffer, R_RT_BufferHandle *clusterTriOffsetsBuffer, R_RT_BufferHandle *smodelSurfEmitCountBuffer, R_RT_BufferHandle *smodelSurfCountBuffer, R_RT_BufferHandle *indirectArgsBuffer)
{
  unsigned __int64 v11; 
  unsigned __int64 v12; 
  int *v13; 
  unsigned __int64 v14; 
  __int64 v15; 
  GfxShaderBufferView *views; 
  GfxShaderBufferView *p_view; 
  GfxShaderBufferView *v18; 
  GfxShaderBufferView *v19; 
  R_RT_Handle *v20; 
  GfxShaderBufferView *v21; 
  R_RT_Handle *v22; 
  GfxShaderBufferView *v23; 
  GfxShaderBufferRWView *p_rwView; 
  int dataa[8]; 

  v20 = smodelSurfCountBuffer;
  v22 = indirectArgsBuffer;
  v11 = 20544i64 * data->smpFrame;
  v12 = 8576i64 * passIndex;
  v13 = (int *)((char *)&s_gpBackendFrameData[v11 / 0x5040] + v12);
  v14 = v12 + v11;
  if ( *(unsigned int *)((char *)&s_gpBackendFrameData[0].gpBackendPass[v12 / 0x2180].dynSurfCount + v11) || *(int *)((char *)&s_gpBackendFrameData[0].gpBackendPass[0].visibleSModelCollectionCount + v14) > 0 )
  {
    if ( *(volatile int *)((char *)&s_gpBackendFrameData[0].gpBackendPass[0].batchCount + v14) )
    {
      v15 = passIndex;
      R_HW_AddResourceTransition(state, &s_gpReadBackRing[v15].readBackBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_FlushResourceTransitions(state);
      R_GP_ClearBufferToZero(state, &s_gpReadBackRing[v15].readBackBuffer, 0x40u, 1);
      R_HW_AddResourceTransition(state, &s_gpReadBackRing[v15].readBackBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_FlushResourceTransitions(state);
      dataa[0] = *v13;
      dataa[4] = 2621440;
      R_UploadAndSetComputeConstants(state, 6, dataa, 0x20u, NULL);
      views = &R_RT_Handle::GetWrappedBuffer(batchSubMeshOffsetsBuffer)->view;
      R_SetComputeViews(state, 0, 1, (const GfxShaderBufferView *const *)&views);
      p_view = &R_RT_Handle::GetWrappedBuffer(subMeshClusterOffsetsBuffer)->view;
      R_SetComputeViews(state, 1, 1, (const GfxShaderBufferView *const *)&p_view);
      v18 = &R_RT_Handle::GetWrappedBuffer(clusterTriOffsetsBuffer)->view;
      R_SetComputeViews(state, 2, 1, (const GfxShaderBufferView *const *)&v18);
      v19 = &R_RT_Handle::GetWrappedBuffer(smodelSurfEmitCountBuffer)->view;
      R_SetComputeViews(state, 3, 1, (const GfxShaderBufferView *const *)&v19);
      v21 = &R_RT_Handle::GetWrappedBuffer(v20)->view;
      R_SetComputeViews(state, 4, 1, (const GfxShaderBufferView *const *)&v21);
      v23 = &R_RT_Handle::GetWrappedBuffer(v22)->view;
      R_SetComputeViews(state, 5, 1, (const GfxShaderBufferView *const *)&v23);
      p_rwView = &s_gpReadBackRing[v15].readBackBuffer.rwView;
      R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&p_rwView, NULL);
      R_SetComputeShader(state, rgp.gpReadBackStatsPreOcclusion);
      R_Dispatch(state, (unsigned __int64)(*v13 + 63i64) >> 6, 1u, 1u);
      R_HW_AddResourceTransition(state, &s_gpReadBackRing[v15].readBackBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_FlushResourceTransitions(state);
    }
  }
}

/*
==============
R_GP_ResetGlobalData
==============
*/
void R_GP_ResetGlobalData(void)
{
  unsigned int *clutterCollectionVisData; 
  unsigned int i; 

  clutterCollectionVisData = s_gpBackendFrameData[0].gpBackendPass[1].clutterCollectionVisData;
  for ( i = 0; i < 2; ++i )
  {
    clutterCollectionVisData[2951] = i;
    memset_0(s_gpFrontend, 0, 0x38028ui64);
    s_gpFrontend[0].typed[0].surfsBuffer = (GfxGPDynSurf *)s_gpFrontend;
    s_gpFrontend[0].typed[1].surfsBuffer = s_gpFrontend[0].skinnedSurfs;
    s_gpFrontend[0].passIndex = 0;
    memset_0(clutterCollectionVisData - 2183, 0, 0x9Cui64);
    memset_0(clutterCollectionVisData - 96, 0, 0xCCui64);
    *((_QWORD *)clutterCollectionVisData - 22) = 0i64;
    *((_QWORD *)clutterCollectionVisData - 21) = 0i64;
    *(clutterCollectionVisData - 40) = 0;
    *(clutterCollectionVisData - 45) = 0;
    memset_0(clutterCollectionVisData - 2144, 0, 0x2000ui64);
    memset_0(&s_gpFrontend[1], 0, sizeof(GPFrontendData));
    s_gpFrontend[1].typed[0].surfsBuffer = s_gpFrontend[1].rigidSurfs;
    s_gpFrontend[1].typed[1].surfsBuffer = s_gpFrontend[1].skinnedSurfs;
    s_gpFrontend[1].passIndex = 1;
    memset_0(clutterCollectionVisData - 39, 0, 0x9Cui64);
    memset_0(clutterCollectionVisData + 2048, 0, 0xCCui64);
    *((_QWORD *)clutterCollectionVisData + 1050) = 0i64;
    *((_QWORD *)clutterCollectionVisData + 1051) = 0i64;
    clutterCollectionVisData[2104] = 0;
    clutterCollectionVisData[2099] = 1;
    memset_0(clutterCollectionVisData, 0, 0x2000ui64);
    clutterCollectionVisData += 5136;
  }
  s_gpCurBackendFrameData = NULL;
  s_gpGlob = 0;
}

/*
==============
R_GP_SetScenePassIndex
==============
*/
void R_GP_SetScenePassIndex(GfxCmdBufSourceState *source, const GfxBackEndData *data, unsigned int passIndex)
{
  source->passIndex = passIndex;
}

/*
==============
R_GP_ShutDownBuffers
==============
*/
void R_GP_ShutDownBuffers(void)
{
  __int64 v0; 
  GfxWrappedBuffer *p_transientVisBitsBuffer; 
  __int64 v2; 
  void **p_data; 
  __int64 v4; 
  GfxGPReadBackInfo *p_readbackInfoCPU; 

  v0 = 2i64;
  p_transientVisBitsBuffer = &s_gpBackendFrameData[0].transientVisBitsBuffer;
  v2 = 2i64;
  do
  {
    R_ShutdownGfxWrappedBuffer((GfxWrappedBuffer *)((char *)p_transientVisBitsBuffer - 3280));
    R_ShutdownGfxWrappedBuffer(p_transientVisBitsBuffer);
    p_data = &p_transientVisBitsBuffer[-377].data;
    v4 = 2i64;
    do
    {
      R_ShutdownGfxWrappedBuffer((GfxWrappedBuffer *)(p_data - 5));
      R_ShutdownGfxWrappedBuffer((GfxWrappedBuffer *)p_data);
      R_ShutdownGfxWrappedBuffer((GfxWrappedBuffer *)(p_data + 5));
      R_ShutdownGfxWrappedBuffer((GfxWrappedBuffer *)(p_data + 10));
      R_ShutdownGfxWrappedBuffer((GfxWrappedBuffer *)(p_data + 15));
      p_data += 1072;
      --v4;
    }
    while ( v4 );
    p_transientVisBitsBuffer += 642;
    --v2;
  }
  while ( v2 );
  p_readbackInfoCPU = &s_gpReadBackRing[0].readbackInfoCPU;
  do
  {
    R_ShutdownGfxWrappedBuffer((GfxWrappedRWBuffer *)&p_readbackInfoCPU[-1].preocclusionMaxBatchIndexCount);
    *(_QWORD *)&p_readbackInfoCPU->preocclusionTriangleCount = 0i64;
    *(_QWORD *)&p_readbackInfoCPU->preocclusionMaxBatchIndexCount = 0i64;
    *(_QWORD *)&p_readbackInfoCPU->postocclusionTriangleCount = 0i64;
    *(_QWORD *)&p_readbackInfoCPU->postocclusionMaxBatchIndexCount = 0i64;
    *(_QWORD *)&p_readbackInfoCPU->emittedStaticSurfCount = 0i64;
    *(_QWORD *)&p_readbackInfoCPU->subMeshCount = 0i64;
    *(_QWORD *)&p_readbackInfoCPU->pad1 = 0i64;
    *(_QWORD *)&p_readbackInfoCPU->pad3 = 0i64;
    p_readbackInfoCPU = (GfxGPReadBackInfo *)((char *)p_readbackInfoCPU + 176);
    --v0;
  }
  while ( v0 );
}

/*
==============
R_GP_UpdateClutterCollectionVisData
==============
*/
void R_GP_UpdateClutterCollectionVisData(unsigned int passIndex, unsigned int clutterCollectionIndex, bool visible)
{
  unsigned int *v3; 
  unsigned int v4; 
  unsigned int v5; 

  v3 = &s_gpCurBackendFrameData->gpBackendPass[passIndex].clutterCollectionVisData[(unsigned __int64)clutterCollectionIndex >> 5];
  v4 = 0x80000000 >> (clutterCollectionIndex & 0x1F);
  v5 = *v3;
  if ( visible )
    *v3 = v4 | v5;
  else
    *v3 = v5 & ~v4;
}

/*
==============
R_GP_Wait
==============
*/
void R_GP_Wait(unsigned int passIndex, bool immediate)
{
  __int64 v2; 

  v2 = passIndex;
  if ( immediate )
  {
    if ( !R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 18, ASSERT_TYPE_ASSERT, "(R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "R_IsLockedGfxImmediateContext()") )
      __debugbreak();
    R_UnlockGfxImmediateContext();
  }
  if ( R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 23, ASSERT_TYPE_ASSERT, "(!R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "!R_IsLockedGfxImmediateContext()") )
    __debugbreak();
  Sys_WaitWorkerCmdsOnlyOfType(s_passIndexToWrkCmdMap[v2]);
  if ( R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 23, ASSERT_TYPE_ASSERT, "(!R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "!R_IsLockedGfxImmediateContext()") )
    __debugbreak();
  if ( immediate )
    R_LockGfxImmediateContext();
}

/*
==============
R_GenerateGPArgsForRigidBatch
==============
*/
void R_GenerateGPArgsForRigidBatch(const GfxBackEndData *data, GPFrontendData *gpFrontend, GPBackendPassData *gpBackendPass, unsigned __int16 batchIndex, const GfxGPBatch *gpBatch)
{
  unsigned __int8 *surfsBuffer; 
  __int64 firstSurf; 
  unsigned __int8 *v11; 
  int v12; 
  __int64 v13; 
  unsigned int v14; 
  __int16 v15; 
  unsigned __int16 v16; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int v19; 
  __int64 v20; 
  const GfxPlacementPrecise *v21; 
  unsigned __int16 v22; 
  unsigned __int16 v23; 
  __int64 v24; 
  __int64 v25; 
  GfxPerDynSurfData *v26; 
  Bounds *bounds; 
  unsigned int v28; 
  __int64 v29; 
  __int16 gpBatcha; 

  if ( gpFrontend != (GPFrontendData *)gpFrontend->typed[0].surfsBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1349, ASSERT_TYPE_ASSERT, "(gpFrontend->rigidSurfs == gpFrontend->typed[GP_SURF_RIGID].surfsBuffer)", (const char *)&queryFormat, "gpFrontend->rigidSurfs == gpFrontend->typed[GP_SURF_RIGID].surfsBuffer") )
    __debugbreak();
  surfsBuffer = data->surfsBuffer;
  firstSurf = gpBatch->firstSurf;
  if ( !gpBackendPass->perDynSurfDataGPU && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1359, ASSERT_TYPE_ASSERT, "(gpBackendPass->perDynSurfDataGPU)", (const char *)&queryFormat, "gpBackendPass->perDynSurfDataGPU") )
    __debugbreak();
  v11 = &surfsBuffer[gpFrontend->rigidSurfs[firstSurf].objID];
  v12 = -3 - *(_DWORD *)v11;
  v13 = *((_QWORD *)v11 + 7);
  v29 = v13;
  if ( v12 > 128 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.h", 209, ASSERT_TYPE_ASSERT, "( childCount ) <= ( ( XMODEL_MAX_RIGID_GROUPS ) )", "%s <= %s\n\t%i, %i", "childCount", "MAX_RIGID_CHILD_SURFACES", -3 - *(_DWORD *)v11, 128) )
    __debugbreak();
  if ( gpBatch->surfCount != v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1365, ASSERT_TYPE_ASSERT, "(gpBatch.surfCount == R_GetModelRigidSurfaceChildCount( rigidSurf ))", (const char *)&queryFormat, "gpBatch.surfCount == R_GetModelRigidSurfaceChildCount( rigidSurf )") )
    __debugbreak();
  v14 = gpBatch->firstSurf + gpBackendPass->surfIndexOffsets[0];
  v28 = v14;
  if ( v14 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1369, ASSERT_TYPE_ASSERT, "(R_GP_IsValidGPUSurfIndex( globalFirstSurf ))", (const char *)&queryFormat, "R_GP_IsValidGPUSurfIndex( globalFirstSurf )") )
    __debugbreak();
  v15 = *((_WORD *)v11 + 52);
  gpBatcha = v15;
  if ( v15 == -1 && gpBatch->surfCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1374, ASSERT_TYPE_ASSERT, "(gpBatch.surfCount == 1)", (const char *)&queryFormat, "gpBatch.surfCount == 1") )
    __debugbreak();
  v16 = 0;
  if ( gpBatch->surfCount )
  {
    bounds = (Bounds *)(v13 + 144);
    do
    {
      v17 = v16;
      v18 = v16 + v14;
      if ( v18 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1382, ASSERT_TYPE_ASSERT, "(R_GP_IsValidGPUSurfIndex( globalSurfIndex ))", (const char *)&queryFormat, "R_GP_IsValidGPUSurfIndex( globalSurfIndex )") )
        __debugbreak();
      v19 = v16 + gpBatch->firstSurf;
      if ( v18 >= 0x10000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1386, ASSERT_TYPE_ASSERT, "(globalSurfIndex < ( 65536 ))", (const char *)&queryFormat, "globalSurfIndex < GP_SURF_LIMIT") )
        __debugbreak();
      v20 = 32i64 * v16;
      v21 = (const GfxPlacementPrecise *)&v11[v20 + 76];
      if ( v15 == -1 )
      {
        v22 = *(_WORD *)(v13 + 4);
        v23 = 0;
      }
      else
      {
        v24 = (unsigned int)*(__int16 *)&v11[v20 + 104];
        v25 = *(_QWORD *)(v13 + 88);
        v23 = *(_WORD *)(v25 + 8 * v24 + 4);
        v22 = *(_WORD *)(v25 + 8 * v24 + 6);
      }
      R_PopulateRigidSurfCullArgs(gpBackendPass, v19, v21, *((const float *)v11 + 18), bounds);
      if ( v23 + (unsigned int)v22 > *(unsigned __int16 *)(v29 + 4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1409, ASSERT_TYPE_ASSERT, "(triOffset + triCount <= xsurf->triCount)", (const char *)&queryFormat, "triOffset + triCount <= xsurf->triCount") )
        __debugbreak();
      ++v16;
      v26 = &gpBackendPass->perDynSurfDataGPU[v18];
      v14 = v28;
      *(_QWORD *)&v26->childID = 0i64;
      *(_QWORD *)&v26->triOffset = 0i64;
      *(_QWORD *)&v26->skinnedCacheOffset = 0i64;
      *(_QWORD *)&v26->mayhemSelfVisInfo = 0i64;
      v26->childID = v17;
      v26->viewType = gpBatch->sceneViewType;
      v26->cullType = gpBatch->cullType;
      v26->triCount = v22;
      v13 = v29;
      v26->triOffset = v23;
      v15 = gpBatcha;
      v26->ugbID = *(_WORD *)(v29 + 10);
      v26->batchIndex = batchIndex;
      v26->mayhemVBOffset = *((_DWORD *)v11 + 1);
      v26->mayhemSelfVisInfo = *((_DWORD *)v11 + 2);
    }
    while ( v16 < gpBatch->surfCount );
  }
}

/*
==============
R_GenerateGPArgsForSkinnedBatch
==============
*/
void R_GenerateGPArgsForSkinnedBatch(const GfxBackEndData *data, GPFrontendData *gpFrontend, GPBackendPassData *gpBackendPass, unsigned __int16 batchIndex, const GfxGPBatch *gpBatch)
{
  __int64 firstSurf; 
  unsigned int v10; 
  unsigned __int8 *v11; 
  __int64 v12; 
  GfxPerDynSurfData *v13; 
  unsigned int v14; 
  unsigned __int8 *skinnedSurfCullArgsGPU; 
  _DWORD *v16; 
  vec3_t *GPBufferPtr_vec3_t; 
  vec3_t *v18; 
  vec4_t *GPBufferPtr_vec4_t; 
  vec4_t *v20; 
  float v21; 
  float v22; 

  if ( gpFrontend->skinnedSurfs != gpFrontend->typed[1].surfsBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1434, ASSERT_TYPE_ASSERT, "(gpFrontend->skinnedSurfs == gpFrontend->typed[GP_SURF_SKINNED].surfsBuffer)", (const char *)&queryFormat, "gpFrontend->skinnedSurfs == gpFrontend->typed[GP_SURF_SKINNED].surfsBuffer") )
    __debugbreak();
  firstSurf = gpBatch->firstSurf;
  v10 = firstSurf + gpBackendPass->surfIndexOffsets[1];
  v11 = &data->surfsBuffer[gpFrontend->skinnedSurfs[firstSurf].objID];
  v12 = *((_QWORD *)v11 + 7);
  if ( v10 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1448, ASSERT_TYPE_ASSERT, "(R_GP_IsValidGPUSurfIndex( globalSurfIndex ))", (const char *)&queryFormat, "R_GP_IsValidGPUSurfIndex( globalSurfIndex )") )
    __debugbreak();
  v13 = &gpBackendPass->perDynSurfDataGPU[v10];
  *(_QWORD *)&v13->childID = 0i64;
  *(_QWORD *)&v13->triOffset = 0i64;
  *(_QWORD *)&v13->skinnedCacheOffset = 0i64;
  *(_QWORD *)&v13->mayhemSelfVisInfo = 0i64;
  v13->gpSurfType = 1;
  v13->viewType = gpBatch->sceneViewType;
  v13->cullType = gpBatch->cullType;
  v13->triOffset = 0;
  v13->triCount = *(_WORD *)(v12 + 4);
  v13->ugbID = *(_WORD *)(v12 + 10);
  v13->batchIndex = batchIndex;
  v13->skinnedCacheOffset = *(_DWORD *)v11;
  v13->mayhemVBOffset = *((_DWORD *)v11 + 1);
  v13->mayhemSelfVisInfo = *((_DWORD *)v11 + 2);
  v13->tensionVBOffset = *((_DWORD *)v11 + 3);
  v14 = gpBatch->firstSurf;
  skinnedSurfCullArgsGPU = gpBackendPass->skinnedSurfCullArgsGPU;
  v16 = (_DWORD *)*((_QWORD *)v11 + 7);
  GPBufferPtr_vec3_t = R_GetGPBufferPtr_vec3_t_(skinnedSurfCullArgsGPU, 12 * v14 + 0x20000, 0x38000u);
  v18 = R_GetGPBufferPtr_vec3_t_(skinnedSurfCullArgsGPU, 12 * v14 + 180224, 0x38000u);
  if ( v14 >= 0x1000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1325, ASSERT_TYPE_ASSERT, "(skinnedSurfIndex < GP_SURF_SKINNED_COUNT)", (const char *)&queryFormat, "skinnedSurfIndex < GP_SURF_SKINNED_COUNT") )
    __debugbreak();
  GPBufferPtr_vec3_t->v[0] = (float)v16[39];
  GPBufferPtr_vec3_t->v[1] = (float)v16[40];
  GPBufferPtr_vec3_t->v[2] = (float)v16[41];
  v18->v[0] = (float)v16[36];
  v18->v[1] = (float)v16[37];
  v18->v[2] = (float)v16[38];
  GPBufferPtr_vec4_t = R_GetGPBufferPtr_vec4_t_(skinnedSurfCullArgsGPU, 16 * v14, 0x38000u);
  v20 = R_GetGPBufferPtr_vec4_t_(skinnedSurfCullArgsGPU, 16 * (v14 + 4096), 0x38000u);
  *GPBufferPtr_vec4_t = *(vec4_t *)(v11 + 76);
  LODWORD(v21) = (int)(float)(4096.0 * *((float *)v11 + 24));
  LODWORD(v22) = (int)(float)(4096.0 * *((float *)v11 + 25));
  v20->v[0] = (int)(float)(4096.0 * *((float *)v11 + 23));
  v20->v[2] = v22;
  v20->v[1] = v21;
  v20->v[3] = 1.0;
}

/*
==============
R_GenerateGPUArgs
==============
*/
void R_GenerateGPUArgs(const GfxBackEndData *data, unsigned int passIndex)
{
  __int64 v2; 
  __int64 smpFrame; 
  __int64 v5; 
  GPBackendPassData *v6; 
  __int64 v7; 
  volatile int typedSurfCount; 
  const unsigned __int16 *v9; 
  const char **v10; 
  unsigned int *surfTypeCount; 
  __int64 v12; 
  volatile int *p_typedSurfCount; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int v16; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int v19; 
  WorkerCmdType v20; 
  const GfxBackEndData *dataa; 
  __int16 v22; 
  __int16 v23; 
  unsigned int v24; 
  unsigned int batchCount; 

  v2 = passIndex;
  Sys_ProfBeginNamedEvent(0xFF708090, "GPU Pipeline Generate Surfs");
  if ( !s_gpCurBackendFrameData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1661, ASSERT_TYPE_ASSERT, "(s_gpCurBackendFrameData)", (const char *)&queryFormat, "s_gpCurBackendFrameData") )
    __debugbreak();
  smpFrame = data->smpFrame;
  v5 = v2;
  v6 = &s_gpCurBackendFrameData->gpBackendPass[v2];
  if ( &s_gpBackendFrameData[smpFrame] != s_gpCurBackendFrameData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1669, ASSERT_TYPE_ASSERT, "(&s_gpBackendFrameData[smpFrame] == s_gpCurBackendFrameData)", (const char *)&queryFormat, "&s_gpBackendFrameData[smpFrame] == s_gpCurBackendFrameData") )
    __debugbreak();
  if ( s_gpFrontend[v5].passIndex != (_DWORD)v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1670, ASSERT_TYPE_ASSERT, "(gpFrontend->passIndex == passIndex)", (const char *)&queryFormat, "gpFrontend->passIndex == passIndex") )
    __debugbreak();
  if ( v6->passIndex != (_DWORD)v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1671, ASSERT_TYPE_ASSERT, "(gpBackendPass->passIndex == passIndex)", (const char *)&queryFormat, "gpBackendPass->passIndex == passIndex") )
    __debugbreak();
  if ( s_gpCurBackendFrameData->smpFrame != (_DWORD)smpFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1672, ASSERT_TYPE_ASSERT, "(s_gpCurBackendFrameData->smpFrame == smpFrame)", (const char *)&queryFormat, "s_gpCurBackendFrameData->smpFrame == smpFrame") )
    __debugbreak();
  batchCount = v6->batchCount;
  if ( rg.stats && r_gpShowStats->current.integer )
  {
    v7 = s_gpFrontend[v5].passIndex;
    rg.stats->numBatches[v7] = v6->batchCount;
    rg.stats->numGPRigidSurfs[v7] = s_gpFrontend[v5].typed[0].typedSurfCount;
    typedSurfCount = s_gpFrontend[v5].typed[1].typedSurfCount;
    rg.stats->numGPSkinnedSurfs[v7] = typedSurfCount;
    rg.stats->totalGPSurfs[v7] = rg.stats->numGPRigidSurfs[v7] + typedSurfCount + rg.stats->numGPStaticSurfs[v7];
  }
  v9 = g_gpTypedSurfLimits;
  v6->dynSurfCount = 0;
  v10 = s_gpTypedSurfNames;
  surfTypeCount = v6->surfTypeCount;
  v12 = 2i64;
  p_typedSurfCount = &s_gpFrontend[v5].typed[0].typedSurfCount;
  do
  {
    v14 = *p_typedSurfCount;
    if ( *p_typedSurfCount >= (unsigned int)*v9 )
    {
      R_WarnOncePerFrame(R_WARN_GPU_PIPELINE_SURF_LIMIT, *v10, v14);
      v14 = *v9 - 1;
    }
    p_typedSurfCount += 4;
    *(surfTypeCount - 3) = v6->dynSurfCount;
    ++v10;
    *surfTypeCount = v14;
    ++v9;
    ++surfTypeCount;
    v15 = v14 + v6->dynSurfCount;
    v6->dynSurfCount = v15;
    --v12;
  }
  while ( v12 );
  v6->surfIndexOffsets[2] = v15;
  v16 = 0;
  if ( v15 >= 0x10000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1653, ASSERT_TYPE_ASSERT, "(gpBackendPass->dynSurfCount < ( 65536 ))", (const char *)&queryFormat, "gpBackendPass->dynSurfCount < GP_SURF_LIMIT") )
    __debugbreak();
  R_GP_AddViewParms();
  v17 = 4;
  if ( (unsigned int)(((unsigned __int64)batchCount + 63) >> 6) < 4 )
    v17 = ((unsigned __int64)batchCount + 63) >> 6;
  if ( v17 )
  {
    v18 = (v17 + batchCount - 1) / v17;
    do
    {
      dataa = data;
      v19 = batchCount - 1;
      if ( batchCount - 1 > v16 + v18 - 1 )
        v19 = v16 + v18 - 1;
      if ( v16 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v16, "unsigned", v16) )
        __debugbreak();
      v22 = v16;
      if ( v19 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v19, "unsigned", v19) )
        __debugbreak();
      v20 = s_passIndexToWrkCmdMap[passIndex];
      v23 = v19;
      v24 = passIndex;
      Sys_AddWorkerCmd(v20, &dataa);
      v16 = v19 + 1;
      --v17;
    }
    while ( v17 );
    if ( v16 != batchCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1714, ASSERT_TYPE_ASSERT, "(startSurfIndex == gpuBatchCount)", (const char *)&queryFormat, "startSurfIndex == gpuBatchCount") )
      __debugbreak();
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
R_GenerateGPUArgsWorker
==============
*/
void R_GenerateGPUArgsWorker(const void *const data)
{
  const GfxBackEndData *v1; 
  unsigned __int16 v2; 
  unsigned __int16 v3; 
  __int64 v4; 
  __int64 smpFrame; 
  GPFrontendData *v6; 
  GPBackendPassData *v7; 
  __int64 v8; 

  v1 = *(const GfxBackEndData **)data;
  v2 = *((_WORD *)data + 4);
  v3 = *((_WORD *)data + 5);
  v4 = *((unsigned int *)data + 3);
  if ( !s_gpCurBackendFrameData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1491, ASSERT_TYPE_ASSERT, "(s_gpCurBackendFrameData)", (const char *)&queryFormat, "s_gpCurBackendFrameData") )
    __debugbreak();
  smpFrame = v1->smpFrame;
  v6 = &s_gpFrontend[v4];
  v7 = &s_gpCurBackendFrameData->gpBackendPass[v4];
  if ( &s_gpBackendFrameData[smpFrame] != s_gpCurBackendFrameData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1504, ASSERT_TYPE_ASSERT, "(&s_gpBackendFrameData[smpFrame] == s_gpCurBackendFrameData)", (const char *)&queryFormat, "&s_gpBackendFrameData[smpFrame] == s_gpCurBackendFrameData") )
    __debugbreak();
  if ( v6->passIndex != (_DWORD)v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1505, ASSERT_TYPE_ASSERT, "(gpFrontend->passIndex == passIndex)", (const char *)&queryFormat, "gpFrontend->passIndex == passIndex") )
    __debugbreak();
  if ( v7->passIndex != (_DWORD)v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1506, ASSERT_TYPE_ASSERT, "(gpBackendPass->passIndex == passIndex)", (const char *)&queryFormat, "gpBackendPass->passIndex == passIndex") )
    __debugbreak();
  if ( s_gpCurBackendFrameData->smpFrame != (_DWORD)smpFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1507, ASSERT_TYPE_ASSERT, "(s_gpCurBackendFrameData->smpFrame == smpFrame)", (const char *)&queryFormat, "s_gpCurBackendFrameData->smpFrame == smpFrame") )
    __debugbreak();
  for ( ; v2 <= v3; ++v2 )
  {
    if ( v2 == 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1514, ASSERT_TYPE_ASSERT, "(batchIndex != ( 16384 ))", (const char *)&queryFormat, "batchIndex != INVALID_GPU_BATCH_INDEX") )
      __debugbreak();
    if ( v6->batches[v2].surfType )
    {
      if ( v6->batches[v2].surfType == GP_SURF_SKINNED )
      {
        R_GenerateGPArgsForSkinnedBatch(v1, v6, v7, v2, &v6->batches[v2]);
      }
      else if ( v6->batches[v2].surfType != GP_DYN_SURF_TYPE_COUNT )
      {
        LODWORD(v8) = (unsigned __int8)v6->batches[v2].surfType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1527, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid GPU Surf Type! %u", v8) )
          __debugbreak();
      }
    }
    else
    {
      R_GenerateGPArgsForRigidBatch(v1, v6, v7, v2, &v6->batches[v2]);
    }
  }
}

/*
==============
R_PopulateRigidSurfCullArgs
==============
*/
void R_PopulateRigidSurfCullArgs(GPBackendPassData *gpBackendPass, unsigned int rigidSurfIndex, const GfxPlacementPrecise *precisePlacement, const float scale, const Bounds *bounds)
{
  unsigned __int8 *rigidSurfCullArgsGPU; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  __int128 v15; 
  unsigned int v21; 
  vec3_t *GPBufferPtr_vec3_t; 
  vec3_t *v26; 
  vec4_t *GPBufferPtr_vec4_t; 
  vec4_t *v28; 

  rigidSurfCullArgsGPU = gpBackendPass->rigidSurfCullArgsGPU;
  v6 = precisePlacement->quat.v[0];
  v7 = precisePlacement->quat.v[1];
  v8 = precisePlacement->quat.v[2];
  v9 = precisePlacement->quat.v[3];
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, dword ptr [r8+10h] }
  _XMM1 = 0i64;
  __asm { vcvtsi2sd xmm1, xmm1, dword ptr [r8+14h] }
  *((_QWORD *)&v15 + 1) = *((_QWORD *)&_XMM0 + 1);
  *(double *)&v15 = *(double *)&_XMM0 * 0.000244140625;
  _XMM0 = v15;
  __asm { vcvtsd2ss xmm7, xmm0, xmm0 }
  *((_QWORD *)&v15 + 1) = *((_QWORD *)&_XMM1 + 1);
  *(double *)&v15 = *(double *)&_XMM1 * 0.000244140625;
  _XMM0 = v15;
  _XMM1 = 0i64;
  __asm
  {
    vcvtsi2sd xmm1, xmm1, dword ptr [r8+18h]
    vcvtsd2ss xmm8, xmm0, xmm0
  }
  v21 = 12 * rigidSurfIndex;
  *((_QWORD *)&v15 + 1) = *((_QWORD *)&_XMM1 + 1);
  *(double *)&v15 = *(double *)&_XMM1 * 0.000244140625;
  _XMM0 = v15;
  __asm { vcvtsd2ss xmm9, xmm0, xmm0 }
  GPBufferPtr_vec3_t = R_GetGPBufferPtr_vec3_t_(rigidSurfCullArgsGPU, 12 * rigidSurfIndex + 0x40000, 0x70000u);
  v26 = R_GetGPBufferPtr_vec3_t_(rigidSurfCullArgsGPU, v21 + 360448, 0x70000u);
  GPBufferPtr_vec4_t = R_GetGPBufferPtr_vec4_t_(rigidSurfCullArgsGPU, 16 * rigidSurfIndex, 0x70000u);
  v28 = R_GetGPBufferPtr_vec4_t_(rigidSurfCullArgsGPU, 16 * (rigidSurfIndex + 0x2000), 0x70000u);
  if ( rigidSurfIndex >= 0x2000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1294, ASSERT_TYPE_ASSERT, "(rigidSurfIndex < GP_SURF_RIGID_COUNT)", (const char *)&queryFormat, "rigidSurfIndex < GP_SURF_RIGID_COUNT") )
    __debugbreak();
  *GPBufferPtr_vec3_t = bounds->halfSize;
  *(_QWORD *)v26->v = *(_QWORD *)bounds->midPoint.v;
  v26->v[2] = bounds->midPoint.v[2];
  GPBufferPtr_vec4_t->v[0] = v6;
  GPBufferPtr_vec4_t->v[1] = v7;
  GPBufferPtr_vec4_t->v[2] = v8;
  GPBufferPtr_vec4_t->v[3] = v9;
  v28->v[0] = (int)(float)(*(float *)&_XMM7 * 4096.0);
  v28->v[2] = (int)(float)(*(float *)&_XMM9 * 4096.0);
  v28->v[1] = (int)(float)(*(float *)&_XMM8 * 4096.0);
  v28->v[3] = scale;
}

