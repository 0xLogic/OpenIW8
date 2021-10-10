/*
==============
Stream_DBPostFastfilesLoad
==============
*/

bool __fastcall Stream_DBPostFastfilesLoad()
{
  return ?Stream_DBPostFastfilesLoad@@YA_NXZ();
}

/*
==============
Stream_DBIsDeferredFastfileUnloadDone
==============
*/

bool __fastcall Stream_DBIsDeferredFastfileUnloadDone()
{
  return ?Stream_DBIsDeferredFastfileUnloadDone@@YA_NXZ();
}

/*
==============
Stream_DBPostFastfilesUnload
==============
*/

void __fastcall Stream_DBPostFastfilesUnload(const bool isPreload, const bool transientOnlyFree)
{
  ?Stream_DBPostFastfilesUnload@@YAX_N0@Z(isPreload, transientOnlyFree);
}

/*
==============
Stream_DBPreFastfilesLoad
==============
*/

void Stream_DBPreFastfilesLoad(void)
{
  ?Stream_DBPreFastfilesLoad@@YAXXZ();
}

/*
==============
Stream_DBPreShutdown
==============
*/

void Stream_DBPreShutdown(void)
{
  ?Stream_DBPreShutdown@@YAXXZ();
}

/*
==============
Stream_DBPreFastfilesUnload
==============
*/

void __fastcall Stream_DBPreFastfilesUnload(bool isPreload)
{
  ?Stream_DBPreFastfilesUnload@@YAX_N@Z(isPreload);
}

/*
==============
Stream_DBProcessDeferredFastfilesUnload
==============
*/

void Stream_DBProcessDeferredFastfilesUnload(void)
{
  ?Stream_DBProcessDeferredFastfilesUnload@@YAXXZ();
}

