/*
==============
R_ST_AreNodeLayersReadyForCompositing
==============
*/

bool __fastcall R_ST_AreNodeLayersReadyForCompositing(const StDiskTerrainSurface *surface, const StTerrainNode *node, unsigned int virtualTextureMipLevel)
{
  return ?R_ST_AreNodeLayersReadyForCompositing@@YA_NAEBUStDiskTerrainSurface@@AEBUStTerrainNode@@I@Z(surface, node, virtualTextureMipLevel);
}

/*
==============
R_ST_IssueGeoMapStreamRequests
==============
*/

void __fastcall R_ST_IssueGeoMapStreamRequests(const StDiskTerrainSurface *surface)
{
  ?R_ST_IssueGeoMapStreamRequests@@YAXAEBUStDiskTerrainSurface@@@Z(surface);
}

/*
==============
R_ST_SetupMaterialLayerInternal<HLSL::TerrainLayerDataCodeCS>
==============
*/

void __fastcall R_ST_SetupMaterialLayerInternal<HLSL::TerrainLayerDataCodeCS>(const StDiskTerrainSurface *surface, const StTerrainMaterialLayer *layer, HLSL::TerrainLayerDataCodeCS *layerOut)
{
  ??$R_ST_SetupMaterialLayerInternal@UTerrainLayerDataCodeCS@HLSL@@@@YAXAEBUStDiskTerrainSurface@@AEBUStTerrainMaterialLayer@@AEAUTerrainLayerDataCodeCS@HLSL@@@Z(surface, layer, layerOut);
}

/*
==============
R_ST_TerrainSurface_IssueDataInfoRequests
==============
*/

void __fastcall R_ST_TerrainSurface_IssueDataInfoRequests(const StDiskTerrainSurface *surface, const TerrainSurfaceDataInfo *terrainSurfaceDataInfo)
{
  ?R_ST_TerrainSurface_IssueDataInfoRequests@@YAXAEBUStDiskTerrainSurface@@AEBUTerrainSurfaceDataInfo@@@Z(surface, terrainSurfaceDataInfo);
}

/*
==============
R_ST_SetSceneConstants
==============
*/

void __fastcall R_ST_SetSceneConstants(GfxViewInfo *viewInfo, const vec3_t *dpvsCamPos)
{
  ?R_ST_SetSceneConstants@@YAXAEAUGfxViewInfo@@AEBTvec3_t@@@Z(viewInfo, dpvsCamPos);
}

/*
==============
R_ST_CombinedMapDistanceSqThreshold
==============
*/

double __fastcall R_ST_CombinedMapDistanceSqThreshold(bool applyADSZoomFactor)
{
  double result; 

  *(float *)&result = ?R_ST_CombinedMapDistanceSqThreshold@@YAM_N@Z(applyADSZoomFactor);
  return result;
}

/*
==============
R_ST_DebugGetRenderedGeoStatsForSurface
==============
*/

void __fastcall R_ST_DebugGetRenderedGeoStatsForSurface(const vec3_t *dpvsCamPos, const StDiskTerrainSurface *surface, StRenderedMeshGeoDebugInfo *renderedMeshGeoInfo)
{
  ?R_ST_DebugGetRenderedGeoStatsForSurface@@YAXAEBTvec3_t@@AEBUStDiskTerrainSurface@@AEAUStRenderedMeshGeoDebugInfo@@@Z(dpvsCamPos, surface, renderedMeshGeoInfo);
}

/*
==============
R_ST_NodeRequiresHeightmap
==============
*/

bool __fastcall R_ST_NodeRequiresHeightmap(const StTerrainNode *node)
{
  return ?R_ST_NodeRequiresHeightmap@@YA_NAEBUStTerrainNode@@@Z(node);
}

/*
==============
R_ST_SetTerrainComboSetInfoConstants
==============
*/

void __fastcall R_ST_SetTerrainComboSetInfoConstants(vec4_t *terrainComboSetInfo)
{
  ?R_ST_SetTerrainComboSetInfoConstants@@YAXQEATvec4_t@@@Z(terrainComboSetInfo);
}

/*
==============
R_ST_AllocFromSharedArray<0,HLSL::TerrainLayerData>
==============
*/

HLSL::TerrainLayerData *__fastcall R_ST_AllocFromSharedArray<0,HLSL::TerrainLayerData>(HLSL::TerrainLayerData *resourceArray, volatile int *arrayCount, unsigned int arrayCapacity, GfxWarningType warningType, unsigned int allocCount, unsigned int *indexOut)
{
  return ??$R_ST_AllocFromSharedArray@$0A@UTerrainLayerData@HLSL@@@@YAPEAUTerrainLayerData@HLSL@@PEAU01@AECJIW4GfxWarningType@@IAEAI@Z(resourceArray, arrayCount, arrayCapacity, warningType, allocCount, indexOut);
}

/*
==============
R_ST_AllocFromSharedArray<1,HLSL::TerrainTileData>
==============
*/

HLSL::TerrainTileData *__fastcall R_ST_AllocFromSharedArray<1,HLSL::TerrainTileData>(HLSL::TerrainTileData *resourceArray, volatile int *arrayCount, unsigned int arrayCapacity, GfxWarningType warningType, unsigned int allocCount, unsigned int *indexOut)
{
  return ??$R_ST_AllocFromSharedArray@$00UTerrainTileData@HLSL@@@@YAPEAUTerrainTileData@HLSL@@PEAU01@AECJIW4GfxWarningType@@IAEAI@Z(resourceArray, arrayCount, arrayCapacity, warningType, allocCount, indexOut);
}

/*
==============
R_ST_TerrainSurface_PopulateDataInfo
==============
*/

void __fastcall R_ST_TerrainSurface_PopulateDataInfo(const StDiskTerrainSurface *surface, TerrainSurfaceDataInfo *terrainSurfaceDataInfo)
{
  ?R_ST_TerrainSurface_PopulateDataInfo@@YAXAEBUStDiskTerrainSurface@@AEAUTerrainSurfaceDataInfo@@@Z(surface, terrainSurfaceDataInfo);
}

/*
==============
R_ST_Init
==============
*/

void R_ST_Init(void)
{
  ?R_ST_Init@@YAXXZ();
}

/*
==============
R_ST_SetupTileDataForSurfaceInternal<HLSL::TerrainTileDataCodeCS>
==============
*/

void __fastcall R_ST_SetupTileDataForSurfaceInternal<HLSL::TerrainTileDataCodeCS>(const StDiskTerrainSurface *surface, const vec3_t *cameraWorldPosition, bool setFrameCount, HLSL::TerrainTileDataCodeCS *tileDataOut)
{
  ??$R_ST_SetupTileDataForSurfaceInternal@UTerrainTileDataCodeCS@HLSL@@@@YAXAEBUStDiskTerrainSurface@@AEBTvec3_t@@_NAEAUTerrainTileDataCodeCS@HLSL@@@Z(surface, cameraWorldPosition, setFrameCount, tileDataOut);
}

/*
==============
R_ST_ShutdownGfxWrappedBuffer
==============
*/

void __fastcall R_ST_ShutdownGfxWrappedBuffer(GfxWrappedBuffer *buffer)
{
  ?R_ST_ShutdownGfxWrappedBuffer@@YAXAEAUGfxWrappedBuffer@@@Z(buffer);
}

/*
==============
R_ST_RegisterDvars
==============
*/

void R_ST_RegisterDvars(void)
{
  ?R_ST_RegisterDvars@@YAXXZ();
}

/*
==============
R_ST_SetupMaterialLayer
==============
*/

void __fastcall R_ST_SetupMaterialLayer(const StDiskTerrainSurface *surface, const StTerrainMaterialLayer *layer, HLSL::TerrainLayerDataCodeCS *layerOut)
{
  ?R_ST_SetupMaterialLayer@@YAXAEBUStDiskTerrainSurface@@AEBUStTerrainMaterialLayer@@AEAUTerrainLayerDataCodeCS@HLSL@@@Z(surface, layer, layerOut);
}

/*
==============
CopyTerrainLayerDataCode<HLSL::TerrainLayerDataCodeBindlessCS>
==============
*/

void __fastcall CopyTerrainLayerDataCode<HLSL::TerrainLayerDataCodeBindlessCS>(const StTerrainMaterialLayer *layer, HLSL::TerrainLayerDataCodeBindlessCS *layerOut)
{
  ??$CopyTerrainLayerDataCode@UTerrainLayerDataCodeBindlessCS@HLSL@@@@YAXAEBUStTerrainMaterialLayer@@AEAUTerrainLayerDataCodeBindlessCS@HLSL@@@Z(layer, layerOut);
}

/*
==============
R_ST_StreamKeyUnmapOldAddressBackend
==============
*/

void __fastcall R_ST_StreamKeyUnmapOldAddressBackend(const StreamKey *streamKey)
{
  ?R_ST_StreamKeyUnmapOldAddressBackend@@YAXPEBUStreamKey@@@Z(streamKey);
}

/*
==============
R_ST_ShutdownTerrain
==============
*/

void R_ST_ShutdownTerrain(void)
{
  ?R_ST_ShutdownTerrain@@YAXXZ();
}

/*
==============
R_ST_LoadTerrain
==============
*/

void __fastcall R_ST_LoadTerrain(const char *bspFilePath)
{
  ?R_ST_LoadTerrain@@YAXPEBD@Z(bspFilePath);
}

/*
==============
R_ST_GetBindlessImageFromFlattenedIndex
==============
*/

const GfxImage *__fastcall R_ST_GetBindlessImageFromFlattenedIndex(unsigned __int16 index)
{
  return ?R_ST_GetBindlessImageFromFlattenedIndex@@YAPEBUGfxImage@@G@Z(index);
}

/*
==============
R_ST_IsLoaded
==============
*/

bool __fastcall R_ST_IsLoaded()
{
  return ?R_ST_IsLoaded@@YA_NXZ();
}

/*
==============
R_ST_AreAllMaterialLayerBaseMipsAvailable
==============
*/

bool __fastcall R_ST_AreAllMaterialLayerBaseMipsAvailable(const StTerrainMaterialLayer *materialLayer)
{
  return ?R_ST_AreAllMaterialLayerBaseMipsAvailable@@YA_NAEBUStTerrainMaterialLayer@@@Z(materialLayer);
}

/*
==============
R_ST_SetBindlessDescriptorTable
==============
*/

void __fastcall R_ST_SetBindlessDescriptorTable(GfxCmdBufState *state, const GfxBackEndData *backEndData)
{
  ?R_ST_SetBindlessDescriptorTable@@YAXAEAUGfxCmdBufState@@AEBUGfxBackEndData@@@Z(state, backEndData);
}

/*
==============
CopyTerrainLayerDataCode<HLSL::TerrainLayerDataCode>
==============
*/

void __fastcall CopyTerrainLayerDataCode<HLSL::TerrainLayerDataCode>(const StTerrainMaterialLayer *layer, HLSL::TerrainLayerDataCode *layerOut)
{
  ??$CopyTerrainLayerDataCode@UTerrainLayerDataCode@HLSL@@@@YAXAEBUStTerrainMaterialLayer@@AEAUTerrainLayerDataCode@HLSL@@@Z(layer, layerOut);
}

/*
==============
R_ST_SetupTileDataForSurfaceInternal<HLSL::TerrainTileDataCode>
==============
*/

void __fastcall R_ST_SetupTileDataForSurfaceInternal<HLSL::TerrainTileDataCode>(const StDiskTerrainSurface *surface, const vec3_t *cameraWorldPosition, bool setFrameCount, HLSL::TerrainTileDataCode *tileDataOut)
{
  ??$R_ST_SetupTileDataForSurfaceInternal@UTerrainTileDataCode@HLSL@@@@YAXAEBUStDiskTerrainSurface@@AEBTvec3_t@@_NAEAUTerrainTileDataCode@HLSL@@@Z(surface, cameraWorldPosition, setFrameCount, tileDataOut);
}

/*
==============
R_ST_CombinedMapUsageForSurface
==============
*/

StCombinedMapUsage __fastcall R_ST_CombinedMapUsageForSurface(const StDiskTerrainSurface *surface, const vec3_t *viewPos)
{
  return ?R_ST_CombinedMapUsageForSurface@@YA?AW4StCombinedMapUsage@@AEBUStDiskTerrainSurface@@AEBTvec3_t@@@Z(surface, viewPos);
}

/*
==============
R_ST_SetupMaterialLayerInternal<HLSL::TerrainLayerDataCodeBindlessCS>
==============
*/

void __fastcall R_ST_SetupMaterialLayerInternal<HLSL::TerrainLayerDataCodeBindlessCS>(const StDiskTerrainSurface *surface, const StTerrainMaterialLayer *layer, HLSL::TerrainLayerDataCodeBindlessCS *layerOut)
{
  ??$R_ST_SetupMaterialLayerInternal@UTerrainLayerDataCodeBindlessCS@HLSL@@@@YAXAEBUStDiskTerrainSurface@@AEBUStTerrainMaterialLayer@@AEAUTerrainLayerDataCodeBindlessCS@HLSL@@@Z(surface, layer, layerOut);
}

/*
==============
R_ST_SetupMaterialLayerInternal<HLSL::TerrainLayerDataCode>
==============
*/

void __fastcall R_ST_SetupMaterialLayerInternal<HLSL::TerrainLayerDataCode>(const StDiskTerrainSurface *surface, const StTerrainMaterialLayer *layer, HLSL::TerrainLayerDataCode *layerOut)
{
  ??$R_ST_SetupMaterialLayerInternal@UTerrainLayerDataCode@HLSL@@@@YAXAEBUStDiskTerrainSurface@@AEBUStTerrainMaterialLayer@@AEAUTerrainLayerDataCode@HLSL@@@Z(surface, layer, layerOut);
}

/*
==============
R_ST_SetFrameDataResources
==============
*/

void __fastcall R_ST_SetFrameDataResources(GfxCmdBufInput *input)
{
  ?R_ST_SetFrameDataResources@@YAXAEAUGfxCmdBufInput@@@Z(input);
}

/*
==============
R_ST_ToggleSmpFrame
==============
*/

unsigned int __fastcall R_ST_ToggleSmpFrame()
{
  return ?R_ST_ToggleSmpFrame@@YAIXZ();
}

/*
==============
RB_ST_UpdateFrameDataResources
==============
*/

void __fastcall RB_ST_UpdateFrameDataResources(GfxCmdBufState *state, const GfxBackEndData *backEndData)
{
  ?RB_ST_UpdateFrameDataResources@@YAXAEAUGfxCmdBufState@@AEBUGfxBackEndData@@@Z(state, backEndData);
}

/*
==============
R_ST_SetupMaterialLayer
==============
*/

void __fastcall R_ST_SetupMaterialLayer(const StDiskTerrainSurface *surface, const StTerrainMaterialLayer *layer, HLSL::TerrainLayerDataCodeBindlessCS *layerOut)
{
  ?R_ST_SetupMaterialLayer@@YAXAEBUStDiskTerrainSurface@@AEBUStTerrainMaterialLayer@@AEAUTerrainLayerDataCodeBindlessCS@HLSL@@@Z(surface, layer, layerOut);
}

/*
==============
R_ST_Shutdown
==============
*/

void R_ST_Shutdown(void)
{
  ?R_ST_Shutdown@@YAXXZ();
}

/*
==============
R_ST_CheckAndTouchImageLowMipUsable
==============
*/

bool __fastcall R_ST_CheckAndTouchImageLowMipUsable(const GfxImage *image)
{
  return ?R_ST_CheckAndTouchImageLowMipUsable@@YA_NPEBUGfxImage@@@Z(image);
}

/*
==============
R_ST_AllocFromSharedArray<0,GfxStDrawSurf>
==============
*/

GfxStDrawSurf *__fastcall R_ST_AllocFromSharedArray<0,GfxStDrawSurf>(GfxStDrawSurf *resourceArray, volatile int *arrayCount, unsigned int arrayCapacity, GfxWarningType warningType, unsigned int allocCount, unsigned int *indexOut)
{
  return ??$R_ST_AllocFromSharedArray@$0A@UGfxStDrawSurf@@@@YAPEAUGfxStDrawSurf@@PEAU0@AECJIW4GfxWarningType@@IAEAI@Z(resourceArray, arrayCount, arrayCapacity, warningType, allocCount, indexOut);
}

/*
==============
R_ST_GetNodeAtLocation
==============
*/

const StTerrainNode *__fastcall R_ST_GetNodeAtLocation(const StDiskTerrainSurface *surface, unsigned int tileX, unsigned int tileY, float tileWidth)
{
  return ?R_ST_GetNodeAtLocation@@YAAEBUStTerrainNode@@AEBUStDiskTerrainSurface@@IIM@Z(surface, tileX, tileY, tileWidth);
}

/*
==============
R_ST_SetupTileDataForSurface
==============
*/

void __fastcall R_ST_SetupTileDataForSurface(const StDiskTerrainSurface *surface, const vec3_t *cameraWorldPosition, bool setFrameCount, HLSL::TerrainTileDataCodeCS *tileDataOut)
{
  ?R_ST_SetupTileDataForSurface@@YAXAEBUStDiskTerrainSurface@@AEBTvec3_t@@_NAEAUTerrainTileDataCodeCS@HLSL@@@Z(surface, cameraWorldPosition, setFrameCount, tileDataOut);
}

/*
==============
R_ST_SetupTileDataForSurface
==============
*/

void __fastcall R_ST_SetupTileDataForSurface(const StDiskTerrainSurface *surface, const vec3_t *cameraWorldPosition, bool setFrameCount, HLSL::TerrainTileDataCode *tileDataOut)
{
  ?R_ST_SetupTileDataForSurface@@YAXAEBUStDiskTerrainSurface@@AEBTvec3_t@@_NAEAUTerrainTileDataCode@HLSL@@@Z(surface, cameraWorldPosition, setFrameCount, tileDataOut);
}

/*
==============
R_ST_SetupMaterialLayer
==============
*/

void __fastcall R_ST_SetupMaterialLayer(const StDiskTerrainSurface *surface, const StTerrainMaterialLayer *layer, HLSL::TerrainLayerDataCode *layerOut)
{
  ?R_ST_SetupMaterialLayer@@YAXAEBUStDiskTerrainSurface@@AEBUStTerrainMaterialLayer@@AEAUTerrainLayerDataCode@HLSL@@@Z(surface, layer, layerOut);
}

/*
==============
R_ST_FillMaterialLayerBaseMipsAvailable
==============
*/

void __fastcall R_ST_FillMaterialLayerBaseMipsAvailable(const StTerrainMaterialLayer *materialLayer, unsigned __int8 *layerMaterialResourceAvailableMask)
{
  ?R_ST_FillMaterialLayerBaseMipsAvailable@@YAXAEBUStTerrainMaterialLayer@@AEAE@Z(materialLayer, layerMaterialResourceAvailableMask);
}

/*
==============
R_ST_IsAnyGeoAvailableForSurface
==============
*/

bool __fastcall R_ST_IsAnyGeoAvailableForSurface(const StDiskTerrainSurface *surface, TerrainSurfaceDataInfo *terrainSurfaceDataInfo)
{
  return ?R_ST_IsAnyGeoAvailableForSurface@@YA_NAEBUStDiskTerrainSurface@@AEAUTerrainSurfaceDataInfo@@@Z(surface, terrainSurfaceDataInfo);
}

/*
==============
R_ST_IssueGeoMapStreamRequestsIfNecessaryToDrawNode
==============
*/

void __fastcall R_ST_IssueGeoMapStreamRequestsIfNecessaryToDrawNode(const StDiskTerrainSurface *surface, const StTerrainNode *node)
{
  ?R_ST_IssueGeoMapStreamRequestsIfNecessaryToDrawNode@@YAXAEBUStDiskTerrainSurface@@AEBUStTerrainNode@@@Z(surface, node);
}

/*
==============
R_ST_SetCodeResources
==============
*/

void __fastcall R_ST_SetCodeResources(GfxCmdBufInput *input)
{
  ?R_ST_SetCodeResources@@YAXAEAUGfxCmdBufInput@@@Z(input);
}

/*
==============
R_ST_InitGfxWrappedBuffer<HLSL::TerrainTileData>
==============
*/

void __fastcall R_ST_InitGfxWrappedBuffer<HLSL::TerrainTileData>(GfxWrappedBuffer *buffer, unsigned int elementCount, const char *bufferName)
{
  ??$R_ST_InitGfxWrappedBuffer@UTerrainTileData@HLSL@@@@YAXAEAUGfxWrappedBuffer@@IPEBD@Z(buffer, elementCount, bufferName);
}

/*
==============
R_ST_AddAllSurfacesCamera
==============
*/

void __fastcall R_ST_AddAllSurfacesCamera(const void *const cmd)
{
  ?R_ST_AddAllSurfacesCamera@@YAXQEBX@Z(cmd);
}

/*
==============
R_ST_InitGfxWrappedBuffer<HLSL::TerrainLayerData>
==============
*/

void __fastcall R_ST_InitGfxWrappedBuffer<HLSL::TerrainLayerData>(GfxWrappedBuffer *buffer, unsigned int elementCount, const char *bufferName)
{
  ??$R_ST_InitGfxWrappedBuffer@UTerrainLayerData@HLSL@@@@YAXAEAUGfxWrappedBuffer@@IPEBD@Z(buffer, elementCount, bufferName);
}

/*
==============
R_ST_QueryAndClearSurfaceBaseResourceStreamRequest
==============
*/

bool __fastcall R_ST_QueryAndClearSurfaceBaseResourceStreamRequest(const StDiskTerrainSurface *surface, StSurfaceStreamRequestResource resource)
{
  return ?R_ST_QueryAndClearSurfaceBaseResourceStreamRequest@@YA_NAEBUStDiskTerrainSurface@@W4StSurfaceStreamRequestResource@@@Z(surface, resource);
}

/*
==============
R_ST_AddAllSurfacesSunShadow
==============
*/

void __fastcall R_ST_AddAllSurfacesSunShadow(const void *const cmd)
{
  ?R_ST_AddAllSurfacesSunShadow@@YAXQEBX@Z(cmd);
}

/*
==============
CopyTerrainLayerDataCode<HLSL::TerrainLayerDataCodeCS>
==============
*/

void __fastcall CopyTerrainLayerDataCode<HLSL::TerrainLayerDataCodeCS>(const StTerrainMaterialLayer *layer, HLSL::TerrainLayerDataCodeCS *layerOut)
{
  ??$CopyTerrainLayerDataCode@UTerrainLayerDataCodeCS@HLSL@@@@YAXAEBUStTerrainMaterialLayer@@AEAUTerrainLayerDataCodeCS@HLSL@@@Z(layer, layerOut);
}

/*
==============
R_ST_Stream_UpdateMaterialDistances
==============
*/

unsigned int __fastcall R_ST_Stream_UpdateMaterialDistances(const StDiskTerrainSurface *surface, const StreamUpdateMultiView *multiView, float *tileMaterialDistancesSq)
{
  return ?R_ST_Stream_UpdateMaterialDistances@@YAIAEBUStDiskTerrainSurface@@AEBUStreamUpdateMultiView@@QEAM@Z(surface, multiView, tileMaterialDistancesSq);
}

/*
==============
R_ST_NodeRequiresCutoutmap
==============
*/

bool __fastcall R_ST_NodeRequiresCutoutmap(const StTerrainNode *node)
{
  return ?R_ST_NodeRequiresCutoutmap@@YA_NAEBUStTerrainNode@@@Z(node);
}

/*
==============
R_ST_GeomStreamTerrainSurface
==============
*/

void __fastcall R_ST_GeomStreamTerrainSurface(const StDiskTerrainSurface *surface, const vec3_t *dpvsCamPos, float zoomFactor)
{
  ?R_ST_GeomStreamTerrainSurface@@YAXAEBUStDiskTerrainSurface@@AEBTvec3_t@@M@Z(surface, dpvsCamPos, zoomFactor);
}

/*
==============
CopyTerrainLayerDataCode<HLSL::TerrainLayerDataCode>
==============
*/
void CopyTerrainLayerDataCode<HLSL::TerrainLayerDataCode>(const StTerrainMaterialLayer *layer, HLSL::TerrainLayerDataCode *layerOut)
{
  __asm
  {
    vmovups xmm0, xmmword ptr [rcx+40h]
    vmovups xmmword ptr [rdx], xmm0
    vmovups xmm1, xmmword ptr [rcx+50h]
    vmovups xmmword ptr [rdx+10h], xmm1
    vmovups xmm0, xmmword ptr [rcx+60h]
    vmovups xmmword ptr [rdx+20h], xmm0
    vmovups xmm1, xmmword ptr [rcx+70h]
    vmovups xmmword ptr [rdx+30h], xmm1
    vmovups xmm0, xmmword ptr [rcx+80h]
    vmovups xmmword ptr [rdx+40h], xmm0
    vmovups xmm1, xmmword ptr [rcx+90h]
    vmovups xmmword ptr [rdx+50h], xmm1
    vmovups xmm0, xmmword ptr [rcx+0A0h]
    vmovups xmmword ptr [rdx+60h], xmm0
    vmovups xmm0, xmmword ptr [rcx+0B0h]
    vmovups xmmword ptr [rdx+70h], xmm0
    vmovups xmm1, xmmword ptr [rcx+0C0h]
    vmovups xmmword ptr [rdx+80h], xmm1
    vmovups xmm0, xmmword ptr [rcx+0D0h]
    vmovups xmmword ptr [rdx+90h], xmm0
  }
}

/*
==============
CopyTerrainLayerDataCode<HLSL::TerrainLayerDataCodeBindlessCS>
==============
*/
void CopyTerrainLayerDataCode<HLSL::TerrainLayerDataCodeBindlessCS>(const StTerrainMaterialLayer *layer, HLSL::TerrainLayerDataCodeBindlessCS *layerOut)
{
  layerOut->textureTransform[0] = *(HLSL::hlsl_2_t<float,vec2_t> *)layer->layerData.textureTransform[0].v;
  layerOut->textureTransform[1] = *(HLSL::hlsl_2_t<float,vec2_t> *)layer->layerData.textureTransform[1].v;
  layerOut->flags = layer->layerData.flags;
  layerOut->textureScale = layer->layerData.textureScale.v[0];
  layerOut->alphaRevealSoftEdge = layer->layerData.alphaRevealSoftEdge;
  layerOut->normalMapPackedScaleBias = layer->layerData.normalMapPackedScaleBias;
  layerOut->displacementScale = layer->layerData.displacementScale;
}

/*
==============
CopyTerrainLayerDataCode<HLSL::TerrainLayerDataCodeCS>
==============
*/
void CopyTerrainLayerDataCode<HLSL::TerrainLayerDataCodeCS>(const StTerrainMaterialLayer *layer, HLSL::TerrainLayerDataCodeCS *layerOut)
{
  layerOut->textureTransform[0] = *(HLSL::hlsl_2_t<float,vec2_t> *)layer->layerData.textureTransform[0].v;
  layerOut->textureTransform[1] = *(HLSL::hlsl_2_t<float,vec2_t> *)layer->layerData.textureTransform[1].v;
  layerOut->flags = layer->layerData.flags;
  layerOut->textureScale = layer->layerData.textureScale.v[0];
  layerOut->alphaRevealSoftEdge = layer->layerData.alphaRevealSoftEdge;
  layerOut->normalMapPackedScaleBias = layer->layerData.normalMapPackedScaleBias;
  layerOut->displacementScale = layer->layerData.displacementScale;
}

/*
==============
R_ST_AllocFromSharedArray<1,HLSL::TerrainTileData>
==============
*/
HLSL::TerrainTileData *R_ST_AllocFromSharedArray<1,HLSL::TerrainTileData>(HLSL::TerrainTileData *resourceArray, volatile int *arrayCount, unsigned int arrayCapacity, GfxWarningType warningType, unsigned int allocCount, unsigned int *indexOut)
{
  unsigned int v10; 

  if ( !resourceArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 561, ASSERT_TYPE_ASSERT, "(resourceArray)", (const char *)&queryFormat, "resourceArray") )
    __debugbreak();
  if ( !allocCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 562, ASSERT_TYPE_ASSERT, "(allocCount > 0)", (const char *)&queryFormat, "allocCount > 0") )
    __debugbreak();
  if ( ((unsigned __int8)arrayCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)arrayCount) )
    __debugbreak();
  v10 = _InterlockedExchangeAdd(arrayCount, allocCount);
  *indexOut = v10;
  if ( v10 + allocCount < arrayCapacity )
    return &resourceArray[v10];
  *indexOut = 0;
  R_WarnOncePerFrame(warningType, arrayCapacity);
  Sys_InterlockedExchangeAdd(arrayCount, -allocCount);
  return 0i64;
}

/*
==============
R_ST_AllocFromSharedArray<0,GfxStDrawSurf>
==============
*/
GfxStDrawSurf *R_ST_AllocFromSharedArray<0,GfxStDrawSurf>(GfxStDrawSurf *resourceArray, volatile int *arrayCount, unsigned int arrayCapacity, GfxWarningType warningType, unsigned int allocCount, unsigned int *indexOut)
{
  GfxStDrawSurf *result; 

  if ( !resourceArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 561, ASSERT_TYPE_ASSERT, "(resourceArray)", (const char *)&queryFormat, "resourceArray") )
    __debugbreak();
  if ( !allocCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 562, ASSERT_TYPE_ASSERT, "(allocCount > 0)", (const char *)&queryFormat, "allocCount > 0") )
    __debugbreak();
  if ( allocCount + *arrayCount > arrayCapacity )
  {
    *indexOut = 0;
    R_WarnOncePerFrame(warningType, arrayCapacity);
    return 0i64;
  }
  else
  {
    *indexOut = *arrayCount;
    result = &resourceArray[*(int *)arrayCount];
    *arrayCount += allocCount;
  }
  return result;
}

/*
==============
R_ST_AllocFromSharedArray<0,HLSL::TerrainLayerData>
==============
*/
HLSL::TerrainLayerData *R_ST_AllocFromSharedArray<0,HLSL::TerrainLayerData>(HLSL::TerrainLayerData *resourceArray, volatile int *arrayCount, unsigned int arrayCapacity, GfxWarningType warningType, unsigned int allocCount, unsigned int *indexOut)
{
  HLSL::TerrainLayerData *result; 

  if ( !resourceArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 561, ASSERT_TYPE_ASSERT, "(resourceArray)", (const char *)&queryFormat, "resourceArray") )
    __debugbreak();
  if ( !allocCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 562, ASSERT_TYPE_ASSERT, "(allocCount > 0)", (const char *)&queryFormat, "allocCount > 0") )
    __debugbreak();
  if ( allocCount + *arrayCount > arrayCapacity )
  {
    *indexOut = 0;
    R_WarnOncePerFrame(warningType, arrayCapacity);
    return 0i64;
  }
  else
  {
    *indexOut = *arrayCount;
    result = &resourceArray[*(int *)arrayCount];
    *arrayCount += allocCount;
  }
  return result;
}

/*
==============
R_ST_InitGfxWrappedBuffer<HLSL::TerrainLayerData>
==============
*/
void R_ST_InitGfxWrappedBuffer<HLSL::TerrainLayerData>(GfxWrappedBuffer *buffer, unsigned int elementCount, const char *bufferName)
{
  if ( buffer->data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 872, ASSERT_TYPE_ASSERT, "(buffer.data == nullptr)", (const char *)&queryFormat, "buffer.data == nullptr") )
    __debugbreak();
  if ( !elementCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 873, ASSERT_TYPE_ASSERT, "(elementCount > 0)", (const char *)&queryFormat, "elementCount > 0") )
    __debugbreak();
  if ( !bufferName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 874, ASSERT_TYPE_ASSERT, "(bufferName)", (const char *)&queryFormat, "bufferName") )
    __debugbreak();
  R_CreateGfxWrappedBuffer(buffer, GfxWrappedBuffer_Structured, 108, elementCount, GFX_DATA_FORMAT_R32_UINT, 0xCu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, bufferName);
}

/*
==============
R_ST_InitGfxWrappedBuffer<HLSL::TerrainTileData>
==============
*/
void R_ST_InitGfxWrappedBuffer<HLSL::TerrainTileData>(GfxWrappedBuffer *buffer, unsigned int elementCount, const char *bufferName)
{
  if ( buffer->data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 872, ASSERT_TYPE_ASSERT, "(buffer.data == nullptr)", (const char *)&queryFormat, "buffer.data == nullptr") )
    __debugbreak();
  if ( !elementCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 873, ASSERT_TYPE_ASSERT, "(elementCount > 0)", (const char *)&queryFormat, "elementCount > 0") )
    __debugbreak();
  if ( !bufferName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 874, ASSERT_TYPE_ASSERT, "(bufferName)", (const char *)&queryFormat, "bufferName") )
    __debugbreak();
  R_CreateGfxWrappedBuffer(buffer, GfxWrappedBuffer_Structured, 172, elementCount, GFX_DATA_FORMAT_R32_UINT, 0xCu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, bufferName);
}

