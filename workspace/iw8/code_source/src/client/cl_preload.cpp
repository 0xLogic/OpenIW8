/*
==============
CL_PreloadSP_LoadLevelDone
==============
*/

void __fastcall CL_PreloadSP_LoadLevelDone(bool savegame)
{
  ?CL_PreloadSP_LoadLevelDone@@YAX_N@Z(savegame);
}

/*
==============
CL_PreloadSP_OnLevelUnload
==============
*/

void CL_PreloadSP_OnLevelUnload(void)
{
  ?CL_PreloadSP_OnLevelUnload@@YAXXZ();
}

/*
==============
CL_PreloadSP_ServerAskedForLoad
==============
*/

void __fastcall CL_PreloadSP_ServerAskedForLoad(const char (*r_fileList)[8][64])
{
  ?CL_PreloadSP_ServerAskedForLoad@@YAXAEAY17EA@$$CBD@Z(r_fileList);
}

/*
==============
CL_PreloadSP_MapRestart
==============
*/

void CL_PreloadSP_MapRestart(void)
{
  ?CL_PreloadSP_MapRestart@@YAXXZ();
}

/*
==============
CL_PreloadSP_NewMapLoad
==============
*/

void CL_PreloadSP_NewMapLoad(void)
{
  ?CL_PreloadSP_NewMapLoad@@YAXXZ();
}

/*
==============
CL_PreloadSP_ErrorCleanup
==============
*/

void CL_PreloadSP_ErrorCleanup(void)
{
  ?CL_PreloadSP_ErrorCleanup@@YAXXZ();
}

/*
==============
CL_PreloadSP_InitGame
==============
*/

void __fastcall CL_PreloadSP_InitGame(bool savegame)
{
  ?CL_PreloadSP_InitGame@@YAX_N@Z(savegame);
}

/*
==============
CL_PreloadSP_DelayStreamingYield
==============
*/

void CL_PreloadSP_DelayStreamingYield(void)
{
  ?CL_PreloadSP_DelayStreamingYield@@YAXXZ();
}

/*
==============
CL_PreloadSP_SavegameLoad
==============
*/

void __fastcall CL_PreloadSP_SavegameLoad(const char (*r_fileList)[8][64])
{
  ?CL_PreloadSP_SavegameLoad@@YAXAEAY17EA@$$CBD@Z(r_fileList);
}

/*
==============
CL_PreloadSP_IsYieldingForStreaming
==============
*/

bool __fastcall CL_PreloadSP_IsYieldingForStreaming()
{
  return ?CL_PreloadSP_IsYieldingForStreaming@@YA_NXZ();
}

/*
==============
CL_PreloadSP_Process
==============
*/

void CL_PreloadSP_Process(void)
{
  ?CL_PreloadSP_Process@@YAXXZ();
}

/*
==============
CL_PreloadSP_SyncLoads
==============
*/

void CL_PreloadSP_SyncLoads(void)
{
  ?CL_PreloadSP_SyncLoads@@YAXXZ();
}

/*
==============
CL_PreloadSP_InitVM
==============
*/

void CL_PreloadSP_InitVM(void)
{
  ?CL_PreloadSP_InitVM@@YAXXZ();
}

/*
==============
CL_PreloadSP_IsBusy
==============
*/

bool __fastcall CL_PreloadSP_IsBusy()
{
  return ?CL_PreloadSP_IsBusy@@YA_NXZ();
}

