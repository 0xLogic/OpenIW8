/*
==============
SV_InitSP_FreeReliableCommandsForClient
==============
*/

void __fastcall SV_InitSP_FreeReliableCommandsForClient(SvClientSP *cl)
{
  ?SV_InitSP_FreeReliableCommandsForClient@@YAXPEAVSvClientSP@@@Z(cl);
}

/*
==============
SV_InitSP_VariableSettle
==============
*/

void SV_InitSP_VariableSettle(void)
{
  ?SV_InitSP_VariableSettle@@YAXXZ();
}

/*
==============
SvGameModeAppSP::ResetDvars
==============
*/

void __fastcall SvGameModeAppSP::ResetDvars(SvGameModeAppSP *this)
{
  ?ResetDvars@SvGameModeAppSP@@UEAAXXZ(this);
}

/*
==============
SvGameModeAppSP::InitGameMode
==============
*/

void __fastcall SvGameModeAppSP::InitGameMode(SvGameModeAppSP *this)
{
  ?InitGameMode@SvGameModeAppSP@@MEAAXXZ(this);
}

/*
==============
SV_InitSP_StartMap
==============
*/

void __fastcall SV_InitSP_StartMap(int randomSeed)
{
  ?SV_InitSP_StartMap@@YAXH@Z(randomSeed);
}

/*
==============
SV_InitSP_Settle
==============
*/

void SV_InitSP_Settle(void)
{
  ?SV_InitSP_Settle@@YAXXZ();
}

/*
==============
SvGameModeAppSP::ShutdownGameMode
==============
*/

void __fastcall SvGameModeAppSP::ShutdownGameMode(SvGameModeAppSP *this)
{
  ?ShutdownGameMode@SvGameModeAppSP@@MEAAXXZ(this);
}

/*
==============
SvGameModeAppSP::ServerShutdown
==============
*/

void __fastcall SvGameModeAppSP::ServerShutdown(SvGameModeAppSP *this)
{
  ?ServerShutdown@SvGameModeAppSP@@UEAAXXZ(this);
}

/*
==============
SV_InitSP_InitReliableCommandsForClient
==============
*/

void __fastcall SV_InitSP_InitReliableCommandsForClient(SvClientSP *cl)
{
  ?SV_InitSP_InitReliableCommandsForClient@@YAXPEAVSvClientSP@@@Z(cl);
}

/*
==============
SV_InitSP_UpdateNetConstStrings
==============
*/

void SV_InitSP_UpdateNetConstStrings(void)
{
  ?SV_InitSP_UpdateNetConstStrings@@YAXXZ();
}

/*
==============
SvGameModeAppSP::FreeServerMemory
==============
*/

void __fastcall SvGameModeAppSP::FreeServerMemory(SvGameModeAppSP *this)
{
  ?FreeServerMemory@SvGameModeAppSP@@UEBAXXZ(this);
}

/*
==============
SV_InitSP_SpawnServer
==============
*/

void __fastcall SV_InitSP_SpawnServer(const char *server, int savegame, unsigned int mapStart, int isRestart, bool isSPHotLoad)
{
  ?SV_InitSP_SpawnServer@@YAXPEBDHIH_N@Z(server, savegame, mapStart, isRestart, isSPHotLoad);
}

/*
==============
SvPersistentGlobalsSP::ServerShutdown
==============
*/

void __fastcall SvPersistentGlobalsSP::ServerShutdown(SvPersistentGlobalsSP *this, const char *finalMsg)
{
  ?ServerShutdown@SvPersistentGlobalsSP@@UEAAXPEBD@Z(this, finalMsg);
}

/*
==============
SvGameModeAppSP::FreeServerMemory
==============
*/
void SvGameModeAppSP::FreeServerMemory(SvGameModeAppSP *this)
{
  scrContext_t *v1; 

  ScriptableSv_DestroyMemory();
  G_ShutdownTagInfoHeap();
  G_Main_ShutdownXAnimHunkUser();
  SV_MemorySP_Shutdown();
  if ( g_serverHunkUser )
  {
    Mem_HunkUser_Destroy(g_serverHunkUser);
    g_serverHunkUser = NULL;
  }
  v1 = ScriptContext_Server();
  ScriptContext_MemoryFree(v1);
}

/*
==============
SvGameModeAppSP::InitGameMode
==============
*/
void SvGameModeAppSP::InitGameMode(SvGameModeAppSP *this)
{
  this->m_frameDuration = 50;
  SV_Init_RegisterDvarsCommon();
  DVARINT_g_gameskill = Dvar_RegisterInt("TTMRSTRO", 1, 0, 4, 2u, "Game skill level");
  DVARBOOL_g_specialistMode = Dvar_RegisterBool("NPSPRQNQRN", 0, 0, "True if the game difficulty is set to Specialist Mode");
  DVARBOOL_g_yoloMode = Dvar_RegisterBool("LQMTORORON", 0, 0, "True if the game difficulty is set to YOLO");
  DVARBOOL_sv_saveOnStartMap = Dvar_RegisterBool("PPKQNKNMN", 0, 0x40u, "Save at the start of a level");
  DVARINT_RunForTime = Dvar_RegisterInt("MKOPSKQQPK", 0, 0, 0x7FFFFFFF, 0, "Time for the server to run");
  DVARBOOL_serverCulledSounds = Dvar_RegisterBool("MKOSOKPQPP", 1, 4u, "Enable culling of sounds on the server thread");
  DVARBOOL_disableSaveGameScreenShots = Dvar_RegisterBool("NRRKTNSKKT", 0, 4u, "Disable save game screen shots");
  DVARBOOL_sv_clientSaveFastCheckOn = Dvar_RegisterBool("NKMMPQNKOK", 1, 0, "Enable client save game checks every frame");
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_SOFT_LAND) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_init_sp.cpp", 1265, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SOUND_SERVER_CULL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SOUND_SERVER_CULL )") )
    __debugbreak();
  SV_DemoSP_InitSystem();
  G_SpawnSP_Init();
}

/*
==============
SvGameModeAppSP::ResetDvars
==============
*/
void SvGameModeAppSP::ResetDvars(SvGameModeAppSP *this)
{
  ;
}