/*
==============
R_ST_SetupMaterialLayerInternal<HLSL::TerrainLayerDataCode>
==============
*/
void R_ST_SetupMaterialLayerInternal<HLSL::TerrainLayerDataCode>(const StDiskTerrainSurface *surface, const StTerrainMaterialLayer *layer, HLSL::TerrainLayerDataCode *layerOut)
{
  unsigned int layerMaskMapIdxsCount; 
  HLSL::TerrainLayerDataCode *v15; 
  const StTerrainMaterialLayer *v16; 
  unsigned __int16 *materialTextureIdxs; 
  unsigned __int16 v18; 
  unsigned __int16 v19; 
  unsigned __int16 v20; 
  unsigned __int16 v21; 

  __asm
  {
    vmovups xmm0, xmmword ptr [rdx+40h]
    vmovups xmmword ptr [r8], xmm0
    vmovups xmm1, xmmword ptr [rdx+50h]
    vmovups xmmword ptr [r8+10h], xmm1
    vmovups xmm0, xmmword ptr [rdx+60h]
    vmovups xmmword ptr [r8+20h], xmm0
    vmovups xmm1, xmmword ptr [rdx+70h]
    vmovups xmmword ptr [r8+30h], xmm1
    vmovups xmm0, xmmword ptr [rdx+80h]
    vmovups xmmword ptr [r8+40h], xmm0
    vmovups xmm1, xmmword ptr [rdx+90h]
    vmovups xmmword ptr [r8+50h], xmm1
    vmovups xmm0, xmmword ptr [rdx+0A0h]
    vmovups xmmword ptr [r8+60h], xmm0
    vmovups xmm0, xmmword ptr [rdx+0B0h]
    vmovups xmmword ptr [r8+70h], xmm0
    vmovups xmm1, xmmword ptr [rdx+0C0h]
    vmovups xmmword ptr [r8+80h], xmm1
    vmovups xmm0, xmmword ptr [rdx+0D0h]
    vmovups xmmword ptr [r8+90h], xmm0
  }
  layerMaskMapIdxsCount = surface->layerMaskMapIdxsCount;
  v15 = layerOut;
  v16 = layer;
  if ( layer->layer >= layerMaskMapIdxsCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1116, ASSERT_TYPE_ASSERT, "(unsigned)( layer.layer ) < (unsigned)( surface.layerMaskMapIdxsCount )", "layer.layer doesn't index surface.layerMaskMapIdxsCount\n\t%i not in [0, %i)", layer->layer, layerMaskMapIdxsCount) )
    __debugbreak();
  v15->alphaLayer = surface->layerMaskMapIdxs[v16->layer];
  materialTextureIdxs = v16->materialTextureIdxs;
  v18 = *materialTextureIdxs;
  v19 = materialTextureIdxs[1];
  v20 = materialTextureIdxs[2];
  v21 = materialTextureIdxs[3];
  v15->colorMap = R_ST_GetBindlessIndexFromFlattenedIndex(*materialTextureIdxs);
  v15->normalMap = R_ST_GetBindlessIndexFromFlattenedIndex(v19);
  v15->revealMap = R_ST_GetBindlessIndexFromFlattenedIndex(v20);
  v15->displacementMap = R_ST_GetBindlessIndexFromFlattenedIndex(v21);
  if ( v19 != 0xFFFF )
    v15->normalMapPackedScaleBias = s_stGlob.terrain->flattenedImages[v19]->semanticSpecific.albedoMapScaleBias;
  if ( v18 == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1171, ASSERT_TYPE_ASSERT, "(albedoMapIndex != 0xFFFF)", (const char *)&queryFormat, "albedoMapIndex != TERRAIN_TEXTURE_INDEX_INVALID") )
    __debugbreak();
  v15->albedoMapPackedScaleBias = s_stGlob.terrain->flattenedImages[v18]->semanticSpecific.albedoMapScaleBias;
}

/*
==============
R_ST_SetupMaterialLayerInternal<HLSL::TerrainLayerDataCodeBindlessCS>
==============
*/
void R_ST_SetupMaterialLayerInternal<HLSL::TerrainLayerDataCodeBindlessCS>(const StDiskTerrainSurface *surface, const StTerrainMaterialLayer *layer, HLSL::TerrainLayerDataCodeBindlessCS *layerOut)
{
  unsigned int layerMaskMapIdxsCount; 
  unsigned __int16 *materialTextureIdxs; 
  unsigned int v8; 
  unsigned __int16 v9; 
  unsigned int v10; 
  unsigned __int16 v11; 
  unsigned __int16 v12; 
  bool v13; 
  unsigned int v14; 
  bool v15; 
  unsigned int v16; 
  bool v17; 
  unsigned int v18; 
  bool v19; 

  layerOut->textureTransform[0].v[0] = layer->layerData.textureTransform[0].v[0];
  layerOut->textureTransform[0].v[1] = layer->layerData.textureTransform[0].v[1];
  layerOut->textureTransform[1] = *(HLSL::hlsl_2_t<float,vec2_t> *)layer->layerData.textureTransform[1].v;
  layerOut->flags = layer->layerData.flags;
  layerOut->textureScale = layer->layerData.textureScale.v[0];
  layerOut->alphaRevealSoftEdge = layer->layerData.alphaRevealSoftEdge;
  layerOut->normalMapPackedScaleBias = layer->layerData.normalMapPackedScaleBias;
  layerOut->displacementScale = layer->layerData.displacementScale;
  layerMaskMapIdxsCount = surface->layerMaskMapIdxsCount;
  if ( layer->layer >= layerMaskMapIdxsCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1116, ASSERT_TYPE_ASSERT, "(unsigned)( layer.layer ) < (unsigned)( surface.layerMaskMapIdxsCount )", "layer.layer doesn't index surface.layerMaskMapIdxsCount\n\t%i not in [0, %i)", layer->layer, layerMaskMapIdxsCount) )
    __debugbreak();
  layerOut->alphaLayer = surface->layerMaskMapIdxs[layer->layer];
  materialTextureIdxs = layer->materialTextureIdxs;
  v8 = *materialTextureIdxs;
  v9 = materialTextureIdxs[1];
  v10 = v8;
  v11 = materialTextureIdxs[2];
  v12 = materialTextureIdxs[3];
  if ( v8 >= 0x3FF )
  {
    v13 = v8 == 0xFFFF;
    if ( v8 == 0xFFFF )
      goto LABEL_9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1110, ASSERT_TYPE_SANITY, "( textureIndex < 0x3FF || textureIndex == 0xFFFF )", (const char *)&queryFormat, "textureIndex < TERRAIN_MAX_BINDLESS_TEXTURES || textureIndex == TERRAIN_TEXTURE_INDEX_INVALID") )
      __debugbreak();
  }
  v13 = v8 == 0xFFFF;
LABEL_9:
  if ( v13 )
    v10 = 1023;
  layerOut->colorMap = v10;
  v14 = v9;
  if ( v9 >= 0x3FFu )
  {
    v15 = v9 == 0xFFFF;
    if ( v9 == 0xFFFF )
      goto LABEL_16;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1110, ASSERT_TYPE_SANITY, "( textureIndex < 0x3FF || textureIndex == 0xFFFF )", (const char *)&queryFormat, "textureIndex < TERRAIN_MAX_BINDLESS_TEXTURES || textureIndex == TERRAIN_TEXTURE_INDEX_INVALID") )
      __debugbreak();
  }
  v15 = v9 == 0xFFFF;
LABEL_16:
  if ( v15 )
    v14 = 1023;
  layerOut->normalMap = v14;
  v16 = v11;
  if ( v11 >= 0x3FFu )
  {
    v17 = v11 == 0xFFFF;
    if ( v11 == 0xFFFF )
      goto LABEL_23;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1110, ASSERT_TYPE_SANITY, "( textureIndex < 0x3FF || textureIndex == 0xFFFF )", (const char *)&queryFormat, "textureIndex < TERRAIN_MAX_BINDLESS_TEXTURES || textureIndex == TERRAIN_TEXTURE_INDEX_INVALID") )
      __debugbreak();
  }
  v17 = v11 == 0xFFFF;
LABEL_23:
  if ( v17 )
    v16 = 1023;
  layerOut->revealMap = v16;
  v18 = v12;
  if ( v12 >= 0x3FFu )
  {
    v19 = v12 == 0xFFFF;
    if ( v12 == 0xFFFF )
      goto LABEL_30;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1110, ASSERT_TYPE_SANITY, "( textureIndex < 0x3FF || textureIndex == 0xFFFF )", (const char *)&queryFormat, "textureIndex < TERRAIN_MAX_BINDLESS_TEXTURES || textureIndex == TERRAIN_TEXTURE_INDEX_INVALID") )
      __debugbreak();
  }
  v19 = v12 == 0xFFFF;
LABEL_30:
  if ( v19 )
    v18 = 1023;
  layerOut->displacementMap = v18;
  if ( v9 != 0xFFFF )
    layerOut->normalMapPackedScaleBias = s_stGlob.terrain->flattenedImages[v9]->semanticSpecific.albedoMapScaleBias;
  if ( (_WORD)v8 == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1171, ASSERT_TYPE_ASSERT, "(albedoMapIndex != 0xFFFF)", (const char *)&queryFormat, "albedoMapIndex != TERRAIN_TEXTURE_INDEX_INVALID") )
    __debugbreak();
  layerOut->albedoMapPackedScaleBias = s_stGlob.terrain->flattenedImages[(unsigned __int16)v8]->semanticSpecific.albedoMapScaleBias;
}

/*
==============
R_ST_SetupMaterialLayerInternal<HLSL::TerrainLayerDataCodeCS>
==============
*/
void R_ST_SetupMaterialLayerInternal<HLSL::TerrainLayerDataCodeCS>(const StDiskTerrainSurface *surface, const StTerrainMaterialLayer *layer, HLSL::TerrainLayerDataCodeCS *layerOut)
{
  unsigned int layerMaskMapIdxsCount; 
  unsigned __int16 *materialTextureIdxs; 
  unsigned __int16 v8; 
  unsigned __int16 v9; 
  unsigned __int16 v10; 
  unsigned __int16 v11; 

  layerOut->textureTransform[0].v[0] = layer->layerData.textureTransform[0].v[0];
  layerOut->textureTransform[0].v[1] = layer->layerData.textureTransform[0].v[1];
  layerOut->textureTransform[1] = *(HLSL::hlsl_2_t<float,vec2_t> *)layer->layerData.textureTransform[1].v;
  layerOut->flags = layer->layerData.flags;
  layerOut->textureScale = layer->layerData.textureScale.v[0];
  layerOut->alphaRevealSoftEdge = layer->layerData.alphaRevealSoftEdge;
  layerOut->normalMapPackedScaleBias = layer->layerData.normalMapPackedScaleBias;
  layerOut->displacementScale = layer->layerData.displacementScale;
  layerMaskMapIdxsCount = surface->layerMaskMapIdxsCount;
  if ( layer->layer >= layerMaskMapIdxsCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1116, ASSERT_TYPE_ASSERT, "(unsigned)( layer.layer ) < (unsigned)( surface.layerMaskMapIdxsCount )", "layer.layer doesn't index surface.layerMaskMapIdxsCount\n\t%i not in [0, %i)", layer->layer, layerMaskMapIdxsCount) )
    __debugbreak();
  layerOut->alphaLayer = surface->layerMaskMapIdxs[layer->layer];
  materialTextureIdxs = layer->materialTextureIdxs;
  v8 = *materialTextureIdxs;
  v9 = materialTextureIdxs[1];
  v10 = materialTextureIdxs[2];
  v11 = materialTextureIdxs[3];
  layerOut->colorMap = R_ST_GetBindlessIndexFromFlattenedIndex(*materialTextureIdxs);
  layerOut->normalMap = R_ST_GetBindlessIndexFromFlattenedIndex(v9);
  layerOut->revealMap = R_ST_GetBindlessIndexFromFlattenedIndex(v10);
  layerOut->displacementMap = R_ST_GetBindlessIndexFromFlattenedIndex(v11);
  if ( v9 != 0xFFFF )
    layerOut->normalMapPackedScaleBias = s_stGlob.terrain->flattenedImages[v9]->semanticSpecific.albedoMapScaleBias;
  if ( v8 == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1171, ASSERT_TYPE_ASSERT, "(albedoMapIndex != 0xFFFF)", (const char *)&queryFormat, "albedoMapIndex != TERRAIN_TEXTURE_INDEX_INVALID") )
    __debugbreak();
  layerOut->albedoMapPackedScaleBias = s_stGlob.terrain->flattenedImages[v8]->semanticSpecific.albedoMapScaleBias;
}

/*
==============
R_ST_SetupTileDataForSurfaceInternal<HLSL::TerrainTileDataCode>
==============
*/
void R_ST_SetupTileDataForSurfaceInternal<HLSL::TerrainTileDataCode>(const StDiskTerrainSurface *surface, const vec3_t *cameraWorldPosition, bool setFrameCount, HLSL::TerrainTileDataCode *tileDataOut)
{
  char v20[208]; 

  _RDI = surface;
  _RSI = tileDataOut;
  memset_0(v20, 0, sizeof(v20));
  _RAX = v20;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymm1, ymmword ptr [rax+80h]
    vmovups ymmword ptr [rsi], ymm0
    vmovups ymm0, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rsi+20h], ymm0
    vmovups ymm0, ymmword ptr [rax+40h]
    vmovups ymmword ptr [rsi+40h], ymm0
    vmovups ymm0, ymmword ptr [rax+60h]
    vmovups ymmword ptr [rsi+60h], ymm0
    vmovups ymmword ptr [rsi+80h], ymm1
    vmovups ymm1, ymmword ptr [rax+0A0h]
    vmovups ymmword ptr [rsi+0A0h], ymm1
    vmovups xmm1, xmmword ptr [rax+0C0h]
    vmovups xmmword ptr [rsi+0C0h], xmm1
    vmovss  xmm0, dword ptr [rdi+84h]
    vmulss  xmm2, xmm0, cs:__real@40000000
    vmovss  dword ptr [rsi+14h], xmm2
    vmovss  xmm1, dword ptr [rdi+70h]
    vsubss  xmm0, xmm1, dword ptr [rbx]
    vmovss  dword ptr [rsi+34h], xmm0
    vmovss  xmm2, dword ptr [rdi+74h]
    vsubss  xmm1, xmm2, dword ptr [rbx+4]
    vmovss  dword ptr [rsi+38h], xmm1
  }
  _RSI->surfaceMapSetIndex = _RDI->surfaceMapSetIndex;
}

/*
==============
R_ST_SetupTileDataForSurfaceInternal<HLSL::TerrainTileDataCodeCS>
==============
*/
void R_ST_SetupTileDataForSurfaceInternal<HLSL::TerrainTileDataCodeCS>(const StDiskTerrainSurface *surface, const vec3_t *cameraWorldPosition, bool setFrameCount, HLSL::TerrainTileDataCodeCS *tileDataOut)
{
  __int128 v12; 
  __int64 v13; 

  v12 = 0ui64;
  __asm
  {
    vmovups xmm0, [rsp+28h+var_28]
    vmovups xmmword ptr [r9], xmm0
  }
  v13 = 0i64;
  __asm
  {
    vmovsd  xmm1, [rsp+28h+var_18]
    vmovsd  qword ptr [r9+10h], xmm1
    vmovss  xmm0, dword ptr [rcx+84h]
    vmulss  xmm2, xmm0, cs:__real@40000000
    vmovss  dword ptr [r9+8], xmm2
    vmovss  xmm1, dword ptr [rcx+70h]
    vsubss  xmm0, xmm1, dword ptr [rdx]
    vmovss  dword ptr [r9+0Ch], xmm0
    vmovss  xmm2, dword ptr [rcx+74h]
    vsubss  xmm1, xmm2, dword ptr [rdx+4]
    vmovss  dword ptr [r9+10h], xmm1
  }
  tileDataOut->surfaceMapSetIndex = surface->surfaceMapSetIndex;
}

/*
==============
RB_ST_BackEndFrameData
==============
*/
StFrameData *RB_ST_BackEndFrameData(const GfxBackEndData *backEndData)
{
  __int64 superTerrainFrameDataIndex; 

  superTerrainFrameDataIndex = backEndData->superTerrainFrameDataIndex;
  if ( (unsigned int)superTerrainFrameDataIndex >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 845, ASSERT_TYPE_ASSERT, "(unsigned)( frameDataIndex ) < (unsigned)( ST_FRAME_DATA_COUNT )", "frameDataIndex doesn't index ST_FRAME_DATA_COUNT\n\t%i not in [0, %i)", backEndData->superTerrainFrameDataIndex, 2) )
    __debugbreak();
  return &s_stGlob.frameData[superTerrainFrameDataIndex];
}

/*
==============
RB_ST_UpdateFrameDataResources
==============
*/
void RB_ST_UpdateFrameDataResources(GfxCmdBufState *state, const GfxBackEndData *backEndData)
{
  StFrameData *v2; 

  if ( s_stGlob.terrain )
  {
    v2 = RB_ST_BackEndFrameData(backEndData);
    R_FlushDescriptorTable(&v2->bindlessTable);
  }
}

/*
==============
R_ST_AddAllSurfacesCachedSunShadow
==============
*/
void R_ST_AddAllSurfacesCachedSunShadow(const StTerrain *terrain, const GfxSunShadow *sunShadow, GfxViewInfo *viewInfo, unsigned int *uncachedMapsToDrawInOut, StCachedFrontEndDvars *cachedDvars, StFrameData *frameData)
{
  unsigned int *v6; 
  const GfxSunShadow *v7; 
  unsigned int firstCachedSunShadowPartition; 
  unsigned int v9; 
  __int64 v10; 
  __int64 v11; 
  unsigned int v12; 
  unsigned int v13; 
  GfxCachedSunShadowOverlap *v14; 
  unsigned int v15; 
  __int64 v16; 
  __int64 v17; 
  StCachedFrontEndDvars *v18; 
  const StTerrain *v19; 
  StCachedSunShadowCellList *v20; 
  __int64 v21; 
  StCachedSunShadowCellList cellList; 

  v6 = uncachedMapsToDrawInOut;
  v7 = sunShadow;
  if ( viewInfo->useCachedSunShadow )
  {
    firstCachedSunShadowPartition = rg.firstCachedSunShadowPartition;
    v9 = 0;
    cellList.cellCount = 0;
    if ( rg.firstCachedSunShadowPartition > (unsigned int)rg.lastCachedSunShadowPartition )
    {
      v18 = cachedDvars;
      v19 = terrain;
    }
    else
    {
      do
      {
        if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 383, ASSERT_TYPE_ASSERT, "(sunShadow)", (const char *)&queryFormat, "sunShadow") )
          __debugbreak();
        if ( !R_IsCachedSunShadowPartition(v7, firstCachedSunShadowPartition) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 384, ASSERT_TYPE_ASSERT, "(R_IsCachedSunShadowPartition( sunShadow, partitionIndex ))", (const char *)&queryFormat, "R_IsCachedSunShadowPartition( sunShadow, partitionIndex )") )
          __debugbreak();
        v10 = firstCachedSunShadowPartition - v7->firstCachedSunShadowPartition;
        v11 = (__int64)&v7->partitionCache[v10];
        if ( (const GfxSunShadow *)((char *)v7 + 8656 * v10) == (const GfxSunShadow *)-2480i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2663, ASSERT_TYPE_ASSERT, "(partitionCache)", (const char *)&queryFormat, "partitionCache") )
          __debugbreak();
        v12 = *(_DWORD *)(v11 + 4);
        if ( v12 )
        {
          if ( firstCachedSunShadowPartition >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2148, ASSERT_TYPE_ASSERT, "(partitionIndex < R_SUNSHADOW_OPAQUE_PARTITION_COUNT && partitionIndex < ST_SUN_SHADOW_MAP_BITS_BIT_COUNT)", (const char *)&queryFormat, "partitionIndex < R_SUNSHADOW_OPAQUE_PARTITION_COUNT && partitionIndex < ST_SUN_SHADOW_MAP_BITS_BIT_COUNT") )
            __debugbreak();
          v13 = 0;
          *v6 &= ~(1 << firstCachedSunShadowPartition);
          v14 = (GfxCachedSunShadowOverlap *)(v11 + 16);
          do
          {
            if ( v14->gen )
            {
              if ( (firstCachedSunShadowPartition >= 3 || v13 >= 0xA) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2173, ASSERT_TYPE_ASSERT, "(partitionIndex < R_SUNSHADOW_OPAQUE_PARTITION_COUNT && cellIndex < ( 9 + 1 ))", (const char *)&queryFormat, "partitionIndex < R_SUNSHADOW_OPAQUE_PARTITION_COUNT && cellIndex < CACHED_SUN_SHADOW_CELL_MAX_OVERLAP") )
                __debugbreak();
              v15 = v13 + 10 * (firstCachedSunShadowPartition - rg.firstCachedSunShadowPartition) + 3;
              if ( v15 >= 0x17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2175, ASSERT_TYPE_ASSERT, "(shift < ST_SUN_SHADOW_MAP_BITS_BIT_COUNT)", (const char *)&queryFormat, "shift < ST_SUN_SHADOW_MAP_BITS_BIT_COUNT") )
                __debugbreak();
              v9 |= 1 << v15;
            }
            if ( cellList.cellCount >= 0x14 )
            {
              LODWORD(v21) = 20;
              LODWORD(v20) = cellList.cellCount;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2681, ASSERT_TYPE_ASSERT, "(unsigned)( cellList.cellCount ) < (unsigned)( ( sizeof( *array_counter( cellList.cells ) ) + 0 ) )", "cellList.cellCount doesn't index cellList.cells\n\t%i not in [0, %i)", v20, v21) )
                __debugbreak();
            }
            v16 = cellList.cellCount++;
            v17 = v16;
            cellList.cells[v17].overlap = v14++;
            cellList.cells[v17].cellIdx = v13++;
            cellList.cells[v17].nodeCount = 0;
            cellList.cells[v17].partitionIdx = firstCachedSunShadowPartition;
          }
          while ( v13 < v12 );
          v7 = sunShadow;
          v6 = uncachedMapsToDrawInOut;
        }
        ++firstCachedSunShadowPartition;
      }
      while ( firstCachedSunShadowPartition <= rg.lastCachedSunShadowPartition );
      v18 = cachedDvars;
      v19 = terrain;
      if ( v9 )
        R_ST_InitCachedSunShadowData(terrain, v7, cachedDvars, &cellList, v9);
    }
    R_ST_UpdateCachedSunShadowData(v19, v7, viewInfo, v18, frameData, &cellList);
  }
}

/*
==============
R_ST_AddAllSurfacesCamera
==============
*/
void R_ST_AddAllSurfacesCamera(const void *const cmd)
{
  const StTerrain *terrain; 
  std::pair<float,unsigned int> *v6; 
  __int64 v7; 
  __int64 surfaceCount; 
  __int64 v9; 
  unsigned int v10; 
  __int64 frameDataIndex; 
  StFrameData *v39; 
  int integer; 
  __int64 second; 
  const StDiskTerrainSurface *v42; 
  __int64 v47; 
  std::less<void> v48; 
  __int128 v49; 
  __int128 v50; 
  __int128 v51; 
  StCachedFrontEndDvars cachedDvarsOut; 
  std::pair<float,unsigned int> _First[257]; 
  char v54; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  _R15 = (const GfxViewInfo **)cmd;
  if ( r_st_enable->current.enabled )
  {
    Profile_Begin(98);
    terrain = s_stGlob.terrain;
    if ( s_stGlob.terrain )
    {
      if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2115, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
        __debugbreak();
      v6 = _First;
      v7 = 256i64;
      do
      {
        std::pair<float,unsigned int>::pair<float,unsigned int>(v6++);
        --v7;
      }
      while ( v7 );
      surfaceCount = terrain->surfaceCount;
      v9 = 0i64;
      v10 = 0;
      if ( (_DWORD)surfaceCount )
      {
        _RCX = *_R15;
        __asm { vxorps  xmm6, xmm6, xmm6 }
        _R9 = &_First[0].second;
        _RAX = (__int64)&terrain->surfaces->wldBounds.halfSize.z;
        __asm { vmovups xmm7, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero }
        do
        {
          __asm { vmovss  xmm0, dword ptr [rcx+100h] }
          HIDWORD(v49) = 0;
          __asm
          {
            vmovups xmm5, [rsp+920h+var_8C0]
            vmovss  xmm5, xmm5, xmm0
            vinsertps xmm5, xmm5, dword ptr [rcx+104h], 10h
            vinsertps xmm5, xmm5, dword ptr [rcx+108h], 20h ; ' '
            vmovups [rsp+920h+var_8C0], xmm5
            vmovss  xmm0, dword ptr [rax-14h]
          }
          HIDWORD(v50) = 0;
          __asm
          {
            vmovups xmm4, xmmword ptr [rsp+70h]
            vmovss  xmm4, xmm4, xmm0
            vinsertps xmm4, xmm4, dword ptr [rax-10h], 10h
            vinsertps xmm4, xmm4, dword ptr [rax-0Ch], 20h ; ' '
            vmovups xmmword ptr [rsp+70h], xmm4
            vmovss  xmm0, dword ptr [rax-8]
          }
          HIDWORD(v51) = 0;
          __asm
          {
            vmovups xmm3, xmmword ptr [rbp-80h]
            vmovss  xmm3, xmm3, xmm0
            vinsertps xmm3, xmm3, dword ptr [rax-4], 10h
            vinsertps xmm3, xmm3, dword ptr [rax], 20h ; ' '
            vmovups xmmword ptr [rbp-80h], xmm3
            vsubps  xmm0, xmm5, xmm4
            vandnps xmm1, xmm7, xmm0
            vsubps  xmm2, xmm1, xmm3
            vmaxps  xmm0, xmm2, xmm6
            vmulps  xmm1, xmm0, xmm0
            vhaddps xmm2, xmm1, xmm1
            vhaddps xmm0, xmm2, xmm2
            vmovss  dword ptr [r9-4], xmm0
          }
          *_R9 = v10++;
          _RAX += 376i64;
          _R9 += 2;
        }
        while ( v10 < (unsigned int)surfaceCount );
      }
      std::_Sort_unchecked<std::pair<float,unsigned int> *,std::less<void>>(_First, &_First[surfaceCount], surfaceCount, v48);
      R_ST_CacheFrontEndDvars(&cachedDvarsOut);
      frameDataIndex = s_stGlob.frameDataIndex;
      if ( s_stGlob.frameDataIndex >= 2 )
      {
        LODWORD(v47) = s_stGlob.frameDataIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 837, ASSERT_TYPE_ASSERT, "(unsigned)( frameDataIndex ) < (unsigned)( ST_FRAME_DATA_COUNT )", "frameDataIndex doesn't index ST_FRAME_DATA_COUNT\n\t%i not in [0, %i)", v47, 2) )
          __debugbreak();
      }
      v39 = &s_stGlob.frameData[frameDataIndex];
      if ( terrain->surfaceCount )
      {
        do
        {
          integer = r_st_drawSingleSurface->current.integer;
          if ( integer == -1 )
            goto LABEL_20;
          second = (int)_First[v9].second;
          if ( (unsigned int)second > 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned int>(unsigned int)", "signed", second, "unsigned", (unsigned int)second) )
            __debugbreak();
          if ( integer == (_DWORD)second )
          {
LABEL_20:
            v42 = &terrain->surfaces[_First[v9].second];
            __asm
            {
              vmovsd  xmm0, qword ptr [r15+8]
              vmovsd  qword ptr [rsp+920h+var_8C0], xmm0
            }
            DWORD2(v49) = *((_DWORD *)_R15 + 4);
            R_ST_AddSurfacesForTerrainSurfaceCamera(v42, *_R15, (const vec3_t *)&v49, &cachedDvarsOut, v39);
          }
          v9 = (unsigned int)(v9 + 1);
        }
        while ( (unsigned int)v9 < terrain->surfaceCount );
      }
    }
    Profile_EndInternal(NULL);
  }
  _R11 = &v54;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
R_ST_AddAllSurfacesSunShadow
==============
*/
void R_ST_AddAllSurfacesSunShadow(const void *const cmd)
{
  char v2; 
  __int64 v3; 
  const StTerrain *terrain; 
  GfxSunShadow *p_sunShadow; 
  StFrameData *frameData; 
  unsigned __int16 opaqueCascadeCount; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int i; 
  int integer; 
  const StDiskTerrainSurface *v12; 
  unsigned int v13; 
  bool IsAnyGeoAvailableForSurface; 
  unsigned int v15; 
  unsigned int j; 
  GfxSunShadow *v17; 
  __int64 v18; 
  unsigned int k; 
  unsigned int uncachedMapsToDrawInOut; 
  unsigned int mapsToDrawInOut[2]; 
  StFrameData *v22; 
  StAddSurfacesSunShadowCallbackStaticParams nodeCallbackStaticParams; 
  __int64 v24; 
  StCachedFrontEndDvars cachedDvarsOut; 
  TerrainSurfaceDataInfo terrainSurfaceDataInfo; 
  HLSL::TerrainTileDataCode tileDataOut; 

  v24 = -2i64;
  v2 = 0;
  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2708, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  v3 = *(_QWORD *)cmd;
  terrain = s_stGlob.terrain;
  if ( s_stGlob.terrain )
  {
    if ( r_st_enable->current.enabled && (*(_BYTE *)(v3 + 15540) & 4) != 0 )
    {
      R_ST_CacheFrontEndDvars(&cachedDvarsOut);
      if ( cachedDvarsOut.shadowLod >= 0 )
      {
        Profile_Begin(98);
        p_sunShadow = &frontEndDataOut->sunShadow;
        frameData = R_ST_FrontEndFrameData();
        v22 = frameData;
        uncachedMapsToDrawInOut = 7;
        opaqueCascadeCount = p_sunShadow->opaqueCascadeCount;
        if ( opaqueCascadeCount <= 2u )
        {
          v8 = 3;
          if ( opaqueCascadeCount <= 1u )
            v8 = 1;
          uncachedMapsToDrawInOut = v8;
        }
        R_ST_AddAllSurfacesCachedSunShadow(terrain, p_sunShadow, (GfxViewInfo *)v3, &uncachedMapsToDrawInOut, &cachedDvarsOut, frameData);
        v2 = 1;
        v9 = uncachedMapsToDrawInOut;
        if ( uncachedMapsToDrawInOut )
        {
          for ( i = 0; i < terrain->surfaceCount; ++i )
          {
            integer = r_st_drawSingleSurface->current.integer;
            if ( integer == -1 || integer == i )
            {
              mapsToDrawInOut[0] = v9;
              v12 = &terrain->surfaces[i];
              R_ST_SunShadowMapBitsForBounds(&v12->wldBounds, p_sunShadow, mapsToDrawInOut);
              v13 = mapsToDrawInOut[0];
              if ( mapsToDrawInOut[0] )
              {
                R_ST_TerrainSurface_PopulateDataInfo(v12, &terrainSurfaceDataInfo);
                IsAnyGeoAvailableForSurface = R_ST_IsAnyGeoAvailableForSurface(v12, &terrainSurfaceDataInfo);
                v15 = v12->grid.numLevels - 1;
                if ( IsAnyGeoAvailableForSurface )
                {
                  nodeCallbackStaticParams.surface = v12;
                  nodeCallbackStaticParams.viewInfo = (const GfxViewInfo *)v3;
                  nodeCallbackStaticParams.sunShadow = p_sunShadow;
                  nodeCallbackStaticParams.cachedDvars = &cachedDvarsOut;
                  nodeCallbackStaticParams.frameData = v22;
                  nodeCallbackStaticParams.terrainSurfaceDataInfo = &terrainSurfaceDataInfo;
                  R_ST_SetupTileDataForSurface(v12, &vec3_origin, 1, &tileDataOut);
                  nodeCallbackStaticParams.surfaceTileData = &tileDataOut;
                  mapsToDrawInOut[0] = v13;
                  R_ST_TraverseTree_StAddSurfacesSunShadowCallbackStaticParams_StAddSurfacesSunShadowCallbackDynamicParams_(v12, v15, R_ST_AddSurfacesSunShadowNodeCallback, &nodeCallbackStaticParams, (const StAddSurfacesSunShadowCallbackDynamicParams *)mapsToDrawInOut);
                }
                else
                {
                  R_WarnOncePerFrame(R_WARN_ST_FRAME_DROPPED_DRAW_MISSING_RESOURCES, "sun shadow");
                }
                if ( cachedDvarsOut.shadowLod != v15 )
                {
                  R_ST_SurfaceBaseResourceStreamRequest(v12, ST_SURFACE_STREAM_REQUEST_GEO_HEIGHTMAP);
                  R_ST_SurfaceBaseResourceStreamRequest(v12, ST_SURFACE_STREAM_REQUEST_GEO_CUTOUTMAP);
                }
                R_ST_TerrainSurface_IssueDataInfoRequests(v12, &terrainSurfaceDataInfo);
              }
              v9 = uncachedMapsToDrawInOut;
            }
          }
          v2 = 1;
        }
        Profile_EndInternal(NULL);
      }
    }
  }
  if ( *(_DWORD *)(v3 + 15416) )
  {
    if ( !v2 )
    {
      for ( j = rg.firstCachedSunShadowPartition; j <= rg.lastCachedSunShadowPartition; ++j )
      {
        v17 = &frontEndDataOut->sunShadow;
        if ( frontEndDataOut == (GfxBackEndData *)-927488i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 383, ASSERT_TYPE_ASSERT, "(sunShadow)", (const char *)&queryFormat, "sunShadow") )
          __debugbreak();
        if ( !R_IsCachedSunShadowPartition(v17, j) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 384, ASSERT_TYPE_ASSERT, "(R_IsCachedSunShadowPartition( sunShadow, partitionIndex ))", (const char *)&queryFormat, "R_IsCachedSunShadowPartition( sunShadow, partitionIndex )") )
          __debugbreak();
        v18 = (__int64)&v17->partitionCache[j - v17->firstCachedSunShadowPartition];
        for ( k = 0; k < *(_DWORD *)(v18 + 4); ++k )
          R_SunShadowCache_EndProcessing((GfxCachedSunShadowOverlap *)(864i64 * k + v18 + 16));
      }
    }
  }
}