/*
==============
CL_PreloadSP_CheckIsCleared
==============
*/
void CL_PreloadSP_CheckIsCleared()
{
  if ( LOBYTE(s_callbackData_0[7][1][3].modifiedFlags) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_preload.cpp", 144, ASSERT_TYPE_ASSERT, "(!CL_PreloadSP_HasActiveLoads())", (const char *)&queryFormat, "!CL_PreloadSP_HasActiveLoads()") )
    __debugbreak();
  if ( byte_150B02070 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_preload.cpp", 145, ASSERT_TYPE_ASSERT, "(!s_clPreloadState.loadStarted)", (const char *)&queryFormat, "!s_clPreloadState.loadStarted") )
    __debugbreak();
  if ( byte_150B02071 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_preload.cpp", 146, ASSERT_TYPE_ASSERT, "(!s_clPreloadState.loadCompleted)", (const char *)&queryFormat, "!s_clPreloadState.loadCompleted") )
    __debugbreak();
  if ( byte_150B02072 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_preload.cpp", 147, ASSERT_TYPE_ASSERT, "(!s_clPreloadState.yieldingToStreamer)", (const char *)&queryFormat, "!s_clPreloadState.yieldingToStreamer") )
      __debugbreak();
  }
}

/*
==============
CL_PreloadSP_Clear
==============
*/
void CL_PreloadSP_Clear(const bool unload)
{
  int v2; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_preload.cpp", 413, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v2 = R_PopRemoteScreenUpdate();
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_preload.cpp", 391, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( byte_150B02070 && !byte_150B02071 && LOBYTE(s_callbackData_0[7][1][3].modifiedFlags) && (DB_Zones_GetInUseFlags() & 0x600000) != 0 )
  {
    Com_Printf(0, "CL_PRELOADSP: CL_PreloadSP_TryCancel...\n");
    DB_CancelLoadFastfilesByZoneFlags(0x600000u);
    CL_PreloadSP_InternalSync();
    CL_PreloadSP_UnloadInternal();
  }
  if ( unload )
    CL_PreloadSP_UnloadInternal();
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_preload.cpp", 153, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  memset_0(&s_callbackData_0[7][1][3], 0, 0x210ui64);
  R_PushRemoteScreenUpdate(v2);
}

/*
==============
CL_PreloadSP_DelayStreamingYield
==============
*/
void CL_PreloadSP_DelayStreamingYield(void)
{
  dword_150B0207C = Sys_Milliseconds();
}

/*
==============
CL_PreloadSP_ErrorCleanup
==============
*/
void CL_PreloadSP_ErrorCleanup(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_preload.cpp", 601, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  Com_Printf(0, "CL_PRELOADSP: CL_PreloadSP_ErrorCleanup...\n");
  CL_PreloadSP_Clear(1);
}

/*
==============
CL_PreloadSP_HaveFastfilesFinishedLoading
==============
*/
char CL_PreloadSP_HaveFastfilesFinishedLoading()
{
  DDLAccessCallbackData *v0; 
  int v1; 

  if ( !LOBYTE(s_callbackData_0[7][1][3].modifiedFlags) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_preload.cpp", 433, ASSERT_TYPE_ASSERT, "(CL_PreloadSP_HasActiveLoads())", (const char *)&queryFormat, "CL_PreloadSP_HasActiveLoads()") )
    __debugbreak();
  v0 = &s_callbackData_0[7][1][3];
  v1 = 0;
  while ( !LOBYTE(v0->modifiedFlags) || DB_Zones_IsPreloadZoneName((const char *)&s_callbackData_0[7][1][4 * (__int64)v1 + 3]) && DB_Zones_IsFinishedLoading((const char *)&s_callbackData_0[7][1][4 * (__int64)v1 + 3]) )
  {
    ++v1;
    v0 += 4;
    if ( v1 >= 8 )
      return 1;
  }
  return 0;
}

/*
==============
CL_PreloadSP_InitGame
==============
*/
void CL_PreloadSP_InitGame(bool savegame)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_preload.cpp", 623, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  Com_Printf(0, "CL_PRELOADSP: CL_PreloadSP_InitGame...\n");
  CL_PreloadSP_CheckIsCleared();
  if ( !savegame )
  {
    if ( DB_IsDoingSPHotLoad() )
    {
      if ( (DB_Zones_GetInUseFlags() & 0x200000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_preload.cpp", 635, ASSERT_TYPE_ASSERT, "(( DB_Zones_GetInUseFlags() & DB_ZONE_PRELOAD_LEVEL_SP ) == 0)", (const char *)&queryFormat, "( DB_Zones_GetInUseFlags() & DB_ZONE_PRELOAD_LEVEL_SP ) == 0") )
        __debugbreak();
    }
    else
    {
      CL_PreloadSP_Clear(1);
    }
  }
}

/*
==============
CL_PreloadSP_InitVM
==============
*/
void CL_PreloadSP_InitVM(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_preload.cpp", 580, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  Com_Printf(0, "CL_PRELOADSP: CL_PreloadSP_InitVM...\n");
  CL_PreloadSP_CheckIsCleared();
}

/*
==============
CL_PreloadSP_InternalSync
==============
*/
void CL_PreloadSP_InternalSync()
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_preload.cpp", 346, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( LOBYTE(s_callbackData_0[7][1][3].modifiedFlags) && byte_150B02070 && !byte_150B02071 )
  {
    Com_Printf(0, "CL_PRELOADSP: Internal sync\n");
    if ( byte_150B02072 )
      CL_PreloadSP_UnpauseForStreamer();
    DB_SyncXAssetsKeepAlive();
    byte_150B02071 = 1;
  }
}

/*
==============
CL_PreloadSP_IsBusy
==============
*/
bool CL_PreloadSP_IsBusy()
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_preload.cpp", 674, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  return LOBYTE(s_callbackData_0[7][1][3].modifiedFlags) && byte_150B02070 && byte_150B02071 == 0;
}

/*
==============
CL_PreloadSP_IsYieldingForStreaming
==============
*/
char CL_PreloadSP_IsYieldingForStreaming()
{
  if ( LOBYTE(s_callbackData_0[7][1][3].modifiedFlags) && byte_150B02070 )
    return byte_150B02072;
  else
    return 0;
}

/*
==============
CL_PreloadSP_LoadFastfiles
==============
*/
bool CL_PreloadSP_LoadFastfiles(const bool savegame)
{
  __int64 v2; 
  const char *v3; 
  int ZoneIndexFromName; 
  __int64 v5; 
  bool IsTransientZoneName; 
  unsigned int v7; 
  __int64 v9; 
  __int64 v10; 
  int v11; 
  DB_FastfileInfo zoneInfo[8]; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_preload.cpp", 104, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !LOBYTE(s_callbackData_0[7][1][3].modifiedFlags) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_preload.cpp", 105, ASSERT_TYPE_ASSERT, "(CL_PreloadSP_HasActiveLoads())", (const char *)&queryFormat, "CL_PreloadSP_HasActiveLoads()") )
    __debugbreak();
  if ( byte_150B02070 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_preload.cpp", 106, ASSERT_TYPE_ASSERT, "(!s_clPreloadState.loadStarted)", (const char *)&queryFormat, "!s_clPreloadState.loadStarted") )
    __debugbreak();
  if ( byte_150B02071 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_preload.cpp", 107, ASSERT_TYPE_ASSERT, "(!s_clPreloadState.loadCompleted)", (const char *)&queryFormat, "!s_clPreloadState.loadCompleted") )
    __debugbreak();
  v2 = 0i64;
  v3 = (const char *)&s_callbackData_0[7][1][3];
  v11 = 0;
  do
  {
    if ( *v3 )
    {
      if ( (unsigned int)v2 >= 8 )
      {
        LODWORD(v10) = 8;
        LODWORD(v9) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_preload.cpp", 62, ASSERT_TYPE_ASSERT, "(unsigned)( nextIndex ) < (unsigned)( zoneInfoSize )", "nextIndex doesn't index zoneInfoSize\n\t%i not in [0, %i)", v9, v10) )
          __debugbreak();
      }
      ZoneIndexFromName = DB_Zones_GetZoneIndexFromName(v3);
      if ( ZoneIndexFromName == 0xFFFF )
      {
        v5 = v2;
        zoneInfo[v5].name = v3;
        IsTransientZoneName = DB_Zones_IsTransientZoneName(v3);
        v7 = 0x200000;
        if ( IsTransientZoneName )
          v7 = 0x400000;
        zoneInfo[v5].zoneFlags = v7;
        zoneInfo[v5].failureMode = ALLOW_MISSING;
        zoneInfo[v5].priority = 65533;
        v2 = (unsigned int)++v11;
      }
      else if ( (DB_Zones_GetZoneFlagsFromIndex(ZoneIndexFromName) & 0x600000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_preload.cpp", 69, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CL_PRELOAD: Zone '%s' is already loaded and fully processed. We can't preload it.", v3) )
      {
        __debugbreak();
      }
    }
    v3 += 64;
  }
  while ( (__int64)v3 < (__int64)&byte_150B02070 );
  if ( !savegame )
  {
    if ( (_DWORD)v2 )
    {
LABEL_31:
      Com_Printf(0, "PRELOADSP: Kicking off load...\n");
      DB_LoadFastfiles(zoneInfo, v2, 2u, 1);
      goto LABEL_32;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_preload.cpp", 126, ASSERT_TYPE_ASSERT, "(insertIndex > 0)", (const char *)&queryFormat, "insertIndex > 0") )
      __debugbreak();
  }
  if ( (_DWORD)v2 )
    goto LABEL_31;
LABEL_32:
  byte_150B02070 = 1;
  return (_DWORD)v2 != 0;
}

/*
==============
CL_PreloadSP_LoadLevelDone
==============
*/
void CL_PreloadSP_LoadLevelDone(bool savegame)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_preload.cpp", 649, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  Com_Printf(0, "CL_PRELOADSP: CL_PreloadSP_LoadLevelDone...\n");
  CL_PreloadSP_CheckIsCleared();
  if ( !savegame )
    CL_PreloadSP_Clear(1);
}

/*
==============
CL_PreloadSP_MapRestart
==============
*/
void CL_PreloadSP_MapRestart(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_preload.cpp", 569, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  Com_Printf(0, "CL_PRELOADSP: CL_PreloadSP_MapRestart...\n");
  CL_PreloadSP_Clear(0);
}

/*
==============
CL_PreloadSP_NewMapLoad
==============
*/
void CL_PreloadSP_NewMapLoad(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_preload.cpp", 611, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  Com_Printf(0, "CL_PRELOADSP: CL_PreloadSP_NewMapLoad...\n");
  CL_PreloadSP_Clear(0);
}

/*
==============
CL_PreloadSP_OnLevelUnload
==============
*/
void CL_PreloadSP_OnLevelUnload(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_preload.cpp", 590, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  Com_Printf(0, "CL_PRELOADSP: CL_PreloadSP_OnLevelUnload...\n");
  CL_PreloadSP_CheckIsCleared();
  if ( (DB_Zones_GetInUseFlags() & 0x600000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_preload.cpp", 595, ASSERT_TYPE_ASSERT, "(( DB_Zones_GetInUseFlags() & DB_MASK_PRELOAD_TRANSITIONS_SP ) == 0)", (const char *)&queryFormat, "( DB_Zones_GetInUseFlags() & DB_MASK_PRELOAD_TRANSITIONS_SP ) == 0") )
    __debugbreak();
}

/*
==============
CL_PreloadSP_Process
==============
*/
void CL_PreloadSP_Process(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_preload.cpp", 524, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( LOBYTE(s_callbackData_0[7][1][3].modifiedFlags) )
  {
    if ( byte_150B02070 )
    {
      if ( !byte_150B02071 )
      {
        if ( byte_150B02072 || !CL_PreloadSP_HaveFastfilesFinishedLoading() )
        {
          CL_PreloadSP_ProcessYields();
        }
        else
        {
          Com_Printf(0, "CL_PRELOADSP: Finished!\n");
          byte_150B02071 = 1;
        }
      }
    }
    else
    {
      if ( byte_150B02071 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_preload.cpp", 546, ASSERT_TYPE_ASSERT, "(!s_clPreloadState.loadCompleted)", (const char *)&queryFormat, "!s_clPreloadState.loadCompleted") )
        __debugbreak();
      if ( CL_TransientsSP_TransientsNeedDBWork() )
      {
        Com_Printf(0, "CL_PRELOADSP: Can't start yet, transients are busy\n");
      }
      else if ( DB_AreFastfileLoadsCompleted() )
      {
        if ( !CL_PreloadSP_LoadFastfiles(0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_preload.cpp", 560, ASSERT_TYPE_ASSERT, "(CL_PreloadSP_LoadFastfiles( false ))", (const char *)&queryFormat, "CL_PreloadSP_LoadFastfiles( false )") )
          __debugbreak();
        if ( !byte_150B02070 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_preload.cpp", 561, ASSERT_TYPE_ASSERT, "(s_clPreloadState.loadStarted)", (const char *)&queryFormat, "s_clPreloadState.loadStarted") )
          __debugbreak();
      }
      else
      {
        Com_Printf(0, "CL_PRELOADSP: Can't start yet, DB system is busy\n");
      }
    }
  }
}

/*
==============
CL_PreloadSP_ProcessYields
==============
*/
void CL_PreloadSP_ProcessYields()
{
  __int128 v0; 
  unsigned int v1; 
  int v2; 
  const dvar_t *v3; 
  int v4; 
  const dvar_t *v5; 
  const dvar_t *v6; 
  double Quality_Image; 
  float v8; 
  double Float_Internal_DebugName; 
  DB_FastfileInfo zoneInfo; 
  __int128 v11; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_preload.cpp", 308, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !LOBYTE(s_callbackData_0[7][1][3].modifiedFlags) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_preload.cpp", 310, ASSERT_TYPE_ASSERT, "(CL_PreloadSP_HasActiveLoads())", (const char *)&queryFormat, "CL_PreloadSP_HasActiveLoads()") )
    __debugbreak();
  if ( byte_150B02071 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_preload.cpp", 311, ASSERT_TYPE_ASSERT, "(!s_clPreloadState.loadCompleted)", (const char *)&queryFormat, "!s_clPreloadState.loadCompleted") )
    __debugbreak();
  if ( !byte_150B02070 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_preload.cpp", 312, ASSERT_TYPE_ASSERT, "(s_clPreloadState.loadStarted)", (const char *)&queryFormat, "s_clPreloadState.loadStarted") )
    __debugbreak();
  if ( !byte_150B02072 )
  {
    if ( !Sys_IsDatabaseReady() && !DB_AreFastfileLoadsCompleted() )
    {
      v1 = Sys_Milliseconds();
      if ( CL_PreloadSP_ShouldYieldToStreamer(v1) )
      {
        dword_150B02078 = v1;
        Com_Printf(16, "CL_PRELOADSP: Yield for streamer starting at %d milliseconds\n", v1);
        if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_preload.cpp", 260, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
          __debugbreak();
        if ( !LOBYTE(s_callbackData_0[7][1][3].modifiedFlags) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_preload.cpp", 262, ASSERT_TYPE_ASSERT, "(CL_PreloadSP_HasActiveLoads())", (const char *)&queryFormat, "CL_PreloadSP_HasActiveLoads()") )
          __debugbreak();
        if ( byte_150B02071 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_preload.cpp", 263, ASSERT_TYPE_ASSERT, "(!s_clPreloadState.loadCompleted)", (const char *)&queryFormat, "!s_clPreloadState.loadCompleted") )
          __debugbreak();
        if ( !byte_150B02070 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_preload.cpp", 264, ASSERT_TYPE_ASSERT, "(s_clPreloadState.loadStarted)", (const char *)&queryFormat, "s_clPreloadState.loadStarted") )
          __debugbreak();
        if ( byte_150B02072 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_preload.cpp", 265, ASSERT_TYPE_ASSERT, "(!s_clPreloadState.yieldingToStreamer)", (const char *)&queryFormat, "!s_clPreloadState.yieldingToStreamer") )
            __debugbreak();
        }
        Com_Printf(0, "CL_PRELOADSP: CL_PreloadSP_PauseForStreamer\n");
        byte_150B02072 = 1;
        zoneInfo.name = NULL;
        *(_QWORD *)&zoneInfo.zoneFlags = 6291456i64;
        zoneInfo.priority = 0;
        DB_PauseLoadFastfiles(&zoneInfo, 1u);
      }
    }
    return;
  }
  if ( Sys_IsDatabaseReady() && DB_AreFastfileLoadsCompleted() )
  {
    v2 = Sys_Milliseconds();
    v3 = DVARBOOL_cl_preload_sp_yield_for_streamer;
    v4 = v2;
    if ( !DVARBOOL_cl_preload_sp_yield_for_streamer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_preload_sp_yield_for_streamer") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    if ( v3->current.enabled )
    {
      v5 = DVARINT_cl_preload_sp_yield_timeout;
      if ( !DVARINT_cl_preload_sp_yield_timeout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_preload_sp_yield_timeout") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v5);
      if ( v4 > dword_150B02078 + v5->current.integer )
      {
        Com_Printf(16, "CL_PRELOADSP:  Yield for streamer timed out after %d milliseconds\n", (unsigned int)(v4 - dword_150B02078));
LABEL_50:
        dword_150B02074 = v4;
        CL_PreloadSP_UnpauseForStreamer();
        return;
      }
      if ( !Stream_CanStreamMore() )
        goto LABEL_50;
      v6 = DVARINT_cl_preload_sp_yield_minimum_time;
      if ( !DVARINT_cl_preload_sp_yield_minimum_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_preload_sp_yield_minimum_time") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v6);
      if ( v4 > dword_150B02078 + v6->current.integer )
      {
        v11 = v0;
        Quality_Image = Stream_LoadQuality_Image();
        v8 = *(float *)&Quality_Image;
        Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_cl_preload_sp_yield_end_priority, "cl_preload_sp_yield_end_priority");
        if ( v8 >= *(float *)&Float_Internal_DebugName )
          goto LABEL_50;
      }
    }
  }
}

/*
==============
CL_PreloadSP_SavegameLoad
==============
*/
void CL_PreloadSP_SavegameLoad(const char (*r_fileList)[8][64])
{
  DDLAccessCallbackData *v2; 
  const char (*v3)[8][64]; 
  __int64 v4; 
  DDLAccessCallbackData v5; 
  bool Fastfiles; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_preload.cpp", 472, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  CL_PreloadSP_CheckIsCleared();
  v2 = &s_callbackData_0[7][1][3];
  v3 = r_fileList;
  v4 = 4i64;
  do
  {
    v2 += 8;
    v5 = *(DDLAccessCallbackData *)v3;
    v3 = (const char (*)[8][64])((char *)v3 + 128);
    v2[-8] = v5;
    v2[-7] = *(DDLAccessCallbackData *)&(*v3)[-1][-48];
    v2[-6] = *(DDLAccessCallbackData *)&(*v3)[-1][-32];
    v2[-5] = *(DDLAccessCallbackData *)&(*v3)[-1][-16];
    v2[-4] = *(DDLAccessCallbackData *)&(*v3)[-1][0];
    v2[-3] = *(DDLAccessCallbackData *)&(*v3)[0][-48];
    v2[-2] = *(DDLAccessCallbackData *)&(*v3)[0][-32];
    v2[-1] = *(DDLAccessCallbackData *)&(*v3)[0][-16];
    --v4;
  }
  while ( v4 );
  if ( !(*r_fileList)[0][0] )
  {
    CL_PreloadSP_Clear(1);
    return;
  }
  Fastfiles = CL_PreloadSP_LoadFastfiles(1);
  if ( !byte_150B02070 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_preload.cpp", 487, ASSERT_TYPE_ASSERT, "(s_clPreloadState.loadStarted)", (const char *)&queryFormat, "s_clPreloadState.loadStarted") )
    __debugbreak();
  if ( !Fastfiles )
  {
    Com_Printf(0, "CL_PRELOADSP: Kept around preload fastfiles...\n");
LABEL_25:
    byte_150B02071 = 1;
    return;
  }
  Com_Printf(0, "CL_PRELOADSP: Syncing for savegame load...\n");
  if ( byte_150B02072 )
  {
    CL_PreloadSP_UnpauseForStreamer();
    if ( byte_150B02072 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_preload.cpp", 496, ASSERT_TYPE_ASSERT, "(!s_clPreloadState.yieldingToStreamer)", (const char *)&queryFormat, "!s_clPreloadState.yieldingToStreamer") )
        __debugbreak();
    }
  }
  CL_PreloadSP_InternalSync();
  if ( !DB_AreFastfileLoadsCompleted() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_preload.cpp", 500, ASSERT_TYPE_ASSERT, "(DB_AreFastfileLoadsCompleted())", (const char *)&queryFormat, "DB_AreFastfileLoadsCompleted()") )
    __debugbreak();
  if ( CL_PreloadSP_HaveFastfilesFinishedLoading() )
    goto LABEL_25;
  if ( (DB_Zones_GetInUseFlags() & 0x600000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_preload.cpp", 507, ASSERT_TYPE_ASSERT, "(( DB_Zones_GetInUseFlags() & DB_MASK_PRELOAD_TRANSITIONS_SP ) == 0)", (const char *)&queryFormat, "( DB_Zones_GetInUseFlags() & DB_MASK_PRELOAD_TRANSITIONS_SP ) == 0") )
    __debugbreak();
  Com_Error_impl(ERR_SCRIPT, (const ObfuscateErrorText)&stru_1441FE740, 1087i64);
  byte_150B02071 = 1;
}

/*
==============
CL_PreloadSP_ServerAskedForLoad
==============
*/
void CL_PreloadSP_ServerAskedForLoad(const char (*r_fileList)[8][64])
{
  DDLAccessCallbackData *v2; 
  __int64 v3; 
  DDLAccessCallbackData v4; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_preload.cpp", 457, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  CL_PreloadSP_CheckIsCleared();
  if ( !(*r_fileList)[0][0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_preload.cpp", 461, ASSERT_TYPE_ASSERT, "(r_fileList[0][0] != '\\0')", "%s\n\tPreload list is empty!", "r_fileList[0][0] != '\\0'") )
    __debugbreak();
  v2 = &s_callbackData_0[7][1][3];
  v3 = 4i64;
  do
  {
    v2 += 8;
    v4 = *(DDLAccessCallbackData *)r_fileList;
    r_fileList = (const char (*)[8][64])((char *)r_fileList + 128);
    v2[-8] = v4;
    v2[-7] = *(DDLAccessCallbackData *)&(*r_fileList)[-2][16];
    v2[-6] = *(DDLAccessCallbackData *)&(*r_fileList)[-2][32];
    v2[-5] = *(DDLAccessCallbackData *)&(*r_fileList)[-2][48];
    v2[-4] = *(DDLAccessCallbackData *)&(*r_fileList)[-1][0];
    v2[-3] = *(DDLAccessCallbackData *)&(*r_fileList)[-1][16];
    v2[-2] = *(DDLAccessCallbackData *)&(*r_fileList)[-1][32];
    v2[-1] = *(DDLAccessCallbackData *)&(*r_fileList)[-1][48];
    --v3;
  }
  while ( v3 );
  Com_Printf(0, "CL_PRELOADSP: Queued loads...\n");
}

/*
==============
CL_PreloadSP_ShouldYieldToStreamer
==============
*/
bool CL_PreloadSP_ShouldYieldToStreamer(int now)
{
  const dvar_t *v1; 
  const dvar_t *v3; 
  const dvar_t *v4; 
  const dvar_t *v5; 
  const dvar_t *v6; 
  double Quality_Image; 
  float v8; 
  double Float_Internal_DebugName; 

  v1 = DVARBOOL_cl_preload_sp_yield_for_streamer;
  if ( !DVARBOOL_cl_preload_sp_yield_for_streamer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_preload_sp_yield_for_streamer") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( !v1->current.enabled || !Stream_CanStreamMore() )
    return 0;
  v3 = DVARBOOL_bg_cinematicAboveUI;
  if ( !DVARBOOL_bg_cinematicAboveUI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_cinematicAboveUI") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( !v3->current.enabled )
  {
    v4 = DVARBOOL_bg_cinematicCanPause;
    if ( !DVARBOOL_bg_cinematicCanPause && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_cinematicCanPause") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    if ( v4->current.enabled )
    {
      v5 = DVARBOOL_bg_cinematicFullscreen;
      if ( !DVARBOOL_bg_cinematicFullscreen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_cinematicFullscreen") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v5);
      if ( v5->current.enabled && (R_Cinematic_IsStarted() || R_Cinematic_IsPending()) && dword_150B0207C + Dvar_GetInt_Internal_DebugName(DVARINT_cl_preload_sp_yield_delay_time, "cl_preload_sp_yield_delay_time") > now )
        return 0;
    }
  }
  v6 = DVARINT_cl_preload_sp_stream_minimum_time;
  if ( !DVARINT_cl_preload_sp_stream_minimum_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_preload_sp_stream_minimum_time") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( now < dword_150B02074 + v6->current.integer )
    return 0;
  Quality_Image = Stream_LoadQuality_Image();
  v8 = *(float *)&Quality_Image;
  Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_cl_preload_sp_yield_start_priority, "cl_preload_sp_yield_start_priority");
  return v8 < *(float *)&Float_Internal_DebugName;
}

/*
==============
CL_PreloadSP_SyncLoads
==============
*/
void CL_PreloadSP_SyncLoads(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_preload.cpp", 666, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  CL_PreloadSP_InternalSync();
}

/*
==============
CL_PreloadSP_UnloadInternal
==============
*/
char CL_PreloadSP_UnloadInternal()
{
  unsigned int v0; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_preload.cpp", 372, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( (DB_Zones_GetInUseFlags() & 0x600000) != 0 )
    DB_UnloadFastfilesByZoneFlags(0x600000u, 0);
  byte_150B02072 = 0;
  v0 = DB_Zones_GetInUseFlags();
  if ( (v0 & 0x600000) != 0 )
  {
    LOBYTE(v0) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_preload.cpp", 385, ASSERT_TYPE_ASSERT, "(( DB_Zones_GetInUseFlags() & DB_MASK_PRELOAD_TRANSITIONS_SP ) == 0)", (const char *)&queryFormat, "( DB_Zones_GetInUseFlags() & DB_MASK_PRELOAD_TRANSITIONS_SP ) == 0");
    if ( (_BYTE)v0 )
      __debugbreak();
  }
  return v0;
}

/*
==============
CL_PreloadSP_UnpauseForStreamer
==============
*/
void CL_PreloadSP_UnpauseForStreamer()
{
  DB_FastfileInfo zoneInfo; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_preload.cpp", 284, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !LOBYTE(s_callbackData_0[7][1][3].modifiedFlags) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_preload.cpp", 286, ASSERT_TYPE_ASSERT, "(CL_PreloadSP_HasActiveLoads())", (const char *)&queryFormat, "CL_PreloadSP_HasActiveLoads()") )
    __debugbreak();
  if ( byte_150B02071 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_preload.cpp", 287, ASSERT_TYPE_ASSERT, "(!s_clPreloadState.loadCompleted)", (const char *)&queryFormat, "!s_clPreloadState.loadCompleted") )
    __debugbreak();
  if ( !byte_150B02070 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_preload.cpp", 288, ASSERT_TYPE_ASSERT, "(s_clPreloadState.loadStarted)", (const char *)&queryFormat, "s_clPreloadState.loadStarted") )
    __debugbreak();
  if ( !byte_150B02072 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_preload.cpp", 289, ASSERT_TYPE_ASSERT, "(s_clPreloadState.yieldingToStreamer)", (const char *)&queryFormat, "s_clPreloadState.yieldingToStreamer") )
    __debugbreak();
  Com_Printf(0, "CL_PRELOADSP: CL_PreloadSP_UnpauseForStreamer\n");
  byte_150B02072 = 0;
  zoneInfo.name = NULL;
  *(_QWORD *)&zoneInfo.zoneFlags = 6291456i64;
  zoneInfo.priority = 0;
  DB_UnpauseLoadFastfiles(&zoneInfo, 1u);
}

