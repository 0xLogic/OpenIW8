/*
==============
RB_LGV_SampleLighting
==============
*/

void __fastcall RB_LGV_SampleLighting(ComputeCmdBufState *state, const GfxBackEndData *data, const GfxViewInfo *viewInfo)
{
  ?RB_LGV_SampleLighting@@YAXPEAUComputeCmdBufState@@PEBUGfxBackEndData@@PEBUGfxViewInfo@@@Z(state, data, viewInfo);
}

/*
==============
R_LGV_InitPerFrameData
==============
*/

void __fastcall R_LGV_InitPerFrameData(const vec3_t *camera_ws)
{
  ?R_LGV_InitPerFrameData@@YAXAEBTvec3_t@@@Z(camera_ws);
}

/*
==============
R_LGV_CompactLightGridSamplingLists
==============
*/

void __fastcall R_LGV_CompactLightGridSamplingLists(ComputeCmdBufState *state, const GfxBackEndData *data, const GfxViewInfo *viewInfo, const GfxWrappedRWBuffer *lightGridVolumeActiveLightGrids, const GfxWrappedRWBuffer *lightGridVolumeSamplingSlot, const GfxWrappedRWBuffer *samplingBufferOffsets1, const GfxWrappedRWBuffer *globalProbeOffsets1, const GfxWrappedRWBuffer *lightgridProbeCounts1, const GfxWrappedRWBuffer *lightgridVolumeCounts1, const GfxWrappedRWBuffer *globalProbeOffset, const GfxWrappedRWBuffer *lightGridVolumesList, const GfxWrappedRWBuffer *lightGridProbeOffset)
{
  ?R_LGV_CompactLightGridSamplingLists@@YAXPEAUComputeCmdBufState@@PEBUGfxBackEndData@@PEBUGfxViewInfo@@PEBUGfxWrappedRWBuffer@@33333333@Z(state, data, viewInfo, lightGridVolumeActiveLightGrids, lightGridVolumeSamplingSlot, samplingBufferOffsets1, globalProbeOffsets1, lightgridProbeCounts1, lightgridVolumeCounts1, globalProbeOffset, lightGridVolumesList, lightGridProbeOffset);
}

/*
==============
RB_LGV_DrawProbes
==============
*/

void __fastcall RB_LGV_DrawProbes(GfxCmdBufContext *context, const GfxViewInfo *viewInfo)
{
  ?RB_LGV_DrawProbes@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@@Z(context, viewInfo);
}

/*
==============
R_LGV_ShutdownWorld
==============
*/

void __fastcall R_LGV_ShutdownWorld(GfxWorld *world)
{
  ?R_LGV_ShutdownWorld@@YAXPEAUGfxWorld@@@Z(world);
}

/*
==============
R_LGV_GenerateLightGridSamplingLists
==============
*/

void __fastcall R_LGV_GenerateLightGridSamplingLists(ComputeCmdBufState *state, const GfxBackEndData *data, const GfxViewInfo *viewInfo)
{
  ?R_LGV_GenerateLightGridSamplingLists@@YAXPEAUComputeCmdBufState@@PEBUGfxBackEndData@@PEBUGfxViewInfo@@@Z(state, data, viewInfo);
}

/*
==============
R_LGV_PrepareVolumeInfo_DynModel
==============
*/

void __fastcall R_LGV_PrepareVolumeInfo_DynModel(const LightGridVolumeModifier *lgvModifier, const unsigned int mapEntLookup, const XModel *probeModel, unsigned int materialLod, const GfxPlacement *pose, GfxModelLightingProbeInfo *lightingInfo, GpuLightGridRequestRecord *request, const GpuLightGridRequestRecord *lastRequest)
{
  ?R_LGV_PrepareVolumeInfo_DynModel@@YAXPEBULightGridVolumeModifier@@IPEBUXModel@@IPEBUGfxPlacement@@PEAUGfxModelLightingProbeInfo@@PEAUGpuLightGridRequestRecord@@PEBU5@@Z(lgvModifier, mapEntLookup, probeModel, materialLod, pose, lightingInfo, request, lastRequest);
}

/*
==============
R_LGV_GenerateLightGridSamplingListsDownsweep
==============
*/

void __fastcall R_LGV_GenerateLightGridSamplingListsDownsweep(ComputeCmdBufState *state, const GfxBackEndData *data, const GfxViewInfo *viewInfo, const GfxWrappedRWBuffer *samplingBufferOffsets1, const GfxWrappedRWBuffer *globalProbeOffsets1, const GfxWrappedRWBuffer *lightgridProbeCounts1, const GfxWrappedRWBuffer *lightgridVolumeCounts1, const GfxWrappedRWBuffer *samplingBufferOffsets2, const GfxWrappedRWBuffer *globalProbeOffsets2, const GfxWrappedRWBuffer *lightgridProbeCounts2, const GfxWrappedRWBuffer *lightgridVolumeCounts2)
{
  ?R_LGV_GenerateLightGridSamplingListsDownsweep@@YAXPEAUComputeCmdBufState@@PEBUGfxBackEndData@@PEBUGfxViewInfo@@PEBUGfxWrappedRWBuffer@@3333333@Z(state, data, viewInfo, samplingBufferOffsets1, globalProbeOffsets1, lightgridProbeCounts1, lightgridVolumeCounts1, samplingBufferOffsets2, globalProbeOffsets2, lightgridProbeCounts2, lightgridVolumeCounts2);
}

/*
==============
R_LGV_PrepareVolumeInfo_SceneEnt
==============
*/

void __fastcall R_LGV_PrepareVolumeInfo_SceneEnt(const LightGridVolumeModifier *lgvModifier, const GfxSceneEntity *sceneEnt, GfxModelLightingProbeInfo *lightingInfo, GpuLightGridRequestRecord *request, const GpuLightGridRequestRecord *lastRequest)
{
  ?R_LGV_PrepareVolumeInfo_SceneEnt@@YAXPEBULightGridVolumeModifier@@PEBUGfxSceneEntity@@PEAUGfxModelLightingProbeInfo@@PEAUGpuLightGridRequestRecord@@PEBU4@@Z(lgvModifier, sceneEnt, lightingInfo, request, lastRequest);
}

/*
==============
R_LGV_MaterialLodForcesSingleProbe
==============
*/

bool __fastcall R_LGV_MaterialLodForcesSingleProbe(unsigned int materialLod)
{
  return ?R_LGV_MaterialLodForcesSingleProbe@@YA_NI@Z(materialLod);
}

/*
==============
R_LGV_CalcModifier
==============
*/

LightGridVolumeModifier *__fastcall R_LGV_CalcModifier(LightGridVolumeModifier *result, unsigned int renderFlags, const GfxViewInfo *viewInfo, unsigned int mapEntLookup, unsigned int entnum, const XModel **modelList, const unsigned int modelCount)
{
  return ?R_LGV_CalcModifier@@YA?AULightGridVolumeModifier@@IPEBUGfxViewInfo@@IIQEAPEBUXModel@@I@Z(result, renderFlags, viewInfo, mapEntLookup, entnum, modelList, modelCount);
}

/*
==============
R_LGV_SampleLightingPerLightGrid
==============
*/

void __fastcall R_LGV_SampleLightingPerLightGrid(ComputeCmdBufState *state, const GfxBackEndData *data, const GfxViewInfo *viewInfo, const GfxWrappedBuffer *lightGridVolumeActiveLightGrids, const GfxWrappedBuffer *lightGridVolumeSamplingSlot, const GfxWrappedRWBuffer *lightGridVolumeSampledLightingData, const GfxWrappedBuffer *prevFrameLightGridVolumeActiveLightGrids, const GfxWrappedBuffer *prevFrameLightGridVolumeSamplingSlot, const GfxWrappedBuffer *prevFrameLightGridVolumeSampledLightingData, const GfxWrappedBuffer *lightGridVolumeCount, const GfxWrappedBuffer *lightGridVolumeIndexingBuffer, const GfxWrappedBuffer *lightGridVolumesList, const GfxWrappedBuffer *indirectDispatchParams, const GfxGpuLightGrid *gpuLightGrid, int lightGridIndex)
{
  ?R_LGV_SampleLightingPerLightGrid@@YAXPEAUComputeCmdBufState@@PEBUGfxBackEndData@@PEBUGfxViewInfo@@PEBUGfxWrappedBuffer@@3PEBUGfxWrappedRWBuffer@@3333333PEBUGfxGpuLightGrid@@H@Z(state, data, viewInfo, lightGridVolumeActiveLightGrids, lightGridVolumeSamplingSlot, lightGridVolumeSampledLightingData, prevFrameLightGridVolumeActiveLightGrids, prevFrameLightGridVolumeSamplingSlot, prevFrameLightGridVolumeSampledLightingData, lightGridVolumeCount, lightGridVolumeIndexingBuffer, lightGridVolumesList, indirectDispatchParams, gpuLightGrid, lightGridIndex);
}

/*
==============
R_LGV_LazyAllocSamplingBuffers
==============
*/

void R_LGV_LazyAllocSamplingBuffers(void)
{
  ?R_LGV_LazyAllocSamplingBuffers@@YAXXZ();
}

/*
==============
R_LGV_GenerateActiveLightGridsMask
==============
*/

void __fastcall R_LGV_GenerateActiveLightGridsMask(ComputeCmdBufState *state, const GfxBackEndData *data, const GfxViewInfo *viewInfo, const GfxWrappedRWBuffer *lightGridVolumeActiveLightGrids)
{
  ?R_LGV_GenerateActiveLightGridsMask@@YAXPEAUComputeCmdBufState@@PEBUGfxBackEndData@@PEBUGfxViewInfo@@PEBUGfxWrappedRWBuffer@@@Z(state, data, viewInfo, lightGridVolumeActiveLightGrids);
}

/*
==============
R_LGV_Pack3dCmd
==============
*/

void __fastcall R_LGV_Pack3dCmd(const void *const data)
{
  ?R_LGV_Pack3dCmd@@YAXQEBX@Z(data);
}

/*
==============
R_LGV_KickOffPacking
==============
*/

void __fastcall R_LGV_KickOffPacking(const GfxBackEndData *data)
{
  ?R_LGV_KickOffPacking@@YAXPEBUGfxBackEndData@@@Z(data);
}

/*
==============
R_LGV_ComputeGlobalGroupStartProbeIndices
==============
*/

void __fastcall R_LGV_ComputeGlobalGroupStartProbeIndices(ComputeCmdBufState *state, const GfxBackEndData *data, const GfxViewInfo *viewInfo, const GfxWrappedRWBuffer *globalProbeOffset, const GfxWrappedRWBuffer *globalVolumeIndexingBuffer)
{
  ?R_LGV_ComputeGlobalGroupStartProbeIndices@@YAXPEAUComputeCmdBufState@@PEBUGfxBackEndData@@PEBUGfxViewInfo@@PEBUGfxWrappedRWBuffer@@3@Z(state, data, viewInfo, globalProbeOffset, globalVolumeIndexingBuffer);
}

/*
==============
R_LGV_PrepareVolumeInfo_SceneModel
==============
*/

void __fastcall R_LGV_PrepareVolumeInfo_SceneModel(const LightGridVolumeModifier *lgvModifier, const GfxSceneModel *sceneModel, GfxModelLightingProbeInfo *lightingInfo, GpuLightGridRequestRecord *request, const GpuLightGridRequestRecord *lastRequest)
{
  ?R_LGV_PrepareVolumeInfo_SceneModel@@YAXPEBULightGridVolumeModifier@@PEBUGfxSceneModel@@PEAUGfxModelLightingProbeInfo@@PEAUGpuLightGridRequestRecord@@PEBU4@@Z(lgvModifier, sceneModel, lightingInfo, request, lastRequest);
}

/*
==============
R_LGV_DrawProbes
==============
*/

void __fastcall R_LGV_DrawProbes(GfxCmdBufContext *context, const GfxViewInfo *viewInfo)
{
  ?R_LGV_DrawProbes@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@@Z(context, viewInfo);
}

/*
==============
R_LGV_CombineSampledLighting
==============
*/

void __fastcall R_LGV_CombineSampledLighting(ComputeCmdBufState *state, const GfxBackEndData *data, const GfxViewInfo *viewInfo, const GfxWrappedRWBuffer *lightGridVolumeActiveLightGrids, const GfxWrappedRWBuffer *lightGridVolumeSamplingSlot, const GfxWrappedRWBuffer *lightGridVolumeSampledLightingData, const GfxWrappedRWBuffer *globalVolumeIndexingBuffer, R_RT_ColorHandle *lightGridVolumeData3D, R_RT_ColorHandle *lightGridVolumeHighBandData3D, bool reflectionVolumes)
{
  ?R_LGV_CombineSampledLighting@@YAXPEAUComputeCmdBufState@@PEBUGfxBackEndData@@PEBUGfxViewInfo@@PEBUGfxWrappedRWBuffer@@333VR_RT_ColorHandle@@4_N@Z(state, data, viewInfo, lightGridVolumeActiveLightGrids, lightGridVolumeSamplingSlot, lightGridVolumeSampledLightingData, globalVolumeIndexingBuffer, lightGridVolumeData3D, lightGridVolumeHighBandData3D, reflectionVolumes);
}

/*
==============
RB_LGV_SampleLightingSetup
==============
*/

void __fastcall RB_LGV_SampleLightingSetup(ComputeCmdBufState *state, const GfxBackEndData *data)
{
  ?RB_LGV_SampleLightingSetup@@YAXPEAUComputeCmdBufState@@PEBUGfxBackEndData@@@Z(state, data);
}

/*
==============
R_LGV_ComputeGroupStartProbeIndices
==============
*/

void __fastcall R_LGV_ComputeGroupStartProbeIndices(ComputeCmdBufState *state, const GfxBackEndData *data, const GfxViewInfo *viewInfo, const GfxWrappedRWBuffer *lightGridVolumeCount, const GfxWrappedRWBuffer *lightGridProbeOffset, const GfxWrappedRWBuffer *lightGridVolumeIndexingBuffer, const GfxWrappedRWBuffer *indirectDispatchParams, int lightGridIndex)
{
  ?R_LGV_ComputeGroupStartProbeIndices@@YAXPEAUComputeCmdBufState@@PEBUGfxBackEndData@@PEBUGfxViewInfo@@PEBUGfxWrappedRWBuffer@@333H@Z(state, data, viewInfo, lightGridVolumeCount, lightGridProbeOffset, lightGridVolumeIndexingBuffer, indirectDispatchParams, lightGridIndex);
}

/*
==============
R_LGV_InitSamplingConstBuffers
==============
*/

void R_LGV_InitSamplingConstBuffers(void)
{
  ?R_LGV_InitSamplingConstBuffers@@YAXXZ();
}

/*
==============
R_LGV_DrawVolumes
==============
*/

void __fastcall R_LGV_DrawVolumes(vec3_t *cameraPos)
{
  ?R_LGV_DrawVolumes@@YAXTvec3_t@@@Z(cameraPos);
}

/*
==============
RB_LGV_WaitForPacking
==============
*/

void __fastcall RB_LGV_WaitForPacking(const GfxBackEndData *data)
{
  ?RB_LGV_WaitForPacking@@YAXPEBUGfxBackEndData@@@Z(data);
}

/*
==============
R_LGV_DebugMarkStaticLGVVisible
==============
*/

void __fastcall R_LGV_DebugMarkStaticLGVVisible(unsigned int smpFrame, unsigned int smodelInstanceIndex)
{
  ?R_LGV_DebugMarkStaticLGVVisible@@YAXII@Z(smpFrame, smodelInstanceIndex);
}

/*
==============
R_LGV_ComputeGroupStartProbeIndices
==============
*/

void __fastcall R_LGV_ComputeGroupStartProbeIndices(ComputeCmdBufState *state, const GfxBackEndData *data, const GfxViewInfo *viewInfo, const GfxWrappedRWBuffer *globalProbeOffset, const GfxWrappedRWBuffer *globalVolumeIndexingBuffer, const GfxWrappedRWBuffer *lightGridVolumeCount, const GfxWrappedRWBuffer *lightGridProbeOffset, const GfxWrappedRWBuffer *lightGridVolumeIndexingBuffer, const GfxWrappedRWBuffer *indirectDispatchParams)
{
  ?R_LGV_ComputeGroupStartProbeIndices@@YAXPEAUComputeCmdBufState@@PEBUGfxBackEndData@@PEBUGfxViewInfo@@PEBUGfxWrappedRWBuffer@@33333@Z(state, data, viewInfo, globalProbeOffset, globalVolumeIndexingBuffer, lightGridVolumeCount, lightGridProbeOffset, lightGridVolumeIndexingBuffer, indirectDispatchParams);
}

/*
==============
R_LGV_SetupMultiLightGridSampling
==============
*/

bool __fastcall R_LGV_SetupMultiLightGridSampling(ComputeCmdBufState *state, const GfxBackEndData *data, const GfxViewInfo *viewInfo, bool prevFrameValid)
{
  return ?R_LGV_SetupMultiLightGridSampling@@YA_NPEAUComputeCmdBufState@@PEBUGfxBackEndData@@PEBUGfxViewInfo@@_N@Z(state, data, viewInfo, prevFrameValid);
}

/*
==============
R_LGV_InitWorld
==============
*/

void __fastcall R_LGV_InitWorld(GfxWorld *world)
{
  ?R_LGV_InitWorld@@YAXPEAUGfxWorld@@@Z(world);
}

/*
==============
R_LGV_SortAxes
==============
*/

void __fastcall R_LGV_SortAxes(unsigned __int8 *volumeSize, vec4_t *volumeTransform)
{
  ?R_LGV_SortAxes@@YAXQEAEQEATvec4_t@@@Z(volumeSize, volumeTransform);
}

/*
==============
UB_BoundProbes
==============
*/

void __fastcall UB_BoundProbes(int minAxisUse, int medAxisUse, const unsigned int maxProbesUse, int *lgvSize)
{
  ?UB_BoundProbes@@YAXHHIPEAH@Z(minAxisUse, medAxisUse, maxProbesUse, lgvSize);
}

/*
==============
R_LGV_SampleLightingPerLightGrid
==============
*/

void __fastcall R_LGV_SampleLightingPerLightGrid(ComputeCmdBufState *state, const GfxBackEndData *data, const GfxViewInfo *viewInfo, const GfxWrappedBuffer *lightGridVolumeActiveLightGrids, const GfxWrappedBuffer *lightGridVolumeSamplingSlot, const GfxWrappedRWBuffer *lightGridVolumeSampledLightingData, const GfxWrappedBuffer *prevFrameLightGridVolumeActiveLightGrids, const GfxWrappedBuffer *prevFrameLightGridVolumeSamplingSlot, const GfxWrappedBuffer *prevFrameLightGridVolumeSampledLightingData, const GfxWrappedBuffer *lightGridVolumeCount, const GfxWrappedBuffer *lightGridVolumeIndexingBuffer, const GfxWrappedBuffer *lightGridVolumesList, const GfxWrappedBuffer *indirectDispatchParams)
{
  ?R_LGV_SampleLightingPerLightGrid@@YAXPEAUComputeCmdBufState@@PEBUGfxBackEndData@@PEBUGfxViewInfo@@PEBUGfxWrappedBuffer@@3PEBUGfxWrappedRWBuffer@@3333333@Z(state, data, viewInfo, lightGridVolumeActiveLightGrids, lightGridVolumeSamplingSlot, lightGridVolumeSampledLightingData, prevFrameLightGridVolumeActiveLightGrids, prevFrameLightGridVolumeSamplingSlot, prevFrameLightGridVolumeSampledLightingData, lightGridVolumeCount, lightGridVolumeIndexingBuffer, lightGridVolumesList, indirectDispatchParams);
}

/*
==============
R_LGV_PrepareDefaultDynamicVolume
==============
*/

void R_LGV_PrepareDefaultDynamicVolume(void)
{
  ?R_LGV_PrepareDefaultDynamicVolume@@YAXXZ();
}

/*
==============
R_LGV_PrepareVolumeInfo
==============
*/

unsigned int __fastcall R_LGV_PrepareVolumeInfo(const vec3_t *samplePos)
{
  return ?R_LGV_PrepareVolumeInfo@@YAIAEBTvec3_t@@@Z(samplePos);
}

/*
==============
R_LGV_FreeSamplingBuffers
==============
*/

void R_LGV_FreeSamplingBuffers(void)
{
  ?R_LGV_FreeSamplingBuffers@@YAXXZ();
}

/*
==============
R_LGV_UseMultiLightGridSampling
==============
*/

bool __fastcall R_LGV_UseMultiLightGridSampling()
{
  return ?R_LGV_UseMultiLightGridSampling@@YA_NXZ();
}

/*
==============
RB_LGV_SampleLightingMultiLightGrid
==============
*/

void __fastcall RB_LGV_SampleLightingMultiLightGrid(ComputeCmdBufState *state, const GfxBackEndData *data, const GfxViewInfo *viewInfo, bool prevFrameValid, R_RT_ColorHandle *lightGridVolumeData3D, R_RT_ColorHandle *lightGridVolumeHighBandData3D)
{
  ?RB_LGV_SampleLightingMultiLightGrid@@YAXPEAUComputeCmdBufState@@PEBUGfxBackEndData@@PEBUGfxViewInfo@@_NVR_RT_ColorHandle@@4@Z(state, data, viewInfo, prevFrameValid, lightGridVolumeData3D, lightGridVolumeHighBandData3D);
}

/*
==============
R_LGV_CalcTransform
==============
*/

void __fastcall R_LGV_CalcTransform(const Bounds *bounds, const vec3_t *pos, const vec3_t *axes, vec4_t *transform)
{
  ?R_LGV_CalcTransform@@YAXPEBUBounds@@Tvec3_t@@QEBT2@QEATvec4_t@@@Z(bounds, pos, axes, transform);
}

/*
==============
R_LGV_GenerateLightGridSamplingListsBase
==============
*/

void __fastcall R_LGV_GenerateLightGridSamplingListsBase(ComputeCmdBufState *state, const GfxBackEndData *data, const GfxViewInfo *viewInfo, const GfxWrappedRWBuffer *lightGridVolumeActiveLightGrids, const GfxWrappedRWBuffer *samplingBufferOffsets1, const GfxWrappedRWBuffer *globalProbeOffsets1, const GfxWrappedRWBuffer *lightgridProbeCounts1, const GfxWrappedRWBuffer *lightgridVolumeCounts1)
{
  ?R_LGV_GenerateLightGridSamplingListsBase@@YAXPEAUComputeCmdBufState@@PEBUGfxBackEndData@@PEBUGfxViewInfo@@PEBUGfxWrappedRWBuffer@@3333@Z(state, data, viewInfo, lightGridVolumeActiveLightGrids, samplingBufferOffsets1, globalProbeOffsets1, lightgridProbeCounts1, lightgridVolumeCounts1);
}

/*
==============
R_LGV_SetCodeBuffers
==============
*/

void __fastcall R_LGV_SetCodeBuffers(GfxCmdBufInput *input, unsigned int frameIndex)
{
  ?R_LGV_SetCodeBuffers@@YAXPEAUGfxCmdBufInput@@I@Z(input, frameIndex);
}

/*
==============
R_LGV_ToggleSmpFrame
==============
*/

void __fastcall R_LGV_ToggleSmpFrame(unsigned int globalFrame, unsigned int smpFrame)
{
  ?R_LGV_ToggleSmpFrame@@YAXII@Z(globalFrame, smpFrame);
}

/*
==============
R_LGV_PackStaticProbeIndex
==============
*/

unsigned int __fastcall R_LGV_PackStaticProbeIndex(bool isStatic, unsigned int staticIndex, bool forceFallback, bool skipSampling)
{
  return ?R_LGV_PackStaticProbeIndex@@YAI_NI00@Z(isStatic, staticIndex, forceFallback, skipSampling);
}

/*
==============
R_LGV_SortAxes
==============
*/

void __fastcall R_LGV_SortAxes(unsigned __int8 *volumeSize, vec4_t *volumeTransform, int *axesSorted)
{
  ?R_LGV_SortAxes@@YAXQEAEQEATvec4_t@@QEAH@Z(volumeSize, volumeTransform, axesSorted);
}

/*
==============
R_LGV_GenerateLightGridSamplingListsUpsweep
==============
*/

void __fastcall R_LGV_GenerateLightGridSamplingListsUpsweep(ComputeCmdBufState *state, const GfxBackEndData *data, const GfxViewInfo *viewInfo, const GfxWrappedRWBuffer *samplingBufferOffsets2, const GfxWrappedRWBuffer *globalProbeOffsets2, const GfxWrappedRWBuffer *lightgridProbeCounts2, const GfxWrappedRWBuffer *lightgridVolumeCounts2, const GfxWrappedRWBuffer *samplingBufferOffsets1, const GfxWrappedRWBuffer *globalProbeOffsets1, const GfxWrappedRWBuffer *lightgridProbeCounts1, const GfxWrappedRWBuffer *lightgridVolumeCounts1, const GfxWrappedRWBuffer *lightGridVolumeCount, const GfxWrappedRWBuffer *indirectDispatchParams)
{
  ?R_LGV_GenerateLightGridSamplingListsUpsweep@@YAXPEAUComputeCmdBufState@@PEBUGfxBackEndData@@PEBUGfxViewInfo@@PEBUGfxWrappedRWBuffer@@333333333@Z(state, data, viewInfo, samplingBufferOffsets2, globalProbeOffsets2, lightgridProbeCounts2, lightgridVolumeCounts2, samplingBufferOffsets1, globalProbeOffsets1, lightgridProbeCounts1, lightgridVolumeCounts1, lightGridVolumeCount, indirectDispatchParams);
}

/*
==============
RB_LGV_PrepareInitialResourceStates
==============
*/

void __fastcall RB_LGV_PrepareInitialResourceStates(ComputeCmdBufState *state, const GfxBackEndData *data, const GfxViewInfo *viewInfo)
{
  ?RB_LGV_PrepareInitialResourceStates@@YAXPEAUComputeCmdBufState@@PEBUGfxBackEndData@@PEBUGfxViewInfo@@@Z(state, data, viewInfo);
}

/*
==============
R_LGV_DrawProbes_Enabled
==============
*/

bool __fastcall R_LGV_DrawProbes_Enabled(const GfxViewInfo *viewInfo)
{
  return ?R_LGV_DrawProbes_Enabled@@YA_NPEBUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
RB_LGV_SampleLightingVolumes
==============
*/

void __fastcall RB_LGV_SampleLightingVolumes(ComputeCmdBufState *state, const GfxBackEndData *data, const GfxViewInfo *viewInfo, bool prevFrameValid, const GfxGpuLightGrid *gpuLightGrid, R_RT_ColorHandle *lightGridVolumeData3D, R_RT_ColorHandle *lightGridVolumeHighBandData3D, const GfxWrappedRWBuffer *sampledLightingData, const GfxWrappedRWBuffer *sampledPrimaryVisTets, const GfxWrappedBuffer *prevFrameSampledLightingData, const GfxWrappedBuffer *prevFrameSampledPrimaryVisTets)
{
  ?RB_LGV_SampleLightingVolumes@@YAXPEAUComputeCmdBufState@@PEBUGfxBackEndData@@PEBUGfxViewInfo@@_NPEBUGfxGpuLightGrid@@VR_RT_ColorHandle@@5PEBUGfxWrappedRWBuffer@@6PEBUGfxWrappedBuffer@@7@Z(state, data, viewInfo, prevFrameValid, gpuLightGrid, lightGridVolumeData3D, lightGridVolumeHighBandData3D, sampledLightingData, sampledPrimaryVisTets, prevFrameSampledLightingData, prevFrameSampledPrimaryVisTets);
}

/*
==============
R_LGV_GetUsageStats
==============
*/

const LightGridVolumesMaxUsageStats *__fastcall R_LGV_GetUsageStats()
{
  return ?R_LGV_GetUsageStats@@YAPEBULightGridVolumesMaxUsageStats@@XZ();
}

/*
==============
R_LGV_Init
==============
*/

void R_LGV_Init(void)
{
  ?R_LGV_Init@@YAXXZ();
}

/*
==============
RB_LGV_DrawProbes
==============
*/
void RB_LGV_DrawProbes(GfxCmdBufContext *context, const GfxViewInfo *viewInfo)
{
  GfxCmdBufSourceState *source; 
  GfxCmdBufState *state; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  const char *v31; 
  GfxCmdBufContext result[2]; 
  __m256i v39; 
  char v40; 
  const char *v43; 
  R_RT_Group v44; 

  _RSI = viewInfo;
  _R14 = context;
  if ( rg.useLightGridVolumes && (r_lgvDrawProbes->current.integer || r_lgvDebugEnt->current.integer != -1 || r_lgvDebugSmodelId->current.integer) && RB_GpuLightGrid_DataAvailable(viewInfo) )
  {
    source = _R14->source;
    state = _R14->state;
    __asm { vmovaps [rsp+298h+var_38], xmm6 }
    R_InitCmdBufSourceState(source, &_RSI->input);
    if ( (*((_BYTE *)&source->input + 7920) & 1) != 0 )
    {
      R_LockIfGfxImmediateContext(state->device);
      R_InitCmdBufState(state);
    }
    else
    {
      R_LockGfxImmediateContext();
      _RAX = RB_GetBackendCmdBufContext(result);
      __asm
      {
        vmovups xmm0, xmmword ptr [rax]
        vpextrq rdx, xmm0, 1; in
      }
      if ( state != _RDX )
        GfxCmdBufState::Copy(state, _RDX);
    }
    memset_0(state->perPrimConstantState, 255, sizeof(state->perPrimConstantState));
    memset_0(state->perObjectConstantState, 255, sizeof(state->perObjectConstantState));
    memset_0(state->stableConstantState, 255, sizeof(state->stableConstantState));
    state->data = source->input.data;
    R_BeginViewInternal(source, &_RSI->sceneDef, (const GfxViewParms *)_RSI, &_RSI->viewParmsSet.frames[1].viewParms);
    R_SetViewportStruct(source, &_RSI->sceneViewport);
    __asm
    {
      vmovups ymm0, ymmword ptr [rsi+30C0h]
      vmovups ymmword ptr [rsp+298h+result.source], ymm0
    }
    height = R_RT_Handle::GetSurface((R_RT_Handle *)result)->m_image.m_base.height;
    Surface = R_RT_Handle::GetSurface((R_RT_Handle *)result);
    R_SetRenderTargetSize(source, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FOR_VIEW);
    __asm
    {
      vmovups ymm0, ymmword ptr [rsi+31A0h]
      vmovups ymm1, ymmword ptr [rsi+30C0h]
      vmovups xmm6, xmmword ptr [r14]
      vmovd   eax, xmm0
      vmovups [rsp+298h+var_228], ymm0
      vmovups ymmword ptr [rsp+298h+result.source], ymm0
      vmovups [rsp+298h+var_248], ymm1
      vmovups [rsp+298h+var_208], ymm1
    }
    if ( (_WORD)_EAX )
    {
      R_RT_Handle::GetSurface((R_RT_Handle *)result);
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+298h+result.source]
        vmovups [rsp+298h+var_228], ymm0
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
      vmovups ymm0, [rsp+298h+var_248]
      vmovd   eax, xmm0
    }
    v40 = 1;
    __asm { vmovups ymmword ptr [rsp+298h+result.source], ymm0 }
    if ( (_WORD)_EAX )
    {
      R_RT_Handle::GetSurface((R_RT_Handle *)result);
    }
    else
    {
      if ( v39.m256i_i32[2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", result[0].source, result[0].state, result[1].source, result[1].state) )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 442, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
        __debugbreak();
    }
    __asm
    {
      vmovups ymm0, [rsp+298h+var_248]
      vmovups [rsp+298h+var_1E0], ymm0
      vmovups ymm0, [rsp+298h+var_228]
      vmovups [rsp+298h+var_160], ymm0
    }
    _RCX = &v44;
    _RAX = &v40;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rcx], ymm0
      vmovups ymm0, ymmword ptr [rax+20h]
      vmovups ymmword ptr [rcx+20h], ymm0
      vmovups ymm0, ymmword ptr [rax+40h]
      vmovups ymmword ptr [rcx+40h], ymm0
      vmovups ymm0, ymmword ptr [rax+60h]
      vmovups ymmword ptr [rcx+60h], ymm0
      vmovups ymm0, ymmword ptr [rax+80h]
      vmovups ymmword ptr [rcx+80h], ymm0
      vmovups ymm0, ymmword ptr [rax+0A0h]
    }
    v31 = v43;
    __asm { vmovups ymmword ptr [rcx+0A0h], ymm0 }
    v44.m_vrsRt.m_tracking.m_location = v31;
    __asm { vmovdqa xmmword ptr [rsp+298h+result.source], xmm6 }
    R_SetRenderTargetsInternal(result, &v44, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(2419)");
    __asm { vmovups xmmword ptr [rsp+298h+result.source], xmm6 }
    R_LGV_DrawProbes(result, _RSI);
    R_ResetRenderTargets(state);
    __asm { vmovaps xmm6, [rsp+298h+var_38] }
    if ( (*((_BYTE *)&source->input + 7920) & 1) != 0 )
    {
      R_ShutdownCmdBufState(state);
      R_UnlockIfGfxImmediateContext(state->device);
    }
    else
    {
      _RAX = RB_GetBackendCmdBufContext(result);
      __asm
      {
        vmovups xmm0, xmmword ptr [rax]
        vpextrq rcx, xmm0, 1; out
      }
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
RB_LGV_PrepareInitialResourceStates
==============
*/
void RB_LGV_PrepareInitialResourceStates(ComputeCmdBufState *state, const GfxBackEndData *data, const GfxViewInfo *viewInfo)
{
  const GfxWrappedRWBuffer *WrappedBuffer; 
  R_RT_Handle v26; 

  WrappedBuffer = R_RT_Handle::GetWrappedBuffer(&lgvGlob.samplingBuffers[(unsigned __int64)data->shLightingIndex].lightGridVolumeActiveLightGrids);
  R_HW_AddResourceTransition(state, WrappedBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.samplingBufferOffsets1.baseclass_0.m_surfaceID; LightGridVolumeGlob lgvGlob
    vmovups [rbp+var_20], ymm0
  }
  R_HW_AddResourceTransition(state, &v26, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.globalProbeOffsets1.baseclass_0.m_surfaceID; LightGridVolumeGlob lgvGlob
    vmovups [rbp+var_20], ymm0
  }
  R_HW_AddResourceTransition(state, &v26, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.lightgridProbeCounts1.baseclass_0.m_surfaceID; LightGridVolumeGlob lgvGlob
    vmovups [rbp+var_20], ymm0
  }
  R_HW_AddResourceTransition(state, &v26, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.lightgridVolumeCounts1.baseclass_0.m_surfaceID; LightGridVolumeGlob lgvGlob
    vmovups [rbp+var_20], ymm0
  }
  R_HW_AddResourceTransition(state, &v26, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.samplingBufferOffsets2.baseclass_0.m_surfaceID; LightGridVolumeGlob lgvGlob
    vmovups [rbp+var_20], ymm0
  }
  R_HW_AddResourceTransition(state, &v26, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.globalProbeOffsets2.baseclass_0.m_surfaceID; LightGridVolumeGlob lgvGlob
    vmovups [rbp+var_20], ymm0
  }
  R_HW_AddResourceTransition(state, &v26, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.lightgridProbeCounts2.baseclass_0.m_surfaceID; LightGridVolumeGlob lgvGlob
    vmovups [rbp+var_20], ymm0
  }
  R_HW_AddResourceTransition(state, &v26, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.lightgridVolumeCounts2.baseclass_0.m_surfaceID; LightGridVolumeGlob lgvGlob
    vmovups [rbp+var_20], ymm0
  }
  R_HW_AddResourceTransition(state, &v26, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.lightGridVolumeCount.baseclass_0.m_surfaceID; LightGridVolumeGlob lgvGlob
    vmovups [rbp+var_20], ymm0
  }
  R_HW_AddResourceTransition(state, &v26, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.indirectDispatchParams.baseclass_0.m_surfaceID; LightGridVolumeGlob lgvGlob
    vmovups [rbp+var_20], ymm0
  }
  R_HW_AddResourceTransition(state, &v26, 0xFFFFFFFF, D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  _RSI = &lgvGlob;
  _RAX = (unsigned __int64)data->shLightingIndex << 7;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax+rsi+10670h]
    vmovups [rbp+var_20], ymm0
  }
  R_HW_AddResourceTransition(state, &v26, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.globalProbeOffset.baseclass_0.m_surfaceID; LightGridVolumeGlob lgvGlob
    vmovups [rbp+var_20], ymm0
  }
  R_HW_AddResourceTransition(state, &v26, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.lightGridVolumesList.baseclass_0.m_surfaceID; LightGridVolumeGlob lgvGlob
    vmovups [rbp+var_20], ymm0
  }
  R_HW_AddResourceTransition(state, &v26, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.lightGridProbeOffset.baseclass_0.m_surfaceID; LightGridVolumeGlob lgvGlob
    vmovups [rbp+var_20], ymm0
  }
  R_HW_AddResourceTransition(state, &v26, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.globalVolumeIndexingBuffer.baseclass_0.m_surfaceID; LightGridVolumeGlob lgvGlob
    vmovups [rbp+var_20], ymm0
  }
  R_HW_AddResourceTransition(state, &v26, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.lightGridVolumeIndexingBuffer.baseclass_0.m_surfaceID; LightGridVolumeGlob lgvGlob
    vmovups [rbp+var_20], ymm0
  }
  R_HW_AddResourceTransition(state, &v26, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  _RAX = (unsigned __int64)data->shLightingIndex << 7;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax+rsi+10610h]
    vmovups [rbp+var_20], ymm0
  }
  R_HW_AddResourceTransition(state, &v26, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
}

/*
==============
RB_LGV_SampleLighting
==============
*/
void RB_LGV_SampleLighting(ComputeCmdBufState *state, const GfxBackEndData *data, const GfxViewInfo *viewInfo)
{
  bool v6; 
  const GfxGpuLightGrid *v9; 
  const GfxWrappedRWBuffer *WrappedBuffer; 
  const GfxWrappedRWBuffer *v11; 
  const GfxWrappedRWBuffer *v12; 
  const GfxWrappedRWBuffer *v13; 
  R_RT_ColorHandle v16; 
  R_RT_ColorHandle v17; 
  R_RT_ColorHandle v18; 
  R_RT_ColorHandle v19; 

  _R15 = viewInfo;
  if ( s_world.draw.lightGridType == GFX_LIGHTGRID_TYPE_MULTI )
    v6 = R_GetNumActiveLightGrids(data) == 0;
  else
    v6 = !RB_GpuLightGrid_DataAvailable(viewInfo);
  if ( !v6 )
  {
    RB_LGV_SampleLightingSetup(state, data);
    if ( lgvGlob.frameData[data->smpFrame].numLightGridVolumeProbesUsed )
    {
      if ( RB_GpuLightGrid_DataAvailable(_R15) )
      {
        R_LockIfGfxImmediateContext(state->device);
        R_GPU_BeginTimer(GPU_TIMER_SAMPLE_LIGHT_GRID);
        Sys_ProfBeginNamedEvent(0xFFFF7F50, "Sample light grid volumes");
        R_ProfBeginNamedEvent(state, "Sample light grid volumes");
        if ( s_world.draw.lightGridType == GFX_LIGHTGRID_TYPE_MULTI )
        {
          __asm
          {
            vmovups ymm0, ymmword ptr [r15+34C8h]
            vmovups ymm1, ymmword ptr [r15+34A8h]
            vmovups [rsp+108h+var_A8], ymm0
            vmovups [rsp+108h+var_88], ymm1
          }
          RB_LGV_SampleLightingMultiLightGrid(state, data, _R15, 1, &v17, &v16);
        }
        else
        {
          if ( R_GetNumActiveLightGrids(data) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp", 3066, ASSERT_TYPE_ASSERT, "(R_GetNumActiveLightGrids( data ) == 1)", (const char *)&queryFormat, "R_GetNumActiveLightGrids( data ) == 1") )
            __debugbreak();
          v9 = *R_GetActiveLightGridsList(data);
          if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp", 3068, ASSERT_TYPE_ASSERT, "(gpuLightGrid)", (const char *)&queryFormat, "gpuLightGrid") )
            __debugbreak();
          WrappedBuffer = R_RT_Handle::GetWrappedBuffer(&lgvGlob.samplingBuffers[(unsigned __int64)(1 - data->shLightingIndex)].lightGridVolumeSampledPrimaryVisTets);
          v11 = R_RT_Handle::GetWrappedBuffer(&lgvGlob.samplingBuffers[(unsigned __int64)(1 - data->shLightingIndex)].lightGridVolumeSampledLightingData);
          v12 = R_RT_Handle::GetWrappedBuffer(&lgvGlob.samplingBuffers[(unsigned __int64)data->shLightingIndex].lightGridVolumeSampledPrimaryVisTets);
          v13 = R_RT_Handle::GetWrappedBuffer(&lgvGlob.samplingBuffers[(unsigned __int64)data->shLightingIndex].lightGridVolumeSampledLightingData);
          __asm
          {
            vmovups ymm0, ymmword ptr [r15+34C8h]
            vmovups ymm1, ymmword ptr [r15+34A8h]
            vmovups [rsp+108h+var_68], ymm0
            vmovups [rsp+108h+var_48], ymm1
          }
          RB_LGV_SampleLightingVolumes(state, data, _R15, 1, v9, &v19, &v18, v13, v12, v11, WrappedBuffer);
        }
        R_ProfEndNamedEvent(state);
        Sys_ProfEndNamedEvent();
        R_GPU_EndTimer();
        R_UnlockIfGfxImmediateContext(state->device);
      }
    }
  }
}

/*
==============
RB_LGV_SampleLightingMultiLightGrid
==============
*/
void RB_LGV_SampleLightingMultiLightGrid(ComputeCmdBufState *state, const GfxBackEndData *data, const GfxViewInfo *viewInfo, bool prevFrameValid, R_RT_ColorHandle *lightGridVolumeData3D, R_RT_ColorHandle *lightGridVolumeHighBandData3D)
{
  const GfxWrappedRWBuffer *WrappedBuffer; 
  __int64 smpFrame; 
  const GfxWrappedRWBuffer *v11; 
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v16; 
  const R_RT_Surface *v17; 
  const R_RT_Surface *v18; 
  __int64 v19; 
  const R_RT_Surface *v20; 
  const GfxWrappedBuffer *prevFrameLightGridVolumeSampledLightingData; 
  const R_RT_Surface *v22; 
  const GfxWrappedBuffer *prevFrameLightGridVolumeSamplingSlot; 
  const R_RT_Surface *v24; 
  const GfxWrappedBuffer *prevFrameLightGridVolumeActiveLightGrids; 
  const R_RT_Surface *v26; 
  const GfxWrappedRWBuffer *lightGridVolumeSampledLightingData; 
  const R_RT_Surface *v28; 
  const GfxWrappedBuffer *v29; 
  const R_RT_Surface *v30; 
  const R_RT_Surface *v35; 
  const GfxTexture *Resident; 
  const R_RT_Surface *v38; 
  const GfxWrappedRWBuffer *v39; 
  const R_RT_Surface *v40; 
  const GfxWrappedRWBuffer *v41; 
  const R_RT_Surface *v42; 
  const GfxWrappedRWBuffer *v43; 
  const R_RT_Surface *v44; 
  const R_RT_Surface *v47; 
  const GfxTexture *v48; 
  GfxShaderBufferView *views; 
  GfxShaderBufferView *lightGridVolumeIndexingBuffer; 
  GfxShaderBufferView *lightGridVolumesList; 
  GfxShaderBufferRWView *indirectDispatchParams; 
  ID3D12Resource *buffers; 
  R_RT_Handle v54; 
  R_RT_Handle v55; 
  R_RT_ColorHandle v56; 
  R_RT_ColorHandle v57; 
  bool v58; 

  RB_LGV_UpdateSampleLightingConstantBuffer(state, data, viewInfo, prevFrameValid, &lgvGlob.frameData[data->smpFrame]);
  v58 = R_ReflectionProbe_UseLightgridOverride(data->reflectionProbeFrameIndex);
  RB_LGV_PrepareInitialResourceStates(state, data, viewInfo);
  R_FlushResourceTransitions(state);
  WrappedBuffer = R_RT_Handle::GetWrappedBuffer(&lgvGlob.samplingBuffers[(unsigned __int64)data->shLightingIndex].lightGridVolumeActiveLightGrids);
  smpFrame = data->smpFrame;
  v11 = WrappedBuffer;
  R_SetComputeShader(state, rgp.findLightGridsToSample);
  _R12 = &lgvGlob;
  buffers = lgvGlob.gfxBuffers[data->shLightingIndex].sampleLightGridVolumeLightingConsts.buffer;
  R_SetComputeConstantBuffers(state, 0, 1, &buffers);
  views = &R_GetActiveLightGrids(data)->view;
  R_SetComputeViews(state, 0, 1, (const GfxShaderBufferView *const *)&views);
  lightGridVolumeIndexingBuffer = &lgvGlob.gfxBuffers[0].lightGridVolumeTransformParams.view + 12 * data->shLightingIndex;
  R_SetComputeViews(state, 1, 1, (const GfxShaderBufferView *const *)&lightGridVolumeIndexingBuffer);
  lightGridVolumesList = &lgvGlob.gfxBuffers[0].lightGridVolumePackingParams.view + 12 * data->shLightingIndex;
  R_SetComputeViews(state, 2, 1, (const GfxShaderBufferView *const *)&lightGridVolumesList);
  indirectDispatchParams = &v11->rwView;
  R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&indirectDispatchParams, NULL);
  R_Dispatch(state, (lgvGlob.frameData[smpFrame].numLightGridVolumesUsed + 63) / 64, 1u, 1u);
  _RAX = (unsigned __int64)data->shLightingIndex << 7;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax+r12+10650h]
    vmovups [rsp+158h+var_B8], ymm0
  }
  R_HW_AddResourceTransition(state, &v54, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_ComputeWaitForCompute(state, PIPE_FLUSH_PARTIAL);
  R_LGV_GenerateLightGridSamplingLists(state, data, viewInfo);
  R_FlushResourceTransitions(state);
  Surface = R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.indirectDispatchParams);
  if ( (Surface->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  indirectDispatchParams = (GfxShaderBufferRWView *)&Surface->1080;
  v16 = R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.lightGridVolumesList);
  if ( (v16->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  lightGridVolumesList = (GfxShaderBufferView *)&v16->1080;
  v17 = R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.lightGridVolumeIndexingBuffer);
  if ( (v17->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  lightGridVolumeIndexingBuffer = (GfxShaderBufferView *)&v17->1080;
  v18 = R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.lightGridVolumeCount);
  if ( (v18->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v19 = 1 - data->shLightingIndex;
  views = (GfxShaderBufferView *)&v18->1080;
  v20 = R_RT_Handle::GetSurface(&lgvGlob.samplingBuffers[v19].lightGridVolumeSampledLightingData);
  if ( (v20->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  prevFrameLightGridVolumeSampledLightingData = (const GfxWrappedBuffer *)&v20->1080;
  v22 = R_RT_Handle::GetSurface(&lgvGlob.samplingBuffers[(unsigned __int64)(1 - data->shLightingIndex)].lightGridVolumeSamplingSlot);
  if ( (v22->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  prevFrameLightGridVolumeSamplingSlot = (const GfxWrappedBuffer *)&v22->1080;
  v24 = R_RT_Handle::GetSurface(&lgvGlob.samplingBuffers[(unsigned __int64)(1 - data->shLightingIndex)].lightGridVolumeActiveLightGrids);
  if ( (v24->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  prevFrameLightGridVolumeActiveLightGrids = (const GfxWrappedBuffer *)&v24->1080;
  v26 = R_RT_Handle::GetSurface(&lgvGlob.samplingBuffers[(unsigned __int64)data->shLightingIndex].lightGridVolumeSampledLightingData);
  if ( (v26->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  lightGridVolumeSampledLightingData = (const GfxWrappedRWBuffer *)&v26->1080;
  v28 = R_RT_Handle::GetSurface(&lgvGlob.samplingBuffers[(unsigned __int64)data->shLightingIndex].lightGridVolumeSamplingSlot);
  if ( (v28->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v29 = (const GfxWrappedBuffer *)&v28->1080;
  v30 = R_RT_Handle::GetSurface(&lgvGlob.samplingBuffers[(unsigned __int64)data->shLightingIndex].lightGridVolumeActiveLightGrids);
  if ( (v30->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  R_LGV_SampleLightingPerLightGrid(state, data, viewInfo, (const GfxWrappedBuffer *)&v30->1080, v29, lightGridVolumeSampledLightingData, prevFrameLightGridVolumeActiveLightGrids, prevFrameLightGridVolumeSamplingSlot, prevFrameLightGridVolumeSampledLightingData, (const GfxWrappedBuffer *)views, (const GfxWrappedBuffer *)lightGridVolumeIndexingBuffer, (const GfxWrappedBuffer *)lightGridVolumesList, (const GfxWrappedBuffer *)indirectDispatchParams);
  _RCX = &lgvGlob;
  _RAX = (unsigned __int64)data->shLightingIndex << 7;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax+rcx+10610h]
    vmovups [rsp+158h+var_98], ymm0
  }
  R_HW_AddResourceTransition(state, &v55, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_ComputeWaitForCompute(state, PIPE_FLUSH_PARTIAL);
  _R14 = lightGridVolumeData3D;
  v35 = R_RT_Handle::GetSurface(lightGridVolumeData3D);
  Resident = R_Texture_GetResident(v35->m_image.m_base.textureId);
  R_HW_AddResourceTransition(state, Resident, 0xFFFFFFFF, D3D12_RESOURCE_STATE_COMMON, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  _RBX = lightGridVolumeHighBandData3D;
  v38 = R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.globalVolumeIndexingBuffer);
  if ( (v38->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v39 = (const GfxWrappedRWBuffer *)&v38->1080;
  v40 = R_RT_Handle::GetSurface(&lgvGlob.samplingBuffers[(unsigned __int64)data->shLightingIndex].lightGridVolumeSampledLightingData);
  if ( (v40->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v41 = (const GfxWrappedRWBuffer *)&v40->1080;
  v42 = R_RT_Handle::GetSurface(&lgvGlob.samplingBuffers[(unsigned __int64)data->shLightingIndex].lightGridVolumeSamplingSlot);
  if ( (v42->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v43 = (const GfxWrappedRWBuffer *)&v42->1080;
  v44 = R_RT_Handle::GetSurface(&lgvGlob.samplingBuffers[(unsigned __int64)data->shLightingIndex].lightGridVolumeActiveLightGrids);
  if ( (v44->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx]
    vmovups ymm1, ymmword ptr [r14]
    vmovups [rsp+158h+var_78], ymm0
    vmovups [rsp+158h+var_58], ymm1
  }
  R_LGV_CombineSampledLighting(state, data, viewInfo, (const GfxWrappedRWBuffer *)&v44->1080, v43, v41, v39, &v57, &v56, v58);
  v47 = R_RT_Handle::GetSurface(lightGridVolumeData3D);
  v48 = R_Texture_GetResident(v47->m_image.m_base.textureId);
  R_HW_AddResourceTransition(state, v48, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  R_ComputeWaitForCompute(state, PIPE_FLUSH_PARTIAL);
}

/*
==============
RB_LGV_SampleLightingSetup
==============
*/
void RB_LGV_SampleLightingSetup(ComputeCmdBufState *state, const GfxBackEndData *data)
{
  __int64 shLightingIndex; 
  LightGridVolumeFrameData *v5; 
  int v6; 
  LightGridVolumeFrameData *v7; 
  int v8; 
  int numLightGridVolumesUsed; 
  _DWORD *v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  unsigned __int8 *v14; 
  __int64 v15; 
  int v16; 
  int v17; 
  __int64 dataa[2]; 
  int v19; 
  int v20; 
  int v21; 

  if ( state->computeContextType == COMPUTE_CONTEXT_TYPE_GFX )
    R_UnlockGfxImmediateContext();
  if ( R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 23, ASSERT_TYPE_ASSERT, "(!R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "!R_IsLockedGfxImmediateContext()") )
    __debugbreak();
  if ( R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 23, ASSERT_TYPE_ASSERT, "(!R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "!R_IsLockedGfxImmediateContext()") )
    __debugbreak();
  shLightingIndex = data->shLightingIndex;
  v5 = &lgvGlob.frameData[data->smpFrame];
  v19 = 64;
  dataa[0] = (__int64)v5;
  v20 = 64;
  v21 = 16;
  dataa[1] = (__int64)&lgvGlob.gfxBuffers[shLightingIndex];
  R_LGV_Pack3dCmd(dataa);
  if ( R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 23, ASSERT_TYPE_ASSERT, "(!R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "!R_IsLockedGfxImmediateContext()") )
    __debugbreak();
  if ( state->computeContextType == COMPUTE_CONTEXT_TYPE_GFX )
    R_LockGfxImmediateContext();
  v6 = 0;
  v7 = &lgvGlob.frameData[data->smpFrame];
  v8 = 63;
  numLightGridVolumesUsed = 0x4000;
  v10 = lgvGlob.gfxBuffers[data->shLightingIndex].lightGridVolumesIndexingBuffer.data;
  if ( v7->numLightGridVolumesUsed < 0x4000 )
    numLightGridVolumesUsed = v7->numLightGridVolumesUsed;
  v11 = numLightGridVolumesUsed;
  if ( numLightGridVolumesUsed > 0 )
  {
    v12 = 0i64;
    v13 = 0i64;
    v14 = &v7->lightGridVolumeSrcParams->m_volumeSize[1];
    do
    {
      if ( v12 >= 0x4000 )
        break;
      LODWORD(v15) = 0;
      v16 = *v14 * v14[1] * *(v14 - 1);
      if ( v16 + v8 >= 64 )
      {
        while ( 1 )
        {
          v17 = 64 - v8;
          v15 = (unsigned int)(64 - v8 + v15);
          if ( v12 >= 0x4000 )
            break;
          v7 = (LightGridVolumeFrameData *)((v6 << 12) | ((_WORD)v15 - 1) & 0xFFFu);
          v8 = 0;
          v10[v12] = (_DWORD)v7;
          v16 -= v17;
          ++v12;
          if ( v16 < 64 )
            goto LABEL_24;
        }
        R_WarnOncePerFrame(R_WARN_TOO_MANY_LIGHTGRID_VOLUME_INDEXING_ENTRIES, v7, v15);
      }
LABEL_24:
      v8 += v16;
      ++v6;
      ++v13;
      v14 += 84;
    }
    while ( v13 < v11 );
  }
}

/*
==============
RB_LGV_SampleLightingVolumes
==============
*/
void RB_LGV_SampleLightingVolumes(ComputeCmdBufState *state, const GfxBackEndData *data, const GfxViewInfo *viewInfo, bool prevFrameValid, const GfxGpuLightGrid *gpuLightGrid, R_RT_ColorHandle *lightGridVolumeData3D, R_RT_ColorHandle *lightGridVolumeHighBandData3D, const GfxWrappedRWBuffer *sampledLightingData, const GfxWrappedRWBuffer *sampledPrimaryVisTets, const GfxWrappedBuffer *prevFrameSampledLightingData, const GfxWrappedBuffer *prevFrameSampledPrimaryVisTets)
{
  __int64 shLightingIndex; 
  LightGridVolumeFrameData *frameData; 
  bool v17; 
  ComputeShader *sampleLightGridVolumesLighting; 
  bool v19; 
  const GfxWrappedBuffer *FallbackProbe; 
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v22; 
  const GfxWrappedBuffer *v23; 
  GfxShaderBufferView *p_view; 
  GfxShaderBufferView *v25; 
  GfxShaderBufferView *v26; 
  GfxShaderBufferView *v27; 
  GfxShaderBufferView *v28; 
  GfxShaderBufferView *v29; 
  GfxShaderBufferView *v30; 
  GfxTexture *textures; 
  GfxTexture *Resident; 
  GfxShaderBufferRWView *p_rwView; 
  GfxShaderBufferRWView *v34; 
  GfxShaderBufferView *v35; 
  GfxShaderBufferView *v36; 
  unsigned int zoneIndex; 
  GfxShaderBufferView *views; 

  shLightingIndex = data->shLightingIndex;
  frameData = &lgvGlob.frameData[data->smpFrame];
  zoneIndex = viewInfo->input.voxelTreeZoneIndex;
  if ( frameData->numLightGridVolumeProbesUsed )
  {
    v17 = R_ReflectionProbe_UseLightgridOverride(data->reflectionProbeFrameIndex);
    sampleLightGridVolumesLighting = rgp.sampleLightGridVolumesLighting;
    v19 = v17;
    if ( v17 )
      sampleLightGridVolumesLighting = rgp.sampleLightGridReflectionVolumesLighting;
    R_SetComputeShader(state, sampleLightGridVolumesLighting);
    RB_LGV_UpdateSampleLightingConstantBuffer(state, data, viewInfo, prevFrameValid, frameData);
    RB_LGV_UpdateAndSetSampleLightingVoxelTreeConstantBuffer(state, data, viewInfo, gpuLightGrid, zoneIndex);
    RB_GpuLightGrid_SetResouces(state, &viewInfo->input, gpuLightGrid);
    views = &lgvGlob.gfxBuffers[shLightingIndex].lightGridVolumesIndexingBuffer.view;
    R_SetComputeViews(state, 13, 1, (const GfxShaderBufferView *const *)&views);
    p_view = &lgvGlob.gfxBuffers[shLightingIndex].lightGridVolumeTransformParams.view;
    R_SetComputeViews(state, 14, 1, (const GfxShaderBufferView *const *)&p_view);
    v25 = &lgvGlob.gfxBuffers[shLightingIndex].lightGridVolumePackingParams.view;
    R_SetComputeViews(state, 15, 1, (const GfxShaderBufferView *const *)&v25);
    FallbackProbe = R_GetFallbackProbe();
    R_HW_AddResourceTransition(state, FallbackProbe, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(state);
    v26 = &R_GetFallbackProbe()->view;
    R_SetComputeViews(state, 17, 1, (const GfxShaderBufferView *const *)&v26);
    if ( v19 )
    {
      v27 = &R_ReflectionProbe_GetInstanceBuffer(data->reflectionProbeFrameIndex)->view;
      R_SetComputeViews(state, 10, 1, (const GfxShaderBufferView *const *)&v27);
      v28 = &R_ReflectionProbe_GetObbBuffer(data->reflectionProbeFrameIndex)->view;
      R_SetComputeViews(state, 11, 1, (const GfxShaderBufferView *const *)&v28);
      v29 = &R_ReflectionProbe_GetLightgridOverrideBuffer(data->reflectionProbeFrameIndex)->view;
      R_SetComputeViews(state, 12, 1, (const GfxShaderBufferView *const *)&v29);
      v30 = &R_ReflectionProbe_GetSHBuffer()->view;
      R_SetComputeViews(state, 20, 1, (const GfxShaderBufferView *const *)&v30);
    }
    Surface = R_RT_Handle::GetSurface(lightGridVolumeData3D);
    textures = (GfxTexture *)R_Texture_GetResident(Surface->m_image.m_base.textureId);
    R_SetComputeRWTextures(state, 0, 1, (const GfxTexture *const *)&textures);
    v22 = R_RT_Handle::GetSurface(lightGridVolumeHighBandData3D);
    Resident = (GfxTexture *)R_Texture_GetResident(v22->m_image.m_base.textureId);
    R_SetComputeRWTextures(state, 1, 1, (const GfxTexture *const *)&Resident);
    p_rwView = &sampledLightingData->rwView;
    R_SetComputeRWViewsWithCounters(state, 2, 1, (const GfxShaderBufferRWView *const *)&p_rwView, NULL);
    v34 = &sampledPrimaryVisTets->rwView;
    R_SetComputeRWViewsWithCounters(state, 3, 1, (const GfxShaderBufferRWView *const *)&v34, NULL);
    v35 = &prevFrameSampledLightingData->view;
    R_SetComputeViews(state, 18, 1, (const GfxShaderBufferView *const *)&v35);
    v36 = &prevFrameSampledPrimaryVisTets->view;
    R_SetComputeViews(state, 19, 1, (const GfxShaderBufferView *const *)&v36);
    R_Dispatch(state, (frameData->numLightGridVolumeProbesUsed + 63) / 64, 1u, 1u);
    v23 = R_GetFallbackProbe();
    R_HW_AddResourceTransition(state, v23, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(state);
  }
}

/*
==============
RB_LGV_UpdateAndSetSampleLightingVoxelTreeConstantBuffer
==============
*/
void RB_LGV_UpdateAndSetSampleLightingVoxelTreeConstantBuffer(ComputeCmdBufState *state, const GfxBackEndData *data, const GfxViewInfo *viewInfo, const GfxGpuLightGrid *gpuLightGrid, unsigned int zoneIndex)
{
  GfxGpuLightGridZone *zones; 
  __int64 v6; 
  unsigned int dataa; 
  __int64 v8; 

  if ( zoneIndex >= gpuLightGrid->zoneCount )
  {
    zones = NULL;
  }
  else
  {
    zones = gpuLightGrid->zones;
    if ( zones )
    {
      v6 = zoneIndex;
      dataa = zones[zoneIndex].firstTetrahedron;
      goto LABEL_6;
    }
  }
  dataa = 0;
  v6 = zoneIndex;
LABEL_6:
  if ( zones )
    v8 = *(_QWORD *)&zones[v6].firstVoxelTetrahedronIndex;
  else
    v8 = 0i64;
  R_UploadAndSetComputeConstants(state, 1, &dataa, 0x10u, NULL);
}

/*
==============
RB_LGV_UpdateSampleLightingConstantBuffer
==============
*/
void RB_LGV_UpdateSampleLightingConstantBuffer(ComputeCmdBufState *state, const GfxBackEndData *data, const GfxViewInfo *viewInfo, bool prevFrameValid, const LightGridVolumeFrameData *frameData)
{
  const LightGridVolumeFrameData *v6; 
  volatile int numLightGridVolumesUsed; 
  __int64 shLightingIndex; 
  int v12; 

  v6 = frameData;
  _RDI = viewInfo;
  numLightGridVolumesUsed = 0x4000;
  shLightingIndex = (int)data->shLightingIndex;
  if ( frameData->numLightGridVolumesUsed < 0x4000 )
    numLightGridVolumesUsed = frameData->numLightGridVolumesUsed;
  _RBX = lgvGlob.gfxBuffers[shLightingIndex].sampleLightGridVolumeLightingConsts.data;
  *_RBX = numLightGridVolumesUsed;
  v12 = (numLightGridVolumesUsed + 63) / 64;
  _RBX[4] = v12;
  _RBX[5] = (v12 + 63) / 64;
  _RBX[6] = prevFrameValid;
  if ( prevFrameValid )
    __asm { vmovss  xmm0, dword ptr [rdi+3874h] }
  else
    __asm { vxorps  xmm0, xmm0, xmm0 }
  __asm { vmovss  dword ptr [rbx+0Ch], xmm0 }
  _RBX[2] = LODWORD(v6->lgvSamplingSafeZone);
  _RBX[1] = R_GetNumActiveLightGrids(data);
  __asm
  {
    vmovsd  xmm0, qword ptr [rdi+100h]
    vmovsd  qword ptr [rbx+20h], xmm0
  }
  _RBX[10] = LODWORD(_RDI->viewParmsSet.frames[0].viewParms.camera.origin.v[2]);
  frameData = (const LightGridVolumeFrameData *)lgvGlob.gfxBuffers[shLightingIndex].sampleLightGridVolumeLightingConsts.buffer;
  R_SetComputeConstantBuffers(state, 0, 1, (ID3D12Resource *const *const)&frameData);
}

/*
==============
RB_LGV_WaitForPacking
==============
*/
void RB_LGV_WaitForPacking(const GfxBackEndData *data)
{
  __int64 smpFrame; 
  __int64 shLightingIndex; 
  __int64 dataa[2]; 
  int v5; 
  int v6; 
  int v7; 

  if ( R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 23, ASSERT_TYPE_ASSERT, "(!R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "!R_IsLockedGfxImmediateContext()") )
    __debugbreak();
  if ( R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 23, ASSERT_TYPE_ASSERT, "(!R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "!R_IsLockedGfxImmediateContext()") )
    __debugbreak();
  smpFrame = data->smpFrame;
  v5 = 64;
  v6 = 64;
  shLightingIndex = data->shLightingIndex;
  dataa[0] = (__int64)&lgvGlob.frameData[smpFrame];
  v7 = 16;
  dataa[1] = (__int64)&lgvGlob.gfxBuffers[shLightingIndex];
  R_LGV_Pack3dCmd(dataa);
  if ( R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 23, ASSERT_TYPE_ASSERT, "(!R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "!R_IsLockedGfxImmediateContext()") )
    __debugbreak();
}

/*
==============
R_LGV_AddProbes
==============
*/
void R_LGV_AddProbes(int count, unsigned int smpFrame)
{
  volatile int *p_numLightGridVolumeProbesUsed; 

  p_numLightGridVolumeProbesUsed = &lgvGlob.frameData[smpFrame].numLightGridVolumeProbesUsed;
  if ( ((unsigned __int8)p_numLightGridVolumeProbesUsed & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &lgvGlob.frameData[smpFrame].numLightGridVolumeProbesUsed) )
    __debugbreak();
  _InterlockedExchangeAdd(p_numLightGridVolumeProbesUsed, count);
}

/*
==============
R_LGV_AddToEntityDebugVolume
==============
*/
void R_LGV_AddToEntityDebugVolume(int entNum, const LightGridVolumeSrcParams *params)
{
  int integer; 
  LightGridVolumeFrameData *v3; 

  integer = r_lgvDebugEnt->current.integer;
  if ( integer >= 0 && integer == entNum )
  {
    v3 = &lgvGlob.frameData[lgvGlob.smpFrame];
    v3->entityDebugVolumeIndices[v3->entityDebugVolumeIndexCount++] = params - v3->lightGridVolumeSrcParams;
  }
}

/*
==============
R_LGV_AllocateHistoryEntries
==============
*/
__int64 R_LGV_AllocateHistoryEntries(int numEntries)
{
  volatile int *p_numLightGridVolumeHistoryEntriesUsed; 
  unsigned __int32 v3; 

  p_numLightGridVolumeHistoryEntriesUsed = &lgvGlob.frameData[lgvGlob.smpFrame].numLightGridVolumeHistoryEntriesUsed;
  if ( ((unsigned __int8)p_numLightGridVolumeHistoryEntriesUsed & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &lgvGlob.frameData[lgvGlob.smpFrame].numLightGridVolumeHistoryEntriesUsed) )
    __debugbreak();
  v3 = _InterlockedExchangeAdd(p_numLightGridVolumeHistoryEntriesUsed, numEntries);
  if ( v3 < 0xC000 )
    return v3;
  R_WarnOncePerFrame(R_WARN_TOO_MANY_PROBES_HISTORY_ENTRIES_ALLOCATED);
  return 0xFFFFi64;
}

/*
==============
R_LGV_AllocateVolumeInfo_Dynamic
==============
*/
LightGridVolumeSrcParams *R_LGV_AllocateVolumeInfo_Dynamic(int *allocatedVolumeInfoSlot)
{
  __int64 smpFrame; 
  volatile int *p_numLightGridVolumesUsed; 
  LightGridVolumeFrameData *v4; 
  unsigned int v5; 
  LightGridVolumeSrcParams *result; 

  smpFrame = lgvGlob.smpFrame;
  p_numLightGridVolumesUsed = &lgvGlob.frameData[smpFrame].numLightGridVolumesUsed;
  v4 = &lgvGlob.frameData[smpFrame];
  if ( ((unsigned __int8)p_numLightGridVolumesUsed & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &lgvGlob.frameData[smpFrame].numLightGridVolumesUsed) )
    __debugbreak();
  v5 = _InterlockedExchangeAdd(p_numLightGridVolumesUsed, 1u);
  if ( v5 < 0x4000 )
  {
    result = &v4->lightGridVolumeSrcParams[v5];
    *allocatedVolumeInfoSlot = v5;
    result->m_flags = 0;
  }
  else
  {
    R_WarnOncePerFrame(R_WARN_TOO_MANY_LIGHTGRID_VOLUMES);
    return 0i64;
  }
  return result;
}

/*
==============
R_LGV_CalcModelBounds
==============
*/
void R_LGV_CalcModelBounds(const Bounds *worldBounds, const vec3_t *origin, const tmat33_t<vec3_t> *axis, Bounds *modelBounds)
{
  __int128 v109; 
  vec3_t out; 
  char v111; 
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
  }
  _RSI = axis;
  _R14 = modelBounds;
  _RDI = worldBounds;
  Vec3Rotate(&worldBounds->midPoint, axis, &out);
  Vec3Rotate(origin, _RSI, (vec3_t *)&v109);
  __asm
  {
    vmovss  xmm5, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm3, dword ptr [rdi+0Ch]
    vmovss  xmm8, dword ptr [rdi+14h]
    vmovss  xmm7, dword ptr [rdi+10h]
    vmovss  xmm0, dword ptr [rbp+57h+out]
    vsubss  xmm11, xmm0, dword ptr [rbp+57h+var_A0]
    vmovss  xmm0, dword ptr [rbp+57h+out+8]
    vsubss  xmm9, xmm0, dword ptr [rbp+57h+var_A0+8]
    vmovss  xmm0, dword ptr [rsi+4]
    vmovss  xmm1, dword ptr [rbp+57h+out+4]
    vsubss  xmm10, xmm1, dword ptr [rbp+57h+var_A0+4]
    vandps  xmm0, xmm0, xmm5
    vmulss  xmm1, xmm0, xmm7
    vmovss  xmm0, dword ptr [rsi]
    vandps  xmm0, xmm0, xmm5
    vmulss  xmm0, xmm0, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmovss  xmm1, dword ptr [rsi+8]
    vandps  xmm1, xmm1, xmm5
    vmulss  xmm0, xmm1, xmm8
    vaddss  xmm6, xmm2, xmm0
    vmovss  xmm2, dword ptr [rsi+0Ch]
    vmovss  xmm0, dword ptr [rsi+10h]
    vandps  xmm0, xmm0, xmm5
    vmulss  xmm0, xmm0, xmm7
    vandps  xmm2, xmm2, xmm5
    vmulss  xmm1, xmm2, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmovss  xmm1, dword ptr [rsi+14h]
    vandps  xmm1, xmm1, xmm5
    vmulss  xmm0, xmm1, xmm8
    vaddss  xmm4, xmm2, xmm0
    vmovss  xmm2, dword ptr [rsi+18h]
    vmovss  xmm0, dword ptr [rsi+1Ch]
    vandps  xmm0, xmm0, xmm5
    vmulss  xmm0, xmm0, xmm7
    vandps  xmm2, xmm2, xmm5
    vmulss  xmm1, xmm2, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmovss  xmm1, dword ptr [rsi+20h]
  }
  *(_QWORD *)_R14->midPoint.v = 0i64;
  _R14->midPoint.v[2] = 0.0;
  __asm
  {
    vandps  xmm1, xmm1, xmm5
    vmulss  xmm0, xmm1, xmm8
    vsubss  xmm1, xmm10, xmm4
    vaddss  xmm3, xmm2, xmm0
    vsubss  xmm0, xmm9, xmm3
    vaddss  xmm10, xmm4, xmm10
    vaddss  xmm9, xmm3, xmm9
  }
  _R14->halfSize.v[0] = -3.4028235e38;
  _R14->halfSize.v[1] = -3.4028235e38;
  _R14->halfSize.v[2] = -3.4028235e38;
  HIDWORD(v109) = 0;
  __asm
  {
    vmovups xmm4, [rbp+57h+var_A0]
    vsubss  xmm5, xmm11, xmm6
    vmovss  xmm4, xmm4, xmm5
    vinsertps xmm4, xmm4, xmm1, 10h
    vinsertps xmm4, xmm4, xmm0, 20h ; ' '
    vmovss  xmm0, dword ptr [r14]
    vmovups [rbp+57h+var_A0], xmm4
  }
  HIDWORD(v109) = 0;
  __asm
  {
    vmovups xmm3, [rbp+57h+var_A0]
    vmovss  xmm3, xmm3, xmm0
    vinsertps xmm3, xmm3, dword ptr [r14+4], 10h
    vinsertps xmm3, xmm3, dword ptr [r14+8], 20h ; ' '
    vsubps  xmm0, xmm3, cs:__xmm@00000000ff7fffffff7fffffff7fffff
    vaddps  xmm1, xmm3, cs:__xmm@00000000ff7fffffff7fffffff7fffff
    vmovups [rbp+57h+var_A0], xmm3
    vaddss  xmm8, xmm6, xmm11
    vminps  xmm2, xmm0, xmm4
    vmaxps  xmm0, xmm1, xmm4
    vaddps  xmm1, xmm2, xmm0
    vmulps  xmm3, xmm1, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
    vmovss  dword ptr [r14], xmm3
    vextractps dword ptr [r14+4], xmm3, 1
    vextractps dword ptr [r14+8], xmm3, 2
    vsubps  xmm7, xmm3, xmm2
    vmovss  dword ptr [r14+0Ch], xmm7
    vshufps xmm4, xmm7, xmm7, 55h ; 'U'
    vmovss  dword ptr [r14+10h], xmm4
  }
  HIDWORD(v109) = 0;
  __asm
  {
    vmovups xmm6, [rbp+57h+var_A0]
    vmovss  xmm6, xmm6, xmm8
    vshufps xmm5, xmm7, xmm7, 0AAh ; 'ª'
    vmovss  dword ptr [r14+14h], xmm5
    vmovss  xmm0, dword ptr [r14]
    vinsertps xmm6, xmm6, xmm10, 10h
    vinsertps xmm6, xmm6, xmm9, 20h ; ' '
    vmovups [rbp+57h+var_A0], xmm6
  }
  HIDWORD(v109) = 0;
  __asm
  {
    vmovups xmm3, [rbp+57h+var_A0]
    vmovss  xmm3, xmm3, xmm0
    vinsertps xmm3, xmm3, dword ptr [r14+4], 10h
    vinsertps xmm3, xmm3, dword ptr [r14+8], 20h ; ' '
    vmovups [rbp+57h+var_A0], xmm3
  }
  HIDWORD(v109) = 0;
  __asm
  {
    vmovups xmm1, [rbp+57h+var_A0]
    vmovss  xmm1, xmm1, xmm7
    vinsertps xmm1, xmm1, xmm4, 10h
    vinsertps xmm1, xmm1, xmm5, 20h ; ' '
    vsubps  xmm0, xmm3, xmm1
    vaddps  xmm1, xmm3, xmm1
    vminps  xmm2, xmm0, xmm6
    vmaxps  xmm0, xmm1, xmm6
    vaddps  xmm1, xmm2, xmm0
    vmulps  xmm3, xmm1, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
    vmovss  dword ptr [r14], xmm3
    vsubps  xmm4, xmm3, xmm2
    vextractps dword ptr [r14+4], xmm3, 1
    vextractps dword ptr [r14+8], xmm3, 2
    vmovss  dword ptr [r14+0Ch], xmm4
    vextractps dword ptr [r14+10h], xmm4, 1
    vextractps dword ptr [r14+14h], xmm4, 2
  }
  _R11 = &v111;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
}

/*
==============
R_LGV_CalcModifier
==============
*/
LightGridVolumeModifier *R_LGV_CalcModifier(LightGridVolumeModifier *result, unsigned int renderFlags, const GfxViewInfo *viewInfo, unsigned int mapEntLookup, unsigned int entnum, const XModel **modelList, const unsigned int modelCount)
{
  const XModel **v8; 
  __int16 v9; 
  unsigned __int64 v11; 
  bool enabled; 
  int integer; 
  bool v16; 
  bool v18; 
  bool v19; 
  char v20; 
  char v30; 
  unsigned int flags; 
  int v37; 
  __int64 v50; 
  unsigned int v51; 
  unsigned int v52; 
  unsigned int v53; 
  bool v54; 
  int v55; 

  v8 = modelList;
  v9 = renderFlags;
  __asm { vmovaps [rsp+88h+var_38], xmm6 }
  _RBX = result;
  v11 = mapEntLookup;
  if ( (!modelList || !modelCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp", 760, ASSERT_TYPE_ASSERT, "(modelList && modelCount)", (const char *)&queryFormat, "modelList && modelCount") )
    __debugbreak();
  _RDI = DCONST_DVARFLT_r_character_lighting_hack;
  enabled = r_lgvThinDisable->current.enabled;
  integer = r_lgvBoostWidth->current.integer;
  if ( !DCONST_DVARFLT_r_character_lighting_hack && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_character_lighting_hack") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vucomiss xmm6, dword ptr [rdi+28h]
  }
  v16 = !v30 && (v9 & 0x40) != 0;
  _RDI = DVARFLT_r_corpse_lighting_hack;
  if ( !DVARFLT_r_corpse_lighting_hack && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_corpse_lighting_hack") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vucomiss xmm6, dword ptr [rdi+28h] }
  v18 = !v30 && (v9 & 0x100) != 0;
  v19 = (v9 & 8) != 0 && !v16 && !v18;
  _RBX->thinPush = -1.0;
  v20 = 0;
  _RBX->flags = 0;
  _RBX->density = 0.0;
  _RBX->thinShrink = -1.0;
  if ( v19 && r_useCameraPositionForViewModelLightGridSampling->current.enabled )
  {
    _R15 = viewInfo;
    _RBX->flags = 6;
    _RBX->dimension = 0;
    __asm
    {
      vmovss  xmm0, dword ptr [r15+100h]
      vmovss  dword ptr [rbx+4], xmm0
    }
    _RBX->probesOffset.v[1] = viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[1];
    _RBX->probesOffset.v[2] = viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[2];
    _RAX = r_lgvViewModelSamplingOffset;
    __asm
    {
      vaddss  xmm0, xmm0, dword ptr [rax+28h]
      vmovss  dword ptr [rbx+4], xmm0
      vmovss  xmm1, dword ptr [rax+2Ch]
      vaddss  xmm2, xmm1, dword ptr [rbx+8]
      vmovss  dword ptr [rbx+8], xmm2
      vmovss  xmm0, dword ptr [rax+30h]
      vaddss  xmm1, xmm0, dword ptr [rbx+0Ch]
      vmovss  dword ptr [rbx+0Ch], xmm1
    }
  }
  else
  {
    *(_QWORD *)_RBX->probesOffset.v = 0i64;
    _RBX->probesOffset.v[2] = 0.0;
    if ( (_DWORD)v11 && (unsigned int)v11 < s_world.gfxMapEntLookupCount )
    {
      _RAX = s_world.gfxMapEntLookup;
      _RDI = v11;
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+rax+4]
        vucomiss xmm0, xmm6
      }
      if ( !v30 )
        goto LABEL_32;
      __asm { vucomiss xmm6, dword ptr [rdi+rax+8] }
      if ( !v30 )
        goto LABEL_32;
      __asm { vucomiss xmm6, dword ptr [rdi+rax+0Ch] }
      if ( !v30 )
      {
LABEL_32:
        __asm
        {
          vmovss  dword ptr [rbx+4], xmm0
          vmovss  xmm0, dword ptr [rdi+rax+8]
          vaddss  xmm1, xmm0, dword ptr [rbx+8]
          vmovss  dword ptr [rbx+8], xmm1
          vmovss  xmm2, dword ptr [rdi+rax+0Ch]
          vaddss  xmm0, xmm2, dword ptr [rbx+0Ch]
          vmovss  dword ptr [rbx+0Ch], xmm0
        }
        _RBX->flags |= 1u;
        _RAX = s_world.gfxMapEntLookup;
      }
      if ( SLOBYTE(_RAX[_RDI].flags) < 0 )
      {
        _RBX->flags |= 0x200u;
        _RAX = s_world.gfxMapEntLookup;
      }
      if ( !enabled )
      {
        if ( (_RAX[_RDI].flags & 2) != 0 )
        {
          _RBX->flags &= ~0x40u;
          v20 = 1;
          _RAX = s_world.gfxMapEntLookup;
        }
        if ( (_RAX[_RDI].flags & 1) != 0 )
        {
          _RBX->flags |= 0x40u;
          v20 = 1;
          _RAX = s_world.gfxMapEntLookup;
        }
        flags = _RAX[_RDI].flags;
        if ( (flags & 0x70) != 0 )
        {
          if ( (flags & 0x20) != 0 )
          {
            *(double *)&_XMM0 = LGVDataGetLgvThinPush(_RAX[_RDI].lgvData);
            __asm { vmovss  dword ptr [rbx+18h], xmm0 }
            _RAX = s_world.gfxMapEntLookup;
          }
          if ( (_RAX[_RDI].flags & 0x10) != 0 )
          {
            *(double *)&_XMM0 = LGVDataGetLgvThinShrink(_RAX[_RDI].lgvData);
            __asm { vmovss  dword ptr [rbx+14h], xmm0 }
            _RAX = s_world.gfxMapEntLookup;
          }
          if ( (_RAX[_RDI].flags & 0x40) != 0 )
          {
            _RBX->flags |= 0x800u;
            *(double *)&_XMM0 = LGVDataGetLgvDensity(s_world.gfxMapEntLookup[_RDI].lgvData);
            __asm { vmovss  dword ptr [rbx+1Ch], xmm0 }
            _RAX = s_world.gfxMapEntLookup;
          }
        }
        if ( (_RAX[_RDI].flags & 4) != 0 )
        {
          _RBX->flags |= 0x80u;
          _RAX = s_world.gfxMapEntLookup;
        }
        if ( (_RAX[_RDI].flags & 8) != 0 )
          _RBX->flags |= 0x100u;
      }
    }
    v37 = r_lgvDebugEnt->current.integer;
    if ( v37 != -1 && entnum == v37 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+4]
        vaddss  xmm1, xmm0, dword ptr [rax+28h]
        vmovss  dword ptr [rbx+4], xmm1
        vmovss  xmm2, dword ptr [rbx+8]
        vaddss  xmm0, xmm2, dword ptr [rax+2Ch]
        vmovss  dword ptr [rbx+8], xmm0
        vmovss  xmm1, dword ptr [rbx+0Ch]
        vaddss  xmm2, xmm1, dword ptr [rax+30h]
        vmovss  dword ptr [rbx+0Ch], xmm2
      }
      _RBX->flags |= 1u;
    }
    _R15 = viewInfo;
    if ( v19 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+4]
        vaddss  xmm1, xmm0, dword ptr [rax+28h]
        vmovss  dword ptr [rbx+4], xmm1
        vmovss  xmm2, dword ptr [rbx+8]
        vaddss  xmm0, xmm2, dword ptr [rax+2Ch]
        vmovss  dword ptr [rbx+8], xmm0
        vmovss  xmm1, dword ptr [rbx+0Ch]
        vaddss  xmm2, xmm1, dword ptr [rax+30h]
        vmovss  dword ptr [rbx+0Ch], xmm2
      }
      _RBX->flags |= 1u;
    }
  }
  if ( modelCount )
  {
    v50 = modelCount;
    do
    {
      v51 = (*v8)->flags;
      if ( (v51 & 0x800000) != 0 )
        _RBX->flags |= 8u;
      if ( (v51 & 0x400000) != 0 )
        _RBX->flags |= 0x10u;
      if ( (v51 & 0x1000000) != 0 && !enabled && !v20 )
        _RBX->flags |= 0x40u;
      if ( integer == -1 && LGVDataGetLgvBoostWidth((*v8)->lgvData) )
        _RBX->flags |= 0x400u;
      ++v8;
      --v50;
    }
    while ( v50 );
  }
  v52 = _RBX->flags;
  if ( integer == 1 )
  {
    v52 |= 0x400u;
    _RBX->flags = v52;
  }
  v53 = v52;
  if ( (v52 & 0x440) != 0 && modelCount == 1 )
  {
    v53 = v52 & 0xFFFFFFD7 | 0x20;
    _RBX->flags = v53;
  }
  if ( r_lgvForceUseEntityBounds->current.enabled )
  {
    v53 |= 8u;
    _RBX->flags = v53;
  }
  v54 = !r_lgvForceExplodeModels->current.enabled;
  if ( r_lgvForceExplodeModels->current.enabled )
  {
    v55 = v53 | 0x20;
    v54 = v55 == 0;
    _RBX->flags = v55;
  }
  __asm { vucomiss xmm6, dword ptr [r15+3874h] }
  if ( v54 || R_DynamicLightsets_DisableTemporalSmoothing(lgvGlob.smpFrame) )
    _RBX->flags |= 0x10u;
  __asm { vmovaps xmm6, [rsp+88h+var_38] }
  return _RBX;
}

/*
==============
R_LGV_CalcTransform
==============
*/
void R_LGV_CalcTransform(const Bounds *bounds, const vec3_t *pos, const vec3_t *axes, vec4_t *transform)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vmovss  xmm1, dword ptr [rcx+4]
    vsubss  xmm3, xmm1, dword ptr [rcx+10h]
    vmovaps [rsp+58h+var_18], xmm6
    vmovss  xmm6, dword ptr [rcx+0Ch]
    vsubss  xmm5, xmm0, xmm6
    vmovss  xmm0, dword ptr [rcx+8]
    vsubss  xmm4, xmm0, dword ptr [rcx+14h]
    vmulss  xmm0, xmm3, dword ptr [r8+0Ch]
    vmovaps [rsp+58h+var_28], xmm7
    vmovss  xmm7, dword ptr [r8]
    vmulss  xmm1, xmm7, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, dword ptr [r8+18h]
    vaddss  xmm0, xmm2, xmm1
    vmulss  xmm1, xmm5, dword ptr [r8+4]
    vmovaps [rsp+58h+var_38], xmm8
    vaddss  xmm8, xmm0, dword ptr [rdx]
    vmulss  xmm0, xmm3, dword ptr [r8+10h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, dword ptr [r8+1Ch]
    vaddss  xmm0, xmm2, xmm1
    vmulss  xmm1, xmm3, dword ptr [r8+14h]
    vmovaps [rsp+58h+var_48], xmm9
    vmovaps [rsp+58h+var_58], xmm10
    vaddss  xmm9, xmm0, dword ptr [rdx+4]
    vmulss  xmm0, xmm5, dword ptr [r8+8]
    vmovss  xmm5, cs:__real@3a83126f
    vcomiss xmm6, xmm5
    vmovss  xmm3, cs:__real@3f800000
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, dword ptr [r8+20h]
    vmovss  xmm4, cs:__real@3f000000
    vaddss  xmm0, xmm2, xmm1
    vaddss  xmm10, xmm0, dword ptr [rdx+8]
    vdivss  xmm1, xmm4, xmm6
    vmulss  xmm0, xmm7, xmm1
    vmovss  dword ptr [r9], xmm0
    vmulss  xmm0, xmm1, dword ptr [r8+4]
    vmovss  dword ptr [r9+4], xmm0
    vmulss  xmm0, xmm1, dword ptr [r8+8]
    vmovss  dword ptr [r9+8], xmm0
    vmovss  xmm1, dword ptr [rcx+10h]
    vcomiss xmm1, xmm5
    vdivss  xmm2, xmm4, xmm1
    vmulss  xmm0, xmm2, dword ptr [r8+0Ch]
    vmovss  dword ptr [r9+10h], xmm0
    vmulss  xmm1, xmm2, dword ptr [r8+10h]
    vmovss  dword ptr [r9+14h], xmm1
    vmulss  xmm0, xmm2, dword ptr [r8+14h]
    vmovss  dword ptr [r9+18h], xmm0
    vmovss  xmm1, dword ptr [rcx+14h]
    vcomiss xmm1, xmm5
    vdivss  xmm3, xmm4, xmm1
    vmulss  xmm0, xmm3, dword ptr [r8+18h]
    vmovss  xmm5, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
    vmovss  dword ptr [r9+20h], xmm0
    vmulss  xmm1, xmm3, dword ptr [r8+1Ch]
    vmovss  dword ptr [r9+24h], xmm1
    vmulss  xmm0, xmm3, dword ptr [r8+20h]
    vmovss  dword ptr [r9+28h], xmm0
    vmulss  xmm1, xmm9, dword ptr [r9+4]
    vmulss  xmm2, xmm8, dword ptr [r9]
    vmulss  xmm0, xmm10, dword ptr [r9+8]
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm4, xmm3, xmm0
    vxorps  xmm1, xmm4, xmm5
    vmovss  dword ptr [r9+0Ch], xmm1
    vmulss  xmm1, xmm9, dword ptr [r9+14h]
    vmulss  xmm0, xmm8, dword ptr [r9+10h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm10, dword ptr [r9+18h]
    vaddss  xmm0, xmm2, xmm1
    vxorps  xmm2, xmm0, xmm5
    vmovss  dword ptr [r9+1Ch], xmm2
    vmulss  xmm1, xmm9, dword ptr [r9+24h]
    vmulss  xmm0, xmm8, dword ptr [r9+20h]
    vmovaps xmm8, [rsp+58h+var_38]
    vmovaps xmm9, [rsp+58h+var_48]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm10, dword ptr [r9+28h]
    vmovaps xmm10, [rsp+58h+var_58]
    vaddss  xmm0, xmm2, xmm1
    vxorps  xmm2, xmm0, xmm5
    vmovss  dword ptr [r9+2Ch], xmm2
  }
}

/*
==============
R_LGV_CombineSampledLighting
==============
*/
void R_LGV_CombineSampledLighting(ComputeCmdBufState *state, const GfxBackEndData *data, const GfxViewInfo *viewInfo, const GfxWrappedRWBuffer *lightGridVolumeActiveLightGrids, const GfxWrappedRWBuffer *lightGridVolumeSamplingSlot, const GfxWrappedRWBuffer *lightGridVolumeSampledLightingData, const GfxWrappedRWBuffer *globalVolumeIndexingBuffer, R_RT_ColorHandle *lightGridVolumeData3D, R_RT_ColorHandle *lightGridVolumeHighBandData3D, bool reflectionVolumes)
{
  __int64 smpFrame; 
  __int64 shLightingIndex; 
  ComputeShader *combineSampledLGVData; 
  __int64 v17; 
  const GfxImage *LightGridVolumeAtlasTexture; 
  const GfxImage *v19; 
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v21; 
  GfxShaderBufferView *views; 
  GfxShaderBufferView *p_view; 
  GfxShaderBufferView *v24; 
  GfxShaderBufferView *v25; 
  GfxTexture *Resident; 
  GfxTexture *v27; 
  GfxTexture *v28; 
  GfxTexture *v29; 
  GfxShaderBufferView *v30; 
  GfxShaderBufferView *v31; 
  GfxShaderBufferView *v32; 
  GfxTexture *v33; 
  GfxTexture *v34; 
  GfxTexture *v35; 
  GfxTexture *v36; 
  GfxShaderBufferView *v37; 
  GfxShaderBufferView *v38; 
  GfxShaderBufferView *v39; 
  ID3D12Resource *buffers; 
  ID3D12Resource *buffer; 

  __asm
  {
    vmovss  xmm0, dword ptr cs:?s_world@@3UGfxWorld@@A.precomputedSkyIllumination.boxMin; GfxWorld s_world
    vcomiss xmm0, dword ptr cs:?s_world@@3UGfxWorld@@A.precomputedSkyIllumination.boxMax; GfxWorld s_world
  }
  smpFrame = data->smpFrame;
  shLightingIndex = data->shLightingIndex;
  combineSampledLGVData = rgp.combineSampledLGVData;
  v17 = shLightingIndex;
  if ( reflectionVolumes )
    combineSampledLGVData = rgp.combineSampledLGVDataReflectionVolumes;
  R_SetComputeShader(state, combineSampledLGVData);
  buffers = lgvGlob.gfxBuffers[v17].sampleLightGridVolumeLightingConsts.buffer;
  R_SetComputeConstantBuffers(state, 0, 1, &buffers);
  buffer = data->globalSceneConstantBuffer->buffer;
  R_SetComputeConstantBuffers(state, 7, 1, &buffer);
  views = &lightGridVolumeActiveLightGrids->view;
  R_SetComputeViews(state, 0, 1, (const GfxShaderBufferView *const *)&views);
  p_view = &lgvGlob.gfxBuffers[v17].lightGridVolumePackingParams.view;
  R_SetComputeViews(state, 1, 1, (const GfxShaderBufferView *const *)&p_view);
  v24 = &lgvGlob.gfxBuffers[v17].lightGridVolumeTransformParams.view;
  R_SetComputeViews(state, 2, 1, (const GfxShaderBufferView *const *)&v24);
  lightGridVolumeSamplingSlot = (const GfxWrappedRWBuffer *)((char *)lightGridVolumeSamplingSlot + 8);
  R_SetComputeViews(state, 3, 1, (const GfxShaderBufferView *const *)&lightGridVolumeSamplingSlot);
  lightGridVolumeSampledLightingData = (const GfxWrappedRWBuffer *)((char *)lightGridVolumeSampledLightingData + 8);
  R_SetComputeViews(state, 4, 1, (const GfxShaderBufferView *const *)&lightGridVolumeSampledLightingData);
  globalVolumeIndexingBuffer = (const GfxWrappedRWBuffer *)((char *)globalVolumeIndexingBuffer + 8);
  R_SetComputeViews(state, 5, 1, (const GfxShaderBufferView *const *)&globalVolumeIndexingBuffer);
  v25 = &R_GetFallbackProbe()->view;
  R_SetComputeViews(state, 6, 1, (const GfxShaderBufferView *const *)&v25);
  Resident = (GfxTexture *)R_Texture_GetResident(rgp.blackImage->textureId);
  R_SetComputeTextures(state, 20, 1, (const GfxTexture *const *)&Resident);
  v27 = (GfxTexture *)R_Texture_GetResident(rgp.whiteImage->textureId);
  R_SetComputeTextures(state, 21, 1, (const GfxTexture *const *)&v27);
  v28 = (GfxTexture *)R_Texture_GetResident(rgp.blackImage3D->textureId);
  R_SetComputeTextures(state, 22, 1, (const GfxTexture *const *)&v28);
  v29 = (GfxTexture *)R_Texture_GetResident(rgp.blackImage->textureId);
  R_SetComputeTextures(state, 23, 1, (const GfxTexture *const *)&v29);
  v30 = &R_GetLightGridVolumesAtlasTransientPackingBuffer(data)->view;
  R_SetComputeViews(state, 14, 1, (const GfxShaderBufferView *const *)&v30);
  v31 = &R_GetLightGridVolumesAtlasTransformParamsBuffer(data)->view;
  R_SetComputeViews(state, 15, 1, (const GfxShaderBufferView *const *)&v31);
  v32 = &R_GetLightGridVolumesAtlasPackingParamsBuffer(data)->view;
  R_SetComputeViews(state, 16, 1, (const GfxShaderBufferView *const *)&v32);
  LightGridVolumeAtlasTexture = R_GetLightGridVolumeAtlasTexture(data, LIGHTGRID_VOLUME_ATLAS_TEXTURE_DC);
  v33 = (GfxTexture *)R_Texture_GetResident(LightGridVolumeAtlasTexture->textureId);
  R_SetComputeTextures(state, 17, 1, (const GfxTexture *const *)&v33);
  v19 = R_GetLightGridVolumeAtlasTexture(data, LIGHTGRID_VOLUME_ATLAS_TEXTURE_HIGH_BANDS);
  v34 = (GfxTexture *)R_Texture_GetResident(v19->textureId);
  R_SetComputeTextures(state, 18, 1, (const GfxTexture *const *)&v34);
  Surface = R_RT_Handle::GetSurface(lightGridVolumeData3D);
  v35 = (GfxTexture *)R_Texture_GetResident(Surface->m_image.m_base.textureId);
  R_SetComputeRWTextures(state, 0, 1, (const GfxTexture *const *)&v35);
  v21 = R_RT_Handle::GetSurface(lightGridVolumeHighBandData3D);
  v36 = (GfxTexture *)R_Texture_GetResident(v21->m_image.m_base.textureId);
  R_SetComputeRWTextures(state, 1, 1, (const GfxTexture *const *)&v36);
  if ( reflectionVolumes )
  {
    v37 = &R_ReflectionProbe_GetInstanceBuffer(data->reflectionProbeFrameIndex)->view;
    R_SetComputeViews(state, 10, 1, (const GfxShaderBufferView *const *)&v37);
    v38 = &R_ReflectionProbe_GetObbBuffer(data->reflectionProbeFrameIndex)->view;
    R_SetComputeViews(state, 11, 1, (const GfxShaderBufferView *const *)&v38);
    v39 = &R_ReflectionProbe_GetSHBuffer()->view;
    R_SetComputeViews(state, 13, 1, (const GfxShaderBufferView *const *)&v39);
  }
  R_Dispatch(state, (lgvGlob.frameData[smpFrame].numLightGridVolumeProbesUsed + 63) / 64, 1u, 1u);
}

/*
==============
R_LGV_CompactLightGridSamplingLists
==============
*/
void R_LGV_CompactLightGridSamplingLists(ComputeCmdBufState *state, const GfxBackEndData *data, const GfxViewInfo *viewInfo, const GfxWrappedRWBuffer *lightGridVolumeActiveLightGrids, const GfxWrappedRWBuffer *lightGridVolumeSamplingSlot, const GfxWrappedRWBuffer *samplingBufferOffsets1, const GfxWrappedRWBuffer *globalProbeOffsets1, const GfxWrappedRWBuffer *lightgridProbeCounts1, const GfxWrappedRWBuffer *lightgridVolumeCounts1, const GfxWrappedRWBuffer *globalProbeOffset, const GfxWrappedRWBuffer *lightGridVolumesList, const GfxWrappedRWBuffer *lightGridProbeOffset)
{
  __int64 smpFrame; 
  GfxShaderBufferView *v16; 
  ID3D12Resource *buffers; 
  GfxShaderBufferView *views; 

  smpFrame = data->smpFrame;
  R_SetComputeShader(state, rgp.compactLgvSamplingLists);
  buffers = lgvGlob.gfxBuffers[data->shLightingIndex].sampleLightGridVolumeLightingConsts.buffer;
  R_SetComputeConstantBuffers(state, 0, 1, &buffers);
  views = &lightGridVolumeActiveLightGrids->view;
  R_SetComputeViews(state, 0, 1, (const GfxShaderBufferView *const *)&views);
  v16 = &lgvGlob.gfxBuffers[0].lightGridVolumePackingParams.view + 12 * data->shLightingIndex;
  R_SetComputeViews(state, 1, 1, (const GfxShaderBufferView *const *)&v16);
  samplingBufferOffsets1 = (const GfxWrappedRWBuffer *)((char *)samplingBufferOffsets1 + 8);
  R_SetComputeViews(state, 2, 1, (const GfxShaderBufferView *const *)&samplingBufferOffsets1);
  globalProbeOffsets1 = (const GfxWrappedRWBuffer *)((char *)globalProbeOffsets1 + 8);
  R_SetComputeViews(state, 3, 1, (const GfxShaderBufferView *const *)&globalProbeOffsets1);
  lightgridProbeCounts1 = (const GfxWrappedRWBuffer *)((char *)lightgridProbeCounts1 + 8);
  R_SetComputeViews(state, 4, 1, (const GfxShaderBufferView *const *)&lightgridProbeCounts1);
  lightgridVolumeCounts1 = (const GfxWrappedRWBuffer *)((char *)lightgridVolumeCounts1 + 8);
  R_SetComputeViews(state, 5, 1, (const GfxShaderBufferView *const *)&lightgridVolumeCounts1);
  lightGridVolumeSamplingSlot = (const GfxWrappedRWBuffer *)((char *)lightGridVolumeSamplingSlot + 32);
  R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&lightGridVolumeSamplingSlot, NULL);
  globalProbeOffset = (const GfxWrappedRWBuffer *)((char *)globalProbeOffset + 32);
  R_SetComputeRWViewsWithCounters(state, 1, 1, (const GfxShaderBufferRWView *const *)&globalProbeOffset, NULL);
  lightGridVolumesList = (const GfxWrappedRWBuffer *)((char *)lightGridVolumesList + 32);
  R_SetComputeRWViewsWithCounters(state, 2, 1, (const GfxShaderBufferRWView *const *)&lightGridVolumesList, NULL);
  lightGridProbeOffset = (const GfxWrappedRWBuffer *)((char *)lightGridProbeOffset + 32);
  R_SetComputeRWViewsWithCounters(state, 3, 1, (const GfxShaderBufferRWView *const *)&lightGridProbeOffset, NULL);
  R_Dispatch(state, (lgvGlob.frameData[smpFrame].numLightGridVolumesUsed + 63) / 64, 1u, 1u);
}

/*
==============
R_LGV_ComputeGlobalGroupStartProbeIndices
==============
*/
void R_LGV_ComputeGlobalGroupStartProbeIndices(ComputeCmdBufState *state, const GfxBackEndData *data, const GfxViewInfo *viewInfo, const GfxWrappedRWBuffer *globalProbeOffset, const GfxWrappedRWBuffer *globalVolumeIndexingBuffer)
{
  __int64 smpFrame; 
  ID3D12Resource *buffers; 
  GfxShaderBufferView *views; 

  smpFrame = data->smpFrame;
  R_SetComputeShader(state, rgp.computeGlobalGroupStartProbeIndex);
  buffers = lgvGlob.gfxBuffers[data->shLightingIndex].sampleLightGridVolumeLightingConsts.buffer;
  R_SetComputeConstantBuffers(state, 0, 1, &buffers);
  views = &globalProbeOffset->view;
  R_SetComputeViews(state, 1, 1, (const GfxShaderBufferView *const *)&views);
  globalVolumeIndexingBuffer = (const GfxWrappedRWBuffer *)((char *)globalVolumeIndexingBuffer + 32);
  R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&globalVolumeIndexingBuffer, NULL);
  R_Dispatch(state, (unsigned int)((lgvGlob.frameData[smpFrame].numLightGridVolumeProbesUsed + 63) / 64 + 63) >> 6, 1u, 1u);
}

/*
==============
R_LGV_ComputeGroupStartProbeIndices
==============
*/
void R_LGV_ComputeGroupStartProbeIndices(ComputeCmdBufState *state, const GfxBackEndData *data, const GfxViewInfo *viewInfo, const GfxWrappedRWBuffer *globalProbeOffset, const GfxWrappedRWBuffer *globalVolumeIndexingBuffer, const GfxWrappedRWBuffer *lightGridVolumeCount, const GfxWrappedRWBuffer *lightGridProbeOffset, const GfxWrappedRWBuffer *lightGridVolumeIndexingBuffer, const GfxWrappedRWBuffer *indirectDispatchParams)
{
  __int64 smpFrame; 
  int NumActiveLightGrids; 
  __int64 v14; 
  GfxWrappedBuffer *samplePerLightGridLightGridVolumeLighting; 
  GfxShaderBufferView *p_view; 
  unsigned int v17; 
  const GfxWrappedRWBuffer *v18; 
  GfxShaderBufferView *v19; 
  GfxShaderBufferRWView *p_rwView; 
  GfxShaderBufferView *views; 
  ID3D12Resource *buffer; 
  ID3D12Resource *v23; 
  GfxShaderBufferView *v24; 
  GfxShaderBufferView *v25; 
  GfxShaderBufferRWView *v26; 
  ID3D12Resource *buffers; 

  smpFrame = data->smpFrame;
  R_SetComputeShader(state, rgp.computeGlobalGroupStartProbeIndex);
  buffers = lgvGlob.gfxBuffers[data->shLightingIndex].sampleLightGridVolumeLightingConsts.buffer;
  R_SetComputeConstantBuffers(state, 0, 1, &buffers);
  views = &globalProbeOffset->view;
  R_SetComputeViews(state, 1, 1, (const GfxShaderBufferView *const *)&views);
  globalVolumeIndexingBuffer = (const GfxWrappedRWBuffer *)((char *)globalVolumeIndexingBuffer + 32);
  R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&globalVolumeIndexingBuffer, NULL);
  R_Dispatch(state, (unsigned int)((lgvGlob.frameData[smpFrame].numLightGridVolumeProbesUsed + 63) / 64 + 63) >> 6, 1u, 1u);
  NumActiveLightGrids = R_GetNumActiveLightGrids(data);
  v14 = NumActiveLightGrids;
  if ( NumActiveLightGrids > 0 )
  {
    samplePerLightGridLightGridVolumeLighting = lgvGlob.samplingPrepBuffers.samplePerLightGridLightGridVolumeLighting;
    p_view = &lightGridVolumeCount->view;
    v17 = 64;
    v18 = indirectDispatchParams;
    v19 = &lightGridProbeOffset->view;
    p_rwView = &lightGridVolumeIndexingBuffer->rwView;
    do
    {
      R_SetComputeShader(state, rgp.computeGroupStartProbeIndex);
      buffer = lgvGlob.gfxBuffers[data->shLightingIndex].sampleLightGridVolumeLightingConsts.buffer;
      R_SetComputeConstantBuffers(state, 0, 1, &buffer);
      v23 = samplePerLightGridLightGridVolumeLighting->buffer;
      R_SetComputeConstantBuffers(state, 2, 1, &v23);
      v24 = p_view;
      R_SetComputeViews(state, 0, 1, (const GfxShaderBufferView *const *)&v24);
      v25 = v19;
      R_SetComputeViews(state, 1, 1, (const GfxShaderBufferView *const *)&v25);
      v26 = p_rwView;
      R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&v26, NULL);
      R_DispatchIndirect(state, v18->buffer, v17);
      v17 += 96;
      ++samplePerLightGridLightGridVolumeLighting;
      --v14;
    }
    while ( v14 );
  }
}

/*
==============
R_LGV_ComputeGroupStartProbeIndices
==============
*/
void R_LGV_ComputeGroupStartProbeIndices(ComputeCmdBufState *state, const GfxBackEndData *data, const GfxViewInfo *viewInfo, const GfxWrappedRWBuffer *lightGridVolumeCount, const GfxWrappedRWBuffer *lightGridProbeOffset, const GfxWrappedRWBuffer *lightGridVolumeIndexingBuffer, const GfxWrappedRWBuffer *indirectDispatchParams, int lightGridIndex)
{
  ID3D12Resource *buffers; 

  R_SetComputeShader(state, rgp.computeGroupStartProbeIndex);
  buffers = lgvGlob.gfxBuffers[data->shLightingIndex].sampleLightGridVolumeLightingConsts.buffer;
  R_SetComputeConstantBuffers(state, 0, 1, &buffers);
  LODWORD(data) = lightGridIndex;
  buffers = lgvGlob.samplingPrepBuffers.samplePerLightGridLightGridVolumeLighting[lightGridIndex].buffer;
  R_SetComputeConstantBuffers(state, 2, 1, &buffers);
  buffers = (ID3D12Resource *)&lightGridVolumeCount->view;
  R_SetComputeViews(state, 0, 1, (const GfxShaderBufferView *const *)&buffers);
  lightGridProbeOffset = (const GfxWrappedRWBuffer *)((char *)lightGridProbeOffset + 8);
  R_SetComputeViews(state, 1, 1, (const GfxShaderBufferView *const *)&lightGridProbeOffset);
  lightGridProbeOffset = (const GfxWrappedRWBuffer *)&lightGridVolumeIndexingBuffer->rwView;
  R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&lightGridProbeOffset, NULL);
  R_DispatchIndirect(state, indirectDispatchParams->buffer, 96 * (_DWORD)data + 64);
}

/*
==============
R_LGV_DebugMarkStaticLGVVisible
==============
*/
void R_LGV_DebugMarkStaticLGVVisible(unsigned int smpFrame, unsigned int smodelInstanceIndex)
{
  __int64 v2; 
  __int64 v3; 
  unsigned int lgvIndex_transientIndex; 
  unsigned int v5; 
  __int64 v6; 
  GfxWorldTransientZone *v7; 
  unsigned int staticModelVolumeCount; 
  LightGridVolumeFrameData *v9; 
  int v10; 
  __int64 v11; 
  unsigned int instanceCount; 

  v2 = smodelInstanceIndex;
  v3 = smpFrame;
  if ( !rgp.world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp", 2159, ASSERT_TYPE_ASSERT, "(rgp.world)", (const char *)&queryFormat, "rgp.world") )
    __debugbreak();
  if ( (unsigned int)v2 >= rgp.world->smodels.instanceCount )
  {
    instanceCount = rgp.world->smodels.instanceCount;
    LODWORD(v11) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp", 2160, ASSERT_TYPE_ASSERT, "(unsigned)( smodelInstanceIndex ) < (unsigned)( rgp.world->smodels.instanceCount )", "smodelInstanceIndex doesn't index rgp.world->smodels.instanceCount\n\t%i not in [0, %i)", v11, instanceCount) )
      __debugbreak();
  }
  lgvIndex_transientIndex = rgp.world->smodels.instances[v2].lgvIndex_transientIndex;
  if ( lgvIndex_transientIndex != -1 )
  {
    v5 = lgvIndex_transientIndex & 0x1FFFFF;
    v6 = lgvIndex_transientIndex >> 21;
    if ( (unsigned int)v6 <= s_world.draw.transientZoneCount )
    {
      v7 = s_world.draw.transientZones[v6];
      if ( v7 )
      {
        staticModelVolumeCount = v7->gpuLightGrid.staticModelVolumeCount;
        if ( staticModelVolumeCount )
        {
          if ( v5 > staticModelVolumeCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp", 2182, ASSERT_TYPE_ASSERT, "(staticVolumeIndex <= s_world.draw.transientZones[worldTransient]->gpuLightGrid.staticModelVolumeCount)", (const char *)&queryFormat, "staticVolumeIndex <= s_world.draw.transientZones[worldTransient]->gpuLightGrid.staticModelVolumeCount") )
            __debugbreak();
          v9 = &lgvGlob.frameData[v3];
          v10 = Sys_InterlockedIncrement(&v9->debugVisibleStaticVolumeCount) - 1;
          if ( v10 < 4096 )
          {
            v9->debugVisibleStaticVolumes[v10].index = v5;
            v9->debugVisibleStaticVolumes[v10].worldTransient = v6;
          }
        }
      }
    }
  }
}

/*
==============
R_LGV_DrawProbes
==============
*/
void R_LGV_DrawProbes(GfxCmdBufContext *context, const GfxViewInfo *viewInfo)
{
  GfxCmdBufSourceState *source; 
  GfxCmdBufState *state; 
  int integer; 
  const GfxBackEndData *data; 
  int v9; 
  LightGridVolumeFrameData *v10; 
  bool v11; 
  const GfxGpuLightGrid **ActiveLightGridsList; 
  int NumActiveLightGrids; 
  __int64 v14; 
  __int64 v16; 
  int v17; 
  const GfxGpuLightGrid *v18; 
  int probeCount; 
  int v22; 
  int *entityDebugVolumeIndices; 
  int v24; 
  volatile int v25; 
  __int64 v26; 
  __int64 v27; 
  int v28; 
  unsigned int v30; 
  _DWORD *v31; 
  signed int v32; 
  __int64 v33; 
  __int64 v34; 
  GfxWorldTransientZone *v35; 
  unsigned int v36; 
  int v37; 
  unsigned __int16 *v38; 
  int v39; 
  int v40; 
  __int64 v41; 
  bool v44; 
  char *v46; 
  unsigned int debugVisibleStaticVolumeCount; 
  unsigned int v53; 
  signed int numLightGridVolumeProbesUsed; 
  signed int v56; 
  char *v59; 
  int v60; 
  char *v68; 
  float fmt; 
  LightGridVolumeGfxBuffers *v74; 
  int v75; 
  unsigned int v76; 
  unsigned int v77; 
  LightGridVolumeFrameData *v78; 
  GfxCmdBufContext v79; 
  GfxCmdBufContext v80; 
  GfxCmdBufContext v81; 
  GfxCmdBufContext v82; 
  GfxCmdBufContext v83; 
  GfxCmdBufContext v84; 
  GfxCmdBufContext v85; 
  GfxCmdBufContext v86; 
  GfxCmdBufContext v87; 
  GfxCmdBufContext v88; 
  GfxCmdBufContext v89; 
  GfxCmdBufContext v90; 
  GfxCmdBufContext v91; 
  GfxCmdBufContext v92; 
  GfxCmdBufContext v93; 
  GfxCmdBufContext v94; 
  GfxCmdBufContext v95; 
  GfxCmdBufContext v96; 
  GfxViewport outViewport; 

  _R12 = context;
  source = context->source;
  state = context->state;
  integer = r_lgvDrawProbes->current.integer;
  data = context->source->input.data;
  v9 = r_lgvDebugEnt->current.integer;
  v75 = r_lgvDebugSmodelId->current.integer;
  v74 = &lgvGlob.gfxBuffers[data->shLightingIndex];
  v10 = &lgvGlob.frameData[data->smpFrame];
  v78 = v10;
  R_Set3D(source);
  if ( (*((_BYTE *)source + 11668) & 2) != 0 )
  {
    R_GetViewport(source, &outViewport);
    R_SetViewportAndScissorSeparate(state, &outViewport, &outViewport);
    R_UpdateViewport(source, &outViewport);
  }
  if ( state->vertDeclType != VERTDECL_GENERIC )
    state->pipelineStateDirty = 1;
  v11 = state->depthRangeType == GFX_DEPTH_RANGE_SCENE;
  state->vertDeclType = VERTDECL_GENERIC;
  if ( !v11 )
    R_ChangeDepthRange(state, GFX_DEPTH_RANGE_SCENE);
  if ( integer && (unsigned int)(integer - 3) <= 2 )
  {
    if ( v10->smodelDebugVolumeIndex == -1 )
    {
      ActiveLightGridsList = R_GetActiveLightGridsList(viewInfo->input.data);
      NumActiveLightGrids = R_GetNumActiveLightGrids(viewInfo->input.data);
      v14 = NumActiveLightGrids;
      if ( NumActiveLightGrids > 0 )
      {
        __asm
        {
          vmovaps [rsp+200h+var_40], xmm6
          vmovss  xmm6, cs:__real@40a00000
        }
        v16 = 0i64;
        while ( 1 )
        {
          v17 = 0;
          v18 = ActiveLightGridsList[v16];
          probeCount = 0;
          if ( integer == 3 )
          {
            v17 = 1;
          }
          else
          {
            if ( integer != 4 )
            {
              if ( integer == 5 )
              {
                probeCount = 2;
                v17 = 4;
              }
              goto LABEL_19;
            }
            v17 = 8;
          }
          probeCount = v18->probeCount;
LABEL_19:
          __asm
          {
            vmovups xmm0, xmmword ptr [r12]
            vmovss  dword ptr [rsp+200h+fmt], xmm6
            vmovups [rbp+100h+var_180], xmm0
          }
          R_GpuLightGrid_DrawDebug(&v79, viewInfo, v18, v17, fmt, NULL, &v18->probesBuffer, probeCount, 0, 0);
          if ( ++v16 >= v14 )
          {
            __asm { vmovaps xmm6, [rsp+200h+var_40] }
            return;
          }
        }
      }
    }
  }
  else
  {
    if ( (unsigned int)(integer - 1) > 1 && v9 == -1 && !v75 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp", 2548, ASSERT_TYPE_ASSERT, "(lgvDrawProbesMode == LGV_DRAW_PROBES_LIGHTING || lgvDrawProbesMode == LGV_DRAW_PROBES_SUN_VISIBILITY || drawEntProbes || drawSmodelProbes)", (const char *)&queryFormat, "lgvDrawProbesMode == LGV_DRAW_PROBES_LIGHTING || lgvDrawProbesMode == LGV_DRAW_PROBES_SUN_VISIBILITY || drawEntProbes || drawSmodelProbes") )
      __debugbreak();
    if ( v9 != -1 )
    {
      v22 = 0;
      if ( v10->entityDebugVolumeIndexCount > 0 )
      {
        entityDebugVolumeIndices = v10->entityDebugVolumeIndices;
        do
        {
          v24 = 0;
          v25 = 0;
          v26 = 0i64;
          if ( v10->numLightGridVolumesUsed > 0 )
          {
            v27 = 0i64;
            while ( 1 )
            {
              v28 = v10->lightGridVolumeSrcParams[v27].m_volumeSize[0] * v10->lightGridVolumeSrcParams[v27].m_volumeSize[1] * v10->lightGridVolumeSrcParams[v27].m_volumeSize[2];
              if ( v26 == *entityDebugVolumeIndices )
                break;
              v24 += v28;
              ++v25;
              ++v26;
              ++v27;
              if ( v25 >= v10->numLightGridVolumesUsed )
                goto LABEL_35;
            }
            __asm
            {
              vmovups xmm0, xmmword ptr [r12]
              vmovups [rbp+100h+var_170], xmm0
            }
            R_LGV_DrawProbesInternal(&v80, viewInfo, v10, v74, integer, v24, v28, 0);
          }
LABEL_35:
          ++v22;
          ++entityDebugVolumeIndices;
        }
        while ( v22 < v10->entityDebugVolumeIndexCount );
      }
    }
    if ( v75 )
    {
      v30 = s_world.smodels.instances[r_lgvDebugSmodelId->current.unsignedInt].lgvIndex_transientIndex >> 21;
      v76 = s_world.smodels.instances[r_lgvDebugSmodelId->current.unsignedInt].lgvIndex_transientIndex & 0x1FFFFF;
      v77 = v30;
      v31 = R_BeginWrappedBufferDataWrite(&v74->lgvDebugDirectIndexingBuffer);
      v32 = 0;
      v33 = 0i64;
      while ( 1 )
      {
        v34 = *(&v77 + 2 * v33);
        if ( (unsigned int)v34 <= s_world.draw.transientZoneCount )
        {
          v35 = s_world.draw.transientZones[v34];
          if ( v35 )
          {
            v36 = *(&v76 + 2 * v33);
            if ( v36 <= v35->gpuLightGrid.staticModelVolumeCount )
            {
              v37 = 0;
              v38 = (unsigned __int16 *)&v35->gpuLightGrid.staticModelVolumes[(unsigned __int64)v36];
              v39 = v38[2] * v38[3] * v38[4];
              if ( v39 > 0 )
                break;
            }
          }
        }
LABEL_45:
        if ( ++v33 >= 1 )
          goto LABEL_46;
      }
      v40 = v36 & 0xFFFFF;
      while ( 1 )
      {
        v41 = (unsigned int)(2 * v32);
        v31[(unsigned int)(v41 + 1)] = v34;
        ++v32;
        v31[v41] = v40 | (v37 << 20);
        if ( (unsigned int)v32 >= 0x10000 )
          break;
        if ( ++v37 >= v39 )
          goto LABEL_45;
      }
LABEL_46:
      R_EndWrappedBufferDataWrite(&v74->lgvDebugDirectIndexingBuffer);
      __asm
      {
        vmovups xmm0, xmmword ptr [r12]
        vpextrq rcx, xmm0, 1; state
      }
      v44 = R_BeginMaterial(_RCX, rgp.gpuLightGridVolumesDebugStaticMaterial, TECHNIQUE_EMISSIVE);
      v10 = v78;
      if ( v44 )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [r12]
          vmovups [rbp+100h+var_160], xmm0
        }
        if ( R_SetupPass(&v81) )
        {
          v46 = (char *)R_BeginWrappedBufferDataWrite(&v74->lgvDebugDataBuffer);
          *(_DWORD *)v46 = integer - 1;
          *(_QWORD *)(v46 + 4) = LODWORD(v10->lgvSamplingSafeZone);
          R_EndWrappedBufferDataWrite(&v74->lgvDebugDataBuffer);
          __asm
          {
            vmovups xmm0, xmmword ptr [r12]
            vmovups [rbp+100h+var_150], xmm0
          }
          R_SetupPassStableArgsInternal(&v82, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(2371)");
          __asm
          {
            vmovups xmm0, xmmword ptr [r12]
            vmovups [rbp+100h+var_140], xmm0
          }
          R_SetupPassPerObjectArgsInternal(&v83, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(2372)");
          __asm
          {
            vmovups xmm0, xmmword ptr [r12]
            vmovups [rbp+100h+var_130], xmm0
          }
          R_SetupPassPerPrimArgsInternal(&v84, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(2373)");
          if ( v32 > 0 )
          {
            __asm
            {
              vmovups xmm0, xmmword ptr [r12]
              vmovups [rbp+100h+var_120], xmm0
            }
            R_GpuLightGrid_DrawDebugSpheres(&v85, v32);
          }
        }
      }
    }
    if ( integer )
    {
      __asm { vmovups xmm0, xmmword ptr [r12] }
      debugVisibleStaticVolumeCount = v10->debugVisibleStaticVolumeCount;
      __asm { vmovups [rbp+100h+var_110], xmm0 }
      v53 = R_LGV_PrepareDebugProbeDirectIndexingBuffer(&v86, v74, v10->debugVisibleStaticVolumes, debugVisibleStaticVolumeCount);
      __asm { vmovups xmm0, xmmword ptr [r12] }
      numLightGridVolumeProbesUsed = v10->numLightGridVolumeProbesUsed;
      v56 = v53;
      __asm { vpextrq rcx, xmm0, 1; state }
      if ( !R_BeginMaterial(_RCX, rgp.gpuLightGridVolumesDebugStaticMaterial, TECHNIQUE_EMISSIVE) )
        goto LABEL_60;
      __asm
      {
        vmovups xmm0, xmmword ptr [r12]
        vmovups [rbp+100h+var_100], xmm0
      }
      if ( R_SetupPass(&v87) )
      {
        v59 = (char *)R_BeginWrappedBufferDataWrite(&v74->lgvDebugDataBuffer);
        v60 = integer;
        *(_DWORD *)v59 = integer - 1;
        *(_QWORD *)(v59 + 4) = LODWORD(v10->lgvSamplingSafeZone);
        R_EndWrappedBufferDataWrite(&v74->lgvDebugDataBuffer);
        __asm
        {
          vmovups xmm0, xmmword ptr [r12]
          vmovups [rbp+100h+var_F0], xmm0
        }
        R_SetupPassStableArgsInternal(&v88, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(2371)");
        __asm
        {
          vmovups xmm0, xmmword ptr [r12]
          vmovups [rbp+100h+var_E0], xmm0
        }
        R_SetupPassPerObjectArgsInternal(&v89, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(2372)");
        __asm
        {
          vmovups xmm0, xmmword ptr [r12]
          vmovups [rbp+100h+var_D0], xmm0
        }
        R_SetupPassPerPrimArgsInternal(&v90, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(2373)");
        if ( v56 > 0 )
        {
          __asm
          {
            vmovups xmm0, xmmword ptr [r12]
            vmovups [rbp+100h+var_C0], xmm0
          }
          R_GpuLightGrid_DrawDebugSpheres(&v91, v56);
        }
      }
      else
      {
LABEL_60:
        v60 = integer;
      }
      __asm
      {
        vmovups xmm0, xmmword ptr [r12]
        vpextrq rcx, xmm0, 1; state
      }
      if ( R_BeginMaterial(_RCX, rgp.gpuLightGridVolumesDebugMaterial, TECHNIQUE_EMISSIVE) )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [r12]
          vmovups [rbp+100h+var_B0], xmm0
        }
        if ( R_SetupPass(&v92) )
        {
          v68 = (char *)R_BeginWrappedBufferDataWrite(&v74->lgvDebugDataBuffer);
          *(_DWORD *)v68 = v60 - 1;
          *(_QWORD *)(v68 + 4) = LODWORD(v10->lgvSamplingSafeZone);
          R_EndWrappedBufferDataWrite(&v74->lgvDebugDataBuffer);
          __asm
          {
            vmovups xmm0, xmmword ptr [r12]
            vmovups [rbp+100h+var_A0], xmm0
          }
          R_SetupPassStableArgsInternal(&v93, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(2371)");
          __asm
          {
            vmovups xmm0, xmmword ptr [r12]
            vmovups [rbp+100h+var_90], xmm0
          }
          R_SetupPassPerObjectArgsInternal(&v94, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(2372)");
          __asm
          {
            vmovups xmm0, xmmword ptr [r12]
            vmovups [rbp+100h+var_80], xmm0
          }
          R_SetupPassPerPrimArgsInternal(&v95, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(2373)");
          if ( numLightGridVolumeProbesUsed > 0 )
          {
            __asm
            {
              vmovups xmm0, xmmword ptr [r12]
              vmovups [rbp+100h+var_70], xmm0
            }
            R_GpuLightGrid_DrawDebugSpheres(&v96, numLightGridVolumeProbesUsed);
          }
        }
      }
    }
  }
}

/*
==============
R_LGV_DrawProbesInternal
==============
*/
void R_LGV_DrawProbesInternal(GfxCmdBufContext *context, const GfxViewInfo *viewInfo, LightGridVolumeFrameData *frameData, LightGridVolumeGfxBuffers *gfxBuffers, int lightGridVolumesDebugMode, int sphereIndexShift, int numSpheresToRender, bool drawStatic)
{
  Material *gpuLightGridVolumesDebugMaterial; 
  GfxCmdBufState *state; 
  _DWORD *v14; 
  GfxCmdBufContext v19; 

  gpuLightGridVolumesDebugMaterial = rgp.gpuLightGridVolumesDebugMaterial;
  _RDI = context;
  state = context->state;
  if ( drawStatic )
    gpuLightGridVolumesDebugMaterial = rgp.gpuLightGridVolumesDebugStaticMaterial;
  if ( R_BeginMaterial(state, gpuLightGridVolumesDebugMaterial, TECHNIQUE_EMISSIVE) )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rdi]
      vmovups xmmword ptr [rsp+38h+var_18.source], xmm0
    }
    if ( R_SetupPass(&v19) )
    {
      v14 = R_BeginWrappedBufferDataWrite(&gfxBuffers->lgvDebugDataBuffer);
      *v14 = lightGridVolumesDebugMode - 1;
      v14[1] = LODWORD(frameData->lgvSamplingSafeZone);
      v14[2] = sphereIndexShift;
      R_EndWrappedBufferDataWrite(&gfxBuffers->lgvDebugDataBuffer);
      __asm
      {
        vmovups xmm0, xmmword ptr [rdi]
        vmovups xmmword ptr [rsp+38h+var_18.source], xmm0
      }
      R_SetupPassStableArgsInternal(&v19, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(2371)");
      __asm
      {
        vmovups xmm0, xmmword ptr [rdi]
        vmovups xmmword ptr [rsp+38h+var_18.source], xmm0
      }
      R_SetupPassPerObjectArgsInternal(&v19, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(2372)");
      __asm
      {
        vmovups xmm0, xmmword ptr [rdi]
        vmovups xmmword ptr [rsp+38h+var_18.source], xmm0
      }
      R_SetupPassPerPrimArgsInternal(&v19, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(2373)");
      if ( numSpheresToRender > 0 )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [rdi]
          vmovups xmmword ptr [rsp+38h+var_18.source], xmm0
        }
        R_GpuLightGrid_DrawDebugSpheres(&v19, numSpheresToRender);
      }
    }
  }
}

/*
==============
R_LGV_DrawProbes_Enabled
==============
*/
bool R_LGV_DrawProbes_Enabled(const GfxViewInfo *viewInfo)
{
  return rg.useLightGridVolumes && (r_lgvDrawProbes->current.integer || r_lgvDebugEnt->current.integer != -1 || r_lgvDebugSmodelId->current.integer) && RB_GpuLightGrid_DataAvailable(viewInfo);
}

/*
==============
R_LGV_DrawVolumes
==============
*/
void R_LGV_DrawVolumes(vec3_t *cameraPos)
{
  LightGridVolumeFrameData *v3; 
  __int64 unsignedInt; 
  unsigned int lgvIndex_transientIndex; 
  unsigned int v7; 
  __int64 v8; 
  GfxWorldTransientZone *v9; 
  unsigned __int64 v10; 
  float v13; 
  int v14; 
  int v15; 
  int *entityDebugVolumeIndices; 
  __int64 v17; 
  int integer; 
  char v22; 
  __int64 numLightGridVolumesUsed; 
  __int64 v24; 
  float v27; 
  float v29; 
  __int64 debugVisibleStaticVolumeCount; 
  unsigned int *debugVisibleStaticVolumes; 
  __int64 v32; 
  GfxWorldTransientZone *v33; 
  unsigned int v34; 
  unsigned __int64 v35; 
  float v38; 
  bool v40; 
  vec3_t v41; 
  vec3_t v42; 
  vec3_t v43; 
  vec3_t v44; 
  vec3_t v45; 
  vec3_t v46; 
  vec3_t v47; 
  vec3_t v48; 

  __asm { vmovaps [rsp+0F0h+var_30], xmm6 }
  _RSI = cameraPos;
  v3 = &lgvGlob.frameData[lgvGlob.smpFrame];
  __asm { vxorps  xmm6, xmm6, xmm6 }
  unsignedInt = r_lgvDebugSmodelId->current.unsignedInt;
  if ( (int)unsignedInt > 0 )
  {
    lgvIndex_transientIndex = s_world.smodels.instances[unsignedInt].lgvIndex_transientIndex;
    v7 = lgvIndex_transientIndex & 0x1FFFFF;
    v8 = lgvIndex_transientIndex >> 21;
    if ( (unsigned int)v8 < s_world.draw.transientZoneCount )
    {
      v9 = s_world.draw.transientZones[v8];
      if ( v9 )
      {
        if ( v7 < v9->gpuLightGrid.staticModelVolumeCount )
        {
          v10 = (unsigned __int64)&v9->gpuLightGrid.staticModelVolumes[(unsigned __int64)v7];
          __asm
          {
            vunpcklps xmm0, xmm6, xmm6
            vmovsd  [rbp+57h+var_B0], xmm0
            vmovsd  xmm0, qword ptr [rsi]
            vmovss  [rbp+57h+var_38], xmm6
          }
          v41.v[2] = v48.v[2];
          v13 = _RSI->v[2];
          __asm { vmovsd  [rbp+57h+var_A0], xmm0 }
          v42.v[2] = v13;
          R_LGV_DrawSingleVolume_unsigned_short_(&v42, (const vec4_t *)(v10 + 16), &v41, (const unsigned __int16 *)(v10 + 4), v7, 1, 1);
        }
      }
    }
  }
  v14 = 0;
  if ( r_lgvDebugEnt->current.integer != -1 )
  {
    v15 = 0;
    if ( v3->entityDebugVolumeIndexCount > 0 )
    {
      entityDebugVolumeIndices = v3->entityDebugVolumeIndices;
      do
      {
        v17 = *entityDebugVolumeIndices;
        _RDX = (__int64)&v3->lightGridVolumeSrcParams[v17];
        __asm { vmovsd  xmm0, qword ptr [rdx+44h] }
        v43.v[2] = *(float *)(_RDX + 76);
        v44.v[2] = _RSI->v[2];
        v40 = *(int *)(_RDX + 56) < 0;
        __asm
        {
          vmovsd  [rbp+57h+var_90], xmm0
          vmovsd  xmm0, qword ptr [rsi]
          vmovsd  [rbp+57h+var_80], xmm0
        }
        R_LGV_DrawSingleVolume_unsigned_char_(&v44, (const vec4_t *)_RDX, &v43, (const unsigned __int8 *)(_RDX + 48), v17, 1, v40);
        ++v15;
        ++entityDebugVolumeIndices;
      }
      while ( v15 < v3->entityDebugVolumeIndexCount );
    }
  }
  integer = r_lgvDrawVolumes->current.integer;
  if ( integer )
  {
    v22 = integer & 1;
    if ( (integer & 2) != 0 )
    {
      numLightGridVolumesUsed = v3->numLightGridVolumesUsed;
      if ( (int)numLightGridVolumesUsed > 0 )
      {
        v24 = 0i64;
        do
        {
          _RDX = &v3->lightGridVolumeSrcParams[v24];
          __asm { vmovsd  xmm0, qword ptr [rdx+44h] }
          v27 = _RDX->m_samplingOffset.v[2];
          __asm
          {
            vmovsd  [rbp+57h+var_70], xmm0
            vmovsd  xmm0, qword ptr [rsi]
          }
          v45.v[2] = v27;
          v29 = _RSI->v[2];
          __asm { vmovsd  [rbp+57h+var_60], xmm0 }
          v46.v[2] = v29;
          R_LGV_DrawSingleVolume_unsigned_char_(&v46, _RDX->m_volumeTransform, &v45, _RDX->m_volumeSize, v14++, 1, 0);
          ++v24;
          --numLightGridVolumesUsed;
        }
        while ( numLightGridVolumesUsed );
      }
    }
    if ( v22 )
    {
      debugVisibleStaticVolumeCount = v3->debugVisibleStaticVolumeCount;
      if ( (int)debugVisibleStaticVolumeCount > 0 )
      {
        debugVisibleStaticVolumes = (unsigned int *)v3->debugVisibleStaticVolumes;
        do
        {
          v32 = debugVisibleStaticVolumes[1];
          if ( (unsigned int)v32 <= s_world.draw.transientZoneCount )
          {
            v33 = s_world.draw.transientZones[v32];
            if ( v33 )
            {
              v34 = *debugVisibleStaticVolumes;
              if ( *debugVisibleStaticVolumes < v33->gpuLightGrid.staticModelVolumeCount )
              {
                v35 = (unsigned __int64)&v33->gpuLightGrid.staticModelVolumes[(unsigned __int64)v34];
                __asm
                {
                  vunpcklps xmm0, xmm6, xmm6
                  vmovsd  [rbp+57h+var_50], xmm0
                  vmovsd  xmm0, qword ptr [rsi]
                  vmovss  [rbp+57h+var_58], xmm6
                }
                v47.v[2] = v46.v[2];
                v38 = _RSI->v[2];
                __asm { vmovsd  [rbp+57h+var_40], xmm0 }
                v48.v[2] = v38;
                R_LGV_DrawSingleVolume_unsigned_short_(&v48, (const vec4_t *)(v35 + 16), &v47, (const unsigned __int16 *)(v35 + 4), v34, 1, 1);
              }
            }
          }
          debugVisibleStaticVolumes += 2;
          --debugVisibleStaticVolumeCount;
        }
        while ( debugVisibleStaticVolumeCount );
      }
    }
  }
  __asm { vmovaps xmm6, [rsp+0F0h+var_30] }
}

/*
==============
R_LGV_DumpSceneEnt
==============
*/
void R_LGV_DumpSceneEnt(const GfxSceneEntity *sceneEnt, LightGridVolumeSrcParams *params)
{
  unsigned int dumpXModels; 
  __int64 v4; 
  const DObj *obj; 
  __int64 i; 
  int v7; 
  int v8; 

  dumpXModels = lgvGlob.frameData[lgvGlob.smpFrame].dumpXModels;
  if ( dumpXModels )
  {
    v4 = params->m_volumeSize[0];
    if ( (unsigned int)v4 >= dumpXModels || params->m_volumeSize[1] >= dumpXModels || params->m_volumeSize[2] >= dumpXModels )
    {
      v8 = params->m_volumeSize[2];
      v7 = params->m_volumeSize[1];
      Com_Printf(8, "SceneEnt: %u (LGV Dim: %ux%ux%u)\n", (*((_DWORD *)sceneEnt + 346) >> 10) & 0xFFF, v4, v7, v8);
      obj = sceneEnt->obj;
      for ( i = 0i64; (unsigned int)i < obj->numModels; i = (unsigned int)(i + 1) )
      {
        Com_Printf(8, "%u: %s\n", (unsigned int)i, obj->models[i]->name);
        obj = sceneEnt->obj;
      }
    }
  }
}

/*
==============
R_LGV_EncodeLastFrameEntryAndSetup
==============
*/
__int64 R_LGV_EncodeLastFrameEntryAndSetup(unsigned int lgvModifierFlags, const GpuLightGridRequestRecord *lastRequest)
{
  if ( (lgvModifierFlags & 0x10) != 0 || !lastRequest || lastRequest->lgvHistoryEntry == 0xFFFF || lastRequest->lgvFrame + 1 != lgvGlob.globalFrame )
    return 0xFFFFi64;
  if ( lastRequest->lgvBasisType > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp", 997, ASSERT_TYPE_ASSERT, "(lastRequest->lgvBasisType <= ( ( 1 << 1 ) - 1 ))", (const char *)&queryFormat, "lastRequest->lgvBasisType <= LIGHTGRID_VOLUME_HISTORY_BASIS_MASK") )
    __debugbreak();
  if ( lastRequest->lgvNumProbes > 0xFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp", 998, ASSERT_TYPE_ASSERT, "(lastRequest->lgvNumProbes <= ( ( 1 << 12 ) - 1 ))", (const char *)&queryFormat, "lastRequest->lgvNumProbes <= LIGHTGRID_VOLUME_HISTORY_NUM_PROBES_MASK") )
    __debugbreak();
  if ( lastRequest->lgvHistoryEntry >= 0x80000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp", 999, ASSERT_TYPE_ASSERT, "(( lastRequest->lgvHistoryEntry == 0xFFFF ) || ( lastRequest->lgvHistoryEntry <= ( ( 1 << 19 ) - 1 ) ))", (const char *)&queryFormat, "( lastRequest->lgvHistoryEntry == LIGHTGRID_VOLUME_HISTORY_INDEX_INVALID ) || ( lastRequest->lgvHistoryEntry <= LIGHTGRID_VOLUME_HISTORY_ENTRY_MASK )") )
    __debugbreak();
  return lastRequest->lgvHistoryEntry | ((lastRequest->lgvNumProbes | (lastRequest->lgvBasisType << 12)) << 19);
}

/*
==============
R_LGV_FreeSamplingBuffers
==============
*/

void __fastcall R_LGV_FreeSamplingBuffers(double _XMM0_8)
{
  __int64 v2; 
  R_RT_Handle v42; 

  _RBX = &lgvGlob.samplingBuffers[0].lightGridVolumeActiveLightGrids;
  v2 = 2i64;
  do
  {
    if ( R_RT_Handle::IsValid(_RBX - 2) )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbx-40h]
        vmovups [rbp+var_20], ymm0
      }
      R_RT_DestroyInternal(&v42);
      __asm
      {
        vmovups ymm0, ymmword ptr [rbx-20h]
        vmovups [rbp+var_20], ymm0
      }
      R_RT_DestroyInternal(&v42);
      __asm
      {
        vmovups ymm0, ymmword ptr [rbx]
        vmovups [rbp+var_20], ymm0
      }
      R_RT_DestroyInternal(&v42);
      __asm
      {
        vmovups ymm0, ymmword ptr [rbx+20h]
        vmovups [rbp+var_20], ymm0
      }
      R_RT_DestroyInternal(&v42);
      v42.m_surfaceID = 0;
      v42.m_tracking.m_allocCounter = 0;
      __asm
      {
        vpxor   xmm0, xmm0, xmm0
        vmovdqu xmmword ptr [rbp+var_20+10h], xmm0
        vmovups ymm1, [rbp+var_20]
      }
      v42.m_surfaceID = 0;
      v42.m_tracking.m_allocCounter = 0;
      __asm
      {
        vmovdqu xmmword ptr [rbp+var_20+10h], xmm0
        vmovups ymmword ptr [rbx-40h], ymm1
        vmovups ymm1, [rbp+var_20]
      }
      v42.m_surfaceID = 0;
      v42.m_tracking.m_allocCounter = 0;
      __asm
      {
        vmovdqu xmmword ptr [rbp+var_20+10h], xmm0
        vmovups ymmword ptr [rbx-20h], ymm1
        vmovups ymm1, [rbp+var_20]
        vmovups ymmword ptr [rbx], ymm1
      }
      v42.m_surfaceID = 0;
      v42.m_tracking.m_allocCounter = 0;
      __asm
      {
        vmovdqu xmmword ptr [rbp+var_20+10h], xmm0
        vmovups ymm1, [rbp+var_20]
        vmovups ymmword ptr [rbx+20h], ymm1
      }
    }
    _RBX += 4;
    --v2;
  }
  while ( v2 );
  if ( lgvGlob.samplingPrepBuffers.lightGridVolumeCount.m_surfaceID )
  {
    R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.lightGridVolumeCount);
    __asm
    {
      vmovups ymm0, ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.lightGridVolumeCount.baseclass_0.m_surfaceID; LightGridVolumeGlob lgvGlob
      vmovups [rbp+var_20], ymm0
    }
    R_RT_DestroyInternal(&v42);
    __asm
    {
      vmovups ymm0, ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.samplingBufferOffsets1.baseclass_0.m_surfaceID; LightGridVolumeGlob lgvGlob
      vmovups [rbp+var_20], ymm0
    }
    R_RT_DestroyInternal(&v42);
    __asm
    {
      vmovups ymm0, ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.samplingBufferOffsets2.baseclass_0.m_surfaceID; LightGridVolumeGlob lgvGlob
      vmovups [rbp+var_20], ymm0
    }
    R_RT_DestroyInternal(&v42);
    __asm
    {
      vmovups ymm0, ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.lightGridVolumesList.baseclass_0.m_surfaceID; LightGridVolumeGlob lgvGlob
      vmovups [rbp+var_20], ymm0
    }
    R_RT_DestroyInternal(&v42);
    __asm
    {
      vmovups ymm0, ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.lightgridVolumeCounts1.baseclass_0.m_surfaceID; LightGridVolumeGlob lgvGlob
      vmovups [rbp+var_20], ymm0
    }
    R_RT_DestroyInternal(&v42);
    __asm
    {
      vmovups ymm0, ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.lightgridVolumeCounts2.baseclass_0.m_surfaceID; LightGridVolumeGlob lgvGlob
      vmovups [rbp+var_20], ymm0
    }
    R_RT_DestroyInternal(&v42);
    __asm
    {
      vmovups ymm0, ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.lightGridVolumeIndexingBuffer.baseclass_0.m_surfaceID; LightGridVolumeGlob lgvGlob
      vmovups [rbp+var_20], ymm0
    }
    R_RT_DestroyInternal(&v42);
    __asm
    {
      vmovups ymm0, ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.lightGridProbeOffset.baseclass_0.m_surfaceID; LightGridVolumeGlob lgvGlob
      vmovups [rbp+var_20], ymm0
    }
    R_RT_DestroyInternal(&v42);
    __asm
    {
      vmovups ymm0, ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.lightgridProbeCounts1.baseclass_0.m_surfaceID; LightGridVolumeGlob lgvGlob
      vmovups [rbp+var_20], ymm0
    }
    R_RT_DestroyInternal(&v42);
    __asm
    {
      vmovups ymm0, ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.lightgridProbeCounts2.baseclass_0.m_surfaceID; LightGridVolumeGlob lgvGlob
      vmovups [rbp+var_20], ymm0
    }
    R_RT_DestroyInternal(&v42);
    __asm
    {
      vmovups ymm0, ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.globalVolumeIndexingBuffer.baseclass_0.m_surfaceID; LightGridVolumeGlob lgvGlob
      vmovups [rbp+var_20], ymm0
    }
    R_RT_DestroyInternal(&v42);
    __asm
    {
      vmovups ymm0, ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.globalProbeOffset.baseclass_0.m_surfaceID; LightGridVolumeGlob lgvGlob
      vmovups [rbp+var_20], ymm0
    }
    R_RT_DestroyInternal(&v42);
    __asm
    {
      vmovups ymm0, ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.globalProbeOffsets1.baseclass_0.m_surfaceID; LightGridVolumeGlob lgvGlob
      vmovups [rbp+var_20], ymm0
    }
    R_RT_DestroyInternal(&v42);
    __asm
    {
      vmovups ymm0, ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.globalProbeOffsets2.baseclass_0.m_surfaceID; LightGridVolumeGlob lgvGlob
      vmovups [rbp+var_20], ymm0
    }
    R_RT_DestroyInternal(&v42);
    __asm
    {
      vmovups ymm0, ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.indirectDispatchParams.baseclass_0.m_surfaceID; LightGridVolumeGlob lgvGlob
      vmovups [rbp+var_20], ymm0
    }
    R_RT_DestroyInternal(&v42);
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rbp+var_20+10h], xmm0
    }
    v42.m_surfaceID = 0;
    v42.m_tracking.m_allocCounter = 0;
    __asm { vmovups ymm1, [rbp+var_20] }
    v42.m_surfaceID = 0;
    v42.m_tracking.m_allocCounter = 0;
    __asm
    {
      vmovdqu xmmword ptr [rbp+var_20+10h], xmm0
      vmovups ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.lightGridVolumeCount.baseclass_0.m_surfaceID, ymm1; LightGridVolumeGlob lgvGlob
      vmovups ymm1, [rbp+var_20]
    }
    v42.m_surfaceID = 0;
    v42.m_tracking.m_allocCounter = 0;
    __asm
    {
      vmovdqu xmmword ptr [rbp+var_20+10h], xmm0
      vmovups ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.samplingBufferOffsets1.baseclass_0.m_surfaceID, ymm1; LightGridVolumeGlob lgvGlob
      vmovups ymm1, [rbp+var_20]
      vmovups ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.samplingBufferOffsets2.baseclass_0.m_surfaceID, ymm1; LightGridVolumeGlob lgvGlob
    }
    v42.m_surfaceID = 0;
    v42.m_tracking.m_allocCounter = 0;
    __asm
    {
      vmovdqu xmmword ptr [rbp+var_20+10h], xmm0
      vmovups ymm1, [rbp+var_20]
    }
    v42.m_surfaceID = 0;
    v42.m_tracking.m_allocCounter = 0;
    __asm
    {
      vmovdqu xmmword ptr [rbp+var_20+10h], xmm0
      vmovups ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.lightGridVolumesList.baseclass_0.m_surfaceID, ymm1; LightGridVolumeGlob lgvGlob
      vmovups ymm1, [rbp+var_20]
    }
    v42.m_surfaceID = 0;
    v42.m_tracking.m_allocCounter = 0;
    __asm
    {
      vmovdqu xmmword ptr [rbp+var_20+10h], xmm0
      vmovups ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.lightgridVolumeCounts1.baseclass_0.m_surfaceID, ymm1; LightGridVolumeGlob lgvGlob
      vmovups ymm1, [rbp+var_20]
    }
    v42.m_surfaceID = 0;
    v42.m_tracking.m_allocCounter = 0;
    __asm
    {
      vmovdqu xmmword ptr [rbp+var_20+10h], xmm0
      vmovups ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.lightgridVolumeCounts2.baseclass_0.m_surfaceID, ymm1; LightGridVolumeGlob lgvGlob
      vmovups ymm1, [rbp+var_20]
    }
    v42.m_surfaceID = 0;
    v42.m_tracking.m_allocCounter = 0;
    __asm
    {
      vmovdqu xmmword ptr [rbp+var_20+10h], xmm0
      vmovups ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.lightGridVolumeIndexingBuffer.baseclass_0.m_surfaceID, ymm1; LightGridVolumeGlob lgvGlob
      vmovups ymm1, [rbp+var_20]
    }
    v42.m_surfaceID = 0;
    v42.m_tracking.m_allocCounter = 0;
    __asm
    {
      vmovdqu xmmword ptr [rbp+var_20+10h], xmm0
      vmovups ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.lightGridProbeOffset.baseclass_0.m_surfaceID, ymm1; LightGridVolumeGlob lgvGlob
      vmovups ymm1, [rbp+var_20]
    }
    v42.m_surfaceID = 0;
    v42.m_tracking.m_allocCounter = 0;
    __asm
    {
      vmovdqu xmmword ptr [rbp+var_20+10h], xmm0
      vmovups ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.lightgridProbeCounts1.baseclass_0.m_surfaceID, ymm1; LightGridVolumeGlob lgvGlob
      vmovups ymm1, [rbp+var_20]
    }
    v42.m_surfaceID = 0;
    v42.m_tracking.m_allocCounter = 0;
    __asm
    {
      vmovdqu xmmword ptr [rbp+var_20+10h], xmm0
      vmovups ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.lightgridProbeCounts2.baseclass_0.m_surfaceID, ymm1; LightGridVolumeGlob lgvGlob
      vmovups ymm1, [rbp+var_20]
    }
    v42.m_surfaceID = 0;
    v42.m_tracking.m_allocCounter = 0;
    __asm
    {
      vmovdqu xmmword ptr [rbp+var_20+10h], xmm0
      vmovups ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.globalVolumeIndexingBuffer.baseclass_0.m_surfaceID, ymm1; LightGridVolumeGlob lgvGlob
      vmovups ymm1, [rbp+var_20]
    }
    v42.m_surfaceID = 0;
    v42.m_tracking.m_allocCounter = 0;
    __asm
    {
      vmovdqu xmmword ptr [rbp+var_20+10h], xmm0
      vmovups ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.globalProbeOffset.baseclass_0.m_surfaceID, ymm1; LightGridVolumeGlob lgvGlob
      vmovups ymm1, [rbp+var_20]
    }
    v42.m_surfaceID = 0;
    v42.m_tracking.m_allocCounter = 0;
    __asm
    {
      vmovdqu xmmword ptr [rbp+var_20+10h], xmm0
      vmovups ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.globalProbeOffsets1.baseclass_0.m_surfaceID, ymm1; LightGridVolumeGlob lgvGlob
      vmovups ymm1, [rbp+var_20]
      vmovups ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.globalProbeOffsets2.baseclass_0.m_surfaceID, ymm1; LightGridVolumeGlob lgvGlob
    }
    v42.m_surfaceID = 0;
    v42.m_tracking.m_allocCounter = 0;
    __asm
    {
      vmovdqu xmmword ptr [rbp+var_20+10h], xmm0
      vmovups ymm1, [rbp+var_20]
      vmovups ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.indirectDispatchParams.baseclass_0.m_surfaceID, ymm1; LightGridVolumeGlob lgvGlob
    }
  }
  else if ( lgvGlob.samplingPrepBuffers.lightGridVolumeCount.m_tracking.m_allocCounter )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
}

/*
==============
R_LGV_GenerateActiveLightGridsMask
==============
*/
void R_LGV_GenerateActiveLightGridsMask(ComputeCmdBufState *state, const GfxBackEndData *data, const GfxViewInfo *viewInfo, const GfxWrappedRWBuffer *lightGridVolumeActiveLightGrids)
{
  __int64 smpFrame; 
  GfxShaderBufferView *v8; 
  GfxShaderBufferView *v9; 
  GfxShaderBufferRWView *p_rwView; 
  ID3D12Resource *buffers; 
  GfxShaderBufferView *views; 

  smpFrame = data->smpFrame;
  R_SetComputeShader(state, rgp.findLightGridsToSample);
  buffers = lgvGlob.gfxBuffers[data->shLightingIndex].sampleLightGridVolumeLightingConsts.buffer;
  R_SetComputeConstantBuffers(state, 0, 1, &buffers);
  views = &R_GetActiveLightGrids(data)->view;
  R_SetComputeViews(state, 0, 1, (const GfxShaderBufferView *const *)&views);
  v8 = &lgvGlob.gfxBuffers[0].lightGridVolumeTransformParams.view + 12 * data->shLightingIndex;
  R_SetComputeViews(state, 1, 1, (const GfxShaderBufferView *const *)&v8);
  v9 = &lgvGlob.gfxBuffers[0].lightGridVolumePackingParams.view + 12 * data->shLightingIndex;
  R_SetComputeViews(state, 2, 1, (const GfxShaderBufferView *const *)&v9);
  p_rwView = &lightGridVolumeActiveLightGrids->rwView;
  R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&p_rwView, NULL);
  R_Dispatch(state, (lgvGlob.frameData[smpFrame].numLightGridVolumesUsed + 63) / 64, 1u, 1u);
}

/*
==============
R_LGV_GenerateLightGridSamplingLists
==============
*/
void R_LGV_GenerateLightGridSamplingLists(ComputeCmdBufState *state, const GfxBackEndData *data, const GfxViewInfo *viewInfo)
{
  const R_RT_Surface *v5; 
  const R_RT_Surface *v6; 
  const R_RT_Surface *v7; 
  GfxShaderBufferView *v8; 
  __int64 smpFrame; 
  GfxShaderBufferView *v14; 
  GfxShaderBufferView *v15; 
  GfxShaderBufferView *v16; 
  GfxShaderBufferView *v17; 
  __int64 v18; 
  const R_RT_Surface *v27; 
  const R_RT_Surface *v28; 
  const R_RT_Surface *v29; 
  const R_RT_Surface *v30; 
  const R_RT_Surface *v31; 
  const R_RT_Surface *v32; 
  const GfxWrappedRWBuffer *samplingBufferOffsets1; 
  const R_RT_Surface *v34; 
  const GfxWrappedRWBuffer *lightgridVolumeCounts2; 
  const R_RT_Surface *v36; 
  const GfxWrappedRWBuffer *lightgridProbeCounts2; 
  const R_RT_Surface *v38; 
  const GfxWrappedRWBuffer *v39; 
  const R_RT_Surface *v40; 
  const R_RT_Surface *v47; 
  const R_RT_Surface *v48; 
  const R_RT_Surface *v49; 
  const R_RT_Surface *v50; 
  const R_RT_Surface *v51; 
  const GfxWrappedRWBuffer *v52; 
  const R_RT_Surface *v53; 
  const GfxWrappedRWBuffer *v54; 
  const R_RT_Surface *v55; 
  const GfxWrappedRWBuffer *v56; 
  const R_RT_Surface *v57; 
  const GfxWrappedRWBuffer *v58; 
  const R_RT_Surface *v59; 
  const R_RT_Surface *v66; 
  const R_RT_Surface *v67; 
  const GfxWrappedRWBuffer *v68; 
  const R_RT_Surface *v69; 
  const GfxWrappedRWBuffer *v70; 
  const R_RT_Surface *v71; 
  const GfxWrappedRWBuffer *v72; 
  const R_RT_Surface *v73; 
  const GfxWrappedRWBuffer *v74; 
  const R_RT_Surface *v75; 
  GfxShaderBufferRWView *Surface; 
  GfxShaderBufferRWView *lightgridProbeCounts1; 
  GfxShaderBufferRWView *lightgridVolumeCounts1; 
  GfxShaderBufferRWView *v81; 
  GfxShaderBufferRWView *globalProbeOffsets1; 
  GfxShaderBufferView *v83; 
  GfxShaderBufferRWView *p_rwView; 
  GfxShaderBufferRWView *v85; 
  ID3D12Resource *buffer; 
  GfxShaderBufferView *v87; 
  GfxShaderBufferView *v88; 
  GfxShaderBufferView *v89; 
  GfxShaderBufferView *v90; 
  GfxShaderBufferRWView *v91; 
  R_RT_Handle v92; 
  R_RT_Handle v93; 
  R_RT_Handle v94; 
  R_RT_Handle v95; 
  R_RT_Handle v96; 
  R_RT_Handle v97; 
  R_RT_Handle v98; 
  R_RT_Handle v99; 
  R_RT_Handle v100; 
  R_RT_Handle v101; 
  R_RT_Handle v102; 
  R_RT_Handle v103; 
  R_RT_Handle v104; 
  R_RT_Handle v105; 
  R_RT_Handle v106; 
  R_RT_Handle v107; 
  R_RT_Handle v108; 
  R_RT_Handle v109; 
  R_RT_Handle v110; 
  R_RT_Handle v111; 
  R_RT_Handle v112; 
  R_RT_Handle v113; 
  R_RT_Handle v114; 
  R_RT_Handle v115; 
  ID3D12Resource *buffers; 
  GfxViewInfo *viewInfoa; 
  GfxShaderBufferView *views; 

  viewInfoa = (GfxViewInfo *)viewInfo;
  R_FlushResourceTransitions(state);
  Surface = (GfxShaderBufferRWView *)R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.lightgridVolumeCounts1);
  if ( ((__int64)Surface->rwCounterResource & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v5 = R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.lightgridProbeCounts1);
  if ( (v5->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v6 = R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.globalProbeOffsets1);
  if ( (v6->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v7 = R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.samplingBufferOffsets1);
  if ( (v7->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v8 = (GfxShaderBufferView *)R_RT_Handle::GetSurface(&lgvGlob.samplingBuffers[(unsigned __int64)data->shLightingIndex].lightGridVolumeActiveLightGrids);
  if ( (v8->view & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  smpFrame = data->smpFrame;
  R_SetComputeShader(state, rgp.computeLightGridSamplingOffsetsBase);
  buffers = lgvGlob.gfxBuffers[data->shLightingIndex].sampleLightGridVolumeLightingConsts.buffer;
  R_SetComputeConstantBuffers(state, 0, 1, &buffers);
  views = v8 + 68;
  R_SetComputeViews(state, 0, 1, (const GfxShaderBufferView *const *)&views);
  v83 = &lgvGlob.gfxBuffers[0].lightGridVolumePackingParams.view + 12 * data->shLightingIndex;
  R_SetComputeViews(state, 1, 1, (const GfxShaderBufferView *const *)&v83);
  p_rwView = &v7->m_buffer.m_wrappedBuffer.rwView;
  R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&p_rwView, NULL);
  v85 = &v6->m_buffer.m_wrappedBuffer.rwView;
  R_SetComputeRWViewsWithCounters(state, 1, 1, (const GfxShaderBufferRWView *const *)&v85, NULL);
  v81 = &v5->m_buffer.m_wrappedBuffer.rwView;
  R_SetComputeRWViewsWithCounters(state, 2, 1, (const GfxShaderBufferRWView *const *)&v81, NULL);
  Surface = (GfxShaderBufferRWView *)((char *)Surface + 1112);
  R_SetComputeRWViewsWithCounters(state, 3, 1, (const GfxShaderBufferRWView *const *)&Surface, NULL);
  R_Dispatch(state, (lgvGlob.frameData[smpFrame].numLightGridVolumesUsed + 63) / 64, 1u, 1u);
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.samplingBufferOffsets1.baseclass_0.m_surfaceID; LightGridVolumeGlob lgvGlob
    vmovups [rbp+310h+var_330], ymm0
  }
  R_HW_AddResourceTransition(state, &v92, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.globalProbeOffsets1.baseclass_0.m_surfaceID; LightGridVolumeGlob lgvGlob
    vmovups [rbp+310h+var_310], ymm0
  }
  R_HW_AddResourceTransition(state, &v93, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.lightgridProbeCounts1.baseclass_0.m_surfaceID; LightGridVolumeGlob lgvGlob
    vmovups [rbp+310h+var_2F0], ymm0
  }
  R_HW_AddResourceTransition(state, &v94, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.lightgridVolumeCounts1.baseclass_0.m_surfaceID; LightGridVolumeGlob lgvGlob
    vmovups [rbp+310h+var_2D0], ymm0
  }
  R_HW_AddResourceTransition(state, &v95, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_ComputeWaitForCompute(state, PIPE_FLUSH_PARTIAL);
  R_FlushResourceTransitions(state);
  v81 = (GfxShaderBufferRWView *)R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.lightgridVolumeCounts2);
  if ( ((__int64)v81->rwCounterResource & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  Surface = (GfxShaderBufferRWView *)R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.lightgridProbeCounts2);
  if ( ((__int64)Surface->rwCounterResource & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  views = (GfxShaderBufferView *)R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.globalProbeOffsets2);
  if ( (views->view & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  buffers = (ID3D12Resource *)R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.samplingBufferOffsets2);
  if ( (*((_DWORD *)&buffers->IGraphicsUnknown + 2) & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v14 = (GfxShaderBufferView *)R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.lightgridVolumeCounts1);
  if ( (v14->view & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v15 = (GfxShaderBufferView *)R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.lightgridProbeCounts1);
  if ( (v15->view & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v16 = (GfxShaderBufferView *)R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.globalProbeOffsets1);
  if ( (v16->view & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v17 = (GfxShaderBufferView *)R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.samplingBufferOffsets1);
  if ( (v17->view & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v18 = data->smpFrame;
  R_SetComputeShader(state, rgp.computeLightGridSamplingOffsetsDownsweep);
  buffer = lgvGlob.gfxBuffers[data->shLightingIndex].sampleLightGridVolumeLightingConsts.buffer;
  R_SetComputeConstantBuffers(state, 0, 1, &buffer);
  v87 = v17 + 68;
  R_SetComputeViews(state, 0, 1, (const GfxShaderBufferView *const *)&v87);
  v88 = v16 + 68;
  R_SetComputeViews(state, 1, 1, (const GfxShaderBufferView *const *)&v88);
  v89 = v15 + 68;
  R_SetComputeViews(state, 2, 1, (const GfxShaderBufferView *const *)&v89);
  v90 = v14 + 68;
  R_SetComputeViews(state, 3, 1, (const GfxShaderBufferView *const *)&v90);
  v91 = (GfxShaderBufferRWView *)((char *)&buffers[69].IGraphicsUnknown + 8);
  R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&v91, NULL);
  globalProbeOffsets1 = (GfxShaderBufferRWView *)&views[69].view;
  R_SetComputeRWViewsWithCounters(state, 1, 1, (const GfxShaderBufferRWView *const *)&globalProbeOffsets1, NULL);
  lightgridProbeCounts1 = (GfxShaderBufferRWView *)((char *)Surface + 1112);
  R_SetComputeRWViewsWithCounters(state, 2, 1, (const GfxShaderBufferRWView *const *)&lightgridProbeCounts1, NULL);
  lightgridVolumeCounts1 = (GfxShaderBufferRWView *)((char *)v81 + 1112);
  R_SetComputeRWViewsWithCounters(state, 3, 1, (const GfxShaderBufferRWView *const *)&lightgridVolumeCounts1, NULL);
  R_Dispatch(state, (unsigned int)((lgvGlob.frameData[v18].numLightGridVolumesUsed + 63) / 64 + 63) >> 6, 1u, 1u);
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.samplingBufferOffsets1.baseclass_0.m_surfaceID; LightGridVolumeGlob lgvGlob
    vmovups [rbp+310h+var_2B0], ymm0
  }
  R_HW_AddResourceTransition(state, &v96, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.globalProbeOffsets1.baseclass_0.m_surfaceID; LightGridVolumeGlob lgvGlob
    vmovups [rbp+310h+var_290], ymm0
  }
  R_HW_AddResourceTransition(state, &v97, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.lightgridProbeCounts1.baseclass_0.m_surfaceID; LightGridVolumeGlob lgvGlob
    vmovups [rbp+310h+var_270], ymm0
  }
  R_HW_AddResourceTransition(state, &v98, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.lightgridVolumeCounts1.baseclass_0.m_surfaceID; LightGridVolumeGlob lgvGlob
    vmovups [rbp+310h+var_250], ymm0
  }
  R_HW_AddResourceTransition(state, &v99, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.samplingBufferOffsets2.baseclass_0.m_surfaceID; LightGridVolumeGlob lgvGlob
    vmovups [rbp+310h+var_230], ymm0
  }
  R_HW_AddResourceTransition(state, &v100, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.globalProbeOffsets2.baseclass_0.m_surfaceID; LightGridVolumeGlob lgvGlob
    vmovups [rbp+310h+var_210], ymm0
  }
  R_HW_AddResourceTransition(state, &v101, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.lightgridProbeCounts2.baseclass_0.m_surfaceID; LightGridVolumeGlob lgvGlob
    vmovups [rbp+310h+var_1F0], ymm0
  }
  R_HW_AddResourceTransition(state, &v102, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.lightgridVolumeCounts2.baseclass_0.m_surfaceID; LightGridVolumeGlob lgvGlob
    vmovups [rbp+310h+var_1D0], ymm0
  }
  R_HW_AddResourceTransition(state, &v103, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_ComputeWaitForCompute(state, PIPE_FLUSH_PARTIAL);
  R_FlushResourceTransitions(state);
  v27 = R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.indirectDispatchParams);
  if ( (v27->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  buffers = (ID3D12Resource *)&v27->1080;
  v28 = R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.lightGridVolumeCount);
  if ( (v28->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  views = (GfxShaderBufferView *)&v28->1080;
  v29 = R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.lightgridVolumeCounts1);
  if ( (v29->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  lightgridVolumeCounts1 = (GfxShaderBufferRWView *)&v29->1080;
  v30 = R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.lightgridProbeCounts1);
  if ( (v30->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  lightgridProbeCounts1 = (GfxShaderBufferRWView *)&v30->1080;
  v31 = R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.globalProbeOffsets1);
  if ( (v31->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  globalProbeOffsets1 = (GfxShaderBufferRWView *)&v31->1080;
  v32 = R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.samplingBufferOffsets1);
  if ( (v32->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  samplingBufferOffsets1 = (const GfxWrappedRWBuffer *)&v32->1080;
  v34 = R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.lightgridVolumeCounts2);
  if ( (v34->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  lightgridVolumeCounts2 = (const GfxWrappedRWBuffer *)&v34->1080;
  v36 = R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.lightgridProbeCounts2);
  if ( (v36->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  lightgridProbeCounts2 = (const GfxWrappedRWBuffer *)&v36->1080;
  v38 = R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.globalProbeOffsets2);
  if ( (v38->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v39 = (const GfxWrappedRWBuffer *)&v38->1080;
  v40 = R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.samplingBufferOffsets2);
  if ( (v40->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  R_LGV_GenerateLightGridSamplingListsUpsweep(state, data, viewInfoa, (const GfxWrappedRWBuffer *)&v40->1080, v39, lightgridProbeCounts2, lightgridVolumeCounts2, samplingBufferOffsets1, (const GfxWrappedRWBuffer *)globalProbeOffsets1, (const GfxWrappedRWBuffer *)lightgridProbeCounts1, (const GfxWrappedRWBuffer *)lightgridVolumeCounts1, (const GfxWrappedRWBuffer *)views, (const GfxWrappedRWBuffer *)buffers);
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.samplingBufferOffsets1.baseclass_0.m_surfaceID; LightGridVolumeGlob lgvGlob
    vmovups [rbp+310h+var_1B0], ymm0
  }
  R_HW_AddResourceTransition(state, &v104, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.globalProbeOffsets1.baseclass_0.m_surfaceID; LightGridVolumeGlob lgvGlob
    vmovups [rbp+310h+var_190], ymm0
  }
  R_HW_AddResourceTransition(state, &v105, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.lightgridProbeCounts1.baseclass_0.m_surfaceID; LightGridVolumeGlob lgvGlob
    vmovups [rbp+310h+var_170], ymm0
  }
  R_HW_AddResourceTransition(state, &v106, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.lightgridVolumeCounts1.baseclass_0.m_surfaceID; LightGridVolumeGlob lgvGlob
    vmovups [rbp+310h+var_150], ymm0
  }
  R_HW_AddResourceTransition(state, &v107, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.lightGridVolumeCount.baseclass_0.m_surfaceID; LightGridVolumeGlob lgvGlob
    vmovups [rbp+310h+var_130], ymm0
  }
  R_HW_AddResourceTransition(state, &v108, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.indirectDispatchParams.baseclass_0.m_surfaceID; LightGridVolumeGlob lgvGlob
    vmovups [rbp+310h+var_110], ymm0
  }
  R_HW_AddResourceTransition(state, &v109, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_ComputeWaitForCompute(state, PIPE_FLUSH_PARTIAL);
  R_FlushResourceTransitions(state);
  v47 = R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.lightGridProbeOffset);
  if ( (v47->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  buffers = (ID3D12Resource *)&v47->1080;
  v48 = R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.lightGridVolumesList);
  if ( (v48->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  views = (GfxShaderBufferView *)&v48->1080;
  v49 = R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.globalProbeOffset);
  if ( (v49->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  lightgridVolumeCounts1 = (GfxShaderBufferRWView *)&v49->1080;
  v50 = R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.lightgridVolumeCounts1);
  if ( (v50->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  lightgridProbeCounts1 = (GfxShaderBufferRWView *)&v50->1080;
  v51 = R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.lightgridProbeCounts1);
  if ( (v51->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v52 = (const GfxWrappedRWBuffer *)&v51->1080;
  v53 = R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.globalProbeOffsets1);
  if ( (v53->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v54 = (const GfxWrappedRWBuffer *)&v53->1080;
  v55 = R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.samplingBufferOffsets1);
  if ( (v55->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v56 = (const GfxWrappedRWBuffer *)&v55->1080;
  v57 = R_RT_Handle::GetSurface(&lgvGlob.samplingBuffers[(unsigned __int64)data->shLightingIndex].lightGridVolumeSamplingSlot);
  if ( (v57->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v58 = (const GfxWrappedRWBuffer *)&v57->1080;
  v59 = R_RT_Handle::GetSurface(&lgvGlob.samplingBuffers[(unsigned __int64)data->shLightingIndex].lightGridVolumeActiveLightGrids);
  if ( (v59->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  R_LGV_CompactLightGridSamplingLists(state, data, viewInfoa, (const GfxWrappedRWBuffer *)&v59->1080, v58, v56, v54, v52, (const GfxWrappedRWBuffer *)lightgridProbeCounts1, (const GfxWrappedRWBuffer *)lightgridVolumeCounts1, (const GfxWrappedRWBuffer *)views, (const GfxWrappedRWBuffer *)buffers);
  _RCX = &lgvGlob;
  _RAX = (unsigned __int64)data->shLightingIndex << 7;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax+rcx+10670h]
    vmovups [rbp+310h+var_F0], ymm0
  }
  R_HW_AddResourceTransition(state, &v110, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.globalProbeOffset.baseclass_0.m_surfaceID; LightGridVolumeGlob lgvGlob
    vmovups [rbp+310h+var_D0], ymm0
  }
  R_HW_AddResourceTransition(state, &v111, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.lightGridVolumesList.baseclass_0.m_surfaceID; LightGridVolumeGlob lgvGlob
    vmovups [rbp+310h+var_B0], ymm0
  }
  R_HW_AddResourceTransition(state, &v112, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.lightGridProbeOffset.baseclass_0.m_surfaceID; LightGridVolumeGlob lgvGlob
    vmovups [rbp+310h+var_90], ymm0
  }
  R_HW_AddResourceTransition(state, &v113, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_ComputeWaitForCompute(state, PIPE_FLUSH_PARTIAL);
  R_FlushResourceTransitions(state);
  v66 = R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.indirectDispatchParams);
  if ( (v66->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  buffers = (ID3D12Resource *)&v66->1080;
  v67 = R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.lightGridVolumeIndexingBuffer);
  if ( (v67->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v68 = (const GfxWrappedRWBuffer *)&v67->1080;
  v69 = R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.lightGridProbeOffset);
  if ( (v69->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v70 = (const GfxWrappedRWBuffer *)&v69->1080;
  v71 = R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.lightGridVolumeCount);
  if ( (v71->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v72 = (const GfxWrappedRWBuffer *)&v71->1080;
  v73 = R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.globalVolumeIndexingBuffer);
  if ( (v73->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v74 = (const GfxWrappedRWBuffer *)&v73->1080;
  v75 = R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.globalProbeOffset);
  if ( (v75->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  R_LGV_ComputeGroupStartProbeIndices(state, data, viewInfoa, (const GfxWrappedRWBuffer *)&v75->1080, v74, v72, v70, v68, (const GfxWrappedRWBuffer *)buffers);
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.globalVolumeIndexingBuffer.baseclass_0.m_surfaceID; LightGridVolumeGlob lgvGlob
    vmovups [rbp+310h+var_70], ymm0
  }
  R_HW_AddResourceTransition(state, &v114, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.lightGridVolumeIndexingBuffer.baseclass_0.m_surfaceID; LightGridVolumeGlob lgvGlob
    vmovups [rbp+310h+var_50], ymm0
  }
  R_HW_AddResourceTransition(state, &v115, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_ComputeWaitForCompute(state, PIPE_FLUSH_PARTIAL);
}

/*
==============
R_LGV_GenerateLightGridSamplingListsBase
==============
*/
void R_LGV_GenerateLightGridSamplingListsBase(ComputeCmdBufState *state, const GfxBackEndData *data, const GfxViewInfo *viewInfo, const GfxWrappedRWBuffer *lightGridVolumeActiveLightGrids, const GfxWrappedRWBuffer *samplingBufferOffsets1, const GfxWrappedRWBuffer *globalProbeOffsets1, const GfxWrappedRWBuffer *lightgridProbeCounts1, const GfxWrappedRWBuffer *lightgridVolumeCounts1)
{
  __int64 smpFrame; 
  GfxShaderBufferView *v12; 
  ID3D12Resource *buffers; 
  GfxShaderBufferView *views; 

  smpFrame = data->smpFrame;
  R_SetComputeShader(state, rgp.computeLightGridSamplingOffsetsBase);
  buffers = lgvGlob.gfxBuffers[data->shLightingIndex].sampleLightGridVolumeLightingConsts.buffer;
  R_SetComputeConstantBuffers(state, 0, 1, &buffers);
  views = &lightGridVolumeActiveLightGrids->view;
  R_SetComputeViews(state, 0, 1, (const GfxShaderBufferView *const *)&views);
  v12 = &lgvGlob.gfxBuffers[0].lightGridVolumePackingParams.view + 12 * data->shLightingIndex;
  R_SetComputeViews(state, 1, 1, (const GfxShaderBufferView *const *)&v12);
  samplingBufferOffsets1 = (const GfxWrappedRWBuffer *)((char *)samplingBufferOffsets1 + 32);
  R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&samplingBufferOffsets1, NULL);
  globalProbeOffsets1 = (const GfxWrappedRWBuffer *)((char *)globalProbeOffsets1 + 32);
  R_SetComputeRWViewsWithCounters(state, 1, 1, (const GfxShaderBufferRWView *const *)&globalProbeOffsets1, NULL);
  lightgridProbeCounts1 = (const GfxWrappedRWBuffer *)((char *)lightgridProbeCounts1 + 32);
  R_SetComputeRWViewsWithCounters(state, 2, 1, (const GfxShaderBufferRWView *const *)&lightgridProbeCounts1, NULL);
  lightgridVolumeCounts1 = (const GfxWrappedRWBuffer *)((char *)lightgridVolumeCounts1 + 32);
  R_SetComputeRWViewsWithCounters(state, 3, 1, (const GfxShaderBufferRWView *const *)&lightgridVolumeCounts1, NULL);
  R_Dispatch(state, (lgvGlob.frameData[smpFrame].numLightGridVolumesUsed + 63) / 64, 1u, 1u);
}

/*
==============
R_LGV_GenerateLightGridSamplingListsDownsweep
==============
*/
void R_LGV_GenerateLightGridSamplingListsDownsweep(ComputeCmdBufState *state, const GfxBackEndData *data, const GfxViewInfo *viewInfo, const GfxWrappedRWBuffer *samplingBufferOffsets1, const GfxWrappedRWBuffer *globalProbeOffsets1, const GfxWrappedRWBuffer *lightgridProbeCounts1, const GfxWrappedRWBuffer *lightgridVolumeCounts1, const GfxWrappedRWBuffer *samplingBufferOffsets2, const GfxWrappedRWBuffer *globalProbeOffsets2, const GfxWrappedRWBuffer *lightgridProbeCounts2, const GfxWrappedRWBuffer *lightgridVolumeCounts2)
{
  __int64 smpFrame; 
  ID3D12Resource *buffers; 
  GfxShaderBufferView *views; 

  smpFrame = data->smpFrame;
  R_SetComputeShader(state, rgp.computeLightGridSamplingOffsetsDownsweep);
  buffers = lgvGlob.gfxBuffers[data->shLightingIndex].sampleLightGridVolumeLightingConsts.buffer;
  R_SetComputeConstantBuffers(state, 0, 1, &buffers);
  views = &samplingBufferOffsets1->view;
  R_SetComputeViews(state, 0, 1, (const GfxShaderBufferView *const *)&views);
  globalProbeOffsets1 = (const GfxWrappedRWBuffer *)((char *)globalProbeOffsets1 + 8);
  R_SetComputeViews(state, 1, 1, (const GfxShaderBufferView *const *)&globalProbeOffsets1);
  lightgridProbeCounts1 = (const GfxWrappedRWBuffer *)((char *)lightgridProbeCounts1 + 8);
  R_SetComputeViews(state, 2, 1, (const GfxShaderBufferView *const *)&lightgridProbeCounts1);
  lightgridVolumeCounts1 = (const GfxWrappedRWBuffer *)((char *)lightgridVolumeCounts1 + 8);
  R_SetComputeViews(state, 3, 1, (const GfxShaderBufferView *const *)&lightgridVolumeCounts1);
  samplingBufferOffsets2 = (const GfxWrappedRWBuffer *)((char *)samplingBufferOffsets2 + 32);
  R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&samplingBufferOffsets2, NULL);
  globalProbeOffsets2 = (const GfxWrappedRWBuffer *)((char *)globalProbeOffsets2 + 32);
  R_SetComputeRWViewsWithCounters(state, 1, 1, (const GfxShaderBufferRWView *const *)&globalProbeOffsets2, NULL);
  lightgridProbeCounts2 = (const GfxWrappedRWBuffer *)((char *)lightgridProbeCounts2 + 32);
  R_SetComputeRWViewsWithCounters(state, 2, 1, (const GfxShaderBufferRWView *const *)&lightgridProbeCounts2, NULL);
  lightgridVolumeCounts2 = (const GfxWrappedRWBuffer *)((char *)lightgridVolumeCounts2 + 32);
  R_SetComputeRWViewsWithCounters(state, 3, 1, (const GfxShaderBufferRWView *const *)&lightgridVolumeCounts2, NULL);
  R_Dispatch(state, (unsigned int)((lgvGlob.frameData[smpFrame].numLightGridVolumesUsed + 63) / 64 + 63) >> 6, 1u, 1u);
}

/*
==============
R_LGV_GenerateLightGridSamplingListsUpsweep
==============
*/
void R_LGV_GenerateLightGridSamplingListsUpsweep(ComputeCmdBufState *state, const GfxBackEndData *data, const GfxViewInfo *viewInfo, const GfxWrappedRWBuffer *samplingBufferOffsets2, const GfxWrappedRWBuffer *globalProbeOffsets2, const GfxWrappedRWBuffer *lightgridProbeCounts2, const GfxWrappedRWBuffer *lightgridVolumeCounts2, const GfxWrappedRWBuffer *samplingBufferOffsets1, const GfxWrappedRWBuffer *globalProbeOffsets1, const GfxWrappedRWBuffer *lightgridProbeCounts1, const GfxWrappedRWBuffer *lightgridVolumeCounts1, const GfxWrappedRWBuffer *lightGridVolumeCount, const GfxWrappedRWBuffer *indirectDispatchParams)
{
  __int64 smpFrame; 
  ID3D12Resource *buffers; 
  GfxShaderBufferView *views; 

  smpFrame = data->smpFrame;
  R_SetComputeShader(state, rgp.computeLightGridSamplingOffsetsUpsweep);
  buffers = lgvGlob.gfxBuffers[data->shLightingIndex].sampleLightGridVolumeLightingConsts.buffer;
  R_SetComputeConstantBuffers(state, 0, 1, &buffers);
  views = &samplingBufferOffsets2->view;
  R_SetComputeViews(state, 0, 1, (const GfxShaderBufferView *const *)&views);
  globalProbeOffsets2 = (const GfxWrappedRWBuffer *)((char *)globalProbeOffsets2 + 8);
  R_SetComputeViews(state, 1, 1, (const GfxShaderBufferView *const *)&globalProbeOffsets2);
  lightgridProbeCounts2 = (const GfxWrappedRWBuffer *)((char *)lightgridProbeCounts2 + 8);
  R_SetComputeViews(state, 2, 1, (const GfxShaderBufferView *const *)&lightgridProbeCounts2);
  lightgridVolumeCounts2 = (const GfxWrappedRWBuffer *)((char *)lightgridVolumeCounts2 + 8);
  R_SetComputeViews(state, 3, 1, (const GfxShaderBufferView *const *)&lightgridVolumeCounts2);
  samplingBufferOffsets1 = (const GfxWrappedRWBuffer *)((char *)samplingBufferOffsets1 + 32);
  R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&samplingBufferOffsets1, NULL);
  globalProbeOffsets1 = (const GfxWrappedRWBuffer *)((char *)globalProbeOffsets1 + 32);
  R_SetComputeRWViewsWithCounters(state, 1, 1, (const GfxShaderBufferRWView *const *)&globalProbeOffsets1, NULL);
  lightgridProbeCounts1 = (const GfxWrappedRWBuffer *)((char *)lightgridProbeCounts1 + 32);
  R_SetComputeRWViewsWithCounters(state, 2, 1, (const GfxShaderBufferRWView *const *)&lightgridProbeCounts1, NULL);
  lightgridVolumeCounts1 = (const GfxWrappedRWBuffer *)((char *)lightgridVolumeCounts1 + 32);
  R_SetComputeRWViewsWithCounters(state, 3, 1, (const GfxShaderBufferRWView *const *)&lightgridVolumeCounts1, NULL);
  lightGridVolumeCount = (const GfxWrappedRWBuffer *)((char *)lightGridVolumeCount + 32);
  R_SetComputeRWViewsWithCounters(state, 4, 1, (const GfxShaderBufferRWView *const *)&lightGridVolumeCount, NULL);
  indirectDispatchParams = (const GfxWrappedRWBuffer *)((char *)indirectDispatchParams + 32);
  R_SetComputeRWViewsWithCounters(state, 5, 1, (const GfxShaderBufferRWView *const *)&indirectDispatchParams, NULL);
  R_FlushResourceTransitions(state);
  R_Dispatch(state, (unsigned int)((lgvGlob.frameData[smpFrame].numLightGridVolumesUsed + 63) / 64 + 63) >> 6, 1u, 1u);
}

/*
==============
R_LGV_GetInverseVolumeTransform
==============
*/
void R_LGV_GetInverseVolumeTransform(const vec4_t *transform, vec4_t *invTransform)
{
  __int64 v114; 
  int v115; 
  bool v116; 
  __int64 v130; 
  __int64 v131; 
  char v136; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm3, dword ptr [rcx+24h]
    vmovss  xmm2, dword ptr [rcx+14h]
    vmovss  xmm0, dword ptr [rcx+4]
    vmovss  xmm4, dword ptr [rcx+1Ch]
    vmovss  [rsp+118h+arg_0], xmm0
    vmovaps xmmword ptr [rax-38h], xmm6
  }
  _RDI = invTransform;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovss  xmm7, dword ptr [rcx+18h]
    vmulss  xmm0, xmm7, xmm3
    vmovss  [rsp+118h+arg_8], xmm3
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovss  [rsp+118h+arg_10], xmm2
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovss  xmm9, dword ptr [rcx+8]
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovss  xmm10, dword ptr [rcx+28h]
    vmulss  xmm1, xmm2, xmm10
    vsubss  xmm5, xmm1, xmm0
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovss  xmm11, dword ptr [rcx+20h]
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps [rsp+118h+var_A8], xmm13
    vmovaps [rsp+118h+var_B8], xmm14
    vmovaps [rsp+118h+var_C8], xmm15
    vmovss  xmm14, dword ptr [rcx+10h]
    vmovss  xmm12, dword ptr [rcx]
    vmovss  xmm13, dword ptr [rcx+0Ch]
    vmovss  xmm15, dword ptr [rcx+2Ch]
    vmovss  dword ptr [rdx], xmm5
    vmulss  xmm1, xmm14, xmm10
    vmulss  xmm0, xmm11, xmm7
    vsubss  xmm6, xmm1, xmm0
    vmulss  xmm1, xmm14, xmm3
    vmulss  xmm0, xmm11, xmm2
    vsubss  xmm8, xmm1, xmm0
    vmulss  xmm1, xmm6, [rsp+118h+arg_0]
    vmulss  xmm2, xmm5, xmm12
    vsubss  xmm3, xmm2, xmm1
    vmovss  xmm1, dword ptr [rcx+8]
    vmovss  [rsp+118h+arg_18], xmm4
    vmulss  xmm0, xmm8, xmm9
    vaddss  xmm0, xmm3, xmm0
    vmulss  xmm3, xmm1, dword ptr [rcx+24h]
    vmovss  [rsp+118h+var_D8], xmm0
    vmovss  xmm0, dword ptr [rcx+4]
    vmulss  xmm2, xmm0, dword ptr [rcx+28h]
    vsubss  xmm1, xmm3, xmm2
    vmovss  dword ptr [rdx+4], xmm1
    vmovss  xmm0, dword ptr [rcx+18h]
    vmulss  xmm3, xmm0, dword ptr [rcx+4]
    vmovss  xmm1, dword ptr [rcx+14h]
    vmulss  xmm2, xmm1, dword ptr [rcx+8]
    vmulss  xmm1, xmm9, [rsp+118h+arg_8]
    vsubss  xmm0, xmm3, xmm2
    vmulss  xmm3, xmm10, [rsp+118h+arg_0]
    vmovss  dword ptr [rdx+8], xmm0
    vsubss  xmm0, xmm3, xmm1
    vmulss  xmm1, xmm7, [rsp+118h+arg_0]
    vmulss  xmm4, xmm0, xmm4
    vmulss  xmm0, xmm9, [rsp+118h+arg_10]
    vsubss  xmm1, xmm1, xmm0
    vmulss  xmm2, xmm5, xmm13
    vsubss  xmm3, xmm4, xmm2
    vmulss  xmm2, xmm1, xmm15
    vsubss  xmm3, xmm3, xmm2
    vmovss  dword ptr [rdx+0Ch], xmm3
    vmovss  xmm0, dword ptr [rcx+20h]
    vmulss  xmm4, xmm0, dword ptr [rcx+18h]
    vmovss  xmm1, dword ptr [rcx+10h]
    vmulss  xmm2, xmm1, dword ptr [rcx+28h]
    vsubss  xmm0, xmm4, xmm2
    vmovss  dword ptr [rdx+10h], xmm0
    vmovss  xmm1, dword ptr [rcx]
    vmovss  xmm0, dword ptr [rcx+20h]
    vmulss  xmm3, xmm1, dword ptr [rcx+28h]
    vmulss  xmm2, xmm0, dword ptr [rcx+8]
    vsubss  xmm1, xmm3, xmm2
    vmovss  dword ptr [rdx+14h], xmm1
    vmovss  xmm0, dword ptr [rcx+10h]
    vmulss  xmm3, xmm0, dword ptr [rcx+8]
    vmovss  xmm1, dword ptr [rcx+18h]
    vmulss  xmm2, xmm1, dword ptr [rcx]
    vsubss  xmm0, xmm3, xmm2
    vmovss  dword ptr [rdx+18h], xmm0
    vmulss  xmm4, xmm6, xmm13
    vmovss  xmm6, [rsp+118h+var_D8]
    vmulss  xmm0, xmm11, xmm9
    vmulss  xmm1, xmm10, xmm12
    vsubss  xmm1, xmm1, xmm0
    vmulss  xmm2, xmm1, [rsp+118h+arg_18]
    vsubss  xmm5, xmm4, xmm2
    vmulss  xmm0, xmm14, xmm9
    vmulss  xmm3, xmm7, xmm12
    vsubss  xmm1, xmm3, xmm0
    vmulss  xmm2, xmm1, xmm15
    vaddss  xmm3, xmm5, xmm2
    vmovss  dword ptr [rdx+1Ch], xmm3
    vmovss  xmm0, dword ptr [rcx+10h]
    vmulss  xmm4, xmm0, dword ptr [rcx+24h]
    vmovss  xmm1, dword ptr [rcx+20h]
    vmulss  xmm2, xmm1, dword ptr [rcx+14h]
    vsubss  xmm0, xmm4, xmm2
    vmovss  dword ptr [rdx+20h], xmm0
    vmovss  xmm1, dword ptr [rcx+20h]
    vmulss  xmm3, xmm1, dword ptr [rcx+4]
    vmovss  xmm0, dword ptr [rcx+24h]
    vmulss  xmm2, xmm0, dword ptr [rcx]
    vsubss  xmm1, xmm3, xmm2
    vmovss  dword ptr [rdx+24h], xmm1
    vmovss  xmm0, dword ptr [rcx+14h]
    vmulss  xmm3, xmm0, dword ptr [rcx]
    vmovss  xmm1, dword ptr [rcx+10h]
    vmulss  xmm2, xmm1, dword ptr [rcx+4]
    vmulss  xmm1, xmm11, [rsp+118h+arg_0]
    vsubss  xmm0, xmm3, xmm2
    vmulss  xmm3, xmm12, [rsp+118h+arg_8]
    vmovss  dword ptr [rdx+28h], xmm0
    vsubss  xmm0, xmm3, xmm1
    vmulss  xmm4, xmm0, [rsp+118h+arg_18]
    vmulss  xmm0, xmm14, [rsp+118h+arg_0]
    vmulss  xmm1, xmm12, [rsp+118h+arg_10]
    vmulss  xmm2, xmm8, xmm13
    vsubss  xmm3, xmm4, xmm2
    vsubss  xmm1, xmm1, xmm0
    vmulss  xmm2, xmm1, xmm15
    vsubss  xmm3, xmm3, xmm2
    vmovss  dword ptr [rdx+2Ch], xmm3
  }
  v114 = 3i64;
  do
  {
    v115 = 0;
    v116 = 1;
    do
    {
      if ( !v116 )
      {
        LODWORD(v131) = 4;
        LODWORD(v130) = v115;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v130, v131) )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rdi]
        vdivss  xmm1, xmm0, xmm6
        vmovss  dword ptr [rdi], xmm1
      }
      _RDI = (vec4_t *)((char *)_RDI + 4);
      v116 = (unsigned int)++v115 < 4;
    }
    while ( v115 < 4 );
    --v114;
  }
  while ( v114 );
  __asm { vmovaps xmm13, [rsp+118h+var_A8] }
  _R11 = &v136;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm14, [rsp+118h+var_B8]
    vmovaps xmm15, [rsp+118h+var_C8]
  }
}

/*
==============
R_LGV_GetUsageStats
==============
*/
LightGridVolumesMaxUsageStats *R_LGV_GetUsageStats()
{
  return &lgvGlob.lightGridVolumeMaxUsageStats;
}

/*
==============
R_LGV_Init
==============
*/
void R_LGV_Init()
{
  GfxWrappedBuffer *samplePerLightGridLightGridVolumeLighting; 
  int i; 
  int *initialData; 
  __int64 v5; 
  LightGridVolumeFrameData *frameData; 
  __int64 v7; 
  GfxWrappedBuffer *p_lightGridVolumesIndexingBuffer; 
  int ElementSizeForDataFormat; 
  int v10; 
  GfxBufferCreationContext v12; 

  __asm { vmovaps [rsp+98h+var_38], xmm6 }
  *(_QWORD *)&lgvGlob.globalFrame = 0i64;
  v12.zoneName = (char *)&queryFormat.fmt + 3;
  samplePerLightGridLightGridVolumeLighting = lgvGlob.samplingPrepBuffers.samplePerLightGridLightGridVolumeLighting;
  lgvGlob.useMultiLightGridSampling = 0;
  v12.objectName = "per lightgrid consts";
  __asm { vmovups xmm6, [rsp+98h+var_48] }
  for ( i = 0; i < 20; ++i )
  {
    __asm { vmovdqa [rsp+98h+var_48], xmm6 }
    initialData = (int *)R_AllocGfxBufferMemory(0x10u, &v12);
    *initialData = i;
    R_CreateGfxWrappedBuffer(samplePerLightGridLightGridVolumeLighting++, GfxWrappedBuffer_Const, 16, 1u, GFX_DATA_FORMAT_R32_UINT, 8u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, initialData, "lightgrid volume lighting sampling constant buffer");
  }
  v5 = 2i64;
  frameData = lgvGlob.frameData;
  v7 = 2i64;
  do
  {
    frameData->lightGridVolumeSrcParams = (LightGridVolumeSrcParams *)PMem_Alloc(0x150000ui64, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "src volume data");
    ++frameData;
    --v7;
  }
  while ( v7 );
  p_lightGridVolumesIndexingBuffer = &lgvGlob.gfxBuffers[0].lightGridVolumesIndexingBuffer;
  do
  {
    R_CreateGfxWrappedBuffer(p_lightGridVolumesIndexingBuffer - 2, GfxWrappedBuffer_Structured, 64, 0x4000u, GFX_DATA_FORMAT_R32_UINT, 0xCu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "LightGrid volume transform params");
    R_CreateGfxWrappedBuffer(p_lightGridVolumesIndexingBuffer - 1, GfxWrappedBuffer_Structured, 32, 0x4000u, GFX_DATA_FORMAT_R32_UINT, 0xCu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "LightGrid volume packing params");
    ElementSizeForDataFormat = Buffers_GetElementSizeForDataFormat(GFX_DATA_FORMAT_R32_UINT);
    R_CreateGfxWrappedBuffer(p_lightGridVolumesIndexingBuffer, GfxWrappedBuffer_Data, ElementSizeForDataFormat, 0x4000u, GFX_DATA_FORMAT_R32_UINT, 0xCu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "LightGrid volumes indexing buffer");
    R_CreateGfxWrappedBuffer(p_lightGridVolumesIndexingBuffer + 1, GfxWrappedBuffer_Const, 48, 1u, GFX_DATA_FORMAT_R32_UINT, 0xCu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "lightgrid volume lighting sampling constant buffer");
    R_CreateGfxWrappedBuffer(p_lightGridVolumesIndexingBuffer + 2, GfxWrappedBuffer_Structured, 12, 1u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "debug");
    v10 = Buffers_GetElementSizeForDataFormat(GFX_DATA_FORMAT_R32G32_UINT);
    R_CreateGfxWrappedBuffer(p_lightGridVolumesIndexingBuffer + 3, GfxWrappedBuffer_Data, v10, 0x10000u, GFX_DATA_FORMAT_R32G32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "Debug indexing buffer");
    p_lightGridVolumesIndexingBuffer += 6;
    --v5;
  }
  while ( v5 );
  __asm { vmovaps xmm6, [rsp+98h+var_38] }
  *(_QWORD *)&lgvGlob.lightGridVolumeMaxUsageStats.packing3dHighWatermark = 0i64;
  *(_QWORD *)&lgvGlob.lightGridVolumeMaxUsageStats.volumeProbesUsed = 0i64;
}

/*
==============
R_LGV_InitPerFrameData
==============
*/
void R_LGV_InitPerFrameData(const vec3_t *camera_ws)
{
  _R8 = &lgvGlob.frameData[0].camera_ws;
  __asm { vmovsd  xmm0, qword ptr [rcx] }
  _RDX = lgvGlob.smpFrame;
  __asm { vmovsd  qword ptr [rdx+r8], xmm0 }
  lgvGlob.frameData[_RDX].camera_ws.v[2] = camera_ws->v[2];
}

/*
==============
R_LGV_InitSamplingConstBuffers
==============
*/
void R_LGV_InitSamplingConstBuffers()
{
  int v1; 
  GfxWrappedBuffer *samplePerLightGridLightGridVolumeLighting; 
  int *initialData; 
  GfxBufferCreationContext v6; 

  __asm { vmovaps [rsp+78h+var_18], xmm6 }
  v6.zoneName = (char *)&queryFormat.fmt + 3;
  v1 = 0;
  v6.objectName = "per lightgrid consts";
  samplePerLightGridLightGridVolumeLighting = lgvGlob.samplingPrepBuffers.samplePerLightGridLightGridVolumeLighting;
  __asm { vmovups xmm6, [rsp+78h+var_28] }
  do
  {
    __asm { vmovdqa [rsp+78h+var_28], xmm6 }
    initialData = (int *)R_AllocGfxBufferMemory(0x10u, &v6);
    *initialData = v1;
    R_CreateGfxWrappedBuffer(samplePerLightGridLightGridVolumeLighting, GfxWrappedBuffer_Const, 16, 1u, GFX_DATA_FORMAT_R32_UINT, 8u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, initialData, "lightgrid volume lighting sampling constant buffer");
    ++v1;
    ++samplePerLightGridLightGridVolumeLighting;
  }
  while ( v1 < 20 );
  __asm { vmovaps xmm6, [rsp+78h+var_18] }
}

/*
==============
R_LGV_InitWorld
==============
*/
void R_LGV_InitWorld(GfxWorld *world)
{
  volatile int *p_numLightGridVolumesUsed; 
  __int64 v2; 

  PMem_BeginAlloc("LGV World Buffers", PMEM_STACK_GAME);
  p_numLightGridVolumesUsed = &lgvGlob.frameData[0].numLightGridVolumesUsed;
  v2 = 2i64;
  do
  {
    *((_DWORD *)p_numLightGridVolumesUsed - 1) = 0;
    *p_numLightGridVolumesUsed = 0;
    *((_DWORD *)p_numLightGridVolumesUsed + 1) = 0;
    *((_DWORD *)p_numLightGridVolumesUsed + 2) = 0;
    p_numLightGridVolumesUsed += 8336;
    --v2;
  }
  while ( v2 );
  PMem_EndAlloc("LGV World Buffers", PMEM_STACK_GAME);
}

/*
==============
R_LGV_KickOffPacking
==============
*/
void R_LGV_KickOffPacking(const GfxBackEndData *data)
{
  ;
}

/*
==============
R_LGV_LazyAllocSamplingBuffers
==============
*/
void R_LGV_LazyAllocSamplingBuffers(void)
{
  R_RT_BufferHandle result; 

  if ( !R_RT_Handle::IsValid(&lgvGlob.samplingBuffers[0].lightGridVolumeSampledLightingData) )
  {
    _RAX = R_RT_CreateBufferInternal(&result, 8u, 0x9C000u, GFX_DATA_FORMAT_R32G32_UINT, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_GENERIC_READ, "LightGrid volume sampling (lighting data) history 0", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(415)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingBuffers.lightGridVolumeSampledLightingData.baseclass_0.m_surfaceID, ymm0; LightGridVolumeGlob lgvGlob
    }
    _RAX = R_RT_CreateBufferInternal(&result, 4u, 0xC000u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_GENERIC_READ, "LightGrid volume sampling (primary vis) history 0", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(416)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingBuffers.lightGridVolumeSampledPrimaryVisTets.baseclass_0.m_surfaceID, ymm0; LightGridVolumeGlob lgvGlob
    }
    _RAX = R_RT_CreateBufferInternal(&result, 4u, 0x4000u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_GENERIC_READ, "Bitmask of active lightgrids per volume 0", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(417)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingBuffers.lightGridVolumeActiveLightGrids.baseclass_0.m_surfaceID, ymm0; LightGridVolumeGlob lgvGlob
    }
    _RAX = R_RT_CreateBufferInternal(&result, 4u, 0x4000u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_GENERIC_READ, "First target slot in the sampling buffer for each volume 0", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(418)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingBuffers.lightGridVolumeSamplingSlot.baseclass_0.m_surfaceID, ymm0; LightGridVolumeGlob lgvGlob
    }
  }
  if ( !R_RT_Handle::IsValid(&lgvGlob.samplingBuffers[1].lightGridVolumeSampledLightingData) )
  {
    _RAX = R_RT_CreateBufferInternal(&result, 8u, 0x9C000u, GFX_DATA_FORMAT_R32G32_UINT, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_GENERIC_READ, "LightGrid volume sampling (lighting data) history 1", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(427)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingBuffers.lightGridVolumeSampledLightingData.baseclass_0.m_surfaceID+80h, ymm0; LightGridVolumeGlob lgvGlob
    }
    _RAX = R_RT_CreateBufferInternal(&result, 4u, 0xC000u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_GENERIC_READ, "LightGrid volume sampling (primary vis) history 1", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(428)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingBuffers.lightGridVolumeSampledPrimaryVisTets.baseclass_0.m_surfaceID+80h, ymm0; LightGridVolumeGlob lgvGlob
    }
    _RAX = R_RT_CreateBufferInternal(&result, 4u, 0x4000u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_GENERIC_READ, "Bitmask of active lightgrids per volume 1", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(429)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingBuffers.lightGridVolumeActiveLightGrids.baseclass_0.m_surfaceID+80h, ymm0; LightGridVolumeGlob lgvGlob
    }
    _RAX = R_RT_CreateBufferInternal(&result, 4u, 0x4000u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_GENERIC_READ, "First target slot in the sampling buffer for each volume 1", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(430)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingBuffers.lightGridVolumeSamplingSlot.baseclass_0.m_surfaceID+80h, ymm0; LightGridVolumeGlob lgvGlob
    }
  }
  if ( lgvGlob.samplingPrepBuffers.lightGridVolumeCount.m_surfaceID )
  {
    R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.lightGridVolumeCount);
  }
  else
  {
    if ( lgvGlob.samplingPrepBuffers.lightGridVolumeCount.m_tracking.m_allocCounter )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
    _RAX = R_RT_CreateBufferInternal(&result, 4u, 0x14u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_GENERIC_READ, "Num lgv for lightgrid", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(444)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.lightGridVolumeCount.baseclass_0.m_surfaceID, ymm0; LightGridVolumeGlob lgvGlob
    }
    _RAX = R_RT_CreateBufferInternal(&result, 4u, 0x100u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_GENERIC_READ, "Temp buffers for calculating target slot for sampling", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(445)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.samplingBufferOffsets1.baseclass_0.m_surfaceID, ymm0; LightGridVolumeGlob lgvGlob
    }
    _RAX = R_RT_CreateBufferInternal(&result, 4u, 4u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_GENERIC_READ, "Temp buffers for calculating target slot for sampling", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(446)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.samplingBufferOffsets2.baseclass_0.m_surfaceID, ymm0; LightGridVolumeGlob lgvGlob
    }
    _RAX = R_RT_CreateBufferInternal(&result, 4u, 0x50000u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_GENERIC_READ, "List of volumes for a given light grid", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(448)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.lightGridVolumesList.baseclass_0.m_surfaceID, ymm0; LightGridVolumeGlob lgvGlob
    }
    _RAX = R_RT_CreateBufferInternal(&result, 4u, 0x1400u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_GENERIC_READ, "Temp buffer for counting volumes sampling each lightgrid", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(449)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.lightgridVolumeCounts1.baseclass_0.m_surfaceID, ymm0; LightGridVolumeGlob lgvGlob
    }
    _RAX = R_RT_CreateBufferInternal(&result, 4u, 0x50u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_GENERIC_READ, "Temp buffer for counting volumes sampling each lightgrid", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(450)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.lightgridVolumeCounts2.baseclass_0.m_surfaceID, ymm0; LightGridVolumeGlob lgvGlob
    }
    _RAX = R_RT_CreateBufferInternal(&result, 4u, 0x50000u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_GENERIC_READ, "Indexing buffer for each lightgrid", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(452)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.lightGridVolumeIndexingBuffer.baseclass_0.m_surfaceID, ymm0; LightGridVolumeGlob lgvGlob
    }
    _RAX = R_RT_CreateBufferInternal(&result, 4u, 0x50000u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_GENERIC_READ, "Prefix sum of the count of probes for given light grid", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(453)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.lightGridProbeOffset.baseclass_0.m_surfaceID, ymm0; LightGridVolumeGlob lgvGlob
    }
    _RAX = R_RT_CreateBufferInternal(&result, 4u, 0x1400u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_GENERIC_READ, "Temp buffer for counting probes sampling each lightgrid", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(454)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.lightgridProbeCounts1.baseclass_0.m_surfaceID, ymm0; LightGridVolumeGlob lgvGlob
    }
    _RAX = R_RT_CreateBufferInternal(&result, 4u, 0x50u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_GENERIC_READ, "Temp buffer for counting probes sampling each lightgrid", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(455)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.lightgridProbeCounts2.baseclass_0.m_surfaceID, ymm0; LightGridVolumeGlob lgvGlob
    }
    _RAX = R_RT_CreateBufferInternal(&result, 4u, 0x4000u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_GENERIC_READ, "Indexing buffer for the entire list", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(457)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.globalVolumeIndexingBuffer.baseclass_0.m_surfaceID, ymm0; LightGridVolumeGlob lgvGlob
    }
    _RAX = R_RT_CreateBufferInternal(&result, 4u, 0x4000u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_GENERIC_READ, "Temp buffers for calculating target slot for sampling", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(458)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.globalProbeOffset.baseclass_0.m_surfaceID, ymm0; LightGridVolumeGlob lgvGlob
    }
    _RAX = R_RT_CreateBufferInternal(&result, 4u, 0x100u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_GENERIC_READ, "Temp buffers for calculating global indexing buffer", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(459)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.globalProbeOffsets1.baseclass_0.m_surfaceID, ymm0; LightGridVolumeGlob lgvGlob
    }
    _RAX = R_RT_CreateBufferInternal(&result, 4u, 4u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_GENERIC_READ, "Temp buffers for calculating global indexing buffer", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(460)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.globalProbeOffsets2.baseclass_0.m_surfaceID, ymm0; LightGridVolumeGlob lgvGlob
    }
    _RAX = R_RT_CreateBufferInternal(&result, 4u, 0x1E0u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_BufferIndirectArgs|R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_GENERIC_READ, "Indirect dispatch params for LGV sampling", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(462)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr cs:?lgvGlob@@3ULightGridVolumeGlob@@A.samplingPrepBuffers.indirectDispatchParams.baseclass_0.m_surfaceID, ymm0; LightGridVolumeGlob lgvGlob
    }
  }
}

/*
==============
R_LGV_MaterialLodForcesSingleProbe
==============
*/
bool R_LGV_MaterialLodForcesSingleProbe(unsigned int materialLod)
{
  return materialLod != 0;
}

/*
==============
R_LGV_ModifyDimension
==============
*/
void R_LGV_ModifyDimension(const LightGridVolumeModifier *lgvModifier, int *volumeSize)
{
  unsigned int dimension; 
  __int64 v3; 
  __int64 v4; 
  int v5; 
  int v6; 
  int v7; 
  __int64 v8; 
  unsigned int v9; 
  __int64 v10; 

  dimension = lgvModifier->dimension;
  if ( dimension )
  {
    v3 = 0i64;
    v4 = 0i64;
    v5 = volumeSize[1];
    v6 = 2;
    v7 = *volumeSize;
    v8 = 0i64;
    v9 = *volumeSize >= v5;
    v10 = *volumeSize < v5;
    if ( *volumeSize >= v5 )
      v4 = 1i64;
    LOBYTE(v8) = v7 >= v5;
    if ( volumeSize[v4] < volumeSize[2] )
    {
      v8 = 2i64;
      v6 = *volumeSize >= v5;
      v9 = 2;
    }
    if ( v7 < v5 )
      v3 = 1i64;
    if ( volumeSize[v3] >= volumeSize[v8] )
      v10 = v9;
    if ( dimension == 1 )
    {
      volumeSize[v10] = 1;
      volumeSize[v6] = 1;
    }
    else if ( dimension == 2 )
    {
      volumeSize[v6] = 1;
    }
  }
  else
  {
    volumeSize[2] = 1;
    volumeSize[1] = 1;
    *volumeSize = 1;
  }
}

/*
==============
R_LGV_Pack3dCmd
==============
*/

void __fastcall R_LGV_Pack3dCmd(const void *const data, double _XMM1_8, double _XMM2_8)
{
  _QWORD **v3; 
  signed int v4; 
  _QWORD *v5; 
  __int64 v7; 
  __int64 v9; 
  __int64 v10; 
  int v17; 
  __int64 v18; 
  __int64 v19; 
  _DWORD *v20; 
  unsigned int v21; 
  float *v22; 
  unsigned int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  bool v29; 
  __int64 i; 
  __int64 v31; 
  unsigned int m_packedDepth; 
  __int64 squeezePacked; 
  __int64 depthAlignment; 
  __int64 v58; 
  signed int v59; 
  LightGridVolumeSrcParams *volumes; 
  LightGridVolumePacker3D v62; 
  int axesSorted; 
  unsigned int v64; 
  unsigned int v65; 
  __int64 v66; 
  int v68; 
  unsigned int volumesToPack[16384]; 
  unsigned __int16 to[4]; 

  v3 = (_QWORD **)data;
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp", 2682, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF0000FF, "LG++ pack 3d");
  v4 = 0x4000;
  v5 = v3[1];
  _RBX = (LightGridVolumeSrcParams *)**v3;
  v7 = v5[3];
  if ( *((int *)*v3 + 8329) < 0x4000 )
    v4 = *((_DWORD *)*v3 + 8329);
  _R15 = v5[7];
  v59 = v4;
  volumes = (LightGridVolumeSrcParams *)**v3;
  v58 = v5[3];
  v66 = _R15;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "analyze volumes");
  v9 = v4;
  if ( v4 > 0 )
  {
    v10 = v4;
    do
    {
      R_LGV_SortAxes(_RBX->m_volumeSize, _RBX->m_volumeTransform, &axesSorted);
      if ( (_RBX->m_flags & 0x40) != 0 )
      {
        _RDI = axesSorted;
        if ( (unsigned int)axesSorted >= 3 )
        {
          LODWORD(depthAlignment) = 3;
          LODWORD(squeezePacked) = axesSorted;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", squeezePacked, depthAlignment) )
            __debugbreak();
        }
        __asm { vmovss  xmm0, dword ptr [rbx+rdi*4+44h] }
        _RDI = (int)v64;
        __asm { vmovss  dword ptr [rbp+0FFD0h+var_10040], xmm0 }
        if ( v64 >= 3 )
        {
          LODWORD(depthAlignment) = 3;
          LODWORD(squeezePacked) = v64;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", squeezePacked, depthAlignment) )
            __debugbreak();
        }
        __asm { vmovss  xmm0, dword ptr [rbx+rdi*4+44h] }
        _RDI = (int)v65;
        __asm { vmovss  dword ptr [rbp+0FFD0h+var_10040+4], xmm0 }
        if ( v65 >= 3 )
        {
          LODWORD(depthAlignment) = 3;
          LODWORD(squeezePacked) = v65;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", squeezePacked, depthAlignment) )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+rdi*4+44h]
          vmovsd  xmm1, [rbp+0FFD0h+var_10040]
          vmovss  [rbp+0FFD0h+var_10038], xmm0
        }
        v17 = v68;
        __asm { vmovsd  qword ptr [rbx+44h], xmm1 }
        LODWORD(_RBX->m_samplingOffset.v[2]) = v17;
      }
      ++_RBX;
      --v10;
    }
    while ( v10 );
    v3 = (_QWORD **)data;
    _RBX = volumes;
    v7 = v58;
  }
  Sys_ProfEndNamedEvent();
  if ( v4 > 0 )
  {
    v18 = 0i64;
    v19 = _R15 + 13;
    v20 = (_DWORD *)(v7 + 24);
    v21 = 0;
    v22 = &_RBX->m_volumeTransform[1].v[2];
    do
    {
      *(v20 - 6) = *((_DWORD *)v22 - 6);
      *(v20 - 5) = *((_DWORD *)v22 - 5);
      *(v20 - 4) = *((_DWORD *)v22 - 4);
      *(v20 - 3) = *((_DWORD *)v22 - 3);
      *(v20 - 2) = *((_DWORD *)v22 - 2);
      *(v20 - 1) = *((_DWORD *)v22 - 1);
      *v20 = *(_DWORD *)v22;
      v20[1] = *((_DWORD *)v22 + 1);
      v20[2] = *((_DWORD *)v22 + 2);
      v20[3] = *((_DWORD *)v22 + 3);
      v20[4] = *((_DWORD *)v22 + 4);
      v20[5] = *((_DWORD *)v22 + 5);
      v23 = *((_DWORD *)v22 + 14);
      Half3FromFloat((const vec3_t *)(v22 + 11), to);
      v24 = *((_DWORD *)v22 + 9);
      v19 += 32i64;
      v25 = to[0];
      v22 += 21;
      v20[6] = v24;
      v20 += 16;
      *(v20 - 9) = *((_DWORD *)v22 - 11);
      v26 = to[1];
      *(v20 - 8) = to[2] | (((v23 >> 6) & 1) << 16);
      *(v20 - 7) = v26 | (v25 << 16);
      *(_BYTE *)(v19 - 33) = *((_BYTE *)v22 - 60);
      *(_BYTE *)(v19 - 32) = *((_BYTE *)v22 - 59);
      *(_BYTE *)(v19 - 31) = *((_BYTE *)v22 - 58);
      *(_BYTE *)(v19 - 30) = *((_BYTE *)v22 - 56);
      *(float *)(v19 - 17) = *(v22 - 13);
      volumesToPack[v18++] = v21++;
    }
    while ( v18 < v9 );
    v3 = (_QWORD **)data;
    _R15 = v66;
    v4 = v59;
  }
  v62.m_width = *((_DWORD *)v3 + 4);
  v62.m_height = *((_DWORD *)v3 + 5);
  v62.m_depth = *((_DWORD *)v3 + 6);
  v62.m_reserveLastTexel = 1;
  v62.m_packedDepth = 0;
  v27 = LightGridVolumePacker3D::Pack<LightGridVolumeSrcParams>(&v62, volumes, (LightGridVolumePackingParams *)_R15, volumesToPack, v4, 0, 1);
  __asm { vmovss  xmm3, cs:__real@3f000000 }
  v29 = v27 == v4;
  if ( v27 != v4 )
  {
    for ( i = v27; i < v9; *(_DWORD *)(_RCX + 28) = 0x20000000 )
    {
      v31 = volumesToPack[i++];
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, rax
        vsubss  xmm0, xmm1, xmm3
        vdivss  xmm1, xmm0, xmm1
        vxorps  xmm2, xmm2, xmm2
      }
      _RCX = _R15 + 32 * v31;
      __asm
      {
        vmovss  dword ptr [rcx+10h], xmm1
        vcvtsi2ss xmm2, xmm2, rax
        vsubss  xmm0, xmm2, xmm3
        vdivss  xmm1, xmm0, xmm2
        vmovss  dword ptr [rcx+14h], xmm1
        vxorps  xmm2, xmm2, xmm2
        vcvtsi2ss xmm2, xmm2, rax
        vsubss  xmm0, xmm2, xmm3
        vdivss  xmm1, xmm0, xmm2
        vmovss  dword ptr [rcx+18h], xmm1
      }
      *(_QWORD *)_RCX = 0i64;
      *(_DWORD *)(_RCX + 8) = 0;
      *(_WORD *)(_RCX + 12) = 257;
      *(_BYTE *)(_RCX + 14) = 1;
    }
  }
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
    vsubss  xmm0, xmm1, xmm3
    vdivss  xmm1, xmm0, xmm1
    vmovss  dword ptr [r15+10h], xmm1
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, rax
    vsubss  xmm0, xmm2, xmm3
    vdivss  xmm1, xmm0, xmm2
    vmovss  dword ptr [r15+14h], xmm1
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, rax
    vsubss  xmm0, xmm2, xmm3
    vdivss  xmm1, xmm0, xmm2
    vmovss  dword ptr [r15+18h], xmm1
  }
  *(_QWORD *)_R15 = 0i64;
  *(_DWORD *)(_R15 + 8) = 0;
  *(_DWORD *)(_R15 + 28) = 0x40000000;
  if ( volumes->m_firstStaticProbeIndex != 0x40000000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp", 2769, ASSERT_TYPE_ASSERT, "(lightGridVolumeSrcParams[0].m_firstStaticProbeIndex == R_LGV_PackStaticProbeIndex( false, 0, true, false ))", (const char *)&queryFormat, "lightGridVolumeSrcParams[0].m_firstStaticProbeIndex == R_LGV_PackStaticProbeIndex( false, 0, true, false )") )
    __debugbreak();
  m_packedDepth = v62.m_packedDepth;
  if ( lgvGlob.lightGridVolumeMaxUsageStats.packing3dHighWatermark > v62.m_packedDepth )
    m_packedDepth = lgvGlob.lightGridVolumeMaxUsageStats.packing3dHighWatermark;
  lgvGlob.lightGridVolumeMaxUsageStats.packing3dHighWatermark = m_packedDepth;
  if ( !v29 )
    R_WarnOncePerFrame(R_WARN_LIGHTGRID_VOLUMES_PACKING_3D_FAILED);
  Sys_ProfEndNamedEvent();
}

/*
==============
R_LGV_PackStaticProbeIndex
==============
*/
__int64 R_LGV_PackStaticProbeIndex(bool isStatic, unsigned int staticIndex, bool forceFallback, bool skipSampling)
{
  if ( (staticIndex & 0x1FFFFFFF) != staticIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp", 720, ASSERT_TYPE_ASSERT, "(( staticIndex & 0x1FFFFFFF ) == staticIndex)", (const char *)&queryFormat, "( staticIndex & FIRST_STATIC_PROBE_INDEX_MASK ) == staticIndex") )
    __debugbreak();
  return staticIndex | (isStatic << 31) | (skipSampling << 29) | (forceFallback << 30);
}

/*
==============
R_LGV_PrepareDebugProbeDirectIndexingBuffer
==============
*/
__int64 R_LGV_PrepareDebugProbeDirectIndexingBuffer(GfxCmdBufContext *context, LightGridVolumeGfxBuffers *gfxBuffers, const LightGridVolumeFrameData::DebugVisibleLightGridVolume *volumesToRender, unsigned int numVolumesToRender)
{
  GfxWrappedBuffer *p_lgvDebugDirectIndexingBuffer; 
  unsigned int v7; 
  signed int v8; 
  _DWORD *v9; 
  __int64 worldTransient; 
  GfxWorldTransientZone *v11; 
  unsigned int index; 
  unsigned __int16 *v13; 
  int v14; 
  int v15; 
  int v16; 
  __int64 v17; 

  p_lgvDebugDirectIndexingBuffer = &gfxBuffers->lgvDebugDirectIndexingBuffer;
  v7 = 0;
  v8 = 0;
  v9 = R_BeginWrappedBufferDataWrite(&gfxBuffers->lgvDebugDirectIndexingBuffer);
  if ( (int)numVolumesToRender > 0 )
  {
    while ( 1 )
    {
      worldTransient = (unsigned int)volumesToRender->worldTransient;
      if ( (unsigned int)worldTransient <= s_world.draw.transientZoneCount )
      {
        v11 = s_world.draw.transientZones[worldTransient];
        if ( v11 )
        {
          index = volumesToRender->index;
          if ( volumesToRender->index <= v11->gpuLightGrid.staticModelVolumeCount )
          {
            v13 = (unsigned __int16 *)&v11->gpuLightGrid.staticModelVolumes[(unsigned __int64)index];
            v14 = v13[2] * v13[3] * v13[4];
            v15 = 0;
            if ( v14 > 0 )
              break;
          }
        }
      }
LABEL_9:
      ++v8;
      ++volumesToRender;
      if ( v8 >= (int)numVolumesToRender )
        goto LABEL_10;
    }
    v16 = index & 0xFFFFF;
    while ( 1 )
    {
      v17 = 2 * v7;
      v9[(unsigned int)(v17 + 1)] = worldTransient;
      ++v7;
      v9[v17] = v16 | (v15 << 20);
      if ( v7 >= 0x10000 )
        break;
      if ( ++v15 >= v14 )
        goto LABEL_9;
    }
  }
LABEL_10:
  R_EndWrappedBufferDataWrite(p_lgvDebugDirectIndexingBuffer);
  return v7;
}

/*
==============
R_LGV_PrepareDefaultDynamicVolume
==============
*/
void R_LGV_PrepareDefaultDynamicVolume(void)
{
  LightGridVolumeSrcParams *VolumeInfo_Dynamic; 
  volatile int *p_numLightGridVolumeProbesUsed; 
  unsigned int v2; 
  int allocatedVolumeInfoSlot[4]; 
  vec3_t v8; 
  float v9; 
  Bounds v10; 

  allocatedVolumeInfoSlot[0] = 0;
  VolumeInfo_Dynamic = R_LGV_AllocateVolumeInfo_Dynamic(allocatedVolumeInfoSlot);
  if ( !VolumeInfo_Dynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp", 1020, ASSERT_TYPE_ASSERT, "(params)", (const char *)&queryFormat, "params") )
    __debugbreak();
  if ( allocatedVolumeInfoSlot[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp", 1021, ASSERT_TYPE_ASSERT, "(allocatedVolumeInfoSlot == 0x0000)", (const char *)&queryFormat, "allocatedVolumeInfoSlot == LIGHTGRID_VOLUME_INDEX_DEFAULT_FALLBACK") )
    __debugbreak();
  *(_WORD *)VolumeInfo_Dynamic->m_volumeSize = 257;
  VolumeInfo_Dynamic->m_volumeSize[2] = 1;
  p_numLightGridVolumeProbesUsed = &lgvGlob.frameData[lgvGlob.smpFrame].numLightGridVolumeProbesUsed;
  if ( ((unsigned __int8)p_numLightGridVolumeProbesUsed & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &lgvGlob.frameData[lgvGlob.smpFrame].numLightGridVolumeProbesUsed) )
    __debugbreak();
  _InterlockedExchangeAdd(p_numLightGridVolumeProbesUsed, 1u);
  VolumeInfo_Dynamic->m_historyEntry = R_LGV_AllocateHistoryEntries(1);
  VolumeInfo_Dynamic->m_lastFrameHistoryEntryAndSetup = 0xFFFF;
  VolumeInfo_Dynamic->m_basisType = 1;
  v2 = R_LGV_PackStaticProbeIndex(0, 0, 1, 0);
  __asm
  {
    vmovups xmm0, cs:__xmm@3f000000000000000000000000000000
    vmovss  xmm1, cs:__real@3f000000
    vmovups [rsp+88h+var_28], xmm0
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+88h+var_30], xmm0
    vunpcklps xmm0, xmm0, xmm0
  }
  VolumeInfo_Dynamic->m_firstStaticProbeIndex = v2;
  v8.v[2] = v9;
  __asm
  {
    vmovsd  [rsp+88h+var_48], xmm0
    vmovss  [rsp+88h+var_18], xmm1
    vmovss  [rsp+88h+var_14], xmm1
  }
  R_LGV_CalcTransform(&v10, &v8, identityMatrix33.m, VolumeInfo_Dynamic->m_volumeTransform);
  *(_QWORD *)VolumeInfo_Dynamic->m_samplingOffset.v = 0i64;
  VolumeInfo_Dynamic->m_samplingOffset.v[2] = 0.0;
}

/*
==============
R_LGV_PrepareVolumeInfo
==============
*/
unsigned __int64 R_LGV_PrepareVolumeInfo(const vec3_t *samplePos)
{
  unsigned __int64 result; 
  LightGridVolumeSrcParams *v3; 
  float v6; 
  int allocatedVolumeInfoSlot[4]; 
  vec3_t v9; 
  Bounds v10; 

  _RDI = samplePos;
  if ( !R_GpuLightGrid_DataAvailable() )
    return 0xFFFFi64;
  allocatedVolumeInfoSlot[0] = 0;
  result = (unsigned __int64)R_LGV_AllocateVolumeInfo_Dynamic(allocatedVolumeInfoSlot);
  v3 = (LightGridVolumeSrcParams *)result;
  if ( result )
  {
    *(_BYTE *)(result + 48) = truncate_cast<unsigned char,int>(1);
    v3->m_volumeSize[1] = truncate_cast<unsigned char,int>(1);
    v3->m_volumeSize[2] = truncate_cast<unsigned char,int>(1);
    R_LGV_AddProbes(1, lgvGlob.smpFrame);
    v3->m_historyEntry = R_LGV_AllocateHistoryEntries(1);
    v3->m_lastFrameHistoryEntryAndSetup = 0xFFFF;
    v3->m_basisType = 1;
    __asm
    {
      vmovups xmm0, cs:__xmm@3f000000000000000000000000000000
      vmovss  xmm1, cs:__real@3f000000
    }
    v3->m_firstStaticProbeIndex = R_LGV_PackStaticProbeIndex(0, 0, 0, 0);
    v6 = _RDI->v[2];
    __asm
    {
      vmovups [rsp+68h+var_28], xmm0
      vmovsd  xmm0, qword ptr [rdi]
    }
    v9.v[2] = v6;
    __asm
    {
      vmovsd  [rsp+68h+var_38], xmm0
      vmovss  [rsp+68h+var_18], xmm1
      vmovss  [rsp+68h+var_14], xmm1
    }
    R_LGV_CalcTransform(&v10, &v9, identityMatrix33.m, v3->m_volumeTransform);
    result = (unsigned int)allocatedVolumeInfoSlot[0];
    *(_QWORD *)v3->m_samplingOffset.v = 0i64;
    v3->m_samplingOffset.v[2] = 0.0;
  }
  return result;
}

/*
==============
R_LGV_PrepareVolumeInfo_DynModel
==============
*/
void R_LGV_PrepareVolumeInfo_DynModel(const LightGridVolumeModifier *lgvModifier, const unsigned int mapEntLookup, const XModel *probeModel, unsigned int materialLod, const GfxPlacement *pose, GfxModelLightingProbeInfo *lightingInfo, GpuLightGridRequestRecord *request, const GpuLightGridRequestRecord *lastRequest)
{
  __int64 v12; 
  int portalGISlot; 
  vec4_t quat; 
  tmat33_t<vec3_t> axis; 

  _RBX = pose;
  v12 = mapEntLookup;
  if ( R_GpuLightGrid_DataAvailable() )
  {
    UnitQuatToAxis(&pose->quat, &axis);
    if ( (lgvModifier->flags & 0x200) != 0 )
    {
      portalGISlot = s_world.gfxMapEntLookup[v12].portalGISlot;
      if ( portalGISlot != -1 )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [rbx]
          vmovups xmmword ptr [rsp+0B8h+quat], xmm0
        }
        R_UpdateDLS_Quat(&quat, portalGISlot, lgvGlob.smpFrame);
      }
    }
    R_LGV_PrepareVolumeInfo_Model(lgvModifier, probeModel, &pose->origin, &axis, materialLod, lightingInfo, request, lastRequest);
  }
}

/*
==============
R_LGV_PrepareVolumeInfo_Model
==============
*/
LightGridVolumeSrcParams *R_LGV_PrepareVolumeInfo_Model(const LightGridVolumeModifier *lgvModifier, const XModel *model, const vec3_t *origin, const tmat33_t<vec3_t> *rot, unsigned int materialLod, GfxModelLightingProbeInfo *lightingInfo, GpuLightGridRequestRecord *request, const GpuLightGridRequestRecord *lastRequest)
{
  const XModel *v19; 
  char v30; 
  char v31; 
  unsigned int flags; 
  bool v34; 
  int v35; 
  int v36; 
  int v37; 
  __int16 v41; 
  int v60; 
  int v61; 
  char v62; 
  char v63; 
  int v64; 
  int *p_lgvSize; 
  int LgvThinStable; 
  bool v70; 
  bool v72; 
  unsigned int HistoryEntries; 
  int v79; 
  unsigned int v80; 
  GpuLightGridRequestRecord *v81; 
  int v82; 
  unsigned __int8 v83; 
  const vec3_t *v84; 
  unsigned int v91; 
  float v106; 
  GpuLightGridRequestRecord *v108; 
  int v109; 
  unsigned int dumpXModels; 
  __int64 v118; 
  bool enabled; 
  bool v121; 
  int maxProbesUse; 
  unsigned int maxProbesUseb; 
  bool v125; 
  int integer; 
  int v127; 
  int allocatedVolumeInfoSlot; 
  vec3_t v130; 
  vec3_t v131; 
  GpuLightGridRequestRecord *v132; 
  GpuLightGridRequestRecord *v133; 
  GfxModelLightingProbeInfo *v134; 
  Bounds bounds; 
  int lgvSize; 
  int v137; 
  int v138; 
  void *retaddr; 

  _R11 = &retaddr;
  v19 = model;
  _R13 = lgvModifier;
  __asm
  {
    vmovaps xmmword ptr [r11-78h], xmm9
    vmovaps xmmword ptr [r11-88h], xmm10
    vmovaps xmmword ptr [r11-98h], xmm11
  }
  v133 = request;
  __asm
  {
    vmovaps xmmword ptr [r11-0A8h], xmm12
    vmovaps xmmword ptr [r11-0C8h], xmm14
  }
  *(_QWORD *)v131.v = rot;
  *(_QWORD *)v130.v = origin;
  v134 = lightingInfo;
  v132 = (GpuLightGridRequestRecord *)lastRequest;
  allocatedVolumeInfoSlot = 0;
  _RDI = R_LGV_AllocateVolumeInfo_Dynamic(&allocatedVolumeInfoSlot);
  __asm
  {
    vmovss  xmm12, cs:__real@3f800000
    vxorps  xmm10, xmm10, xmm10
    vmovaps xmm9, xmm12
  }
  maxProbesUse = r_lgvMaxProbes->current.integer;
  enabled = r_lgvThinDisable->current.enabled;
  v125 = 1;
  _RCX = r_lgvThinOverridePushOff;
  v121 = r_lgvThinOverride->current.enabled;
  __asm { vmovss  xmm14, dword ptr [rcx+28h] }
  _RCX = r_lgvThinOverrideShrink;
  __asm { vmovss  xmm11, dword ptr [rcx+28h] }
  integer = r_lgvThinOverrideStable->current.integer;
  _RAX = r_lgvForceXModelDensity;
  __asm { vcomiss xmm10, dword ptr [rax+28h] }
  v31 = v30;
  if ( !_RDI )
  {
    lightingInfo->lgv.allocatedVolumeInfoSlot = 0;
    goto LABEL_78;
  }
  __asm
  {
    vmovaps [rsp+180h+var_40], xmm6
    vmovaps [rsp+180h+var_B0], xmm13
  }
  XModelGetBounds(v19, &bounds);
  flags = _R13->flags;
  __asm { vmovss  xmm13, cs:__real@bf800000 }
  v34 = (_R13->flags & 0x440) == 0;
  if ( (_R13->flags & 0x440) != 0 || !materialLod && ((v34 = (flags & 2) == 0) || (v34 = _R13->dimension == 0, _R13->dimension)) )
  {
    _RAX = r_lgvForceXModelDensity;
    __asm
    {
      vmovaps [rsp+180h+var_50], xmm7
      vmovaps [rsp+180h+var_60], xmm8
      vmovss  xmm1, dword ptr [rax+28h]
      vcomiss xmm1, xmm10
    }
    if ( v34 )
    {
      *(double *)&_XMM0 = XModelGetLgvDensity(v19);
      flags = _R13->flags;
      __asm { vmovaps xmm1, xmm0 }
    }
    v41 = flags;
    if ( !v31 && (flags & 0x800) != 0 )
      __asm { vmovss  xmm1, dword ptr [r13+1Ch] }
    __asm
    {
      vmovss  xmm0, cs:__real@40000000
      vmovss  xmm8, dword ptr [rbp+80h+bounds.halfSize]
      vmovss  xmm7, dword ptr [rbp+80h+bounds.halfSize+4]
      vmovss  xmm6, dword ptr [rbp+80h+bounds.halfSize+8]
      vdivss  xmm2, xmm0, xmm1
      vxorps  xmm0, xmm0, xmm0
      vmulss  xmm1, xmm8, xmm2
      vroundss xmm0, xmm0, xmm1, 1
      vcvttss2si eax, xmm0
    }
    v35 = 1;
    __asm { vxorps  xmm1, xmm1, xmm1 }
    if ( _EAX > 1 )
      v35 = _EAX;
    v36 = 1;
    v37 = 1;
    __asm { vmulss  xmm0, xmm7, xmm2 }
    if ( v35 > 16 )
      v35 = 16;
    __asm
    {
      vroundss xmm1, xmm1, xmm0, 1
      vcvttss2si eax, xmm1
    }
    lgvSize = v35;
    __asm { vmulss  xmm0, xmm6, xmm2 }
    if ( _EAX > 1 )
      v36 = _EAX;
    __asm { vxorps  xmm1, xmm1, xmm1 }
    if ( v36 > 16 )
      v36 = 16;
    __asm
    {
      vroundss xmm1, xmm1, xmm0, 1
      vcvttss2si eax, xmm1
    }
    v137 = v36;
    if ( _EAX > 1 )
      v37 = _EAX;
    if ( v37 > 15 )
      v37 = 15;
    v138 = v37;
    if ( maxProbesUse > 0 )
    {
      v60 = -1;
      v61 = -1;
      if ( (flags & 0x400) != 0 )
      {
        __asm { vcomiss xmm8, xmm7 }
        if ( (flags & 0x400) != 0 )
        {
          __asm
          {
            vcomiss xmm8, xmm6
            vcomiss xmm6, xmm7
          }
          v61 = 2;
        }
        else
        {
          __asm { vcomiss xmm7, xmm6 }
          if ( ((flags & 0x400) != 0) | v62 )
          {
            __asm { vcomiss xmm8, xmm6 }
            v61 = 0;
          }
          else
          {
            v61 = 1;
          }
        }
      }
      if ( (flags & 0x40) != 0 && !enabled )
      {
        __asm
        {
          vcomiss xmm8, xmm7
          vcomiss xmm6, xmm7
        }
        v60 = !enabled + 1;
      }
      UB_BoundProbes(v60, v61, maxProbesUse, &lgvSize);
      v37 = v138;
      v41 = flags;
      v36 = v137;
      v35 = lgvSize;
    }
    if ( (v41 & 0x400) == 0 )
      goto LABEL_48;
    __asm { vcomiss xmm8, xmm7 }
    if ( (v41 & 0x400) != 0 )
    {
      __asm { vcomiss xmm8, xmm6 }
      if ( ((v41 & 0x400) != 0) | v63 )
      {
        __asm { vcomiss xmm7, xmm6 }
        if ( (v41 & 0x400) != 0 )
        {
          v64 = v36;
          p_lgvSize = &v137;
          goto LABEL_46;
        }
LABEL_44:
        v64 = v37;
        p_lgvSize = &v138;
        goto LABEL_46;
      }
    }
    else
    {
      __asm { vcomiss xmm7, xmm6 }
      if ( !(((v41 & 0x400) != 0) | v63) )
      {
        v64 = v36;
        p_lgvSize = &v137;
        goto LABEL_46;
      }
      __asm { vcomiss xmm6, xmm8 }
      if ( (v41 & 0x400) != 0 )
        goto LABEL_44;
    }
    p_lgvSize = &lgvSize;
    v64 = v35;
LABEL_46:
    if ( v64 == 1 )
    {
      *p_lgvSize = 2;
      v37 = v138;
      v36 = v137;
      v35 = lgvSize;
    }
LABEL_48:
    LOBYTE(flags) = v41;
    if ( (v41 & 0x40) != 0 && !enabled )
    {
      __asm
      {
        vcomiss xmm8, xmm7
        vcomiss xmm6, xmm7
      }
      _R14 = 2i64;
      *(double *)&_XMM0 = XModelGetLgvThinShrink(model);
      __asm { vmovaps xmm6, xmm0 }
      LgvThinStable = XModelGetLgvThinStable(model);
      flags = _R13->flags;
      __asm { vmovss  xmm2, dword ptr [r13+14h] }
      v70 = LgvThinStable != 0;
      __asm { vcmpneqss xmm1, xmm2, xmm13 }
      if ( (_R13->flags & 0x80u) != 0 )
        v70 = 1;
      v72 = 0;
      if ( (flags & 0x100) == 0 )
        v72 = v70;
      __asm { vblendvps xmm0, xmm6, xmm2, xmm1 }
      v125 = v72;
      __asm { vmovss  [rsp+180h+maxProbesUse], xmm0 }
      if ( v121 )
      {
        v125 = v72;
        __asm { vmovaps xmm9, xmm11 }
        if ( integer != -1 )
          v125 = integer == 1;
      }
      else
      {
        __asm { vmovss  xmm9, [rsp+180h+maxProbesUse] }
      }
      __asm { vmulss  xmm0, xmm9, dword ptr [rbp+r14*4+80h+bounds.halfSize] }
      v138 = 2;
      v37 = 2;
      v36 = v137;
      __asm { vmovss  dword ptr [rbp+r14*4+80h+bounds.halfSize], xmm0 }
      v35 = lgvSize;
    }
    __asm
    {
      vmovaps xmm7, [rsp+180h+var_50]
      vmovaps xmm8, [rsp+180h+var_60]
    }
    goto LABEL_60;
  }
  v35 = 1;
  lgvSize = 1;
  v36 = 1;
  v137 = 1;
  v37 = 1;
  v138 = 1;
LABEL_60:
  if ( (flags & 2) != 0 )
  {
    R_LGV_ModifyDimension(_R13, &lgvSize);
    v37 = v138;
    v36 = v137;
    v35 = lgvSize;
  }
  v127 = v35 * v36 * v37;
  R_LGV_AddProbes(v127, lgvGlob.smpFrame);
  HistoryEntries = R_LGV_AllocateHistoryEntries(v127);
  v79 = _R13->flags;
  v80 = HistoryEntries;
  v81 = v132;
  v82 = _R13->flags | 0x10;
  maxProbesUseb = HistoryEntries;
  v34 = (model->flags & 0x400000) == 0;
  _RDI->m_historyEntry = HistoryEntries;
  if ( v34 )
    v82 = v79;
  _RDI->m_lastFrameHistoryEntryAndSetup = R_LGV_EncodeLastFrameEntryAndSetup(v82, v81);
  _RDI->m_firstStaticProbeIndex = R_LGV_PackStaticProbeIndex(0, 0, 0, 0);
  _RDI->m_volumeSize[0] = truncate_cast<unsigned char,int>(v35);
  _RDI->m_volumeSize[1] = truncate_cast<unsigned char,int>(v36);
  v83 = truncate_cast<unsigned char,int>(v37);
  v84 = *(const vec3_t **)v131.v;
  _RDI->m_volumeSize[2] = v83;
  _RAX = *(_QWORD *)v130.v;
  _RDI->m_basisType = 1;
  __asm { vmovsd  xmm0, qword ptr [rax] }
  LODWORD(_RAX) = *(_DWORD *)(_RAX + 8);
  __asm { vmovsd  [rsp+180h+var_130], xmm0 }
  LODWORD(v130.v[2]) = _RAX;
  R_LGV_CalcTransform(&bounds, &v130, v84, _RDI->m_volumeTransform);
  _ER12 = 0;
  if ( (_R13->flags & 1) != 0 )
  {
    _RDI->m_samplingOffset.v[0] = _R13->probesOffset.v[0];
    _RDI->m_samplingOffset.v[1] = _R13->probesOffset.v[1];
    __asm { vmovss  xmm10, dword ptr [r13+0Ch] }
  }
  else
  {
    *(_QWORD *)_RDI->m_samplingOffset.v = 0i64;
  }
  __asm { vmovss  dword ptr [rdi+4Ch], xmm10 }
  if ( enabled || (_R13->flags & 0x40) == 0 )
  {
    v19 = model;
  }
  else
  {
    __asm
    {
      vmovss  xmm2, dword ptr [rbp+80h+bounds.halfSize]
      vmovss  xmm1, dword ptr [rbp+80h+bounds.halfSize+4]
      vcomiss xmm2, xmm1
      vmovss  xmm0, dword ptr [rbp+80h+bounds.halfSize+8]
      vcomiss xmm0, xmm1
    }
    v91 = ((_R13->flags & 0x40) == 0) + 1;
    v19 = model;
    *(double *)&_XMM0 = XModelGetLgvThinPush(model);
    __asm { vmovss  xmm2, dword ptr [r13+18h] }
    _EAX = v121;
    __asm
    {
      vcmpneqss xmm1, xmm2, xmm13
      vblendvps xmm3, xmm0, xmm2, xmm1
      vmovd   xmm1, r12d
      vmovd   xmm0, eax
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm0, xmm14, xmm3, xmm2
      vmulss  xmm1, xmm0, cs:__real@3f000000
      vdivss  xmm6, xmm1, dword ptr [rbp+rsi*4+80h+bounds.halfSize]
    }
    _RAX = vec3_t::operator[](&_RDI->m_samplingOffset, v91);
    _R12 = &lgvGlob;
    __asm { vmovss  dword ptr [rax], xmm6 }
    _RDI->m_flags |= 0x40u;
    if ( !v125 )
    {
      _RCX = lgvGlob.smpFrame;
      __asm { vmovsd  xmm0, qword ptr [rcx+r12+8240h] }
      v106 = lgvGlob.frameData[_RCX].camera_ws.v[2];
      __asm
      {
        vmovsd  [rsp+180h+var_120], xmm0
        vdivss  xmm0, xmm12, xmm9
      }
      v131.v[2] = v106;
      R_LGV_UpdateTransform(*(const float *)&_XMM0, &_RDI->m_volumeTransform[v91], &v131);
    }
    v80 = maxProbesUseb;
  }
  v108 = v133;
  v109 = allocatedVolumeInfoSlot;
  __asm
  {
    vmovaps xmm13, [rsp+180h+var_B0]
    vmovaps xmm6, [rsp+180h+var_40]
  }
  if ( v133 )
  {
    v133->lgvFrame = lgvGlob.globalFrame;
    if ( s_world.draw.lightGridType == GFX_LIGHTGRID_TYPE_MULTI )
      v80 = v109;
    v108->lgvNumProbes = v127;
    v108->lgvHistoryEntry = v80;
    v108->lgvBasisType = _RDI->m_basisType;
  }
  v134->lgv.allocatedVolumeInfoSlot = v109;
LABEL_78:
  __asm
  {
    vmovaps xmm14, [rsp+180h+var_C0]
    vmovaps xmm12, [rsp+180h+var_A0]
    vmovaps xmm11, [rsp+180h+var_90]
    vmovaps xmm10, [rsp+180h+var_80]
    vmovaps xmm9, [rsp+180h+var_70]
  }
  dumpXModels = lgvGlob.frameData[lgvGlob.smpFrame].dumpXModels;
  if ( dumpXModels )
  {
    v118 = _RDI->m_volumeSize[0];
    if ( (unsigned int)v118 >= dumpXModels || _RDI->m_volumeSize[1] >= dumpXModels || _RDI->m_volumeSize[2] >= dumpXModels )
      Com_Printf(8, "Model: %s (LGV Dim: %ux%ux%u)\n", v19->name, v118, _RDI->m_volumeSize[1], _RDI->m_volumeSize[2]);
  }
  return _RDI;
}

/*
==============
R_LGV_PrepareVolumeInfo_SceneEnt
==============
*/
void R_LGV_PrepareVolumeInfo_SceneEnt(const LightGridVolumeModifier *lgvModifier, const GfxSceneEntity *sceneEnt, GfxModelLightingProbeInfo *lightingInfo, GpuLightGridRequestRecord *request, const GpuLightGridRequestRecord *lastRequest)
{
  unsigned int NumModels; 
  int integer; 

  if ( R_GpuLightGrid_DataAvailable() )
  {
    if ( (unsigned __int64)DObjGetNumModels(sceneEnt->obj) >= 0x80 )
    {
      NumModels = DObjGetNumModels(sceneEnt->obj);
      R_WarnOncePerFrame(R_WARN_MODEL_SH_LIGHTING_SCENEENT_MAX_MODELCOUNT, *((_DWORD *)sceneEnt + 346) & 0x3FF, (*((_DWORD *)sceneEnt + 346) >> 10) & 0xFFF, NumModels, 128i64);
    }
    if ( (lgvModifier->flags & 8) != 0 )
    {
      R_LGV_PrepareVolumeInfo_SceneEnt_UseEntBounds(lgvModifier, sceneEnt, lightingInfo, request, lastRequest);
    }
    else if ( (lgvModifier->flags & 0x20) != 0 )
    {
      R_LGV_PrepareVolumeInfo_SceneEnt_ExplodeModels(lgvModifier, sceneEnt, lightingInfo, request, lastRequest);
    }
    else
    {
      R_LGV_PrepareVolumeInfo_SceneEnt_CombineModels(lgvModifier, sceneEnt, lightingInfo, request, lastRequest);
    }
    integer = r_lgvDebugEnt->current.integer;
    if ( integer >= 0 && integer == ((*((_DWORD *)sceneEnt + 346) >> 10) & 0xFFF) )
      lgvGlob.frameData[lgvGlob.smpFrame].debugSceneEnt = sceneEnt;
  }
}

/*
==============
R_LGV_PrepareVolumeInfo_SceneEnt_CombineModels
==============
*/
void R_LGV_PrepareVolumeInfo_SceneEnt_CombineModels(const LightGridVolumeModifier *lgvModifier, const GfxSceneEntity *sceneEnt, GfxModelLightingProbeInfo *lightingInfo, GpuLightGridRequestRecord *request, const GpuLightGridRequestRecord *lastRequest)
{
  __int64 v15; 
  int HistoryEntries; 
  const dvar_t *v17; 
  int v18; 
  const dvar_t *v20; 
  const dvar_t *v21; 
  __int64 v31; 
  int v32; 
  char v36; 
  bool v39; 
  unsigned int flags; 
  int v54; 
  int v56; 
  int v62; 
  int v65; 
  int v66; 
  int v67; 
  bool v68; 
  char v69; 
  int v70; 
  int *p_lgvSize; 
  int NumModels; 
  int v73; 
  int v74; 
  char v75; 
  const DObj *v76; 
  int v77; 
  const XModel *Model; 
  const XModel *v79; 
  int LgvThinStable; 
  bool v90; 
  bool v91; 
  unsigned __int8 v99; 
  int v100; 
  unsigned __int8 v101; 
  const GpuLightGridRequestRecord *v103; 
  unsigned int v104; 
  __int64 v138; 
  int v147; 
  int v148; 
  __int64 v155; 
  GfxModelLightingProbeInfo *v156; 
  __int64 i; 
  unsigned int *p_lgvNumProbes; 
  __int64 v159; 
  int v160; 
  unsigned int *v161; 
  int v162; 
  bool enabled; 
  bool v164; 
  bool v165; 
  signed int maxProbesUse; 
  unsigned int maxProbesUsea; 
  int allocatedVolumeInfoSlot[2]; 
  LightGridVolumeModifier *lgvModifiera; 
  vec3_t v171; 
  vec3_t v172; 
  GfxSceneEntity *sceneEnta; 
  GfxModelLightingProbeInfo *v174; 
  GpuLightGridRequestRecord *v175; 
  vec3_t outOrigin; 
  vec4_t quat; 
  Bounds entBounds; 
  Bounds outBounds; 
  tmat33_t<vec3_t> axis; 
  int lgvSize; 
  int v182; 
  int v183; 
  void *retaddr; 

  _R11 = &retaddr;
  v15 = 0i64;
  *(_QWORD *)v172.v = lastRequest;
  HistoryEntries = 0xFFFF;
  v17 = r_lgvMaxProbes;
  v18 = 0;
  _R12 = sceneEnt;
  __asm
  {
    vmovaps xmmword ptr [r11-78h], xmm9
    vmovaps xmmword ptr [r11-88h], xmm10
  }
  maxProbesUse = v17->current.integer;
  v20 = r_lgvThinDisable;
  __asm
  {
    vmovaps xmmword ptr [r11-98h], xmm11
    vmovaps xmmword ptr [r11-0A8h], xmm12
    vmovaps xmmword ptr [r11-0B8h], xmm13
  }
  enabled = v20->current.enabled;
  v21 = r_lgvThinOverride;
  lgvModifiera = (LightGridVolumeModifier *)lgvModifier;
  __asm
  {
    vmovaps xmmword ptr [r11-0C8h], xmm14
    vmovss  xmm14, cs:__real@3f800000
  }
  v164 = v21->current.enabled;
  _RAX = r_lgvThinOverridePushOff;
  __asm { vxorps  xmm11, xmm11, xmm11 }
  v175 = request;
  v174 = lightingInfo;
  __asm { vmovss  xmm12, dword ptr [rax+28h] }
  _RAX = r_lgvThinOverrideShrink;
  sceneEnta = (GfxSceneEntity *)sceneEnt;
  allocatedVolumeInfoSlot[1] = 0xFFFF;
  __asm
  {
    vxorps  xmm10, xmm10, xmm10
    vmovss  xmm13, dword ptr [rax+28h]
    vmovaps xmm9, xmm14
  }
  v165 = 1;
  _RAX = r_lgvForceXModelDensity;
  allocatedVolumeInfoSlot[0] = r_lgvThinOverrideStable->current.integer;
  __asm { vcomiss xmm11, dword ptr [rax+28h] }
  *(_QWORD *)v171.v = R_LGV_AllocateVolumeInfo_Dynamic(&allocatedVolumeInfoSlot[1]);
  v31 = *(_QWORD *)v171.v;
  v32 = 128;
  if ( !*(_QWORD *)v171.v )
  {
    v147 = 0;
    goto LABEL_109;
  }
  __asm { vmovaps xmmword ptr [rsp+1F0h+var_48+8], xmm6 }
  GfxSceneEntity_GetPlacementOrigin(_R12, &outOrigin);
  if ( !_R12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene_api.h", 553, ASSERT_TYPE_ASSERT, "(sceneEnt)", (const char *)&queryFormat, "sceneEnt") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr [r12+0Ch]
    vmovups xmmword ptr [rbp+0F0h+quat], xmm0
  }
  UnitQuatToAxis(&quat, &axis);
  GfxSceneEntity_GetBounds(&_R12->cull, &outBounds);
  _RDI = DVARFLT_r_corpse_lighting_hack;
  if ( !DVARFLT_r_corpse_lighting_hack && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_corpse_lighting_hack") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm6, dword ptr [rdi+28h]
    vcomiss xmm6, xmm11
  }
  if ( !(v36 | v68) && (*((_DWORD *)_R12 + 347) & 0x100) != 0 )
    LOBYTE(v18) = 1;
  _RDI = DCONST_DVARFLT_r_character_lighting_hack;
  if ( !DCONST_DVARFLT_r_character_lighting_hack && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_character_lighting_hack") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm1, dword ptr [rdi+28h]
    vcomiss xmm1, xmm11
  }
  v39 = !(v36 | v68) && (*((_BYTE *)_R12 + 1388) & 0x40) != 0;
  if ( (_BYTE)v18 )
  {
    __asm { vaddss  xmm1, xmm6, dword ptr [rbp+0F0h+outOrigin+8] }
  }
  else
  {
    if ( !v39 )
      goto LABEL_23;
    __asm { vaddss  xmm1, xmm1, dword ptr [rbp+0F0h+outOrigin+8] }
  }
  __asm
  {
    vmovsd  xmm0, qword ptr [rbp+0F0h+outOrigin]
    vmovsd  qword ptr [rbp+0F0h+outBounds.midPoint], xmm0
    vmovss  dword ptr [rbp+0F0h+outBounds.midPoint+8], xmm1
  }
LABEL_23:
  *(float *)&_XMM0 = R_SceneEnt_GetLgvDensity(_R12);
  _R15 = lgvModifiera;
  __asm { vmovaps xmm6, xmm0 }
  if ( (lgvModifiera->flags & 0x800) != 0 )
    __asm { vmovss  xmm6, dword ptr [r15+1Ch] }
  __asm
  {
    vmovaps [rsp+1F0h+var_58+8], xmm7
    vmovaps xmm1, xmm6; volumeDensity
  }
  if ( !R_SceneEnt_UseSingleProbe(_R12, *(float *)&_XMM1, &outBounds, lgvModifiera) && !v39 && !(_BYTE)v18 )
  {
    __asm { vmovaps [rsp+1F0h+var_68+8], xmm8 }
    R_SceneEnt_CalcModelBounds(_R12, &outOrigin, &axis, &entBounds);
    __asm
    {
      vmovss  xmm0, cs:__real@40000000
      vmovss  xmm8, dword ptr [rbp+0F0h+entBounds.halfSize]
      vmovss  xmm7, dword ptr [rbp+0F0h+entBounds.halfSize+4]
    }
    flags = _R15->flags;
    __asm
    {
      vdivss  xmm2, xmm0, xmm6
      vmovss  xmm6, dword ptr [rbp+0F0h+entBounds.halfSize+8]
      vxorps  xmm0, xmm0, xmm0
      vmulss  xmm1, xmm8, xmm2
      vroundss xmm0, xmm0, xmm1, 1
      vcvttss2si eax, xmm0
    }
    v54 = 1;
    __asm { vxorps  xmm1, xmm1, xmm1 }
    if ( _EAX > 1 )
      v54 = _EAX;
    v56 = 1;
    __asm { vmulss  xmm0, xmm7, xmm2 }
    if ( v54 > 16 )
      v54 = 16;
    __asm
    {
      vroundss xmm1, xmm1, xmm0, 1
      vcvttss2si eax, xmm1
    }
    lgvSize = v54;
    __asm { vmulss  xmm0, xmm6, xmm2 }
    if ( _EAX > 1 )
      v56 = _EAX;
    __asm { vxorps  xmm1, xmm1, xmm1 }
    if ( v56 > 16 )
      v56 = 16;
    v62 = 1;
    __asm
    {
      vroundss xmm1, xmm1, xmm0, 1
      vcvttss2si eax, xmm1
    }
    v182 = v56;
    if ( _EAX > 1 )
      v62 = _EAX;
    if ( v62 > 15 )
      v62 = 15;
    LODWORD(quat.v[0]) = v62;
    v65 = -1;
    v183 = v62;
    if ( maxProbesUse > 0 )
    {
      v66 = -1;
      v67 = -1;
      if ( (flags & 0x400) != 0 )
      {
        __asm { vcomiss xmm8, xmm7 }
        if ( (flags & 0x400) != 0 )
        {
          __asm { vcomiss xmm8, xmm6 }
          v67 = 0;
          if ( (flags & 0x400) != 0 || v68 )
          {
            __asm { vcomiss xmm6, xmm7 }
            LOBYTE(v67) = (flags & 0x400) != 0 || v68;
            ++v67;
          }
        }
        else
        {
          __asm { vcomiss xmm7, xmm6 }
          if ( (flags & 0x400) != 0 || v68 )
          {
            __asm { vcomiss xmm8, xmm6 }
            v67 = 0;
            if ( (flags & 0x400) == 0 && !v68 )
              v67 = 2;
          }
          else
          {
            v67 = 1;
          }
        }
      }
      if ( (flags & 0x40) != 0 && !enabled )
      {
        __asm
        {
          vcomiss xmm8, xmm7
          vcomiss xmm6, xmm7
        }
        v66 = 2;
      }
      UB_BoundProbes(v66, v67, maxProbesUse, &lgvSize);
      v62 = v183;
      v56 = v182;
      v54 = lgvSize;
      LODWORD(quat.v[0]) = v183;
    }
    if ( (flags & 0x400) == 0 )
      goto LABEL_65;
    __asm { vcomiss xmm8, xmm7 }
    if ( (flags & 0x400) != 0 )
    {
      __asm { vcomiss xmm8, xmm6 }
      if ( ((flags & 0x400) != 0) | v69 )
      {
        __asm { vcomiss xmm7, xmm6 }
        if ( (flags & 0x400) != 0 )
        {
          v70 = v56;
          p_lgvSize = &v182;
          goto LABEL_63;
        }
LABEL_61:
        v70 = v62;
        p_lgvSize = &v183;
        goto LABEL_63;
      }
    }
    else
    {
      __asm { vcomiss xmm7, xmm6 }
      if ( !(((flags & 0x400) != 0) | v69) )
      {
        v70 = v56;
        p_lgvSize = &v182;
        goto LABEL_63;
      }
      __asm { vcomiss xmm6, xmm8 }
      if ( (flags & 0x400) != 0 )
        goto LABEL_61;
    }
    p_lgvSize = &lgvSize;
    v70 = v54;
LABEL_63:
    if ( v70 == 1 )
    {
      *p_lgvSize = 2;
      v62 = v183;
      v56 = v182;
      v54 = lgvSize;
      LODWORD(quat.v[0]) = v183;
    }
LABEL_65:
    if ( !enabled && (flags & 0x40) != 0 )
    {
      __asm
      {
        vcomiss xmm8, xmm7
        vcomiss xmm6, xmm7
      }
      maxProbesUsea = ((flags & 0x40) == 0) + 1;
      *(_QWORD *)quat.v = sceneEnta->obj;
      NumModels = DObjGetNumModels(*(const DObj **)quat.v);
      v73 = 0;
      v74 = 128;
      if ( NumModels < 128 )
        v74 = NumModels;
      v75 = 0;
      if ( v74 <= 0 )
        goto LABEL_84;
      v76 = *(const DObj **)quat.v;
      v77 = v74;
      do
      {
        Model = DObjGetModel(v76, v73);
        v79 = Model;
        if ( (Model->flags & 0x1000000) != 0 )
        {
          *(double *)&_XMM0 = XModelGetLgvThinPush(Model);
          __asm { vmovaps xmm6, xmm0 }
          *(double *)&_XMM0 = XModelGetLgvThinShrink(v79);
          __asm { vmovaps xmm7, xmm0 }
          LgvThinStable = XModelGetLgvThinStable(v79);
          if ( v75 )
          {
            __asm
            {
              vminss  xmm10, xmm6, xmm10
              vminss  xmm9, xmm7, xmm9
            }
            if ( LgvThinStable > -1 )
            {
              if ( v65 <= -1 )
                v65 = LgvThinStable;
              else
                v65 |= LgvThinStable;
            }
          }
          else
          {
            v75 = 1;
            __asm { vmovaps xmm10, xmm6 }
            if ( LgvThinStable != -1 )
              v65 = LgvThinStable;
            __asm { vmovaps xmm9, xmm7 }
          }
        }
        ++v73;
      }
      while ( v73 < v77 );
      v31 = *(_QWORD *)v171.v;
      _R15 = lgvModifiera;
      if ( !v75 )
        goto LABEL_84;
      __asm
      {
        vmovss  xmm1, dword ptr [r15+18h]
        vcmpneqss xmm0, xmm1, cs:__real@bf800000
        vblendvps xmm0, xmm10, xmm1, xmm0
        vmovss  xmm1, dword ptr [r15+14h]
        vmovss  dword ptr [rbp+0F0h+quat], xmm0
        vcmpneqss xmm0, xmm1, cs:__real@bf800000
        vmovss  xmm10, dword ptr [rbp+0F0h+quat]
        vblendvps xmm0, xmm9, xmm1, xmm0
        vmovss  [rsp+1F0h+var_1A4], xmm0
        vmovss  xmm9, [rsp+1F0h+var_1A4]
      }
      if ( v65 == -1 )
LABEL_84:
        v90 = 1;
      else
        v90 = v65 == 1;
      if ( (_R15->flags & 0x80u) != 0 )
        v90 = 1;
      v91 = 0;
      if ( (_R15->flags & 0x100) == 0 )
        v91 = v90;
      v165 = v91;
      if ( v164 )
      {
        v165 = v91;
        __asm
        {
          vmovaps xmm10, xmm12
          vmovaps xmm9, xmm13
        }
        if ( allocatedVolumeInfoSlot[0] != -1 )
          v165 = allocatedVolumeInfoSlot[0] == 1;
      }
      _RAX = maxProbesUsea;
      __asm { vmulss  xmm0, xmm9, dword ptr [rbp+rax*4+0F0h+entBounds.halfSize] }
      *(&lgvSize + maxProbesUsea) = 2;
      v62 = v183;
      v56 = v182;
      v54 = lgvSize;
      __asm { vmovss  dword ptr [rbp+rax*4+0F0h+entBounds.halfSize], xmm0 }
      LODWORD(quat.v[0]) = v62;
    }
    __asm { vmovaps xmm8, [rsp+1F0h+var_68+8] }
    goto LABEL_95;
  }
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B; tmat33_t<vec3_t> const identityMatrix33
    vmovsd  xmm1, qword ptr [rbp+0F0h+outBounds.halfSize+4]
    vmovups ymmword ptr [rbp+0F0h+axis], ymm0
    vmovups xmm0, xmmword ptr [rbp+0F0h+outBounds.midPoint]
  }
  axis.m[2].v[2] = identityMatrix33.m[2].v[2];
  __asm
  {
    vmovups xmmword ptr [rbp+0F0h+entBounds.midPoint], xmm0
    vmovss  dword ptr [rbp+0F0h+outOrigin], xmm11
    vmovss  dword ptr [rbp+0F0h+outOrigin+4], xmm11
    vmovss  dword ptr [rbp+0F0h+outOrigin+8], xmm11
    vmovsd  qword ptr [rbp+0F0h+entBounds.halfSize+4], xmm1
  }
  v54 = 1;
  lgvSize = 1;
  v56 = 1;
  v182 = 1;
  v62 = 1;
  LODWORD(quat.v[0]) = 1;
  v183 = 1;
LABEL_95:
  if ( (_R15->flags & 2) != 0 )
  {
    R_LGV_ModifyDimension(_R15, &lgvSize);
    v62 = v183;
    v56 = v182;
    v54 = lgvSize;
    LODWORD(quat.v[0]) = v183;
  }
  v18 = v54 * v56 * v62;
  R_LGV_AddProbes(v18, lgvGlob.smpFrame);
  HistoryEntries = R_LGV_AllocateHistoryEntries(v18);
  *(_BYTE *)(v31 + 48) = truncate_cast<unsigned char,int>(v54);
  v99 = truncate_cast<unsigned char,int>(v56);
  v100 = LODWORD(quat.v[0]);
  *(_BYTE *)(v31 + 49) = v99;
  v101 = truncate_cast<unsigned char,int>(v100);
  _RSI = &lgvModifiera->flags;
  v103 = *(const GpuLightGridRequestRecord **)v172.v;
  *(_BYTE *)(v31 + 50) = v101;
  *(_DWORD *)(v31 + 60) = HistoryEntries;
  *(_DWORD *)(v31 + 64) = R_LGV_EncodeLastFrameEntryAndSetup(*_RSI, v103);
  *(_BYTE *)(v31 + 52) = 1;
  v104 = R_LGV_PackStaticProbeIndex(0, 0, 0, 0);
  __asm { vmovsd  xmm0, qword ptr [rbp+0F0h+outOrigin] }
  *(_DWORD *)(v31 + 56) = v104;
  v172.v[2] = outOrigin.v[2];
  __asm { vmovsd  qword ptr [rsp+1F0h+var_180], xmm0 }
  R_LGV_CalcTransform(&entBounds, &v172, axis.m, (vec4_t *)v31);
  _RCX = (vec3_t *)(v31 + 68);
  if ( (*_RSI & 4) != 0 )
  {
    __asm
    {
      vmovss  xmm7, dword ptr [rbp+0F0h+entBounds.midPoint]
      vmovss  xmm6, dword ptr [rbp+0F0h+entBounds.midPoint+4]
      vmovss  xmm5, dword ptr [rbp+0F0h+entBounds.midPoint+8]
      vmulss  xmm1, xmm7, dword ptr [rbp+0F0h+axis]
      vmulss  xmm0, xmm6, dword ptr [rbp+0F0h+axis+0Ch]
      vmulss  xmm4, xmm7, dword ptr [rbp+0F0h+axis+4]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm5, dword ptr [rbp+0F0h+axis+18h]
      vaddss  xmm0, xmm2, xmm1
      vaddss  xmm3, xmm0, dword ptr [rbp+0F0h+outOrigin]
      vmovss  xmm2, dword ptr [rsi+4]
      vmulss  xmm0, xmm6, dword ptr [rbp+0F0h+axis+10h]
      vsubss  xmm1, xmm2, xmm3
      vaddss  xmm2, xmm4, xmm0
      vmovss  dword ptr [rcx], xmm1
      vmovss  xmm0, dword ptr [rsi+8]
      vmulss  xmm1, xmm5, dword ptr [rbp+0F0h+axis+1Ch]
      vaddss  xmm2, xmm2, xmm1
      vaddss  xmm3, xmm2, dword ptr [rbp+0F0h+outOrigin+4]
      vmulss  xmm2, xmm7, dword ptr [rbp+0F0h+axis+8]
      vsubss  xmm1, xmm0, xmm3
      vmulss  xmm0, xmm6, dword ptr [rbp+0F0h+axis+14h]
      vmovss  dword ptr [rcx+4], xmm1
      vmulss  xmm1, xmm5, dword ptr [rbp+0F0h+axis+20h]
      vaddss  xmm3, xmm2, xmm0
      vmovss  xmm0, dword ptr [rsi+0Ch]
      vaddss  xmm2, xmm3, xmm1
      vaddss  xmm4, xmm2, dword ptr [rbp+0F0h+outOrigin+8]
      vsubss  xmm11, xmm0, xmm4
    }
  }
  else if ( (*_RSI & 1) != 0 )
  {
    LODWORD(_RCX->v[0]) = _RSI[1];
    *(_DWORD *)(v31 + 72) = _RSI[2];
    __asm { vmovss  xmm11, dword ptr [rsi+0Ch] }
  }
  else
  {
    *(_QWORD *)_RCX->v = 0i64;
  }
  __asm
  {
    vmovss  dword ptr [rcx+8], xmm11
    vmovaps xmm7, [rsp+1F0h+var_58+8]
    vmovaps xmm6, xmmword ptr [rsp+1F0h+var_48+8]
  }
  if ( !enabled && (*(_BYTE *)_RSI & 0x40) != 0 )
  {
    __asm
    {
      vmovss  xmm2, dword ptr [rbp+0F0h+entBounds.halfSize]
      vmovss  xmm1, dword ptr [rbp+0F0h+entBounds.halfSize+4]
      vcomiss xmm2, xmm1
      vmovss  xmm0, dword ptr [rbp+0F0h+entBounds.halfSize+8]
      vcomiss xmm0, xmm1
    }
    v138 = (unsigned int)((*(_BYTE *)_RSI & 0x40) == 0) + 1;
    _RAX = vec3_t::operator[](_RCX, v138);
    __asm
    {
      vmovss  xmm0, cs:__real@3f000000
      vdivss  xmm1, xmm0, dword ptr [rbp+rdi*4+0F0h+entBounds.halfSize]
      vmulss  xmm2, xmm1, xmm10
      vmovss  dword ptr [rax], xmm2
    }
    if ( !v165 )
    {
      _RCX = lgvGlob.smpFrame;
      _RAX = &lgvGlob.frameData[0].camera_ws;
      __asm { vmovsd  xmm0, qword ptr [rcx+rax] }
      *(float *)&_RAX = lgvGlob.frameData[_RCX].camera_ws.v[2];
      __asm
      {
        vmovsd  qword ptr [rsp+1F0h+var_190], xmm0
        vdivss  xmm0, xmm14, xmm9
      }
      LODWORD(v171.v[2]) = (_DWORD)_RAX;
      R_LGV_UpdateTransform(*(const float *)&_XMM0, (vec4_t *)(v31 + 16 * v138), &v171);
    }
    *(_DWORD *)(v31 + 80) |= 0x40u;
  }
  _R12 = sceneEnta;
  R_LGV_AddToEntityDebugVolume((*((_DWORD *)sceneEnta + 346) >> 10) & 0xFFF, (const LightGridVolumeSrcParams *)v31);
  R_LGV_DumpSceneEnt(_R12, (LightGridVolumeSrcParams *)v31);
  v147 = allocatedVolumeInfoSlot[1];
  v32 = 128;
LABEL_109:
  v148 = DObjGetNumModels(_R12->obj);
  __asm
  {
    vmovaps xmm14, [rsp+1F0h+var_C8+8]
    vmovaps xmm13, [rsp+1F0h+var_B8+8]
    vmovaps xmm12, [rsp+1F0h+var_A8+8]
  }
  if ( v148 < 128 )
    v32 = v148;
  __asm
  {
    vmovaps xmm11, [rsp+1F0h+var_98+8]
    vmovaps xmm10, [rsp+1F0h+var_88+8]
    vmovaps xmm9, [rsp+1F0h+var_78+8]
  }
  allocatedVolumeInfoSlot[0] = v32;
  v155 = v32;
  if ( v32 > 0 )
  {
    v156 = v174;
    for ( i = v155; i; --i )
    {
      v156->lgv.allocatedVolumeInfoSlot = v147;
      ++v156;
    }
    v32 = allocatedVolumeInfoSlot[0];
  }
  if ( v175 && v32 > 0 )
  {
    if ( v31 )
    {
      p_lgvNumProbes = &v175->lgvNumProbes;
      v159 = (unsigned int)v32;
      do
      {
        *(p_lgvNumProbes - 2) = lgvGlob.globalFrame;
        p_lgvNumProbes += 4;
        v68 = s_world.draw.lightGridType == GFX_LIGHTGRID_TYPE_MULTI;
        v160 = HistoryEntries;
        *(p_lgvNumProbes - 4) = v18;
        if ( v68 )
          v160 = v147;
        *(p_lgvNumProbes - 5) = v160;
        *(p_lgvNumProbes - 3) = *(unsigned __int8 *)(v31 + 52);
        --v159;
      }
      while ( v159 );
    }
    else if ( v155 > 0 )
    {
      v161 = &v175->lgvNumProbes;
      do
      {
        *(v161 - 2) = lgvGlob.globalFrame;
        v161 += 4;
        v68 = s_world.draw.lightGridType == GFX_LIGHTGRID_TYPE_MULTI;
        v162 = HistoryEntries;
        *(v161 - 4) = v18;
        if ( v68 )
          v162 = v147;
        ++v15;
        *(v161 - 5) = v162;
        *(v161 - 3) = 1;
      }
      while ( v15 < v155 );
    }
  }
}

/*
==============
R_LGV_PrepareVolumeInfo_SceneEnt_ExplodeModels
==============
*/
void R_LGV_PrepareVolumeInfo_SceneEnt_ExplodeModels(const LightGridVolumeModifier *lgvModifier, const GfxSceneEntity *sceneEnt, GfxModelLightingProbeInfo *lightingInfo, GpuLightGridRequestRecord *request, const GpuLightGridRequestRecord *lastRequest)
{
  const DObj *obj; 
  int NumModels; 
  int v12; 
  unsigned __int8 ModelRootBoneIndex; 
  DObjAnimMat *LocalBoneMatrix; 
  int v15; 
  __int64 v16; 
  char v21; 
  char v22; 
  const XModel *Model; 
  const XModel *v25; 
  char v27; 
  char v28; 
  unsigned __int8 v30; 
  LightGridVolumeSrcParams *v31; 
  int integer; 
  LightGridVolumeFrameData *v33; 
  GpuLightGridRequestRecord *v37; 
  GpuLightGridRequestRecord *v38; 
  __int64 v39; 
  vec3_t outOrigin; 
  tmat33_t<vec3_t> outTagMat; 

  obj = sceneEnt->obj;
  NumModels = DObjGetNumModels(obj);
  v12 = 128;
  if ( NumModels < 128 )
    v12 = NumModels;
  if ( v12 == 1 && (lgvModifier->flags & 0x200) != 0 && s_world.gfxMapEntLookup[sceneEnt->mapEntLookup].portalGISlot != -1 )
  {
    DObjGetModel(obj, 0);
    ModelRootBoneIndex = DObjGetModelRootBoneIndex(obj, 0);
    LocalBoneMatrix = CG_DObjGetLocalBoneMatrix(sceneEnt->info.pose, obj, ModelRootBoneIndex);
    if ( LocalBoneMatrix )
      R_UpdateDLS_Quat(&LocalBoneMatrix->quat, s_world.gfxMapEntLookup[sceneEnt->mapEntLookup].portalGISlot, lgvGlob.smpFrame);
  }
  v15 = 0;
  v16 = v12;
  if ( v12 > 0 )
  {
    _RBP = sceneEnt->materialLods;
    __asm
    {
      vmovaps [rsp+128h+var_58], xmm6
      vmovaps [rsp+128h+var_68], xmm7
      vmovss  xmm7, cs:__real@4b800000
      vmovaps [rsp+128h+var_78], xmm8
      vmovss  xmm8, cs:__real@4f800000
      vxorps  xmm6, xmm6, xmm6
    }
    do
    {
      Model = DObjGetModel(obj, v15);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+0]
        vcomiss xmm0, xmm6
      }
      v25 = Model;
      __asm { vcvttss2si rbx, xmm0 }
      if ( v21 )
        goto LABEL_13;
      __asm { vcomiss xmm0, xmm7 }
      if ( !(v21 | v22) )
      {
LABEL_13:
        v27 = 0;
        v21 = 0;
        v22 = 1;
      }
      else
      {
        v27 = 1;
      }
      __asm
      {
        vcomiss xmm0, xmm6
        vcomiss xmm0, xmm8
      }
      if ( v21 | v22 )
        v28 = 1;
      else
        v28 = 0;
      if ( !v27 || !v28 )
      {
        __asm
        {
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  [rsp+128h+var_F0], xmm0
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 437, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (IntegralType) 0x%jx == (FloatType) %f", "unsigned int __cdecl float_to_integral_cast<unsigned int,float>(float)", (unsigned int)_RBX, *(double *)&v38) )
          __debugbreak();
      }
      if ( (unsigned int)_RBX > 1 )
      {
        LODWORD(v39) = 1;
        LODWORD(v37) = _RBX;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 201, ASSERT_TYPE_ASSERT, "( retVal ) <= ( MAX_MATERIAL_LOD )", "%s <= %s\n\t%u, %u", "retVal", "MAX_MATERIAL_LOD", v37, v39) )
          __debugbreak();
      }
      v30 = DObjGetModelRootBoneIndex(obj, v15);
      CG_DObjGetWorldBoneMatrix(sceneEnt->info.pose, obj, v30, &outTagMat, &outOrigin);
      v31 = R_LGV_PrepareVolumeInfo_Model(lgvModifier, v25, &outOrigin, &outTagMat, _RBX, &lightingInfo[v15], &request[v15], &lastRequest[v15]);
      integer = r_lgvDebugEnt->current.integer;
      if ( integer >= 0 && integer == ((*((_DWORD *)sceneEnt + 346) >> 10) & 0xFFF) )
      {
        v33 = &lgvGlob.frameData[lgvGlob.smpFrame];
        v33->entityDebugVolumeIndices[v33->entityDebugVolumeIndexCount++] = v31 - v33->lightGridVolumeSrcParams;
      }
      ++v15;
      ++_RBP;
      --v16;
    }
    while ( v16 );
    __asm
    {
      vmovaps xmm8, [rsp+128h+var_78]
      vmovaps xmm7, [rsp+128h+var_68]
      vmovaps xmm6, [rsp+128h+var_58]
    }
  }
}

/*
==============
R_LGV_PrepareVolumeInfo_SceneEnt_UseEntBounds
==============
*/
void R_LGV_PrepareVolumeInfo_SceneEnt_UseEntBounds(const LightGridVolumeModifier *lgvModifier, const GfxSceneEntity *sceneEnt, GfxModelLightingProbeInfo *lightingInfo, GpuLightGridRequestRecord *request, const GpuLightGridRequestRecord *lastRequest)
{
  __int64 v8; 
  int HistoryEntries; 
  const dvar_t *v12; 
  int v13; 
  char v17; 
  char v18; 
  unsigned __int8 v66; 
  const GpuLightGridRequestRecord *v67; 
  unsigned int v68; 
  int v97; 
  int NumModels; 
  int v100; 
  GfxModelLightingProbeInfo *v101; 
  __int64 i; 
  unsigned int *p_lgvNumProbes; 
  __int64 v104; 
  bool v105; 
  int v106; 
  unsigned int *v107; 
  int v108; 
  __int64 val; 
  int allocatedVolumeInfoSlot[2]; 
  vec3_t v111; 
  GfxModelLightingProbeInfo *v112; 
  GpuLightGridRequestRecord *v113; 
  vec3_t outOrigin; 
  Bounds modelBounds; 
  tmat33_t<vec3_t> axis; 
  vec4_t quat; 
  Bounds outBounds; 
  int volumeSize; 
  __int64 v120; 
  void *retaddr; 

  _R11 = &retaddr;
  v8 = 0i64;
  HistoryEntries = 0xFFFF;
  _RDI = lgvModifier;
  *(_QWORD *)v111.v = lastRequest;
  _R13 = sceneEnt;
  v12 = r_lgvMaxProbes;
  v13 = 0;
  __asm { vmovaps xmmword ptr [r11-48h], xmm6 }
  v113 = request;
  v112 = lightingInfo;
  allocatedVolumeInfoSlot[1] = v12->current.integer;
  allocatedVolumeInfoSlot[0] = 0xFFFF;
  _RSI = R_LGV_AllocateVolumeInfo_Dynamic(allocatedVolumeInfoSlot);
  _RAX = r_lgvForceXModelDensity;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm6, dword ptr [rax+28h]
  }
  v18 = v17;
  if ( _RSI )
  {
    GfxSceneEntity_GetPlacementOrigin(_R13, &outOrigin);
    if ( !_R13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene_api.h", 553, ASSERT_TYPE_ASSERT, "(sceneEnt)", (const char *)&queryFormat, "sceneEnt") )
      __debugbreak();
    __asm
    {
      vmovups xmm0, xmmword ptr [r13+0Ch]
      vmovups xmmword ptr [rbp+40h+quat], xmm0
    }
    UnitQuatToAxis(&quat, &axis);
    GfxSceneEntity_GetBounds(&_R13->cull, &outBounds);
    R_LGV_CalcModelBounds(&outBounds, &outOrigin, &axis, &modelBounds);
    *(float *)&_XMM0 = R_SceneEnt_GetLgvDensity(_R13);
    __asm { vmovaps xmm1, xmm0 }
    if ( !v18 && (_RDI->flags & 0x800) != 0 )
      __asm { vmovss  xmm1, dword ptr [rdi+1Ch] }
    __asm
    {
      vmovss  xmm0, cs:__real@40000000
      vdivss  xmm3, xmm0, xmm1
      vmulss  xmm2, xmm3, dword ptr [rsp+140h+modelBounds.halfSize]
      vmulss  xmm1, xmm3, dword ptr [rbp+40h+modelBounds.halfSize+4]
    }
    _ER14 = 1;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vroundss xmm0, xmm0, xmm2, 1
      vcvttss2si eax, xmm0
    }
    _ER12 = 1;
    __asm { vxorps  xmm2, xmm2, xmm2 }
    if ( _EAX > 1 )
      _ER14 = _EAX;
    _ER15 = 1;
    __asm
    {
      vroundss xmm2, xmm2, xmm1, 1
      vmulss  xmm1, xmm3, dword ptr [rbp+40h+modelBounds.halfSize+8]
    }
    if ( _ER14 > 16 )
      _ER14 = 16;
    __asm { vcvttss2si eax, xmm2 }
    volumeSize = _ER14;
    __asm { vxorps  xmm2, xmm2, xmm2 }
    if ( _EAX > 1 )
      _ER12 = _EAX;
    __asm { vroundss xmm2, xmm2, xmm1, 1 }
    if ( _ER12 > 16 )
      _ER12 = 16;
    __asm { vcvttss2si eax, xmm2 }
    LODWORD(val) = _ER12;
    LODWORD(v120) = _ER12;
    if ( _EAX > 1 )
      _ER15 = _EAX;
    if ( _ER15 > 15 )
      _ER15 = 15;
    HIDWORD(val) = _ER15;
    HIDWORD(v120) = _ER15;
    if ( allocatedVolumeInfoSlot[1] > 0 && (unsigned int)(_ER15 * _ER12 * _ER14) > allocatedVolumeInfoSlot[1] )
    {
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, r8
        vxorps  xmm0, xmm0, xmm0
        vxorps  xmm2, xmm2, xmm2
        vcvtsi2ss xmm0, xmm0, rax
        vdivss  xmm0, xmm1, xmm0; X
        vmovss  xmm1, cs:__real@40400000
        vcvtsi2ss xmm2, xmm2, rax
        vsubss  xmm3, xmm1, xmm2
        vmovss  xmm2, cs:__real@3f800000
        vdivss  xmm1, xmm2, xmm3; Y
      }
      *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, r14d
        vmulss  xmm2, xmm1, xmm0
        vxorps  xmm3, xmm3, xmm3
        vroundss xmm3, xmm3, xmm2, 1
        vcvttss2si r14d, xmm3
        vmovaps xmm4, xmm0
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, r12d
        vmulss  xmm2, xmm1, xmm0
      }
      if ( _ER14 < 1 )
        _ER14 = 1;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, r15d
        vxorps  xmm3, xmm3, xmm3
        vroundss xmm3, xmm3, xmm2, 1
        vcvttss2si r12d, xmm3
      }
      volumeSize = _ER14;
      __asm { vmulss  xmm1, xmm0, xmm4 }
      if ( _ER12 < 1 )
        _ER12 = 1;
      __asm
      {
        vxorps  xmm2, xmm2, xmm2
        vroundss xmm2, xmm2, xmm1, 1
        vcvttss2si r15d, xmm2
      }
      LODWORD(val) = _ER12;
      LODWORD(v120) = _ER12;
      if ( _ER15 < 1 )
        _ER15 = 1;
      HIDWORD(val) = _ER15;
      HIDWORD(v120) = _ER15;
    }
    if ( (_RDI->flags & 2) != 0 )
    {
      R_LGV_ModifyDimension(_RDI, &volumeSize);
      _ER15 = HIDWORD(v120);
      _ER12 = v120;
      _ER14 = volumeSize;
      val = v120;
    }
    v13 = _ER14 * _ER12 * _ER15;
    R_LGV_AddProbes(v13, lgvGlob.smpFrame);
    HistoryEntries = R_LGV_AllocateHistoryEntries(v13);
    _RSI->m_volumeSize[0] = truncate_cast<unsigned char,int>(_ER14);
    _RSI->m_volumeSize[1] = truncate_cast<unsigned char,int>(val);
    v66 = truncate_cast<unsigned char,int>(SHIDWORD(val));
    v67 = *(const GpuLightGridRequestRecord **)v111.v;
    _RSI->m_volumeSize[2] = v66;
    _RSI->m_historyEntry = HistoryEntries;
    _RSI->m_lastFrameHistoryEntryAndSetup = R_LGV_EncodeLastFrameEntryAndSetup(_RDI->flags, v67);
    _RSI->m_basisType = 1;
    v68 = R_LGV_PackStaticProbeIndex(0, 0, 0, 0);
    __asm { vmovsd  xmm0, qword ptr [rsp+140h+outOrigin] }
    _RSI->m_firstStaticProbeIndex = v68;
    v111.v[2] = outOrigin.v[2];
    __asm { vmovsd  [rsp+140h+var_100], xmm0 }
    R_LGV_CalcTransform(&modelBounds, &v111, axis.m, _RSI->m_volumeTransform);
    if ( (_RDI->flags & 4) != 0 )
    {
      __asm
      {
        vmovss  xmm6, dword ptr [rsp+140h+modelBounds.midPoint+4]
        vmulss  xmm0, xmm6, dword ptr [rbp+40h+axis+0Ch]
        vmovss  xmm5, dword ptr [rsp+140h+modelBounds.midPoint+8]
        vmovaps [rsp+140h+var_58+8], xmm7
        vmovss  xmm7, dword ptr [rsp+140h+modelBounds.midPoint]
        vmulss  xmm1, xmm7, dword ptr [rbp+40h+axis]
        vmulss  xmm4, xmm7, dword ptr [rbp+40h+axis+4]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm5, dword ptr [rbp+40h+axis+18h]
        vaddss  xmm0, xmm2, xmm1
        vaddss  xmm3, xmm0, dword ptr [rsp+140h+outOrigin]
        vmovss  xmm2, dword ptr [rdi+4]
        vmulss  xmm0, xmm6, dword ptr [rbp+40h+axis+10h]
        vsubss  xmm1, xmm2, xmm3
        vaddss  xmm2, xmm4, xmm0
        vmovss  dword ptr [rsi+44h], xmm1
        vmovss  xmm0, dword ptr [rdi+8]
        vmulss  xmm1, xmm5, dword ptr [rbp+40h+axis+1Ch]
        vaddss  xmm2, xmm2, xmm1
        vaddss  xmm3, xmm2, dword ptr [rsp+140h+outOrigin+4]
        vmulss  xmm2, xmm7, dword ptr [rbp+40h+axis+8]
        vmovaps xmm7, [rsp+140h+var_58+8]
        vsubss  xmm1, xmm0, xmm3
        vmulss  xmm0, xmm6, dword ptr [rbp+40h+axis+14h]
        vmovss  dword ptr [rsi+48h], xmm1
        vmulss  xmm1, xmm5, dword ptr [rbp+40h+axis+20h]
        vaddss  xmm3, xmm2, xmm0
        vmovss  xmm0, dword ptr [rdi+0Ch]
        vaddss  xmm2, xmm3, xmm1
        vaddss  xmm4, xmm2, dword ptr [rsp+140h+outOrigin+8]
        vsubss  xmm6, xmm0, xmm4
      }
    }
    else if ( (_RDI->flags & 1) != 0 )
    {
      _RSI->m_samplingOffset.v[0] = _RDI->probesOffset.v[0];
      _RSI->m_samplingOffset.v[1] = _RDI->probesOffset.v[1];
      __asm { vmovss  xmm6, dword ptr [rdi+0Ch] }
    }
    else
    {
      *(_QWORD *)_RSI->m_samplingOffset.v = 0i64;
    }
    __asm { vmovss  dword ptr [rsi+4Ch], xmm6 }
    R_LGV_AddToEntityDebugVolume((*((_DWORD *)_R13 + 346) >> 10) & 0xFFF, _RSI);
    R_LGV_DumpSceneEnt(_R13, _RSI);
    v97 = allocatedVolumeInfoSlot[0];
  }
  else
  {
    v97 = 0;
  }
  NumModels = DObjGetNumModels(_R13->obj);
  __asm { vmovaps xmm6, [rsp+140h+var_48+8] }
  v100 = 128;
  if ( NumModels < 128 )
    v100 = NumModels;
  if ( v100 > 0 )
  {
    v101 = v112;
    for ( i = v100; i; --i )
    {
      v101->lgv.allocatedVolumeInfoSlot = v97;
      ++v101;
    }
  }
  if ( v113 && v100 > 0 )
  {
    if ( _RSI )
    {
      p_lgvNumProbes = &v113->lgvNumProbes;
      v104 = (unsigned int)v100;
      do
      {
        *(p_lgvNumProbes - 2) = lgvGlob.globalFrame;
        p_lgvNumProbes += 4;
        v105 = s_world.draw.lightGridType == GFX_LIGHTGRID_TYPE_MULTI;
        v106 = HistoryEntries;
        *(p_lgvNumProbes - 4) = v13;
        if ( v105 )
          v106 = v97;
        *(p_lgvNumProbes - 5) = v106;
        *(p_lgvNumProbes - 3) = _RSI->m_basisType;
        --v104;
      }
      while ( v104 );
    }
    else
    {
      v107 = &v113->lgvNumProbes;
      do
      {
        *(v107 - 2) = lgvGlob.globalFrame;
        v107 += 4;
        v105 = s_world.draw.lightGridType == GFX_LIGHTGRID_TYPE_MULTI;
        v108 = HistoryEntries;
        *(v107 - 4) = v13;
        if ( v105 )
          v108 = v97;
        *(v107 - 3) = 1;
        ++v8;
        *(v107 - 5) = v108;
      }
      while ( v8 < v100 );
    }
  }
}

/*
==============
R_LGV_PrepareVolumeInfo_SceneModel
==============
*/
void R_LGV_PrepareVolumeInfo_SceneModel(const LightGridVolumeModifier *lgvModifier, const GfxSceneModel *sceneModel, GfxModelLightingProbeInfo *lightingInfo, GpuLightGridRequestRecord *request, const GpuLightGridRequestRecord *lastRequest)
{
  const XModel *model; 
  unsigned int materialLod; 
  const LightGridVolumeSrcParams *v12; 
  tmat33_t<vec3_t> axis; 

  _RBP = sceneModel;
  if ( R_GpuLightGrid_DataAvailable() )
  {
    __asm { vmovss  xmm0, dword ptr [rbp+8Ch]; lod }
    model = _RBP->model;
    materialLod = XModelGetIntegerMaterialLod(*(float *)&_XMM0);
    UnitQuatToAxis(&_RBP->placement.base.quat, &axis);
    v12 = R_LGV_PrepareVolumeInfo_Model(lgvModifier, model, &_RBP->placement.base.origin, &axis, materialLod, lightingInfo, request, lastRequest);
    if ( v12 )
      R_LGV_AddToEntityDebugVolume((*((_DWORD *)_RBP + 30) >> 10) & 0xFFF, v12);
  }
}

/*
==============
R_LGV_SampleLightingPerLightGrid
==============
*/
void R_LGV_SampleLightingPerLightGrid(ComputeCmdBufState *state, const GfxBackEndData *data, const GfxViewInfo *viewInfo, const GfxWrappedBuffer *lightGridVolumeActiveLightGrids, const GfxWrappedBuffer *lightGridVolumeSamplingSlot, const GfxWrappedRWBuffer *lightGridVolumeSampledLightingData, const GfxWrappedBuffer *prevFrameLightGridVolumeActiveLightGrids, const GfxWrappedBuffer *prevFrameLightGridVolumeSamplingSlot, const GfxWrappedBuffer *prevFrameLightGridVolumeSampledLightingData, const GfxWrappedBuffer *lightGridVolumeCount, const GfxWrappedBuffer *lightGridVolumeIndexingBuffer, const GfxWrappedBuffer *lightGridVolumesList, const GfxWrappedBuffer *indirectDispatchParams)
{
  __int64 NumActiveLightGrids; 
  const GfxGpuLightGrid **v18; 
  __int64 v19; 
  __int64 v20; 
  const GfxGpuLightGrid *v21; 
  unsigned int zoneIndex; 
  unsigned int v23; 
  ID3D12Resource *buffers; 
  unsigned int offset; 
  GfxWrappedBuffer *samplePerLightGridLightGridVolumeLighting; 
  ID3D12Resource *p_view; 
  ID3D12Resource *v28; 
  ID3D12Resource *v29; 
  ID3D12Resource *v30; 
  ID3D12Resource *v31; 
  ID3D12Resource *v32; 
  ID3D12Resource *v33; 
  ID3D12Resource *v34; 
  ID3D12Resource *p_rwView; 
  const GfxGpuLightGrid **ActiveLightGridsList; 

  NumActiveLightGrids = R_GetNumActiveLightGrids(data);
  ActiveLightGridsList = R_GetActiveLightGridsList(data);
  v18 = ActiveLightGridsList;
  v19 = NumActiveLightGrids;
  if ( (int)NumActiveLightGrids > 0 )
  {
    p_view = (ID3D12Resource *)&lightGridVolumeCount->view;
    v20 = 0i64;
    offset = 0;
    v28 = (ID3D12Resource *)&lightGridVolumeActiveLightGrids->view;
    v29 = (ID3D12Resource *)&lightGridVolumeIndexingBuffer->view;
    v30 = (ID3D12Resource *)&lightGridVolumesList->view;
    v31 = (ID3D12Resource *)&lightGridVolumeSamplingSlot->view;
    v32 = (ID3D12Resource *)&prevFrameLightGridVolumeActiveLightGrids->view;
    v33 = (ID3D12Resource *)&prevFrameLightGridVolumeSamplingSlot->view;
    v34 = (ID3D12Resource *)&prevFrameLightGridVolumeSampledLightingData->view;
    p_rwView = (ID3D12Resource *)&lightGridVolumeSampledLightingData->rwView;
    samplePerLightGridLightGridVolumeLighting = lgvGlob.samplingPrepBuffers.samplePerLightGridLightGridVolumeLighting;
    do
    {
      v21 = v18[v20];
      zoneIndex = viewInfo->input.voxelTreeZoneIndex;
      R_SetComputeShader(state, rgp.samplePerLightLGVLighting);
      buffers = lgvGlob.gfxBuffers[data->shLightingIndex].sampleLightGridVolumeLightingConsts.buffer;
      R_SetComputeConstantBuffers(state, 0, 1, &buffers);
      buffers = samplePerLightGridLightGridVolumeLighting->buffer;
      R_SetComputeConstantBuffers(state, 2, 1, &buffers);
      RB_LGV_UpdateAndSetSampleLightingVoxelTreeConstantBuffer(state, data, viewInfo, v21, zoneIndex);
      RB_GpuLightGrid_SetResouces(state, &viewInfo->input, v21);
      buffers = p_view;
      R_SetComputeViews(state, 13, 1, (const GfxShaderBufferView *const *)&buffers);
      buffers = v28;
      R_SetComputeViews(state, 14, 1, (const GfxShaderBufferView *const *)&buffers);
      buffers = (ID3D12Resource *)(&lgvGlob.gfxBuffers[0].lightGridVolumeTransformParams.view + 12 * data->shLightingIndex);
      R_SetComputeViews(state, 15, 1, (const GfxShaderBufferView *const *)&buffers);
      buffers = (ID3D12Resource *)(&lgvGlob.gfxBuffers[0].lightGridVolumePackingParams.view + 12 * data->shLightingIndex);
      R_SetComputeViews(state, 16, 1, (const GfxShaderBufferView *const *)&buffers);
      buffers = v29;
      R_SetComputeViews(state, 17, 1, (const GfxShaderBufferView *const *)&buffers);
      buffers = v30;
      R_SetComputeViews(state, 18, 1, (const GfxShaderBufferView *const *)&buffers);
      buffers = v31;
      R_SetComputeViews(state, 19, 1, (const GfxShaderBufferView *const *)&buffers);
      buffers = v32;
      R_SetComputeViews(state, 20, 1, (const GfxShaderBufferView *const *)&buffers);
      buffers = v33;
      R_SetComputeViews(state, 21, 1, (const GfxShaderBufferView *const *)&buffers);
      buffers = (ID3D12Resource *)&R_GetPrevFrameLightGridIndices(data)->view;
      R_SetComputeViews(state, 22, 1, (const GfxShaderBufferView *const *)&buffers);
      buffers = v34;
      R_SetComputeViews(state, 23, 1, (const GfxShaderBufferView *const *)&buffers);
      buffers = p_rwView;
      R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&buffers, NULL);
      v23 = offset;
      R_DispatchIndirect(state, indirectDispatchParams->buffer, offset);
      ++samplePerLightGridLightGridVolumeLighting;
      v18 = ActiveLightGridsList;
      ++v20;
      offset = v23 + 96;
    }
    while ( v20 < v19 );
  }
}

/*
==============
R_LGV_SampleLightingPerLightGrid
==============
*/
void R_LGV_SampleLightingPerLightGrid(ComputeCmdBufState *state, const GfxBackEndData *data, const GfxViewInfo *viewInfo, const GfxWrappedBuffer *lightGridVolumeActiveLightGrids, const GfxWrappedBuffer *lightGridVolumeSamplingSlot, const GfxWrappedRWBuffer *lightGridVolumeSampledLightingData, const GfxWrappedBuffer *prevFrameLightGridVolumeActiveLightGrids, const GfxWrappedBuffer *prevFrameLightGridVolumeSamplingSlot, const GfxWrappedBuffer *prevFrameLightGridVolumeSampledLightingData, const GfxWrappedBuffer *lightGridVolumeCount, const GfxWrappedBuffer *lightGridVolumeIndexingBuffer, const GfxWrappedBuffer *lightGridVolumesList, const GfxWrappedBuffer *indirectDispatchParams, const GfxGpuLightGrid *gpuLightGrid, int lightGridIndex)
{
  unsigned int zoneIndex; 
  int v20; 
  ID3D12Resource *buffers; 

  zoneIndex = viewInfo->input.voxelTreeZoneIndex;
  R_SetComputeShader(state, rgp.samplePerLightLGVLighting);
  buffers = lgvGlob.gfxBuffers[data->shLightingIndex].sampleLightGridVolumeLightingConsts.buffer;
  R_SetComputeConstantBuffers(state, 0, 1, &buffers);
  v20 = lightGridIndex;
  buffers = lgvGlob.samplingPrepBuffers.samplePerLightGridLightGridVolumeLighting[lightGridIndex].buffer;
  R_SetComputeConstantBuffers(state, 2, 1, &buffers);
  RB_LGV_UpdateAndSetSampleLightingVoxelTreeConstantBuffer(state, data, viewInfo, gpuLightGrid, zoneIndex);
  RB_GpuLightGrid_SetResouces(state, &viewInfo->input, gpuLightGrid);
  lightGridVolumeCount = (const GfxWrappedBuffer *)((char *)lightGridVolumeCount + 8);
  R_SetComputeViews(state, 13, 1, (const GfxShaderBufferView *const *)&lightGridVolumeCount);
  lightGridVolumeCount = (const GfxWrappedBuffer *)&lightGridVolumeActiveLightGrids->view;
  R_SetComputeViews(state, 14, 1, (const GfxShaderBufferView *const *)&lightGridVolumeCount);
  lightGridVolumeCount = (const GfxWrappedBuffer *)(&lgvGlob.gfxBuffers[0].lightGridVolumeTransformParams.view + 12 * data->shLightingIndex);
  R_SetComputeViews(state, 15, 1, (const GfxShaderBufferView *const *)&lightGridVolumeCount);
  lightGridVolumeCount = (const GfxWrappedBuffer *)(&lgvGlob.gfxBuffers[0].lightGridVolumePackingParams.view + 12 * data->shLightingIndex);
  R_SetComputeViews(state, 16, 1, (const GfxShaderBufferView *const *)&lightGridVolumeCount);
  lightGridVolumeCount = (const GfxWrappedBuffer *)&lightGridVolumeIndexingBuffer->view;
  R_SetComputeViews(state, 17, 1, (const GfxShaderBufferView *const *)&lightGridVolumeCount);
  lightGridVolumeCount = (const GfxWrappedBuffer *)&lightGridVolumesList->view;
  R_SetComputeViews(state, 18, 1, (const GfxShaderBufferView *const *)&lightGridVolumeCount);
  lightGridVolumeCount = (const GfxWrappedBuffer *)&lightGridVolumeSamplingSlot->view;
  R_SetComputeViews(state, 19, 1, (const GfxShaderBufferView *const *)&lightGridVolumeCount);
  lightGridVolumeCount = (const GfxWrappedBuffer *)&prevFrameLightGridVolumeActiveLightGrids->view;
  R_SetComputeViews(state, 20, 1, (const GfxShaderBufferView *const *)&lightGridVolumeCount);
  lightGridVolumeCount = (const GfxWrappedBuffer *)&prevFrameLightGridVolumeSamplingSlot->view;
  R_SetComputeViews(state, 21, 1, (const GfxShaderBufferView *const *)&lightGridVolumeCount);
  lightGridVolumeCount = (const GfxWrappedBuffer *)&R_GetPrevFrameLightGridIndices(data)->view;
  R_SetComputeViews(state, 22, 1, (const GfxShaderBufferView *const *)&lightGridVolumeCount);
  lightGridVolumeCount = (const GfxWrappedBuffer *)&prevFrameLightGridVolumeSampledLightingData->view;
  R_SetComputeViews(state, 23, 1, (const GfxShaderBufferView *const *)&lightGridVolumeCount);
  lightGridVolumeCount = (const GfxWrappedBuffer *)&lightGridVolumeSampledLightingData->rwView;
  R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&lightGridVolumeCount, NULL);
  R_DispatchIndirect(state, indirectDispatchParams->buffer, 96 * v20);
}

/*
==============
R_LGV_SetCodeBuffers
==============
*/
void R_LGV_SetCodeBuffers(GfxCmdBufInput *input, unsigned int frameIndex)
{
  GfxWrappedBuffer *p_dummyBuffer; 
  GfxWrappedBuffer *p_lgvDebugDataBuffer; 
  __int64 v5; 
  GfxWrappedBuffer *p_lightGridVolumesIndexingBuffer; 
  GfxWrappedBuffer *p_lgvDebugDirectIndexingBuffer; 
  LightGridVolumeGfxBuffers *v8; 
  const GfxBackEndData *data; 
  const GfxWrappedBuffer *LightGridVolumesAtlasTransformParamsBuffer; 
  const GfxBackEndData *v11; 
  const GfxWrappedBuffer *LightGridVolumesAtlasPackingParamsBuffer; 
  const GfxBackEndData *v13; 

  p_dummyBuffer = &gfxBuf.dummyBuffer;
  p_lgvDebugDataBuffer = &gfxBuf.dummyBuffer;
  v5 = frameIndex;
  if ( lgvGlob.gfxBuffers[v5].lgvDebugDataBuffer.view.view >= 2 )
    p_lgvDebugDataBuffer = &lgvGlob.gfxBuffers[v5].lgvDebugDataBuffer;
  if ( !input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1494, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  input->codeBuffers[24] = p_lgvDebugDataBuffer;
  p_lightGridVolumesIndexingBuffer = &gfxBuf.dummyBuffer;
  if ( lgvGlob.gfxBuffers[v5].lightGridVolumesIndexingBuffer.view.view >= 2 )
    p_lightGridVolumesIndexingBuffer = &lgvGlob.gfxBuffers[v5].lightGridVolumesIndexingBuffer;
  input->codeBuffers[26] = p_lightGridVolumesIndexingBuffer;
  p_lgvDebugDirectIndexingBuffer = &gfxBuf.dummyBuffer;
  if ( lgvGlob.gfxBuffers[v5].lgvDebugDirectIndexingBuffer.view.view >= 2 )
    p_lgvDebugDirectIndexingBuffer = &lgvGlob.gfxBuffers[v5].lgvDebugDirectIndexingBuffer;
  input->codeBuffers[25] = p_lgvDebugDirectIndexingBuffer;
  v8 = (LightGridVolumeGfxBuffers *)&gfxBuf.dummyBuffer;
  if ( lgvGlob.gfxBuffers[v5].lightGridVolumeTransformParams.view.view >= 2 )
    v8 = &lgvGlob.gfxBuffers[v5];
  input->codeBuffers[27] = &v8->lightGridVolumeTransformParams;
  data = input->data;
  if ( lgvGlob.gfxBuffers[v5].lightGridVolumePackingParams.view.view >= 2 )
    p_dummyBuffer = &lgvGlob.gfxBuffers[v5].lightGridVolumePackingParams;
  input->codeBuffers[28] = p_dummyBuffer;
  LightGridVolumesAtlasTransformParamsBuffer = R_GetLightGridVolumesAtlasTransformParamsBuffer(data);
  v11 = input->data;
  input->codeBuffers[29] = LightGridVolumesAtlasTransformParamsBuffer;
  LightGridVolumesAtlasPackingParamsBuffer = R_GetLightGridVolumesAtlasPackingParamsBuffer(v11);
  v13 = input->data;
  input->codeBuffers[30] = LightGridVolumesAtlasPackingParamsBuffer;
  input->codeBuffers[31] = R_GetLightGridVolumesAtlasTransientPackingBuffer(v13);
}

/*
==============
R_LGV_SetupMultiLightGridSampling
==============
*/
bool R_LGV_SetupMultiLightGridSampling(ComputeCmdBufState *state, const GfxBackEndData *data, const GfxViewInfo *viewInfo, bool prevFrameValid)
{
  RB_LGV_UpdateSampleLightingConstantBuffer(state, data, viewInfo, prevFrameValid, &lgvGlob.frameData[data->smpFrame]);
  return R_ReflectionProbe_UseLightgridOverride(data->reflectionProbeFrameIndex);
}

/*
==============
R_LGV_ShutdownWorld
==============
*/
void R_LGV_ShutdownWorld(GfxWorld *world)
{
  volatile int *p_numLightGridVolumesUsed; 
  __int64 v2; 
  StreamerMemLoan result; 

  p_numLightGridVolumesUsed = &lgvGlob.frameData[0].numLightGridVolumesUsed;
  v2 = 2i64;
  do
  {
    *((_DWORD *)p_numLightGridVolumesUsed - 1) = 0;
    *p_numLightGridVolumesUsed = 0;
    *((_DWORD *)p_numLightGridVolumesUsed + 1) = 0;
    *((_DWORD *)p_numLightGridVolumesUsed + 2) = 0;
    p_numLightGridVolumesUsed += 8336;
    --v2;
  }
  while ( v2 );
  PMem_Free(&result, "LGV World Buffers", PMEM_STACK_GAME);
  StreamerMemLoan::~StreamerMemLoan(&result);
}

/*
==============
R_LGV_SortAxes
==============
*/
void R_LGV_SortAxes(unsigned __int8 *volumeSize, vec4_t *volumeTransform)
{
  int axesSorted[6]; 

  R_LGV_SortAxes(volumeSize, volumeTransform, axesSorted);
}

/*
==============
R_LGV_SortAxes
==============
*/
void R_LGV_SortAxes(unsigned __int8 *volumeSize, vec4_t *volumeTransform, int *axesSorted)
{
  unsigned __int8 *v3; 
  int v4; 
  int v5; 
  int v7; 
  unsigned int v8; 
  int v9; 
  int v10; 
  unsigned int v11; 
  unsigned int v12; 
  signed int v13; 
  unsigned __int8 v14; 
  unsigned __int8 v15; 
  __int64 v22; 
  char *v23; 
  char *v24; 
  float *v25; 
  char v26[8]; 
  _OWORD v27[3]; 

  v3 = volumeSize;
  v4 = 1;
  axesSorted[1] = 1;
  v5 = 2;
  *axesSorted = 0;
  axesSorted[2] = 2;
  _R14 = volumeTransform;
  v7 = 1;
  v8 = 0;
  v9 = 2;
  if ( *volumeSize < volumeSize[1] )
  {
    *(_QWORD *)axesSorted = 1i64;
    v8 = 1;
    v7 = 0;
    v4 = 0;
  }
  v10 = v7;
  if ( volumeSize[v7] < volumeSize[2] )
  {
    v10 = 2;
    axesSorted[1] = 2;
    v4 = 2;
    axesSorted[2] = v7;
    v5 = v7;
    v9 = v7;
  }
  v11 = v10;
  if ( volumeSize[v8] < volumeSize[v10] )
  {
    v11 = v8;
    axesSorted[1] = v8;
    v4 = v8;
    *axesSorted = v10;
    v5 = v9;
    v8 = v10;
  }
  v12 = v8;
  v13 = v4;
  if ( v3[v5] == 1 )
  {
    v14 = v3[v11];
    if ( v14 > 2u )
    {
      v15 = v3[v8];
      if ( v15 > 1u && v15 > v14 )
      {
        *axesSorted = v11;
        v12 = v11;
        axesSorted[1] = v8;
        v13 = v8;
      }
    }
  }
  _RAX = 2i64 * v12;
  __asm { vmovups xmm0, xmmword ptr [r14+rax*8] }
  _RAX = 2i64 * v13;
  __asm
  {
    vmovups xmmword ptr [rsp+8], xmm0
    vmovups xmm0, xmmword ptr [r14+rax*8]
  }
  _RAX = 2i64 * v9;
  __asm
  {
    vmovups [rsp+68h+var_50], xmm0
    vmovups xmm0, xmmword ptr [r14+rax*8]
  }
  v22 = 3i64;
  v26[0] = v3[v12];
  v26[1] = v3[v13];
  v23 = (char *)((char *)v27 - (char *)_R14);
  v24 = (char *)(v26 - (char *)v3);
  v26[2] = v3[v9];
  v25 = &_R14->v[1];
  __asm { vmovups [rsp+68h+var_40], xmm0 }
  do
  {
    v25 += 4;
    *v3 = v3[(_QWORD)v24];
    ++v3;
    *(v25 - 5) = *(float *)((char *)v25 + (_QWORD)v23 - 20);
    *(v25 - 4) = *(float *)((char *)v25 + (_QWORD)v23 - 16);
    *(v25 - 3) = *(float *)((char *)v25 + (char *)v27 + 4 - (char *)_R14 - 16);
    *(v25 - 2) = *(float *)((char *)v25 + (char *)v27 + 8 - (char *)_R14 - 16);
    --v22;
  }
  while ( v22 );
}

/*
==============
R_LGV_ToggleSmpFrame
==============
*/
void R_LGV_ToggleSmpFrame(unsigned int globalFrame, unsigned int smpFrame)
{
  __int64 v2; 
  __int64 v3; 
  unsigned int numLightGridVolumesUsed; 
  unsigned int numLightGridVolumeProbesUsed; 
  unsigned int numLightGridVolumeHistoryEntriesUsed; 
  const dvar_t *v7; 
  LightGridVolumeSrcParams *VolumeInfo_Dynamic; 
  volatile int *p_numLightGridVolumeProbesUsed; 
  unsigned int v10; 
  int allocatedVolumeInfoSlot[4]; 
  vec3_t v16; 
  float v17; 
  Bounds v18; 

  v2 = smpFrame;
  lgvGlob.smpFrame = smpFrame;
  lgvGlob.globalFrame = globalFrame;
  if ( smpFrame >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp", 677, ASSERT_TYPE_ASSERT, "(unsigned)( smpFrame ) < (unsigned)( ( sizeof( *array_counter( lgvGlob.frameData ) ) + 0 ) )", "smpFrame doesn't index ARRAY_COUNT( lgvGlob.frameData )\n\t%i not in [0, %i)", smpFrame, 2) )
    __debugbreak();
  v3 = v2;
  numLightGridVolumesUsed = lgvGlob.frameData[v3].numLightGridVolumesUsed;
  if ( lgvGlob.lightGridVolumeMaxUsageStats.volumesUsed > numLightGridVolumesUsed )
    numLightGridVolumesUsed = lgvGlob.lightGridVolumeMaxUsageStats.volumesUsed;
  lgvGlob.lightGridVolumeMaxUsageStats.volumesUsed = numLightGridVolumesUsed;
  numLightGridVolumeProbesUsed = lgvGlob.frameData[v3].numLightGridVolumeProbesUsed;
  if ( lgvGlob.lightGridVolumeMaxUsageStats.volumeProbesUsed > numLightGridVolumeProbesUsed )
    numLightGridVolumeProbesUsed = lgvGlob.lightGridVolumeMaxUsageStats.volumeProbesUsed;
  lgvGlob.lightGridVolumeMaxUsageStats.volumeProbesUsed = numLightGridVolumeProbesUsed;
  numLightGridVolumeHistoryEntriesUsed = lgvGlob.frameData[v3].numLightGridVolumeHistoryEntriesUsed;
  if ( lgvGlob.lightGridVolumeMaxUsageStats.historyEntriesUsed > numLightGridVolumeHistoryEntriesUsed )
    numLightGridVolumeHistoryEntriesUsed = lgvGlob.lightGridVolumeMaxUsageStats.historyEntriesUsed;
  lgvGlob.lightGridVolumeMaxUsageStats.historyEntriesUsed = numLightGridVolumeHistoryEntriesUsed;
  LODWORD(lgvGlob.frameData[v3].lgvSamplingSafeZone) = r_lgvSamplingSafeZone->current.integer;
  v7 = r_lgvDumpXModels;
  lgvGlob.frameData[v3].smodelDebugVolumeIndex = -1;
  lgvGlob.frameData[v3].entityDebugVolumeIndexCount = 0;
  lgvGlob.frameData[v3].debugSceneEnt = NULL;
  lgvGlob.frameData[v3].debugVisibleStaticVolumeCount = 0;
  lgvGlob.frameData[v3].dumpXModels = v7->current.integer;
  if ( v7->current.integer )
    Dvar_SetInt_Internal(v7, 0);
  lgvGlob.frameData[v3].numLightGridVolumesUsed = 0;
  lgvGlob.frameData[v3].numLightGridVolumeProbesUsed = 0;
  lgvGlob.frameData[v3].numLightGridVolumeHistoryEntriesUsed = 0;
  allocatedVolumeInfoSlot[0] = 0;
  VolumeInfo_Dynamic = R_LGV_AllocateVolumeInfo_Dynamic(allocatedVolumeInfoSlot);
  if ( !VolumeInfo_Dynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp", 1020, ASSERT_TYPE_ASSERT, "(params)", (const char *)&queryFormat, "params") )
    __debugbreak();
  if ( allocatedVolumeInfoSlot[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp", 1021, ASSERT_TYPE_ASSERT, "(allocatedVolumeInfoSlot == 0x0000)", (const char *)&queryFormat, "allocatedVolumeInfoSlot == LIGHTGRID_VOLUME_INDEX_DEFAULT_FALLBACK") )
    __debugbreak();
  *(_WORD *)VolumeInfo_Dynamic->m_volumeSize = 257;
  VolumeInfo_Dynamic->m_volumeSize[2] = 1;
  p_numLightGridVolumeProbesUsed = &lgvGlob.frameData[lgvGlob.smpFrame].numLightGridVolumeProbesUsed;
  if ( ((unsigned __int8)p_numLightGridVolumeProbesUsed & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &lgvGlob.frameData[lgvGlob.smpFrame].numLightGridVolumeProbesUsed) )
    __debugbreak();
  _InterlockedExchangeAdd(p_numLightGridVolumeProbesUsed, 1u);
  VolumeInfo_Dynamic->m_historyEntry = R_LGV_AllocateHistoryEntries(1);
  VolumeInfo_Dynamic->m_lastFrameHistoryEntryAndSetup = 0xFFFF;
  VolumeInfo_Dynamic->m_basisType = 1;
  v10 = R_LGV_PackStaticProbeIndex(0, 0, 1, 0);
  __asm
  {
    vmovups xmm0, cs:__xmm@3f000000000000000000000000000000
    vmovss  xmm1, cs:__real@3f000000
    vmovups [rsp+98h+var_28], xmm0
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+98h+var_30], xmm0
    vunpcklps xmm0, xmm0, xmm0
  }
  VolumeInfo_Dynamic->m_firstStaticProbeIndex = v10;
  v16.v[2] = v17;
  __asm
  {
    vmovsd  [rsp+98h+var_48], xmm0
    vmovss  [rsp+98h+var_18], xmm1
    vmovss  [rsp+98h+var_14], xmm1
  }
  R_LGV_CalcTransform(&v18, &v16, identityMatrix33.m, VolumeInfo_Dynamic->m_volumeTransform);
  *(_QWORD *)VolumeInfo_Dynamic->m_samplingOffset.v = 0i64;
  VolumeInfo_Dynamic->m_samplingOffset.v[2] = 0.0;
}

/*
==============
R_LGV_UpdateTransform
==============
*/

void __fastcall R_LGV_UpdateTransform(double shiftVal, vec4_t *rowUse, const vec3_t *camera_ws)
{
  __asm
  {
    vmovss  xmm1, dword ptr [rdx+4]
    vmulss  xmm4, xmm1, dword ptr [r8+4]
    vmovss  xmm2, dword ptr [rdx]
    vmulss  xmm3, xmm2, dword ptr [r8]
    vmovss  xmm1, dword ptr [rdx+8]
    vmulss  xmm2, xmm1, dword ptr [r8+8]
    vaddss  xmm5, xmm4, xmm3
    vaddss  xmm3, xmm5, xmm2
    vaddss  xmm4, xmm3, dword ptr [rdx+0Ch]
    vmovss  xmm2, cs:__real@3f800000; max
    vcomiss xmm4, xmm2
    vmovaps [rsp+38h+var_18], xmm6
  }
  _RBX = rowUse;
  __asm
  {
    vmovaps xmm6, xmm0
    vxorps  xmm1, xmm1, xmm1; min
    vsubss  xmm0, xmm4, xmm2
    vmulss  xmm0, xmm0, xmm6; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmulss  xmm1, xmm0, xmm6
    vaddss  xmm1, xmm1, dword ptr [rbx+0Ch]
    vmovss  dword ptr [rbx+0Ch], xmm1
    vmovaps xmm6, [rsp+38h+var_18]
  }
}

/*
==============
R_LGV_UseMultiLightGridSampling
==============
*/
bool R_LGV_UseMultiLightGridSampling()
{
  return s_world.draw.lightGridType == GFX_LIGHTGRID_TYPE_MULTI;
}

/*
==============
R_SceneEnt_CalcModelBounds
==============
*/
void R_SceneEnt_CalcModelBounds(const GfxSceneEntity *sceneEnt, const vec3_t *entOrigin, const tmat33_t<vec3_t> *entAxis, Bounds *entBounds)
{
  int v14; 
  const DObj *obj; 
  int NumModels; 
  const XModel *Model; 
  unsigned __int8 ModelRootBoneIndex; 
  tmat33_t<vec3_t> v159; 
  vec3_t outOrigin; 
  __int128 v161; 
  __int128 v162; 
  __int128 v163; 
  __int128 v164; 
  __int128 v165; 
  __int128 v166; 
  Bounds bounds; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> outTagMat; 

  v14 = 0;
  *(_QWORD *)entBounds->midPoint.v = 0i64;
  entBounds->midPoint.v[2] = 0.0;
  _RDI = entBounds;
  entBounds->halfSize.v[0] = -3.4028235e38;
  entBounds->halfSize.v[1] = -3.4028235e38;
  entBounds->halfSize.v[2] = -3.4028235e38;
  obj = sceneEnt->obj;
  NumModels = DObjGetNumModels(obj);
  MatrixTranspose(entAxis, &out);
  if ( NumModels > 0 )
  {
    __asm
    {
      vmovaps [rsp+210h+var_40], xmm6
      vmovaps [rsp+210h+var_50], xmm7
      vmovaps [rsp+210h+var_60], xmm8
      vmovaps [rsp+210h+var_70], xmm9
      vmovaps [rsp+210h+var_80], xmm10
      vmovaps [rsp+210h+var_90], xmm11
      vmovaps [rsp+210h+var_A0], xmm12
      vmovaps [rsp+210h+var_B0], xmm13
      vmovaps [rsp+210h+var_C0], xmm14
      vmovaps [rsp+210h+var_D0], xmm15
    }
    do
    {
      Model = DObjGetModel(obj, v14);
      ModelRootBoneIndex = DObjGetModelRootBoneIndex(obj, v14);
      CG_DObjGetWorldBoneMatrix(sceneEnt->info.pose, obj, ModelRootBoneIndex, &outTagMat, &outOrigin);
      XModelGetBounds(Model, &bounds);
      MatrixMultiply(&outTagMat, &out, &v159);
      __asm
      {
        vmovss  xmm5, dword ptr [rbp+110h+bounds.midPoint+4]
        vmovss  xmm4, dword ptr [rbp+110h+bounds.midPoint+8]
        vmovss  xmm3, dword ptr [rbp+110h+bounds.midPoint]
        vmovss  xmm11, dword ptr [rsp+210h+var_1D8]
        vmovss  xmm12, dword ptr [rsp+210h+var_1D8+4]
        vmovss  xmm13, dword ptr [rsp+210h+var_1D8+8]
        vmovss  xmm14, dword ptr [rsp+210h+var_1D8+0Ch]
        vmovss  xmm15, dword ptr [rsp+210h+var_1D8+10h]
        vmulss  xmm1, xmm3, xmm11
        vandps  xmm11, xmm11, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vmulss  xmm0, xmm5, xmm12
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm0, xmm4, xmm13
        vaddss  xmm9, xmm2, xmm0
        vmulss  xmm1, xmm3, xmm14
        vmulss  xmm3, xmm3, dword ptr [rsp+210h+var_1D8+18h]
        vmulss  xmm0, xmm5, xmm15
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm4, dword ptr [rsp+210h+var_1D8+14h]
        vmulss  xmm0, xmm5, dword ptr [rsp+210h+var_1D8+1Ch]
        vaddss  xmm7, xmm2, xmm1
        vmulss  xmm1, xmm4, dword ptr [rsp+210h+var_1D8+20h]
        vaddss  xmm2, xmm3, xmm0
        vmovss  xmm0, dword ptr [rsp+210h+var_1B0]
        vsubss  xmm4, xmm0, dword ptr [rax]
        vmulss  xmm3, xmm4, dword ptr [r14+0Ch]
        vmovss  xmm0, dword ptr [rsp+210h+var_1B0+8]
        vsubss  xmm6, xmm0, dword ptr [rax+8]
        vmulss  xmm0, xmm4, dword ptr [r14]
        vaddss  xmm8, xmm2, xmm1
        vmovss  xmm1, dword ptr [rsp+210h+var_1B0+4]
        vsubss  xmm5, xmm1, dword ptr [rax+4]
        vmulss  xmm1, xmm5, dword ptr [r14+4]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm6, dword ptr [r14+8]
        vmulss  xmm0, xmm5, dword ptr [r14+10h]
        vaddss  xmm2, xmm2, xmm1
        vmulss  xmm1, xmm6, dword ptr [r14+14h]
        vaddss  xmm10, xmm2, xmm9
        vaddss  xmm2, xmm3, xmm0
        vmulss  xmm0, xmm5, dword ptr [r14+1Ch]
        vmovss  xmm3, dword ptr [rbp+110h+bounds.halfSize+8]
        vaddss  xmm2, xmm2, xmm1
        vmulss  xmm1, xmm4, dword ptr [r14+18h]
        vmovss  xmm4, dword ptr [rbp+110h+bounds.halfSize+4]
        vaddss  xmm9, xmm2, xmm7
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm6, dword ptr [r14+20h]
        vmovss  xmm6, dword ptr [rbp+110h+bounds.halfSize]
        vaddss  xmm2, xmm2, xmm1
        vmulss  xmm1, xmm11, xmm6
        vmovss  xmm11, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vandps  xmm12, xmm12, xmm11
        vmulss  xmm0, xmm12, xmm4
        vaddss  xmm8, xmm2, xmm8
        vaddss  xmm2, xmm1, xmm0
        vandps  xmm13, xmm13, xmm11
        vmulss  xmm0, xmm13, xmm3
        vaddss  xmm7, xmm2, xmm0
      }
      HIDWORD(v161) = 0;
      __asm
      {
        vandps  xmm14, xmm14, xmm11
        vmulss  xmm1, xmm14, xmm6
        vandps  xmm15, xmm15, xmm11
        vmulss  xmm0, xmm15, xmm4
        vaddss  xmm2, xmm1, xmm0
        vmovss  xmm0, dword ptr [rsp+210h+var_1D8+14h]
        vandps  xmm0, xmm0, xmm11
        vmulss  xmm0, xmm0, xmm3
        vaddss  xmm5, xmm2, xmm0
        vmovss  xmm0, dword ptr [rsp+210h+var_1D8+18h]
        vandps  xmm0, xmm0, xmm11
        vmulss  xmm1, xmm0, xmm6
        vmovss  xmm0, dword ptr [rsp+210h+var_1D8+1Ch]
        vandps  xmm0, xmm0, xmm11
        vmulss  xmm0, xmm0, xmm4
        vaddss  xmm2, xmm1, xmm0
        vmovss  xmm0, dword ptr [rsp+210h+var_1D8+20h]
        vandps  xmm0, xmm0, xmm11
        vmulss  xmm0, xmm0, xmm3
        vaddss  xmm1, xmm2, xmm0
        vsubss  xmm4, xmm9, xmm5
        vsubss  xmm0, xmm8, xmm1
        vsubss  xmm3, xmm10, xmm7
        vaddss  xmm8, xmm1, xmm8
        vaddss  xmm6, xmm7, xmm10
        vaddss  xmm7, xmm5, xmm9
        vmovups xmm5, xmmword ptr [rsp+70h]
        vmovss  xmm5, xmm5, xmm3
        vinsertps xmm5, xmm5, xmm4, 10h
        vinsertps xmm5, xmm5, xmm0, 20h ; ' '
        vmovss  xmm0, dword ptr [rdi]
        vmovups xmmword ptr [rsp+70h], xmm5
      }
      HIDWORD(v162) = 0;
      __asm
      {
        vmovups xmm4, xmmword ptr [rbp-80h]
        vmovss  xmm4, xmm4, xmm0
        vinsertps xmm4, xmm4, dword ptr [rdi+4], 10h
        vinsertps xmm4, xmm4, dword ptr [rdi+8], 20h ; ' '
        vmovss  xmm0, dword ptr [rdi+0Ch]
        vmovups xmmword ptr [rbp-80h], xmm4
      }
      HIDWORD(v163) = 0;
      __asm
      {
        vmovups xmm3, xmmword ptr [rbp-70h]
        vmovss  xmm3, xmm3, xmm0
        vinsertps xmm3, xmm3, dword ptr [rdi+10h], 10h
        vinsertps xmm3, xmm3, dword ptr [rdi+14h], 20h ; ' '
        vsubps  xmm0, xmm4, xmm3
        vaddps  xmm1, xmm4, xmm3
        vminps  xmm2, xmm0, xmm5
        vmaxps  xmm0, xmm1, xmm5
        vmovups xmmword ptr [rbp-70h], xmm3
        vaddps  xmm1, xmm2, xmm0
        vmulps  xmm3, xmm1, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
        vmovss  dword ptr [rdi], xmm3
        vextractps dword ptr [rdi+4], xmm3, 1
        vextractps dword ptr [rdi+8], xmm3, 2
        vsubps  xmm4, xmm3, xmm2
        vmovss  dword ptr [rdi+0Ch], xmm4
        vextractps dword ptr [rdi+10h], xmm4, 1
        vextractps dword ptr [rdi+14h], xmm4, 2
        vmovss  xmm0, dword ptr [rdi]
      }
      HIDWORD(v165) = 0;
      __asm
      {
        vmovups xmm4, xmmword ptr [rbp-50h]
        vmovss  xmm4, xmm4, xmm0
        vmovss  xmm0, dword ptr [rdi+0Ch]
        vinsertps xmm4, xmm4, dword ptr [rdi+4], 10h
        vinsertps xmm4, xmm4, dword ptr [rdi+8], 20h ; ' '
      }
      HIDWORD(v164) = 0;
      __asm { vmovups xmm5, xmmword ptr [rbp-60h] }
      HIDWORD(v166) = 0;
      __asm
      {
        vmovups xmm3, xmmword ptr [rbp-40h]
        vmovss  xmm3, xmm3, xmm0
        vinsertps xmm3, xmm3, dword ptr [rdi+10h], 10h
        vinsertps xmm3, xmm3, dword ptr [rdi+14h], 20h ; ' '
        vmovss  xmm5, xmm5, xmm6
        vinsertps xmm5, xmm5, xmm7, 10h
        vinsertps xmm5, xmm5, xmm8, 20h ; ' '
        vmovups xmmword ptr [rbp-40h], xmm3
        vsubps  xmm0, xmm4, xmm3
        vmovups xmmword ptr [rbp-60h], xmm5
        vmovups xmmword ptr [rbp-50h], xmm4
        vaddps  xmm1, xmm4, xmm3
        vminps  xmm2, xmm0, xmm5
        vmaxps  xmm0, xmm1, xmm5
        vaddps  xmm1, xmm2, xmm0
        vmulps  xmm3, xmm1, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
        vmovss  dword ptr [rdi], xmm3
        vsubps  xmm4, xmm3, xmm2
        vextractps dword ptr [rdi+4], xmm3, 1
        vextractps dword ptr [rdi+8], xmm3, 2
      }
      ++v14;
      __asm
      {
        vmovss  dword ptr [rdi+0Ch], xmm4
        vextractps dword ptr [rdi+10h], xmm4, 1
        vextractps dword ptr [rdi+14h], xmm4, 2
      }
    }
    while ( v14 < NumModels );
    __asm
    {
      vmovaps xmm15, [rsp+210h+var_D0]
      vmovaps xmm14, [rsp+210h+var_C0]
      vmovaps xmm13, [rsp+210h+var_B0]
      vmovaps xmm12, [rsp+210h+var_A0]
      vmovaps xmm11, [rsp+210h+var_90]
      vmovaps xmm10, [rsp+210h+var_80]
      vmovaps xmm9, [rsp+210h+var_70]
      vmovaps xmm8, [rsp+210h+var_60]
      vmovaps xmm7, [rsp+210h+var_50]
      vmovaps xmm6, [rsp+210h+var_40]
    }
  }
}

/*
==============
R_SceneEnt_GetLgvDensity
==============
*/
float R_SceneEnt_GetLgvDensity(const GfxSceneEntity *sceneEnt)
{
  const DObj *obj; 
  int v5; 
  int NumModels; 
  const XModel *Model; 
  char v11; 
  char v12; 

  obj = sceneEnt->obj;
  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovss  xmm6, cs:__real@44800000
  }
  v5 = 0;
  NumModels = DObjGetNumModels(obj);
  if ( NumModels > 0 )
  {
    __asm
    {
      vmovaps [rsp+48h+var_28], xmm7
      vxorps  xmm7, xmm7, xmm7
    }
    do
    {
      Model = DObjGetModel(obj, v5);
      _RCX = r_lgvForceXModelDensity;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+28h]
        vcomiss xmm0, xmm7
      }
      if ( v11 | v12 )
        *(double *)&_XMM0 = XModelGetLgvDensity(Model);
      ++v5;
      __asm { vminss  xmm6, xmm0, xmm6 }
    }
    while ( v5 < NumModels );
    __asm { vmovaps xmm7, [rsp+48h+var_28] }
  }
  __asm
  {
    vmovaps xmm0, xmm6
    vmovaps xmm6, [rsp+48h+var_18]
  }
  return *(float *)&_XMM0;
}

/*
==============
R_SceneEnt_UseSingleProbe
==============
*/
bool R_SceneEnt_UseSingleProbe(const GfxSceneEntity *sceneEnt, float volumeDensity, const Bounds *entWorldBounds, const LightGridVolumeModifier *lgvModifier)
{
  unsigned int v8; 
  int v19; 
  int v20; 
  int v21; 
  int v26; 
  bool result; 
  int NumModels; 
  unsigned __int64 v29; 
  unsigned __int64 v32; 
  bool v33; 
  bool v34; 
  char v39; 
  char v40; 
  bool v42; 
  __int64 v46; 
  double v47; 
  __int64 v48; 

  v8 = lgvModifier->flags & 0x440;
  if ( (lgvModifier->flags & 2) != 0 && !lgvModifier->dimension )
    return v8 == 0;
  __asm
  {
    vmovss  xmm0, cs:__real@40000000
    vdivss  xmm2, xmm0, xmm1
    vmulss  xmm1, xmm2, dword ptr [r8+0Ch]
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm0, xmm0, xmm1, 1
    vcvttss2si eax, xmm0
    vmulss  xmm0, xmm2, dword ptr [r10+10h]
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm1, xmm1, xmm0, 1
    vmulss  xmm0, xmm2, dword ptr [r10+14h]
  }
  v19 = 1;
  v20 = 1;
  v21 = 1;
  if ( _EAX > 1 )
    v19 = _EAX;
  __asm
  {
    vcvttss2si eax, xmm1
    vxorps  xmm1, xmm1, xmm1
  }
  if ( _EAX > 1 )
    v20 = _EAX;
  __asm
  {
    vroundss xmm1, xmm1, xmm0, 1
    vcvttss2si eax, xmm1
  }
  if ( _EAX > 1 )
    v21 = _EAX;
  if ( v21 > 15 )
    v21 = 15;
  if ( v20 > 16 )
    v20 = 16;
  v26 = v20 * v21;
  if ( v19 > 16 )
    v19 = 16;
  if ( v19 * v26 == 1 )
    return v8 == 0;
  __asm
  {
    vmovaps [rsp+0A8h+var_38], xmm6
    vmovaps [rsp+0A8h+var_48], xmm7
    vmovaps [rsp+0A8h+var_58], xmm8
  }
  NumModels = DObjGetNumModels(sceneEnt->obj);
  v29 = NumModels;
  if ( NumModels > 0 )
  {
    __asm
    {
      vmovss  xmm7, cs:__real@4b800000
      vmovss  xmm8, cs:__real@4f800000
    }
    v32 = 0i64;
    v33 = __CFADD__(sceneEnt, 368i64);
    v34 = __CFADD__(sceneEnt, 368i64) || (const GfxSceneEntity *)sceneEnt->materialLods == NULL;
    _RSI = sceneEnt->materialLods;
    __asm { vxorps  xmm6, xmm6, xmm6 }
    do
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsi]
        vcomiss xmm0, xmm6
        vcvttss2si rbx, xmm0
      }
      if ( v33 )
        goto LABEL_22;
      __asm { vcomiss xmm0, xmm7 }
      if ( !v34 )
      {
LABEL_22:
        v39 = 0;
        v34 = 1;
      }
      else
      {
        v39 = 1;
      }
      __asm
      {
        vcomiss xmm0, xmm6
        vcomiss xmm0, xmm8
      }
      v40 = v34;
      if ( !v39 || !v40 )
      {
        __asm
        {
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  [rsp+0A8h+var_70], xmm0
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 437, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (IntegralType) 0x%jx == (FloatType) %f", "unsigned int __cdecl float_to_integral_cast<unsigned int,float>(float)", (unsigned int)_RBX, v47) )
          __debugbreak();
      }
      v42 = (_DWORD)_RBX == 0;
      if ( (unsigned int)_RBX > 1 )
      {
        LODWORD(v48) = 1;
        LODWORD(v46) = _RBX;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 201, ASSERT_TYPE_ASSERT, "( retVal ) <= ( MAX_MATERIAL_LOD )", "%s <= %s\n\t%u, %u", "retVal", "MAX_MATERIAL_LOD", v46, v48) )
          __debugbreak();
        v42 = (_DWORD)_RBX == 0;
      }
      if ( v42 )
        goto LABEL_39;
      ++v32;
      ++_RSI;
      v33 = v32 < v29;
      v34 = v32 <= v29;
    }
    while ( (__int64)v32 < (__int64)v29 );
  }
  if ( v8 )
  {
LABEL_39:
    result = 0;
    goto LABEL_40;
  }
  result = 1;
LABEL_40:
  __asm
  {
    vmovaps xmm8, [rsp+0A8h+var_58]
    vmovaps xmm7, [rsp+0A8h+var_48]
    vmovaps xmm6, [rsp+0A8h+var_38]
  }
  return result;
}

/*
==============
UB_BoundProbes
==============
*/
void UB_BoundProbes(int minAxisUse, int medAxisUse, const unsigned int maxProbesUse, int *lgvSize)
{
  __int64 v7; 
  __int64 v8; 

  v7 = medAxisUse;
  v8 = minAxisUse;
  if ( lgvSize[2] * lgvSize[1] * *lgvSize > maxProbesUse )
  {
    __asm
    {
      vmovss  xmm2, cs:__real@3f000000
      vxorps  xmm0, xmm0, xmm0
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, rax
      vcvtsi2ss xmm0, xmm0, rax
      vdivss  xmm0, xmm1, xmm0
    }
    if ( minAxisUse >= 0 && lgvSize[minAxisUse] > 1 )
      __asm { vmulss  xmm0, xmm0, xmm2 }
    if ( medAxisUse >= 0 && lgvSize[medAxisUse] > 1 )
      __asm { vmulss  xmm0, xmm0, xmm2; X }
    __asm
    {
      vmovss  xmm1, cs:__real@40400000
      vxorps  xmm2, xmm2, xmm2
      vcvtsi2ss xmm2, xmm2, rax
      vsubss  xmm3, xmm1, xmm2
      vmovss  xmm2, cs:__real@3f800000
      vdivss  xmm1, xmm2, xmm3; Y
    }
    *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, dword ptr [rbx]
      vmulss  xmm2, xmm1, xmm0
      vxorps  xmm3, xmm3, xmm3
      vroundss xmm3, xmm3, xmm2, 1
      vcvttss2si eax, xmm3
      vmovaps xmm4, xmm0
    }
    if ( _EAX < 1 )
      _EAX = 1;
    *lgvSize = _EAX;
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, dword ptr [rbx+4]
      vmulss  xmm2, xmm1, xmm0
      vxorps  xmm3, xmm3, xmm3
      vroundss xmm3, xmm3, xmm2, 1
      vcvttss2si eax, xmm3
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rbx+8]
    }
    if ( _EAX < 1 )
      _EAX = 1;
    lgvSize[1] = _EAX;
    __asm
    {
      vmulss  xmm1, xmm0, xmm4
      vxorps  xmm2, xmm2, xmm2
      vroundss xmm2, xmm2, xmm1, 1
      vcvttss2si eax, xmm2
    }
    if ( _EAX < 1 )
      _EAX = 1;
    lgvSize[2] = _EAX;
    if ( (int)v8 >= 0 && lgvSize[v8] < 2 )
      lgvSize[v8] = 2;
    if ( (int)v7 >= 0 && lgvSize[v7] < 2 )
      lgvSize[v7] = 2;
  }
}

