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
  __int64 v19; 
  int *v24; 
  int v26; 
  unsigned int v27; 
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v29; 
  const R_RT_Surface *v30; 
  GfxShaderBufferView *v49; 
  const R_RT_Surface *v50; 
  GfxShaderBufferView *v65; 
  const R_RT_Surface *v66; 
  unsigned int v73; 
  unsigned int v85; 
  unsigned int *v143; 
  GfxShaderBufferView *views; 
  GfxShaderBufferRWView *p_rwView; 
  GfxShaderBufferView *v146; 
  GfxShaderBufferRWView *v147; 
  GfxCmdBufContext *v148; 
  __m256i v149; 
  __m256i v150; 
  GfxCmdBufContext v151; 
  GfxCmdBufContext v152; 
  GfxCmdBufContext v153; 
  GfxCmdBufContext v154; 
  GfxCmdBufContext v155; 
  GfxCmdBufContext v156; 
  GfxCmdBufContext v157; 
  GfxCmdBufContext v158; 
  R_RT_Handle v159; 
  R_RT_Handle v160; 
  R_RT_BufferHandle v161; 
  R_RT_BufferHandle v162; 
  R_RT_BufferHandle v163; 
  R_RT_BufferHandle v164; 
  R_RT_BufferHandle v165; 
  R_RT_BufferHandle v166; 
  R_RT_BufferHandle v167; 
  R_RT_BufferHandle v168; 
  R_RT_Handle v169; 
  R_RT_Handle v170; 
  R_RT_Handle v171; 
  R_RT_Handle v172; 
  R_RT_Handle v173; 
  R_RT_Handle v174; 
  R_RT_Handle v175; 
  R_RT_BufferHandle v176; 
  R_RT_BufferHandle v177; 
  R_RT_BufferHandle v178; 
  R_RT_BufferHandle v179; 
  R_RT_BufferHandle v180; 
  R_RT_Handle v181; 
  R_RT_Handle v182; 
  R_RT_Handle v183; 
  R_RT_BufferHandle v184; 
  R_RT_BufferHandle v185; 
  R_RT_BufferHandle v186; 
  R_RT_BufferHandle v187; 
  R_RT_Handle v188; 
  R_RT_Handle v189; 
  R_RT_Handle v190; 
  R_RT_Handle v191; 
  R_RT_Handle v192; 
  R_RT_Handle v193; 
  R_RT_Handle v194; 
  R_RT_BufferHandle v195; 
  R_RT_BufferHandle v196; 
  R_RT_BufferHandle v197; 
  R_RT_BufferHandle v198; 
  R_RT_BufferHandle v199; 
  R_RT_BufferHandle v200; 
  R_RT_BufferHandle v201; 
  R_RT_Handle v202; 
  R_RT_Handle v203; 
  R_RT_Handle v204; 
  R_RT_Handle v205; 
  R_RT_Handle v206; 
  R_RT_BufferHandle v207; 
  R_RT_BufferHandle v208; 
  R_RT_BufferHandle v209; 
  R_RT_BufferHandle v210; 
  R_RT_Handle v211; 
  R_RT_Handle v212; 
  R_RT_Handle v213; 
  R_RT_Handle v214; 
  R_RT_BufferHandle v215; 
  R_RT_BufferHandle v216; 
  R_RT_BufferHandle v217; 
  R_RT_BufferHandle v218; 
  R_RT_BufferHandle v219; 
  R_RT_Handle v220; 
  R_RT_Handle v221; 
  R_RT_Handle v222; 
  R_RT_Handle v223; 
  R_RT_Handle v224; 
  R_RT_BufferHandle v225; 
  R_RT_BufferHandle v226; 
  R_RT_BufferHandle v227; 
  R_RT_BufferHandle v228; 
  R_RT_BufferHandle v229; 
  R_RT_BufferHandle v230; 
  R_RT_Handle v231; 
  R_RT_Handle v232; 
  R_RT_Handle v233; 
  R_RT_Handle v234; 
  R_RT_Handle v235; 
  R_RT_Handle v236; 
  R_RT_Handle v237; 
  R_RT_Handle v238; 
  R_RT_Handle v239; 
  R_RT_Handle v240; 
  R_RT_Handle v241; 
  __int64 dataa; 
  int v243; 
  int v244; 
  __int64 v245; 
  unsigned int v246; 
  int v247; 
  R_RT_BufferHandle result; 
  R_RT_BufferHandle v249; 
  R_RT_BufferHandle v250; 
  R_RT_BufferHandle v251; 
  R_RT_BufferHandle v252; 
  R_RT_BufferHandle v253; 
  R_RT_BufferHandle v254; 
  R_RT_BufferHandle v255; 

  _R14 = smodelSurfEmitCountBuffer;
  _R15 = smodelSurfCountBuffer;
  smpFrame = data->smpFrame;
  v148 = gfxContext;
  v19 = 8576i64 * passIndex;
  v143 = (unsigned int *)((char *)&s_gpBackendFrameData[smpFrame] + v19);
  R_RT_CreateBufferInternal(&result, 4u, 0x10000u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_BufferRaw|R_RT_Flag_RWView, R_RT_FlagInternal_None, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, "Batch SubMesh Counts Buffer", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp(3079)");
  __asm
  {
    vmovups ymm0, ymmword ptr [r14]
    vmovups [rbp+0C50h+var_A90], ymm0
  }
  R_HW_AddResourceTransition(state, &v169, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr [r15]
    vmovups [rbp+0C50h+var_A70], ymm0
  }
  R_HW_AddResourceTransition(state, &v170, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  __asm
  {
    vmovups ymm0, ymmword ptr [r15]
    vmovups ymm1, ymmword ptr [r14]
  }
  v24 = (int *)((char *)s_gpBackendFrameData + v19 + smpFrame * 20544);
  __asm
  {
    vmovups ymmword ptr [rbp+0C50h+var_A10.m_surfaceID], ymm0
    vmovups ymm0, ymmword ptr [rbp+0C50h+result.baseclass_0.m_surfaceID]
    vmovups ymmword ptr [rbp+0C50h+var_A30.m_surfaceID], ymm1
  }
  v26 = *v24;
  __asm { vmovups ymmword ptr [rbp+0C50h+var_A50.m_surfaceID], ymm0 }
  if ( v26 )
  {
    v27 = 4 * *v24;
    Surface = R_RT_Handle::GetSurface(&v171);
    if ( (Surface->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
      __debugbreak();
    R_GP_ClearBufferToZero(state, (const GfxWrappedRWBuffer *)&Surface->1080, v27, 0);
  }
  v29 = R_RT_Handle::GetSurface(&v172);
  if ( (v29->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  R_GP_ClearBufferToZero(state, (const GfxWrappedRWBuffer *)&v29->1080, 4u, 0);
  v30 = R_RT_Handle::GetSurface(&v173);
  if ( (v30->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  R_GP_ClearBufferToZero(state, (const GfxWrappedRWBuffer *)&v30->1080, 4u, 0);
  R_RT_CreateBufferInternal(&v249, 4u, 0x10000u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_BufferRaw|R_RT_Flag_RWView, R_RT_FlagInternal_None, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, "Surf SubMesh Offsets Buffer", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp(3091)");
  _RDI = perSurfDataBuffer;
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi]
    vmovups [rbp+0C50h+var_9F0], ymm0
  }
  R_HW_AddResourceTransition(state, &v174, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+0C50h+result.baseclass_0.m_surfaceID]
    vmovups [rbp+0C50h+var_9D0], ymm0
  }
  R_HW_AddResourceTransition(state, &v175, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+0C50h+var_130.baseclass_0.m_surfaceID]
    vmovups ymm1, ymmword ptr [rbp+0C50h+result.baseclass_0.m_surfaceID]
    vmovups [rbp+0C50h+var_9B0], ymm0
    vmovups ymm0, ymmword ptr [rdi]
    vmovups [rbp+0C50h+var_970], ymm0
    vmovups [rbp+0C50h+var_990], ymm1
  }
  R_GP_GenerateDynSurfData(state, data, passIndex, &v178, &v177, &v176);
  R_RT_CreateBufferInternal(&v250, 0xCu, 1u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_BufferIndirectArgs|R_RT_Flag_BufferRaw|R_RT_Flag_RWView, R_RT_FlagInternal_None, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, "SModel Workgroup Counter Buffer", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp(3103)");
  R_RT_CreateBufferInternal(&v251, 4u, 0x4000u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_BufferRaw|R_RT_Flag_RWView, R_RT_FlagInternal_None, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, "SModel Workgroup Args Buffer", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp(3104)");
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+0C50h+var_F0.baseclass_0.m_surfaceID]
    vmovups ymm1, ymmword ptr [rbp+0C50h+var_110.baseclass_0.m_surfaceID]
    vmovups [rbp+0C50h+var_950], ymm0
    vmovups [rbp+0C50h+var_930], ymm1
  }
  R_GP_GenerateSModelWorkgroups(state, data, passIndex, &v180, &v179);
  R_RT_CreateBufferInternal(&v252, 8u, 0xD000u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_BufferRaw|R_RT_Flag_RWView, R_RT_FlagInternal_None, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, "SModel Surf Emit Buffer", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp(3111)");
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+0C50h+var_110.baseclass_0.m_surfaceID]
    vmovups [rbp+0C50h+var_910], ymm0
  }
  R_HW_AddResourceTransition(state, &v181, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+0C50h+var_F0.baseclass_0.m_surfaceID]
    vmovups [rbp+0C50h+var_8F0], ymm0
  }
  R_HW_AddResourceTransition(state, &v182, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr [r14]
    vmovups [rbp+0C50h+var_8D0], ymm0
  }
  R_HW_AddResourceTransition(state, &v183, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  __asm
  {
    vmovups ymm0, ymmword ptr [r14]
    vmovups ymm1, ymmword ptr [rbp+0C50h+var_D0.baseclass_0.m_surfaceID]
    vmovups [rbp+0C50h+var_8B0], ymm0
    vmovups ymm0, ymmword ptr [rbp+0C50h+var_F0.baseclass_0.m_surfaceID]
    vmovups [rbp+0C50h+var_890], ymm1
    vmovups ymm1, ymmword ptr [rbp+0C50h+var_110.baseclass_0.m_surfaceID]
    vmovups [rbp+0C50h+var_870], ymm0
    vmovups [rbp+0C50h+var_850], ymm1
  }
  R_GP_GenerateSModelSurfs(state, data, passIndex, &v187, &v186, &v185, &v184);
  R_RT_CreateBufferInternal(&v253, 0xCu, 1u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_BufferIndirectArgs|R_RT_Flag_BufferRaw|R_RT_Flag_RWView, R_RT_FlagInternal_None, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, "SModel Surf Datagen Indirect Args Buffer", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp(3127)");
  __asm
  {
    vmovups ymm0, ymmword ptr [r14]
    vmovups [rbp+0C50h+var_830], ymm0
  }
  R_HW_AddResourceTransition(state, &v188, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+0C50h+var_B0.baseclass_0.m_surfaceID]
    vmovups ymm1, ymmword ptr [r14]
  }
  dataa = 64i64;
  v243 = 0;
  v244 = 0x10000;
  __asm
  {
    vmovups ymmword ptr [rbp+0C50h+var_7F0.m_surfaceID], ymm0
    vmovups ymmword ptr [rbp+0C50h+var_810.m_surfaceID], ymm1
  }
  R_UploadAndSetComputeConstants(state, 5, &dataa, 0x10u, NULL);
  v49 = (GfxShaderBufferView *)R_RT_Handle::GetSurface(&v189);
  if ( (v49->view & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  views = v49 + 68;
  R_SetComputeViews(state, 0, 1, (const GfxShaderBufferView *const *)&views);
  v50 = R_RT_Handle::GetSurface(&v190);
  if ( (v50->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  p_rwView = &v50->m_buffer.m_wrappedBuffer.rwView;
  R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&p_rwView, NULL);
  R_SetComputeShader(state, rgp.gpCovertSModelSurfCounterToIndirectArg);
  R_Dispatch(state, 1u, 1u, 1u);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+0C50h+var_B0.baseclass_0.m_surfaceID]
    vmovups [rbp+0C50h+var_7D0], ymm0
  }
  R_HW_AddResourceTransition(state, &v191, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+0C50h+var_D0.baseclass_0.m_surfaceID]
    vmovups [rbp+0C50h+var_7B0], ymm0
  }
  R_HW_AddResourceTransition(state, &v192, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr [r14]
    vmovups [rbp+0C50h+var_790], ymm0
  }
  R_HW_AddResourceTransition(state, &v193, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_VERTEX_AND_CONSTANT_BUFFER, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr [r15]
    vmovups [rbp+0C50h+var_770], ymm0
  }
  R_HW_AddResourceTransition(state, &v194, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+0C50h+var_130.baseclass_0.m_surfaceID]
    vmovups ymm1, ymmword ptr [rbp+0C50h+result.baseclass_0.m_surfaceID]
    vmovups [rbp+0C50h+var_750], ymm0
    vmovups ymm0, ymmword ptr [r15]
    vmovups [rbp+0C50h+var_730], ymm1
    vmovups ymm1, ymmword ptr [rdi]
    vmovups [rbp+0C50h+var_710], ymm0
    vmovups ymm0, ymmword ptr [r14]
    vmovups [rbp+0C50h+var_6F0], ymm1
    vmovups ymm1, ymmword ptr [rbp+0C50h+var_D0.baseclass_0.m_surfaceID]
    vmovups [rbp+0C50h+var_6D0], ymm0
    vmovups ymm0, ymmword ptr [rbp+0C50h+var_B0.baseclass_0.m_surfaceID]
    vmovups [rbp+0C50h+var_6B0], ymm1
    vmovups [rbp+0C50h+var_690], ymm0
  }
  R_GP_GenerateSModelSurfData(state, data, passIndex, &v201, &v200, &v199, &v198, &v197, &v196, &v195);
  R_RT_CreateBufferInternal(&v254, 0xCu, 1u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_BufferIndirectArgs|R_RT_Flag_BufferRaw|R_RT_Flag_RWView, R_RT_FlagInternal_None, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, "SubMesh Workgroup Gen Indirect Args Buffer", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp(3158)");
  __asm
  {
    vmovups ymm0, ymmword ptr [r15]
    vmovups [rbp+0C50h+var_670], ymm0
  }
  R_HW_AddResourceTransition(state, &v202, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+0C50h+var_90.baseclass_0.m_surfaceID]
    vmovups ymm1, ymmword ptr [r15]
  }
  v245 = 64i64;
  v246 = v143[33];
  __asm
  {
    vmovups ymmword ptr [rbp+0C50h+var_630.m_surfaceID], ymm0
    vmovups ymmword ptr [rbp+0C50h+var_650.m_surfaceID], ymm1
  }
  v247 = 0x10000;
  R_UploadAndSetComputeConstants(state, 5, &v245, 0x10u, NULL);
  v65 = (GfxShaderBufferView *)R_RT_Handle::GetSurface(&v203);
  if ( (v65->view & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v146 = v65 + 68;
  R_SetComputeViews(state, 0, 1, (const GfxShaderBufferView *const *)&v146);
  v66 = R_RT_Handle::GetSurface(&v204);
  if ( (v66->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v147 = &v66->m_buffer.m_wrappedBuffer.rwView;
  R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&v147, NULL);
  R_SetComputeShader(state, rgp.gpCovertSModelSurfCounterToIndirectArg);
  R_Dispatch(state, 1u, 1u, 1u);
  R_RT_CreateBufferInternal(&v255, 4u, 0x100u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_BufferRaw|R_RT_Flag_RWView, R_RT_FlagInternal_None, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, "Batch SubMesh Reduce Buffer", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp(3172)");
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+0C50h+result.baseclass_0.m_surfaceID]
    vmovups [rbp+0C50h+var_610], ymm0
  }
  R_HW_AddResourceTransition(state, &v205, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  _RAX = batchSubMeshOffsetsBuffer;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups [rbp+0C50h+var_5F0], ymm0
  }
  R_HW_AddResourceTransition(state, &v206, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  _RAX = batchSubMeshOffsetsBuffer;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rbp+0C50h+var_C70+10h], xmm0
  }
  v150.m256i_i16[0] = 0;
  __asm { vmovups ymm0, ymmword ptr [rax] }
  v150.m256i_i32[2] = 0;
  v73 = *v143;
  __asm
  {
    vmovups ymm1, ymmword ptr [rbp+0C50h+var_70.baseclass_0.m_surfaceID]
    vmovups [rbp+0C50h+var_5D0], ymm0
    vmovups ymm0, ymmword ptr [rbp+0C50h+result.baseclass_0.m_surfaceID]
    vmovups [rbp+0C50h+var_5B0], ymm1
    vmovups ymm1, [rbp+0C50h+var_C70]
    vmovups [rbp+0C50h+var_590], ymm0
    vmovups [rbp+0C50h+var_570], ymm1
  }
  R_GP_PrefixSum256(state, data, passIndex, v73, &v210, &v209, &v208, &v207);
  _RAX = batchSubMeshOffsetsBuffer;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups [rbp+0C50h+var_550], ymm0
  }
  R_HW_AddResourceTransition(state, &v211, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  _RAX = subMeshCountBuffer;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups [rbp+0C50h+var_530], ymm0
  }
  R_HW_AddResourceTransition(state, &v212, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  _RAX = clusterPassIndirectArgsBuffer;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups [rbp+0C50h+var_510], ymm0
  }
  R_HW_AddResourceTransition(state, &v213, 0xFFFFFFFF, D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  _RAX = clusterPPSumIndirectArgsBuffer;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups [rbp+0C50h+var_4F0], ymm0
  }
  R_HW_AddResourceTransition(state, &v214, 0xFFFFFFFF, D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  v85 = *v143;
  _RBX = batchSubMeshOffsetsBuffer;
  v149.m256i_i16[0] = 0;
  v149.m256i_i32[2] = 0;
  _RAX = clusterPPSumIndirectArgsBuffer;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rbp+0C50h+var_C90+10h], xmm0
    vmovups ymm0, ymmword ptr [rax]
  }
  _RAX = clusterPassIndirectArgsBuffer;
  __asm
  {
    vmovups [rbp+0C50h+var_4D0], ymm0
    vmovups ymm1, ymmword ptr [rax]
  }
  _RAX = subMeshCountBuffer;
  __asm
  {
    vmovups [rbp+0C50h+var_4B0], ymm1
    vmovups ymm1, ymmword ptr [rbx]
    vmovups [rbp+0C50h+var_470], ymm1
    vmovups ymm0, ymmword ptr [rax]
    vmovups [rbp+0C50h+var_490], ymm0
    vmovups ymm0, [rbp+0C50h+var_C90]
    vmovups [rbp+0C50h+var_450], ymm0
  }
  R_GP_InitIndirectArgsFromPrefixSum(state, data, passIndex, v85, 0x100u, 0x4000u, 0x10000u, &v219, &v218, &v217, &v216, &v215);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+0C50h+var_90.baseclass_0.m_surfaceID]
    vmovups [rbp+0C50h+var_430], ymm0
  }
  R_HW_AddResourceTransition(state, &v220, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr [r15]
    vmovups [rbp+0C50h+var_410], ymm0
  }
  R_HW_AddResourceTransition(state, &v221, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_VERTEX_AND_CONSTANT_BUFFER, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi]
    vmovups [rbp+0C50h+var_3F0], ymm0
  }
  R_HW_AddResourceTransition(state, &v222, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+0C50h+var_130.baseclass_0.m_surfaceID]
    vmovups [rbp+0C50h+var_3D0], ymm0
  }
  R_HW_AddResourceTransition(state, &v223, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  _RAX = subMeshWorkgroupArgsBuffer;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups [rbp+0C50h+var_3B0], ymm0
  }
  R_HW_AddResourceTransition(state, &v224, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  _RAX = subMeshWorkgroupArgsBuffer;
  __asm
  {
    vmovups ymm1, ymmword ptr [rbp+0C50h+var_130.baseclass_0.m_surfaceID]
    vmovups [rbp+0C50h+var_370], ymm1
    vmovups ymm1, ymmword ptr [rdi]
    vmovups ymm0, ymmword ptr [rax]
    vmovups [rbp+0C50h+var_390], ymm0
    vmovups ymm0, ymmword ptr [rbx]
    vmovups [rbp+0C50h+var_350], ymm0
    vmovups ymm0, ymmword ptr [r15]
    vmovups [rbp+0C50h+var_330], ymm1
    vmovups ymm1, ymmword ptr [rbp+0C50h+var_90.baseclass_0.m_surfaceID]
    vmovups [rbp+0C50h+var_310], ymm0
    vmovups [rbp+0C50h+var_2F0], ymm1
  }
  R_GP_GenerateSubMeshWorkgroups(state, data, passIndex, &v230, &v229, &v228, &v227, &v226, &v225);
  _RAX = subMeshWorkgroupArgsBuffer;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups [rbp+0C50h+var_2D0], ymm0
  }
  R_HW_AddResourceTransition(state, &v231, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  _RAX = subMeshCountBuffer;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups [rbp+0C50h+var_2B0], ymm0
  }
  R_HW_AddResourceTransition(state, &v232, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  _RAX = clusterPassIndirectArgsBuffer;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups [rbp+0C50h+var_290], ymm0
  }
  R_HW_AddResourceTransition(state, &v233, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  _RAX = clusterPPSumIndirectArgsBuffer;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups [rbp+0C50h+var_270], ymm0
  }
  R_HW_AddResourceTransition(state, &v234, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr [r14]
    vmovups [rbp+0C50h+var_250], ymm0
  }
  R_HW_AddResourceTransition(state, &v235, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_VERTEX_AND_CONSTANT_BUFFER, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr [r15]
    vmovups [rbp+0C50h+var_230], ymm0
  }
  R_HW_AddResourceTransition(state, &v236, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_VERTEX_AND_CONSTANT_BUFFER, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+0C50h+var_110.baseclass_0.m_surfaceID]
    vmovups [rbp+0C50h+var_210], ymm0
  }
  R_HW_AddResourceTransition(state, &v237, 0xFFFFFFFF, D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+0C50h+var_F0.baseclass_0.m_surfaceID]
    vmovups [rbp+0C50h+var_1F0], ymm0
  }
  R_HW_AddResourceTransition(state, &v238, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+0C50h+var_D0.baseclass_0.m_surfaceID]
    vmovups [rbp+0C50h+var_1D0], ymm0
  }
  R_HW_AddResourceTransition(state, &v239, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+0C50h+var_B0.baseclass_0.m_surfaceID]
    vmovups [rbp+0C50h+var_1B0], ymm0
  }
  R_HW_AddResourceTransition(state, &v240, 0xFFFFFFFF, D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+0C50h+result.baseclass_0.m_surfaceID]
    vmovups [rbp+0C50h+var_190], ymm0
  }
  R_HW_AddResourceTransition(state, &v241, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+0C50h+var_90.baseclass_0.m_surfaceID]
    vmovups [rbp+0C50h+var_BD0], ymm0
  }
  R_HW_AddResourceTransition(state, &v159, 0xFFFFFFFF, D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+0C50h+var_130.baseclass_0.m_surfaceID]
    vmovups [rbp+0C50h+var_BB0], ymm0
  }
  R_HW_AddResourceTransition(state, &v160, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  __asm { vmovups ymm0, ymmword ptr [rbp+0C50h+var_110.baseclass_0.m_surfaceID] }
  _RBX = v148;
  __asm
  {
    vmovups [rbp+0C50h+var_B90], ymm0
    vmovups xmm1, xmmword ptr [rbx]
    vmovups [rbp+0C50h+var_C50], xmm1
  }
  R_RT_Destroy(&v151, &v161);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+0C50h+var_F0.baseclass_0.m_surfaceID]
    vmovups xmm1, xmmword ptr [rbx]
    vmovups [rbp+0C50h+var_B70], ymm0
    vmovups [rbp+0C50h+var_C40], xmm1
  }
  R_RT_Destroy(&v152, &v162);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+0C50h+var_D0.baseclass_0.m_surfaceID]
    vmovups xmm1, xmmword ptr [rbx]
    vmovups [rbp+0C50h+var_B50], ymm0
    vmovups [rbp+0C50h+var_C30], xmm1
  }
  R_RT_Destroy(&v153, &v163);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+0C50h+var_B0.baseclass_0.m_surfaceID]
    vmovups xmm1, xmmword ptr [rbx]
    vmovups [rbp+0C50h+var_B30], ymm0
    vmovups [rbp+0C50h+var_C20], xmm1
  }
  R_RT_Destroy(&v154, &v164);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+0C50h+result.baseclass_0.m_surfaceID]
    vmovups xmm1, xmmword ptr [rbx]
    vmovups [rbp+0C50h+var_B10], ymm0
    vmovups [rbp+0C50h+var_C10], xmm1
  }
  R_RT_Destroy(&v155, &v165);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+0C50h+var_90.baseclass_0.m_surfaceID]
    vmovups xmm1, xmmword ptr [rbx]
    vmovups [rbp+0C50h+var_C00], xmm1
    vmovups [rbp+0C50h+var_AF0], ymm0
  }
  R_RT_Destroy(&v156, &v166);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+0C50h+var_130.baseclass_0.m_surfaceID]
    vmovups xmm1, xmmword ptr [rbx]
    vmovups [rbp+0C50h+var_AD0], ymm0
    vmovups [rbp+0C50h+var_BF0], xmm1
  }
  R_RT_Destroy(&v157, &v167);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+0C50h+var_70.baseclass_0.m_surfaceID]
    vmovups xmm1, xmmword ptr [rbx]
    vmovups [rbp+0C50h+var_AB0], ymm0
    vmovups [rbp+0C50h+var_BE0], xmm1
  }
  R_RT_Destroy(&v158, &v168);
}

