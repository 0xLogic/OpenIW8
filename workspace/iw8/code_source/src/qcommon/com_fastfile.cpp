/*
==============
Com_FastFile_OnEnterGameMode
==============
*/

void __fastcall Com_FastFile_OnEnterGameMode(GameModeType gameMode)
{
  ?Com_FastFile_OnEnterGameMode@@YAXW4GameModeType@@@Z(gameMode);
}

/*
==============
ComFastFileLoadModule::ClearRequestedZones
==============
*/

void __fastcall ComFastFileLoadModule::ClearRequestedZones(ComFastFileLoadModule *this)
{
  ?ClearRequestedZones@ComFastFileLoadModule@@QEAAXXZ(this);
}

/*
==============
ComFastFileLoadModule::IsIdle
==============
*/

bool __fastcall ComFastFileLoadModule::IsIdle(ComFastFileLoadModule *this)
{
  return ?IsIdle@ComFastFileLoadModule@@QEBA_NXZ(this);
}

/*
==============
ComFastFileLoadModule::SetDebugName
==============
*/

void __fastcall ComFastFileLoadModule::SetDebugName(ComFastFileLoadModule *this, const char *name)
{
  ?SetDebugName@ComFastFileLoadModule@@QEAAXPEBD@Z(this, name);
}

/*
==============
ComFastFileLoadModule::RequestContainsModule
==============
*/

bool __fastcall ComFastFileLoadModule::RequestContainsModule(ComFastFileLoadModule *this, const ComFastFileLoadModule *otherModule)
{
  return ?RequestContainsModule@ComFastFileLoadModule@@QEBA_NPEBV1@@Z(this, otherModule);
}

/*
==============
ComFastFileLoadModule::SetRequestedZone
==============
*/

void __fastcall ComFastFileLoadModule::SetRequestedZone(ComFastFileLoadModule *this, const char *zoneName, const unsigned __int64 sizeEstimate)
{
  ?SetRequestedZone@ComFastFileLoadModule@@QEAAXPEBD_K@Z(this, zoneName, sizeEstimate);
}

/*
==============
ComFastFileLoadModule::IsFailed
==============
*/

bool __fastcall ComFastFileLoadModule::IsFailed(ComFastFileLoadModule *this)
{
  return ?IsFailed@ComFastFileLoadModule@@QEBA_NXZ(this);
}

/*
==============
ComFastFileLoadModule::CollectModuleFlagRequests
==============
*/

void __fastcall ComFastFileLoadModule::CollectModuleFlagRequests(ComFastFileLoadModule *this, ComFastFileDbRequestType request, unsigned int *requestFlags)
{
  ?CollectModuleFlagRequests@ComFastFileLoadModule@@QEAAXW4ComFastFileDbRequestType@@PEAI@Z(this, request, requestFlags);
}

/*
==============
ComFastFileLoadModule::SetModuleListActive
==============
*/

void __fastcall ComFastFileLoadModule::SetModuleListActive(ComFastFileLoadModule *this, bool isActive)
{
  ?SetModuleListActive@ComFastFileLoadModule@@QEAAX_N@Z(this, isActive);
}

/*
==============
ComFastFileLoadModule::Frame_Loading
==============
*/

void __fastcall ComFastFileLoadModule::Frame_Loading(ComFastFileLoadModule *this)
{
  ?Frame_Loading@ComFastFileLoadModule@@AEAAXXZ(this);
}

/*
==============
ComFastFileLoadModule::SetDatabaseRequest
==============
*/

void __fastcall ComFastFileLoadModule::SetDatabaseRequest(ComFastFileLoadModule *this, ComFastFileDbRequestType nextRequest)
{
  ?SetDatabaseRequest@ComFastFileLoadModule@@AEAAXW4ComFastFileDbRequestType@@@Z(this, nextRequest);
}

/*
==============
ComFastFileLoadModule::GetDebugRequestName
==============
*/

const char *__fastcall ComFastFileLoadModule::GetDebugRequestName(ComFastFileLoadModule *this, ComFastFileDbRequestType request)
{
  return ?GetDebugRequestName@ComFastFileLoadModule@@AEBAPEBDW4ComFastFileDbRequestType@@@Z(this, request);
}

/*
==============
ComFastFileLoadModule::GetModuleActive
==============
*/

bool __fastcall ComFastFileLoadModule::GetModuleActive(ComFastFileLoadModule *this)
{
  return ?GetModuleActive@ComFastFileLoadModule@@QEBA_NXZ(this);
}

/*
==============
Com_Fastfile_ErrorCleanup
==============
*/

void Com_Fastfile_ErrorCleanup(void)
{
  ?Com_Fastfile_ErrorCleanup@@YAXXZ();
}

/*
==============
ComFastFileLoadModule::CheckIsLoadedOrPendingWithDB
==============
*/

void __fastcall ComFastFileLoadModule::CheckIsLoadedOrPendingWithDB(ComFastFileLoadModule *this, const bool allowIdle)
{
  ?CheckIsLoadedOrPendingWithDB@ComFastFileLoadModule@@QEBAX_N@Z(this, allowIdle);
}

/*
==============
Com_FastFile_GameStart_AllowedToStart
==============
*/

bool __fastcall Com_FastFile_GameStart_AllowedToStart(const char *mapName)
{
  return ?Com_FastFile_GameStart_AllowedToStart@@YA_NPEBD@Z(mapName);
}

/*
==============
ComFastFileLoadModule::IsLoaded
==============
*/

bool __fastcall ComFastFileLoadModule::IsLoaded(ComFastFileLoadModule *this)
{
  return ?IsLoaded@ComFastFileLoadModule@@QEBA_NXZ(this);
}

/*
==============
ComFastFileLoadModule::SetParent
==============
*/

void __fastcall ComFastFileLoadModule::SetParent(ComFastFileLoadModule *this, ComFastFileLoadModule *parent)
{
  ?SetParent@ComFastFileLoadModule@@QEAAXPEAV1@@Z(this, parent);
}

/*
==============
ComFastFileLoadModule::SetChild
==============
*/

void __fastcall ComFastFileLoadModule::SetChild(ComFastFileLoadModule *this, ComFastFileLoadModule *child)
{
  ?SetChild@ComFastFileLoadModule@@AEAAXPEAV1@@Z(this, child);
}

/*
==============
Com_FastFile_RequestGameModeFastFiles
==============
*/

void __fastcall Com_FastFile_RequestGameModeFastFiles(GameModeType gameMode, DB_FastFileFailureMode failureMode)
{
  ?Com_FastFile_RequestGameModeFastFiles@@YAXW4GameModeType@@W4DB_FastFileFailureMode@@@Z(gameMode, failureMode);
}

/*
==============
Com_FastFile_AreGameCommonLoaded
==============
*/

bool __fastcall Com_FastFile_AreGameCommonLoaded()
{
  return ?Com_FastFile_AreGameCommonLoaded@@YA_NXZ();
}

/*
==============
Com_FastFile_GameStart_ReadyForTransients
==============
*/

bool __fastcall Com_FastFile_GameStart_ReadyForTransients(const char *mapName)
{
  return ?Com_FastFile_GameStart_ReadyForTransients@@YA_NPEBD@Z(mapName);
}

/*
==============
ComFastFileLoadModule::SetState
==============
*/

void __fastcall ComFastFileLoadModule::SetState(ComFastFileLoadModule *this, ComFastFileLoadModule::LoadState nextState)
{
  ?SetState@ComFastFileLoadModule@@AEAAXW4LoadState@1@@Z(this, nextState);
}

/*
==============
ComFastFileLoadModule::IsPauseRequired
==============
*/

bool __fastcall ComFastFileLoadModule::IsPauseRequired(ComFastFileLoadModule *this)
{
  return ?IsPauseRequired@ComFastFileLoadModule@@AEBA_NXZ(this);
}

/*
==============
Com_FastFile_IsUnloadUiComplete
==============
*/

bool __fastcall Com_FastFile_IsUnloadUiComplete()
{
  return ?Com_FastFile_IsUnloadUiComplete@@YA_NXZ();
}

/*
==============
ComFastFileLoadModule::RequestEqualsName
==============
*/

bool __fastcall ComFastFileLoadModule::RequestEqualsName(ComFastFileLoadModule *this, const char *zoneName)
{
  return ?RequestEqualsName@ComFastFileLoadModule@@QEBA_NPEBD@Z(this, zoneName);
}

/*
==============
ComFastFileLoadModule::ValidateDynamicRelationships
==============
*/

void __fastcall ComFastFileLoadModule::ValidateDynamicRelationships(ComFastFileLoadModule *this, const ComFastFileLoadModule *otherModule)
{
  ?ValidateDynamicRelationships@ComFastFileLoadModule@@QEBAXPEBV1@@Z(this, otherModule);
}

/*
==============
Com_FastFile_GameStart_ReadyForLevel
==============
*/

bool __fastcall Com_FastFile_GameStart_ReadyForLevel(const char *mapName)
{
  return ?Com_FastFile_GameStart_ReadyForLevel@@YA_NPEBD@Z(mapName);
}

/*
==============
ComFastFileLoadModule::ValidateDynamicLoadOrder
==============
*/

void __fastcall ComFastFileLoadModule::ValidateDynamicLoadOrder(ComFastFileLoadModule *this, const char *debugName)
{
  ?ValidateDynamicLoadOrder@ComFastFileLoadModule@@AEBAXPEBD@Z(this, debugName);
}

/*
==============
ComFastFileLoadModule::SetModuleActive
==============
*/

void __fastcall ComFastFileLoadModule::SetModuleActive(ComFastFileLoadModule *this, bool isActive)
{
  ?SetModuleActive@ComFastFileLoadModule@@QEAAX_N@Z(this, isActive);
}

/*
==============
Com_FastFile_Frame_FrontEnd
==============
*/

void Com_FastFile_Frame_FrontEnd(void)
{
  ?Com_FastFile_Frame_FrontEnd@@YAXXZ();
}

/*
==============
ComFastFileLoadModule::GetDebugStateName
==============
*/

const char *__fastcall ComFastFileLoadModule::GetDebugStateName(ComFastFileLoadModule *this, ComFastFileLoadModule::LoadState state)
{
  return ?GetDebugStateName@ComFastFileLoadModule@@AEBAPEBDW4LoadState@1@@Z(this, state);
}

/*
==============
ComFastFileLoadModule::SetModulePaused
==============
*/

void __fastcall ComFastFileLoadModule::SetModulePaused(ComFastFileLoadModule *this, bool isPaused)
{
  ?SetModulePaused@ComFastFileLoadModule@@QEAAX_N@Z(this, isPaused);
}

/*
==============
Com_FastFile_Init
==============
*/

void Com_FastFile_Init(void)
{
  ?Com_FastFile_Init@@YAXXZ();
}

/*
==============
Com_FastFile_GameStart_ReadyToStart
==============
*/

bool __fastcall Com_FastFile_GameStart_ReadyToStart(const char *mapName)
{
  return ?Com_FastFile_GameStart_ReadyToStart@@YA_NPEBD@Z(mapName);
}

/*
==============
ComFastFileInstallState::UpdateProgress
==============
*/

void __fastcall ComFastFileInstallState::UpdateProgress(ComFastFileInstallState *this)
{
  ?UpdateProgress@ComFastFileInstallState@@QEAAXXZ(this);
}

/*
==============
ComFastFileLoadModule::GetDebugString
==============
*/

bool __fastcall ComFastFileLoadModule::GetDebugString(ComFastFileLoadModule *this, char *stringbuffer, unsigned int stringBufferLen)
{
  return ?GetDebugString@ComFastFileLoadModule@@QEBA_NPEADI@Z(this, stringbuffer, stringBufferLen);
}

/*
==============
ComFastFileLoadModule::Frame_Paused
==============
*/

void __fastcall ComFastFileLoadModule::Frame_Paused(ComFastFileLoadModule *this)
{
  ?Frame_Paused@ComFastFileLoadModule@@AEAAXXZ(this);
}

/*
==============
Com_FastFile_PushDevmap
==============
*/

void Com_FastFile_PushDevmap(void)
{
  ?Com_FastFile_PushDevmap@@YAXXZ();
}

/*
==============
ComFastFileLoadModule::Frame_Failed
==============
*/

void __fastcall ComFastFileLoadModule::Frame_Failed(ComFastFileLoadModule *this)
{
  ?Frame_Failed@ComFastFileLoadModule@@AEAAXXZ(this);
}

/*
==============
ComFastFileLoadModule::HasFailedDependencies
==============
*/

bool __fastcall ComFastFileLoadModule::HasFailedDependencies(ComFastFileLoadModule *this)
{
  return ?HasFailedDependencies@ComFastFileLoadModule@@AEBA_NXZ(this);
}

/*
==============
ComFastFileLoadModule::AddRequestFrom
==============
*/

void __fastcall ComFastFileLoadModule::AddRequestFrom(ComFastFileLoadModule *this, const ComFastFileLoadModule *otherModule)
{
  ?AddRequestFrom@ComFastFileLoadModule@@QEAAXPEBV1@@Z(this, otherModule);
}

/*
==============
ComFastFileLoadModule::CopyRequestFrom
==============
*/

void __fastcall ComFastFileLoadModule::CopyRequestFrom(ComFastFileLoadModule *this, const ComFastFileLoadModule *otherModule)
{
  ?CopyRequestFrom@ComFastFileLoadModule@@QEAAXPEBV1@@Z(this, otherModule);
}

/*
==============
ComFastFileLoadModule::IsLoadStartupRequired
==============
*/

bool __fastcall ComFastFileLoadModule::IsLoadStartupRequired(ComFastFileLoadModule *this)
{
  return ?IsLoadStartupRequired@ComFastFileLoadModule@@AEBA_NXZ(this);
}

/*
==============
Com_FastFile_AreGlobalSpecificAndGroupZonesRequested
==============
*/

bool __fastcall Com_FastFile_AreGlobalSpecificAndGroupZonesRequested()
{
  return ?Com_FastFile_AreGlobalSpecificAndGroupZonesRequested@@YA_NXZ();
}

/*
==============
ComFastFileLoadModule::OnLoadError
==============
*/

bool __fastcall ComFastFileLoadModule::OnLoadError(ComFastFileLoadModule *this, const unsigned int zoneFlags, const char *const failureText)
{
  return ?OnLoadError@ComFastFileLoadModule@@QEAA_NIQEBD@Z(this, zoneFlags, failureText);
}

/*
==============
ComFastFileLoadModule::CollectModuleRequests
==============
*/

void __fastcall ComFastFileLoadModule::CollectModuleRequests(ComFastFileLoadModule *this, const ComFastFileDbRequestType requestType, DB_FastfileInfo *requests, unsigned __int64 *requestSizeEstimates, unsigned int *currentRequestCount, unsigned int *outZoneFlags, const unsigned int maxRequestcount)
{
  ?CollectModuleRequests@ComFastFileLoadModule@@QEAAXW4ComFastFileDbRequestType@@PEAUDB_FastfileInfo@@PEA_KPEAI3I@Z(this, requestType, requests, requestSizeEstimates, currentRequestCount, outZoneFlags, maxRequestcount);
}

/*
==============
Com_FastFile_GetParentMpFastfile
==============
*/

const char *__fastcall Com_FastFile_GetParentMpFastfile(const char *zoneName)
{
  return ?Com_FastFile_GetParentMpFastfile@@YAPEBDPEBD@Z(zoneName);
}

/*
==============
Com_FastFile_SuspendInstall
==============
*/

void Com_FastFile_SuspendInstall(void)
{
  ?Com_FastFile_SuspendInstall@@YAXXZ();
}

/*
==============
ComFastFileLoadModule::IsUnloaded
==============
*/

bool __fastcall ComFastFileLoadModule::IsUnloaded(ComFastFileLoadModule *this)
{
  return ?IsUnloaded@ComFastFileLoadModule@@QEBA_NXZ(this);
}

/*
==============
ComFastFileLoadModule::SetFailureMode
==============
*/

void __fastcall ComFastFileLoadModule::SetFailureMode(ComFastFileLoadModule *this, DB_FastFileFailureMode failureMode)
{
  ?SetFailureMode@ComFastFileLoadModule@@QEAAXW4DB_FastFileFailureMode@@@Z(this, failureMode);
}

/*
==============
ComFastFileLoadModule::IsRestartRequired
==============
*/

bool __fastcall ComFastFileLoadModule::IsRestartRequired(ComFastFileLoadModule *this)
{
  return ?IsRestartRequired@ComFastFileLoadModule@@AEBA_NXZ(this);
}

/*
==============
ComFastFileLoadModule::GetFailureText
==============
*/

const char *__fastcall ComFastFileLoadModule::GetFailureText(ComFastFileLoadModule *this)
{
  return ?GetFailureText@ComFastFileLoadModule@@QEBAPEBDXZ(this);
}

/*
==============
Com_FastFile_ResetLevelPreload
==============
*/

void __fastcall Com_FastFile_ResetLevelPreload(const char *mapName)
{
  ?Com_FastFile_ResetLevelPreload@@YAXPEBD@Z(mapName);
}

/*
==============
Com_FastFile_IsFrontendLoaded
==============
*/

bool __fastcall Com_FastFile_IsFrontendLoaded()
{
  return ?Com_FastFile_IsFrontendLoaded@@YA_NXZ();
}

/*
==============
Com_FastFile_OptionalLoadError
==============
*/

void __fastcall Com_FastFile_OptionalLoadError(const unsigned int zoneFlags, const char *const failureText)
{
  ?Com_FastFile_OptionalLoadError@@YAXIQEBD@Z(zoneFlags, failureText);
}

/*
==============
ComFastFileLoadModule::IsParentOrDependency
==============
*/

bool __fastcall ComFastFileLoadModule::IsParentOrDependency(ComFastFileLoadModule *this, const ComFastFileLoadModule *module)
{
  return ?IsParentOrDependency@ComFastFileLoadModule@@AEBA_NPEBV1@@Z(this, module);
}

/*
==============
Com_FastFile_OnExitFrontEnd
==============
*/

void Com_FastFile_OnExitFrontEnd(void)
{
  ?Com_FastFile_OnExitFrontEnd@@YAXXZ();
}

/*
==============
Com_FastFile_OnExitFrontEndFastBoot
==============
*/

void Com_FastFile_OnExitFrontEndFastBoot(void)
{
  ?Com_FastFile_OnExitFrontEndFastBoot@@YAXXZ();
}

/*
==============
ComFastFileLoadModule::SetDepdendency
==============
*/

void __fastcall ComFastFileLoadModule::SetDepdendency(ComFastFileLoadModule *this, ComFastFileLoadModule *dependency)
{
  ?SetDepdendency@ComFastFileLoadModule@@QEAAXPEAV1@@Z(this, dependency);
}

/*
==============
ComFastFileLoadModule::TestAnyModulePaused
==============
*/

bool __fastcall ComFastFileLoadModule::TestAnyModulePaused(ComFastFileLoadModule *this)
{
  return ?TestAnyModulePaused@ComFastFileLoadModule@@QEBA_NXZ(this);
}

/*
==============
Com_FastFile_IsFrontEndSceneLoaded
==============
*/

bool __fastcall Com_FastFile_IsFrontEndSceneLoaded()
{
  return ?Com_FastFile_IsFrontEndSceneLoaded@@YA_NXZ();
}

/*
==============
Com_FastFile_OnEnterFrontEnd
==============
*/

void Com_FastFile_OnEnterFrontEnd(void)
{
  ?Com_FastFile_OnEnterFrontEnd@@YAXXZ();
}

/*
==============
ComFastFileLoadModule::IsNewZoneRequested
==============
*/

bool __fastcall ComFastFileLoadModule::IsNewZoneRequested(ComFastFileLoadModule *this)
{
  return ?IsNewZoneRequested@ComFastFileLoadModule@@QEBA_NXZ(this);
}

/*
==============
ComFastFileLoadModule::Restart
==============
*/

void __fastcall ComFastFileLoadModule::Restart(ComFastFileLoadModule *this)
{
  ?Restart@ComFastFileLoadModule@@AEAAXXZ(this);
}

/*
==============
ComFastFileLoadModule::AddRequestedZone
==============
*/

void __fastcall ComFastFileLoadModule::AddRequestedZone(ComFastFileLoadModule *this, const char *zoneName, const unsigned __int64 sizeEstimate)
{
  ?AddRequestedZone@ComFastFileLoadModule@@QEAAXPEBD_K@Z(this, zoneName, sizeEstimate);
}

/*
==============
Com_FastFile_OnExitGameMode
==============
*/

void __fastcall Com_FastFile_OnExitGameMode(GameModeType gameMode)
{
  ?Com_FastFile_OnExitGameMode@@YAXW4GameModeType@@@Z(gameMode);
}

/*
==============
ComFastFileLoadModule::Init
==============
*/

void __fastcall ComFastFileLoadModule::Init(ComFastFileLoadModule *this, unsigned int zoneFlags, ComFastFileLoadModule::TechsetMode techsetMode)
{
  ?Init@ComFastFileLoadModule@@QEAAXIW4TechsetMode@1@@Z(this, zoneFlags, techsetMode);
}

/*
==============
Com_FastFile_SyncLoadComplete
==============
*/

void __fastcall Com_FastFile_SyncLoadComplete(const char *mapName)
{
  ?Com_FastFile_SyncLoadComplete@@YAXPEBD@Z(mapName);
}

/*
==============
ComFastFileLoadModule::Frame_Loaded
==============
*/

void __fastcall ComFastFileLoadModule::Frame_Loaded(ComFastFileLoadModule *this)
{
  ?Frame_Loaded@ComFastFileLoadModule@@AEAAXXZ(this);
}

/*
==============
ComFastFileLoadModule::Frame_Idle
==============
*/

void __fastcall ComFastFileLoadModule::Frame_Idle(ComFastFileLoadModule *this)
{
  ?Frame_Idle@ComFastFileLoadModule@@AEAAXXZ(this);
}

/*
==============
Com_FastFile_OnEnterFrontendFastBoot
==============
*/

void Com_FastFile_OnEnterFrontendFastBoot(void)
{
  ?Com_FastFile_OnEnterFrontendFastBoot@@YAXXZ();
}

/*
==============
ComFastFileLoadModule::UpdateSelf
==============
*/

void __fastcall ComFastFileLoadModule::UpdateSelf(ComFastFileLoadModule *this)
{
  ?UpdateSelf@ComFastFileLoadModule@@QEAAXXZ(this);
}

/*
==============
Com_FastFile_IsAltLaunchMode
==============
*/

bool __fastcall Com_FastFile_IsAltLaunchMode()
{
  return ?Com_FastFile_IsAltLaunchMode@@YA_NXZ();
}

/*
==============
ComFastFileLoadModule::IsLoading
==============
*/

bool __fastcall ComFastFileLoadModule::IsLoading(ComFastFileLoadModule *this)
{
  return ?IsLoading@ComFastFileLoadModule@@QEBA_NXZ(this);
}

/*
==============
Com_FastFile_ClearLoadSystem
==============
*/

void Com_FastFile_ClearLoadSystem(void)
{
  ?Com_FastFile_ClearLoadSystem@@YAXXZ();
}

/*
==============
Com_FastFile_CheckInstallInProgress
==============
*/

bool __fastcall Com_FastFile_CheckInstallInProgress(float *progress, __int64 *secondsRemaining)
{
  return ?Com_FastFile_CheckInstallInProgress@@YA_NPEAMPEA_J@Z(progress, secondsRemaining);
}

/*
==============
ComFastFileLoadModule::ValidateStaticLoadOrder
==============
*/

void __fastcall ComFastFileLoadModule::ValidateStaticLoadOrder(ComFastFileLoadModule *this, const ComFastFileLoadModule *higherPriorityModule)
{
  ?ValidateStaticLoadOrder@ComFastFileLoadModule@@QEBAXPEBV1@@Z(this, higherPriorityModule);
}

/*
==============
ComFastFileLoadModule::IsPreloadModule
==============
*/

bool __fastcall ComFastFileLoadModule::IsPreloadModule(ComFastFileLoadModule *this)
{
  return ?IsPreloadModule@ComFastFileLoadModule@@AEBA_NXZ(this);
}

/*
==============
ComFastFileLoadModule::IsModuleListUnloaded
==============
*/

bool __fastcall ComFastFileLoadModule::IsModuleListUnloaded(ComFastFileLoadModule *this)
{
  return ?IsModuleListUnloaded@ComFastFileLoadModule@@QEBA_NXZ(this);
}

/*
==============
ComFastFileLoadModule::IsWorkComplete
==============
*/

bool __fastcall ComFastFileLoadModule::IsWorkComplete(ComFastFileLoadModule *this)
{
  return ?IsWorkComplete@ComFastFileLoadModule@@QEBA_NXZ(this);
}

/*
==============
Com_FastFile_IsGameWorkComplete
==============
*/

bool __fastcall Com_FastFile_IsGameWorkComplete()
{
  return ?Com_FastFile_IsGameWorkComplete@@YA_NXZ();
}

/*
==============
Com_FastFile_CheckGameWorkComplete
==============
*/

void Com_FastFile_CheckGameWorkComplete(void)
{
  ?Com_FastFile_CheckGameWorkComplete@@YAXXZ();
}

/*
==============
Com_FastFile_PopDevmap
==============
*/

void Com_FastFile_PopDevmap(void)
{
  ?Com_FastFile_PopDevmap@@YAXXZ();
}

/*
==============
ComFastFileLoadModule::ValidateStaticNode
==============
*/

void __fastcall ComFastFileLoadModule::ValidateStaticNode(ComFastFileLoadModule *this)
{
  ?ValidateStaticNode@ComFastFileLoadModule@@QEBAXXZ(this);
}

/*
==============
ComFastFileLoadModule::HasLoadedAssets
==============
*/

bool __fastcall ComFastFileLoadModule::HasLoadedAssets(ComFastFileLoadModule *this)
{
  return ?HasLoadedAssets@ComFastFileLoadModule@@QEBA_NXZ(this);
}

/*
==============
Com_FastFile_IsPlayAgainAllowed
==============
*/

bool __fastcall Com_FastFile_IsPlayAgainAllowed()
{
  return ?Com_FastFile_IsPlayAgainAllowed@@YA_NXZ();
}

/*
==============
Com_FastFile_GetDebugString
==============
*/

bool __fastcall Com_FastFile_GetDebugString(unsigned int *stringIndex, char *stringbuffer, unsigned int stringBufferLen)
{
  return ?Com_FastFile_GetDebugString@@YA_NAEAIPEADI@Z(stringIndex, stringbuffer, stringBufferLen);
}

/*
==============
Com_FastFile_SetupInitialGameModeZones
==============
*/

void Com_FastFile_SetupInitialGameModeZones(void)
{
  ?Com_FastFile_SetupInitialGameModeZones@@YAXXZ();
}

/*
==============
ComFastFileLoadModule::HACK_ClearStateAndRequests
==============
*/

void __fastcall ComFastFileLoadModule::HACK_ClearStateAndRequests(ComFastFileLoadModule *this)
{
  ?HACK_ClearStateAndRequests@ComFastFileLoadModule@@QEAAXXZ(this);
}

/*
==============
ComFastFileLoadModule::ValidateStaticRoot
==============
*/

void __fastcall ComFastFileLoadModule::ValidateStaticRoot(ComFastFileLoadModule *this)
{
  ?ValidateStaticRoot@ComFastFileLoadModule@@QEBAXXZ(this);
}

/*
==============
Com_FastFile_SetupForGameStart
==============
*/

void __fastcall Com_FastFile_SetupForGameStart(const char *mapName, bool playAgain)
{
  ?Com_FastFile_SetupForGameStart@@YAXPEBD_N@Z(mapName, playAgain);
}

/*
==============
Com_FastFile_SetFrontendPreloadRequest
==============
*/

void Com_FastFile_SetFrontendPreloadRequest(void)
{
  ?Com_FastFile_SetFrontendPreloadRequest@@YAXXZ();
}

/*
==============
Com_FastFile_Frame_InGame
==============
*/

void Com_FastFile_Frame_InGame(void)
{
  ?Com_FastFile_Frame_InGame@@YAXXZ();
}

/*
==============
ComFastFileLoadModule::ClearState
==============
*/

void __fastcall ComFastFileLoadModule::ClearState(ComFastFileLoadModule *this)
{
  ?ClearState@ComFastFileLoadModule@@QEAAXXZ(this);
}

/*
==============
Com_FastFile_IsLevelPreloadComplete
==============
*/

bool __fastcall Com_FastFile_IsLevelPreloadComplete(const char *mapname)
{
  return ?Com_FastFile_IsLevelPreloadComplete@@YA_NPEBD@Z(mapname);
}

/*
==============
ComFastFileLoadModule::IsPreloadModuleOrAllZonesNotPreload
==============
*/

bool __fastcall ComFastFileLoadModule::IsPreloadModuleOrAllZonesNotPreload(ComFastFileLoadModule *this, const ComFastFileZoneList *zones)
{
  return ?IsPreloadModuleOrAllZonesNotPreload@ComFastFileLoadModule@@AEBA_NAEBUComFastFileZoneList@@@Z(this, zones);
}

/*
==============
ComFastFileLoadModule::GetDebugName
==============
*/

const char *__fastcall ComFastFileLoadModule::GetDebugName(ComFastFileLoadModule *this)
{
  return ?GetDebugName@ComFastFileLoadModule@@QEBAPEBDXZ(this);
}

/*
==============
ComFastFileLoadModule::AddRequestFrom
==============
*/
void ComFastFileLoadModule::AddRequestFrom(ComFastFileLoadModule *this, const ComFastFileLoadModule *otherModule)
{
  __int64 v6; 
  unsigned int Count; 
  __int64 v8; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 

  if ( !otherModule && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3373, ASSERT_TYPE_ASSERT, "(otherModule)", (const char *)&queryFormat, "otherModule") )
    __debugbreak();
  _RSI = &this->m_requestedZones;
  _RDI = &otherModule->m_requestedZones;
  v6 = 3i64;
  do
  {
    Count = ComFastFileZoneList::GetCount(_RSI);
    v8 = Count;
    if ( _RDI->m_zones[0].name[0] )
    {
      if ( Count >= 3 )
      {
        LODWORD(v14) = 3;
        LODWORD(v13) = Count;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile_zonelist.h", 73, ASSERT_TYPE_ASSERT, "(unsigned)( usedCount ) < (unsigned)( ( sizeof( *array_counter( m_zones ) ) + 0 ) )", "usedCount doesn't index ARRAY_COUNT( m_zones )\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      __asm { vmovups ymm0, ymmword ptr [rdi] }
      _RCX = 9 * v8;
      LODWORD(v8) = v8 + 1;
      __asm
      {
        vmovups ymmword ptr [rsi+rcx*8], ymm0
        vmovups ymm1, ymmword ptr [rdi+20h]
        vmovups ymmword ptr [rsi+rcx*8+20h], ymm1
        vmovsd  xmm0, qword ptr [rdi+40h]
        vmovsd  qword ptr [rsi+rcx*8+40h], xmm0
      }
    }
    if ( (_DWORD)v8 != ComFastFileZoneList::GetCount(_RSI) )
    {
      LODWORD(v16) = ComFastFileZoneList::GetCount(_RSI);
      LODWORD(v15) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile_zonelist.h", 78, ASSERT_TYPE_ASSERT, "( usedCount ) == ( GetCount() )", "%s == %s\n\t%i, %i", "usedCount", "GetCount()", v15, v16) )
        __debugbreak();
    }
    _RDI = (ComFastFileZoneList *)((char *)_RDI + 72);
    --v6;
  }
  while ( v6 );
}

/*
==============
ComFastFileLoadModule::AddRequestedZone
==============
*/
void ComFastFileLoadModule::AddRequestedZone(ComFastFileLoadModule *this, const char *zoneName, const unsigned __int64 sizeEstimate)
{
  unsigned int v6; 
  ComFastFileZoneList *p_m_requestedZones; 
  unsigned int v8; 
  ComFastFileZoneEntry *v9; 
  ComFastFileZoneList *v10; 
  ComFastFileZoneList *v11; 
  const char *DebugName; 

  if ( !zoneName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3329, ASSERT_TYPE_ASSERT, "(zoneName)", (const char *)&queryFormat, "zoneName") )
    __debugbreak();
  if ( !*zoneName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3330, ASSERT_TYPE_ASSERT, "(zoneName[0])", (const char *)&queryFormat, "zoneName[0]") )
    __debugbreak();
  if ( !this->m_requestedZones.m_zones[0].name[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3331, ASSERT_TYPE_ASSERT, "(!m_requestedZones.IsEmpty())", (const char *)&queryFormat, "!m_requestedZones.IsEmpty()") )
    __debugbreak();
  v6 = 0;
  p_m_requestedZones = &this->m_requestedZones;
  while ( p_m_requestedZones->m_zones[0].name[0] )
  {
    ++v6;
    p_m_requestedZones = (ComFastFileZoneList *)((char *)p_m_requestedZones + 72);
    if ( v6 >= 3 )
    {
      v6 = 3;
      break;
    }
  }
  if ( v6 )
  {
    v8 = v6 - 1;
    if ( v8 )
    {
      v9 = &this->m_requestedZones.m_zones[1];
      v10 = &this->m_requestedZones;
      if ( v8 == 1 )
        v11 = (ComFastFileZoneList *)j_va("%s,%s", (const char *)v10, v9->name);
      else
        v11 = (ComFastFileZoneList *)j_va("%s,%s,%s", (const char *)v10, v9->name, this->m_requestedZones.m_zones[2].name);
    }
    else
    {
      v11 = &this->m_requestedZones;
    }
  }
  else
  {
    v11 = (ComFastFileZoneList *)"<empty>";
  }
  DebugName = ComFastFileLoadModule::GetDebugName(this);
  Com_Printf(30, "ComFastFile: (%s) AddRequestedZone: '%s' (added to '%s')\n", DebugName, zoneName, (const char *)v11);
  ComFastFileZoneList::Add(&this->m_requestedZones, zoneName, sizeEstimate);
}

/*
==============
ComFastFileLoadModule::CheckIsLoadedOrPendingWithDB
==============
*/
void ComFastFileLoadModule::CheckIsLoadedOrPendingWithDB(ComFastFileLoadModule *this, const bool allowIdle)
{
  const char *v4; 
  const char *DebugName; 
  const char *v6; 
  const char *v7; 
  __int64 j; 
  unsigned int v9; 
  ComFastFileZoneList *v10; 
  const char *v11; 
  __int64 i; 
  unsigned int v13; 
  ComFastFileZoneList *p_m_requestedZones; 
  DB_FastfileState v15; 
  const char *v16; 
  const char *v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 

  if ( !this->m_requestedZones.m_zones[0].name[0] )
  {
    v4 = S_STATE_NAMES[(unsigned __int8)this->m_currentState[0]];
    DebugName = ComFastFileLoadModule::GetDebugName(this);
    Com_Printf(30, "CheckIsLoadedOrPendingWithDB: '%s': m_requestedZones is empty. State is '%s'\n", DebugName, v4);
  }
  if ( !this->m_currentState[0] )
  {
    v17 = ComFastFileLoadModule::GetDebugName(this);
    if ( allowIdle )
    {
      Com_Printf(30, "CheckIsLoadedOrPendingWithDB: '%s' is idle, and this is ok.\n", v17);
      return;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 4104, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ComFastFileLoadModule '%s' is in the idle state, and shouldn't be.", v17) )
      goto LABEL_40;
    return;
  }
  if ( this->m_currentState[0] == 1 )
  {
    for ( i = 0i64; ; i = (unsigned int)(i + 1) )
    {
      while ( 1 )
      {
        v13 = 0;
        p_m_requestedZones = &this->m_requestedZones;
        while ( p_m_requestedZones->m_zones[0].name[0] )
        {
          ++v13;
          p_m_requestedZones = (ComFastFileZoneList *)((char *)p_m_requestedZones + 72);
          if ( v13 >= 3 )
          {
            v13 = 3;
            break;
          }
        }
        if ( (unsigned int)i >= v13 )
          return;
        if ( (unsigned int)i >= ComFastFileZoneList::GetCount(&this->m_requestedZones) )
        {
          LODWORD(v19) = ComFastFileZoneList::GetCount(&this->m_requestedZones);
          LODWORD(v18) = i;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile_zonelist.h", 145, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( GetCount() )", "index doesn't index GetCount()\n\t%i not in [0, %i)", v18, v19) )
            __debugbreak();
        }
        v15 = DB_PollFastfileState(this->m_requestedZones.m_zones[i].name);
        v16 = ComFastFileLoadModule::GetDebugName(this);
        if ( v15 != SAVING )
          break;
        Com_Printf(30, "CheckIsLoadedOrPendingWithDB: '%s', fastfile '%s': DB says it is loading. ComFastFileLoadModule says it is loading.\n", v16, &this->m_requestedZones.m_zones[i]);
LABEL_36:
        i = (unsigned int)(i + 1);
      }
      if ( v15 == AWAITING_COMMIT )
      {
        Com_Printf(30, "CheckIsLoadedOrPendingWithDB: '%s', fastfile '%s': DB says it is loaded. ComFastFileLoadModule says it is loading.\n", v16, &this->m_requestedZones.m_zones[i]);
        goto LABEL_36;
      }
      LODWORD(v20) = v15;
      if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 4089, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "'%s': Pending fastfile '%s' in a bad DB state '%d'", v16, this->m_requestedZones.m_zones[i].name, v20) )
        goto LABEL_36;
      __debugbreak();
    }
  }
  if ( this->m_currentState[0] != 2 )
  {
    v6 = S_STATE_NAMES[(unsigned __int8)this->m_currentState[0]];
    v7 = ComFastFileLoadModule::GetDebugName(this);
    if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 4111, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ComFastFileLoadModule '%s' in a bad state '%s'", v7, v6) )
      return;
LABEL_40:
    __debugbreak();
    return;
  }
  for ( j = 0i64; ; j = (unsigned int)(j + 1) )
  {
    v9 = 0;
    v10 = &this->m_requestedZones;
    while ( v10->m_zones[0].name[0] )
    {
      ++v9;
      v10 = (ComFastFileZoneList *)((char *)v10 + 72);
      if ( v9 >= 3 )
      {
        v9 = 3;
        break;
      }
    }
    if ( (unsigned int)j >= v9 )
      break;
    if ( (unsigned int)j >= ComFastFileZoneList::GetCount(&this->m_requestedZones) )
    {
      LODWORD(v19) = ComFastFileZoneList::GetCount(&this->m_requestedZones);
      LODWORD(v18) = j;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile_zonelist.h", 145, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( GetCount() )", "index doesn't index GetCount()\n\t%i not in [0, %i)", v18, v19) )
        __debugbreak();
    }
    if ( DB_PollFastfileState(this->m_requestedZones.m_zones[j].name) != AWAITING_COMMIT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 4064, ASSERT_TYPE_ASSERT, "( ( DB_PollFastfileState( ffName ) == DB_FastfileState::LOADED ) )", "( ffName ) = %s", this->m_requestedZones.m_zones[j].name) )
      __debugbreak();
    v11 = ComFastFileLoadModule::GetDebugName(this);
    Com_Printf(30, "CheckIsLoadedOrPendingWithDB: '%s', fastfile '%s': DB says it is loaded. ComFastFileLoadModule says it is loaded.\n", v11, this->m_requestedZones.m_zones[j].name);
  }
}

