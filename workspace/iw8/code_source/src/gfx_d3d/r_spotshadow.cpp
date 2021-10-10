/*
==============
R_AddSpotShadowEntCmd
==============
*/

void __fastcall R_AddSpotShadowEntCmd(const void *const data)
{
  ?R_AddSpotShadowEntCmd@@YAXQEBX@Z(data);
}

/*
==============
R_GetSpotShadowArrayImageDraw3D
==============
*/

const GfxImage *__fastcall R_GetSpotShadowArrayImageDraw3D()
{
  return ?R_GetSpotShadowArrayImageDraw3D@@YAPEBUGfxImage@@XZ();
}

/*
==============
R_SpotShadow_NeedsBSPSurfs
==============
*/

bool __fastcall R_SpotShadow_NeedsBSPSurfs(const GfxSpotShadowUpdate *update)
{
  return ?R_SpotShadow_NeedsBSPSurfs@@YA_NPEBUGfxSpotShadowUpdate@@@Z(update);
}

/*
==============
R_SpotShadow_EvictSceneLightFromStaleCache
==============
*/

void __fastcall R_SpotShadow_EvictSceneLightFromStaleCache(R_SpotShadow_StaleCacheEntry *entry)
{
  ?R_SpotShadow_EvictSceneLightFromStaleCache@@YAXPEAUR_SpotShadow_StaleCacheEntry@@@Z(entry);
}

/*
==============
R_SpotShadow_GetAtlasUVOffsetAndScale
==============
*/

float4 *__fastcall R_SpotShadow_GetAtlasUVOffsetAndScale(float4 *result, const GfxSpotShadow *spotShadow)
{
  return ?R_SpotShadow_GetAtlasUVOffsetAndScale@@YA?AUfloat4@@PEBUGfxSpotShadow@@@Z(result, spotShadow);
}

/*
==============
R_SpotShadow_ActiveCacheEntry::Unrot
==============
*/

void __fastcall R_SpotShadow_ActiveCacheEntry::Unrot(R_SpotShadow_ActiveCacheEntry *this)
{
  ?Unrot@R_SpotShadow_ActiveCacheEntry@@QEAAXXZ(this);
}

/*
==============
R_EmitSpotShadowMapDrawSurfsForDynamicObjects
==============
*/

void __fastcall R_EmitSpotShadowMapDrawSurfsForDynamicObjects(GfxViewInfo *viewInfo, unsigned int spotShadowUpdateIndex)
{
  ?R_EmitSpotShadowMapDrawSurfsForDynamicObjects@@YAXPEAUGfxViewInfo@@I@Z(viewInfo, spotShadowUpdateIndex);
}

/*
==============
R_SpotShadow_ActiveCacheEntry::Clear
==============
*/

void __fastcall R_SpotShadow_ActiveCacheEntry::Clear(R_SpotShadow_ActiveCacheEntry *this)
{
  ?Clear@R_SpotShadow_ActiveCacheEntry@@QEAAXXZ(this);
}

/*
==============
R_SpotShadow_EvictSceneLightFromActiveCache
==============
*/

void __fastcall R_SpotShadow_EvictSceneLightFromActiveCache(unsigned int sceneLightIndex)
{
  ?R_SpotShadow_EvictSceneLightFromActiveCache@@YAXI@Z(sceneLightIndex);
}

/*
==============
R_SpotShadow_UpdateDynamicMesh
==============
*/

void R_SpotShadow_UpdateDynamicMesh(void)
{
  ?R_SpotShadow_UpdateDynamicMesh@@YAXXZ();
}

/*
==============
R_DrawSpotShadowDebug
==============
*/

void __fastcall R_DrawSpotShadowDebug(GfxBackEndData *data, GfxViewInfo *viewInfo, const unsigned int *motionBits)
{
  ?R_DrawSpotShadowDebug@@YAXPEAUGfxBackEndData@@PEAUGfxViewInfo@@PEBI@Z(data, viewInfo, motionBits);
}

/*
==============
R_SpotShadow_EvictSceneLightFromStaleCache
==============
*/

void __fastcall R_SpotShadow_EvictSceneLightFromStaleCache(unsigned int sceneLightIndex)
{
  ?R_SpotShadow_EvictSceneLightFromStaleCache@@YAXI@Z(sceneLightIndex);
}

/*
==============
R_AddPrimaryLightSpotShadowDynEnts
==============
*/

void __fastcall R_AddPrimaryLightSpotShadowDynEnts(LocalClientNum_t localClientNum, unsigned int primaryLightIndex, unsigned int spotShadowIndex, const GfxLight *light)
{
  ?R_AddPrimaryLightSpotShadowDynEnts@@YAXW4LocalClientNum_t@@IIPEBUGfxLight@@@Z(localClientNum, primaryLightIndex, spotShadowIndex, light);
}

/*
==============
R_SpotShadow_ActiveCacheEntry::GetSubsetDepthRtDraw3D
==============
*/

const R_RT_DepthHandle *__fastcall R_SpotShadow_ActiveCacheEntry::GetSubsetDepthRtDraw3D(R_SpotShadow_ActiveCacheEntry *this, const R_RT_DepthHandle *result, R_SpotShadow_ActiveCacheSubsetID subsetid)
{
  return ?GetSubsetDepthRtDraw3D@R_SpotShadow_ActiveCacheEntry@@QEBA?BVR_RT_DepthHandle@@W4R_SpotShadow_ActiveCacheSubsetID@@@Z(this, result, subsetid);
}

/*
==============
R_SpotShadow_StaleCacheEntry::GetAtlasIndex
==============
*/

unsigned int __fastcall R_SpotShadow_StaleCacheEntry::GetAtlasIndex(R_SpotShadow_StaleCacheEntry *this)
{
  return ?GetAtlasIndex@R_SpotShadow_StaleCacheEntry@@QEBAIXZ(this);
}

/*
==============
R_SpotShadow_GetStaleCacheEntryForSceneLight
==============
*/

R_SpotShadow_StaleCacheEntry *__fastcall R_SpotShadow_GetStaleCacheEntryForSceneLight(unsigned int sceneLightIndex)
{
  return ?R_SpotShadow_GetStaleCacheEntryForSceneLight@@YAPEAUR_SpotShadow_StaleCacheEntry@@I@Z(sceneLightIndex);
}

/*
==============
R_SpotShadow_StaleCacheEntry::GetColorArrayRtDraw3D
==============
*/

const R_RT_ColorHandle *__fastcall R_SpotShadow_StaleCacheEntry::GetColorArrayRtDraw3D(const R_RT_ColorHandle *result)
{
  return ?GetColorArrayRtDraw3D@R_SpotShadow_StaleCacheEntry@@SA?BVR_RT_ColorHandle@@XZ(result);
}

/*
==============
R_SpotShadow_GetActiveCacheEntryForSceneLight
==============
*/

R_SpotShadow_ActiveCacheEntry *__fastcall R_SpotShadow_GetActiveCacheEntryForSceneLight(unsigned int sceneLightIndex)
{
  return ?R_SpotShadow_GetActiveCacheEntryForSceneLight@@YAPEAUR_SpotShadow_ActiveCacheEntry@@I@Z(sceneLightIndex);
}

/*
==============
R_SpotShadow_ActiveCacheEntry::GetSubsetDepthRt
==============
*/

const R_RT_DepthHandle *__fastcall R_SpotShadow_ActiveCacheEntry::GetSubsetDepthRt(R_SpotShadow_ActiveCacheEntry *this, const R_RT_DepthHandle *result, R_SpotShadow_ActiveCacheSubsetID subsetid, R_RT_DepthHandle *cacheRt)
{
  return ?GetSubsetDepthRt@R_SpotShadow_ActiveCacheEntry@@QEBA?BVR_RT_DepthHandle@@W4R_SpotShadow_ActiveCacheSubsetID@@V2@@Z(this, result, subsetid, cacheRt);
}

/*
==============
R_SpotShadow_GetMapSize
==============
*/

unsigned int __fastcall R_SpotShadow_GetMapSize(GfxShadowMapTileResolution resolutionIndex)
{
  return ?R_SpotShadow_GetMapSize@@YAIW4GfxShadowMapTileResolution@@@Z(resolutionIndex);
}

/*
==============
R_AddSpotShadowDynEnts
==============
*/

void __fastcall R_AddSpotShadowDynEnts(LocalClientNum_t localClientNum)
{
  ?R_AddSpotShadowDynEnts@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
R_SpotShadow_ShouldUseHTileMask
==============
*/

bool __fastcall R_SpotShadow_ShouldUseHTileMask(const GfxSpotShadowUpdate *update)
{
  return ?R_SpotShadow_ShouldUseHTileMask@@YA_NPEBUGfxSpotShadowUpdate@@@Z(update);
}

/*
==============
R_SpotShadow_GetMapSize
==============
*/

unsigned int __fastcall R_SpotShadow_GetMapSize()
{
  return ?R_SpotShadow_GetMapSize@@YAIXZ();
}

/*
==============
R_EmitSpotShadowMapDrawSurfsForStaticObjects
==============
*/

void __fastcall R_EmitSpotShadowMapDrawSurfsForStaticObjects(GfxViewInfo *viewInfo, unsigned int spotShadowUpdateIndex)
{
  ?R_EmitSpotShadowMapDrawSurfsForStaticObjects@@YAXPEAUGfxViewInfo@@I@Z(viewInfo, spotShadowUpdateIndex);
}

/*
==============
R_SpotShadow_StaleCacheSnapshot
==============
*/

void __fastcall R_SpotShadow_StaleCacheSnapshot(GfxBackEndData *data, LocalClientNum_t clientIndex, bool updateCacheStaleness)
{
  ?R_SpotShadow_StaleCacheSnapshot@@YAXPEAUGfxBackEndData@@W4LocalClientNum_t@@_N@Z(data, clientIndex, updateCacheStaleness);
}

/*
==============
R_AddSpotShadowUpdateForSceneLight
==============
*/

void __fastcall R_AddSpotShadowUpdateForSceneLight(GfxBackEndData *data, GfxViewInfo *viewInfo, unsigned int sceneLightIndex, int castDynamicShadows)
{
  ?R_AddSpotShadowUpdateForSceneLight@@YAXPEAUGfxBackEndData@@PEAUGfxViewInfo@@IH@Z(data, viewInfo, sceneLightIndex, castDynamicShadows);
}

/*
==============
R_SpotShadow_ActiveCacheEntry::GetArraySliceIndex
==============
*/

unsigned int __fastcall R_SpotShadow_ActiveCacheEntry::GetArraySliceIndex(R_SpotShadow_ActiveCacheEntry *this)
{
  return ?GetArraySliceIndex@R_SpotShadow_ActiveCacheEntry@@QEBAIXZ(this);
}

/*
==============
R_SpotShadow_StaleCacheEntry::Unrot
==============
*/

void __fastcall R_SpotShadow_StaleCacheEntry::Unrot(R_SpotShadow_StaleCacheEntry *this)
{
  ?Unrot@R_SpotShadow_StaleCacheEntry@@QEAAXXZ(this);
}

/*
==============
R_SpotShadow_AllocateStaleCacheEntryForSceneLight
==============
*/

R_SpotShadow_StaleCacheEntry *__fastcall R_SpotShadow_AllocateStaleCacheEntryForSceneLight(unsigned int sceneLightIndex)
{
  return ?R_SpotShadow_AllocateStaleCacheEntryForSceneLight@@YAPEAUR_SpotShadow_StaleCacheEntry@@I@Z(sceneLightIndex);
}

/*
==============
R_SpotShadow_StaleCacheEntry::GetArraySliceIndex
==============
*/

unsigned int __fastcall R_SpotShadow_StaleCacheEntry::GetArraySliceIndex(R_SpotShadow_StaleCacheEntry *this)
{
  return ?GetArraySliceIndex@R_SpotShadow_StaleCacheEntry@@QEBAIXZ(this);
}

/*
==============
R_GenerateSpotShadowDrawSurfs
==============
*/

void __fastcall R_GenerateSpotShadowDrawSurfs(GfxViewInfo *viewInfo)
{
  ?R_GenerateSpotShadowDrawSurfs@@YAXPEAUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
R_SpotShadow_FlushActiveCache
==============
*/

void R_SpotShadow_FlushActiveCache(void)
{
  ?R_SpotShadow_FlushActiveCache@@YAXXZ();
}

/*
==============
R_SpotShadow_AllocateActiveCacheEntryForSceneLight
==============
*/

R_SpotShadow_ActiveCacheEntry *__fastcall R_SpotShadow_AllocateActiveCacheEntryForSceneLight(unsigned int sceneLightIndex)
{
  return ?R_SpotShadow_AllocateActiveCacheEntryForSceneLight@@YAPEAUR_SpotShadow_ActiveCacheEntry@@I@Z(sceneLightIndex);
}

/*
==============
R_SpotShadow_StaleCacheEntry::GetColorRt
==============
*/

const R_RT_ColorHandle *__fastcall R_SpotShadow_StaleCacheEntry::GetColorRt(R_SpotShadow_StaleCacheEntry *this, const R_RT_ColorHandle *result, R_RT_ColorHandle *cacheRt)
{
  return ?GetColorRt@R_SpotShadow_StaleCacheEntry@@QEBA?BVR_RT_ColorHandle@@V2@@Z(this, result, cacheRt);
}

/*
==============
R_SpotShadow_FlushStaleCache
==============
*/

void R_SpotShadow_FlushStaleCache(void)
{
  ?R_SpotShadow_FlushStaleCache@@YAXXZ();
}

/*
==============
R_SpotShadow_StaleCacheEntry::GetCacheIndex
==============
*/

unsigned int __fastcall R_SpotShadow_StaleCacheEntry::GetCacheIndex(R_SpotShadow_StaleCacheEntry *this)
{
  return ?GetCacheIndex@R_SpotShadow_StaleCacheEntry@@QEBAIXZ(this);
}

/*
==============
R_SpotShadow_ActiveCacheEntry::GetDepthRtDraw3D
==============
*/

const R_RT_DepthHandle *__fastcall R_SpotShadow_ActiveCacheEntry::GetDepthRtDraw3D(const R_RT_DepthHandle *result)
{
  return ?GetDepthRtDraw3D@R_SpotShadow_ActiveCacheEntry@@SA?BVR_RT_DepthHandle@@XZ(result);
}

/*
==============
R_SpotShadow_StaleCacheEntry::GetColorRtDraw3D
==============
*/

const R_RT_ColorHandle *__fastcall R_SpotShadow_StaleCacheEntry::GetColorRtDraw3D(R_SpotShadow_StaleCacheEntry *this, const R_RT_ColorHandle *result)
{
  return ?GetColorRtDraw3D@R_SpotShadow_StaleCacheEntry@@QEBA?BVR_RT_ColorHandle@@XZ(this, result);
}

/*
==============
R_SpotShadow_LazyAllocRts
==============
*/

void R_SpotShadow_LazyAllocRts(void)
{
  ?R_SpotShadow_LazyAllocRts@@YAXXZ();
}

/*
==============
R_SpotShadow_FreeRts
==============
*/

void R_SpotShadow_FreeRts(void)
{
  ?R_SpotShadow_FreeRts@@YAXXZ();
}

/*
==============
R_SpotShadow_ActiveCacheEntry::Clear
==============
*/
void R_SpotShadow_ActiveCacheEntry::Clear(R_SpotShadow_ActiveCacheEntry *this)
{
  *(_QWORD *)this->lookupMatrix.m.m[0].v = 0i64;
  *(vec4_t *)((char *)&this->lookupMatrix.m.row0 + 8) = 0ui64;
  *(vec4_t *)((char *)&this->lookupMatrix.m.row1 + 8) = 0ui64;
  *(vec4_t *)((char *)&this->lookupMatrix.m.row2 + 8) = 0ui64;
  *(_QWORD *)&this->lookupMatrix.m.row3.xyz.z = 0i64;
  *(_QWORD *)&this->zNear = 0i64;
  memset_0(this->cachedSmodelLOD, 6, sizeof(this->cachedSmodelLOD));
  *(_QWORD *)&this->bspUpdateCount = 0i64;
  *(_QWORD *)&this->smodelUpdateCount = 0i64;
  *(_QWORD *)&this->smodelLODUpdateCount = 0i64;
}

/*
==============
R_SpotShadow_ActiveCacheEntry::GetArraySliceIndex
==============
*/
__int64 R_SpotShadow_ActiveCacheEntry::GetArraySliceIndex(R_SpotShadow_ActiveCacheEntry *this)
{
  if ( (s_R_SpotShadow_Storage.activeCache.entries > this || this > &s_R_SpotShadow_Storage.activeCache.entries[15]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 67, ASSERT_TYPE_ASSERT, "(&s_R_SpotShadow_Storage.activeCache.entries[0]) <= (this) && (this) <= (&s_R_SpotShadow_Storage.activeCache.entries[R_SPOTSHADOW_ACTIVE_STORAGE_LIMIT - 1])", "%s\n\t0x%p not in [0x%p, 0x%p]", "this not in [&s_R_SpotShadow_Storage.activeCache.entries[0], &s_R_SpotShadow_Storage.activeCache.entries[R_SPOTSHADOW_ACTIVE_STORAGE_LIMIT - 1]]", this, s_R_SpotShadow_Storage.activeCache.entries, &s_R_SpotShadow_Storage.activeCache.entries[15]) )
    __debugbreak();
  return 2 * truncate_cast<unsigned int,__int64>(this - s_R_SpotShadow_Storage.activeCache.entries);
}

/*
==============
R_SpotShadow_StaleCacheEntry::GetArraySliceIndex
==============
*/
__int64 R_SpotShadow_StaleCacheEntry::GetArraySliceIndex(R_SpotShadow_StaleCacheEntry *this)
{
  return R_SpotShadow_StaleCacheEntry::GetCacheIndex(this) >> 2;
}

/*
==============
R_SpotShadow_StaleCacheEntry::GetAtlasIndex
==============
*/
__int64 R_SpotShadow_StaleCacheEntry::GetAtlasIndex(R_SpotShadow_StaleCacheEntry *this)
{
  return R_SpotShadow_StaleCacheEntry::GetCacheIndex(this) & 3;
}

/*
==============
R_SpotShadow_StaleCacheEntry::GetCacheIndex
==============
*/
unsigned int R_SpotShadow_StaleCacheEntry::GetCacheIndex(R_SpotShadow_StaleCacheEntry *this)
{
  if ( (s_R_SpotShadow_Storage.staleCache.entries > this || this > &s_R_SpotShadow_Storage.staleCache.entries[63]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 75, ASSERT_TYPE_ASSERT, "(&s_R_SpotShadow_Storage.staleCache.entries[0]) <= (this) && (this) <= (&s_R_SpotShadow_Storage.staleCache.entries[R_SPOTSHADOW_STALE_STORAGE_LIMIT - 1])", "%s\n\t0x%p not in [0x%p, 0x%p]", "this not in [&s_R_SpotShadow_Storage.staleCache.entries[0], &s_R_SpotShadow_Storage.staleCache.entries[R_SPOTSHADOW_STALE_STORAGE_LIMIT - 1]]", this, s_R_SpotShadow_Storage.staleCache.entries, &s_R_SpotShadow_Storage.staleCache.entries[63]) )
    __debugbreak();
  return truncate_cast<unsigned int,__int64>(this - s_R_SpotShadow_Storage.staleCache.entries);
}

/*
==============
R_SpotShadow_StaleCacheEntry::GetColorArrayRtDraw3D
==============
*/
const R_RT_ColorHandle *R_SpotShadow_StaleCacheEntry::GetColorArrayRtDraw3D(const R_RT_ColorHandle *result)
{
  R_RT_Handle arrayColorRt; 

  arrayColorRt = (R_RT_Handle)s_R_SpotShadow_Storage.staleCache.arrayColorRt;
  R_RT_ColorHandle::Cast((R_RT_ColorHandle *)result, &arrayColorRt);
  return result;
}

/*
==============
R_SpotShadow_StaleCacheEntry::GetColorRt
==============
*/
const R_RT_ColorHandle *R_SpotShadow_StaleCacheEntry::GetColorRt(R_SpotShadow_StaleCacheEntry *this, const R_RT_ColorHandle *result, R_RT_ColorHandle *cacheRt)
{
  unsigned int CacheIndex; 
  R_RT_Handle v7; 
  R_RT_Handle v8; 

  CacheIndex = R_SpotShadow_StaleCacheEntry::GetCacheIndex(this);
  v7 = cacheRt->R_RT_Handle;
  v7 = *R_RT_GetViewInternal(&v8, &v7, CacheIndex >> 2, 0);
  R_RT_ColorHandle::Cast((R_RT_ColorHandle *)result, &v7);
  return result;
}

/*
==============
R_SpotShadow_StaleCacheEntry::GetColorRtDraw3D
==============
*/
const R_RT_ColorHandle *R_SpotShadow_StaleCacheEntry::GetColorRtDraw3D(R_SpotShadow_StaleCacheEntry *this, const R_RT_ColorHandle *result)
{
  unsigned int CacheIndex; 
  R_RT_Handle arrayColorRt; 
  R_RT_Handle v6; 

  CacheIndex = R_SpotShadow_StaleCacheEntry::GetCacheIndex(this);
  arrayColorRt = (R_RT_Handle)s_R_SpotShadow_Storage.staleCache.arrayColorRt;
  arrayColorRt = *R_RT_GetViewInternal(&v6, &arrayColorRt, CacheIndex >> 2, 0);
  R_RT_ColorHandle::Cast((R_RT_ColorHandle *)result, &arrayColorRt);
  return result;
}

/*
==============
R_SpotShadow_ActiveCacheEntry::GetDepthRtDraw3D
==============
*/
const R_RT_DepthHandle *R_SpotShadow_ActiveCacheEntry::GetDepthRtDraw3D(const R_RT_DepthHandle *result)
{
  *(R_RT_DepthHandle *)result = s_R_SpotShadow_Storage.activeCache.arrayDepthRt;
  return result;
}

/*
==============
R_SpotShadow_ActiveCacheEntry::GetSubsetDepthRt
==============
*/
const R_RT_DepthHandle *R_SpotShadow_ActiveCacheEntry::GetSubsetDepthRt(R_SpotShadow_ActiveCacheEntry *this, const R_RT_DepthHandle *result, R_SpotShadow_ActiveCacheSubsetID subsetid, R_RT_DepthHandle *cacheRt)
{
  unsigned int ArraySliceIndex; 
  R_RT_Handle v9; 
  R_RT_Handle v10; 

  ArraySliceIndex = R_SpotShadow_ActiveCacheEntry::GetArraySliceIndex(this);
  v9 = cacheRt->R_RT_Handle;
  v9 = *R_RT_GetViewInternal(&v10, &v9, subsetid + ArraySliceIndex, 0);
  R_RT_DepthHandle::Cast((R_RT_DepthHandle *)result, &v9);
  return result;
}

/*
==============
R_SpotShadow_ActiveCacheEntry::GetSubsetDepthRtDraw3D
==============
*/
const R_RT_DepthHandle *R_SpotShadow_ActiveCacheEntry::GetSubsetDepthRtDraw3D(R_SpotShadow_ActiveCacheEntry *this, const R_RT_DepthHandle *result, R_SpotShadow_ActiveCacheSubsetID subsetid)
{
  unsigned int ArraySliceIndex; 
  R_RT_Handle arrayDepthRt; 
  R_RT_Handle v8; 

  ArraySliceIndex = R_SpotShadow_ActiveCacheEntry::GetArraySliceIndex(this);
  arrayDepthRt = (R_RT_Handle)s_R_SpotShadow_Storage.activeCache.arrayDepthRt;
  arrayDepthRt = *R_RT_GetViewInternal(&v8, &arrayDepthRt, subsetid + ArraySliceIndex, 0);
  R_RT_DepthHandle::Cast((R_RT_DepthHandle *)result, &arrayDepthRt);
  return result;
}

/*
==============
R_AddDynamicLightSpotShadowDynEnts
==============
*/
void R_AddDynamicLightSpotShadowDynEnts(unsigned int localClientNum, unsigned int sceneLightIndex, unsigned int spotShadowIndex, const GfxLight *light)
{
  unsigned int v4; 
  __int64 v6; 
  __int64 v7; 
  unsigned __int8 *v8; 
  volatile int v9; 
  __int64 v10; 
  __int64 v11; 
  unsigned __int16 dynEntClientId; 
  unsigned __int16 v13; 
  unsigned __int16 v14; 
  unsigned __int8 *v15; 
  unsigned __int16 *v16; 
  __int64 v17; 
  __int64 v18; 
  unsigned __int16 v19; 
  DynEntityClient *v20; 
  unsigned int dynEntDefId; 
  unsigned int v22; 
  unsigned int v23; 
  DynEntityList *DynEntityList; 
  __int64 v25; 
  GfxBrushModel *BrushModel; 
  __int64 v27; 
  __int64 v28; 
  unsigned int dynLightIndex; 
  volatile int v30; 
  __int64 v31; 

  v4 = localClientNum;
  dynLightIndex = R_SceneLightIndexToDynLightIndex(sceneLightIndex);
  v6 = frontEndDataOut->localClientNum;
  v7 = v6;
  v31 = spotShadowIndex + 4;
  v8 = &rgp.world->dpvsDyn.dynEntVisData[0][v31][v4 * rgp.world->dpvsDyn.dynEntClientCount[0]];
  v30 = 0;
  v9 = 0;
  if ( scene.sceneDynModelCount > 0 )
  {
    v10 = v6;
    v11 = 0i64;
    do
    {
      dynEntClientId = rgp.world->sceneDynModel[v11].dynEntClientId;
      *v8 = 2;
      if ( (unsigned int)v7 >= 2 )
      {
        LODWORD(v28) = 2;
        LODWORD(v27) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v27, v28) )
          __debugbreak();
      }
      v13 = g_dynEntClientEntsAllocCount[v7][0];
      if ( dynEntClientId >= v13 )
      {
        LODWORD(v28) = v13;
        LODWORD(v27) = dynEntClientId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", v27, v28) )
          __debugbreak();
      }
      if ( !g_dynEntClientLists[v10][0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
        __debugbreak();
      if ( (g_dynEntClientLists[v10][0][dynEntClientId].flags & 0x400) == 0 )
      {
        if ( (unsigned int)v7 >= 2 )
        {
          LODWORD(v28) = 2;
          LODWORD(v27) = v7;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 184, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v27, v28) )
            __debugbreak();
        }
        if ( !g_dynEntPoseLists[v10][0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 186, ASSERT_TYPE_ASSERT, "(g_dynEntPoseLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntPoseLists[localClientNum][basis]") )
          __debugbreak();
        v14 = g_dynEntClientEntsAllocCount[v7][0];
        if ( dynEntClientId >= v14 )
        {
          LODWORD(v28) = v14;
          LODWORD(v27) = dynEntClientId;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 187, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", v27, v28) )
            __debugbreak();
        }
        if ( R_DynamicLightFrustumTestBox(dynLightIndex, &g_dynEntPoseLists[v10][0][dynEntClientId].bounds) )
          *v8 = 1;
      }
      ++v9;
      ++v11;
      ++v8;
    }
    while ( v9 < scene.sceneDynModelCount );
    v4 = localClientNum;
    LODWORD(v6) = v7;
  }
  v15 = &rgp.world->dpvsDyn.dynEntVisData[1][v31][v4 * rgp.world->dpvsDyn.dynEntClientCount[1]];
  if ( scene.sceneDynBrushCount > 0 )
  {
    v16 = &g_dynEntClientEntsAllocCount[v7][1];
    v17 = 0i64;
    v18 = v7;
    do
    {
      v19 = rgp.world->sceneDynBrush[v17].dynEntClientId;
      *v15 = 2;
      if ( (unsigned int)v6 >= 2 )
      {
        LODWORD(v28) = 2;
        LODWORD(v27) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v27, v28) )
          __debugbreak();
      }
      if ( v19 >= *v16 )
      {
        LODWORD(v28) = *v16;
        LODWORD(v27) = v19;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", v27, v28) )
          __debugbreak();
      }
      if ( !g_dynEntClientLists[v18][1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
        __debugbreak();
      v20 = &g_dynEntClientLists[v18][1][v19];
      if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 954, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
        __debugbreak();
      dynEntDefId = v20->dynEntDefId;
      v22 = dynEntDefId >> 19;
      v23 = dynEntDefId & 0x7FFFF;
      DynEntityList = DynEnt_GetDynEntityList((DynEntityListId)v22);
      if ( !DynEntityList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 238, ASSERT_TYPE_ASSERT, "(dynEntList)", (const char *)&queryFormat, "dynEntList") )
        __debugbreak();
      if ( v23 >= DynEntityList->dynEntCount[1] )
      {
        LODWORD(v28) = DynEntityList->dynEntCount[1];
        LODWORD(v27) = v23;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 239, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( dynEntList->dynEntCount[basis] )", "localId doesn't index dynEntList->dynEntCount[basis]\n\t%i not in [0, %i)", v27, v28) )
          __debugbreak();
      }
      v25 = (__int64)&DynEntityList->dynEntDefList[1][v23];
      if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 956, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
        __debugbreak();
      BrushModel = R_GetBrushModel(*(unsigned __int16 *)(v25 + 66));
      if ( R_DynamicLightFrustumTestBox(dynLightIndex, &BrushModel->writable.bounds) )
        *v15 = 1;
      ++v17;
      ++v15;
      ++v30;
    }
    while ( v30 < scene.sceneDynBrushCount );
  }
}

