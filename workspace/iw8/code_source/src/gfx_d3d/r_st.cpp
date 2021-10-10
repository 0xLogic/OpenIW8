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
  *layerOut = layer->layerData;
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
  unsigned __int16 *materialTextureIdxs; 
  unsigned __int16 v8; 
  unsigned __int16 v9; 
  unsigned __int16 v10; 
  unsigned __int16 v11; 

  *layerOut = layer->layerData;
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
  __m256i v7; 
  __m256i v8[6]; 
  __int128 v9; 

  memset_0(v8, 0, 0xD0ui64);
  v7 = v8[4];
  *(__m256i *)&tileDataOut->flags = v8[0];
  *(__m256i *)&tileDataOut->vertexScale.xy.v[1] = v8[1];
  *(__m256i *)&tileDataOut->surfaceMapBaseIndex = v8[2];
  *(__m256i *)&tileDataOut->offToSurfaceMapY.xyz.v[1] = v8[3];
  *(__m256i *)&tileDataOut->windDir.xyz.v[1] = v7;
  *(__m256i *)&tileDataOut->surfaceIndex = v8[5];
  *(_OWORD *)tileDataOut->heightMapDx.v = v9;
  tileDataOut->terrainSize = surface->halfWldSize * 2.0;
  tileDataOut->surfaceMapOffOrigin.v[0] = surface->surfaceMapOrigin.v[0] - cameraWorldPosition->v[0];
  tileDataOut->surfaceMapOffOrigin.v[1] = surface->surfaceMapOrigin.v[1] - cameraWorldPosition->v[1];
  tileDataOut->surfaceMapSetIndex = surface->surfaceMapSetIndex;
}