/*
==============
ComFastFileLoadModule::ClearRequestedZones
==============
*/
void ComFastFileLoadModule::ClearRequestedZones(ComFastFileLoadModule *this)
{
  ComFastFileZoneList *p_m_requestedZones; 
  const char *DebugText; 
  const char *DebugName; 

  if ( this->m_debugName )
  {
    p_m_requestedZones = &this->m_requestedZones;
    if ( p_m_requestedZones->m_zones[0].name[0] )
    {
      DebugText = ComFastFileZoneList::GetDebugText(p_m_requestedZones);
      DebugName = ComFastFileLoadModule::GetDebugName(this);
      Com_Printf(30, "ComFastFile: (%s) ClearRequestedZone: (was '%s')\n", DebugName, DebugText);
    }
  }
  this->m_requestedZones.m_zones[0].name[0] = 0;
  this->m_requestedZones.m_zones[1].name[0] = 0;
  this->m_requestedZones.m_zones[2].name[0] = 0;
}

/*
==============
ComFastFileLoadModule::ClearState
==============
*/
void ComFastFileLoadModule::ClearState(ComFastFileLoadModule *this)
{
  if ( !this->m_zoneFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3190, ASSERT_TYPE_ASSERT, "(m_zoneFlags)", (const char *)&queryFormat, "m_zoneFlags") )
    __debugbreak();
  ComFastFileLoadModule::SetModuleActive(this, 0);
  ComFastFileLoadModule::SetState(this, IDLE);
  ComFastFileLoadModule::SetDatabaseRequest(this, NONE);
  this->m_activeZones.m_zones[0].name[0] = 0;
  this->m_activeZones.m_zones[1].name[0] = 0;
  this->m_activeZones.m_zones[2].name[0] = 0;
  this->m_loadProgress = this->LOAD_PROGRESS_NONE;
  this->m_failureText[0] = 0;
}

/*
==============
ComFastFileLoadModule::CollectModuleFlagRequests
==============
*/
void ComFastFileLoadModule::CollectModuleFlagRequests(ComFastFileLoadModule *this, ComFastFileDbRequestType request, unsigned int *requestFlags)
{
  unsigned __int8 v4; 
  const char *DebugText; 
  char v7; 
  const char *v8; 
  const char *v9; 
  const char *v10; 
  const char *DebugName; 

  v4 = request;
  if ( !requestFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3794, ASSERT_TYPE_ASSERT, "(requestFlags)", (const char *)&queryFormat, "requestFlags") )
    __debugbreak();
  if ( v4 == 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3795, ASSERT_TYPE_ASSERT, "(request != ComFastFileDbRequestType::LOAD)", "%s\n\tLoad requests must be processed via CollectModuleLoadRequests", "request != ComFastFileDbRequestType::LOAD") )
    __debugbreak();
  if ( this->m_databaseRequest[0] == v4 )
  {
    *requestFlags |= this->m_zoneFlags;
    DebugText = ComFastFileZoneList::GetDebugText(&this->m_activeZones);
    Com_Printf(30, "ComFastFile: Executing Request '%s' (0x%x, %s)\n", S_REQUEST_NAMES[v4], this->m_zoneFlags, DebugText);
    v7 = this->m_databaseRequest[0];
    if ( v7 == 1 )
    {
      if ( v7 != 3 )
      {
        v10 = ComFastFileZoneList::GetDebugText(&this->m_activeZones);
        DebugName = ComFastFileLoadModule::GetDebugName(this);
        Com_Printf(30, "ComFastFile: Request Change: %s -> %s (%s: %s)'\n", S_REQUEST_NAMES[(unsigned __int8)this->m_databaseRequest[0]], S_REQUEST_NAMES[3], DebugName, v10);
      }
      this->m_databaseRequest[0] = 3;
    }
    else
    {
      if ( this->m_databaseRequest[0] == 3 )
        this->m_loadProgress = this->LOAD_PROGRESS_NONE;
      if ( v7 )
      {
        v8 = ComFastFileZoneList::GetDebugText(&this->m_activeZones);
        v9 = ComFastFileLoadModule::GetDebugName(this);
        Com_Printf(30, "ComFastFile: Request Change: %s -> %s (%s: %s)'\n", S_REQUEST_NAMES[(unsigned __int8)this->m_databaseRequest[0]], S_REQUEST_NAMES[0], v9, v8);
      }
      this->m_databaseRequest[0] = 0;
    }
  }
}

/*
==============
ComFastFileLoadModule::CollectModuleRequests
==============
*/
void ComFastFileLoadModule::CollectModuleRequests(ComFastFileLoadModule *this, const ComFastFileDbRequestType requestType, DB_FastfileInfo *requests, unsigned __int64 *requestSizeEstimates, unsigned int *currentRequestCount, unsigned int *outZoneFlags, const unsigned int maxRequestcount)
{
  char v9; 
  const char *DebugText; 
  const char *DebugName; 
  __int64 i; 
  unsigned int v14; 
  ComFastFileZoneList *p_m_activeZones; 
  unsigned __int64 zoneSizeEstimate; 
  __int64 zoneFlags; 

  v9 = requestType;
  if ( !requests && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3826, ASSERT_TYPE_ASSERT, "(requests)", (const char *)&queryFormat, "requests") )
    __debugbreak();
  if ( !requestSizeEstimates && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3827, ASSERT_TYPE_ASSERT, "(requestSizeEstimates)", (const char *)&queryFormat, "requestSizeEstimates") )
    __debugbreak();
  if ( !currentRequestCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3828, ASSERT_TYPE_ASSERT, "(currentRequestCount)", (const char *)&queryFormat, "currentRequestCount") )
    __debugbreak();
  if ( !outZoneFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3829, ASSERT_TYPE_ASSERT, "(outZoneFlags)", (const char *)&queryFormat, "outZoneFlags") )
    __debugbreak();
  if ( ((this->m_zoneFlags & 0x100000) == 0 || !*currentRequestCount) && this->m_databaseRequest[0] == v9 )
  {
    DebugText = ComFastFileZoneList::GetDebugText(&this->m_activeZones);
    Com_Printf(30, "ComFastFile: Load Request: %s\n", DebugText);
    DebugName = ComFastFileLoadModule::GetDebugName(this);
    ComFastFileLoadModule::ValidateDynamicLoadOrder(this, DebugName);
    *outZoneFlags |= this->m_zoneFlags;
    for ( i = 0i64; ; i = (unsigned int)(i + 1) )
    {
      v14 = 0;
      p_m_activeZones = &this->m_activeZones;
      while ( p_m_activeZones->m_zones[0].name[0] )
      {
        ++v14;
        p_m_activeZones = (ComFastFileZoneList *)((char *)p_m_activeZones + 72);
        if ( v14 >= 3 )
        {
          v14 = 3;
          break;
        }
      }
      if ( (unsigned int)i >= v14 )
        break;
      if ( (unsigned int)i >= ComFastFileZoneList::GetCount(&this->m_activeZones) )
      {
        LODWORD(zoneFlags) = ComFastFileZoneList::GetCount(&this->m_activeZones);
        LODWORD(zoneSizeEstimate) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile_zonelist.h", 145, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( GetCount() )", "index doesn't index GetCount()\n\t%i not in [0, %i)", zoneSizeEstimate, zoneFlags) )
          __debugbreak();
      }
      Com_FastFile_AddLoadZone(requests, requestSizeEstimates, currentRequestCount, maxRequestcount, this->m_activeZones.m_zones[i].name, this->m_activeZones.m_zones[i].sizeEstimate, this->m_zoneFlags, (const DB_FastFileFailureMode)this->m_failureMode);
    }
    ComFastFileLoadModule::SetDatabaseRequest(this, NONE);
  }
}

/*
==============
Com_FastFile_AddLoadZone
==============
*/
void Com_FastFile_AddLoadZone(DB_FastfileInfo *requests, unsigned __int64 *requestSizeEstimates, unsigned int *currentRequestCount, const unsigned int maxRequestCount, const char *zoneName, const unsigned __int64 zoneSizeEstimate, const unsigned int zoneFlags, const DB_FastFileFailureMode failureMode)
{
  unsigned int v12; 
  __int64 v13; 
  __int64 v14; 
  unsigned int v15; 

  if ( !requests && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 731, ASSERT_TYPE_ASSERT, "(requests)", (const char *)&queryFormat, "requests") )
    __debugbreak();
  if ( !requestSizeEstimates && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 732, ASSERT_TYPE_ASSERT, "(requestSizeEstimates)", (const char *)&queryFormat, "requestSizeEstimates") )
    __debugbreak();
  if ( maxRequestCount != 20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 733, ASSERT_TYPE_ASSERT, "(maxRequestCount == FASTFILE_MAX_LOAD_REQUESTS)", (const char *)&queryFormat, "maxRequestCount == FASTFILE_MAX_LOAD_REQUESTS") )
    __debugbreak();
  v12 = zoneFlags;
  if ( !zoneFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 734, ASSERT_TYPE_ASSERT, "(zoneFlags)", (const char *)&queryFormat, "zoneFlags") )
    __debugbreak();
  if ( (zoneFlags & 0x100000) == 0 )
  {
    v13 = 0i64;
    if ( *currentRequestCount )
    {
      do
      {
        if ( (requests[v13].zoneFlags & 0x100000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 741, ASSERT_TYPE_ASSERT, "((requests[requestIndex].zoneFlags & DB_ZONE_PRELOAD_FRONTEND) == 0)", "%s\n\tCan 't add a non-preload zone when there is already a preload zone in the list", "(requests[requestIndex].zoneFlags & DB_ZONE_PRELOAD_FRONTEND) == 0") )
          __debugbreak();
        v13 = (unsigned int)(v13 + 1);
      }
      while ( (unsigned int)v13 < *currentRequestCount );
      v12 = zoneFlags;
    }
  }
  v14 = *currentRequestCount;
  if ( (unsigned int)v14 >= maxRequestCount )
  {
    if ( (_DWORD)v14 != maxRequestCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 748, ASSERT_TYPE_ASSERT, "( (*currentRequestCount) ) == ( maxRequestCount )", "%s == %s\n\t%i, %i", "(*currentRequestCount)", "maxRequestCount", v14, maxRequestCount) )
      __debugbreak();
    Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_143ED9010, 539i64);
    v14 = *currentRequestCount;
  }
  requests[v14].name = zoneName;
  v15 = 65532;
  requests[*currentRequestCount].zoneFlags = v12;
  requests[*currentRequestCount].failureMode = failureMode;
  if ( (zoneFlags & 0x100000) == 0 )
    v15 = 0xFFFF;
  requests[*currentRequestCount].priority = v15;
  requestSizeEstimates[(*currentRequestCount)++] = zoneSizeEstimate;
}

/*
==============
Com_FastFile_AreGameCommonLoaded
==============
*/
char Com_FastFile_AreGameCommonLoaded()
{
  int v0; 
  const ComFastFileModuleType *i; 
  unsigned __int8 v2; 
  ComFastFileLoadModule *v3; 
  ComFastFileLoadModule *m_parent; 
  ComFastFileLoadModule *m_dependency; 
  __int64 v7; 
  __int64 v8; 

  v0 = 0;
  for ( i = S_COMMON_GAME_MODULES; ; i = (const ComFastFileModuleType *)((char *)i + 1) )
  {
    v2 = *(_BYTE *)i;
    if ( *(_BYTE *)i >= 0xBu )
    {
      LODWORD(v8) = 11;
      LODWORD(v7) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 489, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<uint>( moduleType ) ) < (unsigned)( static_cast<uint>( ComFastFileModuleType::COUNT ) )", "static_cast<uint>( moduleType ) doesn't index static_cast<uint>( ComFastFileModuleType::COUNT )\n\t%i not in [0, %i)", v7, v8) )
        __debugbreak();
    }
    v3 = &s_fastfileLoadModules[v2];
    if ( v3->m_currentState[0] != 2 || !v3->m_moduleActive )
      break;
    m_parent = v3->m_parent;
    if ( m_parent )
    {
      if ( m_parent->m_currentState[0] == 4 && !ComFastFileLoadModule::IsNewZoneRequested(m_parent) || ComFastFileLoadModule::HasFailedDependencies(v3->m_parent) )
        break;
    }
    m_dependency = v3->m_dependency;
    if ( m_dependency )
    {
      if ( m_dependency->m_currentState[0] == 4 && !ComFastFileLoadModule::IsNewZoneRequested(m_dependency) || ComFastFileLoadModule::HasFailedDependencies(v3->m_dependency) )
        break;
    }
    if ( ComFastFileLoadModule::IsNewZoneRequested(v3) )
      break;
    if ( (unsigned int)++v0 >= 4 )
      return 1;
  }
  return 0;
}

/*
==============
Com_FastFile_AreGlobalSpecificAndGroupZonesRequested
==============
*/
bool Com_FastFile_AreGlobalSpecificAndGroupZonesRequested()
{
  __int64 v0; 
  bool result; 

  v0 = 0i64;
  while ( !I_stricmp(s_fastfileLoadModules[5].m_activeZones.m_zones[v0].name, s_fastfileLoadModules[5].m_requestedZones.m_zones[v0].name) )
  {
    v0 = (unsigned int)(v0 + 1);
    if ( (unsigned int)v0 >= 3 )
    {
      result = ComFastFileLoadModule::IsNewZoneRequested(&s_fastfileLoadModules[4]);
      if ( !result )
        return result;
      return 1;
    }
  }
  return 1;
}

/*
==============
Com_FastFile_AreLUIFastfilesStillLoading
==============
*/
char Com_FastFile_AreLUIFastfilesStillLoading()
{
  int v0; 
  const ComFastFileModuleType *i; 
  unsigned __int8 v2; 
  ComFastFileLoadModule *v3; 
  ComFastFileLoadModule *m_parent; 
  ComFastFileLoadModule *m_dependency; 
  char v6; 
  __int64 v7; 
  ComFastFileZoneList *p_m_requestedZones; 
  unsigned int v9; 
  ComFastFileZoneList *v10; 
  unsigned int Count; 
  __int64 v13; 
  __int64 v14; 

  v0 = 0;
  for ( i = &S_GAMEMODE_GLOBAL_PAUSABLE_MODULES[2]; ; i = (const ComFastFileModuleType *)((char *)i + 1) )
  {
    v2 = *(_BYTE *)i;
    if ( *(_BYTE *)i >= 0xBu )
    {
      LODWORD(v14) = 11;
      LODWORD(v13) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 489, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<uint>( moduleType ) ) < (unsigned)( static_cast<uint>( ComFastFileModuleType::COUNT ) )", "static_cast<uint>( moduleType ) doesn't index static_cast<uint>( ComFastFileModuleType::COUNT )\n\t%i not in [0, %i)", v13, v14) )
        __debugbreak();
    }
    v3 = &s_fastfileLoadModules[v2];
    if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 518, ASSERT_TYPE_ASSERT, "(module)", (const char *)&queryFormat, "module") )
      __debugbreak();
    if ( (v3->m_currentState[0] != 2 || !v3->m_moduleActive || (m_parent = v3->m_parent) != NULL && (m_parent->m_currentState[0] == 4 && !ComFastFileLoadModule::IsNewZoneRequested(m_parent) || ComFastFileLoadModule::HasFailedDependencies(v3->m_parent)) || (m_dependency = v3->m_dependency) != NULL && (m_dependency->m_currentState[0] == 4 && !ComFastFileLoadModule::IsNewZoneRequested(m_dependency) || ComFastFileLoadModule::HasFailedDependencies(v3->m_dependency)) || ComFastFileLoadModule::IsNewZoneRequested(v3)) && (v3->m_currentState[0] || ComFastFileLoadModule::IsLoadStartupRequired(v3)) && (v3->m_currentState[0] != 4 || ComFastFileLoadModule::IsNewZoneRequested(v3)) || v3->m_databaseRequest[0] )
    {
      v6 = v3->m_currentState[0];
      if ( v6 != 2 )
        break;
    }
LABEL_37:
    if ( (unsigned int)++v0 >= 5 )
      return 0;
  }
  if ( v6 == 1 )
  {
    v7 = 0i64;
    p_m_requestedZones = &v3->m_requestedZones;
    while ( 1 )
    {
      v9 = 0;
      v10 = p_m_requestedZones;
      while ( v10->m_zones[0].name[0] )
      {
        ++v9;
        v10 = (ComFastFileZoneList *)((char *)v10 + 72);
        if ( v9 >= 3 )
        {
          v9 = 3;
          break;
        }
      }
      if ( (unsigned int)v7 >= v9 )
        goto LABEL_37;
      Count = ComFastFileZoneList::GetCount(p_m_requestedZones);
      if ( (unsigned int)v7 >= Count )
      {
        LODWORD(v14) = Count;
        LODWORD(v13) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile_zonelist.h", 145, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( GetCount() )", "index doesn't index GetCount()\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      if ( !DB_HasFastfileFinishedLoadingAssets(p_m_requestedZones->m_zones[v7].name) )
        return 1;
      v7 = (unsigned int)(v7 + 1);
    }
  }
  return 1;
}

/*
==============
Com_FastFile_CheckGameWorkComplete
==============
*/
void Com_FastFile_CheckGameWorkComplete(void)
{
  int v0; 
  const ComFastFileModuleType *i; 
  unsigned __int8 v2; 
  __int64 v3; 
  ComFastFileLoadModule *m_parent; 
  ComFastFileZoneList *p_m_activeZones; 
  __int64 v6; 
  ComFastFileZoneList *p_m_requestedZones; 
  char v8; 
  ComFastFileLoadModule *v9; 
  ComFastFileZoneList *v10; 
  __int64 v11; 
  ComFastFileZoneList *v12; 
  ComFastFileLoadModule *m_dependency; 
  ComFastFileZoneList *v14; 
  __int64 v15; 
  ComFastFileZoneList *v16; 
  __int64 v17; 
  ComFastFileLoadModule *v18; 
  ComFastFileZoneList *v19; 
  __int64 v20; 
  ComFastFileZoneList *v21; 
  ComFastFileZoneList *v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 

  if ( !(unsigned __int8)Com_GameMode_GetActiveGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 2825, ASSERT_TYPE_ASSERT, "(Com_GameMode_GetActiveGameMode() != GameModeType::NONE)", "%s\n\tMust have an active game mode before we can sync on fast file load", "Com_GameMode_GetActiveGameMode() != GameModeType::NONE") )
    __debugbreak();
  v0 = 0;
  for ( i = &S_COMMON_GAME_MODULES[1]; ; i = (const ComFastFileModuleType *)((char *)i + 1) )
  {
    v2 = *(_BYTE *)i;
    if ( *(_BYTE *)i >= 0xBu )
    {
      LODWORD(v25) = 11;
      LODWORD(v24) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 489, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<uint>( moduleType ) ) < (unsigned)( static_cast<uint>( ComFastFileModuleType::COUNT ) )", "static_cast<uint>( moduleType ) doesn't index static_cast<uint>( ComFastFileModuleType::COUNT )\n\t%i not in [0, %i)", v24, v25) )
        __debugbreak();
    }
    v3 = v2;
    if ( s_fastfileLoadModules[v3].m_currentState[0] == 2 && s_fastfileLoadModules[v3].m_moduleActive )
    {
      m_parent = s_fastfileLoadModules[v3].m_parent;
      if ( !m_parent )
        goto LABEL_25;
      if ( m_parent->m_currentState[0] == 4 )
      {
        p_m_activeZones = &m_parent->m_activeZones;
        v6 = 0i64;
        p_m_requestedZones = &m_parent->m_requestedZones;
        while ( !I_stricmp(p_m_activeZones->m_zones[v6].name, p_m_requestedZones->m_zones[v6].name) )
        {
          v6 = (unsigned int)(v6 + 1);
          if ( (unsigned int)v6 >= 3 )
            goto LABEL_15;
        }
        m_parent = s_fastfileLoadModules[v3].m_parent;
      }
      if ( !ComFastFileLoadModule::HasFailedDependencies(m_parent) )
      {
LABEL_25:
        m_dependency = s_fastfileLoadModules[v3].m_dependency;
        if ( !m_dependency )
          goto LABEL_33;
        if ( m_dependency->m_currentState[0] == 4 )
        {
          v14 = &m_dependency->m_activeZones;
          v15 = 0i64;
          v16 = &m_dependency->m_requestedZones;
          while ( !I_stricmp(v14->m_zones[v15].name, v16->m_zones[v15].name) )
          {
            v15 = (unsigned int)(v15 + 1);
            if ( (unsigned int)v15 >= 3 )
              goto LABEL_15;
          }
          m_dependency = s_fastfileLoadModules[v3].m_dependency;
        }
        if ( !ComFastFileLoadModule::HasFailedDependencies(m_dependency) )
        {
LABEL_33:
          v17 = 0i64;
          while ( !I_stricmp(s_fastfileLoadModules[v3].m_activeZones.m_zones[v17].name, s_fastfileLoadModules[v3].m_requestedZones.m_zones[v17].name) )
          {
            v17 = (unsigned int)(v17 + 1);
            if ( (unsigned int)v17 >= 3 )
              goto LABEL_54;
          }
        }
      }
    }
LABEL_15:
    v8 = s_fastfileLoadModules[v3].m_currentState[0];
    if ( v8 )
      break;
    if ( s_fastfileLoadModules[v3].m_moduleActive )
    {
      v9 = s_fastfileLoadModules[v3].m_parent;
      if ( !v9 )
        goto LABEL_39;
      if ( v9->m_currentState[0] == 4 )
      {
        v10 = &v9->m_activeZones;
        v11 = 0i64;
        v12 = &v9->m_requestedZones;
        while ( !I_stricmp(v10->m_zones[v11].name, v12->m_zones[v11].name) )
        {
          v11 = (unsigned int)(v11 + 1);
          if ( (unsigned int)v11 >= 3 )
            goto LABEL_54;
        }
        v9 = s_fastfileLoadModules[v3].m_parent;
      }
      if ( !ComFastFileLoadModule::HasFailedDependencies(v9) )
      {
LABEL_39:
        v18 = s_fastfileLoadModules[v3].m_dependency;
        if ( !v18 )
          goto LABEL_61;
        if ( v18->m_currentState[0] == 4 )
        {
          v19 = &v18->m_activeZones;
          v20 = 0i64;
          v21 = &v18->m_requestedZones;
          while ( !I_stricmp(v19->m_zones[v20].name, v21->m_zones[v20].name) )
          {
            v20 = (unsigned int)(v20 + 1);
            if ( (unsigned int)v20 >= 3 )
              goto LABEL_54;
          }
          v18 = s_fastfileLoadModules[v3].m_dependency;
        }
        if ( !ComFastFileLoadModule::HasFailedDependencies(v18) )
        {
LABEL_61:
          v22 = &s_fastfileLoadModules[v3].m_requestedZones;
          if ( v22->m_zones[0].name[0] )
          {
            v8 = s_fastfileLoadModules[v3].m_currentState[0];
            goto LABEL_50;
          }
        }
      }
    }
LABEL_54:
    if ( s_fastfileLoadModules[v3].m_databaseRequest[0] )
      goto LABEL_57;
    if ( (unsigned int)++v0 >= 5 )
      return;
  }
  v22 = &s_fastfileLoadModules[v3].m_requestedZones;
LABEL_50:
  if ( v8 == 4 )
  {
    v23 = 0i64;
    while ( !I_stricmp(s_fastfileLoadModules[v3].m_activeZones.m_zones[v23].name, v22->m_zones[v23].name) )
    {
      v23 = (unsigned int)(v23 + 1);
      if ( (unsigned int)v23 >= 3 )
        goto LABEL_54;
    }
  }
LABEL_57:
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 2826, ASSERT_TYPE_ASSERT, "(Com_FastFile_IsGameWorkComplete())", (const char *)&queryFormat, "Com_FastFile_IsGameWorkComplete()") )
    __debugbreak();
}

/*
==============
Com_FastFile_CheckInstallInProgress
==============
*/
_BOOL8 Com_FastFile_CheckInstallInProgress(float *progress, __int64 *secondsRemaining)
{
  if ( progress )
  {
    __asm
    {
      vmovss  xmm0, cs:s_fastFileInstallation.m_progress
      vmovss  dword ptr [rcx], xmm0
    }
  }
  if ( secondsRemaining )
    *secondsRemaining = s_fastFileInstallation.m_secondsRemaining;
  return s_fastFileInstallation.m_installationPending;
}

/*
==============
Com_FastFile_ClearLoadSystem
==============
*/
void Com_FastFile_ClearLoadSystem(void)
{
  unsigned int i; 

  for ( i = 0; i < 0xB; ++i )
    ComFastFileLoadModule::ClearState(&s_fastfileLoadModules[(unsigned __int8)i]);
  Com_Fastfile_SetupCommonModules();
}

/*
==============
Com_FastFile_FrameInternal
==============
*/
void Com_FastFile_FrameInternal(const bool updateRequests)
{
  const dvar_t *v1; 
  int v2; 
  int v3; 
  unsigned int i; 
  ComFastFileLoadModule *Module; 
  ComFastFileLoadModule *v6; 
  BOOL v7; 
  BOOL IsDatabaseReady; 
  const char *DebugName; 
  char *fmt; 
  __int64 v11; 

  if ( updateRequests )
    Com_FastFile_UpdatePauseAndLevelRequests();
  LoadBar_UpdateProgress();
  Com_Fastfile_UpdateModules();
  if ( Sys_IsDatabaseReady() && DB_AreFastfileLoadsCompleted() )
  {
    if ( Stream_DBIsDeferredFastfileUnloadDone() )
    {
      s_fastfile_lastDBAvailableTime = Sys_Milliseconds();
      goto LABEL_22;
    }
    Com_Printf(30, "Com_FastFile_IsDatabaseAvailable: Waiting for Stream_DBIsDeferredFastfileUnloadDone\n");
  }
  v1 = DCONST_DVARINT_fastFileDatabaseAccessTimeout;
  if ( !DCONST_DVARINT_fastFileDatabaseAccessTimeout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fastFileDatabaseAccessTimeout") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  v2 = 1000 * v1->current.integer;
  v3 = Sys_Milliseconds() - s_fastfile_lastDBAvailableTime;
  if ( v2 > 0 && v3 > v2 )
  {
    for ( i = 0; i < 0xB; ++i )
    {
      Module = Com_FastFile_GetModule((const ComFastFileModuleType)(unsigned __int8)i);
      v6 = Module;
      if ( (Module->m_currentState[0] != 2 || ComFastFileLoadModule::IsRestartRequired(Module)) && (v6->m_currentState[0] || ComFastFileLoadModule::IsLoadStartupRequired(v6)) && (v6->m_currentState[0] != 4 || ComFastFileLoadModule::IsNewZoneRequested(v6)) || v6->m_databaseRequest[0] )
      {
        v7 = DB_AreFastfileLoadsCompleted();
        IsDatabaseReady = Sys_IsDatabaseReady();
        DebugName = ComFastFileLoadModule::GetDebugName(v6);
        LODWORD(v11) = v7;
        LODWORD(fmt) = IsDatabaseReady;
        Com_PrintError(16, "Database became unavailable for %i seconds, module '%s' is waiting.  ready=%i loadsCompleted=%i\n", (unsigned int)v2, DebugName, fmt, v11);
      }
    }
  }
LABEL_22:
  CL_TransientsWorldMP_ProcessFastfiles();
  CL_TransientsCollisionMP_ProcessFastfiles(0);
  CL_TransientsCollisionMP_UpdateTransientFlags(0);
  CL_TransientsCommonMP_ProcessFastfiles();
  CL_TransientsInfilMP_ProcessFastfiles();
  CL_TransientsMP_Process();
}

/*
==============
Com_FastFile_Frame_FrontEnd
==============
*/
void Com_FastFile_Frame_FrontEnd(void)
{
  Com_FastFile_FrameInternal(1);
}

/*
==============
Com_FastFile_Frame_InGame
==============
*/
void Com_FastFile_Frame_InGame(void)
{
  Com_FastFile_FrameInternal(0);
}

/*
==============
Com_FastFile_GameStart_AllowedToStart
==============
*/
char Com_FastFile_GameStart_AllowedToStart(const char *mapName)
{
  if ( !DB_Zones_IsFinishedLoading(mapName) || DB_Zones_IsPreloadZoneName(mapName) )
    return 1;
  Com_Printf(30, "Com_FastFile_GameStart_AllowedToStart: Failed, map %s is already loaded\n", mapName);
  return 0;
}

/*
==============
Com_FastFile_GameStart_ReadyForLevel
==============
*/
bool Com_FastFile_GameStart_ReadyForLevel(const char *mapName)
{
  if ( !Sys_IsDatabaseReady() || !DB_AreFastfileLoadsCompleted() )
    return 0;
  if ( !Stream_DBIsDeferredFastfileUnloadDone() )
  {
    Com_Printf(30, "Com_FastFile_IsDatabaseAvailable: Waiting for Stream_DBIsDeferredFastfileUnloadDone\n");
    return 0;
  }
  return Com_FastFile_IsLevelPreloadComplete(mapName) && !s_fastfileLoadModules[6].m_currentState[0] && !s_fastfileLoadModules[6].m_databaseRequest[0];
}

/*
==============
Com_FastFile_GameStart_ReadyForTransients
==============
*/
bool Com_FastFile_GameStart_ReadyForTransients(const char *mapName)
{
  if ( (!Com_FastFile_IsGameWorkComplete() || !ComFastFileLoadModule::RequestEqualsName(&s_fastfileLoadModules[10], mapName) && !DB_Zones_IsFinishedLoading(mapName) || Com_FrontEnd_IsInFrontEnd() && Com_GameMode_SupportsFeature(WEAPON_SCOPE_TOGGLE_ON|WEAPON_LADDER_AIM|0x80) && CL_TransientsCollisionMP_GetTransientMode() && !CL_TransientsCollisionMP_IsRequestedLoaded() || !CL_TransientsInfilMP_AreIntroInfilsLoaded()) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 2786, ASSERT_TYPE_ASSERT, "(Com_FastFile_IsLevelPreloadComplete( mapName ))", "%s\n\tShould be called after Com_FastFile_GameStart_ReadyForLevel() succeeds. %s may also be an out of date fastfile.", "Com_FastFile_IsLevelPreloadComplete( mapName )", mapName) )
    __debugbreak();
  if ( !Sys_IsDatabaseReady() || !DB_AreFastfileLoadsCompleted() )
    return 0;
  if ( !Stream_DBIsDeferredFastfileUnloadDone() )
  {
    Com_Printf(30, "Com_FastFile_IsDatabaseAvailable: Waiting for Stream_DBIsDeferredFastfileUnloadDone\n");
    return 0;
  }
  return !DB_Zones_IsPreloadZoneName(mapName) && CL_TransientsInfilMP_AreIntroInfilsLoaded();
}

/*
==============
Com_FastFile_GameStart_ReadyToStart
==============
*/
char Com_FastFile_GameStart_ReadyToStart(const char *mapName)
{
  if ( (!Com_FastFile_IsGameWorkComplete() || !ComFastFileLoadModule::RequestEqualsName(&s_fastfileLoadModules[10], mapName) && !DB_Zones_IsFinishedLoading(mapName) || Com_FrontEnd_IsInFrontEnd() && Com_GameMode_SupportsFeature(WEAPON_SCOPE_TOGGLE_ON|WEAPON_LADDER_AIM|0x80) && CL_TransientsCollisionMP_GetTransientMode() && !CL_TransientsCollisionMP_IsRequestedLoaded() || !CL_TransientsInfilMP_AreIntroInfilsLoaded()) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 2811, ASSERT_TYPE_ASSERT, "(Com_FastFile_IsLevelPreloadComplete( mapName ))", "%s\n\tShould be called after Com_FastFile_GameStart_ReadyForLevel() succeeds. %s may also be an out of date fastfile.", "Com_FastFile_IsLevelPreloadComplete( mapName )", mapName) )
    __debugbreak();
  if ( DB_Zones_IsPreloadZoneName(mapName) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 2812, ASSERT_TYPE_ASSERT, "(!DB_Zones_IsPreloadZoneName( mapName ))", "%s\n\tMap should have been preloaded at this point", "!DB_Zones_IsPreloadZoneName( mapName )") )
    __debugbreak();
  if ( !CL_TransientsInfilMP_AreIntroInfilsLoaded() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 2814, ASSERT_TYPE_ASSERT, "(CL_TransientsInfilMP_AreIntroInfilsLoaded())", "%s\n\tInfil transients should be loaded at this point", "CL_TransientsInfilMP_AreIntroInfilsLoaded()") )
    __debugbreak();
  if ( !Sys_IsDatabaseReady() || !DB_AreFastfileLoadsCompleted() )
    return 0;
  if ( !Stream_DBIsDeferredFastfileUnloadDone() )
  {
    Com_Printf(30, "Com_FastFile_IsDatabaseAvailable: Waiting for Stream_DBIsDeferredFastfileUnloadDone\n");
    return 0;
  }
  return 1;
}

/*
==============
Com_FastFile_GetDebugString
==============
*/
bool Com_FastFile_GetDebugString(unsigned int *stringIndex, char *stringbuffer, unsigned int stringBufferLen)
{
  unsigned __int64 v3; 
  const dvar_t *v6; 
  unsigned int v8; 
  bool v9; 
  ComFastFileLoadModule *v10; 

  v3 = stringBufferLen;
  if ( !stringbuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 2834, ASSERT_TYPE_ASSERT, "(stringbuffer)", (const char *)&queryFormat, "stringbuffer") )
    __debugbreak();
  if ( !(_DWORD)v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 2835, ASSERT_TYPE_ASSERT, "(stringBufferLen)", (const char *)&queryFormat, "stringBufferLen") )
    __debugbreak();
  v6 = DCONST_DVARBOOL_fastfileDrawDebugText;
  if ( !DCONST_DVARBOOL_fastfileDrawDebugText && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fastfileDrawDebugText") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( !v6->current.enabled )
    return 0;
  if ( !Com_FrontEnd_IsInFrontEnd() && !Com_GameStart_IsActive() )
  {
    if ( !*stringIndex )
    {
      *stringIndex = 1;
      if ( s_fastfileLoadModules[10].m_currentState[0] || s_fastfileLoadModules[10].m_databaseRequest[0] )
        return ComFastFileLoadModule::GetDebugString(&s_fastfileLoadModules[10], stringbuffer, v3);
    }
    return 0;
  }
  v8 = *stringIndex;
  v9 = *stringIndex == 11;
  if ( *stringIndex >= 0xB )
  {
LABEL_22:
    if ( v9 )
    {
      *stringIndex = 12;
      if ( !Com_FastFile_IsCollisionStreamingComplete() )
      {
        Com_sprintf_truncate(stringbuffer, v3, "collision_preload: unknown");
        return 1;
      }
    }
    return 0;
  }
  while ( 1 )
  {
    ++*stringIndex;
    v10 = &s_fastfileLoadModules[(unsigned __int8)v8];
    if ( v10->m_currentState[0] != 2 || ComFastFileLoadModule::IsRestartRequired(v10) )
      return ComFastFileLoadModule::GetDebugString(v10, stringbuffer, v3);
    v8 = *stringIndex;
    if ( *stringIndex >= 0xB )
    {
      v9 = v8 == 11;
      goto LABEL_22;
    }
  }
}

