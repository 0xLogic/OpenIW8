/*
==============
DB_CancelPauseFastfileLoad
==============
*/

void __fastcall DB_CancelPauseFastfileLoad(const int zoneIndex)
{
  ?DB_CancelPauseFastfileLoad@@YAXH@Z(zoneIndex);
}

/*
==============
DB_CleanupPlaylistFile
==============
*/

void __fastcall DB_CleanupPlaylistFile(DBFile *file)
{
  ?DB_CleanupPlaylistFile@@YAXPEAUDBFile@@@Z(file);
}

/*
==============
DB_ValidateHasNoPausedFastfiles
==============
*/

void DB_ValidateHasNoPausedFastfiles(void)
{
  ?DB_ValidateHasNoPausedFastfiles@@YAXXZ();
}

/*
==============
DB_ReadXFile
==============
*/

void __fastcall DB_ReadXFile(unsigned __int8 *pos, unsigned __int64 size)
{
  ?DB_ReadXFile@@YAXPEAE_K@Z(pos, size);
}

/*
==============
DB_PauseFastfileLoad
==============
*/

void __fastcall DB_PauseFastfileLoad(const int zoneIndex)
{
  ?DB_PauseFastfileLoad@@YAXH@Z(zoneIndex);
}

/*
==============
DB_UnpauseFastfileLoad
==============
*/

void __fastcall DB_UnpauseFastfileLoad(const int zoneIndex)
{
  ?DB_UnpauseFastfileLoad@@YAXH@Z(zoneIndex);
}

/*
==============
DB_CancelPauseFastfileLoad
==============
*/
void DB_CancelPauseFastfileLoad(const int zoneIndex)
{
  if ( s_loadPauseState.pausedZoneIndex == zoneIndex )
  {
    s_loadPauseState.pausedZoneIndex = 0;
    DB_BackendCallbacks_ReleaseSavedSubmitQueue(s_loadPauseState.pauseBackendCallbackSubmitQueue, s_loadPauseState.pausedBackendCallbackSubmitQueueSize);
    s_loadPauseState.pausedBackendCallbackSubmitQueueSize = 0;
  }
}

