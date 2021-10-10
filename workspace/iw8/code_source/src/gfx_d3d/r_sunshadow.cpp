/*
==============
R_SunShadowCache_LazyAllocRts
==============
*/

void R_SunShadowCache_LazyAllocRts(void)
{
  ?R_SunShadowCache_LazyAllocRts@@YAXXZ();
}

/*
==============
R_SunShadowCache_AllocateStNode
==============
*/

unsigned int __fastcall R_SunShadowCache_AllocateStNode()
{
  return ?R_SunShadowCache_AllocateStNode@@YAIXZ();
}

/*
==============
R_SunShadowCache_NextStNodeId
==============
*/

unsigned int __fastcall R_SunShadowCache_NextStNodeId(unsigned int nodeId, unsigned int lastId)
{
  return ?R_SunShadowCache_NextStNodeId@@YAIII@Z(nodeId, lastId);
}

/*
==============
R_SetupSunShadowMaps
==============
*/

void __fastcall R_SetupSunShadowMaps(GfxBackEndData *data, GfxViewInfo *viewInfo, const GfxCamera *camera, GfxSunShadow *sunShadow)
{
  ?R_SetupSunShadowMaps@@YAXPEAUGfxBackEndData@@PEAUGfxViewInfo@@PEBUGfxCamera@@PEAUGfxSunShadow@@@Z(data, viewInfo, camera, sunShadow);
}

/*
==============
R_SunShadowMapDebug_CreateRTDraw3D
==============
*/

void R_SunShadowMapDebug_CreateRTDraw3D(void)
{
  ?R_SunShadowMapDebug_CreateRTDraw3D@@YAXXZ();
}

/*
==============
R_SunShadowCache_FreeRts
==============
*/

void R_SunShadowCache_FreeRts(void)
{
  ?R_SunShadowCache_FreeRts@@YAXXZ();
}

/*
==============
R_SunShadowCache_GetSmodel
==============
*/

GfxCachedSunShadow_Smodel *__fastcall R_SunShadowCache_GetSmodel(unsigned int smodelId)
{
  return ?R_SunShadowCache_GetSmodel@@YAPEAUGfxCachedSunShadow_Smodel@@I@Z(smodelId);
}

/*
==============
R_SunShadowCache_ComputeSmodelExtentsMask
==============
*/

void __fastcall R_SunShadowCache_ComputeSmodelExtentsMask(const Bounds *worldBounds, const GfxMatrix *worldToViewport, GfxCachedSunShadow_Smodel *outSmodel)
{
  ?R_SunShadowCache_ComputeSmodelExtentsMask@@YAXPEBUBounds@@AEBUGfxMatrix@@PEAUGfxCachedSunShadow_Smodel@@@Z(worldBounds, worldToViewport, outSmodel);
}

/*
==============
R_SunShadowCache_EndProcessing
==============
*/

void __fastcall R_SunShadowCache_EndProcessing(GfxCachedSunShadowOverlap *overlap)
{
  ?R_SunShadowCache_EndProcessing@@YAXPEAUGfxCachedSunShadowOverlap@@@Z(overlap);
}

/*
==============
R_SunShadowCache_GetBackFaceDepthRtDraw3D
==============
*/

R_RT_DepthHandle *__fastcall R_SunShadowCache_GetBackFaceDepthRtDraw3D(R_RT_DepthHandle *result, unsigned int cellIndex)
{
  return ?R_SunShadowCache_GetBackFaceDepthRtDraw3D@@YA?AVR_RT_DepthHandle@@I@Z(result, cellIndex);
}

/*
==============
R_SunShadowCache_GetEntryDebugId
==============
*/

unsigned int __fastcall R_SunShadowCache_GetEntryDebugId(const GfxCachedSunShadow *entry)
{
  return ?R_SunShadowCache_GetEntryDebugId@@YAIPEBUGfxCachedSunShadow@@@Z(entry);
}

/*
==============
R_SunShadowCache_GetDepthRt
==============
*/

R_RT_DepthHandle *__fastcall R_SunShadowCache_GetDepthRt(R_RT_DepthHandle *result, unsigned int cellIndex, R_RT_DepthHandle *sunShadowCacheDepthRts)
{
  return ?R_SunShadowCache_GetDepthRt@@YA?AVR_RT_DepthHandle@@IV1@@Z(result, cellIndex, sunShadowCacheDepthRts);
}

/*
==============
R_SunShadowCache_DeallocateStNodes
==============
*/

void __fastcall R_SunShadowCache_DeallocateStNodes(GfxCachedSunShadow *entry)
{
  ?R_SunShadowCache_DeallocateStNodes@@YAXPEAUGfxCachedSunShadow@@@Z(entry);
}

/*
==============
R_SunShadowCache_CheckEntryBoundsOverlap
==============
*/

bool __fastcall R_SunShadowCache_CheckEntryBoundsOverlap(GfxCachedSunShadow *entry, Bounds *worldBounds)
{
  return ?R_SunShadowCache_CheckEntryBoundsOverlap@@YA_NPEAUGfxCachedSunShadow@@UBounds@@@Z(entry, worldBounds);
}

/*
==============
R_SunShadowCache_GetDepthRtDraw3D
==============
*/

R_RT_DepthHandle *__fastcall R_SunShadowCache_GetDepthRtDraw3D(R_RT_DepthHandle *result, unsigned int cellIndex)
{
  return ?R_SunShadowCache_GetDepthRtDraw3D@@YA?AVR_RT_DepthHandle@@I@Z(result, cellIndex);
}

/*
==============
R_SunShadowCache_ResetAllocations
==============
*/

void R_SunShadowCache_ResetAllocations(void)
{
  ?R_SunShadowCache_ResetAllocations@@YAXXZ();
}

/*
==============
R_GetSunAxes
==============
*/

void __fastcall R_GetSunAxes(const vec3_t *sunShadowLightDir, tmat33_t<vec3_t> *sunAxis)
{
  ?R_GetSunAxes@@YAXAEBTvec3_t@@AEAT?$tmat33_t@Tvec3_t@@@@@Z(sunShadowLightDir, sunAxis);
}

/*
==============
R_SunShadowCache_Flush
==============
*/

void R_SunShadowCache_Flush(void)
{
  ?R_SunShadowCache_Flush@@YAXXZ();
}

/*
==============
R_GetCachedSunShadowParititionHead
==============
*/

GfxCachedSunShadow *__fastcall R_GetCachedSunShadowParititionHead()
{
  return ?R_GetCachedSunShadowParititionHead@@YAPEAUGfxCachedSunShadow@@XZ();
}

/*
==============
R_SunShadowCache_AllocateSmodel
==============
*/

unsigned int __fastcall R_SunShadowCache_AllocateSmodel()
{
  return ?R_SunShadowCache_AllocateSmodel@@YAIXZ();
}

/*
==============
R_SunShadowPreCache_EnabledForPartition
==============
*/

bool __fastcall R_SunShadowPreCache_EnabledForPartition(const GfxSunShadow *const sunShadow, unsigned int partitionIndex)
{
  return ?R_SunShadowPreCache_EnabledForPartition@@YA_NQEBUGfxSunShadow@@I@Z(sunShadow, partitionIndex);
}

/*
==============
R_SunShadowCache_NextSmodelId
==============
*/

unsigned int __fastcall R_SunShadowCache_NextSmodelId(unsigned int smodelId, unsigned int lastId)
{
  return ?R_SunShadowCache_NextSmodelId@@YAIII@Z(smodelId, lastId);
}

/*
==============
R_MergeAndEmitSunShadowMapsSurfs
==============
*/

void __fastcall R_MergeAndEmitSunShadowMapsSurfs(GfxViewInfo *viewInfo)
{
  ?R_MergeAndEmitSunShadowMapsSurfs@@YAXPEAUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
R_GetSunShadowMapOverlayLines
==============
*/

void __fastcall R_GetSunShadowMapOverlayLines(const GfxBackEndData *data, const GfxSunShadow *sunShadow, GfxSunShadowOverlayLines *overlay)
{
  ?R_GetSunShadowMapOverlayLines@@YAXPEBUGfxBackEndData@@PEBUGfxSunShadow@@PEAUGfxSunShadowOverlayLines@@@Z(data, sunShadow, overlay);
}

/*
==============
R_SunShadow_GetMapSize
==============
*/

unsigned int __fastcall R_SunShadow_GetMapSize(GfxShadowMapTileResolution resolutionIndex)
{
  return ?R_SunShadow_GetMapSize@@YAIW4GfxShadowMapTileResolution@@@Z(resolutionIndex);
}

/*
==============
R_ShadowMapDebug_GetRT
==============
*/

R_RT_DepthHandle *__fastcall R_ShadowMapDebug_GetRT(R_RT_DepthHandle *result, unsigned int partition, R_RT_DepthHandle *debugSunShadowDepthRt)
{
  return ?R_ShadowMapDebug_GetRT@@YA?AVR_RT_DepthHandle@@IV1@@Z(result, partition, debugSunShadowDepthRt);
}

/*
==============
R_SunShadowCache_GetDebugDepthArrayRtDraw3D
==============
*/

R_RT_DepthHandle *__fastcall R_SunShadowCache_GetDebugDepthArrayRtDraw3D(R_RT_DepthHandle *result)
{
  return ?R_SunShadowCache_GetDebugDepthArrayRtDraw3D@@YA?AVR_RT_DepthHandle@@XZ(result);
}

/*
==============
R_ProcessWorldTransientRefreshQueued
==============
*/

void R_ProcessWorldTransientRefreshQueued(void)
{
  ?R_ProcessWorldTransientRefreshQueued@@YAXXZ();
}

/*
==============
R_SetCloudShadowParams
==============
*/

void __fastcall R_SetCloudShadowParams(const GfxCloudShadow *cloudShadow, vec4_t *params)
{
  ?R_SetCloudShadowParams@@YAXPEBUGfxCloudShadow@@AEATvec4_t@@@Z(cloudShadow, params);
}

/*
==============
R_ForceRefreshCachedSunShadowData
==============
*/

void R_ForceRefreshCachedSunShadowData(void)
{
  ?R_ForceRefreshCachedSunShadowData@@YAXXZ();
}

/*
==============
R_SunShadowMapDebug_DestroyRTDraw3D
==============
*/

void R_SunShadowMapDebug_DestroyRTDraw3D(void)
{
  ?R_SunShadowMapDebug_DestroyRTDraw3D@@YAXXZ();
}

/*
==============
R_SunShadowMapDebug_GetRTDraw3D
==============
*/

R_RT_DepthHandle *__fastcall R_SunShadowMapDebug_GetRTDraw3D(R_RT_DepthHandle *result, unsigned int partition)
{
  return ?R_SunShadowMapDebug_GetRTDraw3D@@YA?AVR_RT_DepthHandle@@I@Z(result, partition);
}

/*
==============
R_SunShadowCache_GetBackFaceDepthArrayRtDraw3D
==============
*/

R_RT_DepthHandle *__fastcall R_SunShadowCache_GetBackFaceDepthArrayRtDraw3D(R_RT_DepthHandle *result)
{
  return ?R_SunShadowCache_GetBackFaceDepthArrayRtDraw3D@@YA?AVR_RT_DepthHandle@@XZ(result);
}

/*
==============
R_SunShadowCache_GetDepthArrayRtDraw3D
==============
*/

R_RT_DepthHandle *__fastcall R_SunShadowCache_GetDepthArrayRtDraw3D(R_RT_DepthHandle *result)
{
  return ?R_SunShadowCache_GetDepthArrayRtDraw3D@@YA?AVR_RT_DepthHandle@@XZ(result);
}

/*
==============
R_SunShadowCache_GetStNode
==============
*/

GfxCachedSunShadow_StNode *__fastcall R_SunShadowCache_GetStNode(unsigned int nodeId)
{
  return ?R_SunShadowCache_GetStNode@@YAAEAUGfxCachedSunShadow_StNode@@I@Z(nodeId);
}

/*
==============
R_SunShadow_GetMapSize
==============
*/

unsigned int __fastcall R_SunShadow_GetMapSize()
{
  return ?R_SunShadow_GetMapSize@@YAIXZ();
}

/*
==============
R_ProcessWorldTransientRefreshAddPending
==============
*/

void R_ProcessWorldTransientRefreshAddPending(void)
{
  ?R_ProcessWorldTransientRefreshAddPending@@YAXXZ();
}

/*
==============
R_MergeAndEmitTranslucentSunShadowMapsSurfs
==============
*/

void __fastcall R_MergeAndEmitTranslucentSunShadowMapsSurfs(GfxViewInfo *viewInfo)
{
  ?R_MergeAndEmitTranslucentSunShadowMapsSurfs@@YAXPEAUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
R_SunShadowCache_DeallocateSmodels
==============
*/

void __fastcall R_SunShadowCache_DeallocateSmodels(GfxCachedSunShadow *entry)
{
  ?R_SunShadowCache_DeallocateSmodels@@YAXPEAUGfxCachedSunShadow@@@Z(entry);
}

/*
==============
R_SunShadow_TranslucentEnabled
==============
*/

bool __fastcall R_SunShadow_TranslucentEnabled(const GfxViewInfo *viewInfo)
{
  return ?R_SunShadow_TranslucentEnabled@@YA_NPEBUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
R_SetCloudShadowParams
==============
*/

void __fastcall R_SetCloudShadowParams(const GfxCloudShadow *cloudShadow, GfxViewInfo *viewInfo)
{
  ?R_SetCloudShadowParams@@YAXPEBUGfxCloudShadow@@PEAUGfxViewInfo@@@Z(cloudShadow, viewInfo);
}

/*
==============
R_InitializeCachedSunShadowData
==============
*/

void R_InitializeCachedSunShadowData(void)
{
  ?R_InitializeCachedSunShadowData@@YAXXZ();
}

/*
==============
R_ProcessWorldTransientRefreshCachedSunShadowData
==============
*/

void R_ProcessWorldTransientRefreshCachedSunShadowData(void)
{
  ?R_ProcessWorldTransientRefreshCachedSunShadowData@@YAXXZ();
}

/*
==============
R_AddCachedSunShadowOverlap
==============
*/
void R_AddCachedSunShadowOverlap(GfxBackEndData *data, unsigned int partitionIndex, const vec3_t *sunShadowLightDir, const int gridX, const int gridY, const float gridSize, const float sampleSize, const float cachedLODRefDistance, const int x0, const int y0, GfxViewInfo *viewInfo, int *outValidEntryCount, const int minAllocRemaining, const bool allowRendering, GfxCachedSunShadow *staticEntry)
{
  GfxCachedSunShadow *v15; 
  int v17; 
  int v18; 
  GfxCachedSunShadow *prev; 
  float v21; 
  float v22; 
  char v23; 
  int *v24; 
  GfxViewInfo *v25; 
  bool v26; 
  char v27; 
  __int64 v28; 
  GfxCachedSunShadow *SunShadowCacheEntry; 
  char v30; 
  int v31; 
  GfxCachedSunShadow *v32; 
  unsigned int cachedSunShadowIndex; 
  __int64 v34; 
  __int64 gfxCachedSunShadowOverlapCount; 
  __int64 v36; 
  GfxDrawListType CachedDrawListIndexForSunShadowPartition; 
  char v38; 
  bool v39; 
  unsigned __int16 lastUpdateTimestamp; 
  GfxViewParms *p_viewParms; 
  __int64 v42; 
  vec4_t *v43; 
  vec4_t v44; 
  GfxViewParms *v45; 
  vec4_t *v46; 
  vec4_t v47; 
  __int64 v48; 
  char v49; 
  char v50; 
  char v51; 
  vec3_t *sunShadowLightDir_8; 
  GfxViewport sunShadowLightDir_8a; 
  GfxViewInfo *v56; 
  int v57; 
  int v58; 
  int v59[4]; 
  int v60[4]; 

  v15 = staticEntry;
  v17 = gridX;
  v18 = gridY;
  prev = NULL;
  v59[0] = 768;
  v59[1] = 1024;
  v59[2] = 1536;
  v59[3] = 2048;
  v21 = (float)(unsigned int)v59[rg.shadowMapResolutionIndex];
  v60[0] = 768;
  v60[1] = 1024;
  v60[2] = 1536;
  v60[3] = 2048;
  v22 = (float)((unsigned int)v60[rg.shadowMapResolutionIndex] >> 1);
  v23 = 0;
  v24 = outValidEntryCount;
  v25 = viewInfo;
  sunShadowLightDir_8 = (vec3_t *)sunShadowLightDir;
  v56 = viewInfo;
  v50 = 0;
  v26 = staticEntry == NULL;
  if ( staticEntry )
  {
    if ( staticEntry->refreshPending && allowRendering )
    {
      v23 = 1;
      staticEntry->refreshPending = 0;
      v50 = 1;
    }
    v26 = staticEntry == NULL;
  }
  v27 = v26;
  v28 = 3i64;
  if ( staticEntry && (!staticEntry->modelsFinalized || v23) )
  {
    SunShadowCacheEntry = R_FindSunShadowCacheEntry(partitionIndex, sunShadowLightDir, staticEntry->nearClip, staticEntry->farClip, v17, gridY, gridSize, cachedLODRefDistance, GFX_SUN_SHADOW_CACHE_POLICY_BSP_LRU);
    sunShadowLightDir = sunShadowLightDir_8;
    v25 = v56;
    prev = SunShadowCacheEntry;
    v24 = outValidEntryCount;
    v17 = gridX;
    v27 |= SunShadowCacheEntry == NULL;
    v18 = gridY;
  }
  v30 = v27;
  if ( !staticEntry )
    v30 = 1;
  v51 = v30 | v50;
  if ( !staticEntry )
    v15 = R_SunShadowAllocateStaticEntry(data, partitionIndex, sunShadowLightDir, v17, v18, gridSize, sampleSize, cachedLODRefDistance, x0, y0, v25, v24);
  if ( v27 )
  {
    v31 = *outValidEntryCount;
    if ( *outValidEntryCount - minAllocRemaining >= 0 )
    {
      v32 = s_gfxCachedSunShadowListHead;
      while ( !prev || prev->inProcessing )
      {
        prev = v32->prev;
        v32 = prev;
      }
      s_gfxCachedSunShadowListHead = v32;
      *outValidEntryCount = v31 - 1;
      prev->gridX = v15->gridX;
      prev->gridY = v15->gridY;
      prev->gridSize = v15->gridSize;
      prev->cachedLODRefDistance = v15->cachedLODRefDistance;
      prev->sunShadowLightDir.v[0] = v15->sunShadowLightDir.v[0];
      prev->sunShadowLightDir.v[1] = v15->sunShadowLightDir.v[1];
      prev->sunShadowLightDir.v[2] = v15->sunShadowLightDir.v[2];
      cachedSunShadowIndex = prev->cachedSunShadowIndex;
      prev->nearClip = v15->nearClip;
      prev->farClip = v15->farClip;
      v56 = (GfxViewInfo *)0x40000000300i64;
      v57 = 1536;
      v58 = 2048;
      sunShadowLightDir_8a.width = *((_DWORD *)&v56 + (int)rg.shadowMapResolutionIndex) >> 1;
      sunShadowLightDir_8a.height = sunShadowLightDir_8a.width;
      sunShadowLightDir_8a.x = sunShadowLightDir_8a.width * (cachedSunShadowIndex & 7);
      *(_DWORD *)&prev->bspOnly = 1;
      sunShadowLightDir_8a.y = sunShadowLightDir_8a.width * (cachedSunShadowIndex >> 3);
      prev->viewport = sunShadowLightDir_8a;
      prev->needEviction = 0;
      *(_WORD *)&prev->allocated = 1;
      prev->refreshQueued = 0;
      prev->partitionIndex = partitionIndex;
      *(_QWORD *)&prev->updateFrameIndex = 0i64;
      *(_QWORD *)&prev->terrainUpdateFrameIndex = 0i64;
      *(_QWORD *)&prev->smodelUpdateCount = 0i64;
      *(_QWORD *)&prev->genVis = 0i64;
      *(_QWORD *)&prev->genSmodel = 0i64;
      *(_QWORD *)&prev->smodelCount = 0i64;
      prev->missingTransient[1] = 0;
    }
    else
    {
      prev = NULL;
    }
  }
  v34 = partitionIndex - data->sunShadow.firstCachedSunShadowPartition;
  gfxCachedSunShadowOverlapCount = data->sunShadow.partitionCache[v34].gfxCachedSunShadowOverlapCount;
  data->sunShadow.partitionCache[v34].gfxCachedSunShadowOverlapCount = gfxCachedSunShadowOverlapCount + 1;
  if ( (unsigned int)gfxCachedSunShadowOverlapCount >= 0xA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 744, ASSERT_TYPE_ASSERT, "(cellIndex < ( 9 + 1 ))", (const char *)&queryFormat, "cellIndex < CACHED_SUN_SHADOW_CELL_MAX_OVERLAP") )
    __debugbreak();
  v36 = v34 * 8656 + 864 * gfxCachedSunShadowOverlapCount;
  *(GfxCachedSunShadow **)((char *)&data->sunShadow.partitionCache[0].gfxCachedSunShadowOverlap[0].staticEntry + v36) = v15;
  *(GfxCachedSunShadow **)((char *)&data->sunShadow.partitionCache[0].gfxCachedSunShadowOverlap[0].bspEntry + v36) = prev;
  if ( data == (GfxBackEndData *)-927488i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 368, ASSERT_TYPE_ASSERT, "(sunShadow)", (const char *)&queryFormat, "sunShadow") )
    __debugbreak();
  if ( !R_IsCachedSunShadowPartition(&data->sunShadow, partitionIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 369, ASSERT_TYPE_ASSERT, "(R_IsCachedSunShadowPartition( sunShadow, partitionIndex ))", (const char *)&queryFormat, "R_IsCachedSunShadowPartition( sunShadow, partitionIndex )") )
    __debugbreak();
  *(GfxSceneViewType *)((char *)&data->sunShadow.partitionCache[0].gfxCachedSunShadowOverlap[0].sceneViewType + v36) = gfxCachedSunShadowOverlapCount + 10 * (partitionIndex - data->sunShadow.firstCachedSunShadowPartition) + 12;
  CachedDrawListIndexForSunShadowPartition = R_GetCachedDrawListIndexForSunShadowPartition(&data->sunShadow, partitionIndex);
  v38 = v51;
  *(GfxDrawListType *)((char *)&data->sunShadow.partitionCache[0].gfxCachedSunShadowOverlap[0].drawListIndex + v36) = gfxCachedSunShadowOverlapCount + CachedDrawListIndexForSunShadowPartition;
  v39 = v51 && allowRendering;
  lastUpdateTimestamp = 0;
  *(&data->sunShadow.partitionCache[0].gfxCachedSunShadowOverlap[0].gen + v36) = v39;
  *(unsigned __int64 *)((char *)&data->sunShadow.partitionCache[0].gfxCachedSunShadowOverlap[0].updateExtentsMask + v36) = 0i64;
  *(_WORD *)(&data->sunShadow.partitionCache[0].gfxCachedSunShadowOverlap[0].newTerrainSurfs + v36) = 0;
  *(float *)((char *)&data->sunShadow.partitionCache[0].gfxCachedSunShadowOverlap[0].x + v36) = (float)((float)gridX * v22) - (float)x0;
  *(float *)((char *)&data->sunShadow.partitionCache[0].gfxCachedSunShadowOverlap[0].y + v36) = v21 - (float)((float)((float)((float)gridY * v22) - (float)y0) + v22);
  *(float *)((char *)&data->sunShadow.partitionCache[0].gfxCachedSunShadowOverlap[0].w + v36) = v22;
  *(float *)((char *)&data->sunShadow.partitionCache[0].gfxCachedSunShadowOverlap[0].h + v36) = v22;
  if ( !v15 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 764, ASSERT_TYPE_ASSERT, "(staticEntry)", (const char *)&queryFormat, "staticEntry") )
      __debugbreak();
    v38 = v51;
  }
  p_viewParms = &v15->viewParms;
  *(float *)((char *)&data->sunShadow.partitionCache[0].gfxCachedSunShadowOverlap[0].staticEntryData.nearClip + v36) = v15->nearClip;
  v42 = 3i64;
  *(float *)((char *)&data->sunShadow.partitionCache[0].gfxCachedSunShadowOverlap[0].staticEntryData.farClip + v36) = v15->farClip;
  v43 = (vec4_t *)((char *)data->sunShadow.partitionCache[0].gfxCachedSunShadowOverlap[0].staticEntryData.viewParms.viewMatrix.m.m + v36);
  do
  {
    v43 += 8;
    v44 = p_viewParms->viewMatrix.m.m[0];
    p_viewParms = (GfxViewParms *)((char *)p_viewParms + 128);
    v43[-8] = v44;
    v43[-7] = *(vec4_t *)&p_viewParms[-1].camera.axis.row0.y;
    v43[-6] = *(vec4_t *)&p_viewParms[-1].camera.axis.row1.z;
    v43[-5] = *(vec4_t *)&p_viewParms[-1].camera.tanHalfFovX;
    v43[-4] = *(vec4_t *)p_viewParms[-1].camera.zPlanes;
    v43[-3] = *(vec4_t *)&p_viewParms[-1].camera.focalLength;
    v43[-2] = *(vec4_t *)&p_viewParms[-1].camera.visibilityQueryDistance;
    v43[-1] = *(vec4_t *)&p_viewParms[-1].cameraMotion;
    --v42;
  }
  while ( v42 );
  if ( prev )
  {
    v45 = &prev->viewParms;
    *(float *)((char *)&data->sunShadow.partitionCache[0].gfxCachedSunShadowOverlap[0].bspEntryData.nearClip + v36) = prev->nearClip;
    *(float *)((char *)&data->sunShadow.partitionCache[0].gfxCachedSunShadowOverlap[0].bspEntryData.farClip + v36) = prev->farClip;
    v46 = (vec4_t *)((char *)data->sunShadow.partitionCache[0].gfxCachedSunShadowOverlap[0].bspEntryData.viewParms.viewMatrix.m.m + v36);
    do
    {
      v46 += 8;
      v47 = v45->viewMatrix.m.m[0];
      v45 = (GfxViewParms *)((char *)v45 + 128);
      v46[-8] = v47;
      v46[-7] = *(vec4_t *)&v45[-1].camera.axis.row0.y;
      v46[-6] = *(vec4_t *)&v45[-1].camera.axis.row1.z;
      v46[-5] = *(vec4_t *)&v45[-1].camera.tanHalfFovX;
      v46[-4] = *(vec4_t *)v45[-1].camera.zPlanes;
      v46[-3] = *(vec4_t *)&v45[-1].camera.focalLength;
      v46[-2] = *(vec4_t *)&v45[-1].camera.visibilityQueryDistance;
      v46[-1] = *(vec4_t *)&v45[-1].cameraMotion;
      --v28;
    }
    while ( v28 );
  }
  v48 = *(__int64 *)((char *)&data->sunShadow.partitionCache[0].gfxCachedSunShadowOverlap[0].staticEntry + v36);
  if ( *(_BYTE *)(v48 + 497) )
  {
    if ( (*(&data->sunShadow.partitionCache[0].gfxCachedSunShadowOverlap[0].gen + v36) || allowRendering) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 785, ASSERT_TYPE_ASSERT, "(!sunShadowOverlap->gen && !allowRendering)", (const char *)&queryFormat, "!sunShadowOverlap->gen && !allowRendering") )
      __debugbreak();
    *(&data->sunShadow.partitionCache[0].gfxCachedSunShadowOverlap[0].skipUpdate + v36) = 0;
  }
  else
  {
    if ( allowRendering )
    {
      if ( v38 || !*(_BYTE *)(v48 + 3) )
      {
        v49 = 0;
        *(&data->sunShadow.partitionCache[0].gfxCachedSunShadowOverlap[0].skipUpdate + v36) = 0;
      }
      else
      {
        v49 = 1;
        *(&data->sunShadow.partitionCache[0].gfxCachedSunShadowOverlap[0].skipUpdate + v36) = 1;
      }
    }
    else
    {
      *(&data->sunShadow.partitionCache[0].gfxCachedSunShadowOverlap[0].skipUpdate + v36) = 1;
      *(_BYTE *)(v48 + 497) = v38;
      v49 = *(&data->sunShadow.partitionCache[0].gfxCachedSunShadowOverlap[0].skipUpdate + v36);
    }
    if ( v49 )
      lastUpdateTimestamp = v15->lastUpdateTimestamp;
  }
  v15->lastUpdateTimestamp = lastUpdateTimestamp;
  v15->inProcessing = 1;
  if ( prev )
    prev->inProcessing = 1;
  *(volatile int *)((char *)&data->sunShadow.partitionCache[0].gfxCachedSunShadowOverlap[0].inProcessingCount + v36) = 2;
}