/*
==============
Com_FastFile_GetModule
==============
*/
ComFastFileLoadModule *Com_FastFile_GetModule(const ComFastFileModuleType moduleType)
{
  unsigned __int8 v1; 
  int v3; 
  int v4; 

  v1 = moduleType;
  if ( (unsigned __int8)moduleType >= (unsigned int)(COUNT|DODGE|0x8) )
  {
    v4 = 11;
    v3 = (unsigned __int8)moduleType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 489, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<uint>( moduleType ) ) < (unsigned)( static_cast<uint>( ComFastFileModuleType::COUNT ) )", "static_cast<uint>( moduleType ) doesn't index static_cast<uint>( ComFastFileModuleType::COUNT )\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return &s_fastfileLoadModules[v1];
}

/*
==============
Com_FastFile_GetParentMpFastfile
==============
*/
const char *Com_FastFile_GetParentMpFastfile(const char *zoneName)
{
  const dvar_t *v2; 
  const char *result; 
  const char *v4; 
  const char *v5; 
  bool IsAltLaunchMode; 

  if ( !zoneName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 1586, ASSERT_TYPE_ASSERT, "(zoneName)", (const char *)&queryFormat, "zoneName") )
    __debugbreak();
  if ( !s_fastfile_mpLevelParentsTable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 1587, ASSERT_TYPE_ASSERT, "(s_fastfile_mpLevelParentsTable)", (const char *)&queryFormat, "s_fastfile_mpLevelParentsTable") )
    __debugbreak();
  v2 = DCONST_DVARSTR_com_parentFastfileoverride;
  if ( !DCONST_DVARSTR_com_parentFastfileoverride && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_parentFastfileoverride") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  result = v2->current.string;
  if ( !result || !*result )
  {
    v4 = StringTable_Lookup(s_fastfile_mpLevelParentsTable, 0, zoneName, 1);
    v5 = v4;
    if ( !v4 || !*v4 )
    {
      IsAltLaunchMode = Com_FastFile_IsAltLaunchMode();
      v5 = "common_core_alt_mp";
      if ( !IsAltLaunchMode )
        return "common_core_mp";
    }
    return v5;
  }
  return result;
}

/*
==============
Com_FastFile_GetRootModule
==============
*/
ComFastFileLoadModule *Com_FastFile_GetRootModule(const ComFastFileCategory category)
{
  unsigned __int8 v1; 
  bool v2; 
  ComFastFileLoadModule **v3; 
  int v5; 
  int v6; 

  v1 = category;
  if ( (unsigned __int8)category >= (unsigned int)(COUNT|DODGE) )
  {
    v6 = 3;
    v5 = (unsigned __int8)category;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 480, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<uint>( category ) ) < (unsigned)( static_cast<uint>( ComFastFileCategory::COUNT ) )", "static_cast<uint>( category ) doesn't index static_cast<uint>( ComFastFileCategory::COUNT )\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  v2 = s_fastfileRootModules[v1] == NULL;
  v3 = &s_fastfileRootModules[v1];
  if ( v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 481, ASSERT_TYPE_ASSERT, "(s_fastfileRootModules[static_cast<uint>( category )] != nullptr)", (const char *)&queryFormat, "s_fastfileRootModules[static_cast<uint>( category )] != nullptr") )
    __debugbreak();
  return *v3;
}

/*
==============
Com_FastFile_Init
==============
*/
void Com_FastFile_Init(void)
{
  unsigned int v1; 
  bool v2; 
  const dvar_t *v3; 
  GameModeType v4; 

  if ( s_fastFileSystemIninitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 2044, ASSERT_TYPE_ASSERT, "(!s_fastFileSystemIninitialized)", (const char *)&queryFormat, "!s_fastFileSystemIninitialized") )
    __debugbreak();
  __asm { vmovss  xmm0, cs:__real@3f800000 }
  v1 = 0;
  s_fastFileSystemIninitialized = 1;
  __asm { vmovss  cs:s_fastFileInstallation.m_progress, xmm0 }
  s_fastFileInstallation.m_secondsRemaining = 0i64;
  *(_WORD *)&s_fastFileInstallation.m_installationPending = 0;
  Dvar_BeginPermanentRegistration();
  DVARBOOL_fastfilePauseSupport = Dvar_RegisterBool("MNTQTNLRLK", 1, 0, "Enables the fast file manager to pause the active task for task switching");
  DVARBOOL_fastfilePreloadGamemode = Dvar_RegisterBool("MKTMOTMOMN", 1, 0, "Whether or not to prelod game mode (MP by default) fast files on launch of the game");
  DCONST_DVARBOOL_fastfileDrawDebugText = Dvar_RegisterBool("fastfileDrawDebugText", 1, 0x40004u, "Enables fast file debug information printed on-screen");
  DCONST_DVARBOOL_fastfile_prStress_enabled = Dvar_RegisterBool("fastfile_prStress_enabled", 0, 0x40004u, "Fast file pause/resume stress testing - Enable");
  DCONST_DVARINT_fastfile_prStress_frameCount = Dvar_RegisterInt("fastfile_prStress_frameCount", 1, 1, 600, 0x40004u, "Fast file pause/resume stress testing - Number of frames between toggles");
  DCONST_DVARBOOL_fastfileInstallTestEnabled = Dvar_RegisterBool("fastfileInstallTestEnabled", 0, 0x40004u, "Enables streamed install test, which will pretend the game is still isntalling chunks");
  DCONST_DVARINT_fastFileDatabaseAccessTimeout = Dvar_RegisterInt("fastFileDatabaseAccessTimeout", 240, 0, 600, 0x40004u, "Time out, in seconds, until we generate a dump because the database took too long (0 to disable)");
  v2 = Sys_IsReleaseBuild() || !SI_IsFullyInstalled();
  DVARBOOL_fastfileAltLaunch = Dvar_RegisterBool("MPNRKLKOKR", v2, 0x80u, "When enabled, we load the 'alt' set of fastfiles. Intended for the launch chunks.");
  Dvar_EndPermanentRegistration();
  if ( s_fastfile_mpLevelParentsTable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 1849, ASSERT_TYPE_ASSERT, "(s_fastfile_mpLevelParentsTable == nullptr)", (const char *)&queryFormat, "s_fastfile_mpLevelParentsTable == nullptr") )
    __debugbreak();
  StringTable_GetAsset("mp/levelZoneParents.csv", &s_fastfile_mpLevelParentsTable);
  Com_FastFile_InitLoadModules();
  Com_FastFile_ValidateModuleInitialization();
  do
    ComFastFileLoadModule::ClearState(&s_fastfileLoadModules[(unsigned __int8)v1++]);
  while ( v1 < 0xB );
  Com_Fastfile_SetupCommonModules();
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 2005, ASSERT_TYPE_ASSERT, "(Com_GameMode_GetActiveGameMode() == GameModeType::NONE)", "%s\n\tMust not have an active game mode here, or we may override data", "Com_GameMode_GetActiveGameMode() == GameModeType::NONE") )
    __debugbreak();
  if ( !DB_DevFastBoot_DevmapBootSkipUI() && SI_IsFullyInstalled() )
  {
    v3 = DVARBOOL_fastfilePreloadGamemode;
    if ( !DVARBOOL_fastfilePreloadGamemode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fastfilePreloadGamemode") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    if ( v3->current.enabled )
    {
      LOBYTE(v4) = 2;
      Com_FastFile_RequestGameModeFastFiles(v4, ALLOW_MISSING);
    }
  }
}

/*
==============
Com_FastFile_InitLoadModules
==============
*/
void Com_FastFile_InitLoadModules()
{
  s_fastfileLoadModules[1].m_zoneFlags = 1;
  s_fastfileLoadModules[1].m_childModule = NULL;
  s_fastfileLoadModules[1].m_parent = NULL;
  s_fastfileLoadModules[1].m_dependency = NULL;
  *(_WORD *)&s_fastfileLoadModules[1].m_moduleActive = 0;
  s_fastfileLoadModules[1].m_failureMode = REQUIRED;
  ComFastFileLoadModule::ClearRequestedZones(&s_fastfileLoadModules[1]);
  ComFastFileLoadModule::ClearState(&s_fastfileLoadModules[1]);
  s_fastfileLoadModules[4].m_childModule = NULL;
  s_fastfileLoadModules[1].m_debugName = "global";
  s_fastfileLoadModules[4].m_parent = NULL;
  s_fastfileLoadModules[4].m_dependency = NULL;
  s_fastfileLoadModules[4].m_zoneFlags = 2;
  *(_WORD *)&s_fastfileLoadModules[4].m_moduleActive = 0;
  s_fastfileLoadModules[4].m_failureMode = REQUIRED;
  ComFastFileLoadModule::ClearRequestedZones(&s_fastfileLoadModules[4]);
  ComFastFileLoadModule::ClearState(&s_fastfileLoadModules[4]);
  s_fastfileLoadModules[5].m_childModule = NULL;
  s_fastfileLoadModules[4].m_debugName = "global_tier1";
  s_fastfileLoadModules[5].m_parent = NULL;
  s_fastfileLoadModules[5].m_dependency = NULL;
  s_fastfileLoadModules[5].m_zoneFlags = 4;
  *(_WORD *)&s_fastfileLoadModules[5].m_moduleActive = 0;
  s_fastfileLoadModules[5].m_failureMode = REQUIRED;
  ComFastFileLoadModule::ClearRequestedZones(&s_fastfileLoadModules[5]);
  ComFastFileLoadModule::ClearState(&s_fastfileLoadModules[5]);
  s_fastfileRootModules[0] = &s_fastfileLoadModules[1];
  s_fastfileLoadModules[5].m_debugName = "global_tier2";
  ComFastFileLoadModule::SetParent(&s_fastfileLoadModules[4], &s_fastfileLoadModules[1]);
  ComFastFileLoadModule::SetParent(&s_fastfileLoadModules[5], &s_fastfileLoadModules[4]);
  s_fastfileLoadModules[2].m_childModule = NULL;
  s_fastfileLoadModules[2].m_parent = NULL;
  s_fastfileLoadModules[2].m_dependency = NULL;
  s_fastfileLoadModules[2].m_zoneFlags = 1;
  *(_WORD *)&s_fastfileLoadModules[2].m_moduleActive = 0;
  s_fastfileLoadModules[2].m_failureMode = REQUIRED;
  ComFastFileLoadModule::ClearRequestedZones(&s_fastfileLoadModules[2]);
  ComFastFileLoadModule::ClearState(&s_fastfileLoadModules[2]);
  s_fastfileLoadModules[7].m_childModule = NULL;
  s_fastfileLoadModules[2].m_debugName = "game";
  s_fastfileLoadModules[7].m_parent = NULL;
  s_fastfileLoadModules[7].m_dependency = NULL;
  s_fastfileLoadModules[7].m_zoneFlags = 8;
  *(_WORD *)&s_fastfileLoadModules[7].m_moduleActive = 0;
  s_fastfileLoadModules[7].m_failureMode = REQUIRED;
  ComFastFileLoadModule::ClearRequestedZones(&s_fastfileLoadModules[7]);
  ComFastFileLoadModule::ClearState(&s_fastfileLoadModules[7]);
  s_fastfileLoadModules[8].m_childModule = NULL;
  s_fastfileLoadModules[7].m_debugName = "game_tier1";
  s_fastfileLoadModules[8].m_parent = NULL;
  s_fastfileLoadModules[8].m_dependency = NULL;
  s_fastfileLoadModules[8].m_zoneFlags = 16;
  *(_WORD *)&s_fastfileLoadModules[8].m_moduleActive = 0;
  s_fastfileLoadModules[8].m_failureMode = REQUIRED;
  ComFastFileLoadModule::ClearRequestedZones(&s_fastfileLoadModules[8]);
  ComFastFileLoadModule::ClearState(&s_fastfileLoadModules[8]);
  s_fastfileLoadModules[8].m_debugName = "game_tier2";
  s_fastfileLoadModules[9].m_childModule = NULL;
  s_fastfileLoadModules[9].m_parent = NULL;
  s_fastfileLoadModules[9].m_dependency = NULL;
  s_fastfileLoadModules[9].m_zoneFlags = 32;
  *(_WORD *)&s_fastfileLoadModules[9].m_moduleActive = 0;
  s_fastfileLoadModules[9].m_failureMode = REQUIRED;
  ComFastFileLoadModule::ClearRequestedZones(&s_fastfileLoadModules[9]);
  ComFastFileLoadModule::ClearState(&s_fastfileLoadModules[9]);
  s_fastfileLoadModules[10].m_childModule = NULL;
  s_fastfileLoadModules[9].m_debugName = "game_tier3";
  s_fastfileLoadModules[10].m_parent = NULL;
  s_fastfileLoadModules[10].m_dependency = NULL;
  s_fastfileLoadModules[10].m_zoneFlags = 0x100000;
  *(_WORD *)&s_fastfileLoadModules[10].m_moduleActive = 0;
  s_fastfileLoadModules[10].m_failureMode = REQUIRED;
  ComFastFileLoadModule::ClearRequestedZones(&s_fastfileLoadModules[10]);
  ComFastFileLoadModule::ClearState(&s_fastfileLoadModules[10]);
  s_fastfileRootModules[2] = &s_fastfileLoadModules[2];
  s_fastfileLoadModules[10].m_debugName = "preload_frontend";
  ComFastFileLoadModule::SetDepdendency(&s_fastfileLoadModules[2], &s_fastfileLoadModules[1]);
  ComFastFileLoadModule::SetDepdendency(&s_fastfileLoadModules[7], &s_fastfileLoadModules[4]);
  ComFastFileLoadModule::SetDepdendency(&s_fastfileLoadModules[8], &s_fastfileLoadModules[5]);
  ComFastFileLoadModule::SetParent(&s_fastfileLoadModules[7], &s_fastfileLoadModules[2]);
  ComFastFileLoadModule::SetParent(&s_fastfileLoadModules[8], &s_fastfileLoadModules[7]);
  ComFastFileLoadModule::SetParent(&s_fastfileLoadModules[9], &s_fastfileLoadModules[8]);
  ComFastFileLoadModule::SetParent(&s_fastfileLoadModules[10], &s_fastfileLoadModules[9]);
  s_fastfileLoadModules[0].m_childModule = NULL;
  s_fastfileLoadModules[0].m_parent = NULL;
  s_fastfileLoadModules[0].m_dependency = NULL;
  s_fastfileLoadModules[0].m_zoneFlags = 64;
  *(_WORD *)&s_fastfileLoadModules[0].m_moduleActive = 0;
  s_fastfileLoadModules[0].m_failureMode = REQUIRED;
  ComFastFileLoadModule::ClearRequestedZones(s_fastfileLoadModules);
  ComFastFileLoadModule::ClearState(s_fastfileLoadModules);
  s_fastfileLoadModules[3].m_childModule = NULL;
  s_fastfileLoadModules[0].m_debugName = "frontend_boot";
  s_fastfileLoadModules[3].m_parent = NULL;
  s_fastfileLoadModules[3].m_dependency = NULL;
  s_fastfileLoadModules[3].m_zoneFlags = 64;
  *(_WORD *)&s_fastfileLoadModules[3].m_moduleActive = 0;
  s_fastfileLoadModules[3].m_failureMode = REQUIRED;
  ComFastFileLoadModule::ClearRequestedZones(&s_fastfileLoadModules[3]);
  ComFastFileLoadModule::ClearState(&s_fastfileLoadModules[3]);
  s_fastfileLoadModules[6].m_childModule = NULL;
  s_fastfileLoadModules[3].m_debugName = "frontend";
  s_fastfileLoadModules[6].m_parent = NULL;
  s_fastfileLoadModules[6].m_dependency = NULL;
  s_fastfileLoadModules[6].m_zoneFlags = 128;
  *(_WORD *)&s_fastfileLoadModules[6].m_moduleActive = 0;
  s_fastfileLoadModules[6].m_failureMode = REQUIRED;
  ComFastFileLoadModule::ClearRequestedZones(&s_fastfileLoadModules[6]);
  ComFastFileLoadModule::ClearState(&s_fastfileLoadModules[6]);
  s_fastfileRootModules[1] = s_fastfileLoadModules;
  s_fastfileLoadModules[6].m_debugName = "frontend_lvl";
  ComFastFileLoadModule::SetDepdendency(&s_fastfileLoadModules[3], &s_fastfileLoadModules[1]);
  ComFastFileLoadModule::SetDepdendency(&s_fastfileLoadModules[6], &s_fastfileLoadModules[4]);
  ComFastFileLoadModule::SetParent(&s_fastfileLoadModules[3], s_fastfileLoadModules);
  ComFastFileLoadModule::SetParent(&s_fastfileLoadModules[6], &s_fastfileLoadModules[3]);
}

/*
==============
Com_FastFile_IsAltLaunchMode
==============
*/
__int64 Com_FastFile_IsAltLaunchMode()
{
  const dvar_t *v0; 

  v0 = DVARBOOL_fastfileAltLaunch;
  if ( !DVARBOOL_fastfileAltLaunch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fastfileAltLaunch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.color[0];
}

/*
==============
Com_FastFile_IsCollisionStreamingComplete
==============
*/
bool Com_FastFile_IsCollisionStreamingComplete()
{
  return !Com_FrontEnd_IsInFrontEnd() || !Com_GameMode_SupportsFeature(WEAPON_SCOPE_TOGGLE_ON|WEAPON_LADDER_AIM|0x80) || CL_TransientsCollisionMP_GetTransientMode() == CL_TRANSIENTS_COLLISION_MP_TRANSIENTMODE_NONE || CL_TransientsCollisionMP_IsRequestedLoaded();
}

/*
==============
Com_FastFile_IsFrontEndSceneLoaded
==============
*/
bool Com_FastFile_IsFrontEndSceneLoaded()
{
  return s_fastfileLoadModules[5].m_currentState[0] == 2 && !ComFastFileLoadModule::IsRestartRequired(&s_fastfileLoadModules[5]) && s_fastfileLoadModules[6].m_currentState[0] == 2 && !ComFastFileLoadModule::IsRestartRequired(&s_fastfileLoadModules[6]);
}

/*
==============
Com_FastFile_IsFrontendLoaded
==============
*/
char Com_FastFile_IsFrontendLoaded()
{
  int v0; 
  const ComFastFileModuleType *i; 
  unsigned __int8 v2; 
  ComFastFileLoadModule *v3; 
  ComFastFileLoadModule *m_parent; 
  ComFastFileLoadModule *m_dependency; 
  __int64 v7; 
  __int64 v8; 

  v0 = 0;
  for ( i = &S_GAMEMODE_GLOBAL_PAUSABLE_MODULES[1]; ; i = (const ComFastFileModuleType *)((char *)i + 1) )
  {
    v2 = *(_BYTE *)i;
    if ( *(_BYTE *)i >= 0xBu )
    {
      LODWORD(v8) = 11;
      LODWORD(v7) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 489, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<uint>( moduleType ) ) < (unsigned)( static_cast<uint>( ComFastFileModuleType::COUNT ) )", "static_cast<uint>( moduleType ) doesn't index static_cast<uint>( ComFastFileModuleType::COUNT )\n\t%i not in [0, %i)", v7, v8) )
        __debugbreak();
    }
    v3 = &s_fastfileLoadModules[v2];
    if ( v3->m_currentState[0] != 2 || !v3->m_moduleActive )
      break;
    m_parent = v3->m_parent;
    if ( m_parent )
    {
      if ( m_parent->m_currentState[0] == 4 && !ComFastFileLoadModule::IsNewZoneRequested(m_parent) || ComFastFileLoadModule::HasFailedDependencies(v3->m_parent) )
        break;
    }
    m_dependency = v3->m_dependency;
    if ( m_dependency )
    {
      if ( m_dependency->m_currentState[0] == 4 && !ComFastFileLoadModule::IsNewZoneRequested(m_dependency) || ComFastFileLoadModule::HasFailedDependencies(v3->m_dependency) )
        break;
    }
    if ( ComFastFileLoadModule::IsNewZoneRequested(v3) )
      break;
    if ( (unsigned int)++v0 >= 4 )
      return 1;
  }
  return 0;
}

/*
==============
Com_FastFile_IsGameWorkComplete
==============
*/
char Com_FastFile_IsGameWorkComplete()
{
  int v0; 
  const ComFastFileModuleType *i; 
  unsigned __int8 v2; 
  ComFastFileLoadModule *v3; 
  ComFastFileLoadModule *m_parent; 
  ComFastFileLoadModule *m_dependency; 
  __int64 v7; 
  __int64 v8; 

  v0 = 0;
  for ( i = &S_COMMON_GAME_MODULES[1]; ; i = (const ComFastFileModuleType *)((char *)i + 1) )
  {
    v2 = *(_BYTE *)i;
    if ( *(_BYTE *)i >= 0xBu )
    {
      LODWORD(v8) = 11;
      LODWORD(v7) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 489, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<uint>( moduleType ) ) < (unsigned)( static_cast<uint>( ComFastFileModuleType::COUNT ) )", "static_cast<uint>( moduleType ) doesn't index static_cast<uint>( ComFastFileModuleType::COUNT )\n\t%i not in [0, %i)", v7, v8) )
        __debugbreak();
    }
    if ( (v3 = &s_fastfileLoadModules[v2], v3->m_currentState[0] != 2) || !v3->m_moduleActive || (m_parent = v3->m_parent) != NULL && (m_parent->m_currentState[0] == 4 && !ComFastFileLoadModule::IsNewZoneRequested(m_parent) || ComFastFileLoadModule::HasFailedDependencies(v3->m_parent)) || (m_dependency = v3->m_dependency) != NULL && (m_dependency->m_currentState[0] == 4 && !ComFastFileLoadModule::IsNewZoneRequested(m_dependency) || ComFastFileLoadModule::HasFailedDependencies(v3->m_dependency)) || ComFastFileLoadModule::IsNewZoneRequested(v3) )
    {
      if ( (v3->m_currentState[0] || ComFastFileLoadModule::IsLoadStartupRequired(v3)) && (v3->m_currentState[0] != 4 || ComFastFileLoadModule::IsNewZoneRequested(v3)) )
        break;
    }
    if ( v3->m_databaseRequest[0] )
      break;
    if ( (unsigned int)++v0 >= 5 )
      return 1;
  }
  return 0;
}

/*
==============
Com_FastFile_IsLevelPreloadComplete
==============
*/
bool Com_FastFile_IsLevelPreloadComplete(const char *mapname)
{
  return Com_FastFile_IsGameWorkComplete() && (ComFastFileLoadModule::RequestEqualsName(&s_fastfileLoadModules[10], mapname) || DB_Zones_IsFinishedLoading(mapname)) && (!Com_FrontEnd_IsInFrontEnd() || !Com_GameMode_SupportsFeature(WEAPON_SCOPE_TOGGLE_ON|WEAPON_LADDER_AIM|0x80) || CL_TransientsCollisionMP_GetTransientMode() == CL_TRANSIENTS_COLLISION_MP_TRANSIENTMODE_NONE || CL_TransientsCollisionMP_IsRequestedLoaded()) && CL_TransientsInfilMP_AreIntroInfilsLoaded();
}

/*
==============
Com_FastFile_IsPlayAgainAllowed
==============
*/
bool Com_FastFile_IsPlayAgainAllowed()
{
  if ( !s_fastfileRootModules[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 481, ASSERT_TYPE_ASSERT, "(s_fastfileRootModules[static_cast<uint>( category )] != nullptr)", (const char *)&queryFormat, "s_fastfileRootModules[static_cast<uint>( category )] != nullptr") )
    __debugbreak();
  return !s_fastfileRootModules[1]->m_moduleActive && !s_fastfileLoadModules[10].m_moduleActive;
}

/*
==============
Com_FastFile_IsUnloadUiComplete
==============
*/
bool Com_FastFile_IsUnloadUiComplete()
{
  ComFastFileLoadModule *v0; 
  ComFastFileLoadModule *m_childModule; 

  v0 = s_fastfileRootModules[1];
  if ( !s_fastfileRootModules[1] )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 481, ASSERT_TYPE_ASSERT, "(s_fastfileRootModules[static_cast<uint>( category )] != nullptr)", (const char *)&queryFormat, "s_fastfileRootModules[static_cast<uint>( category )] != nullptr") )
      __debugbreak();
    v0 = s_fastfileRootModules[1];
  }
  if ( v0->m_currentState[0] || v0->m_databaseRequest[0] )
    return 0;
  m_childModule = v0->m_childModule;
  return !m_childModule || ComFastFileLoadModule::IsModuleListUnloaded(m_childModule);
}

/*
==============
Com_FastFile_LoadError
==============
*/
void Com_FastFile_LoadError(const ComFastFileZoneList *names, const char *const failureText)
{
  bool v3; 
  const char *DebugText; 

  v3 = !failureText || !*failureText;
  DebugText = ComFastFileZoneList::GetDebugText((ComFastFileZoneList *)names);
  if ( v3 )
    Sys_Error((const ObfuscateErrorText)&stru_143ED8C40, DebugText);
  else
    Sys_Error((const ObfuscateErrorText)&stru_143ED8C18, DebugText, failureText);
}

/*
==============
Com_FastFile_OnEnterFrontEnd
==============
*/

void __fastcall Com_FastFile_OnEnterFrontEnd(double _XMM0_8)
{
  unsigned __int64 v1; 
  ComFastFileLoadModule *v6; 
  ComFastFileLoadModule *m_childModule; 
  const ComFastFileModuleType *v8; 
  __int64 v9; 
  unsigned __int8 v10; 
  ComFastFileLoadModule *v11; 
  bool v12; 
  __int64 v13; 
  __int64 v14; 

  if ( Com_FrontEndScene_IsPreloadEnabled() && Com_GameMode_SupportsFeature(WEAPON_LADDER_SLIDE) && ComFastFileLoadModule::RequestContainsModule(&s_fastfileLoadModules[10], &s_fastfileLoadModules[6]) )
  {
    if ( !ComFastFileLoadModule::IsUnloaded(&s_fastfileLoadModules[6]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 915, ASSERT_TYPE_ASSERT, "(frontendSceneLoadModule->IsUnloaded())", "%s\n\tFrontend Scene should be unloaded", "frontendSceneLoadModule->IsUnloaded()") )
      __debugbreak();
    if ( !ComFastFileLoadModule::IsUnloaded(s_fastfileLoadModules) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 924, ASSERT_TYPE_ASSERT, "(uiBootLoadModle->IsUnloaded())", "%s\n\tUI should be unloaded", "uiBootLoadModle->IsUnloaded()") )
      __debugbreak();
    if ( !ComFastFileLoadModule::IsUnloaded(&s_fastfileLoadModules[3]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 925, ASSERT_TYPE_ASSERT, "(uiMainLoadModle->IsUnloaded())", "%s\n\tUI should be unloaded", "uiMainLoadModle->IsUnloaded()") )
      __debugbreak();
    if ( !ComFastFileLoadModule::RequestContainsModule(&s_fastfileLoadModules[10], s_fastfileLoadModules) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 926, ASSERT_TYPE_ASSERT, "(preloadFrontendModule->RequestContainsModule( uiBootLoadModle ))", "%s\n\tUI Should have been preloaded", "preloadFrontendModule->RequestContainsModule( uiBootLoadModle )") )
      __debugbreak();
    if ( !ComFastFileLoadModule::RequestContainsModule(&s_fastfileLoadModules[10], &s_fastfileLoadModules[3]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 927, ASSERT_TYPE_ASSERT, "(preloadFrontendModule->RequestContainsModule( uiMainLoadModle ))", "%s\n\tUI Should have been preloaded", "preloadFrontendModule->RequestContainsModule( uiMainLoadModle )") )
      __debugbreak();
    Com_Printf(30, "ComFastFile: ResetFrontendPreload()\n");
    ComFastFileLoadModule::ClearRequestedZones(&s_fastfileLoadModules[10]);
    ComFastFileLoadModule::ClearState(&s_fastfileLoadModules[10]);
    ComFastFileLoadModule::SetModuleActive(&s_fastfileLoadModules[10], 1);
  }
  v1 = __rdtsc();
  DB_SyncXAssetsKeepAlive();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rax
  }
  if ( (__int64)(__rdtsc() - v1) < 0 )
    __asm { vaddsd  xmm0, xmm0, cs:__real@43f0000000000000 }
  __asm
  {
    vmulsd  xmm2, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
    vmovq   r8, xmm2
  }
  Com_Printf(0, "Com_FastFile_OnEnterFrontEnd: Stall to gate on UI load took %.2fms\n", *(double *)&_XMM2);
  v6 = s_fastfileRootModules[1];
  if ( !s_fastfileRootModules[1] )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 481, ASSERT_TYPE_ASSERT, "(s_fastfileRootModules[static_cast<uint>( category )] != nullptr)", (const char *)&queryFormat, "s_fastfileRootModules[static_cast<uint>( category )] != nullptr") )
      __debugbreak();
    v6 = s_fastfileRootModules[1];
  }
  ComFastFileLoadModule::SetModuleActive(v6, 1);
  m_childModule = v6->m_childModule;
  if ( m_childModule )
    ComFastFileLoadModule::SetModuleListActive(m_childModule, 1);
  ComFastFileLoadModule::SetModuleActive(&s_fastfileLoadModules[10], 1);
  if ( s_fastfileBackToFrontendFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 1481, ASSERT_TYPE_ASSERT, "(!s_fastfileBackToFrontendFrame)", (const char *)&queryFormat, "!s_fastfileBackToFrontendFrame") )
    __debugbreak();
  s_fastfileBackToFrontendFrame = 1;
  Com_FastFile_FrameInternal(1);
  s_fastfileBackToFrontendFrame = 0;
  v8 = &S_GAMEMODE_GLOBAL_PAUSABLE_MODULES[2];
  v9 = 5i64;
  do
  {
    v10 = *(_BYTE *)v8;
    if ( *(_BYTE *)v8 >= 0xBu )
    {
      LODWORD(v14) = 11;
      LODWORD(v13) = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 489, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<uint>( moduleType ) ) < (unsigned)( static_cast<uint>( ComFastFileModuleType::COUNT ) )", "static_cast<uint>( moduleType ) doesn't index static_cast<uint>( ComFastFileModuleType::COUNT )\n\t%i not in [0, %i)", v13, v14) )
        __debugbreak();
    }
    v11 = &s_fastfileLoadModules[v10];
    if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 1497, ASSERT_TYPE_ASSERT, "(module)", (const char *)&queryFormat, "module") )
      __debugbreak();
    if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() )
      v12 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF && v10 == 5;
    else
      v12 = (unsigned __int8)(v10 - 4) <= 1u;
    ComFastFileLoadModule::CheckIsLoadedOrPendingWithDB(v11, v12);
    v8 = (const ComFastFileModuleType *)((char *)v8 + 1);
    --v9;
  }
  while ( v9 );
}

/*
==============
Com_FastFile_OnEnterFrontendFastBoot
==============
*/
void Com_FastFile_OnEnterFrontendFastBoot(void)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 1558, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Should not have entered the frontend in fastboot without the always loaded feature") )
    __debugbreak();
}

/*
==============
Com_FastFile_OnEnterGameMode
==============
*/
void Com_FastFile_OnEnterGameMode(GameModeType gameMode)
{
  Com_FastFile_RequestGameModeFastFiles(gameMode, REQUIRED);
  Com_FastFile_FrameInternal(1);
}

/*
==============
Com_FastFile_OnExitFrontEnd
==============
*/
void Com_FastFile_OnExitFrontEnd(void)
{
  ComFastFileLoadModule *v0; 
  ComFastFileLoadModule *m_childModule; 

  v0 = s_fastfileRootModules[1];
  if ( !s_fastfileRootModules[1] )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 481, ASSERT_TYPE_ASSERT, "(s_fastfileRootModules[static_cast<uint>( category )] != nullptr)", (const char *)&queryFormat, "s_fastfileRootModules[static_cast<uint>( category )] != nullptr") )
      __debugbreak();
    v0 = s_fastfileRootModules[1];
  }
  ComFastFileLoadModule::SetModuleActive(v0, 0);
  m_childModule = v0->m_childModule;
  if ( m_childModule )
    ComFastFileLoadModule::SetModuleListActive(m_childModule, 0);
}

/*
==============
Com_FastFile_OnExitFrontEndFastBoot
==============
*/
void Com_FastFile_OnExitFrontEndFastBoot(void)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 1573, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Should not have entered the frontend in fastboot without the always loaded feature") )
    __debugbreak();
}

/*
==============
Com_FastFile_OnExitGameMode
==============
*/
void Com_FastFile_OnExitGameMode(GameModeType gameMode)
{
  Com_FastFile_FrameInternal(1);
}

/*
==============
Com_FastFile_OptionalLoadError
==============
*/
void Com_FastFile_OptionalLoadError(const unsigned int zoneFlags, const char *const failureText)
{
  ComFastFileZoneEntry *v4; 
  __int64 v5; 
  unsigned int v6; 
  ComFastFileZoneEntry *v7; 
  unsigned int v8; 
  const char *name; 
  const char *v10; 
  const char *DebugName; 
  unsigned __int8 v12; 
  ComFastFileLoadModule::LoadState v13; 
  char *v14; 
  __int64 v15; 
  bool v16; 
  const char *DebugText; 
  char *fmt; 
  __int64 v19; 
  __int64 v20; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 861, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", "%s\n\tThis should happen during the PostLoad, not from the database thread", "Sys_IsMainThread()") )
    __debugbreak();
  v4 = &s_fastfileLoadModules[0].m_activeZones.m_zones[1];
  v5 = 11i64;
  do
  {
    if ( (zoneFlags & *(_DWORD *)&v4[-2].name[48]) != 0 && v4[-2].name[52] )
    {
      if ( v4[-2].name[52] != 1 && v4[-2].name[52] != 3 )
      {
        LODWORD(v19) = (unsigned __int8)v4[-2].name[52];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3889, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Received a load error in an unexpected state (%i)", v19) )
          __debugbreak();
      }
      if ( !v4[-1].name[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3893, ASSERT_TYPE_ASSERT, "(!m_activeZones.IsEmpty())", (const char *)&queryFormat, "!m_activeZones.IsEmpty()") )
        __debugbreak();
      v6 = 0;
      v7 = v4 - 1;
      while ( v7->name[0] )
      {
        ++v6;
        ++v7;
        if ( v6 >= 3 )
        {
          v6 = 3;
          break;
        }
      }
      if ( v6 )
      {
        v8 = v6 - 1;
        if ( v8 )
        {
          name = v4[-1].name;
          if ( v8 == 1 )
            v10 = j_va("%s,%s", name, v4->name);
          else
            v10 = j_va("%s,%s,%s", name, v4->name, v4[1].name);
        }
        else
        {
          v10 = v4[-1].name;
        }
      }
      else
      {
        v10 = "<empty>";
      }
      DebugName = ComFastFileLoadModule::GetDebugName((ComFastFileLoadModule *)&v4[-2].name[16]);
      LODWORD(fmt) = zoneFlags;
      Com_Printf(30, "ComFastFile: (%s) Load error for zone '%s' (DB reported '%i')\n", DebugName, v10, fmt);
      v12 = v4[-2].name[60];
      if ( (v12 & 0xFB) != 0 )
      {
        LODWORD(v20) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3899, ASSERT_TYPE_ASSERT, "(m_databaseRequest == ComFastFileDbRequestType::NONE || m_databaseRequest == ComFastFileDbRequestType::RESUME)", "%s\n\tComFastFile: Got a load error but our load request was not processed (%i)", "m_databaseRequest == ComFastFileDbRequestType::NONE || m_databaseRequest == ComFastFileDbRequestType::RESUME", v20) )
          __debugbreak();
      }
      ComFastFileLoadModule::SetDatabaseRequest((ComFastFileLoadModule *)&v4[-2].name[16], NONE);
      LOBYTE(v13) = 4;
      ComFastFileLoadModule::SetState((ComFastFileLoadModule *)&v4[-2].name[16], v13);
      v14 = &v4[5].name[8];
      *(_DWORD *)&v4[-2].name[56] = *(_DWORD *)&v4[-2].name[16];
      if ( failureText )
        Core_strcpy(&v4[5].name[8], 0x400ui64, failureText);
      else
        *v14 = 0;
      if ( !LODWORD(v4[-2].sizeEstimate) )
      {
        v15 = 0i64;
        while ( !I_stricmp(v4[v15 - 1].name, v4[v15 + 2].name) )
        {
          v15 = (unsigned int)(v15 + 1);
          if ( (unsigned int)v15 >= 3 )
          {
            v16 = v4 == (ComFastFileZoneEntry *)-368i64 || !*v14;
            DebugText = ComFastFileZoneList::GetDebugText((ComFastFileZoneList *)&v4[-1]);
            if ( v16 )
              Sys_Error((const ObfuscateErrorText)&stru_143ED8C40, DebugText);
            else
              Sys_Error((const ObfuscateErrorText)&stru_143ED8C18, DebugText, &v4[5].name[8]);
            break;
          }
        }
      }
    }
    v4 = (ComFastFileZoneEntry *)((char *)v4 + 1520);
    --v5;
  }
  while ( v5 );
}

/*
==============
Com_FastFile_PopDevmap
==============
*/
void Com_FastFile_PopDevmap(void)
{
  s_fastFile_inDevMap = 0;
}