/*
==============
Stream_DBIsDeferredFastfileUnloadDone
==============
*/
bool Stream_DBIsDeferredFastfileUnloadDone()
{
  if ( ((unsigned __int8)&s_deferredFastfileUnloadFlags & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", (const void *)&s_deferredFastfileUnloadFlags) )
    __debugbreak();
  return s_deferredFastfileUnloadFlags == 0;
}

/*
==============
Stream_DBPostFastfilesLoad
==============
*/
char Stream_DBPostFastfilesLoad()
{
  bool v0; 
  __int64 streamerDisableCountDuringLevelUnloadAndLoad; 

  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_db_load_unload.cpp", 275, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  v0 = DB_IsDoingTransientOnlyWork() && !s_combineTableFullBuildRequest;
  Stream_CombineTables_BuildIfStale(v0);
  s_combineTableFullBuildRequest = 0;
  if ( DB_IsDoingStreamOnlyWork() )
  {
    if ( s_isStreamerYieldingForTransientLoading )
    {
      s_isStreamerYieldingForTransientLoading = 0;
      Stream_PopRequestYield();
      return 0;
    }
    return 0;
  }
  if ( g_dbPreloading || DB_IsLoadingDebugZone() )
  {
    Stream_MaterialMinDistancesTable_Recompute();
    Stream_OnNewImagesAdded();
    XPak_BuildEntryInfo();
    Stream_PopSyncDisable();
    return 0;
  }
  streamerDisableCountDuringLevelUnloadAndLoad = (unsigned int)streamFrontendGlob->levelInit.streamerDisableCountDuringLevelUnloadAndLoad;
  if ( (unsigned int)streamerDisableCountDuringLevelUnloadAndLoad > 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_db_load_unload.cpp", 312, ASSERT_TYPE_ASSERT, "(streamerDisableCount == 0 || streamerDisableCount == 1 || streamerDisableCount == 2)", (const char *)&queryFormat, "streamerDisableCount == 0 || streamerDisableCount == 1 || streamerDisableCount == 2") )
    __debugbreak();
  if ( (int)streamerDisableCountDuringLevelUnloadAndLoad <= 0 )
    return 0;
  if ( Stream_IsEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_db_load_unload.cpp", 316, ASSERT_TYPE_ASSERT, "(!Stream_IsEnabled())", (const char *)&queryFormat, "!Stream_IsEnabled()") )
    __debugbreak();
  if ( streamFrontendGlob->levelInit.state != LOADING_LEVEL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_db_load_unload.cpp", 317, ASSERT_TYPE_ASSERT, "(streamFrontendGlob->levelInit.state == StreamLevelInit::State::LOADING_LEVEL)", (const char *)&queryFormat, "streamFrontendGlob->levelInit.state == StreamLevelInit::State::LOADING_LEVEL") )
    __debugbreak();
  Stream_MaterialMinDistancesTable_Recompute();
  Stream_OnNewImagesAdded();
  XPak_BuildEntryInfo();
  Stream_LevelInit_PopUseEvictor();
  Stream_LevelInit_ResetAndStart();
  do
  {
    Stream_PopSyncDisable();
    --streamerDisableCountDuringLevelUnloadAndLoad;
  }
  while ( streamerDisableCountDuringLevelUnloadAndLoad );
  return 1;
}

/*
==============
Stream_DBPostFastfilesUnload
==============
*/
void Stream_DBPostFastfilesUnload(const bool isPreload, const bool transientOnlyFree)
{
  unsigned __int32 v4; 
  char v5; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_db_load_unload.cpp", 98, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !DB_IsDoingStreamOnlyWork() )
  {
    if ( Stream_IsEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_db_load_unload.cpp", 105, ASSERT_TYPE_ASSERT, "(!Stream_IsEnabled())", (const char *)&queryFormat, "!Stream_IsEnabled()") )
      __debugbreak();
    v4 = 1;
    if ( isPreload || DB_IsLoadingDebugZone() )
    {
      v4 = 15;
    }
    else
    {
      if ( streamFrontendGlob->levelInit.state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_db_load_unload.cpp", 129, ASSERT_TYPE_ASSERT, "(streamFrontendGlob->levelInit.state == StreamLevelInit::State::UNLOADING_LEVEL)", (const char *)&queryFormat, "streamFrontendGlob->levelInit.state == StreamLevelInit::State::UNLOADING_LEVEL") )
        __debugbreak();
      if ( streamFrontendGlob->levelInit.streamerDisableCountDuringLevelUnloadAndLoad != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_db_load_unload.cpp", 130, ASSERT_TYPE_ASSERT, "( streamFrontendGlob->levelInit.streamerDisableCountDuringLevelUnloadAndLoad ) == ( 1 )", "%s == %s\n\t%i, %i", "streamFrontendGlob->levelInit.streamerDisableCountDuringLevelUnloadAndLoad", "1", streamFrontendGlob->levelInit.streamerDisableCountDuringLevelUnloadAndLoad, 1) )
        __debugbreak();
    }
    v5 = s_combineTableFullBuildRequest;
    if ( !transientOnlyFree )
      v5 = 1;
    s_combineTableFullBuildRequest = v5;
    Streamer_StatusPrint("Streamer DB Post fast file unload flags %x. isPreload=%d, transientOnlyFree=%d \n", v4, isPreload, transientOnlyFree);
    if ( ((unsigned __int8)&s_deferredFastfileUnloadFlags & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", (const void *)&s_deferredFastfileUnloadFlags) )
      __debugbreak();
    if ( s_deferredFastfileUnloadFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_db_load_unload.cpp", 145, ASSERT_TYPE_ASSERT, "(Stream_DBIsDeferredFastfileUnloadDone())", (const char *)&queryFormat, "Stream_DBIsDeferredFastfileUnloadDone()") )
      __debugbreak();
    if ( ((unsigned __int64)&s_deferredFastfileUnloadFlags & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_deferredFastfileUnloadFlags) )
      __debugbreak();
    if ( _InterlockedExchange(&s_deferredFastfileUnloadFlags, v4) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_db_load_unload.cpp", 146, ASSERT_TYPE_ASSERT, "((Sys_InterlockedExchange( &s_deferredFastfileUnloadFlags, static_cast<int>( deferFlags ) )) == (static_cast<int>( DB_DeferFastfileUnloadFlag::NONE )))", (const char *)&queryFormat, "Sys_InterlockedExchange( &s_deferredFastfileUnloadFlags, static_cast<int>( deferFlags ) ) == static_cast<int>( DB_DeferFastfileUnloadFlag::NONE )") )
        __debugbreak();
    }
    Sys_WakeDatabaseThread();
  }
}

/*
==============
Stream_DBPreFastfilesLoad
==============
*/
void Stream_DBPreFastfilesLoad(void)
{
  const dvar_t *v0; 
  unsigned int flags; 
  bool v2; 
  bool IsLoadingDebugZone; 
  bool v4; 
  StreamFrontendGlob *v5; 
  StreamLevelInit::State state; 
  StreamFrontendGlob *v7; 
  ScopedStreamFrontendUpdateLock v8; 

  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_db_load_unload.cpp", 197, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  if ( ((unsigned __int8)&s_deferredFastfileUnloadFlags & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", (const void *)&s_deferredFastfileUnloadFlags) )
    __debugbreak();
  if ( s_deferredFastfileUnloadFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_db_load_unload.cpp", 198, ASSERT_TYPE_ASSERT, "(0 == Sys_InterlockedLoad( &s_deferredFastfileUnloadFlags ))", (const char *)&queryFormat, "0 == Sys_InterlockedLoad( &s_deferredFastfileUnloadFlags )") )
    __debugbreak();
  if ( DB_IsDoingStreamOnlyWork() )
  {
    v0 = DVARBOOL_stream_yieldDuringTransientFastfileRead;
    if ( !DVARBOOL_stream_yieldDuringTransientFastfileRead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_yieldDuringTransientFastfileRead") )
      __debugbreak();
    if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
    {
      flags = v0->flags;
      if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v0->name) )
        __debugbreak();
    }
    if ( v0->current.enabled )
    {
      if ( s_isStreamerYieldingForTransientLoading && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_db_load_unload.cpp", 204, ASSERT_TYPE_ASSERT, "(!s_isStreamerYieldingForTransientLoading)", (const char *)&queryFormat, "!s_isStreamerYieldingForTransientLoading") )
        __debugbreak();
      s_isStreamerYieldingForTransientLoading = 1;
      Stream_PushRequestYield();
    }
  }
  else
  {
    v2 = g_dbPreloading;
    IsLoadingDebugZone = DB_IsLoadingDebugZone();
    v4 = IsLoadingDebugZone;
    if ( v2 || IsLoadingDebugZone )
    {
      Stream_PushSyncDisable();
      if ( v4 )
        Stream_InvalidateAllSorting();
    }
    else
    {
      Stream_PushSyncDisable();
      if ( Stream_IsEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_db_load_unload.cpp", 245, ASSERT_TYPE_ASSERT, "(!Stream_IsEnabled())", (const char *)&queryFormat, "!Stream_IsEnabled()") )
        __debugbreak();
      ScopedStreamFrontendUpdateLock::ScopedStreamFrontendUpdateLock(&v8);
      v5 = streamFrontendGlob;
      state = streamFrontendGlob->levelInit.state;
      if ( state )
      {
        if ( (unsigned int)(state - 2) > 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_db_load_unload.cpp", 258, ASSERT_TYPE_ASSERT, "(streamFrontendGlob->levelInit.state >= StreamLevelInit::State::STARTING && streamFrontendGlob->levelInit.state <= StreamLevelInit::State::DONE)", (const char *)&queryFormat, "streamFrontendGlob->levelInit.state >= StreamLevelInit::State::STARTING && streamFrontendGlob->levelInit.state <= StreamLevelInit::State::DONE") )
          __debugbreak();
        v7 = streamFrontendGlob;
        *(_QWORD *)&streamFrontendGlob->levelInit.state = 4i64;
        v7->levelInit.initialLoadFinishRequestedDueToError = 0;
        *(_QWORD *)&v7->levelInit.loadingState = 0i64;
        v7->levelInit.loadingProgressByte = 0i64;
        v7->levelInit.loadingRegressByte = 0i64;
        v7->levelInit.loadingProgressCount = 0i64;
        v7->levelInit.loadingRegressCount = 0i64;
        v7->levelInit.useLevelInitEvictor = 0;
        v5 = streamFrontendGlob;
      }
      v5->levelInit.state = LOADING_LEVEL;
      if ( streamFrontendGlob->levelInit.streamerDisableCountDuringLevelUnloadAndLoad > 1u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_db_load_unload.cpp", 264, ASSERT_TYPE_ASSERT, "(streamFrontendGlob->levelInit.streamerDisableCountDuringLevelUnloadAndLoad == 0 || streamFrontendGlob->levelInit.streamerDisableCountDuringLevelUnloadAndLoad == 1)", (const char *)&queryFormat, "streamFrontendGlob->levelInit.streamerDisableCountDuringLevelUnloadAndLoad == 0 || streamFrontendGlob->levelInit.streamerDisableCountDuringLevelUnloadAndLoad == 1") )
        __debugbreak();
      ++streamFrontendGlob->levelInit.streamerDisableCountDuringLevelUnloadAndLoad;
      Stream_LevelInit_PushUseEvictor();
      ScopedStreamFrontendUpdateLock::~ScopedStreamFrontendUpdateLock(&v8);
    }
  }
}

/*
==============
Stream_DBPreFastfilesUnload
==============
*/
void Stream_DBPreFastfilesUnload(bool isPreload)
{
  const char *v2; 
  StreamFrontendGlob *v3; 
  __int64 v4; 
  ScopedStreamFrontendUpdateLock v5; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_db_load_unload.cpp", 37, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !DB_IsDoingStreamOnlyWork() )
  {
    if ( isPreload || DB_IsLoadingDebugZone() )
      isPreload = 1;
    v2 = "not preload";
    if ( isPreload )
      v2 = "preload";
    Streamer_StatusPrint("Streamer DB Pre fast file unload: %s\n", v2);
    if ( !isPreload )
    {
      ScopedStreamFrontendUpdateLock::ScopedStreamFrontendUpdateLock(&v5);
      v3 = streamFrontendGlob;
      *(_QWORD *)&streamFrontendGlob->levelInit.state = 4i64;
      v3->levelInit.initialLoadFinishRequestedDueToError = 0;
      *(_QWORD *)&v3->levelInit.loadingState = 0i64;
      v3->levelInit.loadingProgressByte = 0i64;
      v3->levelInit.loadingRegressByte = 0i64;
      v3->levelInit.loadingProgressCount = 0i64;
      v3->levelInit.loadingRegressCount = 0i64;
      v3->levelInit.useLevelInitEvictor = 0;
      streamFrontendGlob->levelInit.state = LOADING_DONE;
      if ( streamFrontendGlob->levelInit.streamerDisableCountDuringLevelUnloadAndLoad && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_db_load_unload.cpp", 65, ASSERT_TYPE_ASSERT, "( streamFrontendGlob->levelInit.streamerDisableCountDuringLevelUnloadAndLoad ) == ( 0 )", "%s == %s\n\t%i, %i", "streamFrontendGlob->levelInit.streamerDisableCountDuringLevelUnloadAndLoad", "0", streamFrontendGlob->levelInit.streamerDisableCountDuringLevelUnloadAndLoad, 0i64) )
        __debugbreak();
      streamFrontendGlob->levelInit.streamerDisableCountDuringLevelUnloadAndLoad = 1;
      ScopedStreamFrontendUpdateLock::~ScopedStreamFrontendUpdateLock(&v5);
    }
    Stream_PushSyncDisable();
    if ( Stream_IsEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_db_load_unload.cpp", 74, ASSERT_TYPE_ASSERT, "(!Stream_IsEnabled())", (const char *)&queryFormat, "!Stream_IsEnabled()") )
      __debugbreak();
    Stream_Debug_PreLevelUnload();
    Stream_Primer_CancelAndWait();
    Stream_BackendQueue_ForcedFlush();
    Stream_InvalidateAllSorting();
    if ( Stream_BackendQueue_GetCopyTextureDescQueueSize() )
    {
      LODWORD(v4) = Stream_BackendQueue_GetCopyTextureDescQueueSize();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_db_load_unload.cpp", 92, ASSERT_TYPE_ASSERT, "( 0 ) == ( Stream_BackendQueue_GetCopyTextureDescQueueSize() )", "%s == %s\n\t%u, %u", "0", "Stream_BackendQueue_GetCopyTextureDescQueueSize()", 0i64, v4) )
        __debugbreak();
    }
  }
}

/*
==============
Stream_DBPreShutdown
==============
*/
void Stream_DBPreShutdown(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_db_load_unload.cpp", 340, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  Stream_PushSyncDisable();
  Stream_Primer_CancelAndWait();
  Stream_InvalidateAllSorting();
}

/*
==============
Stream_DBProcessDeferredFastfilesUnload
==============
*/
void Stream_DBProcessDeferredFastfilesUnload(void)
{
  volatile int v0; 

  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_db_load_unload.cpp", 159, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  if ( ((unsigned __int8)&s_deferredFastfileUnloadFlags & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", (const void *)&s_deferredFastfileUnloadFlags) )
    __debugbreak();
  v0 = s_deferredFastfileUnloadFlags;
  if ( s_deferredFastfileUnloadFlags )
  {
    if ( Stream_IsEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_db_load_unload.cpp", 167, ASSERT_TYPE_ASSERT, "(!Stream_IsEnabled())", (const char *)&queryFormat, "!Stream_IsEnabled()") )
      __debugbreak();
    if ( !Sys_IsDatabaseReady() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_db_load_unload.cpp", 168, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseReady())", (const char *)&queryFormat, "Sys_IsDatabaseReady()") )
      __debugbreak();
    if ( (v0 & 1) != 0 )
      Stream_BackendQueue_PostLevelUnload();
    if ( (v0 & 2) != 0 )
    {
      Stream_CombineTables_BuildIfStale(0);
      s_combineTableFullBuildRequest = 0;
    }
    if ( (v0 & 4) != 0 )
      XPak_BuildEntryInfo();
    if ( (v0 & 8) != 0 )
      Stream_PopSyncDisable();
    if ( ((unsigned __int64)&s_deferredFastfileUnloadFlags & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_deferredFastfileUnloadFlags) )
      __debugbreak();
    if ( _InterlockedExchange(&s_deferredFastfileUnloadFlags, 0) != v0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_db_load_unload.cpp", 191, ASSERT_TYPE_ASSERT, "((Sys_InterlockedExchange( &s_deferredFastfileUnloadFlags, static_cast<int>( DB_DeferFastfileUnloadFlag::NONE ) )) == (static_cast<int>( flags )))", (const char *)&queryFormat, "Sys_InterlockedExchange( &s_deferredFastfileUnloadFlags, static_cast<int>( DB_DeferFastfileUnloadFlag::NONE ) ) == static_cast<int>( flags )") )
      __debugbreak();
  }
}

