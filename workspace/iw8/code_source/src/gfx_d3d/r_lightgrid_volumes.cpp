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
  __m256i m_mainSceneColorRt; 
  GfxCmdBufContext v11; 
  GfxCmdBufContext result[2]; 
  __m256i v16; 
  R_RT_DepthHandle m_mainSceneDepthRt; 
  __m256i v18; 
  R_RT_Group v19; 
  R_RT_Group v20; 

  if ( rg.useLightGridVolumes && (r_lgvDrawProbes->current.integer || r_lgvDebugEnt->current.integer != -1 || r_lgvDebugSmodelId->current.integer) && RB_GpuLightGrid_DataAvailable(viewInfo) )
  {
    source = context->source;
    state = context->state;
    R_InitCmdBufSourceState(context->source, &viewInfo->input);
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
    R_BeginViewInternal(source, &viewInfo->sceneDef, (const GfxViewParms *)viewInfo, &viewInfo->viewParmsSet.frames[1].viewParms);
    R_SetViewportStruct(source, &viewInfo->sceneViewport);
    *(R_RT_ColorHandle *)&result[0].source = viewInfo->sceneRtInput.m_mainSceneColorRt;
    height = R_RT_Handle::GetSurface((R_RT_Handle *)result)->m_image.m_base.height;
    Surface = R_RT_Handle::GetSurface((R_RT_Handle *)result);
    R_SetRenderTargetSize(source, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FOR_VIEW);
    m_mainSceneColorRt = (__m256i)viewInfo->sceneRtInput.m_mainSceneColorRt;
    v11 = *context;
    m_mainSceneDepthRt = viewInfo->sceneRtInput.m_mainSceneDepthRt;
    *(R_RT_DepthHandle *)&result[0].source = m_mainSceneDepthRt;
    v16 = m_mainSceneColorRt;
    v18 = m_mainSceneColorRt;
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface((R_RT_Handle *)result);
      m_mainSceneDepthRt = *(R_RT_DepthHandle *)&result[0].source;
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 463, ASSERT_TYPE_ASSERT, "(depthRt)", (const char *)&queryFormat, "depthRt") )
        __debugbreak();
    }
    v19.m_colorRtCount = 1;
    *(__m256i *)&result[0].source = v16;
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface((R_RT_Handle *)result);
    }
    else
    {
      if ( v18.m256i_i32[2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", result[0].source, result[0].state, result[1].source, result[1].state) )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 442, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
        __debugbreak();
    }
    v19.m_colorRts[0] = (R_RT_ColorHandle)v16;
    v19.m_depthRt = m_mainSceneDepthRt;
    v20 = v19;
    result[0] = v11;
    R_SetRenderTargetsInternal(result, &v20, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(2419)");
    result[0] = v11;
    R_LGV_DrawProbes(result, viewInfo);
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
  R_RT_Handle samplingBufferOffsets1; 

  WrappedBuffer = R_RT_Handle::GetWrappedBuffer(&lgvGlob.samplingBuffers[(unsigned __int64)data->shLightingIndex].lightGridVolumeActiveLightGrids);
  R_HW_AddResourceTransition(state, WrappedBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  samplingBufferOffsets1 = (R_RT_Handle)lgvGlob.samplingPrepBuffers.samplingBufferOffsets1;
  R_HW_AddResourceTransition(state, &samplingBufferOffsets1, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  samplingBufferOffsets1 = (R_RT_Handle)lgvGlob.samplingPrepBuffers.globalProbeOffsets1;
  R_HW_AddResourceTransition(state, &samplingBufferOffsets1, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  samplingBufferOffsets1 = (R_RT_Handle)lgvGlob.samplingPrepBuffers.lightgridProbeCounts1;
  R_HW_AddResourceTransition(state, &samplingBufferOffsets1, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  samplingBufferOffsets1 = (R_RT_Handle)lgvGlob.samplingPrepBuffers.lightgridVolumeCounts1;
  R_HW_AddResourceTransition(state, &samplingBufferOffsets1, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  samplingBufferOffsets1 = (R_RT_Handle)lgvGlob.samplingPrepBuffers.samplingBufferOffsets2;
  R_HW_AddResourceTransition(state, &samplingBufferOffsets1, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  samplingBufferOffsets1 = (R_RT_Handle)lgvGlob.samplingPrepBuffers.globalProbeOffsets2;
  R_HW_AddResourceTransition(state, &samplingBufferOffsets1, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  samplingBufferOffsets1 = (R_RT_Handle)lgvGlob.samplingPrepBuffers.lightgridProbeCounts2;
  R_HW_AddResourceTransition(state, &samplingBufferOffsets1, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  samplingBufferOffsets1 = (R_RT_Handle)lgvGlob.samplingPrepBuffers.lightgridVolumeCounts2;
  R_HW_AddResourceTransition(state, &samplingBufferOffsets1, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  samplingBufferOffsets1 = (R_RT_Handle)lgvGlob.samplingPrepBuffers.lightGridVolumeCount;
  R_HW_AddResourceTransition(state, &samplingBufferOffsets1, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  samplingBufferOffsets1 = (R_RT_Handle)lgvGlob.samplingPrepBuffers.indirectDispatchParams;
  R_HW_AddResourceTransition(state, &samplingBufferOffsets1, 0xFFFFFFFF, D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  samplingBufferOffsets1 = (R_RT_Handle)lgvGlob.samplingBuffers[(unsigned __int64)data->shLightingIndex].lightGridVolumeSamplingSlot;
  R_HW_AddResourceTransition(state, &samplingBufferOffsets1, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  samplingBufferOffsets1 = (R_RT_Handle)lgvGlob.samplingPrepBuffers.globalProbeOffset;
  R_HW_AddResourceTransition(state, &samplingBufferOffsets1, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  samplingBufferOffsets1 = (R_RT_Handle)lgvGlob.samplingPrepBuffers.lightGridVolumesList;
  R_HW_AddResourceTransition(state, &samplingBufferOffsets1, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  samplingBufferOffsets1 = (R_RT_Handle)lgvGlob.samplingPrepBuffers.lightGridProbeOffset;
  R_HW_AddResourceTransition(state, &samplingBufferOffsets1, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  samplingBufferOffsets1 = (R_RT_Handle)lgvGlob.samplingPrepBuffers.globalVolumeIndexingBuffer;
  R_HW_AddResourceTransition(state, &samplingBufferOffsets1, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  samplingBufferOffsets1 = (R_RT_Handle)lgvGlob.samplingPrepBuffers.lightGridVolumeIndexingBuffer;
  R_HW_AddResourceTransition(state, &samplingBufferOffsets1, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  samplingBufferOffsets1 = (R_RT_Handle)lgvGlob.samplingBuffers[(unsigned __int64)data->shLightingIndex].lightGridVolumeSampledLightingData;
  R_HW_AddResourceTransition(state, &samplingBufferOffsets1, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
}

/*
==============
RB_LGV_SampleLighting
==============
*/
void RB_LGV_SampleLighting(ComputeCmdBufState *state, const GfxBackEndData *data, const GfxViewInfo *viewInfo)
{
  bool v6; 
  __m256i m_lightGridVolumeData3D; 
  const GfxGpuLightGrid *v8; 
  const GfxWrappedRWBuffer *WrappedBuffer; 
  const GfxWrappedRWBuffer *v10; 
  const GfxWrappedRWBuffer *v11; 
  const GfxWrappedRWBuffer *v12; 
  __m256i v13; 
  R_RT_ColorHandle m_lightGridVolumeHighBandsData3D; 
  __m256i v15; 
  R_RT_ColorHandle v16; 
  __m256i v17; 

  if ( s_world.draw.lightGridType == GFX_LIGHTGRID_TYPE_MULTI )
    v6 = R_GetNumActiveLightGrids(data) == 0;
  else
    v6 = !RB_GpuLightGrid_DataAvailable(viewInfo);
  if ( !v6 )
  {
    RB_LGV_SampleLightingSetup(state, data);
    if ( lgvGlob.frameData[data->smpFrame].numLightGridVolumeProbesUsed )
    {
      if ( RB_GpuLightGrid_DataAvailable(viewInfo) )
      {
        R_LockIfGfxImmediateContext(state->device);
        R_GPU_BeginTimer(GPU_TIMER_SAMPLE_LIGHT_GRID);
        Sys_ProfBeginNamedEvent(0xFFFF7F50, "Sample light grid volumes");
        R_ProfBeginNamedEvent(state, "Sample light grid volumes");
        if ( s_world.draw.lightGridType == GFX_LIGHTGRID_TYPE_MULTI )
        {
          m_lightGridVolumeData3D = (__m256i)viewInfo->sceneRtInput.m_lightGridVolumeData3D;
          m_lightGridVolumeHighBandsData3D = viewInfo->sceneRtInput.m_lightGridVolumeHighBandsData3D;
          v15 = m_lightGridVolumeData3D;
          RB_LGV_SampleLightingMultiLightGrid(state, data, viewInfo, 1, (R_RT_ColorHandle *)&v15, &m_lightGridVolumeHighBandsData3D);
        }
        else
        {
          if ( R_GetNumActiveLightGrids(data) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp", 3066, ASSERT_TYPE_ASSERT, "(R_GetNumActiveLightGrids( data ) == 1)", (const char *)&queryFormat, "R_GetNumActiveLightGrids( data ) == 1") )
            __debugbreak();
          v8 = *R_GetActiveLightGridsList(data);
          if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp", 3068, ASSERT_TYPE_ASSERT, "(gpuLightGrid)", (const char *)&queryFormat, "gpuLightGrid") )
            __debugbreak();
          WrappedBuffer = R_RT_Handle::GetWrappedBuffer(&lgvGlob.samplingBuffers[(unsigned __int64)(1 - data->shLightingIndex)].lightGridVolumeSampledPrimaryVisTets);
          v10 = R_RT_Handle::GetWrappedBuffer(&lgvGlob.samplingBuffers[(unsigned __int64)(1 - data->shLightingIndex)].lightGridVolumeSampledLightingData);
          v11 = R_RT_Handle::GetWrappedBuffer(&lgvGlob.samplingBuffers[(unsigned __int64)data->shLightingIndex].lightGridVolumeSampledPrimaryVisTets);
          v12 = R_RT_Handle::GetWrappedBuffer(&lgvGlob.samplingBuffers[(unsigned __int64)data->shLightingIndex].lightGridVolumeSampledLightingData);
          v13 = (__m256i)viewInfo->sceneRtInput.m_lightGridVolumeData3D;
          v16 = viewInfo->sceneRtInput.m_lightGridVolumeHighBandsData3D;
          v17 = v13;
          RB_LGV_SampleLightingVolumes(state, data, viewInfo, 1, v8, (R_RT_ColorHandle *)&v17, &v16, v12, v11, v10, WrappedBuffer);
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
  const R_RT_Surface *v13; 
  const R_RT_Surface *v14; 
  const R_RT_Surface *v15; 
  __int64 v16; 
  const R_RT_Surface *v17; 
  const GfxWrappedBuffer *prevFrameLightGridVolumeSampledLightingData; 
  const R_RT_Surface *v19; 
  const GfxWrappedBuffer *prevFrameLightGridVolumeSamplingSlot; 
  const R_RT_Surface *v21; 
  const GfxWrappedBuffer *prevFrameLightGridVolumeActiveLightGrids; 
  const R_RT_Surface *v23; 
  const GfxWrappedRWBuffer *lightGridVolumeSampledLightingData; 
  const R_RT_Surface *v25; 
  const GfxWrappedBuffer *v26; 
  const R_RT_Surface *v27; 
  const R_RT_Surface *v28; 
  const GfxTexture *Resident; 
  const R_RT_Surface *v30; 
  const GfxWrappedRWBuffer *v31; 
  const R_RT_Surface *v32; 
  const GfxWrappedRWBuffer *v33; 
  const R_RT_Surface *v34; 
  const GfxWrappedRWBuffer *v35; 
  const R_RT_Surface *v36; 
  R_RT_ColorHandle v37; 
  const R_RT_Surface *v38; 
  const GfxTexture *v39; 
  GfxShaderBufferView *views; 
  GfxShaderBufferView *lightGridVolumeIndexingBuffer; 
  GfxShaderBufferView *lightGridVolumesList; 
  GfxShaderBufferRWView *indirectDispatchParams; 
  ID3D12Resource *buffers; 
  R_RT_Handle lightGridVolumeActiveLightGrids; 
  R_RT_Handle v46; 
  R_RT_ColorHandle v47; 
  __m256i v48[2]; 
  bool v49; 

  RB_LGV_UpdateSampleLightingConstantBuffer(state, data, viewInfo, prevFrameValid, &lgvGlob.frameData[data->smpFrame]);
  v49 = R_ReflectionProbe_UseLightgridOverride(data->reflectionProbeFrameIndex);
  RB_LGV_PrepareInitialResourceStates(state, data, viewInfo);
  R_FlushResourceTransitions(state);
  WrappedBuffer = R_RT_Handle::GetWrappedBuffer(&lgvGlob.samplingBuffers[(unsigned __int64)data->shLightingIndex].lightGridVolumeActiveLightGrids);
  smpFrame = data->smpFrame;
  v11 = WrappedBuffer;
  R_SetComputeShader(state, rgp.findLightGridsToSample);
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
  lightGridVolumeActiveLightGrids = (R_RT_Handle)lgvGlob.samplingBuffers[(unsigned __int64)data->shLightingIndex].lightGridVolumeActiveLightGrids;
  R_HW_AddResourceTransition(state, &lightGridVolumeActiveLightGrids, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_ComputeWaitForCompute(state, PIPE_FLUSH_PARTIAL);
  R_LGV_GenerateLightGridSamplingLists(state, data, viewInfo);
  R_FlushResourceTransitions(state);
  Surface = R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.indirectDispatchParams);
  if ( (Surface->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  indirectDispatchParams = (GfxShaderBufferRWView *)&Surface->1080;
  v13 = R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.lightGridVolumesList);
  if ( (v13->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  lightGridVolumesList = (GfxShaderBufferView *)&v13->1080;
  v14 = R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.lightGridVolumeIndexingBuffer);
  if ( (v14->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  lightGridVolumeIndexingBuffer = (GfxShaderBufferView *)&v14->1080;
  v15 = R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.lightGridVolumeCount);
  if ( (v15->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v16 = 1 - data->shLightingIndex;
  views = (GfxShaderBufferView *)&v15->1080;
  v17 = R_RT_Handle::GetSurface(&lgvGlob.samplingBuffers[v16].lightGridVolumeSampledLightingData);
  if ( (v17->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  prevFrameLightGridVolumeSampledLightingData = (const GfxWrappedBuffer *)&v17->1080;
  v19 = R_RT_Handle::GetSurface(&lgvGlob.samplingBuffers[(unsigned __int64)(1 - data->shLightingIndex)].lightGridVolumeSamplingSlot);
  if ( (v19->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  prevFrameLightGridVolumeSamplingSlot = (const GfxWrappedBuffer *)&v19->1080;
  v21 = R_RT_Handle::GetSurface(&lgvGlob.samplingBuffers[(unsigned __int64)(1 - data->shLightingIndex)].lightGridVolumeActiveLightGrids);
  if ( (v21->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  prevFrameLightGridVolumeActiveLightGrids = (const GfxWrappedBuffer *)&v21->1080;
  v23 = R_RT_Handle::GetSurface(&lgvGlob.samplingBuffers[(unsigned __int64)data->shLightingIndex].lightGridVolumeSampledLightingData);
  if ( (v23->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  lightGridVolumeSampledLightingData = (const GfxWrappedRWBuffer *)&v23->1080;
  v25 = R_RT_Handle::GetSurface(&lgvGlob.samplingBuffers[(unsigned __int64)data->shLightingIndex].lightGridVolumeSamplingSlot);
  if ( (v25->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v26 = (const GfxWrappedBuffer *)&v25->1080;
  v27 = R_RT_Handle::GetSurface(&lgvGlob.samplingBuffers[(unsigned __int64)data->shLightingIndex].lightGridVolumeActiveLightGrids);
  if ( (v27->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  R_LGV_SampleLightingPerLightGrid(state, data, viewInfo, (const GfxWrappedBuffer *)&v27->1080, v26, lightGridVolumeSampledLightingData, prevFrameLightGridVolumeActiveLightGrids, prevFrameLightGridVolumeSamplingSlot, prevFrameLightGridVolumeSampledLightingData, (const GfxWrappedBuffer *)views, (const GfxWrappedBuffer *)lightGridVolumeIndexingBuffer, (const GfxWrappedBuffer *)lightGridVolumesList, (const GfxWrappedBuffer *)indirectDispatchParams);
  v46 = (R_RT_Handle)lgvGlob.samplingBuffers[(unsigned __int64)data->shLightingIndex].lightGridVolumeSampledLightingData;
  R_HW_AddResourceTransition(state, &v46, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_ComputeWaitForCompute(state, PIPE_FLUSH_PARTIAL);
  v28 = R_RT_Handle::GetSurface(lightGridVolumeData3D);
  Resident = R_Texture_GetResident(v28->m_image.m_base.textureId);
  R_HW_AddResourceTransition(state, Resident, 0xFFFFFFFF, D3D12_RESOURCE_STATE_COMMON, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  v30 = R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.globalVolumeIndexingBuffer);
  if ( (v30->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v31 = (const GfxWrappedRWBuffer *)&v30->1080;
  v32 = R_RT_Handle::GetSurface(&lgvGlob.samplingBuffers[(unsigned __int64)data->shLightingIndex].lightGridVolumeSampledLightingData);
  if ( (v32->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v33 = (const GfxWrappedRWBuffer *)&v32->1080;
  v34 = R_RT_Handle::GetSurface(&lgvGlob.samplingBuffers[(unsigned __int64)data->shLightingIndex].lightGridVolumeSamplingSlot);
  if ( (v34->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v35 = (const GfxWrappedRWBuffer *)&v34->1080;
  v36 = R_RT_Handle::GetSurface(&lgvGlob.samplingBuffers[(unsigned __int64)data->shLightingIndex].lightGridVolumeActiveLightGrids);
  if ( (v36->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v37 = *lightGridVolumeData3D;
  v47 = *lightGridVolumeHighBandData3D;
  v48[0] = (__m256i)v37;
  R_LGV_CombineSampledLighting(state, data, viewInfo, (const GfxWrappedRWBuffer *)&v36->1080, v35, v33, v31, (R_RT_ColorHandle *)v48, &v47, v49);
  v38 = R_RT_Handle::GetSurface(lightGridVolumeData3D);
  v39 = R_Texture_GetResident(v38->m_image.m_base.textureId);
  R_HW_AddResourceTransition(state, v39, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
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
  const LightGridVolumeFrameData *v5; 
  volatile int numLightGridVolumesUsed; 
  __int64 shLightingIndex; 
  float *v10; 
  int v11; 
  float temporalSmoothingFactor; 

  v5 = frameData;
  numLightGridVolumesUsed = 0x4000;
  shLightingIndex = (int)data->shLightingIndex;
  if ( frameData->numLightGridVolumesUsed < 0x4000 )
    numLightGridVolumesUsed = frameData->numLightGridVolumesUsed;
  v10 = (float *)lgvGlob.gfxBuffers[shLightingIndex].sampleLightGridVolumeLightingConsts.data;
  *(_DWORD *)v10 = numLightGridVolumesUsed;
  v11 = (numLightGridVolumesUsed + 63) / 64;
  *((_DWORD *)v10 + 4) = v11;
  *((_DWORD *)v10 + 5) = (v11 + 63) / 64;
  *((_DWORD *)v10 + 6) = prevFrameValid;
  if ( prevFrameValid )
    temporalSmoothingFactor = viewInfo->lightGrid.temporalSmoothingFactor;
  else
    temporalSmoothingFactor = 0.0;
  v10[3] = temporalSmoothingFactor;
  v10[2] = v5->lgvSamplingSafeZone;
  *((_DWORD *)v10 + 1) = R_GetNumActiveLightGrids(data);
  *((double *)v10 + 4) = *(double *)viewInfo->viewParms.camera.origin.v;
  v10[10] = viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[2];
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
  float v8; 
  float v9; 
  __int128 v11; 
  float v14; 
  __int128 v16; 
  __m128 v24; 
  __int128 v26; 
  __int128 v30; 
  __int128 v34; 
  __int128 v43; 
  vec3_t out; 

  _R14 = modelBounds;
  Vec3Rotate(&worldBounds->midPoint, axis, &out);
  Vec3Rotate(origin, axis, (vec3_t *)&v43);
  v8 = out.v[0] - *(float *)&v43;
  v9 = (float)((float)(COERCE_FLOAT(LODWORD(axis->m[0].v[1]) & _xmm) * worldBounds->halfSize.v[1]) + (float)(COERCE_FLOAT(LODWORD(axis->m[0].v[0]) & _xmm) * worldBounds->halfSize.v[0])) + (float)(COERCE_FLOAT(LODWORD(axis->m[0].v[2]) & _xmm) * worldBounds->halfSize.v[2]);
  *(_QWORD *)_R14->midPoint.v = 0i64;
  _R14->midPoint.v[2] = 0.0;
  _R14->halfSize.v[0] = -3.4028235e38;
  _R14->halfSize.v[1] = -3.4028235e38;
  _R14->halfSize.v[2] = -3.4028235e38;
  HIDWORD(v43) = 0;
  v11 = v43;
  *(float *)&v11 = v8 - v9;
  _XMM4 = v11;
  __asm
  {
    vinsertps xmm4, xmm4, xmm1, 10h
    vinsertps xmm4, xmm4, xmm0, 20h ; ' '
  }
  v14 = _R14->midPoint.v[0];
  v43 = _XMM4;
  HIDWORD(v43) = 0;
  v16 = v43;
  *(float *)&v16 = v14;
  _XMM3 = v16;
  __asm
  {
    vinsertps xmm3, xmm3, dword ptr [r14+4], 10h
    vinsertps xmm3, xmm3, dword ptr [r14+8], 20h ; ' '
  }
  _XMM0 = _mm128_sub_ps(_XMM3, (__m128)_xmm);
  _XMM1 = _mm128_add_ps(_XMM3, (__m128)_xmm);
  v43 = (__int128)_XMM3;
  __asm
  {
    vminps  xmm2, xmm0, xmm4
    vmaxps  xmm0, xmm1, xmm4
  }
  _XMM3 = _mm128_mul_ps(_mm128_add_ps(_XMM2, _XMM0), g_oneHalf.v);
  _R14->midPoint.v[0] = _XMM3.m128_f32[0];
  __asm
  {
    vextractps dword ptr [r14+4], xmm3, 1
    vextractps dword ptr [r14+8], xmm3, 2
  }
  v24 = _mm128_sub_ps(_XMM3, _XMM2);
  _R14->halfSize.v[0] = v24.m128_f32[0];
  _R14->halfSize.v[1] = _mm_shuffle_ps(v24, v24, 85).m128_f32[0];
  HIDWORD(v43) = 0;
  v26 = v43;
  *(float *)&v26 = v9 + v8;
  _XMM6 = v26;
  _R14->halfSize.v[2] = _mm_shuffle_ps(v24, v24, 170).m128_f32[0];
  _XMM0.m128_i32[0] = LODWORD(_R14->midPoint.v[0]);
  __asm
  {
    vinsertps xmm6, xmm6, xmm10, 10h
    vinsertps xmm6, xmm6, xmm9, 20h ; ' '
  }
  v43 = _XMM6;
  HIDWORD(v43) = 0;
  v30 = v43;
  *(float *)&v30 = _XMM0.m128_f32[0];
  _XMM3 = v30;
  __asm
  {
    vinsertps xmm3, xmm3, dword ptr [r14+4], 10h
    vinsertps xmm3, xmm3, dword ptr [r14+8], 20h ; ' '
  }
  v43 = (__int128)_XMM3;
  HIDWORD(v43) = 0;
  v34 = v43;
  *(float *)&v34 = v24.m128_f32[0];
  _XMM1 = v34;
  __asm
  {
    vinsertps xmm1, xmm1, xmm4, 10h
    vinsertps xmm1, xmm1, xmm5, 20h ; ' '
  }
  _XMM0 = _mm128_sub_ps(_XMM3, _XMM1);
  _XMM1 = _mm128_add_ps(_XMM3, _XMM1);
  __asm
  {
    vminps  xmm2, xmm0, xmm6
    vmaxps  xmm0, xmm1, xmm6
  }
  _XMM3 = _mm128_mul_ps(_mm128_add_ps(_XMM2, _XMM0), g_oneHalf.v);
  _R14->midPoint.v[0] = _XMM3.m128_f32[0];
  _XMM4 = _mm128_sub_ps(_XMM3, _XMM2);
  __asm
  {
    vextractps dword ptr [r14+4], xmm3, 1
    vextractps dword ptr [r14+8], xmm3, 2
  }
  _R14->halfSize.v[0] = _XMM4.m128_f32[0];
  __asm
  {
    vextractps dword ptr [r14+10h], xmm4, 1
    vextractps dword ptr [r14+14h], xmm4, 2
  }
}

/*
==============
R_LGV_CalcModifier
==============
*/
LightGridVolumeModifier *R_LGV_CalcModifier(LightGridVolumeModifier *result, unsigned int renderFlags, const GfxViewInfo *viewInfo, unsigned int mapEntLookup, unsigned int entnum, const XModel **modelList, const unsigned int modelCount)
{
  const XModel **v7; 
  __int16 v8; 
  unsigned __int64 v10; 
  const dvar_t *v11; 
  bool enabled; 
  int integer; 
  bool v14; 
  const dvar_t *v15; 
  bool v16; 
  bool v17; 
  char v18; 
  const GfxViewInfo *v19; 
  float v20; 
  const dvar_t *v21; 
  GfxMapEntLookup *gfxMapEntLookup; 
  unsigned __int64 v23; 
  float v24; 
  unsigned int flags; 
  double LgvThinPush; 
  double LgvThinShrink; 
  double LgvDensity; 
  int v29; 
  const dvar_t *v30; 
  const dvar_t *v31; 
  __int64 v32; 
  unsigned int v33; 
  unsigned int v34; 
  unsigned int v35; 

  v7 = modelList;
  v8 = renderFlags;
  v10 = mapEntLookup;
  if ( (!modelList || !modelCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp", 760, ASSERT_TYPE_ASSERT, "(modelList && modelCount)", (const char *)&queryFormat, "modelList && modelCount") )
    __debugbreak();
  v11 = DCONST_DVARFLT_r_character_lighting_hack;
  enabled = r_lgvThinDisable->current.enabled;
  integer = r_lgvBoostWidth->current.integer;
  if ( !DCONST_DVARFLT_r_character_lighting_hack && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_character_lighting_hack") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  v14 = v11->current.value != 0.0 && (v8 & 0x40) != 0;
  v15 = DVARFLT_r_corpse_lighting_hack;
  if ( !DVARFLT_r_corpse_lighting_hack && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_corpse_lighting_hack") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  v16 = v15->current.value != 0.0 && (v8 & 0x100) != 0;
  v17 = (v8 & 8) != 0 && !v14 && !v16;
  result->thinPush = -1.0;
  v18 = 0;
  result->flags = 0;
  result->density = 0.0;
  result->thinShrink = -1.0;
  if ( v17 && r_useCameraPositionForViewModelLightGridSampling->current.enabled )
  {
    v19 = viewInfo;
    result->flags = 6;
    result->dimension = 0;
    v20 = viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[0];
    result->probesOffset.v[0] = v20;
    result->probesOffset.v[1] = viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[1];
    result->probesOffset.v[2] = viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[2];
    v21 = r_lgvViewModelSamplingOffset;
    result->probesOffset.v[0] = v20 + r_lgvViewModelSamplingOffset->current.value;
    result->probesOffset.v[1] = v21->current.vector.v[1] + result->probesOffset.v[1];
    result->probesOffset.v[2] = v21->current.vector.v[2] + result->probesOffset.v[2];
  }
  else
  {
    *(_QWORD *)result->probesOffset.v = 0i64;
    result->probesOffset.v[2] = 0.0;
    if ( (_DWORD)v10 && (unsigned int)v10 < s_world.gfxMapEntLookupCount )
    {
      gfxMapEntLookup = s_world.gfxMapEntLookup;
      v23 = v10;
      v24 = s_world.gfxMapEntLookup[v10].probesOffset.v[0];
      if ( v24 != 0.0 || s_world.gfxMapEntLookup[v23].probesOffset.v[1] != 0.0 || s_world.gfxMapEntLookup[v23].probesOffset.v[2] != 0.0 )
      {
        result->probesOffset.v[0] = v24;
        result->probesOffset.v[1] = gfxMapEntLookup[v23].probesOffset.v[1] + result->probesOffset.v[1];
        result->probesOffset.v[2] = gfxMapEntLookup[v23].probesOffset.v[2] + result->probesOffset.v[2];
        result->flags |= 1u;
        gfxMapEntLookup = s_world.gfxMapEntLookup;
      }
      if ( SLOBYTE(gfxMapEntLookup[v23].flags) < 0 )
      {
        result->flags |= 0x200u;
        gfxMapEntLookup = s_world.gfxMapEntLookup;
      }
      if ( !enabled )
      {
        if ( (gfxMapEntLookup[v23].flags & 2) != 0 )
        {
          result->flags &= ~0x40u;
          v18 = 1;
          gfxMapEntLookup = s_world.gfxMapEntLookup;
        }
        if ( (gfxMapEntLookup[v23].flags & 1) != 0 )
        {
          result->flags |= 0x40u;
          v18 = 1;
          gfxMapEntLookup = s_world.gfxMapEntLookup;
        }
        flags = gfxMapEntLookup[v23].flags;
        if ( (flags & 0x70) != 0 )
        {
          if ( (flags & 0x20) != 0 )
          {
            LgvThinPush = LGVDataGetLgvThinPush(gfxMapEntLookup[v23].lgvData);
            result->thinPush = *(float *)&LgvThinPush;
            gfxMapEntLookup = s_world.gfxMapEntLookup;
          }
          if ( (gfxMapEntLookup[v23].flags & 0x10) != 0 )
          {
            LgvThinShrink = LGVDataGetLgvThinShrink(gfxMapEntLookup[v23].lgvData);
            result->thinShrink = *(float *)&LgvThinShrink;
            gfxMapEntLookup = s_world.gfxMapEntLookup;
          }
          if ( (gfxMapEntLookup[v23].flags & 0x40) != 0 )
          {
            result->flags |= 0x800u;
            LgvDensity = LGVDataGetLgvDensity(s_world.gfxMapEntLookup[v23].lgvData);
            result->density = *(float *)&LgvDensity;
            gfxMapEntLookup = s_world.gfxMapEntLookup;
          }
        }
        if ( (gfxMapEntLookup[v23].flags & 4) != 0 )
        {
          result->flags |= 0x80u;
          gfxMapEntLookup = s_world.gfxMapEntLookup;
        }
        if ( (gfxMapEntLookup[v23].flags & 8) != 0 )
          result->flags |= 0x100u;
      }
    }
    v29 = r_lgvDebugEnt->current.integer;
    if ( v29 != -1 && entnum == v29 )
    {
      v30 = r_lgvDebugEntSamplingOffset;
      result->probesOffset.v[0] = result->probesOffset.v[0] + r_lgvDebugEntSamplingOffset->current.value;
      result->probesOffset.v[1] = result->probesOffset.v[1] + v30->current.vector.v[1];
      result->probesOffset.v[2] = result->probesOffset.v[2] + v30->current.vector.v[2];
      result->flags |= 1u;
    }
    v19 = viewInfo;
    if ( v17 )
    {
      v31 = r_lgvViewModelSamplingOffset;
      result->probesOffset.v[0] = result->probesOffset.v[0] + r_lgvViewModelSamplingOffset->current.value;
      result->probesOffset.v[1] = result->probesOffset.v[1] + v31->current.vector.v[1];
      result->probesOffset.v[2] = result->probesOffset.v[2] + v31->current.vector.v[2];
      result->flags |= 1u;
    }
  }
  if ( modelCount )
  {
    v32 = modelCount;
    do
    {
      v33 = (*v7)->flags;
      if ( (v33 & 0x800000) != 0 )
        result->flags |= 8u;
      if ( (v33 & 0x400000) != 0 )
        result->flags |= 0x10u;
      if ( (v33 & 0x1000000) != 0 && !enabled && !v18 )
        result->flags |= 0x40u;
      if ( integer == -1 && LGVDataGetLgvBoostWidth((*v7)->lgvData) )
        result->flags |= 0x400u;
      ++v7;
      --v32;
    }
    while ( v32 );
  }
  v34 = result->flags;
  if ( integer == 1 )
  {
    v34 |= 0x400u;
    result->flags = v34;
  }
  v35 = v34;
  if ( (v34 & 0x440) != 0 && modelCount == 1 )
  {
    v35 = v34 & 0xFFFFFFD7 | 0x20;
    result->flags = v35;
  }
  if ( r_lgvForceUseEntityBounds->current.enabled )
  {
    v35 |= 8u;
    result->flags = v35;
  }
  if ( r_lgvForceExplodeModels->current.enabled )
    result->flags = v35 | 0x20;
  if ( v19->lightGrid.temporalSmoothingFactor == 0.0 || R_DynamicLightsets_DisableTemporalSmoothing(lgvGlob.smpFrame) )
    result->flags |= 0x10u;
  return result;
}

/*
==============
R_LGV_CalcTransform
==============
*/
void R_LGV_CalcTransform(const Bounds *bounds, const vec3_t *pos, const vec3_t *axes, vec4_t *transform)
{
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

  v4 = bounds->midPoint.v[1] - bounds->halfSize.v[1];
  v5 = bounds->halfSize.v[0];
  v6 = bounds->midPoint.v[0] - v5;
  v7 = bounds->midPoint.v[2] - bounds->halfSize.v[2];
  v8 = (float)((float)((float)(axes->v[0] * v6) + (float)(v4 * axes[1].v[0])) + (float)(v7 * axes[2].v[0])) + pos->v[0];
  v9 = v4 * axes[1].v[2];
  v10 = (float)((float)((float)(v6 * axes->v[1]) + (float)(v4 * axes[1].v[1])) + (float)(v7 * axes[2].v[1])) + pos->v[1];
  v11 = FLOAT_1_0;
  v12 = (float)((float)(v9 + (float)(v6 * axes->v[2])) + (float)(v7 * axes[2].v[2])) + pos->v[2];
  if ( v5 >= 0.001 )
    v13 = 0.5 / v5;
  else
    v13 = FLOAT_1_0;
  transform->v[0] = axes->v[0] * v13;
  transform->v[1] = v13 * axes->v[1];
  transform->v[2] = v13 * axes->v[2];
  v14 = bounds->halfSize.v[1];
  if ( v14 >= 0.001 )
    v15 = 0.5 / v14;
  else
    v15 = FLOAT_1_0;
  transform[1].v[0] = v15 * axes[1].v[0];
  transform[1].v[1] = v15 * axes[1].v[1];
  transform[1].v[2] = v15 * axes[1].v[2];
  v16 = bounds->halfSize.v[2];
  if ( v16 >= 0.001 )
    v11 = 0.5 / v16;
  transform[2].v[0] = v11 * axes[2].v[0];
  transform[2].v[1] = v11 * axes[2].v[1];
  transform[2].v[2] = v11 * axes[2].v[2];
  transform->v[3] = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v8 * transform->v[0]) + (float)(v10 * transform->v[1])) + (float)(v12 * transform->v[2])) ^ _xmm);
  transform[1].v[3] = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v10 * transform[1].v[1]) + (float)(v8 * transform[1].v[0])) + (float)(v12 * transform[1].v[2])) ^ _xmm);
  transform[2].v[3] = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v10 * transform[2].v[1]) + (float)(v8 * transform[2].v[0])) + (float)(v12 * transform[2].v[2])) ^ _xmm);
}

/*
==============
R_LGV_CombineSampledLighting
==============
*/
void R_LGV_CombineSampledLighting(ComputeCmdBufState *state, const GfxBackEndData *data, const GfxViewInfo *viewInfo, const GfxWrappedRWBuffer *lightGridVolumeActiveLightGrids, const GfxWrappedRWBuffer *lightGridVolumeSamplingSlot, const GfxWrappedRWBuffer *lightGridVolumeSampledLightingData, const GfxWrappedRWBuffer *globalVolumeIndexingBuffer, R_RT_ColorHandle *lightGridVolumeData3D, R_RT_ColorHandle *lightGridVolumeHighBandData3D, bool reflectionVolumes)
{
  bool v13; 
  __int64 smpFrame; 
  __int64 shLightingIndex; 
  ComputeShader *combineSampledLGVData; 
  __int64 v17; 
  const GfxTexture *const *v18; 
  const GfxImage *LightGridVolumeAtlasTexture; 
  const GfxImage *v20; 
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v22; 
  GfxShaderBufferView *views; 
  GfxShaderBufferView *p_view; 
  GfxShaderBufferView *v25; 
  GfxShaderBufferView *v26; 
  GfxTexture *textures; 
  GfxTexture *Resident; 
  GfxTexture *v29; 
  const GfxTexture *v30; 
  GfxTexture *v31; 
  GfxTexture *v32; 
  GfxTexture *v33; 
  GfxTexture *v34; 
  GfxShaderBufferView *v35; 
  GfxShaderBufferView *v36; 
  GfxShaderBufferView *v37; 
  GfxTexture *v38; 
  GfxTexture *v39; 
  GfxTexture *v40; 
  GfxTexture *v41; 
  GfxShaderBufferView *v42; 
  GfxShaderBufferView *v43; 
  GfxShaderBufferView *v44; 
  ID3D12Resource *buffers; 
  ID3D12Resource *buffer; 

  v13 = s_world.precomputedSkyIllumination.boxMin.v[0] < s_world.precomputedSkyIllumination.boxMax.v[0] && r_enablePrecomputedSkyIllumination->current.enabled;
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
  v25 = &lgvGlob.gfxBuffers[v17].lightGridVolumeTransformParams.view;
  R_SetComputeViews(state, 2, 1, (const GfxShaderBufferView *const *)&v25);
  lightGridVolumeSamplingSlot = (const GfxWrappedRWBuffer *)((char *)lightGridVolumeSamplingSlot + 8);
  R_SetComputeViews(state, 3, 1, (const GfxShaderBufferView *const *)&lightGridVolumeSamplingSlot);
  lightGridVolumeSampledLightingData = (const GfxWrappedRWBuffer *)((char *)lightGridVolumeSampledLightingData + 8);
  R_SetComputeViews(state, 4, 1, (const GfxShaderBufferView *const *)&lightGridVolumeSampledLightingData);
  globalVolumeIndexingBuffer = (const GfxWrappedRWBuffer *)((char *)globalVolumeIndexingBuffer + 8);
  R_SetComputeViews(state, 5, 1, (const GfxShaderBufferView *const *)&globalVolumeIndexingBuffer);
  v26 = &R_GetFallbackProbe()->view;
  R_SetComputeViews(state, 6, 1, (const GfxShaderBufferView *const *)&v26);
  if ( v13 )
  {
    textures = (GfxTexture *)R_Texture_GetResident(s_world.precomputedSkyIllumination.heightMap->textureId);
    R_SetComputeTextures(state, 20, 1, (const GfxTexture *const *)&textures);
    Resident = (GfxTexture *)R_Texture_GetResident(s_world.precomputedSkyIllumination.detailMask->textureId);
    R_SetComputeTextures(state, 21, 1, (const GfxTexture *const *)&Resident);
    v29 = (GfxTexture *)R_Texture_GetResident(s_world.precomputedSkyIllumination.SVDCoefficient->textureId);
    R_SetComputeTextures(state, 22, 1, (const GfxTexture *const *)&v29);
    v30 = R_Texture_GetResident(s_world.precomputedSkyIllumination.SVDBasis->textureId);
    v18 = &v30;
  }
  else
  {
    v31 = (GfxTexture *)R_Texture_GetResident(rgp.blackImage->textureId);
    R_SetComputeTextures(state, 20, 1, (const GfxTexture *const *)&v31);
    v32 = (GfxTexture *)R_Texture_GetResident(rgp.whiteImage->textureId);
    R_SetComputeTextures(state, 21, 1, (const GfxTexture *const *)&v32);
    v33 = (GfxTexture *)R_Texture_GetResident(rgp.blackImage3D->textureId);
    R_SetComputeTextures(state, 22, 1, (const GfxTexture *const *)&v33);
    v34 = (GfxTexture *)R_Texture_GetResident(rgp.blackImage->textureId);
    v18 = (const GfxTexture *const *)&v34;
  }
  R_SetComputeTextures(state, 23, 1, v18);
  v35 = &R_GetLightGridVolumesAtlasTransientPackingBuffer(data)->view;
  R_SetComputeViews(state, 14, 1, (const GfxShaderBufferView *const *)&v35);
  v36 = &R_GetLightGridVolumesAtlasTransformParamsBuffer(data)->view;
  R_SetComputeViews(state, 15, 1, (const GfxShaderBufferView *const *)&v36);
  v37 = &R_GetLightGridVolumesAtlasPackingParamsBuffer(data)->view;
  R_SetComputeViews(state, 16, 1, (const GfxShaderBufferView *const *)&v37);
  LightGridVolumeAtlasTexture = R_GetLightGridVolumeAtlasTexture(data, LIGHTGRID_VOLUME_ATLAS_TEXTURE_DC);
  v38 = (GfxTexture *)R_Texture_GetResident(LightGridVolumeAtlasTexture->textureId);
  R_SetComputeTextures(state, 17, 1, (const GfxTexture *const *)&v38);
  v20 = R_GetLightGridVolumeAtlasTexture(data, LIGHTGRID_VOLUME_ATLAS_TEXTURE_HIGH_BANDS);
  v39 = (GfxTexture *)R_Texture_GetResident(v20->textureId);
  R_SetComputeTextures(state, 18, 1, (const GfxTexture *const *)&v39);
  Surface = R_RT_Handle::GetSurface(lightGridVolumeData3D);
  v40 = (GfxTexture *)R_Texture_GetResident(Surface->m_image.m_base.textureId);
  R_SetComputeRWTextures(state, 0, 1, (const GfxTexture *const *)&v40);
  v22 = R_RT_Handle::GetSurface(lightGridVolumeHighBandData3D);
  v41 = (GfxTexture *)R_Texture_GetResident(v22->m_image.m_base.textureId);
  R_SetComputeRWTextures(state, 1, 1, (const GfxTexture *const *)&v41);
  if ( reflectionVolumes )
  {
    v42 = &R_ReflectionProbe_GetInstanceBuffer(data->reflectionProbeFrameIndex)->view;
    R_SetComputeViews(state, 10, 1, (const GfxShaderBufferView *const *)&v42);
    v43 = &R_ReflectionProbe_GetObbBuffer(data->reflectionProbeFrameIndex)->view;
    R_SetComputeViews(state, 11, 1, (const GfxShaderBufferView *const *)&v43);
    v44 = &R_ReflectionProbe_GetSHBuffer()->view;
    R_SetComputeViews(state, 13, 1, (const GfxShaderBufferView *const *)&v44);
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
  int v8; 
  LightGridVolumeFrameData *v9; 
  bool v10; 
  const GfxGpuLightGrid **ActiveLightGridsList; 
  int NumActiveLightGrids; 
  __int64 v13; 
  __int64 i; 
  int v15; 
  const GfxGpuLightGrid *v16; 
  int probeCount; 
  int v18; 
  int *entityDebugVolumeIndices; 
  int v20; 
  volatile int v21; 
  __int64 v22; 
  __int64 v23; 
  int v24; 
  unsigned int v25; 
  _DWORD *v26; 
  signed int v27; 
  __int64 v28; 
  __int64 v29; 
  GfxWorldTransientZone *v30; 
  unsigned int v31; 
  int v32; 
  unsigned __int16 *v33; 
  int v34; 
  int v35; 
  __int64 v36; 
  bool v39; 
  char *v40; 
  unsigned int debugVisibleStaticVolumeCount; 
  unsigned int v42; 
  signed int numLightGridVolumeProbesUsed; 
  signed int v45; 
  char *v47; 
  int v48; 
  char *v51; 
  LightGridVolumeGfxBuffers *v52; 
  int v53; 
  unsigned int v54; 
  unsigned int v55; 
  LightGridVolumeFrameData *v56; 
  GfxCmdBufContext v57; 
  GfxCmdBufContext v58; 
  GfxCmdBufContext v59; 
  GfxCmdBufContext v60; 
  GfxCmdBufContext v61; 
  GfxCmdBufContext v62; 
  GfxCmdBufContext v63; 
  GfxCmdBufContext v64; 
  GfxCmdBufContext v65; 
  GfxCmdBufContext v66; 
  GfxCmdBufContext v67; 
  GfxCmdBufContext v68; 
  GfxCmdBufContext v69; 
  GfxCmdBufContext v70; 
  GfxCmdBufContext v71; 
  GfxCmdBufContext v72; 
  GfxCmdBufContext v73; 
  GfxCmdBufContext v74; 
  GfxViewport outViewport; 

  source = context->source;
  state = context->state;
  integer = r_lgvDrawProbes->current.integer;
  data = context->source->input.data;
  v8 = r_lgvDebugEnt->current.integer;
  v53 = r_lgvDebugSmodelId->current.integer;
  v52 = &lgvGlob.gfxBuffers[data->shLightingIndex];
  v9 = &lgvGlob.frameData[data->smpFrame];
  v56 = v9;
  R_Set3D(source);
  if ( (*((_BYTE *)source + 11668) & 2) != 0 )
  {
    R_GetViewport(source, &outViewport);
    R_SetViewportAndScissorSeparate(state, &outViewport, &outViewport);
    R_UpdateViewport(source, &outViewport);
  }
  if ( state->vertDeclType != VERTDECL_GENERIC )
    state->pipelineStateDirty = 1;
  v10 = state->depthRangeType == GFX_DEPTH_RANGE_SCENE;
  state->vertDeclType = VERTDECL_GENERIC;
  if ( !v10 )
    R_ChangeDepthRange(state, GFX_DEPTH_RANGE_SCENE);
  if ( integer && (unsigned int)(integer - 3) <= 2 )
  {
    if ( v9->smodelDebugVolumeIndex == -1 )
    {
      ActiveLightGridsList = R_GetActiveLightGridsList(viewInfo->input.data);
      NumActiveLightGrids = R_GetNumActiveLightGrids(viewInfo->input.data);
      v13 = NumActiveLightGrids;
      if ( NumActiveLightGrids > 0 )
      {
        for ( i = 0i64; i < v13; ++i )
        {
          v15 = 0;
          v16 = ActiveLightGridsList[i];
          probeCount = 0;
          if ( integer == 3 )
          {
            v15 = 1;
          }
          else
          {
            if ( integer != 4 )
            {
              if ( integer == 5 )
              {
                probeCount = 2;
                v15 = 4;
              }
              goto LABEL_19;
            }
            v15 = 8;
          }
          probeCount = v16->probeCount;
LABEL_19:
          v57 = *context;
          R_GpuLightGrid_DrawDebug(&v57, viewInfo, v16, v15, 5.0, NULL, &v16->probesBuffer, probeCount, 0, 0);
        }
      }
    }
  }
  else
  {
    if ( (unsigned int)(integer - 1) > 1 && v8 == -1 && !v53 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp", 2548, ASSERT_TYPE_ASSERT, "(lgvDrawProbesMode == LGV_DRAW_PROBES_LIGHTING || lgvDrawProbesMode == LGV_DRAW_PROBES_SUN_VISIBILITY || drawEntProbes || drawSmodelProbes)", (const char *)&queryFormat, "lgvDrawProbesMode == LGV_DRAW_PROBES_LIGHTING || lgvDrawProbesMode == LGV_DRAW_PROBES_SUN_VISIBILITY || drawEntProbes || drawSmodelProbes") )
      __debugbreak();
    if ( v8 != -1 )
    {
      v18 = 0;
      if ( v9->entityDebugVolumeIndexCount > 0 )
      {
        entityDebugVolumeIndices = v9->entityDebugVolumeIndices;
        do
        {
          v20 = 0;
          v21 = 0;
          v22 = 0i64;
          if ( v9->numLightGridVolumesUsed > 0 )
          {
            v23 = 0i64;
            while ( 1 )
            {
              v24 = v9->lightGridVolumeSrcParams[v23].m_volumeSize[0] * v9->lightGridVolumeSrcParams[v23].m_volumeSize[1] * v9->lightGridVolumeSrcParams[v23].m_volumeSize[2];
              if ( v22 == *entityDebugVolumeIndices )
                break;
              v20 += v24;
              ++v21;
              ++v22;
              ++v23;
              if ( v21 >= v9->numLightGridVolumesUsed )
                goto LABEL_35;
            }
            v58 = *context;
            R_LGV_DrawProbesInternal(&v58, viewInfo, v9, v52, integer, v20, v24, 0);
          }
LABEL_35:
          ++v18;
          ++entityDebugVolumeIndices;
        }
        while ( v18 < v9->entityDebugVolumeIndexCount );
      }
    }
    if ( v53 )
    {
      v25 = s_world.smodels.instances[r_lgvDebugSmodelId->current.unsignedInt].lgvIndex_transientIndex >> 21;
      v54 = s_world.smodels.instances[r_lgvDebugSmodelId->current.unsignedInt].lgvIndex_transientIndex & 0x1FFFFF;
      v55 = v25;
      v26 = R_BeginWrappedBufferDataWrite(&v52->lgvDebugDirectIndexingBuffer);
      v27 = 0;
      v28 = 0i64;
      while ( 1 )
      {
        v29 = *(&v55 + 2 * v28);
        if ( (unsigned int)v29 <= s_world.draw.transientZoneCount )
        {
          v30 = s_world.draw.transientZones[v29];
          if ( v30 )
          {
            v31 = *(&v54 + 2 * v28);
            if ( v31 <= v30->gpuLightGrid.staticModelVolumeCount )
            {
              v32 = 0;
              v33 = (unsigned __int16 *)&v30->gpuLightGrid.staticModelVolumes[(unsigned __int64)v31];
              v34 = v33[2] * v33[3] * v33[4];
              if ( v34 > 0 )
                break;
            }
          }
        }
LABEL_45:
        if ( ++v28 >= 1 )
          goto LABEL_46;
      }
      v35 = v31 & 0xFFFFF;
      while ( 1 )
      {
        v36 = (unsigned int)(2 * v27);
        v26[(unsigned int)(v36 + 1)] = v29;
        ++v27;
        v26[v36] = v35 | (v32 << 20);
        if ( (unsigned int)v27 >= 0x10000 )
          break;
        if ( ++v32 >= v34 )
          goto LABEL_45;
      }
LABEL_46:
      R_EndWrappedBufferDataWrite(&v52->lgvDebugDirectIndexingBuffer);
      _XMM0 = *context;
      __asm { vpextrq rcx, xmm0, 1; state }
      v39 = R_BeginMaterial(_RCX, rgp.gpuLightGridVolumesDebugStaticMaterial, TECHNIQUE_EMISSIVE);
      v9 = v56;
      if ( v39 )
      {
        v59 = *context;
        if ( R_SetupPass(&v59) )
        {
          v40 = (char *)R_BeginWrappedBufferDataWrite(&v52->lgvDebugDataBuffer);
          *(_DWORD *)v40 = integer - 1;
          *(_QWORD *)(v40 + 4) = LODWORD(v9->lgvSamplingSafeZone);
          R_EndWrappedBufferDataWrite(&v52->lgvDebugDataBuffer);
          v60 = *context;
          R_SetupPassStableArgsInternal(&v60, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(2371)");
          v61 = *context;
          R_SetupPassPerObjectArgsInternal(&v61, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(2372)");
          v62 = *context;
          R_SetupPassPerPrimArgsInternal(&v62, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(2373)");
          if ( v27 > 0 )
          {
            v63 = *context;
            R_GpuLightGrid_DrawDebugSpheres(&v63, v27);
          }
        }
      }
    }
    if ( integer )
    {
      debugVisibleStaticVolumeCount = v9->debugVisibleStaticVolumeCount;
      v64 = *context;
      v42 = R_LGV_PrepareDebugProbeDirectIndexingBuffer(&v64, v52, v9->debugVisibleStaticVolumes, debugVisibleStaticVolumeCount);
      _XMM0 = *context;
      numLightGridVolumeProbesUsed = v9->numLightGridVolumeProbesUsed;
      v45 = v42;
      __asm { vpextrq rcx, xmm0, 1; state }
      if ( R_BeginMaterial(_RCX, rgp.gpuLightGridVolumesDebugStaticMaterial, TECHNIQUE_EMISSIVE) && (v65 = *context, R_SetupPass(&v65)) )
      {
        v47 = (char *)R_BeginWrappedBufferDataWrite(&v52->lgvDebugDataBuffer);
        v48 = integer;
        *(_DWORD *)v47 = integer - 1;
        *(_QWORD *)(v47 + 4) = LODWORD(v9->lgvSamplingSafeZone);
        R_EndWrappedBufferDataWrite(&v52->lgvDebugDataBuffer);
        v66 = *context;
        R_SetupPassStableArgsInternal(&v66, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(2371)");
        v67 = *context;
        R_SetupPassPerObjectArgsInternal(&v67, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(2372)");
        v68 = *context;
        R_SetupPassPerPrimArgsInternal(&v68, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(2373)");
        if ( v45 > 0 )
        {
          v69 = *context;
          R_GpuLightGrid_DrawDebugSpheres(&v69, v45);
        }
      }
      else
      {
        v48 = integer;
      }
      _XMM0 = *context;
      __asm { vpextrq rcx, xmm0, 1; state }
      if ( R_BeginMaterial(_RCX, rgp.gpuLightGridVolumesDebugMaterial, TECHNIQUE_EMISSIVE) )
      {
        v70 = *context;
        if ( R_SetupPass(&v70) )
        {
          v51 = (char *)R_BeginWrappedBufferDataWrite(&v52->lgvDebugDataBuffer);
          *(_DWORD *)v51 = v48 - 1;
          *(_QWORD *)(v51 + 4) = LODWORD(v9->lgvSamplingSafeZone);
          R_EndWrappedBufferDataWrite(&v52->lgvDebugDataBuffer);
          v71 = *context;
          R_SetupPassStableArgsInternal(&v71, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(2371)");
          v72 = *context;
          R_SetupPassPerObjectArgsInternal(&v72, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(2372)");
          v73 = *context;
          R_SetupPassPerPrimArgsInternal(&v73, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(2373)");
          if ( numLightGridVolumeProbesUsed > 0 )
          {
            v74 = *context;
            R_GpuLightGrid_DrawDebugSpheres(&v74, numLightGridVolumeProbesUsed);
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
  _DWORD *v13; 
  GfxCmdBufContext v14; 

  gpuLightGridVolumesDebugMaterial = rgp.gpuLightGridVolumesDebugMaterial;
  state = context->state;
  if ( drawStatic )
    gpuLightGridVolumesDebugMaterial = rgp.gpuLightGridVolumesDebugStaticMaterial;
  if ( R_BeginMaterial(state, gpuLightGridVolumesDebugMaterial, TECHNIQUE_EMISSIVE) )
  {
    v14 = *context;
    if ( R_SetupPass(&v14) )
    {
      v13 = R_BeginWrappedBufferDataWrite(&gfxBuffers->lgvDebugDataBuffer);
      *v13 = lightGridVolumesDebugMode - 1;
      v13[1] = LODWORD(frameData->lgvSamplingSafeZone);
      v13[2] = sphereIndexShift;
      R_EndWrappedBufferDataWrite(&gfxBuffers->lgvDebugDataBuffer);
      v14 = *context;
      R_SetupPassStableArgsInternal(&v14, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(2371)");
      v14 = *context;
      R_SetupPassPerObjectArgsInternal(&v14, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(2372)");
      v14 = *context;
      R_SetupPassPerPrimArgsInternal(&v14, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(2373)");
      if ( numSpheresToRender > 0 )
      {
        v14 = *context;
        R_GpuLightGrid_DrawDebugSpheres(&v14, numSpheresToRender);
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
  LightGridVolumeFrameData *v2; 
  __int64 unsignedInt; 
  unsigned int lgvIndex_transientIndex; 
  unsigned int v6; 
  __int64 v7; 
  GfxWorldTransientZone *v8; 
  unsigned __int64 v9; 
  float v11; 
  int v12; 
  int v13; 
  int *entityDebugVolumeIndices; 
  __int64 v15; 
  __int64 v16; 
  double v17; 
  int integer; 
  char v19; 
  __int64 numLightGridVolumesUsed; 
  __int64 v21; 
  LightGridVolumeSrcParams *v22; 
  float v23; 
  double v24; 
  float v25; 
  __int64 debugVisibleStaticVolumeCount; 
  unsigned int *debugVisibleStaticVolumes; 
  __int64 v28; 
  GfxWorldTransientZone *v29; 
  unsigned int v30; 
  unsigned __int64 v31; 
  float v33; 
  bool v34; 
  vec3_t v35; 
  vec3_t v36; 
  vec3_t v37; 
  vec3_t v38; 
  vec3_t v39; 
  vec3_t v40; 
  vec3_t v41; 
  vec3_t v42; 

  v2 = &lgvGlob.frameData[lgvGlob.smpFrame];
  _XMM6 = 0i64;
  unsignedInt = r_lgvDebugSmodelId->current.unsignedInt;
  if ( (int)unsignedInt > 0 )
  {
    lgvIndex_transientIndex = s_world.smodels.instances[unsignedInt].lgvIndex_transientIndex;
    v6 = lgvIndex_transientIndex & 0x1FFFFF;
    v7 = lgvIndex_transientIndex >> 21;
    if ( (unsigned int)v7 < s_world.draw.transientZoneCount )
    {
      v8 = s_world.draw.transientZones[v7];
      if ( v8 )
      {
        if ( v6 < v8->gpuLightGrid.staticModelVolumeCount )
        {
          v9 = (unsigned __int64)&v8->gpuLightGrid.staticModelVolumes[(unsigned __int64)v6];
          __asm { vunpcklps xmm0, xmm6, xmm6 }
          *(double *)v35.v = *(double *)&_XMM0;
          *(_QWORD *)&_XMM0 = *(_QWORD *)cameraPos->v;
          v42.v[2] = 0.0;
          v35.v[2] = 0.0;
          v11 = cameraPos->v[2];
          *(double *)v36.v = *(double *)&_XMM0;
          v36.v[2] = v11;
          R_LGV_DrawSingleVolume_unsigned_short_(&v36, (const vec4_t *)(v9 + 16), &v35, (const unsigned __int16 *)(v9 + 4), v6, 1, 1);
        }
      }
    }
  }
  v12 = 0;
  if ( r_lgvDebugEnt->current.integer != -1 )
  {
    v13 = 0;
    if ( v2->entityDebugVolumeIndexCount > 0 )
    {
      entityDebugVolumeIndices = v2->entityDebugVolumeIndices;
      do
      {
        v15 = *entityDebugVolumeIndices;
        v16 = (__int64)&v2->lightGridVolumeSrcParams[v15];
        v17 = *(double *)(v16 + 68);
        v37.v[2] = *(float *)(v16 + 76);
        v38.v[2] = cameraPos->v[2];
        v34 = *(int *)(v16 + 56) < 0;
        *(double *)v37.v = v17;
        *(_QWORD *)v38.v = *(_QWORD *)cameraPos->v;
        R_LGV_DrawSingleVolume_unsigned_char_(&v38, (const vec4_t *)v16, &v37, (const unsigned __int8 *)(v16 + 48), v15, 1, v34);
        ++v13;
        ++entityDebugVolumeIndices;
      }
      while ( v13 < v2->entityDebugVolumeIndexCount );
    }
  }
  integer = r_lgvDrawVolumes->current.integer;
  if ( integer )
  {
    v19 = integer & 1;
    if ( (integer & 2) != 0 )
    {
      numLightGridVolumesUsed = v2->numLightGridVolumesUsed;
      if ( (int)numLightGridVolumesUsed > 0 )
      {
        v21 = 0i64;
        do
        {
          v22 = &v2->lightGridVolumeSrcParams[v21];
          v23 = v22->m_samplingOffset.v[2];
          *(_QWORD *)v39.v = *(_QWORD *)v22->m_samplingOffset.v;
          v24 = *(double *)cameraPos->v;
          v39.v[2] = v23;
          v25 = cameraPos->v[2];
          *(double *)v40.v = v24;
          v40.v[2] = v25;
          R_LGV_DrawSingleVolume_unsigned_char_(&v40, v22->m_volumeTransform, &v39, v22->m_volumeSize, v12++, 1, 0);
          ++v21;
          --numLightGridVolumesUsed;
        }
        while ( numLightGridVolumesUsed );
      }
    }
    if ( v19 )
    {
      debugVisibleStaticVolumeCount = v2->debugVisibleStaticVolumeCount;
      if ( (int)debugVisibleStaticVolumeCount > 0 )
      {
        debugVisibleStaticVolumes = (unsigned int *)v2->debugVisibleStaticVolumes;
        do
        {
          v28 = debugVisibleStaticVolumes[1];
          if ( (unsigned int)v28 <= s_world.draw.transientZoneCount )
          {
            v29 = s_world.draw.transientZones[v28];
            if ( v29 )
            {
              v30 = *debugVisibleStaticVolumes;
              if ( *debugVisibleStaticVolumes < v29->gpuLightGrid.staticModelVolumeCount )
              {
                v31 = (unsigned __int64)&v29->gpuLightGrid.staticModelVolumes[(unsigned __int64)v30];
                __asm { vunpcklps xmm0, xmm6, xmm6 }
                *(double *)v41.v = *(double *)&_XMM0;
                *(_QWORD *)&_XMM0 = *(_QWORD *)cameraPos->v;
                v40.v[2] = 0.0;
                v41.v[2] = 0.0;
                v33 = cameraPos->v[2];
                *(double *)v42.v = *(double *)&_XMM0;
                v42.v[2] = v33;
                R_LGV_DrawSingleVolume_unsigned_short_(&v42, (const vec4_t *)(v31 + 16), &v41, (const unsigned __int16 *)(v31 + 4), v30, 1, 1);
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
  R_RT_BufferHandle *p_lightGridVolumeActiveLightGrids; 
  __int64 v2; 
  __m256i v3; 
  __m256i v4; 
  R_RT_BufferHandle v6; 
  R_RT_BufferHandle v7; 
  R_RT_BufferHandle v8; 
  R_RT_BufferHandle v9; 
  R_RT_BufferHandle v10; 
  R_RT_BufferHandle v11; 
  R_RT_BufferHandle v12; 
  R_RT_BufferHandle v13; 
  R_RT_BufferHandle v14; 
  R_RT_BufferHandle v15; 
  R_RT_BufferHandle v16; 
  R_RT_BufferHandle v17; 
  R_RT_Handle lightGridVolumeCount; 

  p_lightGridVolumeActiveLightGrids = &lgvGlob.samplingBuffers[0].lightGridVolumeActiveLightGrids;
  v2 = 2i64;
  do
  {
    if ( R_RT_Handle::IsValid(p_lightGridVolumeActiveLightGrids - 2) )
    {
      lightGridVolumeCount = p_lightGridVolumeActiveLightGrids[-2].R_RT_Handle;
      R_RT_DestroyInternal(&lightGridVolumeCount);
      lightGridVolumeCount = p_lightGridVolumeActiveLightGrids[-1].R_RT_Handle;
      R_RT_DestroyInternal(&lightGridVolumeCount);
      lightGridVolumeCount = p_lightGridVolumeActiveLightGrids->R_RT_Handle;
      R_RT_DestroyInternal(&lightGridVolumeCount);
      lightGridVolumeCount = p_lightGridVolumeActiveLightGrids[1].R_RT_Handle;
      R_RT_DestroyInternal(&lightGridVolumeCount);
      lightGridVolumeCount.m_surfaceID = 0;
      lightGridVolumeCount.m_tracking.m_allocCounter = 0;
      __asm { vpxor   xmm0, xmm0, xmm0 }
      *(_OWORD *)&lightGridVolumeCount.m_tracking.m_name = *(_OWORD *)&_XMM0_8;
      v3 = (__m256i)lightGridVolumeCount;
      lightGridVolumeCount.m_surfaceID = 0;
      lightGridVolumeCount.m_tracking.m_allocCounter = 0;
      *(_OWORD *)&lightGridVolumeCount.m_tracking.m_name = *(_OWORD *)&_XMM0_8;
      p_lightGridVolumeActiveLightGrids[-2] = (R_RT_BufferHandle)v3;
      v4 = (__m256i)lightGridVolumeCount;
      lightGridVolumeCount.m_surfaceID = 0;
      lightGridVolumeCount.m_tracking.m_allocCounter = 0;
      *(_OWORD *)&lightGridVolumeCount.m_tracking.m_name = *(_OWORD *)&_XMM0_8;
      p_lightGridVolumeActiveLightGrids[-1] = (R_RT_BufferHandle)v4;
      *p_lightGridVolumeActiveLightGrids = (R_RT_BufferHandle)lightGridVolumeCount;
      lightGridVolumeCount.m_surfaceID = 0;
      lightGridVolumeCount.m_tracking.m_allocCounter = 0;
      *(_OWORD *)&lightGridVolumeCount.m_tracking.m_name = *(_OWORD *)&_XMM0_8;
      p_lightGridVolumeActiveLightGrids[1] = (R_RT_BufferHandle)lightGridVolumeCount;
    }
    p_lightGridVolumeActiveLightGrids += 4;
    --v2;
  }
  while ( v2 );
  if ( lgvGlob.samplingPrepBuffers.lightGridVolumeCount.m_surfaceID )
  {
    R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.lightGridVolumeCount);
    lightGridVolumeCount = (R_RT_Handle)lgvGlob.samplingPrepBuffers.lightGridVolumeCount;
    R_RT_DestroyInternal(&lightGridVolumeCount);
    lightGridVolumeCount = (R_RT_Handle)lgvGlob.samplingPrepBuffers.samplingBufferOffsets1;
    R_RT_DestroyInternal(&lightGridVolumeCount);
    lightGridVolumeCount = (R_RT_Handle)lgvGlob.samplingPrepBuffers.samplingBufferOffsets2;
    R_RT_DestroyInternal(&lightGridVolumeCount);
    lightGridVolumeCount = (R_RT_Handle)lgvGlob.samplingPrepBuffers.lightGridVolumesList;
    R_RT_DestroyInternal(&lightGridVolumeCount);
    lightGridVolumeCount = (R_RT_Handle)lgvGlob.samplingPrepBuffers.lightgridVolumeCounts1;
    R_RT_DestroyInternal(&lightGridVolumeCount);
    lightGridVolumeCount = (R_RT_Handle)lgvGlob.samplingPrepBuffers.lightgridVolumeCounts2;
    R_RT_DestroyInternal(&lightGridVolumeCount);
    lightGridVolumeCount = (R_RT_Handle)lgvGlob.samplingPrepBuffers.lightGridVolumeIndexingBuffer;
    R_RT_DestroyInternal(&lightGridVolumeCount);
    lightGridVolumeCount = (R_RT_Handle)lgvGlob.samplingPrepBuffers.lightGridProbeOffset;
    R_RT_DestroyInternal(&lightGridVolumeCount);
    lightGridVolumeCount = (R_RT_Handle)lgvGlob.samplingPrepBuffers.lightgridProbeCounts1;
    R_RT_DestroyInternal(&lightGridVolumeCount);
    lightGridVolumeCount = (R_RT_Handle)lgvGlob.samplingPrepBuffers.lightgridProbeCounts2;
    R_RT_DestroyInternal(&lightGridVolumeCount);
    lightGridVolumeCount = (R_RT_Handle)lgvGlob.samplingPrepBuffers.globalVolumeIndexingBuffer;
    R_RT_DestroyInternal(&lightGridVolumeCount);
    lightGridVolumeCount = (R_RT_Handle)lgvGlob.samplingPrepBuffers.globalProbeOffset;
    R_RT_DestroyInternal(&lightGridVolumeCount);
    lightGridVolumeCount = (R_RT_Handle)lgvGlob.samplingPrepBuffers.globalProbeOffsets1;
    R_RT_DestroyInternal(&lightGridVolumeCount);
    lightGridVolumeCount = (R_RT_Handle)lgvGlob.samplingPrepBuffers.globalProbeOffsets2;
    R_RT_DestroyInternal(&lightGridVolumeCount);
    lightGridVolumeCount = (R_RT_Handle)lgvGlob.samplingPrepBuffers.indirectDispatchParams;
    R_RT_DestroyInternal(&lightGridVolumeCount);
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&lightGridVolumeCount.m_tracking.m_name = _XMM0;
    lightGridVolumeCount.m_surfaceID = 0;
    lightGridVolumeCount.m_tracking.m_allocCounter = 0;
    v6 = (R_RT_BufferHandle)lightGridVolumeCount;
    lightGridVolumeCount.m_surfaceID = 0;
    lightGridVolumeCount.m_tracking.m_allocCounter = 0;
    *(_OWORD *)&lightGridVolumeCount.m_tracking.m_name = _XMM0;
    lgvGlob.samplingPrepBuffers.lightGridVolumeCount = v6;
    v7 = (R_RT_BufferHandle)lightGridVolumeCount;
    lightGridVolumeCount.m_surfaceID = 0;
    lightGridVolumeCount.m_tracking.m_allocCounter = 0;
    *(_OWORD *)&lightGridVolumeCount.m_tracking.m_name = _XMM0;
    lgvGlob.samplingPrepBuffers.samplingBufferOffsets1 = v7;
    lgvGlob.samplingPrepBuffers.samplingBufferOffsets2 = (R_RT_BufferHandle)lightGridVolumeCount;
    lightGridVolumeCount.m_surfaceID = 0;
    lightGridVolumeCount.m_tracking.m_allocCounter = 0;
    *(_OWORD *)&lightGridVolumeCount.m_tracking.m_name = _XMM0;
    v8 = (R_RT_BufferHandle)lightGridVolumeCount;
    lightGridVolumeCount.m_surfaceID = 0;
    lightGridVolumeCount.m_tracking.m_allocCounter = 0;
    *(_OWORD *)&lightGridVolumeCount.m_tracking.m_name = _XMM0;
    lgvGlob.samplingPrepBuffers.lightGridVolumesList = v8;
    v9 = (R_RT_BufferHandle)lightGridVolumeCount;
    lightGridVolumeCount.m_surfaceID = 0;
    lightGridVolumeCount.m_tracking.m_allocCounter = 0;
    *(_OWORD *)&lightGridVolumeCount.m_tracking.m_name = _XMM0;
    lgvGlob.samplingPrepBuffers.lightgridVolumeCounts1 = v9;
    v10 = (R_RT_BufferHandle)lightGridVolumeCount;
    lightGridVolumeCount.m_surfaceID = 0;
    lightGridVolumeCount.m_tracking.m_allocCounter = 0;
    *(_OWORD *)&lightGridVolumeCount.m_tracking.m_name = _XMM0;
    lgvGlob.samplingPrepBuffers.lightgridVolumeCounts2 = v10;
    v11 = (R_RT_BufferHandle)lightGridVolumeCount;
    lightGridVolumeCount.m_surfaceID = 0;
    lightGridVolumeCount.m_tracking.m_allocCounter = 0;
    *(_OWORD *)&lightGridVolumeCount.m_tracking.m_name = _XMM0;
    lgvGlob.samplingPrepBuffers.lightGridVolumeIndexingBuffer = v11;
    v12 = (R_RT_BufferHandle)lightGridVolumeCount;
    lightGridVolumeCount.m_surfaceID = 0;
    lightGridVolumeCount.m_tracking.m_allocCounter = 0;
    *(_OWORD *)&lightGridVolumeCount.m_tracking.m_name = _XMM0;
    lgvGlob.samplingPrepBuffers.lightGridProbeOffset = v12;
    v13 = (R_RT_BufferHandle)lightGridVolumeCount;
    lightGridVolumeCount.m_surfaceID = 0;
    lightGridVolumeCount.m_tracking.m_allocCounter = 0;
    *(_OWORD *)&lightGridVolumeCount.m_tracking.m_name = _XMM0;
    lgvGlob.samplingPrepBuffers.lightgridProbeCounts1 = v13;
    v14 = (R_RT_BufferHandle)lightGridVolumeCount;
    lightGridVolumeCount.m_surfaceID = 0;
    lightGridVolumeCount.m_tracking.m_allocCounter = 0;
    *(_OWORD *)&lightGridVolumeCount.m_tracking.m_name = _XMM0;
    lgvGlob.samplingPrepBuffers.lightgridProbeCounts2 = v14;
    v15 = (R_RT_BufferHandle)lightGridVolumeCount;
    lightGridVolumeCount.m_surfaceID = 0;
    lightGridVolumeCount.m_tracking.m_allocCounter = 0;
    *(_OWORD *)&lightGridVolumeCount.m_tracking.m_name = _XMM0;
    lgvGlob.samplingPrepBuffers.globalVolumeIndexingBuffer = v15;
    v16 = (R_RT_BufferHandle)lightGridVolumeCount;
    lightGridVolumeCount.m_surfaceID = 0;
    lightGridVolumeCount.m_tracking.m_allocCounter = 0;
    *(_OWORD *)&lightGridVolumeCount.m_tracking.m_name = _XMM0;
    lgvGlob.samplingPrepBuffers.globalProbeOffset = v16;
    v17 = (R_RT_BufferHandle)lightGridVolumeCount;
    lightGridVolumeCount.m_surfaceID = 0;
    lightGridVolumeCount.m_tracking.m_allocCounter = 0;
    *(_OWORD *)&lightGridVolumeCount.m_tracking.m_name = _XMM0;
    lgvGlob.samplingPrepBuffers.globalProbeOffsets1 = v17;
    lgvGlob.samplingPrepBuffers.globalProbeOffsets2 = (R_RT_BufferHandle)lightGridVolumeCount;
    lightGridVolumeCount.m_surfaceID = 0;
    lightGridVolumeCount.m_tracking.m_allocCounter = 0;
    *(_OWORD *)&lightGridVolumeCount.m_tracking.m_name = _XMM0;
    lgvGlob.samplingPrepBuffers.indirectDispatchParams = (R_RT_BufferHandle)lightGridVolumeCount;
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
  GfxShaderBufferView *v10; 
  GfxShaderBufferView *v11; 
  GfxShaderBufferView *v12; 
  GfxShaderBufferView *v13; 
  __int64 v14; 
  const R_RT_Surface *v15; 
  const R_RT_Surface *v16; 
  const R_RT_Surface *v17; 
  const R_RT_Surface *v18; 
  const R_RT_Surface *v19; 
  const R_RT_Surface *v20; 
  const GfxWrappedRWBuffer *samplingBufferOffsets1; 
  const R_RT_Surface *v22; 
  const GfxWrappedRWBuffer *lightgridVolumeCounts2; 
  const R_RT_Surface *v24; 
  const GfxWrappedRWBuffer *lightgridProbeCounts2; 
  const R_RT_Surface *v26; 
  const GfxWrappedRWBuffer *v27; 
  const R_RT_Surface *v28; 
  const R_RT_Surface *v29; 
  const R_RT_Surface *v30; 
  const R_RT_Surface *v31; 
  const R_RT_Surface *v32; 
  const R_RT_Surface *v33; 
  const GfxWrappedRWBuffer *v34; 
  const R_RT_Surface *v35; 
  const GfxWrappedRWBuffer *v36; 
  const R_RT_Surface *v37; 
  const GfxWrappedRWBuffer *v38; 
  const R_RT_Surface *v39; 
  const GfxWrappedRWBuffer *v40; 
  const R_RT_Surface *v41; 
  const R_RT_Surface *v42; 
  const R_RT_Surface *v43; 
  const GfxWrappedRWBuffer *v44; 
  const R_RT_Surface *v45; 
  const GfxWrappedRWBuffer *v46; 
  const R_RT_Surface *v47; 
  const GfxWrappedRWBuffer *v48; 
  const R_RT_Surface *v49; 
  const GfxWrappedRWBuffer *v50; 
  const R_RT_Surface *v51; 
  GfxShaderBufferRWView *Surface; 
  GfxShaderBufferRWView *lightgridProbeCounts1; 
  GfxShaderBufferRWView *lightgridVolumeCounts1; 
  GfxShaderBufferRWView *v55; 
  GfxShaderBufferRWView *globalProbeOffsets1; 
  GfxShaderBufferView *v57; 
  GfxShaderBufferRWView *p_rwView; 
  GfxShaderBufferRWView *v59; 
  ID3D12Resource *buffer; 
  GfxShaderBufferView *v61; 
  GfxShaderBufferView *v62; 
  GfxShaderBufferView *v63; 
  GfxShaderBufferView *v64; 
  GfxShaderBufferRWView *v65; 
  R_RT_Handle v66; 
  R_RT_Handle v67; 
  R_RT_Handle v68; 
  R_RT_Handle v69; 
  R_RT_Handle v70; 
  R_RT_Handle v71; 
  R_RT_Handle v72; 
  R_RT_Handle v73; 
  R_RT_Handle samplingBufferOffsets2; 
  R_RT_Handle globalProbeOffsets2; 
  R_RT_Handle v76; 
  R_RT_Handle v77; 
  R_RT_Handle v78; 
  R_RT_Handle v79; 
  R_RT_Handle v80; 
  R_RT_Handle v81; 
  R_RT_Handle lightGridVolumeCount; 
  R_RT_Handle indirectDispatchParams; 
  R_RT_Handle lightGridVolumeSamplingSlot; 
  R_RT_Handle globalProbeOffset; 
  R_RT_Handle lightGridVolumesList; 
  R_RT_Handle lightGridProbeOffset; 
  R_RT_Handle globalVolumeIndexingBuffer; 
  R_RT_Handle lightGridVolumeIndexingBuffer; 
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
  v57 = &lgvGlob.gfxBuffers[0].lightGridVolumePackingParams.view + 12 * data->shLightingIndex;
  R_SetComputeViews(state, 1, 1, (const GfxShaderBufferView *const *)&v57);
  p_rwView = &v7->m_buffer.m_wrappedBuffer.rwView;
  R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&p_rwView, NULL);
  v59 = &v6->m_buffer.m_wrappedBuffer.rwView;
  R_SetComputeRWViewsWithCounters(state, 1, 1, (const GfxShaderBufferRWView *const *)&v59, NULL);
  v55 = &v5->m_buffer.m_wrappedBuffer.rwView;
  R_SetComputeRWViewsWithCounters(state, 2, 1, (const GfxShaderBufferRWView *const *)&v55, NULL);
  Surface = (GfxShaderBufferRWView *)((char *)Surface + 1112);
  R_SetComputeRWViewsWithCounters(state, 3, 1, (const GfxShaderBufferRWView *const *)&Surface, NULL);
  R_Dispatch(state, (lgvGlob.frameData[smpFrame].numLightGridVolumesUsed + 63) / 64, 1u, 1u);
  v66 = (R_RT_Handle)lgvGlob.samplingPrepBuffers.samplingBufferOffsets1;
  R_HW_AddResourceTransition(state, &v66, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v67 = (R_RT_Handle)lgvGlob.samplingPrepBuffers.globalProbeOffsets1;
  R_HW_AddResourceTransition(state, &v67, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v68 = (R_RT_Handle)lgvGlob.samplingPrepBuffers.lightgridProbeCounts1;
  R_HW_AddResourceTransition(state, &v68, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v69 = (R_RT_Handle)lgvGlob.samplingPrepBuffers.lightgridVolumeCounts1;
  R_HW_AddResourceTransition(state, &v69, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_ComputeWaitForCompute(state, PIPE_FLUSH_PARTIAL);
  R_FlushResourceTransitions(state);
  v55 = (GfxShaderBufferRWView *)R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.lightgridVolumeCounts2);
  if ( ((__int64)v55->rwCounterResource & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
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
  v10 = (GfxShaderBufferView *)R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.lightgridVolumeCounts1);
  if ( (v10->view & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v11 = (GfxShaderBufferView *)R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.lightgridProbeCounts1);
  if ( (v11->view & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v12 = (GfxShaderBufferView *)R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.globalProbeOffsets1);
  if ( (v12->view & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v13 = (GfxShaderBufferView *)R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.samplingBufferOffsets1);
  if ( (v13->view & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v14 = data->smpFrame;
  R_SetComputeShader(state, rgp.computeLightGridSamplingOffsetsDownsweep);
  buffer = lgvGlob.gfxBuffers[data->shLightingIndex].sampleLightGridVolumeLightingConsts.buffer;
  R_SetComputeConstantBuffers(state, 0, 1, &buffer);
  v61 = v13 + 68;
  R_SetComputeViews(state, 0, 1, (const GfxShaderBufferView *const *)&v61);
  v62 = v12 + 68;
  R_SetComputeViews(state, 1, 1, (const GfxShaderBufferView *const *)&v62);
  v63 = v11 + 68;
  R_SetComputeViews(state, 2, 1, (const GfxShaderBufferView *const *)&v63);
  v64 = v10 + 68;
  R_SetComputeViews(state, 3, 1, (const GfxShaderBufferView *const *)&v64);
  v65 = (GfxShaderBufferRWView *)((char *)&buffers[69].IGraphicsUnknown + 8);
  R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&v65, NULL);
  globalProbeOffsets1 = (GfxShaderBufferRWView *)&views[69].view;
  R_SetComputeRWViewsWithCounters(state, 1, 1, (const GfxShaderBufferRWView *const *)&globalProbeOffsets1, NULL);
  lightgridProbeCounts1 = (GfxShaderBufferRWView *)((char *)Surface + 1112);
  R_SetComputeRWViewsWithCounters(state, 2, 1, (const GfxShaderBufferRWView *const *)&lightgridProbeCounts1, NULL);
  lightgridVolumeCounts1 = (GfxShaderBufferRWView *)((char *)v55 + 1112);
  R_SetComputeRWViewsWithCounters(state, 3, 1, (const GfxShaderBufferRWView *const *)&lightgridVolumeCounts1, NULL);
  R_Dispatch(state, (unsigned int)((lgvGlob.frameData[v14].numLightGridVolumesUsed + 63) / 64 + 63) >> 6, 1u, 1u);
  v70 = (R_RT_Handle)lgvGlob.samplingPrepBuffers.samplingBufferOffsets1;
  R_HW_AddResourceTransition(state, &v70, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v71 = (R_RT_Handle)lgvGlob.samplingPrepBuffers.globalProbeOffsets1;
  R_HW_AddResourceTransition(state, &v71, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v72 = (R_RT_Handle)lgvGlob.samplingPrepBuffers.lightgridProbeCounts1;
  R_HW_AddResourceTransition(state, &v72, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v73 = (R_RT_Handle)lgvGlob.samplingPrepBuffers.lightgridVolumeCounts1;
  R_HW_AddResourceTransition(state, &v73, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  samplingBufferOffsets2 = (R_RT_Handle)lgvGlob.samplingPrepBuffers.samplingBufferOffsets2;
  R_HW_AddResourceTransition(state, &samplingBufferOffsets2, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  globalProbeOffsets2 = (R_RT_Handle)lgvGlob.samplingPrepBuffers.globalProbeOffsets2;
  R_HW_AddResourceTransition(state, &globalProbeOffsets2, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v76 = (R_RT_Handle)lgvGlob.samplingPrepBuffers.lightgridProbeCounts2;
  R_HW_AddResourceTransition(state, &v76, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v77 = (R_RT_Handle)lgvGlob.samplingPrepBuffers.lightgridVolumeCounts2;
  R_HW_AddResourceTransition(state, &v77, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_ComputeWaitForCompute(state, PIPE_FLUSH_PARTIAL);
  R_FlushResourceTransitions(state);
  v15 = R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.indirectDispatchParams);
  if ( (v15->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  buffers = (ID3D12Resource *)&v15->1080;
  v16 = R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.lightGridVolumeCount);
  if ( (v16->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  views = (GfxShaderBufferView *)&v16->1080;
  v17 = R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.lightgridVolumeCounts1);
  if ( (v17->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  lightgridVolumeCounts1 = (GfxShaderBufferRWView *)&v17->1080;
  v18 = R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.lightgridProbeCounts1);
  if ( (v18->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  lightgridProbeCounts1 = (GfxShaderBufferRWView *)&v18->1080;
  v19 = R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.globalProbeOffsets1);
  if ( (v19->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  globalProbeOffsets1 = (GfxShaderBufferRWView *)&v19->1080;
  v20 = R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.samplingBufferOffsets1);
  if ( (v20->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  samplingBufferOffsets1 = (const GfxWrappedRWBuffer *)&v20->1080;
  v22 = R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.lightgridVolumeCounts2);
  if ( (v22->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  lightgridVolumeCounts2 = (const GfxWrappedRWBuffer *)&v22->1080;
  v24 = R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.lightgridProbeCounts2);
  if ( (v24->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  lightgridProbeCounts2 = (const GfxWrappedRWBuffer *)&v24->1080;
  v26 = R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.globalProbeOffsets2);
  if ( (v26->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v27 = (const GfxWrappedRWBuffer *)&v26->1080;
  v28 = R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.samplingBufferOffsets2);
  if ( (v28->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  R_LGV_GenerateLightGridSamplingListsUpsweep(state, data, viewInfoa, (const GfxWrappedRWBuffer *)&v28->1080, v27, lightgridProbeCounts2, lightgridVolumeCounts2, samplingBufferOffsets1, (const GfxWrappedRWBuffer *)globalProbeOffsets1, (const GfxWrappedRWBuffer *)lightgridProbeCounts1, (const GfxWrappedRWBuffer *)lightgridVolumeCounts1, (const GfxWrappedRWBuffer *)views, (const GfxWrappedRWBuffer *)buffers);
  v78 = (R_RT_Handle)lgvGlob.samplingPrepBuffers.samplingBufferOffsets1;
  R_HW_AddResourceTransition(state, &v78, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v79 = (R_RT_Handle)lgvGlob.samplingPrepBuffers.globalProbeOffsets1;
  R_HW_AddResourceTransition(state, &v79, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v80 = (R_RT_Handle)lgvGlob.samplingPrepBuffers.lightgridProbeCounts1;
  R_HW_AddResourceTransition(state, &v80, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v81 = (R_RT_Handle)lgvGlob.samplingPrepBuffers.lightgridVolumeCounts1;
  R_HW_AddResourceTransition(state, &v81, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  lightGridVolumeCount = (R_RT_Handle)lgvGlob.samplingPrepBuffers.lightGridVolumeCount;
  R_HW_AddResourceTransition(state, &lightGridVolumeCount, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  indirectDispatchParams = (R_RT_Handle)lgvGlob.samplingPrepBuffers.indirectDispatchParams;
  R_HW_AddResourceTransition(state, &indirectDispatchParams, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_INDIRECT_ARGUMENT, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_ComputeWaitForCompute(state, PIPE_FLUSH_PARTIAL);
  R_FlushResourceTransitions(state);
  v29 = R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.lightGridProbeOffset);
  if ( (v29->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  buffers = (ID3D12Resource *)&v29->1080;
  v30 = R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.lightGridVolumesList);
  if ( (v30->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  views = (GfxShaderBufferView *)&v30->1080;
  v31 = R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.globalProbeOffset);
  if ( (v31->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  lightgridVolumeCounts1 = (GfxShaderBufferRWView *)&v31->1080;
  v32 = R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.lightgridVolumeCounts1);
  if ( (v32->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  lightgridProbeCounts1 = (GfxShaderBufferRWView *)&v32->1080;
  v33 = R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.lightgridProbeCounts1);
  if ( (v33->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v34 = (const GfxWrappedRWBuffer *)&v33->1080;
  v35 = R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.globalProbeOffsets1);
  if ( (v35->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v36 = (const GfxWrappedRWBuffer *)&v35->1080;
  v37 = R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.samplingBufferOffsets1);
  if ( (v37->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v38 = (const GfxWrappedRWBuffer *)&v37->1080;
  v39 = R_RT_Handle::GetSurface(&lgvGlob.samplingBuffers[(unsigned __int64)data->shLightingIndex].lightGridVolumeSamplingSlot);
  if ( (v39->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v40 = (const GfxWrappedRWBuffer *)&v39->1080;
  v41 = R_RT_Handle::GetSurface(&lgvGlob.samplingBuffers[(unsigned __int64)data->shLightingIndex].lightGridVolumeActiveLightGrids);
  if ( (v41->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  R_LGV_CompactLightGridSamplingLists(state, data, viewInfoa, (const GfxWrappedRWBuffer *)&v41->1080, v40, v38, v36, v34, (const GfxWrappedRWBuffer *)lightgridProbeCounts1, (const GfxWrappedRWBuffer *)lightgridVolumeCounts1, (const GfxWrappedRWBuffer *)views, (const GfxWrappedRWBuffer *)buffers);
  lightGridVolumeSamplingSlot = (R_RT_Handle)lgvGlob.samplingBuffers[(unsigned __int64)data->shLightingIndex].lightGridVolumeSamplingSlot;
  R_HW_AddResourceTransition(state, &lightGridVolumeSamplingSlot, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  globalProbeOffset = (R_RT_Handle)lgvGlob.samplingPrepBuffers.globalProbeOffset;
  R_HW_AddResourceTransition(state, &globalProbeOffset, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  lightGridVolumesList = (R_RT_Handle)lgvGlob.samplingPrepBuffers.lightGridVolumesList;
  R_HW_AddResourceTransition(state, &lightGridVolumesList, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  lightGridProbeOffset = (R_RT_Handle)lgvGlob.samplingPrepBuffers.lightGridProbeOffset;
  R_HW_AddResourceTransition(state, &lightGridProbeOffset, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_ComputeWaitForCompute(state, PIPE_FLUSH_PARTIAL);
  R_FlushResourceTransitions(state);
  v42 = R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.indirectDispatchParams);
  if ( (v42->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  buffers = (ID3D12Resource *)&v42->1080;
  v43 = R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.lightGridVolumeIndexingBuffer);
  if ( (v43->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v44 = (const GfxWrappedRWBuffer *)&v43->1080;
  v45 = R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.lightGridProbeOffset);
  if ( (v45->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v46 = (const GfxWrappedRWBuffer *)&v45->1080;
  v47 = R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.lightGridVolumeCount);
  if ( (v47->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v48 = (const GfxWrappedRWBuffer *)&v47->1080;
  v49 = R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.globalVolumeIndexingBuffer);
  if ( (v49->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  v50 = (const GfxWrappedRWBuffer *)&v49->1080;
  v51 = R_RT_Handle::GetSurface(&lgvGlob.samplingPrepBuffers.globalProbeOffset);
  if ( (v51->m_rtFlagsInternal & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 283, ASSERT_TYPE_ASSERT, "(surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer)", (const char *)&queryFormat, "surface->m_rtFlagsInternal & R_RT_FlagInternal_Buffer") )
    __debugbreak();
  R_LGV_ComputeGroupStartProbeIndices(state, data, viewInfoa, (const GfxWrappedRWBuffer *)&v51->1080, v50, v48, v46, v44, (const GfxWrappedRWBuffer *)buffers);
  globalVolumeIndexingBuffer = (R_RT_Handle)lgvGlob.samplingPrepBuffers.globalVolumeIndexingBuffer;
  R_HW_AddResourceTransition(state, &globalVolumeIndexingBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  lightGridVolumeIndexingBuffer = (R_RT_Handle)lgvGlob.samplingPrepBuffers.lightGridVolumeIndexingBuffer;
  R_HW_AddResourceTransition(state, &lightGridVolumeIndexingBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
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
  float v2; 
  vec4_t *v3; 
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
  __int64 v17; 
  int v18; 
  bool v19; 
  __int64 v20; 
  __int64 v21; 
  float v22; 
  float v23; 
  float v24; 

  v2 = transform[1].v[3];
  v22 = transform->v[1];
  v3 = invTransform;
  v4 = transform[1].v[2];
  v23 = transform[2].v[1];
  v24 = transform[1].v[1];
  v5 = transform->v[2];
  v6 = transform[2].v[2];
  v7 = (float)(v24 * v6) - (float)(v4 * v23);
  v8 = transform[2].v[0];
  v9 = transform[1].v[0];
  v10 = transform->v[0];
  v11 = transform->v[3];
  v12 = transform[2].v[3];
  invTransform->v[0] = v7;
  v13 = (float)(v9 * v6) - (float)(v8 * v4);
  v14 = (float)(v9 * v23) - (float)(v8 * v24);
  invTransform->v[1] = (float)(transform->v[2] * transform[2].v[1]) - (float)(transform->v[1] * transform[2].v[2]);
  invTransform->v[2] = (float)(transform[1].v[2] * transform->v[1]) - (float)(transform[1].v[1] * transform->v[2]);
  invTransform->v[3] = (float)((float)((float)((float)(v6 * v22) - (float)(v5 * v23)) * v2) - (float)(v7 * v11)) - (float)((float)((float)(v4 * v22) - (float)(v5 * v24)) * v12);
  invTransform[1].v[0] = (float)(transform[2].v[0] * transform[1].v[2]) - (float)(transform[1].v[0] * transform[2].v[2]);
  invTransform[1].v[1] = (float)(transform->v[0] * transform[2].v[2]) - (float)(transform[2].v[0] * transform->v[2]);
  invTransform[1].v[2] = (float)(transform[1].v[0] * transform->v[2]) - (float)(transform[1].v[2] * transform->v[0]);
  v15 = v13 * v11;
  v16 = (float)((float)(v7 * v10) - (float)(v13 * v22)) + (float)(v14 * v5);
  invTransform[1].v[3] = (float)(v15 - (float)((float)((float)(v6 * v10) - (float)(v8 * v5)) * v2)) + (float)((float)((float)(v4 * v10) - (float)(v9 * v5)) * v12);
  invTransform[2].v[0] = (float)(transform[1].v[0] * transform[2].v[1]) - (float)(transform[2].v[0] * transform[1].v[1]);
  invTransform[2].v[1] = (float)(transform[2].v[0] * transform->v[1]) - (float)(transform[2].v[1] * transform->v[0]);
  invTransform[2].v[2] = (float)(transform[1].v[1] * transform->v[0]) - (float)(transform[1].v[0] * transform->v[1]);
  invTransform[2].v[3] = (float)((float)((float)((float)(v10 * v23) - (float)(v8 * v22)) * v2) - (float)(v14 * v11)) - (float)((float)((float)(v10 * v24) - (float)(v9 * v22)) * v12);
  v17 = 3i64;
  do
  {
    v18 = 0;
    v19 = 1;
    do
    {
      if ( !v19 )
      {
        LODWORD(v21) = 4;
        LODWORD(v20) = v18;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v20, v21) )
          __debugbreak();
      }
      v3->v[0] = v3->v[0] / v16;
      v3 = (vec4_t *)((char *)v3 + 4);
      v19 = (unsigned int)++v18 < 4;
    }
    while ( v18 < 4 );
    --v17;
  }
  while ( v17 );
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
void R_LGV_Init(void)
{
  GfxWrappedBuffer *samplePerLightGridLightGridVolumeLighting; 
  GfxBufferCreationContext v1; 
  int i; 
  int *initialData; 
  __int64 v4; 
  LightGridVolumeFrameData *frameData; 
  __int64 v6; 
  GfxWrappedBuffer *p_lightGridVolumesIndexingBuffer; 
  int ElementSizeForDataFormat; 
  int v9; 
  GfxBufferCreationContext v10; 

  *(_QWORD *)&lgvGlob.globalFrame = 0i64;
  v10.zoneName = (char *)&queryFormat.fmt + 3;
  samplePerLightGridLightGridVolumeLighting = lgvGlob.samplingPrepBuffers.samplePerLightGridLightGridVolumeLighting;
  lgvGlob.useMultiLightGridSampling = 0;
  v10.objectName = "per lightgrid consts";
  v1 = v10;
  for ( i = 0; i < 20; ++i )
  {
    v10 = v1;
    initialData = (int *)R_AllocGfxBufferMemory(0x10u, &v10);
    *initialData = i;
    R_CreateGfxWrappedBuffer(samplePerLightGridLightGridVolumeLighting++, GfxWrappedBuffer_Const, 16, 1u, GFX_DATA_FORMAT_R32_UINT, 8u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, initialData, "lightgrid volume lighting sampling constant buffer");
  }
  v4 = 2i64;
  frameData = lgvGlob.frameData;
  v6 = 2i64;
  do
  {
    frameData->lightGridVolumeSrcParams = (LightGridVolumeSrcParams *)PMem_Alloc(0x150000ui64, 0x40ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "src volume data");
    ++frameData;
    --v6;
  }
  while ( v6 );
  p_lightGridVolumesIndexingBuffer = &lgvGlob.gfxBuffers[0].lightGridVolumesIndexingBuffer;
  do
  {
    R_CreateGfxWrappedBuffer(p_lightGridVolumesIndexingBuffer - 2, GfxWrappedBuffer_Structured, 64, 0x4000u, GFX_DATA_FORMAT_R32_UINT, 0xCu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "LightGrid volume transform params");
    R_CreateGfxWrappedBuffer(p_lightGridVolumesIndexingBuffer - 1, GfxWrappedBuffer_Structured, 32, 0x4000u, GFX_DATA_FORMAT_R32_UINT, 0xCu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "LightGrid volume packing params");
    ElementSizeForDataFormat = Buffers_GetElementSizeForDataFormat(GFX_DATA_FORMAT_R32_UINT);
    R_CreateGfxWrappedBuffer(p_lightGridVolumesIndexingBuffer, GfxWrappedBuffer_Data, ElementSizeForDataFormat, 0x4000u, GFX_DATA_FORMAT_R32_UINT, 0xCu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "LightGrid volumes indexing buffer");
    R_CreateGfxWrappedBuffer(p_lightGridVolumesIndexingBuffer + 1, GfxWrappedBuffer_Const, 48, 1u, GFX_DATA_FORMAT_R32_UINT, 0xCu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "lightgrid volume lighting sampling constant buffer");
    R_CreateGfxWrappedBuffer(p_lightGridVolumesIndexingBuffer + 2, GfxWrappedBuffer_Structured, 12, 1u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "debug");
    v9 = Buffers_GetElementSizeForDataFormat(GFX_DATA_FORMAT_R32G32_UINT);
    R_CreateGfxWrappedBuffer(p_lightGridVolumesIndexingBuffer + 3, GfxWrappedBuffer_Data, v9, 0x10000u, GFX_DATA_FORMAT_R32G32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "Debug indexing buffer");
    p_lightGridVolumesIndexingBuffer += 6;
    --v4;
  }
  while ( v4 );
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
  lgvGlob.frameData[lgvGlob.smpFrame].camera_ws = *camera_ws;
}

/*
==============
R_LGV_InitSamplingConstBuffers
==============
*/
void R_LGV_InitSamplingConstBuffers(void)
{
  int v0; 
  GfxWrappedBuffer *samplePerLightGridLightGridVolumeLighting; 
  GfxBufferCreationContext v2; 
  int *initialData; 
  GfxBufferCreationContext v4; 

  v4.zoneName = (char *)&queryFormat.fmt + 3;
  v0 = 0;
  v4.objectName = "per lightgrid consts";
  samplePerLightGridLightGridVolumeLighting = lgvGlob.samplingPrepBuffers.samplePerLightGridLightGridVolumeLighting;
  v2 = v4;
  do
  {
    v4 = v2;
    initialData = (int *)R_AllocGfxBufferMemory(0x10u, &v4);
    *initialData = v0;
    R_CreateGfxWrappedBuffer(samplePerLightGridLightGridVolumeLighting, GfxWrappedBuffer_Const, 16, 1u, GFX_DATA_FORMAT_R32_UINT, 8u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, initialData, "lightgrid volume lighting sampling constant buffer");
    ++v0;
    ++samplePerLightGridLightGridVolumeLighting;
  }
  while ( v0 < 20 );
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
    lgvGlob.samplingBuffers[0].lightGridVolumeSampledLightingData = *R_RT_CreateBufferInternal(&result, 8u, 0x9C000u, GFX_DATA_FORMAT_R32G32_UINT, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_GENERIC_READ, "LightGrid volume sampling (lighting data) history 0", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(415)");
    lgvGlob.samplingBuffers[0].lightGridVolumeSampledPrimaryVisTets = *R_RT_CreateBufferInternal(&result, 4u, 0xC000u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_GENERIC_READ, "LightGrid volume sampling (primary vis) history 0", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(416)");
    lgvGlob.samplingBuffers[0].lightGridVolumeActiveLightGrids = *R_RT_CreateBufferInternal(&result, 4u, 0x4000u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_GENERIC_READ, "Bitmask of active lightgrids per volume 0", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(417)");
    lgvGlob.samplingBuffers[0].lightGridVolumeSamplingSlot = *R_RT_CreateBufferInternal(&result, 4u, 0x4000u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_GENERIC_READ, "First target slot in the sampling buffer for each volume 0", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(418)");
  }
  if ( !R_RT_Handle::IsValid(&lgvGlob.samplingBuffers[1].lightGridVolumeSampledLightingData) )
  {
    lgvGlob.samplingBuffers[1].lightGridVolumeSampledLightingData = *R_RT_CreateBufferInternal(&result, 8u, 0x9C000u, GFX_DATA_FORMAT_R32G32_UINT, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_GENERIC_READ, "LightGrid volume sampling (lighting data) history 1", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(427)");
    lgvGlob.samplingBuffers[1].lightGridVolumeSampledPrimaryVisTets = *R_RT_CreateBufferInternal(&result, 4u, 0xC000u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_GENERIC_READ, "LightGrid volume sampling (primary vis) history 1", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(428)");
    lgvGlob.samplingBuffers[1].lightGridVolumeActiveLightGrids = *R_RT_CreateBufferInternal(&result, 4u, 0x4000u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_GENERIC_READ, "Bitmask of active lightgrids per volume 1", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(429)");
    lgvGlob.samplingBuffers[1].lightGridVolumeSamplingSlot = *R_RT_CreateBufferInternal(&result, 4u, 0x4000u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_GENERIC_READ, "First target slot in the sampling buffer for each volume 1", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(430)");
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
    lgvGlob.samplingPrepBuffers.lightGridVolumeCount = *R_RT_CreateBufferInternal(&result, 4u, 0x14u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_GENERIC_READ, "Num lgv for lightgrid", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(444)");
    lgvGlob.samplingPrepBuffers.samplingBufferOffsets1 = *R_RT_CreateBufferInternal(&result, 4u, 0x100u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_GENERIC_READ, "Temp buffers for calculating target slot for sampling", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(445)");
    lgvGlob.samplingPrepBuffers.samplingBufferOffsets2 = *R_RT_CreateBufferInternal(&result, 4u, 4u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_GENERIC_READ, "Temp buffers for calculating target slot for sampling", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(446)");
    lgvGlob.samplingPrepBuffers.lightGridVolumesList = *R_RT_CreateBufferInternal(&result, 4u, 0x50000u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_GENERIC_READ, "List of volumes for a given light grid", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(448)");
    lgvGlob.samplingPrepBuffers.lightgridVolumeCounts1 = *R_RT_CreateBufferInternal(&result, 4u, 0x1400u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_GENERIC_READ, "Temp buffer for counting volumes sampling each lightgrid", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(449)");
    lgvGlob.samplingPrepBuffers.lightgridVolumeCounts2 = *R_RT_CreateBufferInternal(&result, 4u, 0x50u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_GENERIC_READ, "Temp buffer for counting volumes sampling each lightgrid", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(450)");
    lgvGlob.samplingPrepBuffers.lightGridVolumeIndexingBuffer = *R_RT_CreateBufferInternal(&result, 4u, 0x50000u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_GENERIC_READ, "Indexing buffer for each lightgrid", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(452)");
    lgvGlob.samplingPrepBuffers.lightGridProbeOffset = *R_RT_CreateBufferInternal(&result, 4u, 0x50000u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_GENERIC_READ, "Prefix sum of the count of probes for given light grid", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(453)");
    lgvGlob.samplingPrepBuffers.lightgridProbeCounts1 = *R_RT_CreateBufferInternal(&result, 4u, 0x1400u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_GENERIC_READ, "Temp buffer for counting probes sampling each lightgrid", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(454)");
    lgvGlob.samplingPrepBuffers.lightgridProbeCounts2 = *R_RT_CreateBufferInternal(&result, 4u, 0x50u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_GENERIC_READ, "Temp buffer for counting probes sampling each lightgrid", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(455)");
    lgvGlob.samplingPrepBuffers.globalVolumeIndexingBuffer = *R_RT_CreateBufferInternal(&result, 4u, 0x4000u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_GENERIC_READ, "Indexing buffer for the entire list", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(457)");
    lgvGlob.samplingPrepBuffers.globalProbeOffset = *R_RT_CreateBufferInternal(&result, 4u, 0x4000u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_GENERIC_READ, "Temp buffers for calculating target slot for sampling", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(458)");
    lgvGlob.samplingPrepBuffers.globalProbeOffsets1 = *R_RT_CreateBufferInternal(&result, 4u, 0x100u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_GENERIC_READ, "Temp buffers for calculating global indexing buffer", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(459)");
    lgvGlob.samplingPrepBuffers.globalProbeOffsets2 = *R_RT_CreateBufferInternal(&result, 4u, 4u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_GENERIC_READ, "Temp buffers for calculating global indexing buffer", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(460)");
    lgvGlob.samplingPrepBuffers.indirectDispatchParams = *R_RT_CreateBufferInternal(&result, 4u, 0x1E0u, GFX_DATA_FORMAT_R32_UINT, R_RT_Flag_BufferIndirectArgs|R_RT_Flag_RWView, (R_RT_FlagsInternal)2, D3D12_RESOURCE_STATE_GENERIC_READ, "Indirect dispatch params for LGV sampling", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp(462)");
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
void R_LGV_Pack3dCmd(const void *const data)
{
  unsigned int *v1; 
  signed int v2; 
  __int64 v3; 
  LightGridVolumeSrcParams *v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  float v10; 
  __int64 v11; 
  float v12; 
  __int64 v13; 
  int v14; 
  __int64 v15; 
  __int64 v16; 
  _DWORD *v17; 
  unsigned int v18; 
  float *v19; 
  unsigned int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  bool v25; 
  __int64 i; 
  __int64 v27; 
  float v28; 
  __int64 v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  unsigned int m_packedDepth; 
  __int64 squeezePacked; 
  __int64 depthAlignment; 
  __int64 v38; 
  signed int v39; 
  LightGridVolumeSrcParams *volumes; 
  LightGridVolumePacker3D v42; 
  int axesSorted; 
  unsigned int v44; 
  unsigned int v45; 
  __int64 v46; 
  double v47; 
  int v48; 
  unsigned int volumesToPack[16384]; 
  unsigned __int16 to[4]; 

  v1 = (unsigned int *)data;
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp", 2682, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF0000FF, "LG++ pack 3d");
  v2 = 0x4000;
  v3 = *((_QWORD *)v1 + 1);
  v4 = **(LightGridVolumeSrcParams ***)v1;
  v5 = *(_QWORD *)(v3 + 24);
  if ( *(int *)(*(_QWORD *)v1 + 33316i64) < 0x4000 )
    v2 = *(_DWORD *)(*(_QWORD *)v1 + 33316i64);
  v6 = *(_QWORD *)(v3 + 56);
  v39 = v2;
  volumes = **(LightGridVolumeSrcParams ***)v1;
  v38 = *(_QWORD *)(v3 + 24);
  v46 = v6;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "analyze volumes");
  v7 = v2;
  if ( v2 > 0 )
  {
    v8 = v2;
    do
    {
      R_LGV_SortAxes(v4->m_volumeSize, v4->m_volumeTransform, &axesSorted);
      if ( (v4->m_flags & 0x40) != 0 )
      {
        v9 = axesSorted;
        if ( (unsigned int)axesSorted >= 3 )
        {
          LODWORD(depthAlignment) = 3;
          LODWORD(squeezePacked) = axesSorted;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", squeezePacked, depthAlignment) )
            __debugbreak();
        }
        v10 = v4->m_samplingOffset.v[v9];
        v11 = (int)v44;
        *(float *)&v47 = v10;
        if ( v44 >= 3 )
        {
          LODWORD(depthAlignment) = 3;
          LODWORD(squeezePacked) = v44;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", squeezePacked, depthAlignment) )
            __debugbreak();
        }
        v12 = v4->m_samplingOffset.v[v11];
        v13 = (int)v45;
        *((float *)&v47 + 1) = v12;
        if ( v45 >= 3 )
        {
          LODWORD(depthAlignment) = 3;
          LODWORD(squeezePacked) = v45;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", squeezePacked, depthAlignment) )
            __debugbreak();
        }
        v48 = LODWORD(v4->m_samplingOffset.v[v13]);
        v14 = v48;
        *(double *)v4->m_samplingOffset.v = v47;
        LODWORD(v4->m_samplingOffset.v[2]) = v14;
      }
      ++v4;
      --v8;
    }
    while ( v8 );
    v1 = (unsigned int *)data;
    v4 = volumes;
    v5 = v38;
  }
  Sys_ProfEndNamedEvent();
  if ( v2 > 0 )
  {
    v15 = 0i64;
    v16 = v6 + 13;
    v17 = (_DWORD *)(v5 + 24);
    v18 = 0;
    v19 = &v4->m_volumeTransform[1].v[2];
    do
    {
      *(v17 - 6) = *((_DWORD *)v19 - 6);
      *(v17 - 5) = *((_DWORD *)v19 - 5);
      *(v17 - 4) = *((_DWORD *)v19 - 4);
      *(v17 - 3) = *((_DWORD *)v19 - 3);
      *(v17 - 2) = *((_DWORD *)v19 - 2);
      *(v17 - 1) = *((_DWORD *)v19 - 1);
      *v17 = *(_DWORD *)v19;
      v17[1] = *((_DWORD *)v19 + 1);
      v17[2] = *((_DWORD *)v19 + 2);
      v17[3] = *((_DWORD *)v19 + 3);
      v17[4] = *((_DWORD *)v19 + 4);
      v17[5] = *((_DWORD *)v19 + 5);
      v20 = *((_DWORD *)v19 + 14);
      Half3FromFloat((const vec3_t *)(v19 + 11), to);
      v21 = *((_DWORD *)v19 + 9);
      v16 += 32i64;
      v22 = to[0];
      v19 += 21;
      v17[6] = v21;
      v17 += 16;
      *(v17 - 9) = *((_DWORD *)v19 - 11);
      v23 = to[1];
      *(v17 - 8) = to[2] | (((v20 >> 6) & 1) << 16);
      *(v17 - 7) = v23 | (v22 << 16);
      *(_BYTE *)(v16 - 33) = *((_BYTE *)v19 - 60);
      *(_BYTE *)(v16 - 32) = *((_BYTE *)v19 - 59);
      *(_BYTE *)(v16 - 31) = *((_BYTE *)v19 - 58);
      *(_BYTE *)(v16 - 30) = *((_BYTE *)v19 - 56);
      *(float *)(v16 - 17) = *(v19 - 13);
      volumesToPack[v15++] = v18++;
    }
    while ( v15 < v7 );
    v1 = (unsigned int *)data;
    v6 = v46;
    v2 = v39;
  }
  v42.m_width = v1[4];
  v42.m_height = v1[5];
  v42.m_depth = v1[6];
  v42.m_reserveLastTexel = 1;
  v42.m_packedDepth = 0;
  v24 = LightGridVolumePacker3D::Pack<LightGridVolumeSrcParams>(&v42, volumes, (LightGridVolumePackingParams *)v6, volumesToPack, v2, 0, 1);
  v25 = v24 == v2;
  if ( v24 != v2 )
  {
    for ( i = v24; i < v7; *(_DWORD *)(v29 + 28) = 0x20000000 )
    {
      v27 = volumesToPack[i++];
      v28 = (float)v1[4];
      v29 = v6 + 32 * v27;
      *(float *)(v29 + 16) = (float)(v28 - 0.5) / v28;
      v30 = (float)v1[5];
      *(float *)(v29 + 20) = (float)(v30 - 0.5) / v30;
      v31 = (float)v1[6];
      *(float *)(v29 + 24) = (float)(v31 - 0.5) / v31;
      *(_QWORD *)v29 = 0i64;
      *(_DWORD *)(v29 + 8) = 0;
      *(_WORD *)(v29 + 12) = 257;
      *(_BYTE *)(v29 + 14) = 1;
    }
  }
  v32 = (float)v1[4];
  *(float *)(v6 + 16) = (float)(v32 - 0.5) / v32;
  v33 = (float)v1[5];
  *(float *)(v6 + 20) = (float)(v33 - 0.5) / v33;
  v34 = (float)v1[6];
  *(float *)(v6 + 24) = (float)(v34 - 0.5) / v34;
  *(_QWORD *)v6 = 0i64;
  *(_DWORD *)(v6 + 8) = 0;
  *(_DWORD *)(v6 + 28) = 0x40000000;
  if ( volumes->m_firstStaticProbeIndex != 0x40000000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_lightgrid_volumes.cpp", 2769, ASSERT_TYPE_ASSERT, "(lightGridVolumeSrcParams[0].m_firstStaticProbeIndex == R_LGV_PackStaticProbeIndex( false, 0, true, false ))", (const char *)&queryFormat, "lightGridVolumeSrcParams[0].m_firstStaticProbeIndex == R_LGV_PackStaticProbeIndex( false, 0, true, false )") )
    __debugbreak();
  m_packedDepth = v42.m_packedDepth;
  if ( lgvGlob.lightGridVolumeMaxUsageStats.packing3dHighWatermark > v42.m_packedDepth )
    m_packedDepth = lgvGlob.lightGridVolumeMaxUsageStats.packing3dHighWatermark;
  lgvGlob.lightGridVolumeMaxUsageStats.packing3dHighWatermark = m_packedDepth;
  if ( !v25 )
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
  vec3_t v6; 
  float v7; 
  Bounds v8; 

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
  *(_OWORD *)v8.midPoint.v = _xmm;
  _XMM0 = 0i64;
  v7 = 0.0;
  __asm { vunpcklps xmm0, xmm0, xmm0 }
  VolumeInfo_Dynamic->m_firstStaticProbeIndex = v2;
  v6.v[2] = v7;
  *(double *)v6.v = *(double *)&_XMM0;
  v8.halfSize.v[1] = FLOAT_0_5;
  v8.halfSize.v[2] = FLOAT_0_5;
  R_LGV_CalcTransform(&v8, &v6, identityMatrix33.m, VolumeInfo_Dynamic->m_volumeTransform);
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
  float v4; 
  double v5; 
  int allocatedVolumeInfoSlot[4]; 
  vec3_t v7; 
  Bounds v8; 

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
    v3->m_firstStaticProbeIndex = R_LGV_PackStaticProbeIndex(0, 0, 0, 0);
    v4 = samplePos->v[2];
    *(_OWORD *)v8.midPoint.v = _xmm;
    v5 = *(double *)samplePos->v;
    v7.v[2] = v4;
    *(double *)v7.v = v5;
    v8.halfSize.v[1] = FLOAT_0_5;
    v8.halfSize.v[2] = FLOAT_0_5;
    R_LGV_CalcTransform(&v8, &v7, identityMatrix33.m, v3->m_volumeTransform);
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
  __int64 v11; 
  int portalGISlot; 
  vec4_t quat; 
  tmat33_t<vec3_t> axis; 

  v11 = mapEntLookup;
  if ( R_GpuLightGrid_DataAvailable() )
  {
    UnitQuatToAxis(&pose->quat, &axis);
    if ( (lgvModifier->flags & 0x200) != 0 )
    {
      portalGISlot = s_world.gfxMapEntLookup[v11].portalGISlot;
      if ( portalGISlot != -1 )
      {
        quat = pose->quat;
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
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  __int128 v11; 
  __int128 v12; 
  __int128 v13; 
  __int128 v14; 
  __int128 v15; 
  __int128 v16; 
  const XModel *v17; 
  LightGridVolumeSrcParams *v19; 
  float v20; 
  float v21; 
  int integer; 
  unsigned int flags; 
  __int64 v25; 
  int v26; 
  int v27; 
  int v28; 
  __int16 v29; 
  float v30; 
  float v31; 
  float v32; 
  __int128 v37; 
  int v40; 
  int v41; 
  int v42; 
  int *p_lgvSize; 
  __int64 v44; 
  int LgvThinStable; 
  bool v48; 
  bool v50; 
  float v52; 
  unsigned int HistoryEntries; 
  unsigned int v54; 
  unsigned int v55; 
  GpuLightGridRequestRecord *v56; 
  unsigned int v57; 
  bool v58; 
  unsigned __int8 v59; 
  const vec3_t *v60; 
  __int64 v61; 
  double v62; 
  float v70; 
  __int64 smpFrame; 
  float v72; 
  GpuLightGridRequestRecord *v73; 
  int v74; 
  unsigned int dumpXModels; 
  __int64 v76; 
  bool enabled; 
  bool v79; 
  int maxProbesUse; 
  unsigned int maxProbesUsea; 
  bool v82; 
  int v83; 
  int v84; 
  int allocatedVolumeInfoSlot; 
  vec3_t v87; 
  vec3_t v88; 
  GpuLightGridRequestRecord *v89; 
  GpuLightGridRequestRecord *v90; 
  GfxModelLightingProbeInfo *v91; 
  Bounds bounds; 
  int lgvSize; 
  int v94; 
  int v95; 
  __int128 v96; 
  __int128 v97; 
  __int128 v98; 
  __int128 v99; 
  __int128 v100; 
  __int128 v101; 
  __int128 v102; 
  __int128 v103; 
  __int128 v104; 

  v17 = model;
  v101 = v11;
  v100 = v12;
  v99 = v13;
  v90 = request;
  v98 = v14;
  v96 = v16;
  *(_QWORD *)v88.v = rot;
  *(_QWORD *)v87.v = origin;
  v91 = lightingInfo;
  v89 = (GpuLightGridRequestRecord *)lastRequest;
  allocatedVolumeInfoSlot = 0;
  v19 = R_LGV_AllocateVolumeInfo_Dynamic(&allocatedVolumeInfoSlot);
  v20 = 0.0;
  v21 = FLOAT_1_0;
  maxProbesUse = r_lgvMaxProbes->current.integer;
  enabled = r_lgvThinDisable->current.enabled;
  v82 = 1;
  v79 = r_lgvThinOverride->current.enabled;
  _XMM14 = r_lgvThinOverridePushOff->current.unsignedInt;
  integer = r_lgvThinOverrideShrink->current.integer;
  v83 = r_lgvThinOverrideStable->current.integer;
  if ( !v19 )
  {
    lightingInfo->lgv.allocatedVolumeInfoSlot = 0;
    goto LABEL_91;
  }
  v104 = v8;
  v97 = v15;
  XModelGetBounds(v17, &bounds);
  flags = lgvModifier->flags;
  v25 = 2i64;
  if ( (lgvModifier->flags & 0x440) != 0 || !materialLod && ((flags & 2) == 0 || lgvModifier->dimension) )
  {
    v103 = v9;
    v102 = v10;
    if ( r_lgvForceXModelDensity->current.value <= 0.0 )
    {
      XModelGetLgvDensity(v17);
      flags = lgvModifier->flags;
    }
    v29 = flags;
    v30 = bounds.halfSize.v[0];
    v31 = bounds.halfSize.v[1];
    v32 = bounds.halfSize.v[2];
    _XMM0 = 0i64;
    __asm { vroundss xmm0, xmm0, xmm1, 1 }
    v26 = 1;
    _XMM1 = 0i64;
    if ( (int)*(float *)&_XMM0 > 1 )
      v26 = (int)*(float *)&_XMM0;
    v27 = 1;
    v28 = 1;
    if ( v26 > 16 )
      v26 = 16;
    __asm { vroundss xmm1, xmm1, xmm0, 1 }
    lgvSize = v26;
    *((_QWORD *)&v37 + 1) = 0i64;
    if ( (int)*(float *)&_XMM1 > 1 )
      v27 = (int)*(float *)&_XMM1;
    _XMM1 = 0i64;
    if ( v27 > 16 )
      v27 = 16;
    __asm { vroundss xmm1, xmm1, xmm0, 1 }
    v94 = v27;
    if ( (int)*(float *)&_XMM1 > 1 )
      v28 = (int)*(float *)&_XMM1;
    if ( v28 > 15 )
      v28 = 15;
    v95 = v28;
    if ( maxProbesUse > 0 )
    {
      v40 = -1;
      v41 = -1;
      if ( (flags & 0x400) != 0 )
      {
        if ( bounds.halfSize.v[0] >= bounds.halfSize.v[1] )
        {
          if ( bounds.halfSize.v[1] <= bounds.halfSize.v[2] )
          {
            v41 = 0;
            if ( bounds.halfSize.v[0] > bounds.halfSize.v[2] )
              v41 = 2;
          }
          else
          {
            v41 = 1;
          }
        }
        else
        {
          v41 = 0;
          if ( bounds.halfSize.v[0] <= bounds.halfSize.v[2] )
          {
            LOBYTE(v41) = bounds.halfSize.v[2] <= bounds.halfSize.v[1];
            ++v41;
          }
        }
      }
      if ( (flags & 0x40) != 0 && !enabled )
      {
        if ( bounds.halfSize.v[0] >= bounds.halfSize.v[1] )
        {
          v40 = (bounds.halfSize.v[2] <= bounds.halfSize.v[1]) + 1;
        }
        else
        {
          v40 = 2;
          if ( bounds.halfSize.v[2] > bounds.halfSize.v[0] )
            v40 = 0;
        }
      }
      UB_BoundProbes(v40, v41, maxProbesUse, &lgvSize);
      v28 = v95;
      v29 = flags;
      v27 = v94;
      v26 = lgvSize;
    }
    if ( (v29 & 0x400) == 0 )
      goto LABEL_52;
    if ( v30 >= v31 )
    {
      if ( v31 > v32 )
      {
        v42 = v27;
        p_lgvSize = &v94;
        goto LABEL_50;
      }
      if ( v32 < v30 )
        goto LABEL_48;
    }
    else if ( v30 <= v32 )
    {
      if ( v31 < v32 )
      {
        v42 = v27;
        p_lgvSize = &v94;
        goto LABEL_50;
      }
LABEL_48:
      v42 = v28;
      p_lgvSize = &v95;
      goto LABEL_50;
    }
    p_lgvSize = &lgvSize;
    v42 = v26;
LABEL_50:
    if ( v42 == 1 )
    {
      *p_lgvSize = 2;
      v28 = v95;
      v27 = v94;
      v26 = lgvSize;
    }
LABEL_52:
    LOBYTE(flags) = v29;
    if ( (v29 & 0x40) != 0 && !enabled )
    {
      if ( v30 >= v31 )
      {
        v44 = (unsigned int)(v32 <= v31) + 1;
      }
      else
      {
        v44 = 2i64;
        if ( v32 > v30 )
          v44 = 0i64;
      }
      *(double *)&v37 = XModelGetLgvThinShrink(model);
      _XMM6 = v37;
      LgvThinStable = XModelGetLgvThinStable(model);
      flags = lgvModifier->flags;
      _XMM2 = LODWORD(lgvModifier->thinShrink);
      v48 = LgvThinStable != 0;
      __asm { vcmpneqss xmm1, xmm2, xmm13 }
      if ( (lgvModifier->flags & 0x80u) != 0 )
        v48 = 1;
      v50 = 0;
      if ( (flags & 0x100) == 0 )
        v50 = v48;
      __asm { vblendvps xmm0, xmm6, xmm2, xmm1 }
      v82 = v50;
      if ( v79 )
      {
        v82 = v50;
        v21 = *(float *)&integer;
        if ( v83 != -1 )
          v82 = v83 == 1;
      }
      else
      {
        v21 = *(float *)&_XMM0;
      }
      v52 = v21 * bounds.halfSize.v[v44];
      *(&lgvSize + v44) = 2;
      v28 = v95;
      v27 = v94;
      bounds.halfSize.v[v44] = v52;
      v26 = lgvSize;
    }
    goto LABEL_68;
  }
  v26 = 1;
  lgvSize = 1;
  v27 = 1;
  v94 = 1;
  v28 = 1;
  v95 = 1;
LABEL_68:
  if ( (flags & 2) != 0 )
  {
    R_LGV_ModifyDimension(lgvModifier, &lgvSize);
    v28 = v95;
    v27 = v94;
    v26 = lgvSize;
  }
  v84 = v26 * v27 * v28;
  R_LGV_AddProbes(v84, lgvGlob.smpFrame);
  HistoryEntries = R_LGV_AllocateHistoryEntries(v84);
  v54 = lgvModifier->flags;
  v55 = HistoryEntries;
  v56 = v89;
  v57 = lgvModifier->flags | 0x10;
  maxProbesUsea = HistoryEntries;
  v58 = (model->flags & 0x400000) == 0;
  v19->m_historyEntry = HistoryEntries;
  if ( v58 )
    v57 = v54;
  v19->m_lastFrameHistoryEntryAndSetup = R_LGV_EncodeLastFrameEntryAndSetup(v57, v56);
  v19->m_firstStaticProbeIndex = R_LGV_PackStaticProbeIndex(0, 0, 0, 0);
  v19->m_volumeSize[0] = truncate_cast<unsigned char,int>(v26);
  v19->m_volumeSize[1] = truncate_cast<unsigned char,int>(v27);
  v59 = truncate_cast<unsigned char,int>(v28);
  v60 = *(const vec3_t **)v88.v;
  v19->m_volumeSize[2] = v59;
  v61 = *(_QWORD *)v87.v;
  v19->m_basisType = 1;
  v62 = *(double *)v61;
  LODWORD(v61) = *(_DWORD *)(v61 + 8);
  *(double *)v87.v = v62;
  LODWORD(v87.v[2]) = v61;
  R_LGV_CalcTransform(&bounds, &v87, v60, v19->m_volumeTransform);
  if ( (lgvModifier->flags & 1) != 0 )
  {
    v19->m_samplingOffset.v[0] = lgvModifier->probesOffset.v[0];
    v19->m_samplingOffset.v[1] = lgvModifier->probesOffset.v[1];
    v20 = lgvModifier->probesOffset.v[2];
  }
  else
  {
    *(_QWORD *)v19->m_samplingOffset.v = 0i64;
  }
  v19->m_samplingOffset.v[2] = v20;
  if ( enabled || (lgvModifier->flags & 0x40) == 0 )
  {
    v17 = model;
  }
  else
  {
    _XMM0 = LODWORD(bounds.halfSize.v[2]);
    if ( bounds.halfSize.v[0] >= bounds.halfSize.v[1] )
    {
      v25 = (unsigned int)(bounds.halfSize.v[2] <= bounds.halfSize.v[1]) + 1;
    }
    else if ( bounds.halfSize.v[2] > bounds.halfSize.v[0] )
    {
      v25 = 0i64;
    }
    v17 = model;
    *(double *)&_XMM0 = XModelGetLgvThinPush(model);
    _XMM2 = LODWORD(lgvModifier->thinPush);
    __asm
    {
      vcmpneqss xmm1, xmm2, xmm13
      vblendvps xmm3, xmm0, xmm2, xmm1
    }
    _XMM0 = v79;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm0, xmm14, xmm3, xmm2
    }
    v70 = (float)(*(float *)&_XMM0 * 0.5) / bounds.halfSize.v[v25];
    *vec3_t::operator[](&v19->m_samplingOffset, v25) = v70;
    v19->m_flags |= 0x40u;
    if ( !v82 )
    {
      smpFrame = lgvGlob.smpFrame;
      v72 = lgvGlob.frameData[smpFrame].camera_ws.v[2];
      *(_QWORD *)v88.v = *(_QWORD *)lgvGlob.frameData[smpFrame].camera_ws.v;
      v88.v[2] = v72;
      R_LGV_UpdateTransform(1.0 / v21, &v19->m_volumeTransform[(unsigned int)v25], &v88);
    }
    v55 = maxProbesUsea;
  }
  v73 = v90;
  v74 = allocatedVolumeInfoSlot;
  if ( v90 )
  {
    v90->lgvFrame = lgvGlob.globalFrame;
    if ( s_world.draw.lightGridType == GFX_LIGHTGRID_TYPE_MULTI )
      v55 = v74;
    v73->lgvNumProbes = v84;
    v73->lgvHistoryEntry = v55;
    v73->lgvBasisType = v19->m_basisType;
  }
  v91->lgv.allocatedVolumeInfoSlot = v74;
LABEL_91:
  dumpXModels = lgvGlob.frameData[lgvGlob.smpFrame].dumpXModels;
  if ( dumpXModels )
  {
    v76 = v19->m_volumeSize[0];
    if ( (unsigned int)v76 >= dumpXModels || v19->m_volumeSize[1] >= dumpXModels || v19->m_volumeSize[2] >= dumpXModels )
      Com_Printf(8, "Model: %s (LGV Dim: %ux%ux%u)\n", v17->name, v76, v19->m_volumeSize[1], v19->m_volumeSize[2]);
  }
  return v19;
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
  __int64 v5; 
  int HistoryEntries; 
  int v7; 
  const GfxSceneEntity *v8; 
  float v9; 
  int integer; 
  int v12; 
  LightGridVolumeSrcParams *v14; 
  int v15; 
  const dvar_t *v16; 
  float value; 
  const dvar_t *v18; 
  float v19; 
  bool v20; 
  float v21; 
  float LgvDensity; 
  LightGridVolumeModifier *v23; 
  float density; 
  __int64 v25; 
  float v26; 
  float v27; 
  unsigned int flags; 
  float v29; 
  int v32; 
  int v34; 
  __int128 v36; 
  int v38; 
  int v40; 
  int v41; 
  int v42; 
  int v43; 
  int *p_lgvSize; 
  int v45; 
  int NumModels; 
  int v47; 
  int v48; 
  char v49; 
  const DObj *v50; 
  int v51; 
  const XModel *Model; 
  const XModel *v53; 
  int LgvThinStable; 
  bool v63; 
  bool v64; 
  float v65; 
  unsigned __int8 v66; 
  int v67; 
  unsigned __int8 v68; 
  LightGridVolumeModifier *v69; 
  const GpuLightGridRequestRecord *v70; 
  unsigned int v71; 
  double v72; 
  vec3_t *p_m_samplingOffset; 
  float v74; 
  float v75; 
  float v76; 
  float v77; 
  float v78; 
  float v79; 
  float v80; 
  __int64 smpFrame; 
  float v82; 
  int v83; 
  int v84; 
  __int64 v85; 
  GfxModelLightingProbeInfo *v86; 
  __int64 i; 
  unsigned int *p_lgvNumProbes; 
  __int64 v89; 
  bool v90; 
  int v91; 
  unsigned int *v92; 
  int v93; 
  bool enabled; 
  bool v95; 
  bool v96; 
  bool v97; 
  int maxProbesUse; 
  unsigned int maxProbesUsea; 
  int allocatedVolumeInfoSlot[2]; 
  LightGridVolumeModifier *lgvModifiera; 
  vec3_t v102; 
  vec3_t v103; 
  GfxSceneEntity *sceneEnta; 
  GfxModelLightingProbeInfo *v105; 
  GpuLightGridRequestRecord *v106; 
  vec3_t outOrigin; 
  vec4_t quat; 
  Bounds entBounds; 
  Bounds outBounds; 
  tmat33_t<vec3_t> axis; 
  int lgvSize; 
  int v113; 
  int v114; 

  v5 = 0i64;
  *(_QWORD *)v103.v = lastRequest;
  HistoryEntries = 0xFFFF;
  v7 = 0;
  v8 = sceneEnt;
  maxProbesUse = r_lgvMaxProbes->current.integer;
  enabled = r_lgvThinDisable->current.enabled;
  lgvModifiera = (LightGridVolumeModifier *)lgvModifier;
  v96 = r_lgvThinOverride->current.enabled;
  v9 = 0.0;
  v106 = request;
  v105 = lightingInfo;
  integer = r_lgvThinOverridePushOff->current.integer;
  sceneEnta = (GfxSceneEntity *)sceneEnt;
  allocatedVolumeInfoSlot[1] = 0xFFFF;
  _XMM10 = 0i64;
  v12 = r_lgvThinOverrideShrink->current.integer;
  _XMM9 = LODWORD(FLOAT_1_0);
  v97 = 1;
  allocatedVolumeInfoSlot[0] = r_lgvThinOverrideStable->current.integer;
  v95 = r_lgvForceXModelDensity->current.value > 0.0;
  *(_QWORD *)v102.v = R_LGV_AllocateVolumeInfo_Dynamic(&allocatedVolumeInfoSlot[1]);
  v14 = *(LightGridVolumeSrcParams **)v102.v;
  v15 = 128;
  if ( !*(_QWORD *)v102.v )
  {
    v83 = 0;
    goto LABEL_124;
  }
  GfxSceneEntity_GetPlacementOrigin(v8, &outOrigin);
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene_api.h", 553, ASSERT_TYPE_ASSERT, "(sceneEnt)", (const char *)&queryFormat, "sceneEnt") )
    __debugbreak();
  quat = v8->placement.placement.quat;
  UnitQuatToAxis(&quat, &axis);
  GfxSceneEntity_GetBounds(&v8->cull, &outBounds);
  v16 = DVARFLT_r_corpse_lighting_hack;
  if ( !DVARFLT_r_corpse_lighting_hack && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_corpse_lighting_hack") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  value = v16->current.value;
  if ( value > 0.0 && (*((_DWORD *)v8 + 347) & 0x100) != 0 )
    LOBYTE(v7) = 1;
  v18 = DCONST_DVARFLT_r_character_lighting_hack;
  if ( !DCONST_DVARFLT_r_character_lighting_hack && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_character_lighting_hack") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  v19 = v18->current.value;
  v20 = v19 > 0.0 && (*((_BYTE *)v8 + 1388) & 0x40) != 0;
  if ( (_BYTE)v7 )
  {
    v21 = value + outOrigin.v[2];
LABEL_22:
    *(double *)outBounds.midPoint.v = *(double *)outOrigin.v;
    outBounds.midPoint.v[2] = v21;
    goto LABEL_23;
  }
  if ( v20 )
  {
    v21 = v19 + outOrigin.v[2];
    goto LABEL_22;
  }
LABEL_23:
  LgvDensity = R_SceneEnt_GetLgvDensity(v8);
  v23 = lgvModifiera;
  density = LgvDensity;
  if ( !v95 && (lgvModifiera->flags & 0x800) != 0 )
    density = lgvModifiera->density;
  v25 = 2i64;
  if ( !R_SceneEnt_UseSingleProbe(v8, density, &outBounds, lgvModifiera) && !v20 && !(_BYTE)v7 )
  {
    R_SceneEnt_CalcModelBounds(v8, &outOrigin, &axis, &entBounds);
    v26 = entBounds.halfSize.v[0];
    v27 = entBounds.halfSize.v[1];
    flags = v23->flags;
    v29 = entBounds.halfSize.v[2];
    _XMM0 = 0i64;
    __asm { vroundss xmm0, xmm0, xmm1, 1 }
    v32 = 1;
    _XMM1 = 0i64;
    if ( (int)*(float *)&_XMM0 > 1 )
      v32 = (int)*(float *)&_XMM0;
    v34 = 1;
    if ( v32 > 16 )
      v32 = 16;
    __asm { vroundss xmm1, xmm1, xmm0, 1 }
    lgvSize = v32;
    *((_QWORD *)&v36 + 1) = 0i64;
    if ( (int)*(float *)&_XMM1 > 1 )
      v34 = (int)*(float *)&_XMM1;
    _XMM1 = 0i64;
    if ( v34 > 16 )
      v34 = 16;
    v38 = 1;
    __asm { vroundss xmm1, xmm1, xmm0, 1 }
    v113 = v34;
    if ( (int)*(float *)&_XMM1 > 1 )
      v38 = (int)*(float *)&_XMM1;
    if ( v38 > 15 )
      v38 = 15;
    LODWORD(quat.v[0]) = v38;
    v40 = -1;
    v114 = v38;
    if ( maxProbesUse > 0 )
    {
      v41 = -1;
      v42 = -1;
      if ( (flags & 0x400) != 0 )
      {
        if ( entBounds.halfSize.v[0] >= entBounds.halfSize.v[1] )
        {
          if ( entBounds.halfSize.v[1] <= entBounds.halfSize.v[2] )
          {
            v42 = 0;
            if ( entBounds.halfSize.v[0] > entBounds.halfSize.v[2] )
              v42 = 2;
          }
          else
          {
            v42 = 1;
          }
        }
        else
        {
          v42 = 0;
          if ( entBounds.halfSize.v[0] <= entBounds.halfSize.v[2] )
          {
            LOBYTE(v42) = entBounds.halfSize.v[2] <= entBounds.halfSize.v[1];
            ++v42;
          }
        }
      }
      if ( (flags & 0x40) != 0 && !enabled )
      {
        if ( entBounds.halfSize.v[0] >= entBounds.halfSize.v[1] )
        {
          v41 = (entBounds.halfSize.v[2] <= entBounds.halfSize.v[1]) + 1;
        }
        else
        {
          v41 = 2;
          if ( entBounds.halfSize.v[2] > entBounds.halfSize.v[0] )
            v41 = 0;
        }
      }
      UB_BoundProbes(v41, v42, maxProbesUse, &lgvSize);
      v38 = v114;
      v34 = v113;
      v32 = lgvSize;
      LODWORD(quat.v[0]) = v114;
    }
    if ( (flags & 0x400) == 0 )
      goto LABEL_70;
    if ( v26 >= v27 )
    {
      if ( v27 > v29 )
      {
        v43 = v34;
        p_lgvSize = &v113;
        goto LABEL_68;
      }
      if ( v29 < v26 )
        goto LABEL_66;
    }
    else if ( v26 <= v29 )
    {
      if ( v27 < v29 )
      {
        v43 = v34;
        p_lgvSize = &v113;
        goto LABEL_68;
      }
LABEL_66:
      v43 = v38;
      p_lgvSize = &v114;
      goto LABEL_68;
    }
    p_lgvSize = &lgvSize;
    v43 = v32;
LABEL_68:
    if ( v43 == 1 )
    {
      *p_lgvSize = 2;
      v38 = v114;
      v34 = v113;
      v32 = lgvSize;
      LODWORD(quat.v[0]) = v114;
    }
LABEL_70:
    if ( enabled || (flags & 0x40) == 0 )
    {
      v25 = 2i64;
    }
    else
    {
      if ( v26 >= v27 )
      {
        maxProbesUsea = (v29 <= v27) + 1;
      }
      else
      {
        v45 = 2;
        if ( v29 > v26 )
          v45 = 0;
        maxProbesUsea = v45;
      }
      *(_QWORD *)quat.v = sceneEnta->obj;
      NumModels = DObjGetNumModels(*(const DObj **)quat.v);
      v47 = 0;
      v48 = 128;
      if ( NumModels < 128 )
        v48 = NumModels;
      v49 = 0;
      if ( v48 <= 0 )
        goto LABEL_94;
      v50 = *(const DObj **)quat.v;
      v51 = v48;
      do
      {
        Model = DObjGetModel(v50, v47);
        v53 = Model;
        if ( (Model->flags & 0x1000000) != 0 )
        {
          *(double *)&v36 = XModelGetLgvThinPush(Model);
          _XMM6 = v36;
          *(double *)&v36 = XModelGetLgvThinShrink(v53);
          _XMM7 = v36;
          LgvThinStable = XModelGetLgvThinStable(v53);
          if ( v49 )
          {
            __asm
            {
              vminss  xmm10, xmm6, xmm10
              vminss  xmm9, xmm7, xmm9
            }
            if ( LgvThinStable > -1 )
            {
              if ( v40 <= -1 )
                v40 = LgvThinStable;
              else
                v40 |= LgvThinStable;
            }
          }
          else
          {
            v49 = 1;
            _XMM10 = _XMM6;
            if ( LgvThinStable != -1 )
              v40 = LgvThinStable;
            _XMM9 = v36;
          }
        }
        ++v47;
      }
      while ( v47 < v51 );
      v14 = *(LightGridVolumeSrcParams **)v102.v;
      v23 = lgvModifiera;
      if ( !v49 )
        goto LABEL_94;
      _XMM1 = LODWORD(lgvModifiera->thinPush);
      __asm
      {
        vcmpneqss xmm0, xmm1, cs:__real@bf800000
        vblendvps xmm0, xmm10, xmm1, xmm0
      }
      _XMM1 = LODWORD(lgvModifiera->thinShrink);
      quat.v[0] = *(float *)&_XMM0;
      __asm { vcmpneqss xmm0, xmm1, cs:__real@bf800000 }
      *(float *)&_XMM10 = quat.v[0];
      __asm { vblendvps xmm0, xmm9, xmm1, xmm0 }
      LODWORD(_XMM9) = _XMM0;
      if ( v40 == -1 )
LABEL_94:
        v63 = 1;
      else
        v63 = v40 == 1;
      if ( (v23->flags & 0x80u) != 0 )
        v63 = 1;
      v64 = 0;
      if ( (v23->flags & 0x100) == 0 )
        v64 = v63;
      v97 = v64;
      if ( v96 )
      {
        v97 = v64;
        LODWORD(_XMM10) = integer;
        LODWORD(_XMM9) = v12;
        if ( allocatedVolumeInfoSlot[0] != -1 )
          v97 = allocatedVolumeInfoSlot[0] == 1;
      }
      v25 = 2i64;
      v65 = *(float *)&_XMM9 * entBounds.halfSize.v[maxProbesUsea];
      *(&lgvSize + maxProbesUsea) = 2;
      v38 = v114;
      v34 = v113;
      v32 = lgvSize;
      entBounds.halfSize.v[maxProbesUsea] = v65;
      LODWORD(quat.v[0]) = v38;
    }
    goto LABEL_105;
  }
  axis = identityMatrix33;
  entBounds = outBounds;
  outOrigin.v[0] = 0.0;
  outOrigin.v[1] = 0.0;
  outOrigin.v[2] = 0.0;
  v32 = 1;
  lgvSize = 1;
  v34 = 1;
  v113 = 1;
  v38 = 1;
  LODWORD(quat.v[0]) = 1;
  v114 = 1;
LABEL_105:
  if ( (v23->flags & 2) != 0 )
  {
    R_LGV_ModifyDimension(v23, &lgvSize);
    v38 = v114;
    v34 = v113;
    v32 = lgvSize;
    LODWORD(quat.v[0]) = v114;
  }
  v7 = v32 * v34 * v38;
  R_LGV_AddProbes(v7, lgvGlob.smpFrame);
  HistoryEntries = R_LGV_AllocateHistoryEntries(v7);
  v14->m_volumeSize[0] = truncate_cast<unsigned char,int>(v32);
  v66 = truncate_cast<unsigned char,int>(v34);
  v67 = LODWORD(quat.v[0]);
  v14->m_volumeSize[1] = v66;
  v68 = truncate_cast<unsigned char,int>(v67);
  v69 = lgvModifiera;
  v70 = *(const GpuLightGridRequestRecord **)v103.v;
  v14->m_volumeSize[2] = v68;
  v14->m_historyEntry = HistoryEntries;
  v14->m_lastFrameHistoryEntryAndSetup = R_LGV_EncodeLastFrameEntryAndSetup(v69->flags, v70);
  v14->m_basisType = 1;
  v71 = R_LGV_PackStaticProbeIndex(0, 0, 0, 0);
  v72 = *(double *)outOrigin.v;
  v14->m_firstStaticProbeIndex = v71;
  v103.v[2] = outOrigin.v[2];
  *(double *)v103.v = v72;
  R_LGV_CalcTransform(&entBounds, &v103, axis.m, v14->m_volumeTransform);
  p_m_samplingOffset = &v14->m_samplingOffset;
  if ( (v69->flags & 4) != 0 )
  {
    v74 = entBounds.midPoint.v[0];
    v75 = entBounds.midPoint.v[1];
    v76 = entBounds.midPoint.v[2];
    v77 = (float)(entBounds.midPoint.v[0] * axis.m[0].v[1]) + (float)(entBounds.midPoint.v[1] * axis.m[1].v[1]);
    p_m_samplingOffset->v[0] = v69->probesOffset.v[0] - (float)((float)((float)((float)(entBounds.midPoint.v[0] * axis.m[0].v[0]) + (float)(entBounds.midPoint.v[1] * axis.m[1].v[0])) + (float)(entBounds.midPoint.v[2] * axis.m[2].v[0])) + outOrigin.v[0]);
    v78 = (float)(v77 + (float)(v76 * axis.m[2].v[1])) + outOrigin.v[1];
    v79 = v74 * axis.m[0].v[2];
    v80 = v75 * axis.m[1].v[2];
    v14->m_samplingOffset.v[1] = v69->probesOffset.v[1] - v78;
    v9 = v69->probesOffset.v[2] - (float)((float)((float)(v79 + v80) + (float)(v76 * axis.m[2].v[2])) + outOrigin.v[2]);
  }
  else if ( (v69->flags & 1) != 0 )
  {
    p_m_samplingOffset->v[0] = v69->probesOffset.v[0];
    v14->m_samplingOffset.v[1] = v69->probesOffset.v[1];
    v9 = v69->probesOffset.v[2];
  }
  else
  {
    *(_QWORD *)p_m_samplingOffset->v = 0i64;
  }
  v14->m_samplingOffset.v[2] = v9;
  if ( !enabled && (v69->flags & 0x40) != 0 )
  {
    if ( entBounds.halfSize.v[0] >= entBounds.halfSize.v[1] )
    {
      v25 = (unsigned int)(entBounds.halfSize.v[2] <= entBounds.halfSize.v[1]) + 1;
    }
    else if ( entBounds.halfSize.v[2] > entBounds.halfSize.v[0] )
    {
      v25 = 0i64;
    }
    *vec3_t::operator[](p_m_samplingOffset, v25) = (float)(0.5 / entBounds.halfSize.v[v25]) * *(float *)&_XMM10;
    if ( !v97 )
    {
      smpFrame = lgvGlob.smpFrame;
      v82 = lgvGlob.frameData[smpFrame].camera_ws.v[2];
      *(_QWORD *)v102.v = *(_QWORD *)lgvGlob.frameData[smpFrame].camera_ws.v;
      v102.v[2] = v82;
      R_LGV_UpdateTransform(1.0 / *(float *)&_XMM9, &v14->m_volumeTransform[v25], &v102);
    }
    v14->m_flags |= 0x40u;
  }
  v8 = sceneEnta;
  R_LGV_AddToEntityDebugVolume((*((_DWORD *)sceneEnta + 346) >> 10) & 0xFFF, v14);
  R_LGV_DumpSceneEnt(v8, v14);
  v83 = allocatedVolumeInfoSlot[1];
  v15 = 128;
LABEL_124:
  v84 = DObjGetNumModels(v8->obj);
  if ( v84 < 128 )
    v15 = v84;
  allocatedVolumeInfoSlot[0] = v15;
  v85 = v15;
  if ( v15 > 0 )
  {
    v86 = v105;
    for ( i = v85; i; --i )
    {
      v86->lgv.allocatedVolumeInfoSlot = v83;
      ++v86;
    }
    v15 = allocatedVolumeInfoSlot[0];
  }
  if ( v106 && v15 > 0 )
  {
    if ( v14 )
    {
      p_lgvNumProbes = &v106->lgvNumProbes;
      v89 = (unsigned int)v15;
      do
      {
        *(p_lgvNumProbes - 2) = lgvGlob.globalFrame;
        p_lgvNumProbes += 4;
        v90 = s_world.draw.lightGridType == GFX_LIGHTGRID_TYPE_MULTI;
        v91 = HistoryEntries;
        *(p_lgvNumProbes - 4) = v7;
        if ( v90 )
          v91 = v83;
        *(p_lgvNumProbes - 5) = v91;
        *(p_lgvNumProbes - 3) = v14->m_basisType;
        --v89;
      }
      while ( v89 );
    }
    else if ( v85 > 0 )
    {
      v92 = &v106->lgvNumProbes;
      do
      {
        *(v92 - 2) = lgvGlob.globalFrame;
        v92 += 4;
        v90 = s_world.draw.lightGridType == GFX_LIGHTGRID_TYPE_MULTI;
        v93 = HistoryEntries;
        *(v92 - 4) = v7;
        if ( v90 )
          v93 = v83;
        ++v5;
        *(v92 - 5) = v93;
        *(v92 - 3) = 1;
      }
      while ( v5 < v85 );
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
  int v9; 
  unsigned __int8 ModelRootBoneIndex; 
  DObjAnimMat *LocalBoneMatrix; 
  int v12; 
  __int64 v13; 
  float *materialLods; 
  const XModel *Model; 
  float v16; 
  const XModel *v17; 
  unsigned int v18; 
  bool v19; 
  bool v20; 
  unsigned __int8 v21; 
  LightGridVolumeSrcParams *v22; 
  int integer; 
  LightGridVolumeFrameData *v24; 
  GpuLightGridRequestRecord *v25; 
  __int64 v26; 
  vec3_t outOrigin; 
  tmat33_t<vec3_t> outTagMat; 

  obj = sceneEnt->obj;
  NumModels = DObjGetNumModels(obj);
  v9 = 128;
  if ( NumModels < 128 )
    v9 = NumModels;
  if ( v9 == 1 && (lgvModifier->flags & 0x200) != 0 && s_world.gfxMapEntLookup[sceneEnt->mapEntLookup].portalGISlot != -1 )
  {
    DObjGetModel(obj, 0);
    ModelRootBoneIndex = DObjGetModelRootBoneIndex(obj, 0);
    LocalBoneMatrix = CG_DObjGetLocalBoneMatrix(sceneEnt->info.pose, obj, ModelRootBoneIndex);
    if ( LocalBoneMatrix )
      R_UpdateDLS_Quat(&LocalBoneMatrix->quat, s_world.gfxMapEntLookup[sceneEnt->mapEntLookup].portalGISlot, lgvGlob.smpFrame);
  }
  v12 = 0;
  v13 = v9;
  if ( v9 > 0 )
  {
    materialLods = sceneEnt->materialLods;
    do
    {
      Model = DObjGetModel(obj, v12);
      v16 = *materialLods;
      v17 = Model;
      v18 = (int)*materialLods;
      v19 = *materialLods >= 0.0 && v16 <= 16777216.0;
      v20 = v16 >= 0.0 && v16 <= 4294967300.0;
      if ( (!v19 || !v20) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 437, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (IntegralType) 0x%jx == (FloatType) %f", "unsigned int __cdecl float_to_integral_cast<unsigned int,float>(float)", v18, v16) )
        __debugbreak();
      if ( v18 > 1 )
      {
        LODWORD(v26) = 1;
        LODWORD(v25) = (int)v16;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 201, ASSERT_TYPE_ASSERT, "( retVal ) <= ( MAX_MATERIAL_LOD )", "%s <= %s\n\t%u, %u", "retVal", "MAX_MATERIAL_LOD", v25, v26) )
          __debugbreak();
      }
      v21 = DObjGetModelRootBoneIndex(obj, v12);
      CG_DObjGetWorldBoneMatrix(sceneEnt->info.pose, obj, v21, &outTagMat, &outOrigin);
      v22 = R_LGV_PrepareVolumeInfo_Model(lgvModifier, v17, &outOrigin, &outTagMat, v18, &lightingInfo[v12], &request[v12], &lastRequest[v12]);
      integer = r_lgvDebugEnt->current.integer;
      if ( integer >= 0 && integer == ((*((_DWORD *)sceneEnt + 346) >> 10) & 0xFFF) )
      {
        v24 = &lgvGlob.frameData[lgvGlob.smpFrame];
        v24->entityDebugVolumeIndices[v24->entityDebugVolumeIndexCount++] = v22 - v24->lightGridVolumeSrcParams;
      }
      ++v12;
      ++materialLods;
      --v13;
    }
    while ( v13 );
  }
}

/*
==============
R_LGV_PrepareVolumeInfo_SceneEnt_UseEntBounds
==============
*/
void R_LGV_PrepareVolumeInfo_SceneEnt_UseEntBounds(const LightGridVolumeModifier *lgvModifier, const GfxSceneEntity *sceneEnt, GfxModelLightingProbeInfo *lightingInfo, GpuLightGridRequestRecord *request, const GpuLightGridRequestRecord *lastRequest)
{
  __int64 v5; 
  int HistoryEntries; 
  int v9; 
  LightGridVolumeSrcParams *VolumeInfo_Dynamic; 
  float v11; 
  int v12; 
  int v15; 
  int v17; 
  int v19; 
  unsigned int v22; 
  float v23; 
  unsigned int v24; 
  float v25; 
  float v26; 
  __int64 v27; 
  float v28; 
  unsigned __int8 v35; 
  const GpuLightGridRequestRecord *v36; 
  unsigned int v37; 
  double v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  int v46; 
  int NumModels; 
  int v48; 
  GfxModelLightingProbeInfo *v49; 
  __int64 i; 
  unsigned int *p_lgvNumProbes; 
  __int64 v52; 
  bool v53; 
  int v54; 
  unsigned int *v55; 
  int v56; 
  __int64 val; 
  int allocatedVolumeInfoSlot[2]; 
  vec3_t v59; 
  GfxModelLightingProbeInfo *v60; 
  GpuLightGridRequestRecord *v61; 
  vec3_t outOrigin; 
  Bounds modelBounds; 
  tmat33_t<vec3_t> axis; 
  vec4_t quat; 
  Bounds outBounds; 
  int volumeSize; 
  __int64 v68; 

  v5 = 0i64;
  HistoryEntries = 0xFFFF;
  *(_QWORD *)v59.v = lastRequest;
  v9 = 0;
  v61 = request;
  v60 = lightingInfo;
  allocatedVolumeInfoSlot[1] = r_lgvMaxProbes->current.integer;
  allocatedVolumeInfoSlot[0] = 0xFFFF;
  VolumeInfo_Dynamic = R_LGV_AllocateVolumeInfo_Dynamic(allocatedVolumeInfoSlot);
  v11 = 0.0;
  if ( VolumeInfo_Dynamic )
  {
    GfxSceneEntity_GetPlacementOrigin(sceneEnt, &outOrigin);
    if ( !sceneEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_scene_api.h", 553, ASSERT_TYPE_ASSERT, "(sceneEnt)", (const char *)&queryFormat, "sceneEnt") )
      __debugbreak();
    quat = sceneEnt->placement.placement.quat;
    UnitQuatToAxis(&quat, &axis);
    GfxSceneEntity_GetBounds(&sceneEnt->cull, &outBounds);
    R_LGV_CalcModelBounds(&outBounds, &outOrigin, &axis, &modelBounds);
    R_SceneEnt_GetLgvDensity(sceneEnt);
    v12 = 1;
    _XMM0 = 0i64;
    __asm { vroundss xmm0, xmm0, xmm2, 1 }
    v15 = 1;
    _XMM2 = 0i64;
    if ( (int)*(float *)&_XMM0 > 1 )
      v12 = (int)*(float *)&_XMM0;
    v17 = 1;
    __asm { vroundss xmm2, xmm2, xmm1, 1 }
    if ( v12 > 16 )
      v12 = 16;
    v19 = (int)*(float *)&_XMM2;
    volumeSize = v12;
    _XMM2 = 0i64;
    if ( v19 > 1 )
      v15 = v19;
    __asm { vroundss xmm2, xmm2, xmm1, 1 }
    if ( v15 > 16 )
      v15 = 16;
    LODWORD(val) = v15;
    LODWORD(v68) = v15;
    if ( (int)*(float *)&_XMM2 > 1 )
      v17 = (int)*(float *)&_XMM2;
    if ( v17 > 15 )
      v17 = 15;
    HIDWORD(val) = v17;
    HIDWORD(v68) = v17;
    if ( allocatedVolumeInfoSlot[1] > 0 )
    {
      v22 = v17 * v15 * v12;
      if ( v22 > allocatedVolumeInfoSlot[1] )
      {
        v24 = (v12 == 1) + 1;
        if ( v15 != 1 )
          v24 = v12 == 1;
        v25 = (float)v22;
        v23 = (float)(unsigned int)allocatedVolumeInfoSlot[1];
        v26 = v23 / v25;
        v27 = v24 + 1;
        if ( v17 != 1 )
          v27 = v24;
        v28 = (float)v27;
        _XMM3 = 0i64;
        __asm { vroundss xmm3, xmm3, xmm2, 1 }
        v12 = (int)*(float *)&_XMM3;
        powf_0(v26, 1.0 / (float)(3.0 - v28));
        if ( (int)*(float *)&_XMM3 < 1 )
          v12 = 1;
        _XMM3 = 0i64;
        __asm { vroundss xmm3, xmm3, xmm2, 1 }
        v15 = (int)*(float *)&_XMM3;
        volumeSize = v12;
        if ( (int)*(float *)&_XMM3 < 1 )
          v15 = 1;
        _XMM2 = 0i64;
        __asm { vroundss xmm2, xmm2, xmm1, 1 }
        v17 = (int)*(float *)&_XMM2;
        LODWORD(val) = v15;
        LODWORD(v68) = v15;
        if ( (int)*(float *)&_XMM2 < 1 )
          v17 = 1;
        HIDWORD(val) = v17;
        HIDWORD(v68) = v17;
      }
    }
    if ( (lgvModifier->flags & 2) != 0 )
    {
      R_LGV_ModifyDimension(lgvModifier, &volumeSize);
      v17 = HIDWORD(v68);
      v15 = v68;
      v12 = volumeSize;
      val = v68;
    }
    v9 = v12 * v15 * v17;
    R_LGV_AddProbes(v9, lgvGlob.smpFrame);
    HistoryEntries = R_LGV_AllocateHistoryEntries(v9);
    VolumeInfo_Dynamic->m_volumeSize[0] = truncate_cast<unsigned char,int>(v12);
    VolumeInfo_Dynamic->m_volumeSize[1] = truncate_cast<unsigned char,int>(val);
    v35 = truncate_cast<unsigned char,int>(SHIDWORD(val));
    v36 = *(const GpuLightGridRequestRecord **)v59.v;
    VolumeInfo_Dynamic->m_volumeSize[2] = v35;
    VolumeInfo_Dynamic->m_historyEntry = HistoryEntries;
    VolumeInfo_Dynamic->m_lastFrameHistoryEntryAndSetup = R_LGV_EncodeLastFrameEntryAndSetup(lgvModifier->flags, v36);
    VolumeInfo_Dynamic->m_basisType = 1;
    v37 = R_LGV_PackStaticProbeIndex(0, 0, 0, 0);
    v38 = *(double *)outOrigin.v;
    VolumeInfo_Dynamic->m_firstStaticProbeIndex = v37;
    v59.v[2] = outOrigin.v[2];
    *(double *)v59.v = v38;
    R_LGV_CalcTransform(&modelBounds, &v59, axis.m, VolumeInfo_Dynamic->m_volumeTransform);
    if ( (lgvModifier->flags & 4) != 0 )
    {
      v39 = modelBounds.midPoint.v[1];
      v40 = modelBounds.midPoint.v[2];
      v41 = modelBounds.midPoint.v[0];
      v42 = (float)(modelBounds.midPoint.v[0] * axis.m[0].v[1]) + (float)(modelBounds.midPoint.v[1] * axis.m[1].v[1]);
      VolumeInfo_Dynamic->m_samplingOffset.v[0] = lgvModifier->probesOffset.v[0] - (float)((float)((float)((float)(modelBounds.midPoint.v[0] * axis.m[0].v[0]) + (float)(modelBounds.midPoint.v[1] * axis.m[1].v[0])) + (float)(modelBounds.midPoint.v[2] * axis.m[2].v[0])) + outOrigin.v[0]);
      v43 = (float)(v42 + (float)(v40 * axis.m[2].v[1])) + outOrigin.v[1];
      v44 = v41 * axis.m[0].v[2];
      v45 = v39 * axis.m[1].v[2];
      VolumeInfo_Dynamic->m_samplingOffset.v[1] = lgvModifier->probesOffset.v[1] - v43;
      v11 = lgvModifier->probesOffset.v[2] - (float)((float)((float)(v44 + v45) + (float)(v40 * axis.m[2].v[2])) + outOrigin.v[2]);
    }
    else if ( (lgvModifier->flags & 1) != 0 )
    {
      VolumeInfo_Dynamic->m_samplingOffset.v[0] = lgvModifier->probesOffset.v[0];
      VolumeInfo_Dynamic->m_samplingOffset.v[1] = lgvModifier->probesOffset.v[1];
      v11 = lgvModifier->probesOffset.v[2];
    }
    else
    {
      *(_QWORD *)VolumeInfo_Dynamic->m_samplingOffset.v = 0i64;
    }
    VolumeInfo_Dynamic->m_samplingOffset.v[2] = v11;
    R_LGV_AddToEntityDebugVolume((*((_DWORD *)sceneEnt + 346) >> 10) & 0xFFF, VolumeInfo_Dynamic);
    R_LGV_DumpSceneEnt(sceneEnt, VolumeInfo_Dynamic);
    v46 = allocatedVolumeInfoSlot[0];
  }
  else
  {
    v46 = 0;
  }
  NumModels = DObjGetNumModels(sceneEnt->obj);
  v48 = 128;
  if ( NumModels < 128 )
    v48 = NumModels;
  if ( v48 > 0 )
  {
    v49 = v60;
    for ( i = v48; i; --i )
    {
      v49->lgv.allocatedVolumeInfoSlot = v46;
      ++v49;
    }
  }
  if ( v61 && v48 > 0 )
  {
    if ( VolumeInfo_Dynamic )
    {
      p_lgvNumProbes = &v61->lgvNumProbes;
      v52 = (unsigned int)v48;
      do
      {
        *(p_lgvNumProbes - 2) = lgvGlob.globalFrame;
        p_lgvNumProbes += 4;
        v53 = s_world.draw.lightGridType == GFX_LIGHTGRID_TYPE_MULTI;
        v54 = HistoryEntries;
        *(p_lgvNumProbes - 4) = v9;
        if ( v53 )
          v54 = v46;
        *(p_lgvNumProbes - 5) = v54;
        *(p_lgvNumProbes - 3) = VolumeInfo_Dynamic->m_basisType;
        --v52;
      }
      while ( v52 );
    }
    else
    {
      v55 = &v61->lgvNumProbes;
      do
      {
        *(v55 - 2) = lgvGlob.globalFrame;
        v55 += 4;
        v53 = s_world.draw.lightGridType == GFX_LIGHTGRID_TYPE_MULTI;
        v56 = HistoryEntries;
        *(v55 - 4) = v9;
        if ( v53 )
          v56 = v46;
        *(v55 - 3) = 1;
        ++v5;
        *(v55 - 5) = v56;
      }
      while ( v5 < v48 );
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
  const LightGridVolumeSrcParams *v11; 
  tmat33_t<vec3_t> axis; 

  if ( R_GpuLightGrid_DataAvailable() )
  {
    model = sceneModel->model;
    materialLod = XModelGetIntegerMaterialLod(sceneModel->materialLod);
    UnitQuatToAxis(&sceneModel->placement.base.quat, &axis);
    v11 = R_LGV_PrepareVolumeInfo_Model(lgvModifier, model, &sceneModel->placement.base.origin, &axis, materialLod, lightingInfo, request, lastRequest);
    if ( v11 )
      R_LGV_AddToEntityDebugVolume((*((_DWORD *)sceneModel + 30) >> 10) & 0xFFF, v11);
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
  unsigned int v13; 
  unsigned __int8 v14; 
  unsigned __int8 v15; 
  vec4_t v16; 
  __int64 v17; 
  signed __int64 v18; 
  char *v19; 
  float *v20; 
  char v21[8]; 
  _OWORD v22[3]; 

  v3 = volumeSize;
  v4 = 1;
  axesSorted[1] = 1;
  v5 = 2;
  *axesSorted = 0;
  axesSorted[2] = 2;
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
  v22[0] = volumeTransform[v12];
  v22[1] = volumeTransform[v13];
  v16 = volumeTransform[v9];
  v17 = 3i64;
  v21[0] = v3[v12];
  v21[1] = v3[v13];
  v18 = (char *)v22 - (char *)volumeTransform;
  v19 = (char *)(v21 - (char *)v3);
  v21[2] = v3[v9];
  v20 = &volumeTransform->v[1];
  v22[2] = v16;
  do
  {
    v20 += 4;
    *v3 = v3[(_QWORD)v19];
    ++v3;
    *(v20 - 5) = *(float *)((char *)v20 + v18 - 20);
    *(v20 - 4) = *(float *)((char *)v20 + v18 - 16);
    *(v20 - 3) = *(float *)((char *)v20 + (char *)v22 + 4 - (char *)volumeTransform - 16);
    *(v20 - 2) = *(float *)((char *)v20 + (char *)v22 + 8 - (char *)volumeTransform - 16);
    --v17;
  }
  while ( v17 );
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
  vec3_t v14; 
  float v15; 
  Bounds v16; 

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
  *(_OWORD *)v16.midPoint.v = _xmm;
  _XMM0 = 0i64;
  v15 = 0.0;
  __asm { vunpcklps xmm0, xmm0, xmm0 }
  VolumeInfo_Dynamic->m_firstStaticProbeIndex = v10;
  v14.v[2] = v15;
  *(double *)v14.v = *(double *)&_XMM0;
  v16.halfSize.v[1] = FLOAT_0_5;
  v16.halfSize.v[2] = FLOAT_0_5;
  R_LGV_CalcTransform(&v16, &v14, identityMatrix33.m, VolumeInfo_Dynamic->m_volumeTransform);
  *(_QWORD *)VolumeInfo_Dynamic->m_samplingOffset.v = 0i64;
  VolumeInfo_Dynamic->m_samplingOffset.v[2] = 0.0;
}

/*
==============
R_LGV_UpdateTransform
==============
*/
void R_LGV_UpdateTransform(const float shiftVal, vec4_t *rowUse, const vec3_t *camera_ws)
{
  float v3; 
  double v6; 
  double v7; 

  v3 = (float)((float)((float)(rowUse->v[1] * camera_ws->v[1]) + (float)(rowUse->v[0] * camera_ws->v[0])) + (float)(rowUse->v[2] * camera_ws->v[2])) + rowUse->v[3];
  if ( v3 <= 1.0 )
  {
    if ( v3 < 0.0 )
    {
      v7 = I_fclamp(COERCE_FLOAT(COERCE_UNSIGNED_INT(v3 * shiftVal) ^ _xmm), 0.0, 1.0);
      rowUse->v[3] = rowUse->v[3] - (float)(*(float *)&v7 * shiftVal);
    }
  }
  else
  {
    v6 = I_fclamp((float)(v3 - 1.0) * shiftVal, 0.0, 1.0);
    rowUse->v[3] = (float)(*(float *)&v6 * shiftVal) + rowUse->v[3];
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
  int v4; 
  const DObj *obj; 
  int NumModels; 
  const XModel *Model; 
  unsigned __int8 ModelRootBoneIndex; 
  float v12; 
  float v13; 
  __int128 v15; 
  float v18; 
  __m128 v20; 
  float v23; 
  __m128 v25; 
  __m128 v35; 
  __m128 v39; 
  __int128 v43; 
  tmat33_t<vec3_t> v53; 
  vec3_t outOrigin; 
  __int128 v55; 
  __m128 v56; 
  __m128 v57; 
  __int128 v58; 
  __m128 v59; 
  __m128 v60; 
  Bounds bounds; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> outTagMat; 

  v4 = 0;
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
    do
    {
      Model = DObjGetModel(obj, v4);
      ModelRootBoneIndex = DObjGetModelRootBoneIndex(obj, v4);
      CG_DObjGetWorldBoneMatrix(sceneEnt->info.pose, obj, ModelRootBoneIndex, &outTagMat, &outOrigin);
      XModelGetBounds(Model, &bounds);
      MatrixMultiply(&outTagMat, &out, &v53);
      v12 = (float)((float)((float)((float)(outOrigin.v[1] - entOrigin->v[1]) * entAxis->m[0].v[1]) + (float)((float)(outOrigin.v[0] - entOrigin->v[0]) * entAxis->m[0].v[0])) + (float)((float)(outOrigin.v[2] - entOrigin->v[2]) * entAxis->m[0].v[2])) + (float)((float)((float)(bounds.midPoint.v[0] * v53.m[0].v[0]) + (float)(bounds.midPoint.v[1] * v53.m[0].v[1])) + (float)(bounds.midPoint.v[2] * v53.m[0].v[2]));
      v13 = (float)((float)(COERCE_FLOAT(LODWORD(v53.m[0].v[0]) & _xmm) * bounds.halfSize.v[0]) + (float)(COERCE_FLOAT(LODWORD(v53.m[0].v[1]) & _xmm) * bounds.halfSize.v[1])) + (float)(COERCE_FLOAT(LODWORD(v53.m[0].v[2]) & _xmm) * bounds.halfSize.v[2]);
      HIDWORD(v55) = 0;
      v15 = v55;
      *(float *)&v15 = v12 - v13;
      _XMM5 = v15;
      __asm
      {
        vinsertps xmm5, xmm5, xmm4, 10h
        vinsertps xmm5, xmm5, xmm0, 20h ; ' '
      }
      v18 = _RDI->midPoint.v[0];
      v55 = _XMM5;
      v56.m128_i32[3] = 0;
      v20 = v56;
      v20.m128_f32[0] = v18;
      _XMM4 = v20;
      __asm
      {
        vinsertps xmm4, xmm4, dword ptr [rdi+4], 10h
        vinsertps xmm4, xmm4, dword ptr [rdi+8], 20h ; ' '
      }
      v23 = _RDI->halfSize.v[0];
      v56 = _XMM4;
      v57.m128_i32[3] = 0;
      v25 = v57;
      v25.m128_f32[0] = v23;
      _XMM3 = v25;
      __asm
      {
        vinsertps xmm3, xmm3, dword ptr [rdi+10h], 10h
        vinsertps xmm3, xmm3, dword ptr [rdi+14h], 20h ; ' '
      }
      _XMM0 = _mm128_sub_ps(_XMM4, _XMM3);
      _XMM1 = _mm128_add_ps(_XMM4, _XMM3);
      __asm
      {
        vminps  xmm2, xmm0, xmm5
        vmaxps  xmm0, xmm1, xmm5
      }
      v57 = _XMM3;
      _XMM3 = _mm128_mul_ps(_mm128_add_ps(_XMM2, _XMM0), g_oneHalf.v);
      _RDI->midPoint.v[0] = _XMM3.m128_f32[0];
      __asm
      {
        vextractps dword ptr [rdi+4], xmm3, 1
        vextractps dword ptr [rdi+8], xmm3, 2
      }
      _XMM4 = _mm128_sub_ps(_XMM3, _XMM2);
      _RDI->halfSize.v[0] = _XMM4.m128_f32[0];
      __asm
      {
        vextractps dword ptr [rdi+10h], xmm4, 1
        vextractps dword ptr [rdi+14h], xmm4, 2
      }
      _XMM0.m128_i32[0] = LODWORD(_RDI->midPoint.v[0]);
      v59.m128_i32[3] = 0;
      v35 = v59;
      v35.m128_f32[0] = _XMM0.m128_f32[0];
      _XMM4 = v35;
      _XMM0.m128_i32[0] = LODWORD(_RDI->halfSize.v[0]);
      __asm
      {
        vinsertps xmm4, xmm4, dword ptr [rdi+4], 10h
        vinsertps xmm4, xmm4, dword ptr [rdi+8], 20h ; ' '
      }
      HIDWORD(v58) = 0;
      v60.m128_i32[3] = 0;
      v39 = v60;
      v39.m128_f32[0] = _XMM0.m128_f32[0];
      _XMM3 = v39;
      __asm
      {
        vinsertps xmm3, xmm3, dword ptr [rdi+10h], 10h
        vinsertps xmm3, xmm3, dword ptr [rdi+14h], 20h ; ' '
      }
      v43 = v58;
      *(float *)&v43 = v13 + v12;
      _XMM5 = v43;
      __asm
      {
        vinsertps xmm5, xmm5, xmm7, 10h
        vinsertps xmm5, xmm5, xmm8, 20h ; ' '
      }
      v60 = _XMM3;
      _XMM0 = _mm128_sub_ps(_XMM4, _XMM3);
      v58 = _XMM5;
      v59 = _XMM4;
      _XMM1 = _mm128_add_ps(_XMM4, _XMM3);
      __asm
      {
        vminps  xmm2, xmm0, xmm5
        vmaxps  xmm0, xmm1, xmm5
      }
      _XMM3 = _mm128_mul_ps(_mm128_add_ps(_XMM2, _XMM0), g_oneHalf.v);
      _RDI->midPoint.v[0] = _XMM3.m128_f32[0];
      _XMM4 = _mm128_sub_ps(_XMM3, _XMM2);
      __asm
      {
        vextractps dword ptr [rdi+4], xmm3, 1
        vextractps dword ptr [rdi+8], xmm3, 2
      }
      ++v4;
      _RDI->halfSize.v[0] = _XMM4.m128_f32[0];
      __asm
      {
        vextractps dword ptr [rdi+10h], xmm4, 1
        vextractps dword ptr [rdi+14h], xmm4, 2
      }
    }
    while ( v4 < NumModels );
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
  int v3; 
  int NumModels; 
  const XModel *Model; 

  obj = sceneEnt->obj;
  *(float *)&_XMM6 = FLOAT_1024_0;
  v3 = 0;
  NumModels = DObjGetNumModels(obj);
  if ( NumModels > 0 )
  {
    do
    {
      Model = DObjGetModel(obj, v3);
      _XMM0 = r_lgvForceXModelDensity->current.unsignedInt;
      if ( *(float *)&_XMM0 <= 0.0 )
        *(double *)&_XMM0 = XModelGetLgvDensity(Model);
      ++v3;
      __asm { vminss  xmm6, xmm0, xmm6 }
    }
    while ( v3 < NumModels );
  }
  return *(float *)&_XMM6;
}

/*
==============
R_SceneEnt_UseSingleProbe
==============
*/
char R_SceneEnt_UseSingleProbe(const GfxSceneEntity *sceneEnt, float volumeDensity, const Bounds *entWorldBounds, const LightGridVolumeModifier *lgvModifier)
{
  unsigned int v5; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v16; 
  int NumModels; 
  __int64 v19; 
  __int64 v20; 
  float *materialLods; 
  float v22; 
  unsigned int v23; 
  bool v24; 
  bool v25; 
  bool v26; 
  __int64 v27; 
  __int64 v28; 

  v5 = lgvModifier->flags & 0x440;
  if ( (lgvModifier->flags & 2) != 0 && !lgvModifier->dimension )
    return v5 == 0;
  _XMM0 = 0i64;
  __asm { vroundss xmm0, xmm0, xmm1, 1 }
  _XMM1 = 0i64;
  __asm { vroundss xmm1, xmm1, xmm0, 1 }
  v10 = 1;
  v11 = 1;
  v12 = 1;
  if ( (int)*(float *)&_XMM0 > 1 )
    v10 = (int)*(float *)&_XMM0;
  v13 = (int)*(float *)&_XMM1;
  _XMM1 = 0i64;
  if ( v13 > 1 )
    v11 = v13;
  __asm { vroundss xmm1, xmm1, xmm0, 1 }
  if ( (int)*(float *)&_XMM1 > 1 )
    v12 = (int)*(float *)&_XMM1;
  if ( v12 > 15 )
    v12 = 15;
  if ( v11 > 16 )
    v11 = 16;
  v16 = v11 * v12;
  if ( v10 > 16 )
    v10 = 16;
  if ( v10 * v16 == 1 )
    return v5 == 0;
  NumModels = DObjGetNumModels(sceneEnt->obj);
  v19 = NumModels;
  if ( NumModels <= 0 )
  {
LABEL_37:
    if ( !v5 )
      return 1;
  }
  else
  {
    v20 = 0i64;
    materialLods = sceneEnt->materialLods;
    while ( 1 )
    {
      v22 = *materialLods;
      v23 = (int)*materialLods;
      v24 = *materialLods >= 0.0 && v22 <= 16777216.0;
      v25 = v22 >= 0.0 && v22 <= 4294967300.0;
      if ( (!v24 || !v25) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 437, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (IntegralType) 0x%jx == (FloatType) %f", "unsigned int __cdecl float_to_integral_cast<unsigned int,float>(float)", v23, v22) )
        __debugbreak();
      v26 = v23 == 0;
      if ( v23 > 1 )
      {
        LODWORD(v28) = 1;
        LODWORD(v27) = (int)v22;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 201, ASSERT_TYPE_ASSERT, "( retVal ) <= ( MAX_MATERIAL_LOD )", "%s <= %s\n\t%u, %u", "retVal", "MAX_MATERIAL_LOD", v27, v28) )
          __debugbreak();
        v26 = v23 == 0;
      }
      if ( v26 )
        break;
      ++v20;
      ++materialLods;
      if ( v20 >= v19 )
        goto LABEL_37;
    }
  }
  return 0;
}

/*
==============
UB_BoundProbes
==============
*/
void UB_BoundProbes(int minAxisUse, int medAxisUse, const unsigned int maxProbesUse, int *lgvSize)
{
  __int64 v5; 
  __int64 v6; 
  unsigned int v7; 
  int v8; 
  float v9; 
  int v10; 
  unsigned int v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  int v18; 
  int v21; 
  int v24; 

  v5 = medAxisUse;
  v6 = minAxisUse;
  v7 = lgvSize[2] * lgvSize[1] * *lgvSize;
  if ( v7 > maxProbesUse )
  {
    v8 = (*lgvSize == 1) + 1;
    if ( lgvSize[1] != 1 )
      v8 = *lgvSize == 1;
    v10 = v8 + 1;
    if ( lgvSize[2] != 1 )
      v10 = v8;
    v11 = v10;
    v12 = (float)v7;
    v9 = (float)maxProbesUse;
    v14 = v9 / v12;
    v13 = v14;
    if ( (int)v6 >= 0 && lgvSize[v6] > 1 )
    {
      v11 = v10 + 1;
      v13 = v14 * 0.5;
    }
    if ( (int)v5 >= 0 && lgvSize[v5] > 1 )
    {
      ++v11;
      v13 = v13 * 0.5;
    }
    v15 = (float)v11;
    powf_0(v13, 1.0 / (float)(3.0 - v15));
    _XMM3 = 0i64;
    __asm { vroundss xmm3, xmm3, xmm2, 1 }
    v18 = (int)*(float *)&_XMM3;
    if ( (int)*(float *)&_XMM3 < 1 )
      v18 = 1;
    *lgvSize = v18;
    _XMM3 = 0i64;
    __asm { vroundss xmm3, xmm3, xmm2, 1 }
    v21 = (int)*(float *)&_XMM3;
    if ( (int)*(float *)&_XMM3 < 1 )
      v21 = 1;
    lgvSize[1] = v21;
    _XMM2 = 0i64;
    __asm { vroundss xmm2, xmm2, xmm1, 1 }
    v24 = (int)*(float *)&_XMM2;
    if ( (int)*(float *)&_XMM2 < 1 )
      v24 = 1;
    lgvSize[2] = v24;
    if ( (int)v6 >= 0 && lgvSize[v6] < 2 )
      lgvSize[v6] = 2;
    if ( (int)v5 >= 0 && lgvSize[v5] < 2 )
      lgvSize[v5] = 2;
  }
}

