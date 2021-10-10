/*
==============
DB_ReleaseZoneExternalReferences
==============
*/

void __fastcall DB_ReleaseZoneExternalReferences(unsigned int zoneFlags)
{
  ?DB_ReleaseZoneExternalReferences@@YAXI@Z(zoneFlags);
}

/*
==============
DB_IsDoingTransientOnlyWork
==============
*/

bool __fastcall DB_IsDoingTransientOnlyWork()
{
  return ?DB_IsDoingTransientOnlyWork@@YA_NXZ();
}

/*
==============
DB_IsPermanentAssetNonLocking
==============
*/

bool __fastcall DB_IsPermanentAssetNonLocking(XAssetType type, const char *name)
{
  return ?DB_IsPermanentAssetNonLocking@@YA_NW4XAssetType@@PEBD@Z(type, name);
}

/*
==============
DB_FindXAssetHeader
==============
*/

XAssetHeader __fastcall DB_FindXAssetHeader(XAssetType type, const char *givenName, int allowCreateDefault)
{
  return ?DB_FindXAssetHeader@@YA?ATXAssetHeader@@W4XAssetType@@PEBDH@Z(type, givenName, allowCreateDefault);
}

/*
==============
DB_UnlockHashWrite
==============
*/

void DB_UnlockHashWrite(void)
{
  ?DB_UnlockHashWrite@@YAXXZ();
}

/*
==============
DB_AddOptionalLoadError
==============
*/

void __fastcall DB_AddOptionalLoadError(unsigned int zoneFlags, const char *fileName)
{
  ?DB_AddOptionalLoadError@@YAXIPEBD@Z(zoneFlags, fileName);
}

/*
==============
DB_LoadStreamingInfoTransientList
==============
*/

void __fastcall DB_LoadStreamingInfoTransientList(const StreamingInfo *streamingInfo)
{
  ?DB_LoadStreamingInfoTransientList@@YAXAEBUStreamingInfo@@@Z(streamingInfo);
}

/*
==============
DB_MarkXAsset
==============
*/

int __fastcall DB_MarkXAsset(XAssetType type, XAssetHeader header, int postorder)
{
  return ?DB_MarkXAsset@@YAHW4XAssetType@@TXAssetHeader@@H@Z(type, header, postorder);
}

/*
==============
DB_GetXAssetZoneIndex
==============
*/

int __fastcall DB_GetXAssetZoneIndex(XAssetType type, const char *name)
{
  return ?DB_GetXAssetZoneIndex@@YAHW4XAssetType@@PEBD@Z(type, name);
}

/*
==============
DB_TransientSPPostLoadEnd
==============
*/

void DB_TransientSPPostLoadEnd(void)
{
  ?DB_TransientSPPostLoadEnd@@YAXXZ();
}

/*
==============
DB_LockHashWrite
==============
*/

void DB_LockHashWrite(void)
{
  ?DB_LockHashWrite@@YAXXZ();
}

/*
==============
DB_UnpauseLoadFastfiles
==============
*/

void __fastcall DB_UnpauseLoadFastfiles(const DB_FastfileInfo *zoneInfo, unsigned int zoneCount)
{
  ?DB_UnpauseLoadFastfiles@@YAXPEBUDB_FastfileInfo@@I@Z(zoneInfo, zoneCount);
}

/*
==============
DB_AssetQuery_Query
==============
*/

bool __fastcall DB_AssetQuery_Query(XAssetType type, const char *name, DBAssetQuery *outQuery)
{
  return ?DB_AssetQuery_Query@@YA_NW4XAssetType@@PEBDPEAUDBAssetQuery@@@Z(type, name, outQuery);
}

/*
==============
DB_TransientSPPostLoadStart
==============
*/

void DB_TransientSPPostLoadStart(void)
{
  ?DB_TransientSPPostLoadStart@@YAXXZ();
}

/*
==============
DB_PopFullLevelUnload
==============
*/

void DB_PopFullLevelUnload(void)
{
  ?DB_PopFullLevelUnload@@YAXXZ();
}

/*
==============
DB_TryFastTransientCancel
==============
*/

bool __fastcall DB_TryFastTransientCancel(const char *zoneName)
{
  return ?DB_TryFastTransientCancel@@YA_NPEBD@Z(zoneName);
}

/*
==============
DB_FixupWorldTransientZonesExternal
==============
*/

void DB_FixupWorldTransientZonesExternal(void)
{
  ?DB_FixupWorldTransientZonesExternal@@YAXXZ();
}

/*
==============
DB_IsLiveHeadAsset
==============
*/

bool __fastcall DB_IsLiveHeadAsset(XAssetType type, XAssetHeader header)
{
  return ?DB_IsLiveHeadAsset@@YA_NW4XAssetType@@TXAssetHeader@@@Z(type, header);
}

/*
==============
DB_XAssetExists
==============
*/

int __fastcall DB_XAssetExists(XAssetType type, const char *name)
{
  return ?DB_XAssetExists@@YAHW4XAssetType@@PEBD@Z(type, name);
}

/*
==============
DB_GetWorkPeriodStateName
==============
*/

const char *__fastcall DB_GetWorkPeriodStateName()
{
  return ?DB_GetWorkPeriodStateName@@YAPEBDXZ();
}

/*
==============
DB_CheckIfMissingAssetIsTransient
==============
*/

bool __fastcall DB_CheckIfMissingAssetIsTransient(XAssetType type, const char *name)
{
  return ?DB_CheckIfMissingAssetIsTransient@@YA_NW4XAssetType@@PEBD@Z(type, name);
}

/*
==============
DB_SyncXAssets
==============
*/

void DB_SyncXAssets(void)
{
  ?DB_SyncXAssets@@YAXXZ();
}

/*
==============
DB_ShutdownXAssets
==============
*/

void DB_ShutdownXAssets(void)
{
  ?DB_ShutdownXAssets@@YAXXZ();
}

/*
==============
DB_GetXAssetZoneIndexByHeaderNonLocking
==============
*/

int __fastcall DB_GetXAssetZoneIndexByHeaderNonLocking(XAssetType type, XAssetHeader header)
{
  return ?DB_GetXAssetZoneIndexByHeaderNonLocking@@YAHW4XAssetType@@TXAssetHeader@@@Z(type, header);
}

/*
==============
DB_GetXAssetHeaderZoneSpecificNonLocking
==============
*/

XAssetHeader __fastcall DB_GetXAssetHeaderZoneSpecificNonLocking(XAssetType type, const char *name, int zoneIndex)
{
  return ?DB_GetXAssetHeaderZoneSpecificNonLocking@@YA?ATXAssetHeader@@W4XAssetType@@PEBDH@Z(type, name, zoneIndex);
}

/*
==============
DB_MaterialDump_f
==============
*/

void __fastcall DB_MaterialDump_f()
{
  ?DB_MaterialDump_f@@YAXXZ();
}

/*
==============
DB_SetInflightTransientPriority
==============
*/

void __fastcall DB_SetInflightTransientPriority(const char *zoneName, unsigned int priority)
{
  ?DB_SetInflightTransientPriority@@YAXPEBDI@Z(zoneName, priority);
}

/*
==============
DB_IsDoingSPHotLoadBinkTransition
==============
*/

bool __fastcall DB_IsDoingSPHotLoadBinkTransition()
{
  return ?DB_IsDoingSPHotLoadBinkTransition@@YA_NXZ();
}

/*
==============
DB_GetAssetEntryIndex
==============
*/

unsigned int __fastcall DB_GetAssetEntryIndex(const DB_AssetEntry *assetEntry)
{
  return ?DB_GetAssetEntryIndex@@YAIAEBVDB_AssetEntry@@@Z(assetEntry);
}

/*
==============
DB_GetAssetEntryUsedFlagsHeadOnly
==============
*/

const DB_AssetEntryFlags *__fastcall DB_GetAssetEntryUsedFlagsHeadOnly()
{
  return ?DB_GetAssetEntryUsedFlagsHeadOnly@@YAAEBVDB_AssetEntryFlags@@XZ();
}

/*
==============
DB_EndSPHotLoad
==============
*/

void DB_EndSPHotLoad(void)
{
  ?DB_EndSPHotLoad@@YAXXZ();
}

/*
==============
DB_UnloadStreamingInfoTransientList
==============
*/

void __fastcall DB_UnloadStreamingInfoTransientList(const StreamingInfo *streamingInfo)
{
  ?DB_UnloadStreamingInfoTransientList@@YAXAEBUStreamingInfo@@@Z(streamingInfo);
}

/*
==============
DB_ReplaceModel
==============
*/

void __fastcall DB_ReplaceModel(const char *from, const char *to)
{
  ?DB_ReplaceModel@@YAXPEBD0@Z(from, to);
}

/*
==============
DB_IsXAssetTransientNonLocking
==============
*/

bool __fastcall DB_IsXAssetTransientNonLocking(XAssetType type, const char *name)
{
  return ?DB_IsXAssetTransientNonLocking@@YA_NW4XAssetType@@PEBD@Z(type, name);
}

/*
==============
DB_ValidateRegistryState
==============
*/

void DB_ValidateRegistryState(void)
{
  ?DB_ValidateRegistryState@@YAXXZ();
}

/*
==============
DB_LoadFastfiles
==============
*/

void __fastcall DB_LoadFastfiles(const DB_FastfileInfo *zoneInfo, unsigned int zoneCount, unsigned int loadFlags, bool loadServerZone)
{
  ?DB_LoadFastfiles@@YAXPEBUDB_FastfileInfo@@II_N@Z(zoneInfo, zoneCount, loadFlags, loadServerZone);
}

/*
==============
DB_HasFastfileFinishedLoadingAssets
==============
*/

bool __fastcall DB_HasFastfileFinishedLoadingAssets(const char *zoneName)
{
  return ?DB_HasFastfileFinishedLoadingAssets@@YA_NPEBD@Z(zoneName);
}

/*
==============
DB_AddXAsset
==============
*/

XAssetHeader __fastcall DB_AddXAsset(XAssetType type, XAssetHeader *header)
{
  return ?DB_AddXAsset@@YA?ATXAssetHeader@@W4XAssetType@@PEAT1@@Z(type, header);
}

/*
==============
DB_SyncXAssetsSkipAlwaysLoaded
==============
*/

void __fastcall DB_SyncXAssetsSkipAlwaysLoaded(const bool useRemoteRendering)
{
  ?DB_SyncXAssetsSkipAlwaysLoaded@@YAX_N@Z(useRemoteRendering);
}

/*
==============
DB_AppendFastfileFailureText
==============
*/

void __fastcall DB_AppendFastfileFailureText(unsigned int zoneFlags, const char *message, const char *filename)
{
  ?DB_AppendFastfileFailureText@@YAXIPEBD0@Z(zoneFlags, message, filename);
}

/*
==============
DB_EndDrawFrame
==============
*/

void DB_EndDrawFrame(void)
{
  ?DB_EndDrawFrame@@YAXXZ();
}

/*
==============
DB_LockTableForRead
==============
*/

void DB_LockTableForRead(void)
{
  ?DB_LockTableForRead@@YAXXZ();
}

/*
==============
DB_IsDebugZoneActive
==============
*/

bool __fastcall DB_IsDebugZoneActive()
{
  return ?DB_IsDebugZoneActive@@YA_NXZ();
}

/*
==============
DB_UnlockWrite
==============
*/

void DB_UnlockWrite(void)
{
  ?DB_UnlockWrite@@YAXXZ();
}

/*
==============
DB_TransientXModelSurfsFixup
==============
*/

void __fastcall DB_TransientXModelSurfsFixup(XAssetType type, const char *name, const int zoneIndex)
{
  ?DB_TransientXModelSurfsFixup@@YAXW4XAssetType@@PEBDH@Z(type, name, zoneIndex);
}

/*
==============
DB_SetAlwaysAllowMissingServerAsset
==============
*/

void __fastcall DB_SetAlwaysAllowMissingServerAsset(bool alwaysAllow)
{
  ?DB_SetAlwaysAllowMissingServerAsset@@YAX_N@Z(alwaysAllow);
}

/*
==============
DB_StopSPHotLoadBink
==============
*/

void DB_StopSPHotLoadBink(void)
{
  ?DB_StopSPHotLoadBink@@YAXXZ();
}

/*
==============
DB_PostAddXAsset
==============
*/

void DB_PostAddXAsset(void)
{
  ?DB_PostAddXAsset@@YAXXZ();
}

/*
==============
DB_LoadZone
==============
*/

void __fastcall DB_LoadZone(const char *zonename)
{
  ?DB_LoadZone@@YAXPEBD@Z(zonename);
}

/*
==============
DB_SyncXAssetsKeepAlive
==============
*/

void DB_SyncXAssetsKeepAlive(void)
{
  ?DB_SyncXAssetsKeepAlive@@YAXXZ();
}

/*
==============
DB_PopMainThreadBlocked
==============
*/

void DB_PopMainThreadBlocked(void)
{
  ?DB_PopMainThreadBlocked@@YAXXZ();
}

/*
==============
DB_GetXAssetMasterDefaultHeader
==============
*/

XAssetHeader __fastcall DB_GetXAssetMasterDefaultHeader(const XAssetType type)
{
  return ?DB_GetXAssetMasterDefaultHeader@@YA?ATXAssetHeader@@W4XAssetType@@@Z(type);
}

/*
==============
DB_IsTransientSPGameWaitingForPostLoad
==============
*/

bool __fastcall DB_IsTransientSPGameWaitingForPostLoad()
{
  return ?DB_IsTransientSPGameWaitingForPostLoad@@YA_NXZ();
}

/*
==============
DB_IsXAssetTransient
==============
*/

bool __fastcall DB_IsXAssetTransient(XAssetType type, const char *name)
{
  return ?DB_IsXAssetTransient@@YA_NW4XAssetType@@PEBD@Z(type, name);
}

/*
==============
DB_SyncDatabaseCompleted
==============
*/

void DB_SyncDatabaseCompleted(void)
{
  ?DB_SyncDatabaseCompleted@@YAXXZ();
}

/*
==============
DB_IsPermanentAsset
==============
*/

bool __fastcall DB_IsPermanentAsset(XAssetType type, const char *name)
{
  return ?DB_IsPermanentAsset@@YA_NW4XAssetType@@PEBD@Z(type, name);
}

/*
==============
DB_GetXAssetZoneIndexNonLocking
==============
*/

int __fastcall DB_GetXAssetZoneIndexNonLocking(XAssetType type, const char *name)
{
  return ?DB_GetXAssetZoneIndexNonLocking@@YAHW4XAssetType@@PEBD@Z(type, name);
}

/*
==============
DB_EnumXAssets_FastFile
==============
*/

void __fastcall DB_EnumXAssets_FastFile(XAssetType type, void (__fastcall *func)(XAssetHeader, void *), void *inData, bool includeStashed)
{
  ?DB_EnumXAssets_FastFile@@YAXW4XAssetType@@P6AXTXAssetHeader@@PEAX@Z2_N@Z(type, func, inData, includeStashed);
}

/*
==============
DB_IsXAssetTransientZone
==============
*/

bool __fastcall DB_IsXAssetTransientZone(XAssetType type, const char *name)
{
  return ?DB_IsXAssetTransientZone@@YA_NW4XAssetType@@PEBD@Z(type, name);
}

/*
==============
DB_SetErrorOnPatchedImageMismatch
==============
*/

void DB_SetErrorOnPatchedImageMismatch(void)
{
  ?DB_SetErrorOnPatchedImageMismatch@@YAXXZ();
}

/*
==============
DB_DumpPoolInfo_f
==============
*/

void __fastcall DB_DumpPoolInfo_f()
{
  ?DB_DumpPoolInfo_f@@YAXXZ();
}

/*
==============
DB_AssetQuery_Pop
==============
*/

void DB_AssetQuery_Pop(void)
{
  ?DB_AssetQuery_Pop@@YAXXZ();
}

/*
==============
DB_GetMaterialIndexByName
==============
*/

unsigned int __fastcall DB_GetMaterialIndexByName(const char *name)
{
  return ?DB_GetMaterialIndexByName@@YAIPEBD@Z(name);
}

/*
==============
DB_SyncXAssetsBlocking
==============
*/

void DB_SyncXAssetsBlocking(void)
{
  ?DB_SyncXAssetsBlocking@@YAXXZ();
}

/*
==============
DB_DoesXModelExist
==============
*/

bool __fastcall DB_DoesXModelExist(const char *name)
{
  return ?DB_DoesXModelExist@@YA_NPEBD@Z(name);
}

/*
==============
DB_PerformFullMaterialModelSort
==============
*/

int __fastcall DB_PerformFullMaterialModelSort()
{
  return ?DB_PerformFullMaterialModelSort@@YAHXZ();
}

/*
==============
DB_ErrorCleanup
==============
*/

void DB_ErrorCleanup(void)
{
  ?DB_ErrorCleanup@@YAXXZ();
}

/*
==============
DB_CancelLoadFastfiles
==============
*/

void __fastcall DB_CancelLoadFastfiles(const DB_FastfileInfo *zoneInfo, unsigned int zoneCount)
{
  ?DB_CancelLoadFastfiles@@YAXPEBUDB_FastfileInfo@@I@Z(zoneInfo, zoneCount);
}

/*
==============
DB_SyncForZoneAlloc
==============
*/

void DB_SyncForZoneAlloc(void)
{
  ?DB_SyncForZoneAlloc@@YAXXZ();
}

/*
==============
DB_AssetQuery_Push
==============
*/

void DB_AssetQuery_Push(void)
{
  ?DB_AssetQuery_Push@@YAXXZ();
}

/*
==============
DB_IsDoingTransientWorldWork
==============
*/

bool __fastcall DB_IsDoingTransientWorldWork()
{
  return ?DB_IsDoingTransientWorldWork@@YA_NXZ();
}

/*
==============
DB_UnloadFastfilesByZoneFlags
==============
*/

void __fastcall DB_UnloadFastfilesByZoneFlags(unsigned int zoneFlags, unsigned int unloadFlags)
{
  ?DB_UnloadFastfilesByZoneFlags@@YAXII@Z(zoneFlags, unloadFlags);
}

/*
==============
DB_VerbosePrint
==============
*/

bool __fastcall DB_VerbosePrint()
{
  return ?DB_VerbosePrint@@YA_NXZ();
}

/*
==============
DB_GetXAssetHeaderZoneSpecific
==============
*/

XAssetHeader __fastcall DB_GetXAssetHeaderZoneSpecific(XAssetType type, const char *name, int zoneIndex)
{
  return ?DB_GetXAssetHeaderZoneSpecific@@YA?ATXAssetHeader@@W4XAssetType@@PEBDH@Z(type, name, zoneIndex);
}

/*
==============
DB_ShouldComErrorSysError
==============
*/

bool __fastcall DB_ShouldComErrorSysError()
{
  return ?DB_ShouldComErrorSysError@@YA_NXZ();
}

/*
==============
DB_ShouldProcessAlwaysloadedFlags
==============
*/

bool __fastcall DB_ShouldProcessAlwaysloadedFlags(const int zoneIndex)
{
  return ?DB_ShouldProcessAlwaysloadedFlags@@YA_NH@Z(zoneIndex);
}

/*
==============
DB_IsCurrentFastfileLoadCancelled
==============
*/

bool __fastcall DB_IsCurrentFastfileLoadCancelled()
{
  return ?DB_IsCurrentFastfileLoadCancelled@@YA_NXZ();
}

/*
==============
DB_IsAlloc
==============
*/

bool __fastcall DB_IsAlloc()
{
  return ?DB_IsAlloc@@YA_NXZ();
}

/*
==============
DB_UnlockTableForRead
==============
*/

void DB_UnlockTableForRead(void)
{
  ?DB_UnlockTableForRead@@YAXXZ();
}

/*
==============
DB_IsXAssetDefaultNonLocking
==============
*/

int __fastcall DB_IsXAssetDefaultNonLocking(XAssetType type, const char *name)
{
  return ?DB_IsXAssetDefaultNonLocking@@YAHW4XAssetType@@PEBD@Z(type, name);
}

/*
==============
DB_ShouldUpdateGameOnPhysicsChange
==============
*/

bool __fastcall DB_ShouldUpdateGameOnPhysicsChange()
{
  return ?DB_ShouldUpdateGameOnPhysicsChange@@YA_NXZ();
}

/*
==============
DB_UnloadFastfiles
==============
*/

void __fastcall DB_UnloadFastfiles(const DB_FastfileInfo *zoneInfo, unsigned int zoneCount, unsigned int unloadFlags)
{
  ?DB_UnloadFastfiles@@YAXPEBUDB_FastfileInfo@@II@Z(zoneInfo, zoneCount, unloadFlags);
}

/*
==============
DB_SyncLevelLoad
==============
*/

void DB_SyncLevelLoad(void)
{
  ?DB_SyncLevelLoad@@YAXXZ();
}

/*
==============
DB_AssetQuery_HandleComError
==============
*/

void DB_AssetQuery_HandleComError(void)
{
  ?DB_AssetQuery_HandleComError@@YAXXZ();
}

/*
==============
DB_PauseLoadFastfiles
==============
*/

void __fastcall DB_PauseLoadFastfiles(const DB_FastfileInfo *zoneInfo, unsigned int zoneCount)
{
  ?DB_PauseLoadFastfiles@@YAXPEBUDB_FastfileInfo@@I@Z(zoneInfo, zoneCount);
}

/*
==============
DB_IsLiveHeadAssetNonLocking
==============
*/

bool __fastcall DB_IsLiveHeadAssetNonLocking(XAssetType type, XAssetHeader header)
{
  return ?DB_IsLiveHeadAssetNonLocking@@YA_NW4XAssetType@@TXAssetHeader@@@Z(type, header);
}

/*
==============
DB_Update
==============
*/

void DB_Update(void)
{
  ?DB_Update@@YAXXZ();
}

/*
==============
DB_IsSyncLoading
==============
*/

bool __fastcall DB_IsSyncLoading()
{
  return ?DB_IsSyncLoading@@YA_NXZ();
}

/*
==============
DB_SetPreloadLoadError
==============
*/

void __fastcall DB_SetPreloadLoadError(unsigned int zoneFlags, const char *fileName)
{
  ?DB_SetPreloadLoadError@@YAXIPEBD@Z(zoneFlags, fileName);
}

/*
==============
DB_EnumSafeXAssets_FastFile
==============
*/

void __fastcall DB_EnumSafeXAssets_FastFile(XAssetType type, void (__fastcall *func)(XAssetHeader, void *), void *inData)
{
  ?DB_EnumSafeXAssets_FastFile@@YAXW4XAssetType@@P6AXTXAssetHeader@@PEAX@Z2@Z(type, func, inData);
}

/*
==============
DB_IsXAssetTransientOverridden
==============
*/

bool __fastcall DB_IsXAssetTransientOverridden(const XAssetType type, const char *name)
{
  return ?DB_IsXAssetTransientOverridden@@YA_NW4XAssetType@@PEBD@Z(type, name);
}

/*
==============
DB_IsXAssetDefault
==============
*/

int __fastcall DB_IsXAssetDefault(XAssetType type, const char *name)
{
  return ?DB_IsXAssetDefault@@YAHW4XAssetType@@PEBD@Z(type, name);
}

/*
==============
DB_UnlockHashRead
==============
*/

void DB_UnlockHashRead(void)
{
  ?DB_UnlockHashRead@@YAXXZ();
}

/*
==============
DB_AreFastfileLoadsCompleted
==============
*/

bool __fastcall DB_AreFastfileLoadsCompleted()
{
  return ?DB_AreFastfileLoadsCompleted@@YA_NXZ();
}

/*
==============
DB_SetXAssetTransientOverridden
==============
*/

void __fastcall DB_SetXAssetTransientOverridden(const XAssetType type, const char *name, const bool isOverridden)
{
  ?DB_SetXAssetTransientOverridden@@YAXW4XAssetType@@PEBD_N@Z(type, name, isOverridden);
}

/*
==============
DB_GetAssetEntryUsedFlagsIncludingStashed
==============
*/

const DB_AssetEntryFlags *__fastcall DB_GetAssetEntryUsedFlagsIncludingStashed()
{
  return ?DB_GetAssetEntryUsedFlagsIncludingStashed@@YAAEBVDB_AssetEntryFlags@@XZ();
}

/*
==============
DB_IsCurrentFastfileLoadPaused
==============
*/

bool __fastcall DB_IsCurrentFastfileLoadPaused()
{
  return ?DB_IsCurrentFastfileLoadPaused@@YA_NXZ();
}

/*
==============
DB_LockHashRead
==============
*/

void DB_LockHashRead(void)
{
  ?DB_LockHashRead@@YAXXZ();
}

/*
==============
DB_GetAssetEntryPool
==============
*/

DB_AssetEntryPool *__fastcall DB_GetAssetEntryPool()
{
  return ?DB_GetAssetEntryPool@@YAAEAVDB_AssetEntryPool@@XZ();
}

/*
==============
DB_GetWorkPeriod
==============
*/

DB_WorkPeriod __fastcall DB_GetWorkPeriod()
{
  return ?DB_GetWorkPeriod@@YA?AW4DB_WorkPeriod@@XZ();
}

/*
==============
DB_PollFastfileState
==============
*/

DB_FastfileState __fastcall DB_PollFastfileState(const char *zoneName)
{
  return ?DB_PollFastfileState@@YA?AW4DB_FastfileState@@PEBD@Z(zoneName);
}

/*
==============
DB_IsDoingSPHotLoad
==============
*/

bool __fastcall DB_IsDoingSPHotLoad()
{
  return ?DB_IsDoingSPHotLoad@@YA_NXZ();
}

/*
==============
DB_FreeLevelXAssetsForMap
==============
*/

void __fastcall DB_FreeLevelXAssetsForMap(const char *mapName)
{
  ?DB_FreeLevelXAssetsForMap@@YAXPEBD@Z(mapName);
}

/*
==============
DB_BeginSPHotLoad
==============
*/

void DB_BeginSPHotLoad(void)
{
  ?DB_BeginSPHotLoad@@YAXXZ();
}

/*
==============
DB_CanDoTransientMaterialSort
==============
*/

bool __fastcall DB_CanDoTransientMaterialSort()
{
  return ?DB_CanDoTransientMaterialSort@@YA_NXZ();
}

/*
==============
DB_IsDoingStreamOnlyWork
==============
*/

bool __fastcall DB_IsDoingStreamOnlyWork()
{
  return ?DB_IsDoingStreamOnlyWork@@YA_NXZ();
}

/*
==============
DB_IsLoadingDebugZone
==============
*/

bool __fastcall DB_IsLoadingDebugZone()
{
  return ?DB_IsLoadingDebugZone@@YA_NXZ();
}

/*
==============
DB_CancelLoadFastfilesByZoneFlags
==============
*/

void __fastcall DB_CancelLoadFastfilesByZoneFlags(unsigned int zoneFlags)
{
  ?DB_CancelLoadFastfilesByZoneFlags@@YAXI@Z(zoneFlags);
}

/*
==============
Load_GetCurrentZoneHandle
==============
*/

void __fastcall Load_GetCurrentZoneHandle(unsigned __int16 *handle)
{
  ?Load_GetCurrentZoneHandle@@YAXPEAG@Z(handle);
}

/*
==============
DB_GetLogChannel
==============
*/

int __fastcall DB_GetLogChannel()
{
  return ?DB_GetLogChannel@@YAHXZ();
}

/*
==============
DB_PushFullLevelUnload
==============
*/

void DB_PushFullLevelUnload(void)
{
  ?DB_PushFullLevelUnload@@YAXXZ();
}

/*
==============
DB_InitThread
==============
*/

void DB_InitThread(void)
{
  ?DB_InitThread@@YAXXZ();
}

/*
==============
DB_PushMainThreadBlocked
==============
*/

void DB_PushMainThreadBlocked(void)
{
  ?DB_PushMainThreadBlocked@@YAXXZ();
}

/*
==============
DB_ReleaseAllExternalReferences
==============
*/

void __fastcall DB_ReleaseAllExternalReferences(bool useRemoteScreenUpdate)
{
  ?DB_ReleaseAllExternalReferences@@YAX_N@Z(useRemoteScreenUpdate);
}

/*
==============
DB_HasHashWriteLock
==============
*/

bool __fastcall DB_HasHashWriteLock()
{
  return ?DB_HasHashWriteLock@@YA_NXZ();
}

/*
==============
DB_IsFastfileFullyLoaded
==============
*/

bool __fastcall DB_IsFastfileFullyLoaded(const char *zoneName, int zoneIndex)
{
  return ?DB_IsFastfileFullyLoaded@@YA_NPEBDH@Z(zoneName, zoneIndex);
}

/*
==============
DB_UpdateDebugZone
==============
*/

void DB_UpdateDebugZone(void)
{
  ?DB_UpdateDebugZone@@YAXXZ();
}

/*
==============
DB_BeginDrawFrame
==============
*/

void DB_BeginDrawFrame(void)
{
  ?DB_BeginDrawFrame@@YAXXZ();
}

/*
==============
DB_GetXAssetZoneIndexByHeader
==============
*/

int __fastcall DB_GetXAssetZoneIndexByHeader(XAssetType type, XAssetHeader header)
{
  return ?DB_GetXAssetZoneIndexByHeader@@YAHW4XAssetType@@TXAssetHeader@@@Z(type, header);
}

/*
==============
DB_AddDuplicateAssetWarning
==============
*/
void DB_AddDuplicateAssetWarning(const XAssetType type, const char *name, const unsigned int existingEntryZoneIndex, const unsigned int newEntryZoneIndex, const bool discarded)
{
  unsigned int ZoneFlagsFromIndex; 
  unsigned int v9; 
  bool IsFrontendUIPreloadZoneIndex; 
  bool v11; 
  bool v12; 
  bool v13; 
  const char *ZoneNameFromIndex; 
  const char *v15; 
  const char *v16; 
  __int64 v17; 
  __int64 v18; 
  const char *v19; 
  const char *v20; 
  char v21; 
  __int64 v22; 
  char v23; 
  char v24; 
  __int64 v25; 
  char v26; 
  const char *v27; 
  __int64 v28; 
  __int64 v29; 
  const char *v30; 
  char v31; 
  __int64 v32; 
  char v33; 
  char v34; 
  __int64 v35; 
  char v36; 
  const char *DefaultXAssetName; 
  const char *v38; 
  const char *XAssetTypeName; 

  if ( existingEntryZoneIndex && newEntryZoneIndex )
  {
    ZoneFlagsFromIndex = DB_Zones_GetZoneFlagsFromIndex(existingEntryZoneIndex);
    v9 = DB_Zones_GetZoneFlagsFromIndex(newEntryZoneIndex);
    if ( (ZoneFlagsFromIndex & 0x100000) != 0 )
    {
      IsFrontendUIPreloadZoneIndex = DB_Zones_IsFrontendUIPreloadZoneIndex(existingEntryZoneIndex);
      v11 = !DB_Zones_IsFrontendUIPreloadZoneIndex(existingEntryZoneIndex);
    }
    else
    {
      IsFrontendUIPreloadZoneIndex = (ZoneFlagsFromIndex & 0xC0) != 0;
      v11 = (ZoneFlagsFromIndex & 0x13F) != 0;
    }
    if ( (v9 & 0x100000) != 0 )
    {
      v12 = DB_Zones_IsFrontendUIPreloadZoneIndex(newEntryZoneIndex);
      v13 = !DB_Zones_IsFrontendUIPreloadZoneIndex(newEntryZoneIndex);
    }
    else
    {
      v12 = (v9 & 0xC0) != 0;
      v13 = (v9 & 0x13F) != 0;
    }
    if ( (!IsFrontendUIPreloadZoneIndex || !v13) && (!v11 || !v12) && ((ZoneFlagsFromIndex & 0x100180) == 0 || (v9 & 0x100180) == 0) && ((ZoneFlagsFromIndex & 0xC000) == 0 || (v9 & 0xC000) == 0) && ((ZoneFlagsFromIndex & 0x3800000) == 0 || (v9 & 0x3800000) == 0) && (ZoneFlagsFromIndex & v9 & 0x10000) == 0 && ((ZoneFlagsFromIndex & 0x60000) == 0 || (v9 & 0x60000) == 0) && ((ZoneFlagsFromIndex & 0xFFFFFFC0) == 0 || (unsigned int)(type - 13) > 1) )
    {
      ZoneNameFromIndex = DB_Zones_GetZoneNameFromIndex(existingEntryZoneIndex);
      v15 = DB_Zones_GetZoneNameFromIndex(newEntryZoneIndex);
      v16 = "dev_";
      v17 = 4i64;
      v18 = 4i64;
      v19 = "dev_";
      v20 = v15;
      if ( !ZoneNameFromIndex && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      do
      {
        v21 = v19[ZoneNameFromIndex - "dev_"];
        v22 = v18;
        v23 = *v19++;
        --v18;
        if ( !v22 )
          break;
        if ( v21 != v23 )
        {
          if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
            __debugbreak();
          while ( 1 )
          {
            v24 = v16[v20 - "dev_"];
            v25 = v17;
            v26 = *v16++;
            --v17;
            if ( !v25 )
              break;
            if ( v24 != v26 )
            {
              v27 = "dbgshd_";
              v28 = 7i64;
              v29 = 7i64;
              v30 = "dbgshd_";
              if ( !ZoneNameFromIndex && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
                __debugbreak();
              while ( 1 )
              {
                v31 = v30[ZoneNameFromIndex - "dbgshd_"];
                v32 = v29;
                v33 = *v30++;
                --v29;
                if ( !v32 )
                  break;
                if ( v31 != v33 )
                {
                  if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
                    __debugbreak();
                  while ( 1 )
                  {
                    v34 = v27[v20 - "dbgshd_"];
                    v35 = v28;
                    v36 = *v27++;
                    --v28;
                    if ( !v35 )
                      break;
                    if ( v34 != v36 )
                    {
                      DefaultXAssetName = DB_GetDefaultXAssetName(type);
                      if ( I_strncmp(DefaultXAssetName, name, 0x7FFFFFFFui64) )
                      {
                        if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 4237, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
                          __debugbreak();
                        if ( s_duplicateAssetWarningValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 4239, ASSERT_TYPE_ASSERT, "(s_duplicateAssetWarningValid == false)", (const char *)&queryFormat, "s_duplicateAssetWarningValid == false") )
                          __debugbreak();
                        v38 = "stashed";
                        if ( discarded )
                          v38 = "discarded";
                        XAssetTypeName = DB_GetXAssetTypeName(type);
                        j_sprintf_s(s_duplicateAssetWarningMsg, 0x400ui64, "Ignoring asset '%s' of type %s, between fastfiles %s(kept) and %s(%s)\n", name, XAssetTypeName, ZoneNameFromIndex, v20, v38);
                        s_duplicateAssetWarningValid = 1;
                      }
                      return;
                    }
                    if ( !v34 )
                      return;
                  }
                  return;
                }
                if ( !v31 )
                  return;
              }
              return;
            }
            if ( !v24 )
              return;
          }
          return;
        }
      }
      while ( v21 );
    }
  }
}

/*
==============
DB_AddOptionalLoadError
==============
*/
void DB_AddOptionalLoadError(unsigned int zoneFlags, const char *fileName)
{
  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 10893, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  if ( !zoneFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 10894, ASSERT_TYPE_ASSERT, "(zoneFlags)", "%s\n\tExpected zone flags for optional load error", "zoneFlags") )
    __debugbreak();
  if ( !s_dbLoadingProcessedAssets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 10895, ASSERT_TYPE_ASSERT, "(s_dbLoadingProcessedAssets)", (const char *)&queryFormat, "s_dbLoadingProcessedAssets") )
    __debugbreak();
  DB_ValidateRegistryState();
  s_dbOptionalLoadErrorFlags |= zoneFlags;
}

/*
==============
DB_AddXAsset
==============
*/
XAssetHeader DB_AddXAsset(XAssetType type, XAssetHeader *header)
{
  DB_AssetEntry *v4; 
  DB_AssetEntry *v5; 
  __int64 m_type; 
  const char *v7; 
  const char *v8; 
  unsigned int AssetEntryIndex; 
  const char *XAssetHeaderName; 
  const DB_AssetEntry *Asset; 
  unsigned __int64 v13; 
  unsigned __int64 v14; 
  __int64 v15; 

  if ( !header && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 4892, ASSERT_TYPE_ASSERT, "(header)", (const char *)&queryFormat, "header") )
    __debugbreak();
  DB_LockHashWrite();
  v4 = DB_LinkXAssetEntry(type, header);
  v5 = v4;
  if ( g_dbPreloading )
  {
    if ( DB_AssetTypeHasADefaultAsset((const XAssetType)v4->m_type) )
    {
      AssetEntryIndex = DB_GetAssetEntryIndex(v5);
      if ( !DB_AssetEntryFlags::Test(&s_assetManager.table.m_headEntries, AssetEntryIndex) )
      {
        XAssetHeaderName = DB_GetXAssetHeaderName(v5->m_type, v5->m_header);
        Asset = DB_AssetEntryTable::FindAsset(&s_assetManager.table, XAssetHeaderName, (XAssetType)v5->m_type);
        if ( !Asset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 789, ASSERT_TYPE_ASSERT, "(headEntry)", (const char *)&queryFormat, "headEntry") )
          __debugbreak();
        AssetEntryIndex = DB_GetAssetEntryIndex(Asset);
      }
      if ( AssetEntryIndex >= 0x5DA00ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
        __debugbreak();
      v13 = (unsigned __int64)AssetEntryIndex >> 6;
      v14 = 0x8000000000000000ui64 >> (AssetEntryIndex & 0x3F);
      if ( (v14 & s_assetManager.table.m_headEntries.m_flags.m_data[v13]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 793, ASSERT_TYPE_ASSERT, "(s_assetManager.table.GetUsedFlagsHeadOnly().Test( assetIndex ))", (const char *)&queryFormat, "s_assetManager.table.GetUsedFlagsHeadOnly().Test( assetIndex )") )
        __debugbreak();
      if ( AssetEntryIndex >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 181, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
        __debugbreak();
      s_assetManager.preloadKeepDefaultAssets.m_flags.m_data[v13] |= v14;
    }
    else
    {
      m_type = v5->m_type;
      if ( (unsigned int)m_type < 0x11 || (unsigned int)m_type > 0x12 && (_DWORD)m_type != 98 && (_DWORD)m_type != 100 )
      {
        if ( (unsigned int)m_type >= 0x71 )
        {
          LODWORD(v15) = v5->m_type;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v15, 113) )
            __debugbreak();
        }
        v7 = g_assetNames[m_type];
        v8 = DB_GetXAssetHeaderName(v5->m_type, v5->m_header);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 765, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Asset %s can't be safely preloaded, as we don't allow default assets for '%s'. Consider adding it to the list in DB_SetPreloadKeepDefaultAsset()", v8, v7) )
          __debugbreak();
      }
      if ( (*((_WORD *)v5 + 9) & 0x7FF) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 769, ASSERT_TYPE_ASSERT, "(assetEntry.GetZoneIndex() != DEFAULT_ZONE_INDEX)", (const char *)&queryFormat, "assetEntry.GetZoneIndex() != DEFAULT_ZONE_INDEX") )
        __debugbreak();
      if ( (v5->m_inuse & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 770, ASSERT_TYPE_ASSERT, "(assetEntry.TestInUse( ASSET_MASK_OWNS_RESOURCES ))", (const char *)&queryFormat, "assetEntry.TestInUse( ASSET_MASK_OWNS_RESOURCES )") )
      {
        __debugbreak();
        return v5->m_header;
      }
    }
  }
  return v5->m_header;
}

/*
==============
DB_AllocateDefaultAssetName
==============
*/
const char *DB_AllocateDefaultAssetName(const char *name)
{
  scr_string_t String; 

  if ( SL_IsString(name) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 2182, ASSERT_TYPE_ASSERT, "( ( !SL_IsString( name ) ) )", "( name ) = %s", name) )
    __debugbreak();
  String = j_SL_GetString_(name, 0, 26);
  if ( !String && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 2186, ASSERT_TYPE_ASSERT, "(scrString != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "scrString != NULL_SCR_STRING") )
    __debugbreak();
  return SL_ConvertToString(String);
}

/*
==============
DB_AllowMissingFrontEndAsset
==============
*/
bool DB_AllowMissingFrontEndAsset()
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 2347, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  return s_db_isDrawingFrame && Com_FrontEnd_IsInFrontEnd() && Com_FastFile_IsFrontendLoaded();
}

/*
==============
DB_AppendFastfileFailureText
==============
*/
void DB_AppendFastfileFailureText(unsigned int zoneFlags, const char *message, const char *filename)
{
  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5559, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  if ( !message && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5560, ASSERT_TYPE_ASSERT, "(message)", (const char *)&queryFormat, "message") )
    __debugbreak();
  if ( !filename && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5561, ASSERT_TYPE_ASSERT, "(filename)", (const char *)&queryFormat, "filename") )
    __debugbreak();
  DB_ValidateRegistryState();
  s_fastfileFailureTextFlags |= zoneFlags;
  Com_sprintfPos_truncate<1024>((char (*)[1024])s_fastfileFailureText, &s_fastfileFailureTextPos, "%s [%s]\n", message, filename);
}

/*
==============
DB_ArchiveAssets
==============
*/
void DB_ArchiveAssets()
{
  int v0; 
  GfxCmdBufContext result; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 10326, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !CL_TransientsSP_IsServerHalted() && SV_Main_InServerFrame() && !Sys_GetDatabaseStopServer() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 10273, ASSERT_TYPE_ASSERT, "(serverHalted || !SV_Main_InServerFrame() || Sys_GetDatabaseStopServer())", "%s\n\tInvalid DB operation while the server thread is running", "serverHalted || !SV_Main_InServerFrame() || Sys_GetDatabaseStopServer()") )
    __debugbreak();
  if ( !g_archiveBuf )
  {
    g_archiveBuf = 1;
    Sys_ProfBeginNamedEvent(0xFFBDB76B, "Phys_EndFrame");
    Physics_WaitForAllCommandsToFinish();
    Sys_ProfEndNamedEvent();
    v0 = R_PopRemoteScreenUpdate();
    Sys_ProfBeginNamedEvent(0xFFBDB76B, "R_SyncRenderThread");
    R_SyncRenderThread();
    Sys_ProfEndNamedEvent();
    Sys_ProfBeginNamedEvent(0xFFBDB76B, "R_ShutdownStreams");
    R_ShutdownStreams();
    Sys_ProfEndNamedEvent();
    if ( R_DeviceExists() )
    {
      Sys_ProfBeginNamedEvent(0xFFBDB76B, "DB_ArchiveAssets_D3DData");
      R_LockGfxImmediateContext();
      result = *RB_GetBackendCmdBufContext(&result);
      RB_UnbindAllImages(&result);
      R_UnlockGfxImmediateContext();
      Sys_ProfEndNamedEvent();
    }
    R_PushRemoteScreenUpdate(v0);
    Sys_ProfBeginNamedEvent(0xFFBDB76B, "DB_FlushEffects");
    DB_FlushEffects();
    Sys_ProfEndNamedEvent();
    Sys_ProfBeginNamedEvent(0xFFBDB76B, "DB_SaveDObjs");
    DB_SaveDObjs();
    Sys_ProfEndNamedEvent();
    if ( (s_dbCurrentWorkFlags & 0xFC700FFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6319, ASSERT_TYPE_ASSERT, "(( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_ZONES ) == 0)", (const char *)&queryFormat, "( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_ZONES ) == 0") )
      __debugbreak();
    if ( !s_dbCurrentWorkFlags )
    {
      Sys_ProfBeginNamedEvent(0xFFBDB76B, "DB_RestartEffects_Begin");
      DB_RestartEffects_Begin();
      Sys_ProfEndNamedEvent();
    }
  }
}

/*
==============
DB_AreFastfileLoadsCompleted
==============
*/
bool DB_AreFastfileLoadsCompleted()
{
  return !s_dbLoadingFastfiles;
}

/*
==============
DB_AssetDump_f
==============
*/
void DB_AssetDump_f()
{
  DB_LockHashRead();
  DB_DebugDump_DumpAssets(&s_assetManager.table);
  DB_UnlockHashRead();
}

/*
==============
DB_AssetQuery_HandleComError
==============
*/
void DB_AssetQuery_HandleComError(void)
{
  __int64 v0; 

  v0 = 8i64 * tls_index;
  if ( *(_BYTE *)(*(_QWORD *)((char *)NtCurrentTeb()->Reserved1[11] + v0) + 717i64) )
  {
    DB_AssetQuery_ThreadCheck();
    if ( !*(_BYTE *)(*(_QWORD *)((char *)NtCurrentTeb()->Reserved1[11] + v0) + 717i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3418, ASSERT_TYPE_ASSERT, "(s_inAssetQuery)", (const char *)&queryFormat, "s_inAssetQuery") )
      __debugbreak();
    *(_BYTE *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 717i64) = 0;
    if ( ((unsigned __int8)&s_assetManager.assetQueryCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_assetManager.assetQueryCount) )
      __debugbreak();
    if ( _InterlockedDecrement(&s_assetManager.assetQueryCount) < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3421, ASSERT_TYPE_ASSERT, "(Sys_InterlockedDecrement( &s_assetManager.assetQueryCount ) >= 0)", (const char *)&queryFormat, "Sys_InterlockedDecrement( &s_assetManager.assetQueryCount ) >= 0") )
      __debugbreak();
    if ( *(_BYTE *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 717i64) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3460, ASSERT_TYPE_ASSERT, "(!s_inAssetQuery)", (const char *)&queryFormat, "!s_inAssetQuery") )
        __debugbreak();
    }
  }
}

/*
==============
DB_AssetQuery_Pop
==============
*/
void DB_AssetQuery_Pop(void)
{
  DB_AssetQuery_ThreadCheck();
  if ( !*(_BYTE *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 717i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3418, ASSERT_TYPE_ASSERT, "(s_inAssetQuery)", (const char *)&queryFormat, "s_inAssetQuery") )
    __debugbreak();
  *(_BYTE *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 717i64) = 0;
  if ( ((unsigned __int8)&s_assetManager.assetQueryCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_assetManager.assetQueryCount) )
    __debugbreak();
  if ( _InterlockedDecrement(&s_assetManager.assetQueryCount) < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3421, ASSERT_TYPE_ASSERT, "(Sys_InterlockedDecrement( &s_assetManager.assetQueryCount ) >= 0)", (const char *)&queryFormat, "Sys_InterlockedDecrement( &s_assetManager.assetQueryCount ) >= 0") )
    __debugbreak();
}

/*
==============
DB_AssetQuery_Push
==============
*/
void DB_AssetQuery_Push(void)
{
  unsigned __int64 v0; 
  const char *CurrentThreadContextName; 
  __int64 v4; 

  DB_AssetQuery_ThreadCheck();
  if ( ((unsigned __int8)&s_assetManager.assetQueryCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_assetManager.assetQueryCount) )
    __debugbreak();
  if ( _InterlockedAdd(&s_assetManager.assetQueryCount, 1u) < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3403, ASSERT_TYPE_ASSERT, "(Sys_InterlockedIncrement( &s_assetManager.assetQueryCount ) >= 0)", (const char *)&queryFormat, "Sys_InterlockedIncrement( &s_assetManager.assetQueryCount ) >= 0") )
    __debugbreak();
  v0 = __rdtsc();
  if ( !s_assetManager.assetQueryCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3360, ASSERT_TYPE_ASSERT, "(s_assetManager.assetQueryCount)", (const char *)&queryFormat, "s_assetManager.assetQueryCount") )
    __debugbreak();
  CurrentThreadContextName = Sys_GetCurrentThreadContextName();
  Com_Printf(10, "DB_AssetQuery_Sync : %s thread...\n", CurrentThreadContextName);
  if ( Sys_IsMainThread() )
  {
    DB_SyncXAssets();
  }
  else if ( !Sys_IsServerThread() || !Com_FrontEnd_IsInFrontEnd() )
  {
    while ( s_dbLoadingFastfiles || DB_PendingZones_HasPendingZones() )
    {
      Sys_CheckQuitRequest();
      Sys_Sleep(1);
    }
  }
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  if ( (__int64)(__rdtsc() - v0) < 0 )
    *(double *)&_XMM0 = *(double *)&_XMM0 + 1.844674407370955e19;
  if ( *(double *)&_XMM0 * msecPerRawTimerTick > 0.01 )
    Com_PrintWarning(10, "WARNING: DB_AssetQuery_Sync stalled for %fms\n", (double)(*(double *)&_XMM0 * msecPerRawTimerTick));
  v4 = tls_index;
  if ( *(_BYTE *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 717i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3407, ASSERT_TYPE_ASSERT, "(!s_inAssetQuery)", (const char *)&queryFormat, "!s_inAssetQuery") )
    __debugbreak();
  *(_BYTE *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v4) + 717i64) = 1;
}

/*
==============
DB_AssetQuery_Query
==============
*/
__int64 DB_AssetQuery_Query(XAssetType type, const char *name, DBAssetQuery *outQuery)
{
  unsigned __int8 v6; 
  DB_AssetEntry *Asset; 
  const DB_AssetEntry *v8; 
  unsigned __int16 v9; 

  if ( !outQuery && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3427, ASSERT_TYPE_ASSERT, "(outQuery)", (const char *)&queryFormat, "outQuery") )
    __debugbreak();
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3428, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  v6 = 0;
  if ( !s_assetManager.assetQueryCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3432, ASSERT_TYPE_ASSERT, "(s_assetManager.assetQueryCount)", (const char *)&queryFormat, "s_assetManager.assetQueryCount") )
    __debugbreak();
  if ( !*(_BYTE *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 717i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3433, ASSERT_TYPE_ASSERT, "(s_inAssetQuery)", (const char *)&queryFormat, "s_inAssetQuery") )
    __debugbreak();
  DB_LockHashRead();
  Asset = DB_AssetEntryTable::FindAsset(&s_assetManager.table, name, type);
  v8 = Asset;
  if ( Asset )
  {
    v6 = 1;
    outQuery->header.physicsLibrary = Asset->m_header.physicsLibrary;
    v9 = truncate_cast<unsigned short,unsigned int>(*((_WORD *)Asset + 9) & 0x7FF);
    outQuery->zoneIndex = v9;
    outQuery->defaultAsset = v9 == 0;
    outQuery->transientAsset = DB_IsTransientAssetExternalCheck(v8);
  }
  DB_UnlockHashRead();
  return v6;
}

/*
==============
DB_AssetQuery_ThreadCheck
==============
*/
char DB_AssetQuery_ThreadCheck()
{
  char result; 
  XRegistryState v1; 
  XRegistryState v2; 

  if ( Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3318, ASSERT_TYPE_ASSERT, "(!Sys_IsDatabaseThread())", (const char *)&queryFormat, "!Sys_IsDatabaseThread()") )
    __debugbreak();
  result = Sys_IsMainThread();
  if ( result )
  {
    result = s_registryState;
    if ( s_registryState == REGISTRY_STATE_MAIN_THREAD )
    {
      v2 = s_registryState;
      v1 = s_registryState;
      result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3321, ASSERT_TYPE_ASSERT, "( s_registryState ) != ( REGISTRY_STATE_MAIN_THREAD )", "%s != %s\n\t%u, %u", "s_registryState", "REGISTRY_STATE_MAIN_THREAD", v1, v2);
      if ( result )
        __debugbreak();
    }
  }
  return result;
}

/*
==============
DB_AssetQuery_WaitForQueriesToComplete
==============
*/
void DB_AssetQuery_WaitForQueriesToComplete()
{
  unsigned __int64 v0; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3328, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( *(_BYTE *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 717i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3329, ASSERT_TYPE_ASSERT, "(!s_inAssetQuery)", (const char *)&queryFormat, "!s_inAssetQuery") )
    __debugbreak();
  v0 = __rdtsc();
  while ( s_assetManager.assetQueryCount )
  {
    Sys_CheckQuitRequest();
    Sys_Sleep(1);
  }
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  if ( (__int64)(__rdtsc() - v0) < 0 )
    *(double *)&_XMM0 = *(double *)&_XMM0 + 1.844674407370955e19;
  if ( *(double *)&_XMM0 * msecPerRawTimerTick > 0.01 )
    Com_PrintWarning(10, "WARNING: DB_AssetQuery_WaitForQueriesToComplete stalled for %fms\n", (double)(*(double *)&_XMM0 * msecPerRawTimerTick));
}

/*
==============
DB_BeginDrawFrame
==============
*/
void DB_BeginDrawFrame(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 2324, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( s_db_isDrawingFrame )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 2325, ASSERT_TYPE_ASSERT, "(s_db_isDrawingFrame == 0)", (const char *)&queryFormat, "s_db_isDrawingFrame == 0") )
      __debugbreak();
    ++s_db_isDrawingFrame;
  }
  else
  {
    ++s_db_isDrawingFrame;
  }
}

/*
==============
DB_BeginSPHotLoad
==============
*/
void DB_BeginSPHotLoad(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 10830, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( s_loadingSPHotLoad && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 10831, ASSERT_TYPE_ASSERT, "(!s_loadingSPHotLoad)", (const char *)&queryFormat, "!s_loadingSPHotLoad") )
    __debugbreak();
  s_loadingSPHotLoad = 1;
  if ( R_Cinematic_IsStartedOrPendingStart() )
    s_binkTransitionSPHotLoad = 1;
}

/*
==============
DB_CanDoTransientMaterialSort
==============
*/
char DB_CanDoTransientMaterialSort()
{
  if ( s_dbLoadingFastfiles )
    return 0;
  if ( (s_dbCurrentWorkFlags & 0xFC700FFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6319, ASSERT_TYPE_ASSERT, "(( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_ZONES ) == 0)", (const char *)&queryFormat, "( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_ZONES ) == 0") )
    __debugbreak();
  if ( s_dbCurrentWorkFlags )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6422, ASSERT_TYPE_ASSERT, "(!DB_IsDoingStreamOnlyWork())", (const char *)&queryFormat, "!DB_IsDoingStreamOnlyWork()") )
      __debugbreak();
  }
  return 1;
}

/*
==============
DB_CanSetZonePausedOrCancelled
==============
*/
bool DB_CanSetZonePausedOrCancelled(const int zoneIndex)
{
  unsigned __int64 v1; 
  unsigned __int64 v2; 
  unsigned __int64 v3; 

  v1 = zoneIndex;
  if ( (unsigned int)zoneIndex >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 7864, ASSERT_TYPE_ASSERT, "(unsigned)( zoneIndex ) < (unsigned)( MAX_ZONES )", "zoneIndex doesn't index MAX_ZONES\n\t%i not in [0, %i)", zoneIndex, 1956) )
    __debugbreak();
  if ( !(_DWORD)v1 )
    return 0;
  if ( v1 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  v2 = v1 >> 6;
  v3 = 0x8000000000000000ui64 >> (v1 & 0x3F);
  if ( (v3 & s_assetManager.fullyLoadedZones.m_data[v1 >> 6]) != 0 )
    return 0;
  if ( (unsigned int)v1 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  if ( (v3 & s_assetManager.assetsLoadedZones.m_data[v2]) == 0 )
    return 0;
  if ( (unsigned int)v1 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  if ( (v3 & s_assetManager.thisLoadPassZones.m_data[v2]) == 0 )
    return 0;
  if ( (unsigned int)v1 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  return (v3 & s_assetManager.cancelledZones.m_data[v2]) == 0;
}

/*
==============
DB_CancelLoadFastfiles
==============
*/
void DB_CancelLoadFastfiles(const DB_FastfileInfo *zoneInfo, unsigned int zoneCount)
{
  __int64 v2; 
  __int64 v4; 
  unsigned int i; 
  const DB_FastfileInfo *v6; 
  __int64 v7; 
  const char *ZoneNameFromIndex; 
  unsigned int ZoneFlagsFromIndex; 

  v2 = zoneCount;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 7961, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()", -2i64) )
    __debugbreak();
  if ( !(_DWORD)v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 7963, ASSERT_TYPE_ASSERT, "(zoneCount)", (const char *)&queryFormat, "zoneCount") )
    __debugbreak();
  if ( !zoneInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 7964, ASSERT_TYPE_ASSERT, "(zoneInfo)", (const char *)&queryFormat, "zoneInfo") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_CancelLoadFastfiles");
  DB_LoadTimes_OnPauseOrCancel();
  DB_LockPendingZoneWrite();
  if ( s_dbIsSyncLoading && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 7974, ASSERT_TYPE_ASSERT, "(!s_dbIsSyncLoading)", (const char *)&queryFormat, "!s_dbIsSyncLoading") )
    __debugbreak();
  DB_PendingZones_Cancel(zoneInfo, v2);
  v4 = 0i64;
  if ( (_DWORD)v2 )
  {
    while ( !DB_Zones_FastfileInfoMatches(&zoneInfo[v4], s_assetManager.pendingZoneInfo.flags, s_assetManager.pendingZoneInfo.parentZoneName) )
    {
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= (unsigned int)v2 )
        goto LABEL_18;
    }
    Com_Printf(16, "DB Cancelling Pending Zone %s (%s)\n", zoneInfo[v4].name, s_assetManager.pendingZoneInfo.parentZoneName);
    s_assetManager.pendingZoneCancelled = 1;
  }
LABEL_18:
  for ( i = 0; i < 0x7A4; ++i )
  {
    if ( DB_CanSetZonePausedOrCancelled(i) && (_DWORD)v2 )
    {
      v6 = zoneInfo;
      v7 = v2;
      do
      {
        ZoneNameFromIndex = DB_Zones_GetZoneNameFromIndex(i);
        ZoneFlagsFromIndex = DB_Zones_GetZoneFlagsFromIndex(i);
        if ( DB_Zones_FastfileInfoMatches(v6, ZoneFlagsFromIndex, ZoneNameFromIndex) )
        {
          DB_SetCancelledZoneIndex(i);
          DB_TryRedoAlwaysloadedFlagsForPauseOrCancel(i);
        }
        ++v6;
        --v7;
      }
      while ( v7 );
    }
  }
  s_assetManager.pendingZoneLock.writeThreadId = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&s_assetManager.pendingZoneLock);
  Sys_CheckReleaseLock(&s_assetManager.pendingZoneLock);
  Sys_ProfEndNamedEvent();
}

/*
==============
DB_CancelLoadFastfilesByZoneFlags
==============
*/
void DB_CancelLoadFastfilesByZoneFlags(unsigned int zoneFlags)
{
  int v2; 
  unsigned int i; 
  const char *ZoneNameFromIndex; 
  unsigned int ZoneFlagsFromIndex; 
  DB_FastfileInfo zoneInfo[2]; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 8011, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()", -2i64) )
    __debugbreak();
  zoneInfo[0].name = NULL;
  zoneInfo[0].zoneFlags = zoneFlags;
  *(_QWORD *)&zoneInfo[0].failureMode = 0i64;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 7961, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_CancelLoadFastfiles");
  DB_LoadTimes_OnPauseOrCancel();
  DB_LockPendingZoneWrite();
  if ( s_dbIsSyncLoading && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 7974, ASSERT_TYPE_ASSERT, "(!s_dbIsSyncLoading)", (const char *)&queryFormat, "!s_dbIsSyncLoading") )
    __debugbreak();
  DB_PendingZones_Cancel(zoneInfo, 1u);
  v2 = 0;
  while ( !DB_Zones_FastfileInfoMatches(&zoneInfo[v2], s_assetManager.pendingZoneInfo.flags, s_assetManager.pendingZoneInfo.parentZoneName) )
  {
    if ( ++v2 )
      goto LABEL_15;
  }
  Com_Printf(16, "DB Cancelling Pending Zone %s (%s)\n", zoneInfo[v2].name, s_assetManager.pendingZoneInfo.parentZoneName);
  s_assetManager.pendingZoneCancelled = 1;
LABEL_15:
  for ( i = 0; i < 0x7A4; ++i )
  {
    if ( DB_CanSetZonePausedOrCancelled(i) )
    {
      ZoneNameFromIndex = DB_Zones_GetZoneNameFromIndex(i);
      ZoneFlagsFromIndex = DB_Zones_GetZoneFlagsFromIndex(i);
      if ( DB_Zones_FastfileInfoMatches(zoneInfo, ZoneFlagsFromIndex, ZoneNameFromIndex) )
      {
        DB_SetCancelledZoneIndex(i);
        DB_TryRedoAlwaysloadedFlagsForPauseOrCancel(i);
      }
    }
  }
  s_assetManager.pendingZoneLock.writeThreadId = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&s_assetManager.pendingZoneLock);
  Sys_CheckReleaseLock(&s_assetManager.pendingZoneLock);
  Sys_ProfEndNamedEvent();
}

/*
==============
DB_CheckAllTransientFlagsUnset
==============
*/
void DB_CheckAllTransientFlagsUnset(const unsigned int assetIndex)
{
  unsigned __int64 v1; 
  unsigned __int64 v2; 
  __int64 v3; 
  unsigned __int64 *v4; 

  v1 = assetIndex;
  v2 = 0x8000000000000000ui64 >> (assetIndex & 0x3F);
  v3 = 3i64;
  v4 = &s_assetManager.transientFlags[0].keepDefaultAssets.m_flags.m_data[(unsigned __int64)assetIndex >> 6];
  do
  {
    if ( v1 >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
      __debugbreak();
    if ( (v2 & *(v4 - 5992)) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 876, ASSERT_TYPE_ASSERT, "(!s_assetManager.transientFlags[i].headAssets.Test( assetIndex ))", (const char *)&queryFormat, "!s_assetManager.transientFlags[i].headAssets.Test( assetIndex )") )
      __debugbreak();
    if ( v1 >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
      __debugbreak();
    if ( (v2 & *v4) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 877, ASSERT_TYPE_ASSERT, "(!s_assetManager.transientFlags[i].keepDefaultAssets.Test( assetIndex ))", (const char *)&queryFormat, "!s_assetManager.transientFlags[i].keepDefaultAssets.Test( assetIndex )") )
      __debugbreak();
    v4 += 11984;
    --v3;
  }
  while ( v3 );
}

/*
==============
DB_CheckAndExecuteTechsetFixUp
==============
*/
void DB_CheckAndExecuteTechsetFixUp(const bool checkTechSetFixUp)
{
  unsigned int v1; 
  DB_AssetEntryFlags *p_m_allocatedFlags; 
  unsigned int i; 
  TechniqueSetFixupFunctor v4; 

  if ( s_techniqueSetsNeedFixup && checkTechSetFixUp )
  {
    ProfLoad_Begin("DB_FixupTechniqueSets");
    v1 = 0;
    p_m_allocatedFlags = &s_assetManager.table.m_pool.m_allocatedFlags;
    for ( i = 0; i < 0x1768; ++i )
    {
      DB_AssetEntryPool::MutableForEachInBlock<TechniqueSetFixupFunctor>(&s_assetManager.table.m_pool, &s_assetManager.table.m_pool.m_allocatedFlags, p_m_allocatedFlags->m_flags.m_data[0], v1, &v4);
      v1 += 64;
      p_m_allocatedFlags = (DB_AssetEntryFlags *)((char *)p_m_allocatedFlags + 8);
    }
    ProfLoad_End();
    s_techniqueSetsNeedFixup = 0;
  }
}

/*
==============
DB_CheckDefaultAssetName
==============
*/
void DB_CheckDefaultAssetName(const char *defaultAssetName)
{
  const dvar_t *v1; 
  scr_string_t String; 
  scr_string_t v4; 

  v1 = DCONST_DVARBOOL_db_comprehensiveSanityChecks;
  if ( !DCONST_DVARBOOL_db_comprehensiveSanityChecks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "db_comprehensiveSanityChecks") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
  {
    if ( !defaultAssetName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 2208, ASSERT_TYPE_ASSERT, "(defaultAssetName)", (const char *)&queryFormat, "defaultAssetName") )
      __debugbreak();
    if ( !SL_IsString(defaultAssetName) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 2209, ASSERT_TYPE_ASSERT, "( ( SL_IsString( defaultAssetName ) ) )", "( defaultAssetName ) = %s", defaultAssetName) )
      __debugbreak();
    String = SL_FindString(defaultAssetName);
    if ( String != SL_ConvertFromString(defaultAssetName) )
    {
      v4 = SL_ConvertFromString(defaultAssetName);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 2211, ASSERT_TYPE_ASSERT, "( defaultAssetSL ) == ( SL_ConvertFromString( defaultAssetName ) )", "%s == %s\n\t%i, %i", "defaultAssetSL", "SL_ConvertFromString( defaultAssetName )", String, v4) )
        __debugbreak();
    }
    SL_CheckExists(String);
  }
}

/*
==============
DB_CheckForValidStashedAssets
==============
*/
void DB_CheckForValidStashedAssets(const DB_AssetEntry *assetEntry)
{
  unsigned int i; 
  __int64 v3; 
  const DB_AssetEntry *v4; 
  __int64 m_type; 
  const char *v6; 
  const char *XAssetHeaderName; 
  __int64 v8; 
  __int64 v9; 

  for ( i = assetEntry->m_nextStashed; i; i = v4->m_nextStashed )
  {
    v3 = i;
    if ( i >= 0x5DA00ui64 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 358, ASSERT_TYPE_ASSERT, "( index < m_data.size() )", (const char *)&queryFormat, "index < m_data.size()") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
        __debugbreak();
    }
    v4 = (const DB_AssetEntry *)((char *)&s_assetManager + 20 * v3);
    if ( DB_ShouldStashedAssetBeTransferred(v4) )
    {
      DB_DumpAssetAndStashes(assetEntry);
      m_type = assetEntry->m_type;
      if ( (unsigned int)m_type >= 0x71 )
      {
        LODWORD(v9) = 113;
        LODWORD(v8) = assetEntry->m_type;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v8, v9) )
          __debugbreak();
      }
      v6 = g_assetNames[m_type];
      XAssetHeaderName = DB_GetXAssetHeaderName(assetEntry->m_type, assetEntry->m_header);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5308, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Asset %s(%s) has stashed assets that could be transferred. See above for zones", XAssetHeaderName, v6) )
        __debugbreak();
    }
  }
}

/*
==============
DB_CheckIfMissingAssetIsTransient
==============
*/
char DB_CheckIfMissingAssetIsTransient(XAssetType type, const char *name)
{
  DB_AssetEntry *Asset; 
  bool v4; 
  const char *XAssetTypeName; 
  char destBuffer[256]; 

  DB_FixAssetNameAllowEmpty(destBuffer, 0x100ui64, name);
  if ( !destBuffer[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnamefix.h", 91, ASSERT_TYPE_ASSERT, "( !I_strempty( destBuffer ) )", "DB_FixAssetName final name ends up an empty string. Probable error here.") )
    __debugbreak();
  DB_LockHashRead();
  Asset = DB_AssetEntryTable::FindAsset(&s_assetManager.table, destBuffer, type);
  v4 = Asset && (*((_WORD *)Asset + 9) & 0x7FF) == 0 && DB_IsTransientAssetKeepDefaultEntry(Asset);
  DB_UnlockHashRead();
  if ( !v4 )
    return 0;
  if ( DB_Transients_VerbosePrint() )
  {
    XAssetTypeName = DB_GetXAssetTypeName(type);
    Com_Printf(16, "TRANSIENT: Ignoring missing asset issue with %s '%s', since it exists in a transient fastfile.\n", XAssetTypeName, destBuffer);
  }
  return 1;
}

/*
==============
DB_CheckLockWrite
==============
*/
char DB_CheckLockWrite()
{
  threadId_t CurrentThreadId; 
  threadId_t writeThreadId; 
  threadId_t v3; 

  if ( !*(_BYTE *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 716i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 505, ASSERT_TYPE_ASSERT, "(s_dbHashRWLockTLSHasWriteLock)", (const char *)&queryFormat, "s_dbHashRWLockTLSHasWriteLock") )
    __debugbreak();
  CurrentThreadId = Sys_GetCurrentThreadId();
  if ( s_dbHashRWLock.writeThreadId != CurrentThreadId )
  {
    v3 = Sys_GetCurrentThreadId();
    writeThreadId = s_dbHashRWLock.writeThreadId;
    LOBYTE(CurrentThreadId) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 234, ASSERT_TYPE_ASSERT, "( lock->writeThreadId ) == ( Sys_GetCurrentThreadId() )", "%s == %s\n\t%i, %i", "lock->writeThreadId", "Sys_GetCurrentThreadId()", writeThreadId, v3);
    if ( (_BYTE)CurrentThreadId )
      __debugbreak();
  }
  return CurrentThreadId;
}

/*
==============
DB_CheckPostLoadCompletionForZone
==============
*/
bool DB_CheckPostLoadCompletionForZone(const int zoneIndex)
{
  unsigned __int64 v1; 
  bool v2; 
  unsigned __int64 v3; 
  unsigned __int64 v4; 
  __int64 v6; 

  v1 = zoneIndex;
  if ( zoneIndex )
  {
    if ( zoneIndex == 0xFFFF )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5653, ASSERT_TYPE_ASSERT, "(zoneIndex != INVALID_ZONE_INDEX)", (const char *)&queryFormat, "zoneIndex != INVALID_ZONE_INDEX") )
        __debugbreak();
    }
    else if ( (unsigned int)zoneIndex < 0x7A4 )
    {
      goto LABEL_10;
    }
    LODWORD(v6) = v1;
    v2 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5654, ASSERT_TYPE_ASSERT, "(unsigned)( zoneIndex ) < (unsigned)( MAX_ZONES )", "zoneIndex doesn't index MAX_ZONES\n\t%i not in [0, %i)", v6, 1956);
  }
  else
  {
    v2 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5652, ASSERT_TYPE_ASSERT, "(zoneIndex != DEFAULT_ZONE_INDEX)", (const char *)&queryFormat, "zoneIndex != DEFAULT_ZONE_INDEX");
  }
  if ( v2 )
    __debugbreak();
LABEL_10:
  if ( v1 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  v3 = v1 >> 6;
  v4 = 0x8000000000000000ui64 >> (v1 & 0x3F);
  if ( (v4 & s_assetManager.fullyLoadedZones.m_data[v1 >> 6]) != 0 )
    return 0;
  if ( (unsigned int)v1 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  if ( (v4 & s_assetManager.assetsLoadedZones.m_data[v3]) == 0 )
    return 0;
  if ( (unsigned int)v1 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  return (v4 & s_assetManager.pausedZones.m_data[v3]) == 0;
}

/*
==============
DB_ClearForcedStubbedAsset
==============
*/
void DB_ClearForcedStubbedAsset(const DB_AssetEntry *assetEntry)
{
  unsigned __int64 AssetEntryIndex; 
  unsigned __int64 v2; 

  AssetEntryIndex = DB_GetAssetEntryIndex(assetEntry);
  if ( AssetEntryIndex >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  v2 = 0x8000000000000000ui64 >> (AssetEntryIndex & 0x3F);
  if ( (v2 & s_assetManager.table.m_headEntries.m_flags.m_data[AssetEntryIndex >> 6]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 714, ASSERT_TYPE_ASSERT, "(s_assetManager.table.GetUsedFlagsHeadOnly().Test( assetIndex ))", (const char *)&queryFormat, "s_assetManager.table.GetUsedFlagsHeadOnly().Test( assetIndex )") )
    __debugbreak();
  if ( AssetEntryIndex >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 209, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  s_assetManager.forcedStubbedKeepDefaultAssets.m_flags.m_data[AssetEntryIndex >> 6] &= ~v2;
}

/*
==============
DB_ClearPendingZoneInfo
==============
*/
void *DB_ClearPendingZoneInfo()
{
  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 8353, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  s_assetManager.pendingZoneCancelled = 0;
  s_assetManager.pendingZonePaused = 0;
  return memset_0(&s_assetManager.pendingZoneInfo, 0, sizeof(s_assetManager.pendingZoneInfo));
}

/*
==============
DB_ClearTransientAssetFlags
==============
*/
void DB_ClearTransientAssetFlags(const DB_AssetEntry *assetEntry)
{
  unsigned __int64 AssetEntryIndex; 
  unsigned __int64 v2; 
  __int64 v3; 
  unsigned __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  unsigned __int64 v7; 
  DB_AssetEntryFlags *p_keepDefaultAssets; 
  __int64 v9; 
  unsigned int v10; 
  unsigned __int64 v11; 

  AssetEntryIndex = DB_GetAssetEntryIndex(assetEntry);
  v2 = AssetEntryIndex;
  if ( AssetEntryIndex >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  v3 = AssetEntryIndex >> 6;
  v4 = 0x8000000000000000ui64 >> (AssetEntryIndex & 0x3F);
  v11 = AssetEntryIndex >> 6;
  if ( (v4 & s_assetManager.table.m_headEntries.m_flags.m_data[v11]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 932, ASSERT_TYPE_ASSERT, "(s_assetManager.table.GetUsedFlagsHeadOnly().Test( assetIndex ))", (const char *)&queryFormat, "s_assetManager.table.GetUsedFlagsHeadOnly().Test( assetIndex )") )
    __debugbreak();
  if ( DB_GetAndVerifyTransientFlagCount(AssetEntryIndex) > 1 )
  {
    v10 = DB_GetAndVerifyTransientFlagCount(AssetEntryIndex);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 935, ASSERT_TYPE_ASSERT, "( DB_GetAndVerifyTransientFlagCount( assetIndex ) ) <= ( 1 )", "%s <= %s\n\t%u, %u", "DB_GetAndVerifyTransientFlagCount( assetIndex )", "1", v10, 1) )
      __debugbreak();
  }
  v5 = v3;
  v6 = v3;
  v7 = ~v4;
  p_keepDefaultAssets = &s_assetManager.transientFlags[0].keepDefaultAssets;
  v9 = 3i64;
  do
  {
    if ( v2 >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 209, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
      __debugbreak();
    p_keepDefaultAssets[-1].m_flags.m_data[v5] &= v7;
    if ( v2 >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 209, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
      __debugbreak();
    p_keepDefaultAssets->m_flags.m_data[v6] &= v7;
    p_keepDefaultAssets += 2;
    --v9;
  }
  while ( v9 );
  if ( v2 >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  if ( (v4 & s_assetManager.transientOverrides.m_flags.m_data[v11]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 943, ASSERT_TYPE_ASSERT, "(!s_assetManager.transientOverrides.Test( assetIndex ))", (const char *)&queryFormat, "!s_assetManager.transientOverrides.Test( assetIndex )") )
    __debugbreak();
}

/*
==============
DB_CreateDefaultEntry
==============
*/
DB_AssetEntry *DB_CreateDefaultEntry(XAssetType type, const char *name)
{
  __int64 v3; 
  DB_AssetEntry *v4; 

  v3 = type;
  DB_CheckLockWrite();
  if ( g_loadingDebugZone )
  {
    if ( (unsigned int)v3 >= 0x71 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v3, 113) )
      __debugbreak();
    Com_Printf(16, "mychanges load default asset: %s,%s\n", g_assetNames[v3], name);
  }
  if ( (_DWORD)v3 == 11 )
    DB_PushSuppressMaterialSort();
  v4 = DB_AssetEntryPool::Allocate(&s_assetManager.table.m_pool, (XAssetType)v3, 0);
  if ( (_DWORD)v3 == 11 )
    DB_PopSuppressMaterialSort();
  DB_SetupDefaultAsset(v4, (XAssetType)v3, name, 1);
  if ( (v4->m_inuse & 8) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 2299, ASSERT_TYPE_ASSERT, "(!newEntry->TestInUse( ASSET_MASK_OWNS_RESOURCES ))", (const char *)&queryFormat, "!newEntry->TestInUse( ASSET_MASK_OWNS_RESOURCES )") )
    __debugbreak();
  DB_AssetEntryTable::AddToTable(&s_assetManager.table, v4);
  return v4;
}

/*
==============
DB_CreateTransientStubAsset
==============
*/
void DB_CreateTransientStubAsset(const XAssetType assetType, const char *assetName, const int zoneIndex, const TransientFlagType transientFlagType)
{
  __int64 v4; 
  DB_AssetEntry *Asset; 
  const DB_AssetEntry *DefaultEntry; 
  int v9; 
  const char *ZoneNameFromIndex; 
  const char *XAssetTypeName; 
  bool IsPreloadZoneIndex; 
  const char *v13; 
  const char *v14; 
  const char *v15; 
  const char *v16; 
  __int64 v17; 

  v4 = assetType;
  if ( !assetName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 1323, ASSERT_TYPE_ASSERT, "(assetName)", (const char *)&queryFormat, "assetName") )
    __debugbreak();
  if ( DB_Transients_VerbosePrint() )
  {
    if ( (unsigned int)v4 >= 0x71 )
    {
      LODWORD(v17) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v17, 113) )
        __debugbreak();
    }
    Com_Printf(16, "Creating default asset, for transient asset: %s(%s)\n", assetName, g_assetNames[v4]);
  }
  Asset = DB_AssetEntryTable::FindAsset(&s_assetManager.table, assetName, (XAssetType)v4);
  DefaultEntry = Asset;
  if ( Asset )
  {
    v9 = *((_WORD *)Asset + 9) & 0x7FF;
    if ( (*((_WORD *)Asset + 9) & 0x7FF) != 0 )
    {
      if ( DB_Zones_IsTransientZoneIndex(*((_WORD *)Asset + 9) & 0x7FF) )
      {
        DB_UnlockHashWrite();
        ZoneNameFromIndex = DB_Zones_GetZoneNameFromIndex(v9);
        XAssetTypeName = DB_GetXAssetTypeName(v4);
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143F88F20, 1046i64, assetName, XAssetTypeName, ZoneNameFromIndex);
      }
      else
      {
        IsPreloadZoneIndex = DB_Zones_IsPreloadZoneIndex(v9);
        v13 = DB_Zones_GetZoneNameFromIndex(v9);
        v14 = v13;
        if ( IsPreloadZoneIndex )
        {
          if ( !DB_Zones_IsTransientZoneName(v13) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 1357, ASSERT_TYPE_ASSERT, "( ( DB_Zones_IsTransientZoneName( zoneName ) ) )", "( zoneName ) = %s", v14) )
            __debugbreak();
          v15 = DB_GetXAssetTypeName(v4);
          Com_Printf(16, "Transient asset already processed during preload: %s(%s)\n", assetName, v15);
        }
        else
        {
          v16 = DB_GetXAssetTypeName(v4);
          Com_Printf(16, "Transient asset already exists in DB in non-transient zone: %s(%s) zone %s\n", assetName, v16, v14);
          DB_TransientSetOverrideAsset(DefaultEntry);
        }
      }
    }
  }
  else
  {
    DefaultEntry = DB_CreateDefaultEntry((XAssetType)v4, assetName);
    if ( !DefaultEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 1335, ASSERT_TYPE_ASSERT, "(assetEntry)", (const char *)&queryFormat, "assetEntry") )
      __debugbreak();
  }
  DB_SetTransientAssetFlags(DefaultEntry, transientFlagType, 1);
}

/*
==============
DB_DefaultStringUsageReport
==============
*/
void DB_DefaultStringUsageReport(const char *const debugName)
{
  unsigned int StringUsageMaxPercent; 
  unsigned int v3; 
  unsigned int StringUsagePercent; 
  const dvar_t *v5; 
  unsigned int fmt; 

  StringUsageMaxPercent = Scr_GetStringUsageMaxPercent();
  v3 = Scr_GetStringUsageMaxPercent();
  StringUsagePercent = Scr_GetStringUsagePercent();
  fmt = v3;
  Com_Printf(16, "%s: String Usage %d%% (max %d%%)\n", debugName, StringUsagePercent, fmt);
  if ( s_maxUsagePercentHW < StringUsageMaxPercent )
  {
    Com_Printf(16, "%s: String Usage New High Watermark\n", debugName);
    v5 = DCONST_DVARBOOL_db_dumpStringUsagedHW;
    s_maxUsagePercentHW = StringUsageMaxPercent;
    if ( !DCONST_DVARBOOL_db_dumpStringUsagedHW && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "db_dumpStringUsagedHW") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( v5->current.enabled )
      MT_DumpTreeToCSV();
  }
}

/*
==============
DB_DoesXModelExist
==============
*/
bool DB_DoesXModelExist(const char *name)
{
  DB_AssetEntry *Asset; 
  DB_AssetEntry *v2; 

  Asset = DB_AssetEntryTable::FindAsset(&s_assetManager.table, name, ASSET_TYPE_XMODEL);
  v2 = Asset;
  if ( Asset )
  {
    if ( Asset->m_type != 9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 10777, ASSERT_TYPE_ASSERT, "(entry->GetType() == XAssetType::ASSET_TYPE_XMODEL)", (const char *)&queryFormat, "entry->GetType() == XAssetType::ASSET_TYPE_XMODEL") )
      __debugbreak();
    if ( !v2->m_header.physicsLibrary && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 10778, ASSERT_TYPE_ASSERT, "(entry->GetAssetHeader().model)", (const char *)&queryFormat, "entry->GetAssetHeader().model") )
      __debugbreak();
    LOBYTE(Asset) = 1;
  }
  return (char)Asset;
}

/*
==============
DB_DumpAssetAndStashes
==============
*/
void DB_DumpAssetAndStashes(const DB_AssetEntry *assetEntry)
{
  int v2; 
  const char *ZoneNameFromIndex; 
  __int64 m_type; 
  const char *v5; 
  const char *v6; 
  const char *XAssetHeaderName; 
  unsigned int i; 
  __int64 v9; 
  const DB_AssetEntry *v10; 
  bool ShouldStashedAssetBeTransferred; 
  int v12; 
  const char *v13; 
  __int64 v14; 
  const char *v15; 
  const char *v16; 
  const char *v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 

  v2 = *((_WORD *)assetEntry + 9) & 0x7FF;
  ZoneNameFromIndex = DB_Zones_GetZoneNameFromIndex(v2);
  m_type = assetEntry->m_type;
  v5 = ZoneNameFromIndex;
  if ( (unsigned int)m_type >= 0x71 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", m_type, 113) )
    __debugbreak();
  v6 = g_assetNames[m_type];
  XAssetHeaderName = DB_GetXAssetHeaderName(assetEntry->m_type, assetEntry->m_header);
  LODWORD(v18) = v2;
  Com_Printf(0, "%s(%s) - Zone %s %d\n", XAssetHeaderName, v6, v5, v18);
  for ( i = assetEntry->m_nextStashed; i; i = v10->m_nextStashed )
  {
    v9 = i;
    if ( i >= 0x5DA00ui64 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 358, ASSERT_TYPE_ASSERT, "( index < m_data.size() )", (const char *)&queryFormat, "index < m_data.size()") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
        __debugbreak();
    }
    v10 = (const DB_AssetEntry *)((char *)&s_assetManager + 20 * v9);
    ShouldStashedAssetBeTransferred = DB_ShouldStashedAssetBeTransferred(v10);
    v12 = *(_WORD *)&s_assetManager.table.m_pool.m_pool.m_data.m_buffer[20 * v9 + 18] & 0x7FF;
    v13 = DB_Zones_GetZoneNameFromIndex(v12);
    v14 = (unsigned __int8)s_assetManager.table.m_pool.m_pool.m_data.m_buffer[20 * v9 + 17];
    v15 = v13;
    if ( (unsigned int)v14 >= 0x71 )
    {
      LODWORD(v20) = 113;
      LODWORD(v19) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v19, v20) )
        __debugbreak();
    }
    v16 = g_assetNames[v14];
    v17 = DB_GetXAssetHeaderName(v10->m_type, v10->m_header);
    LODWORD(v20) = ShouldStashedAssetBeTransferred;
    LODWORD(v19) = v12;
    Com_Printf(0, "%s(%s) - Zone %s %d (shouldBeTransferred)=%d (stashed)\n", v17, v16, v15, v19, v20);
  }
}

/*
==============
DB_DumpAssetChainForAsset
==============
*/
void DB_DumpAssetChainForAsset(const XAssetType type, const char *const name)
{
  __int64 v3; 
  DB_AssetEntry *Asset; 
  DB_AssetEntry *v5; 
  int v6; 
  const char *ZoneNameFromIndex; 
  const char *i; 
  unsigned __int64 m_nextStashed; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 

  v3 = type;
  DB_LockHashRead();
  Asset = DB_AssetEntryTable::FindAsset(&s_assetManager.table, name, (XAssetType)v3);
  v5 = Asset;
  if ( Asset )
  {
    v6 = *((_WORD *)Asset + 9) & 0x7FF;
    ZoneNameFromIndex = DB_Zones_GetZoneNameFromIndex(v6);
    if ( (unsigned int)v3 >= 0x71 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v3, 113) )
      __debugbreak();
    for ( i = "Asset '%s'(%s) in zone %s(%d) - HEAD\n"; ; i = "Asset '%s'(%s) in zone %s(%d) - STASHED\n" )
    {
      LODWORD(v11) = v6;
      Com_Printf(0, i, name, g_assetNames[v3], ZoneNameFromIndex, v11);
      m_nextStashed = v5->m_nextStashed;
      if ( !(_DWORD)m_nextStashed )
        break;
      v10 = (unsigned int)m_nextStashed;
      if ( m_nextStashed >= 0x5DA00 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 358, ASSERT_TYPE_ASSERT, "( index < m_data.size() )", (const char *)&queryFormat, "index < m_data.size()") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
          __debugbreak();
      }
      v5 = (DB_AssetEntry *)((char *)&s_assetManager + 20 * v10);
      if ( !v5 )
        break;
      v6 = *((_WORD *)v5 + 9) & 0x7FF;
      ZoneNameFromIndex = DB_Zones_GetZoneNameFromIndex(v6);
      if ( (unsigned int)v3 >= 0x71 )
      {
        LODWORD(v12) = 113;
        LODWORD(v11) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v11, v12) )
          __debugbreak();
      }
    }
  }
  else
  {
    if ( (unsigned int)v3 >= 0x71 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v3, 113) )
      __debugbreak();
    Com_Printf(0, "Asset '%s'(%s) does not exist in the DB.\n", name, g_assetNames[v3]);
  }
  DB_UnlockHashRead();
}

/*
==============
DB_DumpPoolInfo_f
==============
*/
void DB_DumpPoolInfo_f(void)
{
  DB_LockHashRead();
  DB_DebugDump_DumpPoolInfo();
  DB_UnlockHashRead();
}

/*
==============
DB_EndDrawFrame
==============
*/
void DB_EndDrawFrame(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 2332, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( s_db_isDrawingFrame == 1 )
  {
    --s_db_isDrawingFrame;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 2333, ASSERT_TYPE_ASSERT, "(s_db_isDrawingFrame == 1)", (const char *)&queryFormat, "s_db_isDrawingFrame == 1") )
      __debugbreak();
    --s_db_isDrawingFrame;
  }
}

/*
==============
DB_EndSPHotLoad
==============
*/
void DB_EndSPHotLoad(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 10849, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !s_loadingSPHotLoad && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 10850, ASSERT_TYPE_ASSERT, "(s_loadingSPHotLoad)", (const char *)&queryFormat, "s_loadingSPHotLoad") )
    __debugbreak();
  s_loadingSPHotLoad = 0;
}

/*
==============
DB_EnumSafeXAssets_FastFile
==============
*/
void DB_EnumSafeXAssets_FastFile(XAssetType type, void (*func)(XAssetHeader, void *), void *inData)
{
  unsigned int v3; 
  DB_AssetEntryFlags *p_m_headEntries; 
  unsigned int i; 
  EnumSafeAssetsFunctor functor; 

  functor.type = type;
  functor.data = inData;
  functor.funcCall = func;
  DB_LockHashRead();
  v3 = 0;
  p_m_headEntries = &s_assetManager.table.m_headEntries;
  for ( i = 0; i < 0x1768; ++i )
  {
    DB_AssetEntryPool::ForEachInBlock<EnumSafeAssetsFunctor>(&s_assetManager.table.m_pool, &s_assetManager.table.m_headEntries, p_m_headEntries->m_flags.m_data[0], v3, &functor);
    v3 += 64;
    p_m_headEntries = (DB_AssetEntryFlags *)((char *)p_m_headEntries + 8);
  }
  DB_UnlockHashRead();
}

/*
==============
DB_EnumXAssets_FastFile
==============
*/
void DB_EnumXAssets_FastFile(XAssetType type, void (*func)(XAssetHeader, void *), void *inData, bool includeStashed)
{
  DB_AssetEntryFlags *p_m_tableEntries; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned __int64 *v11; 
  EnumAssetsFunctor functor; 

  DB_LockHashRead();
  functor.data = inData;
  functor.type = type;
  p_m_tableEntries = &s_assetManager.table.m_tableEntries;
  functor.funcCall = func;
  if ( !includeStashed )
    p_m_tableEntries = &s_assetManager.table.m_headEntries;
  v9 = 0;
  v10 = 0;
  v11 = (unsigned __int64 *)p_m_tableEntries;
  do
  {
    DB_AssetEntryPool::ForEachInBlock<EnumAssetsFunctor>(&s_assetManager.table.m_pool, p_m_tableEntries, *v11, v9, &functor);
    v9 += 64;
    ++v10;
    ++v11;
  }
  while ( v10 < 0x1768 );
  DB_UnlockHashRead();
}

/*
==============
DB_ErrorCleanup
==============
*/
void DB_ErrorCleanup(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 10699, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  g_loadingDebugZone = 0;
  DB_LoadTimes_OnErrorCleanup();
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 2340, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  s_db_isDrawingFrame = 0;
  if ( (DB_Zones_GetInUseFlags() & 0x80u) == 0 )
    DB_SyncXAssetsSkipAlwaysLoaded(1);
  else
    DB_SyncXAssetsKeepAlive();
  Stream_ImageRecord_ErrorCleanup();
  if ( g_archiveBuf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 10726, ASSERT_TYPE_ASSERT, "(!g_archiveBuf)", (const char *)&queryFormat, "!g_archiveBuf") )
    __debugbreak();
  if ( db_inPostLoadXZone )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 10727, ASSERT_TYPE_ASSERT, "(!db_inPostLoadXZone)", (const char *)&queryFormat, "!db_inPostLoadXZone") )
      __debugbreak();
  }
}

/*
==============
DB_FindAssetWhichUnloadsTogether
==============
*/
DB_AssetEntry *DB_FindAssetWhichUnloadsTogether(DB_AssetEntry *headAssetEntry, const int checkZoneIndex)
{
  DB_AssetEntry *v4; 
  int v5; 
  const char *ZoneNameFromIndex; 
  __int64 m_type; 
  const char *v8; 
  const char *v9; 
  const char *XAssetHeaderName; 
  unsigned __int64 m_nextStashed; 
  __int64 v12; 
  unsigned int ZoneFlagsFromIndex; 
  unsigned int v15; 
  __int64 v16; 
  __int64 v17; 

  v4 = headAssetEntry;
  while ( 1 )
  {
    v5 = *((_WORD *)v4 + 9) & 0x7FF;
    if ( (*((_WORD *)v4 + 9) & 0x7FF) != 0 )
    {
      if ( v5 == checkZoneIndex )
      {
        ZoneNameFromIndex = DB_Zones_GetZoneNameFromIndex(v5);
        m_type = headAssetEntry->m_type;
        v8 = ZoneNameFromIndex;
        if ( (unsigned int)m_type >= 0x71 )
        {
          LODWORD(v17) = 113;
          LODWORD(v16) = headAssetEntry->m_type;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v16, v17) )
            __debugbreak();
        }
        v9 = g_assetNames[m_type];
        XAssetHeaderName = DB_GetXAssetHeaderName(headAssetEntry->m_type, headAssetEntry->m_header);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3836, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Asset %s(%s), has been seen twice in zone %s", XAssetHeaderName, v9, v8) )
          __debugbreak();
        goto LABEL_9;
      }
      ZoneFlagsFromIndex = DB_Zones_GetZoneFlagsFromIndex(v5);
      if ( (ZoneFlagsFromIndex & 0x3CFF000) == 0 )
        break;
    }
LABEL_9:
    m_nextStashed = v4->m_nextStashed;
    if ( (_DWORD)m_nextStashed )
    {
      v12 = (unsigned int)m_nextStashed;
      if ( m_nextStashed >= 0x5DA00 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 358, ASSERT_TYPE_ASSERT, "( index < m_data.size() )", (const char *)&queryFormat, "index < m_data.size()") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
          __debugbreak();
      }
      v4 = (DB_AssetEntry *)((char *)&s_assetManager + 20 * v12);
      if ( 20 * v12 != 0xFFFFFFFEB4301E20ui64 )
        continue;
    }
    return 0i64;
  }
  v15 = DB_Zones_GetZoneFlagsFromIndex(checkZoneIndex);
  if ( ZoneFlagsFromIndex == v15 )
    return v4;
  if ( (v15 & 0x100000) != 0 )
  {
    if ( !DB_Zones_IsFrontendUIPreloadZoneIndex(checkZoneIndex) && (ZoneFlagsFromIndex & 0x3F) != 0 )
      return v4;
    goto LABEL_9;
  }
  if ( (v15 & 0x200100) != 0 )
  {
    if ( (ZoneFlagsFromIndex & 0x3F) != 0 )
      return v4;
    goto LABEL_9;
  }
  if ( (v15 & 0x3F) == 0 || (ZoneFlagsFromIndex & 1) == 0 )
    goto LABEL_9;
  return v4;
}

/*
==============
DB_FindXAssetHeader
==============
*/
XAssetHeader DB_FindXAssetHeader(XAssetType type, const char *givenName, int allowCreateDefault)
{
  int v3; 
  __int64 v5; 
  BOOL IsDoingTransientOnlyWork; 
  bool v7; 
  _BYTE *physicsLibrary; 
  int v9; 
  bool v10; 
  BOOL v11; 
  BOOL v12; 
  BOOL IsMainThread; 
  const char *XAssetTypeName; 
  bool v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  DB_AssetEntry *Asset; 
  unsigned int v20; 
  const char *v21; 
  const DB_AssetEntry *v22; 
  BOOL IsDatabaseReady; 
  bool mainThreadHasOwnership; 
  const char *v25; 
  const DB_AssetEntry *v26; 
  int v27; 
  DB_AssetEntry *DefaultEntry; 
  unsigned __int64 AssetEntryIndex; 
  int v30; 
  __int64 v31; 
  __int64 v32; 
  __int64 v33; 
  DB_AssetEntry *v34; 
  bool v35; 
  int v36; 
  const char *v37; 
  int v38; 
  __int64 v40; 
  __int64 v41; 
  __int64 v42; 
  __int64 v43; 
  int v44; 
  unsigned __int64 v46; 
  DB_AssetEntry *v47; 
  char destBuffer[256]; 
  char name[264]; 

  v3 = allowCreateDefault;
  v5 = type;
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_FindXAssetHeader");
  if ( !s_dbIsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 2398, ASSERT_TYPE_ASSERT, "(s_dbIsInitialized)", (const char *)&queryFormat, "s_dbIsInitialized") )
    __debugbreak();
  if ( (_DWORD)v5 == 63 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 2402, ASSERT_TYPE_ASSERT, "( type != ASSET_TYPE_STREAMING_INFO )", "DB_ForEachStreamingInfo does not lock - assets of this type should not be accessed using this function.") )
    __debugbreak();
  if ( I_strempty(givenName) )
  {
    if ( (unsigned int)v5 >= 0x71 )
    {
      LODWORD(v40) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v40, 113) )
        __debugbreak();
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 2405, ASSERT_TYPE_ASSERT, "( !I_strempty( givenName ) )", "Empty name query for asset type '%s'", g_assetNames[v5]) )
      __debugbreak();
  }
  DB_FixAssetNameAllowEmpty(destBuffer, 0x100ui64, givenName);
  if ( !destBuffer[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnamefix.h", 91, ASSERT_TYPE_ASSERT, "( !I_strempty( destBuffer ) )", "DB_FixAssetName final name ends up an empty string. Probable error here.") )
    __debugbreak();
  IsDoingTransientOnlyWork = DB_IsDoingTransientOnlyWork();
  v7 = g_dbPreloading;
  physicsLibrary = NULL;
  v47 = NULL;
  v9 = 1;
  if ( !Sys_IsMainThread() || !s_dbLoadingFastfiles )
    goto LABEL_36;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 2347, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( s_db_isDrawingFrame && Com_FrontEnd_IsInFrontEnd() && Com_FastFile_IsFrontendLoaded() )
    goto LABEL_36;
  v10 = s_db_alwaysAllowMissingServerAssets;
  if ( !s_db_alwaysAllowMissingServerAssets )
    goto LABEL_27;
  if ( !Sys_IsServerThread() )
  {
    v10 = s_db_alwaysAllowMissingServerAssets;
LABEL_27:
    if ( !IsDoingTransientOnlyWork && !v7 && r_glob.allowAddDrawCall )
    {
      if ( !v10 || !Sys_IsServerThread() )
        v9 = 0;
      v11 = DB_AllowMissingFrontEndAsset();
      v12 = !s_dbLoadingFastfiles;
      IsMainThread = Sys_IsMainThread();
      XAssetTypeName = DB_GetXAssetTypeName(v5);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 2437, ASSERT_TYPE_ASSERT, "(!Sys_IsMainThread() || ( DB_AreFastfileLoadsCompleted() || DB_AllowMissingFrontEndAsset() || DB_AllowMissingServerAsset() || transientLoading || isPreloading ) || !r_glob.allowAddDrawCall)", "%s\n\tDB_FindXAssetHeader - Threadcheck fail for %s(%s) - %d %d %d %d %d %d %d", "!Sys_IsMainThread() || ( DB_AreFastfileLoadsCompleted() || DB_AllowMissingFrontEndAsset() || DB_AllowMissingServerAsset() || transientLoading || isPreloading ) || !r_glob.allowAddDrawCall", destBuffer, XAssetTypeName, IsMainThread, v12, v11, v9, 0, 0, 1) )
        __debugbreak();
      v3 = allowCreateDefault;
    }
  }
LABEL_36:
  v44 = 0;
  v15 = 0;
  if ( (_DWORD)v5 == 8 && v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 2450, ASSERT_TYPE_ASSERT, "( ( !allowCreateDefault ) )", "( name ) = %s", destBuffer) )
    __debugbreak();
  v46 = 0i64;
  while ( 1 )
  {
    Sys_CheckQuitRequest();
    v16 = 8i64 * tls_index;
    v17 = *(_QWORD *)((char *)NtCurrentTeb()->Reserved1[11] + v16);
    if ( !*(_BYTE *)(v17 + 716) && !*(_DWORD *)(v17 + 720) )
    {
      Sys_CheckAcquireLock(&s_dbHashRWLock);
      AcquireSRWLockShared((PSRWLOCK)&s_dbHashRWLock);
    }
    v18 = *(_QWORD *)((char *)NtCurrentTeb()->Reserved1[11] + v16);
    ++*(_DWORD *)(v18 + 720);
    Asset = DB_AssetEntryTable::FindAsset(&s_assetManager.table, destBuffer, (XAssetType)v5);
    DB_UnlockHashRead();
    if ( Asset )
    {
      if ( DB_IsAssetSafeToReturn(Asset, 1) )
        goto $returnAsset;
      v47 = Asset;
      Asset = NULL;
    }
    if ( (_DWORD)v5 == 56 )
    {
      if ( allowCreateDefault && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 2553, ASSERT_TYPE_ASSERT, "(!allowCreateDefault)", (const char *)&queryFormat, "!allowCreateDefault") )
        __debugbreak();
      goto LABEL_174;
    }
    if ( Sys_IsDatabaseThread() )
      break;
$notReady:
    if ( v15 )
      goto LABEL_53;
    ProfLoad_Begin("Wait for fastfile asset");
    v44 = Sys_Milliseconds();
    v15 = 1;
    if ( !Sys_IsDatabaseReady() )
    {
      if ( Sys_IsMainThread() )
        R_ReleaseThreadOwnership();
LABEL_53:
      if ( Sys_IsDatabaseReady() )
        break;
      NET_RemoteDbgHostFrame();
      if ( Sys_IsMainThread() )
        Sys_LoadingKeepAlive();
      if ( Sys_IsMainThread() )
        Sys_LoadingProcessEvents();
      v20 = s_dbCurrentWorkFlags;
      if ( (s_dbCurrentWorkFlags & 0xFC700FFF) != 0 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6336, ASSERT_TYPE_ASSERT, "(( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_ZONES ) == 0)", (const char *)&queryFormat, "( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_ZONES ) == 0") )
          __debugbreak();
        v20 = s_dbCurrentWorkFlags;
      }
      if ( (v20 & 0xFF000) != 0 && (v20 & 0xFFF00FFF) == 0 )
      {
        if ( (unsigned int)v5 >= 0x71 )
        {
          LODWORD(v42) = 113;
          LODWORD(v40) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v40, v42) )
            __debugbreak();
        }
        Com_PrintError(16, "Missing asset '%s' (%s) (Not stalling, we're loading transients)\n", destBuffer, g_assetNames[v5]);
        if ( DB_IsDoingTransientSPOnlyWorkWithServerSync() && Sys_IsServerThread() )
          CL_TransientsSP_ServerAssetQueryHangFix();
        break;
      }
      if ( g_dbPreloading )
      {
        if ( (unsigned int)v5 >= 0x71 )
        {
          LODWORD(v42) = 113;
          LODWORD(v40) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v40, v42) )
            __debugbreak();
        }
        Com_PrintError(16, "Missing asset '%s' (%s) (Not stalling, we're doing a preload)\n", destBuffer, g_assetNames[v5]);
        break;
      }
      if ( Sys_IsMainThread() && DB_AllowMissingFrontEndAsset() )
      {
        v21 = DB_GetXAssetTypeName(v5);
        Com_PrintError(16, "Missing UI Asset '%s' (%s) (Not stalling, UI fast file is loaded)\n", destBuffer, v21);
        break;
      }
      if ( s_db_alwaysAllowMissingServerAssets && Sys_IsServerThread() )
      {
        if ( (unsigned int)v5 >= 0x71 )
        {
          LODWORD(v42) = 113;
          LODWORD(v40) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v40, v42) )
            __debugbreak();
        }
        Com_PrintError(16, "Missing Server Asset '%s' (%s) (Not stalling from the server thread)\n", destBuffer, g_assetNames[v5]);
        break;
      }
      mainThreadHasOwnership = 1;
      if ( Sys_IsMainThread() && LUI_IsOwnerThreadMain() && !r_glob.screenUpdateNotify && !r_glob.remoteScreenUpdateNesting )
        mainThreadHasOwnership = r_glob.mainThreadHasOwnership;
      if ( v46 == 120 * (v46 / 0x78) )
      {
        v25 = DB_GetXAssetTypeName(v5);
        LODWORD(v40) = mainThreadHasOwnership;
        Com_PrintWarning(16, "DB_FindXAssetHeader: waiting for an asset '%s' of type '%s' (retried: %zu times) (clScreenUpdate=%u)\n", destBuffer, v25, v46, v40);
      }
      ++v46;
      if ( mainThreadHasOwnership )
        R_BeginRemoteScreenUpdate();
      else
        R_BeginRemoteScreenUpdateNoClScreenUpdate();
      Sys_Sleep(1);
      if ( mainThreadHasOwnership )
        R_EndRemoteScreenUpdate();
      else
        R_EndRemoteScreenUpdateNoClScreenUpdate();
    }
  }
  if ( Asset )
    goto $returnAsset;
  DB_LockHashWrite();
  v22 = DB_AssetEntryTable::FindAsset(&s_assetManager.table, destBuffer, (XAssetType)v5);
  Asset = (DB_AssetEntry *)v22;
  if ( !v22 )
  {
    v26 = v47;
    goto LABEL_115;
  }
  if ( !DB_IsAssetSafeToReturn(v22, 1) )
  {
    v26 = Asset;
LABEL_115:
    if ( allowCreateDefault )
    {
      if ( !v26 )
      {
        DefaultEntry = DB_CreateDefaultEntry((XAssetType)v5, destBuffer);
        if ( !Sys_IsDatabaseThread() )
          DB_AssetEntry::SetInUse(DefaultEntry, 1u);
        AssetEntryIndex = DB_GetAssetEntryIndex(DefaultEntry);
        if ( AssetEntryIndex >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
          __debugbreak();
        if ( ((0x8000000000000000ui64 >> (AssetEntryIndex & 0x3F)) & s_assetManager.unusableDefaultAssets.m_flags.m_data[AssetEntryIndex >> 6]) != 0 )
        {
          if ( (unsigned int)v5 >= 0x71 )
          {
            LODWORD(v42) = 113;
            LODWORD(v40) = v5;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v40, v42) )
              __debugbreak();
          }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 2731, ASSERT_TYPE_ASSERT, "(!s_assetManager.unusableDefaultAssets.Test( assetEntryIndex ))", "%s\n\tMissing asset '%s'(%s). This asset type doesn't have a usable default asset.", "!s_assetManager.unusableDefaultAssets.Test( assetEntryIndex )", destBuffer, g_assetNames[v5]) )
            __debugbreak();
        }
        DB_UnlockHashWrite();
        v30 = Sys_Milliseconds();
        DB_LogMissingAsset((const XAssetType)v5, destBuffer, DefaultEntry, v15, v30 - v44);
        if ( v15 )
          ProfLoad_End();
        physicsLibrary = DefaultEntry->m_header.physicsLibrary;
        goto LABEL_176;
      }
      DB_DumpAssetAndStashes(v26);
      if ( (unsigned int)v5 >= 0x71 )
      {
        LODWORD(v42) = 113;
        LODWORD(v40) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v40, v42) )
          __debugbreak();
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 2706, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Queried for a missing asset %s(%s) while we're in an unsafe state to return that asset. This asset is likely in the wrong fastfile, one in the process of being loaded. See above this assert for the place(s) it exists.", destBuffer, g_assetNames[v5]) )
        __debugbreak();
      if ( (unsigned int)v5 >= 0x71 )
      {
        LODWORD(v43) = 113;
        LODWORD(v41) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v41, v43) )
          __debugbreak();
      }
      Com_Printf(0, "Queried for a missing asset %s(%s) while we're in an unsafe state to return that asset. This asset is likely in the wrong fastfile, one in the process of being loaded.\n", destBuffer, g_assetNames[v5]);
      if ( (unsigned int)v5 >= 0x71 )
      {
        LODWORD(v43) = 113;
        LODWORD(v41) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 2150, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v41, v43) )
          __debugbreak();
      }
      physicsLibrary = s_assetManager.masterDefaultAssets[v5].physicsLibrary;
      DB_UnlockHashWrite();
    }
    else
    {
      DB_UnlockHashWrite();
      v27 = Sys_Milliseconds();
      DB_LogMissingAsset((const XAssetType)v5, destBuffer, NULL, v15, v27 - v44);
    }
LABEL_174:
    if ( v15 )
      ProfLoad_End();
    goto LABEL_176;
  }
  if ( !Asset->m_header.physicsLibrary && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 2680, ASSERT_TYPE_ASSERT, "(assetEntry->GetAssetHeader().data)", (const char *)&queryFormat, "assetEntry->GetAssetHeader().data") )
    __debugbreak();
  DB_UnlockHashWrite();
$returnAsset:
  if ( !Asset->m_header.physicsLibrary && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 2483, ASSERT_TYPE_ASSERT, "(assetEntry->GetAssetHeader().data)", (const char *)&queryFormat, "assetEntry->GetAssetHeader().data") )
    __debugbreak();
  if ( Sys_IsDatabaseThread() )
    goto LABEL_168;
  if ( (Asset->m_inuse & 3) == 0 )
  {
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_MarkXAssetEntry");
    IsDatabaseReady = Sys_IsDatabaseReady();
    DB_LockHashWrite();
    s_assetMarkDatabaseReady = IsDatabaseReady;
    DB_MarkXAssetEntry(Asset, 1u);
    DB_UnlockHashWrite();
    if ( !IsDatabaseReady )
      LOBYTE(IsDatabaseReady) = (Asset->m_inuse & 3) != 0;
    Sys_ProfEndNamedEvent();
    if ( !IsDatabaseReady )
      goto $notReady;
  }
  if ( (*((_WORD *)Asset + 9) & 0x7FF) == 0 )
  {
    DB_FixAssetNameAllowEmpty(name, 0x100ui64, destBuffer);
    if ( !name[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnamefix.h", 91, ASSERT_TYPE_ASSERT, "( !I_strempty( destBuffer ) )", "DB_FixAssetName final name ends up an empty string. Probable error here.") )
      __debugbreak();
    v31 = 8i64 * tls_index;
    v32 = *(_QWORD *)((char *)NtCurrentTeb()->Reserved1[11] + v31);
    if ( !*(_BYTE *)(v32 + 716) && !*(_DWORD *)(v32 + 720) )
    {
      Sys_CheckAcquireLock(&s_dbHashRWLock);
      AcquireSRWLockShared((PSRWLOCK)&s_dbHashRWLock);
    }
    v33 = *(_QWORD *)((char *)NtCurrentTeb()->Reserved1[11] + v31);
    ++*(_DWORD *)(v33 + 720);
    v34 = DB_AssetEntryTable::FindAsset(&s_assetManager.table, name, (XAssetType)v5);
    v35 = v34 && (*((_WORD *)v34 + 9) & 0x7FF) == 0 && DB_IsTransientAssetKeepDefaultEntry(v34);
    DB_UnlockHashRead();
    if ( v35 )
    {
      if ( DB_Transients_VerbosePrint() )
      {
        if ( (unsigned int)v5 >= 0x71 )
        {
          LODWORD(v42) = 113;
          LODWORD(v40) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v40, v42) )
            __debugbreak();
        }
        Com_Printf(16, "TRANSIENT: Ignoring missing asset issue with %s '%s', since it exists in a transient fastfile.\n", g_assetNames[v5], name);
      }
    }
    else
    {
      v36 = Sys_Milliseconds();
      DB_LogMissingAsset((const XAssetType)v5, destBuffer, Asset, v15, v36 - v44);
    }
    goto LABEL_168;
  }
  if ( v15 )
  {
    if ( (unsigned int)v5 >= 0x71 )
    {
      LODWORD(v42) = 113;
      LODWORD(v40) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v40, v42) )
        __debugbreak();
    }
    v37 = g_assetNames[v5];
    v38 = Sys_Milliseconds();
    Com_Printf(10, "Waited %i msec for asset '%s' of type '%s'.\n", (unsigned int)(v38 - v44), destBuffer, v37);
LABEL_168:
    if ( v15 )
      ProfLoad_End();
  }
  physicsLibrary = Asset->m_header.physicsLibrary;
LABEL_176:
  Sys_ProfEndNamedEvent();
  return (XAssetHeader)physicsLibrary;
}

/*
==============
DB_FixupAllWorldTransientZones
==============
*/
void DB_FixupAllWorldTransientZones()
{
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_FixupAllWorldTransientZones");
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3594, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()", -2i64) )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB|0x80) )
  {
    if ( s_world.draw.transientZoneCount > 1 )
      DB_UpdateGfxWorldTransientZones();
    if ( fxWorld.transientZoneCount > 1 )
      DB_UpdateFxWorldTransientZones();
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
DB_FixupWorldTransientZonesExternal
==============
*/
void DB_FixupWorldTransientZonesExternal(void)
{
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_FixupWorldTransientZonesExternal");
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3617, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()", -2i64) )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB|0x80) )
  {
    if ( s_world.draw.transientZoneCount > 1 )
    {
      DB_LockHashRead();
      DB_UpdateGfxWorldTransientZones();
      DB_UnlockHashRead();
    }
    if ( fxWorld.transientZoneCount > 1 )
    {
      DB_LockHashRead();
      DB_UpdateFxWorldTransientZones();
      DB_UnlockHashRead();
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
DB_FreeDefaultAssetEntry
==============
*/
void DB_FreeDefaultAssetEntry(DB_AssetEntry *assetEntry)
{
  __int64 m_type; 
  const char *v3; 
  const char *XAssetHeaderName; 
  unsigned __int64 AssetEntryIndex; 
  unsigned __int64 v6; 
  unsigned __int64 v7; 
  unsigned __int64 v8; 
  const char *v9; 
  __int64 v10; 

  if ( (*((_WORD *)assetEntry + 9) & 0x7FF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 9980, ASSERT_TYPE_ASSERT, "(assetEntry.GetZoneIndex() == DEFAULT_ZONE_INDEX)", (const char *)&queryFormat, "assetEntry.GetZoneIndex() == DEFAULT_ZONE_INDEX") )
    __debugbreak();
  if ( assetEntry->m_nextStashed )
  {
    DB_DumpAssetAndStashes(assetEntry);
    m_type = assetEntry->m_type;
    if ( (unsigned int)m_type >= 0x71 )
    {
      LODWORD(v10) = assetEntry->m_type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v10, 113) )
        __debugbreak();
    }
    v3 = g_assetNames[m_type];
    XAssetHeaderName = DB_GetXAssetHeaderName(assetEntry->m_type, assetEntry->m_header);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 9985, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Asset %s(%s) has stashed assets!", XAssetHeaderName, v3) )
      __debugbreak();
  }
  DB_ReleaseXAsset(assetEntry->m_header, (XAssetType)assetEntry->m_type, (DB_ReleaseType)((assetEntry->m_inuse & 8) == 0));
  assetEntry->m_inuse &= ~8u;
  AssetEntryIndex = DB_GetAssetEntryIndex(assetEntry);
  if ( AssetEntryIndex >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  v6 = AssetEntryIndex >> 6;
  v7 = 0x8000000000000000ui64 >> (AssetEntryIndex & 0x3F);
  if ( (v7 & s_assetManager.defaultAssets.m_flags.m_data[AssetEntryIndex >> 6]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 9995, ASSERT_TYPE_ASSERT, "(s_assetManager.defaultAssets.Test( assetEntryIndex ))", (const char *)&queryFormat, "s_assetManager.defaultAssets.Test( assetEntryIndex )") )
    __debugbreak();
  if ( AssetEntryIndex >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 209, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  v8 = ~v7;
  s_assetManager.defaultAssets.m_flags.m_data[v6] &= v8;
  if ( AssetEntryIndex >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 209, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  s_assetManager.unusableDefaultAssets.m_flags.m_data[v6] &= v8;
  if ( AssetEntryIndex >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 209, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  s_assetManager.preloadKeepDefaultAssets.m_flags.m_data[v6] &= v8;
  DB_ClearTransientAssetFlags(assetEntry);
  DB_ClearForcedStubbedAsset(assetEntry);
  v9 = DB_GetXAssetHeaderName(assetEntry->m_type, assetEntry->m_header);
  DB_CheckLockWrite();
  DB_RemoveAndFreeAssetEntryChecks(assetEntry);
  DB_AssetEntryTable::RemoveFromTable(&s_assetManager.table, assetEntry);
  DB_AssetEntryPool::Free(&s_assetManager.table.m_pool, assetEntry);
  if ( SL_IsString(v9) )
    DB_FreeDefaultAssetName(v9);
}

/*
==============
DB_FreeDefaultAssetName
==============
*/
void DB_FreeDefaultAssetName(const char *name)
{
  scr_string_t v2; 

  if ( !SL_IsString(name) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 2194, ASSERT_TYPE_ASSERT, "( ( SL_IsString( name ) ) )", "( name ) = %s", name) )
    __debugbreak();
  v2 = SL_ConvertFromString(name);
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 2197, ASSERT_TYPE_ASSERT, "(scrString != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "scrString != NULL_SCR_STRING") )
    __debugbreak();
  SL_RemoveRefToString(v2);
}

/*
==============
DB_FreeDefaultEntries
==============
*/

void __fastcall DB_FreeDefaultEntries(double _XMM0_8, double _XMM1_8)
{
  DB_AssetEntryFlags *p_keepDefaultAssets; 
  __int64 v3; 
  unsigned int v4; 
  DB_AssetEntryFlags *p_m_headEntries; 
  __int64 v6; 
  char v7; 
  __int64 v8; 
  char v9; 
  __int64 v10; 
  FreeDefaultEntriesFunctor v13; 

  DB_CheckLockWrite();
  if ( g_loadingDebugZone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 10046, ASSERT_TYPE_ASSERT, "(!g_loadingDebugZone)", (const char *)&queryFormat, "!g_loadingDebugZone") )
    __debugbreak();
  p_keepDefaultAssets = &s_assetManager.transientFlags[0].keepDefaultAssets;
  v3 = 3i64;
  do
  {
    memset_0(&p_keepDefaultAssets[-1], 0, sizeof(DB_AssetEntryFlags));
    memset_0(p_keepDefaultAssets, 0, sizeof(DB_AssetEntryFlags));
    p_keepDefaultAssets += 2;
    --v3;
  }
  while ( v3 );
  *(_WORD *)&s_assetManager.forceStubbedDataLoading = 0;
  memset_0(&s_assetManager.forcedStubbedKeepDefaultAssets, 0, 0x17680ui64);
  v4 = 0;
  p_m_headEntries = &s_assetManager.table.m_headEntries;
  do
  {
    DB_AssetEntryPool::MutableForEachInBlock<FreeDefaultEntriesFunctor>(&s_assetManager.table.m_pool, &s_assetManager.table.m_headEntries, p_m_headEntries->m_flags.m_data[0], v3, &v13);
    LODWORD(v3) = v3 + 64;
    ++v4;
    p_m_headEntries = (DB_AssetEntryFlags *)((char *)p_m_headEntries + 8);
  }
  while ( v4 < 0x1768 );
  v6 = 0i64;
  while ( !s_assetManager.table.m_pool.m_allocatedFlags.m_flags.m_data[v6] )
  {
    if ( (unsigned __int64)++v6 >= 5992 )
    {
      v7 = 1;
      goto LABEL_13;
    }
  }
  v7 = 0;
LABEL_13:
  v8 = 0i64;
  while ( !s_assetManager.table.m_tableEntries.m_flags.m_data[v8] )
  {
    if ( (unsigned __int64)++v8 >= 5992 )
    {
      v9 = 1;
      goto LABEL_18;
    }
  }
  v9 = 0;
LABEL_18:
  if ( v7 != v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrytable.h", 91, ASSERT_TYPE_ASSERT, "(m_pool.IsEmpty() == m_tableEntries.IsEmpty())", (const char *)&queryFormat, "m_pool.IsEmpty() == m_tableEntries.IsEmpty()") )
    __debugbreak();
  v10 = 0i64;
  while ( !s_assetManager.table.m_tableEntries.m_flags.m_data[v10] )
  {
    if ( (unsigned __int64)++v10 >= 5992 )
      goto LABEL_27;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 10069, ASSERT_TYPE_ASSERT, "(s_assetManager.table.IsEmpty())", (const char *)&queryFormat, "s_assetManager.table.IsEmpty()") )
    __debugbreak();
LABEL_27:
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vpxor   xmm1, xmm1, xmm1
  }
  s_assetManager.masterDefaultAssets[0].physicsLibrary = NULL;
  *(_OWORD *)&s_assetManager.masterDefaultAssets[1].physicsLibrary = _XMM0;
  *(_OWORD *)&s_assetManager.masterDefaultAssets[3].physicsLibrary = _XMM1;
  *(_OWORD *)&s_assetManager.masterDefaultAssets[5].physicsLibrary = _XMM0;
  *(_OWORD *)&s_assetManager.masterDefaultAssets[7].physicsLibrary = _XMM1;
  *(_OWORD *)&s_assetManager.masterDefaultAssets[9].physicsLibrary = _XMM0;
  *(_OWORD *)&s_assetManager.masterDefaultAssets[11].physicsLibrary = _XMM1;
  *(_OWORD *)&s_assetManager.masterDefaultAssets[13].physicsLibrary = _XMM0;
  *(_OWORD *)&s_assetManager.masterDefaultAssets[15].physicsLibrary = _XMM1;
  *(_OWORD *)&s_assetManager.masterDefaultAssets[17].physicsLibrary = _XMM0;
  *(_OWORD *)&s_assetManager.masterDefaultAssets[19].physicsLibrary = _XMM1;
  *(_OWORD *)&s_assetManager.masterDefaultAssets[21].physicsLibrary = _XMM0;
  *(_OWORD *)&s_assetManager.masterDefaultAssets[23].physicsLibrary = _XMM1;
  *(_OWORD *)&s_assetManager.masterDefaultAssets[25].physicsLibrary = _XMM0;
  *(_OWORD *)&s_assetManager.masterDefaultAssets[27].physicsLibrary = _XMM1;
  *(_OWORD *)&s_assetManager.masterDefaultAssets[29].physicsLibrary = _XMM0;
  *(_OWORD *)&s_assetManager.masterDefaultAssets[31].physicsLibrary = _XMM1;
  *(_OWORD *)&s_assetManager.masterDefaultAssets[33].physicsLibrary = _XMM0;
  *(_OWORD *)&s_assetManager.masterDefaultAssets[35].physicsLibrary = _XMM1;
  *(_OWORD *)&s_assetManager.masterDefaultAssets[37].physicsLibrary = _XMM0;
  *(_OWORD *)&s_assetManager.masterDefaultAssets[39].physicsLibrary = _XMM1;
  *(_OWORD *)&s_assetManager.masterDefaultAssets[41].physicsLibrary = _XMM0;
  *(_OWORD *)&s_assetManager.masterDefaultAssets[43].physicsLibrary = _XMM1;
  *(_OWORD *)&s_assetManager.masterDefaultAssets[45].physicsLibrary = _XMM0;
  *(_OWORD *)&s_assetManager.masterDefaultAssets[47].physicsLibrary = _XMM1;
  *(_OWORD *)&s_assetManager.masterDefaultAssets[49].physicsLibrary = _XMM0;
  *(_OWORD *)&s_assetManager.masterDefaultAssets[51].physicsLibrary = _XMM1;
  *(_OWORD *)&s_assetManager.masterDefaultAssets[53].physicsLibrary = _XMM0;
  *(_OWORD *)&s_assetManager.masterDefaultAssets[55].physicsLibrary = _XMM1;
  *(_OWORD *)&s_assetManager.masterDefaultAssets[57].physicsLibrary = _XMM0;
  *(_OWORD *)&s_assetManager.masterDefaultAssets[59].physicsLibrary = _XMM1;
  *(_OWORD *)&s_assetManager.masterDefaultAssets[61].physicsLibrary = _XMM0;
  *(_OWORD *)&s_assetManager.masterDefaultAssets[63].physicsLibrary = _XMM1;
  *(_OWORD *)&s_assetManager.masterDefaultAssets[65].physicsLibrary = _XMM0;
  *(_OWORD *)&s_assetManager.masterDefaultAssets[67].physicsLibrary = _XMM1;
  *(_OWORD *)&s_assetManager.masterDefaultAssets[69].physicsLibrary = _XMM0;
  *(_OWORD *)&s_assetManager.masterDefaultAssets[71].physicsLibrary = _XMM1;
  *(_OWORD *)&s_assetManager.masterDefaultAssets[73].physicsLibrary = _XMM0;
  *(_OWORD *)&s_assetManager.masterDefaultAssets[75].physicsLibrary = _XMM1;
  *(_OWORD *)&s_assetManager.masterDefaultAssets[77].physicsLibrary = _XMM0;
  *(_OWORD *)&s_assetManager.masterDefaultAssets[79].physicsLibrary = _XMM1;
  *(_OWORD *)&s_assetManager.masterDefaultAssets[81].physicsLibrary = _XMM0;
  *(_OWORD *)&s_assetManager.masterDefaultAssets[83].physicsLibrary = _XMM1;
  *(_OWORD *)&s_assetManager.masterDefaultAssets[85].physicsLibrary = _XMM0;
  *(_OWORD *)&s_assetManager.masterDefaultAssets[87].physicsLibrary = _XMM1;
  *(_OWORD *)&s_assetManager.masterDefaultAssets[89].physicsLibrary = _XMM0;
  *(_OWORD *)&s_assetManager.masterDefaultAssets[91].physicsLibrary = _XMM1;
  *(_OWORD *)&s_assetManager.masterDefaultAssets[93].physicsLibrary = _XMM0;
  *(_OWORD *)&s_assetManager.masterDefaultAssets[95].physicsLibrary = _XMM1;
  *(_OWORD *)&s_assetManager.masterDefaultAssets[97].physicsLibrary = _XMM0;
  *(_OWORD *)&s_assetManager.masterDefaultAssets[99].physicsLibrary = _XMM1;
  *(_OWORD *)&s_assetManager.masterDefaultAssets[101].physicsLibrary = _XMM0;
  *(_OWORD *)&s_assetManager.masterDefaultAssets[103].physicsLibrary = _XMM1;
  *(_OWORD *)&s_assetManager.masterDefaultAssets[105].physicsLibrary = _XMM0;
  *(_OWORD *)&s_assetManager.masterDefaultAssets[107].physicsLibrary = _XMM1;
  *(_OWORD *)&s_assetManager.masterDefaultAssets[109].physicsLibrary = _XMM0;
  *(_OWORD *)&s_assetManager.masterDefaultAssets[111].physicsLibrary = _XMM1;
  DB_ModelFixup_SetDefaultSurfs(NULL);
  DB_AssetUsage_ResetValues();
}

/*
==============
DB_FreeLevelXAssetsForMap
==============
*/
void DB_FreeLevelXAssetsForMap(const char *mapName)
{
  bool IsPreloadZoneName; 
  bool v3; 
  DB_FastfileState v4; 
  unsigned int v5; 
  DB_FastfileInfo zoneInfo; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 8310, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  IsPreloadZoneName = DB_Zones_IsPreloadZoneName(mapName);
  v3 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW|0x80);
  v4 = DB_PollFastfileState(mapName);
  DB_SyncXAssets();
  if ( !v3 || v4 != AWAITING_COMMIT || IsPreloadZoneName || DB_Zones_IsFrontEndSceneZoneName(mapName) )
  {
    v5 = 16640;
    CL_Transients_OnLevelUnload();
    if ( !IsPreloadZoneName )
      v5 = 66076928;
    CrashReport_AddKVP("MapName", "<none>");
    zoneInfo.zoneFlags = v5;
    zoneInfo.name = NULL;
    *(_QWORD *)&zoneInfo.failureMode = 0i64;
    DB_UnloadFastfiles(&zoneInfo, 1u, 0);
    CL_Streaming_CheckForTransientReloads();
  }
}

/*
==============
DB_FreeOnlyCustomizationAssets
==============
*/
bool DB_FreeOnlyCustomizationAssets()
{
  if ( g_usedDebugZone )
    return 0;
  if ( (s_dbCurrentWorkFlags & 0xFC700FFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6347, ASSERT_TYPE_ASSERT, "(( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_ZONES ) == 0)", (const char *)&queryFormat, "( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_ZONES ) == 0") )
    __debugbreak();
  return (s_dbCurrentWorkFlags & 0x80000) != 0;
}

/*
==============
DB_FreeUnusedResources
==============
*/
void DB_FreeUnusedResources(const DB_ZoneBitArray *unloadZones)
{
  unsigned int v2; 
  unsigned int v3; 
  __int64 v4; 
  __int64 v5; 
  unsigned int v6; 
  TransientGroupFlags *v7; 
  unsigned int v8; 
  __int64 v9; 
  const DB_ZoneBitArray *v10; 
  __int64 v11; 
  DB_AssetEntryFlags *p_m_allocatedFlags; 
  unsigned int v13; 
  unsigned int i; 
  unsigned int v15; 
  DB_AssetEntryFlags *p_m_tableEntries; 
  unsigned int j; 
  const dvar_t *v18; 
  unsigned int v19; 
  unsigned int v20; 
  DB_AssetEntryFlags *p_defaultAssets; 
  unsigned int v22; 
  DB_AssetEntryFlags *v23; 
  FreeTransientCustomizationAssetEntryFunctor v24; 

  DB_CheckLockWrite();
  if ( DB_FreeOnlyCustomizationAssets() )
  {
    v2 = s_dbCurrentWorkFlags;
    if ( (s_dbCurrentWorkFlags & 0xFF000) == 0 || (s_dbCurrentWorkFlags & 0x80000) != 0 )
    {
      if ( g_usedDebugZone )
        goto LABEL_43;
      if ( (s_dbCurrentWorkFlags & 0xFC700FFF) != 0 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6347, ASSERT_TYPE_ASSERT, "(( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_ZONES ) == 0)", (const char *)&queryFormat, "( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_ZONES ) == 0") )
          __debugbreak();
        v2 = s_dbCurrentWorkFlags;
      }
      if ( (v2 & 0x80000) == 0 )
      {
LABEL_43:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 10544, ASSERT_TYPE_ASSERT, "( !DB_UnloadFastFiles_DeferDefaultNames() )", "Not all names will be updated here, only characters; can't refer everything") )
          __debugbreak();
      }
    }
    v3 = 0;
    if ( unloadZones )
    {
      LODWORD(v4) = 0;
      v5 = 62i64;
      do
      {
        v4 = __popcnt(unloadZones->zones.array[0]) + (unsigned int)v4;
        unloadZones = (const DB_ZoneBitArray *)((char *)unloadZones + 4);
        --v5;
      }
      while ( v5 );
    }
    else
    {
      v4 = 0xFFFFFFFFi64;
    }
    Com_Printf(16, "DB_FreeUnusedResources - Customization (%u)\n", v4);
    ProfLoad_Begin("customizationFree");
    v6 = 0;
    v7 = &s_assetManager.transientFlags[2];
    do
    {
      DB_AssetEntryPool::MutableForEachInBlock<FreeTransientCustomizationAssetEntryFunctor>(&s_assetManager.table.m_pool, &s_assetManager.transientFlags[2].headAssets, v7->headAssets.m_flags.m_data[0], v3, &v24);
      v3 += 64;
      ++v6;
      v7 = (TransientGroupFlags *)((char *)v7 + 8);
    }
    while ( v6 < 0x1768 );
  }
  else
  {
    v8 = 0;
    if ( unloadZones )
    {
      LODWORD(v9) = 0;
      v10 = unloadZones;
      v11 = 62i64;
      do
      {
        v9 = __popcnt(v10->zones.array[0]) + (unsigned int)v9;
        v10 = (const DB_ZoneBitArray *)((char *)v10 + 4);
        --v11;
      }
      while ( v11 );
    }
    else
    {
      v9 = 0xFFFFFFFFi64;
    }
    Com_Printf(16, "DB_FreeUnusedResources (%u)\n", v9);
    ProfLoad_Begin("SL_TransferSystem");
    SL_TransferSystem(4u, 8u);
    ProfLoad_End();
    ProfLoad_Begin("clearInternalInUseFunctor");
    p_m_allocatedFlags = &s_assetManager.table.m_pool.m_allocatedFlags;
    v13 = 0;
    for ( i = 0; i < 0x1768; ++i )
    {
      DB_AssetEntryPool::MutableForEachInBlock<ClearInternalInUseFunctor>(&s_assetManager.table.m_pool, &s_assetManager.table.m_pool.m_allocatedFlags, p_m_allocatedFlags->m_flags.m_data[0], v13, (ClearInternalInUseFunctor *)&v24);
      v13 += 64;
      p_m_allocatedFlags = (DB_AssetEntryFlags *)((char *)p_m_allocatedFlags + 8);
    }
    ProfLoad_End();
    ProfLoad_Begin("markAssetFunctor");
    s_assetMarkDatabaseReady = 1;
    v15 = 0;
    p_m_tableEntries = &s_assetManager.table.m_tableEntries;
    for ( j = 0; j < 0x1768; ++j )
    {
      DB_AssetEntryPool::MutableForEachInBlock<MarkAssetFunctor>(&s_assetManager.table.m_pool, &s_assetManager.table.m_tableEntries, p_m_tableEntries->m_flags.m_data[0], v15, (MarkAssetFunctor *)&v24);
      v15 += 64;
      p_m_tableEntries = (DB_AssetEntryFlags *)((char *)p_m_tableEntries + 8);
    }
    ProfLoad_End();
    ProfLoad_Begin("markInProgressZones");
    if ( unloadZones )
      DB_Zones_MarkInProgressZoneStrings(unloadZones);
    ProfLoad_End();
    v18 = DCONST_DVARBOOL_db_comprehensiveSanityChecks;
    if ( !DCONST_DVARBOOL_db_comprehensiveSanityChecks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "db_comprehensiveSanityChecks") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    if ( v18->current.enabled )
    {
      ProfLoad_Begin("freeValidateDefaultAssetFunctor");
      DB_LockPendingZoneRead();
      v19 = 0;
      v20 = 0;
      p_defaultAssets = &s_assetManager.defaultAssets;
      do
      {
        DB_AssetEntryPool::ForEachInBlock<FreeAssetEntryValidateDefaultAssetFunctor>(&s_assetManager.table.m_pool, &s_assetManager.defaultAssets, p_defaultAssets->m_flags.m_data[0], v20, (FreeAssetEntryValidateDefaultAssetFunctor *)&v24);
        v20 += 64;
        ++v19;
        p_defaultAssets = (DB_AssetEntryFlags *)((char *)p_defaultAssets + 8);
      }
      while ( v19 < 0x1768 );
      DB_UnlockPendingZoneRead();
      ProfLoad_End();
    }
    ProfLoad_Begin("freeDefaultFunctor");
    v22 = 0;
    v23 = &s_assetManager.defaultAssets;
    do
    {
      DB_AssetEntryPool::MutableForEachInBlock<FreeDefaultAssetEntryFunctor>(&s_assetManager.table.m_pool, &s_assetManager.defaultAssets, v23->m_flags.m_data[0], v8, (FreeDefaultAssetEntryFunctor *)&v24);
      v8 += 64;
      ++v22;
      v23 = (DB_AssetEntryFlags *)((char *)v23 + 8);
    }
    while ( v22 < 0x1768 );
    ProfLoad_End();
    ProfLoad_Begin("SL_ShutdownSystem Calls");
    SL_ShutdownSystem(8u);
  }
  ProfLoad_End();
}

/*
==============
DB_GetAndVerifyTransientFlagCount
==============
*/
__int64 DB_GetAndVerifyTransientFlagCount(const unsigned int assetIndex)
{
  unsigned int v1; 
  unsigned __int64 v3; 
  DB_AssetEntryFlags *p_keepDefaultAssets; 
  __int64 v5; 
  unsigned __int64 v6; 

  v1 = 0;
  v3 = assetIndex;
  p_keepDefaultAssets = &s_assetManager.transientFlags[0].keepDefaultAssets;
  v5 = 3i64;
  do
  {
    if ( v3 >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
      __debugbreak();
    v6 = 0x8000000000000000ui64 >> (v3 & 0x3F);
    if ( (v6 & p_keepDefaultAssets[-1].m_flags.m_data[v3 >> 6]) != 0 )
    {
      ++v1;
    }
    else
    {
      if ( assetIndex >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
        __debugbreak();
      if ( (v6 & p_keepDefaultAssets->m_flags.m_data[v3 >> 6]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 894, ASSERT_TYPE_ASSERT, "(!s_assetManager.transientFlags[i].keepDefaultAssets.Test( assetIndex ))", (const char *)&queryFormat, "!s_assetManager.transientFlags[i].keepDefaultAssets.Test( assetIndex )") )
        __debugbreak();
    }
    p_keepDefaultAssets += 2;
    --v5;
  }
  while ( v5 );
  if ( v1 > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 897, ASSERT_TYPE_ASSERT, "( count ) <= ( 1 )", "%s <= %s\n\t%u, %u", "count", "1", v1, 1) )
    __debugbreak();
  return v1;
}

/*
==============
DB_GetAssetEntryIndex
==============
*/
__int64 DB_GetAssetEntryIndex(const DB_AssetEntry *assetEntry)
{
  unsigned __int64 v2; 

  if ( (assetEntry < (const DB_AssetEntry *)&s_assetManager || assetEntry >= (const DB_AssetEntry *)&s_assetManager.table.m_pool.m_pool.m_freelist) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 133, ASSERT_TYPE_ASSERT, "( contains_item( item ) )", (const char *)&queryFormat, "contains_item( item )") )
    __debugbreak();
  v2 = truncate_cast<unsigned int,unsigned __int64>(((char *)assetEntry - (char *)&s_assetManager) / 20);
  if ( v2 >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  if ( ((0x8000000000000000ui64 >> (v2 & 0x3F)) & s_assetManager.table.m_pool.m_allocatedFlags.m_flags.m_data[v2 >> 6]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrypool.h", 207, ASSERT_TYPE_ASSERT, "(m_allocatedFlags.Test( assetEntryIndex ))", (const char *)&queryFormat, "m_allocatedFlags.Test( assetEntryIndex )") )
    __debugbreak();
  return (unsigned int)v2;
}

/*
==============
DB_GetAssetEntryPool
==============
*/
AssetManagerGlob *DB_GetAssetEntryPool()
{
  return &s_assetManager;
}

/*
==============
DB_GetAssetEntryUsedFlagsHeadOnly
==============
*/
DB_AssetEntryFlags *DB_GetAssetEntryUsedFlagsHeadOnly()
{
  return &s_assetManager.table.m_headEntries;
}

/*
==============
DB_GetAssetEntryUsedFlagsIncludingStashed
==============
*/
DB_AssetEntryFlags *DB_GetAssetEntryUsedFlagsIncludingStashed()
{
  return &s_assetManager.table.m_tableEntries;
}

/*
==============
DB_GetLogChannel
==============
*/
__int64 DB_GetLogChannel()
{
  const dvar_t *v0; 
  const dvar_t *v1; 
  __int64 result; 

  v0 = DCONST_DVARINT_logfile;
  if ( !DCONST_DVARINT_logfile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "logfile") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( v0->current.integer <= 1 )
    return 10i64;
  v1 = DVARBOOL_db_forcelogprints;
  if ( !DVARBOOL_db_forcelogprints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "db_forcelogprints") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
    return 10i64;
  result = 7i64;
  if ( com_unattendedMode->current.enabled )
    return 10i64;
  return result;
}

/*
==============
DB_GetMaterialIndexByName
==============
*/
unsigned int DB_GetMaterialIndexByName(const char *name)
{
  DB_AssetEntry *Asset; 

  Asset = DB_AssetEntryTable::FindAsset(&s_assetManager.table, name, ASSET_TYPE_MATERIAL);
  if ( Asset )
    LODWORD(Asset) = DB_GetMaterialIndex(Asset->m_header.material);
  return (unsigned int)Asset;
}

/*
==============
DB_GetWorkPeriod
==============
*/
__int64 DB_GetWorkPeriod()
{
  __int64 result; 
  void *retaddr; 

  result = (unsigned int)s_dbWorkPeriod;
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  return result;
}

/*
==============
DB_GetWorkPeriodStateName
==============
*/
char *DB_GetWorkPeriodStateName()
{
  DB_WorkPeriod v1; 
  int v2; 

  if ( s_dbWorkPeriod == (Flushing|ReadyToFlush) )
  {
    Com_sprintf(s_dbWorkPeriodText, 0x80ui64, "%s %s", WORK_PERIOD_STATE_NAMES[s_dbWorkPeriod], s_dbWorkPeriodZone);
    return s_dbWorkPeriodText;
  }
  else
  {
    if ( (unsigned int)s_dbWorkPeriod >= 9 )
    {
      v2 = 9;
      v1 = s_dbWorkPeriod;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 9222, ASSERT_TYPE_ASSERT, "(unsigned)( s_dbWorkPeriod ) < (unsigned)( ( sizeof( *array_counter( WORK_PERIOD_STATE_NAMES ) ) + 0 ) )", "s_dbWorkPeriod doesn't index ARRAY_COUNT( WORK_PERIOD_STATE_NAMES )\n\t%i not in [0, %i)", v1, v2) )
        __debugbreak();
    }
    return (char *)WORK_PERIOD_STATE_NAMES[s_dbWorkPeriod];
  }
}

/*
==============
DB_GetXAssetHeaderZoneSpecific
==============
*/
XAssetHeader DB_GetXAssetHeaderZoneSpecific(XAssetType type, const char *name, int zoneIndex)
{
  __int64 v4; 
  DB_AssetEntry *AssetByZone; 
  XAssetHeader v7; 
  const char *ZoneNameFromIndex; 
  __int64 v10; 

  v4 = type;
  DB_LockHashRead();
  if ( (!Sys_IsMainThread() || !Sys_IsDatabaseReady()) && !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3188, ASSERT_TYPE_ASSERT, "(( Sys_IsMainThread() && Sys_IsDatabaseReady() ) || Sys_IsDatabaseThread())", (const char *)&queryFormat, "( Sys_IsMainThread() && Sys_IsDatabaseReady() ) || Sys_IsDatabaseThread()") )
    __debugbreak();
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3189, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  if ( !zoneIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3190, ASSERT_TYPE_ASSERT, "(zoneIndex != DEFAULT_ZONE_INDEX)", (const char *)&queryFormat, "zoneIndex != DEFAULT_ZONE_INDEX") )
    __debugbreak();
  AssetByZone = DB_AssetEntryTable::FindAssetByZone(&s_assetManager.table, name, (XAssetType)v4, zoneIndex);
  if ( AssetByZone )
  {
    v7.physicsLibrary = (PhysicsLibrary *)AssetByZone->m_header;
  }
  else
  {
    DB_DumpAssetChainForAsset((const XAssetType)v4, name);
    ZoneNameFromIndex = DB_Zones_GetZoneNameFromIndex(zoneIndex);
    if ( (unsigned int)v4 >= 0x71 )
    {
      LODWORD(v10) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v10, 113) )
        __debugbreak();
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3204, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Asset '%s'(%s) not found in zone %s(%d). See above assert for zones it might exist in.", name, g_assetNames[v4], ZoneNameFromIndex, zoneIndex) )
      __debugbreak();
    v7.physicsLibrary = NULL;
  }
  DB_UnlockHashRead();
  return v7;
}

/*
==============
DB_GetXAssetHeaderZoneSpecificNonLocking
==============
*/
XAssetHeader DB_GetXAssetHeaderZoneSpecificNonLocking(XAssetType type, const char *name, int zoneIndex)
{
  __int64 v4; 
  DB_AssetEntry *AssetByZone; 
  const char *ZoneNameFromIndex; 
  __int64 v9; 

  v4 = type;
  if ( (!Sys_IsMainThread() || !Sys_IsDatabaseReady()) && !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3188, ASSERT_TYPE_ASSERT, "(( Sys_IsMainThread() && Sys_IsDatabaseReady() ) || Sys_IsDatabaseThread())", (const char *)&queryFormat, "( Sys_IsMainThread() && Sys_IsDatabaseReady() ) || Sys_IsDatabaseThread()") )
    __debugbreak();
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3189, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  if ( !zoneIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3190, ASSERT_TYPE_ASSERT, "(zoneIndex != DEFAULT_ZONE_INDEX)", (const char *)&queryFormat, "zoneIndex != DEFAULT_ZONE_INDEX") )
    __debugbreak();
  AssetByZone = DB_AssetEntryTable::FindAssetByZone(&s_assetManager.table, name, (XAssetType)v4, zoneIndex);
  if ( AssetByZone )
  {
    return AssetByZone->m_header;
  }
  else
  {
    DB_DumpAssetChainForAsset((const XAssetType)v4, name);
    ZoneNameFromIndex = DB_Zones_GetZoneNameFromIndex(zoneIndex);
    if ( (unsigned int)v4 >= 0x71 )
    {
      LODWORD(v9) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v9, 113) )
        __debugbreak();
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3204, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Asset '%s'(%s) not found in zone %s(%d). See above assert for zones it might exist in.", name, g_assetNames[v4], ZoneNameFromIndex, zoneIndex) )
      __debugbreak();
    return 0i64;
  }
}

/*
==============
DB_GetXAssetMasterDefaultHeader
==============
*/
XAssetHeader DB_GetXAssetMasterDefaultHeader(const XAssetType type)
{
  __int64 v1; 
  int v4; 

  v1 = type;
  if ( (unsigned int)type >= ASSET_TYPE_COUNT )
  {
    v4 = 113;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 2150, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", type, v4) )
      __debugbreak();
  }
  return s_assetManager.masterDefaultAssets[v1];
}

/*
==============
DB_GetXAssetZoneIndex
==============
*/
__int64 DB_GetXAssetZoneIndex(XAssetType type, const char *name)
{
  DB_LockHashRead();
  LODWORD(name) = DB_GetXAssetZoneIndexNonLocking(type, name);
  DB_UnlockHashRead();
  return (unsigned int)name;
}

/*
==============
DB_GetXAssetZoneIndexByHeader
==============
*/
__int64 DB_GetXAssetZoneIndexByHeader(XAssetType type, XAssetHeader header)
{
  DB_AssetEntry *AssetByHeader; 
  unsigned int v5; 

  DB_LockHashRead();
  AssetByHeader = DB_AssetEntryTable::FindAssetByHeader(&s_assetManager.table, header, type);
  if ( AssetByHeader )
  {
    v5 = *((_WORD *)AssetByHeader + 9) & 0x7FF;
    DB_UnlockHashRead();
    return v5;
  }
  else
  {
    DB_UnlockHashRead();
    return 0xFFFFi64;
  }
}

/*
==============
DB_GetXAssetZoneIndexByHeaderNonLocking
==============
*/
__int64 DB_GetXAssetZoneIndexByHeaderNonLocking(XAssetType type, XAssetHeader header)
{
  DB_AssetEntry *AssetByHeader; 

  AssetByHeader = DB_AssetEntryTable::FindAssetByHeader(&s_assetManager.table, header, type);
  if ( AssetByHeader )
    return *((_WORD *)AssetByHeader + 9) & 0x7FF;
  else
    return 0xFFFFi64;
}

/*
==============
DB_GetXAssetZoneIndexNonLocking
==============
*/
DB_AssetEntry *DB_GetXAssetZoneIndexNonLocking(XAssetType type, const char *name)
{
  DB_AssetEntry *result; 
  char destBuffer[256]; 

  DB_FixAssetNameAllowEmpty(destBuffer, 0x100ui64, name);
  if ( !destBuffer[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnamefix.h", 91, ASSERT_TYPE_ASSERT, "( !I_strempty( destBuffer ) )", "DB_FixAssetName final name ends up an empty string. Probable error here.") )
    __debugbreak();
  result = DB_AssetEntryTable::FindAsset(&s_assetManager.table, destBuffer, type);
  if ( result )
    return (DB_AssetEntry *)(*((_WORD *)result + 9) & 0x7FF);
  return result;
}

/*
==============
DB_HasFastfileFinishedLoadingAssets
==============
*/
bool DB_HasFastfileFinishedLoadingAssets(const char *zoneName)
{
  int ZoneIndexFromName; 
  unsigned __int64 v3; 
  unsigned int ZoneFlagsFromIndex; 

  if ( !zoneName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 2814, ASSERT_TYPE_ASSERT, "(zoneName)", (const char *)&queryFormat, "zoneName") )
    __debugbreak();
  ZoneIndexFromName = DB_Zones_GetZoneIndexFromName(zoneName);
  v3 = ZoneIndexFromName;
  if ( ZoneIndexFromName == 0xFFFF )
    return 0;
  if ( (unsigned __int64)ZoneIndexFromName >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  if ( ((0x8000000000000000ui64 >> (v3 & 0x3F)) & s_assetManager.assetsLoadedZones.m_data[v3 >> 6]) == 0 )
    return 0;
  ZoneFlagsFromIndex = DB_Zones_GetZoneFlagsFromIndex(v3);
  return (ZoneFlagsFromIndex & 0x3F00000) == 0 && (ZoneFlagsFromIndex & 0xFF000) == 0;
}

/*
==============
DB_HasHashWriteLock
==============
*/
__int64 DB_HasHashWriteLock()
{
  return *(unsigned __int8 *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 716i64);
}

/*
==============
DB_HasUnloadZoneMatch
==============
*/
bool DB_HasUnloadZoneMatch(const DB_AssetEntry *assetEntry, const DB_ZoneBitArray *unloadZones)
{
  unsigned int v3; 
  bool v4; 
  int v6; 
  int v7; 

  v3 = *((_WORD *)assetEntry + 9) & 0x7FF;
  if ( (*((_WORD *)assetEntry + 9) & 0x7FF) != 0 )
  {
    if ( v3 < 0x7C0 )
      return ((0x80000000 >> (v3 & 0x1F)) & unloadZones->zones.array[(unsigned __int64)v3 >> 5]) != 0;
    v7 = 1984;
    v6 = *((_WORD *)assetEntry + 9) & 0x7FF;
    v4 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v6, v7);
  }
  else
  {
    v4 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 9395, ASSERT_TYPE_ASSERT, "(zoneIndex != DEFAULT_ZONE_INDEX)", (const char *)&queryFormat, "zoneIndex != DEFAULT_ZONE_INDEX");
  }
  if ( v4 )
    __debugbreak();
  return ((0x80000000 >> (v3 & 0x1F)) & unloadZones->zones.array[(unsigned __int64)v3 >> 5]) != 0;
}

/*
==============
DB_InitThread
==============
*/
void DB_InitThread(void)
{
  unsigned int v0; 
  __int64 v1; 
  char v2; 
  const char *v3; 
  char v4; 

  InitializeSRWLock((PSRWLOCK)&s_dbHashRWLock);
  v0 = 0;
  s_dbHashRWLock.initialized = -1412623820;
  s_dbHashRWLock.acquireLock = 0;
  s_dbHashRWLock.writeThreadId = 0;
  DB_InitXAssetPools();
  DB_AssetEntryTable::Init(&s_assetManager.table);
  InitializeSRWLock((PSRWLOCK)&s_assetManager.pendingZoneLock);
  s_assetManager.pendingZoneLock.initialized = -1412623820;
  s_assetManager.pendingZoneLock.acquireLock = 0;
  s_assetManager.pendingZoneLock.writeThreadId = 0;
  DB_TransientWorld_Init();
  DB_MemoryInit();
  DB_RegisterDvars();
  DB_PatchMem_Init();
  DB_ModelFixup_Init();
  v1 = 0x1000000000001001i64;
  do
  {
    v2 = *g_defaultAssetName[v0];
    if ( v2 )
    {
      v3 = g_defaultAssetName[v0];
      if ( v2 > 32 )
      {
        while ( 1 )
        {
          v4 = v2;
          if ( (unsigned __int8)(v2 - 65) <= 0x19u || (unsigned __int8)(v2 - 32) <= 0x3Cu && _bittest64(&v1, (char)(v2 - 32)) )
            break;
          if ( v2 == 124 )
            break;
          v2 = *++v3;
          if ( !v2 )
          {
            if ( v4 > 32 )
              goto LABEL_12;
            break;
          }
        }
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 1783, ASSERT_TYPE_ASSERT, "(DB_IsAssetNameValid( defaultName ))", "%s\n\tInvalid default asset name '%s'. Needs to be all lowercase and use forwardslashes.", "DB_IsAssetNameValid( defaultName )", g_defaultAssetName[v0]) )
        __debugbreak();
    }
LABEL_12:
    ++v0;
  }
  while ( v0 < 0x71 );
  DB_InitHashLookupMem();
  DB_GpuTempMemCallbacks_Init();
  if ( s_dbIsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 1800, ASSERT_TYPE_ASSERT, "(!s_dbIsInitialized)", (const char *)&queryFormat, "!s_dbIsInitialized") )
    __debugbreak();
  s_dbIsInitialized = 1;
  SI_Init();
  DB_Zones_Init();
  Cmd_AddCommandInternal("loadzone", DB_LoadZone_f, &DB_LoadZone_f_VAR);
  Cmd_AddCommandInternal("db_pool_info", DB_DumpPoolInfo_f, &DB_DumpPoolInfo_f_VAR);
  Cmd_AddCommandInternal("db_asset_dump", DB_AssetDump_f, &DB_AssetDump_f_VAR);
  Cmd_AddCommandInternal("db_material_dump", DB_MaterialDump_f, &DB_MaterialDump_f_VAR);
  Cmd_AddCommandInternal("db_setmaxusablexmodellods", DB_SetMaxUsableXModelLods_f, &DB_SetMaxUsableXModelLods_f_VAR);
  Cmd_AddCommandInternal("db_loadmptransient", DB_LoadMPTransient_f, &DB_LoadMPTransient_f_VAR);
  Cmd_AddCommandInternal("db_unloadmptransient", DB_UnloadMPTransient_f, &DB_UnloadMPTransient_f_VAR);
  if ( !Sys_SpawnDatabaseThread(DB_Thread) )
    Sys_Error((const ObfuscateErrorText)&stru_143F932C8);
}

/*
==============
DB_InsertNewStashedAssetEntry
==============
*/
void DB_InsertNewStashedAssetEntry(DB_AssetEntry *newEntry, DB_AssetEntry *existingEntry)
{
  const char *XAssetHeaderName; 
  const char *v5; 
  __int16 v6; 
  int v7; 
  unsigned int ZoneFlagsFromIndex; 
  unsigned int v9; 
  bool v10; 
  int v11; 
  int v12; 
  const char *v13; 

  if ( !existingEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 4858, ASSERT_TYPE_ASSERT, "(existingEntry)", (const char *)&queryFormat, "existingEntry") )
    __debugbreak();
  if ( !newEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 4859, ASSERT_TYPE_ASSERT, "(newEntry)", (const char *)&queryFormat, "newEntry") )
    __debugbreak();
  if ( existingEntry == newEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 4860, ASSERT_TYPE_ASSERT, "(existingEntry != newEntry)", (const char *)&queryFormat, "existingEntry != newEntry") )
    __debugbreak();
  if ( existingEntry->m_type != newEntry->m_type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 4861, ASSERT_TYPE_ASSERT, "(existingEntry->GetType() == newEntry->GetType())", (const char *)&queryFormat, "existingEntry->GetType() == newEntry->GetType()") )
    __debugbreak();
  XAssetHeaderName = DB_GetXAssetHeaderName(newEntry->m_type, newEntry->m_header);
  v5 = DB_GetXAssetHeaderName(existingEntry->m_type, existingEntry->m_header);
  if ( I_strncmp(v5, XAssetHeaderName, 0x7FFFFFFFui64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 4862, ASSERT_TYPE_ASSERT, "(I_strcmp( existingEntry->GetName(), newEntry->GetName() ) == 0)", (const char *)&queryFormat, "I_strcmp( existingEntry->GetName(), newEntry->GetName() ) == 0") )
    __debugbreak();
  if ( (*((_WORD *)newEntry + 9) & 0x7FF) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 4863, ASSERT_TYPE_ASSERT, "(newEntry->GetZoneIndex() != DEFAULT_ZONE_INDEX)", (const char *)&queryFormat, "newEntry->GetZoneIndex() != DEFAULT_ZONE_INDEX") )
    __debugbreak();
  DB_CheckLockWrite();
  v6 = *((_WORD *)existingEntry + 9);
  if ( (v6 & 0x7FF) != 0 )
  {
    v7 = *((_WORD *)newEntry + 9) & 0x7FF;
    ZoneFlagsFromIndex = DB_Zones_GetZoneFlagsFromIndex(v6 & 0x7FF);
    if ( (ZoneFlagsFromIndex & 0x3CFF000) == 0 )
    {
      v9 = DB_Zones_GetZoneFlagsFromIndex(v7);
      if ( ZoneFlagsFromIndex == v9 )
        goto LABEL_37;
      if ( (v9 & 0x100000) != 0 )
      {
        if ( DB_Zones_IsFrontendUIPreloadZoneIndex(v7) )
          goto LABEL_32;
        v10 = (ZoneFlagsFromIndex & 0x3F) == 0;
      }
      else if ( (v9 & 0x200100) != 0 )
      {
        v10 = (ZoneFlagsFromIndex & 0x3F) == 0;
      }
      else
      {
        if ( (v9 & 0x3F) == 0 )
          goto LABEL_32;
        v10 = (ZoneFlagsFromIndex & 1) == 0;
      }
      if ( !v10 )
      {
LABEL_37:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 4869, ASSERT_TYPE_ASSERT, "(!DB_ZoneIndexUnloadsTogether( existingEntry->GetZoneIndex(), newEntry->GetZoneIndex() ))", (const char *)&queryFormat, "!DB_ZoneIndexUnloadsTogether( existingEntry->GetZoneIndex(), newEntry->GetZoneIndex() )") )
          __debugbreak();
      }
    }
  }
LABEL_32:
  if ( s_dbReplaceAssets )
  {
    DB_AssetEntryTable::AddToStashHead(&s_assetManager.table, newEntry, existingEntry);
  }
  else
  {
    v11 = *((_WORD *)newEntry + 9) & 0x7FF;
    v12 = *((_WORD *)existingEntry + 9) & 0x7FF;
    v13 = DB_GetXAssetHeaderName(existingEntry->m_type, existingEntry->m_header);
    DB_AddDuplicateAssetWarning((const XAssetType)existingEntry->m_type, v13, v12, v11, 0);
    DB_AssetEntryTable::AddToStashTail(&s_assetManager.table, newEntry, existingEntry);
  }
}

/*
==============
DB_IsAlloc
==============
*/

bool __fastcall DB_IsAlloc()
{
  return Sys_IsDatabaseThread();
}

/*
==============
DB_IsAssetSafeToReturn
==============
*/
char DB_IsAssetSafeToReturn(const DB_AssetEntry *assetEntry, const bool warnDeferredAsset)
{
  unsigned __int64 v3; 
  unsigned __int64 v5; 
  const char *ZoneNameFromIndex; 
  const char *TypeName; 
  const char *XAssetHeaderName; 

  v3 = *((_WORD *)assetEntry + 9) & 0x7FF;
  DB_LockPendingZoneRead();
  if ( v3 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  v5 = s_assetManager.deferredZones.m_data[v3 >> 6];
  DB_UnlockPendingZoneRead();
  if ( ((0x8000000000000000ui64 >> (v3 & 0x3F)) & v5) == 0 )
    return 1;
  if ( warnDeferredAsset )
  {
    ZoneNameFromIndex = DB_Zones_GetZoneNameFromIndex(v3);
    TypeName = DB_AssetEntry::GetTypeName((DB_AssetEntry *)assetEntry);
    XAssetHeaderName = DB_GetXAssetHeaderName(assetEntry->m_type, assetEntry->m_header);
    Com_Printf(10, "WARNING: Query for asset '%s' of type '%s', of deferred-loaded zone '%s'. Cannot return asset yet.\n", XAssetHeaderName, TypeName, ZoneNameFromIndex);
  }
  return 0;
}

/*
==============
DB_IsCurrentFastfileLoadCancelled
==============
*/
_BOOL8 DB_IsCurrentFastfileLoadCancelled()
{
  return s_assetManager.pendingZoneCancelled;
}

/*
==============
DB_IsCurrentFastfileLoadPaused
==============
*/
_BOOL8 DB_IsCurrentFastfileLoadPaused()
{
  return s_assetManager.pendingZonePaused;
}

/*
==============
DB_IsDebugZoneActive
==============
*/
bool DB_IsDebugZoneActive()
{
  return g_debugZoneName[0] != 0;
}

/*
==============
DB_IsDoingSPHotLoad
==============
*/
_BOOL8 DB_IsDoingSPHotLoad()
{
  return s_loadingSPHotLoad;
}

/*
==============
DB_IsDoingSPHotLoadBinkTransition
==============
*/
_BOOL8 DB_IsDoingSPHotLoadBinkTransition()
{
  return s_binkTransitionSPHotLoad;
}

/*
==============
DB_IsDoingStreamMPOnlyWork
==============
*/
char DB_IsDoingStreamMPOnlyWork()
{
  unsigned int v0; 

  v0 = s_dbCurrentWorkFlags;
  if ( (s_dbCurrentWorkFlags & 0xFC700FFF) != 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6373, ASSERT_TYPE_ASSERT, "(( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_ZONES ) == 0)", (const char *)&queryFormat, "( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_ZONES ) == 0") )
      __debugbreak();
    v0 = s_dbCurrentWorkFlags;
  }
  if ( (v0 & 0x38FA000) == 0 )
    return 0;
  if ( (v0 & 0xFC705FFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6377, ASSERT_TYPE_ASSERT, "(( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_MP_ZONES ) == 0)", (const char *)&queryFormat, "( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_MP_ZONES ) == 0") )
    __debugbreak();
  return 1;
}

/*
==============
DB_IsDoingStreamOnlyWork
==============
*/
bool DB_IsDoingStreamOnlyWork()
{
  if ( (s_dbCurrentWorkFlags & 0xFC700FFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6319, ASSERT_TYPE_ASSERT, "(( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_ZONES ) == 0)", (const char *)&queryFormat, "( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_ZONES ) == 0") )
    __debugbreak();
  return s_dbCurrentWorkFlags != 0;
}

/*
==============
DB_IsDoingTransientMPXModelOnlyWork
==============
*/
bool DB_IsDoingTransientMPXModelOnlyWork()
{
  unsigned int v0; 

  v0 = s_dbCurrentWorkFlags;
  if ( (s_dbCurrentWorkFlags & 0xFC700FFF) != 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6386, ASSERT_TYPE_ASSERT, "(( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_ZONES ) == 0)", (const char *)&queryFormat, "( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_ZONES ) == 0") )
      __debugbreak();
    v0 = s_dbCurrentWorkFlags;
  }
  return (v0 & 0x82000) != 0 && (v0 & 0xFFF7DFFF) == 0;
}

/*
==============
DB_IsDoingTransientOnlyWork
==============
*/
bool DB_IsDoingTransientOnlyWork()
{
  unsigned int v0; 

  v0 = s_dbCurrentWorkFlags;
  if ( (s_dbCurrentWorkFlags & 0xFC700FFF) != 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6336, ASSERT_TYPE_ASSERT, "(( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_ZONES ) == 0)", (const char *)&queryFormat, "( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_ZONES ) == 0") )
      __debugbreak();
    v0 = s_dbCurrentWorkFlags;
  }
  return (v0 & 0xFF000) != 0 && (v0 & 0xFFF00FFF) == 0;
}

/*
==============
DB_IsDoingTransientSPOnlyWorkWithServerSync
==============
*/
char DB_IsDoingTransientSPOnlyWorkWithServerSync()
{
  unsigned int v0; 

  v0 = s_dbCurrentWorkFlags;
  if ( (s_dbCurrentWorkFlags & 0xFC700FFF) != 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6361, ASSERT_TYPE_ASSERT, "(( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_ZONES ) == 0)", (const char *)&queryFormat, "( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_ZONES ) == 0") )
      __debugbreak();
    v0 = s_dbCurrentWorkFlags;
  }
  if ( (v0 & 0x5000) == 0 )
    return 0;
  if ( (v0 & 0xFFFFAFFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6364, ASSERT_TYPE_ASSERT, "(( s_dbCurrentWorkFlags & ~DB_MASK_TRANSIENT_SP_ZONES ) == 0)", (const char *)&queryFormat, "( s_dbCurrentWorkFlags & ~DB_MASK_TRANSIENT_SP_ZONES ) == 0") )
    __debugbreak();
  return 1;
}

/*
==============
DB_IsDoingTransientWorldWork
==============
*/
bool DB_IsDoingTransientWorldWork()
{
  if ( (s_dbCurrentWorkFlags & 0xFC700FFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6354, ASSERT_TYPE_ASSERT, "(( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_ZONES ) == 0)", (const char *)&queryFormat, "( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_ZONES ) == 0") )
    __debugbreak();
  return (s_dbCurrentWorkFlags & 0xC000) != 0;
}

/*
==============
DB_IsFastfileFullyLoaded
==============
*/
_BOOL8 DB_IsFastfileFullyLoaded(const char *zoneName, int zoneIndex)
{
  unsigned __int64 v2; 
  __int64 v4; 
  const char *v5; 
  __int64 v6; 
  __int64 v7; 
  const char *v8; 
  int v9; 
  const char *v10; 
  bool v11; 
  unsigned __int64 v12; 
  unsigned __int64 v13; 

  v2 = zoneIndex;
  if ( !zoneName )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 8234, ASSERT_TYPE_ASSERT, "(zoneName)", (const char *)&queryFormat, "zoneName") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnamefix.h", 100, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
  }
  LOBYTE(v4) = *zoneName;
  v5 = zoneName;
  if ( *zoneName >= 33 )
  {
    v6 = 0x1000000000001001i64;
    while ( 1 )
    {
      v7 = (unsigned __int8)v4;
      if ( (unsigned __int8)(v4 - 65) <= 0x19u || (unsigned __int8)(v4 - 32) <= 0x3Cu && _bittest64(&v6, (char)(v4 - 32)) )
        break;
      if ( (_BYTE)v4 == 124 )
        break;
      v4 = *(unsigned __int8 *)++v5;
      if ( !(_BYTE)v4 )
      {
        if ( (char)v7 > 32 )
          goto LABEL_16;
        break;
      }
    }
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 8235, ASSERT_TYPE_ASSERT, "( ( DB_IsAssetNameValid( zoneName ) ) )", "( zoneName ) = %s", zoneName) )
    __debugbreak();
LABEL_16:
  if ( (_DWORD)v2 )
  {
    if ( (_DWORD)v2 != 0xFFFF )
      goto LABEL_22;
    v8 = "zoneIndex != INVALID_ZONE_INDEX";
    v9 = 8238;
    v10 = "(zoneIndex != INVALID_ZONE_INDEX)";
  }
  else
  {
    v8 = "zoneIndex != DEFAULT_ZONE_INDEX";
    v9 = 8237;
    v10 = "(zoneIndex != DEFAULT_ZONE_INDEX)";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", v9, ASSERT_TYPE_ASSERT, v10, (const char *)&queryFormat, v8) )
    __debugbreak();
LABEL_22:
  v11 = 0;
  DB_LockPendingZoneRead(v4, v5, v7, v6);
  if ( !DB_PendingZones_IsZonePending(zoneName, 1) && !DB_PendingZones_IsZonePendingPaused(zoneName, 1) )
  {
    if ( v2 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
      __debugbreak();
    v12 = v2 >> 6;
    v13 = 0x8000000000000000ui64 >> (v2 & 0x3F);
    if ( (v13 & s_assetManager.fullyLoadedZones.m_data[v2 >> 6]) != 0 )
    {
      if ( (unsigned int)v2 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
        __debugbreak();
      if ( (v13 & s_assetManager.pausedZones.m_data[v12]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 8258, ASSERT_TYPE_ASSERT, "(!s_assetManager.pausedZones.test( zoneIndex ))", (const char *)&queryFormat, "!s_assetManager.pausedZones.test( zoneIndex )") )
        __debugbreak();
      v11 = 1;
    }
    else
    {
      if ( (unsigned int)v2 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
        __debugbreak();
      v11 = (v13 & s_assetManager.cancelledZones.m_data[v12]) != 0;
    }
  }
  DB_UnlockPendingZoneRead();
  return v11;
}

/*
==============
DB_IsForcedStubbedKeepDefaultEntry
==============
*/
bool DB_IsForcedStubbedKeepDefaultEntry(const DB_AssetEntry *assetEntry)
{
  unsigned __int64 AssetEntryIndex; 

  AssetEntryIndex = DB_GetAssetEntryIndex(assetEntry);
  if ( AssetEntryIndex >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  return ((0x8000000000000000ui64 >> (AssetEntryIndex & 0x3F)) & s_assetManager.forcedStubbedKeepDefaultAssets.m_flags.m_data[AssetEntryIndex >> 6]) != 0;
}

/*
==============
DB_IsLiveHeadAsset
==============
*/
_BOOL8 DB_IsLiveHeadAsset(XAssetType type, XAssetHeader header)
{
  const char *XAssetHeaderName; 
  DB_AssetEntry *Asset; 
  bool v6; 

  DB_LockHashRead();
  XAssetHeaderName = DB_GetXAssetHeaderName(type, header);
  Asset = DB_AssetEntryTable::FindAsset(&s_assetManager.table, XAssetHeaderName, type);
  if ( Asset )
  {
    v6 = Asset->m_header.physicsLibrary == header.physicsLibrary;
    DB_UnlockHashRead();
    return v6;
  }
  else
  {
    DB_UnlockHashRead();
    return 0i64;
  }
}

/*
==============
DB_IsLiveHeadAssetNonLocking
==============
*/
bool DB_IsLiveHeadAssetNonLocking(XAssetType type, XAssetHeader header)
{
  const char *XAssetHeaderName; 
  DB_AssetEntry *Asset; 

  XAssetHeaderName = DB_GetXAssetHeaderName(type, header);
  Asset = DB_AssetEntryTable::FindAsset(&s_assetManager.table, XAssetHeaderName, type);
  if ( Asset )
    LOBYTE(Asset) = Asset->m_header.physicsLibrary == header.physicsLibrary;
  return (char)Asset;
}

/*
==============
DB_IsLoadingDebugZone
==============
*/
_BOOL8 DB_IsLoadingDebugZone()
{
  return g_loadingDebugZone;
}

/*
==============
DB_IsPermanentAsset
==============
*/
__int64 DB_IsPermanentAsset(XAssetType type, const char *name)
{
  int XAssetZoneIndexNonLocking; 

  DB_LockHashRead();
  XAssetZoneIndexNonLocking = DB_GetXAssetZoneIndexNonLocking(type, name);
  LOBYTE(name) = DB_Zones_IsPermanentZoneIndex(XAssetZoneIndexNonLocking);
  DB_UnlockHashRead();
  return (unsigned __int8)name;
}

/*
==============
DB_IsPermanentAssetNonLocking
==============
*/
bool DB_IsPermanentAssetNonLocking(XAssetType type, const char *name)
{
  int XAssetZoneIndexNonLocking; 

  XAssetZoneIndexNonLocking = DB_GetXAssetZoneIndexNonLocking(type, name);
  return DB_Zones_IsPermanentZoneIndex(XAssetZoneIndexNonLocking);
}

/*
==============
DB_IsPreloadKeepDefaultEntry
==============
*/
char DB_IsPreloadKeepDefaultEntry(const DB_AssetEntry *assetEntry)
{
  unsigned __int64 AssetEntryIndex; 
  unsigned __int64 v2; 
  unsigned __int64 v3; 

  AssetEntryIndex = DB_GetAssetEntryIndex(assetEntry);
  if ( AssetEntryIndex >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  v2 = 0x8000000000000000ui64 >> (AssetEntryIndex & 0x3F);
  v3 = AssetEntryIndex >> 6;
  if ( (v2 & s_assetManager.preloadKeepDefaultAssets.m_flags.m_data[v3]) == 0 )
    return 0;
  if ( AssetEntryIndex >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  if ( (v2 & s_assetManager.table.m_headEntries.m_flags.m_data[v3]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 730, ASSERT_TYPE_ASSERT, "(s_assetManager.table.GetUsedFlagsHeadOnly().Test( assetIndex ))", (const char *)&queryFormat, "s_assetManager.table.GetUsedFlagsHeadOnly().Test( assetIndex )") )
    __debugbreak();
  return 1;
}

/*
==============
DB_IsReadyForPostLoad
==============
*/
bool DB_IsReadyForPostLoad()
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 2747, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  return s_dbLoadingFastfiles && Sys_IsDatabaseReady();
}

/*
==============
DB_IsSyncLoading
==============
*/
_BOOL8 DB_IsSyncLoading()
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 2755, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  return s_dbIsSyncLoading;
}

/*
==============
DB_IsTransientAssetExternalCheck
==============
*/
bool DB_IsTransientAssetExternalCheck(const DB_AssetEntry *assetEntry)
{
  unsigned __int64 AssetEntryIndex; 

  if ( !DB_IsTransientAssetHeadEntry(assetEntry) )
    return 0;
  AssetEntryIndex = DB_GetAssetEntryIndex(assetEntry);
  if ( AssetEntryIndex >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  return ((0x8000000000000000ui64 >> (AssetEntryIndex & 0x3F)) & s_assetManager.transientOverrides.m_flags.m_data[AssetEntryIndex >> 6]) == 0;
}

/*
==============
DB_IsTransientAssetHeadEntry
==============
*/
char DB_IsTransientAssetHeadEntry(const DB_AssetEntry *assetEntry)
{
  int v1; 
  unsigned __int64 AssetEntryIndex; 
  TransientGroupFlags *i; 

  v1 = 0;
  AssetEntryIndex = DB_GetAssetEntryIndex(assetEntry);
  for ( i = s_assetManager.transientFlags; ; ++i )
  {
    if ( AssetEntryIndex >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
      __debugbreak();
    if ( ((0x8000000000000000ui64 >> (AssetEntryIndex & 0x3F)) & i->headAssets.m_flags.m_data[AssetEntryIndex >> 6]) != 0 )
      break;
    if ( (unsigned int)++v1 >= 3 )
      return 0;
  }
  return 1;
}

/*
==============
DB_IsTransientAssetKeepDefaultEntry
==============
*/
char DB_IsTransientAssetKeepDefaultEntry(const DB_AssetEntry *assetEntry)
{
  int v1; 
  unsigned __int64 AssetEntryIndex; 
  DB_AssetEntryFlags *i; 

  v1 = 0;
  AssetEntryIndex = DB_GetAssetEntryIndex(assetEntry);
  for ( i = &s_assetManager.transientFlags[0].keepDefaultAssets; ; i += 2 )
  {
    if ( AssetEntryIndex >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
      __debugbreak();
    if ( ((0x8000000000000000ui64 >> (AssetEntryIndex & 0x3F)) & i->m_flags.m_data[AssetEntryIndex >> 6]) != 0 )
      break;
    if ( (unsigned int)++v1 >= 3 )
      return 0;
  }
  return 1;
}

/*
==============
DB_IsTransientSPGameWaitingForPostLoad
==============
*/
_BOOL8 DB_IsTransientSPGameWaitingForPostLoad()
{
  return s_spTransientGameWaitingForPostLoad;
}

/*
==============
DB_IsXAssetDefault
==============
*/
_BOOL8 DB_IsXAssetDefault(XAssetType type, const char *name)
{
  __int64 v3; 
  DB_AssetEntry *Asset; 
  BOOL v5; 
  char destBuffer[256]; 

  v3 = type;
  DB_LockHashRead();
  DB_FixAssetNameAllowEmpty(destBuffer, 0x100ui64, name);
  if ( !destBuffer[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnamefix.h", 91, ASSERT_TYPE_ASSERT, "( !I_strempty( destBuffer ) )", "DB_FixAssetName final name ends up an empty string. Probable error here.") )
    __debugbreak();
  Asset = DB_AssetEntryTable::FindAsset(&s_assetManager.table, destBuffer, (XAssetType)v3);
  if ( Asset )
  {
    v5 = (*((_WORD *)Asset + 9) & 0x7FF) == 0;
  }
  else
  {
    if ( (unsigned int)v3 >= 0x71 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v3, 113) )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 2880, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Should be unreachable %s(%s) - call DB_FindXAssetHeader first", name, g_assetNames[v3]) )
      __debugbreak();
    v5 = 1;
  }
  DB_UnlockHashRead();
  return v5;
}

/*
==============
DB_IsXAssetDefaultNonLocking
==============
*/
_BOOL8 DB_IsXAssetDefaultNonLocking(XAssetType type, const char *name)
{
  __int64 v3; 
  DB_AssetEntry *Asset; 
  char destBuffer[256]; 

  v3 = type;
  DB_FixAssetNameAllowEmpty(destBuffer, 0x100ui64, name);
  if ( !destBuffer[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnamefix.h", 91, ASSERT_TYPE_ASSERT, "( !I_strempty( destBuffer ) )", "DB_FixAssetName final name ends up an empty string. Probable error here.") )
    __debugbreak();
  Asset = DB_AssetEntryTable::FindAsset(&s_assetManager.table, destBuffer, (XAssetType)v3);
  if ( Asset )
    return (*((_WORD *)Asset + 9) & 0x7FF) == 0;
  if ( (unsigned int)v3 >= 0x71 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v3, 113) )
    __debugbreak();
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 2880, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Should be unreachable %s(%s) - call DB_FindXAssetHeader first", name, g_assetNames[v3]) )
    __debugbreak();
  return 1i64;
}

/*
==============
DB_IsXAssetTransient
==============
*/
_BOOL8 DB_IsXAssetTransient(XAssetType type, const char *name)
{
  const DB_AssetEntry *Asset; 
  bool v5; 

  DB_LockHashRead();
  Asset = DB_AssetEntryTable::FindAsset(&s_assetManager.table, name, type);
  if ( Asset )
  {
    v5 = DB_IsTransientAssetExternalCheck(Asset);
    DB_UnlockHashRead();
    return v5;
  }
  else
  {
    DB_UnlockHashRead();
    return 0i64;
  }
}

/*
==============
DB_IsXAssetTransientNonLocking
==============
*/
bool DB_IsXAssetTransientNonLocking(XAssetType type, const char *name)
{
  const DB_AssetEntry *Asset; 

  Asset = DB_AssetEntryTable::FindAsset(&s_assetManager.table, name, type);
  if ( Asset )
    LOBYTE(Asset) = DB_IsTransientAssetExternalCheck(Asset);
  return (char)Asset;
}

/*
==============
DB_IsXAssetTransientOverridden
==============
*/
_BOOL8 DB_IsXAssetTransientOverridden(const XAssetType type, const char *name)
{
  __int64 v3; 
  const DB_AssetEntry *Asset; 
  unsigned __int64 AssetEntryIndex; 
  bool v6; 

  v3 = type;
  DB_ValidateRegistryState();
  DB_LockHashRead();
  Asset = DB_AssetEntryTable::FindAsset(&s_assetManager.table, name, (XAssetType)v3);
  if ( Asset )
  {
    AssetEntryIndex = DB_GetAssetEntryIndex(Asset);
    if ( AssetEntryIndex >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
      __debugbreak();
    v6 = ((0x8000000000000000ui64 >> (AssetEntryIndex & 0x3F)) & s_assetManager.transientOverrides.m_flags.m_data[AssetEntryIndex >> 6]) != 0;
  }
  else
  {
    if ( (unsigned int)v3 >= 0x71 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v3, 113) )
      __debugbreak();
    Com_Printf(0, "Asset '%s'(%s) does not exist in the DB.\n", name, g_assetNames[v3]);
    v6 = 0;
  }
  DB_UnlockHashRead();
  return v6;
}

/*
==============
DB_IsXAssetTransientZone
==============
*/
_BOOL8 DB_IsXAssetTransientZone(XAssetType type, const char *name)
{
  DB_AssetEntry *Asset; 
  bool IsTransientZoneIndex; 
  char destBuffer[256]; 

  DB_LockHashRead();
  DB_FixAssetNameAllowEmpty(destBuffer, 0x100ui64, name);
  if ( !destBuffer[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnamefix.h", 91, ASSERT_TYPE_ASSERT, "( !I_strempty( destBuffer ) )", "DB_FixAssetName final name ends up an empty string. Probable error here.") )
    __debugbreak();
  Asset = DB_AssetEntryTable::FindAsset(&s_assetManager.table, destBuffer, type);
  if ( Asset )
    IsTransientZoneIndex = DB_Zones_IsTransientZoneIndex(*((_WORD *)Asset + 9) & 0x7FF);
  else
    IsTransientZoneIndex = 0;
  DB_UnlockHashRead();
  return IsTransientZoneIndex;
}

/*
==============
DB_LinkShouldIgnoreAsset
==============
*/
DB_AssetEntry *DB_LinkShouldIgnoreAsset(DB_AssetEntry *existingAsset, const int currentZoneIndex)
{
  DB_AssetEntry *AssetWhichUnloadsTogether; 
  bool v5; 
  unsigned __int8 m_type; 
  const char *TypeName; 
  const char *XAssetHeaderName; 
  const char *ZoneNameFromIndex; 
  const char *v11; 
  __int64 v12; 
  const char *v13; 
  const char *v14; 
  const char *v15; 
  __int64 v16; 
  __int64 v17; 

  if ( !existingAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 4363, ASSERT_TYPE_ASSERT, "(existingAsset)", (const char *)&queryFormat, "existingAsset") )
    __debugbreak();
  AssetWhichUnloadsTogether = DB_FindAssetWhichUnloadsTogether(existingAsset, currentZoneIndex);
  if ( AssetWhichUnloadsTogether )
  {
    if ( (*((_WORD *)AssetWhichUnloadsTogether + 9) & 0x7FF) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 4368, ASSERT_TYPE_ASSERT, "(matchedAssetEntry->GetZoneIndex() != DEFAULT_ZONE_INDEX)", (const char *)&queryFormat, "matchedAssetEntry->GetZoneIndex() != DEFAULT_ZONE_INDEX") )
      __debugbreak();
    if ( !g_loadingDebugZone )
      return existingAsset;
    v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 4372, ASSERT_TYPE_ASSERT, "(!g_loadingDebugZone)", (const char *)&queryFormat, "!g_loadingDebugZone");
LABEL_20:
    if ( v5 )
      __debugbreak();
    return existingAsset;
  }
  m_type = existingAsset->m_type;
  if ( m_type >= 0x71u )
  {
    LODWORD(v16) = m_type;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 4378, ASSERT_TYPE_ASSERT, "(unsigned)( existingAsset->GetType() ) < (unsigned)( ( sizeof( *array_counter( s_assetManager.masterDefaultAssets ) ) + 0 ) )", "existingAsset->GetType() doesn't index ARRAY_COUNT( s_assetManager.masterDefaultAssets )\n\t%i not in [0, %i)", v16, 113) )
      __debugbreak();
  }
  if ( s_assetManager.masterDefaultAssets[existingAsset->m_type].physicsLibrary == existingAsset->m_header.physicsLibrary )
  {
    if ( g_loadingDebugZone )
    {
      TypeName = DB_AssetEntry::GetTypeName(existingAsset);
      XAssetHeaderName = DB_GetXAssetHeaderName(existingAsset->m_type, existingAsset->m_header);
      Com_Printf(16, "Cannot replace the master default asset %s(%s) when using mychanges\n", XAssetHeaderName, TypeName);
      return existingAsset;
    }
    ZoneNameFromIndex = DB_Zones_GetZoneNameFromIndex(currentZoneIndex);
    v11 = DB_Zones_GetZoneNameFromIndex(*((_WORD *)existingAsset + 9) & 0x7FF);
    v12 = existingAsset->m_type;
    v13 = v11;
    if ( (unsigned int)v12 >= 0x71 )
    {
      LODWORD(v17) = 113;
      LODWORD(v16) = existingAsset->m_type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v16, v17) )
        __debugbreak();
    }
    v14 = g_assetNames[v12];
    v15 = DB_GetXAssetHeaderName(existingAsset->m_type, existingAsset->m_header);
    v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 4398, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Can't replace master default asset %s(%s) in %s with the new asset from %s", v15, v14, v13, ZoneNameFromIndex);
    goto LABEL_20;
  }
  return 0i64;
}

/*
==============
DB_LinkXAssetEntry
==============
*/
DB_AssetEntry *DB_LinkXAssetEntry(XAssetType type, XAssetHeader *header)
{
  XAssetHeader *v2; 
  __int64 v3; 
  const char *XAssetHeaderName; 
  const char *CurrentZoneLoadName; 
  char v6; 
  char v7; 
  const char *v8; 
  __int64 v9; 
  char v10; 
  __int64 v11; 
  DB_AssetEntry *result; 
  DB_AssetEntry *v13; 
  DB_AssetEntry *DefaultEntry; 
  const char *XAssetTypeName; 
  const char *v16; 
  const char *v17; 
  const char *v18; 
  const char *v19; 
  int v20; 
  const char *ZoneNameFromIndex; 
  unsigned __int16 CurrentZoneLoadIndex; 
  unsigned int v23; 
  DB_AssetEntry *v24; 
  DB_AssetEntry *v25; 
  int v26; 
  bool v27; 
  __int64 v28; 
  const char *v29; 
  int v30; 
  const char *v31; 
  signed __int64 v32; 
  char v33; 
  __int64 v34; 
  char v35; 
  XModelSurfs *physicsLibrary; 
  DB_AssetEntry *v37; 
  unsigned int XAssetTypeSize; 
  unsigned int v39; 
  const char *v40; 
  const char *v41; 
  bool v42; 
  const char *v43; 
  const char *v44; 
  const char *v45; 
  const char *v46; 
  const char *v47; 
  int m_type; 
  const char *v49; 
  __int64 v50; 
  const char *v51; 
  const char *v52; 
  __int64 v53; 
  __int64 v54; 
  XAsset asset; 
  unsigned int ZoneFlagsFromIndex; 
  unsigned __int16 v58; 

  v2 = header;
  v3 = type;
  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 4645, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 4646, ASSERT_TYPE_ASSERT, "(header)", (const char *)&queryFormat, "header") )
    __debugbreak();
  DB_CheckLockWrite();
  XAssetHeaderName = DB_GetXAssetHeaderName(v3, (const XAssetHeader)v2->physicsLibrary);
  if ( !XAssetHeaderName )
  {
    CurrentZoneLoadName = DB_Zones_GetCurrentZoneLoadName();
    if ( (unsigned int)v3 >= 0x71 )
    {
      LODWORD(v53) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v53, 113) )
        __debugbreak();
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 4652, ASSERT_TYPE_ASSERT, "( name )", "nullptr name for asset type '%s'. Fastfile is '%s'", g_assetNames[v3], CurrentZoneLoadName) )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 87, ASSERT_TYPE_ASSERT, "(assetName)", (const char *)&queryFormat, "assetName") )
      __debugbreak();
  }
  v6 = *XAssetHeaderName;
  if ( *XAssetHeaderName == 44 )
    ++XAssetHeaderName;
  if ( !XAssetHeaderName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnamefix.h", 100, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  v7 = *XAssetHeaderName;
  v8 = XAssetHeaderName;
  if ( *XAssetHeaderName >= 33 )
  {
    v9 = 0x1000000000001001i64;
    while ( 1 )
    {
      v10 = v7;
      if ( (unsigned __int8)(v7 - 65) <= 0x19u || (unsigned __int8)(v7 - 32) <= 0x3Cu && _bittest64(&v9, (char)(v7 - 32)) )
        break;
      if ( v7 == 124 )
        break;
      v7 = *++v8;
      if ( !v7 )
      {
        if ( v10 <= 32 )
          break;
        v11 = v3;
        goto LABEL_34;
      }
    }
  }
  if ( (unsigned int)v3 >= 0x71 )
  {
    LODWORD(v54) = 113;
    LODWORD(v53) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v53, v54) )
      __debugbreak();
  }
  v11 = v3;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 4660, ASSERT_TYPE_ASSERT, "(DB_IsAssetNameValid( name ))", "%s\n\tInvalid asset name '%s'(%s)", "DB_IsAssetNameValid( name )", XAssetHeaderName, g_assetNames[v3]) )
    __debugbreak();
LABEL_34:
  if ( g_loadingDebugZone )
  {
    if ( (unsigned int)v3 >= 0x71 )
    {
      LODWORD(v54) = 113;
      LODWORD(v53) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v53, v54) )
        __debugbreak();
    }
    Com_Printf(16, "mychanges load asset: %s,%s\n", g_assetNames[v11], XAssetHeaderName);
  }
  result = DB_AssetEntryTable::FindAsset(&s_assetManager.table, XAssetHeaderName, (XAssetType)v3);
  v13 = result;
  if ( v6 == 44 )
  {
    if ( result )
    {
      v2->physicsLibrary = NULL;
    }
    else
    {
      DefaultEntry = DB_CreateDefaultEntry((XAssetType)v3, XAssetHeaderName);
      v2->physicsLibrary = (PhysicsLibrary *)DefaultEntry->m_header;
      if ( DB_IsDoingTransientOnlyWork() )
      {
        XAssetTypeName = DB_GetXAssetTypeName(v3);
        Com_PrintError((_DWORD)v13 + 1, "ERROR: %s,%s is missing while loading transients. This might cause issues.\n", XAssetTypeName, XAssetHeaderName);
      }
      if ( !DB_DevFastfileIgnoresAssetTypeInMainFF((XAssetType)v3) || (v16 = DB_Zones_GetCurrentZoneLoadName(), !DB_Zones_NameStartsWith(v16, "dev_")) && (v17 = DB_Zones_GetCurrentZoneLoadName(), !DB_Zones_NameStartsWith(v17, "dbgshd_")) )
      {
        if ( (_DWORD)v3 != 15 || (v18 = DB_Zones_GetCurrentZoneLoadName(), !DB_Zones_NameStartsWith(v18, "techsets_")) )
        {
          if ( DB_Transients_VerbosePrint() )
          {
            v19 = DB_GetXAssetTypeName(v3);
            Com_Printf(16, "WARNING: Could not find asset for stub, so loading default for: %s,%s\n", v19, XAssetHeaderName);
          }
        }
      }
      return DefaultEntry;
    }
    return result;
  }
  if ( result )
  {
    v20 = *((_WORD *)result + 9) & 0x7FF;
    if ( v20 == DB_Zones_GetCurrentZoneLoadIndex() )
    {
      ZoneNameFromIndex = DB_Zones_GetZoneNameFromIndex(*((_WORD *)v13 + 9) & 0x7FF);
      if ( (unsigned int)v3 >= 0x71 )
      {
        LODWORD(v54) = 113;
        LODWORD(v53) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v53, v54) )
          __debugbreak();
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 4729, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Asset %s(%s), already loaded by zone %s", XAssetHeaderName, g_assetNames[v11], ZoneNameFromIndex) )
        __debugbreak();
    }
  }
  CurrentZoneLoadIndex = DB_Zones_GetCurrentZoneLoadIndex();
  v58 = CurrentZoneLoadIndex;
  v23 = CurrentZoneLoadIndex;
  if ( !v13 )
  {
LABEL_94:
    v37 = DB_AssetEntryPool::Allocate(&s_assetManager.table.m_pool, (XAssetType)v3, v23);
    XAssetTypeSize = DB_GetXAssetTypeSize((const XAssetType)v3);
    memcpy_0(v37->m_header.data, v2->physicsLibrary, XAssetTypeSize);
    v37->m_inuse |= 8u;
    ZoneFlagsFromIndex = DB_Zones_GetZoneFlagsFromIndex(v23);
    v39 = ZoneFlagsFromIndex;
    if ( (ZoneFlagsFromIndex & 0xFF000) != 0 )
    {
      switch ( (_DWORD)v3 )
      {
        case 0xF:
          if ( ((__int64)v37->m_header.physicsLibrary[1].name & 0x40) == 0 )
            goto LABEL_106;
          v40 = DB_Zones_GetZoneNameFromIndex(v23);
          v41 = DB_GetXAssetHeaderName(v37->m_type, v37->m_header);
          v42 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 4785, ASSERT_TYPE_ASSERT, "( !R_IsStreamedImage( newEntry->GetAssetHeader().image ) )", "Image asset '%s' in transient '%s' is streaming. This shouldn't be allowed. Likely problem with the linker...", v41, v40);
          break;
        case 8:
          if ( !XModelSurfs_IsStreamed(v37->m_header.modelSurfs) )
            goto LABEL_106;
          v43 = DB_Zones_GetZoneNameFromIndex(v23);
          v44 = DB_GetXAssetHeaderName(v37->m_type, v37->m_header);
          v42 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 4790, ASSERT_TYPE_ASSERT, "( !XModelSurfs_IsStreamed( newEntry->GetAssetHeader().modelSurfs ) )", "Model mesh asset '%s' in transient '%s' is streamable. This shouldn't be allowed. Likely problem with the linker...", v44, v43);
          break;
        case 0x62:
          v45 = DB_Zones_GetZoneNameFromIndex(v23);
          v46 = DB_GetXAssetHeaderName(v37->m_type, v37->m_header);
          v42 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 4795, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Stream key asset '%s' is in transient '%s'. Stream keys are not allowed in transients. Likely problem with the linker...", v46, v45);
          break;
        default:
          goto LABEL_106;
      }
      if ( v42 )
        __debugbreak();
      v39 = ZoneFlagsFromIndex;
    }
LABEL_106:
    if ( v13 && (*((_WORD *)v13 + 9) & 0x7FF) == v58 )
    {
      v47 = DB_Zones_GetZoneNameFromIndex(v23);
      if ( (unsigned int)v3 >= 0x71 )
      {
        LODWORD(v54) = 113;
        LODWORD(v53) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v53, v54) )
          __debugbreak();
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 4803, ASSERT_TYPE_ASSERT, "(existingEntry->GetZoneIndex() != currentLoadZoneIndex)", "%s\n\tAsset '%s'(%s) cannot appear twice in the same zone '%s'", "existingEntry->GetZoneIndex() != currentLoadZoneIndex", XAssetHeaderName, g_assetNames[v11], v47) )
        __debugbreak();
    }
    DB_CreateXAsset(v37->m_header, (XAssetType)v3, (DB_CreateType)(v13 != NULL));
    if ( !v13 )
    {
      DB_AssetEntryTable::AddToTable(&s_assetManager.table, v37);
      v2->physicsLibrary = (PhysicsLibrary *)v37->m_header;
      DB_TrySetMasterDefaultAsset(v37);
      if ( (v39 & 0x80000) != 0 )
      {
        DB_SetTransientAssetFlags(v37, TRANSIENT_FLAGS_GLOBAL_GROUP, 0);
      }
      else
      {
        m_type = v37->m_type;
        v49 = DB_GetXAssetHeaderName(m_type, v37->m_header);
        if ( CL_TransientsMP_IsRegisteredAsset(v49, (const XAssetType)m_type) )
        {
          DB_SetTransientAssetFlags(v37, TRANSIENT_FLAGS_GLOBAL_GROUP, 0);
          DB_TransientSetOverrideAsset(v37);
        }
        v39 = ZoneFlagsFromIndex;
      }
      if ( (v39 & 0x387F000) != 0 )
      {
        v50 = v37->m_type;
        if ( (unsigned int)v50 >= 0x71 )
        {
          LODWORD(v54) = 113;
          LODWORD(v53) = v37->m_type;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v53, v54) )
            __debugbreak();
        }
        v51 = g_assetNames[v50];
        v52 = DB_GetXAssetHeaderName(v37->m_type, v37->m_header);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 1008, ASSERT_TYPE_ASSERT, "(( ( currentLoadZoneFlags & DB_MASK_TRANSIENT_STUBBED_ZONES ) == 0 ))", "%s\n\tAsset %s(%s) is missing from the StreamingInfo transient list, we should have at least made a stub for it.", "( ( currentLoadZoneFlags & DB_MASK_TRANSIENT_STUBBED_ZONES ) == 0 )", v52, v51) )
          __debugbreak();
      }
      return v37;
    }
    DB_TransientLoadAssetIntoExistingDBSlot(v13, v39);
    DB_InsertNewStashedAssetEntry(v37, v13);
    if ( s_dbReplaceAssets )
    {
      if ( s_dbDeferAssets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 4503, ASSERT_TYPE_ASSERT, "(!s_dbDeferAssets)", (const char *)&queryFormat, "!s_dbDeferAssets") )
        __debugbreak();
      if ( !s_dbIsSyncLoading && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 4504, ASSERT_TYPE_ASSERT, "(s_dbIsSyncLoading)", (const char *)&queryFormat, "s_dbIsSyncLoading") )
        __debugbreak();
    }
    else
    {
      if ( DB_ShouldDeferHeadAssetReplacement(v37, v13) )
      {
        if ( s_dbReplaceAssets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 4512, ASSERT_TYPE_ASSERT, "(!s_dbReplaceAssets)", (const char *)&queryFormat, "!s_dbReplaceAssets") )
          __debugbreak();
        if ( s_dbIsSyncLoading && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 4514, ASSERT_TYPE_ASSERT, "(!s_dbIsSyncLoading)", (const char *)&queryFormat, "!s_dbIsSyncLoading") )
          __debugbreak();
        goto LABEL_144;
      }
      if ( (*((_WORD *)v13 + 9) & 0x7FF) != 0 || !s_dbIsSyncLoading && (v13->m_inuse & 1) != 0 )
      {
LABEL_144:
        v2->physicsLibrary = (PhysicsLibrary *)v37->m_header;
        return v13;
      }
    }
    DB_ReplaceHeadAssetEntry(v37, v13, 0);
    v37 = v13;
    goto LABEL_144;
  }
  v24 = DB_LinkShouldIgnoreAsset(v13, CurrentZoneLoadIndex);
  v25 = v24;
  if ( !v24 )
  {
    v2 = header;
    goto LABEL_94;
  }
  DB_AddDuplicateAssetWarning((const XAssetType)v3, XAssetHeaderName, *((_WORD *)v24 + 9) & 0x7FF, v23, 1);
  v26 = *((_WORD *)v13 + 9) & 0x7FF;
  if ( v26 )
  {
    v28 = 4i64;
    v29 = "dev_";
    v30 = 1;
    v31 = DB_Zones_GetZoneNameFromIndex(v26);
    if ( !v31 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    v32 = v31 - "dev_";
    while ( 1 )
    {
      v33 = v29[v32];
      v34 = v28;
      v35 = *v29++;
      --v28;
      if ( !v34 )
      {
LABEL_70:
        v30 = 0;
        goto LABEL_71;
      }
      if ( v33 != v35 )
        break;
      if ( !v33 )
        goto LABEL_70;
    }
    if ( v33 < v35 )
      v30 = -1;
LABEL_71:
    v27 = v30 == 0;
    if ( !v30 )
      DB_PatchMem_PushDevAssetReplacement();
  }
  else
  {
    v27 = 0;
  }
  physicsLibrary = (XModelSurfs *)header->physicsLibrary;
  switch ( (_DWORD)v3 )
  {
    case 8:
      if ( !physicsLibrary && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 4547, ASSERT_TYPE_ASSERT, "(modelSurfs)", (const char *)&queryFormat, "modelSurfs") )
        __debugbreak();
      if ( DB_IsXModelSurfsInPool(physicsLibrary) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 4548, ASSERT_TYPE_ASSERT, "(!DB_IsXModelSurfsInPool( modelSurfs ))", (const char *)&queryFormat, "!DB_IsXModelSurfsInPool( modelSurfs )") )
        __debugbreak();
      DB_ReleaseXModelSurfsXSurfaces(physicsLibrary);
      break;
    case 0xB:
      Material_ReleaseMaterialResources(header->material);
      break;
    case 0xC:
      DB_ReleaseXAsset((XAssetHeader)header->physicsLibrary, ASSET_TYPE_COMPUTESHADER, OWNS_RESOURCES);
      break;
    case 0xE:
      Material_ReleaseTechniqueSetResources(header->techniqueSet);
      break;
  }
  asset.type = v3;
  asset.header.physicsLibrary = (PhysicsLibrary *)physicsLibrary;
  DB_PatchMem_TryDiscard(&asset);
  if ( v27 )
    DB_PatchMem_PopDevAssetReplacement();
  header->physicsLibrary = NULL;
  return v25;
}

/*
==============
DB_LoadFastfiles
==============
*/
void DB_LoadFastfiles(const DB_FastfileInfo *zoneInfo, unsigned int zoneCount, unsigned int loadFlags, bool loadServerZone)
{
  char v4; 
  __int64 v5; 
  const DB_FastfileInfo *v6; 
  unsigned __int64 v7; 
  bool v8; 
  unsigned int v9; 
  const char **p_name; 
  __int64 v11; 
  char *v12; 
  char v13; 
  char v14; 
  __int64 v15; 
  int ZoneIndexFromName; 
  int LogChannel; 
  const DB_FastfileInfo *v18; 
  __int64 v19; 
  unsigned int priority; 
  const char *name; 
  int v22; 
  int v23; 
  __int64 v24; 
  __int64 v25; 

  v4 = loadFlags;
  v5 = zoneCount;
  v6 = zoneInfo;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 7069, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 7070, ASSERT_TYPE_ASSERT, "(zoneInfo)", (const char *)&queryFormat, "zoneInfo") )
    __debugbreak();
  if ( !(_DWORD)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 7071, ASSERT_TYPE_ASSERT, "(zoneCount)", (const char *)&queryFormat, "zoneCount") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_LoadFastfiles");
  MemBudget_Poll_CheckBootTimePoll();
  DB_SyncForUnfinishedLoadsOrUnloads();
  DB_PushMainThreadWork();
  v7 = (unsigned __int64)&s_registryState & 3;
  if ( ((unsigned __int8)&s_registryState & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_registryState) )
    __debugbreak();
  if ( _InterlockedCompareExchange((volatile signed __int32 *)&s_registryState, 1, 0) )
  {
    if ( v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_registryState) )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 7085, ASSERT_TYPE_ASSERT, "( Sys_InterlockedCompareExchange( reinterpret_cast<volatile_int32*>( &s_registryState ), REGISTRY_STATE_MAIN_THREAD, REGISTRY_STATE_IDLE ) ) == ( REGISTRY_STATE_IDLE )", "%s == %s\n\t%i, %i", "Sys_InterlockedCompareExchange( reinterpret_cast<volatile_int32*>( &s_registryState ), REGISTRY_STATE_MAIN_THREAD, REGISTRY_STATE_IDLE )", "REGISTRY_STATE_IDLE", _InterlockedCompareExchange((volatile signed __int32 *)&s_registryState, 1, 0), 0i64) )
      __debugbreak();
  }
  s_dbIsSyncLoading = v4 & 1;
  s_dbReplaceAssets = (v4 & 4) != 0;
  v8 = (v4 & 2) != 0;
  v9 = 0;
  if ( !(_DWORD)v5 )
    goto LABEL_108;
  p_name = &v6->name;
  v11 = v5;
  do
  {
    if ( (!*p_name || !**p_name) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 7099, ASSERT_TYPE_ASSERT, "(zoneInfo[givenZoneIndex].name && zoneInfo[givenZoneIndex].name[0])", (const char *)&queryFormat, "zoneInfo[givenZoneIndex].name && zoneInfo[givenZoneIndex].name[0]") )
      __debugbreak();
    v12 = (char *)*p_name;
    if ( !*p_name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnamefix.h", 100, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
    v13 = *v12;
    if ( *v12 >= 33 )
    {
      while ( 1 )
      {
        v14 = v13;
        if ( (unsigned __int8)(v13 - 65) <= 0x19u )
          break;
        if ( (unsigned __int8)(v13 - 32) <= 0x3Cu )
        {
          v15 = 0x1000000000001001i64;
          if ( _bittest64(&v15, (char)(v13 - 32)) )
            break;
        }
        if ( v13 == 124 )
          break;
        v13 = *++v12;
        if ( !*v12 )
        {
          if ( v14 > 32 )
            goto LABEL_37;
          break;
        }
      }
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 7100, ASSERT_TYPE_ASSERT, "( ( DB_IsAssetNameValid( zoneInfo[givenZoneIndex].name ) ) )", "( zoneInfo[givenZoneIndex].name ) = %s", *p_name) )
      __debugbreak();
LABEL_37:
    ZoneIndexFromName = DB_Zones_GetZoneIndexFromName(*p_name);
    if ( ZoneIndexFromName != 0xFFFF )
    {
      if ( ((_DWORD)p_name[1] & 0x3F00000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 7108, ASSERT_TYPE_ASSERT, "(( zoneInfo[givenZoneIndex].zoneFlags & DB_MASK_PRELOAD_ZONES ) == 0)", "%s\n\tZone %s is already preloaded!", "( zoneInfo[givenZoneIndex].zoneFlags & DB_MASK_PRELOAD_ZONES ) == 0", *p_name) )
        __debugbreak();
      if ( (DB_Zones_GetZoneFlagsFromIndex(ZoneIndexFromName) & 0x3F00000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 7109, ASSERT_TYPE_ASSERT, "(DB_Zones_GetZoneFlagsFromIndex( findZoneIndex ) & DB_MASK_PRELOAD_ZONES)", "%s\n\tZone %s is already loaded!", "DB_Zones_GetZoneFlagsFromIndex( findZoneIndex ) & DB_MASK_PRELOAD_ZONES", *p_name) )
        __debugbreak();
    }
    v9 |= *((_DWORD *)p_name + 2);
    p_name += 3;
    --v11;
  }
  while ( v11 );
  v7 = (unsigned __int64)&s_registryState & 3;
  LODWORD(v5) = zoneCount;
  v6 = zoneInfo;
  if ( !v9 )
  {
LABEL_108:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 7119, ASSERT_TYPE_ASSERT, "(allocFlags)", "%s\n\tnothing to load!", "allocFlags") )
      __debugbreak();
  }
  LogChannel = DB_GetLogChannel();
  Com_Printf(LogChannel, "\nDB_LoadFastfiles() Job:\n");
  if ( (_DWORD)v5 )
  {
    v18 = v6;
    v19 = (unsigned int)v5;
    do
    {
      priority = v18->priority;
      name = v18->name;
      v22 = DB_GetLogChannel();
      Com_Printf(v22, "* Loading '%s'\tpriority=%u\n", name, priority);
      if ( (v18->zoneFlags & 0x3CFF000) != 0 )
        Stream_Primer_LogTransientFastfile(v18->name);
      ++v18;
      --v19;
    }
    while ( v19 );
    v6 = zoneInfo;
  }
  v23 = DB_GetLogChannel();
  Com_Printf(v23, "\n");
  if ( DB_Zones_AreStreamOnlyFlags(v9) )
  {
    if ( (v9 & 0x5000) != 0 )
      CL_TransientsSP_ClientCodeCheck();
    s_dbCurrentWorkFlags = v9;
  }
  if ( !v8 )
  {
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_LoadAndUnloadSyncThreads");
    Com_SyncThreads();
    DB_Zones_ProcessPendingUnloadFrees(1);
    Sys_ProfEndNamedEvent();
  }
  if ( (v9 & 0x3F00000) != 0 )
  {
    if ( (v9 & 0xFC0FFFFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 7168, ASSERT_TYPE_ASSERT, "(( allocFlags & ~DB_MASK_PRELOAD_ZONES ) == 0)", "%s\n\tMust be exclusively a preloading-only job", "( allocFlags & ~DB_MASK_PRELOAD_ZONES ) == 0") )
      __debugbreak();
    if ( (v9 & 0x3F00000) == 66060288 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 7169, ASSERT_TYPE_ASSERT, "((allocFlags & DB_MASK_PRELOAD_ZONES) != DB_MASK_PRELOAD_ZONES)", "%s\n\tShould only allocate one preload zone at a time", "(allocFlags & DB_MASK_PRELOAD_ZONES) != DB_MASK_PRELOAD_ZONES") )
      __debugbreak();
    g_dbPreloading = 1;
  }
  if ( s_dbIsSyncLoading )
  {
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_ArchiveAssets");
    DB_ArchiveAssets();
    Sys_ProfEndNamedEvent();
  }
  if ( v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_registryState) )
    __debugbreak();
  if ( _InterlockedCompareExchange((volatile signed __int32 *)&s_registryState, 0, 1) != 1 )
  {
    if ( v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_registryState) )
      __debugbreak();
    LODWORD(v25) = 1;
    LODWORD(v24) = _InterlockedCompareExchange((volatile signed __int32 *)&s_registryState, 0, 1);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 7183, ASSERT_TYPE_ASSERT, "( Sys_InterlockedCompareExchange( reinterpret_cast<volatile_int32*>( &s_registryState ), REGISTRY_STATE_IDLE, REGISTRY_STATE_MAIN_THREAD ) ) == ( REGISTRY_STATE_MAIN_THREAD )", "%s == %s\n\t%i, %i", "Sys_InterlockedCompareExchange( reinterpret_cast<volatile_int32*>( &s_registryState ), REGISTRY_STATE_IDLE, REGISTRY_STATE_MAIN_THREAD )", "REGISTRY_STATE_MAIN_THREAD", v24, v25) )
      __debugbreak();
  }
  DB_PopMainThreadWork();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_LoadFastfilesEnqueueForDBThread");
  DB_LoadFastfilesEnqueueForDBThread(v6, v5, loadServerZone);
  Sys_ProfEndNamedEvent();
  if ( s_dbIsSyncLoading )
  {
    if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 8277, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
      __debugbreak();
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_SyncDatabaseCompleted");
    while ( !Sys_IsDatabaseReady() )
    {
      if ( Sys_IsMainThread() )
        Sys_LoadingProcessEvents();
      Sys_CheckQuitRequest();
      Sys_Sleep(1);
    }
    Sys_ProfEndNamedEvent();
    if ( DB_PostLoadHasDeferredAssets() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 7196, ASSERT_TYPE_ASSERT, "(!DB_PostLoadHasDeferredAssets())", (const char *)&queryFormat, "!DB_PostLoadHasDeferredAssets()") )
      __debugbreak();
    DB_PushMainThreadWork();
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_UnarchiveAssets");
    DB_UnarchiveAssets(0);
    Sys_ProfEndNamedEvent();
    DB_PopMainThreadWork();
    if ( s_dbReplaceAssets )
      DB_SyncXAssetsBlocking();
    else
      DB_SyncXAssetsKeepAlive();
    if ( Sys_GetDatabaseStopServer() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 7218, ASSERT_TYPE_ASSERT, "(!Sys_GetDatabaseStopServer())", (const char *)&queryFormat, "!Sys_GetDatabaseStopServer()") )
      __debugbreak();
    if ( (s_dbCurrentWorkFlags & 0xFC700FFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6319, ASSERT_TYPE_ASSERT, "(( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_ZONES ) == 0)", (const char *)&queryFormat, "( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_ZONES ) == 0") )
      __debugbreak();
    if ( s_dbCurrentWorkFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 7222, ASSERT_TYPE_ASSERT, "(!DB_IsDoingStreamOnlyWork())", (const char *)&queryFormat, "!DB_IsDoingStreamOnlyWork()") )
      __debugbreak();
    if ( s_registryState )
    {
      LODWORD(v24) = s_registryState;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 7226, ASSERT_TYPE_ASSERT, "( s_registryState ) == ( REGISTRY_STATE_IDLE )", "%s == %s\n\t%i, %i", "s_registryState", "REGISTRY_STATE_IDLE", v24, 0i64) )
        __debugbreak();
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
DB_LoadFastfilesEnqueueForDBThread
==============
*/
void DB_LoadFastfilesEnqueueForDBThread(const DB_FastfileInfo *const zoneInfo, const unsigned int zoneCount, const bool loadServerZone)
{
  __int64 v4; 
  DB_FastFileFailureMode *p_failureMode; 
  __int64 v7; 
  const char *v8; 
  int v9; 
  DB_FastFileFailureMode v10; 
  unsigned int priority; 
  unsigned int v12; 
  bool v13; 

  v4 = zoneCount;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5121, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !zoneInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5122, ASSERT_TYPE_ASSERT, "(zoneInfo)", (const char *)&queryFormat, "zoneInfo") )
    __debugbreak();
  if ( !(_DWORD)v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5123, ASSERT_TYPE_ASSERT, "(zoneCount)", (const char *)&queryFormat, "zoneCount") )
    __debugbreak();
  if ( !Sys_IsDatabaseReady() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5125, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseReady())", (const char *)&queryFormat, "Sys_IsDatabaseReady()") )
    __debugbreak();
  if ( DB_PendingZones_HasPendingZones() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5126, ASSERT_TYPE_ASSERT, "(!DB_PendingZones_HasPendingZones())", (const char *)&queryFormat, "!DB_PendingZones_HasPendingZones()") )
    __debugbreak();
  if ( s_dbZoneAllocDone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5127, ASSERT_TYPE_ASSERT, "(!s_dbZoneAllocDone)", (const char *)&queryFormat, "!s_dbZoneAllocDone") )
    __debugbreak();
  if ( s_dbLoadingFastfiles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5128, ASSERT_TYPE_ASSERT, "(!s_dbLoadingFastfiles)", (const char *)&queryFormat, "!s_dbLoadingFastfiles") )
    __debugbreak();
  if ( s_dbLoadingProcessedAssets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5129, ASSERT_TYPE_ASSERT, "(!s_dbLoadingProcessedAssets)", (const char *)&queryFormat, "!s_dbLoadingProcessedAssets") )
    __debugbreak();
  s_dbLoadingFastfiles = 1;
  if ( (_DWORD)v4 )
  {
    p_failureMode = &zoneInfo->failureMode;
    v7 = v4;
    do
    {
      v8 = *(const char **)(p_failureMode - 3);
      if ( v8 )
      {
        if ( !*v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5141, ASSERT_TYPE_ASSERT, "(zoneName[0] != '\\0')", (const char *)&queryFormat, "zoneName[0] != '\\0'") )
          __debugbreak();
        v9 = *((_DWORD *)p_failureMode - 1);
        v10 = *p_failureMode;
        priority = *((_DWORD *)p_failureMode + 1);
        v12 = v9 & 0xFFFFF7FF;
        v13 = (v9 & 0x800) != 0;
        if ( (v9 & 0x800) == 0 )
          v12 = *((_DWORD *)p_failureMode - 1);
        if ( ((v12 - 1) & v12) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5153, ASSERT_TYPE_ASSERT, "(IsPowerOf2( zoneFlags ))", (const char *)&queryFormat, "IsPowerOf2( zoneFlags )") )
          __debugbreak();
        DB_PendingZones_QueueZoneSet(v8, v12, v13, loadServerZone, v10, priority);
      }
      p_failureMode += 6;
      --v7;
    }
    while ( v7 );
  }
  Sys_CheckQuitRequest();
  Sys_ResetDatabaseReady();
  Sys_WakeDatabaseThread();
}

/*
==============
DB_LoadMPTransient_f
==============
*/
void DB_LoadMPTransient_f()
{
  const char *v0; 
  char dest[256]; 

  v0 = Cmd_Argv(1);
  Core_strcpy(dest, 0x100ui64, v0);
  CL_TransientsMP_LoadByFile(dest, 0);
}

/*
==============
DB_LoadStreamingInfoTransientList
==============
*/
void DB_LoadStreamingInfoTransientList(const StreamingInfo *streamingInfo)
{
  TransientInfo *transientInfo; 
  const char *name; 
  int ZoneIndexFromName; 
  unsigned int ZoneFlagsFromIndex; 
  unsigned int v6; 
  __int64 v7; 
  const char *v8; 
  signed __int64 v9; 
  char v10; 
  char v11; 
  unsigned int i; 
  XAssetType type; 
  __int64 v15; 
  __int64 v16; 

  ProfLoad_DB_Begin("DB_LoadStreamingInfoTransientList");
  if ( !streamingInfo->transientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 1585, ASSERT_TYPE_ASSERT, "(streamingInfo.transientInfo)", (const char *)&queryFormat, "streamingInfo.transientInfo") )
    __debugbreak();
  DB_LockHashWrite();
  DB_LoadTransientList(streamingInfo->name, streamingInfo->transientInfo);
  transientInfo = streamingInfo->transientInfo;
  name = streamingInfo->name;
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 1545, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  ZoneIndexFromName = DB_Zones_GetZoneIndexFromName(name);
  ZoneFlagsFromIndex = DB_Zones_GetZoneFlagsFromIndex(ZoneIndexFromName);
  v6 = ZoneFlagsFromIndex;
  if ( (ZoneFlagsFromIndex & 0xC0) == 0 )
  {
    if ( (ZoneFlagsFromIndex & 0x100000) != 0 )
    {
      v7 = 11i64;
      v8 = "mp_frontend";
      if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      v9 = name - "mp_frontend";
      do
      {
        v10 = v8[v9];
        v11 = *v8++;
        if ( !v7-- )
          break;
        if ( v10 != v11 )
          goto LABEL_17;
      }
      while ( v10 );
    }
    else
    {
LABEL_17:
      for ( i = 0; i < transientInfo->forcedStubAssetCount; ++i )
      {
        type = transientInfo->forcedStubAssets[i].type;
        if ( (unsigned int)type >= ASSET_TYPE_COUNT )
        {
          LODWORD(v16) = 113;
          LODWORD(v15) = transientInfo->forcedStubAssets[i].type;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 1572, ASSERT_TYPE_ASSERT, "(unsigned)( assetType ) < (unsigned)( ASSET_TYPE_COUNT )", "assetType doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v15, v16) )
            __debugbreak();
        }
        DB_ProcessForcedStubbedAsset(type, transientInfo->forcedStubAssets[i].name, ZoneIndexFromName, v6);
      }
    }
  }
  DB_UnlockHashWrite();
  ProfLoad_DB_End();
}

/*
==============
DB_LoadTransientList
==============
*/
void DB_LoadTransientList(const char *const name, const TransientInfo *transientInfo)
{
  const char *v3; 
  unsigned int ZoneFlagsFromIndex; 
  unsigned int v5; 
  unsigned int i; 
  TransientFileReference *transientFiles; 
  __int64 v8; 
  unsigned __int8 type; 
  unsigned __int64 CostToLoad; 
  unsigned int v11; 
  unsigned __int16 v12; 
  unsigned __int16 v13; 
  TransientFlagType v14; 
  const unsigned int *v15; 
  TransientAssetReference *transientAssets; 
  __int64 mpParentIndex; 
  XAssetType v18; 
  const char *v19; 
  unsigned __int8 v20; 
  const char *v21; 
  unsigned __int16 v22; 
  unsigned __int16 v23; 
  __int64 v24; 
  __int64 v25; 
  int zoneIndex; 
  TransientCostCalc outCost; 
  __int16 v29[10256]; 

  v3 = name;
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 1382, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  if ( transientInfo->transientWorldGridTileMapCount )
    CL_TransientsWorldMP_RegisterGridStreamingInfo(v3, transientInfo);
  if ( transientInfo->transientCollisionTileCount )
    CL_TransientsCollisionMP_RegisterCollisionTileCount(v3, transientInfo);
  if ( transientInfo->transientMPCommonCount )
    CL_TransientsCommonMP_RegisterTransientInfo(transientInfo);
  TransientCostCalc_Init(&outCost, &transientInfo->transientCosts);
  if ( transientInfo->transientFileCount )
  {
    zoneIndex = DB_Zones_GetZoneIndexFromName(v3);
    ZoneFlagsFromIndex = DB_Zones_GetZoneFlagsFromIndex(zoneIndex);
    if ( transientInfo->transientFileCount > 0x280D && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 1406, ASSERT_TYPE_ASSERT, "(transientInfo.transientFileCount <= ( sizeof( *array_counter( fileIndices ) ) + 0 ))", (const char *)&queryFormat, "transientInfo.transientFileCount <= ARRAY_COUNT( fileIndices )") )
      __debugbreak();
    v5 = 0;
    for ( i = 0; i < transientInfo->transientFileCount; ++i )
    {
      if ( i >= 0x280D )
      {
        LODWORD(v25) = 10253;
        LODWORD(v24) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 1409, ASSERT_TYPE_ASSERT, "(unsigned)( i ) < (unsigned)( ( sizeof( *array_counter( fileIndices ) ) + 0 ) )", "i doesn't index ARRAY_COUNT( fileIndices )\n\t%i not in [0, %i)", v24, v25) )
          __debugbreak();
      }
      transientFiles = transientInfo->transientFiles;
      v8 = i;
      if ( transientFiles[v8].name && (type = transientFiles[v8].type, DB_TransientFileType_IsMP((const TransientFileType)type)) )
      {
        if ( !type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 1414, ASSERT_TYPE_ASSERT, "(transientFileType != TransientFileType::ORPHANED_WORLD)", (const char *)&queryFormat, "transientFileType != TransientFileType::ORPHANED_WORLD") )
          __debugbreak();
        CostToLoad = 0i64;
        if ( i < transientInfo->transientCosts.transientCostCount )
          CostToLoad = TransientCostCalc_GetCostToLoad(&outCost, i, 0);
        v11 = CL_TransientsMP_RegisterFile(transientInfo->transientFiles[v8].name, (TransientFileType)type, ZoneFlagsFromIndex, CostToLoad);
        v12 = truncate_cast<unsigned short,unsigned int>(v11);
        v29[i] = v12;
        v13 = v12;
        if ( DB_TransientFileType_IsWorld((const TransientFileType)type) )
        {
          CL_TransientsWorldMP_RegisterFileIndex(v13, transientInfo->transientFiles[v8].name);
        }
        else if ( type == 3 )
        {
          v21 = transientInfo->transientFiles[v8].name;
          v22 = truncate_cast<unsigned short,unsigned int>(i);
          CL_TransientsCollisionMP_RegisterFileIndex(transientInfo, v22, v13, v21);
        }
        else if ( DB_TransientFileType_IsMPCommon((const TransientFileType)type) )
        {
          v23 = truncate_cast<unsigned short,unsigned int>(i);
          CL_TransientsCommonMP_RegisterFileIndex(transientInfo, v13, v23);
        }
      }
      else
      {
        v29[i] = -1;
      }
    }
    if ( transientInfo->transientAssetCount )
    {
      if ( ((ZoneFlagsFromIndex - 1) & ZoneFlagsFromIndex) != 0 )
      {
        LODWORD(v24) = ZoneFlagsFromIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 949, ASSERT_TYPE_ASSERT, "( ( IsPowerOf2( zoneFlags ) ) )", "( zoneFlags ) = %08x", v24) )
          __debugbreak();
      }
      v14 = TRANSIENT_FLAGS_LEVEL;
      v15 = TRANSIENT_FLAGS_PARENT_ZONEFLAGS;
      while ( (ZoneFlagsFromIndex & *v15) == 0 )
      {
        ++v14;
        ++v15;
        if ( (unsigned int)v14 >= TRANSIENT_FLAGS_COUNT )
        {
          LODWORD(v24) = ZoneFlagsFromIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 959, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown zone flags 0x%08x", v24) )
            __debugbreak();
          v14 = TRANSIENT_FLAGS_COUNT;
          break;
        }
      }
      if ( transientInfo->transientAssetCount )
      {
        do
        {
          transientAssets = transientInfo->transientAssets;
          mpParentIndex = transientAssets[v5].mpParentIndex;
          v18 = transientAssets[v5].type;
          v19 = transientAssets[v5].name;
          if ( (_DWORD)mpParentIndex == -1 )
            goto LABEL_49;
          if ( (unsigned int)mpParentIndex >= transientInfo->transientFileCount )
          {
            LODWORD(v25) = transientInfo->transientFileCount;
            LODWORD(v24) = transientAssets[v5].mpParentIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 1457, ASSERT_TYPE_ASSERT, "(unsigned)( ffIndex ) < (unsigned)( transientInfo.transientFileCount )", "ffIndex doesn't index transientInfo.transientFileCount\n\t%i not in [0, %i)", v24, v25) )
              __debugbreak();
          }
          v20 = transientInfo->transientFiles[mpParentIndex].type;
          if ( !DB_TransientFileType_IsMPCommon((const TransientFileType)v20) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 1460, ASSERT_TYPE_ASSERT, "(DB_TransientFileType_IsMPCommon( transFileType ))", (const char *)&queryFormat, "DB_TransientFileType_IsMPCommon( transFileType )") )
            __debugbreak();
          if ( v18 == ASSET_TYPE_XMODEL )
            CL_TransientsMP_RegisterAsset(v19, ASSET_TYPE_XMODEL, (unsigned __int16)v29[mpParentIndex]);
          if ( !DB_TransientFileType_IsMPCustomization((const TransientFileType)v20) )
LABEL_49:
            DB_CreateTransientStubAsset(v18, v19, zoneIndex, v14);
          ++v5;
        }
        while ( v5 < transientInfo->transientAssetCount );
      }
    }
    v3 = name;
  }
  if ( transientInfo->transientWorldGridTileMapCount )
    CL_TransientsWorldMP_RegisterGridStreamingInfoPostFiles(v3, transientInfo);
}

/*
==============
DB_LoadZone
==============
*/
void DB_LoadZone(const char *zonename)
{
  Core_strcpy_truncate(g_debugZoneName, 0x40ui64, zonename);
  DB_UpdateDebugZone();
}

/*
==============
DB_LoadZone_f
==============
*/
void DB_LoadZone_f()
{
  const char *v0; 

  v0 = Cmd_Argv(1);
  Core_strcpy_truncate(g_debugZoneName, 0x40ui64, v0);
  DB_UpdateDebugZone();
}

/*
==============
DB_LockHashRead
==============
*/
void DB_LockHashRead(void)
{
  __int64 v0; 
  __int64 v1; 
  __int64 v2; 

  v0 = 8i64 * tls_index;
  v1 = *(_QWORD *)((char *)NtCurrentTeb()->Reserved1[11] + v0);
  if ( !*(_BYTE *)(v1 + 716) && !*(_DWORD *)(v1 + 720) )
  {
    Sys_CheckAcquireLock(&s_dbHashRWLock);
    AcquireSRWLockShared((PSRWLOCK)&s_dbHashRWLock);
  }
  v2 = *(_QWORD *)((char *)NtCurrentTeb()->Reserved1[11] + v0);
  ++*(_DWORD *)(v2 + 720);
}

/*
==============
DB_LockHashWrite
==============
*/
void DB_LockHashWrite(void)
{
  int v0; 

  if ( *(_BYTE *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 716i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 546, ASSERT_TYPE_ASSERT, "(!s_dbHashRWLockTLSHasWriteLock)", (const char *)&queryFormat, "!s_dbHashRWLockTLSHasWriteLock") )
    __debugbreak();
  if ( *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 720i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 547, ASSERT_TYPE_ASSERT, "(s_dbHashRWLockTLSReadCount == 0)", (const char *)&queryFormat, "s_dbHashRWLockTLSReadCount == 0") )
    __debugbreak();
  *(_BYTE *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 716i64) = 1;
  Sys_CheckAcquireLock(&s_dbHashRWLock);
  AcquireSRWLockExclusive((PSRWLOCK)&s_dbHashRWLock);
  s_dbHashRWLock.writeThreadId = Sys_GetCurrentThreadId();
  if ( !s_dbHashRWLock.writeThreadId )
  {
    v0 = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 177, ASSERT_TYPE_ASSERT, "( lock->writeThreadId ) != ( INVALID_THREAD_ID )", "%s != %s\n\t%i, %i", "lock->writeThreadId", "INVALID_THREAD_ID", v0, 0i64) )
      __debugbreak();
  }
}

/*
==============
DB_LockPendingZoneRead
==============
*/
__int64 DB_LockPendingZoneRead()
{
  __int64 result; 

  Sys_CheckAcquireLock(&s_assetManager.pendingZoneLock);
  AcquireSRWLockShared((PSRWLOCK)&s_assetManager.pendingZoneLock);
  if ( *(_BYTE *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 718i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 586, ASSERT_TYPE_ASSERT, "(!s_hasPendingZoneLockRead)", (const char *)&queryFormat, "!s_hasPendingZoneLockRead") )
    __debugbreak();
  result = tls_index;
  *(_BYTE *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 718i64) = 1;
  return result;
}

/*
==============
DB_LockPendingZoneWrite
==============
*/
char DB_LockPendingZoneWrite()
{
  threadId_t CurrentThreadId; 
  int v2; 

  Sys_CheckAcquireLock(&s_assetManager.pendingZoneLock);
  AcquireSRWLockExclusive((PSRWLOCK)&s_assetManager.pendingZoneLock);
  CurrentThreadId = Sys_GetCurrentThreadId();
  s_assetManager.pendingZoneLock.writeThreadId = CurrentThreadId;
  if ( !CurrentThreadId )
  {
    v2 = 0;
    LOBYTE(CurrentThreadId) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 177, ASSERT_TYPE_ASSERT, "( lock->writeThreadId ) != ( INVALID_THREAD_ID )", "%s != %s\n\t%i, %i", "lock->writeThreadId", "INVALID_THREAD_ID", v2, 0i64);
    if ( (_BYTE)CurrentThreadId )
      __debugbreak();
  }
  return CurrentThreadId;
}

/*
==============
DB_LockTableForRead
==============
*/

void DB_LockTableForRead(void)
{
  DB_LockHashRead();
}

/*
==============
DB_LogMissingAsset
==============
*/
void DB_LogMissingAsset(const XAssetType type, const char *const name, DB_AssetEntry *const assetEntry, const bool wait, const int waitTime)
{
  __int64 v5; 
  char v9; 
  __int16 v10; 
  const dvar_t *v11; 
  const char *v12; 
  fileHandle_t *handle; 
  int v14; 
  const char *ExtensionSubString; 
  bool v16; 
  const dvar_t *v17; 
  const dvar_t *v18; 
  bool enabled; 
  const char *XAssetTypeName; 
  const dvar_t *v21; 
  const char *v22; 
  const char *v23; 
  __int64 v24; 
  __int64 v25; 

  v5 = type;
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 1915, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  if ( wait && waitTime > 100 )
  {
    v9 = 1;
    if ( (unsigned int)v5 >= 0x71 )
    {
      LODWORD(v24) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v24, 113) )
        __debugbreak();
    }
    Com_PrintError(1, "Waited %d msec for missing asset \"%s\", of type \"%s\".\n", (unsigned int)waitTime, name, g_assetNames[v5]);
  }
  else
  {
    v9 = 0;
  }
  if ( assetEntry )
  {
    v10 = *((_WORD *)assetEntry + 9);
    if ( (v10 & 0x800) != 0 )
      return;
    *((_WORD *)assetEntry + 9) = v10 | 0x800;
  }
  else if ( !DB_LogMissingAsset_CheckPrintNullEntry((const XAssetType)v5, name) )
  {
    return;
  }
  v11 = DCONST_DVARINT_developer;
  if ( !DCONST_DVARINT_developer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "developer") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v11->current.integer )
  {
    Sys_EnterCriticalSection(CRITSECT_MISSING_ASSET);
    if ( s_missingAssetFile.handle.handle == -1 )
    {
      handle = FS_FOpenTextFileWrite((fileHandle_t *)&stru_143EE5C40, v12);
      s_missingAssetFile.handle.handle = (__int64)handle;
LABEL_25:
      if ( handle == (fileHandle_t *)-1i64 )
      {
        com_missingAssetOpenFailed = 1;
LABEL_32:
        Sys_LeaveCriticalSection(CRITSECT_MISSING_ASSET);
        goto LABEL_33;
      }
    }
    else
    {
      v14 = 0;
      while ( 1 )
      {
        handle = FS_FOpenFileAppend((fileHandle_t *)&stru_143EE5C40, v12);
        s_missingAssetFile.handle.handle = (__int64)handle;
        if ( handle != (fileHandle_t *)-1i64 )
          break;
        Sys_Sleep(1);
        if ( ++v14 >= 10 )
        {
          handle = (fileHandle_t *)s_missingAssetFile.handle.handle;
          goto LABEL_25;
        }
      }
    }
    if ( (unsigned int)v5 >= 0x71 )
    {
      LODWORD(v25) = 113;
      LODWORD(v24) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v24, v25) )
        __debugbreak();
      handle = (fileHandle_t *)s_missingAssetFile.handle.handle;
    }
    FS_Printf((fileHandle_t)handle, "%s,%s\n", g_assetNames[v5], name);
    FS_FCloseFile(s_missingAssetFile);
    goto LABEL_32;
  }
LABEL_33:
  if ( (unsigned int)v5 >= 0x71 )
  {
    LODWORD(v25) = 113;
    LODWORD(v24) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v24, v25) )
      __debugbreak();
  }
  Com_Printf(0, "Missing asset: %s,%s\n", g_assetNames[v5], name);
  if ( (_DWORD)v5 == 37 )
  {
    v17 = DCONST_DVARBOOL_loc_warnings;
    if ( !DCONST_DVARBOOL_loc_warnings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "loc_warnings") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    if ( v17->current.enabled )
    {
      v18 = DCONST_DVARBOOL_loc_warningsAsErrors;
      if ( !DCONST_DVARBOOL_loc_warningsAsErrors && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "loc_warningsAsErrors") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v18);
      enabled = v18->current.enabled;
      XAssetTypeName = DB_GetXAssetTypeName(37);
      if ( enabled )
        Com_PrintError(1, "Could not load %s \"%s\".\n", XAssetTypeName, name);
      else
        Com_PrintWarning(10, "Could not load %s \"%s\".\n", XAssetTypeName, name);
    }
    goto LABEL_43;
  }
  if ( (_DWORD)v5 == 47 )
  {
    if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 1810, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
    ExtensionSubString = Com_GetExtensionSubString(name);
    if ( ExtensionSubString && !I_stricmp(ExtensionSubString, ".cfg") )
      goto LABEL_43;
  }
  else if ( (unsigned int)v5 >= 0x71 )
  {
    LODWORD(v25) = 113;
    LODWORD(v24) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v24, v25) )
      __debugbreak();
  }
  Com_PrintError(1, "Could not load %s \"%s\".\n", g_assetNames[v5], name);
LABEL_43:
  if ( Sys_IsMainThread() && LUI_IsOwnerThreadMain() )
    LUI_CoD_PrintCallstack();
  v16 = com_unattendedMode && com_unattendedMode->current.enabled;
  if ( v9 || Com_FrontEnd_IsInFrontEnd() )
    goto LABEL_76;
  v21 = DVARBOOL_db_missing_asset_popups;
  if ( !DVARBOOL_db_missing_asset_popups && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "db_missing_asset_popups") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  if ( v21->current.enabled )
  {
LABEL_76:
    if ( !v16 && !Com_GameStart_IsActive() && !Com_MapLoadErrors_GetFinalizedCount() )
    {
      Com_ClearErrorMessage();
      v22 = DB_GetXAssetTypeName(v5);
      v23 = j_va("Could not load %s \"%s\".\n", v22, name);
      Com_SetLocalizedErrorMessage(v23, "Missing Asset");
    }
  }
}

/*
==============
DB_LogMissingAsset_CheckPrintNullEntry
==============
*/
__int64 DB_LogMissingAsset_CheckPrintNullEntry(const XAssetType type, const char *const name)
{
  ntl::internal::list_node_base *mp_next; 
  unsigned __int8 v5; 
  __int64 v6; 
  const char *v7; 
  int v8; 
  __int64 v9; 
  int v10; 
  int v11; 
  int v12; 
  __int64 v13; 
  ntl::internal::list_node<DB_MissingAsset> *v14; 
  ntl::internal::list_node<DB_MissingAsset> *v15; 
  DB_MissingAsset dest; 

  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 1846, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  Sys_EnterCriticalSection(CRITSECT_MISSING_ASSET);
  mp_next = s_missingAssetPrints.m_listHead.m_sentinel.mp_next;
  v5 = 1;
  while ( 1 )
  {
    if ( mp_next == (ntl::internal::list_node_base *)&s_missingAssetPrints.m_listHead )
    {
      v13 = -1i64;
      do
        ++v13;
      while ( name[v13] );
      if ( (unsigned int)v13 < 0x80 )
      {
        if ( !s_missingAssetPrints.m_freelist.m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
          __debugbreak();
        if ( (ntl::internal::pool_allocator_freelist<152> *)s_missingAssetPrints.m_freelist.m_head.mp_next == &s_missingAssetPrints.m_freelist )
        {
          if ( (ntl::internal::list_head_base<ntl::internal::list_node<DB_MissingAsset> > *)s_missingAssetPrints.m_listHead.m_sentinel.mp_next == &s_missingAssetPrints.m_listHead )
          {
            if ( s_missingAssetPrints.m_listHead.m_sentinel.mp_next != s_missingAssetPrints.m_listHead.m_sentinel.mp_prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 95, ASSERT_TYPE_ASSERT, "( m_sentinel.mp_next == m_sentinel.mp_prev )", (const char *)&queryFormat, "m_sentinel.mp_next == m_sentinel.mp_prev") )
              __debugbreak();
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 137, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
              __debugbreak();
          }
          v14 = (ntl::internal::list_node<DB_MissingAsset> *)s_missingAssetPrints.m_listHead.m_sentinel.mp_next;
          if ( !s_missingAssetPrints.m_listHead.m_sentinel.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 319, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
            __debugbreak();
          ntl::internal::list_head_base<ntl::internal::list_node<DB_MissingAsset>>::remove(&s_missingAssetPrints.m_listHead, v14);
          if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
            __debugbreak();
          v14->mp_prev = (ntl::internal::list_node_base *)s_missingAssetPrints.m_freelist.m_head.mp_next;
          s_missingAssetPrints.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v14;
          if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
            __debugbreak();
          if ( (ntl::internal::pool_allocator_freelist<152> *)s_missingAssetPrints.m_freelist.m_head.mp_next == &s_missingAssetPrints.m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 1871, ASSERT_TYPE_ASSERT, "(!s_missingAssetPrints.get_allocator().empty())", (const char *)&queryFormat, "!s_missingAssetPrints.get_allocator().empty()") )
            __debugbreak();
        }
        dest.type = type;
        Core_strcpy(dest.name, 0x80ui64, name);
        if ( !s_missingAssetPrints.m_freelist.m_head.mp_next )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
            __debugbreak();
          if ( !s_missingAssetPrints.m_freelist.m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
            __debugbreak();
        }
        if ( (ntl::internal::pool_allocator_freelist<152> *)s_missingAssetPrints.m_freelist.m_head.mp_next == &s_missingAssetPrints.m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x98ui64, 0x10ui64) )
          __debugbreak();
        v15 = (ntl::internal::list_node<DB_MissingAsset> *)s_missingAssetPrints.m_freelist.m_head.mp_next;
        s_missingAssetPrints.m_freelist.m_head.mp_next = s_missingAssetPrints.m_freelist.m_head.mp_next->mp_next;
        v15->mp_prev = NULL;
        v15->mp_next = NULL;
        v15->m_data = dest;
        ntl::internal::list_head_base<ntl::internal::list_node<DB_MissingAsset>>::insert_before(&s_missingAssetPrints.m_listHead, (ntl::internal::list_node<DB_MissingAsset> *)&s_missingAssetPrints.m_listHead, v15);
      }
      goto LABEL_61;
    }
    if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    if ( LODWORD(mp_next[9].mp_prev) == type )
      break;
LABEL_25:
    mp_next = mp_next->mp_next;
  }
  v6 = 0x7FFFFFFFi64;
  v7 = name;
  if ( mp_next == (ntl::internal::list_node_base *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
    __debugbreak();
  do
  {
    v8 = (unsigned __int8)v7[(char *)mp_next - name + 16];
    v9 = v6;
    v10 = *(unsigned __int8 *)v7++;
    --v6;
    if ( !v9 )
      break;
    if ( v8 != v10 )
    {
      v11 = v8 + 32;
      if ( (unsigned int)(v8 - 65) > 0x19 )
        v11 = v8;
      v8 = v11;
      v12 = v10 + 32;
      if ( (unsigned int)(v10 - 65) > 0x19 )
        v12 = v10;
      if ( v8 != v12 )
        goto LABEL_25;
    }
  }
  while ( v8 );
  v5 = 0;
LABEL_61:
  Sys_LeaveCriticalSection(CRITSECT_MISSING_ASSET);
  return v5;
}

/*
==============
DB_MarkXAsset
==============
*/
int DB_MarkXAsset(XAssetType type, XAssetHeader header, int postorder)
{
  unsigned int v6; 
  DBMarkStackEntry *v7; 
  DB_AssetEntry *AssetByHeader; 
  unsigned int v9; 
  __int64 v10; 
  int result; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 

  if ( !header.physicsLibrary && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5069, ASSERT_TYPE_ASSERT, "(header.data)", (const char *)&queryFormat, "header.data") )
    __debugbreak();
  if ( (unsigned int)type >= ASSET_TYPE_COUNT )
  {
    LODWORD(v13) = type;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5070, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v13, 113) )
      __debugbreak();
  }
  DB_CheckLockWrite();
  if ( postorder )
  {
    if ( !s_markAssetStackPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5102, ASSERT_TYPE_ASSERT, "(s_markAssetStackPos > 0)", (const char *)&queryFormat, "s_markAssetStackPos > 0") )
      __debugbreak();
    v12 = --s_markAssetStackPos;
    if ( s_markAssetStack[v12].assetHeader.physicsLibrary != header.physicsLibrary && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5104, ASSERT_TYPE_ASSERT, "(s_markAssetStack[s_markAssetStackPos].assetHeader.data == header.data)", (const char *)&queryFormat, "s_markAssetStack[s_markAssetStackPos].assetHeader.data == header.data") )
      __debugbreak();
    if ( !s_markAssetStack[s_markAssetStackPos].assetEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5105, ASSERT_TYPE_ASSERT, "(s_markAssetStack[s_markAssetStackPos].assetEntry)", (const char *)&queryFormat, "s_markAssetStack[s_markAssetStackPos].assetEntry") )
      __debugbreak();
    result = DB_MarkXAssetInternalPop(type, header, s_markAssetStack[s_markAssetStackPos].assetEntry);
    if ( !result )
    {
      s_markAssetStackPos = 0;
      return result;
    }
    return 1;
  }
  v6 = 0;
  if ( s_markAssetStackPos )
  {
    v7 = s_markAssetStack;
    while ( v7->assetHeader.physicsLibrary != header.physicsLibrary )
    {
      ++v6;
      ++v7;
      if ( v6 >= s_markAssetStackPos )
        goto LABEL_12;
    }
    return 1;
  }
LABEL_12:
  AssetByHeader = DB_AssetEntryTable::FindAssetByHeader(&s_assetManager.table, header, type);
  if ( DB_MarkXAssetInternalPush(type, header, AssetByHeader) )
    return 1;
  if ( !AssetByHeader && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5092, ASSERT_TYPE_ASSERT, "(assetEntry)", (const char *)&queryFormat, "assetEntry") )
    __debugbreak();
  v9 = s_markAssetStackPos;
  if ( s_markAssetStackPos >= 0x10 )
  {
    LODWORD(v14) = 16;
    LODWORD(v13) = s_markAssetStackPos;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5093, ASSERT_TYPE_ASSERT, "(unsigned)( s_markAssetStackPos ) < (unsigned)( ( sizeof( *array_counter( s_markAssetStack ) ) + 0 ) )", "s_markAssetStackPos doesn't index ARRAY_COUNT( s_markAssetStack )\n\t%i not in [0, %i)", v13, v14) )
      __debugbreak();
    v9 = s_markAssetStackPos;
  }
  v10 = v9;
  s_markAssetStackPos = v9 + 1;
  s_markAssetStack[v10].assetHeader = header;
  s_markAssetStack[v10].assetEntry = AssetByHeader;
  return 0;
}

/*
==============
DB_MarkXAssetEntry
==============
*/
void DB_MarkXAssetEntry(DB_AssetEntry *assetEntry, const unsigned __int8 inUseMask)
{
  int m_type; 
  XAssetHeader v5; 

  if ( !assetEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 4926, ASSERT_TYPE_ASSERT, "(assetEntry)", (const char *)&queryFormat, "assetEntry") )
    __debugbreak();
  if ( !inUseMask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 4927, ASSERT_TYPE_ASSERT, "(inUseMask)", (const char *)&queryFormat, "inUseMask") )
    __debugbreak();
  if ( marXAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 4929, ASSERT_TYPE_ASSERT, "(marXAsset == nullptr)", (const char *)&queryFormat, "marXAsset == nullptr") )
    __debugbreak();
  if ( s_assetMarkInUseMask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 4930, ASSERT_TYPE_ASSERT, "(s_assetMarkInUseMask == 0)", (const char *)&queryFormat, "s_assetMarkInUseMask == 0") )
    __debugbreak();
  if ( s_markAssetStackPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 4931, ASSERT_TYPE_ASSERT, "(s_markAssetStackPos == 0)", (const char *)&queryFormat, "s_markAssetStackPos == 0") )
    __debugbreak();
  DB_CheckLockWrite();
  m_type = assetEntry->m_type;
  v5.physicsLibrary = (PhysicsLibrary *)assetEntry->m_header;
  marXAsset = (XAsset *)&m_type;
  s_assetMarkInUseMask = inUseMask;
  Mark_XAsset();
  if ( s_markAssetStackPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 4943, ASSERT_TYPE_ASSERT, "(s_markAssetStackPos == 0)", (const char *)&queryFormat, "s_markAssetStackPos == 0") )
    __debugbreak();
  marXAsset = NULL;
  s_assetMarkInUseMask = 0;
}

/*
==============
DB_MarkXAssetInternalPop
==============
*/
__int64 DB_MarkXAssetInternalPop(const XAssetType type, const XAssetHeader header, DB_AssetEntry *const assetEntry)
{
  const char *XAssetTypeName; 
  XAsset *v7; 
  const char *v8; 
  const char *XAssetHeaderName; 
  const char *TypeName; 
  const char *v11; 
  unsigned __int8 v12; 

  if ( !assetEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5035, ASSERT_TYPE_ASSERT, "(assetEntry != nullptr)", (const char *)&queryFormat, "assetEntry != nullptr") )
    __debugbreak();
  if ( assetEntry->m_type != type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5036, ASSERT_TYPE_ASSERT, "(assetEntry->GetType() == type)", (const char *)&queryFormat, "assetEntry->GetType() == type") )
    __debugbreak();
  if ( !s_assetMarkDatabaseReady && (*((_WORD *)assetEntry + 9) & 0x7FF) == 0 )
    return 0i64;
  if ( s_assetMarkInUseMask == 4 && (*((_WORD *)assetEntry + 9) & 0x7FF) == 0 && !DB_AssetTypeHasADefaultAsset((const XAssetType)assetEntry->m_type) )
  {
    XAssetTypeName = DB_GetXAssetTypeName(marXAsset->type);
    v7 = marXAsset;
    v8 = XAssetTypeName;
    if ( !marXAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", (_DWORD)marXAsset + 80, ASSERT_TYPE_ASSERT, "(asset)", (const char *)&queryFormat, "asset") )
      __debugbreak();
    XAssetHeaderName = DB_GetXAssetHeaderName(v7->type, v7->header);
    TypeName = DB_AssetEntry::GetTypeName(assetEntry);
    v11 = DB_GetXAssetHeaderName(assetEntry->m_type, assetEntry->m_header);
    Com_Printf(0, "WARNING: Marking unusable default asset as internally referenced: %s(%s) Parent:%s(%s)\n", v11, TypeName, XAssetHeaderName, v8);
  }
  v12 = s_assetMarkInUseMask;
  if ( ((unsigned __int8)(s_assetMarkInUseMask - 1) & s_assetMarkInUseMask) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentry.h", 52, ASSERT_TYPE_ASSERT, "(IsPowerOf2( flag ))", (const char *)&queryFormat, "IsPowerOf2( flag )") )
    __debugbreak();
  assetEntry->m_inuse |= v12;
  return 1i64;
}

/*
==============
DB_MarkXAssetInternalPush
==============
*/
__int64 DB_MarkXAssetInternalPush(const XAssetType type, const XAssetHeader header, const DB_AssetEntry *const assetEntry)
{
  __int64 v4; 
  const char *v6; 
  DB_AssetEntry *v7; 
  const char *v8; 
  const char *v9; 
  const char *v10; 
  const char *v11; 
  const char *XAssetHeaderName; 
  DB_AssetEntry *Asset; 
  const void *physicsLibrary; 
  const char *ZoneNameFromIndex; 
  __int64 m_type; 
  const char *v18; 
  const char *v19; 
  unsigned __int64 m_nextStashed; 
  __int64 v21; 
  DB_AssetEntry *HeadAssetByHeader; 
  const char *v23; 
  const char *TypeName; 
  const char *v25; 
  bool v26; 
  const char *name; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  const char *v32; 

  v4 = type;
  if ( !assetEntry )
  {
    XAssetHeaderName = DB_GetXAssetHeaderName(type, header);
    Asset = DB_AssetEntryTable::FindAsset(&s_assetManager.table, XAssetHeaderName, (XAssetType)v4);
    if ( Asset )
    {
      do
      {
        physicsLibrary = Asset->m_header.physicsLibrary;
        ZoneNameFromIndex = DB_Zones_GetZoneNameFromIndex(*((_WORD *)Asset + 9) & 0x7FF);
        m_type = Asset->m_type;
        v32 = ZoneNameFromIndex;
        if ( (unsigned int)m_type >= 0x71 )
        {
          LODWORD(v30) = 113;
          LODWORD(v28) = Asset->m_type;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v28, v30) )
            __debugbreak();
        }
        v18 = g_assetNames[m_type];
        v19 = DB_GetXAssetHeaderName(Asset->m_type, Asset->m_header);
        Com_Printf(0, "%s(%s) %s %p\n", v19, v18, v32, physicsLibrary);
        m_nextStashed = Asset->m_nextStashed;
        if ( !(_DWORD)m_nextStashed )
          break;
        v21 = (unsigned int)m_nextStashed;
        if ( m_nextStashed >= 0x5DA00 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 358, ASSERT_TYPE_ASSERT, "( index < m_data.size() )", (const char *)&queryFormat, "index < m_data.size()") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
            __debugbreak();
        }
        Asset = (DB_AssetEntry *)((char *)&s_assetManager + 20 * v21);
      }
      while ( Asset );
      HeadAssetByHeader = DB_AssetEntryTable::FindHeadAssetByHeader(&s_assetManager.table, marXAsset->header, marXAsset->type);
      if ( !HeadAssetByHeader && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5016, ASSERT_TYPE_ASSERT, "(findByNameEntry)", (const char *)&queryFormat, "findByNameEntry") )
        __debugbreak();
      v23 = DB_Zones_GetZoneNameFromIndex(*((_WORD *)HeadAssetByHeader + 9) & 0x7FF);
      TypeName = DB_AssetEntry::GetTypeName(HeadAssetByHeader);
      v25 = DB_GetXAssetHeaderName(HeadAssetByHeader->m_type, HeadAssetByHeader->m_header);
      Com_Printf(0, "Mark Asset: %s(%s) %s\n", v25, TypeName, v23);
      v26 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5019, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Could not find asset by data pointer (%p). But it does exist in the table", header.physicsLibrary);
    }
    else
    {
      if ( (unsigned int)v4 >= 0x71 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 62, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v4, 113) )
          __debugbreak();
        LODWORD(v31) = 113;
        LODWORD(v29) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 20, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v29, v31) )
          __debugbreak();
      }
      if ( !g_assetNameFieldValid[v4] )
      {
        if ( (unsigned int)v4 >= 0x71 )
        {
          LODWORD(v30) = 113;
          LODWORD(v28) = v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v28, v30) )
            __debugbreak();
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 63, ASSERT_TYPE_ASSERT, "(DB_XAssetTypeHasName( type ))", "%s\n\tDB_GetXAssetHeaderName %s, 0x%p", "DB_XAssetTypeHasName( type )", g_assetNames[v4], header.physicsLibrary) )
          __debugbreak();
      }
      if ( !header.physicsLibrary )
      {
        if ( (unsigned int)v4 >= 0x71 )
        {
          LODWORD(v30) = 113;
          LODWORD(v28) = v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v28, v30) )
            __debugbreak();
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 65, ASSERT_TYPE_ASSERT, "(header.data)", "%s\n\tDB_GetXAssetHeaderName %s, nullptr", "header.data", g_assetNames[v4]) )
          __debugbreak();
      }
      name = header.physicsLibrary->name;
      if ( (unsigned int)v4 >= 0x71 )
      {
        LODWORD(v30) = 113;
        LODWORD(v28) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v28, v30) )
          __debugbreak();
      }
      v26 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5023, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Could not find asset. type: %s, name: '%s'", g_assetNames[v4], name);
    }
    if ( v26 )
      __debugbreak();
    return 1i64;
  }
  if ( assetEntry->m_type != type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 4954, ASSERT_TYPE_ASSERT, "(assetEntry->GetType() == type)", (const char *)&queryFormat, "assetEntry->GetType() == type") )
    __debugbreak();
  if ( (*((_WORD *)assetEntry + 9) & 0x7FF) == 0 )
  {
    if ( DB_IsTransientAssetKeepDefaultEntry(assetEntry) )
      return 1i64;
    if ( (*((_WORD *)assetEntry + 9) & 0x7FF) == 0 )
      goto LABEL_60;
  }
  if ( s_assetManager.forceStubbedDataLoading && !s_assetManager.forceStubbedDataLoaded )
  {
LABEL_60:
    if ( !DB_IsForcedStubbedKeepDefaultEntry(assetEntry) )
      goto LABEL_11;
    return 1i64;
  }
LABEL_11:
  if ( DB_AssetEntry::TestInUse((DB_AssetEntry *)assetEntry, s_assetMarkInUseMask) )
    return 1i64;
  if ( !DB_AssetEntryTable::FindHeadAssetByHeader(&s_assetManager.table, header, (XAssetType)v4) && DB_VerbosePrint() )
  {
    v6 = DB_GetXAssetHeaderName(v4, header);
    v7 = DB_AssetEntryTable::FindAsset(&s_assetManager.table, v6, (XAssetType)v4);
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 4987, ASSERT_TYPE_ASSERT, "(headAsset)", (const char *)&queryFormat, "headAsset") )
      __debugbreak();
    v8 = DB_Zones_GetZoneNameFromIndex(*((_WORD *)v7 + 9) & 0x7FF);
    v9 = DB_Zones_GetZoneNameFromIndex(*((_WORD *)assetEntry + 9) & 0x7FF);
    v10 = DB_AssetEntry::GetTypeName((DB_AssetEntry *)assetEntry);
    v11 = DB_GetXAssetHeaderName(assetEntry->m_type, assetEntry->m_header);
    Com_Printf(0, "DB: Mark Asset: %s(%s) %s - asset is stashed. Head in %s\n", v11, v10, v9, v8);
  }
  return 0i64;
}

/*
==============
DB_MaterialDump_f
==============
*/
void DB_MaterialDump_f(void)
{
  DB_LockHashRead();
  DB_DebugDump_DumpMaterials();
  DB_UnlockHashRead();
}

/*
==============
DB_MoveReplaceAsset
==============
*/
void DB_MoveReplaceAsset(DB_AssetEntry *const fromAssetEntry, DB_AssetEntry *const toAssetEntry)
{
  const char *XAssetHeaderName; 
  const char *v5; 
  unsigned __int64 AssetEntryIndex; 
  unsigned __int64 v7; 
  unsigned int v8; 
  unsigned __int64 v9; 
  TransientGroupFlags *transientFlags; 
  int v11; 
  int v12; 
  char v13; 
  volatile unsigned __int8 m_inuse; 
  volatile unsigned __int8 v15; 
  volatile unsigned __int8 v16; 

  if ( !fromAssetEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3854, ASSERT_TYPE_ASSERT, "(fromAssetEntry)", (const char *)&queryFormat, "fromAssetEntry") )
    __debugbreak();
  if ( !toAssetEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3855, ASSERT_TYPE_ASSERT, "(toAssetEntry)", (const char *)&queryFormat, "toAssetEntry") )
    __debugbreak();
  if ( fromAssetEntry == toAssetEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3856, ASSERT_TYPE_ASSERT, "(fromAssetEntry != toAssetEntry)", (const char *)&queryFormat, "fromAssetEntry != toAssetEntry") )
    __debugbreak();
  if ( toAssetEntry->m_type != fromAssetEntry->m_type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3857, ASSERT_TYPE_ASSERT, "(toAssetEntry->GetType() == fromAssetEntry->GetType())", (const char *)&queryFormat, "toAssetEntry->GetType() == fromAssetEntry->GetType()") )
    __debugbreak();
  XAssetHeaderName = DB_GetXAssetHeaderName(fromAssetEntry->m_type, fromAssetEntry->m_header);
  v5 = DB_GetXAssetHeaderName(toAssetEntry->m_type, toAssetEntry->m_header);
  if ( I_strncmp(v5, XAssetHeaderName, 0x7FFFFFFFui64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3858, ASSERT_TYPE_ASSERT, "(I_strcmp( toAssetEntry->GetName(), fromAssetEntry->GetName() ) == 0)", (const char *)&queryFormat, "I_strcmp( toAssetEntry->GetName(), fromAssetEntry->GetName() ) == 0") )
    __debugbreak();
  AssetEntryIndex = DB_GetAssetEntryIndex(toAssetEntry);
  if ( AssetEntryIndex >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  if ( ((0x8000000000000000ui64 >> (AssetEntryIndex & 0x3F)) & s_assetManager.table.m_headEntries.m_flags.m_data[AssetEntryIndex >> 6]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3859, ASSERT_TYPE_ASSERT, "(s_assetManager.table.GetUsedFlagsHeadOnly().Test( DB_GetAssetEntryIndex( *toAssetEntry ) ))", (const char *)&queryFormat, "s_assetManager.table.GetUsedFlagsHeadOnly().Test( DB_GetAssetEntryIndex( *toAssetEntry ) )") )
    __debugbreak();
  DB_CheckLockWrite();
  v7 = DB_GetAssetEntryIndex(fromAssetEntry);
  if ( v7 >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  if ( ((0x8000000000000000ui64 >> (v7 & 0x3F)) & s_assetManager.transientOverrides.m_flags.m_data[v7 >> 6]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 1111, ASSERT_TYPE_ASSERT, "(!s_assetManager.transientOverrides.Test( fromAssetIndex ))", (const char *)&queryFormat, "!s_assetManager.transientOverrides.Test( fromAssetIndex )") )
    __debugbreak();
  v8 = 0;
  v9 = DB_GetAssetEntryIndex(fromAssetEntry);
  transientFlags = s_assetManager.transientFlags;
  while ( 1 )
  {
    if ( v9 >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
      __debugbreak();
    if ( ((0x8000000000000000ui64 >> (v9 & 0x3F)) & transientFlags->headAssets.m_flags.m_data[v9 >> 6]) != 0 )
      break;
    ++v8;
    ++transientFlags;
    if ( v8 >= 3 )
      goto LABEL_37;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 1112, ASSERT_TYPE_ASSERT, "(!DB_IsTransientAssetHeadEntry( fromAssetEntry ))", (const char *)&queryFormat, "!DB_IsTransientAssetHeadEntry( fromAssetEntry )") )
    __debugbreak();
LABEL_37:
  if ( DB_Zones_IsTransientOrTransientPreloadZoneIndex(*((_WORD *)fromAssetEntry + 9) & 0x7FF) )
    DB_TransientUnloadHeadAsset(toAssetEntry);
  v11 = *((_WORD *)toAssetEntry + 9) & 0x7FF;
  v12 = *((_WORD *)fromAssetEntry + 9) & 0x7FF;
  if ( (*((_WORD *)fromAssetEntry + 9) & 0x7FF) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3870, ASSERT_TYPE_ASSERT, "(fromZoneIndex != DEFAULT_ZONE_INDEX)", (const char *)&queryFormat, "fromZoneIndex != DEFAULT_ZONE_INDEX") )
    __debugbreak();
  DB_AssetEntry::SetZoneIndex(toAssetEntry, v12);
  DB_AssetEntry::SetZoneIndex(fromAssetEntry, v11);
  v13 = fromAssetEntry->m_inuse >> 3;
  DB_MoveXAsset(fromAssetEntry->m_header, toAssetEntry->m_header, (XAssetType)fromAssetEntry->m_type, (DB_ReleaseType)((toAssetEntry->m_inuse & 8) == 0));
  fromAssetEntry->m_inuse &= ~8u;
  m_inuse = toAssetEntry->m_inuse;
  if ( (v13 & 1) != 0 )
    v15 = m_inuse | 8;
  else
    v15 = m_inuse & 0xF7;
  toAssetEntry->m_inuse = v15;
  if ( DB_AssetUsage_TestMyChangesDefault(fromAssetEntry) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3890, ASSERT_TYPE_ASSERT, "(!DB_AssetUsage_TestMyChangesDefault( fromAssetEntry ))", (const char *)&queryFormat, "!DB_AssetUsage_TestMyChangesDefault( fromAssetEntry )") )
    __debugbreak();
  if ( DB_AssetUsage_TestMyChangesDefault(toAssetEntry) )
  {
    DB_AssetUsage_ResetMyChangesDefault(toAssetEntry);
    DB_AssetUsage_SetMyChangesDefault(fromAssetEntry);
  }
  if ( (toAssetEntry->m_inuse & 1) != 0 )
  {
    toAssetEntry->m_inuse |= 2u;
    v16 = toAssetEntry->m_inuse & 0xFE;
    s_assetMarkDatabaseReady = 1;
    toAssetEntry->m_inuse = v16;
    DB_MarkXAssetEntry(toAssetEntry, 1u);
    toAssetEntry->m_inuse &= ~2u;
  }
  DB_CheckLockWrite();
  DB_RemoveAndFreeAssetEntryChecks(fromAssetEntry);
  DB_AssetEntryTable::RemoveStashedAsset(&s_assetManager.table, fromAssetEntry, toAssetEntry);
  DB_AssetEntryPool::Free(&s_assetManager.table.m_pool, fromAssetEntry);
}

/*
==============
DB_PauseLoadFastfiles
==============
*/
void DB_PauseLoadFastfiles(const DB_FastfileInfo *zoneInfo, unsigned int zoneCount)
{
  __int64 v2; 
  __int64 v4; 
  unsigned int i; 
  const DB_FastfileInfo *v6; 
  __int64 v7; 
  const char *ZoneNameFromIndex; 
  unsigned int ZoneFlagsFromIndex; 

  v2 = zoneCount;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 8025, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()", -2i64) )
    __debugbreak();
  if ( !zoneInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 8027, ASSERT_TYPE_ASSERT, "(zoneInfo)", (const char *)&queryFormat, "zoneInfo") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_PauseLoadFastfiles");
  DB_LoadTimes_OnPauseOrCancel();
  DB_LockPendingZoneWrite();
  if ( s_dbIsSyncLoading && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 8037, ASSERT_TYPE_ASSERT, "(!s_dbIsSyncLoading)", (const char *)&queryFormat, "!s_dbIsSyncLoading") )
    __debugbreak();
  DB_PendingZones_Pause(zoneInfo, v2);
  v4 = 0i64;
  if ( (_DWORD)v2 )
  {
    while ( !DB_Zones_FastfileInfoMatches(&zoneInfo[v4], s_assetManager.pendingZoneInfo.flags, s_assetManager.pendingZoneInfo.parentZoneName) )
    {
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= (unsigned int)v2 )
        goto LABEL_15;
    }
    s_assetManager.pendingZonePaused = 1;
  }
LABEL_15:
  for ( i = 0; i < 0x7A4; ++i )
  {
    if ( DB_CanSetZonePausedOrCancelled(i) && (_DWORD)v2 )
    {
      v6 = zoneInfo;
      v7 = v2;
      do
      {
        ZoneNameFromIndex = DB_Zones_GetZoneNameFromIndex(i);
        ZoneFlagsFromIndex = DB_Zones_GetZoneFlagsFromIndex(i);
        if ( DB_Zones_FastfileInfoMatches(v6, ZoneFlagsFromIndex, ZoneNameFromIndex) )
        {
          DB_SetPausedZoneIndex(i);
          DB_TryRedoAlwaysloadedFlagsForPauseOrCancel(i);
        }
        ++v6;
        --v7;
      }
      while ( v7 );
    }
  }
  s_assetManager.pendingZoneLock.writeThreadId = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&s_assetManager.pendingZoneLock);
  Sys_CheckReleaseLock(&s_assetManager.pendingZoneLock);
  Sys_ProfEndNamedEvent();
}

/*
==============
DB_PendingLoadFinalizePauseAndCancel
==============
*/
void DB_PendingLoadFinalizePauseAndCancel(const char *const zoneName, const int currentZoneLoadIndex)
{
  unsigned __int64 v2; 
  unsigned __int64 v4; 
  unsigned __int64 v5; 
  int LogChannel; 
  int v7; 
  int v8; 

  v2 = currentZoneLoadIndex;
  if ( !zoneName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 7929, ASSERT_TYPE_ASSERT, "(zoneName)", (const char *)&queryFormat, "zoneName") )
    __debugbreak();
  if ( !(_DWORD)v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 7930, ASSERT_TYPE_ASSERT, "(currentZoneLoadIndex != DEFAULT_ZONE_INDEX)", (const char *)&queryFormat, "currentZoneLoadIndex != DEFAULT_ZONE_INDEX") )
    __debugbreak();
  if ( v2 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  v4 = v2 >> 6;
  v5 = 0x8000000000000000ui64 >> (v2 & 0x3F);
  if ( (v5 & s_assetManager.fullyLoadedZones.m_data[v2 >> 6]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 7932, ASSERT_TYPE_ASSERT, "( ( !s_assetManager.fullyLoadedZones.test( currentZoneLoadIndex ) ) )", "( zoneName ) = %s", zoneName) )
    __debugbreak();
  if ( (unsigned int)v2 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  if ( (v5 & s_assetManager.thisLoadPassZones.m_data[v4]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 7933, ASSERT_TYPE_ASSERT, "( ( s_assetManager.thisLoadPassZones.test( currentZoneLoadIndex ) ) )", "( zoneName ) = %s", zoneName) )
    __debugbreak();
  LogChannel = DB_GetLogChannel();
  Com_Printf(LogChannel, "DB_PendingLoadFinalizePauseAndCancel: '%s'\n", zoneName);
  if ( s_assetManager.pendingZoneCancelled )
  {
    v7 = DB_GetLogChannel();
    Com_Printf(v7, "DB_PendingLoadFinalizePauseAndCancel: '%s' current is cancelled\n", zoneName);
    if ( s_dbIsSyncLoading && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 7941, ASSERT_TYPE_ASSERT, "(!s_dbIsSyncLoading)", (const char *)&queryFormat, "!s_dbIsSyncLoading") )
      __debugbreak();
    DB_SetCancelledZoneIndex(v2);
  }
  else if ( s_assetManager.pendingZonePaused )
  {
    v8 = DB_GetLogChannel();
    Com_Printf(v8, "DB_PendingLoadFinalizePauseAndCancel: '%s' current is paused\n", zoneName);
    if ( s_dbIsSyncLoading && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 7948, ASSERT_TYPE_ASSERT, "(!s_dbIsSyncLoading)", (const char *)&queryFormat, "!s_dbIsSyncLoading") )
      __debugbreak();
    DB_SetPausedZoneIndex(v2);
  }
  else
  {
    if ( (unsigned int)v2 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
      __debugbreak();
    if ( (v5 & s_assetManager.pausedZones.m_data[v4]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 7953, ASSERT_TYPE_ASSERT, "( ( !s_assetManager.pausedZones.test( currentZoneLoadIndex ) ) )", "( zoneName ) = %s", zoneName) )
      __debugbreak();
    if ( (unsigned int)v2 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
      __debugbreak();
    if ( (v5 & s_assetManager.cancelledZones.m_data[v4]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 7954, ASSERT_TYPE_ASSERT, "( ( !s_assetManager.cancelledZones.test( currentZoneLoadIndex ) ) )", "( zoneName ) = %s", zoneName) )
      __debugbreak();
  }
}

/*
==============
DB_PerformFullMaterialModelSort
==============
*/
_BOOL8 DB_PerformFullMaterialModelSort()
{
  const dvar_t *v0; 

  if ( rgp.gameSortedStaticModels || g_usedDebugZone )
    return 1i64;
  v0 = DCONST_DVARBOOL_g_drawDefaultStaticModels;
  if ( !DCONST_DVARBOOL_g_drawDefaultStaticModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_drawDefaultStaticModels") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.enabled;
}

/*
==============
DB_PollFastfileState
==============
*/
__int64 DB_PollFastfileState(const char *zoneName)
{
  char v2; 
  const char *v3; 
  __int64 v4; 
  char v5; 
  unsigned int v6; 
  int v8; 
  unsigned int v9; 
  int ZoneIndexFromName; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 
  unsigned __int64 v13; 

  if ( !zoneName )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 8152, ASSERT_TYPE_ASSERT, "(zoneName)", (const char *)&queryFormat, "zoneName") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnamefix.h", 100, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
  }
  v2 = *zoneName;
  v3 = zoneName;
  if ( *zoneName >= 33 )
  {
    v4 = 0x1000000000001001i64;
    while ( 1 )
    {
      v5 = v2;
      if ( (unsigned __int8)(v2 - 65) <= 0x19u || (unsigned __int8)(v2 - 32) <= 0x3Cu && _bittest64(&v4, (char)(v2 - 32)) )
        break;
      if ( v2 == 124 )
        break;
      v2 = *++v3;
      if ( !v2 )
      {
        if ( v5 > 32 )
          goto LABEL_16;
        break;
      }
    }
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 8153, ASSERT_TYPE_ASSERT, "( ( DB_IsAssetNameValid( zoneName ) ) )", "( zoneName ) = %s", zoneName) )
    __debugbreak();
LABEL_16:
  if ( !Sys_IsMainThread() && !Sys_IsMainThreadEntityWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 8142, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread() || Sys_IsMainThreadEntityWorker())", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsMainThreadEntityWorker()") )
    __debugbreak();
  v6 = 0;
  DB_LockPendingZoneRead();
  if ( DB_PendingZones_IsZonePending(zoneName, 1) )
  {
    DB_UnlockPendingZoneRead();
    return 1i64;
  }
  else if ( DB_PendingZones_IsZonePendingPaused(zoneName, 1) )
  {
    DB_UnlockPendingZoneRead();
    return 3i64;
  }
  else if ( I_stricmp(s_assetManager.pendingZoneInfo.parentZoneName, zoneName) )
  {
    ZoneIndexFromName = DB_Zones_GetZoneIndexFromName(zoneName);
    if ( ZoneIndexFromName != 0xFFFF )
    {
      v11 = ZoneIndexFromName;
      if ( (unsigned __int64)ZoneIndexFromName >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
        __debugbreak();
      v12 = 0x8000000000000000ui64 >> (v11 & 0x3F);
      v13 = v11 >> 6;
      if ( (v12 & s_assetManager.cancelledZones.m_data[v13]) != 0 )
      {
        v6 = 4;
      }
      else
      {
        if ( v11 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
          __debugbreak();
        if ( (v12 & s_assetManager.pausedZones.m_data[v13]) != 0 )
        {
          v6 = 3;
        }
        else
        {
          if ( v11 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
            __debugbreak();
          LOBYTE(v6) = (v12 & s_assetManager.fullyLoadedZones.m_data[v13]) != 0;
          ++v6;
        }
      }
    }
    DB_UnlockPendingZoneRead();
    return v6;
  }
  else if ( s_assetManager.pendingZoneCancelled )
  {
    DB_UnlockPendingZoneRead();
    return 4i64;
  }
  else
  {
    v8 = 1;
    if ( s_assetManager.pendingZonePaused )
      v8 = 3;
    v9 = v8;
    DB_UnlockPendingZoneRead();
    return v9;
  }
}

/*
==============
DB_PopFullLevelUnload
==============
*/
void DB_PopFullLevelUnload(void)
{
  if ( !s_dbFullLevelUnload && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 10931, ASSERT_TYPE_ASSERT, "(s_dbFullLevelUnload)", (const char *)&queryFormat, "s_dbFullLevelUnload") )
    __debugbreak();
  s_dbFullLevelUnload = 0;
}

/*
==============
DB_PopMainThreadBlocked
==============
*/
void DB_PopMainThreadBlocked(void)
{
  if ( !s_mainThreadBlocked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 10916, ASSERT_TYPE_ASSERT, "(s_mainThreadBlocked > 0)", (const char *)&queryFormat, "s_mainThreadBlocked > 0") )
    __debugbreak();
  --s_mainThreadBlocked;
}

/*
==============
DB_PopMainThreadWork
==============
*/
bool DB_PopMainThreadWork()
{
  bool result; 

  result = Sys_IsMainThread();
  if ( !result )
  {
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 483, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()");
    if ( result )
      __debugbreak();
  }
  if ( !s_dbIsInMainThreadWork )
  {
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 484, ASSERT_TYPE_ASSERT, "(s_dbIsInMainThreadWork)", (const char *)&queryFormat, "s_dbIsInMainThreadWork");
    if ( result )
      __debugbreak();
  }
  s_dbIsInMainThreadWork = 0;
  return result;
}

/*
==============
DB_PostAddXAsset
==============
*/
void DB_PostAddXAsset(void)
{
  int LogChannel; 

  DB_UnlockHashWrite();
  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 4256, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  if ( s_duplicateAssetWarningValid )
  {
    if ( s_dbHashRWLock.writeThreadId == Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 4263, ASSERT_TYPE_ASSERT, "(s_dbHashRWLock.writeThreadId != Sys_GetCurrentThreadId())", (const char *)&queryFormat, "s_dbHashRWLock.writeThreadId != Sys_GetCurrentThreadId()") )
      __debugbreak();
    LogChannel = DB_GetLogChannel();
    Com_Printf(LogChannel, "^3%s", s_duplicateAssetWarningMsg);
    s_duplicateAssetWarningValid = 0;
  }
}

/*
==============
DB_PostLoadContinueDBWork
==============
*/
void DB_PostLoadContinueDBWork()
{
  XRegistryState v0; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5634, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( s_registryState )
  {
    v0 = s_registryState;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5637, ASSERT_TYPE_ASSERT, "( s_registryState ) == ( REGISTRY_STATE_IDLE )", "%s == %s\n\t%i, %i", "s_registryState", "REGISTRY_STATE_IDLE", v0, 0i64) )
      __debugbreak();
  }
  DB_LockPendingZoneWrite();
  if ( DB_PendingZones_HasPendingZones() )
    DB_UnpauseLoadsInternal(1);
  s_assetManager.pendingZoneLock.writeThreadId = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&s_assetManager.pendingZoneLock);
  Sys_CheckReleaseLock(&s_assetManager.pendingZoneLock);
}

/*
==============
DB_PostLoadHasDeferredAssets
==============
*/
__int64 DB_PostLoadHasDeferredAssets()
{
  unsigned int v0; 
  unsigned int v1; 
  DB_AssetEntryFlags *p_defaultAssets; 
  unsigned __int8 v3; 
  DB_ForEachStashedAssetFunctor<DB_ShouldStashedAssetBeTransferredFunctor> v5; 

  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_PostLoadHasDeferredAssets");
  DB_LockHashRead();
  DB_LockPendingZoneRead();
  v0 = 0;
  v1 = 0;
  p_defaultAssets = &s_assetManager.defaultAssets;
  while ( !DB_AssetEntryPool::ForEachInBlockEarlyExit<DB_ForEachStashedAssetFunctor<DB_ShouldStashedAssetBeTransferredFunctor>>(&s_assetManager.table.m_pool, &s_assetManager.defaultAssets, p_defaultAssets->m_flags.m_data[0], v0, &v5) )
  {
    v0 += 64;
    ++v1;
    p_defaultAssets = (DB_AssetEntryFlags *)((char *)p_defaultAssets + 8);
    if ( v1 >= 0x1768 )
    {
      v3 = 0;
      goto LABEL_6;
    }
  }
  v3 = 1;
LABEL_6:
  DB_UnlockPendingZoneRead();
  DB_UnlockHashRead();
  Sys_ProfEndNamedEvent();
  return v3;
}

/*
==============
DB_PostLoadQueuePausedZones
==============
*/
void DB_PostLoadQueuePausedZones()
{
  AssetManagerGlob *p_attemptedLoads; 
  int ZoneIndexFromName; 
  unsigned __int64 v2; 
  bool v3; 
  unsigned __int64 v4; 
  unsigned __int64 i; 

  DB_LockPendingZoneWrite();
  p_attemptedLoads = (AssetManagerGlob *)&s_assetManager.attemptedLoads;
  if ( &s_assetManager.attemptedLoads != (ntl::fixed_vector<DB_PendingZoneInfo,1956,0> *)((char *)&s_assetManager.attemptedLoads + 144 * s_assetManager.attemptedLoads.m_size) )
  {
    while ( 1 )
    {
      ZoneIndexFromName = DB_Zones_GetZoneIndexFromName(&p_attemptedLoads->table.m_pool.m_pool.m_data.m_buffer[64]);
      v2 = ZoneIndexFromName;
      if ( ZoneIndexFromName == 0xFFFF )
        break;
      if ( !ZoneIndexFromName )
      {
        v3 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5986, ASSERT_TYPE_ASSERT, "(zoneIndex != DEFAULT_ZONE_INDEX)", (const char *)&queryFormat, "zoneIndex != DEFAULT_ZONE_INDEX");
LABEL_6:
        if ( v3 )
          __debugbreak();
      }
      if ( v2 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
        __debugbreak();
      v4 = 0x8000000000000000ui64 >> (v2 & 0x3F);
      if ( (v4 & s_assetManager.thisLoadPassZones.m_data[v2 >> 6]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5988, ASSERT_TYPE_ASSERT, "(s_assetManager.thisLoadPassZones.test( zoneIndex ))", (const char *)&queryFormat, "s_assetManager.thisLoadPassZones.test( zoneIndex )") )
        __debugbreak();
      if ( v2 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
        __debugbreak();
      if ( (v4 & s_assetManager.pausedZones.m_data[v2 >> 6]) != 0 )
        DB_PendingZones_QueuePaused((const DB_PendingZoneInfo *)p_attemptedLoads);
      p_attemptedLoads = (AssetManagerGlob *)((char *)p_attemptedLoads + 144);
      if ( p_attemptedLoads == (AssetManagerGlob *)((char *)&s_assetManager.attemptedLoads + 144 * s_assetManager.attemptedLoads.m_size) )
        goto LABEL_20;
    }
    v3 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5985, ASSERT_TYPE_ASSERT, "(zoneIndex != INVALID_ZONE_INDEX)", (const char *)&queryFormat, "zoneIndex != INVALID_ZONE_INDEX");
    goto LABEL_6;
  }
LABEL_20:
  for ( i = 0i64; i < s_assetManager.attemptedLoads.m_size; ++i )
  {
    if ( i >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
      __debugbreak();
  }
  s_assetManager.attemptedLoads.m_size = 0i64;
  memset_0(&s_assetManager.thisLoadPassZones, 0, sizeof(s_assetManager.thisLoadPassZones));
  s_assetManager.redoAlwaysloadedFlagsForPauseOrCancel = 0;
  s_assetManager.pendingZoneLock.writeThreadId = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&s_assetManager.pendingZoneLock);
  Sys_CheckReleaseLock(&s_assetManager.pendingZoneLock);
}

/*
==============
DB_PostLoadTransientModelFixup
==============
*/
const char *DB_PostLoadTransientModelFixup()
{
  signed int i; 
  unsigned __int64 v1; 
  unsigned __int64 v2; 
  const char *ZoneNameFromIndex; 
  const char *result; 

  for ( i = 1; (unsigned int)i < 0x7A4; ++i )
  {
    if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5652, ASSERT_TYPE_ASSERT, "(zoneIndex != DEFAULT_ZONE_INDEX)", (const char *)&queryFormat, "zoneIndex != DEFAULT_ZONE_INDEX") )
      __debugbreak();
    if ( (unsigned __int64)i >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
      __debugbreak();
    v1 = (unsigned __int64)i >> 6;
    v2 = 0x8000000000000000ui64 >> (i & 0x3F);
    if ( (v2 & s_assetManager.fullyLoadedZones.m_data[v1]) == 0 && (v2 & s_assetManager.assetsLoadedZones.m_data[v1]) != 0 && (v2 & s_assetManager.pausedZones.m_data[v1]) == 0 )
    {
      if ( !DB_Zones_IsValidZoneIndex(i) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5954, ASSERT_TYPE_ASSERT, "(DB_Zones_IsValidZoneIndex( zoneIndex ))", (const char *)&queryFormat, "DB_Zones_IsValidZoneIndex( zoneIndex )") )
        __debugbreak();
      if ( (DB_Zones_GetZoneFlagsFromIndex(i) & 0x82000) == 0 )
      {
        ZoneNameFromIndex = DB_Zones_GetZoneNameFromIndex(i);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5957, ASSERT_TYPE_ASSERT, "( ( ( DB_Zones_GetZoneFlagsFromIndex( zoneIndex ) & DB_MASK_TRANSIENT_MP_XMODEL_ZONES ) ) )", "( DB_Zones_GetZoneNameFromIndex( zoneIndex ) ) = %s", ZoneNameFromIndex) )
          __debugbreak();
      }
      CL_TransientsMP_FixupModelAssets(i);
    }
    result = "zoneIndex != INVALID_ZONE_INDEX";
  }
  return result;
}

/*
==============
DB_PostLoadXZone
==============
*/
void DB_PostLoadXZone(const bool spTransientPostLoad)
{
  unsigned int v2; 
  bool IsDoingTransientOnlyWork; 
  bool v4; 
  unsigned __int8 IsDoingStreamMPOnlyWork; 
  unsigned int v6; 
  bool IsDoingTransientMPXModelOnlyWork; 
  int LogChannel; 
  int v9; 
  bool ShouldStreamableAssetBeTransferred; 
  bool v11; 
  unsigned int v12; 
  DB_AssetEntryFlags *p_defaultAssets; 
  bool v14; 
  const dvar_t *v15; 
  char *fmt; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  TransferDeferredAssetsFunctor v21; 
  unsigned int v22; 
  __int64 v23; 
  unsigned __int8 v24; 
  bool v25; 

  v23 = -2i64;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6041, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( DB_PendingZones_CheckPendingZonesForPostLoad() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6042, ASSERT_TYPE_ASSERT, "(!DB_PendingZones_CheckPendingZonesForPostLoad())", (const char *)&queryFormat, "!DB_PendingZones_CheckPendingZonesForPostLoad()") )
    __debugbreak();
  if ( db_inPostLoadXZone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6043, ASSERT_TYPE_ASSERT, "(!db_inPostLoadXZone)", (const char *)&queryFormat, "!db_inPostLoadXZone") )
    __debugbreak();
  if ( !Sys_IsDatabaseReady() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6044, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseReady())", (const char *)&queryFormat, "Sys_IsDatabaseReady()") )
    __debugbreak();
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 2747, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( (!s_dbLoadingFastfiles || !Sys_IsDatabaseReady()) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6045, ASSERT_TYPE_ASSERT, "(DB_IsReadyForPostLoad())", (const char *)&queryFormat, "DB_IsReadyForPostLoad()") )
    __debugbreak();
  if ( !s_dbLoadingFastfiles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6046, ASSERT_TYPE_ASSERT, "(!DB_AreFastfileLoadsCompleted())", (const char *)&queryFormat, "!DB_AreFastfileLoadsCompleted()") )
    __debugbreak();
  if ( !s_dbLoadingProcessedAssets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6047, ASSERT_TYPE_ASSERT, "(s_dbLoadingProcessedAssets)", (const char *)&queryFormat, "s_dbLoadingProcessedAssets") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_PostLoadXZone");
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6006, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  Stream_AlwaysLoaded_CancelProcessStreamingInfo();
  DB_PushMainThreadWork();
  if ( ((unsigned __int8)&s_registryState & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_registryState) )
    __debugbreak();
  v2 = 0;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)&s_registryState, 1, 0) )
  {
    if ( ((unsigned __int64)&s_registryState & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_registryState) )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6057, ASSERT_TYPE_ASSERT, "( Sys_InterlockedCompareExchange( reinterpret_cast<volatile_int32*>( &s_registryState ), REGISTRY_STATE_MAIN_THREAD, REGISTRY_STATE_IDLE ) ) == ( REGISTRY_STATE_IDLE )", "%s == %s\n\t%i, %i", "Sys_InterlockedCompareExchange( reinterpret_cast<volatile_int32*>( &s_registryState ), REGISTRY_STATE_MAIN_THREAD, REGISTRY_STATE_IDLE )", "REGISTRY_STATE_IDLE", _InterlockedCompareExchange((volatile signed __int32 *)&s_registryState, 1, 0), 0i64) )
      __debugbreak();
  }
  DB_PostLoadQueuePausedZones();
  if ( DB_IsDoingTransientSPOnlyWorkWithServerSync() != spTransientPostLoad )
  {
    LODWORD(v20) = spTransientPostLoad;
    LODWORD(v19) = (unsigned __int8)DB_IsDoingTransientSPOnlyWorkWithServerSync();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6063, ASSERT_TYPE_ASSERT, "( DB_IsDoingTransientSPOnlyWorkWithServerSync() ) == ( spTransientPostLoad )", "%s == %s\n\t%i, %i", "DB_IsDoingTransientSPOnlyWorkWithServerSync()", "spTransientPostLoad", v19, v20) )
      __debugbreak();
  }
  IsDoingTransientOnlyWork = DB_IsDoingTransientOnlyWork();
  if ( (s_dbCurrentWorkFlags & 0xFC700FFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6319, ASSERT_TYPE_ASSERT, "(( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_ZONES ) == 0)", (const char *)&queryFormat, "( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_ZONES ) == 0") )
    __debugbreak();
  v4 = s_dbCurrentWorkFlags != 0;
  v25 = s_dbCurrentWorkFlags != 0;
  IsDoingStreamMPOnlyWork = DB_IsDoingStreamMPOnlyWork();
  v24 = IsDoingStreamMPOnlyWork;
  if ( (s_dbCurrentWorkFlags & 0xFC700FFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6354, ASSERT_TYPE_ASSERT, "(( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_ZONES ) == 0)", (const char *)&queryFormat, "( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_ZONES ) == 0") )
    __debugbreak();
  v6 = s_dbCurrentWorkFlags & 0xC000;
  v22 = v6;
  IsDoingTransientMPXModelOnlyWork = DB_IsDoingTransientMPXModelOnlyWork();
  if ( v6 && !IsDoingStreamMPOnlyWork )
    R_TriggerSunShadowCacheFlush();
  if ( spTransientPostLoad )
  {
    if ( !s_spTransientGameWaitingForPostLoad && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6085, ASSERT_TYPE_ASSERT, "(s_spTransientGameWaitingForPostLoad)", (const char *)&queryFormat, "s_spTransientGameWaitingForPostLoad") )
      __debugbreak();
    s_spTransientGameWaitingForPostLoad = 0;
  }
  else if ( s_spTransientGameWaitingForPostLoad && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6090, ASSERT_TYPE_ASSERT, "(!s_spTransientGameWaitingForPostLoad)", (const char *)&queryFormat, "!s_spTransientGameWaitingForPostLoad") )
  {
    __debugbreak();
  }
  LogChannel = DB_GetLogChannel();
  LODWORD(v19) = IsDoingTransientMPXModelOnlyWork;
  LODWORD(v18) = v6 != 0;
  LODWORD(v17) = IsDoingStreamMPOnlyWork;
  LODWORD(fmt) = v4;
  Com_Printf(LogChannel, "DB_PostLoadXZone (%i, %i, %i, %i, %i, %i)\n", spTransientPostLoad, IsDoingTransientOnlyWork, fmt, v17, v18, v19);
  db_inPostLoadXZone = 1;
  if ( !v25 && !Sys_GetDatabaseStopServer() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6105, ASSERT_TYPE_ASSERT, "(Sys_GetDatabaseStopServer())", "%s\n\tShould have stopped the server if we processed assets", "Sys_GetDatabaseStopServer()") )
    __debugbreak();
  if ( spTransientPostLoad )
    CL_TransientsSP_ClientCodeCheck();
  if ( IsDoingStreamMPOnlyWork || (unsigned __int8)DB_PostLoadHasDeferredAssets() )
  {
    if ( g_loadingDebugZone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6161, ASSERT_TYPE_ASSERT, "(!g_loadingDebugZone)", (const char *)&queryFormat, "!g_loadingDebugZone") )
      __debugbreak();
    if ( s_mainThreadBlocked >= 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 10909, ASSERT_TYPE_ASSERT, "(s_mainThreadBlocked < MAX_DEPTH)", (const char *)&queryFormat, "s_mainThreadBlocked < MAX_DEPTH") )
      __debugbreak();
    ++s_mainThreadBlocked;
    v9 = R_PopRemoteScreenUpdate();
    if ( !s_mainThreadBlocked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 10916, ASSERT_TYPE_ASSERT, "(s_mainThreadBlocked > 0)", (const char *)&queryFormat, "s_mainThreadBlocked > 0") )
      __debugbreak();
    --s_mainThreadBlocked;
    if ( !IsDoingStreamMPOnlyWork )
      DB_ArchiveAssets();
    ShouldStreamableAssetBeTransferred = DB_PostLoad_ShouldStreamableAssetBeTransferred();
    if ( IsDoingTransientOnlyWork )
    {
      if ( ShouldStreamableAssetBeTransferred && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6192, ASSERT_TYPE_ASSERT, "(!DB_PostLoad_ShouldStreamableAssetBeTransferred())", (const char *)&queryFormat, "!DB_PostLoad_ShouldStreamableAssetBeTransferred()") )
        __debugbreak();
      v11 = 0;
    }
    else
    {
      v11 = ShouldStreamableAssetBeTransferred;
      if ( ShouldStreamableAssetBeTransferred )
      {
        if ( Stream_Primer_IsRunning() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6201, ASSERT_TYPE_ASSERT, "(!Stream_Primer_IsRunning())", (const char *)&queryFormat, "!Stream_Primer_IsRunning()") )
          __debugbreak();
        Stream_PushSyncDisable();
        Stream_InvalidateAllSorting();
      }
    }
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_TransferDeferredAssetsToLiveTable");
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_TransferDeferredAssetsToLiveTable");
    DB_LockHashWrite();
    DB_LockPendingZoneRead();
    v12 = 0;
    p_defaultAssets = &s_assetManager.defaultAssets;
    do
    {
      DB_AssetEntryPool::MutableForEachInBlock<TransferDeferredAssetsFunctor>(&s_assetManager.table.m_pool, &s_assetManager.defaultAssets, p_defaultAssets->m_flags.m_data[0], v2, &v21);
      v2 += 64;
      ++v12;
      p_defaultAssets = (DB_AssetEntryFlags *)((char *)p_defaultAssets + 8);
    }
    while ( v12 < 0x1768 );
    DB_UnlockPendingZoneRead();
    DB_UnlockHashWrite();
    Sys_ProfEndNamedEvent();
    Sys_ProfEndNamedEvent();
    v14 = DB_IsDoingTransientOnlyWork();
    Stream_CombineTables_BuildIfStale(v14);
    if ( v11 )
      Stream_PopSyncDisable();
    if ( IsDoingTransientMPXModelOnlyWork )
    {
      Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_PostLoadTransientModelFixup");
      DB_PostLoadTransientModelFixup();
    }
    else
    {
      Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_ModelFixup_TryFixupAssets");
      DB_ModelFixup_TryFullFixup();
    }
    Sys_ProfEndNamedEvent();
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_GfxWorld_Fixup");
    Sys_ProfEndNamedEvent();
    DB_CheckAndExecuteTechsetFixUp(!v25);
    if ( v22 )
    {
      v15 = DCONST_DVARBOOL_db_transientWorldRenderSync;
      if ( !DCONST_DVARBOOL_db_transientWorldRenderSync && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "db_transientWorldRenderSync") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v15);
      if ( v15->current.enabled && !spTransientPostLoad )
        R_SyncRenderThread();
      Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_FixupAllWorldTransientZones");
      DB_FixupAllWorldTransientZones();
      Sys_ProfEndNamedEvent();
    }
    if ( IsDoingTransientOnlyWork )
    {
      Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Material_TransientDirtySort");
      Material_TransientDirtySort();
      Sys_ProfEndNamedEvent();
    }
    if ( !v24 )
    {
      Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_UnarchiveAssets");
      DB_UnarchiveAssets(spTransientPostLoad);
      Sys_ProfEndNamedEvent();
    }
    R_PushRemoteScreenUpdate(v9);
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_PostLoadXZoneComplete");
    DB_PostLoadXZoneComplete(spTransientPostLoad);
    Sys_ProfEndNamedEvent();
  }
  else
  {
    DB_ModelFixup_CheckMissingModelDVar();
    DB_ModelFixup_CheckFixupAll();
    DB_PostLoadXZoneComplete(spTransientPostLoad);
    Stream_CombineTables_BuildIfStale(0);
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
DB_PostLoadXZoneComplete
==============
*/
void DB_PostLoadXZoneComplete(const bool spTransientPostLoad)
{
  signed int i; 
  unsigned __int64 v3; 
  unsigned __int64 v4; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned int v7; 
  __int64 v8; 
  const char *v9; 
  unsigned int v10; 
  __int64 v11; 
  __int64 v12; 
  DB_FastfileInfo zoneInfo; 
  DB_FastfileInfo v14; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5664, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( s_registryState != REGISTRY_STATE_MAIN_THREAD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5667, ASSERT_TYPE_ASSERT, "( s_registryState ) == ( REGISTRY_STATE_MAIN_THREAD )", "%s == %s\n\t%i, %i", "s_registryState", "REGISTRY_STATE_MAIN_THREAD", s_registryState, 1) )
    __debugbreak();
  if ( DB_PendingZones_CheckPendingZonesForPostLoad() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5670, ASSERT_TYPE_ASSERT, "(!DB_PendingZones_CheckPendingZonesForPostLoad())", (const char *)&queryFormat, "!DB_PendingZones_CheckPendingZonesForPostLoad()") )
    __debugbreak();
  if ( !db_inPostLoadXZone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5672, ASSERT_TYPE_ASSERT, "(db_inPostLoadXZone)", (const char *)&queryFormat, "db_inPostLoadXZone") )
    __debugbreak();
  db_inPostLoadXZone = 0;
  if ( !s_dbLoadingProcessedAssets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5675, ASSERT_TYPE_ASSERT, "(s_dbLoadingProcessedAssets)", (const char *)&queryFormat, "s_dbLoadingProcessedAssets") )
    __debugbreak();
  DB_SteadyStateSanityChecks(0);
  s_dbCurrentWorkFlags = 0;
  s_dbReplaceAssets = 0;
  g_dbPreloading = 0;
  DB_LockPendingZoneWrite();
  for ( i = 1; (unsigned int)i < 0x7A4; ++i )
  {
    if ( DB_CheckPostLoadCompletionForZone(i) )
    {
      if ( !DB_Zones_IsValidZoneIndex(i) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5698, ASSERT_TYPE_ASSERT, "(DB_Zones_IsValidZoneIndex( i ))", (const char *)&queryFormat, "DB_Zones_IsValidZoneIndex( i )") )
        __debugbreak();
      if ( (unsigned __int64)i >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 181, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
        __debugbreak();
      v3 = (unsigned __int64)i >> 6;
      v4 = 0x8000000000000000ui64 >> (i & 0x3F);
      s_assetManager.fullyLoadedZones.m_data[v3] |= v4;
      s_assetManager.deferredZones.m_data[v3] &= ~v4;
    }
  }
  s_assetManager.pendingZoneLock.writeThreadId = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&s_assetManager.pendingZoneLock);
  Sys_CheckReleaseLock(&s_assetManager.pendingZoneLock);
  s_dbIsSyncLoading = 0;
  DB_Zones_MarkAllLoadsCompleted();
  if ( DB_Zones_AreZonesWithFlagsLoaded(8u) )
  {
    if ( !s_assetManager.forceStubbedDataLoading && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5713, ASSERT_TYPE_ASSERT, "(s_assetManager.forceStubbedDataLoading)", "%s\n\tStub def zone should be loaded before data zone", "s_assetManager.forceStubbedDataLoading") )
      __debugbreak();
    if ( (DB_Zones_GetInUseFlags() & 2) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5714, ASSERT_TYPE_ASSERT, "(DB_Zones_GetInUseFlags() & FORCED_STUB_DEF_ZONE)", "%s\n\tStub def zone should be loaded before data zone", "DB_Zones_GetInUseFlags() & FORCED_STUB_DEF_ZONE") )
      __debugbreak();
    s_assetManager.forceStubbedDataLoaded = 1;
  }
  else
  {
    s_assetManager.forceStubbedDataLoaded = 0;
  }
  if ( (DB_Zones_GetInUseFlags() & 0x3F00000) == 0 )
    memset_0(&s_assetManager.preloadKeepDefaultAssets, 0, sizeof(s_assetManager.preloadKeepDefaultAssets));
  Sys_ResetDatabaseStopServer();
  if ( !s_dbLoadingFastfiles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5735, ASSERT_TYPE_ASSERT, "(s_dbLoadingFastfiles)", (const char *)&queryFormat, "s_dbLoadingFastfiles") )
    __debugbreak();
  s_dbZoneAllocDone = 0;
  s_dbLoadingFastfiles = 0;
  s_dbLoadingProcessedAssets = 0;
  DB_UpdateBlackboxAssetCounts();
  CL_TransientsWorldMP_PostLoadUpdateAllowWorldLoading();
  CL_TransientsMP_DoOverrideFixups();
  DB_DefaultStringUsageReport("DB_PostLoadXZoneComplete");
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5577, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  DB_ValidateRegistryState();
  v5 = s_dbOptionalLoadErrorFlags;
  v6 = 0;
  if ( s_dbOptionalLoadErrorFlags )
  {
    v7 = 1;
    v8 = 32i64;
    do
    {
      if ( (v7 & v5) != 0 )
      {
        v9 = s_fastfileFailureText;
        if ( !s_fastfileFailureText[0] )
          v9 = NULL;
        Com_FastFile_OptionalLoadError(v7, v9);
        v5 = s_dbOptionalLoadErrorFlags;
        v6 |= v7;
      }
      v7 = __ROL4__(v7, 1);
      --v8;
    }
    while ( v8 );
    if ( v6 != v5 )
    {
      LODWORD(v12) = v5;
      LODWORD(v11) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5608, ASSERT_TYPE_ASSERT, "( zoneFlags ) == ( s_dbOptionalLoadErrorFlags )", "%s == %s\n\t%u, %u", "zoneFlags", "s_dbOptionalLoadErrorFlags", v11, v12) )
        __debugbreak();
    }
  }
  s_dbOptionalLoadErrorFlags = 0;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5545, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  DB_ValidateRegistryState();
  s_fastfileFailureText[0] = 0;
  s_fastfileFailureTextPos = 0;
  s_fastfileFailureTextFlags = 0;
  if ( ((unsigned __int8)&s_registryState & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_registryState) )
    __debugbreak();
  if ( _InterlockedCompareExchange((volatile signed __int32 *)&s_registryState, 0, 1) != 1 )
  {
    if ( ((unsigned __int64)&s_registryState & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_registryState) )
      __debugbreak();
    LODWORD(v12) = 1;
    LODWORD(v11) = _InterlockedCompareExchange((volatile signed __int32 *)&s_registryState, 0, 1);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5755, ASSERT_TYPE_ASSERT, "( Sys_InterlockedCompareExchange( reinterpret_cast<volatile_int32*>( &s_registryState ), REGISTRY_STATE_IDLE, REGISTRY_STATE_MAIN_THREAD ) ) == ( REGISTRY_STATE_MAIN_THREAD )", "%s == %s\n\t%i, %i", "Sys_InterlockedCompareExchange( reinterpret_cast<volatile_int32*>( &s_registryState ), REGISTRY_STATE_IDLE, REGISTRY_STATE_MAIN_THREAD )", "REGISTRY_STATE_MAIN_THREAD", v11, v12) )
      __debugbreak();
  }
  DB_PopMainThreadWork();
  if ( s_dbPreloadingError )
  {
    if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5507, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
      __debugbreak();
    if ( !s_dbPreloadingErrorFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5508, ASSERT_TYPE_ASSERT, "(s_dbPreloadingErrorFlags)", "%s\n\tMissing preload error flags", "s_dbPreloadingErrorFlags") )
      __debugbreak();
    v10 = s_dbPreloadingErrorFlags;
    s_dbPreloadingError = 0;
    s_dbPreloadingErrorFlags = 0;
    if ( (v10 & 0x600000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5515, ASSERT_TYPE_ASSERT, "(errorFlags & DB_MASK_PRELOAD_TRANSITIONS_SP)", (const char *)&queryFormat, "errorFlags & DB_MASK_PRELOAD_TRANSITIONS_SP") )
      __debugbreak();
    if ( com_unattendedMode && com_unattendedMode->current.enabled )
      Com_PrintWarning(1, "Failed to preload '%s'.\nIt is either missing or out of date.", s_dbPreloadingErrorName);
    else
      Com_Error_impl(ERR_SCRIPT, (const ObfuscateErrorText)&stru_143F8F280, 1047i64, s_dbPreloadingErrorName);
    s_dbPreloadingErrorName[0] = 0;
    DB_ReleaseZoneExternalReferences(v10);
    zoneInfo.name = NULL;
    zoneInfo.zoneFlags = v10;
    *(_QWORD *)&zoneInfo.failureMode = 0i64;
    DB_UnloadFastfiles(&zoneInfo, 1u, 0);
    if ( (v10 & 0x100BFE) != 0 )
      CL_Streaming_CheckForTransientReloads();
    SV_PreloadSP_ClearZones();
  }
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5622, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( v6 )
  {
    DB_ReleaseZoneExternalReferences(v6);
    v14.name = NULL;
    v14.zoneFlags = v6;
    *(_QWORD *)&v14.failureMode = 0i64;
    DB_UnloadFastfiles(&v14, 1u, 4u);
    if ( (v6 & 0x100BFE) != 0 )
      CL_Streaming_CheckForTransientReloads();
  }
  if ( s_errorOnPatchedImageMismatch )
  {
    s_errorOnPatchedImageMismatch = 0;
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143F94D00, 1049i64);
  }
  if ( !spTransientPostLoad )
    DB_PostLoadContinueDBWork();
}

/*
==============
DB_PostLoad_ShouldStreamableAssetBeTransferred
==============
*/
__int64 DB_PostLoad_ShouldStreamableAssetBeTransferred()
{
  unsigned int v0; 
  unsigned int v1; 
  DB_AssetEntryFlags *p_defaultAssets; 
  unsigned __int8 v3; 
  DB_ForEachStashedAssetFunctor<DB_ShouldStreamableAssetBeTransferredFunctor> v5; 

  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_PostLoad_ShouldStreamableAssetBeTransferred");
  DB_LockHashRead();
  DB_LockPendingZoneRead();
  v0 = 0;
  v1 = 0;
  p_defaultAssets = &s_assetManager.defaultAssets;
  while ( !DB_AssetEntryPool::ForEachInBlockEarlyExit<DB_ForEachStashedAssetFunctor<DB_ShouldStreamableAssetBeTransferredFunctor>>(&s_assetManager.table.m_pool, &s_assetManager.defaultAssets, p_defaultAssets->m_flags.m_data[0], v0, &v5) )
  {
    v0 += 64;
    ++v1;
    p_defaultAssets = (DB_AssetEntryFlags *)((char *)p_defaultAssets + 8);
    if ( v1 >= 0x1768 )
    {
      v3 = 0;
      goto LABEL_6;
    }
  }
  v3 = 1;
LABEL_6:
  DB_UnlockPendingZoneRead();
  DB_UnlockHashRead();
  Sys_ProfEndNamedEvent();
  return v3;
}

/*
==============
DB_ProcessForcedStubbedAsset
==============
*/
void DB_ProcessForcedStubbedAsset(const XAssetType assetType, const char *assetName, const int zoneIndex, const unsigned int zoneFlags)
{
  __int64 v4; 
  char v5; 
  const DB_AssetEntry *Asset; 
  unsigned __int64 AssetEntryIndex; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  const char *ZoneNameFromIndex; 
  __int64 v13; 
  __int64 v14; 

  v4 = assetType;
  v5 = zoneFlags;
  if ( !assetName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 1291, ASSERT_TYPE_ASSERT, "(assetName)", (const char *)&queryFormat, "assetName") )
    __debugbreak();
  if ( DB_Transients_VerbosePrint() )
  {
    if ( (unsigned int)v4 >= 0x71 )
    {
      LODWORD(v13) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v13, 113) )
        __debugbreak();
    }
    Com_Printf(16, "Creating default asset, for forced stub asset: %s(%s)\n", assetName, g_assetNames[v4]);
  }
  Asset = DB_AssetEntryTable::FindAsset(&s_assetManager.table, assetName, (XAssetType)v4);
  if ( !Asset )
  {
    Asset = DB_CreateDefaultEntry((XAssetType)v4, assetName);
    if ( !Asset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 1303, ASSERT_TYPE_ASSERT, "(assetEntry)", (const char *)&queryFormat, "assetEntry") )
      __debugbreak();
  }
  if ( (v5 & 2) != 0 )
  {
    AssetEntryIndex = DB_GetAssetEntryIndex(Asset);
    if ( AssetEntryIndex >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
      __debugbreak();
    v10 = AssetEntryIndex >> 6;
    v11 = 0x8000000000000000ui64 >> (AssetEntryIndex & 0x3F);
    if ( (v11 & s_assetManager.table.m_headEntries.m_flags.m_data[AssetEntryIndex >> 6]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 701, ASSERT_TYPE_ASSERT, "(s_assetManager.table.GetUsedFlagsHeadOnly().Test( assetIndex ))", (const char *)&queryFormat, "s_assetManager.table.GetUsedFlagsHeadOnly().Test( assetIndex )") )
      __debugbreak();
    if ( AssetEntryIndex >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
      __debugbreak();
    if ( (v11 & s_assetManager.forcedStubbedKeepDefaultAssets.m_flags.m_data[v10]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 702, ASSERT_TYPE_ASSERT, "(!s_assetManager.forcedStubbedKeepDefaultAssets.Test( assetIndex ))", (const char *)&queryFormat, "!s_assetManager.forcedStubbedKeepDefaultAssets.Test( assetIndex )") )
      __debugbreak();
    if ( AssetEntryIndex >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 181, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
      __debugbreak();
    s_assetManager.forcedStubbedKeepDefaultAssets.m_flags.m_data[v10] |= v11;
  }
  else
  {
    DB_UnlockHashWrite();
    ZoneNameFromIndex = DB_Zones_GetZoneNameFromIndex(zoneIndex);
    if ( (unsigned int)v4 >= 0x71 )
    {
      LODWORD(v14) = 113;
      LODWORD(v13) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v13, v14) )
        __debugbreak();
    }
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143F88E10, 1045i64, assetName, g_assetNames[v4], ZoneNameFromIndex);
  }
}

/*
==============
DB_PushFullLevelUnload
==============
*/
void DB_PushFullLevelUnload(void)
{
  if ( s_dbFullLevelUnload && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 10924, ASSERT_TYPE_ASSERT, "(s_dbFullLevelUnload == false)", (const char *)&queryFormat, "s_dbFullLevelUnload == false") )
    __debugbreak();
  s_dbFullLevelUnload = 1;
}

/*
==============
DB_PushMainThreadBlocked
==============
*/
void DB_PushMainThreadBlocked(void)
{
  if ( s_mainThreadBlocked >= 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 10909, ASSERT_TYPE_ASSERT, "(s_mainThreadBlocked < MAX_DEPTH)", (const char *)&queryFormat, "s_mainThreadBlocked < MAX_DEPTH") )
    __debugbreak();
  ++s_mainThreadBlocked;
}

/*
==============
DB_PushMainThreadWork
==============
*/
bool DB_PushMainThreadWork()
{
  bool result; 

  result = Sys_IsMainThread();
  if ( !result )
  {
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 475, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()");
    if ( result )
      __debugbreak();
  }
  if ( s_dbIsInMainThreadWork )
  {
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 476, ASSERT_TYPE_ASSERT, "(!s_dbIsInMainThreadWork)", (const char *)&queryFormat, "!s_dbIsInMainThreadWork");
    if ( result )
      __debugbreak();
  }
  s_dbIsInMainThreadWork = 1;
  return result;
}

/*
==============
DB_RegisterDvars
==============
*/
void DB_RegisterDvars()
{
  Dvar_BeginPermanentRegistration();
  DVARINT_db_fastboot = Dvar_RegisterInt("PRPKNRLS", 0, 0, 2, 0x800u, "Make initial +devmap loads into levels occur faster. Needs to be set at boot-time");
  DVARBOOL_db_devmapskipui = Dvar_RegisterBool("LPKOLMPNNO", 1, 0x800u, "Skip the load of the UI fastfiles when devmapping");
  DVARINT_db_loadSleepTime = Dvar_RegisterInt("MSNSLNKLQ", 0, 0, 16, 4u, "Time to spin in remote screen update wait while loading");
  DCONST_DVARBOOL_db_streamingEnable = Dvar_RegisterBool("db_streamingEnable", 1, 0x40004u, "enable loading of textures (priorities will still be calculated)");
  DVARINT_db_loadDelayReadSpeed = Dvar_RegisterInt("NOKSSQPRPK", 0, 0, 102400, 4u, "Delay loading: Specify target read speed, in kbytes per second. ( 0 = off )");
  DVARINT_db_loadDelaySeekTime = Dvar_RegisterInt("LMOTPRTNO", 0, 0, 1000, 4u, "Delay loading: Specify target seek time, in milliseconds. ( 0 = off )");
  DVARBOOL_db_verbosePreload = Dvar_RegisterBool("NMTTKOTRQR", 0, 0, "Enable verbose preload prints");
  DCONST_DVARBOOL_db_verbose = Dvar_RegisterBool("db_verbose", 0, 0x40004u, "Enable verbose DB prints");
  DCONST_DVARBOOL_db_patchmem = Dvar_RegisterBool("db_patchmem", 1, 0x40004u, "Enable patch memory reclaiming");
  DCONST_DVARBOOL_db_patchmem_preload = Dvar_RegisterBool("db_patchmem_preload", 1, 0x40004u, "Enable patch memory reclaiming for preload fastfiles");
  DCONST_DVARBOOL_db_patchmem_verbose = Dvar_RegisterBool("db_patchmem_verbose", 0, 0x40004u, "Verbose prints for patch reclaiming");
  DVARBOOL_db_errorOnMissingTechsetZones = Dvar_RegisterBool("QLSTMRPTQ", 0, 4u, "When enabled, the game will error when attempting to load a missing techset zone.");
  DVARBOOL_db_discErrorSystemDialog = Dvar_RegisterBool("LOOOMOTSSS", 1, 0, "Display a system error dialog when we ecounter a disc read error");
  DVARBOOL_db_discErrorVerbose = Dvar_RegisterBool("NLKNQNSLTL", 0, 0, "Killswitch for verbose reporting of filesystem errors");
  DVARBOOL_db_resetYieldCountDownAfterYielding = Dvar_RegisterBool("NQPQMKMKS", 1, 0, "Killswitch for for resetting yield countdown after yielding (new) instead of using time before yielding (old)");
  DVARINT_db_memoryLoanDeadline = Dvar_RegisterInt("LNOOQPSKOR", 1000, 0, 10000, 0, "Amount of time to wait (in milliseconds) before forcing the loan to be made available for fastfile loading");
  DVARBOOL_db_logLoadTimes = Dvar_RegisterBool("LTKKOLLRKK", 1, 0, "Log DB load timings to Black Box system");
  DVARBOOL_db_missing_asset_popups = Dvar_RegisterBool("NQSNPKQSOP", 0, 0, "Switch to enable popups whenever a missing asset is requested in the frontend");
  DVARINT_db_maxUsableXModelLods = Dvar_RegisterInt("LNPQKSMSOR", 6, 0, 6, 0, "Maximum lods to allow for use by xmodels. For debugging xmodels that have unstreamed surfaces.");
  DVARBOOL_g_hideMissingXmodels = Dvar_RegisterBool("NLQOSLSMQT", 0, 0, "Hide missing xmodels, instead of drawing a big red FX.");
  DVARBOOL_db_pedantic = Dvar_RegisterBool("MMSRQPONNM", 0, 0, "Perform pedantic checks on the DB, can cause large main thread hitches.");
  DVARBOOL_db_forcelogprints = Dvar_RegisterBool("MPMPPLMQSR", 0, 0, "A number of DB prints don't hit the logfile, on 'logfile 2' runs. This forces them to be logged.");
  DVARBOOL_db_forceUHDImageFlags = Dvar_RegisterBool("MTNRQNONNQ", 0, 0, "Force alwaysloaded image flagging to 'UHD' mode on base consoles. Will likely need LARGE memory enabled.");
  DCONST_DVARBOOL_db_transientWorldRenderSync = Dvar_RegisterBool("db_transientWorldRenderSync", 0, 0x40004u, "Turn this on to add a render sync when loading and unloading world transients in MP");
  DVARBOOL_transients_verbose = Dvar_RegisterBool("MMKKRKRLT", 0, 0, "Verbose logging information for transient fastfiles.");
  DCONST_DVARBOOL_db_forceLowQualityFlags = Dvar_RegisterBool("db_forceLowQualityFlags", 0, 0x40004u, "Force low quality/BR flagging for consoles");
  DCONST_DVARBOOL_db_allowDirectDecompression = Dvar_RegisterBool("db_allowDirectDecompression", 1, 0x40004u, "Allow the DB to decompress directly to destination buffers");
  DCONST_DVARBOOL_db_validateloadhash = Dvar_RegisterBool("db_validateloadhash", 1, 0x40004u, "Validate that the saved hash of resident FF data matches when we load it up ingame");
  DCONST_DVARBOOL_db_deferredGfxTransientWorldZoneRelease = Dvar_RegisterBool("db_deferredGfxTransientWorldZoneRelease", 1, 0x40004u, "Defer unloading of DirectX handles stored in GfxTransientWorldZone");
  DVARBOOL_db_deltaModelFixupEnable = Dvar_RegisterBool("MNSSKOMOKO", 1, 0, "Use xmodel lookup table to only fixup affected xmodels when a xmodelsurf gets replaced.");
  DCONST_DVARBOOL_db_dumpStringUsagedHW = Dvar_RegisterBool("db_dumpStringUsagedHW", 0, 0x40004u, "When enabled, default asset name string usage will get output automatically via MT_DumpTreeToCSV");
  DCONST_DVARBOOL_db_comprehensiveSanityChecks = Dvar_RegisterBool("db_comprehensiveSanityChecks", 1, 0x40004u, "When enabled, does extended checks (at a large CPU cost) in the DB and streamer.");
  Dvar_EndPermanentRegistration();
}

/*
==============
DB_ReleaseAllExternalReferences
==============
*/
void DB_ReleaseAllExternalReferences(bool useRemoteScreenUpdate)
{
  unsigned int v2; 
  DB_AssetEntryFlags *p_m_allocatedFlags; 
  unsigned int i; 
  ReleaseExternalReferencesFunctor v5; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 10099, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( useRemoteScreenUpdate )
    R_BeginRemoteScreenUpdate();
  Sys_SyncDatabase();
  if ( useRemoteScreenUpdate )
    R_EndRemoteScreenUpdate();
  DB_LockHashWrite();
  v2 = 0;
  p_m_allocatedFlags = &s_assetManager.table.m_pool.m_allocatedFlags;
  for ( i = 0; i < 0x1768; ++i )
  {
    DB_AssetEntryPool::MutableForEachInBlock<ReleaseExternalReferencesFunctor>(&s_assetManager.table.m_pool, &s_assetManager.table.m_pool.m_allocatedFlags, p_m_allocatedFlags->m_flags.m_data[0], v2, &v5);
    v2 += 64;
    p_m_allocatedFlags = (DB_AssetEntryFlags *)((char *)p_m_allocatedFlags + 8);
  }
  DB_UnlockHashWrite();
}

/*
==============
DB_ReleaseZoneExternalReferences
==============
*/
void DB_ReleaseZoneExternalReferences(unsigned int zoneFlags)
{
  unsigned int v2; 
  unsigned int v3; 
  DB_AssetEntryFlags *p_m_allocatedFlags; 
  ReleaseZoneExternalRefsFunctor functor; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 10161, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  Sys_SyncDatabase();
  DB_LockHashWrite();
  v2 = 0;
  functor.zoneFlags = zoneFlags;
  v3 = 0;
  p_m_allocatedFlags = &s_assetManager.table.m_pool.m_allocatedFlags;
  do
  {
    DB_AssetEntryPool::MutableForEachInBlock<ReleaseZoneExternalRefsFunctor>(&s_assetManager.table.m_pool, &s_assetManager.table.m_pool.m_allocatedFlags, p_m_allocatedFlags->m_flags.m_data[0], v2, &functor);
    v2 += 64;
    ++v3;
    p_m_allocatedFlags = (DB_AssetEntryFlags *)((char *)p_m_allocatedFlags + 8);
  }
  while ( v3 < 0x1768 );
  DB_UnlockHashWrite();
}

/*
==============
DB_RemoveAndFreeAssetEntryChecks
==============
*/
void DB_RemoveAndFreeAssetEntryChecks(const DB_AssetEntry *assetEntry)
{
  unsigned __int64 AssetEntryIndex; 
  unsigned __int64 v3; 
  unsigned __int64 v4; 
  __int64 m_type; 
  const char *v6; 
  const char *XAssetHeaderName; 
  __int64 v8; 
  const char *v9; 
  const char *v10; 
  unsigned __int64 *v11; 
  __int64 v12; 
  __int64 v13; 
  const char *v14; 
  const char *v15; 
  __int64 v16; 
  const char *v17; 
  const char *v18; 
  __int64 v19; 
  const char *v20; 
  const char *v21; 
  __int64 v22; 
  const char *v23; 
  const char *v24; 
  __int64 v25; 
  __int64 v26; 

  AssetEntryIndex = DB_GetAssetEntryIndex(assetEntry);
  if ( AssetEntryIndex >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  v3 = 0x8000000000000000ui64 >> (AssetEntryIndex & 0x3F);
  v4 = AssetEntryIndex >> 6;
  if ( (v3 & s_assetManager.defaultAssets.m_flags.m_data[v4]) != 0 )
  {
    m_type = assetEntry->m_type;
    if ( (unsigned int)m_type >= 0x71 )
    {
      LODWORD(v25) = assetEntry->m_type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v25, 113) )
        __debugbreak();
    }
    v6 = g_assetNames[m_type];
    XAssetHeaderName = DB_GetXAssetHeaderName(assetEntry->m_type, assetEntry->m_header);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3690, ASSERT_TYPE_ASSERT, "(!s_assetManager.defaultAssets.Test( index ))", "%s\n\t%s(%s)", "!s_assetManager.defaultAssets.Test( index )", XAssetHeaderName, v6) )
      __debugbreak();
  }
  if ( AssetEntryIndex >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  if ( (v3 & s_assetManager.unusableDefaultAssets.m_flags.m_data[v4]) != 0 )
  {
    v8 = assetEntry->m_type;
    if ( (unsigned int)v8 >= 0x71 )
    {
      LODWORD(v26) = 113;
      LODWORD(v25) = assetEntry->m_type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v25, v26) )
        __debugbreak();
    }
    v9 = g_assetNames[v8];
    v10 = DB_GetXAssetHeaderName(assetEntry->m_type, assetEntry->m_header);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3691, ASSERT_TYPE_ASSERT, "(!s_assetManager.unusableDefaultAssets.Test( index ))", "%s\n\t%s(%s)", "!s_assetManager.unusableDefaultAssets.Test( index )", v10, v9) )
      __debugbreak();
  }
  v11 = &s_assetManager.transientFlags[0].keepDefaultAssets.m_flags.m_data[v4];
  v12 = 3i64;
  do
  {
    if ( AssetEntryIndex >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
      __debugbreak();
    if ( (v3 & *(v11 - 5992)) != 0 )
    {
      v13 = assetEntry->m_type;
      if ( (unsigned int)v13 >= 0x71 )
      {
        LODWORD(v26) = 113;
        LODWORD(v25) = assetEntry->m_type;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v25, v26) )
          __debugbreak();
      }
      v14 = g_assetNames[v13];
      v15 = DB_GetXAssetHeaderName(assetEntry->m_type, assetEntry->m_header);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3696, ASSERT_TYPE_ASSERT, "(!s_assetManager.transientFlags[i].headAssets.Test( index ))", "%s\n\t%s(%s)", "!s_assetManager.transientFlags[i].headAssets.Test( index )", v15, v14) )
        __debugbreak();
    }
    if ( AssetEntryIndex >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
      __debugbreak();
    if ( (v3 & *v11) != 0 )
    {
      v16 = assetEntry->m_type;
      if ( (unsigned int)v16 >= 0x71 )
      {
        LODWORD(v26) = 113;
        LODWORD(v25) = assetEntry->m_type;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v25, v26) )
          __debugbreak();
      }
      v17 = g_assetNames[v16];
      v18 = DB_GetXAssetHeaderName(assetEntry->m_type, assetEntry->m_header);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3697, ASSERT_TYPE_ASSERT, "(!s_assetManager.transientFlags[i].keepDefaultAssets.Test( index ))", "%s\n\t%s(%s)", "!s_assetManager.transientFlags[i].keepDefaultAssets.Test( index )", v18, v17) )
        __debugbreak();
    }
    v11 += 11984;
    --v12;
  }
  while ( v12 );
  if ( AssetEntryIndex >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  if ( (v3 & s_assetManager.forcedStubbedKeepDefaultAssets.m_flags.m_data[v4]) != 0 )
  {
    v19 = assetEntry->m_type;
    if ( (unsigned int)v19 >= 0x71 )
    {
      LODWORD(v26) = 113;
      LODWORD(v25) = assetEntry->m_type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v25, v26) )
        __debugbreak();
    }
    v20 = g_assetNames[v19];
    v21 = DB_GetXAssetHeaderName(assetEntry->m_type, assetEntry->m_header);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3702, ASSERT_TYPE_ASSERT, "(!s_assetManager.forcedStubbedKeepDefaultAssets.Test( index ))", "%s\n\t%s(%s)", "!s_assetManager.forcedStubbedKeepDefaultAssets.Test( index )", v21, v20) )
      __debugbreak();
  }
  if ( AssetEntryIndex >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  if ( (v3 & s_assetManager.preloadKeepDefaultAssets.m_flags.m_data[v4]) != 0 )
  {
    v22 = assetEntry->m_type;
    if ( (unsigned int)v22 >= 0x71 )
    {
      LODWORD(v26) = 113;
      LODWORD(v25) = assetEntry->m_type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v25, v26) )
        __debugbreak();
    }
    v23 = g_assetNames[v22];
    v24 = DB_GetXAssetHeaderName(assetEntry->m_type, assetEntry->m_header);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3705, ASSERT_TYPE_ASSERT, "(!s_assetManager.preloadKeepDefaultAssets.Test( index ))", "%s\n\t%s(%s)", "!s_assetManager.preloadKeepDefaultAssets.Test( index )", v24, v23) )
      __debugbreak();
  }
}

/*
==============
DB_ReplaceHeadAssetEntry
==============
*/
void DB_ReplaceHeadAssetEntry(DB_AssetEntry *newEntry, DB_AssetEntry *existingEntry, const bool inPostload)
{
  const char *v5; 
  int v6; 
  const char *v7; 
  const char *XAssetHeaderName; 
  const char *v9; 
  signed __int64 v10; 
  int v11; 
  int v12; 
  const char *v13; 
  int v14; 
  __int64 m_type; 
  int v16; 
  const char *v17; 
  DB_AssetEntry *Asset; 
  __int64 v19; 
  const char *v20; 
  const char *v21; 
  unsigned int ZoneFlagsFromIndex; 
  unsigned int v23; 
  bool v24; 
  unsigned int v25; 
  unsigned __int64 AssetEntryIndex; 
  unsigned __int64 v27; 
  unsigned __int64 v28; 
  unsigned __int64 v29; 
  const char *v30; 
  const char *v31; 
  volatile unsigned __int8 v32; 
  const char *v33; 
  __int64 v34; 

  if ( inPostload )
  {
    if ( Sys_IsMainThread() )
      goto LABEL_8;
    v5 = "Sys_IsMainThread()";
    v6 = 3963;
    v7 = "(Sys_IsMainThread())";
  }
  else
  {
    if ( Sys_IsDatabaseThread() )
      goto LABEL_8;
    v5 = "Sys_IsDatabaseThread()";
    v6 = 3967;
    v7 = "(Sys_IsDatabaseThread())";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", v6, ASSERT_TYPE_ASSERT, v7, (const char *)&queryFormat, v5) )
    __debugbreak();
LABEL_8:
  if ( !newEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3970, ASSERT_TYPE_ASSERT, "(newEntry)", (const char *)&queryFormat, "newEntry") )
    __debugbreak();
  if ( !existingEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3971, ASSERT_TYPE_ASSERT, "(existingEntry)", (const char *)&queryFormat, "existingEntry") )
    __debugbreak();
  if ( newEntry == existingEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3972, ASSERT_TYPE_ASSERT, "(newEntry != existingEntry)", (const char *)&queryFormat, "newEntry != existingEntry") )
    __debugbreak();
  if ( newEntry->m_type != existingEntry->m_type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3973, ASSERT_TYPE_ASSERT, "(newEntry->GetType() == existingEntry->GetType())", (const char *)&queryFormat, "newEntry->GetType() == existingEntry->GetType()") )
    __debugbreak();
  XAssetHeaderName = DB_GetXAssetHeaderName(existingEntry->m_type, existingEntry->m_header);
  v9 = DB_GetXAssetHeaderName(newEntry->m_type, newEntry->m_header);
  v10 = XAssetHeaderName - v9;
  do
  {
    v11 = (unsigned __int8)v9[v10];
    v12 = *(unsigned __int8 *)v9 - v11;
    if ( v12 )
      break;
    ++v9;
  }
  while ( v11 );
  if ( v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3974, ASSERT_TYPE_ASSERT, "(strcmp( newEntry->GetName(), existingEntry->GetName() ) == 0)", (const char *)&queryFormat, "strcmp( newEntry->GetName(), existingEntry->GetName() ) == 0") )
    __debugbreak();
  v13 = DB_GetXAssetHeaderName(newEntry->m_type, newEntry->m_header);
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 87, ASSERT_TYPE_ASSERT, "(assetName)", (const char *)&queryFormat, "assetName") )
    __debugbreak();
  if ( *v13 == 44 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3975, ASSERT_TYPE_ASSERT, "(!DB_IsXAssetNameStub( newEntry->GetName() ))", (const char *)&queryFormat, "!DB_IsXAssetNameStub( newEntry->GetName() )") )
    __debugbreak();
  DB_CheckLockWrite();
  v14 = *((_WORD *)existingEntry + 9) & 0x7FF;
  m_type = newEntry->m_type;
  v16 = *((_WORD *)newEntry + 9) & 0x7FF;
  if ( (*((_WORD *)newEntry + 9) & 0x7FF) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3985, ASSERT_TYPE_ASSERT, "(newAssetZoneIndex != DEFAULT_ZONE_INDEX)", (const char *)&queryFormat, "newAssetZoneIndex != DEFAULT_ZONE_INDEX") )
    __debugbreak();
  if ( v16 == v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3986, ASSERT_TYPE_ASSERT, "(newAssetZoneIndex != existingAssetZoneIndex)", (const char *)&queryFormat, "newAssetZoneIndex != existingAssetZoneIndex") )
    __debugbreak();
  if ( DB_UsePedanticCorruptionChecks() )
  {
    v17 = DB_GetXAssetHeaderName(newEntry->m_type, newEntry->m_header);
    Asset = DB_AssetEntryTable::FindAsset(&s_assetManager.table, v17, (XAssetType)m_type);
    if ( !Asset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3991, ASSERT_TYPE_ASSERT, "(existingEntrySearch)", (const char *)&queryFormat, "existingEntrySearch") )
      __debugbreak();
    if ( Asset != existingEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3992, ASSERT_TYPE_ASSERT, "(existingEntrySearch == existingEntry)", (const char *)&queryFormat, "existingEntrySearch == existingEntry") )
      __debugbreak();
  }
  if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3995, ASSERT_TYPE_ASSERT, "(newAssetZoneIndex != DEFAULT_ZONE_INDEX)", (const char *)&queryFormat, "newAssetZoneIndex != DEFAULT_ZONE_INDEX") )
    __debugbreak();
  if ( (newEntry->m_inuse & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3997, ASSERT_TYPE_ASSERT, "(!newEntry->TestInUse( ASSET_MASK_EXTERNAL_REF_TEMP ))", (const char *)&queryFormat, "!newEntry->TestInUse( ASSET_MASK_EXTERNAL_REF_TEMP )") )
    __debugbreak();
  if ( (existingEntry->m_inuse & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3998, ASSERT_TYPE_ASSERT, "(!existingEntry->TestInUse( ASSET_MASK_EXTERNAL_REF_TEMP ))", (const char *)&queryFormat, "!existingEntry->TestInUse( ASSET_MASK_EXTERNAL_REF_TEMP )") )
    __debugbreak();
  if ( existingEntry->m_header.physicsLibrary == s_assetManager.masterDefaultAssets[m_type].physicsLibrary )
  {
    v19 = existingEntry->m_type;
    if ( (unsigned int)v19 >= 0x71 )
    {
      LODWORD(v34) = existingEntry->m_type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v34, 113) )
        __debugbreak();
    }
    v20 = g_assetNames[v19];
    v21 = DB_GetXAssetHeaderName(existingEntry->m_type, existingEntry->m_header);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3999, ASSERT_TYPE_ASSERT, "(existingEntry->GetAssetHeader().data != s_assetManager.masterDefaultAssets[type].data)", "%s\n\t%s(%s)", "existingEntry->GetAssetHeader().data != s_assetManager.masterDefaultAssets[type].data", v21, v20) )
      __debugbreak();
  }
  DB_AssetEntryTable::MakeFirstStashedEntry(&s_assetManager.table, newEntry, existingEntry);
  if ( s_dbReplaceAssets )
  {
    if ( v14 )
    {
      ZoneFlagsFromIndex = DB_Zones_GetZoneFlagsFromIndex(v16);
      if ( (ZoneFlagsFromIndex & 0x3CFF000) == 0 )
      {
        v23 = DB_Zones_GetZoneFlagsFromIndex(v14);
        if ( ZoneFlagsFromIndex == v23 )
          goto LABEL_72;
        if ( (v23 & 0x100000) != 0 )
        {
          if ( DB_Zones_IsFrontendUIPreloadZoneIndex(v14) )
            goto LABEL_74;
          v24 = (ZoneFlagsFromIndex & 0x3F) == 0;
        }
        else if ( (v23 & 0x200100) != 0 )
        {
          v24 = (ZoneFlagsFromIndex & 0x3F) == 0;
        }
        else
        {
          if ( (v23 & 0x3F) == 0 )
            goto LABEL_74;
          v24 = (ZoneFlagsFromIndex & 1) == 0;
        }
        if ( !v24 )
        {
LABEL_72:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 4008, ASSERT_TYPE_ASSERT, "(!DB_ZoneIndexUnloadsTogether( newAssetZoneIndex, existingAssetZoneIndex ))", (const char *)&queryFormat, "!DB_ZoneIndexUnloadsTogether( newAssetZoneIndex, existingAssetZoneIndex )") )
            __debugbreak();
        }
      }
LABEL_74:
      v25 = s_dbCurrentWorkFlags;
      if ( (s_dbCurrentWorkFlags & 0xFC700FFF) != 0 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6336, ASSERT_TYPE_ASSERT, "(( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_ZONES ) == 0)", (const char *)&queryFormat, "( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_ZONES ) == 0") )
          __debugbreak();
        v25 = s_dbCurrentWorkFlags;
      }
      if ( (v25 & 0xFF000) != 0 && (v25 & 0xFFF00FFF) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 4014, ASSERT_TYPE_ASSERT, "(!DB_IsDoingTransientOnlyWork())", (const char *)&queryFormat, "!DB_IsDoingTransientOnlyWork()") )
        __debugbreak();
      if ( DB_Zones_IsTransientZoneIndex(*((_WORD *)newEntry + 9) & 0x7FF) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 4015, ASSERT_TYPE_ASSERT, "(!DB_Zones_IsTransientZoneIndex( newEntry->GetZoneIndex() ))", (const char *)&queryFormat, "!DB_Zones_IsTransientZoneIndex( newEntry->GetZoneIndex() )") )
        __debugbreak();
      DB_SwapXAsset(newEntry->m_header, existingEntry->m_header, (XAssetType)m_type);
      DB_AssetEntry::SetZoneIndex(newEntry, v14);
      DB_AssetEntry::SetZoneIndex(existingEntry, v16);
      goto LABEL_108;
    }
  }
  else if ( v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 4028, ASSERT_TYPE_ASSERT, "(existingAssetZoneIndex == DEFAULT_ZONE_INDEX)", (const char *)&queryFormat, "existingAssetZoneIndex == DEFAULT_ZONE_INDEX") )
  {
    __debugbreak();
  }
  if ( newEntry->m_nextHash && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 4029, ASSERT_TYPE_ASSERT, "(newEntry->GetNextHashIndex() == 0)", (const char *)&queryFormat, "newEntry->GetNextHashIndex() == 0") )
    __debugbreak();
  AssetEntryIndex = DB_GetAssetEntryIndex(existingEntry);
  if ( AssetEntryIndex >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  v27 = AssetEntryIndex >> 6;
  v28 = 0x8000000000000000ui64 >> (AssetEntryIndex & 0x3F);
  if ( (v28 & s_assetManager.defaultAssets.m_flags.m_data[AssetEntryIndex >> 6]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 4032, ASSERT_TYPE_ASSERT, "(s_assetManager.defaultAssets.Test( assetEntryIndex ))", (const char *)&queryFormat, "s_assetManager.defaultAssets.Test( assetEntryIndex )") )
    __debugbreak();
  if ( AssetEntryIndex >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 209, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  v29 = ~v28;
  s_assetManager.defaultAssets.m_flags.m_data[v27] &= v29;
  if ( AssetEntryIndex >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 209, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  s_assetManager.unusableDefaultAssets.m_flags.m_data[v27] &= v29;
  v30 = DB_GetXAssetHeaderName(existingEntry->m_type, existingEntry->m_header);
  DB_CheckDefaultAssetName(v30);
  DB_MoveReplaceAsset(newEntry, existingEntry);
  if ( DB_GetXAssetHeaderName(existingEntry->m_type, existingEntry->m_header) == v30 )
  {
    v31 = DB_GetXAssetHeaderName(existingEntry->m_type, existingEntry->m_header);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 4042, ASSERT_TYPE_ASSERT, "( existingEntry->GetName() ) != ( assetName )", "%s != %s\n\t%p, %p", "existingEntry->GetName()", "assetName", v31, v30) )
      __debugbreak();
  }
  DB_FreeDefaultAssetName(v30);
LABEL_108:
  if ( (s_dbCurrentWorkFlags & 0xFC700FFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6319, ASSERT_TYPE_ASSERT, "(( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_ZONES ) == 0)", (const char *)&queryFormat, "( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_ZONES ) == 0") )
    __debugbreak();
  if ( !s_dbCurrentWorkFlags && (existingEntry->m_inuse & 1) != 0 )
  {
    existingEntry->m_inuse |= 2u;
    v32 = existingEntry->m_inuse & 0xFE;
    s_assetMarkDatabaseReady = 1;
    existingEntry->m_inuse = v32;
    DB_MarkXAssetEntry(existingEntry, 1u);
    existingEntry->m_inuse &= ~2u;
  }
  switch ( (_BYTE)m_type )
  {
    case 8:
      DB_ModelFixup_SetDirtyFixup();
      DB_MarkXModelSurfsForFixup(existingEntry->m_header.modelSurfs);
      break;
    case 0xD:
      s_techniqueSetsNeedFixup = 1;
      break;
    case 0xB:
      v33 = DB_GetXAssetHeaderName(existingEntry->m_type, existingEntry->m_header);
      Com_Printf(16, "Fixup stub material %s\n", v33);
      ++rgp.patchedMaterialCount;
      break;
  }
}

/*
==============
DB_ReplaceModel
==============
*/
void DB_ReplaceModel(const char *from, const char *to)
{
  XAssetHeader v4; 
  const char **p_name; 
  const char *v6; 
  XAssetHeader v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  int XAssetZoneIndexNonLocking; 
  bool IsPermanentZoneIndex; 

  v4.physicsLibrary = DB_FindXAssetHeader(ASSET_TYPE_XMODEL, to, 1).physicsLibrary;
  p_name = &v4.physicsLibrary->name;
  if ( !g_assetNameFieldValid[9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 63, ASSERT_TYPE_ASSERT, "(DB_XAssetTypeHasName( type ))", "%s\n\tDB_GetXAssetHeaderName %s, 0x%p", "DB_XAssetTypeHasName( type )", g_assetNames[9], v4.physicsLibrary) )
    __debugbreak();
  if ( !p_name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 65, ASSERT_TYPE_ASSERT, "(header.data)", "%s\n\tDB_GetXAssetHeaderName %s, nullptr", "header.data", g_assetNames[9]) )
    __debugbreak();
  v6 = *p_name;
  v7.physicsLibrary = DB_FindXAssetHeader(ASSET_TYPE_XMODEL, from, 1).physicsLibrary;
  v8 = 8i64 * tls_index;
  v9 = *(_QWORD *)((char *)NtCurrentTeb()->Reserved1[11] + v8);
  if ( !*(_BYTE *)(v9 + 716) && !*(_DWORD *)(v9 + 720) )
  {
    Sys_CheckAcquireLock(&s_dbHashRWLock);
    AcquireSRWLockShared((PSRWLOCK)&s_dbHashRWLock);
  }
  v10 = *(_QWORD *)((char *)NtCurrentTeb()->Reserved1[11] + v8);
  ++*(_DWORD *)(v10 + 720);
  XAssetZoneIndexNonLocking = DB_GetXAssetZoneIndexNonLocking(ASSET_TYPE_XMODEL, from);
  IsPermanentZoneIndex = DB_Zones_IsPermanentZoneIndex(XAssetZoneIndexNonLocking);
  DB_UnlockHashRead();
  if ( !IsPermanentZoneIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 2980, ASSERT_TYPE_ASSERT, "( ( DB_IsPermanentAsset( type, from ) ) )", "( from ) = %s", from) )
    __debugbreak();
  DB_LockHashWrite();
  if ( (DB_AssetEntryTable::FindAsset(&s_assetManager.table, to, ASSET_TYPE_XMODEL)->m_inuse & 8) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 2987, ASSERT_TYPE_ASSERT, "(!entry->TestInUse( ASSET_MASK_OWNS_RESOURCES ))", (const char *)&queryFormat, "!entry->TestInUse( ASSET_MASK_OWNS_RESOURCES )") )
    __debugbreak();
  DB_UnlockHashWrite();
  DB_ReleaseXAsset((XAssetHeader)p_name, ASSET_TYPE_XMODEL, COPIED_RESOURCES);
  DB_CopyXAsset(v7, (XAssetHeader)p_name, ASSET_TYPE_XMODEL, v6);
}

/*
==============
DB_SetAlwaysAllowMissingServerAsset
==============
*/
void DB_SetAlwaysAllowMissingServerAsset(bool alwaysAllow)
{
  s_db_alwaysAllowMissingServerAssets = alwaysAllow;
}

/*
==============
DB_SetCancelledZoneIndex
==============
*/
void DB_SetCancelledZoneIndex(const int zoneIndex)
{
  unsigned __int64 v1; 
  const char *v2; 
  int v3; 
  const char *v4; 
  const char *ZoneNameFromIndex; 

  v1 = zoneIndex;
  if ( zoneIndex )
  {
    if ( zoneIndex != 0xFFFF )
      goto LABEL_7;
    v2 = "zoneIndex != INVALID_ZONE_INDEX";
    v3 = 7893;
    v4 = "(zoneIndex != INVALID_ZONE_INDEX)";
  }
  else
  {
    v2 = "zoneIndex != DEFAULT_ZONE_INDEX";
    v3 = 7892;
    v4 = "(zoneIndex != DEFAULT_ZONE_INDEX)";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", v3, ASSERT_TYPE_ASSERT, v4, (const char *)&queryFormat, v2) )
    __debugbreak();
LABEL_7:
  ZoneNameFromIndex = DB_Zones_GetZoneNameFromIndex(v1);
  Com_Printf(16, "DB_SetCancelledZoneIndex: '%s'\n", ZoneNameFromIndex);
  if ( v1 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 181, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  s_assetManager.cancelledZones.m_data[v1 >> 6] |= 0x8000000000000000ui64 >> (v1 & 0x3F);
  DB_CancelPauseFastfileLoad(v1);
}

/*
==============
DB_SetErrorOnPatchedImageMismatch
==============
*/
void DB_SetErrorOnPatchedImageMismatch(void)
{
  s_errorOnPatchedImageMismatch = 1;
}

/*
==============
DB_SetInflightTransientPriority
==============
*/
void DB_SetInflightTransientPriority(const char *zoneName, unsigned int priority)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 8111, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !zoneName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 8113, ASSERT_TYPE_ASSERT, "(zoneName)", (const char *)&queryFormat, "zoneName") )
    __debugbreak();
  DB_LockPendingZoneWrite();
  DB_PendingZones_SetInflightTransientPriority(zoneName, priority);
  s_assetManager.pendingZoneLock.writeThreadId = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&s_assetManager.pendingZoneLock);
  Sys_CheckReleaseLock(&s_assetManager.pendingZoneLock);
}

/*
==============
DB_SetMaxUsableXModelLods_f
==============
*/
void DB_SetMaxUsableXModelLods_f()
{
  int v0; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 1650, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( Cmd_Argc() == 2 )
  {
    v0 = Cmd_ArgInt(1);
    Com_SyncThreads();
    DB_SyncXAssetsBlocking();
    Dvar_SetInt_Internal(DVARINT_db_maxUsableXModelLods, v0);
    DB_ModelFixup_SetDirtyFixup();
    DB_ModelFixup_TryFullFixup();
    R_TriggerSunShadowCacheFlush();
  }
  else
  {
    Com_PrintError(16, "Invalid param count. usage: db_setmaxusablelods( <lod> )\n");
  }
}

/*
==============
DB_SetPausedZoneIndex
==============
*/
void DB_SetPausedZoneIndex(const int zoneIndex)
{
  unsigned __int64 v1; 
  const char *v2; 
  int v3; 
  const char *v4; 
  const char *ZoneNameFromIndex; 

  v1 = zoneIndex;
  if ( zoneIndex )
  {
    if ( zoneIndex != 0xFFFF )
      goto LABEL_7;
    v2 = "zoneIndex != INVALID_ZONE_INDEX";
    v3 = 7905;
    v4 = "(zoneIndex != INVALID_ZONE_INDEX)";
  }
  else
  {
    v2 = "zoneIndex != DEFAULT_ZONE_INDEX";
    v3 = 7904;
    v4 = "(zoneIndex != DEFAULT_ZONE_INDEX)";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", v3, ASSERT_TYPE_ASSERT, v4, (const char *)&queryFormat, v2) )
    __debugbreak();
LABEL_7:
  ZoneNameFromIndex = DB_Zones_GetZoneNameFromIndex(v1);
  Com_Printf(16, "DB_SetPausedZoneIndex: '%s'\n", ZoneNameFromIndex);
  if ( v1 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 181, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  s_assetManager.pausedZones.m_data[v1 >> 6] |= 0x8000000000000000ui64 >> (v1 & 0x3F);
}

/*
==============
DB_SetPreloadLoadError
==============
*/
void DB_SetPreloadLoadError(unsigned int zoneFlags, const char *fileName)
{
  if ( (zoneFlags & 0x600000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 10818, ASSERT_TYPE_ASSERT, "(zoneFlags & DB_MASK_PRELOAD_TRANSITIONS_SP)", (const char *)&queryFormat, "zoneFlags & DB_MASK_PRELOAD_TRANSITIONS_SP") )
    __debugbreak();
  if ( !s_dbLoadingProcessedAssets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 10819, ASSERT_TYPE_ASSERT, "(s_dbLoadingProcessedAssets)", (const char *)&queryFormat, "s_dbLoadingProcessedAssets") )
    __debugbreak();
  s_dbPreloadingError = 1;
  s_dbPreloadingErrorFlags = zoneFlags;
  Core_strcpy(s_dbPreloadingErrorName, 0x40ui64, fileName);
}

/*
==============
DB_SetTransientAssetFlags
==============
*/
void DB_SetTransientAssetFlags(const DB_AssetEntry *assetEntry, const TransientFlagType flagType, const bool keepDefaultAssets)
{
  __int64 v3; 
  unsigned __int64 AssetEntryIndex; 
  int v8; 

  v3 = flagType;
  if ( (unsigned int)flagType >= TRANSIENT_FLAGS_COUNT )
  {
    v8 = 3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 906, ASSERT_TYPE_ASSERT, "(unsigned)( flagType ) < (unsigned)( TRANSIENT_FLAGS_COUNT )", "flagType doesn't index TRANSIENT_FLAGS_COUNT\n\t%i not in [0, %i)", flagType, v8) )
      __debugbreak();
  }
  AssetEntryIndex = DB_GetAssetEntryIndex(assetEntry);
  if ( AssetEntryIndex >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  if ( ((0x8000000000000000ui64 >> (AssetEntryIndex & 0x3F)) & s_assetManager.table.m_headEntries.m_flags.m_data[AssetEntryIndex >> 6]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 910, ASSERT_TYPE_ASSERT, "(s_assetManager.table.GetUsedFlagsHeadOnly().Test( assetIndex ))", (const char *)&queryFormat, "s_assetManager.table.GetUsedFlagsHeadOnly().Test( assetIndex )") )
    __debugbreak();
  DB_CheckAllTransientFlagsUnset(AssetEntryIndex);
  DB_AssetEntryFlags::Set(&s_assetManager.transientFlags[v3].headAssets, AssetEntryIndex);
  if ( keepDefaultAssets )
    DB_AssetEntryFlags::Set(&s_assetManager.transientFlags[v3].keepDefaultAssets, AssetEntryIndex);
}

/*
==============
DB_SetXAssetTransientOverridden
==============
*/
void DB_SetXAssetTransientOverridden(const XAssetType type, const char *name, const bool isOverridden)
{
  const DB_AssetEntry *Asset; 
  DB_AssetEntry *v7; 
  unsigned int AssetEntryIndex; 
  bool v9; 
  const char *CurrentZoneLoadName; 
  const char *ZoneNameFromIndex; 
  const char *TypeName; 
  const char *XAssetHeaderName; 
  const char *v14; 
  const char *v15; 
  const char *v16; 
  const char *XAssetTypeName; 

  DB_ValidateRegistryState();
  DB_LockHashRead();
  Asset = DB_AssetEntryTable::FindAsset(&s_assetManager.table, name, type);
  v7 = (DB_AssetEntry *)Asset;
  if ( Asset )
  {
    AssetEntryIndex = DB_GetAssetEntryIndex(Asset);
    v9 = DB_AssetEntryFlags::Test(&s_assetManager.transientOverrides, AssetEntryIndex);
    if ( isOverridden )
    {
      if ( !v9 )
      {
        CurrentZoneLoadName = DB_Zones_GetCurrentZoneLoadName();
        ZoneNameFromIndex = DB_Zones_GetZoneNameFromIndex(*((_WORD *)v7 + 9) & 0x7FF);
        TypeName = DB_AssetEntry::GetTypeName(v7);
        XAssetHeaderName = DB_GetXAssetHeaderName(v7->m_type, v7->m_header);
        Com_Printf(16, "DB_SetXAssetTransientOverridden: Transient asset %s(%s) overridden. Existing zone %s, loading zone %s.\n", XAssetHeaderName, TypeName, ZoneNameFromIndex, CurrentZoneLoadName);
      }
      DB_AssetEntryFlags::Set(&s_assetManager.transientOverrides, AssetEntryIndex);
    }
    else
    {
      if ( v9 )
      {
        v14 = DB_Zones_GetZoneNameFromIndex(*((_WORD *)v7 + 9) & 0x7FF);
        v15 = DB_AssetEntry::GetTypeName(v7);
        v16 = DB_GetXAssetHeaderName(v7->m_type, v7->m_header);
        Com_Printf(16, "DB_SetXAssetTransientOverridden: Transient asset %s(%s) override is reset. Asset override zone %s.\n", v16, v15, v14);
      }
      DB_AssetEntryFlags::Reset(&s_assetManager.transientOverrides, AssetEntryIndex);
    }
  }
  else if ( DB_Transients_VerbosePrint() )
  {
    XAssetTypeName = DB_GetXAssetTypeName(type);
    Com_Printf(0, "DB_SetXAssetTransientOverridden: Asset '%s'(%s) does not exist in the DB.\n", name, XAssetTypeName);
  }
  DB_UnlockHashRead();
}

/*
==============
DB_SetupDefaultAsset
==============
*/
void DB_SetupDefaultAsset(DB_AssetEntry *assetEntry, XAssetType type, const char *name, const bool copyName)
{
  __int64 v4; 
  unsigned __int64 AssetEntryIndex; 
  unsigned __int64 v9; 
  unsigned __int64 v10; 
  __int64 v11; 
  __int64 v12; 

  v4 = type;
  if ( !assetEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 2241, ASSERT_TYPE_ASSERT, "(assetEntry)", (const char *)&queryFormat, "assetEntry") )
    __debugbreak();
  if ( (*((_WORD *)assetEntry + 9) & 0x7FF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 2242, ASSERT_TYPE_ASSERT, "(assetEntry->GetZoneIndex() == DEFAULT_ZONE_INDEX)", (const char *)&queryFormat, "assetEntry->GetZoneIndex() == DEFAULT_ZONE_INDEX") )
    __debugbreak();
  if ( SL_IsString(name) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 2243, ASSERT_TYPE_ASSERT, "( ( !SL_IsString( name ) ) )", "( name ) = %s", name) )
    __debugbreak();
  if ( copyName )
    name = DB_AllocateDefaultAssetName(name);
  AssetEntryIndex = DB_GetAssetEntryIndex(assetEntry);
  if ( AssetEntryIndex >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  v9 = AssetEntryIndex >> 6;
  v10 = 0x8000000000000000ui64 >> (AssetEntryIndex & 0x3F);
  if ( (v10 & s_assetManager.defaultAssets.m_flags.m_data[AssetEntryIndex >> 6]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 2249, ASSERT_TYPE_ASSERT, "(!s_assetManager.defaultAssets.Test( assetEntryIndex ))", (const char *)&queryFormat, "!s_assetManager.defaultAssets.Test( assetEntryIndex )") )
    __debugbreak();
  if ( AssetEntryIndex >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 181, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  s_assetManager.defaultAssets.m_flags.m_data[v9] |= v10;
  if ( (unsigned int)v4 >= 0x71 )
  {
    LODWORD(v11) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 2150, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v11, 113) )
      __debugbreak();
  }
  if ( s_assetManager.masterDefaultAssets[v4].physicsLibrary )
  {
    DB_CopyXAsset(s_assetManager.masterDefaultAssets[v4], assetEntry->m_header, (XAssetType)v4, name);
  }
  else
  {
    if ( (unsigned int)v4 >= 0x71 )
    {
      LODWORD(v12) = 113;
      LODWORD(v11) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 114, ASSERT_TYPE_ASSERT, "(unsigned)( assetType ) < (unsigned)( ASSET_TYPE_COUNT )", "assetType doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v11, v12) )
        __debugbreak();
    }
    memset_0(assetEntry->m_header.data, 0, g_assetSizes[v4]);
    DB_SetXAssetHeaderName(assetEntry->m_type, assetEntry->m_header, name);
    if ( AssetEntryIndex >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 181, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
      __debugbreak();
    s_assetManager.unusableDefaultAssets.m_flags.m_data[v9] |= v10;
  }
}

/*
==============
DB_ShouldComErrorSysError
==============
*/
char DB_ShouldComErrorSysError()
{
  bool IsMainThread; 
  char v2; 

  if ( Sys_IsDatabaseThread() )
    return 1;
  IsMainThread = Sys_IsMainThread();
  v2 = 0;
  if ( IsMainThread )
    return s_dbIsInMainThreadWork;
  return v2;
}

/*
==============
DB_ShouldDeferHeadAssetReplacement
==============
*/
char DB_ShouldDeferHeadAssetReplacement(const DB_AssetEntry *const newEntry, const DB_AssetEntry *const existingEntry)
{
  unsigned __int8 m_type; 
  PhysicsLibrary *physicsLibrary; 
  volatile unsigned __int8 m_inuse; 
  bool v8; 
  const XModelSurfs *v9; 
  volatile unsigned __int8 v10; 
  bool v11; 

  if ( !s_dbDeferAssets )
    return 0;
  m_type = existingEntry->m_type;
  if ( m_type == 13 )
    return 0;
  if ( (*((_WORD *)existingEntry + 9) & 0x7FF) != 0 )
    return 1;
  if ( newEntry->m_type != m_type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 4427, ASSERT_TYPE_ASSERT, "(newEntry->GetType() == existingAssetType)", (const char *)&queryFormat, "newEntry->GetType() == existingAssetType") )
    __debugbreak();
  if ( !DB_AssetTypeHasADefaultAsset((const XAssetType)m_type) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 4429, ASSERT_TYPE_ASSERT, "(DB_AssetTypeHasADefaultAsset( existingAssetType ))", (const char *)&queryFormat, "DB_AssetTypeHasADefaultAsset( existingAssetType )") )
    __debugbreak();
  if ( m_type == 98 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 4432, ASSERT_TYPE_ASSERT, "( existingAssetType ) != ( ASSET_TYPE_STREAM_KEY )", "%s != %s\n\t%i, %i", "existingAssetType", "ASSET_TYPE_STREAM_KEY", 98, 98) )
    {
      __debugbreak();
      return 1;
    }
    return 1;
  }
  if ( m_type == 15 )
  {
    physicsLibrary = existingEntry->m_header.physicsLibrary;
    if ( ((__int64)newEntry->m_header.physicsLibrary[1].name & 0x40) == 0 || ((__int64)physicsLibrary[1].name & 0x40) != 0 )
      return 1;
    m_inuse = existingEntry->m_inuse;
    v8 = DB_VerbosePrint();
    if ( (m_inuse & 1) != 0 )
    {
      if ( v8 )
        Com_Printf(10, "WARNING: Unable to replace image '%s' now. Have to defer it. Alwaysloaded mip loads might stall the preloading postload step.\n", physicsLibrary->name);
      return 1;
    }
    if ( v8 )
      Com_Printf(10, "Replacing image '%s' now, rather than deferring. So that we can load alwaysloaded mips.\n", physicsLibrary->name);
    return 0;
  }
  if ( m_type != 8 )
    return 1;
  v9 = (const XModelSurfs *)existingEntry->m_header.physicsLibrary;
  if ( !XModelSurfs_IsStreamed(newEntry->m_header.modelSurfs) || XModelSurfs_IsStreamed(v9) )
    return 1;
  v10 = existingEntry->m_inuse;
  v11 = DB_VerbosePrint();
  if ( (v10 & 1) == 0 )
  {
    if ( v11 )
      Com_Printf(10, "Replacing modelSurfs '%s' now, rather than deferring.\n", v9->name);
    return 0;
  }
  if ( !v11 )
    return 1;
  Com_Printf(10, "WARNING: Unable to replace modelSurfs '%s' now. Have to defer it.\n", v9->name);
  return 1;
}

/*
==============
DB_ShouldProcessAlwaysloadedFlags
==============
*/
__int64 DB_ShouldProcessAlwaysloadedFlags(const int zoneIndex)
{
  unsigned __int64 v1; 
  unsigned __int8 v2; 
  int v5; 

  v1 = zoneIndex;
  if ( (unsigned int)zoneIndex >= 0x7A4 )
  {
    v5 = 1956;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 8798, ASSERT_TYPE_ASSERT, "(unsigned)( zoneIndex ) < (unsigned)( s_assetManager.cancelledZones.size() )", "zoneIndex doesn't index s_assetManager.cancelledZones.size()\n\t%i not in [0, %i)", zoneIndex, v5) )
      __debugbreak();
  }
  DB_LockPendingZoneRead();
  if ( v1 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  if ( ((0x8000000000000000ui64 >> (v1 & 0x3F)) & s_assetManager.cancelledZones.m_data[v1 >> 6]) != 0 )
    goto LABEL_13;
  if ( (unsigned int)v1 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  if ( ((0x8000000000000000ui64 >> (v1 & 0x3F)) & s_assetManager.pausedZones.m_data[v1 >> 6]) != 0 )
LABEL_13:
    v2 = 0;
  else
    v2 = 1;
  DB_UnlockPendingZoneRead();
  return v2;
}

/*
==============
DB_ShouldStashedAssetBeTransferred
==============
*/
bool DB_ShouldStashedAssetBeTransferred(const DB_AssetEntry *assetEntry)
{
  unsigned __int64 v1; 
  unsigned __int64 v2; 
  unsigned __int64 v3; 

  v1 = *((_WORD *)assetEntry + 9) & 0x7FF;
  if ( (*((_WORD *)assetEntry + 9) & 0x7FF) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5790, ASSERT_TYPE_ASSERT, "(stashedZoneIndex != DEFAULT_ZONE_INDEX)", (const char *)&queryFormat, "stashedZoneIndex != DEFAULT_ZONE_INDEX") )
    __debugbreak();
  if ( !*(_BYTE *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 718i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5791, ASSERT_TYPE_ASSERT, "(s_hasPendingZoneLockRead)", (const char *)&queryFormat, "s_hasPendingZoneLockRead") )
    __debugbreak();
  if ( v1 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  v2 = 0x8000000000000000ui64 >> (v1 & 0x3F);
  v3 = v1 >> 6;
  if ( (v2 & s_assetManager.assetsLoadedZones.m_data[v3]) == 0 )
    return 0;
  if ( v1 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  if ( (v2 & s_assetManager.cancelledZones.m_data[v3]) != 0 )
    return 0;
  if ( v1 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  return (v2 & s_assetManager.pausedZones.m_data[v3]) == 0;
}

/*
==============
DB_ShouldUpdateGameOnPhysicsChange
==============
*/
char DB_ShouldUpdateGameOnPhysicsChange()
{
  if ( g_loadingDebugZone )
    return 1;
  if ( DB_IsDoingTransientSPOnlyWorkWithServerSync() )
  {
    if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6443, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", "%s\n\tUnsafe to modify physics from a thread other than the main thread", "Sys_IsMainThread()") )
      __debugbreak();
    CL_TransientsSP_ClientCodeCheck();
    return 1;
  }
  return 0;
}

/*
==============
DB_ShutdownXAssets
==============
*/
void DB_ShutdownXAssets(double a1, double a2)
{
  DB_ZoneBitArray *p_unloadZones; 
  __int64 v3; 
  unsigned int v4; 
  unsigned __int64 v5; 
  unsigned int v6; 
  DB_ZoneBitArray *v7; 
  unsigned int v8; 
  __int64 v9; 
  unsigned int v10; 
  unsigned __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  DB_ZoneBitArray unloadZones; 

  DB_SyncXAssetsSkipAlwaysLoaded(0);
  Stream_DBPreShutdown();
  DB_PushMainThreadWork();
  DB_ArchiveAssets();
  DB_PopMainThreadWork();
  if ( s_dbHashRWLock.writeThreadId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 10190, ASSERT_TYPE_ASSERT, "( s_dbHashRWLock.writeThreadId ) == ( INVALID_THREAD_ID )", "%s == %s\n\t%i, %i", "s_dbHashRWLock.writeThreadId", "INVALID_THREAD_ID", s_dbHashRWLock.writeThreadId, 0i64) )
    __debugbreak();
  if ( s_assetManager.pendingZoneLock.writeThreadId )
  {
    LODWORD(v14) = s_assetManager.pendingZoneLock.writeThreadId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 10191, ASSERT_TYPE_ASSERT, "( s_assetManager.pendingZoneLock.writeThreadId ) == ( INVALID_THREAD_ID )", "%s == %s\n\t%i, %i", "s_assetManager.pendingZoneLock.writeThreadId", "INVALID_THREAD_ID", v14, 0i64) )
      __debugbreak();
  }
  DB_LockHashWrite();
  DB_ShutdownMaterialOverrides();
  p_unloadZones = &unloadZones;
  v3 = 3i64;
  do
  {
    *(_QWORD *)p_unloadZones->zones.array = 0i64;
    *(_QWORD *)&p_unloadZones->zones.array[2] = 0i64;
    *(_QWORD *)&p_unloadZones->zones.array[4] = 0i64;
    p_unloadZones = (DB_ZoneBitArray *)((char *)p_unloadZones + 64);
    *(_QWORD *)&p_unloadZones[-1].zones.array[52] = 0i64;
    *(_QWORD *)&p_unloadZones[-1].zones.array[54] = 0i64;
    *(_QWORD *)&p_unloadZones[-1].zones.array[56] = 0i64;
    *(_QWORD *)&p_unloadZones[-1].zones.array[58] = 0i64;
    *(_QWORD *)&p_unloadZones[-1].zones.array[60] = 0i64;
    --v3;
  }
  while ( v3 );
  *(_QWORD *)p_unloadZones->zones.array = 0i64;
  *(_QWORD *)&p_unloadZones->zones.array[2] = 0i64;
  *(_QWORD *)&p_unloadZones->zones.array[4] = 0i64;
  *(_QWORD *)&p_unloadZones->zones.array[6] = 0i64;
  v4 = 0;
  *(_QWORD *)&p_unloadZones->zones.array[8] = 0i64;
  v5 = 0i64;
  *(_QWORD *)&p_unloadZones->zones.array[10] = 0i64;
  *(_QWORD *)&p_unloadZones->zones.array[12] = 0i64;
  do
  {
    if ( DB_Zones_IsValidZoneIndex(v4) )
      unloadZones.zones.array[v5 >> 5] |= 0x80000000 >> (v4 & 0x1F);
    ++v4;
    ++v5;
  }
  while ( v4 < 0x7A4 );
  v6 = 0;
  v7 = &unloadZones;
  while ( !v7->zones.array[0] )
  {
    ++v6;
    v7 = (DB_ZoneBitArray *)((char *)v7 + 4);
    if ( v6 >= 0x3E )
      goto LABEL_18;
  }
  Stream_DBPreFastfilesUnload(0);
  DB_UnloadXZones(&unloadZones, 0, 0);
  Stream_DBPostFastfilesUnload(0, 0);
LABEL_18:
  DB_FreeDefaultEntries(a1, a2);
  DB_FreeUnusedResources(NULL);
  v8 = unloadZones.zones.array[0];
  LODWORD(v9) = 0;
  while ( v8 )
  {
LABEL_22:
    v10 = __lzcnt(v8);
    if ( v10 >= 0x20 )
    {
      LODWORD(v13) = 32;
      LODWORD(v12) = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
    }
    if ( (v8 & (0x80000000 >> v10)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v8 &= ~(0x80000000 >> v10);
    DB_Zones_UnloadAndFreeZone(v10 + 32 * v9, 0);
  }
  while ( 1 )
  {
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v9 >= 0x3E )
      break;
    v8 = unloadZones.zones.array[v9];
    if ( v8 )
      goto LABEL_22;
  }
  DB_Zones_UpdateInUseFlags();
  DB_UnlockHashWrite();
  DB_GpuTempMemCallbacks_Shutdown();
  DB_PushMainThreadWork();
  v11 = (unsigned __int64)&s_registryState & 3;
  if ( ((unsigned __int8)&s_registryState & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_registryState) )
    __debugbreak();
  if ( _InterlockedCompareExchange((volatile signed __int32 *)&s_registryState, 1, 0) )
  {
    if ( v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_registryState) )
      __debugbreak();
    LODWORD(v14) = _InterlockedCompareExchange((volatile signed __int32 *)&s_registryState, 1, 0);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 10248, ASSERT_TYPE_ASSERT, "( Sys_InterlockedCompareExchange( reinterpret_cast<volatile_int32*>( &s_registryState ), REGISTRY_STATE_MAIN_THREAD, REGISTRY_STATE_IDLE ) ) == ( REGISTRY_STATE_IDLE )", "%s == %s\n\t%i, %i", "Sys_InterlockedCompareExchange( reinterpret_cast<volatile_int32*>( &s_registryState ), REGISTRY_STATE_MAIN_THREAD, REGISTRY_STATE_IDLE )", "REGISTRY_STATE_IDLE", v14, 0i64) )
      __debugbreak();
  }
  DB_UnarchiveAssets(0);
  if ( v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_registryState) )
    __debugbreak();
  if ( _InterlockedCompareExchange((volatile signed __int32 *)&s_registryState, 0, 1) != 1 )
  {
    if ( v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_registryState) )
      __debugbreak();
    LODWORD(v15) = 1;
    LODWORD(v14) = _InterlockedCompareExchange((volatile signed __int32 *)&s_registryState, 0, 1);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 10255, ASSERT_TYPE_ASSERT, "( Sys_InterlockedCompareExchange( reinterpret_cast<volatile_int32*>( &s_registryState ), REGISTRY_STATE_IDLE, REGISTRY_STATE_MAIN_THREAD ) ) == ( REGISTRY_STATE_MAIN_THREAD )", "%s == %s\n\t%i, %i", "Sys_InterlockedCompareExchange( reinterpret_cast<volatile_int32*>( &s_registryState ), REGISTRY_STATE_IDLE, REGISTRY_STATE_MAIN_THREAD )", "REGISTRY_STATE_MAIN_THREAD", v14, v15) )
      __debugbreak();
  }
  DB_PopMainThreadWork();
}

/*
==============
DB_SteadyStateSanityChecks
==============
*/
void DB_SteadyStateSanityChecks(const bool unload)
{
  const dvar_t *v2; 
  unsigned int v3; 
  unsigned int v4; 
  unsigned int *v5; 
  unsigned __int64 v6; 
  const dvar_t *v7; 
  unsigned int v8; 
  unsigned int v9; 
  DB_AssetEntryFlags *p_unusableDefaultAssets; 
  unsigned int v11; 
  unsigned int v12; 
  DB_AssetEntryFlags *p_m_allocatedFlags; 
  const dvar_t *v14; 
  unsigned int v15; 
  DB_AssetEntryFlags *v16; 
  long double v19; 
  int LogChannel; 
  TransientAssetCheck v21; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5415, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v2 = DCONST_DVARBOOL_db_comprehensiveSanityChecks;
  if ( !DCONST_DVARBOOL_db_comprehensiveSanityChecks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "db_comprehensiveSanityChecks") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    v3 = 0;
    if ( DB_UsePedanticCorruptionChecks() )
      goto LABEL_19;
    v4 = s_dbCurrentWorkFlags;
    if ( (s_dbCurrentWorkFlags & 0xFC700FFF) != 0 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6319, ASSERT_TYPE_ASSERT, "(( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_ZONES ) == 0)", (const char *)&queryFormat, "( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_ZONES ) == 0") )
        __debugbreak();
      v4 = s_dbCurrentWorkFlags;
    }
    if ( !v4 )
    {
      s_lastUnloadTransientFlags = 0;
      s_lastLoadTransientFlags = 0;
LABEL_19:
      Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_SteadyStateSanityChecks");
      v6 = __rdtsc();
      DB_LockHashRead();
      DB_LockPendingZoneRead();
      v7 = DCONST_DVARBOOL_db_comprehensiveSanityChecks;
      if ( !DCONST_DVARBOOL_db_comprehensiveSanityChecks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "db_comprehensiveSanityChecks") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v7);
      if ( !v7->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5376, ASSERT_TYPE_ASSERT, "(Dvar_GetBool_Internal_DebugName( DCONST_DVARBOOL_db_comprehensiveSanityChecks, \"db_comprehensiveSanityChecks\" ))", (const char *)&queryFormat, "Dconst_GetBool( db_comprehensiveSanityChecks )") )
        __debugbreak();
      v8 = 0;
      v9 = 0;
      p_unusableDefaultAssets = &s_assetManager.unusableDefaultAssets;
      do
      {
        DB_AssetEntryPool::ForEachInBlock<CheckUnusableDefaultAssetsFunctor>(&s_assetManager.table.m_pool, &s_assetManager.unusableDefaultAssets, p_unusableDefaultAssets->m_flags.m_data[0], v8, (CheckUnusableDefaultAssetsFunctor *)&v21);
        v8 += 64;
        ++v9;
        p_unusableDefaultAssets = (DB_AssetEntryFlags *)((char *)p_unusableDefaultAssets + 8);
      }
      while ( v9 < 0x1768 );
      v11 = 0;
      v12 = 0;
      p_m_allocatedFlags = &s_assetManager.table.m_pool.m_allocatedFlags;
      do
      {
        DB_AssetEntryPool::ForEachInBlock<CheckDefaultAssetsFunctor>(&s_assetManager.table.m_pool, &s_assetManager.table.m_pool.m_allocatedFlags, p_m_allocatedFlags->m_flags.m_data[0], v11, (CheckDefaultAssetsFunctor *)&v21);
        v11 += 64;
        ++v12;
        p_m_allocatedFlags = (DB_AssetEntryFlags *)((char *)p_m_allocatedFlags + 8);
      }
      while ( v12 < 0x1768 );
      DB_UnlockPendingZoneRead();
      v14 = DCONST_DVARBOOL_db_comprehensiveSanityChecks;
      if ( !DCONST_DVARBOOL_db_comprehensiveSanityChecks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "db_comprehensiveSanityChecks") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v14);
      if ( !v14->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 1196, ASSERT_TYPE_ASSERT, "(Dvar_GetBool_Internal_DebugName( DCONST_DVARBOOL_db_comprehensiveSanityChecks, \"db_comprehensiveSanityChecks\" ))", (const char *)&queryFormat, "Dconst_GetBool( db_comprehensiveSanityChecks )") )
        __debugbreak();
      v15 = 0;
      v16 = &s_assetManager.table.m_pool.m_allocatedFlags;
      do
      {
        DB_AssetEntryPool::ForEachInBlock<TransientAssetCheck>(&s_assetManager.table.m_pool, &s_assetManager.table.m_pool.m_allocatedFlags, v16->m_flags.m_data[0], v3, &v21);
        v3 += 64;
        ++v15;
        v16 = (DB_AssetEntryFlags *)((char *)v16 + 8);
      }
      while ( v15 < 0x1768 );
      DB_ValidateAssetTable();
      DB_AssetEntryTable::Validate(&s_assetManager.table);
      DB_ModelFixup_CheckFixupAll();
      DB_UnlockHashRead();
      _XMM0 = 0i64;
      __asm { vcvtsi2sd xmm0, xmm0, rax }
      if ( (__int64)(__rdtsc() - v6) < 0 )
        *(double *)&_XMM0 = *(double *)&_XMM0 + 1.844674407370955e19;
      v19 = *(double *)&_XMM0 * msecPerRawTimerTick;
      LogChannel = DB_GetLogChannel();
      Com_Printf(LogChannel, "DB_SteadyStateSanityChecks took %.2fms\n", (double)v19);
      Sys_ProfEndNamedEvent();
      return;
    }
    v5 = &s_lastLoadTransientFlags;
    if ( unload )
      v5 = &s_lastUnloadTransientFlags;
    if ( (v4 & *v5) != v4 )
    {
      *v5 |= v4;
      goto LABEL_19;
    }
  }
}

/*
==============
DB_StopSPHotLoadBink
==============
*/
void DB_StopSPHotLoadBink(void)
{
  if ( s_binkTransitionSPHotLoad )
    s_binkTransitionSPHotLoad = 0;
}

/*
==============
DB_SyncDatabaseCompleted
==============
*/
void DB_SyncDatabaseCompleted(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 8277, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_SyncDatabaseCompleted");
  while ( !Sys_IsDatabaseReady() )
  {
    if ( Sys_IsMainThread() )
      Sys_LoadingProcessEvents();
    Sys_CheckQuitRequest();
    Sys_Sleep(1);
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
DB_SyncFinishUnloadFastfiles
==============
*/
void DB_SyncFinishUnloadFastfiles()
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6800, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()", -2i64) )
    __debugbreak();
  ProfLoad_Begin("DB_SyncFinishUnloadFastfiles");
  while ( !Stream_DBIsDeferredFastfileUnloadDone() )
  {
    Sys_CheckQuitRequest();
    Sys_Sleep(1);
  }
  ProfLoad_End();
}

/*
==============
DB_SyncForUnfinishedLoadsOrUnloads
==============
*/
void DB_SyncForUnfinishedLoadsOrUnloads()
{
  unsigned __int64 v0; 
  __int128 v3; 
  __int128 v5; 
  XRegistryState v7; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6980, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_SyncForUnfinishedLoadsOrUnloads");
  v0 = __rdtsc();
  DB_SyncFinishUnloadFastfiles();
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6006, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  Stream_AlwaysLoaded_CancelProcessStreamingInfo();
  DB_AssetQuery_WaitForQueriesToComplete();
  if ( s_dbLoadingFastfiles )
  {
    Com_Printf(0, "Blocking for DB thread to complete...\n");
    Sys_SyncDatabaseWithPump();
    if ( !Sys_IsDatabaseReady() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 7003, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseReady())", (const char *)&queryFormat, "Sys_IsDatabaseReady()") )
      __debugbreak();
    if ( s_spTransientGameWaitingForPostLoad )
    {
      CL_TransientsSP_HardSyncNow();
    }
    else
    {
      Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_Update");
      if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 2765, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
        __debugbreak();
      if ( s_mainThreadBlocked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 2766, ASSERT_TYPE_ASSERT, "(!s_mainThreadBlocked)", (const char *)&queryFormat, "!s_mainThreadBlocked") )
        __debugbreak();
      if ( db_inPostLoadXZone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 2767, ASSERT_TYPE_ASSERT, "(!db_inPostLoadXZone)", (const char *)&queryFormat, "!db_inPostLoadXZone") )
        __debugbreak();
      DB_Zones_ProcessPendingUnloadFrees(0);
      if ( !s_spTransientGameWaitingForPostLoad && DB_IsReadyForPostLoad() && !s_spTransientGameWaitingForPostLoad )
        DB_PostLoadXZone(0);
      Sys_ProfEndNamedEvent();
    }
    if ( s_dbLoadingFastfiles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 7018, ASSERT_TYPE_ASSERT, "(DB_AreFastfileLoadsCompleted())", (const char *)&queryFormat, "DB_AreFastfileLoadsCompleted()") )
      __debugbreak();
  }
  if ( (s_dbCurrentWorkFlags & 0xFC700FFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6319, ASSERT_TYPE_ASSERT, "(( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_ZONES ) == 0)", (const char *)&queryFormat, "( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_ZONES ) == 0") )
    __debugbreak();
  if ( s_dbCurrentWorkFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 7022, ASSERT_TYPE_ASSERT, "(!DB_IsDoingStreamOnlyWork())", (const char *)&queryFormat, "!DB_IsDoingStreamOnlyWork()") )
    __debugbreak();
  if ( s_dbReplaceAssets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 7026, ASSERT_TYPE_ASSERT, "(!s_dbReplaceAssets)", (const char *)&queryFormat, "!s_dbReplaceAssets") )
    __debugbreak();
  if ( g_dbPreloading && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 7030, ASSERT_TYPE_ASSERT, "(!g_dbPreloading)", (const char *)&queryFormat, "!g_dbPreloading") )
    __debugbreak();
  if ( s_dbDeferAssets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 7033, ASSERT_TYPE_ASSERT, "(!s_dbDeferAssets)", (const char *)&queryFormat, "!s_dbDeferAssets") )
    __debugbreak();
  if ( s_dbIsSyncLoading && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 7034, ASSERT_TYPE_ASSERT, "(!s_dbIsSyncLoading)", (const char *)&queryFormat, "!s_dbIsSyncLoading") )
    __debugbreak();
  if ( g_archiveBuf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 7035, ASSERT_TYPE_ASSERT, "(!g_archiveBuf)", (const char *)&queryFormat, "!g_archiveBuf") )
    __debugbreak();
  if ( db_inPostLoadXZone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 7036, ASSERT_TYPE_ASSERT, "(!db_inPostLoadXZone)", (const char *)&queryFormat, "!db_inPostLoadXZone") )
    __debugbreak();
  if ( s_registryState )
  {
    v7 = s_registryState;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 7039, ASSERT_TYPE_ASSERT, "( s_registryState ) == ( REGISTRY_STATE_IDLE )", "%s == %s\n\t%i, %i", "s_registryState", "REGISTRY_STATE_IDLE", v7, 0i64) )
      __debugbreak();
  }
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  if ( (__int64)(__rdtsc() - v0) < 0 )
  {
    *((_QWORD *)&v3 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v3 = *(double *)&_XMM0 + 1.844674407370955e19;
    _XMM0 = v3;
  }
  *((_QWORD *)&v5 + 1) = *((_QWORD *)&_XMM0 + 1);
  *(double *)&v5 = *(double *)&_XMM0 * msecPerRawTimerTick;
  _XMM1 = v5;
  if ( *(double *)&_XMM0 * msecPerRawTimerTick > 16.0 )
  {
    __asm { vcvtsd2ss xmm0, xmm1, xmm1 }
    Com_Printf(10, "DB_SyncForUnfinishedLoadsOrUnloads: Took %.2fms\n", *(float *)&_XMM0);
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
DB_SyncForZoneAlloc
==============
*/
void DB_SyncForZoneAlloc(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5170, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !s_dbZoneAllocDone && s_dbLoadingFastfiles )
  {
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Wait for s_dbZoneAllocDone");
    R_BeginRemoteScreenUpdate();
    while ( !s_dbZoneAllocDone )
    {
      Sys_CheckQuitRequest();
      Sys_Sleep(1);
    }
    R_EndRemoteScreenUpdate();
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
DB_SyncLevelLoad
==============
*/

void DB_SyncLevelLoad(void)
{
  DB_SyncXAssetsKeepAlive();
}

/*
==============
DB_SyncXAssets
==============
*/
void DB_SyncXAssets(void)
{
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_SyncXAssets");
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6818, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()", -2i64) )
    __debugbreak();
  if ( s_mainThreadBlocked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6819, ASSERT_TYPE_ASSERT, "(!s_mainThreadBlocked)", (const char *)&queryFormat, "!s_mainThreadBlocked") )
    __debugbreak();
  if ( db_inPostLoadXZone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6820, ASSERT_TYPE_ASSERT, "(!db_inPostLoadXZone)", (const char *)&queryFormat, "!db_inPostLoadXZone") )
    __debugbreak();
  ProfLoad_Begin("DB_SyncXAssets");
  if ( s_dbLoadingFastfiles )
  {
    ProfLoad_Begin("REMOTE_SCREEN_UPDATE");
    R_BeginRemoteScreenUpdate();
    ProfLoad_End();
    ProfLoad_Begin("Sys_SyncDatabase");
    Sys_SyncDatabase();
    ProfLoad_End();
    DB_SyncFinishUnloadFastfiles();
    ProfLoad_Begin("REMOTE_SCREEN_UPDATE");
    R_EndRemoteScreenUpdate();
    ProfLoad_End();
    ProfLoad_Begin("DB_PostLoadXZone");
    if ( !s_spTransientGameWaitingForPostLoad )
      DB_PostLoadXZone(0);
    ProfLoad_End();
    ProfLoad_End();
  }
  else
  {
    DB_SyncFinishUnloadFastfiles();
    ProfLoad_End();
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
DB_SyncXAssetsBlocking
==============
*/
void DB_SyncXAssetsBlocking(void)
{
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_SyncXAssetsBlocking");
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6818, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()", -2i64) )
    __debugbreak();
  if ( s_mainThreadBlocked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6819, ASSERT_TYPE_ASSERT, "(!s_mainThreadBlocked)", (const char *)&queryFormat, "!s_mainThreadBlocked") )
    __debugbreak();
  if ( db_inPostLoadXZone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6820, ASSERT_TYPE_ASSERT, "(!db_inPostLoadXZone)", (const char *)&queryFormat, "!db_inPostLoadXZone") )
    __debugbreak();
  ProfLoad_Begin("DB_SyncXAssets");
  if ( s_dbLoadingFastfiles )
  {
    ProfLoad_Begin("Sys_SyncDatabase");
    Sys_SyncDatabase();
    ProfLoad_End();
    DB_SyncFinishUnloadFastfiles();
    ProfLoad_Begin("DB_PostLoadXZone");
    if ( !s_spTransientGameWaitingForPostLoad )
      DB_PostLoadXZone(0);
    ProfLoad_End();
    ProfLoad_End();
  }
  else
  {
    DB_SyncFinishUnloadFastfiles();
    ProfLoad_End();
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
DB_SyncXAssetsInternal
==============
*/
void DB_SyncXAssetsInternal(const int pumpMessages, const int skipAlwaysLoaded, const int remoteScreenUpdate)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6818, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()", -2i64) )
    __debugbreak();
  if ( s_mainThreadBlocked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6819, ASSERT_TYPE_ASSERT, "(!s_mainThreadBlocked)", (const char *)&queryFormat, "!s_mainThreadBlocked") )
    __debugbreak();
  if ( db_inPostLoadXZone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6820, ASSERT_TYPE_ASSERT, "(!db_inPostLoadXZone)", (const char *)&queryFormat, "!db_inPostLoadXZone") )
    __debugbreak();
  ProfLoad_Begin("DB_SyncXAssets");
  if ( s_dbLoadingFastfiles )
  {
    if ( skipAlwaysLoaded )
    {
      DB_CheckSkipAlwaysLoadedImages();
      DB_PushSkipAlwaysloadedImages();
    }
    if ( remoteScreenUpdate )
    {
      ProfLoad_Begin("REMOTE_SCREEN_UPDATE");
      if ( pumpMessages )
        R_BeginRemoteScreenUpdateWithAnimatedTexture();
      else
        R_BeginRemoteScreenUpdate();
      ProfLoad_End();
    }
    ProfLoad_Begin("Sys_SyncDatabase");
    if ( pumpMessages )
      Sys_SyncDatabaseWithPump();
    else
      Sys_SyncDatabase();
    ProfLoad_End();
    DB_SyncFinishUnloadFastfiles();
    if ( remoteScreenUpdate )
    {
      ProfLoad_Begin("REMOTE_SCREEN_UPDATE");
      if ( pumpMessages )
        R_EndRemoteScreenUpdateWithAnimatedTexture();
      else
        R_EndRemoteScreenUpdate();
      ProfLoad_End();
    }
    ProfLoad_Begin("DB_PostLoadXZone");
    if ( !s_spTransientGameWaitingForPostLoad )
      DB_PostLoadXZone(0);
    ProfLoad_End();
    if ( skipAlwaysLoaded )
      DB_PopSkipAlwaysloadedImages();
  }
  else
  {
    DB_SyncFinishUnloadFastfiles();
  }
  ProfLoad_End();
}

/*
==============
DB_SyncXAssetsKeepAlive
==============
*/
void DB_SyncXAssetsKeepAlive(void)
{
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_SyncXAssetsKeepAlive");
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6818, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()", -2i64) )
    __debugbreak();
  if ( s_mainThreadBlocked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6819, ASSERT_TYPE_ASSERT, "(!s_mainThreadBlocked)", (const char *)&queryFormat, "!s_mainThreadBlocked") )
    __debugbreak();
  if ( db_inPostLoadXZone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6820, ASSERT_TYPE_ASSERT, "(!db_inPostLoadXZone)", (const char *)&queryFormat, "!db_inPostLoadXZone") )
    __debugbreak();
  ProfLoad_Begin("DB_SyncXAssets");
  if ( s_dbLoadingFastfiles )
  {
    ProfLoad_Begin("REMOTE_SCREEN_UPDATE");
    R_BeginRemoteScreenUpdateWithAnimatedTexture();
    ProfLoad_End();
    ProfLoad_Begin("Sys_SyncDatabase");
    Sys_SyncDatabaseWithPump();
    ProfLoad_End();
    DB_SyncFinishUnloadFastfiles();
    ProfLoad_Begin("REMOTE_SCREEN_UPDATE");
    R_EndRemoteScreenUpdateWithAnimatedTexture();
    ProfLoad_End();
    ProfLoad_Begin("DB_PostLoadXZone");
    if ( !s_spTransientGameWaitingForPostLoad )
      DB_PostLoadXZone(0);
    ProfLoad_End();
    ProfLoad_End();
  }
  else
  {
    DB_SyncFinishUnloadFastfiles();
    ProfLoad_End();
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
DB_SyncXAssetsSkipAlwaysLoaded
==============
*/
void DB_SyncXAssetsSkipAlwaysLoaded(const bool useRemoteRendering)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6956, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_SyncXAssetsSkipAlwaysLoaded");
  DB_SyncXAssetsInternal(1, 1, useRemoteRendering);
  Sys_ProfEndNamedEvent();
}

/*
==============
DB_Thread
==============
*/
void __noreturn DB_Thread(unsigned int threadContext)
{
  unsigned int DBThreadId; 
  _JBTYPE *Value; 
  int *v3; 
  __int64 v4; 
  int v5; 
  _DWORD *v6; 
  __int64 v7; 
  __int64 v8; 
  int v10; 

  if ( threadContext != 7 )
  {
    v10 = 7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 9237, ASSERT_TYPE_ASSERT, "( threadContext ) == ( THREAD_CONTEXT_DATABASE )", "%s == %s\n\t%i, %i", "threadContext", "THREAD_CONTEXT_DATABASE", threadContext, v10) )
      __debugbreak();
  }
  DBThreadId = Physics_GetDBThreadId();
  Physics_OnThreadInit(DBThreadId);
  while ( 1 )
  {
    Value = (_JBTYPE *)Sys_GetValue(2);
    if ( !setjmp(Value) )
      break;
    Profile_Recover(1);
    Com_ErrorAbort();
  }
  v3 = (int *)Sys_GetValue(0);
  v4 = v3[8914];
  if ( (_DWORD)v4 && *(_QWORD *)&v3[4 * v4 + 8784] > *((_QWORD *)v3 + 261) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 189, ASSERT_TYPE_ASSERT, "(prof_stack->prof_guardpos == 0 || prof_stack->prof_guardstack[prof_stack->prof_guardpos - 1].ppStack <= prof_stack->prof_ppStack)", (const char *)&queryFormat, "prof_stack->prof_guardpos == 0 || prof_stack->prof_guardstack[prof_stack->prof_guardpos - 1].ppStack <= prof_stack->prof_ppStack") )
    __debugbreak();
  if ( (unsigned int)v3[8914] >= 0x20 )
  {
    LODWORD(v8) = 32;
    LODWORD(v7) = v3[8914];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 190, ASSERT_TYPE_ASSERT, "(unsigned)( prof_stack->prof_guardpos ) < (unsigned)( ( sizeof( *array_counter( prof_stack->prof_guardstack ) ) + 0 ) )", "prof_stack->prof_guardpos doesn't index ARRAY_COUNT( prof_stack->prof_guardstack )\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  v5 = 0;
  if ( v3[8914] > 0 )
  {
    v6 = v3 + 8786;
    do
    {
      if ( *v6 == 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 195, ASSERT_TYPE_ASSERT, "(prof_stack->prof_guardstack[i].id != id)", (const char *)&queryFormat, "prof_stack->prof_guardstack[i].id != id") )
        __debugbreak();
      ++v5;
      v6 += 4;
    }
    while ( v5 < v3[8914] );
  }
  if ( *((_QWORD *)v3 + 261) < (unsigned __int64)(v3 + 10) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 199, ASSERT_TYPE_ASSERT, "(prof_stack->prof_ppStack >= prof_stack->prof_pStack)", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  v3[4 * v3[8914] + 8786] = 1;
  *(_QWORD *)&v3[4 * v3[8914]++ + 8788] = *((_QWORD *)v3 + 261);
  while ( 1 )
  {
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_Thread() Loop");
    s_dbWorkPeriod = Idle;
    Sys_WaitForDatabaseThreadWake();
    if ( s_dbWorkPeriod && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 9260, ASSERT_TYPE_ASSERT, "(s_dbWorkPeriod == DB_WorkPeriod::Idle)", (const char *)&queryFormat, "s_dbWorkPeriod == DB_WorkPeriod::Idle") )
      __debugbreak();
    s_dbWorkPeriod = ReadyToFlush;
    Sys_YieldWorkerCmd();
    Sys_EnterCriticalSection(CRITSECT_DB_PROFILE);
    if ( s_dbProfilingLoadedFastFile )
    {
      ProfLoad_DB_LoadCompleted();
      s_dbProfilingLoadedFastFile = 0;
    }
    ProfLoad_DB_CheckStarted();
    Sys_LeaveCriticalSection(CRITSECT_DB_PROFILE);
    ProfLoad_DB_Begin("Sys_ResetDatabaseWake");
    Sys_ResetWakeDatabaseThread();
    ProfLoad_DB_End();
    if ( s_dbWorkPeriod != ReadyToFlush && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 9295, ASSERT_TYPE_ASSERT, "(s_dbWorkPeriod == DB_WorkPeriod::Awake)", (const char *)&queryFormat, "s_dbWorkPeriod == DB_WorkPeriod::Awake") )
      __debugbreak();
    s_dbWorkPeriod = Flushing|ReadyToFlush|0x4;
    ProfLoad_DB_Begin("DB_TryFinishFastfileUnloads");
    Stream_DBProcessDeferredFastfilesUnload();
    ProfLoad_DB_End();
    s_dbWorkPeriod = ReadyToFlush;
    ProfLoad_DB_Begin("DB_TryLoadXFile");
    DB_TryLoadXFile();
    ProfLoad_DB_End();
    if ( s_dbWorkPeriod != ReadyToFlush && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 9310, ASSERT_TYPE_ASSERT, "(s_dbWorkPeriod == DB_WorkPeriod::Awake)", (const char *)&queryFormat, "s_dbWorkPeriod == DB_WorkPeriod::Awake") )
      __debugbreak();
    s_dbWorkPeriod = 8;
    ProfLoad_DB_Begin("DB_ProcessFinishedGpuTempMemCallbacks");
    DB_ProcessFinishedGpuTempMemCallbacks();
    ProfLoad_DB_End();
    s_dbWorkPeriod = ReadyToFlush;
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
DB_TransientLoadAssetIntoExistingDBSlot
==============
*/
void DB_TransientLoadAssetIntoExistingDBSlot(const DB_AssetEntry *existingEntry, const unsigned int currentLoadZoneFlags)
{
  int v4; 
  const char *ZoneNameFromIndex; 
  __int64 m_type; 
  const char *v7; 
  const char *v8; 
  const char *XAssetHeaderName; 
  unsigned __int64 AssetEntryIndex; 
  bool v11; 
  unsigned int v12; 
  const char *v13; 
  const char *v14; 
  const char *TypeName; 
  const char *v16; 
  int v17; 
  const char *v18; 
  const char *v19; 
  const char *v20; 
  const char *CurrentZoneLoadName; 
  __int64 v22; 
  const char *v23; 
  const char *v24; 
  const char *v25; 
  __int64 v26; 
  __int64 v27; 

  if ( (currentLoadZoneFlags & 0x80000) != 0 && !DB_IsTransientAssetHeadEntry(existingEntry) )
  {
    v4 = *((_WORD *)existingEntry + 9) & 0x7FF;
    if ( g_usedDebugZone )
    {
      if ( DB_Zones_IsDevZoneIndex(v4) )
        DB_SetTransientAssetFlags(existingEntry, TRANSIENT_FLAGS_GLOBAL_GROUP, 0);
    }
    else
    {
      ZoneNameFromIndex = DB_Zones_GetZoneNameFromIndex(v4);
      m_type = existingEntry->m_type;
      v7 = ZoneNameFromIndex;
      if ( (unsigned int)m_type >= 0x71 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", m_type, 113) )
        __debugbreak();
      v8 = g_assetNames[m_type];
      XAssetHeaderName = DB_GetXAssetHeaderName(existingEntry->m_type, existingEntry->m_header);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 1032, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Existing non-transient asset when using customization transients. This is bad. %s(%s) %s", XAssetHeaderName, v8, v7) )
        __debugbreak();
    }
  }
  if ( !DB_IsTransientAssetHeadEntry(existingEntry) )
  {
    if ( (currentLoadZoneFlags & 0x387F000) == 0 )
      return;
    CurrentZoneLoadName = DB_Zones_GetCurrentZoneLoadName();
    v22 = existingEntry->m_type;
    v23 = CurrentZoneLoadName;
    if ( (unsigned int)v22 >= 0x71 )
    {
      LODWORD(v27) = 113;
      LODWORD(v26) = existingEntry->m_type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v26, v27) )
        __debugbreak();
    }
    v24 = g_assetNames[v22];
    v25 = DB_GetXAssetHeaderName(existingEntry->m_type, existingEntry->m_header);
    v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 1086, ASSERT_TYPE_ASSERT, "( ( currentLoadZoneFlags & DB_MASK_TRANSIENT_STUBBED_ZONES ) == 0 )", "%s(%s) loading from transient fastfile '%s'. Current existing and matching head asset doesn't have the 'transient head asset' bit set.", v25, v24, v23);
    goto LABEL_28;
  }
  if ( (currentLoadZoneFlags & 0x200000) != 0 )
  {
    AssetEntryIndex = DB_GetAssetEntryIndex(existingEntry);
    if ( AssetEntryIndex >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
      __debugbreak();
    if ( ((0x8000000000000000ui64 >> (AssetEntryIndex & 0x3F)) & s_assetManager.transientOverrides.m_flags.m_data[AssetEntryIndex >> 6]) != 0 )
    {
      v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 1044, ASSERT_TYPE_ASSERT, "(!s_assetManager.transientOverrides.Test( assetEntryIndex ))", (const char *)&queryFormat, "!s_assetManager.transientOverrides.Test( assetEntryIndex )");
      goto LABEL_28;
    }
  }
  else
  {
    if ( (currentLoadZoneFlags & 0x3CFF000) == 0 )
    {
      DB_TransientSetOverrideAsset(existingEntry);
      return;
    }
    v12 = DB_GetAssetEntryIndex(existingEntry);
    if ( DB_AssetEntryFlags::Test(&s_assetManager.transientOverrides, v12) )
    {
      v13 = DB_Zones_GetCurrentZoneLoadName();
      v14 = DB_Zones_GetZoneNameFromIndex(*((_WORD *)existingEntry + 9) & 0x7FF);
      TypeName = DB_AssetEntry::GetTypeName((DB_AssetEntry *)existingEntry);
      v16 = DB_GetXAssetHeaderName(existingEntry->m_type, existingEntry->m_header);
      Com_Printf(16, "DB_TransientLoadAssetIntoExistingDBSlot: Transient asset %s(%s) overridden. Existing zone %s, loading transient zone asset from %s.\n", v16, TypeName, v14, v13);
      v17 = *((_WORD *)existingEntry + 9) & 0x7FF;
      if ( DB_Zones_IsTransientOrTransientPreloadZoneIndex(v17) )
      {
        DB_DumpAssetAndStashes(existingEntry);
        v18 = DB_Zones_GetZoneNameFromIndex(v17);
        v19 = DB_AssetEntry::GetTypeName((DB_AssetEntry *)existingEntry);
        v20 = DB_GetXAssetHeaderName(existingEntry->m_type, existingEntry->m_header);
        v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 1074, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s(%s) marked as a transient override. Head asset should not be in a transient zone. It's in '%s'", v20, v19, v18);
LABEL_28:
        if ( v11 )
          __debugbreak();
      }
    }
  }
}

/*
==============
DB_TransientSPPostLoadEnd
==============
*/
void DB_TransientSPPostLoadEnd(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6412, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  DB_PostLoadContinueDBWork();
}

/*
==============
DB_TransientSPPostLoadStart
==============
*/
void DB_TransientSPPostLoadStart(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6397, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( g_dbPreloading && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6400, ASSERT_TYPE_ASSERT, "(!g_dbPreloading)", (const char *)&queryFormat, "!g_dbPreloading") )
    __debugbreak();
  if ( !s_spTransientGameWaitingForPostLoad && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6402, ASSERT_TYPE_ASSERT, "(DB_IsTransientSPGameWaitingForPostLoad())", (const char *)&queryFormat, "DB_IsTransientSPGameWaitingForPostLoad()") )
    __debugbreak();
  CL_TransientsSP_ClientCodeCheck();
  DB_PostLoadXZone(1);
}

/*
==============
DB_TransientSetOverrideAsset
==============
*/
void DB_TransientSetOverrideAsset(const DB_AssetEntry *assetEntry)
{
  unsigned __int64 AssetEntryIndex; 
  unsigned __int64 v3; 
  int m_type; 
  const char *XAssetHeaderName; 
  int v6; 
  const char *v7; 
  const char *CurrentZoneLoadName; 
  const char *ZoneNameFromIndex; 
  const char *TypeName; 
  const char *v11; 

  AssetEntryIndex = DB_GetAssetEntryIndex(assetEntry);
  if ( AssetEntryIndex >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  v3 = 0x8000000000000000ui64 >> (AssetEntryIndex & 0x3F);
  if ( (v3 & s_assetManager.transientOverrides.m_flags.m_data[AssetEntryIndex >> 6]) == 0 )
  {
    if ( AssetEntryIndex >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 181, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
      __debugbreak();
    s_assetManager.transientOverrides.m_flags.m_data[AssetEntryIndex >> 6] |= v3;
    m_type = assetEntry->m_type;
    XAssetHeaderName = DB_GetXAssetHeaderName(m_type, assetEntry->m_header);
    if ( CL_TransientsMP_IsRegisteredAsset(XAssetHeaderName, (const XAssetType)m_type) )
    {
      v6 = assetEntry->m_type;
      v7 = DB_GetXAssetHeaderName(v6, assetEntry->m_header);
      CL_TransientsMP_SetOverridden(v7, (const XAssetType)v6);
      CurrentZoneLoadName = DB_Zones_GetCurrentZoneLoadName();
      ZoneNameFromIndex = DB_Zones_GetZoneNameFromIndex(*((_WORD *)assetEntry + 9) & 0x7FF);
      TypeName = DB_AssetEntry::GetTypeName((DB_AssetEntry *)assetEntry);
      v11 = DB_GetXAssetHeaderName(assetEntry->m_type, assetEntry->m_header);
      Com_Printf(16, "Transient asset %s(%s) overridden. Existing zone %s, loading zone %s.\n", v11, TypeName, ZoneNameFromIndex, CurrentZoneLoadName);
    }
  }
}

/*
==============
DB_TransientUnloadHeadAsset
==============
*/
void DB_TransientUnloadHeadAsset(const DB_AssetEntry *assetEntry)
{
  unsigned __int64 AssetEntryIndex; 
  unsigned __int64 v3; 
  unsigned int v4; 
  unsigned __int64 v5; 
  TransientGroupFlags *transientFlags; 
  int m_type; 
  const char *XAssetHeaderName; 
  const char *ZoneNameFromIndex; 
  __int64 v10; 
  const char *v11; 
  const char *v12; 
  const char *v13; 
  __int64 v14; 

  AssetEntryIndex = DB_GetAssetEntryIndex(assetEntry);
  if ( AssetEntryIndex >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  v3 = 0x8000000000000000ui64 >> (AssetEntryIndex & 0x3F);
  if ( (v3 & s_assetManager.transientOverrides.m_flags.m_data[AssetEntryIndex >> 6]) != 0 )
  {
    v4 = 0;
    v5 = DB_GetAssetEntryIndex(assetEntry);
    transientFlags = s_assetManager.transientFlags;
    while ( 1 )
    {
      if ( v5 >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
        __debugbreak();
      if ( ((0x8000000000000000ui64 >> (v5 & 0x3F)) & transientFlags->headAssets.m_flags.m_data[v5 >> 6]) != 0 )
        break;
      ++v4;
      ++transientFlags;
      if ( v4 >= 3 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 1096, ASSERT_TYPE_ASSERT, "(DB_IsTransientAssetHeadEntry( assetEntry ))", (const char *)&queryFormat, "DB_IsTransientAssetHeadEntry( assetEntry )") )
          __debugbreak();
        break;
      }
    }
    m_type = assetEntry->m_type;
    XAssetHeaderName = DB_GetXAssetHeaderName(m_type, assetEntry->m_header);
    CL_TransientsMP_ResetOverridden(XAssetHeaderName, (const XAssetType)m_type);
    if ( AssetEntryIndex >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 209, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
      __debugbreak();
    s_assetManager.transientOverrides.m_flags.m_data[AssetEntryIndex >> 6] &= ~v3;
    ZoneNameFromIndex = DB_Zones_GetZoneNameFromIndex(*((_WORD *)assetEntry + 9) & 0x7FF);
    v10 = assetEntry->m_type;
    v11 = ZoneNameFromIndex;
    if ( (unsigned int)v10 >= 0x71 )
    {
      LODWORD(v14) = assetEntry->m_type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v14, 113) )
        __debugbreak();
    }
    v12 = g_assetNames[v10];
    v13 = DB_GetXAssetHeaderName(assetEntry->m_type, assetEntry->m_header);
    Com_Printf(16, "DB_TransientUnloadHeadAsset: Transient asset %s(%s) override is reset. Asset override zone %s.\n", v13, v12, v11);
  }
}

/*
==============
DB_TransientXModelSurfsFixup
==============
*/
void DB_TransientXModelSurfsFixup(XAssetType type, const char *name, const int zoneIndex)
{
  DB_AssetEntry *Asset; 
  unsigned __int64 m_nextStashed; 
  __int64 v8; 
  XModel *physicsLibrary; 

  if ( type != ASSET_TYPE_XMODEL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3096, ASSERT_TYPE_ASSERT, "(type == ASSET_TYPE_XMODEL)", (const char *)&queryFormat, "type == ASSET_TYPE_XMODEL") )
    __debugbreak();
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3098, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !Sys_IsDatabaseReady() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3099, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseReady())", (const char *)&queryFormat, "Sys_IsDatabaseReady()") )
    __debugbreak();
  Asset = DB_AssetEntryTable::FindAsset(&s_assetManager.table, name, type);
  if ( Asset )
  {
    while ( (*((_WORD *)Asset + 9) & 0x7FF) != zoneIndex )
    {
      m_nextStashed = Asset->m_nextStashed;
      if ( (_DWORD)m_nextStashed )
      {
        v8 = (unsigned int)m_nextStashed;
        if ( m_nextStashed >= 0x5DA00 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 358, ASSERT_TYPE_ASSERT, "( index < m_data.size() )", (const char *)&queryFormat, "index < m_data.size()") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
            __debugbreak();
        }
        Asset = (DB_AssetEntry *)((char *)&s_assetManager + 20 * v8);
        if ( Asset )
          continue;
      }
      return;
    }
    physicsLibrary = (XModel *)Asset->m_header.physicsLibrary;
    if ( !physicsLibrary && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3107, ASSERT_TYPE_ASSERT, "(assetHeader.model)", (const char *)&queryFormat, "assetHeader.model") )
      __debugbreak();
    DB_ModelFixup_FixXModel(physicsLibrary);
  }
}

/*
==============
DB_TryFastTransientCancel
==============
*/
_BOOL8 DB_TryFastTransientCancel(const char *zoneName)
{
  bool v2; 
  bool v3; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 8125, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !zoneName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 8127, ASSERT_TYPE_ASSERT, "(zoneName)", (const char *)&queryFormat, "zoneName") )
    __debugbreak();
  DB_LockPendingZoneWrite();
  v2 = DB_PendingZones_TryFastTransientCancel(zoneName);
  s_assetManager.pendingZoneLock.writeThreadId = 0;
  v3 = v2;
  ReleaseSRWLockExclusive((PSRWLOCK)&s_assetManager.pendingZoneLock);
  Sys_CheckReleaseLock(&s_assetManager.pendingZoneLock);
  return v3;
}

/*
==============
DB_TryLoadXFile
==============
*/
void DB_TryLoadXFile()
{
  bool v0; 
  char v1; 
  int v2; 
  unsigned __int64 v3; 
  bool v4; 
  bool v5; 
  char v6; 
  bool Next; 
  int ZoneIndexFromName; 
  unsigned __int64 v9; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 
  unsigned __int64 v13; 
  bool v14; 
  int v15; 
  const char *v16; 
  int v17; 
  const char *v18; 
  unsigned int v19; 
  int LogChannel; 
  bool v21; 
  const char *v22; 
  unsigned int v23; 
  int v24; 
  const char *v25; 
  unsigned int v26; 
  int v27; 
  unsigned int v28; 
  bool IsActive; 
  char v30; 
  __int64 wasPaused; 
  __int64 priority; 
  __int64 v33; 
  unsigned __int64 v34; 
  char v35; 
  char v36; 
  int v37; 
  int v38; 

  v0 = 0;
  v1 = 0;
  v2 = 0;
  v35 = 0;
  v37 = 0;
  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 8882, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  if ( !Sys_IsDatabaseReady() )
  {
    if ( !s_dbLoadingFastfiles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 8890, ASSERT_TYPE_ASSERT, "(s_dbLoadingFastfiles)", (const char *)&queryFormat, "s_dbLoadingFastfiles") )
      __debugbreak();
    if ( s_assetManager.attemptedLoads.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 8891, ASSERT_TYPE_ASSERT, "(s_assetManager.attemptedLoads.empty())", (const char *)&queryFormat, "s_assetManager.attemptedLoads.empty()") )
      __debugbreak();
    if ( Sys_GetDatabaseStopServer() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 8894, ASSERT_TYPE_ASSERT, "(!Sys_GetDatabaseStopServer())", (const char *)&queryFormat, "!Sys_GetDatabaseStopServer()") )
      __debugbreak();
    v3 = (unsigned __int64)&s_registryState & 3;
    v34 = (unsigned __int64)&s_registryState & 3;
    if ( ((unsigned __int8)&s_registryState & 3) != 0 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_registryState) )
        __debugbreak();
      v3 = (unsigned __int64)&s_registryState & 3;
    }
    if ( _InterlockedCompareExchange((volatile signed __int32 *)&s_registryState, 2, 0) )
    {
      if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_registryState) )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 8899, ASSERT_TYPE_ASSERT, "( Sys_InterlockedCompareExchange( reinterpret_cast<volatile_int32*>( &s_registryState ), REGISTRY_STATE_DB_THREAD, REGISTRY_STATE_IDLE ) ) == ( REGISTRY_STATE_IDLE )", "%s == %s\n\t%i, %i", "Sys_InterlockedCompareExchange( reinterpret_cast<volatile_int32*>( &s_registryState ), REGISTRY_STATE_DB_THREAD, REGISTRY_STATE_IDLE )", "REGISTRY_STATE_IDLE", _InterlockedCompareExchange((volatile signed __int32 *)&s_registryState, 2, 0), 0i64) )
        __debugbreak();
    }
    if ( s_dbWorkPeriod != ReadyToFlush && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 8902, ASSERT_TYPE_ASSERT, "(s_dbWorkPeriod == DB_WorkPeriod::Awake)", (const char *)&queryFormat, "s_dbWorkPeriod == DB_WorkPeriod::Awake") )
      __debugbreak();
    s_dbWorkPeriod = Flushing;
    v38 = Sys_Milliseconds();
    Stream_DBPreFastfilesLoad();
    v36 = 0;
    s_dbLoadingProcessedAssets = 1;
    DB_LoadTimes_FastfileLoadStarted();
    s_dbWorkPeriodZone[0] = 0;
    if ( s_dbWorkPeriod != Flushing && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 8934, ASSERT_TYPE_ASSERT, "(s_dbWorkPeriod == DB_WorkPeriod::PreparingFastfileLoad)", (const char *)&queryFormat, "s_dbWorkPeriod == DB_WorkPeriod::PreparingFastfileLoad") )
      __debugbreak();
    s_dbWorkPeriod = Flushing|ReadyToFlush;
    while ( 1 )
    {
      while ( 1 )
      {
        v4 = 0;
        v5 = 0;
        v6 = 0;
        DB_LockPendingZoneWrite();
        if ( s_assetManager.pendingZoneCancelled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 8948, ASSERT_TYPE_ASSERT, "(!s_assetManager.pendingZoneCancelled)", (const char *)&queryFormat, "!s_assetManager.pendingZoneCancelled") )
          __debugbreak();
        if ( s_assetManager.pendingZonePaused && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 8949, ASSERT_TYPE_ASSERT, "(!s_assetManager.pendingZonePaused)", (const char *)&queryFormat, "!s_assetManager.pendingZonePaused") )
          __debugbreak();
        Next = DB_PendingZones_TryGetNext(&s_assetManager.pendingZoneInfo);
        if ( Next )
        {
          LoadBar_CheckForDBStart();
          Core_strcpy_truncate(s_dbWorkPeriodZone, 0x40ui64, s_assetManager.pendingZoneInfo.fastfileName);
          ZoneIndexFromName = DB_Zones_GetZoneIndexFromName(s_assetManager.pendingZoneInfo.fastfileName);
          v9 = ZoneIndexFromName;
          if ( ZoneIndexFromName != 0xFFFF )
          {
            v10 = ZoneIndexFromName;
            if ( (unsigned __int64)ZoneIndexFromName >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
              __debugbreak();
            v11 = v9 >> 6;
            v12 = 0x8000000000000000ui64 >> (v9 & 0x3F);
            if ( (v12 & s_assetManager.pausedZones.m_data[v9 >> 6]) != 0 )
            {
              v4 = 1;
              v35 = 1;
              if ( v10 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
                __debugbreak();
              if ( (v12 & s_assetManager.thisLoadPassZones.m_data[v11]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 8975, ASSERT_TYPE_ASSERT, "(!s_assetManager.thisLoadPassZones.test( zoneIndex ))", (const char *)&queryFormat, "!s_assetManager.thisLoadPassZones.test( zoneIndex )") )
                __debugbreak();
              if ( v10 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
                __debugbreak();
              if ( (v12 & s_assetManager.cancelledZones.m_data[v11]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 8976, ASSERT_TYPE_ASSERT, "(!s_assetManager.cancelledZones.test( zoneIndex ))", (const char *)&queryFormat, "!s_assetManager.cancelledZones.test( zoneIndex )") )
                __debugbreak();
              if ( v10 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
                __debugbreak();
              if ( (v12 & s_assetManager.fullyLoadedZones.m_data[v11]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 8977, ASSERT_TYPE_ASSERT, "(!s_assetManager.fullyLoadedZones.test( zoneIndex ))", (const char *)&queryFormat, "!s_assetManager.fullyLoadedZones.test( zoneIndex )") )
                __debugbreak();
              if ( v10 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
                __debugbreak();
              if ( (v12 & s_assetManager.assetsLoadedZones.m_data[v11]) != 0 )
              {
                v6 = 1;
                if ( v10 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 181, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
                  __debugbreak();
                s_assetManager.thisLoadPassZones.m_data[v11] |= v12;
              }
              if ( v10 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 209, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
                __debugbreak();
              s_assetManager.pausedZones.m_data[v11] &= ~v12;
            }
            else
            {
              v5 = 1;
              if ( !DB_Zones_IsPreloadZoneIndex(v9) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 8993, ASSERT_TYPE_ASSERT, "(DB_Zones_IsPreloadZoneIndex( zoneIndex ))", "%s\n\tZone %s is already loaded", "DB_Zones_IsPreloadZoneIndex( zoneIndex )", s_assetManager.pendingZoneInfo.fastfileName) )
                __debugbreak();
              if ( v10 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
                __debugbreak();
              if ( (v12 & s_assetManager.fullyLoadedZones.m_data[v11]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 8995, ASSERT_TYPE_ASSERT, "(s_assetManager.fullyLoadedZones.test( zoneIndex ))", (const char *)&queryFormat, "s_assetManager.fullyLoadedZones.test( zoneIndex )") )
                __debugbreak();
              if ( v10 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
                __debugbreak();
              if ( (v12 & s_assetManager.pausedZones.m_data[v11]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 8996, ASSERT_TYPE_ASSERT, "(!s_assetManager.pausedZones.test( zoneIndex ))", (const char *)&queryFormat, "!s_assetManager.pausedZones.test( zoneIndex )") )
                __debugbreak();
              if ( v10 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
                __debugbreak();
              if ( (v12 & s_assetManager.cancelledZones.m_data[v11]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 8997, ASSERT_TYPE_ASSERT, "(!s_assetManager.cancelledZones.test( zoneIndex ))", (const char *)&queryFormat, "!s_assetManager.cancelledZones.test( zoneIndex )") )
                __debugbreak();
              if ( v10 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
                __debugbreak();
              if ( (v12 & s_assetManager.deferredZones.m_data[v11]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 8998, ASSERT_TYPE_ASSERT, "(!s_assetManager.deferredZones.test( zoneIndex ))", (const char *)&queryFormat, "!s_assetManager.deferredZones.test( zoneIndex )") )
                __debugbreak();
              if ( v10 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
                __debugbreak();
              if ( (v12 & s_assetManager.assetsLoadedZones.m_data[v11]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 8999, ASSERT_TYPE_ASSERT, "(s_assetManager.assetsLoadedZones.test( zoneIndex ))", (const char *)&queryFormat, "s_assetManager.assetsLoadedZones.test( zoneIndex )") )
                __debugbreak();
              if ( v10 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 209, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
                __debugbreak();
              v13 = ~v12;
              s_assetManager.assetsLoadedZones.m_data[v11] &= v13;
              if ( v10 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 209, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
                __debugbreak();
              s_assetManager.fullyLoadedZones.m_data[v11] &= v13;
            }
            v1 = v35;
            v0 = v36;
          }
          v2 = v37;
        }
        s_assetManager.pendingZoneLock.writeThreadId = 0;
        ReleaseSRWLockExclusive((PSRWLOCK)&s_assetManager.pendingZoneLock);
        Sys_CheckReleaseLock(&s_assetManager.pendingZoneLock);
        if ( !Next )
        {
          if ( s_dbWorkPeriod != (Flushing|ReadyToFlush) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 9072, ASSERT_TYPE_ASSERT, "(s_dbWorkPeriod == DB_WorkPeriod::LoadingFastfiles)", (const char *)&queryFormat, "s_dbWorkPeriod == DB_WorkPeriod::LoadingFastfiles") )
            __debugbreak();
          s_dbWorkPeriod = 4;
          DB_LoadTimes_FastfileLoadFinished(v0);
          if ( v0 )
          {
            ProfLoad_DB_Begin("Fixup Assets");
            DB_ModelFixup_TryFullFixup();
            ProfLoad_DB_End();
          }
          else
          {
            s_dbZoneAllocDone = 1;
          }
          v19 = Sys_Milliseconds() - v38;
          LogChannel = DB_GetLogChannel();
          Com_Printf(LogChannel, "Fastfile load... Loaded resident assets @ %ims. (1/3)\n", v19);
          v21 = Stream_DBPostFastfilesLoad();
          if ( v1 )
          {
            ProfLoad_DB_Begin("AlwaysLoaded Assets");
            s_dbWorkPeriod = 6;
            if ( v0 )
              DB_LoadTimes_AlwaysLoadedStarted();
            if ( !v21 )
              s_assetManager.redoAlwaysloadedFlagsForPauseOrCancel = 0;
            Stream_AlwaysLoaded_QueueProcessStreamingInfo();
            if ( DB_AlwaysLoadedImages_ShouldWaitForLoading() )
              DB_WaitForAlwaysLoadedAssets();
            if ( v0 )
              DB_LoadTimes_AlwaysLoadedFinished();
            ProfLoad_DB_End();
            v22 = "Fastfile load... Loaded alwaysloaded assets @ %ims. (2/3)\n";
          }
          else
          {
            v22 = "Fastfile load... Skipped loading alwaysloaded assets @ %ims. (2/3)\n";
          }
          v23 = Sys_Milliseconds() - v38;
          v24 = DB_GetLogChannel();
          Com_Printf(v24, v22, v23);
          if ( v21 )
          {
            ProfLoad_DB_Begin("Sound banks");
            s_dbWorkPeriod = 5;
            if ( SND_Active() )
              SND_LoadSoundsWait(0);
            ProfLoad_DB_End();
            v25 = "Fastfile load... Loaded soundbanks @ %ims. (3/3)\n";
          }
          else
          {
            v25 = "Fastfile load... Skipped loading soundbanks @ %ims. (3/3)\n";
          }
          v26 = Sys_Milliseconds() - v38;
          v27 = DB_GetLogChannel();
          Com_Printf(v27, v25, v26);
          v28 = s_dbCurrentWorkFlags;
          if ( (s_dbCurrentWorkFlags & 0x5000) != 0 )
          {
            if ( (v37 & 0xFFFFAFFF) != 0 )
            {
              LODWORD(wasPaused) = v37;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 9149, ASSERT_TYPE_ASSERT, "( ( ( flagsLoaded & ~DB_MASK_TRANSIENT_SP_ZONES ) == 0 ) )", "( flagsLoaded ) = %i", wasPaused) )
                __debugbreak();
              v28 = s_dbCurrentWorkFlags;
            }
            if ( (v28 & 0xFFFFAFFF) != 0 )
            {
              LODWORD(wasPaused) = v28;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 9150, ASSERT_TYPE_ASSERT, "( ( ( s_dbCurrentWorkFlags & ~DB_MASK_TRANSIENT_SP_ZONES ) == 0 ) )", "( s_dbCurrentWorkFlags ) = %i", wasPaused) )
                __debugbreak();
            }
            if ( s_spTransientGameWaitingForPostLoad && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 9155, ASSERT_TYPE_ASSERT, "(!s_spTransientGameWaitingForPostLoad)", (const char *)&queryFormat, "!s_spTransientGameWaitingForPostLoad") )
              __debugbreak();
            s_spTransientGameWaitingForPostLoad = 1;
          }
          else if ( (s_dbCurrentWorkFlags & 0x38FA000) != 0 )
          {
            if ( (v37 & 0xFC705FFF) != 0 )
            {
              LODWORD(wasPaused) = v37;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 9161, ASSERT_TYPE_ASSERT, "( ( ( flagsLoaded & ~DB_MASK_STREAM_MP_ZONES ) == 0 ) )", "( flagsLoaded ) = %i", wasPaused) )
                __debugbreak();
              v28 = s_dbCurrentWorkFlags;
            }
            if ( (v28 & 0xFC705FFF) != 0 )
            {
              LODWORD(wasPaused) = v28;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 9162, ASSERT_TYPE_ASSERT, "( ( ( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_MP_ZONES ) == 0 ) )", "( s_dbCurrentWorkFlags ) = %i", wasPaused) )
                __debugbreak();
            }
          }
          else
          {
            ProfLoad_DB_Begin("Sys_DatabaseStopServerAndWait");
            Sys_DatabaseStopServerAndWait();
            ProfLoad_DB_End();
          }
          IsActive = ProfLoad_IsActive();
          v30 = s_dbProfilingLoadedFastFile;
          if ( IsActive )
            v30 = 1;
          s_dbProfilingLoadedFastFile = v30;
          s_dbWorkPeriod = ReadyToFlush;
          if ( v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_registryState) )
            __debugbreak();
          if ( _InterlockedCompareExchange((volatile signed __int32 *)&s_registryState, 0, 2) != 2 )
          {
            if ( v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_registryState) )
              __debugbreak();
            LODWORD(v33) = 2;
            LODWORD(priority) = _InterlockedCompareExchange((volatile signed __int32 *)&s_registryState, 0, 2);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 9185, ASSERT_TYPE_ASSERT, "( Sys_InterlockedCompareExchange( reinterpret_cast<volatile_int32*>( &s_registryState ), REGISTRY_STATE_IDLE, REGISTRY_STATE_DB_THREAD ) ) == ( REGISTRY_STATE_DB_THREAD )", "%s == %s\n\t%i, %i", "Sys_InterlockedCompareExchange( reinterpret_cast<volatile_int32*>( &s_registryState ), REGISTRY_STATE_IDLE, REGISTRY_STATE_DB_THREAD )", "REGISTRY_STATE_DB_THREAD", priority, v33) )
              __debugbreak();
          }
          if ( !s_dbLoadingProcessedAssets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 9188, ASSERT_TYPE_ASSERT, "(s_dbLoadingProcessedAssets)", (const char *)&queryFormat, "s_dbLoadingProcessedAssets") )
            __debugbreak();
          if ( !s_dbLoadingFastfiles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 9189, ASSERT_TYPE_ASSERT, "(s_dbLoadingFastfiles)", (const char *)&queryFormat, "s_dbLoadingFastfiles") )
            __debugbreak();
          if ( v0 )
            DB_LoadTimes_StreamSyncStarted();
          Sys_SetDatabaseReady();
          return;
        }
        if ( !s_assetManager.pendingZoneInfo.flags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 9012, ASSERT_TYPE_ASSERT, "(pendingZoneInfo.flags)", (const char *)&queryFormat, "pendingZoneInfo.flags") )
          __debugbreak();
        if ( !s_assetManager.pendingZoneInfo.parentZoneName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 9013, ASSERT_TYPE_ASSERT, "(pendingZoneInfo.parentZoneName[0] != '\\0')", (const char *)&queryFormat, "pendingZoneInfo.parentZoneName[0] != '\\0'") )
          __debugbreak();
        if ( !s_assetManager.pendingZoneInfo.fastfileName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 9014, ASSERT_TYPE_ASSERT, "(pendingZoneInfo.fastfileName[0] != '\\0')", (const char *)&queryFormat, "pendingZoneInfo.fastfileName[0] != '\\0'") )
          __debugbreak();
        v14 = s_assetManager.attemptedLoads.m_size < 0x7A4;
        if ( s_assetManager.attemptedLoads.m_size == 1956 )
        {
          Sys_Error((const ObfuscateErrorText)&stru_143F929B0);
          v14 = s_assetManager.attemptedLoads.m_size < 0x7A4;
        }
        if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 190, ASSERT_TYPE_ASSERT, "( size() < max_size() )", (const char *)&queryFormat, "size() < max_size()") )
          __debugbreak();
        *(DB_PendingZoneInfo *)&s_assetManager.attemptedLoads.m_data.m_buffer[144 * s_assetManager.attemptedLoads.m_size] = s_assetManager.pendingZoneInfo;
        v2 |= s_assetManager.pendingZoneInfo.flags;
        ++s_assetManager.attemptedLoads.m_size;
        v37 = v2;
        if ( v6 )
          break;
        LoadBar_BeginFastfile(s_assetManager.pendingZoneInfo.fastfileName, s_assetManager.pendingZoneInfo.flags);
        if ( DB_TryLoadXFileInternal(s_assetManager.pendingZoneInfo.fastfileName, s_assetManager.pendingZoneInfo.parentZoneName, s_assetManager.pendingZoneInfo.flags, s_assetManager.pendingZoneInfo.isBaseMap, v5, v4, (const DB_FastFileFailureMode)s_assetManager.pendingZoneInfo.failureMode, s_assetManager.pendingZoneInfo.priority) )
        {
          if ( s_assetManager.pendingZoneInfo.fastfileName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 9050, ASSERT_TYPE_ASSERT, "(pendingZoneInfo.fastfileName[0] == '\\0')", (const char *)&queryFormat, "pendingZoneInfo.fastfileName[0] == '\\0'") )
            __debugbreak();
          v0 = 1;
          v36 = 1;
          v1 = 1;
          v35 = 1;
          LoadBar_FinishFastfile();
        }
        else
        {
          if ( s_assetManager.pendingZoneInfo.fastfileName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 9058, ASSERT_TYPE_ASSERT, "(pendingZoneInfo.fastfileName[0] == '\\0')", (const char *)&queryFormat, "pendingZoneInfo.fastfileName[0] == '\\0'") )
            __debugbreak();
          if ( !s_assetManager.attemptedLoads.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 204, ASSERT_TYPE_ASSERT, "( !empty() )", "Vector is empty, nothing to pop!") )
            __debugbreak();
          --s_assetManager.attemptedLoads.m_size;
          LoadBar_FinishFastfile();
        }
      }
      DB_LockPendingZoneWrite();
      Com_Printf(16, "DB_TryLoadXFile: alreadyLoadedAssets is set: '%s'\n", s_assetManager.pendingZoneInfo.fastfileName);
      v15 = DB_Zones_GetZoneIndexFromName(s_assetManager.pendingZoneInfo.fastfileName);
      if ( v15 == 0xFFFF )
      {
        v16 = "zoneIndex != INVALID_ZONE_INDEX";
        v17 = 9032;
        v18 = "(zoneIndex != INVALID_ZONE_INDEX)";
      }
      else
      {
        if ( v15 )
          goto LABEL_137;
        v16 = "zoneIndex != DEFAULT_ZONE_INDEX";
        v17 = 9033;
        v18 = "(zoneIndex != DEFAULT_ZONE_INDEX)";
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", v17, ASSERT_TYPE_ASSERT, v18, (const char *)&queryFormat, v16) )
        __debugbreak();
LABEL_137:
      DB_PendingLoadFinalizePauseAndCancel(s_assetManager.pendingZoneInfo.fastfileName, v15);
      DB_ClearPendingZoneInfo();
      s_assetManager.pendingZoneLock.writeThreadId = 0;
      ReleaseSRWLockExclusive((PSRWLOCK)&s_assetManager.pendingZoneLock);
      Sys_CheckReleaseLock(&s_assetManager.pendingZoneLock);
      v2 = v37;
    }
  }
}

/*
==============
DB_TryLoadXFileInternal
==============
*/
_BOOL8 DB_TryLoadXFileInternal(const char *const zoneName, const char *const parentZoneName, const unsigned int zoneFlags, const bool isBaseMap, const bool processPreloadedZone, const bool wasPaused, const DB_FastFileFailureMode failureMode)
{
  bool v10; 
  unsigned __int64 v11; 
  bool v12; 
  unsigned __int64 v13; 
  unsigned __int64 v14; 
  DB_LoadXFileReturn v15; 
  unsigned __int16 WorldTransientIndexFromZoneIndex; 
  unsigned __int64 v17; 
  unsigned int v18; 
  int LogChannel; 
  int v20; 
  unsigned __int16 v22; 
  int v23; 
  unsigned __int64 v24; 

  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 8363, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  ProfLoad_DB_Begin("DB_TryLoadXFileInternal");
  v23 = Sys_Milliseconds();
  if ( DB_Zones_BeginZoneLoad(zoneName, parentZoneName, zoneFlags, processPreloadedZone, wasPaused) )
  {
    LOWORD(v11) = DB_Zones_GetCurrentZoneLoadIndex();
    v22 = v11;
    if ( !(_WORD)v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 8386, ASSERT_TYPE_ASSERT, "(currentZoneLoadIndex != DEFAULT_ZONE_INDEX)", (const char *)&queryFormat, "currentZoneLoadIndex != DEFAULT_ZONE_INDEX", 0) )
      __debugbreak();
    s_dbZoneAllocDone = 1;
    if ( (zoneFlags & 1) != 0 && DB_Zones_NameEndsWith(zoneName, "code_post_gfx") )
    {
      if ( !s_dbIsSyncLoading && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 8407, ASSERT_TYPE_ASSERT, "(s_dbIsSyncLoading)", (const char *)&queryFormat, "s_dbIsSyncLoading") )
        __debugbreak();
      s_loadingCodePostGfx = 1;
    }
    if ( (zoneFlags & 0x38FF100) == 0 )
      Stream_LoadSync_SetSPWaitType(NO_WAIT_AFTER_LEVEL_LOAD);
    if ( s_dbDeferAssets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 8423, ASSERT_TYPE_ASSERT, "(!s_dbDeferAssets)", (const char *)&queryFormat, "!s_dbDeferAssets") )
      __debugbreak();
    v12 = s_dbDeferAssets;
    if ( (zoneFlags & 0x3F00000) != 0 )
      v12 = 1;
    if ( (zoneFlags & 0xFF000) != 0 )
      v12 = 1;
    s_dbDeferAssets = v12;
    if ( (zoneFlags & 8) != 0 )
    {
      if ( s_assetManager.forceStubbedDataLoaded && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 8442, ASSERT_TYPE_ASSERT, "(!s_assetManager.forceStubbedDataLoaded)", (const char *)&queryFormat, "!s_assetManager.forceStubbedDataLoaded") )
        __debugbreak();
      s_assetManager.forceStubbedDataLoading = 1;
    }
    DB_LockPendingZoneWrite();
    v11 = (unsigned __int16)v11;
    if ( (unsigned __int16)v11 >= 0x7A4ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
      __debugbreak();
    v13 = v11 >> 6;
    v24 = v11 >> 6;
    v14 = 0x8000000000000000ui64 >> (v11 & 0x3F);
    if ( (v14 & s_assetManager.cancelledZones.m_data[v11 >> 6]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 8448, ASSERT_TYPE_ASSERT, "(!s_assetManager.cancelledZones.test( currentZoneLoadIndex ))", (const char *)&queryFormat, "!s_assetManager.cancelledZones.test( currentZoneLoadIndex )") )
      __debugbreak();
    if ( v11 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
      __debugbreak();
    if ( (v14 & s_assetManager.pausedZones.m_data[v13]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 8449, ASSERT_TYPE_ASSERT, "(!s_assetManager.pausedZones.test( currentZoneLoadIndex ))", (const char *)&queryFormat, "!s_assetManager.pausedZones.test( currentZoneLoadIndex )") )
      __debugbreak();
    if ( v11 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
      __debugbreak();
    if ( (v14 & s_assetManager.thisLoadPassZones.m_data[v13]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 8450, ASSERT_TYPE_ASSERT, "(!s_assetManager.thisLoadPassZones.test( currentZoneLoadIndex ))", (const char *)&queryFormat, "!s_assetManager.thisLoadPassZones.test( currentZoneLoadIndex )") )
      __debugbreak();
    if ( v11 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 181, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
      __debugbreak();
    s_assetManager.thisLoadPassZones.m_data[v13] |= v14;
    if ( wasPaused )
    {
      if ( v11 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
        __debugbreak();
      if ( s_dbDeferAssets != ((v14 & s_assetManager.deferredZones.m_data[v13]) != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 8454, ASSERT_TYPE_ASSERT, "(s_dbDeferAssets == s_assetManager.deferredZones.test( currentZoneLoadIndex ))", (const char *)&queryFormat, "s_dbDeferAssets == s_assetManager.deferredZones.test( currentZoneLoadIndex )") )
        __debugbreak();
    }
    else
    {
      if ( v11 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
        __debugbreak();
      if ( (v14 & s_assetManager.deferredZones.m_data[v13]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 8458, ASSERT_TYPE_ASSERT, "(!s_assetManager.deferredZones.test( currentZoneLoadIndex ))", (const char *)&queryFormat, "!s_assetManager.deferredZones.test( currentZoneLoadIndex )") )
        __debugbreak();
      if ( s_dbDeferAssets )
      {
        if ( v11 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 181, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
          __debugbreak();
        s_assetManager.deferredZones.m_data[v13] |= v14;
      }
    }
    s_assetManager.pendingZoneLock.writeThreadId = 0;
    ReleaseSRWLockExclusive((PSRWLOCK)&s_assetManager.pendingZoneLock);
    Sys_CheckReleaseLock(&s_assetManager.pendingZoneLock);
    v15 = DB_Zones_PerformZoneLoad(processPreloadedZone, isBaseMap, wasPaused, failureMode);
    g_debugZoneLoaded = v15 == READY;
    if ( v15 == READY && (zoneFlags & 0x5000) != 0 )
    {
      WorldTransientIndexFromZoneIndex = DB_Zones_GetWorldTransientIndexFromZoneIndex(v22);
      CL_Transients_GameSystemsTransientSP_LoadDB(WorldTransientIndexFromZoneIndex);
    }
    DB_LockPendingZoneWrite();
    if ( v11 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
      __debugbreak();
    if ( (v14 & s_assetManager.assetsLoadedZones.m_data[v24]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 8483, ASSERT_TYPE_ASSERT, "(!s_assetManager.assetsLoadedZones.test( currentZoneLoadIndex ))", (const char *)&queryFormat, "!s_assetManager.assetsLoadedZones.test( currentZoneLoadIndex )") )
      __debugbreak();
    if ( v11 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
      __debugbreak();
    if ( (v14 & s_assetManager.fullyLoadedZones.m_data[v24]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 8484, ASSERT_TYPE_ASSERT, "(!s_assetManager.fullyLoadedZones.test( currentZoneLoadIndex ))", (const char *)&queryFormat, "!s_assetManager.fullyLoadedZones.test( currentZoneLoadIndex )") )
      __debugbreak();
    if ( v11 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
      __debugbreak();
    if ( (v14 & s_assetManager.pausedZones.m_data[v24]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 8485, ASSERT_TYPE_ASSERT, "(!s_assetManager.pausedZones.test( currentZoneLoadIndex ))", (const char *)&queryFormat, "!s_assetManager.pausedZones.test( currentZoneLoadIndex )") )
      __debugbreak();
    if ( v11 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
      __debugbreak();
    if ( (v14 & s_assetManager.cancelledZones.m_data[v24]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 8486, ASSERT_TYPE_ASSERT, "(!s_assetManager.cancelledZones.test( currentZoneLoadIndex ))", (const char *)&queryFormat, "!s_assetManager.cancelledZones.test( currentZoneLoadIndex )") )
      __debugbreak();
    v10 = v15 != LOGIN_DELAY;
    switch ( v15 )
    {
      case LOGIN_DELAY:
        Com_Printf(16, "DB failed zone load: '%s'\n", zoneName);
        if ( v11 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 209, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
          __debugbreak();
        v17 = ~v14;
        s_assetManager.deferredZones.m_data[v24] &= v17;
        if ( v11 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 209, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
          __debugbreak();
        s_assetManager.pausedZones.m_data[v24] &= v17;
        if ( v11 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 209, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
          __debugbreak();
        s_assetManager.cancelledZones.m_data[v24] &= v17;
        if ( v11 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 209, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
          __debugbreak();
        s_assetManager.thisLoadPassZones.m_data[v24] &= v17;
        if ( !DB_Zones_IsOptionalSubZone(zoneName) )
        {
          if ( failureMode == ALLOW_MISSING )
          {
            Com_PrintError(10, "DB Error: Optional Fastfile: Could not find zone '%s'\n", zoneName);
            if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 10893, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
              __debugbreak();
            if ( !zoneFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 10894, ASSERT_TYPE_ASSERT, "(zoneFlags)", "%s\n\tExpected zone flags for optional load error", "zoneFlags") )
              __debugbreak();
            if ( !s_dbLoadingProcessedAssets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 10895, ASSERT_TYPE_ASSERT, "(s_dbLoadingProcessedAssets)", (const char *)&queryFormat, "s_dbLoadingProcessedAssets") )
              __debugbreak();
            DB_ValidateRegistryState();
            s_dbOptionalLoadErrorFlags |= zoneFlags;
          }
          if ( (zoneFlags & 0x600000) != 0 )
          {
            if ( !s_dbLoadingProcessedAssets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 10819, ASSERT_TYPE_ASSERT, "(s_dbLoadingProcessedAssets)", (const char *)&queryFormat, "s_dbLoadingProcessedAssets") )
              __debugbreak();
            s_dbPreloadingError = 1;
            s_dbPreloadingErrorFlags = zoneFlags;
            Core_strcpy(s_dbPreloadingErrorName, 0x40ui64, zoneName);
            Com_PrintError(24, "ERROR: Preloading: Fastfile for zone '%s' failed to load\n", zoneName);
          }
          if ( (zoneFlags & 8) != 0 )
            Com_PrintError(16, "Fast file load failure, s_assetManager.forceStubbedDataLoading will remain set but possibly never detect that it's loaded. We need to update the code to handle this case if we intend to support fast file failure \n");
        }
        break;
      case FIRST_PARTY_AUTHED:
        Com_Printf(16, "DB Canceled zone load: '%s'\n", zoneName);
        break;
      case FETCHING_FIRST_PARTY_TOKEN:
        Com_Printf(16, "DB Paused zone load: '%s'\n", zoneName);
        break;
      default:
        if ( v11 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 181, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
          __debugbreak();
        s_assetManager.assetsLoadedZones.m_data[v24] |= v14;
        v18 = Sys_Milliseconds() - v23;
        LogChannel = DB_GetLogChannel();
        Com_Printf(LogChannel, "Loaded zone '%s' in %ims\n", zoneName, v18);
        break;
    }
    if ( v15 != LOGIN_DELAY )
    {
      v20 = DB_GetLogChannel();
      Com_Printf(v20, "DB_TryLoadXFileInternal: loadSucceeded is set: '%s'\n", zoneName);
      DB_PendingLoadFinalizePauseAndCancel(zoneName, v22);
    }
    DB_ClearPendingZoneInfo();
    s_assetManager.pendingZoneLock.writeThreadId = 0;
    ReleaseSRWLockExclusive((PSRWLOCK)&s_assetManager.pendingZoneLock);
    Sys_CheckReleaseLock(&s_assetManager.pendingZoneLock);
    s_dbDeferAssets = 0;
    s_loadingCodePostGfx = 0;
    SND_BankEnableLoading();
  }
  else
  {
    DB_LockPendingZoneWrite();
    DB_ClearPendingZoneInfo();
    s_assetManager.pendingZoneLock.writeThreadId = 0;
    ReleaseSRWLockExclusive((PSRWLOCK)&s_assetManager.pendingZoneLock);
    Sys_CheckReleaseLock(&s_assetManager.pendingZoneLock);
    v10 = 0;
  }
  ProfLoad_DB_End();
  return v10;
}

/*
==============
DB_TryRedoAlwaysloadedFlagsForPauseOrCancel
==============
*/
void DB_TryRedoAlwaysloadedFlagsForPauseOrCancel(const int zoneIndex)
{
  unsigned __int64 v1; 
  const char *v2; 
  int v3; 
  const char *v4; 
  const char *ZoneNameFromIndex; 

  v1 = zoneIndex;
  if ( zoneIndex )
  {
    if ( zoneIndex != 0xFFFF )
      goto LABEL_7;
    v2 = "zoneIndex != INVALID_ZONE_INDEX";
    v3 = 7916;
    v4 = "(zoneIndex != INVALID_ZONE_INDEX)";
  }
  else
  {
    v2 = "zoneIndex != DEFAULT_ZONE_INDEX";
    v3 = 7915;
    v4 = "(zoneIndex != DEFAULT_ZONE_INDEX)";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", v3, ASSERT_TYPE_ASSERT, v4, (const char *)&queryFormat, v2) )
    __debugbreak();
LABEL_7:
  ZoneNameFromIndex = DB_Zones_GetZoneNameFromIndex(v1);
  Com_Printf(16, "DB_TryRedoAlwaysloadedFlagsForPauseOrCancel: '%s'\n", ZoneNameFromIndex);
  if ( v1 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  if ( ((0x8000000000000000ui64 >> (v1 & 0x3F)) & s_assetManager.thisLoadPassZones.m_data[v1 >> 6]) != 0 )
    s_assetManager.redoAlwaysloadedFlagsForPauseOrCancel = 1;
}

/*
==============
DB_TrySetMasterDefaultAsset
==============
*/
void DB_TrySetMasterDefaultAsset(DB_AssetEntry *assetEntry)
{
  __int64 m_type; 
  XAssetHeader v3; 
  __int64 v4; 
  const char *v5; 
  const char *v6; 
  int v7; 
  int v8; 
  const char *v9; 
  const char *XAssetHeaderName; 
  char v11; 
  const char *v12; 
  __int64 v13; 
  char v14; 
  bool v15; 
  const char *CurrentZoneLoadName; 
  __int64 v17; 
  __int64 v18; 

  m_type = assetEntry->m_type;
  v3.physicsLibrary = (PhysicsLibrary *)assetEntry->m_header;
  if ( (unsigned int)m_type >= 0x71 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 4279, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ( sizeof( *array_counter( s_assetManager.masterDefaultAssets ) ) + 0 ) )", "type doesn't index ARRAY_COUNT( s_assetManager.masterDefaultAssets )\n\t%i not in [0, %i)", m_type, 113) )
    __debugbreak();
  if ( !s_loadingCodePostGfx )
    goto LABEL_59;
  if ( (unsigned int)m_type >= 0x71 )
  {
    LODWORD(v18) = 113;
    LODWORD(v17) = m_type;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 29, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v17, v18) )
      __debugbreak();
  }
  v4 = (int)m_type;
  v5 = g_defaultAssetName[v4];
  if ( *v5 && (v6 = DB_GetXAssetHeaderName(m_type, v3), !I_strncmp(v6, v5, 0x7FFFFFFFui64)) )
  {
    if ( (*((_WORD *)assetEntry + 9) & 0x7FF) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 4291, ASSERT_TYPE_ASSERT, "(assetEntry->GetZoneIndex() != DEFAULT_ZONE_INDEX)", (const char *)&queryFormat, "assetEntry->GetZoneIndex() != DEFAULT_ZONE_INDEX") )
      __debugbreak();
    if ( !DB_Zones_IsPermanentZoneIndex(*((_WORD *)assetEntry + 9) & 0x7FF) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 4292, ASSERT_TYPE_ASSERT, "(DB_Zones_IsPermanentZoneIndex( assetEntry->GetZoneIndex() ))", (const char *)&queryFormat, "DB_Zones_IsPermanentZoneIndex( assetEntry->GetZoneIndex() )") )
      __debugbreak();
    v7 = m_type - 8;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( !v8 )
      {
        HIDWORD(v3.physicsLibrary[1].name) |= 0x8000u;
        s_assetManager.masterDefaultAssets[v4] = v3;
        return;
      }
      if ( v8 == 6 && ((__int64)v3.physicsLibrary[1].name & 0x40) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 4317, ASSERT_TYPE_ASSERT, "(!R_IsStreamedImage( header.image ))", (const char *)&queryFormat, "!R_IsStreamedImage( header.image )") )
      {
        __debugbreak();
        s_assetManager.masterDefaultAssets[v4] = v3;
        return;
      }
    }
    else
    {
      if ( XModelSurfs_IsStreamed(v3.modelSurfs) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 4300, ASSERT_TYPE_ASSERT, "(!XModelSurfs_IsStreamed( header.modelSurfs ))", (const char *)&queryFormat, "!XModelSurfs_IsStreamed( header.modelSurfs )") )
        __debugbreak();
      DB_ModelFixup_SetDefaultSurfs(*(XSurface **)&v3.physicsLibrary->isMaterialList);
    }
    s_assetManager.masterDefaultAssets[v4] = v3;
  }
  else
  {
LABEL_59:
    if ( (unsigned int)m_type >= 0x71 )
    {
      LODWORD(v18) = 113;
      LODWORD(v17) = m_type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 29, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v17, v18) )
        __debugbreak();
    }
    v9 = g_defaultAssetName[m_type];
    if ( *v9 )
    {
      XAssetHeaderName = DB_GetXAssetHeaderName(m_type, v3);
      if ( !XAssetHeaderName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnamefix.h", 100, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
        __debugbreak();
      v11 = *XAssetHeaderName;
      v12 = XAssetHeaderName;
      if ( *XAssetHeaderName >= 33 )
      {
        v13 = 0x1000000000001001i64;
        while ( 1 )
        {
          v14 = v11;
          if ( (unsigned __int8)(v11 - 65) <= 0x19u || (unsigned __int8)(v11 - 32) <= 0x3Cu && _bittest64(&v13, (char)(v11 - 32)) )
            break;
          if ( v11 == 124 )
            break;
          v11 = *++v12;
          if ( !v11 )
          {
            if ( v14 > 32 )
              goto LABEL_45;
            break;
          }
        }
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 4340, ASSERT_TYPE_ASSERT, "(DB_IsAssetNameValid( assetName ))", (const char *)&queryFormat, "DB_IsAssetNameValid( assetName )") )
        __debugbreak();
LABEL_45:
      if ( !I_strncmp(XAssetHeaderName, v9, 0x7FFFFFFFui64) )
      {
        if ( s_assetManager.masterDefaultAssets[m_type].physicsLibrary )
        {
          CurrentZoneLoadName = DB_Zones_GetCurrentZoneLoadName();
          if ( (unsigned int)m_type >= 0x71 )
          {
            LODWORD(v18) = 113;
            LODWORD(v17) = m_type;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v17, v18) )
              __debugbreak();
          }
          v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 4353, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Default asset '%s'(%s) was already loaded in %s. It shouldn't be in %s", v9, g_assetNames[m_type], "code_post_gfx", CurrentZoneLoadName);
        }
        else
        {
          if ( (unsigned int)m_type >= 0x71 )
          {
            LODWORD(v18) = 113;
            LODWORD(v17) = m_type;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v17, v18) )
              __debugbreak();
          }
          v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 4348, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Default asset '%s'(%s) should be placed in %s", v9, g_assetNames[m_type], "code_post_gfx");
        }
        if ( v15 )
          __debugbreak();
      }
    }
  }
}

/*
==============
DB_UnarchiveAssets
==============
*/
void DB_UnarchiveAssets(const bool transientSPOnlyWork)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 10625, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !CL_TransientsSP_IsServerHalted() && SV_Main_InServerFrame() && !Sys_GetDatabaseStopServer() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 10273, ASSERT_TYPE_ASSERT, "(serverHalted || !SV_Main_InServerFrame() || Sys_GetDatabaseStopServer())", "%s\n\tInvalid DB operation while the server thread is running", "serverHalted || !SV_Main_InServerFrame() || Sys_GetDatabaseStopServer()") )
    __debugbreak();
  if ( !g_archiveBuf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 10628, ASSERT_TYPE_ASSERT, "(g_archiveBuf)", (const char *)&queryFormat, "g_archiveBuf") )
    __debugbreak();
  g_archiveBuf = 0;
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_LoadDObjs");
  DB_LoadDObjs();
  Sys_ProfEndNamedEvent();
  if ( (s_dbCurrentWorkFlags & 0xFC700FFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6319, ASSERT_TYPE_ASSERT, "(( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_ZONES ) == 0)", (const char *)&queryFormat, "( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_ZONES ) == 0") )
    __debugbreak();
  if ( !s_dbCurrentWorkFlags )
  {
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_RestartEffects_Finish");
    DB_RestartEffects_Finish();
    Sys_ProfEndNamedEvent();
  }
  if ( transientSPOnlyWork || g_loadingDebugZone )
  {
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_UnarchiveAssets: transientSPOnlyWork");
    if ( !g_loadingDebugZone )
    {
      if ( DB_IsDoingTransientSPOnlyWorkWithServerSync() )
      {
        if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6443, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", "%s\n\tUnsafe to modify physics from a thread other than the main thread", "Sys_IsMainThread()") )
          __debugbreak();
        CL_TransientsSP_ClientCodeCheck();
      }
      else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 10661, ASSERT_TYPE_ASSERT, "(DB_ShouldUpdateGameOnPhysicsChange())", "%s\n\tMis-matching logic between unarchive and per-asset processing", "DB_ShouldUpdateGameOnPhysicsChange()") )
      {
        __debugbreak();
      }
    }
    G_Utils_PhysicsPostAssetChange();
    CG_Entity_PhysicsPostAssetChange();
    DynEnt_PostAssetChange();
    Sys_ProfEndNamedEvent();
  }
  else if ( DB_IsDoingTransientSPOnlyWorkWithServerSync() )
  {
    if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6443, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", "%s\n\tUnsafe to modify physics from a thread other than the main thread", "Sys_IsMainThread()") )
      __debugbreak();
    CL_TransientsSP_ClientCodeCheck();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 10674, ASSERT_TYPE_ASSERT, "(!DB_ShouldUpdateGameOnPhysicsChange())", "%s\n\tMis-matching logic between unarchive and per-asset processing", "!DB_ShouldUpdateGameOnPhysicsChange()") )
      __debugbreak();
  }
  if ( (s_dbCurrentWorkFlags & 0xFC700FFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6319, ASSERT_TYPE_ASSERT, "(( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_ZONES ) == 0)", (const char *)&queryFormat, "( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_ZONES ) == 0") )
    __debugbreak();
  if ( !s_dbCurrentWorkFlags && !s_dbIsSyncLoading )
  {
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Always Loaded Assets");
    Stream_AlwaysLoaded_QueueProcessStreamingInfoForUnload();
    Sys_ProfEndNamedEvent();
  }
  R_ReleaseThreadOwnership();
}

/*
==============
DB_UnloadFastfiles
==============
*/
void DB_UnloadFastfiles(const DB_FastfileInfo *zoneInfo, unsigned int zoneCount, unsigned int unloadFlags)
{
  DB_ZoneBitArray *p_outArray; 
  __int64 v7; 
  __int64 v8; 
  unsigned int v9; 
  const dvar_t *v10; 
  int v11; 
  int *v12; 
  unsigned int v13; 
  unsigned __int64 v14; 
  unsigned int ZoneFlagsFromIndex; 
  const char *ZoneNameFromIndex; 
  __int64 v17; 
  unsigned int v18; 
  unsigned int v19; 
  __int64 v20; 
  unsigned int v21; 
  DB_ZoneBitArray *v22; 
  char v23; 
  unsigned __int64 v24; 
  int LogChannel; 
  __int64 v26; 
  unsigned int v27; 
  const char *v28; 
  unsigned int v29; 
  int v30; 
  const char *v31; 
  int v32; 
  int v33; 
  unsigned int v34; 
  char IsDoingStreamMPOnlyWork; 
  unsigned int v36; 
  bool v37; 
  bool v38; 
  char v39; 
  int v40; 
  int v41; 
  bool v42; 
  bool v43; 
  bool v44; 
  const dvar_t *v45; 
  bool v46; 
  __int16 v47; 
  bool v48; 
  unsigned int v49; 
  const dvar_t *v50; 
  unsigned int v51; 
  unsigned int v52; 
  DB_AssetEntryFlags *p_defaultAssets; 
  __int64 v54; 
  unsigned int v55; 
  char v56; 
  unsigned int v57; 
  int v58; 
  char v59; 
  unsigned __int64 v60; 
  bool v61; 
  __int64 v62; 
  __int64 v63; 
  __int64 v64; 
  __int64 v65; 
  bool v66; 
  bool v67; 
  char v68; 
  unsigned int flags; 
  DBCreateDefaultOptions flagsa; 
  bool v71; 
  bool v72; 
  bool v73; 
  FreeAssetEntryValidateDefaultNameFunctor v74; 
  unsigned int v75; 
  unsigned int v76; 
  int v77; 
  unsigned int v78; 
  unsigned __int64 v79; 
  __int64 v80; 
  DB_ZoneBitArray outArray; 
  int v82[64]; 
  GfxWorldTransientZoneDeferredReleasePointerList list; 

  v80 = -2i64;
  v76 = unloadFlags;
  v67 = 0;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 7312, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !zoneInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 7314, ASSERT_TYPE_ASSERT, "(zoneInfo)", (const char *)&queryFormat, "zoneInfo") )
    __debugbreak();
  if ( !zoneCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 7315, ASSERT_TYPE_ASSERT, "(zoneCount)", (const char *)&queryFormat, "zoneCount") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_UnloadFastfiles");
  DB_CancelLoadFastfiles(zoneInfo, zoneCount);
  DB_SyncForUnfinishedLoadsOrUnloads();
  p_outArray = &outArray;
  v7 = 3i64;
  v8 = 3i64;
  do
  {
    *(_QWORD *)p_outArray->zones.array = 0i64;
    *(_QWORD *)&p_outArray->zones.array[2] = 0i64;
    *(_QWORD *)&p_outArray->zones.array[4] = 0i64;
    p_outArray = (DB_ZoneBitArray *)((char *)p_outArray + 64);
    *(_QWORD *)&p_outArray[-1].zones.array[52] = 0i64;
    *(_QWORD *)&p_outArray[-1].zones.array[54] = 0i64;
    *(_QWORD *)&p_outArray[-1].zones.array[56] = 0i64;
    *(_QWORD *)&p_outArray[-1].zones.array[58] = 0i64;
    *(_QWORD *)&p_outArray[-1].zones.array[60] = 0i64;
    --v8;
  }
  while ( v8 );
  *(_QWORD *)p_outArray->zones.array = 0i64;
  *(_QWORD *)&p_outArray->zones.array[2] = 0i64;
  *(_QWORD *)&p_outArray->zones.array[4] = 0i64;
  *(_QWORD *)&p_outArray->zones.array[6] = 0i64;
  *(_QWORD *)&p_outArray->zones.array[8] = 0i64;
  *(_QWORD *)&p_outArray->zones.array[10] = 0i64;
  *(_QWORD *)&p_outArray->zones.array[12] = 0i64;
  v68 = unloadFlags & 1;
  v9 = unloadFlags >> 1;
  LOBYTE(v9) = (unloadFlags & 2) != 0;
  v75 = v9;
  v72 = (unloadFlags & 8) != 0;
  if ( s_dbIsSyncLoading && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 7334, ASSERT_TYPE_ASSERT, "(!s_dbIsSyncLoading)", (const char *)&queryFormat, "!s_dbIsSyncLoading") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_UnloadFastfiles - Zone Match");
  flags = DB_Zones_GetUnloadBitArray(&outArray, zoneInfo, zoneCount);
  Sys_ProfEndNamedEvent();
  v10 = DCONST_DVARBOOL_db_comprehensiveSanityChecks;
  if ( !DCONST_DVARBOOL_db_comprehensiveSanityChecks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "db_comprehensiveSanityChecks") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.enabled )
  {
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_UnloadFastfiles - Zone Match Validate");
    v11 = 0;
    v12 = v82;
    do
    {
      *(_QWORD *)v12 = 0i64;
      *((_QWORD *)v12 + 1) = 0i64;
      *((_QWORD *)v12 + 2) = 0i64;
      v12 += 16;
      *((_QWORD *)v12 - 5) = 0i64;
      *((_QWORD *)v12 - 4) = 0i64;
      *((_QWORD *)v12 - 3) = 0i64;
      *((_QWORD *)v12 - 2) = 0i64;
      *((_QWORD *)v12 - 1) = 0i64;
      --v7;
    }
    while ( v7 );
    *(_QWORD *)v12 = 0i64;
    *((_QWORD *)v12 + 1) = 0i64;
    *((_QWORD *)v12 + 2) = 0i64;
    *((_QWORD *)v12 + 3) = 0i64;
    *((_QWORD *)v12 + 4) = 0i64;
    *((_QWORD *)v12 + 5) = 0i64;
    *((_QWORD *)v12 + 6) = 0i64;
    v13 = 1;
    v14 = 1i64;
    do
    {
      if ( DB_Zones_IsValidZoneIndex(v13) )
      {
        ZoneFlagsFromIndex = DB_Zones_GetZoneFlagsFromIndex(v13);
        ZoneNameFromIndex = DB_Zones_GetZoneNameFromIndex(v13);
        v17 = 0i64;
        if ( zoneCount )
        {
          while ( !DB_Zones_FastfileInfoMatches(&zoneInfo[v17], ZoneFlagsFromIndex, ZoneNameFromIndex) )
          {
            v17 = (unsigned int)(v17 + 1);
            if ( (unsigned int)v17 >= zoneCount )
              goto LABEL_28;
          }
          v82[v14 >> 5] |= 0x80000000 >> (v13 & 0x1F);
          v11 |= ZoneFlagsFromIndex;
        }
      }
LABEL_28:
      ++v13;
      ++v14;
    }
    while ( v13 < 0x7A4 );
    v18 = flags;
    if ( flags != v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 7373, ASSERT_TYPE_ASSERT, "( freeFlags ) == ( validateFreeFlags )", "%s == %s\n\t%u, %u", "freeFlags", "validateFreeFlags", flags, v11) )
      __debugbreak();
    v19 = 0;
    v20 = 0i64;
    while ( outArray.zones.array[v20] == v82[v20] )
    {
      ++v19;
      ++v20;
      if ( v19 >= 0x3E )
        goto LABEL_38;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 7374, ASSERT_TYPE_ASSERT, "(unloadZones.zones.isEqual( validateUnloadZones.zones ))", (const char *)&queryFormat, "unloadZones.zones.isEqual( validateUnloadZones.zones )") )
      __debugbreak();
LABEL_38:
    Sys_ProfEndNamedEvent();
  }
  else
  {
    v18 = flags;
  }
  if ( v18 )
  {
    v21 = 0;
    v22 = &outArray;
    while ( !v22->zones.array[0] )
    {
      ++v21;
      v22 = (DB_ZoneBitArray *)((char *)v22 + 4);
      if ( v21 >= 0x3E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 7384, ASSERT_TYPE_ASSERT, "(unloadZones.zones.anyBitsOn())", (const char *)&queryFormat, "unloadZones.zones.anyBitsOn()") )
          __debugbreak();
        break;
      }
    }
    v78 = v18 & 0x600000;
    v23 = g_dbPreloadUnloading;
    if ( (v18 & 0x600000) != 0 )
      v23 = 1;
    g_dbPreloadUnloading = v23;
    DB_PushMainThreadWork();
    v24 = (unsigned __int64)&s_registryState & 3;
    v79 = (unsigned __int64)&s_registryState & 3;
    if ( ((unsigned __int8)&s_registryState & 3) != 0 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_registryState) )
        __debugbreak();
      v24 = v79;
    }
    if ( _InterlockedCompareExchange((volatile signed __int32 *)&s_registryState, 1, 0) )
    {
      if ( v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_registryState) )
        __debugbreak();
      LODWORD(v64) = _InterlockedCompareExchange((volatile signed __int32 *)&s_registryState, 1, 0);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 7397, ASSERT_TYPE_ASSERT, "( Sys_InterlockedCompareExchange( reinterpret_cast<volatile_int32*>( &s_registryState ), REGISTRY_STATE_MAIN_THREAD, REGISTRY_STATE_IDLE ) ) == ( REGISTRY_STATE_IDLE )", "%s == %s\n\t%i, %i", "Sys_InterlockedCompareExchange( reinterpret_cast<volatile_int32*>( &s_registryState ), REGISTRY_STATE_MAIN_THREAD, REGISTRY_STATE_IDLE )", "REGISTRY_STATE_IDLE", v64, 0i64) )
        __debugbreak();
    }
    R_PushRemoteScreenUpdateDisableQuitCheck();
    LogChannel = DB_GetLogChannel();
    Com_Printf(LogChannel, "\nDB_UnloadFastfiles() Job:\n");
    LODWORD(v26) = 0;
    v27 = outArray.zones.array[0];
    v28 = "DB_Zones_IsValidZoneIndex( unloadingZone )";
    while ( v27 )
    {
LABEL_62:
      v29 = __lzcnt(v27);
      v30 = v29 + 32 * v26;
      if ( v29 >= 0x20 )
      {
        LODWORD(v63) = 32;
        LODWORD(v62) = v29;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v62, v63) )
          __debugbreak();
      }
      if ( (v27 & (0x80000000 >> v29)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
        __debugbreak();
      v27 &= ~(0x80000000 >> v29);
      if ( !DB_Zones_IsValidZoneIndex(v30) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 7416, ASSERT_TYPE_ASSERT, "(DB_Zones_IsValidZoneIndex( unloadingZone ))", (const char *)&queryFormat, "DB_Zones_IsValidZoneIndex( unloadingZone )") )
        __debugbreak();
      v31 = DB_Zones_GetZoneNameFromIndex(v30);
      v32 = DB_GetLogChannel();
      Com_Printf(v32, "* Freeing '%s'\n", v31);
    }
    while ( 1 )
    {
      v26 = (unsigned int)(v26 + 1);
      if ( (unsigned int)v26 >= 0x3E )
        break;
      v27 = outArray.zones.array[v26];
      if ( v27 )
        goto LABEL_62;
    }
    v33 = DB_GetLogChannel();
    Com_Printf(v33, "\n");
    if ( DB_Zones_AreStreamOnlyFlags(flags) )
    {
      if ( (flags & 0x5000) != 0 )
        CL_TransientsSP_ClientCodeCheck();
      v34 = flags;
      s_dbCurrentWorkFlags = flags;
      v67 = (flags & 0x5000) != 0;
    }
    else
    {
      v34 = s_dbCurrentWorkFlags;
    }
    if ( (v34 & 0xFC700FFF) != 0 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6336, ASSERT_TYPE_ASSERT, "(( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_ZONES ) == 0)", (const char *)&queryFormat, "( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_ZONES ) == 0") )
        __debugbreak();
      v34 = s_dbCurrentWorkFlags;
    }
    v66 = (v34 & 0xFF000) != 0 && (v34 & 0xFFF00FFF) == 0;
    IsDoingStreamMPOnlyWork = DB_IsDoingStreamMPOnlyWork();
    v36 = s_dbCurrentWorkFlags;
    if ( (s_dbCurrentWorkFlags & 0xFC700FFF) != 0 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6386, ASSERT_TYPE_ASSERT, "(( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_ZONES ) == 0)", (const char *)&queryFormat, "( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_ZONES ) == 0") )
        __debugbreak();
      v36 = s_dbCurrentWorkFlags;
    }
    v37 = (v36 & 0x82000) != 0 && (v36 & 0xFFF7DFFF) == 0;
    if ( IsDoingStreamMPOnlyWork )
    {
      v38 = 0;
      v39 = 0;
    }
    else
    {
      v38 = !v72;
      v39 = 1;
    }
    v73 = v38;
    if ( v68 )
    {
      if ( v38 )
        R_SyncRenderThread();
    }
    else
    {
      v40 = R_PopRemoteScreenUpdate();
      Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_LoadAndUnloadSyncThreads");
      Com_SyncThreads();
      DB_Zones_ProcessPendingUnloadFrees(1);
      Sys_ProfEndNamedEvent();
      R_PushRemoteScreenUpdate(v40);
    }
    v41 = flags & 0x3F00000;
    v42 = (flags & 0x3F00000) != 0;
    Stream_DBPreFastfilesUnload(v42);
    v43 = DB_Zones_AreTransientOnlyFlags(flags);
    v44 = !v43;
    v71 = !v43;
    if ( !v43 )
      Stream_ImageRecord_WaitForReportComplete();
    LOBYTE(v28) = 0;
    v77 = (int)v28;
    if ( (v76 & 4) == 0 )
    {
      LODWORD(v28) = (flags & 0x38FF200) == 0;
      if ( s_loadingSPHotLoad )
        LODWORD(v28) = 0;
      v77 = (int)v28;
    }
    DB_LockHashWrite();
    if ( v73 )
    {
      ProfLoad_Begin("DB_ArchiveAssets");
      DB_ArchiveAssets();
    }
    else
    {
      if ( !v39 )
      {
LABEL_120:
        v45 = DCONST_DVARBOOL_db_transientWorldRenderSync;
        if ( !DCONST_DVARBOOL_db_transientWorldRenderSync && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "db_transientWorldRenderSync") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v45);
        v46 = !v45->current.enabled;
        v47 = flags;
        if ( !v46 && (flags & 0x8000) != 0 )
          R_SyncRenderThread();
        if ( (_BYTE)v75 )
          GfxWorldTransientZoneDeferredRelease_PointerListSet(&list);
        if ( v44 )
          Stream_ImageRecord_GenerateRecordsForAllImages();
        ProfLoad_Begin("DB_UnloadXZone");
        v48 = (s_dbCurrentWorkFlags & 0xFF000) != 0 && (s_dbCurrentWorkFlags & 0x80000) == 0 || DB_FreeOnlyCustomizationAssets();
        flagsa.createDefault = 1;
        flagsa.copyDefaultStrings = v48;
        DB_UnloadXZones(&outArray, flagsa, (const bool)v28);
        ProfLoad_End();
        ProfLoad_Begin("DB_ModelFixup");
        if ( v37 )
          DB_ModelFixup_TryTransientFixup(&outArray);
        else
          DB_ModelFixup_TryFullFixup();
        ProfLoad_End();
        DB_CheckAndExecuteTechsetFixUp(!v67);
        ProfLoad_Begin("DB_FixupAllWorldTransientZones");
        if ( (v47 & 0xC000) != 0 )
          DB_FixupAllWorldTransientZones();
        ProfLoad_End();
        DB_UnlockHashWrite();
        if ( v73 )
        {
          ProfLoad_Begin("DB_UnarchiveAssets");
          DB_UnarchiveAssets(v67);
        }
        else
        {
          if ( !v39 )
          {
LABEL_156:
            if ( (s_dbCurrentWorkFlags & 0xFC700FFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6319, ASSERT_TYPE_ASSERT, "(( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_ZONES ) == 0)", (const char *)&queryFormat, "( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_ZONES ) == 0") )
              __debugbreak();
            v76 = s_dbCurrentWorkFlags != 0;
            if ( (_BYTE)v28 )
            {
              Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_UnloadFastfiles Remote Screen Update");
              R_BeginRemoteScreenUpdate();
            }
            if ( (v47 & 8) != 0 )
              *(_WORD *)&s_assetManager.forceStubbedDataLoading = 0;
            if ( (v47 & 2) != 0 )
              memset_0(&s_assetManager.forcedStubbedKeepDefaultAssets, 0, sizeof(s_assetManager.forcedStubbedKeepDefaultAssets));
            v49 = DB_Zones_GetInUseFlags() & 0x3F00000;
            if ( v41 && v41 == v49 )
              memset_0(&s_assetManager.preloadKeepDefaultAssets, 0, sizeof(s_assetManager.preloadKeepDefaultAssets));
            if ( v78 )
            {
              if ( v68 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 7688, ASSERT_TYPE_ASSERT, "(!noSyncThreads)", (const char *)&queryFormat, "!noSyncThreads") )
                __debugbreak();
              if ( (_BYTE)v75 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 7689, ASSERT_TYPE_ASSERT, "(!freeGpuWait)", (const char *)&queryFormat, "!freeGpuWait") )
                __debugbreak();
              SV_PreloadSP_ClearZones();
            }
            if ( (s_dbCurrentWorkFlags & 0xFF000) == 0 || (s_dbCurrentWorkFlags & 0x80000) != 0 )
            {
              Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_FreeUnusedResources");
              DB_LockHashWrite();
              ProfLoad_Begin("DB_FreeUnusedResources");
              Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_FreeUnusedResources_Internal");
              DB_FreeUnusedResources(&outArray);
              Sys_ProfEndNamedEvent();
              ProfLoad_End();
              DB_UnlockHashWrite();
              Sys_ProfEndNamedEvent();
            }
            v50 = DCONST_DVARBOOL_db_comprehensiveSanityChecks;
            if ( !DCONST_DVARBOOL_db_comprehensiveSanityChecks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "db_comprehensiveSanityChecks") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v50);
            if ( v50->current.enabled )
            {
              ProfLoad_Begin("freeDefaultAssetNames");
              DB_LockPendingZoneRead();
              v51 = 0;
              v52 = 0;
              p_defaultAssets = &s_assetManager.defaultAssets;
              do
              {
                DB_AssetEntryPool::ForEachInBlock<FreeAssetEntryValidateDefaultNameFunctor>(&s_assetManager.table.m_pool, &s_assetManager.defaultAssets, p_defaultAssets->m_flags.m_data[0], v51, &v74);
                v51 += 64;
                ++v52;
                p_defaultAssets = (DB_AssetEntryFlags *)((char *)p_defaultAssets + 8);
              }
              while ( v52 < 0x1768 );
              DB_UnlockPendingZoneRead();
              ProfLoad_End();
            }
            DB_DefaultStringUsageReport("DB_UnloadFastfiles");
            Stream_DBPostFastfilesUnload(v42, v66);
            Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_Zones_UnloadAndFreeZone");
            LODWORD(v54) = 0;
            v55 = outArray.zones.array[0];
            v56 = v75;
            while ( v55 )
            {
LABEL_190:
              v57 = __lzcnt(v55);
              v58 = v57 + 32 * v54;
              if ( v57 >= 0x20 )
              {
                LODWORD(v63) = 32;
                LODWORD(v62) = v57;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v62, v63) )
                  __debugbreak();
              }
              if ( (v55 & (0x80000000 >> v57)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
                __debugbreak();
              v55 &= ~(0x80000000 >> v57);
              if ( !DB_Zones_IsValidZoneIndex(v58) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 7734, ASSERT_TYPE_ASSERT, "(DB_Zones_IsValidZoneIndex( zoneIndex ))", (const char *)&queryFormat, "DB_Zones_IsValidZoneIndex( zoneIndex )") )
                __debugbreak();
              DB_Zones_UnloadAndFreeZone(v58, v56);
            }
            while ( 1 )
            {
              v54 = (unsigned int)(v54 + 1);
              if ( (unsigned int)v54 >= 0x3E )
                break;
              v55 = outArray.zones.array[v54];
              if ( v55 )
                goto LABEL_190;
            }
            Sys_ProfEndNamedEvent();
            DB_Zones_UpdateInUseFlags();
            GfxWorldTransientZoneDeferredRelease_PointerListSet(NULL);
            v59 = v76;
            if ( (_BYTE)v77 )
            {
              R_EndRemoteScreenUpdate();
              Sys_ProfEndNamedEvent();
            }
            if ( v66 )
              Material_TransientDirtySort();
            if ( v71 )
              Stream_ImageRecord_TriggerImageReport();
            if ( (s_dbCurrentWorkFlags & 0xFC700FFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6354, ASSERT_TYPE_ASSERT, "(( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_ZONES ) == 0)", (const char *)&queryFormat, "( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_ZONES ) == 0") )
              __debugbreak();
            if ( (s_dbCurrentWorkFlags & 0xC000) != 0 && !DB_IsDoingStreamMPOnlyWork() )
              R_TriggerSunShadowCacheFlush();
            CL_TransientsMP_DoOverrideFixups();
            DB_SteadyStateSanityChecks(1);
            if ( Sys_GetDatabaseStopServer() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 7789, ASSERT_TYPE_ASSERT, "(!Sys_GetDatabaseStopServer())", (const char *)&queryFormat, "!Sys_GetDatabaseStopServer()") )
              __debugbreak();
            R_PopRemoteScreenUpdateDisableQuitCheck();
            v60 = v79;
            if ( v79 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_registryState) )
              __debugbreak();
            if ( _InterlockedCompareExchange((volatile signed __int32 *)&s_registryState, 0, 1) != 1 )
            {
              if ( v60 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_registryState) )
                __debugbreak();
              LODWORD(v65) = 1;
              LODWORD(v64) = _InterlockedCompareExchange((volatile signed __int32 *)&s_registryState, 0, 1);
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 7798, ASSERT_TYPE_ASSERT, "( Sys_InterlockedCompareExchange( reinterpret_cast<volatile_int32*>( &s_registryState ), REGISTRY_STATE_IDLE, REGISTRY_STATE_MAIN_THREAD ) ) == ( REGISTRY_STATE_MAIN_THREAD )", "%s == %s\n\t%i, %i", "Sys_InterlockedCompareExchange( reinterpret_cast<volatile_int32*>( &s_registryState ), REGISTRY_STATE_IDLE, REGISTRY_STATE_MAIN_THREAD )", "REGISTRY_STATE_MAIN_THREAD", v64, v65) )
                __debugbreak();
            }
            DB_PopMainThreadWork();
            if ( v59 )
              Stream_AlwaysLoaded_QueueProcessStreamingInfoForUnload();
            v61 = g_dbPreloadUnloading;
            if ( v78 )
              v61 = 0;
            g_dbPreloadUnloading = v61;
            s_dbCurrentWorkFlags = 0;
            if ( s_errorOnPatchedImageMismatch )
            {
              s_errorOnPatchedImageMismatch = 0;
              Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143F94D00, 1049i64);
            }
            goto LABEL_230;
          }
          ProfLoad_Begin("DB_UnarchiveAssetsStreamingOnly");
          if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 10608, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
            __debugbreak();
          if ( (s_dbCurrentWorkFlags & 0xFC700FFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6319, ASSERT_TYPE_ASSERT, "(( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_ZONES ) == 0)", (const char *)&queryFormat, "( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_ZONES ) == 0") )
            __debugbreak();
          if ( s_dbCurrentWorkFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 10610, ASSERT_TYPE_ASSERT, "(!DB_IsDoingStreamOnlyWork())", (const char *)&queryFormat, "!DB_IsDoingStreamOnlyWork()") )
            __debugbreak();
          if ( s_dbIsSyncLoading && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 10612, ASSERT_TYPE_ASSERT, "(!s_dbIsSyncLoading)", (const char *)&queryFormat, "!s_dbIsSyncLoading") )
            __debugbreak();
          R_ReleaseThreadOwnership();
        }
        ProfLoad_End();
        goto LABEL_156;
      }
      ProfLoad_Begin("DB_ArchiveAssetsStreamingOnly");
      if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 10280, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
        __debugbreak();
      if ( (s_dbCurrentWorkFlags & 0xFC700FFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6319, ASSERT_TYPE_ASSERT, "(( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_ZONES ) == 0)", (const char *)&queryFormat, "( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_ZONES ) == 0") )
        __debugbreak();
      if ( s_dbCurrentWorkFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 10282, ASSERT_TYPE_ASSERT, "(!DB_IsDoingStreamOnlyWork())", (const char *)&queryFormat, "!DB_IsDoingStreamOnlyWork()") )
        __debugbreak();
      if ( s_dbIsSyncLoading && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 10284, ASSERT_TYPE_ASSERT, "(!s_dbIsSyncLoading)", (const char *)&queryFormat, "!s_dbIsSyncLoading") )
        __debugbreak();
    }
    ProfLoad_End();
    goto LABEL_120;
  }
LABEL_230:
  Sys_ProfEndNamedEvent();
}

/*
==============
DB_UnloadFastfilesByZoneFlags
==============
*/
void DB_UnloadFastfilesByZoneFlags(unsigned int zoneFlags, unsigned int unloadFlags)
{
  DB_FastfileInfo zoneInfo; 

  zoneInfo.zoneFlags = zoneFlags;
  zoneInfo.name = NULL;
  *(_QWORD *)&zoneInfo.failureMode = 0i64;
  DB_UnloadFastfiles(&zoneInfo, 1u, unloadFlags);
  if ( (zoneFlags & 0x100BFE) != 0 )
    CL_Streaming_CheckForTransientReloads();
}

/*
==============
DB_UnloadLoneXAsset
==============
*/
bool DB_UnloadLoneXAsset(DB_AssetEntry *const assetEntry, const DBCreateDefaultOptions defaultOptions)
{
  bool createDefault; 
  __int64 m_type; 
  int v5; 
  char v6; 
  unsigned int v7; 
  unsigned __int64 AssetEntryIndex; 
  TransientGroupFlags *transientFlags; 
  __int64 v10; 
  const char *v11; 
  const char *XAssetHeaderName; 
  unsigned __int64 v13; 
  unsigned __int64 v14; 
  bool result; 
  int v16; 
  XAssetHeader v17; 
  const char *v18; 
  __int64 v19; 
  bool copyDefaultStrings; 

  copyDefaultStrings = defaultOptions.copyDefaultStrings;
  createDefault = defaultOptions.createDefault;
  if ( !assetEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 9520, ASSERT_TYPE_ASSERT, "(assetEntry)", (const char *)&queryFormat, "assetEntry") )
    __debugbreak();
  if ( assetEntry->m_nextStashed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 9521, ASSERT_TYPE_ASSERT, "(assetEntry->GetNextStashedIndex() == 0)", (const char *)&queryFormat, "assetEntry->GetNextStashedIndex() == 0") )
    __debugbreak();
  m_type = assetEntry->m_type;
  v5 = *((_WORD *)assetEntry + 9) & 0x7FF;
  if ( (*((_WORD *)assetEntry + 9) & 0x7FF) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 9527, ASSERT_TYPE_ASSERT, "(zoneIndex != DEFAULT_ZONE_INDEX)", (const char *)&queryFormat, "zoneIndex != DEFAULT_ZONE_INDEX") )
    __debugbreak();
  DB_TransientUnloadHeadAsset(assetEntry);
  if ( createDefault && DB_UnloadLoneXAsset_AllowDefaultForAssetEntry(assetEntry) )
  {
    v6 = 1;
    if ( assetEntry->m_header.physicsLibrary == s_assetManager.masterDefaultAssets[m_type].physicsLibrary && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 9539, ASSERT_TYPE_ASSERT, "(assetEntry->GetAssetHeader().data != s_assetManager.masterDefaultAssets[type].data)", "%s\n\tShould not be unloading permanent default assets at runtime", "assetEntry->GetAssetHeader().data != s_assetManager.masterDefaultAssets[type].data") )
      __debugbreak();
    if ( v5 && (DB_Zones_GetZoneFlagsFromIndex(v5) & 0x387F000) != 0 )
    {
      v7 = 0;
      AssetEntryIndex = DB_GetAssetEntryIndex(assetEntry);
      transientFlags = s_assetManager.transientFlags;
      while ( 1 )
      {
        if ( AssetEntryIndex >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
          __debugbreak();
        if ( ((0x8000000000000000ui64 >> (AssetEntryIndex & 0x3F)) & transientFlags->headAssets.m_flags.m_data[AssetEntryIndex >> 6]) != 0 )
          break;
        ++v7;
        ++transientFlags;
        if ( v7 >= 3 )
        {
          v10 = assetEntry->m_type;
          if ( (unsigned int)v10 >= 0x71 )
          {
            LODWORD(v19) = assetEntry->m_type;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v19, 113) )
              __debugbreak();
          }
          v11 = g_assetNames[v10];
          XAssetHeaderName = DB_GetXAssetHeaderName(assetEntry->m_type, assetEntry->m_header);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 9547, ASSERT_TYPE_ASSERT, "( DB_IsTransientAssetHeadEntry( *assetEntry ) )", "Transient asset %s(%s) does not have head flag set correctly", XAssetHeaderName, v11) )
            __debugbreak();
          break;
        }
      }
    }
  }
  else
  {
    v6 = 0;
  }
  if ( (_DWORD)m_type == 28 )
    GfxWorldTransientZoneDeferredRelease_SetZoneIndex(v5);
  DB_ReleaseXAsset(assetEntry->m_header, (XAssetType)m_type, (DB_ReleaseType)((assetEntry->m_inuse & 8) == 0));
  assetEntry->m_inuse &= ~8u;
  if ( (_DWORD)m_type == 28 )
    GfxWorldTransientZoneDeferredRelease_SetZoneIndex(0xFFFFu);
  if ( v6 )
  {
    v16 = assetEntry->m_type;
    v17.physicsLibrary = (PhysicsLibrary *)assetEntry->m_header;
    *((_WORD *)assetEntry + 9) &= 0xF800u;
    v18 = DB_GetXAssetHeaderName(v16, v17);
    DB_SetupDefaultAsset(assetEntry, (XAssetType)m_type, v18, copyDefaultStrings);
    if ( DB_IsTransientAssetKeepDefaultEntry(assetEntry) )
      DB_AssetEntry::ClearInUse(assetEntry, 1u);
    if ( DB_IsForcedStubbedKeepDefaultEntry(assetEntry) )
      DB_AssetEntry::ClearInUse(assetEntry, 1u);
    if ( DB_AssetUsage_TestMyChangesDefault(assetEntry) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 9613, ASSERT_TYPE_ASSERT, "(!DB_AssetUsage_TestMyChangesDefault( assetEntry ))", (const char *)&queryFormat, "!DB_AssetUsage_TestMyChangesDefault( assetEntry )") )
      __debugbreak();
    if ( DB_Zones_IsDevZoneIndex(v5) )
      DB_AssetUsage_SetMyChangesDefault(assetEntry);
    return 0;
  }
  else
  {
    DB_ClearTransientAssetFlags(assetEntry);
    DB_ClearForcedStubbedAsset(assetEntry);
    v13 = DB_GetAssetEntryIndex(assetEntry);
    if ( v13 >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
      __debugbreak();
    v14 = 0x8000000000000000ui64 >> (v13 & 0x3F);
    if ( (v14 & s_assetManager.table.m_headEntries.m_flags.m_data[v13 >> 6]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 803, ASSERT_TYPE_ASSERT, "(s_assetManager.table.GetUsedFlagsHeadOnly().Test( assetIndex ))", (const char *)&queryFormat, "s_assetManager.table.GetUsedFlagsHeadOnly().Test( assetIndex )") )
      __debugbreak();
    if ( v13 >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 209, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
      __debugbreak();
    result = 1;
    s_assetManager.preloadKeepDefaultAssets.m_flags.m_data[v13 >> 6] &= ~v14;
  }
  return result;
}

/*
==============
DB_UnloadLoneXAsset_AllowDefaultForAssetEntry
==============
*/
char DB_UnloadLoneXAsset_AllowDefaultForAssetEntry(const DB_AssetEntry *assetEntry)
{
  XAssetType m_type; 
  const char *XAssetHeaderName; 
  const char *v4; 
  unsigned int v5; 
  unsigned __int64 AssetEntryIndex; 
  DB_AssetEntryFlags *p_keepDefaultAssets; 
  const char *v8; 
  unsigned __int64 v9; 
  unsigned __int64 v10; 
  const char *v11; 
  unsigned __int64 v12; 
  const char *v13; 
  XAssetType v15; 

  m_type = assetEntry->m_type;
  if ( ((m_type - 98) & 0xFFFFFFFD) != 0 )
    return 1;
  if ( DB_AssetTypeHasADefaultAsset(m_type) )
  {
    v15 = m_type;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 9477, ASSERT_TYPE_ASSERT, "( ( !DB_AssetTypeHasADefaultAsset( type ) ) )", "( type ) = %i", v15) )
      __debugbreak();
  }
  if ( (assetEntry->m_inuse & 1) != 0 )
  {
    XAssetHeaderName = DB_GetXAssetHeaderName(assetEntry->m_type, assetEntry->m_header);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 9501, ASSERT_TYPE_ASSERT, "( ( !assetEntry.TestInUse( ASSET_MASK_EXTERNAL_REF ) ) )", "( assetEntry.GetName() ) = %s", XAssetHeaderName) )
      __debugbreak();
  }
  if ( assetEntry->m_nextStashed )
  {
    v4 = DB_GetXAssetHeaderName(assetEntry->m_type, assetEntry->m_header);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 9502, ASSERT_TYPE_ASSERT, "( ( assetEntry.GetNextStashedIndex() == 0 ) )", "( assetEntry.GetName() ) = %s", v4) )
      __debugbreak();
  }
  v5 = 0;
  AssetEntryIndex = DB_GetAssetEntryIndex(assetEntry);
  p_keepDefaultAssets = &s_assetManager.transientFlags[0].keepDefaultAssets;
  while ( 1 )
  {
    if ( AssetEntryIndex >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
      __debugbreak();
    if ( ((0x8000000000000000ui64 >> (AssetEntryIndex & 0x3F)) & p_keepDefaultAssets->m_flags.m_data[AssetEntryIndex >> 6]) != 0 )
      break;
    ++v5;
    p_keepDefaultAssets += 2;
    if ( v5 >= 3 )
      goto LABEL_20;
  }
  v8 = DB_GetXAssetHeaderName(assetEntry->m_type, assetEntry->m_header);
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 9505, ASSERT_TYPE_ASSERT, "( ( !DB_IsTransientAssetKeepDefaultEntry( assetEntry ) ) )", "( assetEntry.GetName() ) = %s", v8) )
    __debugbreak();
LABEL_20:
  v9 = DB_GetAssetEntryIndex(assetEntry);
  if ( v9 >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  v10 = 0x8000000000000000ui64 >> (v9 & 0x3F);
  if ( (v10 & s_assetManager.preloadKeepDefaultAssets.m_flags.m_data[v9 >> 6]) != 0 )
  {
    if ( v9 >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
      __debugbreak();
    if ( (v10 & s_assetManager.table.m_headEntries.m_flags.m_data[v9 >> 6]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 730, ASSERT_TYPE_ASSERT, "(s_assetManager.table.GetUsedFlagsHeadOnly().Test( assetIndex ))", (const char *)&queryFormat, "s_assetManager.table.GetUsedFlagsHeadOnly().Test( assetIndex )") )
      __debugbreak();
    v11 = DB_GetXAssetHeaderName(assetEntry->m_type, assetEntry->m_header);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 9508, ASSERT_TYPE_ASSERT, "( ( !DB_IsPreloadKeepDefaultEntry( assetEntry ) ) )", "( assetEntry.GetName() ) = %s", v11) )
      __debugbreak();
  }
  v12 = DB_GetAssetEntryIndex(assetEntry);
  if ( v12 >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  if ( ((0x8000000000000000ui64 >> (v12 & 0x3F)) & s_assetManager.forcedStubbedKeepDefaultAssets.m_flags.m_data[v12 >> 6]) != 0 )
  {
    v13 = DB_GetXAssetHeaderName(assetEntry->m_type, assetEntry->m_header);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 9511, ASSERT_TYPE_ASSERT, "( ( !DB_IsForcedStubbedKeepDefaultEntry( assetEntry ) ) )", "( assetEntry.GetName() ) = %s", v13) )
      __debugbreak();
  }
  return 0;
}

/*
==============
DB_UnloadMPTransient_f
==============
*/
void DB_UnloadMPTransient_f()
{
  const char *v0; 
  char dest[256]; 

  v0 = Cmd_Argv(1);
  Core_strcpy(dest, 0x100ui64, v0);
  CL_TransientsMP_UnloadByFile(dest);
}

/*
==============
DB_UnloadStreamingInfoTransientList
==============
*/
void DB_UnloadStreamingInfoTransientList(const StreamingInfo *streamingInfo)
{
  ProfLoad_DB_Begin("DB_UnloadStreamingInfoTransientList");
  if ( !streamingInfo->transientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 1601, ASSERT_TYPE_ASSERT, "(streamingInfo.transientInfo)", (const char *)&queryFormat, "streamingInfo.transientInfo", -2i64) )
    __debugbreak();
  DB_UnloadTransientList(streamingInfo->transientInfo);
  ProfLoad_DB_End();
}

/*
==============
DB_UnloadTransientList
==============
*/
void DB_UnloadTransientList(const TransientInfo *transientInfo)
{
  unsigned int transientFileCount; 
  unsigned int transientAssetCount; 
  int v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 mpParentIndex; 
  TransientAssetReference *transientAssets; 
  __int64 v9; 
  __int64 v10; 
  TransientFileReference *transientFiles; 
  unsigned __int8 type; 
  __int64 v13; 
  __int64 v14; 

  transientFileCount = transientInfo->transientFileCount;
  if ( transientFileCount )
  {
    transientAssetCount = transientInfo->transientAssetCount;
    if ( transientAssetCount )
    {
      v4 = transientAssetCount - 1;
      v5 = v4;
      if ( v4 >= 0 )
      {
        v6 = v4;
        do
        {
          mpParentIndex = transientInfo->transientAssets[v6].mpParentIndex;
          if ( (_DWORD)mpParentIndex != -1 )
          {
            if ( (unsigned int)mpParentIndex >= transientInfo->transientFileCount )
            {
              LODWORD(v14) = transientInfo->transientFileCount;
              LODWORD(v13) = transientInfo->transientAssets[v6].mpParentIndex;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 1501, ASSERT_TYPE_ASSERT, "(unsigned)( ffIndex ) < (unsigned)( transientInfo.transientFileCount )", "ffIndex doesn't index transientInfo.transientFileCount\n\t%i not in [0, %i)", v13, v14) )
                __debugbreak();
            }
            if ( !DB_TransientFileType_IsMPCommon((const TransientFileType)transientInfo->transientFiles[mpParentIndex].type) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 1503, ASSERT_TYPE_ASSERT, "(DB_TransientFileType_IsMPCommon( transFileType ))", (const char *)&queryFormat, "DB_TransientFileType_IsMPCommon( transFileType )") )
              __debugbreak();
            transientAssets = transientInfo->transientAssets;
            if ( transientAssets[v6].type == 9 )
              CL_TransientsMP_DeregisterAsset(transientAssets[v6].name, ASSET_TYPE_XMODEL);
          }
          --v6;
          --v5;
        }
        while ( v5 >= 0 );
        transientFileCount = transientInfo->transientFileCount;
      }
    }
    v9 = (int)(transientFileCount - 1);
    if ( (int)(transientFileCount - 1) >= 0 )
    {
      v10 = (int)(transientFileCount - 1);
      do
      {
        transientFiles = transientInfo->transientFiles;
        if ( transientFiles[v10].name )
        {
          type = transientFiles[v10].type;
          if ( DB_TransientFileType_IsMP((const TransientFileType)type) )
            CL_TransientsMP_DeregisterFile(transientInfo->transientFiles[v10].name, (TransientFileType)type);
        }
        --v10;
        --v9;
      }
      while ( v9 >= 0 );
    }
  }
  if ( transientInfo->transientCollisionTileCount )
    CL_TransientsCollisionMP_UnregisterCollisionTileCount(transientInfo);
  if ( transientInfo->transientWorldGridTileMapCount )
    CL_TransientsWorldMP_UnregisterGridStreamingInfo(transientInfo);
  if ( transientInfo->transientMPCommonCount )
    CL_TransientsCommonMP_UnregisterTransientInfo(transientInfo);
}

/*
==============
DB_UnloadTransientZones
==============
*/
void DB_UnloadTransientZones(const DB_ZoneBitArray *unloadZones, const DBCreateDefaultOptions defaultOptions)
{
  unsigned int v2; 
  unsigned int v5; 
  const DB_ZoneBitArray *v6; 
  unsigned int v7; 
  TransientGroupFlags *transientFlags; 
  const unsigned int *v9; 
  __int64 v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned __int64 *v13; 
  const dvar_t *v14; 
  const DB_ZoneBitArray *v15; 
  unsigned int v16; 
  DB_AssetEntryFlags *p_m_tableEntries; 
  UnloadAssetFunctor functor; 
  CheckOtherAssetsForUnloadFunctor v19; 

  v19.unloadZones = unloadZones;
  v2 = s_dbCurrentWorkFlags;
  if ( (s_dbCurrentWorkFlags & 0xFC700FFF) != 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6336, ASSERT_TYPE_ASSERT, "(( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_ZONES ) == 0)", (const char *)&queryFormat, "( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_ZONES ) == 0") )
      __debugbreak();
    v2 = s_dbCurrentWorkFlags;
  }
  if ( ((v2 & 0xFF000) == 0 || (v2 & 0xFFF00FFF) != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 9762, ASSERT_TYPE_ASSERT, "(DB_IsDoingTransientOnlyWork())", (const char *)&queryFormat, "DB_IsDoingTransientOnlyWork()") )
    __debugbreak();
  if ( !defaultOptions.createDefault && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 9763, ASSERT_TYPE_ASSERT, "(defaultOptions.createDefault)", (const char *)&queryFormat, "defaultOptions.createDefault") )
    __debugbreak();
  v5 = 0;
  v6 = unloadZones;
  v7 = 0;
  while ( !v6->zones.array[0] )
  {
    ++v7;
    v6 = (const DB_ZoneBitArray *)((char *)v6 + 4);
    if ( v7 >= 0x3E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 9764, ASSERT_TYPE_ASSERT, "(unloadZones.zones.anyBitsOn())", (const char *)&queryFormat, "unloadZones.zones.anyBitsOn()") )
        __debugbreak();
      break;
    }
  }
  DB_CheckLockWrite();
  functor.unloadZones = unloadZones;
  transientFlags = s_assetManager.transientFlags;
  functor.defaultOptions = defaultOptions;
  v9 = TRANSIENT_FLAGS_TRANSIENT_ZONEFLAGS;
  v10 = 3i64;
  do
  {
    if ( (*v9 & s_dbCurrentWorkFlags) != 0 )
    {
      v11 = 0;
      v12 = 0;
      v13 = (unsigned __int64 *)transientFlags;
      do
      {
        DB_AssetEntryPool::MutableForEachInBlock<UnloadAssetFunctor>(&s_assetManager.table.m_pool, &transientFlags->headAssets, *v13, v12, &functor);
        v12 += 64;
        ++v11;
        ++v13;
      }
      while ( v11 < 0x1768 );
      v5 = 0;
    }
    ++v9;
    ++transientFlags;
    --v10;
  }
  while ( v10 );
  v14 = DCONST_DVARBOOL_db_comprehensiveSanityChecks;
  v15 = v19.unloadZones;
  if ( !DCONST_DVARBOOL_db_comprehensiveSanityChecks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "db_comprehensiveSanityChecks") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  if ( v14->current.enabled )
  {
    v16 = 0;
    v19.unloadZones = v15;
    p_m_tableEntries = &s_assetManager.table.m_tableEntries;
    do
    {
      DB_AssetEntryPool::ForEachInBlock<CheckOtherAssetsForUnloadFunctor>(&s_assetManager.table.m_pool, &s_assetManager.table.m_tableEntries, p_m_tableEntries->m_flags.m_data[0], v5, &v19);
      v5 += 64;
      ++v16;
      p_m_tableEntries = (DB_AssetEntryFlags *)((char *)p_m_tableEntries + 8);
    }
    while ( v16 < 0x1768 );
  }
}

/*
==============
DB_UnloadXAssetEntryKeepingStashed
==============
*/
void DB_UnloadXAssetEntryKeepingStashed(DB_AssetEntry *const headAssetEntry, DB_AssetEntry *stashedAssetEntry)
{
  const char *XAssetHeaderName; 
  const char *v5; 

  if ( !headAssetEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 9627, ASSERT_TYPE_ASSERT, "(headAssetEntry)", (const char *)&queryFormat, "headAssetEntry") )
    __debugbreak();
  if ( !stashedAssetEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 9628, ASSERT_TYPE_ASSERT, "(stashedAssetEntry)", (const char *)&queryFormat, "stashedAssetEntry") )
    __debugbreak();
  if ( headAssetEntry == stashedAssetEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 9629, ASSERT_TYPE_ASSERT, "(headAssetEntry != stashedAssetEntry)", (const char *)&queryFormat, "headAssetEntry != stashedAssetEntry") )
    __debugbreak();
  if ( (*((_WORD *)headAssetEntry + 9) & 0x7FF) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 9630, ASSERT_TYPE_ASSERT, "(headAssetEntry->GetZoneIndex() != DEFAULT_ZONE_INDEX)", (const char *)&queryFormat, "headAssetEntry->GetZoneIndex() != DEFAULT_ZONE_INDEX") )
    __debugbreak();
  if ( (*((_WORD *)stashedAssetEntry + 9) & 0x7FF) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 9631, ASSERT_TYPE_ASSERT, "(stashedAssetEntry->GetZoneIndex() != DEFAULT_ZONE_INDEX)", (const char *)&queryFormat, "stashedAssetEntry->GetZoneIndex() != DEFAULT_ZONE_INDEX") )
    __debugbreak();
  if ( stashedAssetEntry->m_type != headAssetEntry->m_type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 9632, ASSERT_TYPE_ASSERT, "(stashedAssetEntry->GetType() == headAssetEntry->GetType())", (const char *)&queryFormat, "stashedAssetEntry->GetType() == headAssetEntry->GetType()") )
    __debugbreak();
  XAssetHeaderName = DB_GetXAssetHeaderName(headAssetEntry->m_type, headAssetEntry->m_header);
  v5 = DB_GetXAssetHeaderName(stashedAssetEntry->m_type, stashedAssetEntry->m_header);
  if ( I_strncmp(v5, XAssetHeaderName, 0x7FFFFFFFui64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 9633, ASSERT_TYPE_ASSERT, "(I_strcmp( stashedAssetEntry->GetName(), headAssetEntry->GetName() ) == 0)", (const char *)&queryFormat, "I_strcmp( stashedAssetEntry->GetName(), headAssetEntry->GetName() ) == 0") )
    __debugbreak();
  DB_MoveReplaceAsset(stashedAssetEntry, headAssetEntry);
}

/*
==============
DB_UnloadXAssetStashes
==============
*/
void DB_UnloadXAssetStashes(DB_AssetEntry *const headAssetEntry, const DB_ZoneBitArray *unloadZones)
{
  DB_AssetEntry *v4; 
  DB_AssetEntry *NextStashed; 
  unsigned __int64 m_nextStashed; 
  __int64 v7; 
  DB_AssetEntry *v8; 
  unsigned int v9; 
  unsigned __int64 AssetEntryIndex; 
  TransientGroupFlags *transientFlags; 
  __int64 m_type; 
  const char *v13; 
  const char *XAssetHeaderName; 
  XAssetType v15; 
  __int64 v16; 
  __int64 v17; 

  if ( !headAssetEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 9406, ASSERT_TYPE_ASSERT, "(headAssetEntry)", (const char *)&queryFormat, "headAssetEntry") )
    __debugbreak();
  DB_CheckLockWrite();
  v4 = headAssetEntry;
  NextStashed = DB_AssetEntryPool::GetNextStashed(&s_assetManager.table.m_pool, headAssetEntry);
  if ( NextStashed )
  {
    do
    {
      m_nextStashed = NextStashed->m_nextStashed;
      if ( (_DWORD)m_nextStashed )
      {
        v7 = (unsigned int)m_nextStashed;
        if ( m_nextStashed >= 0x5DA00 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 358, ASSERT_TYPE_ASSERT, "( index < m_data.size() )", (const char *)&queryFormat, "index < m_data.size()") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
            __debugbreak();
        }
        v8 = (DB_AssetEntry *)((char *)&s_assetManager + 20 * v7);
      }
      else
      {
        v8 = NULL;
      }
      if ( DB_HasUnloadZoneMatch(NextStashed, unloadZones) )
      {
        if ( (*((_WORD *)NextStashed + 9) & 0x7FF) != 0 && (DB_Zones_GetZoneFlagsFromIndex(*((_WORD *)NextStashed + 9) & 0x7FF) & 0x387F000) != 0 )
        {
          v9 = 0;
          AssetEntryIndex = DB_GetAssetEntryIndex(headAssetEntry);
          transientFlags = s_assetManager.transientFlags;
          while ( 1 )
          {
            if ( AssetEntryIndex >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
              __debugbreak();
            if ( ((0x8000000000000000ui64 >> (AssetEntryIndex & 0x3F)) & transientFlags->headAssets.m_flags.m_data[AssetEntryIndex >> 6]) != 0 )
              break;
            ++v9;
            ++transientFlags;
            if ( v9 >= 3 )
            {
              m_type = headAssetEntry->m_type;
              if ( (unsigned int)m_type >= 0x71 )
              {
                LODWORD(v17) = 113;
                LODWORD(v16) = headAssetEntry->m_type;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v16, v17) )
                  __debugbreak();
              }
              v13 = g_assetNames[m_type];
              XAssetHeaderName = DB_GetXAssetHeaderName(headAssetEntry->m_type, headAssetEntry->m_header);
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 9427, ASSERT_TYPE_ASSERT, "( DB_IsTransientAssetHeadEntry( *headAssetEntry ) )", "Transient asset %s(%s) does not have head flag set correctly", XAssetHeaderName, v13) )
                __debugbreak();
              break;
            }
          }
        }
        v15 = NextStashed->m_type;
        if ( v15 == ASSET_TYPE_GFXWORLD_TRANSIENT_ZONE )
          GfxWorldTransientZoneDeferredRelease_SetZoneIndex(*((_WORD *)NextStashed + 9) & 0x7FF);
        DB_ReleaseXAsset(NextStashed->m_header, v15, OWNS_RESOURCES);
        if ( v15 == ASSET_TYPE_GFXWORLD_TRANSIENT_ZONE )
          GfxWorldTransientZoneDeferredRelease_SetZoneIndex(0xFFFFu);
        NextStashed->m_inuse &= ~8u;
        DB_CheckLockWrite();
        DB_RemoveAndFreeAssetEntryChecks(NextStashed);
        DB_AssetEntryTable::RemoveStashedAsset(&s_assetManager.table, NextStashed, v4);
        DB_AssetEntryPool::Free(&s_assetManager.table.m_pool, NextStashed);
      }
      else
      {
        v4 = NextStashed;
      }
      NextStashed = v8;
    }
    while ( v8 );
  }
}

/*
==============
DB_UnloadXZones
==============
*/
void DB_UnloadXZones(const DB_ZoneBitArray *unloadZones, const DBCreateDefaultOptions defaultOptions, const bool screenUpdate)
{
  bool createDefault; 
  unsigned int v6; 
  const DB_ZoneBitArray *v7; 
  __int64 v8; 
  int v9; 
  int v10; 
  unsigned int v11; 
  __int64 v12; 
  unsigned int v13; 
  unsigned int v14; 
  int v15; 
  __int64 v16; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int v19; 
  XZoneHandleUnique CurrentZoneHandleUniqueForIndex; 
  XZoneHandleUnique v21; 
  unsigned __int16 WorldTransientIndexFromZoneIndex; 
  __int64 v23; 
  unsigned int v24; 
  unsigned int v25; 
  unsigned int v26; 
  unsigned __int64 v27; 
  unsigned __int64 v28; 
  unsigned __int64 v29; 
  unsigned int v30; 
  TransientGroupFlags *transientFlags; 
  __int64 v32; 
  unsigned int v33; 
  unsigned int v34; 
  unsigned int v35; 
  unsigned __int64 v36; 
  unsigned __int64 v37; 
  __int64 v38; 
  char *fmt; 
  __int64 v40; 
  __int64 v41; 
  UnloadAssetFunctor functor; 
  unsigned int v43; 
  unsigned int v46; 
  __int64 v47; 

  createDefault = defaultOptions.createDefault;
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_UnloadXZones");
  v6 = 0;
  v7 = unloadZones;
  while ( !v7->zones.array[0] )
  {
    ++v6;
    v7 = (const DB_ZoneBitArray *)((char *)v7 + 4);
    if ( v6 >= 0x3E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 9799, ASSERT_TYPE_ASSERT, "(unloadZones.zones.anyBitsOn())", (const char *)&queryFormat, "unloadZones.zones.anyBitsOn()") )
        __debugbreak();
      break;
    }
  }
  DB_CheckLockWrite();
  LODWORD(v8) = 0;
  v9 = 2;
  do
  {
    v10 = __popcnt(unloadZones->zones.array[v9 + 15]) + __popcnt(unloadZones->zones.array[v9 + 14]) + __popcnt(unloadZones->zones.array[v9 + 13]) + __popcnt(unloadZones->zones.array[v9 + 12]) + __popcnt(unloadZones->zones.array[v9 + 11]) + __popcnt(unloadZones->zones.array[v9 + 10]) + __popcnt(unloadZones->zones.array[v9 + 9]) + __popcnt(unloadZones->zones.array[v9 + 8]) + __popcnt(unloadZones->zones.array[v9 + 7]) + __popcnt(unloadZones->zones.array[v9 + 6]) + __popcnt(unloadZones->zones.array[v9 + 5]) + __popcnt(unloadZones->zones.array[v9 + 4]) + __popcnt(unloadZones->zones.array[v9 + 3]) + __popcnt(unloadZones->zones.array[v9 + 2]) + __popcnt(unloadZones->zones.array[v9 + 1]) + __popcnt(unloadZones->zones.array[v9]) + __popcnt(unloadZones->zones.array[v9 - 1]) + __popcnt(unloadZones->zones.array[v9 - 2]) + v8;
    v8 = __popcnt(unloadZones->zones.array[v9 + 28]) + __popcnt(unloadZones->zones.array[v9 + 27]) + __popcnt(unloadZones->zones.array[v9 + 26]) + __popcnt(unloadZones->zones.array[v9 + 25]) + __popcnt(unloadZones->zones.array[v9 + 24]) + __popcnt(unloadZones->zones.array[v9 + 23]) + __popcnt(unloadZones->zones.array[v9 + 22]) + __popcnt(unloadZones->zones.array[v9 + 21]) + __popcnt(unloadZones->zones.array[v9 + 20]) + __popcnt(unloadZones->zones.array[v9 + 19]) + __popcnt(unloadZones->zones.array[v9 + 18]) + __popcnt(unloadZones->zones.array[v9 + 17]) + __popcnt(unloadZones->zones.array[v9 + 16]) + v10;
    v9 += 31;
  }
  while ( (unsigned int)(v9 - 2) < 0x3E );
  LODWORD(fmt) = defaultOptions.copyDefaultStrings;
  Com_Printf(16, "DB_UnloadXZones (%u). Default: Create %d, Copy %d\n", v8, createDefault, fmt);
  v11 = 0;
  v43 = 0;
  if ( screenUpdate )
  {
    Sys_ProfBeginNamedEvent(0xFFFFFF00, "DB_UnloadXZones Remote Screen Update");
    R_BeginRemoteScreenUpdate();
  }
  LODWORD(v12) = 0;
  v13 = unloadZones->zones.array[0];
  while ( v13 )
  {
LABEL_14:
    v14 = __lzcnt(v13);
    v15 = v14 + 32 * v12;
    if ( v14 >= 0x20 )
    {
      LODWORD(v41) = 32;
      LODWORD(v40) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v40, v41) )
        __debugbreak();
    }
    if ( (v13 & (0x80000000 >> v14)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v13 &= ~(0x80000000 >> v14);
    if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 9836, ASSERT_TYPE_ASSERT, "(unloadingZone != DEFAULT_ZONE_INDEX)", (const char *)&queryFormat, "unloadingZone != DEFAULT_ZONE_INDEX") )
      __debugbreak();
    v11 = DB_Zones_GetZoneFlagsFromIndex(v15) | v43;
    v43 = v11;
    DB_Zones_RemoveXPak(v15);
  }
  while ( 1 )
  {
    v12 = (unsigned int)(v12 + 1);
    if ( (unsigned int)v12 >= 0x3E )
      break;
    v13 = unloadZones->zones.array[v12];
    if ( v13 )
      goto LABEL_14;
  }
  if ( screenUpdate )
  {
    R_EndRemoteScreenUpdate();
    Sys_ProfEndNamedEvent();
  }
  ProfLoad_Begin("DB_UnloadXAsset calls");
  if ( DB_IsDoingTransientOnlyWork() )
  {
    if ( !DB_Zones_AreTransientOnlyFlags(v11) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 9860, ASSERT_TYPE_ASSERT, "(DB_Zones_AreTransientOnlyFlags( unloadFlags ))", (const char *)&queryFormat, "DB_Zones_AreTransientOnlyFlags( unloadFlags )") )
      __debugbreak();
    DB_UnloadTransientZones(unloadZones, defaultOptions);
  }
  else
  {
    functor.defaultOptions = defaultOptions;
    functor.unloadZones = unloadZones;
    DB_AssetEntryPool::MutableForEach<UnloadAssetFunctor>(&s_assetManager.table.m_pool, &s_assetManager.table.m_headEntries, &functor);
  }
  ProfLoad_End();
  DB_BackendCallbacks_EnsureExclusiveAccess();
  LODWORD(v16) = 0;
  v17 = unloadZones->zones.array[0];
  while ( v17 )
  {
LABEL_36:
    v18 = __lzcnt(v17);
    v19 = v18 + 32 * v16;
    if ( v18 >= 0x20 )
    {
      LODWORD(v41) = 32;
      LODWORD(v40) = v18;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v40, v41) )
        __debugbreak();
    }
    if ( (v17 & (0x80000000 >> v18)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v17 &= ~(0x80000000 >> v18);
    if ( v19 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v19, "unsigned", v19) )
      __debugbreak();
    CurrentZoneHandleUniqueForIndex = DB_Zones_GetCurrentZoneHandleUniqueForIndex(v19);
    DB_BackendCallbacks_CancelZoneCallbacks(CurrentZoneHandleUniqueForIndex);
    v21 = DB_Zones_GetCurrentZoneHandleUniqueForIndex(v19);
    R_NotifyZoneUnload(v21);
    if ( (unsigned __int16)v19 >= 0x7A4ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
      __debugbreak();
    if ( ((0x8000000000000000ui64 >> (v19 & 0x3F)) & s_assetManager.assetsLoadedZones.m_data[(unsigned __int64)(unsigned __int16)v19 >> 6]) != 0 && (DB_Zones_GetZoneFlagsFromIndex((unsigned __int16)v19) & 0x4000) != 0 )
    {
      WorldTransientIndexFromZoneIndex = DB_Zones_GetWorldTransientIndexFromZoneIndex((unsigned __int16)v19);
      CL_Transients_GameSystemsTransientSP_UnloadDB(WorldTransientIndexFromZoneIndex);
    }
  }
  while ( 1 )
  {
    v16 = (unsigned int)(v16 + 1);
    if ( (unsigned int)v16 >= 0x3E )
      break;
    v17 = unloadZones->zones.array[v16];
    if ( v17 )
      goto LABEL_36;
  }
  DB_BackendCallbacks_EndExclusiveAccess();
  DB_LockPendingZoneWrite();
  LODWORD(v23) = 0;
  v24 = unloadZones->zones.array[0];
  while ( v24 )
  {
LABEL_55:
    v25 = __lzcnt(v24);
    v26 = v25 + 32 * v23;
    if ( v25 >= 0x20 )
    {
      LODWORD(v41) = 32;
      LODWORD(v40) = v25;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v40, v41) )
        __debugbreak();
    }
    if ( (v24 & (0x80000000 >> v25)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v24 &= ~(0x80000000 >> v25);
    if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 9926, ASSERT_TYPE_ASSERT, "(unloadingZone != DEFAULT_ZONE_INDEX)", (const char *)&queryFormat, "unloadingZone != DEFAULT_ZONE_INDEX") )
      __debugbreak();
    if ( v26 >= 0x7A4ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
      __debugbreak();
    v27 = 0x8000000000000000ui64 >> (v26 & 0x3F);
    v28 = (unsigned __int64)v26 >> 6;
    if ( (v27 & s_assetManager.pausedZones.m_data[v28]) != 0 )
      DB_CancelPauseFastfileLoad(v26);
    if ( v26 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 209, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
      __debugbreak();
    v29 = ~v27;
    s_assetManager.cancelledZones.m_data[v28] &= v29;
    if ( v26 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 209, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
      __debugbreak();
    s_assetManager.pausedZones.m_data[v28] &= v29;
    if ( v26 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 209, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
      __debugbreak();
    s_assetManager.deferredZones.m_data[v28] &= v29;
    if ( v26 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 209, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
      __debugbreak();
    s_assetManager.assetsLoadedZones.m_data[v28] &= v29;
    if ( v26 >= 0x7A4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 209, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
      __debugbreak();
    s_assetManager.fullyLoadedZones.m_data[v28] &= v29;
  }
  while ( 1 )
  {
    v23 = (unsigned int)(v23 + 1);
    if ( (unsigned int)v23 >= 0x3E )
      break;
    v24 = unloadZones->zones.array[v23];
    if ( v24 )
      goto LABEL_55;
  }
  s_assetManager.pendingZoneLock.writeThreadId = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&s_assetManager.pendingZoneLock);
  Sys_CheckReleaseLock(&s_assetManager.pendingZoneLock);
  ProfLoad_Begin("Unset transient flags");
  v30 = 0;
  v46 = 0;
  transientFlags = s_assetManager.transientFlags;
  v32 = 0i64;
  v47 = 0i64;
  v33 = v43;
  do
  {
    if ( (v33 & *(const unsigned int *)((char *)TRANSIENT_FLAGS_PARENT_ZONEFLAGS + v32)) != 0 )
    {
      if ( (s_dbCurrentWorkFlags & 0xFC700FFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6319, ASSERT_TYPE_ASSERT, "(( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_ZONES ) == 0)", (const char *)&queryFormat, "( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_ZONES ) == 0") )
        __debugbreak();
      if ( s_dbCurrentWorkFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 9950, ASSERT_TYPE_ASSERT, "(!DB_IsDoingStreamOnlyWork())", (const char *)&queryFormat, "!DB_IsDoingStreamOnlyWork()") )
        __debugbreak();
      v34 = DB_Zones_GetInUseFlags();
      if ( (v33 & *(const unsigned int *)((char *)TRANSIENT_FLAGS_TRANSIENT_ZONEFLAGS + v32) & v34) != (*(const unsigned int *)((char *)TRANSIENT_FLAGS_TRANSIENT_ZONEFLAGS + v32) & v34) )
      {
        LODWORD(v40) = v33;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 9955, ASSERT_TYPE_ASSERT, "( ( ( unloadFlags & unloadTransMask ) == unloadTransMask ) )", "( unloadFlags ) = %u", v40) )
          __debugbreak();
      }
      v35 = 0;
      v36 = 0i64;
      do
      {
        if ( v36 >= 0x5DA00 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
          __debugbreak();
        v37 = 0x8000000000000000ui64 >> (v36 & 0x3F);
        if ( (v37 & transientFlags->headAssets.m_flags.m_data[v36 >> 6]) != 0 )
          s_assetManager.transientOverrides.m_flags.m_data[v36 >> 6] &= ~v37;
        ++v35;
        ++v36;
      }
      while ( v35 < 0x5DA00 );
      v30 = v46;
      v38 = v46;
      memset_0(&s_assetManager.transientFlags[v38], 0, 0xBB40ui64);
      memset_0(&s_assetManager.transientFlags[v38].keepDefaultAssets, 0, sizeof(s_assetManager.transientFlags[v38].keepDefaultAssets));
      v32 = v47;
      v33 = v43;
    }
    v46 = ++v30;
    v32 += 4i64;
    v47 = v32;
    ++transientFlags;
  }
  while ( v30 < 3 );
  ProfLoad_End();
  Sys_ProfEndNamedEvent();
}

/*
==============
DB_UnlockHashRead
==============
*/
void DB_UnlockHashRead(void)
{
  __int64 v0; 

  if ( *(int *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 720i64) <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 525, ASSERT_TYPE_ASSERT, "(s_dbHashRWLockTLSReadCount > 0)", (const char *)&queryFormat, "s_dbHashRWLockTLSReadCount > 0") )
    __debugbreak();
  v0 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  --*(_DWORD *)(v0 + 720);
  if ( !*(_BYTE *)(v0 + 716) && !*(_DWORD *)(v0 + 720) )
  {
    ReleaseSRWLockShared((PSRWLOCK)&s_dbHashRWLock);
    Sys_CheckReleaseLock(&s_dbHashRWLock);
  }
}

/*
==============
DB_UnlockHashWrite
==============
*/
void DB_UnlockHashWrite(void)
{
  _QWORD *v0; 

  if ( !*(_BYTE *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 716i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 566, ASSERT_TYPE_ASSERT, "(s_dbHashRWLockTLSHasWriteLock)", (const char *)&queryFormat, "s_dbHashRWLockTLSHasWriteLock") )
    __debugbreak();
  if ( *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 720i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 567, ASSERT_TYPE_ASSERT, "(s_dbHashRWLockTLSReadCount == 0)", (const char *)&queryFormat, "s_dbHashRWLockTLSReadCount == 0") )
    __debugbreak();
  v0 = NtCurrentTeb()->Reserved1[11];
  s_dbHashRWLock.writeThreadId = 0;
  *(_BYTE *)(v0[tls_index] + 716i64) = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&s_dbHashRWLock);
  Sys_CheckReleaseLock(&s_dbHashRWLock);
}

/*
==============
DB_UnlockPendingZoneRead
==============
*/
void DB_UnlockPendingZoneRead()
{
  if ( !*(_BYTE *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 718i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 595, ASSERT_TYPE_ASSERT, "(s_hasPendingZoneLockRead)", (const char *)&queryFormat, "s_hasPendingZoneLockRead") )
    __debugbreak();
  *(_BYTE *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 718i64) = 0;
  ReleaseSRWLockShared((PSRWLOCK)&s_assetManager.pendingZoneLock);
  Sys_CheckReleaseLock(&s_assetManager.pendingZoneLock);
}

/*
==============
DB_UnlockTableForRead
==============
*/

void DB_UnlockTableForRead(void)
{
  DB_UnlockHashRead();
}

/*
==============
DB_UnlockWrite
==============
*/

void DB_UnlockWrite(void)
{
  DB_UnlockHashWrite();
}

/*
==============
DB_UnpauseLoadFastfiles
==============
*/
void DB_UnpauseLoadFastfiles(const DB_FastfileInfo *zoneInfo, unsigned int zoneCount)
{
  __int64 v4; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 8071, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !zoneInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 8073, ASSERT_TYPE_ASSERT, "(zoneInfo)", (const char *)&queryFormat, "zoneInfo") )
    __debugbreak();
  DB_AssetQuery_WaitForQueriesToComplete();
  DB_LockPendingZoneWrite();
  while ( s_dbLoadingFastfiles )
  {
    if ( !s_assetManager.pendingZonePaused )
      break;
    s_assetManager.pendingZoneLock.writeThreadId = 0;
    ReleaseSRWLockExclusive((PSRWLOCK)&s_assetManager.pendingZoneLock);
    Sys_CheckReleaseLock(&s_assetManager.pendingZoneLock);
    Sys_Sleep(1);
    Sys_CheckAcquireLock(&s_assetManager.pendingZoneLock);
    AcquireSRWLockExclusive((PSRWLOCK)&s_assetManager.pendingZoneLock);
    s_assetManager.pendingZoneLock.writeThreadId = Sys_GetCurrentThreadId();
    if ( !s_assetManager.pendingZoneLock.writeThreadId )
    {
      LODWORD(v4) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 177, ASSERT_TYPE_ASSERT, "( lock->writeThreadId ) != ( INVALID_THREAD_ID )", "%s != %s\n\t%i, %i", "lock->writeThreadId", "INVALID_THREAD_ID", v4, 0i64) )
        __debugbreak();
    }
  }
  if ( s_dbIsSyncLoading && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 8087, ASSERT_TYPE_ASSERT, "(!s_dbIsSyncLoading)", (const char *)&queryFormat, "!s_dbIsSyncLoading") )
    __debugbreak();
  if ( s_assetManager.pendingZonePaused && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 8088, ASSERT_TYPE_ASSERT, "(!s_assetManager.pendingZonePaused)", (const char *)&queryFormat, "!s_assetManager.pendingZonePaused") )
    __debugbreak();
  DB_PendingZones_Unpause(zoneInfo, zoneCount);
  if ( DB_PendingZones_HasPendingZones() && !s_dbLoadingFastfiles )
    DB_UnpauseLoadsInternal(0);
  s_assetManager.pendingZoneLock.writeThreadId = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&s_assetManager.pendingZoneLock);
  Sys_CheckReleaseLock(&s_assetManager.pendingZoneLock);
}

/*
==============
DB_UnpauseLoadsInternal
==============
*/
void DB_UnpauseLoadsInternal(const bool fromPostLoad)
{
  unsigned int Flags; 
  unsigned int v3; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5469, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( s_dbLoadingFastfiles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5470, ASSERT_TYPE_ASSERT, "(!s_dbLoadingFastfiles)", (const char *)&queryFormat, "!s_dbLoadingFastfiles") )
    __debugbreak();
  if ( s_dbLoadingProcessedAssets && !fromPostLoad && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5471, ASSERT_TYPE_ASSERT, "(!s_dbLoadingProcessedAssets || fromPostLoad)", (const char *)&queryFormat, "!s_dbLoadingProcessedAssets || fromPostLoad") )
    __debugbreak();
  if ( !DB_PendingZones_HasPendingZones() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5472, ASSERT_TYPE_ASSERT, "(DB_PendingZones_HasPendingZones())", (const char *)&queryFormat, "DB_PendingZones_HasPendingZones()") )
    __debugbreak();
  s_dbLoadingFastfiles = 1;
  if ( s_dbCurrentWorkFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5477, ASSERT_TYPE_ASSERT, "(s_dbCurrentWorkFlags == 0)", (const char *)&queryFormat, "s_dbCurrentWorkFlags == 0") )
    __debugbreak();
  Flags = DB_PendingZones_GetFlags();
  v3 = Flags;
  if ( (Flags & 0x38FF000) != 0 )
  {
    if ( !DB_Zones_AreStreamOnlyFlags(Flags) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5485, ASSERT_TYPE_ASSERT, "(DB_Zones_AreStreamOnlyFlags( pendingFlags ))", (const char *)&queryFormat, "DB_Zones_AreStreamOnlyFlags( pendingFlags )") )
      __debugbreak();
    s_dbCurrentWorkFlags = v3;
  }
  if ( (v3 & 0x3F00000) != 0 )
  {
    if ( (v3 & 0xFC0FFFFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5493, ASSERT_TYPE_ASSERT, "(( pendingFlags & ~DB_MASK_PRELOAD_ZONES ) == 0)", "%s\n\tMust be exclusively a preloading-only job", "( pendingFlags & ~DB_MASK_PRELOAD_ZONES ) == 0") )
      __debugbreak();
    g_dbPreloading = 1;
  }
  Sys_ResetDatabaseReady();
  Sys_WakeDatabaseThread();
}

/*
==============
DB_Update
==============
*/
void DB_Update(void)
{
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_Update");
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 2765, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()", -2i64) )
    __debugbreak();
  if ( s_mainThreadBlocked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 2766, ASSERT_TYPE_ASSERT, "(!s_mainThreadBlocked)", (const char *)&queryFormat, "!s_mainThreadBlocked") )
    __debugbreak();
  if ( db_inPostLoadXZone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 2767, ASSERT_TYPE_ASSERT, "(!db_inPostLoadXZone)", (const char *)&queryFormat, "!db_inPostLoadXZone") )
    __debugbreak();
  DB_Zones_ProcessPendingUnloadFrees(0);
  if ( !s_spTransientGameWaitingForPostLoad && DB_IsReadyForPostLoad() && !s_spTransientGameWaitingForPostLoad )
    DB_PostLoadXZone(0);
  Sys_ProfEndNamedEvent();
}

/*
==============
DB_UpdateDebugZone
==============
*/
void DB_UpdateDebugZone(void)
{
  unsigned int v0; 
  signed int i; 
  float v2; 
  int v3; 
  ClActiveClient **v4; 
  bool v5; 
  int ZoneIndexFromName; 
  int v7; 
  unsigned __int64 MemoryUsage; 
  __int64 v9; 
  __int64 v10; 
  DB_FastfileInfo zoneInfo; 
  ScriptableMyChangesSaveState savedState; 

  if ( g_debugZoneName[0] )
  {
    Stream_ImageRecord_Disable("mychanges");
    R_Cinematic_StopPlayback(0);
    XAnimIKShutdown();
    LUI_CoD_MarkMyChangesLoad();
    Com_SyncThreads();
    AnimVisualizer_MyChangesSaveAndShutdown();
    Scriptable_MyChangesSave(&savedState);
    DynEnt_MyChangesSaveAndShutdown();
    Scriptable_MyChangesShutdown();
    CG_Entity_MyChangesSaveAndShutdown();
    CG_ClientModel_MyChangesSaveAndShutdown();
    StaticModels_MyChangesSaveAndShutdown();
    PatchCollision_MyChangesSaveAndShutdown();
    Physics_MyChangesSaveAndShutdown();
    ParticleManager::HandleMyChangesPreLoad(1);
    DB_SyncXAssetsBlocking();
    CG_VisionSet_ResetAssets();
    NET_FlushLoopback(NS_MAXCLIENTS);
    v0 = SvClient::ms_clientCount;
    for ( i = 0; i < (int)SvClient::ms_clientCount; ++i )
    {
      if ( !(_BYTE)SvClient::ms_allocatedType )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_client.h", 99, ASSERT_TYPE_ASSERT, "( ms_allocatedType != GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType != GameModeType::NONE") )
          __debugbreak();
        v0 = SvClient::ms_clientCount;
      }
      if ( i >= v0 )
      {
        LODWORD(v10) = v0;
        LODWORD(v9) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_client.h", 100, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ms_clientCount )", "clientNum doesn't index ms_clientCount\n\t%i not in [0, %i)", v9, v10) )
          __debugbreak();
      }
      SvClient::ms_clients[i]->ResetSnapshotFramesMyChanges(SvClient::ms_clients[i]);
      v0 = SvClient::ms_clientCount;
    }
    v2 = cl_maxLocalClients;
    v3 = 0;
    if ( SLODWORD(cl_maxLocalClients) > 0 )
    {
      v4 = ClActiveClient::ms_activeClients;
      v5 = LODWORD(cl_maxLocalClients) != 0;
      do
      {
        if ( !v5 )
        {
          *(float *)&v10 = v2;
          LODWORD(v9) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v9, v10) )
            __debugbreak();
        }
        if ( !(_BYTE)ClActiveClient::ms_activeClientType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 323, ASSERT_TYPE_ASSERT, "(ms_activeClientType != GameModeType::NONE)", (const char *)&queryFormat, "ms_activeClientType != GameModeType::NONE") )
          __debugbreak();
        if ( !*v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 324, ASSERT_TYPE_ASSERT, "(ms_activeClients[localClientNum])", (const char *)&queryFormat, "ms_activeClients[localClientNum]") )
          __debugbreak();
        (*v4)->ResetParseInfoMyChanges(*v4);
        v2 = cl_maxLocalClients;
        ++v3;
        ++v4;
        v5 = (unsigned int)v3 < LODWORD(cl_maxLocalClients);
      }
      while ( v3 < SLODWORD(cl_maxLocalClients) );
    }
    if ( (s_dbCurrentWorkFlags & 0xFC700FFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 6319, ASSERT_TYPE_ASSERT, "(( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_ZONES ) == 0)", (const char *)&queryFormat, "( s_dbCurrentWorkFlags & ~DB_MASK_STREAM_ZONES ) == 0") )
      __debugbreak();
    if ( s_dbCurrentWorkFlags )
    {
      Com_PrintWarning(14, "WARNING: Skipping mychanges, because transient/preload fastfile system is busy.\n");
    }
    else
    {
      g_loadingDebugZone = 1;
      DB_ReleaseZoneExternalReferences(0x400u);
      g_usedDebugZone = 1;
      zoneInfo.name = NULL;
      *(_QWORD *)&zoneInfo.zoneFlags = 1024i64;
      zoneInfo.priority = 0;
      DB_UnloadFastfiles(&zoneInfo, 1u, 4u);
      *(_QWORD *)&zoneInfo.zoneFlags = 1024i64;
      zoneInfo.name = g_debugZoneName;
      zoneInfo.priority = 0xFFFF;
      Stream_Primer_CancelAndWait();
      DB_PushSkipAlwaysloadedImages();
      DB_LoadFastfiles(&zoneInfo, 1u, 5u, 0);
      DB_PopSkipAlwaysloadedImages();
      Stream_AlwaysLoaded_QueueProcessStreamingInfo();
      g_loadingDebugZone = 0;
      g_debugZoneUpdateTime = Sys_Milliseconds();
      g_debugZoneCompileStartTime = 0;
      ZoneIndexFromName = DB_Zones_GetZoneIndexFromName(g_debugZoneName);
      v7 = ZoneIndexFromName;
      if ( ZoneIndexFromName == 0xFFFF )
      {
        g_debugZoneAssetCount = 0;
        MemoryUsage = 0i64;
        g_debugZoneLoaded = 0;
      }
      else
      {
        g_debugZoneAssetCount = DB_Zones_GetAssetCountInZone(ZoneIndexFromName);
        MemoryUsage = DB_Zones_GetMemoryUsage(v7);
      }
      g_debugZoneMemSize = MemoryUsage;
      rgp.gameWorldSorted = 0;
    }
    BG_FillInAllWeaponItems();
    CG_ModelPreviewerEnumerateAssets();
    CG_VisionSetMyChanges();
    LUI_CoD_HandleMyChangesLoad();
    if ( SV_Loaded() )
      G_Vehicle_MyChanges();
    XAnimIKInit(0);
    Mayhem_MyChanges();
    SND_MyChanges();
    CG_CinematicCameraMyChanges();
    CG_ViewMotion_MyChanges();
    BG_Execution_MyChanges();
    BG_Camera_MyChanges();
    BG_Accessory_MyChanges();
    BG_Suit_MyChanges();
    CG_Main_RegisterSurfaceEffects("void");
    ParticleManager::HandleMyChanges(1);
    Physics_MyChangesInitAndLoad();
    PatchCollision_MyChangesInitAndLoad();
    StaticModels_MyChangesInitAndLoad();
    CG_ClientModel_MyChangesInitAndLoad();
    CG_Entity_MyChangesInitAndLoad();
    Scriptable_MyChangesStartInit();
    DynEnt_MyChangesInitAndLoad();
    Scriptable_MyChangesFinishInitAndLoad(&savedState);
    AI_BT_MyChanges();
    Ai_Asm::MyChanges();
    BgPlayer_Asm::MyChanges();
    if ( SV_Loaded() )
      BG_ReBuildAllWeaponAnimArrays();
    R_UGB_DirtySurfData();
    R_DecalVolumes_MyChanges();
    AnimVisualizer_MyChangesInitAndLoad();
  }
}

/*
==============
DB_UpdateFxWorldTransientZones
==============
*/
void DB_UpdateFxWorldTransientZones()
{
  const dvar_t *v0; 
  unsigned int v1; 
  unsigned int v2; 
  DB_AssetEntryFlags *p_m_headEntries; 
  FxWorldTransientZoneFixupValidateFunctor functor; 

  DB_FxWorldTransientZone_Fixup();
  v0 = DCONST_DVARBOOL_db_comprehensiveSanityChecks;
  if ( !DCONST_DVARBOOL_db_comprehensiveSanityChecks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "db_comprehensiveSanityChecks") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( v0->current.enabled )
  {
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_UpdateFxWorldTransientZones");
    functor.fxTransients[0] = fxWorld.transientZones[0];
    if ( fxWorld.transientZoneCount > 1 )
      memset(&functor.fxTransients[1], 0, 8i64 * (fxWorld.transientZoneCount - 1));
    v1 = 0;
    v2 = 0;
    p_m_headEntries = &s_assetManager.table.m_headEntries;
    do
    {
      DB_AssetEntryPool::ForEachInBlock<FxWorldTransientZoneFixupValidateFunctor>(&s_assetManager.table.m_pool, &s_assetManager.table.m_headEntries, p_m_headEntries->m_flags.m_data[0], v1, &functor);
      v1 += 64;
      ++v2;
      p_m_headEntries = (DB_AssetEntryFlags *)((char *)p_m_headEntries + 8);
    }
    while ( v2 < 0x1768 );
    if ( memcmp_0(&functor, fxWorld.transientZones, 8i64 * fxWorld.transientZoneCount) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3578, ASSERT_TYPE_ASSERT, "( !I_memcmp( functor.fxTransients, fxWorld.transientZones, fxWorld.transientZoneCount * sizeof( fxWorld.transientZones[0] ) ) )", "New DB_FxWorldTransientZone_Fixup functionality doesn't match legacy functionality") )
        __debugbreak();
    }
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
DB_UpdateGfxWorldTransientZones
==============
*/
void DB_UpdateGfxWorldTransientZones()
{
  const dvar_t *v0; 
  unsigned int v1; 
  unsigned int v2; 
  DB_AssetEntryFlags *p_m_headEntries; 
  GfxWorldTransientZoneFixupValidateFunctor functor; 

  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_UpdateGfxWorldTransientZones");
  DB_GfxWorldTransientZone_Fixup();
  v0 = DCONST_DVARBOOL_db_comprehensiveSanityChecks;
  if ( !DCONST_DVARBOOL_db_comprehensiveSanityChecks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "db_comprehensiveSanityChecks") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( v0->current.enabled )
  {
    functor.gfxTransients[0] = s_world.draw.transientZones[0];
    if ( s_world.draw.transientZoneCount > 1 )
      memset(&functor.gfxTransients[1], 0, 8i64 * (s_world.draw.transientZoneCount - 1));
    v1 = 0;
    v2 = 0;
    p_m_headEntries = &s_assetManager.table.m_headEntries;
    do
    {
      DB_AssetEntryPool::ForEachInBlock<GfxWorldTransientZoneFixupValidateFunctor>(&s_assetManager.table.m_pool, &s_assetManager.table.m_headEntries, p_m_headEntries->m_flags.m_data[0], v1, &functor);
      v1 += 64;
      ++v2;
      p_m_headEntries = (DB_AssetEntryFlags *)((char *)p_m_headEntries + 8);
    }
    while ( v2 < 0x1768 );
    if ( memcmp_0(&functor, s_world.draw.transientZones, 8i64 * s_world.draw.transientZoneCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 3516, ASSERT_TYPE_ASSERT, "( !I_memcmp( functor.gfxTransients, s_world.draw.transientZones, s_world.draw.transientZoneCount * sizeof( fxWorld.transientZones[0] ) ) )", "New DB_GfxWorldTransientZone_Fixup functionality doesn't match legacy functionality") )
      __debugbreak();
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
DB_UsePedanticCorruptionChecks
==============
*/
bool DB_UsePedanticCorruptionChecks()
{
  const dvar_t *v0; 

  v0 = DVARBOOL_db_pedantic;
  if ( !DVARBOOL_db_pedantic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "db_pedantic") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.enabled;
}

/*
==============
DB_ValidateAssetTable
==============
*/
void DB_ValidateAssetTable()
{
  const dvar_t *v0; 
  XAssetType v1; 
  char v2; 
  DB_AssetEntryFlags *p_m_tableEntries; 
  unsigned int v4; 
  unsigned int i; 
  ValidateAssetTableFunctor *p_functor; 
  unsigned int AssetsUsedByType; 
  unsigned int AssetEntriesUsed; 
  unsigned int totalEntries; 
  unsigned int v10; 
  char *fmt; 
  ValidateAssetTableFunctor functor; 

  memset_0(&functor, 0, 0x1C4ui64);
  v0 = DCONST_DVARBOOL_db_comprehensiveSanityChecks;
  v1 = ASSET_TYPE_PHYSICSLIBRARY;
  v2 = 0;
  functor.totalEntries = 0;
  functor.assetCounts[11] = 2048;
  if ( !DCONST_DVARBOOL_db_comprehensiveSanityChecks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "db_comprehensiveSanityChecks") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( !v0->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 5247, ASSERT_TYPE_ASSERT, "(Dvar_GetBool_Internal_DebugName( DCONST_DVARBOOL_db_comprehensiveSanityChecks, \"db_comprehensiveSanityChecks\" ))", (const char *)&queryFormat, "Dconst_GetBool( db_comprehensiveSanityChecks )") )
    __debugbreak();
  p_m_tableEntries = &s_assetManager.table.m_tableEntries;
  v4 = 0;
  for ( i = 0; i < 0x1768; ++i )
  {
    DB_AssetEntryPool::ForEachInBlock<ValidateAssetTableFunctor>(&s_assetManager.table.m_pool, &s_assetManager.table.m_tableEntries, p_m_tableEntries->m_flags.m_data[0], v4, &functor);
    v4 += 64;
    p_m_tableEntries = (DB_AssetEntryFlags *)((char *)p_m_tableEntries + 8);
  }
  p_functor = &functor;
  do
  {
    AssetsUsedByType = DB_AssetUsage_GetAssetsUsedByType(v1);
    if ( AssetsUsedByType != p_functor->assetCounts[0] )
    {
      LODWORD(fmt) = p_functor->assetCounts[0];
      Com_Printf(16, "Asset count mismatch for %s: %d != %d\n", g_assetNames[v1], AssetsUsedByType, fmt);
      v2 = 1;
    }
    ++v1;
    p_functor = (ValidateAssetTableFunctor *)((char *)p_functor + 4);
  }
  while ( (unsigned int)v1 < ASSET_TYPE_COUNT );
  AssetEntriesUsed = DB_AssetUsage_GetAssetEntriesUsed();
  totalEntries = functor.totalEntries;
  if ( AssetEntriesUsed == functor.totalEntries )
  {
    if ( !v2 )
      return;
  }
  else
  {
    v10 = DB_AssetUsage_GetAssetEntriesUsed();
    Com_Printf(16, "Asset entry count mismatch: %d != %d\n", v10, totalEntries);
  }
  Com_PrintError(16, "ERROR: DB_ValidateAssetTable() failed! Please Jira this, if you see it.\n");
}

/*
==============
DB_ValidateRegistryState
==============
*/
void DB_ValidateRegistryState(void)
{
  bool v0; 
  const char *CurrentThreadContextName; 
  XRegistryState v2; 
  XRegistryState v3; 
  int v4; 
  int v5; 

  if ( Sys_IsMainThread() )
  {
    if ( s_registryState == REGISTRY_STATE_MAIN_THREAD )
      return;
    v4 = 1;
    v2 = s_registryState;
    v0 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 10964, ASSERT_TYPE_ASSERT, "( s_registryState ) == ( REGISTRY_STATE_MAIN_THREAD )", "%s == %s\n\t%u, %u", "s_registryState", "REGISTRY_STATE_MAIN_THREAD", v2, v4);
  }
  else if ( Sys_IsDatabaseThread() )
  {
    if ( s_registryState == REGISTRY_STATE_DB_THREAD )
      return;
    v5 = 2;
    v3 = s_registryState;
    v0 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 10968, ASSERT_TYPE_ASSERT, "( s_registryState ) == ( REGISTRY_STATE_DB_THREAD )", "%s == %s\n\t%u, %u", "s_registryState", "REGISTRY_STATE_DB_THREAD", v3, v5);
  }
  else
  {
    CurrentThreadContextName = Sys_GetCurrentThreadContextName();
    v0 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 10972, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Not allowed on %s thread", CurrentThreadContextName);
  }
  if ( v0 )
    __debugbreak();
}

/*
==============
DB_VerbosePrint
==============
*/
__int64 DB_VerbosePrint()
{
  const dvar_t *v0; 

  v0 = DCONST_DVARBOOL_db_verbose;
  if ( !DCONST_DVARBOOL_db_verbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "db_verbose") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.color[0];
}

/*
==============
DB_WaitForAlwaysLoadedAssets
==============
*/
void DB_WaitForAlwaysLoadedAssets()
{
  int LogChannel; 
  int v1; 
  char v2; 
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  int v6; 
  bool IsRunning; 
  int v8; 
  signed __int64 v9; 
  signed __int64 v10; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 
  signed __int64 v13; 
  unsigned __int64 v14; 
  const char *StatusText; 
  int v16; 
  int v17; 
  float v18; 
  float v19; 
  double v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  double v26; 
  float v27; 
  float v28; 
  float v29; 
  int v30; 
  unsigned __int64 v31; 
  unsigned __int64 v32; 
  unsigned __int64 v33; 
  bool IsEnabled; 
  unsigned __int64 v35; 
  unsigned __int64 v36; 
  unsigned __int64 v37; 
  __int64 v38; 
  __int64 v39; 
  __int64 v40; 
  int v41; 
  float v42; 
  float v43; 
  double v44; 
  float v45; 
  float v46; 
  float v47; 
  float v48; 
  float v49; 
  double v50; 
  float v51; 
  float v52; 
  float v53; 
  float v54; 
  float v55; 
  double v56; 
  float v57; 
  float v58; 
  float v59; 
  float v60; 
  float v61; 
  double v62; 
  float v63; 
  float v64; 
  float v65; 
  double v66; 
  double v67; 
  int v68; 
  float v69; 
  float v70; 
  double v71; 
  float v72; 
  float v73; 
  float v74; 
  float v75; 
  float v76; 
  double v77; 
  float v78; 
  float v79; 
  float v80; 
  int v81; 
  __int64 v82; 
  char v83; 
  bool v84; 
  int v85; 
  int v86; 
  int v87; 
  unsigned __int64 bytesLoaded[3]; 
  unsigned __int64 bytesToLoad[3]; 
  __int64 v90; 
  __int64 v91; 
  __int64 v92; 
  unsigned __int64 v93[3]; 
  __int64 v94; 
  __int64 v95; 
  __int64 v96; 
  unsigned __int64 v97; 
  unsigned __int64 v98; 
  unsigned __int64 v99; 

  if ( !Stream_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 8583, ASSERT_TYPE_ASSERT, "(Stream_IsInitialized())", (const char *)&queryFormat, "Stream_IsInitialized()") )
    __debugbreak();
  if ( !r_glob.startedRenderThread )
  {
    LogChannel = DB_GetLogChannel();
    Com_Printf(LogChannel, "Fastfile load... Not loading always loaded assets because render thread, and with that streamer, isn't started\n");
    return;
  }
  if ( !Stream_IsEnabled() )
  {
    v1 = DB_GetLogChannel();
    Com_Printf(v1, "Fastfile load... Not loading always loaded assets because streamer is disabled\n");
    return;
  }
  v2 = 0;
  v83 = 0;
  memset(bytesToLoad, 0, sizeof(bytesToLoad));
  memset(bytesLoaded, 0, sizeof(bytesLoaded));
  v90 = 0i64;
  v91 = 0i64;
  v92 = 0i64;
  v3 = 0i64;
  v85 = Sys_Milliseconds();
  v94 = 0i64;
  v4 = 0i64;
  v95 = 0i64;
  v5 = 0i64;
  v96 = 0i64;
  v6 = v85;
  v87 = v85;
  IsRunning = 1;
  v84 = LoadBar_IsComplete() == 0;
  v8 = Sys_Milliseconds();
  v86 = v8;
  if ( !Stream_AlwaysLoaded_IsFinished() )
  {
    while ( 1 )
    {
      if ( !Stream_AlwaysLoaded_IsLoading() )
        goto LABEL_34;
      if ( v2 )
        break;
      IsRunning = Stream_Primer_IsRunning();
      if ( !IsRunning || (Stream_Primer_GetProgress((unsigned __int64 (*)[3])bytesToLoad, (unsigned __int64 (*)[3])bytesLoaded), !(IsRunning = Stream_Primer_IsRunning())) )
      {
        Stream_CalculateForced(bytesToLoad, &bytesToLoad[1]);
        Stream_CalculateForcedAndLoaded(bytesLoaded, &bytesLoaded[1]);
      }
      v9 = bytesToLoad[0] - bytesLoaded[0];
      v90 = bytesToLoad[0] - bytesLoaded[0];
      if ( bytesToLoad[0] )
      {
        v10 = bytesToLoad[1] - bytesLoaded[1];
        v91 = bytesToLoad[1] - bytesLoaded[1];
LABEL_19:
        v11 = bytesToLoad[2] - bytesLoaded[2];
        v92 = bytesToLoad[2] - bytesLoaded[2];
        v12 = bytesToLoad[2] - bytesLoaded[2];
        v13 = bytesToLoad[2] - bytesLoaded[2];
        v14 = bytesToLoad[2] - bytesLoaded[2];
LABEL_20:
        v83 = 1;
        if ( v84 )
        {
          LoadBar_StartAlwaysLoaded(v9 + v10);
          v11 = v12;
          v13 = v14;
        }
        v17 = DB_GetLogChannel();
        v18 = (float)(__int64)(v10 + v9 + v11);
        if ( (__int64)(v10 + v9 + v11) < 0 )
        {
          v19 = (float)(__int64)(v10 + v9 + v11);
          v18 = v19 + 1.8446744e19;
        }
        v20 = (float)(v18 * 0.00000095367432);
        v21 = (float)v13;
        if ( v13 < 0 )
        {
          v22 = (float)v13;
          v21 = v22 + 1.8446744e19;
        }
        v23 = v21 * 0.00000095367432;
        v24 = (float)v10;
        v26 = v23;
        if ( v10 < 0 )
        {
          v25 = (float)v10;
          v24 = v25 + 1.8446744e19;
        }
        v27 = v24 * 0.00000095367432;
        v28 = (float)v9;
        if ( v9 < 0 )
        {
          v29 = (float)v9;
          v28 = v29 + 1.8446744e19;
        }
        LODWORD(v82) = v86 - v85;
        Com_Printf(v17, "Fastfile load... Start loading alwaysloaded assets: images %.2f MB + meshes %.2f MB + generics %.2f MB = %.2f MB @ %ims.\n", (float)(v28 * 0.00000095367432), v27, v26, v20, v82);
LABEL_31:
        v8 = v86;
        goto LABEL_32;
      }
      v10 = bytesToLoad[1] - bytesLoaded[1];
      v91 = bytesToLoad[1] - bytesLoaded[1];
      if ( bytesToLoad[1] )
        goto LABEL_19;
      v11 = bytesToLoad[2] - bytesLoaded[2];
      v92 = bytesToLoad[2] - bytesLoaded[2];
      v12 = bytesToLoad[2] - bytesLoaded[2];
      v13 = bytesToLoad[2] - bytesLoaded[2];
      v14 = bytesToLoad[2] - bytesLoaded[2];
      if ( bytesToLoad[2] )
        goto LABEL_20;
      StatusText = Stream_Primer_GetStatusText();
      v16 = DB_GetLogChannel();
      v8 = v86;
      v6 = v85;
      Com_Printf(v16, "Fastfile load... Start loading alwaysloaded assets... (Primer status: %s) @ %ims.\n", StatusText, (unsigned int)(v86 - v85));
LABEL_33:
      v2 = v83;
LABEL_34:
      if ( s_assetManager.redoAlwaysloadedFlagsForPauseOrCancel )
      {
        v30 = DB_GetLogChannel();
        Com_Printf(v30, "Fastfile load... Loading alwaysloaded assets canceled and restarted.\n");
        s_assetManager.redoAlwaysloadedFlagsForPauseOrCancel = 0;
        Stream_AlwaysLoaded_QueueProcessStreamingInfo();
        v2 = 0;
        v83 = 0;
      }
      Sys_YieldWorkerCmd();
      Sys_Sleep(15);
      if ( Stream_AlwaysLoaded_IsTimedOut() )
      {
        v81 = DB_GetLogChannel();
        Com_Printf(v81, "Fastfile load... Loading alwaysloaded assets timed out due to no progress after %ims.\n", (unsigned int)(v8 - v6));
        Stream_Primer_RequestCancel();
        goto LABEL_80;
      }
      v8 = Sys_Milliseconds();
      v86 = v8;
      if ( Stream_AlwaysLoaded_IsFinished() )
      {
        if ( !v2 )
          return;
        v54 = (float)(__int64)(bytesToLoad[2] + bytesToLoad[0] + bytesToLoad[1]);
        if ( (__int64)(bytesToLoad[2] + bytesToLoad[0] + bytesToLoad[1]) < 0 )
        {
          v55 = (float)(__int64)(bytesToLoad[2] + bytesToLoad[0] + bytesToLoad[1]);
          v54 = v55 + 1.8446744e19;
        }
        v56 = (float)(v54 * 0.00000095367432);
        v57 = (float)(__int64)bytesToLoad[2];
        if ( (bytesToLoad[2] & 0x8000000000000000ui64) != 0i64 )
        {
          v58 = (float)(__int64)bytesToLoad[2];
          v57 = v58 + 1.8446744e19;
        }
        v59 = v57 * 0.00000095367432;
        v60 = (float)(__int64)bytesToLoad[1];
        v62 = v59;
        if ( (bytesToLoad[1] & 0x8000000000000000ui64) != 0i64 )
        {
          v61 = (float)(__int64)bytesToLoad[1];
          v60 = v61 + 1.8446744e19;
        }
        v63 = v60 * 0.00000095367432;
        v64 = (float)(__int64)bytesToLoad[0];
        v66 = v63;
        if ( (bytesToLoad[0] & 0x8000000000000000ui64) != 0i64 )
        {
          v65 = (float)(__int64)bytesToLoad[0];
          v64 = v65 + 1.8446744e19;
        }
        v67 = (float)(v64 * 0.00000095367432);
        v68 = DB_GetLogChannel();
        v69 = (float)(v91 + v92 + v90);
        if ( v91 + v92 + v90 < 0 )
        {
          v70 = (float)(v91 + v92 + v90);
          v69 = v70 + 1.8446744e19;
        }
        v71 = (float)(v69 * 0.00000095367432);
        v72 = (float)v92;
        if ( v92 < 0 )
        {
          v73 = (float)v92;
          v72 = v73 + 1.8446744e19;
        }
        v74 = v72 * 0.00000095367432;
        v75 = (float)v91;
        v77 = v74;
        if ( v91 < 0 )
        {
          v76 = (float)v91;
          v75 = v76 + 1.8446744e19;
        }
        v78 = v75 * 0.00000095367432;
        v79 = (float)v90;
        if ( v90 < 0 )
        {
          v80 = (float)v90;
          v79 = v80 + 1.8446744e19;
        }
        Com_Printf(v68, "Fastfile load... Loaded alwaysloaded assets in %ims, images %.2f MB + meshes %.2f MB + generics %.2f MB = %.2f MB. New total including other already loaded fastfiles: images %.2f MB + meshes %.2f MB + generics %.2f MB = %.2f MB \n", (unsigned int)(v8 - v6), (float)(v79 * 0.00000095367432), v78, v77, v71, v67, v66, v62, v56);
LABEL_80:
        if ( v2 )
        {
          if ( v84 )
            LoadBar_FinishAlwaysLoaded();
        }
        return;
      }
      v5 = v96;
      v4 = v95;
      v3 = v94;
    }
    v31 = 0i64;
    memset(v93, 0, sizeof(v93));
    v32 = 0i64;
    v33 = 0i64;
    v97 = 0i64;
    v98 = 0i64;
    v99 = 0i64;
    if ( IsRunning )
    {
      Stream_Primer_GetProgress((unsigned __int64 (*)[3])bytesToLoad, (unsigned __int64 (*)[3])v93);
      IsEnabled = Stream_Primer_IsRunning();
    }
    else
    {
      Stream_CalculateForcedAndLoaded(v93, &v93[1]);
      IsEnabled = Stream_IsEnabled();
    }
    if ( !IsEnabled )
      goto LABEL_31;
    v35 = bytesLoaded[0];
    if ( bytesLoaded[0] <= v93[0] )
    {
      bytesLoaded[0] = v93[0];
      v31 = v93[0] - v35;
      v97 = v93[0] - v35;
    }
    v36 = bytesLoaded[1];
    if ( bytesLoaded[1] <= v93[1] )
    {
      bytesLoaded[1] = v93[1];
      v32 = v93[1] - v36;
      v98 = v93[1] - v36;
    }
    v37 = bytesLoaded[2];
    if ( bytesLoaded[2] <= v93[2] )
    {
      bytesLoaded[2] = v93[2];
      v33 = v93[2] - v37;
      v99 = v93[2] - v37;
    }
    if ( v84 )
      LoadBar_ReadAlwaysLoaded(v31 + v32);
    v38 = v31 + v3;
    v39 = v4 + v32;
    v40 = v33 + v5;
    v94 = v38;
    v8 = v86;
    v95 = v39;
    v96 = v40;
    if ( v86 - v87 > 2000 )
    {
      v87 = v86;
      v41 = DB_GetLogChannel();
      v42 = (float)(v40 + v38 + v39);
      if ( v40 + v38 + v39 < 0 )
      {
        v43 = (float)(v40 + v38 + v39);
        v42 = v43 + 1.8446744e19;
      }
      v44 = (float)(v42 * 0.00000095367432);
      v45 = (float)v40;
      if ( v40 < 0 )
      {
        v46 = (float)v40;
        v45 = v46 + 1.8446744e19;
      }
      v47 = v45 * 0.00000095367432;
      v48 = (float)v39;
      v50 = v47;
      if ( v39 < 0 )
      {
        v49 = (float)v39;
        v48 = v49 + 1.8446744e19;
      }
      v51 = v48 * 0.00000095367432;
      v52 = (float)v38;
      if ( v38 < 0 )
      {
        v53 = (float)v38;
        v52 = v53 + 1.8446744e19;
      }
      Com_Printf(v41, "Fastfile load... Loading alwaysloaded assets: images %.2f MB + meshes %.2f MB + generics %.2f MB = %.2f MB, %.2f seconds so far\n", (float)(v52 * 0.00000095367432), v51, v50, v44, (float)((float)(v86 - v85) * 0.001));
    }
LABEL_32:
    v6 = v85;
    goto LABEL_33;
  }
}

/*
==============
DB_XAssetExists
==============
*/
_BOOL8 DB_XAssetExists(XAssetType type, const char *name)
{
  DB_AssetEntry *Asset; 

  if ( !s_dbIsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 2311, ASSERT_TYPE_ASSERT, "(s_dbIsInitialized)", (const char *)&queryFormat, "s_dbIsInitialized") )
    __debugbreak();
  DB_LockHashRead();
  Asset = DB_AssetEntryTable::FindAsset(&s_assetManager.table, name, type);
  DB_UnlockHashRead();
  return Asset != NULL;
}

/*
==============
Load_GetCurrentZoneHandle
==============
*/
void Load_GetCurrentZoneHandle(unsigned __int16 *handle)
{
  unsigned __int16 CurrentZoneLoadIndex; 

  CurrentZoneLoadIndex = DB_Zones_GetCurrentZoneLoadIndex();
  if ( !CurrentZoneLoadIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_registry.cpp", 10734, ASSERT_TYPE_ASSERT, "(zoneIndex != DEFAULT_ZONE_INDEX)", (const char *)&queryFormat, "zoneIndex != DEFAULT_ZONE_INDEX") )
    __debugbreak();
  *handle = CurrentZoneLoadIndex;
}