/*
==============
Com_FastFile_ProcessNonLoadRequestsForType
==============
*/
char Com_FastFile_ProcessNonLoadRequestsForType(const ComFastFileDbRequestType requestType)
{
  unsigned int v2; 
  unsigned __int8 v3; 
  unsigned int i; 
  ComFastFileLoadModule *v5; 
  const char *p_m_activeZones; 
  unsigned int v7; 
  ComFastFileZoneList *v8; 
  unsigned int v9; 
  const char *name; 
  const char *v11; 
  const char *v12; 
  char v13; 
  unsigned int v14; 
  ComFastFileZoneList *v15; 
  unsigned int v16; 
  const char *v17; 
  const char *v18; 
  const char *v19; 
  const char *DebugText; 
  const char *DebugName; 
  unsigned int v23; 
  const char *v24; 
  __int64 v31; 
  DB_FastfileInfo zoneInfo; 

  v2 = 0;
  v3 = requestType;
  for ( i = 0; i < 0xB; ++i )
  {
    v5 = &s_fastfileLoadModules[(unsigned __int8)i];
    if ( v3 == 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3795, ASSERT_TYPE_ASSERT, "(request != ComFastFileDbRequestType::LOAD)", "%s\n\tLoad requests must be processed via CollectModuleLoadRequests", "request != ComFastFileDbRequestType::LOAD") )
      __debugbreak();
    if ( v5->m_databaseRequest[0] == v3 )
    {
      v2 |= v5->m_zoneFlags;
      p_m_activeZones = (const char *)&v5->m_activeZones;
      v7 = 0;
      v8 = &v5->m_activeZones;
      while ( v8->m_zones[0].name[0] )
      {
        ++v7;
        v8 = (ComFastFileZoneList *)((char *)v8 + 72);
        if ( v7 >= 3 )
        {
          v7 = 3;
          break;
        }
      }
      if ( v7 )
      {
        v9 = v7 - 1;
        if ( v9 )
        {
          name = v5->m_activeZones.m_zones[1].name;
          v11 = (const char *)&v5->m_activeZones;
          if ( v9 == 1 )
            v12 = j_va("%s,%s", v11, name);
          else
            v12 = j_va("%s,%s,%s", v11, name, v5->m_activeZones.m_zones[2].name);
        }
        else
        {
          v12 = (const char *)&v5->m_activeZones;
        }
      }
      else
      {
        v12 = "<empty>";
      }
      Com_Printf(30, "ComFastFile: Executing Request '%s' (0x%x, %s)\n", S_REQUEST_NAMES[v3], v5->m_zoneFlags, v12);
      v13 = v5->m_databaseRequest[0];
      if ( v13 == 1 )
      {
        if ( v13 != 3 )
        {
          DebugText = ComFastFileZoneList::GetDebugText(&v5->m_activeZones);
          DebugName = ComFastFileLoadModule::GetDebugName(&s_fastfileLoadModules[(unsigned __int8)i]);
          Com_Printf(30, "ComFastFile: Request Change: %s -> %s (%s: %s)'\n", S_REQUEST_NAMES[(unsigned __int8)v5->m_databaseRequest[0]], S_REQUEST_NAMES[3], DebugName, DebugText);
        }
        v5->m_databaseRequest[0] = 3;
      }
      else
      {
        if ( v5->m_databaseRequest[0] == 3 )
          v5->m_loadProgress = v5->LOAD_PROGRESS_NONE;
        if ( v13 )
        {
          v14 = 0;
          v15 = &v5->m_activeZones;
          while ( v15->m_zones[0].name[0] )
          {
            ++v14;
            v15 = (ComFastFileZoneList *)((char *)v15 + 72);
            if ( v14 >= 3 )
            {
              v14 = 3;
              break;
            }
          }
          if ( v14 )
          {
            v16 = v14 - 1;
            if ( v16 )
            {
              v17 = v5->m_activeZones.m_zones[1].name;
              v18 = (const char *)&v5->m_activeZones;
              if ( v16 == 1 )
                p_m_activeZones = j_va("%s,%s", v18, v17);
              else
                p_m_activeZones = j_va("%s,%s,%s", v18, v17, v5->m_activeZones.m_zones[2].name);
            }
          }
          else
          {
            p_m_activeZones = "<empty>";
          }
          v19 = ComFastFileLoadModule::GetDebugName(&s_fastfileLoadModules[(unsigned __int8)i]);
          Com_Printf(30, "ComFastFile: Request Change: %s -> %s (%s: %s)'\n", S_REQUEST_NAMES[(unsigned __int8)v5->m_databaseRequest[0]], S_REQUEST_NAMES[0], v19, p_m_activeZones);
        }
        v5->m_databaseRequest[0] = 0;
      }
    }
  }
  if ( !v2 )
    return 0;
  switch ( v3 )
  {
    case 1u:
      __rdtsc();
      DB_CancelLoadFastfilesByZoneFlags(v2);
      __rdtsc();
      v24 = "ComFastFile: CancelZones (%x) took %f ms\n";
      break;
    case 2u:
      zoneInfo.name = NULL;
      zoneInfo.zoneFlags = v2;
      __rdtsc();
      *(_QWORD *)&zoneInfo.failureMode = 0i64;
      DB_PauseLoadFastfiles(&zoneInfo, 1u);
      __rdtsc();
      v24 = "ComFastFile: PauseZones (%x) took %f ms\n";
      break;
    case 3u:
      __rdtsc();
      DB_ReleaseZoneExternalReferences(v2);
      if ( (v2 & 0x10003F) == 0 || (v2 & 0xFFEFFFC0) != 0 )
      {
        if ( (v2 & 0xC0) == 0 || (v2 & 0xFFFFFF3F) != 0 )
        {
          Com_Printf(30, "ComFastFile: FreeZones: Doing sync unload\n");
          v23 = 4;
        }
        else
        {
          Com_Printf(30, "ComFastFile: FreeZones: Doing frontend unload\n");
          v23 = 8;
        }
      }
      else
      {
        if ( (v2 & 0x3F) != 0 )
          Com_Printf(30, "ComFastFile: FreeZones: Doing async unload of common files\n");
        v23 = 13;
      }
      if ( (v2 & 0x100000) != 0 )
      {
        Com_Printf(30, "Com_FastFile_FreeZones: Freeing PRELOAD_FRONTEND transients\n");
        CL_Transients_OnPreloadFrontendUnload();
      }
      DB_UnloadFastfilesByZoneFlags(v2, v23);
      if ( (v2 & 0x100000) != 0 )
        Sys_HeapOptimize();
      if ( (v2 & 0x100100) != 0 )
        IWMem_ProfileTree_PruneTree();
      if ( (v2 & 0x100180) != 0 && !s_fastFile_inDevMap )
      {
        DB_ValidateHasNoPausedFastfiles();
        DB_DynamicHeap_ValidateClear();
      }
      __rdtsc();
      v24 = "ComFastFile: FreeZones (%x) took %f ms\n";
      break;
    default:
      LODWORD(v31) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 2205, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected request type %i", v31) )
        __debugbreak();
      return 1;
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rax
    vmulsd  xmm1, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
    vcvtsd2ss xmm2, xmm1, xmm1
    vcvtss2sd xmm3, xmm2, xmm2
    vmovq   r9, xmm3
  }
  Com_Printf(30, v24, v2, _R9);
  return 1;
}

/*
==============
Com_FastFile_PushDevmap
==============
*/
void Com_FastFile_PushDevmap(void)
{
  s_fastFile_inDevMap = 1;
}

/*
==============
Com_FastFile_RequestGameModeFastFiles
==============
*/
void Com_FastFile_RequestGameModeFastFiles(GameModeType gameMode, DB_FastFileFailureMode failureMode)
{
  int v2; 
  int v4; 
  const char *v5; 
  const char *v6; 
  const char *v7; 
  const char *v8; 
  const char *v9; 
  const char *v10; 
  const char *v11; 
  const char *v12; 
  const char *v13; 
  const char *v14; 
  const char *v15; 
  const char *v16; 
  const char *v17; 
  const char *v18; 
  const char *v19; 
  const char *v20; 
  const char *v21; 
  const char *v22; 
  const char *v23; 
  const char *v24; 
  const char *v25; 
  const char *v26; 
  const char *v27; 
  const char *DebugText; 
  const char *DebugName; 
  const char *v30; 
  const char *v31; 
  const char *FastFileNameForMode; 
  unsigned int FastFileEstimatedSizeForMode; 
  bool v34; 
  bool IsAltLaunchMode; 
  const char *v36; 
  bool m_requiredInstallPending; 

  v2 = (unsigned __int8)gameMode;
  v4 = (unsigned __int8)gameMode;
  Com_Printf(30, "Com_FastFile_RequestGameModeFastFiles: %d\n", (unsigned __int8)gameMode);
  if ( (_BYTE)v2 )
  {
    switch ( v2 )
    {
      case 1:
        if ( !ComFastFileLoadModule::RequestEqualsName(&s_fastfileLoadModules[4], "global_sp") )
        {
          DebugText = ComFastFileZoneList::GetDebugText(&s_fastfileLoadModules[4].m_requestedZones);
          DebugName = ComFastFileLoadModule::GetDebugName(&s_fastfileLoadModules[4]);
          Com_Printf(30, "ComFastFile: (%s) SetRequestedZone: '%s' (was '%s')\n", DebugName, "global_sp", DebugText);
        }
        s_fastfileLoadModules[4].m_requestedZones.m_zones[0].name[0] = 0;
        s_fastfileLoadModules[4].m_requestedZones.m_zones[1].name[0] = 0;
        s_fastfileLoadModules[4].m_requestedZones.m_zones[2].name[0] = 0;
        ComFastFileZoneList::Add(&s_fastfileLoadModules[4].m_requestedZones, "global_sp", 0x100000ui64);
        ComFastFileLoadModule::ClearRequestedZones(&s_fastfileLoadModules[5]);
        if ( !ComFastFileLoadModule::RequestEqualsName(&s_fastfileLoadModules[7], "common_sp") )
        {
          v30 = ComFastFileZoneList::GetDebugText(&s_fastfileLoadModules[7].m_requestedZones);
          v31 = ComFastFileLoadModule::GetDebugName(&s_fastfileLoadModules[7]);
          Com_Printf(30, "ComFastFile: (%s) SetRequestedZone: '%s' (was '%s')\n", v31, "common_sp", v30);
        }
        s_fastfileLoadModules[7].m_requestedZones.m_zones[0].name[0] = 0;
        s_fastfileLoadModules[7].m_requestedZones.m_zones[1].name[0] = 0;
        s_fastfileLoadModules[7].m_requestedZones.m_zones[2].name[0] = 0;
        ComFastFileZoneList::Add(&s_fastfileLoadModules[7].m_requestedZones, "common_sp", 0x19500000ui64);
        ComFastFileLoadModule::ClearRequestedZones(&s_fastfileLoadModules[8]);
        break;
      case 2:
        if ( Com_FastFile_IsAltLaunchMode() )
        {
          if ( !ComFastFileLoadModule::RequestEqualsName(&s_fastfileLoadModules[4], "global_stream_alt_mp") )
          {
            v13 = ComFastFileZoneList::GetDebugText(&s_fastfileLoadModules[4].m_requestedZones);
            v14 = ComFastFileLoadModule::GetDebugName(&s_fastfileLoadModules[4]);
            Com_Printf(30, "ComFastFile: (%s) SetRequestedZone: '%s' (was '%s')\n", v14, "global_stream_alt_mp", v13);
          }
          s_fastfileLoadModules[4].m_requestedZones.m_zones[0].name[0] = 0;
          s_fastfileLoadModules[4].m_requestedZones.m_zones[1].name[0] = 0;
          s_fastfileLoadModules[4].m_requestedZones.m_zones[2].name[0] = 0;
          ComFastFileZoneList::Add(&s_fastfileLoadModules[4].m_requestedZones, "global_stream_alt_mp", 0x100000ui64);
          ComFastFileLoadModule::AddRequestedZone(&s_fastfileLoadModules[4], "global_alt_mp", 0x100000ui64);
          if ( !ComFastFileLoadModule::RequestEqualsName(&s_fastfileLoadModules[5], "global_core_alt_mp") )
          {
            v15 = ComFastFileZoneList::GetDebugText(&s_fastfileLoadModules[5].m_requestedZones);
            v16 = ComFastFileLoadModule::GetDebugName(&s_fastfileLoadModules[5]);
            Com_Printf(30, "ComFastFile: (%s) SetRequestedZone: '%s' (was '%s')\n", v16, "global_core_alt_mp", v15);
          }
          s_fastfileLoadModules[5].m_requestedZones.m_zones[0].name[0] = 0;
          s_fastfileLoadModules[5].m_requestedZones.m_zones[1].name[0] = 0;
          s_fastfileLoadModules[5].m_requestedZones.m_zones[2].name[0] = 0;
          ComFastFileZoneList::Add(&s_fastfileLoadModules[5].m_requestedZones, "global_core_alt_mp", 0x5000000ui64);
          if ( !ComFastFileLoadModule::RequestEqualsName(&s_fastfileLoadModules[7], "common_stream_alt_mp") )
          {
            v17 = ComFastFileZoneList::GetDebugText(&s_fastfileLoadModules[7].m_requestedZones);
            v18 = ComFastFileLoadModule::GetDebugName(&s_fastfileLoadModules[7]);
            Com_Printf(30, "ComFastFile: (%s) SetRequestedZone: '%s' (was '%s')\n", v18, "common_stream_alt_mp", v17);
          }
          s_fastfileLoadModules[7].m_requestedZones.m_zones[0].name[0] = 0;
          s_fastfileLoadModules[7].m_requestedZones.m_zones[1].name[0] = 0;
          s_fastfileLoadModules[7].m_requestedZones.m_zones[2].name[0] = 0;
          ComFastFileZoneList::Add(&s_fastfileLoadModules[7].m_requestedZones, "common_stream_alt_mp", 0x8200000ui64);
          ComFastFileLoadModule::AddRequestedZone(&s_fastfileLoadModules[7], "common_alt_mp", 0x8200000ui64);
          v19 = "common_base_alt_mp";
        }
        else
        {
          if ( !ComFastFileLoadModule::RequestEqualsName(&s_fastfileLoadModules[4], "global_stream_mp") )
          {
            v20 = ComFastFileZoneList::GetDebugText(&s_fastfileLoadModules[4].m_requestedZones);
            v21 = ComFastFileLoadModule::GetDebugName(&s_fastfileLoadModules[4]);
            Com_Printf(30, "ComFastFile: (%s) SetRequestedZone: '%s' (was '%s')\n", v21, "global_stream_mp", v20);
          }
          s_fastfileLoadModules[4].m_requestedZones.m_zones[0].name[0] = 0;
          s_fastfileLoadModules[4].m_requestedZones.m_zones[1].name[0] = 0;
          s_fastfileLoadModules[4].m_requestedZones.m_zones[2].name[0] = 0;
          ComFastFileZoneList::Add(&s_fastfileLoadModules[4].m_requestedZones, "global_stream_mp", 0x100000ui64);
          ComFastFileLoadModule::AddRequestedZone(&s_fastfileLoadModules[4], "global_mp", 0x100000ui64);
          if ( !ComFastFileLoadModule::RequestEqualsName(&s_fastfileLoadModules[5], "global_core_mp") )
          {
            v22 = ComFastFileZoneList::GetDebugText(&s_fastfileLoadModules[5].m_requestedZones);
            v23 = ComFastFileLoadModule::GetDebugName(&s_fastfileLoadModules[5]);
            Com_Printf(30, "ComFastFile: (%s) SetRequestedZone: '%s' (was '%s')\n", v23, "global_core_mp", v22);
          }
          s_fastfileLoadModules[5].m_requestedZones.m_zones[0].name[0] = 0;
          s_fastfileLoadModules[5].m_requestedZones.m_zones[1].name[0] = 0;
          s_fastfileLoadModules[5].m_requestedZones.m_zones[2].name[0] = 0;
          ComFastFileZoneList::Add(&s_fastfileLoadModules[5].m_requestedZones, "global_core_mp", 0x5000000ui64);
          if ( !ComFastFileLoadModule::RequestEqualsName(&s_fastfileLoadModules[7], "common_stream_mp") )
          {
            v24 = ComFastFileZoneList::GetDebugText(&s_fastfileLoadModules[7].m_requestedZones);
            v25 = ComFastFileLoadModule::GetDebugName(&s_fastfileLoadModules[7]);
            Com_Printf(30, "ComFastFile: (%s) SetRequestedZone: '%s' (was '%s')\n", v25, "common_stream_mp", v24);
          }
          s_fastfileLoadModules[7].m_requestedZones.m_zones[0].name[0] = 0;
          s_fastfileLoadModules[7].m_requestedZones.m_zones[1].name[0] = 0;
          s_fastfileLoadModules[7].m_requestedZones.m_zones[2].name[0] = 0;
          ComFastFileZoneList::Add(&s_fastfileLoadModules[7].m_requestedZones, "common_stream_mp", 0x8200000ui64);
          ComFastFileLoadModule::AddRequestedZone(&s_fastfileLoadModules[7], "common_mp", 0x8200000ui64);
          v19 = "common_base_mp";
        }
        if ( !ComFastFileLoadModule::RequestEqualsName(&s_fastfileLoadModules[8], v19) )
        {
          v26 = ComFastFileZoneList::GetDebugText(&s_fastfileLoadModules[8].m_requestedZones);
          v27 = ComFastFileLoadModule::GetDebugName(&s_fastfileLoadModules[8]);
          Com_Printf(30, "ComFastFile: (%s) SetRequestedZone: '%s' (was '%s')\n", v27, v19, v26);
        }
        s_fastfileLoadModules[8].m_requestedZones.m_zones[2].name[0] = 0;
        s_fastfileLoadModules[8].m_requestedZones.m_zones[1].name[0] = 0;
        s_fastfileLoadModules[8].m_requestedZones.m_zones[0].name[0] = 0;
        ComFastFileZoneList::Add(&s_fastfileLoadModules[8].m_requestedZones, v19, 0x33400000ui64);
        break;
      case 3:
        if ( !ComFastFileLoadModule::RequestEqualsName(&s_fastfileLoadModules[4], "global_stream_mp") )
        {
          v5 = ComFastFileZoneList::GetDebugText(&s_fastfileLoadModules[4].m_requestedZones);
          v6 = ComFastFileLoadModule::GetDebugName(&s_fastfileLoadModules[4]);
          Com_Printf(30, "ComFastFile: (%s) SetRequestedZone: '%s' (was '%s')\n", v6, "global_stream_mp", v5);
        }
        s_fastfileLoadModules[4].m_requestedZones.m_zones[0].name[0] = 0;
        s_fastfileLoadModules[4].m_requestedZones.m_zones[1].name[0] = 0;
        s_fastfileLoadModules[4].m_requestedZones.m_zones[2].name[0] = 0;
        ComFastFileZoneList::Add(&s_fastfileLoadModules[4].m_requestedZones, "global_stream_mp", 0x100000ui64);
        ComFastFileLoadModule::AddRequestedZone(&s_fastfileLoadModules[4], "global_mp", 0x100000ui64);
        if ( !ComFastFileLoadModule::RequestEqualsName(&s_fastfileLoadModules[5], "global_cp") )
        {
          v7 = ComFastFileZoneList::GetDebugText(&s_fastfileLoadModules[5].m_requestedZones);
          v8 = ComFastFileLoadModule::GetDebugName(&s_fastfileLoadModules[5]);
          Com_Printf(30, "ComFastFile: (%s) SetRequestedZone: '%s' (was '%s')\n", v8, "global_cp", v7);
        }
        s_fastfileLoadModules[5].m_requestedZones.m_zones[0].name[0] = 0;
        s_fastfileLoadModules[5].m_requestedZones.m_zones[1].name[0] = 0;
        s_fastfileLoadModules[5].m_requestedZones.m_zones[2].name[0] = 0;
        ComFastFileZoneList::Add(&s_fastfileLoadModules[5].m_requestedZones, "global_cp", 0x2800000ui64);
        if ( !ComFastFileLoadModule::RequestEqualsName(&s_fastfileLoadModules[7], "common_stream_mp") )
        {
          v9 = ComFastFileZoneList::GetDebugText(&s_fastfileLoadModules[7].m_requestedZones);
          v10 = ComFastFileLoadModule::GetDebugName(&s_fastfileLoadModules[7]);
          Com_Printf(30, "ComFastFile: (%s) SetRequestedZone: '%s' (was '%s')\n", v10, "common_stream_mp", v9);
        }
        s_fastfileLoadModules[7].m_requestedZones.m_zones[0].name[0] = 0;
        s_fastfileLoadModules[7].m_requestedZones.m_zones[1].name[0] = 0;
        s_fastfileLoadModules[7].m_requestedZones.m_zones[2].name[0] = 0;
        ComFastFileZoneList::Add(&s_fastfileLoadModules[7].m_requestedZones, "common_stream_mp", 0x8200000ui64);
        ComFastFileLoadModule::AddRequestedZone(&s_fastfileLoadModules[7], "common_mp", 0x8200000ui64);
        if ( !ComFastFileLoadModule::RequestEqualsName(&s_fastfileLoadModules[8], "common_cp") )
        {
          v11 = ComFastFileZoneList::GetDebugText(&s_fastfileLoadModules[8].m_requestedZones);
          v12 = ComFastFileLoadModule::GetDebugName(&s_fastfileLoadModules[8]);
          Com_Printf(30, "ComFastFile: (%s) SetRequestedZone: '%s' (was '%s')\n", v12, "common_cp", v11);
        }
        s_fastfileLoadModules[8].m_requestedZones.m_zones[0].name[0] = 0;
        s_fastfileLoadModules[8].m_requestedZones.m_zones[1].name[0] = 0;
        s_fastfileLoadModules[8].m_requestedZones.m_zones[2].name[0] = 0;
        ComFastFileZoneList::Add(&s_fastfileLoadModules[8].m_requestedZones, "common_cp", 0x11800000ui64);
        break;
      default:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 1327, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported mode %i", v2) )
          __debugbreak();
        return;
    }
    ComFastFileLoadModule::SetFailureMode(&s_fastfileLoadModules[4], failureMode);
    ComFastFileLoadModule::SetFailureMode(&s_fastfileLoadModules[5], failureMode);
    ComFastFileLoadModule::SetFailureMode(&s_fastfileLoadModules[7], failureMode);
    ComFastFileLoadModule::SetFailureMode(&s_fastfileLoadModules[8], failureMode);
    ComFastFileLoadModule::ClearRequestedZones(&s_fastfileLoadModules[9]);
    ComFastFileLoadModule::SetFailureMode(&s_fastfileLoadModules[9], ALLOW_MISSING);
    FastFileNameForMode = Com_FrontEndScene_GetFastFileNameForMode((GameModeType)(unsigned __int8)v2);
    if ( FastFileNameForMode )
    {
      FastFileEstimatedSizeForMode = Com_FrontEndScene_GetFastFileEstimatedSizeForMode((GameModeType)(unsigned __int8)v2);
      ComFastFileLoadModule::SetRequestedZone(&s_fastfileLoadModules[6], FastFileNameForMode, FastFileEstimatedSizeForMode);
    }
    else
    {
      ComFastFileLoadModule::ClearRequestedZones(&s_fastfileLoadModules[6]);
    }
    ComFastFileLoadModule::SetFailureMode(&s_fastfileLoadModules[6], failureMode);
    ComFastFileLoadModule::ClearRequestedZones(&s_fastfileLoadModules[10]);
    ComFastFileLoadModule::SetFailureMode(&s_fastfileLoadModules[10], ALLOW_MISSING);
    if ( v4 )
    {
      switch ( v4 )
      {
        case 1:
          SI_RequestMap("sp", NULL);
          break;
        case 2:
          IsAltLaunchMode = Com_FastFile_IsAltLaunchMode();
          v36 = "_launch";
          if ( !IsAltLaunchMode )
            v36 = "mp";
          SI_RequestMap(v36, NULL);
          break;
        case 3:
          SI_RequestMap("cp", NULL);
          break;
        default:
          v34 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 1052, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown game mode %i", v2);
          goto LABEL_54;
      }
LABEL_56:
      ComFastFileInstallState::UpdateProgress(&s_fastFileInstallation);
      m_requiredInstallPending = s_fastFileInstallation.m_requiredInstallPending;
      if ( s_fastFileInstallation.m_requiredInstallPending || Com_FastFile_ShouldPauseCommonFastfiles() )
      {
        Com_FastFile_SetGameCommonModulesPaused(1);
        Com_FastFile_SetGameGlobalModulesPaused(m_requiredInstallPending);
      }
      else
      {
        Com_FastFile_SetGameCommonModulesPaused(0);
        Com_FastFile_SetGameGlobalModulesPaused(m_requiredInstallPending);
      }
      return;
    }
    v34 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 1048, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Should not update the requests for the NONE game mode");
LABEL_54:
    if ( v34 )
      __debugbreak();
    goto LABEL_56;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 1323, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Should not update the requests for the NONE game mode") )
    __debugbreak();
}

/*
==============
Com_FastFile_ResetLevelPreload
==============
*/
void Com_FastFile_ResetLevelPreload(const char *mapName)
{
  if ( ComFastFileLoadModule::RequestEqualsName(&s_fastfileLoadModules[10], mapName) )
  {
    Com_Printf(30, "ComFastFile: ResetLevelPreload()\n");
    ComFastFileLoadModule::ClearRequestedZones(&s_fastfileLoadModules[10]);
    ComFastFileLoadModule::ClearState(&s_fastfileLoadModules[10]);
  }
  else if ( s_fastfileLoadModules[10].m_requestedZones.m_zones[0].name[0] )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 893, ASSERT_TYPE_ASSERT, "(preloadFrontendModule->RequestEqualsName( \"\" ))", "%s\n\tPreload module is active for something other than the level we're loading (%s)", "preloadFrontendModule->RequestEqualsName( \"\" )", mapName) )
      __debugbreak();
  }
}

/*
==============
Com_FastFile_SetFrontendPreloadRequest
==============
*/
void Com_FastFile_SetFrontendPreloadRequest(void)
{
  if ( Com_FrontEnd_IsInFrontEnd() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 948, ASSERT_TYPE_ASSERT, "(!Com_FrontEnd_IsInFrontEnd())", "%s\n\tShould not be called while in the front-end, this is meant for in-game frontend preload", "!Com_FrontEnd_IsInFrontEnd()") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_LADDER_SLIDE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 949, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::LEVEL_PRELOADING ))", "%s\n\tMust support level preloading to use this feature", "Com_GameMode_SupportsFeature( Com_GameMode_Feature::LEVEL_PRELOADING )") )
    __debugbreak();
  if ( Com_FrontEndScene_IsPreloadEnabled() )
  {
    if ( !ComFastFileLoadModule::IsUnloaded(&s_fastfileLoadModules[6]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 959, ASSERT_TYPE_ASSERT, "(frontendSceneLoadModule->IsUnloaded())", "%s\n\tFrontend Scene should be unloaded", "frontendSceneLoadModule->IsUnloaded()") )
      __debugbreak();
    if ( !ComFastFileLoadModule::IsUnloaded(s_fastfileLoadModules) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 972, ASSERT_TYPE_ASSERT, "(uiBootLoadModle->IsUnloaded())", "%s\n\tUI should be unloaded", "uiBootLoadModle->IsUnloaded()") )
      __debugbreak();
    if ( !ComFastFileLoadModule::IsUnloaded(&s_fastfileLoadModules[3]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 973, ASSERT_TYPE_ASSERT, "(uiMainLoadModle->IsUnloaded())", "%s\n\tUI should be unloaded", "uiMainLoadModle->IsUnloaded()") )
      __debugbreak();
    __asm
    {
      vmovups ymm0, ymmword ptr cs:s_fastfileLoadModules.m_requestedZones.m_zones.name
      vmovups ymm1, ymmword ptr cs:s_fastfileLoadModules.m_requestedZones.m_zones.name+20h
      vmovups ymmword ptr cs:s_fastfileLoadModules.m_requestedZones.m_zones.name+3B60h, ymm0
      vmovsd  xmm0, cs:s_fastfileLoadModules.m_requestedZones.m_zones.sizeEstimate
      vmovsd  qword ptr cs:s_fastfileLoadModules.m_requestedZones.m_zones.name+3BA0h, xmm0
      vmovups ymm0, ymmword ptr cs:s_fastfileLoadModules.m_requestedZones.m_zones.name+68h
      vmovups ymmword ptr cs:s_fastfileLoadModules.m_requestedZones.m_zones.name+3B80h, ymm1
      vmovups ymm1, ymmword ptr cs:s_fastfileLoadModules.m_requestedZones.m_zones.name+48h
      vmovups ymmword ptr cs:s_fastfileLoadModules.m_requestedZones.m_zones.name+3BC8h, ymm0
      vmovups ymm0, ymmword ptr cs:s_fastfileLoadModules.m_requestedZones.m_zones.name+90h
      vmovups ymmword ptr cs:s_fastfileLoadModules.m_requestedZones.m_zones.name+3BA8h, ymm1
      vmovsd  xmm1, cs:s_fastfileLoadModules.m_requestedZones.m_zones.sizeEstimate+48h
      vmovups ymmword ptr cs:s_fastfileLoadModules.m_requestedZones.m_zones.name+3BF0h, ymm0
      vmovsd  xmm0, cs:s_fastfileLoadModules.m_requestedZones.m_zones.sizeEstimate+90h
      vmovsd  qword ptr cs:s_fastfileLoadModules.m_requestedZones.m_zones.name+3BE8h, xmm1
      vmovups ymm1, ymmword ptr cs:s_fastfileLoadModules.m_requestedZones.m_zones.name+0B0h
      vmovsd  qword ptr cs:s_fastfileLoadModules.m_requestedZones.m_zones.name+3C30h, xmm0
      vmovups ymmword ptr cs:s_fastfileLoadModules.m_requestedZones.m_zones.name+3C10h, ymm1
    }
    ComFastFileLoadModule::AddRequestFrom(&s_fastfileLoadModules[10], &s_fastfileLoadModules[3]);
    ComFastFileLoadModule::AddRequestFrom(&s_fastfileLoadModules[10], &s_fastfileLoadModules[6]);
    ComFastFileLoadModule::SetModuleActive(&s_fastfileLoadModules[10], 1);
    ComFastFileLoadModule::SetFailureMode(&s_fastfileLoadModules[10], ALLOW_MISSING);
  }
}

/*
==============
Com_FastFile_SetGameCommonModulesPaused
==============
*/
void Com_FastFile_SetGameCommonModulesPaused(bool isPaused)
{
  const ComFastFileModuleType *v2; 
  __int64 v3; 
  unsigned __int8 v4; 
  const ComFastFileModuleType *v5; 
  __int64 v6; 
  unsigned __int8 v7; 
  ComFastFileLoadModule *v8; 
  const char *p_m_requestedZones; 
  unsigned int v10; 
  ComFastFileZoneList *v11; 
  unsigned int v12; 
  const char *name; 
  const char *v14; 
  BOOL m_modulePaused; 
  const char *DebugName; 
  char *fmt; 
  __int64 v18; 
  __int64 v19; 

  if ( !isPaused )
  {
    v2 = S_GAMEMODE_GLOBAL_PAUSABLE_MODULES;
    v3 = 3i64;
    do
    {
      v4 = *(_BYTE *)v2;
      if ( *(_BYTE *)v2 >= 0xBu )
      {
        LODWORD(v19) = 11;
        LODWORD(v18) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 489, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<uint>( moduleType ) ) < (unsigned)( static_cast<uint>( ComFastFileModuleType::COUNT ) )", "static_cast<uint>( moduleType ) doesn't index static_cast<uint>( ComFastFileModuleType::COUNT )\n\t%i not in [0, %i)", v18, v19) )
          __debugbreak();
      }
      if ( ComFastFileLoadModule::TestAnyModulePaused(&s_fastfileLoadModules[v4]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 1245, ASSERT_TYPE_ASSERT, "(!module->TestAnyModulePaused())", "%s\n\tCan't set common modules to be unpaused while the global/installation is paused", "!module->TestAnyModulePaused()") )
        __debugbreak();
      v2 = (const ComFastFileModuleType *)((char *)v2 + 1);
      --v3;
    }
    while ( v3 );
  }
  v5 = &S_COMMON_GAME_MODULES[3];
  v6 = 4i64;
  do
  {
    v7 = *(_BYTE *)v5;
    if ( *(_BYTE *)v5 >= 0xBu )
    {
      LODWORD(v19) = 11;
      LODWORD(v18) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 489, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<uint>( moduleType ) ) < (unsigned)( static_cast<uint>( ComFastFileModuleType::COUNT ) )", "static_cast<uint>( moduleType ) doesn't index static_cast<uint>( ComFastFileModuleType::COUNT )\n\t%i not in [0, %i)", v18, v19) )
        __debugbreak();
    }
    v8 = &s_fastfileLoadModules[v7];
    if ( v8->m_modulePaused != isPaused )
    {
      p_m_requestedZones = (const char *)&v8->m_requestedZones;
      v10 = 0;
      v11 = &v8->m_requestedZones;
      while ( v11->m_zones[0].name[0] )
      {
        ++v10;
        v11 = (ComFastFileZoneList *)((char *)v11 + 72);
        if ( v10 >= 3 )
        {
          v10 = 3;
          break;
        }
      }
      if ( v10 )
      {
        v12 = v10 - 1;
        if ( v12 )
        {
          name = v8->m_requestedZones.m_zones[1].name;
          v14 = (const char *)&v8->m_requestedZones;
          if ( v12 == 1 )
            p_m_requestedZones = j_va("%s,%s", v14, name);
          else
            p_m_requestedZones = j_va("%s,%s,%s", v14, name, v8->m_requestedZones.m_zones[2].name);
        }
      }
      else
      {
        p_m_requestedZones = "<empty>";
      }
      m_modulePaused = v8->m_modulePaused;
      DebugName = ComFastFileLoadModule::GetDebugName(v8);
      LODWORD(fmt) = m_modulePaused;
      Com_Printf(30, "ComFastFile: (%s) SetModulePaused: %i (was %i) (%s)\n", DebugName, isPaused, fmt, p_m_requestedZones);
    }
    v5 = (const ComFastFileModuleType *)((char *)v5 + 1);
    v8->m_modulePaused = isPaused;
    --v6;
  }
  while ( v6 );
}

/*
==============
Com_FastFile_SetGameGlobalModulesPaused
==============
*/
void Com_FastFile_SetGameGlobalModulesPaused(bool isPaused)
{
  const ComFastFileModuleType *v2; 
  __int64 v3; 
  unsigned __int8 v4; 
  const ComFastFileModuleType *v5; 
  __int64 v6; 
  unsigned __int8 v7; 
  ComFastFileLoadModule *v8; 
  const char *p_m_requestedZones; 
  unsigned int v10; 
  ComFastFileZoneList *v11; 
  unsigned int v12; 
  const char *name; 
  const char *v14; 
  BOOL m_modulePaused; 
  const char *DebugName; 
  char *fmt; 
  __int64 v18; 
  __int64 v19; 

  if ( isPaused )
  {
    v2 = &S_COMMON_GAME_MODULES[3];
    v3 = 4i64;
    do
    {
      v4 = *(_BYTE *)v2;
      if ( *(_BYTE *)v2 >= 0xBu )
      {
        LODWORD(v19) = 11;
        LODWORD(v18) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 489, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<uint>( moduleType ) ) < (unsigned)( static_cast<uint>( ComFastFileModuleType::COUNT ) )", "static_cast<uint>( moduleType ) doesn't index static_cast<uint>( ComFastFileModuleType::COUNT )\n\t%i not in [0, %i)", v18, v19) )
          __debugbreak();
      }
      if ( !ComFastFileLoadModule::TestAnyModulePaused(&s_fastfileLoadModules[v4]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 1224, ASSERT_TYPE_ASSERT, "(module->TestAnyModulePaused())", "%s\n\tCan't set global/installation modules to be paused while the common modules are unpaused", "module->TestAnyModulePaused()") )
        __debugbreak();
      v2 = (const ComFastFileModuleType *)((char *)v2 + 1);
      --v3;
    }
    while ( v3 );
  }
  v5 = S_GAMEMODE_GLOBAL_PAUSABLE_MODULES;
  v6 = 3i64;
  do
  {
    v7 = *(_BYTE *)v5;
    if ( *(_BYTE *)v5 >= 0xBu )
    {
      LODWORD(v19) = 11;
      LODWORD(v18) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 489, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<uint>( moduleType ) ) < (unsigned)( static_cast<uint>( ComFastFileModuleType::COUNT ) )", "static_cast<uint>( moduleType ) doesn't index static_cast<uint>( ComFastFileModuleType::COUNT )\n\t%i not in [0, %i)", v18, v19) )
        __debugbreak();
    }
    v8 = &s_fastfileLoadModules[v7];
    if ( v8->m_modulePaused != isPaused )
    {
      p_m_requestedZones = (const char *)&v8->m_requestedZones;
      v10 = 0;
      v11 = &v8->m_requestedZones;
      while ( v11->m_zones[0].name[0] )
      {
        ++v10;
        v11 = (ComFastFileZoneList *)((char *)v11 + 72);
        if ( v10 >= 3 )
        {
          v10 = 3;
          break;
        }
      }
      if ( v10 )
      {
        v12 = v10 - 1;
        if ( v12 )
        {
          name = v8->m_requestedZones.m_zones[1].name;
          v14 = (const char *)&v8->m_requestedZones;
          if ( v12 == 1 )
            p_m_requestedZones = j_va("%s,%s", v14, name);
          else
            p_m_requestedZones = j_va("%s,%s,%s", v14, name, v8->m_requestedZones.m_zones[2].name);
        }
      }
      else
      {
        p_m_requestedZones = "<empty>";
      }
      m_modulePaused = v8->m_modulePaused;
      DebugName = ComFastFileLoadModule::GetDebugName(v8);
      LODWORD(fmt) = m_modulePaused;
      Com_Printf(30, "ComFastFile: (%s) SetModulePaused: %i (was %i) (%s)\n", DebugName, isPaused, fmt, p_m_requestedZones);
    }
    v5 = (const ComFastFileModuleType *)((char *)v5 + 1);
    v8->m_modulePaused = isPaused;
    --v6;
  }
  while ( v6 );
}