/*
==============
R_AddDynamicLightSpotShadowModelEntities
==============
*/
void R_AddDynamicLightSpotShadowModelEntities(unsigned int localClientNum, unsigned int sceneLightIndex, unsigned int spotShadowIndex, const GfxLight *light)
{
  unsigned int v7; 
  unsigned __int8 *v8; 
  volatile int v9; 
  int v10; 
  const DObj **p_obj; 
  __int64 v12; 
  double Radius; 
  int v14; 
  _BYTE *v15; 
  __int64 v16; 
  unsigned int *p_renderFlags; 
  __int64 v18; 
  vec3_t outOrigin; 
  __int64 data[2]; 
  unsigned int v21; 
  unsigned int v22; 
  __int64 v23; 
  Sphere sphere; 

  v23 = -2i64;
  v7 = R_SceneLightIndexToDynLightIndex(sceneLightIndex);
  v8 = scene.dpvs.entVisData[spotShadowIndex + 4];
  v21 = sceneLightIndex;
  v22 = spotShadowIndex;
  data[1] = (__int64)light;
  v9 = 0;
  data[0] = 0i64;
  v10 = 0;
  if ( scene.sceneDObjCount > 0 )
  {
    p_obj = &scene.sceneDObj[0].obj;
    do
    {
      v12 = (*((_DWORD *)p_obj - 2) >> 10) & 0xFFF;
      if ( (_DWORD)v12 == gfxCfg.entnumNone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 1081, ASSERT_TYPE_ASSERT, "(entnum != gfxCfg.entnumNone)", (const char *)&queryFormat, "entnum != gfxCfg.entnumNone") )
        __debugbreak();
      v8[v12] = 2;
      if ( (*((_BYTE *)p_obj - 4) & 0x28) == 0 )
      {
        GfxSceneEntity_GetPlacementOrigin((const GfxSceneEntity *)(p_obj - 174), &outOrigin);
        sphere.origin = outOrigin;
        if ( !*p_obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 1093, ASSERT_TYPE_ASSERT, "(sceneDObj->obj)", (const char *)&queryFormat, "sceneDObj->obj") )
          __debugbreak();
        Radius = DObjGetRadius(*p_obj);
        sphere.radius = *(float *)&Radius;
        sphere.radiusSq = *(float *)&Radius * *(float *)&Radius;
        if ( R_DynamicLightFrustumTestSphere(v7, &sphere) )
        {
          data[0] = (__int64)(p_obj - 174);
          if ( !Sys_TryAddWorkerCmd(WRKCMD_SPOT_SHADOW_ENT, data) )
            R_WarnOncePerFrame(R_WARN_SPOT_SHADOW_ENTS);
        }
        memset(&outOrigin, 0, sizeof(outOrigin));
      }
      ++v10;
      p_obj += 178;
    }
    while ( v10 < scene.sceneDObjCount );
    v9 = 0;
  }
  if ( !scene.sceneDObjModelCountValidRead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 1114, ASSERT_TYPE_ASSERT, "(scene.sceneDObjModelCountValidRead)", (const char *)&queryFormat, "scene.sceneDObjModelCountValidRead") )
    __debugbreak();
  v14 = 0;
  if ( scene.sceneDObjModelCount > 0 )
  {
    v15 = (char *)scene.sceneModel + 124;
    do
    {
      v16 = (*((_DWORD *)v15 - 1) >> 10) & 0xFFF;
      if ( (_DWORD)v16 == gfxCfg.entnumNone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 1122, ASSERT_TYPE_ASSERT, "(entnum != gfxCfg.entnumNone)", (const char *)&queryFormat, "entnum != gfxCfg.entnumNone") )
        __debugbreak();
      v8[v16] = 2;
      if ( (*v15 & 0x28) == 0 && R_DynamicLightFrustumTestBox(v7, (const Bounds *)(v15 - 92)) )
        v8[v16] = 1;
      ++v14;
      v15 += 152;
    }
    while ( v14 < scene.sceneDObjModelCount );
  }
  if ( scene.sceneBrushCount > 0 )
  {
    p_renderFlags = &scene.sceneBrush[0].renderFlags;
    do
    {
      v18 = *((unsigned __int16 *)p_renderFlags - 36);
      v8[v18] = 2;
      if ( (*p_renderFlags & 0x20000) == 0 )
        v8[v18] = !R_DynamicLightFrustumTestBox(v7, *((const Bounds **)p_renderFlags - 8)) + 1;
      ++v9;
      p_renderFlags += 22;
    }
    while ( v9 < scene.sceneBrushCount );
  }
}

/*
==============
R_AddPrimaryLightSpotShadowDynEnts
==============
*/
void R_AddPrimaryLightSpotShadowDynEnts(LocalClientNum_t localClientNum, unsigned int primaryLightIndex, unsigned int spotShadowIndex, const GfxLight *light)
{
  __int64 v4; 
  __int64 v5; 
  volatile int v6; 
  unsigned int v7; 
  volatile int v8; 
  unsigned __int8 *v9; 
  __int64 v10; 
  unsigned __int16 dynEntClientId; 
  unsigned __int16 v13; 
  DynEntityClient *v14; 
  unsigned __int8 *v15; 
  __int64 v16; 
  unsigned __int16 v17; 
  unsigned __int16 v18; 
  __int64 v19; 
  __int64 v20; 
  GfxSceneDynModel *v21; 
  __int64 v22; 

  v4 = spotShadowIndex + 4;
  v5 = localClientNum;
  v6 = 0;
  v22 = (unsigned int)v4;
  v7 = primaryLightIndex;
  v8 = 0;
  v9 = &rgp.world->dpvsDyn.dynEntVisData[0][v4][localClientNum * rgp.world->dpvsDyn.dynEntClientCount[0]];
  if ( scene.sceneDynModelCount > 0 )
  {
    v10 = 0i64;
    do
    {
      v21 = &rgp.world->sceneDynModel[v10];
      dynEntClientId = v21->dynEntClientId;
      *v9 = 2;
      if ( R_IsDynEntClientVisibleToPrimaryLight((LocalClientNum_t)v5, dynEntClientId, DYNENT_BASIS_MODEL, primaryLightIndex) )
      {
        if ( (unsigned int)v5 >= 2 )
        {
          LODWORD(v20) = 2;
          LODWORD(v19) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v19, v20) )
            __debugbreak();
        }
        v13 = g_dynEntClientEntsAllocCount[v5][0];
        if ( dynEntClientId >= v13 )
        {
          LODWORD(v20) = v13;
          LODWORD(v19) = dynEntClientId;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", v19, v20) )
            __debugbreak();
        }
        if ( !g_dynEntClientLists[v5][0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
          __debugbreak();
        v14 = &g_dynEntClientLists[v5][0][dynEntClientId];
        if ( (v14->flags & 0x408) == 0 )
        {
          if ( !v14->activeModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 996, ASSERT_TYPE_ASSERT, "(dynEntClient->activeModel)", (const char *)&queryFormat, "dynEntClient->activeModel") )
            __debugbreak();
          if ( ((*(_DWORD *)&v21->info >> 1) & 0xFu) < v14->activeModel->shadowCutoffLod )
            *v9 = 1;
        }
      }
      ++v8;
      ++v10;
      ++v9;
    }
    while ( v8 < scene.sceneDynModelCount );
    v7 = primaryLightIndex;
    v6 = 0;
  }
  v15 = &rgp.world->dpvsDyn.dynEntVisData[1][v22][(unsigned int)(v5 * rgp.world->dpvsDyn.dynEntClientCount[1])];
  if ( scene.sceneDynBrushCount > 0 )
  {
    v16 = 0i64;
    do
    {
      v17 = rgp.world->sceneDynBrush[v16].dynEntClientId;
      *v15 = 2;
      if ( R_IsDynEntClientVisibleToPrimaryLight((LocalClientNum_t)v5, v17, DYNENT_BASIS_MODEL, v7) )
      {
        if ( (unsigned int)v5 >= 2 )
        {
          LODWORD(v20) = 2;
          LODWORD(v19) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v19, v20) )
            __debugbreak();
        }
        v18 = g_dynEntClientEntsAllocCount[v5][0];
        if ( v17 >= v18 )
        {
          LODWORD(v20) = v18;
          LODWORD(v19) = v17;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", v19, v20) )
            __debugbreak();
        }
        if ( !g_dynEntClientLists[v5][0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
          __debugbreak();
        if ( (g_dynEntClientLists[v5][0][v17].flags & 0x408) == 0 )
          *v15 = 1;
      }
      ++v6;
      ++v16;
      ++v15;
    }
    while ( v6 < scene.sceneDynBrushCount );
  }
}