/*
==============
RB_GP_ProcessSurfs
==============
*/
void RB_GP_ProcessSurfs(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxBackEndData *data, const GfxGPConfig *gpConfig)
{
  __int64 passIndex; 
  char v11; 
  const GfxDevice *device; 
  GPBackendFrameData *v13; 
  const GfxDevice *v14; 
  GfxCmdBufState *v15; 
  unsigned int rwView; 
  GfxWorld *world; 
  unsigned int v32; 
  _DWORD *v73; 
  GfxShaderBufferView *Surface; 
  GfxShaderBufferView *v86; 
  GfxShaderBufferView *v87; 
  GfxShaderBufferView *v88; 
  GfxShaderBufferView *v89; 
  GfxShaderBufferView *v90; 
  GfxShaderBufferView *v91; 
  const R_RT_Surface *v92; 
  const R_RT_Surface *v93; 
  const R_RT_Surface *v94; 
  R_RT_Handle *v95; 
  GfxShaderBufferView *v102; 
  GfxShaderBufferView *v103; 
  GfxShaderBufferView *v104; 
  GfxShaderBufferView *v105; 
  const R_RT_Surface *v106; 
  const R_RT_Surface *v107; 
  unsigned __int64 smpFrame; 
  _DWORD *v140; 
  GfxShaderBufferView *v141; 
  GfxShaderBufferView *v142; 
  GfxShaderBufferView *v143; 
  GfxShaderBufferView *v144; 
  const R_RT_Surface *v145; 
  GPBackendPassData *v149; 
  __int64 v185; 
  GfxShaderBufferView *views; 
  GfxShaderBufferView *v188; 
  GfxShaderBufferView *v189; 
  GfxShaderBufferView *v190; 
  GfxShaderBufferView *v191; 
  GfxShaderBufferView *v192; 
  GfxShaderBufferView *v193; 
  GfxShaderBufferRWView *p_rwView; 
  GfxShaderBufferRWView *v195; 
  GfxShaderBufferRWView *v196; 
  GfxShaderBufferView *v197; 
  GfxShaderBufferView *v198; 
  GfxShaderBufferView *v199; 
  GfxShaderBufferView *v200; 
  GfxShaderBufferRWView *v201; 
  GfxShaderBufferView *v202; 
  GfxShaderBufferView *v203; 
  GfxShaderBufferView *p_view; 
  GfxShaderBufferView *v205; 
  GfxShaderBufferView *v206; 
  GfxShaderBufferView *v207; 
  GfxShaderBufferRWView *v208; 
  __m256i v209; 
  __m256i v210; 
  __m256i v211; 
  __m256i v214; 
  __m256i v216; 
  __m256i v217; 
  __m256i v218; 
  __m256i v219; 
  __m256i v220; 
  __m256i v221; 
  GfxCmdBufContext v222; 
  GfxCmdBufContext v223; 
  GfxCmdBufContext v224; 
  GfxCmdBufContext v225; 
  GfxCmdBufContext v226; 
  GfxCmdBufContext v227; 
  __int64 v228; 
  __m256i v229; 
  __m256i v230; 
  __m256i v231; 
  GfxCmdBufContext v232; 
  R_RT_BufferHandle v233; 
  R_RT_BufferHandle v234; 
  R_RT_BufferHandle v235; 
  R_RT_BufferHandle v236; 
  R_RT_BufferHandle v237; 
  R_RT_BufferHandle v238; 
  R_RT_BufferHandle v239; 
  R_RT_BufferHandle v240; 
  R_RT_BufferHandle v241; 
  R_RT_BufferHandle v242; 
  R_RT_BufferHandle v243; 
  R_RT_BufferHandle v244; 
  R_RT_BufferHandle v245; 
  R_RT_BufferHandle v246; 
  R_RT_BufferHandle v247; 
  R_RT_BufferHandle v248; 
  R_RT_BufferHandle v249; 
  R_RT_BufferHandle v250; 
  R_RT_BufferHandle v251; 
  R_RT_BufferHandle v252; 
  R_RT_BufferHandle v253; 
  R_RT_BufferHandle v254; 
  R_RT_BufferHandle v255; 
  R_RT_BufferHandle v256; 
  R_RT_BufferHandle v257; 
  R_RT_ColorHandle v258; 
  R_RT_ColorHandle v259; 
  R_RT_BufferHandle v260; 
  R_RT_BufferHandle v261; 
  R_RT_BufferHandle v262; 
  R_RT_BufferHandle v263; 
  R_RT_BufferHandle v264; 
  R_RT_Handle v265; 
  R_RT_BufferHandle v266; 
  R_RT_BufferHandle v267; 
  R_RT_BufferHandle v268; 
  R_RT_BufferHandle v269; 
  R_RT_Handle v270; 
  R_RT_BufferHandle v271; 
  R_RT_BufferHandle v272; 
  R_RT_BufferHandle v273; 
  R_RT_BufferHandle v274; 
  R_RT_BufferHandle v275; 
  R_RT_Handle v276; 
  R_RT_Handle v277; 
  R_RT_Handle v278; 
  R_RT_Handle v279; 
  R_RT_Handle v280; 
  R_RT_Handle v281; 
  R_RT_Handle v282; 
  R_RT_Handle v283; 
  R_RT_Handle v284; 
  R_RT_Handle v285; 
  R_RT_Handle v286; 
  __m256i v287; 
  R_RT_Handle v288; 
  R_RT_Handle v289; 
  R_RT_Handle v290; 
  R_RT_Handle v291; 
  R_RT_Handle v292; 
  R_RT_Handle v293; 
  R_RT_Handle v294; 
  R_RT_Handle v295; 
  R_RT_Handle v296; 
  R_RT_BufferHandle v297; 
  R_RT_BufferHandle v298; 
  R_RT_ColorHandle v299; 
  R_RT_ColorHandle v300; 
  R_RT_BufferHandle v301; 
  R_RT_BufferHandle v302; 
  R_RT_BufferHandle v303; 
  R_RT_Handle v304; 
  R_RT_Handle v305; 
  R_RT_BufferHandle v306; 
  R_RT_BufferHandle v307; 
  R_RT_BufferHandle v308; 
  R_RT_BufferHandle v309; 
  R_RT_Handle v310; 
  R_RT_Handle v311; 
  R_RT_Handle v312; 
  R_RT_Handle v313; 
  R_RT_BufferHandle v314; 
  R_RT_BufferHandle v315; 
  R_RT_BufferHandle v316; 
  R_RT_BufferHandle v317; 
  R_RT_Handle v318; 
  R_RT_Handle v319; 
  R_RT_Handle v320; 
  R_RT_Handle v321; 
  R_RT_Handle v322; 
  R_RT_Handle v323; 
  R_RT_Handle v324; 
  R_RT_Handle v325; 
  R_RT_BufferHandle v326; 
  R_RT_BufferHandle v327; 
  R_RT_BufferHandle v328; 
  R_RT_BufferHandle v329; 
  R_RT_BufferHandle v330; 
  R_RT_BufferHandle v331; 
  R_RT_BufferHandle v332; 
  R_RT_BufferHandle v333; 
  R_RT_BufferHandle v334; 
  R_RT_BufferHandle v335; 
  R_RT_BufferHandle v336; 
  int dataa[8]; 
  int v338[8]; 
  R_RT_BufferHandle v339; 
  R_RT_BufferHandle v340; 
  R_RT_BufferHandle v341; 
  R_RT_BufferHandle v342; 
  __int16 v343; 
  int v344; 
  R_RT_BufferHandle result; 
  R_RT_BufferHandle v347; 
  R_RT_BufferHandle v348; 
  R_RT_BufferHandle v349; 
  __m256i v350; 
  R_RT_BufferHandle v351; 
  R_RT_BufferHandle v352; 
  R_RT_BufferHandle v353; 
  ComputeCmdBufState state; 

  v228 = -2i64;
  _RDI = viewInfo;
  _RBX = gfxContext;
  passIndex = (unsigned int)gpConfig->passIndex;
  Sys_ProfBeginNamedEvent(0xFF800000, "RB_GP_ProcessSurfs");
  v11 = BYTE1(*((_DWORD *)&_RDI->viewportFeatures + 11)) & 1;
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
  device = _RBX->state->device;
  R_LockIfGfxImmediateContext(device);
  v13 = &s_gpBackendFrameData[data->smpFrame];
  v185 = 8576 * passIndex;
  if ( !v13->gpBackendPass[passIndex].dynSurfCount && v13->gpBackendPass[passIndex].visibleSModelCollectionCount <= 0 || !v13->gpBackendPass[passIndex].batchCount )
  {
    v14 = device;
    goto LABEL_161;
  }
  v15 = _RBX->state;
  R_InitGfxComputeCmdBufState(&state, v15);
  R_GfxComputeWaitForGraphics(v15);
  R_ProfBeginNamedEvent(&state, "Begin GPU pipeline backend");
  R_GPU_BeginTimer(GPU_TIMER_GP_TRIANGLE_PASS);
  __asm
  {
    vmovups ymm1, ymmword ptr [rdi+34E8h]
    vmovups [rbp+1C00h+var_1B20], ymm1
    vmovups ymm0, ymmword ptr [rdi+3508h]
    vmovups [rbp+1C00h+var_1B00], ymm0
    vmovups ymm0, ymmword ptr [rdi+3528h]
    vmovups [rbp+1C00h+var_1B60], ymm0
    vmovups ymm0, ymmword ptr [rdi+3548h]
    vmovups [rbp+1C00h+var_1A20], ymm0
    vmovups ymm0, ymmword ptr [rdi+3568h]
    vmovups [rbp+1C00h+var_1B80], ymm0
    vmovups ymm0, ymmword ptr [rdi+3588h]
    vmovups [rbp+1C00h+var_1A80], ymm0
    vmovups ymm0, ymmword ptr [rdi+35A8h]
    vmovups [rbp+1C00h+var_1BA0], ymm0
    vmovups ymm0, ymmword ptr [rdi+35C8h]
    vmovups [rbp+1C00h+var_1A60], ymm0
    vmovups ymm0, ymmword ptr [rdi+35E8h]
    vmovups [rbp+1C00h+var_1A40], ymm0
    vmovups ymm0, ymmword ptr [rdi+3608h]
    vmovups [rbp+1C00h+var_1AC0], ymm0
    vmovups ymm0, ymmword ptr [rdi+3628h]
    vmovups [rbp+1C00h+var_1AA0], ymm0
    vmovd   eax, xmm1
  }
  if ( !(_WORD)_EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 3406, ASSERT_TYPE_ASSERT, "(!indexBuffer.IsNull())", (const char *)&queryFormat, "!indexBuffer.IsNull()") )
    __debugbreak();
  if ( !v214.m256i_i16[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 3407, ASSERT_TYPE_ASSERT, "(!indirectArgsBuffer.IsNull())", (const char *)&queryFormat, "!indirectArgsBuffer.IsNull()") )
    __debugbreak();
  if ( !v211.m256i_i16[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 3408, ASSERT_TYPE_ASSERT, "(!perSurfDataBuffer.IsNull())", (const char *)&queryFormat, "!perSurfDataBuffer.IsNull()") )
    __debugbreak();
  if ( !v221.m256i_i16[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 3409, ASSERT_TYPE_ASSERT, "(!batchSubMeshOffsetsBuffer.IsNull())", (const char *)&queryFormat, "!batchSubMeshOffsetsBuffer.IsNull()") )
    __debugbreak();
  if ( !v210.m256i_i16[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 3410, ASSERT_TYPE_ASSERT, "(!subMeshWorkgroupArgsBuffer.IsNull())", (const char *)&queryFormat, "!subMeshWorkgroupArgsBuffer.IsNull()") )
    __debugbreak();
  if ( !v218.m256i_i16[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 3411, ASSERT_TYPE_ASSERT, "(!subMeshCountBuffer.IsNull())", (const char *)&queryFormat, "!subMeshCountBuffer.IsNull()") )
    __debugbreak();
  if ( !v209.m256i_i16[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 3412, ASSERT_TYPE_ASSERT, "(!clusterPassIndirectArgsBuffer.IsNull())", (const char *)&queryFormat, "!clusterPassIndirectArgsBuffer.IsNull()") )
    __debugbreak();
  if ( !v219.m256i_i16[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 3413, ASSERT_TYPE_ASSERT, "(!clusterPPSumIndirectArgsBuffer.IsNull())", (const char *)&queryFormat, "!clusterPPSumIndirectArgsBuffer.IsNull()") )
    __debugbreak();
  if ( gpConfig->occlusionPass )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rdi+3340h]
      vmovups [rbp+1C00h+var_AC0], ymm0
    }
    _R13 = &v350;
  }
  else
  {
    v343 = 0;
    v344 = 0;
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu [rbp+1C00h+var_B50], xmm0
    }
    _R13 = (__m256i *)&v343;
  }
  R_RT_CreateBufferInternal(&result, 4u, 1u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_BufferRaw|R_RT_Flag_RWView, R_RT_FlagInternal_None, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "SModel Surf Emit Count Buffer", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp(3417)");
  R_RT_CreateBufferInternal(&v347, 4u, 1u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_BufferRaw|R_RT_Flag_RWView, R_RT_FlagInternal_None, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "SModel Surf Count Buffer", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp(3418)");
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
      v32 = rgp.world->smodels.clutterTintDataBuffer.rwView.rwView;
      if ( v32 != 3 && v32 && rgp.world->smodels.clutterTintDataBuffer.data && rgp.world->smodels.clutterTintDataBuffer.view.view >= 2 )
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
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+1C00h+var_B20.baseclass_0.m_surfaceID]
      vmovups [rbp+1C00h+var_1760], ymm0
      vmovups ymm1, ymmword ptr [rbp+1C00h+result.baseclass_0.m_surfaceID]
      vmovups [rbp+1C00h+var_1740], ymm1
      vmovups ymm0, [rbp+1C00h+var_1A60]
      vmovups [rbp+1C00h+var_1720], ymm0
      vmovups ymm0, [rbp+1C00h+var_1BA0]
      vmovups [rbp+1C00h+var_1700], ymm0
      vmovups ymm0, [rbp+1C00h+var_1A80]
      vmovups [rbp+1C00h+var_16E0], ymm0
      vmovups ymm0, [rbp+1C00h+var_1B80]
      vmovups [rbp+1C00h+var_16C0], ymm0
      vmovups ymm0, [rbp+1C00h+var_1A20]
      vmovups [rbp+1C00h+var_16A0], ymm0
      vmovups ymm0, [rbp+1C00h+var_1B60]
      vmovups [rbp+1C00h+var_1680], ymm0
      vmovups xmm0, xmmword ptr [rbx]
      vmovups [rbp+1C00h+var_19C0], xmm0
    }
    RB_GP_GenerateSurfs(&v226, &state, data, passIndex, &v254, &v253, &v252, &v251, &v250, &v249, &v248, &v247);
  }
  if ( gpConfig->reusePrepassVisData )
  {
    _RAX = R_RT_CreateBufferInternal(&v351, 8u, 0x10000u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_BufferStructured|R_RT_Flag_RWView, R_RT_FlagInternal_None, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, "Culled SubMesh Buffer", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp(3444)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups [rbp+1C00h+var_1AE0], ymm0
    }
    _RAX = R_RT_CreateBufferInternal(&v352, 4u, 0x10001u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_BufferRaw|R_RT_Flag_RWView, R_RT_FlagInternal_None, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, "SubMesh Cluster Offsets Buffer", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp(3445)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups [rbp+1C00h+var_1C70], ymm0
    }
    _RAX = R_RT_CreateBufferInternal(&v353, 8u, 0x40000u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_BufferStructured|R_RT_Flag_RWView, R_RT_FlagInternal_None, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, "Culled Tri Cluster Buffer", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp(3446)");
    __asm { vmovups ymm0, ymmword ptr [rax] }
  }
  else
  {
    __asm
    {
      vmovups ymm0, [rbp+1C00h+var_1A40]
      vmovups [rbp+1C00h+var_1AE0], ymm0
      vmovups ymm0, [rbp+1C00h+var_1AC0]
      vmovups [rbp+1C00h+var_1C70], ymm0
      vmovups ymm0, [rbp+1C00h+var_1AA0]
    }
  }
  __asm { vmovups [rbp+1C00h+var_1B40], ymm0 }
  R_RT_CreateBufferInternal(&v341, 4u, 0x10000u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_BufferRaw|R_RT_Flag_RWView, R_RT_FlagInternal_None, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, "SubMesh Cluster Counts Buffer", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp(3455)");
  v229.m256i_i16[0] = 0;
  v229.m256i_i32[2] = 0;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rbp+1C00h+var_1998+10h], xmm0
    vmovups ymm0, [rbp+1C00h+var_1AA0]
    vmovups [rbp+1C00h+var_1660], ymm0
    vmovups ymm0, ymmword ptr [rbp+1C00h+var_BA0.baseclass_0.m_surfaceID]
    vmovups [rbp+1C00h+var_1640], ymm0
    vmovups ymm1, [rbp+1C00h+var_1AE0]
    vmovups [rbp+1C00h+var_1620], ymm1
    vmovups ymm0, [rbp+1C00h+var_1998]
    vmovups [rbp+1C00h+var_1600], ymm0
    vmovups ymm1, ymmword ptr [r13+0]
    vmovups [rbp+1C00h+var_15E0], ymm1
    vmovups ymm0, [rbp+1C00h+var_1AC0]
    vmovups [rbp+1C00h+var_15C0], ymm0
    vmovups ymm0, [rbp+1C00h+var_1A40]
    vmovups [rbp+1C00h+var_15A0], ymm0
    vmovups ymm0, [rbp+1C00h+var_1B60]
    vmovups [rbp+1C00h+var_1580], ymm0
    vmovups ymm0, [rbp+1C00h+var_1B80]
    vmovups [rbp+1C00h+var_1560], ymm0
    vmovups ymm0, [rbp+1C00h+var_1BA0]
    vmovups [rbp+1C00h+var_1540], ymm0
  }
  R_GP_CullClusters(&state, data, _RDI, passIndex, gpConfig->reusePrepassVisData, 0, &v264, &v263, &v262, &v261, &v260, &v259, &v258, &v257, &v256, &v255);
  R_RT_CreateBufferInternal(&v348, 4u, 0x100u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_BufferRaw|R_RT_Flag_RWView, R_RT_FlagInternal_None, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, "SubMesh Cluster Reduce Buffer", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp(3471)");
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+1C00h+var_BA0.baseclass_0.m_surfaceID]
    vmovups [rbp+1C00h+var_1520], ymm0
  }
  R_HW_AddResourceTransition(&state, &v265, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(&state);
  __asm
  {
    vmovups ymm0, [rbp+1C00h+var_1C70]
    vmovups [rbp+1C00h+var_1500], ymm0
    vmovups ymm0, ymmword ptr [rbp+1C00h+var_B00.baseclass_0.m_surfaceID]
    vmovups [rbp+1C00h+var_14E0], ymm0
    vmovups ymm1, ymmword ptr [rbp+1C00h+var_BA0.baseclass_0.m_surfaceID]
    vmovups [rbp+1C00h+var_14C0], ymm1
    vmovups ymm0, [rbp+1C00h+var_1A60]
    vmovups [rbp+1C00h+var_14A0], ymm0
  }
  R_GP_PrefixSum256(&state, data, passIndex, 0, &v269, &v268, &v267, &v266);
  R_RT_CreateBufferInternal(&v339, 0xCu, 1u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_BufferIndirectArgs|R_RT_Flag_BufferRaw|R_RT_Flag_RWView, R_RT_FlagInternal_None, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, "Triangle Pass Indirect Args Buffer", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp(3485)");
  R_RT_CreateBufferInternal(&v342, 0xCu, 1u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_BufferIndirectArgs|R_RT_Flag_BufferRaw|R_RT_Flag_RWView, R_RT_FlagInternal_None, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, "Triangle Prefix Sum Indirect Args Buffer", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp(3486)");
  __asm
  {
    vmovups ymm0, [rbp+1C00h+var_1C70]
    vmovups [rbp+1C00h+var_1480], ymm0
  }
  R_HW_AddResourceTransition(&state, &v270, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(&state);
  v230.m256i_i16[0] = 0;
  v230.m256i_i32[2] = 0;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rbp+1C00h+var_1978+10h], xmm0
    vmovups ymm1, ymmword ptr [rbp+1C00h+var_B80.baseclass_0.m_surfaceID]
    vmovups [rbp+1C00h+var_1460], ymm1
    vmovups ymm0, ymmword ptr [rbp+1C00h+var_BE0.baseclass_0.m_surfaceID]
    vmovups [rbp+1C00h+var_1440], ymm0
    vmovups ymm1, [rbp+1C00h+var_1978]
    vmovups [rbp+1C00h+var_1420], ymm1
    vmovups ymm0, [rbp+1C00h+var_1C70]
    vmovups [rbp+1C00h+var_1400], ymm0
    vmovups ymm0, [rbp+1C00h+var_1A80]
    vmovups [rbp+1C00h+var_13E0], ymm0
  }
  R_GP_InitIndirectArgsFromPrefixSum(&state, data, passIndex, 0, 0x200u, 0x10000u, 0x40000u, &v275, &v274, &v273, &v272, &v271);
  R_RT_CreateBufferInternal(&v336, 4u, 0x40000u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_BufferRaw|R_RT_Flag_RWView, R_RT_FlagInternal_None, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, "Cluster Workgroup Args Buffer", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp(3503)");
  R_RT_CreateBufferInternal(&v340, 4u, 0x40000u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_BufferRaw|R_RT_Flag_RWView, R_RT_FlagInternal_None, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, "Workgroup Triangle Counts Buffer", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp(3504)");
  __asm
  {
    vmovups ymm0, [rbp+1C00h+var_1AE0]
    vmovups [rbp+1C00h+var_13C0], ymm0
  }
  R_HW_AddResourceTransition(&state, &v276, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(&state);
  v73 = (_DWORD *)((char *)&s_gpBackendFrameData[data->smpFrame] + v185);
  if ( gpConfig->reusePrepassVisData )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+1C00h+var_BC0.baseclass_0.m_surfaceID]
      vmovups ymmword ptr [rbp+1C00h+var_1280.m_surfaceID], ymm0
      vmovups ymm1, [rbp+1C00h+var_1B40]
      vmovups ymmword ptr [rbp+1C00h+var_12A0.m_surfaceID], ymm1
      vmovups ymm0, ymmword ptr [rbp+1C00h+var_C40.baseclass_0.m_surfaceID]
      vmovups ymmword ptr [rbp+1C00h+var_12C0.m_surfaceID], ymm0
      vmovups ymm0, [rbp+1C00h+var_1AA0]
      vmovups ymmword ptr [rbp+1C00h+var_12E0.m_surfaceID], ymm0
      vmovups ymm0, [rbp+1C00h+var_1AC0]
      vmovups ymmword ptr [rbp+1C00h+var_1300.m_surfaceID], ymm0
      vmovups ymm0, [rbp+1C00h+var_1A40]
      vmovups ymmword ptr [rbp+1C00h+var_1320.m_surfaceID], ymm0
      vmovups ymm0, [rbp+1C00h+var_1C70]
      vmovups ymmword ptr [rbp+1C00h+var_1340.m_surfaceID], ymm0
      vmovups ymm0, [rbp+1C00h+var_1AE0]
      vmovups ymmword ptr [rbp+1C00h+var_1360.m_surfaceID], ymm0
      vmovups ymm0, [rbp+1C00h+var_1B60]
      vmovups ymmword ptr [rbp+1C00h+var_1380.m_surfaceID], ymm0
      vmovups ymm0, [rbp+1C00h+var_1B80]
      vmovups ymmword ptr [rbp+1C00h+var_13A0.m_surfaceID], ymm0
      vmovups ymm0, [rbp+1C00h+var_1BA0]
      vmovups [rbp+1C00h+var_1260], ymm0
    }
    if ( !v73[33] && (int)v73[16] <= 0 || !*v73 )
      goto LABEL_122;
    dataa[0] = rg.gpuCullTriSModels;
    dataa[1] = rg.gpuCullTriRigidModels;
    dataa[2] = rg.gpuCullTriSkinnedModels;
    dataa[4] = rg.gpuCullTriMinThreshold;
    dataa[5] = rg.gpuCullClusterMinThreshold;
    R_UploadAndSetComputeConstants(&state, 7, dataa, 0x20u, NULL);
    Surface = (GfxShaderBufferView *)R_RT_Handle::GetSurface(&v277);
    if ( (Surface->view & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
      __debugbreak();
    views = Surface + 68;
    R_SetComputeViews(&state, 19, 1, (const GfxShaderBufferView *const *)&views);
    v86 = (GfxShaderBufferView *)R_RT_Handle::GetSurface(&v278);
    if ( (v86->view & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
      __debugbreak();
    v188 = v86 + 68;
    R_SetComputeViews(&state, 2, 1, (const GfxShaderBufferView *const *)&v188);
    v87 = (GfxShaderBufferView *)R_RT_Handle::GetSurface(&v279);
    if ( (v87->view & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
      __debugbreak();
    v189 = v87 + 68;
    R_SetComputeViews(&state, 20, 1, (const GfxShaderBufferView *const *)&v189);
    v88 = (GfxShaderBufferView *)R_RT_Handle::GetSurface(&v280);
    if ( (v88->view & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
      __debugbreak();
    v190 = v88 + 68;
    R_SetComputeViews(&state, 21, 1, (const GfxShaderBufferView *const *)&v190);
    v89 = (GfxShaderBufferView *)R_RT_Handle::GetSurface(&v281);
    if ( (v89->view & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
      __debugbreak();
    v191 = v89 + 68;
    R_SetComputeViews(&state, 22, 1, (const GfxShaderBufferView *const *)&v191);
    v90 = (GfxShaderBufferView *)R_RT_Handle::GetSurface(&v282);
    if ( (v90->view & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
      __debugbreak();
    v192 = v90 + 68;
    R_SetComputeViews(&state, 23, 1, (const GfxShaderBufferView *const *)&v192);
    v91 = (GfxShaderBufferView *)R_RT_Handle::GetSurface(&v283);
    if ( (v91->view & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
      __debugbreak();
    v193 = v91 + 68;
    R_SetComputeViews(&state, 24, 1, (const GfxShaderBufferView *const *)&v193);
    v92 = R_RT_Handle::GetSurface(&v284);
    if ( (v92->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
      __debugbreak();
    p_rwView = &v92->m_buffer.m_wrappedBuffer.rwView;
    R_SetComputeRWViewsWithCounters(&state, 5, 1, (const GfxShaderBufferRWView *const *)&p_rwView, NULL);
    v93 = R_RT_Handle::GetSurface(&v285);
    if ( (v93->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
      __debugbreak();
    v195 = &v93->m_buffer.m_wrappedBuffer.rwView;
    R_SetComputeRWViewsWithCounters(&state, 6, 1, (const GfxShaderBufferRWView *const *)&v195, NULL);
    v94 = R_RT_Handle::GetSurface(&v286);
    if ( (v94->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
      __debugbreak();
    v196 = &v94->m_buffer.m_wrappedBuffer.rwView;
    R_SetComputeRWViewsWithCounters(&state, 7, 1, (const GfxShaderBufferRWView *const *)&v196, NULL);
    R_SetComputeShader(&state, rgp.gpClusterWorkgroupAndVisbitsGenPass);
    v95 = (R_RT_Handle *)&v287;
  }
  else
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+1C00h+var_C40.baseclass_0.m_surfaceID]
      vmovups ymmword ptr [rbp+1C00h+var_11C0.m_surfaceID], ymm0
      vmovups ymm0, [rbp+1C00h+var_1C70]
      vmovups ymmword ptr [rbp+1C00h+var_11E0.m_surfaceID], ymm0
      vmovups ymm0, [rbp+1C00h+var_1AE0]
      vmovups ymmword ptr [rbp+1C00h+var_1200.m_surfaceID], ymm0
      vmovups ymm0, [rbp+1C00h+var_1B60]
      vmovups ymmword ptr [rbp+1C00h+var_1220.m_surfaceID], ymm0
      vmovups ymm0, [rbp+1C00h+var_1B80]
      vmovups ymmword ptr [rbp+1C00h+var_1240.m_surfaceID], ymm0
      vmovups ymm0, [rbp+1C00h+var_1BA0]
      vmovups ymmword ptr [rbp+1C00h+var_11A0.m_surfaceID], ymm0
    }
    if ( !v73[33] && (int)v73[16] <= 0 || !*v73 )
      goto LABEL_122;
    v338[0] = rg.gpuCullTriSModels;
    v338[1] = rg.gpuCullTriRigidModels;
    v338[2] = rg.gpuCullTriSkinnedModels;
    v338[4] = rg.gpuCullTriMinThreshold;
    v338[5] = rg.gpuCullClusterMinThreshold;
    R_UploadAndSetComputeConstants(&state, 7, v338, 0x20u, NULL);
    v102 = (GfxShaderBufferView *)R_RT_Handle::GetSurface(&v288);
    if ( (v102->view & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
      __debugbreak();
    v197 = v102 + 68;
    R_SetComputeViews(&state, 19, 1, (const GfxShaderBufferView *const *)&v197);
    v103 = (GfxShaderBufferView *)R_RT_Handle::GetSurface(&v289);
    if ( (v103->view & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
      __debugbreak();
    v198 = v103 + 68;
    R_SetComputeViews(&state, 2, 1, (const GfxShaderBufferView *const *)&v198);
    v104 = (GfxShaderBufferView *)R_RT_Handle::GetSurface(&v290);
    if ( (v104->view & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
      __debugbreak();
    v199 = v104 + 68;
    R_SetComputeViews(&state, 20, 1, (const GfxShaderBufferView *const *)&v199);
    v105 = (GfxShaderBufferView *)R_RT_Handle::GetSurface(&v291);
    if ( (v105->view & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
      __debugbreak();
    v200 = v105 + 68;
    R_SetComputeViews(&state, 21, 1, (const GfxShaderBufferView *const *)&v200);
    v106 = R_RT_Handle::GetSurface(&v292);
    if ( (v106->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
      __debugbreak();
    v201 = &v106->m_buffer.m_wrappedBuffer.rwView;
    R_SetComputeRWViewsWithCounters(&state, 5, 1, (const GfxShaderBufferRWView *const *)&v201, NULL);
    R_SetComputeShader(&state, rgp.gpClusterWorkgroupGenPass);
    v95 = &v293;
  }
  v107 = R_RT_Handle::GetSurface(v95);
  if ( (v107->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  R_DispatchIndirect(&state, v107->m_buffer.m_wrappedBuffer.buffer, 0);
  v15 = _RBX->state;
LABEL_122:
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+1C00h+var_BE0.baseclass_0.m_surfaceID]
    vmovups [rbp+1C00h+var_1180], ymm0
  }
  R_HW_AddResourceTransition(&state, &v294, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+1C00h+var_C40.baseclass_0.m_surfaceID]
    vmovups [rbp+1C00h+var_1160], ymm0
  }
  R_HW_AddResourceTransition(&state, &v295, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, [rbp+1C00h+var_1B40]
    vmovups [rbp+1C00h+var_1140], ymm0
  }
  R_HW_AddResourceTransition(&state, &v296, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(&state);
  v231.m256i_i16[0] = 0;
  v231.m256i_i32[2] = 0;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rbp+1C00h+var_1958+10h], xmm0
    vmovups ymm1, ymmword ptr [rbp+1C00h+var_BC0.baseclass_0.m_surfaceID]
    vmovups [rbp+1C00h+var_1120], ymm1
    vmovups ymm0, [rbp+1C00h+var_1B40]
    vmovups [rbp+1C00h+var_1100], ymm0
    vmovups ymm0, ymmword ptr [rbp+1C00h+var_1958]
    vmovups [rbp+1C00h+var_10E0], ymm0
    vmovups ymm1, ymmword ptr [r13+0]
    vmovups [rbp+1C00h+var_10C0], ymm1
    vmovups ymm0, [rbp+1C00h+var_1B60]
    vmovups [rbp+1C00h+var_10A0], ymm0
    vmovups ymm0, ymmword ptr [rbp+1C00h+var_C40.baseclass_0.m_surfaceID]
    vmovups [rbp+1C00h+var_1080], ymm0
    vmovups ymm1, ymmword ptr [rbp+1C00h+var_BE0.baseclass_0.m_surfaceID]
    vmovups [rbp+1C00h+var_1060], ymm1
  }
  R_GP_CullTriangles(&state, data, _RDI, passIndex, gpConfig->reusePrepassVisData, &v303, &v302, &v301, &v300, &v299, &v298, &v297);
  R_RT_CreateBufferInternal(&v349, 4u, 0x200u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_BufferRaw|R_RT_Flag_RWView, R_RT_FlagInternal_None, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, "SubMesh Cluster Reduce Buffer", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp(3550)");
  R_RT_CreateBufferInternal(&v335, 4u, 0x40001u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_BufferRaw|R_RT_Flag_RWView, R_RT_FlagInternal_None, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, "SubMesh Cluster Offsets Buffer", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp(3551)");
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+1C00h+var_B80.baseclass_0.m_surfaceID]
    vmovups [rbp+1C00h+var_1040], ymm0
  }
  R_HW_AddResourceTransition(&state, &v304, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+1C00h+var_BC0.baseclass_0.m_surfaceID]
    vmovups [rbp+1C00h+var_1020], ymm0
  }
  R_HW_AddResourceTransition(&state, &v305, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(&state);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+1C00h+var_C60.baseclass_0.m_surfaceID]
    vmovups [rbp+1C00h+var_1000], ymm0
    vmovups ymm1, ymmword ptr [rbp+1C00h+var_AE0.baseclass_0.m_surfaceID]
    vmovups [rbp+1C00h+var_FE0], ymm1
    vmovups ymm0, ymmword ptr [rbp+1C00h+var_BC0.baseclass_0.m_surfaceID]
    vmovups [rbp+1C00h+var_FC0], ymm0
    vmovups ymm1, ymmword ptr [rbp+1C00h+var_B80.baseclass_0.m_surfaceID]
    vmovups [rbp+1C00h+var_FA0], ymm1
  }
  R_GP_PrefixSum512(&state, data, passIndex, 0, &v309, &v308, &v307, &v306);
  __asm
  {
    vmovups ymm0, [rbp+1C00h+var_1B20]
    vmovups [rbp+1C00h+var_F80], ymm0
  }
  R_HW_AddResourceTransition(&state, &v310, 0xFFFFFFFF, D3D12_RESOURCE_STATE_INDEX_BUFFER, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, [rbp+1C00h+var_1B00]
    vmovups [rbp+1C00h+var_F60], ymm0
  }
  R_HW_AddResourceTransition(&state, &v311, 0xFFFFFFFF, D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, [rbp+1C00h+var_1B40]
    vmovups [rbp+1C00h+var_F40], ymm0
  }
  R_HW_AddResourceTransition(&state, &v312, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+1C00h+var_C60.baseclass_0.m_surfaceID]
    vmovups [rbp+1C00h+var_F20], ymm0
  }
  R_HW_AddResourceTransition(&state, &v313, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(&state);
  __asm
  {
    vmovups ymm0, [rbp+1C00h+var_1B00]
    vmovups [rbp+1C00h+var_F00], ymm0
    vmovups ymm0, ymmword ptr [rbp+1C00h+var_C60.baseclass_0.m_surfaceID]
    vmovups [rbp+1C00h+var_EE0], ymm0
    vmovups ymm0, [rbp+1C00h+var_1C70]
    vmovups [rbp+1C00h+var_EC0], ymm0
    vmovups ymm0, [rbp+1C00h+var_1A20]
    vmovups [rbp+1C00h+var_EA0], ymm0
  }
  R_GP_InitDrawIndirectArgs(&state, data, passIndex, 1, &v317, &v316, &v315, &v314);
  __asm
  {
    vmovups ymm0, [rbp+1C00h+var_1B20]
    vmovups ymmword ptr [rbp+1C00h+var_E00.m_surfaceID], ymm0
    vmovups ymm0, ymmword ptr [rbp+1C00h+var_C60.baseclass_0.m_surfaceID]
    vmovups ymmword ptr [rbp+1C00h+var_E20.m_surfaceID], ymm0
    vmovups ymm0, [rbp+1C00h+var_1B40]
    vmovups ymmword ptr [rbp+1C00h+var_E40.m_surfaceID], ymm0
    vmovups ymm0, [rbp+1C00h+var_1B60]
    vmovups ymmword ptr [rbp+1C00h+var_E60.m_surfaceID], ymm0
    vmovups ymm0, ymmword ptr [rbp+1C00h+var_C40.baseclass_0.m_surfaceID]
    vmovups ymmword ptr [rbp+1C00h+var_E80.m_surfaceID], ymm0
    vmovups ymm1, ymmword ptr [rbp+1C00h+var_BE0.baseclass_0.m_surfaceID]
    vmovups ymmword ptr [rbp+1C00h+var_DE0.m_surfaceID], ymm1
  }
  smpFrame = data->smpFrame;
  v140 = (_DWORD *)((char *)&s_gpBackendFrameData[smpFrame] + v185);
  if ( (v140[33] || (int)v140[16] > 0) && *v140 )
  {
    v141 = (GfxShaderBufferView *)R_RT_Handle::GetSurface(&v318);
    if ( (v141->view & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
      __debugbreak();
    v202 = v141 + 68;
    R_SetComputeViews(&state, 13, 1, (const GfxShaderBufferView *const *)&v202);
    v142 = (GfxShaderBufferView *)R_RT_Handle::GetSurface(&v319);
    if ( (v142->view & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
      __debugbreak();
    v203 = v142 + 68;
    R_SetComputeViews(&state, 2, 1, (const GfxShaderBufferView *const *)&v203);
    p_view = &gfxBuf.unifiedIndexBuffer.view;
    R_SetComputeViews(&state, 9, 1, (const GfxShaderBufferView *const *)&p_view);
    v205 = &gfxBuf.uibVirtPageTableBuffer.view;
    R_SetComputeViews(&state, 10, 1, (const GfxShaderBufferView *const *)&v205);
    v143 = (GfxShaderBufferView *)R_RT_Handle::GetSurface(&v320);
    if ( (v143->view & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
      __debugbreak();
    v206 = v143 + 68;
    R_SetComputeViews(&state, 14, 1, (const GfxShaderBufferView *const *)&v206);
    v144 = (GfxShaderBufferView *)R_RT_Handle::GetSurface(&v321);
    if ( (v144->view & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
      __debugbreak();
    v207 = v144 + 68;
    R_SetComputeViews(&state, 15, 1, (const GfxShaderBufferView *const *)&v207);
    v145 = R_RT_Handle::GetSurface(&v322);
    if ( (v145->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
      __debugbreak();
    v208 = &v145->m_buffer.m_wrappedBuffer.rwView;
    R_SetComputeRWViewsWithCounters(&state, 0, 1, (const GfxShaderBufferRWView *const *)&v208, NULL);
    R_SetComputeShader(&state, rgp.gpIndexedTriangleExpandPass);
    smpFrame = (unsigned __int64)R_RT_Handle::GetSurface(&v323);
    if ( (*(_DWORD *)(smpFrame + 8) & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
      __debugbreak();
    R_DispatchIndirect(&state, *(ID3D12Resource **)(smpFrame + 1080), 0);
    LODWORD(smpFrame) = data->smpFrame;
  }
  __asm
  {
    vmovups ymm0, [rbp+1C00h+var_1B20]
    vmovups [rbp+1C00h+var_DC0], ymm0
  }
  R_HW_AddResourceTransition(&state, &v324, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_INDEX_BUFFER, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, [rbp+1C00h+var_1B00]
    vmovups [rbp+1C00h+var_DA0], ymm0
  }
  R_HW_AddResourceTransition(&state, &v325, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_FlushResourceTransitions(&state);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+1C00h+var_C60.baseclass_0.m_surfaceID]
    vmovups [rbp+1C00h+var_1B20], ymm0
  }
  v149 = &s_gpBackendFrameData[(unsigned int)smpFrame].gpBackendPass[(unsigned __int64)v185 / 0x2180];
  if ( !rg.stats || !r_gpShowStats->current.integer || !v149->dynSurfCount && v149->visibleSModelCollectionCount <= 0 || !v149->batchCount )
    goto LABEL_158;
  if ( gpConfig->occlusionPass )
  {
    if ( (_DWORD)passIndex )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 3022, ASSERT_TYPE_ASSERT, "(passIndex == GFX_GP_PASS_CAMERA)", (const char *)&queryFormat, "passIndex == GFX_GP_PASS_CAMERA") )
        __debugbreak();
      __asm { vmovups ymm0, [rbp+1C00h+var_1B20] }
    }
    __asm
    {
      vmovups ymm1, [rbp+1C00h+var_1B00]
      vmovups [rbp+1C00h+var_D80], ymm1
      vmovups [rbp+1C00h+var_D60], ymm0
      vmovups ymm0, [rbp+1C00h+var_1C70]
      vmovups [rbp+1C00h+var_D40], ymm0
      vmovups ymm0, [rbp+1C00h+var_1A20]
      vmovups [rbp+1C00h+var_D20], ymm0
    }
    R_GP_ReadBackGPStats_PostOcclusion(&state, data, passIndex, &v329, &v328, &v327, &v326);
    goto LABEL_156;
  }
  __asm
  {
    vmovups ymm0, [rbp+1C00h+var_1B00]
    vmovups [rbp+1C00h+var_D00], ymm0
    vmovups ymm0, ymmword ptr [rbp+1C00h+var_B20.baseclass_0.m_surfaceID]
    vmovups [rbp+1C00h+var_CE0], ymm0
    vmovups ymm1, ymmword ptr [rbp+1C00h+result.baseclass_0.m_surfaceID]
    vmovups [rbp+1C00h+var_CC0], ymm1
    vmovups ymm0, ymmword ptr [rbp+1C00h+var_C60.baseclass_0.m_surfaceID]
    vmovups [rbp+1C00h+var_CA0], ymm0
    vmovups ymm0, [rbp+1C00h+var_1C70]
    vmovups [rbp+1C00h+var_C80], ymm0
    vmovups ymm0, [rbp+1C00h+var_1A20]
    vmovups [rbp+1C00h+var_1920], ymm0
  }
  R_GP_ReadBackGPStats_PreOcclusion(&state, data, passIndex, &v233, &v334, &v333, &v332, &v331, &v330);
  if ( (_DWORD)passIndex == 1 )
LABEL_156:
    GPReadBackRing::GPUCopyToRingBuffer(&s_gpReadBackRing[passIndex], &state);
  R_CollectGPBackendStats(v149);
LABEL_158:
  R_GPU_EndTimer();
  R_ProfEndNamedEvent(&state);
  R_ComputeWaitForCompute(&state, PIPE_FLUSH_PARTIAL);
  if ( gpConfig->reusePrepassVisData )
  {
    __asm
    {
      vmovups ymm0, [rbp+1C00h+var_1AE0]
      vmovups [rbp+1C00h+var_1900], ymm0
      vmovups xmm0, xmmword ptr [rbx]
      vmovups [rbp+1C00h+var_19F0], xmm0
    }
    R_RT_Destroy(&v223, &v234);
    __asm
    {
      vmovups ymm0, [rbp+1C00h+var_1C70]
      vmovups [rbp+1C00h+var_18E0], ymm0
      vmovups xmm0, xmmword ptr [rbx]
      vmovups [rbp+1C00h+var_19E0], xmm0
    }
    R_RT_Destroy(&v224, &v235);
    __asm
    {
      vmovups ymm0, [rbp+1C00h+var_1B40]
      vmovups [rbp+1C00h+var_18C0], ymm0
      vmovups xmm0, xmmword ptr [rbx]
      vmovups [rbp+1C00h+var_19D0], xmm0
    }
    R_RT_Destroy(&v225, &v236);
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+1C00h+result.baseclass_0.m_surfaceID]
    vmovups [rbp+1C00h+var_18A0], ymm0
    vmovups xmm1, xmmword ptr [rbx]
    vmovups [rbp+1C00h+var_19B0], xmm1
  }
  R_RT_Destroy(&v227, &v237);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+1C00h+var_B20.baseclass_0.m_surfaceID]
    vmovups [rbp+1C00h+var_1880], ymm0
    vmovups xmm1, xmmword ptr [rbx]
    vmovups [rbp+1C00h+var_1930], xmm1
  }
  R_RT_Destroy(&v232, &v238);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+1C00h+var_BA0.baseclass_0.m_surfaceID]
    vmovups [rbp+1C00h+var_1860], ymm0
    vmovups xmm1, xmmword ptr [rbx]
    vmovups [rbp+1C00h+var_1A00], xmm1
  }
  R_RT_Destroy(&v222, &v239);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+1C00h+var_B00.baseclass_0.m_surfaceID]
    vmovups [rbp+1C00h+var_1840], ymm0
    vmovups xmm1, xmmword ptr [rbx]
    vmovups xmmword ptr [rbp+1C00h+var_1A40], xmm1
  }
  R_RT_Destroy((GfxCmdBufContext *)&v220, &v240);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+1C00h+var_BE0.baseclass_0.m_surfaceID]
    vmovups [rbp+1C00h+var_1820], ymm0
    vmovups xmm1, xmmword ptr [rbx]
    vmovups xmmword ptr [rbp+1C00h+var_1AC0], xmm1
  }
  R_RT_Destroy((GfxCmdBufContext *)&v216, &v241);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+1C00h+var_B80.baseclass_0.m_surfaceID]
    vmovups [rbp+1C00h+var_1800], ymm0
    vmovups xmm1, xmmword ptr [rbx]
    vmovups xmmword ptr [rbp+1C00h+var_1AA0], xmm1
  }
  R_RT_Destroy((GfxCmdBufContext *)&v217, &v242);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+1C00h+var_C40.baseclass_0.m_surfaceID]
    vmovups [rbp+1C00h+var_17E0], ymm0
    vmovups xmm1, xmmword ptr [rbx]
    vmovups xmmword ptr [rbp+1C00h+var_1A80], xmm1
  }
  R_RT_Destroy((GfxCmdBufContext *)&v218, &v243);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+1C00h+var_BC0.baseclass_0.m_surfaceID]
    vmovups [rbp+1C00h+var_17C0], ymm0
    vmovups xmm1, xmmword ptr [rbx]
    vmovups xmmword ptr [rbp+1C00h+var_1A60], xmm1
  }
  R_RT_Destroy((GfxCmdBufContext *)&v219, &v244);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+1C00h+var_AE0.baseclass_0.m_surfaceID]
    vmovups [rbp+1C00h+var_17A0], ymm0
    vmovups xmm1, xmmword ptr [rbx]
    vmovups xmmword ptr [rbp+1C00h+var_1BA0], xmm1
  }
  R_RT_Destroy((GfxCmdBufContext *)&v209, &v245);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+1C00h+var_C60.baseclass_0.m_surfaceID]
    vmovups [rbp+1C00h+var_1780], ymm0
    vmovups xmm1, xmmword ptr [rbx]
    vmovups xmmword ptr [rbp+1C00h+var_1B80], xmm1
  }
  R_RT_Destroy((GfxCmdBufContext *)&v210, &v246);
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
  unsigned __int64 *writeFenceAddr; 
  unsigned __int64 v5; 
  unsigned int emittedStaticSurfCount; 
  __int64 preocclusionTriangleCount; 
  __int64 preocclusionClusterCount; 
  __int64 subMeshCount; 
  __int64 preocclusionMaxBatchIndexCount; 
  int v14; 
  int postocclusionMaxBatchIndexCount; 
  int filteredStaticSurfCount; 

  passIndex = gpBackendPass->passIndex;
  _RBX = &s_gpReadBackRing[passIndex];
  writeFenceAddr = (unsigned __int64 *)_RBX->writeFenceAddr;
  v5 = *writeFenceAddr;
  if ( _RBX->lastReadPos <= *writeFenceAddr )
  {
    _RAX = _RBX->readBackInfoGPU[truncate_cast<unsigned int,unsigned __int64>(*writeFenceAddr & 3)];
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rbx+70h], ymm0
      vmovups ymm1, ymmword ptr [rax+20h]
      vmovups ymmword ptr [rbx+90h], ymm1
    }
    _RBX->lastReadPos = v5;
  }
  if ( gpBackendPass->visibleSModelCollectionCount )
  {
    emittedStaticSurfCount = _RBX->readbackInfoCPU.emittedStaticSurfCount;
    if ( emittedStaticSurfCount > 0xD000 )
      R_WarnOncePerFrame(R_WARN_GPU_PIPELINE_SURF_LIMIT, s_gpTypedSurfNames[2], emittedStaticSurfCount, 53248i64, g_gpPassNames[passIndex]);
    if ( emittedStaticSurfCount > 0x10000 )
      R_WarnOncePerFrame(R_WARN_GPU_PIPELINE_TOTAL_SURF_LIMIT, emittedStaticSurfCount + gpBackendPass->dynSurfCount, 0x10000i64, g_gpPassNames[passIndex]);
  }
  preocclusionTriangleCount = _RBX->readbackInfoCPU.preocclusionTriangleCount;
  if ( (unsigned int)preocclusionTriangleCount > 0x280000 )
    R_WarnOncePerFrame(R_WARN_GPU_PIPELINE_INDEX_LIMIT, preocclusionTriangleCount, 2621440i64, g_gpPassNames[passIndex]);
  preocclusionClusterCount = _RBX->readbackInfoCPU.preocclusionClusterCount;
  if ( (unsigned int)preocclusionClusterCount > 0x40000 )
    R_WarnOncePerFrame(R_WARN_GPU_PIPELINE_CLUSTER_LIMIT, preocclusionClusterCount, 0x40000i64, g_gpPassNames[passIndex]);
  subMeshCount = _RBX->readbackInfoCPU.subMeshCount;
  if ( (unsigned int)subMeshCount > 0x10000 )
    R_WarnOncePerFrame(R_WARN_GPU_PIPELINE_SUBMESH_LIMIT, subMeshCount, 0x10000i64, g_gpPassNames[passIndex]);
  preocclusionMaxBatchIndexCount = _RBX->readbackInfoCPU.preocclusionMaxBatchIndexCount;
  if ( (unsigned int)preocclusionMaxBatchIndexCount >= 0x2FF400 )
    R_WarnOncePerFrame(R_WARN_GPU_PIPELINE_INDIRECT_ARG_INDEX_LIMIT, preocclusionMaxBatchIndexCount, 3142656i64, g_gpPassNames[passIndex]);
  if ( rg.stats && r_gpShowStats->current.integer )
  {
    rg.stats->numPreOcclusionGPTris[passIndex] = _RBX->readbackInfoCPU.preocclusionTriangleCount;
    rg.stats->numPostOcclusionGPTris[passIndex] = _RBX->readbackInfoCPU.postocclusionTriangleCount;
    rg.stats->numPreOcclusionGPClusters[passIndex] = _RBX->readbackInfoCPU.preocclusionClusterCount;
    rg.stats->numPostOcclusionGPClusters[passIndex] = _RBX->readbackInfoCPU.postocclusionClusterCount;
    rg.stats->numSubMeshes[passIndex] = _RBX->readbackInfoCPU.subMeshCount;
    rg.stats->maxBatchPreOccIndices[passIndex] = _RBX->readbackInfoCPU.preocclusionMaxBatchIndexCount;
    v14 = _RBX->readbackInfoCPU.preocclusionMaxBatchIndexCount;
    if ( rg.stats->maxBatchPreOccIndicesWatermark[passIndex] > v14 )
      v14 = rg.stats->maxBatchPreOccIndicesWatermark[passIndex];
    rg.stats->maxBatchPreOccIndicesWatermark[passIndex] = v14;
    rg.stats->numPreOccDrawnBatches[passIndex] = _RBX->readbackInfoCPU.preocclusionDrawnBatchCount;
    rg.stats->maxBatchPostOccIndices[passIndex] = _RBX->readbackInfoCPU.postocclusionMaxBatchIndexCount;
    postocclusionMaxBatchIndexCount = _RBX->readbackInfoCPU.postocclusionMaxBatchIndexCount;
    if ( rg.stats->numBatchPostOccIndicesWatermark[passIndex] > postocclusionMaxBatchIndexCount )
      postocclusionMaxBatchIndexCount = rg.stats->numBatchPostOccIndicesWatermark[passIndex];
    rg.stats->numBatchPostOccIndicesWatermark[passIndex] = postocclusionMaxBatchIndexCount;
    rg.stats->numPostOccDrawnBatches[passIndex] = _RBX->readbackInfoCPU.postocclusionDrawnBatchCount;
    if ( gpBackendPass->visibleSModelCollectionCount )
      filteredStaticSurfCount = _RBX->readbackInfoCPU.filteredStaticSurfCount;
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
  GfxViewInfo *v6; 
  unsigned int v9; 
  unsigned int v10; 
  __int64 v11; 
  __int64 v16; 
  __int64 v30; 
  unsigned int v32; 
  __int64 v33; 
  __int64 v34; 
  bool v37; 
  BOOL vertexDeformForceCullSunShadows; 
  BOOL vertexDeformForceCullSpotShadows; 
  __int64 v66; 
  unsigned __int8 *viewParmsGPU; 
  tmat44_t<vec4_t> *v69; 
  __int64 v72; 
  unsigned __int8 *v73; 
  int v74; 
  __int64 v90; 
  GfxViewParms result; 
  char v92[384]; 
  void *retaddr; 

  _R11 = &retaddr;
  v37 = s_gpCurBackendFrameData == NULL;
  __asm
  {
    vmovaps xmmword ptr [r11-58h], xmm8
    vmovaps xmmword ptr [r11-68h], xmm9
    vmovaps xmmword ptr [r11-78h], xmm10
  }
  if ( v37 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 855, ASSERT_TYPE_ASSERT, "(s_gpCurBackendFrameData)", (const char *)&queryFormat, "s_gpCurBackendFrameData") )
    __debugbreak();
  if ( s_gpCurBackendFrameData->smpFrame != frontEndDataOut->smpFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 856, ASSERT_TYPE_ASSERT, "(s_gpCurBackendFrameData->smpFrame == static_cast< uint >( frontEndDataOut->smpFrame ))", (const char *)&queryFormat, "s_gpCurBackendFrameData->smpFrame == static_cast< uint >( frontEndDataOut->smpFrame )") )
    __debugbreak();
  v6 = &frontEndDataOut->viewInfo[frontEndDataOut->viewInfoIndex];
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 859, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  __asm
  {
    vmovss  xmm10, cs:__real@3f800000
    vmovss  xmm9, cs:__real@45800000
  }
  v9 = 0;
  __asm { vmovaps [rsp+3B8h+var_38], xmm6 }
  v10 = 0;
  __asm { vmovaps [rsp+3B8h+var_48], xmm7 }
  v11 = 0i64;
  __asm { vxorps  xmm8, xmm8, xmm8 }
  do
  {
    _RSI = &s_gpCurBackendFrameData->viewParmsCPU[v11];
    if ( v10 == 32 )
    {
      _RAX = R_GetDepthHackViewParms(&result, (const GfxViewParms *)v6);
      _RCX = v92;
      v16 = 3i64;
      do
      {
        _RCX += 128;
        __asm { vmovups xmm0, xmmword ptr [rax] }
        _RAX = (GfxViewParms *)((char *)_RAX + 128);
        __asm
        {
          vmovups xmmword ptr [rcx-80h], xmm0
          vmovups xmm1, xmmword ptr [rax-70h]
          vmovups xmmword ptr [rcx-70h], xmm1
          vmovups xmm0, xmmword ptr [rax-60h]
          vmovups xmmword ptr [rcx-60h], xmm0
          vmovups xmm1, xmmword ptr [rax-50h]
          vmovups xmmword ptr [rcx-50h], xmm1
          vmovups xmm0, xmmword ptr [rax-40h]
          vmovups xmmword ptr [rcx-40h], xmm0
          vmovups xmm1, xmmword ptr [rax-30h]
          vmovups xmmword ptr [rcx-30h], xmm1
          vmovups xmm0, xmmword ptr [rax-20h]
          vmovups xmmword ptr [rcx-20h], xmm0
          vmovups xmm1, xmmword ptr [rax-10h]
          vmovups xmmword ptr [rcx-10h], xmm1
        }
        --v16;
      }
      while ( v16 );
      _RBX = (GfxViewParms *)v92;
      __asm
      {
        vxorps  xmm6, xmm6, xmm6
        vcvtsi2ss xmm6, xmm6, rax
        vxorps  xmm7, xmm7, xmm7
        vcvtsi2ss xmm7, xmm7, rax
      }
    }
    else
    {
      if ( v10 )
      {
        if ( v10 - 1 > 2 )
        {
          if ( v10 - 4 > 7 )
          {
            if ( v10 - 12 > 0x13 )
            {
              LODWORD(v90) = v10;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 921, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "R_GP_AddViewParms: unhandled scene view type %d", v90) )
                __debugbreak();
LABEL_40:
              *(_QWORD *)_RSI->viewProjectionMatrix.m[0].v = 0i64;
              goto LABEL_41;
            }
            v32 = (v10 - 12) % 0xA;
            v33 = (v10 - 12) / 0xA;
            if ( v32 >= frontEndDataOut->sunShadow.partitionCache[v33].gfxCachedSunShadowOverlapCount )
              goto LABEL_41;
            v34 = v33 * 8656 + 864i64 * v32;
            if ( (GfxBackEndData *)((char *)frontEndDataOut + v34) == (GfxBackEndData *)-929984i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 913, ASSERT_TYPE_ASSERT, "(&frontEndDataOut->sunShadow.partitionCache[partitionIndex].gfxCachedSunShadowOverlap[cellIndex].staticEntry)", (const char *)&queryFormat, "&frontEndDataOut->sunShadow.partitionCache[partitionIndex].gfxCachedSunShadowOverlap[cellIndex].staticEntry") )
              __debugbreak();
            _RBX = &(*(GfxCachedSunShadow **)((char *)&frontEndDataOut->sunShadow.partitionCache[0].gfxCachedSunShadowOverlap[0].staticEntry + v34))->viewParms;
            R_SunShadow_GetMapSize();
            __asm
            {
              vxorps  xmm6, xmm6, xmm6
              vcvtsi2ss xmm6, xmm6, rax
            }
            R_SunShadow_GetMapSize();
          }
          else
          {
            v30 = v10 - 4;
            if ( (unsigned int)v30 >= frontEndDataOut->spotShadowUpdateCount )
              goto LABEL_40;
            __asm { vxorps  xmm6, xmm6, xmm6 }
            _RBX = &frontEndDataOut->spotShadowUpdates[v30].viewportParms.viewParms;
            __asm { vcvtsi2ss xmm6, xmm6, rax }
          }
        }
        else
        {
          _RBX = &frontEndDataOut->sunShadow.partition[v10 - 1].viewParms;
          R_SunShadow_GetMapSize();
          __asm
          {
            vxorps  xmm6, xmm6, xmm6
            vcvtsi2ss xmm6, xmm6, rax
          }
          R_SunShadow_GetMapSize();
        }
      }
      else
      {
        _RBX = (GfxViewParms *)v6;
        __asm
        {
          vxorps  xmm6, xmm6, xmm6
          vcvtsi2ss xmm6, xmm6, rax
        }
      }
      __asm
      {
        vxorps  xmm7, xmm7, xmm7
        vcvtsi2ss xmm7, xmm7, rax
      }
      if ( !_RBX )
        goto LABEL_40;
    }
    MatrixCopy44(&_RBX->viewProjectionMatrix.m, &_RSI->viewProjectionMatrix);
    __asm
    {
      vucomiss xmm8, dword ptr [rbx+4Ch]
      vdivss  xmm0, xmm10, xmm6
      vdivss  xmm1, xmm10, xmm7
      vmovss  dword ptr [rsi+58h], xmm0
      vmovss  dword ptr [rsi+5Ch], xmm1
      vmovss  dword ptr [rsi+50h], xmm6
      vmovss  dword ptr [rsi+54h], xmm7
    }
    _RSI->flags = 0;
    if ( !v37 )
      goto LABEL_37;
    __asm { vucomiss xmm8, dword ptr [rbx+5Ch] }
    if ( !v37 )
      goto LABEL_37;
    __asm { vucomiss xmm8, dword ptr [rbx+6Ch] }
    if ( v37 )
    {
      if ( v10 - 1 > 2 && v10 - 12 > 0x13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 945, ASSERT_TYPE_ASSERT, "(isSunShadow)", (const char *)&queryFormat, "isSunShadow") )
        __debugbreak();
      _RSI->eyeOffset.v[0] = LODWORD(_RBX->camera.axis.m[0].v[0]);
      _RSI->eyeOffset.v[1] = LODWORD(_RBX->camera.axis.m[0].v[1]);
      _RSI->eyeOffset.v[2] = LODWORD(_RBX->camera.axis.m[0].v[2]);
      _RSI->flags |= 1u;
    }
    else
    {
LABEL_37:
      __asm
      {
        vmulss  xmm1, xmm9, dword ptr [rbx+100h]
        vcvttss2si eax, xmm1
        vmulss  xmm1, xmm9, dword ptr [rbx+104h]
      }
      _RSI->eyeOffset.v[0] = _EAX;
      __asm
      {
        vcvttss2si eax, xmm1
        vmulss  xmm1, xmm9, dword ptr [rbx+108h]
      }
      _RSI->eyeOffset.v[1] = _EAX;
      __asm { vcvttss2si eax, xmm1 }
      _RSI->eyeOffset.v[2] = _EAX;
    }
LABEL_41:
    ++v10;
    ++v11;
  }
  while ( v10 < 0x21 );
  _RCX = s_gpCurBackendFrameData;
  __asm
  {
    vmovss  xmm0, dword ptr cs:?rg@@3Ur_globals_t@@A.correctedLodParms.origin; r_globals_t rg
    vmovss  xmm1, dword ptr cs:?rg@@3Ur_globals_t@@A.correctedLodParms.origin+4; r_globals_t rg
  }
  vertexDeformForceCullSunShadows = rg.vertexDeformForceCullSunShadows;
  __asm
  {
    vmovaps xmm10, [rsp+3B8h+var_78]
    vmovaps xmm9, [rsp+3B8h+var_68]
    vmovaps xmm8, [rsp+3B8h+var_58]
    vmovaps xmm7, [rsp+3B8h+var_48]
    vmovaps xmm6, [rsp+3B8h+var_38]
    vmovss  dword ptr [rcx+4F94h], xmm0
    vmovss  xmm0, dword ptr cs:?rg@@3Ur_globals_t@@A.correctedLodParms.origin+8; r_globals_t rg
    vmovss  dword ptr [rcx+4F98h], xmm1
    vmovss  xmm1, cs:?rg@@3Ur_globals_t@@A.correctedLodParms.invFovScale; r_globals_t rg
    vmovss  dword ptr [rcx+4F9Ch], xmm0
    vmovss  xmm0, cs:?rg@@3Ur_globals_t@@A.correctedLodParms.cappedLodScale; r_globals_t rg
    vmovss  dword ptr [rcx+4FA0h], xmm1
    vmovss  xmm1, cs:?rg@@3Ur_globals_t@@A.correctedLodParms.ramp.biasWithoutFovScale; r_globals_t rg
    vmovss  dword ptr [rcx+4FA4h], xmm0
    vmovss  xmm0, cs:?rg@@3Ur_globals_t@@A.correctedLodParms.ramp.scaleWithoutFovScale; r_globals_t rg
    vmovss  dword ptr [rcx+4FACh], xmm1
    vmovss  xmm1, cs:?rg@@3Ur_globals_t@@A.vertexDeformCutOffDist; r_globals_t rg
    vmovss  dword ptr [rcx+4FA8h], xmm0
    vmovss  xmm0, cs:?rg@@3Ur_globals_t@@A.vertexDeformFadeDist; r_globals_t rg
    vmovss  dword ptr [rcx+4F90h], xmm1
    vminss  xmm1, xmm0, xmm1
    vmovss  xmm0, cs:?rg@@3Ur_globals_t@@A.correctedLodParms.clutterRamp.biasWithoutFovScale; r_globals_t rg
    vmovss  dword ptr [rcx+4FB0h], xmm1
    vmovss  xmm1, cs:?rg@@3Ur_globals_t@@A.correctedLodParms.clutterRamp.scaleWithoutFovScale; r_globals_t rg
  }
  _RCX->lodParamConsts.vertexDeformForceCullSunShadows = vertexDeformForceCullSunShadows;
  vertexDeformForceCullSpotShadows = rg.vertexDeformForceCullSpotShadows;
  __asm
  {
    vmovss  dword ptr [rcx+4FC0h], xmm1
    vmovss  dword ptr [rcx+4FC4h], xmm0
  }
  _RCX->lodParamConsts.vertexDeformForceCullSpotShadows = vertexDeformForceCullSpotShadows;
  if ( !_RCX->viewParmsGPU && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 966, ASSERT_TYPE_ASSERT, "(s_gpCurBackendFrameData->viewParmsGPU)", (const char *)&queryFormat, "s_gpCurBackendFrameData->viewParmsGPU") )
    __debugbreak();
  v66 = 0i64;
  do
  {
    viewParmsGPU = s_gpCurBackendFrameData->viewParmsGPU;
    _RBX = &s_gpCurBackendFrameData->viewParmsCPU[v66];
    if ( (unsigned __int64)(v9 << 6) + 64 > 0xC60 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 670, ASSERT_TYPE_ASSERT, "(( byteOffset + sizeof( VAR_TYPE ) ) <= bufferSize)", (const char *)&queryFormat, "( byteOffset + sizeof( VAR_TYPE ) ) <= bufferSize") )
      __debugbreak();
    v69 = (tmat44_t<vec4_t> *)&viewParmsGPU[64 * v9];
    _R14 = s_gpCurBackendFrameData->viewParmsGPU;
    _RSI = 16 * (v9 + 132);
    if ( (unsigned __int64)(_RSI + 16) > 0xC60 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 670, ASSERT_TYPE_ASSERT, "(( byteOffset + sizeof( VAR_TYPE ) ) <= bufferSize)", (const char *)&queryFormat, "( byteOffset + sizeof( VAR_TYPE ) ) <= bufferSize") )
      __debugbreak();
    v72 = 16 * (v9 + 165);
    v73 = s_gpCurBackendFrameData->viewParmsGPU;
    if ( (unsigned __int64)(v72 + 16) > 0xC60 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 670, ASSERT_TYPE_ASSERT, "(( byteOffset + sizeof( VAR_TYPE ) ) <= bufferSize)", (const char *)&queryFormat, "( byteOffset + sizeof( VAR_TYPE ) ) <= bufferSize") )
      __debugbreak();
    MatrixCopy44(&_RBX->viewProjectionMatrix, v69);
    v74 = _RBX->eyeOffset.v[2];
    __asm
    {
      vmovsd  xmm0, qword ptr [rbx+40h]
      vmovsd  qword ptr [rsi+r14], xmm0
    }
    *(_DWORD *)&_R14[_RSI + 8] = v74;
    ++v9;
    ++v66;
    *(_DWORD *)&_R14[_RSI + 12] = _RBX->flags;
    *(float *)&v73[v72] = _RBX->rtSize.v[0];
    *(float *)&v73[v72 + 4] = _RBX->rtSize.v[1];
    *(float *)&v73[v72 + 8] = _RBX->rtSize.v[2];
    *(float *)&v73[v72 + 12] = _RBX->rtSize.v[3];
  }
  while ( v9 < 0x21 );
  if ( !s_gpCurBackendFrameData->transientVisBitsGPU && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 981, ASSERT_TYPE_ASSERT, "(s_gpCurBackendFrameData->transientVisBitsGPU)", (const char *)&queryFormat, "s_gpCurBackendFrameData->transientVisBitsGPU") )
    __debugbreak();
  _RDX = frontEndDataOut;
  __asm { vmovups xmm0, xmmword ptr [rdx+169CFCh] }
  _RCX = s_gpCurBackendFrameData->transientVisBitsGPU;
  __asm
  {
    vmovups xmmword ptr [rcx], xmm0
    vmovups xmm1, xmmword ptr [rdx+169D0Ch]
    vmovups xmmword ptr [rcx+10h], xmm1
    vmovups xmm0, xmmword ptr [rdx+169D1Ch]
    vmovups xmmword ptr [rcx+20h], xmm0
    vmovups xmm1, xmmword ptr [rdx+169D2Ch]
    vmovups xmmword ptr [rcx+30h], xmm1
    vmovups xmm0, xmmword ptr [rdx+169D3Ch]
    vmovups xmmword ptr [rcx+40h], xmm0
    vmovups xmm1, xmmword ptr [rdx+169D4Ch]
    vmovups xmmword ptr [rcx+50h], xmm1
    vmovups xmm0, xmmword ptr [rdx+169D5Ch]
    vmovups xmmword ptr [rcx+60h], xmm0
    vmovups xmm1, xmmword ptr [rdx+169D6Ch]
    vmovups xmmword ptr [rcx+70h], xmm1
    vmovups xmm0, xmmword ptr [rdx+169D7Ch]
    vmovups xmmword ptr [rcx+80h], xmm0
    vmovups xmm1, xmmword ptr [rdx+169D8Ch]
    vmovups xmmword ptr [rcx+90h], xmm1
    vmovups xmm0, xmmword ptr [rdx+169D9Ch]
    vmovups xmmword ptr [rcx+0A0h], xmm0
    vmovups xmm1, xmmword ptr [rdx+169DACh]
    vmovups xmmword ptr [rcx+0B0h], xmm1
  }
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
  bool v30; 
  bool v31; 
  const R_RT_Surface *Surface; 
  GfxTexture *Resident; 
  int v36; 
  GfxTextureId textureId; 
  ComputeShader *gpClusterCullingOcclusionPass; 
  const GfxWrappedRWBuffer *WrappedBuffer; 
  GfxShaderBufferView *views; 
  GfxShaderBufferView *v41; 
  __int64 v42; 
  GfxShaderBufferView *v43; 
  GfxTexture *textures; 
  GfxTexture *v45; 
  GfxShaderBufferView *p_view; 
  GfxShaderBufferView *v47; 
  R_RT_Handle *v48; 
  GfxShaderBufferView *v49; 
  R_RT_Handle *v50; 
  GfxShaderBufferView *v51; 
  R_RT_Handle *v52; 
  GfxShaderBufferRWView *p_rwView; 
  R_RT_Handle *v54; 
  GfxShaderBufferRWView *v55; 
  R_RT_Handle *v56; 
  GfxShaderBufferRWView *v57; 
  R_RT_Handle *v58; 
  GfxShaderBufferView *v59; 
  R_RT_Handle *v60; 
  GfxShaderBufferView *v61; 
  R_RT_Handle *v62; 
  R_RT_Handle v63; 
  int v64; 
  __int64 v65; 
  int v66; 
  unsigned int gpuCullClusterDepthMipBias; 
  BOOL v68; 
  int dataa[12]; 

  v62 = clusterPassIndirectArgsBuffer;
  v48 = subMeshWorkgroupArgsBuffer;
  v50 = perSurfDataBuffer;
  v58 = prevCulledSubMeshBuffer;
  v60 = prevSubMeshClusterOffsetsBuffer;
  v52 = culledSubMeshBuffer;
  v54 = subMeshClusterCountsBuffer;
  v56 = culledTriClusterBuffer;
  v19 = 20544i64 * data->smpFrame;
  v20 = v19 + 8576i64 * passIndex;
  v42 = v19;
  if ( !*(unsigned int *)((char *)&s_gpBackendFrameData[0].gpBackendPass[0].dynSurfCount + v20) && *(int *)((char *)&s_gpBackendFrameData[0].gpBackendPass[0].visibleSModelCollectionCount + v20) <= 0 || !*(volatile int *)((char *)&s_gpBackendFrameData[0].gpBackendPass[0].batchCount + v20) )
    return;
  v21 = *(unsigned int *)((char *)s_gpBackendFrameData[0].gpBackendPass[0].surfTypeCount + v20);
  v22 = *(unsigned int *)((char *)&s_gpBackendFrameData[0].gpBackendPass[0].surfTypeCount[1] + v20);
  __asm
  {
    vmovss  xmm2, cs:__real@45800000
    vmulss  xmm0, xmm2, dword ptr [r8+5B8h]
  }
  dataa[7] = *(unsigned int *)((char *)&s_gpBackendFrameData[0].gpBackendPass[0].dynSurfCount + v20);
  dataa[0] = *(unsigned int *)((char *)s_gpBackendFrameData[0].gpBackendPass[0].surfIndexOffsets + v20);
  dataa[1] = v21;
  dataa[2] = *(unsigned int *)((char *)&s_gpBackendFrameData[0].gpBackendPass[0].surfIndexOffsets[1] + v20);
  __asm
  {
    vcvttss2si eax, xmm0
    vmulss  xmm0, xmm2, dword ptr [r8+5BCh]
  }
  dataa[4] = _EAX;
  __asm
  {
    vcvttss2si eax, xmm0
    vmulss  xmm0, xmm2, dword ptr [r8+5C0h]
  }
  dataa[5] = _EAX;
  __asm { vcvttss2si eax, xmm0 }
  dataa[3] = v22;
  dataa[6] = _EAX;
  R_UploadAndSetComputeConstants(state, 0, dataa, 0x30u, NULL);
  v30 = occlusionDepthTexture->m_surfaceID && rg.gpuCullTriClusterOcclusion;
  v31 = occlusionDepthTexture->m_surfaceID == 0;
  v64 = v30;
  if ( v31 )
  {
    v65 = 0i64;
    v66 = 0;
  }
  else
  {
    LODWORD(v65) = R_RT_Handle::GetSurface(occlusionDepthTexture)->m_image.m_base.width;
    HIDWORD(v65) = R_RT_Handle::GetSurface(occlusionDepthTexture)->m_image.m_base.height;
    v66 = R_RT_Handle::GetSurface(occlusionDepthTexture)->m_image.m_base.levelCount - 1;
  }
  gpuCullClusterDepthMipBias = rg.gpuCullClusterDepthMipBias;
  _RAX = umbraOcclusionTexture;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbp+0A0h+var_B0.m_surfaceID], ymm0
  }
  if ( !R_Umbra_GetOcclusionImageCameraView(data) || passIndex || !v63.m_surfaceID )
  {
    Resident = NULL;
LABEL_21:
    v36 = 0;
    goto LABEL_22;
  }
  Surface = R_RT_Handle::GetSurface(&v63);
  Resident = (GfxTexture *)R_Texture_GetResident(Surface->m_image.m_base.textureId);
  if ( !Resident || !rg.gpuCullOcclusion || !rg.gpuCullTriClusterOcclusion || !rg.gpuCullOcclusionUmbra || v30 )
    goto LABEL_21;
  v36 = 2;