/*
==============
R_ST_SetupTileDataForSurfaceInternal<HLSL::TerrainTileDataCodeCS>
==============
*/
void R_ST_SetupTileDataForSurfaceInternal<HLSL::TerrainTileDataCodeCS>(const StDiskTerrainSurface *surface, const vec3_t *cameraWorldPosition, bool setFrameCount, HLSL::TerrainTileDataCodeCS *tileDataOut)
{
  *(_OWORD *)&tileDataOut->layerCount = 0ui64;
  *(double *)((char *)&tileDataOut->surfaceMapOffOrigin + 4) = 0i64;
  tileDataOut->terrainSize = surface->halfWldSize * 2.0;
  tileDataOut->surfaceMapOffOrigin.v[0] = surface->surfaceMapOrigin.v[0] - cameraWorldPosition->v[0];
  tileDataOut->surfaceMapOffOrigin.v[1] = surface->surfaceMapOrigin.v[1] - cameraWorldPosition->v[1];
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
  std::pair<float,unsigned int> *v3; 
  __int64 v4; 
  __int64 surfaceCount; 
  __int64 v6; 
  unsigned int v7; 
  const GfxViewInfo *v8; 
  unsigned int *p_second; 
  __int64 p_z; 
  float v12; 
  __int128 v14; 
  float v17; 
  __m128 v19; 
  float v22; 
  __m128 v24; 
  __int64 frameDataIndex; 
  StFrameData *v34; 
  int integer; 
  __int64 second; 
  const StDiskTerrainSurface *v37; 
  __int64 v38; 
  std::less<void> v39; 
  __int128 v40; 
  __m128 v41; 
  __m128 v42; 
  StCachedFrontEndDvars cachedDvarsOut; 
  std::pair<float,unsigned int> _First[257]; 

  if ( r_st_enable->current.enabled )
  {
    Profile_Begin(98);
    terrain = s_stGlob.terrain;
    if ( s_stGlob.terrain )
    {
      if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2115, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
        __debugbreak();
      v3 = _First;
      v4 = 256i64;
      do
      {
        std::pair<float,unsigned int>::pair<float,unsigned int>(v3++);
        --v4;
      }
      while ( v4 );
      surfaceCount = terrain->surfaceCount;
      v6 = 0i64;
      v7 = 0;
      if ( (_DWORD)surfaceCount )
      {
        v8 = *(const GfxViewInfo **)cmd;
        p_second = &_First[0].second;
        p_z = (__int64)&terrain->surfaces->wldBounds.halfSize.z;
        _XMM7 = g_negativeZero.v;
        do
        {
          v12 = v8->viewParmsSet.frames[0].viewParms.camera.origin.v[0];
          HIDWORD(v40) = 0;
          v14 = v40;
          *(float *)&v14 = v12;
          _XMM5 = v14;
          __asm
          {
            vinsertps xmm5, xmm5, dword ptr [rcx+104h], 10h
            vinsertps xmm5, xmm5, dword ptr [rcx+108h], 20h ; ' '
          }
          v40 = (__int128)_XMM5;
          v17 = *(float *)(p_z - 20);
          v41.m128_i32[3] = 0;
          v19 = v41;
          v19.m128_f32[0] = v17;
          _XMM4 = v19;
          __asm
          {
            vinsertps xmm4, xmm4, dword ptr [rax-10h], 10h
            vinsertps xmm4, xmm4, dword ptr [rax-0Ch], 20h ; ' '
          }
          v41 = _XMM4;
          v22 = *(float *)(p_z - 8);
          v42.m128_i32[3] = 0;
          v24 = v42;
          v24.m128_f32[0] = v22;
          _XMM3 = v24;
          __asm
          {
            vinsertps xmm3, xmm3, dword ptr [rax-4], 10h
            vinsertps xmm3, xmm3, dword ptr [rax], 20h ; ' '
          }
          v42 = _XMM3;
          _mm128_sub_ps(_XMM5, _XMM4);
          __asm { vandnps xmm1, xmm7, xmm0 }
          _XMM2 = _mm128_sub_ps(_XMM1, _XMM3);
          __asm { vmaxps  xmm0, xmm2, xmm6 }
          _XMM1 = _mm128_mul_ps(_XMM0, _XMM0);
          __asm
          {
            vhaddps xmm2, xmm1, xmm1
            vhaddps xmm0, xmm2, xmm2
          }
          *(p_second - 1) = _XMM0;
          *p_second = v7++;
          p_z += 376i64;
          p_second += 2;
        }
        while ( v7 < (unsigned int)surfaceCount );
      }
      std::_Sort_unchecked<std::pair<float,unsigned int> *,std::less<void>>(_First, &_First[surfaceCount], surfaceCount, v39);
      R_ST_CacheFrontEndDvars(&cachedDvarsOut);
      frameDataIndex = s_stGlob.frameDataIndex;
      if ( s_stGlob.frameDataIndex >= 2 )
      {
        LODWORD(v38) = s_stGlob.frameDataIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 837, ASSERT_TYPE_ASSERT, "(unsigned)( frameDataIndex ) < (unsigned)( ST_FRAME_DATA_COUNT )", "frameDataIndex doesn't index ST_FRAME_DATA_COUNT\n\t%i not in [0, %i)", v38, 2) )
          __debugbreak();
      }
      v34 = &s_stGlob.frameData[frameDataIndex];
      if ( terrain->surfaceCount )
      {
        do
        {
          integer = r_st_drawSingleSurface->current.integer;
          if ( integer == -1 )
            goto LABEL_20;
          second = (int)_First[v6].second;
          if ( (unsigned int)second > 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned int>(unsigned int)", "signed", second, "unsigned", (unsigned int)second) )
            __debugbreak();
          if ( integer == (_DWORD)second )
          {
LABEL_20:
            v37 = &terrain->surfaces[_First[v6].second];
            *(_QWORD *)&v40 = *((_QWORD *)cmd + 1);
            DWORD2(v40) = *((_DWORD *)cmd + 4);
            R_ST_AddSurfacesForTerrainSurfaceCamera(v37, *(const GfxViewInfo **)cmd, (const vec3_t *)&v40, &cachedDvarsOut, v34);
          }
          v6 = (unsigned int)(v6 + 1);
        }
        while ( (unsigned int)v6 < terrain->surfaceCount );
      }
    }
    Profile_EndInternal(NULL);
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
  StCachedSunShadowSurfaceState *v12; 
  const StDiskTerrainSurface *v13; 
  unsigned __int16 cutoutTriCount; 
  unsigned int v15; 
  bool v16; 
  bool v17; 
  unsigned int cutoutMeshFilter; 
  GfxStDrawSurf *v19; 
  __int64 lodBias; 
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
  v12 = &surfaces->states[surfaceIdx];
  if ( (unsigned int)surfaceIdx >= terrain->surfaceCount )
  {
    LODWORD(lodBias) = cacheNode->surfaceIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2564, ASSERT_TYPE_ASSERT, "(unsigned)( cacheNode.surfaceIdx ) < (unsigned)( terrain.surfaceCount )", "cacheNode.surfaceIdx doesn't index terrain.surfaceCount\n\t%i not in [0, %i)", lodBias, terrain->surfaceCount) )
      __debugbreak();
  }
  v13 = &terrain->surfaces[cacheNode->surfaceIdx];
  R_ST_TerrainSurface_PopulateDataInfo(v13, &terrainSurfaceDataInfo);
  if ( (node->mesh.flags.packed & 8) == 0 )
    R_ST_SurfaceBaseResourceStreamRequest(v13, ST_SURFACE_STREAM_REQUEST_GEO_HEIGHTMAP);
  cutoutTriCount = node->mesh.cutoutTriCount;
  v15 = 1;
  if ( cutoutTriCount )
  {
    R_ST_SurfaceBaseResourceStreamRequest(v13, ST_SURFACE_STREAM_REQUEST_GEO_CUTOUTMAP);
    cutoutTriCount = node->mesh.cutoutTriCount;
  }
  v16 = (node->mesh.flags.packed & 2) != 0;
  if ( (node->mesh.flags.packed & 8) == 0 )
  {
    v16 = 0;
    if ( (node->mesh.flags.packed & 2) != 0 )
    {
      terrainSurfaceDataInfo.baseResourceRequestMask |= 1u;
      if ( (terrainSurfaceDataInfo.baseResourceAvailableMask & 1) != 0 )
        v16 = 1;
    }
  }
  if ( cutoutTriCount )
  {
    if ( !v16 )
      return 0;
    terrainSurfaceDataInfo.baseResourceRequestMask |= 2u;
    v17 = (terrainSurfaceDataInfo.baseResourceAvailableMask & 2) == 0;
  }
  else
  {
    v17 = !v16;
  }
  if ( v17 )
    return 0;
  if ( !v12->tileDataInited )
  {
    R_ST_SetupTileDataForSurface(v13, &vec3_origin, 1, &v12->tileData);
    v12->tileDataInited = 1;
  }
  vertexBias = (HLSL::hlsl_2_t<float,vec2_t>)node->compressBase;
  vertexScale = (HLSL::hlsl_2_t<float,vec2_t>)node->compressScale;
  materialLayerInput = 0i64;
  if ( !R_ST_AddTileDataForNode(&v12->tileData, node, v13, &materialLayerInput, 0.0, 0.0, &vertexScale, &vertexBias, 1u, cachedDvars, 0, frameData, &tileDataIndex) )
    return 0;
  cutoutMeshFilter = cachedDvars->cutoutMeshFilter;
  if ( !cutoutMeshFilter )
  {
    v15 = (node->mesh.cutoutTriCount != 0) + 1;
    goto LABEL_28;
  }
  if ( cutoutMeshFilter != 1 )
  {
    v15 = node->mesh.cutoutTriCount != 0;
LABEL_28:
    if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2592, ASSERT_TYPE_ASSERT, "(drawSurfCountForNode)", (const char *)&queryFormat, "drawSurfCountForNode") )
      __debugbreak();
  }
  v19 = R_ST_AllocFromSharedArray<0,GfxStDrawSurf>(surfList->surfs, &surfList->count, 0x100u, R_WARN_ST_FRAME_SUN_SHADOW_SURF_LIMIT, v15, (unsigned int *)&vertexBias);
  if ( v19 )
  {
    R_ST_PopulateDrawSurfsForNode(node, v13, viewInfoa, &v12->tileData, cachedDvars, v19, v15, tileDataIndex, 0, &terrainSurfaceDataInfo);
    R_ST_TerrainSurface_IssueDataInfoRequests(v13, &terrainSurfaceDataInfo);
    return 1;
  }
  else
  {
    R_ST_TerrainSurface_IssueDataInfoRequests(v13, &terrainSurfaceDataInfo);
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
  GfxStDrawSurf *v18; 
  GfxStDrawSurf *v19; 
  unsigned int indexOut[4]; 

  v17 = R_ST_AllocFromSharedArray<0,GfxStDrawSurf>(dest, destCountInOut, destCapacity, R_WARN_ST_FRAME_SUN_SHADOW_SURF_LIMIT, drawSurfCountForNode, indexOut);
  v18 = v17;
  if ( v17 )
  {
    v19 = *populatedSurfsInOut;
    if ( *populatedSurfsInOut )
    {
      *(__m256i *)&v18->drawGroup.fields = *(__m256i *)&v19->drawGroup.fields;
      *(_OWORD *)&v18->baseIndex = *(_OWORD *)&v19->baseIndex;
      if ( drawSurfCountForNode > 1 )
        v18[1] = (*populatedSurfsInOut)[1];
    }
    else
    {
      R_ST_PopulateDrawSurfsForNode(node, surface, viewInfo, surfaceTileData, cachedDvars, v18, drawSurfCountForNode, tileDataIndex, lightmapped, terrainSurfaceDataInfo);
      *populatedSurfsInOut = v18;
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
  unsigned int *v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  __int64 v16; 

  if ( !nodeInfo->node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2414, ASSERT_TYPE_ASSERT, "(nodeInfo.node)", (const char *)&queryFormat, "nodeInfo.node") )
    __debugbreak();
  node = nodeInfo->node;
  if ( (nodeInfo->node->mesh.flags.packed & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2416, ASSERT_TYPE_ASSERT, "(!node.mesh.flags.clippedOut)", (const char *)&queryFormat, "!node.mesh.flags.clippedOut") )
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
            v12 = (unsigned int *)&cellList->cells[v10];
            v13 = v12[8195];
            v14 = v12[8196];
            if ( (v13 >= 3 || v14 >= 0xA) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2173, ASSERT_TYPE_ASSERT, "(partitionIndex < R_SUNSHADOW_OPAQUE_PARTITION_COUNT && cellIndex < ( 9 + 1 ))", (const char *)&queryFormat, "partitionIndex < R_SUNSHADOW_OPAQUE_PARTITION_COUNT && cellIndex < CACHED_SUN_SHADOW_CELL_MAX_OVERLAP") )
              __debugbreak();
            v15 = v14 + 10 * (v13 - rg.firstCachedSunShadowPartition) + 3;
            if ( v15 >= 0x17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2175, ASSERT_TYPE_ASSERT, "(shift < ST_SUN_SHADOW_MAP_BITS_BIT_COUNT)", (const char *)&queryFormat, "shift < ST_SUN_SHADOW_MAP_BITS_BIT_COUNT") )
              __debugbreak();
            if ( _bittest((const int *)&activeCells, v15) )
            {
              v16 = v12[8194];
              if ( (unsigned int)v16 >= 0x800 )
              {
                R_WarnOncePerFrame(R_WARN_ST_CACHED_SUN_SHADOW_NODES_PER_CELL_LIMIT, 2048i64);
              }
              else
              {
                *(StCachedSunShadowNodeInfo *)&v12[4 * v16 + 2] = *nodeInfo;
                ++v12[8194];
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
  __int64 v11; 
  const StTerrainNode *v12; 
  bool IsAnyLitRenderingMethodAvailbleForNode; 
  StMeshFlags v14; 
  bool v15; 
  const StDiskTerrainSurface *v16; 
  const StTerrain *terrain; 
  int v18; 
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
  if ( gridLevel == 0 || !staticCallbackParams->traverse || R_ST_CanDrawNode(staticCallbackParams->surface, node, gridLevel, &staticCallbackParams->worldSpaceCamPos, staticCallbackParams->cachedDvars->adjustedLodDistanceScale) )
  {
LABEL_44:
    R_ST_GenerateDrawSurfsForNode(node, v10, staticCallbackParams->materialLayers, staticCallbackParams->viewInfo, staticCallbackParams->surfaceTileData, staticCallbackParams->cachedDvars, staticCallbackParams->frameData, staticCallbackParams->lightmapped, staticCallbackParams->terrainSurfaceDataInfo);
    if ( staticCallbackParams->cachedDvars->showTileBounds )
    {
      terrain = s_stGlob.terrain;
      if ( !s_stGlob.terrain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1536, ASSERT_TYPE_ASSERT, "(terrain)", (const char *)&queryFormat, "terrain") )
        __debugbreak();
      v18 = truncate_cast<unsigned int,__int64>(v10 - terrain->surfaces);
      R_DebugUniqueColorFromIndex(v18, (vec3_t *)childNodesOut);
      color.v[0] = *(float *)childNodesOut;
      color.v[1] = *((float *)childNodesOut + 1);
      color.v[2] = *(float *)&childNodesOut[1];
      color.v[3] = FLOAT_1_0;
      R_AddDebugBox(&frontEndDataOut->debugGlobals, &node->wldBounds, &color, 1);
    }
    return 0;
  }
  R_ST_ChildNodesForNode(v10, node, gridLevel, (const StTerrainNode **)childNodesOut);
  v11 = 0i64;
  while ( (unsigned int)v11 < 4 )
  {
    v12 = (const StTerrainNode *)childNodesOut[v11];
    IsAnyLitRenderingMethodAvailbleForNode = R_ST_IsAnyLitRenderingMethodAvailbleForNode(v12, staticCallbackParams->surface, staticCallbackParams->surfaceTileData, staticCallbackParams->terrainSurfaceDataInfo);
    v14.packed = (unsigned __int8)v12->mesh.flags;
    v15 = !IsAnyLitRenderingMethodAvailbleForNode && (v14.packed & 1) == 0;
    if ( (v14.packed & 1) == 0 )
    {
      v16 = staticCallbackParams->surface;
      if ( (v14.packed & 8) == 0 )
        R_ST_SurfaceBaseResourceStreamRequest(staticCallbackParams->surface, ST_SURFACE_STREAM_REQUEST_GEO_HEIGHTMAP);
      if ( v12->mesh.cutoutTriCount )
        R_ST_SurfaceBaseResourceStreamRequest(v16, ST_SURFACE_STREAM_REQUEST_GEO_CUTOUTMAP);
    }
    v11 = (unsigned int)(v11 + 1);
    if ( v15 )
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
  double v19; 
  bool v20; 
  StLightmap *v21; 
  const GfxImage *v22; 
  signed int v23; 
  int forceLod; 
  unsigned int v25; 
  const char *v26; 
  const vec4_t *v27; 
  unsigned __int8 nodeCallbackDynamicParams[4]; 
  int IsBoxVisible; 
  volatile int layerDataCount; 
  Bounds *v31; 
  int v32[2]; 
  const GfxViewInfo *v33; 
  const vec3_t *v34; 
  StAddSurfacesCameraCallbackStaticParams nodeCallbackStaticParams; 
  TerrainSurfaceDataInfo terrainSurfaceDataInfo; 
  HLSL::TerrainTileDataCode tileDataOut; 
  HLSL::TerrainLayerDataCode layersOut[32]; 

  p_wldBounds = &surface->wldBounds;
  v34 = dpvsCamPos;
  viewInfoIndex = viewInfo->viewInfoIndex;
  v33 = viewInfo;
  v31 = &surface->wldBounds;
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
          v32[0] = layerDataCount;
          nodeCallbackStaticParams.viewInfo = v33;
          nodeCallbackStaticParams.materialLayers = (const MaterialLayerInput *)v32;
          v32[1] = v12;
          nodeCallbackStaticParams.terrainSurfaceDataInfo = &terrainSurfaceDataInfo;
          nodeCallbackStaticParams.surface = surface;
          nodeCallbackStaticParams.cachedDvars = cachedDvars;
          nodeCallbackStaticParams.frameData = frameData;
          R_ST_SetupTileDataForSurface(surface, &v33->viewParmsSet.frames[0].viewParms.camera.origin, 1, &tileDataOut);
          lightmapIndex = surface->lightmapIndex;
          nodeCallbackStaticParams.surfaceTileData = &tileDataOut;
          v19 = *(double *)v34->v;
          nodeCallbackStaticParams.worldSpaceCamPos.v[2] = v34->v[2];
          v20 = 0;
          *(double *)nodeCallbackStaticParams.worldSpaceCamPos.v = v19;
          if ( lightmapIndex != 510 )
          {
            if ( lightmapIndex >= s_stGlob.terrain->lightmapCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2047, ASSERT_TYPE_ASSERT, "(surface.lightmapIndex < s_stGlob.terrain->lightmapCount)", (const char *)&queryFormat, "surface.lightmapIndex < s_stGlob.terrain->lightmapCount") )
              __debugbreak();
            v20 = 1;
            v21 = &s_stGlob.terrain->lightmaps[surface->lightmapIndex];
            do
            {
              if ( !v20 )
                break;
              v22 = v21->images[0];
              Stream_UsedImage(v21->images[0]);
              v20 = Stream_CheckImageLowMipUsable(v22);
              ++v16;
              v21 = (StLightmap *)((char *)v21 + 8);
            }
            while ( v16 < 3 );
          }
          v23 = surface->grid.numLevels - 1;
          nodeCallbackStaticParams.lightmapped = v20;
          forceLod = cachedDvars->forceLod;
          nodeCallbackStaticParams.traverse = 1;
          if ( forceLod >= 0 )
          {
            nodeCallbackStaticParams.traverse = 0;
            if ( v23 < forceLod )
              forceLod = v23;
            v23 = forceLod;
          }
          nodeCallbackDynamicParams[0] = 0;
          R_ST_TraverseTree_StAddSurfacesCameraCallbackStaticParams_unsigned_char_(surface, v23, (bool (__fastcall *)(const StTerrainNode *, unsigned int, StAddSurfacesCameraCallbackStaticParams *, const unsigned __int8 *, unsigned __int8 *))R_ST_AddSurfacesCameraNodeCallback, &nodeCallbackStaticParams, nodeCallbackDynamicParams);
        }
      }
      p_wldBounds = v31;
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
    v25 = truncate_cast<unsigned int,__int64>(surface - s_stGlob.terrain->surfaces);
    v26 = j_va("%u", v25);
    R_AddDebugString(&frontEndDataOut->debugGlobals, &p_wldBounds->midPoint, &colorGreen, 2500.0, v26);
    v27 = &colorRed;
    if ( v9 )
      v27 = &colorGreen;
    R_AddDebugBox(&frontEndDataOut->debugGlobals, p_wldBounds, v27, 1);
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
char R_ST_AddTileDataForNode(const HLSL::TerrainTileDataCode *surfaceTileData, const StTerrainNode *node, const StDiskTerrainSurface *surface, const MaterialLayerInput *materialLayerInput, float lodScale, float lodBias, const HLSL::hlsl_2_t<float,vec2_t> *vertexScale, const HLSL::hlsl_2_t<float,vec2_t> *vertexBias, unsigned int tileDataCount, const StCachedFrontEndDvars *cachedDvars, bool addVirtualTexturingInfo, StFrameData *frameData, unsigned int *tileDataIndexOut)
{
  const StTerrain *terrain; 
  __m256i v18; 
  signed int count; 
  int layerLimit; 
  float lodMorphOverride; 
  signed __int64 v22; 
  float v23; 
  unsigned __int16 v24; 
  unsigned int v25; 
  bool v26; 
  __int64 v27; 
  unsigned int displacementScalesCount; 
  StTerrainDisplacementScale *displacementScales; 
  unsigned int tileDataLimit; 
  char *data; 
  volatile int *p_tileDataCount; 
  __int64 v33; 
  unsigned int v34; 
  HLSL::TerrainTileData *v35; 
  HLSL::TerrainTileDataCode p; 

  terrain = s_stGlob.terrain;
  if ( !s_stGlob.terrain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1288, ASSERT_TYPE_ASSERT, "(terrain)", (const char *)&queryFormat, "terrain") )
    __debugbreak();
  v18 = *(__m256i *)&surfaceTileData->windDir.xyz.v[1];
  *(__m256i *)&p.flags = *(__m256i *)&surfaceTileData->flags;
  *(__m256i *)&p.vertexScale.xy.v[1] = *(__m256i *)&surfaceTileData->vertexScale.xy.v[1];
  *(__m256i *)&p.surfaceMapBaseIndex = *(__m256i *)&surfaceTileData->surfaceMapBaseIndex;
  *(__m256i *)&p.offToSurfaceMapY.xyz.v[1] = *(__m256i *)&surfaceTileData->offToSurfaceMapY.xyz.v[1];
  *(__m256i *)&p.windDir.xyz.v[1] = v18;
  *(__m256i *)&p.surfaceIndex = *(__m256i *)&surfaceTileData->surfaceIndex;
  *(_OWORD *)p.heightMapDx.v = *(_OWORD *)surfaceTileData->heightMapDx.v;
  count = materialLayerInput->count;
  layerLimit = cachedDvars->layerLimit;
  if ( layerLimit > -1 && layerLimit < count )
    count = cachedDvars->layerLimit;
  lodMorphOverride = cachedDvars->lodMorphOverride;
  p.layerCount = count;
  p.layerOffset = materialLayerInput->offset;
  p.layerMask = node->layerMask;
  p.vertexScale = *vertexScale;
  p.vertexOffset = *vertexBias;
  if ( lodMorphOverride < 0.0 )
  {
    p.lodParamScale = lodScale;
    p.lodParamOffset = lodBias;
  }
  else
  {
    p.lodParamScale = 0.0;
    p.lodParamOffset = lodMorphOverride;
  }
  v22 = (char *)surface - (char *)terrain->surfaces;
  v23 = (float)(node->xIndex & 1) * 0.5;
  v24 = node->yIndex & 1;
  p.layerSurfaceMapBaseIndex = 0;
  p.generatedVerticesOffset.v[0] = v23;
  p.generatedVerticesOffset.v[1] = (float)v24 * 0.5;
  v25 = truncate_cast<unsigned int,__int64>(v22 / 376);
  v26 = cachedDvars->displacementDistanceSquared > 0.0;
  p.surfaceIndex = v25;
  if ( v26 )
  {
    v27 = 0i64;
    displacementScalesCount = surface->displacementScalesCount;
    if ( displacementScalesCount )
    {
      displacementScales = surface->displacementScales;
      while ( (node->layerMask & surface->layerDisplacementMask & displacementScales[v27].mask) == 0 )
      {
        v27 = (unsigned int)(v27 + 1);
        if ( (unsigned int)v27 >= displacementScalesCount )
          goto LABEL_17;
      }
      p.maxDisplacementScale = displacementScales[v27].scale;
    }
  }