/*
==============
R_AddPrimaryLightSpotShadowModelEntities
==============
*/
void R_AddPrimaryLightSpotShadowModelEntities(LocalClientNum_t localClientNum, unsigned int primaryLightIndex, unsigned int spotShadowIndex, const GfxLight *light)
{
  volatile int v4; 
  int v7; 
  unsigned __int8 *v8; 
  _DWORD *v9; 
  __int64 v10; 
  int v11; 
  _DWORD *v12; 
  __int64 v13; 
  unsigned int *p_renderFlags; 
  __int64 v15; 
  __int64 data[2]; 
  unsigned int v17; 
  unsigned int v18; 

  v4 = 0;
  v17 = primaryLightIndex;
  data[0] = 0i64;
  v18 = spotShadowIndex;
  data[1] = (__int64)light;
  v7 = 0;
  v8 = scene.dpvs.entVisData[spotShadowIndex + 4];
  if ( scene.sceneDObjCount > 0 )
  {
    v9 = (_DWORD *)((char *)scene.sceneDObj + 1388);
    do
    {
      v10 = (*(v9 - 1) >> 10) & 0xFFF;
      if ( (_DWORD)v10 == gfxCfg.entnumNone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 1182, ASSERT_TYPE_ASSERT, "(entnum != gfxCfg.entnumNone)", (const char *)&queryFormat, "entnum != gfxCfg.entnumNone") )
        __debugbreak();
      v8[v10] = 2;
      if ( (*v9 & 0x20028) == 0 )
      {
        if ( R_IsEntityVisibleToPrimaryLight(localClientNum, v10, primaryLightIndex) )
        {
          data[0] = (__int64)(v9 - 347);
          if ( !Sys_TryAddWorkerCmd(WRKCMD_SPOT_SHADOW_ENT, data) )
            R_WarnOncePerFrame(R_WARN_SPOT_SHADOW_ENTS);
        }
      }
      ++v7;
      v9 += 356;
    }
    while ( v7 < scene.sceneDObjCount );
    v4 = 0;
  }
  if ( !scene.sceneDObjModelCountValidRead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 1205, ASSERT_TYPE_ASSERT, "(scene.sceneDObjModelCountValidRead)", (const char *)&queryFormat, "scene.sceneDObjModelCountValidRead") )
    __debugbreak();
  v11 = 0;
  if ( scene.sceneDObjModelCount > 0 )
  {
    v12 = (_DWORD *)((char *)scene.sceneModel + 124);
    do
    {
      v13 = (*(v12 - 1) >> 10) & 0xFFF;
      if ( (_DWORD)v13 == gfxCfg.entnumNone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 1213, ASSERT_TYPE_ASSERT, "(entnum != gfxCfg.entnumNone)", (const char *)&queryFormat, "entnum != gfxCfg.entnumNone") )
        __debugbreak();
      v8[v13] = 2;
      if ( (*v12 & 0x20028) == 0 && R_IsEntityVisibleToPrimaryLight(localClientNum, v13, primaryLightIndex) )
        v8[v13] = 1;
      ++v11;
      v12 += 38;
    }
    while ( v11 < scene.sceneDObjModelCount );
    v4 = 0;
  }
  if ( scene.sceneBrushCount > 0 )
  {
    p_renderFlags = &scene.sceneBrush[0].renderFlags;
    do
    {
      v15 = *((unsigned __int16 *)p_renderFlags - 36);
      if ( (_DWORD)v15 == gfxCfg.entnumNone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 1233, ASSERT_TYPE_ASSERT, "(entnum != gfxCfg.entnumNone)", (const char *)&queryFormat, "entnum != gfxCfg.entnumNone") )
        __debugbreak();
      v8[v15] = 2;
      if ( (*p_renderFlags & 0x20000) == 0 )
      {
        if ( R_IsEntityVisibleToPrimaryLight(localClientNum, v15, primaryLightIndex) )
          v8[v15] = 1;
      }
      ++v4;
      p_renderFlags += 22;
    }
    while ( v4 < scene.sceneBrushCount );
  }
}

/*
==============
R_AddSpotShadowDynEnts
==============
*/
void R_AddSpotShadowDynEnts(LocalClientNum_t localClientNum)
{
  GfxBackEndData *v1; 
  unsigned int i; 
  __int64 sceneLightIndex; 
  const GfxLight *v5; 

  v1 = frontEndDataOut;
  for ( i = 0; i < v1->spotShadowUpdateCount; ++i )
  {
    sceneLightIndex = v1->spotShadowUpdates[i].sceneLightIndex;
    v5 = &v1->sceneLights[sceneLightIndex];
    if ( v1->sceneLights[sceneLightIndex].needsDynamicShadows )
    {
      if ( (unsigned int)sceneLightIndex >= rgp.world->primaryLightCount )
        R_AddDynamicLightSpotShadowDynEnts(localClientNum, sceneLightIndex, i, v5);
      else
        R_AddPrimaryLightSpotShadowDynEnts(localClientNum, sceneLightIndex, i, v5);
      v1 = frontEndDataOut;
    }
  }
}

/*
==============
R_AddSpotShadowEntCmd
==============
*/
void R_AddSpotShadowEntCmd(const void *const data)
{
  GfxSceneEntity *v2; 
  const DObjAnimMat *updated; 
  bool v4; 
  const cpose_t *pose; 
  __int64 v6; 
  GfxSceneEntity *pLocalSceneEnt; 
  DObj *pObj[2]; 
  Bounds outBounds; 

  pObj[1] = (DObj *)-2i64;
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 863, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  v2 = *(GfxSceneEntity **)data;
  updated = R_UpdateSceneEntBounds(*(GfxSceneEntity **)data, &pLocalSceneEnt, (const DObj **)pObj, 1);
  if ( updated )
  {
    if ( !pLocalSceneEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 879, ASSERT_TYPE_ASSERT, "(localSceneEnt)", (const char *)&queryFormat, "localSceneEnt") )
      __debugbreak();
    if ( !*((_QWORD *)data + 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 882, ASSERT_TYPE_ASSERT, "(light)", (const char *)&queryFormat, "light") )
      __debugbreak();
    GfxSceneEntity_GetBounds(&v2->cull, &outBounds);
    v4 = R_SceneLightFrustumTestBox(*((_DWORD *)data + 4), &outBounds);
    pose = pLocalSceneEnt->info.pose;
    if ( v4 )
    {
      CG_CullIn(pose);
      R_SkinSceneDObj(v2, pLocalSceneEnt, pObj[0], updated, GfxViewDomain_World);
      if ( *((_DWORD *)data + 5) >= 8u )
      {
        LODWORD(v6) = *((_DWORD *)data + 5);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 903, ASSERT_TYPE_ASSERT, "(unsigned)( cmd->spotShadowIndex ) < (unsigned)( R_SPOTSHADOW_UPDATE_PER_FRAME_LIMIT )", "cmd->spotShadowIndex doesn't index R_SPOTSHADOW_UPDATE_PER_FRAME_LIMIT\n\t%i not in [0, %i)", v6, 8) )
          __debugbreak();
      }
      R_AddSceneDObj((*((_DWORD *)pLocalSceneEnt + 346) >> 10) & 0xFFF, *((_DWORD *)data + 5) + 4);
    }
    else
    {
      CG_UsedDObjCalcPose(pose);
    }
    memset(&outBounds, 0, sizeof(outBounds));
  }
  else if ( pLocalSceneEnt )
  {
    CG_UsedDObjCalcPose(pLocalSceneEnt->info.pose);
  }
}

/*
==============
R_AddSpotShadowUpdateForSceneLight
==============
*/
void R_AddSpotShadowUpdateForSceneLight(GfxBackEndData *data, GfxViewInfo *viewInfo, unsigned int sceneLightIndex, int castDynamicShadows)
{
  __int64 v4; 
  unsigned __int8 type; 
  __int64 spotShadowUpdateCount; 
  __int64 v9; 
  int needsDynamicShadows; 
  bool v11; 
  int v12; 
  unsigned int primaryLightCount; 
  unsigned int v14; 
  R_SpotShadow_ActiveCacheEntry *ActiveCacheEntryForSceneLight; 
  R_SpotShadow_ActiveCacheEntry *active; 
  float v17; 
  float v18; 
  __m256i v19; 
  R_SpotShadow_ActiveCacheEntry *v20; 
  R_SpotShadow_ActiveCacheEntry *v21; 
  R_SpotShadow_ActiveCacheEntry *prev; 
  R_SpotShadow_ActiveCacheEntry *mostRottenEntry; 
  R_SpotShadow_StaleCacheEntry *StaleCacheEntryForSceneLight; 
  __m256i *v25; 
  float v26; 
  float v27; 
  __m256i v28; 
  const GfxLight *v29; 
  signed int clientIndex; 
  __int64 v31; 
  __int64 v32; 
  GfxMatrix lookupMatrix; 
  int v35; 
  int v36; 
  int v37; 
  int v38; 

  v4 = sceneLightIndex;
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 1255, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( (unsigned int)v4 >= 0x1984 )
  {
    LODWORD(v31) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 1257, ASSERT_TYPE_ASSERT, "(unsigned)( sceneLightIndex ) < (unsigned)( (6500 + I_max( ( 4 + 1 ), I_max( 32, 32 ) )) )", "sceneLightIndex doesn't index GFX_MAX_SCENE_LIGHTS\n\t%i not in [0, %i)", v31, 6532) )
      __debugbreak();
  }
  type = data->sceneLights[v4].type;
  if ( (unsigned __int8)(type - 2) > 1u )
  {
    LODWORD(v31) = type;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 1261, ASSERT_TYPE_ASSERT, "( ( light->type == 2 || light->type == 3 ) )", "( light->type ) = %i", v31) )
      __debugbreak();
  }
  if ( !data->sceneLights[v4].canUseShadowMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 1262, ASSERT_TYPE_ASSERT, "(light->canUseShadowMap)", (const char *)&queryFormat, "light->canUseShadowMap") )
    __debugbreak();
  spotShadowUpdateCount = data->spotShadowUpdateCount;
  if ( (unsigned int)spotShadowUpdateCount >= 8 )
  {
    LODWORD(v32) = 8;
    LODWORD(v31) = data->spotShadowUpdateCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 1265, ASSERT_TYPE_ASSERT, "(unsigned)( spotShadowUpdateIndex ) < (unsigned)( R_SPOTSHADOW_UPDATE_PER_FRAME_LIMIT )", "spotShadowUpdateIndex doesn't index R_SPOTSHADOW_UPDATE_PER_FRAME_LIMIT\n\t%i not in [0, %i)", v31, v32) )
      __debugbreak();
  }
  ++data->spotShadowUpdateCount;
  v9 = spotShadowUpdateCount;
  data->spotShadowUpdates[v9].sceneLightIndex = v4;
  needsDynamicShadows = data->sceneLights[v4].needsDynamicShadows;
  data->spotShadowUpdates[v9].supportsDynamicShadows = needsDynamicShadows;
  if ( !castDynamicShadows || (v11 = needsDynamicShadows == 0, v12 = 1, v11) )
    v12 = 0;
  data->spotShadowUpdates[v9].needsDynamicShadows = v12;
  primaryLightCount = rgp.world->primaryLightCount;
  if ( (unsigned int)v4 >= primaryLightCount )
    R_SceneLightIndexToDynLightIndex(v4);
  *(_QWORD *)&data->spotShadowUpdates[v9].viewportParms.viewport.x = 0i64;
  v35 = 512;
  v36 = 512;
  v37 = 768;
  v38 = 1024;
  v14 = 2 * *(&v35 + (int)rg.shadowMapResolutionIndex);
  v35 = 512;
  data->spotShadowUpdates[v9].viewportParms.viewport.width = v14;
  v36 = 512;
  v37 = 768;
  v38 = 1024;
  data->spotShadowUpdates[v9].viewportParms.viewport.height = 2 * *(&v35 + (int)rg.shadowMapResolutionIndex);
  R_SetViewParmsForLight(&data->sceneLights[v4], &data->spotShadowUpdates[v9].viewportParms.viewParms);
  if ( (unsigned int)v4 < primaryLightCount && data->sceneLights[v4].needsDynamicShadows && (*((_DWORD *)&viewInfo->viewportFeatures + 11) & 0x10000) != 0 )
  {
    ActiveCacheEntryForSceneLight = R_SpotShadow_GetActiveCacheEntryForSceneLight(v4);
    if ( ActiveCacheEntryForSceneLight )
    {
      data->spotShadowUpdates[v9].active = ActiveCacheEntryForSceneLight;
      data->spotShadowUpdates[v9].activeStatus = 4;
      R_SpotShadow_ActiveCacheEntry::Unrot(ActiveCacheEntryForSceneLight);
    }
    else if ( data->spotShadowUpdates[v9].needsDynamicShadows )
    {
      data->spotShadowUpdates[v9].active = R_SpotShadow_AllocateActiveCacheEntryForSceneLight(v4);
      data->spotShadowUpdates[v9].activeStatus = 1;
      R_GetSpotShadowLookupMatrix(&data->spotShadowUpdates[v9].viewportParms.viewParms, &lookupMatrix);
      active = data->spotShadowUpdates[v9].active;
      v17 = data->spotShadowUpdates[v9].viewportParms.viewParms.camera.zPlanes[3];
      v18 = data->spotShadowUpdates[v9].viewportParms.viewParms.camera.zPlanes[2];
      v19 = *(__m256i *)lookupMatrix.m.row2.v;
      *(__m256i *)active->lookupMatrix.m.m[0].v = *(__m256i *)lookupMatrix.m.m[0].v;
      *(__m256i *)active->lookupMatrix.m.row2.v = v19;
      active->zNear = v18;
      active->zFar = v17;
    }
    else
    {
      data->spotShadowUpdates[v9].active = NULL;
      data->spotShadowUpdates[v9].activeStatus = 0;
    }
  }
  else
  {
    data->spotShadowUpdates[v9].active = NULL;
    data->spotShadowUpdates[v9].activeStatus = 0;
    v20 = R_SpotShadow_GetActiveCacheEntryForSceneLight(v4);
    v21 = v20;
    if ( v20 )
    {
      R_SpotShadow_ActiveCacheEntry::Unrot(v20);
      if ( s_R_SpotShadow_Storage.activeCache.leastRottenEntry != v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 615, ASSERT_TYPE_ASSERT, "(s_R_SpotShadow_Storage.activeCache.leastRottenEntry == entry)", (const char *)&queryFormat, "s_R_SpotShadow_Storage.activeCache.leastRottenEntry == entry") )
        __debugbreak();
      if ( v21->next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 616, ASSERT_TYPE_ASSERT, "(entry->next == nullptr)", (const char *)&queryFormat, "entry->next == nullptr") )
        __debugbreak();
      prev = v21->prev;
      if ( prev )
      {
        prev->next = NULL;
        prev = v21->prev;
      }
      s_R_SpotShadow_Storage.activeCache.leastRottenEntry = prev;
      mostRottenEntry = s_R_SpotShadow_Storage.activeCache.mostRottenEntry;
      if ( s_R_SpotShadow_Storage.activeCache.mostRottenEntry == v21 )
        mostRottenEntry = NULL;
      s_R_SpotShadow_Storage.activeCache.mostRottenEntry = mostRottenEntry;
      v21->prev = NULL;
      v21->next = s_R_SpotShadow_Storage.activeCache.firstFreeEntry;
      s_R_SpotShadow_Storage.activeCache.firstFreeEntry = v21;
      s_R_SpotShadow_Storage.activeCache.sceneLightToActiveCacheMapping[v4] = 16;
      v21->sceneLightIndex = 6532;
    }
  }
  StaleCacheEntryForSceneLight = R_SpotShadow_GetStaleCacheEntryForSceneLight(v4);
  if ( StaleCacheEntryForSceneLight )
  {
    if ( (unsigned int)v4 >= primaryLightCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 1345, ASSERT_TYPE_ASSERT, "(!isDynamicLight)", (const char *)&queryFormat, "!isDynamicLight") )
      __debugbreak();
  }
  else
  {
    StaleCacheEntryForSceneLight = R_SpotShadow_AllocateStaleCacheEntryForSceneLight(v4);
    if ( !StaleCacheEntryForSceneLight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 1352, ASSERT_TYPE_ASSERT, "(staleCacheEntry)", (const char *)&queryFormat, "staleCacheEntry") )
      __debugbreak();
    v25 = (__m256i *)data->spotShadowUpdates[v9].active;
    if ( v25 )
    {
      v26 = data->spotShadowUpdates[v9].viewportParms.viewParms.camera.zPlanes[3];
      v27 = data->spotShadowUpdates[v9].viewportParms.viewParms.camera.zPlanes[2];
      *(__m256i *)StaleCacheEntryForSceneLight->lookupMatrix.m.m[0].v = *v25;
      v28 = v25[1];
    }
    else
    {
      R_GetSpotShadowLookupMatrix(&data->spotShadowUpdates[v9].viewportParms.viewParms, &lookupMatrix);
      v26 = data->spotShadowUpdates[v9].viewportParms.viewParms.camera.zPlanes[3];
      v27 = data->spotShadowUpdates[v9].viewportParms.viewParms.camera.zPlanes[2];
      v28 = *(__m256i *)lookupMatrix.m.row2.v;
      *(__m256i *)StaleCacheEntryForSceneLight->lookupMatrix.m.m[0].v = *(__m256i *)lookupMatrix.m.m[0].v;
    }
    StaleCacheEntryForSceneLight->zFar = v26;
    StaleCacheEntryForSceneLight->zNear = v27;
    *(__m256i *)StaleCacheEntryForSceneLight->lookupMatrix.m.row2.v = v28;
  }
  StaleCacheEntryForSceneLight->staleness = data->spotShadowUpdates[v9].needsDynamicShadows != 0;
  v11 = data->spotShadowUpdates[v9].needsDynamicShadows == 0;
  data->spotShadowUpdates[v9].stale = StaleCacheEntryForSceneLight;
  if ( !v11 )
  {
    v29 = &data->sceneLights[v4];
    clientIndex = viewInfo->clientIndex;
    if ( (unsigned int)v4 < primaryLightCount )
      R_AddPrimaryLightSpotShadowModelEntities((LocalClientNum_t)clientIndex, v4, spotShadowUpdateCount, v29);
    else
      R_AddDynamicLightSpotShadowModelEntities(clientIndex, v4, spotShadowUpdateCount, v29);
  }
}

