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
  int v25; 
  int v26; 
  char v36; 
  int *v37; 
  GfxViewInfo *v38; 
  bool v39; 
  char v40; 
  __int64 v41; 
  GfxCachedSunShadow *SunShadowCacheEntry; 
  char v45; 
  int v46; 
  GfxCachedSunShadow *v47; 
  unsigned int cachedSunShadowIndex; 
  __int64 v49; 
  __int64 gfxCachedSunShadowOverlapCount; 
  GfxDrawListType CachedDrawListIndexForSunShadowPartition; 
  char v53; 
  bool v54; 
  unsigned __int16 lastUpdateTimestamp; 
  __int64 v71; 
  __int64 v91; 
  char v92; 
  float v99; 
  float v100; 
  float v101; 
  float v102; 
  float v103; 
  char v104; 
  char v105; 
  vec3_t *sunShadowLightDir_8; 
  __int128 sunShadowLightDir_8a; 
  GfxViewInfo *v110; 
  int v111; 
  int v112; 
  int v113; 
  int v114; 
  int v115; 
  int v116; 
  int v117; 
  int v118; 
  int v119; 
  int v120; 
  char v121; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
  }
  _R14 = staticEntry;
  _RSI = data;
  v25 = gridX;
  v26 = gridY;
  __asm
  {
    vmovss  xmm6, [rbp+60h+gridSize]
    vmovss  xmm8, [rbp+60h+sampleSize]
    vmovss  xmm7, [rbp+60h+cachedLODRefDistance]
  }
  _RDI = NULL;
  v113 = 768;
  v114 = 1024;
  v115 = 1536;
  v116 = 2048;
  __asm
  {
    vxorps  xmm10, xmm10, xmm10
    vcvtsi2ss xmm10, xmm10, rax
  }
  v117 = 768;
  v118 = 1024;
  v119 = 1536;
  v120 = 2048;
  __asm
  {
    vxorps  xmm9, xmm9, xmm9
    vcvtsi2ss xmm9, xmm9, rax
  }
  v36 = 0;
  v37 = outValidEntryCount;
  v38 = viewInfo;
  sunShadowLightDir_8 = (vec3_t *)sunShadowLightDir;
  v110 = viewInfo;
  v104 = 0;
  v39 = staticEntry == NULL;
  if ( staticEntry )
  {
    if ( staticEntry->refreshPending && allowRendering )
    {
      v36 = 1;
      staticEntry->refreshPending = 0;
      v104 = 1;
    }
    v39 = staticEntry == NULL;
  }
  v40 = v39;
  v41 = 3i64;
  if ( staticEntry && (!staticEntry->modelsFinalized || v36) )
  {
    __asm
    {
      vmovss  xmm3, dword ptr [r14+18h]; farClip
      vmovss  xmm2, dword ptr [r14+14h]; nearClip
      vmovss  [rsp+160h+var_128], xmm7
      vmovss  [rsp+160h+var_130], xmm6
    }
    SunShadowCacheEntry = R_FindSunShadowCacheEntry(partitionIndex, sunShadowLightDir, *(const float *)&_XMM2, *(const float *)&_XMM3, v25, gridY, v100, v102, GFX_SUN_SHADOW_CACHE_POLICY_BSP_LRU);
    sunShadowLightDir = sunShadowLightDir_8;
    v38 = v110;
    _RDI = SunShadowCacheEntry;
    v37 = outValidEntryCount;
    v25 = gridX;
    v40 |= SunShadowCacheEntry == NULL;
    v26 = gridY;
  }
  v45 = v40;
  if ( !staticEntry )
    v45 = 1;
  v105 = v45 | v104;
  if ( !staticEntry )
  {
    __asm
    {
      vmovss  [rsp+160h+var_128], xmm7
      vmovss  [rsp+160h+var_130], xmm8
      vmovss  [rsp+160h+var_138], xmm6
    }
    _R14 = R_SunShadowAllocateStaticEntry(_RSI, partitionIndex, sunShadowLightDir, v25, v26, v99, v101, v103, x0, y0, v38, v37);
  }
  if ( v40 )
  {
    v46 = *outValidEntryCount;
    if ( *outValidEntryCount - minAllocRemaining >= 0 )
    {
      v47 = s_gfxCachedSunShadowListHead;
      while ( !_RDI || _RDI->inProcessing )
      {
        _RDI = v47->prev;
        v47 = _RDI;
      }
      s_gfxCachedSunShadowListHead = v47;
      *outValidEntryCount = v46 - 1;
      _RDI->gridX = _R14->gridX;
      _RDI->gridY = _R14->gridY;
      _RDI->gridSize = _R14->gridSize;
      _RDI->cachedLODRefDistance = _R14->cachedLODRefDistance;
      _RDI->sunShadowLightDir.v[0] = _R14->sunShadowLightDir.v[0];
      _RDI->sunShadowLightDir.v[1] = _R14->sunShadowLightDir.v[1];
      _RDI->sunShadowLightDir.v[2] = _R14->sunShadowLightDir.v[2];
      cachedSunShadowIndex = _RDI->cachedSunShadowIndex;
      _RDI->nearClip = _R14->nearClip;
      _RDI->farClip = _R14->farClip;
      v110 = (GfxViewInfo *)0x40000000300i64;
      v111 = 1536;
      v112 = 2048;
      DWORD2(sunShadowLightDir_8a) = *((_DWORD *)&v110 + (int)rg.shadowMapResolutionIndex) >> 1;
      HIDWORD(sunShadowLightDir_8a) = DWORD2(sunShadowLightDir_8a);
      LODWORD(sunShadowLightDir_8a) = DWORD2(sunShadowLightDir_8a) * (cachedSunShadowIndex & 7);
      *(_DWORD *)&_RDI->bspOnly = 1;
      DWORD1(sunShadowLightDir_8a) = DWORD2(sunShadowLightDir_8a) * (cachedSunShadowIndex >> 3);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+160h+sunShadowLightDir+8]
        vmovups xmmword ptr [rdi+1F8h], xmm0
      }
      _RDI->needEviction = 0;
      *(_WORD *)&_RDI->allocated = 1;
      _RDI->refreshQueued = 0;
      _RDI->partitionIndex = partitionIndex;
      *(_QWORD *)&_RDI->updateFrameIndex = 0i64;
      *(_QWORD *)&_RDI->terrainUpdateFrameIndex = 0i64;
      *(_QWORD *)&_RDI->smodelUpdateCount = 0i64;
      *(_QWORD *)&_RDI->genVis = 0i64;
      *(_QWORD *)&_RDI->genSmodel = 0i64;
      *(_QWORD *)&_RDI->smodelCount = 0i64;
      _RDI->missingTransient[1] = 0;
    }
    else
    {
      _RDI = NULL;
    }
  }
  v49 = partitionIndex - _RSI->sunShadow.firstCachedSunShadowPartition;
  gfxCachedSunShadowOverlapCount = _RSI->sunShadow.partitionCache[v49].gfxCachedSunShadowOverlapCount;
  _RSI->sunShadow.partitionCache[v49].gfxCachedSunShadowOverlapCount = gfxCachedSunShadowOverlapCount + 1;
  if ( (unsigned int)gfxCachedSunShadowOverlapCount >= 0xA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 744, ASSERT_TYPE_ASSERT, "(cellIndex < ( 9 + 1 ))", (const char *)&queryFormat, "cellIndex < CACHED_SUN_SHADOW_CELL_MAX_OVERLAP") )
    __debugbreak();
  _RBX = v49 * 8656 + 864 * gfxCachedSunShadowOverlapCount;
  *(GfxCachedSunShadow **)((char *)&_RSI->sunShadow.partitionCache[0].gfxCachedSunShadowOverlap[0].staticEntry + _RBX) = _R14;
  *(GfxCachedSunShadow **)((char *)&_RSI->sunShadow.partitionCache[0].gfxCachedSunShadowOverlap[0].bspEntry + _RBX) = _RDI;
  if ( _RSI == (GfxBackEndData *)-927488i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 368, ASSERT_TYPE_ASSERT, "(sunShadow)", (const char *)&queryFormat, "sunShadow") )
    __debugbreak();
  if ( !R_IsCachedSunShadowPartition(&_RSI->sunShadow, partitionIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.h", 369, ASSERT_TYPE_ASSERT, "(R_IsCachedSunShadowPartition( sunShadow, partitionIndex ))", (const char *)&queryFormat, "R_IsCachedSunShadowPartition( sunShadow, partitionIndex )") )
    __debugbreak();
  *(GfxSceneViewType *)((char *)&_RSI->sunShadow.partitionCache[0].gfxCachedSunShadowOverlap[0].sceneViewType + _RBX) = gfxCachedSunShadowOverlapCount + 10 * (partitionIndex - _RSI->sunShadow.firstCachedSunShadowPartition) + 12;
  CachedDrawListIndexForSunShadowPartition = R_GetCachedDrawListIndexForSunShadowPartition(&_RSI->sunShadow, partitionIndex);
  v53 = v105;
  *(GfxDrawListType *)((char *)&_RSI->sunShadow.partitionCache[0].gfxCachedSunShadowOverlap[0].drawListIndex + _RBX) = gfxCachedSunShadowOverlapCount + CachedDrawListIndexForSunShadowPartition;
  v54 = v105 && allowRendering;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, [rsp+160h+var_F8]
    vmulss  xmm2, xmm0, xmm9
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, [rsp+160h+var_F4]
    vsubss  xmm2, xmm2, xmm1
  }
  lastUpdateTimestamp = 0;
  *(&_RSI->sunShadow.partitionCache[0].gfxCachedSunShadowOverlap[0].gen + _RBX) = v54;
  *(unsigned __int64 *)((char *)&_RSI->sunShadow.partitionCache[0].gfxCachedSunShadowOverlap[0].updateExtentsMask + _RBX) = 0i64;
  *(_WORD *)(&_RSI->sunShadow.partitionCache[0].gfxCachedSunShadowOverlap[0].newTerrainSurfs + _RBX) = 0;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rsp+160h+sunShadowLightDir]
    vmulss  xmm3, xmm0, xmm9
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, dword ptr [rsp+160h+sunShadowLightDir+4]
    vmovss  dword ptr [rbx+rsi+0E30ECh], xmm2
    vsubss  xmm2, xmm3, xmm1
    vaddss  xmm0, xmm2, xmm9
    vsubss  xmm3, xmm10, xmm0
    vmovss  dword ptr [rbx+rsi+0E30F0h], xmm3
    vmovss  dword ptr [rbx+rsi+0E30F4h], xmm9
    vmovss  dword ptr [rbx+rsi+0E30F8h], xmm9
  }
  if ( !_R14 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 764, ASSERT_TYPE_ASSERT, "(staticEntry)", (const char *)&queryFormat, "staticEntry") )
      __debugbreak();
    v53 = v105;
  }
  _RCX = &_R14->viewParms;
  *(float *)((char *)&_RSI->sunShadow.partitionCache[0].gfxCachedSunShadowOverlap[0].staticEntryData.nearClip + _RBX) = _R14->nearClip;
  v71 = 3i64;
  *(float *)((char *)&_RSI->sunShadow.partitionCache[0].gfxCachedSunShadowOverlap[0].staticEntryData.farClip + _RBX) = _R14->farClip;
  _RAX = (__int64)&_RSI->sunShadow.partitionCache[0].gfxCachedSunShadowOverlap[0].staticEntryData.viewParms + _RBX;
  do
  {
    _RAX += 128i64;
    __asm { vmovups xmm0, xmmword ptr [rcx] }
    _RCX = (GfxViewParms *)((char *)_RCX + 128);
    __asm
    {
      vmovups xmmword ptr [rax-80h], xmm0
      vmovups xmm1, xmmword ptr [rcx-70h]
      vmovups xmmword ptr [rax-70h], xmm1
      vmovups xmm0, xmmword ptr [rcx-60h]
      vmovups xmmword ptr [rax-60h], xmm0
      vmovups xmm1, xmmword ptr [rcx-50h]
      vmovups xmmword ptr [rax-50h], xmm1
      vmovups xmm0, xmmword ptr [rcx-40h]
      vmovups xmmword ptr [rax-40h], xmm0
      vmovups xmm1, xmmword ptr [rcx-30h]
      vmovups xmmword ptr [rax-30h], xmm1
      vmovups xmm0, xmmword ptr [rcx-20h]
      vmovups xmmword ptr [rax-20h], xmm0
      vmovups xmm1, xmmword ptr [rcx-10h]
      vmovups xmmword ptr [rax-10h], xmm1
    }
    --v71;
  }
  while ( v71 );
  if ( _RDI )
  {
    _RCX = &_RDI->viewParms;
    *(float *)((char *)&_RSI->sunShadow.partitionCache[0].gfxCachedSunShadowOverlap[0].bspEntryData.nearClip + _RBX) = _RDI->nearClip;
    *(float *)((char *)&_RSI->sunShadow.partitionCache[0].gfxCachedSunShadowOverlap[0].bspEntryData.farClip + _RBX) = _RDI->farClip;
    _RAX = (__int64)&_RSI->sunShadow.partitionCache[0].gfxCachedSunShadowOverlap[0].bspEntryData.viewParms + _RBX;
    do
    {
      _RAX += 128i64;
      __asm { vmovups xmm0, xmmword ptr [rcx] }
      _RCX = (GfxViewParms *)((char *)_RCX + 128);
      __asm
      {
        vmovups xmmword ptr [rax-80h], xmm0
        vmovups xmm1, xmmword ptr [rcx-70h]
        vmovups xmmword ptr [rax-70h], xmm1
        vmovups xmm0, xmmword ptr [rcx-60h]
        vmovups xmmword ptr [rax-60h], xmm0
        vmovups xmm1, xmmword ptr [rcx-50h]
        vmovups xmmword ptr [rax-50h], xmm1
        vmovups xmm0, xmmword ptr [rcx-40h]
        vmovups xmmword ptr [rax-40h], xmm0
        vmovups xmm1, xmmword ptr [rcx-30h]
        vmovups xmmword ptr [rax-30h], xmm1
        vmovups xmm0, xmmword ptr [rcx-20h]
        vmovups xmmword ptr [rax-20h], xmm0
        vmovups xmm1, xmmword ptr [rcx-10h]
        vmovups xmmword ptr [rax-10h], xmm1
      }
      --v41;
    }
    while ( v41 );
  }
  v91 = *(__int64 *)((char *)&_RSI->sunShadow.partitionCache[0].gfxCachedSunShadowOverlap[0].staticEntry + _RBX);
  if ( *(_BYTE *)(v91 + 497) )
  {
    if ( (*(&_RSI->sunShadow.partitionCache[0].gfxCachedSunShadowOverlap[0].gen + _RBX) || allowRendering) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 785, ASSERT_TYPE_ASSERT, "(!sunShadowOverlap->gen && !allowRendering)", (const char *)&queryFormat, "!sunShadowOverlap->gen && !allowRendering") )
      __debugbreak();
    *(&_RSI->sunShadow.partitionCache[0].gfxCachedSunShadowOverlap[0].skipUpdate + _RBX) = 0;
  }
  else
  {
    if ( allowRendering )
    {
      if ( v53 || !*(_BYTE *)(v91 + 3) )
      {
        v92 = 0;
        *(&_RSI->sunShadow.partitionCache[0].gfxCachedSunShadowOverlap[0].skipUpdate + _RBX) = 0;
      }
      else
      {
        v92 = 1;
        *(&_RSI->sunShadow.partitionCache[0].gfxCachedSunShadowOverlap[0].skipUpdate + _RBX) = 1;
      }
    }
    else
    {
      *(&_RSI->sunShadow.partitionCache[0].gfxCachedSunShadowOverlap[0].skipUpdate + _RBX) = 1;
      *(_BYTE *)(v91 + 497) = v53;
      v92 = *(&_RSI->sunShadow.partitionCache[0].gfxCachedSunShadowOverlap[0].skipUpdate + _RBX);
    }
    if ( v92 )
      lastUpdateTimestamp = _R14->lastUpdateTimestamp;
  }
  _R14->lastUpdateTimestamp = lastUpdateTimestamp;
  _R14->inProcessing = 1;
  if ( _RDI )
    _RDI->inProcessing = 1;
  *(volatile int *)((char *)&_RSI->sunShadow.partitionCache[0].gfxCachedSunShadowOverlap[0].inProcessingCount + _RBX) = 2;
  _R11 = &v121;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
  }
}

/*
==============
R_AddSunShadowClipPlanesForBoundingArc
==============
*/
void R_AddSunShadowClipPlanesForBoundingArc(const vec3_t *viewOrg, const GfxSunShadowProjectionSetup *projSetup, const GfxSunShadowFrustumRays *frustumRays, const GfxSunShadowMapMetrics *mapMetrics, GfxSunShadowClip *clip, GfxSunShadow *sunShadow)
{
  unsigned int v23; 
  __int64 v55; 
  GfxSunShadowClip *v56; 
  __int64 v59; 
  __int64 v61; 
  bool v62; 
  __int64 cameraPlaneCount; 
  unsigned int v81; 
  GfxSunShadowClip *v82; 
  __int64 v83; 
  __int64 v118; 
  __int64 v120; 
  __int64 v133; 
  double v148; 
  double v149; 
  double v150; 
  double v151; 
  const GfxSunShadowFrustumRays *v152; 
  char v155; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps xmmword ptr [rax-0B8h], xmm14
  }
  _RAX = frustumRays->boundingArcRay[0];
  __asm
  {
    vmovss  xmm10, cs:__real@3f800000
    vmovss  xmm13, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm14, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm4, dword ptr [r8+rax*8+34h]
    vmovss  xmm3, dword ptr [r8+rax*8+30h]
  }
  _RDI = sunShadow;
  v23 = 0;
  __asm
  {
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm1, xmm1, xmm0
    vsqrtss xmm2, xmm1, xmm1
    vcmpless xmm0, xmm2, cs:__real@80000000
    vblendvps xmm0, xmm2, xmm10, xmm0
    vdivss  xmm1, xmm10, xmm0
    vmulss  xmm6, xmm3, xmm1
    vmulss  xmm3, xmm4, xmm1
    vxorps  xmm4, xmm3, xmm14
    vandps  xmm2, xmm3, xmm13
    vandps  xmm0, xmm6, xmm13
    vaddss  xmm0, xmm2, xmm0
    vmulss  xmm1, xmm0, dword ptr [rdx+6Ch]
    vmulss  xmm7, xmm1, cs:__real@3f000000
    vmulss  xmm1, xmm6, dword ptr [rdx+0Ch]
    vmulss  xmm0, xmm4, dword ptr [rdx]
    vaddss  xmm5, xmm1, xmm0
    vmulss  xmm0, xmm6, dword ptr [rdx+10h]
    vmulss  xmm1, xmm4, dword ptr [rdx+4]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, dword ptr [rdx+14h]
    vmulss  xmm0, xmm4, dword ptr [rdx+8]
    vaddss  xmm3, xmm1, xmm0
    vmulss  xmm0, xmm2, dword ptr [rcx+4]
    vmulss  xmm1, xmm5, dword ptr [rcx]
    vmovss  dword ptr [rsp+138h+var_D8+4], xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, dword ptr [rcx+8]
    vaddss  xmm2, xmm2, xmm1
    vxorps  xmm0, xmm2, xmm14
    vmovss  dword ptr [rsp+138h+var_D8+0Ch], xmm0
    vmovss  dword ptr [rsp+138h+var_D8], xmm5
    vmovss  dword ptr [rsp+138h+var_D8+8], xmm3
    vmovups xmm6, [rsp+138h+var_D8]
  }
  v152 = frustumRays;
  v55 = 0i64;
  v56 = clip;
  __asm
  {
    vxorps  xmm12, xmm12, xmm12
    vxorpd  xmm11, xmm11, xmm11
  }
  do
  {
    v59 = v56->planeCount[0];
    __asm { vxorps  xmm0, xmm0, xmm0 }
    v61 = 16 * (v59 + v55 + 1);
    v62 = __CFADD__(clip, v61);
    _RCX = (char *)clip + v61;
    v56->planeCount[0] = v59 + 1;
    __asm
    {
      vmovups xmmword ptr [rcx], xmm6
      vcvtsi2ss xmm0, xmm0, rax
      vmulss  xmm1, xmm0, xmm7
      vaddss  xmm5, xmm1, dword ptr [rcx+0Ch]
      vmovss  dword ptr [rcx+0Ch], xmm5
      vmovss  xmm0, dword ptr [rcx+4]
      vmulss  xmm3, xmm0, dword ptr [r14+4]
      vmovss  xmm1, dword ptr [rcx]
      vmulss  xmm2, xmm1, dword ptr [r14]
      vmovss  xmm0, dword ptr [rcx+8]
      vmulss  xmm1, xmm0, dword ptr [r14+8]
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm2, xmm4, xmm1
      vaddss  xmm3, xmm2, xmm5
      vcomiss xmm3, xmm12
    }
    if ( v62 || (_DWORD)v59 == -1 )
    {
      __asm
      {
        vmovsd  [rsp+138h+var_F8], xmm11
        vcvtss2sd xmm0, xmm3, xmm3
        vmovsd  [rsp+138h+var_100], xmm0
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 1430, ASSERT_TYPE_ASSERT, "( R_DpvsPlaneDistToPoint( planeDst, viewOrg ) ) > ( 0.0f )", "%s > %s\n\t%g, %g", "R_DpvsPlaneDistToPoint( planeDst, viewOrg )", "0.0f", v148, v150) )
        __debugbreak();
    }
    if ( v23 == 1 )
    {
      cameraPlaneCount = sunShadow->cameraPlaneCount;
      __asm { vxorps  xmm0, xmm0, xmm0 }
      _RCX = 2 * (cameraPlaneCount + 1237);
      sunShadow->cameraPlaneCount = cameraPlaneCount + 1;
      __asm
      {
        vmovups xmmword ptr [rdi+rcx*8], xmm6
        vcvtsi2ss xmm0, xmm0, rax
        vmulss  xmm1, xmm0, xmm7
        vaddss  xmm2, xmm1, dword ptr [rdi+rcx*8+0Ch]
        vmovss  dword ptr [rdi+rcx*8+0Ch], xmm2
      }
    }
    ++v23;
    v55 += 9i64;
    v56 = (GfxSunShadowClip *)((char *)v56 + 4);
  }
  while ( v23 < 4 );
  _RCX = v152;
  v81 = 0;
  v82 = clip;
  v83 = 0i64;
  _RAX = v152->boundingArcRay[1];
  __asm
  {
    vmovss  xmm4, dword ptr [rcx+rax*8+34h]
    vmovss  xmm3, dword ptr [rcx+rax*8+30h]
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm1, xmm1, xmm0
    vsqrtss xmm2, xmm1, xmm1
    vcmpless xmm0, xmm2, cs:__real@80000000
    vblendvps xmm0, xmm2, xmm10, xmm0
    vdivss  xmm1, xmm10, xmm0
    vmulss  xmm7, xmm1, xmm4
    vmulss  xmm3, xmm1, xmm3
    vxorps  xmm5, xmm3, xmm14
    vandps  xmm2, xmm7, xmm13
    vandps  xmm0, xmm3, xmm13
    vaddss  xmm0, xmm2, xmm0
    vmulss  xmm1, xmm0, dword ptr [rax+6Ch]
    vmulss  xmm10, xmm1, cs:__real@3f000000
    vmulss  xmm1, xmm5, dword ptr [rax+0Ch]
    vmulss  xmm0, xmm7, dword ptr [rax]
    vmulss  xmm2, xmm7, dword ptr [rax+4]
    vaddss  xmm6, xmm1, xmm0
    vmulss  xmm0, xmm5, dword ptr [rax+10h]
    vmulss  xmm1, xmm7, dword ptr [rax+8]
    vaddss  xmm4, xmm2, xmm0
    vmulss  xmm0, xmm5, dword ptr [rax+14h]
    vaddss  xmm3, xmm1, xmm0
    vmulss  xmm0, xmm6, dword ptr [r14]
    vmulss  xmm1, xmm4, dword ptr [r14+4]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, dword ptr [r14+8]
    vaddss  xmm2, xmm2, xmm1
    vxorps  xmm0, xmm2, xmm14
    vmovss  dword ptr [rsp+138h+var_D8+0Ch], xmm0
    vmovss  dword ptr [rsp+138h+var_D8], xmm6
    vmovss  dword ptr [rsp+138h+var_D8+4], xmm4
    vmovss  dword ptr [rsp+138h+var_D8+8], xmm3
    vmovups xmm6, [rsp+138h+var_D8]
  }
  do
  {
    v118 = v82->planeCount[0];
    __asm { vxorps  xmm0, xmm0, xmm0 }
    v120 = 16 * (v118 + v83 + 1);
    v62 = __CFADD__(clip, v120);
    _RCX = (char *)clip + v120;
    v82->planeCount[0] = v118 + 1;
    __asm
    {
      vmovups xmmword ptr [rcx], xmm6
      vcvtsi2ss xmm0, xmm0, rax
      vmulss  xmm1, xmm0, xmm10
      vaddss  xmm5, xmm1, dword ptr [rcx+0Ch]
      vmovss  dword ptr [rcx+0Ch], xmm5
      vmovss  xmm0, dword ptr [rcx+4]
      vmulss  xmm3, xmm0, dword ptr [r14+4]
      vmovss  xmm1, dword ptr [rcx]
      vmulss  xmm2, xmm1, dword ptr [r14]
      vmovss  xmm0, dword ptr [rcx+8]
      vmulss  xmm1, xmm0, dword ptr [r14+8]
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm2, xmm4, xmm1
      vaddss  xmm3, xmm2, xmm5
      vcomiss xmm3, xmm12
    }
    if ( v62 || (_DWORD)v118 == -1 )
    {
      __asm
      {
        vmovsd  [rsp+138h+var_F8], xmm11
        vcvtss2sd xmm0, xmm3, xmm3
        vmovsd  [rsp+138h+var_100], xmm0
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 1457, ASSERT_TYPE_ASSERT, "( R_DpvsPlaneDistToPoint( planeDst, viewOrg ) ) > ( 0.0f )", "%s > %s\n\t%g, %g", "R_DpvsPlaneDistToPoint( planeDst, viewOrg )", "0.0f", v149, v151) )
        __debugbreak();
    }
    if ( v81 == 1 )
    {
      v133 = sunShadow->cameraPlaneCount;
      __asm { vxorps  xmm0, xmm0, xmm0 }
      _RCX = 2 * (v133 + 1237);
      sunShadow->cameraPlaneCount = v133 + 1;
      __asm
      {
        vmovups xmmword ptr [rdi+rcx*8], xmm6
        vcvtsi2ss xmm0, xmm0, rax
        vmulss  xmm1, xmm0, xmm10
        vaddss  xmm2, xmm1, dword ptr [rdi+rcx*8+0Ch]
        vmovss  dword ptr [rdi+rcx*8+0Ch], xmm2
      }
    }
    ++v81;
    v83 += 9i64;
    v82 = (GfxSunShadowClip *)((char *)v82 + 4);
  }
  while ( v81 < 4 );
  _R11 = &v155;
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
  }
}