/*
==============
R_AddSunShadowClipPlanesForBoundingArc
==============
*/
void R_AddSunShadowClipPlanesForBoundingArc(const vec3_t *viewOrg, const GfxSunShadowProjectionSetup *projSetup, const GfxSunShadowFrustumRays *frustumRays, const GfxSunShadowMapMetrics *mapMetrics, GfxSunShadowClip *clip, GfxSunShadow *sunShadow)
{
  __int64 v7; 
  float v8; 
  __int128 v9; 
  unsigned int v10; 
  __int128 v11; 
  float v15; 
  float v16; 
  __int64 v17; 
  GfxSunShadowClip *v19; 
  signed __int64 v20; 
  __int64 v22; 
  float *v; 
  float v24; 
  float v25; 
  float v26; 
  __int64 cameraPlaneCount; 
  __int64 v28; 
  float v29; 
  unsigned int v30; 
  GfxSunShadowClip *v31; 
  __int64 v32; 
  __int64 v33; 
  float v34; 
  __int128 v35; 
  __int128 v36; 
  float v40; 
  float v41; 
  float v42; 
  __int64 v43; 
  float *v44; 
  float v45; 
  float v46; 
  float v47; 
  __int64 v48; 
  __int64 v49; 
  float v50; 
  vec4_t v53; 
  vec4_t v54; 

  v7 = frustumRays->boundingArcRay[0];
  v8 = frustumRays->shadowRays[v7].v[1];
  v9 = LODWORD(frustumRays->shadowRays[v7].v[0]);
  v10 = 0;
  v11 = v9;
  *(float *)&v11 = fsqrt((float)(*(float *)&v9 * *(float *)&v9) + (float)(v8 * v8));
  _XMM2 = v11;
  __asm
  {
    vcmpless xmm0, xmm2, cs:__real@80000000
    vblendvps xmm0, xmm2, xmm10, xmm0
  }
  v15 = *(float *)&v9 * (float)(1.0 / *(float *)&_XMM0);
  *(float *)&v11 = v8 * (float)(1.0 / *(float *)&_XMM0);
  v16 = (float)((float)(COERCE_FLOAT(v11 & _xmm) + COERCE_FLOAT(LODWORD(v15) & _xmm)) * projSetup->sampleSize[0]) * 0.5;
  v53.v[1] = (float)(COERCE_FLOAT(v11 ^ _xmm) * projSetup->sunAxis.m[0].v[1]) + (float)(v15 * projSetup->sunAxis.m[1].v[1]);
  LODWORD(v53.v[3]) = COERCE_UNSIGNED_INT((float)((float)((float)((float)(v15 * projSetup->sunAxis.m[1].v[0]) + (float)(COERCE_FLOAT(v11 ^ _xmm) * projSetup->sunAxis.m[0].v[0])) * viewOrg->v[0]) + (float)(v53.v[1] * viewOrg->v[1])) + (float)((float)((float)(v15 * projSetup->sunAxis.m[1].v[2]) + (float)(COERCE_FLOAT(v11 ^ _xmm) * projSetup->sunAxis.m[0].v[2])) * viewOrg->v[2])) ^ _xmm;
  v53.v[0] = (float)(v15 * projSetup->sunAxis.m[1].v[0]) + (float)(COERCE_FLOAT(v11 ^ _xmm) * projSetup->sunAxis.m[0].v[0]);
  v53.v[2] = (float)(v15 * projSetup->sunAxis.m[1].v[2]) + (float)(COERCE_FLOAT(v11 ^ _xmm) * projSetup->sunAxis.m[0].v[2]);
  v17 = 0i64;
  v19 = clip;
  v20 = (char *)mapMetrics - (char *)clip;
  __asm { vxorpd  xmm11, xmm11, xmm11 }
  do
  {
    v22 = v19->planeCount[0];
    v = clip->planes[0][v22 + v17].coeffs.v;
    v19->planeCount[0] = v22 + 1;
    *(vec4_t *)v = v53;
    v24 = (float)*(unsigned int *)((char *)&v19->planeCount[1] + v20);
    v25 = (float)(v24 * v16) + v[3];
    v[3] = v25;
    v26 = (float)((float)((float)(v[1] * viewOrg->v[1]) + (float)(*v * viewOrg->v[0])) + (float)(v[2] * viewOrg->v[2])) + v25;
    if ( v26 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 1430, ASSERT_TYPE_ASSERT, "( R_DpvsPlaneDistToPoint( planeDst, viewOrg ) ) > ( 0.0f )", "%s > %s\n\t%g, %g", "R_DpvsPlaneDistToPoint( planeDst, viewOrg )", "0.0f", v26, *(double *)&_XMM11) )
      __debugbreak();
    if ( v10 == 1 )
    {
      cameraPlaneCount = sunShadow->cameraPlaneCount;
      v28 = cameraPlaneCount + 1237;
      sunShadow->cameraPlaneCount = cameraPlaneCount + 1;
      sunShadow->lookupMatrix.m.m[v28] = v53;
      v29 = (float)*(unsigned int *)((char *)&v19->planeCount[1] + v20);
      sunShadow->lookupMatrix.m.m[v28].v[3] = (float)(v29 * v16) + sunShadow->cameraPlanes[cameraPlaneCount].coeffs.v[3];
    }
    ++v10;
    v17 += 9i64;
    v19 = (GfxSunShadowClip *)((char *)v19 + 4);
  }
  while ( v10 < 4 );
  v30 = 0;
  v31 = clip;
  v32 = 0i64;
  v33 = frustumRays->boundingArcRay[1];
  v34 = frustumRays->shadowRays[v33].v[1];
  v35 = LODWORD(frustumRays->shadowRays[v33].v[0]);
  v36 = v35;
  *(float *)&v36 = fsqrt((float)(*(float *)&v35 * *(float *)&v35) + (float)(v34 * v34));
  _XMM2 = v36;
  __asm
  {
    vcmpless xmm0, xmm2, cs:__real@80000000
    vblendvps xmm0, xmm2, xmm10, xmm0
  }
  v40 = (float)(1.0 / *(float *)&_XMM0) * v34;
  LODWORD(v41) = COERCE_UNSIGNED_INT((float)(1.0 / *(float *)&_XMM0) * *(float *)&v35) ^ _xmm;
  v42 = (float)((float)(COERCE_FLOAT(LODWORD(v40) & _xmm) + COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(1.0 / *(float *)&_XMM0) * *(float *)&v35) & _xmm)) * projSetup->sampleSize[0]) * 0.5;
  LODWORD(v54.v[3]) = COERCE_UNSIGNED_INT((float)((float)((float)((float)(v40 * projSetup->sunAxis.m[0].v[1]) + (float)(v41 * projSetup->sunAxis.m[1].v[1])) * viewOrg->v[1]) + (float)((float)((float)(v41 * projSetup->sunAxis.m[1].v[0]) + (float)(v40 * projSetup->sunAxis.m[0].v[0])) * viewOrg->v[0])) + (float)((float)((float)(v40 * projSetup->sunAxis.m[0].v[2]) + (float)(v41 * projSetup->sunAxis.m[1].v[2])) * viewOrg->v[2])) ^ _xmm;
  v54.v[0] = (float)(v41 * projSetup->sunAxis.m[1].v[0]) + (float)(v40 * projSetup->sunAxis.m[0].v[0]);
  v54.v[1] = (float)(v40 * projSetup->sunAxis.m[0].v[1]) + (float)(v41 * projSetup->sunAxis.m[1].v[1]);
  v54.v[2] = (float)(v40 * projSetup->sunAxis.m[0].v[2]) + (float)(v41 * projSetup->sunAxis.m[1].v[2]);
  do
  {
    v43 = v31->planeCount[0];
    v44 = clip->planes[0][v43 + v32].coeffs.v;
    v31->planeCount[0] = v43 + 1;
    *(vec4_t *)v44 = v54;
    v45 = (float)*(unsigned int *)((char *)&v31->planeCount[1] + v20);
    v46 = (float)(v45 * v42) + v44[3];
    v44[3] = v46;
    v47 = (float)((float)((float)(v44[1] * viewOrg->v[1]) + (float)(*v44 * viewOrg->v[0])) + (float)(v44[2] * viewOrg->v[2])) + v46;
    if ( v47 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 1457, ASSERT_TYPE_ASSERT, "( R_DpvsPlaneDistToPoint( planeDst, viewOrg ) ) > ( 0.0f )", "%s > %s\n\t%g, %g", "R_DpvsPlaneDistToPoint( planeDst, viewOrg )", "0.0f", v47, *(double *)&_XMM11) )
      __debugbreak();
    if ( v30 == 1 )
    {
      v48 = sunShadow->cameraPlaneCount;
      v49 = v48 + 1237;
      sunShadow->cameraPlaneCount = v48 + 1;
      sunShadow->lookupMatrix.m.m[v49] = v54;
      v50 = (float)*(unsigned int *)((char *)&v31->planeCount[1] + v20);
      sunShadow->lookupMatrix.m.m[v49].v[3] = (float)(v50 * v42) + sunShadow->lookupMatrix.m.m[v49].v[3];
    }
    ++v30;
    v32 += 9i64;
    v31 = (GfxSunShadowClip *)((char *)v31 + 4);
  }
  while ( v30 < 4 );
}

/*
==============
R_AddSunShadowClipPlanesForMapBoundary
==============
*/
void R_AddSunShadowClipPlanesForMapBoundary(const GfxSunShadowProjectionSetup *projSetup, const GfxSunShadowFrustumRays *frustumRays, const GfxSunShadowMapMetrics *mapMetrics, unsigned int partitionIndex, GfxSunShadowClip *clip, GfxSunShadow *sunShadow)
{
  float v6; 
  const GfxSunShadowProjectionSetup *v7; 
  float v8; 
  __int64 v9; 
  __int64 v10; 
  bool v11; 
  bool v12; 
  float size; 
  float v14; 
  float v15; 
  BOOL v16; 
  vec2_t *v17; 
  unsigned int v18; 
  int v19; 
  float v20; 
  unsigned int v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  __m256i v25; 
  __int64 v26; 
  unsigned int v27; 
  unsigned int v28; 
  __int64 v29; 
  float v30; 
  DpvsPlane v31; 
  DpvsPlane v32; 
  DpvsPlane v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  const DpvsPlane *v40; 
  __int64 v41; 
  float v42; 
  float *v; 
  float v44; 
  float v45; 
  DpvsPlane *v46; 
  DpvsPlane v47; 
  __int64 edgeHalfSize; 
  __int64 edgeHalfSizea; 
  __int64 v50; 
  __int64 v51; 
  BOOL v52; 
  vec3_t edgeMidPoint; 
  __m256i v55; 
  __m256i v56; 

  v6 = frustumRays->maxs.v[1] - frustumRays->mins.v[1];
  v7 = projSetup;
  v8 = frustumRays->maxs.v[0] - frustumRays->mins.v[0];
  v9 = 0i64;
  v10 = partitionIndex;
  *(_QWORD *)edgeMidPoint.v = sunShadow;
  v11 = v8 < v6;
  v12 = v8 == v6;
  size = (float)mapMetrics->size;
  v14 = size * projSetup->sampleSize[partitionIndex];
  v15 = v14 * 0.5;
  v16 = !v11 && !v12;
  v52 = v16;
  v17 = &v7->shadowOrgPixelCenter[partitionIndex];
  v18 = 0;
  while ( 1 )
  {
    v19 = v16 ^ v18;
    if ( (v16 ^ v18) >= 2 )
    {
      LODWORD(v50) = 2;
      LODWORD(edgeHalfSize) = v16 ^ v18;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 16, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", edgeHalfSize, v50) )
        __debugbreak();
      LODWORD(v51) = 2;
      LODWORD(edgeHalfSizea) = v19;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 16, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", edgeHalfSizea, v51) )
        __debugbreak();
    }
    v20 = (float)(v17->v[v19] * v7->sampleSize[v10]) - v7->snappedShadowOrg[v10].v[v19];
    v21 = ((v15 <= v20) + 2 * v18) ^ 1;
    v22 = 2i64 * ((v15 <= v20) + 2 * v18);
    if ( (unsigned int)v19 >= 3 )
    {
      LODWORD(v50) = 3;
      LODWORD(edgeHalfSize) = v19;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", edgeHalfSize, v50) )
        __debugbreak();
    }
    ++v18;
    v55.m256i_i32[2 * v22] = LODWORD(projSetup->sunAxis.m[v19].v[0]);
    v55.m256i_i32[2 * v22 + 1] = LODWORD(projSetup->sunAxis.m[v19].v[1]);
    v16 = v52;
    v55.m256i_i32[2 * v22 + 2] = LODWORD(projSetup->sunAxis.m[v19].v[2]);
    *(float *)&v55.m256i_i32[2 * v22 + 3] = v20;
    v23 = v21;
    v17 = &projSetup->shadowOrgPixelCenter[v10];
    v23 *= 2i64;
    *(float *)&v55.m256i_i32[2 * v23] = COERCE_FLOAT(v55.m256i_i32[2 * v22] ^ _xmm);
    *(float *)&v55.m256i_i32[2 * v23 + 1] = COERCE_FLOAT(v55.m256i_i32[2 * v22 + 1] ^ _xmm);
    *(float *)&v55.m256i_i32[2 * v23 + 2] = COERCE_FLOAT(v55.m256i_i32[2 * v22 + 2] ^ _xmm);
    *(float *)&v55.m256i_i32[2 * v23 + 3] = v14 + COERCE_FLOAT(v55.m256i_i32[2 * v22 + 3] ^ _xmm);
    if ( v18 >= 2 )
      break;
    v7 = projSetup;
  }
  v24 = *(_QWORD *)edgeMidPoint.v;
  v25 = v56;
  v26 = 544 * v10;
  v27 = clip->planeCount[v10];
  *(__m256i *)(v26 + *(_QWORD *)edgeMidPoint.v + 760) = v55;
  *(__m256i *)(v26 + v24 + 792) = v25;
  if ( v27 + 4 > 9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 1569, ASSERT_TYPE_ASSERT, "( clip->planeCount[partitionIndex] + 4 ) <= ( ( sizeof( *array_counter( clip->planes[partitionIndex] ) ) + 0 ) )", "%s <= %s\n\t%i, %i", "clip->planeCount[partitionIndex] + 4", "ARRAY_COUNT( clip->planes[partitionIndex] )", v27 + 4, 9) )
    __debugbreak();
  v28 = 0;
  if ( v27 )
  {
    v29 = 9 * v10;
    while ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(projSetup->sunAxis.m[2].v[1] * clip->planes[0][v28 + v29].coeffs.v[1]) + (float)(projSetup->sunAxis.m[2].v[0] * clip->planes[0][v28 + v29].coeffs.v[0])) + (float)(projSetup->sunAxis.m[2].v[2] * clip->planes[0][v28 + v29].coeffs.v[2])) & _xmm) >= 0.001 )
    {
      if ( ++v28 == v27 )
        goto LABEL_19;
    }
    v34 = projSetup->sampleSize[v10];
    v35 = (float)(v15 - (float)(v34 * projSetup->shadowOrgPixelCenter[v10].v[0])) + projSetup->snappedShadowOrg[v10].v[0];
    v36 = (float)(v15 - (float)(v34 * projSetup->shadowOrgPixelCenter[v10].v[1])) + projSetup->snappedShadowOrg[v10].v[1];
    v37 = (float)(v35 * projSetup->sunAxis.m[0].v[0]) + (float)(v36 * projSetup->sunAxis.m[1].v[0]);
    v38 = (float)(v35 * projSetup->sunAxis.m[0].v[1]) + (float)(v36 * projSetup->sunAxis.m[1].v[1]);
    v39 = (float)(v35 * projSetup->sunAxis.m[0].v[2]) + (float)(v36 * projSetup->sunAxis.m[1].v[2]);
    v40 = clip->planes[v10];
    v41 = 4i64;
    LODWORD(v42) = LODWORD(v15) ^ _xmm;
    v = (float *)&v55;
    do
    {
      v44 = v42 * v[1];
      edgeMidPoint.v[0] = (float)(v42 * *v) + v37;
      v45 = v42 * v[2];
      edgeMidPoint.v[1] = v44 + v38;
      edgeMidPoint.v[2] = v45 + v39;
      if ( !R_CullSunShadowClipPlane(v40, v28, v27, &edgeMidPoint, (const vec3_t *)((char *)&v55 + 16 * (v9 ^ 2)), v15) )
      {
        clip->planes[0][clip->planeCount[v10]++ + v29] = *v46;
        v40 = clip->planes[v10];
      }
      ++v9;
      v = v46[1].coeffs.v;
      --v41;
    }
    while ( v41 );
  }
  else
  {
LABEL_19:
    v30 = *(float *)&v55.m256i_i32[3];
    clip->planeCount[v10] = v27 + 4;
    if ( v30 >= *(float *)&v56.m256i_i32[3] )
    {
      v47 = *(DpvsPlane *)&v56.m256i_u64[2];
      clip->planes[v10][v27] = *(DpvsPlane *)v56.m256i_i8;
      v32 = *(DpvsPlane *)v55.m256i_i8;
      clip->planes[v10][v27 + 1] = v47;
      v33 = *(DpvsPlane *)&v55.m256i_u64[2];
    }
    else
    {
      v31 = *(DpvsPlane *)&v55.m256i_u64[2];
      clip->planes[v10][v27] = *(DpvsPlane *)v55.m256i_i8;
      v32 = *(DpvsPlane *)v56.m256i_i8;
      clip->planes[v10][v27 + 1] = v31;
      v33 = *(DpvsPlane *)&v56.m256i_u64[2];
    }
    clip->planes[v10][v27 + 3] = v33;
    clip->planes[v10][v27 + 2] = v32;
  }
}