/*
==============
R_DrawSpotShadowDebug
==============
*/
void R_DrawSpotShadowDebug(GfxBackEndData *data, GfxViewInfo *viewInfo, const unsigned int *motionBits)
{
  __int64 spotShadowCount; 
  int integer; 
  unsigned int v6; 
  unsigned int *p_arraySliceIndex; 
  __int64 v8; 
  __int64 v9; 
  unsigned int v10; 
  __int64 *v11; 
  __int64 v12; 
  __int64 v13; 
  GfxBackEndData *v14; 
  unsigned int *v15; 
  __int64 v16; 
  int v17; 
  unsigned int primaryLightCount; 
  unsigned int v19; 
  const GfxLight *v20; 
  bool v21; 
  int v22; 
  unsigned int v23; 
  unsigned __int8 needsDynamicShadows; 
  const char *v25; 
  const char *v26; 
  unsigned int flags; 
  char *v28; 
  bool v29; 
  char *v30; 
  char *v31; 
  __int64 v32; 
  GfxLightViewFrustum *lightViewFrustums; 
  unsigned int v34; 
  const vec4_t *v35; 
  bool v36; 
  DebugGlobals *p_debugGlobals; 
  unsigned __int16 ranking1; 
  __int64 ranking0; 
  double score; 
  const char *v41; 
  char *fmt; 
  __int64 v43; 
  __int64 v44; 
  bool v45; 
  bool v46; 
  DebugGlobals *debugGlobalsEntry; 
  unsigned __int8 v48; 
  unsigned int *v49; 
  __int64 v52; 
  GfxViewParms viewParms; 
  __int64 v54[8]; 

  spotShadowCount = data->spotShadowCount;
  if ( (unsigned int)spotShadowCount > 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 1618, ASSERT_TYPE_ASSERT, "(spotShadowCount <= ( sizeof( *array_counter( data->spotShadows ) ) + 0 ))", (const char *)&queryFormat, "spotShadowCount <= ARRAY_COUNT( data->spotShadows )") )
    __debugbreak();
  if ( data->spotShadowUpdateCount > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 1621, ASSERT_TYPE_ASSERT, "(spotShadowUpdateCount <= ( sizeof( *array_counter( data->spotShadowUpdates ) ) + 0 ))", (const char *)&queryFormat, "spotShadowUpdateCount <= ARRAY_COUNT( data->spotShadowUpdates )") )
    __debugbreak();
  integer = sm_showOverlayFocus->current.integer;
  v48 = integer;
  if ( (integer < 0 || (unsigned int)integer > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)integer, "signed", integer) )
    __debugbreak();
  memset(v54, 0, sizeof(v54));
  v6 = data->spotShadowCount;
  if ( v6 )
  {
    p_arraySliceIndex = &data->spotShadows[0].arraySliceIndex;
    v8 = v6;
    do
    {
      v9 = *p_arraySliceIndex;
      p_arraySliceIndex += 24;
      *((_BYTE *)v54 + v9) = -1;
      --v8;
    }
    while ( v8 );
  }
  v10 = 0;
  v11 = v54;
  v12 = 64i64;
  do
  {
    if ( *(_BYTE *)v11 )
    {
      v13 = v10++;
      if ( (unsigned int)v13 > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)v13, "unsigned", v13) )
        __debugbreak();
      *(_BYTE *)v11 = v13;
    }
    v11 = (__int64 *)((char *)v11 + 1);
    --v12;
  }
  while ( v12 );
  v14 = data;
  v45 = r_debugDrawLightsFilterShadowCasters->current.integer != 3;
  v46 = r_debugDrawLightsFilterShadowCasters->current.integer != 2;
  if ( (_DWORD)spotShadowCount )
  {
    v15 = &data->spotShadows[0].arraySliceIndex;
    debugGlobalsEntry = &data->debugGlobals;
    v49 = &data->spotShadows[0].arraySliceIndex;
    v52 = spotShadowCount;
    do
    {
      v16 = *(v15 - 1);
      if ( (unsigned int)v16 >= v14->sceneLightCount )
      {
        LODWORD(v44) = v14->sceneLightCount;
        LODWORD(v43) = *(v15 - 1);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 1664, ASSERT_TYPE_ASSERT, "(unsigned)( sceneLightIndex ) < (unsigned)( data->sceneLightCount )", "sceneLightIndex doesn't index data->sceneLightCount\n\t%i not in [0, %i)", v43, v44) )
          __debugbreak();
      }
      v17 = 0;
      primaryLightCount = rgp.world->primaryLightCount;
      v19 = v16;
      v20 = &v14->sceneLights[v16];
      v21 = 0;
      if ( (unsigned int)v16 < primaryLightCount )
      {
        v22 = v16 - rgp.world->lastSunPrimaryLightIndex;
        if ( !motionBits && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
          __debugbreak();
        v23 = motionBits[(v22 - 1i64) >> 5];
        v17 = _bittest((const int *)&v23, ((_BYTE)v22 - 1) & 0x1F);
      }
      else
      {
        v19 = R_SceneLightIndexToDynLightIndex(v16);
      }
      needsDynamicShadows = v20->needsDynamicShadows;
      v25 = nameTagBuf;
      if ( (unsigned int)v16 < primaryLightCount )
      {
        if ( needsDynamicShadows )
        {
          v26 = "Pm(%d)";
          if ( !v17 )
            v26 = "P(%d)";
          j_sprintf(nameTagBuf, v26, v19);
          flags = v20->flags;
          if ( (flags & 0x2000) != 0 )
          {
            v28 = &nameTagBuf[-1];
            do
              v29 = *++v28 == 0;
            while ( !v29 );
            *(double *)v28 = *(double *)"_UpdateDyn";
            strcpy(v28 + 8, "yn");
            flags = v20->flags;
          }
          if ( (flags & 0x200) != 0 )
          {
            v30 = &nameTagBuf[-1];
            do
              v29 = *++v30 == 0;
            while ( !v29 );
            *(double *)v30 = *(double *)"_CachedDyn";
            strcpy(v30 + 8, "yn");
            flags = data->sceneLights[v16].flags;
          }
          if ( (flags & 0x400) != 0 )
          {
            v31 = &nameTagBuf[-1];
            do
              v29 = *++v31 == 0;
            while ( !v29 );
            *(double *)v31 = *(double *)"_SkipDyn";
            v31[8] = aSkipdyn[8];
          }
          v32 = v16;
          lightViewFrustums = rgp.world->lightViewFrustums;
          v21 = lightViewFrustums && lightViewFrustums[v16].planeCount;
          goto LABEL_57;
        }
        j_sprintf(nameTagBuf, "Ps(%d)", v19);
      }
      else
      {
        v25 = "D";
        if ( !needsDynamicShadows )
          v25 = "Ds";
      }
      v32 = v16;
LABEL_57:
      R_SetViewParmsForLight(v20, &viewParms);
      v34 = v20->flags;
      if ( (v34 & 0x1000) != 0 )
      {
        v35 = &colorGreen;
      }
      else if ( (v34 & 0x800) != 0 )
      {
        v35 = &colorYellow;
      }
      else if ( (v34 & 0x200) != 0 )
      {
        v35 = &colorRed;
      }
      else if ( (v34 & 0x400) != 0 )
      {
        v35 = &colorMdRed;
      }
      else
      {
        v35 = &colorDkRed;
        if ( (v34 & 0x100) == 0 )
          v35 = &colorDkGrey;
      }
      if ( v48 && v48 != *((unsigned __int8 *)v54 + *v49) + 1 )
        goto LABEL_75;
      v36 = v45;
      if ( v20->needsDynamicShadows )
        v36 = v46;
      if ( v36 )
      {
        p_debugGlobals = &data->debugGlobals;
        if ( v21 )
          R_AddDebugLightProxyViewFrustum(debugGlobalsEntry, &rgp.world->lightViewFrustums[v32], v35);
        else
          R_AddDebugFrustumColor(debugGlobalsEntry, &viewParms, v35, v35);
      }
      else
      {
LABEL_75:
        p_debugGlobals = &data->debugGlobals;
      }
      ranking1 = g_lightScore[v32].ranking1;
      ranking0 = g_lightScore[v32].ranking0;
      score = g_lightScore[v32].score;
      if ( ranking1 == 255 )
      {
        v41 = j_va("%s:%.3f:%d", v25, score, ranking0);
      }
      else
      {
        LODWORD(fmt) = ranking1;
        v41 = j_va("%s:%.3f:%d-%d", v25, score, ranking0, fmt);
      }
      R_AddDebugString(p_debugGlobals, &viewParms.camera.origin, v35, 16.0, v41);
      v14 = data;
      v15 = v49 + 24;
      v29 = v52-- == 1;
      v49 += 24;
    }
    while ( !v29 );
  }
}

/*
==============
R_EmitSpotShadowMapDrawSurfsForDynamicObjects
==============
*/
void R_EmitSpotShadowMapDrawSurfsForDynamicObjects(GfxViewInfo *viewInfo, unsigned int spotShadowUpdateIndex)
{
  Sys_ProfBeginNamedEvent(0xFF708090, "R_EmitSpotShadowMapDrawSurfsForDynamicObjects");
  Profile_Begin(62);
  R_EmitSpotShadowMapDrawSurfs_Internal(viewInfo, spotShadowUpdateIndex, 0);
  Profile_EndInternal(NULL);
  Sys_ProfEndNamedEvent();
}

/*
==============
R_EmitSpotShadowMapDrawSurfsForStaticObjects
==============
*/
void R_EmitSpotShadowMapDrawSurfsForStaticObjects(GfxViewInfo *viewInfo, unsigned int spotShadowUpdateIndex)
{
  Sys_ProfBeginNamedEvent(0xFF708090, "R_EmitSpotShadowMapDrawSurfsForStaticObjects");
  Profile_Begin(61);
  R_EmitSpotShadowMapDrawSurfs_Internal(viewInfo, spotShadowUpdateIndex, 1);
  Profile_EndInternal(NULL);
  Sys_ProfEndNamedEvent();
}

/*
==============
R_EmitSpotShadowMapDrawSurfs_Internal
==============
*/
void R_EmitSpotShadowMapDrawSurfs_Internal(GfxViewInfo *viewInfo, unsigned int spotShadowUpdateIndex, bool isStaticGeo)
{
  signed int v6; 

  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 1507, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  if ( frontEndDataOut->spotShadowUpdateCount > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 1508, ASSERT_TYPE_ASSERT, "(frontEndDataOut->spotShadowUpdateCount <= R_SPOTSHADOW_UPDATE_PER_FRAME_LIMIT)", (const char *)&queryFormat, "frontEndDataOut->spotShadowUpdateCount <= R_SPOTSHADOW_UPDATE_PER_FRAME_LIMIT") )
    __debugbreak();
  v6 = spotShadowUpdateIndex + 8 * !isStaticGeo + 29;
  if ( !isStaticGeo )
    R_EmitDrawSurfList(*(const GfxDrawSurf **)&scene.codeSurfUser[2 * spotShadowUpdateIndex - 16], *((_DWORD *)&scene.drawSurfs[-4] + spotShadowUpdateIndex), &viewInfo->drawList[v6]);
  R_AddDrawCall(viewInfo, NULL, (GfxDrawListType)v6, 0x5Du);
}

/*
==============
R_GenerateSortedPrimaryLightSpotShadowDrawSurfs
==============
*/
void R_GenerateSortedPrimaryLightSpotShadowDrawSurfs(GfxViewInfo *viewInfo, unsigned int spotShadowUpdateIndex, unsigned int sceneLightIndex)
{
  __int64 v5; 
  char *v6; 
  int v7; 
  int v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v12; 
  unsigned int primaryLightCount; 

  v5 = spotShadowUpdateIndex;
  if ( sceneLightIndex >= rgp.world->primaryLightCount )
  {
    primaryLightCount = rgp.world->primaryLightCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 1407, ASSERT_TYPE_ASSERT, "(unsigned)( sceneLightIndex ) < (unsigned)( rgp.world->primaryLightCount )", "sceneLightIndex doesn't index rgp.world->primaryLightCount\n\t%i not in [0, %i)", sceneLightIndex, primaryLightCount) )
      __debugbreak();
  }
  if ( (unsigned int)v5 >= frontEndDataOut->spotShadowUpdateCount )
  {
    LODWORD(v12) = frontEndDataOut->spotShadowUpdateCount;
    LODWORD(v10) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 1408, ASSERT_TYPE_ASSERT, "(unsigned)( spotShadowUpdateIndex ) < (unsigned)( frontEndDataOut->spotShadowUpdateCount )", "spotShadowUpdateIndex doesn't index frontEndDataOut->spotShadowUpdateCount\n\t%i not in [0, %i)", v10, v12) )
      __debugbreak();
  }
  v6 = (char *)frontEndDataOut + 16832 * v5;
  v7 = *((_DWORD *)v6 + 238622);
  *((_DWORD *)v6 + 238618) = 0;
  *((_WORD *)v6 + 477238) = 0;
  if ( Dvar_GetInt_Internal_DebugName(DVARINT_r_forceSpotShadowUpdateBSP, "r_forceSpotShadowUpdateBSP") == sceneLightIndex )
  {
    *((_DWORD *)v6 + 238622) = 1;
    Com_Printf(8, "force bsp update for light %d at frame(%d)\n", sceneLightIndex, frontEndDataOut->frameCount);
    Dvar_SetInt_Internal(DVARINT_r_forceSpotShadowUpdateBSP, 0);
  }
  if ( Dvar_GetInt_Internal_DebugName(DVARINT_r_forceSpotShadowUpdateSModel, "r_forceSpotShadowUpdateSModel") == sceneLightIndex )
  {
    *((_DWORD *)v6 + 238622) = 2;
    Com_Printf(8, "force smodel update for light %d at frame(%d)\n", sceneLightIndex, frontEndDataOut->frameCount);
    Dvar_SetInt_Internal(DVARINT_r_forceSpotShadowUpdateSModel, 0);
  }
  v8 = *((_DWORD *)v6 + 238622);
  if ( v8 && v7 == v8 )
  {
    if ( !*((_QWORD *)v6 + 119310) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 1444, ASSERT_TYPE_ASSERT, "(spotShadowUpdate->active)", (const char *)&queryFormat, "spotShadowUpdate->active") )
      __debugbreak();
    R_CalcAllStaticModelSurfacesSpotShadowLodChange(viewInfo, v5, sceneLightIndex);
  }
  Sys_ProfBeginNamedEvent(0xFF708090, "bsp surfaces");
  R_AddAllBspDrawSurfacesSpotShadow(viewInfo, v5, sceneLightIndex);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFF708090, "static model surfaces");
  R_AddAllStaticModelSurfacesSpotShadow_Split(viewInfo, v5, sceneLightIndex);
  Sys_ProfEndNamedEvent();
  v9 = *((_QWORD *)v6 + 119308);
  if ( v9 )
  {
    *(_WORD *)(v9 + 98) = *((_WORD *)v6 + 477236);
    *(_WORD *)(*((_QWORD *)v6 + 119308) + 100i64) = *((_WORD *)v6 + 477237);
    *(_WORD *)(*((_QWORD *)v6 + 119308) + 102i64) = *((_WORD *)v6 + 477238);
  }
  Sys_ProfBeginNamedEvent(0xFF708090, "R_EmitSpotShadowMapDrawSurfsForStaticObjects");
  Profile_Begin(61);
  R_EmitSpotShadowMapDrawSurfs_Internal(viewInfo, v5, 1);
  Profile_EndInternal(NULL);
  Sys_ProfEndNamedEvent();
  if ( *((_DWORD *)v6 + 238614) )
  {
    Sys_ProfBeginNamedEvent(0xFF708090, "scene ent surfaces");
    R_AddAllSceneEntSurfacesSpotShadow(v5);
    Sys_ProfEndNamedEvent();
    Sys_ProfBeginNamedEvent(0xFF708090, "R_EmitSpotShadowMapDrawSurfsForDynamicObjects");
    Profile_Begin(62);
    R_EmitSpotShadowMapDrawSurfs_Internal(viewInfo, v5, 0);
    Profile_EndInternal(NULL);
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
R_GenerateSpotShadowDrawSurfs
==============
*/
void R_GenerateSpotShadowDrawSurfs(GfxViewInfo *viewInfo)
{
  unsigned int spotShadowUpdateCount; 
  unsigned int v3; 
  __int64 v4; 
  GfxBackEndData *v5; 
  unsigned int sceneLightIndex; 

  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 1556, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  spotShadowUpdateCount = frontEndDataOut->spotShadowUpdateCount;
  if ( spotShadowUpdateCount > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 1559, ASSERT_TYPE_ASSERT, "(spotShadowUpdateCount <= R_SPOTSHADOW_UPDATE_PER_FRAME_LIMIT)", (const char *)&queryFormat, "spotShadowUpdateCount <= R_SPOTSHADOW_UPDATE_PER_FRAME_LIMIT") )
    __debugbreak();
  v3 = 0;
  if ( spotShadowUpdateCount )
  {
    v4 = 0i64;
    do
    {
      v5 = frontEndDataOut;
      sceneLightIndex = frontEndDataOut->spotShadowUpdates[v4].sceneLightIndex;
      if ( sceneLightIndex >= rgp.world->primaryLightCount )
      {
        R_GetStaticGeoDynamicLightSurfs(viewInfo, v3);
        Sys_ProfBeginNamedEvent(0xFF708090, "R_EmitSpotShadowMapDrawSurfsForStaticObjects");
        Profile_Begin(61);
        R_EmitSpotShadowMapDrawSurfs_Internal(viewInfo, v3, 1);
        Profile_EndInternal(NULL);
        Sys_ProfEndNamedEvent();
        if ( v5->spotShadowUpdates[v4].needsDynamicShadows )
        {
          R_AddAllSceneEntSurfacesSpotShadow(v3);
          Sys_ProfBeginNamedEvent(0xFF708090, "R_EmitSpotShadowMapDrawSurfsForDynamicObjects");
          Profile_Begin(62);
          R_EmitSpotShadowMapDrawSurfs_Internal(viewInfo, v3, 0);
          Profile_EndInternal(NULL);
          Sys_ProfEndNamedEvent();
        }
      }
      else
      {
        R_GenerateSortedPrimaryLightSpotShadowDrawSurfs(viewInfo, v3, sceneLightIndex);
      }
      ++v3;
      ++v4;
    }
    while ( v3 < spotShadowUpdateCount );
  }
}

/*
==============
R_GetSpotShadowArrayImageDraw3D
==============
*/
R_RT_Image *R_GetSpotShadowArrayImageDraw3D()
{
  if ( s_R_SpotShadow_Storage.staleCache.arrayColorRt.m_surfaceID )
  {
    R_RT_Handle::GetSurface(&s_R_SpotShadow_Storage.staleCache.arrayColorRt);
  }
  else
  {
    if ( s_R_SpotShadow_Storage.staleCache.arrayColorRt.m_tracking.m_allocCounter != s_R_SpotShadow_Storage.staleCache.arrayColorRt.m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 672, ASSERT_TYPE_ASSERT, "(s_R_SpotShadow_Storage.staleCache.arrayColorRt.IsValid())", (const char *)&queryFormat, "s_R_SpotShadow_Storage.staleCache.arrayColorRt.IsValid()") )
      __debugbreak();
  }
  return &R_RT_Handle::GetSurface(&s_R_SpotShadow_Storage.staleCache.arrayColorRt)->m_image;
}

/*
==============
R_GetSpotShadowLookupMatrix
==============
*/
void R_GetSpotShadowLookupMatrix(const GfxViewParms *shadowViewParms, GfxMatrix *lookupMatrix)
{
  __m128 v2; 
  float v4; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  __m256i v23; 

  _YMM10 = *(__m256i *)shadowViewParms->viewProjectionMatrix.m.m[0].v;
  v4 = shadowViewParms->viewProjectionMatrix.m.m[0].v[0];
  v6 = shadowViewParms->viewProjectionMatrix.m.m[3].v[0];
  v7 = shadowViewParms->viewProjectionMatrix.m.m[1].v[1];
  v8 = shadowViewParms->viewProjectionMatrix.m.m[0].v[1];
  LODWORD(v9) = LODWORD(shadowViewParms->camera.origin.v[0]) ^ _xmm;
  LODWORD(v10) = LODWORD(shadowViewParms->camera.origin.v[2]) ^ _xmm;
  v23 = *(__m256i *)shadowViewParms->viewProjectionMatrix.m.row2.v;
  _XMM8 = v23.m256i_u32[0];
  LODWORD(v11) = LODWORD(shadowViewParms->camera.origin.v[1]) ^ _xmm;
  v20 = shadowViewParms->viewProjectionMatrix.m.m[2].v[1];
  v21 = shadowViewParms->viewProjectionMatrix.m.m[3].v[1];
  v22 = (float)((float)((float)(v11 * shadowViewParms->viewProjectionMatrix.m.m[1].v[2]) + (float)(v9 * shadowViewParms->viewProjectionMatrix.m.m[0].v[2])) + (float)(v10 * shadowViewParms->viewProjectionMatrix.m.m[2].v[2])) + shadowViewParms->viewProjectionMatrix.m.m[3].v[2];
  v12 = shadowViewParms->viewProjectionMatrix.m.m[1].v[0] * v11;
  v19 = (float)((float)((float)(v11 * shadowViewParms->viewProjectionMatrix.m.m[1].v[3]) + (float)(v9 * shadowViewParms->viewProjectionMatrix.m.m[0].v[3])) + (float)(v10 * shadowViewParms->viewProjectionMatrix.m.m[2].v[3])) + shadowViewParms->viewProjectionMatrix.m.m[3].v[3];
  v13 = _mm_shuffle_ps(v2, v2, 255).m128_f32[0];
  lookupMatrix->m.m[0].v[0] = (float)(v2.m128_f32[0] * 0.5) + (float)(v13 * 0.5);
  __asm
  {
    vextractf128 xmm0, ymm10, 1
    vextractf128 xmm12, ymm10, 1
  }
  _XMM12.m128_f32[0] = _mm_shuffle_ps(_XMM12, _XMM12, 255).m128_f32[0];
  lookupMatrix->m.m[1].v[0] = (float)(*(float *)&_XMM0 * 0.5) + (float)(_XMM12.m128_f32[0] * 0.5);
  _YMM8 = _YMM10;
  lookupMatrix->m.m[2].v[0] = (float)(0.5 * *(float *)v23.m256i_i32) + (float)(0.5 * *(float *)&v23.m256i_i32[3]);
  lookupMatrix->m.m[3].v[0] = (float)((float)((float)((float)(v12 + (float)(v4 * v9)) + (float)(*(float *)v23.m256i_i32 * v10)) + v6) + v19) * 0.5;
  lookupMatrix->m.m[0].v[1] = (float)(v13 * 0.5) - (float)(_mm_shuffle_ps((__m128)v23.m256i_u32[0], (__m128)v23.m256i_u32[0], 85).m128_f32[0] * 0.5);
  __asm { vextractf128 xmm2, ymm8, 1 }
  lookupMatrix->m.m[1].v[1] = (float)(_XMM12.m128_f32[0] * 0.5) - (float)(_mm_shuffle_ps(_XMM2, _XMM2, 85).m128_f32[0] * 0.5);
  lookupMatrix->m.m[2].v[1] = (float)(0.5 * *(float *)&v23.m256i_i32[3]) - (float)(0.5 * *(float *)&v23.m256i_i32[1]);
  lookupMatrix->m.m[3].v[1] = (float)(v19 * 0.5) - (float)((float)((float)((float)((float)(v7 * v11) + (float)(v8 * v9)) + (float)(v10 * v20)) + v21) * 0.5);
  __asm
  {
    vextractps dword ptr [rdx+8], xmm8, 2
    vextractf128 xmm1, ymm8, 1
    vextractps dword ptr [rdx+18h], xmm1, 2
  }
  lookupMatrix->m.m[2].v[2] = *(float *)&v23.m256i_i32[2];
  lookupMatrix->m.m[3].v[2] = v22;
  lookupMatrix->m.m[0].v[3] = v13;
  lookupMatrix->m.m[1].v[3] = _XMM12.m128_f32[0];
  lookupMatrix->m.m[2].v[3] = *(float *)&v23.m256i_i32[3];
  lookupMatrix->m.m[3].v[3] = v19;
}

