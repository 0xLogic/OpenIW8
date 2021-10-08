/*
==============
DB_LoadLevelXAssetsNonBlockStartingCheck
==============
*/

void __fastcall DB_LoadLevelXAssetsNonBlockStartingCheck(const char *mapName)
{
  ?DB_LoadLevelXAssetsNonBlockStartingCheck@@YAXPEBD@Z(mapName);
}

/*
==============
DB_LoadLevelXAssetsNonBlockingFinalize
==============
*/

void __fastcall DB_LoadLevelXAssetsNonBlockingFinalize(const char *mapName)
{
  ?DB_LoadLevelXAssetsNonBlockingFinalize@@YAXPEBD@Z(mapName);
}

/*
==============
DB_LoadLevelXAssetsNonBlockingTransients
==============
*/

void DB_LoadLevelXAssetsNonBlockingTransients(void)
{
  ?DB_LoadLevelXAssetsNonBlockingTransients@@YAXXZ();
}

/*
==============
DB_LoadLevelXAssetsNonBlockingStart
==============
*/

void __fastcall DB_LoadLevelXAssetsNonBlockingStart(const char *mapName, bool loadServerZone)
{
  ?DB_LoadLevelXAssetsNonBlockingStart@@YAXPEBD_N@Z(mapName, loadServerZone);
}

/*
==============
DB_LoadLevelXAssets
==============
*/

void __fastcall DB_LoadLevelXAssets(const char *mapName, unsigned int mapStart, bool loadServerZone)
{
  ?DB_LoadLevelXAssets@@YAXPEBDI_N@Z(mapName, mapStart, loadServerZone);
}

/*
==============
DB_LoadLevelXAssetsValidatePostLoad
==============
*/

void DB_LoadLevelXAssetsValidatePostLoad(void)
{
  ?DB_LoadLevelXAssetsValidatePostLoad@@YAXXZ();
}

/*
==============
DB_DecideLevelLoad
==============
*/
void DB_DecideLevelLoad(LevelLoad *load, const char *const mapName)
{
  bool IsCpMap; 
  char ActiveGameMode; 
  bool v6; 
  unsigned __int64 v7; 
  __int64 v8; 
  __int64 v9; 

  if ( !load && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_level_loading.cpp", 129, ASSERT_TYPE_ASSERT, "(load)", (const char *)&queryFormat, "load") )
    __debugbreak();
  if ( !mapName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_level_loading.cpp", 130, ASSERT_TYPE_ASSERT, "(mapName)", (const char *)&queryFormat, "mapName") )
    __debugbreak();
  memset_0(load, 0, sizeof(LevelLoad));
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW|0x80) )
  {
    v7 = 243269632i64;
    goto LABEL_26;
  }
  if ( !load && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_level_loading.cpp", 93, ASSERT_TYPE_ASSERT, "(load)", (const char *)&queryFormat, "load") )
    __debugbreak();
  if ( !mapName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_level_loading.cpp", 94, ASSERT_TYPE_ASSERT, "(mapName)", (const char *)&queryFormat, "mapName") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_level_loading.cpp", 95, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::FASTFILES_MULTIPLAYER ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::FASTFILES_MULTIPLAYER )") )
    __debugbreak();
  IsCpMap = Com_IsCpMap(mapName);
  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  if ( IsCpMap )
  {
    if ( ActiveGameMode != 3 )
    {
      v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_level_loading.cpp", 104, ASSERT_TYPE_ASSERT, "(Com_GameMode_IsCoopActive())", "%s\n\tDB_LoadLevelXAssets() is trying to load ALIENS map \"%s\", but we are NOT in aliens mode!!!!", "Com_GameMode_IsCoopActive()", mapName);
      goto LABEL_22;
    }
  }
  else if ( ActiveGameMode == 3 )
  {
    v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_level_loading.cpp", 112, ASSERT_TYPE_ASSERT, "(!Com_GameMode_IsCoopActive())", "%s\n\tDB_LoadLevelXAssets() is trying to load CORE map \"%s\", but we are in aliens mode!!!!", "!Com_GameMode_IsCoopActive()", mapName);
LABEL_22:
    if ( v6 )
      __debugbreak();
  }
  v7 = 62914560i64;