/*
==============
Com_FastFile_SetupForGameStart
==============
*/
void Com_FastFile_SetupForGameStart(const char *mapName, bool playAgain)
{
  int ZoneIndexFromName; 
  unsigned int ZoneFlagsFromIndex; 
  int v6; 

  if ( s_fastfileLoadModules[10].m_currentState[0] == 4 && !ComFastFileLoadModule::IsNewZoneRequested(&s_fastfileLoadModules[10]) && s_fastfileLoadModules[10].m_failureText[0] )
    Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)s_fastfileLoadModules[10].m_failureText);
  CL_Transients_OnLobbyToGameStart();
  Com_Fastfile_ClearExternalSystemsForSync();
  Com_FastFile_UpdateRequests_SyncGameLoad(mapName);
  if ( !mapName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 2508, ASSERT_TYPE_ASSERT, "(mapName)", (const char *)&queryFormat, "mapName") )
    __debugbreak();
  ZoneIndexFromName = DB_Zones_GetZoneIndexFromName(mapName);
  if ( ZoneIndexFromName == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 2510, ASSERT_TYPE_ASSERT, "( zoneIndex != INVALID_ZONE_INDEX )", "Map '%s' not loaded", mapName) )
    __debugbreak();
  ZoneFlagsFromIndex = DB_Zones_GetZoneFlagsFromIndex(ZoneIndexFromName);
  if ( !DB_Zones_IsFinishedLoadingByIndex(ZoneIndexFromName) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 2512, ASSERT_TYPE_ASSERT, "( DB_Zones_IsFinishedLoadingByIndex( zoneIndex ) )", "Map '%s' not fully loaded", mapName) )
    __debugbreak();
  v6 = 0x100000;
  if ( playAgain )
    v6 = 256;
  if ( ZoneFlagsFromIndex != v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 2521, ASSERT_TYPE_ASSERT, "( zoneFlags == expectedZoneFlags )", "Map '%s' has unexpected flags (%08x != %08x)", mapName, ZoneFlagsFromIndex, v6) )
    __debugbreak();
}

/*
==============
Com_FastFile_SetupInitialGameModeZones
==============
*/
void Com_FastFile_SetupInitialGameModeZones(void)
{
  const dvar_t *v0; 
  GameModeType v1; 

  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 2005, ASSERT_TYPE_ASSERT, "(Com_GameMode_GetActiveGameMode() == GameModeType::NONE)", "%s\n\tMust not have an active game mode here, or we may override data", "Com_GameMode_GetActiveGameMode() == GameModeType::NONE") )
    __debugbreak();
  if ( !DB_DevFastBoot_DevmapBootSkipUI() && SI_IsFullyInstalled() )
  {
    v0 = DVARBOOL_fastfilePreloadGamemode;
    if ( !DVARBOOL_fastfilePreloadGamemode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fastfilePreloadGamemode") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v0);
    if ( v0->current.enabled )
    {
      LOBYTE(v1) = 2;
      Com_FastFile_RequestGameModeFastFiles(v1, ALLOW_MISSING);
    }
  }
}

/*
==============
Com_FastFile_ShouldPauseCommonFastfiles
==============
*/
bool Com_FastFile_ShouldPauseCommonFastfiles()
{
  const dvar_t *v0; 

  v0 = DVARBOOL_fastfilePauseSupport;
  if ( !DVARBOOL_fastfilePauseSupport && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fastfilePauseSupport") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.enabled && (Com_FastFile_AreLUIFastfilesStillLoading() || CL_UIStreaming_NeedsDatabaseAccess() || Com_FrontEndScene_NeedsDatabaseAccess() || CL_TransientsMP_NeedsProcessing());
}

/*
==============
Com_FastFile_SuspendInstall
==============
*/
void Com_FastFile_SuspendInstall(void)
{
  if ( s_fastFileInstallation.m_installationPending )
    SI_SuspendInstall();
}

/*
==============
Com_FastFile_SyncLoadComplete
==============
*/
void Com_FastFile_SyncLoadComplete(const char *mapName)
{
  unsigned int i; 
  ComFastFileLoadModule *v3; 
  ComFastFileLoadModule *m_parent; 
  ComFastFileZoneList *p_m_activeZones; 
  __int64 v6; 
  ComFastFileZoneList *p_m_requestedZones; 
  char v8; 
  ComFastFileLoadModule *v9; 
  ComFastFileZoneList *v10; 
  __int64 v11; 
  ComFastFileZoneList *v12; 
  ComFastFileLoadModule *m_dependency; 
  ComFastFileZoneList *v14; 
  __int64 v15; 
  ComFastFileZoneList *v16; 
  __int64 v17; 
  ComFastFileLoadModule *v18; 
  ComFastFileZoneList *v19; 
  __int64 v20; 
  const char *DebugName; 

  Com_Fastfile_ClearExternalSystemsForSync();
  Com_FastFile_UpdateRequests_SyncGameLoad(mapName);
  Com_FastFile_UpdateModules_SyncGameLoad();
  for ( i = 0; i < 0xB; ++i )
  {
    v3 = &s_fastfileLoadModules[(unsigned __int8)i];
    if ( v3->m_currentState[0] == 2 && v3->m_moduleActive )
    {
      m_parent = v3->m_parent;
      if ( !m_parent )
        goto LABEL_19;
      if ( m_parent->m_currentState[0] == 4 )
      {
        p_m_activeZones = &m_parent->m_activeZones;
        v6 = 0i64;
        p_m_requestedZones = &m_parent->m_requestedZones;
        while ( !I_stricmp(p_m_activeZones->m_zones[v6].name, p_m_requestedZones->m_zones[v6].name) )
        {
          v6 = (unsigned int)(v6 + 1);
          if ( (unsigned int)v6 >= 3 )
            goto LABEL_9;
        }
        m_parent = v3->m_parent;
      }
      if ( !ComFastFileLoadModule::HasFailedDependencies(m_parent) )
      {
LABEL_19:
        m_dependency = v3->m_dependency;
        if ( !m_dependency )
          goto LABEL_27;
        if ( m_dependency->m_currentState[0] == 4 )
        {
          v14 = &m_dependency->m_activeZones;
          v15 = 0i64;
          v16 = &m_dependency->m_requestedZones;
          while ( !I_stricmp(v14->m_zones[v15].name, v16->m_zones[v15].name) )
          {
            v15 = (unsigned int)(v15 + 1);
            if ( (unsigned int)v15 >= 3 )
              goto LABEL_9;
          }
          m_dependency = v3->m_dependency;
        }
        if ( !ComFastFileLoadModule::HasFailedDependencies(m_dependency) )
        {
LABEL_27:
          v17 = 0i64;
          while ( !I_stricmp(v3->m_activeZones.m_zones[v17].name, v3->m_requestedZones.m_zones[v17].name) )
          {
            v17 = (unsigned int)(v17 + 1);
            if ( (unsigned int)v17 >= 3 )
              goto LABEL_44;
          }
        }
      }
    }
LABEL_9:
    v8 = v3->m_currentState[0];
    if ( v8 )
    {
      v19 = &v3->m_requestedZones;
    }
    else
    {
      if ( !v3->m_moduleActive )
        goto LABEL_44;
      v9 = v3->m_parent;
      if ( v9 )
      {
        if ( v9->m_currentState[0] == 4 )
        {
          v10 = &v9->m_activeZones;
          v11 = 0i64;
          v12 = &v9->m_requestedZones;
          while ( !I_stricmp(v10->m_zones[v11].name, v12->m_zones[v11].name) )
          {
            v11 = (unsigned int)(v11 + 1);
            if ( (unsigned int)v11 >= 3 )
              goto LABEL_44;
          }
          v9 = v3->m_parent;
        }
        if ( ComFastFileLoadModule::HasFailedDependencies(v9) )
          goto LABEL_44;
      }
      if ( (v18 = v3->m_dependency) != NULL && (v18->m_currentState[0] == 4 && !ComFastFileLoadModule::IsNewZoneRequested(v18) || ComFastFileLoadModule::HasFailedDependencies(v3->m_dependency)) || (v19 = &v3->m_requestedZones, !v3->m_requestedZones.m_zones[0].name[0]) )
      {
LABEL_44:
        if ( !v3->m_databaseRequest[0] )
          continue;
        goto LABEL_45;
      }
      v8 = v3->m_currentState[0];
    }
    if ( v8 == 4 )
    {
      v20 = 0i64;
      while ( !I_stricmp(v3->m_activeZones.m_zones[v20].name, v19->m_zones[v20].name) )
      {
        v20 = (unsigned int)(v20 + 1);
        if ( (unsigned int)v20 >= 3 )
          goto LABEL_44;
      }
    }
LABEL_45:
    DebugName = ComFastFileLoadModule::GetDebugName(&s_fastfileLoadModules[(unsigned __int8)i]);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 2549, ASSERT_TYPE_ASSERT, "(module->IsWorkComplete())", "%s\n\tSomething went wrong with the update for modules in list '%s'", "module->IsWorkComplete()", DebugName) )
      __debugbreak();
  }
}

/*
==============
Com_FastFile_UpdateModules_SyncGameLoad
==============
*/
void Com_FastFile_UpdateModules_SyncGameLoad()
{
  char v0; 
  unsigned int i; 
  ComFastFileLoadModule *v2; 
  ComFastFileLoadModule *v3; 
  ComFastFileLoadModule *m_parent; 
  ComFastFileZoneList *p_m_activeZones; 
  __int64 v6; 
  ComFastFileZoneList *p_m_requestedZones; 
  char v8; 
  ComFastFileLoadModule *v9; 
  ComFastFileZoneList *v10; 
  __int64 v11; 
  ComFastFileZoneList *v12; 
  ComFastFileLoadModule *m_dependency; 
  ComFastFileZoneList *v14; 
  __int64 v15; 
  ComFastFileZoneList *v16; 
  __int64 v17; 
  ComFastFileZoneList *v18; 
  __int64 v19; 
  unsigned int j; 
  unsigned int k; 
  ComFastFileDbRequestType v22; 
  int v23; 
  ComFastFileDbRequestType v24; 
  __int64 v25; 
  __int64 v26; 

  do
  {
    v0 = 0;
    for ( i = 0; i < 0xB; ++i )
    {
      v2 = &s_fastfileLoadModules[(unsigned __int8)i];
      ComFastFileLoadModule::UpdateSelf(v2);
      if ( !v0 )
      {
        if ( v2->m_currentState[0] == 2 && v2->m_moduleActive )
        {
          m_parent = v2->m_parent;
          if ( !m_parent )
            goto LABEL_20;
          if ( m_parent->m_currentState[0] == 4 )
          {
            p_m_activeZones = &m_parent->m_activeZones;
            v6 = 0i64;
            p_m_requestedZones = &m_parent->m_requestedZones;
            while ( !I_stricmp(p_m_activeZones->m_zones[v6].name, p_m_requestedZones->m_zones[v6].name) )
            {
              v6 = (unsigned int)(v6 + 1);
              if ( (unsigned int)v6 >= 3 )
                goto LABEL_10;
            }
            m_parent = v2->m_parent;
          }
          if ( !ComFastFileLoadModule::HasFailedDependencies(m_parent) )
          {
LABEL_20:
            m_dependency = v2->m_dependency;
            if ( !m_dependency )
              goto LABEL_28;
            if ( m_dependency->m_currentState[0] == 4 )
            {
              v14 = &m_dependency->m_activeZones;
              v15 = 0i64;
              v16 = &m_dependency->m_requestedZones;
              while ( !I_stricmp(v14->m_zones[v15].name, v16->m_zones[v15].name) )
              {
                v15 = (unsigned int)(v15 + 1);
                if ( (unsigned int)v15 >= 3 )
                  goto LABEL_10;
              }
              m_dependency = v2->m_dependency;
            }
            if ( !ComFastFileLoadModule::HasFailedDependencies(m_dependency) )
            {
LABEL_28:
              v17 = 0i64;
              while ( !I_stricmp(v2->m_activeZones.m_zones[v17].name, v2->m_requestedZones.m_zones[v17].name) )
              {
                v17 = (unsigned int)(v17 + 1);
                if ( (unsigned int)v17 >= 3 )
                  goto LABEL_45;
              }
            }
          }
        }
LABEL_10:
        v8 = v2->m_currentState[0];
        if ( v8 )
        {
          v18 = &v2->m_requestedZones;
LABEL_41:
          if ( v8 == 4 )
          {
            v19 = 0i64;
            while ( !I_stricmp(v2->m_activeZones.m_zones[v19].name, v18->m_zones[v19].name) )
            {
              v19 = (unsigned int)(v19 + 1);
              if ( (unsigned int)v19 >= 3 )
                goto LABEL_45;
            }
          }
          goto LABEL_47;
        }
        if ( v2->m_moduleActive )
        {
          v9 = v2->m_parent;
          if ( !v9 )
            goto LABEL_34;
          if ( v9->m_currentState[0] == 4 )
          {
            v10 = &v9->m_activeZones;
            v11 = 0i64;
            v12 = &v9->m_requestedZones;
            while ( !I_stricmp(v10->m_zones[v11].name, v12->m_zones[v11].name) )
            {
              v11 = (unsigned int)(v11 + 1);
              if ( (unsigned int)v11 >= 3 )
                goto LABEL_45;
            }
            v9 = v2->m_parent;
          }
          if ( !ComFastFileLoadModule::HasFailedDependencies(v9) )
          {
LABEL_34:
            v3 = v2->m_dependency;
            if ( !v3 || (v3->m_currentState[0] != 4 || ComFastFileLoadModule::IsNewZoneRequested(v3)) && !ComFastFileLoadModule::HasFailedDependencies(v2->m_dependency) )
            {
              v18 = &v2->m_requestedZones;
              if ( v2->m_requestedZones.m_zones[0].name[0] )
              {
                v8 = v2->m_currentState[0];
                goto LABEL_41;
              }
            }
          }
        }
LABEL_45:
        if ( !v2->m_databaseRequest[0] )
        {
          v0 = 0;
          continue;
        }
      }
LABEL_47:
      v0 = 1;
    }
    for ( j = 0; j < 0xB; ++j )
    {
      for ( k = 0; k < j; ++k )
      {
        if ( (unsigned __int8)k >= 0xBu )
        {
          LODWORD(v26) = 11;
          LODWORD(v25) = (unsigned __int8)k;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 489, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<uint>( moduleType ) ) < (unsigned)( static_cast<uint>( ComFastFileModuleType::COUNT ) )", "static_cast<uint>( moduleType ) doesn't index static_cast<uint>( ComFastFileModuleType::COUNT )\n\t%i not in [0, %i)", v25, v26) )
            __debugbreak();
        }
        ComFastFileLoadModule::ValidateDynamicRelationships(&s_fastfileLoadModules[(unsigned __int8)j], &s_fastfileLoadModules[(unsigned __int8)k]);
      }
    }
    LOBYTE(v3) = 1;
    if ( !Com_FastFile_ProcessNonLoadRequestsForType((const ComFastFileDbRequestType)v3) )
    {
      LOBYTE(v22) = 2;
      if ( !Com_FastFile_ProcessNonLoadRequestsForType(v22) )
      {
        if ( s_fastfileBackToFrontendFrame && Com_FastFile_AreLUIFastfilesStillLoading() )
        {
          if ( CL_TransientsMP_NeedsProcessing() )
            Com_Printf(30, "Com_Fastfile_TransientsNeedProcessing: CL_TransientsMP_NeedsProcessing() true, but we have no UI loaded yet. Force UI first.\n");
LABEL_63:
          if ( Sys_IsDatabaseReady() && DB_AreFastfileLoadsCompleted() )
          {
            if ( Stream_DBIsDeferredFastfileUnloadDone() )
            {
              v23 = Sys_Milliseconds();
              LOBYTE(v24) = 3;
              s_fastfile_lastDBAvailableTime = v23;
              if ( !Com_FastFile_ProcessNonLoadRequestsForType(v24) && !Com_Fastfile_ProcessResumeRequests() )
                Com_Fastfile_ProcessLoadRequests();
            }
            else
            {
              Com_Printf(30, "Com_FastFile_IsDatabaseAvailable: Waiting for Stream_DBIsDeferredFastfileUnloadDone\n");
            }
          }
        }
        else if ( !CL_TransientsMP_NeedsProcessing() )
        {
          goto LABEL_63;
        }
      }
    }
    if ( Sys_IsDatabaseReady() && DB_AreFastfileLoadsCompleted() )
    {
      if ( !Stream_DBIsDeferredFastfileUnloadDone() )
      {
        Com_Printf(30, "Com_FastFile_IsDatabaseAvailable: Waiting for Stream_DBIsDeferredFastfileUnloadDone\n");
        goto LABEL_74;
      }
    }
    else
    {
LABEL_74:
      DB_SyncXAssetsSkipAlwaysLoaded(1);
    }
  }
  while ( v0 );
}

/*
==============
Com_FastFile_UpdatePauseAndLevelRequests
==============
*/
void Com_FastFile_UpdatePauseAndLevelRequests()
{
  unsigned __int8 ActiveGameMode; 
  const dvar_t *v1; 
  char v2; 
  bool v3; 
  unsigned int LobbyStreamPositions; 
  vec3_t *p_outPos; 
  __int64 v6; 
  const dvar_t *v7; 
  const dvar_t *v8; 
  int v9; 
  bool v10; 
  bool v11; 
  vec3_t outPos; 

  if ( s_fastFileInstallation.m_installationPending )
  {
    ComFastFileInstallState::UpdateProgress(&s_fastFileInstallation);
    if ( s_fastFileInstallation.m_requiredInstallPending )
      return;
    Com_FastFile_SetGameGlobalModulesPaused(0);
  }
  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  if ( ActiveGameMode )
  {
    ComFastFileLoadModule::SetFailureMode(&s_fastfileLoadModules[9], ALLOW_MISSING);
    if ( ActiveGameMode == 2 )
    {
      v1 = DVARSTR_ui_mapname;
      if ( !DVARSTR_ui_mapname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_mapname") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v1);
      Com_Fastfile_UpdateLevelParentMpInternal(&s_fastfileLoadModules[9], v1->current.string);
    }
    else
    {
      ComFastFileLoadModule::ClearRequestedZones(&s_fastfileLoadModules[9]);
    }
    Com_Fastfile_UpdateLevelPreloadRequest((GameModeType)ActiveGameMode);
    v2 = s_fastfileLoadModules[10].m_currentState[0];
    if ( s_fastfileLoadModules[10].m_currentState[0] == 2 )
    {
      if ( !ComFastFileLoadModule::IsRestartRequired(&s_fastfileLoadModules[10]) )
        goto LABEL_19;
      v2 = s_fastfileLoadModules[10].m_currentState[0];
    }
    if ( !v2 )
    {
      if ( !ComFastFileLoadModule::IsLoadStartupRequired(&s_fastfileLoadModules[10]) )
        goto LABEL_19;
      v2 = s_fastfileLoadModules[10].m_currentState[0];
    }
    if ( v2 != 4 || ComFastFileLoadModule::IsNewZoneRequested(&s_fastfileLoadModules[10]) )
    {
      v3 = 0;
LABEL_21:
      CL_TransientsCollisionMP_ResetGridStreaming();
      if ( v3 )
      {
        CL_TransientsWorldMP_OnLevelPreloadAllowed();
        if ( Com_GameMode_SupportsFeature(WEAPON_SCOPE_TOGGLE_ON|WEAPON_LADDER_AIM|0x80) )
        {
          LobbyStreamPositions = CL_TransientsWorldMP_GetLobbyStreamPositions(&outPos, 2u);
          if ( LobbyStreamPositions )
          {
            p_outPos = &outPos;
            v6 = LobbyStreamPositions;
            do
            {
              CL_TransientsCollisionMP_AddGridStreamingFrontendPos(p_outPos++);
              --v6;
            }
            while ( v6 );
          }
          if ( CL_TransientsCollisionMP_GetTransientMode() == CL_TRANSIENTS_COLLISION_MP_TRANSIENTMODE_NONE )
            CL_TransientsCollisionMP_SetTransientMode(CL_TRANSIENTS_COLLISION_MP_TRANSIENTMODE_CLOSEST);
        }
        CL_TransientsInfilMP_OnLevelPreloadComplete();
      }
      else
      {
        CL_TransientsWorldMP_OnLevelPreloadCancel();
        CL_TransientsCollisionMP_OnLevelPreloadCancel();
        CL_TransientsInfilMP_OnLevelPreloadCancel();
      }
      goto LABEL_30;
    }
LABEL_19:
    v3 = s_fastfileLoadModules[10].m_databaseRequest[0] == 0;
    goto LABEL_21;
  }
LABEL_30:
  if ( Com_FastFile_ShouldPauseCommonFastfiles() )
    goto LABEL_43;
  v7 = DCONST_DVARBOOL_fastfile_prStress_enabled;
  if ( !DCONST_DVARBOOL_fastfile_prStress_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fastfile_prStress_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( !v7->current.enabled )
    goto LABEL_42;
  v8 = DCONST_DVARINT_fastfile_prStress_frameCount;
  if ( !DCONST_DVARINT_fastfile_prStress_frameCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fastfile_prStress_frameCount") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  v9 = s_fastFile_prStressCount % v8->current.integer;
  ++s_fastFile_prStressCount;
  if ( v9 )
  {
    v10 = s_fastFile_prStressResult;
  }
  else
  {
    v10 = !s_fastFile_prStressResult;
    s_fastFile_prStressResult = !s_fastFile_prStressResult;
  }
  if ( v10 )
LABEL_43:
    v11 = 1;
  else
LABEL_42:
    v11 = 0;
  Com_FastFile_SetGameCommonModulesPaused(v11);
}

/*
==============
Com_FastFile_UpdateRequests_SyncGameLoad
==============
*/
void Com_FastFile_UpdateRequests_SyncGameLoad(const char *syncLevelName)
{
  char ActiveGameMode; 
  unsigned int i; 
  ComFastFileLoadModule *RootModule; 
  const char *DebugName; 

  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  if ( !ActiveGameMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 1786, ASSERT_TYPE_ASSERT, "(gameMode != GameModeType::NONE)", "%s\n\tMust have an active game mode before we can sync on fast file load", "gameMode != GameModeType::NONE") )
    __debugbreak();
  if ( !syncLevelName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 1658, ASSERT_TYPE_ASSERT, "(syncZoneName)", (const char *)&queryFormat, "syncZoneName") )
    __debugbreak();
  ComFastFileLoadModule::SetFailureMode(&s_fastfileLoadModules[9], REQUIRED);
  if ( ActiveGameMode == 2 )
    Com_Fastfile_UpdateLevelParentMpInternal(&s_fastfileLoadModules[9], syncLevelName);
  else
    ComFastFileLoadModule::ClearRequestedZones(&s_fastfileLoadModules[9]);
  if ( !syncLevelName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 1749, ASSERT_TYPE_ASSERT, "(syncZoneName)", (const char *)&queryFormat, "syncZoneName") )
    __debugbreak();
  if ( ActiveGameMode != 2 && ActiveGameMode != 3 )
    syncLevelName = (char *)&queryFormat.fmt + 3;
  if ( !ComFastFileLoadModule::RequestEqualsName(&s_fastfileLoadModules[10], syncLevelName) )
  {
    Com_Printf(30, "Com_Fastfile_UpdateLevelPreloadRequest_SyncGameLoad: Clearing preload module\n");
    ComFastFileLoadModule::ClearRequestedZones(&s_fastfileLoadModules[10]);
  }
  Com_FastFile_SetGameGlobalModulesPaused(0);
  Com_FastFile_SetGameCommonModulesPaused(0);
  for ( i = 0; i < 3; ++i )
  {
    RootModule = Com_FastFile_GetRootModule((const ComFastFileCategory)(unsigned __int8)i);
    if ( ComFastFileLoadModule::TestAnyModulePaused(RootModule) )
    {
      DebugName = ComFastFileLoadModule::GetDebugName(RootModule);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 2324, ASSERT_TYPE_ASSERT, "(!rootModule->TestAnyModulePaused())", "%s\n\tPaused module within the '%s' list will cause it to fail to load.", "!rootModule->TestAnyModulePaused()", DebugName) )
        __debugbreak();
    }
  }
}

/*
==============
Com_FastFile_ValidateModuleInitialization
==============
*/
char Com_FastFile_ValidateModuleInitialization()
{
  unsigned int i; 
  ComFastFileLoadModule *RootModule; 
  const char *DebugName; 
  const char *v3; 
  unsigned int j; 
  ComFastFileLoadModule *v5; 
  const char *v6; 
  const char *v7; 
  unsigned int k; 
  ComFastFileLoadModule *v9; 
  ComFastFileLoadModule *m; 
  const char *v11; 
  __int64 v13; 
  __int64 v14; 

  for ( i = 0; i < 3; ++i )
  {
    RootModule = Com_FastFile_GetRootModule((const ComFastFileCategory)(unsigned __int8)i);
    if ( !RootModule )
    {
      LODWORD(v14) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 1953, ASSERT_TYPE_ASSERT, "(module != nullptr)", "%s\n\tRoot module not setup for category %i", "module != nullptr", v14) )
        __debugbreak();
    }
    if ( RootModule->m_parent )
    {
      DebugName = ComFastFileLoadModule::GetDebugName(RootModule);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3000, ASSERT_TYPE_ASSERT, "(m_parent == nullptr)", "%s\n\tRoot module with parent (%s)", "m_parent == nullptr", DebugName) )
        __debugbreak();
    }
    if ( !RootModule->m_childModule )
    {
      v3 = ComFastFileLoadModule::GetDebugName(RootModule);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3001, ASSERT_TYPE_ASSERT, "(m_childModule)", "%s\n\tRoot module with no child (%s)", "m_childModule", v3) )
        __debugbreak();
    }
  }
  for ( j = 0; j < 0xB; ++j )
  {
    v5 = &s_fastfileLoadModules[(unsigned __int8)j];
    if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 1960, ASSERT_TYPE_ASSERT, "(module)", (const char *)&queryFormat, "module") )
      __debugbreak();
    if ( !v5->m_zoneFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3007, ASSERT_TYPE_ASSERT, "(m_zoneFlags)", "%s\n\tNo zone flags", "m_zoneFlags") )
      __debugbreak();
    v6 = ComFastFileLoadModule::GetDebugName(v5);
    if ( !v6 )
    {
      LOBYTE(v6) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3008, ASSERT_TYPE_ASSERT, "(GetDebugName())", "%s\n\tNo debug name", "GetDebugName()");
      if ( (_BYTE)v6 )
        __debugbreak();
    }
    if ( !v5->m_parent && !v5->m_childModule )
    {
      v7 = ComFastFileLoadModule::GetDebugName(v5);
      LOBYTE(v6) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3009, ASSERT_TYPE_ASSERT, "(m_parent || m_childModule)", "%s\n\tOrphan fast file module '%s'", "m_parent || m_childModule", v7);
      if ( (_BYTE)v6 )
        __debugbreak();
    }
    for ( k = 0; k < j; ++k )
    {
      if ( (unsigned __int8)k >= 0xBu )
      {
        LODWORD(v14) = 11;
        LODWORD(v13) = (unsigned __int8)k;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 489, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<uint>( moduleType ) ) < (unsigned)( static_cast<uint>( ComFastFileModuleType::COUNT ) )", "static_cast<uint>( moduleType ) doesn't index static_cast<uint>( ComFastFileModuleType::COUNT )\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      LOBYTE(v6) = k;
      v9 = &s_fastfileLoadModules[(unsigned __int8)k];
      if ( !v9 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 1967, ASSERT_TYPE_ASSERT, "(higherPriorityModule)", (const char *)&queryFormat, "higherPriorityModule") )
          __debugbreak();
        LOBYTE(v6) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3020, ASSERT_TYPE_ASSERT, "(higherPriorityModule != nullptr)", (const char *)&queryFormat, "higherPriorityModule != nullptr");
        if ( (_BYTE)v6 )
          __debugbreak();
      }
      for ( m = v5->m_childModule; m; m = m->m_childModule )
      {
        if ( m == v9 )
        {
          v11 = ComFastFileLoadModule::GetDebugName(v5);
          LOBYTE(v6) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3026, ASSERT_TYPE_ASSERT, "(module != higherPriorityModule)", "%s\n\tLoad order is wrong, higher priority load module is a child of '%s'", "module != higherPriorityModule", v11);
          if ( (_BYTE)v6 )
            __debugbreak();
        }
      }
    }
  }
  return (char)v6;
}

/*
==============
Com_Fastfile_ClearExternalSystemsForSync
==============
*/
bool Com_Fastfile_ClearExternalSystemsForSync()
{
  bool result; 

  if ( !Com_FrontEndScene_IsDisabledState() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 2462, ASSERT_TYPE_ASSERT, "(Com_FrontEndScene_IsDisabledState())", "%s\n\tExternal system may interfere with the DB sync", "Com_FrontEndScene_IsDisabledState()") )
    __debugbreak();
  if ( Com_FrontEnd_IsInFrontEnd() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 2464, ASSERT_TYPE_ASSERT, "(!Com_FrontEnd_IsInFrontEnd())", "%s\n\tIt's expected that we're not in the front-end state at this point", "!Com_FrontEnd_IsInFrontEnd()") )
    __debugbreak();
  if ( CL_UIStreaming_IsRunningImages() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 2467, ASSERT_TYPE_ASSERT, "(!CL_UIStreaming_IsRunningImages())", "%s\n\tMust disable UI streaming before the DB sync", "!CL_UIStreaming_IsRunningImages()") )
    __debugbreak();
  CL_Streaming_CancelAllLoadingRequests();
  CL_TransientsMP_StallUntilCompletion();
  if ( CL_UIStreaming_NeedsDatabaseAccess() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 2475, ASSERT_TYPE_ASSERT, "(!CL_UIStreaming_NeedsDatabaseAccess())", "%s\n\tImage streaming may interfere with the DB sync", "!CL_UIStreaming_NeedsDatabaseAccess()") )
    __debugbreak();
  if ( CL_TransientsMP_NeedsProcessing() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 2479, ASSERT_TYPE_ASSERT, "(!CL_TransientsMP_NeedsProcessing())", "%s\n\tExternal system may interfere with the DB sync", "!CL_TransientsMP_NeedsProcessing()") )
    __debugbreak();
  result = Com_FastFile_ShouldPauseCommonFastfiles();
  if ( result )
  {
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 2482, ASSERT_TYPE_ASSERT, "(!Com_FastFile_ShouldPauseCommonFastfiles())", "%s\n\tExternal systems will interfere with the DB sync", "!Com_FastFile_ShouldPauseCommonFastfiles()");
    if ( result )
      __debugbreak();
  }
  return result;
}

/*
==============
Com_Fastfile_ErrorCleanup
==============
*/
void Com_Fastfile_ErrorCleanup(void)
{
  s_fastfileBackToFrontendFrame = 0;
}

/*
==============
Com_Fastfile_ProcessLoadRequests
==============
*/

char __fastcall Com_Fastfile_ProcessLoadRequests(double _XMM0_8)
{
  unsigned int v1; 
  int v2; 
  unsigned int i; 
  ComFastFileLoadModule *v4; 
  const char *p_m_activeZones; 
  unsigned int v6; 
  ComFastFileZoneList *v7; 
  unsigned int v8; 
  const char *name; 
  const char *v10; 
  const char *v11; 
  const char *DebugName; 
  __int64 j; 
  unsigned int v14; 
  ComFastFileZoneList *v15; 
  unsigned int Count; 
  unsigned int v17; 
  ComFastFileZoneList *v18; 
  unsigned int v19; 
  const char *v20; 
  const char *v21; 
  const char *v22; 
  unsigned __int64 zoneSizeEstimate; 
  __int64 zoneFlags; 
  unsigned int currentRequestCount[4]; 
  unsigned __int64 requestSizeEstimates[20]; 
  DB_FastfileInfo requests; 

  v1 = 0;
  v2 = 0;
  currentRequestCount[0] = 0;
  for ( i = 0; i < 0xB; ++i )
  {
    v4 = &s_fastfileLoadModules[(unsigned __int8)i];
    if ( ((v4->m_zoneFlags & 0x100000) == 0 || !v1) && v4->m_databaseRequest[0] == 5 )
    {
      p_m_activeZones = (const char *)&v4->m_activeZones;
      v6 = 0;
      v7 = &v4->m_activeZones;
      while ( v7->m_zones[0].name[0] )
      {
        ++v6;
        v7 = (ComFastFileZoneList *)((char *)v7 + 72);
        if ( v6 >= 3 )
        {
          v6 = 3;
          break;
        }
      }
      if ( v6 )
      {
        v8 = v6 - 1;
        if ( v8 )
        {
          name = v4->m_activeZones.m_zones[1].name;
          v10 = (const char *)&v4->m_activeZones;
          if ( v8 == 1 )
            v11 = j_va("%s,%s", v10, name);
          else
            v11 = j_va("%s,%s,%s", v10, name, v4->m_activeZones.m_zones[2].name);
        }
        else
        {
          v11 = (const char *)&v4->m_activeZones;
        }
      }
      else
      {
        v11 = "<empty>";
      }
      Com_Printf(30, "ComFastFile: Load Request: %s\n", v11);
      DebugName = ComFastFileLoadModule::GetDebugName(&s_fastfileLoadModules[(unsigned __int8)i]);
      ComFastFileLoadModule::ValidateDynamicLoadOrder(&s_fastfileLoadModules[(unsigned __int8)i], DebugName);
      v2 |= v4->m_zoneFlags;
      for ( j = 0i64; ; j = (unsigned int)(j + 1) )
      {
        v14 = 0;
        v15 = &v4->m_activeZones;
        while ( v15->m_zones[0].name[0] )
        {
          ++v14;
          v15 = (ComFastFileZoneList *)((char *)v15 + 72);
          if ( v14 >= 3 )
          {
            v14 = 3;
            break;
          }
        }
        if ( (unsigned int)j >= v14 )
          break;
        Count = ComFastFileZoneList::GetCount(&v4->m_activeZones);
        if ( (unsigned int)j >= Count )
        {
          LODWORD(zoneFlags) = Count;
          LODWORD(zoneSizeEstimate) = j;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile_zonelist.h", 145, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( GetCount() )", "index doesn't index GetCount()\n\t%i not in [0, %i)", zoneSizeEstimate, zoneFlags) )
            __debugbreak();
        }
        Com_FastFile_AddLoadZone(&requests, requestSizeEstimates, currentRequestCount, 0x14u, &p_m_activeZones[72 * j], *(_QWORD *)&p_m_activeZones[72 * j + 64], v4->m_zoneFlags, (const DB_FastFileFailureMode)v4->m_failureMode);
      }
      if ( v4->m_databaseRequest[0] )
      {
        v17 = 0;
        v18 = &v4->m_activeZones;
        while ( v18->m_zones[0].name[0] )
        {
          ++v17;
          v18 = (ComFastFileZoneList *)((char *)v18 + 72);
          if ( v17 >= 3 )
          {
            v17 = 3;
            break;
          }
        }
        if ( v17 )
        {
          v19 = v17 - 1;
          if ( v19 )
          {
            v20 = v4->m_activeZones.m_zones[1].name;
            v21 = (const char *)&v4->m_activeZones;
            if ( v19 == 1 )
              p_m_activeZones = j_va("%s,%s", v21, v20);
            else
              p_m_activeZones = j_va("%s,%s,%s", v21, v20, v4->m_activeZones.m_zones[2].name);
          }
        }
        else
        {
          p_m_activeZones = "<empty>";
        }
        v22 = ComFastFileLoadModule::GetDebugName(&s_fastfileLoadModules[(unsigned __int8)i]);
        Com_Printf(30, "ComFastFile: Request Change: %s -> %s (%s: %s)'\n", S_REQUEST_NAMES[(unsigned __int8)v4->m_databaseRequest[0]], S_REQUEST_NAMES[0], v22, p_m_activeZones);
      }
      v1 = currentRequestCount[0];
      v4->m_databaseRequest[0] = 0;
    }
  }
  if ( !v1 )
    return 0;
  __rdtsc();
  LoadBar_EstimateFastfiles(&requests, requestSizeEstimates, v1, 0i64, 0i64);
  SI_SuspendInstall();
  DB_LoadFastfiles(&requests, v1, 2u, 0);
  __rdtsc();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rax
    vmulsd  xmm1, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
    vcvtsd2ss xmm2, xmm1, xmm1
    vcvtss2sd xmm3, xmm2, xmm2
    vmovq   r9, xmm3
  }
  Com_Printf(30, "ComFastFile: LoadZones (%i) took %f ms\n", v1, *(double *)&_XMM3);
  return 1;
}

/*
==============
Com_Fastfile_ProcessResumeRequests
==============
*/