/*
==============
SV_InitSP_ClearServer
==============
*/
void SV_InitSP_ClearServer()
{
  SvGameModeAppSP *ActiveServerApplication; 
  signed int i; 
  SvClient *v2; 
  GSaveMemory *v3; 
  char v4; 
  SvGameGlobals *v5; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_init_sp.cpp", 407, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !SvGameModeApplication::HasActiveServerApplication() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_init_sp.cpp", 408, ASSERT_TYPE_ASSERT, "(SvGameModeApplication::HasActiveServerApplication())", (const char *)&queryFormat, "SvGameModeApplication::HasActiveServerApplication()") )
    __debugbreak();
  if ( (_BYTE)SvGameModeApplication::ms_allocType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_gamemode_app_sp.h", 97, ASSERT_TYPE_ASSERT, "( ms_allocType == GameModeType::SP )", (const char *)&queryFormat, "ms_allocType == GameModeType::SP") )
    __debugbreak();
  ActiveServerApplication = (SvGameModeAppSP *)SvGameModeApplication::GetActiveServerApplication();
  SvGameModeAppSP::ResetServerTime(ActiveServerApplication);
  for ( i = 0; i < (int)SvClient::ms_clientCount; *(_DWORD *)&v2->state = 0 )
  {
    if ( (_BYTE)SvClient::ms_allocatedType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_client_sp.h", 83, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
      __debugbreak();
    v2 = SvClient::GetCommonClient(i++) + 1;
    v2->__vftable = NULL;
  }
  if ( (_BYTE)GSaveMemory::ms_allocatedType )
  {
    if ( !GSaveMemory::ms_gSaveMemory && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savememory.h", 199, ASSERT_TYPE_ASSERT, "( ms_gSaveMemory )", (const char *)&queryFormat, "ms_gSaveMemory") )
      __debugbreak();
    v3 = GSaveMemory::ms_gSaveMemory;
    GSaveMemory::ms_gSaveMemory->CleanupSaveMemory(GSaveMemory::ms_gSaveMemory);
    v3->ShutdownSaveSystem(v3);
  }
  G_Utils_ClearCachedModels();
  v4 = SvGameGlobals::ms_allocatedType;
  if ( !(_BYTE)SvGameGlobals::ms_allocatedType )
  {
LABEL_25:
    if ( v4 != 1 )
      goto LABEL_30;
    goto LABEL_26;
  }
  if ( (_BYTE)SvGameGlobals::ms_allocatedType != HALF )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 152, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubServerType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubServerType::ALLOCATION_TYPE") )
      __debugbreak();
    v4 = SvGameGlobals::ms_allocatedType;
    goto LABEL_25;
  }
LABEL_26:
  if ( !SvGameGlobals::ms_svGameGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 156, ASSERT_TYPE_ASSERT, "(ms_svGameGlobals != 0)", "%s\n\tClearSvGameGlobalsMemoryCommon: Trying to clear server global memory but none have been allocated\n", "ms_svGameGlobals != NULL") )
    __debugbreak();
  SvGameGlobals::ClearConfigStrings(SvGameGlobals::ms_svGameGlobals);
  SvGameGlobals::~SvGameGlobals(SvGameGlobals::ms_svGameGlobals);
  memset_0(SvGameGlobals::ms_svGameGlobals, 0, 0x61C8ui64);
  SvGameGlobalsSP::SvGameGlobalsSP((SvGameGlobalsSP *)SvGameGlobals::ms_svGameGlobals);
  SvGameGlobals::ms_svGameGlobals = v5;
LABEL_30:
  *(_QWORD *)&SvStaticGlobals::ms_svStaticGlobals.state = 0i64;
  qword_14E91B0F0 = 0i64;
  qword_14E91B0F8 = 0i64;
  qword_14E91B100 = NULL;
  SV_Timing_Clear();
  SV_SnapshotSP_Clear();
  NetConstStrings_Clear();
  BgDynamicLimits::UpdateDynamicValues();
  SV_SaveSP_ClearPendingSaves();
  com_inServerFrame = 0;
  BG_Omnvar_ClearTables();
}

/*
==============
SV_InitSP_FreeReliableCommandsForClient
==============
*/
void SV_InitSP_FreeReliableCommandsForClient(SvClientSP *cl)
{
  *(_QWORD *)&cl->reliableCommands.header.rover = 0i64;
  cl->reliableCommands.header.sent = 0;
}

/*
==============
SV_InitSP_InitReliableCommandsForClient
==============
*/
void SV_InitSP_InitReliableCommandsForClient(SvClientSP *cl)
{
  *(_QWORD *)&cl->reliableCommands.header.rover = 0i64;
  cl->reliableCommands.header.sent = 0;
}

/*
==============
SV_InitSP_PopRemoteScreenUpdate
==============
*/
char SV_InitSP_PopRemoteScreenUpdate()
{
  int v0; 

  LOBYTE(v0) = Sys_IsMainThread();
  if ( !(_BYTE)v0 )
  {
    LOBYTE(v0) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_init_sp.cpp", 633, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()");
    if ( (_BYTE)v0 )
      __debugbreak();
  }
  if ( r_glob.startedRenderThread )
  {
    if ( s_remoteScreenUpdateNesting && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_init_sp.cpp", 642, ASSERT_TYPE_ASSERT, "(s_remoteScreenUpdateNesting == 0)", (const char *)&queryFormat, "s_remoteScreenUpdateNesting == 0") )
      __debugbreak();
    v0 = R_PopRemoteScreenUpdate();
    s_remoteScreenUpdateNesting = v0;
  }
  return v0;
}

/*
==============
SV_InitSP_PushRemoteScreenUpdate
==============
*/
void SV_InitSP_PushRemoteScreenUpdate()
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_init_sp.cpp", 652, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( r_glob.startedRenderThread )
  {
    R_PushRemoteScreenUpdate(s_remoteScreenUpdateNesting);
    s_remoteScreenUpdateNesting = 0;
  }
}

/*
==============
SV_InitSP_Settle
==============
*/
void SV_InitSP_Settle(void)
{
  __int64 v0; 

  v0 = 5i64;
  do
  {
    G_MainSP_RunPreFrameForDemo();
    SV_MainSP_PreFrame();
    SV_MainSP_RunFrame(SV_FRAME_DO_ALL, 0);
    --v0;
  }
  while ( v0 );
}