LABEL_17:
  tileDataLimit = s_stGlob.tileDataLimit;
  data = (char *)frameData->tileData.data;
  p_tileDataCount = &frameData->tileDataCount;
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 561, ASSERT_TYPE_ASSERT, "(resourceArray)", (const char *)&queryFormat, "resourceArray", *(_QWORD *)&p.flags, *(_QWORD *)&p.layerOffset, *(_QWORD *)&p.layerGrassMask, *(_OWORD *)&p.maxDisplacementScale, *(_QWORD *)((char *)&p.vertexOffset + 4), *(_OWORD *)&p.lodParamOffset, *(_QWORD *)&p.surfaceMapBaseIndex, *(_OWORD *)&p.surfaceMapXCount, *(_OWORD *)&p.vertXCount, *(_OWORD *)&p.vertSpacing, *(_OWORD *)&p.heightOffsetAndScale.xy.v[1], *(_QWORD *)&p.windStrength, *(_QWORD *)&p.windSpeed, *(_QWORD *)&p.grassSurfStep, *(_QWORD *)&p.surfaceIndex, *(_QWORD *)&p.sectorKey, *(_OWORD *)&p.defaultSectorStartMip, *(_QWORD *)&p.heightMapDx, *(_QWORD *)&p.heightMapDy) )
    __debugbreak();
  v33 = tileDataCount;
  if ( !tileDataCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 562, ASSERT_TYPE_ASSERT, "(allocCount > 0)", (const char *)&queryFormat, "allocCount > 0") )
    __debugbreak();
  if ( ((unsigned __int8)p_tileDataCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)p_tileDataCount) )
    __debugbreak();
  v34 = _InterlockedExchangeAdd(p_tileDataCount, tileDataCount);
  *tileDataIndexOut = v34;
  if ( v34 + tileDataCount >= tileDataLimit )
  {
    *tileDataIndexOut = 0;
    R_WarnOncePerFrame(R_WARN_ST_FRAME_TILE_DATA_LIMIT, tileDataLimit);
    if ( ((unsigned __int8)p_tileDataCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)p_tileDataCount) )
      __debugbreak();
    _InterlockedExchangeAdd(p_tileDataCount, -tileDataCount);
    return 0;
  }
  v35 = (HLSL::TerrainTileData *)&data[172 * v34];
  if ( !v35 )
    return 0;
  if ( tileDataCount )
  {
    do
    {
      HLSL::TerrainTileData::SetFrom(v35++, &p);
      --v33;
    }
    while ( v33 );
  }
  return 1;
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
  unsigned int v3; 
  char v6; 
  unsigned int v7; 
  unsigned int layerMask; 
  float i; 
  StTerrainMaterialLayer *v10; 
  unsigned __int16 *materialTextureIdxs; 
  unsigned __int16 v14; 
  bool v15; 
  unsigned int v16; 
  unsigned __int16 v17; 
  unsigned __int16 v18; 
  GfxImage *v19; 
  int v20; 
  StreamImageMip v21; 
  char v22; 
  GfxImage *v23; 
  int v24; 
  StreamImageMip v25; 
  char v26; 
  GfxImage *v27; 
  int v28; 
  StreamImageMip v29; 

  v3 = virtualTextureMipLevel;
  if ( (node->mesh.flags.packed & 1) != 0 )
    return 0;
  v6 = 1;
  v7 = 0;
  layerMask = node->layerMask;
  for ( i = surface->halfWldSize * 50.0; v7 < surface->layerMaterialsCount; ++v7 )
  {
    if ( _bittest((const int *)&layerMask, v7) )
    {
      v10 = &surface->layerMaterials[v7];
      log2f(i / (float)((float)(2.0 * v10->layerData.textureScale.v[0]) * surface->halfWldSize));
      materialTextureIdxs = v10->materialTextureIdxs;
      _XMM1 = 0i64;
      __asm { vroundss xmm1, xmm1, xmm0, 2 }
      v14 = *materialTextureIdxs;
      v15 = (int)((int)*(float *)&_XMM1 - v3) < 0;
      v16 = (int)*(float *)&_XMM1 - v3;
      v17 = materialTextureIdxs[1];
      if ( v15 )
        v16 = 0;
      v18 = materialTextureIdxs[2];
      if ( v14 != 0xFFFF )
      {
        v19 = s_stGlob.terrain->flattenedImages[v14];
        v20 = v19->levelCount - v16;
        if ( v20 < 0 )
          v20 = 0;
        v21 = 4 - v20;
        if ( 4 - v20 < 1 )
          v21 = MIP3;
        if ( !Stream_TouchImageAndCheck(v19, v21) )
          goto LABEL_15;
      }
      if ( v6 )
        v22 = 1;
      else
LABEL_15:
        v22 = 0;
      if ( v17 != 0xFFFF )
      {
        v23 = s_stGlob.terrain->flattenedImages[v17];
        v24 = v23->levelCount - v16;
        if ( v24 < 0 )
          v24 = 0;
        v25 = 4 - v24;
        if ( 4 - v24 < 1 )
          v25 = MIP3;
        if ( !Stream_TouchImageAndCheck(v23, v25) )
          goto LABEL_22;
      }
      if ( v22 )
        v26 = 1;
      else
LABEL_22:
        v26 = 0;
      if ( v18 != 0xFFFF )
      {
        v27 = s_stGlob.terrain->flattenedImages[v18];
        v28 = v27->levelCount - v16;
        if ( v28 < 0 )
          v28 = 0;
        v29 = 4 - v28;
        if ( 4 - v28 < 1 )
          v29 = MIP3;
        if ( !Stream_TouchImageAndCheck(v27, v29) )
          goto LABEL_29;
      }
      if ( v26 )
        v6 = 1;
      else
LABEL_29:
        v6 = 0;
      v3 = virtualTextureMipLevel;
    }
  }
  return v6;
}

/*
==============
R_ST_CacheFrontEndDvars
==============
*/
void R_ST_CacheFrontEndDvars(StCachedFrontEndDvars *cachedDvarsOut)
{
  float value; 
  float AdjustedLodDistanceScale; 
  bool v4; 
  const dvar_t *v5; 
  float v6; 
  bool enabled; 
  const dvar_t *v8; 
  bool v9; 

  value = r_st_lodMorphControl->current.value;
  AdjustedLodDistanceScale = R_ST_GetAdjustedLodDistanceScale(rg.stLodDistanceScale, value, *(float *)&s_sceneLodScaleBias, *((float *)&s_sceneLodScaleBias + 1));
  cachedDvarsOut->adjustedLodDistanceScale = AdjustedLodDistanceScale;
  cachedDvarsOut->lodBias = 1.0 - value;
  cachedDvarsOut->lodScale = (float)(AdjustedLodDistanceScale * value) * 0.5;
  v4 = !CL_TransientsWorldMP_UseLowAlwaysloadedFlagging();
  v5 = r_st_combined_bias_low;
  if ( v4 )
    v5 = r_st_combined_bias_high;
  v6 = v5->current.value;
  if ( rg.correctedLodParms.invFovScale != 0.0 )
    v6 = v6 / rg.correctedLodParms.invFovScale;
  cachedDvarsOut->combinedBias = v6;
  cachedDvarsOut->displacementDistanceSquared = r_st_displacementDistance->current.value * r_st_displacementDistance->current.value;
  cachedDvarsOut->shadowLod = r_st_sm_lod->current.integer;
  LODWORD(cachedDvarsOut->geomStreamLeadFactor) = r_st_streamLeadFactor->current.integer;
  cachedDvarsOut->forceLod = r_st_forceLod->current.integer;
  LODWORD(cachedDvarsOut->lodMorphOverride) = r_st_lodMorphOverride->current.integer;
  cachedDvarsOut->layerLimit = r_st_layerLimit->current.integer;
  cachedDvarsOut->cutoutMeshFilter = r_st_cutoutMeshFilter->current.unsignedInt;
  cachedDvarsOut->allowLayerMask = r_st_allowLayerMask->current.enabled;
  cachedDvarsOut->singleLayer = r_st_singleLayer->current.integer;
  cachedDvarsOut->surfaceDebugColorMode = r_st_surfaceDebugColorMode->current.integer;
  cachedDvarsOut->layerDebugColorMode = r_st_layerDebugColorMode->current.integer;
  enabled = r_st_showSurfaceBounds->current.enabled;
  cachedDvarsOut->showSurfaceBounds = enabled;
  if ( enabled )
    goto LABEL_11;
  v8 = DVARINT_cg_drawTerrainStreamingInfo;
  if ( !DVARINT_cg_drawTerrainStreamingInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawTerrainStreamingInfo") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.integer > 1 )
LABEL_11:
    v9 = 1;
  else
    v9 = 0;
  cachedDvarsOut->showSurfaceBounds = v9;
  cachedDvarsOut->showTileBounds = r_st_showTileBounds->current.enabled;
}

/*
==============
R_ST_CachedSunShadowMapBitsForBounds
==============
*/
void R_ST_CachedSunShadowMapBitsForBounds(const Bounds *wldBounds, const GfxSunShadow *sunShadow, unsigned int *mapsToDrawInOut)
{
  const GfxSunShadow *v4; 
  unsigned int i; 
  __int64 v7; 
  __int64 v8; 
  unsigned int v9; 
  unsigned int v10; 
  int v11; 
  __int64 v12; 

  v4 = sunShadow;
  if ( !*mapsToDrawInOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2214, ASSERT_TYPE_ASSERT, "(mapsToDrawInOut)", (const char *)&queryFormat, "mapsToDrawInOut") )
    __debugbreak();
  for ( i = rg.firstCachedSunShadowPartition; i <= rg.lastCachedSunShadowPartition; ++i )
  {
    if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 383, ASSERT_TYPE_ASSERT, "(sunShadow)", (const char *)&queryFormat, "sunShadow") )
      __debugbreak();
    if ( !R_IsCachedSunShadowPartition(v4, i) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 384, ASSERT_TYPE_ASSERT, "(R_IsCachedSunShadowPartition( sunShadow, partitionIndex ))", (const char *)&queryFormat, "R_IsCachedSunShadowPartition( sunShadow, partitionIndex )") )
      __debugbreak();
    v7 = i - v4->firstCachedSunShadowPartition;
    v8 = (__int64)&v4->partitionCache[v7];
    if ( (const GfxSunShadow *)((char *)v4 + 8656 * v7) == (const GfxSunShadow *)-2480i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2219, ASSERT_TYPE_ASSERT, "(partitionCache)", (const char *)&queryFormat, "partitionCache") )
      __debugbreak();
    v9 = 0;
    if ( *(_DWORD *)(v8 + 4) )
    {
      do
      {
        if ( (i >= 3 || v9 >= 0xA) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2173, ASSERT_TYPE_ASSERT, "(partitionIndex < R_SUNSHADOW_OPAQUE_PARTITION_COUNT && cellIndex < ( 9 + 1 ))", (const char *)&queryFormat, "partitionIndex < R_SUNSHADOW_OPAQUE_PARTITION_COUNT && cellIndex < CACHED_SUN_SHADOW_CELL_MAX_OVERLAP") )
          __debugbreak();
        v10 = v9 + 10 * (i - rg.firstCachedSunShadowPartition) + 3;
        if ( v10 >= 0x17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2175, ASSERT_TYPE_ASSERT, "(shift < ST_SUN_SHADOW_MAP_BITS_BIT_COUNT)", (const char *)&queryFormat, "shift < ST_SUN_SHADOW_MAP_BITS_BIT_COUNT") )
          __debugbreak();
        if ( (*mapsToDrawInOut & (1 << v10)) != 0 )
        {
          v11 = 0;
          v12 = *(_QWORD *)(864i64 * v9 + v8 + 16) + 48i64;
          while ( (float)((float)((float)((float)((float)((float)(COERCE_FLOAT(*(_DWORD *)v12 & _xmm) * wldBounds->halfSize.v[0]) + (float)((float)(wldBounds->midPoint.v[0] * *(float *)v12) + *(float *)(v12 + 12))) + (float)(wldBounds->midPoint.v[1] * *(float *)(v12 + 4))) + (float)(COERCE_FLOAT(*(_DWORD *)(v12 + 4) & _xmm) * wldBounds->halfSize.v[1])) + (float)(wldBounds->midPoint.v[2] * *(float *)(v12 + 8))) + (float)(COERCE_FLOAT(*(_DWORD *)(v12 + 8) & _xmm) * wldBounds->halfSize.v[2])) > 0.0 )
          {
            ++v11;
            v12 += 16i64;
            if ( v11 >= 4 )
              goto LABEL_28;
          }
          *mapsToDrawInOut &= ~(1 << v10);
        }
LABEL_28:
        ++v9;
      }
      while ( v9 < *(_DWORD *)(v8 + 4) );
      v4 = sunShadow;
    }
  }
}