LABEL_22:
  v64 |= v36;
  v68 = useVisBuffer;
  R_UploadAndSetComputeConstants(state, 1, &v64, 0x20u, NULL);
  views = (GfxShaderBufferView *)((char *)&s_gpBackendFrameData[0].gpBackendPass[0].rigidSurfCullArgsBuffer.view + v20);
  R_SetComputeViews(state, 0, 1, (const GfxShaderBufferView *const *)&views);
  v41 = (GfxShaderBufferView *)((char *)&s_gpBackendFrameData[0].gpBackendPass[0].skinnedSurfCullArgsBuffer.view + v20);
  R_SetComputeViews(state, 1, 1, (const GfxShaderBufferView *const *)&v41);
  RB_ModelData_SetComputeResources(state, 4u, 3u);
  v43 = (GfxShaderBufferView *)((char *)&s_gpBackendFrameData[0].viewParmsBuffer.view + v42);
  R_SetComputeViews(state, 5, 1, (const GfxShaderBufferView *const *)&v43);
  if ( occlusionDepthTexture->m_surfaceID )
    textureId = R_RT_Handle::GetSurface(occlusionDepthTexture)->m_image.m_base.textureId;
  else
    textureId = rgp.blackImage->textureId;
  textures = (GfxTexture *)R_Texture_GetResident(textureId);
  R_SetComputeTextures(state, 6, 1, (const GfxTexture *const *)&textures);
  if ( !Resident )
    Resident = (GfxTexture *)R_Texture_GetResident(rgp.blackImage->textureId);
  v45 = Resident;
  R_SetComputeTextures(state, 25, 1, (const GfxTexture *const *)&v45);
  p_view = &gfxBuf.uibVirtPageTableBuffer.view;
  R_SetComputeViews(state, 10, 1, (const GfxShaderBufferView *const *)&p_view);
  v47 = &gfxBuf.uibPageDataBuffer.view;
  R_SetComputeViews(state, 11, 1, (const GfxShaderBufferView *const *)&v47);
  v49 = &R_RT_Handle::GetWrappedBuffer(v48)->view;
  R_SetComputeViews(state, 19, 1, (const GfxShaderBufferView *const *)&v49);
  v51 = &R_RT_Handle::GetWrappedBuffer(v50)->view;
  R_SetComputeViews(state, 2, 1, (const GfxShaderBufferView *const *)&v51);
  p_rwView = &R_RT_Handle::GetWrappedBuffer(v52)->rwView;
  R_SetComputeRWViewsWithCounters(state, 3, 1, (const GfxShaderBufferRWView *const *)&p_rwView, NULL);
  v55 = &R_RT_Handle::GetWrappedBuffer(v54)->rwView;
  R_SetComputeRWViewsWithCounters(state, 4, 1, (const GfxShaderBufferRWView *const *)&v55, NULL);
  v57 = &R_RT_Handle::GetWrappedBuffer(v56)->rwView;
  R_SetComputeRWViewsWithCounters(state, 6, 1, (const GfxShaderBufferRWView *const *)&v57, NULL);
  if ( reusePrepassVisData )
  {
    v59 = &R_RT_Handle::GetWrappedBuffer(v58)->view;
    R_SetComputeViews(state, 22, 1, (const GfxShaderBufferView *const *)&v59);
    v61 = &R_RT_Handle::GetWrappedBuffer(v60)->view;
    R_SetComputeViews(state, 23, 1, (const GfxShaderBufferView *const *)&v61);
    gpClusterCullingOcclusionPass = rgp.gpClusterCullingOcclusionPass;
  }
  else
  {
    gpClusterCullingOcclusionPass = rgp.gpClusterCullingPass;
  }
  R_SetComputeShader(state, gpClusterCullingOcclusionPass);
  WrappedBuffer = R_RT_Handle::GetWrappedBuffer(v62);
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
  __int64 v15; 
  int v16; 
  int v17; 
  GfxTexture *Resident; 
  bool v26; 
  const R_RT_Surface *Surface; 
  int v30; 
  GfxTextureId textureId; 
  ComputeShader *gpTriangleOcclusionCullPass; 
  const GfxWrappedRWBuffer *WrappedBuffer; 
  GfxShaderBufferView *views; 
  GfxShaderBufferView *v36; 
  R_RT_Handle *v37; 
  GfxShaderBufferView *p_view; 
  unsigned __int64 v39; 
  GfxShaderBufferView *v40; 
  GfxTexture *textures; 
  GfxTexture *v42; 
  GfxShaderBufferView *v43; 
  GfxShaderBufferView *v44; 
  GfxShaderBufferView *v45; 
  GfxShaderBufferView *v46; 
  GfxShaderBufferView *v47; 
  R_RT_Handle *v48; 
  GfxShaderBufferView *v49; 
  R_RT_Handle *v50; 
  GfxShaderBufferRWView *p_rwView; 
  R_RT_Handle *v52; 
  GfxShaderBufferRWView *v53; 
  R_RT_Handle *v54; 
  R_RT_Handle v55; 
  int v56; 
  __int64 v57; 
  int v58; 
  unsigned int gpuCullTriDepthMipBias; 
  int v60; 
  int dataa[12]; 

  smpFrame = data->smpFrame;
  v54 = triPassIndirectArgsBuffer;
  v48 = clusterWorkgroupArgsBuffer;
  v37 = perSurfDataBuffer;
  v50 = culledTriClusterBuffer;
  v52 = clusterTriCountsBuffer;
  v15 = 20544 * smpFrame + 8576i64 * passIndex;
  v39 = 20544 * smpFrame;
  if ( (*(unsigned int *)((char *)&s_gpBackendFrameData[0].gpBackendPass[0].dynSurfCount + v15) || *(int *)((char *)&s_gpBackendFrameData[0].gpBackendPass[0].visibleSModelCollectionCount + v15) > 0) && *(volatile int *)((char *)&s_gpBackendFrameData[0].gpBackendPass[0].batchCount + v15) )
  {
    if ( *(int *)((char *)&s_gpBackendFrameData[0].gpBackendPass[0].batchCount + v15) >= 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 2706, ASSERT_TYPE_ASSERT, "(gpBackendPass->batchCount < ( 16384 ))", (const char *)&queryFormat, "gpBackendPass->batchCount < GP_BATCH_LIMIT") )
      __debugbreak();
    v16 = *(unsigned int *)((char *)s_gpBackendFrameData[0].gpBackendPass[0].surfTypeCount + v15);
    v17 = *(unsigned int *)((char *)&s_gpBackendFrameData[0].gpBackendPass[0].surfTypeCount[1] + v15);
    __asm
    {
      vmovss  xmm2, cs:__real@45800000
      vmulss  xmm0, xmm2, dword ptr [rsi+5B8h]
    }
    dataa[7] = *(unsigned int *)((char *)&s_gpBackendFrameData[0].gpBackendPass[0].dynSurfCount + v15);
    dataa[0] = *(unsigned int *)((char *)s_gpBackendFrameData[0].gpBackendPass[0].surfIndexOffsets + v15);
    dataa[1] = v16;
    dataa[2] = *(unsigned int *)((char *)&s_gpBackendFrameData[0].gpBackendPass[0].surfIndexOffsets[1] + v15);
    __asm
    {
      vcvttss2si eax, xmm0
      vmulss  xmm0, xmm2, dword ptr [rsi+5BCh]
    }
    dataa[4] = _EAX;
    __asm
    {
      vcvttss2si eax, xmm0
      vmulss  xmm0, xmm2, dword ptr [rsi+5C0h]
    }
    Resident = NULL;
    dataa[5] = _EAX;
    dataa[3] = v17;
    __asm { vcvttss2si eax, xmm0 }
    dataa[6] = _EAX;
    R_UploadAndSetComputeConstants(state, 0, dataa, 0x30u, NULL);
    v26 = occlusionDepthTexture->m_surfaceID && rg.gpuCullTriOcclusion;
    v56 = v26;
    if ( occlusionDepthTexture->m_surfaceID )
    {
      LODWORD(v57) = R_RT_Handle::GetSurface(occlusionDepthTexture)->m_image.m_base.width;
      HIDWORD(v57) = R_RT_Handle::GetSurface(occlusionDepthTexture)->m_image.m_base.height;
      v58 = R_RT_Handle::GetSurface(occlusionDepthTexture)->m_image.m_base.levelCount - 1;
    }
    else
    {
      v57 = 0i64;
      v58 = 0;
    }
    gpuCullTriDepthMipBias = rg.gpuCullTriDepthMipBias;
    _RAX = umbraOcclusionTexture;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rbp+90h+var_B0.m_surfaceID], ymm0
    }
    if ( R_Umbra_GetOcclusionImageCameraView(data) && !passIndex && v55.m_surfaceID && (Surface = R_RT_Handle::GetSurface(&v55), (Resident = (GfxTexture *)R_Texture_GetResident(Surface->m_image.m_base.textureId)) != NULL) && rg.gpuCullOcclusion && rg.gpuCullTriOcclusion && rg.gpuCullTriOcclusionUmbra && !v26 )
      v30 = 2;
    else
      v30 = 0;
    v56 |= v30;
    v60 = 0;
    R_UploadAndSetComputeConstants(state, 1, &v56, 0x20u, NULL);
    views = (GfxShaderBufferView *)((char *)&s_gpBackendFrameData[0].gpBackendPass[0].rigidSurfCullArgsBuffer.view + v15);
    R_SetComputeViews(state, 0, 1, (const GfxShaderBufferView *const *)&views);
    v36 = (GfxShaderBufferView *)((char *)&s_gpBackendFrameData[0].gpBackendPass[0].skinnedSurfCullArgsBuffer.view + v15);
    R_SetComputeViews(state, 1, 1, (const GfxShaderBufferView *const *)&v36);
    p_view = &R_RT_Handle::GetWrappedBuffer(v37)->view;
    R_SetComputeViews(state, 2, 1, (const GfxShaderBufferView *const *)&p_view);
    RB_ModelData_SetComputeResources(state, 4u, 3u);
    v40 = &s_gpBackendFrameData[v39 / 0x5040].viewParmsBuffer.view;
    R_SetComputeViews(state, 5, 1, (const GfxShaderBufferView *const *)&v40);
    if ( occlusionDepthTexture->m_surfaceID )
      textureId = R_RT_Handle::GetSurface(occlusionDepthTexture)->m_image.m_base.textureId;
    else
      textureId = rgp.blackImage->textureId;
    textures = (GfxTexture *)R_Texture_GetResident(textureId);
    R_SetComputeTextures(state, 6, 1, (const GfxTexture *const *)&textures);
    if ( !Resident )
      Resident = (GfxTexture *)R_Texture_GetResident(rgp.blackImage->textureId);
    v42 = Resident;
    R_SetComputeTextures(state, 25, 1, (const GfxTexture *const *)&v42);
    v43 = &gfxBuf.unifiedVertexBuffer.view;
    R_SetComputeViews(state, 7, 1, (const GfxShaderBufferView *const *)&v43);
    v44 = &gfxBuf.uvbVirtPageTableBuffer.view;
    R_SetComputeViews(state, 8, 1, (const GfxShaderBufferView *const *)&v44);
    v45 = &gfxBuf.unifiedIndexBuffer.view;
    R_SetComputeViews(state, 9, 1, (const GfxShaderBufferView *const *)&v45);
    v46 = &gfxBuf.uibVirtPageTableBuffer.view;
    R_SetComputeViews(state, 10, 1, (const GfxShaderBufferView *const *)&v46);
    v47 = &data->skinnedCacheVb->wrappedBuffer.view;
    R_SetComputeViews(state, 12, 1, (const GfxShaderBufferView *const *)&v47);
    v49 = &R_RT_Handle::GetWrappedBuffer(v48)->view;
    R_SetComputeViews(state, 13, 1, (const GfxShaderBufferView *const *)&v49);
    p_rwView = &R_RT_Handle::GetWrappedBuffer(v50)->rwView;
    R_SetComputeRWViewsWithCounters(state, 2, 1, (const GfxShaderBufferRWView *const *)&p_rwView, NULL);
    v53 = &R_RT_Handle::GetWrappedBuffer(v52)->rwView;
    R_SetComputeRWViewsWithCounters(state, 3, 1, (const GfxShaderBufferRWView *const *)&v53, NULL);
    gpTriangleOcclusionCullPass = rgp.gpTriangleOcclusionCullPass;
    if ( !reusePrepassVisData )
      gpTriangleOcclusionCullPass = rgp.gpTriangleCullPass;
    R_SetComputeShader(state, gpTriangleOcclusionCullPass);
    WrappedBuffer = R_RT_Handle::GetWrappedBuffer(v54);
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
  __int64 v12; 
  const char *v15; 
  GfxShaderBufferRWView *v16; 
  __int64 v17; 
  unsigned int v18; 
  unsigned int reactiveMotionIndex; 
  unsigned __int64 v25; 
  __int64 v26; 
  unsigned int v27; 
  unsigned int v29; 
  unsigned int v30; 
  char v31; 
  __int64 v32; 
  GfxClutterCollection *clutterCollections; 
  GfxStaticModelCollection *v34; 
  const StTerrain *v35; 
  int terrainSurfaceIndex; 
  __int64 v37; 
  int v47; 
  GfxStaticModel *v51; 
  const XModel *model; 
  int v53; 
  int v54; 
  StDiskTerrainSurface *v61; 
  StreamKey *streamKey; 
  unsigned int ClutterTilesInstanceCount; 
  unsigned int size; 
  bool v65; 
  bool ClutterTilesCovered; 
  unsigned int v78; 
  unsigned int v79; 
  bool v85; 
  const StTerrainClutterLayer *v86; 
  unsigned int v88; 
  BOOL v89; 
  int v90; 
  GfxBackEndData *v93; 
  const GfxTexture *const *v94; 
  bool v95; 
  int v96; 
  ComputeShader *gpClutterCollectionGenPassForReactiveMotionModels; 
  int v98; 
  bool v99; 
  base_vec2_t<unsigned int> *tileCount; 
  __int64 v107; 
  bool count_1; 
  unsigned int count_4; 
  GfxShaderBufferRWView *views; 
  unsigned int v112; 
  int v113; 
  __int64 v114; 
  StDiskTerrainSurface *surface; 
  __int64 v116; 
  GfxShaderBufferView *p_view; 
  unsigned int v118; 
  int v119; 
  __int64 v120; 
  unsigned __int64 v121; 
  int v122; 
  const StTerrain *terrain; 
  GfxShaderBufferRWView *v124; 
  GfxBackEndData *v125; 
  int integer; 
  GfxTexture *textures; 
  const GfxTexture *v128; 
  GfxTexture *v129[3]; 
  base_vec2_t<unsigned int> v130; 
  vec2_t coords; 
  base_vec2_t<unsigned int> v132; 
  int dataa[2]; 
  base_vec2_t<unsigned int> tileStart; 
  base_vec2_t<unsigned int> v135; 
  unsigned int v136; 
  unsigned int v137; 
  unsigned int v141; 
  int v142; 
  unsigned int v143; 
  __int128 v144; 
  unsigned int v145; 
  float v147; 
  GPClutterReactiveMotionModelInfoGpu clutterModelInfo; 
  char v154; 
  void *retaddr; 

  _RAX = &retaddr;
  v129[1] = (GfxTexture *)-2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
  }
  v12 = passIndex;
  v125 = (GfxBackEndData *)data;
  v15 = "Generate Runtime Clutter Instances";
  if ( reactiveMotionPass )
    v15 = "Generate Runtime Clutter Instances (Reactive)";
  v129[2] = (GfxTexture *)state;
  if ( !state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_profile.h", 38, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
    __debugbreak();
  R_ProfBeginNamedEvent(state, v15);
  if ( (_DWORD)v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1878, ASSERT_TYPE_ASSERT, "(passIndex == GFX_GP_PASS_CAMERA)", (const char *)&queryFormat, "passIndex == GFX_GP_PASS_CAMERA") )
    __debugbreak();
  v16 = (GfxShaderBufferRWView *)&s_gpBackendFrameData[data->smpFrame];
  v124 = v16;
  v17 = (__int64)v16 + 8576 * v12;
  v120 = v17;
  terrain = s_stGlob.terrain;
  if ( s_stGlob.terrain )
  {
    count_1 = 0;
    v18 = 0;
    count_4 = 0;
    LODWORD(v116) = 0;
    if ( reactiveMotionPass )
    {
      views = &R_ReactiveMotion_GetClutterSModelInstanceDataBuffer()->rwView;
      R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
      reactiveMotionIndex = data->reactiveMotionIndex;
      views = &R_ReactiveMotion_GetClutterCollectionGPUDataBuffer(reactiveMotionIndex)->rwView;
      R_SetComputeRWViewsWithCounters(state, 1, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
      views = &R_ReactiveMotion_GetClutterInstanceOffsetsBuffer(reactiveMotionIndex)->rwView;
      R_SetComputeRWViewsWithCounters(state, 4, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
      v17 = v120;
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
    views = v16 + 715;
    R_SetComputeViews(state, 5, 1, (const GfxShaderBufferView *const *)&views);
    integer = r_st_clutterTintSampleLevel->current.integer;
    LODWORD(p_view) = 0;
    v122 = -1;
    LODWORD(v114) = 0;
    __asm
    {
      vmovss  xmm8, cs:__real@3f800000
      vdivss  xmm10, xmm8, dword ptr [r13+4FC0h]
      vxorps  xmm0, xmm0, xmm0
      vmovss  dword ptr [rbp+160h+coords], xmm0
      vmovss  dword ptr [rbp+160h+coords+4], xmm0
      vmovaps xmm7, xmm8
    }
    _R13 = NULL;
    surface = NULL;
    views = NULL;
    v25 = ((unsigned __int64)rgp.world->smodels.clutterCollectionCount + 31) >> 5;
    v121 = v25;
    LODWORD(v26) = 0;
    v113 = 0;
    v27 = 0;
    v112 = 0;
    if ( (_DWORD)v25 )
    {
      v27 = *(_DWORD *)(v17 + 156);
      v112 = v27;
    }
    __asm { vmovss  xmm9, cs:__real@3f000000 }
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( v27 )
          {
LABEL_19:
            v29 = __lzcnt(v27);
            v30 = v29 + 32 * v26;
            v118 = v30;
            if ( v29 >= 0x20 )
            {
              LODWORD(v107) = 32;
              LODWORD(tileCount) = v29;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", tileCount, v107) )
                __debugbreak();
            }
            if ( ((0x80000000 >> v29) & v27) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
              __debugbreak();
            v112 = ~(0x80000000 >> v29) & v27;
            v31 = 1;
            v18 = count_4;
          }
          else
          {
            while ( 1 )
            {
              v26 = (unsigned int)(v26 + 1);
              v113 = v26;
              if ( (unsigned int)v26 >= (unsigned int)v25 )
                break;
              v27 = *(_DWORD *)(v17 + 4 * v26 + 156);
              v112 = v27;
              LODWORD(v25) = v121;
              if ( v27 )
                goto LABEL_19;
            }
            v31 = 0;
            v30 = v118;
          }
          if ( !v31 )
          {
            if ( reactiveMotionPass )
              R_ReactiveMotion_SetReactiveMotionClutterLayerCount(v125->reactiveMotionIndex, v18);
            goto LABEL_116;
          }
          v32 = v30;
          clutterCollections = rgp.world->smodels.clutterCollections;
          v34 = &rgp.world->smodels.collections[clutterCollections[v32].smodelCollectionIndex];
          v35 = terrain;
          if ( clutterCollections[v32].terrainSurfaceIndex >= terrain->surfaceCount )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1936, ASSERT_TYPE_ASSERT, "(clutterCollection.terrainSurfaceIndex < terrain->surfaceCount)", (const char *)&queryFormat, "clutterCollection.terrainSurfaceIndex < terrain->surfaceCount") )
              __debugbreak();
            v35 = terrain;
          }
          terrainSurfaceIndex = clutterCollections[v32].terrainSurfaceIndex;
          if ( v122 != terrainSurfaceIndex )
          {
            v37 = clutterCollections[v32].terrainSurfaceIndex;
            v122 = clutterCollections[v32].terrainSurfaceIndex;
            LOBYTE(terrainSurfaceIndex) = 1;
            LODWORD(v114) = terrainSurfaceIndex;
            _R13 = &v35->surfaces[v37];
            surface = _R13;
            views = (GfxShaderBufferRWView *)_R13->combinedAlbedoMap;
            coords = R_ST_GetCameraCoords((const vec3_t *)&v124[848].rwSubresourceToTransition, &_R13->objToWld);
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, dword ptr [rdi+rsi*8+4]
              vdivss  xmm2, xmm8, xmm0
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, eax
              vmulss  xmm6, xmm0, xmm2
              vmovss  xmm1, dword ptr [r13+7Ch]
              vmovss  [rbp+160h+var_100], xmm1
              vmovss  xmm0, dword ptr [r13+80h]
              vmovss  [rbp+160h+var_FC], xmm0
              vmovss  [rbp+160h+var_F8], xmm6
              vmulss  xmm1, xmm2, xmm9
              vmovss  [rbp+160h+var_F4], xmm1
            }
            if ( rgp.world->smodels.clutterInstancePool.start >= 0x7FFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1956, ASSERT_TYPE_ASSERT, "(rgp.world->smodels.clutterInstancePool.start < ( 1 << 27 ) - 1)", (const char *)&queryFormat, "rgp.world->smodels.clutterInstancePool.start < ( 1 << 27 ) - 1") )
              __debugbreak();
            v47 = integer;
            if ( integer >= 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1957, ASSERT_TYPE_ASSERT, "(tintMipLevel < ( 1 << 3 ) - 1)", (const char *)&queryFormat, "tintMipLevel < ( 1 << 3 ) - 1") )
              __debugbreak();
            v145 = v47 | (16 * rgp.world->smodels.clutterInstancePool.start);
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, ecx
              vmulss  xmm1, xmm0, xmm6
              vdivss  xmm7, xmm8, xmm1
            }
          }
          if ( clutterCollections[v32].clutterLayerIndex >= _R13->clutterLayerCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1963, ASSERT_TYPE_ASSERT, "(clutterCollection.clutterLayerIndex < surface->clutterLayerCount)", (const char *)&queryFormat, "clutterCollection.clutterLayerIndex < surface->clutterLayerCount") )
            __debugbreak();
          _R14 = &_R13->clutterLayers[clutterCollections[v32].clutterLayerIndex];
          v51 = &rgp.world->smodels.models[v34->smodelIndex];
          model = v51->model;
          if ( !v51->model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1969, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
            __debugbreak();
          v53 = 2 * v118;
          if ( (v51->flags & 0x40) != 0 )
            v53 |= 1u;
          dataa[0] = v53;
          v54 = (int)p_view;
          dataa[1] = (int)p_view;
          _RAX = (__int64)v124;
          __asm { vmovss  xmm6, dword ptr [rax+4FC4h] }
          *(double *)&_XMM0 = XModelGetLodOutDist(model);
          __asm
          {
            vsubss  xmm1, xmm0, xmm6
            vmulss  xmm6, xmm1, xmm10
          }
          _R13 = &_R14->layerSize;
          __asm { vmovaps xmm2, xmm6; drawDistance }
          if ( R_ST_GetClutterTilesCovered(&coords, &_R14->layerSize, *(const float *)&_XMM2, &_R14->tileSizeUV, &tileStart, &v132) )
          {
            v61 = surface;
            if ( surface->clutterSampleBitmask.wordCount )
            {
              streamKey = surface->clutterSampleBitmask.streamKey;
              if ( streamKey )
              {
                if ( !Stream_GenericIsSafeToUse(streamKey) )
                  goto LABEL_53;
                v61 = surface;
              }
              ClutterTilesInstanceCount = R_ST_GetClutterTilesInstanceCount(v61, _R14, &tileStart, &v132);
              if ( ClutterTilesInstanceCount )
                break;
            }
          }
LABEL_53:
          _R13 = surface;
          v18 = count_4;
          LODWORD(v26) = v113;
          LODWORD(v25) = v121;
          v17 = v120;
          v27 = v112;
        }
        v119 = ClutterTilesInstanceCount + v54;
        size = rgp.world->smodels.clutterInstancePool.size;
        if ( ClutterTilesInstanceCount + v54 <= size )
          break;
        if ( size > 0x249F0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1997, ASSERT_TYPE_ASSERT, "(rgp.world->smodels.clutterInstancePool.size <= 150'000)", (const char *)&queryFormat, "rgp.world->smodels.clutterInstancePool.size <= MAX_GENERATED_CLUTTER_INSTANCES") )
          __debugbreak();
        R_WarnOncePerFrame(R_WARN_CLUTTER_GENERATION_LIMIT, rgp.world->smodels.clutterInstancePool.size);
        _R13 = surface;
        v18 = count_4;
        LODWORD(v26) = v113;
        LODWORD(v25) = v121;
        v17 = v120;
        v27 = v112;
      }
      v65 = (v51->flags & 8) != 0 && R_ReactiveMotion_UsesClutterPass(v125->reactiveMotionIndex);
      ClutterTilesCovered = 0;
      v130 = 0i64;
      if ( v65 )
      {
        _RAX = (__int64)v124;
        __asm
        {
          vmovss  xmm5, dword ptr [rax+4F90h]
          vmovss  xmm4, dword ptr [r14+1Ch]
          vmovss  xmm0, dword ptr [rbp+160h+coords]
          vdivss  xmm1, xmm0, dword ptr [r13+0]
          vaddss  xmm2, xmm1, xmm9
          vdivss  xmm3, xmm2, dword ptr [r14+10h]
          vmovss  [rbp+160h+var_140], xmm3
          vmovss  xmm0, dword ptr [rbp+160h+coords+4]
          vdivss  xmm1, xmm0, xmm4
          vsubss  xmm1, xmm9, xmm1
          vdivss  xmm0, xmm1, dword ptr [r14+14h]
          vmovss  [rbp+160h+var_13C], xmm0
          vminss  xmm2, xmm5, xmm6; drawDistance
        }
        ClutterTilesCovered = R_ST_GetClutterTilesCovered(&coords, &_R14->layerSize, *(const float *)&_XMM2, &_R14->tileSizeUV, &v135, &v130);
        if ( ClutterTilesCovered )
        {
          v78 = v130.v[1];
          v79 = v130.v[0];
          if ( (unsigned int)(v116 + 32 * v130.v[0] * v130.v[1]) >= 0xF00 )
          {
            R_WarnOncePerFrame(R_WARN_CLUTTER_GENERATION_REACTIVE_TILES_OFFSET_LIMIT, 3840i64);
            ClutterTilesCovered = 0;
            v78 = v130.v[1];
            v79 = v130.v[0];
          }
          v136 = v79 + v135.v[0];
          v137 = v78 + v135.v[1];
          __asm
          {
            vmovss  xmm0, dword ptr [r13+0]
            vmulss  xmm2, xmm0, dword ptr [r14+10h]
          }
          _RAX = (__int64)v124;
          __asm
          {
            vmovss  xmm1, dword ptr [rax+4F90h]
            vdivss  xmm2, xmm1, xmm2
            vmulss  xmm0, xmm2, xmm2
            vmovss  [rbp+160h+var_138], xmm0
          }
          v18 = count_4;
          v141 = count_4;
          v142 = v116;
          v143 = 32 * v79;
        }
        else
        {
          v18 = count_4;
        }
        if ( v18 >= 0x28 )
        {
          R_WarnOncePerFrame(R_WARN_CLUTTER_GENERATION_REACTIVE_LAYERS_LIMIT, 40i64);
          ClutterTilesCovered = 0;
        }
      }
      else
      {
        v18 = count_4;
      }
      v85 = reactiveMotionPass;
      if ( reactiveMotionPass )
        break;
      if ( ClutterTilesCovered )
        goto LABEL_78;
      v88 = 0;
      _R14 = surface;
