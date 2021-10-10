/*
==============
R_ST_SelectClutterCollection
==============
*/

void __fastcall R_ST_SelectClutterCollection(int clutterCollectionIndex)
{
  ?R_ST_SelectClutterCollection@@YAXH@Z(clutterCollectionIndex);
}

/*
==============
R_ST_ClutterRegisterDvars
==============
*/

void R_ST_ClutterRegisterDvars(void)
{
  ?R_ST_ClutterRegisterDvars@@YAXXZ();
}

/*
==============
R_ST_GetCameraCoords
==============
*/

vec2_t __fastcall R_ST_GetCameraCoords(const vec3_t *cameraPos, const GfxPlacement *surfacePlacement)
{
  return ?R_ST_GetCameraCoords@@YA?ATvec2_t@@AEBTvec3_t@@AEBUGfxPlacement@@@Z(cameraPos, surfacePlacement);
}

/*
==============
R_ST_GetClutterCollectionGPUDataBuffer
==============
*/

const GfxClutterCollectionGPUData *__fastcall R_ST_GetClutterCollectionGPUDataBuffer()
{
  return ?R_ST_GetClutterCollectionGPUDataBuffer@@YAPEBUGfxClutterCollectionGPUData@@XZ();
}

/*
==============
R_ST_Clutter_InitWorld
==============
*/

void R_ST_Clutter_InitWorld(void)
{
  ?R_ST_Clutter_InitWorld@@YAXXZ();
}

/*
==============
R_ST_ClutterSetSceneConstants
==============
*/