/*
==============
R_ST_AddCachedSunShadowDrawSurfsToList
==============
*/
char R_ST_AddCachedSunShadowDrawSurfsToList(const StTerrain *terrain, GfxViewInfo *viewInfo, StCachedFrontEndDvars *cachedDvars, StFrameData *frameData, const GfxCachedSunShadow_StNode *cacheNode, StCachedSunShadowSurfaceStates *surfaces, StSunShadowSurfList *surfList)
{
  __int64 surfaceIdx; 
  const StTerrainNode *node; 
  StCachedSunShadowSurfaceState *v13; 
  const StDiskTerrainSurface *v14; 
  unsigned __int16 cutoutTriCount; 
  unsigned int v16; 
  bool v17; 
  bool v18; 
  unsigned int cutoutMeshFilter; 
  GfxStDrawSurf *v21; 
  float fmt; 
  __int64 lodBias; 
  float lodBiasa; 
  unsigned int tileDataIndex; 
  HLSL::hlsl_2_t<float,vec2_t> vertexBias; 
  HLSL::hlsl_2_t<float,vec2_t> vertexScale; 
  MaterialLayerInput materialLayerInput; 
  GfxViewInfo *viewInfoa; 
  TerrainSurfaceDataInfo terrainSurfaceDataInfo; 

  viewInfoa = viewInfo;
  if ( !cacheNode->node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2560, ASSERT_TYPE_ASSERT, "(cacheNode.node)", (const char *)&queryFormat, "cacheNode.node") )
    __debugbreak();
  surfaceIdx = cacheNode->surfaceIdx;
  node = cacheNode->node;
  v13 = &surfaces->states[surfaceIdx];
  if ( (unsigned int)surfaceIdx >= terrain->surfaceCount )
  {
    LODWORD(lodBias) = cacheNode->surfaceIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2564, ASSERT_TYPE_ASSERT, "(unsigned)( cacheNode.surfaceIdx ) < (unsigned)( terrain.surfaceCount )", "cacheNode.surfaceIdx doesn't index terrain.surfaceCount\n\t%i not in [0, %i)", lodBias, terrain->surfaceCount) )
      __debugbreak();
  }
  v14 = &terrain->surfaces[cacheNode->surfaceIdx];
  R_ST_TerrainSurface_PopulateDataInfo(v14, &terrainSurfaceDataInfo);
  if ( (node->mesh.flags.packed & 8) == 0 )
    R_ST_SurfaceBaseResourceStreamRequest(v14, ST_SURFACE_STREAM_REQUEST_GEO_HEIGHTMAP);
  cutoutTriCount = node->mesh.cutoutTriCount;
  v16 = 1;
  if ( cutoutTriCount )
  {
    R_ST_SurfaceBaseResourceStreamRequest(v14, ST_SURFACE_STREAM_REQUEST_GEO_CUTOUTMAP);
    cutoutTriCount = node->mesh.cutoutTriCount;
  }
  v17 = (node->mesh.flags.packed & 2) != 0;
  if ( (node->mesh.flags.packed & 8) == 0 )
  {
    v17 = 0;
    if ( (node->mesh.flags.packed & 2) != 0 )
    {
      terrainSurfaceDataInfo.baseResourceRequestMask |= 1u;
      if ( (terrainSurfaceDataInfo.baseResourceAvailableMask & 1) != 0 )
        v17 = 1;
    }
  }
  if ( cutoutTriCount )
  {
    if ( !v17 )
      return 0;
    terrainSurfaceDataInfo.baseResourceRequestMask |= 2u;
    v18 = (terrainSurfaceDataInfo.baseResourceAvailableMask & 2) == 0;
  }
  else
  {
    v18 = !v17;
  }
  if ( v18 )
    return 0;
  if ( !v13->tileDataInited )
  {
    R_ST_SetupTileDataForSurface(v14, &vec3_origin, 1, &v13->tileData);
    v13->tileDataInited = 1;
  }
  vertexBias = (HLSL::hlsl_2_t<float,vec2_t>)node->compressBase;
  vertexScale = (HLSL::hlsl_2_t<float,vec2_t>)node->compressScale;
  __asm { vxorps  xmm0, xmm0, xmm0 }
  materialLayerInput = 0i64;
  __asm
  {
    vmovss  [rsp+148h+lodBias], xmm0
    vmovss  dword ptr [rsp+148h+fmt], xmm0
  }
  if ( !R_ST_AddTileDataForNode(&v13->tileData, node, v14, &materialLayerInput, fmt, lodBiasa, &vertexScale, &vertexBias, 1u, cachedDvars, 0, frameData, &tileDataIndex) )
    return 0;
  cutoutMeshFilter = cachedDvars->cutoutMeshFilter;
  if ( !cutoutMeshFilter )
  {
    v16 = (node->mesh.cutoutTriCount != 0) + 1;
    goto LABEL_28;
  }
  if ( cutoutMeshFilter != 1 )
  {
    v16 = node->mesh.cutoutTriCount != 0;
LABEL_28:
    if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2592, ASSERT_TYPE_ASSERT, "(drawSurfCountForNode)", (const char *)&queryFormat, "drawSurfCountForNode") )
      __debugbreak();
  }
  v21 = R_ST_AllocFromSharedArray<0,GfxStDrawSurf>(surfList->surfs, &surfList->count, 0x100u, R_WARN_ST_FRAME_SUN_SHADOW_SURF_LIMIT, v16, (unsigned int *)&vertexBias);
  if ( v21 )
  {
    R_ST_PopulateDrawSurfsForNode(node, v14, viewInfoa, &v13->tileData, cachedDvars, v21, v16, tileDataIndex, 0, &terrainSurfaceDataInfo);
    R_ST_TerrainSurface_IssueDataInfoRequests(v14, &terrainSurfaceDataInfo);
    return 1;
  }
  else
  {
    R_ST_TerrainSurface_IssueDataInfoRequests(v14, &terrainSurfaceDataInfo);
    return 0;
  }
}

/*
==============
R_ST_AddNodeDrawSurfsToList
==============
*/
bool R_ST_AddNodeDrawSurfsToList(const StTerrainNode *node, const StDiskTerrainSurface *surface, const GfxViewInfo *viewInfo, const HLSL::TerrainTileDataCode *surfaceTileData, const StCachedFrontEndDvars *cachedDvars, unsigned int drawSurfCountForNode, unsigned int tileDataIndex, bool lightmapped, GfxStDrawSurf *dest, unsigned int destCapacity, volatile int *destCountInOut, GfxStDrawSurf **populatedSurfsInOut, TerrainSurfaceDataInfo *terrainSurfaceDataInfo)
{
  GfxStDrawSurf *v17; 
  unsigned int indexOut[4]; 

  v17 = R_ST_AllocFromSharedArray<0,GfxStDrawSurf>(dest, destCountInOut, destCapacity, R_WARN_ST_FRAME_SUN_SHADOW_SURF_LIMIT, drawSurfCountForNode, indexOut);
  _RBX = v17;
  if ( v17 )
  {
    _RAX = *populatedSurfsInOut;
    if ( *populatedSurfsInOut )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rbx], ymm0
        vmovups xmm1, xmmword ptr [rax+20h]
        vmovups xmmword ptr [rbx+20h], xmm1
      }
      if ( drawSurfCountForNode > 1 )
      {
        _RAX = *populatedSurfsInOut;
        __asm
        {
          vmovups ymm0, ymmword ptr [rax+30h]
          vmovups ymmword ptr [rbx+30h], ymm0
          vmovups xmm1, xmmword ptr [rax+50h]
          vmovups xmmword ptr [rbx+50h], xmm1
        }
      }
    }
    else
    {
      R_ST_PopulateDrawSurfsForNode(node, surface, viewInfo, surfaceTileData, cachedDvars, _RBX, drawSurfCountForNode, tileDataIndex, lightmapped, terrainSurfaceDataInfo);
      *populatedSurfsInOut = _RBX;
    }
    LOBYTE(v17) = 1;
  }
  return (char)v17;
}

/*
==============
R_ST_AddNodeToCachedSunShadowCells
==============
*/
void R_ST_AddNodeToCachedSunShadowCells(const StCachedSunShadowNodeInfo *nodeInfo, const GfxSunShadow *sunShadow, unsigned int activeCells, const StCachedFrontEndDvars *cachedDvars, StCachedSunShadowCellList *cellList)
{
  const StTerrainNode *node; 
  unsigned int cutoutMeshFilter; 
  unsigned int v10; 
  int v11; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  __int64 v16; 

  _R15 = nodeInfo;
  if ( !nodeInfo->node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2414, ASSERT_TYPE_ASSERT, "(nodeInfo.node)", (const char *)&queryFormat, "nodeInfo.node") )
    __debugbreak();
  node = _R15->node;
  if ( (_R15->node->mesh.flags.packed & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2416, ASSERT_TYPE_ASSERT, "(!node.mesh.flags.clippedOut)", (const char *)&queryFormat, "!node.mesh.flags.clippedOut") )
    __debugbreak();
  if ( !activeCells && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2417, ASSERT_TYPE_ASSERT, "(activeCells)", (const char *)&queryFormat, "activeCells") )
    __debugbreak();
  if ( node->mesh.triCount )
  {
    cutoutMeshFilter = cachedDvars->cutoutMeshFilter;
    v10 = 0;
    if ( cutoutMeshFilter )
    {
      if ( cutoutMeshFilter == 1 )
      {
LABEL_16:
        if ( cellList->cellCount )
        {
          do
          {
            _RBX = (unsigned int *)&cellList->cells[v10];
            v13 = _RBX[8195];
            v14 = _RBX[8196];
            if ( (v13 >= 3 || v14 >= 0xA) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2173, ASSERT_TYPE_ASSERT, "(partitionIndex < R_SUNSHADOW_OPAQUE_PARTITION_COUNT && cellIndex < ( 9 + 1 ))", (const char *)&queryFormat, "partitionIndex < R_SUNSHADOW_OPAQUE_PARTITION_COUNT && cellIndex < CACHED_SUN_SHADOW_CELL_MAX_OVERLAP") )
              __debugbreak();
            v15 = v14 + 10 * (v13 - rg.firstCachedSunShadowPartition) + 3;
            if ( v15 >= 0x17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2175, ASSERT_TYPE_ASSERT, "(shift < ST_SUN_SHADOW_MAP_BITS_BIT_COUNT)", (const char *)&queryFormat, "shift < ST_SUN_SHADOW_MAP_BITS_BIT_COUNT") )
              __debugbreak();
            if ( _bittest((const int *)&activeCells, v15) )
            {
              v16 = _RBX[8194];
              if ( (unsigned int)v16 >= 0x800 )
              {
                R_WarnOncePerFrame(R_WARN_ST_CACHED_SUN_SHADOW_NODES_PER_CELL_LIMIT, 2048i64);
              }
              else
              {
                __asm { vmovups xmm0, xmmword ptr [r15] }
                _RAX = 2 * v16;
                __asm { vmovups xmmword ptr [rbx+rax*8+8], xmm0 }
                ++_RBX[8194];
              }
            }
            ++v10;
          }
          while ( v10 < cellList->cellCount );
        }
        return;
      }
      v11 = node->mesh.cutoutTriCount != 0;
    }
    else
    {
      v11 = (node->mesh.cutoutTriCount != 0) + 1;
    }
    if ( !v11 )
      return;
    goto LABEL_16;
  }
}

/*
==============
R_ST_AddSurfacesCameraNodeCallback
==============
*/
char R_ST_AddSurfacesCameraNodeCallback(const StTerrainNode *node, unsigned int gridLevel, StAddSurfacesCameraCallbackStaticParams *staticCallbackParams, const unsigned __int8 *__formal)
{
  StMeshFlags v7; 
  const StDiskTerrainSurface *surface; 
  StreamKey *streamKey; 
  const StDiskTerrainSurface *v10; 
  __int64 v13; 
  const StTerrainNode *v14; 
  bool IsAnyLitRenderingMethodAvailbleForNode; 
  StMeshFlags v16; 
  bool v17; 
  const StDiskTerrainSurface *v18; 
  const StTerrain *terrain; 
  int v20; 
  float fmt; 
  vec4_t color; 
  _QWORD childNodesOut[4]; 

  if ( !staticCallbackParams->surface && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1802, ASSERT_TYPE_ASSERT, "(staticCallbackParams.surface)", (const char *)&queryFormat, "staticCallbackParams.surface") )
    __debugbreak();
  if ( !staticCallbackParams->surfaceTileData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1803, ASSERT_TYPE_ASSERT, "(staticCallbackParams.surfaceTileData)", (const char *)&queryFormat, "staticCallbackParams.surfaceTileData") )
    __debugbreak();
  if ( !staticCallbackParams->materialLayers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1804, ASSERT_TYPE_ASSERT, "(staticCallbackParams.materialLayers)", (const char *)&queryFormat, "staticCallbackParams.materialLayers") )
    __debugbreak();
  if ( !staticCallbackParams->viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1805, ASSERT_TYPE_ASSERT, "(staticCallbackParams.viewInfo)", (const char *)&queryFormat, "staticCallbackParams.viewInfo") )
    __debugbreak();
  if ( !staticCallbackParams->cachedDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1806, ASSERT_TYPE_ASSERT, "(staticCallbackParams.cachedDvars)", (const char *)&queryFormat, "staticCallbackParams.cachedDvars") )
    __debugbreak();
  if ( !staticCallbackParams->frameData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1807, ASSERT_TYPE_ASSERT, "(staticCallbackParams.frameData)", (const char *)&queryFormat, "staticCallbackParams.frameData") )
    __debugbreak();
  v7.packed = (unsigned __int8)node->mesh.flags;
  if ( (v7.packed & 1) != 0 )
    return 0;
  surface = staticCallbackParams->surface;
  if ( (v7.packed & 8) == 0 )
    R_ST_SurfaceBaseResourceStreamRequest(staticCallbackParams->surface, ST_SURFACE_STREAM_REQUEST_GEO_HEIGHTMAP);
  if ( node->mesh.cutoutTriCount )
    R_ST_SurfaceBaseResourceStreamRequest(surface, ST_SURFACE_STREAM_REQUEST_GEO_CUTOUTMAP);
  if ( !R_Umbra_IsBoxVisible(&node->wldBounds, 0, staticCallbackParams->viewInfo->viewInfoIndex, 0) )
    return 0;
  if ( !R_ST_IsAnyLitRenderingMethodAvailbleForNode(node, staticCallbackParams->surface, staticCallbackParams->surfaceTileData, staticCallbackParams->terrainSurfaceDataInfo) )
  {
    if ( gridLevel == staticCallbackParams->surface->grid.numLevels - 1 )
      R_WarnOncePerFrame(R_WARN_ST_FRAME_DROPPED_DRAW_MISSING_RESOURCES, "camera");
    return 0;
  }
  streamKey = node->mesh.streamKey;
  if ( streamKey )
    Stream_RequestGeneric(streamKey);
  v10 = staticCallbackParams->surface;
  if ( gridLevel == 0 || !staticCallbackParams->traverse )
    goto LABEL_44;
  _RAX = staticCallbackParams->cachedDvars;
  __asm
  {
    vmovss  xmm0, dword ptr [rax]
    vmovss  dword ptr [rsp+0C8h+fmt], xmm0
  }
  if ( R_ST_CanDrawNode(staticCallbackParams->surface, node, gridLevel, &staticCallbackParams->worldSpaceCamPos, fmt) )
  {
LABEL_44:
    R_ST_GenerateDrawSurfsForNode(node, v10, staticCallbackParams->materialLayers, staticCallbackParams->viewInfo, staticCallbackParams->surfaceTileData, staticCallbackParams->cachedDvars, staticCallbackParams->frameData, staticCallbackParams->lightmapped, staticCallbackParams->terrainSurfaceDataInfo);
    if ( staticCallbackParams->cachedDvars->showTileBounds )
    {
      terrain = s_stGlob.terrain;
      if ( !s_stGlob.terrain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1536, ASSERT_TYPE_ASSERT, "(terrain)", (const char *)&queryFormat, "terrain") )
        __debugbreak();
      v20 = truncate_cast<unsigned int,__int64>(v10 - terrain->surfaces);
      R_DebugUniqueColorFromIndex(v20, (vec3_t *)childNodesOut);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+0C8h+childNodesOut]
        vmovss  xmm1, dword ptr [rsp+0C8h+childNodesOut+4]
        vmovss  dword ptr [rsp+0C8h+color], xmm0
        vmovss  xmm0, [rsp+0C8h+var_58]
        vmovss  dword ptr [rsp+0C8h+color+4], xmm1
        vmovss  xmm1, cs:__real@3f800000
        vmovss  dword ptr [rsp+0C8h+color+8], xmm0
        vmovss  dword ptr [rsp+0C8h+color+0Ch], xmm1
      }
      R_AddDebugBox(&frontEndDataOut->debugGlobals, &node->wldBounds, &color, 1);
    }
    return 0;
  }
  R_ST_ChildNodesForNode(v10, node, gridLevel, (const StTerrainNode **)childNodesOut);
  v13 = 0i64;
  while ( (unsigned int)v13 < 4 )
  {
    v14 = (const StTerrainNode *)childNodesOut[v13];
    IsAnyLitRenderingMethodAvailbleForNode = R_ST_IsAnyLitRenderingMethodAvailbleForNode(v14, staticCallbackParams->surface, staticCallbackParams->surfaceTileData, staticCallbackParams->terrainSurfaceDataInfo);
    v16.packed = (unsigned __int8)v14->mesh.flags;
    v17 = !IsAnyLitRenderingMethodAvailbleForNode && (v16.packed & 1) == 0;
    if ( (v16.packed & 1) == 0 )
    {
      v18 = staticCallbackParams->surface;
      if ( (v16.packed & 8) == 0 )
        R_ST_SurfaceBaseResourceStreamRequest(staticCallbackParams->surface, ST_SURFACE_STREAM_REQUEST_GEO_HEIGHTMAP);
      if ( v14->mesh.cutoutTriCount )
        R_ST_SurfaceBaseResourceStreamRequest(v18, ST_SURFACE_STREAM_REQUEST_GEO_CUTOUTMAP);
    }
    v13 = (unsigned int)(v13 + 1);
    if ( v17 )
      goto LABEL_44;
  }
  return 1;
}

/*
==============
R_ST_AddSurfacesForTerrainSurfaceCamera
==============
*/
void R_ST_AddSurfacesForTerrainSurfaceCamera(const StDiskTerrainSurface *surface, const GfxViewInfo *viewInfo, const vec3_t *dpvsCamPos, const StCachedFrontEndDvars *cachedDvars, StFrameData *frameData)
{
  Bounds *p_wldBounds; 
  int viewInfoIndex; 
  int v9; 
  unsigned int v10; 
  char *data; 
  int v12; 
  unsigned int layerDataLimit; 
  __int64 v14; 
  char *v15; 
  unsigned int v16; 
  int v17; 
  unsigned int lightmapIndex; 
  bool v21; 
  StLightmap *v22; 
  const GfxImage *v23; 
  signed int v24; 
  int forceLod; 
  unsigned int v26; 
  const char *v27; 
  const vec4_t *v29; 
  unsigned __int8 nodeCallbackDynamicParams[4]; 
  int IsBoxVisible; 
  volatile int layerDataCount; 
  Bounds *v33; 
  int v34[2]; 
  const GfxViewInfo *v35; 
  const vec3_t *v36; 
  StAddSurfacesCameraCallbackStaticParams nodeCallbackStaticParams; 
  TerrainSurfaceDataInfo terrainSurfaceDataInfo; 
  HLSL::TerrainTileDataCode tileDataOut; 
  HLSL::TerrainLayerDataCode layersOut[32]; 

  p_wldBounds = &surface->wldBounds;
  v36 = dpvsCamPos;
  viewInfoIndex = viewInfo->viewInfoIndex;
  v35 = viewInfo;
  v33 = &surface->wldBounds;
  IsBoxVisible = R_Umbra_IsBoxVisible(&surface->wldBounds, 0, viewInfoIndex, 0);
  v9 = IsBoxVisible;
  if ( IsBoxVisible )
  {
    R_ST_TerrainSurface_PopulateDataInfo(surface, &terrainSurfaceDataInfo);
    if ( R_ST_IsAnyGeoAvailableForSurface(surface, &terrainSurfaceDataInfo) )
    {
      v10 = R_ST_SetupMaterialLayers(surface, cachedDvars, layersOut);
      data = (char *)frameData->layerData.data;
      v12 = v10;
      layerDataLimit = s_stGlob.layerDataLimit;
      if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 561, ASSERT_TYPE_ASSERT, "(resourceArray)", (const char *)&queryFormat, "resourceArray") )
        __debugbreak();
      if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 562, ASSERT_TYPE_ASSERT, "(allocCount > 0)", (const char *)&queryFormat, "allocCount > 0") )
        __debugbreak();
      if ( v12 + frameData->layerDataCount > layerDataLimit )
      {
        R_WarnOncePerFrame(R_WARN_ST_FRAME_LAYER_DATA_LIMIT, layerDataLimit);
      }
      else
      {
        layerDataCount = frameData->layerDataCount;
        v14 = 108i64 * frameData->layerDataCount;
        frameData->layerDataCount += v12;
        v15 = &data[v14];
        if ( v15 )
        {
          v16 = 0;
          v17 = 0;
          if ( v12 )
          {
            do
            {
              HLSL::TerrainLayerData::SetFrom((HLSL::TerrainLayerData *)&v15[108 * v17], &layersOut[v17]);
              ++v17;
            }
            while ( v17 != v12 );
          }
          v34[0] = layerDataCount;
          nodeCallbackStaticParams.viewInfo = v35;
          nodeCallbackStaticParams.materialLayers = (const MaterialLayerInput *)v34;
          v34[1] = v12;
          nodeCallbackStaticParams.terrainSurfaceDataInfo = &terrainSurfaceDataInfo;
          nodeCallbackStaticParams.surface = surface;
          nodeCallbackStaticParams.cachedDvars = cachedDvars;
          nodeCallbackStaticParams.frameData = frameData;
          R_ST_SetupTileDataForSurface(surface, &v35->viewParmsSet.frames[0].viewParms.camera.origin, 1, &tileDataOut);
          lightmapIndex = surface->lightmapIndex;
          nodeCallbackStaticParams.surfaceTileData = &tileDataOut;
          _RAX = v36;
          __asm { vmovsd  xmm0, qword ptr [rax] }
          nodeCallbackStaticParams.worldSpaceCamPos.v[2] = v36->v[2];
          v21 = 0;
          __asm { vmovsd  qword ptr [rbp+1520h+nodeCallbackStaticParams.worldSpaceCamPos], xmm0 }
          if ( lightmapIndex != 510 )
          {
            if ( lightmapIndex >= s_stGlob.terrain->lightmapCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2047, ASSERT_TYPE_ASSERT, "(surface.lightmapIndex < s_stGlob.terrain->lightmapCount)", (const char *)&queryFormat, "surface.lightmapIndex < s_stGlob.terrain->lightmapCount") )
              __debugbreak();
            v21 = 1;
            v22 = &s_stGlob.terrain->lightmaps[surface->lightmapIndex];
            do
            {
              if ( !v21 )
                break;
              v23 = v22->images[0];
              Stream_UsedImage(v22->images[0]);
              v21 = Stream_CheckImageLowMipUsable(v23);
              ++v16;
              v22 = (StLightmap *)((char *)v22 + 8);
            }
            while ( v16 < 3 );
          }
          v24 = surface->grid.numLevels - 1;
          nodeCallbackStaticParams.lightmapped = v21;
          forceLod = cachedDvars->forceLod;
          nodeCallbackStaticParams.traverse = 1;
          if ( forceLod >= 0 )
          {
            nodeCallbackStaticParams.traverse = 0;
            if ( v24 < forceLod )
              forceLod = v24;
            v24 = forceLod;
          }
          nodeCallbackDynamicParams[0] = 0;
          R_ST_TraverseTree_StAddSurfacesCameraCallbackStaticParams_unsigned_char_(surface, v24, (bool (__fastcall *)(const StTerrainNode *, unsigned int, StAddSurfacesCameraCallbackStaticParams *, const unsigned __int8 *, unsigned __int8 *))R_ST_AddSurfacesCameraNodeCallback, &nodeCallbackStaticParams, nodeCallbackDynamicParams);
        }
      }
      p_wldBounds = v33;
      v9 = IsBoxVisible;
    }
    else
    {
      R_WarnOncePerFrame(R_WARN_ST_FRAME_DROPPED_DRAW_MISSING_RESOURCES, "camera");
    }
    if ( surface->lightmapIndex != 510 )
      R_ST_SurfaceBaseResourceStreamRequest(surface, ST_SURFACE_STREAM_REQUEST_LIGHTMAP);
    R_ST_TerrainSurface_IssueDataInfoRequests(surface, &terrainSurfaceDataInfo);
  }
  if ( cachedDvars->showSurfaceBounds )
  {
    if ( !s_stGlob.terrain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2091, ASSERT_TYPE_ASSERT, "(s_stGlob.terrain)", (const char *)&queryFormat, "s_stGlob.terrain") )
      __debugbreak();
    v26 = truncate_cast<unsigned int,__int64>(surface - s_stGlob.terrain->surfaces);
    v27 = j_va("%u", v26);
    __asm { vmovss  xmm3, cs:__real@451c4000; size }
    R_AddDebugString(&frontEndDataOut->debugGlobals, &p_wldBounds->midPoint, &colorGreen, *(float *)&_XMM3, v27);
    v29 = &colorRed;
    if ( v9 )
      v29 = &colorGreen;
    R_AddDebugBox(&frontEndDataOut->debugGlobals, p_wldBounds, v29, 1);
  }
}

/*
==============
R_ST_AddSurfacesSunShadowNodeCallback
==============
*/
char R_ST_AddSurfacesSunShadowNodeCallback(const StTerrainNode *node, unsigned int gridLevel, StAddSurfacesSunShadowCallbackStaticParams *staticCallbackParams, const StAddSurfacesSunShadowCallbackDynamicParams *dynamicCallbackParamsIn, StAddSurfacesSunShadowCallbackDynamicParams *dynamicCallbackParamsOut)
{
  StMeshFlags v9; 
  TerrainSurfaceDataInfo *terrainSurfaceDataInfo; 
  unsigned __int16 cutoutTriCount; 
  bool v12; 
  unsigned int baseResourceAvailableMask; 
  unsigned int mapsToDraw; 
  __int64 i; 
  __int64 v16; 
  int v17; 
  StTerrainNode *childNodesOut[4]; 

  if ( !staticCallbackParams->surface && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2304, ASSERT_TYPE_ASSERT, "(staticCallbackParams.surface)", (const char *)&queryFormat, "staticCallbackParams.surface") )
    __debugbreak();
  if ( !staticCallbackParams->surfaceTileData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2305, ASSERT_TYPE_ASSERT, "(staticCallbackParams.surfaceTileData)", (const char *)&queryFormat, "staticCallbackParams.surfaceTileData") )
    __debugbreak();
  if ( !staticCallbackParams->viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2306, ASSERT_TYPE_ASSERT, "(staticCallbackParams.viewInfo)", (const char *)&queryFormat, "staticCallbackParams.viewInfo") )
    __debugbreak();
  if ( !staticCallbackParams->sunShadow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2307, ASSERT_TYPE_ASSERT, "(staticCallbackParams.sunShadow)", (const char *)&queryFormat, "staticCallbackParams.sunShadow") )
    __debugbreak();
  if ( !staticCallbackParams->cachedDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2308, ASSERT_TYPE_ASSERT, "(staticCallbackParams.cachedDvars)", (const char *)&queryFormat, "staticCallbackParams.cachedDvars") )
    __debugbreak();
  if ( !staticCallbackParams->frameData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2309, ASSERT_TYPE_ASSERT, "(staticCallbackParams.frameData)", (const char *)&queryFormat, "staticCallbackParams.frameData") )
    __debugbreak();
  if ( !dynamicCallbackParamsIn->mapsToDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2310, ASSERT_TYPE_ASSERT, "(dynamicCallbackParamsIn.mapsToDraw)", (const char *)&queryFormat, "dynamicCallbackParamsIn.mapsToDraw") )
    __debugbreak();
  v9.packed = (unsigned __int8)node->mesh.flags;
  if ( (v9.packed & 1) != 0 )
    return 0;
  terrainSurfaceDataInfo = staticCallbackParams->terrainSurfaceDataInfo;
  cutoutTriCount = node->mesh.cutoutTriCount;
  v12 = (v9.packed & 2) != 0;
  if ( (v9.packed & 8) == 0 )
  {
    v12 = 0;
    if ( (v9.packed & 2) != 0 )
    {
      terrainSurfaceDataInfo->baseResourceRequestMask |= 1u;
      if ( (terrainSurfaceDataInfo->baseResourceAvailableMask & 1) != 0 )
        v12 = 1;
    }
  }
  if ( !cutoutTriCount )
  {
    if ( v12 )
      goto LABEL_31;
LABEL_40:
    if ( gridLevel == staticCallbackParams->surface->grid.numLevels - 1 )
      R_WarnOncePerFrame(R_WARN_ST_FRAME_DROPPED_DRAW_MISSING_RESOURCES, "sun shadow");
    return 0;
  }
  if ( !v12 )
    goto LABEL_40;
  baseResourceAvailableMask = terrainSurfaceDataInfo->baseResourceAvailableMask;
  terrainSurfaceDataInfo->baseResourceRequestMask |= 2u;
  if ( (baseResourceAvailableMask & 2) == 0 )
    goto LABEL_40;
LABEL_31:
  dynamicCallbackParamsOut->mapsToDraw = dynamicCallbackParamsIn->mapsToDraw;
  R_ST_SunShadowMapBitsForBounds(&node->wldBounds, staticCallbackParams->sunShadow, &dynamicCallbackParamsOut->mapsToDraw);
  mapsToDraw = dynamicCallbackParamsOut->mapsToDraw;
  if ( !dynamicCallbackParamsOut->mapsToDraw )
    return 0;
  if ( !gridLevel || (signed int)gridLevel <= staticCallbackParams->cachedDvars->shadowLod )
  {
LABEL_43:
    R_ST_GenerateSunShadowDrawSurfsForNode(node, staticCallbackParams->surface, staticCallbackParams->viewInfo, staticCallbackParams->sunShadow, staticCallbackParams->surfaceTileData, mapsToDraw, staticCallbackParams->cachedDvars, staticCallbackParams->frameData, staticCallbackParams->terrainSurfaceDataInfo);
    return 0;
  }
  R_ST_ChildNodesForNode(staticCallbackParams->surface, node, gridLevel, (const StTerrainNode **)childNodesOut);
  for ( i = 0i64; (unsigned int)i < 4; i = (unsigned int)(v17 + 1) )
  {
    if ( !R_ST_IsAnyDepthRenderingAvailableForNode(staticCallbackParams->surface, childNodesOut[i], staticCallbackParams->terrainSurfaceDataInfo) && (*(_BYTE *)(v16 + 86) & 1) == 0 )
    {
      mapsToDraw = dynamicCallbackParamsOut->mapsToDraw;
      goto LABEL_43;
    }
  }
  return 1;
}

/*
==============
R_ST_AddTileDataForNode
==============
*/
bool R_ST_AddTileDataForNode(const HLSL::TerrainTileDataCode *surfaceTileData, const StTerrainNode *node, const StDiskTerrainSurface *surface, const MaterialLayerInput *materialLayerInput, float lodScale, float lodBias, const HLSL::hlsl_2_t<float,vec2_t> *vertexScale, const HLSL::hlsl_2_t<float,vec2_t> *vertexBias, unsigned int tileDataCount, const StCachedFrontEndDvars *cachedDvars, bool addVirtualTexturingInfo, StFrameData *frameData, unsigned int *tileDataIndexOut)
{
  const StTerrain *terrain; 
  unsigned int count; 
  int layerLimit; 
  bool v31; 
  signed __int64 v35; 
  unsigned int v42; 
  unsigned int displacementScalesCount; 
  unsigned int tileDataLimit; 
  char *data; 
  volatile int *p_tileDataCount; 
  __int64 v50; 
  unsigned int v51; 
  HLSL::TerrainTileData *v52; 
  bool result; 
  HLSL::TerrainTileDataCode p; 
  char v57; 
  void *retaddr; 

  _RAX = &retaddr;
  terrain = s_stGlob.terrain;
  __asm { vmovaps xmmword ptr [rax-28h], xmm6 }
  _RBX = surfaceTileData;
  if ( !terrain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1288, ASSERT_TYPE_ASSERT, "(terrain)", (const char *)&queryFormat, "terrain") )
    __debugbreak();
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx]
    vmovups ymm1, ymmword ptr [rbx+80h]
  }
  _RAX = &p;
  __asm
  {
    vmovups ymmword ptr [rax], ymm0
    vmovups ymm0, ymmword ptr [rbx+20h]
    vmovups ymmword ptr [rax+20h], ymm0
    vmovups ymm0, ymmword ptr [rbx+40h]
    vmovups ymmword ptr [rax+40h], ymm0
    vmovups ymm0, ymmword ptr [rbx+60h]
    vmovups ymmword ptr [rax+60h], ymm0
    vmovups ymmword ptr [rax+80h], ymm1
    vmovups ymm1, ymmword ptr [rbx+0A0h]
    vmovups ymmword ptr [rax+0A0h], ymm1
    vmovups xmm1, xmmword ptr [rbx+0C0h]
  }
  _RBX = cachedDvars;
  __asm { vmovups xmmword ptr [rax+0C0h], xmm1 }
  count = materialLayerInput->count;
  layerLimit = cachedDvars->layerLimit;
  v31 = layerLimit != -1;
  if ( layerLimit > -1 )
  {
    v31 = layerLimit < count;
    if ( layerLimit < (int)count )
      count = cachedDvars->layerLimit;
  }
  __asm { vmovss  xmm0, dword ptr [rbx+20h] }
  p.layerCount = count;
  p.layerOffset = materialLayerInput->offset;
  p.layerMask = node->layerMask;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm0, xmm6
  }
  p.vertexScale = *vertexScale;
  p.vertexOffset = *vertexBias;
  if ( v31 )
  {
    __asm
    {
      vmovss  xmm0, [rsp+128h+lodScale]
      vmovss  xmm1, [rsp+128h+lodBias]
      vmovss  [rsp+128h+p.lodParamScale], xmm0
      vmovss  [rsp+128h+p.lodParamOffset], xmm1
    }
  }
  else
  {
    __asm
    {
      vmovss  [rsp+128h+p.lodParamScale], xmm6
      vmovss  [rsp+128h+p.lodParamOffset], xmm0
    }
  }
  v35 = (char *)surface - (char *)terrain->surfaces;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm0, xmm0, cs:__real@3f000000
  }
  p.layerSurfaceMapBaseIndex = 0;
  __asm
  {
    vmovss  dword ptr [rsp+128h+p.generatedVerticesOffset], xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, cs:__real@3f000000
    vmovss  dword ptr [rsp+128h+p.generatedVerticesOffset+4], xmm1
  }
  v42 = truncate_cast<unsigned int,__int64>(v35 / 376);
  __asm { vcomiss xmm6, dword ptr [rbx+10h] }
  p.surfaceIndex = v42;
  if ( v31 )
  {
    _RAX = 0i64;
    displacementScalesCount = surface->displacementScalesCount;
    if ( displacementScalesCount )
    {
      _R9 = surface->displacementScales;
      while ( (node->layerMask & surface->layerDisplacementMask & _R9[_RAX].mask) == 0 )
      {
        _RAX = (unsigned int)(_RAX + 1);
        if ( (unsigned int)_RAX >= displacementScalesCount )
          goto LABEL_17;
      }
      __asm
      {
        vmovss  xmm0, dword ptr [r9+rax*8+4]
        vmovss  [rsp+128h+p.maxDisplacementScale], xmm0
      }
    }
  }