/*
==============
R_AddSunShadowClipPlanesForMapBoundary
==============
*/
void R_AddSunShadowClipPlanesForMapBoundary(const GfxSunShadowProjectionSetup *projSetup, const GfxSunShadowFrustumRays *frustumRays, const GfxSunShadowMapMetrics *mapMetrics, unsigned int partitionIndex, GfxSunShadowClip *clip, GfxSunShadow *sunShadow)
{
  __int64 v18; 
  unsigned int v25; 
  unsigned int v26; 
  BOOL v31; 
  unsigned int v32; 
  unsigned int v50; 
  unsigned int v51; 
  __int64 v57; 
  __int64 v68; 
  bool v69; 
  const DpvsPlane *v91; 
  __int64 v92; 
  float edgeHalfSize; 
  vec3_t edgeMidPoint; 
  __m256i v114; 
  char v118; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-98h], xmm10
    vmovaps xmmword ptr [rax-0A8h], xmm11
    vmovss  xmm0, dword ptr [rdx+74h]
    vsubss  xmm3, xmm0, dword ptr [rdx+6Ch]
    vmovss  xmm1, dword ptr [rdx+70h]
    vsubss  xmm2, xmm1, dword ptr [rdx+68h]
    vmovss  xmm11, dword ptr cs:__xmm@80000000800000008000000080000000
  }
  v18 = 0i64;
  _RSI = partitionIndex;
  *(_QWORD *)edgeMidPoint.v = sunShadow;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm2, xmm3
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm7, xmm0, dword ptr [r14+rsi*4+6Ch]
    vmulss  xmm10, xmm7, cs:__real@3f000000
  }
  _R13 = &projSetup->shadowOrgPixelCenter[partitionIndex];
  v25 = 0;
  do
  {
    v26 = v25;
    _R12 = (int)v25;
    __asm
    {
      vmovss  xmm0, dword ptr [r13+r12*4+0]
      vmulss  xmm1, xmm0, dword ptr [r14+rsi*4+6Ch]
      vsubss  xmm6, xmm1, dword ptr [rax+r12*4]
      vcomiss xmm10, xmm6
    }
    v31 = v25 <= 2;
    v32 = (v31 + 2 * v25) ^ 1;
    _R14 = 2i64 * (v31 + 2 * v25++);
    _R12 = projSetup;
    v114.m256i_i32[2 * _R14] = LODWORD(projSetup->sunAxis.m[v26].v[0]);
    v114.m256i_i32[2 * _R14 + 1] = LODWORD(projSetup->sunAxis.m[v26].v[1]);
    v114.m256i_i32[2 * _R14 + 2] = LODWORD(projSetup->sunAxis.m[v26].v[2]);
    __asm
    {
      vmovss  dword ptr [rbp+r14*8+70h+var_F0+0Ch], xmm6
      vmovss  xmm0, dword ptr [rbp+r14*8+70h+var_F0]
      vxorps  xmm1, xmm0, xmm11
    }
    _RAX = v32;
    _R13 = &projSetup->shadowOrgPixelCenter[partitionIndex];
    _RAX *= 2i64;
    __asm
    {
      vmovss  dword ptr [rbp+rax*8+70h+var_F0], xmm1
      vmovss  xmm2, dword ptr [rbp+r14*8+70h+var_F0+4]
      vxorps  xmm0, xmm2, xmm11
      vmovss  dword ptr [rbp+rax*8+70h+var_F0+4], xmm0
      vmovss  xmm1, dword ptr [rbp+r14*8+70h+var_F0+8]
      vxorps  xmm2, xmm1, xmm11
      vmovss  dword ptr [rbp+rax*8+70h+var_F0+8], xmm2
      vmovss  xmm0, dword ptr [rbp+r14*8+70h+var_F0+0Ch]
      vxorps  xmm1, xmm0, xmm11
      vaddss  xmm0, xmm7, xmm1
      vmovss  dword ptr [rbp+rax*8+70h+var_F0+0Ch], xmm0
    }
  }
  while ( v25 < 2 );
  _RCX = *(_QWORD *)edgeMidPoint.v;
  _RBX = clip;
  __asm
  {
    vmovups ymm0, [rbp+70h+var_F0]
    vmovups ymm1, [rbp+70h+var_D0]
  }
  _RAX = 544i64 * partitionIndex;
  v50 = clip->planeCount[partitionIndex];
  __asm
  {
    vmovups ymmword ptr [rax+rcx+2F8h], ymm0
    vmovups ymmword ptr [rax+rcx+318h], ymm1
  }
  if ( v50 + 4 > 9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 1569, ASSERT_TYPE_ASSERT, "( clip->planeCount[partitionIndex] + 4 ) <= ( ( sizeof( *array_counter( clip->planes[partitionIndex] ) ) + 0 ) )", "%s <= %s\n\t%i, %i", "clip->planeCount[partitionIndex] + 4", "ARRAY_COUNT( clip->planes[partitionIndex] )", v50 + 4, 9) )
    __debugbreak();
  v51 = 0;
  if ( v50 )
  {
    __asm
    {
      vmovss  xmm6, dword ptr [r12+1Ch]
      vmovss  xmm3, dword ptr [r12+18h]
      vmovss  xmm7, dword ptr [r12+20h]
      vmovss  xmm4, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovss  xmm5, cs:__real@3a83126f
    }
    v57 = 9 * _RSI;
    while ( 1 )
    {
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [rbx+rcx*8+4]
        vmulss  xmm0, xmm3, dword ptr [rbx+rcx*8]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm7, dword ptr [rbx+rcx*8+8]
        vaddss  xmm0, xmm2, xmm1
        vandps  xmm0, xmm0, xmm4
        vcomiss xmm0, xmm5
      }
      if ( __CFADD__(v51 + v57 + 1, v51 + v57 + 1) )
        break;
      if ( ++v51 == v50 )
        goto LABEL_10;
    }
    __asm
    {
      vmovss  xmm2, dword ptr [r12+rsi*4+6Ch]
      vmulss  xmm0, xmm2, dword ptr [r12+rsi*8+2Ch]
      vsubss  xmm1, xmm10, xmm0
      vmulss  xmm0, xmm2, dword ptr [r12+rsi*8+30h]
      vaddss  xmm4, xmm1, dword ptr [r12+rsi*8+4Ch]
      vmulss  xmm2, xmm4, dword ptr [r12]
      vsubss  xmm1, xmm10, xmm0
      vaddss  xmm3, xmm1, dword ptr [r12+rsi*8+50h]
      vmulss  xmm0, xmm3, dword ptr [r12+0Ch]
      vmulss  xmm1, xmm4, dword ptr [r12+4]
      vaddss  xmm7, xmm2, xmm0
      vmulss  xmm0, xmm3, dword ptr [r12+10h]
      vmulss  xmm2, xmm4, dword ptr [r12+8]
      vmovaps xmmword ptr [rsp+170h+var_78+8], xmm8
      vmovaps [rsp+170h+var_88+8], xmm9
      vaddss  xmm8, xmm1, xmm0
      vmulss  xmm0, xmm3, dword ptr [r12+14h]
      vaddss  xmm9, xmm2, xmm0
    }
    v91 = clip->planes[_RSI];
    v92 = 4i64;
    __asm { vxorps  xmm6, xmm10, xmm11 }
    do
    {
      __asm
      {
        vmulss  xmm0, xmm6, dword ptr [r10]
        vaddss  xmm1, xmm0, xmm7
        vmulss  xmm0, xmm6, dword ptr [r10+4]
        vmovss  dword ptr [rsp+170h+edgeMidPoint], xmm1
        vaddss  xmm1, xmm0, xmm8
        vmulss  xmm0, xmm6, dword ptr [r10+8]
        vmovss  dword ptr [rsp+170h+edgeMidPoint+4], xmm1
        vaddss  xmm1, xmm0, xmm9
        vmovss  [rsp+170h+edgeHalfSize], xmm10
        vmovss  dword ptr [rsp+170h+edgeMidPoint+8], xmm1
      }
      if ( !R_CullSunShadowClipPlane(v91, v51, v50, &edgeMidPoint, (const vec3_t *)((char *)&v114 + 16 * (v18 ^ 2)), edgeHalfSize) )
      {
        __asm { vmovups xmm0, xmmword ptr [r10] }
        _RCX = 2 * (clip->planeCount[_RSI] + v57 + 1);
        __asm { vmovups xmmword ptr [rbx+rcx*8], xmm0 }
        ++clip->planeCount[_RSI];
        v91 = clip->planes[_RSI];
      }
      ++v18;
      --v92;
    }
    while ( v92 );
    __asm
    {
      vmovaps xmm9, [rsp+170h+var_88+8]
      vmovaps xmm8, xmmword ptr [rsp+170h+var_78+8]
    }
  }
  else
  {
LABEL_10:
    __asm { vmovss  xmm0, dword ptr [rbp+70h+var_F0+0Ch] }
    clip->planeCount[_RSI] = v50 + 4;
    _R8 = 2 * (v50 + 9 * _RSI + 1);
    _R9 = 2 * (v50 + 1 + 9 * _RSI + 1);
    _R10 = 2 * (v50 + 2 + 9 * _RSI + 1);
    v68 = v50 + 3 + 9 * _RSI + 1;
    v69 = __CFADD__(v68, v68);
    _RAX = 2 * v68;
    __asm { vcomiss xmm0, dword ptr [rbp+70h+var_D0+0Ch] }
    if ( v69 )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rbp+70h+var_F0]
        vmovups xmm1, xmmword ptr [rbp+70h+var_F0+10h]
        vmovups xmmword ptr [rbx+r8*8], xmm0
        vmovups xmm0, xmmword ptr [rbp+70h+var_D0]
        vmovups xmmword ptr [rbx+r9*8], xmm1
        vmovups xmm1, xmmword ptr [rbp+70h+var_D0+10h]
      }
    }
    else
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rbp+70h+var_D0]
        vmovups xmm1, xmmword ptr [rbp+70h+var_D0+10h]
        vmovups xmmword ptr [rbx+r8*8], xmm0
        vmovups xmm0, xmmword ptr [rbp+70h+var_F0]
        vmovups xmmword ptr [rbx+r9*8], xmm1
        vmovups xmm1, xmmword ptr [rbp+70h+var_F0+10h]
      }
    }
    __asm
    {
      vmovups xmmword ptr [rbx+rax*8], xmm1
      vmovups xmmword ptr [rbx+r10*8], xmm0
    }
  }
  _R11 = &v118;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
  }
}