/*
==============
R_BuildCachedSunShadowOverlap
==============
*/
void R_BuildCachedSunShadowOverlap(GfxViewInfo *viewInfo, GfxBackEndData *data, const GfxSunShadow *sunShadow, const GfxSunShadowProjectionSetup *projSetup, const GfxSunShadowMapMetrics *mapMetrics)
{
  GfxViewInfo *v5; 
  const GfxSunShadowProjectionSetup *v6; 
  GfxBackEndData *v8; 
  unsigned int firstCachedSunShadowPartition; 
  unsigned int lastCachedSunShadowPartition; 
  unsigned int v11; 
  GfxCachedSunShadow *v12; 
  __int64 v13; 
  float v14; 
  float v15; 
  int v18; 
  signed int v19; 
  int v22; 
  int v23; 
  int v24; 
  bool v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v33; 
  int v35; 
  int v36; 
  int v37; 
  float farClip; 
  double v39; 
  GfxCachedSunShadow **p_next; 
  int v41; 
  __int64 v42; 
  __int16 v43; 
  bool v44; 
  GfxCachedSunShadow *prev; 
  GfxCachedSunShadow *v46; 
  unsigned int firstSmodelId; 
  unsigned int firstStNodeId; 
  int v49; 
  int v50; 
  int v51; 
  __int64 v52; 
  unsigned int v53; 
  float size; 
  float v55; 
  float v56; 
  __int64 v57; 
  float v58; 
  int v59; 
  __int64 v60; 
  int v61; 
  __int128 v63; 
  float v64; 
  float v65; 
  float v66; 
  float v68; 
  float v69; 
  __int64 v70; 
  int v71; 
  int v72; 
  int v73; 
  int v74; 
  GfxCachedSunShadow *v75; 
  unsigned int v76; 
  GfxViewInfo *v77; 
  __int64 v78; 
  GfxBackEndData *v79; 
  int y0; 
  float x0; 
  __int64 v82; 
  int minAllocRemaining; 
  __int64 v84; 
  GfxCachedSunShadow **v85; 
  __int64 v86; 
  unsigned int v87; 
  unsigned int v88; 
  unsigned int v89; 
  __int64 *v90; 
  unsigned int v91; 
  GfxCachedSunShadow **v92; 
  int v93; 
  bool allowRendering; 
  const dvar_t *v95; 
  const dvar_t *v96; 
  float v97; 
  float v98; 
  int v99; 
  GfxBackEndData *v100; 
  int v101; 
  int v102; 
  float nearClip; 
  float v104; 
  int v105; 
  int v106; 
  int v107; 
  GfxCachedSunShadow *v108; 
  GfxCachedSunShadow *v109; 
  GfxCachedSunShadow *next; 
  GfxCachedSunShadow *v111; 
  int v112; 
  int v113; 
  int v114; 
  GfxCachedSunShadow *v115; 
  GfxCachedSunShadow *v116; 
  GfxCachedSunShadow *v117; 
  GfxCachedSunShadow *v118; 
  unsigned int partitionIndex; 
  int v120; 
  int maxY; 
  int gridX; 
  int maxX; 
  float v124; 
  float outFarClip; 
  unsigned int v126; 
  GfxBackEndData *dataa; 
  GfxViewInfo *v128; 
  int outValidEntryCount; 
  int v130; 
  float threshold; 
  const GfxSunShadowProjectionSetup *v132; 
  int v133; 
  int gridY; 
  float outNearClip; 
  float gridSize; 
  int v137; 
  float cachedLODRefDistance; 
  unsigned int v139; 
  int useCachedSunShadow; 
  __int64 v141; 
  float sampleSize; 
  base_vec2_t<int> outPreCacheDir; 
  base_vec2_t<int> outPreCacheEdge; 
  const GfxSunShadowMapMetrics *v145; 
  GfxSunShadow *sunShadowa; 
  vec3_t sunShadowLightDir; 
  int v148; 
  int v149[26]; 
  __int64 v150[10]; 
  __int64 v151[20]; 

  v5 = viewInfo;
  v145 = mapMetrics;
  v6 = projSetup;
  v128 = viewInfo;
  v8 = data;
  *(_QWORD *)sunShadowLightDir.v = 0x40000000300i64;
  LODWORD(sunShadowLightDir.v[2]) = 1536;
  v148 = 2048;
  cachedLODRefDistance = sunShadowLightDir.v[rg.shadowMapResolutionIndex];
  v132 = projSetup;
  sunShadowa = (GfxSunShadow *)sunShadow;
  dataa = data;
  R_ProcessWorldTransientRefreshQueued();
  R_ProcessWorldTransientRefreshAddPending();
  useCachedSunShadow = v5->useCachedSunShadow;
  if ( (unsigned int)(useCachedSunShadow - 2) <= 1 )
    R_ForceRefreshCachedSunShadowData();
  firstCachedSunShadowPartition = sunShadow->firstCachedSunShadowPartition;
  lastCachedSunShadowPartition = sunShadow->lastCachedSunShadowPartition;
  v11 = firstCachedSunShadowPartition;
  v126 = firstCachedSunShadowPartition;
  v139 = lastCachedSunShadowPartition;
  partitionIndex = firstCachedSunShadowPartition;
  if ( firstCachedSunShadowPartition <= lastCachedSunShadowPartition )
  {
    v12 = s_gfxCachedSunShadowListHead;
    do
    {
      v13 = v11 - firstCachedSunShadowPartition;
      v8->sunShadow.partitionCache[v13].gfxCachedSunShadowOverlapCount = 0;
      if ( (*((_DWORD *)&v5->viewportFeatures + 11) & 0x20000) == 0 || !v8->activePrimarySunLight )
        goto LABEL_173;
      v149[0] = 768;
      v149[1] = 1024;
      v149[2] = 1536;
      v14 = v6->sampleSize[v11];
      v15 = 1.0 / v14;
      _XMM0 = 0i64;
      __asm { vroundss xmm0, xmm0, xmm1, 1 }
      v18 = (int)*(float *)&_XMM0;
      v149[3] = 2048;
      v19 = (unsigned int)v149[rg.shadowMapResolutionIndex] >> 1;
      LODWORD(sampleSize) = v19;
      v141 = v11;
      LODWORD(threshold) = v18;
      _XMM0 = 0i64;
      __asm { vroundss xmm0, xmm0, xmm1, 1 }
      v22 = (int)*(float *)&_XMM0;
      v130 = (int)*(float *)&_XMM0;
      if ( v18 < 0 )
        v23 = -((v19 - v18 - 1) / v19);
      else
        v23 = v18 / v19;
      gridX = v23;
      if ( v22 < 0 )
        v24 = -((v19 - v22 - 1) / v19);
      else
        v24 = v22 / v19;
      v25 = LODWORD(cachedLODRefDistance) + v18 < 0;
      v26 = LODWORD(cachedLODRefDistance) + v18;
      gridY = v24;
      if ( v25 )
        v27 = -((v19 - v26 - 1) / v19);
      else
        v27 = v26 / v19;
      v28 = v22 + LODWORD(cachedLODRefDistance);
      maxX = v27;
      if ( v22 + LODWORD(cachedLODRefDistance) < 0 )
        v29 = -((v19 - v28 - 1) / v19);
      else
        v29 = v28 / v19;
      _XMM1 = 0i64;
      __asm { vroundss xmm1, xmm1, xmm2, 1 }
      _XMM0 = 0i64;
      v33 = (int)*(float *)&_XMM1;
      maxY = v29;
      __asm { vroundss xmm0, xmm0, xmm3, 1 }
      v35 = (int)*(float *)&_XMM0;
      if ( (int)*(float *)&_XMM1 < 0 )
        v36 = -((v19 - v33 - 1) / v19);
      else
        v36 = v33 / v19;
      if ( v35 < 0 )
        v37 = -((v19 - v35 - 1) / v19);
      else
        v37 = v35 / v19;
      farClip = dataa->sunShadow.farClip;
      outNearClip = dataa->sunShadow.nearClip;
      v39 = *(double *)dataa->sunShadow.lightDir.v;
      sunShadowLightDir.v[2] = dataa->sunShadow.lightDir.v[2];
      gridSize = farClip;
      *(double *)sunShadowLightDir.v = v39;
      v120 = (v27 - v23 + 1) * (v29 - v24 + 1);
      if ( v120 > 10 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 1045, ASSERT_TYPE_ASSERT, "(minAllocCount <= ( 9 + 1 ))", (const char *)&queryFormat, "minAllocCount <= CACHED_SUN_SHADOW_CELL_MAX_OVERLAP") )
          __debugbreak();
        v12 = s_gfxCachedSunShadowListHead;
      }
      p_next = &s_gfxCachedSunShadowStore[0].next;
      v41 = 0;
      v42 = 64i64;
      do
      {
        v43 = -2;
        if ( (unsigned int)*((unsigned __int16 *)p_next - 50) + 1 < 0xFFFE )
          v43 = *((_WORD *)p_next - 50) + 1;
        v44 = *((_BYTE *)p_next - 599) == 0;
        *((_WORD *)p_next - 50) = v43;
        if ( !v44 )
        {
          prev = v12->prev;
          v46 = (GfxCachedSunShadow *)(p_next - 75);
          if ( p_next - 75 != (GfxCachedSunShadow **)prev )
          {
            (*(p_next - 1))->next = *p_next;
            (*p_next)->prev = *(p_next - 1);
            *(p_next - 1) = prev;
            *p_next = prev->next;
            prev->next = v46;
            (*p_next)->prev = v46;
          }
          firstSmodelId = prev->firstSmodelId;
          if ( firstSmodelId != -1 )
          {
            s_smodelsAllocation.m_numAllocated -= (unsigned __int16)(prev->lastSmodelId - firstSmodelId + 1);
            *(_QWORD *)&prev->firstSmodelId = -1i64;
          }
          firstStNodeId = prev->firstStNodeId;
          if ( firstStNodeId != -1 )
          {
            s_terrainAllocation.m_numAllocated -= ((unsigned __int16)prev->lastStNodeId - (_WORD)firstStNodeId + 1) & 0x1FFF;
            *(_QWORD *)&prev->firstStNodeId = -1i64;
          }
          *((_WORD *)p_next - 50) = -2;
        }
        if ( *((unsigned __int16 *)p_next - 278) == partitionIndex && !*((_BYTE *)p_next - 599) )
        {
          v49 = *((_DWORD *)p_next - 143);
          if ( v49 >= v36 - 2 && v49 <= v36 + 2 )
          {
            v50 = *((_DWORD *)p_next - 142);
            if ( v50 >= v37 - 2 && v50 <= v37 + 2 )
            {
              R_ReferenceSunShadowCacheEntry((GfxCachedSunShadow *)(p_next - 75));
              v12 = s_gfxCachedSunShadowListHead;
            }
          }
        }
        v51 = v41 + 1;
        if ( *((_BYTE *)p_next - 600) )
          v51 = v41;
        p_next += 76;
        v41 = v51;
        --v42;
      }
      while ( v42 );
      v52 = v141;
      outValidEntryCount = v51;
      if ( v51 < v120 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 1059, ASSERT_TYPE_ASSERT, "(validEntryCount >= minAllocCount)", (const char *)&queryFormat, "validEntryCount >= minAllocCount") )
          __debugbreak();
        v12 = s_gfxCachedSunShadowListHead;
      }
      v53 = partitionIndex;
      size = (float)v145->size;
      v55 = (float)v19 * v14;
      if ( partitionIndex )
        v56 = size * v132->snappedShadowOrg[3].v[partitionIndex + 1];
      else
        v56 = 0.0;
      v57 = 0i64;
      v58 = size * v132->sampleSize[v52];
      v59 = gridY;
      v60 = 0i64;
      v61 = maxY;
      v63 = LODWORD(FLOAT_1_0);
      *(float *)&v63 = 1.0 - sm_cachedSunShadowLODBias->current.value;
      _XMM0 = v63;
      v64 = sunShadowLightDir.v[2];
      v65 = sunShadowLightDir.v[1];
      v66 = sunShadowLightDir.v[0];
      __asm { vmaxss  xmm0, xmm0, xmm15 }
      v69 = (float)(*(float *)&_XMM0 * v56) + (float)(v58 * sm_cachedSunShadowLODBias->current.value);
      v68 = v69;
      dataa->sunShadow.partitionCache[v13].cachedLODRefDistance = v69;
      v70 = 0i64;
      v137 = 0;
      v133 = 0;
      if ( v59 <= maxY )
      {
        v71 = gridX;
        v72 = maxX;
        do
        {
          v73 = v71;
          if ( v71 <= v72 )
          {
            v74 = useCachedSunShadow;
            do
            {
              if ( rg.useCompressedSunShadowClipPlanes )
              {
                R_CompressedSunShadow_GetCacheEntryClipPlanes(sunShadowa, v73, v59, v14, &outNearClip, &gridSize);
                v53 = partitionIndex;
                v72 = maxX;
                v12 = s_gfxCachedSunShadowListHead;
              }
              v75 = v12;
              while ( v75->gridX != v73 || v75->gridY != v59 || v55 != v75->gridSize || v69 != v75->cachedLODRefDistance || v66 != v75->sunShadowLightDir.v[0] || v65 != v75->sunShadowLightDir.v[1] || v64 != v75->sunShadowLightDir.v[2] || outNearClip != v75->nearClip || gridSize != v75->farClip || v75->bspOnly || v75->partitionIndex != v53 || v75->inProcessing )
              {
                v75 = v75->next;
                if ( v75 == v12 )
                  goto LABEL_77;
              }
              R_ReferenceSunShadowCacheEntry(v75);
              v12 = s_gfxCachedSunShadowListHead;
              if ( v74 == 2 )
              {
LABEL_77:
                v149[v70 + 14] = v73;
                v149[v70 + 4] = v59;
                v70 = (unsigned int)(v70 + 1);
                goto LABEL_78;
              }
              if ( *(_BYTE *)(v84 + 497) )
              {
                v151[v60] = v84;
                v60 = (unsigned int)(v60 + 1);
              }
              else
              {
                v150[v57] = v84;
                v57 = (unsigned int)(v57 + 1);
              }
LABEL_78:
              v53 = partitionIndex;
              ++v73;
            }
            while ( v73 <= v72 );
            v61 = maxY;
            v71 = gridX;
            v133 = v57;
            v137 = v60;
          }
          ++v59;
        }
        while ( v59 <= v61 );
      }
      v76 = 0;
      if ( (_DWORD)v70 )
      {
        v77 = v128;
        v78 = 0i64;
        v79 = dataa;
        y0 = v130;
        x0 = threshold;
        v82 = (unsigned int)v70;
        LODWORD(v141) = v70;
        minAllocRemaining = v120;
        do
        {
          R_AddCachedSunShadowOverlap(v79, v53, &sunShadowLightDir, v149[v78 + 14], v149[v78 + 4], v55, v14, v69, SLODWORD(x0), y0, v77, &outValidEntryCount, --minAllocRemaining, 1, NULL);
          v53 = partitionIndex;
          ++v78;
          --v82;
        }
        while ( v82 );
        v64 = sunShadowLightDir.v[2];
        v65 = sunShadowLightDir.v[1];
        v66 = sunShadowLightDir.v[0];
        v12 = s_gfxCachedSunShadowListHead;
        v76 = v141;
        LODWORD(v60) = v137;
        LODWORD(v57) = v133;
        v120 = minAllocRemaining;
      }
      else
      {
        minAllocRemaining = v120;
      }
      if ( (_DWORD)v60 )
      {
        v85 = (GfxCachedSunShadow **)v151;
        v86 = (unsigned int)v60;
        do
        {
          R_AddCachedSunShadowOverlap(dataa, partitionIndex, &sunShadowLightDir, (*v85)->gridX, (*v85)->gridY, v55, v14, v69, SLODWORD(threshold), v130, v128, &outValidEntryCount, --minAllocRemaining, v76++ < v128->cachedSunShadowMaxTilesPerFrame, *v85);
          ++v85;
          --v86;
        }
        while ( v86 );
        v64 = sunShadowLightDir.v[2];
        v65 = sunShadowLightDir.v[1];
        v66 = sunShadowLightDir.v[0];
        v12 = s_gfxCachedSunShadowListHead;
        LODWORD(v57) = v133;
        v120 = minAllocRemaining;
      }
      v87 = 0;
      v88 = v57 + 1;
      v89 = 0;
      if ( (_DWORD)v57 )
      {
        v90 = v150;
        do
        {
          if ( *(unsigned __int16 *)(*v90 + 500) > v87 && !*(_BYTE *)(*v90 + 3) )
          {
            v88 = v89;
            v87 = *(unsigned __int16 *)(*v90 + 500);
          }
          ++v89;
          ++v90;
        }
        while ( v89 < (unsigned int)v57 );
      }
      v91 = 0;
      if ( (_DWORD)v57 )
      {
        v92 = (GfxCachedSunShadow **)v150;
        do
        {
          v93 = --v120;
          allowRendering = v91 == v88 && v76 < v128->cachedSunShadowMaxTilesPerFrame;
          R_AddCachedSunShadowOverlap(dataa, partitionIndex, &sunShadowLightDir, (*v92)->gridX, (*v92)->gridY, v55, v14, v69, SLODWORD(threshold), v130, v128, &outValidEntryCount, v93, allowRendering, *v92);
          ++v91;
          v76 += allowRendering;
          ++v92;
        }
        while ( v91 < (unsigned int)v57 );
        v64 = sunShadowLightDir.v[2];
        v65 = sunShadowLightDir.v[1];
        v66 = sunShadowLightDir.v[0];
        v12 = s_gfxCachedSunShadowListHead;
      }
      v5 = v128;
      if ( v76 >= v128->cachedSunShadowMaxTilesPerFrame )
      {
        v11 = partitionIndex;
        v8 = dataa;
        goto LABEL_172;
      }
      v95 = DVARBOOL_r_sunshadow_preCacheEnabled;
      if ( !DVARBOOL_r_sunshadow_preCacheEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_sunshadow_preCacheEnabled") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v95);
      if ( v95->current.enabled )
      {
        v11 = partitionIndex;
        v96 = DCONST_DVARFLT_r_sunshadow_preCacheThreshold;
        v97 = (float)((float)(v15 * v132->snappedShadowOrg[partitionIndex].v[0]) + 0.5) - v132->shadowOrgPixelCenter[partitionIndex].v[0];
        v98 = (float)((float)(v15 * v132->snappedShadowOrg[partitionIndex].v[1]) + 0.5) - v132->shadowOrgPixelCenter[partitionIndex].v[1];
        if ( !DCONST_DVARFLT_r_sunshadow_preCacheThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_sunshadow_preCacheThreshold") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v96);
        v99 = gridY;
        if ( R_ComputeSunShadowPreCacheEdges(v97, v98, gridX, gridY, maxX, maxY, SLODWORD(sampleSize), LODWORD(cachedLODRefDistance), v96->current.value, &outPreCacheDir, &outPreCacheEdge) )
        {
          v100 = dataa;
          v101 = outPreCacheEdge.v[1];
          v102 = outPreCacheDir.v[1];
          nearClip = dataa->sunShadow.nearClip;
          v104 = dataa->sunShadow.farClip;
          v124 = nearClip;
          outFarClip = v104;
          if ( outPreCacheDir.v[0] )
          {
            if ( outPreCacheDir.v[1] == -1 )
            {
              v99 = outPreCacheEdge.v[1];
              goto LABEL_120;
            }
            if ( outPreCacheDir.v[1] == 1 )
            {
              v105 = outPreCacheEdge.v[1];
              maxY = outPreCacheEdge.v[1];
            }
            else
            {
LABEL_120:
              v105 = maxY;
            }
            if ( v99 <= v105 )
            {
              v106 = outPreCacheEdge.v[0];
              v12 = s_gfxCachedSunShadowListHead;
LABEL_123:
              v107 = v99;
              if ( rg.useCompressedSunShadowClipPlanes )
              {
                R_CompressedSunShadow_GetCacheEntryClipPlanes(&v100->sunShadow, v106, v99, v14, &v124, &outFarClip);
                nearClip = v124;
                v104 = outFarClip;
                v105 = maxY;
                v12 = s_gfxCachedSunShadowListHead;
              }
              v108 = v12;
              do
              {
                if ( v108->gridX == v106 && v108->gridY == v99 && v55 == v108->gridSize && v68 == v108->cachedLODRefDistance && v66 == v108->sunShadowLightDir.v[0] && v65 == v108->sunShadowLightDir.v[1] && v64 == v108->sunShadowLightDir.v[2] && nearClip == v108->nearClip && v104 == v108->farClip && !v108->bspOnly && v108->partitionIndex == partitionIndex && !v108->inProcessing )
                {
                  if ( v108 != v12 )
                  {
                    v109 = v108->prev;
                    next = v108->next;
                    s_gfxCachedSunShadowListHead = v108;
                    v109->next = next;
                    v108->next->prev = v108->prev;
                    v108->next = v12;
                    v111 = v12->prev;
                    v12 = v108;
                    v108->prev = v111;
                    v111->next = v108;
                    v108->next->prev = v108;
                    nearClip = v124;
                    v104 = outFarClip;
                  }
                  ++v99;
                  if ( v107 >= v105 )
                  {
                    v11 = partitionIndex;
                    goto LABEL_146;
                  }
                  goto LABEL_123;
                }
                v108 = v108->next;
              }
              while ( v108 != v12 );
              v11 = partitionIndex;
LABEL_165:
              v8 = v100;
              R_AddCachedSunShadowOverlap(v100, v11, &sunShadowLightDir, v106, v99, v55, v14, v68, SLODWORD(threshold), v130, v128, &outValidEntryCount, v120, 1, NULL);
              v12 = s_gfxCachedSunShadowListHead;
              goto LABEL_171;
            }
          }
          v12 = s_gfxCachedSunShadowListHead;
LABEL_146:
          if ( v102 )
          {
            v112 = gridX;
            v113 = maxX;
            if ( gridX <= maxX )
            {
              do
              {
                v114 = v112;
                if ( rg.useCompressedSunShadowClipPlanes )
                {
                  R_CompressedSunShadow_GetCacheEntryClipPlanes(&v100->sunShadow, v112, v101, v14, &v124, &outFarClip);
                  nearClip = v124;
                  v104 = outFarClip;
                  v112 = gridX;
                  v113 = maxX;
                  v12 = s_gfxCachedSunShadowListHead;
                }
                v115 = v12;
                while ( v115->gridX != v112 || v115->gridY != v101 || v55 != v115->gridSize || v68 != v115->cachedLODRefDistance || v66 != v115->sunShadowLightDir.v[0] || v65 != v115->sunShadowLightDir.v[1] || v64 != v115->sunShadowLightDir.v[2] || nearClip != v115->nearClip || v104 != v115->farClip || v115->bspOnly || v115->partitionIndex != v11 || v115->inProcessing )
                {
                  v115 = v115->next;
                  if ( v115 == v12 )
                  {
                    v106 = v112;
                    v99 = v101;
                    goto LABEL_165;
                  }
                }
                if ( v115 != v12 )
                {
                  v116 = v115->prev;
                  v117 = v115->next;
                  s_gfxCachedSunShadowListHead = v115;
                  v116->next = v117;
                  v115->next->prev = v115->prev;
                  v115->next = v12;
                  v118 = v12->prev;
                  v12 = v115;
                  v115->prev = v118;
                  v118->next = v115;
                  v115->next->prev = v115;
                  nearClip = v124;
                  v104 = outFarClip;
                }
                gridX = ++v112;
              }
              while ( v114 < v113 );
            }
          }
          v8 = v100;
          goto LABEL_171;
        }
      }
      else
      {
        v11 = partitionIndex;
      }
      v12 = s_gfxCachedSunShadowListHead;
      v8 = dataa;
LABEL_171:
      v5 = v128;
LABEL_172:
      firstCachedSunShadowPartition = v126;
      v6 = v132;
LABEL_173:
      partitionIndex = ++v11;
    }
    while ( v11 <= v139 );
  }
}

/*
==============
R_ComputeSunShadowPreCacheEdges
==============
*/
bool R_ComputeSunShadowPreCacheEdges(const float x0, const float y0, const int minX, const int minY, const int maxX, const int maxY, const int cellSize, const unsigned int sunShadowMapSize, const float threshold, base_vec2_t<int> *outPreCacheDir, base_vec2_t<int> *outPreCacheEdge)
{
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 

  v13 = 1.0 / _mm_cvtepi32_ps((__m128i)(unsigned int)cellSize).m128_f32[0];
  v14 = (float)(v13 * x0) - _mm_cvtepi32_ps((__m128i)(unsigned int)minX).m128_f32[0];
  v15 = (float)(v13 * y0) - _mm_cvtepi32_ps((__m128i)(unsigned int)minY).m128_f32[0];
  v16 = (float)sunShadowMapSize;
  v17 = (float)(_mm_cvtepi32_ps((__m128i)(unsigned int)maxX).m128_f32[0] + 1.0) - (float)((float)(v16 + x0) * v13);
  v18 = (float)(_mm_cvtepi32_ps((__m128i)(unsigned int)maxY).m128_f32[0] + 1.0) - (float)((float)(v16 + y0) * v13);
  if ( v14 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 837, ASSERT_TYPE_ASSERT, "(distX0 >= 0)", (const char *)&queryFormat, "distX0 >= 0") )
    __debugbreak();
  if ( v15 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 838, ASSERT_TYPE_ASSERT, "(distY0 >= 0)", (const char *)&queryFormat, "distY0 >= 0") )
    __debugbreak();
  if ( v17 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 839, ASSERT_TYPE_ASSERT, "(distX1 >= 0)", (const char *)&queryFormat, "distX1 >= 0") )
    __debugbreak();
  if ( v18 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 840, ASSERT_TYPE_ASSERT, "(distY1 >= 0)", (const char *)&queryFormat, "distY1 >= 0") )
    __debugbreak();
  if ( v14 >= threshold )
  {
    if ( v17 >= threshold )
    {
      outPreCacheDir->v[0] = 0;
    }
    else
    {
      outPreCacheDir->v[0] = 1;
      outPreCacheEdge->v[0] = maxX + 1;
    }
  }
  else
  {
    outPreCacheDir->v[0] = -1;
    outPreCacheEdge->v[0] = minX - 1;
  }
  if ( v15 >= threshold )
  {
    if ( v18 >= threshold )
    {
      outPreCacheDir->v[1] = 0;
    }
    else
    {
      outPreCacheDir->v[1] = 1;
      outPreCacheEdge->v[1] = maxY + 1;
    }
  }
  else
  {
    outPreCacheDir->v[1] = -1;
    outPreCacheEdge->v[1] = minY - 1;
  }
  return outPreCacheDir->v[0] || outPreCacheDir->v[1];
}

/*
==============
R_CullSunShadowClipPlane
==============
*/
bool R_CullSunShadowClipPlane(const DpvsPlane *clipPlanes, unsigned int clipPlaneBegin, unsigned int clipPlaneEnd, const vec3_t *edgeMidPoint, const vec3_t *edgeDir, float edgeHalfSize)
{
  float v6; 
  float v7; 
  float v8; 
  __int128 v9; 
  float v10; 
  float v11; 
  __int128 v12; 
  __int128 v13; 
  float v14; 
  float v15; 
  __int128 v16; 
  __int128 v17; 
  float v18; 
  float i; 
  const DpvsPlane *v20; 
  __int128 v21; 
  __int128 v22; 
  bool v23; 
  float v24; 
  __int128 v25; 
  __int128 v26; 

  v6 = edgeHalfSize * edgeDir->v[0];
  v7 = edgeHalfSize * edgeDir->v[1];
  v8 = edgeHalfSize * edgeDir->v[2];
  v9 = LODWORD(edgeMidPoint->v[0]);
  v10 = edgeMidPoint->v[1];
  v11 = edgeMidPoint->v[2];
  v13 = v9;
  *(float *)&v13 = *(float *)&v9 - v6;
  v12 = v13;
  v14 = v10 - v7;
  v15 = v11 - v8;
  v17 = v9;
  *(float *)&v17 = *(float *)&v9 + v6;
  v16 = v17;
  v18 = v10 + v7;
  for ( i = v11 + v8; clipPlaneBegin != clipPlaneEnd; ++clipPlaneBegin )
  {
    v20 = &clipPlanes[clipPlaneBegin];
    v21 = v12;
    *(float *)&v21 = (float)((float)((float)(*(float *)&v12 * v20->coeffs.v[0]) + (float)(v14 * v20->coeffs.v[1])) + (float)(v15 * v20->coeffs.v[2])) + v20->coeffs.v[3];
    v22 = v21;
    v23 = *(float *)&v21 <= 0.0;
    v25 = v16;
    *(float *)&v25 = (float)((float)((float)(*(float *)&v16 * v20->coeffs.v[0]) + (float)(v18 * v20->coeffs.v[1])) + (float)(i * v20->coeffs.v[2])) + v20->coeffs.v[3];
    v24 = *(float *)&v25;
    if ( v23 )
    {
      if ( *(float *)&v25 <= 0.0 )
        return 1;
      *(float *)&v25 = (float)((float)(*(float *)&v25 * *(float *)&v12) - (float)(*(float *)&v22 * *(float *)&v16)) / (float)(*(float *)&v25 - *(float *)&v22);
      v12 = v25;
      v14 = (float)((float)(v24 * v14) - (float)(v18 * *(float *)&v22)) / (float)(v24 - *(float *)&v22);
      v15 = (float)((float)(v24 * v15) - (float)(i * *(float *)&v22)) / (float)(v24 - *(float *)&v22);
    }
    else if ( *(float *)&v25 <= 0.0 )
    {
      v26 = v22;
      *(float *)&v26 = (float)((float)(*(float *)&v22 * *(float *)&v16) - (float)(v24 * *(float *)&v12)) / (float)(*(float *)&v22 - v24);
      v16 = v26;
      v18 = (float)((float)(*(float *)&v22 * v18) - (float)(v14 * v24)) / (float)(*(float *)&v22 - v24);
      i = (float)((float)(*(float *)&v22 * i) - (float)(v15 * v24)) / (float)(*(float *)&v22 - v24);
    }
  }
  return (float)((float)((float)((float)(v18 - v14) * (float)(v18 - v14)) + (float)((float)(*(float *)&v16 - *(float *)&v12) * (float)(*(float *)&v16 - *(float *)&v12))) + (float)((float)(i - v15) * (float)(i - v15))) < (float)((float)(edgeHalfSize * edgeHalfSize) * 0.00039999999);
}

/*
==============
R_FindSunShadowCacheEntry
==============
*/
GfxCachedSunShadow *R_FindSunShadowCacheEntry(const unsigned int partitionIndex, const vec3_t *sunShadowLightDir, const float nearClip, const float farClip, const int gridX, const int gridY, const float gridSize, const float cachedLODRefDistance, GfxSunShadowCachePolicy cachePolicy)
{
  GfxCachedSunShadow *v10; 

  v10 = s_gfxCachedSunShadowListHead;
  while ( v10->gridX != gridX || v10->gridY != gridY || gridSize != v10->gridSize || cachedLODRefDistance != v10->cachedLODRefDistance || sunShadowLightDir->v[0] != v10->sunShadowLightDir.v[0] || sunShadowLightDir->v[1] != v10->sunShadowLightDir.v[1] || sunShadowLightDir->v[2] != v10->sunShadowLightDir.v[2] || nearClip != v10->nearClip || farClip != v10->farClip || v10->bspOnly != (cachePolicy & 1) || v10->partitionIndex != partitionIndex || v10->inProcessing )
  {
    v10 = v10->next;
    if ( v10 == s_gfxCachedSunShadowListHead )
      return 0i64;
  }
  if ( (cachePolicy & 2) != 0 )
    R_ReferenceSunShadowCacheEntry(v10);
  return v10;
}

/*
==============
R_ForceRefreshCachedSunShadowData
==============
*/
void R_ForceRefreshCachedSunShadowData(void)
{
  *(_WORD *)&s_gfxCachedSunShadowStore[0].refreshPending = 1;
  s_gfxCachedSunShadowListHead = s_gfxCachedSunShadowStore;
  *(_WORD *)&s_gfxCachedSunShadowStore[1].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[2].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[3].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[4].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[5].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[6].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[7].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[8].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[9].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[10].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[11].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[12].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[13].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[14].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[15].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[16].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[17].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[18].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[19].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[20].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[21].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[22].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[23].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[24].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[25].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[26].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[27].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[28].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[29].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[30].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[31].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[32].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[33].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[34].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[35].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[36].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[37].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[38].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[39].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[40].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[41].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[42].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[43].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[44].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[45].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[46].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[47].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[48].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[49].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[50].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[51].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[52].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[53].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[54].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[55].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[56].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[57].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[58].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[59].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[60].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[61].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[62].refreshPending = 1;
  *(_WORD *)&s_gfxCachedSunShadowStore[63].refreshPending = 1;
}

/*
==============
R_GetCachedSunShadowParititionHead
==============
*/
GfxCachedSunShadow *R_GetCachedSunShadowParititionHead()
{
  return s_gfxCachedSunShadowListHead;
}

/*
==============
R_GetFrustumCornerRays
==============
*/
void R_GetFrustumCornerRays(const GfxCamera *camera, vec3_t (*cornerRays)[4])
{
  float v2; 
  float v3; 
  float tanHalfFovY; 
  float v5; 
  float v6; 
  float v7; 
  unsigned __int128 v8; 
  float v9; 
  float v10; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float tanHalfFovX; 
  float v20; 
  float v21; 
  float v22; 
  __int128 v23; 
  float v27; 
  __int128 v28; 
  float v32; 
  float v33; 
  __int128 v34; 
  float v38; 
  float v39; 

  LODWORD(v39) = LODWORD(camera->tanHalfFovX) ^ _xmm;
  v2 = camera->axis.m[1].v[0];
  v38 = (float)(v39 * v2) + camera->axis.m[0].v[0];
  v3 = camera->axis.m[1].v[1];
  tanHalfFovY = camera->tanHalfFovY;
  v5 = tanHalfFovY * camera->axis.m[2].v[0];
  v6 = tanHalfFovY * camera->axis.m[2].v[1];
  v7 = tanHalfFovY * camera->axis.m[2].v[2];
  v8 = LODWORD(camera->tanHalfFovX) ^ (unsigned __int128)_xmm;
  v9 = (float)((float)(v39 * v3) + camera->axis.m[0].v[1]) + v6;
  v10 = (float)((float)(v39 * camera->axis.m[1].v[2]) + camera->axis.m[0].v[2]) + v7;
  *(float *)&v8 = fsqrt((float)((float)(v9 * v9) + (float)((float)(v5 + v38) * (float)(v5 + v38))) + (float)(v10 * v10));
  _XMM4 = v8;
  __asm
  {
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm1, xmm0
  }
  (*cornerRays)[0].v[0] = (float)(v5 + v38) * (float)(1.0 / *(float *)&_XMM0);
  (*cornerRays)[0].v[2] = v10 * (float)(1.0 / *(float *)&_XMM0);
  v14 = (float)(v2 * camera->tanHalfFovX) + camera->axis.m[0].v[0];
  v15 = camera->axis.m[0].v[2];
  v16 = v9 * (float)(1.0 / *(float *)&_XMM0);
  v17 = COERCE_FLOAT(LODWORD(tanHalfFovY) ^ _xmm) * camera->axis.m[2].v[0];
  (*cornerRays)[0].v[1] = v16;
  v18 = v5 + v14;
  tanHalfFovX = camera->tanHalfFovX;
  (*cornerRays)[1].v[0] = v18;
  v20 = (float)((float)(v3 * tanHalfFovX) + camera->axis.m[0].v[1]) + v6;
  v21 = camera->axis.m[1].v[2];
  (*cornerRays)[1].v[1] = v20;
  v22 = (float)((float)(v21 * tanHalfFovX) + v15) + v7;
  (*cornerRays)[1].v[2] = v22;
  *(float *)&_XMM4 = (*cornerRays)[1].v[0];
  v23 = LODWORD((*cornerRays)[1].v[1]);
  *(float *)&v23 = fsqrt((float)((float)((*cornerRays)[1].v[1] * (*cornerRays)[1].v[1]) + (float)(*(float *)&_XMM4 * *(float *)&_XMM4)) + (float)(v22 * v22));
  _XMM3 = v23;
  __asm
  {
    vcmpless xmm0, xmm3, xmm8
    vblendvps xmm0, xmm3, xmm1, xmm0
  }
  (*cornerRays)[1].v[0] = *(float *)&_XMM4 * (float)(1.0 / *(float *)&_XMM0);
  (*cornerRays)[1].v[1] = (float)(1.0 / *(float *)&_XMM0) * (*cornerRays)[1].v[1];
  (*cornerRays)[1].v[2] = (float)(1.0 / *(float *)&_XMM0) * (*cornerRays)[1].v[2];
  v27 = (float)(tanHalfFovX * v3) + camera->axis.m[0].v[1];
  (*cornerRays)[2].v[0] = v17 + v14;
  (*cornerRays)[2].v[1] = v27 + (float)(COERCE_FLOAT(LODWORD(tanHalfFovY) ^ _xmm) * camera->axis.m[2].v[1]);
  *(float *)&_XMM3 = (float)((float)(tanHalfFovX * v21) + v15) + (float)(COERCE_FLOAT(LODWORD(tanHalfFovY) ^ _xmm) * camera->axis.m[2].v[2]);
  (*cornerRays)[2].v[2] = *(float *)&_XMM3;
  *(float *)&_XMM4 = (*cornerRays)[2].v[0];
  v28 = LODWORD((*cornerRays)[2].v[1]);
  *(float *)&v28 = fsqrt((float)((float)((*cornerRays)[2].v[1] * (*cornerRays)[2].v[1]) + (float)(*(float *)&_XMM4 * *(float *)&_XMM4)) + (float)(*(float *)&_XMM3 * *(float *)&_XMM3));
  _XMM3 = v28;
  __asm
  {
    vcmpless xmm0, xmm3, xmm8
    vblendvps xmm0, xmm3, xmm10, xmm0
  }
  (*cornerRays)[2].v[0] = *(float *)&_XMM4 * (float)(1.0 / *(float *)&_XMM0);
  (*cornerRays)[2].v[1] = (float)(1.0 / *(float *)&_XMM0) * (*cornerRays)[2].v[1];
  v32 = (float)(v3 * v39) + camera->axis.m[0].v[1];
  (*cornerRays)[2].v[2] = (float)(1.0 / *(float *)&_XMM0) * (*cornerRays)[2].v[2];
  (*cornerRays)[3].v[0] = v17 + v38;
  *(float *)&_XMM0 = COERCE_FLOAT(LODWORD(tanHalfFovY) ^ _xmm) * camera->axis.m[2].v[2];
  (*cornerRays)[3].v[1] = v32 + (float)(COERCE_FLOAT(LODWORD(tanHalfFovY) ^ _xmm) * camera->axis.m[2].v[1]);
  *(float *)&_XMM4 = (float)((float)(v21 * v39) + v15) + *(float *)&_XMM0;
  (*cornerRays)[3].v[2] = *(float *)&_XMM4;
  v33 = (*cornerRays)[3].v[0];
  v34 = LODWORD((*cornerRays)[3].v[1]);
  *(float *)&v34 = fsqrt((float)((float)((*cornerRays)[3].v[1] * (*cornerRays)[3].v[1]) + (float)(v33 * v33)) + (float)(*(float *)&_XMM4 * *(float *)&_XMM4));
  _XMM3 = v34;
  __asm
  {
    vcmpless xmm0, xmm3, xmm8
    vblendvps xmm0, xmm3, xmm10, xmm0
  }
  (*cornerRays)[3].v[0] = v33 * (float)(1.0 / *(float *)&_XMM0);
  (*cornerRays)[3].v[1] = (float)(1.0 / *(float *)&_XMM0) * (*cornerRays)[3].v[1];
  (*cornerRays)[3].v[2] = (float)(1.0 / *(float *)&_XMM0) * (*cornerRays)[3].v[2];
}