LABEL_17:
  tileDataLimit = s_stGlob.tileDataLimit;
  data = (char *)frameData->tileData.data;
  p_tileDataCount = &frameData->tileDataCount;
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 561, ASSERT_TYPE_ASSERT, "(resourceArray)", (const char *)&queryFormat, "resourceArray") )
    __debugbreak();
  v50 = tileDataCount;
  if ( !tileDataCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 562, ASSERT_TYPE_ASSERT, "(allocCount > 0)", (const char *)&queryFormat, "allocCount > 0") )
    __debugbreak();
  if ( ((unsigned __int8)p_tileDataCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)p_tileDataCount) )
    __debugbreak();
  v51 = _InterlockedExchangeAdd(p_tileDataCount, tileDataCount);
  *tileDataIndexOut = v51;
  if ( v51 + tileDataCount >= tileDataLimit )
  {
    *tileDataIndexOut = 0;
    R_WarnOncePerFrame(R_WARN_ST_FRAME_TILE_DATA_LIMIT, tileDataLimit);
    if ( ((unsigned __int8)p_tileDataCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)p_tileDataCount) )
      __debugbreak();
    _InterlockedExchangeAdd(p_tileDataCount, -tileDataCount);
    goto LABEL_35;
  }
  v52 = (HLSL::TerrainTileData *)&data[172 * v51];
  if ( !v52 )
  {
LABEL_35:
    result = 0;
    goto LABEL_36;
  }
  if ( tileDataCount )
  {
    do
    {
      HLSL::TerrainTileData::SetFrom(v52++, &p);
      --v50;
    }
    while ( v50 );
  }
  result = 1;
LABEL_36:
  _R11 = &v57;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
  return result;
}

/*
==============
R_ST_AreAllLayeredTextureBaseMipsAvailable
==============
*/
bool R_ST_AreAllLayeredTextureBaseMipsAvailable(const StTerrainNode *node, const StDiskTerrainSurface *surface, TerrainSurfaceDataInfo *terrainSurfaceDataInfo)
{
  bool result; 
  unsigned int v8; 
  __int64 v9; 
  __int64 v10; 

  _ESI = node->layerMask;
  result = 1;
  while ( _ESI )
  {
    if ( !result )
      break;
    __asm { tzcnt   ebx, esi }
    _ESI &= ~(1 << _EBX);
    if ( _EBX >= surface->layerMaskMapIdxsCount )
    {
      LODWORD(v10) = surface->layerMaskMapIdxsCount;
      LODWORD(v9) = _EBX;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 718, ASSERT_TYPE_ASSERT, "(unsigned)( materialLayerIndex ) < (unsigned)( surface.layerMaskMapIdxsCount )", "materialLayerIndex doesn't index surface.layerMaskMapIdxsCount\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    v8 = 0;
    terrainSurfaceDataInfo->layerMaskResourceRequestMask |= 1 << _EBX;
    result = ((1 << _EBX) & terrainSurfaceDataInfo->layerMaskResourceAvailableMask) != 0;
    do
    {
      result = result && (terrainSurfaceDataInfo->layerMaterialResourceRequestMask[(unsigned __int8)_EBX] |= 1 << v8, ((unsigned __int8)(1 << v8) & terrainSurfaceDataInfo->layerMaterialResourceAvailableMask[(unsigned __int8)_EBX]) != 0);
      ++v8;
    }
    while ( v8 < 4 );
  }
  return result;
}

/*
==============
R_ST_AreAllMaterialLayerBaseMipsAvailable
==============
*/
char R_ST_AreAllMaterialLayerBaseMipsAvailable(const StTerrainMaterialLayer *materialLayer)
{
  int v1; 
  __int64 i; 
  const StTerrain *terrain; 
  unsigned __int16 v5; 
  const GfxImage *v6; 

  v1 = 0;
  for ( i = 0i64; ; ++i )
  {
    terrain = s_stGlob.terrain;
    v5 = materialLayer->materialTextureIdxs[i];
    if ( !s_stGlob.terrain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1029, ASSERT_TYPE_ASSERT, "(terrain)", (const char *)&queryFormat, "terrain") )
      __debugbreak();
    if ( v5 != 0xFFFF && v5 < terrain->flattenedImagesCount )
    {
      v6 = terrain->flattenedImages[v5];
      if ( v6 )
      {
        Stream_UsedImage(v6);
        if ( !Stream_CheckImageLowMipUsable(v6) && (!v6->fallback || !r_st_fallbackImagesOkForLayering->current.enabled) )
          break;
      }
    }
    if ( (unsigned int)++v1 >= 4 )
      return 1;
  }
  return 0;
}

/*
==============
R_ST_AreNodeLayersReadyForCompositing
==============
*/
char R_ST_AreNodeLayersReadyForCompositing(const StDiskTerrainSurface *surface, const StTerrainNode *node, unsigned int virtualTextureMipLevel)
{
  unsigned int v5; 
  const StDiskTerrainSurface *v6; 
  char v9; 
  unsigned int v10; 
  unsigned int layerMask; 
  __int64 v14; 
  unsigned __int16 *v18; 
  unsigned __int16 v22; 
  int v23; 
  unsigned __int16 v24; 
  unsigned __int16 v25; 
  GfxImage *v26; 
  int v27; 
  StreamImageMip v28; 
  char v29; 
  GfxImage *v30; 
  int v31; 
  StreamImageMip v32; 
  char v33; 
  GfxImage *v34; 
  int v35; 
  StreamImageMip v36; 

  v5 = virtualTextureMipLevel;
  v6 = surface;
  if ( (node->mesh.flags.packed & 1) != 0 )
    return 0;
  __asm { vmovss  xmm0, dword ptr [rcx+84h] }
  v9 = 1;
  v10 = 0;
  layerMask = node->layerMask;
  __asm
  {
    vmovaps [rsp+68h+var_38], xmm6
    vmulss  xmm6, xmm0, cs:__real@42480000
  }
  if ( surface->layerMaterialsCount )
  {
    __asm
    {
      vmovaps [rsp+68h+var_48], xmm7
      vmovss  xmm7, cs:__real@40000000
    }
    do
    {
      if ( _bittest((const int *)&layerMask, v10) )
      {
        v14 = (__int64)&v6->layerMaterials[v10];
        __asm
        {
          vmulss  xmm1, xmm7, dword ptr [rbx+68h]
          vmulss  xmm2, xmm1, dword ptr [r15+84h]
          vdivss  xmm0, xmm6, xmm2; X
        }
        log2f(*(float *)&_XMM0);
        v18 = *(unsigned __int16 **)(v14 + 8);
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vroundss xmm1, xmm1, xmm0, 2
          vcvttss2si ebp, xmm1
        }
        v22 = *v18;
        v23 = _EBP - v5;
        v24 = v18[1];
        if ( v23 < 0 )
          v23 = 0;
        v25 = v18[2];
        if ( v22 != 0xFFFF )
        {
          v26 = s_stGlob.terrain->flattenedImages[v22];
          v27 = v26->levelCount - v23;
          if ( v27 < 0 )
            v27 = 0;
          v28 = 4 - v27;
          if ( 4 - v27 < 1 )
            v28 = MIP3;
          if ( !Stream_TouchImageAndCheck(v26, v28) )
            goto LABEL_16;
        }
        if ( v9 )
          v29 = 1;
        else
LABEL_16:
          v29 = 0;
        if ( v24 != 0xFFFF )
        {
          v30 = s_stGlob.terrain->flattenedImages[v24];
          v31 = v30->levelCount - v23;
          if ( v31 < 0 )
            v31 = 0;
          v32 = 4 - v31;
          if ( 4 - v31 < 1 )
            v32 = MIP3;
          if ( !Stream_TouchImageAndCheck(v30, v32) )
            goto LABEL_23;
        }
        if ( v29 )
          v33 = 1;
        else
LABEL_23:
          v33 = 0;
        if ( v25 != 0xFFFF )
        {
          v34 = s_stGlob.terrain->flattenedImages[v25];
          v35 = v34->levelCount - v23;
          if ( v35 < 0 )
            v35 = 0;
          v36 = 4 - v35;
          if ( 4 - v35 < 1 )
            v36 = MIP3;
          if ( !Stream_TouchImageAndCheck(v34, v36) )
            goto LABEL_30;
        }
        if ( v33 )
          v9 = 1;
        else
LABEL_30:
          v9 = 0;
        v5 = virtualTextureMipLevel;
      }
      ++v10;
    }
    while ( v10 < v6->layerMaterialsCount );
    __asm { vmovaps xmm7, [rsp+68h+var_48] }
  }
  __asm { vmovaps xmm6, [rsp+68h+var_38] }
  return v9;
}

/*
==============
R_ST_CacheFrontEndDvars
==============
*/
void R_ST_CacheFrontEndDvars(StCachedFrontEndDvars *cachedDvarsOut)
{
  bool v14; 
  bool enabled; 
  const dvar_t *v23; 
  char v24; 
  volatile __int64 v26; 

  _RAX = r_st_lodMorphControl;
  _RBX = cachedDvarsOut;
  __asm
  {
    vmovss  xmm0, cs:?rg@@3Ur_globals_t@@A.stLodDistanceScale; distanceScale
    vmovaps [rsp+58h+var_18], xmm6
    vmovss  xmm6, dword ptr [rax+28h]
  }
  v26 = s_sceneLodScaleBias;
  __asm
  {
    vmovss  xmm3, dword ptr [rsp+58h+arg_0+4]; sceneLodBias
    vmovss  xmm2, dword ptr [rsp+58h+arg_0]; sceneLodScale
    vmovaps xmm1, xmm6; morphControl
  }
  *(float *)&_XMM0 = R_ST_GetAdjustedLodDistanceScale(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000
    vmovss  dword ptr [rbx], xmm0
    vmulss  xmm0, xmm0, xmm6
    vmulss  xmm1, xmm0, cs:__real@3f000000
    vsubss  xmm0, xmm2, xmm6
    vmovss  dword ptr [rbx+8], xmm0
    vmovss  dword ptr [rbx+4], xmm1
    vmovaps xmm6, [rsp+58h+var_18]
  }
  v14 = !CL_TransientsWorldMP_UseLowAlwaysloadedFlagging();
  _RAX = r_st_combined_bias_low;
  if ( v14 )
    _RAX = r_st_combined_bias_high;
  __asm
  {
    vmovss  xmm2, cs:?rg@@3Ur_globals_t@@A.correctedLodParms.invFovScale; r_globals_t rg
    vmovss  xmm1, dword ptr [rax+28h]
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm2, xmm0
  }
  if ( !v14 )
    __asm { vdivss  xmm1, xmm1, xmm2 }
  __asm { vmovss  dword ptr [rbx+0Ch], xmm1 }
  _RAX = r_st_displacementDistance;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+28h]
    vmulss  xmm1, xmm0, xmm0
    vmovss  dword ptr [rbx+10h], xmm1
  }
  _RBX->shadowLod = r_st_sm_lod->current.integer;
  LODWORD(_RBX->geomStreamLeadFactor) = r_st_streamLeadFactor->current.integer;
  _RBX->forceLod = r_st_forceLod->current.integer;
  LODWORD(_RBX->lodMorphOverride) = r_st_lodMorphOverride->current.integer;
  _RBX->layerLimit = r_st_layerLimit->current.integer;
  _RBX->cutoutMeshFilter = r_st_cutoutMeshFilter->current.unsignedInt;
  _RBX->allowLayerMask = r_st_allowLayerMask->current.enabled;
  _RBX->singleLayer = r_st_singleLayer->current.integer;
  _RBX->surfaceDebugColorMode = r_st_surfaceDebugColorMode->current.integer;
  _RBX->layerDebugColorMode = r_st_layerDebugColorMode->current.integer;
  enabled = r_st_showSurfaceBounds->current.enabled;
  _RBX->showSurfaceBounds = enabled;
  if ( enabled )
    goto LABEL_11;
  v23 = DVARINT_cg_drawTerrainStreamingInfo;
  if ( !DVARINT_cg_drawTerrainStreamingInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawTerrainStreamingInfo") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v23);
  if ( v23->current.integer > 1 )
LABEL_11:
    v24 = 1;
  else
    v24 = 0;
  _RBX->showSurfaceBounds = v24;
  _RBX->showTileBounds = r_st_showTileBounds->current.enabled;
}

/*
==============
R_ST_CachedSunShadowMapBitsForBounds
==============
*/
void R_ST_CachedSunShadowMapBitsForBounds(const Bounds *wldBounds, const GfxSunShadow *sunShadow, unsigned int *mapsToDrawInOut)
{
  const GfxSunShadow *v13; 
  unsigned int firstCachedSunShadowPartition; 
  __int64 v18; 
  __int64 v19; 
  unsigned int v20; 
  unsigned int v21; 
  int v28; 
  __int64 v29; 
  bool v30; 

  v13 = sunShadow;
  _RSI = wldBounds;
  if ( !*mapsToDrawInOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2214, ASSERT_TYPE_ASSERT, "(mapsToDrawInOut)", (const char *)&queryFormat, "mapsToDrawInOut") )
    __debugbreak();
  firstCachedSunShadowPartition = rg.firstCachedSunShadowPartition;
  if ( rg.firstCachedSunShadowPartition <= (unsigned int)rg.lastCachedSunShadowPartition )
  {
    __asm
    {
      vmovaps [rsp+0E8h+var_38], xmm6
      vmovaps [rsp+0E8h+var_48], xmm7
      vmovaps [rsp+0E8h+var_58], xmm8
      vmovaps [rsp+0E8h+var_68], xmm9
      vmovaps [rsp+0E8h+var_78], xmm10
      vmovaps [rsp+0E8h+var_88], xmm11
      vmovaps [rsp+0E8h+var_98], xmm12
      vmovaps [rsp+0E8h+var_A8], xmm13
      vmovss  xmm13, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovaps [rsp+0E8h+var_B8], xmm14
      vxorps  xmm14, xmm14, xmm14
    }
    do
    {
      if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 383, ASSERT_TYPE_ASSERT, "(sunShadow)", (const char *)&queryFormat, "sunShadow") )
        __debugbreak();
      if ( !R_IsCachedSunShadowPartition(v13, firstCachedSunShadowPartition) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 384, ASSERT_TYPE_ASSERT, "(R_IsCachedSunShadowPartition( sunShadow, partitionIndex ))", (const char *)&queryFormat, "R_IsCachedSunShadowPartition( sunShadow, partitionIndex )") )
        __debugbreak();
      v18 = firstCachedSunShadowPartition - v13->firstCachedSunShadowPartition;
      v19 = (__int64)&v13->partitionCache[v18];
      if ( (const GfxSunShadow *)((char *)v13 + 8656 * v18) == (const GfxSunShadow *)-2480i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2219, ASSERT_TYPE_ASSERT, "(partitionCache)", (const char *)&queryFormat, "partitionCache") )
        __debugbreak();
      v20 = 0;
      if ( *(_DWORD *)(v19 + 4) )
      {
        do
        {
          if ( (firstCachedSunShadowPartition >= 3 || v20 >= 0xA) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2173, ASSERT_TYPE_ASSERT, "(partitionIndex < R_SUNSHADOW_OPAQUE_PARTITION_COUNT && cellIndex < ( 9 + 1 ))", (const char *)&queryFormat, "partitionIndex < R_SUNSHADOW_OPAQUE_PARTITION_COUNT && cellIndex < CACHED_SUN_SHADOW_CELL_MAX_OVERLAP") )
            __debugbreak();
          v21 = v20 + 10 * (firstCachedSunShadowPartition - rg.firstCachedSunShadowPartition) + 3;
          if ( v21 >= 0x17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2175, ASSERT_TYPE_ASSERT, "(shift < ST_SUN_SHADOW_MAP_BITS_BIT_COUNT)", (const char *)&queryFormat, "shift < ST_SUN_SHADOW_MAP_BITS_BIT_COUNT") )
            __debugbreak();
          if ( (*mapsToDrawInOut & (1 << v21)) != 0 )
          {
            __asm
            {
              vmovss  xmm7, dword ptr [rsi+0Ch]
              vmovss  xmm8, dword ptr [rsi]
              vmovss  xmm9, dword ptr [rsi+4]
              vmovss  xmm10, dword ptr [rsi+10h]
              vmovss  xmm11, dword ptr [rsi+8]
              vmovss  xmm12, dword ptr [rsi+14h]
            }
            v28 = 0;
            v29 = *(_QWORD *)(864i64 * v20 + v19 + 16);
            v30 = __CFADD__(v29, 48i64) || v29 == -48;
            _RAX = v29 + 48;
            while ( 1 )
            {
              __asm
              {
                vmovss  xmm1, dword ptr [rax]
                vmovss  xmm5, dword ptr [rax+4]
                vmovss  xmm6, dword ptr [rax+8]
                vandps  xmm0, xmm1, xmm13
                vmulss  xmm2, xmm0, xmm7
                vmulss  xmm0, xmm8, xmm1
                vaddss  xmm1, xmm0, dword ptr [rax+0Ch]
                vaddss  xmm3, xmm2, xmm1
                vmulss  xmm2, xmm9, xmm5
                vmulss  xmm1, xmm11, xmm6
                vaddss  xmm4, xmm3, xmm2
                vandps  xmm5, xmm5, xmm13
                vmulss  xmm0, xmm5, xmm10
                vaddss  xmm2, xmm4, xmm0
                vandps  xmm6, xmm6, xmm13
                vaddss  xmm3, xmm2, xmm1
                vmulss  xmm0, xmm6, xmm12
                vaddss  xmm1, xmm3, xmm0
                vcomiss xmm1, xmm14
              }
              if ( v30 )
                break;
              ++v28;
              _RAX += 16i64;
              v30 = (unsigned int)v28 <= 4;
              if ( v28 >= 4 )
                goto LABEL_29;
            }
            *mapsToDrawInOut &= ~(1 << v21);
          }
LABEL_29:
          ++v20;
        }
        while ( v20 < *(_DWORD *)(v19 + 4) );
        v13 = sunShadow;
      }
      ++firstCachedSunShadowPartition;
    }
    while ( firstCachedSunShadowPartition <= rg.lastCachedSunShadowPartition );
    __asm
    {
      vmovaps xmm14, [rsp+0E8h+var_B8]
      vmovaps xmm13, [rsp+0E8h+var_A8]
      vmovaps xmm12, [rsp+0E8h+var_98]
      vmovaps xmm11, [rsp+0E8h+var_88]
      vmovaps xmm10, [rsp+0E8h+var_78]
      vmovaps xmm9, [rsp+0E8h+var_68]
      vmovaps xmm8, [rsp+0E8h+var_58]
      vmovaps xmm7, [rsp+0E8h+var_48]
      vmovaps xmm6, [rsp+0E8h+var_38]
    }
  }
}

/*
==============
R_ST_CanDrawNode
==============
*/
_BOOL8 R_ST_CanDrawNode(const StDiskTerrainSurface *surface, const StTerrainNode *node, unsigned int gridLevel, const vec3_t *worldSpaceCamPos)
{
  unsigned int v9; 
  char v13; 
  char v14; 
  bool v15; 
  StCombinedMapUsage v16; 
  bool v17; 

  _RBX = node;
  v9 = surface->grid.numLevels - 1;
  *(float *)&_XMM0 = R_ST_DistanceToNodeWorldSpace(worldSpaceCamPos, node, surface);
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+64h]
    vmulss  xmm2, xmm1, cs:__real@40000000
    vmulss  xmm3, xmm0, [rsp+28h+adjustedLodDistanceScale]
    vcomiss xmm3, xmm2
  }
  v15 = !(v13 | v14);
  if ( v13 | v14 || gridLevel != v9 )
    return v15;
  v16 = R_ST_CombinedMapUsageForSurface(surface, worldSpaceCamPos);
  v17 = v15;
  if ( v16 != ST_COMBINED_MAP_USAGE_ALL )
    return 0;
  return v17;
}

/*
==============
R_ST_CheckAndTouchImageLowMipUsable
==============
*/
bool R_ST_CheckAndTouchImageLowMipUsable(const GfxImage *image)
{
  Stream_UsedImage(image);
  return Stream_CheckImageLowMipUsable(image);
}

/*
==============
R_ST_ChildNodesForNode
==============
*/
void R_ST_ChildNodesForNode(const StDiskTerrainSurface *surface, const StTerrainNode *node, unsigned int gridLevel, const StTerrainNode **childNodesOut)
{
  StTerrainGridLevel *v8; 
  unsigned int v9; 
  unsigned int v10; 

  if ( !childNodesOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1764, ASSERT_TYPE_ASSERT, "(childNodesOut)", (const char *)&queryFormat, "childNodesOut") )
    __debugbreak();
  if ( !gridLevel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1765, ASSERT_TYPE_ASSERT, "(gridLevel > 0)", (const char *)&queryFormat, "gridLevel > 0") )
    __debugbreak();
  v8 = &surface->grid.levels[gridLevel - 1];
  v9 = 2 * (node->xIndex + v8->width * node->yIndex);
  *childNodesOut = &v8->nodes[v9];
  childNodesOut[1] = &v8->nodes[v9 + 1];
  v10 = v8->width + v9;
  childNodesOut[2] = &v8->nodes[v10];
  childNodesOut[3] = &v8->nodes[v10 + 1];
}

/*
==============
R_ST_CollectCachedSunShadowNodesCallback
==============
*/
char R_ST_CollectCachedSunShadowNodesCallback(const StTerrainNode *node, unsigned int gridLevel, StCollectCachedSunShadowNodesCallbackStaticParams *staticCallbackParams, const StCollectCachedSunShadowNodesCallbackDynamicParams *dynamicCallbackParamsIn, StCollectCachedSunShadowNodesCallbackDynamicParams *dynamicCallbackParamsOut)
{
  unsigned int activeCells; 
  const StCachedFrontEndDvars *cachedDvars; 
  const GfxSunShadow *sunShadow; 
  StCachedSunShadowCellList *fmt; 
  StCachedSunShadowNodeInfo nodeInfo; 

  if ( !staticCallbackParams->sunShadow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2455, ASSERT_TYPE_ASSERT, "(staticCallbackParams.sunShadow)", (const char *)&queryFormat, "staticCallbackParams.sunShadow") )
    __debugbreak();
  if ( !staticCallbackParams->cachedDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2456, ASSERT_TYPE_ASSERT, "(staticCallbackParams.cachedDvars)", (const char *)&queryFormat, "staticCallbackParams.cachedDvars") )
    __debugbreak();
  if ( !staticCallbackParams->cellList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2457, ASSERT_TYPE_ASSERT, "(staticCallbackParams.cellList)", (const char *)&queryFormat, "staticCallbackParams.cellList") )
    __debugbreak();
  if ( !dynamicCallbackParamsIn->activeCells && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2458, ASSERT_TYPE_ASSERT, "(dynamicCallbackParamsIn.activeCells)", (const char *)&queryFormat, "dynamicCallbackParamsIn.activeCells") )
    __debugbreak();
  if ( (node->mesh.flags.packed & 1) == 0 )
  {
    dynamicCallbackParamsOut->activeCells = dynamicCallbackParamsIn->activeCells;
    R_ST_CachedSunShadowMapBitsForBounds(&node->wldBounds, staticCallbackParams->sunShadow, &dynamicCallbackParamsOut->activeCells);
    activeCells = dynamicCallbackParamsOut->activeCells;
    if ( dynamicCallbackParamsOut->activeCells )
    {
      if ( gridLevel && (signed int)gridLevel > staticCallbackParams->cachedDvars->shadowLod )
        return 1;
      cachedDvars = staticCallbackParams->cachedDvars;
      sunShadow = staticCallbackParams->sunShadow;
      nodeInfo.surfaceIdx = staticCallbackParams->surfaceIdx;
      fmt = staticCallbackParams->cellList;
      nodeInfo.node = node;
      R_ST_AddNodeToCachedSunShadowCells(&nodeInfo, sunShadow, activeCells, cachedDvars, fmt);
    }
  }
  return 0;
}

/*
==============
R_ST_CombinedMapDistanceSqThreshold
==============
*/
float R_ST_CombinedMapDistanceSqThreshold(bool applyADSZoomFactor)
{
  bool v3; 

  v3 = !CL_TransientsWorldMP_UseLowAlwaysloadedFlagging();
  _RAX = r_st_combined_bias_low;
  if ( v3 )
    _RAX = r_st_combined_bias_high;
  __asm { vmovss  xmm1, dword ptr [rax+28h] }
  if ( applyADSZoomFactor )
  {
    __asm
    {
      vmovss  xmm2, cs:?rg@@3Ur_globals_t@@A.correctedLodParms.invFovScale; r_globals_t rg
      vxorps  xmm0, xmm0, xmm0
      vucomiss xmm2, xmm0
      vdivss  xmm1, xmm1, xmm2
    }
  }
  __asm
  {
    vmulss  xmm0, xmm1, xmm1
    vmulss  xmm0, xmm0, cs:__real@4d8fd72a
  }
  return *(float *)&_XMM0;
}

/*
==============
R_ST_CombinedMapUsageForSurface
==============
*/
__int64 R_ST_CombinedMapUsageForSurface(const StDiskTerrainSurface *surface, const vec3_t *viewPos)
{
  __int64 result; 
  bool v34; 
  bool v41; 
  __int128 v49; 
  __int128 v50; 
  __int128 v51; 

  if ( r_st_combined_force->current.enabled )
    return 2i64;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vmovaps [rsp+78h+var_18], xmm7
  }
  HIDWORD(v49) = 0;
  __asm
  {
    vmovups xmm4, xmmword ptr [rsp+20h]
    vmovss  xmm4, xmm4, xmm0
    vinsertps xmm4, xmm4, dword ptr [rdx+4], 10h
    vinsertps xmm4, xmm4, dword ptr [rdx+8], 20h ; ' '
    vmovss  xmm0, dword ptr [rcx+44h]
    vmovups xmmword ptr [rsp+20h], xmm4
  }
  HIDWORD(v50) = 0;
  __asm
  {
    vmovups xmm3, xmmword ptr [rsp+20h]
    vmovss  xmm3, xmm3, xmm0
    vinsertps xmm3, xmm3, dword ptr [rcx+48h], 10h
    vinsertps xmm3, xmm3, dword ptr [rcx+4Ch], 20h ; ' '
    vmovss  xmm0, dword ptr [rcx+50h]
    vmovups xmmword ptr [rsp+20h], xmm3
    vsubps  xmm1, xmm4, xmm3
  }
  HIDWORD(v51) = 0;
  __asm
  {
    vmovups xmm5, xmmword ptr [rsp+20h]
    vmovss  xmm5, xmm5, xmm0
    vmovups xmm0, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
    vinsertps xmm5, xmm5, dword ptr [rcx+54h], 10h
    vinsertps xmm5, xmm5, dword ptr [rcx+58h], 20h ; ' '
    vandnps xmm4, xmm0, xmm1
    vxorps  xmm0, xmm0, xmm0
    vsubps  xmm2, xmm4, xmm5
    vmaxps  xmm1, xmm2, xmm0
    vmulps  xmm3, xmm1, xmm1
    vhaddps xmm0, xmm3, xmm3
    vmovaps [rsp+78h+var_28], xmm8
    vaddps  xmm1, xmm5, xmm4
    vhaddps xmm8, xmm0, xmm0
    vmulps  xmm0, xmm1, xmm1
    vhaddps xmm2, xmm0, xmm0
    vmovaps [rsp+78h+var_38], xmm9
    vhaddps xmm9, xmm2, xmm2
  }
  v34 = !CL_TransientsWorldMP_UseLowAlwaysloadedFlagging();
  _RAX = r_st_combined_bias_low;
  if ( v34 )
    _RAX = r_st_combined_bias_high;
  __asm
  {
    vmovss  xmm2, cs:?rg@@3Ur_globals_t@@A.correctedLodParms.invFovScale; r_globals_t rg
    vmovss  xmm1, dword ptr [rax+28h]
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm2, xmm0
  }
  if ( !v34 )
    __asm { vdivss  xmm1, xmm1, xmm2 }
  __asm
  {
    vmulss  xmm0, xmm1, xmm1
    vmulss  xmm7, xmm0, cs:__real@4d8fd72a
  }
  v41 = !CL_TransientsWorldMP_UseLowAlwaysloadedFlagging();
  _RAX = r_st_combined_bias_low;
  if ( v41 )
    _RAX = r_st_combined_bias_high;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+28h]
    vcomiss xmm8, xmm7
    vmovaps xmm8, [rsp+78h+var_28]
    vmovaps xmm7, [rsp+78h+var_18]
  }
  if ( v41 )
  {
    __asm
    {
      vmulss  xmm0, xmm0, xmm0
      vmulss  xmm1, xmm0, cs:__real@4d8fd72a
      vcomiss xmm1, xmm9
    }
    result = 1i64;
  }
  else
  {
    result = 2i64;
  }
  __asm { vmovaps xmm9, [rsp+78h+var_38] }
  return result;
}

