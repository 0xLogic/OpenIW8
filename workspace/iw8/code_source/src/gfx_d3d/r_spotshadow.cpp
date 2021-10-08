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
  R_RT_Handle v4; 

  __asm
  {
    vmovups ymm0, ymmword ptr cs:s_R_SpotShadow_Storage.staleCache.arrayColorRt.baseclass_0.m_surfaceID
    vmovups ymmword ptr [rsp+48h+var_28.m_surfaceID], ymm0
  }
  R_RT_ColorHandle::Cast((R_RT_ColorHandle *)result, &v4);
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
  R_RT_Handle v10; 
  R_RT_Handle v11; 

  _RBX = cacheRt;
  CacheIndex = R_SpotShadow_StaleCacheEntry::GetCacheIndex(this);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx]
    vmovups [rsp+68h+var_48], ymm0
  }
  _RAX = R_RT_GetViewInternal(&v11, &v10, CacheIndex >> 2, 0);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups [rsp+68h+var_48], ymm0
  }
  R_RT_ColorHandle::Cast((R_RT_ColorHandle *)result, &v10);
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
  R_RT_Handle v8; 
  R_RT_Handle v9; 

  CacheIndex = R_SpotShadow_StaleCacheEntry::GetCacheIndex(this);
  __asm
  {
    vmovups ymm0, ymmword ptr cs:s_R_SpotShadow_Storage.staleCache.arrayColorRt.baseclass_0.m_surfaceID
    vmovups [rsp+68h+var_48], ymm0
  }
  _RAX = R_RT_GetViewInternal(&v9, &v8, CacheIndex >> 2, 0);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups [rsp+68h+var_48], ymm0
  }
  R_RT_ColorHandle::Cast((R_RT_ColorHandle *)result, &v8);
  return result;
}