/*
==============
R_GetSunAxes
==============
*/
void R_GetSunAxes(const vec3_t *sunShadowLightDir, tmat33_t<vec3_t> *sunAxis)
{
  __int128 v10; 
  __int128 v11; 
  float v15; 

  _XMM1 = LODWORD(FLOAT_0_89999998);
  sunAxis->m[2] = *sunShadowLightDir;
  _XMM6 = LODWORD(FLOAT_1_0);
  __asm { vcmpltss xmm0, xmm1, xmm3 }
  _XMM2 = 0i64;
  __asm { vblendvps xmm0, xmm6, xmm2, xmm0 }
  v15 = *(float *)&_XMM0;
  __asm
  {
    vcmpltss xmm0, xmm1, xmm3
    vblendvps xmm0, xmm2, xmm6, xmm0
  }
  sunAxis->m[1].v[0] = *(float *)&_XMM0;
  sunAxis->m[1].v[1] = 0.0;
  sunAxis->m[1].v[2] = v15;
  Vec3Cross(&sunAxis->m[1], &sunAxis->m[2], sunAxis->m);
  v10 = LODWORD(sunAxis->m[0].v[0]);
  v11 = v10;
  *(float *)&v11 = fsqrt((float)((float)(*(float *)&v10 * *(float *)&v10) + (float)(sunAxis->m[0].v[1] * sunAxis->m[0].v[1])) + (float)(sunAxis->m[0].v[2] * sunAxis->m[0].v[2]));
  _XMM4 = v11;
  __asm
  {
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm6, xmm0
  }
  sunAxis->m[0].v[0] = *(float *)&v10 * (float)(1.0 / *(float *)&_XMM0);
  sunAxis->m[0].v[1] = (float)(1.0 / *(float *)&_XMM0) * sunAxis->m[0].v[1];
  sunAxis->m[0].v[2] = (float)(1.0 / *(float *)&_XMM0) * sunAxis->m[0].v[2];
  Vec3Cross(&sunAxis->m[2], sunAxis->m, &sunAxis->m[1]);
}

/*
==============
R_GetSunShadowMapOverlayLines
==============
*/
void R_GetSunShadowMapOverlayLines(const GfxBackEndData *data, const GfxSunShadow *sunShadow, GfxSunShadowOverlayLines *overlay)
{
  GfxSunShadowOverlaySetup *p_overlaySetup; 
  GfxSunShadowOverlayLines *v4; 
  vec3_t (*clipPlanes)[8]; 
  vec2_t (*points)[9]; 
  signed __int64 v7; 
  float *v8; 
  __int64 v9; 
  float *v10; 
  float v11; 
  float v12; 
  float v13; 
  unsigned int v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  vec2_t *frustumShadowRays; 
  vec2_t *v24; 
  vec2_t *v25; 
  vec2_t *v26; 
  vec2_t clipOrg; 

  frustumShadowRays = sunShadow->overlaySetup.frustumShadowRays;
  v24 = &sunShadow->overlaySetup.frustumShadowRays[1];
  v25 = &sunShadow->overlaySetup.frustumShadowRays[2];
  v26 = &sunShadow->overlaySetup.frustumShadowRays[3];
  p_overlaySetup = &sunShadow->overlaySetup;
  v4 = overlay;
  clipPlanes = sunShadow->overlaySetup.clipPlanes;
  points = overlay->borderPoints;
  v7 = (char *)sunShadow - (char *)overlay;
  v8 = &sunShadow->partition[0].viewParms.projectionMatrix.m.m[3].v[1];
  v9 = 3i64;
  v10 = (float *)&overlay->frustumLines[0][2][1] + 1;
  do
  {
    v11 = *(v8 - 13);
    v12 = (float)(v11 * *(v8 - 17)) + *(v8 - 1);
    v14 = *(_DWORD *)((char *)&v4[47].borderPoints[2][8].v[1] + v7);
    clipOrg.v[1] = (float)(v11 * *(v8 - 16)) + *v8;
    v13 = clipOrg.v[1];
    clipOrg.v[0] = v12;
    v4->borderPointCount[0] = R_GetSunShadowOverlayBorderPoly((const vec3_t *)clipPlanes, v14, &clipOrg, v11, (vec2_t *)points);
    v15 = p_overlaySetup->shadowOrg.v[1];
    v16 = frustumShadowRays->v[1];
    *(v10 - 11) = (float)((float)((float)((float)(1.0 / v11) * frustumShadowRays->v[0]) + p_overlaySetup->shadowOrg.v[0]) * v11) + v12;
    *(v10 - 10) = (float)((float)((float)((float)(1.0 / v11) * v16) + v15) * v11) + v13;
    *(v10 - 9) = (float)(v11 * p_overlaySetup->shadowOrg.v[0]) + v12;
    *(v10 - 8) = (float)(v11 * p_overlaySetup->shadowOrg.v[1]) + v13;
    v17 = v24->v[1];
    v18 = p_overlaySetup->shadowOrg.v[1];
    *(v10 - 7) = (float)((float)((float)((float)(1.0 / v11) * v24->v[0]) + p_overlaySetup->shadowOrg.v[0]) * v11) + v12;
    *(v10 - 6) = (float)((float)((float)((float)(1.0 / v11) * v17) + v18) * v11) + v13;
    *(v10 - 5) = (float)(v11 * p_overlaySetup->shadowOrg.v[0]) + v12;
    *(v10 - 4) = (float)(v11 * p_overlaySetup->shadowOrg.v[1]) + v13;
    v19 = v25->v[1];
    v20 = p_overlaySetup->shadowOrg.v[1];
    *(v10 - 3) = (float)((float)((float)((float)(1.0 / v11) * v25->v[0]) + p_overlaySetup->shadowOrg.v[0]) * v11) + v12;
    *(v10 - 2) = (float)((float)((float)((float)(1.0 / v11) * v19) + v20) * v11) + v13;
    *(v10 - 1) = (float)(v11 * p_overlaySetup->shadowOrg.v[0]) + v12;
    *v10 = (float)(v11 * p_overlaySetup->shadowOrg.v[1]) + v13;
    v21 = v26->v[1];
    v22 = p_overlaySetup->shadowOrg.v[1];
    v10[1] = (float)((float)((float)((float)(1.0 / v11) * v26->v[0]) + p_overlaySetup->shadowOrg.v[0]) * v11) + v12;
    v10[2] = (float)((float)((float)((float)(1.0 / v11) * v21) + v22) * v11) + v13;
    v10[3] = (float)(v11 * p_overlaySetup->shadowOrg.v[0]) + v12;
    ++points;
    ++clipPlanes;
    v10[4] = (float)(v11 * p_overlaySetup->shadowOrg.v[1]) + v13;
    v10 += 16;
    v8 += 136;
    v4 = (GfxSunShadowOverlayLines *)((char *)v4 + 4);
    --v9;
  }
  while ( v9 );
}

/*
==============
R_GetSunShadowOverlayBorderPoly
==============
*/
__int64 R_GetSunShadowOverlayBorderPoly(const vec3_t *planes, unsigned int planeCount, const vec2_t *clipOrg, float clipScale, vec2_t *points)
{
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  __int128 v11; 
  __int128 v12; 
  __int64 v13; 
  unsigned int v16; 
  unsigned int v17; 
  float *v18; 
  __int64 v19; 
  float v20; 
  float v21; 
  __int64 v22; 
  float *v23; 
  float v24; 
  float v25; 
  float v26; 
  int v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  unsigned int v32; 
  unsigned int v33; 
  float *v34; 
  unsigned int v35; 
  __int64 v36; 
  float v37; 
  vec2_t *v38; 
  __int64 v39; 
  float v40; 
  vec2_t v42[36]; 
  __int128 v43; 
  __int128 v44; 
  __int128 v45; 
  __int128 v46; 
  __int128 v47; 
  __int128 v48; 
  __int128 v49; 
  __int128 v50; 

  v13 = 0i64;
  v16 = 0;
  if ( planeCount == 1 )
    return 0i64;
  v17 = 1;
  v18 = &planes->v[2];
  v50 = v5;
  v49 = v6;
  v48 = v7;
  v47 = v8;
  v46 = v9;
  v45 = v10;
  v44 = v11;
  v43 = v12;
  v19 = planeCount - 1;
  do
  {
    if ( v17 < planeCount )
    {
      v20 = *(v18 - 2);
      v21 = *(v18 - 1);
      v22 = planeCount - v17;
      v23 = &planes[v17].v[2];
      do
      {
        v24 = *(v23 - 2);
        v25 = *(v23 - 1);
        v26 = (float)(v20 * v25) - (float)(v21 * v24);
        if ( COERCE_FLOAT(LODWORD(v26) & _xmm) >= 0.001 )
        {
          v27 = 0;
          v28 = v20 * *v23;
          v29 = v24 * *v18;
          v30 = 1.0 / v26;
          v42[v16].v[0] = (float)((float)(v25 * *v18) - (float)(v21 * *v23)) * v30;
          v31 = (float)(v28 - v29) * v30;
          v42[v16].v[1] = v31;
          if ( planeCount )
          {
            while ( (float)((float)((float)(v31 * planes[v27].v[1]) + (float)(v42[v16].v[0] * planes[v27].v[0])) - planes[v27].v[2]) >= -0.1 )
            {
              if ( ++v27 >= planeCount )
                goto LABEL_9;
            }
          }
          else
          {
LABEL_9:
            ++v16;
          }
        }
        v23 += 3;
        --v22;
      }
      while ( v22 );
    }
    ++v17;
    v18 += 3;
    --v19;
  }
  while ( v19 );
  if ( v16 < 3 )
    return 0i64;
  v32 = Com_ConvexHull(v42, v16, points);
  v33 = v32;
  if ( v32 > 9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 2234, ASSERT_TYPE_ASSERT, "( hullPtCount ) <= ( R_SUNSHADOW_CLIP_PLANE_LIMIT )", "%s <= %s\n\t%i, %i", "hullPtCount", "R_SUNSHADOW_CLIP_PLANE_LIMIT", v32, 9) )
    __debugbreak();
  if ( v33 >= 4 )
  {
    v34 = (float *)&points[2] + 1;
    v35 = ((v33 - 4) >> 2) + 1;
    v36 = v35;
    v13 = 4 * v35;
    do
    {
      v37 = clipScale * *(v34 - 5);
      v34 += 8;
      *(v34 - 13) = v37 + clipOrg->v[0];
      *(v34 - 12) = (float)(clipScale * *(v34 - 12)) + clipOrg->v[1];
      *(v34 - 11) = (float)(clipScale * *(v34 - 11)) + clipOrg->v[0];
      *(v34 - 10) = (float)(clipScale * *(v34 - 10)) + clipOrg->v[1];
      *(v34 - 9) = (float)(clipScale * *(v34 - 9)) + clipOrg->v[0];
      *(v34 - 8) = (float)(clipScale * *(v34 - 8)) + clipOrg->v[1];
      *(v34 - 7) = (float)(clipScale * *(v34 - 7)) + clipOrg->v[0];
      *(v34 - 6) = (float)(clipScale * *(v34 - 6)) + clipOrg->v[1];
      --v36;
    }
    while ( v36 );
  }
  if ( (unsigned int)v13 < v33 )
  {
    v38 = &points[v13];
    v39 = v33 - (unsigned int)v13;
    do
    {
      v40 = clipScale * v38->v[0];
      ++v38;
      v38[-1].v[0] = v40 + clipOrg->v[0];
      v38[-1].v[1] = (float)(clipScale * v38[-1].v[1]) + clipOrg->v[1];
      --v39;
    }
    while ( v39 );
  }
  return v33;
}

/*
==============
R_InitSunShadowProjectionSetupForFrustum
==============
*/
void R_InitSunShadowProjectionSetupForFrustum(GfxViewInfo *viewInfo, GfxBackEndData *data, const GfxCamera *camera, GfxSunShadowMapMetrics *mapMetrics, const GfxSunShadowFrustumRays *frustumRays, GfxSunShadowProjectionSetup *projSetup)
{
  unsigned int v6; 
  __int64 v7; 
  __int64 v9; 
  float size; 
  float v13; 
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
  float *sampleSize; 
  __int64 v27; 
  float *v28; 
  float v29; 
  float v30; 
  __m128 v32; 
  __m128 v33; 
  float v34; 
  __int64 v35; 
  __int64 v55; 
  __int64 v60; 
  bool v75; 
  float v86; 
  __m128 v87; 
  float v88; 
  float v89; 
  float v90; 
  float v91; 
  float v92; 
  float v93; 
  float v94; 
  float v95; 
  float nearClip; 
  float v97; 
  float v98; 
  float v99; 
  float v100; 
  float v101; 
  int v104[2]; 
  vec3_t origin; 
  int v106[2]; 
  Bounds bounds; 
  tmat33_t<vec3_t> sunAxis; 

  v6 = 0;
  v7 = 2i64;
  *(_QWORD *)origin.v = viewInfo;
  do
  {
    v9 = (int)v6;
    size = (float)mapMetrics->size;
    *(float *)&v104[v6] = (float)(size - 2.0) / (float)(frustumRays->maxs.v[v6] - frustumRays->mins.v[v6]);
    _XMM0 = 0i64;
    __asm { vroundss xmm0, xmm0, xmm2, 2 }
    v13 = *(float *)&_XMM0 + 0.5;
    _XMM3 = 0i64;
    __asm { vroundss xmm3, xmm3, xmm0, 1 }
    v16 = *(float *)&_XMM3 - 0.5;
    if ( (float)(*(float *)&_XMM0 + 0.5) != (float)(*(float *)&_XMM3 - 0.5) )
    {
      if ( v13 > (float)(v16 + 2.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 1760, ASSERT_TYPE_ASSERT, "( centerMins ) <= ( centerMaxs + 2.0f )", "%s <= %s\n\t%g, %g", "centerMins", "centerMaxs + 2.0f", v13, (float)((float)(*(float *)&_XMM3 - 0.5) + 2.0)) )
        __debugbreak();
      v17 = frustumRays->mins.v[v6];
      v18 = frustumRays->maxs.v[v6];
      if ( v18 <= COERCE_FLOAT(LODWORD(v17) ^ _xmm) )
      {
        v13 = v13 + -1.0;
        v20 = (float)(1.0 - v13) / v17;
      }
      else
      {
        v13 = v16 + 1.0;
        v19 = (float)mapMetrics->size;
        v20 = (float)((float)(v19 - 1.0) - (float)(v16 + 1.0)) / v18;
      }
      *(float *)&v104[v6] = v20;
    }
    if ( (float)((float)(*(float *)&v104[v6] * frustumRays->mins.v[v6]) + v13) < 0.99900001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 1774, ASSERT_TYPE_ASSERT, "( centerMins + scale[coord] * frustumRays->mins[coord] ) >= ( R_SUNSHADOW_PIXEL_PAD + 0.5f - 0.001f )", "%s >= %s\n\t%g, %g", "centerMins + scale[coord] * frustumRays->mins[coord]", "R_SUNSHADOW_PIXEL_PAD + 0.5f - EQUAL_EPSILON", (float)((float)(*(float *)&v104[v6] * frustumRays->mins.v[v6]) + v13), DOUBLE_0_9990000128746033) )
      __debugbreak();
    v21 = (float)mapMetrics->size;
    v22 = v21 - 0.99900001;
    if ( (float)((float)(*(float *)&v104[v6] * frustumRays->maxs.v[v6]) + v13) > v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 1775, ASSERT_TYPE_ASSERT, "( centerMins + scale[coord] * frustumRays->maxs[coord] ) <= ( mapMetrics->size - (R_SUNSHADOW_PIXEL_PAD + 0.5f - 0.001f) )", "%s <= %s\n\t%g, %g", "centerMins + scale[coord] * frustumRays->maxs[coord]", "mapMetrics->size - (R_SUNSHADOW_PIXEL_PAD + 0.5f - EQUAL_EPSILON)", (float)((float)(*(float *)&v104[v6] * frustumRays->maxs.v[v6]) + v13), v22) )
      __debugbreak();
    ++v6;
    *(float *)&v106[v9] = v13;
  }
  while ( v6 < 2 );
  v23 = camera->origin.v[1];
  v24 = camera->origin.v[0];
  v25 = camera->origin.v[2];
  projSetup->shadowOrg.v[0] = (float)((float)(v23 * projSetup->sunAxis.m[0].v[1]) + (float)(camera->origin.v[0] * projSetup->sunAxis.m[0].v[0])) + (float)(v25 * projSetup->sunAxis.m[0].v[2]);
  projSetup->shadowOrg.v[1] = (float)((float)(v23 * projSetup->sunAxis.m[1].v[1]) + (float)(v24 * projSetup->sunAxis.m[1].v[0])) + (float)(v25 * projSetup->sunAxis.m[1].v[2]);
  if ( rg.sunShadowScaleSingleLQ <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 1782, ASSERT_TYPE_ASSERT, "(rg.sunShadowScaleSingleLQ > 0.0f)", (const char *)&queryFormat, "rg.sunShadowScaleSingleLQ > 0.0f") )
    __debugbreak();
  sampleSize = projSetup->sampleSize;
  v27 = mapMetrics->size;
  v28 = (float *)projSetup->shadowOrgPixelCenter + 1;
  v29 = *(float *)v106;
  v30 = *(float *)&v106[1];
  _XMM2 = 0i64;
  v33 = 0i64;
  v33.m128_f32[0] = (float)v27;
  v32 = v33;
  v33.m128_f32[0] = (float)((float)(1024.0 / v33.m128_f32[0]) * *(float *)(*(_QWORD *)origin.v + 15432i64)) * rg.sunShadowScaleSingleLQ;
  v34 = (float)mapMetrics->partitionRatio[0];
  v35 = mapMetrics->partitionRatio[1];
  projSetup->sampleSize[0] = v34 * v33.m128_f32[0];
  __asm { vroundss xmm2, xmm2, xmm1, 1 }
  projSetup->snappedShadowOrg[0].v[0] = *(float *)&_XMM2;
  _XMM2 = 0i64;
  __asm { vroundss xmm2, xmm2, xmm1, 1 }
  projSetup->snappedShadowOrg[0].v[1] = *(float *)&_XMM2;
  _XMM2 = 0i64;
  __asm { vroundss xmm2, xmm2, xmm1, 1 }
  projSetup->snappedShadowOrg[0].v[0] = *(float *)&_XMM2 * 8.0;
  _XMM0 = 0i64;
  __asm { vroundss xmm0, xmm0, xmm2, 1 }
  projSetup->snappedShadowOrg[0].v[1] = *(float *)&_XMM0 * 8.0;
  projSetup->snappedShadowOrg[0].v[0] = (float)(projSetup->snappedShadowOrg[0].v[0] + 0.5) * projSetup->sampleSize[0];
  projSetup->snappedShadowOrg[0].v[1] = (float)(projSetup->snappedShadowOrg[0].v[1] + 0.5) * projSetup->sampleSize[0];
  projSetup->shadowOrgPixelCenter[0].v[1] = v30;
  _XMM1 = 0i64;
  _XMM2 = 0i64;
  __asm { vroundss xmm1, xmm1, xmm0, 1 }
  projSetup->shadowOrgPixelCenter[0].v[0] = (float)(*(float *)&_XMM1 * 8.0) + 0.5;
  __asm { vroundss xmm2, xmm2, xmm1, 1 }
  projSetup->shadowOrgPixelCenter[0].v[1] = (float)(*(float *)&_XMM2 * 8.0) + 0.5;
  projSetup->farthestShadowedViewDepth[0] = 5000000.0;
  _XMM2 = 0i64;
  *(float *)&_XMM0 = (float)v35;
  projSetup->sampleSize[1] = *(float *)&_XMM0 * v33.m128_f32[0];
  __asm { vroundss xmm2, xmm2, xmm1, 1 }
  projSetup->snappedShadowOrg[1].v[0] = *(float *)&_XMM2;
  _XMM2 = 0i64;
  __asm { vroundss xmm2, xmm2, xmm1, 1 }
  projSetup->snappedShadowOrg[1].v[1] = *(float *)&_XMM2;
  _XMM2 = 0i64;
  __asm { vroundss xmm2, xmm2, xmm1, 1 }
  projSetup->snappedShadowOrg[1].v[0] = *(float *)&_XMM2 * 8.0;
  _XMM0 = 0i64;
  __asm { vroundss xmm0, xmm0, xmm2, 1 }
  v55 = mapMetrics->partitionRatio[2];
  projSetup->snappedShadowOrg[1].v[1] = *(float *)&_XMM0 * 8.0;
  projSetup->snappedShadowOrg[1].v[0] = (float)(projSetup->snappedShadowOrg[1].v[0] + 0.5) * projSetup->sampleSize[1];
  projSetup->snappedShadowOrg[1].v[1] = (float)(projSetup->snappedShadowOrg[1].v[1] + 0.5) * projSetup->sampleSize[1];
  projSetup->shadowOrgPixelCenter[1].v[0] = v29;
  projSetup->shadowOrgPixelCenter[1].v[1] = v30;
  _XMM2 = 0i64;
  __asm { vroundss xmm2, xmm2, xmm1, 1 }
  projSetup->shadowOrgPixelCenter[1].v[0] = (float)(*(float *)&_XMM2 * 8.0) + 0.5;
  _XMM2 = 0i64;
  __asm { vroundss xmm2, xmm2, xmm1, 1 }
  projSetup->shadowOrgPixelCenter[1].v[1] = (float)(*(float *)&_XMM2 * 8.0) + 0.5;
  projSetup->farthestShadowedViewDepth[1] = 5000000.0;
  *(float *)&_XMM0 = (float)v55;
  v60 = mapMetrics->partitionRatio[3];
  projSetup->sampleSize[2] = *(float *)&_XMM0 * v33.m128_f32[0];
  _XMM2 = 0i64;
  __asm { vroundss xmm2, xmm2, xmm1, 1 }
  projSetup->snappedShadowOrg[2].v[0] = *(float *)&_XMM2;
  _XMM2 = 0i64;
  __asm { vroundss xmm2, xmm2, xmm1, 1 }
  projSetup->snappedShadowOrg[2].v[1] = *(float *)&_XMM2;
  _XMM2 = 0i64;
  __asm { vroundss xmm2, xmm2, xmm1, 1 }
  projSetup->snappedShadowOrg[2].v[0] = *(float *)&_XMM2 * 8.0;
  _XMM0 = 0i64;
  __asm { vroundss xmm0, xmm0, xmm2, 1 }
  projSetup->snappedShadowOrg[2].v[1] = *(float *)&_XMM0 * 8.0;
  projSetup->snappedShadowOrg[2].v[0] = (float)(projSetup->snappedShadowOrg[2].v[0] + 0.5) * projSetup->sampleSize[2];
  projSetup->snappedShadowOrg[2].v[1] = (float)(projSetup->snappedShadowOrg[2].v[1] + 0.5) * projSetup->sampleSize[2];
  projSetup->shadowOrgPixelCenter[2].v[0] = v29;
  projSetup->shadowOrgPixelCenter[2].v[1] = v30;
  _XMM2 = 0i64;
  __asm { vroundss xmm2, xmm2, xmm1, 1 }
  projSetup->shadowOrgPixelCenter[2].v[0] = (float)(*(float *)&_XMM2 * 8.0) + 0.5;
  _XMM2 = 0i64;
  __asm { vroundss xmm2, xmm2, xmm1, 1 }
  projSetup->shadowOrgPixelCenter[2].v[1] = (float)(*(float *)&_XMM2 * 8.0) + 0.5;
  projSetup->farthestShadowedViewDepth[2] = 5000000.0;
  *(float *)&_XMM0 = (float)v60;
  projSetup->sampleSize[3] = *(float *)&_XMM0 * v33.m128_f32[0];
  _XMM2 = 0i64;
  __asm { vroundss xmm2, xmm2, xmm1, 1 }
  projSetup->snappedShadowOrg[3].v[0] = *(float *)&_XMM2;
  v75 = !rg.useCompressedSunShadowClipPlanes;
  _XMM2 = 0i64;
  __asm { vroundss xmm2, xmm2, xmm1, 1 }
  projSetup->snappedShadowOrg[3].v[1] = *(float *)&_XMM2;
  _XMM2 = 0i64;
  __asm { vroundss xmm2, xmm2, xmm1, 1 }
  projSetup->snappedShadowOrg[3].v[0] = *(float *)&_XMM2 * 8.0;
  _XMM0 = 0i64;
  __asm { vroundss xmm0, xmm0, xmm2, 1 }
  projSetup->snappedShadowOrg[3].v[1] = *(float *)&_XMM0 * 8.0;
  projSetup->snappedShadowOrg[3].v[0] = (float)(projSetup->snappedShadowOrg[3].v[0] + 0.5) * projSetup->sampleSize[3];
  projSetup->snappedShadowOrg[3].v[1] = (float)(projSetup->snappedShadowOrg[3].v[1] + 0.5) * projSetup->sampleSize[3];
  projSetup->shadowOrgPixelCenter[3].v[0] = v29;
  projSetup->shadowOrgPixelCenter[3].v[1] = v30;
  _XMM2 = 0i64;
  __asm { vroundss xmm2, xmm2, xmm1, 1 }
  projSetup->shadowOrgPixelCenter[3].v[0] = (float)(*(float *)&_XMM2 * 8.0) + 0.5;
  _XMM2 = 0i64;
  __asm { vroundss xmm2, xmm2, xmm1, 1 }
  projSetup->shadowOrgPixelCenter[3].v[1] = (float)(*(float *)&_XMM2 * 8.0) + 0.5;
  projSetup->farthestShadowedViewDepth[3] = 5000000.0;
  if ( !v75 )
    R_CompressedSunShadow_UpdateShadowBounds(data, v27, projSetup);
  v87 = v32;
  v87.m128_f32[0] = v32.m128_f32[0] * 0.5;
  v86 = v32.m128_f32[0] * 0.5;
  if ( rg.useDistantSunShadowCenter )
  {
    v87.m128_f32[0] = v87.m128_f32[0] + 0.5;
    *(__m128 *)projSetup->shadowOrgPixelCenter[2].v = _mm_shuffle_ps(v87, v87, 0);
  }
  if ( r_debugDrawSunBounds->current.enabled )
  {
    R_GetSunAxes(&data->sunShadow.lightDir, &sunAxis);
    v88 = projSetup->shadowOrg.v[0];
    v89 = projSetup->shadowOrg.v[1];
    v90 = data->sunShadow.lightDir.v[0];
    v91 = data->sunShadow.lightDir.v[1];
    v92 = data->sunShadow.lightDir.v[2];
    v94 = v86 + 0.5;
    do
    {
      v95 = *sampleSize;
      nearClip = data->sunShadow.nearClip;
      v97 = v94 - *v28;
      v93 = (float)((unsigned int)v27 >> 1);
      bounds.halfSize.v[0] = *sampleSize * v93;
      bounds.halfSize.v[1] = bounds.halfSize.v[0];
      v98 = (float)(data->sunShadow.farClip - nearClip) * 0.5;
      v99 = (float)((float)(v94 - *(v28 - 1)) * v95) + v88;
      v100 = (float)(v97 * v95) + v89;
      v101 = v98 + nearClip;
      origin.v[0] = (float)((float)(v100 * sunAxis.m[1].v[0]) + (float)(v99 * sunAxis.m[0].v[0])) - (float)(v101 * v90);
      bounds.halfSize.v[2] = v98;
      origin.v[1] = (float)((float)(v100 * sunAxis.m[1].v[1]) + (float)(v99 * sunAxis.m[0].v[1])) - (float)(v101 * v91);
      origin.v[2] = (float)((float)(v100 * sunAxis.m[1].v[2]) + (float)(v99 * sunAxis.m[0].v[2])) - (float)(v92 * v101);
      bounds.midPoint.v[0] = 0.0;
      bounds.midPoint.v[1] = 0.0;
      bounds.midPoint.v[2] = 0.0;
      R_AddDebugBoxOriented(&data->debugGlobals, &origin, &bounds, &sunAxis, &colorLtYellow);
      ++sampleSize;
      v28 += 2;
      --v7;
    }
    while ( v7 );
  }
}