LABEL_26:
  if ( load->numZones >= 0x18 )
  {
    LODWORD(v9) = 24;
    LODWORD(v8) = load->numZones;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_level_loading.cpp", 74, ASSERT_TYPE_ASSERT, "(unsigned)( levelLoad->numZones ) < (unsigned)( ( sizeof( *array_counter( levelLoad->info ) ) + 0 ) )", "levelLoad->numZones doesn't index ARRAY_COUNT( levelLoad->info )\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  Core_strcpy(load->names[load->numZones], 0x40ui64, mapName);
  load->info[load->numZones].name = load->names[load->numZones];
  load->info[load->numZones].zoneFlags = 2304;
  load->info[load->numZones].failureMode = REQUIRED;
  load->info[load->numZones].priority = 0xFFFF;
  load->sizeEstimate[load->numZones++] = v7;
}

/*
==============
DB_LoadLevelXAssets
==============
*/
void DB_LoadLevelXAssets(const char *mapName, unsigned int mapStart, bool loadServerZone)
{
  bool v3; 
  char v4; 
  int v6; 
  bool v7; 
  bool IsPreloadZoneName; 
  unsigned __int64 v9; 
  int v10; 
  const StringTable *stringTable; 
  bool v12; 
  bool v13; 
  unsigned int FrameIndex; 
  const dvar_t *v15; 
  unsigned int v16; 
  int integer; 
  LevelLoad load; 

  v3 = loadServerZone;
  v4 = mapStart;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_level_loading.cpp", 177, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  CrashReport_AddKVP("MapName", mapName);
  if ( Com_FrontEnd_IsInFrontEnd() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_level_loading.cpp", 183, ASSERT_TYPE_ASSERT, "(!Com_FrontEnd_IsInFrontEnd())", (const char *)&queryFormat, "!Com_FrontEnd_IsInFrontEnd()") )
    __debugbreak();
  v6 = 1;
  if ( !Com_GameMode_SupportsMap(mapName) )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143DFD3A8, 781i64, mapName);
  v7 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW|0x80);
  if ( !v7 || (DB_SyncXAssets(), !DB_Zones_IsFinishedLoading(mapName)) || DB_Zones_IsPreloadZoneName(mapName) || DB_Zones_IsFrontEndSceneZoneName(mapName) )
  {
    if ( (DB_Zones_GetInUseFlags() & 0xC000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_level_loading.cpp", 203, ASSERT_TYPE_ASSERT, "(( DB_Zones_GetInUseFlags() & DB_MASK_TRANSIENT_WORLD_ZONES ) == 0)", (const char *)&queryFormat, "( DB_Zones_GetInUseFlags() & DB_MASK_TRANSIENT_WORLD_ZONES ) == 0") )
      __debugbreak();
    if ( (DB_Zones_GetInUseFlags() & 0x10000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_level_loading.cpp", 205, ASSERT_TYPE_ASSERT, "(( DB_Zones_GetInUseFlags() & DB_ZONE_TRANSIENT_PHYSICS_MP ) == 0)", (const char *)&queryFormat, "( DB_Zones_GetInUseFlags() & DB_ZONE_TRANSIENT_PHYSICS_MP ) == 0") )
      __debugbreak();
    if ( (DB_Zones_GetInUseFlags() & 0x40000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_level_loading.cpp", 207, ASSERT_TYPE_ASSERT, "(( DB_Zones_GetInUseFlags() & DB_ZONE_TRANSIENT_INFIL_LEVEL_MP ) == 0)", (const char *)&queryFormat, "( DB_Zones_GetInUseFlags() & DB_ZONE_TRANSIENT_INFIL_LEVEL_MP ) == 0") )
      __debugbreak();
    if ( (DB_Zones_GetInUseFlags() & 0x20000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_level_loading.cpp", 208, ASSERT_TYPE_ASSERT, "(( DB_Zones_GetInUseFlags() & DB_ZONE_TRANSIENT_INFIL_COMMON_MP ) == 0)", (const char *)&queryFormat, "( DB_Zones_GetInUseFlags() & DB_ZONE_TRANSIENT_INFIL_COMMON_MP ) == 0") )
      __debugbreak();
    Com_FastFile_SyncLoadComplete(mapName);
    if ( g_dbPreloading && !Sys_IsDatabaseReady() )
    {
      Com_Printf(0, "DB_LoadLevelXAssets: Blocking for DB thread to finish preloading...\n");
      Sys_SyncDatabaseWithPump();
      if ( !Sys_IsDatabaseReady() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_level_loading.cpp", 221, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseReady())", (const char *)&queryFormat, "Sys_IsDatabaseReady()") )
        __debugbreak();
    }
    IsPreloadZoneName = DB_Zones_IsPreloadZoneName(mapName);
    if ( !IsPreloadZoneName )
      Com_FrontEnd_FreeZonesOnLevelLoad();
    v9 = 0i64;
    if ( !v7 )
    {
      v10 = 0;
      if ( (v4 & 1) == 0 )
      {
        stringTable = DB_FindXAssetHeader(ASSET_TYPE_STRINGTABLE, "sp/levels_nostreamsync.csv", 1).stringTable;
        if ( !stringTable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_level_loading.cpp", 246, ASSERT_TYPE_ASSERT, "(stringTableHeader.stringTable)", (const char *)&queryFormat, "stringTableHeader.stringTable") )
          __debugbreak();
        if ( StringTable_LookupRowNumForValue(stringTable, 0, mapName) >= 0 )
          v10 = 1;
      }
      if ( DB_DevFastBoot_BootTimeCheck() == FASTBOOT_QUICK )
        v10 = 1;
      v6 = v10;
      v3 = loadServerZone;
      if ( DB_IsDoingSPHotLoad() )
        v6 = ((unsigned __int8)~v4 >> 2) & 1;
    }
    Stream_LoadSync_SetSPWaitType((StreamSyncSPWaitType)v6);
    v12 = Com_GameMode_SupportsFeature((Com_GameMode_Feature)144);
    Com_StreamSync_SetEnabled(v12);
    v13 = Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_SLIDE);
    BG_Customization_SetIsEnabled(v13);
    ProfLoad_Begin("DB_DecideLevelLoad");
    DB_DecideLevelLoad(&load, mapName);
    ProfLoad_End();
    if ( !v6 )
      v9 = 52428800i64;
    LoadBar_EstimateFastfiles(load.info, load.sizeEstimate, load.numZones, 0i64, v9);
    if ( !DB_IsDoingSPHotLoad() && !v7 )
      DB_LoadTimes_BeginSPLevelLoad(mapName);
    FrameIndex = R_GetFrameIndex();
    v15 = DVARINT_db_loadSleepTime;
    v16 = FrameIndex;
    if ( !DVARINT_db_loadSleepTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "db_loadSleepTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    integer = v15->current.integer;
    R_BeginRemoteScreenUpdate();
    while ( v16 == R_GetFrameIndex() )
      Sys_Sleep(integer);
    R_EndRemoteScreenUpdate();
    ProfLoad_Begin("DB_LoadXAssets");
    DB_LoadFastfiles(load.info, load.numZones, 0, v3);
    ProfLoad_End();
    DB_SyncForZoneAlloc();
    CL_Transients_OnLevelLoadBegin();
    Com_FastFile_ResetLevelPreload(mapName);
    BG_Customization_UpdatePackageBindings(mapName);
    if ( v7 && IsPreloadZoneName )
    {
      Com_Printf(0, "DB_LoadLevelXAssets: Blocking for DB thread to finish processing preloaded zone: %s...\n", mapName);
      DB_SyncXAssetsKeepAlive();
      Com_Printf(0, "DB_LoadLevelXAssets: Blocking complete for preloaded zone: %s...\n", mapName);
      DB_ValidateHasNoPausedFastfiles();
      DB_DynamicHeap_ValidateClear();
    }
    CL_Transients_OnLevelLoadFinalize();
  }
}

/*
==============
DB_LoadLevelXAssetsNonBlockStartingCheck
==============
*/
void DB_LoadLevelXAssetsNonBlockStartingCheck(const char *mapName)
{
  if ( !Com_GameMode_SupportsMap(mapName) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_level_loading.cpp", 345, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsMap( mapName ))", (const char *)&queryFormat, "Com_GameMode_SupportsMap( mapName )") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_level_loading.cpp", 346, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::FASTFILES_MULTIPLAYER ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::FASTFILES_MULTIPLAYER )") )
    __debugbreak();
  if ( (!DB_Zones_IsFinishedLoading(mapName) || DB_Zones_IsPreloadZoneName(mapName)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_level_loading.cpp", 347, ASSERT_TYPE_ASSERT, "(DB_Zones_IsFinishedLoading( mapName ) && !DB_Zones_IsPreloadZoneName( mapName ))", "%s\n\tMap %s should already be loaded", "DB_Zones_IsFinishedLoading( mapName ) && !DB_Zones_IsPreloadZoneName( mapName )", mapName) )
    __debugbreak();
  if ( !DB_AreFastfileLoadsCompleted() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_level_loading.cpp", 348, ASSERT_TYPE_ASSERT, "(DB_AreFastfileLoadsCompleted())", "%s\n\tThis function must be called once the database is idle, as it will not sync or wait", "DB_AreFastfileLoadsCompleted()") )
    __debugbreak();
  if ( (DB_Zones_GetInUseFlags() & 0x100) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_level_loading.cpp", 349, ASSERT_TYPE_ASSERT, "(( DB_Zones_GetInUseFlags() & DB_ZONE_GAME ) != 0)", (const char *)&queryFormat, "( DB_Zones_GetInUseFlags() & DB_ZONE_GAME ) != 0") )
    __debugbreak();
  if ( (DB_Zones_GetInUseFlags() & 0x80u) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_level_loading.cpp", 350, ASSERT_TYPE_ASSERT, "(( DB_Zones_GetInUseFlags() & DB_ZONE_UI_SCENE ) == 0)", (const char *)&queryFormat, "( DB_Zones_GetInUseFlags() & DB_ZONE_UI_SCENE ) == 0") )
    __debugbreak();
}

/*
==============
DB_LoadLevelXAssetsNonBlockingFinalize
==============
*/
void DB_LoadLevelXAssetsNonBlockingFinalize(const char *mapName)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_level_loading.cpp", 419, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( (!DB_Zones_IsFinishedLoading(mapName) || DB_Zones_IsPreloadZoneName(mapName)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_level_loading.cpp", 420, ASSERT_TYPE_ASSERT, "(DB_Zones_IsFinishedLoading( mapName ) && !DB_Zones_IsPreloadZoneName( mapName ))", "%s\n\tMap load of %s should be finished", "DB_Zones_IsFinishedLoading( mapName ) && !DB_Zones_IsPreloadZoneName( mapName )", mapName) )
    __debugbreak();
  BG_Customization_UpdatePackageBindings(mapName);
  CL_Transients_OnLevelLoadFinalize();
  Stream_LoadSync_BeginLevelLoad(mapName);
  DB_ValidateHasNoPausedFastfiles();
  DB_DynamicHeap_ValidateClear();
}

/*
==============
DB_LoadLevelXAssetsNonBlockingStart
==============
*/
void DB_LoadLevelXAssetsNonBlockingStart(const char *mapName, bool loadServerZone)
{
  LevelLoad load; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_level_loading.cpp", 360, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !Com_GameMode_SupportsMap(mapName) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_level_loading.cpp", 361, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsMap( mapName ))", (const char *)&queryFormat, "Com_GameMode_SupportsMap( mapName )") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_level_loading.cpp", 362, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::FASTFILES_MULTIPLAYER ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::FASTFILES_MULTIPLAYER )") )
    __debugbreak();
  if ( DB_Zones_IsFinishedLoading(mapName) && !DB_Zones_IsPreloadZoneName(mapName) && !DB_Zones_IsFrontEndSceneZoneName(mapName) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_level_loading.cpp", 363, ASSERT_TYPE_ASSERT, "(!DB_Zones_IsFinishedLoading( mapName ) || DB_Zones_IsPreloadZoneName( mapName ) || DB_Zones_IsFrontEndSceneZoneName( mapName ))", "%s\n\tMap %s should not be loaded yet", "!DB_Zones_IsFinishedLoading( mapName ) || DB_Zones_IsPreloadZoneName( mapName ) || DB_Zones_IsFrontEndSceneZoneName( mapName )", mapName) )
    __debugbreak();
  if ( !DB_AreFastfileLoadsCompleted() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_level_loading.cpp", 364, ASSERT_TYPE_ASSERT, "(DB_AreFastfileLoadsCompleted())", "%s\n\tThis function must be called once the database is idle, as it will not sync or wait", "DB_AreFastfileLoadsCompleted()") )
    __debugbreak();
  if ( g_dbPreloading && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_level_loading.cpp", 366, ASSERT_TYPE_ASSERT, "(!DB_IsPreloading())", "%s\n\tThis function must be called once the database is idle, as it will not sync or wait", "!DB_IsPreloading()") )
    __debugbreak();
  if ( (DB_Zones_GetInUseFlags() & 0x100) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_level_loading.cpp", 369, ASSERT_TYPE_ASSERT, "((DB_Zones_GetInUseFlags() & DB_ZONE_GAME) == 0)", (const char *)&queryFormat, "(DB_Zones_GetInUseFlags() & DB_ZONE_GAME) == 0") )
    __debugbreak();
  if ( (DB_Zones_GetInUseFlags() & 0x80u) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_level_loading.cpp", 370, ASSERT_TYPE_ASSERT, "((DB_Zones_GetInUseFlags() & DB_ZONE_UI_SCENE) == 0)", (const char *)&queryFormat, "(DB_Zones_GetInUseFlags() & DB_ZONE_UI_SCENE) == 0") )
    __debugbreak();
  CrashReport_AddKVP("MapName", mapName);
  ProfLoad_Begin("DB_DecideLevelLoad");
  DB_DecideLevelLoad(&load, mapName);
  ProfLoad_End();
  DB_LoadTimes_BeginMPLevelLoad(mapName);
  Stream_LoadSync_SetSPWaitType(NO_WAIT_AFTER_LEVEL_LOAD);
  LoadBar_EstimateFastfiles(load.info, load.sizeEstimate, load.numZones, 0i64, 0i64);
  DB_ReleaseAllExternalReferences(1);
  ProfLoad_Begin("DB_LoadXAssets");
  DB_LoadFastfiles(load.info, load.numZones, 0, loadServerZone);
  ProfLoad_End();
  Com_FastFile_ResetLevelPreload(mapName);
}

/*
==============
DB_LoadLevelXAssetsNonBlockingTransients
==============
*/

void DB_LoadLevelXAssetsNonBlockingTransients(void)
{
  CL_Transients_OnLevelLoadBegin();
}

/*
==============
DB_LoadLevelXAssetsValidatePostLoad
==============
*/
void DB_LoadLevelXAssetsValidatePostLoad(void)
{
  DB_ValidateHasNoPausedFastfiles();
  DB_DynamicHeap_ValidateClear();
}