/*
==============
R_ST_CanDrawNode
==============
*/
_BOOL8 R_ST_CanDrawNode(const StDiskTerrainSurface *surface, const StTerrainNode *node, unsigned int gridLevel, const vec3_t *worldSpaceCamPos, float adjustedLodDistanceScale)
{
  unsigned int v9; 
  float v10; 
  float v11; 
  StCombinedMapUsage v12; 
  bool v13; 

  v9 = surface->grid.numLevels - 1;
  v10 = R_ST_DistanceToNodeWorldSpace(worldSpaceCamPos, node, surface);
  v11 = node->wldBounds.halfSize.v[0] * 2.0;
  if ( (float)(v10 * adjustedLodDistanceScale) <= v11 || gridLevel != v9 )
    return (float)(v10 * adjustedLodDistanceScale) > v11;
  v12 = R_ST_CombinedMapUsageForSurface(surface, worldSpaceCamPos);
  v13 = (float)(v10 * adjustedLodDistanceScale) > v11;
  if ( v12 != ST_COMBINED_MAP_USAGE_ALL )
    return 0;
  return v13;
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
  bool v2; 
  const dvar_t *v3; 
  float value; 

  v2 = !CL_TransientsWorldMP_UseLowAlwaysloadedFlagging();
  v3 = r_st_combined_bias_low;
  if ( v2 )
    v3 = r_st_combined_bias_high;
  value = v3->current.value;
  if ( applyADSZoomFactor && rg.correctedLodParms.invFovScale != 0.0 )
    value = value / rg.correctedLodParms.invFovScale;
  return (float)(value * value) * 301655360.0;
}

/*
==============
R_ST_CombinedMapUsageForSurface
==============
*/
__int64 R_ST_CombinedMapUsageForSurface(const StDiskTerrainSurface *surface, const vec3_t *viewPos)
{
  __int128 v4; 
  __m128 v8; 
  __m128 v12; 
  __m128 v21; 
  bool v26; 
  const dvar_t *v27; 
  float value; 
  const dvar_t *v29; 
  __int128 v30; 
  __m128 v31; 
  __m128 v32; 

  if ( r_st_combined_force->current.enabled )
    return 2i64;
  HIDWORD(v30) = 0;
  v4 = v30;
  *(float *)&v4 = viewPos->v[0];
  _XMM4 = v4;
  __asm
  {
    vinsertps xmm4, xmm4, dword ptr [rdx+4], 10h
    vinsertps xmm4, xmm4, dword ptr [rdx+8], 20h ; ' '
  }
  v31 = _XMM4;
  v31.m128_i32[3] = 0;
  v8 = v31;
  v8.m128_f32[0] = surface->wldBounds.midPoint.v[0];
  _XMM3 = v8;
  __asm
  {
    vinsertps xmm3, xmm3, dword ptr [rcx+48h], 10h
    vinsertps xmm3, xmm3, dword ptr [rcx+4Ch], 20h ; ' '
  }
  v32 = _XMM3;
  _mm128_sub_ps(_XMM4, _XMM3);
  v32.m128_i32[3] = 0;
  v12 = v32;
  v12.m128_f32[0] = surface->wldBounds.halfSize.v[0];
  _XMM5 = v12;
  _XMM0 = g_negativeZero.v;
  __asm
  {
    vinsertps xmm5, xmm5, dword ptr [rcx+54h], 10h
    vinsertps xmm5, xmm5, dword ptr [rcx+58h], 20h ; ' '
    vandnps xmm4, xmm0, xmm1
  }
  _XMM2 = _mm128_sub_ps(_XMM4, _XMM5);
  __asm { vmaxps  xmm1, xmm2, xmm0 }
  _XMM3 = _mm128_mul_ps(_XMM1, _XMM1);
  __asm { vhaddps xmm0, xmm3, xmm3 }
  v21 = _mm128_add_ps(_XMM5, _XMM4);
  __asm { vhaddps xmm8, xmm0, xmm0 }
  _XMM0 = _mm128_mul_ps(v21, v21);
  __asm
  {
    vhaddps xmm2, xmm0, xmm0
    vhaddps xmm9, xmm2, xmm2
  }
  v26 = !CL_TransientsWorldMP_UseLowAlwaysloadedFlagging();
  v27 = r_st_combined_bias_low;
  if ( v26 )
    v27 = r_st_combined_bias_high;
  value = v27->current.value;
  if ( rg.correctedLodParms.invFovScale != 0.0 )
    value = value / rg.correctedLodParms.invFovScale;
  v26 = !CL_TransientsWorldMP_UseLowAlwaysloadedFlagging();
  v29 = r_st_combined_bias_low;
  if ( v26 )
    v29 = r_st_combined_bias_high;
  if ( *(float *)&_XMM8 <= (float)((float)(value * value) * 301655360.0) )
    return (float)((float)(v29->current.value * v29->current.value) * 301655360.0) <= *(float *)&_XMM9;
  else
    return 2i64;
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
  float v12; 
  float v13; 
  int v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float halfWldSize; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 

  terrain = s_stGlob.terrain;
  if ( !s_stGlob.terrain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1412, ASSERT_TYPE_ASSERT, "(terrain)", (const char *)&queryFormat, "terrain") )
    __debugbreak();
  heightMap = surface->heightMap;
  v12 = surface->objToWld.quat.v[1];
  v13 = surface->objToWld.quat.v[0];
  v14 = terrain->maps[surface->surfaceMapSetIndex].paddedResolution - terrain->maps[surface->surfaceMapSetIndex].mapResolution;
  v15 = surface->objToWld.quat.v[2];
  v16 = surface->objToWld.quat.v[3];
  v36 = 1.0 / (float)((float)(heightMap->width - v14) * surface->surfaceMapWorldSize);
  v38 = 1.0 / (float)((float)(heightMap->height - v14) * surface->surfaceMapWorldSize);
  v17 = (float)((float)((float)(v13 * v13) + (float)(v12 * v12)) + (float)(v15 * v15)) + (float)(v16 * v16);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v17 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 770, ASSERT_TYPE_ASSERT, "( Vec4IsNormalized( quat ) )", "(%g, %g, %g, %g) len: %g", v13, v12, v15, v16, fsqrt(v17)) )
    __debugbreak();
  v18 = surface->objToWld.quat.v[1];
  v19 = 2.0 * surface->objToWld.quat.v[0];
  v20 = v18 * v19;
  v21 = v18 * (float)(v18 * 2.0);
  v22 = 2.0 * surface->objToWld.quat.v[2];
  v23 = v22 * surface->objToWld.quat.v[3];
  v24 = v22 * surface->objToWld.quat.v[2];
  v25 = v23 + v20;
  v26 = 1.0 - (float)(v24 + v21);
  v37 = v20 - v23;
  v27 = 1.0 - (float)(v24 + (float)(v19 * surface->objToWld.quat.v[0]));
  v28 = (float)((float)(v23 + v20) * cameraWorldPosition->v[1]) + (float)(v26 * cameraWorldPosition->v[0]);
  offToSurfaceMapX->v[0] = v26;
  offToSurfaceMapX->v[1] = v23 + v20;
  halfWldSize = surface->halfWldSize;
  v30 = surface->objToWld.origin.v[0];
  offToSurfaceMapX->v[0] = v26 * v36;
  v31 = (float)(halfWldSize - v30) + v28;
  offToSurfaceMapX->v[1] = v25 * v36;
  offToSurfaceMapX->v[2] = v31 * v36;
  offToSurfaceMapX->v[2] = (float)(0.5 / _mm_cvtepi32_ps((__m128i)((unsigned int)heightMap->width - v14)).m128_f32[0]) + (float)(v31 * v36);
  v32 = (float)(v27 * cameraWorldPosition->v[1]) + (float)(v37 * cameraWorldPosition->v[0]);
  offToSurfaceMapY->v[0] = v37;
  offToSurfaceMapY->v[1] = v27;
  v33 = (float)((float)(surface->halfWldSize - surface->objToWld.origin.v[1]) + v32) * v38;
  offToSurfaceMapY->v[2] = v33;
  offToSurfaceMapY->v[0] = v37 * v38;
  offToSurfaceMapY->v[1] = v27 * v38;
  offToSurfaceMapY->v[2] = (float)(0.5 / _mm_cvtepi32_ps((__m128i)((unsigned int)heightMap->height - v14)).m128_f32[0]) + v33;
  v34 = (float)(offToSurfaceMapX->v[0] * offToSurfaceMapX->v[0]) + (float)(offToSurfaceMapX->v[1] * offToSurfaceMapX->v[1]);
  v35 = (float)((float)(v27 * v38) * (float)(v27 * v38)) + (float)((float)(v37 * v38) * (float)(v37 * v38));
  if ( (v34 == 0.0 || v35 == 0.0 || !heightMap->width || !heightMap->height) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1439, ASSERT_TYPE_ASSERT, "(offToSurfaceMapXLenSq != 0.0f && offToSurfaceMapYLenSq != 0.0f && heightMap->width != 0 && heightMap->height != 0)", (const char *)&queryFormat, "offToSurfaceMapXLenSq != 0.0f && offToSurfaceMapYLenSq != 0.0f && heightMap->width != 0 && heightMap->height != 0") )
    __debugbreak();
  outHeightMapDx->v[0] = offToSurfaceMapX->v[0] / (float)((float)heightMap->width * v34);
  outHeightMapDx->v[1] = offToSurfaceMapX->v[1] / (float)((float)heightMap->width * v34);
  outHeightMapDy->v[0] = offToSurfaceMapY->v[0] / (float)((float)heightMap->height * v35);
  outHeightMapDy->v[1] = offToSurfaceMapY->v[1] / (float)((float)heightMap->height * (float)((float)((float)(v27 * v38) * (float)(v27 * v38)) + (float)((float)(v37 * v38) * (float)(v37 * v38))));
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
  int v11; 
  unsigned __int16 vertexCount; 
  int v13; 
  StTerrainNode *childNodesOut[4]; 

  v5 = gridLevel;
  if ( !staticCallbackParams->debugInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 3516, ASSERT_TYPE_ASSERT, "(staticCallbackParams.debugInfo)", (const char *)&queryFormat, "staticCallbackParams.debugInfo") )
    __debugbreak();
  if ( (node->mesh.flags.packed & 1) != 0 )
    return 0;
  surface = staticCallbackParams->surface;
  CanDrawNode = (_DWORD)v5 == 0;
  if ( (_DWORD)v5 )
    CanDrawNode = R_ST_CanDrawNode(staticCallbackParams->surface, node, v5, &staticCallbackParams->worldSpaceCamPos, staticCallbackParams->cachedDvars.adjustedLodDistanceScale);
  if ( CanDrawNode )
  {
    ++staticCallbackParams->debugInfo->idealNodesRenderedPerLevel[v5];
    if ( (_DWORD)v5 )
    {
      v11 = 8;
      staticCallbackParams->debugInfo->indexSizePerLevel[v5] += 6 * node->mesh.triCount;
      vertexCount = node->mesh.vertexCount;
      if ( (node->mesh.flags.packed & 4) != 0 )
        v11 = 4;
      v13 = 0;
      if ( (node->mesh.flags.packed & 0x10) != 0 )
        v13 = vertexCount;
      staticCallbackParams->debugInfo->vertSizePerLevel[v5] += v11 * vertexCount + 4 * v13;
    }
    return 0;
  }
  R_ST_ChildNodesForNode(surface, node, v5, (const StTerrainNode **)childNodesOut);
  for ( i = 0i64; (unsigned int)i < 4; i = (unsigned int)(i + 1) )
  {
    if ( (childNodesOut[i]->mesh.flags.packed & 3) == 0 )
      ++staticCallbackParams->debugInfo->missingNodesPerLevel[v5];
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
  double v3; 
  float v4; 
  unsigned int v7; 
  unsigned __int8 nodeCallbackDynamicParams[16]; 
  StRenderedMeshGeoDebugInfoCallbackStaticParams nodeCallbackStaticParams; 

  v3 = *(double *)dpvsCamPos->v;
  v4 = dpvsCamPos->v[2];
  nodeCallbackStaticParams.surface = surface;
  *(double *)nodeCallbackStaticParams.worldSpaceCamPos.v = v3;
  nodeCallbackStaticParams.worldSpaceCamPos.v[2] = v4;
  R_ST_CacheFrontEndDvars(&nodeCallbackStaticParams.cachedDvars);
  memset_0(renderedMeshGeoInfo, 0, sizeof(StRenderedMeshGeoDebugInfo));
  v7 = surface->grid.numLevels - 1;
  nodeCallbackStaticParams.debugInfo = renderedMeshGeoInfo;
  nodeCallbackDynamicParams[0] = 0;
  R_ST_TraverseTree_StRenderedMeshGeoDebugInfoCallbackStaticParams_unsigned_char_(surface, v7, (bool (__fastcall *)(const StTerrainNode *, unsigned int, StRenderedMeshGeoDebugInfoCallbackStaticParams *, const unsigned __int8 *, unsigned __int8 *))R_ST_DebugGetRenderedGeoStatsCallback, &nodeCallbackStaticParams, nodeCallbackDynamicParams);
}