/*
==============
R_InitializeCachedSunShadowData
==============
*/
void R_InitializeCachedSunShadowData(void)
{
  float *v0; 
  unsigned int v1; 
  __int64 v2; 
  int v3; 
  __int64 v4; 
  __int128 v5; 
  __int64 v6; 
  __int128 v7; 

  HIDWORD(v7) = 2048;
  v0 = &s_gfxCachedSunShadowStore[0].sunShadowLightDir.v[2];
  LODWORD(v7) = 768;
  v1 = 0;
  *(_QWORD *)((char *)&v7 + 4) = 0x60000000400i64;
  v2 = 1i64;
  v3 = *((_DWORD *)&v7 + (int)rg.shadowMapResolutionIndex) >> 1;
  DWORD2(v7) = v3;
  HIDWORD(v7) = v3;
  s_gfxCachedSunShadowListHead = s_gfxCachedSunShadowStore;
  s_smodelsAllocation = 0i64;
  s_terrainAllocation = 0i64;
  do
  {
    *((_WORD *)v0 + 240) = 0;
    *((_BYTE *)v0 + 482) = 0;
    *((_WORD *)v0 + 242) = 0;
    *((_WORD *)v0 - 8) = 0;
    *(_WORD *)((char *)v0 - 13) = 0;
    *((_BYTE *)v0 - 11) = 0;
    LODWORD(v7) = v3 * (v1 & 7);
    *((_BYTE *)v0 - 14) = 0;
    v4 = v2 & 0x3F;
    *(_QWORD *)(v0 + 5) = 0i64;
    ++v2;
    *((_WORD *)v0 + 14) = 0;
    *((_QWORD *)v0 - 1) = 0i64;
    *v0 = 0.0;
    *((_WORD *)v0 + 243) = v1;
    *((_QWORD *)v0 + 63) = -1i64;
    *((_QWORD *)v0 + 64) = -1i64;
    v0 += 152;
    DWORD1(v7) = v3 * ((unsigned __int16)v1 >> 3);
    v5 = v7;
    v6 = v4;
    LOBYTE(v4) = v1++ - 1;
    *((_QWORD *)v0 - 3) = &s_gfxCachedSunShadowStore[v6];
    *(_OWORD *)(v0 - 30) = v5;
    *((_QWORD *)v0 - 4) = &s_gfxCachedSunShadowStore[v4 & 0x3F];
    *(_QWORD *)(v0 - 11) = 0i64;
  }
  while ( v1 < 0x40 );
}

/*
==============
R_MergeAndEmitSunShadowMapsSurfs
==============
*/
void R_MergeAndEmitSunShadowMapsSurfs(GfxViewInfo *viewInfo)
{
  unsigned int v2; 
  unsigned int opaqueCascadeCount; 
  __int64 v4; 
  unsigned int lastCachedSunShadowPartition; 
  unsigned int i; 
  GfxSunShadow *p_sunShadow; 
  unsigned int gfxCachedSunShadowOverlapCount; 
  GfxSunShadow *v9; 
  int v10; 
  unsigned int j; 
  unsigned int v12; 

  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 2291, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  Profile_Begin(63);
  Sys_ProfBeginNamedEvent(0xFF708090, "emit sun shadow map surfs");
  v2 = 0;
  opaqueCascadeCount = frontEndDataOut->sunShadow.opaqueCascadeCount;
  do
  {
    v4 = (int)v2 + 24i64;
    if ( v2 < opaqueCascadeCount )
    {
      R_EmitDrawSurfList(*(const GfxDrawSurf **)&scene.codeSurfUser[2 * v2 - 26], scene.drawSurfCount[v2 + 13], &viewInfo->drawList[v4]);
      R_ST_EmitSunShadowDrawSurfs(viewInfo, v2);
    }
    else
    {
      viewInfo->drawList[v4].drawSurfList.count = 0;
    }
    ++v2;
  }
  while ( v2 < 3 );
  R_EmitDrawSurfList(scene.drawSurfs[17], scene.drawSurfCount[17], &viewInfo->drawList[28]);
  if ( viewInfo->useCachedSunShadow )
  {
    lastCachedSunShadowPartition = frontEndDataOut->sunShadow.lastCachedSunShadowPartition;
    for ( i = frontEndDataOut->sunShadow.firstCachedSunShadowPartition; i <= lastCachedSunShadowPartition; ++i )
    {
      p_sunShadow = &frontEndDataOut->sunShadow;
      if ( frontEndDataOut == (GfxBackEndData *)-927488i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 383, ASSERT_TYPE_ASSERT, "(sunShadow)", (const char *)&queryFormat, "sunShadow") )
        __debugbreak();
      if ( !R_IsCachedSunShadowPartition(p_sunShadow, i) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 384, ASSERT_TYPE_ASSERT, "(R_IsCachedSunShadowPartition( sunShadow, partitionIndex ))", (const char *)&queryFormat, "R_IsCachedSunShadowPartition( sunShadow, partitionIndex )") )
        __debugbreak();
      gfxCachedSunShadowOverlapCount = p_sunShadow->partitionCache[i - p_sunShadow->firstCachedSunShadowPartition].gfxCachedSunShadowOverlapCount;
      v9 = &frontEndDataOut->sunShadow;
      if ( frontEndDataOut == (GfxBackEndData *)-927488i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 376, ASSERT_TYPE_ASSERT, "(sunShadow)", (const char *)&queryFormat, "sunShadow") )
        __debugbreak();
      if ( !R_IsCachedSunShadowPartition(v9, i) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 377, ASSERT_TYPE_ASSERT, "(R_IsCachedSunShadowPartition( sunShadow, partitionIndex ))", (const char *)&queryFormat, "R_IsCachedSunShadowPartition( sunShadow, partitionIndex )") )
        __debugbreak();
      v10 = 10 * (i - v9->firstCachedSunShadowPartition) + 45;
      for ( j = 0; j < gfxCachedSunShadowOverlapCount; viewInfo->drawList[v12].drawSurfList.count = 0 )
      {
        v12 = j + v10;
        ++j;
      }
    }
  }
  Sys_ProfEndNamedEvent();
  Profile_EndInternal(NULL);
}

/*
==============
R_MergeAndEmitTranslucentSunShadowMapsSurfs
==============
*/
void R_MergeAndEmitTranslucentSunShadowMapsSurfs(GfxViewInfo *viewInfo)
{
  GfxBackEndData *v2; 
  __int64 v3; 

  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 2363, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  Profile_Begin(63);
  Sys_ProfBeginNamedEvent(0xFF708090, "emit trans sun shadow map surfs");
  viewInfo->drawList[27].codeSurfList.listType = GFX_CODE_SURFLIST_SUNSHADOW_TRANS;
  v2 = frontEndDataOut;
  v3 = frontEndDataOut->codeSurfCount[1] + 49728i64;
  viewInfo->drawList[27].codeSurfList.count = 0;
  viewInfo->drawList[27].codeSurfList.surfs = (GfxCodeSurf *)((char *)v2 + 64 * v3);
  R_EmitCodeSurfs(&viewInfo->drawList[27].codeSurfList, 0x4000 - frontEndDataOut->codeSurfCount[1], GFX_CODE_SURFLIST_SUNSHADOW_TRANS);
  frontEndDataOut->codeSurfCount[1] += viewInfo->drawList[27].codeSurfList.count;
  R_EmitDrawSurfList(scene.drawSurfs[16], scene.drawSurfCount[16], &viewInfo->drawList[27]);
  R_DrawListIter_Init(&viewInfo->drawList[27], &frontEndDataOut->drawListIter[27]);
  R_AddDrawCall(viewInfo, NULL, DRAWLIST_SUNSHADOW_END, 0x5Du);
  Sys_ProfEndNamedEvent();
  Profile_EndInternal(NULL);
}

/*
==============
R_ProcessWorldTransientRefreshAddPending
==============
*/
void R_ProcessWorldTransientRefreshAddPending(void)
{
  unsigned int v0; 
  unsigned int unsignedInt; 
  unsigned int v2; 
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  const dvar_t *v19; 
  bool *p_refreshQueued; 

  v0 = 0;
  unsignedInt = 0;
  v2 = 2;
  do
  {
    v3 = v2 - 2;
    if ( s_gfxCachedSunShadowStore[v3].allocated && !s_gfxCachedSunShadowStore[v3].refreshPending && s_gfxCachedSunShadowStore[v3].refreshQueued )
      ++unsignedInt;
    v4 = v2 - 1;
    if ( s_gfxCachedSunShadowStore[v4].allocated && !s_gfxCachedSunShadowStore[v4].refreshPending && s_gfxCachedSunShadowStore[v4].refreshQueued )
      ++unsignedInt;
    v5 = v2;
    if ( s_gfxCachedSunShadowStore[v5].allocated && !s_gfxCachedSunShadowStore[v5].refreshPending && s_gfxCachedSunShadowStore[v5].refreshQueued )
      ++unsignedInt;
    v6 = v2 + 1;
    if ( s_gfxCachedSunShadowStore[v6].allocated && !s_gfxCachedSunShadowStore[v6].refreshPending && s_gfxCachedSunShadowStore[v6].refreshQueued )
      ++unsignedInt;
    v7 = v2 + 2;
    if ( s_gfxCachedSunShadowStore[v7].allocated && !s_gfxCachedSunShadowStore[v7].refreshPending && s_gfxCachedSunShadowStore[v7].refreshQueued )
      ++unsignedInt;
    v8 = v2 + 3;
    if ( s_gfxCachedSunShadowStore[v8].allocated && !s_gfxCachedSunShadowStore[v8].refreshPending && s_gfxCachedSunShadowStore[v8].refreshQueued )
      ++unsignedInt;
    v9 = v2 + 4;
    if ( s_gfxCachedSunShadowStore[v9].allocated && !s_gfxCachedSunShadowStore[v9].refreshPending && s_gfxCachedSunShadowStore[v9].refreshQueued )
      ++unsignedInt;
    v10 = v2 + 5;
    if ( s_gfxCachedSunShadowStore[v10].allocated && !s_gfxCachedSunShadowStore[v10].refreshPending && s_gfxCachedSunShadowStore[v10].refreshQueued )
      ++unsignedInt;
    v11 = v2 + 6;
    if ( s_gfxCachedSunShadowStore[v11].allocated && !s_gfxCachedSunShadowStore[v11].refreshPending && s_gfxCachedSunShadowStore[v11].refreshQueued )
      ++unsignedInt;
    v12 = v2 + 7;
    if ( s_gfxCachedSunShadowStore[v12].allocated && !s_gfxCachedSunShadowStore[v12].refreshPending && s_gfxCachedSunShadowStore[v12].refreshQueued )
      ++unsignedInt;
    v13 = v2 + 8;
    if ( s_gfxCachedSunShadowStore[v13].allocated && !s_gfxCachedSunShadowStore[v13].refreshPending && s_gfxCachedSunShadowStore[v13].refreshQueued )
      ++unsignedInt;
    v14 = v2 + 9;
    if ( s_gfxCachedSunShadowStore[v14].allocated && !s_gfxCachedSunShadowStore[v14].refreshPending && s_gfxCachedSunShadowStore[v14].refreshQueued )
      ++unsignedInt;
    v15 = v2 + 10;
    if ( s_gfxCachedSunShadowStore[v15].allocated && !s_gfxCachedSunShadowStore[v15].refreshPending && s_gfxCachedSunShadowStore[v15].refreshQueued )
      ++unsignedInt;
    v16 = v2 + 11;
    if ( s_gfxCachedSunShadowStore[v16].allocated && !s_gfxCachedSunShadowStore[v16].refreshPending && s_gfxCachedSunShadowStore[v16].refreshQueued )
      ++unsignedInt;
    v17 = v2 + 12;
    if ( s_gfxCachedSunShadowStore[v17].allocated && !s_gfxCachedSunShadowStore[v17].refreshPending && s_gfxCachedSunShadowStore[v17].refreshQueued )
      ++unsignedInt;
    v18 = v2 + 13;
    if ( s_gfxCachedSunShadowStore[v18].allocated && !s_gfxCachedSunShadowStore[v18].refreshPending && s_gfxCachedSunShadowStore[v18].refreshQueued )
      ++unsignedInt;
    v2 += 16;
  }
  while ( v2 - 2 < 0x40 );
  v19 = DCONST_DVARINT_r_sunshadow_maxCacheRefreshPerFrame;
  if ( !DCONST_DVARINT_r_sunshadow_maxCacheRefreshPerFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_sunshadow_maxCacheRefreshPerFrame") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  if ( unsignedInt > v19->current.integer )
    unsignedInt = v19->current.unsignedInt;
  if ( unsignedInt )
  {
    p_refreshQueued = &s_gfxCachedSunShadowStore[0].refreshQueued;
    do
    {
      if ( *(p_refreshQueued - 2) && !*(p_refreshQueued - 1) && *p_refreshQueued )
      {
        *(_WORD *)(p_refreshQueued - 1) = 1;
        if ( !--unsignedInt )
          break;
      }
      ++v0;
      p_refreshQueued += 608;
    }
    while ( v0 < 0x40 );
  }
}

/*
==============
R_ProcessWorldTransientRefreshCachedSunShadowData
==============
*/
void R_ProcessWorldTransientRefreshCachedSunShadowData(void)
{
  R_ProcessWorldTransientRefreshQueued();
  R_ProcessWorldTransientRefreshAddPending();
}

/*
==============
R_ProcessWorldTransientRefreshQueued
==============
*/
void R_ProcessWorldTransientRefreshQueued()
{
  __m128 v0; 
  __m128 v1; 
  const Bounds *CurrentBounds; 
  float *v3; 
  __int64 v4; 
  float v7; 
  double v8; 
  float v9; 
  float v12; 
  float v14; 
  float v16; 
  float v17; 
  float v18; 
  double v19; 
  float v20; 
  double v21; 
  float v22; 
  double v23; 
  float v24; 
  double v25; 
  CL_TransientsWorldMP_TransientChangedVisibleIterator v26; 
  __int128 v27; 
  double v28; 
  __m128 v29; 
  __m128 v30; 

  *(_QWORD *)&v26.m_wordIndex = 0i64;
  *(_QWORD *)&v26.m_currentTransientIndex = 0i64;
  CL_TransientsWorldMP_TransientChangedVisibleIterator::Init(&v26);
  if ( CL_TransientsWorldMP_TransientChangedVisibleIterator::Advance(&v26) )
  {
    v30 = v0;
    v29 = v1;
    do
    {
      CurrentBounds = CL_TransientsWorldMP_TransientChangedVisibleIterator::GetCurrentBounds(&v26);
      v3 = &s_gfxCachedSunShadowStore[0].viewParms.camera.origin.v[2];
      v4 = 64i64;
      do
      {
        if ( *((_BYTE *)v3 + 120) && !*((_BYTE *)v3 + 122) && !*((_BYTE *)v3 + 121) )
        {
          _YMM12 = *(__m256i *)(v3 - 34);
          _YMM13 = *(__m256i *)(v3 - 26);
          v7 = COERCE_FLOAT(*(_OWORD *)CurrentBounds->midPoint.v) - *(v3 - 2);
          v8 = *(double *)&CurrentBounds->halfSize.y;
          v27 = *(_OWORD *)CurrentBounds->midPoint.v;
          v9 = *((float *)&v27 + 2) - *v3;
          __asm { vextractf128 xmm6, ymm12, 1 }
          *((float *)&v27 + 1) = *((float *)&v27 + 1) - *(v3 - 1);
          __asm { vextractf128 xmm9, ymm12, 1 }
          v12 = _mm_shuffle_ps(v0, v0, 85).m128_f32[0];
          __asm { vextractf128 xmm1, ymm13, 1 }
          v14 = (float)((float)((float)(*(float *)&_XMM6 * *((float *)&v27 + 1)) + (float)(v0.m128_f32[0] * v7)) + (float)(v1.m128_f32[0] * v9)) + *(float *)&_XMM1;
          _XMM9.m128_f32[0] = _mm_shuffle_ps(_XMM9, _XMM9, 85).m128_f32[0];
          __asm { vextractf128 xmm1, ymm13, 1 }
          v28 = v8;
          v16 = _mm_shuffle_ps(v1, v1, 85).m128_f32[0];
          v17 = (float)((float)((float)(_XMM9.m128_f32[0] * *((float *)&v27 + 1)) + (float)(v12 * v7)) + (float)(v16 * v9)) + _mm_shuffle_ps(_XMM1, _XMM1, 85).m128_f32[0];
          *(float *)&_XMM6 = (float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(v0.m128_f32[0] * *((float *)&v27 + 3)) & _xmm) + COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v8 * *(float *)&_XMM6) & _xmm)) + COERCE_FLOAT(COERCE_UNSIGNED_INT(v1.m128_f32[0] * *((float *)&v28 + 1)) & _xmm);
          v0 = (__m128)LODWORD(FLOAT_1_0);
          v18 = (float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(v12 * *((float *)&v27 + 3)) & _xmm) + COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v8 * _XMM9.m128_f32[0]) & _xmm)) + COERCE_FLOAT(COERCE_UNSIGNED_INT(v16 * *((float *)&v28 + 1)) & _xmm);
          *((float *)&v27 + 2) = v9;
          v19 = I_fclamp(v14 - *(float *)&_XMM6, 0.0, 1.0);
          v20 = *(float *)&v19;
          v21 = I_fclamp(*(float *)&_XMM6 + v14, 0.0, 1.0);
          v22 = *(float *)&v21;
          v23 = I_fclamp(v17 - v18, 0.0, 1.0);
          v24 = *(float *)&v23;
          v25 = I_fclamp(v18 + v17, 0.0, 1.0);
          if ( v20 > v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 216, ASSERT_TYPE_ASSERT, "(minX <= maxX)", (const char *)&queryFormat, "minX <= maxX") )
            __debugbreak();
          if ( v24 > *(float *)&v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 217, ASSERT_TYPE_ASSERT, "(minY <= maxY)", (const char *)&queryFormat, "minY <= maxY") )
            __debugbreak();
          if ( v20 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 218, ASSERT_TYPE_ASSERT, "(minX >= 0.0f)", (const char *)&queryFormat, "minX >= 0.0f") )
            __debugbreak();
          if ( v24 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 219, ASSERT_TYPE_ASSERT, "(minY >= 0.0f)", (const char *)&queryFormat, "minY >= 0.0f") )
            __debugbreak();
          if ( (float)(v22 - v20) > 0.0 && (float)(*(float *)&v25 - v24) > 0.0 )
            *((_BYTE *)v3 + 122) = 1;
        }
        v3 += 152;
        --v4;
      }
      while ( v4 );
    }
    while ( CL_TransientsWorldMP_TransientChangedVisibleIterator::Advance(&v26) );
  }
}

/*
==============
R_ReferenceSunShadowCacheEntry
==============
*/
void R_ReferenceSunShadowCacheEntry(GfxCachedSunShadow *entry)
{
  GfxCachedSunShadow *v1; 
  GfxCachedSunShadow *prev; 
  GfxCachedSunShadow *next; 
  GfxCachedSunShadow *v4; 

  v1 = s_gfxCachedSunShadowListHead;
  if ( entry != s_gfxCachedSunShadowListHead )
  {
    prev = entry->prev;
    next = entry->next;
    s_gfxCachedSunShadowListHead = entry;
    prev->next = next;
    entry->next->prev = entry->prev;
    entry->next = v1;
    v4 = v1->prev;
    entry->prev = v4;
    v4->next = entry;
    entry->next->prev = entry;
  }
}

/*
==============
R_SetCloudShadowParams
==============
*/
void R_SetCloudShadowParams(const GfxCloudShadow *cloudShadow, vec4_t *params)
{
  float opacity; 
  float v3; 
  float scale; 

  opacity = cloudShadow->opacity;
  v3 = 1.0 / (float)(cloudShadow->max - cloudShadow->min);
  scale = cloudShadow->scale;
  params->v[0] = COERCE_FLOAT(COERCE_UNSIGNED_INT(v3 * cloudShadow->min) ^ _xmm);
  params->v[1] = v3;
  params->v[2] = opacity;
  params->v[3] = scale;
}

/*
==============
R_SetCloudShadowParams
==============
*/
void R_SetCloudShadowParams(const GfxCloudShadow *cloudShadow, GfxViewInfo *viewInfo)
{
  float v2; 
  float opacity; 
  float scale; 

  v2 = 1.0 / (float)(cloudShadow->max - cloudShadow->min);
  opacity = cloudShadow->opacity;
  scale = cloudShadow->scale;
  viewInfo->input.sceneConstants.cloudShadowParams.v[0] = COERCE_FLOAT(COERCE_UNSIGNED_INT(v2 * cloudShadow->min) ^ _xmm);
  viewInfo->input.sceneConstants.cloudShadowParams.v[1] = v2;
  viewInfo->input.sceneConstants.cloudShadowParams.v[2] = opacity;
  viewInfo->input.sceneConstants.cloudShadowParams.v[3] = scale;
}

/*
==============
R_SetSunShadowMapViewParms
==============
*/
void R_SetSunShadowMapViewParms(const GfxSunShadowMapMetrics *mapMetrics, const GfxSunShadowProjectionSetup *projSetup, unsigned int partitionIndex, GfxSunShadow *sunShadow)
{
  __int64 v4; 
  GfxSunShadowPartition *v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  __int64 size; 
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

  v4 = partitionIndex;
  v8 = &sunShadow->partition[partitionIndex];
  DebugWipe(v8, 0x180ui64);
  v9 = projSetup->sunAxis.m[2].v[0];
  v10 = projSetup->sunAxis.m[2].v[2];
  v11 = projSetup->sunAxis.m[0].v[0];
  v12 = projSetup->sunAxis.m[0].v[1];
  v13 = projSetup->sunAxis.m[1].v[1];
  v14 = projSetup->sunAxis.m[1].v[0];
  size = mapMetrics->size;
  *(_QWORD *)v8->viewParms.camera.origin.v = 0i64;
  v8->viewParms.camera.origin.v[2] = 0.0;
  LODWORD(v16) = LODWORD(v9) ^ _xmm;
  v17 = projSetup->sunAxis.m[2].v[1];
  v8->viewParms.camera.axis.m[0].v[0] = v16;
  v8->viewParms.camera.axis.m[0].v[1] = COERCE_FLOAT(LODWORD(v17) ^ _xmm);
  LODWORD(v18) = LODWORD(v10) ^ _xmm;
  v19 = projSetup->sunAxis.m[0].v[2];
  v8->viewParms.camera.axis.m[0].v[2] = v18;
  v8->viewParms.camera.axis.m[1].v[0] = COERCE_FLOAT(LODWORD(v11) ^ _xmm);
  v8->viewParms.camera.axis.m[1].v[2] = COERCE_FLOAT(LODWORD(v19) ^ _xmm);
  v8->viewParms.camera.axis.m[1].v[1] = COERCE_FLOAT(LODWORD(v12) ^ _xmm);
  v8->viewParms.camera.axis.m[2].v[1] = v13;
  v8->viewParms.camera.axis.m[2].v[2] = projSetup->sunAxis.m[1].v[2];
  v20 = projSetup->sunAxis.m[1].v[1];
  v8->viewParms.camera.axis.m[2].v[0] = v14;
  *(_QWORD *)&v8->viewParms.camera.tanHalfFovX = 0i64;
  *(_QWORD *)v8->viewParms.camera.zPlanes = 0i64;
  *(_QWORD *)&v8->viewParms.camera.zPlanes[2] = 0i64;
  v8->viewParms.viewMatrix.m.m[0].v[0] = v11;
  v8->viewParms.viewMatrix.m.m[1].v[0] = v12;
  v8->viewParms.viewMatrix.m.m[2].v[0] = v19;
  v21 = projSetup->sunAxis.m[2].v[2];
  v8->viewParms.viewMatrix.m.m[3].v[0] = COERCE_FLOAT(LODWORD(projSetup->snappedShadowOrg[v4].v[0]) ^ _xmm);
  v8->viewParms.viewMatrix.m.m[0].v[1] = v14;
  v8->viewParms.viewMatrix.m.m[1].v[1] = v20;
  v8->viewParms.viewMatrix.m.m[2].v[1] = projSetup->sunAxis.m[1].v[2];
  v22 = projSetup->sunAxis.m[2].v[1];
  v8->viewParms.viewMatrix.m.m[3].v[1] = COERCE_FLOAT(LODWORD(projSetup->snappedShadowOrg[v4].v[1]) ^ _xmm);
  v8->viewParms.viewMatrix.m.m[0].v[2] = v16;
  v8->viewParms.viewMatrix.m.m[1].v[2] = COERCE_FLOAT(LODWORD(v22) ^ _xmm);
  v8->viewParms.viewMatrix.m.m[2].v[2] = COERCE_FLOAT(LODWORD(v21) ^ _xmm);
  v8->viewParms.viewMatrix.m.m[3].v[2] = 0.0;
  v8->viewParms.viewMatrix.m.m[0].v[3] = 0.0;
  v23 = (float)size;
  v24 = v23 * projSetup->sampleSize[v4];
  v8->viewParms.viewMatrix.m.m[1].v[3] = 0.0;
  v8->viewParms.viewMatrix.m.m[2].v[3] = 0.0;
  v8->viewParms.viewMatrix.m.m[3].v[3] = 1.0;
  if ( v24 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 1240, ASSERT_TYPE_ASSERT, "( ( shadowExtents > 0.0f ) )", "( shadowExtents ) = %g", v24) )
  {
    __debugbreak();
    LODWORD(size) = mapMetrics->size;
  }
  v25 = projSetup->shadowOrgPixelCenter[v4].v[1];
  v26 = (float)(unsigned int)size;
  v27 = (float)((float)((float)(1.0 / v26) * projSetup->shadowOrgPixelCenter[v4].v[0]) * 2.0) - 1.0;
  *(__m256i *)v8->viewParms.projectionMatrix.m.m[0].v = (__m256i)0;
  *(__m256i *)v8->viewParms.projectionMatrix.m.row2.v = (__m256i)0;
  v8->viewParms.projectionMatrix.m.m[0].v[0] = 2.0 / v24;
  v8->viewParms.projectionMatrix.m.m[3].v[0] = v27;
  v8->viewParms.projectionMatrix.m.m[1].v[1] = v8->viewParms.projectionMatrix.m.m[0].v[0];
  v8->viewParms.projectionMatrix.m.m[3].v[1] = (float)((float)((float)(1.0 / v26) * v25) * 2.0) - 1.0;
  v8->viewParms.projectionMatrix.m.m[2].v[2] = -1.0 / (float)(sunShadow->farClip - sunShadow->nearClip);
  v8->viewParms.projectionMatrix.m.m[3].v[2] = sunShadow->farClip / (float)(sunShadow->farClip - sunShadow->nearClip);
  v8->viewParms.projectionMatrix.m.m[3].v[3] = 1.0;
  v8->viewParms.camera.zPlanes[3] = v8->viewParms.projectionMatrix.m.m[3].v[2];
  MatrixMultiply44Aligned(&v8->viewParms.viewMatrix.m, &v8->viewParms.projectionMatrix.m, &v8->viewParms.viewProjectionMatrix.m);
  MatrixInverse44Aligned(&v8->viewParms.viewProjectionMatrix.m, &v8->viewParms.inverseViewProjectionMatrix.m);
}