/*
==============
R_SetViewParmsForLight
==============
*/
void R_SetViewParmsForLight(const GfxLight *light, GfxViewParms *viewParms)
{
  vec3_t *v2; 
  float v5; 
  vec3_t *p_up; 
  tmat33_t<vec3_t> *p_axis; 
  tmat33_t<vec3_t> *v8; 
  __int128 v9; 
  __int128 v10; 
  float cosHalfFovOuter; 
  double v15; 
  float v16; 
  float v17; 
  __int128 v18; 
  float bulbRadius; 
  __int128 v20; 
  float v24; 
  __int128 v25; 
  float v26; 
  float v27; 
  __int128 v28; 
  __int128 v32; 
  __int64 v34; 
  float v35; 

  v2 = &viewParms->camera.axis.m[1];
  viewParms->subpixelOffset = 0i64;
  viewParms->camera.axis.m[0].v[0] = COERCE_FLOAT(LODWORD(light->dir.v[0]) ^ _xmm);
  viewParms->camera.axis.m[0].v[1] = COERCE_FLOAT(LODWORD(light->dir.v[1]) ^ _xmm);
  viewParms->camera.axis.m[0].v[2] = COERCE_FLOAT(LODWORD(light->dir.v[2]) ^ _xmm);
  v5 = light->dir.v[1];
  p_up = &light->up;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v5 * p_up->v[1]) + (float)(p_up->v[0] * light->dir.v[0])) + (float)(light->dir.v[2] * p_up->v[2])) & _xmm) <= 0.99000001 )
  {
    Vec3Cross(p_up, viewParms->camera.axis.m, &viewParms->camera.axis.m[1]);
    v9 = LODWORD(v2->v[0]);
    v10 = v9;
    *(float *)&v10 = fsqrt((float)((float)(*(float *)&v9 * *(float *)&v9) + (float)(v2->v[1] * v2->v[1])) + (float)(v2->v[2] * v2->v[2]));
    _XMM4 = v10;
    __asm
    {
      vcmpless xmm0, xmm4, xmm8
      vblendvps xmm0, xmm4, xmm13, xmm0
    }
    v2->v[0] = *(float *)&v9 * (float)(1.0 / *(float *)&_XMM0);
    v2->v[1] = (float)(1.0 / *(float *)&_XMM0) * v2->v[1];
    v2->v[2] = (float)(1.0 / *(float *)&_XMM0) * v2->v[2];
    v8 = (tmat33_t<vec3_t> *)v2;
    p_axis = &viewParms->camera.axis;
    v2 = &viewParms->camera.axis.m[2];
  }
  else
  {
    PerpendicularVector(viewParms->camera.axis.m, &viewParms->camera.axis.m[2]);
    p_axis = (tmat33_t<vec3_t> *)&viewParms->camera.axis.m[2];
    v8 = &viewParms->camera.axis;
  }
  Vec3Cross(p_axis->m, v8->m, v2);
  if ( !light->canUseShadowMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 743, ASSERT_TYPE_ASSERT, "(light->canUseShadowMap)", (const char *)&queryFormat, "light->canUseShadowMap") )
    __debugbreak();
  cosHalfFovOuter = light->cosHalfFovOuter;
  if ( (cosHalfFovOuter <= 0.0 || cosHalfFovOuter >= 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 744, ASSERT_TYPE_ASSERT, "( ( light->cosHalfFovOuter > 0.0f && light->cosHalfFovOuter < 1.0f ) )", "( light->cosHalfFovOuter ) = %g", cosHalfFovOuter) )
    __debugbreak();
  v15 = I_fclamp(light->cosHalfFovOuter, 0.001, 0.99900001);
  v16 = light->origin.v[0];
  viewParms->camera.origin.v[0] = v16;
  v17 = *(float *)&v15;
  viewParms->camera.origin.v[1] = light->origin.v[1];
  viewParms->camera.origin.v[2] = light->origin.v[2];
  v18 = *(unsigned __int64 *)light->bulbLength.v;
  bulbRadius = light->bulbRadius;
  v20 = v18;
  v35 = light->bulbLength.v[2];
  v34 = *(_QWORD *)light->bulbLength.v;
  *(float *)&v20 = fsqrt((float)((float)(*(float *)&v18 * *(float *)&v18) + (float)(*((float *)&v34 + 1) * *((float *)&v34 + 1))) + (float)(v35 * v35));
  _XMM3 = v20;
  __asm
  {
    vcmpless xmm0, xmm3, xmm8
    vblendvps xmm0, xmm3, xmm13, xmm0
  }
  v24 = (float)((float)(*(float *)&v18 * (float)(1.0 / *(float *)&_XMM0)) * bulbRadius) + *(float *)&v18;
  v25 = HIDWORD(v34);
  *(float *)&v25 = (float)((float)(*((float *)&v34 + 1) * (float)(1.0 / *(float *)&_XMM0)) * bulbRadius) + *((float *)&v34 + 1);
  v26 = (float)((float)(v35 * (float)(1.0 / *(float *)&_XMM0)) * bulbRadius) + v35;
  v27 = (float)((float)(_mm_shuffle_ps((__m128)*(unsigned __int64 *)light->dir.v, (__m128)*(unsigned __int64 *)light->dir.v, 85).m128_f32[0] * *(float *)&v25) + (float)(COERCE_FLOAT(*(_QWORD *)light->dir.v) * v24)) + (float)(v26 * light->dir.v[2]);
  *(float *)&v25 = (float)((float)(fsqrt((float)((float)((float)(*(float *)&v25 * *(float *)&v25) + (float)(v24 * v24)) + (float)(v26 * v26)) - COERCE_FLOAT(COERCE_UNSIGNED_INT(v27 * v27) & _xmm)) * light->cosHalfFovOuter) / fsqrt(1.0 - (float)(light->cosHalfFovOuter * light->cosHalfFovOuter))) + COERCE_FLOAT(LODWORD(v27) & _xmm);
  v28 = v25;
  *(float *)&v25 = (float)(*(float *)&v25 + COERCE_FLOAT(LODWORD(v27) & _xmm)) + light->shadowNearPlaneBias;
  _XMM3 = v25;
  viewParms->camera.origin.v[0] = (float)(*(float *)&v28 * light->dir.v[0]) + v16;
  viewParms->camera.origin.v[1] = (float)(*(float *)&v28 * light->dir.v[1]) + viewParms->camera.origin.v[1];
  __asm { vmaxss  xmm8, xmm3, xmm13 }
  viewParms->camera.origin.v[2] = (float)(*(float *)&v28 * light->dir.v[2]) + viewParms->camera.origin.v[2];
  v32 = v28;
  *(float *)&v32 = *(float *)&v28 + light->radius;
  _XMM1 = v32;
  __asm { vmaxss  xmm7, xmm1, xmm0 }
  MatrixForViewerOrthogonalNoOrigin(&viewParms->camera.axis, &viewParms->viewMatrix.m);
  *(float *)&v32 = fsqrt(1.0 - (float)(v17 * v17)) * (float)(1.0 / v17);
  FinitePerspectiveMatrix(*(float *)&v32, *(float *)&v32, *(float *)&_XMM8, *(float *)&_XMM7, &viewParms->projectionMatrix.m);
  R_SetupViewProjectionMatrices(viewParms);
  viewParms->camera.depthHackFoV = 0i64;
  viewParms->camera.zPlanes[0] = *(float *)&_XMM8;
  viewParms->camera.zPlanes[1] = *(float *)&_XMM7;
  viewParms->camera.zPlanes[2] = *(float *)&_XMM8;
  viewParms->camera.zPlanes[3] = *(float *)&_XMM7;
  viewParms->camera.tanHalfFovX = *(float *)&v32;
  viewParms->camera.tanHalfFovY = *(float *)&v32;
}

/*
==============
R_SpotShadow_AllocateActiveCacheEntryForSceneLight
==============
*/
R_SpotShadow_ActiveCacheEntry *R_SpotShadow_AllocateActiveCacheEntryForSceneLight(unsigned int sceneLightIndex)
{
  __int64 v1; 
  R_SpotShadow_ActiveCacheEntry *firstFreeEntry; 
  R_SpotShadow_ActiveCacheEntry *result; 

  v1 = sceneLightIndex;
  if ( R_SpotShadow_GetActiveCacheEntryForSceneLight(sceneLightIndex) )
    Com_PrintWarning(8, "Allocating a duplicate active shadow cache entry for light %d; the old entry will be orphaned!\n", (unsigned int)v1);
  firstFreeEntry = s_R_SpotShadow_Storage.activeCache.firstFreeEntry;
  if ( s_R_SpotShadow_Storage.activeCache.firstFreeEntry )
  {
    s_R_SpotShadow_Storage.activeCache.firstFreeEntry = s_R_SpotShadow_Storage.activeCache.firstFreeEntry->next;
  }
  else
  {
    if ( !s_R_SpotShadow_Storage.activeCache.mostRottenEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 507, ASSERT_TYPE_ASSERT, "(s_R_SpotShadow_Storage.activeCache.mostRottenEntry)", (const char *)&queryFormat, "s_R_SpotShadow_Storage.activeCache.mostRottenEntry") )
      __debugbreak();
    if ( !s_R_SpotShadow_Storage.activeCache.mostRottenEntry->next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 512, ASSERT_TYPE_ASSERT, "(s_R_SpotShadow_Storage.activeCache.mostRottenEntry->next)", (const char *)&queryFormat, "s_R_SpotShadow_Storage.activeCache.mostRottenEntry->next") )
      __debugbreak();
    if ( !s_R_SpotShadow_Storage.activeCache.leastRottenEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 513, ASSERT_TYPE_ASSERT, "(s_R_SpotShadow_Storage.activeCache.leastRottenEntry)", (const char *)&queryFormat, "s_R_SpotShadow_Storage.activeCache.leastRottenEntry") )
      __debugbreak();
    if ( s_R_SpotShadow_Storage.activeCache.leastRottenEntry == s_R_SpotShadow_Storage.activeCache.mostRottenEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 514, ASSERT_TYPE_ASSERT, "(s_R_SpotShadow_Storage.activeCache.leastRottenEntry != s_R_SpotShadow_Storage.activeCache.mostRottenEntry)", (const char *)&queryFormat, "s_R_SpotShadow_Storage.activeCache.leastRottenEntry != s_R_SpotShadow_Storage.activeCache.mostRottenEntry") )
      __debugbreak();
    firstFreeEntry = s_R_SpotShadow_Storage.activeCache.mostRottenEntry;
    s_R_SpotShadow_Storage.activeCache.sceneLightToActiveCacheMapping[s_R_SpotShadow_Storage.activeCache.mostRottenEntry->sceneLightIndex] = 16;
    s_R_SpotShadow_Storage.activeCache.mostRottenEntry = s_R_SpotShadow_Storage.activeCache.mostRottenEntry->next;
    s_R_SpotShadow_Storage.activeCache.mostRottenEntry->prev = NULL;
  }
  firstFreeEntry->sceneLightIndex = v1;
  s_R_SpotShadow_Storage.activeCache.sceneLightToActiveCacheMapping[v1] = truncate_cast<unsigned char,__int64>(firstFreeEntry - s_R_SpotShadow_Storage.activeCache.entries);
  if ( s_R_SpotShadow_Storage.activeCache.leastRottenEntry )
  {
    if ( !s_R_SpotShadow_Storage.activeCache.mostRottenEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 532, ASSERT_TYPE_ASSERT, "(s_R_SpotShadow_Storage.activeCache.mostRottenEntry != nullptr)", (const char *)&queryFormat, "s_R_SpotShadow_Storage.activeCache.mostRottenEntry != nullptr") )
      __debugbreak();
    if ( s_R_SpotShadow_Storage.activeCache.leastRottenEntry->next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 533, ASSERT_TYPE_ASSERT, "(s_R_SpotShadow_Storage.activeCache.leastRottenEntry->next == nullptr)", (const char *)&queryFormat, "s_R_SpotShadow_Storage.activeCache.leastRottenEntry->next == nullptr") )
      __debugbreak();
    firstFreeEntry->prev = s_R_SpotShadow_Storage.activeCache.leastRottenEntry;
    s_R_SpotShadow_Storage.activeCache.leastRottenEntry->next = firstFreeEntry;
    firstFreeEntry->next = NULL;
    s_R_SpotShadow_Storage.activeCache.leastRottenEntry = firstFreeEntry;
  }
  else
  {
    if ( s_R_SpotShadow_Storage.activeCache.mostRottenEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 542, ASSERT_TYPE_ASSERT, "(s_R_SpotShadow_Storage.activeCache.mostRottenEntry == nullptr)", (const char *)&queryFormat, "s_R_SpotShadow_Storage.activeCache.mostRottenEntry == nullptr") )
      __debugbreak();
    s_R_SpotShadow_Storage.activeCache.leastRottenEntry = firstFreeEntry;
    s_R_SpotShadow_Storage.activeCache.mostRottenEntry = firstFreeEntry;
    firstFreeEntry->next = NULL;
    firstFreeEntry->prev = NULL;
  }
  *(_QWORD *)firstFreeEntry->lookupMatrix.m.m[0].v = 0i64;
  *(_QWORD *)&firstFreeEntry->lookupMatrix.m.row0.xyz.z = 0i64;
  *(_QWORD *)firstFreeEntry->lookupMatrix.m.row1.v = 0i64;
  *(_QWORD *)&firstFreeEntry->lookupMatrix.m.row1.xyz.z = 0i64;
  *(_QWORD *)firstFreeEntry->lookupMatrix.m.row2.v = 0i64;
  *(_QWORD *)&firstFreeEntry->lookupMatrix.m.row2.xyz.z = 0i64;
  *(_QWORD *)firstFreeEntry->lookupMatrix.m.row3.v = 0i64;
  *(_QWORD *)&firstFreeEntry->lookupMatrix.m.row3.xyz.z = 0i64;
  *(_QWORD *)&firstFreeEntry->zNear = 0i64;
  memset_0(firstFreeEntry->cachedSmodelLOD, 6, sizeof(firstFreeEntry->cachedSmodelLOD));
  result = firstFreeEntry;
  *(_QWORD *)&firstFreeEntry->bspUpdateCount = 0i64;
  *(_QWORD *)&firstFreeEntry->smodelUpdateCount = 0i64;
  *(_QWORD *)&firstFreeEntry->smodelLODUpdateCount = 0i64;
  return result;
}

/*
==============
R_SpotShadow_AllocateStaleCacheEntryForSceneLight
==============
*/
R_SpotShadow_StaleCacheEntry *R_SpotShadow_AllocateStaleCacheEntryForSceneLight(unsigned int sceneLightIndex)
{
  __int64 v1; 
  R_SpotShadow_StaleCacheEntry *firstFreeEntry; 

  v1 = sceneLightIndex;
  if ( R_SpotShadow_GetStaleCacheEntryForSceneLight(sceneLightIndex) )
    Com_PrintWarning(8, "Allocating a duplicate stale shadow cache entry for light %d; the old entry will be orphaned!\n", (unsigned int)v1);
  firstFreeEntry = s_R_SpotShadow_Storage.staleCache.firstFreeEntry;
  if ( s_R_SpotShadow_Storage.staleCache.firstFreeEntry )
  {
    s_R_SpotShadow_Storage.staleCache.firstFreeEntry = s_R_SpotShadow_Storage.staleCache.firstFreeEntry->next;
  }
  else
  {
    if ( !s_R_SpotShadow_Storage.staleCache.mostRottenEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 226, ASSERT_TYPE_ASSERT, "(s_R_SpotShadow_Storage.staleCache.mostRottenEntry)", (const char *)&queryFormat, "s_R_SpotShadow_Storage.staleCache.mostRottenEntry") )
      __debugbreak();
    if ( !s_R_SpotShadow_Storage.staleCache.mostRottenEntry->next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 231, ASSERT_TYPE_ASSERT, "(s_R_SpotShadow_Storage.staleCache.mostRottenEntry->next)", (const char *)&queryFormat, "s_R_SpotShadow_Storage.staleCache.mostRottenEntry->next") )
      __debugbreak();
    if ( !s_R_SpotShadow_Storage.staleCache.leastRottenEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 232, ASSERT_TYPE_ASSERT, "(s_R_SpotShadow_Storage.staleCache.leastRottenEntry)", (const char *)&queryFormat, "s_R_SpotShadow_Storage.staleCache.leastRottenEntry") )
      __debugbreak();
    if ( s_R_SpotShadow_Storage.staleCache.leastRottenEntry == s_R_SpotShadow_Storage.staleCache.mostRottenEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 233, ASSERT_TYPE_ASSERT, "(s_R_SpotShadow_Storage.staleCache.leastRottenEntry != s_R_SpotShadow_Storage.staleCache.mostRottenEntry)", (const char *)&queryFormat, "s_R_SpotShadow_Storage.staleCache.leastRottenEntry != s_R_SpotShadow_Storage.staleCache.mostRottenEntry") )
      __debugbreak();
    firstFreeEntry = s_R_SpotShadow_Storage.staleCache.mostRottenEntry;
    s_R_SpotShadow_Storage.staleCache.sceneLightToStaleCacheMapping[s_R_SpotShadow_Storage.staleCache.mostRottenEntry->sceneLightIndex] = 64;
    s_R_SpotShadow_Storage.staleCache.mostRottenEntry = s_R_SpotShadow_Storage.staleCache.mostRottenEntry->next;
    s_R_SpotShadow_Storage.staleCache.mostRottenEntry->prev = NULL;
  }
  firstFreeEntry->sceneLightIndex = v1;
  *(_DWORD *)&firstFreeEntry->missingTransientBSP = 0;
  firstFreeEntry->missingSModelLOD = 0;
  *(_QWORD *)&firstFreeEntry->maskedUpdateCount = 0i64;
  *(_QWORD *)&firstFreeEntry->updateFrame = 0i64;
  firstFreeEntry->dynUpdateFrame = 0;
  s_R_SpotShadow_Storage.staleCache.sceneLightToStaleCacheMapping[v1] = truncate_cast<unsigned char,__int64>(firstFreeEntry - s_R_SpotShadow_Storage.staleCache.entries);
  if ( s_R_SpotShadow_Storage.staleCache.leastRottenEntry )
  {
    if ( !s_R_SpotShadow_Storage.staleCache.mostRottenEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 263, ASSERT_TYPE_ASSERT, "(s_R_SpotShadow_Storage.staleCache.mostRottenEntry != nullptr)", (const char *)&queryFormat, "s_R_SpotShadow_Storage.staleCache.mostRottenEntry != nullptr") )
      __debugbreak();
    if ( s_R_SpotShadow_Storage.staleCache.leastRottenEntry->next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 264, ASSERT_TYPE_ASSERT, "(s_R_SpotShadow_Storage.staleCache.leastRottenEntry->next == nullptr)", (const char *)&queryFormat, "s_R_SpotShadow_Storage.staleCache.leastRottenEntry->next == nullptr") )
      __debugbreak();
    firstFreeEntry->prev = s_R_SpotShadow_Storage.staleCache.leastRottenEntry;
    s_R_SpotShadow_Storage.staleCache.leastRottenEntry->next = firstFreeEntry;
    firstFreeEntry->next = NULL;
    s_R_SpotShadow_Storage.staleCache.leastRottenEntry = firstFreeEntry;
  }
  else
  {
    if ( s_R_SpotShadow_Storage.staleCache.mostRottenEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 273, ASSERT_TYPE_ASSERT, "(s_R_SpotShadow_Storage.staleCache.mostRottenEntry == nullptr)", (const char *)&queryFormat, "s_R_SpotShadow_Storage.staleCache.mostRottenEntry == nullptr") )
      __debugbreak();
    s_R_SpotShadow_Storage.staleCache.leastRottenEntry = firstFreeEntry;
    s_R_SpotShadow_Storage.staleCache.mostRottenEntry = firstFreeEntry;
    firstFreeEntry->next = NULL;
    firstFreeEntry->prev = NULL;
  }
  return firstFreeEntry;
}