/*
==============
R_SpotShadow_ActiveCacheEntry::GetDepthRtDraw3D
==============
*/
const R_RT_DepthHandle *R_SpotShadow_ActiveCacheEntry::GetDepthRtDraw3D(const R_RT_DepthHandle *result)
{
  __asm
  {
    vmovups ymm0, ymmword ptr cs:s_R_SpotShadow_Storage.activeCache.arrayDepthRt.baseclass_0.m_surfaceID
    vmovups ymmword ptr [rcx], ymm0
  }
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
  R_RT_Handle v12; 
  R_RT_Handle v13; 

  _RDI = cacheRt;
  ArraySliceIndex = R_SpotShadow_ActiveCacheEntry::GetArraySliceIndex(this);
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi]
    vmovups [rsp+68h+var_48], ymm0
  }
  _RAX = R_RT_GetViewInternal(&v13, &v12, subsetid + ArraySliceIndex, 0);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups [rsp+68h+var_48], ymm0
  }
  R_RT_DepthHandle::Cast((R_RT_DepthHandle *)result, &v12);
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
  R_RT_Handle v10; 
  R_RT_Handle v11; 

  ArraySliceIndex = R_SpotShadow_ActiveCacheEntry::GetArraySliceIndex(this);
  __asm
  {
    vmovups ymm0, ymmword ptr cs:s_R_SpotShadow_Storage.activeCache.arrayDepthRt.baseclass_0.m_surfaceID
    vmovups [rsp+68h+var_48], ymm0
  }
  _RAX = R_RT_GetViewInternal(&v11, &v10, subsetid + ArraySliceIndex, 0);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups [rsp+68h+var_48], ymm0
  }
  R_RT_DepthHandle::Cast((R_RT_DepthHandle *)result, &v10);
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
  int v17; 
  _BYTE *v18; 
  __int64 v19; 
  unsigned int *p_renderFlags; 
  __int64 v21; 
  vec3_t outOrigin; 
  __int64 data[2]; 
  unsigned int v24; 
  unsigned int v25; 
  __int64 v26; 
  Sphere sphere; 

  v26 = -2i64;
  v7 = R_SceneLightIndexToDynLightIndex(sceneLightIndex);
  v8 = scene.dpvs.entVisData[spotShadowIndex + 4];
  v24 = sceneLightIndex;
  v25 = spotShadowIndex;
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
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+0B8h+outOrigin]
          vmovss  dword ptr [rsp+0B8h+sphere.origin], xmm0
          vmovss  xmm1, dword ptr [rsp+0B8h+outOrigin+4]
          vmovss  dword ptr [rsp+0B8h+sphere.origin+4], xmm1
          vmovss  xmm0, dword ptr [rsp+0B8h+outOrigin+8]
          vmovss  dword ptr [rsp+0B8h+sphere.origin+8], xmm0
        }
        if ( !*p_obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 1093, ASSERT_TYPE_ASSERT, "(sceneDObj->obj)", (const char *)&queryFormat, "sceneDObj->obj") )
          __debugbreak();
        *(double *)&_XMM0 = DObjGetRadius(*p_obj);
        __asm
        {
          vmovss  [rsp+0B8h+sphere.radius], xmm0
          vmulss  xmm0, xmm0, xmm0
          vmovss  [rsp+0B8h+sphere.radiusSq], xmm0
        }
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
  v17 = 0;
  if ( scene.sceneDObjModelCount > 0 )
  {
    v18 = (char *)scene.sceneModel + 124;
    do
    {
      v19 = (*((_DWORD *)v18 - 1) >> 10) & 0xFFF;
      if ( (_DWORD)v19 == gfxCfg.entnumNone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 1122, ASSERT_TYPE_ASSERT, "(entnum != gfxCfg.entnumNone)", (const char *)&queryFormat, "entnum != gfxCfg.entnumNone") )
        __debugbreak();
      v8[v19] = 2;
      if ( (*v18 & 0x28) == 0 && R_DynamicLightFrustumTestBox(v7, (const Bounds *)(v18 - 92)) )
        v8[v19] = 1;
      ++v17;
      v18 += 152;
    }
    while ( v17 < scene.sceneDObjModelCount );
  }
  if ( scene.sceneBrushCount > 0 )
  {
    p_renderFlags = &scene.sceneBrush[0].renderFlags;
    do
    {
      v21 = *((unsigned __int16 *)p_renderFlags - 36);
      v8[v21] = 2;
      if ( (*p_renderFlags & 0x20000) == 0 )
        v8[v21] = !R_DynamicLightFrustumTestBox(v7, *((const Bounds **)p_renderFlags - 8)) + 1;
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
  int needsDynamicShadows; 
  bool v11; 
  int v12; 
  unsigned int primaryLightCount; 
  int v14; 
  R_SpotShadow_ActiveCacheEntry *ActiveCacheEntryForSceneLight; 
  R_SpotShadow_ActiveCacheEntry *v21; 
  R_SpotShadow_ActiveCacheEntry *v22; 
  R_SpotShadow_ActiveCacheEntry *prev; 
  R_SpotShadow_ActiveCacheEntry *mostRottenEntry; 
  const GfxLight *v32; 
  signed int clientIndex; 
  __int64 v34; 
  __int64 v35; 
  GfxMatrix lookupMatrix; 
  int v38; 
  int v39; 
  int v40; 
  int v41; 

  v4 = sceneLightIndex;
  _RBX = data;
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 1255, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( (unsigned int)v4 >= 0x1984 )
  {
    LODWORD(v34) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 1257, ASSERT_TYPE_ASSERT, "(unsigned)( sceneLightIndex ) < (unsigned)( (6500 + I_max( ( 4 + 1 ), I_max( 32, 32 ) )) )", "sceneLightIndex doesn't index GFX_MAX_SCENE_LIGHTS\n\t%i not in [0, %i)", v34, 6532) )
      __debugbreak();
  }
  type = _RBX->sceneLights[v4].type;
  if ( (unsigned __int8)(type - 2) > 1u )
  {
    LODWORD(v34) = type;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 1261, ASSERT_TYPE_ASSERT, "( ( light->type == 2 || light->type == 3 ) )", "( light->type ) = %i", v34) )
      __debugbreak();
  }
  if ( !_RBX->sceneLights[v4].canUseShadowMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 1262, ASSERT_TYPE_ASSERT, "(light->canUseShadowMap)", (const char *)&queryFormat, "light->canUseShadowMap") )
    __debugbreak();
  spotShadowUpdateCount = _RBX->spotShadowUpdateCount;
  if ( (unsigned int)spotShadowUpdateCount >= 8 )
  {
    LODWORD(v35) = 8;
    LODWORD(v34) = _RBX->spotShadowUpdateCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 1265, ASSERT_TYPE_ASSERT, "(unsigned)( spotShadowUpdateIndex ) < (unsigned)( R_SPOTSHADOW_UPDATE_PER_FRAME_LIMIT )", "spotShadowUpdateIndex doesn't index R_SPOTSHADOW_UPDATE_PER_FRAME_LIMIT\n\t%i not in [0, %i)", v34, v35) )
      __debugbreak();
  }
  ++_RBX->spotShadowUpdateCount;
  _RDI = spotShadowUpdateCount;
  _RBX->spotShadowUpdates[_RDI].sceneLightIndex = v4;
  needsDynamicShadows = _RBX->sceneLights[v4].needsDynamicShadows;
  _RBX->spotShadowUpdates[_RDI].supportsDynamicShadows = needsDynamicShadows;
  if ( !castDynamicShadows || (v11 = needsDynamicShadows == 0, v12 = 1, v11) )
    v12 = 0;
  _RBX->spotShadowUpdates[_RDI].needsDynamicShadows = v12;
  primaryLightCount = rgp.world->primaryLightCount;
  if ( (unsigned int)v4 >= primaryLightCount )
    R_SceneLightIndexToDynLightIndex(v4);
  *(_QWORD *)&_RBX->spotShadowUpdates[_RDI].viewportParms.viewport.x = 0i64;
  v38 = 512;
  v39 = 512;
  v40 = 768;
  v41 = 1024;
  v14 = 2 * *(&v38 + (int)rg.shadowMapResolutionIndex);
  v38 = 512;
  _RBX->spotShadowUpdates[_RDI].viewportParms.viewport.width = v14;
  v39 = 512;
  v40 = 768;
  v41 = 1024;
  _RBX->spotShadowUpdates[_RDI].viewportParms.viewport.height = 2 * *(&v38 + (int)rg.shadowMapResolutionIndex);
  R_SetViewParmsForLight(&_RBX->sceneLights[v4], &_RBX->spotShadowUpdates[_RDI].viewportParms.viewParms);
  if ( (unsigned int)v4 < primaryLightCount && _RBX->sceneLights[v4].needsDynamicShadows && (*((_DWORD *)&viewInfo->viewportFeatures + 11) & 0x10000) != 0 )
  {
    ActiveCacheEntryForSceneLight = R_SpotShadow_GetActiveCacheEntryForSceneLight(v4);
    if ( ActiveCacheEntryForSceneLight )
    {
      _RBX->spotShadowUpdates[_RDI].active = ActiveCacheEntryForSceneLight;
      _RBX->spotShadowUpdates[_RDI].activeStatus = 4;
      R_SpotShadow_ActiveCacheEntry::Unrot(ActiveCacheEntryForSceneLight);
    }
    else if ( _RBX->spotShadowUpdates[_RDI].needsDynamicShadows )
    {
      _RBX->spotShadowUpdates[_RDI].active = R_SpotShadow_AllocateActiveCacheEntryForSceneLight(v4);
      _RBX->spotShadowUpdates[_RDI].activeStatus = 1;
      R_GetSpotShadowLookupMatrix(&_RBX->spotShadowUpdates[_RDI].viewportParms.viewParms, &lookupMatrix);
      _RDX = _RBX->spotShadowUpdates[_RDI].active;
      __asm
      {
        vmovss  xmm3, dword ptr [rdi+rbx+0E901Ch]
        vmovss  xmm2, dword ptr [rdi+rbx+0E9018h]
        vmovups ymm0, ymmword ptr [rsp+0E8h+lookupMatrix.m]
        vmovups ymm1, ymmword ptr [rsp+0E8h+lookupMatrix.m+20h]
        vmovups ymmword ptr [rdx], ymm0
        vmovups ymmword ptr [rdx+20h], ymm1
        vmovss  dword ptr [rdx+44h], xmm2
        vmovss  dword ptr [rdx+48h], xmm3
      }
    }
    else
    {
      _RBX->spotShadowUpdates[_RDI].active = NULL;
      _RBX->spotShadowUpdates[_RDI].activeStatus = 0;
    }
  }
  else
  {
    _RBX->spotShadowUpdates[_RDI].active = NULL;
    _RBX->spotShadowUpdates[_RDI].activeStatus = 0;
    v21 = R_SpotShadow_GetActiveCacheEntryForSceneLight(v4);
    v22 = v21;
    if ( v21 )
    {
      R_SpotShadow_ActiveCacheEntry::Unrot(v21);
      if ( s_R_SpotShadow_Storage.activeCache.leastRottenEntry != v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 615, ASSERT_TYPE_ASSERT, "(s_R_SpotShadow_Storage.activeCache.leastRottenEntry == entry)", (const char *)&queryFormat, "s_R_SpotShadow_Storage.activeCache.leastRottenEntry == entry") )
        __debugbreak();
      if ( v22->next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 616, ASSERT_TYPE_ASSERT, "(entry->next == nullptr)", (const char *)&queryFormat, "entry->next == nullptr") )
        __debugbreak();
      prev = v22->prev;
      if ( prev )
      {
        prev->next = NULL;
        prev = v22->prev;
      }
      s_R_SpotShadow_Storage.activeCache.leastRottenEntry = prev;
      mostRottenEntry = s_R_SpotShadow_Storage.activeCache.mostRottenEntry;
      if ( s_R_SpotShadow_Storage.activeCache.mostRottenEntry == v22 )
        mostRottenEntry = NULL;
      s_R_SpotShadow_Storage.activeCache.mostRottenEntry = mostRottenEntry;
      v22->prev = NULL;
      v22->next = s_R_SpotShadow_Storage.activeCache.firstFreeEntry;
      s_R_SpotShadow_Storage.activeCache.firstFreeEntry = v22;
      s_R_SpotShadow_Storage.activeCache.sceneLightToActiveCacheMapping[v4] = 16;
      v22->sceneLightIndex = 6532;
    }
  }
  _RBP = R_SpotShadow_GetStaleCacheEntryForSceneLight(v4);
  if ( _RBP )
  {
    if ( (unsigned int)v4 >= primaryLightCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 1345, ASSERT_TYPE_ASSERT, "(!isDynamicLight)", (const char *)&queryFormat, "!isDynamicLight") )
      __debugbreak();
  }
  else
  {
    _RBP = R_SpotShadow_AllocateStaleCacheEntryForSceneLight(v4);
    if ( !_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 1352, ASSERT_TYPE_ASSERT, "(staleCacheEntry)", (const char *)&queryFormat, "staleCacheEntry") )
      __debugbreak();
    if ( _RBX->spotShadowUpdates[_RDI].active )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovss  xmm3, dword ptr [rdi+rbx+0E901Ch]
        vmovss  xmm2, dword ptr [rdi+rbx+0E9018h]
        vmovups ymmword ptr [rbp+0], ymm0
        vmovups ymm1, ymmword ptr [rax+20h]
      }
    }
    else
    {
      R_GetSpotShadowLookupMatrix(&_RBX->spotShadowUpdates[_RDI].viewportParms.viewParms, &lookupMatrix);
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+0E8h+lookupMatrix.m]
        vmovss  xmm3, dword ptr [rdi+rbx+0E901Ch]
        vmovss  xmm2, dword ptr [rdi+rbx+0E9018h]
        vmovups ymm1, ymmword ptr [rsp+0E8h+lookupMatrix.m+20h]
        vmovups ymmword ptr [rbp+0], ymm0
      }
    }
    __asm
    {
      vmovss  dword ptr [rbp+48h], xmm3
      vmovss  dword ptr [rbp+44h], xmm2
      vmovups ymmword ptr [rbp+20h], ymm1
    }
  }
  _RBP->staleness = _RBX->spotShadowUpdates[_RDI].needsDynamicShadows != 0;
  v11 = _RBX->spotShadowUpdates[_RDI].needsDynamicShadows == 0;
  _RBX->spotShadowUpdates[_RDI].stale = _RBP;
  if ( !v11 )
  {
    v32 = &_RBX->sceneLights[v4];
    clientIndex = viewInfo->clientIndex;
    if ( (unsigned int)v4 < primaryLightCount )
      R_AddPrimaryLightSpotShadowModelEntities((LocalClientNum_t)clientIndex, v4, spotShadowUpdateCount, v32);
    else
      R_AddDynamicLightSpotShadowModelEntities(clientIndex, v4, spotShadowUpdateCount, v32);
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
  unsigned int v7; 
  unsigned int *p_arraySliceIndex; 
  __int64 v9; 
  __int64 v10; 
  unsigned int v11; 
  __int64 *v12; 
  __int64 v13; 
  __int64 v14; 
  GfxBackEndData *v15; 
  unsigned int *v17; 
  __int64 v18; 
  int v19; 
  unsigned int primaryLightCount; 
  unsigned int v21; 
  const GfxLight *v22; 
  bool v23; 
  int v24; 
  unsigned int v25; 
  unsigned __int8 needsDynamicShadows; 
  const char *v27; 
  const char *v28; 
  unsigned int flags; 
  bool v31; 
  GfxLightViewFrustum *lightViewFrustums; 
  unsigned int v39; 
  const vec4_t *v40; 
  bool v41; 
  DebugGlobals *p_debugGlobals; 
  unsigned __int16 ranking1; 
  __int64 ranking0; 
  const char *v49; 
  char *fmt; 
  __int64 v53; 
  __int64 v54; 
  bool v55; 
  bool v56; 
  DebugGlobals *debugGlobalsEntry; 
  unsigned __int8 v58; 
  unsigned int *v59; 
  __int64 v62; 
  GfxViewParms viewParms; 
  __int64 v64[8]; 

  spotShadowCount = data->spotShadowCount;
  if ( (unsigned int)spotShadowCount > 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 1618, ASSERT_TYPE_ASSERT, "(spotShadowCount <= ( sizeof( *array_counter( data->spotShadows ) ) + 0 ))", (const char *)&queryFormat, "spotShadowCount <= ARRAY_COUNT( data->spotShadows )") )
    __debugbreak();
  if ( data->spotShadowUpdateCount > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 1621, ASSERT_TYPE_ASSERT, "(spotShadowUpdateCount <= ( sizeof( *array_counter( data->spotShadowUpdates ) ) + 0 ))", (const char *)&queryFormat, "spotShadowUpdateCount <= ARRAY_COUNT( data->spotShadowUpdates )") )
    __debugbreak();
  integer = sm_showOverlayFocus->current.integer;
  v58 = integer;
  if ( (integer < 0 || (unsigned int)integer > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)integer, "signed", integer) )
    __debugbreak();
  memset(v64, 0, sizeof(v64));
  v7 = data->spotShadowCount;
  if ( v7 )
  {
    p_arraySliceIndex = &data->spotShadows[0].arraySliceIndex;
    v9 = v7;
    do
    {
      v10 = *p_arraySliceIndex;
      p_arraySliceIndex += 24;
      *((_BYTE *)v64 + v10) = -1;
      --v9;
    }
    while ( v9 );
  }
  v11 = 0;
  v12 = v64;
  v13 = 64i64;
  do
  {
    if ( *(_BYTE *)v12 )
    {
      v14 = v11++;
      if ( (unsigned int)v14 > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)v14, "unsigned", v14) )
        __debugbreak();
      *(_BYTE *)v12 = v14;
    }
    v12 = (__int64 *)((char *)v12 + 1);
    --v13;
  }
  while ( v13 );
  v15 = data;
  v55 = r_debugDrawLightsFilterShadowCasters->current.integer != 3;
  v56 = r_debugDrawLightsFilterShadowCasters->current.integer != 2;
  if ( (_DWORD)spotShadowCount )
  {
    __asm
    {
      vmovaps [rsp+298h+var_38], xmm6
      vmovss  xmm6, cs:__real@41800000
    }
    v17 = &data->spotShadows[0].arraySliceIndex;
    debugGlobalsEntry = &data->debugGlobals;
    v59 = &data->spotShadows[0].arraySliceIndex;
    v62 = spotShadowCount;
    while ( 1 )
    {
      v18 = *(v17 - 1);
      if ( (unsigned int)v18 >= v15->sceneLightCount )
      {
        LODWORD(v54) = v15->sceneLightCount;
        LODWORD(v53) = *(v17 - 1);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 1664, ASSERT_TYPE_ASSERT, "(unsigned)( sceneLightIndex ) < (unsigned)( data->sceneLightCount )", "sceneLightIndex doesn't index data->sceneLightCount\n\t%i not in [0, %i)", v53, v54) )
          __debugbreak();
      }
      v19 = 0;
      primaryLightCount = rgp.world->primaryLightCount;
      v21 = v18;
      v22 = &v15->sceneLights[v18];
      v23 = 0;
      if ( (unsigned int)v18 < primaryLightCount )
      {
        v24 = v18 - rgp.world->lastSunPrimaryLightIndex;
        if ( !motionBits && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
          __debugbreak();
        v25 = motionBits[(v24 - 1i64) >> 5];
        v19 = _bittest((const int *)&v25, ((_BYTE)v24 - 1) & 0x1F);
      }
      else
      {
        v21 = R_SceneLightIndexToDynLightIndex(v18);
      }
      needsDynamicShadows = v22->needsDynamicShadows;
      v27 = nameTagBuf;
      if ( (unsigned int)v18 < primaryLightCount )
      {
        if ( needsDynamicShadows )
        {
          v28 = "Pm(%d)";
          if ( !v19 )
            v28 = "P(%d)";
          j_sprintf(nameTagBuf, v28, v21);
          flags = v22->flags;
          if ( (flags & 0x2000) != 0 )
          {
            _RCX = &nameTagBuf[-1];
            do
              v31 = *++_RCX == 0;
            while ( !v31 );
            __asm
            {
              vmovsd  xmm0, qword ptr cs:aUpdatedyn; "_UpdateDyn"
              vmovsd  qword ptr [rcx], xmm0
            }
            strcpy(_RCX + 8, "yn");
            flags = v22->flags;
          }
          if ( (flags & 0x200) != 0 )
          {
            _RCX = &nameTagBuf[-1];
            do
              v31 = *++_RCX == 0;
            while ( !v31 );
            __asm
            {
              vmovsd  xmm0, qword ptr cs:aCacheddyn; "_CachedDyn"
              vmovsd  qword ptr [rcx], xmm0
            }
            strcpy(_RCX + 8, "yn");
            flags = data->sceneLights[v18].flags;
          }
          if ( (flags & 0x400) != 0 )
          {
            _RCX = &nameTagBuf[-1];
            do
              v31 = *++_RCX == 0;
            while ( !v31 );
            __asm
            {
              vmovsd  xmm0, qword ptr cs:aSkipdyn; "_SkipDyn"
              vmovsd  qword ptr [rcx], xmm0
            }
            _RCX[8] = aSkipdyn[8];
          }
          _RDI = v18;
          lightViewFrustums = rgp.world->lightViewFrustums;
          v23 = lightViewFrustums && lightViewFrustums[v18].planeCount;
          goto LABEL_57;
        }
        j_sprintf(nameTagBuf, "Ps(%d)", v21);
      }
      else
      {
        v27 = "D";
        if ( !needsDynamicShadows )
          v27 = "Ds";
      }
      _RDI = v18;
LABEL_57:
      R_SetViewParmsForLight(v22, &viewParms);
      v39 = v22->flags;
      if ( (v39 & 0x1000) != 0 )
      {
        v40 = &colorGreen;
      }
      else if ( (v39 & 0x800) != 0 )
      {
        v40 = &colorYellow;
      }
      else if ( (v39 & 0x200) != 0 )
      {
        v40 = &colorRed;
      }
      else if ( (v39 & 0x400) != 0 )
      {
        v40 = &colorMdRed;
      }
      else
      {
        v40 = &colorDkRed;
        if ( (v39 & 0x100) == 0 )
          v40 = &colorDkGrey;
      }
      if ( v58 && v58 != *((unsigned __int8 *)v64 + *v59) + 1 )
        goto LABEL_75;
      v41 = v55;
      if ( v22->needsDynamicShadows )
        v41 = v56;
      if ( v41 )
      {
        p_debugGlobals = &data->debugGlobals;
        if ( v23 )
          R_AddDebugLightProxyViewFrustum(debugGlobalsEntry, &rgp.world->lightViewFrustums[_RDI], v40);
        else
          R_AddDebugFrustumColor(debugGlobalsEntry, &viewParms, v40, v40);
      }
      else
      {
LABEL_75:
        p_debugGlobals = &data->debugGlobals;
      }
      _R14 = g_lightScore;
      __asm { vmovss  xmm2, dword ptr [r14+rdi*8] }
      ranking1 = g_lightScore[_RDI].ranking1;
      ranking0 = g_lightScore[_RDI].ranking0;
      __asm
      {
        vcvtss2sd xmm2, xmm2, xmm2
        vmovq   r8, xmm2
      }
      if ( ranking1 == 255 )
      {
        v49 = j_va("%s:%.3f:%d", v27, *(double *)&_XMM2, ranking0);
      }
      else
      {
        LODWORD(fmt) = ranking1;
        v49 = j_va("%s:%.3f:%d-%d", v27, *(double *)&_XMM2, ranking0, fmt);
      }
      __asm { vmovaps xmm3, xmm6; size }
      R_AddDebugString(p_debugGlobals, &viewParms.camera.origin, v40, *(float *)&_XMM3, v49);
      v15 = data;
      v17 = v59 + 24;
      v31 = v62-- == 1;
      v59 += 24;
      if ( v31 )
      {
        __asm { vmovaps xmm6, [rsp+298h+var_38] }
        return;
      }
    }
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
    vmovaps xmmword ptr [rax-88h], xmm13
    vmovaps xmmword ptr [rax-98h], xmm14
    vmovaps xmmword ptr [rax-0A8h], xmm15
    vmovups ymm10, ymmword ptr [rcx+80h]
    vmovss  xmm9, cs:__real@3f000000
    vmovups ymm0, ymmword ptr [rcx+0A0h]
    vmovss  xmm1, dword ptr [rcx+100h]
    vmovss  xmm7, dword ptr [rcx+80h]
    vmovss  xmm8, dword ptr [rcx+0A0h]
    vmovss  xmm3, dword ptr [rcx+90h]
    vmovss  xmm11, dword ptr [rcx+0B0h]
    vmovss  xmm14, dword ptr [rcx+94h]
    vmovss  xmm15, dword ptr [rcx+84h]
    vmovss  xmm2, dword ptr cs:__xmm@80000000800000008000000080000000
    vxorps  xmm6, xmm1, xmm2
    vmovss  xmm1, dword ptr [rcx+108h]
    vxorps  xmm5, xmm1, xmm2
    vmovups [rsp+138h+var_D8], ymm0
    vmovss  xmm0, dword ptr [rcx+104h]
    vxorps  xmm4, xmm0, xmm2
    vmulss  xmm1, xmm4, dword ptr [rcx+98h]
    vmovss  xmm0, dword ptr [rcx+0A4h]
    vmovss  [rsp+138h+var_128], xmm0
    vmovss  xmm0, dword ptr [rcx+0B4h]
    vmovss  [rsp+138h+var_124], xmm0
    vmulss  xmm0, xmm6, dword ptr [rcx+88h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, dword ptr [rcx+0A8h]
    vaddss  xmm0, xmm2, xmm1
    vaddss  xmm0, xmm0, dword ptr [rcx+0B8h]
    vmulss  xmm1, xmm4, dword ptr [rcx+9Ch]
    vmovss  [rsp+138h+var_120], xmm0
    vmulss  xmm0, xmm6, dword ptr [rcx+8Ch]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, dword ptr [rcx+0ACh]
    vaddss  xmm0, xmm2, xmm1
    vmovss  [rsp+138h+var_138], xmm4
    vaddss  xmm4, xmm0, dword ptr [rcx+0BCh]
    vmulss  xmm3, xmm3, [rsp+138h+var_138]
    vmulss  xmm0, xmm10, xmm9
    vmovss  [rsp+138h+var_12C], xmm4
    vshufps xmm13, xmm10, xmm10, 0FFh
    vmovss  [rsp+138h+var_134], xmm6
    vmulss  xmm6, xmm13, xmm9
    vaddss  xmm1, xmm0, xmm6
    vmovss  dword ptr [rdx], xmm1
    vextractf128 xmm0, ymm10, 1
    vmulss  xmm0, xmm0, xmm9
    vextractf128 xmm12, ymm10, 1
    vmovss  [rsp+138h+var_130], xmm5
    vmovups [rsp+138h+var_118], ymm10
    vmovss  xmm10, dword ptr [rsp+138h+var_D8+0Ch]
    vmulss  xmm4, xmm9, xmm10
    vshufps xmm12, xmm12, xmm12, 0FFh
    vmulss  xmm5, xmm12, xmm9
    vaddss  xmm1, xmm0, xmm5
    vmulss  xmm0, xmm7, [rsp+138h+var_134]
    vmovss  xmm7, [rsp+138h+var_12C]
    vmovss  dword ptr [rdx+10h], xmm1
    vmulss  xmm1, xmm9, dword ptr [rsp+138h+var_D8]
    vaddss  xmm2, xmm1, xmm4
    vmulss  xmm1, xmm8, [rsp+138h+var_130]
    vmovups ymm8, [rsp+138h+var_118]
    vmovss  dword ptr [rdx+20h], xmm2
    vaddss  xmm2, xmm3, xmm0
    vaddss  xmm2, xmm2, xmm1
    vaddss  xmm0, xmm2, xmm11
    vaddss  xmm3, xmm0, xmm7
    vmulss  xmm1, xmm3, xmm9
    vmovss  dword ptr [rdx+30h], xmm1
    vmovups xmm0, xmm8
    vshufps xmm0, xmm0, xmm0, 55h ; 'U'
    vmulss  xmm0, xmm0, xmm9
    vsubss  xmm1, xmm6, xmm0
    vmovss  dword ptr [rdx+4], xmm1
    vextractf128 xmm2, ymm8, 1
    vshufps xmm2, xmm2, xmm2, 55h ; 'U'
    vmulss  xmm0, xmm2, xmm9
    vsubss  xmm1, xmm5, xmm0
    vmulss  xmm0, xmm9, dword ptr [rsp+138h+var_D8+4]
    vmovss  dword ptr [rdx+14h], xmm1
    vsubss  xmm1, xmm4, xmm0
    vmovss  dword ptr [rdx+24h], xmm1
    vmulss  xmm4, xmm7, xmm9
    vmulss  xmm2, xmm14, [rsp+138h+var_138]
    vmulss  xmm0, xmm15, [rsp+138h+var_134]
    vaddss  xmm3, xmm2, xmm0
    vmovss  xmm0, [rsp+138h+var_130]
    vmulss  xmm1, xmm0, [rsp+138h+var_128]
    vaddss  xmm2, xmm3, xmm1
    vaddss  xmm0, xmm2, [rsp+138h+var_124]
    vmulss  xmm3, xmm0, xmm9
    vmovss  xmm0, dword ptr [rsp+138h+var_D8+8]
    vsubss  xmm1, xmm4, xmm3
    vmovss  dword ptr [rdx+34h], xmm1
    vextractps dword ptr [rdx+8], xmm8, 2
    vextractf128 xmm1, ymm8, 1
    vextractps dword ptr [rdx+18h], xmm1, 2
    vmovss  xmm1, [rsp+138h+var_120]
    vmovss  dword ptr [rdx+28h], xmm0
    vmovss  dword ptr [rdx+38h], xmm1
    vmovss  dword ptr [rdx+0Ch], xmm13
    vmovss  dword ptr [rdx+1Ch], xmm12
    vmovss  dword ptr [rdx+2Ch], xmm10
    vmovss  dword ptr [rdx+3Ch], xmm7
  }
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
    vmovaps xmm13, xmmword ptr [r11-88h]
    vmovaps xmm14, xmmword ptr [r11-98h]
    vmovaps xmm15, xmmword ptr [r11-0A8h]
  }
}