/*
==============
R_SetSunShadowSinesAndBoundingArcEdge
==============
*/
void R_SetSunShadowSinesAndBoundingArcEdge(GfxSunShadowFrustumRays *frustumRays)
{
  float v1; 
  __int128 v2; 
  __int128 v7; 
  __int128 v12; 
  float v20; 
  unsigned int v21; 
  float v22; 
  unsigned int v23; 
  float v24; 
  unsigned int v25; 
  float v26; 
  unsigned int v27; 

  v1 = (float)(frustumRays->shadowRays[0].v[1] * frustumRays->shadowRays[3].v[0]) - (float)(frustumRays->shadowRays[3].v[1] * frustumRays->shadowRays[0].v[0]);
  frustumRays->sinMax = v1;
  frustumRays->sinMin = v1;
  frustumRays->sinInteriorAngle[3] = v1;
  v2 = LODWORD(frustumRays->shadowRays[1].v[1]);
  *(float *)&v2 = (float)(frustumRays->shadowRays[1].v[1] * frustumRays->shadowRays[0].v[0]) - (float)(frustumRays->shadowRays[0].v[1] * frustumRays->shadowRays[1].v[0]);
  _XMM0 = v2;
  frustumRays->sinInteriorAngle[0] = *(float *)&v2;
  __asm { vminss  xmm0, xmm0, dword ptr [rcx+60h] }
  _XMM1 = LODWORD(frustumRays->sinMax);
  frustumRays->sinMin = *(float *)&_XMM0;
  __asm { vmaxss  xmm2, xmm1, dword ptr [rcx+50h] }
  frustumRays->sinMax = *(float *)&_XMM2;
  v7 = LODWORD(frustumRays->shadowRays[2].v[1]);
  *(float *)&v7 = (float)(frustumRays->shadowRays[2].v[1] * frustumRays->shadowRays[1].v[0]) - (float)(frustumRays->shadowRays[1].v[1] * frustumRays->shadowRays[2].v[0]);
  _XMM0 = v7;
  frustumRays->sinInteriorAngle[1] = *(float *)&v7;
  __asm { vminss  xmm0, xmm0, dword ptr [rcx+60h] }
  frustumRays->sinMin = *(float *)&_XMM0;
  _XMM1 = LODWORD(frustumRays->sinMax);
  __asm { vmaxss  xmm2, xmm1, dword ptr [rcx+54h] }
  frustumRays->sinMax = *(float *)&_XMM2;
  v12 = LODWORD(frustumRays->shadowRays[3].v[1]);
  *(float *)&v12 = (float)(frustumRays->shadowRays[3].v[1] * frustumRays->shadowRays[2].v[0]) - (float)(frustumRays->shadowRays[2].v[1] * frustumRays->shadowRays[3].v[0]);
  _XMM0 = v12;
  frustumRays->sinInteriorAngle[2] = *(float *)&v12;
  __asm { vminss  xmm0, xmm0, dword ptr [rcx+60h] }
  frustumRays->sinMin = *(float *)&_XMM0;
  _XMM1 = LODWORD(frustumRays->sinInteriorAngle[2]);
  __asm { vmaxss  xmm2, xmm1, dword ptr [rcx+64h] }
  frustumRays->sinMax = *(float *)&_XMM2;
  _XMM1 = LODWORD(frustumRays->sinMin) ^ (unsigned __int128)_xmm;
  __asm { vminss  xmm2, xmm1, xmm2 }
  *(_QWORD *)frustumRays->boundingArcRay = -1i64;
  if ( *(float *)&_XMM2 >= 0.001 )
  {
    v20 = frustumRays->sinInteriorAngle[0];
    if ( v20 <= 0.001 || frustumRays->sinInteriorAngle[3] > 0.001 )
    {
      if ( v20 < -0.001 )
      {
        v21 = frustumRays->boundingArcRay[1];
        if ( frustumRays->sinInteriorAngle[3] >= -0.001 )
          v21 = 0;
        frustumRays->boundingArcRay[1] = v21;
      }
    }
    else
    {
      frustumRays->boundingArcRay[0] = 0;
    }
    v22 = frustumRays->sinInteriorAngle[1];
    if ( v22 <= 0.001 || frustumRays->sinInteriorAngle[0] > 0.001 )
    {
      if ( v22 < -0.001 )
      {
        v23 = frustumRays->boundingArcRay[1];
        if ( frustumRays->sinInteriorAngle[0] >= -0.001 )
          v23 = 1;
        frustumRays->boundingArcRay[1] = v23;
      }
    }
    else
    {
      frustumRays->boundingArcRay[0] = 1;
    }
    v24 = frustumRays->sinInteriorAngle[2];
    if ( v24 <= 0.001 || frustumRays->sinInteriorAngle[1] > 0.001 )
    {
      if ( v24 < -0.001 )
      {
        v25 = frustumRays->boundingArcRay[1];
        if ( frustumRays->sinInteriorAngle[1] >= -0.001 )
          v25 = 2;
        frustumRays->boundingArcRay[1] = v25;
      }
    }
    else
    {
      frustumRays->boundingArcRay[0] = 2;
    }
    v26 = frustumRays->sinInteriorAngle[3];
    if ( v26 <= 0.001 || frustumRays->sinInteriorAngle[2] > 0.001 )
    {
      if ( v26 < -0.001 )
      {
        v27 = frustumRays->boundingArcRay[1];
        if ( frustumRays->sinInteriorAngle[2] >= -0.001 )
          v27 = 3;
        frustumRays->boundingArcRay[1] = v27;
      }
    }
    else
    {
      frustumRays->boundingArcRay[0] = 3;
    }
    if ( frustumRays->boundingArcRay[0] == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 1383, ASSERT_TYPE_ASSERT, "(frustumRays->boundingArcRay[0] != R_SUNSHADOW_BOUNDING_ARC_NONE)", (const char *)&queryFormat, "frustumRays->boundingArcRay[0] != R_SUNSHADOW_BOUNDING_ARC_NONE") )
      __debugbreak();
    if ( frustumRays->boundingArcRay[1] == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 1384, ASSERT_TYPE_ASSERT, "(frustumRays->boundingArcRay[1] != R_SUNSHADOW_BOUNDING_ARC_NONE)", (const char *)&queryFormat, "frustumRays->boundingArcRay[1] != R_SUNSHADOW_BOUNDING_ARC_NONE") )
      __debugbreak();
  }
}

/*
==============
R_SetupSunShadowMapMetrics
==============
*/
void R_SetupSunShadowMapMetrics(const GfxViewInfo *viewInfo, GfxBackEndData *data, GfxSunShadowMapMetrics *mapMetrics, float *outNearClip, float *outFarClip)
{
  unsigned int v9; 
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
  char v20; 
  unsigned __int16 opaqueCascadeCount; 
  int v22; 
  char v23; 
  Bounds bounds; 

  *(_QWORD *)bounds.midPoint.v = 0x40000000300i64;
  LODWORD(bounds.midPoint.v[2]) = 1536;
  LODWORD(bounds.halfSize.v[0]) = 2048;
  v9 = LODWORD(bounds.midPoint.v[rg.shadowMapResolutionIndex]);
  mapMetrics->size = v9;
  if ( (v9 & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 2055, ASSERT_TYPE_ASSERT, "(!(mapMetrics->size & 1))", (const char *)&queryFormat, "!(mapMetrics->size & 1)") )
    __debugbreak();
  LODWORD(v10) = LODWORD(data->sunShadow.lightDir.v[0]) ^ _xmm;
  LODWORD(v11) = LODWORD(data->sunShadow.lightDir.v[1]) ^ _xmm;
  LODWORD(v12) = LODWORD(data->sunShadow.lightDir.v[2]) ^ _xmm;
  if ( sm_sunStageBounds->current.enabled && viewInfo->stageInfo.activeStageValid )
  {
    CM_StageTriggerBounds(viewInfo->stageInfo.activeStage.triggerIndex, &bounds, r_showSunStage->current.enabled, &viewInfo->stageInfo.activeStage.origin);
    v13 = bounds.midPoint.v[0] + viewInfo->stageInfo.activeStage.origin.v[0];
    v14 = bounds.midPoint.v[1] + viewInfo->stageInfo.activeStage.origin.v[1];
    v15 = bounds.midPoint.v[2] + viewInfo->stageInfo.activeStage.origin.v[2];
    bounds.midPoint.v[2] = v15;
    bounds.midPoint.v[0] = v13;
    bounds.midPoint.v[1] = v14;
  }
  else
  {
    bounds = rgp.world->bounds;
    v14 = bounds.midPoint.v[1];
    v13 = bounds.midPoint.v[0];
    v15 = bounds.midPoint.v[2];
  }
  v16 = COERCE_FLOAT(LODWORD(v10) & _xmm) * bounds.halfSize.v[0];
  v17 = COERCE_FLOAT(LODWORD(v12) & _xmm) * bounds.halfSize.v[2];
  v18 = COERCE_FLOAT(LODWORD(v11) & _xmm) * bounds.halfSize.v[1];
  *outNearClip = (float)((float)((float)((float)((float)(v13 * v10) - v16) + (float)(v14 * v11)) - v18) + (float)(v15 * v12)) - v17;
  v19 = (float)((float)((float)((float)((float)(v13 * v10) + v16) + (float)(v14 * v11)) + v18) + (float)(v15 * v12)) + v17;
  *outFarClip = v19;
  if ( r_debugDrawSunBounds->current.enabled )
  {
    R_AddDebugBox(&data->debugGlobals, &bounds, &colorLtOrange, 0);
    v19 = *outFarClip;
  }
  if ( v19 <= *outNearClip && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 2058, ASSERT_TYPE_ASSERT, "(outNearClip < outFarClip)", (const char *)&queryFormat, "outNearClip < outFarClip") )
    __debugbreak();
  v20 = rg.sunCascadeSizeMultiplier[0];
  opaqueCascadeCount = data->sunShadow.opaqueCascadeCount;
  mapMetrics->partitionRatio[0] = 1;
  v22 = 1 << v20;
  v23 = rg.sunCascadeSizeMultiplier[1];
  mapMetrics->partitionRatio[1] = v22;
  mapMetrics->partitionRatio[2] = v22 << v23;
  if ( !opaqueCascadeCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 2070, ASSERT_TYPE_ASSERT, "(data->sunShadow.opaqueCascadeCount > 0)", (const char *)&queryFormat, "data->sunShadow.opaqueCascadeCount > 0") )
    __debugbreak();
  mapMetrics->partitionRatio[3] = *(&mapMetrics->size + opaqueCascadeCount);
}

/*
==============
R_SetupSunShadowMapProjection
==============
*/
void R_SetupSunShadowMapProjection(GfxViewInfo *viewInfo, const GfxSunShadowProjectionSetup *projSetup, const GfxSunShadowMapMetrics *mapMetrics, const GfxCamera *camera, GfxSunShadow *sunShadow)
{
  vec2_t *snappedShadowOrg; 
  unsigned int v6; 
  float *v8; 
  unsigned int *partitionRatio; 
  signed __int64 v10; 
  float v11; 
  unsigned int size; 
  float v13; 
  float v14; 
  float v15; 
  GfxSunShadowProjectionSetup *v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  int v21; 
  GfxSunShadowProjection *p_sunProj; 
  __m256i *LookupMatrix; 
  __m256i v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  vec2_t *v29; 
  float v30; 
  float v31; 
  float value; 
  __int128 v38; 
  __int128 v41; 
  __int128 v48; 
  __int128 v51; 
  __int128 v58; 
  __int128 v61; 
  __int128 v68; 
  __int128 v71; 
  float *v73; 
  unsigned int v74; 
  unsigned int i; 
  float *v; 
  __int64 v77; 
  float *p_farDist; 
  GfxSunShadowProjectionSetup *projSetupa; 

  snappedShadowOrg = projSetup->snappedShadowOrg;
  v6 = 0;
  projSetupa = (GfxSunShadowProjectionSetup *)projSetup;
  p_farDist = &sunShadow->partition[0].farDist;
  v8 = &sunShadow->sunProj.switchPartition[0].v[2];
  partitionRatio = mapMetrics->partitionRatio;
  v10 = (char *)projSetup - (char *)mapMetrics;
  do
  {
    if ( *(float *)((char *)partitionRatio + v10 + 104) <= 0.0 )
    {
      LODWORD(v77) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 1658, ASSERT_TYPE_ASSERT, "( ( projSetup->sampleSize[partitionIndex] > 0.0f ) )", "( partitionIndex ) = %u", v77) )
        __debugbreak();
    }
    v11 = (float)*partitionRatio;
    if ( v11 <= 0.0 )
    {
      LODWORD(v77) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 1659, ASSERT_TYPE_ASSERT, "( ( mapMetrics->partitionRatio[partitionIndex] > 0.0f ) )", "( partitionIndex ) = %u", v77) )
        __debugbreak();
    }
    size = mapMetrics->size;
    if ( !mapMetrics->size )
    {
      LODWORD(v77) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 1660, ASSERT_TYPE_ASSERT, "( ( mapMetrics->size > 0 ) )", "( partitionIndex ) = %u", v77) )
        __debugbreak();
    }
    v13 = 1.0 / *(float *)((char *)partitionRatio + v10 + 104);
    v14 = (float)*partitionRatio;
    v15 = (float)size;
    v16 = projSetupa;
    v17 = 1.0 / v15;
    v18 = 1.0 - (float)(1.0 / v14);
    v19 = projSetupa->snappedShadowOrg[0].v[1] - snappedShadowOrg->v[1];
    v20 = v18 * snappedShadowOrg[-4].v[1];
    *(v8 - 2) = (float)((float)((float)(projSetupa->snappedShadowOrg[0].v[0] - snappedShadowOrg->v[0]) * v13) + (float)(v18 * snappedShadowOrg[-4].v[0])) * v17;
    *(v8 - 1) = v18 - (float)((float)((float)(v19 * v13) + v20) * v17);
    *v8 = v14;
    v8[1] = 1.0 / v14;
    R_SetSunShadowMapViewParms(mapMetrics, v16, v6++, sunShadow);
    v21 = *(unsigned int *)((char *)partitionRatio + v10 + 120);
    ++snappedShadowOrg;
    ++partitionRatio;
    v8 += 4;
    *(_DWORD *)p_farDist = v21;
    p_farDist += 136;
  }
  while ( v6 < 4 );
  p_sunProj = &sunShadow->sunProj;
  if ( R_CompressedSunShadow_IsUsingGlobalBuffer() )
  {
    LookupMatrix = (__m256i *)R_CompressedSunShadow_GetLookupMatrix();
    v24 = LookupMatrix[1];
    *(__m256i *)sunShadow->csmLookupMatrix.m.m[0].v = *LookupMatrix;
    *(__m256i *)sunShadow->csmLookupMatrix.m.row2.v = v24;
  }
  sunShadow->lookupMatrix.m.m[0].v[0] = (float)(sunShadow->partition[0].viewParms.viewProjectionMatrix.m.m[0].v[0] + sunShadow->partition[0].viewParms.viewProjectionMatrix.m.m[0].v[3]) * 0.5;
  sunShadow->lookupMatrix.m.m[1].v[0] = (float)(sunShadow->partition[0].viewParms.viewProjectionMatrix.m.m[1].v[0] + sunShadow->partition[0].viewParms.viewProjectionMatrix.m.m[1].v[3]) * 0.5;
  sunShadow->lookupMatrix.m.m[2].v[0] = (float)(sunShadow->partition[0].viewParms.viewProjectionMatrix.m.m[2].v[0] + sunShadow->partition[0].viewParms.viewProjectionMatrix.m.m[2].v[3]) * 0.5;
  sunShadow->lookupMatrix.m.m[3].v[0] = (float)(sunShadow->partition[0].viewParms.viewProjectionMatrix.m.m[3].v[0] + sunShadow->partition[0].viewParms.viewProjectionMatrix.m.m[3].v[3]) * 0.5;
  sunShadow->lookupMatrix.m.m[0].v[1] = (float)(0.5 * sunShadow->partition[0].viewParms.viewProjectionMatrix.m.m[0].v[3]) - (float)(0.5 * sunShadow->partition[0].viewParms.viewProjectionMatrix.m.m[0].v[1]);
  sunShadow->lookupMatrix.m.m[1].v[1] = (float)(0.5 * sunShadow->partition[0].viewParms.viewProjectionMatrix.m.m[1].v[3]) - (float)(0.5 * sunShadow->partition[0].viewParms.viewProjectionMatrix.m.m[1].v[1]);
  sunShadow->lookupMatrix.m.m[2].v[1] = (float)(0.5 * sunShadow->partition[0].viewParms.viewProjectionMatrix.m.m[2].v[3]) - (float)(0.5 * sunShadow->partition[0].viewParms.viewProjectionMatrix.m.m[2].v[1]);
  sunShadow->lookupMatrix.m.m[3].v[1] = (float)(0.5 * sunShadow->partition[0].viewParms.viewProjectionMatrix.m.m[3].v[3]) - (float)(0.5 * sunShadow->partition[0].viewParms.viewProjectionMatrix.m.m[3].v[1]);
  sunShadow->lookupMatrix.m.m[0].v[2] = sunShadow->partition[0].viewParms.viewProjectionMatrix.m.m[0].v[2];
  sunShadow->lookupMatrix.m.m[1].v[2] = sunShadow->partition[0].viewParms.viewProjectionMatrix.m.m[1].v[2];
  sunShadow->lookupMatrix.m.m[2].v[2] = sunShadow->partition[0].viewParms.viewProjectionMatrix.m.m[2].v[2];
  sunShadow->lookupMatrix.m.m[3].v[2] = sunShadow->partition[0].viewParms.viewProjectionMatrix.m.m[3].v[2];
  sunShadow->lookupMatrix.m.m[0].v[3] = 0.0;
  sunShadow->lookupMatrix.m.m[1].v[3] = 0.0;
  sunShadow->lookupMatrix.m.m[2].v[3] = 0.0;
  sunShadow->lookupMatrix.m.m[3].v[3] = 1.0;
  if ( camera == (const GfxCamera *)&projSetupa && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 1093, ASSERT_TYPE_ASSERT, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
    __debugbreak();
  v25 = camera->origin.v[1];
  v26 = camera->origin.v[2];
  v27 = (float)((float)((float)(camera->origin.v[0] * sunShadow->lookupMatrix.m.m[0].v[0]) + (float)(v25 * sunShadow->lookupMatrix.m.m[1].v[0])) + (float)(v26 * sunShadow->lookupMatrix.m.m[2].v[0])) + sunShadow->lookupMatrix.m.m[3].v[0];
  sunShadow->sunProj.eyeOffset[0].v[1] = (float)((float)((float)(v25 * sunShadow->lookupMatrix.m.m[1].v[1]) + (float)(camera->origin.v[0] * sunShadow->lookupMatrix.m.m[0].v[1])) + (float)(v26 * sunShadow->lookupMatrix.m.m[2].v[1])) + sunShadow->lookupMatrix.m.m[3].v[1];
  sunShadow->sunProj.eyeOffset[0].v[0] = v27;
  v28 = sunShadow->sunProj.switchPartition[1].v[3];
  v29 = &sunShadow->sunProj.eyeOffset[1];
  sunShadow->sunProj.eyeOffset[1].v[0] = (float)(v27 * v28) + sunShadow->sunProj.switchPartition[1].v[0];
  sunShadow->sunProj.eyeOffset[1].v[1] = (float)(v28 * sunShadow->sunProj.eyeOffset[0].v[1]) + sunShadow->sunProj.switchPartition[1].v[1];
  v30 = sunShadow->sunProj.switchPartition[2].v[3];
  sunShadow->sunProj.eyeOffset[2].v[0] = (float)(v30 * sunShadow->sunProj.eyeOffset[0].v[0]) + sunShadow->sunProj.switchPartition[2].v[0];
  sunShadow->sunProj.eyeOffset[2].v[1] = (float)(v30 * sunShadow->sunProj.eyeOffset[0].v[1]) + sunShadow->sunProj.switchPartition[2].v[1];
  v31 = sunShadow->sunProj.switchPartition[3].v[3];
  sunShadow->sunProj.eyeOffset[3].v[0] = (float)(v31 * sunShadow->sunProj.eyeOffset[0].v[0]) + sunShadow->sunProj.switchPartition[3].v[0];
  sunShadow->sunProj.eyeOffset[3].v[1] = (float)(v31 * sunShadow->sunProj.eyeOffset[0].v[1]) + sunShadow->sunProj.switchPartition[3].v[1];
  _XMM0 = LODWORD(sunShadow->sunProj.eyeOffset[0].v[0]);
  __asm { vmaxss  xmm0, xmm0, xmm3 }
  value = r_sunShadowParams->current.value;
  sunShadow->sunProj.blendScale[0].v[0] = value / *(float *)&_XMM0;
  _XMM0 = LODWORD(sunShadow->sunProj.eyeOffset[0].v[1]);
  __asm { vmaxss  xmm1, xmm0, xmm3 }
  sunShadow->sunProj.blendScale[0].v[1] = value / *(float *)&_XMM1;
  v38 = LODWORD(FLOAT_1_0);
  *(float *)&v38 = 1.0 - sunShadow->sunProj.eyeOffset[0].v[0];
  _XMM0 = v38;
  __asm { vmaxss  xmm1, xmm0, xmm3 }
  sunShadow->sunProj.blendScale[0].v[2] = value / *(float *)&_XMM1;
  v41 = LODWORD(FLOAT_1_0);
  *(float *)&v41 = 1.0 - sunShadow->sunProj.eyeOffset[0].v[1];
  _XMM0 = v41;
  __asm { vmaxss  xmm1, xmm0, xmm3 }
  sunShadow->sunProj.blendScale[0].v[3] = value / *(float *)&_XMM1;
  _XMM0 = LODWORD(sunShadow->sunProj.eyeOffset[1].v[0]);
  __asm { vmaxss  xmm1, xmm0, xmm3 }
  sunShadow->sunProj.blendScale[1].v[0] = value / *(float *)&_XMM1;
  _XMM0 = LODWORD(sunShadow->sunProj.eyeOffset[1].v[1]);
  __asm { vmaxss  xmm1, xmm0, xmm3 }
  sunShadow->sunProj.blendScale[1].v[1] = value / *(float *)&_XMM1;
  v48 = LODWORD(FLOAT_1_0);
  *(float *)&v48 = 1.0 - sunShadow->sunProj.eyeOffset[1].v[0];
  _XMM0 = v48;
  __asm { vmaxss  xmm1, xmm0, xmm3 }
  sunShadow->sunProj.blendScale[1].v[2] = value / *(float *)&_XMM1;
  v51 = LODWORD(FLOAT_1_0);
  *(float *)&v51 = 1.0 - sunShadow->sunProj.eyeOffset[1].v[1];
  _XMM0 = v51;
  __asm { vmaxss  xmm1, xmm0, xmm3 }
  sunShadow->sunProj.blendScale[1].v[3] = value / *(float *)&_XMM1;
  _XMM0 = LODWORD(sunShadow->sunProj.eyeOffset[2].v[0]);
  __asm { vmaxss  xmm1, xmm0, xmm3 }
  sunShadow->sunProj.blendScale[2].v[0] = value / *(float *)&_XMM1;
  _XMM0 = LODWORD(sunShadow->sunProj.eyeOffset[2].v[1]);
  __asm { vmaxss  xmm1, xmm0, xmm3 }
  sunShadow->sunProj.blendScale[2].v[1] = value / *(float *)&_XMM1;
  v58 = LODWORD(FLOAT_1_0);
  *(float *)&v58 = 1.0 - sunShadow->sunProj.eyeOffset[2].v[0];
  _XMM0 = v58;
  __asm { vmaxss  xmm1, xmm0, xmm3 }
  sunShadow->sunProj.blendScale[2].v[2] = value / *(float *)&_XMM1;
  v61 = LODWORD(FLOAT_1_0);
  *(float *)&v61 = 1.0 - sunShadow->sunProj.eyeOffset[2].v[1];
  _XMM0 = v61;
  __asm { vmaxss  xmm1, xmm0, xmm3 }
  sunShadow->sunProj.blendScale[2].v[3] = value / *(float *)&_XMM1;
  _XMM0 = LODWORD(sunShadow->sunProj.eyeOffset[3].v[0]);
  __asm { vmaxss  xmm1, xmm0, xmm3 }
  sunShadow->sunProj.blendScale[3].v[0] = value / *(float *)&_XMM1;
  _XMM0 = LODWORD(sunShadow->sunProj.eyeOffset[3].v[1]);
  __asm { vmaxss  xmm1, xmm0, xmm3 }
  sunShadow->sunProj.blendScale[3].v[1] = value / *(float *)&_XMM1;
  v68 = LODWORD(FLOAT_1_0);
  *(float *)&v68 = 1.0 - sunShadow->sunProj.eyeOffset[3].v[0];
  _XMM0 = v68;
  __asm { vmaxss  xmm1, xmm0, xmm3 }
  sunShadow->sunProj.blendScale[3].v[2] = value / *(float *)&_XMM1;
  v71 = LODWORD(FLOAT_1_0);
  *(float *)&v71 = 1.0 - sunShadow->sunProj.eyeOffset[3].v[1];
  _XMM0 = v71;
  __asm { vmaxss  xmm1, xmm0, xmm3 }
  sunShadow->sunProj.blendScale[3].v[3] = value / *(float *)&_XMM1;
  v73 = &sunShadow->sunProj.blendScale[1].v[2];
  v74 = sunShadow->opaqueCascadeCount - 1;
  for ( i = 1; i < 3; ++i )
  {
    if ( i >= sunShadow->opaqueCascadeCount )
    {
      v = p_sunProj->blendScale[v74].v;
      *(v73 - 26) = p_sunProj->switchPartition[v74].v[0];
      *(v73 - 25) = p_sunProj->switchPartition[v74].v[1];
      *(v73 - 24) = p_sunProj->switchPartition[v74].v[2];
      *(v73 - 23) = p_sunProj->switchPartition[v74].v[3];
      v29->v[0] = p_sunProj->eyeOffset[v74].v[0];
      v29->v[1] = p_sunProj->eyeOffset[v74].v[1];
      *(v73 - 2) = *v;
      *(v73 - 1) = v[1];
      *v73 = v[2];
      v73[1] = v[3];
      *(v73 - 24) = COERCE_FLOAT(LODWORD(p_sunProj->switchPartition[v74].v[2]) ^ _xmm);
    }
    ++v29;
    v73 += 4;
  }
}