/*
==============
R_SpotShadow_CreateStaleCacheRTs
==============
*/

void __fastcall R_SpotShadow_CreateStaleCacheRTs(double _XMM0_8)
{
  __m256i v1; 
  float v3; 
  unsigned int fmt; 
  R_RT_Handle result; 
  R_RT_Handle v6; 

  if ( s_R_SpotShadow_Storage.staleCache.arrayColorRt.m_surfaceID )
  {
    R_RT_Handle::GetSurface(&s_R_SpotShadow_Storage.staleCache.arrayColorRt);
  }
  else
  {
    if ( s_R_SpotShadow_Storage.staleCache.arrayColorRt.m_tracking.m_allocCounter != s_R_SpotShadow_Storage.staleCache.arrayColorRt.m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", s_R_SpotShadow_Storage.staleCache.arrayColorRt.m_surfaceID + 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    *(_DWORD *)&v6.m_surfaceID = 512;
    *((_DWORD *)&v6.m_surfaceID + 1) = 512;
    v6.m_tracking.m_allocCounter = 768;
    *(&v6.m_tracking.m_allocCounter + 1) = 1024;
    fmt = 2 * *((_DWORD *)&v6.m_surfaceID + (int)rg.shadowMapResolutionIndex);
    v1 = *(__m256i *)R_RT_CreateInternal(&result, fmt, fmt, fmt, fmt, 1u, 0x10u, 1u, g_R_RT_renderTargetFmts[6], R_RT_Flag_RWView|R_RT_Flag_RTView, R_RT_FlagInternal_MaskLifetime, &colorBlack, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "R_RENDERTARGET_SPOT_SHADOW_ATLAS_LAYER", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp(154)");
    v6 = (R_RT_Handle)v1;
    if ( LOWORD(_XMM0_8) )
    {
      R_RT_Handle::GetSurface(&v6);
      if ( (R_RT_Handle::GetSurface(&v6)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        v1 = (__m256i)v6;
        __debugbreak();
      }
      else
      {
        v1 = (__m256i)v6;
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
      }
    }
    s_R_SpotShadow_Storage.staleCache.arrayColorRt = (R_RT_ColorHandle)v1;
    R_SpotShadow_FlushStaleCache();
    *(_DWORD *)&v6.m_surfaceID = 512;
    *((_DWORD *)&v6.m_surfaceID + 1) = 512;
    v6.m_tracking.m_allocCounter = 768;
    *(&v6.m_tracking.m_allocCounter + 1) = 1024;
    v3 = (float)*((unsigned int *)&v6.m_surfaceID + (int)rg.shadowMapResolutionIndex);
    R_SetQuadMesh(&gfxMeshGlob.spotShadowViewMesh, 0.0, 0.0, v3 * 2.0, v3 * 2.0, 0.0, 0.0, 1.0, 1.0, 0xFFFFFFFF);
  }
}

/*
==============
R_SpotShadow_DestroyRTs
==============
*/

void __fastcall R_SpotShadow_DestroyRTs(double _XMM0_8)
{
  R_RT_Handle arrayColorRt; 

  if ( s_R_SpotShadow_Storage.staleCache.arrayColorRt.m_surfaceID )
  {
    R_RT_Handle::GetSurface(&s_R_SpotShadow_Storage.staleCache.arrayColorRt);
    if ( !s_R_SpotShadow_Storage.staleCache.arrayColorRt.m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 168, ASSERT_TYPE_ASSERT, "(!s_R_SpotShadow_Storage.staleCache.arrayColorRt.IsNull())", (const char *)&queryFormat, "!s_R_SpotShadow_Storage.staleCache.arrayColorRt.IsNull()") )
      __debugbreak();
    arrayColorRt = (R_RT_Handle)s_R_SpotShadow_Storage.staleCache.arrayColorRt;
    if ( s_R_SpotShadow_Storage.staleCache.arrayColorRt.m_surfaceID )
    {
      R_RT_Handle::GetSurface(&arrayColorRt);
      if ( (R_RT_Handle::GetSurface(&arrayColorRt)->m_rtFlagsInternal & 3u) < 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 877, ASSERT_TYPE_ASSERT, "(R_RT_GetLifetimeFromFlags( rt.GetFlagsInternal() ) >= R_RT_Lifetime_MultiFrame)", (const char *)&queryFormat, "R_RT_GetLifetimeFromFlags( rt.GetFlagsInternal() ) >= R_RT_Lifetime_MultiFrame") )
        __debugbreak();
      R_RT_DestroyInternal(&arrayColorRt);
    }
    else if ( s_R_SpotShadow_Storage.staleCache.arrayColorRt.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", s_R_SpotShadow_Storage.staleCache.arrayColorRt.m_surfaceID + 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
    {
      __debugbreak();
    }
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&arrayColorRt.m_tracking.m_name = *(_OWORD *)&_XMM0_8;
    arrayColorRt.m_surfaceID = 0;
    arrayColorRt.m_tracking.m_allocCounter = 0;
    s_R_SpotShadow_Storage.staleCache.arrayColorRt = (R_RT_ColorHandle)arrayColorRt;
    R_SpotShadow_FlushStaleCache();
  }
  else if ( s_R_SpotShadow_Storage.staleCache.arrayColorRt.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
  {
    __debugbreak();
  }
  if ( s_R_SpotShadow_Storage.activeCache.arrayDepthRt.m_surfaceID )
  {
    R_RT_Handle::GetSurface(&s_R_SpotShadow_Storage.activeCache.arrayDepthRt);
    if ( !s_R_SpotShadow_Storage.activeCache.arrayDepthRt.m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 450, ASSERT_TYPE_ASSERT, "(!s_R_SpotShadow_Storage.activeCache.arrayDepthRt.IsNull())", (const char *)&queryFormat, "!s_R_SpotShadow_Storage.activeCache.arrayDepthRt.IsNull()") )
      __debugbreak();
    arrayColorRt = (R_RT_Handle)s_R_SpotShadow_Storage.activeCache.arrayDepthRt;
    if ( s_R_SpotShadow_Storage.activeCache.arrayDepthRt.m_surfaceID )
    {
      R_RT_Handle::GetSurface(&arrayColorRt);
      if ( (R_RT_Handle::GetSurface(&arrayColorRt)->m_rtFlagsInternal & 3u) < 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 877, ASSERT_TYPE_ASSERT, "(R_RT_GetLifetimeFromFlags( rt.GetFlagsInternal() ) >= R_RT_Lifetime_MultiFrame)", (const char *)&queryFormat, "R_RT_GetLifetimeFromFlags( rt.GetFlagsInternal() ) >= R_RT_Lifetime_MultiFrame", *(_QWORD *)&arrayColorRt.m_surfaceID, *(_QWORD *)&arrayColorRt.m_tracking.m_allocCounter, arrayColorRt.m_tracking.m_name, arrayColorRt.m_tracking.m_location) )
        __debugbreak();
      R_RT_DestroyInternal(&arrayColorRt);
    }
    else if ( s_R_SpotShadow_Storage.activeCache.arrayDepthRt.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", s_R_SpotShadow_Storage.activeCache.arrayDepthRt.m_surfaceID + 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", *(_QWORD *)&arrayColorRt.m_surfaceID, *(_QWORD *)&arrayColorRt.m_tracking.m_allocCounter, arrayColorRt.m_tracking.m_name, arrayColorRt.m_tracking.m_location) )
    {
      __debugbreak();
    }
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&arrayColorRt.m_tracking.m_name = _XMM0;
    arrayColorRt.m_surfaceID = 0;
    arrayColorRt.m_tracking.m_allocCounter = 0;
    s_R_SpotShadow_Storage.activeCache.arrayDepthRt = (R_RT_DepthHandle)arrayColorRt;
    R_SpotShadow_FlushActiveCache();
  }
  else if ( s_R_SpotShadow_Storage.activeCache.arrayDepthRt.m_tracking.m_allocCounter )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", s_R_SpotShadow_Storage.activeCache.arrayDepthRt.m_surfaceID + 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
}

/*
==============
R_SpotShadow_EvictSceneLightFromActiveCache
==============
*/
void R_SpotShadow_EvictSceneLightFromActiveCache(unsigned int sceneLightIndex)
{
  __int64 v1; 
  R_SpotShadow_ActiveCacheEntry *ActiveCacheEntryForSceneLight; 
  R_SpotShadow_ActiveCacheEntry *v3; 
  R_SpotShadow_ActiveCacheEntry *prev; 
  R_SpotShadow_ActiveCacheEntry *mostRottenEntry; 

  v1 = sceneLightIndex;
  ActiveCacheEntryForSceneLight = R_SpotShadow_GetActiveCacheEntryForSceneLight(sceneLightIndex);
  v3 = ActiveCacheEntryForSceneLight;
  if ( ActiveCacheEntryForSceneLight )
  {
    R_SpotShadow_ActiveCacheEntry::Unrot(ActiveCacheEntryForSceneLight);
    if ( s_R_SpotShadow_Storage.activeCache.leastRottenEntry != v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 615, ASSERT_TYPE_ASSERT, "(s_R_SpotShadow_Storage.activeCache.leastRottenEntry == entry)", (const char *)&queryFormat, "s_R_SpotShadow_Storage.activeCache.leastRottenEntry == entry") )
      __debugbreak();
    if ( v3->next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 616, ASSERT_TYPE_ASSERT, "(entry->next == nullptr)", (const char *)&queryFormat, "entry->next == nullptr") )
      __debugbreak();
    prev = v3->prev;
    if ( prev )
    {
      prev->next = NULL;
      prev = v3->prev;
    }
    s_R_SpotShadow_Storage.activeCache.leastRottenEntry = prev;
    mostRottenEntry = s_R_SpotShadow_Storage.activeCache.mostRottenEntry;
    if ( s_R_SpotShadow_Storage.activeCache.mostRottenEntry == v3 )
      mostRottenEntry = NULL;
    s_R_SpotShadow_Storage.activeCache.mostRottenEntry = mostRottenEntry;
    v3->prev = NULL;
    v3->next = s_R_SpotShadow_Storage.activeCache.firstFreeEntry;
    s_R_SpotShadow_Storage.activeCache.firstFreeEntry = v3;
    s_R_SpotShadow_Storage.activeCache.sceneLightToActiveCacheMapping[v1] = 16;
    v3->sceneLightIndex = 6532;
  }
}

/*
==============
R_SpotShadow_EvictSceneLightFromStaleCache
==============
*/
void R_SpotShadow_EvictSceneLightFromStaleCache(unsigned int sceneLightIndex)
{
  R_SpotShadow_StaleCacheEntry *StaleCacheEntryForSceneLight; 
  R_SpotShadow_StaleCacheEntry *v2; 
  __int64 v3; 
  R_SpotShadow_StaleCacheEntry *prev; 
  R_SpotShadow_StaleCacheEntry *mostRottenEntry; 

  StaleCacheEntryForSceneLight = R_SpotShadow_GetStaleCacheEntryForSceneLight(sceneLightIndex);
  v2 = StaleCacheEntryForSceneLight;
  if ( StaleCacheEntryForSceneLight )
  {
    v3 = StaleCacheEntryForSceneLight->sceneLightIndex;
    R_SpotShadow_StaleCacheEntry::Unrot(StaleCacheEntryForSceneLight);
    if ( s_R_SpotShadow_Storage.staleCache.leastRottenEntry != v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 292, ASSERT_TYPE_ASSERT, "(s_R_SpotShadow_Storage.staleCache.leastRottenEntry == entry)", (const char *)&queryFormat, "s_R_SpotShadow_Storage.staleCache.leastRottenEntry == entry") )
      __debugbreak();
    if ( v2->next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 293, ASSERT_TYPE_ASSERT, "(entry->next == nullptr)", (const char *)&queryFormat, "entry->next == nullptr") )
      __debugbreak();
    prev = v2->prev;
    if ( prev )
    {
      prev->next = NULL;
      prev = v2->prev;
    }
    s_R_SpotShadow_Storage.staleCache.leastRottenEntry = prev;
    v2->prev = NULL;
    mostRottenEntry = s_R_SpotShadow_Storage.staleCache.mostRottenEntry;
    if ( s_R_SpotShadow_Storage.staleCache.mostRottenEntry == v2 )
      mostRottenEntry = NULL;
    s_R_SpotShadow_Storage.staleCache.mostRottenEntry = mostRottenEntry;
    v2->next = s_R_SpotShadow_Storage.staleCache.firstFreeEntry;
    s_R_SpotShadow_Storage.staleCache.firstFreeEntry = v2;
    s_R_SpotShadow_Storage.staleCache.sceneLightToStaleCacheMapping[v3] = 64;
    v2->sceneLightIndex = 6532;
  }
}

/*
==============
R_SpotShadow_EvictSceneLightFromStaleCache
==============
*/
void R_SpotShadow_EvictSceneLightFromStaleCache(R_SpotShadow_StaleCacheEntry *entry)
{
  __int64 sceneLightIndex; 
  R_SpotShadow_StaleCacheEntry *prev; 
  R_SpotShadow_StaleCacheEntry *mostRottenEntry; 

  if ( !entry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 288, ASSERT_TYPE_ASSERT, "(entry)", (const char *)&queryFormat, "entry") )
    __debugbreak();
  sceneLightIndex = entry->sceneLightIndex;
  R_SpotShadow_StaleCacheEntry::Unrot(entry);
  if ( s_R_SpotShadow_Storage.staleCache.leastRottenEntry != entry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 292, ASSERT_TYPE_ASSERT, "(s_R_SpotShadow_Storage.staleCache.leastRottenEntry == entry)", (const char *)&queryFormat, "s_R_SpotShadow_Storage.staleCache.leastRottenEntry == entry") )
    __debugbreak();
  if ( entry->next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 293, ASSERT_TYPE_ASSERT, "(entry->next == nullptr)", (const char *)&queryFormat, "entry->next == nullptr") )
    __debugbreak();
  prev = entry->prev;
  if ( prev )
  {
    prev->next = NULL;
    prev = entry->prev;
  }
  s_R_SpotShadow_Storage.staleCache.leastRottenEntry = prev;
  entry->prev = NULL;
  mostRottenEntry = s_R_SpotShadow_Storage.staleCache.mostRottenEntry;
  if ( s_R_SpotShadow_Storage.staleCache.mostRottenEntry == entry )
    mostRottenEntry = NULL;
  s_R_SpotShadow_Storage.staleCache.mostRottenEntry = mostRottenEntry;
  entry->next = s_R_SpotShadow_Storage.staleCache.firstFreeEntry;
  s_R_SpotShadow_Storage.staleCache.firstFreeEntry = entry;
  s_R_SpotShadow_Storage.staleCache.sceneLightToStaleCacheMapping[sceneLightIndex] = 64;
  entry->sceneLightIndex = 6532;
}

/*
==============
R_SpotShadow_FlushActiveCache
==============
*/