/*
==============
R_ST_DistanceToNodeWorldSpace
==============
*/
float R_ST_DistanceToNodeWorldSpace(const vec3_t *worldSpacePos, const StTerrainNode *node, const StDiskTerrainSurface *surface)
{
  float v3; 
  signed int i; 
  __int64 v6; 
  float v7; 
  int v8; 
  float v9; 
  double v10; 
  float v12; 
  float v13; 
  float v14; 

  v3 = worldSpacePos->v[1];
  v12 = worldSpacePos->v[0];
  v14 = worldSpacePos->v[2];
  v13 = v3;
  for ( i = 0; (unsigned int)i < 2; ++i )
  {
    v6 = i;
    v7 = node->wldBounds.midPoint.v[i] + node->wldBounds.halfSize.v[i];
    v8 = *((int *)&v12 + i);
    if ( *(float *)&v8 <= (float)(node->wldBounds.midPoint.v[i] - node->wldBounds.halfSize.v[i]) )
      *(float *)&v8 = node->wldBounds.midPoint.v[i] - node->wldBounds.halfSize.v[i];
    *(&v12 + i) = *(float *)&v8;
    if ( *(float *)&v8 >= v7 )
      *(float *)&v8 = v7;
    *(&v12 + v6) = *(float *)&v8;
  }
  v9 = surface->heightOffset + surface->objToWld.origin.v[2];
  v10 = I_fclamp(worldSpacePos->v[2], v9, v9 + surface->heightScale);
  return fsqrt((float)((float)((float)(worldSpacePos->v[1] - v13) * (float)(worldSpacePos->v[1] - v13)) + (float)((float)(worldSpacePos->v[0] - v12) * (float)(worldSpacePos->v[0] - v12))) + (float)((float)(worldSpacePos->v[2] - *(float *)&v10) * (float)(worldSpacePos->v[2] - *(float *)&v10)));
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
  const StCachedFrontEndDvars *v13; 
  unsigned int cutoutMeshFilter; 
  unsigned int v15; 
  const MaterialLayerInput *v16; 
  float lodBias; 
  float v18; 
  const HLSL::TerrainTileDataCode *v19; 
  GfxStDrawSurf *v20; 
  HLSL::hlsl_2_t<float,vec2_t> vertexBias; 
  HLSL::hlsl_2_t<float,vec2_t> vertexScale; 
  unsigned int tileDataIndex; 

  if ( (node->mesh.flags.packed & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1732, ASSERT_TYPE_ASSERT, "(!node.mesh.flags.clippedOut)", (const char *)&queryFormat, "!node.mesh.flags.clippedOut") )
    __debugbreak();
  if ( node->mesh.triCount )
  {
    v13 = cachedDvars;
    cutoutMeshFilter = cachedDvars->cutoutMeshFilter;
    if ( cutoutMeshFilter )
    {
      if ( cutoutMeshFilter == 1 )
      {
        v15 = 1;
LABEL_11:
        v16 = materialLayers;
        lodBias = cachedDvars->lodBias;
        v18 = (float)(0.5 / node->wldBounds.halfSize.v[0]) * cachedDvars->lodScale;
        v19 = surfaceTileData;
        vertexBias = (HLSL::hlsl_2_t<float,vec2_t>)node->compressBase;
        vertexScale = (HLSL::hlsl_2_t<float,vec2_t>)node->compressScale;
        if ( R_ST_AddTileDataForNode(surfaceTileData, node, surface, v16, v18, lodBias, &vertexScale, &vertexBias, 1u, cachedDvars, 1, frameData, &tileDataIndex) )
        {
          if ( v15 + scene.superTerrainSurfCount > 0x400 )
          {
            R_WarnOncePerFrame(R_WARN_ST_FRAME_SURF_LIMIT, 1024i64);
          }
          else
          {
            v20 = &scene.superTerrainSurfs[scene.superTerrainSurfCount];
            scene.superTerrainSurfCount += v15;
            if ( v20 )
              R_ST_PopulateDrawSurfsForNode(node, surface, viewInfo, v19, v13, v20, v15, tileDataIndex, lightmapped, terrainSurfaceDataInfo);
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
  unsigned int v11; 
  unsigned int v12; 
  const StCachedFrontEndDvars *v13; 
  int v14; 
  unsigned int cutoutMeshFilter; 
  unsigned int v16; 
  const HLSL::TerrainTileDataCode *v17; 
  HLSL::hlsl_2_t<float,vec2_t> vertexScale; 
  MaterialLayerInput materialLayerInput; 
  HLSL::hlsl_2_t<float,vec2_t> vertexBias; 
  GfxViewInfo *viewInfoa; 

  viewInfoa = (GfxViewInfo *)viewInfo;
  if ( (node->mesh.flags.packed & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2268, ASSERT_TYPE_ASSERT, "(!node.mesh.flags.clippedOut)", (const char *)&queryFormat, "!node.mesh.flags.clippedOut") )
    __debugbreak();
  v11 = mapsToDraw;
  if ( !mapsToDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2269, ASSERT_TYPE_ASSERT, "(mapsToDraw)", (const char *)&queryFormat, "mapsToDraw") )
    __debugbreak();
  if ( node->mesh.triCount )
  {
    v12 = 0;
    v13 = cachedDvars;
    v14 = 1;
    cutoutMeshFilter = cachedDvars->cutoutMeshFilter;
    if ( cutoutMeshFilter )
    {
      if ( cutoutMeshFilter == 1 )
      {
        v16 = 1;
LABEL_14:
        vertexBias = (HLSL::hlsl_2_t<float,vec2_t>)node->compressBase;
        vertexScale = (HLSL::hlsl_2_t<float,vec2_t>)node->compressScale;
        v17 = baseTileData;
        materialLayerInput = 0i64;
        if ( R_ST_AddTileDataForNode(baseTileData, node, surface, &materialLayerInput, 0.0, 0.0, &vertexScale, &vertexBias, 1u, cachedDvars, 0, frameData, &mapsToDraw) )
        {
          vertexBias = 0i64;
          do
          {
            if ( (v14 & v11) != 0 )
              R_ST_AddNodeDrawSurfsToList(node, surface, viewInfoa, v17, v13, v16, mapsToDraw, 0, scene.superTerrainSurfsSunShadow[v12], 0x200u, &scene.superTerrainSunShadowSurfCount[v12], (GfxStDrawSurf **)&vertexBias, terrainSurfaceDataInfo);
            ++v12;
            v14 = __ROL4__(v14, 1);
          }
          while ( v12 < 3 );
        }
        return;
      }
      v16 = node->mesh.cutoutTriCount != 0;
    }
    else
    {
      v16 = (node->mesh.cutoutTriCount != 0) + 1;
    }
    if ( !v16 )
      return;
    goto LABEL_14;
  }
}

/*
==============
R_ST_GeomStreamTerrainSurface
==============
*/
void R_ST_GeomStreamTerrainSurface(const StDiskTerrainSurface *surface, const vec3_t *dpvsCamPos, float zoomFactor)
{
  float v3; 
  double v5; 
  unsigned int numLevels; 
  float stLodDistanceScale; 
  int integer; 
  unsigned __int8 nodeCallbackDynamicParams[8]; 
  volatile __int64 v10; 
  StGeomStreamStaticParams nodeCallbackStaticParams; 

  v3 = dpvsCamPos->v[2];
  v5 = *(double *)dpvsCamPos->v;
  numLevels = surface->grid.numLevels;
  stLodDistanceScale = rg.stLodDistanceScale;
  nodeCallbackStaticParams.surface = surface;
  nodeCallbackStaticParams.worldSpaceCamPos.v[2] = v3;
  *(double *)nodeCallbackStaticParams.worldSpaceCamPos.v = v5;
  integer = r_st_lodMorphControl->current.integer;
  v10 = s_sceneLodScaleBiasWithoutFov;
  if ( zoomFactor <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1980, ASSERT_TYPE_ASSERT, "(zoomFactor > 0.0f)", (const char *)&queryFormat, "zoomFactor > 0.0f") )
    __debugbreak();
  nodeCallbackDynamicParams[0] = 0;
  nodeCallbackStaticParams.adjustedLodDistanceScale = R_ST_GetAdjustedLodDistanceScale(stLodDistanceScale, *(float *)&integer, (float)(1.0 / zoomFactor) * *(float *)&v10, (float)(1.0 / zoomFactor) * *((float *)&v10 + 1)) * r_st_streamLeadFactor->current.value;
  R_ST_TraverseTree_StGeomStreamStaticParams_unsigned_char_(surface, numLevels - 1, R_ST_GeomStream_Callback, &nodeCallbackStaticParams, nodeCallbackDynamicParams);
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
  surface = staticCallbackParams->surface;
  if ( (node->mesh.flags.packed & 8) == 0 )
    R_ST_SurfaceBaseResourceStreamRequest(staticCallbackParams->surface, ST_SURFACE_STREAM_REQUEST_GEO_HEIGHTMAP);
  if ( node->mesh.cutoutTriCount )
    R_ST_SurfaceBaseResourceStreamRequest(surface, ST_SURFACE_STREAM_REQUEST_GEO_CUTOUTMAP);
  return !R_ST_CanDrawNode(staticCallbackParams->surface, node, gridLevel, &staticCallbackParams->worldSpaceCamPos, staticCallbackParams->adjustedLodDistanceScale);
}

/*
==============
R_ST_GetAdjustedLodDistanceScale
==============
*/

float __fastcall R_ST_GetAdjustedLodDistanceScale(double distanceScale, float morphControl, float sceneLodScale, float sceneLodBias)
{
  bool v4; 
  const dvar_t *v5; 
  __int128 v6; 

  v4 = !CL_TransientsWorldMP_UseLowAlwaysloadedFlagging();
  v5 = r_st_lod_transition_scaler_low;
  if ( v4 )
    v5 = r_st_lod_transition_scaler_high;
  v6 = *(_OWORD *)&distanceScale;
  *(float *)&v6 = (float)((float)(*(float *)&distanceScale / v5->current.value) * sceneLodScale) + sceneLodBias;
  _XMM2 = v6;
  __asm
  {
    vminss  xmm3, xmm2, cs:__real@3f800000
    vmaxss  xmm4, xmm3, xmm0
  }
  return (float)(*(float *)&_XMM4 * (float)(morphControl - 1.0)) * (float)(0.70710677 / morphControl);
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
const StTerrainNode *R_ST_GetNodeAtLocation(const StDiskTerrainSurface *surface, unsigned int tileX, unsigned int tileY, float tileWidth)
{
  float v5; 
  float v8; 
  unsigned int v9; 
  bool v10; 
  bool v11; 
  unsigned int numLevels; 
  unsigned int v13; 
  StTerrainGridLevel *v14; 
  __int64 v15; 

  v5 = tileWidth;
  v8 = roundf((float)(surface->halfWldSize * 2.0) / tileWidth);
  v9 = (int)v8;
  v10 = v8 >= 0.0 && v8 <= 16777216.0;
  v11 = v8 >= 0.0 && v8 <= 4294967300.0;
  if ( (!v10 || !v11) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 437, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (IntegralType) 0x%jx == (FloatType) %f", "unsigned int __cdecl float_to_integral_cast<unsigned int,float>(float)", v9, v8) )
    __debugbreak();
  if ( tileX >= v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 3011, ASSERT_TYPE_SANITY, "( tileX < widthInSectors )", (const char *)&queryFormat, "tileX < widthInSectors") )
    __debugbreak();
  if ( tileY >= v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 3012, ASSERT_TYPE_SANITY, "( tileY < widthInSectors )", (const char *)&queryFormat, "tileY < widthInSectors") )
    __debugbreak();
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 212, ASSERT_TYPE_ASSERT, "(value > 0)", (const char *)&queryFormat, "value > 0") )
    __debugbreak();
  numLevels = surface->grid.numLevels;
  v13 = 32 - __lzcnt(v9 - 1);
  if ( v13 >= numLevels )
  {
    v9 >>= v13 - numLevels + 1;
    tileX >>= v13 - numLevels + 1;
    tileY >>= v13 - numLevels + 1;
    v5 = tileWidth * (float)(1 << (v13 - numLevels + 1));
    v13 = numLevels - 1;
  }
  v14 = &surface->grid.levels[numLevels - v13 - 1];
  if ( (v14->width != v9 || v14->height != v9) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 3026, ASSERT_TYPE_SANITY, "( level.width == widthInSectors && level.height == widthInSectors )", (const char *)&queryFormat, "level.width == widthInSectors && level.height == widthInSectors") )
    __debugbreak();
  v15 = (__int64)&v14->nodes[tileX + tileY * v9];
  if ( *(unsigned __int16 *)(v15 + 132) != tileX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 3028, ASSERT_TYPE_SANITY, "( node.xIndex == tileX )", (const char *)&queryFormat, "node.xIndex == tileX") )
    __debugbreak();
  if ( *(unsigned __int16 *)(v15 + 134) != tileY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 3029, ASSERT_TYPE_SANITY, "( node.yIndex == tileY )", (const char *)&queryFormat, "node.yIndex == tileY") )
    __debugbreak();
  if ( (*(_BYTE *)(v15 + 86) & 1) == 0 && COERCE_FLOAT(COERCE_UNSIGNED_INT(1.0 - (float)((float)(*(float *)(v15 + 100) * 2.0) / v5)) & _xmm) >= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 3031, ASSERT_TYPE_SANITY, "( node.mesh.flags.clippedOut || fabsf( 1 - 2 * node.wldBounds.halfSize.x / tileWidth ) < 0.001f )", (const char *)&queryFormat, "node.mesh.flags.clippedOut || fabsf( 1 - 2 * node.wldBounds.halfSize.x / tileWidth ) < 0.001f") )
    __debugbreak();
  return (const StTerrainNode *)v15;
}