/*
==============
R_SetViewParmsForLight
==============
*/
void R_SetViewParmsForLight(const GfxLight *light, GfxViewParms *viewParms)
{
  const vec3_t *m; 
  const vec3_t *v34; 
  bool v49; 
  bool v50; 
  double v135; 
  float v137; 
  char v141; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm3, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovaps xmmword ptr [rax-38h], xmm6
  }
  _RBX = &viewParms->camera.axis.m[1];
  __asm { vmovaps xmmword ptr [rax-48h], xmm7 }
  _RDI = light;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovss  xmm8, cs:__real@80000000
  }
  viewParms->subpixelOffset = 0i64;
  _RBP = viewParms;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+20h]
    vxorps  xmm0, xmm0, xmm3
    vmovss  dword ptr [rdx+10Ch], xmm0
    vmovss  xmm1, dword ptr [rcx+24h]
    vxorps  xmm2, xmm1, xmm3
    vmovss  dword ptr [rdx+110h], xmm2
    vmovss  xmm0, dword ptr [rcx+28h]
    vxorps  xmm1, xmm0, xmm3
    vmovss  dword ptr [rdx+114h], xmm1
    vmovss  xmm0, dword ptr [rdi+24h]
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps [rsp+0F8h+var_88], xmm11
    vmovaps [rsp+0F8h+var_98], xmm12
    vmovaps [rsp+0F8h+var_A8], xmm13
  }
  v49 = __CFADD__(light, 44i64) || &light->up == NULL;
  _RCX = &light->up;
  __asm
  {
    vmovss  xmm13, cs:__real@3f800000
    vmovss  xmm1, dword ptr [rcx]
    vmulss  xmm2, xmm1, dword ptr [rdi+20h]
    vmulss  xmm3, xmm0, dword ptr [rcx+4]
    vmovss  xmm0, dword ptr [rdi+28h]
    vmulss  xmm1, xmm0, dword ptr [rcx+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vandps  xmm2, xmm2, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm2, cs:__real@3f7d70a4
  }
  if ( v49 )
  {
    Vec3Cross(_RCX, viewParms->camera.axis.m, &viewParms->camera.axis.m[1]);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+4]
      vmovss  xmm5, dword ptr [rbx]
      vmovss  xmm3, dword ptr [rbx+8]
      vmulss  xmm0, xmm0, xmm0
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm4, xmm2, xmm2
      vcmpless xmm0, xmm4, xmm8
      vblendvps xmm0, xmm4, xmm13, xmm0
      vdivss  xmm2, xmm13, xmm0
      vmulss  xmm0, xmm5, xmm2
      vmovss  dword ptr [rbx], xmm0
      vmulss  xmm1, xmm2, dword ptr [rbx+4]
      vmovss  dword ptr [rbx+4], xmm1
      vmulss  xmm0, xmm2, dword ptr [rbx+8]
      vmovss  dword ptr [rbx+8], xmm0
    }
    v34 = _RBX;
    m = _RBP->camera.axis.m;
    _RBX = &_RBP->camera.axis.m[2];
  }
  else
  {
    PerpendicularVector(viewParms->camera.axis.m, &viewParms->camera.axis.m[2]);
    m = &_RBP->camera.axis.m[2];
    v34 = _RBP->camera.axis.m;
  }
  Vec3Cross(m, v34, _RBX);
  v49 = _RDI->canUseShadowMap == 0;
  if ( !_RDI->canUseShadowMap )
  {
    v50 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 743, ASSERT_TYPE_ASSERT, "(light->canUseShadowMap)", (const char *)&queryFormat, "light->canUseShadowMap");
    v49 = !v50;
    if ( v50 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm1, dword ptr [rdi+60h]
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm1, xmm0
  }
  if ( !v49 )
    __asm { vcomiss xmm1, xmm13 }
  __asm
  {
    vcvtss2sd xmm0, xmm1, xmm1
    vmovsd  [rsp+0F8h+var_D0], xmm0
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 744, ASSERT_TYPE_ASSERT, "( ( light->cosHalfFovOuter > 0.0f && light->cosHalfFovOuter < 1.0f ) )", "( light->cosHalfFovOuter ) = %g", v135) )
    __debugbreak();
  __asm
  {
    vmovss  xmm2, cs:__real@3f7fbe77; max
    vmovss  xmm1, cs:__real@3a83126f; min
    vmovss  xmm0, dword ptr [rdi+60h]; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm11, dword ptr [rdi+38h]
    vmovss  dword ptr [rbp+100h], xmm11
    vmovaps xmm12, xmm0
  }
  _RBP->camera.origin.v[1] = _RDI->origin.v[1];
  _RBP->camera.origin.v[2] = _RDI->origin.v[2];
  __asm
  {
    vmovsd  xmm6, qword ptr [rdi+54h]
    vmovss  xmm7, dword ptr [rdi+50h]
    vmovsd  xmm9, qword ptr [rdi+20h]
    vmovss  xmm10, dword ptr [rdi+60h]
    vmulss  xmm1, xmm6, xmm6
  }
  v137 = _RDI->bulbLength.v[2];
  __asm
  {
    vmovss  xmm5, [rsp+0F8h+var_C0]
    vmovsd  [rsp+0F8h+var_C8], xmm6
    vmovss  xmm4, dword ptr [rsp+0F8h+var_C8+4]
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm0, xmm2, xmm1
    vsqrtss xmm3, xmm0, xmm0
    vcmpless xmm0, xmm3, xmm8
    vblendvps xmm0, xmm3, xmm13, xmm0
    vdivss  xmm2, xmm13, xmm0
    vmulss  xmm0, xmm6, xmm2
    vmulss  xmm1, xmm0, xmm7
    vaddss  xmm8, xmm1, xmm6
    vmulss  xmm0, xmm4, xmm2
    vmulss  xmm1, xmm0, xmm7
    vaddss  xmm6, xmm1, xmm4
    vmulss  xmm0, xmm5, xmm2
    vmulss  xmm1, xmm0, xmm7
    vaddss  xmm5, xmm1, xmm5
    vmulss  xmm0, xmm9, xmm8
    vshufps xmm2, xmm9, xmm9, 55h ; 'U'
    vmulss  xmm3, xmm2, xmm6
    vaddss  xmm3, xmm3, xmm0
    vmulss  xmm0, xmm8, xmm8
    vmulss  xmm1, xmm6, xmm6
    vmulss  xmm2, xmm5, [rsp+0F8h+var_B0]
    vaddss  xmm4, xmm3, xmm2
    vandps  xmm7, xmm4, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vsubss  xmm0, xmm3, xmm0
    vsqrtss xmm1, xmm0, xmm0
    vmulss  xmm4, xmm1, xmm10
    vmulss  xmm2, xmm10, xmm10
    vsubss  xmm0, xmm13, xmm2
    vsqrtss xmm1, xmm0, xmm0
    vdivss  xmm2, xmm4, xmm1
    vaddss  xmm5, xmm2, xmm7
    vaddss  xmm0, xmm5, xmm7
    vaddss  xmm3, xmm0, dword ptr [rdi+74h]
    vmulss  xmm0, xmm5, dword ptr [rdi+20h]
    vaddss  xmm1, xmm0, xmm11
    vmovss  dword ptr [rbp+100h], xmm1
    vmulss  xmm0, xmm5, dword ptr [rdi+24h]
    vaddss  xmm1, xmm0, dword ptr [rbp+104h]
    vmovss  dword ptr [rbp+104h], xmm1
    vmulss  xmm0, xmm5, dword ptr [rdi+28h]
    vaddss  xmm1, xmm0, dword ptr [rbp+108h]
    vmaxss  xmm8, xmm3, xmm13
    vmovss  dword ptr [rbp+108h], xmm1
    vaddss  xmm1, xmm5, dword ptr [rdi+44h]
    vaddss  xmm0, xmm8, xmm13
    vmaxss  xmm7, xmm1, xmm0
  }
  MatrixForViewerOrthogonalNoOrigin(&_RBP->camera.axis, &_RBP->viewMatrix.m);
  __asm
  {
    vmulss  xmm0, xmm12, xmm12
    vsubss  xmm0, xmm13, xmm0
    vsqrtss xmm2, xmm0, xmm0
    vdivss  xmm1, xmm13, xmm12
    vmulss  xmm6, xmm2, xmm1
    vmovaps xmm1, xmm6; tanHalfFovY
    vmovaps xmm0, xmm6; tanHalfFovX
    vmovaps xmm3, xmm7; zFar
    vmovaps xmm2, xmm8; zNear
  }
  FinitePerspectiveMatrix(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, &_RBP->projectionMatrix.m);
  R_SetupViewProjectionMatrices(_RBP);
  _R11 = &v141;
  _RBP->camera.depthHackFoV = 0i64;
  __asm
  {
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovss  dword ptr [rbp+140h], xmm8
    vmovss  dword ptr [rbp+144h], xmm7
    vmovss  dword ptr [rbp+148h], xmm8
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovss  dword ptr [rbp+14Ch], xmm7
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovss  dword ptr [rbp+130h], xmm6
    vmovss  dword ptr [rbp+134h], xmm6
    vmovaps xmm6, xmmword ptr [r11-10h]
  }
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