/*
==============
SV_InitSP_SpawnServer
==============
*/
void SV_InitSP_SpawnServer(const char *server, int savegame, unsigned int mapStart, int isRestart, bool isSPHotLoad)
{
  char v8; 
  unsigned __int64 v9; 
  __int64 v10; 
  const dvar_t *v11; 
  int ControllerFromClient; 
  BOOL v13; 
  bool v14; 
  SvGameModeApplication *ActiveServerApplication; 
  unsigned int m_frameDuration; 
  unsigned __int8 ActiveGameMode; 
  bool IsAnyLocalServerRunning; 
  unsigned __int64 FreeReserveAmount; 
  unsigned __int64 v20; 
  scrContext_t *v21; 
  scrContext_t *v22; 
  unsigned __int16 v23; 
  char v24; 
  int v25; 
  int v26; 
  SvGameGlobals *SvGameGlobalsCommon; 
  SvGameGlobals *v28; 
  SvGameGlobals *v29; 
  unsigned __int64 v30; 
  volatile __int32 *p_m_svMemoryInitialized; 
  scrContext_t *v32; 
  int v33; 
  CLPauseReason PauseReason; 
  SvGameGlobals *v35; 
  const dvar_t *v36; 
  int v37; 
  int v38; 
  char *fmt; 
  __int64 suppressPlayerNotify; 
  __int64 v43; 
  __int64 v44; 
  __int64 v45; 
  int savegamea; 
  int randomSeed; 
  int v48; 
  unsigned __int64 v49; 
  SaveGame *save[3]; 
  char filename[72]; 

  save[1] = (SaveGame *)-2i64;
  savegamea = savegame;
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "SV_InitSP_SpawnServer");
  v8 = 1;
  SV_InitSP_PopRemoteScreenUpdate();
  Com_SyncThreads();
  SV_InitSP_PushRemoteScreenUpdate();
  Com_SetLocalServerStarting(HALF);
  G_SaveMemorySP_WaitForWritesToComplete(0);
  if ( !savegamea )
    Com_ScreenShotSaveGame_ClearScreenShot();
  v9 = (unsigned __int64)&g_serverThreadOwnership & 3;
  v49 = (unsigned __int64)&g_serverThreadOwnership & 3;
  if ( ((unsigned __int8)&g_serverThreadOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_serverThreadOwnership) )
    __debugbreak();
  if ( _InterlockedIncrement(&g_serverThreadOwnership) != 1 )
  {
    LODWORD(suppressPlayerNotify) = g_serverThreadOwnership;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_init_sp.cpp", 714, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedIncrement( (volatile_int32 *)&g_serverThreadOwnership ) == 1 ) )", "( g_serverThreadOwnership ) = %i", suppressPlayerNotify) )
      __debugbreak();
  }
  SV_DemoSP_AutoSaveEndDemo();
  v10 = tls_index;
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1052i64) = -1;
  if ( !isSPHotLoad )
  {
    DB_StopSPHotLoadBink();
    R_Cinematic_StopPlayback(0);
  }
  SI_SuspendInstall();
  Com_FrontEnd_ExitFrontEnd();
  if ( !Com_GameMode_SupportsFeature(WEAPON_LEAP_LOOP) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 118, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT )") )
    __debugbreak();
  if ( SLODWORD(cl_maxLocalClients) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 119, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients <= 1)", "%s\n\tShould not use this function when more than one local clients are possible.", "cl_maxLocalClients <= 1") )
    __debugbreak();
  CL_MainSP_ShutdownClientBeforeTransientClientSync(LOCAL_CLIENT_0);
  SV_TransientsSP_SyncForSpawnServer();
  Com_FastFile_SyncLoadComplete(server);
  DB_SyncXAssets();
  CL_MainSP_GameAllocate();
  v11 = DVARBOOL_lmc;
  if ( !DVARBOOL_lmc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lmc") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v11->current.enabled )
  {
    SV_InitSP_PopRemoteScreenUpdate();
    ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
    Cbuf_ExecuteBufferInternal(LOCAL_CLIENT_0, ControllerFromClient, "loadzone mychanges\n", 0, 0);
    SV_InitSP_PushRemoteScreenUpdate();
  }
  v48 = Sys_Milliseconds();
  LoadBar_Reset();
  Stream_LoadSync_SetSPWaitType(NO_WAIT_AFTER_LEVEL_LOAD);
  CL_MainSP_InitLoad(server);
  CL_ShutdownDebugData();
  SV_InitSP_PopRemoteScreenUpdate();
  CL_MainSP_MapLoading(server);
  SV_InitSP_PushRemoteScreenUpdate();
  if ( v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_serverThreadOwnership) )
    __debugbreak();
  if ( _InterlockedExchangeAdd(&g_serverThreadOwnership, 0xFFFFFFFF) != 1 )
  {
    LODWORD(suppressPlayerNotify) = g_serverThreadOwnership;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_init_sp.cpp", 794, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedDecrement( (volatile_int32 *)&g_serverThreadOwnership ) == 0 ) )", "( g_serverThreadOwnership ) = %i", suppressPlayerNotify) )
      __debugbreak();
  }
  Live_Frame(0);
  if ( v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_serverThreadOwnership) )
    __debugbreak();
  if ( _InterlockedIncrement(&g_serverThreadOwnership) != 1 )
  {
    LODWORD(suppressPlayerNotify) = g_serverThreadOwnership;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_init_sp.cpp", 798, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedIncrement( (volatile_int32 *)&g_serverThreadOwnership ) == 1 ) )", "( g_serverThreadOwnership ) = %i", suppressPlayerNotify) )
      __debugbreak();
  }
  ProfLoad_Activate();
  ProfLoad_Begin("Clear load game");
  SV_CmdsSP_ClearLoadGame();
  ProfLoad_End();
  ProfLoad_Begin("Shutdown systems");
  v13 = !isSPHotLoad;
  SV_InitSP_PopRemoteScreenUpdate();
  CL_Main_ShutdownAll(isRestart, v13);
  SV_InitSP_PushRemoteScreenUpdate();
  DB_PushFullLevelUnload();
  if ( isSPHotLoad )
    SV_TransientsSP_ShutdownLevel();
  else
    SV_TransientsSP_ShutdownAll();
  SV_TransientsSP_SyncForLoadLevel();
  if ( isSPHotLoad )
    SV_TransientsSP_InitLevel();
  else
    SV_TransientsSP_Init();
  SV_GameSP_ShutdownGameProgs();
  Com_Printf(15, "------ Server Initialization ------\n");
  Com_Printf(15, "Server: %s\n", server);
  LODWORD(fmt) = isRestart;
  Com_Printf(15, "Hotload = %i. Savegame = %i. Restart = %i\n", isSPHotLoad, (unsigned int)savegamea, fmt);
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v10) + 1052i64) = -4609;
  SV_InitSP_ClearServer();
  ProfLoad_End();
  ProfLoad_Begin("Shutdown file system");
  randomSeed = Sys_MillisecondsRaw();
  if ( v49 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_serverThreadOwnership) )
    __debugbreak();
  if ( _InterlockedExchangeAdd(&g_serverThreadOwnership, 0xFFFFFFFF) != 1 )
  {
    LODWORD(suppressPlayerNotify) = g_serverThreadOwnership;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_init_sp.cpp", 884, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedDecrement( (volatile_int32 *)&g_serverThreadOwnership ) == 0 ) )", "( g_serverThreadOwnership ) = %i", suppressPlayerNotify) )
      __debugbreak();
  }
  ProfLoad_Begin("Com_Restart");
  SV_InitSP_PopRemoteScreenUpdate();
  Com_Restart();
  SV_InitSP_PushRemoteScreenUpdate();
  ProfLoad_End();
  if ( v49 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_serverThreadOwnership) )
    __debugbreak();
  if ( _InterlockedIncrement(&g_serverThreadOwnership) != 1 )
  {
    LODWORD(suppressPlayerNotify) = g_serverThreadOwnership;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_init_sp.cpp", 892, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedIncrement( (volatile_int32 *)&g_serverThreadOwnership ) == 1 ) )", "( g_serverThreadOwnership ) = %i", suppressPlayerNotify) )
      __debugbreak();
  }
  if ( isSPHotLoad )
  {
    v8 = 0;
  }
  else
  {
    if ( level.preloadedFiles[0][0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_init_sp.cpp", 902, ASSERT_TYPE_ASSERT, "( ( level.preloadedFiles[0][0] == '\\0' ) )", "( level.preloadedFiles[0] ) = %s", level.preloadedFiles[0]) )
      __debugbreak();
    if ( DB_Zones_GetInUseFlags() == 6291456 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_init_sp.cpp", 903, ASSERT_TYPE_ASSERT, "(DB_Zones_GetInUseFlags() != DB_MASK_PRELOAD_TRANSITIONS_SP)", (const char *)&queryFormat, "DB_Zones_GetInUseFlags() != DB_MASK_PRELOAD_TRANSITIONS_SP") )
      __debugbreak();
  }
  if ( *server )
  {
    ProfLoad_Begin("DB_FreeLevelXAssetsForMap");
    DB_FreeLevelXAssetsForMap(server);
    ProfLoad_End();
  }
  ProfLoad_End();
  DB_PopFullLevelUnload();
  ProfLoad_Begin("After file system restart");
  v14 = v8;
  if ( DB_DevFastBoot_BootTimeCheck() )
    v14 = 0;
  ActiveServerApplication = SvGameModeApplication::GetActiveServerApplication();
  if ( !ActiveServerApplication->m_frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_gamemode_app.h", 162, ASSERT_TYPE_ASSERT, "(m_frameDuration > 0)", "%s\n\tFrame duration has not been initialized", "m_frameDuration > 0") )
    __debugbreak();
  m_frameDuration = ActiveServerApplication->m_frameDuration;
  if ( m_frameDuration != 50 )
  {
    if ( !m_frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_gamemode_app.h", 162, ASSERT_TYPE_ASSERT, "(m_frameDuration > 0)", "%s\n\tFrame duration has not been initialized", "m_frameDuration > 0") )
      __debugbreak();
    LODWORD(v43) = 50;
    LODWORD(suppressPlayerNotify) = ActiveServerApplication->m_frameDuration;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_init_sp.cpp", 948, ASSERT_TYPE_ASSERT, "( svApp->GetFrameDuration() ) == ( SvGameModeApplication::DEFAULT_SERVER_FRAME_DURATION )", "svApp->GetFrameDuration() == SvGameModeApplication::DEFAULT_SERVER_FRAME_DURATION\n\t%i, %i", suppressPlayerNotify, v43) )
      __debugbreak();
  }
  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  BG_Omnvar_LoadTables((GameModeType)ActiveGameMode, NULL, server);
  ProfLoad_Begin("Start loading");
  SV_InitSP_PopRemoteScreenUpdate();
  if ( !ActiveServerApplication->m_frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_gamemode_app.h", 162, ASSERT_TYPE_ASSERT, "(m_frameDuration > 0)", "%s\n\tFrame duration has not been initialized", "m_frameDuration > 0") )
    __debugbreak();
  CL_CGameSP_StartLoading(server, v14, v13, savegamea != 0, ActiveServerApplication->m_frameDuration);
  SV_InitSP_PushRemoteScreenUpdate();
  ProfLoad_End();
  if ( level.forceStreamSyncSP )
  {
    mapStart |= 4u;
    level.forceStreamSyncSP = 0;
  }
  ProfLoad_Begin("DB_LoadLevelXAssets");
  if ( *server )
  {
    SV_InitSP_PopRemoteScreenUpdate();
    DB_LoadLevelXAssets(server, mapStart, 1);
    SV_InitSP_PushRemoteScreenUpdate();
  }
  ProfLoad_End();
  IsAnyLocalServerRunning = Com_IsAnyLocalServerRunning();
  if ( IsAnyLocalServerRunning )
  {
    SV_MemorySP_Shutdown();
    if ( g_serverHunkUser )
      Mem_HunkUser_Reset(g_serverHunkUser);
    v22 = ScriptContext_Server();
    ScriptContext_MemoryClear(v22);
  }
  else
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_LEAP_LOOP) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_init_sp.cpp", 290, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT )") )
      __debugbreak();
    if ( g_serverHunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_init_sp.cpp", 295, ASSERT_TYPE_ASSERT, "( g_serverHunkUser == nullptr )", (const char *)&queryFormat, "g_serverHunkUser == nullptr") )
      __debugbreak();
    g_serverHunkUser = Mem_HunkUser_Create(0xC800000ui64, "g_serverHunkUser", TRACK_NETWORK_ENTITY, MEM_ALLOC_FLAG_NO_MEM_CLEAR);
    FreeReserveAmount = Mem_HunkUser_GetFreeReserveAmount(g_serverHunkUser);
    v20 = Mem_HunkUser_GetFreeReserveAmount(g_serverHunkUser);
    Com_Printf(0, "Mem_HunkUser_GetFreeReserveAmount( g_serverHunkUser ) = %zu kb (Alignment Loss: %zu)\n", v20 >> 10, FreeReserveAmount - 209715200);
    G_Main_InitXanimHunkUser();
    G_InitTagInfoHeap();
    ScriptableSv_InitMemory();
    v21 = ScriptContext_Server();
    ScriptContext_MemoryInit(v21, NULL, 1u);
  }
  SV_MemorySP_InitPreMap(1u);
  v23 = BgWeaponMap::ComputeRuntimeSize(1u, server, 0xFFu, &BgWeaponMap::ms_runtimeIndexBits);
  BgWeaponMap::ms_runtimeSize = v23;
  v24 = BgWeaponMap::ms_runtimeIndexBits;
  v25 = 1 << BgWeaponMap::ms_runtimeIndexBits;
  if ( 1 << BgWeaponMap::ms_runtimeIndexBits < 0 || (unsigned int)v25 > 0xFFFF )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v25, "signed", v25) )
      __debugbreak();
    v23 = BgWeaponMap::ms_runtimeSize;
    v24 = BgWeaponMap::ms_runtimeIndexBits;
  }
  if ( v23 >= (unsigned __int16)v25 )
  {
    v26 = 1 << v24;
    if ( 1 << v24 < 0 || (unsigned int)v26 > 0xFFFF )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v26, "signed", v26) )
        __debugbreak();
      v23 = BgWeaponMap::ms_runtimeSize;
    }
    LODWORD(v45) = (unsigned __int16)v26;
    LODWORD(v44) = v23;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 243, ASSERT_TYPE_ASSERT, "( ms_runtimeSize ) < ( truncate_cast<ushort>(1 << ms_runtimeIndexBits) )", "%s < %s\n\t%i, %i", "ms_runtimeSize", "truncate_cast<ushort>(1 << ms_runtimeIndexBits)", v44, v45) )
      __debugbreak();
  }
  BgWeaponMap::ms_runtimeSizeInitialized = 1;
  ComCharacterLimits::UpdateGameLimits(1u, 0, 0, 0);
  ProfLoad_Begin("REMOTE_SCREEN_UPDATE");
  R_BeginRemoteScreenUpdate();
  ProfLoad_End();
  if ( strchr_0(server, 92) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_init_sp.cpp", 620, ASSERT_TYPE_ASSERT, "( !strchr( server, '\\\\' ) )", (const char *)&queryFormat, "!strchr( server, '\\\\' )") )
    __debugbreak();
  if ( (_BYTE)SvGameGlobals::ms_allocatedType != HALF )
  {
    LODWORD(v43) = (unsigned __int8)SvGameGlobals::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_game_globals_sp.h", 102, ASSERT_TYPE_ASSERT, "(ms_allocatedType == ALLOCATION_TYPE)", "%s\n\tTrying to access server globals, but the server isn't running or its game mode is wrong (ms_allocatedType=%i)", "ms_allocatedType == ALLOCATION_TYPE", v43) )
      __debugbreak();
  }
  SvGameGlobalsCommon = SvGameGlobals::GetSvGameGlobalsCommon();
  Core_strcpy(SvGameGlobalsCommon->m_mapname, 0x40ui64, server);
  SvGameGlobalsCommon->restarting = 0;
  ProfLoad_End();
  ProfLoad_Begin("Initialize config strings");
  if ( (_BYTE)SvGameGlobals::ms_allocatedType != HALF )
  {
    LODWORD(v43) = (unsigned __int8)SvGameGlobals::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_game_globals_sp.h", 102, ASSERT_TYPE_ASSERT, "(ms_allocatedType == ALLOCATION_TYPE)", "%s\n\tTrying to access server globals, but the server isn't running or its game mode is wrong (ms_allocatedType=%i)", "ms_allocatedType == ALLOCATION_TYPE", v43) )
      __debugbreak();
  }
  v28 = SvGameGlobals::GetSvGameGlobalsCommon();
  SvGameGlobals::InitConfigStrings(v28);
  NetConstStrings_BuildStringMap();
  BgDynamicLimits::UpdateDynamicValues();
  BG_Omnvar_InitializeDefaultValues();
  if ( !NetConstStrings_AreStringsLoaded() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_init_sp.cpp", 571, ASSERT_TYPE_ASSERT, "( NetConstStrings_AreStringsLoaded() )", (const char *)&queryFormat, "NetConstStrings_AreStringsLoaded()") )
    __debugbreak();
  ProfLoad_End();
  Com_GetBspFilename(filename, 64, server);
  ProfLoad_Begin("Load collision (server)");
  if ( (_BYTE)SvGameGlobals::ms_allocatedType != HALF )
  {
    LODWORD(v43) = (unsigned __int8)SvGameGlobals::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_game_globals_sp.h", 102, ASSERT_TYPE_ASSERT, "(ms_allocatedType == ALLOCATION_TYPE)", "%s\n\tTrying to access server globals, but the server isn't running or its game mode is wrong (ms_allocatedType=%i)", "ms_allocatedType == ALLOCATION_TYPE", v43) )
      __debugbreak();
  }
  v29 = SvGameGlobals::GetSvGameGlobalsCommon();
  CM_LoadMap(filename, &v29->mapcrc);
  ProfLoad_End();
  ProfLoad_Begin("CM_LoadAddOnMapEnts");
  CM_LoadAddOnMapEnts(server);
  ProfLoad_End();
  ProfLoad_Begin("Com_LoadWorld");
  Com_LoadWorld(filename);
  ProfLoad_End();
  CL_MainSP_GamePostMapMemoryAllocate();
  if ( !g_serverHunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_init_sp.cpp", 175, ASSERT_TYPE_ASSERT, "( g_serverHunkUser )", (const char *)&queryFormat, "g_serverHunkUser") )
    __debugbreak();
  ProfLoad_Begin("SV_MemorySP_InitPostMap");
  ScriptableSv_InitCounts(1u, 0);
  UsableWorld_InitLimits();
  G_MainSP_AllocateGameMemory(g_serverHunkUser, 1u);
  SV_AllocServerSnapshotCache(g_serverHunkUser);
  XAnimProceduralBonesAllocator_AllocateServerMemorySP(g_serverHunkUser, 1);
  ProfLoad_End();
  v30 = Mem_HunkUser_GetFreeReserveAmount(g_serverHunkUser);
  Com_Printf(15, "g_serverHunkUser finished. free memory %zu kb\n", v30 >> 10);
  if ( !SvPersistentGlobals::ms_svPersistent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_persistent_globals.h", 72, ASSERT_TYPE_ASSERT, "(ms_svPersistent)", "%s\n\tAttempting to access server static data outside of an active server context", "ms_svPersistent") )
    __debugbreak();
  if ( !BYTE1(SvGameGlobals::ms_allocatedType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_persistent_globals.h", 73, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access server static data outside of an active server context", "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  p_m_svMemoryInitialized = &SvPersistentGlobals::ms_svPersistent->m_svMemoryInitialized;
  if ( (((_BYTE)SvPersistentGlobals::ms_svPersistent + 20) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &SvPersistentGlobals::ms_svPersistent->m_svMemoryInitialized) )
    __debugbreak();
  _InterlockedExchange(p_m_svMemoryInitialized, 1);
  v32 = ScriptContext_Server();
  ScriptContext_MemoryAllocate(v32);
  SV_MemorySP_PrintAllocationSize(1);
  BgDynamicLimits::UpdateDynamicValues();
  if ( !IsAnyLocalServerRunning )
    Dvar_SetBool_Internal(com_sv_running, 1);
  ProfLoad_Begin("Live_SetCurrentMapname");
  Live_SetCurrentMapname(server);
  ProfLoad_End();
  v33 = (unsigned __int8)(sv_serverId_value + 16);
  sv_serverId_value = v33;
  if ( (v33 & 0xF0) == 0 )
    sv_serverId_value = v33 + 16;
  ProfLoad_Begin("SaveMemory_InitializeSaveSystem");
  if ( (_BYTE)GSaveMemory::ms_allocatedType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_savememory_sp.h", 131, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  if ( !GSaveMemory::ms_gSaveMemory && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savememory.h", 199, ASSERT_TYPE_ASSERT, "( ms_gSaveMemory )", (const char *)&queryFormat, "ms_gSaveMemory") )
    __debugbreak();
  GSaveMemorySP::InitializeSaveSystem((GSaveMemorySP *)GSaveMemory::ms_gSaveMemory);
  ProfLoad_End();
  DynEnt_DebugStart();
  SV_GameSP_InitGameProgs(randomSeed, &savegamea, save);
  Com_Printf(15, "-----------------------------------\n");
  ProfLoad_Begin("Send client game state");
  SV_ClientSP_SendGameState();
  ProfLoad_End();
  ProfLoad_Begin("Init client");
  CL_CGameSP_Init(server, savegamea != 0);
  ProfLoad_End();
  if ( !R_IsInRemoteScreenUpdate() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_init_sp.cpp", 1117, ASSERT_TYPE_ASSERT, "(R_IsInRemoteScreenUpdate() || !IsFastFileLoad())", (const char *)&queryFormat, "R_IsInRemoteScreenUpdate() || !IsFastFileLoad()") )
    __debugbreak();
  ProfLoad_Begin("R_TrySortMaterials");
  R_TrySortMaterialsNoSync();
  ProfLoad_End();
  R_Cinematic_ClearSaveLoad();
  ProfLoad_Begin("Check load level");
  SV_GameSP_CheckLoadLevel(save[0]);
  ProfLoad_End();
  ProfLoad_Begin("Event loop");
  Com_EventLoop();
  ProfLoad_End();
  PauseReason = CL_Pause_GetPauseReason();
  CL_Pause_SetPauseReason((CLPauseReason)(PauseReason | 8));
  ProfLoad_Begin("SV_InitSnapshotSP");
  SV_MainSP_InitSnapshot();
  ProfLoad_End();
  v29[1].gameClientSize = 0;
  if ( DB_DevFastBoot_BootTimeCheck() == FASTBOOT_NONE && !isSPHotLoad && !savegamea )
  {
    ProfLoad_Begin("Save game");
    if ( (_BYTE)SvGameGlobals::ms_allocatedType != HALF )
    {
      LODWORD(v43) = (unsigned __int8)SvGameGlobals::ms_allocatedType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_game_globals_sp.h", 102, ASSERT_TYPE_ASSERT, "(ms_allocatedType == ALLOCATION_TYPE)", "%s\n\tTrying to access server globals, but the server isn't running or its game mode is wrong (ms_allocatedType=%i)", "ms_allocatedType == ALLOCATION_TYPE", v43) )
        __debugbreak();
    }
    v35 = SvGameGlobals::GetSvGameGlobalsCommon();
    v36 = DVARBOOL_sv_saveOnStartMap;
    if ( !DVARBOOL_sv_saveOnStartMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_saveOnStartMap") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v36);
    if ( v36->current.enabled )
    {
      SV_SaveSP_ClearPendingSaves();
      SV_SaveSP_AddPendingSave(server, "Start Level Save", (const char *)&queryFormat.fmt + 3, SAVE_TYPE_AUTOSAVE, 6u, 1);
      ProfLoad_Begin("GamerProfile_UpdateProfileAndSaveIfNeeded");
      v37 = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
      GamerProfile_UpdateProfileAndSaveIfNeeded(v37);
      ProfLoad_End();
      SV_SaveSP_ProcessPendingSaves();
      v35[1].gameClientSize = 1;
    }
    ProfLoad_End();
  }
  ProfLoad_Begin("Register sounds");
  CG_Sound_RegisterMedia();
  ProfLoad_End();
  ProfLoad_Begin("R_EndRemoteScreenUpdate");
  R_EndRemoteScreenUpdate();
  ProfLoad_End();
  ProfLoad_Begin("DB_SyncXAssets");
  DB_SyncXAssets();
  ProfLoad_End();
  DB_LoadLevelXAssetsValidatePostLoad();
  ProfLoad_Begin("DB_WaitStreamSyncSP");
  Stream_LoadSync_WaitAndEndSP(savegamea != 0, 0);
  ProfLoad_End();
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_init_sp.cpp", 1196, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_LEVELZONES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_LEVELZONES )") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_AKIMBO|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_init_sp.cpp", 1197, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_SERVERCLIENTSYNC ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_SERVERCLIENTSYNC )") )
    __debugbreak();
  if ( !SV_TransientsSP_IsSafeToSave() )
  {
    SV_TransientsSP_DumpBusyTransients();
    Sys_Error((const ObfuscateErrorText)&stru_1444D6A80);
  }
  ProfLoad_Deactivate();
  CL_CGameSP_SetActive();
  if ( G_MainSP_IsDemoSaveGame() )
    SV_MainSP_RunFrame(SV_FRAME_DO_ALL, 0);
  if ( G_MainSP_IsDemoSaveGame() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_init_sp.cpp", 1217, ASSERT_TYPE_ASSERT, "(!G_MainSP_IsDemoSaveGame())", (const char *)&queryFormat, "!G_MainSP_IsDemoSaveGame()") )
    __debugbreak();
  v38 = Sys_Milliseconds();
  Com_Printf(15, "Load time: %d msec\n", (unsigned int)(v38 - v48));
  SV_Main_RestrictClientAllowedDvarFlags(0);
  Com_ResetFrametime();
  DB_DevFastBoot_Disable();
  if ( v49 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_serverThreadOwnership) )
    __debugbreak();
  if ( _InterlockedExchangeAdd(&g_serverThreadOwnership, 0xFFFFFFFF) != 1 )
  {
    LODWORD(suppressPlayerNotify) = g_serverThreadOwnership;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_init_sp.cpp", 1233, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedDecrement( (volatile_int32 *)&g_serverThreadOwnership ) == 0 ) )", "( g_serverThreadOwnership ) = %i", suppressPlayerNotify) )
      __debugbreak();
  }
  Blackbox_SendSession(0, 0, server, "sp");
  BB_RecordSystemMemoryFootprint(server, 0);
  Sys_Print("SV_SpawnServer: completed\n");
  Compass_Print("Ready for Compass\n");
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  if ( (__int64)(__rdtsc() - g_timerTickAtBoot) < 0 )
    *(double *)&_XMM0 = *(double *)&_XMM0 + 1.844674407370955e19;
  Com_Printf(0, "Time since boot: %.2fs\n", (double)(*(double *)&_XMM0 * msecPerRawTimerTick * 0.001));
  Com_SetLocalServerStarting(NONE);
  Sys_ProfEndNamedEvent();
}

/*
==============
SV_InitSP_StartMap
==============
*/
void SV_InitSP_StartMap(int randomSeed)
{
  CLPauseReason PauseReason; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_init_sp.cpp", 440, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  com_inServerFrame = 0;
  SvStaticGlobals::ms_svStaticGlobals.state = SS_LOADING;
  SV_MainSP_SetServerTime(0);
  SvGameGlobals::GetSvGameGlobalsCommon()->skelTimeStamp = 0;
  PauseReason = CL_Pause_GetPauseReason();
  CL_Pause_SetPauseReason((CLPauseReason)(PauseReason | 8));
}

/*
==============
SV_InitSP_UpdateNetConstStrings
==============
*/
void SV_InitSP_UpdateNetConstStrings(void)
{
  NetConstStrings_Clear();
  NetConstStrings_BuildStringMap();
  BgDynamicLimits::UpdateDynamicValues();
  BG_Omnvar_InitializeDefaultValues();
  if ( !NetConstStrings_AreStringsLoaded() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_init_sp.cpp", 571, ASSERT_TYPE_ASSERT, "( NetConstStrings_AreStringsLoaded() )", (const char *)&queryFormat, "NetConstStrings_AreStringsLoaded()") )
    __debugbreak();
}

/*
==============
SV_InitSP_VariableSettle
==============
*/
void SV_InitSP_VariableSettle(void)
{
  int i; 

  for ( i = 0; i < level.settleTime; ++i )
  {
    G_MainSP_RunPreFrameForDemo();
    SV_MainSP_PreFrame();
    SV_MainSP_RunFrame(SV_FRAME_DO_ALL, 0);
  }
}

/*
==============
SV_MemorySP_InitPreMap
==============
*/
void SV_MemorySP_InitPreMap(unsigned int clientCount)
{
  __int64 v1; 
  HunkUser *v2; 
  char *v3; 
  HunkUser *v4; 
  SvGameGlobalsSP *v5; 
  HunkUser *v6; 
  SvGameGlobals *v7; 
  SvClient *v8; 
  SvClient **v9; 
  __int64 v10; 
  HunkUser *v11; 
  unsigned __int64 v12; 
  SvDemo *v13; 
  void (__fastcall *InitServerDemoMessageMem)(SvDemo *, unsigned __int8 *, unsigned __int64); 
  unsigned int ServerDemoMessageSize; 
  unsigned __int64 FreeReserveAmount; 

  v1 = clientCount;
  if ( !g_serverHunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_init_sp.cpp", 155, ASSERT_TYPE_ASSERT, "( g_serverHunkUser )", (const char *)&queryFormat, "g_serverHunkUser") )
    __debugbreak();
  ProfLoad_Begin("SV_MemorySP_InitPreMap");
  v2 = g_serverHunkUser;
  if ( BYTE1(SvGameGlobals::ms_allocatedType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_persistent_globals.h", 106, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( SvPersistentGlobals::ms_svPersistent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_persistent_globals.h", 107, ASSERT_TYPE_ASSERT, "( ms_svPersistent == 0 )", (const char *)&queryFormat, "ms_svPersistent == NULL") )
    __debugbreak();
  v3 = (char *)Mem_HunkUser_AllocInternal(v2, 0x20ui64, 0x80ui64, "SvPersistentGlobals::AllocateServerPersistentGlobalsMemoryCommon");
  *((_QWORD *)v3 + 1) = 0i64;
  *(_QWORD *)(v3 + 20) = 0i64;
  *((_DWORD *)v3 + 7) = 0;
  *(_QWORD *)v3 = &SvPersistentGlobalsSP::`vftable';
  SvPersistentGlobals::ms_svPersistent = (SvPersistentGlobals *)v3;
  *((_DWORD *)v3 + 4) = 0x80000;
  SvPersistentGlobals::ms_svPersistent->m_skelMemory = (char *)Mem_HunkUser_AllocInternal(v2, SvPersistentGlobals::ms_svPersistent->m_skelMemSize, 0x80ui64, "SvPersistentGlobals::AllocateServerPersistentGlobalsMemoryCommon");
  v4 = g_serverHunkUser;
  BYTE1(SvGameGlobals::ms_allocatedType) = 1;
  if ( (_BYTE)SvGameGlobals::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 114, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tCreating SvGameGlobals when still marked as allocated by %d", "ms_allocatedType == GameModeType::NONE", (unsigned __int8)SvGameGlobals::ms_allocatedType) )
    __debugbreak();
  if ( SvGameGlobals::ms_svGameGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 115, ASSERT_TYPE_ASSERT, "(ms_svGameGlobals == nullptr)", "%s\n\tCreating SvGameGlobals when singleton already exists", "ms_svGameGlobals == nullptr") )
    __debugbreak();
  v5 = (SvGameGlobalsSP *)Mem_HunkUser_AllocInternal(v4, 0x61C8ui64, 0x80ui64, "SvGameGlobals::AllocateSvGameGlobalsMemoryCommon");
  memset_0(v5, 0, sizeof(SvGameGlobalsSP));
  SvGameGlobalsSP::SvGameGlobalsSP(v5);
  v6 = g_serverHunkUser;
  SvGameGlobals::ms_svGameGlobals = v7;
  LOBYTE(SvGameGlobals::ms_allocatedType) = 1;
  if ( (_BYTE)SvClient::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_client.h", 147, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( SvClient::ms_clientCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_client.h", 148, ASSERT_TYPE_ASSERT, "( ms_clientCount == 0 )", (const char *)&queryFormat, "ms_clientCount == 0") )
    __debugbreak();
  v8 = (SvClient *)Mem_HunkUser_AllocInternal(v6, (unsigned int)(56112 * v1), 0x80ui64, "SvClient::AllocateClientsMemoryCommon");
  if ( (_DWORD)v1 )
  {
    v9 = SvClient::ms_clients;
    v10 = v1;
    do
    {
      if ( *v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_client.h", 159, ASSERT_TYPE_ASSERT, "( !ms_clients[clientIndex] )", (const char *)&queryFormat, "!ms_clients[clientIndex]") )
        __debugbreak();
      v8->state = CS_FREE;
      v8->__vftable = (SvClient_vtbl *)&SvClientSP::`vftable';
      *v9 = v8;
      v8 = (SvClient *)((char *)v8 + 56112);
      ++v9;
      --v10;
    }
    while ( v10 );
  }
  v11 = g_serverHunkUser;
  SvClient::ms_clientCount = v1;
  LOBYTE(SvClient::ms_allocatedType) = 1;
  if ( (_BYTE)SvDemo::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_demo.h", 277, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( SvDemo::ms_gServerDemoSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_demo.h", 278, ASSERT_TYPE_ASSERT, "( ms_gServerDemoSystem == 0 )", (const char *)&queryFormat, "ms_gServerDemoSystem == NULL") )
    __debugbreak();
  v12 = SvDemoSP::GetServerDemoMessageSize() + 12729800;
  v13 = (SvDemo *)Mem_HunkUser_AllocInternal(v11, v12, 0x80ui64, "SvDemo::AllocateMemory");
  memset_0(v13, 0, (unsigned int)v12);
  memset_0(&v13[1], 0, 0xC23DC0ui64);
  v13->__vftable = (SvDemo_vtbl *)&SvDemoSP::`vftable';
  SvDemo::ms_gServerDemoSystem = v13;
  InitServerDemoMessageMem = v13->InitServerDemoMessageMem;
  ServerDemoMessageSize = SvDemoSP::GetServerDemoMessageSize();
  InitServerDemoMessageMem(SvDemo::ms_gServerDemoSystem, (unsigned __int8 *)&v13[1591225], ServerDemoMessageSize);
  LOBYTE(SvDemo::ms_allocatedType) = 1;
  ProfLoad_End();
  FreeReserveAmount = Mem_HunkUser_GetFreeReserveAmount(g_serverHunkUser);
  Com_Printf(15, "g_serverHunkUser stage 1. free memory %zu kb\n", FreeReserveAmount >> 10);
}

/*
==============
SV_MemorySP_PrintAllocationSize
==============
*/
void SV_MemorySP_PrintAllocationSize(int maxClients)
{
  const dvar_t *v1; 
  unsigned int v3; 
  unsigned int v4; 
  unsigned int GameMemoryAllocationSize; 
  unsigned int v6; 
  unsigned int AllocationSize; 
  unsigned int v8; 
  unsigned int ServerAllocationSizeSP; 

  v1 = DCONST_DVARBOOL_sv_memory_print;
  if ( !DCONST_DVARBOOL_sv_memory_print && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_memory_print") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
  {
    if ( maxClients != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_init_sp.cpp", 213, ASSERT_TYPE_ASSERT, "(maxClients == 1)", "%s\n\tSingle player only supports a single client", "maxClients == 1") )
      __debugbreak();
    Com_Printf(15, "[MemorySP] Begin\n");
    Com_Printf(15, "[MemorySP] SvPersistentGlobalsSP::GetServerPersistentGlobalsMemorySizeSP %i kb\n", 512i64);
    Com_Printf(15, "[MemorySP] SvGameGlobalsSP::GetSvGameGlobalsMemorySizeSP %i kb\n", 24i64);
    Com_Printf(15, "[MemorySP] SvClientSP::GetClientMemorySizeSP %i kb\n", (unsigned int)(56112 * maxClients) >> 10);
    v3 = SvDemoSP::GetServerDemoMessageSize() + 12729800;
    v4 = 56112 * maxClients + 549631 + ((v3 + 127) & 0xFFFFFF80);
    Com_Printf(15, "[MemorySP] SvDemo::GetMemorySize %i kb\n", v3 >> 10);
    GameMemoryAllocationSize = G_MainSP_GetGameMemoryAllocationSize(maxClients);
    v6 = ((GameMemoryAllocationSize + 127) & 0xFFFFFF80) + v4;
    Com_Printf(15, "[MemorySP] G_MainSP_GetGameMemoryAllocationSize %i kb\n", GameMemoryAllocationSize >> 10);
    AllocationSize = SV_ServerSnapshotCache_GetAllocationSize();
    v8 = ((AllocationSize + 127) & 0xFFFFFF80) + v6;
    Com_Printf(15, "[MemorySP] SV_ServerSnapshotCache_GetAllocationSize %i kb\n", AllocationSize >> 10);
    ServerAllocationSizeSP = XAnimProceduralBonesAllocator_GetServerAllocationSizeSP(maxClients);
    Com_Printf(15, "[MemorySP] XAnimProceduralBonesAllocator_GetServerAllocationSizeSP %i kb\n", ServerAllocationSizeSP >> 10);
    Com_Printf(15, "[MemorySP] Total %i kb\n", (v8 + ((ServerAllocationSizeSP + 127) & 0xFFFFFF80)) >> 10);
  }
}

/*
==============
SV_MemorySP_Shutdown
==============
*/
void SV_MemorySP_Shutdown()
{
  char v0; 
  SvPersistentGlobals *v1; 
  SvDemo *v2; 
  SvDemo *v3; 
  char v4; 
  SvClient **v5; 
  signed int v6; 
  void **v7; 
  __int64 v8; 
  char v9; 
  SvGameGlobals *v10; 
  char v11; 
  SvPersistentGlobals *v12; 

  ScriptableSv_ClearCounts();
  XAnimProceduralBonesAllocator_FreeServerMemory();
  SV_FreeServerSnapshotCache();
  G_MainSP_ShutdownGameMemory();
  v0 = SvDemo::ms_allocatedType;
  v1 = NULL;
  if ( (_BYTE)SvDemo::ms_allocatedType )
  {
    if ( (_BYTE)SvDemo::ms_allocatedType == HALF )
      goto LABEL_7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_demo.h", 295, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubServerType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubServerType::ALLOCATION_TYPE") )
      __debugbreak();
    v0 = SvDemo::ms_allocatedType;
  }
  if ( v0 != 1 )
  {
    v3 = SvDemo::ms_gServerDemoSystem;
    goto LABEL_13;
  }
LABEL_7:
  v2 = SvDemo::ms_gServerDemoSystem;
  if ( !SvDemo::ms_gServerDemoSystem )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_demo.h", 299, ASSERT_TYPE_ASSERT, "(ms_gServerDemoSystem != 0)", "%s\n\tSvDemo::FreeMemory: Trying to free server memory but none have been allocated\n", "ms_gServerDemoSystem != NULL") )
      __debugbreak();
    v2 = SvDemo::ms_gServerDemoSystem;
  }
  ((void (__fastcall *)(SvDemo *, _QWORD))v2->~SvDemo)(v2, 0i64);
  DebugWipe(SvDemo::ms_gServerDemoSystem, 0xC23DC8ui64);
  v3 = NULL;
  SvDemo::ms_gServerDemoSystem = NULL;
LABEL_13:
  LOBYTE(SvDemo::ms_allocatedType) = 0;
  if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_demo.h", 310, ASSERT_TYPE_ASSERT, "( ms_gServerDemoSystem == 0 )", (const char *)&queryFormat, "ms_gServerDemoSystem == NULL") )
    __debugbreak();
  v4 = SvClient::ms_allocatedType;
  v5 = SvClient::ms_clients;
  if ( !(_BYTE)SvClient::ms_allocatedType )
  {
LABEL_21:
    if ( v4 != 1 )
      goto LABEL_28;
    goto LABEL_22;
  }
  if ( (_BYTE)SvClient::ms_allocatedType != HALF )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_client.h", 171, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubClientType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubClientType::ALLOCATION_TYPE") )
      __debugbreak();
    v4 = SvClient::ms_allocatedType;
    goto LABEL_21;
  }
LABEL_22:
  if ( !SvClient::ms_clientCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_client.h", 175, ASSERT_TYPE_ASSERT, "(ms_clientCount > 0)", "%s\n\tFreeClientsMemoryCommon: Trying to free clients but no client has been allocated\n", "ms_clientCount > 0") )
    __debugbreak();
  v6 = SvClient::ms_clientCount - 1;
  if ( (int)(SvClient::ms_clientCount - 1) >= 0 )
  {
    v7 = (void **)&SvClient::ms_clients[v6];
    do
    {
      (**(void (__fastcall ***)(void *, _QWORD))*v7)(*v7, 0i64);
      DebugWipe(*v7, 0xDB30ui64);
      --v6;
      *v7-- = NULL;
    }
    while ( v6 >= 0 );
  }
LABEL_28:
  SvClient::ms_clientCount = 0;
  LOBYTE(SvClient::ms_allocatedType) = 0;
  v8 = 200i64;
  do
  {
    if ( *v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_client.h", 196, ASSERT_TYPE_ASSERT, "( !ms_clients[clientIndex] )", (const char *)&queryFormat, "!ms_clients[clientIndex]") )
      __debugbreak();
    ++v5;
    --v8;
  }
  while ( v8 );
  v9 = SvGameGlobals::ms_allocatedType;
  if ( (_BYTE)SvGameGlobals::ms_allocatedType )
  {
    if ( (_BYTE)SvGameGlobals::ms_allocatedType == HALF )
      goto LABEL_39;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 130, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubServerType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubServerType::ALLOCATION_TYPE") )
      __debugbreak();
    v9 = SvGameGlobals::ms_allocatedType;
  }
  if ( v9 != 1 )
  {
    v10 = SvGameGlobals::ms_svGameGlobals;
    goto LABEL_44;
  }
LABEL_39:
  if ( !SvGameGlobals::ms_svGameGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 134, ASSERT_TYPE_ASSERT, "(ms_svGameGlobals != 0)", "%s\n\tFreeSvGameGlobalsMemoryCommon: Trying to free server global memory but none have been allocated\n", "ms_svGameGlobals != NULL") )
    __debugbreak();
  SvGameGlobals::ClearConfigStrings(SvGameGlobals::ms_svGameGlobals);
  SvGameGlobals::~SvGameGlobals(SvGameGlobals::ms_svGameGlobals);
  DebugWipe(SvGameGlobals::ms_svGameGlobals, 0x61C8ui64);
  v10 = NULL;
  SvGameGlobals::ms_svGameGlobals = NULL;
LABEL_44:
  LOBYTE(SvGameGlobals::ms_allocatedType) = 0;
  if ( v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 145, ASSERT_TYPE_ASSERT, "( ms_svGameGlobals == 0 )", (const char *)&queryFormat, "ms_svGameGlobals == NULL") )
    __debugbreak();
  v11 = BYTE1(SvGameGlobals::ms_allocatedType);
  if ( BYTE1(SvGameGlobals::ms_allocatedType) )
  {
    if ( BYTE1(SvGameGlobals::ms_allocatedType) == 1 )
      goto LABEL_53;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_persistent_globals.h", 126, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubServerType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubServerType::ALLOCATION_TYPE") )
      __debugbreak();
    v11 = BYTE1(SvGameGlobals::ms_allocatedType);
  }
  if ( v11 != 1 )
  {
    v1 = SvPersistentGlobals::ms_svPersistent;
    goto LABEL_59;
  }
LABEL_53:
  v12 = SvPersistentGlobals::ms_svPersistent;
  if ( !SvPersistentGlobals::ms_svPersistent )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_persistent_globals.h", 130, ASSERT_TYPE_ASSERT, "(ms_svPersistent != 0)", "%s\n\tFreeServerPersistentGlobalsMemoryCommon: Trying to free server static memory but none have been allocated\n", "ms_svPersistent != NULL") )
      __debugbreak();
    v12 = SvPersistentGlobals::ms_svPersistent;
  }
  ((void (__fastcall *)(SvPersistentGlobals *, _QWORD))v12->~SvPersistentGlobals)(v12, 0i64);
  DebugWipe(SvPersistentGlobals::ms_svPersistent, 0x20ui64);
  SvPersistentGlobals::ms_svPersistent = NULL;
LABEL_59:
  BYTE1(SvGameGlobals::ms_allocatedType) = 0;
  if ( v1 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_persistent_globals.h", 142, ASSERT_TYPE_ASSERT, "( ms_svPersistent == 0 )", (const char *)&queryFormat, "ms_svPersistent == NULL") )
      __debugbreak();
  }
}

/*
==============
SvGameModeAppSP::ServerShutdown
==============
*/
void SvGameModeAppSP::ServerShutdown(SvGameModeAppSP *this)
{
  scrContext_t *v2; 

  if ( Com_IsAnyLocalServerRunning() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_init_sp.cpp", 1332, ASSERT_TYPE_ASSERT, "( !Com_IsAnyLocalServerRunning() )", (const char *)&queryFormat, "!Com_IsAnyLocalServerRunning()") )
    __debugbreak();
  ScriptableSv_DestroyMemory();
  G_ShutdownTagInfoHeap();
  G_Main_ShutdownXAnimHunkUser();
  SV_MemorySP_Shutdown();
  if ( g_serverHunkUser )
  {
    Mem_HunkUser_Destroy(g_serverHunkUser);
    g_serverHunkUser = NULL;
  }
  v2 = ScriptContext_Server();
  ScriptContext_MemoryFree(v2);
  this->m_restartServerThread = 1;
}

/*
==============
SvPersistentGlobalsSP::ServerShutdown
==============
*/
void SvPersistentGlobalsSP::ServerShutdown(SvPersistentGlobalsSP *this, const char *finalMsg)
{
  G_SaveMemorySP_WaitForWritesToComplete(0);
  SV_GameSP_ShutdownGameProgs();
  SV_InitSP_ClearServer();
  ScriptableSv_ClearCounts();
  Dvar_SetFloat_Internal(com_timescale, 1.0);
  Dvar_SetBool_Internal(com_cinematicEndInWhite, 0);
}

/*
==============
SvGameModeAppSP::ShutdownGameMode
==============
*/
void SvGameModeAppSP::ShutdownGameMode(SvGameModeAppSP *this)
{
  SV_Init_DeregisterDvarsCommon();
  DVARINT_g_gameskill = Dvar_Deregister(DVARINT_g_gameskill);
  DVARBOOL_g_specialistMode = Dvar_Deregister(DVARBOOL_g_specialistMode);
  DVARBOOL_g_yoloMode = Dvar_Deregister(DVARBOOL_g_yoloMode);
  DVARBOOL_sv_saveOnStartMap = Dvar_Deregister(DVARBOOL_sv_saveOnStartMap);
  DVARINT_RunForTime = Dvar_Deregister(DVARINT_RunForTime);
  DVARBOOL_serverCulledSounds = Dvar_Deregister(DVARBOOL_serverCulledSounds);
  DVARBOOL_disableSaveGameScreenShots = Dvar_Deregister(DVARBOOL_disableSaveGameScreenShots);
  DVARBOOL_sv_clientSaveFastCheckOn = Dvar_Deregister(DVARBOOL_sv_clientSaveFastCheckOn);
  SV_DemoSP_ShutdownSystem();
  G_SpawnSP_Shutdown();
}