void __fastcall R_ST_ClutterSetSceneConstants(GfxViewInfo *viewInfo)
{
  ?R_ST_ClutterSetSceneConstants@@YAXAEAUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
RB_ST_ClutterUpdateStats
==============
*/

void __fastcall RB_ST_ClutterUpdateStats(ComputeCmdBufState *state, const GfxBackEndData *data)
{
  ?RB_ST_ClutterUpdateStats@@YAXPEAUComputeCmdBufState@@PEBUGfxBackEndData@@@Z(state, data);
}

/*
==============
R_ST_GetClutterTilesCovered
==============
*/

bool __fastcall R_ST_GetClutterTilesCovered(const vec2_t *coords, const vec2_t *layerWorldSize, const float drawDistance, const vec2_t *tileSizeUV, base_vec2_t<unsigned int> *tileStart, base_vec2_t<unsigned int> *tileCount)
{
  return ?R_ST_GetClutterTilesCovered@@YA_NAEBTvec2_t@@0M0AEAT?$base_vec2_t@I@@1@Z(coords, layerWorldSize, drawDistance, tileSizeUV, tileStart, tileCount);
}

/*
==============
R_ST_Clutter_Init
==============
*/

void R_ST_Clutter_Init(void)
{
  ?R_ST_Clutter_Init@@YAXXZ();
}

/*
==============
R_ST_ClutterCollectionEnabled
==============
*/

bool __fastcall R_ST_ClutterCollectionEnabled(unsigned int clutterCollectionIndex)
{
  return ?R_ST_ClutterCollectionEnabled@@YA_NI@Z(clutterCollectionIndex);
}

/*
==============
R_ST_GetClutterLayerForCollection
==============
*/

const StTerrainClutterLayer *__fastcall R_ST_GetClutterLayerForCollection(const GfxClutterCollection *collection)
{
  return ?R_ST_GetClutterLayerForCollection@@YAAEBUStTerrainClutterLayer@@AEBUGfxClutterCollection@@@Z(collection);
}

/*
==============
R_ST_GetClutterTilesInstanceCount
==============
*/

unsigned int __fastcall R_ST_GetClutterTilesInstanceCount(const StDiskTerrainSurface *surface, const StTerrainClutterLayer *layer, const base_vec2_t<unsigned int> *tileStart, const base_vec2_t<unsigned int> *tileCount)
{
  return ?R_ST_GetClutterTilesInstanceCount@@YAIAEBUStDiskTerrainSurface@@AEBUStTerrainClutterLayer@@AEBT?$base_vec2_t@I@@2@Z(surface, layer, tileStart, tileCount);
}

/*
==============
R_ST_GetClutterLayerBitmaskSizeBytes
==============
*/

unsigned int __fastcall R_ST_GetClutterLayerBitmaskSizeBytes(const StTerrainClutterLayer *layer)
{
  return ?R_ST_GetClutterLayerBitmaskSizeBytes@@YAIAEBUStTerrainClutterLayer@@@Z(layer);
}

/*
==============
R_ST_Clutter_ShutdownWorld
==============
*/

void R_ST_Clutter_ShutdownWorld(void)
{
  ?R_ST_Clutter_ShutdownWorld@@YAXXZ();
}

/*
==============
R_ST_GetClutterTilesCoveredForCollection
==============
*/

bool __fastcall R_ST_GetClutterTilesCoveredForCollection(const vec3_t *cameraPos, const GfxClutterCollection *collection, base_vec2_t<unsigned int> *tileStart, base_vec2_t<unsigned int> *tileCount)
{
  return ?R_ST_GetClutterTilesCoveredForCollection@@YA_NAEBTvec3_t@@AEBUGfxClutterCollection@@AEAT?$base_vec2_t@I@@2@Z(cameraPos, collection, tileStart, tileCount);
}

/*
==============
RB_ST_ClutterUpdateStats
==============
*/
void RB_ST_ClutterUpdateStats(ComputeCmdBufState *state, const GfxBackEndData *data)
{
  unsigned int readbackIndex; 
  unsigned int instanceCountBufferSize; 
  unsigned int cpuIndex; 

  if ( rgp.world->smodels.clutterCollectionCount )
  {
    if ( Dvar_GetInt_Internal_DebugName(DVARINT_cg_drawClutterInfo, "cg_drawClutterInfo") )
    {
      readbackIndex = s_clutterReadBackRing.readbackIndex;
      instanceCountBufferSize = s_clutterReadBackRing.instanceCountBufferSize;
      cpuIndex = s_clutterReadBackRing.cpuIndex;
      R_CopyBufferData(state, &s_clutterReadBackRing.clutterCollectionGPUDataReadback[s_clutterReadBackRing.readbackIndex], 0, &rgp.world->smodels.clutterCollectionGPUDataBuffer, 0, s_clutterReadBackRing.instanceCountBufferSize);
      s_clutterReadBackRing.readbackIndex = (readbackIndex + 1) % 3;
      R_ReadbackGfxWrappedBuffer(&s_clutterReadBackRing.clutterCollectionGPUDataReadback[cpuIndex], s_clutterReadBackRing.clutterCollectionGPUDataCPU[(cpuIndex + 1) % 3], instanceCountBufferSize);
      s_clutterReadBackRing.cpuIndex = (cpuIndex + 1) % 3;
    }
  }
}

/*
==============
R_ST_ClutterBitmask_StreamKeyLoadedFrontend
==============
*/
void R_ST_ClutterBitmask_StreamKeyLoadedFrontend(const StreamKey *streamKey)
{
  char *behaviorUserPtr; 
  StreamKeyData *p_data; 
  unsigned __int8 *data; 
  unsigned int v5; 

  behaviorUserPtr = (char *)streamKey->behaviorUserPtr;
  if ( !*((_DWORD *)behaviorUserPtr + 2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_clutter.cpp", 232, ASSERT_TYPE_ASSERT, "(bitmask->wordCount > 0)", (const char *)&queryFormat, "bitmask->wordCount > 0") )
    __debugbreak();
  if ( *((_QWORD *)behaviorUserPtr + 2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_clutter.cpp", 233, ASSERT_TYPE_ASSERT, "(bitmask->bitmask == nullptr)", (const char *)&queryFormat, "bitmask->bitmask == nullptr") )
    __debugbreak();
  if ( *((_QWORD *)behaviorUserPtr + 6) && *((_DWORD *)behaviorUserPtr + 10) >= 2u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_clutter.cpp", 234, ASSERT_TYPE_ASSERT, "(bitmask->bitmaskBuffer.IsNull())", (const char *)&queryFormat, "bitmask->bitmaskBuffer.IsNull()") )
    __debugbreak();
  p_data = &streamKey->data;
  if ( (streamKey->flags & 2) != 0 )
    data = (unsigned __int8 *)p_data->dataHandle.data;
  else
    data = Stream_AddressSpace_ResolveHandle(&p_data->dataHandle);
  v5 = *((_DWORD *)behaviorUserPtr + 2);
  *((_QWORD *)behaviorUserPtr + 2) = data;
  Load_GfxWrappedBuffer((GfxWrappedBuffer *)(behaviorUserPtr + 24), GfxWrappedBuffer_Raw, 4u, v5, data, "clutter sample bitmasks", 0);
}

/*
==============
R_ST_ClutterBitmask_StreamKeyPtrFixupRelocateBackend
==============
*/
void R_ST_ClutterBitmask_StreamKeyPtrFixupRelocateBackend(const StreamKey *streamKey)
{
  char *behaviorUserPtr; 
  unsigned __int8 *data; 
  unsigned int v3; 
  __m256i v4; 

  behaviorUserPtr = (char *)streamKey->behaviorUserPtr;
  if ( *((_QWORD *)behaviorUserPtr + 2) )
  {
    if ( (streamKey->flags & 2) != 0 )
      data = streamKey->data.residentData;
    else
      data = Stream_AddressSpace_ResolveHandle(&streamKey->data.dataHandle);
    v3 = *((_DWORD *)behaviorUserPtr + 2);
    v4 = *(__m256i *)(behaviorUserPtr + 24);
    *((_QWORD *)behaviorUserPtr + 2) = data;
    *(__m256i *)(behaviorUserPtr + 56) = v4;
    Load_GfxWrappedBuffer((GfxWrappedBuffer *)(behaviorUserPtr + 24), GfxWrappedBuffer_Raw, 4u, v3, data, "clutter sample bitmasks", 0);
  }
}

/*
==============
R_ST_ClutterBitmask_StreamKeyUnloadedBackend
==============
*/
void R_ST_ClutterBitmask_StreamKeyUnloadedBackend(const StreamKey *streamKey)
{
  char *behaviorUserPtr; 
  __m256i *v2; 
  GfxWrappedBuffer result; 

  behaviorUserPtr = (char *)streamKey->behaviorUserPtr;
  v2 = (__m256i *)(behaviorUserPtr + 24);
  if ( *((_QWORD *)behaviorUserPtr + 6) && *((_DWORD *)behaviorUserPtr + 10) >= 2u )
    R_ShutdownGfxWrappedBuffer((GfxWrappedBuffer *)(behaviorUserPtr + 24));
  *v2 = *(__m256i *)R_GetNullGfxWrappedBuffer(&result);
}

/*
==============
R_ST_ClutterBitmask_StreamKeyUnloadedFrontend
==============
*/
void R_ST_ClutterBitmask_StreamKeyUnloadedFrontend(const StreamKey *streamKey)
{
  *(_QWORD *)(streamKey->assetHash + 16) = 0i64;
}

/*
==============
R_ST_ClutterBitmask_StreamKeyUnmapOldAddressBackend
==============
*/
void R_ST_ClutterBitmask_StreamKeyUnmapOldAddressBackend(const StreamKey *streamKey)
{
  char *behaviorUserPtr; 
  __m256i *v2; 
  GfxWrappedBuffer result; 

  behaviorUserPtr = (char *)streamKey->behaviorUserPtr;
  v2 = (__m256i *)(behaviorUserPtr + 56);
  if ( *((_QWORD *)behaviorUserPtr + 10) )
  {
    if ( *((_DWORD *)behaviorUserPtr + 18) >= 2u )
    {
      R_ShutdownGfxWrappedBuffer((GfxWrappedBuffer *)(behaviorUserPtr + 56));
      *v2 = *(__m256i *)R_GetNullGfxWrappedBuffer(&result);
    }
  }
}

/*
==============
R_ST_ClutterCollectionEnabled
==============
*/
_BOOL8 R_ST_ClutterCollectionEnabled(unsigned int clutterCollectionIndex)
{
  return s_clutterCollectionToggles[clutterCollectionIndex];
}

/*
==============
R_ST_ClutterLayerToggle
==============
*/
void R_ST_ClutterLayerToggle()
{
  int integer; 

  if ( Dvar_GetInt_Internal_DebugName(DVARINT_cg_drawClutterInfo, "cg_drawClutterInfo") )
    integer = s_selectedClutterCollection;
  else
    integer = r_st_clutterLayerSelected->current.integer;
  if ( integer >= 0 && integer < rgp.world->smodels.clutterCollectionCount )
    s_clutterCollectionToggles[integer] = !s_clutterCollectionToggles[integer];
}

/*
==============
R_ST_ClutterRegisterDvars
==============
*/
void R_ST_ClutterRegisterDvars(void)
{
  r_st_clutterTintSampleLevel = Dvar_RegisterInt("NPRKKSMKOQ", 2, 0, 11, 0, "What combined map level to sample when tinting clutter. Too high resolution of mip may result in very high frequency tint changes.");
  r_st_clutterFlattenPercentage = Dvar_RegisterFloat("NPLPQTQRSP", 0.5, 0.0, 1.0, 0, "When to begin flattening distant clutter objects based on their draw distances. 0 starts flattening out immediately, while 1.0 doesn't flatten at all. Requires the material to have Draw Distance Flattening enabled");
  r_st_clutterLodScale = Dvar_RegisterFloat("OPPKROMLS", 1.0, 0.5, 2.0, 0, "Similar to r_lodScale, but allows for additional scaling specifically for generated clutter. It combines with r_lodScale to determine the final scale for clutter");
  r_st_clutterLodBias = Dvar_RegisterFloat("NQTSLKSSTL", 0.0, -1000.0, 0.0, 0, "Similar to r_lodBias, but allows for additional baising specifically for generated clutter. It combines with r_lodBias to determine the final bias for clutter");
  r_st_clutterStreamDistance = Dvar_RegisterFloat("LORPPQRPNS", 500.0, 0.0, 10000.0, 0, "The distance (from the drawing distance) that we should start streaming in clutter. 0.0 only begins streaming clutter once it's visible");
  r_st_clutterStreamBoost = Dvar_RegisterInt("OKNQOORNNM", 100, 0, 100, 0, "The streaming boost amount for when clutter is visible, but not yet streamed in");
  r_st_clutterEnable = Dvar_RegisterBool("NLLLOMTPPM", 1, 0, "Enable generation and rendering of runtime clutter");
  r_st_clutterLayerSelected = Dvar_RegisterInt("NRMTSPRMPL", -1, -1, 1024, 0, "Select a specific runtime clutter layer");
  r_st_clutterBitmaskStreamingEnabled = Dvar_RegisterBool("NKMOTSMPTT", 1, 0, "Enable streaming of clutter bitmasks");
  Cmd_AddCommandInternal("r_st_clutterLayerToggle", R_ST_ClutterLayerToggle, &R_ST_ClutterLayerToggle_VAR);
  Cmd_AddCommandInternal("r_st_clutterResetLayers", R_ST_ResetClutterLayers, &R_ST_ResetClutterLayers_VAR);
}

/*
==============
R_ST_ClutterSetSceneConstants
==============
*/
void R_ST_ClutterSetSceneConstants(GfxViewInfo *viewInfo)
{
  LODWORD(viewInfo->input.sceneConstants.drawDistanceFlatteningPercent) = r_st_clutterFlattenPercentage->current.integer;
  viewInfo->input.sceneConstants.clutterFirstInstanceIndex = rgp.world->smodels.clutterInstancePool.start;
}

/*
==============
R_ST_Clutter_Init
==============
*/
void R_ST_Clutter_Init(void)
{
  __m256i v0; 
  __m256i v1; 
  double v2; 
  StreamKeyBehavior v3; 

  v0.m256i_i64[1] = 0i64;
  *(_OWORD *)v1.m256i_i8 = 0ui64;
  LOBYTE(v2) = 0;
  v0.m256i_i64[0] = (__int64)R_ST_ClutterBitmask_StreamKeyLoadedFrontend;
  v0.m256i_i64[2] = (__int64)R_ST_ClutterBitmask_StreamKeyUnloadedFrontend;
  v0.m256i_i64[3] = (__int64)R_ST_ClutterBitmask_StreamKeyUnloadedBackend;
  v1.m256i_i64[2] = (__int64)R_ST_ClutterBitmask_StreamKeyPtrFixupRelocateBackend;
  v1.m256i_i64[3] = (__int64)R_ST_ClutterBitmask_StreamKeyUnmapOldAddressBackend;
  *(__m256i *)&v3.loadedFrontend = v0;
  HIDWORD(v2) = 64;
  *(double *)&v3.forceFixedRegion = v2;
  *(__m256i *)&v3.dbPreRelease = v1;
  StreamKey_SetBehavior(SKBI_CLUTTER_BITMASK, &v3);
}

/*
==============
R_ST_Clutter_InitWorld
==============
*/
void R_ST_Clutter_InitWorld(void)
{
  unsigned int v0; 
  unsigned __int64 clutterCollectionCount; 
  unsigned int v2; 
  GfxClutterCollectionGPUData **clutterCollectionGPUDataCPU; 
  GfxWrappedBuffer *clutterCollectionGPUDataReadback; 
  unsigned __int64 v5; 
  bool *v6; 
  StClutterReadBackRing v7; 
  GfxWrappedBuffer result; 

  v0 = 0;
  PMem_BeginAlloc("Clutter World Data", PMEM_STACK_GAME);
  clutterCollectionCount = rgp.world->smodels.clutterCollectionCount;
  v2 = 0;
  clutterCollectionGPUDataCPU = v7.clutterCollectionGPUDataCPU;
  clutterCollectionGPUDataReadback = v7.clutterCollectionGPUDataReadback;
  do
  {
    if ( (_DWORD)clutterCollectionCount )
    {
      R_CreateGfxWrappedBuffer(&v7.clutterCollectionGPUDataReadback[v2], GfxWrappedBuffer_Structured, 8, clutterCollectionCount, GFX_DATA_FORMAT_R32_UINT, 0x1008u, D3D12_RESOURCE_STATE_COPY_DEST, NULL, NULL, "Clutter Collection GPU Data Readback Buffer");
      v5 = clutterCollectionCount;
      *clutterCollectionGPUDataCPU = (GfxClutterCollectionGPUData *)PMem_Alloc(8 * clutterCollectionCount, 4ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "Clutter Collection GPU Data CPU Info");
    }
    else
    {
      *clutterCollectionGPUDataReadback = *R_GetNullGfxWrappedBuffer(&result);
      *clutterCollectionGPUDataCPU = NULL;
      v5 = clutterCollectionCount;
    }
    ++v2;
    ++clutterCollectionGPUDataReadback;
    ++clutterCollectionGPUDataCPU;
  }
  while ( v2 < 3 );
  *(_QWORD *)&v7.instanceCountBufferSize = (unsigned int)(8 * clutterCollectionCount);
  v7.cpuIndex = 2;
  s_clutterReadBackRing = v7;
  if ( (_DWORD)clutterCollectionCount )
  {
    v6 = (bool *)PMem_Alloc(v5, 1ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "Clutter Collection Toggles");
    s_clutterCollectionToggles = v6;
    if ( rgp.world->smodels.clutterCollectionCount )
    {
      do
        v6[v0++] = 1;
      while ( v0 < rgp.world->smodels.clutterCollectionCount );
    }
  }
  PMem_EndAlloc("Clutter World Data", PMEM_STACK_GAME);
}

/*
==============
R_ST_Clutter_ShutdownWorld
==============
*/
void R_ST_Clutter_ShutdownWorld(void)
{
  unsigned int v0; 
  __int64 v1; 
  StreamerMemLoan result; 

  v0 = 0;
  v1 = 0i64;
  do
  {
    if ( s_clutterReadBackRing.clutterCollectionGPUDataReadback[v1].data && s_clutterReadBackRing.clutterCollectionGPUDataReadback[v1].view.view >= 2 )
      R_ShutdownGfxWrappedBuffer(&s_clutterReadBackRing.clutterCollectionGPUDataReadback[v0]);
    ++v0;
    ++v1;
  }
  while ( v0 < 3 );
  PMem_Free(&result, "Clutter World Data", PMEM_STACK_GAME);
  StreamerMemLoan::~StreamerMemLoan(&result);
}

/*
==============
R_ST_GetCameraCoords
==============
*/
vec2_t R_ST_GetCameraCoords(const vec3_t *cameraPos, const GfxPlacement *surfacePlacement)
{
  float v2; 
  float v3; 
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  vec3_t in; 
  vec4_t quat; 
  vec3_t out; 

  v2 = cameraPos->v[1] - surfacePlacement->origin.v[1];
  in.v[0] = cameraPos->v[0] - surfacePlacement->origin.v[0];
  v3 = cameraPos->v[2] - surfacePlacement->origin.v[2];
  v4 = surfacePlacement->quat.v[1];
  in.v[1] = v2;
  LODWORD(v5) = LODWORD(surfacePlacement->quat.v[0]) ^ _xmm;
  in.v[2] = v3;
  quat.v[0] = v5;
  v6 = surfacePlacement->quat.v[2];
  LODWORD(quat.v[1]) = LODWORD(v4) ^ _xmm;
  v7 = surfacePlacement->quat.v[3];
  LODWORD(quat.v[2]) = LODWORD(v6) ^ _xmm;
  quat.v[3] = v7;
  QuatTransform(&quat, &in, &out);
  in.v[0] = out.v[0];
  in.v[1] = out.v[1];
  return *(vec2_t *)in.v;
}

/*
==============
R_ST_GetClutterCollectionGPUDataBuffer
==============
*/
GfxClutterCollectionGPUData *R_ST_GetClutterCollectionGPUDataBuffer()
{
  return s_clutterReadBackRing.clutterCollectionGPUDataCPU[s_clutterReadBackRing.cpuIndex];
}

/*
==============
R_ST_GetClutterLayerBitmaskSizeBytes
==============
*/
__int64 R_ST_GetClutterLayerBitmaskSizeBytes(const StTerrainClutterLayer *layer)
{
  return ((layer->tileCount.v[0] * layer->tileCount.v[1]) << 8) & 0x1FFFFFFF;
}

/*
==============
R_ST_GetClutterLayerForCollection
==============
*/
const StTerrainClutterLayer *R_ST_GetClutterLayerForCollection(const GfxClutterCollection *collection)
{
  const StTerrain *terrain; 
  __int64 v3; 
  __int64 v5; 
  __int64 v6; 
  unsigned int surfaceCount; 

  terrain = s_stGlob.terrain;
  if ( !s_stGlob.terrain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_clutter.cpp", 358, ASSERT_TYPE_ASSERT, "(terrain)", (const char *)&queryFormat, "terrain") )
    __debugbreak();
  if ( collection->terrainSurfaceIndex >= terrain->surfaceCount )
  {
    surfaceCount = terrain->surfaceCount;
    LODWORD(v5) = collection->terrainSurfaceIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_clutter.cpp", 360, ASSERT_TYPE_ASSERT, "(unsigned)( collection.terrainSurfaceIndex ) < (unsigned)( terrain->surfaceCount )", "collection.terrainSurfaceIndex doesn't index terrain->surfaceCount\n\t%i not in [0, %i)", v5, surfaceCount) )
      __debugbreak();
  }
  v3 = (__int64)&terrain->surfaces[collection->terrainSurfaceIndex];
  if ( (unsigned int)collection->clutterLayerIndex >= *(_DWORD *)(v3 + 168) )
  {
    LODWORD(v6) = *(_DWORD *)(v3 + 168);
    LODWORD(v5) = collection->clutterLayerIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_clutter.cpp", 363, ASSERT_TYPE_ASSERT, "(unsigned)( collection.clutterLayerIndex ) < (unsigned)( surface.clutterLayerCount )", "collection.clutterLayerIndex doesn't index surface.clutterLayerCount\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  return (const StTerrainClutterLayer *)(*(_QWORD *)(v3 + 176) + 84i64 * collection->clutterLayerIndex);
}

/*
==============
R_ST_GetClutterTilesCovered
==============
*/
char R_ST_GetClutterTilesCovered(const vec2_t *coords, const vec2_t *layerWorldSize, const float drawDistance, const vec2_t *tileSizeUV, base_vec2_t<unsigned int> *tileStart, base_vec2_t<unsigned int> *tileCount)
{
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  __int128 v11; 
  __int128 v12; 
  __int128 v13; 
  __int128 v14; 
  __int128 v15; 
  __int128 v16; 
  __int128 v18; 
  __int128 v20; 
  __int128 v22; 
  __int128 v24; 
  float v25; 
  float v26; 
  int v29; 
  int v34; 

  v7 = LODWORD(FLOAT_1_0);
  *(float *)&v7 = 1.0 / layerWorldSize->v[1];
  v6 = v7;
  v9 = LODWORD(FLOAT_1_0);
  *(float *)&v9 = 1.0 / layerWorldSize->v[0];
  v8 = v9;
  *(float *)&v9 = (float)(*(float *)&v9 * coords->v[0]) + 0.5;
  v10 = v9;
  v12 = LODWORD(FLOAT_0_5);
  *(float *)&v12 = 0.5 - (float)(*(float *)&v6 * coords->v[1]);
  v11 = v12;
  v14 = v8;
  *(float *)&v14 = *(float *)&v8 * drawDistance;
  v13 = v14;
  v16 = v6;
  *(float *)&v16 = *(float *)&v6 * drawDistance;
  v15 = v16;
  v18 = v10;
  *(float *)&v18 = *(float *)&v10 - *(float *)&v13;
  _XMM1 = v18;
  if ( (float)(*(float *)&v10 - *(float *)&v13) > 1.0 )
    return 0;
  v20 = v11;
  *(float *)&v20 = *(float *)&v11 - *(float *)&v15;
  _XMM6 = v20;
  if ( (float)(*(float *)&v11 - *(float *)&v15) > 1.0 )
    return 0;
  v22 = v13;
  *(float *)&v22 = *(float *)&v13 + *(float *)&v10;
  _XMM8 = v22;
  if ( (float)(*(float *)&v13 + *(float *)&v10) < 0.0 )
    return 0;
  v24 = v15;
  *(float *)&v24 = *(float *)&v15 + *(float *)&v11;
  _XMM7 = v24;
  if ( (float)(*(float *)&v15 + *(float *)&v11) < 0.0 )
    return 0;
  v25 = 1.0 / tileSizeUV->v[0];
  v26 = 1.0 / tileSizeUV->v[1];
  __asm
  {
    vminss  xmm0, xmm1, xmm5
    vmaxss  xmm0, xmm0, xmm4
  }
  v29 = (int)(float)(*(float *)&_XMM0 * v25);
  tileStart->v[0] = v29;
  __asm
  {
    vminss  xmm0, xmm6, xmm5
    vmaxss  xmm0, xmm0, xmm4
  }
  tileStart->v[1] = (int)(float)(*(float *)&_XMM0 * v26);
  __asm
  {
    vminss  xmm0, xmm8, xmm5
    vmaxss  xmm0, xmm0, xmm4
  }
  v34 = (int)(float)(*(float *)&_XMM0 * v25) - v29;
  __asm
  {
    vminss  xmm0, xmm7, xmm5
    vmaxss  xmm0, xmm0, xmm4
  }
  tileCount->v[0] = v34 + 1;
  tileCount->v[1] = (int)(float)(*(float *)&_XMM0 * v26) - tileStart->v[1] + 1;
  return 1;
}

/*
==============
R_ST_GetClutterTilesCoveredForCollection
==============
*/
char R_ST_GetClutterTilesCoveredForCollection(const vec3_t *cameraPos, const GfxClutterCollection *collection, base_vec2_t<unsigned int> *tileStart, base_vec2_t<unsigned int> *tileCount)
{
  const StTerrain *terrain; 
  float scaleWithoutFovScale; 
  float biasWithoutFovScale; 
  __int64 v10; 
  float *v11; 
  double LodOutDist; 
  float v13; 
  float v14; 
  int v15; 
  float v16; 
  __int128 v17; 
  __int128 v18; 
  __int128 v19; 
  __int128 v20; 
  __int128 v21; 
  __int128 v22; 
  __int128 v23; 
  __int128 v24; 
  __int128 v25; 
  __int128 v26; 
  __int128 v27; 
  __int128 v29; 
  __int128 v31; 
  __int128 v33; 
  __int128 v35; 
  float v36; 
  float v37; 
  int v40; 
  vec3_t in; 
  vec4_t quat; 
  vec3_t out; 

  terrain = s_stGlob.terrain;
  if ( !s_stGlob.terrain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_clutter.cpp", 409, ASSERT_TYPE_ASSERT, "(terrain)", (const char *)&queryFormat, "terrain") )
    __debugbreak();
  scaleWithoutFovScale = rg.correctedLodParms.clutterRamp.scaleWithoutFovScale;
  biasWithoutFovScale = rg.correctedLodParms.clutterRamp.biasWithoutFovScale;
  v10 = (__int64)&terrain->surfaces[collection->terrainSurfaceIndex];
  v11 = (float *)(*(_QWORD *)(v10 + 176) + 84i64 * collection->clutterLayerIndex);
  LodOutDist = XModelGetLodOutDist(rgp.world->smodels.models[rgp.world->smodels.collections[collection->smodelCollectionIndex].smodelIndex].model);
  v13 = (float)(*(float *)&LodOutDist - biasWithoutFovScale) / scaleWithoutFovScale;
  *(float *)&LodOutDist = rg.correctedLodParms.origin.v[1] - *(float *)(v10 + 60);
  in.v[0] = rg.correctedLodParms.origin.v[0] - *(float *)(v10 + 56);
  v14 = rg.correctedLodParms.origin.v[2] - *(float *)(v10 + 64);
  v15 = *(_DWORD *)(v10 + 44);
  in.v[1] = *(float *)&LodOutDist;
  LODWORD(LodOutDist) = *(_DWORD *)(v10 + 40) ^ _xmm;
  in.v[2] = v14;
  quat.v[0] = *(float *)&LodOutDist;
  LODWORD(LodOutDist) = *(_DWORD *)(v10 + 48);
  LODWORD(quat.v[1]) = v15 ^ _xmm;
  v16 = *(float *)(v10 + 52);
  LODWORD(quat.v[2]) = LODWORD(LodOutDist) ^ _xmm;
  quat.v[3] = v16;
  QuatTransform(&quat, &in, &out);
  v18 = LODWORD(FLOAT_1_0);
  *(float *)&v18 = 1.0 / v11[7];
  v17 = v18;
  v20 = LODWORD(FLOAT_1_0);
  *(float *)&v20 = 1.0 / v11[6];
  v19 = v20;
  *(float *)&v20 = (float)(*(float *)&v20 * out.v[0]) + 0.5;
  v21 = v20;
  v23 = LODWORD(FLOAT_0_5);
  *(float *)&v23 = 0.5 - (float)(*(float *)&v17 * out.v[1]);
  v22 = v23;
  v25 = v19;
  *(float *)&v25 = *(float *)&v19 * v13;
  v24 = v25;
  v27 = v17;
  *(float *)&v27 = *(float *)&v17 * v13;
  v26 = v27;
  v29 = v21;
  *(float *)&v29 = *(float *)&v21 - *(float *)&v24;
  _XMM1 = v29;
  if ( (float)(*(float *)&v21 - *(float *)&v24) > 1.0 )
    return 0;
  v31 = v22;
  *(float *)&v31 = *(float *)&v22 - *(float *)&v26;
  _XMM6 = v31;
  if ( (float)(*(float *)&v22 - *(float *)&v26) > 1.0 )
    return 0;
  v33 = v24;
  *(float *)&v33 = *(float *)&v24 + *(float *)&v21;
  _XMM8 = v33;
  if ( (float)(*(float *)&v24 + *(float *)&v21) < 0.0 )
    return 0;
  v35 = v26;
  *(float *)&v35 = *(float *)&v26 + *(float *)&v22;
  _XMM7 = v35;
  if ( (float)(*(float *)&v26 + *(float *)&v22) < 0.0 )
    return 0;
  v36 = 1.0 / v11[4];
  v37 = 1.0 / v11[5];
  __asm
  {
    vminss  xmm0, xmm1, xmm5
    vmaxss  xmm0, xmm0, xmm4
  }
  v40 = (int)(float)(*(float *)&_XMM0 * v36);
  __asm
  {
    vminss  xmm0, xmm6, xmm5
    vmaxss  xmm0, xmm0, xmm4
  }
  tileStart->v[1] = (int)(float)(*(float *)&_XMM0 * v37);
  __asm
  {
    vminss  xmm0, xmm8, xmm5
    vmaxss  xmm0, xmm0, xmm4
  }
  tileStart->v[0] = v40;
  tileCount->v[0] = (int)(float)(*(float *)&_XMM0 * v36) - v40 + 1;
  __asm
  {
    vminss  xmm0, xmm7, xmm5
    vmaxss  xmm0, xmm0, xmm4
  }
  tileCount->v[1] = (int)(float)(*(float *)&_XMM0 * v37) - tileStart->v[1] + 1;
  return 1;
}

/*
==============
R_ST_GetClutterTilesInstanceCount
==============
*/
__int64 R_ST_GetClutterTilesInstanceCount(const StDiskTerrainSurface *surface, const StTerrainClutterLayer *layer, const base_vec2_t<unsigned int> *tileStart, const base_vec2_t<unsigned int> *tileCount)
{
  const StDiskTerrainSurface *v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int *i; 
  unsigned int j; 
  __int64 v12; 
  __int64 v14; 
  __int64 v15; 

  if ( tileStart->v[0] >= layer->tileCount.v[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_clutter.cpp", 426, ASSERT_TYPE_ASSERT, "(tileStart.x < layer.tileCount.x)", (const char *)&queryFormat, "tileStart.x < layer.tileCount.x") )
    __debugbreak();
  if ( tileStart->v[1] >= layer->tileCount.v[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_clutter.cpp", 427, ASSERT_TYPE_ASSERT, "(tileStart.y < layer.tileCount.y)", (const char *)&queryFormat, "tileStart.y < layer.tileCount.y") )
    __debugbreak();
  if ( tileCount->v[0] + tileStart->v[0] > layer->tileCount.v[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_clutter.cpp", 428, ASSERT_TYPE_ASSERT, "(tileStart.x + tileCount.x <= layer.tileCount.x)", (const char *)&queryFormat, "tileStart.x + tileCount.x <= layer.tileCount.x") )
    __debugbreak();
  if ( tileCount->v[1] + tileStart->v[1] > layer->tileCount.v[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_clutter.cpp", 429, ASSERT_TYPE_ASSERT, "(tileStart.y + tileCount.y <= layer.tileCount.y)", (const char *)&queryFormat, "tileStart.y + tileCount.y <= layer.tileCount.y") )
    __debugbreak();
  v7 = surface;
  v8 = 0;
  v9 = 0;
  for ( i = &surface->clutterTileInstanceCounts[layer->tileInstanceCountOffset]; v9 < tileCount->v[1]; ++v9 )
  {
    for ( j = 0; j < tileCount->v[0]; ++j )
    {
      v12 = j + tileStart->v[0] + layer->tileCount.v[0] * (v9 + tileStart->v[1]);
      if ( (unsigned int)v12 >= v7->clutterTileCount )
      {
        LODWORD(v15) = v7->clutterTileCount;
        LODWORD(v14) = j + tileStart->v[0] + layer->tileCount.v[0] * (v9 + tileStart->v[1]);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_st_clutter.cpp", 440, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( surface.clutterTileCount )", "index doesn't index surface.clutterTileCount\n\t%i not in [0, %i)", v14, v15) )
          __debugbreak();
        v7 = surface;
      }
      v8 += i[v12];
    }
  }
  return v8;
}

/*
==============
R_ST_ResetClutterLayers
==============
*/
void R_ST_ResetClutterLayers()
{
  __int64 v0; 
  bool *v1; 

  v0 = 0i64;
  if ( rgp.world->smodels.clutterCollectionCount )
  {
    v1 = s_clutterCollectionToggles;
    do
    {
      v1[v0] = 1;
      v0 = (unsigned int)(v0 + 1);
    }
    while ( (unsigned int)v0 < rgp.world->smodels.clutterCollectionCount );
  }
}

/*
==============
R_ST_SelectClutterCollection
==============
*/
void R_ST_SelectClutterCollection(int clutterCollectionIndex)
{
  s_selectedClutterCollection = clutterCollectionIndex;
}