LABEL_80:
      if ( v85 )
      {
        if ( !v88 )
        {
          _R13 = surface;
LABEL_83:
          v18 = count_4;
          goto LABEL_84;
        }
        tileStart = v135;
        v132 = v130;
        R_ReactiveMotion_GetClutterReactiveMotionModelInfoGPU(v125->reactiveMotionIndex, model, &clutterModelInfo);
        R_UploadAndSetComputeConstants(state, 3, &clutterModelInfo, 0x50u, NULL);
      }
      v89 = ClutterTilesCovered && v65 && v88;
      v90 = (unsigned __int8)v114;
      if ( count_1 != v89 )
        v90 = 1;
      LODWORD(v114) = v90;
      R_UploadAndSetComputeConstants(state, 1, dataa, 0x40u, NULL);
      if ( (_BYTE)v114 )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [r14+28h]
          vmovups [rbp+160h+var_120], xmm0
          vmovsd  xmm1, qword ptr [r14+38h]
          vmovsd  [rbp+160h+var_10C], xmm1
        }
        v147 = _R14->objToWld.origin.v[2];
        __asm
        {
          vmulss  xmm0, xmm7, dword ptr [r13+0]
          vmovss  [rbp+160h+var_F0], xmm0
        }
        R_UploadAndSetComputeConstants(state, 2, &v144, 0x40u, NULL);
        _R13 = surface;
        if ( !surface->heightMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 2079, ASSERT_TYPE_ASSERT, "(surface->heightMap)", (const char *)&queryFormat, "surface->heightMap") )
          __debugbreak();
        v93 = v125;
        textures = (GfxTexture *)R_Texture_Get(v125, _R13->heightMap->textureId);
        R_SetComputeTextures(state, 0, 1, (const GfxTexture *const *)&textures);
        if ( R_Texture_GetLevelCount(v93, (GfxTextureId)views->rwView) )
        {
          v128 = R_Texture_Get(v93, (GfxTextureId)views->rwView);
          v94 = &v128;
        }
        else
        {
          v129[0] = (GfxTexture *)R_Texture_GetDefault();
          v94 = (const GfxTexture *const *)v129;
        }
        R_SetComputeTextures(state, 5, 1, v94);
        p_view = &_R13->clutterLayersBuffer.view;
        R_SetComputeViews(state, 2, 1, (const GfxShaderBufferView *const *)&p_view);
        p_view = &_R13->clutterSampleBitmask.bitmaskBuffer.view;
        R_SetComputeViews(state, 4, 1, (const GfxShaderBufferView *const *)&p_view);
        v95 = ClutterTilesCovered && v65 && v88;
        count_1 = v95;
        if ( reactiveMotionPass )
        {
          R_SetComputeShader(state, rgp.gpReactiveMotionClutterGenPass);
          LOBYTE(v96) = 0;
          LODWORD(v114) = v96;
        }
        else
        {
          gpClutterCollectionGenPassForReactiveMotionModels = rgp.gpClutterCollectionGenPassForReactiveMotionModels;
          if ( !v95 )
            gpClutterCollectionGenPassForReactiveMotionModels = rgp.gpClutterCollectionGenPass;
          R_SetComputeShader(state, gpClutterCollectionGenPassForReactiveMotionModels);
          LOBYTE(v98) = 0;
          LODWORD(v114) = v98;
        }
      }
      else
      {
        _R13 = surface;
      }
      R_Dispatch(state, v132.v[0], v132.v[1], 0x20u);
      if ( !v65 )
        goto LABEL_83;
      v99 = v88 == 0;
      v18 = count_4;
      if ( !v99 )
      {
        v18 = ++count_4;
        LODWORD(v116) = 32 * v130.v[0] * v130.v[1] + v116;
      }