/*
==============
R_SetupSunShadowMapProjectionAndClipPlanes
==============
*/
void R_SetupSunShadowMapProjectionAndClipPlanes(GfxViewInfo *viewInfo, GfxBackEndData *data, const GfxCamera *camera, GfxSunShadowMapMetrics *mapMetrics, GfxSunShadow *sunShadow, GfxSunShadowClip *clip)
{
  float *v8; 
  __int64 v9; 
  vec2_t *shadowRays; 
  float *v11; 
  float v12; 
  float v13; 
  GfxSunShadowMapMetrics *v14; 
  GfxBackEndData *v15; 
  unsigned int v16; 
  bool v17; 
  unsigned int i; 
  __int64 cameraPlaneCount; 
  DpvsPlane *v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  GfxSunShadowOverlaySetup *p_overlaySetup; 
  float v29; 
  __m256i v30; 
  __int64 v31; 
  __int64 v32; 
  GfxSunShadowClip *v33; 
  __int64 v34; 
  signed __int64 v35; 
  __int64 v36; 
  __int64 v37; 
  float *v; 
  float v39; 
  float v40; 
  __int64 v41; 
  __int64 v42; 
  GfxSunShadowProjectionSetup *projSetup; 
  __int64 v44; 
  __int64 camerab; 
  signed __int64 v47; 
  GfxSunShadowProjectionSetup sunAxis; 
  GfxSunShadowFrustumRays cornerRays; 
  GfxBackEndData *dataa; 
  int v52; 
  int v53; 

  dataa = data;
  R_GetSunAxes(&data->sunShadow.lightDir, &sunAxis.sunAxis);
  R_GetFrustumCornerRays(camera, (vec3_t (*)[4])&cornerRays);
  *(_OWORD *)cornerRays.mins.v = 0i64;
  v8 = (float *)cornerRays.shadowRays + 1;
  v9 = 4i64;
  shadowRays = cornerRays.shadowRays;
  v11 = &cornerRays.worldRays[0].v[2];
  do
  {
    v12 = sunAxis.sunAxis.m[1].v[0];
    v13 = sunAxis.sunAxis.m[1].v[1];
    *(v8 - 1) = (float)((float)(sunAxis.sunAxis.m[0].v[0] * *(v11 - 2)) + (float)(sunAxis.sunAxis.m[0].v[1] * *(v11 - 1))) + (float)(sunAxis.sunAxis.m[0].v[2] * *v11);
    *v8 = (float)((float)(v12 * *(v11 - 2)) + (float)(v13 * *(v11 - 1))) + (float)(sunAxis.sunAxis.m[1].v[2] * *v11);
    AddPointToBounds2D(shadowRays++, &cornerRays.mins, &cornerRays.maxs);
    v11 += 3;
    v8 += 2;
    --v9;
  }
  while ( v9 );
  if ( cornerRays.maxs.v[0] <= cornerRays.mins.v[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 1345, ASSERT_TYPE_ASSERT, "( frustumRays->maxs[0] ) > ( frustumRays->mins[0] )", "%s > %s\n\t%g, %g", "frustumRays->maxs[0]", "frustumRays->mins[0]", cornerRays.maxs.v[0], cornerRays.mins.v[0]) )
    __debugbreak();
  if ( cornerRays.maxs.v[1] <= cornerRays.mins.v[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 1346, ASSERT_TYPE_ASSERT, "( frustumRays->maxs[1] ) > ( frustumRays->mins[1] )", "%s > %s\n\t%g, %g", "frustumRays->maxs[1]", "frustumRays->mins[1]", cornerRays.maxs.v[1], cornerRays.mins.v[1]) )
    __debugbreak();
  R_SetSunShadowSinesAndBoundingArcEdge(&cornerRays);
  v14 = mapMetrics;
  v15 = dataa;
  R_InitSunShadowProjectionSetupForFrustum(viewInfo, dataa, camera, mapMetrics, &cornerRays, &sunAxis);
  v16 = 0;
  v17 = cornerRays.boundingArcRay[0] == -1;
  *(_QWORD *)clip->planeCount = 0i64;
  *(_QWORD *)&clip->planeCount[2] = 0i64;
  sunShadow->cameraPlaneCount = 0;
  if ( !v17 )
    R_AddSunShadowClipPlanesForBoundingArc(&camera->origin, &sunAxis, &cornerRays, mapMetrics, clip, sunShadow);
  for ( i = 0; i < viewInfo->frustumPlaneCount; ++i )
  {
    if ( (float)((float)((float)(viewInfo->frustumPlanes[i].v[1] * sunShadow->lightDir.v[1]) + (float)(viewInfo->frustumPlanes[i].v[0] * sunShadow->lightDir.v[0])) + (float)(viewInfo->frustumPlanes[i].v[2] * sunShadow->lightDir.v[2])) > 0.0 )
    {
      cameraPlaneCount = sunShadow->cameraPlaneCount;
      v20 = &sunShadow->cameraPlanes[cameraPlaneCount];
      sunShadow->cameraPlaneCount = cameraPlaneCount + 1;
      v20->coeffs.v[0] = viewInfo->frustumPlanes[i].v[0];
      v20->coeffs.v[1] = viewInfo->frustumPlanes[i].v[1];
      v20->coeffs.v[2] = viewInfo->frustumPlanes[i].v[2];
      v20->coeffs.v[3] = viewInfo->frustumPlanes[i].v[3];
    }
  }
  do
    R_AddSunShadowClipPlanesForMapBoundary(&sunAxis, &cornerRays, mapMetrics, v16++, clip, sunShadow);
  while ( v16 < 4 );
  R_SetupSunShadowMapProjection(viewInfo, &sunAxis, mapMetrics, camera, sunShadow);
  v21 = sunAxis.sunAxis.m[0].v[0];
  v22 = sunAxis.sunAxis.m[0].v[1];
  v23 = sunAxis.sunAxis.m[1].v[0];
  sunShadow->cloudShadow.lookupMatrix[0][0] = sunAxis.sunAxis.m[0].v[0] * sunShadow->cloudShadow.scale;
  v24 = sunAxis.sunAxis.m[0].v[2];
  sunShadow->cloudShadow.lookupMatrix[1][0] = v22 * sunShadow->cloudShadow.scale;
  sunShadow->cloudShadow.lookupMatrix[2][0] = v24 * sunShadow->cloudShadow.scale;
  v25 = v21 * sunShadow->cloudShadow.scroll.v[0];
  v26 = sunAxis.sunAxis.m[1].v[1];
  sunShadow->cloudShadow.lookupMatrix[3][0] = (float)((float)(v23 * sunShadow->cloudShadow.scroll.v[1]) + v25) * sunShadow->cloudShadow.scale;
  sunShadow->cloudShadow.lookupMatrix[0][1] = v23 * sunShadow->cloudShadow.scale;
  v27 = sunAxis.sunAxis.m[1].v[2];
  sunShadow->cloudShadow.lookupMatrix[1][1] = v26 * sunShadow->cloudShadow.scale;
  sunShadow->cloudShadow.lookupMatrix[2][1] = v27 * sunShadow->cloudShadow.scale;
  sunShadow->cloudShadow.lookupMatrix[3][1] = (float)((float)(v26 * sunShadow->cloudShadow.scroll.v[1]) + (float)(v22 * sunShadow->cloudShadow.scroll.v[0])) * sunShadow->cloudShadow.scale;
  R_BuildCachedSunShadowOverlap(viewInfo, v15, sunShadow, &sunAxis, mapMetrics);
  p_overlaySetup = &sunShadow->overlaySetup;
  if ( sm_showOverlay->current.integer <= 4 )
  {
    v29 = sunAxis.shadowOrg.v[1];
    p_overlaySetup->shadowOrg.v[0] = sunAxis.shadowOrg.v[0];
    v30 = *(__m256i *)cornerRays.shadowRays[0].v;
    v31 = 0i64;
    v32 = 0i64;
    v33 = clip;
    v47 = (char *)p_overlaySetup - (char *)clip;
    v34 = 3i64;
    v35 = (char *)p_overlaySetup - (char *)clip;
    sunShadow->overlaySetup.shadowOrg.v[1] = v29;
    camerab = 3i64;
    *(__m256i *)sunShadow->overlaySetup.frustumShadowRays[0].v = v30;
    do
    {
      v36 = 0i64;
      v37 = 0i64;
      if ( v33->planeCount[0] )
      {
        do
        {
          v = clip->planes[0][v37 + v32].coeffs.v;
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(sunAxis.sunAxis.m[2].v[1] * v[1]) + (float)(sunAxis.sunAxis.m[2].v[0] * *v)) + (float)(sunAxis.sunAxis.m[2].v[2] * v[2])) & _xmm) <= 0.001 )
          {
            if ( (unsigned int)v36 >= 8 )
            {
              LODWORD(v44) = 8;
              LODWORD(projSetup) = v36;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 1887, ASSERT_TYPE_ASSERT, "(unsigned)( planeCount ) < (unsigned)( ( sizeof( *array_counter( overlaySetup->clipPlanes[partitionIter] ) ) + 0 ) )", "planeCount doesn't index ARRAY_COUNT( overlaySetup->clipPlanes[partitionIter] )\n\t%i not in [0, %i)", projSetup, v44) )
                __debugbreak();
              p_overlaySetup = &sunShadow->overlaySetup;
            }
            v39 = sunAxis.sunAxis.m[1].v[1];
            v40 = sunAxis.sunAxis.m[1].v[0];
            v41 = v36 + v31;
            p_overlaySetup->clipPlanes[0][v41].v[0] = (float)((float)(sunAxis.sunAxis.m[0].v[1] * v[1]) + (float)(sunAxis.sunAxis.m[0].v[0] * *v)) + (float)(sunAxis.sunAxis.m[0].v[2] * v[2]);
            v42 = v36 + v31 + 5;
            v36 = (unsigned int)(v36 + 1);
            p_overlaySetup->clipPlanes[0][v41].v[1] = (float)((float)(v39 * v[1]) + (float)(v40 * *v)) + (float)(sunAxis.sunAxis.m[1].v[2] * v[2]);
            p_overlaySetup->shadowOrg.v[3 * v42] = COERCE_FLOAT(*((_DWORD *)v + 3) ^ _xmm);
          }
          v37 = (unsigned int)(v37 + 1);
        }
        while ( (unsigned int)v37 < v33->planeCount[0] );
        v34 = camerab;
        v35 = v47;
      }
      *(_DWORD *)((char *)&v33->planes[0][1].coeffs.v[2] + v35) = v36;
      v32 += 9i64;
      v33 = (GfxSunShadowClip *)((char *)v33 + 4);
      v31 += 8i64;
      camerab = --v34;
    }
    while ( v34 );
    v14 = mapMetrics;
    v15 = dataa;
  }
  else
  {
    sunShadow->overlaySetup.clipPlaneCount[0] = 0;
  }
  if ( R_CompressedSunShadow_IsUsingGlobalBuffer() )
    R_CompressedSunShadow_CalcFilteringParams(v14->size, &sunAxis, v15);
  if ( rg.useCompressedSunShadow == 3 )
  {
    dataa = (GfxBackEndData *)0x40000000300i64;
    v52 = 1536;
    v53 = 2048;
    R_CompressedSunShadow_SetupCompression(*((_DWORD *)&dataa + (int)rg.shadowMapResolutionIndex), 1u, 0);
  }
}

/*
==============
R_SetupSunShadowMaps
==============
*/
void R_SetupSunShadowMaps(GfxBackEndData *data, GfxViewInfo *viewInfo, const GfxCamera *camera, GfxSunShadow *sunShadow)
{
  __int128 v4; 
  __int128 v5; 
  unsigned __int16 sunShadowOpaqueCascadeCount; 
  float v11; 
  float v12; 
  GfxBackEndData *v13; 
  __int64 localClientNum; 
  unsigned __int64 v15; 
  __int64 v16; 
  float sunshadowSoftness; 
  __int64 v18; 
  double v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  __int64 v24; 
  float v25; 
  __int64 v26; 
  GfxBackEndData *v27; 
  unsigned __int64 v28; 
  bool v29; 
  unsigned int firstCachedSunShadowPartition; 
  unsigned int lastCachedSunShadowPartition; 
  GfxSunShadow *p_sunShadow; 
  unsigned int gfxCachedSunShadowOverlapCount; 
  unsigned int v34; 
  int i; 
  GfxDrawList *v36; 
  float outNearClip; 
  float outFarClip; 
  GfxSunShadowMapMetrics mapMetrics; 
  GfxSunShadowClip clip; 
  int v41[4]; 
  __int128 v42; 
  __int128 v43; 

  sunShadowOpaqueCascadeCount = rg.sunShadowOpaqueCascadeCount;
  v43 = v4;
  v42 = v5;
  if ( rg.sunShadowOpaqueCascadeCount > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", LOWORD(rg.sunShadowOpaqueCascadeCount), "unsigned", rg.sunShadowOpaqueCascadeCount) )
    __debugbreak();
  sunShadow->opaqueCascadeCount = sunShadowOpaqueCascadeCount;
  sunShadow->firstCachedSunShadowPartition = truncate_cast<unsigned char,unsigned short>(rg.firstCachedSunShadowPartition);
  sunShadow->lastCachedSunShadowPartition = truncate_cast<unsigned char,unsigned short>(rg.lastCachedSunShadowPartition);
  outNearClip = 0.0;
  outFarClip = 0.0;
  R_SetupSunShadowMapMetrics(viewInfo, data, &mapMetrics, &outNearClip, &outFarClip);
  v11 = outNearClip;
  v12 = outFarClip;
  sunShadow->nearClip = outNearClip;
  sunShadow->staticNearClip = v11;
  sunShadow->farClip = v12;
  sunShadow->staticFarClip = v12;
  if ( frontEndDataOut->pipInfoCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 2113, ASSERT_TYPE_ASSERT, "(frontEndDataOut->pipInfoCount == 0)", (const char *)&queryFormat, "frontEndDataOut->pipInfoCount == 0") )
    __debugbreak();
  frontEndDataOut->sunShadow.partition[3].isPrevViewProjectionMatrixValid = 0;
  v13 = frontEndDataOut;
  localClientNum = (unsigned int)frontEndDataOut->localClientNum;
  if ( rg.useTransSunShadow && (*((_BYTE *)&viewInfo->viewportFeatures + 44) & 4) != 0 && viewInfo->drawList[27].codeSurfList.count )
  {
    v15 = (unsigned int)localClientNum;
    if ( g_previousFrameTransShadowViewProjectionMatrixIsValid[localClientNum] )
    {
      v16 = localClientNum << 6;
      *(__m256i *)frontEndDataOut->sunShadow.partition[3].prevViewProjectionMatrix.m.m[0].v = *(__m256i *)((char *)g_previousFrameTransShadowViewProjectionMatrix[0].m.m[0].v + v16);
      *(__m256i *)v13->sunShadow.partition[3].prevViewProjectionMatrix.m.row2.v = *(__m256i *)((char *)g_previousFrameTransShadowViewProjectionMatrix[0].m.row2.v + v16);
      frontEndDataOut->sunShadow.partition[3].isPrevViewProjectionMatrixValid = 1;
    }
  }
  else
  {
    v15 = (unsigned int)frontEndDataOut->localClientNum;
  }
  sunshadowSoftness = viewInfo->sunshadowSoftness;
  v41[0] = 768;
  v41[1] = 1024;
  v41[2] = 1536;
  v41[3] = 2048;
  v18 = (unsigned int)v41[rg.shadowMapResolutionIndex];
  v19 = I_fclamp(sunshadowSoftness, 0.0, 1.0);
  v20 = (float)((float)(1.0 - *(float *)&v19) * 0.0029296875) + (float)(*(float *)&v19 * 0.020507812);
  *(float *)&v19 = (float)mapMetrics.partitionRatio[0];
  v21 = (float)v18;
  v22 = v20 * v21;
  v23 = (float)(v20 * v21) / *(float *)&v19;
  *(float *)&v19 = (float)mapMetrics.partitionRatio[1];
  v24 = mapMetrics.partitionRatio[2];
  sunShadow->filterRadius.v[0] = v23;
  v25 = v22 / *(float *)&v19;
  *(float *)&v19 = (float)v24;
  sunShadow->filterRadius.v[3] = 0.0;
  sunShadow->filterRadius.v[1] = v25;
  sunShadow->filterRadius.v[2] = v22 / *(float *)&v19;
  R_SetupSunShadowMapProjectionAndClipPlanes(viewInfo, data, camera, &mapMetrics, sunShadow, &clip);
  if ( rg.useTransSunShadow && (*((_BYTE *)&viewInfo->viewportFeatures + 44) & 4) != 0 && viewInfo->drawList[27].codeSurfList.count )
  {
    v27 = frontEndDataOut;
    v28 = v15 << 6;
    *(__m256i *)((char *)g_previousFrameTransShadowViewProjectionMatrix[0].m.m[0].v + v28) = *(__m256i *)frontEndDataOut->sunShadow.partition[3].viewParms.viewProjectionMatrix.m.m[0].v;
    *(__m256i *)((char *)g_previousFrameTransShadowViewProjectionMatrix[0].m.row2.v + v28) = *(__m256i *)v27->sunShadow.partition[3].viewParms.viewProjectionMatrix.m.row2.v;
    v29 = 1;
  }
  else
  {
    if ( v15 >= 2 )
    {
      j___report_rangecheckfailure(v26);
      JUMPOUT(0x1423A2D9Ai64);
    }
    v29 = 0;
  }
  g_previousFrameTransShadowViewProjectionMatrixIsValid[v15] = v29;
  R_SetupSunShadowSurfacesDpvs(viewInfo, sunShadow);
  memset_0(&viewInfo->drawList[24], 0, sizeof(viewInfo->drawList[24]));
  viewInfo->drawList[24].codeSurfList.listType = GFX_CODE_SURFLIST_TYPE_COUNT;
  memset_0(&viewInfo->drawList[25], 0, sizeof(viewInfo->drawList[25]));
  viewInfo->drawList[25].codeSurfList.listType = GFX_CODE_SURFLIST_TYPE_COUNT;
  memset_0(&viewInfo->drawList[26], 0, sizeof(viewInfo->drawList[26]));
  viewInfo->drawList[26].codeSurfList.listType = GFX_CODE_SURFLIST_TYPE_COUNT;
  memset_0(&viewInfo->drawList[28], 0, sizeof(viewInfo->drawList[28]));
  viewInfo->drawList[28].codeSurfList.listType = GFX_CODE_SURFLIST_TYPE_COUNT;
  if ( viewInfo->useCachedSunShadow )
  {
    firstCachedSunShadowPartition = data->sunShadow.firstCachedSunShadowPartition;
    lastCachedSunShadowPartition = data->sunShadow.lastCachedSunShadowPartition;
    if ( firstCachedSunShadowPartition <= lastCachedSunShadowPartition )
    {
      p_sunShadow = &data->sunShadow;
      do
      {
        if ( !p_sunShadow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 383, ASSERT_TYPE_ASSERT, "(sunShadow)", (const char *)&queryFormat, "sunShadow") )
          __debugbreak();
        if ( !R_IsCachedSunShadowPartition(p_sunShadow, firstCachedSunShadowPartition) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 384, ASSERT_TYPE_ASSERT, "(R_IsCachedSunShadowPartition( sunShadow, partitionIndex ))", (const char *)&queryFormat, "R_IsCachedSunShadowPartition( sunShadow, partitionIndex )") )
          __debugbreak();
        gfxCachedSunShadowOverlapCount = p_sunShadow->partitionCache[firstCachedSunShadowPartition - p_sunShadow->firstCachedSunShadowPartition].gfxCachedSunShadowOverlapCount;
        if ( !p_sunShadow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 376, ASSERT_TYPE_ASSERT, "(sunShadow)", (const char *)&queryFormat, "sunShadow") )
          __debugbreak();
        if ( !R_IsCachedSunShadowPartition(p_sunShadow, firstCachedSunShadowPartition) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 377, ASSERT_TYPE_ASSERT, "(R_IsCachedSunShadowPartition( sunShadow, partitionIndex ))", (const char *)&queryFormat, "R_IsCachedSunShadowPartition( sunShadow, partitionIndex )") )
          __debugbreak();
        v34 = 0;
        for ( i = 10 * (firstCachedSunShadowPartition - p_sunShadow->firstCachedSunShadowPartition) + 45; v34 < gfxCachedSunShadowOverlapCount; v36->codeSurfList.listType = GFX_CODE_SURFLIST_TYPE_COUNT )
        {
          v36 = &viewInfo->drawList[v34 + i];
          memset_0(v36, 0, sizeof(GfxDrawList));
          ++v34;
        }
        ++firstCachedSunShadowPartition;
      }
      while ( firstCachedSunShadowPartition <= lastCachedSunShadowPartition );
    }
  }
}

/*
==============
R_ShadowMapDebug_GetRT
==============
*/
R_RT_DepthHandle *R_ShadowMapDebug_GetRT(R_RT_DepthHandle *result, unsigned int partition, R_RT_DepthHandle *debugSunShadowDepthRt)
{
  R_RT_Handle v5; 
  R_RT_Handle v6; 

  v5 = debugSunShadowDepthRt->R_RT_Handle;
  v5 = *R_RT_GetViewInternal(&v6, &v5, partition, 0);
  R_RT_DepthHandle::Cast(result, &v5);
  return result;
}

/*
==============
R_SunShadowAllocateStaticEntry
==============
*/
GfxCachedSunShadow *R_SunShadowAllocateStaticEntry(GfxBackEndData *data, unsigned int partitionIndex, const vec3_t *sunShadowLightDir, const int gridX, const int gridY, const float gridSize, float sampleSize, const float cachedLODRefDistance, const int x0, const int y0, GfxViewInfo *viewInfo, int *outValidEntryCount)
{
  GfxCachedSunShadow *v12; 
  GfxCachedSunShadow *prev; 
  unsigned __int16 v16; 
  unsigned int cachedSunShadowIndex; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  int v25; 
  int v26; 
  float *p_farClip; 
  float v28; 
  int v29; 
  float *p_nearClip; 
  GfxCachedSunShadow *result; 
  _QWORD sunAxis[5]; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  __int64 v36; 
  GfxViewport v37; 

  v12 = s_gfxCachedSunShadowListHead;
  prev = NULL;
  v16 = partitionIndex;
  while ( !prev || prev->inProcessing )
  {
    prev = v12->prev;
    v12 = prev;
  }
  --*outValidEntryCount;
  s_gfxCachedSunShadowListHead = v12;
  prev->sunShadowLightDir = *sunShadowLightDir;
  cachedSunShadowIndex = prev->cachedSunShadowIndex;
  prev->cachedLODRefDistance = cachedLODRefDistance;
  *(_QWORD *)&v37.x = 0x40000000300i64;
  *(_QWORD *)&v37.width = 0x80000000600i64;
  prev->gridSize = gridSize;
  prev->gridX = gridX;
  prev->gridY = gridY;
  v37.width = *(&v37.x + (int)rg.shadowMapResolutionIndex) >> 1;
  v37.height = v37.width;
  v37.y = v37.width * (cachedSunShadowIndex >> 3);
  v37.x = v37.width * (cachedSunShadowIndex & 7);
  prev->viewport = v37;
  R_GetSunAxes(sunShadowLightDir, (tmat33_t<vec3_t> *)&sunAxis[1]);
  v18 = *(float *)&sunAxis[1];
  v19 = *((float *)&sunAxis[1] + 1);
  v20 = *(float *)&sunAxis[2];
  v21 = *((float *)&sunAxis[2] + 1);
  v22 = *(float *)&sunAxis[3];
  v23 = *((float *)&sunAxis[3] + 1);
  prev->planes[0].coeffs.v[0] = *(float *)&sunAxis[1];
  prev->planes[0].coeffs.v[1] = v19;
  prev->planes[0].coeffs.v[2] = v20;
  prev->planes[0].coeffs.v[3] = (float)-gridX * gridSize;
  LODWORD(v24) = LODWORD(v18) ^ _xmm;
  prev->planes[1].coeffs.v[0] = COERCE_FLOAT(LODWORD(v18) ^ _xmm);
  prev->planes[1].coeffs.v[1] = COERCE_FLOAT(LODWORD(v19) ^ _xmm);
  prev->planes[1].coeffs.v[2] = COERCE_FLOAT(LODWORD(v20) ^ _xmm);
  prev->planes[1].coeffs.v[3] = (float)(gridX + 1) * gridSize;
  prev->planes[2].coeffs.v[0] = v21;
  prev->planes[2].coeffs.v[1] = v22;
  prev->planes[2].coeffs.v[2] = v23;
  prev->planes[2].coeffs.v[3] = (float)-gridY * gridSize;
  prev->planes[3].coeffs.v[0] = COERCE_FLOAT(LODWORD(v21) ^ _xmm);
  prev->planes[3].coeffs.v[1] = COERCE_FLOAT(LODWORD(v22) ^ _xmm);
  prev->planes[3].coeffs.v[2] = COERCE_FLOAT(LODWORD(v23) ^ _xmm);
  v25 = HIDWORD(sunAxis[4]);
  prev->planes[3].coeffs.v[3] = (float)(gridY + 1) * gridSize;
  v26 = sunAxis[4];
  prev->viewParms.viewMatrix.m.m[0].v[0] = v18;
  prev->viewParms.viewMatrix.m.m[1].v[0] = v19;
  prev->viewParms.viewMatrix.m.m[2].v[0] = v20;
  *(_QWORD *)prev->viewParms.viewMatrix.m.row3.v = 0i64;
  p_farClip = &prev->farClip;
  prev->viewParms.viewMatrix.m.m[0].v[1] = v21;
  prev->viewParms.viewMatrix.m.m[1].v[1] = v22;
  prev->viewParms.viewMatrix.m.m[2].v[1] = v23;
  LODWORD(v28) = v26 ^ _xmm;
  v29 = v33;
  prev->viewParms.viewMatrix.m.m[0].v[2] = v28;
  prev->viewParms.viewMatrix.m.m[1].v[2] = COERCE_FLOAT(v25 ^ _xmm);
  prev->viewParms.viewMatrix.m.m[2].v[2] = COERCE_FLOAT(v29 ^ _xmm);
  prev->viewParms.viewMatrix.m.m[3].v[2] = 0.0;
  prev->viewParms.viewMatrix.m.m[0].v[3] = 0.0;
  prev->viewParms.viewMatrix.m.m[1].v[3] = 0.0;
  prev->viewParms.viewMatrix.m.m[2].v[3] = 0.0;
  p_nearClip = &prev->nearClip;
  prev->viewParms.viewMatrix.m.m[3].v[3] = 1.0;
  if ( rg.useCompressedSunShadowClipPlanes )
  {
    R_CompressedSunShadow_GetCacheEntryClipPlanes(&data->sunShadow, prev->gridX, prev->gridY, sampleSize, &prev->nearClip, &prev->farClip);
  }
  else
  {
    *p_nearClip = data->sunShadow.nearClip;
    *p_farClip = data->sunShadow.farClip;
  }
  memset(&sunAxis[1], 0, 32);
  *(__m256i *)prev->viewParms.projectionMatrix.m.m[0].v = *(__m256i *)&sunAxis[1];
  v33 = 0i64;
  v34 = 0i64;
  v35 = 0i64;
  v36 = 0i64;
  *(__m256i *)prev->viewParms.projectionMatrix.m.row2.v = (__m256i)0;
  prev->viewParms.projectionMatrix.m.m[0].v[0] = 2.0 / gridSize;
  prev->viewParms.projectionMatrix.m.m[3].v[0] = (float)(-2 * gridX) - 1.0;
  prev->viewParms.projectionMatrix.m.m[1].v[1] = 2.0 / gridSize;
  prev->viewParms.projectionMatrix.m.m[3].v[1] = (float)(-2 * gridY) - 1.0;
  prev->viewParms.projectionMatrix.m.m[2].v[2] = -1.0 / (float)(*p_farClip - *p_nearClip);
  prev->viewParms.projectionMatrix.m.m[3].v[2] = *p_farClip / (float)(*p_farClip - *p_nearClip);
  prev->viewParms.projectionMatrix.m.m[3].v[3] = 1.0;
  *(_QWORD *)prev->viewParms.camera.origin.v = 0i64;
  prev->viewParms.camera.origin.v[2] = 0.0;
  prev->viewParms.camera.axis.m[0].v[0] = v28;
  prev->viewParms.camera.axis.m[0].v[1] = COERCE_FLOAT(v25 ^ _xmm);
  prev->viewParms.camera.axis.m[0].v[2] = COERCE_FLOAT(v29 ^ _xmm);
  prev->viewParms.camera.axis.m[1].v[0] = v24;
  prev->viewParms.camera.axis.m[1].v[1] = COERCE_FLOAT(LODWORD(v19) ^ _xmm);
  prev->viewParms.camera.axis.m[1].v[2] = COERCE_FLOAT(LODWORD(v20) ^ _xmm);
  prev->viewParms.camera.axis.m[2].v[0] = v21;
  prev->viewParms.camera.axis.m[2].v[1] = v22;
  prev->viewParms.camera.axis.m[2].v[2] = v23;
  *(_QWORD *)&prev->viewParms.camera.tanHalfFovX = 0i64;
  prev->viewParms.camera.depthHackFoV = 0i64;
  prev->viewParms.camera.zPlanes[0] = 0.0;
  prev->viewParms.camera.zPlanes[1] = prev->viewParms.projectionMatrix.m.m[3].v[2];
  prev->viewParms.camera.zPlanes[2] = 0.0;
  prev->viewParms.camera.zPlanes[3] = prev->viewParms.projectionMatrix.m.m[3].v[2];
  MatrixMultiply44Aligned(&prev->viewParms.viewMatrix.m, &prev->viewParms.projectionMatrix.m, &prev->viewParms.viewProjectionMatrix.m);
  MatrixInverse44Aligned(&prev->viewParms.viewProjectionMatrix.m, &prev->viewParms.inverseViewProjectionMatrix.m);
  *(_DWORD *)&prev->bspOnly = 0;
  result = prev;
  prev->needEviction = 0;
  *(_WORD *)&prev->allocated = 1;
  prev->refreshQueued = 0;
  prev->partitionIndex = v16;
  *(_QWORD *)&prev->updateFrameIndex = 0i64;
  *(_QWORD *)&prev->terrainUpdateFrameIndex = 0i64;
  *(_QWORD *)&prev->smodelUpdateCount = 0i64;
  *(_QWORD *)&prev->genVis = 0i64;
  *(_QWORD *)&prev->genSmodel = 0i64;
  *(_QWORD *)&prev->smodelCount = 0i64;
  prev->missingTransient[1] = 0;
  return result;
}