/*
==============
R_BuildCachedSunShadowOverlap
==============
*/
void R_BuildCachedSunShadowOverlap(GfxViewInfo *viewInfo, GfxBackEndData *data, const GfxSunShadow *sunShadow, const GfxSunShadowProjectionSetup *projSetup, const GfxSunShadowMapMetrics *mapMetrics)
{
  GfxViewInfo *v15; 
  GfxBackEndData *v18; 
  unsigned int firstCachedSunShadowPartition; 
  unsigned int lastCachedSunShadowPartition; 
  unsigned int v21; 
  GfxCachedSunShadow *v22; 
  float v39; 
  int v43; 
  int v44; 
  bool v45; 
  int v46; 
  int v47; 
  int v48; 
  int v49; 
  int v56; 
  int v57; 
  GfxCachedSunShadow **p_next; 
  int v63; 
  __int64 v64; 
  __int16 v65; 
  bool v66; 
  GfxCachedSunShadow *prev; 
  GfxCachedSunShadow *v68; 
  unsigned int firstSmodelId; 
  unsigned int firstStNodeId; 
  int v71; 
  int v72; 
  int v73; 
  unsigned int v74; 
  __int64 v82; 
  int v84; 
  __int64 v85; 
  int v86; 
  __int64 v96; 
  int v97; 
  int v98; 
  int v99; 
  int v100; 
  unsigned int v105; 
  GfxViewInfo *v106; 
  __int64 v107; 
  GfxBackEndData *v108; 
  int y0; 
  float v110; 
  __int64 v111; 
  int minAllocRemaining; 
  __int64 v113; 
  GfxCachedSunShadow **v114; 
  __int64 v115; 
  unsigned int v116; 
  unsigned int v117; 
  unsigned int v118; 
  __int64 *v119; 
  unsigned int v120; 
  GfxCachedSunShadow **v121; 
  int v122; 
  bool allowRendering; 
  const dvar_t *v124; 
  int v133; 
  int v137; 
  int v138; 
  int v141; 
  int v142; 
  int v143; 
  GfxCachedSunShadow *v146; 
  GfxCachedSunShadow *next; 
  GfxCachedSunShadow *v148; 
  int v149; 
  int v150; 
  int v151; 
  GfxCachedSunShadow *v154; 
  GfxCachedSunShadow *v155; 
  GfxCachedSunShadow *v156; 
  float outFarClip; 
  float outFarClipa; 
  float outFarClipb; 
  float outFarClipc; 
  int cellSize; 
  int cellSizea; 
  int cellSizeb; 
  int cellSizec; 
  unsigned int sunShadowMapSize; 
  unsigned int sunShadowMapSizea; 
  unsigned int sunShadowMapSizeb; 
  unsigned int sunShadowMapSizec; 
  int x0; 
  unsigned int partitionIndex; 
  int v181; 
  int maxY; 
  int gridX; 
  int maxX; 
  float v185; 
  float v186; 
  unsigned int v187; 
  GfxBackEndData *dataa; 
  GfxViewInfo *v189; 
  int outValidEntryCount; 
  int v191; 
  float threshold; 
  const GfxSunShadowProjectionSetup *v193; 
  int v194; 
  int gridY; 
  float outNearClip; 
  float gridSize; 
  int v198; 
  float cachedLODRefDistance; 
  unsigned int v200; 
  int useCachedSunShadow; 
  __int64 v202; 
  float sampleSize; 
  base_vec2_t<int> outPreCacheDir; 
  base_vec2_t<int> outPreCacheEdge; 
  const GfxSunShadowMapMetrics *v206; 
  GfxSunShadow *sunShadowa; 
  vec3_t sunShadowLightDir; 
  int v209; 
  int v210[26]; 
  __int64 v211[10]; 
  __int64 v212[20]; 

  v15 = viewInfo;
  v206 = mapMetrics;
  _R12 = projSetup;
  v189 = viewInfo;
  v18 = data;
  *(_QWORD *)sunShadowLightDir.v = 0x40000000300i64;
  LODWORD(sunShadowLightDir.v[2]) = 1536;
  v209 = 2048;
  cachedLODRefDistance = sunShadowLightDir.v[rg.shadowMapResolutionIndex];
  v193 = projSetup;
  sunShadowa = (GfxSunShadow *)sunShadow;
  dataa = data;
  R_ProcessWorldTransientRefreshQueued();
  R_ProcessWorldTransientRefreshAddPending();
  useCachedSunShadow = v15->useCachedSunShadow;
  if ( (unsigned int)(useCachedSunShadow - 2) <= 1 )
    R_ForceRefreshCachedSunShadowData();
  firstCachedSunShadowPartition = sunShadow->firstCachedSunShadowPartition;
  lastCachedSunShadowPartition = sunShadow->lastCachedSunShadowPartition;
  v21 = firstCachedSunShadowPartition;
  v187 = firstCachedSunShadowPartition;
  v200 = lastCachedSunShadowPartition;
  partitionIndex = firstCachedSunShadowPartition;
  if ( firstCachedSunShadowPartition <= lastCachedSunShadowPartition )
  {
    v22 = s_gfxCachedSunShadowListHead;
    __asm
    {
      vmovaps [rsp+370h+var_70], xmm8
      vmovaps [rsp+370h+var_80], xmm9
      vmovaps [rsp+370h+var_90], xmm10
      vmovaps [rsp+370h+var_A0], xmm11
      vmovaps [rsp+370h+var_B0], xmm12
      vmovaps [rsp+370h+var_C0], xmm13
      vmovaps [rsp+370h+var_D0], xmm14
      vmovss  xmm14, cs:__real@3f000000
      vmovaps [rsp+370h+var_E0], xmm15
      vmovaps [rsp+370h+var_50], xmm6
      vmovaps [rsp+370h+var_60], xmm7
      vxorps  xmm15, xmm15, xmm15
    }
    while ( 1 )
    {
      _RSI = v21 - firstCachedSunShadowPartition;
      v18->sunShadow.partitionCache[_RSI].gfxCachedSunShadowOverlapCount = 0;
      if ( (*((_DWORD *)&v15->viewportFeatures + 11) & 0x20000) == 0 || !v18->activePrimarySunLight )
        goto LABEL_173;
      __asm { vmovss  xmm6, cs:__real@3f800000 }
      _R15 = v21;
      v210[0] = 768;
      v210[1] = 1024;
      v210[2] = 1536;
      __asm
      {
        vmovss  xmm13, dword ptr [r12+r15*4+6Ch]
        vdivss  xmm7, xmm6, xmm13
        vmulss  xmm0, xmm7, dword ptr [r12+r15*8+4Ch]
        vaddss  xmm2, xmm0, xmm14
        vsubss  xmm1, xmm2, dword ptr [r12+r15*8+2Ch]
        vxorps  xmm0, xmm0, xmm0
        vroundss xmm0, xmm0, xmm1, 1
        vcvttss2si ecx, xmm0
        vmulss  xmm0, xmm7, dword ptr [r12+r15*8+50h]
        vaddss  xmm3, xmm0, xmm14
        vsubss  xmm1, xmm3, dword ptr [r12+r15*8+30h]
      }
      v210[3] = 2048;
      LODWORD(v39) = (unsigned int)v210[rg.shadowMapResolutionIndex] >> 1;
      sampleSize = v39;
      v202 = v21;
      threshold = _ECX;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vroundss xmm0, xmm0, xmm1, 1
        vcvttss2si r8d, xmm0
      }
      v191 = _ER8;
      if ( _ECX < 0.0 )
        v43 = -((LODWORD(v39) - LODWORD(_ECX) - 1) / SLODWORD(v39));
      else
        v43 = SLODWORD(_ECX) / SLODWORD(v39);
      gridX = v43;
      if ( _ER8 < 0 )
        v44 = -((LODWORD(v39) - _ER8 - 1) / SLODWORD(v39));
      else
        v44 = _ER8 / SLODWORD(v39);
      v45 = LODWORD(cachedLODRefDistance) + LODWORD(_ECX) < 0;
      v46 = LODWORD(cachedLODRefDistance) + LODWORD(_ECX);
      gridY = v44;
      if ( v45 )
        v47 = -((LODWORD(v39) - v46 - 1) / SLODWORD(v39));
      else
        v47 = v46 / SLODWORD(v39);
      v48 = _ER8 + LODWORD(cachedLODRefDistance);
      maxX = v47;
      if ( _ER8 + LODWORD(cachedLODRefDistance) < 0 )
        v49 = -((LODWORD(v39) - v48 - 1) / SLODWORD(v39));
      else
        v49 = v48 / SLODWORD(v39);
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vroundss xmm1, xmm1, xmm2, 1
        vxorps  xmm0, xmm0, xmm0
        vcvttss2si ecx, xmm1
      }
      maxY = v49;
      __asm
      {
        vroundss xmm0, xmm0, xmm3, 1
        vcvttss2si r8d, xmm0
      }
      if ( _ECX < 0 )
        v56 = -((LODWORD(v39) - _ECX - 1) / SLODWORD(v39));
      else
        v56 = _ECX / SLODWORD(v39);
      if ( _ER8 < 0 )
        v57 = -((LODWORD(v39) - _ER8 - 1) / SLODWORD(v39));
      else
        v57 = _ER8 / SLODWORD(v39);
      _RAX = dataa;
      __asm
      {
        vmovss  xmm0, dword ptr [rax+0E767Ch]
        vmovss  xmm1, dword ptr [rax+0E7680h]
        vmovss  [rbp+270h+outNearClip], xmm0
        vmovsd  xmm0, qword ptr [rax+0E766Ch]
      }
      sunShadowLightDir.v[2] = dataa->sunShadow.lightDir.v[2];
      __asm
      {
        vmovss  [rbp+270h+gridSize], xmm1
        vmovsd  qword ptr [rbp+270h+sunShadowLightDir], xmm0
      }
      v181 = (v47 - v43 + 1) * (v49 - v44 + 1);
      if ( v181 > 10 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 1045, ASSERT_TYPE_ASSERT, "(minAllocCount <= ( 9 + 1 ))", (const char *)&queryFormat, "minAllocCount <= CACHED_SUN_SHADOW_CELL_MAX_OVERLAP") )
          __debugbreak();
        v22 = s_gfxCachedSunShadowListHead;
      }
      p_next = &s_gfxCachedSunShadowStore[0].next;
      v63 = 0;
      v64 = 64i64;
      do
      {
        v65 = -2;
        if ( (unsigned int)*((unsigned __int16 *)p_next - 50) + 1 < 0xFFFE )
          v65 = *((_WORD *)p_next - 50) + 1;
        v66 = *((_BYTE *)p_next - 599) == 0;
        *((_WORD *)p_next - 50) = v65;
        if ( !v66 )
        {
          prev = v22->prev;
          v68 = (GfxCachedSunShadow *)(p_next - 75);
          if ( p_next - 75 != (GfxCachedSunShadow **)prev )
          {
            (*(p_next - 1))->next = *p_next;
            (*p_next)->prev = *(p_next - 1);
            *(p_next - 1) = prev;
            *p_next = prev->next;
            prev->next = v68;
            (*p_next)->prev = v68;
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
          v71 = *((_DWORD *)p_next - 143);
          if ( v71 >= v56 - 2 && v71 <= v56 + 2 )
          {
            v72 = *((_DWORD *)p_next - 142);
            if ( v72 >= v57 - 2 && v72 <= v57 + 2 )
            {
              R_ReferenceSunShadowCacheEntry((GfxCachedSunShadow *)(p_next - 75));
              v22 = s_gfxCachedSunShadowListHead;
            }
          }
        }
        v73 = v63 + 1;
        if ( *((_BYTE *)p_next - 600) )
          v73 = v63;
        p_next += 76;
        v63 = v73;
        --v64;
      }
      while ( v64 );
      outValidEntryCount = v73;
      if ( v73 < v181 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 1059, ASSERT_TYPE_ASSERT, "(validEntryCount >= minAllocCount)", (const char *)&queryFormat, "validEntryCount >= minAllocCount") )
          __debugbreak();
        v22 = s_gfxCachedSunShadowListHead;
      }
      v74 = partitionIndex;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, r14d
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, rax
        vmulss  xmm12, xmm0, xmm13
      }
      if ( partitionIndex )
        __asm { vmulss  xmm3, xmm1, dword ptr [r8+rax*4+6Ch] }
      else
        __asm { vmovaps xmm3, xmm15 }
      v82 = 0i64;
      __asm { vmulss  xmm1, xmm1, dword ptr [r8+r15*4+6Ch] }
      v84 = gridY;
      v85 = 0i64;
      v86 = maxY;
      __asm
      {
        vsubss  xmm0, xmm6, dword ptr [rax+28h]
        vmulss  xmm2, xmm1, dword ptr [rax+28h]
      }
      _RAX = dataa;
      __asm
      {
        vmovss  xmm8, dword ptr [rbp+270h+sunShadowLightDir+8]
        vmovss  xmm9, dword ptr [rbp+270h+sunShadowLightDir+4]
        vmovss  xmm10, dword ptr [rbp+270h+sunShadowLightDir]
        vmaxss  xmm0, xmm0, xmm15
        vmulss  xmm3, xmm0, xmm3
        vaddss  xmm11, xmm3, xmm2
        vmovss  dword ptr [rsi+rax+0E30B0h], xmm11
      }
      v96 = 0i64;
      v198 = 0;
      v194 = 0;
      if ( v84 <= maxY )
      {
        v97 = gridX;
        v98 = maxX;
        do
        {
          v99 = v97;
          if ( v97 <= v98 )
          {
            v100 = useCachedSunShadow;
            do
            {
              if ( rg.useCompressedSunShadowClipPlanes )
              {
                __asm { vmovaps xmm3, xmm13; sampleSize }
                R_CompressedSunShadow_GetCacheEntryClipPlanes(sunShadowa, v99, v84, *(float *)&_XMM3, &outNearClip, &gridSize);
                v74 = partitionIndex;
                v98 = maxX;
                v22 = s_gfxCachedSunShadowListHead;
              }
              _RCX = v22;
              while ( 1 )
              {
                if ( _RCX->gridX == v99 && _RCX->gridY == v84 )
                {
                  __asm { vucomiss xmm12, dword ptr [rcx+24h] }
                  if ( _RCX->gridY == v84 )
                  {
                    __asm { vucomiss xmm11, dword ptr [rcx+28h] }
                    if ( _RCX->gridY == v84 )
                    {
                      __asm { vucomiss xmm10, dword ptr [rcx+8] }
                      if ( _RCX->gridY == v84 )
                      {
                        __asm { vucomiss xmm9, dword ptr [rcx+0Ch] }
                        if ( _RCX->gridY == v84 )
                        {
                          __asm { vucomiss xmm8, dword ptr [rcx+10h] }
                          if ( _RCX->gridY == v84 )
                          {
                            __asm
                            {
                              vmovss  xmm0, [rbp+270h+outNearClip]
                              vucomiss xmm0, dword ptr [rcx+14h]
                            }
                            if ( _RCX->gridY == v84 )
                            {
                              __asm
                              {
                                vmovss  xmm0, [rbp+270h+gridSize]
                                vucomiss xmm0, dword ptr [rcx+18h]
                              }
                              if ( _RCX->gridY == v84 && !_RCX->bspOnly && _RCX->partitionIndex == v74 && !_RCX->inProcessing )
                                break;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                _RCX = _RCX->next;
                if ( _RCX == v22 )
                  goto LABEL_77;
              }
              R_ReferenceSunShadowCacheEntry(_RCX);
              v22 = s_gfxCachedSunShadowListHead;
              if ( v100 == 2 )
              {
LABEL_77:
                v210[v96 + 14] = v99;
                v210[v96 + 4] = v84;
                v96 = (unsigned int)(v96 + 1);
                goto LABEL_78;
              }
              if ( *(_BYTE *)(v113 + 497) )
              {
                v212[v85] = v113;
                v85 = (unsigned int)(v85 + 1);
              }
              else
              {
                v211[v82] = v113;
                v82 = (unsigned int)(v82 + 1);
              }
LABEL_78:
              v74 = partitionIndex;
              ++v99;
            }
            while ( v99 <= v98 );
            v86 = maxY;
            v97 = gridX;
            v194 = v82;
            v198 = v85;
          }
          ++v84;
        }
        while ( v84 <= v86 );
      }
      v105 = 0;
      if ( (_DWORD)v96 )
      {
        v106 = v189;
        v107 = 0i64;
        v108 = dataa;
        y0 = v191;
        v110 = threshold;
        v111 = (unsigned int)v96;
        LODWORD(v202) = v96;
        minAllocRemaining = v181;
        do
        {
          --minAllocRemaining;
          __asm
          {
            vmovss  [rsp+370h+sunShadowMapSize], xmm11
            vmovss  [rsp+370h+cellSize], xmm13
            vmovss  dword ptr [rsp+370h+outFarClip], xmm12
          }
          R_AddCachedSunShadowOverlap(v108, v74, &sunShadowLightDir, v210[v107 + 14], v210[v107 + 4], outFarClip, *(const float *)&cellSize, *(const float *)&sunShadowMapSize, SLODWORD(v110), y0, v106, &outValidEntryCount, minAllocRemaining, 1, NULL);
          v74 = partitionIndex;
          ++v107;
          --v111;
        }
        while ( v111 );
        __asm
        {
          vmovss  xmm8, dword ptr [rbp+270h+sunShadowLightDir+8]
          vmovss  xmm9, dword ptr [rbp+270h+sunShadowLightDir+4]
          vmovss  xmm10, dword ptr [rbp+270h+sunShadowLightDir]
        }
        v22 = s_gfxCachedSunShadowListHead;
        v105 = v202;
        LODWORD(v85) = v198;
        LODWORD(v82) = v194;
        v181 = minAllocRemaining;
      }
      else
      {
        minAllocRemaining = v181;
      }
      if ( (_DWORD)v85 )
      {
        v114 = (GfxCachedSunShadow **)v212;
        v115 = (unsigned int)v85;
        do
        {
          --minAllocRemaining;
          __asm
          {
            vmovss  [rsp+370h+sunShadowMapSize], xmm11
            vmovss  [rsp+370h+cellSize], xmm13
            vmovss  dword ptr [rsp+370h+outFarClip], xmm12
          }
          R_AddCachedSunShadowOverlap(dataa, partitionIndex, &sunShadowLightDir, (*v114)->gridX, (*v114)->gridY, outFarClipa, *(const float *)&cellSizea, *(const float *)&sunShadowMapSizea, SLODWORD(threshold), v191, v189, &outValidEntryCount, minAllocRemaining, v105++ < v189->cachedSunShadowMaxTilesPerFrame, *v114);
          ++v114;
          --v115;
        }
        while ( v115 );
        __asm
        {
          vmovss  xmm8, dword ptr [rbp+270h+sunShadowLightDir+8]
          vmovss  xmm9, dword ptr [rbp+270h+sunShadowLightDir+4]
          vmovss  xmm10, dword ptr [rbp+270h+sunShadowLightDir]
        }
        v22 = s_gfxCachedSunShadowListHead;
        LODWORD(v82) = v194;
        v181 = minAllocRemaining;
      }
      v116 = 0;
      v117 = v82 + 1;
      v118 = 0;
      if ( (_DWORD)v82 )
      {
        v119 = v211;
        do
        {
          if ( *(unsigned __int16 *)(*v119 + 500) > v116 && !*(_BYTE *)(*v119 + 3) )
          {
            v117 = v118;
            v116 = *(unsigned __int16 *)(*v119 + 500);
          }
          ++v118;
          ++v119;
        }
        while ( v118 < (unsigned int)v82 );
      }
      v120 = 0;
      if ( (_DWORD)v82 )
      {
        v121 = (GfxCachedSunShadow **)v211;
        do
        {
          v122 = --v181;
          allowRendering = v120 == v117 && v105 < v189->cachedSunShadowMaxTilesPerFrame;
          __asm
          {
            vmovss  [rsp+370h+sunShadowMapSize], xmm11
            vmovss  [rsp+370h+cellSize], xmm13
            vmovss  dword ptr [rsp+370h+outFarClip], xmm12
          }
          R_AddCachedSunShadowOverlap(dataa, partitionIndex, &sunShadowLightDir, (*v121)->gridX, (*v121)->gridY, outFarClipb, *(const float *)&cellSizeb, *(const float *)&sunShadowMapSizeb, SLODWORD(threshold), v191, v189, &outValidEntryCount, v122, allowRendering, *v121);
          ++v120;
          v105 += allowRendering;
          ++v121;
        }
        while ( v120 < (unsigned int)v82 );
        __asm
        {
          vmovss  xmm8, dword ptr [rbp+270h+sunShadowLightDir+8]
          vmovss  xmm9, dword ptr [rbp+270h+sunShadowLightDir+4]
          vmovss  xmm10, dword ptr [rbp+270h+sunShadowLightDir]
        }
        v22 = s_gfxCachedSunShadowListHead;
      }
      v15 = v189;
      if ( v105 >= v189->cachedSunShadowMaxTilesPerFrame )
      {
        v21 = partitionIndex;
        v18 = dataa;
        goto LABEL_172;
      }
      v124 = DVARBOOL_r_sunshadow_preCacheEnabled;
      if ( !DVARBOOL_r_sunshadow_preCacheEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_sunshadow_preCacheEnabled") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v124);
      if ( v124->current.enabled )
      {
        v21 = partitionIndex;
        _RBX = DCONST_DVARFLT_r_sunshadow_preCacheThreshold;
        __asm
        {
          vmulss  xmm0, xmm7, dword ptr [rcx+rdi*8+4Ch]
          vmulss  xmm2, xmm7, dword ptr [rcx+rdi*8+50h]
          vaddss  xmm1, xmm0, xmm14
          vsubss  xmm6, xmm1, dword ptr [rcx+rdi*8+2Ch]
          vaddss  xmm0, xmm2, xmm14
          vsubss  xmm7, xmm0, dword ptr [rcx+rdi*8+30h]
        }
        if ( !DCONST_DVARFLT_r_sunshadow_preCacheThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_sunshadow_preCacheThreshold") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBX);
        __asm { vmovss  xmm2, dword ptr [rbx+28h] }
        v133 = gridY;
        __asm
        {
          vmovss  [rsp+370h+x0], xmm2
          vmovaps xmm1, xmm7; y0
          vmovaps xmm0, xmm6; x0
        }
        if ( R_ComputeSunShadowPreCacheEdges(*(const float *)&_XMM0, *(const float *)&_XMM1, gridX, gridY, maxX, maxY, SLODWORD(sampleSize), LODWORD(cachedLODRefDistance), *(const float *)&x0, &outPreCacheDir, &outPreCacheEdge) )
        {
          _R15 = dataa;
          v137 = outPreCacheEdge.v[1];
          v138 = outPreCacheDir.v[1];
          __asm
          {
            vmovss  xmm0, dword ptr [r15+0E767Ch]
            vmovss  xmm1, dword ptr [r15+0E7680h]
            vmovss  [rbp+270h+var_2DC], xmm0
            vmovss  [rbp+270h+var_2D8], xmm1
          }
          if ( outPreCacheDir.v[0] )
          {
            if ( outPreCacheDir.v[1] == -1 )
            {
              v133 = outPreCacheEdge.v[1];
              goto LABEL_120;
            }
            if ( outPreCacheDir.v[1] == 1 )
            {
              v141 = outPreCacheEdge.v[1];
              maxY = outPreCacheEdge.v[1];
            }
            else
            {
LABEL_120:
              v141 = maxY;
            }
            if ( v133 <= v141 )
            {
              v142 = outPreCacheEdge.v[0];
              v22 = s_gfxCachedSunShadowListHead;
LABEL_123:
              v143 = v133;
              if ( rg.useCompressedSunShadowClipPlanes )
              {
                __asm { vmovaps xmm3, xmm13; sampleSize }
                R_CompressedSunShadow_GetCacheEntryClipPlanes(&_R15->sunShadow, v142, v133, *(float *)&_XMM3, &v185, &v186);
                __asm
                {
                  vmovss  xmm0, [rbp+270h+var_2DC]
                  vmovss  xmm1, [rbp+270h+var_2D8]
                }
                v141 = maxY;
                v22 = s_gfxCachedSunShadowListHead;
              }
              _RDX = v22;
              do
              {
                if ( _RDX->gridX == v142 && _RDX->gridY == v133 )
                {
                  __asm { vucomiss xmm12, dword ptr [rdx+24h] }
                  if ( _RDX->gridY == v133 )
                  {
                    __asm { vucomiss xmm11, dword ptr [rdx+28h] }
                    if ( _RDX->gridY == v133 )
                    {
                      __asm { vucomiss xmm10, dword ptr [rdx+8] }
                      if ( _RDX->gridY == v133 )
                      {
                        __asm { vucomiss xmm9, dword ptr [rdx+0Ch] }
                        if ( _RDX->gridY == v133 )
                        {
                          __asm { vucomiss xmm8, dword ptr [rdx+10h] }
                          if ( _RDX->gridY == v133 )
                          {
                            __asm { vucomiss xmm0, dword ptr [rdx+14h] }
                            if ( _RDX->gridY == v133 )
                            {
                              __asm { vucomiss xmm1, dword ptr [rdx+18h] }
                              if ( _RDX->gridY == v133 && !_RDX->bspOnly && _RDX->partitionIndex == partitionIndex && !_RDX->inProcessing )
                              {
                                if ( _RDX != v22 )
                                {
                                  v146 = _RDX->prev;
                                  next = _RDX->next;
                                  s_gfxCachedSunShadowListHead = _RDX;
                                  v146->next = next;
                                  _RDX->next->prev = _RDX->prev;
                                  _RDX->next = v22;
                                  v148 = v22->prev;
                                  v22 = _RDX;
                                  _RDX->prev = v148;
                                  v148->next = _RDX;
                                  _RDX->next->prev = _RDX;
                                  __asm
                                  {
                                    vmovss  xmm0, [rbp+270h+var_2DC]
                                    vmovss  xmm1, [rbp+270h+var_2D8]
                                  }
                                }
                                ++v133;
                                if ( v143 >= v141 )
                                {
                                  v21 = partitionIndex;
                                  goto LABEL_146;
                                }
                                goto LABEL_123;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                _RDX = _RDX->next;
              }
              while ( _RDX != v22 );
              v21 = partitionIndex;
LABEL_165:
              v18 = _R15;
              __asm
              {
                vmovss  [rsp+370h+sunShadowMapSize], xmm11
                vmovss  [rsp+370h+cellSize], xmm13
                vmovss  dword ptr [rsp+370h+outFarClip], xmm12
              }
              R_AddCachedSunShadowOverlap(_R15, v21, &sunShadowLightDir, v142, v133, outFarClipc, *(const float *)&cellSizec, *(const float *)&sunShadowMapSizec, SLODWORD(threshold), v191, v189, &outValidEntryCount, v181, 1, NULL);
              v22 = s_gfxCachedSunShadowListHead;
              goto LABEL_171;
            }
          }
          v22 = s_gfxCachedSunShadowListHead;
LABEL_146:
          if ( v138 )
          {
            v149 = gridX;
            v150 = maxX;
            if ( gridX <= maxX )
            {
              do
              {
                v151 = v149;
                if ( rg.useCompressedSunShadowClipPlanes )
                {
                  __asm { vmovaps xmm3, xmm13; sampleSize }
                  R_CompressedSunShadow_GetCacheEntryClipPlanes(&_R15->sunShadow, v149, v137, *(float *)&_XMM3, &v185, &v186);
                  __asm
                  {
                    vmovss  xmm0, [rbp+270h+var_2DC]
                    vmovss  xmm1, [rbp+270h+var_2D8]
                  }
                  v149 = gridX;
                  v150 = maxX;
                  v22 = s_gfxCachedSunShadowListHead;
                }
                _RDX = v22;
                while ( 1 )
                {
                  if ( _RDX->gridX == v149 && _RDX->gridY == v137 )
                  {
                    __asm { vucomiss xmm12, dword ptr [rdx+24h] }
                    if ( _RDX->gridY == v137 )
                    {
                      __asm { vucomiss xmm11, dword ptr [rdx+28h] }
                      if ( _RDX->gridY == v137 )
                      {
                        __asm { vucomiss xmm10, dword ptr [rdx+8] }
                        if ( _RDX->gridY == v137 )
                        {
                          __asm { vucomiss xmm9, dword ptr [rdx+0Ch] }
                          if ( _RDX->gridY == v137 )
                          {
                            __asm { vucomiss xmm8, dword ptr [rdx+10h] }
                            if ( _RDX->gridY == v137 )
                            {
                              __asm { vucomiss xmm0, dword ptr [rdx+14h] }
                              if ( _RDX->gridY == v137 )
                              {
                                __asm { vucomiss xmm1, dword ptr [rdx+18h] }
                                if ( _RDX->gridY == v137 && !_RDX->bspOnly && _RDX->partitionIndex == v21 && !_RDX->inProcessing )
                                  break;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  _RDX = _RDX->next;
                  if ( _RDX == v22 )
                  {
                    v142 = v149;
                    v133 = v137;
                    goto LABEL_165;
                  }
                }
                if ( _RDX != v22 )
                {
                  v154 = _RDX->prev;
                  v155 = _RDX->next;
                  s_gfxCachedSunShadowListHead = _RDX;
                  v154->next = v155;
                  _RDX->next->prev = _RDX->prev;
                  _RDX->next = v22;
                  v156 = v22->prev;
                  v22 = _RDX;
                  _RDX->prev = v156;
                  v156->next = _RDX;
                  _RDX->next->prev = _RDX;
                  __asm
                  {
                    vmovss  xmm0, [rbp+270h+var_2DC]
                    vmovss  xmm1, [rbp+270h+var_2D8]
                  }
                }
                gridX = ++v149;
              }
              while ( v151 < v150 );
            }
          }
          v18 = _R15;
          goto LABEL_171;
        }
      }
      else
      {
        v21 = partitionIndex;
      }
      v22 = s_gfxCachedSunShadowListHead;
      v18 = dataa;
LABEL_171:
      v15 = v189;
LABEL_172:
      firstCachedSunShadowPartition = v187;
      _R12 = v193;
LABEL_173:
      partitionIndex = ++v21;
      if ( v21 > v200 )
      {
        __asm
        {
          vmovaps xmm15, [rsp+370h+var_E0]
          vmovaps xmm14, [rsp+370h+var_D0]
          vmovaps xmm13, [rsp+370h+var_C0]
          vmovaps xmm12, [rsp+370h+var_B0]
          vmovaps xmm11, [rsp+370h+var_A0]
          vmovaps xmm10, [rsp+370h+var_90]
          vmovaps xmm9, [rsp+370h+var_80]
          vmovaps xmm8, [rsp+370h+var_70]
          vmovaps xmm7, [rsp+370h+var_60]
          vmovaps xmm6, [rsp+370h+var_50]
        }
        return;
      }
    }
  }
}

/*
==============
R_ComputeSunShadowPreCacheEdges
==============
*/

bool __fastcall R_ComputeSunShadowPreCacheEdges(double x0, double y0, const int minX, const int minY, const int maxX, const int maxY, const int cellSize, const unsigned int sunShadowMapSize, const float threshold, base_vec2_t<int> *outPreCacheDir)
{
  bool result; 
  char v61; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovd   xmm2, [rsp+0A8h+cellSize] }
  _ESI = maxX;
  _EBP = maxY;
  _EBX = minX;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovss  xmm7, cs:__real@3f800000
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmm6, xmm0
    vcvtdq2ps xmm2, xmm2
    vdivss  xmm8, xmm7, xmm2
    vmulss  xmm3, xmm8, xmm0
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmulss  xmm4, xmm8, xmm1
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps xmm9, xmm1
    vmovd   xmm2, ebx
    vcvtdq2ps xmm2, xmm2
    vsubss  xmm12, xmm3, xmm2
    vmovd   xmm3, r9d
    vcvtdq2ps xmm3, xmm3
    vsubss  xmm11, xmm4, xmm3
    vxorps  xmm5, xmm5, xmm5
    vcvtsi2ss xmm5, xmm5, rax
    vaddss  xmm1, xmm5, xmm6
    vmulss  xmm2, xmm1, xmm8
    vmovd   xmm0, esi
    vcvtdq2ps xmm0, xmm0
    vaddss  xmm3, xmm0, xmm7
    vsubss  xmm10, xmm3, xmm2
    vmovd   xmm0, ebp
    vcvtdq2ps xmm0, xmm0
    vaddss  xmm1, xmm5, xmm9
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm12, xmm6
    vaddss  xmm3, xmm0, xmm7
    vmulss  xmm2, xmm1, xmm8
    vsubss  xmm7, xmm3, xmm2
    vcomiss xmm11, xmm6
    vcomiss xmm10, xmm6
    vcomiss xmm7, xmm6
    vmovss  xmm0, [rsp+0A8h+threshold]
    vcomiss xmm12, xmm0
    vcomiss xmm10, xmm0
  }
  outPreCacheDir->v[0] = 0;
  __asm
  {
    vcomiss xmm11, xmm0
    vcomiss xmm7, xmm0
  }
  outPreCacheDir->v[1] = 0;
  result = outPreCacheDir->v[0] || outPreCacheDir->v[1];
  _R11 = &v61;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
  }
  return result;
}

/*
==============
R_CullSunShadowClipPlane
==============
*/
bool R_CullSunShadowClipPlane(const DpvsPlane *clipPlanes, unsigned int clipPlaneBegin, unsigned int clipPlaneEnd, const vec3_t *edgeMidPoint, const vec3_t *edgeDir, float edgeHalfSize)
{
  bool v30; 
  bool result; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps [rsp+0A8h+var_88], xmm13
    vmovaps [rsp+0A8h+var_98], xmm14
    vmovaps [rsp+0A8h+var_A8], xmm15
    vmovss  xmm15, [rsp+0A8h+edgeHalfSize]
    vmulss  xmm5, xmm15, dword ptr [rax]
    vmulss  xmm4, xmm15, dword ptr [rax+4]
    vmulss  xmm3, xmm15, dword ptr [rax+8]
    vmovss  xmm2, dword ptr [r9]
    vmovss  xmm1, dword ptr [r9+4]
    vmovss  xmm0, dword ptr [r9+8]
    vsubss  xmm9, xmm2, xmm5
    vsubss  xmm10, xmm1, xmm4
    vsubss  xmm11, xmm0, xmm3
    vaddss  xmm12, xmm2, xmm5
    vaddss  xmm13, xmm1, xmm4
    vaddss  xmm14, xmm0, xmm3
  }
  v30 = clipPlaneBegin < clipPlaneEnd;
  if ( clipPlaneBegin != clipPlaneEnd )
  {
    __asm { vxorps  xmm8, xmm8, xmm8 }
    do
    {
      __asm
      {
        vmulss  xmm1, xmm9, dword ptr [rax]
        vmulss  xmm0, xmm10, dword ptr [rax+4]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm11, dword ptr [rax+8]
        vmulss  xmm0, xmm13, dword ptr [rax+4]
        vaddss  xmm2, xmm2, xmm1
        vaddss  xmm7, xmm2, dword ptr [rax+0Ch]
        vcomiss xmm7, xmm8
        vmulss  xmm1, xmm12, dword ptr [rax]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm14, dword ptr [rax+8]
        vaddss  xmm2, xmm2, xmm1
        vaddss  xmm5, xmm2, dword ptr [rax+0Ch]
      }
      if ( __CFADD__(clipPlanes, 16i64 * clipPlaneBegin) || &clipPlanes[clipPlaneBegin] == NULL )
      {
        __asm { vcomiss xmm5, xmm8 }
        if ( __CFADD__(clipPlanes, 16i64 * clipPlaneBegin) || &clipPlanes[clipPlaneBegin] == NULL )
          goto LABEL_10;
        __asm
        {
          vmulss  xmm1, xmm5, xmm9
          vsubss  xmm4, xmm5, xmm7
          vmulss  xmm0, xmm7, xmm12
          vsubss  xmm1, xmm1, xmm0
          vmulss  xmm0, xmm13, xmm7
          vmulss  xmm2, xmm5, xmm10
          vdivss  xmm9, xmm1, xmm4
          vsubss  xmm1, xmm2, xmm0
          vmulss  xmm3, xmm5, xmm11
          vmulss  xmm0, xmm14, xmm7
          vdivss  xmm10, xmm1, xmm4
          vsubss  xmm1, xmm3, xmm0
          vdivss  xmm11, xmm1, xmm4
        }
      }
      else
      {
        __asm { vcomiss xmm5, xmm8 }
        if ( __CFADD__(clipPlanes, 16i64 * clipPlaneBegin) || &clipPlanes[clipPlaneBegin] == NULL )
        {
          __asm
          {
            vmulss  xmm1, xmm7, xmm12
            vsubss  xmm4, xmm7, xmm5
            vmulss  xmm0, xmm5, xmm9
            vsubss  xmm1, xmm1, xmm0
            vmulss  xmm0, xmm10, xmm5
            vmulss  xmm2, xmm7, xmm13
            vdivss  xmm12, xmm1, xmm4
            vsubss  xmm1, xmm2, xmm0
            vmulss  xmm3, xmm7, xmm14
            vmulss  xmm0, xmm11, xmm5
            vdivss  xmm13, xmm1, xmm4
            vsubss  xmm1, xmm3, xmm0
            vdivss  xmm14, xmm1, xmm4
          }
        }
      }
      v30 = ++clipPlaneBegin < clipPlaneEnd;
    }
    while ( clipPlaneBegin != clipPlaneEnd );
  }
  __asm
  {
    vsubss  xmm0, xmm13, xmm10
    vmulss  xmm1, xmm0, xmm0
    vsubss  xmm2, xmm12, xmm9
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vsubss  xmm3, xmm14, xmm11
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm15, xmm15
    vmulss  xmm2, xmm0, cs:__real@39d1b717
    vcomiss xmm3, xmm2
  }
  if ( v30 )
LABEL_10:
    result = 1;
  else
    result = 0;
  __asm { vmovaps xmm13, [rsp+0A8h+var_88] }
  _R11 = &retaddr;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm14, [rsp+0A8h+var_98]
    vmovaps xmm15, [rsp+0A8h+var_A8]
  }
  return result;
}

/*
==============
R_FindSunShadowCacheEntry
==============
*/

GfxCachedSunShadow *__fastcall R_FindSunShadowCacheEntry(const unsigned int partitionIndex, const vec3_t *sunShadowLightDir, double nearClip, double farClip, const int gridX, const int gridY, const float gridSize, const float cachedLODRefDistance, GfxSunShadowCachePolicy cachePolicy)
{
  __asm
  {
    vmovss  xmm1, [rsp+28h+cachedLODRefDistance]
    vmovss  xmm4, [rsp+28h+gridSize]
  }
  _RCX = s_gfxCachedSunShadowListHead;
  while ( 1 )
  {
    if ( _RCX->gridX == gridX && _RCX->gridY == gridY )
    {
      __asm { vucomiss xmm4, dword ptr [rcx+24h] }
      if ( _RCX->gridY == gridY )
      {
        __asm { vucomiss xmm1, dword ptr [rcx+28h] }
        if ( _RCX->gridY == gridY )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rdx]
            vucomiss xmm0, dword ptr [rcx+8]
          }
          if ( _RCX->gridY == gridY )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rdx+4]
              vucomiss xmm0, dword ptr [rcx+0Ch]
            }
            if ( _RCX->gridY == gridY )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rdx+8]
                vucomiss xmm0, dword ptr [rcx+10h]
              }
              if ( _RCX->gridY == gridY )
              {
                __asm { vucomiss xmm2, dword ptr [rcx+14h] }
                if ( _RCX->gridY == gridY )
                {
                  __asm { vucomiss xmm3, dword ptr [rcx+18h] }
                  if ( _RCX->gridY == gridY && _RCX->bspOnly == (cachePolicy & 1) && _RCX->partitionIndex == partitionIndex && !_RCX->inProcessing )
                    break;
                }
              }
            }
          }
        }
      }
    }
    _RCX = _RCX->next;
    if ( _RCX == s_gfxCachedSunShadowListHead )
      return 0i64;
  }
  if ( (cachePolicy & 2) != 0 )
    R_ReferenceSunShadowCacheEntry(_RCX);
  return _RCX;
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
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+30h]
    vxorps  xmm2, xmm0, cs:__xmm@80000000800000008000000080000000
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovss  [rsp+0A8h+arg_18], xmm2
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovss  xmm11, dword ptr [rcx+18h]
    vmulss  xmm0, xmm2, xmm11
    vaddss  xmm0, xmm0, dword ptr [rcx+0Ch]
    vmovss  [rsp+0A8h+arg_10], xmm0
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovss  xmm12, dword ptr [rcx+1Ch]
    vmovaps [rsp+0A8h+var_88], xmm13
    vmovaps [rsp+0A8h+var_98], xmm14
    vmovaps [rsp+0A8h+var_A8], xmm15
    vmovss  xmm15, dword ptr [rcx+34h]
    vmulss  xmm10, xmm15, dword ptr [rcx+24h]
    vmulss  xmm9, xmm15, dword ptr [rcx+28h]
    vmulss  xmm8, xmm15, dword ptr [rcx+2Ch]
    vaddss  xmm7, xmm10, xmm0
    vmulss  xmm0, xmm2, dword ptr [rcx+1Ch]
    vaddss  xmm1, xmm0, dword ptr [rcx+10h]
    vmulss  xmm0, xmm2, dword ptr [rcx+20h]
    vaddss  xmm6, xmm1, xmm9
    vaddss  xmm1, xmm0, dword ptr [rcx+14h]
    vaddss  xmm5, xmm1, xmm8
    vmulss  xmm0, xmm7, xmm7
    vmulss  xmm2, xmm6, xmm6
    vaddss  xmm3, xmm2, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm3, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vsqrtss xmm4, xmm2, xmm2
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm1, xmm0
    vdivss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm7, xmm2
    vxorps  xmm7, xmm15, cs:__xmm@80000000800000008000000080000000
    vmovss  dword ptr [rdx], xmm0
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [rdx+8], xmm0
    vmulss  xmm0, xmm11, dword ptr [rcx+30h]
    vaddss  xmm5, xmm0, dword ptr [rcx+0Ch]
    vmovss  xmm11, dword ptr [rcx+14h]
    vmulss  xmm1, xmm6, xmm2
    vmulss  xmm6, xmm7, dword ptr [rcx+24h]
    vmovss  dword ptr [rdx+4], xmm1
    vaddss  xmm1, xmm10, xmm5
    vmovss  xmm10, dword ptr [rcx+30h]
    vmovss  dword ptr [rdx+0Ch], xmm1
    vmulss  xmm0, xmm12, xmm10
    vaddss  xmm2, xmm0, dword ptr [rcx+10h]
    vaddss  xmm1, xmm2, xmm9
    vmovss  xmm9, dword ptr [rcx+20h]
    vmovss  dword ptr [rdx+10h], xmm1
    vmulss  xmm0, xmm9, xmm10
    vaddss  xmm2, xmm0, xmm11
    vaddss  xmm3, xmm2, xmm8
    vmovss  xmm8, cs:__real@80000000
    vmovss  dword ptr [rdx+14h], xmm3
    vmovss  xmm0, dword ptr [rdx+10h]
    vmovss  xmm4, dword ptr [rdx+0Ch]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, xmm8
    vblendvps xmm0, xmm3, xmm1, xmm0
    vdivss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm4, xmm2
    vmovss  dword ptr [rdx+0Ch], xmm0
    vmulss  xmm1, xmm2, dword ptr [rdx+10h]
    vmovss  dword ptr [rdx+10h], xmm1
    vmulss  xmm0, xmm2, dword ptr [rdx+14h]
    vmovss  dword ptr [rdx+14h], xmm0
    vmovaps xmm13, [rsp+0A8h+var_88]
  }
  _R11 = &retaddr;
  __asm
  {
    vmovaps xmm14, [rsp+0A8h+var_98]
    vmovaps xmm15, [rsp+0A8h+var_A8]
    vmulss  xmm1, xmm10, xmm12
    vaddss  xmm2, xmm1, dword ptr [rcx+10h]
    vaddss  xmm0, xmm6, xmm5
    vmovss  dword ptr [rdx+18h], xmm0
    vmulss  xmm0, xmm7, dword ptr [rcx+28h]
    vaddss  xmm1, xmm2, xmm0
    vmovss  dword ptr [rdx+1Ch], xmm1
    vmulss  xmm1, xmm7, dword ptr [rcx+2Ch]
    vmulss  xmm0, xmm10, xmm9
    vmovss  xmm10, cs:__real@3f800000
    vaddss  xmm2, xmm0, xmm11
    vaddss  xmm3, xmm2, xmm1
    vmovss  dword ptr [rdx+20h], xmm3
    vmovss  xmm4, dword ptr [rdx+18h]
    vmovss  xmm0, dword ptr [rdx+1Ch]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, xmm8
    vblendvps xmm0, xmm3, xmm10, xmm0
    vdivss  xmm2, xmm10, xmm0
    vmulss  xmm0, xmm4, xmm2
    vmovss  dword ptr [rdx+18h], xmm0
    vmulss  xmm1, xmm2, dword ptr [rdx+1Ch]
    vmovss  dword ptr [rdx+1Ch], xmm1
    vmulss  xmm0, xmm2, dword ptr [rdx+20h]
    vmulss  xmm1, xmm12, [rsp+0A8h+arg_18]
    vaddss  xmm2, xmm1, dword ptr [rcx+10h]
    vmulss  xmm1, xmm9, [rsp+0A8h+arg_18]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovss  dword ptr [rdx+20h], xmm0
    vaddss  xmm0, xmm6, [rsp+0A8h+arg_10]
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovss  dword ptr [rdx+24h], xmm0
    vmulss  xmm0, xmm7, dword ptr [rcx+28h]
    vaddss  xmm2, xmm2, xmm0
    vmulss  xmm0, xmm7, dword ptr [rcx+2Ch]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovss  dword ptr [rdx+28h], xmm2
    vaddss  xmm3, xmm1, xmm11
    vmovaps xmm11, xmmword ptr [r11-68h]
    vaddss  xmm4, xmm3, xmm0
    vmovss  dword ptr [rdx+2Ch], xmm4
    vmovss  xmm0, dword ptr [rdx+28h]
    vmovss  xmm5, dword ptr [rdx+24h]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, xmm8
    vmovaps xmm8, xmmword ptr [r11-38h]
    vblendvps xmm0, xmm3, xmm10, xmm0
    vdivss  xmm2, xmm10, xmm0
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [rdx+24h], xmm0
    vmulss  xmm1, xmm2, dword ptr [rdx+28h]
    vmovss  dword ptr [rdx+28h], xmm1
    vmulss  xmm0, xmm2, dword ptr [rdx+2Ch]
    vmovss  dword ptr [rdx+2Ch], xmm0
  }
}

/*
==============
R_GetSunAxes
==============
*/

void __fastcall R_GetSunAxes(const vec3_t *sunShadowLightDir, tmat33_t<vec3_t> *sunAxis, double _XMM2_8)
{
  __asm { vmovss  xmm1, cs:__real@3f666666 }
  sunAxis->m[2] = *sunShadowLightDir;
  _RSI = sunAxis;
  __asm
  {
    vmovss  xmm3, dword ptr [rdx+20h]
    vandps  xmm3, xmm3, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovaps [rsp+38h+var_18], xmm6
    vmovss  xmm6, cs:__real@3f800000
    vcmpltss xmm0, xmm1, xmm3
    vxorps  xmm2, xmm2, xmm2
    vblendvps xmm0, xmm6, xmm2, xmm0
    vmovss  [rsp+38h+arg_0], xmm0
    vcmpltss xmm0, xmm1, xmm3
    vmovss  xmm1, [rsp+38h+arg_0]
    vblendvps xmm0, xmm2, xmm6, xmm0
    vmovss  dword ptr [rdx+0Ch], xmm0
  }
  sunAxis->m[1].v[1] = 0.0;
  __asm { vmovss  dword ptr [rdx+14h], xmm1 }
  Vec3Cross(&sunAxis->m[1], &sunAxis->m[2], sunAxis->m);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+4]
    vmovss  xmm5, dword ptr [rsi]
    vmovss  xmm3, dword ptr [rsi+8]
    vmulss  xmm0, xmm0, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm4, xmm2, xmm2
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm6, xmm0
    vdivss  xmm2, xmm6, xmm0
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [rsi], xmm0
    vmulss  xmm1, xmm2, dword ptr [rsi+4]
    vmovss  dword ptr [rsi+4], xmm1
    vmulss  xmm0, xmm2, dword ptr [rsi+8]
    vmovss  dword ptr [rsi+8], xmm0
    vmovaps xmm6, [rsp+38h+var_18]
  }
  Vec3Cross(&_RSI->m[2], _RSI->m, &_RSI->m[1]);
}

/*
==============
R_GetSunShadowMapOverlayLines
==============
*/
void R_GetSunShadowMapOverlayLines(const GfxBackEndData *data, const GfxSunShadow *sunShadow, GfxSunShadowOverlayLines *overlay)
{
  GfxSunShadowOverlayLines *v11; 
  vec3_t (*clipPlanes)[8]; 
  vec2_t (*points)[9]; 
  signed __int64 v14; 
  __int64 v16; 
  unsigned int v23; 
  vec2_t *frustumShadowRays; 
  vec2_t *v93; 
  vec2_t *v94; 
  vec2_t *v95; 
  vec2_t clipOrg; 
  char v98; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps [rsp+0E8h+var_88], xmm10
    vmovss  xmm10, cs:__real@3f800000
  }
  frustumShadowRays = sunShadow->overlaySetup.frustumShadowRays;
  v93 = &sunShadow->overlaySetup.frustumShadowRays[1];
  v94 = &sunShadow->overlaySetup.frustumShadowRays[2];
  v95 = &sunShadow->overlaySetup.frustumShadowRays[3];
  _RBP = &sunShadow->overlaySetup;
  v11 = overlay;
  clipPlanes = sunShadow->overlaySetup.clipPlanes;
  points = overlay->borderPoints;
  v14 = (char *)sunShadow - (char *)overlay;
  _R14 = &sunShadow->partition[0].viewParms.projectionMatrix.m.m[3].v[1];
  v16 = 3i64;
  _RSI = (float *)&overlay->frustumLines[0][2][1] + 1;
  do
  {
    __asm
    {
      vmovss  xmm9, dword ptr [r14-34h]
      vmulss  xmm0, xmm9, dword ptr [r14-44h]
      vaddss  xmm7, xmm0, dword ptr [r14-4]
      vmulss  xmm0, xmm9, dword ptr [r14-40h]
      vaddss  xmm8, xmm0, dword ptr [r14]
    }
    v23 = *(_DWORD *)((char *)&v11[47].borderPoints[2][8].v[1] + v14);
    __asm
    {
      vmovaps xmm3, xmm9; clipScale
      vmovss  dword ptr [rsp+0E8h+clipOrg+4], xmm8
      vmovss  dword ptr [rsp+0E8h+clipOrg], xmm7
    }
    v11->borderPointCount[0] = R_GetSunShadowOverlayBorderPoly((const vec3_t *)clipPlanes, v23, &clipOrg, *(float *)&_XMM3, (vec2_t *)points);
    __asm { vmovss  xmm5, dword ptr [rbp+4] }
    _RAX = frustumShadowRays;
    __asm
    {
      vdivss  xmm6, xmm10, xmm9
      vmulss  xmm0, xmm6, dword ptr [rax]
      vaddss  xmm1, xmm0, dword ptr [rbp+0]
      vmovss  xmm4, dword ptr [rax+4]
    }
    _RAX = v93;
    __asm
    {
      vmulss  xmm2, xmm1, xmm9
      vaddss  xmm3, xmm2, xmm7
      vmovss  dword ptr [rsi-2Ch], xmm3
      vmulss  xmm0, xmm6, xmm4
      vaddss  xmm1, xmm0, xmm5
      vmulss  xmm2, xmm1, xmm9
      vaddss  xmm3, xmm2, xmm8
      vmovss  dword ptr [rsi-28h], xmm3
      vmulss  xmm0, xmm9, dword ptr [rbp+0]
      vaddss  xmm1, xmm0, xmm7
      vmovss  dword ptr [rsi-24h], xmm1
      vmulss  xmm0, xmm9, dword ptr [rbp+4]
      vaddss  xmm1, xmm0, xmm8
      vmovss  dword ptr [rsi-20h], xmm1
      vmulss  xmm0, xmm6, dword ptr [rax]
      vaddss  xmm1, xmm0, dword ptr [rbp+0]
      vmovss  xmm4, dword ptr [rax+4]
      vmovss  xmm5, dword ptr [rbp+4]
    }
    _RAX = v94;
    __asm
    {
      vmulss  xmm2, xmm1, xmm9
      vaddss  xmm3, xmm2, xmm7
      vmovss  dword ptr [rsi-1Ch], xmm3
      vmulss  xmm0, xmm6, xmm4
      vaddss  xmm1, xmm0, xmm5
      vmulss  xmm2, xmm1, xmm9
      vaddss  xmm3, xmm2, xmm8
      vmovss  dword ptr [rsi-18h], xmm3
      vmulss  xmm0, xmm9, dword ptr [rbp+0]
      vaddss  xmm1, xmm0, xmm7
      vmovss  dword ptr [rsi-14h], xmm1
      vmulss  xmm0, xmm9, dword ptr [rbp+4]
      vaddss  xmm1, xmm0, xmm8
      vmovss  dword ptr [rsi-10h], xmm1
      vmulss  xmm0, xmm6, dword ptr [rax]
      vaddss  xmm1, xmm0, dword ptr [rbp+0]
      vmovss  xmm4, dword ptr [rax+4]
      vmovss  xmm5, dword ptr [rbp+4]
    }
    _RAX = v95;
    __asm
    {
      vmulss  xmm2, xmm1, xmm9
      vaddss  xmm3, xmm2, xmm7
      vmovss  dword ptr [rsi-0Ch], xmm3
      vmulss  xmm0, xmm6, xmm4
      vaddss  xmm1, xmm0, xmm5
      vmulss  xmm2, xmm1, xmm9
      vaddss  xmm3, xmm2, xmm8
      vmovss  dword ptr [rsi-8], xmm3
      vmulss  xmm0, xmm9, dword ptr [rbp+0]
      vaddss  xmm1, xmm0, xmm7
      vmovss  dword ptr [rsi-4], xmm1
      vmulss  xmm0, xmm9, dword ptr [rbp+4]
      vaddss  xmm1, xmm0, xmm8
      vmovss  dword ptr [rsi], xmm1
      vmulss  xmm0, xmm6, dword ptr [rax]
      vaddss  xmm1, xmm0, dword ptr [rbp+0]
      vmovss  xmm4, dword ptr [rax+4]
      vmovss  xmm5, dword ptr [rbp+4]
      vmulss  xmm2, xmm1, xmm9
      vaddss  xmm3, xmm2, xmm7
      vmovss  dword ptr [rsi+4], xmm3
      vmulss  xmm0, xmm6, xmm4
      vaddss  xmm1, xmm0, xmm5
      vmulss  xmm2, xmm1, xmm9
      vaddss  xmm3, xmm2, xmm8
      vmovss  dword ptr [rsi+8], xmm3
      vmulss  xmm0, xmm9, dword ptr [rbp+0]
      vaddss  xmm1, xmm0, xmm7
      vmovss  dword ptr [rsi+0Ch], xmm1
      vmulss  xmm0, xmm9, dword ptr [rbp+4]
      vaddss  xmm1, xmm0, xmm8
    }
    ++points;
    ++clipPlanes;
    __asm { vmovss  dword ptr [rsi+10h], xmm1 }
    _RSI += 16;
    _R14 += 136;
    v11 = (GfxSunShadowOverlayLines *)((char *)v11 + 4);
    --v16;
  }
  while ( v16 );
  _R11 = &v98;
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
R_GetSunShadowOverlayBorderPoly
==============
*/

__int64 __fastcall R_GetSunShadowOverlayBorderPoly(const vec3_t *planes, unsigned int planeCount, const vec2_t *clipOrg, double clipScale, vec2_t *points)
{
  __int64 v14; 
  unsigned int v16; 
  unsigned int v18; 
  __int64 v24; 
  bool v27; 
  __int64 v28; 
  unsigned int v37; 
  bool v47; 
  unsigned int v62; 
  unsigned int v63; 
  unsigned int v65; 
  __int64 v66; 
  __int64 v84; 
  __int64 result; 
  vec2_t v92; 
  char v102; 

  __asm { vmovaps [rsp+228h+var_78], xmm11 }
  v14 = 0i64;
  v16 = 0;
  __asm { vmovaps xmm11, xmm3 }
  if ( planeCount == 1 )
    goto LABEL_24;
  v18 = 1;
  _RDI = &planes->v[2];
  __asm
  {
    vmovaps [rsp+228h+var_28], xmm6
    vmovaps [rsp+228h+var_38], xmm7
    vmovaps [rsp+228h+var_48], xmm8
    vmovss  xmm8, cs:__real@bdcccccd
    vmovaps [rsp+228h+var_58], xmm9
    vmovaps [rsp+228h+var_68], xmm10
    vmovaps [rsp+228h+var_88], xmm12
    vmovss  xmm12, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovaps [rsp+228h+var_98], xmm13
    vmovss  xmm13, cs:__real@3a83126f
    vmovaps [rsp+228h+var_A8], xmm14
    vmovss  xmm14, cs:__real@3f800000
  }
  v24 = planeCount - 1;
  do
  {
    if ( v18 < planeCount )
    {
      __asm
      {
        vmovss  xmm9, dword ptr [rdi-8]
        vmovss  xmm10, dword ptr [rdi-4]
      }
      v27 = planeCount < v18;
      v28 = planeCount - v18;
      _R8 = &planes[v18].v[2];
      do
      {
        __asm
        {
          vmovss  xmm6, dword ptr [r8-8]
          vmovss  xmm7, dword ptr [r8-4]
          vmulss  xmm1, xmm9, xmm7
          vmulss  xmm0, xmm10, xmm6
          vsubss  xmm4, xmm1, xmm0
          vandps  xmm2, xmm4, xmm12
          vcomiss xmm2, xmm13
        }
        if ( !v27 )
        {
          _RAX = v16;
          v37 = 0;
          __asm
          {
            vmulss  xmm1, xmm7, dword ptr [rdi]
            vmulss  xmm0, xmm10, dword ptr [r8]
            vmulss  xmm3, xmm9, dword ptr [r8]
            vsubss  xmm1, xmm1, xmm0
            vmulss  xmm0, xmm6, dword ptr [rdi]
            vdivss  xmm4, xmm14, xmm4
            vmulss  xmm2, xmm1, xmm4
            vmovss  dword ptr [rsp+rax*8+228h+var_1D8], xmm2
            vsubss  xmm1, xmm3, xmm0
            vmulss  xmm2, xmm1, xmm4
            vmovss  dword ptr [rsp+rax*8+228h+var_1D8+4], xmm2
          }
          v47 = 0;
          if ( planeCount )
          {
            __asm
            {
              vmovss  xmm3, dword ptr [rsp+rax*8+228h+var_1D8]
              vmovaps xmm4, xmm2
            }
            while ( 1 )
            {
              __asm
              {
                vmulss  xmm1, xmm4, dword ptr [r9+rcx*4+4]
                vmulss  xmm0, xmm3, dword ptr [r9+rcx*4]
                vaddss  xmm1, xmm1, xmm0
                vsubss  xmm2, xmm1, dword ptr [r9+rcx*4+8]
                vcomiss xmm2, xmm8
              }
              if ( v47 )
                break;
              v47 = ++v37 < planeCount;
              if ( v37 >= planeCount )
                goto LABEL_10;
            }
          }
          else
          {
LABEL_10:
            ++v16;
          }
        }
        _R8 += 3;
        v27 = v28-- == 0;
      }
      while ( v28 );
    }
    ++v18;
    _RDI += 3;
    --v24;
  }
  while ( v24 );
  __asm
  {
    vmovaps xmm14, [rsp+228h+var_A8]
    vmovaps xmm13, [rsp+228h+var_98]
    vmovaps xmm12, [rsp+228h+var_88]
    vmovaps xmm10, [rsp+228h+var_68]
    vmovaps xmm9, [rsp+228h+var_58]
    vmovaps xmm8, [rsp+228h+var_48]
    vmovaps xmm7, [rsp+228h+var_38]
    vmovaps xmm6, [rsp+228h+var_28]
  }
  if ( v16 < 3 )
  {
LABEL_24:
    result = 0i64;
  }
  else
  {
    v62 = Com_ConvexHull(&v92, v16, points);
    v63 = v62;
    if ( v62 > 9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 2234, ASSERT_TYPE_ASSERT, "( hullPtCount ) <= ( R_SUNSHADOW_CLIP_PLANE_LIMIT )", "%s <= %s\n\t%i, %i", "hullPtCount", "R_SUNSHADOW_CLIP_PLANE_LIMIT", v62, 9) )
      __debugbreak();
    if ( v63 >= 4 )
    {
      _RCX = (char *)&points[2].y;
      v65 = ((v63 - 4) >> 2) + 1;
      v66 = v65;
      v14 = 4 * v65;
      do
      {
        __asm { vmulss  xmm0, xmm11, dword ptr [rcx-14h] }
        _RCX += 32;
        __asm
        {
          vaddss  xmm1, xmm0, dword ptr [rbp+0]
          vmovss  dword ptr [rcx-34h], xmm1
          vmulss  xmm0, xmm11, dword ptr [rcx-30h]
          vaddss  xmm1, xmm0, dword ptr [rbp+4]
          vmovss  dword ptr [rcx-30h], xmm1
          vmulss  xmm0, xmm11, dword ptr [rcx-2Ch]
          vaddss  xmm1, xmm0, dword ptr [rbp+0]
          vmovss  dword ptr [rcx-2Ch], xmm1
          vmulss  xmm0, xmm11, dword ptr [rcx-28h]
          vaddss  xmm1, xmm0, dword ptr [rbp+4]
          vmovss  dword ptr [rcx-28h], xmm1
          vmulss  xmm0, xmm11, dword ptr [rcx-24h]
          vaddss  xmm1, xmm0, dword ptr [rbp+0]
          vmovss  dword ptr [rcx-24h], xmm1
          vmulss  xmm0, xmm11, dword ptr [rcx-20h]
          vaddss  xmm1, xmm0, dword ptr [rbp+4]
          vmovss  dword ptr [rcx-20h], xmm1
          vmulss  xmm0, xmm11, dword ptr [rcx-1Ch]
          vaddss  xmm1, xmm0, dword ptr [rbp+0]
          vmovss  dword ptr [rcx-1Ch], xmm1
          vmulss  xmm0, xmm11, dword ptr [rcx-18h]
          vaddss  xmm1, xmm0, dword ptr [rbp+4]
          vmovss  dword ptr [rcx-18h], xmm1
        }
        --v66;
      }
      while ( v66 );
    }
    if ( (unsigned int)v14 < v63 )
    {
      _RCX = &points[v14];
      v84 = v63 - (unsigned int)v14;
      do
      {
        __asm { vmulss  xmm0, xmm11, dword ptr [rcx] }
        ++_RCX;
        __asm
        {
          vaddss  xmm1, xmm0, dword ptr [rbp+0]
          vmovss  dword ptr [rcx-8], xmm1
          vmulss  xmm0, xmm11, dword ptr [rcx-4]
          vaddss  xmm1, xmm0, dword ptr [rbp+4]
          vmovss  dword ptr [rcx-4], xmm1
        }
        --v84;
      }
      while ( v84 );
    }
    result = v63;
  }
  _R11 = &v102;
  __asm { vmovaps xmm11, xmmword ptr [r11-60h] }
  return result;
}

/*
==============
R_InitSunShadowProjectionSetupForFrustum
==============
*/
void R_InitSunShadowProjectionSetupForFrustum(GfxViewInfo *viewInfo, GfxBackEndData *data, const GfxCamera *camera, GfxSunShadowMapMetrics *mapMetrics, const GfxSunShadowFrustumRays *frustumRays, GfxSunShadowProjectionSetup *projSetup)
{
  unsigned int v19; 
  __int64 v26; 
  unsigned int size; 
  bool v206; 
  double v283; 
  double v284; 
  vec3_t origin; 
  Bounds bounds; 
  tmat33_t<vec3_t> sunAxis; 
  char v292; 
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
  _R14 = frustumRays;
  v19 = 0;
  __asm
  {
    vmovss  xmm15, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm13, cs:__real@40000000
    vmovss  xmm10, cs:__real@3f000000
    vmovss  xmm11, cs:__real@3f800000
    vmovss  xmm14, cs:__real@bf800000
    vmovss  xmm12, cs:__real@3f7fbe77
  }
  v26 = 2i64;
  *(_QWORD *)origin.v = viewInfo;
  do
  {
    _RSI = (int)v19;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vsubss  xmm3, xmm0, xmm13
      vmovss  xmm1, dword ptr [r14+rsi*4+70h]
      vsubss  xmm2, xmm1, dword ptr [r14+rsi*4+68h]
      vdivss  xmm6, xmm3, xmm2
      vmovss  [rsp+rsi*4+1A0h+var_138], xmm6
      vmulss  xmm1, xmm6, dword ptr [r14+rsi*4+68h]
      vsubss  xmm2, xmm10, xmm1
      vxorps  xmm0, xmm0, xmm0
      vroundss xmm0, xmm0, xmm2, 2
      vaddss  xmm6, xmm0, xmm10
      vmovss  xmm1, [rsp+rsi*4+1A0h+var_138]
      vmulss  xmm2, xmm1, dword ptr [r14+rsi*4+70h]
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vsubss  xmm3, xmm0, xmm10
      vsubss  xmm0, xmm3, xmm2
      vxorps  xmm3, xmm3, xmm3
      vroundss xmm3, xmm3, xmm0, 1
      vsubss  xmm9, xmm3, xmm10
      vucomiss xmm6, xmm9
      vaddss  xmm0, xmm9, xmm13
      vcomiss xmm6, xmm0
      vmovss  xmm7, dword ptr [r14+rsi*4+68h]
      vmovss  xmm8, dword ptr [r14+rsi*4+70h]
      vxorps  xmm0, xmm7, xmm15
      vcomiss xmm8, xmm0
      vaddss  xmm6, xmm6, xmm14
      vsubss  xmm0, xmm11, xmm6
      vdivss  xmm7, xmm0, xmm7
      vmovss  [rsp+rsi*4+1A0h+var_138], xmm7
      vmovss  xmm0, [rsp+rsi*4+1A0h+var_138]
      vmulss  xmm1, xmm0, dword ptr [r14+rsi*4+68h]
      vaddss  xmm2, xmm1, xmm6
      vcomiss xmm2, xmm12
      vmovss  xmm0, [rsp+rsi*4+1A0h+var_138]
      vmulss  xmm1, xmm0, dword ptr [r14+rsi*4+68h]
      vmovsd  xmm0, cs:__real@3feff7cee0000000
      vmovsd  [rsp+1A0h+var_160], xmm0
      vaddss  xmm2, xmm1, xmm6
      vcvtss2sd xmm3, xmm2, xmm2
      vmovsd  [rsp+1A0h+var_168], xmm3
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 1774, ASSERT_TYPE_ASSERT, "( centerMins + scale[coord] * frustumRays->mins[coord] ) >= ( R_SUNSHADOW_PIXEL_PAD + 0.5f - 0.001f )", "%s >= %s\n\t%g, %g", "centerMins + scale[coord] * frustumRays->mins[coord]", "R_SUNSHADOW_PIXEL_PAD + 0.5f - EQUAL_EPSILON", v283, v284) )
      __debugbreak();
    __asm
    {
      vmovss  xmm1, [rsp+rsi*4+1A0h+var_138]
      vmulss  xmm2, xmm1, dword ptr [r14+rsi*4+70h]
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vsubss  xmm3, xmm0, xmm12
      vaddss  xmm0, xmm2, xmm6
      vcomiss xmm0, xmm3
    }
    ++v19;
    __asm { vmovss  [rbp+rsi*4+0A0h+var_120], xmm6 }
  }
  while ( v19 < 2 );
  _R15 = projSetup;
  _R13 = camera;
  __asm
  {
    vxorps  xmm8, xmm8, xmm8
    vmovss  xmm4, dword ptr [r13+4]
    vmulss  xmm1, xmm4, dword ptr [r15+4]
    vmovss  xmm3, dword ptr [r13+0]
    vmulss  xmm0, xmm3, dword ptr [r15]
    vmovss  xmm5, dword ptr [r13+8]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, dword ptr [r15+8]
    vaddss  xmm2, xmm2, xmm1
    vmovss  dword ptr [r15+24h], xmm2
    vmulss  xmm1, xmm4, dword ptr [r15+10h]
    vmulss  xmm0, xmm3, dword ptr [r15+0Ch]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, dword ptr [r15+14h]
    vaddss  xmm0, xmm2, xmm1
    vmovss  dword ptr [r15+28h], xmm0
    vmovss  xmm0, cs:?rg@@3Ur_globals_t@@A.sunShadowScaleSingleLQ; r_globals_t rg
    vcomiss xmm0, xmm8
  }
  if ( v19 <= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 1782, ASSERT_TYPE_ASSERT, "(rg.sunShadowScaleSingleLQ > 0.0f)", (const char *)&queryFormat, "rg.sunShadowScaleSingleLQ > 0.0f") )
    __debugbreak();
  __asm
  {
    vmovss  xmm7, cs:__real@3e000000
    vmovss  xmm6, cs:__real@41000000
  }
  _R14 = projSetup->sampleSize;
  __asm { vmovss  xmm0, cs:__real@44800000 }
  size = mapMetrics->size;
  _RSI = (float *)projSetup->shadowOrgPixelCenter + 1;
  __asm
  {
    vmovss  xmm3, [rbp+0A0h+var_120]
    vmovss  xmm4, [rbp+0A0h+var_11C]
    vxorps  xmm2, xmm2, xmm2
    vxorps  xmm9, xmm9, xmm9
    vcvtsi2ss xmm9, xmm9, r13
    vdivss  xmm1, xmm0, xmm9
    vmulss  xmm1, xmm1, dword ptr [rax+3C48h]
    vmulss  xmm5, xmm1, cs:?rg@@3Ur_globals_t@@A.sunShadowScaleSingleLQ; r_globals_t rg
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, xmm5
    vmovss  dword ptr [r14], xmm1
    vmovss  xmm0, dword ptr [r15+24h]
    vdivss  xmm1, xmm0, xmm1
    vroundss xmm2, xmm2, xmm1, 1
    vmovss  dword ptr [r15+4Ch], xmm2
    vmovss  xmm0, dword ptr [r15+28h]
    vdivss  xmm1, xmm0, dword ptr [r14]
    vxorps  xmm2, xmm2, xmm2
    vroundss xmm2, xmm2, xmm1, 1
    vmovss  dword ptr [r15+50h], xmm2
    vmulss  xmm1, xmm7, dword ptr [r15+4Ch]
    vxorps  xmm2, xmm2, xmm2
    vroundss xmm2, xmm2, xmm1, 1
    vmulss  xmm0, xmm2, xmm6
    vmovss  dword ptr [r15+4Ch], xmm0
    vmulss  xmm2, xmm7, dword ptr [r15+50h]
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm0, xmm0, xmm2, 1
    vmulss  xmm0, xmm0, xmm6
    vmovss  dword ptr [r15+50h], xmm0
    vaddss  xmm2, xmm10, dword ptr [r15+4Ch]
    vmulss  xmm0, xmm2, dword ptr [r14]
    vmovss  dword ptr [r15+4Ch], xmm0
    vaddss  xmm2, xmm10, dword ptr [r15+50h]
    vmulss  xmm0, xmm2, dword ptr [r14]
    vmovss  dword ptr [r15+50h], xmm0
    vmovss  dword ptr [r15+30h], xmm4
    vxorps  xmm1, xmm1, xmm1
    vxorps  xmm2, xmm2, xmm2
    vmulss  xmm0, xmm3, xmm7
    vroundss xmm1, xmm1, xmm0, 1
    vmulss  xmm0, xmm1, xmm6
    vaddss  xmm1, xmm0, xmm10
    vmovss  dword ptr [r15+2Ch], xmm1
    vmulss  xmm1, xmm7, dword ptr [rsi]
    vroundss xmm2, xmm2, xmm1, 1
    vmulss  xmm0, xmm2, xmm6
    vaddss  xmm1, xmm0, xmm10
    vmovss  dword ptr [rsi], xmm1
  }
  projSetup->farthestShadowedViewDepth[0] = 5000000.0;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, xmm5
    vmovss  dword ptr [r15+70h], xmm1
    vmovss  xmm0, dword ptr [r15+24h]
    vdivss  xmm1, xmm0, xmm1
    vroundss xmm2, xmm2, xmm1, 1
    vmovss  dword ptr [r15+54h], xmm2
    vmovss  xmm0, dword ptr [r15+28h]
    vdivss  xmm1, xmm0, dword ptr [r15+70h]
    vxorps  xmm2, xmm2, xmm2
    vroundss xmm2, xmm2, xmm1, 1
    vmovss  dword ptr [r15+58h], xmm2
    vmulss  xmm1, xmm7, dword ptr [r15+54h]
    vxorps  xmm2, xmm2, xmm2
    vroundss xmm2, xmm2, xmm1, 1
    vmulss  xmm0, xmm2, xmm6
    vmovss  dword ptr [r15+54h], xmm0
    vmulss  xmm2, xmm7, dword ptr [r15+58h]
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm0, xmm0, xmm2, 1
    vmulss  xmm0, xmm0, xmm6
    vmovss  dword ptr [r15+58h], xmm0
    vaddss  xmm2, xmm10, dword ptr [r15+54h]
    vmulss  xmm0, xmm2, dword ptr [r15+70h]
    vmovss  dword ptr [r15+54h], xmm0
    vaddss  xmm2, xmm10, dword ptr [r15+58h]
    vmulss  xmm0, xmm2, dword ptr [r15+70h]
    vmovss  dword ptr [r15+58h], xmm0
    vmovss  dword ptr [r15+34h], xmm3
    vmovss  dword ptr [r15+38h], xmm4
    vmulss  xmm1, xmm7, dword ptr [r15+34h]
    vxorps  xmm2, xmm2, xmm2
    vroundss xmm2, xmm2, xmm1, 1
    vmulss  xmm0, xmm2, xmm6
    vaddss  xmm1, xmm0, xmm10
    vmovss  dword ptr [r15+34h], xmm1
    vmulss  xmm1, xmm7, dword ptr [r15+38h]
    vxorps  xmm2, xmm2, xmm2
    vroundss xmm2, xmm2, xmm1, 1
    vmulss  xmm0, xmm2, xmm6
    vaddss  xmm1, xmm0, xmm10
    vmovss  dword ptr [r15+38h], xmm1
  }
  projSetup->farthestShadowedViewDepth[1] = 5000000.0;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, xmm5
    vmovss  dword ptr [r15+74h], xmm1
    vmovss  xmm0, dword ptr [r15+24h]
    vdivss  xmm1, xmm0, xmm1
    vxorps  xmm2, xmm2, xmm2
    vroundss xmm2, xmm2, xmm1, 1
    vmovss  dword ptr [r15+5Ch], xmm2
    vmovss  xmm0, dword ptr [r15+28h]
    vdivss  xmm1, xmm0, dword ptr [r15+74h]
    vxorps  xmm2, xmm2, xmm2
    vroundss xmm2, xmm2, xmm1, 1
    vmovss  dword ptr [r15+60h], xmm2
    vmulss  xmm1, xmm7, dword ptr [r15+5Ch]
    vxorps  xmm2, xmm2, xmm2
    vroundss xmm2, xmm2, xmm1, 1
    vmulss  xmm0, xmm2, xmm6
    vmovss  dword ptr [r15+5Ch], xmm0
    vmulss  xmm2, xmm7, dword ptr [r15+60h]
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm0, xmm0, xmm2, 1
    vmulss  xmm0, xmm0, xmm6
    vmovss  dword ptr [r15+60h], xmm0
    vaddss  xmm2, xmm10, dword ptr [r15+5Ch]
    vmulss  xmm0, xmm2, dword ptr [r15+74h]
    vmovss  dword ptr [r15+5Ch], xmm0
    vaddss  xmm2, xmm10, dword ptr [r15+60h]
    vmulss  xmm0, xmm2, dword ptr [r15+74h]
    vmovss  dword ptr [r15+60h], xmm0
    vmovss  dword ptr [r15+3Ch], xmm3
    vmovss  dword ptr [r15+40h], xmm4
    vmulss  xmm1, xmm7, dword ptr [r15+3Ch]
    vxorps  xmm2, xmm2, xmm2
    vroundss xmm2, xmm2, xmm1, 1
    vmulss  xmm0, xmm2, xmm6
    vaddss  xmm1, xmm0, xmm10
    vmovss  dword ptr [r15+3Ch], xmm1
    vmulss  xmm1, xmm7, dword ptr [r15+40h]
    vxorps  xmm2, xmm2, xmm2
    vroundss xmm2, xmm2, xmm1, 1
    vmulss  xmm0, xmm2, xmm6
    vaddss  xmm1, xmm0, xmm10
    vmovss  dword ptr [r15+40h], xmm1
  }
  projSetup->farthestShadowedViewDepth[2] = 5000000.0;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, xmm5
    vmovss  dword ptr [r15+78h], xmm1
    vmovss  xmm0, dword ptr [r15+24h]
    vdivss  xmm1, xmm0, xmm1
    vxorps  xmm2, xmm2, xmm2
    vroundss xmm2, xmm2, xmm1, 1
    vmovss  dword ptr [r15+64h], xmm2
    vmovss  xmm0, dword ptr [r15+28h]
  }
  v206 = !rg.useCompressedSunShadowClipPlanes;
  __asm { vdivss  xmm1, xmm0, dword ptr [r15+78h] }
  _R12 = data;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2
    vroundss xmm2, xmm2, xmm1, 1
    vmovss  dword ptr [r15+68h], xmm2
    vmulss  xmm1, xmm7, dword ptr [r15+64h]
    vxorps  xmm2, xmm2, xmm2
    vroundss xmm2, xmm2, xmm1, 1
    vmulss  xmm0, xmm2, xmm6
    vmovss  dword ptr [r15+64h], xmm0
    vmulss  xmm2, xmm7, dword ptr [r15+68h]
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm0, xmm0, xmm2, 1
    vmulss  xmm0, xmm0, xmm6
    vmovss  dword ptr [r15+68h], xmm0
    vaddss  xmm2, xmm10, dword ptr [r15+64h]
    vmulss  xmm0, xmm2, dword ptr [r15+78h]
    vmovss  dword ptr [r15+64h], xmm0
    vaddss  xmm2, xmm10, dword ptr [r15+68h]
    vmulss  xmm0, xmm2, dword ptr [r15+78h]
    vmovss  dword ptr [r15+68h], xmm0
    vmovss  dword ptr [r15+44h], xmm3
    vmovss  dword ptr [r15+48h], xmm4
    vmulss  xmm1, xmm7, dword ptr [r15+44h]
    vxorps  xmm2, xmm2, xmm2
    vroundss xmm2, xmm2, xmm1, 1
    vmulss  xmm0, xmm2, xmm6
    vaddss  xmm1, xmm0, xmm10
    vmovss  dword ptr [r15+44h], xmm1
    vmulss  xmm1, xmm7, dword ptr [r15+48h]
    vxorps  xmm2, xmm2, xmm2
    vroundss xmm2, xmm2, xmm1, 1
    vmulss  xmm0, xmm2, xmm6
    vaddss  xmm1, xmm0, xmm10
    vmovss  dword ptr [r15+48h], xmm1
  }
  projSetup->farthestShadowedViewDepth[3] = 5000000.0;
  if ( !v206 )
    R_CompressedSunShadow_UpdateShadowBounds(data, size, projSetup);
  __asm { vmulss  xmm6, xmm9, xmm10 }
  if ( rg.useDistantSunShadowCenter )
  {
    __asm
    {
      vaddss  xmm0, xmm6, xmm10
      vshufps xmm0, xmm0, xmm0, 0
      vmovups xmmword ptr [r15+3Ch], xmm0
    }
  }
  if ( r_debugDrawSunBounds->current.enabled )
  {
    R_GetSunAxes(&data->sunShadow.lightDir, &sunAxis);
    __asm
    {
      vmovss  xmm13, dword ptr [r15+24h]
      vmovss  xmm14, dword ptr [r15+28h]
      vmovss  xmm9, dword ptr [r12+0E766Ch]
      vmovss  xmm11, dword ptr [r12+0E7670h]
      vmovss  xmm12, dword ptr [r12+0E7674h]
      vxorps  xmm15, xmm15, xmm15
      vcvtsi2ss xmm15, xmm15, rax
      vaddss  xmm7, xmm6, xmm10
    }
    do
    {
      __asm
      {
        vmovss  xmm5, dword ptr [r14]
        vmovss  xmm4, dword ptr [r12+0E767Ch]
        vsubss  xmm2, xmm7, dword ptr [rsi]
        vmulss  xmm0, xmm5, xmm15
        vmovss  dword ptr [rbp+0A0h+bounds.halfSize], xmm0
        vmovss  dword ptr [rbp+0A0h+bounds.halfSize+4], xmm0
        vmovss  xmm0, dword ptr [r12+0E7680h]
        vsubss  xmm1, xmm0, xmm4
        vsubss  xmm0, xmm7, dword ptr [rsi-4]
        vmulss  xmm3, xmm1, xmm10
        vmulss  xmm1, xmm0, xmm5
        vmulss  xmm0, xmm2, xmm5
        vaddss  xmm6, xmm1, xmm13
        vaddss  xmm5, xmm0, xmm14
        vmulss  xmm1, xmm5, dword ptr [rbp+0A0h+sunAxis+0Ch]
        vmulss  xmm0, xmm6, dword ptr [rbp+0A0h+sunAxis]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm0, xmm6, dword ptr [rbp+0A0h+sunAxis+4]
        vaddss  xmm4, xmm3, xmm4
        vmulss  xmm1, xmm4, xmm9
        vsubss  xmm2, xmm2, xmm1
        vmovss  dword ptr [rsp+1A0h+origin], xmm2
        vmovss  dword ptr [rbp+0A0h+bounds.halfSize+8], xmm3
        vmulss  xmm3, xmm5, dword ptr [rbp+0A0h+sunAxis+10h]
        vaddss  xmm2, xmm3, xmm0
        vmulss  xmm3, xmm5, dword ptr [rbp+0A0h+sunAxis+14h]
        vmulss  xmm0, xmm6, dword ptr [rbp+0A0h+sunAxis+8]
        vmulss  xmm1, xmm4, xmm11
        vsubss  xmm2, xmm2, xmm1
        vmovss  dword ptr [rsp+1A0h+origin+4], xmm2
        vaddss  xmm2, xmm3, xmm0
        vmulss  xmm1, xmm12, xmm4
        vsubss  xmm2, xmm2, xmm1
        vmovss  dword ptr [rsp+1A0h+origin+8], xmm2
        vmovss  dword ptr [rbp+0A0h+bounds.midPoint], xmm8
        vmovss  dword ptr [rbp+0A0h+bounds.midPoint+4], xmm8
        vmovss  dword ptr [rbp+0A0h+bounds.midPoint+8], xmm8
      }
      R_AddDebugBoxOriented(&data->debugGlobals, &origin, &bounds, &sunAxis, &colorLtYellow);
      ++_R14;
      _RSI += 2;
      --v26;
    }
    while ( v26 );
  }
  _R11 = &v292;
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
R_InitializeCachedSunShadowData
==============
*/
void R_InitializeCachedSunShadowData(void)
{
  unsigned int v1; 
  __int64 v2; 
  int v3; 
  __int64 v4; 
  __int64 v6; 
  __int128 v7; 

  HIDWORD(v7) = 2048;
  _RDX = &s_gfxCachedSunShadowStore[0].sunShadowLightDir.v[2];
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
    *((_WORD *)_RDX + 240) = 0;
    *((_BYTE *)_RDX + 482) = 0;
    *((_WORD *)_RDX + 242) = 0;
    *((_WORD *)_RDX - 8) = 0;
    *(_WORD *)((char *)_RDX - 13) = 0;
    *((_BYTE *)_RDX - 11) = 0;
    LODWORD(v7) = v3 * (v1 & 7);
    *((_BYTE *)_RDX - 14) = 0;
    v4 = v2 & 0x3F;
    *(_QWORD *)(_RDX + 5) = 0i64;
    ++v2;
    *((_WORD *)_RDX + 14) = 0;
    *((_QWORD *)_RDX - 1) = 0i64;
    *_RDX = 0.0;
    *((_WORD *)_RDX + 243) = v1;
    *((_QWORD *)_RDX + 63) = -1i64;
    *((_QWORD *)_RDX + 64) = -1i64;
    _RDX += 152;
    DWORD1(v7) = v3 * ((unsigned __int16)v1 >> 3);
    __asm { vmovups xmm0, [rsp+28h+var_28] }
    v6 = v4;
    LOBYTE(v4) = v1++ - 1;
    *((_QWORD *)_RDX - 3) = &s_gfxCachedSunShadowStore[v6];
    __asm { vmovups xmmword ptr [rdx-78h], xmm0 }
    *((_QWORD *)_RDX - 4) = &s_gfxCachedSunShadowStore[v4 & 0x3F];
    *(_QWORD *)(_RDX - 11) = 0i64;
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
  __int64 v13; 
  char v76; 
  bool v77; 
  bool v79; 
  bool v80; 
  bool v81; 
  bool v82; 
  CL_TransientsWorldMP_TransientChangedVisibleIterator v95; 

  *(_QWORD *)&v95.m_wordIndex = 0i64;
  *(_QWORD *)&v95.m_currentTransientIndex = 0i64;
  CL_TransientsWorldMP_TransientChangedVisibleIterator::Init(&v95);
  if ( CL_TransientsWorldMP_TransientChangedVisibleIterator::Advance(&v95) )
  {
    __asm
    {
      vmovaps [rsp+128h+var_38], xmm6
      vmovaps [rsp+128h+var_48], xmm7
      vmovaps [rsp+128h+var_58], xmm8
      vmovaps [rsp+128h+var_68], xmm9
      vmovaps [rsp+128h+var_78], xmm10
      vmovaps [rsp+128h+var_88], xmm11
      vmovaps [rsp+128h+var_98], xmm12
      vmovaps [rsp+128h+var_A8], xmm13
      vmovaps [rsp+128h+var_B8], xmm14
      vmovaps [rsp+128h+var_C8], xmm15
      vxorps  xmm15, xmm15, xmm15
    }
    do
    {
      _RSI = CL_TransientsWorldMP_TransientChangedVisibleIterator::GetCurrentBounds(&v95);
      _RBX = &s_gfxCachedSunShadowStore[0].viewParms.camera.origin.v[2];
      v13 = 64i64;
      do
      {
        if ( *((_BYTE *)_RBX + 120) && !*((_BYTE *)_RBX + 122) && !*((_BYTE *)_RBX + 121) )
        {
          __asm
          {
            vmovups ymm12, ymmword ptr [rbx-88h]
            vmovups ymm13, ymmword ptr [rbx-68h]
            vmovups xmm0, xmmword ptr [rsi]
            vsubss  xmm5, xmm0, dword ptr [rbx-8]
            vmovsd  xmm14, qword ptr [rsi+10h]
            vmovups [rsp+128h+var_E8], xmm0
            vmovss  xmm0, dword ptr [rsp+128h+var_E8+4]
            vsubss  xmm3, xmm0, dword ptr [rbx-4]
            vmovss  xmm0, dword ptr [rsp+128h+var_E8+8]
            vsubss  xmm4, xmm0, dword ptr [rbx]
            vextractf128 xmm6, ymm12, 1
            vmulss  xmm1, xmm6, xmm3
            vmulss  xmm0, xmm12, xmm5
            vaddss  xmm2, xmm1, xmm0
            vmovss  dword ptr [rsp+128h+var_E8+4], xmm3
            vextractf128 xmm9, ymm12, 1
            vshufps xmm8, xmm12, xmm12, 55h ; 'U'
            vmulss  xmm0, xmm13, xmm4
            vaddss  xmm2, xmm2, xmm0
            vextractf128 xmm1, ymm13, 1
            vaddss  xmm11, xmm2, xmm1
            vmulss  xmm0, xmm8, xmm5
            vshufps xmm9, xmm9, xmm9, 55h ; 'U'
            vmulss  xmm1, xmm9, xmm3
            vmulss  xmm3, xmm12, dword ptr [rsp+128h+var_E8+0Ch]
            vmovss  xmm12, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
            vaddss  xmm2, xmm1, xmm0
            vandps  xmm3, xmm3, xmm12
            vextractf128 xmm1, ymm13, 1
            vshufps xmm1, xmm1, xmm1, 55h ; 'U'
            vmovsd  [rsp+128h+var_D8], xmm14
            vmovups xmm7, xmm13
            vshufps xmm7, xmm7, xmm7, 55h ; 'U'
            vmulss  xmm0, xmm7, xmm4
            vaddss  xmm2, xmm2, xmm0
            vaddss  xmm10, xmm2, xmm1
            vmulss  xmm1, xmm13, dword ptr [rsp+128h+var_D8+4]
            vandps  xmm1, xmm1, xmm12
            vmulss  xmm0, xmm14, xmm6
            vandps  xmm0, xmm0, xmm12
            vaddss  xmm2, xmm3, xmm0
            vmulss  xmm3, xmm8, dword ptr [rsp+128h+var_E8+0Ch]
            vaddss  xmm6, xmm2, xmm1
            vmulss  xmm1, xmm7, dword ptr [rsp+128h+var_D8+4]
            vandps  xmm1, xmm1, xmm12
            vandps  xmm3, xmm3, xmm12
            vmulss  xmm0, xmm14, xmm9
            vandps  xmm0, xmm0, xmm12
            vmovss  xmm12, cs:__real@3f800000
            vaddss  xmm2, xmm3, xmm0
            vaddss  xmm7, xmm2, xmm1
            vmovaps xmm2, xmm12; max
            vmovaps xmm1, xmm15; min
            vsubss  xmm0, xmm11, xmm6; val
            vmovss  dword ptr [rsp+128h+var_E8+8], xmm4
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm
          {
            vmovaps xmm8, xmm0
            vaddss  xmm0, xmm6, xmm11; val
            vmovaps xmm2, xmm12; max
            vmovaps xmm1, xmm15; min
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm
          {
            vmovaps xmm9, xmm0
            vsubss  xmm0, xmm10, xmm7; val
            vmovaps xmm2, xmm12; max
            vmovaps xmm1, xmm15; min
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm
          {
            vmovaps xmm6, xmm0
            vaddss  xmm0, xmm7, xmm10; val
            vmovaps xmm2, xmm12; max
            vmovaps xmm1, xmm15; min
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm
          {
            vcomiss xmm8, xmm9
            vmovaps xmm7, xmm0
          }
          if ( !(v76 | v77) )
          {
            v79 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 216, ASSERT_TYPE_ASSERT, "(minX <= maxX)", (const char *)&queryFormat, "minX <= maxX");
            v76 = 0;
            v77 = !v79;
            if ( v79 )
              __debugbreak();
          }
          __asm { vcomiss xmm6, xmm7 }
          if ( !(v76 | v77) )
          {
            v80 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 217, ASSERT_TYPE_ASSERT, "(minY <= maxY)", (const char *)&queryFormat, "minY <= maxY");
            v76 = 0;
            v77 = !v80;
            if ( v80 )
              __debugbreak();
          }
          __asm { vcomiss xmm8, xmm15 }
          if ( v76 )
          {
            v81 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 218, ASSERT_TYPE_ASSERT, "(minX >= 0.0f)", (const char *)&queryFormat, "minX >= 0.0f");
            v76 = 0;
            v77 = !v81;
            if ( v81 )
              __debugbreak();
          }
          __asm { vcomiss xmm6, xmm15 }
          if ( v76 )
          {
            v82 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 219, ASSERT_TYPE_ASSERT, "(minY >= 0.0f)", (const char *)&queryFormat, "minY >= 0.0f");
            v76 = 0;
            v77 = !v82;
            if ( v82 )
              __debugbreak();
          }
          __asm
          {
            vsubss  xmm0, xmm9, xmm8
            vcomiss xmm0, xmm15
          }
          if ( !(v76 | v77) )
          {
            __asm
            {
              vsubss  xmm0, xmm7, xmm6
              vcomiss xmm0, xmm15
            }
            if ( !(v76 | v77) )
              *((_BYTE *)_RBX + 122) = 1;
          }
        }
        _RBX += 152;
        --v13;
      }
      while ( v13 );
    }
    while ( CL_TransientsWorldMP_TransientChangedVisibleIterator::Advance(&v95) );
    __asm
    {
      vmovaps xmm15, [rsp+128h+var_C8]
      vmovaps xmm14, [rsp+128h+var_B8]
      vmovaps xmm13, [rsp+128h+var_A8]
      vmovaps xmm12, [rsp+128h+var_98]
      vmovaps xmm11, [rsp+128h+var_88]
      vmovaps xmm10, [rsp+128h+var_78]
      vmovaps xmm9, [rsp+128h+var_68]
      vmovaps xmm8, [rsp+128h+var_58]
      vmovaps xmm7, [rsp+128h+var_48]
      vmovaps xmm6, [rsp+128h+var_38]
    }
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
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+34h]
    vsubss  xmm2, xmm0, dword ptr [rcx+30h]
    vmovss  xmm3, dword ptr [rcx+2Ch]
    vmovss  xmm1, cs:__real@3f800000
    vdivss  xmm4, xmm1, xmm2
    vmulss  xmm0, xmm4, dword ptr [rcx+30h]
    vmovss  xmm2, dword ptr [rcx+20h]
    vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000
    vmovss  dword ptr [rdx], xmm1
    vmovss  dword ptr [rdx+4], xmm4
    vmovss  dword ptr [rdx+8], xmm3
    vmovss  dword ptr [rdx+0Ch], xmm2
  }
}