/*
==============
R_ST_ComputeOffsetToSurfaceMap
==============
*/
void R_ST_ComputeOffsetToSurfaceMap(const StDiskTerrainSurface *surface, const vec3_t *cameraWorldPosition, vec3_t *offToSurfaceMapX, vec3_t *offToSurfaceMapY, vec2_t *outHeightMapDx, vec2_t *outHeightMapDy)
{
  const StTerrain *terrain; 
  GfxImage *heightMap; 
  unsigned int v28; 
  double v144; 
  double v145; 
  double v146; 
  double v147; 
  double v148; 
  char v152; 
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
  terrain = s_stGlob.terrain;
  _RDI = surface;
  _R15 = outHeightMapDx;
  _R14 = offToSurfaceMapY;
  _R12 = outHeightMapDy;
  _RBP = offToSurfaceMapX;
  if ( !s_stGlob.terrain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1412, ASSERT_TYPE_ASSERT, "(terrain)", (const char *)&queryFormat, "terrain") )
    __debugbreak();
  __asm { vmovss  xmm15, cs:__real@3f800000 }
  heightMap = _RDI->heightMap;
  __asm
  {
    vmovss  xmm4, dword ptr [rdi+2Ch]
    vmovss  xmm5, dword ptr [rdi+28h]
  }
  v28 = terrain->maps[_RDI->surfaceMapSetIndex].paddedResolution - terrain->maps[_RDI->surfaceMapSetIndex].mapResolution;
  __asm
  {
    vmovss  xmm6, dword ptr [rdi+30h]
    vmovss  xmm7, dword ptr [rdi+34h]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, dword ptr [rdi+78h]
    vdivss  xmm0, xmm15, xmm1
    vmovss  [rsp+168h+var_118], xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, dword ptr [rdi+78h]
    vdivss  xmm3, xmm15, xmm1
    vmulss  xmm1, xmm5, xmm5
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vmovss  [rsp+168h+var_110], xmm3
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm7, xmm7
    vaddss  xmm2, xmm3, xmm0
    vsubss  xmm1, xmm2, xmm15
    vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm1, cs:__real@3b03126f
  }
  if ( heightMap->height >= v28 )
  {
    __asm
    {
      vsqrtss xmm0, xmm2, xmm2
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+168h+var_120], xmm1
      vcvtss2sd xmm0, xmm4, xmm4
      vcvtss2sd xmm2, xmm7, xmm7
      vmovsd  [rsp+168h+var_128], xmm2
      vcvtss2sd xmm3, xmm6, xmm6
      vmovsd  [rsp+168h+var_130], xmm3
      vmovsd  [rsp+168h+var_138], xmm0
      vcvtss2sd xmm4, xmm5, xmm5
      vmovsd  [rsp+168h+var_140], xmm4
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 770, ASSERT_TYPE_ASSERT, "( Vec4IsNormalized( quat ) )", "(%g, %g, %g, %g) len: %g", v144, v145, v146, v147, v148) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm2, dword ptr [rdi+2Ch]
    vmovss  xmm5, cs:__real@40000000
    vmulss  xmm1, xmm5, dword ptr [rdi+28h]
    vmulss  xmm14, xmm1, dword ptr [rdi+28h]
    vmulss  xmm6, xmm2, xmm1
    vmulss  xmm0, xmm2, xmm5
    vmulss  xmm11, xmm2, xmm0
    vmulss  xmm0, xmm5, dword ptr [rdi+30h]
    vmulss  xmm2, xmm0, dword ptr [rdi+34h]
    vmulss  xmm5, xmm0, dword ptr [rdi+30h]
    vaddss  xmm13, xmm2, xmm6
    vaddss  xmm1, xmm5, xmm11
    vsubss  xmm12, xmm15, xmm1
    vsubss  xmm1, xmm6, xmm2
    vmovss  xmm6, cs:__real@3f000000
    vmovss  [rsp+168h+var_114], xmm1
    vmulss  xmm1, xmm13, dword ptr [r13+4]
    vaddss  xmm0, xmm5, xmm14
    vmovss  xmm5, [rsp+168h+var_118]
    vsubss  xmm15, xmm15, xmm0
    vmulss  xmm0, xmm12, dword ptr [r13+0]
    vaddss  xmm4, xmm1, xmm0
    vmovss  dword ptr [rbp+0], xmm12
    vmovss  dword ptr [rbp+4], xmm13
    vmovss  xmm3, dword ptr [rdi+84h]
    vmovss  xmm2, dword ptr [rdi+38h]
    vmulss  xmm0, xmm12, xmm5
    vmovss  dword ptr [rbp+0], xmm0
    vsubss  xmm0, xmm3, xmm2
    vaddss  xmm2, xmm0, xmm4
    vmovss  xmm4, [rsp+168h+var_114]
    vmulss  xmm1, xmm13, xmm5
    vmovss  dword ptr [rbp+4], xmm1
    vmulss  xmm1, xmm2, xmm5
    vmovss  dword ptr [rbp+8], xmm1
  }
  _EAX = heightMap->width - v28;
  __asm
  {
    vmovd   xmm0, eax
    vcvtdq2ps xmm0, xmm0
    vdivss  xmm0, xmm6, xmm0
    vaddss  xmm1, xmm0, xmm1
    vmovss  dword ptr [rbp+8], xmm1
    vmulss  xmm0, xmm4, dword ptr [r13+0]
    vmulss  xmm2, xmm15, dword ptr [r13+4]
    vaddss  xmm3, xmm2, xmm0
    vmovss  xmm2, [rsp+168h+var_110]
    vmovss  dword ptr [r14], xmm4
    vmovss  dword ptr [r14+4], xmm15
    vmovss  xmm1, dword ptr [rdi+84h]
    vmovss  xmm0, dword ptr [rdi+3Ch]
    vsubss  xmm0, xmm1, xmm0
    vaddss  xmm1, xmm0, xmm3
    vmulss  xmm5, xmm4, xmm2
    vmulss  xmm4, xmm15, xmm2
    vmulss  xmm2, xmm1, xmm2
    vmovss  dword ptr [r14+8], xmm2
    vmovss  dword ptr [r14], xmm5
    vmovss  dword ptr [r14+4], xmm4
  }
  _EAX = heightMap->height - v28;
  __asm
  {
    vmovd   xmm0, eax
    vcvtdq2ps xmm0, xmm0
    vdivss  xmm0, xmm6, xmm0
    vaddss  xmm1, xmm0, xmm2
    vmovss  dword ptr [r14+8], xmm1
    vmovss  xmm3, dword ptr [rbp+4]
    vmovss  xmm0, dword ptr [rbp+0]
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm2, xmm0, xmm0
    vaddss  xmm7, xmm2, xmm1
    vxorps  xmm1, xmm1, xmm1
    vucomiss xmm7, xmm1
    vmulss  xmm3, xmm4, xmm4
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm6, xmm3, xmm0
  }
  if ( !_EAX )
    goto LABEL_16;
  __asm { vucomiss xmm6, xmm1 }
  if ( !heightMap->width || !heightMap->height )
  {
LABEL_16:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1439, ASSERT_TYPE_ASSERT, "(offToSurfaceMapXLenSq != 0.0f && offToSurfaceMapYLenSq != 0.0f && heightMap->width != 0 && heightMap->height != 0)", (const char *)&queryFormat, "offToSurfaceMapXLenSq != 0.0f && offToSurfaceMapYLenSq != 0.0f && heightMap->width != 0 && heightMap->height != 0") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm1, dword ptr [rbp+0]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm2, xmm0, xmm7
    vdivss  xmm2, xmm1, xmm2
    vmovss  dword ptr [r15], xmm2
    vmovss  xmm1, dword ptr [rbp+4]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm2, xmm0, xmm7
    vdivss  xmm2, xmm1, xmm2
    vmovss  dword ptr [r15+4], xmm2
    vmovss  xmm1, dword ptr [r14]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm2, xmm0, xmm6
    vdivss  xmm2, xmm1, xmm2
    vmovss  dword ptr [r12], xmm2
    vmovss  xmm1, dword ptr [r14+4]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm2, xmm0, xmm6
    vdivss  xmm2, xmm1, xmm2
    vmovss  dword ptr [r12+4], xmm2
  }
  _R11 = &v152;
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
R_ST_DebugGetRenderedGeoStatsCallback
==============
*/
char R_ST_DebugGetRenderedGeoStatsCallback(const StTerrainNode *node, unsigned int gridLevel, StRenderedMeshGeoDebugInfoCallbackStaticParams *staticCallbackParams, const unsigned __int8 *__formal)
{
  __int64 v5; 
  const StDiskTerrainSurface *surface; 
  bool CanDrawNode; 
  __int64 i; 
  int v12; 
  unsigned __int16 vertexCount; 
  int v14; 
  StTerrainNode *childNodesOut[4]; 

  _RDI = staticCallbackParams;
  v5 = gridLevel;
  if ( !staticCallbackParams->debugInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 3516, ASSERT_TYPE_ASSERT, "(staticCallbackParams.debugInfo)", (const char *)&queryFormat, "staticCallbackParams.debugInfo") )
    __debugbreak();
  if ( (node->mesh.flags.packed & 1) != 0 )
    return 0;
  surface = _RDI->surface;
  CanDrawNode = (_DWORD)v5 == 0;
  if ( (_DWORD)v5 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+8]
      vmovss  dword ptr [rsp+78h+fmt], xmm0
    }
    CanDrawNode = R_ST_CanDrawNode(_RDI->surface, node, v5, &_RDI->worldSpaceCamPos);
  }
  if ( CanDrawNode )
  {
    ++_RDI->debugInfo->idealNodesRenderedPerLevel[v5];
    if ( (_DWORD)v5 )
    {
      v12 = 8;
      _RDI->debugInfo->indexSizePerLevel[v5] += 6 * node->mesh.triCount;
      vertexCount = node->mesh.vertexCount;
      if ( (node->mesh.flags.packed & 4) != 0 )
        v12 = 4;
      v14 = 0;
      if ( (node->mesh.flags.packed & 0x10) != 0 )
        v14 = vertexCount;
      _RDI->debugInfo->vertSizePerLevel[v5] += v12 * vertexCount + 4 * v14;
    }
    return 0;
  }
  R_ST_ChildNodesForNode(surface, node, v5, (const StTerrainNode **)childNodesOut);
  for ( i = 0i64; (unsigned int)i < 4; i = (unsigned int)(i + 1) )
  {
    if ( (childNodesOut[i]->mesh.flags.packed & 3) == 0 )
      ++_RDI->debugInfo->missingNodesPerLevel[v5];
  }
  return 1;
}

/*
==============
R_ST_DebugGetRenderedGeoStatsForSurface
==============
*/
void R_ST_DebugGetRenderedGeoStatsForSurface(const vec3_t *dpvsCamPos, const StDiskTerrainSurface *surface, StRenderedMeshGeoDebugInfo *renderedMeshGeoInfo)
{
  float v5; 
  unsigned int v8; 
  unsigned __int8 nodeCallbackDynamicParams[16]; 
  StRenderedMeshGeoDebugInfoCallbackStaticParams nodeCallbackStaticParams; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm { vmovsd  xmm0, qword ptr [rcx] }
  v5 = dpvsCamPos->v[2];
  nodeCallbackStaticParams.surface = surface;
  __asm { vmovsd  qword ptr [r11-30h], xmm0 }
  nodeCallbackStaticParams.worldSpaceCamPos.v[2] = v5;
  R_ST_CacheFrontEndDvars(&nodeCallbackStaticParams.cachedDvars);
  memset_0(renderedMeshGeoInfo, 0, sizeof(StRenderedMeshGeoDebugInfo));
  v8 = surface->grid.numLevels - 1;
  nodeCallbackStaticParams.debugInfo = renderedMeshGeoInfo;
  nodeCallbackDynamicParams[0] = 0;
  R_ST_TraverseTree_StRenderedMeshGeoDebugInfoCallbackStaticParams_unsigned_char_(surface, v8, (bool (__fastcall *)(const StTerrainNode *, unsigned int, StRenderedMeshGeoDebugInfoCallbackStaticParams *, const unsigned __int8 *, unsigned __int8 *))R_ST_DebugGetRenderedGeoStatsCallback, &nodeCallbackStaticParams, nodeCallbackDynamicParams);
}

/*
==============
R_ST_DistanceToNodeWorldSpace
==============
*/
float R_ST_DistanceToNodeWorldSpace(const vec3_t *worldSpacePos, const StTerrainNode *node, const StDiskTerrainSurface *surface)
{
  unsigned int v13; 
  char v44; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovss  xmm0, dword ptr [rcx]
    vmovss  xmm1, dword ptr [rcx+4]
    vmovss  [rsp+0A8h+var_68], xmm0
    vmovss  xmm0, dword ptr [rcx+8]
    vmovss  [rsp+0A8h+var_60], xmm0
    vmovss  [rsp+0A8h+var_64], xmm1
  }
  _R14 = surface;
  _RSI = node;
  _RBP = worldSpacePos;
  v13 = 0;
  do
  {
    _RDI = (int)v13;
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+rdi*4+58h]
      vsubss  xmm7, xmm0, dword ptr [rsi+rdi*4+64h]
      vmovss  xmm0, dword ptr [rsi+rdi*4+58h]
      vaddss  xmm8, xmm0, dword ptr [rsi+rdi*4+64h]
      vmovss  xmm6, [rsp+rdi*4+0A8h+var_68]
      vcomiss xmm6, xmm7
      vmovaps xmm6, xmm7
      vmovss  [rsp+rdi*4+0A8h+var_68], xmm6
      vcomiss xmm6, xmm8
    }
    ++v13;
    __asm { vmovss  [rsp+rdi*4+0A8h+var_68], xmm6 }
  }
  while ( v13 < 2 );
  __asm
  {
    vmovss  xmm1, dword ptr [r14+7Ch]
    vaddss  xmm1, xmm1, dword ptr [r14+40h]; min
    vaddss  xmm2, xmm1, dword ptr [r14+80h]; max
    vmovss  xmm0, dword ptr [rbp+8]; val
  }
  I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm1, dword ptr [rbp+0]
    vsubss  xmm5, xmm1, [rsp+0A8h+var_68]
    vmovss  xmm2, dword ptr [rbp+4]
    vsubss  xmm3, xmm2, [rsp+0A8h+var_64]
    vmovss  xmm1, dword ptr [rbp+8]
    vsubss  xmm4, xmm1, xmm0
    vmulss  xmm0, xmm5, xmm5
    vmulss  xmm2, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm1
    vsqrtss xmm0, xmm2, xmm2
  }
  _R11 = &v44;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, [rsp+0A8h+var_38]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
  return *(float *)&_XMM0;
}

/*
==============
R_ST_FillMaterialLayerBaseMipsAvailable
==============
*/
void R_ST_FillMaterialLayerBaseMipsAvailable(const StTerrainMaterialLayer *materialLayer, unsigned __int8 *layerMaterialResourceAvailableMask)
{
  unsigned int v4; 
  __int64 v5; 
  int v6; 
  char v7; 
  const StTerrain *terrain; 
  unsigned __int16 v9; 
  const GfxImage *v10; 
  char v11; 

  v4 = 0;
  v5 = 0i64;
  v6 = 1;
  do
  {
    v7 = 1;
    terrain = s_stGlob.terrain;
    v9 = materialLayer->materialTextureIdxs[v5];
    if ( !s_stGlob.terrain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1029, ASSERT_TYPE_ASSERT, "(terrain)", (const char *)&queryFormat, "terrain") )
      __debugbreak();
    if ( v9 != 0xFFFF && v9 < terrain->flattenedImagesCount )
    {
      v10 = terrain->flattenedImages[v9];
      if ( v10 )
      {
        if ( !Stream_CheckImageLowMipUsable(v10) && (!v10->fallback || !r_st_fallbackImagesOkForLayering->current.enabled) )
          v7 = 0;
      }
    }
    v11 = v6;
    if ( !v7 )
      v11 = 0;
    ++v4;
    *layerMaterialResourceAvailableMask |= v11;
    v6 = __ROL4__(v6, 1);
    ++v5;
  }
  while ( v4 < 4 );
}

/*
==============
R_ST_FreeMeshBuffers
==============
*/
void R_ST_FreeMeshBuffers(ID3D12Resource **vertexBuffer, ID3D12Resource **indexBuffer, ID3D12Resource **layerMaskBuffer)
{
  if ( !vertexBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 3151, ASSERT_TYPE_ASSERT, "(vertexBuffer)", (const char *)&queryFormat, "vertexBuffer") )
    __debugbreak();
  if ( !indexBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 3152, ASSERT_TYPE_ASSERT, "(indexBuffer)", (const char *)&queryFormat, "indexBuffer") )
    __debugbreak();
  if ( *vertexBuffer )
  {
    R_FreeStaticVertexBuffer(*vertexBuffer);
    R_AssignNullBuffer(vertexBuffer);
  }
  if ( *indexBuffer )
  {
    R_FreeStaticIndexBuffer(*indexBuffer);
    R_AssignNullBuffer(indexBuffer);
  }
  if ( layerMaskBuffer )
  {
    if ( *layerMaskBuffer )
    {
      R_FreeStaticVertexBuffer(*layerMaskBuffer);
      R_AssignNullBuffer(layerMaskBuffer);
    }
  }
}

/*
==============
R_ST_FrontEndFrameData
==============
*/
StFrameData *R_ST_FrontEndFrameData()
{
  __int64 frameDataIndex; 
  unsigned int v2; 
  int v3; 

  frameDataIndex = s_stGlob.frameDataIndex;
  if ( s_stGlob.frameDataIndex >= 2 )
  {
    v3 = 2;
    v2 = s_stGlob.frameDataIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 837, ASSERT_TYPE_ASSERT, "(unsigned)( frameDataIndex ) < (unsigned)( ST_FRAME_DATA_COUNT )", "frameDataIndex doesn't index ST_FRAME_DATA_COUNT\n\t%i not in [0, %i)", v2, v3) )
      __debugbreak();
  }
  return &s_stGlob.frameData[frameDataIndex];
}

/*
==============
R_ST_GenerateDrawSurfsForNode
==============
*/
void R_ST_GenerateDrawSurfsForNode(const StTerrainNode *node, const StDiskTerrainSurface *surface, const MaterialLayerInput *materialLayers, const GfxViewInfo *viewInfo, const HLSL::TerrainTileDataCode *surfaceTileData, const StCachedFrontEndDvars *cachedDvars, StFrameData *frameData, bool lightmapped, TerrainSurfaceDataInfo *terrainSurfaceDataInfo)
{
  unsigned int cutoutMeshFilter; 
  unsigned int v15; 
  const MaterialLayerInput *v16; 
  const HLSL::TerrainTileDataCode *v21; 
  GfxStDrawSurf *v22; 
  float fmt; 
  float lodBias; 
  HLSL::hlsl_2_t<float,vec2_t> vertexBias; 
  HLSL::hlsl_2_t<float,vec2_t> vertexScale; 
  unsigned int tileDataIndex; 

  if ( (node->mesh.flags.packed & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1732, ASSERT_TYPE_ASSERT, "(!node.mesh.flags.clippedOut)", (const char *)&queryFormat, "!node.mesh.flags.clippedOut") )
    __debugbreak();
  if ( node->mesh.triCount )
  {
    _RSI = cachedDvars;
    cutoutMeshFilter = cachedDvars->cutoutMeshFilter;
    if ( cutoutMeshFilter )
    {
      if ( cutoutMeshFilter == 1 )
      {
        v15 = 1;
LABEL_11:
        v16 = materialLayers;
        __asm
        {
          vmovss  xmm0, cs:__real@3f000000
          vdivss  xmm1, xmm0, dword ptr [rdi+64h]
          vmovss  xmm0, dword ptr [rsi+8]
          vmulss  xmm2, xmm1, dword ptr [rsi+4]
        }
        v21 = surfaceTileData;
        vertexBias = (HLSL::hlsl_2_t<float,vec2_t>)node->compressBase;
        vertexScale = (HLSL::hlsl_2_t<float,vec2_t>)node->compressScale;
        __asm
        {
          vmovss  [rsp+0A8h+lodBias], xmm0
          vmovss  dword ptr [rsp+0A8h+fmt], xmm2
        }
        if ( R_ST_AddTileDataForNode(surfaceTileData, node, surface, v16, fmt, lodBias, &vertexScale, &vertexBias, 1u, cachedDvars, 1, frameData, &tileDataIndex) )
        {
          if ( v15 + scene.superTerrainSurfCount > 0x400 )
          {
            R_WarnOncePerFrame(R_WARN_ST_FRAME_SURF_LIMIT, 1024i64);
          }
          else
          {
            v22 = &scene.superTerrainSurfs[scene.superTerrainSurfCount];
            scene.superTerrainSurfCount += v15;
            if ( v22 )
              R_ST_PopulateDrawSurfsForNode(node, surface, viewInfo, v21, _RSI, v22, v15, tileDataIndex, lightmapped, terrainSurfaceDataInfo);
          }
        }
        return;
      }
      v15 = node->mesh.cutoutTriCount != 0;
    }
    else
    {
      v15 = (node->mesh.cutoutTriCount != 0) + 1;
    }
    if ( !v15 )
      return;
    goto LABEL_11;
  }
}

/*
==============
R_ST_GenerateSunShadowDrawSurfsForNode
==============
*/
void R_ST_GenerateSunShadowDrawSurfsForNode(const StTerrainNode *node, const StDiskTerrainSurface *surface, const GfxViewInfo *viewInfo, const GfxSunShadow *sunShadow, const HLSL::TerrainTileDataCode *baseTileData, unsigned int mapsToDraw, const StCachedFrontEndDvars *cachedDvars, StFrameData *frameData, TerrainSurfaceDataInfo *terrainSurfaceDataInfo)
{
  unsigned int v12; 
  unsigned int v13; 
  const StCachedFrontEndDvars *v14; 
  int v15; 
  unsigned int cutoutMeshFilter; 
  unsigned int v17; 
  const HLSL::TerrainTileDataCode *v19; 
  float fmt; 
  float lodBias; 
  HLSL::hlsl_2_t<float,vec2_t> vertexScale; 
  MaterialLayerInput materialLayerInput; 
  HLSL::hlsl_2_t<float,vec2_t> vertexBias; 
  GfxViewInfo *viewInfoa; 

  viewInfoa = (GfxViewInfo *)viewInfo;
  if ( (node->mesh.flags.packed & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2268, ASSERT_TYPE_ASSERT, "(!node.mesh.flags.clippedOut)", (const char *)&queryFormat, "!node.mesh.flags.clippedOut") )
    __debugbreak();
  v12 = mapsToDraw;
  if ( !mapsToDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2269, ASSERT_TYPE_ASSERT, "(mapsToDraw)", (const char *)&queryFormat, "mapsToDraw") )
    __debugbreak();
  if ( node->mesh.triCount )
  {
    v13 = 0;
    v14 = cachedDvars;
    v15 = 1;
    cutoutMeshFilter = cachedDvars->cutoutMeshFilter;
    if ( cutoutMeshFilter )
    {
      if ( cutoutMeshFilter == 1 )
      {
        v17 = 1;
LABEL_14:
        vertexBias = (HLSL::hlsl_2_t<float,vec2_t>)node->compressBase;
        vertexScale = (HLSL::hlsl_2_t<float,vec2_t>)node->compressScale;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vmovss  [rsp+0B8h+lodBias], xmm0
        }
        v19 = baseTileData;
        materialLayerInput = 0i64;
        __asm { vmovss  dword ptr [rsp+0B8h+fmt], xmm0 }
        if ( R_ST_AddTileDataForNode(baseTileData, node, surface, &materialLayerInput, fmt, lodBias, &vertexScale, &vertexBias, 1u, cachedDvars, 0, frameData, &mapsToDraw) )
        {
          vertexBias = 0i64;
          do
          {
            if ( (v15 & v12) != 0 )
              R_ST_AddNodeDrawSurfsToList(node, surface, viewInfoa, v19, v14, v17, mapsToDraw, 0, scene.superTerrainSurfsSunShadow[v13], 0x200u, &scene.superTerrainSunShadowSurfCount[v13], (GfxStDrawSurf **)&vertexBias, terrainSurfaceDataInfo);
            ++v13;
            v15 = __ROL4__(v15, 1);
          }
          while ( v13 < 3 );
        }
        return;
      }
      v17 = node->mesh.cutoutTriCount != 0;
    }
    else
    {
      v17 = (node->mesh.cutoutTriCount != 0) + 1;
    }
    if ( !v17 )
      return;
    goto LABEL_14;
  }
}

/*
==============
R_ST_GeomStreamTerrainSurface
==============
*/

void __fastcall R_ST_GeomStreamTerrainSurface(const StDiskTerrainSurface *surface, const vec3_t *dpvsCamPos, double zoomFactor)
{
  float v7; 
  unsigned int numLevels; 
  __int64 v27; 
  unsigned __int8 nodeCallbackDynamicParams[8]; 
  volatile __int64 v29; 
  StGeomStreamStaticParams nodeCallbackStaticParams; 
  char v32; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-18h], xmm6
    vmovaps [rsp+98h+var_28], xmm7
    vmovaps xmmword ptr [r11-38h], xmm8
  }
  v7 = dpvsCamPos->v[2];
  __asm { vmovsd  xmm0, qword ptr [rdx] }
  numLevels = surface->grid.numLevels;
  __asm { vmovss  xmm7, cs:?rg@@3Ur_globals_t@@A.stLodDistanceScale; r_globals_t rg }
  nodeCallbackStaticParams.surface = surface;
  nodeCallbackStaticParams.worldSpaceCamPos.v[2] = v7;
  _RAX = r_st_lodMorphControl;
  __asm
  {
    vmovsd  qword ptr [rsp+98h+nodeCallbackStaticParams.worldSpaceCamPos], xmm0
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm2, xmm0
    vmovss  xmm8, dword ptr [rax+28h]
  }
  v29 = s_sceneLodScaleBiasWithoutFov;
  __asm { vmovaps xmm6, xmm2 }
  if ( (unsigned __int64)&v27 == _security_cookie && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1980, ASSERT_TYPE_ASSERT, "(zoomFactor > 0.0f)", (const char *)&queryFormat, "zoomFactor > 0.0f") )
    __debugbreak();
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000
    vdivss  xmm4, xmm2, xmm6
    vmulss  xmm3, xmm4, dword ptr [rsp+98h+var_60+4]; sceneLodBias
    vmulss  xmm2, xmm4, dword ptr [rsp+98h+var_60]; sceneLodScale
    vmovaps xmm1, xmm8; morphControl
    vmovaps xmm0, xmm7; distanceScale
  }
  *(float *)&_XMM0 = R_ST_GetAdjustedLodDistanceScale(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  nodeCallbackDynamicParams[0] = 0;
  __asm
  {
    vmulss  xmm0, xmm0, dword ptr [rax+28h]
    vmovss  [rsp+98h+nodeCallbackStaticParams.adjustedLodDistanceScale], xmm0
  }
  R_ST_TraverseTree_StGeomStreamStaticParams_unsigned_char_(surface, numLevels - 1, R_ST_GeomStream_Callback, &nodeCallbackStaticParams, nodeCallbackDynamicParams);
  _R11 = &v32;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, [rsp+98h+var_28]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
R_ST_GeomStream_Callback
==============
*/
bool R_ST_GeomStream_Callback(const StTerrainNode *node, unsigned int gridLevel, StGeomStreamStaticParams *staticCallbackParams, const unsigned __int8 *__formal)
{
  StreamKey *streamKey; 
  bool IsSafeToUse; 
  StreamKey *v9; 
  const StDiskTerrainSurface *surface; 

  _RSI = staticCallbackParams;
  streamKey = node->mesh.streamKey;
  if ( streamKey )
  {
    IsSafeToUse = Stream_GenericIsSafeToUse(streamKey);
    v9 = node->mesh.streamKey;
    if ( IsSafeToUse )
      Stream_UsedGeneric(v9);
    else
      Stream_RequestGeneric(v9);
  }
  surface = _RSI->surface;
  if ( (node->mesh.flags.packed & 8) == 0 )
    R_ST_SurfaceBaseResourceStreamRequest(_RSI->surface, ST_SURFACE_STREAM_REQUEST_GEO_HEIGHTMAP);
  if ( node->mesh.cutoutTriCount )
    R_ST_SurfaceBaseResourceStreamRequest(surface, ST_SURFACE_STREAM_REQUEST_GEO_CUTOUTMAP);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+14h]
    vmovss  [rsp+38h+var_18], xmm0
  }
  return !R_ST_CanDrawNode(_RSI->surface, node, gridLevel, &_RSI->worldSpaceCamPos);
}

/*
==============
R_ST_GetAdjustedLodDistanceScale
==============
*/

float __fastcall R_ST_GetAdjustedLodDistanceScale(double distanceScale, double morphControl, double sceneLodScale, double sceneLodBias)
{
  bool v12; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps [rsp+68h+var_38], xmm8
    vmovaps [rsp+68h+var_48], xmm9
    vmovaps xmm9, xmm0
    vmovaps xmm7, xmm3
    vmovaps xmm8, xmm2
    vmovaps xmm6, xmm1
  }
  v12 = !CL_TransientsWorldMP_UseLowAlwaysloadedFlagging();
  _RAX = r_st_lod_transition_scaler_low;
  if ( v12 )
    _RAX = r_st_lod_transition_scaler_high;
  __asm
  {
    vmovss  xmm4, dword ptr [rax+28h]
    vdivss  xmm0, xmm9, xmm4
    vmovaps xmm9, [rsp+68h+var_48]
    vmulss  xmm1, xmm0, xmm8
    vmovaps xmm8, [rsp+68h+var_38]
    vaddss  xmm2, xmm1, xmm7
    vminss  xmm3, xmm2, cs:__real@3f800000
    vsubss  xmm1, xmm6, cs:__real@3f800000
    vmovaps xmm7, [rsp+68h+var_28]
    vxorps  xmm0, xmm0, xmm0
    vmaxss  xmm4, xmm3, xmm0
    vmovss  xmm0, cs:__real@3f3504f3
    vdivss  xmm2, xmm0, xmm6
    vmovaps xmm6, [rsp+68h+var_18]
    vmulss  xmm5, xmm4, xmm1
    vmulss  xmm0, xmm5, xmm2
  }
  return *(float *)&_XMM0;
}

/*
==============
R_ST_GetBindlessImageFromFlattenedIndex
==============
*/
GfxImage *R_ST_GetBindlessImageFromFlattenedIndex(unsigned __int16 index)
{
  const StTerrain *terrain; 

  terrain = s_stGlob.terrain;
  if ( !s_stGlob.terrain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1029, ASSERT_TYPE_ASSERT, "(terrain)", (const char *)&queryFormat, "terrain") )
    __debugbreak();
  if ( index == 0xFFFF || index >= terrain->flattenedImagesCount )
    return 0i64;
  else
    return terrain->flattenedImages[index];
}

/*
==============
R_ST_GetBindlessIndexFromFlattenedIndex
==============
*/
__int64 R_ST_GetBindlessIndexFromFlattenedIndex(unsigned __int16 index)
{
  const StTerrain *terrain; 
  __int64 result; 

  terrain = s_stGlob.terrain;
  if ( !s_stGlob.terrain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1013, ASSERT_TYPE_ASSERT, "(terrain)", (const char *)&queryFormat, "terrain") )
    __debugbreak();
  if ( index == 0xFFFF )
    return 0i64;
  result = index;
  if ( index >= terrain->flattenedImagesCount )
    return 0i64;
  return result;
}

/*
==============
R_ST_GetNodeAtLocation
==============
*/

const StTerrainNode *__fastcall R_ST_GetNodeAtLocation(const StDiskTerrainSurface *surface, unsigned int tileX, unsigned int tileY, double tileWidth)
{
  const StDiskTerrainSurface *v11; 
  char v12; 
  char v13; 
  char v17; 
  char v18; 
  unsigned int numLevels; 
  unsigned int v20; 
  __int64 v24; 
  const StTerrainNode *result; 
  double v34; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx+84h]
    vmulss  xmm0, xmm0, cs:__real@40000000
    vdivss  xmm0, xmm0, xmm3; X
    vmovaps [rsp+68h+var_28], xmm6
    vmovaps xmm6, xmm3
  }
  v11 = surface;
  *(float *)&_XMM0 = roundf(*(float *)&_XMM0);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm1
    vcvttss2si rbx, xmm0
  }
  if ( v12 )
    goto LABEL_4;
  __asm { vcomiss xmm0, cs:__real@4b800000 }
  if ( !(v12 | v13) )
  {
LABEL_4:
    v17 = 0;
    v12 = 0;
    v13 = 1;
  }
  else
  {
    v17 = 1;
  }
  __asm
  {
    vcomiss xmm0, xmm1
    vcomiss xmm0, cs:__real@4f800000
  }
  if ( v12 | v13 )
    v18 = 1;
  else
    v18 = 0;
  if ( !v17 || !v18 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+68h+var_30], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 437, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (IntegralType) 0x%jx == (FloatType) %f", "unsigned int __cdecl float_to_integral_cast<unsigned int,float>(float)", (unsigned int)_RBX, v34) )
      __debugbreak();
  }
  if ( tileX >= (unsigned int)_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 3011, ASSERT_TYPE_SANITY, "( tileX < widthInSectors )", (const char *)&queryFormat, "tileX < widthInSectors") )
    __debugbreak();
  if ( tileY >= (unsigned int)_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 3012, ASSERT_TYPE_SANITY, "( tileY < widthInSectors )", (const char *)&queryFormat, "tileY < widthInSectors") )
    __debugbreak();
  if ( !(_DWORD)_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 212, ASSERT_TYPE_ASSERT, "(value > 0)", (const char *)&queryFormat, "value > 0") )
    __debugbreak();
  numLevels = v11->grid.numLevels;
  v20 = 32 - __lzcnt(_RBX - 1);
  if ( v20 >= numLevels )
  {
    LODWORD(_RBX) = (unsigned int)_RBX >> (v20 - numLevels + 1);
    tileX >>= v20 - numLevels + 1;
    tileY >>= v20 - numLevels + 1;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm6, xmm6, xmm0
    }
    v20 = numLevels - 1;
  }
  v24 = (__int64)&v11->grid.levels[numLevels - v20 - 1];
  if ( (*(_DWORD *)v24 != (_DWORD)_RBX || *(_DWORD *)(v24 + 4) != (_DWORD)_RBX) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 3026, ASSERT_TYPE_SANITY, "( level.width == widthInSectors && level.height == widthInSectors )", (const char *)&queryFormat, "level.width == widthInSectors && level.height == widthInSectors") )
    __debugbreak();
  _RBX = (const StTerrainNode *)(*(_QWORD *)(v24 + 8) + 136i64 * (tileX + tileY * (_DWORD)_RBX));
  if ( _RBX->xIndex != tileX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 3028, ASSERT_TYPE_SANITY, "( node.xIndex == tileX )", (const char *)&queryFormat, "node.xIndex == tileX") )
    __debugbreak();
  if ( _RBX->yIndex != tileY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 3029, ASSERT_TYPE_SANITY, "( node.yIndex == tileY )", (const char *)&queryFormat, "node.yIndex == tileY") )
    __debugbreak();
  if ( (_RBX->mesh.flags.packed & 1) == 0 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+64h]
      vmulss  xmm1, xmm0, cs:__real@40000000
      vmovss  xmm2, cs:__real@3f800000
      vdivss  xmm3, xmm1, xmm6
      vsubss  xmm0, xmm2, xmm3
      vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm0, cs:__real@3a83126f
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 3031, ASSERT_TYPE_SANITY, "( node.mesh.flags.clippedOut || fabsf( 1 - 2 * node.wldBounds.halfSize.x / tileWidth ) < 0.001f )", (const char *)&queryFormat, "node.mesh.flags.clippedOut || fabsf( 1 - 2 * node.wldBounds.halfSize.x / tileWidth ) < 0.001f") )
      __debugbreak();
  }
  result = _RBX;
  __asm { vmovaps xmm6, [rsp+68h+var_28] }
  return result;
}

/*
==============
R_ST_Init
==============
*/
void R_ST_Init(void)
{
  __m256i v3; 
  __m256i v4; 
  __int64 v5; 
  StreamKeyBehavior v6; 

  if ( s_stGlob.terrain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 853, ASSERT_TYPE_ASSERT, "(glob.terrain == nullptr)", (const char *)&queryFormat, "glob.terrain == nullptr") )
    __debugbreak();
  if ( s_stGlob.layerDataLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 854, ASSERT_TYPE_ASSERT, "(glob.layerDataLimit == 0)", (const char *)&queryFormat, "glob.layerDataLimit == 0") )
    __debugbreak();
  if ( s_stGlob.tileDataLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 855, ASSERT_TYPE_ASSERT, "(glob.tileDataLimit == 0)", (const char *)&queryFormat, "glob.tileDataLimit == 0") )
    __debugbreak();
  if ( s_stGlob.frameDataIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 856, ASSERT_TYPE_ASSERT, "(glob.frameDataIndex == 0)", (const char *)&queryFormat, "glob.frameDataIndex == 0") )
    __debugbreak();
  R_ST_Clutter_Init();
  HIDWORD(v5) = 64;
  v3.m256i_i64[1] = 0i64;
  v4.m256i_i64[1] = 0i64;
  LOBYTE(v5) = 0;
  v3.m256i_i64[0] = (__int64)R_ST_StreamKeyLoadedFrontend;
  v3.m256i_i64[2] = (__int64)R_ST_StreamKeyUnloadedFrontend;
  v3.m256i_i64[3] = (__int64)R_ST_StreamKeyUnloadedBackend;
  __asm { vmovups ymm0, [rsp+0D8h+var_A8] }
  v4.m256i_i64[0] = (__int64)R_ST_StreamKeyDBPreRelease;
  v4.m256i_i64[2] = (__int64)R_ST_StreamKeyPtrFixupRelocateBackend;
  v4.m256i_i64[3] = (__int64)R_ST_StreamKeyUnmapOldAddressBackend;
  __asm
  {
    vmovups ymm1, [rsp+0D8h+var_88]
    vmovups [rsp+0D8h+var_58], ymm0
    vmovsd  xmm0, [rsp+0D8h+var_68]
    vmovups [rsp+0D8h+var_38], ymm1
    vmovsd  [rsp+0D8h+var_18], xmm0
  }
  StreamKey_SetBehavior(SKBI_TERRAIN, &v6);
}