char __fastcall Com_Fastfile_ProcessResumeRequests(double _XMM0_8)
{
  unsigned int v1; 
  unsigned int v2; 
  unsigned int i; 
  ComFastFileLoadModule *v4; 
  const char *p_m_activeZones; 
  unsigned int v6; 
  ComFastFileZoneList *v7; 
  unsigned int v8; 
  const char *name; 
  const char *v10; 
  const char *v11; 
  const char *DebugName; 
  unsigned int j; 
  unsigned int v14; 
  ComFastFileZoneList *v15; 
  unsigned int Count; 
  unsigned int v17; 
  ComFastFileZoneList *v18; 
  unsigned int v19; 
  const char *v20; 
  const char *v21; 
  const char *v22; 
  unsigned __int64 zoneSizeEstimate; 
  __int64 zoneFlags; 
  unsigned int currentRequestCount; 
  DB_FastfileInfo zoneInfo; 
  unsigned __int64 requestSizeEstimates[20]; 
  DB_FastfileInfo requests; 

  v1 = 0;
  currentRequestCount = 0;
  v2 = 0;
  for ( i = 0; i < 0xB; ++i )
  {
    v4 = &s_fastfileLoadModules[(unsigned __int8)i];
    if ( ((v4->m_zoneFlags & 0x100000) == 0 || !v1) && v4->m_databaseRequest[0] == 4 )
    {
      p_m_activeZones = (const char *)&v4->m_activeZones;
      v6 = 0;
      v7 = &v4->m_activeZones;
      while ( v7->m_zones[0].name[0] )
      {
        ++v6;
        v7 = (ComFastFileZoneList *)((char *)v7 + 72);
        if ( v6 >= 3 )
        {
          v6 = 3;
          break;
        }
      }
      if ( v6 )
      {
        v8 = v6 - 1;
        if ( v8 )
        {
          name = v4->m_activeZones.m_zones[1].name;
          v10 = (const char *)&v4->m_activeZones;
          if ( v8 == 1 )
            v11 = j_va("%s,%s", v10, name);
          else
            v11 = j_va("%s,%s,%s", v10, name, v4->m_activeZones.m_zones[2].name);
        }
        else
        {
          v11 = (const char *)&v4->m_activeZones;
        }
      }
      else
      {
        v11 = "<empty>";
      }
      Com_Printf(30, "ComFastFile: Load Request: %s\n", v11);
      DebugName = ComFastFileLoadModule::GetDebugName(&s_fastfileLoadModules[(unsigned __int8)i]);
      ComFastFileLoadModule::ValidateDynamicLoadOrder(&s_fastfileLoadModules[(unsigned __int8)i], DebugName);
      v2 |= v4->m_zoneFlags;
      for ( j = 0; ; ++j )
      {
        v14 = 0;
        v15 = &v4->m_activeZones;
        while ( v15->m_zones[0].name[0] )
        {
          ++v14;
          v15 = (ComFastFileZoneList *)((char *)v15 + 72);
          if ( v14 >= 3 )
          {
            v14 = 3;
            break;
          }
        }
        if ( j >= v14 )
          break;
        Count = ComFastFileZoneList::GetCount(&v4->m_activeZones);
        if ( j >= Count )
        {
          LODWORD(zoneFlags) = Count;
          LODWORD(zoneSizeEstimate) = j;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile_zonelist.h", 145, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( GetCount() )", "index doesn't index GetCount()\n\t%i not in [0, %i)", zoneSizeEstimate, zoneFlags) )
            __debugbreak();
        }
        Com_FastFile_AddLoadZone(&requests, requestSizeEstimates, &currentRequestCount, 0x14u, &p_m_activeZones[72 * j], *(_QWORD *)&p_m_activeZones[72 * j + 64], v4->m_zoneFlags, (const DB_FastFileFailureMode)v4->m_failureMode);
      }
      if ( v4->m_databaseRequest[0] )
      {
        v17 = 0;
        v18 = &v4->m_activeZones;
        while ( v18->m_zones[0].name[0] )
        {
          ++v17;
          v18 = (ComFastFileZoneList *)((char *)v18 + 72);
          if ( v17 >= 3 )
          {
            v17 = 3;
            break;
          }
        }
        if ( v17 )
        {
          v19 = v17 - 1;
          if ( v19 )
          {
            v20 = v4->m_activeZones.m_zones[1].name;
            v21 = (const char *)&v4->m_activeZones;
            if ( v19 == 1 )
              p_m_activeZones = j_va("%s,%s", v21, v20);
            else
              p_m_activeZones = j_va("%s,%s,%s", v21, v20, v4->m_activeZones.m_zones[2].name);
          }
        }
        else
        {
          p_m_activeZones = "<empty>";
        }
        v22 = ComFastFileLoadModule::GetDebugName(&s_fastfileLoadModules[(unsigned __int8)i]);
        Com_Printf(30, "ComFastFile: Request Change: %s -> %s (%s: %s)'\n", S_REQUEST_NAMES[(unsigned __int8)v4->m_databaseRequest[0]], S_REQUEST_NAMES[0], v22, p_m_activeZones);
      }
      v1 = currentRequestCount;
      v4->m_databaseRequest[0] = 0;
    }
  }
  if ( !v1 )
    return 0;
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 817, ASSERT_TYPE_ASSERT, "(zoneFlags)", (const char *)&queryFormat, "zoneFlags") )
    __debugbreak();
  zoneInfo.name = NULL;
  zoneInfo.zoneFlags = v2;
  *(_QWORD *)&zoneInfo.failureMode = 0i64;
  __rdtsc();
  LoadBar_EstimateFastfiles(&requests, requestSizeEstimates, v1, 0i64, 0i64);
  DB_UnpauseLoadFastfiles(&zoneInfo, 1u);
  __rdtsc();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rax
    vmulsd  xmm1, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
    vcvtsd2ss xmm2, xmm1, xmm1
    vcvtss2sd xmm3, xmm2, xmm2
    vmovq   r9, xmm3
  }
  Com_Printf(30, "ComFastFile: ResumeZones (%x) took %f ms\n", v2, *(double *)&_XMM3);
  return 1;
}

/*
==============
Com_Fastfile_SetupCommonModules
==============
*/
void Com_Fastfile_SetupCommonModules()
{
  const char *DebugText; 
  const char *DebugName; 
  const char *v2; 
  const char *v3; 
  const char *v4; 
  const char *v5; 
  const char *v6; 
  const char *v7; 
  ComFastFileLoadModule *v8; 
  ComFastFileLoadModule *m_childModule; 
  ComFastFileLoadModule *v10; 
  ComFastFileLoadModule *v11; 

  if ( !ComFastFileLoadModule::RequestEqualsName(&s_fastfileLoadModules[2], "common") )
  {
    DebugText = ComFastFileZoneList::GetDebugText(&s_fastfileLoadModules[2].m_requestedZones);
    DebugName = ComFastFileLoadModule::GetDebugName(&s_fastfileLoadModules[2]);
    Com_Printf(30, "ComFastFile: (%s) SetRequestedZone: '%s' (was '%s')\n", DebugName, "common", DebugText);
  }
  s_fastfileLoadModules[2].m_requestedZones.m_zones[0].name[0] = 0;
  s_fastfileLoadModules[2].m_requestedZones.m_zones[1].name[0] = 0;
  s_fastfileLoadModules[2].m_requestedZones.m_zones[2].name[0] = 0;
  ComFastFileZoneList::Add(&s_fastfileLoadModules[2].m_requestedZones, "common", 0x14000000ui64);
  if ( !ComFastFileLoadModule::RequestEqualsName(&s_fastfileLoadModules[1], "global") )
  {
    v2 = ComFastFileZoneList::GetDebugText(&s_fastfileLoadModules[1].m_requestedZones);
    v3 = ComFastFileLoadModule::GetDebugName(&s_fastfileLoadModules[1]);
    Com_Printf(30, "ComFastFile: (%s) SetRequestedZone: '%s' (was '%s')\n", v3, "global", v2);
  }
  s_fastfileLoadModules[1].m_requestedZones.m_zones[0].name[0] = 0;
  s_fastfileLoadModules[1].m_requestedZones.m_zones[1].name[0] = 0;
  s_fastfileLoadModules[1].m_requestedZones.m_zones[2].name[0] = 0;
  ComFastFileZoneList::Add(&s_fastfileLoadModules[1].m_requestedZones, "global", 0x900000ui64);
  if ( !ComFastFileLoadModule::RequestEqualsName(s_fastfileLoadModules, "ui_boot") )
  {
    v4 = ComFastFileZoneList::GetDebugText(&s_fastfileLoadModules[0].m_requestedZones);
    v5 = ComFastFileLoadModule::GetDebugName(s_fastfileLoadModules);
    Com_Printf(30, "ComFastFile: (%s) SetRequestedZone: '%s' (was '%s')\n", v5, "ui_boot", v4);
  }
  s_fastfileLoadModules[0].m_requestedZones.m_zones[0].name[0] = 0;
  s_fastfileLoadModules[0].m_requestedZones.m_zones[1].name[0] = 0;
  s_fastfileLoadModules[0].m_requestedZones.m_zones[2].name[0] = 0;
  ComFastFileZoneList::Add(&s_fastfileLoadModules[0].m_requestedZones, "ui_boot", 0xC00000ui64);
  if ( !ComFastFileLoadModule::RequestEqualsName(&s_fastfileLoadModules[3], "ui") )
  {
    v6 = ComFastFileZoneList::GetDebugText(&s_fastfileLoadModules[3].m_requestedZones);
    v7 = ComFastFileLoadModule::GetDebugName(&s_fastfileLoadModules[3]);
    Com_Printf(30, "ComFastFile: (%s) SetRequestedZone: '%s' (was '%s')\n", v7, "ui", v6);
  }
  s_fastfileLoadModules[3].m_requestedZones.m_zones[0].name[0] = 0;
  s_fastfileLoadModules[3].m_requestedZones.m_zones[1].name[0] = 0;
  s_fastfileLoadModules[3].m_requestedZones.m_zones[2].name[0] = 0;
  ComFastFileZoneList::Add(&s_fastfileLoadModules[3].m_requestedZones, "ui", 0xA000000ui64);
  v8 = s_fastfileRootModules[0];
  if ( !s_fastfileRootModules[0] )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 481, ASSERT_TYPE_ASSERT, "(s_fastfileRootModules[static_cast<uint>( category )] != nullptr)", (const char *)&queryFormat, "s_fastfileRootModules[static_cast<uint>( category )] != nullptr") )
      __debugbreak();
    v8 = s_fastfileRootModules[0];
  }
  ComFastFileLoadModule::SetModuleActive(v8, 1);
  m_childModule = v8->m_childModule;
  if ( m_childModule )
    ComFastFileLoadModule::SetModuleListActive(m_childModule, 1);
  v10 = s_fastfileRootModules[2];
  if ( !s_fastfileRootModules[2] )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 481, ASSERT_TYPE_ASSERT, "(s_fastfileRootModules[static_cast<uint>( category )] != nullptr)", (const char *)&queryFormat, "s_fastfileRootModules[static_cast<uint>( category )] != nullptr") )
      __debugbreak();
    v10 = s_fastfileRootModules[2];
  }
  ComFastFileLoadModule::SetModuleActive(v10, 1);
  v11 = v10->m_childModule;
  if ( v11 )
    ComFastFileLoadModule::SetModuleListActive(v11, 1);
}

/*
==============
Com_Fastfile_UpdateLevelParentMpInternal
==============
*/
void Com_Fastfile_UpdateLevelParentMpInternal(ComFastFileLoadModule *commonLevel, const char *zoneName)
{
  const dvar_t *v4; 
  const char *string; 
  const char *v6; 
  bool IsAltLaunchMode; 

  if ( !commonLevel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 1619, ASSERT_TYPE_ASSERT, "(commonLevel)", (const char *)&queryFormat, "commonLevel") )
    __debugbreak();
  if ( !zoneName )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 1620, ASSERT_TYPE_ASSERT, "(zoneName)", (const char *)&queryFormat, "zoneName") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 1586, ASSERT_TYPE_ASSERT, "(zoneName)", (const char *)&queryFormat, "zoneName") )
      __debugbreak();
  }
  if ( !s_fastfile_mpLevelParentsTable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 1587, ASSERT_TYPE_ASSERT, "(s_fastfile_mpLevelParentsTable)", (const char *)&queryFormat, "s_fastfile_mpLevelParentsTable") )
    __debugbreak();
  v4 = DCONST_DVARSTR_com_parentFastfileoverride;
  if ( !DCONST_DVARSTR_com_parentFastfileoverride && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_parentFastfileoverride") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  string = v4->current.string;
  if ( !string || !*string )
  {
    v6 = StringTable_Lookup(s_fastfile_mpLevelParentsTable, 0, zoneName, 1);
    string = v6;
    if ( !v6 || !*v6 )
    {
      IsAltLaunchMode = Com_FastFile_IsAltLaunchMode();
      string = "common_core_alt_mp";
      if ( !IsAltLaunchMode )
        string = "common_core_mp";
    }
  }
  ComFastFileLoadModule::SetRequestedZone(commonLevel, string, 0x8200000ui64);
}

/*
==============
Com_Fastfile_UpdateLevelPreloadRequest
==============
*/
void Com_Fastfile_UpdateLevelPreloadRequest(GameModeType gameMode)
{
  char v1; 
  char v2; 
  bool v3; 
  unsigned __int64 v4; 
  const char *string; 
  const dvar_t *v6; 
  int v7; 
  const dvar_t *v8; 

  v1 = s_fastfileLoadModules[6].m_currentState[0];
  v2 = gameMode;
  if ( s_fastfileLoadModules[6].m_currentState[0] == 2 )
  {
    if ( !ComFastFileLoadModule::IsRestartRequired(&s_fastfileLoadModules[6]) )
      goto LABEL_9;
    v1 = s_fastfileLoadModules[6].m_currentState[0];
  }
  if ( !v1 )
  {
    if ( !ComFastFileLoadModule::IsLoadStartupRequired(&s_fastfileLoadModules[6]) )
      goto LABEL_9;
    v1 = s_fastfileLoadModules[6].m_currentState[0];
  }
  if ( v1 != 4 || ComFastFileLoadModule::IsNewZoneRequested(&s_fastfileLoadModules[6]) )
    goto LABEL_35;
LABEL_9:
  if ( s_fastfileLoadModules[6].m_databaseRequest[0] )
  {
LABEL_35:
    v4 = 0i64;
    string = (char *)&queryFormat.fmt + 3;
    goto LABEL_36;
  }
  v3 = Com_GameMode_SupportsFeature(WEAPON_LADDER_SLIDE);
  if ( v2 == 2 )
  {
    if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 1700, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::LEVEL_PRELOADING ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::LEVEL_PRELOADING )") )
      __debugbreak();
    v8 = DVARSTR_ui_mapname;
    v4 = 576716800i64;
    if ( !DVARSTR_ui_mapname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_mapname") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    string = v8->current.string;
    if ( !string )
    {
      v7 = 1703;
LABEL_32:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", v7, ASSERT_TYPE_ASSERT, "(zoneName)", (const char *)&queryFormat, "zoneName") )
        __debugbreak();
    }
  }
  else
  {
    if ( v2 != 3 )
    {
      if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 1714, ASSERT_TYPE_ASSERT, "(!Com_GameMode_SupportsFeature( Com_GameMode_Feature::LEVEL_PRELOADING ))", (const char *)&queryFormat, "!Com_GameMode_SupportsFeature( Com_GameMode_Feature::LEVEL_PRELOADING )") )
        __debugbreak();
      v4 = 0i64;
      string = (char *)&queryFormat.fmt + 3;
      goto LABEL_34;
    }
    if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 1707, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::LEVEL_PRELOADING ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::LEVEL_PRELOADING )") )
      __debugbreak();
    v6 = DVARSTR_ui_mapname;
    v4 = 1048576000i64;
    if ( !DVARSTR_ui_mapname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_mapname") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    string = v6->current.string;
    if ( !string )
    {
      v7 = 1710;
      goto LABEL_32;
    }
  }
LABEL_34:
  if ( ComFastFileLoadModule::RequestEqualsName(&s_fastfileLoadModules[6], string) )
    goto LABEL_35;
LABEL_36:
  ComFastFileLoadModule::SetRequestedZone(&s_fastfileLoadModules[10], string, v4);
  ComFastFileLoadModule::SetFailureMode(&s_fastfileLoadModules[10], ALLOW_MISSING);
}

/*
==============
Com_Fastfile_UpdateModules
==============
*/
void Com_Fastfile_UpdateModules(double a1)
{
  unsigned int i; 
  ComFastFileDbRequestType v2; 
  unsigned int j; 
  unsigned int k; 
  ComFastFileDbRequestType v5; 
  int v6; 
  ComFastFileDbRequestType v7; 
  __int64 v8; 
  __int64 v9; 

  do
  {
    while ( 1 )
    {
      for ( i = 0; i < 0xB; ++i )
        ComFastFileLoadModule::UpdateSelf(&s_fastfileLoadModules[(unsigned __int8)i]);
      for ( j = 0; j < 0xB; ++j )
      {
        for ( k = 0; k < j; ++k )
        {
          if ( (unsigned __int8)k >= 0xBu )
          {
            LODWORD(v9) = 11;
            LODWORD(v8) = (unsigned __int8)k;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 489, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<uint>( moduleType ) ) < (unsigned)( static_cast<uint>( ComFastFileModuleType::COUNT ) )", "static_cast<uint>( moduleType ) doesn't index static_cast<uint>( ComFastFileModuleType::COUNT )\n\t%i not in [0, %i)", v8, v9) )
              __debugbreak();
          }
          ComFastFileLoadModule::ValidateDynamicRelationships(&s_fastfileLoadModules[(unsigned __int8)j], &s_fastfileLoadModules[(unsigned __int8)k]);
        }
      }
      LOBYTE(v2) = 1;
      if ( !Com_FastFile_ProcessNonLoadRequestsForType(v2) )
      {
        LOBYTE(v5) = 2;
        if ( !Com_FastFile_ProcessNonLoadRequestsForType(v5) )
          break;
      }
    }
    if ( s_fastfileBackToFrontendFrame && Com_FastFile_AreLUIFastfilesStillLoading() )
    {
      if ( CL_TransientsMP_NeedsProcessing() )
        Com_Printf(30, "Com_Fastfile_TransientsNeedProcessing: CL_TransientsMP_NeedsProcessing() true, but we have no UI loaded yet. Force UI first.\n");
    }
    else if ( CL_TransientsMP_NeedsProcessing() )
    {
      return;
    }
    if ( !Sys_IsDatabaseReady() || !DB_AreFastfileLoadsCompleted() )
      break;
    if ( !Stream_DBIsDeferredFastfileUnloadDone() )
    {
      Com_Printf(30, "Com_FastFile_IsDatabaseAvailable: Waiting for Stream_DBIsDeferredFastfileUnloadDone\n");
      return;
    }
    v6 = Sys_Milliseconds();
    LOBYTE(v7) = 3;
    s_fastfile_lastDBAvailableTime = v6;
  }
  while ( Com_FastFile_ProcessNonLoadRequestsForType(v7) || Com_Fastfile_ProcessResumeRequests(a1) || Com_Fastfile_ProcessLoadRequests(a1) );
}

/*
==============
ComFastFileLoadModule::CopyRequestFrom
==============
*/
void ComFastFileLoadModule::CopyRequestFrom(ComFastFileLoadModule *this, const ComFastFileLoadModule *otherModule)
{
  _RBX = otherModule;
  _RDI = this;
  if ( !otherModule && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3365, ASSERT_TYPE_ASSERT, "(otherModule)", (const char *)&queryFormat, "otherModule") )
    __debugbreak();
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx+110h]
    vmovups ymmword ptr [rdi+110h], ymm0
    vmovups ymm1, ymmword ptr [rbx+130h]
    vmovups ymmword ptr [rdi+130h], ymm1
    vmovsd  xmm0, qword ptr [rbx+150h]
    vmovsd  qword ptr [rdi+150h], xmm0
    vmovups ymm0, ymmword ptr [rbx+158h]
    vmovups ymmword ptr [rdi+158h], ymm0
    vmovups ymm1, ymmword ptr [rbx+178h]
    vmovups ymmword ptr [rdi+178h], ymm1
    vmovsd  xmm0, qword ptr [rbx+198h]
    vmovsd  qword ptr [rdi+198h], xmm0
    vmovups ymm0, ymmword ptr [rbx+1A0h]
    vmovups ymmword ptr [rdi+1A0h], ymm0
    vmovups ymm1, ymmword ptr [rbx+1C0h]
    vmovups ymmword ptr [rdi+1C0h], ymm1
    vmovsd  xmm0, qword ptr [rbx+1E0h]
    vmovsd  qword ptr [rdi+1E0h], xmm0
  }
}

/*
==============
ComFastFileLoadModule::Frame_Failed
==============
*/
void ComFastFileLoadModule::Frame_Failed(ComFastFileLoadModule *this)
{
  unsigned __int8 v2; 
  __int64 v3; 
  __int64 v4; 

  if ( !this->m_activeZones.m_zones[0].name[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3718, ASSERT_TYPE_ASSERT, "(!m_activeZones.IsEmpty())", (const char *)&queryFormat, "!m_activeZones.IsEmpty()") )
    __debugbreak();
  v2 = this->m_databaseRequest[0];
  if ( (v2 & 0xFC) != 0 || v2 == 2 )
  {
    LODWORD(v4) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3719, ASSERT_TYPE_ASSERT, "( ( (m_databaseRequest == ComFastFileDbRequestType::CANCEL) || (m_databaseRequest == ComFastFileDbRequestType::UNLOAD) || (m_databaseRequest == ComFastFileDbRequestType::NONE) ) )", "( static_cast<uint>( m_databaseRequest ) ) = %u", v4) )
      __debugbreak();
  }
  v3 = 0i64;
  do
  {
    if ( I_stricmp(this->m_activeZones.m_zones[v3].name, this->m_requestedZones.m_zones[v3].name) )
    {
      ComFastFileLoadModule::Restart(this);
      return;
    }
    v3 = (unsigned int)(v3 + 1);
  }
  while ( (unsigned int)v3 < 3 );
  if ( this->m_failureMode == REQUIRED )
    Com_FastFile_LoadError(&this->m_activeZones, this->m_failureText);
}

/*
==============
ComFastFileLoadModule::Frame_Idle
==============
*/
void ComFastFileLoadModule::Frame_Idle(ComFastFileLoadModule *this)
{
  unsigned __int8 v2; 
  unsigned int v4; 
  int v5; 
  char v6; 
  char v7; 
  unsigned int i; 
  unsigned int v9; 
  ComFastFileZoneList *p_m_requestedZones; 
  DB_FastfileState v11; 
  unsigned int v12; 
  ComFastFileZoneList *v13; 
  int v14; 
  unsigned int v15; 
  ComFastFileZoneEntry *v16; 
  ComFastFileZoneList *v17; 
  unsigned int j; 
  unsigned int v19; 
  ComFastFileZoneList *v20; 
  ComFastFileZoneList *v21; 
  int v22; 
  unsigned int v23; 
  unsigned int v24; 
  ComFastFileZoneEntry *v25; 
  ComFastFileZoneList *v26; 
  const char *DebugName; 
  unsigned __int8 v28; 
  ComFastFileZoneList *p_m_activeZones; 
  unsigned int v30; 
  ComFastFileZoneList *v31; 
  unsigned int v32; 
  ComFastFileZoneEntry *v33; 
  ComFastFileZoneList *v34; 
  const char *v35; 
  unsigned __int8 v36; 
  unsigned int k; 
  unsigned int v38; 
  ComFastFileZoneList *v39; 
  DB_FastfileState v40; 
  unsigned int m_zoneFlags; 
  const char *v42; 
  bool v43; 
  unsigned int v44; 
  const char *v45; 
  ComFastFileZoneList *v46; 
  unsigned int v47; 
  ComFastFileZoneList *v48; 
  unsigned int v49; 
  ComFastFileZoneEntry *v50; 
  ComFastFileZoneList *v51; 
  const char *v52; 
  unsigned __int64 sizeEstimate; 
  ComFastFileZoneList *v62; 
  int v63; 
  ComFastFileZoneEntry *v64; 
  ComFastFileZoneList *v65; 
  const char *v66; 
  char *fmt; 
  __int64 v68; 
  __int64 v69; 
  __int64 v70; 
  char v71; 
  int v73[4]; 

  if ( this->m_activeZones.m_zones[0].name[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3446, ASSERT_TYPE_ASSERT, "(m_activeZones.IsEmpty())", (const char *)&queryFormat, "m_activeZones.IsEmpty()") )
    __debugbreak();
  v2 = this->m_databaseRequest[0];
  if ( (v2 & 0xFC) != 0 || v2 == 2 )
  {
    LODWORD(v68) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3447, ASSERT_TYPE_ASSERT, "( ( (m_databaseRequest == ComFastFileDbRequestType::CANCEL) || (m_databaseRequest == ComFastFileDbRequestType::UNLOAD) || (m_databaseRequest == ComFastFileDbRequestType::NONE) ) )", "( static_cast<uint>( m_databaseRequest ) ) = %u", v68) )
      __debugbreak();
  }
  if ( this->m_currentState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 4001, ASSERT_TYPE_ASSERT, "(m_currentState == LoadState::IDLE)", "%s\n\tOnly meant to be called from the idle state", "m_currentState == LoadState::IDLE") )
    __debugbreak();
  if ( !this->m_moduleActive )
    return;
  if ( ComFastFileLoadModule::HasFailedDependencies(this) )
    return;
  _RDI = &this->m_requestedZones;
  if ( !this->m_requestedZones.m_zones[0].name[0] )
    return;
  v4 = 0;
  v5 = 0;
  while ( !I_stricmp(this->m_activeZones.m_zones[v5].name, _RDI->m_zones[v5].name) )
  {
    if ( (unsigned int)++v5 >= 3 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3455, ASSERT_TYPE_ASSERT, "(IsNewZoneRequested())", (const char *)&queryFormat, "IsNewZoneRequested()") )
        __debugbreak();
      break;
    }
  }
  if ( !_RDI->m_zones[0].name[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3456, ASSERT_TYPE_ASSERT, "(!m_requestedZones.IsEmpty())", (const char *)&queryFormat, "!m_requestedZones.IsEmpty()") )
    __debugbreak();
  v6 = 0;
  v71 = 1;
  v7 = 0;
  for ( i = 0; ; ++i )
  {
    v9 = 0;
    p_m_requestedZones = &this->m_requestedZones;
    while ( p_m_requestedZones->m_zones[0].name[0] )
    {
      ++v9;
      p_m_requestedZones = (ComFastFileZoneList *)((char *)p_m_requestedZones + 72);
      if ( v9 >= 3 )
      {
        v9 = 3;
        break;
      }
    }
    if ( i >= v9 )
      break;
    if ( i >= ComFastFileZoneList::GetCount(_RDI) )
    {
      LODWORD(v69) = ComFastFileZoneList::GetCount(_RDI);
      LODWORD(v68) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile_zonelist.h", 145, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( GetCount() )", "index doesn't index GetCount()\n\t%i not in [0, %i)", v68, v69) )
        __debugbreak();
    }
    v11 = DB_PollFastfileState(_RDI->m_zones[i].name);
    v73[i] = v11;
    if ( v11 == AWAITING_COMMIT )
    {
      if ( !DB_Zones_IsFinishedLoading(_RDI->m_zones[i].name) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3473, ASSERT_TYPE_ASSERT, "( ( DB_Zones_IsFinishedLoading( zoneName ) ) )", "( zoneName ) = %s", _RDI->m_zones[i].name) )
        __debugbreak();
    }
    else
    {
      v71 = 0;
    }
    if ( (unsigned int)(v73[i] - 1) <= 1 )
      v6 = 1;
    else
      v7 = 1;
  }
  if ( v6 )
  {
    if ( v7 )
    {
      v12 = 0;
      v13 = &this->m_requestedZones;
      while ( v13->m_zones[0].name[0] )
      {
        ++v12;
        v13 = (ComFastFileZoneList *)((char *)v13 + 72);
        if ( v12 >= 3 )
        {
          v14 = 3;
          v12 = 3;
          goto LABEL_47;
        }
      }
      v14 = 3;
LABEL_47:
      if ( v12 )
      {
        v15 = v12 - 1;
        if ( v15 )
        {
          v16 = &this->m_requestedZones.m_zones[1];
          if ( v15 == 1 )
            v17 = (ComFastFileZoneList *)j_va("%s,%s", (const char *)_RDI, v16->name);
          else
            v17 = (ComFastFileZoneList *)j_va("%s,%s,%s", (const char *)&this->m_requestedZones, v16->name, this->m_requestedZones.m_zones[2].name);
        }
        else
        {
          v17 = &this->m_requestedZones;
        }
      }
      else
      {
        v17 = (ComFastFileZoneList *)"<empty>";
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3492, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Mixture of isLoadingOrLoaded and notLoadingOrLoaded, for '%s'", (const char *)v17) )
        __debugbreak();
    }
    else
    {
      v14 = 3;
    }
    if ( ComFastFileLoadModule::IsPreloadModuleOrAllZonesNotPreload(this, _RDI) )
    {
      if ( (DB_Zones_GetInUseFlags() & this->m_zoneFlags) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3499, ASSERT_TYPE_ASSERT, "(DB_Zones_GetInUseFlags() & m_zoneFlags)", (const char *)&queryFormat, "DB_Zones_GetInUseFlags() & m_zoneFlags") )
        __debugbreak();
      for ( j = 0; ; ++j )
      {
        v19 = 0;
        v20 = &this->m_requestedZones;
        while ( v20->m_zones[0].name[0] )
        {
          ++v19;
          v20 = (ComFastFileZoneList *)((char *)v20 + 72);
          if ( v19 >= 3 )
          {
            v19 = 3;
            break;
          }
        }
        if ( j >= v19 )
          break;
        v21 = &this->m_requestedZones;
        v22 = v73[j];
        v23 = 0;
        while ( v21->m_zones[0].name[0] )
        {
          ++v23;
          v21 = (ComFastFileZoneList *)((char *)v21 + 72);
          if ( v23 >= 3 )
          {
            v23 = 3;
            break;
          }
        }
        if ( v23 )
        {
          v24 = v23 - 1;
          if ( v24 )
          {
            v25 = &this->m_requestedZones.m_zones[1];
            if ( v24 == 1 )
              v26 = (ComFastFileZoneList *)j_va("%s,%s", (const char *)_RDI, v25->name);
            else
              v26 = (ComFastFileZoneList *)j_va("%s,%s,%s", (const char *)&this->m_requestedZones, v25->name, this->m_requestedZones.m_zones[2].name);
          }
          else
          {
            v26 = &this->m_requestedZones;
          }
        }
        else
        {
          v26 = (ComFastFileZoneList *)"<empty>";
        }
        DebugName = ComFastFileLoadModule::GetDebugName(this);
        LODWORD(fmt) = v22;
        Com_Printf(30, "ComFastFile: (%s) Already loaded '%s' (state %i)\n", DebugName, (const char *)v26, fmt);
      }
      v28 = this->m_databaseRequest[0];
      if ( ((v28 - 1) & 0xFD) != 0 )
      {
        LODWORD(v69) = v28;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3506, ASSERT_TYPE_ASSERT, "((m_databaseRequest == ComFastFileDbRequestType::CANCEL) || (m_databaseRequest == ComFastFileDbRequestType::UNLOAD))", "%s\n\tThe file should have been queued for deletion before we got here. Trying to load the same file multiple times (%i)", "(m_databaseRequest == ComFastFileDbRequestType::CANCEL) || (m_databaseRequest == ComFastFileDbRequestType::UNLOAD)", v69) )
          __debugbreak();
      }
      if ( this->m_databaseRequest[0] )
      {
        p_m_activeZones = &this->m_activeZones;
        v30 = 0;
        v31 = &this->m_activeZones;
        while ( v31->m_zones[0].name[0] )
        {
          ++v30;
          v31 = (ComFastFileZoneList *)((char *)v31 + 72);
          if ( v30 >= 3 )
          {
            v30 = 3;
            break;
          }
        }
        if ( v30 )
        {
          v32 = v30 - 1;
          if ( v32 )
          {
            v33 = &this->m_activeZones.m_zones[1];
            if ( v32 == 1 )
              v34 = (ComFastFileZoneList *)j_va("%s,%s", (const char *)p_m_activeZones, v33->name);
            else
              v34 = (ComFastFileZoneList *)j_va("%s,%s,%s", (const char *)p_m_activeZones, v33->name, this->m_activeZones.m_zones[2].name);
          }
          else
          {
            v34 = &this->m_activeZones;
          }
        }
        else
        {
          v34 = (ComFastFileZoneList *)"<empty>";
        }
        v35 = ComFastFileLoadModule::GetDebugName(this);
        Com_Printf(30, "ComFastFile: Request Change: %s -> %s (%s: %s)'\n", S_REQUEST_NAMES[(unsigned __int8)this->m_databaseRequest[0]], S_REQUEST_NAMES[0], v35, (const char *)v34);
      }
      this->m_databaseRequest[0] = 0;
      if ( !v71 )
        goto LABEL_130;
      v36 = 2;
      this->m_loadProgress = this->LOAD_PROGRESS_FINISHED;
      goto LABEL_131;
    }
  }
  else
  {
    v14 = 3;
  }
  if ( this->m_databaseRequest[0] || this->m_modulePaused )
    return;
  for ( k = 0; ; ++k )
  {
    v38 = 0;
    v39 = &this->m_requestedZones;
    while ( v39->m_zones[0].name[0] )
    {
      ++v38;
      v39 = (ComFastFileZoneList *)((char *)v39 + 72);
      if ( v38 >= 3 )
      {
        v38 = 3;
        break;
      }
    }
    if ( k >= v38 )
      break;
    if ( k >= ComFastFileZoneList::GetCount(_RDI) )
    {
      LODWORD(v69) = ComFastFileZoneList::GetCount(_RDI);
      LODWORD(v68) = k;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile_zonelist.h", 145, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( GetCount() )", "index doesn't index GetCount()\n\t%i not in [0, %i)", v68, v69) )
        __debugbreak();
    }
    v40 = DB_PollFastfileState(_RDI->m_zones[k].name);
    if ( v40 == COMMITTED )
    {
      m_zoneFlags = this->m_zoneFlags;
      v42 = ComFastFileLoadModule::GetDebugName(this);
      LODWORD(v70) = m_zoneFlags;
      v43 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3531, ASSERT_TYPE_ASSERT, "(ffState != DB_FastfileState::PAUSED)", "%s\n\t%s Zone is an unexpected state (%s, %x)", "ffState != DB_FastfileState::PAUSED", v42, _RDI->m_zones[k].name, v70);
    }
    else
    {
      if ( v40 != LOADING )
        continue;
      v44 = this->m_zoneFlags;
      v45 = ComFastFileLoadModule::GetDebugName(this);
      LODWORD(v70) = v44;
      v43 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3532, ASSERT_TYPE_ASSERT, "(ffState != DB_FastfileState::CANCELLED)", "%s\n\t%s Zone is an unexpected state (%s, %x)", "ffState != DB_FastfileState::CANCELLED", v45, _RDI->m_zones[k].name, v70);
    }
    if ( v43 )
      __debugbreak();
  }
  if ( this->m_databaseRequest[0] != 5 )
  {
    v46 = &this->m_activeZones;
    v47 = 0;
    v48 = &this->m_activeZones;
    while ( v48->m_zones[0].name[0] )
    {
      ++v47;
      v48 = (ComFastFileZoneList *)((char *)v48 + 72);
      if ( v47 >= 3 )
      {
        v47 = 3;
        break;
      }
    }
    if ( v47 )
    {
      v49 = v47 - 1;
      if ( v49 )
      {
        v50 = &this->m_activeZones.m_zones[1];
        if ( v49 == 1 )
          v51 = (ComFastFileZoneList *)j_va("%s,%s", (const char *)v46, v50->name);
        else
          v51 = (ComFastFileZoneList *)j_va("%s,%s,%s", (const char *)v46, v50->name, this->m_activeZones.m_zones[2].name);
      }
      else
      {
        v51 = &this->m_activeZones;
      }
    }
    else
    {
      v51 = (ComFastFileZoneList *)"<empty>";
    }
    v52 = ComFastFileLoadModule::GetDebugName(this);
    Com_Printf(30, "ComFastFile: Request Change: %s -> %s (%s: %s)'\n", S_REQUEST_NAMES[(unsigned __int8)this->m_databaseRequest[0]], S_REQUEST_NAMES[5], v52, (const char *)v51);
  }
  this->m_databaseRequest[0] = 5;
LABEL_130:
  v36 = 1;