/*
==============
R_SetCloudShadowParams
==============
*/
void R_SetCloudShadowParams(const GfxCloudShadow *cloudShadow, GfxViewInfo *viewInfo)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+34h]
    vsubss  xmm2, xmm0, dword ptr [rcx+30h]
    vmovss  xmm1, cs:__real@3f800000
    vdivss  xmm4, xmm1, xmm2
    vmulss  xmm0, xmm4, dword ptr [rcx+30h]
    vmovss  xmm1, dword ptr [rcx+2Ch]
    vmovss  xmm2, dword ptr [rcx+20h]
    vxorps  xmm3, xmm0, cs:__xmm@80000000800000008000000080000000
    vmovss  dword ptr [rdx+1E50h], xmm3
    vmovss  dword ptr [rdx+1E54h], xmm4
    vmovss  dword ptr [rdx+1E58h], xmm1
    vmovss  dword ptr [rdx+1E5Ch], xmm2
  }
}

/*
==============
R_SetSunShadowMapViewParms
==============
*/
void R_SetSunShadowMapViewParms(const GfxSunShadowMapMetrics *mapMetrics, const GfxSunShadowProjectionSetup *projSetup, unsigned int partitionIndex, GfxSunShadow *sunShadow)
{
  float v15; 
  float v25; 
  double v64; 
  _BYTE v65[64]; 

  _R15 = partitionIndex;
  _RSI = projSetup;
  __asm
  {
    vmovaps [rsp+0C8h+var_48], xmm6
    vmovaps [rsp+0C8h+var_58], xmm7
  }
  _RBP = sunShadow;
  _RDI = &sunShadow->partition[partitionIndex];
  DebugWipe(_RDI, 0x180ui64);
  __asm
  {
    vmovss  xmm7, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm0, dword ptr [rsi+18h]
    vmovss  xmm2, dword ptr [rsi+20h]
    vmovss  xmm5, dword ptr [rsi]
    vmovss  xmm4, dword ptr [rsi+4]
  }
  v15 = _RSI->sunAxis.m[1].v[1];
  __asm { vmovss  xmm3, dword ptr [rsi+0Ch] }
  *(_QWORD *)_RDI->viewParms.camera.origin.v = 0i64;
  _RDI->viewParms.camera.origin.v[2] = 0.0;
  __asm
  {
    vxorps  xmm6, xmm0, xmm7
    vmovss  xmm0, dword ptr [rsi+1Ch]
    vmovss  dword ptr [rdi+10Ch], xmm6
    vxorps  xmm1, xmm0, xmm7
    vmovss  dword ptr [rdi+110h], xmm1
    vxorps  xmm0, xmm2, xmm7
    vmovss  xmm2, dword ptr [rsi+8]
    vmovss  dword ptr [rdi+114h], xmm0
    vxorps  xmm0, xmm5, xmm7
    vmovss  dword ptr [rdi+118h], xmm0
    vxorps  xmm0, xmm2, xmm7
    vmovss  dword ptr [rdi+120h], xmm0
    vxorps  xmm1, xmm4, xmm7
    vmovss  dword ptr [rdi+11Ch], xmm1
  }
  _RDI->viewParms.camera.axis.m[2].v[1] = v15;
  _RDI->viewParms.camera.axis.m[2].v[2] = _RSI->sunAxis.m[1].v[2];
  v25 = _RSI->sunAxis.m[1].v[1];
  __asm { vmovss  dword ptr [rdi+124h], xmm3 }
  *(_QWORD *)&_RDI->viewParms.camera.tanHalfFovX = 0i64;
  *(_QWORD *)_RDI->viewParms.camera.zPlanes = 0i64;
  *(_QWORD *)&_RDI->viewParms.camera.zPlanes[2] = 0i64;
  __asm
  {
    vmovss  dword ptr [rdi], xmm5
    vmovss  dword ptr [rdi+10h], xmm4
    vmovss  dword ptr [rdi+20h], xmm2
    vmovss  xmm0, dword ptr [rsi+r15*8+4Ch]
    vmovss  xmm2, dword ptr [rsi+20h]
    vxorps  xmm1, xmm0, xmm7
    vmovss  dword ptr [rdi+30h], xmm1
    vmovss  dword ptr [rdi+4], xmm3
  }
  _RDI->viewParms.viewMatrix.m.m[1].v[1] = v25;
  _RDI->viewParms.viewMatrix.m.m[2].v[1] = _RSI->sunAxis.m[1].v[2];
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+r15*8+50h]
    vxorps  xmm1, xmm0, xmm7
    vmovss  xmm0, dword ptr [rsi+1Ch]
    vmovss  dword ptr [rdi+34h], xmm1
    vmovss  dword ptr [rdi+8], xmm6
    vxorps  xmm1, xmm0, xmm7
    vmovss  dword ptr [rdi+18h], xmm1
    vxorps  xmm0, xmm2, xmm7
    vmovss  dword ptr [rdi+28h], xmm0
  }
  _RDI->viewParms.viewMatrix.m.m[3].v[2] = 0.0;
  _RDI->viewParms.viewMatrix.m.m[0].v[3] = 0.0;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rbx
    vmulss  xmm7, xmm0, dword ptr [rsi+r15*4+6Ch]
  }
  _RDI->viewParms.viewMatrix.m.m[1].v[3] = 0.0;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm7, xmm0
  }
  _RDI->viewParms.viewMatrix.m.m[2].v[3] = 0.0;
  _RDI->viewParms.viewMatrix.m.m[3].v[3] = 1.0;
  __asm
  {
    vcvtss2sd xmm0, xmm7, xmm7
    vmovsd  [rsp+0C8h+var_A0], xmm0
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 1240, ASSERT_TYPE_ASSERT, "( ( shadowExtents > 0.0f ) )", "( shadowExtents ) = %g", v64) )
    __debugbreak();
  __asm
  {
    vmovss  xmm3, dword ptr [rsi+r15*8+30h]
    vmovss  xmm4, cs:__real@40000000
    vmovss  xmm6, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
  }
  _RDX = &_RDI->viewParms.projectionMatrix;
  __asm
  {
    vcvtsi2ss xmm0, xmm0, rax
    vdivss  xmm5, xmm6, xmm0
    vmulss  xmm0, xmm5, dword ptr [rsi+r15*8+2Ch]
    vmulss  xmm0, xmm0, xmm4
    vsubss  xmm2, xmm0, xmm6
  }
  memset(v65, 0, 32);
  __asm
  {
    vmovups ymm0, [rsp+0C8h+var_98]
    vmovups ymmword ptr [rdx], ymm0
  }
  memset(&v65[32], 0, 32);
  __asm
  {
    vmovups ymm1, [rsp+0C8h+var_78]
    vmovups ymmword ptr [rdx+20h], ymm1
    vdivss  xmm0, xmm4, xmm7
    vmovss  dword ptr [rdx], xmm0
    vmovss  dword ptr [rdi+70h], xmm2
  }
  _RDI->viewParms.projectionMatrix.m.m[1].v[1] = _RDI->viewParms.projectionMatrix.m.m[0].v[0];
  __asm
  {
    vmulss  xmm0, xmm5, xmm3
    vmulss  xmm1, xmm0, xmm4
    vsubss  xmm2, xmm1, xmm6
    vmovss  xmm1, cs:__real@bf800000
    vmovss  dword ptr [rdi+74h], xmm2
    vmovss  xmm0, dword ptr [rbp+4F80h]
    vsubss  xmm2, xmm0, dword ptr [rbp+4F7Ch]
    vdivss  xmm2, xmm1, xmm2
    vmovss  dword ptr [rdi+68h], xmm2
    vmovss  xmm3, dword ptr [rbp+4F80h]
    vsubss  xmm0, xmm3, dword ptr [rbp+4F7Ch]
    vdivss  xmm1, xmm3, xmm0
    vmovss  dword ptr [rdi+78h], xmm1
  }
  _RDI->viewParms.projectionMatrix.m.m[3].v[3] = 1.0;
  _RDI->viewParms.camera.zPlanes[3] = _RDI->viewParms.projectionMatrix.m.m[3].v[2];
  MatrixMultiply44Aligned(&_RDI->viewParms.viewMatrix.m, &_RDI->viewParms.projectionMatrix.m, &_RDI->viewParms.viewProjectionMatrix.m);
  __asm
  {
    vmovaps xmm6, [rsp+0C8h+var_48]
    vmovaps xmm7, [rsp+0C8h+var_58]
  }
  MatrixInverse44Aligned(&_RDI->viewParms.viewProjectionMatrix.m, &_RDI->viewParms.inverseViewProjectionMatrix.m);
}