/*
==============
R_ST_InitCachedSunShadowData
==============
*/
void R_ST_InitCachedSunShadowData(const StTerrain *terrain, const GfxSunShadow *sunShadow, StCachedFrontEndDvars *cachedDvars, StCachedSunShadowCellList *cellList, unsigned int cellsToInit)
{
  unsigned int v5; 
  unsigned int v10; 
  StDiskTerrainSurface *v11; 
  unsigned int numLevels; 
  unsigned int i; 
  StCachedSunShadowCell *v14; 
  GfxCachedSunShadow *staticEntry; 
  unsigned int v16; 
  unsigned int StNode; 
  GfxCachedSunShadow_StNode *v18; 
  unsigned int surfaceIdx; 
  StCollectCachedSunShadowNodesCallbackStaticParams nodeCallbackStaticParams; 
  unsigned int mapsToDrawInOut; 

  v5 = 0;
  if ( terrain->surfaceCount )
  {
    v10 = cellsToInit;
    do
    {
      mapsToDrawInOut = v10;
      v11 = &terrain->surfaces[v5];
      R_ST_CachedSunShadowMapBitsForBounds(&v11->wldBounds, sunShadow, &mapsToDrawInOut);
      if ( mapsToDrawInOut )
      {
        numLevels = v11->grid.numLevels;
        nodeCallbackStaticParams.sunShadow = sunShadow;
        nodeCallbackStaticParams.cachedDvars = cachedDvars;
        nodeCallbackStaticParams.surfaceIdx = v5;
        nodeCallbackStaticParams.cellList = cellList;
        R_ST_TraverseTree_StCollectCachedSunShadowNodesCallbackStaticParams_StCollectCachedSunShadowNodesCallbackDynamicParams_(v11, numLevels - 1, (bool (__fastcall *)(const StTerrainNode *, unsigned int, StCollectCachedSunShadowNodesCallbackStaticParams *, const StCollectCachedSunShadowNodesCallbackDynamicParams *, StCollectCachedSunShadowNodesCallbackDynamicParams *))R_ST_CollectCachedSunShadowNodesCallback, &nodeCallbackStaticParams, (const StCollectCachedSunShadowNodesCallbackDynamicParams *)&mapsToDrawInOut);
      }
      ++v5;
    }
    while ( v5 < terrain->surfaceCount );
  }
  for ( i = 0; i < cellList->cellCount; ++i )
  {
    v14 = &cellList->cells[i];
    if ( !v14->overlap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2520, ASSERT_TYPE_ASSERT, "(cell.overlap)", (const char *)&queryFormat, "cell.overlap") )
      __debugbreak();
    if ( v14->overlap->gen )
    {
      if ( !v14->overlap->staticEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2526, ASSERT_TYPE_ASSERT, "(cell.overlap->staticEntry)", (const char *)&queryFormat, "cell.overlap->staticEntry") )
        __debugbreak();
      staticEntry = v14->overlap->staticEntry;
      R_SunShadowCache_DeallocateStNodes(staticEntry);
      v16 = 0;
      staticEntry->finalized = 0;
      staticEntry->terrainFinalized = 0;
      if ( v14->nodeCount )
      {
        while ( 1 )
        {
          StNode = R_SunShadowCache_AllocateStNode();
          if ( StNode == -1 )
            break;
          if ( staticEntry->firstStNodeId == -1 )
            staticEntry->firstStNodeId = StNode;
          staticEntry->lastStNodeId = StNode;
          v18 = R_SunShadowCache_GetStNode(StNode);
          v18->node = v14->nodes[v16].node;
          surfaceIdx = v14->nodes[v16].surfaceIdx;
          if ( surfaceIdx > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)surfaceIdx, "unsigned", v14->nodes[v16].surfaceIdx) )
            __debugbreak();
          ++v16;
          v18->surfaceIdx = surfaceIdx;
          v18->surfsEmitted = 0;
          if ( v16 >= v14->nodeCount )
            goto LABEL_24;
        }
        R_WarnOncePerFrame(R_WARN_ST_CACHED_SUN_SHADOW_NODE_LIMIT, 0x2000i64);
      }
    }
LABEL_24:
    ;
  }
}

/*
==============
R_ST_InitFrameData
==============
*/
void R_ST_InitFrameData(StFrameData *frameData, const StTerrain *terrain)
{
  unsigned int layerDataLimit; 
  unsigned int tileDataLimit; 
  unsigned int flattenedImagesCount; 

  if ( !s_stGlob.layerDataLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 890, ASSERT_TYPE_ASSERT, "(s_stGlob.layerDataLimit > 0)", (const char *)&queryFormat, "s_stGlob.layerDataLimit > 0") )
    __debugbreak();
  if ( !s_stGlob.tileDataLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 891, ASSERT_TYPE_ASSERT, "(s_stGlob.tileDataLimit > 0)", (const char *)&queryFormat, "s_stGlob.tileDataLimit > 0") )
    __debugbreak();
  frameData->layerDataCount = 0;
  frameData->tileDataCount = 0;
  layerDataLimit = s_stGlob.layerDataLimit;
  if ( frameData->layerData.data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 872, ASSERT_TYPE_ASSERT, "(buffer.data == nullptr)", (const char *)&queryFormat, "buffer.data == nullptr") )
    __debugbreak();
  if ( !layerDataLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 873, ASSERT_TYPE_ASSERT, "(elementCount > 0)", (const char *)&queryFormat, "elementCount > 0") )
    __debugbreak();
  R_CreateGfxWrappedBuffer(&frameData->layerData, GfxWrappedBuffer_Structured, 108, layerDataLimit, GFX_DATA_FORMAT_R32_UINT, 0xCu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "Super terrain layer data");
  tileDataLimit = s_stGlob.tileDataLimit;
  if ( frameData->tileData.data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 872, ASSERT_TYPE_ASSERT, "(buffer.data == nullptr)", (const char *)&queryFormat, "buffer.data == nullptr") )
    __debugbreak();
  if ( !tileDataLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 873, ASSERT_TYPE_ASSERT, "(elementCount > 0)", (const char *)&queryFormat, "elementCount > 0") )
    __debugbreak();
  R_CreateGfxWrappedBuffer(&frameData->tileData, GfxWrappedBuffer_Structured, 172, tileDataLimit, GFX_DATA_FORMAT_R32_UINT, 0xCu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "Super terrain tile data");
  flattenedImagesCount = terrain->flattenedImagesCount;
  if ( flattenedImagesCount > 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 901, ASSERT_TYPE_ASSERT, "(numDescriptors <= ST_MAX_BINDLESS_TEXTURES)", (const char *)&queryFormat, "numDescriptors <= ST_MAX_BINDLESS_TEXTURES") )
    __debugbreak();
  R_CreateGfxDescriptorTable(&frameData->bindlessTable, GfxDescriptorTableType_Textures, flattenedImagesCount, "ST Bindless textures");
}

/*
==============
R_ST_IsAnyDepthRenderingAvailableForNode
==============
*/
char R_ST_IsAnyDepthRenderingAvailableForNode(const StDiskTerrainSurface *surface, const StTerrainNode *node, TerrainSurfaceDataInfo *terrainSurfaceDataInfo)
{
  StMeshFlags v3; 
  unsigned __int16 cutoutTriCount; 
  bool v5; 
  unsigned int baseResourceAvailableMask; 

  v3.packed = (unsigned __int8)node->mesh.flags;
  cutoutTriCount = node->mesh.cutoutTriCount;
  v5 = (v3.packed & 2) != 0;
  if ( (v3.packed & 8) == 0 )
  {
    v5 = 0;
    if ( (v3.packed & 2) != 0 )
    {
      terrainSurfaceDataInfo->baseResourceRequestMask |= 1u;
      if ( (terrainSurfaceDataInfo->baseResourceAvailableMask & 1) != 0 )
        v5 = 1;
    }
  }
  if ( !cutoutTriCount )
    return v5;
  if ( v5 )
  {
    baseResourceAvailableMask = terrainSurfaceDataInfo->baseResourceAvailableMask;
    terrainSurfaceDataInfo->baseResourceRequestMask |= 2u;
    if ( (baseResourceAvailableMask & 2) != 0 )
      return 1;
  }
  return 0;
}

/*
==============
R_ST_IsAnyGeoAvailableForSurface
==============
*/
char R_ST_IsAnyGeoAvailableForSurface(const StDiskTerrainSurface *surface, TerrainSurfaceDataInfo *terrainSurfaceDataInfo)
{
  StTerrainGridLevel *v3; 
  StTerrainNode *nodes; 
  StMeshFlags v5; 
  unsigned __int16 cutoutTriCount; 
  bool v7; 
  unsigned int baseResourceAvailableMask; 

  v3 = &surface->grid.levels[surface->grid.numLevels - 1];
  if ( *(_QWORD *)&v3->width != 0x100000001i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 697, ASSERT_TYPE_ASSERT, "(lowDetailLodLevel.width == 1 && lowDetailLodLevel.height == 1)", (const char *)&queryFormat, "lowDetailLodLevel.width == 1 && lowDetailLodLevel.height == 1") )
    __debugbreak();
  if ( !v3->nodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 698, ASSERT_TYPE_ASSERT, "(lowDetailLodLevel.nodes)", (const char *)&queryFormat, "lowDetailLodLevel.nodes") )
    __debugbreak();
  nodes = v3->nodes;
  v5.packed = (unsigned __int8)nodes->mesh.flags;
  cutoutTriCount = nodes->mesh.cutoutTriCount;
  v7 = (v5.packed & 2) != 0;
  if ( (v5.packed & 8) == 0 )
  {
    v7 = 0;
    if ( (v5.packed & 2) != 0 )
    {
      terrainSurfaceDataInfo->baseResourceRequestMask |= 1u;
      if ( (terrainSurfaceDataInfo->baseResourceAvailableMask & 1) != 0 )
        v7 = 1;
    }
  }
  if ( !cutoutTriCount )
    return v7;
  if ( v7 )
  {
    baseResourceAvailableMask = terrainSurfaceDataInfo->baseResourceAvailableMask;
    terrainSurfaceDataInfo->baseResourceRequestMask |= 2u;
    if ( (baseResourceAvailableMask & 2) != 0 )
      return 1;
  }
  return 0;
}

/*
==============
R_ST_IsAnyLitRenderingMethodAvailbleForNode
==============
*/
bool R_ST_IsAnyLitRenderingMethodAvailbleForNode(const StTerrainNode *node, const StDiskTerrainSurface *surface, const HLSL::TerrainTileDataCode *tileData, TerrainSurfaceDataInfo *terrainSurfaceDataInfo)
{
  StMeshFlags v4; 
  unsigned __int16 cutoutTriCount; 
  bool v7; 
  unsigned int baseResourceAvailableMask; 
  bool v9; 

  v4.packed = (unsigned __int8)node->mesh.flags;
  cutoutTriCount = node->mesh.cutoutTriCount;
  v7 = (v4.packed & 2) != 0;
  if ( (v4.packed & 8) == 0 )
  {
    v7 = 0;
    if ( (v4.packed & 2) != 0 )
    {
      terrainSurfaceDataInfo->baseResourceRequestMask |= 1u;
      if ( (terrainSurfaceDataInfo->baseResourceAvailableMask & 1) != 0 )
        v7 = 1;
    }
  }
  if ( cutoutTriCount )
  {
    if ( !v7 )
      return 0;
    baseResourceAvailableMask = terrainSurfaceDataInfo->baseResourceAvailableMask;
    terrainSurfaceDataInfo->baseResourceRequestMask |= 2u;
    v9 = (baseResourceAvailableMask & 2) == 0;
  }
  else
  {
    v9 = !v7;
  }
  return !v9 && (R_ST_AreAllLayeredTextureBaseMipsAvailable(node, surface, terrainSurfaceDataInfo) || (tileData->flags & 0x10) != 0);
}

/*
==============
R_ST_IsLoaded
==============
*/
bool R_ST_IsLoaded()
{
  return s_stGlob.terrain != NULL;
}

/*
==============
R_ST_IssueGeoMapStreamRequests
==============
*/
void R_ST_IssueGeoMapStreamRequests(const StDiskTerrainSurface *surface)
{
  R_ST_SurfaceBaseResourceStreamRequest(surface, ST_SURFACE_STREAM_REQUEST_GEO_HEIGHTMAP);
  R_ST_SurfaceBaseResourceStreamRequest(surface, ST_SURFACE_STREAM_REQUEST_GEO_CUTOUTMAP);
}

/*
==============
R_ST_IssueGeoMapStreamRequestsIfNecessaryToDrawNode
==============
*/
void R_ST_IssueGeoMapStreamRequestsIfNecessaryToDrawNode(const StDiskTerrainSurface *surface, const StTerrainNode *node)
{
  if ( (node->mesh.flags.packed & 8) == 0 )
    R_ST_SurfaceBaseResourceStreamRequest(surface, ST_SURFACE_STREAM_REQUEST_GEO_HEIGHTMAP);
  if ( node->mesh.cutoutTriCount )
    R_ST_SurfaceBaseResourceStreamRequest(surface, ST_SURFACE_STREAM_REQUEST_GEO_CUTOUTMAP);
}

/*
==============
R_ST_LoadTerrain
==============
*/
void R_ST_LoadTerrain(const char *bspFilePath)
{
  const char *FilenameSubString; 
  XAssetHeader v3; 
  const StTerrain *physicsLibrary; 
  char outPath[256]; 

  if ( !bspFilePath && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 3316, ASSERT_TYPE_ASSERT, "(bspFilePath)", (const char *)&queryFormat, "bspFilePath") )
    __debugbreak();
  if ( s_stGlob.terrain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 3317, ASSERT_TYPE_ASSERT, "(!s_stGlob.terrain)", (const char *)&queryFormat, "!s_stGlob.terrain") )
    __debugbreak();
  FilenameSubString = Com_GetFilenameSubString(bspFilePath);
  Com_CopyAndStripExtension(outPath, 0x100ui64, FilenameSubString);
  v3.physicsLibrary = DB_FindXAssetHeader(ASSET_TYPE_SUPER_TERRAIN, outPath, 0).physicsLibrary;
  physicsLibrary = (const StTerrain *)v3.physicsLibrary;
  if ( v3.physicsLibrary )
  {
    if ( *(_DWORD *)&v3.physicsLibrary->isMaterialList )
    {
      R_ST_PostLoadVerification(v3.stTerrain);
      R_ST_InitFrameData_0(physicsLibrary);
      s_stGlob.terrain = physicsLibrary;
    }
  }
}

/*
==============
R_ST_NodeRequiresCutoutmap
==============
*/
bool R_ST_NodeRequiresCutoutmap(const StTerrainNode *node)
{
  return node->mesh.cutoutTriCount != 0;
}

/*
==============
R_ST_NodeRequiresHeightmap
==============
*/
bool R_ST_NodeRequiresHeightmap(const StTerrainNode *node)
{
  return (node->mesh.flags.packed & 8) == 0;
}

/*
==============
R_ST_PopulateDrawSurfsForNode
==============
*/
void R_ST_PopulateDrawSurfsForNode(const StTerrainNode *node, const StDiskTerrainSurface *surface, const GfxViewInfo *viewInfo, const HLSL::TerrainTileDataCode *surfaceTileData, const StCachedFrontEndDvars *cachedDvars, GfxStDrawSurf *drawSurfs, unsigned int drawSurfCount, unsigned int tileDataIndex, bool lightmapped, TerrainSurfaceDataInfo *terrainSurfaceDataInfo)
{
  unsigned int v18; 
  char v22; 
  __int64 v26; 
  Material *v27; 
  Material *v28; 
  int v29; 
  ID3D12Resource *highLODIndexBuffer; 
  ID3D12Resource *vb; 
  unsigned __int64 v33; 
  __int64 v34; 

  _RDI = drawSurfs;
  if ( !drawSurfs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1663, ASSERT_TYPE_ASSERT, "(drawSurfs)", (const char *)&queryFormat, "drawSurfs") )
    __debugbreak();
  if ( drawSurfCount - 1 > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1664, ASSERT_TYPE_ASSERT, "(drawSurfCount == 1 || drawSurfCount == 2)", (const char *)&queryFormat, "drawSurfCount == 1 || drawSurfCount == 2") )
    __debugbreak();
  _R14 = cachedDvars;
  v18 = (node->mesh.flags.packed >> 1) & 2;
  if ( (node->mesh.flags.packed & 8) != 0 )
    v18 = 40;
  if ( (v18 & 8) == 0 )
  {
    __asm { vmovaps [rsp+88h+var_38], xmm6 }
    if ( (surfaceTileData->flags & 0x20) != 0 )
      goto LABEL_16;
    if ( !R_ST_AreAllLayeredTextureBaseMipsAvailable(node, surface, terrainSurfaceDataInfo) )
      goto LABEL_16;
    __asm { vmovss  xmm6, dword ptr [r14+0Ch] }
    *(double *)&_XMM0 = Bounds_DistToPointSq(&node->wldBounds, &viewInfo->viewParmsSet.frames[0].viewParms.camera.origin);
    __asm
    {
      vmulss  xmm1, xmm6, xmm6
      vmulss  xmm2, xmm1, cs:__real@4d8fd72a
      vcomiss xmm0, xmm2
    }
    if ( v22 )
    {
      __asm
      {
        vmovss  xmm6, dword ptr [r14+10h]
        vxorps  xmm0, xmm0, xmm0
        vcomiss xmm6, xmm0
      }
      if ( (node->mesh.flags.packed & 0x10) != 0 && cachedDvars->allowLayerMask )
        v18 |= 0x40u;
    }
    else
    {
LABEL_16:
      v18 |= 8u;
    }
    __asm { vmovaps xmm6, [rsp+88h+var_38] }
  }
  v26 = v18 | 0x10;
  if ( !lightmapped )
    v26 = v18;
  v27 = rgp.superTerrainMaterials[v26];
  v28 = rgp.superTerrainMaterials[(unsigned int)v26 | 1i64];
  if ( (!v27 || !v28) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1657, ASSERT_TYPE_ASSERT, "(materialOut && cutoutMaterialOut)", (const char *)&queryFormat, "materialOut && cutoutMaterialOut") )
    __debugbreak();
  *(_WORD *)&drawSurfs->drawGroup.fields = Material_GetSortedIndex(v27);
  v29 = 0x10000;
  _RBX = 0i64;
  if ( (((v27->drawSurf.packed.p1 & 0x70000) - 0x10000i64) & 0xFFFFFFFFFFFDFFFFui64) != 0 )
    v29 = 0;
  drawSurfs->drawGroup.packed = v29 & 0xFC05FFFF | drawSurfs->drawGroup.packed & 0xFC04FFFF | 0x40000;
  if ( tileDataIndex > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)tileDataIndex, "unsigned", tileDataIndex) )
    __debugbreak();
  drawSurfs->tileDataIndex = tileDataIndex;
  drawSurfs->triCount = node->mesh.triCount - node->mesh.cutoutTriCount;
  drawSurfs->baseIndex = 0;
  if ( (node->mesh.flags.packed & 4) != 0 )
    highLODIndexBuffer = surface->highLODIndexBuffer;
  else
    highLODIndexBuffer = node->mesh.indexBuffer;
  drawSurfs->indexBuffer = highLODIndexBuffer;
  if ( !highLODIndexBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1680, ASSERT_TYPE_ASSERT, "(!( ((drawSurfs[0].indexBuffer)) == 0 ))", (const char *)&queryFormat, "!INDEX_BUFFER_IS_NULL( INDEX_BUFFER_FROM_HANDLE( drawSurfs[0].indexBuffer ) )") )
    __debugbreak();
  vb = node->mesh.vd0.vb;
  drawSurfs->vertexBuffer = vb;
  if ( !vb && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1682, ASSERT_TYPE_ASSERT, "(!( ((drawSurfs[0].vertexBuffer)) == 0 ))", (const char *)&queryFormat, "!VERTEX_BUFFER_IS_NULL( VERTEX_BUFFER_FROM_HANDLE( drawSurfs[0].vertexBuffer ) )") )
    __debugbreak();
  drawSurfs->vertexCount = node->mesh.vertexCount;
  v33 = (__int64)((unsigned __int128)(((char *)surface - (char *)s_stGlob.terrain->surfaces) * (__int128)0x572620AE4C415C99i64) >> 64) >> 7;
  v34 = (v33 >> 63) + v33;
  if ( (v34 < 0 || (unsigned __int64)v34 > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,__int64>(__int64)", "unsigned", (unsigned __int8)v34, "signed", v34) )
    __debugbreak();
  drawSurfs->surfaceIndex = v34;
  drawSurfs->layerMaskBuffer = node->mesh.layerMask.buffer;
  if ( drawSurfCount == 2 || cachedDvars->cutoutMeshFilter == 2 )
  {
    __asm { vmovups ymm0, ymmword ptr [rdi] }
    if ( cachedDvars->cutoutMeshFilter != 2 )
      _RBX = 1i64;
    __asm
    {
      vmovups ymmword ptr [rbx+rdi], ymm0
      vmovups xmm1, xmmword ptr [rdi+20h]
      vmovups xmmword ptr [rbx+rdi+20h], xmm1
    }
    if ( ((LODWORD(v27->drawSurf.packed.p1) ^ LODWORD(v28->drawSurf.packed.p1)) & 0x70000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1705, ASSERT_TYPE_ASSERT, "(cutoutMaterial->drawSurf.fields.tessellation == material->drawSurf.fields.tessellation)", (const char *)&queryFormat, "cutoutMaterial->drawSurf.fields.tessellation == material->drawSurf.fields.tessellation") )
      __debugbreak();
    *(_WORD *)&drawSurfs[_RBX].drawGroup.fields = Material_GetSortedIndex(v28);
    drawSurfs[_RBX].baseIndex = 3 * drawSurfs->triCount;
    drawSurfs[_RBX].triCount = node->mesh.cutoutTriCount;
  }
}

/*
==============
R_ST_QueryAndClearSurfaceBaseResourceStreamRequest
==============
*/
_BOOL8 R_ST_QueryAndClearSurfaceBaseResourceStreamRequest(const StDiskTerrainSurface *surface, StSurfaceStreamRequestResource resource)
{
  __int64 v2; 
  __int64 v4; 
  __int64 v5; 
  _BOOL8 result; 
  __int64 v7; 
  unsigned int surfaceCount; 

  v2 = resource;
  if ( !s_stGlob.terrain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1993, ASSERT_TYPE_ASSERT, "(s_stGlob.terrain)", (const char *)&queryFormat, "s_stGlob.terrain") )
    __debugbreak();
  if ( !s_surfaceBaseResourceStreamRequests && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1994, ASSERT_TYPE_ASSERT, "(s_surfaceBaseResourceStreamRequests)", (const char *)&queryFormat, "s_surfaceBaseResourceStreamRequests") )
    __debugbreak();
  v4 = truncate_cast<unsigned int,__int64>(surface - s_stGlob.terrain->surfaces);
  if ( (unsigned int)v4 >= s_stGlob.terrain->surfaceCount )
  {
    surfaceCount = s_stGlob.terrain->surfaceCount;
    LODWORD(v7) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1996, ASSERT_TYPE_ASSERT, "(unsigned)( surfaceIndex ) < (unsigned)( s_stGlob.terrain->surfaceCount )", "surfaceIndex doesn't index s_stGlob.terrain->surfaceCount\n\t%i not in [0, %i)", v7, surfaceCount) )
      __debugbreak();
  }
  v5 = v2 + 3 * v4;
  result = s_surfaceBaseResourceStreamRequests->resources[v5];
  if ( result )
    s_surfaceBaseResourceStreamRequests->resources[v5] = 0;
  return result;
}

/*
==============
R_ST_RegisterDvars
==============
*/
void R_ST_RegisterDvars()
{
  const dvar_t *v9; 
  const dvar_t *v14; 
  const dvar_t *v24; 
  const dvar_t *v37; 

  __asm
  {
    vmovss  xmm3, cs:__real@4b189680; max
    vmovss  xmm1, cs:__real@43000000; value
    vmovaps [rsp+58h+var_18], xmm8
    vmovss  xmm8, cs:__real@40000000
    vmovaps xmm2, xmm8; min
    vmovaps [rsp+58h+var_28], xmm9
  }
  r_st_lodMorphControl = Dvar_RegisterFloat("LPNQPNMOQO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "'q' parameter expressing size of transition area when lod morphing, from 2 to infinity");
  __asm
  {
    vmovss  xmm3, cs:__real@41000000; max
    vmovss  xmm1, cs:__real@3f000000; value
  }
  r_st_combined_force = Dvar_RegisterBool("LQSSTRMLQN", 0, 4u, "Force terrain combined map to be used.");
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v9 = Dvar_RegisterFloat("MOKOTLQNQK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Adjust distance that the terrain combined map is used at. Used on base consoles");
  __asm
  {
    vmovss  xmm9, cs:__real@3f800000
    vmovss  xmm3, cs:__real@41000000; max
  }
  r_st_combined_bias_low = v9;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm9; value
  }
  v14 = Dvar_RegisterFloat("MMKTLNPQTS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Adjust distance that the terrain combined map is used at. Used on Neo/Scorpio/PC consoles");
  __asm { vmovss  xmm1, cs:__real@3f000000; value }
  r_st_combined_bias_high = v14;
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  r_st_lod_transition_scaler_low = Dvar_RegisterFloat("MMTSOPMLPR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Adjust how quickly we will be going down super terrain quad tree for a surface. Higher number means we will want quad tree nodes when the camera is further away. Used on Base consoles");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm9; value
  }
  r_st_lod_transition_scaler_high = Dvar_RegisterFloat("LLSNLQLRMN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Adjust how quickly we will be going down super terrain quad tree for a surface. Higher number means we will want quad tree nodes when the camera is further away. Used on Neo/Scorpio/PC consoles");
  __asm { vmovss  xmm3, cs:__real@479d7af6; max }
  r_st_fallbackImagesOkForLayering = Dvar_RegisterBool("LPOPSSSNMK", 1, 0, "Allow layering using fallback images");
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  v24 = Dvar_RegisterFloat("LQNORLOQNM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Distance of max tessellation density for super terrain displacement");
  __asm { vmovss  xmm3, cs:__real@479d7af6; max }
  r_st_displacementLodNear = v24;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  r_st_displacementDistance = Dvar_RegisterFloat("ORTSSLPSK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Use displacement mapping on super terrain out to the given distance from the camera.  0 -> disabled");
  __asm
  {
    vmovss  xmm3, cs:__real@42800000; max
    vmovss  xmm1, cs:__real@41000000; value
    vmovaps xmm2, xmm9; min
  }
  r_st_displacementPixelCoverage = Dvar_RegisterFloat("MKQMOQMNNR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Triangle edge size in pixels for super terrain displacement");
  __asm
  {
    vmovss  xmm3, cs:__real@47800000; max
    vmovss  xmm2, cs:__real@c7800000; min
    vmovss  xmm1, cs:__real@40a00000; value
  }
  r_st_sm_lod = Dvar_RegisterInt("MMNQSMKTOQ", 1, -1, 8, 4u, "Super terrain lod to use for shadows. -1 -> disable shadows");
  r_st_sm_polygonOffsetScale = Dvar_RegisterFloat("NLQMSLORTM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Super terrain shadow map offset scale");
  __asm { vmovss  xmm3, cs:__real@46000000; max }
  r_st_sm_polygonOffsetBias = Dvar_RegisterInt("NSQSOQTTQT", 8, -65536, 0x10000, 4u, "Super terrain shadow map offset bias");
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  v37 = Dvar_RegisterFloat("RLKMTPMKN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Super terrain shadow map offset clamp");
  __asm { vmovss  xmm1, cs:__real@3f666666; value }
  r_st_sm_polygonOffsetClamp = v37;
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  r_st_streamLeadFactor = Dvar_RegisterFloat("LSNNTTKSTR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "How early to stream in super terrain geometry");
  r_st_enable = Dvar_RegisterBool("MPTQPQRTMT", 1, 4u, "Enable rendering of super terrain");
  __asm { vmovss  xmm1, cs:__real@bf800000; value }
  r_st_forceLod = Dvar_RegisterInt("LPNOLRKMQQ", -1, -1, 8, 4u, "Force super terrain rendering to the given lod. -1 -> disabled");
  __asm
  {
    vmovaps xmm3, xmm9; max
    vmovaps xmm2, xmm1; min
  }
  r_st_lodMorphOverride = Dvar_RegisterFloat("TOTOKNPKN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Override lod morph calculation for testing");
  r_st_layerLimit = Dvar_RegisterInt("MLTOPQRSTK", -1, -1, 32, 4u, "Limits the number of layers drawn on all Super Terrain instances.  0 -> disabled");
  __asm { vmovss  xmm3, cs:__real@42c80000; max }
  r_st_cutoutMeshFilter = Dvar_RegisterEnum("LRSRRLTRNT", r_st_cutoutMeshFilterNames, 0, 4u, "Filter cutout or non-cutout meshes from rendering");
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm9; value
  }
  r_st_combinedMapStreamMetricScale = Dvar_RegisterFloat("RLSNLNQOT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Scale combined map streaming metric by this value.  Bigger = less streamed in");
  r_st_drawSingleSurface = Dvar_RegisterInt("NOQSRPPRSN", -1, -1, 256, 4u, "Draws only the selected ST surface when enabled.  -1 -> disabled");
  r_st_allowLayerMask = Dvar_RegisterBool("MPKRNORPS", 1, 4u, "Allow use of layer mask (if available)");
  r_st_singleLayer = Dvar_RegisterInt("MQMSPSMOSP", -1, -1, 32, 4u, "Apply the given super terrain material layer only.  -1 -> disabled");
  r_st_surfaceDebugColorMode = Dvar_RegisterInt("NLQQNLMQLS", -1, -1, 100, 4u, "Tint super terrain surface. -1 -> disabled, 0 -> all surfaces");
  r_st_layerDebugColorMode = Dvar_RegisterInt("MNNPPKLSTM", -1, -1, 32, 4u, "Tint super terrain material layer. -1 -> disabled, 0 -> all layers");
  r_st_showSurfaceBounds = Dvar_RegisterBool("NKTRRRQRSN", 0, 4u, "Show super terrain surface bounds");
  r_st_showTileBounds = Dvar_RegisterBool("NRSRNNRKTS", 0, 4u, "Show super terrain tile bounds");
  __asm
  {
    vmovaps xmm8, [rsp+58h+var_18]
    vmovaps xmm9, [rsp+58h+var_28]
  }
  R_ST_ClutterRegisterDvars();
}

/*
==============
R_ST_SetBindlessDescriptorTable
==============
*/
void R_ST_SetBindlessDescriptorTable(GfxCmdBufState *state, const GfxBackEndData *backEndData)
{
  __int64 superTerrainFrameDataIndex; 
  __int64 v5; 
  int v6; 

  if ( !s_stGlob.terrain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2999, ASSERT_TYPE_ASSERT, "(R_ST_IsLoaded())", (const char *)&queryFormat, "R_ST_IsLoaded()") )
    __debugbreak();
  superTerrainFrameDataIndex = backEndData->superTerrainFrameDataIndex;
  if ( (unsigned int)superTerrainFrameDataIndex >= 2 )
  {
    v6 = 2;
    LODWORD(v5) = superTerrainFrameDataIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 845, ASSERT_TYPE_ASSERT, "(unsigned)( frameDataIndex ) < (unsigned)( ST_FRAME_DATA_COUNT )", "frameDataIndex doesn't index ST_FRAME_DATA_COUNT\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  R_SetGfxDescriptorTable(state, &s_stGlob.frameData[superTerrainFrameDataIndex].bindlessTable, 0xDu);
}

/*
==============
R_ST_SetCodeResources
==============
*/
void R_ST_SetCodeResources(GfxCmdBufInput *input)
{
  ;
}

/*
==============
R_ST_SetFrameDataResources
==============
*/
void R_ST_SetFrameDataResources(GfxCmdBufInput *input)
{
  StFrameData *v2; 
  const StTerrain *terrain; 
  __int64 i; 
  const GfxTexture *v5; 
  __int64 v6; 
  unsigned int m_usedSize; 
  __int64 v8; 
  __int64 v9; 

  if ( s_stGlob.terrain )
  {
    if ( !input->data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2920, ASSERT_TYPE_ASSERT, "(input.data)", (const char *)&queryFormat, "input.data") )
      __debugbreak();
    v2 = RB_ST_BackEndFrameData(input->data);
    input->codePersistentBuffers[39] = &v2->layerData;
    input->codePersistentBuffers[40] = &v2->tileData;
    if ( !s_stGlob.terrain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2927, ASSERT_TYPE_ASSERT, "(s_stGlob.terrain)", (const char *)&queryFormat, "s_stGlob.terrain") )
      __debugbreak();
    terrain = s_stGlob.terrain;
    if ( v2->bindlessTable.m_size < s_stGlob.terrain->flattenedImagesCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2930, ASSERT_TYPE_ASSERT, "(bindlessTable->m_size >= terrain.flattenedImagesCount)", (const char *)&queryFormat, "bindlessTable->m_size >= terrain.flattenedImagesCount") )
      __debugbreak();
    R_ResetGfxDescriptorTable(&v2->bindlessTable);
    for ( i = 0i64; (unsigned int)i < terrain->flattenedImagesCount; v2->bindlessTable.m_usedSize = m_usedSize )
    {
      v5 = R_Texture_Get(input->data, terrain->flattenedImages[i]->textureId);
      if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2937, ASSERT_TYPE_ASSERT, "(texture)", (const char *)&queryFormat, "texture") )
        __debugbreak();
      if ( (unsigned int)i >= v2->bindlessTable.m_size )
      {
        LODWORD(v9) = v2->bindlessTable.m_size;
        LODWORD(v8) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_setstate_d3d.h", 1212, ASSERT_TYPE_ASSERT, "(unsigned)( startApiSlot + apiSlotCount - 1 ) < (unsigned)( table->m_size )", "startApiSlot + apiSlotCount - 1 doesn't index table->m_size\n\t%i not in [0, %i)", v8, v9) )
          __debugbreak();
      }
      v6 = (int)i;
      i = (unsigned int)(i + 1);
      v2->bindlessTable.m_descriptors[v6] = v5->shaderView.view;
      m_usedSize = i;
      if ( (signed int)v2->bindlessTable.m_usedSize > (int)i )
        m_usedSize = v2->bindlessTable.m_usedSize;
    }
  }
}