void __fastcall R_SpotShadow_CreateStaleCacheRTs(double _XMM0_8, __int64 a2, double _XMM2_8)
{
  unsigned int fmt; 
  float fmta; 
  float depth; 
  float arraySliceCount; 
  float mipLimit; 
  float format; 
  R_RT_Handle result; 
  R_RT_Handle v20; 

  if ( s_R_SpotShadow_Storage.staleCache.arrayColorRt.m_surfaceID )
  {
    R_RT_Handle::GetSurface(&s_R_SpotShadow_Storage.staleCache.arrayColorRt);
  }
  else
  {
    if ( s_R_SpotShadow_Storage.staleCache.arrayColorRt.m_tracking.m_allocCounter != s_R_SpotShadow_Storage.staleCache.arrayColorRt.m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", s_R_SpotShadow_Storage.staleCache.arrayColorRt.m_surfaceID + 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    *(_DWORD *)&v20.m_surfaceID = 512;
    *((_DWORD *)&v20.m_surfaceID + 1) = 512;
    v20.m_tracking.m_allocCounter = 768;
    *(&v20.m_tracking.m_allocCounter + 1) = 1024;
    fmt = 2 * *((_DWORD *)&v20.m_surfaceID + (int)rg.shadowMapResolutionIndex);
    _RAX = R_RT_CreateInternal(&result, fmt, fmt, fmt, fmt, 1u, 0x10u, 1u, g_R_RT_renderTargetFmts[6], R_RT_Flag_RWView|R_RT_Flag_RTView, R_RT_FlagInternal_MaskLifetime, &colorBlack, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "R_RENDERTARGET_SPOT_SHADOW_ATLAS_LAYER", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp(154)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovd   eax, xmm0
      vmovups [rsp+118h+var_78], ymm0
      vmovups ymmword ptr [rsp+118h+var_38.m_surfaceID], ymm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v20);
      if ( (R_RT_Handle::GetSurface(&v20)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        __asm { vmovups ymm0, ymmword ptr [rsp+118h+var_38.m_surfaceID] }
        __debugbreak();
      }
      else
      {
        __asm { vmovups ymm0, ymmword ptr [rsp+118h+var_38.m_surfaceID] }
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        __asm { vmovups ymm0, [rsp+118h+var_78] }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
      }
    }
    __asm { vmovups ymmword ptr cs:s_R_SpotShadow_Storage.staleCache.arrayColorRt.baseclass_0.m_surfaceID, ymm0 }
    R_SpotShadow_FlushStaleCache();
    __asm
    {
      vmovss  xmm1, cs:__real@3f800000
      vmovss  [rsp+118h+format], xmm1
      vmovss  [rsp+118h+mipLimit], xmm1
      vxorps  xmm1, xmm1, xmm1; x
      vmovss  [rsp+118h+arraySliceCount], xmm1
      vxorps  xmm0, xmm0, xmm0
      vmovss  [rsp+118h+depth], xmm1
    }
    *(_DWORD *)&v20.m_surfaceID = 512;
    *((_DWORD *)&v20.m_surfaceID + 1) = 512;
    v20.m_tracking.m_allocCounter = 768;
    *(&v20.m_tracking.m_allocCounter + 1) = 1024;
    __asm
    {
      vcvtsi2ss xmm0, xmm0, rcx
      vmulss  xmm3, xmm0, cs:__real@40000000; w
      vxorps  xmm2, xmm2, xmm2; y
      vmovss  dword ptr [rsp+118h+fmt], xmm3
    }
    R_SetQuadMesh(&gfxMeshGlob.spotShadowViewMesh, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta, depth, arraySliceCount, mipLimit, format, 0xFFFFFFFF);
  }
}

/*
==============
R_SpotShadow_DestroyRTs
==============
*/

void __fastcall R_SpotShadow_DestroyRTs(double _XMM0_8)
{
  R_RT_Handle v8; 

  if ( s_R_SpotShadow_Storage.staleCache.arrayColorRt.m_surfaceID )
  {
    R_RT_Handle::GetSurface(&s_R_SpotShadow_Storage.staleCache.arrayColorRt);
    if ( !s_R_SpotShadow_Storage.staleCache.arrayColorRt.m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 168, ASSERT_TYPE_ASSERT, "(!s_R_SpotShadow_Storage.staleCache.arrayColorRt.IsNull())", (const char *)&queryFormat, "!s_R_SpotShadow_Storage.staleCache.arrayColorRt.IsNull()") )
      __debugbreak();
    __asm
    {
      vmovups ymm0, ymmword ptr cs:s_R_SpotShadow_Storage.staleCache.arrayColorRt.baseclass_0.m_surfaceID
      vmovups ymmword ptr [rsp+58h+var_28.m_surfaceID], ymm0
    }
    if ( s_R_SpotShadow_Storage.staleCache.arrayColorRt.m_surfaceID )
    {
      R_RT_Handle::GetSurface(&v8);
      if ( (R_RT_Handle::GetSurface(&v8)->m_rtFlagsInternal & 3u) < 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 877, ASSERT_TYPE_ASSERT, "(R_RT_GetLifetimeFromFlags( rt.GetFlagsInternal() ) >= R_RT_Lifetime_MultiFrame)", (const char *)&queryFormat, "R_RT_GetLifetimeFromFlags( rt.GetFlagsInternal() ) >= R_RT_Lifetime_MultiFrame") )
        __debugbreak();
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+58h+var_28.m_surfaceID]
        vmovups ymmword ptr [rsp+58h+var_28.m_surfaceID], ymm0
      }
      R_RT_DestroyInternal(&v8);
    }
    else if ( s_R_SpotShadow_Storage.staleCache.arrayColorRt.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", s_R_SpotShadow_Storage.staleCache.arrayColorRt.m_surfaceID + 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
    {
      __debugbreak();
    }
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rsp+58h+var_28.m_tracking.m_name], xmm0
    }
    v8.m_surfaceID = 0;
    v8.m_tracking.m_allocCounter = 0;
    __asm
    {
      vmovups ymm1, ymmword ptr [rsp+58h+var_28.m_surfaceID]
      vmovups ymmword ptr cs:s_R_SpotShadow_Storage.staleCache.arrayColorRt.baseclass_0.m_surfaceID, ymm1
    }
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
    __asm
    {
      vmovups ymm0, ymmword ptr cs:s_R_SpotShadow_Storage.activeCache.arrayDepthRt.baseclass_0.m_surfaceID
      vmovups ymmword ptr [rsp+58h+var_28.m_surfaceID], ymm0
    }
    if ( s_R_SpotShadow_Storage.activeCache.arrayDepthRt.m_surfaceID )
    {
      R_RT_Handle::GetSurface(&v8);
      if ( (R_RT_Handle::GetSurface(&v8)->m_rtFlagsInternal & 3u) < 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 877, ASSERT_TYPE_ASSERT, "(R_RT_GetLifetimeFromFlags( rt.GetFlagsInternal() ) >= R_RT_Lifetime_MultiFrame)", (const char *)&queryFormat, "R_RT_GetLifetimeFromFlags( rt.GetFlagsInternal() ) >= R_RT_Lifetime_MultiFrame") )
        __debugbreak();
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+58h+var_28.m_surfaceID]
        vmovups ymmword ptr [rsp+58h+var_28.m_surfaceID], ymm0
      }
      R_RT_DestroyInternal(&v8);
    }
    else if ( s_R_SpotShadow_Storage.activeCache.arrayDepthRt.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", s_R_SpotShadow_Storage.activeCache.arrayDepthRt.m_surfaceID + 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
    {
      __debugbreak();
    }
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rsp+58h+var_28.m_tracking.m_name], xmm0
    }
    v8.m_surfaceID = 0;
    v8.m_tracking.m_allocCounter = 0;
    __asm
    {
      vmovups ymm1, ymmword ptr [rsp+58h+var_28.m_surfaceID]
      vmovups ymmword ptr cs:s_R_SpotShadow_Storage.activeCache.arrayDepthRt.baseclass_0.m_surfaceID, ymm1
    }
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
  __asm { vmovdqu xmmword ptr cs:s_R_SpotShadow_Storage.activeCache.mostRottenEntry, xmm0 }
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
  __asm { vmovdqu xmmword ptr cs:s_R_SpotShadow_Storage.staleCache.mostRottenEntry, xmm0 }
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
  int v11; 

  _RBX = result;
  if ( spotShadow->subAtlasIndex >= 4 )
  {
    v11 = 4;
    subAtlasIndex = spotShadow->subAtlasIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 811, ASSERT_TYPE_ASSERT, "(unsigned)( spotShadow->subAtlasIndex ) < (unsigned)( R_SPOTSHADOW_LAYER_ATLAS_COUNT )", "spotShadow->subAtlasIndex doesn't index R_SPOTSHADOW_LAYER_ATLAS_COUNT\n\t%i not in [0, %i)", subAtlasIndex, v11) )
      __debugbreak();
  }
  if ( dword_1541057CC > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
  {
    j__Init_thread_header(&dword_1541057CC);
    if ( dword_1541057CC == -1 )
    {
      __asm
      {
        vmovaps ymm0, cs:__ymm@3f0000003f000000000000003f0000003f0000003f0000000000000000000000
        vmovups ymmword ptr cs:uvScaleAndOffset.v, ymm0
        vmovaps ymm0, cs:__ymm@3f0000003f0000003f0000003f0000003f0000003f0000003f00000000000000
        vmovups ymmword ptr cs:uvScaleAndOffset.v+20h, ymm0
      }
      j__Init_thread_footer(&dword_1541057CC);
    }
  }
  _RCX = uvScaleAndOffset;
  _RAX = 2i64 * spotShadow->subAtlasIndex;
  __asm
  {
    vmovups xmm0, xmmword ptr [rcx+rax*8]
    vmovdqu xmmword ptr [rbx], xmm0
  }
  return _RBX;
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

void __fastcall R_SpotShadow_LazyAllocRts(double _XMM0_8, __int64 a2, double a3)
{
  unsigned int fmt; 
  R_RT_Handle v8; 
  R_RT_Handle result; 
  vec4_t clearColor; 

  R_SpotShadow_CreateStaleCacheRTs(_XMM0_8, a2, a3);
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
    __asm { vxorps  xmm0, xmm0, xmm0 }
    fmt = 2 * LODWORD(clearColor.v[rg.shadowMapResolutionIndex]);
    __asm { vmovss  dword ptr [rsp+128h+var_28], xmm0 }
    _RAX = R_RT_CreateInternal(&result, fmt, fmt, fmt, fmt, 1u, 0x20u, 1u, g_R_RT_depthStencilFmts[3], R_RT_Flag_None, R_RT_FlagInternal_MaskLifetime|R_RT_FlagInternal_Depth, &clearColor, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "R_RENDERTARGET_SPOTSHADOW_CACHED", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp(439)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovd   eax, xmm0
      vmovups [rsp+128h+var_68], ymm0
      vmovups ymmword ptr [rsp+128h+var_88.m_surfaceID], ymm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v8);
      if ( (R_RT_Handle::GetSurface(&v8)->m_rtFlagsInternal & 0x10) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
      {
        __asm { vmovups ymm0, ymmword ptr [rsp+128h+var_88.m_surfaceID] }
      }
      else
      {
        __asm { vmovups ymm0, ymmword ptr [rsp+128h+var_88.m_surfaceID] }
        __debugbreak();
      }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        __asm { vmovups ymm0, [rsp+128h+var_68] }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
      }
    }
    __asm { vmovups ymmword ptr cs:s_R_SpotShadow_Storage.activeCache.arrayDepthRt.baseclass_0.m_surfaceID, ymm0 }
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
  __int64 spotShadowCount; 
  unsigned __int8 v11; 
  __int64 sceneLightIndex; 
  __int64 v13; 
  char v14; 
  unsigned int flags; 

  data->spotShadowCount = 0;
  _RBX = s_R_SpotShadow_Storage.staleCache.leastRottenEntry;
  for ( _RSI = data; _RBX; _RBX = _RBX->prev )
  {
    spotShadowCount = _RSI->spotShadowCount;
    _RDI = spotShadowCount;
    LODWORD(spotShadowCount) = spotShadowCount + 1;
    _RSI->spotShadowCount = spotShadowCount;
    if ( (unsigned int)spotShadowCount > 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 333, ASSERT_TYPE_ASSERT, "(data->spotShadowCount <= ( sizeof( *array_counter( data->spotShadows ) ) + 0 ))", (const char *)&queryFormat, "data->spotShadowCount <= ARRAY_COUNT( data->spotShadows )") )
      __debugbreak();
    __asm
    {
      vmovups ymm0, ymmword ptr [rbx]
      vmovups ymmword ptr [rdi+rsi+0E76B0h], ymm0
      vmovups ymm1, ymmword ptr [rbx+20h]
      vmovups ymmword ptr [rdi+rsi+0E76D0h], ymm1
    }
    _RSI->spotShadows[_RDI].sceneLightIndex = _RBX->sceneLightIndex;
    if ( (s_R_SpotShadow_Storage.staleCache.entries > _RBX || _RBX > &s_R_SpotShadow_Storage.staleCache.entries[63]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 75, ASSERT_TYPE_ASSERT, "(&s_R_SpotShadow_Storage.staleCache.entries[0]) <= (this) && (this) <= (&s_R_SpotShadow_Storage.staleCache.entries[R_SPOTSHADOW_STALE_STORAGE_LIMIT - 1])", "%s\n\t0x%p not in [0x%p, 0x%p]", "this not in [&s_R_SpotShadow_Storage.staleCache.entries[0], &s_R_SpotShadow_Storage.staleCache.entries[R_SPOTSHADOW_STALE_STORAGE_LIMIT - 1]]", _RBX, s_R_SpotShadow_Storage.staleCache.entries, &s_R_SpotShadow_Storage.staleCache.entries[63]) )
      __debugbreak();
    _RSI->spotShadows[_RDI].arraySliceIndex = truncate_cast<unsigned int,__int64>(_RBX - s_R_SpotShadow_Storage.staleCache.entries) >> 2;
    if ( (s_R_SpotShadow_Storage.staleCache.entries > _RBX || _RBX > &s_R_SpotShadow_Storage.staleCache.entries[63]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 75, ASSERT_TYPE_ASSERT, "(&s_R_SpotShadow_Storage.staleCache.entries[0]) <= (this) && (this) <= (&s_R_SpotShadow_Storage.staleCache.entries[R_SPOTSHADOW_STALE_STORAGE_LIMIT - 1])", "%s\n\t0x%p not in [0x%p, 0x%p]", "this not in [&s_R_SpotShadow_Storage.staleCache.entries[0], &s_R_SpotShadow_Storage.staleCache.entries[R_SPOTSHADOW_STALE_STORAGE_LIMIT - 1]]", _RBX, s_R_SpotShadow_Storage.staleCache.entries, &s_R_SpotShadow_Storage.staleCache.entries[63]) )
      __debugbreak();
    _RSI->spotShadows[_RDI].subAtlasIndex = truncate_cast<unsigned int,__int64>(_RBX - s_R_SpotShadow_Storage.staleCache.entries) & 3;
    if ( (s_R_SpotShadow_Storage.staleCache.entries > _RBX || _RBX > &s_R_SpotShadow_Storage.staleCache.entries[63]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_spotshadow.cpp", 75, ASSERT_TYPE_ASSERT, "(&s_R_SpotShadow_Storage.staleCache.entries[0]) <= (this) && (this) <= (&s_R_SpotShadow_Storage.staleCache.entries[R_SPOTSHADOW_STALE_STORAGE_LIMIT - 1])", "%s\n\t0x%p not in [0x%p, 0x%p]", "this not in [&s_R_SpotShadow_Storage.staleCache.entries[0], &s_R_SpotShadow_Storage.staleCache.entries[R_SPOTSHADOW_STALE_STORAGE_LIMIT - 1]]", _RBX, s_R_SpotShadow_Storage.staleCache.entries, &s_R_SpotShadow_Storage.staleCache.entries[63]) )
      __debugbreak();
    _RSI->spotShadows[_RDI].cacheIndex = truncate_cast<unsigned int,__int64>(_RBX - s_R_SpotShadow_Storage.staleCache.entries);
    _RSI->spotShadows[_RDI].zNear = _RBX->zNear;
    _RSI->spotShadows[_RDI].zFar = _RBX->zFar;
    _RSI->spotShadows[_RDI].staleCacheEntry = _RBX;
    if ( !updateCacheStaleness )
      continue;
    v11 = _RBX->staleness - 1;
    if ( !rg.primaryLightMotionDetect )
    {
      if ( v11 <= 0xFCu )
        _RBX->staleness = -2;
      continue;
    }
    sceneLightIndex = _RSI->spotShadows[_RDI].sceneLightIndex;
    if ( (unsigned int)sceneLightIndex < rgp.world->primaryLightCount )
    {
      v13 = sceneLightIndex;
      v14 = _RSI->sceneLights[sceneLightIndex].needsDynamicShadows && R_CheckPrimaryLightMotionBit(clientIndex, sceneLightIndex);
      if ( !_RSI->sceneLights[v13].needsDynamicShadows )
        goto LABEL_32;
      flags = _RSI->sceneLights[v13].flags;
      if ( (flags & 0x1000) != 0 )
      {
        _RBX->staleness = (_RSI->sceneLights[v13].flags & 0x2000) != 0;
      }
      else
      {
        if ( (flags & 0x200) == 0 )
        {
          if ( (flags & 0x400) == 0 )
          {
            if ( v11 <= 0xFCu )
              _RBX->staleness += v14;
            continue;
          }
LABEL_32:
          _RBX->staleness = 0;
          continue;
        }
        _RBX->staleness = 1;
      }
    }
  }
}

/*
==============
R_SpotShadow_UpdateDynamicMesh
==============
*/

void __fastcall R_SpotShadow_UpdateDynamicMesh(double _XMM0_8, __int64 a2, double _XMM2_8)
{
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 

  __asm
  {
    vmovss  xmm1, cs:__real@3f800000
    vmovss  [rsp+78h+var_38], xmm1
    vmovss  [rsp+78h+var_40], xmm1
    vxorps  xmm1, xmm1, xmm1; x
    vmovss  [rsp+78h+var_48], xmm1
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+78h+var_50], xmm1
    vcvtsi2ss xmm0, xmm0, rcx
    vmulss  xmm3, xmm0, cs:__real@40000000; w
    vxorps  xmm2, xmm2, xmm2; y
    vmovss  [rsp+78h+var_58], xmm3
  }
  R_SetQuadMesh(&gfxMeshGlob.spotShadowViewMesh, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v9, v10, v11, v12, v13, 0xFFFFFFFF);
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