void __fastcall R_SpotShadow_FlushActiveCache(double _XMM0_8)
{
  unsigned __int8 *sceneLightToActiveCacheMapping; 
  __int64 v3; 

  s_R_SpotShadow_Storage.activeCache.entries[0].sceneLightIndex = 6532;
  s_R_SpotShadow_Storage.activeCache.entries[0].prev = NULL;
  s_R_SpotShadow_Storage.activeCache.firstFreeEntry = s_R_SpotShadow_Storage.activeCache.entries;
  s_R_SpotShadow_Storage.activeCache.entries[1].prev = NULL;
  s_R_SpotShadow_Storage.activeCache.entries[0].next = &s_R_SpotShadow_Storage.activeCache.entries[1];
  s_R_SpotShadow_Storage.activeCache.entries[1].next = &s_R_SpotShadow_Storage.activeCache.entries[2];
  s_R_SpotShadow_Storage.activeCache.entries[2].next = &s_R_SpotShadow_Storage.activeCache.entries[3];
  s_R_SpotShadow_Storage.activeCache.entries[3].next = &s_R_SpotShadow_Storage.activeCache.entries[4];
  s_R_SpotShadow_Storage.activeCache.entries[4].next = &s_R_SpotShadow_Storage.activeCache.entries[5];
  s_R_SpotShadow_Storage.activeCache.entries[5].next = &s_R_SpotShadow_Storage.activeCache.entries[6];
  s_R_SpotShadow_Storage.activeCache.entries[6].next = &s_R_SpotShadow_Storage.activeCache.entries[7];
  s_R_SpotShadow_Storage.activeCache.entries[7].next = &s_R_SpotShadow_Storage.activeCache.entries[8];
  s_R_SpotShadow_Storage.activeCache.entries[8].next = &s_R_SpotShadow_Storage.activeCache.entries[9];
  s_R_SpotShadow_Storage.activeCache.entries[9].next = &s_R_SpotShadow_Storage.activeCache.entries[10];
  s_R_SpotShadow_Storage.activeCache.entries[10].next = &s_R_SpotShadow_Storage.activeCache.entries[11];
  s_R_SpotShadow_Storage.activeCache.entries[11].next = &s_R_SpotShadow_Storage.activeCache.entries[12];
  s_R_SpotShadow_Storage.activeCache.entries[12].next = &s_R_SpotShadow_Storage.activeCache.entries[13];
  s_R_SpotShadow_Storage.activeCache.entries[13].next = &s_R_SpotShadow_Storage.activeCache.entries[14];
  __asm { vpxor   xmm0, xmm0, xmm0 }
  s_R_SpotShadow_Storage.activeCache.entries[14].next = &s_R_SpotShadow_Storage.activeCache.entries[15];
  sceneLightToActiveCacheMapping = s_R_SpotShadow_Storage.activeCache.sceneLightToActiveCacheMapping;
  s_R_SpotShadow_Storage.activeCache.entries[2].prev = NULL;
  s_R_SpotShadow_Storage.activeCache.entries[3].prev = NULL;
  s_R_SpotShadow_Storage.activeCache.entries[4].prev = NULL;
  s_R_SpotShadow_Storage.activeCache.entries[5].prev = NULL;
  s_R_SpotShadow_Storage.activeCache.entries[6].prev = NULL;
  s_R_SpotShadow_Storage.activeCache.entries[7].prev = NULL;
  s_R_SpotShadow_Storage.activeCache.entries[8].prev = NULL;
  s_R_SpotShadow_Storage.activeCache.entries[9].prev = NULL;
  s_R_SpotShadow_Storage.activeCache.entries[10].prev = NULL;
  s_R_SpotShadow_Storage.activeCache.entries[11].prev = NULL;
  s_R_SpotShadow_Storage.activeCache.entries[12].prev = NULL;
  s_R_SpotShadow_Storage.activeCache.entries[13].prev = NULL;
  s_R_SpotShadow_Storage.activeCache.entries[14].prev = NULL;
  s_R_SpotShadow_Storage.activeCache.entries[15].prev = NULL;
  s_R_SpotShadow_Storage.activeCache.entries[15].next = NULL;
  v3 = 102i64;
  *(_OWORD *)&s_R_SpotShadow_Storage.activeCache.mostRottenEntry = _XMM0;
  s_R_SpotShadow_Storage.activeCache.entries[1].sceneLightIndex = 6532;
  s_R_SpotShadow_Storage.activeCache.entries[2].sceneLightIndex = 6532;
  s_R_SpotShadow_Storage.activeCache.entries[3].sceneLightIndex = 6532;
  s_R_SpotShadow_Storage.activeCache.entries[4].sceneLightIndex = 6532;
  s_R_SpotShadow_Storage.activeCache.entries[5].sceneLightIndex = 6532;
  s_R_SpotShadow_Storage.activeCache.entries[6].sceneLightIndex = 6532;
  s_R_SpotShadow_Storage.activeCache.entries[7].sceneLightIndex = 6532;
  s_R_SpotShadow_Storage.activeCache.entries[8].sceneLightIndex = 6532;
  s_R_SpotShadow_Storage.activeCache.entries[9].sceneLightIndex = 6532;
  s_R_SpotShadow_Storage.activeCache.entries[10].sceneLightIndex = 6532;
  s_R_SpotShadow_Storage.activeCache.entries[11].sceneLightIndex = 6532;
  s_R_SpotShadow_Storage.activeCache.entries[12].sceneLightIndex = 6532;
  s_R_SpotShadow_Storage.activeCache.entries[13].sceneLightIndex = 6532;
  s_R_SpotShadow_Storage.activeCache.entries[14].sceneLightIndex = 6532;
  s_R_SpotShadow_Storage.activeCache.entries[15].sceneLightIndex = 6532;
  do
  {
    *(_QWORD *)sceneLightToActiveCacheMapping = 0x1010101010101010i64;
    *((_QWORD *)sceneLightToActiveCacheMapping + 1) = 0x1010101010101010i64;
    *((_QWORD *)sceneLightToActiveCacheMapping + 2) = 0x1010101010101010i64;
    sceneLightToActiveCacheMapping += 64;
    *((_QWORD *)sceneLightToActiveCacheMapping - 5) = 0x1010101010101010i64;
    *((_QWORD *)sceneLightToActiveCacheMapping - 4) = 0x1010101010101010i64;
    *((_QWORD *)sceneLightToActiveCacheMapping - 3) = 0x1010101010101010i64;
    *((_QWORD *)sceneLightToActiveCacheMapping - 2) = 0x1010101010101010i64;
    *((_QWORD *)sceneLightToActiveCacheMapping - 1) = 0x1010101010101010i64;
    --v3;
  }
  while ( v3 );
  *(_DWORD *)sceneLightToActiveCacheMapping = 269488144;
}

/*
==============
R_SpotShadow_FlushStaleCache
==============
*/

void __fastcall R_SpotShadow_FlushStaleCache(double _XMM0_8)
{
  unsigned int v1; 
  unsigned __int64 v3; 
  unsigned __int64 v4; 
  unsigned __int64 v5; 
  unsigned __int64 v6; 
  unsigned __int64 v7; 
  unsigned __int64 v8; 
  unsigned __int64 v9; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 
  unsigned __int64 v13; 
  unsigned __int64 v14; 
  unsigned __int64 v15; 
  unsigned __int64 v16; 
  unsigned __int64 v17; 
  unsigned __int64 v18; 
  unsigned __int64 v19; 
  unsigned __int64 v20; 
  unsigned __int64 v21; 
  unsigned __int64 v22; 
  unsigned __int64 v23; 
  unsigned __int64 v24; 
  unsigned __int64 v25; 
  unsigned __int64 v26; 
  unsigned __int64 v27; 
  unsigned __int64 v28; 
  unsigned __int64 v29; 
  unsigned __int64 v30; 
  unsigned __int64 v31; 
  unsigned __int64 v32; 
  unsigned __int64 v33; 
  unsigned __int64 v34; 
  unsigned __int8 *sceneLightToStaleCacheMapping; 
  __int64 v36; 

  v1 = 2;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  s_R_SpotShadow_Storage.staleCache.firstFreeEntry = s_R_SpotShadow_Storage.staleCache.entries;
  *(_OWORD *)&s_R_SpotShadow_Storage.staleCache.mostRottenEntry = _XMM0;
  do
  {
    v3 = (unsigned __int64)(v1 - 2) << 7;
    *(unsigned int *)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].sceneLightIndex + v3) = 6532;
    *(char **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].next + v3) = (char *)&s_R_SpotShadow_Storage.staleCache.entries[1] + v3;
    *(R_SpotShadow_StaleCacheEntry **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].prev + v3) = NULL;
    v4 = (unsigned __int64)(v1 - 1) << 7;
    *(unsigned int *)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].sceneLightIndex + v4) = 6532;
    *(char **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].next + v4) = (char *)&s_R_SpotShadow_Storage.staleCache.entries[1] + v4;
    *(R_SpotShadow_StaleCacheEntry **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].prev + v4) = NULL;
    v5 = (unsigned __int64)v1 << 7;
    *(unsigned int *)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].sceneLightIndex + v5) = 6532;
    *(char **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].next + v5) = (char *)&s_R_SpotShadow_Storage.staleCache.entries[1] + v5;
    *(R_SpotShadow_StaleCacheEntry **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].prev + v5) = NULL;
    v6 = (unsigned __int64)(v1 + 1) << 7;
    *(unsigned int *)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].sceneLightIndex + v6) = 6532;
    *(char **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].next + v6) = (char *)&s_R_SpotShadow_Storage.staleCache.entries[1] + v6;
    *(R_SpotShadow_StaleCacheEntry **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].prev + v6) = NULL;
    v7 = (unsigned __int64)(v1 + 2) << 7;
    *(unsigned int *)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].sceneLightIndex + v7) = 6532;
    *(char **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].next + v7) = (char *)&s_R_SpotShadow_Storage.staleCache.entries[1] + v7;
    *(R_SpotShadow_StaleCacheEntry **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].prev + v7) = NULL;
    v8 = (unsigned __int64)(v1 + 3) << 7;
    *(unsigned int *)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].sceneLightIndex + v8) = 6532;
    *(char **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].next + v8) = (char *)&s_R_SpotShadow_Storage.staleCache.entries[1] + v8;
    *(R_SpotShadow_StaleCacheEntry **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].prev + v8) = NULL;
    v9 = (unsigned __int64)(v1 + 4) << 7;
    *(unsigned int *)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].sceneLightIndex + v9) = 6532;
    *(char **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].next + v9) = (char *)&s_R_SpotShadow_Storage.staleCache.entries[1] + v9;
    *(R_SpotShadow_StaleCacheEntry **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].prev + v9) = NULL;
    v10 = (unsigned __int64)(v1 + 5) << 7;
    *(unsigned int *)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].sceneLightIndex + v10) = 6532;
    *(char **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].next + v10) = (char *)&s_R_SpotShadow_Storage.staleCache.entries[1] + v10;
    *(R_SpotShadow_StaleCacheEntry **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].prev + v10) = NULL;
    v11 = (unsigned __int64)(v1 + 6) << 7;
    *(unsigned int *)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].sceneLightIndex + v11) = 6532;
    *(char **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].next + v11) = (char *)&s_R_SpotShadow_Storage.staleCache.entries[1] + v11;
    *(R_SpotShadow_StaleCacheEntry **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].prev + v11) = NULL;
    v12 = (unsigned __int64)(v1 + 7) << 7;
    *(unsigned int *)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].sceneLightIndex + v12) = 6532;
    *(char **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].next + v12) = (char *)&s_R_SpotShadow_Storage.staleCache.entries[1] + v12;
    *(R_SpotShadow_StaleCacheEntry **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].prev + v12) = NULL;
    v13 = (unsigned __int64)(v1 + 8) << 7;
    *(unsigned int *)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].sceneLightIndex + v13) = 6532;
    *(char **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].next + v13) = (char *)&s_R_SpotShadow_Storage.staleCache.entries[1] + v13;
    *(R_SpotShadow_StaleCacheEntry **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].prev + v13) = NULL;
    v14 = (unsigned __int64)(v1 + 9) << 7;
    *(unsigned int *)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].sceneLightIndex + v14) = 6532;
    *(char **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].next + v14) = (char *)&s_R_SpotShadow_Storage.staleCache.entries[1] + v14;
    *(R_SpotShadow_StaleCacheEntry **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].prev + v14) = NULL;
    v15 = (unsigned __int64)(v1 + 10) << 7;
    *(unsigned int *)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].sceneLightIndex + v15) = 6532;
    *(char **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].next + v15) = (char *)&s_R_SpotShadow_Storage.staleCache.entries[1] + v15;
    *(R_SpotShadow_StaleCacheEntry **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].prev + v15) = NULL;
    v16 = (unsigned __int64)(v1 + 11) << 7;
    *(unsigned int *)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].sceneLightIndex + v16) = 6532;
    *(char **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].next + v16) = (char *)&s_R_SpotShadow_Storage.staleCache.entries[1] + v16;
    *(R_SpotShadow_StaleCacheEntry **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].prev + v16) = NULL;
    v17 = (unsigned __int64)(v1 + 12) << 7;
    *(unsigned int *)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].sceneLightIndex + v17) = 6532;
    *(char **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].next + v17) = (char *)&s_R_SpotShadow_Storage.staleCache.entries[1] + v17;
    *(R_SpotShadow_StaleCacheEntry **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].prev + v17) = NULL;
    v18 = (unsigned __int64)(v1 + 13) << 7;
    *(unsigned int *)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].sceneLightIndex + v18) = 6532;
    *(char **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].next + v18) = (char *)&s_R_SpotShadow_Storage.staleCache.entries[1] + v18;
    *(R_SpotShadow_StaleCacheEntry **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].prev + v18) = NULL;
    v19 = (unsigned __int64)(v1 + 14) << 7;
    *(unsigned int *)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].sceneLightIndex + v19) = 6532;
    *(char **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].next + v19) = (char *)&s_R_SpotShadow_Storage.staleCache.entries[1] + v19;
    *(R_SpotShadow_StaleCacheEntry **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].prev + v19) = NULL;
    v20 = (unsigned __int64)(v1 + 15) << 7;
    *(unsigned int *)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].sceneLightIndex + v20) = 6532;
    *(char **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].next + v20) = (char *)&s_R_SpotShadow_Storage.staleCache.entries[1] + v20;
    *(R_SpotShadow_StaleCacheEntry **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].prev + v20) = NULL;
    v21 = (unsigned __int64)(v1 + 16) << 7;
    *(unsigned int *)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].sceneLightIndex + v21) = 6532;
    *(char **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].next + v21) = (char *)&s_R_SpotShadow_Storage.staleCache.entries[1] + v21;
    *(R_SpotShadow_StaleCacheEntry **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].prev + v21) = NULL;
    v22 = (unsigned __int64)(v1 + 17) << 7;
    *(unsigned int *)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].sceneLightIndex + v22) = 6532;
    *(char **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].next + v22) = (char *)&s_R_SpotShadow_Storage.staleCache.entries[1] + v22;
    *(R_SpotShadow_StaleCacheEntry **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].prev + v22) = NULL;
    v23 = (unsigned __int64)(v1 + 18) << 7;
    *(unsigned int *)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].sceneLightIndex + v23) = 6532;
    *(char **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].next + v23) = (char *)&s_R_SpotShadow_Storage.staleCache.entries[1] + v23;
    *(R_SpotShadow_StaleCacheEntry **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].prev + v23) = NULL;
    v24 = (unsigned __int64)(v1 + 19) << 7;
    *(unsigned int *)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].sceneLightIndex + v24) = 6532;
    *(char **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].next + v24) = (char *)&s_R_SpotShadow_Storage.staleCache.entries[1] + v24;
    *(R_SpotShadow_StaleCacheEntry **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].prev + v24) = NULL;
    v25 = (unsigned __int64)(v1 + 20) << 7;
    *(unsigned int *)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].sceneLightIndex + v25) = 6532;
    *(char **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].next + v25) = (char *)&s_R_SpotShadow_Storage.staleCache.entries[1] + v25;
    *(R_SpotShadow_StaleCacheEntry **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].prev + v25) = NULL;
    v26 = (unsigned __int64)(v1 + 21) << 7;
    *(unsigned int *)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].sceneLightIndex + v26) = 6532;
    *(char **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].next + v26) = (char *)&s_R_SpotShadow_Storage.staleCache.entries[1] + v26;
    *(R_SpotShadow_StaleCacheEntry **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].prev + v26) = NULL;
    v27 = (unsigned __int64)(v1 + 22) << 7;
    *(unsigned int *)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].sceneLightIndex + v27) = 6532;
    *(char **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].next + v27) = (char *)&s_R_SpotShadow_Storage.staleCache.entries[1] + v27;
    *(R_SpotShadow_StaleCacheEntry **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].prev + v27) = NULL;
    v28 = (unsigned __int64)(v1 + 23) << 7;
    *(unsigned int *)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].sceneLightIndex + v28) = 6532;
    *(char **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].next + v28) = (char *)&s_R_SpotShadow_Storage.staleCache.entries[1] + v28;
    *(R_SpotShadow_StaleCacheEntry **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].prev + v28) = NULL;
    v29 = (unsigned __int64)(v1 + 24) << 7;
    *(unsigned int *)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].sceneLightIndex + v29) = 6532;
    *(char **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].next + v29) = (char *)&s_R_SpotShadow_Storage.staleCache.entries[1] + v29;
    *(R_SpotShadow_StaleCacheEntry **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].prev + v29) = NULL;
    v30 = (unsigned __int64)(v1 + 25) << 7;
    *(unsigned int *)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].sceneLightIndex + v30) = 6532;
    *(char **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].next + v30) = (char *)&s_R_SpotShadow_Storage.staleCache.entries[1] + v30;
    *(R_SpotShadow_StaleCacheEntry **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].prev + v30) = NULL;
    v31 = (unsigned __int64)(v1 + 26) << 7;
    *(unsigned int *)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].sceneLightIndex + v31) = 6532;
    *(char **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].next + v31) = (char *)&s_R_SpotShadow_Storage.staleCache.entries[1] + v31;
    *(R_SpotShadow_StaleCacheEntry **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].prev + v31) = NULL;
    v32 = (unsigned __int64)(v1 + 27) << 7;
    *(unsigned int *)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].sceneLightIndex + v32) = 6532;
    *(char **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].next + v32) = (char *)&s_R_SpotShadow_Storage.staleCache.entries[1] + v32;
    *(R_SpotShadow_StaleCacheEntry **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].prev + v32) = NULL;
    v33 = (unsigned __int64)(v1 + 28) << 7;
    *(unsigned int *)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].sceneLightIndex + v33) = 6532;
    *(char **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].next + v33) = (char *)&s_R_SpotShadow_Storage.staleCache.entries[1] + v33;
    *(R_SpotShadow_StaleCacheEntry **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].prev + v33) = NULL;
    v34 = (unsigned __int64)(v1 + 29) << 7;
    v1 += 32;
    *(unsigned int *)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].sceneLightIndex + v34) = 6532;
    *(char **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].next + v34) = (char *)&s_R_SpotShadow_Storage.staleCache.entries[1] + v34;
    *(R_SpotShadow_StaleCacheEntry **)((char *)&s_R_SpotShadow_Storage.staleCache.entries[0].prev + v34) = NULL;
  }
  while ( v1 - 2 < 0x40 );
  s_R_SpotShadow_Storage.staleCache.entries[63].next = NULL;
  sceneLightToStaleCacheMapping = s_R_SpotShadow_Storage.staleCache.sceneLightToStaleCacheMapping;
  v36 = 102i64;
  do
  {
    memset(sceneLightToStaleCacheMapping, 64, 24);
    sceneLightToStaleCacheMapping += 64;
    memset(sceneLightToStaleCacheMapping - 40, 64, 40);
    --v36;
  }
  while ( v36 );
  *(_DWORD *)sceneLightToStaleCacheMapping = 1077952576;
}

/*
==============
R_SpotShadow_FreeRts
==============
*/

void __fastcall R_SpotShadow_FreeRts(double _XMM0_8)
{
  R_SpotShadow_DestroyRTs(_XMM0_8);
}

/*
==============
R_SpotShadow_GetActiveCacheEntryForSceneLight
==============
*/
R_SpotShadow_ActiveCacheEntry *R_SpotShadow_GetActiveCacheEntryForSceneLight(unsigned int sceneLightIndex)
{
  unsigned __int8 *v1; 
  unsigned __int8 v2; 
  R_SpotShadow_ActiveCacheEntry *result; 
  R_SpotShadow_ActiveCacheEntry *v4; 

  v1 = &s_R_SpotShadow_Storage.activeCache.sceneLightToActiveCacheMapping[sceneLightIndex];
  if ( *v1 < 0x10u )
  {
    v4 = &s_R_SpotShadow_Storage.activeCache.entries[*v1];
    if ( v4->sceneLightIndex != sceneLightIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 482, ASSERT_TYPE_ASSERT, "(entry->GetSceneLightIndex() == sceneLightIndex)", (const char *)&queryFormat, "entry->GetSceneLightIndex() == sceneLightIndex") )
      __debugbreak();
    return v4;
  }
  else
  {
    v2 = 0;
    while ( s_R_SpotShadow_Storage.activeCache.entries[v2].sceneLightIndex != sceneLightIndex )
    {
      if ( ++v2 >= 0x10u )
        return 0i64;
    }
    Com_PrintWarning(8, "Found an orphaned active shadow cache entry for light %d\n", sceneLightIndex);
    result = &s_R_SpotShadow_Storage.activeCache.entries[v2];
    *v1 = v2;
  }
  return result;
}

/*
==============
R_SpotShadow_GetAtlasUVOffsetAndScale
==============
*/
float4 *R_SpotShadow_GetAtlasUVOffsetAndScale(float4 *result, const GfxSpotShadow *spotShadow)
{
  unsigned int subAtlasIndex; 
  int v6; 

  if ( spotShadow->subAtlasIndex >= 4 )
  {
    v6 = 4;
    subAtlasIndex = spotShadow->subAtlasIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 811, ASSERT_TYPE_ASSERT, "(unsigned)( spotShadow->subAtlasIndex ) < (unsigned)( R_SPOTSHADOW_LAYER_ATLAS_COUNT )", "spotShadow->subAtlasIndex doesn't index R_SPOTSHADOW_LAYER_ATLAS_COUNT\n\t%i not in [0, %i)", subAtlasIndex, v6) )
      __debugbreak();
  }
  if ( dword_1541057CC > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
  {
    j__Init_thread_header(&dword_1541057CC);
    if ( dword_1541057CC == -1 )
    {
      *(__m256i *)uvScaleAndOffset[0].v.m128_f32 = _ymm;
      *(__m256i *)uvScaleAndOffset[2].v.m128_f32 = _ymm;
      j__Init_thread_footer(&dword_1541057CC);
    }
  }
  *result = uvScaleAndOffset[spotShadow->subAtlasIndex];
  return result;
}