/*
==============
R_ST_Init
==============
*/
void R_ST_Init(void)
{
  __m256i v0; 
  __m256i v1; 
  double v2; 
  StreamKeyBehavior v3; 

  if ( s_stGlob.terrain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 853, ASSERT_TYPE_ASSERT, "(glob.terrain == nullptr)", (const char *)&queryFormat, "glob.terrain == nullptr") )
    __debugbreak();
  if ( s_stGlob.layerDataLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 854, ASSERT_TYPE_ASSERT, "(glob.layerDataLimit == 0)", (const char *)&queryFormat, "glob.layerDataLimit == 0") )
    __debugbreak();
  if ( s_stGlob.tileDataLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 855, ASSERT_TYPE_ASSERT, "(glob.tileDataLimit == 0)", (const char *)&queryFormat, "glob.tileDataLimit == 0") )
    __debugbreak();
  if ( s_stGlob.frameDataIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 856, ASSERT_TYPE_ASSERT, "(glob.frameDataIndex == 0)", (const char *)&queryFormat, "glob.frameDataIndex == 0") )
    __debugbreak();
  R_ST_Clutter_Init();
  HIDWORD(v2) = 64;
  v0.m256i_i64[1] = 0i64;
  v1.m256i_i64[1] = 0i64;
  LOBYTE(v2) = 0;
  v0.m256i_i64[0] = (__int64)R_ST_StreamKeyLoadedFrontend;
  v0.m256i_i64[2] = (__int64)R_ST_StreamKeyUnloadedFrontend;
  v0.m256i_i64[3] = (__int64)R_ST_StreamKeyUnloadedBackend;
  v1.m256i_i64[0] = (__int64)R_ST_StreamKeyDBPreRelease;
  v1.m256i_i64[2] = (__int64)R_ST_StreamKeyPtrFixupRelocateBackend;
  v1.m256i_i64[3] = (__int64)R_ST_StreamKeyUnmapOldAddressBackend;
  *(__m256i *)&v3.loadedFrontend = v0;
  *(__m256i *)&v3.dbPreRelease = v1;
  *(double *)&v3.forceFixedRegion = v2;
  StreamKey_SetBehavior(SKBI_TERRAIN, &v3);
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
  unsigned int v14; 
  float combinedBias; 
  double v16; 
  float displacementDistanceSquared; 
  double v18; 
  __int64 v19; 
  Material *v20; 
  Material *v21; 
  int v22; 
  __int64 v23; 
  ID3D12Resource *highLODIndexBuffer; 
  ID3D12Resource *vb; 
  unsigned __int64 v26; 
  __int64 v27; 

  if ( !drawSurfs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1663, ASSERT_TYPE_ASSERT, "(drawSurfs)", (const char *)&queryFormat, "drawSurfs") )
    __debugbreak();
  if ( drawSurfCount - 1 > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1664, ASSERT_TYPE_ASSERT, "(drawSurfCount == 1 || drawSurfCount == 2)", (const char *)&queryFormat, "drawSurfCount == 1 || drawSurfCount == 2") )
    __debugbreak();
  v14 = (node->mesh.flags.packed >> 1) & 2;
  if ( (node->mesh.flags.packed & 8) != 0 )
    v14 = 40;
  if ( (v14 & 8) == 0 )
  {
    if ( (surfaceTileData->flags & 0x20) != 0 || !R_ST_AreAllLayeredTextureBaseMipsAvailable(node, surface, terrainSurfaceDataInfo) || (combinedBias = cachedDvars->combinedBias, v16 = Bounds_DistToPointSq(&node->wldBounds, &viewInfo->viewParmsSet.frames[0].viewParms.camera.origin), *(float *)&v16 >= (float)((float)(combinedBias * combinedBias) * 301655360.0)) )
    {
      v14 |= 8u;
    }
    else
    {
      displacementDistanceSquared = cachedDvars->displacementDistanceSquared;
      if ( displacementDistanceSquared > 0.0 && (surface->layerDisplacementMask & node->layerMask) != 0 )
      {
        v18 = Bounds_DistToPointSq(&node->wldBounds, &viewInfo->viewParmsSet.frames[0].viewParms.camera.origin);
        if ( *(float *)&v18 < displacementDistanceSquared )
          v14 |= 4u;
      }
      if ( (node->mesh.flags.packed & 0x10) != 0 && cachedDvars->allowLayerMask )
        v14 |= 0x40u;
    }
  }
  v19 = v14 | 0x10;
  if ( !lightmapped )
    v19 = v14;
  v20 = rgp.superTerrainMaterials[v19];
  v21 = rgp.superTerrainMaterials[(unsigned int)v19 | 1i64];
  if ( (!v20 || !v21) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1657, ASSERT_TYPE_ASSERT, "(materialOut && cutoutMaterialOut)", (const char *)&queryFormat, "materialOut && cutoutMaterialOut") )
    __debugbreak();
  *(_WORD *)&drawSurfs->drawGroup.fields = Material_GetSortedIndex(v20);
  v22 = 0x10000;
  v23 = 0i64;
  if ( (((v20->drawSurf.packed.p1 & 0x70000) - 0x10000i64) & 0xFFFFFFFFFFFDFFFFui64) != 0 )
    v22 = 0;
  drawSurfs->drawGroup.packed = v22 & 0xFC05FFFF | drawSurfs->drawGroup.packed & 0xFC04FFFF | 0x40000;
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
  v26 = (__int64)((unsigned __int128)(((char *)surface - (char *)s_stGlob.terrain->surfaces) * (__int128)0x572620AE4C415C99i64) >> 64) >> 7;
  v27 = (v26 >> 63) + v26;
  if ( (v27 < 0 || (unsigned __int64)v27 > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,__int64>(__int64)", "unsigned", (unsigned __int8)v27, "signed", v27) )
    __debugbreak();
  drawSurfs->surfaceIndex = v27;
  drawSurfs->layerMaskBuffer = node->mesh.layerMask.buffer;
  if ( drawSurfCount == 2 || cachedDvars->cutoutMeshFilter == 2 )
  {
    if ( cachedDvars->cutoutMeshFilter != 2 )
      v23 = 1i64;
    drawSurfs[v23] = *drawSurfs;
    if ( ((LODWORD(v20->drawSurf.packed.p1) ^ LODWORD(v21->drawSurf.packed.p1)) & 0x70000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1705, ASSERT_TYPE_ASSERT, "(cutoutMaterial->drawSurf.fields.tessellation == material->drawSurf.fields.tessellation)", (const char *)&queryFormat, "cutoutMaterial->drawSurf.fields.tessellation == material->drawSurf.fields.tessellation") )
      __debugbreak();
    *(_WORD *)&drawSurfs[v23].drawGroup.fields = Material_GetSortedIndex(v21);
    drawSurfs[v23].baseIndex = 3 * drawSurfs->triCount;
    drawSurfs[v23].triCount = node->mesh.cutoutTriCount;
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
void R_ST_RegisterDvars(void)
{
  r_st_lodMorphControl = Dvar_RegisterFloat("LPNQPNMOQO", 128.0, 2.0, 10000000.0, 4u, "'q' parameter expressing size of transition area when lod morphing, from 2 to infinity");
  r_st_combined_force = Dvar_RegisterBool("LQSSTRMLQN", 0, 4u, "Force terrain combined map to be used.");
  r_st_combined_bias_low = Dvar_RegisterFloat("MOKOTLQNQK", 0.5, 0.0, 8.0, 0, "Adjust distance that the terrain combined map is used at. Used on base consoles");
  r_st_combined_bias_high = Dvar_RegisterFloat("MMKTLNPQTS", 1.0, 0.0, 8.0, 0, "Adjust distance that the terrain combined map is used at. Used on Neo/Scorpio/PC consoles");
  r_st_lod_transition_scaler_low = Dvar_RegisterFloat("MMTSOPMLPR", 0.5, 0.0, 2.0, 0, "Adjust how quickly we will be going down super terrain quad tree for a surface. Higher number means we will want quad tree nodes when the camera is further away. Used on Base consoles");
  r_st_lod_transition_scaler_high = Dvar_RegisterFloat("LLSNLQLRMN", 1.0, 0.0, 2.0, 0, "Adjust how quickly we will be going down super terrain quad tree for a surface. Higher number means we will want quad tree nodes when the camera is further away. Used on Neo/Scorpio/PC consoles");
  r_st_fallbackImagesOkForLayering = Dvar_RegisterBool("LPOPSSSNMK", 1, 0, "Allow layering using fallback images");
  r_st_displacementLodNear = Dvar_RegisterFloat("LQNORLOQNM", 0.0, 0.0, 80629.922, 4u, "Distance of max tessellation density for super terrain displacement");
  r_st_displacementDistance = Dvar_RegisterFloat("ORTSSLPSK", 0.0, 0.0, 80629.922, 4u, "Use displacement mapping on super terrain out to the given distance from the camera.  0 -> disabled");
  r_st_displacementPixelCoverage = Dvar_RegisterFloat("MKQMOQMNNR", 8.0, 1.0, 64.0, 4u, "Triangle edge size in pixels for super terrain displacement");
  r_st_sm_lod = Dvar_RegisterInt("MMNQSMKTOQ", 1, -1, 8, 4u, "Super terrain lod to use for shadows. -1 -> disable shadows");
  r_st_sm_polygonOffsetScale = Dvar_RegisterFloat("NLQMSLORTM", 5.0, -65536.0, 65536.0, 4u, "Super terrain shadow map offset scale");
  r_st_sm_polygonOffsetBias = Dvar_RegisterInt("NSQSOQTTQT", 8, -65536, 0x10000, 4u, "Super terrain shadow map offset bias");
  r_st_sm_polygonOffsetClamp = Dvar_RegisterFloat("RLKMTPMKN", 0.0, 0.0, 8192.0, 4u, "Super terrain shadow map offset clamp");
  r_st_streamLeadFactor = Dvar_RegisterFloat("LSNNTTKSTR", 0.89999998, 0.0, 2.0, 4u, "How early to stream in super terrain geometry");
  r_st_enable = Dvar_RegisterBool("MPTQPQRTMT", 1, 4u, "Enable rendering of super terrain");
  r_st_forceLod = Dvar_RegisterInt("LPNOLRKMQQ", -1, -1, 8, 4u, "Force super terrain rendering to the given lod. -1 -> disabled");
  r_st_lodMorphOverride = Dvar_RegisterFloat("TOTOKNPKN", -1.0, -1.0, 1.0, 4u, "Override lod morph calculation for testing");
  r_st_layerLimit = Dvar_RegisterInt("MLTOPQRSTK", -1, -1, 32, 4u, "Limits the number of layers drawn on all Super Terrain instances.  0 -> disabled");
  r_st_cutoutMeshFilter = Dvar_RegisterEnum("LRSRRLTRNT", r_st_cutoutMeshFilterNames, 0, 4u, "Filter cutout or non-cutout meshes from rendering");
  r_st_combinedMapStreamMetricScale = Dvar_RegisterFloat("RLSNLNQOT", 1.0, 0.0, 100.0, 4u, "Scale combined map streaming metric by this value.  Bigger = less streamed in");
  r_st_drawSingleSurface = Dvar_RegisterInt("NOQSRPPRSN", -1, -1, 256, 4u, "Draws only the selected ST surface when enabled.  -1 -> disabled");
  r_st_allowLayerMask = Dvar_RegisterBool("MPKRNORPS", 1, 4u, "Allow use of layer mask (if available)");
  r_st_singleLayer = Dvar_RegisterInt("MQMSPSMOSP", -1, -1, 32, 4u, "Apply the given super terrain material layer only.  -1 -> disabled");
  r_st_surfaceDebugColorMode = Dvar_RegisterInt("NLQQNLMQLS", -1, -1, 100, 4u, "Tint super terrain surface. -1 -> disabled, 0 -> all surfaces");
  r_st_layerDebugColorMode = Dvar_RegisterInt("MNNPPKLSTM", -1, -1, 32, 4u, "Tint super terrain material layer. -1 -> disabled, 0 -> all layers");
  r_st_showSurfaceBounds = Dvar_RegisterBool("NKTRRRQRSN", 0, 4u, "Show super terrain surface bounds");
  r_st_showTileBounds = Dvar_RegisterBool("NRSRNNRKTS", 0, 4u, "Show super terrain tile bounds");
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
  float v4; 
  float v5; 
  float v6; 
  bool v7; 
  const dvar_t *v8; 
  float value; 
  float v10; 
  int integer; 
  volatile __int64 v12; 

  R_ST_SetTerrainComboSetInfoConstants(viewInfo->input.sceneConstants.terrainComboSetInfo);
  v4 = dpvsCamPos->v[0] - viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[0];
  v5 = dpvsCamPos->v[2] - viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[2];
  v6 = dpvsCamPos->v[1] - viewInfo->viewParmsSet.frames[0].viewParms.camera.origin.v[1];
  v7 = !CL_TransientsWorldMP_UseLowAlwaysloadedFlagging();
  v8 = r_st_combined_bias_low;
  if ( v7 )
    v8 = r_st_combined_bias_high;
  value = v8->current.value;
  if ( rg.correctedLodParms.invFovScale != 0.0 )
    value = value / rg.correctedLodParms.invFovScale;
  viewInfo->input.sceneConstants.dpvsCamPosOffset.v[0] = v4;
  viewInfo->input.sceneConstants.dpvsCamPosOffset.v[1] = v6;
  viewInfo->input.sceneConstants.dpvsCamPosOffset.v[2] = v5;
  viewInfo->input.sceneConstants.dpvsCamPosOffset.v[3] = value;
  v10 = r_st_displacementPixelCoverage->current.value;
  integer = r_st_displacementLodNear->current.integer;
  viewInfo->input.sceneConstants.terrainTesselationParms.v[1] = r_st_displacementDistance->current.value;
  viewInfo->input.sceneConstants.terrainTesselationParms.v[2] = v10;
  LODWORD(viewInfo->input.sceneConstants.terrainTesselationParms.v[0]) = integer;
  if ( !rg.correctedLodParms.valid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2842, ASSERT_TYPE_ASSERT, "(rg.correctedLodParms.valid)", (const char *)&queryFormat, "rg.correctedLodParms.valid") )
    __debugbreak();
  s_sceneLodScaleBiasWithoutFov = *(_QWORD *)&rg.correctedLodParms.ramp.scaleWithoutFovScale;
  *(float *)&v12 = rg.correctedLodParms.ramp.scale;
  *((float *)&v12 + 1) = rg.correctedLodParms.ramp.bias;
  s_sceneLodScaleBias = v12;
}

/*
==============
R_ST_SetTerrainComboSetInfoConstants
==============
*/
void R_ST_SetTerrainComboSetInfoConstants(vec4_t *terrainComboSetInfo)
{
  vec4_t *v1; 
  unsigned __int64 v2; 
  const StTerrain *terrain; 
  __int64 mapsCount; 
  unsigned int v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  float *v9; 
  __int64 v10; 
  StTerrainMaps *maps; 
  float mapResolution; 
  float v13; 
  float v14; 
  __int64 v15; 
  float v16; 
  GfxImage *whiteImage; 
  __int64 p_z; 
  unsigned int v19; 
  __int64 v20; 
  float width; 
  int height; 
  float v23; 
  int v24; 
  float v25; 
  int v26; 
  float v27; 
  int v28; 
  __int64 v29; 
  __int64 v30; 
  float v31; 
  int v32; 
  __int64 v33; 
  __int64 v34; 
  int v36[16]; 

  v1 = terrainComboSetInfo;
  v2 = 0i64;
  terrain = s_stGlob.terrain;
  if ( s_stGlob.terrain )
  {
    mapsCount = s_stGlob.terrain->mapsCount;
    v5 = 0;
    memset(v36, 0, sizeof(v36));
    if ( s_stGlob.terrain->surfaceCount )
    {
      do
      {
        v6 = (__int64)&terrain->surfaces[v5];
        if ( *(_DWORD *)(v6 + 96) >= 8u )
        {
          LODWORD(v34) = 8;
          LODWORD(v33) = *(_DWORD *)(v6 + 96);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2805, ASSERT_TYPE_ASSERT, "(unsigned)( surface.surfaceMapSetIndex ) < (unsigned)( 8 )", "surface.surfaceMapSetIndex doesn't index TERRAIN_TEXTURES_MAX_RESOLUTION_SETS\n\t%i not in [0, %i)", v33, v34) )
            __debugbreak();
        }
        if ( !*(_QWORD *)(v6 + 336) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2806, ASSERT_TYPE_ASSERT, "(surface.heightMap)", (const char *)&queryFormat, "surface.heightMap") )
          __debugbreak();
        v7 = *(_QWORD *)(v6 + 336);
        ++v5;
        v8 = *(unsigned int *)(v6 + 96);
        v36[2 * v8] = *(unsigned __int16 *)(v7 + 36);
        v36[2 * v8 + 1] = *(unsigned __int16 *)(v7 + 38);
      }
      while ( v5 < terrain->surfaceCount );
      v1 = terrainComboSetInfo;
      v2 = 0i64;
    }
    if ( (_DWORD)mapsCount )
    {
      v9 = &v1->v[2];
      v10 = mapsCount;
      do
      {
        maps = terrain->maps;
        if ( !maps[v2 / 2].paddedResolution && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2814, ASSERT_TYPE_ASSERT, "(maps[mapIndex].paddedResolution != 0)", (const char *)&queryFormat, "maps[mapIndex].paddedResolution != 0") )
          __debugbreak();
        mapResolution = (float)maps[v2 / 2].mapResolution;
        v13 = mapResolution / (float)maps[v2 / 2].paddedResolution;
        v14 = (float)(unsigned int)v36[v2];
        v15 = (unsigned int)v36[v2 + 1];
        v2 += 2i64;
        v16 = (float)v15;
        *(v9 - 1) = v16;
        *(v9 - 2) = v14;
        *v9 = v13;
        v9[1] = mapResolution;
        v9 += 4;
        --v10;
      }
      while ( v10 );
      v1 = terrainComboSetInfo;
    }
  }
  else
  {
    LODWORD(mapsCount) = 0;
  }
  whiteImage = rgp.whiteImage;
  if ( (unsigned int)mapsCount < 8 )
  {
    if ( (unsigned int)(8 - mapsCount) >= 4 )
    {
      p_z = (__int64)&v1[(unsigned int)mapsCount + 1].xyz.z;
      v19 = ((unsigned int)(4 - mapsCount) >> 2) + 1;
      v20 = v19;
      LODWORD(mapsCount) = mapsCount + 4 * v19;
      do
      {
        p_z += 64i64;
        width = (float)whiteImage->width;
        height = whiteImage->height;
        *(float *)(p_z - 88) = width;
        *(float *)(p_z - 84) = (float)height;
        *(_DWORD *)(p_z - 80) = 1065353216;
        *(float *)(p_z - 76) = width;
        v23 = (float)whiteImage->width;
        v24 = whiteImage->height;
        *(float *)(p_z - 72) = v23;
        *(float *)(p_z - 68) = (float)v24;
        *(_DWORD *)(p_z - 64) = 1065353216;
        *(float *)(p_z - 60) = v23;
        v25 = (float)whiteImage->width;
        v26 = whiteImage->height;
        *(float *)(p_z - 56) = v25;
        *(float *)(p_z - 52) = (float)v26;
        *(_DWORD *)(p_z - 48) = 1065353216;
        *(float *)(p_z - 44) = v25;
        v27 = (float)whiteImage->width;
        v28 = whiteImage->height;
        *(float *)(p_z - 40) = v27;
        *(float *)(p_z - 36) = (float)v28;
        *(_DWORD *)(p_z - 32) = 1065353216;
        *(float *)(p_z - 28) = v27;
        --v20;
      }
      while ( v20 );
    }
    if ( (unsigned int)mapsCount < 8 )
    {
      v29 = (unsigned int)(8 - mapsCount);
      v30 = (__int64)&v1[(unsigned int)mapsCount].xyz.z;
      do
      {
        v30 += 16i64;
        v31 = (float)whiteImage->width;
        v32 = whiteImage->height;
        *(_DWORD *)(v30 - 16) = 1065353216;
        *(float *)(v30 - 20) = (float)v32;
        *(float *)(v30 - 24) = v31;
        *(float *)(v30 - 12) = v31;
        --v29;
      }
      while ( v29 );
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
  unsigned __int16 *materialTextureIdxs; 
  unsigned __int16 v8; 
  unsigned __int16 v9; 
  unsigned __int16 v10; 
  unsigned __int16 v11; 

  *layerOut = layer->layerData;
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
  unsigned int *p_colorMap; 
  const StDiskTerrainSurface *v10; 
  char *v11; 
  unsigned __int16 *v12; 
  const StTerrain *terrain; 
  unsigned __int16 v14; 
  unsigned __int16 v15; 
  unsigned __int16 v16; 
  unsigned __int16 v17; 
  unsigned int v18; 
  const StTerrain *v19; 
  unsigned int v20; 
  const StTerrain *v21; 
  unsigned int v22; 
  const StTerrain *v23; 
  unsigned int v24; 
  bool v25; 
  __int64 layerDebugColorMode; 
  unsigned int v27; 
  double *p_flags; 
  int v29; 
  float v30; 
  __int64 v31; 
  __int64 p_colorTint; 
  float v33; 
  int surfaceDebugColorMode; 
  const StTerrain *v35; 
  int v36; 
  double *v37; 
  __int64 v38; 
  float v39; 
  double *v40; 
  __int64 v41; 
  float v42; 
  int singleLayer; 
  __int64 v45; 
  __int64 v46; 
  int v47; 
  __int64 v48; 
  __int64 v49; 
  vec3_t outColor; 

  v3 = layersOut;
  v4 = surface;
  v5 = cachedDvars;
  if ( !layersOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1206, ASSERT_TYPE_ASSERT, "(layersOut)", (const char *)&queryFormat, "layersOut") )
    __debugbreak();
  layerMaterialsCount = v4->layerMaterialsCount;
  v47 = layerMaterialsCount;
  if ( (unsigned int)layerMaterialsCount > 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1208, ASSERT_TYPE_ASSERT, "(layerCount <= ST_MAX_LAYERS_PER_SURFACE)", (const char *)&queryFormat, "layerCount <= ST_MAX_LAYERS_PER_SURFACE") )
    __debugbreak();
  v7 = 0;
  if ( (_DWORD)layerMaterialsCount )
  {
    v8 = 0i64;
    v49 = layerMaterialsCount;
    v48 = 0i64;
    p_colorMap = &v3->colorMap;
    v10 = v4;
    do
    {
      v11 = (char *)v10->layerMaterials + v8;
      *(_OWORD *)(p_colorMap - 22) = *((_OWORD *)v11 + 4);
      *(_OWORD *)(p_colorMap - 18) = *((_OWORD *)v11 + 5);
      *(_OWORD *)(p_colorMap - 14) = *((_OWORD *)v11 + 6);
      *(_OWORD *)(p_colorMap - 10) = *((_OWORD *)v11 + 7);
      *(_OWORD *)(p_colorMap - 6) = *((_OWORD *)v11 + 8);
      *(_OWORD *)(p_colorMap - 2) = *((_OWORD *)v11 + 9);
      *(_OWORD *)(p_colorMap + 2) = *((_OWORD *)v11 + 10);
      *(_OWORD *)(p_colorMap + 6) = *((_OWORD *)v11 + 11);
      *(_OWORD *)(p_colorMap + 10) = *((_OWORD *)v11 + 12);
      *(_OWORD *)(p_colorMap + 14) = *((_OWORD *)v11 + 13);
      if ( *((_DWORD *)v11 + 13) >= v10->layerMaskMapIdxsCount )
      {
        LODWORD(v46) = v10->layerMaskMapIdxsCount;
        LODWORD(v45) = *((_DWORD *)v11 + 13);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1116, ASSERT_TYPE_ASSERT, "(unsigned)( layer.layer ) < (unsigned)( surface.layerMaskMapIdxsCount )", "layer.layer doesn't index surface.layerMaskMapIdxsCount\n\t%i not in [0, %i)", v45, v46) )
          __debugbreak();
      }
      *(p_colorMap - 13) = v10->layerMaskMapIdxs[*((int *)v11 + 13)];
      v12 = (unsigned __int16 *)*((_QWORD *)v11 + 1);
      terrain = s_stGlob.terrain;
      v14 = *v12;
      v15 = v12[1];
      v16 = v12[2];
      v17 = v12[3];
      if ( !s_stGlob.terrain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1013, ASSERT_TYPE_ASSERT, "(terrain)", (const char *)&queryFormat, "terrain") )
        __debugbreak();
      if ( v14 == 0xFFFF || (v18 = v14, v14 >= terrain->flattenedImagesCount) )
        v18 = 0;
      *p_colorMap = v18;
      v19 = s_stGlob.terrain;
      if ( !s_stGlob.terrain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1013, ASSERT_TYPE_ASSERT, "(terrain)", (const char *)&queryFormat, "terrain") )
        __debugbreak();
      if ( v15 == 0xFFFF || (v20 = v15, v15 >= v19->flattenedImagesCount) )
        v20 = 0;
      p_colorMap[3] = v20;
      v21 = s_stGlob.terrain;
      if ( !s_stGlob.terrain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1013, ASSERT_TYPE_ASSERT, "(terrain)", (const char *)&queryFormat, "terrain") )
        __debugbreak();
      if ( v16 == 0xFFFF || (v22 = v16, v16 >= v21->flattenedImagesCount) )
        v22 = 0;
      p_colorMap[5] = v22;
      v23 = s_stGlob.terrain;
      if ( !s_stGlob.terrain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1013, ASSERT_TYPE_ASSERT, "(terrain)", (const char *)&queryFormat, "terrain") )
        __debugbreak();
      if ( v17 == 0xFFFF || (v24 = v17, v17 >= v23->flattenedImagesCount) )
        v24 = 0;
      p_colorMap[9] = v24;
      if ( v15 != 0xFFFF )
        *(p_colorMap - 3) = s_stGlob.terrain->flattenedImages[v15]->semanticSpecific.albedoMapScaleBias;
      if ( v14 == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1171, ASSERT_TYPE_ASSERT, "(albedoMapIndex != 0xFFFF)", (const char *)&queryFormat, "albedoMapIndex != TERRAIN_TEXTURE_INDEX_INVALID") )
        __debugbreak();
      *(p_colorMap - 2) = s_stGlob.terrain->flattenedImages[v14]->semanticSpecific.albedoMapScaleBias;
      p_colorMap += 40;
      v8 = v48 + 224;
      v25 = v49-- == 1;
      v48 += 224i64;
    }
    while ( !v25 );
    LODWORD(layerMaterialsCount) = v47;
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
        v31 = v5->layerDebugColorMode;
        v3[layerDebugColorMode - 1].flags |= 0x800u;
        R_DebugUniqueColorFromIndex(0, &outColor);
        p_colorTint = (__int64)&v3[v31 - 1].colorTint;
        v33 = outColor.v[2];
        *(double *)p_colorTint = *(double *)outColor.v;
        *(float *)(p_colorTint + 8) = v33;
      }
    }
    else
    {
      v27 = 0;
      if ( (_DWORD)layerMaterialsCount )
      {
        p_flags = (double *)&v3->flags;
        do
        {
          *(_DWORD *)p_flags |= 0x800u;
          v29 = v27++;
          R_DebugUniqueColorFromIndex(v29, &outColor);
          v30 = outColor.v[2];
          p_flags += 20;
          *(p_flags - 17) = *(double *)outColor.v;
          *((float *)p_flags - 32) = v30;
        }
        while ( v27 < (unsigned int)layerMaterialsCount );
      }
    }
  }
  surfaceDebugColorMode = v5->surfaceDebugColorMode;
  if ( surfaceDebugColorMode != -1 )
  {
    v35 = s_stGlob.terrain;
    if ( !s_stGlob.terrain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1246, ASSERT_TYPE_ASSERT, "(terrain)", (const char *)&queryFormat, "terrain") )
      __debugbreak();
    v36 = truncate_cast<unsigned int,__int64>(v4 - v35->surfaces);
    if ( surfaceDebugColorMode )
    {
      if ( surfaceDebugColorMode - 1 == v36 && (_DWORD)layerMaterialsCount )
      {
        v40 = (double *)&v3->flags;
        v41 = (unsigned int)layerMaterialsCount;
        do
        {
          *(_DWORD *)v40 |= 0x800u;
          R_DebugUniqueColorFromIndex(0, &outColor);
          v42 = outColor.v[2];
          v40 += 20;
          *(v40 - 17) = *(double *)outColor.v;
          *((float *)v40 - 32) = v42;
          --v41;
        }
        while ( v41 );
      }
    }
    else if ( (_DWORD)layerMaterialsCount )
    {
      v37 = (double *)&v3->flags;
      v38 = (unsigned int)layerMaterialsCount;
      do
      {
        *(_DWORD *)v37 |= 0x800u;
        R_DebugUniqueColorFromIndex(v36, &outColor);
        v39 = outColor.v[2];
        v37 += 20;
        *(v37 - 17) = *(double *)outColor.v;
        *((float *)v37 - 32) = v39;
        --v38;
      }
      while ( v38 );
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
  __m256i v10; 
  float v11; 
  unsigned int v12; 
  __m256i v13[6]; 
  __int128 v14; 

  terrain = s_stGlob.terrain;
  if ( !s_stGlob.terrain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 1451, ASSERT_TYPE_ASSERT, "(terrain)", (const char *)&queryFormat, "terrain") )
    __debugbreak();
  memset_0(v13, 0, 0xD0ui64);
  frameCount = 0;
  v10 = v13[4];
  *(__m256i *)&tileDataOut->flags = v13[0];
  *(__m256i *)&tileDataOut->vertexScale.xy.v[1] = v13[1];
  *(__m256i *)&tileDataOut->surfaceMapBaseIndex = v13[2];
  *(__m256i *)&tileDataOut->offToSurfaceMapY.xyz.v[1] = v13[3];
  *(__m256i *)&tileDataOut->windDir.xyz.v[1] = v10;
  *(__m256i *)&tileDataOut->surfaceIndex = v13[5];
  *(_OWORD *)tileDataOut->heightMapDx.v = v14;
  tileDataOut->terrainSize = surface->halfWldSize * 2.0;
  tileDataOut->surfaceMapOffOrigin.v[0] = surface->surfaceMapOrigin.v[0] - cameraWorldPosition->v[0];
  tileDataOut->surfaceMapOffOrigin.v[1] = surface->surfaceMapOrigin.v[1] - cameraWorldPosition->v[1];
  tileDataOut->surfaceMapSetIndex = surface->surfaceMapSetIndex;
  tileDataOut->surfaceMapBaseIndex = 0;
  tileDataOut->surfaceMapXCount = surface->surfaceMapXCount;
  R_ST_ComputeOffsetToSurfaceMap(surface, cameraWorldPosition, (vec3_t *)&tileDataOut->offToSurfaceMapX, (vec3_t *)&tileDataOut->offToSurfaceMapY, (vec2_t *)&tileDataOut->heightMapDx, (vec2_t *)&tileDataOut->heightMapDy);
  tileDataOut->vertXCount = surface->tileVertXCount;
  v11 = (float)(surface->tileVertXCount - 1);
  tileDataOut->vertSpacing = 0.5 / v11;
  tileDataOut->heightOffsetAndScale.v[0] = surface->heightOffset;
  tileDataOut->heightOffsetAndScale.v[1] = surface->heightScale;
  tileDataOut->surfaceIndex = surface - terrain->surfaces;
  if ( setFrameCount )
    frameCount = frontEndDataOut->frameCount;
  v12 = tileDataOut->flags | 0x10;
  tileDataOut->frameCount = frameCount;
  tileDataOut->flags = v12;
  if ( r_st_combined_force->current.enabled )
    tileDataOut->flags = v12 | 0x20;
}