/*
==============
R_SunShadowCache_AllocateSmodel
==============
*/
__int64 R_SunShadowCache_AllocateSmodel()
{
  __int64 result; 

  if ( s_smodelsAllocation.m_numAllocated == 0x10000 )
    return 0xFFFFFFFFi64;
  ++s_smodelsAllocation.m_numAllocated;
  result = s_smodelsAllocation.m_firstFree;
  s_smodelsAllocation.m_firstFree = (unsigned __int16)(LOWORD(s_smodelsAllocation.m_firstFree) + 1);
  return result;
}

/*
==============
R_SunShadowCache_AllocateStNode
==============
*/
__int64 R_SunShadowCache_AllocateStNode()
{
  __int64 result; 

  if ( s_terrainAllocation.m_numAllocated == 0x2000 )
    return 0xFFFFFFFFi64;
  ++s_terrainAllocation.m_numAllocated;
  result = s_terrainAllocation.m_firstFree;
  s_terrainAllocation.m_firstFree = (LOWORD(s_terrainAllocation.m_firstFree) + 1) & 0x1FFF;
  return result;
}

/*
==============
R_SunShadowCache_CheckEntryBoundsOverlap
==============
*/
bool R_SunShadowCache_CheckEntryBoundsOverlap(GfxCachedSunShadow *entry, Bounds *worldBounds)
{
  __m128 v2; 
  __m128 v3; 
  float v4; 
  float v5; 
  float v6; 
  float v10; 
  float v12; 
  float v14; 
  float v15; 
  float v17; 
  float v18; 
  float v19; 
  double v20; 
  float v21; 
  double v22; 
  float v23; 
  double v24; 
  float v25; 
  double v26; 

  v4 = worldBounds->midPoint.v[0] - entry->viewParms.camera.origin.v[0];
  worldBounds->midPoint.v[0] = v4;
  v5 = worldBounds->midPoint.v[1] - entry->viewParms.camera.origin.v[1];
  worldBounds->midPoint.v[1] = v5;
  v6 = worldBounds->midPoint.v[2] - entry->viewParms.camera.origin.v[2];
  worldBounds->midPoint.v[2] = v6;
  _YMM7 = *(__m256i *)entry->viewParms.viewProjectionMatrix.m.m[0].v;
  __asm
  {
    vextractf128 xmm5, ymm7, 1
    vextractf128 xmm9, ymm7, 1
  }
  v10 = _mm_shuffle_ps(v2, v2, 85).m128_f32[0];
  _YMM13 = *(__m256i *)entry->viewParms.viewProjectionMatrix.m.row2.v;
  v12 = (float)((float)(*(float *)&_XMM5 * v5) + (float)(v2.m128_f32[0] * v4)) + (float)(v3.m128_f32[0] * v6);
  __asm { vextractf128 xmm1, ymm13, 1 }
  v14 = v12 + *(float *)&_XMM1;
  _XMM9.m128_f32[0] = _mm_shuffle_ps(_XMM9, _XMM9, 85).m128_f32[0];
  v15 = _mm_shuffle_ps(v3, v3, 85).m128_f32[0];
  __asm { vextractf128 xmm1, ymm13, 1 }
  v17 = (float)((float)((float)(v10 * worldBounds->midPoint.v[0]) + (float)(_XMM9.m128_f32[0] * worldBounds->midPoint.v[1])) + (float)(v15 * v6)) + _mm_shuffle_ps(_XMM1, _XMM1, 85).m128_f32[0];
  v18 = (float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&_XMM5 * worldBounds->halfSize.v[1]) & _xmm) + COERCE_FLOAT(COERCE_UNSIGNED_INT(v2.m128_f32[0] * worldBounds->halfSize.v[0]) & _xmm)) + COERCE_FLOAT(COERCE_UNSIGNED_INT(v3.m128_f32[0] * worldBounds->halfSize.v[2]) & _xmm);
  v19 = (float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(_XMM9.m128_f32[0] * worldBounds->halfSize.v[1]) & _xmm) + COERCE_FLOAT(COERCE_UNSIGNED_INT(v10 * worldBounds->halfSize.v[0]) & _xmm)) + COERCE_FLOAT(COERCE_UNSIGNED_INT(v15 * worldBounds->halfSize.v[2]) & _xmm);
  v20 = I_fclamp(v14 - v18, 0.0, 1.0);
  v21 = *(float *)&v20;
  v22 = I_fclamp(v18 + v14, 0.0, 1.0);
  v23 = *(float *)&v22;
  v24 = I_fclamp(v17 - v19, 0.0, 1.0);
  v25 = *(float *)&v24;
  v26 = I_fclamp(v19 + v17, 0.0, 1.0);
  if ( v21 > v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 216, ASSERT_TYPE_ASSERT, "(minX <= maxX)", (const char *)&queryFormat, "minX <= maxX") )
    __debugbreak();
  if ( v25 > *(float *)&v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 217, ASSERT_TYPE_ASSERT, "(minY <= maxY)", (const char *)&queryFormat, "minY <= maxY") )
    __debugbreak();
  if ( v21 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 218, ASSERT_TYPE_ASSERT, "(minX >= 0.0f)", (const char *)&queryFormat, "minX >= 0.0f") )
    __debugbreak();
  if ( v25 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 219, ASSERT_TYPE_ASSERT, "(minY >= 0.0f)", (const char *)&queryFormat, "minY >= 0.0f") )
    __debugbreak();
  return (float)(v23 - v21) > 0.0 && (float)(*(float *)&v26 - v25) > 0.0;
}

/*
==============
R_SunShadowCache_ComputeSmodelExtentsMask
==============
*/
void R_SunShadowCache_ComputeSmodelExtentsMask(const Bounds *worldBounds, const GfxMatrix *worldToViewport, GfxCachedSunShadow_Smodel *outSmodel)
{
  __int64 v4; 
  __int64 v5; 
  unsigned __int64 v6; 
  unsigned int v7[6]; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 

  Bounds_OverlapProjectionGrid(worldBounds, &worldToViewport->m, 8u, &v9, &v8, &v10, v7);
  v4 = v7[0];
  v5 = (unsigned int)(((1 << v10) - 1) << (v9 + 8 * v8));
  v6 = 0i64;
  outSmodel->extentsMask = 0i64;
  if ( (_DWORD)v4 )
  {
    do
    {
      v6 |= v5;
      v5 <<= 8;
      --v4;
    }
    while ( v4 );
  }
  outSmodel->extentsMask = v6;
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 2748, ASSERT_TYPE_ASSERT, "(outSmodel->extentsMask != 0)", (const char *)&queryFormat, "outSmodel->extentsMask != 0") )
    __debugbreak();
}

/*
==============
R_SunShadowCache_DeallocateSmodels
==============
*/
void R_SunShadowCache_DeallocateSmodels(GfxCachedSunShadow *entry)
{
  unsigned int firstSmodelId; 

  firstSmodelId = entry->firstSmodelId;
  if ( firstSmodelId != -1 )
  {
    s_smodelsAllocation.m_numAllocated -= (unsigned __int16)(entry->lastSmodelId - firstSmodelId + 1);
    *(_QWORD *)&entry->firstSmodelId = -1i64;
  }
}

/*
==============
R_SunShadowCache_DeallocateStNodes
==============
*/
void R_SunShadowCache_DeallocateStNodes(GfxCachedSunShadow *entry)
{
  unsigned int firstStNodeId; 

  firstStNodeId = entry->firstStNodeId;
  if ( firstStNodeId != -1 )
  {
    s_terrainAllocation.m_numAllocated -= ((unsigned __int16)entry->lastStNodeId - (_WORD)firstStNodeId + 1) & 0x1FFF;
    *(_QWORD *)&entry->firstStNodeId = -1i64;
  }
}

/*
==============
R_SunShadowCache_EndProcessing
==============
*/
void R_SunShadowCache_EndProcessing(GfxCachedSunShadowOverlap *overlap)
{
  __int64 p_inProcessingCount; 
  volatile int *v3; 
  GfxCachedSunShadow *staticEntry; 
  GfxCachedSunShadow *bspEntry; 
  bool modelsFinalized; 
  bool v7; 
  bool v8; 

  if ( overlap )
  {
    p_inProcessingCount = (__int64)&overlap->inProcessingCount;
    v3 = &overlap->inProcessingCount;
    if ( overlap->inProcessingCount > 0 )
      goto LABEL_7;
  }
  else
  {
    p_inProcessingCount = 24i64;
  }
  v3 = (volatile int *)p_inProcessingCount;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 2761, ASSERT_TYPE_ASSERT, "(overlap && overlap->inProcessingCount > 0)", (const char *)&queryFormat, "overlap && overlap->inProcessingCount > 0") )
    __debugbreak();
LABEL_7:
  if ( ((unsigned __int8)v3 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)v3) )
    __debugbreak();
  if ( _InterlockedExchangeAdd(v3, 0xFFFFFFFF) <= 1 )
  {
    staticEntry = overlap->staticEntry;
    bspEntry = overlap->bspEntry;
    if ( (!overlap->staticEntry || !staticEntry->inProcessing) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 2770, ASSERT_TYPE_ASSERT, "(staticEntry && staticEntry->inProcessing)", (const char *)&queryFormat, "staticEntry && staticEntry->inProcessing") )
      __debugbreak();
    if ( bspEntry && !bspEntry->inProcessing && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 2771, ASSERT_TYPE_ASSERT, "(!bspEntry || bspEntry->inProcessing)", (const char *)&queryFormat, "!bspEntry || bspEntry->inProcessing") )
      __debugbreak();
    modelsFinalized = staticEntry->modelsFinalized;
    v7 = modelsFinalized && staticEntry->terrainFinalized;
    staticEntry->finalized = v7;
    v8 = !overlap->gen;
    overlap->terrainSkipBspTile = modelsFinalized;
    if ( !v8 && staticEntry->modelsFinalized )
      overlap->bspEntry = NULL;
    staticEntry->inProcessing = 0;
    if ( bspEntry )
      bspEntry->inProcessing = 0;
  }
}

/*
==============
R_SunShadowCache_Flush
==============
*/
void R_SunShadowCache_Flush(void)
{
  float *v0; 
  unsigned int v1; 
  __int64 v2; 
  int v3; 
  __int64 v4; 
  __int128 v5; 
  __int64 v6; 
  __int128 v7; 

  HIDWORD(v7) = 2048;
  v0 = &s_gfxCachedSunShadowStore[0].sunShadowLightDir.v[2];
  LODWORD(v7) = 768;
  v1 = 0;
  *(_QWORD *)((char *)&v7 + 4) = 0x60000000400i64;
  v2 = 1i64;
  v3 = *((_DWORD *)&v7 + (int)rg.shadowMapResolutionIndex) >> 1;
  DWORD2(v7) = v3;
  HIDWORD(v7) = v3;
  s_gfxCachedSunShadowListHead = s_gfxCachedSunShadowStore;
  s_smodelsAllocation = 0i64;
  s_terrainAllocation = 0i64;
  do
  {
    *((_WORD *)v0 + 240) = 0;
    *((_BYTE *)v0 + 482) = 0;
    *((_WORD *)v0 + 242) = 0;
    *((_WORD *)v0 - 8) = 0;
    *(_WORD *)((char *)v0 - 13) = 0;
    *((_BYTE *)v0 - 11) = 0;
    LODWORD(v7) = v3 * (v1 & 7);
    *((_BYTE *)v0 - 14) = 0;
    v4 = v2 & 0x3F;
    *(_QWORD *)(v0 + 5) = 0i64;
    ++v2;
    *((_WORD *)v0 + 14) = 0;
    *((_QWORD *)v0 - 1) = 0i64;
    *v0 = 0.0;
    *((_WORD *)v0 + 243) = v1;
    *((_QWORD *)v0 + 63) = -1i64;
    *((_QWORD *)v0 + 64) = -1i64;
    v0 += 152;
    DWORD1(v7) = v3 * ((unsigned __int16)v1 >> 3);
    v5 = v7;
    v6 = v4;
    LOBYTE(v4) = v1++ - 1;
    *((_QWORD *)v0 - 3) = &s_gfxCachedSunShadowStore[v6];
    *(_OWORD *)(v0 - 30) = v5;
    *((_QWORD *)v0 - 4) = &s_gfxCachedSunShadowStore[v4 & 0x3F];
    *(_QWORD *)(v0 - 11) = 0i64;
  }
  while ( v1 < 0x40 );
}

/*
==============
R_SunShadowCache_FreeRts
==============
*/

void __fastcall R_SunShadowCache_FreeRts(double _XMM0_8)
{
  R_RT_Handle depthRts; 

  if ( s_R_SunShadowCache.depthRts.m_surfaceID && (R_RT_Handle::GetSurface(&s_R_SunShadowCache.depthRts), s_R_SunShadowCache.depthRts.m_surfaceID) )
  {
    R_RT_Handle::GetSurface(&s_R_SunShadowCache.depthRts);
    depthRts = (R_RT_Handle)s_R_SunShadowCache.depthRts;
    if ( LOWORD(_XMM0_8) )
    {
      R_RT_Handle::GetSurface(&depthRts);
      if ( (R_RT_Handle::GetSurface(&depthRts)->m_rtFlagsInternal & 3u) < 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 877, ASSERT_TYPE_ASSERT, "(R_RT_GetLifetimeFromFlags( rt.GetFlagsInternal() ) >= R_RT_Lifetime_MultiFrame)", (const char *)&queryFormat, "R_RT_GetLifetimeFromFlags( rt.GetFlagsInternal() ) >= R_RT_Lifetime_MultiFrame", *(_QWORD *)&depthRts.m_surfaceID, *(_QWORD *)&depthRts.m_tracking.m_allocCounter, depthRts.m_tracking.m_name, depthRts.m_tracking.m_location) )
        __debugbreak();
      R_RT_DestroyInternal(&depthRts);
    }
    else if ( s_R_SunShadowCache.depthRts.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", *(_QWORD *)&depthRts.m_surfaceID, *(_QWORD *)&depthRts.m_tracking.m_allocCounter, depthRts.m_tracking.m_name, depthRts.m_tracking.m_location) )
    {
      __debugbreak();
    }
    __asm { vpxor   xmm0, xmm0, xmm0 }
    depthRts.m_surfaceID = 0;
    depthRts.m_tracking.m_allocCounter = 0;
    *(_OWORD *)&depthRts.m_tracking.m_name = _XMM0;
    s_R_SunShadowCache = (R_SunShadowCache_Internal)depthRts;
  }
  else if ( s_R_SunShadowCache.depthRts.m_tracking.m_allocCounter )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
}

/*
==============
R_SunShadowCache_GetBackFaceDepthArrayRtDraw3D
==============
*/
R_RT_DepthHandle *R_SunShadowCache_GetBackFaceDepthArrayRtDraw3D(R_RT_DepthHandle *result)
{
  result->m_surfaceID = 0;
  result->m_tracking.m_allocCounter = 0;
  result->m_tracking.m_name = NULL;
  result->m_tracking.m_location = NULL;
  return result;
}

/*
==============
R_SunShadowCache_GetBackFaceDepthRtDraw3D
==============
*/
R_RT_DepthHandle *R_SunShadowCache_GetBackFaceDepthRtDraw3D(R_RT_DepthHandle *result, unsigned int cellIndex)
{
  result->m_surfaceID = 0;
  result->m_tracking.m_allocCounter = 0;
  result->m_tracking.m_name = NULL;
  result->m_tracking.m_location = NULL;
  return result;
}

/*
==============
R_SunShadowCache_GetDebugDepthArrayRtDraw3D
==============
*/
R_RT_DepthHandle *R_SunShadowCache_GetDebugDepthArrayRtDraw3D(R_RT_DepthHandle *result)
{
  R_SunShadowMapDebug_CreateRTDraw3D();
  *result = s_debugSunShadowDepthRt;
  return result;
}

/*
==============
R_SunShadowCache_GetDepthArrayRtDraw3D
==============
*/
R_RT_DepthHandle *R_SunShadowCache_GetDepthArrayRtDraw3D(R_RT_DepthHandle *result)
{
  *result = s_R_SunShadowCache.depthRts;
  return result;
}

/*
==============
R_SunShadowCache_GetDepthRt
==============
*/
R_RT_DepthHandle *R_SunShadowCache_GetDepthRt(R_RT_DepthHandle *result, unsigned int cellIndex, R_RT_DepthHandle *sunShadowCacheDepthRts)
{
  *result = *sunShadowCacheDepthRts;
  return result;
}

/*
==============
R_SunShadowCache_GetDepthRtDraw3D
==============
*/
R_RT_DepthHandle *R_SunShadowCache_GetDepthRtDraw3D(R_RT_DepthHandle *result, unsigned int cellIndex)
{
  if ( cellIndex >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 2500, ASSERT_TYPE_ASSERT, "(cellIndex < 64)", (const char *)&queryFormat, "cellIndex < MAX_CACHED_SUN_SHADOWS") )
    __debugbreak();
  *result = s_R_SunShadowCache.depthRts;
  return result;
}

/*
==============
R_SunShadowCache_GetEntryDebugId
==============
*/
signed __int64 R_SunShadowCache_GetEntryDebugId(const GfxCachedSunShadow *entry)
{
  return entry - s_gfxCachedSunShadowStore;
}

/*
==============
R_SunShadowCache_GetSmodel
==============
*/
GfxCachedSunShadow_Smodel *R_SunShadowCache_GetSmodel(unsigned int smodelId)
{
  return &s_smodels[smodelId];
}

/*
==============
R_SunShadowCache_GetStNode
==============
*/
GfxCachedSunShadow_StNode *R_SunShadowCache_GetStNode(unsigned int nodeId)
{
  __int64 v1; 
  int v4; 

  v1 = nodeId;
  if ( nodeId >= 0x2000 )
  {
    v4 = 0x2000;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 2723, ASSERT_TYPE_ASSERT, "(unsigned)( nodeId ) < (unsigned)( ( sizeof( *array_counter( s_terrainNodes ) ) + 0 ) )", "nodeId doesn't index ARRAY_COUNT( s_terrainNodes )\n\t%i not in [0, %i)", nodeId, v4) )
      __debugbreak();
  }
  return &s_terrainNodes[v1];
}

/*
==============
R_SunShadowCache_LazyAllocRts
==============
*/

void __fastcall R_SunShadowCache_LazyAllocRts(double _XMM0_8)
{
  int v2; 
  unsigned int v3; 
  int v4[4]; 
  R_RT_DepthHandle result; 

  if ( s_R_SunShadowCache.depthRts.m_surfaceID )
  {
    R_RT_Handle::GetSurface(&s_R_SunShadowCache.depthRts);
  }
  else
  {
    if ( s_R_SunShadowCache.depthRts.m_tracking.m_allocCounter != s_R_SunShadowCache.depthRts.m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_DWORD *)&result.m_surfaceID = 768;
    *((_DWORD *)&result.m_surfaceID + 1) = 1024;
    result.m_tracking.m_allocCounter = 1536;
    *(&result.m_tracking.m_allocCounter + 1) = 2048;
    v2 = *((_DWORD *)&result.m_surfaceID + (int)rg.shadowMapResolutionIndex) >> 1;
    s_R_SunShadowCache.depthRts.m_surfaceID = 0;
    s_R_SunShadowCache.depthRts.m_tracking.m_allocCounter = 0;
    v4[0] = 768;
    v4[1] = 1024;
    v4[2] = 1536;
    v4[3] = 2048;
    v3 = 8 * ((unsigned int)v4[rg.shadowMapResolutionIndex] >> 1);
    *(_OWORD *)&s_R_SunShadowCache.depthRts.m_tracking.m_name = _XMM0;
    s_R_SunShadowCache = *(R_SunShadowCache_Internal *)R_RT_CreateDepthInternal(&result, 8 * v2, v3, 1u, 1u, GFX_DEPTHSTENCIL_FORMAT_SHADOWMAP, R_RT_Flag_None, R_RT_FlagInternal_MaskLifetime, *(float *)&_XMM0, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "R_RENDERTARGET_CACHED_SUN", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp(2486)");
  }
}

/*
==============
R_SunShadowCache_NextSmodelId
==============
*/
__int64 R_SunShadowCache_NextSmodelId(unsigned int smodelId, unsigned int lastId)
{
  if ( smodelId == lastId )
    return 0xFFFFFFFFi64;
  else
    return (unsigned __int16)(smodelId + 1);
}

/*
==============
R_SunShadowCache_NextStNodeId
==============
*/
__int64 R_SunShadowCache_NextStNodeId(unsigned int nodeId, unsigned int lastId)
{
  if ( nodeId == lastId )
    return 0xFFFFFFFFi64;
  else
    return ((_WORD)nodeId + 1) & 0x1FFF;
}

/*
==============
R_SunShadowCache_ResetAllocations
==============
*/
void R_SunShadowCache_ResetAllocations(void)
{
  s_smodelsAllocation = 0i64;
  s_terrainAllocation = 0i64;
}

/*
==============
R_SunShadowMapDebug_CreateRTDraw3D
==============
*/
void R_SunShadowMapDebug_CreateRTDraw3D(void)
{
  unsigned int v0; 
  unsigned int v1; 
  unsigned int height[4]; 
  R_RT_DepthHandle width; 

  if ( !s_debugSunShadowDepthRtInited )
  {
    height[0] = 768;
    height[1] = 1024;
    height[2] = 1536;
    height[3] = 2048;
    v0 = height[rg.shadowMapResolutionIndex];
    *(_DWORD *)&width.m_surfaceID = 768;
    *((_DWORD *)&width.m_surfaceID + 1) = 1024;
    width.m_tracking.m_allocCounter = 1536;
    *(&width.m_tracking.m_allocCounter + 1) = 2048;
    v1 = *((_DWORD *)&width.m_surfaceID + (int)rg.shadowMapResolutionIndex);
    s_debugSunShadowDepthRtInited = 1;
    s_debugSunShadowDepthRt = *R_RT_CreateDepthInternal(&width, v1, v0, 3u, 1u, GFX_DEPTHSTENCIL_FORMAT_SHADOWMAP, R_RT_Flag_None, (R_RT_FlagsInternal)2, 0.0, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE, "SunShadowDebug", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp(2414)");
  }
}

/*
==============
R_SunShadowMapDebug_DestroyRTDraw3D
==============
*/

void __fastcall R_SunShadowMapDebug_DestroyRTDraw3D(double _XMM0_8)
{
  R_RT_Handle v2; 

  if ( s_debugSunShadowDepthRtInited )
  {
    s_debugSunShadowDepthRtInited = 0;
    v2 = (R_RT_Handle)s_debugSunShadowDepthRt;
    R_RT_DestroyInternal(&v2);
    __asm { vpxor   xmm0, xmm0, xmm0 }
    s_debugSunShadowDepthRt.m_surfaceID = 0;
    s_debugSunShadowDepthRt.m_tracking.m_allocCounter = 0;
    *(_OWORD *)&s_debugSunShadowDepthRt.m_tracking.m_name = _XMM0;
  }
}

/*
==============
R_SunShadowMapDebug_GetRTDraw3D
==============
*/
R_RT_DepthHandle *R_SunShadowMapDebug_GetRTDraw3D(R_RT_DepthHandle *result, unsigned int partition)
{
  R_RT_Handle v5; 
  R_RT_Handle v6; 

  R_SunShadowMapDebug_CreateRTDraw3D();
  v5 = (R_RT_Handle)s_debugSunShadowDepthRt;
  v5 = *R_RT_GetViewInternal(&v6, &v5, partition, 0);
  R_RT_DepthHandle::Cast(result, &v5);
  return result;
}

/*
==============
R_SunShadowPreCache_EnabledForPartition
==============
*/
__int64 R_SunShadowPreCache_EnabledForPartition(const GfxSunShadow *const sunShadow, unsigned int partitionIndex)
{
  const dvar_t *v2; 

  v2 = DVARBOOL_r_sunshadow_preCacheEnabled;
  if ( !DVARBOOL_r_sunshadow_preCacheEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_sunshadow_preCacheEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  return v2->current.color[0];
}

/*
==============
R_SunShadow_GetMapSize
==============
*/
__int64 R_SunShadow_GetMapSize(GfxShadowMapTileResolution resolutionIndex)
{
  int v2[4]; 

  v2[0] = 768;
  v2[1] = 1024;
  v2[2] = 1536;
  v2[3] = 2048;
  return (unsigned int)v2[resolutionIndex];
}

/*
==============
R_SunShadow_GetMapSize
==============
*/
__int64 R_SunShadow_GetMapSize()
{
  int v1[4]; 

  v1[0] = 768;
  v1[1] = 1024;
  v1[2] = 1536;
  v1[3] = 2048;
  return (unsigned int)v1[rg.shadowMapResolutionIndex];
}

/*
==============
R_SunShadow_TranslucentEnabled
==============
*/
bool R_SunShadow_TranslucentEnabled(const GfxViewInfo *viewInfo)
{
  return rg.useTransSunShadow && (*((_BYTE *)&viewInfo->viewportFeatures + 44) & 4) != 0 && viewInfo->drawList[27].codeSurfList.count;
}