/*
==============
DB_CleanupPlaylistFile
==============
*/
void DB_CleanupPlaylistFile(DBFile *file)
{
  const char *v2; 
  __int64 v3; 
  char v4; 
  __int64 v5; 
  char v6; 
  const char *LocalPlaylistFilename; 

  if ( !file && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_file_load.cpp", 179, ASSERT_TYPE_ASSERT, "(file)", (const char *)&queryFormat, "file") )
    __debugbreak();
  v2 = "mp_playlists";
  v3 = 0x7FFFFFFFi64;
  if ( !file && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  do
  {
    v4 = v2[(char *)file - "mp_playlists"];
    v5 = v3;
    v6 = *v2++;
    --v3;
    if ( !v5 )
      break;
    if ( v4 != v6 )
      return;
  }
  while ( v4 );
  Com_PrintError(16, "Playlist fastfile read error\n");
  DB_File_CloseDBFile(&file->dbFileHandle);
  LocalPlaylistFilename = LiveStorage_GetLocalPlaylistFilename();
  remove(LocalPlaylistFilename);
}

/*
==============
DB_PauseFastfileLoad
==============
*/
void DB_PauseFastfileLoad(const int zoneIndex)
{
  const char *v2; 
  int v3; 
  const char *v4; 
  XZoneMemory *zoneMem; 
  DB_AsyncIWFileLoad *residentLoader; 
  __int64 v7; 
  __int64 v8; 
  DB_AsyncIWFileLoad *v9; 

  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_file_load.cpp", 194, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  if ( zoneIndex == 0xFFFF )
  {
    v2 = "zoneIndex != INVALID_ZONE_INDEX";
    v3 = 195;
    v4 = "(zoneIndex != INVALID_ZONE_INDEX)";
  }
  else
  {
    if ( zoneIndex )
      goto LABEL_10;
    v2 = "zoneIndex != DEFAULT_ZONE_INDEX";
    v3 = 196;
    v4 = "(zoneIndex != DEFAULT_ZONE_INDEX)";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_file_load.cpp", v3, ASSERT_TYPE_ASSERT, v4, (const char *)&queryFormat, v2) )
    __debugbreak();
LABEL_10:
  if ( s_loadPauseState.pausedZoneIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_file_load.cpp", 199, ASSERT_TYPE_ASSERT, "(s_loadPauseState.pausedZoneIndex == DEFAULT_ZONE_INDEX)", "%s\n\tCan only pause one zone at a time", "s_loadPauseState.pausedZoneIndex == DEFAULT_ZONE_INDEX") )
    __debugbreak();
  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_file_load.cpp", 70, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  zoneMem = g_streamPosGlob.zoneMem;
  if ( g_streamPosGlob.zoneMem )
  {
    residentLoader = g_streamPosGlob.zoneMem->tempData->residentLoader;
    if ( residentLoader )
      DB_AsyncIWFileLoad::WaitForAsyncCompletion(residentLoader);
    v7 = 1712i64;
    v8 = 2i64;
    do
    {
      v9 = *(DB_AsyncIWFileLoad **)&zoneMem->tempData->openData.baseFastfile.name[v7];
      if ( v9 )
        DB_AsyncIWFileLoad::WaitForAsyncCompletion(v9);
      v7 += 8i64;
      --v8;
    }
    while ( v8 );
  }
  memcpy_0(&s_loadPauseState.streamPos, &g_streamPosGlob, sizeof(s_loadPauseState.streamPos));
  DB_PatchMem_GetRewindDataCopy(&s_loadPauseState.rewindData);
  s_loadPauseState.pausedZoneIndex = zoneIndex;
  s_loadPauseState.pausedBackendCallbackSubmitQueueSize = DB_BackendCallbacks_SaveSubmitQueue(s_loadPauseState.pauseBackendCallbackSubmitQueue, 0x800u);
}

/*
==============
DB_ReadXFile
==============
*/
void DB_ReadXFile(unsigned __int8 *pos, unsigned __int64 size)
{
  DB_AsyncIWFileLoad *residentLoader; 
  const dvar_t *v5; 

  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_file_load.cpp", 119, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  if ( !size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_file_load.cpp", 120, ASSERT_TYPE_ASSERT, "(size)", (const char *)&queryFormat, "size") )
    __debugbreak();
  if ( !g_streamPosGlob.tempData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_file_load.cpp", 121, ASSERT_TYPE_ASSERT, "(g_streamPosGlob.tempData)", (const char *)&queryFormat, "g_streamPosGlob.tempData") )
    __debugbreak();
  if ( DB_IsInPostload() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_file_load.cpp", 124, ASSERT_TYPE_ASSERT, "(!DB_IsInPostload())", (const char *)&queryFormat, "!DB_IsInPostload()") )
    __debugbreak();
  ProfLoad_DB_Begin("DB_ReadXFile");
  DB_LoadTimes_OnFileRead(size);
  if ( DB_IsDoingSPHotLoad() )
  {
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DB_ReadXFile: Preload warning");
    if ( s_warnPostloadCounter )
    {
      --s_warnPostloadCounter;
    }
    else
    {
      Sys_Printf("WARNING: Doing SP hot load, but hitting disc for file : %s\n", g_streamPosGlob.tempData->openData.baseFastfile.name);
      s_warnPostloadCounter = 5000;
    }
    Sys_ProfEndNamedEvent();
  }
  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_file_load.cpp", 96, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  if ( !size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_file_load.cpp", 97, ASSERT_TYPE_ASSERT, "(size)", (const char *)&queryFormat, "size") )
    __debugbreak();
  if ( !g_streamPosGlob.tempData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_file_load.cpp", 98, ASSERT_TYPE_ASSERT, "(g_streamPosGlob.tempData)", (const char *)&queryFormat, "g_streamPosGlob.tempData") )
    __debugbreak();
  if ( g_streamPosGlob.tempData->openData.diffCount )
  {
    DB_BinaryPatch_CopyData(g_streamPosGlob.tempData, pos, size);
  }
  else
  {
    residentLoader = g_streamPosGlob.tempData->residentLoader;
    if ( !residentLoader && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_file_load.cpp", 111, ASSERT_TYPE_ASSERT, "(loader)", (const char *)&queryFormat, "loader") )
      __debugbreak();
    DB_AsyncIWFileLoad::ReadDataAuthCmp(residentLoader, pos, size);
  }
  v5 = DCONST_DVARBOOL_db_validateloadhash;
  if ( !DCONST_DVARBOOL_db_validateloadhash && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "db_validateloadhash") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled )
    j_CoD_XXH64_update((XXH64_state_s *)&g_streamPosGlob.runningHash, pos, size);
  LoadBar_ReadResident(size);
  ProfLoad_DB_End();
}

/*
==============
DB_UnpauseFastfileLoad
==============
*/
void DB_UnpauseFastfileLoad(const int zoneIndex)
{
  const char *v2; 
  int v3; 
  const char *v4; 

  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_file_load.cpp", 219, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  if ( zoneIndex == 0xFFFF )
  {
    v2 = "zoneIndex != INVALID_ZONE_INDEX";
    v3 = 220;
    v4 = "(zoneIndex != INVALID_ZONE_INDEX)";
  }
  else
  {
    if ( zoneIndex )
      goto LABEL_10;
    v2 = "zoneIndex != DEFAULT_ZONE_INDEX";
    v3 = 221;
    v4 = "(zoneIndex != DEFAULT_ZONE_INDEX)";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_file_load.cpp", v3, ASSERT_TYPE_ASSERT, v4, (const char *)&queryFormat, v2) )
    __debugbreak();
LABEL_10:
  if ( s_loadPauseState.pausedZoneIndex != zoneIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_file_load.cpp", 222, ASSERT_TYPE_ASSERT, "(s_loadPauseState.pausedZoneIndex == zoneIndex)", (const char *)&queryFormat, "s_loadPauseState.pausedZoneIndex == zoneIndex") )
    __debugbreak();
  if ( !g_streamPosGlob.zoneMem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_file_load.cpp", 223, ASSERT_TYPE_ASSERT, "(g_streamPosGlob.zoneMem)", (const char *)&queryFormat, "g_streamPosGlob.zoneMem") )
    __debugbreak();
  memcpy_0(&g_streamPosGlob, &s_loadPauseState.streamPos, sizeof(g_streamPosGlob));
  DB_PatchMem_SetRewindDataFromCopy(&s_loadPauseState.rewindData);
  s_loadPauseState.pausedZoneIndex = 0;
  DB_BackendCallbacks_RestoreSubmitQueue(s_loadPauseState.pauseBackendCallbackSubmitQueue, s_loadPauseState.pausedBackendCallbackSubmitQueueSize);
}

/*
==============
DB_ValidateHasNoPausedFastfiles
==============
*/
void DB_ValidateHasNoPausedFastfiles(void)
{
  int pausedZoneIndex; 

  if ( s_loadPauseState.pausedZoneIndex )
  {
    pausedZoneIndex = s_loadPauseState.pausedZoneIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_file_load.cpp", 255, ASSERT_TYPE_ASSERT, "( s_loadPauseState.pausedZoneIndex ) == ( DEFAULT_ZONE_INDEX )", "%s == %s\n\t%u, %u", "s_loadPauseState.pausedZoneIndex", "DEFAULT_ZONE_INDEX", pausedZoneIndex, 0i64) )
      __debugbreak();
  }
}