/*
==============
R_SetSunShadowSinesAndBoundingArcEdge
==============
*/
void R_SetSunShadowSinesAndBoundingArcEdge(GfxSunShadowFrustumRays *frustumRays)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+34h]
    vmulss  xmm3, xmm0, dword ptr [rcx+48h]
    vmovss  xmm1, dword ptr [rcx+4Ch]
    vmulss  xmm2, xmm1, dword ptr [rcx+30h]
    vsubss  xmm0, xmm3, xmm2
    vmovss  dword ptr [rcx+64h], xmm0
    vmovss  dword ptr [rcx+60h], xmm0
    vmovss  dword ptr [rcx+5Ch], xmm0
    vmovss  xmm0, dword ptr [rcx+3Ch]
    vmulss  xmm3, xmm0, dword ptr [rcx+30h]
    vmovss  xmm1, dword ptr [rcx+34h]
    vmulss  xmm2, xmm1, dword ptr [rcx+38h]
    vsubss  xmm0, xmm3, xmm2
    vmovss  dword ptr [rcx+50h], xmm0
    vminss  xmm0, xmm0, dword ptr [rcx+60h]
    vmovss  xmm1, dword ptr [rcx+64h]
    vmovss  dword ptr [rcx+60h], xmm0
    vmaxss  xmm2, xmm1, dword ptr [rcx+50h]
    vmovss  dword ptr [rcx+64h], xmm2
    vmovss  xmm0, dword ptr [rcx+44h]
    vmulss  xmm3, xmm0, dword ptr [rcx+38h]
    vmovss  xmm1, dword ptr [rcx+3Ch]
    vmulss  xmm2, xmm1, dword ptr [rcx+40h]
    vsubss  xmm0, xmm3, xmm2
    vmovss  dword ptr [rcx+54h], xmm0
    vminss  xmm0, xmm0, dword ptr [rcx+60h]
    vmovss  dword ptr [rcx+60h], xmm0
    vmovss  xmm1, dword ptr [rcx+64h]
    vmaxss  xmm2, xmm1, dword ptr [rcx+54h]
    vmovss  dword ptr [rcx+64h], xmm2
    vmovss  xmm0, dword ptr [rcx+4Ch]
    vmulss  xmm3, xmm0, dword ptr [rcx+40h]
    vmovss  xmm1, dword ptr [rcx+44h]
    vmulss  xmm2, xmm1, dword ptr [rcx+48h]
    vsubss  xmm0, xmm3, xmm2
    vmovss  xmm3, cs:__real@3a83126f
    vmovss  dword ptr [rcx+58h], xmm0
    vminss  xmm0, xmm0, dword ptr [rcx+60h]
    vmovss  dword ptr [rcx+60h], xmm0
    vmovss  xmm1, dword ptr [rcx+58h]
    vmaxss  xmm2, xmm1, dword ptr [rcx+64h]
    vmovss  dword ptr [rcx+64h], xmm2
    vmovss  xmm0, dword ptr [rcx+60h]
    vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000
    vminss  xmm2, xmm1, xmm2
    vcomiss xmm2, xmm3
  }
  _RBX = frustumRays;
  *(_QWORD *)frustumRays->boundingArcRay = -1i64;
  __asm
  {
    vmovss  xmm1, dword ptr [rcx+50h]
    vcomiss xmm1, xmm3
    vmovss  xmm0, cs:__real@ba83126f
    vcomiss xmm3, dword ptr [rcx+5Ch]
  }
  frustumRays->boundingArcRay[0] = 0;
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+54h]
    vcomiss xmm1, xmm3
    vcomiss xmm1, xmm0
    vmovss  xmm1, dword ptr [rbx+58h]
    vcomiss xmm1, xmm3
    vcomiss xmm1, xmm0
    vmovss  xmm1, dword ptr [rbx+5Ch]
    vcomiss xmm1, xmm3
    vcomiss xmm1, xmm0
  }
  if ( frustumRays->boundingArcRay[0] == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 1383, ASSERT_TYPE_ASSERT, "(frustumRays->boundingArcRay[0] != R_SUNSHADOW_BOUNDING_ARC_NONE)", (const char *)&queryFormat, "frustumRays->boundingArcRay[0] != R_SUNSHADOW_BOUNDING_ARC_NONE") )
    __debugbreak();
  if ( _RBX->boundingArcRay[1] == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 1384, ASSERT_TYPE_ASSERT, "(frustumRays->boundingArcRay[1] != R_SUNSHADOW_BOUNDING_ARC_NONE)", (const char *)&queryFormat, "frustumRays->boundingArcRay[1] != R_SUNSHADOW_BOUNDING_ARC_NONE") )
    __debugbreak();
}