/*
==============
R_ST_SetSceneConstants
==============
*/
void R_ST_SetSceneConstants(GfxViewInfo *viewInfo, const vec3_t *dpvsCamPos)
{
  bool v13; 
  int integer; 
  volatile __int64 v30; 

  __asm { vmovaps [rsp+78h+var_18], xmm6 }
  _RDI = viewInfo;
  __asm
  {
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
  }
  _RBX = dpvsCamPos;
  R_ST_SetTerrainComboSetInfoConstants(viewInfo->input.sceneConstants.terrainComboSetInfo);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vsubss  xmm6, xmm0, dword ptr [rdi+100h]
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  xmm1, dword ptr [rbx+4]
    vsubss  xmm8, xmm0, dword ptr [rdi+108h]
    vsubss  xmm7, xmm1, dword ptr [rdi+104h]
  }
  v13 = !CL_TransientsWorldMP_UseLowAlwaysloadedFlagging();
  _RAX = r_st_combined_bias_low;
  if ( v13 )
    _RAX = r_st_combined_bias_high;
  __asm
  {
    vmovss  xmm2, cs:?rg@@3Ur_globals_t@@A.correctedLodParms.invFovScale; r_globals_t rg
    vmovss  xmm1, dword ptr [rax+28h]
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm2, xmm0
  }
  if ( !v13 )
    __asm { vdivss  xmm1, xmm1, xmm2 }
  __asm
  {
    vmovss  dword ptr [rdi+25E0h], xmm6
    vmovss  dword ptr [rdi+25E4h], xmm7
    vmovss  dword ptr [rdi+25E8h], xmm8
    vmovss  dword ptr [rdi+25ECh], xmm1
  }
  _RAX = r_st_displacementPixelCoverage;
  __asm { vmovss  xmm1, dword ptr [rax+28h] }
  _RAX = r_st_displacementDistance;
  __asm { vmovss  xmm0, dword ptr [rax+28h] }
  integer = r_st_displacementLodNear->current.integer;
  __asm
  {
    vmovss  dword ptr [rdi+25F4h], xmm0
    vmovss  dword ptr [rdi+25F8h], xmm1
  }
  LODWORD(_RDI->input.sceneConstants.terrainTesselationParms.v[0]) = integer;
  if ( !rg.correctedLodParms.valid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2842, ASSERT_TYPE_ASSERT, "(rg.correctedLodParms.valid)", (const char *)&queryFormat, "rg.correctedLodParms.valid") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, cs:?rg@@3Ur_globals_t@@A.correctedLodParms.ramp.scaleWithoutFovScale; r_globals_t rg
    vmovss  xmm1, cs:?rg@@3Ur_globals_t@@A.correctedLodParms.ramp.biasWithoutFovScale; r_globals_t rg
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
    vmovaps xmm8, [rsp+78h+var_38]
    vmovss  dword ptr [rsp+78h+var_48], xmm0
    vmovss  xmm0, cs:?rg@@3Ur_globals_t@@A.correctedLodParms.ramp.scale; r_globals_t rg
    vmovss  dword ptr [rsp+78h+var_48+4], xmm1
    vmovss  xmm1, cs:?rg@@3Ur_globals_t@@A.correctedLodParms.ramp.bias; r_globals_t rg
  }
  s_sceneLodScaleBiasWithoutFov = v30;
  __asm
  {
    vmovss  dword ptr [rsp+78h+var_48], xmm0
    vmovss  dword ptr [rsp+78h+var_48+4], xmm1
  }
  s_sceneLodScaleBias = v30;
}

/*
==============
R_ST_SetTerrainComboSetInfoConstants
==============
*/

void __fastcall R_ST_SetTerrainComboSetInfoConstants(vec4_t *terrainComboSetInfo, double _XMM1_8, double _XMM2_8, double _XMM3_8)
{
  vec4_t *v5; 
  __int64 v6; 
  const StTerrain *terrain; 
  __int64 mapsCount; 
  unsigned int v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v14; 
  unsigned int v21; 
  __int64 v22; 
  __int64 v36; 
  __int64 v40; 
  __int64 v41; 
  int v43[16]; 

  v5 = terrainComboSetInfo;
  v6 = 0i64;
  terrain = s_stGlob.terrain;
  if ( s_stGlob.terrain )
  {
    mapsCount = s_stGlob.terrain->mapsCount;
    v9 = 0;
    memset(v43, 0, sizeof(v43));
    if ( s_stGlob.terrain->surfaceCount )
    {
      do
      {
        v10 = (__int64)&terrain->surfaces[v9];
        if ( *(_DWORD *)(v10 + 96) >= 8u )
        {
          LODWORD(v41) = 8;
          LODWORD(v40) = *(_DWORD *)(v10 + 96);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2805, ASSERT_TYPE_ASSERT, "(unsigned)( surface.surfaceMapSetIndex ) < (unsigned)( 8 )", "surface.surfaceMapSetIndex doesn't index TERRAIN_TEXTURES_MAX_RESOLUTION_SETS\n\t%i not in [0, %i)", v40, v41) )
            __debugbreak();
        }
        if ( !*(_QWORD *)(v10 + 336) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2806, ASSERT_TYPE_ASSERT, "(surface.heightMap)", (const char *)&queryFormat, "surface.heightMap") )
          __debugbreak();
        v11 = *(_QWORD *)(v10 + 336);
        ++v9;
        v12 = *(unsigned int *)(v10 + 96);
        v43[2 * v12] = *(unsigned __int16 *)(v11 + 36);
        v43[2 * v12 + 1] = *(unsigned __int16 *)(v11 + 38);
      }
      while ( v9 < terrain->surfaceCount );
      v5 = terrainComboSetInfo;
      v6 = 0i64;
    }
    if ( (_DWORD)mapsCount )
    {
      _RDI = &v5->v[2];
      v14 = mapsCount;
      do
      {
        if ( !terrain->maps[v6].paddedResolution && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2814, ASSERT_TYPE_ASSERT, "(maps[mapIndex].paddedResolution != 0)", (const char *)&queryFormat, "maps[mapIndex].paddedResolution != 0") )
          __debugbreak();
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, dword ptr [rbx+rsi+4]
          vxorps  xmm3, xmm3, xmm3
          vcvtsi2ss xmm3, xmm3, dword ptr [rbx+rsi]
          vdivss  xmm2, xmm3, xmm0
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rax
        }
        ++v6;
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, rax
          vmovss  dword ptr [rdi-4], xmm1
          vmovss  dword ptr [rdi-8], xmm0
          vmovss  dword ptr [rdi], xmm2
          vmovss  dword ptr [rdi+4], xmm3
        }
        _RDI += 4;
        --v14;
      }
      while ( v14 );
      v5 = terrainComboSetInfo;
    }
  }
  else
  {
    LODWORD(mapsCount) = 0;
  }
  if ( (unsigned int)mapsCount < 8 )
  {
    if ( (unsigned int)(8 - mapsCount) >= 4 )
    {
      _RCX = (__int64)&v5[(unsigned int)mapsCount + 1].xyz.z;
      v21 = ((unsigned int)(4 - mapsCount) >> 2) + 1;
      v22 = v21;
      LODWORD(mapsCount) = mapsCount + 4 * v21;
      do
      {
        _RCX += 64i64;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, eax
          vmovss  dword ptr [rcx-58h], xmm1
          vcvtsi2ss xmm0, xmm0, eax
          vmovss  dword ptr [rcx-54h], xmm0
        }
        *(_DWORD *)(_RCX - 80) = 1065353216;
        __asm
        {
          vmovss  dword ptr [rcx-4Ch], xmm1
          vxorps  xmm0, xmm0, xmm0
          vxorps  xmm2, xmm2, xmm2
          vcvtsi2ss xmm2, xmm2, eax
          vmovss  dword ptr [rcx-48h], xmm2
          vcvtsi2ss xmm0, xmm0, eax
          vmovss  dword ptr [rcx-44h], xmm0
        }
        *(_DWORD *)(_RCX - 64) = 1065353216;
        __asm
        {
          vmovss  dword ptr [rcx-3Ch], xmm2
          vxorps  xmm0, xmm0, xmm0
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, eax
          vmovss  dword ptr [rcx-38h], xmm1
          vcvtsi2ss xmm0, xmm0, eax
          vmovss  dword ptr [rcx-34h], xmm0
        }
        *(_DWORD *)(_RCX - 48) = 1065353216;
        __asm
        {
          vmovss  dword ptr [rcx-2Ch], xmm1
          vxorps  xmm2, xmm2, xmm2
          vcvtsi2ss xmm2, xmm2, eax
          vmovss  dword ptr [rcx-28h], xmm2
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmovss  dword ptr [rcx-24h], xmm0
        }
        *(_DWORD *)(_RCX - 32) = 1065353216;
        __asm { vmovss  dword ptr [rcx-1Ch], xmm2 }
        --v22;
      }
      while ( v22 );
    }
    if ( (unsigned int)mapsCount < 8 )
    {
      v36 = (unsigned int)(8 - mapsCount);
      _RCX = (__int64)&v5[(unsigned int)mapsCount].xyz.z;
      do
      {
        _RCX += 16i64;
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, eax
        }
        *(_DWORD *)(_RCX - 16) = 1065353216;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmovss  dword ptr [rcx-14h], xmm0
          vmovss  dword ptr [rcx-18h], xmm1
          vmovss  dword ptr [rcx-0Ch], xmm1
        }
        --v36;
      }
      while ( v36 );
    }
  }
}

/*
==============
R_ST_SetupMaterialLayer
==============
*/
void R_ST_SetupMaterialLayer(const StDiskTerrainSurface *surface, const StTerrainMaterialLayer *layer, HLSL::TerrainLayerDataCode *layerOut)
{
  unsigned int layerMaskMapIdxsCount; 
  HLSL::TerrainLayerDataCode *v15; 
  const StTerrainMaterialLayer *v16; 
  unsigned __int16 *materialTextureIdxs; 
  unsigned __int16 v18; 
  unsigned __int16 v19; 
  unsigned __int16 v20; 
  unsigned __int16 v21; 

  __asm
  {
    vmovups xmm0, xmmword ptr [rdx+40h]
    vmovups xmmword ptr [r8], xmm0
    vmovups xmm1, xmmword ptr [rdx+50h]
    vmovups xmmword ptr [r8+10h], xmm1
    vmovups xmm0, xmmword ptr [rdx+60h]
    vmovups xmmword ptr [r8+20h], xmm0
    vmovups xmm1, xmmword ptr [rdx+70h]
    vmovups xmmword ptr [r8+30h], xmm1
    vmovups xmm0, xmmword ptr [rdx+80h]
    vmovups xmmword ptr [r8+40h], xmm0
    vmovups xmm1, xmmword ptr [rdx+90h]
    vmovups xmmword ptr [r8+50h], xmm1
    vmovups xmm0, xmmword ptr [rdx+0A0h]
    vmovups xmmword ptr [r8+60h], xmm0
    vmovups xmm0, xmmword ptr [rdx+0B0h]
    vmovups xmmword ptr [r8+70h], xmm0
    vmovups xmm1, xmmword ptr [rdx+0C0h]
    vmovups xmmword ptr [r8+80h], xmm1
    vmovups xmm0, xmmword ptr [rdx+0D0h]
    vmovups xmmword ptr [r8+90h], xmm0
  }
  layerMaskMapIdxsCount = surface->layerMaskMapIdxsCount;
  v15 = layerOut;
  v16 = layer;
  if ( layer->layer >= layerMaskMapIdxsCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1116, ASSERT_TYPE_ASSERT, "(unsigned)( layer.layer ) < (unsigned)( surface.layerMaskMapIdxsCount )", "layer.layer doesn't index surface.layerMaskMapIdxsCount\n\t%i not in [0, %i)", layer->layer, layerMaskMapIdxsCount) )
    __debugbreak();
  v15->alphaLayer = surface->layerMaskMapIdxs[v16->layer];
  materialTextureIdxs = v16->materialTextureIdxs;
  v18 = *materialTextureIdxs;
  v19 = materialTextureIdxs[1];
  v20 = materialTextureIdxs[2];
  v21 = materialTextureIdxs[3];
  v15->colorMap = R_ST_GetBindlessIndexFromFlattenedIndex(*materialTextureIdxs);
  v15->normalMap = R_ST_GetBindlessIndexFromFlattenedIndex(v19);
  v15->revealMap = R_ST_GetBindlessIndexFromFlattenedIndex(v20);
  v15->displacementMap = R_ST_GetBindlessIndexFromFlattenedIndex(v21);
  if ( v19 != 0xFFFF )
    v15->normalMapPackedScaleBias = s_stGlob.terrain->flattenedImages[v19]->semanticSpecific.albedoMapScaleBias;
  if ( v18 == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1171, ASSERT_TYPE_ASSERT, "(albedoMapIndex != 0xFFFF)", (const char *)&queryFormat, "albedoMapIndex != TERRAIN_TEXTURE_INDEX_INVALID") )
    __debugbreak();
  v15->albedoMapPackedScaleBias = s_stGlob.terrain->flattenedImages[v18]->semanticSpecific.albedoMapScaleBias;
}

/*
==============
R_ST_SetupMaterialLayer
==============
*/

void __fastcall R_ST_SetupMaterialLayer(const StDiskTerrainSurface *surface, const StTerrainMaterialLayer *layer, HLSL::TerrainLayerDataCodeBindlessCS *layerOut)
{
  R_ST_SetupMaterialLayerInternal<HLSL::TerrainLayerDataCodeBindlessCS>(surface, layer, layerOut);
}

/*
==============
R_ST_SetupMaterialLayer
==============
*/
void R_ST_SetupMaterialLayer(const StDiskTerrainSurface *surface, const StTerrainMaterialLayer *layer, HLSL::TerrainLayerDataCodeCS *layerOut)
{
  unsigned int layerMaskMapIdxsCount; 
  unsigned __int16 *materialTextureIdxs; 
  unsigned __int16 v8; 
  unsigned __int16 v9; 
  unsigned __int16 v10; 
  unsigned __int16 v11; 

  layerOut->textureTransform[0].v[0] = layer->layerData.textureTransform[0].v[0];
  layerOut->textureTransform[0].v[1] = layer->layerData.textureTransform[0].v[1];
  layerOut->textureTransform[1] = *(HLSL::hlsl_2_t<float,vec2_t> *)layer->layerData.textureTransform[1].v;
  layerOut->flags = layer->layerData.flags;
  layerOut->textureScale = layer->layerData.textureScale.v[0];
  layerOut->alphaRevealSoftEdge = layer->layerData.alphaRevealSoftEdge;
  layerOut->normalMapPackedScaleBias = layer->layerData.normalMapPackedScaleBias;
  layerOut->displacementScale = layer->layerData.displacementScale;
  layerMaskMapIdxsCount = surface->layerMaskMapIdxsCount;
  if ( layer->layer >= layerMaskMapIdxsCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1116, ASSERT_TYPE_ASSERT, "(unsigned)( layer.layer ) < (unsigned)( surface.layerMaskMapIdxsCount )", "layer.layer doesn't index surface.layerMaskMapIdxsCount\n\t%i not in [0, %i)", layer->layer, layerMaskMapIdxsCount) )
    __debugbreak();
  layerOut->alphaLayer = surface->layerMaskMapIdxs[layer->layer];
  materialTextureIdxs = layer->materialTextureIdxs;
  v8 = *materialTextureIdxs;
  v9 = materialTextureIdxs[1];
  v10 = materialTextureIdxs[2];
  v11 = materialTextureIdxs[3];
  layerOut->colorMap = R_ST_GetBindlessIndexFromFlattenedIndex(*materialTextureIdxs);
  layerOut->normalMap = R_ST_GetBindlessIndexFromFlattenedIndex(v9);
  layerOut->revealMap = R_ST_GetBindlessIndexFromFlattenedIndex(v10);
  layerOut->displacementMap = R_ST_GetBindlessIndexFromFlattenedIndex(v11);
  if ( v9 != 0xFFFF )
    layerOut->normalMapPackedScaleBias = s_stGlob.terrain->flattenedImages[v9]->semanticSpecific.albedoMapScaleBias;
  if ( v8 == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1171, ASSERT_TYPE_ASSERT, "(albedoMapIndex != 0xFFFF)", (const char *)&queryFormat, "albedoMapIndex != TERRAIN_TEXTURE_INDEX_INVALID") )
    __debugbreak();
  layerOut->albedoMapPackedScaleBias = s_stGlob.terrain->flattenedImages[v8]->semanticSpecific.albedoMapScaleBias;
}

/*
==============
R_ST_SetupMaterialLayers
==============
*/
__int64 R_ST_SetupMaterialLayers(const StDiskTerrainSurface *surface, const StCachedFrontEndDvars *cachedDvars, HLSL::TerrainLayerDataCode *layersOut)
{
  HLSL::TerrainLayerDataCode *v3; 
  const StDiskTerrainSurface *v4; 
  const StCachedFrontEndDvars *v5; 
  __int64 layerMaterialsCount; 
  int v7; 
  __int64 v8; 
  const StDiskTerrainSurface *v10; 
  unsigned __int16 *v22; 
  const StTerrain *terrain; 
  unsigned __int16 v24; 
  unsigned __int16 v25; 
  unsigned __int16 v26; 
  unsigned __int16 v27; 
  unsigned int v28; 
  const StTerrain *v29; 
  unsigned int v30; 
  const StTerrain *v31; 
  unsigned int v32; 
  const StTerrain *v33; 
  unsigned int v34; 
  bool v35; 
  __int64 layerDebugColorMode; 
  unsigned int v37; 
  int v39; 
  float v40; 
  __int64 v42; 
  float v45; 
  int surfaceDebugColorMode; 
  const StTerrain *v47; 
  int v48; 
  __int64 v50; 
  float v51; 
  __int64 v54; 
  float v55; 
  int singleLayer; 
  __int64 v59; 
  __int64 v60; 
  int v61; 
  __int64 v62; 
  __int64 v63; 
  vec3_t outColor; 

  v3 = layersOut;
  v4 = surface;
  v5 = cachedDvars;
  if ( !layersOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1206, ASSERT_TYPE_ASSERT, "(layersOut)", (const char *)&queryFormat, "layersOut") )
    __debugbreak();
  layerMaterialsCount = v4->layerMaterialsCount;
  v61 = layerMaterialsCount;
  if ( (unsigned int)layerMaterialsCount > 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1208, ASSERT_TYPE_ASSERT, "(layerCount <= ST_MAX_LAYERS_PER_SURFACE)", (const char *)&queryFormat, "layerCount <= ST_MAX_LAYERS_PER_SURFACE") )
    __debugbreak();
  v7 = 0;
  if ( (_DWORD)layerMaterialsCount )
  {
    v8 = 0i64;
    v63 = layerMaterialsCount;
    v62 = 0i64;
    _RSI = &v3->colorMap;
    v10 = v4;
    do
    {
      _RBX = (char *)v10->layerMaterials + v8;
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx+40h]
        vmovups xmmword ptr [rsi-58h], xmm0
        vmovups xmm1, xmmword ptr [rbx+50h]
        vmovups xmmword ptr [rsi-48h], xmm1
        vmovups xmm0, xmmword ptr [rbx+60h]
        vmovups xmmword ptr [rsi-38h], xmm0
        vmovups xmm1, xmmword ptr [rbx+70h]
        vmovups xmmword ptr [rsi-28h], xmm1
        vmovups xmm0, xmmword ptr [rbx+80h]
        vmovups xmmword ptr [rsi-18h], xmm0
        vmovups xmm1, xmmword ptr [rbx+90h]
        vmovups xmmword ptr [rsi-8], xmm1
        vmovups xmm0, xmmword ptr [rbx+0A0h]
        vmovups xmmword ptr [rsi+8], xmm0
        vmovups xmm1, xmmword ptr [rbx+0B0h]
        vmovups xmmword ptr [rsi+18h], xmm1
        vmovups xmm0, xmmword ptr [rbx+0C0h]
        vmovups xmmword ptr [rsi+28h], xmm0
        vmovups xmm1, xmmword ptr [rbx+0D0h]
        vmovups xmmword ptr [rsi+38h], xmm1
      }
      if ( *((_DWORD *)_RBX + 13) >= v10->layerMaskMapIdxsCount )
      {
        LODWORD(v60) = v10->layerMaskMapIdxsCount;
        LODWORD(v59) = *((_DWORD *)_RBX + 13);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1116, ASSERT_TYPE_ASSERT, "(unsigned)( layer.layer ) < (unsigned)( surface.layerMaskMapIdxsCount )", "layer.layer doesn't index surface.layerMaskMapIdxsCount\n\t%i not in [0, %i)", v59, v60) )
          __debugbreak();
      }
      *(_RSI - 13) = v10->layerMaskMapIdxs[*((int *)_RBX + 13)];
      v22 = (unsigned __int16 *)*((_QWORD *)_RBX + 1);
      terrain = s_stGlob.terrain;
      v24 = *v22;
      v25 = v22[1];
      v26 = v22[2];
      v27 = v22[3];
      if ( !s_stGlob.terrain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1013, ASSERT_TYPE_ASSERT, "(terrain)", (const char *)&queryFormat, "terrain") )
        __debugbreak();
      if ( v24 == 0xFFFF || (v28 = v24, v24 >= terrain->flattenedImagesCount) )
        v28 = 0;
      *_RSI = v28;
      v29 = s_stGlob.terrain;
      if ( !s_stGlob.terrain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1013, ASSERT_TYPE_ASSERT, "(terrain)", (const char *)&queryFormat, "terrain") )
        __debugbreak();
      if ( v25 == 0xFFFF || (v30 = v25, v25 >= v29->flattenedImagesCount) )
        v30 = 0;
      _RSI[3] = v30;
      v31 = s_stGlob.terrain;
      if ( !s_stGlob.terrain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1013, ASSERT_TYPE_ASSERT, "(terrain)", (const char *)&queryFormat, "terrain") )
        __debugbreak();
      if ( v26 == 0xFFFF || (v32 = v26, v26 >= v31->flattenedImagesCount) )
        v32 = 0;
      _RSI[5] = v32;
      v33 = s_stGlob.terrain;
      if ( !s_stGlob.terrain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1013, ASSERT_TYPE_ASSERT, "(terrain)", (const char *)&queryFormat, "terrain") )
        __debugbreak();
      if ( v27 == 0xFFFF || (v34 = v27, v27 >= v33->flattenedImagesCount) )
        v34 = 0;
      _RSI[9] = v34;
      if ( v25 != 0xFFFF )
        *(_RSI - 3) = s_stGlob.terrain->flattenedImages[v25]->semanticSpecific.albedoMapScaleBias;
      if ( v24 == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1171, ASSERT_TYPE_ASSERT, "(albedoMapIndex != 0xFFFF)", (const char *)&queryFormat, "albedoMapIndex != TERRAIN_TEXTURE_INDEX_INVALID") )
        __debugbreak();
      *(_RSI - 2) = s_stGlob.terrain->flattenedImages[v24]->semanticSpecific.albedoMapScaleBias;
      _RSI += 40;
      v8 = v62 + 224;
      v35 = v63-- == 1;
      v62 += 224i64;
    }
    while ( !v35 );
    LODWORD(layerMaterialsCount) = v61;
    v3 = layersOut;
    v4 = surface;
    v5 = cachedDvars;
  }
  layerDebugColorMode = v5->layerDebugColorMode;
  if ( (_DWORD)layerDebugColorMode != -1 )
  {
    if ( (_DWORD)layerDebugColorMode )
    {
      if ( (int)layerDebugColorMode - 1 < (unsigned int)layerMaterialsCount )
      {
        v42 = v5->layerDebugColorMode;
        v3[layerDebugColorMode - 1].flags |= 0x800u;
        R_DebugUniqueColorFromIndex(0, &outColor);
        __asm { vmovsd  xmm0, qword ptr [rsp+0C8h+outColor] }
        _RCX = (__int64)&v3[v42 - 1].colorTint;
        v45 = outColor.v[2];
        __asm { vmovsd  qword ptr [rcx], xmm0 }
        *(float *)(_RCX + 8) = v45;
      }
    }
    else
    {
      v37 = 0;
      if ( (_DWORD)layerMaterialsCount )
      {
        _RBX = (float *)&v3->flags;
        do
        {
          *(_DWORD *)_RBX |= 0x800u;
          v39 = v37++;
          R_DebugUniqueColorFromIndex(v39, &outColor);
          v40 = outColor.v[2];
          _RBX += 40;
          __asm
          {
            vmovsd  xmm0, qword ptr [rsp+0C8h+outColor]
            vmovsd  qword ptr [rbx-88h], xmm0
          }
          *(_RBX - 32) = v40;
        }
        while ( v37 < (unsigned int)layerMaterialsCount );
      }
    }
  }
  surfaceDebugColorMode = v5->surfaceDebugColorMode;
  if ( surfaceDebugColorMode != -1 )
  {
    v47 = s_stGlob.terrain;
    if ( !s_stGlob.terrain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1246, ASSERT_TYPE_ASSERT, "(terrain)", (const char *)&queryFormat, "terrain") )
      __debugbreak();
    v48 = truncate_cast<unsigned int,__int64>(v4 - v47->surfaces);
    if ( surfaceDebugColorMode )
    {
      if ( surfaceDebugColorMode - 1 == v48 && (_DWORD)layerMaterialsCount )
      {
        _RBX = (float *)&v3->flags;
        v54 = (unsigned int)layerMaterialsCount;
        do
        {
          *(_DWORD *)_RBX |= 0x800u;
          R_DebugUniqueColorFromIndex(0, &outColor);
          v55 = outColor.v[2];
          _RBX += 40;
          __asm
          {
            vmovsd  xmm0, qword ptr [rsp+0C8h+outColor]
            vmovsd  qword ptr [rbx-88h], xmm0
          }
          *(_RBX - 32) = v55;
          --v54;
        }
        while ( v54 );
      }
    }
    else if ( (_DWORD)layerMaterialsCount )
    {
      _RBX = (float *)&v3->flags;
      v50 = (unsigned int)layerMaterialsCount;
      do
      {
        *(_DWORD *)_RBX |= 0x800u;
        R_DebugUniqueColorFromIndex(v48, &outColor);
        v51 = outColor.v[2];
        _RBX += 40;
        __asm
        {
          vmovsd  xmm0, qword ptr [rsp+0C8h+outColor]
          vmovsd  qword ptr [rbx-88h], xmm0
        }
        *(_RBX - 32) = v51;
        --v50;
      }
      while ( v50 );
    }
  }
  singleLayer = v5->singleLayer;
  if ( singleLayer != -1 && (_DWORD)layerMaterialsCount )
  {
    do
    {
      if ( v7 != singleLayer )
        v3[v7].flags |= 0x1000u;
      ++v7;
    }
    while ( v7 != (_DWORD)layerMaterialsCount );
  }
  return (unsigned int)layerMaterialsCount;
}

/*
==============
R_ST_SetupMeshPointers
==============
*/
void R_ST_SetupMeshPointers(StTerrainNode *node, const StreamKey *streamKey)
{
  StreamKeyData *p_data; 
  unsigned __int8 *data; 
  unsigned __int16 *v6; 
  __int64 v7; 
  unsigned __int8 *v8; 
  int triCount; 
  unsigned __int16 *indices; 
  int v11; 
  int v12; 
  int vertexCount; 
  ID3D12Resource **p_buffer; 
  unsigned __int8 *v15; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 3097, ASSERT_TYPE_SANITY, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( !streamKey && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 3098, ASSERT_TYPE_SANITY, "( streamKey )", (const char *)&queryFormat, "streamKey") )
    __debugbreak();
  p_data = &streamKey->data;
  if ( (streamKey->flags & 2) != 0 )
    data = (unsigned __int8 *)p_data->dataHandle.data;
  else
    data = Stream_AddressSpace_ResolveHandle(&p_data->dataHandle);
  if ( (node->mesh.flags.packed & 4) != 0 )
  {
    v6 = NULL;
    v7 = 0i64;
  }
  else
  {
    v6 = (unsigned __int16 *)data;
    v7 = (6i64 * node->mesh.triCount + 15) & 0xFFFFFFF0i64;
  }
  node->mesh.indices = v6;
  v8 = &data[v7];
  triCount = node->mesh.triCount;
  indices = node->mesh.indices;
  node->mesh.vd0.data = v8;
  Load_IndexBuffer(&node->mesh.indexBuffer, indices, 3 * triCount, "ST mesh index buffer");
  v11 = 8;
  if ( (node->mesh.flags.packed & 4) != 0 )
    v11 = 4;
  v12 = v11 * node->mesh.vertexCount;
  Load_VertexBuffer(&node->mesh.vd0.vb, node->mesh.vd0.data, v12, "ST mesh vertex buffer");
  vertexCount = 0;
  if ( (node->mesh.flags.packed & 0x10) != 0 )
    vertexCount = node->mesh.vertexCount;
  node->mesh.layerMask.data = NULL;
  p_buffer = &node->mesh.layerMask.buffer;
  if ( vertexCount )
  {
    v15 = &v8[(v12 + 15) & 0xFFFFFFF0];
    node->mesh.layerMask.data = v15;
    Load_VertexBuffer(p_buffer, v15, v12, "ST mesh vertex buffer");
  }
  else
  {
    R_AssignNullBuffer(p_buffer);
  }
}

/*
==============
R_ST_SetupTileDataForSurface
==============
*/
void R_ST_SetupTileDataForSurface(const StDiskTerrainSurface *surface, const vec3_t *cameraWorldPosition, bool setFrameCount, HLSL::TerrainTileDataCode *tileDataOut)
{
  const StTerrain *terrain; 
  unsigned int frameCount; 
  int v28; 
  char v29[208]; 

  terrain = s_stGlob.terrain;
  _RBX = tileDataOut;
  _RBP = surface;
  if ( !s_stGlob.terrain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1451, ASSERT_TYPE_ASSERT, "(terrain)", (const char *)&queryFormat, "terrain") )
    __debugbreak();
  memset_0(v29, 0, sizeof(v29));
  _RAX = v29;
  frameCount = 0;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymm1, ymmword ptr [rax+80h]
    vmovups ymmword ptr [rbx], ymm0
    vmovups ymm0, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rbx+20h], ymm0
    vmovups ymm0, ymmword ptr [rax+40h]
    vmovups ymmword ptr [rbx+40h], ymm0
    vmovups ymm0, ymmword ptr [rax+60h]
    vmovups ymmword ptr [rbx+60h], ymm0
    vmovups ymmword ptr [rbx+80h], ymm1
    vmovups ymm1, ymmword ptr [rax+0A0h]
    vmovups ymmword ptr [rbx+0A0h], ymm1
    vmovups xmm1, xmmword ptr [rax+0C0h]
    vmovups xmmword ptr [rbx+0C0h], xmm1
    vmovss  xmm0, dword ptr [rbp+84h]
    vmulss  xmm2, xmm0, cs:__real@40000000
    vmovss  dword ptr [rbx+14h], xmm2
    vmovss  xmm1, dword ptr [rbp+70h]
    vsubss  xmm0, xmm1, dword ptr [r14]
    vmovss  dword ptr [rbx+34h], xmm0
    vmovss  xmm2, dword ptr [rbp+74h]
    vsubss  xmm1, xmm2, dword ptr [r14+4]
    vmovss  dword ptr [rbx+38h], xmm1
  }
  _RBX->surfaceMapSetIndex = _RBP->surfaceMapSetIndex;
  _RBX->surfaceMapBaseIndex = 0;
  _RBX->surfaceMapXCount = _RBP->surfaceMapXCount;
  R_ST_ComputeOffsetToSurfaceMap(_RBP, cameraWorldPosition, (vec3_t *)&_RBX->offToSurfaceMapX, (vec3_t *)&_RBX->offToSurfaceMapY, (vec2_t *)&_RBX->heightMapDx, (vec2_t *)&_RBX->heightMapDy);
  __asm { vmovss  xmm0, cs:__real@3f000000 }
  _RBX->vertXCount = _RBP->tileVertXCount;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
    vdivss  xmm1, xmm0, xmm1
    vmovss  dword ptr [rbx+68h], xmm1
  }
  _RBX->heightOffsetAndScale.v[0] = _RBP->heightOffset;
  _RBX->heightOffsetAndScale.v[1] = _RBP->heightScale;
  _RBX->surfaceIndex = _RBP - terrain->surfaces;
  if ( setFrameCount )
    frameCount = frontEndDataOut->frameCount;
  v28 = _RBX->flags | 0x10;
  _RBX->frameCount = frameCount;
  _RBX->flags = v28;
  if ( r_st_combined_force->current.enabled )
    _RBX->flags = v28 | 0x20;
}

/*
==============
R_ST_SetupTileDataForSurface
==============
*/
void R_ST_SetupTileDataForSurface(const StDiskTerrainSurface *surface, const vec3_t *cameraWorldPosition, bool setFrameCount, HLSL::TerrainTileDataCodeCS *tileDataOut)
{
  __int128 v12; 
  __int64 v13; 

  v12 = 0ui64;
  __asm
  {
    vmovups xmm0, [rsp+28h+var_28]
    vmovups xmmword ptr [r9], xmm0
  }
  v13 = 0i64;
  __asm
  {
    vmovsd  xmm1, [rsp+28h+var_18]
    vmovsd  qword ptr [r9+10h], xmm1
    vmovss  xmm0, dword ptr [rcx+84h]
    vmulss  xmm2, xmm0, cs:__real@40000000
    vmovss  dword ptr [r9+8], xmm2
    vmovss  xmm1, dword ptr [rcx+70h]
    vsubss  xmm0, xmm1, dword ptr [rdx]
    vmovss  dword ptr [r9+0Ch], xmm0
    vmovss  xmm2, dword ptr [rcx+74h]
    vsubss  xmm1, xmm2, dword ptr [rdx+4]
    vmovss  dword ptr [r9+10h], xmm1
  }
  tileDataOut->surfaceMapSetIndex = surface->surfaceMapSetIndex;
}

/*
==============
R_ST_Shutdown
==============
*/
void R_ST_Shutdown(void)
{
  s_stGlob.terrain = NULL;
  *(_QWORD *)&s_stGlob.tileDataLimit = 0i64;
  s_stGlob.layerDataLimit = 0;
}