/*
==============
R_SpotShadow_GetMapSize
==============
*/
__int64 R_SpotShadow_GetMapSize(GfxShadowMapTileResolution resolutionIndex)
{
  int v2[4]; 

  v2[0] = 512;
  v2[1] = 512;
  v2[2] = 768;
  v2[3] = 1024;
  return (unsigned int)v2[resolutionIndex];
}

/*
==============
R_SpotShadow_GetMapSize
==============
*/
__int64 R_SpotShadow_GetMapSize()
{
  int v1[4]; 

  v1[0] = 512;
  v1[1] = 512;
  v1[2] = 768;
  v1[3] = 1024;
  return (unsigned int)v1[rg.shadowMapResolutionIndex];
}

/*
==============
R_SpotShadow_GetStaleCacheEntryForSceneLight
==============
*/
R_SpotShadow_StaleCacheEntry *R_SpotShadow_GetStaleCacheEntryForSceneLight(unsigned int sceneLightIndex)
{
  unsigned __int8 *v1; 
  unsigned __int8 v2; 
  R_SpotShadow_StaleCacheEntry *result; 
  R_SpotShadow_StaleCacheEntry *v4; 

  v1 = &s_R_SpotShadow_Storage.staleCache.sceneLightToStaleCacheMapping[sceneLightIndex];
  if ( *v1 < 0x40u )
  {
    v4 = &s_R_SpotShadow_Storage.staleCache.entries[(unsigned __int64)*v1];
    if ( v4->sceneLightIndex != sceneLightIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 200, ASSERT_TYPE_ASSERT, "(entry->GetSceneLightIndex() == sceneLightIndex)", (const char *)&queryFormat, "entry->GetSceneLightIndex() == sceneLightIndex") )
      __debugbreak();
    return v4;
  }
  else
  {
    v2 = 0;
    while ( s_R_SpotShadow_Storage.staleCache.entries[(unsigned __int64)v2].sceneLightIndex != sceneLightIndex )
    {
      if ( ++v2 >= 0x40u )
        return 0i64;
    }
    Com_PrintWarning(8, "Found an orphaned stale shadow cache entry for light %d\n", sceneLightIndex);
    result = &s_R_SpotShadow_Storage.staleCache.entries[(unsigned __int64)v2];
    *v1 = v2;
  }
  return result;
}

/*
==============
R_SpotShadow_LazyAllocRts
==============
*/
void R_SpotShadow_LazyAllocRts(double a1)
{
  __m256i v2; 
  unsigned int fmt; 
  R_RT_Handle v5; 
  __m256i v6; 
  R_RT_Handle result; 
  vec4_t clearColor; 

  R_SpotShadow_CreateStaleCacheRTs(a1);
  if ( s_R_SpotShadow_Storage.activeCache.arrayDepthRt.m_surfaceID )
  {
    R_RT_Handle::GetSurface(&s_R_SpotShadow_Storage.activeCache.arrayDepthRt);
  }
  else
  {
    if ( s_R_SpotShadow_Storage.activeCache.arrayDepthRt.m_tracking.m_allocCounter != s_R_SpotShadow_Storage.activeCache.arrayDepthRt.m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", s_R_SpotShadow_Storage.activeCache.arrayDepthRt.m_surfaceID + 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    *(_QWORD *)clearColor.v = 0x20000000200i64;
    *(_QWORD *)&clearColor.xyz.z = 0x40000000300i64;
    _XMM0 = 0i64;
    fmt = 2 * LODWORD(clearColor.v[rg.shadowMapResolutionIndex]);
    clearColor.v[0] = 0.0;
    v2 = *(__m256i *)R_RT_CreateInternal(&result, fmt, fmt, fmt, fmt, 1u, 0x20u, 1u, g_R_RT_depthStencilFmts[3], R_RT_Flag_None, R_RT_FlagInternal_MaskLifetime|R_RT_FlagInternal_Depth, &clearColor, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "R_RENDERTARGET_SPOTSHADOW_CACHED", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp(439)");
    v6 = v2;
    v5 = (R_RT_Handle)v2;
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v2 = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
    s_R_SpotShadow_Storage.activeCache.arrayDepthRt = (R_RT_DepthHandle)v2;
    R_SpotShadow_FlushActiveCache();
  }
}

/*
==============
R_SpotShadow_NeedsBSPSurfs
==============
*/
bool R_SpotShadow_NeedsBSPSurfs(const GfxSpotShadowUpdate *update)
{
  return update->activeStatus < 3;
}

/*
==============
R_SpotShadow_ShouldUseHTileMask
==============
*/
bool R_SpotShadow_ShouldUseHTileMask(const GfxSpotShadowUpdate *update)
{
  bool v2; 

  if ( update->sceneLightIndex >= rgp.world->primaryLightCount && update->activeStatus && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 1600, ASSERT_TYPE_ASSERT, "(isStatic || update->activeStatus == R_SpotShadow_ActiveCacheStatus_Uncached)", (const char *)&queryFormat, "isStatic || update->activeStatus == R_SpotShadow_ActiveCacheStatus_Uncached") )
    __debugbreak();
  v2 = update->supportsDynamicShadows == 0;
  if ( !update->supportsDynamicShadows )
  {
    if ( (update->needsDynamicShadows || update->activeStatus) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 1604, ASSERT_TYPE_ASSERT, "(update->supportsDynamicShadows || ( !update->needsDynamicShadows && update->activeStatus == R_SpotShadow_ActiveCacheStatus_Uncached ))", (const char *)&queryFormat, "update->supportsDynamicShadows || ( !update->needsDynamicShadows && update->activeStatus == R_SpotShadow_ActiveCacheStatus_Uncached )") )
      __debugbreak();
    v2 = update->supportsDynamicShadows == 0;
  }
  return !v2;
}

/*
==============
R_SpotShadow_StaleCacheSnapshot
==============
*/
void R_SpotShadow_StaleCacheSnapshot(GfxBackEndData *data, LocalClientNum_t clientIndex, bool updateCacheStaleness)
{
  R_SpotShadow_StaleCacheEntry *i; 
  __int64 spotShadowCount; 
  __int64 v8; 
  unsigned __int8 v9; 
  __int64 sceneLightIndex; 
  __int64 v11; 
  char v12; 
  unsigned int flags; 

  data->spotShadowCount = 0;
  for ( i = s_R_SpotShadow_Storage.staleCache.leastRottenEntry; i; i = i->prev )
  {
    spotShadowCount = data->spotShadowCount;
    v8 = spotShadowCount;
    LODWORD(spotShadowCount) = spotShadowCount + 1;
    data->spotShadowCount = spotShadowCount;
    if ( (unsigned int)spotShadowCount > 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 333, ASSERT_TYPE_ASSERT, "(data->spotShadowCount <= ( sizeof( *array_counter( data->spotShadows ) ) + 0 ))", (const char *)&queryFormat, "data->spotShadowCount <= ARRAY_COUNT( data->spotShadows )") )
      __debugbreak();
    *(__m256i *)data->spotShadows[v8].lookupMatrix.m.m[0].v = *(__m256i *)i->lookupMatrix.m.m[0].v;
    *(__m256i *)data->spotShadows[v8].lookupMatrix.m.row2.v = *(__m256i *)i->lookupMatrix.m.row2.v;
    data->spotShadows[v8].sceneLightIndex = i->sceneLightIndex;
    if ( (s_R_SpotShadow_Storage.staleCache.entries > i || i > &s_R_SpotShadow_Storage.staleCache.entries[63]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 75, ASSERT_TYPE_ASSERT, "(&s_R_SpotShadow_Storage.staleCache.entries[0]) <= (this) && (this) <= (&s_R_SpotShadow_Storage.staleCache.entries[R_SPOTSHADOW_STALE_STORAGE_LIMIT - 1])", "%s\n\t0x%p not in [0x%p, 0x%p]", "this not in [&s_R_SpotShadow_Storage.staleCache.entries[0], &s_R_SpotShadow_Storage.staleCache.entries[R_SPOTSHADOW_STALE_STORAGE_LIMIT - 1]]", i, s_R_SpotShadow_Storage.staleCache.entries, &s_R_SpotShadow_Storage.staleCache.entries[63]) )
      __debugbreak();
    data->spotShadows[v8].arraySliceIndex = truncate_cast<unsigned int,__int64>(i - s_R_SpotShadow_Storage.staleCache.entries) >> 2;
    if ( (s_R_SpotShadow_Storage.staleCache.entries > i || i > &s_R_SpotShadow_Storage.staleCache.entries[63]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 75, ASSERT_TYPE_ASSERT, "(&s_R_SpotShadow_Storage.staleCache.entries[0]) <= (this) && (this) <= (&s_R_SpotShadow_Storage.staleCache.entries[R_SPOTSHADOW_STALE_STORAGE_LIMIT - 1])", "%s\n\t0x%p not in [0x%p, 0x%p]", "this not in [&s_R_SpotShadow_Storage.staleCache.entries[0], &s_R_SpotShadow_Storage.staleCache.entries[R_SPOTSHADOW_STALE_STORAGE_LIMIT - 1]]", i, s_R_SpotShadow_Storage.staleCache.entries, &s_R_SpotShadow_Storage.staleCache.entries[63]) )
      __debugbreak();
    data->spotShadows[v8].subAtlasIndex = truncate_cast<unsigned int,__int64>(i - s_R_SpotShadow_Storage.staleCache.entries) & 3;
    if ( (s_R_SpotShadow_Storage.staleCache.entries > i || i > &s_R_SpotShadow_Storage.staleCache.entries[63]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 75, ASSERT_TYPE_ASSERT, "(&s_R_SpotShadow_Storage.staleCache.entries[0]) <= (this) && (this) <= (&s_R_SpotShadow_Storage.staleCache.entries[R_SPOTSHADOW_STALE_STORAGE_LIMIT - 1])", "%s\n\t0x%p not in [0x%p, 0x%p]", "this not in [&s_R_SpotShadow_Storage.staleCache.entries[0], &s_R_SpotShadow_Storage.staleCache.entries[R_SPOTSHADOW_STALE_STORAGE_LIMIT - 1]]", i, s_R_SpotShadow_Storage.staleCache.entries, &s_R_SpotShadow_Storage.staleCache.entries[63]) )
      __debugbreak();
    data->spotShadows[v8].cacheIndex = truncate_cast<unsigned int,__int64>(i - s_R_SpotShadow_Storage.staleCache.entries);
    data->spotShadows[v8].zNear = i->zNear;
    data->spotShadows[v8].zFar = i->zFar;
    data->spotShadows[v8].staleCacheEntry = i;
    if ( !updateCacheStaleness )
      continue;
    v9 = i->staleness - 1;
    if ( !rg.primaryLightMotionDetect )
    {
      if ( v9 <= 0xFCu )
        i->staleness = -2;
      continue;
    }
    sceneLightIndex = data->spotShadows[v8].sceneLightIndex;
    if ( (unsigned int)sceneLightIndex < rgp.world->primaryLightCount )
    {
      v11 = sceneLightIndex;
      v12 = data->sceneLights[sceneLightIndex].needsDynamicShadows && R_CheckPrimaryLightMotionBit(clientIndex, sceneLightIndex);
      if ( !data->sceneLights[v11].needsDynamicShadows )
        goto LABEL_32;
      flags = data->sceneLights[v11].flags;
      if ( (flags & 0x1000) != 0 )
      {
        i->staleness = (data->sceneLights[v11].flags & 0x2000) != 0;
      }
      else
      {
        if ( (flags & 0x200) == 0 )
        {
          if ( (flags & 0x400) == 0 )
          {
            if ( v9 <= 0xFCu )
              i->staleness += v12;
            continue;
          }
LABEL_32:
          i->staleness = 0;
          continue;
        }
        i->staleness = 1;
      }
    }
  }
}

/*
==============
R_SpotShadow_UpdateDynamicMesh
==============
*/
void R_SpotShadow_UpdateDynamicMesh(void)
{
  float v0; 
  int v1[4]; 

  v1[0] = 512;
  v1[1] = 512;
  v1[2] = 768;
  v1[3] = 1024;
  v0 = (float)(unsigned int)v1[rg.shadowMapResolutionIndex];
  R_SetQuadMesh(&gfxMeshGlob.spotShadowViewMesh, 0.0, 0.0, v0 * 2.0, v0 * 2.0, 0.0, 0.0, 1.0, 1.0, 0xFFFFFFFF);
}

/*
==============
R_SpotShadow_ActiveCacheEntry::Unrot
==============
*/
void R_SpotShadow_ActiveCacheEntry::Unrot(R_SpotShadow_ActiveCacheEntry *this)
{
  R_SpotShadow_ActiveCacheEntry *leastRottenEntry; 
  R_SpotShadow_ActiveCacheEntry *prev; 

  if ( s_R_SpotShadow_Storage.activeCache.sceneLightToActiveCacheMapping[this->sceneLightIndex] != this - s_R_SpotShadow_Storage.activeCache.entries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 559, ASSERT_TYPE_ASSERT, "(s_R_SpotShadow_Storage.activeCache.sceneLightToActiveCacheMapping[sceneLightIndex] == (this - s_R_SpotShadow_Storage.activeCache.entries))", (const char *)&queryFormat, "s_R_SpotShadow_Storage.activeCache.sceneLightToActiveCacheMapping[sceneLightIndex] == (this - s_R_SpotShadow_Storage.activeCache.entries)") )
    __debugbreak();
  if ( !s_R_SpotShadow_Storage.activeCache.mostRottenEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 560, ASSERT_TYPE_ASSERT, "(s_R_SpotShadow_Storage.activeCache.mostRottenEntry != nullptr)", (const char *)&queryFormat, "s_R_SpotShadow_Storage.activeCache.mostRottenEntry != nullptr") )
    __debugbreak();
  leastRottenEntry = s_R_SpotShadow_Storage.activeCache.leastRottenEntry;
  if ( !s_R_SpotShadow_Storage.activeCache.leastRottenEntry )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 561, ASSERT_TYPE_ASSERT, "(s_R_SpotShadow_Storage.activeCache.leastRottenEntry != nullptr)", (const char *)&queryFormat, "s_R_SpotShadow_Storage.activeCache.leastRottenEntry != nullptr") )
      __debugbreak();
    leastRottenEntry = s_R_SpotShadow_Storage.activeCache.leastRottenEntry;
  }
  if ( leastRottenEntry != this )
  {
    if ( leastRottenEntry->next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 565, ASSERT_TYPE_ASSERT, "(s_R_SpotShadow_Storage.activeCache.leastRottenEntry->next == nullptr)", (const char *)&queryFormat, "s_R_SpotShadow_Storage.activeCache.leastRottenEntry->next == nullptr") )
      __debugbreak();
    if ( !this->next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 566, ASSERT_TYPE_ASSERT, "(this->next != nullptr)", (const char *)&queryFormat, "this->next != nullptr") )
      __debugbreak();
    this->next->prev = this->prev;
    prev = this->prev;
    if ( s_R_SpotShadow_Storage.activeCache.mostRottenEntry == this )
    {
      if ( prev )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 572, ASSERT_TYPE_ASSERT, "(this->prev == nullptr)", (const char *)&queryFormat, "this->prev == nullptr") )
          __debugbreak();
      }
      s_R_SpotShadow_Storage.activeCache.mostRottenEntry = this->next;
    }
    else
    {
      if ( !prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 577, ASSERT_TYPE_ASSERT, "(this->prev != nullptr)", (const char *)&queryFormat, "this->prev != nullptr") )
        __debugbreak();
      this->prev->next = this->next;
    }
    s_R_SpotShadow_Storage.activeCache.leastRottenEntry->next = this;
    this->prev = s_R_SpotShadow_Storage.activeCache.leastRottenEntry;
    this->next = NULL;
    s_R_SpotShadow_Storage.activeCache.leastRottenEntry = this;
  }
}

/*
==============
R_SpotShadow_StaleCacheEntry::Unrot
==============
*/
void R_SpotShadow_StaleCacheEntry::Unrot(R_SpotShadow_StaleCacheEntry *this)
{
  R_SpotShadow_StaleCacheEntry *leastRottenEntry; 
  R_SpotShadow_StaleCacheEntry *prev; 

  if ( s_R_SpotShadow_Storage.staleCache.sceneLightToStaleCacheMapping[this->sceneLightIndex] != this - s_R_SpotShadow_Storage.staleCache.entries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 94, ASSERT_TYPE_ASSERT, "(s_R_SpotShadow_Storage.staleCache.sceneLightToStaleCacheMapping[sceneLightIndex] == (this - s_R_SpotShadow_Storage.staleCache.entries))", (const char *)&queryFormat, "s_R_SpotShadow_Storage.staleCache.sceneLightToStaleCacheMapping[sceneLightIndex] == (this - s_R_SpotShadow_Storage.staleCache.entries)") )
    __debugbreak();
  if ( !s_R_SpotShadow_Storage.staleCache.mostRottenEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 95, ASSERT_TYPE_ASSERT, "(s_R_SpotShadow_Storage.staleCache.mostRottenEntry != nullptr)", (const char *)&queryFormat, "s_R_SpotShadow_Storage.staleCache.mostRottenEntry != nullptr") )
    __debugbreak();
  leastRottenEntry = s_R_SpotShadow_Storage.staleCache.leastRottenEntry;
  if ( !s_R_SpotShadow_Storage.staleCache.leastRottenEntry )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 96, ASSERT_TYPE_ASSERT, "(s_R_SpotShadow_Storage.staleCache.leastRottenEntry != nullptr)", (const char *)&queryFormat, "s_R_SpotShadow_Storage.staleCache.leastRottenEntry != nullptr") )
      __debugbreak();
    leastRottenEntry = s_R_SpotShadow_Storage.staleCache.leastRottenEntry;
  }
  if ( leastRottenEntry != this )
  {
    if ( leastRottenEntry->next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 100, ASSERT_TYPE_ASSERT, "(s_R_SpotShadow_Storage.staleCache.leastRottenEntry->next == nullptr)", (const char *)&queryFormat, "s_R_SpotShadow_Storage.staleCache.leastRottenEntry->next == nullptr") )
      __debugbreak();
    if ( !this->next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 101, ASSERT_TYPE_ASSERT, "(this->next != nullptr)", (const char *)&queryFormat, "this->next != nullptr") )
      __debugbreak();
    this->next->prev = this->prev;
    prev = this->prev;
    if ( s_R_SpotShadow_Storage.staleCache.mostRottenEntry == this )
    {
      if ( prev )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 107, ASSERT_TYPE_ASSERT, "(this->prev == nullptr)", (const char *)&queryFormat, "this->prev == nullptr") )
          __debugbreak();
      }
      s_R_SpotShadow_Storage.staleCache.mostRottenEntry = this->next;
    }
    else
    {
      if ( !prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 112, ASSERT_TYPE_ASSERT, "(this->prev != nullptr)", (const char *)&queryFormat, "this->prev != nullptr") )
        __debugbreak();
      this->prev->next = this->next;
    }
    s_R_SpotShadow_Storage.staleCache.leastRottenEntry->next = this;
    this->prev = s_R_SpotShadow_Storage.staleCache.leastRottenEntry;
    this->next = NULL;
    s_R_SpotShadow_Storage.staleCache.leastRottenEntry = this;
  }
}