/*
==============
R_SetupSunShadowMapMetrics
==============
*/
void R_SetupSunShadowMapMetrics(const GfxViewInfo *viewInfo, GfxBackEndData *data, GfxSunShadowMapMetrics *mapMetrics, float *outNearClip, float *outFarClip)
{
  unsigned int v17; 
  char v54; 
  bool v55; 
  char v56; 
  unsigned __int16 opaqueCascadeCount; 
  int v58; 
  char v59; 
  Bounds bounds; 
  char v70; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps [rsp+0E8h+var_88], xmm10
    vmovaps [rsp+0E8h+var_98], xmm11
  }
  _R15 = outFarClip;
  *(_QWORD *)bounds.midPoint.v = 0x40000000300i64;
  _R14 = outNearClip;
  LODWORD(bounds.midPoint.v[2]) = 1536;
  _RSI = data;
  LODWORD(bounds.halfSize.v[0]) = 2048;
  v17 = LODWORD(bounds.midPoint.v[rg.shadowMapResolutionIndex]);
  mapMetrics->size = v17;
  if ( (v17 & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 2055, ASSERT_TYPE_ASSERT, "(!(mapMetrics->size & 1))", (const char *)&queryFormat, "!(mapMetrics->size & 1)") )
    __debugbreak();
  __asm
  {
    vmovss  xmm2, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm0, dword ptr [rsi+0E766Ch]
    vmovss  xmm1, dword ptr [rsi+0E7674h]
    vxorps  xmm6, xmm0, xmm2
    vmovss  xmm0, dword ptr [rsi+0E7670h]
    vxorps  xmm10, xmm0, xmm2
    vxorps  xmm11, xmm1, xmm2
  }
  if ( sm_sunStageBounds->current.enabled && viewInfo->stageInfo.activeStageValid )
  {
    CM_StageTriggerBounds(viewInfo->stageInfo.activeStage.triggerIndex, &bounds, r_showSunStage->current.enabled, &viewInfo->stageInfo.activeStage.origin);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0E8h+bounds.midPoint]
      vmovss  xmm1, dword ptr [rsp+0E8h+bounds.midPoint+4]
      vaddss  xmm2, xmm0, dword ptr [rbx]
      vmovss  xmm0, dword ptr [rsp+0E8h+bounds.midPoint+8]
      vaddss  xmm3, xmm1, dword ptr [rbx+4]
      vaddss  xmm1, xmm0, dword ptr [rbx+8]
      vmovss  dword ptr [rsp+0E8h+bounds.midPoint+8], xmm1
      vmovss  dword ptr [rsp+0E8h+bounds.midPoint], xmm2
      vmovss  dword ptr [rsp+0E8h+bounds.midPoint+4], xmm3
    }
  }
  else
  {
    _RAX = rgp.world;
    __asm
    {
      vmovups xmm0, xmmword ptr [rax+78h]
      vmovups xmmword ptr [rsp+0E8h+bounds.midPoint], xmm0
      vmovsd  xmm1, qword ptr [rax+88h]
      vmovss  xmm3, dword ptr [rsp+0E8h+bounds.midPoint+4]
      vmovss  xmm2, dword ptr [rsp+0E8h+bounds.midPoint]
      vmovsd  qword ptr [rsp+0E8h+bounds.halfSize+4], xmm1
      vmovss  xmm1, dword ptr [rsp+0E8h+bounds.midPoint+8]
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmulss  xmm9, xmm2, xmm6
    vandps  xmm6, xmm6, xmm0
    vmulss  xmm7, xmm6, dword ptr [rsp+0E8h+bounds.halfSize]
    vmulss  xmm6, xmm1, xmm11
    vmulss  xmm8, xmm3, xmm10
    vandps  xmm11, xmm11, xmm0
    vmulss  xmm4, xmm11, dword ptr [rsp+0E8h+bounds.halfSize+8]
    vandps  xmm10, xmm10, xmm0
    vmulss  xmm5, xmm10, dword ptr [rsp+0E8h+bounds.halfSize+4]
    vsubss  xmm0, xmm9, xmm7
    vaddss  xmm1, xmm0, xmm8
    vsubss  xmm2, xmm1, xmm5
    vaddss  xmm3, xmm2, xmm6
    vsubss  xmm0, xmm3, xmm4
    vmovss  dword ptr [r14], xmm0
    vaddss  xmm1, xmm9, xmm7
    vaddss  xmm2, xmm1, xmm8
    vaddss  xmm0, xmm2, xmm5
    vaddss  xmm3, xmm0, xmm6
    vaddss  xmm1, xmm3, xmm4
    vmovss  dword ptr [r15], xmm1
  }
  v54 = 0;
  v55 = !r_debugDrawSunBounds->current.enabled;
  if ( r_debugDrawSunBounds->current.enabled )
  {
    R_AddDebugBox(&_RSI->debugGlobals, &bounds, &colorLtOrange, 0);
    __asm { vmovss  xmm1, dword ptr [r15] }
  }
  __asm { vcomiss xmm1, dword ptr [r14] }
  if ( v54 | v55 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 2058, ASSERT_TYPE_ASSERT, "(outNearClip < outFarClip)", (const char *)&queryFormat, "outNearClip < outFarClip") )
    __debugbreak();
  v56 = rg.sunCascadeSizeMultiplier[0];
  opaqueCascadeCount = _RSI->sunShadow.opaqueCascadeCount;
  mapMetrics->partitionRatio[0] = 1;
  v58 = 1 << v56;
  v59 = rg.sunCascadeSizeMultiplier[1];
  mapMetrics->partitionRatio[1] = v58;
  mapMetrics->partitionRatio[2] = v58 << v59;
  if ( !opaqueCascadeCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 2070, ASSERT_TYPE_ASSERT, "(data->sunShadow.opaqueCascadeCount > 0)", (const char *)&queryFormat, "data->sunShadow.opaqueCascadeCount > 0") )
    __debugbreak();
  mapMetrics->partitionRatio[3] = *(&mapMetrics->size + opaqueCascadeCount);
  _R11 = &v70;
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
R_SetupSunShadowMapProjection
==============
*/
void R_SetupSunShadowMapProjection(GfxViewInfo *viewInfo, const GfxSunShadowProjectionSetup *projSetup, const GfxSunShadowMapMetrics *mapMetrics, const GfxCamera *camera, GfxSunShadow *sunShadow)
{
  vec2_t *snappedShadowOrg; 
  unsigned int v14; 
  bool v18; 
  bool v19; 
  bool v22; 
  int v45; 
  unsigned int v160; 
  unsigned int i; 
  float *v; 
  __int64 v171; 
  float *p_farDist; 
  GfxSunShadowProjectionSetup *projSetupa; 
  char v175; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
  }
  _RBX = sunShadow;
  snappedShadowOrg = projSetup->snappedShadowOrg;
  __asm { vmovss  xmm8, cs:__real@3f800000 }
  v14 = 0;
  projSetupa = (GfxSunShadowProjectionSetup *)projSetup;
  p_farDist = &sunShadow->partition[0].farDist;
  _R15 = &sunShadow->sunProj.switchPartition[0].v[2];
  _R14 = mapMetrics->partitionRatio;
  v18 = projSetup < (const GfxSunShadowProjectionSetup *)mapMetrics;
  _RDI = (char *)projSetup - (char *)mapMetrics;
  v19 = projSetup <= (const GfxSunShadowProjectionSetup *)mapMetrics;
  __asm { vxorps  xmm9, xmm9, xmm9 }
  do
  {
    __asm { vcomiss xmm9, dword ptr [rdi+r14+68h] }
    if ( !v18 )
    {
      LODWORD(v171) = v14;
      v22 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 1658, ASSERT_TYPE_ASSERT, "( ( projSetup->sampleSize[partitionIndex] > 0.0f ) )", "( partitionIndex ) = %u", v171);
      v19 = !v22;
      if ( v22 )
        __debugbreak();
    }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vcomiss xmm0, xmm9
    }
    if ( v19 )
    {
      LODWORD(v171) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 1659, ASSERT_TYPE_ASSERT, "( ( mapMetrics->partitionRatio[partitionIndex] > 0.0f ) )", "( partitionIndex ) = %u", v171) )
        __debugbreak();
    }
    if ( !mapMetrics->size )
    {
      LODWORD(v171) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 1660, ASSERT_TYPE_ASSERT, "( ( mapMetrics->size > 0 ) )", "( partitionIndex ) = %u", v171) )
        __debugbreak();
    }
    __asm
    {
      vdivss  xmm5, xmm8, dword ptr [rdi+r14+68h]
      vxorps  xmm0, xmm0, xmm0
      vxorps  xmm7, xmm7, xmm7
      vcvtsi2ss xmm7, xmm7, rax
      vcvtsi2ss xmm0, xmm0, rax
    }
    _RAX = projSetupa;
    __asm
    {
      vdivss  xmm4, xmm8, xmm0
      vdivss  xmm6, xmm8, xmm7
      vsubss  xmm3, xmm8, xmm6
      vmovss  xmm0, dword ptr [rax+4Ch]
      vsubss  xmm1, xmm0, dword ptr [r12]
      vmulss  xmm0, xmm3, dword ptr [r12-20h]
      vmulss  xmm2, xmm1, xmm5
      vaddss  xmm1, xmm2, xmm0
      vmovss  xmm0, dword ptr [rax+50h]
      vmulss  xmm2, xmm1, xmm4
      vsubss  xmm1, xmm0, dword ptr [r12+4]
      vmulss  xmm0, xmm3, dword ptr [r12-1Ch]
      vmovss  dword ptr [r15-8], xmm2
      vmulss  xmm2, xmm1, xmm5
      vaddss  xmm1, xmm2, xmm0
      vmulss  xmm2, xmm1, xmm4
      vsubss  xmm3, xmm3, xmm2
      vmovss  dword ptr [r15-4], xmm3
      vmovss  dword ptr [r15], xmm7
      vmovss  dword ptr [r15+4], xmm6
    }
    R_SetSunShadowMapViewParms(mapMetrics, _RAX, v14++, sunShadow);
    v45 = *(unsigned int *)((char *)_R14 + _RDI + 120);
    ++snappedShadowOrg;
    ++_R14;
    _R15 += 4;
    *(_DWORD *)p_farDist = v45;
    p_farDist += 136;
    v18 = v14 < 4;
    v19 = v14 <= 4;
  }
  while ( v14 < 4 );
  _RDI = &sunShadow->sunProj;
  if ( R_CompressedSunShadow_IsUsingGlobalBuffer() )
  {
    _RAX = R_CompressedSunShadow_GetLookupMatrix();
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymm1, ymmword ptr [rax+20h]
      vmovups ymmword ptr [rbx+40h], ymm0
      vmovups ymmword ptr [rbx+60h], ymm1
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+1B0h]
    vaddss  xmm1, xmm0, dword ptr [rbx+1BCh]
    vmovss  xmm4, cs:__real@3f000000
  }
  _RSI = camera;
  __asm
  {
    vmulss  xmm1, xmm1, xmm4
    vmovss  dword ptr [rbx], xmm1
    vmovss  xmm0, dword ptr [rbx+1C0h]
    vaddss  xmm1, xmm0, dword ptr [rbx+1CCh]
    vmulss  xmm2, xmm1, xmm4
    vmovss  dword ptr [rbx+10h], xmm2
    vmovss  xmm0, dword ptr [rbx+1D0h]
    vaddss  xmm1, xmm0, dword ptr [rbx+1DCh]
    vmulss  xmm2, xmm1, xmm4
    vmovss  dword ptr [rbx+20h], xmm2
    vmovss  xmm0, dword ptr [rbx+1E0h]
    vaddss  xmm1, xmm0, dword ptr [rbx+1ECh]
    vmulss  xmm2, xmm1, xmm4
    vmovss  dword ptr [rbx+30h], xmm2
    vmulss  xmm3, xmm4, dword ptr [rbx+1BCh]
    vmulss  xmm2, xmm4, dword ptr [rbx+1B4h]
    vsubss  xmm0, xmm3, xmm2
    vmovss  dword ptr [rbx+4], xmm0
    vmulss  xmm3, xmm4, dword ptr [rbx+1CCh]
    vmulss  xmm2, xmm4, dword ptr [rbx+1C4h]
    vsubss  xmm1, xmm3, xmm2
    vmovss  dword ptr [rbx+14h], xmm1
    vmulss  xmm3, xmm4, dword ptr [rbx+1DCh]
    vmulss  xmm2, xmm4, dword ptr [rbx+1D4h]
    vsubss  xmm0, xmm3, xmm2
    vmovss  dword ptr [rbx+24h], xmm0
    vmulss  xmm3, xmm4, dword ptr [rbx+1ECh]
    vmulss  xmm2, xmm4, dword ptr [rbx+1E4h]
    vsubss  xmm1, xmm3, xmm2
    vmovss  dword ptr [rbx+34h], xmm1
  }
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
  __asm
  {
    vmovss  xmm4, dword ptr [rsi+4]
    vmulss  xmm0, xmm4, dword ptr [rbx+10h]
    vmovss  xmm3, dword ptr [rsi]
    vmulss  xmm1, xmm3, dword ptr [rbx]
    vmovss  xmm5, dword ptr [rsi+8]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, dword ptr [rbx+20h]
    vaddss  xmm0, xmm2, xmm1
    vaddss  xmm6, xmm0, dword ptr [rbx+30h]
    vmulss  xmm0, xmm3, dword ptr [rbx+4]
    vmulss  xmm1, xmm4, dword ptr [rbx+14h]
    vmovss  xmm3, cs:__real@34000000
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, dword ptr [rbx+24h]
    vaddss  xmm2, xmm2, xmm1
    vaddss  xmm0, xmm2, dword ptr [rbx+34h]
    vmovss  dword ptr [rdi+44h], xmm0
    vmovss  dword ptr [rdi+40h], xmm6
    vmovss  xmm2, dword ptr [rdi+1Ch]
    vmulss  xmm0, xmm6, xmm2
    vaddss  xmm1, xmm0, dword ptr [rdi+10h]
  }
  _R10 = &sunShadow->sunProj.eyeOffset[1];
  __asm
  {
    vmovss  dword ptr [r10], xmm1
    vmulss  xmm0, xmm2, dword ptr [rdi+44h]
    vaddss  xmm1, xmm0, dword ptr [rdi+14h]
    vmovss  dword ptr [r10+4], xmm1
    vmovss  xmm2, dword ptr [rdi+2Ch]
    vmulss  xmm0, xmm2, dword ptr [rdi+40h]
    vaddss  xmm1, xmm0, dword ptr [rdi+20h]
    vmovss  dword ptr [rdi+50h], xmm1
    vmulss  xmm0, xmm2, dword ptr [rdi+44h]
    vaddss  xmm1, xmm0, dword ptr [rdi+24h]
    vmovss  dword ptr [rdi+54h], xmm1
    vmovss  xmm2, dword ptr [rdi+3Ch]
    vmulss  xmm0, xmm2, dword ptr [rdi+40h]
    vaddss  xmm1, xmm0, dword ptr [rdi+30h]
    vmovss  dword ptr [rdi+58h], xmm1
    vmulss  xmm0, xmm2, dword ptr [rdi+44h]
    vaddss  xmm1, xmm0, dword ptr [rdi+34h]
    vmovss  dword ptr [rdi+5Ch], xmm1
    vmovss  xmm0, dword ptr [rdi+40h]
  }
  _RAX = r_sunShadowParams;
  __asm
  {
    vmaxss  xmm0, xmm0, xmm3
    vmovss  xmm4, dword ptr [rax+28h]
    vdivss  xmm1, xmm4, xmm0
    vmovss  dword ptr [rdi+60h], xmm1
    vmovss  xmm0, dword ptr [rdi+44h]
    vmaxss  xmm1, xmm0, xmm3
    vdivss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rdi+64h], xmm2
    vsubss  xmm0, xmm8, dword ptr [rdi+40h]
    vmaxss  xmm1, xmm0, xmm3
    vdivss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rdi+68h], xmm2
    vsubss  xmm0, xmm8, dword ptr [rdi+44h]
    vmaxss  xmm1, xmm0, xmm3
    vdivss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rdi+6Ch], xmm2
    vmovss  xmm0, dword ptr [r10]
    vmaxss  xmm1, xmm0, xmm3
    vdivss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rdi+70h], xmm2
    vmovss  xmm0, dword ptr [rdi+4Ch]
    vmaxss  xmm1, xmm0, xmm3
    vdivss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rdi+74h], xmm2
    vsubss  xmm0, xmm8, dword ptr [r10]
    vmaxss  xmm1, xmm0, xmm3
    vdivss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rdi+78h], xmm2
    vsubss  xmm0, xmm8, dword ptr [rdi+4Ch]
    vmaxss  xmm1, xmm0, xmm3
    vdivss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rdi+7Ch], xmm2
    vmovss  xmm0, dword ptr [rdi+50h]
    vmaxss  xmm1, xmm0, xmm3
    vdivss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rdi+80h], xmm2
    vmovss  xmm0, dword ptr [rdi+54h]
    vmaxss  xmm1, xmm0, xmm3
    vdivss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rdi+84h], xmm2
    vsubss  xmm0, xmm8, dword ptr [rdi+50h]
    vmaxss  xmm1, xmm0, xmm3
    vdivss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rdi+88h], xmm2
    vsubss  xmm0, xmm8, dword ptr [rdi+54h]
    vmaxss  xmm1, xmm0, xmm3
    vdivss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rdi+8Ch], xmm2
    vmovss  xmm0, dword ptr [rdi+58h]
    vmaxss  xmm1, xmm0, xmm3
    vdivss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rdi+90h], xmm2
    vmovss  xmm0, dword ptr [rdi+5Ch]
    vmaxss  xmm1, xmm0, xmm3
    vdivss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rdi+94h], xmm2
    vsubss  xmm0, xmm8, dword ptr [rdi+58h]
    vmaxss  xmm1, xmm0, xmm3
    vdivss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rdi+98h], xmm2
    vsubss  xmm0, xmm8, dword ptr [rdi+5Ch]
    vmaxss  xmm1, xmm0, xmm3
    vdivss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rdi+9Ch], xmm2
  }
  _R8 = &sunShadow->sunProj.blendScale[1].v[2];
  __asm { vmovss  xmm2, dword ptr cs:__xmm@80000000800000008000000080000000 }
  v160 = sunShadow->opaqueCascadeCount - 1;
  for ( i = 1; i < 3; ++i )
  {
    if ( i >= sunShadow->opaqueCascadeCount )
    {
      _RDX = 2i64 * v160;
      v = _RDI->blendScale[v160].v;
      *(_R8 - 26) = _RDI->switchPartition[v160].v[0];
      *(_R8 - 25) = _RDI->switchPartition[v160].v[1];
      *(_R8 - 24) = _RDI->switchPartition[v160].v[2];
      *(_R8 - 23) = _RDI->switchPartition[v160].v[3];
      _R10->v[0] = _RDI->eyeOffset[v160].v[0];
      _R10->v[1] = _RDI->eyeOffset[v160].v[1];
      *(_R8 - 2) = *v;
      *(_R8 - 1) = v[1];
      *_R8 = v[2];
      _R8[1] = v[3];
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+rdx*8+8]
        vxorps  xmm1, xmm0, xmm2
        vmovss  dword ptr [r8-60h], xmm1
      }
    }
    ++_R10;
    _R8 += 4;
  }
  _R11 = &v175;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
}