/*
==============
R_ST_ShutdownGfxWrappedBuffer
==============
*/
void R_ST_ShutdownGfxWrappedBuffer(GfxWrappedBuffer *buffer)
{
  if ( !buffer->data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 882, ASSERT_TYPE_ASSERT, "(buffer.data)", (const char *)&queryFormat, "buffer.data") )
    __debugbreak();
  R_ShutdownGfxWrappedBuffer(buffer);
  buffer->data = NULL;
}

/*
==============
R_ST_ShutdownTerrain
==============
*/
void R_ST_ShutdownTerrain(void)
{
  void **p_data; 
  StreamerMemLoan result; 

  if ( s_stGlob.terrain )
  {
    p_data = &s_stGlob.frameData[1].tileData.data;
    do
    {
      R_ShutdownGfxDescriptorTable((GfxDescriptorTable *)(p_data + 5));
      if ( !p_data[4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 882, ASSERT_TYPE_ASSERT, "(buffer.data)", (const char *)&queryFormat, "buffer.data") )
        __debugbreak();
      R_ShutdownGfxWrappedBuffer((GfxWrappedBuffer *)(p_data + 1));
      p_data[4] = NULL;
      if ( !*p_data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 882, ASSERT_TYPE_ASSERT, "(buffer.data)", (const char *)&queryFormat, "buffer.data") )
        __debugbreak();
      R_ShutdownGfxWrappedBuffer((GfxWrappedBuffer *)(p_data - 3));
      *p_data = NULL;
      *((_DWORD *)p_data - 8) = 0;
      *((_DWORD *)p_data - 7) = 0;
      p_data -= 15;
    }
    while ( (__int64)p_data >= (__int64)&s_stGlob.frameData[0].tileData.data );
    s_stGlob.surfaceInfos = NULL;
    s_surfaceBaseResourceStreamRequests = NULL;
    PMem_Free(&result, "STFrameData", PMEM_STACK_GAME);
    StreamerMemLoan::~StreamerMemLoan(&result);
    *(_QWORD *)&s_stGlob.layerDataLimit = 0i64;
    s_stGlob.terrain = NULL;
  }
}

/*
==============
R_ST_StreamKeyDBPreRelease
==============
*/
void R_ST_StreamKeyDBPreRelease(const StreamKey *streamKey)
{
  _BYTE *behaviorUserPtr; 

  behaviorUserPtr = streamKey->behaviorUserPtr;
  if ( behaviorUserPtr )
  {
    behaviorUserPtr[86] &= ~2u;
    *(_QWORD *)behaviorUserPtr = 0i64;
    *((_QWORD *)behaviorUserPtr + 5) = 0i64;
    R_ST_StreamKeyUnloadedBackend(streamKey);
  }
}

/*
==============
R_ST_StreamKeyLoadedFrontend
==============
*/
void R_ST_StreamKeyLoadedFrontend(const StreamKey *streamKey)
{
  StTerrainNode *behaviorUserPtr; 

  behaviorUserPtr = (StTerrainNode *)streamKey->behaviorUserPtr;
  R_ST_SetupMeshPointers(behaviorUserPtr, streamKey);
  behaviorUserPtr->mesh.flags.packed |= 2u;
}

/*
==============
R_ST_StreamKeyPtrFixupRelocateBackend
==============
*/
void R_ST_StreamKeyPtrFixupRelocateBackend(const StreamKey *streamKey)
{
  StTerrainNode *behaviorUserPtr; 
  bool v3; 

  behaviorUserPtr = (StTerrainNode *)streamKey->behaviorUserPtr;
  if ( (behaviorUserPtr->mesh.flags.packed & 2) != 0 )
  {
    if ( behaviorUserPtr->mesh.indexBufferToRelease && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 3233, ASSERT_TYPE_ASSERT, "(( (node->mesh.indexBufferToRelease) == 0 ))", (const char *)&queryFormat, "INDEX_BUFFER_IS_NULL( node->mesh.indexBufferToRelease )") )
      __debugbreak();
    v3 = behaviorUserPtr->mesh.vertexBufferToRelease == NULL;
    behaviorUserPtr->mesh.indexBufferToRelease = behaviorUserPtr->mesh.indexBuffer;
    if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 3236, ASSERT_TYPE_ASSERT, "(( (node->mesh.vertexBufferToRelease) == 0 ))", (const char *)&queryFormat, "VERTEX_BUFFER_IS_NULL( node->mesh.vertexBufferToRelease )") )
      __debugbreak();
    v3 = behaviorUserPtr->mesh.layerMaskBufferToRelease == NULL;
    behaviorUserPtr->mesh.vertexBufferToRelease = behaviorUserPtr->mesh.vd0.vb;
    if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 3240, ASSERT_TYPE_ASSERT, "(( (node->mesh.layerMaskBufferToRelease) == 0 ))", (const char *)&queryFormat, "VERTEX_BUFFER_IS_NULL( node->mesh.layerMaskBufferToRelease )") )
      __debugbreak();
    behaviorUserPtr->mesh.layerMaskBufferToRelease = behaviorUserPtr->mesh.layerMask.buffer;
    R_ST_SetupMeshPointers(behaviorUserPtr, streamKey);
  }
}

/*
==============
R_ST_StreamKeyUnloadedBackend
==============
*/
void R_ST_StreamKeyUnloadedBackend(const StreamKey *streamKey)
{
  void *behaviorUserPtr; 
  Stream_Logger_Item item; 

  behaviorUserPtr = streamKey->behaviorUserPtr;
  if ( (*((_BYTE *)behaviorUserPtr + 86) & 2) != 0 )
  {
    item.m_image = (const GfxImage *)streamKey;
    item.m_type = STREAM_ITEM_GENERIC;
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+48h+item.___u0]
      vmovdqa xmmword ptr [rsp+48h+item.___u0], xmm0
    }
    Stream_Logger_Dump(&item);
    if ( (*((_BYTE *)behaviorUserPtr + 86) & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 3210, ASSERT_TYPE_ASSERT, "(!node->mesh.flags.renderable)", (const char *)&queryFormat, "!node->mesh.flags.renderable") )
      __debugbreak();
  }
  R_ST_FreeMeshBuffers((ID3D12Resource **)behaviorUserPtr + 1, (ID3D12Resource **)behaviorUserPtr + 4, (ID3D12Resource **)behaviorUserPtr + 3);
}

/*
==============
R_ST_StreamKeyUnloadedFrontend
==============
*/
void R_ST_StreamKeyUnloadedFrontend(const StreamKey *streamKey)
{
  _BYTE *behaviorUserPtr; 

  behaviorUserPtr = streamKey->behaviorUserPtr;
  behaviorUserPtr[86] &= ~2u;
  *(_QWORD *)behaviorUserPtr = 0i64;
  *((_QWORD *)behaviorUserPtr + 5) = 0i64;
}

/*
==============
R_ST_StreamKeyUnmapOldAddressBackend
==============
*/
void R_ST_StreamKeyUnmapOldAddressBackend(const StreamKey *streamKey)
{
  ID3D12Resource **behaviorUserPtr; 

  behaviorUserPtr = (ID3D12Resource **)streamKey->behaviorUserPtr;
  if ( !behaviorUserPtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 3258, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  R_ST_FreeMeshBuffers(behaviorUserPtr + 7, behaviorUserPtr + 8, behaviorUserPtr + 9);
}

/*
==============
R_ST_Stream_UpdateMaterialDistances
==============
*/
__int64 R_ST_Stream_UpdateMaterialDistances(const StDiskTerrainSurface *surface, const StreamUpdateMultiView *multiView, float *tileMaterialDistancesSq)
{
  unsigned int numLevels; 
  signed int v4; 
  int integer; 
  StStreamingUpdateMaterialDistancesCallbackStaticParams nodeCallbackStaticParams; 
  StStreamingUpdateMaterialDistancesCallbackDynamicParams nodeCallbackDynamicParams; 

  nodeCallbackStaticParams.multiView = multiView;
  numLevels = surface->grid.numLevels;
  nodeCallbackStaticParams.surface = surface;
  v4 = numLevels - 1;
  nodeCallbackStaticParams.tileMaterialDistancesSq = tileMaterialDistancesSq;
  nodeCallbackStaticParams.layerMask = 0;
  integer = r_st_forceLod->current.integer;
  if ( integer < 0 )
  {
    nodeCallbackStaticParams.shouldTraverse = 1;
  }
  else
  {
    nodeCallbackStaticParams.shouldTraverse = 0;
    if ( v4 < integer )
      integer = v4;
    v4 = integer;
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+84h]
    vmulss  xmm1, xmm0, cs:__real@40000000
    vmovss  [rsp+58h+arg_0.nextTileSize], xmm1
  }
  R_ST_TraverseTree_StStreamingUpdateMaterialDistancesCallbackStaticParams_StStreamingUpdateMaterialDistancesCallbackDynamicParams_(surface, v4, R_ST_Stream_UpdateMaterialDistances_Callback, &nodeCallbackStaticParams, &nodeCallbackDynamicParams);
  return nodeCallbackStaticParams.layerMask;
}

/*
==============
R_ST_Stream_UpdateMaterialDistances_Callback
==============
*/
char R_ST_Stream_UpdateMaterialDistances_Callback(const StTerrainNode *node, unsigned int gridLevel, StStreamingUpdateMaterialDistancesCallbackStaticParams *staticCallbackParams, const StStreamingUpdateMaterialDistancesCallbackDynamicParams *inDynamicParms, StStreamingUpdateMaterialDistancesCallbackDynamicParams *outDynamicParms)
{
  const StTerrainNode *v16; 
  __int64 viewCount; 
  bool v33; 
  bool v34; 
  bool v57; 
  float v65; 
  float v66; 
  float v67; 
  float4 v70; 
  float4 v71; 
  float4 v72; 
  float4 v73; 
  float4 v74; 
  __int128 v75; 
  float4 v77[6]; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm { vmovss  xmm0, dword ptr [r9] }
  _RAX = outDynamicParms;
  _R12 = inDynamicParms;
  __asm { vmulss  xmm0, xmm0, cs:__real@3f000000 }
  v16 = node;
  __asm { vmovss  dword ptr [rax], xmm0 }
  if ( (node->mesh.flags.packed & 1) != 0 )
    return 0;
  __asm { vmovss  xmm0, dword ptr [rcx+58h] }
  _RBX = staticCallbackParams->multiView;
  HIDWORD(v75) = 0;
  __asm
  {
    vmovups xmm4, xmmword ptr [rbp-50h]
    vmovss  xmm4, xmm4, xmm0
    vmovss  xmm0, dword ptr [rcx+64h]
    vinsertps xmm4, xmm4, dword ptr [rcx+5Ch], 10h
    vinsertps xmm4, xmm4, dword ptr [rcx+60h], 20h ; ' '
    vmovups xmmword ptr [rbp-50h], xmm4
  }
  HIDWORD(v75) = 0;
  __asm
  {
    vmovups xmm3, xmmword ptr [rbp-50h]
    vmovss  xmm3, xmm3, xmm0
    vinsertps xmm3, xmm3, dword ptr [rcx+68h], 10h
    vinsertps xmm3, xmm3, dword ptr [rcx+6Ch], 20h ; ' '
    vmovss  xmm0, cs:__real@7f7fffff
    vmovups xmmword ptr [rbp-50h], xmm3
    vsubps  xmm5, xmm4, xmm3
    vaddps  xmm3, xmm4, xmm3
    vmovups xmmword ptr [rbp-50h], xmm3
    vmovss  dword ptr [rsp+54h], xmm0
    vmovss  dword ptr [rsp+50h], xmm0
    vmovups [rbp+60h+var_A0], xmm5
  }
  viewCount = _RBX->viewCount;
  v33 = 0;
  v34 = viewCount == 0;
  if ( viewCount > 0 )
  {
    _RDI = _RBX->viewCosFovLimit;
    __asm
    {
      vmovaps xmmword ptr [r11-48h], xmm6
      vmovaps xmmword ptr [r11-58h], xmm7
      vmovaps xmmword ptr [r11-68h], xmm8
      vmovaps xmmword ptr [r11-78h], xmm9
    }
    do
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]
        vmovss  xmm7, dword ptr [rdi+40h]
        vmovss  xmm8, dword ptr [rdi]
        vmovss  xmm9, dword ptr [rdi-80h]
        vmovups [rbp+60h+var_E0], xmm0
        vmovdqa [rsp+160h+var_108+8], xmm3
        vmovdqa xmmword ptr [rsp+160h+var_F8+8], xmm5
      }
      Stream_AdjustViewPosForST(v77, &v72, &v71, &v70);
      __asm
      {
        vmovups xmm3, xmmword ptr [rbp-50h]
        vminps  xmm0, xmm3, xmmword ptr [rbx]
        vmovups xmm5, [rbp+60h+var_A0]
        vmovups xmm6, [rbp+60h+var_90]
        vmaxps  xmm4, xmm0, xmm5
        vsubps  xmm0, xmm4, xmm6
        vmulps  xmm1, xmm0, xmm0
        vinsertps xmm2, xmm1, xmm1, 8
        vhaddps xmm0, xmm2, xmm2
        vhaddps xmm1, xmm0, xmm0
        vcomiss xmm1, dword ptr [rsp+50h]
      }
      if ( v33 )
      {
        __asm
        {
          vmovss  dword ptr [rsp+40h], xmm7
          vmovss  [rsp+160h+var_128], xmm8
          vmovss  [rsp+160h+var_130], xmm9
          vmovss  dword ptr [rsp+50h], xmm1
          vmovups xmm0, xmmword ptr [rbx+100h]
          vmovaps xmm2, xmm1
          vmovups [rbp+60h+var_E0], xmm0
          vmovdqa xmmword ptr [rsp+160h+var_F8+8], xmm6
          vmovdqa [rsp+160h+var_108+8], xmm4
          vmovdqa [rbp+60h+var_D0], xmm3
          vmovdqa [rbp+60h+var_C0], xmm5
        }
        *(float *)&_XMM0 = Stream_CalculateDistanceSq_ApplyZoomFactor(&v74, &v73, *(float *)&_XMM2, &v70, &v71, &v72, v65, v66, v67);
        __asm
        {
          vmovups xmm3, xmmword ptr [rbp-50h]
          vmovups xmm5, [rbp+60h+var_A0]
          vmovss  dword ptr [rsp+54h], xmm0
        }
      }
      ++_RDI;
      _RBX = (const StreamUpdateMultiView *)((char *)_RBX + 16);
      v33 = viewCount-- == 0;
      v34 = viewCount == 0;
    }
    while ( viewCount );
    __asm
    {
      vmovaps xmm9, [rsp+160h+var_78+8]
      vmovaps xmm8, [rsp+160h+var_68+8]
      vmovaps xmm7, [rsp+160h+var_58+8]
      vmovaps xmm6, [rsp+160h+var_48+8]
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+50h]
    vsqrtss xmm0, xmm0, xmm0
    vmulss  xmm1, xmm0, cs:__real@3f000000
    vcomiss xmm1, dword ptr [r12]
  }
  v57 = !staticCallbackParams->shouldTraverse || !v33 && !v34;
  if ( !gridLevel )
    v57 = 1;
  if ( v57 )
  {
    _ECX = v16->layerMask;
    _RDX = staticCallbackParams->tileMaterialDistancesSq;
    __asm { vmovss  xmm2, dword ptr [rsp+54h] }
    if ( _ECX )
    {
      do
      {
        __asm { tzcnt   eax, ecx }
        _ECX &= ~(1 << _RAX);
        _RAX = (unsigned int)_RAX;
        __asm
        {
          vmovss  xmm0, dword ptr [rdx+rax*4]
          vminss  xmm1, xmm0, xmm2
          vmovss  dword ptr [rdx+rax*4], xmm1
        }
      }
      while ( _ECX );
      _ECX = v16->layerMask;
    }
    staticCallbackParams->layerMask |= _ECX;
    return 0;
  }
  return 1;
}

/*
==============
R_ST_SunShadowMapBitsForBounds
==============
*/
void R_ST_SunShadowMapBitsForBounds(const Bounds *wldBounds, const GfxSunShadow *sunShadow, unsigned int *mapsToDrawInOut)
{
  unsigned int v15; 
  int v18; 
  unsigned int v19; 
  int v26; 
  char v27; 
  char v28; 

  _RDI = wldBounds;
  if ( !*mapsToDrawInOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2185, ASSERT_TYPE_ASSERT, "(mapsToDrawInOut)", (const char *)&queryFormat, "mapsToDrawInOut") )
    __debugbreak();
  if ( R_CullBoxDpvs(_RDI, sunShadow->cameraPlanes, sunShadow->cameraPlaneCount) )
  {
    *mapsToDrawInOut &= 0xFFFFFFF8;
  }
  else
  {
    v15 = 2;
    __asm
    {
      vmovaps [rsp+0D8h+var_28], xmm6
      vmovaps [rsp+0D8h+var_38], xmm7
      vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovaps [rsp+0D8h+var_48], xmm8
      vmovaps [rsp+0D8h+var_58], xmm9
      vmovaps [rsp+0D8h+var_68], xmm10
      vmovaps [rsp+0D8h+var_78], xmm11
      vmovaps [rsp+0D8h+var_88], xmm12
      vmovaps [rsp+0D8h+var_98], xmm13
      vmovaps [rsp+0D8h+var_A8], xmm14
      vxorps  xmm14, xmm14, xmm14
    }
    while ( 1 )
    {
      v18 = v15;
      if ( v15 >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2148, ASSERT_TYPE_ASSERT, "(partitionIndex < R_SUNSHADOW_OPAQUE_PARTITION_COUNT && partitionIndex < ST_SUN_SHADOW_MAP_BITS_BIT_COUNT)", (const char *)&queryFormat, "partitionIndex < R_SUNSHADOW_OPAQUE_PARTITION_COUNT && partitionIndex < ST_SUN_SHADOW_MAP_BITS_BIT_COUNT") )
        __debugbreak();
      v19 = *mapsToDrawInOut;
      if ( _bittest((const int *)&v19, v15) )
        break;
LABEL_14:
      --v15;
      if ( v18 <= 0 )
        goto LABEL_20;
    }
    __asm
    {
      vmovss  xmm8, dword ptr [rdi+0Ch]
      vmovss  xmm9, dword ptr [rdi]
      vmovss  xmm10, dword ptr [rdi+4]
      vmovss  xmm11, dword ptr [rdi+10h]
      vmovss  xmm12, dword ptr [rdi+8]
      vmovss  xmm13, dword ptr [rdi+14h]
    }
    v26 = 0;
    v28 = ((unsigned __int128)(544 * (__int128)(int)v15) >> 64 != 0) | v27;
    _RAX = sunShadow->partition[v15].frustumSidePlanes;
    while ( 1 )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rax]
        vmovss  xmm5, dword ptr [rax+4]
        vmovss  xmm6, dword ptr [rax+8]
        vandps  xmm0, xmm1, xmm7
        vmulss  xmm2, xmm0, xmm8
        vmulss  xmm0, xmm9, xmm1
        vaddss  xmm1, xmm0, dword ptr [rax+0Ch]
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm2, xmm10, xmm5
        vmulss  xmm1, xmm12, xmm6
        vaddss  xmm4, xmm3, xmm2
        vandps  xmm5, xmm5, xmm7
        vmulss  xmm0, xmm5, xmm11
        vaddss  xmm2, xmm4, xmm0
        vandps  xmm6, xmm6, xmm7
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm6, xmm13
        vaddss  xmm1, xmm3, xmm0
        vcomiss xmm1, xmm14
      }
      if ( v28 )
        break;
      ++v26;
      ++_RAX;
      v28 = (unsigned int)v26 <= 4;
      if ( v26 >= 4 )
        goto LABEL_14;
    }
    if ( v15 >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2156, ASSERT_TYPE_ASSERT, "(partitionIndex < R_SUNSHADOW_OPAQUE_PARTITION_COUNT && partitionIndex < ST_SUN_SHADOW_MAP_BITS_BIT_COUNT)", (const char *)&queryFormat, "partitionIndex < R_SUNSHADOW_OPAQUE_PARTITION_COUNT && partitionIndex < ST_SUN_SHADOW_MAP_BITS_BIT_COUNT") )
      __debugbreak();
    *mapsToDrawInOut &= -1 << (v15 + 1);
LABEL_20:
    __asm
    {
      vmovaps xmm13, [rsp+0D8h+var_98]
      vmovaps xmm12, [rsp+0D8h+var_88]
      vmovaps xmm11, [rsp+0D8h+var_78]
      vmovaps xmm10, [rsp+0D8h+var_68]
      vmovaps xmm9, [rsp+0D8h+var_58]
      vmovaps xmm8, [rsp+0D8h+var_48]
      vmovaps xmm7, [rsp+0D8h+var_38]
      vmovaps xmm6, [rsp+0D8h+var_28]
      vmovaps xmm14, [rsp+0D8h+var_A8]
    }
  }
}

/*
==============
R_ST_SurfaceBaseResourceStreamRequest
==============
*/
void R_ST_SurfaceBaseResourceStreamRequest(const StDiskTerrainSurface *surface, StSurfaceStreamRequestResource resource)
{
  __int64 v2; 
  __int64 v4; 
  __int64 v5; 
  unsigned int surfaceCount; 

  v2 = resource;
  if ( !s_stGlob.terrain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 601, ASSERT_TYPE_ASSERT, "(s_stGlob.terrain)", (const char *)&queryFormat, "s_stGlob.terrain") )
    __debugbreak();
  if ( !s_surfaceBaseResourceStreamRequests && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 602, ASSERT_TYPE_ASSERT, "(s_surfaceBaseResourceStreamRequests)", (const char *)&queryFormat, "s_surfaceBaseResourceStreamRequests") )
    __debugbreak();
  v4 = truncate_cast<unsigned int,__int64>(surface - s_stGlob.terrain->surfaces);
  if ( (unsigned int)v4 >= s_stGlob.terrain->surfaceCount )
  {
    surfaceCount = s_stGlob.terrain->surfaceCount;
    LODWORD(v5) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 604, ASSERT_TYPE_ASSERT, "(unsigned)( surfaceIndex ) < (unsigned)( s_stGlob.terrain->surfaceCount )", "surfaceIndex doesn't index s_stGlob.terrain->surfaceCount\n\t%i not in [0, %i)", v5, surfaceCount) )
      __debugbreak();
  }
  s_surfaceBaseResourceStreamRequests->resources[2 * v4 + v4 + v2] = 1;
}

/*
==============
R_ST_TerrainSurface_IssueDataInfoRequests
==============
*/
void R_ST_TerrainSurface_IssueDataInfoRequests(const StDiskTerrainSurface *surface, const TerrainSurfaceDataInfo *terrainSurfaceDataInfo)
{
  unsigned int baseResourceRequestMask; 
  __int64 i; 
  int v6; 
  __int64 v7; 
  StTerrainMaterialLayer *v8; 
  __int64 v9; 
  const GfxImage *BindlessImageFromFlattenedIndex; 
  unsigned int layerMaskResourceRequestMask; 
  unsigned int v12; 
  __int64 v13; 
  __int64 v14; 
  const StTerrain *terrain; 

  terrain = s_stGlob.terrain;
  if ( s_stGlob.terrain )
  {
    baseResourceRequestMask = terrainSurfaceDataInfo->baseResourceRequestMask;
    if ( (baseResourceRequestMask & 1) != 0 )
    {
      Stream_UsedImage(surface->heightMap);
      baseResourceRequestMask = terrainSurfaceDataInfo->baseResourceRequestMask;
    }
    if ( (baseResourceRequestMask & 2) != 0 )
    {
      Stream_UsedImage(surface->cutoutMap);
      baseResourceRequestMask = terrainSurfaceDataInfo->baseResourceRequestMask;
    }
    if ( (baseResourceRequestMask & 4) != 0 )
    {
      Stream_UsedImage(surface->combinedAlbedoMap);
      baseResourceRequestMask = terrainSurfaceDataInfo->baseResourceRequestMask;
    }
    if ( (baseResourceRequestMask & 8) != 0 )
      Stream_UsedImage(surface->combinedNogMap);
    for ( i = 0i64; (unsigned int)i < surface->layerCount; i = (unsigned int)(i + 1) )
    {
      v6 = 1;
      v7 = 4i64;
      v8 = &surface->layerMaterials[(unsigned int)i];
      v9 = 0i64;
      do
      {
        if ( ((unsigned __int8)v6 & terrainSurfaceDataInfo->layerMaterialResourceRequestMask[i]) != 0 )
        {
          BindlessImageFromFlattenedIndex = R_ST_GetBindlessImageFromFlattenedIndex(v8->materialTextureIdxs[v9]);
          if ( BindlessImageFromFlattenedIndex )
            Stream_UsedImage(BindlessImageFromFlattenedIndex);
        }
        v6 = __ROL4__(v6, 1);
        ++v9;
        --v7;
      }
      while ( v7 );
      layerMaskResourceRequestMask = terrainSurfaceDataInfo->layerMaskResourceRequestMask;
      if ( _bittest((const int *)&layerMaskResourceRequestMask, i) )
      {
        if ( (unsigned int)i >= surface->layerMaskMapIdxsCount )
        {
          LODWORD(v14) = surface->layerMaskMapIdxsCount;
          LODWORD(v13) = i;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 335, ASSERT_TYPE_ASSERT, "(unsigned)( matLayerIndex ) < (unsigned)( surface.layerMaskMapIdxsCount )", "matLayerIndex doesn't index surface.layerMaskMapIdxsCount\n\t%i not in [0, %i)", v13, v14) )
            __debugbreak();
        }
        v12 = surface->layerMaskMapIdxs[i];
        if ( v12 >= terrain->flattenedImagesCount )
        {
          LODWORD(v14) = terrain->flattenedImagesCount;
          LODWORD(v13) = surface->layerMaskMapIdxs[i];
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 337, ASSERT_TYPE_ASSERT, "(unsigned)( layerMaskIndex ) < (unsigned)( terrain->flattenedImagesCount )", "layerMaskIndex doesn't index terrain->flattenedImagesCount\n\t%i not in [0, %i)", v13, v14) )
            __debugbreak();
        }
        Stream_UsedImage(terrain->flattenedImages[(unsigned __int16)v12]);
      }
    }
  }
}

/*
==============
R_ST_TerrainSurface_PopulateDataInfo
==============
*/
void R_ST_TerrainSurface_PopulateDataInfo(const StDiskTerrainSurface *surface, TerrainSurfaceDataInfo *terrainSurfaceDataInfo)
{
  const StDiskTerrainSurface *v3; 
  unsigned int v4; 
  int v5; 
  __int64 v6; 
  __int64 v7; 
  unsigned int v8; 
  char v9; 
  const StTerrain *v10; 
  unsigned __int16 v11; 
  const GfxImage *v12; 
  char v13; 
  __int64 v14; 
  unsigned int v15; 
  const GfxImage *v16; 
  __int64 v17; 
  __int64 v18; 
  const StTerrain *terrain; 
  unsigned int v21; 
  __int64 v22; 

  terrain = s_stGlob.terrain;
  v3 = surface;
  if ( s_stGlob.terrain )
  {
    *(_QWORD *)&terrainSurfaceDataInfo->baseResourceAvailableMask = 0i64;
    if ( Stream_CheckImageLowMipUsable(surface->heightMap) )
      terrainSurfaceDataInfo->baseResourceAvailableMask |= 1u;
    if ( Stream_CheckImageLowMipUsable(v3->cutoutMap) )
      terrainSurfaceDataInfo->baseResourceAvailableMask |= 2u;
    if ( Stream_CheckImageLowMipUsable(v3->combinedAlbedoMap) )
      terrainSurfaceDataInfo->baseResourceAvailableMask |= 4u;
    if ( Stream_CheckImageLowMipUsable(v3->combinedNogMap) )
      terrainSurfaceDataInfo->baseResourceAvailableMask |= 8u;
    *(_QWORD *)&terrainSurfaceDataInfo->layerMaskResourceAvailableMask = 0i64;
    v4 = 0;
    v21 = 0;
    if ( v3->layerCount )
    {
      do
      {
        v5 = 1;
        v22 = v4;
        v6 = 0i64;
        terrainSurfaceDataInfo->layerMaterialResourceAvailableMask[v4] = 0;
        terrainSurfaceDataInfo->layerMaterialResourceRequestMask[v4] = 0;
        v7 = (__int64)&v3->layerMaterials[v4];
        v8 = 0;
        do
        {
          v9 = 1;
          v10 = s_stGlob.terrain;
          v11 = *(_WORD *)(v6 + *(_QWORD *)(v7 + 8));
          if ( !s_stGlob.terrain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1029, ASSERT_TYPE_ASSERT, "(terrain)", (const char *)&queryFormat, "terrain") )
            __debugbreak();
          if ( v11 != 0xFFFF && v11 < v10->flattenedImagesCount )
          {
            v12 = v10->flattenedImages[v11];
            if ( v12 )
            {
              if ( !Stream_CheckImageLowMipUsable(v12) && (!v12->fallback || !r_st_fallbackImagesOkForLayering->current.enabled) )
                v9 = 0;
            }
          }
          v13 = v5;
          if ( !v9 )
            v13 = 0;
          v14 = v22;
          ++v8;
          v5 = __ROL4__(v5, 1);
          v6 += 2i64;
          terrainSurfaceDataInfo->layerMaterialResourceAvailableMask[v22] |= v13;
        }
        while ( v8 < 4 );
        v3 = surface;
        if ( v21 >= surface->layerMaskMapIdxsCount )
        {
          LODWORD(v18) = surface->layerMaskMapIdxsCount;
          LODWORD(v17) = v21;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 274, ASSERT_TYPE_ASSERT, "(unsigned)( matLayerIndex ) < (unsigned)( surface.layerMaskMapIdxsCount )", "matLayerIndex doesn't index surface.layerMaskMapIdxsCount\n\t%i not in [0, %i)", v17, v18) )
            __debugbreak();
          v14 = v21;
        }
        v15 = surface->layerMaskMapIdxs[v14];
        if ( v15 >= terrain->flattenedImagesCount )
        {
          LODWORD(v18) = terrain->flattenedImagesCount;
          LODWORD(v17) = surface->layerMaskMapIdxs[v14];
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 276, ASSERT_TYPE_ASSERT, "(unsigned)( layerMaskIndex ) < (unsigned)( terrain->flattenedImagesCount )", "layerMaskIndex doesn't index terrain->flattenedImagesCount\n\t%i not in [0, %i)", v17, v18) )
            __debugbreak();
        }
        v16 = terrain->flattenedImages[(unsigned __int16)v15];
        if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 278, ASSERT_TYPE_ASSERT, "(layerMaskImage)", (const char *)&queryFormat, "layerMaskImage") )
          __debugbreak();
        if ( Stream_CheckImageLowMipUsable(v16) )
          terrainSurfaceDataInfo->layerMaskResourceAvailableMask |= 1 << v21;
        v4 = v21 + 1;
        v21 = v4;
      }
      while ( v4 < surface->layerCount );
    }
  }
}

/*
==============
R_ST_ToggleSmpFrame
==============
*/
__int64 R_ST_ToggleSmpFrame()
{
  __int64 v0; 
  StFrameData *v1; 

  v0 = (LOBYTE(s_stGlob.frameDataIndex) - 1) & 1;
  s_stGlob.frameDataIndex = (LOBYTE(s_stGlob.frameDataIndex) - 1) & 1;
  v1 = &s_stGlob.frameData[v0];
  v1->layerDataCount = 0;
  v1->tileDataCount = 0;
  return s_stGlob.frameDataIndex;
}

/*
==============
R_ST_UpdateCachedSunShadowData
==============
*/
void R_ST_UpdateCachedSunShadowData(const StTerrain *terrain, const GfxSunShadow *sunShadow, GfxViewInfo *viewInfo, StCachedFrontEndDvars *cachedDvars, StFrameData *frameData, StCachedSunShadowCellList *cellList)
{
  StCachedSunShadowCellList *v7; 
  unsigned int v8; 
  StCachedSunShadowCell *v9; 
  GfxCachedSunShadowOverlap *overlap; 
  GfxCachedSunShadow *staticEntry; 
  unsigned int firstStNodeId; 
  GfxCachedSunShadow_StNode *StNode; 
  unsigned int v14; 
  StSunShadowSurfList surfList; 
  StCachedSunShadowSurfaceStates surfaces; 

  v7 = cellList;
  memset_0(&surfaces, 0, sizeof(surfaces));
  v8 = 0;
  v14 = 0;
  if ( cellList->cellCount )
  {
    do
    {
      v9 = &v7->cells[v8];
      if ( !v9->overlap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2610, ASSERT_TYPE_ASSERT, "(cell.overlap)", (const char *)&queryFormat, "cell.overlap") )
        __debugbreak();
      overlap = v9->overlap;
      if ( !v9->overlap->staticEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2612, ASSERT_TYPE_ASSERT, "(overlap.staticEntry)", (const char *)&queryFormat, "overlap.staticEntry") )
        __debugbreak();
      staticEntry = overlap->staticEntry;
      if ( overlap->skipUpdate || staticEntry->terrainFinalized )
      {
        R_SunShadowCache_EndProcessing(overlap);
      }
      else
      {
        surfList.count = 0;
        firstStNodeId = staticEntry->firstStNodeId;
        staticEntry->terrainFinalized = 1;
        if ( firstStNodeId != -1 )
        {
          do
          {
            StNode = R_SunShadowCache_GetStNode(firstStNodeId);
            if ( !StNode->surfsEmitted )
            {
              if ( R_ST_AddCachedSunShadowDrawSurfsToList(terrain, viewInfo, cachedDvars, frameData, StNode, &surfaces, &surfList) )
              {
                StNode->surfsEmitted = 1;
                overlap->newTerrainSurfs = 1;
              }
              else
              {
                staticEntry->terrainFinalized = 0;
              }
            }
            firstStNodeId = R_SunShadowCache_NextStNodeId(firstStNodeId, staticEntry->lastStNodeId);
          }
          while ( firstStNodeId != -1 );
          v8 = v14;
          v7 = cellList;
        }
        R_SunShadowCache_EndProcessing(overlap);
        R_ST_EmitSunShadowCacheDrawSurfs(viewInfo, sunShadow, v9->partitionIdx, v9->cellIdx, surfList.surfs, surfList.count);
      }
      v14 = ++v8;
    }
    while ( v8 < v7->cellCount );
  }
}