/*
==============
R_ST_SetupTileDataForSurface
==============
*/
void R_ST_SetupTileDataForSurface(const StDiskTerrainSurface *surface, const vec3_t *cameraWorldPosition, bool setFrameCount, HLSL::TerrainTileDataCodeCS *tileDataOut)
{
  *(_OWORD *)&tileDataOut->layerCount = 0ui64;
  *(double *)((char *)&tileDataOut->surfaceMapOffOrigin + 4) = 0i64;
  tileDataOut->terrainSize = surface->halfWldSize * 2.0;
  tileDataOut->surfaceMapOffOrigin.v[0] = surface->surfaceMapOrigin.v[0] - cameraWorldPosition->v[0];
  tileDataOut->surfaceMapOffOrigin.v[1] = surface->surfaceMapOrigin.v[1] - cameraWorldPosition->v[1];
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
  nodeCallbackDynamicParams.nextTileSize = surface->halfWldSize * 2.0;
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
  float v9; 
  const StreamUpdateMultiView *multiView; 
  __m128 v12; 
  float v13; 
  __m128 v17; 
  __m128 v20; 
  __int64 viewCount; 
  float *viewCosFovLimit; 
  float v24; 
  float v25; 
  float v26; 
  __m128 v29; 
  char v34; 
  float *tileMaterialDistancesSq; 
  float v41; 
  float4 v42; 
  float4 v43; 
  float4 v44; 
  float4 v45; 
  float4 v46; 
  __m128 v47; 
  __m128 v48; 
  float4 v49; 

  outDynamicParms->nextTileSize = inDynamicParms->nextTileSize * 0.5;
  if ( (node->mesh.flags.packed & 1) != 0 )
    return 0;
  v9 = node->wldBounds.midPoint.v[0];
  multiView = staticCallbackParams->multiView;
  v47.m128_i32[3] = 0;
  v12 = v47;
  v12.m128_f32[0] = v9;
  _XMM4 = v12;
  v13 = node->wldBounds.halfSize.v[0];
  __asm
  {
    vinsertps xmm4, xmm4, dword ptr [rcx+5Ch], 10h
    vinsertps xmm4, xmm4, dword ptr [rcx+60h], 20h ; ' '
  }
  v47 = _XMM4;
  v47.m128_i32[3] = 0;
  v17 = v47;
  v17.m128_f32[0] = v13;
  _XMM3 = v17;
  __asm
  {
    vinsertps xmm3, xmm3, dword ptr [rcx+68h], 10h
    vinsertps xmm3, xmm3, dword ptr [rcx+6Ch], 20h ; ' '
  }
  v20 = _mm128_sub_ps(_XMM4, _XMM3);
  _XMM3 = _mm128_add_ps(_XMM4, _XMM3);
  v47 = _XMM3;
  v41 = FLOAT_3_4028235e38;
  v48 = v20;
  viewCount = multiView->viewCount;
  if ( viewCount > 0 )
  {
    viewCosFovLimit = multiView->viewCosFovLimit;
    do
    {
      v24 = viewCosFovLimit[16];
      v25 = *viewCosFovLimit;
      v26 = *(viewCosFovLimit - 32);
      v44.v = (__m128)multiView->viewPos[0];
      v42.v = _XMM3;
      v43.v = v20;
      Stream_AdjustViewPosForST(&v49, &v44, &v43, &v42);
      _XMM3 = v47;
      __asm { vminps  xmm0, xmm3, xmmword ptr [rbx] }
      v20 = v48;
      __asm { vmaxps  xmm4, xmm0, xmm5 }
      v29 = _mm128_sub_ps(_XMM4, v49.v);
      _XMM1 = _mm128_mul_ps(v29, v29);
      __asm
      {
        vinsertps xmm2, xmm1, xmm1, 8
        vhaddps xmm0, xmm2, xmm2
        vhaddps xmm1, xmm0, xmm0
      }
      if ( *(float *)&_XMM1 < v41 )
      {
        v41 = *(float *)&_XMM1;
        v44.v = (__m128)multiView->viewDir[0];
        v43.v = v49.v;
        v42.v = _XMM4;
        v45.v = v47;
        v46.v = v48;
        Stream_CalculateDistanceSq_ApplyZoomFactor(&v46, &v45, *(float *)&_XMM1, &v42, &v43, &v44, v26, v25, v24);
        _XMM3 = v47;
        v20 = v48;
      }
      ++viewCosFovLimit;
      multiView = (const StreamUpdateMultiView *)((char *)multiView + 16);
      --viewCount;
    }
    while ( viewCount );
  }
  v34 = !staticCallbackParams->shouldTraverse | ((float)(fsqrt(v41) * 0.5) > inDynamicParms->nextTileSize);
  if ( !gridLevel )
    v34 = 1;
  if ( v34 )
  {
    _ECX = node->layerMask;
    tileMaterialDistancesSq = staticCallbackParams->tileMaterialDistancesSq;
    if ( _ECX )
    {
      do
      {
        __asm { tzcnt   eax, ecx }
        _ECX &= ~(1 << _EAX);
        _XMM0 = LODWORD(tileMaterialDistancesSq[_EAX]);
        __asm { vminss  xmm1, xmm0, xmm2 }
        tileMaterialDistancesSq[_EAX] = *(float *)&_XMM1;
      }
      while ( _ECX );
      _ECX = node->layerMask;
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
  unsigned int i; 
  int v7; 
  unsigned int v8; 
  int v9; 
  DpvsPlane *frustumSidePlanes; 

  if ( !*mapsToDrawInOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2185, ASSERT_TYPE_ASSERT, "(mapsToDrawInOut)", (const char *)&queryFormat, "mapsToDrawInOut") )
    __debugbreak();
  if ( R_CullBoxDpvs(wldBounds, sunShadow->cameraPlanes, sunShadow->cameraPlaneCount) )
  {
    *mapsToDrawInOut &= 0xFFFFFFF8;
  }
  else
  {
    for ( i = 2; ; --i )
    {
      v7 = i;
      if ( i >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2148, ASSERT_TYPE_ASSERT, "(partitionIndex < R_SUNSHADOW_OPAQUE_PARTITION_COUNT && partitionIndex < ST_SUN_SHADOW_MAP_BITS_BIT_COUNT)", (const char *)&queryFormat, "partitionIndex < R_SUNSHADOW_OPAQUE_PARTITION_COUNT && partitionIndex < ST_SUN_SHADOW_MAP_BITS_BIT_COUNT") )
        __debugbreak();
      v8 = *mapsToDrawInOut;
      if ( _bittest((const int *)&v8, i) )
        break;
LABEL_14:
      if ( v7 <= 0 )
        return;
    }
    v9 = 0;
    frustumSidePlanes = sunShadow->partition[i].frustumSidePlanes;
    while ( (float)((float)((float)((float)((float)((float)(COERCE_FLOAT(LODWORD(frustumSidePlanes->coeffs.v[0]) & _xmm) * wldBounds->halfSize.v[0]) + (float)((float)(wldBounds->midPoint.v[0] * frustumSidePlanes->coeffs.v[0]) + frustumSidePlanes->coeffs.v[3])) + (float)(wldBounds->midPoint.v[1] * frustumSidePlanes->coeffs.v[1])) + (float)(COERCE_FLOAT(LODWORD(frustumSidePlanes->coeffs.v[1]) & _xmm) * wldBounds->halfSize.v[1])) + (float)(wldBounds->midPoint.v[2] * frustumSidePlanes->coeffs.v[2])) + (float)(COERCE_FLOAT(LODWORD(frustumSidePlanes->coeffs.v[2]) & _xmm) * wldBounds->halfSize.v[2])) > 0.0 )
    {
      ++v9;
      ++frustumSidePlanes;
      if ( v9 >= 4 )
        goto LABEL_14;
    }
    if ( i >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st.cpp", 2156, ASSERT_TYPE_ASSERT, "(partitionIndex < R_SUNSHADOW_OPAQUE_PARTITION_COUNT && partitionIndex < ST_SUN_SHADOW_MAP_BITS_BIT_COUNT)", (const char *)&queryFormat, "partitionIndex < R_SUNSHADOW_OPAQUE_PARTITION_COUNT && partitionIndex < ST_SUN_SHADOW_MAP_BITS_BIT_COUNT") )
      __debugbreak();
    *mapsToDrawInOut &= -1 << (i + 1);
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