LABEL_131:
  _R14 = &this->m_activeZones;
  sizeEstimate = this->m_requestedZones.m_zones[2].sizeEstimate;
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi]
    vmovups ymm1, ymmword ptr [rdi+80h]
    vmovups ymmword ptr [r14], ymm0
    vmovups ymm0, ymmword ptr [rdi+20h]
    vmovups ymmword ptr [r14+20h], ymm0
    vmovups ymm0, ymmword ptr [rdi+40h]
    vmovups ymmword ptr [r14+40h], ymm0
    vmovups ymm0, ymmword ptr [rdi+60h]
    vmovups ymmword ptr [r14+60h], ymm0
    vmovups ymmword ptr [r14+80h], ymm1
    vmovups ymm1, ymmword ptr [rdi+0A0h]
    vmovups ymmword ptr [r14+0A0h], ymm1
    vmovups xmm1, xmmword ptr [rdi+0C0h]
    vmovups xmmword ptr [r14+0C0h], xmm1
  }
  this->m_activeZones.m_zones[2].sizeEstimate = sizeEstimate;
  if ( this->m_currentState[0] != v36 )
  {
    v62 = &this->m_activeZones;
    while ( v62->m_zones[0].name[0] )
    {
      ++v4;
      v62 = (ComFastFileZoneList *)((char *)v62 + 72);
      if ( v4 >= 3 )
        goto LABEL_137;
    }
    v14 = v4;
LABEL_137:
    if ( v14 )
    {
      v63 = v14 - 1;
      if ( v63 )
      {
        v64 = &this->m_activeZones.m_zones[1];
        v65 = &this->m_activeZones;
        if ( v63 == 1 )
          _R14 = (ComFastFileZoneList *)j_va("%s,%s", (const char *)v65, v64->name);
        else
          _R14 = (ComFastFileZoneList *)j_va("%s,%s,%s", (const char *)v65, v64->name, this->m_activeZones.m_zones[2].name);
      }
    }
    else
    {
      _R14 = (ComFastFileZoneList *)"<empty>";
    }
    v66 = ComFastFileLoadModule::GetDebugName(this);
    Com_Printf(30, "ComFastFile: State Change: %s -> %s (%s: %s)'\n", S_STATE_NAMES[(unsigned __int8)this->m_currentState[0]], S_STATE_NAMES[v36], v66, (const char *)_R14);
  }
  this->m_currentState[0] = v36;
}

/*
==============
ComFastFileLoadModule::Frame_Loaded
==============
*/
void ComFastFileLoadModule::Frame_Loaded(ComFastFileLoadModule *this)
{
  ComFastFileZoneList *p_m_activeZones; 
  __int64 v3; 
  int v4; 
  unsigned int v5; 
  ComFastFileZoneList *v6; 
  unsigned int v7; 
  const char *name; 
  const char *v9; 
  unsigned int i; 
  unsigned int v11; 
  ComFastFileZoneList *v12; 
  DB_FastfileState v13; 
  unsigned __int8 v14; 
  ComFastFileLoadModule *m_parent; 
  ComFastFileLoadModule *m_dependency; 
  int v17; 
  ComFastFileLoadModule *v18; 
  ComFastFileZoneList *v19; 
  int v20; 
  ComFastFileZoneList *p_m_requestedZones; 
  ComFastFileLoadModule *v22; 
  ComFastFileZoneList *v23; 
  int v24; 
  ComFastFileZoneList *v25; 
  ComFastFileZoneList *v26; 
  int v27; 
  const char *v28; 
  const char *DebugName; 
  __int64 v30; 
  __int64 v31; 

  p_m_activeZones = &this->m_activeZones;
  if ( !this->m_activeZones.m_zones[0].name[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3648, ASSERT_TYPE_ASSERT, "(!m_activeZones.IsEmpty())", (const char *)&queryFormat, "!m_activeZones.IsEmpty()") )
    __debugbreak();
  v3 = 0i64;
  v4 = 3;
  if ( (DB_Zones_GetInUseFlags() & this->m_zoneFlags) == 0 )
  {
    v5 = 0;
    v6 = p_m_activeZones;
    while ( v6->m_zones[0].name[0] )
    {
      ++v5;
      v6 = (ComFastFileZoneList *)((char *)v6 + 72);
      if ( v5 >= 3 )
      {
        v5 = 3;
        break;
      }
    }
    if ( v5 )
    {
      v7 = v5 - 1;
      if ( v7 )
      {
        name = p_m_activeZones->m_zones[1].name;
        if ( v7 == 1 )
          v9 = j_va("%s,%s", (const char *)p_m_activeZones, name);
        else
          v9 = j_va("%s,%s,%s", (const char *)p_m_activeZones, name, p_m_activeZones->m_zones[2].name);
      }
      else
      {
        v9 = (const char *)p_m_activeZones;
      }
    }
    else
    {
      v9 = "<empty>";
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3650, ASSERT_TYPE_ASSERT, "(DB_Zones_GetInUseFlags() & m_zoneFlags)", "%s\n\tZone flags %x missing for zone '%s'", "DB_Zones_GetInUseFlags() & m_zoneFlags", this->m_zoneFlags, v9) )
      __debugbreak();
  }
  for ( i = 0; ; ++i )
  {
    v11 = 0;
    v12 = p_m_activeZones;
    while ( v12->m_zones[0].name[0] )
    {
      ++v11;
      v12 = (ComFastFileZoneList *)((char *)v12 + 72);
      if ( v11 >= 3 )
      {
        v11 = 3;
        break;
      }
    }
    if ( i >= v11 )
      break;
    if ( i >= ComFastFileZoneList::GetCount(p_m_activeZones) )
    {
      LODWORD(v31) = ComFastFileZoneList::GetCount(p_m_activeZones);
      LODWORD(v30) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile_zonelist.h", 145, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( GetCount() )", "index doesn't index GetCount()\n\t%i not in [0, %i)", v30, v31) )
        __debugbreak();
    }
    v13 = DB_PollFastfileState(p_m_activeZones->m_zones[i].name);
    if ( v13 != AWAITING_COMMIT )
    {
      LODWORD(v31) = v13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3658, ASSERT_TYPE_ASSERT, "( state == DB_FastfileState::LOADED )", "%s state is %d", p_m_activeZones->m_zones[i].name, v31) )
        __debugbreak();
    }
    if ( !DB_Zones_IsFinishedLoading(p_m_activeZones->m_zones[i].name) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3659, ASSERT_TYPE_ASSERT, "( ( DB_Zones_IsFinishedLoading( zoneName ) ) )", "( zoneName ) = %s", p_m_activeZones->m_zones[i].name) )
      __debugbreak();
    if ( (this->m_zoneFlags & 0x100000) == 0 && DB_Zones_IsPreloadZoneName(p_m_activeZones->m_zones[i].name) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3660, ASSERT_TYPE_ASSERT, "(IsPreloadModule() || !DB_Zones_IsPreloadZoneName( zoneName ))", (const char *)&queryFormat, "IsPreloadModule() || !DB_Zones_IsPreloadZoneName( zoneName )") )
      __debugbreak();
  }
  v14 = this->m_databaseRequest[0];
  if ( v14 )
  {
    LODWORD(v30) = v14;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3664, ASSERT_TYPE_ASSERT, "( ( m_databaseRequest == ComFastFileDbRequestType::NONE ) )", "( static_cast<uint>( m_databaseRequest ) ) = %u", v30) )
      __debugbreak();
  }
  if ( !this->m_currentState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3982, ASSERT_TYPE_ASSERT, "(m_currentState != LoadState::IDLE)", "%s\n\tShould not be called when already in the idle state", "m_currentState != LoadState::IDLE") )
    __debugbreak();
  if ( this->m_moduleActive )
  {
    m_parent = this->m_parent;
    if ( !m_parent || (m_parent->m_currentState[0] != 4 || ComFastFileLoadModule::IsNewZoneRequested(m_parent)) && !ComFastFileLoadModule::HasFailedDependencies(this->m_parent) )
    {
      m_dependency = this->m_dependency;
      if ( !m_dependency || (m_dependency->m_currentState[0] != 4 || ComFastFileLoadModule::IsNewZoneRequested(m_dependency)) && !ComFastFileLoadModule::HasFailedDependencies(this->m_dependency) )
      {
        v17 = 0;
        while ( !I_stricmp(p_m_activeZones->m_zones[v17].name, this->m_requestedZones.m_zones[v17].name) )
        {
          if ( (unsigned int)++v17 >= 3 )
          {
            if ( this->m_currentState[0] == 2 && this->m_moduleActive )
            {
              v18 = this->m_parent;
              if ( !v18 )
                goto LABEL_67;
              if ( v18->m_currentState[0] == 4 )
              {
                v19 = &v18->m_activeZones;
                v20 = 0;
                p_m_requestedZones = &v18->m_requestedZones;
                while ( !I_stricmp(v19->m_zones[v20].name, p_m_requestedZones->m_zones[v20].name) )
                {
                  if ( (unsigned int)++v20 >= 3 )
                    goto LABEL_63;
                }
                v18 = this->m_parent;
              }
              if ( !ComFastFileLoadModule::HasFailedDependencies(v18) )
              {
LABEL_67:
                v22 = this->m_dependency;
                if ( !v22 )
                  goto LABEL_75;
                if ( v22->m_currentState[0] == 4 )
                {
                  v23 = &v22->m_activeZones;
                  v24 = 0;
                  v25 = &v22->m_requestedZones;
                  while ( !I_stricmp(v23->m_zones[v24].name, v25->m_zones[v24].name) )
                  {
                    if ( (unsigned int)++v24 >= 3 )
                      goto LABEL_63;
                  }
                  v22 = this->m_dependency;
                }
                if ( !ComFastFileLoadModule::HasFailedDependencies(v22) )
                {
LABEL_75:
                  while ( !I_stricmp(p_m_activeZones->m_zones[v3].name, this->m_requestedZones.m_zones[v3].name) )
                  {
                    v3 = (unsigned int)(v3 + 1);
                    if ( (unsigned int)v3 >= 3 )
                      return;
                  }
                }
              }
            }
LABEL_63:
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3674, ASSERT_TYPE_ASSERT, "(IsLoaded())", (const char *)&queryFormat, "IsLoaded()") )
              __debugbreak();
            return;
          }
        }
      }
    }
  }
  if ( this->m_databaseRequest[0] != 3 )
  {
    v26 = p_m_activeZones;
    while ( v26->m_zones[0].name[0] )
    {
      LODWORD(v3) = v3 + 1;
      v26 = (ComFastFileZoneList *)((char *)v26 + 72);
      if ( (unsigned int)v3 >= 3 )
        goto LABEL_84;
    }
    v4 = v3;
LABEL_84:
    if ( v4 )
    {
      v27 = v4 - 1;
      if ( v27 )
      {
        v28 = p_m_activeZones->m_zones[1].name;
        if ( v27 == 1 )
          p_m_activeZones = (ComFastFileZoneList *)j_va("%s,%s", (const char *)p_m_activeZones, v28);
        else
          p_m_activeZones = (ComFastFileZoneList *)j_va("%s,%s,%s", (const char *)p_m_activeZones, v28, p_m_activeZones->m_zones[2].name);
      }
    }
    else
    {
      p_m_activeZones = (ComFastFileZoneList *)"<empty>";
    }
    DebugName = ComFastFileLoadModule::GetDebugName(this);
    Com_Printf(30, "ComFastFile: Request Change: %s -> %s (%s: %s)'\n", S_REQUEST_NAMES[(unsigned __int8)this->m_databaseRequest[0]], S_REQUEST_NAMES[3], DebugName, (const char *)p_m_activeZones);
  }
  this->m_databaseRequest[0] = 3;
  ComFastFileLoadModule::Restart(this);
}

/*
==============
ComFastFileLoadModule::Frame_Loading
==============
*/
void ComFastFileLoadModule::Frame_Loading(ComFastFileLoadModule *this)
{
  unsigned __int8 v3; 
  __int64 v4; 
  char v5; 
  unsigned int v6; 
  unsigned int v7; 
  ComFastFileZoneList *p_m_activeZones; 
  DB_FastfileState v9; 
  const char *v10; 
  int v11; 
  const char *v12; 
  ComFastFileLoadModule *m_parent; 
  ComFastFileLoadModule *m_dependency; 
  ComFastFileDbRequestType v15; 
  ComFastFileLoadModule::LoadState v16; 
  char v17; 
  ComFastFileDbRequestType v18; 
  unsigned __int8 v19; 
  unsigned __int8 v20; 
  __int64 v21; 
  __int64 v22; 

  _RBX = this;
  if ( !this->m_activeZones.m_zones[0].name[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3555, ASSERT_TYPE_ASSERT, "(!m_activeZones.IsEmpty())", (const char *)&queryFormat, "!m_activeZones.IsEmpty()") )
    __debugbreak();
  v3 = _RBX->m_databaseRequest[0];
  if ( (v3 & 0xFA) != 0 || v3 == 1 )
  {
    LODWORD(v21) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3557, ASSERT_TYPE_ASSERT, "( ( (m_databaseRequest == ComFastFileDbRequestType::LOAD) || (m_databaseRequest == ComFastFileDbRequestType::RESUME) || (m_databaseRequest == ComFastFileDbRequestType::NONE) ) )", "( static_cast<uint>( m_databaseRequest ) ) = %u", v21) )
      __debugbreak();
  }
  v4 = 0i64;
  v5 = 1;
  v6 = 0;
  while ( 1 )
  {
    v7 = 0;
    p_m_activeZones = &_RBX->m_activeZones;
    while ( p_m_activeZones->m_zones[0].name[0] )
    {
      ++v7;
      p_m_activeZones = (ComFastFileZoneList *)((char *)p_m_activeZones + 72);
      if ( v7 >= 3 )
      {
        v7 = 3;
        break;
      }
    }
    if ( v6 >= v7 )
      break;
    if ( v6 >= ComFastFileZoneList::GetCount(&_RBX->m_activeZones) )
    {
      LODWORD(v22) = ComFastFileZoneList::GetCount(&_RBX->m_activeZones);
      LODWORD(v21) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile_zonelist.h", 145, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( GetCount() )", "index doesn't index GetCount()\n\t%i not in [0, %i)", v21, v22) )
        __debugbreak();
    }
    v9 = DB_PollFastfileState(_RBX->m_activeZones.m_zones[v6].name);
    if ( v9 == LOADING )
    {
      v10 = "ffState != DB_FastfileState::CANCELLED";
      v11 = 3566;
      v12 = "(ffState != DB_FastfileState::CANCELLED)";
LABEL_22:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", v11, ASSERT_TYPE_ASSERT, v12, (const char *)&queryFormat, v10) )
        __debugbreak();
      goto LABEL_24;
    }
    if ( v9 == COMMITTED )
    {
      if ( _RBX->m_databaseRequest[0] != 4 )
      {
        v10 = "( ffState != DB_FastfileState::PAUSED ) || ( m_databaseRequest == ComFastFileDbRequestType::RESUME )";
        v11 = 3567;
        v12 = "(( ffState != DB_FastfileState::PAUSED ) || ( m_databaseRequest == ComFastFileDbRequestType::RESUME ))";
        goto LABEL_22;
      }
LABEL_24:
      v5 = 0;
      goto LABEL_25;
    }
    if ( v9 != AWAITING_COMMIT )
      goto LABEL_24;
    if ( DB_Zones_IsFinishedLoading(_RBX->m_activeZones.m_zones[v6].name) || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3571, ASSERT_TYPE_ASSERT, "( ( DB_Zones_IsFinishedLoading( zoneName ) ) )", "( zoneName ) = %s", _RBX->m_activeZones.m_zones[v6].name) )
    {
LABEL_25:
      ++v6;
    }
    else
    {
      __debugbreak();
      ++v6;
    }
  }
  if ( !_RBX->m_currentState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3982, ASSERT_TYPE_ASSERT, "(m_currentState != LoadState::IDLE)", "%s\n\tShould not be called when already in the idle state", "m_currentState != LoadState::IDLE") )
    __debugbreak();
  if ( _RBX->m_moduleActive )
  {
    m_parent = _RBX->m_parent;
    if ( !m_parent || (m_parent->m_currentState[0] != 4 || ComFastFileLoadModule::IsNewZoneRequested(m_parent)) && !ComFastFileLoadModule::HasFailedDependencies(_RBX->m_parent) )
    {
      m_dependency = _RBX->m_dependency;
      if ( !m_dependency || (m_dependency->m_currentState[0] != 4 || ComFastFileLoadModule::IsNewZoneRequested(m_dependency)) && !ComFastFileLoadModule::HasFailedDependencies(_RBX->m_dependency) )
      {
        while ( !I_stricmp(_RBX->m_activeZones.m_zones[v4].name, _RBX->m_requestedZones.m_zones[v4].name) )
        {
          v4 = (unsigned int)(v4 + 1);
          if ( (unsigned int)v4 >= 3 )
          {
            if ( v5 && ComFastFileLoadModule::IsPreloadModuleOrAllZonesNotPreload(_RBX, &_RBX->m_activeZones) )
            {
              if ( _RBX->m_databaseRequest[0] == 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3602, ASSERT_TYPE_ASSERT, "(m_databaseRequest != ComFastFileDbRequestType::LOAD)", "%s\n\tFinished loading without processing our load request?", "m_databaseRequest != ComFastFileDbRequestType::LOAD") )
                __debugbreak();
              ComFastFileLoadModule::SetDatabaseRequest(_RBX, NONE);
              LOBYTE(v16) = 2;
              ComFastFileLoadModule::SetState(_RBX, v16);
              _RBX->m_loadProgress = _RBX->LOAD_PROGRESS_FINISHED;
            }
            else
            {
              v17 = _RBX->m_databaseRequest[0];
              if ( _RBX->m_modulePaused )
              {
                if ( v17 == 5 )
                {
                  v18 = NONE;
                  goto LABEL_67;
                }
                if ( v17 == 4 )
                {
                  LOBYTE(v15) = 0;
                }
                else
                {
                  *(double *)&_XMM0 = LoadBar_GetLoadedFraction();
                  __asm { vmovss  dword ptr [rbx+28h], xmm0 }
                  LOBYTE(v15) = 2;
                }
                ComFastFileLoadModule::SetDatabaseRequest(_RBX, v15);
                ComFastFileLoadModule::SetState(_RBX, QOSING);
              }
              else if ( v17 != 5 )
              {
                *(double *)&_XMM0 = LoadBar_GetLoadedFraction();
                __asm { vmovss  dword ptr [rbx+28h], xmm0 }
              }
            }
            return;
          }
        }
      }
    }
  }
  v19 = _RBX->m_databaseRequest[0];
  if ( v19 == 5 )
  {
    v20 = 0;
  }
  else
  {
    if ( (v19 & 0xFB) != 0 )
    {
      LODWORD(v21) = v19;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3590, ASSERT_TYPE_ASSERT, "( ( m_databaseRequest == ComFastFileDbRequestType::RESUME || m_databaseRequest == ComFastFileDbRequestType::NONE ) )", "( static_cast<uint>( m_databaseRequest ) ) = %u", v21) )
        __debugbreak();
    }
    v20 = 1;
    if ( v5 )
      v20 = 3;
  }
  v18 = v20;
LABEL_67:
  ComFastFileLoadModule::SetDatabaseRequest(_RBX, v18);
  ComFastFileLoadModule::Restart(_RBX);
}

/*
==============
ComFastFileLoadModule::Frame_Paused
==============
*/
void ComFastFileLoadModule::Frame_Paused(ComFastFileLoadModule *this)
{
  ComFastFileZoneList *p_m_activeZones; 
  unsigned int v3; 
  unsigned int v4; 
  int v5; 
  unsigned int v6; 
  ComFastFileZoneList *v7; 
  unsigned __int8 v8; 
  ComFastFileLoadModule *m_parent; 
  ComFastFileLoadModule *m_dependency; 
  int v11; 
  ComFastFileDbRequestType v12; 
  unsigned __int8 v13; 
  ComFastFileLoadModule::LoadState v14; 
  unsigned int v15; 
  ComFastFileZoneList *v16; 
  unsigned int v17; 
  const char *name; 
  const char *v19; 
  const char *DebugName; 
  ComFastFileZoneList *v21; 
  int v22; 
  const char *v23; 
  const char *v24; 
  __int64 v25; 
  __int64 v26; 

  p_m_activeZones = &this->m_activeZones;
  if ( !this->m_activeZones.m_zones[0].name[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3681, ASSERT_TYPE_ASSERT, "(!m_activeZones.IsEmpty())", (const char *)&queryFormat, "!m_activeZones.IsEmpty()") )
    __debugbreak();
  v3 = 0;
  v4 = 0;
  v5 = 3;
  while ( 1 )
  {
    v6 = 0;
    v7 = p_m_activeZones;
    while ( v7->m_zones[0].name[0] )
    {
      ++v6;
      v7 = (ComFastFileZoneList *)((char *)v7 + 72);
      if ( v6 >= 3 )
      {
        v6 = 3;
        break;
      }
    }
    if ( v4 >= v6 )
      break;
    if ( v4 >= ComFastFileZoneList::GetCount(p_m_activeZones) )
    {
      LODWORD(v26) = ComFastFileZoneList::GetCount(p_m_activeZones);
      LODWORD(v25) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile_zonelist.h", 145, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( GetCount() )", "index doesn't index GetCount()\n\t%i not in [0, %i)", v25, v26) )
        __debugbreak();
    }
    if ( DB_PollFastfileState(p_m_activeZones->m_zones[v4].name) == LOADING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3687, ASSERT_TYPE_ASSERT, "(DB_PollFastfileState( m_activeZones.GetZone( i ).name ) != DB_FastfileState::CANCELLED)", (const char *)&queryFormat, "DB_PollFastfileState( m_activeZones.GetZone( i ).name ) != DB_FastfileState::CANCELLED") )
      __debugbreak();
    ++v4;
  }
  v8 = this->m_databaseRequest[0];
  if ( (v8 & 0xFD) != 0 )
  {
    LODWORD(v25) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3690, ASSERT_TYPE_ASSERT, "( ( (m_databaseRequest == ComFastFileDbRequestType::PAUSE) || (m_databaseRequest == ComFastFileDbRequestType::NONE) ) )", "( static_cast<uint>( m_databaseRequest ) ) = %u", v25) )
      __debugbreak();
  }
  if ( !this->m_currentState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3982, ASSERT_TYPE_ASSERT, "(m_currentState != LoadState::IDLE)", "%s\n\tShould not be called when already in the idle state", "m_currentState != LoadState::IDLE") )
    __debugbreak();
  if ( this->m_moduleActive )
  {
    m_parent = this->m_parent;
    if ( !m_parent || (m_parent->m_currentState[0] != 4 || ComFastFileLoadModule::IsNewZoneRequested(m_parent)) && !ComFastFileLoadModule::HasFailedDependencies(this->m_parent) )
    {
      m_dependency = this->m_dependency;
      if ( !m_dependency || (m_dependency->m_currentState[0] != 4 || ComFastFileLoadModule::IsNewZoneRequested(m_dependency)) && !ComFastFileLoadModule::HasFailedDependencies(this->m_dependency) )
      {
        v11 = 0;
        while ( !I_stricmp(p_m_activeZones->m_zones[v11].name, this->m_requestedZones.m_zones[v11].name) )
        {
          if ( (unsigned int)++v11 >= 3 )
          {
            if ( !this->m_modulePaused )
            {
              v13 = this->m_databaseRequest[0];
              if ( v13 == 2 )
              {
                LOBYTE(v12) = 0;
              }
              else
              {
                if ( v13 )
                {
                  LODWORD(v25) = v13;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3707, ASSERT_TYPE_ASSERT, "( ( m_databaseRequest == ComFastFileDbRequestType::NONE ) )", "( static_cast<uint>( m_databaseRequest ) ) = %u", v25) )
                    __debugbreak();
                }
                LOBYTE(v12) = 4;
              }
              ComFastFileLoadModule::SetDatabaseRequest(this, v12);
              LOBYTE(v14) = 1;
              ComFastFileLoadModule::SetState(this, v14);
            }
            return;
          }
        }
      }
    }
  }
  v15 = 0;
  v16 = p_m_activeZones;
  while ( v16->m_zones[0].name[0] )
  {
    ++v15;
    v16 = (ComFastFileZoneList *)((char *)v16 + 72);
    if ( v15 >= 3 )
    {
      v15 = 3;
      break;
    }
  }
  if ( v15 )
  {
    v17 = v15 - 1;
    if ( v17 )
    {
      name = p_m_activeZones->m_zones[1].name;
      if ( v17 == 1 )
        v19 = j_va("%s,%s", (const char *)p_m_activeZones, name);
      else
        v19 = j_va("%s,%s,%s", (const char *)p_m_activeZones, name, p_m_activeZones->m_zones[2].name);
    }
    else
    {
      v19 = (const char *)p_m_activeZones;
    }
  }
  else
  {
    v19 = "<empty>";
  }
  DebugName = ComFastFileLoadModule::GetDebugName(this);
  Com_Printf(30, "ComFastFile: (%s) Canceling (Paused) '%s'\n", DebugName, v19);
  if ( this->m_databaseRequest[0] != 1 )
  {
    v21 = p_m_activeZones;
    while ( v21->m_zones[0].name[0] )
    {
      ++v3;
      v21 = (ComFastFileZoneList *)((char *)v21 + 72);
      if ( v3 >= 3 )
        goto LABEL_60;
    }
    v5 = v3;
LABEL_60:
    if ( v5 )
    {
      v22 = v5 - 1;
      if ( v22 )
      {
        v23 = p_m_activeZones->m_zones[1].name;
        if ( v22 == 1 )
          p_m_activeZones = (ComFastFileZoneList *)j_va("%s,%s", (const char *)p_m_activeZones, v23);
        else
          p_m_activeZones = (ComFastFileZoneList *)j_va("%s,%s,%s", (const char *)p_m_activeZones, v23, p_m_activeZones->m_zones[2].name);
      }
    }
    else
    {
      p_m_activeZones = (ComFastFileZoneList *)"<empty>";
    }
    v24 = ComFastFileLoadModule::GetDebugName(this);
    Com_Printf(30, "ComFastFile: Request Change: %s -> %s (%s: %s)'\n", S_REQUEST_NAMES[(unsigned __int8)this->m_databaseRequest[0]], S_REQUEST_NAMES[1], v24, (const char *)p_m_activeZones);
  }
  this->m_databaseRequest[0] = 1;
  ComFastFileLoadModule::Restart(this);
}

/*
==============
ComFastFileLoadModule::GetDebugName
==============
*/
const char *ComFastFileLoadModule::GetDebugName(ComFastFileLoadModule *this)
{
  const char *result; 

  if ( !this->m_debugName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3174, ASSERT_TYPE_ASSERT, "(m_debugName)", (const char *)&queryFormat, "m_debugName") )
    __debugbreak();
  result = this->m_debugName;
  if ( !*result )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3175, ASSERT_TYPE_ASSERT, "(m_debugName[0] != '\\0')", (const char *)&queryFormat, "m_debugName[0] != '\\0'") )
      __debugbreak();
    return this->m_debugName;
  }
  return result;
}

/*
==============
ComFastFileLoadModule::GetDebugRequestName
==============
*/
const char *ComFastFileLoadModule::GetDebugRequestName(ComFastFileLoadModule *this, ComFastFileDbRequestType request)
{
  return S_REQUEST_NAMES[(unsigned __int8)request];
}

/*
==============
ComFastFileLoadModule::GetDebugStateName
==============
*/
const char *ComFastFileLoadModule::GetDebugStateName(ComFastFileLoadModule *this, ComFastFileLoadModule::LoadState state)
{
  return S_STATE_NAMES[(unsigned __int8)state];
}

/*
==============
ComFastFileLoadModule::GetDebugString
==============
*/
bool ComFastFileLoadModule::GetDebugString(ComFastFileLoadModule *this, char *stringbuffer, unsigned int stringBufferLen)
{
  unsigned __int64 v3; 
  ComFastFileZoneList *p_m_activeZones; 
  const char *DebugName; 
  const char *v9; 
  unsigned __int8 v10; 
  int v12; 
  const char *v13; 
  char *fmta; 
  char *fmt; 

  v3 = stringBufferLen;
  _RBX = this;
  if ( !stringbuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3131, ASSERT_TYPE_ASSERT, "(stringbuffer)", (const char *)&queryFormat, "stringbuffer") )
    __debugbreak();
  if ( _RBX->m_currentState[0] )
  {
    p_m_activeZones = &_RBX->m_activeZones;
  }
  else
  {
    p_m_activeZones = &_RBX->m_requestedZones;
    if ( !_RBX->m_requestedZones.m_zones[0].name[0] )
    {
      DebugName = ComFastFileLoadModule::GetDebugName(_RBX);
      goto LABEL_9;
    }
  }
  DebugName = ComFastFileZoneList::GetDebugText(p_m_activeZones);
LABEL_9:
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  v9 = DebugName;
  v10 = _RBX->m_databaseRequest[0];
  __asm { vcvtss2sd xmm0, xmm0, xmm0 }
  if ( v10 )
  {
    __asm { vmovsd  [rsp+48h+fmt], xmm0 }
    v12 = Com_sprintf_truncate(stringbuffer, v3, "%s: %0.2f %s  [%s]", v9, *(double *)&fmta, S_STATE_NAMES[(unsigned __int8)_RBX->m_currentState[0]], S_REQUEST_NAMES[v10]);
  }
  else
  {
    v13 = "%s: %0.2f %s [p]";
    __asm { vmovsd  [rsp+48h+fmt], xmm0 }
    if ( !_RBX->m_modulePaused )
      v13 = "%s: %0.2f %s";
    v12 = Com_sprintf_truncate(stringbuffer, v3, v13, v9, fmt, S_STATE_NAMES[(unsigned __int8)_RBX->m_currentState[0]]);
  }
  return v12 > 0;
}

/*
==============
ComFastFileLoadModule::GetFailureText
==============
*/
char *ComFastFileLoadModule::GetFailureText(ComFastFileLoadModule *this)
{
  char *m_failureText; 

  m_failureText = this->m_failureText;
  if ( this == (ComFastFileLoadModule *)-496i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3182, ASSERT_TYPE_ASSERT, "(m_failureText)", (const char *)&queryFormat, "m_failureText") )
    __debugbreak();
  return m_failureText;
}

/*
==============
ComFastFileLoadModule::GetModuleActive
==============
*/
_BOOL8 ComFastFileLoadModule::GetModuleActive(ComFastFileLoadModule *this)
{
  return this->m_moduleActive;
}

/*
==============
ComFastFileLoadModule::HACK_ClearStateAndRequests
==============
*/
void ComFastFileLoadModule::HACK_ClearStateAndRequests(ComFastFileLoadModule *this)
{
  ComFastFileLoadModule::ClearRequestedZones(this);
  ComFastFileLoadModule::ClearState(this);
}

/*
==============
ComFastFileLoadModule::HasFailedDependencies
==============
*/
bool ComFastFileLoadModule::HasFailedDependencies(ComFastFileLoadModule *this)
{
  ComFastFileLoadModule *m_parent; 
  ComFastFileLoadModule *m_dependency; 
  bool result; 

  m_parent = this->m_parent;
  result = 1;
  if ( !m_parent || (m_parent->m_currentState[0] != 4 || ComFastFileLoadModule::IsNewZoneRequested(m_parent)) && !ComFastFileLoadModule::HasFailedDependencies(this->m_parent) )
  {
    m_dependency = this->m_dependency;
    if ( !m_dependency || (m_dependency->m_currentState[0] != 4 || ComFastFileLoadModule::IsNewZoneRequested(m_dependency)) && !ComFastFileLoadModule::HasFailedDependencies(this->m_dependency) )
      return 0;
  }
  return result;
}

/*
==============
ComFastFileLoadModule::HasLoadedAssets
==============
*/
char ComFastFileLoadModule::HasLoadedAssets(ComFastFileLoadModule *this)
{
  char v1; 
  __int64 v2; 
  ComFastFileZoneList *p_m_requestedZones; 
  unsigned int v4; 
  ComFastFileZoneList *v5; 
  __int64 v7; 
  __int64 v8; 

  v1 = this->m_currentState[0];
  if ( v1 != 2 )
  {
    if ( v1 != 1 )
      return 0;
    v2 = 0i64;
    p_m_requestedZones = &this->m_requestedZones;
    while ( 1 )
    {
      v4 = 0;
      v5 = p_m_requestedZones;
      while ( v5->m_zones[0].name[0] )
      {
        ++v4;
        v5 = (ComFastFileZoneList *)((char *)v5 + 72);
        if ( v4 >= 3 )
        {
          v4 = 3;
          break;
        }
      }
      if ( (unsigned int)v2 >= v4 )
        break;
      if ( (unsigned int)v2 >= ComFastFileZoneList::GetCount(p_m_requestedZones) )
      {
        LODWORD(v8) = ComFastFileZoneList::GetCount(p_m_requestedZones);
        LODWORD(v7) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile_zonelist.h", 145, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( GetCount() )", "index doesn't index GetCount()\n\t%i not in [0, %i)", v7, v8) )
          __debugbreak();
      }
      if ( !DB_HasFastfileFinishedLoadingAssets(p_m_requestedZones->m_zones[v2].name) )
        return 0;
      v2 = (unsigned int)(v2 + 1);
    }
  }
  return 1;
}

/*
==============
ComFastFileLoadModule::Init
==============
*/
void ComFastFileLoadModule::Init(ComFastFileLoadModule *this, unsigned int zoneFlags, ComFastFileLoadModule::TechsetMode techsetMode)
{
  if ( !zoneFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 2902, ASSERT_TYPE_ASSERT, "(zoneFlags)", (const char *)&queryFormat, "zoneFlags") )
    __debugbreak();
  this->m_zoneFlags = zoneFlags;
  this->m_childModule = NULL;
  this->m_parent = NULL;
  this->m_dependency = NULL;
  *(_WORD *)&this->m_moduleActive = 0;
  this->m_failureMode = REQUIRED;
  ComFastFileLoadModule::ClearRequestedZones(this);
  ComFastFileLoadModule::ClearState(this);
}

/*
==============
ComFastFileLoadModule::IsFailed
==============
*/
bool ComFastFileLoadModule::IsFailed(ComFastFileLoadModule *this)
{
  return this->m_currentState[0] == 4 && !ComFastFileLoadModule::IsNewZoneRequested(this);
}

/*
==============
ComFastFileLoadModule::IsIdle
==============
*/
bool ComFastFileLoadModule::IsIdle(ComFastFileLoadModule *this)
{
  return !this->m_currentState[0] && !ComFastFileLoadModule::IsLoadStartupRequired(this);
}

/*
==============
ComFastFileLoadModule::IsLoadStartupRequired
==============
*/
bool ComFastFileLoadModule::IsLoadStartupRequired(ComFastFileLoadModule *this)
{
  if ( this->m_currentState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 4001, ASSERT_TYPE_ASSERT, "(m_currentState == LoadState::IDLE)", "%s\n\tOnly meant to be called from the idle state", "m_currentState == LoadState::IDLE") )
    __debugbreak();
  return this->m_moduleActive && !ComFastFileLoadModule::HasFailedDependencies(this) && this->m_requestedZones.m_zones[0].name[0];
}

/*
==============
ComFastFileLoadModule::IsLoaded
==============
*/
bool ComFastFileLoadModule::IsLoaded(ComFastFileLoadModule *this)
{
  return this->m_currentState[0] == 2 && !ComFastFileLoadModule::IsRestartRequired(this);
}

/*
==============
ComFastFileLoadModule::IsLoading
==============
*/
bool ComFastFileLoadModule::IsLoading(ComFastFileLoadModule *this)
{
  return this->m_currentState[0] == 1 && this->m_databaseRequest[0] != 5;
}

/*
==============
ComFastFileLoadModule::IsModuleListUnloaded
==============
*/
char ComFastFileLoadModule::IsModuleListUnloaded(ComFastFileLoadModule *this)
{
  while ( !this->m_currentState[0] && !this->m_databaseRequest[0] )
  {
    this = this->m_childModule;
    if ( !this )
      return 1;
  }
  return 0;
}

/*
==============
ComFastFileLoadModule::IsNewZoneRequested
==============
*/
bool ComFastFileLoadModule::IsNewZoneRequested(ComFastFileLoadModule *this)
{
  ComFastFileZoneList *p_m_activeZones; 
  __int64 v2; 
  ComFastFileZoneList *p_m_requestedZones; 
  int v4; 

  p_m_activeZones = &this->m_activeZones;
  v2 = 0i64;
  p_m_requestedZones = &this->m_requestedZones;
  while ( 1 )
  {
    v4 = I_stricmp(p_m_activeZones->m_zones[v2].name, p_m_requestedZones->m_zones[v2].name);
    if ( v4 )
      break;
    v2 = (unsigned int)(v2 + 1);
    if ( (unsigned int)v2 >= 3 )
      return v4;
  }
  LOBYTE(v4) = 1;
  return v4;
}

/*
==============
ComFastFileLoadModule::IsParentOrDependency
==============
*/
bool ComFastFileLoadModule::IsParentOrDependency(ComFastFileLoadModule *this, const ComFastFileLoadModule *module)
{
  ComFastFileLoadModule *m_parent; 
  ComFastFileLoadModule *m_dependency; 
  bool result; 

  m_parent = this->m_parent;
  result = 1;
  if ( !m_parent || m_parent != module && !ComFastFileLoadModule::IsParentOrDependency(m_parent, module) )
  {
    m_dependency = this->m_dependency;
    if ( !m_dependency || m_dependency != module && !ComFastFileLoadModule::IsParentOrDependency(m_dependency, module) )
      return 0;
  }
  return result;
}

/*
==============
ComFastFileLoadModule::IsPauseRequired
==============
*/
_BOOL8 ComFastFileLoadModule::IsPauseRequired(ComFastFileLoadModule *this)
{
  return this->m_modulePaused;
}