/*
==============
R_SetupSunShadowMapProjectionAndClipPlanes
==============
*/
void R_SetupSunShadowMapProjectionAndClipPlanes(GfxViewInfo *viewInfo, GfxBackEndData *data, const GfxCamera *camera, GfxSunShadowMapMetrics *mapMetrics, GfxSunShadow *sunShadow, GfxSunShadowClip *clip)
{
  __int64 v15; 
  vec2_t *shadowRays; 
  float *v17; 
  bool v34; 
  bool v35; 
  bool v40; 
  GfxSunShadowMapMetrics *v45; 
  GfxBackEndData *v46; 
  unsigned int v47; 
  bool v48; 
  unsigned int i; 
  __int64 v50; 
  __int64 cameraPlaneCount; 
  DpvsPlane *v61; 
  __int64 v88; 
  __int64 v90; 
  GfxSunShadowClip *v91; 
  __int64 v92; 
  signed __int64 v93; 
  __int64 v94; 
  __int64 v95; 
  __int64 v98; 
  __int64 v122; 
  bool IsUsingGlobalBuffer; 
  GfxSunShadowProjectionSetup *projSetup; 
  __int64 v133; 
  double v134; 
  double v135; 
  double v136; 
  double v137; 
  __int64 camerab; 
  signed __int64 v140; 
  GfxSunShadowProjectionSetup sunAxis; 
  GfxSunShadowFrustumRays cornerRays; 
  GfxBackEndData *dataa; 
  int v145; 
  int v146; 
  void *retaddr; 

  _R11 = &retaddr;
  _RBX = sunShadow;
  _RDI = viewInfo;
  dataa = data;
  __asm { vmovaps xmmword ptr [r11-58h], xmm6 }
  R_GetSunAxes(&data->sunShadow.lightDir, &sunAxis.sunAxis);
  R_GetFrustumCornerRays(camera, (vec3_t (*)[4])&cornerRays);
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vmovups xmmword ptr [rbp+110h+mins], xmm6
  }
  _R14 = (float *)cornerRays.shadowRays + 1;
  v15 = 4i64;
  shadowRays = cornerRays.shadowRays;
  v17 = &cornerRays.worldRays[0].v[2];
  do
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+210h+sunAxis]
      vmulss  xmm3, xmm0, dword ptr [rsi-8]
      vmovss  xmm1, dword ptr [rsp+210h+sunAxis+4]
      vmulss  xmm2, xmm1, dword ptr [rsi-4]
      vmovss  xmm0, dword ptr [rsp+210h+sunAxis+8]
      vmulss  xmm1, xmm0, dword ptr [rsi]
      vmovss  xmm0, dword ptr [rsp+210h+sunAxis+0Ch]
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm2, xmm4, xmm1
      vmovss  xmm1, dword ptr [rbp+110h+sunAxis+10h]
      vmovss  dword ptr [r14-4], xmm2
      vmulss  xmm2, xmm1, dword ptr [rsi-4]
      vmulss  xmm3, xmm0, dword ptr [rsi-8]
      vmovss  xmm0, dword ptr [rbp+110h+sunAxis+14h]
      vmulss  xmm1, xmm0, dword ptr [rsi]
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm2, xmm4, xmm1
      vmovss  dword ptr [r14], xmm2
    }
    AddPointToBounds2D(shadowRays++, &cornerRays.mins, &cornerRays.maxs);
    v17 += 3;
    _R14 += 2;
    v34 = v15-- == 0;
    v35 = v34 || v15 == 0;
  }
  while ( v15 );
  __asm
  {
    vmovss  xmm1, dword ptr [rbp+110h+mins+8]
    vmovss  xmm0, dword ptr [rbp+110h+mins]
    vcomiss xmm1, xmm0
  }
  if ( v34 || (unsigned __int8)v15 == 0i64 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  qword ptr [rsp+40h], xmm0
      vcvtss2sd xmm1, xmm1, xmm1
      vmovsd  [rsp+210h+var_1D8], xmm1
    }
    v40 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 1345, ASSERT_TYPE_ASSERT, "( frustumRays->maxs[0] ) > ( frustumRays->mins[0] )", "%s > %s\n\t%g, %g", "frustumRays->maxs[0]", "frustumRays->mins[0]", v134, v136);
    v35 = !v40;
    if ( v40 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm1, dword ptr [rbp+110h+mins+0Ch]
    vmovss  xmm0, dword ptr [rbp+110h+mins+4]
    vcomiss xmm1, xmm0
  }
  if ( v35 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  qword ptr [rsp+40h], xmm0
      vcvtss2sd xmm1, xmm1, xmm1
      vmovsd  [rsp+210h+var_1D8], xmm1
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 1346, ASSERT_TYPE_ASSERT, "( frustumRays->maxs[1] ) > ( frustumRays->mins[1] )", "%s > %s\n\t%g, %g", "frustumRays->maxs[1]", "frustumRays->mins[1]", v135, v137) )
      __debugbreak();
  }
  R_SetSunShadowSinesAndBoundingArcEdge(&cornerRays);
  v45 = mapMetrics;
  v46 = dataa;
  R_InitSunShadowProjectionSetupForFrustum(_RDI, dataa, camera, mapMetrics, &cornerRays, &sunAxis);
  v47 = 0;
  v48 = cornerRays.boundingArcRay[0] == -1;
  *(_QWORD *)clip->planeCount = 0i64;
  *(_QWORD *)&clip->planeCount[2] = 0i64;
  sunShadow->cameraPlaneCount = 0;
  if ( !v48 )
    R_AddSunShadowClipPlanesForBoundingArc(&camera->origin, &sunAxis, &cornerRays, mapMetrics, clip, sunShadow);
  for ( i = 0; i < _RDI->frustumPlaneCount; ++i )
  {
    v50 = i + 163i64;
    v35 = __CFADD__(v50, v50) || 2 * v50 == 0;
    _RDX = v50;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+rdx*8+4]
      vmovss  xmm1, dword ptr [rdi+rdx*8]
      vmulss  xmm2, xmm1, dword ptr [rbx+4F6Ch]
      vmulss  xmm3, xmm0, dword ptr [rbx+4F70h]
      vmovss  xmm0, dword ptr [rdi+rdx*8+8]
      vmulss  xmm1, xmm0, dword ptr [rbx+4F74h]
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm2, xmm4, xmm1
      vcomiss xmm2, xmm6
    }
    if ( !v35 )
    {
      cameraPlaneCount = sunShadow->cameraPlaneCount;
      v61 = &sunShadow->cameraPlanes[cameraPlaneCount];
      sunShadow->cameraPlaneCount = cameraPlaneCount + 1;
      v61->coeffs.v[0] = _RDI->viewParmsSet.frames[0].viewParms.viewMatrix.m.m[_RDX].v[0];
      v61->coeffs.v[1] = _RDI->viewParmsSet.frames[0].viewParms.viewMatrix.m.m[_RDX].v[1];
      v61->coeffs.v[2] = _RDI->viewParmsSet.frames[0].viewParms.viewMatrix.m.m[_RDX].v[2];
      v61->coeffs.v[3] = _RDI->viewParmsSet.frames[0].viewParms.viewMatrix.m.m[_RDX].v[3];
    }
  }
  do
    R_AddSunShadowClipPlanesForMapBoundary(&sunAxis, &cornerRays, mapMetrics, v47++, clip, sunShadow);
  while ( v47 < 4 );
  R_SetupSunShadowMapProjection(_RDI, &sunAxis, mapMetrics, camera, sunShadow);
  __asm
  {
    vmovss  xmm4, dword ptr [rsp+210h+sunAxis]
    vmulss  xmm0, xmm4, dword ptr [rbx+4F54h]
    vmovss  xmm5, dword ptr [rsp+210h+sunAxis+4]
    vmovss  xmm3, dword ptr [rsp+210h+sunAxis+0Ch]
    vmovss  dword ptr [rbx+4F34h], xmm0
    vmulss  xmm1, xmm5, dword ptr [rbx+4F54h]
    vmovss  xmm0, dword ptr [rsp+210h+sunAxis+8]
    vmovss  dword ptr [rbx+4F3Ch], xmm1
    vmulss  xmm2, xmm0, dword ptr [rbx+4F54h]
    vmovss  dword ptr [rbx+4F44h], xmm2
    vmulss  xmm0, xmm4, dword ptr [rbx+4F58h]
    vmulss  xmm1, xmm3, dword ptr [rbx+4F5Ch]
    vmovss  xmm4, dword ptr [rbp+110h+sunAxis+10h]
    vaddss  xmm1, xmm1, xmm0
    vmulss  xmm2, xmm1, dword ptr [rbx+4F54h]
    vmovss  dword ptr [rbx+4F4Ch], xmm2
    vmulss  xmm0, xmm3, dword ptr [rbx+4F54h]
    vmovss  dword ptr [rbx+4F38h], xmm0
    vmulss  xmm1, xmm4, dword ptr [rbx+4F54h]
    vmovss  xmm0, dword ptr [rbp+110h+sunAxis+14h]
    vmovss  dword ptr [rbx+4F40h], xmm1
    vmulss  xmm2, xmm0, dword ptr [rbx+4F54h]
    vmovss  dword ptr [rbx+4F48h], xmm2
    vmulss  xmm1, xmm4, dword ptr [rbx+4F5Ch]
    vmulss  xmm0, xmm5, dword ptr [rbx+4F58h]
    vaddss  xmm1, xmm1, xmm0
    vmulss  xmm2, xmm1, dword ptr [rbx+4F54h]
    vmovss  dword ptr [rbx+4F50h], xmm2
  }
  R_BuildCachedSunShadowOverlap(_RDI, v46, sunShadow, &sunAxis, mapMetrics);
  _R8 = &sunShadow->overlaySetup;
  if ( sm_showOverlay->current.integer <= 4 )
  {
    __asm
    {
      vmovss  xmm0, [rbp+110h+var_17C]
      vmovss  xmm1, [rbp+110h+var_178]
      vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovss  dword ptr [r8], xmm0
      vmovups ymm0, ymmword ptr [rbp+110h+v]
      vmovaps [rsp+210h+var_68+8], xmm7
      vmovss  xmm7, cs:__real@3a83126f
    }
    v88 = 0i64;
    __asm
    {
      vmovaps [rsp+210h+var_78+8], xmm8
      vmovss  xmm8, dword ptr cs:__xmm@80000000800000008000000080000000
    }
    v90 = 0i64;
    v91 = clip;
    v140 = (char *)_R8 - (char *)clip;
    v92 = 3i64;
    v93 = (char *)_R8 - (char *)clip;
    __asm { vmovss  dword ptr [r8+4], xmm1 }
    camerab = 3i64;
    __asm { vmovups ymmword ptr [r8+8], ymm0 }
    do
    {
      v94 = 0i64;
      v95 = 0i64;
      if ( v91->planeCount[0] )
      {
        do
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+110h+sunAxis+1Ch]
            vmovss  xmm1, dword ptr [rbp+110h+sunAxis+18h]
          }
          v98 = 16 * (v95 + v90 + 1);
          v35 = __CFADD__(clip, v98) || (GfxSunShadowClip *)((char *)clip + v98) == NULL;
          _RBX = (char *)clip + v98;
          __asm
          {
            vmulss  xmm2, xmm1, dword ptr [rbx]
            vmulss  xmm3, xmm0, dword ptr [rbx+4]
            vmovss  xmm0, dword ptr [rbp+110h+sunAxis+20h]
            vmulss  xmm1, xmm0, dword ptr [rbx+8]
            vaddss  xmm4, xmm3, xmm2
            vaddss  xmm2, xmm4, xmm1
            vandps  xmm2, xmm2, xmm6
            vcomiss xmm2, xmm7
          }
          if ( v35 )
          {
            if ( (unsigned int)v94 >= 8 )
            {
              LODWORD(v133) = 8;
              LODWORD(projSetup) = v94;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 1887, ASSERT_TYPE_ASSERT, "(unsigned)( planeCount ) < (unsigned)( ( sizeof( *array_counter( overlaySetup->clipPlanes[partitionIter] ) ) + 0 ) )", "planeCount doesn't index ARRAY_COUNT( overlaySetup->clipPlanes[partitionIter] )\n\t%i not in [0, %i)", projSetup, v133) )
                __debugbreak();
              _R8 = &sunShadow->overlaySetup;
            }
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+210h+sunAxis+4]
              vmulss  xmm3, xmm0, dword ptr [rbx+4]
              vmovss  xmm1, dword ptr [rsp+210h+sunAxis]
              vmulss  xmm2, xmm1, dword ptr [rbx]
              vmovss  xmm0, dword ptr [rsp+210h+sunAxis+8]
              vmulss  xmm1, xmm0, dword ptr [rbx+8]
              vmovss  xmm0, dword ptr [rbp+110h+sunAxis+10h]
              vaddss  xmm4, xmm3, xmm2
              vaddss  xmm2, xmm4, xmm1
              vmovss  xmm1, dword ptr [rsp+210h+sunAxis+0Ch]
            }
            _RCX = 3 * (v94 + v88);
            __asm
            {
              vmovss  dword ptr [r8+rcx*4+34h], xmm2
              vmulss  xmm2, xmm1, dword ptr [rbx]
              vmulss  xmm3, xmm0, dword ptr [rbx+4]
              vmovss  xmm0, dword ptr [rbp+110h+sunAxis+14h]
              vmulss  xmm1, xmm0, dword ptr [rbx+8]
            }
            v122 = v94 + v88 + 5;
            v94 = (unsigned int)(v94 + 1);
            __asm
            {
              vaddss  xmm4, xmm3, xmm2
              vaddss  xmm2, xmm4, xmm1
              vmovss  dword ptr [r8+rcx*4+38h], xmm2
              vmovss  xmm0, dword ptr [rbx+0Ch]
              vxorps  xmm1, xmm0, xmm8
            }
            _RCX = 3 * v122;
            __asm { vmovss  dword ptr [r8+rcx*4], xmm1 }
          }
          v95 = (unsigned int)(v95 + 1);
        }
        while ( (unsigned int)v95 < v91->planeCount[0] );
        v92 = camerab;
        v93 = v140;
      }
      *(_DWORD *)((char *)&v91->planes[0][1].coeffs.v[2] + v93) = v94;
      v90 += 9i64;
      v91 = (GfxSunShadowClip *)((char *)v91 + 4);
      v88 += 8i64;
      camerab = --v92;
    }
    while ( v92 );
    v45 = mapMetrics;
    v46 = dataa;
    __asm
    {
      vmovaps xmm8, [rsp+210h+var_78+8]
      vmovaps xmm7, [rsp+210h+var_68+8]
    }
  }
  else
  {
    sunShadow->overlaySetup.clipPlaneCount[0] = 0;
  }
  IsUsingGlobalBuffer = R_CompressedSunShadow_IsUsingGlobalBuffer();
  __asm { vmovaps xmm6, xmmword ptr [rsp+210h+var_58+8] }
  if ( IsUsingGlobalBuffer )
    R_CompressedSunShadow_CalcFilteringParams(v45->size, &sunAxis, v46);
  if ( rg.useCompressedSunShadow == 3 )
  {
    dataa = (GfxBackEndData *)0x40000000300i64;
    v145 = 1536;
    v146 = 2048;
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
  unsigned __int16 sunShadowOpaqueCascadeCount; 
  __int64 localClientNum; 
  unsigned __int64 v17; 
  __int64 v41; 
  bool v48; 
  unsigned int firstCachedSunShadowPartition; 
  unsigned int lastCachedSunShadowPartition; 
  GfxSunShadow *p_sunShadow; 
  unsigned int gfxCachedSunShadowOverlapCount; 
  unsigned int v53; 
  int i; 
  GfxDrawList *v55; 
  float outNearClip; 
  float outFarClip; 
  GfxSunShadowMapMetrics mapMetrics; 
  GfxSunShadowClip clip; 
  int v60; 
  int v61; 
  int v62; 
  int v63; 

  sunShadowOpaqueCascadeCount = rg.sunShadowOpaqueCascadeCount;
  _RSI = sunShadow;
  __asm
  {
    vmovaps [rsp+348h+var_58], xmm6
    vmovaps [rsp+348h+var_68], xmm7
  }
  _R14 = viewInfo;
  if ( rg.sunShadowOpaqueCascadeCount > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", LOWORD(rg.sunShadowOpaqueCascadeCount), "unsigned", rg.sunShadowOpaqueCascadeCount) )
    __debugbreak();
  _RSI->opaqueCascadeCount = sunShadowOpaqueCascadeCount;
  _RSI->firstCachedSunShadowPartition = truncate_cast<unsigned char,unsigned short>(rg.firstCachedSunShadowPartition);
  _RSI->lastCachedSunShadowPartition = truncate_cast<unsigned char,unsigned short>(rg.lastCachedSunShadowPartition);
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vmovss  [rsp+348h+outNearClip], xmm7
    vmovss  [rsp+348h+outFarClip], xmm7
  }
  R_SetupSunShadowMapMetrics(_R14, data, &mapMetrics, &outNearClip, &outFarClip);
  __asm
  {
    vmovss  xmm0, [rsp+348h+outNearClip]
    vmovss  xmm1, [rsp+348h+outFarClip]
    vmovss  dword ptr [rsi+4F7Ch], xmm0
    vmovss  dword ptr [rsi+4F84h], xmm0
    vmovss  dword ptr [rsi+4F80h], xmm1
    vmovss  dword ptr [rsi+4F88h], xmm1
  }
  if ( frontEndDataOut->pipInfoCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 2113, ASSERT_TYPE_ASSERT, "(frontEndDataOut->pipInfoCount == 0)", (const char *)&queryFormat, "frontEndDataOut->pipInfoCount == 0") )
    __debugbreak();
  _R12 = 0x140000000ui64;
  frontEndDataOut->sunShadow.partition[3].isPrevViewProjectionMatrixValid = 0;
  _RCX = frontEndDataOut;
  localClientNum = (unsigned int)frontEndDataOut->localClientNum;
  if ( rg.useTransSunShadow && (*((_BYTE *)&_R14->viewportFeatures + 44) & 4) != 0 && _R14->drawList[27].codeSurfList.count )
  {
    v17 = (unsigned int)localClientNum;
    if ( g_previousFrameTransShadowViewProjectionMatrixIsValid[localClientNum] )
    {
      _RAX = localClientNum << 6;
      __asm
      {
        vmovups ymm0, ymmword ptr [rax+r12+14105870h]
        vmovups ymmword ptr [rcx+0E3010h], ymm0
        vmovups ymm1, ymmword ptr [rax+r12+14105890h]
        vmovups ymmword ptr [rcx+0E3030h], ymm1
      }
      frontEndDataOut->sunShadow.partition[3].isPrevViewProjectionMatrixValid = 1;
    }
  }
  else
  {
    v17 = (unsigned int)frontEndDataOut->localClientNum;
  }
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vmovss  xmm0, dword ptr [r14+3C44h]; val
  }
  v60 = 768;
  v61 = 1024;
  v62 = 1536;
  v63 = 2048;
  __asm
  {
    vmovaps xmm2, xmm6; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vsubss  xmm1, xmm6, xmm0
    vmulss  xmm2, xmm1, cs:__real@3b400000
    vmulss  xmm0, xmm0, cs:__real@3ca80000
    vaddss  xmm3, xmm2, xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rbx
    vmulss  xmm2, xmm3, xmm1
    vdivss  xmm1, xmm2, xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmovss  dword ptr [rsi+4F8Ch], xmm1
    vdivss  xmm1, xmm2, xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
  }
  _RSI->filterRadius.v[3] = 0.0;
  __asm
  {
    vmovss  dword ptr [rsi+4F90h], xmm1
    vdivss  xmm1, xmm2, xmm0
    vmovss  dword ptr [rsi+4F94h], xmm1
  }
  R_SetupSunShadowMapProjectionAndClipPlanes(_R14, data, camera, &mapMetrics, _RSI, &clip);
  __asm
  {
    vmovaps xmm7, [rsp+348h+var_68]
    vmovaps xmm6, [rsp+348h+var_58]
  }
  if ( rg.useTransSunShadow && (*((_BYTE *)&_R14->viewportFeatures + 44) & 4) != 0 && _R14->drawList[27].codeSurfList.count )
  {
    _RAX = frontEndDataOut;
    _RCX = v17 << 6;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax+0E2F10h]
      vmovups ymmword ptr [rcx+r12+14105870h], ymm0
      vmovups ymm1, ymmword ptr [rax+0E2F30h]
      vmovups ymmword ptr [rcx+r12+14105890h], ymm1
    }
    v48 = 1;
  }
  else
  {
    if ( v17 >= 2 )
    {
      j___report_rangecheckfailure(v41);
      JUMPOUT(0x1423A2D9Ai64);
    }
    v48 = 0;
  }
  g_previousFrameTransShadowViewProjectionMatrixIsValid[v17] = v48;
  R_SetupSunShadowSurfacesDpvs(_R14, _RSI);
  memset_0(&_R14->drawList[24], 0, sizeof(_R14->drawList[24]));
  _R14->drawList[24].codeSurfList.listType = GFX_CODE_SURFLIST_TYPE_COUNT;
  memset_0(&_R14->drawList[25], 0, sizeof(_R14->drawList[25]));
  _R14->drawList[25].codeSurfList.listType = GFX_CODE_SURFLIST_TYPE_COUNT;
  memset_0(&_R14->drawList[26], 0, sizeof(_R14->drawList[26]));
  _R14->drawList[26].codeSurfList.listType = GFX_CODE_SURFLIST_TYPE_COUNT;
  memset_0(&_R14->drawList[28], 0, sizeof(_R14->drawList[28]));
  _R14->drawList[28].codeSurfList.listType = GFX_CODE_SURFLIST_TYPE_COUNT;
  if ( _R14->useCachedSunShadow )
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
        v53 = 0;
        for ( i = 10 * (firstCachedSunShadowPartition - p_sunShadow->firstCachedSunShadowPartition) + 45; v53 < gfxCachedSunShadowOverlapCount; v55->codeSurfList.listType = GFX_CODE_SURFLIST_TYPE_COUNT )
        {
          v55 = &_R14->drawList[v53 + i];
          memset_0(v55, 0, sizeof(GfxDrawList));
          ++v53;
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
  R_RT_Handle v8; 
  R_RT_Handle v9; 

  __asm
  {
    vmovups ymm0, ymmword ptr [r8]
    vmovups [rsp+68h+var_48], ymm0
  }
  _RAX = R_RT_GetViewInternal(&v9, &v8, partition, 0);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups [rsp+68h+var_48], ymm0
  }
  R_RT_DepthHandle::Cast(result, &v8);
  return result;
}