LABEL_84:
      LODWORD(p_view) = v119;
      LODWORD(v26) = v113;
      LODWORD(v25) = v121;
      v17 = v120;
      v27 = v112;
    }
    if ( !v65 || !ClutterTilesCovered )
    {
      _R13 = surface;
      goto LABEL_84;
    }
LABEL_78:
    v86 = _R14;
    _R14 = surface;
    v88 = R_ST_GetClutterTilesInstanceCount(surface, v86, &v135, &v130);
    v85 = reactiveMotionPass;
    goto LABEL_80;
  }
LABEL_116:
  R_ProfEndNamedEvent(state);
  _R11 = &v154;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
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
  __int64 v8; 
  __int64 v9; 
  const R_RT_Surface *Surface; 
  unsigned int *v12; 
  GfxWrappedRWBuffer *p_clutterCollectionGPUDataBuffer; 
  unsigned int rwView; 
  GfxShaderBufferView *p_view; 
  GfxShaderBufferRWView *p_rwView; 
  GfxShaderBufferRWView *v17; 
  R_RT_Handle v18; 
  R_RT_Handle v19; 
  GfxShaderBufferRWView *views; 
  GfxShaderBufferView *v21; 

  _RSI = smodelWorkgroupCounterBuffer;
  __asm { vmovups ymm0, ymmword ptr [r9] }
  v8 = 20544i64 * data->smpFrame;
  v9 = passIndex;
  __asm { vmovups ymmword ptr [rsp+0B8h+var_68.m_surfaceID], ymm0 }
  R_SetComputeShader(state, rgp.gpClearComputeIndirectArgs);
  Surface = R_RT_Handle::GetSurface(&v18);
  if ( (Surface->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  views = &Surface->m_buffer.m_wrappedBuffer.rwView;
  R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
  R_Dispatch(state, 1u, 1u, 1u);
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi]
    vmovups [rsp+0B8h+var_48], ymm0
  }
  R_HW_AddResourceTransition(state, &v19, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  v12 = (unsigned int *)((char *)&s_gpBackendFrameData[0].gpBackendPass[v9].visibleSModelCollectionCount + v8);
  if ( *v12 )
  {
    p_clutterCollectionGPUDataBuffer = &rgp.world->smodels.clutterCollectionGPUDataBuffer;
    rwView = rgp.world->smodels.clutterCollectionGPUDataBuffer.rwView.rwView;
    if ( rwView == 3 || !rwView || !rgp.world->smodels.clutterCollectionGPUDataBuffer.data || rgp.world->smodels.clutterCollectionGPUDataBuffer.view.view <= 1 )
      p_clutterCollectionGPUDataBuffer = (GfxWrappedRWBuffer *)&gfxBuf.dummyStructuredBuffer8;
    v21 = (GfxShaderBufferView *)((char *)&s_gpBackendFrameData[0].gpBackendPass[0].smodelCollExpansionArgsBuffer.view + v9 * 8576 + v8);
    R_SetComputeViews(state, 8, 1, (const GfxShaderBufferView *const *)&v21);
    RB_ModelData_SetSModelCollectionsData(state, 9u);
    p_view = &p_clutterCollectionGPUDataBuffer->view;
    R_SetComputeViews(state, 18, 1, (const GfxShaderBufferView *const *)&p_view);
    p_rwView = &R_RT_Handle::GetWrappedBuffer(_RSI)->rwView;
    R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&p_rwView, NULL);
    v17 = &R_RT_Handle::GetWrappedBuffer(smodelWorkgroupArgsBuffer)->rwView;
    R_SetComputeRWViewsWithCounters(state, 1, 1, (const GfxShaderBufferRWView *const *)&v17, NULL);
    R_SetComputeShader(state, rgp.gpSModelWorkgroupGenPass);
    R_Dispatch(state, *v12, 1u, 1u);
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
  unsigned __int64 v13; 
  GPBackendFrameData *v14; 
  const GfxWrappedRWBuffer *WrappedBuffer; 
  _DWORD *v17; 
  bool v18; 
  int v19; 
  __int64 batchCount; 
  GfxShaderBufferView *views; 
  R_RT_Handle *v22; 
  GfxShaderBufferView *p_view; 
  R_RT_Handle *v24; 
  GfxShaderBufferView *v25; 
  GfxShaderBufferRWView *p_rwView; 
  R_RT_Handle v27; 
  int dataa[8]; 

  _RBP = indirectArgsBuffer;
  v22 = subMeshClusterOffsetsBuffer;
  v24 = clusterTriOffsetsBuffer;
  smpFrame = data->smpFrame;
  v13 = passIndex;
  v14 = &s_gpBackendFrameData[smpFrame];
  if ( s_gpBackendFrameData[smpFrame].gpBackendPass[v13].batchCount )
  {
    WrappedBuffer = R_RT_Handle::GetWrappedBuffer(indirectArgsBuffer);
    R_GP_ClearBufferToZero(state, WrappedBuffer, 0x90000u, 0);
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+0]
      vmovups [rsp+0E8h+var_88], ymm0
    }
    R_HW_AddResourceTransition(state, &v27, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(state);
  }
  v17 = (_DWORD *)((char *)s_gpBackendFrameData + v13 * 8576 + smpFrame * 20544);
  if ( (v17[33] || (int)v17[16] > 0) && *v17 )
  {
    v18 = isPrepass && !passIndex;
    dataa[0] = v14->gpBackendPass[v13].batchCount;
    v19 = 2621440;
    if ( v18 )
      v19 = 7864320;
    dataa[4] = v19;
    R_UploadAndSetComputeConstants(state, 6, dataa, 0x20u, NULL);
    batchCount = v14->gpBackendPass[v13].batchCount;
    views = &R_RT_Handle::GetWrappedBuffer(batchSubMeshOffsetsBuffer)->view;
    R_SetComputeViews(state, 17, 1, (const GfxShaderBufferView *const *)&views);
    p_view = &R_RT_Handle::GetWrappedBuffer(v22)->view;
    R_SetComputeViews(state, 21, 1, (const GfxShaderBufferView *const *)&p_view);
    v25 = &R_RT_Handle::GetWrappedBuffer(v24)->view;
    R_SetComputeViews(state, 15, 1, (const GfxShaderBufferView *const *)&v25);
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
  const GfxWrappedRWBuffer *WrappedBuffer; 
  const GfxWrappedRWBuffer *v16; 
  GfxShaderBufferRWView *p_rwView; 
  GfxShaderBufferRWView *v18; 
  R_RT_Handle v19; 
  R_RT_Handle v20; 
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
    _R14 = reduceBuffer;
    p_rwView = &R_RT_Handle::GetWrappedBuffer(reduceBuffer)->rwView;
    R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&p_rwView, NULL);
    v18 = &R_RT_Handle::GetWrappedBuffer(offsetsBuffer)->rwView;
    R_SetComputeRWViewsWithCounters(state, 1, 1, (const GfxShaderBufferRWView *const *)&v18, NULL);
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
    __asm
    {
      vmovups ymm0, ymmword ptr [r14]
      vmovups [rsp+98h+var_58], ymm0
    }
    R_HW_AddResourceTransition(state, &v19, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(state);
    R_SetComputeShader(state, rgp.prefixSumResolve256);
    R_Dispatch(state, 1u, 1u, 1u);
    __asm
    {
      vmovups ymm0, ymmword ptr [r14]
      vmovups [rsp+98h+var_38], ymm0
    }
    R_HW_AddResourceTransition(state, &v20, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(state);
    R_SetComputeShader(state, rgp.prefixSumDownsweep256);
    if ( v10->m_surfaceID )
    {
      v16 = R_RT_Handle::GetWrappedBuffer(v10);
      R_DispatchIndirect(state, v16->buffer, 0);
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
  const GfxWrappedRWBuffer *WrappedBuffer; 
  const GfxWrappedRWBuffer *v16; 
  GfxShaderBufferRWView *p_rwView; 
  GfxShaderBufferRWView *v18; 
  R_RT_Handle v19; 
  R_RT_Handle v20; 
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
    _R14 = reduceBuffer;
    p_rwView = &R_RT_Handle::GetWrappedBuffer(reduceBuffer)->rwView;
    R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&p_rwView, NULL);
    v18 = &R_RT_Handle::GetWrappedBuffer(offsetsBuffer)->rwView;
    R_SetComputeRWViewsWithCounters(state, 1, 1, (const GfxShaderBufferRWView *const *)&v18, NULL);
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
    __asm
    {
      vmovups ymm0, ymmword ptr [r14]
      vmovups [rsp+98h+var_58], ymm0
    }
    R_HW_AddResourceTransition(state, &v19, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(state);
    R_SetComputeShader(state, rgp.prefixSumResolve512);
    R_Dispatch(state, 1u, 1u, 1u);
    __asm
    {
      vmovups ymm0, ymmword ptr [r14]
      vmovups [rsp+98h+var_38], ymm0
    }
    R_HW_AddResourceTransition(state, &v20, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(state);
    R_SetComputeShader(state, rgp.prefixSumDownsweep512);
    if ( v10->m_surfaceID )
    {
      v16 = R_RT_Handle::GetWrappedBuffer(v10);
      R_DispatchIndirect(state, v16->buffer, 0);
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
  R_RT_BufferHandle v34; 
  R_RT_BufferHandle v35; 
  R_RT_BufferHandle v36; 
  R_RT_BufferHandle v37; 
  R_RT_BufferHandle v38; 
  R_RT_BufferHandle v39; 
  R_RT_BufferHandle v40; 
  R_RT_BufferHandle v41; 
  R_RT_BufferHandle v42; 
  R_RT_BufferHandle v43; 

  _R15 = batchSubMeshOffsetsBuffer;
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
      _RAX = indirectArgsBuffer;
      __asm { vmovups ymm0, ymmword ptr [rax] }
      _RAX = clusterTriOffsetsBuffer;
      __asm
      {
        vmovups [rsp+1A8h+var_158], ymm0
        vmovups ymm1, ymmword ptr [rax]
      }
      _RAX = subMeshClusterOffsetsBuffer;
      __asm
      {
        vmovups [rsp+1A8h+var_138], ymm1
        vmovups ymm1, ymmword ptr [r15]
        vmovups [rsp+1A8h+var_F8], ymm1
        vmovups ymm0, ymmword ptr [rax]
        vmovups [rsp+1A8h+var_118], ymm0
      }
      R_GP_ReadBackGPStats_PostOcclusion(state, data, passIndex, &v37, &v36, &v35, &v34);
    }
    else
    {
      _RAX = indirectArgsBuffer;
      __asm { vmovups ymm0, ymmword ptr [rax] }
      _RAX = smodelSurfCountBuffer;
      __asm
      {
        vmovups [rsp+1A8h+var_D8], ymm0
        vmovups ymm1, ymmword ptr [rax]
      }
      _RAX = smodelSurfEmitCountBuffer;
      __asm
      {
        vmovups [rsp+1A8h+var_B8], ymm1
        vmovups ymm0, ymmword ptr [rax]
      }
      _RAX = clusterTriOffsetsBuffer;
      __asm
      {
        vmovups [rsp+1A8h+var_98], ymm0
        vmovups ymm1, ymmword ptr [rax]
      }
      _RAX = subMeshClusterOffsetsBuffer;
      __asm
      {
        vmovups [rsp+1A8h+var_78], ymm1
        vmovups ymm1, ymmword ptr [r9]
        vmovups ymm0, ymmword ptr [rax]
        vmovups [rsp+1A8h+var_58], ymm0
        vmovups [rsp+1A8h+var_38], ymm1
      }
      R_GP_ReadBackGPStats_PreOcclusion(state, data, passIndex, &v43, &v42, &v41, &v40, &v39, &v38);
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
  GfxPerDynSurfData *v27; 
  Bounds *bounds; 
  unsigned int v29; 
  __int64 v30; 
  __int16 gpBatcha; 

  if ( gpFrontend != (GPFrontendData *)gpFrontend->typed[0].surfsBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1349, ASSERT_TYPE_ASSERT, "(gpFrontend->rigidSurfs == gpFrontend->typed[GP_SURF_RIGID].surfsBuffer)", (const char *)&queryFormat, "gpFrontend->rigidSurfs == gpFrontend->typed[GP_SURF_RIGID].surfsBuffer") )
    __debugbreak();
  surfsBuffer = data->surfsBuffer;
  firstSurf = gpBatch->firstSurf;
  if ( !gpBackendPass->perDynSurfDataGPU && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1359, ASSERT_TYPE_ASSERT, "(gpBackendPass->perDynSurfDataGPU)", (const char *)&queryFormat, "gpBackendPass->perDynSurfDataGPU") )
    __debugbreak();
  _RDI = &surfsBuffer[gpFrontend->rigidSurfs[firstSurf].objID];
  v12 = -3 - *(_DWORD *)_RDI;
  v13 = *((_QWORD *)_RDI + 7);
  v30 = v13;
  if ( v12 > 128 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_model.h", 209, ASSERT_TYPE_ASSERT, "( childCount ) <= ( ( XMODEL_MAX_RIGID_GROUPS ) )", "%s <= %s\n\t%i, %i", "childCount", "MAX_RIGID_CHILD_SURFACES", -3 - *(_DWORD *)_RDI, 128) )
    __debugbreak();
  if ( gpBatch->surfCount != v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1365, ASSERT_TYPE_ASSERT, "(gpBatch.surfCount == R_GetModelRigidSurfaceChildCount( rigidSurf ))", (const char *)&queryFormat, "gpBatch.surfCount == R_GetModelRigidSurfaceChildCount( rigidSurf )") )
    __debugbreak();
  v14 = gpBatch->firstSurf + gpBackendPass->surfIndexOffsets[0];
  v29 = v14;
  if ( v14 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1369, ASSERT_TYPE_ASSERT, "(R_GP_IsValidGPUSurfIndex( globalFirstSurf ))", (const char *)&queryFormat, "R_GP_IsValidGPUSurfIndex( globalFirstSurf )") )
    __debugbreak();
  v15 = *((_WORD *)_RDI + 52);
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
      v21 = (const GfxPlacementPrecise *)&_RDI[v20 + 76];
      if ( v15 == -1 )
      {
        v22 = *(_WORD *)(v13 + 4);
        v23 = 0;
      }
      else
      {
        v24 = (unsigned int)*(__int16 *)&_RDI[v20 + 104];
        v25 = *(_QWORD *)(v13 + 88);
        v23 = *(_WORD *)(v25 + 8 * v24 + 4);
        v22 = *(_WORD *)(v25 + 8 * v24 + 6);
      }
      __asm { vmovss  xmm3, dword ptr [rdi+48h]; scale }
      R_PopulateRigidSurfCullArgs(gpBackendPass, v19, v21, *(const float *)&_XMM3, bounds);
      if ( v23 + (unsigned int)v22 > *(unsigned __int16 *)(v30 + 4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1409, ASSERT_TYPE_ASSERT, "(triOffset + triCount <= xsurf->triCount)", (const char *)&queryFormat, "triOffset + triCount <= xsurf->triCount") )
        __debugbreak();
      ++v16;
      v27 = &gpBackendPass->perDynSurfDataGPU[v18];
      v14 = v29;
      *(_QWORD *)&v27->childID = 0i64;
      *(_QWORD *)&v27->triOffset = 0i64;
      *(_QWORD *)&v27->skinnedCacheOffset = 0i64;
      *(_QWORD *)&v27->mayhemSelfVisInfo = 0i64;
      v27->childID = v17;
      v27->viewType = gpBatch->sceneViewType;
      v27->cullType = gpBatch->cullType;
      v27->triCount = v22;
      v13 = v30;
      v27->triOffset = v23;
      v15 = gpBatcha;
      v27->ugbID = *(_WORD *)(v30 + 10);
      v27->batchIndex = batchIndex;
      v27->mayhemVBOffset = *((_DWORD *)_RDI + 1);
      v27->mayhemSelfVisInfo = *((_DWORD *)_RDI + 2);
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
  int v31; 
  int v32; 
  int v33; 

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
  _RDX = R_GetGPBufferPtr_vec4_t_(skinnedSurfCullArgsGPU, 16 * (v14 + 4096), 0x38000u);
  __asm { vmovss  xmm2, cs:__real@45800000 }
  *GPBufferPtr_vec4_t = *(vec4_t *)(v11 + 76);
  __asm
  {
    vmulss  xmm0, xmm2, dword ptr [rdi+5Ch]
    vcvttss2si ecx, xmm0
    vmulss  xmm0, xmm2, dword ptr [rdi+60h]
    vcvttss2si eax, xmm0
    vmulss  xmm0, xmm2, dword ptr [rdi+64h]
  }
  v32 = _EAX;
  __asm
  {
    vcvttss2si eax, xmm0
    vmovss  xmm0, [rsp+78h+var_44]
  }
  v31 = _ECX;
  __asm { vmovss  xmm1, [rsp+78h+var_48] }
  v33 = _EAX;
  __asm
  {
    vmovss  dword ptr [rdx], xmm1
    vmovss  xmm1, [rsp+78h+var_40]
    vmovss  dword ptr [rdx+8], xmm1
    vmovss  dword ptr [rdx+4], xmm0
  }
  _RDX->v[3] = 1.0;
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

void __fastcall R_PopulateRigidSurfCullArgs(GPBackendPassData *gpBackendPass, unsigned int rigidSurfIndex, const GfxPlacementPrecise *precisePlacement, double scale, const Bounds *bounds)
{
  unsigned __int8 *rigidSurfCullArgsGPU; 
  unsigned int v32; 
  vec3_t *GPBufferPtr_vec3_t; 
  vec3_t *v38; 
  int v60; 
  int v61; 
  int v62; 
  char v65; 
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
    vmovaps [rsp+0E8h+var_88], xmm12
    vmovaps [rsp+0E8h+var_98], xmm13
    vmovsd  xmm2, cs:__real@3f30000000000000
  }
  rigidSurfCullArgsGPU = gpBackendPass->rigidSurfCullArgsGPU;
  __asm
  {
    vmovss  xmm10, dword ptr [r8]
    vmovss  xmm11, dword ptr [r8+4]
    vmovss  xmm12, dword ptr [r8+8]
    vmovss  xmm13, dword ptr [r8+0Ch]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, dword ptr [r8+10h]
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2sd xmm1, xmm1, dword ptr [r8+14h]
    vmulsd  xmm0, xmm0, xmm2
    vcvtsd2ss xmm7, xmm0, xmm0
    vmulsd  xmm0, xmm1, xmm2
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2sd xmm1, xmm1, dword ptr [r8+18h]
    vcvtsd2ss xmm8, xmm0, xmm0
  }
  v32 = 12 * rigidSurfIndex;
  __asm
  {
    vmulsd  xmm0, xmm1, xmm2
    vcvtsd2ss xmm9, xmm0, xmm0
    vmovaps xmm6, xmm3
  }
  GPBufferPtr_vec3_t = R_GetGPBufferPtr_vec3_t_(rigidSurfCullArgsGPU, 12 * rigidSurfIndex + 0x40000, 0x70000u);
  v38 = R_GetGPBufferPtr_vec3_t_(rigidSurfCullArgsGPU, v32 + 360448, 0x70000u);
  _RBX = R_GetGPBufferPtr_vec4_t_(rigidSurfCullArgsGPU, 16 * rigidSurfIndex, 0x70000u);
  _RDI = R_GetGPBufferPtr_vec4_t_(rigidSurfCullArgsGPU, 16 * (rigidSurfIndex + 0x2000), 0x70000u);
  if ( rigidSurfIndex >= 0x2000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_pipeline.cpp", 1294, ASSERT_TYPE_ASSERT, "(rigidSurfIndex < GP_SURF_RIGID_COUNT)", (const char *)&queryFormat, "rigidSurfIndex < GP_SURF_RIGID_COUNT") )
    __debugbreak();
  __asm
  {
    vmovss  xmm2, cs:__real@45800000
    vmulss  xmm0, xmm7, xmm2
    vmulss  xmm1, xmm8, xmm2
  }
  *GPBufferPtr_vec3_t = bounds->halfSize;
  *(_QWORD *)v38->v = *(_QWORD *)bounds->midPoint.v;
  v38->v[2] = bounds->midPoint.v[2];
  __asm
  {
    vmovss  dword ptr [rbx], xmm10
    vmovss  dword ptr [rbx+4], xmm11
    vmovss  dword ptr [rbx+8], xmm12
    vcvttss2si eax, xmm0
    vmovss  dword ptr [rbx+0Ch], xmm13
  }
  v60 = _EAX;
  __asm
  {
    vcvttss2si eax, xmm1
    vmovss  xmm1, [rsp+0E8h+var_B8]
    vmulss  xmm0, xmm9, xmm2
  }
  v61 = _EAX;
  __asm
  {
    vcvttss2si eax, xmm0
    vmovss  xmm0, [rsp+0E8h+var_B4]
  }
  v62 = _EAX;
  __asm
  {
    vmovss  dword ptr [rdi], xmm1
    vmovss  xmm1, [rsp+0E8h+var_B0]
    vmovss  dword ptr [rdi+8], xmm1
    vmovss  dword ptr [rdi+4], xmm0
    vmovss  dword ptr [rdi+0Ch], xmm6
  }
  _R11 = &v65;
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