/*
==============
ComFastFileLoadModule::IsPreloadModule
==============
*/
bool ComFastFileLoadModule::IsPreloadModule(ComFastFileLoadModule *this)
{
  return (this->m_zoneFlags & 0x100000) != 0;
}

/*
==============
ComFastFileLoadModule::IsPreloadModuleOrAllZonesNotPreload
==============
*/
char ComFastFileLoadModule::IsPreloadModuleOrAllZonesNotPreload(ComFastFileLoadModule *this, const ComFastFileZoneList *zones)
{
  ComFastFileZoneList *v2; 
  unsigned int v5; 
  char v6; 
  char v7; 
  unsigned int v8; 
  ComFastFileZoneList *v9; 
  unsigned int v10; 
  const char *name; 
  __int64 v12; 
  __int64 v13; 

  v2 = (ComFastFileZoneList *)zones;
  if ( !zones->m_zones[0].name[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3403, ASSERT_TYPE_ASSERT, "(!zones.IsEmpty())", (const char *)&queryFormat, "!zones.IsEmpty()") )
    __debugbreak();
  if ( (this->m_zoneFlags & 0x100000) != 0 )
    return 1;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  if ( ComFastFileZoneList::GetCount(v2) )
  {
    do
    {
      if ( v8 >= ComFastFileZoneList::GetCount(v2) )
      {
        LODWORD(v13) = ComFastFileZoneList::GetCount(v2);
        LODWORD(v12) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile_zonelist.h", 145, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( GetCount() )", "index doesn't index GetCount()\n\t%i not in [0, %i)", v12, v13) )
          __debugbreak();
      }
      if ( DB_Zones_IsPreloadZoneName(v2->m_zones[v8].name) )
        v7 = 1;
      else
        v6 = 1;
      ++v8;
    }
    while ( v8 < ComFastFileZoneList::GetCount(v2) );
    if ( v7 && v6 )
    {
      v9 = v2;
      while ( v9->m_zones[0].name[0] )
      {
        ++v5;
        v9 = (ComFastFileZoneList *)((char *)v9 + 72);
        if ( v5 >= 3 )
        {
          v5 = 3;
          break;
        }
      }
      if ( v5 )
      {
        v10 = v5 - 1;
        if ( v10 )
        {
          name = v2->m_zones[1].name;
          if ( v10 == 1 )
            v2 = (ComFastFileZoneList *)j_va("%s,%s", (const char *)v2, name);
          else
            v2 = (ComFastFileZoneList *)j_va("%s,%s,%s", (const char *)v2, name, v2->m_zones[2].name);
        }
      }
      else
      {
        v2 = (ComFastFileZoneList *)"<empty>";
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3431, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Mix of preload and non-preloaded : %s", (const char *)v2) )
        __debugbreak();
    }
  }
  return v6;
}

/*
==============
ComFastFileLoadModule::IsRestartRequired
==============
*/
bool ComFastFileLoadModule::IsRestartRequired(ComFastFileLoadModule *this)
{
  bool result; 

  if ( !this->m_currentState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3982, ASSERT_TYPE_ASSERT, "(m_currentState != LoadState::IDLE)", "%s\n\tShould not be called when already in the idle state", "m_currentState != LoadState::IDLE") )
    __debugbreak();
  if ( !this->m_moduleActive )
    return 1;
  if ( ComFastFileLoadModule::HasFailedDependencies(this) )
    return 1;
  result = ComFastFileLoadModule::IsNewZoneRequested(this);
  if ( result )
    return 1;
  return result;
}

/*
==============
ComFastFileLoadModule::IsUnloaded
==============
*/
bool ComFastFileLoadModule::IsUnloaded(ComFastFileLoadModule *this)
{
  return !this->m_currentState[0] && !this->m_databaseRequest[0];
}

/*
==============
ComFastFileLoadModule::IsWorkComplete
==============
*/
bool ComFastFileLoadModule::IsWorkComplete(ComFastFileLoadModule *this)
{
  return (this->m_currentState[0] == 2 && !ComFastFileLoadModule::IsRestartRequired(this) || !this->m_currentState[0] && !ComFastFileLoadModule::IsLoadStartupRequired(this) || this->m_currentState[0] == 4 && !ComFastFileLoadModule::IsNewZoneRequested(this)) && !this->m_databaseRequest[0];
}

/*
==============
ComFastFileLoadModule::OnLoadError
==============
*/
char ComFastFileLoadModule::OnLoadError(ComFastFileLoadModule *this, const unsigned int zoneFlags, const char *const failureText)
{
  int v6; 
  const char *DebugText; 
  const char *DebugName; 
  unsigned __int8 v9; 
  ComFastFileLoadModule::LoadState v10; 
  char *fmt; 

  if ( (zoneFlags & this->m_zoneFlags) == 0 )
    return 0;
  v6 = (unsigned __int8)this->m_currentState[0];
  if ( !v6 )
    return 0;
  if ( v6 != 1 && v6 != 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3889, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Received a load error in an unexpected state (%i)", v6) )
    __debugbreak();
  if ( !this->m_activeZones.m_zones[0].name[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3893, ASSERT_TYPE_ASSERT, "(!m_activeZones.IsEmpty())", (const char *)&queryFormat, "!m_activeZones.IsEmpty()") )
    __debugbreak();
  DebugText = ComFastFileZoneList::GetDebugText(&this->m_activeZones);
  DebugName = ComFastFileLoadModule::GetDebugName(this);
  LODWORD(fmt) = zoneFlags;
  Com_Printf(30, "ComFastFile: (%s) Load error for zone '%s' (DB reported '%i')\n", DebugName, DebugText, fmt);
  v9 = this->m_databaseRequest[0];
  if ( (v9 & 0xFB) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3899, ASSERT_TYPE_ASSERT, "(m_databaseRequest == ComFastFileDbRequestType::NONE || m_databaseRequest == ComFastFileDbRequestType::RESUME)", "%s\n\tComFastFile: Got a load error but our load request was not processed (%i)", "m_databaseRequest == ComFastFileDbRequestType::NONE || m_databaseRequest == ComFastFileDbRequestType::RESUME", v9) )
    __debugbreak();
  ComFastFileLoadModule::SetDatabaseRequest(this, NONE);
  LOBYTE(v10) = 4;
  ComFastFileLoadModule::SetState(this, v10);
  this->m_loadProgress = this->LOAD_PROGRESS_NONE;
  if ( failureText )
    Core_strcpy(this->m_failureText, 0x400ui64, failureText);
  else
    this->m_failureText[0] = 0;
  if ( this->m_failureMode == REQUIRED && !ComFastFileLoadModule::IsNewZoneRequested(this) )
    Com_FastFile_LoadError(&this->m_activeZones, this->m_failureText);
  return 1;
}

/*
==============
ComFastFileLoadModule::RequestContainsModule
==============
*/
char ComFastFileLoadModule::RequestContainsModule(ComFastFileLoadModule *this, const ComFastFileLoadModule *otherModule)
{
  ComFastFileZoneList *p_m_requestedZones; 
  __int64 v5; 
  ComFastFileZoneList *v6; 
  __int64 v7; 

  if ( !otherModule && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3357, ASSERT_TYPE_ASSERT, "(otherModule)", (const char *)&queryFormat, "otherModule") )
    __debugbreak();
  p_m_requestedZones = &otherModule->m_requestedZones;
  v5 = 0i64;
  v6 = &otherModule->m_requestedZones;
  do
  {
    if ( !v6->m_zones[0].name[0] )
      break;
    v7 = 0i64;
    while ( I_stricmp(this->m_requestedZones.m_zones[v7].name, p_m_requestedZones->m_zones[v5].name) )
    {
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= 3 )
        return 0;
    }
    v5 = (unsigned int)(v5 + 1);
    v6 = (ComFastFileZoneList *)((char *)v6 + 72);
  }
  while ( (unsigned int)v5 < 3 );
  return 1;
}

/*
==============
ComFastFileLoadModule::RequestEqualsName
==============
*/
bool ComFastFileLoadModule::RequestEqualsName(ComFastFileLoadModule *this, const char *zoneName)
{
  ComFastFileZoneList *p_m_requestedZones; 
  int v6; 
  ComFastFileZoneList *i; 
  __int64 v8; 
  unsigned int Count; 

  if ( !zoneName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3341, ASSERT_TYPE_ASSERT, "(zoneName)", (const char *)&queryFormat, "zoneName") )
    __debugbreak();
  p_m_requestedZones = &this->m_requestedZones;
  if ( !*zoneName )
    return p_m_requestedZones->m_zones[0].name[0] == 0;
  v6 = 0;
  for ( i = p_m_requestedZones; i->m_zones[0].name[0]; i = (ComFastFileZoneList *)((char *)i + 72) )
  {
    if ( (unsigned int)++v6 >= 3 )
      return 0;
  }
  if ( v6 != 1 )
    return 0;
  if ( !ComFastFileZoneList::GetCount(p_m_requestedZones) )
  {
    Count = ComFastFileZoneList::GetCount(p_m_requestedZones);
    LODWORD(v8) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile_zonelist.h", 145, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( GetCount() )", "index doesn't index GetCount()\n\t%i not in [0, %i)", v8, Count) )
      __debugbreak();
  }
  return I_stricmp(zoneName, (const char *)p_m_requestedZones) == 0;
}

/*
==============
ComFastFileLoadModule::Restart
==============
*/
void ComFastFileLoadModule::Restart(ComFastFileLoadModule *this)
{
  if ( !this->m_zoneFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3217, ASSERT_TYPE_ASSERT, "(m_zoneFlags)", (const char *)&queryFormat, "m_zoneFlags") )
    __debugbreak();
  if ( !this->m_activeZones.m_zones[0].name[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3218, ASSERT_TYPE_ASSERT, "(!m_activeZones.IsEmpty())", (const char *)&queryFormat, "!m_activeZones.IsEmpty()") )
    __debugbreak();
  if ( (DB_Zones_GetInUseFlags() & this->m_zoneFlags) != 0 && ((this->m_databaseRequest[0] - 1) & 0xFD) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3220, ASSERT_TYPE_ASSERT, "(!(DB_Zones_GetInUseFlags() & m_zoneFlags) || (m_databaseRequest == ComFastFileDbRequestType::UNLOAD) || (m_databaseRequest == ComFastFileDbRequestType::CANCEL))", (const char *)&queryFormat, "!(DB_Zones_GetInUseFlags() & m_zoneFlags) || (m_databaseRequest == ComFastFileDbRequestType::UNLOAD) || (m_databaseRequest == ComFastFileDbRequestType::CANCEL)") )
    __debugbreak();
  ComFastFileLoadModule::SetState(this, IDLE);
  this->m_activeZones.m_zones[0].name[0] = 0;
  this->m_activeZones.m_zones[1].name[0] = 0;
  this->m_activeZones.m_zones[2].name[0] = 0;
}

/*
==============
ComFastFileLoadModule::SetChild
==============
*/
void ComFastFileLoadModule::SetChild(ComFastFileLoadModule *this, ComFastFileLoadModule *child)
{
  if ( !child && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 2950, ASSERT_TYPE_ASSERT, "(child != nullptr)", (const char *)&queryFormat, "child != nullptr") )
    __debugbreak();
  if ( this->m_childModule && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 2951, ASSERT_TYPE_ASSERT, "(m_childModule == nullptr)", (const char *)&queryFormat, "m_childModule == nullptr") )
    __debugbreak();
  if ( !this->m_zoneFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 2953, ASSERT_TYPE_ASSERT, "(m_zoneFlags)", "%s\n\tInitialize the zone details first", "m_zoneFlags") )
    __debugbreak();
  if ( !ComFastFileLoadModule::GetDebugName(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 2955, ASSERT_TYPE_ASSERT, "(GetDebugName())", "%s\n\tInitialize the zone details first", "GetDebugName()") )
    __debugbreak();
  if ( (this->m_zoneFlags & 0x100000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 2958, ASSERT_TYPE_ASSERT, "((m_zoneFlags & DB_ZONE_PRELOAD_FRONTEND) == 0)", "%s\n\tPreload zone must be at the bottom of the stack, can't add child modules", "(m_zoneFlags & DB_ZONE_PRELOAD_FRONTEND) == 0") )
    __debugbreak();
  this->m_childModule = child;
}

/*
==============
ComFastFileLoadModule::SetDatabaseRequest
==============
*/
void ComFastFileLoadModule::SetDatabaseRequest(ComFastFileLoadModule *this, ComFastFileDbRequestType nextRequest)
{
  unsigned __int8 v2; 
  const char *DebugText; 
  const char *DebugName; 

  v2 = nextRequest;
  if ( this->m_databaseRequest[0] == (_BYTE)nextRequest )
  {
    this->m_databaseRequest[0] = nextRequest;
  }
  else
  {
    DebugText = ComFastFileZoneList::GetDebugText(&this->m_activeZones);
    DebugName = ComFastFileLoadModule::GetDebugName(this);
    Com_Printf(30, "ComFastFile: Request Change: %s -> %s (%s: %s)'\n", S_REQUEST_NAMES[(unsigned __int8)this->m_databaseRequest[0]], S_REQUEST_NAMES[v2], DebugName, DebugText);
    this->m_databaseRequest[0] = v2;
  }
}

/*
==============
ComFastFileLoadModule::SetDebugName
==============
*/
void ComFastFileLoadModule::SetDebugName(ComFastFileLoadModule *this, const char *name)
{
  this->m_debugName = name;
}

/*
==============
ComFastFileLoadModule::SetDepdendency
==============
*/
void ComFastFileLoadModule::SetDepdendency(ComFastFileLoadModule *this, ComFastFileLoadModule *dependency)
{
  if ( !dependency && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 2937, ASSERT_TYPE_ASSERT, "(dependency)", (const char *)&queryFormat, "dependency") )
    __debugbreak();
  if ( !this->m_zoneFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 2939, ASSERT_TYPE_ASSERT, "(m_zoneFlags)", "%s\n\tInitialize the zone details first", "m_zoneFlags") )
    __debugbreak();
  if ( !this->m_debugName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3174, ASSERT_TYPE_ASSERT, "(m_debugName)", (const char *)&queryFormat, "m_debugName") )
    __debugbreak();
  if ( !*this->m_debugName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3175, ASSERT_TYPE_ASSERT, "(m_debugName[0] != '\\0')", (const char *)&queryFormat, "m_debugName[0] != '\\0'") )
    __debugbreak();
  if ( !this->m_debugName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 2941, ASSERT_TYPE_ASSERT, "(GetDebugName())", "%s\n\tInitialize the zone details first", "GetDebugName()") )
    __debugbreak();
  this->m_dependency = dependency;
}

/*
==============
ComFastFileLoadModule::SetFailureMode
==============
*/
void ComFastFileLoadModule::SetFailureMode(ComFastFileLoadModule *this, DB_FastFileFailureMode failureMode)
{
  const char *DebugText; 
  DB_FastFileFailureMode m_failureMode; 
  const char *v6; 
  const char *DebugName; 
  DB_FastFileFailureMode v8; 

  if ( this->m_failureMode == failureMode )
  {
    this->m_failureMode = failureMode;
  }
  else
  {
    DebugText = ComFastFileZoneList::GetDebugText(&this->m_requestedZones);
    m_failureMode = this->m_failureMode;
    v6 = DebugText;
    DebugName = ComFastFileLoadModule::GetDebugName(this);
    v8 = m_failureMode;
    Com_Printf(30, "ComFastFile: (%s) SetFailureMode: %i (was %i) (%s)\n", DebugName, (unsigned int)failureMode, v8, v6);
    this->m_failureMode = failureMode;
  }
}

/*
==============
ComFastFileLoadModule::SetModuleActive
==============
*/
void ComFastFileLoadModule::SetModuleActive(ComFastFileLoadModule *this, bool isActive)
{
  const char *DebugText; 
  BOOL m_moduleActive; 
  const char *v6; 
  const char *DebugName; 
  BOOL v8; 

  if ( this->m_moduleActive == isActive )
  {
    this->m_moduleActive = isActive;
  }
  else
  {
    DebugText = ComFastFileZoneList::GetDebugText(&this->m_requestedZones);
    m_moduleActive = this->m_moduleActive;
    v6 = DebugText;
    DebugName = ComFastFileLoadModule::GetDebugName(this);
    v8 = m_moduleActive;
    Com_Printf(30, "ComFastFile: (%s) SetModuleActive: %i (was %i) (%s)\n", DebugName, isActive, v8, v6);
    this->m_moduleActive = isActive;
  }
}

/*
==============
ComFastFileLoadModule::SetModuleListActive
==============
*/
void ComFastFileLoadModule::SetModuleListActive(ComFastFileLoadModule *this, bool isActive)
{
  ComFastFileLoadModule *i; 

  ComFastFileLoadModule::SetModuleActive(this, isActive);
  for ( i = this->m_childModule; i; i = i->m_childModule )
    ComFastFileLoadModule::SetModuleActive(i, isActive);
}

/*
==============
ComFastFileLoadModule::SetModulePaused
==============
*/
void ComFastFileLoadModule::SetModulePaused(ComFastFileLoadModule *this, bool isPaused)
{
  const char *DebugText; 
  BOOL m_modulePaused; 
  const char *v6; 
  const char *DebugName; 
  BOOL v8; 

  if ( this->m_modulePaused == isPaused )
  {
    this->m_modulePaused = isPaused;
  }
  else
  {
    DebugText = ComFastFileZoneList::GetDebugText(&this->m_requestedZones);
    m_modulePaused = this->m_modulePaused;
    v6 = DebugText;
    DebugName = ComFastFileLoadModule::GetDebugName(this);
    v8 = m_modulePaused;
    Com_Printf(30, "ComFastFile: (%s) SetModulePaused: %i (was %i) (%s)\n", DebugName, isPaused, v8, v6);
    this->m_modulePaused = isPaused;
  }
}

/*
==============
ComFastFileLoadModule::SetParent
==============
*/
void ComFastFileLoadModule::SetParent(ComFastFileLoadModule *this, ComFastFileLoadModule *parent)
{
  if ( !parent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 2922, ASSERT_TYPE_ASSERT, "(parent)", (const char *)&queryFormat, "parent") )
    __debugbreak();
  if ( !this->m_zoneFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 2924, ASSERT_TYPE_ASSERT, "(m_zoneFlags)", "%s\n\tInitialize the zone details first", "m_zoneFlags") )
    __debugbreak();
  if ( !ComFastFileLoadModule::GetDebugName(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 2926, ASSERT_TYPE_ASSERT, "(GetDebugName())", "%s\n\tInitialize the zone details first", "GetDebugName()") )
    __debugbreak();
  this->m_parent = parent;
  if ( parent->m_childModule && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 2951, ASSERT_TYPE_ASSERT, "(m_childModule == nullptr)", (const char *)&queryFormat, "m_childModule == nullptr") )
    __debugbreak();
  if ( !parent->m_zoneFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 2953, ASSERT_TYPE_ASSERT, "(m_zoneFlags)", "%s\n\tInitialize the zone details first", "m_zoneFlags") )
    __debugbreak();
  if ( !ComFastFileLoadModule::GetDebugName(parent) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 2955, ASSERT_TYPE_ASSERT, "(GetDebugName())", "%s\n\tInitialize the zone details first", "GetDebugName()") )
    __debugbreak();
  if ( (parent->m_zoneFlags & 0x100000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 2958, ASSERT_TYPE_ASSERT, "((m_zoneFlags & DB_ZONE_PRELOAD_FRONTEND) == 0)", "%s\n\tPreload zone must be at the bottom of the stack, can't add child modules", "(m_zoneFlags & DB_ZONE_PRELOAD_FRONTEND) == 0") )
    __debugbreak();
  parent->m_childModule = this;
}

/*
==============
ComFastFileLoadModule::SetRequestedZone
==============
*/
void ComFastFileLoadModule::SetRequestedZone(ComFastFileLoadModule *this, const char *zoneName, const unsigned __int64 sizeEstimate)
{
  const char *DebugText; 
  const char *DebugName; 

  if ( !zoneName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3313, ASSERT_TYPE_ASSERT, "(zoneName)", (const char *)&queryFormat, "zoneName") )
    __debugbreak();
  if ( !ComFastFileLoadModule::RequestEqualsName(this, zoneName) )
  {
    DebugText = ComFastFileZoneList::GetDebugText(&this->m_requestedZones);
    DebugName = ComFastFileLoadModule::GetDebugName(this);
    Com_Printf(30, "ComFastFile: (%s) SetRequestedZone: '%s' (was '%s')\n", DebugName, zoneName, DebugText);
  }
  this->m_requestedZones.m_zones[0].name[0] = 0;
  this->m_requestedZones.m_zones[1].name[0] = 0;
  this->m_requestedZones.m_zones[2].name[0] = 0;
  if ( zoneName )
    ComFastFileZoneList::Add(&this->m_requestedZones, zoneName, sizeEstimate);
}

/*
==============
ComFastFileLoadModule::SetState
==============
*/
void ComFastFileLoadModule::SetState(ComFastFileLoadModule *this, ComFastFileLoadModule::LoadState nextState)
{
  unsigned __int8 v2; 
  const char *DebugText; 
  const char *DebugName; 

  v2 = nextState;
  if ( this->m_currentState[0] == (_BYTE)nextState )
  {
    this->m_currentState[0] = nextState;
  }
  else
  {
    DebugText = ComFastFileZoneList::GetDebugText(&this->m_activeZones);
    DebugName = ComFastFileLoadModule::GetDebugName(this);
    Com_Printf(30, "ComFastFile: State Change: %s -> %s (%s: %s)'\n", S_STATE_NAMES[(unsigned __int8)this->m_currentState[0]], S_STATE_NAMES[v2], DebugName, DebugText);
    this->m_currentState[0] = v2;
  }
}

/*
==============
ComFastFileLoadModule::TestAnyModulePaused
==============
*/
char ComFastFileLoadModule::TestAnyModulePaused(ComFastFileLoadModule *this)
{
  if ( this->m_modulePaused )
    return 1;
  while ( 1 )
  {
    this = this->m_childModule;
    if ( !this )
      break;
    if ( this->m_modulePaused )
      return 1;
  }
  return 0;
}

/*
==============
ComFastFileInstallState::UpdateProgress
==============
*/
void ComFastFileInstallState::UpdateProgress(ComFastFileInstallState *this)
{
  const dvar_t *v1; 
  char ActiveGameMode; 
  const char *v4; 
  bool IsAltLaunchMode; 
  bool v6; 
  bool v7; 
  __int64 v8; 

  v1 = DCONST_DVARBOOL_fastfileInstallTestEnabled;
  if ( !DCONST_DVARBOOL_fastfileInstallTestEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fastfileInstallTestEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
  {
    this->m_progress = 0.5;
    this->m_secondsRemaining = 10i64;
    *(_WORD *)&this->m_installationPending = 257;
    return;
  }
  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  if ( ActiveGameMode )
  {
    switch ( ActiveGameMode )
    {
      case 1:
        v4 = "sp";
        break;
      case 2:
        IsAltLaunchMode = Com_FastFile_IsAltLaunchMode();
        v4 = "_launch";
        if ( !IsAltLaunchMode )
          v4 = "mp";
        break;
      case 3:
        v4 = "cp";
        break;
      default:
        LODWORD(v8) = (unsigned __int8)Com_GameMode_GetActiveGameMode();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 1094, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown game mode %i", v8) )
          __debugbreak();
        goto LABEL_18;
    }
    SI_CheckRequestedMap(v4);
  }
LABEL_18:
  v6 = SI_CheckInstall(&this->m_progress, &this->m_secondsRemaining);
  v7 = !v6;
  this->m_installationPending = !v6;
  if ( v6 && this->m_requiredInstallPending )
    Com_Printf(30, "ComFastFile: Install complete, modules will resume loading\n");
  this->m_requiredInstallPending = v7;
}

/*
==============
ComFastFileLoadModule::UpdateSelf
==============
*/
void ComFastFileLoadModule::UpdateSelf(ComFastFileLoadModule *this)
{
  unsigned int v2; 
  char v3; 
  char v4; 
  const char *DebugName; 
  unsigned __int8 v6; 
  __int64 v7; 
  bool v8; 
  const char *DebugText; 
  __int64 v10; 

  v2 = 0;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3746, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", "%s\n\tThreading issues could occur when called on another thread, because of DB interactions", "Sys_IsMainThread()") )
    __debugbreak();
  v3 = this->m_currentState[0];
  do
  {
    v4 = v3;
    if ( v2 >= 5 )
    {
      DebugName = ComFastFileLoadModule::GetDebugName(this);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3753, ASSERT_TYPE_ASSERT, "(loopCount < static_cast<uint>( LoadState::COUNT ))", "%s\n\tPossible infinite loop detected in processing module %s", "loopCount < static_cast<uint>( LoadState::COUNT )", DebugName) )
        __debugbreak();
    }
    ++v2;
    if ( this->m_currentState[0] )
    {
      switch ( this->m_currentState[0] )
      {
        case 1:
          ComFastFileLoadModule::Frame_Loading(this);
          break;
        case 2:
          ComFastFileLoadModule::Frame_Loaded(this);
          break;
        case 3:
          ComFastFileLoadModule::Frame_Paused(this);
          break;
        case 4:
          if ( !this->m_activeZones.m_zones[0].name[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3718, ASSERT_TYPE_ASSERT, "(!m_activeZones.IsEmpty())", (const char *)&queryFormat, "!m_activeZones.IsEmpty()") )
            __debugbreak();
          v6 = this->m_databaseRequest[0];
          if ( (v6 & 0xFC) != 0 || v6 == 2 )
          {
            LODWORD(v10) = v6;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3719, ASSERT_TYPE_ASSERT, "( ( (m_databaseRequest == ComFastFileDbRequestType::CANCEL) || (m_databaseRequest == ComFastFileDbRequestType::UNLOAD) || (m_databaseRequest == ComFastFileDbRequestType::NONE) ) )", "( static_cast<uint>( m_databaseRequest ) ) = %u", v10) )
              __debugbreak();
          }
          v7 = 0i64;
          do
          {
            if ( I_stricmp(this->m_activeZones.m_zones[v7].name, this->m_requestedZones.m_zones[v7].name) )
            {
              ComFastFileLoadModule::Restart(this);
              goto LABEL_30;
            }
            v7 = (unsigned int)(v7 + 1);
          }
          while ( (unsigned int)v7 < 3 );
          if ( this->m_failureMode == REQUIRED )
          {
            v8 = this == (ComFastFileLoadModule *)-496i64 || !this->m_failureText[0];
            DebugText = ComFastFileZoneList::GetDebugText(&this->m_activeZones);
            if ( v8 )
              Sys_Error((const ObfuscateErrorText)&stru_143ED8C40, DebugText);
            else
              Sys_Error((const ObfuscateErrorText)&stru_143ED8C18, DebugText, this->m_failureText);
          }
          break;
      }
    }
    else
    {
      ComFastFileLoadModule::Frame_Idle(this);
    }
LABEL_30:
    v3 = this->m_currentState[0];
  }
  while ( v4 != v3 );
}

/*
==============
ComFastFileLoadModule::ValidateDynamicLoadOrder
==============
*/
void ComFastFileLoadModule::ValidateDynamicLoadOrder(ComFastFileLoadModule *this, const char *debugName)
{
  ComFastFileLoadModule *m_parent; 

  do
  {
    if ( (unsigned __int8)(this->m_currentState[0] - 1) > 1u && this->m_requestedZones.m_zones[0].name[0] )
    {
      if ( !this->m_debugName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3174, ASSERT_TYPE_ASSERT, "(m_debugName)", (const char *)&queryFormat, "m_debugName") )
        __debugbreak();
      if ( !*this->m_debugName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3175, ASSERT_TYPE_ASSERT, "(m_debugName[0] != '\\0')", (const char *)&queryFormat, "m_debugName[0] != '\\0'") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3077, ASSERT_TYPE_ASSERT, "((m_currentState == LoadState::LOADING) || (m_currentState == LoadState::LOADED) || m_requestedZones.IsEmpty())", "%s\n\tWhile validating '%s', parent '%s' is not loaded", "(m_currentState == LoadState::LOADING) || (m_currentState == LoadState::LOADED) || m_requestedZones.IsEmpty()", debugName, this->m_debugName) )
        __debugbreak();
    }
    m_parent = this->m_parent;
    if ( m_parent )
      ComFastFileLoadModule::ValidateDynamicLoadOrder(m_parent, debugName);
    this = this->m_dependency;
  }
  while ( this );
}

/*
==============
ComFastFileLoadModule::ValidateDynamicRelationships
==============
*/
void ComFastFileLoadModule::ValidateDynamicRelationships(ComFastFileLoadModule *this, const ComFastFileLoadModule *otherModule)
{
  char v4; 
  const char *DebugName; 
  const char *v6; 
  const char *v7; 
  const char *v8; 
  ComFastFileLoadModule *m_parent; 
  ComFastFileLoadModule *m_dependency; 
  const char *v11; 
  const char *v12; 
  const char *v13; 
  const char *v14; 
  const char *v15; 
  const char *v16; 

  if ( !otherModule && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3034, ASSERT_TYPE_ASSERT, "(otherModule != nullptr)", (const char *)&queryFormat, "otherModule != nullptr") )
    __debugbreak();
  if ( otherModule == this && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3035, ASSERT_TYPE_ASSERT, "(otherModule != this)", (const char *)&queryFormat, "otherModule != this") )
    __debugbreak();
  if ( this->m_zoneFlags == otherModule->m_zoneFlags )
  {
    v4 = this->m_databaseRequest[0];
    if ( v4 == 1 || v4 == 3 )
    {
      if ( otherModule->m_currentState[0] )
      {
        DebugName = ComFastFileLoadModule::GetDebugName((ComFastFileLoadModule *)otherModule);
        v6 = ComFastFileLoadModule::GetDebugName(this);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3043, ASSERT_TYPE_ASSERT, "(otherModule->m_currentState == LoadState::IDLE)", "%s\n\t'%s' is canceling or unload, but other module with same flags '%s' is not", "otherModule->m_currentState == LoadState::IDLE", v6, DebugName) )
          __debugbreak();
      }
      v4 = this->m_databaseRequest[0];
    }
    if ( ((v4 - 2) & 0xFD) == 0 && v4 != otherModule->m_databaseRequest[0] && (otherModule->m_currentState[0] & 0xFD) != 0 )
    {
      v7 = ComFastFileLoadModule::GetDebugName((ComFastFileLoadModule *)otherModule);
      v8 = ComFastFileLoadModule::GetDebugName(this);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3048, ASSERT_TYPE_ASSERT, "(m_databaseRequest == otherModule->m_databaseRequest || otherModule->m_currentState == LoadState::IDLE || otherModule->m_currentState == LoadState::LOADED)", "%s\n\t'%s' is pausing or resuming, but other module '%s' requests do not match", "m_databaseRequest == otherModule->m_databaseRequest || otherModule->m_currentState == LoadState::IDLE || otherModule->m_currentState == LoadState::LOADED", v8, v7) )
        __debugbreak();
    }
  }
  m_parent = this->m_parent;
  if ( m_parent && (m_parent == otherModule || ComFastFileLoadModule::IsParentOrDependency(m_parent, otherModule)) || (m_dependency = this->m_dependency) != NULL && (m_dependency == otherModule || ComFastFileLoadModule::IsParentOrDependency(m_dependency, otherModule)) )
  {
    if ( otherModule->m_requestedZones.m_zones[0].name[0] )
    {
      if ( otherModule->m_currentState[0] == 4 && !ComFastFileLoadModule::IsNewZoneRequested((ComFastFileLoadModule *)otherModule) && this->m_currentState[0] == 2 && !ComFastFileLoadModule::IsRestartRequired(this) )
      {
        v11 = ComFastFileLoadModule::GetDebugName(this);
        v12 = ComFastFileLoadModule::GetDebugName((ComFastFileLoadModule *)otherModule);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3056, ASSERT_TYPE_ASSERT, "(!this->IsLoaded())", "%s\n\tParent or dependency '%s' has failed, but we are loaded (%s)", "!this->IsLoaded()", v12, v11) )
          __debugbreak();
      }
      if ( this->m_failureMode == REQUIRED )
      {
        if ( otherModule->m_failureMode )
        {
          v13 = ComFastFileLoadModule::GetDebugName(this);
          v14 = ComFastFileLoadModule::GetDebugName((ComFastFileLoadModule *)otherModule);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3061, ASSERT_TYPE_ASSERT, "(otherModule->m_failureMode == DB_FastFileFailureMode::REQUIRED)", "%s\n\tParent or dependency '%s' is optional, but we are not (%s)", "otherModule->m_failureMode == DB_FastFileFailureMode::REQUIRED", v14, v13) )
            __debugbreak();
        }
      }
      if ( this->m_currentState[0] == 2 && !ComFastFileLoadModule::IsRestartRequired(this) && (otherModule->m_currentState[0] != 2 || ComFastFileLoadModule::IsRestartRequired((ComFastFileLoadModule *)otherModule)) )
      {
        v15 = ComFastFileLoadModule::GetDebugName(this);
        v16 = ComFastFileLoadModule::GetDebugName((ComFastFileLoadModule *)otherModule);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3066, ASSERT_TYPE_ASSERT, "(otherModule->IsLoaded())", "%s\n\tParent or dependency '%s' is not loaded, but we are (%s)", "otherModule->IsLoaded()", v16, v15) )
          __debugbreak();
      }
    }
  }
}

/*
==============
ComFastFileLoadModule::ValidateStaticLoadOrder
==============
*/
void ComFastFileLoadModule::ValidateStaticLoadOrder(ComFastFileLoadModule *this, const ComFastFileLoadModule *higherPriorityModule)
{
  ComFastFileLoadModule *i; 

  if ( !higherPriorityModule && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3020, ASSERT_TYPE_ASSERT, "(higherPriorityModule != nullptr)", (const char *)&queryFormat, "higherPriorityModule != nullptr") )
    __debugbreak();
  for ( i = this->m_childModule; i; i = i->m_childModule )
  {
    if ( i == higherPriorityModule )
    {
      if ( !this->m_debugName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3174, ASSERT_TYPE_ASSERT, "(m_debugName)", (const char *)&queryFormat, "m_debugName") )
        __debugbreak();
      if ( !*this->m_debugName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3175, ASSERT_TYPE_ASSERT, "(m_debugName[0] != '\\0')", (const char *)&queryFormat, "m_debugName[0] != '\\0'") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3026, ASSERT_TYPE_ASSERT, "(module != higherPriorityModule)", "%s\n\tLoad order is wrong, higher priority load module is a child of '%s'", "module != higherPriorityModule", this->m_debugName) )
        __debugbreak();
    }
  }
}

/*
==============
ComFastFileLoadModule::ValidateStaticNode
==============
*/
void ComFastFileLoadModule::ValidateStaticNode(ComFastFileLoadModule *this)
{
  const char *DebugName; 

  if ( !this->m_zoneFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3007, ASSERT_TYPE_ASSERT, "(m_zoneFlags)", "%s\n\tNo zone flags", "m_zoneFlags") )
    __debugbreak();
  if ( !this->m_debugName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3174, ASSERT_TYPE_ASSERT, "(m_debugName)", (const char *)&queryFormat, "m_debugName") )
    __debugbreak();
  if ( !*this->m_debugName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3175, ASSERT_TYPE_ASSERT, "(m_debugName[0] != '\\0')", (const char *)&queryFormat, "m_debugName[0] != '\\0'") )
    __debugbreak();
  if ( !this->m_debugName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3008, ASSERT_TYPE_ASSERT, "(GetDebugName())", "%s\n\tNo debug name", "GetDebugName()") )
    __debugbreak();
  if ( !this->m_parent && !this->m_childModule )
  {
    DebugName = ComFastFileLoadModule::GetDebugName(this);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3009, ASSERT_TYPE_ASSERT, "(m_parent || m_childModule)", "%s\n\tOrphan fast file module '%s'", "m_parent || m_childModule", DebugName) )
      __debugbreak();
  }
}

/*
==============
ComFastFileLoadModule::ValidateStaticRoot
==============
*/
void ComFastFileLoadModule::ValidateStaticRoot(ComFastFileLoadModule *this)
{
  if ( this->m_parent )
  {
    if ( !this->m_debugName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3174, ASSERT_TYPE_ASSERT, "(m_debugName)", (const char *)&queryFormat, "m_debugName") )
      __debugbreak();
    if ( !*this->m_debugName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3175, ASSERT_TYPE_ASSERT, "(m_debugName[0] != '\\0')", (const char *)&queryFormat, "m_debugName[0] != '\\0'") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3000, ASSERT_TYPE_ASSERT, "(m_parent == nullptr)", "%s\n\tRoot module with parent (%s)", "m_parent == nullptr", this->m_debugName) )
      __debugbreak();
  }
  if ( !this->m_childModule )
  {
    if ( !this->m_debugName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3174, ASSERT_TYPE_ASSERT, "(m_debugName)", (const char *)&queryFormat, "m_debugName") )
      __debugbreak();
    if ( !*this->m_debugName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3175, ASSERT_TYPE_ASSERT, "(m_debugName[0] != '\\0')", (const char *)&queryFormat, "m_debugName[0] != '\\0'") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_fastfile.cpp", 3001, ASSERT_TYPE_ASSERT, "(m_childModule)", "%s\n\tRoot module with no child (%s)", "m_childModule", this->m_debugName) )
      __debugbreak();
  }
}