/*
==============
R_SunShadowAllocateStaticEntry
==============
*/
GfxCachedSunShadow *R_SunShadowAllocateStaticEntry(GfxBackEndData *data, unsigned int partitionIndex, const vec3_t *sunShadowLightDir, const int gridX, const int gridY, const float gridSize, float sampleSize, const float cachedLODRefDistance, const int x0, const int y0, GfxViewInfo *viewInfo, int *outValidEntryCount)
{
  GfxCachedSunShadow *v23; 
  unsigned __int16 v26; 
  unsigned int cachedSunShadowIndex; 
  GfxCachedSunShadow *result; 
  _QWORD sunAxis[9]; 
  __int128 v95; 
  char v96; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps xmmword ptr [rax-0B8h], xmm14
    vmovaps xmmword ptr [rax-0C8h], xmm15
  }
  v23 = s_gfxCachedSunShadowListHead;
  _RDI = NULL;
  v26 = partitionIndex;
  while ( !_RDI || _RDI->inProcessing )
  {
    _RDI = v23->prev;
    v23 = _RDI;
  }
  --*outValidEntryCount;
  __asm
  {
    vmovss  xmm0, [rbp+50h+cachedLODRefDistance]
    vmovss  xmm6, [rbp+50h+gridSize]
  }
  s_gfxCachedSunShadowListHead = v23;
  _RDI->sunShadowLightDir = *sunShadowLightDir;
  cachedSunShadowIndex = _RDI->cachedSunShadowIndex;
  __asm { vmovss  dword ptr [rdi+28h], xmm0 }
  *(_QWORD *)&v95 = 0x40000000300i64;
  *((_QWORD *)&v95 + 1) = 0x80000000600i64;
  __asm { vmovss  dword ptr [rdi+24h], xmm6 }
  _RDI->gridX = gridX;
  _RDI->gridY = gridY;
  DWORD2(v95) = *((_DWORD *)&v95 + (int)rg.shadowMapResolutionIndex) >> 1;
  HIDWORD(v95) = DWORD2(v95);
  DWORD1(v95) = DWORD2(v95) * (cachedSunShadowIndex >> 3);
  LODWORD(v95) = DWORD2(v95) * (cachedSunShadowIndex & 7);
  __asm
  {
    vmovups xmm0, [rsp+150h+var_E8+8]
    vmovups xmmword ptr [rdi+1F8h], xmm0
  }
  R_GetSunAxes(sunShadowLightDir, (tmat33_t<vec3_t> *)&sunAxis[1]);
  __asm
  {
    vmovss  xmm5, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm4, dword ptr [rsp+150h+sunAxis+8]
    vmovss  xmm3, dword ptr [rsp+150h+sunAxis+0Ch]
    vmovss  xmm2, dword ptr [rsp+150h+sunAxis+10h]
    vmovss  xmm7, dword ptr [rsp+150h+sunAxis+14h]
    vmovss  xmm8, dword ptr [rsp+150h+sunAxis+18h]
    vmovss  xmm9, dword ptr [rsp+150h+sunAxis+1Ch]
    vmovss  dword ptr [rdi+30h], xmm4
    vmovss  dword ptr [rdi+34h], xmm3
    vmovss  dword ptr [rdi+38h], xmm2
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, xmm6
    vmovss  dword ptr [rdi+3Ch], xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, xmm6
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vxorps  xmm10, xmm4, xmm5
    vmovss  dword ptr [rdi+40h], xmm10
    vxorps  xmm11, xmm3, xmm5
    vmovss  dword ptr [rdi+44h], xmm11
    vxorps  xmm12, xmm2, xmm5
    vmovss  dword ptr [rdi+48h], xmm12
    vmovss  dword ptr [rdi+4Ch], xmm1
    vmulss  xmm1, xmm0, xmm6
    vmovss  dword ptr [rdi+50h], xmm7
    vmovss  dword ptr [rdi+54h], xmm8
    vmovss  dword ptr [rdi+58h], xmm9
    vmovss  dword ptr [rdi+5Ch], xmm1
    vxorps  xmm0, xmm7, xmm5
    vxorps  xmm1, xmm8, xmm5
    vmovss  dword ptr [rdi+60h], xmm0
    vxorps  xmm0, xmm9, xmm5
    vmovss  dword ptr [rdi+64h], xmm1
    vmovss  dword ptr [rdi+68h], xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, eax
    vmulss  xmm0, xmm1, xmm6
    vmovss  xmm1, dword ptr [rsp+150h+sunAxis+24h]
    vmovss  dword ptr [rdi+6Ch], xmm0
    vmovss  xmm0, dword ptr [rsp+150h+sunAxis+20h]
    vmovss  dword ptr [rdi+70h], xmm4
    vmovss  dword ptr [rdi+80h], xmm3
    vmovss  dword ptr [rdi+90h], xmm2
  }
  *(_QWORD *)_RDI->viewParms.viewMatrix.m.row3.v = 0i64;
  _R15 = &_RDI->farClip;
  __asm
  {
    vmovss  dword ptr [rdi+74h], xmm7
    vmovss  dword ptr [rdi+84h], xmm8
    vmovss  dword ptr [rdi+94h], xmm9
    vxorps  xmm13, xmm0, xmm5
    vmovss  xmm0, dword ptr [rsp+150h+anonymous_0]
    vmovss  dword ptr [rdi+78h], xmm13
    vxorps  xmm14, xmm1, xmm5
    vmovss  dword ptr [rdi+88h], xmm14
    vxorps  xmm15, xmm0, xmm5
    vmovss  dword ptr [rdi+98h], xmm15
  }
  _RDI->viewParms.viewMatrix.m.m[3].v[2] = 0.0;
  _RDI->viewParms.viewMatrix.m.m[0].v[3] = 0.0;
  _RDI->viewParms.viewMatrix.m.m[1].v[3] = 0.0;
  _RDI->viewParms.viewMatrix.m.m[2].v[3] = 0.0;
  _RDI->viewParms.viewMatrix.m.m[3].v[3] = 1.0;
  if ( rg.useCompressedSunShadowClipPlanes )
  {
    __asm { vmovss  xmm3, [rbp+50h+sampleSize]; sampleSize }
    R_CompressedSunShadow_GetCacheEntryClipPlanes(&data->sunShadow, _RDI->gridX, _RDI->gridY, *(float *)&_XMM3, &_RDI->nearClip, &_RDI->farClip);
  }
  else
  {
    _RDI->nearClip = data->sunShadow.nearClip;
    *_R15 = data->sunShadow.farClip;
  }
  _RDX = &_RDI->viewParms.projectionMatrix;
  memset(&sunAxis[1], 0, 32);
  __asm
  {
    vmovups ymm0, ymmword ptr [rsp+150h+sunAxis+8]
    vmovups ymmword ptr [rdx], ymm0
    vmovss  xmm0, cs:__real@40000000
    vdivss  xmm2, xmm0, xmm6
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, esi
    vsubss  xmm0, xmm0, cs:__real@3f800000
  }
  memset(&sunAxis[5], 0, 32);
  __asm
  {
    vmovups ymm1, ymmword ptr [rsp+150h+anonymous_0]
    vmovups ymmword ptr [rdx+20h], ymm1
    vmovss  dword ptr [rdx], xmm2
    vmovss  dword ptr [rdi+0E0h], xmm0
    vmovss  dword ptr [rdi+0C4h], xmm2
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, r13d
    vsubss  xmm1, xmm0, cs:__real@3f800000
    vmovss  xmm0, cs:__real@bf800000
    vmovss  dword ptr [rdi+0E4h], xmm1
    vmovss  xmm2, dword ptr [r15]
    vsubss  xmm3, xmm2, dword ptr [r14]
    vdivss  xmm1, xmm0, xmm3
    vmovss  dword ptr [rdi+0D8h], xmm1
    vmovss  xmm2, dword ptr [r15]
    vsubss  xmm0, xmm2, dword ptr [r14]
    vdivss  xmm1, xmm2, xmm0
    vmovss  dword ptr [rdi+0E8h], xmm1
  }
  _RDI->viewParms.projectionMatrix.m.m[3].v[3] = 1.0;
  *(_QWORD *)_RDI->viewParms.camera.origin.v = 0i64;
  _RDI->viewParms.camera.origin.v[2] = 0.0;
  __asm
  {
    vmovss  dword ptr [rdi+17Ch], xmm13
    vmovss  dword ptr [rdi+180h], xmm14
    vmovss  dword ptr [rdi+184h], xmm15
    vmovss  dword ptr [rdi+188h], xmm10
    vmovss  dword ptr [rdi+18Ch], xmm11
    vmovss  dword ptr [rdi+190h], xmm12
    vmovss  dword ptr [rdi+194h], xmm7
    vmovss  dword ptr [rdi+198h], xmm8
    vmovss  dword ptr [rdi+19Ch], xmm9
  }
  *(_QWORD *)&_RDI->viewParms.camera.tanHalfFovX = 0i64;
  _RDI->viewParms.camera.depthHackFoV = 0i64;
  _RDI->viewParms.camera.zPlanes[0] = 0.0;
  _RDI->viewParms.camera.zPlanes[1] = _RDI->viewParms.projectionMatrix.m.m[3].v[2];
  _RDI->viewParms.camera.zPlanes[2] = 0.0;
  _RDI->viewParms.camera.zPlanes[3] = _RDI->viewParms.projectionMatrix.m.m[3].v[2];
  MatrixMultiply44Aligned(&_RDI->viewParms.viewMatrix.m, &_RDI->viewParms.projectionMatrix.m, &_RDI->viewParms.viewProjectionMatrix.m);
  MatrixInverse44Aligned(&_RDI->viewParms.viewProjectionMatrix.m, &_RDI->viewParms.inverseViewProjectionMatrix.m);
  *(_DWORD *)&_RDI->bspOnly = 0;
  result = _RDI;
  _RDI->needEviction = 0;
  *(_WORD *)&_RDI->allocated = 1;
  _RDI->refreshQueued = 0;
  _RDI->partitionIndex = v26;
  *(_QWORD *)&_RDI->updateFrameIndex = 0i64;
  *(_QWORD *)&_RDI->terrainUpdateFrameIndex = 0i64;
  *(_QWORD *)&_RDI->smodelUpdateCount = 0i64;
  *(_QWORD *)&_RDI->genVis = 0i64;
  *(_QWORD *)&_RDI->genSmodel = 0i64;
  *(_QWORD *)&_RDI->smodelCount = 0i64;
  _RDI->missingTransient[1] = 0;
  _R11 = &v96;
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
  char v73; 
  bool v74; 
  bool v76; 
  bool v77; 
  bool v78; 
  bool v79; 
  bool result; 
  __int128 v92; 
  char v93; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vsubss  xmm2, xmm0, dword ptr [rcx+170h]
    vmovss  dword ptr [rdx], xmm2
    vmovss  xmm0, dword ptr [rdx+4]
    vsubss  xmm1, xmm0, dword ptr [rcx+174h]
    vmovss  dword ptr [rdx+4], xmm1
    vmovss  xmm0, dword ptr [rdx+8]
    vsubss  xmm3, xmm0, dword ptr [rcx+178h]
    vmovss  dword ptr [rdx+8], xmm3
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovss  xmm6, cs:__real@3f800000
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovups ymm7, ymmword ptr [rcx+0F0h]
    vmulss  xmm0, xmm7, xmm2
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vextractf128 xmm5, ymm7, 1
    vmulss  xmm1, xmm5, xmm1
    vaddss  xmm2, xmm1, xmm0
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vextractf128 xmm9, ymm7, 1
    vshufps xmm10, xmm7, xmm7, 55h ; 'U'
    vmovaps [rsp+0B8h+var_88], xmm13
    vmovups ymm13, ymmword ptr [rcx+110h]
    vmulss  xmm0, xmm13, xmm3
    vaddss  xmm2, xmm2, xmm0
    vextractf128 xmm1, ymm13, 1
    vaddss  xmm12, xmm2, xmm1
    vmulss  xmm1, xmm10, dword ptr [rdx]
    vshufps xmm9, xmm9, xmm9, 55h ; 'U'
    vmulss  xmm0, xmm9, dword ptr [rdx+4]
    vaddss  xmm2, xmm1, xmm0
    vshufps xmm8, xmm13, xmm13, 55h ; 'U'
    vmulss  xmm0, xmm8, xmm3
    vmulss  xmm3, xmm9, dword ptr [rdx+10h]
    vaddss  xmm2, xmm2, xmm0
    vmulss  xmm0, xmm7, dword ptr [rdx+0Ch]
    vextractf128 xmm1, ymm13, 1
    vshufps xmm1, xmm1, xmm1, 55h ; 'U'
    vaddss  xmm11, xmm2, xmm1
    vmulss  xmm1, xmm5, dword ptr [rdx+10h]
    vmovss  xmm5, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vandps  xmm1, xmm1, xmm5
    vandps  xmm0, xmm0, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm13, dword ptr [rdx+14h]
    vmulss  xmm0, xmm10, dword ptr [rdx+0Ch]
    vandps  xmm1, xmm1, xmm5
    vaddss  xmm7, xmm2, xmm1
    vmulss  xmm1, xmm8, dword ptr [rdx+14h]
    vandps  xmm0, xmm0, xmm5
    vandps  xmm1, xmm1, xmm5
    vandps  xmm3, xmm3, xmm5
    vaddss  xmm2, xmm3, xmm0
    vaddss  xmm8, xmm2, xmm1
    vmovaps xmm2, xmm6; max
    vxorps  xmm1, xmm1, xmm1; min
    vsubss  xmm0, xmm12, xmm7; val
    vxorps  xmm9, xmm9, xmm9
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm10, xmm0
    vaddss  xmm0, xmm7, xmm12; val
    vmovaps xmm2, xmm6; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm12, xmm0
    vsubss  xmm0, xmm11, xmm8; val
    vmovaps xmm2, xmm6; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm7, xmm0
    vaddss  xmm0, xmm8, xmm11; val
    vmovaps xmm2, xmm6; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vcomiss xmm10, xmm12
    vmovaps xmm6, xmm0
  }
  if ( !(v73 | v74) )
  {
    v76 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 216, ASSERT_TYPE_ASSERT, "(minX <= maxX)", (const char *)&queryFormat, "minX <= maxX", v92);
    v73 = 0;
    v74 = !v76;
    if ( v76 )
      __debugbreak();
  }
  __asm { vcomiss xmm7, xmm6 }
  if ( !(v73 | v74) )
  {
    v77 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 217, ASSERT_TYPE_ASSERT, "(minY <= maxY)", (const char *)&queryFormat, "minY <= maxY");
    v73 = 0;
    v74 = !v77;
    if ( v77 )
      __debugbreak();
  }
  __asm { vcomiss xmm10, xmm9 }
  if ( v73 )
  {
    v78 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 218, ASSERT_TYPE_ASSERT, "(minX >= 0.0f)", (const char *)&queryFormat, "minX >= 0.0f");
    v73 = 0;
    v74 = !v78;
    if ( v78 )
      __debugbreak();
  }
  __asm { vcomiss xmm7, xmm9 }
  if ( v73 )
  {
    v79 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 219, ASSERT_TYPE_ASSERT, "(minY >= 0.0f)", (const char *)&queryFormat, "minY >= 0.0f");
    v73 = 0;
    v74 = !v79;
    if ( v79 )
      __debugbreak();
  }
  __asm
  {
    vsubss  xmm0, xmm12, xmm10
    vcomiss xmm0, xmm9
  }
  if ( v73 | v74 )
    goto LABEL_16;
  __asm
  {
    vsubss  xmm0, xmm6, xmm7
    vcomiss xmm0, xmm9
  }
  if ( v73 | v74 )
LABEL_16:
    result = 0;
  else
    result = 1;
  _R11 = &v93;
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
  return result;
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
  unsigned int v1; 
  __int64 v2; 
  int v3; 
  __int64 v4; 
  __int64 v6; 
  __int128 v7; 

  HIDWORD(v7) = 2048;
  _RDX = &s_gfxCachedSunShadowStore[0].sunShadowLightDir.v[2];
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
    *((_WORD *)_RDX + 240) = 0;
    *((_BYTE *)_RDX + 482) = 0;
    *((_WORD *)_RDX + 242) = 0;
    *((_WORD *)_RDX - 8) = 0;
    *(_WORD *)((char *)_RDX - 13) = 0;
    *((_BYTE *)_RDX - 11) = 0;
    LODWORD(v7) = v3 * (v1 & 7);
    *((_BYTE *)_RDX - 14) = 0;
    v4 = v2 & 0x3F;
    *(_QWORD *)(_RDX + 5) = 0i64;
    ++v2;
    *((_WORD *)_RDX + 14) = 0;
    *((_QWORD *)_RDX - 1) = 0i64;
    *_RDX = 0.0;
    *((_WORD *)_RDX + 243) = v1;
    *((_QWORD *)_RDX + 63) = -1i64;
    *((_QWORD *)_RDX + 64) = -1i64;
    _RDX += 152;
    DWORD1(v7) = v3 * ((unsigned __int16)v1 >> 3);
    __asm { vmovups xmm0, [rsp+28h+var_28] }
    v6 = v4;
    LOBYTE(v4) = v1++ - 1;
    *((_QWORD *)_RDX - 3) = &s_gfxCachedSunShadowStore[v6];
    __asm { vmovups xmmword ptr [rdx-78h], xmm0 }
    *((_QWORD *)_RDX - 4) = &s_gfxCachedSunShadowStore[v4 & 0x3F];
    *(_QWORD *)(_RDX - 11) = 0i64;
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
  R_RT_Handle v6; 

  if ( s_R_SunShadowCache.depthRts.m_surfaceID && (R_RT_Handle::GetSurface(&s_R_SunShadowCache.depthRts), s_R_SunShadowCache.depthRts.m_surfaceID) )
  {
    R_RT_Handle::GetSurface(&s_R_SunShadowCache.depthRts);
    __asm
    {
      vmovups ymm0, ymmword ptr cs:s_R_SunShadowCache.depthRts.baseclass_0.m_surfaceID
      vmovd   eax, xmm0
      vmovups ymmword ptr [rsp+58h+var_28.m_surfaceID], ymm0
    }
    if ( (_WORD)_EAX )
    {
      R_RT_Handle::GetSurface(&v6);
      if ( (R_RT_Handle::GetSurface(&v6)->m_rtFlagsInternal & 3u) < 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 877, ASSERT_TYPE_ASSERT, "(R_RT_GetLifetimeFromFlags( rt.GetFlagsInternal() ) >= R_RT_Lifetime_MultiFrame)", (const char *)&queryFormat, "R_RT_GetLifetimeFromFlags( rt.GetFlagsInternal() ) >= R_RT_Lifetime_MultiFrame") )
        __debugbreak();
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+58h+var_28.m_surfaceID]
        vmovups ymmword ptr [rsp+58h+var_28.m_surfaceID], ymm0
      }
      R_RT_DestroyInternal(&v6);
    }
    else if ( s_R_SunShadowCache.depthRts.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
    {
      __debugbreak();
    }
    __asm { vpxor   xmm0, xmm0, xmm0 }
    v6.m_surfaceID = 0;
    v6.m_tracking.m_allocCounter = 0;
    __asm
    {
      vmovdqu xmmword ptr [rsp+58h+var_28.m_tracking.m_name], xmm0
      vmovups ymm1, ymmword ptr [rsp+58h+var_28.m_surfaceID]
      vmovups ymmword ptr cs:s_R_SunShadowCache.depthRts.baseclass_0.m_surfaceID, ymm1
    }
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
  _RBX = result;
  R_SunShadowMapDebug_CreateRTDraw3D();
  __asm
  {
    vmovups ymm0, ymmword ptr cs:s_debugSunShadowDepthRt.baseclass_0.m_surfaceID
    vmovups ymmword ptr [rbx], ymm0
  }
  return _RBX;
}

/*
==============
R_SunShadowCache_GetDepthArrayRtDraw3D
==============
*/
R_RT_DepthHandle *R_SunShadowCache_GetDepthArrayRtDraw3D(R_RT_DepthHandle *result)
{
  __asm
  {
    vmovups ymm0, ymmword ptr cs:s_R_SunShadowCache.depthRts.baseclass_0.m_surfaceID
    vmovups ymmword ptr [rcx], ymm0
  }
  return result;
}

/*
==============
R_SunShadowCache_GetDepthRt
==============
*/
R_RT_DepthHandle *R_SunShadowCache_GetDepthRt(R_RT_DepthHandle *result, unsigned int cellIndex, R_RT_DepthHandle *sunShadowCacheDepthRts)
{
  __asm
  {
    vmovups ymm0, ymmword ptr [r8]
    vmovups ymmword ptr [rcx], ymm0
  }
  return result;
}

/*
==============
R_SunShadowCache_GetDepthRtDraw3D
==============
*/
R_RT_DepthHandle *R_SunShadowCache_GetDepthRtDraw3D(R_RT_DepthHandle *result, unsigned int cellIndex)
{
  _RBX = result;
  if ( cellIndex >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp", 2500, ASSERT_TYPE_ASSERT, "(cellIndex < 64)", (const char *)&queryFormat, "cellIndex < MAX_CACHED_SUN_SHADOWS") )
    __debugbreak();
  __asm
  {
    vmovups ymm0, ymmword ptr cs:s_R_SunShadowCache.depthRts.baseclass_0.m_surfaceID
    vmovups ymmword ptr [rbx], ymm0
  }
  return _RBX;
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
  float v6; 
  int v7[4]; 
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
    v7[0] = 768;
    v7[1] = 1024;
    v7[2] = 1536;
    v7[3] = 2048;
    __asm { vmovss  [rsp+0C8h+var_88], xmm0 }
    v3 = 8 * ((unsigned int)v7[rg.shadowMapResolutionIndex] >> 1);
    __asm { vmovdqu xmmword ptr cs:s_R_SunShadowCache.depthRts.baseclass_0.m_tracking.m_name, xmm0 }
    _RAX = R_RT_CreateDepthInternal(&result, 8 * v2, v3, 1u, 1u, GFX_DEPTHSTENCIL_FORMAT_SHADOWMAP, R_RT_Flag_None, R_RT_FlagInternal_MaskLifetime, v6, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "R_RENDERTARGET_CACHED_SUN", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp(2486)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr cs:s_R_SunShadowCache.depthRts.baseclass_0.m_surfaceID, ymm0
    }
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

void __fastcall R_SunShadowMapDebug_CreateRTDraw3D(double _XMM0_8)
{
  unsigned int v2; 
  unsigned int v3; 
  float v6; 
  unsigned int height[4]; 
  R_RT_DepthHandle width; 

  if ( !s_debugSunShadowDepthRtInited )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  [rsp+0C8h+var_88], xmm0
    }
    height[0] = 768;
    height[1] = 1024;
    height[2] = 1536;
    height[3] = 2048;
    v2 = height[rg.shadowMapResolutionIndex];
    *(_DWORD *)&width.m_surfaceID = 768;
    *((_DWORD *)&width.m_surfaceID + 1) = 1024;
    width.m_tracking.m_allocCounter = 1536;
    *(&width.m_tracking.m_allocCounter + 1) = 2048;
    v3 = *((_DWORD *)&width.m_surfaceID + (int)rg.shadowMapResolutionIndex);
    s_debugSunShadowDepthRtInited = 1;
    _RAX = R_RT_CreateDepthInternal(&width, v3, v2, 3u, 1u, GFX_DEPTHSTENCIL_FORMAT_SHADOWMAP, R_RT_Flag_None, (R_RT_FlagsInternal)2, v6, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE, "SunShadowDebug", 0, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_sunshadow.cpp(2414)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr cs:s_debugSunShadowDepthRt.baseclass_0.m_surfaceID, ymm0
    }
  }
}

/*
==============
R_SunShadowMapDebug_DestroyRTDraw3D
==============
*/

void __fastcall R_SunShadowMapDebug_DestroyRTDraw3D(double _XMM0_8)
{
  R_RT_Handle v3; 

  if ( s_debugSunShadowDepthRtInited )
  {
    __asm { vmovups ymm0, ymmword ptr cs:s_debugSunShadowDepthRt.baseclass_0.m_surfaceID }
    s_debugSunShadowDepthRtInited = 0;
    __asm { vmovups ymmword ptr [rsp+48h+var_28.m_surfaceID], ymm0 }
    R_RT_DestroyInternal(&v3);
    __asm { vpxor   xmm0, xmm0, xmm0 }
    s_debugSunShadowDepthRt.m_surfaceID = 0;
    s_debugSunShadowDepthRt.m_tracking.m_allocCounter = 0;
    __asm { vmovdqu xmmword ptr cs:s_debugSunShadowDepthRt.baseclass_0.m_tracking.m_name, xmm0 }
  }
}

/*
==============
R_SunShadowMapDebug_GetRTDraw3D
==============
*/
R_RT_DepthHandle *R_SunShadowMapDebug_GetRTDraw3D(R_RT_DepthHandle *result, unsigned int partition)
{
  R_RT_Handle v8; 
  R_RT_Handle v9; 

  R_SunShadowMapDebug_CreateRTDraw3D();
  __asm
  {
    vmovups ymm0, ymmword ptr cs:s_debugSunShadowDepthRt.baseclass_0.m_surfaceID
    vmovups [rsp+68h+var_48], ymm0
  }
  _RAX = R_RT_GetViewInternal(&v9, &v8, partition, 0);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups [rsp+68h+var_48], ymm0
  }
  R_RT_DepthHandle::Cast(result, &v8);
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

